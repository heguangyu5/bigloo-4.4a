/*===========================================================================*/
/*   (Eval/library.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/library.scm -indent -o objs/obj_u/Eval/library.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	static obj_t BGl_za2loadedzd2librariesza2zd2zz__libraryz00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zz__libraryz00 = BUNSPEC;
	extern obj_t BGl_makezd2sharedzd2libzd2namezd2zz__osz00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_evalzd2modulezd2zz__evmodulez00();
	static obj_t BGl_list2005z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_untranslatezd2libraryzd2namez00zz__libraryz00(obj_t);
	static obj_t BGl_z62libraryzd2loadzd2initz62zz__libraryz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_libraryzd2load_ezd2zz__libraryz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__libraryz00();
	extern obj_t BGl_evalz00zz__evalz00(obj_t, obj_t);
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_getenvz00zz__osz00(obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__libraryz00();
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__libraryz00();
	extern obj_t bgl_register_eval_srfi(obj_t);
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol1983z00zz__libraryz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_libraryzd2multithreadzd2setz12z12zz__libraryz00(bool_t);
	static obj_t BGl_za2libraryzd2mutexza2zd2zz__libraryz00 = BUNSPEC;
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol1990z00zz__libraryz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_libraryzd2initzd2filez00zz__libraryz00(obj_t);
	static obj_t BGl_symbol1992z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_symbol1995z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_symbol1998z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_z62libraryzd2filezd2namez62zz__libraryz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_unixzd2pathzd2ze3listze3zz__osz00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl__declarezd2libraryz12zc0zz__libraryz00(obj_t, obj_t);
	static obj_t BGl_list2074z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_list2075z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zz__libraryz00();
	static obj_t BGl_list2080z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_list2081z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_keyword2006z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_keyword2008z00zz__libraryz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_libraryzd2infozd2zz__libraryz00(obj_t);
	static obj_t BGl_keyword2010z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_keyword2012z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_keyword2014z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_keyword2016z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_keyword2018z00zz__libraryz00 = BUNSPEC;
	extern obj_t BGl_dynamiczd2loadzd2zz__osz00(obj_t, obj_t, obj_t);
	static obj_t BGl_keyword2020z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_keyword2022z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_keyword2024z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31415ze3ze5zz__libraryz00(obj_t);
	extern obj_t string_append(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31351ze3ze5zz__libraryz00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern bool_t BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00(obj_t);
	static obj_t BGl_evalzd2libraryzd2suffixz00zz__libraryz00();
	static obj_t BGl_symbol2003z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_za2evalzd2libraryzd2suffixza2z00zz__libraryz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_libraryzd2loadzd2zz__libraryz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_declarezd2libraryz12zc0zz__libraryz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2026z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_za2loadedzd2initzd2filesza2z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_symbol2033z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_symbol2036z00zz__libraryz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__libraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_srfi0z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__everrorz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern bool_t fexists(char *);
	extern obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_symbol2046z00zz__libraryz00 = BUNSPEC;
	extern obj_t BGl_loadqz00zz__evalz00(obj_t, obj_t);
	static obj_t BGl_z62libraryzd2initzd2filez62zz__libraryz00(obj_t, obj_t);
	static obj_t
		BGl_z62libraryzd2translationzd2tablezd2addz12za2zz__libraryz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2051z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_symbol2056z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_symbol2058z00zz__libraryz00 = BUNSPEC;
	extern obj_t create_struct(obj_t, int);
	static obj_t BGl_cnstzd2initzd2zz__libraryz00();
	static obj_t BGl_symbol2060z00zz__libraryz00 = BUNSPEC;
	extern obj_t BGl_evwarningz00zz__everrorz00(obj_t, obj_t);
	static obj_t BGl_za2librariesza2z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_gczd2rootszd2initz00zz__libraryz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__libraryz00();
	static obj_t BGl_symbol2071z00zz__libraryz00 = BUNSPEC;
	extern obj_t bigloo_mangle(obj_t);
	static obj_t BGl_symbol2076z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_symbol2078z00zz__libraryz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_libraryzd2loadzd2initz00zz__libraryz00(obj_t,
		obj_t);
	static obj_t BGl_symbol2082z00zz__libraryz00 = BUNSPEC;
	extern obj_t BGl_bigloozd2configzd2zz__configurez00(obj_t);
	extern obj_t BGl_registerzd2srfiz12zc0zz__expander_srfi0z00(obj_t);
	extern obj_t BGl_interactionzd2environmentzd2zz__evalz00();
	static obj_t BGl_z62libraryzd2markzd2loadedz12z70zz__libraryz00(obj_t, obj_t);
	static obj_t BGl_z62libraryzd2infozb0zz__libraryz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_libraryzd2translationzd2tablezd2addz12zc0zz__libraryz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_libraryzd2existszf3z21zz__libraryz00(obj_t,
		obj_t);
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62libraryzd2existszf3z43zz__libraryz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_libraryzd2markzd2loadedz12z12zz__libraryz00(obj_t);
	extern obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_libraryzd2threadzd2suffixzd2setz12zc0zz__libraryz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_libraryzd2loadedzf3z21zz__libraryz00(obj_t);
	static obj_t BGl_z62libraryzd2loadedzf3z43zz__libraryz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_libraryzd2filezd2namez00zz__libraryz00(obj_t,
		obj_t, obj_t);
	extern obj_t bstring_to_keyword(obj_t);
	static obj_t BGl_z62libraryzd2multithreadzd2setz12z70zz__libraryz00(obj_t,
		obj_t);
	static obj_t BGl_z62libraryzd2threadzd2suffixzd2setz12za2zz__libraryz00(obj_t,
		obj_t);
	static obj_t BGl_z62libraryzd2load_ezb0zz__libraryz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_bigloozd2libraryzd2pathz00zz__paramz00();
	static obj_t BGl_libraryzd2threadzd2suffixz00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_z62libraryzd2loadzb0zz__libraryz00(obj_t, obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2040z00zz__libraryz00,
		BgL_bgl_string2040za700za7za7_2088za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string2041z00zz__libraryz00,
		BgL_bgl_string2041za700za7za7_2089za7, "_", 1);
	      DEFINE_STRING(BGl_string2042z00zz__libraryz00,
		BgL_bgl_string2042za700za7za7_2090za7, "_e", 2);
	      DEFINE_STRING(BGl_string2043z00zz__libraryz00,
		BgL_bgl_string2043za700za7za7_2091za7, "&library-translation-table-add!",
		31);
	      DEFINE_STRING(BGl_string2044z00zz__libraryz00,
		BgL_bgl_string2044za700za7za7_2092za7, ".init", 5);
	      DEFINE_STRING(BGl_string2045z00zz__libraryz00,
		BgL_bgl_string2045za700za7za7_2093za7, "&library-init-file", 18);
	      DEFINE_STRING(BGl_string2047z00zz__libraryz00,
		BgL_bgl_string2047za700za7za7_2094za7, "bigloo-c", 8);
	      DEFINE_STRING(BGl_string2048z00zz__libraryz00,
		BgL_bgl_string2048za700za7za7_2095za7, "unix", 4);
	      DEFINE_STRING(BGl_string2049z00zz__libraryz00,
		BgL_bgl_string2049za700za7za7_2096za7, "mingw", 5);
	      DEFINE_STRING(BGl_string2050z00zz__libraryz00,
		BgL_bgl_string2050za700za7za7_2097za7, "-", 1);
	      DEFINE_STRING(BGl_string2052z00zz__libraryz00,
		BgL_bgl_string2052za700za7za7_2098za7, "library-file-name", 17);
	      DEFINE_STRING(BGl_string2053z00zz__libraryz00,
		BgL_bgl_string2053za700za7za7_2099za7, "Illegal version", 15);
	      DEFINE_STRING(BGl_string2054z00zz__libraryz00,
		BgL_bgl_string2054za700za7za7_2100za7, "win32", 5);
	      DEFINE_STRING(BGl_string2055z00zz__libraryz00,
		BgL_bgl_string2055za700za7za7_2101za7, "Unknown os", 10);
	      DEFINE_STRING(BGl_string2057z00zz__libraryz00,
		BgL_bgl_string2057za700za7za7_2102za7, "bigloo-jvm", 10);
	      DEFINE_STRING(BGl_string2059z00zz__libraryz00,
		BgL_bgl_string2059za700za7za7_2103za7, "bigloo-.net", 11);
	      DEFINE_STRING(BGl_string2061z00zz__libraryz00,
		BgL_bgl_string2061za700za7za7_2104za7, "bigloo.net", 10);
	      DEFINE_STRING(BGl_string2062z00zz__libraryz00,
		BgL_bgl_string2062za700za7za7_2105za7, "Illegal backend", 15);
	      DEFINE_STRING(BGl_string2063z00zz__libraryz00,
		BgL_bgl_string2063za700za7za7_2106za7, "&library-file-name", 18);
	      DEFINE_STRING(BGl_string2064z00zz__libraryz00,
		BgL_bgl_string2064za700za7za7_2107za7, "&library-loaded?", 16);
	      DEFINE_STRING(BGl_string2065z00zz__libraryz00,
		BgL_bgl_string2065za700za7za7_2108za7, "&library-mark-loaded!", 21);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_libraryzd2loadzd2initzd2envzd2zz__libraryz00,
		BgL_bgl_za762libraryza7d2loa2109z00,
		BGl_z62libraryzd2loadzd2initz62zz__libraryz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2066z00zz__libraryz00,
		BgL_bgl_string2066za700za7za7_2110za7, "BIGLOOLIB", 9);
	      DEFINE_STRING(BGl_string2067z00zz__libraryz00,
		BgL_bgl_string2067za700za7za7_2111za7, ".", 1);
	      DEFINE_STRING(BGl_string2068z00zz__libraryz00,
		BgL_bgl_string2068za700za7za7_2112za7, "/resource/bigloo/", 17);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_libraryzd2multithreadzd2setz12zd2envzc0zz__libraryz00,
		BgL_bgl_za762libraryza7d2mul2113z00,
		BGl_z62libraryzd2multithreadzd2setz12z70zz__libraryz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2069z00zz__libraryz00,
		BgL_bgl_string2069za700za7za7_2114za7, "/make_lib.class", 15);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_libraryzd2infozd2envz00zz__libraryz00,
		BgL_bgl_za762libraryza7d2inf2115z00, BGl_z62libraryzd2infozb0zz__libraryz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2070z00zz__libraryz00,
		BgL_bgl_string2070za700za7za7_2116za7, "Can't find library `~a' (`~a')",
		30);
	      DEFINE_STRING(BGl_string2072z00zz__libraryz00,
		BgL_bgl_string2072za700za7za7_2117za7, "library-load", 12);
	      DEFINE_STRING(BGl_string2073z00zz__libraryz00,
		BgL_bgl_string2073za700za7za7_2118za7,
		"Can't find _e library `~a' (`~a') in path ", 42);
	      DEFINE_STRING(BGl_string2077z00zz__libraryz00,
		BgL_bgl_string2077za700za7za7_2119za7, "libinfo-init", 12);
	      DEFINE_STRING(BGl_string2079z00zz__libraryz00,
		BgL_bgl_string2079za700za7za7_2120za7, "info", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_libraryzd2loadedzf3zd2envzf3zz__libraryz00,
		BgL_bgl_za762libraryza7d2loa2121z00,
		BGl_z62libraryzd2loadedzf3z43zz__libraryz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2083z00zz__libraryz00,
		BgL_bgl_string2083za700za7za7_2122za7, "libinfo-eval", 12);
	      DEFINE_STRING(BGl_string2084z00zz__libraryz00,
		BgL_bgl_string2084za700za7za7_2123za7, "string or symbol", 16);
	      DEFINE_STRING(BGl_string2085z00zz__libraryz00,
		BgL_bgl_string2085za700za7za7_2124za7, ".heap", 5);
	      DEFINE_STRING(BGl_string2086z00zz__libraryz00,
		BgL_bgl_string2086za700za7za7_2125za7, "&library-exists?", 16);
	      DEFINE_STRING(BGl_string2087z00zz__libraryz00,
		BgL_bgl_string2087za700za7za7_2126za7, "__library", 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_libraryzd2markzd2loadedz12zd2envzc0zz__libraryz00,
		BgL_bgl_za762libraryza7d2mar2127z00,
		BGl_z62libraryzd2markzd2loadedz12z70zz__libraryz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_libraryzd2translationzd2tablezd2addz12zd2envz12zz__libraryz00,
		BgL_bgl_za762libraryza7d2tra2128z00, va_generic_entry,
		BGl_z62libraryzd2translationzd2tablezd2addz12za2zz__libraryz00, BUNSPEC,
		-3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_libraryzd2threadzd2suffixzd2setz12zd2envz12zz__libraryz00,
		BgL_bgl_za762libraryza7d2thr2129z00,
		BGl_z62libraryzd2threadzd2suffixzd2setz12za2zz__libraryz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_libraryzd2initzd2filezd2envzd2zz__libraryz00,
		BgL_bgl_za762libraryza7d2ini2130z00,
		BGl_z62libraryzd2initzd2filez62zz__libraryz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1984z00zz__libraryz00,
		BgL_bgl_string1984za700za7za7_2131za7, "library", 7);
	      DEFINE_STRING(BGl_string1985z00zz__libraryz00,
		BgL_bgl_string1985za700za7za7_2132za7, "", 0);
	      DEFINE_STRING(BGl_string1986z00zz__libraryz00,
		BgL_bgl_string1986za700za7za7_2133za7, "/tmp/4.4a/runtime/Eval/library.scm",
		34);
	      DEFINE_STRING(BGl_string1987z00zz__libraryz00,
		BgL_bgl_string1987za700za7za7_2134za7, "&library-thread-suffix-set!", 27);
	      DEFINE_STRING(BGl_string1988z00zz__libraryz00,
		BgL_bgl_string1988za700za7za7_2135za7, "bstring", 7);
	      DEFINE_STRING(BGl_string1989z00zz__libraryz00,
		BgL_bgl_string1989za700za7za7_2136za7, "_mt", 3);
	      DEFINE_STRING(BGl_string1991z00zz__libraryz00,
		BgL_bgl_string1991za700za7za7_2137za7, "library-safety", 14);
	      DEFINE_STRING(BGl_string1993z00zz__libraryz00,
		BgL_bgl_string1993za700za7za7_2138za7, "unsafe", 6);
	      DEFINE_STRING(BGl_string1994z00zz__libraryz00,
		BgL_bgl_string1994za700za7za7_2139za7, "u", 1);
	      DEFINE_STRING(BGl_string1996z00zz__libraryz00,
		BgL_bgl_string1996za700za7za7_2140za7, "safe", 4);
	      DEFINE_STRING(BGl_string1997z00zz__libraryz00,
		BgL_bgl_string1997za700za7za7_2141za7, "s", 1);
	      DEFINE_STRING(BGl_string1999z00zz__libraryz00,
		BgL_bgl_string1999za700za7za7_2142za7, "profile", 7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_libraryzd2loadzd2envz00zz__libraryz00,
		BgL_bgl_za762libraryza7d2loa2143z00, va_generic_entry,
		BGl_z62libraryzd2loadzb0zz__libraryz00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_libraryzd2load_ezd2envz00zz__libraryz00,
		BgL_bgl_za762libraryza7d2loa2144z00, va_generic_entry,
		BGl_z62libraryzd2load_ezb0zz__libraryz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_libraryzd2filezd2namezd2envzd2zz__libraryz00,
		BgL_bgl_za762libraryza7d2fil2145z00,
		BGl_z62libraryzd2filezd2namez62zz__libraryz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2000z00zz__libraryz00,
		BgL_bgl_string2000za700za7za7_2146za7, "p", 1);
	      DEFINE_STRING(BGl_string2001z00zz__libraryz00,
		BgL_bgl_string2001za700za7za7_2147za7, "_declare-library!", 17);
	      DEFINE_STRING(BGl_string2002z00zz__libraryz00,
		BgL_bgl_string2002za700za7za7_2148za7, "symbol", 6);
	      DEFINE_STRING(BGl_string2004z00zz__libraryz00,
		BgL_bgl_string2004za700za7za7_2149za7, "release-number", 14);
	      DEFINE_STRING(BGl_string2007z00zz__libraryz00,
		BgL_bgl_string2007za700za7za7_2150za7, "basename", 8);
	      DEFINE_STRING(BGl_string2009z00zz__libraryz00,
		BgL_bgl_string2009za700za7za7_2151za7, "class-eval", 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_declarezd2libraryz12zd2envz12zz__libraryz00,
		BgL_bgl__declareza7d2libra2152za7, opt_generic_entry,
		BGl__declarezd2libraryz12zc0zz__libraryz00, BFALSE, -1);
	      DEFINE_STRING(BGl_string2011z00zz__libraryz00,
		BgL_bgl_string2011za700za7za7_2153za7, "class-init", 10);
	      DEFINE_STRING(BGl_string2013z00zz__libraryz00,
		BgL_bgl_string2013za700za7za7_2154za7, "dlopen-init", 11);
	      DEFINE_STRING(BGl_string2015z00zz__libraryz00,
		BgL_bgl_string2015za700za7za7_2155za7, "eval", 4);
	      DEFINE_STRING(BGl_string2017z00zz__libraryz00,
		BgL_bgl_string2017za700za7za7_2156za7, "init", 4);
	      DEFINE_STRING(BGl_string2019z00zz__libraryz00,
		BgL_bgl_string2019za700za7za7_2157za7, "module-eval", 11);
	      DEFINE_STRING(BGl_string2021z00zz__libraryz00,
		BgL_bgl_string2021za700za7za7_2158za7, "module-init", 11);
	      DEFINE_STRING(BGl_string2023z00zz__libraryz00,
		BgL_bgl_string2023za700za7za7_2159za7, "srfi", 4);
	      DEFINE_STRING(BGl_string2025z00zz__libraryz00,
		BgL_bgl_string2025za700za7za7_2160za7, "version", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_libraryzd2existszf3zd2envzf3zz__libraryz00,
		BgL_bgl_za762libraryza7d2exi2161z00, va_generic_entry,
		BGl_z62libraryzd2existszf3z43zz__libraryz00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string2027z00zz__libraryz00,
		BgL_bgl_string2027za700za7za7_2162za7, "declare-library!", 16);
	      DEFINE_STRING(BGl_string2028z00zz__libraryz00,
		BgL_bgl_string2028za700za7za7_2163za7, "Illegal keyword argument", 24);
	      DEFINE_STRING(BGl_string2029z00zz__libraryz00,
		BgL_bgl_string2029za700za7za7_2164za7,
		"wrong number of arguments: [1..11] expected, provided", 53);
	      DEFINE_STRING(BGl_string2030z00zz__libraryz00,
		BgL_bgl_string2030za700za7za7_2165za7, "bint", 4);
	      DEFINE_STRING(BGl_string2031z00zz__libraryz00,
		BgL_bgl_string2031za700za7za7_2166za7, "~a_~a", 5);
	      DEFINE_STRING(BGl_string2032z00zz__libraryz00,
		BgL_bgl_string2032za700za7za7_2167za7, "~a_e~a", 6);
	      DEFINE_STRING(BGl_string2034z00zz__libraryz00,
		BgL_bgl_string2034za700za7za7_2168za7, "libinfo", 7);
	      DEFINE_STRING(BGl_string2035z00zz__libraryz00,
		BgL_bgl_string2035za700za7za7_2169za7, "&library-info", 13);
	      DEFINE_STRING(BGl_string2037z00zz__libraryz00,
		BgL_bgl_string2037za700za7za7_2170za7, "library-translation-table-add!",
		30);
	      DEFINE_STRING(BGl_string2038z00zz__libraryz00,
		BgL_bgl_string2038za700za7za7_2171za7, "Illegal :dlopen-init argument", 29);
	      DEFINE_STRING(BGl_string2039z00zz__libraryz00,
		BgL_bgl_string2039za700za7za7_2172za7, "Illegal :dlopen-init value", 26);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2loadedzd2librariesza2zd2zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_list2005z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_symbol1983z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_za2libraryzd2mutexza2zd2zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_symbol1990z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_symbol1992z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_symbol1995z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_symbol1998z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_list2074z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_list2075z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_list2080z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_list2081z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_keyword2006z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_keyword2008z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_keyword2010z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_keyword2012z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_keyword2014z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_keyword2016z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_keyword2018z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_keyword2020z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_keyword2022z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_keyword2024z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_symbol2003z00zz__libraryz00));
		   
			 ADD_ROOT((void *) (&BGl_za2evalzd2libraryzd2suffixza2z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_symbol2026z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_za2loadedzd2initzd2filesza2z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_symbol2033z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_symbol2036z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_symbol2046z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_symbol2051z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_symbol2056z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_symbol2058z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_symbol2060z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_za2librariesza2z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_symbol2071z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_symbol2076z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_symbol2078z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_symbol2082z00zz__libraryz00));
		     ADD_ROOT((void *) (&BGl_libraryzd2threadzd2suffixz00zz__libraryz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__libraryz00(long
		BgL_checksumz00_2965, char *BgL_fromz00_2966)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__libraryz00))
				{
					BGl_requirezd2initializa7ationz75zz__libraryz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__libraryz00();
					BGl_cnstzd2initzd2zz__libraryz00();
					BGl_importedzd2moduleszd2initz00zz__libraryz00();
					return BGl_toplevelzd2initzd2zz__libraryz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__libraryz00()
	{
		{	/* Eval/library.scm 15 */
			BGl_symbol1983z00zz__libraryz00 =
				bstring_to_symbol(BGl_string1984z00zz__libraryz00);
			BGl_symbol1990z00zz__libraryz00 =
				bstring_to_symbol(BGl_string1991z00zz__libraryz00);
			BGl_symbol1992z00zz__libraryz00 =
				bstring_to_symbol(BGl_string1993z00zz__libraryz00);
			BGl_symbol1995z00zz__libraryz00 =
				bstring_to_symbol(BGl_string1996z00zz__libraryz00);
			BGl_symbol1998z00zz__libraryz00 =
				bstring_to_symbol(BGl_string1999z00zz__libraryz00);
			BGl_symbol2003z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2004z00zz__libraryz00);
			BGl_keyword2006z00zz__libraryz00 =
				bstring_to_keyword(BGl_string2007z00zz__libraryz00);
			BGl_keyword2008z00zz__libraryz00 =
				bstring_to_keyword(BGl_string2009z00zz__libraryz00);
			BGl_keyword2010z00zz__libraryz00 =
				bstring_to_keyword(BGl_string2011z00zz__libraryz00);
			BGl_keyword2012z00zz__libraryz00 =
				bstring_to_keyword(BGl_string2013z00zz__libraryz00);
			BGl_keyword2014z00zz__libraryz00 =
				bstring_to_keyword(BGl_string2015z00zz__libraryz00);
			BGl_keyword2016z00zz__libraryz00 =
				bstring_to_keyword(BGl_string2017z00zz__libraryz00);
			BGl_keyword2018z00zz__libraryz00 =
				bstring_to_keyword(BGl_string2019z00zz__libraryz00);
			BGl_keyword2020z00zz__libraryz00 =
				bstring_to_keyword(BGl_string2021z00zz__libraryz00);
			BGl_keyword2022z00zz__libraryz00 =
				bstring_to_keyword(BGl_string2023z00zz__libraryz00);
			BGl_keyword2024z00zz__libraryz00 =
				bstring_to_keyword(BGl_string2025z00zz__libraryz00);
			BGl_list2005z00zz__libraryz00 =
				MAKE_YOUNG_PAIR(BGl_keyword2006z00zz__libraryz00,
				MAKE_YOUNG_PAIR(BGl_keyword2008z00zz__libraryz00,
					MAKE_YOUNG_PAIR(BGl_keyword2010z00zz__libraryz00,
						MAKE_YOUNG_PAIR(BGl_keyword2012z00zz__libraryz00,
							MAKE_YOUNG_PAIR(BGl_keyword2014z00zz__libraryz00,
								MAKE_YOUNG_PAIR(BGl_keyword2016z00zz__libraryz00,
									MAKE_YOUNG_PAIR(BGl_keyword2018z00zz__libraryz00,
										MAKE_YOUNG_PAIR(BGl_keyword2020z00zz__libraryz00,
											MAKE_YOUNG_PAIR(BGl_keyword2022z00zz__libraryz00,
												MAKE_YOUNG_PAIR(BGl_keyword2024z00zz__libraryz00,
													BNIL))))))))));
			BGl_symbol2026z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2027z00zz__libraryz00);
			BGl_symbol2033z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2034z00zz__libraryz00);
			BGl_symbol2036z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2037z00zz__libraryz00);
			BGl_symbol2046z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2047z00zz__libraryz00);
			BGl_symbol2051z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2052z00zz__libraryz00);
			BGl_symbol2056z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2057z00zz__libraryz00);
			BGl_symbol2058z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2059z00zz__libraryz00);
			BGl_symbol2060z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2061z00zz__libraryz00);
			BGl_symbol2071z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2072z00zz__libraryz00);
			BGl_symbol2076z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2077z00zz__libraryz00);
			BGl_symbol2078z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2079z00zz__libraryz00);
			BGl_list2075z00zz__libraryz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2076z00zz__libraryz00,
				MAKE_YOUNG_PAIR(BGl_symbol2078z00zz__libraryz00, BNIL));
			BGl_list2074z00zz__libraryz00 =
				MAKE_YOUNG_PAIR(BGl_list2075z00zz__libraryz00, BNIL);
			BGl_symbol2082z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2083z00zz__libraryz00);
			BGl_list2081z00zz__libraryz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2082z00zz__libraryz00,
				MAKE_YOUNG_PAIR(BGl_symbol2078z00zz__libraryz00, BNIL));
			return (BGl_list2080z00zz__libraryz00 =
				MAKE_YOUNG_PAIR(BGl_list2081z00zz__libraryz00, BNIL), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__libraryz00()
	{
		{	/* Eval/library.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__libraryz00()
	{
		{	/* Eval/library.scm 15 */
			{	/* Eval/library.scm 82 */
				obj_t BgL_res1771z00_1953;

				BgL_res1771z00_1953 = bgl_make_mutex(BGl_symbol1983z00zz__libraryz00);
				BGl_za2libraryzd2mutexza2zd2zz__libraryz00 = BgL_res1771z00_1953;
			}
			BGl_libraryzd2threadzd2suffixz00zz__libraryz00 =
				BGl_string1985z00zz__libraryz00;
			BGl_za2librariesza2z00zz__libraryz00 = BNIL;
			BGl_za2evalzd2libraryzd2suffixza2z00zz__libraryz00 = BFALSE;
			BGl_za2loadedzd2librariesza2zd2zz__libraryz00 = BNIL;
			return (BGl_za2loadedzd2initzd2filesza2z00zz__libraryz00 = BNIL, BUNSPEC);
		}

	}



/* library-thread-suffix-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_libraryzd2threadzd2suffixzd2setz12zc0zz__libraryz00(obj_t BgL_sufz00_3)
	{
		{	/* Eval/library.scm 92 */
			return (BGl_libraryzd2threadzd2suffixz00zz__libraryz00 =
				BgL_sufz00_3, BUNSPEC);
		}

	}



/* &library-thread-suffix-set! */
	obj_t BGl_z62libraryzd2threadzd2suffixzd2setz12za2zz__libraryz00(obj_t
		BgL_envz00_2862, obj_t BgL_sufz00_2863)
	{
		{	/* Eval/library.scm 92 */
			{	/* Eval/library.scm 93 */
				obj_t BgL_auxz00_3020;

				if (STRINGP(BgL_sufz00_2863))
					{	/* Eval/library.scm 93 */
						BgL_auxz00_3020 = BgL_sufz00_2863;
					}
				else
					{
						obj_t BgL_auxz00_3023;

						BgL_auxz00_3023 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1986z00zz__libraryz00,
							BINT(((long) 3262)), BGl_string1987z00zz__libraryz00,
							BGl_string1988z00zz__libraryz00, BgL_sufz00_2863);
						FAILURE(BgL_auxz00_3023, BFALSE, BFALSE);
					}
				return
					BGl_libraryzd2threadzd2suffixzd2setz12zc0zz__libraryz00
					(BgL_auxz00_3020);
			}
		}

	}



/* library-multithread-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_libraryzd2multithreadzd2setz12z12zz__libraryz00(bool_t BgL_valz00_4)
	{
		{	/* Eval/library.scm 98 */
			if (BgL_valz00_4)
				{	/* Eval/library.scm 99 */
					return (BGl_libraryzd2threadzd2suffixz00zz__libraryz00 =
						BGl_string1989z00zz__libraryz00, BUNSPEC);
				}
			else
				{	/* Eval/library.scm 99 */
					return (BGl_libraryzd2threadzd2suffixz00zz__libraryz00 =
						BGl_string1985z00zz__libraryz00, BUNSPEC);
				}
		}

	}



/* &library-multithread-set! */
	obj_t BGl_z62libraryzd2multithreadzd2setz12z70zz__libraryz00(obj_t
		BgL_envz00_2864, obj_t BgL_valz00_2865)
	{
		{	/* Eval/library.scm 98 */
			return
				BGl_libraryzd2multithreadzd2setz12z12zz__libraryz00(CBOOL
				(BgL_valz00_2865));
		}

	}



/* eval-library-suffix */
	obj_t BGl_evalzd2libraryzd2suffixz00zz__libraryz00()
	{
		{	/* Eval/library.scm 127 */
			if (CBOOL(BGl_za2evalzd2libraryzd2suffixza2z00zz__libraryz00))
				{	/* Eval/library.scm 128 */
					BFALSE;
				}
			else
				{	/* Eval/library.scm 130 */
					obj_t BgL_casezd2valuezd2_1239;

					BgL_casezd2valuezd2_1239 =
						BGl_bigloozd2configzd2zz__configurez00
						(BGl_symbol1990z00zz__libraryz00);
					if ((BgL_casezd2valuezd2_1239 == BGl_symbol1992z00zz__libraryz00))
						{	/* Eval/library.scm 130 */
							BGl_za2evalzd2libraryzd2suffixza2z00zz__libraryz00 =
								BGl_string1994z00zz__libraryz00;
						}
					else
						{	/* Eval/library.scm 130 */
							if ((BgL_casezd2valuezd2_1239 == BGl_symbol1995z00zz__libraryz00))
								{	/* Eval/library.scm 130 */
									BGl_za2evalzd2libraryzd2suffixza2z00zz__libraryz00 =
										BGl_string1997z00zz__libraryz00;
								}
							else
								{	/* Eval/library.scm 130 */
									if (
										(BgL_casezd2valuezd2_1239 ==
											BGl_symbol1998z00zz__libraryz00))
										{	/* Eval/library.scm 130 */
											BGl_za2evalzd2libraryzd2suffixza2z00zz__libraryz00 =
												BGl_string2000z00zz__libraryz00;
										}
									else
										{	/* Eval/library.scm 130 */
											BGl_za2evalzd2libraryzd2suffixza2z00zz__libraryz00 =
												BUNSPEC;
										}
								}
						}
				}
			return BGl_za2evalzd2libraryzd2suffixza2z00zz__libraryz00;
		}

	}



/* _declare-library! */
	obj_t BGl__declarezd2libraryz12zc0zz__libraryz00(obj_t BgL_env1116z00_67,
		obj_t BgL_opt1115z00_66)
	{
		{	/* Eval/library.scm 139 */
			{	/* Eval/library.scm 139 */
				obj_t BgL_idz00_1247;

				BgL_idz00_1247 = VECTOR_REF(BgL_opt1115z00_66, ((long) 0));
				{	/* Eval/library.scm 142 */
					obj_t BgL_basenamez00_1248;

					{	/* Eval/library.scm 142 */
						obj_t BgL_res1781z00_2011;

						{	/* Eval/library.scm 142 */
							obj_t BgL_symbolz00_2009;

							if (SYMBOLP(BgL_idz00_1247))
								{	/* Eval/library.scm 142 */
									BgL_symbolz00_2009 = BgL_idz00_1247;
								}
							else
								{
									obj_t BgL_auxz00_3043;

									BgL_auxz00_3043 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string1986z00zz__libraryz00, BINT(((long) 5479)),
										BGl_string2001z00zz__libraryz00,
										BGl_string2002z00zz__libraryz00, BgL_idz00_1247);
									FAILURE(BgL_auxz00_3043, BFALSE, BFALSE);
								}
							{	/* Eval/library.scm 142 */
								obj_t BgL_arg1592z00_2010;

								BgL_arg1592z00_2010 = SYMBOL_TO_STRING(BgL_symbolz00_2009);
								BgL_res1781z00_2011 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg1592z00_2010);
						}}
						BgL_basenamez00_1248 = BgL_res1781z00_2011;
					}
					{	/* Eval/library.scm 139 */
						obj_t BgL_classzd2evalzd2_1249;

						BgL_classzd2evalzd2_1249 = BFALSE;
						{	/* Eval/library.scm 139 */
							obj_t BgL_classzd2initzd2_1250;

							BgL_classzd2initzd2_1250 = BFALSE;
							{	/* Eval/library.scm 139 */
								obj_t BgL_dlopenzd2initzd2_1251;

								BgL_dlopenzd2initzd2_1251 = BFALSE;
								{	/* Eval/library.scm 139 */
									obj_t BgL_evalz00_1252;

									BgL_evalz00_1252 = BFALSE;
									{	/* Eval/library.scm 139 */
										obj_t BgL_initz00_1253;

										BgL_initz00_1253 = BFALSE;
										{	/* Eval/library.scm 139 */
											obj_t BgL_modulezd2evalzd2_1254;

											BgL_modulezd2evalzd2_1254 = BFALSE;
											{	/* Eval/library.scm 139 */
												obj_t BgL_modulezd2initzd2_1255;

												BgL_modulezd2initzd2_1255 = BFALSE;
												{	/* Eval/library.scm 148 */
													obj_t BgL_srfiz00_1256;

													BgL_srfiz00_1256 = BNIL;
													{	/* Eval/library.scm 141 */
														obj_t BgL_versionz00_1257;

														BgL_versionz00_1257 =
															BGl_bigloozd2configzd2zz__configurez00
															(BGl_symbol2003z00zz__libraryz00);
														{	/* Eval/library.scm 139 */

															{
																long BgL_iz00_1258;

																BgL_iz00_1258 = ((long) 1);
															BgL_check1119z00_1259:
																if (
																	(BgL_iz00_1258 ==
																		VECTOR_LENGTH(BgL_opt1115z00_66)))
																	{	/* Eval/library.scm 139 */
																		BNIL;
																	}
																else
																	{	/* Eval/library.scm 139 */
																		bool_t BgL_test2182z00_3053;

																		{	/* Eval/library.scm 139 */
																			obj_t BgL_arg1254z00_1265;

																			BgL_arg1254z00_1265 =
																				VECTOR_REF(BgL_opt1115z00_66,
																				BgL_iz00_1258);
																			BgL_test2182z00_3053 =
																				CBOOL
																				(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg1254z00_1265,
																					BGl_list2005z00zz__libraryz00));
																		}
																		if (BgL_test2182z00_3053)
																			{
																				long BgL_iz00_3057;

																				BgL_iz00_3057 =
																					(BgL_iz00_1258 + ((long) 2));
																				BgL_iz00_1258 = BgL_iz00_3057;
																				goto BgL_check1119z00_1259;
																			}
																		else
																			{	/* Eval/library.scm 139 */
																				obj_t BgL_arg1253z00_1264;

																				BgL_arg1253z00_1264 =
																					VECTOR_REF(BgL_opt1115z00_66,
																					BgL_iz00_1258);
																				BGl_errorz00zz__errorz00
																					(BGl_symbol2026z00zz__libraryz00,
																					BGl_string2028z00zz__libraryz00,
																					BgL_arg1253z00_1264);
																			}
																	}
															}
															{	/* Eval/library.scm 139 */
																obj_t BgL_index1121z00_1266;

																{
																	long BgL_iz00_2022;

																	BgL_iz00_2022 = ((long) 1);
																BgL_search1118z00_2021:
																	if (
																		(BgL_iz00_2022 ==
																			VECTOR_LENGTH(BgL_opt1115z00_66)))
																		{	/* Eval/library.scm 139 */
																			BgL_index1121z00_1266 = BINT(((long) -1));
																		}
																	else
																		{	/* Eval/library.scm 139 */
																			if (
																				(BgL_iz00_2022 ==
																					(VECTOR_LENGTH(BgL_opt1115z00_66) -
																						((long) 1))))
																				{	/* Eval/library.scm 139 */
																					BgL_index1121z00_1266 =
																						BGl_errorz00zz__errorz00
																						(BGl_symbol2026z00zz__libraryz00,
																						BGl_string2029z00zz__libraryz00,
																						BINT(VECTOR_LENGTH
																							(BgL_opt1115z00_66)));
																				}
																			else
																				{	/* Eval/library.scm 139 */
																					obj_t BgL_vz00_2035;

																					BgL_vz00_2035 =
																						VECTOR_REF(BgL_opt1115z00_66,
																						BgL_iz00_2022);
																					if ((BgL_vz00_2035 ==
																							BGl_keyword2006z00zz__libraryz00))
																						{	/* Eval/library.scm 139 */
																							BgL_index1121z00_1266 =
																								BINT(
																								(BgL_iz00_2022 + ((long) 1)));
																						}
																					else
																						{
																							long BgL_iz00_3077;

																							BgL_iz00_3077 =
																								(BgL_iz00_2022 + ((long) 2));
																							BgL_iz00_2022 = BgL_iz00_3077;
																							goto BgL_search1118z00_2021;
																						}
																				}
																		}
																}
																{	/* Eval/library.scm 139 */
																	bool_t BgL_test2186z00_3079;

																	{	/* Eval/library.scm 139 */
																		long BgL_n1z00_2042;

																		{	/* Eval/library.scm 139 */
																			obj_t BgL_tmpz00_3080;

																			if (INTEGERP(BgL_index1121z00_1266))
																				{	/* Eval/library.scm 139 */
																					BgL_tmpz00_3080 =
																						BgL_index1121z00_1266;
																				}
																			else
																				{
																					obj_t BgL_auxz00_3083;

																					BgL_auxz00_3083 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string1986z00zz__libraryz00,
																						BINT(((long) 5364)),
																						BGl_string2001z00zz__libraryz00,
																						BGl_string2030z00zz__libraryz00,
																						BgL_index1121z00_1266);
																					FAILURE(BgL_auxz00_3083, BFALSE,
																						BFALSE);
																				}
																			BgL_n1z00_2042 =
																				(long) CINT(BgL_tmpz00_3080);
																		}
																		BgL_test2186z00_3079 =
																			(BgL_n1z00_2042 >= ((long) 0));
																	}
																	if (BgL_test2186z00_3079)
																		{
																			long BgL_auxz00_3089;

																			{	/* Eval/library.scm 139 */
																				obj_t BgL_tmpz00_3090;

																				if (INTEGERP(BgL_index1121z00_1266))
																					{	/* Eval/library.scm 139 */
																						BgL_tmpz00_3090 =
																							BgL_index1121z00_1266;
																					}
																				else
																					{
																						obj_t BgL_auxz00_3093;

																						BgL_auxz00_3093 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string1986z00zz__libraryz00,
																							BINT(((long) 5364)),
																							BGl_string2001z00zz__libraryz00,
																							BGl_string2030z00zz__libraryz00,
																							BgL_index1121z00_1266);
																						FAILURE(BgL_auxz00_3093, BFALSE,
																							BFALSE);
																					}
																				BgL_auxz00_3089 =
																					(long) CINT(BgL_tmpz00_3090);
																			}
																			BgL_basenamez00_1248 =
																				VECTOR_REF(BgL_opt1115z00_66,
																				BgL_auxz00_3089);
																		}
																	else
																		{	/* Eval/library.scm 139 */
																			BFALSE;
																		}
																}
															}
															{	/* Eval/library.scm 139 */
																obj_t BgL_index1122z00_1268;

																{
																	long BgL_iz00_2045;

																	BgL_iz00_2045 = ((long) 1);
																BgL_search1118z00_2044:
																	if (
																		(BgL_iz00_2045 ==
																			VECTOR_LENGTH(BgL_opt1115z00_66)))
																		{	/* Eval/library.scm 139 */
																			BgL_index1122z00_1268 = BINT(((long) -1));
																		}
																	else
																		{	/* Eval/library.scm 139 */
																			if (
																				(BgL_iz00_2045 ==
																					(VECTOR_LENGTH(BgL_opt1115z00_66) -
																						((long) 1))))
																				{	/* Eval/library.scm 139 */
																					BgL_index1122z00_1268 =
																						BGl_errorz00zz__errorz00
																						(BGl_symbol2026z00zz__libraryz00,
																						BGl_string2029z00zz__libraryz00,
																						BINT(VECTOR_LENGTH
																							(BgL_opt1115z00_66)));
																				}
																			else
																				{	/* Eval/library.scm 139 */
																					obj_t BgL_vz00_2058;

																					BgL_vz00_2058 =
																						VECTOR_REF(BgL_opt1115z00_66,
																						BgL_iz00_2045);
																					if ((BgL_vz00_2058 ==
																							BGl_keyword2008z00zz__libraryz00))
																						{	/* Eval/library.scm 139 */
																							BgL_index1122z00_1268 =
																								BINT(
																								(BgL_iz00_2045 + ((long) 1)));
																						}
																					else
																						{
																							long BgL_iz00_3115;

																							BgL_iz00_3115 =
																								(BgL_iz00_2045 + ((long) 2));
																							BgL_iz00_2045 = BgL_iz00_3115;
																							goto BgL_search1118z00_2044;
																						}
																				}
																		}
																}
																{	/* Eval/library.scm 139 */
																	bool_t BgL_test2192z00_3117;

																	{	/* Eval/library.scm 139 */
																		long BgL_n1z00_2065;

																		{	/* Eval/library.scm 139 */
																			obj_t BgL_tmpz00_3118;

																			if (INTEGERP(BgL_index1122z00_1268))
																				{	/* Eval/library.scm 139 */
																					BgL_tmpz00_3118 =
																						BgL_index1122z00_1268;
																				}
																			else
																				{
																					obj_t BgL_auxz00_3121;

																					BgL_auxz00_3121 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string1986z00zz__libraryz00,
																						BINT(((long) 5364)),
																						BGl_string2001z00zz__libraryz00,
																						BGl_string2030z00zz__libraryz00,
																						BgL_index1122z00_1268);
																					FAILURE(BgL_auxz00_3121, BFALSE,
																						BFALSE);
																				}
																			BgL_n1z00_2065 =
																				(long) CINT(BgL_tmpz00_3118);
																		}
																		BgL_test2192z00_3117 =
																			(BgL_n1z00_2065 >= ((long) 0));
																	}
																	if (BgL_test2192z00_3117)
																		{
																			long BgL_auxz00_3127;

																			{	/* Eval/library.scm 139 */
																				obj_t BgL_tmpz00_3128;

																				if (INTEGERP(BgL_index1122z00_1268))
																					{	/* Eval/library.scm 139 */
																						BgL_tmpz00_3128 =
																							BgL_index1122z00_1268;
																					}
																				else
																					{
																						obj_t BgL_auxz00_3131;

																						BgL_auxz00_3131 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string1986z00zz__libraryz00,
																							BINT(((long) 5364)),
																							BGl_string2001z00zz__libraryz00,
																							BGl_string2030z00zz__libraryz00,
																							BgL_index1122z00_1268);
																						FAILURE(BgL_auxz00_3131, BFALSE,
																							BFALSE);
																					}
																				BgL_auxz00_3127 =
																					(long) CINT(BgL_tmpz00_3128);
																			}
																			BgL_classzd2evalzd2_1249 =
																				VECTOR_REF(BgL_opt1115z00_66,
																				BgL_auxz00_3127);
																		}
																	else
																		{	/* Eval/library.scm 139 */
																			BFALSE;
																		}
																}
															}
															{	/* Eval/library.scm 139 */
																obj_t BgL_index1123z00_1270;

																{
																	long BgL_iz00_2068;

																	BgL_iz00_2068 = ((long) 1);
																BgL_search1118z00_2067:
																	if (
																		(BgL_iz00_2068 ==
																			VECTOR_LENGTH(BgL_opt1115z00_66)))
																		{	/* Eval/library.scm 139 */
																			BgL_index1123z00_1270 = BINT(((long) -1));
																		}
																	else
																		{	/* Eval/library.scm 139 */
																			if (
																				(BgL_iz00_2068 ==
																					(VECTOR_LENGTH(BgL_opt1115z00_66) -
																						((long) 1))))
																				{	/* Eval/library.scm 139 */
																					BgL_index1123z00_1270 =
																						BGl_errorz00zz__errorz00
																						(BGl_symbol2026z00zz__libraryz00,
																						BGl_string2029z00zz__libraryz00,
																						BINT(VECTOR_LENGTH
																							(BgL_opt1115z00_66)));
																				}
																			else
																				{	/* Eval/library.scm 139 */
																					obj_t BgL_vz00_2081;

																					BgL_vz00_2081 =
																						VECTOR_REF(BgL_opt1115z00_66,
																						BgL_iz00_2068);
																					if ((BgL_vz00_2081 ==
																							BGl_keyword2010z00zz__libraryz00))
																						{	/* Eval/library.scm 139 */
																							BgL_index1123z00_1270 =
																								BINT(
																								(BgL_iz00_2068 + ((long) 1)));
																						}
																					else
																						{
																							long BgL_iz00_3153;

																							BgL_iz00_3153 =
																								(BgL_iz00_2068 + ((long) 2));
																							BgL_iz00_2068 = BgL_iz00_3153;
																							goto BgL_search1118z00_2067;
																						}
																				}
																		}
																}
																{	/* Eval/library.scm 139 */
																	bool_t BgL_test2198z00_3155;

																	{	/* Eval/library.scm 139 */
																		long BgL_n1z00_2088;

																		{	/* Eval/library.scm 139 */
																			obj_t BgL_tmpz00_3156;

																			if (INTEGERP(BgL_index1123z00_1270))
																				{	/* Eval/library.scm 139 */
																					BgL_tmpz00_3156 =
																						BgL_index1123z00_1270;
																				}
																			else
																				{
																					obj_t BgL_auxz00_3159;

																					BgL_auxz00_3159 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string1986z00zz__libraryz00,
																						BINT(((long) 5364)),
																						BGl_string2001z00zz__libraryz00,
																						BGl_string2030z00zz__libraryz00,
																						BgL_index1123z00_1270);
																					FAILURE(BgL_auxz00_3159, BFALSE,
																						BFALSE);
																				}
																			BgL_n1z00_2088 =
																				(long) CINT(BgL_tmpz00_3156);
																		}
																		BgL_test2198z00_3155 =
																			(BgL_n1z00_2088 >= ((long) 0));
																	}
																	if (BgL_test2198z00_3155)
																		{
																			long BgL_auxz00_3165;

																			{	/* Eval/library.scm 139 */
																				obj_t BgL_tmpz00_3166;

																				if (INTEGERP(BgL_index1123z00_1270))
																					{	/* Eval/library.scm 139 */
																						BgL_tmpz00_3166 =
																							BgL_index1123z00_1270;
																					}
																				else
																					{
																						obj_t BgL_auxz00_3169;

																						BgL_auxz00_3169 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string1986z00zz__libraryz00,
																							BINT(((long) 5364)),
																							BGl_string2001z00zz__libraryz00,
																							BGl_string2030z00zz__libraryz00,
																							BgL_index1123z00_1270);
																						FAILURE(BgL_auxz00_3169, BFALSE,
																							BFALSE);
																					}
																				BgL_auxz00_3165 =
																					(long) CINT(BgL_tmpz00_3166);
																			}
																			BgL_classzd2initzd2_1250 =
																				VECTOR_REF(BgL_opt1115z00_66,
																				BgL_auxz00_3165);
																		}
																	else
																		{	/* Eval/library.scm 139 */
																			BFALSE;
																		}
																}
															}
															{	/* Eval/library.scm 139 */
																obj_t BgL_index1124z00_1272;

																{
																	long BgL_iz00_2091;

																	BgL_iz00_2091 = ((long) 1);
																BgL_search1118z00_2090:
																	if (
																		(BgL_iz00_2091 ==
																			VECTOR_LENGTH(BgL_opt1115z00_66)))
																		{	/* Eval/library.scm 139 */
																			BgL_index1124z00_1272 = BINT(((long) -1));
																		}
																	else
																		{	/* Eval/library.scm 139 */
																			if (
																				(BgL_iz00_2091 ==
																					(VECTOR_LENGTH(BgL_opt1115z00_66) -
																						((long) 1))))
																				{	/* Eval/library.scm 139 */
																					BgL_index1124z00_1272 =
																						BGl_errorz00zz__errorz00
																						(BGl_symbol2026z00zz__libraryz00,
																						BGl_string2029z00zz__libraryz00,
																						BINT(VECTOR_LENGTH
																							(BgL_opt1115z00_66)));
																				}
																			else
																				{	/* Eval/library.scm 139 */
																					obj_t BgL_vz00_2104;

																					BgL_vz00_2104 =
																						VECTOR_REF(BgL_opt1115z00_66,
																						BgL_iz00_2091);
																					if ((BgL_vz00_2104 ==
																							BGl_keyword2012z00zz__libraryz00))
																						{	/* Eval/library.scm 139 */
																							BgL_index1124z00_1272 =
																								BINT(
																								(BgL_iz00_2091 + ((long) 1)));
																						}
																					else
																						{
																							long BgL_iz00_3191;

																							BgL_iz00_3191 =
																								(BgL_iz00_2091 + ((long) 2));
																							BgL_iz00_2091 = BgL_iz00_3191;
																							goto BgL_search1118z00_2090;
																						}
																				}
																		}
																}
																{	/* Eval/library.scm 139 */
																	bool_t BgL_test2204z00_3193;

																	{	/* Eval/library.scm 139 */
																		long BgL_n1z00_2111;

																		{	/* Eval/library.scm 139 */
																			obj_t BgL_tmpz00_3194;

																			if (INTEGERP(BgL_index1124z00_1272))
																				{	/* Eval/library.scm 139 */
																					BgL_tmpz00_3194 =
																						BgL_index1124z00_1272;
																				}
																			else
																				{
																					obj_t BgL_auxz00_3197;

																					BgL_auxz00_3197 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string1986z00zz__libraryz00,
																						BINT(((long) 5364)),
																						BGl_string2001z00zz__libraryz00,
																						BGl_string2030z00zz__libraryz00,
																						BgL_index1124z00_1272);
																					FAILURE(BgL_auxz00_3197, BFALSE,
																						BFALSE);
																				}
																			BgL_n1z00_2111 =
																				(long) CINT(BgL_tmpz00_3194);
																		}
																		BgL_test2204z00_3193 =
																			(BgL_n1z00_2111 >= ((long) 0));
																	}
																	if (BgL_test2204z00_3193)
																		{
																			long BgL_auxz00_3203;

																			{	/* Eval/library.scm 139 */
																				obj_t BgL_tmpz00_3204;

																				if (INTEGERP(BgL_index1124z00_1272))
																					{	/* Eval/library.scm 139 */
																						BgL_tmpz00_3204 =
																							BgL_index1124z00_1272;
																					}
																				else
																					{
																						obj_t BgL_auxz00_3207;

																						BgL_auxz00_3207 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string1986z00zz__libraryz00,
																							BINT(((long) 5364)),
																							BGl_string2001z00zz__libraryz00,
																							BGl_string2030z00zz__libraryz00,
																							BgL_index1124z00_1272);
																						FAILURE(BgL_auxz00_3207, BFALSE,
																							BFALSE);
																					}
																				BgL_auxz00_3203 =
																					(long) CINT(BgL_tmpz00_3204);
																			}
																			BgL_dlopenzd2initzd2_1251 =
																				VECTOR_REF(BgL_opt1115z00_66,
																				BgL_auxz00_3203);
																		}
																	else
																		{	/* Eval/library.scm 139 */
																			BFALSE;
																		}
																}
															}
															{	/* Eval/library.scm 139 */
																obj_t BgL_index1125z00_1274;

																{
																	long BgL_iz00_2114;

																	BgL_iz00_2114 = ((long) 1);
																BgL_search1118z00_2113:
																	if (
																		(BgL_iz00_2114 ==
																			VECTOR_LENGTH(BgL_opt1115z00_66)))
																		{	/* Eval/library.scm 139 */
																			BgL_index1125z00_1274 = BINT(((long) -1));
																		}
																	else
																		{	/* Eval/library.scm 139 */
																			if (
																				(BgL_iz00_2114 ==
																					(VECTOR_LENGTH(BgL_opt1115z00_66) -
																						((long) 1))))
																				{	/* Eval/library.scm 139 */
																					BgL_index1125z00_1274 =
																						BGl_errorz00zz__errorz00
																						(BGl_symbol2026z00zz__libraryz00,
																						BGl_string2029z00zz__libraryz00,
																						BINT(VECTOR_LENGTH
																							(BgL_opt1115z00_66)));
																				}
																			else
																				{	/* Eval/library.scm 139 */
																					obj_t BgL_vz00_2127;

																					BgL_vz00_2127 =
																						VECTOR_REF(BgL_opt1115z00_66,
																						BgL_iz00_2114);
																					if ((BgL_vz00_2127 ==
																							BGl_keyword2014z00zz__libraryz00))
																						{	/* Eval/library.scm 139 */
																							BgL_index1125z00_1274 =
																								BINT(
																								(BgL_iz00_2114 + ((long) 1)));
																						}
																					else
																						{
																							long BgL_iz00_3229;

																							BgL_iz00_3229 =
																								(BgL_iz00_2114 + ((long) 2));
																							BgL_iz00_2114 = BgL_iz00_3229;
																							goto BgL_search1118z00_2113;
																						}
																				}
																		}
																}
																{	/* Eval/library.scm 139 */
																	bool_t BgL_test2210z00_3231;

																	{	/* Eval/library.scm 139 */
																		long BgL_n1z00_2134;

																		{	/* Eval/library.scm 139 */
																			obj_t BgL_tmpz00_3232;

																			if (INTEGERP(BgL_index1125z00_1274))
																				{	/* Eval/library.scm 139 */
																					BgL_tmpz00_3232 =
																						BgL_index1125z00_1274;
																				}
																			else
																				{
																					obj_t BgL_auxz00_3235;

																					BgL_auxz00_3235 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string1986z00zz__libraryz00,
																						BINT(((long) 5364)),
																						BGl_string2001z00zz__libraryz00,
																						BGl_string2030z00zz__libraryz00,
																						BgL_index1125z00_1274);
																					FAILURE(BgL_auxz00_3235, BFALSE,
																						BFALSE);
																				}
																			BgL_n1z00_2134 =
																				(long) CINT(BgL_tmpz00_3232);
																		}
																		BgL_test2210z00_3231 =
																			(BgL_n1z00_2134 >= ((long) 0));
																	}
																	if (BgL_test2210z00_3231)
																		{
																			long BgL_auxz00_3241;

																			{	/* Eval/library.scm 139 */
																				obj_t BgL_tmpz00_3242;

																				if (INTEGERP(BgL_index1125z00_1274))
																					{	/* Eval/library.scm 139 */
																						BgL_tmpz00_3242 =
																							BgL_index1125z00_1274;
																					}
																				else
																					{
																						obj_t BgL_auxz00_3245;

																						BgL_auxz00_3245 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string1986z00zz__libraryz00,
																							BINT(((long) 5364)),
																							BGl_string2001z00zz__libraryz00,
																							BGl_string2030z00zz__libraryz00,
																							BgL_index1125z00_1274);
																						FAILURE(BgL_auxz00_3245, BFALSE,
																							BFALSE);
																					}
																				BgL_auxz00_3241 =
																					(long) CINT(BgL_tmpz00_3242);
																			}
																			BgL_evalz00_1252 =
																				VECTOR_REF(BgL_opt1115z00_66,
																				BgL_auxz00_3241);
																		}
																	else
																		{	/* Eval/library.scm 139 */
																			BFALSE;
																		}
																}
															}
															{	/* Eval/library.scm 139 */
																obj_t BgL_index1126z00_1276;

																{
																	long BgL_iz00_2137;

																	BgL_iz00_2137 = ((long) 1);
																BgL_search1118z00_2136:
																	if (
																		(BgL_iz00_2137 ==
																			VECTOR_LENGTH(BgL_opt1115z00_66)))
																		{	/* Eval/library.scm 139 */
																			BgL_index1126z00_1276 = BINT(((long) -1));
																		}
																	else
																		{	/* Eval/library.scm 139 */
																			if (
																				(BgL_iz00_2137 ==
																					(VECTOR_LENGTH(BgL_opt1115z00_66) -
																						((long) 1))))
																				{	/* Eval/library.scm 139 */
																					BgL_index1126z00_1276 =
																						BGl_errorz00zz__errorz00
																						(BGl_symbol2026z00zz__libraryz00,
																						BGl_string2029z00zz__libraryz00,
																						BINT(VECTOR_LENGTH
																							(BgL_opt1115z00_66)));
																				}
																			else
																				{	/* Eval/library.scm 139 */
																					obj_t BgL_vz00_2150;

																					BgL_vz00_2150 =
																						VECTOR_REF(BgL_opt1115z00_66,
																						BgL_iz00_2137);
																					if ((BgL_vz00_2150 ==
																							BGl_keyword2016z00zz__libraryz00))
																						{	/* Eval/library.scm 139 */
																							BgL_index1126z00_1276 =
																								BINT(
																								(BgL_iz00_2137 + ((long) 1)));
																						}
																					else
																						{
																							long BgL_iz00_3267;

																							BgL_iz00_3267 =
																								(BgL_iz00_2137 + ((long) 2));
																							BgL_iz00_2137 = BgL_iz00_3267;
																							goto BgL_search1118z00_2136;
																						}
																				}
																		}
																}
																{	/* Eval/library.scm 139 */
																	bool_t BgL_test2216z00_3269;

																	{	/* Eval/library.scm 139 */
																		long BgL_n1z00_2157;

																		{	/* Eval/library.scm 139 */
																			obj_t BgL_tmpz00_3270;

																			if (INTEGERP(BgL_index1126z00_1276))
																				{	/* Eval/library.scm 139 */
																					BgL_tmpz00_3270 =
																						BgL_index1126z00_1276;
																				}
																			else
																				{
																					obj_t BgL_auxz00_3273;

																					BgL_auxz00_3273 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string1986z00zz__libraryz00,
																						BINT(((long) 5364)),
																						BGl_string2001z00zz__libraryz00,
																						BGl_string2030z00zz__libraryz00,
																						BgL_index1126z00_1276);
																					FAILURE(BgL_auxz00_3273, BFALSE,
																						BFALSE);
																				}
																			BgL_n1z00_2157 =
																				(long) CINT(BgL_tmpz00_3270);
																		}
																		BgL_test2216z00_3269 =
																			(BgL_n1z00_2157 >= ((long) 0));
																	}
																	if (BgL_test2216z00_3269)
																		{
																			long BgL_auxz00_3279;

																			{	/* Eval/library.scm 139 */
																				obj_t BgL_tmpz00_3280;

																				if (INTEGERP(BgL_index1126z00_1276))
																					{	/* Eval/library.scm 139 */
																						BgL_tmpz00_3280 =
																							BgL_index1126z00_1276;
																					}
																				else
																					{
																						obj_t BgL_auxz00_3283;

																						BgL_auxz00_3283 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string1986z00zz__libraryz00,
																							BINT(((long) 5364)),
																							BGl_string2001z00zz__libraryz00,
																							BGl_string2030z00zz__libraryz00,
																							BgL_index1126z00_1276);
																						FAILURE(BgL_auxz00_3283, BFALSE,
																							BFALSE);
																					}
																				BgL_auxz00_3279 =
																					(long) CINT(BgL_tmpz00_3280);
																			}
																			BgL_initz00_1253 =
																				VECTOR_REF(BgL_opt1115z00_66,
																				BgL_auxz00_3279);
																		}
																	else
																		{	/* Eval/library.scm 139 */
																			BFALSE;
																		}
																}
															}
															{	/* Eval/library.scm 139 */
																obj_t BgL_index1127z00_1278;

																{
																	long BgL_iz00_2160;

																	BgL_iz00_2160 = ((long) 1);
																BgL_search1118z00_2159:
																	if (
																		(BgL_iz00_2160 ==
																			VECTOR_LENGTH(BgL_opt1115z00_66)))
																		{	/* Eval/library.scm 139 */
																			BgL_index1127z00_1278 = BINT(((long) -1));
																		}
																	else
																		{	/* Eval/library.scm 139 */
																			if (
																				(BgL_iz00_2160 ==
																					(VECTOR_LENGTH(BgL_opt1115z00_66) -
																						((long) 1))))
																				{	/* Eval/library.scm 139 */
																					BgL_index1127z00_1278 =
																						BGl_errorz00zz__errorz00
																						(BGl_symbol2026z00zz__libraryz00,
																						BGl_string2029z00zz__libraryz00,
																						BINT(VECTOR_LENGTH
																							(BgL_opt1115z00_66)));
																				}
																			else
																				{	/* Eval/library.scm 139 */
																					obj_t BgL_vz00_2173;

																					BgL_vz00_2173 =
																						VECTOR_REF(BgL_opt1115z00_66,
																						BgL_iz00_2160);
																					if ((BgL_vz00_2173 ==
																							BGl_keyword2018z00zz__libraryz00))
																						{	/* Eval/library.scm 139 */
																							BgL_index1127z00_1278 =
																								BINT(
																								(BgL_iz00_2160 + ((long) 1)));
																						}
																					else
																						{
																							long BgL_iz00_3305;

																							BgL_iz00_3305 =
																								(BgL_iz00_2160 + ((long) 2));
																							BgL_iz00_2160 = BgL_iz00_3305;
																							goto BgL_search1118z00_2159;
																						}
																				}
																		}
																}
																{	/* Eval/library.scm 139 */
																	bool_t BgL_test2222z00_3307;

																	{	/* Eval/library.scm 139 */
																		long BgL_n1z00_2180;

																		{	/* Eval/library.scm 139 */
																			obj_t BgL_tmpz00_3308;

																			if (INTEGERP(BgL_index1127z00_1278))
																				{	/* Eval/library.scm 139 */
																					BgL_tmpz00_3308 =
																						BgL_index1127z00_1278;
																				}
																			else
																				{
																					obj_t BgL_auxz00_3311;

																					BgL_auxz00_3311 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string1986z00zz__libraryz00,
																						BINT(((long) 5364)),
																						BGl_string2001z00zz__libraryz00,
																						BGl_string2030z00zz__libraryz00,
																						BgL_index1127z00_1278);
																					FAILURE(BgL_auxz00_3311, BFALSE,
																						BFALSE);
																				}
																			BgL_n1z00_2180 =
																				(long) CINT(BgL_tmpz00_3308);
																		}
																		BgL_test2222z00_3307 =
																			(BgL_n1z00_2180 >= ((long) 0));
																	}
																	if (BgL_test2222z00_3307)
																		{
																			long BgL_auxz00_3317;

																			{	/* Eval/library.scm 139 */
																				obj_t BgL_tmpz00_3318;

																				if (INTEGERP(BgL_index1127z00_1278))
																					{	/* Eval/library.scm 139 */
																						BgL_tmpz00_3318 =
																							BgL_index1127z00_1278;
																					}
																				else
																					{
																						obj_t BgL_auxz00_3321;

																						BgL_auxz00_3321 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string1986z00zz__libraryz00,
																							BINT(((long) 5364)),
																							BGl_string2001z00zz__libraryz00,
																							BGl_string2030z00zz__libraryz00,
																							BgL_index1127z00_1278);
																						FAILURE(BgL_auxz00_3321, BFALSE,
																							BFALSE);
																					}
																				BgL_auxz00_3317 =
																					(long) CINT(BgL_tmpz00_3318);
																			}
																			BgL_modulezd2evalzd2_1254 =
																				VECTOR_REF(BgL_opt1115z00_66,
																				BgL_auxz00_3317);
																		}
																	else
																		{	/* Eval/library.scm 139 */
																			BFALSE;
																		}
																}
															}
															{	/* Eval/library.scm 139 */
																obj_t BgL_index1128z00_1280;

																{
																	long BgL_iz00_2183;

																	BgL_iz00_2183 = ((long) 1);
																BgL_search1118z00_2182:
																	if (
																		(BgL_iz00_2183 ==
																			VECTOR_LENGTH(BgL_opt1115z00_66)))
																		{	/* Eval/library.scm 139 */
																			BgL_index1128z00_1280 = BINT(((long) -1));
																		}
																	else
																		{	/* Eval/library.scm 139 */
																			if (
																				(BgL_iz00_2183 ==
																					(VECTOR_LENGTH(BgL_opt1115z00_66) -
																						((long) 1))))
																				{	/* Eval/library.scm 139 */
																					BgL_index1128z00_1280 =
																						BGl_errorz00zz__errorz00
																						(BGl_symbol2026z00zz__libraryz00,
																						BGl_string2029z00zz__libraryz00,
																						BINT(VECTOR_LENGTH
																							(BgL_opt1115z00_66)));
																				}
																			else
																				{	/* Eval/library.scm 139 */
																					obj_t BgL_vz00_2196;

																					BgL_vz00_2196 =
																						VECTOR_REF(BgL_opt1115z00_66,
																						BgL_iz00_2183);
																					if ((BgL_vz00_2196 ==
																							BGl_keyword2020z00zz__libraryz00))
																						{	/* Eval/library.scm 139 */
																							BgL_index1128z00_1280 =
																								BINT(
																								(BgL_iz00_2183 + ((long) 1)));
																						}
																					else
																						{
																							long BgL_iz00_3343;

																							BgL_iz00_3343 =
																								(BgL_iz00_2183 + ((long) 2));
																							BgL_iz00_2183 = BgL_iz00_3343;
																							goto BgL_search1118z00_2182;
																						}
																				}
																		}
																}
																{	/* Eval/library.scm 139 */
																	bool_t BgL_test2228z00_3345;

																	{	/* Eval/library.scm 139 */
																		long BgL_n1z00_2203;

																		{	/* Eval/library.scm 139 */
																			obj_t BgL_tmpz00_3346;

																			if (INTEGERP(BgL_index1128z00_1280))
																				{	/* Eval/library.scm 139 */
																					BgL_tmpz00_3346 =
																						BgL_index1128z00_1280;
																				}
																			else
																				{
																					obj_t BgL_auxz00_3349;

																					BgL_auxz00_3349 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string1986z00zz__libraryz00,
																						BINT(((long) 5364)),
																						BGl_string2001z00zz__libraryz00,
																						BGl_string2030z00zz__libraryz00,
																						BgL_index1128z00_1280);
																					FAILURE(BgL_auxz00_3349, BFALSE,
																						BFALSE);
																				}
																			BgL_n1z00_2203 =
																				(long) CINT(BgL_tmpz00_3346);
																		}
																		BgL_test2228z00_3345 =
																			(BgL_n1z00_2203 >= ((long) 0));
																	}
																	if (BgL_test2228z00_3345)
																		{
																			long BgL_auxz00_3355;

																			{	/* Eval/library.scm 139 */
																				obj_t BgL_tmpz00_3356;

																				if (INTEGERP(BgL_index1128z00_1280))
																					{	/* Eval/library.scm 139 */
																						BgL_tmpz00_3356 =
																							BgL_index1128z00_1280;
																					}
																				else
																					{
																						obj_t BgL_auxz00_3359;

																						BgL_auxz00_3359 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string1986z00zz__libraryz00,
																							BINT(((long) 5364)),
																							BGl_string2001z00zz__libraryz00,
																							BGl_string2030z00zz__libraryz00,
																							BgL_index1128z00_1280);
																						FAILURE(BgL_auxz00_3359, BFALSE,
																							BFALSE);
																					}
																				BgL_auxz00_3355 =
																					(long) CINT(BgL_tmpz00_3356);
																			}
																			BgL_modulezd2initzd2_1255 =
																				VECTOR_REF(BgL_opt1115z00_66,
																				BgL_auxz00_3355);
																		}
																	else
																		{	/* Eval/library.scm 139 */
																			BFALSE;
																		}
																}
															}
															{	/* Eval/library.scm 139 */
																obj_t BgL_index1129z00_1282;

																{
																	long BgL_iz00_2206;

																	BgL_iz00_2206 = ((long) 1);
																BgL_search1118z00_2205:
																	if (
																		(BgL_iz00_2206 ==
																			VECTOR_LENGTH(BgL_opt1115z00_66)))
																		{	/* Eval/library.scm 139 */
																			BgL_index1129z00_1282 = BINT(((long) -1));
																		}
																	else
																		{	/* Eval/library.scm 139 */
																			if (
																				(BgL_iz00_2206 ==
																					(VECTOR_LENGTH(BgL_opt1115z00_66) -
																						((long) 1))))
																				{	/* Eval/library.scm 139 */
																					BgL_index1129z00_1282 =
																						BGl_errorz00zz__errorz00
																						(BGl_symbol2026z00zz__libraryz00,
																						BGl_string2029z00zz__libraryz00,
																						BINT(VECTOR_LENGTH
																							(BgL_opt1115z00_66)));
																				}
																			else
																				{	/* Eval/library.scm 139 */
																					obj_t BgL_vz00_2219;

																					BgL_vz00_2219 =
																						VECTOR_REF(BgL_opt1115z00_66,
																						BgL_iz00_2206);
																					if ((BgL_vz00_2219 ==
																							BGl_keyword2022z00zz__libraryz00))
																						{	/* Eval/library.scm 139 */
																							BgL_index1129z00_1282 =
																								BINT(
																								(BgL_iz00_2206 + ((long) 1)));
																						}
																					else
																						{
																							long BgL_iz00_3381;

																							BgL_iz00_3381 =
																								(BgL_iz00_2206 + ((long) 2));
																							BgL_iz00_2206 = BgL_iz00_3381;
																							goto BgL_search1118z00_2205;
																						}
																				}
																		}
																}
																{	/* Eval/library.scm 139 */
																	bool_t BgL_test2234z00_3383;

																	{	/* Eval/library.scm 139 */
																		long BgL_n1z00_2226;

																		{	/* Eval/library.scm 139 */
																			obj_t BgL_tmpz00_3384;

																			if (INTEGERP(BgL_index1129z00_1282))
																				{	/* Eval/library.scm 139 */
																					BgL_tmpz00_3384 =
																						BgL_index1129z00_1282;
																				}
																			else
																				{
																					obj_t BgL_auxz00_3387;

																					BgL_auxz00_3387 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string1986z00zz__libraryz00,
																						BINT(((long) 5364)),
																						BGl_string2001z00zz__libraryz00,
																						BGl_string2030z00zz__libraryz00,
																						BgL_index1129z00_1282);
																					FAILURE(BgL_auxz00_3387, BFALSE,
																						BFALSE);
																				}
																			BgL_n1z00_2226 =
																				(long) CINT(BgL_tmpz00_3384);
																		}
																		BgL_test2234z00_3383 =
																			(BgL_n1z00_2226 >= ((long) 0));
																	}
																	if (BgL_test2234z00_3383)
																		{
																			long BgL_auxz00_3393;

																			{	/* Eval/library.scm 139 */
																				obj_t BgL_tmpz00_3394;

																				if (INTEGERP(BgL_index1129z00_1282))
																					{	/* Eval/library.scm 139 */
																						BgL_tmpz00_3394 =
																							BgL_index1129z00_1282;
																					}
																				else
																					{
																						obj_t BgL_auxz00_3397;

																						BgL_auxz00_3397 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string1986z00zz__libraryz00,
																							BINT(((long) 5364)),
																							BGl_string2001z00zz__libraryz00,
																							BGl_string2030z00zz__libraryz00,
																							BgL_index1129z00_1282);
																						FAILURE(BgL_auxz00_3397, BFALSE,
																							BFALSE);
																					}
																				BgL_auxz00_3393 =
																					(long) CINT(BgL_tmpz00_3394);
																			}
																			BgL_srfiz00_1256 =
																				VECTOR_REF(BgL_opt1115z00_66,
																				BgL_auxz00_3393);
																		}
																	else
																		{	/* Eval/library.scm 139 */
																			BFALSE;
																		}
																}
															}
															{	/* Eval/library.scm 139 */
																obj_t BgL_index1130z00_1284;

																{
																	long BgL_iz00_2229;

																	BgL_iz00_2229 = ((long) 1);
																BgL_search1118z00_2228:
																	if (
																		(BgL_iz00_2229 ==
																			VECTOR_LENGTH(BgL_opt1115z00_66)))
																		{	/* Eval/library.scm 139 */
																			BgL_index1130z00_1284 = BINT(((long) -1));
																		}
																	else
																		{	/* Eval/library.scm 139 */
																			if (
																				(BgL_iz00_2229 ==
																					(VECTOR_LENGTH(BgL_opt1115z00_66) -
																						((long) 1))))
																				{	/* Eval/library.scm 139 */
																					BgL_index1130z00_1284 =
																						BGl_errorz00zz__errorz00
																						(BGl_symbol2026z00zz__libraryz00,
																						BGl_string2029z00zz__libraryz00,
																						BINT(VECTOR_LENGTH
																							(BgL_opt1115z00_66)));
																				}
																			else
																				{	/* Eval/library.scm 139 */
																					obj_t BgL_vz00_2242;

																					BgL_vz00_2242 =
																						VECTOR_REF(BgL_opt1115z00_66,
																						BgL_iz00_2229);
																					if ((BgL_vz00_2242 ==
																							BGl_keyword2024z00zz__libraryz00))
																						{	/* Eval/library.scm 139 */
																							BgL_index1130z00_1284 =
																								BINT(
																								(BgL_iz00_2229 + ((long) 1)));
																						}
																					else
																						{
																							long BgL_iz00_3419;

																							BgL_iz00_3419 =
																								(BgL_iz00_2229 + ((long) 2));
																							BgL_iz00_2229 = BgL_iz00_3419;
																							goto BgL_search1118z00_2228;
																						}
																				}
																		}
																}
																{	/* Eval/library.scm 139 */
																	bool_t BgL_test2240z00_3421;

																	{	/* Eval/library.scm 139 */
																		long BgL_n1z00_2249;

																		{	/* Eval/library.scm 139 */
																			obj_t BgL_tmpz00_3422;

																			if (INTEGERP(BgL_index1130z00_1284))
																				{	/* Eval/library.scm 139 */
																					BgL_tmpz00_3422 =
																						BgL_index1130z00_1284;
																				}
																			else
																				{
																					obj_t BgL_auxz00_3425;

																					BgL_auxz00_3425 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string1986z00zz__libraryz00,
																						BINT(((long) 5364)),
																						BGl_string2001z00zz__libraryz00,
																						BGl_string2030z00zz__libraryz00,
																						BgL_index1130z00_1284);
																					FAILURE(BgL_auxz00_3425, BFALSE,
																						BFALSE);
																				}
																			BgL_n1z00_2249 =
																				(long) CINT(BgL_tmpz00_3422);
																		}
																		BgL_test2240z00_3421 =
																			(BgL_n1z00_2249 >= ((long) 0));
																	}
																	if (BgL_test2240z00_3421)
																		{
																			long BgL_auxz00_3431;

																			{	/* Eval/library.scm 139 */
																				obj_t BgL_tmpz00_3432;

																				if (INTEGERP(BgL_index1130z00_1284))
																					{	/* Eval/library.scm 139 */
																						BgL_tmpz00_3432 =
																							BgL_index1130z00_1284;
																					}
																				else
																					{
																						obj_t BgL_auxz00_3435;

																						BgL_auxz00_3435 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string1986z00zz__libraryz00,
																							BINT(((long) 5364)),
																							BGl_string2001z00zz__libraryz00,
																							BGl_string2030z00zz__libraryz00,
																							BgL_index1130z00_1284);
																						FAILURE(BgL_auxz00_3435, BFALSE,
																							BFALSE);
																					}
																				BgL_auxz00_3431 =
																					(long) CINT(BgL_tmpz00_3432);
																			}
																			BgL_versionz00_1257 =
																				VECTOR_REF(BgL_opt1115z00_66,
																				BgL_auxz00_3431);
																		}
																	else
																		{	/* Eval/library.scm 139 */
																			BFALSE;
																		}
																}
															}
															{	/* Eval/library.scm 139 */
																obj_t BgL_arg1268z00_1286;

																BgL_arg1268z00_1286 =
																	VECTOR_REF(BgL_opt1115z00_66, ((long) 0));
																{	/* Eval/library.scm 139 */
																	obj_t BgL_basenamez00_1287;

																	BgL_basenamez00_1287 = BgL_basenamez00_1248;
																	{	/* Eval/library.scm 139 */
																		obj_t BgL_classzd2evalzd2_1288;

																		BgL_classzd2evalzd2_1288 =
																			BgL_classzd2evalzd2_1249;
																		{	/* Eval/library.scm 139 */
																			obj_t BgL_classzd2initzd2_1289;

																			BgL_classzd2initzd2_1289 =
																				BgL_classzd2initzd2_1250;
																			{	/* Eval/library.scm 139 */
																				obj_t BgL_dlopenzd2initzd2_1290;

																				BgL_dlopenzd2initzd2_1290 =
																					BgL_dlopenzd2initzd2_1251;
																				{	/* Eval/library.scm 139 */
																					obj_t BgL_evalz00_1291;

																					BgL_evalz00_1291 = BgL_evalz00_1252;
																					{	/* Eval/library.scm 139 */
																						obj_t BgL_initz00_1292;

																						BgL_initz00_1292 = BgL_initz00_1253;
																						{	/* Eval/library.scm 139 */
																							obj_t BgL_modulezd2evalzd2_1293;

																							BgL_modulezd2evalzd2_1293 =
																								BgL_modulezd2evalzd2_1254;
																							{	/* Eval/library.scm 139 */
																								obj_t BgL_modulezd2initzd2_1294;

																								BgL_modulezd2initzd2_1294 =
																									BgL_modulezd2initzd2_1255;
																								{	/* Eval/library.scm 139 */
																									obj_t BgL_srfiz00_1295;

																									BgL_srfiz00_1295 =
																										BgL_srfiz00_1256;
																									{	/* Eval/library.scm 139 */
																										obj_t BgL_versionz00_1296;

																										BgL_versionz00_1296 =
																											BgL_versionz00_1257;
																										{	/* Eval/library.scm 149 */
																											obj_t BgL_top2244z00_3443;

																											BgL_top2244z00_3443 =
																												BGL_EXITD_TOP_AS_OBJ();
																											BGL_MUTEX_LOCK
																												(BGl_za2libraryzd2mutexza2zd2zz__libraryz00);
																											BGL_EXITD_PUSH_PROTECT
																												(BgL_top2244z00_3443,
																												BGl_za2libraryzd2mutexza2zd2zz__libraryz00);
																											BUNSPEC;
																											{	/* Eval/library.scm 149 */
																												obj_t
																													BgL_tmp2243z00_3442;
																												if (CBOOL
																													(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg1268z00_1286,
																															BGl_za2librariesza2z00zz__libraryz00)))
																													{	/* Eval/library.scm 150 */
																														BgL_tmp2243z00_3442
																															= BFALSE;
																													}
																												else
																													{	/* Eval/library.scm 150 */
																														{	/* Eval/library.scm 154 */
																															obj_t
																																BgL_arg1280z00_2252;
																															{	/* Eval/library.scm 154 */
																																obj_t
																																	BgL_arg1281z00_2253;
																																{	/* Eval/library.scm 154 */
																																	obj_t
																																		BgL_arg1282z00_2254;
																																	obj_t
																																		BgL_arg1284z00_2255;
																																	if (CBOOL
																																		(BgL_dlopenzd2initzd2_1290))
																																		{	/* Eval/library.scm 157 */
																																			obj_t
																																				BgL_arg1285z00_2256;
																																			BgL_arg1285z00_2256
																																				=
																																				BGl_evalzd2libraryzd2suffixz00zz__libraryz00
																																				();
																																			{	/* Eval/library.scm 155 */
																																				obj_t
																																					BgL_list1286z00_2257;
																																				{	/* Eval/library.scm 155 */
																																					obj_t
																																						BgL_arg1287z00_2258;
																																					BgL_arg1287z00_2258
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg1285z00_2256,
																																						BNIL);
																																					BgL_list1286z00_2257
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_dlopenzd2initzd2_1290,
																																						BgL_arg1287z00_2258);
																																				}
																																				BgL_arg1282z00_2254
																																					=
																																					BGl_formatz00zz__r4_output_6_10_3z00
																																					(BGl_string2031z00zz__libraryz00,
																																					BgL_list1286z00_2257);
																																			}
																																		}
																																	else
																																		{	/* Eval/library.scm 154 */
																																			BgL_arg1282z00_2254
																																				=
																																				BFALSE;
																																		}
																																	if (CBOOL
																																		(BgL_dlopenzd2initzd2_1290))
																																		{	/* Eval/library.scm 161 */
																																			obj_t
																																				BgL_arg1288z00_2259;
																																			BgL_arg1288z00_2259
																																				=
																																				BGl_evalzd2libraryzd2suffixz00zz__libraryz00
																																				();
																																			{	/* Eval/library.scm 159 */
																																				obj_t
																																					BgL_list1289z00_2260;
																																				{	/* Eval/library.scm 159 */
																																					obj_t
																																						BgL_arg1290z00_2261;
																																					BgL_arg1290z00_2261
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg1288z00_2259,
																																						BNIL);
																																					BgL_list1289z00_2260
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_dlopenzd2initzd2_1290,
																																						BgL_arg1290z00_2261);
																																				}
																																				BgL_arg1284z00_2255
																																					=
																																					BGl_formatz00zz__r4_output_6_10_3z00
																																					(BGl_string2032z00zz__libraryz00,
																																					BgL_list1289z00_2260);
																																			}
																																		}
																																	else
																																		{	/* Eval/library.scm 158 */
																																			BgL_arg1284z00_2255
																																				=
																																				BFALSE;
																																		}
																																	{	/* Eval/library.scm 107 */
																																		obj_t
																																			BgL_newz00_2267;
																																		BgL_newz00_2267
																																			=
																																			create_struct
																																			(BGl_symbol2033z00zz__libraryz00,
																																			(int) ((
																																					(long)
																																					12)));
																																		{	/* Eval/library.scm 107 */
																																			int
																																				BgL_tmpz00_3464;
																																			BgL_tmpz00_3464
																																				=
																																				(int) ((
																																					(long)
																																					11));
																																			STRUCT_SET
																																				(BgL_newz00_2267,
																																				BgL_tmpz00_3464,
																																				BgL_srfiz00_1295);
																																		}
																																		{	/* Eval/library.scm 107 */
																																			int
																																				BgL_tmpz00_3467;
																																			BgL_tmpz00_3467
																																				=
																																				(int) ((
																																					(long)
																																					10));
																																			STRUCT_SET
																																				(BgL_newz00_2267,
																																				BgL_tmpz00_3467,
																																				BgL_evalz00_1291);
																																		}
																																		{	/* Eval/library.scm 107 */
																																			int
																																				BgL_tmpz00_3470;
																																			BgL_tmpz00_3470
																																				=
																																				(int) ((
																																					(long)
																																					9));
																																			STRUCT_SET
																																				(BgL_newz00_2267,
																																				BgL_tmpz00_3470,
																																				BgL_initz00_1292);
																																		}
																																		{	/* Eval/library.scm 107 */
																																			int
																																				BgL_tmpz00_3473;
																																			BgL_tmpz00_3473
																																				=
																																				(int) ((
																																					(long)
																																					8));
																																			STRUCT_SET
																																				(BgL_newz00_2267,
																																				BgL_tmpz00_3473,
																																				BgL_classzd2evalzd2_1288);
																																		}
																																		{	/* Eval/library.scm 107 */
																																			int
																																				BgL_tmpz00_3476;
																																			BgL_tmpz00_3476
																																				=
																																				(int) ((
																																					(long)
																																					7));
																																			STRUCT_SET
																																				(BgL_newz00_2267,
																																				BgL_tmpz00_3476,
																																				BgL_classzd2initzd2_1289);
																																		}
																																		{	/* Eval/library.scm 107 */
																																			int
																																				BgL_tmpz00_3479;
																																			BgL_tmpz00_3479
																																				=
																																				(int) ((
																																					(long)
																																					6));
																																			STRUCT_SET
																																				(BgL_newz00_2267,
																																				BgL_tmpz00_3479,
																																				BgL_modulezd2evalzd2_1293);
																																		}
																																		{	/* Eval/library.scm 107 */
																																			int
																																				BgL_tmpz00_3482;
																																			BgL_tmpz00_3482
																																				=
																																				(int) ((
																																					(long)
																																					5));
																																			STRUCT_SET
																																				(BgL_newz00_2267,
																																				BgL_tmpz00_3482,
																																				BgL_modulezd2initzd2_1294);
																																		}
																																		{	/* Eval/library.scm 107 */
																																			int
																																				BgL_tmpz00_3485;
																																			BgL_tmpz00_3485
																																				=
																																				(int) ((
																																					(long)
																																					4));
																																			STRUCT_SET
																																				(BgL_newz00_2267,
																																				BgL_tmpz00_3485,
																																				BgL_arg1284z00_2255);
																																		}
																																		{	/* Eval/library.scm 107 */
																																			int
																																				BgL_tmpz00_3488;
																																			BgL_tmpz00_3488
																																				=
																																				(int) ((
																																					(long)
																																					3));
																																			STRUCT_SET
																																				(BgL_newz00_2267,
																																				BgL_tmpz00_3488,
																																				BgL_arg1282z00_2254);
																																		}
																																		{	/* Eval/library.scm 107 */
																																			int
																																				BgL_tmpz00_3491;
																																			BgL_tmpz00_3491
																																				=
																																				(int) ((
																																					(long)
																																					2));
																																			STRUCT_SET
																																				(BgL_newz00_2267,
																																				BgL_tmpz00_3491,
																																				BgL_versionz00_1296);
																																		}
																																		{	/* Eval/library.scm 107 */
																																			int
																																				BgL_tmpz00_3494;
																																			BgL_tmpz00_3494
																																				=
																																				(int) ((
																																					(long)
																																					1));
																																			STRUCT_SET
																																				(BgL_newz00_2267,
																																				BgL_tmpz00_3494,
																																				BgL_basenamez00_1287);
																																		}
																																		{	/* Eval/library.scm 107 */
																																			int
																																				BgL_tmpz00_3497;
																																			BgL_tmpz00_3497
																																				=
																																				(int) ((
																																					(long)
																																					0));
																																			STRUCT_SET
																																				(BgL_newz00_2267,
																																				BgL_tmpz00_3497,
																																				BgL_arg1268z00_1286);
																																		}
																																		BgL_arg1281z00_2253
																																			=
																																			BgL_newz00_2267;
																																}}
																																BgL_arg1280z00_2252
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1268z00_1286,
																																	BgL_arg1281z00_2253);
																															}
																															BGl_za2librariesza2z00zz__libraryz00
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1280z00_2252,
																																BGl_za2librariesza2z00zz__libraryz00);
																														}
																														{
																															obj_t
																																BgL_l1093z00_2263;
																															{	/* Eval/library.scm 166 */
																																bool_t
																																	BgL_tmpz00_3502;
																																BgL_l1093z00_2263
																																	=
																																	BgL_srfiz00_1295;
																															BgL_zc3z04anonymousza31291ze3z87_2262:
																																if (PAIRP
																																	(BgL_l1093z00_2263))
																																	{	/* Eval/library.scm 166 */
																																		{	/* Eval/library.scm 167 */
																																			obj_t
																																				BgL_sz00_2281;
																																			BgL_sz00_2281
																																				=
																																				CAR
																																				(BgL_l1093z00_2263);
																																			BGl_registerzd2srfiz12zc0zz__expander_srfi0z00
																																				(BgL_sz00_2281);
																																			bgl_register_eval_srfi
																																				(BgL_sz00_2281);
																																		}
																																		{
																																			obj_t
																																				BgL_l1093z00_3508;
																																			BgL_l1093z00_3508
																																				=
																																				CDR
																																				(BgL_l1093z00_2263);
																																			BgL_l1093z00_2263
																																				=
																																				BgL_l1093z00_3508;
																																			goto
																																				BgL_zc3z04anonymousza31291ze3z87_2262;
																																		}
																																	}
																																else
																																	{	/* Eval/library.scm 166 */
																																		BgL_tmpz00_3502
																																			=
																																			((bool_t)
																																			1);
																																	}
																																BgL_tmp2243z00_3442
																																	=
																																	BBOOL
																																	(BgL_tmpz00_3502);
																															}
																														}
																													}
																												BGL_EXITD_POP_PROTECT
																													(BgL_top2244z00_3443);
																												BUNSPEC;
																												BGL_MUTEX_UNLOCK
																													(BGl_za2libraryzd2mutexza2zd2zz__libraryz00);
																												return
																													BgL_tmp2243z00_3442;
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
			}
		}

	}



/* declare-library! */
	BGL_EXPORTED_DEF obj_t BGl_declarezd2libraryz12zc0zz__libraryz00(obj_t
		BgL_idz00_55, obj_t BgL_basenamez00_56, obj_t BgL_classzd2evalzd2_57,
		obj_t BgL_classzd2initzd2_58, obj_t BgL_dlopenzd2initzd2_59,
		obj_t BgL_evalz00_60, obj_t BgL_initz00_61, obj_t BgL_modulezd2evalzd2_62,
		obj_t BgL_modulezd2initzd2_63, obj_t BgL_srfiz00_64,
		obj_t BgL_versionz00_65)
	{
		{	/* Eval/library.scm 139 */
			{	/* Eval/library.scm 149 */
				obj_t BgL_top2250z00_3514;

				BgL_top2250z00_3514 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_za2libraryzd2mutexza2zd2zz__libraryz00);
				BGL_EXITD_PUSH_PROTECT(BgL_top2250z00_3514,
					BGl_za2libraryzd2mutexza2zd2zz__libraryz00);
				BUNSPEC;
				{	/* Eval/library.scm 149 */
					obj_t BgL_tmp2249z00_3513;

					if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_55,
								BGl_za2librariesza2z00zz__libraryz00)))
						{	/* Eval/library.scm 150 */
							BgL_tmp2249z00_3513 = BFALSE;
						}
					else
						{	/* Eval/library.scm 150 */
							{	/* Eval/library.scm 154 */
								obj_t BgL_arg1280z00_2287;

								{	/* Eval/library.scm 154 */
									obj_t BgL_arg1281z00_2288;

									{	/* Eval/library.scm 154 */
										obj_t BgL_arg1282z00_2289;
										obj_t BgL_arg1284z00_2290;

										if (CBOOL(BgL_dlopenzd2initzd2_59))
											{	/* Eval/library.scm 157 */
												obj_t BgL_arg1285z00_2291;

												BgL_arg1285z00_2291 =
													BGl_evalzd2libraryzd2suffixz00zz__libraryz00();
												{	/* Eval/library.scm 155 */
													obj_t BgL_list1286z00_2292;

													{	/* Eval/library.scm 155 */
														obj_t BgL_arg1287z00_2293;

														BgL_arg1287z00_2293 =
															MAKE_YOUNG_PAIR(BgL_arg1285z00_2291, BNIL);
														BgL_list1286z00_2292 =
															MAKE_YOUNG_PAIR(BgL_dlopenzd2initzd2_59,
															BgL_arg1287z00_2293);
													}
													BgL_arg1282z00_2289 =
														BGl_formatz00zz__r4_output_6_10_3z00
														(BGl_string2031z00zz__libraryz00,
														BgL_list1286z00_2292);
												}
											}
										else
											{	/* Eval/library.scm 154 */
												BgL_arg1282z00_2289 = BFALSE;
											}
										if (CBOOL(BgL_dlopenzd2initzd2_59))
											{	/* Eval/library.scm 161 */
												obj_t BgL_arg1288z00_2294;

												BgL_arg1288z00_2294 =
													BGl_evalzd2libraryzd2suffixz00zz__libraryz00();
												{	/* Eval/library.scm 159 */
													obj_t BgL_list1289z00_2295;

													{	/* Eval/library.scm 159 */
														obj_t BgL_arg1290z00_2296;

														BgL_arg1290z00_2296 =
															MAKE_YOUNG_PAIR(BgL_arg1288z00_2294, BNIL);
														BgL_list1289z00_2295 =
															MAKE_YOUNG_PAIR(BgL_dlopenzd2initzd2_59,
															BgL_arg1290z00_2296);
													}
													BgL_arg1284z00_2290 =
														BGl_formatz00zz__r4_output_6_10_3z00
														(BGl_string2032z00zz__libraryz00,
														BgL_list1289z00_2295);
												}
											}
										else
											{	/* Eval/library.scm 158 */
												BgL_arg1284z00_2290 = BFALSE;
											}
										{	/* Eval/library.scm 107 */
											obj_t BgL_newz00_2302;

											BgL_newz00_2302 =
												create_struct(BGl_symbol2033z00zz__libraryz00,
												(int) (((long) 12)));
											{	/* Eval/library.scm 107 */
												int BgL_tmpz00_3535;

												BgL_tmpz00_3535 = (int) (((long) 11));
												STRUCT_SET(BgL_newz00_2302, BgL_tmpz00_3535,
													BgL_srfiz00_64);
											}
											{	/* Eval/library.scm 107 */
												int BgL_tmpz00_3538;

												BgL_tmpz00_3538 = (int) (((long) 10));
												STRUCT_SET(BgL_newz00_2302, BgL_tmpz00_3538,
													BgL_evalz00_60);
											}
											{	/* Eval/library.scm 107 */
												int BgL_tmpz00_3541;

												BgL_tmpz00_3541 = (int) (((long) 9));
												STRUCT_SET(BgL_newz00_2302, BgL_tmpz00_3541,
													BgL_initz00_61);
											}
											{	/* Eval/library.scm 107 */
												int BgL_tmpz00_3544;

												BgL_tmpz00_3544 = (int) (((long) 8));
												STRUCT_SET(BgL_newz00_2302, BgL_tmpz00_3544,
													BgL_classzd2evalzd2_57);
											}
											{	/* Eval/library.scm 107 */
												int BgL_tmpz00_3547;

												BgL_tmpz00_3547 = (int) (((long) 7));
												STRUCT_SET(BgL_newz00_2302, BgL_tmpz00_3547,
													BgL_classzd2initzd2_58);
											}
											{	/* Eval/library.scm 107 */
												int BgL_tmpz00_3550;

												BgL_tmpz00_3550 = (int) (((long) 6));
												STRUCT_SET(BgL_newz00_2302, BgL_tmpz00_3550,
													BgL_modulezd2evalzd2_62);
											}
											{	/* Eval/library.scm 107 */
												int BgL_tmpz00_3553;

												BgL_tmpz00_3553 = (int) (((long) 5));
												STRUCT_SET(BgL_newz00_2302, BgL_tmpz00_3553,
													BgL_modulezd2initzd2_63);
											}
											{	/* Eval/library.scm 107 */
												int BgL_tmpz00_3556;

												BgL_tmpz00_3556 = (int) (((long) 4));
												STRUCT_SET(BgL_newz00_2302, BgL_tmpz00_3556,
													BgL_arg1284z00_2290);
											}
											{	/* Eval/library.scm 107 */
												int BgL_tmpz00_3559;

												BgL_tmpz00_3559 = (int) (((long) 3));
												STRUCT_SET(BgL_newz00_2302, BgL_tmpz00_3559,
													BgL_arg1282z00_2289);
											}
											{	/* Eval/library.scm 107 */
												int BgL_tmpz00_3562;

												BgL_tmpz00_3562 = (int) (((long) 2));
												STRUCT_SET(BgL_newz00_2302, BgL_tmpz00_3562,
													BgL_versionz00_65);
											}
											{	/* Eval/library.scm 107 */
												int BgL_tmpz00_3565;

												BgL_tmpz00_3565 = (int) (((long) 1));
												STRUCT_SET(BgL_newz00_2302, BgL_tmpz00_3565,
													BgL_basenamez00_56);
											}
											{	/* Eval/library.scm 107 */
												int BgL_tmpz00_3568;

												BgL_tmpz00_3568 = (int) (((long) 0));
												STRUCT_SET(BgL_newz00_2302, BgL_tmpz00_3568,
													BgL_idz00_55);
											}
											BgL_arg1281z00_2288 = BgL_newz00_2302;
									}}
									BgL_arg1280z00_2287 =
										MAKE_YOUNG_PAIR(BgL_idz00_55, BgL_arg1281z00_2288);
								}
								BGl_za2librariesza2z00zz__libraryz00 =
									MAKE_YOUNG_PAIR(BgL_arg1280z00_2287,
									BGl_za2librariesza2z00zz__libraryz00);
							}
							{
								obj_t BgL_l1093z00_2328;

								{	/* Eval/library.scm 166 */
									bool_t BgL_tmpz00_3573;

									BgL_l1093z00_2328 = BgL_srfiz00_64;
								BgL_zc3z04anonymousza31291ze3z87_2327:
									if (PAIRP(BgL_l1093z00_2328))
										{	/* Eval/library.scm 166 */
											{	/* Eval/library.scm 167 */
												obj_t BgL_sz00_2333;

												BgL_sz00_2333 = CAR(BgL_l1093z00_2328);
												BGl_registerzd2srfiz12zc0zz__expander_srfi0z00
													(BgL_sz00_2333);
												bgl_register_eval_srfi(BgL_sz00_2333);
											}
											{
												obj_t BgL_l1093z00_3579;

												BgL_l1093z00_3579 = CDR(BgL_l1093z00_2328);
												BgL_l1093z00_2328 = BgL_l1093z00_3579;
												goto BgL_zc3z04anonymousza31291ze3z87_2327;
											}
										}
									else
										{	/* Eval/library.scm 166 */
											BgL_tmpz00_3573 = ((bool_t) 1);
										}
									BgL_tmp2249z00_3513 = BBOOL(BgL_tmpz00_3573);
								}
							}
						}
					BGL_EXITD_POP_PROTECT(BgL_top2250z00_3514);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_za2libraryzd2mutexza2zd2zz__libraryz00);
					return BgL_tmp2249z00_3513;
				}
			}
		}

	}



/* library-info */
	BGL_EXPORTED_DEF obj_t BGl_libraryzd2infozd2zz__libraryz00(obj_t BgL_idz00_68)
	{
		{	/* Eval/library.scm 174 */
			{	/* Eval/library.scm 175 */
				obj_t BgL_g1040z00_2338;

				BgL_g1040z00_2338 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_68,
					BGl_za2librariesza2z00zz__libraryz00);
				if (CBOOL(BgL_g1040z00_2338))
					{	/* Eval/library.scm 175 */
						return CDR(((obj_t) BgL_g1040z00_2338));
					}
				else
					{	/* Eval/library.scm 175 */
						return BFALSE;
					}
			}
		}

	}



/* &library-info */
	obj_t BGl_z62libraryzd2infozb0zz__libraryz00(obj_t BgL_envz00_2866,
		obj_t BgL_idz00_2867)
	{
		{	/* Eval/library.scm 174 */
			{	/* Eval/library.scm 175 */
				obj_t BgL_auxz00_3589;

				if (SYMBOLP(BgL_idz00_2867))
					{	/* Eval/library.scm 175 */
						BgL_auxz00_3589 = BgL_idz00_2867;
					}
				else
					{
						obj_t BgL_auxz00_3592;

						BgL_auxz00_3592 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1986z00zz__libraryz00,
							BINT(((long) 6378)), BGl_string2035z00zz__libraryz00,
							BGl_string2002z00zz__libraryz00, BgL_idz00_2867);
						FAILURE(BgL_auxz00_3592, BFALSE, BFALSE);
					}
				return BGl_libraryzd2infozd2zz__libraryz00(BgL_auxz00_3589);
			}
		}

	}



/* library-translation-table-add! */
	BGL_EXPORTED_DEF obj_t
		BGl_libraryzd2translationzd2tablezd2addz12zc0zz__libraryz00(obj_t
		BgL_namez00_69, obj_t BgL_translationz00_70, obj_t BgL_optz00_71)
	{
		{	/* Eval/library.scm 180 */
			{	/* Eval/library.scm 181 */
				obj_t BgL_versionz00_1325;
				obj_t BgL_dlopenzd2initzd2_1326;

				BgL_versionz00_1325 =
					BGl_bigloozd2configzd2zz__configurez00
					(BGl_symbol2003z00zz__libraryz00);
				{	/* Eval/library.scm 182 */
					obj_t BgL_res1798z00_2343;

					{	/* Eval/library.scm 182 */
						obj_t BgL_arg1592z00_2342;

						BgL_arg1592z00_2342 = SYMBOL_TO_STRING(BgL_namez00_69);
						BgL_res1798z00_2343 =
							BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1592z00_2342);
					}
					BgL_dlopenzd2initzd2_1326 = BgL_res1798z00_2343;
				}
				{
					obj_t BgL_optz00_1328;

					BgL_optz00_1328 = BgL_optz00_71;
				BgL_zc3z04anonymousza31296ze3z87_1329:
					if (PAIRP(BgL_optz00_1328))
						{	/* Eval/library.scm 186 */
							bool_t BgL_test2258z00_3602;

							{	/* Eval/library.scm 186 */
								obj_t BgL_tmpz00_3603;

								BgL_tmpz00_3603 = CAR(BgL_optz00_1328);
								BgL_test2258z00_3602 = STRINGP(BgL_tmpz00_3603);
							}
							if (BgL_test2258z00_3602)
								{	/* Eval/library.scm 186 */
									BgL_versionz00_1325 = CAR(BgL_optz00_1328);
									{
										obj_t BgL_optz00_3607;

										BgL_optz00_3607 = CDR(BgL_optz00_1328);
										BgL_optz00_1328 = BgL_optz00_3607;
										goto BgL_zc3z04anonymousza31296ze3z87_1329;
									}
								}
							else
								{	/* Eval/library.scm 186 */
									if (CBOOL(CAR(BgL_optz00_1328)))
										{	/* Eval/library.scm 189 */
											if (
												(CAR(BgL_optz00_1328) ==
													BGl_keyword2012z00zz__libraryz00))
												{	/* Eval/library.scm 192 */
													if (NULLP(CDR(BgL_optz00_1328)))
														{	/* Eval/library.scm 194 */
															BGl_errorz00zz__errorz00
																(BGl_symbol2036z00zz__libraryz00,
																BGl_string2038z00zz__libraryz00,
																BgL_optz00_1328);
														}
													else
														{	/* Eval/library.scm 198 */
															bool_t BgL_test2262z00_3619;

															{	/* Eval/library.scm 198 */
																obj_t BgL_tmpz00_3620;

																BgL_tmpz00_3620 = CAR(CDR(BgL_optz00_1328));
																BgL_test2262z00_3619 = STRINGP(BgL_tmpz00_3620);
															}
															if (BgL_test2262z00_3619)
																{	/* Eval/library.scm 198 */
																	BgL_dlopenzd2initzd2_1326 =
																		CAR(CDR(BgL_optz00_1328));
																	{
																		obj_t BgL_optz00_3626;

																		BgL_optz00_3626 = CDR(CDR(BgL_optz00_1328));
																		BgL_optz00_1328 = BgL_optz00_3626;
																		goto BgL_zc3z04anonymousza31296ze3z87_1329;
																	}
																}
															else
																{	/* Eval/library.scm 198 */
																	BGl_errorz00zz__errorz00
																		(BGl_symbol2036z00zz__libraryz00,
																		BGl_string2039z00zz__libraryz00,
																		BgL_optz00_1328);
																}
														}
												}
											else
												{	/* Eval/library.scm 192 */
													BGl_errorz00zz__errorz00
														(BGl_symbol2036z00zz__libraryz00,
														BGl_string2040z00zz__libraryz00, BgL_optz00_1328);
												}
										}
									else
										{	/* Eval/library.scm 189 */
											BgL_versionz00_1325 = BFALSE;
											{
												obj_t BgL_optz00_3631;

												BgL_optz00_3631 = CDR(BgL_optz00_1328);
												BgL_optz00_1328 = BgL_optz00_3631;
												goto BgL_zc3z04anonymousza31296ze3z87_1329;
											}
										}
								}
						}
					else
						{	/* Eval/library.scm 184 */
							BFALSE;
						}
				}
				{	/* Eval/library.scm 209 */
					obj_t BgL_top2264z00_3634;

					BgL_top2264z00_3634 = BGL_EXITD_TOP_AS_OBJ();
					BGL_MUTEX_LOCK(BGl_za2libraryzd2mutexza2zd2zz__libraryz00);
					BGL_EXITD_PUSH_PROTECT(BgL_top2264z00_3634,
						BGl_za2libraryzd2mutexza2zd2zz__libraryz00);
					BUNSPEC;
					{	/* Eval/library.scm 209 */
						obj_t BgL_tmp2263z00_3633;

						{	/* Eval/library.scm 213 */
							obj_t BgL_arg1314z00_1348;

							{	/* Eval/library.scm 213 */
								obj_t BgL_arg1315z00_1349;

								{	/* Eval/library.scm 213 */
									obj_t BgL_arg1316z00_1350;
									obj_t BgL_arg1317z00_1351;

									if (CBOOL(BgL_dlopenzd2initzd2_1326))
										{	/* Eval/library.scm 214 */
											obj_t BgL_arg1318z00_1352;
											obj_t BgL_arg1319z00_1353;

											{	/* Eval/library.scm 214 */
												obj_t BgL_namez00_2367;

												BgL_namez00_2367 = BgL_dlopenzd2initzd2_1326;
												if (BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00
													(BgL_namez00_2367))
													{	/* Eval/library.scm 278 */
														BgL_arg1318z00_1352 =
															bigloo_mangle(BgL_namez00_2367);
													}
												else
													{	/* Eval/library.scm 278 */
														BgL_arg1318z00_1352 = BgL_namez00_2367;
													}
											}
											BgL_arg1319z00_1353 =
												BGl_evalzd2libraryzd2suffixz00zz__libraryz00();
											BgL_arg1316z00_1350 =
												string_append_3(BgL_arg1318z00_1352,
												BGl_string2041z00zz__libraryz00, BgL_arg1319z00_1353);
										}
									else
										{	/* Eval/library.scm 213 */
											BgL_arg1316z00_1350 = BFALSE;
										}
									if (CBOOL(BgL_dlopenzd2initzd2_1326))
										{	/* Eval/library.scm 218 */
											obj_t BgL_arg1322z00_1354;
											obj_t BgL_arg1324z00_1355;

											{	/* Eval/library.scm 218 */
												obj_t BgL_namez00_2369;

												BgL_namez00_2369 = BgL_dlopenzd2initzd2_1326;
												if (BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00
													(BgL_namez00_2369))
													{	/* Eval/library.scm 278 */
														BgL_arg1322z00_1354 =
															bigloo_mangle(BgL_namez00_2369);
													}
												else
													{	/* Eval/library.scm 278 */
														BgL_arg1322z00_1354 = BgL_namez00_2369;
													}
											}
											BgL_arg1324z00_1355 =
												BGl_evalzd2libraryzd2suffixz00zz__libraryz00();
											BgL_arg1317z00_1351 =
												string_append_3(BgL_arg1322z00_1354,
												BGl_string2042z00zz__libraryz00, BgL_arg1324z00_1355);
										}
									else
										{	/* Eval/library.scm 217 */
											BgL_arg1317z00_1351 = BFALSE;
										}
									{	/* Eval/library.scm 212 */
										obj_t BgL_versionz00_2371;

										BgL_versionz00_2371 = BgL_versionz00_1325;
										{	/* Eval/library.scm 107 */
											obj_t BgL_newz00_2372;

											BgL_newz00_2372 =
												create_struct(BGl_symbol2033z00zz__libraryz00,
												(int) (((long) 12)));
											{	/* Eval/library.scm 107 */
												int BgL_tmpz00_3654;

												BgL_tmpz00_3654 = (int) (((long) 11));
												STRUCT_SET(BgL_newz00_2372, BgL_tmpz00_3654, BFALSE);
											}
											{	/* Eval/library.scm 107 */
												int BgL_tmpz00_3657;

												BgL_tmpz00_3657 = (int) (((long) 10));
												STRUCT_SET(BgL_newz00_2372, BgL_tmpz00_3657, BFALSE);
											}
											{	/* Eval/library.scm 107 */
												int BgL_tmpz00_3660;

												BgL_tmpz00_3660 = (int) (((long) 9));
												STRUCT_SET(BgL_newz00_2372, BgL_tmpz00_3660, BFALSE);
											}
											{	/* Eval/library.scm 107 */
												int BgL_tmpz00_3663;

												BgL_tmpz00_3663 = (int) (((long) 8));
												STRUCT_SET(BgL_newz00_2372, BgL_tmpz00_3663, BFALSE);
											}
											{	/* Eval/library.scm 107 */
												int BgL_tmpz00_3666;

												BgL_tmpz00_3666 = (int) (((long) 7));
												STRUCT_SET(BgL_newz00_2372, BgL_tmpz00_3666, BFALSE);
											}
											{	/* Eval/library.scm 107 */
												int BgL_tmpz00_3669;

												BgL_tmpz00_3669 = (int) (((long) 6));
												STRUCT_SET(BgL_newz00_2372, BgL_tmpz00_3669, BFALSE);
											}
											{	/* Eval/library.scm 107 */
												int BgL_tmpz00_3672;

												BgL_tmpz00_3672 = (int) (((long) 5));
												STRUCT_SET(BgL_newz00_2372, BgL_tmpz00_3672, BFALSE);
											}
											{	/* Eval/library.scm 107 */
												int BgL_tmpz00_3675;

												BgL_tmpz00_3675 = (int) (((long) 4));
												STRUCT_SET(BgL_newz00_2372, BgL_tmpz00_3675,
													BgL_arg1317z00_1351);
											}
											{	/* Eval/library.scm 107 */
												int BgL_tmpz00_3678;

												BgL_tmpz00_3678 = (int) (((long) 3));
												STRUCT_SET(BgL_newz00_2372, BgL_tmpz00_3678,
													BgL_arg1316z00_1350);
											}
											{	/* Eval/library.scm 107 */
												int BgL_tmpz00_3681;

												BgL_tmpz00_3681 = (int) (((long) 2));
												STRUCT_SET(BgL_newz00_2372, BgL_tmpz00_3681,
													BgL_versionz00_2371);
											}
											{	/* Eval/library.scm 107 */
												int BgL_tmpz00_3684;

												BgL_tmpz00_3684 = (int) (((long) 1));
												STRUCT_SET(BgL_newz00_2372, BgL_tmpz00_3684,
													BgL_translationz00_70);
											}
											{	/* Eval/library.scm 107 */
												int BgL_tmpz00_3687;

												BgL_tmpz00_3687 = (int) (((long) 0));
												STRUCT_SET(BgL_newz00_2372, BgL_tmpz00_3687,
													BgL_namez00_69);
											}
											BgL_arg1315z00_1349 = BgL_newz00_2372;
								}}}
								BgL_arg1314z00_1348 =
									MAKE_YOUNG_PAIR(BgL_namez00_69, BgL_arg1315z00_1349);
							}
							BgL_tmp2263z00_3633 = (BGl_za2librariesza2z00zz__libraryz00 =
								MAKE_YOUNG_PAIR(BgL_arg1314z00_1348,
									BGl_za2librariesza2z00zz__libraryz00), BUNSPEC);
						}
						BGL_EXITD_POP_PROTECT(BgL_top2264z00_3634);
						BUNSPEC;
						BGL_MUTEX_UNLOCK(BGl_za2libraryzd2mutexza2zd2zz__libraryz00);
						return BgL_tmp2263z00_3633;
					}
				}
			}
		}

	}



/* &library-translation-table-add! */
	obj_t BGl_z62libraryzd2translationzd2tablezd2addz12za2zz__libraryz00(obj_t
		BgL_envz00_2868, obj_t BgL_namez00_2869, obj_t BgL_translationz00_2870,
		obj_t BgL_optz00_2871)
	{
		{	/* Eval/library.scm 180 */
			{	/* Eval/library.scm 181 */
				obj_t BgL_auxz00_3701;
				obj_t BgL_auxz00_3694;

				if (STRINGP(BgL_translationz00_2870))
					{	/* Eval/library.scm 181 */
						BgL_auxz00_3701 = BgL_translationz00_2870;
					}
				else
					{
						obj_t BgL_auxz00_3704;

						BgL_auxz00_3704 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1986z00zz__libraryz00,
							BINT(((long) 6700)), BGl_string2043z00zz__libraryz00,
							BGl_string1988z00zz__libraryz00, BgL_translationz00_2870);
						FAILURE(BgL_auxz00_3704, BFALSE, BFALSE);
					}
				if (SYMBOLP(BgL_namez00_2869))
					{	/* Eval/library.scm 181 */
						BgL_auxz00_3694 = BgL_namez00_2869;
					}
				else
					{
						obj_t BgL_auxz00_3697;

						BgL_auxz00_3697 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1986z00zz__libraryz00,
							BINT(((long) 6700)), BGl_string2043z00zz__libraryz00,
							BGl_string2002z00zz__libraryz00, BgL_namez00_2869);
						FAILURE(BgL_auxz00_3697, BFALSE, BFALSE);
					}
				return
					BGl_libraryzd2translationzd2tablezd2addz12zc0zz__libraryz00
					(BgL_auxz00_3694, BgL_auxz00_3701, BgL_optz00_2871);
			}
		}

	}



/* library-init-file */
	BGL_EXPORTED_DEF obj_t BGl_libraryzd2initzd2filez00zz__libraryz00(obj_t
		BgL_libz00_72)
	{
		{	/* Eval/library.scm 229 */
			{	/* Eval/library.scm 230 */
				obj_t BgL_arg1325z00_2385;

				{	/* Eval/library.scm 230 */
					obj_t BgL_res1803z00_2388;

					{	/* Eval/library.scm 230 */
						obj_t BgL_arg1592z00_2387;

						BgL_arg1592z00_2387 = SYMBOL_TO_STRING(BgL_libz00_72);
						BgL_res1803z00_2388 =
							BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1592z00_2387);
					}
					BgL_arg1325z00_2385 = BgL_res1803z00_2388;
				}
				return
					string_append(BgL_arg1325z00_2385, BGl_string2044z00zz__libraryz00);
			}
		}

	}



/* &library-init-file */
	obj_t BGl_z62libraryzd2initzd2filez62zz__libraryz00(obj_t BgL_envz00_2872,
		obj_t BgL_libz00_2873)
	{
		{	/* Eval/library.scm 229 */
			{	/* Eval/library.scm 230 */
				obj_t BgL_auxz00_3712;

				if (SYMBOLP(BgL_libz00_2873))
					{	/* Eval/library.scm 230 */
						BgL_auxz00_3712 = BgL_libz00_2873;
					}
				else
					{
						obj_t BgL_auxz00_3715;

						BgL_auxz00_3715 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1986z00zz__libraryz00,
							BINT(((long) 8119)), BGl_string2045z00zz__libraryz00,
							BGl_string2002z00zz__libraryz00, BgL_libz00_2873);
						FAILURE(BgL_auxz00_3715, BFALSE, BFALSE);
					}
				return BGl_libraryzd2initzd2filez00zz__libraryz00(BgL_auxz00_3712);
			}
		}

	}



/* untranslate-library-name */
	obj_t BGl_untranslatezd2libraryzd2namez00zz__libraryz00(obj_t
		BgL_libraryz00_73)
	{
		{	/* Eval/library.scm 235 */
			{	/* Eval/library.scm 236 */
				obj_t BgL_infoz00_1357;

				{	/* Eval/library.scm 175 */
					obj_t BgL_g1040z00_2390;

					BgL_g1040z00_2390 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_libraryz00_73,
						BGl_za2librariesza2z00zz__libraryz00);
					if (CBOOL(BgL_g1040z00_2390))
						{	/* Eval/library.scm 175 */
							BgL_infoz00_1357 = CDR(((obj_t) BgL_g1040z00_2390));
						}
					else
						{	/* Eval/library.scm 175 */
							BgL_infoz00_1357 = BFALSE;
						}
				}
				if (CBOOL(BgL_infoz00_1357))
					{	/* Eval/library.scm 238 */
						obj_t BgL_val0_1095z00_1358;
						obj_t BgL_val1_1096z00_1359;

						BgL_val0_1095z00_1358 =
							STRUCT_REF(((obj_t) BgL_infoz00_1357), (int) (((long) 1)));
						BgL_val1_1096z00_1359 =
							STRUCT_REF(((obj_t) BgL_infoz00_1357), (int) (((long) 2)));
						{	/* Eval/library.scm 238 */
							int BgL_res1804z00_2395;

							{	/* Eval/library.scm 238 */
								int BgL_tmpz00_3733;

								BgL_tmpz00_3733 = (int) (((long) 2));
								BgL_res1804z00_2395 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3733);
							} BgL_res1804z00_2395;
						}
						{	/* Eval/library.scm 238 */
							int BgL_tmpz00_3736;

							BgL_tmpz00_3736 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_tmpz00_3736, BgL_val1_1096z00_1359);
						}
						return BgL_val0_1095z00_1358;
					}
				else
					{	/* Eval/library.scm 239 */
						obj_t BgL_val0_1097z00_1360;
						obj_t BgL_val1_1098z00_1361;

						{	/* Eval/library.scm 239 */
							obj_t BgL_res1805z00_2398;

							{	/* Eval/library.scm 239 */
								obj_t BgL_arg1592z00_2397;

								BgL_arg1592z00_2397 = SYMBOL_TO_STRING(BgL_libraryz00_73);
								BgL_res1805z00_2398 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg1592z00_2397);
							}
							BgL_val0_1097z00_1360 = BgL_res1805z00_2398;
						}
						BgL_val1_1098z00_1361 =
							BGl_bigloozd2configzd2zz__configurez00
							(BGl_symbol2003z00zz__libraryz00);
						{	/* Eval/library.scm 239 */
							int BgL_res1806z00_2399;

							{	/* Eval/library.scm 239 */
								int BgL_tmpz00_3742;

								BgL_tmpz00_3742 = (int) (((long) 2));
								BgL_res1806z00_2399 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3742);
							} BgL_res1806z00_2399;
						}
						{	/* Eval/library.scm 239 */
							int BgL_tmpz00_3745;

							BgL_tmpz00_3745 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_tmpz00_3745, BgL_val1_1098z00_1361);
						}
						return BgL_val0_1097z00_1360;
					}
			}
		}

	}



/* library-file-name */
	BGL_EXPORTED_DEF obj_t BGl_libraryzd2filezd2namez00zz__libraryz00(obj_t
		BgL_libraryz00_74, obj_t BgL_suffixz00_75, obj_t BgL_backendz00_76)
	{
		{	/* Eval/library.scm 244 */
			{	/* Eval/library.scm 255 */
				obj_t BgL_basez00_1363;

				BgL_basez00_1363 =
					BGl_untranslatezd2libraryzd2namez00zz__libraryz00(BgL_libraryz00_74);
				{	/* Eval/library.scm 256 */
					obj_t BgL_versionz00_1364;

					{	/* Eval/library.scm 257 */
						int BgL_tmpz00_3749;

						BgL_tmpz00_3749 = (int) (((long) 1));
						BgL_versionz00_1364 = BGL_MVALUES_VAL(BgL_tmpz00_3749);
					}
					if ((BgL_backendz00_76 == BGl_symbol2046z00zz__libraryz00))
						{	/* Eval/library.scm 260 */
							bool_t BgL_test2275z00_3754;

							{	/* Eval/library.scm 260 */
								bool_t BgL_test2276z00_3755;

								{	/* Eval/library.scm 260 */
									bool_t BgL_res1813z00_2424;

									{	/* Eval/library.scm 260 */
										obj_t BgL_string1z00_2409;

										BgL_string1z00_2409 = string_to_bstring(OS_CLASS);
										{	/* Eval/library.scm 260 */
											long BgL_l1z00_2411;

											BgL_l1z00_2411 = STRING_LENGTH(BgL_string1z00_2409);
											if ((BgL_l1z00_2411 == ((long) 4)))
												{	/* Eval/library.scm 260 */
													int BgL_arg1479z00_2414;

													{	/* Eval/library.scm 260 */
														char *BgL_auxz00_3762;
														char *BgL_tmpz00_3760;

														BgL_auxz00_3762 =
															BSTRING_TO_STRING
															(BGl_string2048z00zz__libraryz00);
														BgL_tmpz00_3760 =
															BSTRING_TO_STRING(BgL_string1z00_2409);
														BgL_arg1479z00_2414 =
															memcmp(BgL_tmpz00_3760, BgL_auxz00_3762,
															BgL_l1z00_2411);
													}
													BgL_res1813z00_2424 =
														((long) (BgL_arg1479z00_2414) == ((long) 0));
												}
											else
												{	/* Eval/library.scm 260 */
													BgL_res1813z00_2424 = ((bool_t) 0);
												}
										}
									}
									BgL_test2276z00_3755 = BgL_res1813z00_2424;
								}
								if (BgL_test2276z00_3755)
									{	/* Eval/library.scm 260 */
										BgL_test2275z00_3754 = ((bool_t) 1);
									}
								else
									{	/* Eval/library.scm 261 */
										bool_t BgL_res1818z00_2440;

										{	/* Eval/library.scm 261 */
											obj_t BgL_string1z00_2425;

											BgL_string1z00_2425 = string_to_bstring(OS_CLASS);
											{	/* Eval/library.scm 261 */
												long BgL_l1z00_2427;

												BgL_l1z00_2427 = STRING_LENGTH(BgL_string1z00_2425);
												if ((BgL_l1z00_2427 == ((long) 5)))
													{	/* Eval/library.scm 261 */
														int BgL_arg1479z00_2430;

														{	/* Eval/library.scm 261 */
															char *BgL_auxz00_3773;
															char *BgL_tmpz00_3771;

															BgL_auxz00_3773 =
																BSTRING_TO_STRING
																(BGl_string2049z00zz__libraryz00);
															BgL_tmpz00_3771 =
																BSTRING_TO_STRING(BgL_string1z00_2425);
															BgL_arg1479z00_2430 =
																memcmp(BgL_tmpz00_3771, BgL_auxz00_3773,
																BgL_l1z00_2427);
														}
														BgL_res1818z00_2440 =
															((long) (BgL_arg1479z00_2430) == ((long) 0));
													}
												else
													{	/* Eval/library.scm 261 */
														BgL_res1818z00_2440 = ((bool_t) 0);
													}
											}
										}
										BgL_test2275z00_3754 = BgL_res1818z00_2440;
									}
							}
							if (BgL_test2275z00_3754)
								{	/* Eval/library.scm 260 */
									if (CBOOL(BgL_versionz00_1364))
										{	/* Eval/library.scm 248 */
											if (STRINGP(BgL_versionz00_1364))
												{	/* Eval/library.scm 251 */
													obj_t BgL_list1344z00_2442;

													{	/* Eval/library.scm 251 */
														obj_t BgL_arg1345z00_2443;

														{	/* Eval/library.scm 251 */
															obj_t BgL_arg1346z00_2444;

															{	/* Eval/library.scm 251 */
																obj_t BgL_arg1347z00_2445;

																{	/* Eval/library.scm 251 */
																	obj_t BgL_arg1348z00_2446;

																	BgL_arg1348z00_2446 =
																		MAKE_YOUNG_PAIR(BgL_versionz00_1364, BNIL);
																	BgL_arg1347z00_2445 =
																		MAKE_YOUNG_PAIR
																		(BGl_string2050z00zz__libraryz00,
																		BgL_arg1348z00_2446);
																}
																BgL_arg1346z00_2444 =
																	MAKE_YOUNG_PAIR
																	(BGl_libraryzd2threadzd2suffixz00zz__libraryz00,
																	BgL_arg1347z00_2445);
															}
															BgL_arg1345z00_2443 =
																MAKE_YOUNG_PAIR(BgL_suffixz00_75,
																BgL_arg1346z00_2444);
														}
														BgL_list1344z00_2442 =
															MAKE_YOUNG_PAIR(BgL_basez00_1363,
															BgL_arg1345z00_2443);
													}
													return
														BGl_stringzd2appendzd2zz__r4_strings_6_7z00
														(BgL_list1344z00_2442);
												}
											else
												{	/* Eval/library.scm 250 */
													return
														BGl_errorz00zz__errorz00
														(BGl_symbol2051z00zz__libraryz00,
														BGl_string2053z00zz__libraryz00,
														BgL_versionz00_1364);
												}
										}
									else
										{	/* Eval/library.scm 248 */
											return
												string_append_3(BgL_basez00_1363, BgL_suffixz00_75,
												BGl_libraryzd2threadzd2suffixz00zz__libraryz00);
										}
								}
							else
								{	/* Eval/library.scm 263 */
									bool_t BgL_test2281z00_3790;

									{	/* Eval/library.scm 263 */
										bool_t BgL_res1824z00_2463;

										{	/* Eval/library.scm 263 */
											obj_t BgL_string1z00_2448;

											BgL_string1z00_2448 = string_to_bstring(OS_CLASS);
											{	/* Eval/library.scm 263 */
												long BgL_l1z00_2450;

												BgL_l1z00_2450 = STRING_LENGTH(BgL_string1z00_2448);
												if ((BgL_l1z00_2450 == ((long) 5)))
													{	/* Eval/library.scm 263 */
														int BgL_arg1479z00_2453;

														{	/* Eval/library.scm 263 */
															char *BgL_auxz00_3797;
															char *BgL_tmpz00_3795;

															BgL_auxz00_3797 =
																BSTRING_TO_STRING
																(BGl_string2054z00zz__libraryz00);
															BgL_tmpz00_3795 =
																BSTRING_TO_STRING(BgL_string1z00_2448);
															BgL_arg1479z00_2453 =
																memcmp(BgL_tmpz00_3795, BgL_auxz00_3797,
																BgL_l1z00_2450);
														}
														BgL_res1824z00_2463 =
															((long) (BgL_arg1479z00_2453) == ((long) 0));
													}
												else
													{	/* Eval/library.scm 263 */
														BgL_res1824z00_2463 = ((bool_t) 0);
													}
											}
										}
										BgL_test2281z00_3790 = BgL_res1824z00_2463;
									}
									if (BgL_test2281z00_3790)
										{	/* Eval/library.scm 263 */
											return string_append(BgL_basez00_1363, BgL_suffixz00_75);
										}
									else
										{	/* Eval/library.scm 263 */
											return
												BGl_errorz00zz__errorz00
												(BGl_symbol2051z00zz__libraryz00,
												BGl_string2055z00zz__libraryz00,
												string_to_bstring(OS_CLASS));
										}
								}
						}
					else
						{	/* Eval/library.scm 257 */
							if ((BgL_backendz00_76 == BGl_symbol2056z00zz__libraryz00))
								{	/* Eval/library.scm 257 */
									if (CBOOL(BgL_versionz00_1364))
										{	/* Eval/library.scm 248 */
											if (STRINGP(BgL_versionz00_1364))
												{	/* Eval/library.scm 251 */
													obj_t BgL_list1344z00_2467;

													{	/* Eval/library.scm 251 */
														obj_t BgL_arg1345z00_2468;

														{	/* Eval/library.scm 251 */
															obj_t BgL_arg1346z00_2469;

															{	/* Eval/library.scm 251 */
																obj_t BgL_arg1347z00_2470;

																{	/* Eval/library.scm 251 */
																	obj_t BgL_arg1348z00_2471;

																	BgL_arg1348z00_2471 =
																		MAKE_YOUNG_PAIR(BgL_versionz00_1364, BNIL);
																	BgL_arg1347z00_2470 =
																		MAKE_YOUNG_PAIR
																		(BGl_string2050z00zz__libraryz00,
																		BgL_arg1348z00_2471);
																}
																BgL_arg1346z00_2469 =
																	MAKE_YOUNG_PAIR
																	(BGl_libraryzd2threadzd2suffixz00zz__libraryz00,
																	BgL_arg1347z00_2470);
															}
															BgL_arg1345z00_2468 =
																MAKE_YOUNG_PAIR(BgL_suffixz00_75,
																BgL_arg1346z00_2469);
														}
														BgL_list1344z00_2467 =
															MAKE_YOUNG_PAIR(BgL_basez00_1363,
															BgL_arg1345z00_2468);
													}
													return
														BGl_stringzd2appendzd2zz__r4_strings_6_7z00
														(BgL_list1344z00_2467);
												}
											else
												{	/* Eval/library.scm 250 */
													return
														BGl_errorz00zz__errorz00
														(BGl_symbol2051z00zz__libraryz00,
														BGl_string2053z00zz__libraryz00,
														BgL_versionz00_1364);
												}
										}
									else
										{	/* Eval/library.scm 248 */
											return
												string_append_3(BgL_basez00_1363, BgL_suffixz00_75,
												BGl_libraryzd2threadzd2suffixz00zz__libraryz00);
										}
								}
							else
								{	/* Eval/library.scm 257 */
									bool_t BgL_test2286z00_3819;

									{	/* Eval/library.scm 257 */
										bool_t BgL__ortest_1042z00_1382;

										BgL__ortest_1042z00_1382 =
											(BgL_backendz00_76 == BGl_symbol2058z00zz__libraryz00);
										if (BgL__ortest_1042z00_1382)
											{	/* Eval/library.scm 257 */
												BgL_test2286z00_3819 = BgL__ortest_1042z00_1382;
											}
										else
											{	/* Eval/library.scm 257 */
												BgL_test2286z00_3819 =
													(BgL_backendz00_76 ==
													BGl_symbol2060z00zz__libraryz00);
											}
									}
									if (BgL_test2286z00_3819)
										{	/* Eval/library.scm 257 */
											if (CBOOL(BgL_versionz00_1364))
												{	/* Eval/library.scm 248 */
													if (STRINGP(BgL_versionz00_1364))
														{	/* Eval/library.scm 251 */
															obj_t BgL_list1344z00_2474;

															{	/* Eval/library.scm 251 */
																obj_t BgL_arg1345z00_2475;

																{	/* Eval/library.scm 251 */
																	obj_t BgL_arg1346z00_2476;

																	{	/* Eval/library.scm 251 */
																		obj_t BgL_arg1347z00_2477;

																		{	/* Eval/library.scm 251 */
																			obj_t BgL_arg1348z00_2478;

																			BgL_arg1348z00_2478 =
																				MAKE_YOUNG_PAIR(BgL_versionz00_1364,
																				BNIL);
																			BgL_arg1347z00_2477 =
																				MAKE_YOUNG_PAIR
																				(BGl_string2050z00zz__libraryz00,
																				BgL_arg1348z00_2478);
																		}
																		BgL_arg1346z00_2476 =
																			MAKE_YOUNG_PAIR
																			(BGl_libraryzd2threadzd2suffixz00zz__libraryz00,
																			BgL_arg1347z00_2477);
																	}
																	BgL_arg1345z00_2475 =
																		MAKE_YOUNG_PAIR(BgL_suffixz00_75,
																		BgL_arg1346z00_2476);
																}
																BgL_list1344z00_2474 =
																	MAKE_YOUNG_PAIR(BgL_basez00_1363,
																	BgL_arg1345z00_2475);
															}
															return
																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																(BgL_list1344z00_2474);
														}
													else
														{	/* Eval/library.scm 250 */
															return
																BGl_errorz00zz__errorz00
																(BGl_symbol2051z00zz__libraryz00,
																BGl_string2053z00zz__libraryz00,
																BgL_versionz00_1364);
														}
												}
											else
												{	/* Eval/library.scm 248 */
													return
														string_append_3(BgL_basez00_1363, BgL_suffixz00_75,
														BGl_libraryzd2threadzd2suffixz00zz__libraryz00);
												}
										}
									else
										{	/* Eval/library.scm 257 */
											return
												BGl_errorz00zz__errorz00
												(BGl_symbol2051z00zz__libraryz00,
												BGl_string2062z00zz__libraryz00, BgL_backendz00_76);
										}
								}
						}
				}
			}
		}

	}



/* &library-file-name */
	obj_t BGl_z62libraryzd2filezd2namez62zz__libraryz00(obj_t BgL_envz00_2874,
		obj_t BgL_libraryz00_2875, obj_t BgL_suffixz00_2876,
		obj_t BgL_backendz00_2877)
	{
		{	/* Eval/library.scm 244 */
			{	/* Eval/library.scm 255 */
				obj_t BgL_auxz00_3850;
				obj_t BgL_auxz00_3843;
				obj_t BgL_auxz00_3836;

				if (SYMBOLP(BgL_backendz00_2877))
					{	/* Eval/library.scm 255 */
						BgL_auxz00_3850 = BgL_backendz00_2877;
					}
				else
					{
						obj_t BgL_auxz00_3853;

						BgL_auxz00_3853 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1986z00zz__libraryz00,
							BINT(((long) 9176)), BGl_string2063z00zz__libraryz00,
							BGl_string2002z00zz__libraryz00, BgL_backendz00_2877);
						FAILURE(BgL_auxz00_3853, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_suffixz00_2876))
					{	/* Eval/library.scm 255 */
						BgL_auxz00_3843 = BgL_suffixz00_2876;
					}
				else
					{
						obj_t BgL_auxz00_3846;

						BgL_auxz00_3846 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1986z00zz__libraryz00,
							BINT(((long) 9176)), BGl_string2063z00zz__libraryz00,
							BGl_string1988z00zz__libraryz00, BgL_suffixz00_2876);
						FAILURE(BgL_auxz00_3846, BFALSE, BFALSE);
					}
				if (SYMBOLP(BgL_libraryz00_2875))
					{	/* Eval/library.scm 255 */
						BgL_auxz00_3836 = BgL_libraryz00_2875;
					}
				else
					{
						obj_t BgL_auxz00_3839;

						BgL_auxz00_3839 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1986z00zz__libraryz00,
							BINT(((long) 9176)), BGl_string2063z00zz__libraryz00,
							BGl_string2002z00zz__libraryz00, BgL_libraryz00_2875);
						FAILURE(BgL_auxz00_3839, BFALSE, BFALSE);
					}
				return
					BGl_libraryzd2filezd2namez00zz__libraryz00(BgL_auxz00_3836,
					BgL_auxz00_3843, BgL_auxz00_3850);
			}
		}

	}



/* library-loaded? */
	BGL_EXPORTED_DEF bool_t BGl_libraryzd2loadedzf3z21zz__libraryz00(obj_t
		BgL_libz00_78)
	{
		{	/* Eval/library.scm 290 */
			{	/* Eval/library.scm 291 */
				obj_t BgL_top2294z00_3859;

				BgL_top2294z00_3859 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_za2libraryzd2mutexza2zd2zz__libraryz00);
				BGL_EXITD_PUSH_PROTECT(BgL_top2294z00_3859,
					BGl_za2libraryzd2mutexza2zd2zz__libraryz00);
				BUNSPEC;
				{	/* Eval/library.scm 291 */
					bool_t BgL_tmp2293z00_3858;

					BgL_tmp2293z00_3858 =
						CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_libz00_78,
							BGl_za2loadedzd2librariesza2zd2zz__libraryz00));
					BGL_EXITD_POP_PROTECT(BgL_top2294z00_3859);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_za2libraryzd2mutexza2zd2zz__libraryz00);
					return BgL_tmp2293z00_3858;
				}
			}
		}

	}



/* &library-loaded? */
	obj_t BGl_z62libraryzd2loadedzf3z43zz__libraryz00(obj_t BgL_envz00_2878,
		obj_t BgL_libz00_2879)
	{
		{	/* Eval/library.scm 290 */
			{	/* Eval/library.scm 291 */
				bool_t BgL_tmpz00_3867;

				{	/* Eval/library.scm 291 */
					obj_t BgL_auxz00_3868;

					if (SYMBOLP(BgL_libz00_2879))
						{	/* Eval/library.scm 291 */
							BgL_auxz00_3868 = BgL_libz00_2879;
						}
					else
						{
							obj_t BgL_auxz00_3871;

							BgL_auxz00_3871 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1986z00zz__libraryz00,
								BINT(((long) 10581)), BGl_string2064z00zz__libraryz00,
								BGl_string2002z00zz__libraryz00, BgL_libz00_2879);
							FAILURE(BgL_auxz00_3871, BFALSE, BFALSE);
						}
					BgL_tmpz00_3867 =
						BGl_libraryzd2loadedzf3z21zz__libraryz00(BgL_auxz00_3868);
				}
				return BBOOL(BgL_tmpz00_3867);
			}
		}

	}



/* library-mark-loaded! */
	BGL_EXPORTED_DEF obj_t BGl_libraryzd2markzd2loadedz12z12zz__libraryz00(obj_t
		BgL_libz00_79)
	{
		{	/* Eval/library.scm 297 */
			BGL_MUTEX_LOCK(BGl_za2libraryzd2mutexza2zd2zz__libraryz00);
			{	/* Eval/library.scm 298 */
				obj_t BgL_tmp2296z00_3877;

				BgL_tmp2296z00_3877 = (BGl_za2loadedzd2librariesza2zd2zz__libraryz00 =
					MAKE_YOUNG_PAIR(BgL_libz00_79,
						BGl_za2loadedzd2librariesza2zd2zz__libraryz00), BUNSPEC);
				BGL_MUTEX_UNLOCK(BGl_za2libraryzd2mutexza2zd2zz__libraryz00);
				BgL_tmp2296z00_3877;
			}
			return BUNSPEC;
		}

	}



/* &library-mark-loaded! */
	obj_t BGl_z62libraryzd2markzd2loadedz12z70zz__libraryz00(obj_t
		BgL_envz00_2880, obj_t BgL_libz00_2881)
	{
		{	/* Eval/library.scm 297 */
			{	/* Eval/library.scm 299 */
				obj_t BgL_auxz00_3881;

				if (SYMBOLP(BgL_libz00_2881))
					{	/* Eval/library.scm 299 */
						BgL_auxz00_3881 = BgL_libz00_2881;
					}
				else
					{
						obj_t BgL_auxz00_3884;

						BgL_auxz00_3884 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1986z00zz__libraryz00,
							BINT(((long) 10999)), BGl_string2065z00zz__libraryz00,
							BGl_string2002z00zz__libraryz00, BgL_libz00_2881);
						FAILURE(BgL_auxz00_3884, BFALSE, BFALSE);
					}
				return BGl_libraryzd2markzd2loadedz12z12zz__libraryz00(BgL_auxz00_3881);
			}
		}

	}



/* library-load */
	BGL_EXPORTED_DEF obj_t BGl_libraryzd2loadzd2zz__libraryz00(obj_t
		BgL_libz00_80, obj_t BgL_pathz00_81)
	{
		{	/* Eval/library.scm 305 */
			{

				{	/* Eval/library.scm 389 */
					obj_t BgL_modz00_1396;

					BgL_modz00_1396 = BGl_evalzd2modulezd2zz__evmodulez00();
					{	/* Eval/library.scm 390 */
						obj_t BgL_tmpz00_3890;

						BgL_tmpz00_3890 = BGl_interactionzd2environmentzd2zz__evalz00();
						BGL_MODULE_SET(BgL_tmpz00_3890);
					}
					{	/* Eval/library.scm 391 */
						obj_t BgL_exitd1048z00_1398;

						BgL_exitd1048z00_1398 = BGL_EXITD_TOP_AS_OBJ();
						{	/* Eval/library.scm 393 */
							obj_t BgL_zc3z04anonymousza31351ze3z87_2882;

							BgL_zc3z04anonymousza31351ze3z87_2882 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31351ze3ze5zz__libraryz00,
								(int) (((long) 0)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31351ze3z87_2882,
								(int) (((long) 0)), BgL_modz00_1396);
							BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
								(BgL_exitd1048z00_1398, BgL_zc3z04anonymousza31351ze3z87_2882);
							{	/* Eval/library.scm 392 */
								obj_t BgL_tmp1050z00_1400;

								if (STRINGP(BgL_libz00_80))
									{	/* Llib/os.scm 265 */

										BgL_tmp1050z00_1400 =
											BGl_dynamiczd2loadzd2zz__osz00(BgL_libz00_80,
											string_to_bstring(BGL_DYNAMIC_LOAD_INIT), BFALSE);
									}
								else
									{	/* Eval/library.scm 309 */
										if (SYMBOLP(BgL_libz00_80))
											{	/* Eval/library.scm 313 */
												bool_t BgL_test2300z00_3906;

												{	/* Eval/library.scm 313 */
													bool_t BgL_res1830z00_2484;

													{	/* Eval/library.scm 291 */
														obj_t BgL_top2302z00_3908;

														BgL_top2302z00_3908 = BGL_EXITD_TOP_AS_OBJ();
														BGL_MUTEX_LOCK
															(BGl_za2libraryzd2mutexza2zd2zz__libraryz00);
														BGL_EXITD_PUSH_PROTECT(BgL_top2302z00_3908,
															BGl_za2libraryzd2mutexza2zd2zz__libraryz00);
														BUNSPEC;
														{	/* Eval/library.scm 291 */
															bool_t BgL_tmp2301z00_3907;

															BgL_tmp2301z00_3907 =
																CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																(BgL_libz00_80,
																	BGl_za2loadedzd2librariesza2zd2zz__libraryz00));
															BGL_EXITD_POP_PROTECT(BgL_top2302z00_3908);
															BUNSPEC;
															BGL_MUTEX_UNLOCK
																(BGl_za2libraryzd2mutexza2zd2zz__libraryz00);
															BgL_res1830z00_2484 = BgL_tmp2301z00_3907;
														}
													}
													BgL_test2300z00_3906 = BgL_res1830z00_2484;
												}
												if (BgL_test2300z00_3906)
													{	/* Eval/library.scm 175 */
														obj_t BgL_g1040z00_2486;

														BgL_g1040z00_2486 =
															BGl_assqz00zz__r4_pairs_and_lists_6_3z00
															(BgL_libz00_80,
															BGl_za2librariesza2z00zz__libraryz00);
														if (CBOOL(BgL_g1040z00_2486))
															{	/* Eval/library.scm 175 */
																BgL_tmp1050z00_1400 =
																	CDR(((obj_t) BgL_g1040z00_2486));
															}
														else
															{	/* Eval/library.scm 175 */
																BgL_tmp1050z00_1400 = BFALSE;
															}
													}
												else
													{	/* Eval/library.scm 316 */
														obj_t BgL_pathz00_1410;

														if (PAIRP(BgL_pathz00_81))
															{	/* Eval/library.scm 316 */
																BgL_pathz00_1410 = BgL_pathz00_81;
															}
														else
															{	/* Eval/library.scm 318 */
																obj_t BgL_venvz00_1466;

																BgL_venvz00_1466 =
																	BGl_getenvz00zz__osz00
																	(BGl_string2066z00zz__libraryz00);
																if (CBOOL(BgL_venvz00_1466))
																	{	/* Eval/library.scm 319 */
																		BgL_pathz00_1410 =
																			MAKE_YOUNG_PAIR
																			(BGl_string2067z00zz__libraryz00,
																			BGl_unixzd2pathzd2ze3listze3zz__osz00
																			(BgL_venvz00_1466));
																	}
																else
																	{	/* Eval/library.scm 319 */
																		BgL_pathz00_1410 =
																			BGl_bigloozd2libraryzd2pathz00zz__paramz00
																			();
																	}
															}
														{	/* Eval/library.scm 316 */
															obj_t BgL_initz00_1411;

															{	/* Eval/library.scm 322 */
																obj_t BgL_arg1383z00_1464;

																{	/* Eval/library.scm 322 */
																	obj_t BgL_res1833z00_2495;

																	{	/* Eval/library.scm 230 */
																		obj_t BgL_arg1325z00_2491;

																		{	/* Eval/library.scm 230 */
																			obj_t BgL_res1832z00_2494;

																			{	/* Eval/library.scm 230 */
																				obj_t BgL_arg1592z00_2493;

																				BgL_arg1592z00_2493 =
																					SYMBOL_TO_STRING(BgL_libz00_80);
																				BgL_res1832z00_2494 =
																					BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																					(BgL_arg1592z00_2493);
																			}
																			BgL_arg1325z00_2491 = BgL_res1832z00_2494;
																		}
																		BgL_res1833z00_2495 =
																			string_append(BgL_arg1325z00_2491,
																			BGl_string2044z00zz__libraryz00);
																	}
																	BgL_arg1383z00_1464 = BgL_res1833z00_2495;
																}
																BgL_initz00_1411 =
																	BGl_findzd2filezf2pathz20zz__osz00
																	(BgL_arg1383z00_1464, BgL_pathz00_1410);
															}
															{	/* Eval/library.scm 322 */
																obj_t BgL_bez00_1412;

																BgL_bez00_1412 =
																	BGl_symbol2046z00zz__libraryz00;
																{	/* Eval/library.scm 323 */

																	if (CBOOL(BgL_initz00_1411))
																		{	/* Eval/eval.scm 94 */
																			obj_t BgL_envz00_1414;

																			BgL_envz00_1414 =
																				BGl_defaultzd2environmentzd2zz__evalz00
																				();
																			{	/* Eval/eval.scm 94 */

																				BGl_loadqz00zz__evalz00
																					(BgL_initz00_1411, BgL_envz00_1414);
																			}
																		}
																	else
																		{	/* Eval/library.scm 326 */
																			BFALSE;
																		}
																	{	/* Eval/library.scm 327 */
																		obj_t BgL_infoz00_1415;

																		{	/* Eval/library.scm 175 */
																			obj_t BgL_g1040z00_2497;

																			BgL_g1040z00_2497 =
																				BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																				(BgL_libz00_80,
																				BGl_za2librariesza2z00zz__libraryz00);
																			if (CBOOL(BgL_g1040z00_2497))
																				{	/* Eval/library.scm 175 */
																					BgL_infoz00_1415 =
																						CDR(((obj_t) BgL_g1040z00_2497));
																				}
																			else
																				{	/* Eval/library.scm 175 */
																					BgL_infoz00_1415 = BFALSE;
																				}
																		}
																		{	/* Eval/library.scm 327 */
																			obj_t BgL_nz00_1416;

																			BgL_nz00_1416 =
																				BGl_makezd2sharedzd2libzd2namezd2zz__osz00
																				(BGl_libraryzd2filezd2namez00zz__libraryz00
																				(BgL_libz00_80,
																					BGl_string1985z00zz__libraryz00,
																					BgL_bez00_1412), BgL_bez00_1412);
																			{	/* Eval/library.scm 328 */
																				obj_t BgL_nsz00_1417;

																				BgL_nsz00_1417 =
																					BGl_makezd2sharedzd2libzd2namezd2zz__osz00
																					(BGl_libraryzd2filezd2namez00zz__libraryz00
																					(BgL_libz00_80,
																						string_append
																						(BGl_string2041z00zz__libraryz00,
																							BGl_evalzd2libraryzd2suffixz00zz__libraryz00
																							()), BgL_bez00_1412),
																					BgL_bez00_1412);
																				{	/* Eval/library.scm 330 */
																					obj_t BgL_nez00_1418;

																					BgL_nez00_1418 =
																						BGl_makezd2sharedzd2libzd2namezd2zz__osz00
																						(BGl_libraryzd2filezd2namez00zz__libraryz00
																						(BgL_libz00_80,
																							string_append
																							(BGl_string2042z00zz__libraryz00,
																								BGl_evalzd2libraryzd2suffixz00zz__libraryz00
																								()), BgL_bez00_1412),
																						BgL_bez00_1412);
																					{	/* Eval/library.scm 334 */
																						obj_t BgL_rscz00_1419;

																						{	/* Eval/library.scm 338 */
																							obj_t BgL_pz00_1454;

																							{	/* Eval/library.scm 339 */
																								obj_t BgL_arg1375z00_1456;

																								{	/* Eval/library.scm 339 */
																									obj_t BgL_res1834z00_2502;

																									{	/* Eval/library.scm 339 */
																										obj_t BgL_arg1592z00_2501;

																										BgL_arg1592z00_2501 =
																											SYMBOL_TO_STRING
																											(BgL_libz00_80);
																										BgL_res1834z00_2502 =
																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																											(BgL_arg1592z00_2501);
																									}
																									BgL_arg1375z00_1456 =
																										BgL_res1834z00_2502;
																								}
																								BgL_pz00_1454 =
																									string_append_3
																									(BGl_string2068z00zz__libraryz00,
																									BgL_arg1375z00_1456,
																									BGl_string2069z00zz__libraryz00);
																							}
																							if (fexists(BSTRING_TO_STRING
																									(BgL_pz00_1454)))
																								{	/* Eval/library.scm 347 */
																									BgL_rscz00_1419 =
																										BgL_pz00_1454;
																								}
																							else
																								{	/* Eval/library.scm 347 */
																									BgL_rscz00_1419 = BFALSE;
																								}
																						}
																						{	/* Eval/library.scm 338 */
																							obj_t BgL_libsz00_1420;

																							BgL_libsz00_1420 =
																								BGl_findzd2filezf2pathz20zz__osz00
																								(BgL_nsz00_1417,
																								BgL_pathz00_1410);
																							{	/* Eval/library.scm 348 */
																								obj_t BgL_libez00_1421;

																								BgL_libez00_1421 =
																									BGl_findzd2filezf2pathz20zz__osz00
																									(BgL_nez00_1418,
																									BgL_pathz00_1410);
																								{	/* Eval/library.scm 349 */
																									obj_t BgL_namez00_1422;

																									{	/* Eval/library.scm 350 */
																										obj_t BgL_res1836z00_2507;

																										{	/* Eval/library.scm 350 */
																											obj_t BgL_arg1592z00_2506;

																											BgL_arg1592z00_2506 =
																												SYMBOL_TO_STRING
																												(BgL_libz00_80);
																											BgL_res1836z00_2507 =
																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																												(BgL_arg1592z00_2506);
																										}
																										BgL_namez00_1422 =
																											BgL_res1836z00_2507;
																									}
																									{	/* Eval/library.scm 350 */
																										obj_t BgL_init_sz00_1423;

																										if (CBOOL(BgL_infoz00_1415))
																											{	/* Eval/library.scm 351 */
																												BgL_init_sz00_1423 =
																													STRUCT_REF(
																													((obj_t)
																														BgL_infoz00_1415),
																													(int) (((long) 3)));
																											}
																										else
																											{	/* Eval/library.scm 351 */
																												BgL_init_sz00_1423 =
																													BFALSE;
																											}
																										{	/* Eval/library.scm 351 */
																											obj_t BgL_init_ez00_1424;

																											if (CBOOL
																												(BgL_infoz00_1415))
																												{	/* Eval/library.scm 352 */
																													BgL_init_ez00_1424 =
																														STRUCT_REF(
																														((obj_t)
																															BgL_infoz00_1415),
																														(int) (((long) 4)));
																												}
																											else
																												{	/* Eval/library.scm 352 */
																													BgL_init_ez00_1424 =
																														BFALSE;
																												}
																											{	/* Eval/library.scm 352 */
																												obj_t
																													BgL_module_sz00_1425;
																												if (CBOOL
																													(BgL_infoz00_1415))
																													{	/* Eval/library.scm 353 */
																														BgL_module_sz00_1425
																															=
																															STRUCT_REF((
																																(obj_t)
																																BgL_infoz00_1415),
																															(int) (((long)
																																	5)));
																													}
																												else
																													{	/* Eval/library.scm 353 */
																														BgL_module_sz00_1425
																															= BFALSE;
																													}
																												{	/* Eval/library.scm 353 */
																													obj_t
																														BgL_module_ez00_1426;
																													if (CBOOL
																														(BgL_infoz00_1415))
																														{	/* Eval/library.scm 357 */
																															BgL_module_ez00_1426
																																=
																																STRUCT_REF((
																																	(obj_t)
																																	BgL_infoz00_1415),
																																(int) (((long)
																																		6)));
																														}
																													else
																														{	/* Eval/library.scm 357 */
																															BgL_module_ez00_1426
																																= BFALSE;
																														}
																													{	/* Eval/library.scm 357 */

																														{	/* Eval/library.scm 362 */
																															bool_t
																																BgL_test2313z00_3982;
																															if (STRINGP
																																(BgL_rscz00_1419))
																																{	/* Eval/library.scm 362 */
																																	BgL_test2313z00_3982
																																		=
																																		((bool_t)
																																		0);
																																}
																															else
																																{	/* Eval/library.scm 362 */
																																	if (STRINGP
																																		(BgL_libsz00_1420))
																																		{	/* Eval/library.scm 362 */
																																			BgL_test2313z00_3982
																																				=
																																				(
																																				(bool_t)
																																				0);
																																		}
																																	else
																																		{	/* Eval/library.scm 362 */
																																			BgL_test2313z00_3982
																																				=
																																				(
																																				(bool_t)
																																				1);
																																		}
																																}
																															if (BgL_test2313z00_3982)
																																{	/* Eval/library.scm 364 */
																																	obj_t
																																		BgL_arg1360z00_1430;
																																	{	/* Eval/library.scm 364 */
																																		obj_t
																																			BgL_list1361z00_1431;
																																		{	/* Eval/library.scm 364 */
																																			obj_t
																																				BgL_arg1362z00_1432;
																																			BgL_arg1362z00_1432
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_nsz00_1417,
																																				BNIL);
																																			BgL_list1361z00_1431
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_libz00_80,
																																				BgL_arg1362z00_1432);
																																		}
																																		BgL_arg1360z00_1430
																																			=
																																			BGl_formatz00zz__r4_output_6_10_3z00
																																			(BGl_string2070z00zz__libraryz00,
																																			BgL_list1361z00_1431);
																																	}
																																	BGl_errorz00zz__errorz00
																																		(BGl_symbol2071z00zz__libraryz00,
																																		BgL_arg1360z00_1430,
																																		BgL_pathz00_1410);
																																}
																															else
																																{	/* Eval/library.scm 362 */
																																	if (STRINGP
																																		(BgL_libez00_1421))
																																		{	/* Eval/library.scm 366 */
																																			if (STRINGP(BgL_libsz00_1420))
																																				{	/* Eval/library.scm 379 */
																																					BGl_dynamiczd2loadzd2zz__osz00
																																						(BgL_libsz00_1420,
																																						BgL_init_sz00_1423,
																																						BgL_module_sz00_1425);
																																				}
																																			else
																																				{	/* Eval/library.scm 379 */
																																					BGl_dynamiczd2loadzd2zz__osz00
																																						(BgL_rscz00_1419,
																																						BgL_init_sz00_1423,
																																						BgL_module_sz00_1425);
																																				}
																																			BGl_dynamiczd2loadzd2zz__osz00
																																				(BgL_libez00_1421,
																																				BgL_init_ez00_1424,
																																				BgL_module_ez00_1426);
																																		}
																																	else
																																		{	/* Eval/library.scm 366 */
																																			{	/* Eval/library.scm 372 */
																																				obj_t
																																					BgL_arg1365z00_1435;
																																				{	/* Eval/library.scm 372 */
																																					obj_t
																																						BgL_list1369z00_1439;
																																					{	/* Eval/library.scm 372 */
																																						obj_t
																																							BgL_arg1370z00_1440;
																																						BgL_arg1370z00_1440
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_nez00_1418,
																																							BNIL);
																																						BgL_list1369z00_1439
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_libz00_80,
																																							BgL_arg1370z00_1440);
																																					}
																																					BgL_arg1365z00_1435
																																						=
																																						BGl_formatz00zz__r4_output_6_10_3z00
																																						(BGl_string2073z00zz__libraryz00,
																																						BgL_list1369z00_1439);
																																				}
																																				{	/* Eval/library.scm 369 */
																																					obj_t
																																						BgL_list1366z00_1436;
																																					{	/* Eval/library.scm 369 */
																																						obj_t
																																							BgL_arg1367z00_1437;
																																						{	/* Eval/library.scm 369 */
																																							obj_t
																																								BgL_arg1368z00_1438;
																																							BgL_arg1368z00_1438
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_pathz00_1410,
																																								BNIL);
																																							BgL_arg1367z00_1437
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_arg1365z00_1435,
																																								BgL_arg1368z00_1438);
																																						}
																																						BgL_list1366z00_1436
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_string2072z00zz__libraryz00,
																																							BgL_arg1367z00_1437);
																																					}
																																					BGl_evwarningz00zz__everrorz00
																																						(BFALSE,
																																						BgL_list1366z00_1436);
																																				}
																																			}
																																			if (STRINGP(BgL_libsz00_1420))
																																				{	/* Eval/library.scm 375 */
																																					BGl_dynamiczd2loadzd2zz__osz00
																																						(BgL_libsz00_1420,
																																						BgL_init_sz00_1423,
																																						BgL_module_sz00_1425);
																																				}
																																			else
																																				{	/* Eval/library.scm 375 */
																																					BGl_dynamiczd2loadzd2zz__osz00
																																						(BgL_rscz00_1419,
																																						BgL_init_sz00_1423,
																																						BgL_module_sz00_1425);
																																				}
																																		}
																																}
																														}
																														{	/* Eval/library.scm 383 */
																															bool_t
																																BgL_test2319z00_4009;
																															if (CBOOL
																																(BgL_infoz00_1415))
																																{	/* Eval/library.scm 383 */
																																	BgL_test2319z00_4009
																																		=
																																		CBOOL
																																		(STRUCT_REF(
																																			((obj_t)
																																				BgL_infoz00_1415),
																																			(int) ((
																																					(long)
																																					9))));
																																}
																															else
																																{	/* Eval/library.scm 383 */
																																	BgL_test2319z00_4009
																																		=
																																		((bool_t)
																																		0);
																																}
																															if (BgL_test2319z00_4009)
																																{	/* Eval/library.scm 384 */
																																	obj_t
																																		BgL_g1373z00_1445;
																																	BgL_g1373z00_1445
																																		=
																																		BGl_list2074z00zz__libraryz00;
																																	{	/* Eval/eval.scm 83 */
																																		obj_t
																																			BgL_envz00_1446;
																																		BgL_envz00_1446
																																			=
																																			BGl_defaultzd2environmentzd2zz__evalz00
																																			();
																																		{	/* Eval/eval.scm 83 */

																																			BGl_evalz00zz__evalz00
																																				(BgL_g1373z00_1445,
																																				BgL_envz00_1446);
																																		}
																																	}
																																}
																															else
																																{	/* Eval/library.scm 383 */
																																	BFALSE;
																																}
																														}
																														{	/* Eval/library.scm 385 */
																															bool_t
																																BgL_test2321z00_4018;
																															if (CBOOL
																																(BgL_infoz00_1415))
																																{	/* Eval/library.scm 385 */
																																	BgL_test2321z00_4018
																																		=
																																		CBOOL
																																		(STRUCT_REF(
																																			((obj_t)
																																				BgL_infoz00_1415),
																																			(int) ((
																																					(long)
																																					10))));
																																}
																															else
																																{	/* Eval/library.scm 385 */
																																	BgL_test2321z00_4018
																																		=
																																		((bool_t)
																																		0);
																																}
																															if (BgL_test2321z00_4018)
																																{	/* Eval/library.scm 386 */
																																	obj_t
																																		BgL_g1373z00_1448;
																																	BgL_g1373z00_1448
																																		=
																																		BGl_list2080z00zz__libraryz00;
																																	{	/* Eval/eval.scm 83 */
																																		obj_t
																																			BgL_envz00_1449;
																																		BgL_envz00_1449
																																			=
																																			BGl_defaultzd2environmentzd2zz__evalz00
																																			();
																																		{	/* Eval/eval.scm 83 */

																																			BGl_evalz00zz__evalz00
																																				(BgL_g1373z00_1448,
																																				BgL_envz00_1449);
																																		}
																																	}
																																}
																															else
																																{	/* Eval/library.scm 385 */
																																	BFALSE;
																																}
																														}
																														BgL_tmp1050z00_1400
																															=
																															BgL_infoz00_1415;
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
																	}
																}
															}
														}
													}
											}
										else
											{	/* Eval/library.scm 311 */
												BgL_tmp1050z00_1400 =
													BGl_bigloozd2typezd2errorz00zz__errorz00
													(BGl_symbol2071z00zz__libraryz00,
													BGl_string2084z00zz__libraryz00, BgL_libz00_80);
											}
									}
								BGl_exitdzd2popzd2protectz12z12zz__bexitz00
									(BgL_exitd1048z00_1398);
								BGL_MODULE_SET(BgL_modz00_1396);
								return BgL_tmp1050z00_1400;
							}
						}
					}
				}
			}
		}

	}



/* &library-load */
	obj_t BGl_z62libraryzd2loadzb0zz__libraryz00(obj_t BgL_envz00_2883,
		obj_t BgL_libz00_2884, obj_t BgL_pathz00_2885)
	{
		{	/* Eval/library.scm 305 */
			return
				BGl_libraryzd2loadzd2zz__libraryz00(BgL_libz00_2884, BgL_pathz00_2885);
		}

	}



/* &<@anonymous:1351> */
	obj_t BGl_z62zc3z04anonymousza31351ze3ze5zz__libraryz00(obj_t BgL_envz00_2886)
	{
		{	/* Eval/library.scm 391 */
			{	/* Eval/library.scm 393 */
				obj_t BgL_tmpz00_4031;

				BgL_tmpz00_4031 = PROCEDURE_REF(BgL_envz00_2886, (int) (((long) 0)));
				return BGL_MODULE_SET(BgL_tmpz00_4031);
			}
		}

	}



/* library-load-init */
	BGL_EXPORTED_DEF obj_t BGl_libraryzd2loadzd2initz00zz__libraryz00(obj_t
		BgL_libz00_82, obj_t BgL_pathz00_83)
	{
		{	/* Eval/library.scm 403 */
			{	/* Eval/library.scm 404 */
				obj_t BgL_initz00_1469;

				{	/* Eval/library.scm 404 */
					obj_t BgL_arg1387z00_1474;

					{	/* Eval/library.scm 404 */
						obj_t BgL_res1843z00_2524;

						{	/* Eval/library.scm 230 */
							obj_t BgL_arg1325z00_2520;

							{	/* Eval/library.scm 230 */
								obj_t BgL_res1842z00_2523;

								{	/* Eval/library.scm 230 */
									obj_t BgL_arg1592z00_2522;

									BgL_arg1592z00_2522 =
										SYMBOL_TO_STRING(((obj_t) BgL_libz00_82));
									BgL_res1842z00_2523 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg1592z00_2522);
								}
								BgL_arg1325z00_2520 = BgL_res1842z00_2523;
							}
							BgL_res1843z00_2524 =
								string_append(BgL_arg1325z00_2520,
								BGl_string2044z00zz__libraryz00);
						}
						BgL_arg1387z00_1474 = BgL_res1843z00_2524;
					}
					BgL_initz00_1469 =
						BGl_findzd2filezf2pathz20zz__osz00(BgL_arg1387z00_1474,
						BgL_pathz00_83);
				}
				if (CBOOL(BgL_initz00_1469))
					{	/* Eval/library.scm 406 */
						bool_t BgL_tozd2loadzd2_1470;

						BgL_tozd2loadzd2_1470 = ((bool_t) 0);
						{	/* Eval/library.scm 407 */
							obj_t BgL_top2325z00_4043;

							BgL_top2325z00_4043 = BGL_EXITD_TOP_AS_OBJ();
							BGL_MUTEX_LOCK(BGl_za2libraryzd2mutexza2zd2zz__libraryz00);
							BGL_EXITD_PUSH_PROTECT(BgL_top2325z00_4043,
								BGl_za2libraryzd2mutexza2zd2zz__libraryz00);
							BUNSPEC;
							{	/* Eval/library.scm 407 */
								obj_t BgL_tmp2324z00_4042;

								if (CBOOL(BGl_memberz00zz__r4_pairs_and_lists_6_3z00
										(BgL_initz00_1469,
											BGl_za2loadedzd2initzd2filesza2z00zz__libraryz00)))
									{	/* Eval/library.scm 408 */
										BgL_tmp2324z00_4042 = BFALSE;
									}
								else
									{	/* Eval/library.scm 408 */
										BgL_tozd2loadzd2_1470 = ((bool_t) 1);
										BgL_tmp2324z00_4042 =
											(BGl_za2loadedzd2initzd2filesza2z00zz__libraryz00 =
											MAKE_YOUNG_PAIR(BgL_initz00_1469,
												BGl_za2loadedzd2initzd2filesza2z00zz__libraryz00),
											BUNSPEC);
									}
								BGL_EXITD_POP_PROTECT(BgL_top2325z00_4043);
								BUNSPEC;
								BGL_MUTEX_UNLOCK(BGl_za2libraryzd2mutexza2zd2zz__libraryz00);
								BgL_tmp2324z00_4042;
							}
						}
						if (BgL_tozd2loadzd2_1470)
							{	/* Eval/eval.scm 94 */
								obj_t BgL_envz00_1473;

								BgL_envz00_1473 = BGl_defaultzd2environmentzd2zz__evalz00();
								{	/* Eval/eval.scm 94 */

									return
										BGl_loadqz00zz__evalz00(BgL_initz00_1469, BgL_envz00_1473);
								}
							}
						else
							{	/* Eval/library.scm 411 */
								return BFALSE;
							}
					}
				else
					{	/* Eval/library.scm 405 */
						return BFALSE;
					}
			}
		}

	}



/* &library-load-init */
	obj_t BGl_z62libraryzd2loadzd2initz62zz__libraryz00(obj_t BgL_envz00_2888,
		obj_t BgL_libz00_2889, obj_t BgL_pathz00_2890)
	{
		{	/* Eval/library.scm 403 */
			return
				BGl_libraryzd2loadzd2initz00zz__libraryz00(BgL_libz00_2889,
				BgL_pathz00_2890);
		}

	}



/* library-load_e */
	BGL_EXPORTED_DEF obj_t BGl_libraryzd2load_ezd2zz__libraryz00(obj_t
		BgL_libz00_84, obj_t BgL_pathz00_85)
	{
		{	/* Eval/library.scm 417 */
			{	/* Eval/library.scm 418 */
				obj_t BgL_modz00_1475;

				BgL_modz00_1475 = BGl_evalzd2modulezd2zz__evmodulez00();
				{	/* Eval/library.scm 419 */
					obj_t BgL_tmpz00_4058;

					BgL_tmpz00_4058 = BGl_interactionzd2environmentzd2zz__evalz00();
					BGL_MODULE_SET(BgL_tmpz00_4058);
				}
				{	/* Eval/library.scm 420 */
					obj_t BgL_exitd1051z00_1477;

					BgL_exitd1051z00_1477 = BGL_EXITD_TOP_AS_OBJ();
					{	/* Eval/library.scm 486 */
						obj_t BgL_zc3z04anonymousza31415ze3z87_2891;

						BgL_zc3z04anonymousza31415ze3z87_2891 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31415ze3ze5zz__libraryz00,
							(int) (((long) 0)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31415ze3z87_2891,
							(int) (((long) 0)), BgL_modz00_1475);
						BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1051z00_1477,
							BgL_zc3z04anonymousza31415ze3z87_2891);
						{	/* Eval/library.scm 422 */
							obj_t BgL_tmp1053z00_1479;

							if (STRINGP(BgL_libz00_84))
								{	/* Llib/os.scm 265 */

									BgL_tmp1053z00_1479 =
										BGl_dynamiczd2loadzd2zz__osz00(BgL_libz00_84,
										string_to_bstring(BGL_DYNAMIC_LOAD_INIT), BFALSE);
								}
							else
								{	/* Eval/library.scm 422 */
									if (SYMBOLP(BgL_libz00_84))
										{	/* Eval/library.scm 427 */
											obj_t BgL_pathz00_1485;

											if (PAIRP(BgL_pathz00_85))
												{	/* Eval/library.scm 427 */
													BgL_pathz00_1485 = BgL_pathz00_85;
												}
											else
												{	/* Eval/library.scm 429 */
													obj_t BgL_venvz00_1526;

													BgL_venvz00_1526 =
														BGl_getenvz00zz__osz00
														(BGl_string2066z00zz__libraryz00);
													if (CBOOL(BgL_venvz00_1526))
														{	/* Eval/library.scm 430 */
															BgL_pathz00_1485 =
																MAKE_YOUNG_PAIR(BGl_string2067z00zz__libraryz00,
																BGl_unixzd2pathzd2ze3listze3zz__osz00
																(BgL_venvz00_1526));
														}
													else
														{	/* Eval/library.scm 430 */
															BgL_pathz00_1485 =
																BGl_bigloozd2libraryzd2pathz00zz__paramz00();
														}
												}
											{	/* Eval/library.scm 427 */
												obj_t BgL_bez00_1486;

												BgL_bez00_1486 = BGl_symbol2046z00zz__libraryz00;
												{	/* Eval/library.scm 433 */

													BGl_libraryzd2loadzd2initz00zz__libraryz00
														(BgL_libz00_84, BgL_pathz00_1485);
													{	/* Eval/library.scm 437 */
														obj_t BgL_infoz00_1487;

														{	/* Eval/library.scm 175 */
															obj_t BgL_g1040z00_2529;

															BgL_g1040z00_2529 =
																BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																(BgL_libz00_84,
																BGl_za2librariesza2z00zz__libraryz00);
															if (CBOOL(BgL_g1040z00_2529))
																{	/* Eval/library.scm 175 */
																	BgL_infoz00_1487 =
																		CDR(((obj_t) BgL_g1040z00_2529));
																}
															else
																{	/* Eval/library.scm 175 */
																	BgL_infoz00_1487 = BFALSE;
																}
														}
														{	/* Eval/library.scm 437 */
															obj_t BgL_nz00_1488;

															BgL_nz00_1488 =
																BGl_makezd2sharedzd2libzd2namezd2zz__osz00
																(BGl_libraryzd2filezd2namez00zz__libraryz00
																(BgL_libz00_84, BGl_string1985z00zz__libraryz00,
																	BgL_bez00_1486), BgL_bez00_1486);
															{	/* Eval/library.scm 438 */
																obj_t BgL_nsz00_1489;

																BgL_nsz00_1489 =
																	BGl_makezd2sharedzd2libzd2namezd2zz__osz00
																	(BGl_libraryzd2filezd2namez00zz__libraryz00
																	(BgL_libz00_84,
																		string_append
																		(BGl_string2041z00zz__libraryz00,
																			BGl_evalzd2libraryzd2suffixz00zz__libraryz00
																			()), BgL_bez00_1486), BgL_bez00_1486);
																{	/* Eval/library.scm 441 */
																	obj_t BgL_nez00_1490;

																	BgL_nez00_1490 =
																		BGl_makezd2sharedzd2libzd2namezd2zz__osz00
																		(BGl_libraryzd2filezd2namez00zz__libraryz00
																		(BgL_libz00_84,
																			string_append
																			(BGl_string2042z00zz__libraryz00,
																				BGl_evalzd2libraryzd2suffixz00zz__libraryz00
																				()), BgL_bez00_1486), BgL_bez00_1486);
																	{	/* Eval/library.scm 445 */
																		obj_t BgL_rscz00_1491;

																		{	/* Eval/library.scm 449 */
																			obj_t BgL_pz00_1515;

																			{	/* Eval/library.scm 450 */
																				obj_t BgL_arg1404z00_1517;

																				{	/* Eval/library.scm 450 */
																					obj_t BgL_res1847z00_2534;

																					{	/* Eval/library.scm 450 */
																						obj_t BgL_arg1592z00_2533;

																						BgL_arg1592z00_2533 =
																							SYMBOL_TO_STRING(BgL_libz00_84);
																						BgL_res1847z00_2534 =
																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																							(BgL_arg1592z00_2533);
																					}
																					BgL_arg1404z00_1517 =
																						BgL_res1847z00_2534;
																				}
																				BgL_pz00_1515 =
																					string_append_3
																					(BGl_string2068z00zz__libraryz00,
																					BgL_arg1404z00_1517,
																					BGl_string2069z00zz__libraryz00);
																			}
																			if (fexists(BSTRING_TO_STRING
																					(BgL_pz00_1515)))
																				{	/* Eval/library.scm 458 */
																					BgL_rscz00_1491 = BgL_pz00_1515;
																				}
																			else
																				{	/* Eval/library.scm 458 */
																					BgL_rscz00_1491 = BFALSE;
																				}
																		}
																		{	/* Eval/library.scm 449 */
																			obj_t BgL_libez00_1492;

																			BgL_libez00_1492 =
																				BGl_findzd2filezf2pathz20zz__osz00
																				(BgL_nez00_1490, BgL_pathz00_1485);
																			{	/* Eval/library.scm 459 */
																				obj_t BgL_namez00_1493;

																				{	/* Eval/library.scm 460 */
																					obj_t BgL_res1849z00_2539;

																					{	/* Eval/library.scm 460 */
																						obj_t BgL_arg1592z00_2538;

																						BgL_arg1592z00_2538 =
																							SYMBOL_TO_STRING(BgL_libz00_84);
																						BgL_res1849z00_2539 =
																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																							(BgL_arg1592z00_2538);
																					}
																					BgL_namez00_1493 =
																						BgL_res1849z00_2539;
																				}
																				{	/* Eval/library.scm 460 */
																					obj_t BgL_init_ez00_1494;

																					if (CBOOL(BgL_infoz00_1487))
																						{	/* Eval/library.scm 461 */
																							BgL_init_ez00_1494 =
																								STRUCT_REF(
																								((obj_t) BgL_infoz00_1487),
																								(int) (((long) 4)));
																						}
																					else
																						{	/* Eval/library.scm 461 */
																							BgL_init_ez00_1494 = BFALSE;
																						}
																					{	/* Eval/library.scm 461 */
																						obj_t BgL_module_ez00_1495;

																						if (CBOOL(BgL_infoz00_1487))
																							{	/* Eval/library.scm 462 */
																								BgL_module_ez00_1495 =
																									STRUCT_REF(
																									((obj_t) BgL_infoz00_1487),
																									(int) (((long) 6)));
																							}
																						else
																							{	/* Eval/library.scm 462 */
																								BgL_module_ez00_1495 = BFALSE;
																							}
																						{	/* Eval/library.scm 462 */

																							if (STRINGP(BgL_rscz00_1491))
																								{	/* Eval/library.scm 467 */
																									if (STRINGP(BgL_libez00_1492))
																										{	/* Eval/library.scm 471 */
																											BGl_dynamiczd2loadzd2zz__osz00
																												(BgL_libez00_1492,
																												BgL_init_ez00_1494,
																												BgL_module_ez00_1495);
																										}
																									else
																										{	/* Eval/library.scm 477 */
																											obj_t BgL_arg1393z00_1498;

																											{	/* Eval/library.scm 477 */
																												obj_t
																													BgL_list1397z00_1502;
																												{	/* Eval/library.scm 477 */
																													obj_t
																														BgL_arg1398z00_1503;
																													BgL_arg1398z00_1503 =
																														MAKE_YOUNG_PAIR
																														(BgL_nez00_1490,
																														BNIL);
																													BgL_list1397z00_1502 =
																														MAKE_YOUNG_PAIR
																														(BgL_libz00_84,
																														BgL_arg1398z00_1503);
																												}
																												BgL_arg1393z00_1498 =
																													BGl_formatz00zz__r4_output_6_10_3z00
																													(BGl_string2073z00zz__libraryz00,
																													BgL_list1397z00_1502);
																											}
																											{	/* Eval/library.scm 474 */
																												obj_t
																													BgL_list1394z00_1499;
																												{	/* Eval/library.scm 474 */
																													obj_t
																														BgL_arg1395z00_1500;
																													{	/* Eval/library.scm 474 */
																														obj_t
																															BgL_arg1396z00_1501;
																														BgL_arg1396z00_1501
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_pathz00_1485,
																															BNIL);
																														BgL_arg1395z00_1500
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1393z00_1498,
																															BgL_arg1396z00_1501);
																													}
																													BgL_list1394z00_1499 =
																														MAKE_YOUNG_PAIR
																														(BGl_string2072z00zz__libraryz00,
																														BgL_arg1395z00_1500);
																												}
																												BGl_evwarningz00zz__everrorz00
																													(BFALSE,
																													BgL_list1394z00_1499);
																											}
																										}
																								}
																							else
																								{	/* Eval/library.scm 469 */
																									obj_t BgL_arg1399z00_1504;

																									{	/* Eval/library.scm 469 */
																										obj_t BgL_list1400z00_1505;

																										{	/* Eval/library.scm 469 */
																											obj_t BgL_arg1401z00_1506;

																											BgL_arg1401z00_1506 =
																												MAKE_YOUNG_PAIR
																												(BgL_nsz00_1489, BNIL);
																											BgL_list1400z00_1505 =
																												MAKE_YOUNG_PAIR
																												(BgL_libz00_84,
																												BgL_arg1401z00_1506);
																										}
																										BgL_arg1399z00_1504 =
																											BGl_formatz00zz__r4_output_6_10_3z00
																											(BGl_string2070z00zz__libraryz00,
																											BgL_list1400z00_1505);
																									}
																									BGl_errorz00zz__errorz00
																										(BGl_symbol2071z00zz__libraryz00,
																										BgL_arg1399z00_1504,
																										BgL_pathz00_1485);
																								}
																							{	/* Eval/library.scm 482 */
																								bool_t BgL_test2338z00_4133;

																								if (CBOOL(BgL_infoz00_1487))
																									{	/* Eval/library.scm 482 */
																										BgL_test2338z00_4133 =
																											CBOOL(STRUCT_REF(
																												((obj_t)
																													BgL_infoz00_1487),
																												(int) (((long) 9))));
																									}
																								else
																									{	/* Eval/library.scm 482 */
																										BgL_test2338z00_4133 =
																											((bool_t) 0);
																									}
																								if (BgL_test2338z00_4133)
																									{	/* Eval/library.scm 483 */
																										obj_t BgL_g1373z00_1508;

																										BgL_g1373z00_1508 =
																											BGl_list2074z00zz__libraryz00;
																										{	/* Eval/eval.scm 83 */
																											obj_t BgL_envz00_1509;

																											BgL_envz00_1509 =
																												BGl_defaultzd2environmentzd2zz__evalz00
																												();
																											{	/* Eval/eval.scm 83 */

																												BGl_evalz00zz__evalz00
																													(BgL_g1373z00_1508,
																													BgL_envz00_1509);
																											}
																										}
																									}
																								else
																									{	/* Eval/library.scm 482 */
																										BFALSE;
																									}
																							}
																							{	/* Eval/library.scm 484 */
																								bool_t BgL_test2340z00_4142;

																								if (CBOOL(BgL_infoz00_1487))
																									{	/* Eval/library.scm 484 */
																										BgL_test2340z00_4142 =
																											CBOOL(STRUCT_REF(
																												((obj_t)
																													BgL_infoz00_1487),
																												(int) (((long) 10))));
																									}
																								else
																									{	/* Eval/library.scm 484 */
																										BgL_test2340z00_4142 =
																											((bool_t) 0);
																									}
																								if (BgL_test2340z00_4142)
																									{	/* Eval/library.scm 485 */
																										obj_t BgL_g1373z00_1511;

																										BgL_g1373z00_1511 =
																											BGl_list2080z00zz__libraryz00;
																										{	/* Eval/eval.scm 83 */
																											obj_t BgL_envz00_1512;

																											BgL_envz00_1512 =
																												BGl_defaultzd2environmentzd2zz__evalz00
																												();
																											{	/* Eval/eval.scm 83 */

																												BgL_tmp1053z00_1479 =
																													BGl_evalz00zz__evalz00
																													(BgL_g1373z00_1511,
																													BgL_envz00_1512);
																											}
																										}
																									}
																								else
																									{	/* Eval/library.scm 484 */
																										BgL_tmp1053z00_1479 =
																											BFALSE;
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
												}
											}
										}
									else
										{	/* Eval/library.scm 424 */
											BgL_tmp1053z00_1479 =
												BGl_bigloozd2typezd2errorz00zz__errorz00
												(BGl_symbol2071z00zz__libraryz00,
												BGl_string2084z00zz__libraryz00, BgL_libz00_84);
										}
								}
							BGl_exitdzd2popzd2protectz12z12zz__bexitz00
								(BgL_exitd1051z00_1477);
							BGL_MODULE_SET(BgL_modz00_1475);
							return BgL_tmp1053z00_1479;
						}
					}
				}
			}
		}

	}



/* &library-load_e */
	obj_t BGl_z62libraryzd2load_ezb0zz__libraryz00(obj_t BgL_envz00_2892,
		obj_t BgL_libz00_2893, obj_t BgL_pathz00_2894)
	{
		{	/* Eval/library.scm 417 */
			return
				BGl_libraryzd2load_ezd2zz__libraryz00(BgL_libz00_2893,
				BgL_pathz00_2894);
		}

	}



/* &<@anonymous:1415> */
	obj_t BGl_z62zc3z04anonymousza31415ze3ze5zz__libraryz00(obj_t BgL_envz00_2895)
	{
		{	/* Eval/library.scm 420 */
			{	/* Eval/library.scm 486 */
				obj_t BgL_tmpz00_4155;

				BgL_tmpz00_4155 = PROCEDURE_REF(BgL_envz00_2895, (int) (((long) 0)));
				return BGL_MODULE_SET(BgL_tmpz00_4155);
			}
		}

	}



/* library-exists? */
	BGL_EXPORTED_DEF obj_t BGl_libraryzd2existszf3z21zz__libraryz00(obj_t
		BgL_libz00_86, obj_t BgL_pathz00_87)
	{
		{	/* Eval/library.scm 491 */
			{	/* Eval/library.scm 492 */
				obj_t BgL_pathz00_1530;

				if (PAIRP(BgL_pathz00_87))
					{	/* Eval/library.scm 492 */
						BgL_pathz00_1530 = BgL_pathz00_87;
					}
				else
					{	/* Eval/library.scm 494 */
						obj_t BgL_venvz00_1539;

						BgL_venvz00_1539 =
							BGl_getenvz00zz__osz00(BGl_string2066z00zz__libraryz00);
						if (CBOOL(BgL_venvz00_1539))
							{	/* Eval/library.scm 495 */
								BgL_pathz00_1530 =
									MAKE_YOUNG_PAIR(BGl_string2067z00zz__libraryz00,
									BGl_unixzd2pathzd2ze3listze3zz__osz00(BgL_venvz00_1539));
							}
						else
							{	/* Eval/library.scm 495 */
								BgL_pathz00_1530 = BGl_bigloozd2libraryzd2pathz00zz__paramz00();
							}
					}
				{	/* Eval/library.scm 498 */
					obj_t BgL_heapz00_1532;

					{	/* Eval/library.scm 501 */
						obj_t BgL_arg1418z00_1537;

						{	/* Eval/library.scm 501 */
							obj_t BgL_res1853z00_2549;

							{	/* Eval/library.scm 501 */
								obj_t BgL_arg1592z00_2548;

								BgL_arg1592z00_2548 = SYMBOL_TO_STRING(BgL_libz00_86);
								BgL_res1853z00_2549 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg1592z00_2548);
							}
							BgL_arg1418z00_1537 = BgL_res1853z00_2549;
						}
						BgL_heapz00_1532 =
							string_append(BgL_arg1418z00_1537,
							BGl_string2085z00zz__libraryz00);
					}
					{	/* Eval/library.scm 501 */
						obj_t BgL_initz00_1533;

						{	/* Eval/library.scm 502 */
							obj_t BgL_arg1417z00_1536;

							{	/* Eval/library.scm 502 */
								obj_t BgL_res1854z00_2552;

								{	/* Eval/library.scm 502 */
									obj_t BgL_arg1592z00_2551;

									BgL_arg1592z00_2551 = SYMBOL_TO_STRING(BgL_libz00_86);
									BgL_res1854z00_2552 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg1592z00_2551);
								}
								BgL_arg1417z00_1536 = BgL_res1854z00_2552;
							}
							BgL_initz00_1533 =
								string_append(BgL_arg1417z00_1536,
								BGl_string2044z00zz__libraryz00);
						}
						{	/* Eval/library.scm 502 */

							{	/* Eval/library.scm 503 */
								obj_t BgL_arg1416z00_1534;

								{	/* Eval/library.scm 503 */
									obj_t BgL__ortest_1057z00_1535;

									BgL__ortest_1057z00_1535 =
										BGl_findzd2filezf2pathz20zz__osz00(BgL_heapz00_1532,
										BgL_pathz00_1530);
									if (CBOOL(BgL__ortest_1057z00_1535))
										{	/* Eval/library.scm 503 */
											BgL_arg1416z00_1534 = BgL__ortest_1057z00_1535;
										}
									else
										{	/* Eval/library.scm 503 */
											BgL_arg1416z00_1534 =
												BGl_findzd2filezf2pathz20zz__osz00(BgL_initz00_1533,
												BgL_pathz00_1530);
										}
								}
								return BBOOL(STRINGP(BgL_arg1416z00_1534));
							}
						}
					}
				}
			}
		}

	}



/* &library-exists? */
	obj_t BGl_z62libraryzd2existszf3z43zz__libraryz00(obj_t BgL_envz00_2897,
		obj_t BgL_libz00_2898, obj_t BgL_pathz00_2899)
	{
		{	/* Eval/library.scm 491 */
			{	/* Eval/library.scm 492 */
				obj_t BgL_auxz00_4179;

				if (SYMBOLP(BgL_libz00_2898))
					{	/* Eval/library.scm 492 */
						BgL_auxz00_4179 = BgL_libz00_2898;
					}
				else
					{
						obj_t BgL_auxz00_4182;

						BgL_auxz00_4182 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1986z00zz__libraryz00,
							BINT(((long) 17687)), BGl_string2086z00zz__libraryz00,
							BGl_string2002z00zz__libraryz00, BgL_libz00_2898);
						FAILURE(BgL_auxz00_4182, BFALSE, BFALSE);
					}
				return
					BGl_libraryzd2existszf3z21zz__libraryz00(BgL_auxz00_4179,
					BgL_pathz00_2899);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__libraryz00()
	{
		{	/* Eval/library.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__libraryz00()
	{
		{	/* Eval/library.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__libraryz00()
	{
		{	/* Eval/library.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__libraryz00()
	{
		{	/* Eval/library.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2087z00zz__libraryz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string2087z00zz__libraryz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string2087z00zz__libraryz00));
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 121046386),
				BSTRING_TO_STRING(BGl_string2087z00zz__libraryz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string2087z00zz__libraryz00));
			BGl_modulezd2initializa7ationz75zz__configurez00(((long) 62374350),
				BSTRING_TO_STRING(BGl_string2087z00zz__libraryz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2087z00zz__libraryz00));
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 500027153),
				BSTRING_TO_STRING(BGl_string2087z00zz__libraryz00));
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long)
					228151379), BSTRING_TO_STRING(BGl_string2087z00zz__libraryz00));
			BGl_modulezd2initializa7ationz75zz__everrorz00(((long) 375872251),
				BSTRING_TO_STRING(BGl_string2087z00zz__libraryz00));
			return BGl_modulezd2initializa7ationz75zz__expander_srfi0z00(((long)
					498124363), BSTRING_TO_STRING(BGl_string2087z00zz__libraryz00));
		}

	}

#ifdef __cplusplus
}
#endif
