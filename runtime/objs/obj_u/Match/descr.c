/*===========================================================================*/
/*   (Match/descr.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Match/descr.scm -indent -o objs/obj_u/Match/descr.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static bool_t BGl_isNegationzf3zf3zz__match_descriptionsz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_patternzd2pluszd2zz__match_descriptionsz00(obj_t,
		obj_t);
	extern obj_t BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl_z62patternzd2cdrzb0zz__match_descriptionsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2minuszd2zz__match_descriptionsz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_alphazd2convertzd2zz__match_descriptionsz00(obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31692ze3ze5zz__match_descriptionsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62isOrzf3z91zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__match_descriptionsz00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_morezd2precisezf3z21zz__match_descriptionsz00(obj_t, obj_t);
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31589ze3ze5zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31300ze3ze5zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_normz00zz__match_descriptionsz00(obj_t, obj_t);
	extern obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31687ze3ze5zz__match_descriptionsz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_jimzd2gensymzd2zz__match_s2cfunz00;
	static obj_t
		BGl_z62zc3z04anonymousza31599ze3ze5zz__match_descriptionsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isAConszf3zf3zz__match_descriptionsz00(obj_t);
	static obj_t BGl_z62isTopzf3z91zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_z62patternzd2variableszb0zz__match_descriptionsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isTimeszf3zf3zz__match_descriptionsz00(obj_t);
	static obj_t BGl_z62isVectorzd2endzf3z43zz__match_descriptionsz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31300ze32226ze5zz__match_descriptionsz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31300ze32227ze5zz__match_descriptionsz00(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zz__match_descriptionsz00();
	static obj_t
		BGl_z62zc3z04anonymousza31300ze32228ze5zz__match_descriptionsz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31300ze32229ze5zz__match_descriptionsz00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zz__match_descriptionsz00();
	static obj_t
		BGl_z62zc3z04anonymousza31300ze32230ze5zz__match_descriptionsz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31300ze32231ze5zz__match_descriptionsz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31300ze32232ze5zz__match_descriptionsz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31300ze32233ze5zz__match_descriptionsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isVarzf3zf3zz__match_descriptionsz00(obj_t);
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isCheckzf3zf3zz__match_descriptionsz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_extendzd2vectorzd2zz__match_descriptionsz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isSuccesszf3zf3zz__match_descriptionsz00(obj_t);
	static obj_t BGl_z62isBottomzf3z91zz__match_descriptionsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isAnyzf3zf3zz__match_descriptionsz00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_z62isTzd2Orzf3z43zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_z62patternzd2minuszb0zz__match_descriptionsz00(obj_t, obj_t,
		obj_t);
	extern obj_t make_vector(long, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isTreezf3zf3zz__match_descriptionsz00(obj_t);
	static obj_t BGl_z62isSuccesszf3z91zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_list2240z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zz__match_descriptionsz00();
	static obj_t BGl_list2245z00zz__match_descriptionsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_isBottomzf3zf3zz__match_descriptionsz00(obj_t);
	static obj_t BGl_z62isTaggedzd2Orzf3z43zz__match_descriptionsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isNotzf3zf3zz__match_descriptionsz00(obj_t);
	static obj_t BGl_list2268z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_z62isConszf3z91zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_z62patternzd2pluszb0zz__match_descriptionsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_list2273z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_z62vectorzd2minuszb0zz__match_descriptionsz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62isHolezf3z91zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_z62isXConszf3z91zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_list2288z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_list2289z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_z62isVectorzf3z91zz__match_descriptionsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_compatiblezf3zf3zz__match_descriptionsz00(obj_t,
		obj_t);
	static obj_t BGl_unionz00zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_z62isVarzf3z91zz__match_descriptionsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isVectorzd2endzf3z21zz__match_descriptionsz00(obj_t);
	static obj_t BGl_z62g1050z62zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_z62g1051z62zz__match_descriptionsz00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31622ze3ze5zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_z62isAnyzf3z91zz__match_descriptionsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__match_descriptionsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_s2cfunz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_matchz00zz__match_descriptionsz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isAndzf3zf3zz__match_descriptionsz00(obj_t);
	static bool_t BGl_mayzd2bezd2azd2conszd2zz__match_descriptionsz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isVectorzf3zf3zz__match_descriptionsz00(obj_t);
	static obj_t BGl_z62isQuotezf3z91zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_z62containsHolezf3z91zz__match_descriptionsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_patternzd2carzd2zz__match_descriptionsz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2pluszd2zz__match_descriptionsz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__match_descriptionsz00();
	static obj_t
		BGl_z62zc3z04anonymousza31463ze3ze5zz__match_descriptionsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_patternzd2minuszd2zz__match_descriptionsz00(obj_t,
		obj_t);
	extern long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__match_descriptionsz00();
	static obj_t BGl_z62morezd2precisezf3z43zz__match_descriptionsz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__match_descriptionsz00();
	static obj_t
		BGl_z62zc3z04anonymousza31464ze3ze5zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_symbol2234z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2236z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_comparez00zz__match_descriptionsz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2238z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_z62isNotzf3z91zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31465ze3ze5zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_symbol2241z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2243z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2246z00zz__match_descriptionsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_patternzd2cdrzd2zz__match_descriptionsz00(obj_t);
	static obj_t BGl_symbol2248z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_z62compatiblezf3z91zz__match_descriptionsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62loopz62zz__match_descriptionsz00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31636ze3ze5zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_symbol2250z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2252z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2254z00zz__match_descriptionsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_isXConszf3zf3zz__match_descriptionsz00(obj_t);
	static obj_t BGl_symbol2256z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2258z00zz__match_descriptionsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_patternzd2variableszd2zz__match_descriptionsz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isTzd2Orzf3z21zz__match_descriptionsz00(obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31629ze3ze5zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_symbol2260z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_rewritezd2notzd2zz__match_descriptionsz00(obj_t);
	static obj_t BGl_symbol2262z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2264z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2266z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2269z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_z62isTreezf3z91zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_symbol2271z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2274z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2276z00zz__match_descriptionsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_isTopzf3zf3zz__match_descriptionsz00(obj_t);
	static obj_t BGl_z62isAConszf3z91zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_z62isTimeszf3z91zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_symbol2281z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_loopze70ze7zz__match_descriptionsz00(obj_t);
	static obj_t BGl_symbol2283z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2286z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_z62extendzd2vectorzb0zz__match_descriptionsz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isOrzf3zf3zz__match_descriptionsz00(obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31486ze3ze5zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31478ze3ze5zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_symbol2293z00zz__match_descriptionsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_isQuotezf3zf3zz__match_descriptionsz00(obj_t);
	static obj_t BGl_symbol2295z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_z62patternzd2carzb0zz__match_descriptionsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isConszf3zf3zz__match_descriptionsz00(obj_t);
	static obj_t BGl_z62vectorzd2pluszb0zz__match_descriptionsz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62isAndzf3z91zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_z62isCheckzf3z91zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_rewritezd2andzd2zz__match_descriptionsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isVectorzd2beginzf3z21zz__match_descriptionsz00(obj_t);
	static obj_t BGl_z62isVectorzd2beginzf3z43zz__match_descriptionsz00(obj_t,
		obj_t);
	extern obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isTaggedzd2Orzf3z21zz__match_descriptionsz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isHolezf3zf3zz__match_descriptionsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_containsHolezf3zf3zz__match_descriptionsz00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isQuotezf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl_za762isquoteza7f3za7912298za7,
		BGl_z62isQuotezf3z91zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isAConszf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl_za762isaconsza7f3za7912299za7,
		BGl_z62isAConszf3z91zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2235z00zz__match_descriptionsz00,
		BgL_bgl_string2235za700za7za7_2300za7, "or", 2);
	      DEFINE_STRING(BGl_string2237z00zz__match_descriptionsz00,
		BgL_bgl_string2237za700za7za7_2301za7, "t-or", 4);
	      DEFINE_STRING(BGl_string2239z00zz__match_descriptionsz00,
		BgL_bgl_string2239za700za7za7_2302za7, "and", 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2pluszd2envz00zz__match_descriptionsz00,
		BgL_bgl_za762vectorza7d2plus2303z00,
		BGl_z62vectorzd2pluszb0zz__match_descriptionsz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2242z00zz__match_descriptionsz00,
		BgL_bgl_string2242za700za7za7_2304za7, "cons", 4);
	      DEFINE_STRING(BGl_string2244z00zz__match_descriptionsz00,
		BgL_bgl_string2244za700za7za7_2305za7, "vector-cons", 11);
	      DEFINE_STRING(BGl_string2247z00zz__match_descriptionsz00,
		BgL_bgl_string2247za700za7za7_2306za7, "tree", 4);
	      DEFINE_STRING(BGl_string2249z00zz__match_descriptionsz00,
		BgL_bgl_string2249za700za7za7_2307za7, "times", 5);
	      DEFINE_STRING(BGl_string2251z00zz__match_descriptionsz00,
		BgL_bgl_string2251za700za7za7_2308za7, "var", 3);
	      DEFINE_STRING(BGl_string2253z00zz__match_descriptionsz00,
		BgL_bgl_string2253za700za7za7_2309za7, "vector-begin", 12);
	      DEFINE_STRING(BGl_string2255z00zz__match_descriptionsz00,
		BgL_bgl_string2255za700za7za7_2310za7, "vector-end", 10);
	      DEFINE_STRING(BGl_string2257z00zz__match_descriptionsz00,
		BgL_bgl_string2257za700za7za7_2311za7, "struct-pat", 10);
	      DEFINE_STRING(BGl_string2259z00zz__match_descriptionsz00,
		BgL_bgl_string2259za700za7za7_2312za7, "any", 3);
	      DEFINE_STRING(BGl_string2261z00zz__match_descriptionsz00,
		BgL_bgl_string2261za700za7za7_2313za7, "check", 5);
	      DEFINE_STRING(BGl_string2263z00zz__match_descriptionsz00,
		BgL_bgl_string2263za700za7za7_2314za7, "foo", 3);
	      DEFINE_STRING(BGl_string2265z00zz__match_descriptionsz00,
		BgL_bgl_string2265za700za7za7_2315za7, "bottom", 6);
	      DEFINE_STRING(BGl_string2267z00zz__match_descriptionsz00,
		BgL_bgl_string2267za700za7za7_2316za7, "not", 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_patternzd2cdrzd2envz00zz__match_descriptionsz00,
		BgL_bgl_za762patternza7d2cdr2317z00,
		BGl_z62patternzd2cdrzb0zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2270z00zz__match_descriptionsz00,
		BgL_bgl_string2270za700za7za7_2318za7, "success", 7);
	      DEFINE_STRING(BGl_string2272z00zz__match_descriptionsz00,
		BgL_bgl_string2272za700za7za7_2319za7, "quote", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_extendzd2vectorzd2envz00zz__match_descriptionsz00,
		BgL_bgl_za762extendza7d2vect2320z00,
		BGl_z62extendzd2vectorzb0zz__match_descriptionsz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2275z00zz__match_descriptionsz00,
		BgL_bgl_string2275za700za7za7_2321za7, "acons", 5);
	      DEFINE_STRING(BGl_string2277z00zz__match_descriptionsz00,
		BgL_bgl_string2277za700za7za7_2322za7, "xcons", 5);
	      DEFINE_STRING(BGl_string2282z00zz__match_descriptionsz00,
		BgL_bgl_string2282za700za7za7_2323za7, "unbound", 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2278z00zz__match_descriptionsz00,
		BgL_bgl_za762za7c3za704anonymo2324za7,
		BGl_z62zc3z04anonymousza31463ze3ze5zz__match_descriptionsz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_patternzd2variableszd2envz00zz__match_descriptionsz00,
		BgL_bgl_za762patternza7d2var2325z00,
		BGl_z62patternzd2variableszb0zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2279z00zz__match_descriptionsz00,
		BgL_bgl_za762za7c3za704anonymo2326za7,
		BGl_z62zc3z04anonymousza31464ze3ze5zz__match_descriptionsz00, 0L, BUNSPEC,
		1);
	      DEFINE_STRING(BGl_string2284z00zz__match_descriptionsz00,
		BgL_bgl_string2284za700za7za7_2327za7, "tagged-or", 9);
	      DEFINE_STRING(BGl_string2285z00zz__match_descriptionsz00,
		BgL_bgl_string2285za700za7za7_2328za7, "VAR-", 4);
	      DEFINE_STRING(BGl_string2287z00zz__match_descriptionsz00,
		BgL_bgl_string2287za700za7za7_2329za7, "vector", 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2280z00zz__match_descriptionsz00,
		BgL_bgl_za762za7c3za704anonymo2330za7,
		BGl_z62zc3z04anonymousza31465ze3ze5zz__match_descriptionsz00, 0L, BUNSPEC,
		1);
	      DEFINE_STRING(BGl_string2292z00zz__match_descriptionsz00,
		BgL_bgl_string2292za700za7za7_2331za7, "ALPHA-", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_morezd2precisezf3zd2envzf3zz__match_descriptionsz00,
		BgL_bgl_za762moreza7d2precis2332z00,
		BGl_z62morezd2precisezf3z43zz__match_descriptionsz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2294z00zz__match_descriptionsz00,
		BgL_bgl_string2294za700za7za7_2333za7, "top", 3);
	      DEFINE_STRING(BGl_string2296z00zz__match_descriptionsz00,
		BgL_bgl_string2296za700za7za7_2334za7, "hole", 4);
	      DEFINE_STRING(BGl_string2297z00zz__match_descriptionsz00,
		BgL_bgl_string2297za700za7za7_2335za7, "__match_descriptions", 20);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isHolezf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl_za762isholeza7f3za791za72336z00,
		BGl_z62isHolezf3z91zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	      DEFINE_BGL_L_PROCEDURE(BGl_proc2290z00zz__match_descriptionsz00,
		BgL_bgl_za762g1051za762za7za7__m2337z00,
		BGl_z62g1051z62zz__match_descriptionsz00);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2291z00zz__match_descriptionsz00,
		BgL_bgl_za762g1050za762za7za7__m2338z00,
		BGl_z62g1050z62zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isAndzf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl_za762isandza7f3za791za7za72339za7,
		BGl_z62isAndzf3z91zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isVectorzf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl_za762isvectorza7f3za792340za7,
		BGl_z62isVectorzf3z91zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isCheckzf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl_za762ischeckza7f3za7912341za7,
		BGl_z62isCheckzf3z91zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_compatiblezf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl_za762compatibleza7f32342z00,
		BGl_z62compatiblezf3z91zz__match_descriptionsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isBottomzf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl_za762isbottomza7f3za792343za7,
		BGl_z62isBottomzf3z91zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isOrzf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl_za762isorza7f3za791za7za7_2344za7,
		BGl_z62isOrzf3z91zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isTzd2Orzf3zd2envzf3zz__match_descriptionsz00,
		BgL_bgl_za762istza7d2orza7f3za742345z00,
		BGl_z62isTzd2Orzf3z43zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2minuszd2envz00zz__match_descriptionsz00,
		BgL_bgl_za762vectorza7d2minu2346z00,
		BGl_z62vectorzd2minuszb0zz__match_descriptionsz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isXConszf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl_za762isxconsza7f3za7912347za7,
		BGl_z62isXConszf3z91zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_patternzd2minuszd2envz00zz__match_descriptionsz00,
		BgL_bgl_za762patternza7d2min2348z00,
		BGl_z62patternzd2minuszb0zz__match_descriptionsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isTaggedzd2Orzf3zd2envzf3zz__match_descriptionsz00,
		BgL_bgl_za762istaggedza7d2or2349z00,
		BGl_z62isTaggedzd2Orzf3z43zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isTopzf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl_za762istopza7f3za791za7za72350za7,
		BGl_z62isTopzf3z91zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isAnyzf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl_za762isanyza7f3za791za7za72351za7,
		BGl_z62isAnyzf3z91zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isConszf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl_za762isconsza7f3za791za72352z00,
		BGl_z62isConszf3z91zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isTreezf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl_za762istreeza7f3za791za72353z00,
		BGl_z62isTreezf3z91zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isVarzf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl_za762isvarza7f3za791za7za72354za7,
		BGl_z62isVarzf3z91zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_containsHolezf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl_za762containsholeza72355z00,
		BGl_z62containsHolezf3z91zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isSuccesszf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl_za762issuccessza7f3za72356za7,
		BGl_z62isSuccesszf3z91zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_patternzd2carzd2envz00zz__match_descriptionsz00,
		BgL_bgl_za762patternza7d2car2357z00,
		BGl_z62patternzd2carzb0zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isVectorzd2endzf3zd2envzf3zz__match_descriptionsz00,
		BgL_bgl_za762isvectorza7d2en2358z00,
		BGl_z62isVectorzd2endzf3z43zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isTimeszf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl_za762istimesza7f3za7912359za7,
		BGl_z62isTimeszf3z91zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_patternzd2pluszd2envz00zz__match_descriptionsz00,
		BgL_bgl_za762patternza7d2plu2360z00,
		BGl_z62patternzd2pluszb0zz__match_descriptionsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isNotzf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl_za762isnotza7f3za791za7za72361za7,
		BGl_z62isNotzf3z91zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isVectorzd2beginzf3zd2envzf3zz__match_descriptionsz00,
		BgL_bgl_za762isvectorza7d2be2362z00,
		BGl_z62isVectorzd2beginzf3z43zz__match_descriptionsz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_list2240z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_list2245z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_list2268z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_list2273z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_list2288z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_list2289z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_symbol2234z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_symbol2236z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_symbol2238z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_symbol2241z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_symbol2243z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_symbol2246z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_symbol2248z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_symbol2250z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_symbol2252z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_symbol2254z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_symbol2256z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_symbol2258z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_symbol2260z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_symbol2262z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_symbol2264z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_symbol2266z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_symbol2269z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_symbol2271z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_symbol2274z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_symbol2276z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_symbol2281z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_symbol2283z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_symbol2286z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_symbol2293z00zz__match_descriptionsz00));
		     ADD_ROOT((void *) (&BGl_symbol2295z00zz__match_descriptionsz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__match_descriptionsz00(long
		BgL_checksumz00_3663, char *BgL_fromz00_3664)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__match_descriptionsz00))
				{
					BGl_requirezd2initializa7ationz75zz__match_descriptionsz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__match_descriptionsz00();
					BGl_cnstzd2initzd2zz__match_descriptionsz00();
					BGl_importedzd2moduleszd2initz00zz__match_descriptionsz00();
					return BGl_methodzd2initzd2zz__match_descriptionsz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__match_descriptionsz00()
	{
		{	/* Match/descr.scm 12 */
			BGl_symbol2234z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2235z00zz__match_descriptionsz00);
			BGl_symbol2236z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2237z00zz__match_descriptionsz00);
			BGl_symbol2238z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2239z00zz__match_descriptionsz00);
			BGl_symbol2241z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2242z00zz__match_descriptionsz00);
			BGl_symbol2243z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2244z00zz__match_descriptionsz00);
			BGl_list2240z00zz__match_descriptionsz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2241z00zz__match_descriptionsz00,
				MAKE_YOUNG_PAIR(BGl_symbol2243z00zz__match_descriptionsz00, BNIL));
			BGl_symbol2246z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2247z00zz__match_descriptionsz00);
			BGl_symbol2248z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2249z00zz__match_descriptionsz00);
			BGl_list2245z00zz__match_descriptionsz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2246z00zz__match_descriptionsz00,
				MAKE_YOUNG_PAIR(BGl_symbol2248z00zz__match_descriptionsz00, BNIL));
			BGl_symbol2250z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2251z00zz__match_descriptionsz00);
			BGl_symbol2252z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2253z00zz__match_descriptionsz00);
			BGl_symbol2254z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2255z00zz__match_descriptionsz00);
			BGl_symbol2256z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2257z00zz__match_descriptionsz00);
			BGl_symbol2258z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2259z00zz__match_descriptionsz00);
			BGl_symbol2260z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2261z00zz__match_descriptionsz00);
			BGl_symbol2262z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2263z00zz__match_descriptionsz00);
			BGl_symbol2264z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2265z00zz__match_descriptionsz00);
			BGl_symbol2266z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2267z00zz__match_descriptionsz00);
			BGl_list2268z00zz__match_descriptionsz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2258z00zz__match_descriptionsz00, BNIL);
			BGl_symbol2269z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2270z00zz__match_descriptionsz00);
			BGl_symbol2271z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2272z00zz__match_descriptionsz00);
			BGl_symbol2274z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2275z00zz__match_descriptionsz00);
			BGl_symbol2276z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2277z00zz__match_descriptionsz00);
			BGl_list2273z00zz__match_descriptionsz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2241z00zz__match_descriptionsz00,
				MAKE_YOUNG_PAIR(BGl_symbol2274z00zz__match_descriptionsz00,
					MAKE_YOUNG_PAIR(BGl_symbol2276z00zz__match_descriptionsz00, BNIL)));
			BGl_symbol2281z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2282z00zz__match_descriptionsz00);
			BGl_symbol2283z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2284z00zz__match_descriptionsz00);
			BGl_symbol2286z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2287z00zz__match_descriptionsz00);
			BGl_list2289z00zz__match_descriptionsz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2241z00zz__match_descriptionsz00,
				MAKE_YOUNG_PAIR(BGl_list2268z00zz__match_descriptionsz00,
					MAKE_YOUNG_PAIR(BGl_list2268z00zz__match_descriptionsz00, BNIL)));
			BGl_list2288z00zz__match_descriptionsz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2266z00zz__match_descriptionsz00,
				MAKE_YOUNG_PAIR(BGl_list2289z00zz__match_descriptionsz00, BNIL));
			BGl_symbol2293z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2294z00zz__match_descriptionsz00);
			return (BGl_symbol2295z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2296z00zz__match_descriptionsz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__match_descriptionsz00()
	{
		{	/* Match/descr.scm 12 */
			return bgl_gc_roots_register();
		}

	}



/* pattern-variables */
	BGL_EXPORTED_DEF obj_t
		BGl_patternzd2variableszd2zz__match_descriptionsz00(obj_t BgL_fz00_3)
	{
		{	/* Match/descr.scm 83 */
		BGl_patternzd2variableszd2zz__match_descriptionsz00:
			if (
				(CAR(
						((obj_t) BgL_fz00_3)) ==
					BGl_symbol2234z00zz__match_descriptionsz00))
				{	/* Match/descr.scm 86 */
					obj_t BgL_arg1211z00_1204;

					{	/* Match/descr.scm 86 */
						obj_t BgL_pairz00_2177;

						BgL_pairz00_2177 = CDR(((obj_t) BgL_fz00_3));
						BgL_arg1211z00_1204 = CAR(BgL_pairz00_2177);
					}
					{
						obj_t BgL_fz00_3718;

						BgL_fz00_3718 = BgL_arg1211z00_1204;
						BgL_fz00_3 = BgL_fz00_3718;
						goto BGl_patternzd2variableszd2zz__match_descriptionsz00;
					}
				}
			else
				{	/* Match/descr.scm 85 */
					if (
						(CAR(
								((obj_t) BgL_fz00_3)) ==
							BGl_symbol2236z00zz__match_descriptionsz00))
						{	/* Match/descr.scm 88 */
							obj_t BgL_arg1221z00_1207;

							{	/* Match/descr.scm 88 */
								obj_t BgL_pairz00_2182;

								BgL_pairz00_2182 = CDR(((obj_t) BgL_fz00_3));
								BgL_arg1221z00_1207 = CAR(BgL_pairz00_2182);
							}
							{
								obj_t BgL_fz00_3726;

								BgL_fz00_3726 = BgL_arg1221z00_1207;
								BgL_fz00_3 = BgL_fz00_3726;
								goto BGl_patternzd2variableszd2zz__match_descriptionsz00;
							}
						}
					else
						{	/* Match/descr.scm 87 */
							if (
								(CAR(
										((obj_t) BgL_fz00_3)) ==
									BGl_symbol2238z00zz__match_descriptionsz00))
								{	/* Match/descr.scm 90 */
									obj_t BgL_arg1225z00_1210;
									obj_t BgL_arg1227z00_1211;

									{	/* Match/descr.scm 90 */
										obj_t BgL_arg1229z00_1212;

										{	/* Match/descr.scm 90 */
											obj_t BgL_pairz00_2187;

											BgL_pairz00_2187 = CDR(((obj_t) BgL_fz00_3));
											BgL_arg1229z00_1212 = CAR(BgL_pairz00_2187);
										}
										BgL_arg1225z00_1210 =
											BGl_patternzd2variableszd2zz__match_descriptionsz00
											(BgL_arg1229z00_1212);
									}
									{	/* Match/descr.scm 90 */
										obj_t BgL_arg1232z00_1213;

										{	/* Match/descr.scm 90 */
											obj_t BgL_pairz00_2193;

											{	/* Match/descr.scm 90 */
												obj_t BgL_pairz00_2192;

												BgL_pairz00_2192 = CDR(((obj_t) BgL_fz00_3));
												BgL_pairz00_2193 = CDR(BgL_pairz00_2192);
											}
											BgL_arg1232z00_1213 = CAR(BgL_pairz00_2193);
										}
										BgL_arg1227z00_1211 =
											BGl_patternzd2variableszd2zz__match_descriptionsz00
											(BgL_arg1232z00_1213);
									}
									return
										BGl_unionz00zz__match_descriptionsz00(BgL_arg1225z00_1210,
										BgL_arg1227z00_1211);
								}
							else
								{	/* Match/descr.scm 89 */
									if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR(
													((obj_t) BgL_fz00_3)),
												BGl_list2240z00zz__match_descriptionsz00)))
										{	/* Match/descr.scm 92 */
											obj_t BgL_arg1242z00_1216;
											obj_t BgL_arg1243z00_1217;

											{	/* Match/descr.scm 92 */
												obj_t BgL_arg1245z00_1218;

												{	/* Match/descr.scm 92 */
													obj_t BgL_pairz00_2198;

													BgL_pairz00_2198 = CDR(((obj_t) BgL_fz00_3));
													BgL_arg1245z00_1218 = CAR(BgL_pairz00_2198);
												}
												BgL_arg1242z00_1216 =
													BGl_patternzd2variableszd2zz__match_descriptionsz00
													(BgL_arg1245z00_1218);
											}
											{	/* Match/descr.scm 92 */
												obj_t BgL_arg1246z00_1219;

												{	/* Match/descr.scm 92 */
													obj_t BgL_pairz00_2204;

													{	/* Match/descr.scm 92 */
														obj_t BgL_pairz00_2203;

														BgL_pairz00_2203 = CDR(((obj_t) BgL_fz00_3));
														BgL_pairz00_2204 = CDR(BgL_pairz00_2203);
													}
													BgL_arg1246z00_1219 = CAR(BgL_pairz00_2204);
												}
												BgL_arg1243z00_1217 =
													BGl_patternzd2variableszd2zz__match_descriptionsz00
													(BgL_arg1246z00_1219);
											}
											return
												BGl_unionz00zz__match_descriptionsz00
												(BgL_arg1242z00_1216, BgL_arg1243z00_1217);
										}
									else
										{	/* Match/descr.scm 91 */
											if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR(
															((obj_t) BgL_fz00_3)),
														BGl_list2245z00zz__match_descriptionsz00)))
												{	/* Match/descr.scm 94 */
													obj_t BgL_arg1250z00_1222;
													obj_t BgL_arg1252z00_1223;

													{	/* Match/descr.scm 94 */
														obj_t BgL_arg1253z00_1224;

														{	/* Match/descr.scm 94 */
															obj_t BgL_pairz00_2211;

															{	/* Match/descr.scm 94 */
																obj_t BgL_pairz00_2210;

																BgL_pairz00_2210 = CDR(((obj_t) BgL_fz00_3));
																BgL_pairz00_2211 = CDR(BgL_pairz00_2210);
															}
															BgL_arg1253z00_1224 = CAR(BgL_pairz00_2211);
														}
														BgL_arg1250z00_1222 =
															BGl_patternzd2variableszd2zz__match_descriptionsz00
															(BgL_arg1253z00_1224);
													}
													{	/* Match/descr.scm 94 */
														obj_t BgL_arg1254z00_1225;

														{	/* Match/descr.scm 94 */
															obj_t BgL_pairz00_2219;

															{	/* Match/descr.scm 94 */
																obj_t BgL_pairz00_2218;

																{	/* Match/descr.scm 94 */
																	obj_t BgL_pairz00_2217;

																	BgL_pairz00_2217 = CDR(((obj_t) BgL_fz00_3));
																	BgL_pairz00_2218 = CDR(BgL_pairz00_2217);
																}
																BgL_pairz00_2219 = CDR(BgL_pairz00_2218);
															}
															BgL_arg1254z00_1225 = CAR(BgL_pairz00_2219);
														}
														BgL_arg1252z00_1223 =
															BGl_patternzd2variableszd2zz__match_descriptionsz00
															(BgL_arg1254z00_1225);
													}
													return
														BGl_unionz00zz__match_descriptionsz00
														(BgL_arg1250z00_1222, BgL_arg1252z00_1223);
												}
											else
												{	/* Match/descr.scm 93 */
													if (
														(CAR(
																((obj_t) BgL_fz00_3)) ==
															BGl_symbol2250z00zz__match_descriptionsz00))
														{	/* Match/descr.scm 95 */
															return CDR(((obj_t) BgL_fz00_3));
														}
													else
														{	/* Match/descr.scm 95 */
															if (
																(CAR(
																		((obj_t) BgL_fz00_3)) ==
																	BGl_symbol2252z00zz__match_descriptionsz00))
																{	/* Match/descr.scm 98 */
																	obj_t BgL_arg1263z00_1230;

																	{	/* Match/descr.scm 98 */
																		obj_t BgL_pairz00_2228;

																		{	/* Match/descr.scm 98 */
																			obj_t BgL_pairz00_2227;

																			BgL_pairz00_2227 =
																				CDR(((obj_t) BgL_fz00_3));
																			BgL_pairz00_2228 = CDR(BgL_pairz00_2227);
																		}
																		BgL_arg1263z00_1230 = CAR(BgL_pairz00_2228);
																	}
																	{
																		obj_t BgL_fz00_3787;

																		BgL_fz00_3787 = BgL_arg1263z00_1230;
																		BgL_fz00_3 = BgL_fz00_3787;
																		goto
																			BGl_patternzd2variableszd2zz__match_descriptionsz00;
																	}
																}
															else
																{	/* Match/descr.scm 97 */
																	if (
																		(CAR(
																				((obj_t) BgL_fz00_3)) ==
																			BGl_symbol2254z00zz__match_descriptionsz00))
																		{	/* Match/descr.scm 99 */
																			return BNIL;
																		}
																	else
																		{	/* Match/descr.scm 99 */
																			if (
																				(CAR(
																						((obj_t) BgL_fz00_3)) ==
																					BGl_symbol2256z00zz__match_descriptionsz00))
																				{	/* Match/descr.scm 109 */
																					obj_t BgL_g1039z00_1235;

																					{	/* Match/descr.scm 109 */
																						obj_t BgL_pairz00_2236;

																						{	/* Match/descr.scm 109 */
																							obj_t BgL_pairz00_2235;

																							BgL_pairz00_2235 =
																								CDR(((obj_t) BgL_fz00_3));
																							BgL_pairz00_2236 =
																								CDR(BgL_pairz00_2235);
																						}
																						BgL_g1039z00_1235 =
																							CDR(BgL_pairz00_2236);
																					}
																					return
																						BGl_loopze70ze7zz__match_descriptionsz00
																						(BgL_g1039z00_1235);
																				}
																			else
																				{	/* Match/descr.scm 101 */
																					return BNIL;
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



/* loop~0 */
	obj_t BGl_loopze70ze7zz__match_descriptionsz00(obj_t BgL_pza2za2_1237)
	{
		{	/* Match/descr.scm 109 */
			if (NULLP(BgL_pza2za2_1237))
				{	/* Match/descr.scm 110 */
					return BNIL;
				}
			else
				{	/* Match/descr.scm 112 */
					obj_t BgL_arg1274z00_1240;
					obj_t BgL_arg1275z00_1241;

					{	/* Match/descr.scm 112 */
						obj_t BgL_arg1276z00_1242;

						BgL_arg1276z00_1242 = CAR(((obj_t) BgL_pza2za2_1237));
						BgL_arg1274z00_1240 =
							BGl_patternzd2variableszd2zz__match_descriptionsz00
							(BgL_arg1276z00_1242);
					}
					{	/* Match/descr.scm 113 */
						obj_t BgL_arg1277z00_1243;

						BgL_arg1277z00_1243 = CDR(((obj_t) BgL_pza2za2_1237));
						BgL_arg1275z00_1241 =
							BGl_loopze70ze7zz__match_descriptionsz00(BgL_arg1277z00_1243);
					}
					return
						BGl_unionz00zz__match_descriptionsz00(BgL_arg1274z00_1240,
						BgL_arg1275z00_1241);
				}
		}

	}



/* &pattern-variables */
	obj_t BGl_z62patternzd2variableszb0zz__match_descriptionsz00(obj_t
		BgL_envz00_3425, obj_t BgL_fz00_3426)
	{
		{	/* Match/descr.scm 83 */
			return BGl_patternzd2variableszd2zz__match_descriptionsz00(BgL_fz00_3426);
		}

	}



/* union */
	obj_t BGl_unionz00zz__match_descriptionsz00(obj_t BgL_l1z00_4,
		obj_t BgL_l2z00_5)
	{
		{	/* Match/descr.scm 117 */
		BGl_unionz00zz__match_descriptionsz00:
			if (NULLP(BgL_l1z00_4))
				{	/* Match/descr.scm 118 */
					return BgL_l2z00_5;
				}
			else
				{	/* Match/descr.scm 118 */
					if (CBOOL(BGl_memberz00zz__r4_pairs_and_lists_6_3z00(CAR(
									((obj_t) BgL_l1z00_4)), BgL_l2z00_5)))
						{	/* Match/descr.scm 120 */
							obj_t BgL_arg1295z00_1257;

							BgL_arg1295z00_1257 = CDR(((obj_t) BgL_l1z00_4));
							{
								obj_t BgL_l1z00_3820;

								BgL_l1z00_3820 = BgL_arg1295z00_1257;
								BgL_l1z00_4 = BgL_l1z00_3820;
								goto BGl_unionz00zz__match_descriptionsz00;
							}
						}
					else
						{	/* Match/descr.scm 121 */
							obj_t BgL_arg1296z00_1258;
							obj_t BgL_arg1297z00_1259;

							BgL_arg1296z00_1258 = CAR(((obj_t) BgL_l1z00_4));
							{	/* Match/descr.scm 121 */
								obj_t BgL_arg1298z00_1260;

								BgL_arg1298z00_1260 = CDR(((obj_t) BgL_l1z00_4));
								BgL_arg1297z00_1259 =
									BGl_unionz00zz__match_descriptionsz00(BgL_arg1298z00_1260,
									BgL_l2z00_5);
							}
							return MAKE_YOUNG_PAIR(BgL_arg1296z00_1258, BgL_arg1297z00_1259);
						}
				}
		}

	}



/* pattern-plus */
	BGL_EXPORTED_DEF obj_t BGl_patternzd2pluszd2zz__match_descriptionsz00(obj_t
		BgL_oldz00_9, obj_t BgL_newz00_10)
	{
		{	/* Match/descr.scm 143 */
			{	/* Match/descr.scm 144 */
				bool_t BgL_test2376z00_3827;

				if (
					(CAR(
							((obj_t) BgL_newz00_10)) ==
						BGl_symbol2246z00zz__match_descriptionsz00))
					{	/* Match/descr.scm 144 */
						BgL_test2376z00_3827 = ((bool_t) 1);
					}
				else
					{	/* Match/descr.scm 144 */
						BgL_test2376z00_3827 =
							(CAR(
								((obj_t) BgL_newz00_10)) ==
							BGl_symbol2248z00zz__match_descriptionsz00);
					}
				if (BgL_test2376z00_3827)
					{	/* Match/descr.scm 144 */
						return BgL_oldz00_9;
					}
				else
					{	/* Match/descr.scm 147 */
						bool_t BgL_test2378z00_3835;

						if (
							(CAR(
									((obj_t) BgL_oldz00_9)) ==
								BGl_symbol2258z00zz__match_descriptionsz00))
							{	/* Match/descr.scm 502 */
								BgL_test2378z00_3835 = ((bool_t) 1);
							}
						else
							{	/* Match/descr.scm 502 */
								BgL_test2378z00_3835 =
									(CAR(
										((obj_t) BgL_oldz00_9)) ==
									BGl_symbol2260z00zz__match_descriptionsz00);
							}
						if (BgL_test2378z00_3835)
							{	/* Match/descr.scm 147 */
								return BgL_newz00_10;
							}
						else
							{	/* Match/descr.scm 149 */
								bool_t BgL_test2380z00_3843;

								if (
									(CAR(
											((obj_t) BgL_newz00_10)) ==
										BGl_symbol2258z00zz__match_descriptionsz00))
									{	/* Match/descr.scm 502 */
										BgL_test2380z00_3843 = ((bool_t) 1);
									}
								else
									{	/* Match/descr.scm 502 */
										BgL_test2380z00_3843 =
											(CAR(
												((obj_t) BgL_newz00_10)) ==
											BGl_symbol2260z00zz__match_descriptionsz00);
									}
								if (BgL_test2380z00_3843)
									{	/* Match/descr.scm 149 */
										return BgL_oldz00_9;
									}
								else
									{	/* Match/descr.scm 149 */
										if (BGl_isNegationzf3zf3zz__match_descriptionsz00
											(BgL_oldz00_9))
											{	/* Match/descr.scm 151 */
												return
													BGl_normz00zz__match_descriptionsz00(BgL_newz00_10,
													BGl_symbol2262z00zz__match_descriptionsz00);
											}
										else
											{	/* Match/descr.scm 153 */
												obj_t BgL_arg1307z00_1270;

												if (
													(CAR(
															((obj_t) BgL_newz00_10)) ==
														BGl_symbol2250z00zz__match_descriptionsz00))
													{	/* Match/descr.scm 154 */
														obj_t BgL_list1309z00_1272;

														{	/* Match/descr.scm 154 */
															obj_t BgL_arg1310z00_1273;

															{	/* Match/descr.scm 154 */
																obj_t BgL_arg1311z00_1274;

																BgL_arg1311z00_1274 =
																	MAKE_YOUNG_PAIR(BgL_oldz00_9, BNIL);
																BgL_arg1310z00_1273 =
																	MAKE_YOUNG_PAIR(BgL_newz00_10,
																	BgL_arg1311z00_1274);
															}
															BgL_list1309z00_1272 =
																MAKE_YOUNG_PAIR
																(BGl_symbol2238z00zz__match_descriptionsz00,
																BgL_arg1310z00_1273);
														}
														BgL_arg1307z00_1270 = BgL_list1309z00_1272;
													}
												else
													{	/* Match/descr.scm 155 */
														obj_t BgL_list1312z00_1275;

														{	/* Match/descr.scm 155 */
															obj_t BgL_arg1313z00_1276;

															{	/* Match/descr.scm 155 */
																obj_t BgL_arg1314z00_1277;

																BgL_arg1314z00_1277 =
																	MAKE_YOUNG_PAIR(BgL_newz00_10, BNIL);
																BgL_arg1313z00_1276 =
																	MAKE_YOUNG_PAIR(BgL_oldz00_9,
																	BgL_arg1314z00_1277);
															}
															BgL_list1312z00_1275 =
																MAKE_YOUNG_PAIR
																(BGl_symbol2238z00zz__match_descriptionsz00,
																BgL_arg1313z00_1276);
														}
														BgL_arg1307z00_1270 = BgL_list1312z00_1275;
													}
												return
													BGl_normz00zz__match_descriptionsz00
													(BgL_arg1307z00_1270,
													BGl_symbol2262z00zz__match_descriptionsz00);
											}
									}
							}
					}
			}
		}

	}



/* &pattern-plus */
	obj_t BGl_z62patternzd2pluszb0zz__match_descriptionsz00(obj_t BgL_envz00_3427,
		obj_t BgL_oldz00_3428, obj_t BgL_newz00_3429)
	{
		{	/* Match/descr.scm 143 */
			return
				BGl_patternzd2pluszd2zz__match_descriptionsz00(BgL_oldz00_3428,
				BgL_newz00_3429);
		}

	}



/* pattern-minus */
	BGL_EXPORTED_DEF obj_t BGl_patternzd2minuszd2zz__match_descriptionsz00(obj_t
		BgL_p1z00_11, obj_t BgL_p2z00_12)
	{
		{	/* Match/descr.scm 157 */
			{	/* Match/descr.scm 158 */
				bool_t BgL_test2384z00_3866;

				{	/* Match/descr.scm 158 */
					bool_t BgL_test2385z00_3867;

					if (BGl_isNegationzf3zf3zz__match_descriptionsz00(BgL_p1z00_11))
						{	/* Match/descr.scm 158 */
							BgL_test2385z00_3867 = ((bool_t) 1);
						}
					else
						{	/* Match/descr.scm 159 */
							bool_t BgL_test2387z00_3870;

							if (
								(CAR(
										((obj_t) BgL_p1z00_11)) ==
									BGl_symbol2258z00zz__match_descriptionsz00))
								{	/* Match/descr.scm 502 */
									BgL_test2387z00_3870 = ((bool_t) 1);
								}
							else
								{	/* Match/descr.scm 502 */
									BgL_test2387z00_3870 =
										(CAR(
											((obj_t) BgL_p1z00_11)) ==
										BGl_symbol2260z00zz__match_descriptionsz00);
								}
							if (BgL_test2387z00_3870)
								{	/* Match/descr.scm 159 */
									BgL_test2385z00_3867 = ((bool_t) 1);
								}
							else
								{	/* Match/descr.scm 159 */
									BgL_test2385z00_3867 =
										(CAR(
											((obj_t) BgL_p1z00_11)) ==
										BGl_symbol2264z00zz__match_descriptionsz00);
								}
						}
					if (BgL_test2385z00_3867)
						{	/* Match/descr.scm 158 */
							if (
								(CAR(
										((obj_t) BgL_p2z00_12)) ==
									BGl_symbol2248z00zz__match_descriptionsz00))
								{	/* Match/descr.scm 161 */
									BgL_test2384z00_3866 = ((bool_t) 1);
								}
							else
								{	/* Match/descr.scm 161 */
									BgL_test2384z00_3866 =
										(CAR(
											((obj_t) BgL_p2z00_12)) ==
										BGl_symbol2246z00zz__match_descriptionsz00);
								}
						}
					else
						{	/* Match/descr.scm 158 */
							BgL_test2384z00_3866 = ((bool_t) 1);
						}
				}
				if (BgL_test2384z00_3866)
					{	/* Match/descr.scm 158 */
						return BgL_p1z00_11;
					}
				else
					{	/* Match/descr.scm 164 */
						bool_t BgL_test2390z00_3888;

						if (
							(CAR(
									((obj_t) BgL_p1z00_11)) ==
								BGl_symbol2258z00zz__match_descriptionsz00))
							{	/* Match/descr.scm 502 */
								BgL_test2390z00_3888 = ((bool_t) 1);
							}
						else
							{	/* Match/descr.scm 502 */
								BgL_test2390z00_3888 =
									(CAR(
										((obj_t) BgL_p1z00_11)) ==
									BGl_symbol2260z00zz__match_descriptionsz00);
							}
						if (BgL_test2390z00_3888)
							{	/* Match/descr.scm 165 */
								obj_t BgL_list1321z00_1287;

								{	/* Match/descr.scm 165 */
									obj_t BgL_arg1322z00_1288;

									BgL_arg1322z00_1288 = MAKE_YOUNG_PAIR(BgL_p2z00_12, BNIL);
									BgL_list1321z00_1287 =
										MAKE_YOUNG_PAIR(BGl_symbol2266z00zz__match_descriptionsz00,
										BgL_arg1322z00_1288);
								}
								return BgL_list1321z00_1287;
							}
						else
							{	/* Match/descr.scm 166 */
								obj_t BgL_arg1324z00_1289;

								{	/* Match/descr.scm 166 */
									obj_t BgL_arg1325z00_1290;

									{	/* Match/descr.scm 166 */
										obj_t BgL_list1329z00_1294;

										{	/* Match/descr.scm 166 */
											obj_t BgL_arg1330z00_1295;

											BgL_arg1330z00_1295 = MAKE_YOUNG_PAIR(BgL_p2z00_12, BNIL);
											BgL_list1329z00_1294 =
												MAKE_YOUNG_PAIR
												(BGl_symbol2266z00zz__match_descriptionsz00,
												BgL_arg1330z00_1295);
										}
										BgL_arg1325z00_1290 = BgL_list1329z00_1294;
									}
									{	/* Match/descr.scm 166 */
										obj_t BgL_list1326z00_1291;

										{	/* Match/descr.scm 166 */
											obj_t BgL_arg1327z00_1292;

											{	/* Match/descr.scm 166 */
												obj_t BgL_arg1328z00_1293;

												BgL_arg1328z00_1293 =
													MAKE_YOUNG_PAIR(BgL_arg1325z00_1290, BNIL);
												BgL_arg1327z00_1292 =
													MAKE_YOUNG_PAIR(BgL_p1z00_11, BgL_arg1328z00_1293);
											}
											BgL_list1326z00_1291 =
												MAKE_YOUNG_PAIR
												(BGl_symbol2238z00zz__match_descriptionsz00,
												BgL_arg1327z00_1292);
										}
										BgL_arg1324z00_1289 = BgL_list1326z00_1291;
									}
								}
								return
									BGl_normz00zz__match_descriptionsz00(BgL_arg1324z00_1289,
									BGl_symbol2262z00zz__match_descriptionsz00);
							}
					}
			}
		}

	}



/* &pattern-minus */
	obj_t BGl_z62patternzd2minuszb0zz__match_descriptionsz00(obj_t
		BgL_envz00_3430, obj_t BgL_p1z00_3431, obj_t BgL_p2z00_3432)
	{
		{	/* Match/descr.scm 157 */
			return
				BGl_patternzd2minuszd2zz__match_descriptionsz00(BgL_p1z00_3431,
				BgL_p2z00_3432);
		}

	}



/* isNegation? */
	bool_t BGl_isNegationzf3zf3zz__match_descriptionsz00(obj_t BgL_cz00_13)
	{
		{	/* Match/descr.scm 172 */
			{	/* Match/descr.scm 173 */
				bool_t BgL__ortest_1040z00_1300;

				if (
					(CAR(
							((obj_t) BgL_cz00_13)) ==
						BGl_symbol2238z00zz__match_descriptionsz00))
					{	/* Match/descr.scm 174 */
						obj_t BgL_arg1333z00_1303;

						{	/* Match/descr.scm 174 */
							obj_t BgL_pairz00_2290;

							BgL_pairz00_2290 = CDR(((obj_t) BgL_cz00_13));
							BgL_arg1333z00_1303 = CAR(BgL_pairz00_2290);
						}
						BgL__ortest_1040z00_1300 =
							BGl_isNegationzf3zf3zz__match_descriptionsz00
							(BgL_arg1333z00_1303);
					}
				else
					{	/* Match/descr.scm 173 */
						BgL__ortest_1040z00_1300 = ((bool_t) 0);
					}
				if (BgL__ortest_1040z00_1300)
					{	/* Match/descr.scm 173 */
						return BgL__ortest_1040z00_1300;
					}
				else
					{	/* Match/descr.scm 173 */
						return
							(CAR(
								((obj_t) BgL_cz00_13)) ==
							BGl_symbol2266z00zz__match_descriptionsz00);
					}
			}
		}

	}



/* pattern-car */
	BGL_EXPORTED_DEF obj_t BGl_patternzd2carzd2zz__match_descriptionsz00(obj_t
		BgL_cz00_14)
	{
		{	/* Match/descr.scm 177 */
			if (
				(CAR(
						((obj_t) BgL_cz00_14)) ==
					BGl_symbol2241z00zz__match_descriptionsz00))
				{	/* Match/descr.scm 179 */
					obj_t BgL_pairz00_2298;

					BgL_pairz00_2298 = CDR(((obj_t) BgL_cz00_14));
					return CAR(BgL_pairz00_2298);
				}
			else
				{	/* Match/descr.scm 178 */
					return BGl_list2268z00zz__match_descriptionsz00;
				}
		}

	}



/* &pattern-car */
	obj_t BGl_z62patternzd2carzb0zz__match_descriptionsz00(obj_t BgL_envz00_3433,
		obj_t BgL_cz00_3434)
	{
		{	/* Match/descr.scm 177 */
			return BGl_patternzd2carzd2zz__match_descriptionsz00(BgL_cz00_3434);
		}

	}



/* pattern-cdr */
	BGL_EXPORTED_DEF obj_t BGl_patternzd2cdrzd2zz__match_descriptionsz00(obj_t
		BgL_cz00_15)
	{
		{	/* Match/descr.scm 182 */
			if (
				(CAR(
						((obj_t) BgL_cz00_15)) ==
					BGl_symbol2241z00zz__match_descriptionsz00))
				{	/* Match/descr.scm 184 */
					obj_t BgL_pairz00_2307;

					{	/* Match/descr.scm 184 */
						obj_t BgL_pairz00_2306;

						BgL_pairz00_2306 = CDR(((obj_t) BgL_cz00_15));
						BgL_pairz00_2307 = CDR(BgL_pairz00_2306);
					}
					return CAR(BgL_pairz00_2307);
				}
			else
				{	/* Match/descr.scm 183 */
					return BGl_list2268z00zz__match_descriptionsz00;
				}
		}

	}



/* &pattern-cdr */
	obj_t BGl_z62patternzd2cdrzb0zz__match_descriptionsz00(obj_t BgL_envz00_3435,
		obj_t BgL_cz00_3436)
	{
		{	/* Match/descr.scm 182 */
			return BGl_patternzd2cdrzd2zz__match_descriptionsz00(BgL_cz00_3436);
		}

	}



/* norm */
	obj_t BGl_normz00zz__match_descriptionsz00(obj_t BgL_cz00_17,
		obj_t BgL_ancz00_18)
	{
		{	/* Match/descr.scm 212 */
		BGl_normz00zz__match_descriptionsz00:
			if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_ancz00_18, BgL_cz00_17))
				{	/* Match/descr.scm 215 */
					return BgL_ancz00_18;
				}
			else
				{	/* Match/descr.scm 215 */
					if (
						(CAR(
								((obj_t) BgL_cz00_17)) ==
							BGl_symbol2266z00zz__match_descriptionsz00))
						{	/* Match/descr.scm 216 */
							obj_t BgL_arg1344z00_1314;

							{	/* Match/descr.scm 216 */
								obj_t BgL_pairz00_2312;

								BgL_pairz00_2312 = CDR(((obj_t) BgL_cz00_17));
								BgL_arg1344z00_1314 = CAR(BgL_pairz00_2312);
							}
							{	/* Match/descr.scm 222 */
								obj_t BgL_arg1357z00_2313;
								obj_t BgL_arg1359z00_2314;

								BgL_arg1357z00_2313 =
									BGl_rewritezd2notzd2zz__match_descriptionsz00
									(BgL_arg1344z00_1314);
								{	/* Match/descr.scm 222 */
									obj_t BgL_list1360z00_2315;

									{	/* Match/descr.scm 222 */
										obj_t BgL_arg1361z00_2316;

										BgL_arg1361z00_2316 =
											MAKE_YOUNG_PAIR(BgL_arg1344z00_1314, BNIL);
										BgL_list1360z00_2315 =
											MAKE_YOUNG_PAIR
											(BGl_symbol2266z00zz__match_descriptionsz00,
											BgL_arg1361z00_2316);
									}
									BgL_arg1359z00_2314 = BgL_list1360z00_2315;
								}
								{
									obj_t BgL_ancz00_3947;
									obj_t BgL_cz00_3946;

									BgL_cz00_3946 = BgL_arg1357z00_2313;
									BgL_ancz00_3947 = BgL_arg1359z00_2314;
									BgL_ancz00_18 = BgL_ancz00_3947;
									BgL_cz00_17 = BgL_cz00_3946;
									goto BGl_normz00zz__match_descriptionsz00;
								}
							}
						}
					else
						{	/* Match/descr.scm 216 */
							if (
								(CAR(
										((obj_t) BgL_cz00_17)) ==
									BGl_symbol2238z00zz__match_descriptionsz00))
								{	/* Match/descr.scm 217 */
									obj_t BgL_arg1347z00_1317;
									obj_t BgL_arg1348z00_1318;

									{	/* Match/descr.scm 217 */
										obj_t BgL_pairz00_2322;

										BgL_pairz00_2322 = CDR(((obj_t) BgL_cz00_17));
										BgL_arg1347z00_1317 = CAR(BgL_pairz00_2322);
									}
									{	/* Match/descr.scm 217 */
										obj_t BgL_pairz00_2328;

										{	/* Match/descr.scm 217 */
											obj_t BgL_pairz00_2327;

											BgL_pairz00_2327 = CDR(((obj_t) BgL_cz00_17));
											BgL_pairz00_2328 = CDR(BgL_pairz00_2327);
										}
										BgL_arg1348z00_1318 = CAR(BgL_pairz00_2328);
									}
									{	/* Match/descr.scm 232 */
										obj_t BgL_arg1370z00_2329;
										obj_t BgL_arg1371z00_2330;

										BgL_arg1370z00_2329 =
											BGl_rewritezd2andzd2zz__match_descriptionsz00
											(BgL_arg1347z00_1317, BgL_arg1348z00_1318);
										{	/* Match/descr.scm 232 */
											obj_t BgL_list1372z00_2331;

											{	/* Match/descr.scm 232 */
												obj_t BgL_arg1373z00_2332;

												{	/* Match/descr.scm 232 */
													obj_t BgL_arg1374z00_2333;

													BgL_arg1374z00_2333 =
														MAKE_YOUNG_PAIR(BgL_arg1348z00_1318, BNIL);
													BgL_arg1373z00_2332 =
														MAKE_YOUNG_PAIR(BgL_arg1347z00_1317,
														BgL_arg1374z00_2333);
												}
												BgL_list1372z00_2331 =
													MAKE_YOUNG_PAIR
													(BGl_symbol2238z00zz__match_descriptionsz00,
													BgL_arg1373z00_2332);
											}
											BgL_arg1371z00_2330 = BgL_list1372z00_2331;
										}
										{
											obj_t BgL_ancz00_3964;
											obj_t BgL_cz00_3963;

											BgL_cz00_3963 = BgL_arg1370z00_2329;
											BgL_ancz00_3964 = BgL_arg1371z00_2330;
											BgL_ancz00_18 = BgL_ancz00_3964;
											BgL_cz00_17 = BgL_cz00_3963;
											goto BGl_normz00zz__match_descriptionsz00;
										}
									}
								}
							else
								{	/* Match/descr.scm 217 */
									if (
										(CAR(
												((obj_t) BgL_cz00_17)) ==
											BGl_symbol2241z00zz__match_descriptionsz00))
										{	/* Match/descr.scm 218 */
											obj_t BgL_arg1352z00_1321;
											obj_t BgL_arg1353z00_1322;

											{	/* Match/descr.scm 218 */
												obj_t BgL_pairz00_2339;

												BgL_pairz00_2339 = CDR(((obj_t) BgL_cz00_17));
												BgL_arg1352z00_1321 = CAR(BgL_pairz00_2339);
											}
											{	/* Match/descr.scm 218 */
												obj_t BgL_pairz00_2345;

												{	/* Match/descr.scm 218 */
													obj_t BgL_pairz00_2344;

													BgL_pairz00_2344 = CDR(((obj_t) BgL_cz00_17));
													BgL_pairz00_2345 = CDR(BgL_pairz00_2344);
												}
												BgL_arg1353z00_1322 = CAR(BgL_pairz00_2345);
											}
											{	/* Match/descr.scm 251 */
												obj_t BgL_arg1414z00_2346;
												obj_t BgL_arg1415z00_2347;

												BgL_arg1414z00_2346 =
													BGl_normz00zz__match_descriptionsz00
													(BgL_arg1352z00_1321,
													BGl_symbol2262z00zz__match_descriptionsz00);
												BgL_arg1415z00_2347 =
													BGl_normz00zz__match_descriptionsz00
													(BgL_arg1353z00_1322,
													BGl_symbol2262z00zz__match_descriptionsz00);
												{	/* Match/descr.scm 251 */
													obj_t BgL_list1416z00_2348;

													{	/* Match/descr.scm 251 */
														obj_t BgL_arg1417z00_2349;

														{	/* Match/descr.scm 251 */
															obj_t BgL_arg1418z00_2350;

															BgL_arg1418z00_2350 =
																MAKE_YOUNG_PAIR(BgL_arg1415z00_2347, BNIL);
															BgL_arg1417z00_2349 =
																MAKE_YOUNG_PAIR(BgL_arg1414z00_2346,
																BgL_arg1418z00_2350);
														}
														BgL_list1416z00_2348 =
															MAKE_YOUNG_PAIR
															(BGl_symbol2241z00zz__match_descriptionsz00,
															BgL_arg1417z00_2349);
													}
													return BgL_list1416z00_2348;
												}
											}
										}
									else
										{	/* Match/descr.scm 218 */
											return BgL_cz00_17;
										}
								}
						}
				}
		}

	}



/* rewrite-not */
	obj_t BGl_rewritezd2notzd2zz__match_descriptionsz00(obj_t BgL_cz00_20)
	{
		{	/* Match/descr.scm 224 */
			if (
				(CAR(
						((obj_t) BgL_cz00_20)) ==
					BGl_symbol2266z00zz__match_descriptionsz00))
				{	/* Match/descr.scm 227 */
					obj_t BgL_pairz00_2361;

					BgL_pairz00_2361 = CDR(((obj_t) BgL_cz00_20));
					return CAR(BgL_pairz00_2361);
				}
			else
				{	/* Match/descr.scm 228 */
					obj_t BgL_arg1364z00_1332;

					BgL_arg1364z00_1332 =
						BGl_normz00zz__match_descriptionsz00(BgL_cz00_20,
						BGl_symbol2262z00zz__match_descriptionsz00);
					{	/* Match/descr.scm 228 */
						obj_t BgL_list1365z00_1333;

						{	/* Match/descr.scm 228 */
							obj_t BgL_arg1367z00_1334;

							BgL_arg1367z00_1334 = MAKE_YOUNG_PAIR(BgL_arg1364z00_1332, BNIL);
							BgL_list1365z00_1333 =
								MAKE_YOUNG_PAIR(BGl_symbol2266z00zz__match_descriptionsz00,
								BgL_arg1367z00_1334);
						}
						return BgL_list1365z00_1333;
					}
				}
		}

	}



/* rewrite-and */
	obj_t BGl_rewritezd2andzd2zz__match_descriptionsz00(obj_t BgL_c1z00_23,
		obj_t BgL_c2z00_24)
	{
		{	/* Match/descr.scm 234 */
			if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_c1z00_23, BgL_c2z00_24))
				{	/* Match/descr.scm 236 */
					return BgL_c1z00_23;
				}
			else
				{	/* Match/descr.scm 236 */
					if (
						(CAR(
								((obj_t) BgL_c1z00_23)) ==
							BGl_symbol2238z00zz__match_descriptionsz00))
						{	/* Match/descr.scm 239 */
							obj_t BgL_arg1378z00_1344;
							obj_t BgL_arg1379z00_1345;

							{	/* Match/descr.scm 239 */
								obj_t BgL_pairz00_2373;

								BgL_pairz00_2373 = CDR(((obj_t) BgL_c1z00_23));
								BgL_arg1378z00_1344 = CAR(BgL_pairz00_2373);
							}
							{	/* Match/descr.scm 241 */
								obj_t BgL_arg1383z00_1349;

								{	/* Match/descr.scm 241 */
									obj_t BgL_pairz00_2379;

									{	/* Match/descr.scm 241 */
										obj_t BgL_pairz00_2378;

										BgL_pairz00_2378 = CDR(((obj_t) BgL_c1z00_23));
										BgL_pairz00_2379 = CDR(BgL_pairz00_2378);
									}
									BgL_arg1383z00_1349 = CAR(BgL_pairz00_2379);
								}
								{	/* Match/descr.scm 240 */
									obj_t BgL_list1384z00_1350;

									{	/* Match/descr.scm 240 */
										obj_t BgL_arg1385z00_1351;

										{	/* Match/descr.scm 240 */
											obj_t BgL_arg1386z00_1352;

											BgL_arg1386z00_1352 = MAKE_YOUNG_PAIR(BgL_c2z00_24, BNIL);
											BgL_arg1385z00_1351 =
												MAKE_YOUNG_PAIR(BgL_arg1383z00_1349,
												BgL_arg1386z00_1352);
										}
										BgL_list1384z00_1350 =
											MAKE_YOUNG_PAIR
											(BGl_symbol2238z00zz__match_descriptionsz00,
											BgL_arg1385z00_1351);
									}
									BgL_arg1379z00_1345 = BgL_list1384z00_1350;
								}
							}
							{	/* Match/descr.scm 238 */
								obj_t BgL_list1380z00_1346;

								{	/* Match/descr.scm 238 */
									obj_t BgL_arg1381z00_1347;

									{	/* Match/descr.scm 238 */
										obj_t BgL_arg1382z00_1348;

										BgL_arg1382z00_1348 =
											MAKE_YOUNG_PAIR(BgL_arg1379z00_1345, BNIL);
										BgL_arg1381z00_1347 =
											MAKE_YOUNG_PAIR(BgL_arg1378z00_1344, BgL_arg1382z00_1348);
									}
									BgL_list1380z00_1346 =
										MAKE_YOUNG_PAIR(BGl_symbol2238z00zz__match_descriptionsz00,
										BgL_arg1381z00_1347);
								}
								return BgL_list1380z00_1346;
							}
						}
					else
						{	/* Match/descr.scm 243 */
							bool_t BgL_test2403z00_4010;

							if (
								(CAR(
										((obj_t) BgL_c1z00_23)) ==
									BGl_symbol2241z00zz__match_descriptionsz00))
								{	/* Match/descr.scm 243 */
									BgL_test2403z00_4010 =
										(CAR(
											((obj_t) BgL_c2z00_24)) ==
										BGl_symbol2241z00zz__match_descriptionsz00);
								}
							else
								{	/* Match/descr.scm 243 */
									BgL_test2403z00_4010 = ((bool_t) 0);
								}
							if (BgL_test2403z00_4010)
								{	/* Match/descr.scm 246 */
									obj_t BgL_arg1392z00_1358;
									obj_t BgL_arg1393z00_1359;

									{	/* Match/descr.scm 246 */
										obj_t BgL_arg1397z00_1363;
										obj_t BgL_arg1398z00_1364;

										{	/* Match/descr.scm 246 */
											obj_t BgL_pairz00_2387;

											BgL_pairz00_2387 = CDR(((obj_t) BgL_c1z00_23));
											BgL_arg1397z00_1363 = CAR(BgL_pairz00_2387);
										}
										{	/* Match/descr.scm 246 */
											obj_t BgL_pairz00_2391;

											BgL_pairz00_2391 = CDR(((obj_t) BgL_c2z00_24));
											BgL_arg1398z00_1364 = CAR(BgL_pairz00_2391);
										}
										{	/* Match/descr.scm 246 */
											obj_t BgL_list1399z00_1365;

											{	/* Match/descr.scm 246 */
												obj_t BgL_arg1400z00_1366;

												{	/* Match/descr.scm 246 */
													obj_t BgL_arg1401z00_1367;

													BgL_arg1401z00_1367 =
														MAKE_YOUNG_PAIR(BgL_arg1398z00_1364, BNIL);
													BgL_arg1400z00_1366 =
														MAKE_YOUNG_PAIR(BgL_arg1397z00_1363,
														BgL_arg1401z00_1367);
												}
												BgL_list1399z00_1365 =
													MAKE_YOUNG_PAIR
													(BGl_symbol2238z00zz__match_descriptionsz00,
													BgL_arg1400z00_1366);
											}
											BgL_arg1392z00_1358 = BgL_list1399z00_1365;
										}
									}
									{	/* Match/descr.scm 247 */
										obj_t BgL_arg1402z00_1368;
										obj_t BgL_arg1404z00_1369;

										{	/* Match/descr.scm 247 */
											obj_t BgL_pairz00_2398;

											{	/* Match/descr.scm 247 */
												obj_t BgL_pairz00_2397;

												BgL_pairz00_2397 = CDR(((obj_t) BgL_c1z00_23));
												BgL_pairz00_2398 = CDR(BgL_pairz00_2397);
											}
											BgL_arg1402z00_1368 = CAR(BgL_pairz00_2398);
										}
										{	/* Match/descr.scm 247 */
											obj_t BgL_pairz00_2404;

											{	/* Match/descr.scm 247 */
												obj_t BgL_pairz00_2403;

												BgL_pairz00_2403 = CDR(((obj_t) BgL_c2z00_24));
												BgL_pairz00_2404 = CDR(BgL_pairz00_2403);
											}
											BgL_arg1404z00_1369 = CAR(BgL_pairz00_2404);
										}
										{	/* Match/descr.scm 247 */
											obj_t BgL_list1405z00_1370;

											{	/* Match/descr.scm 247 */
												obj_t BgL_arg1406z00_1371;

												{	/* Match/descr.scm 247 */
													obj_t BgL_arg1407z00_1372;

													BgL_arg1407z00_1372 =
														MAKE_YOUNG_PAIR(BgL_arg1404z00_1369, BNIL);
													BgL_arg1406z00_1371 =
														MAKE_YOUNG_PAIR(BgL_arg1402z00_1368,
														BgL_arg1407z00_1372);
												}
												BgL_list1405z00_1370 =
													MAKE_YOUNG_PAIR
													(BGl_symbol2238z00zz__match_descriptionsz00,
													BgL_arg1406z00_1371);
											}
											BgL_arg1393z00_1359 = BgL_list1405z00_1370;
										}
									}
									{	/* Match/descr.scm 245 */
										obj_t BgL_list1394z00_1360;

										{	/* Match/descr.scm 245 */
											obj_t BgL_arg1395z00_1361;

											{	/* Match/descr.scm 245 */
												obj_t BgL_arg1396z00_1362;

												BgL_arg1396z00_1362 =
													MAKE_YOUNG_PAIR(BgL_arg1393z00_1359, BNIL);
												BgL_arg1395z00_1361 =
													MAKE_YOUNG_PAIR(BgL_arg1392z00_1358,
													BgL_arg1396z00_1362);
											}
											BgL_list1394z00_1360 =
												MAKE_YOUNG_PAIR
												(BGl_symbol2241z00zz__match_descriptionsz00,
												BgL_arg1395z00_1361);
										}
										return BgL_list1394z00_1360;
									}
								}
							else
								{	/* Match/descr.scm 248 */
									obj_t BgL_list1408z00_1373;

									{	/* Match/descr.scm 248 */
										obj_t BgL_arg1409z00_1374;

										{	/* Match/descr.scm 248 */
											obj_t BgL_arg1410z00_1375;

											BgL_arg1410z00_1375 = MAKE_YOUNG_PAIR(BgL_c2z00_24, BNIL);
											BgL_arg1409z00_1374 =
												MAKE_YOUNG_PAIR(BgL_c1z00_23, BgL_arg1410z00_1375);
										}
										BgL_list1408z00_1373 =
											MAKE_YOUNG_PAIR
											(BGl_symbol2238z00zz__match_descriptionsz00,
											BgL_arg1409z00_1374);
									}
									return BgL_list1408z00_1373;
								}
						}
				}
		}

	}



/* more-precise? */
	BGL_EXPORTED_DEF obj_t BGl_morezd2precisezf3z21zz__match_descriptionsz00(obj_t
		BgL_descrz00_27, obj_t BgL_fz00_28)
	{
		{	/* Match/descr.scm 263 */
		BGl_morezd2precisezf3z21zz__match_descriptionsz00:
			{	/* Match/descr.scm 265 */
				bool_t BgL_test2405z00_4044;

				if (
					(CAR(
							((obj_t) BgL_descrz00_27)) ==
						BGl_symbol2258z00zz__match_descriptionsz00))
					{	/* Match/descr.scm 502 */
						BgL_test2405z00_4044 = ((bool_t) 1);
					}
				else
					{	/* Match/descr.scm 502 */
						BgL_test2405z00_4044 =
							(CAR(
								((obj_t) BgL_descrz00_27)) ==
							BGl_symbol2260z00zz__match_descriptionsz00);
					}
				if (BgL_test2405z00_4044)
					{	/* Match/descr.scm 265 */
						return BFALSE;
					}
				else
					{	/* Match/descr.scm 265 */
						if (
							(CAR(
									((obj_t) BgL_fz00_28)) ==
								BGl_symbol2258z00zz__match_descriptionsz00))
							{	/* Match/descr.scm 267 */
								return BTRUE;
							}
						else
							{	/* Match/descr.scm 267 */
								if (
									(CAR(
											((obj_t) BgL_fz00_28)) ==
										BGl_symbol2269z00zz__match_descriptionsz00))
									{	/* Match/descr.scm 270 */
										return BFALSE;
									}
								else
									{	/* Match/descr.scm 270 */
										if (
											(CAR(
													((obj_t) BgL_fz00_28)) ==
												BGl_symbol2271z00zz__match_descriptionsz00))
											{	/* Match/descr.scm 273 */
												if (
													(CAR(
															((obj_t) BgL_descrz00_27)) ==
														BGl_symbol2271z00zz__match_descriptionsz00))
													{	/* Match/descr.scm 275 */
														bool_t BgL_tmpz00_4068;

														{	/* Match/descr.scm 275 */
															obj_t BgL_auxz00_4073;
															obj_t BgL_auxz00_4069;

															{	/* Match/descr.scm 275 */
																obj_t BgL_pairz00_2437;

																BgL_pairz00_2437 = CDR(((obj_t) BgL_fz00_28));
																BgL_auxz00_4073 = CAR(BgL_pairz00_2437);
															}
															{	/* Match/descr.scm 275 */
																obj_t BgL_pairz00_2433;

																BgL_pairz00_2433 =
																	CDR(((obj_t) BgL_descrz00_27));
																BgL_auxz00_4069 = CAR(BgL_pairz00_2433);
															}
															BgL_tmpz00_4068 =
																BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																(BgL_auxz00_4069, BgL_auxz00_4073);
														}
														return BBOOL(BgL_tmpz00_4068);
													}
												else
													{	/* Match/descr.scm 274 */
														return BFALSE;
													}
											}
										else
											{	/* Match/descr.scm 273 */
												if (
													(CAR(
															((obj_t) BgL_fz00_28)) ==
														BGl_symbol2238z00zz__match_descriptionsz00))
													{	/* Match/descr.scm 278 */
														obj_t BgL__andtest_1043z00_1397;

														{	/* Match/descr.scm 278 */
															obj_t BgL_arg1431z00_1399;

															{	/* Match/descr.scm 278 */
																obj_t BgL_pairz00_2444;

																BgL_pairz00_2444 = CDR(((obj_t) BgL_fz00_28));
																BgL_arg1431z00_1399 = CAR(BgL_pairz00_2444);
															}
															BgL__andtest_1043z00_1397 =
																BGl_morezd2precisezf3z21zz__match_descriptionsz00
																(BgL_descrz00_27, BgL_arg1431z00_1399);
														}
														if (CBOOL(BgL__andtest_1043z00_1397))
															{	/* Match/descr.scm 279 */
																obj_t BgL_arg1430z00_1398;

																{	/* Match/descr.scm 279 */
																	obj_t BgL_pairz00_2450;

																	{	/* Match/descr.scm 279 */
																		obj_t BgL_pairz00_2449;

																		BgL_pairz00_2449 =
																			CDR(((obj_t) BgL_fz00_28));
																		BgL_pairz00_2450 = CDR(BgL_pairz00_2449);
																	}
																	BgL_arg1430z00_1398 = CAR(BgL_pairz00_2450);
																}
																{
																	obj_t BgL_fz00_4093;

																	BgL_fz00_4093 = BgL_arg1430z00_1398;
																	BgL_fz00_28 = BgL_fz00_4093;
																	goto
																		BGl_morezd2precisezf3z21zz__match_descriptionsz00;
																}
															}
														else
															{	/* Match/descr.scm 278 */
																return BFALSE;
															}
													}
												else
													{	/* Match/descr.scm 277 */
														if (
															(CAR(
																	((obj_t) BgL_fz00_28)) ==
																BGl_symbol2234z00zz__match_descriptionsz00))
															{	/* Match/descr.scm 282 */
																obj_t BgL__ortest_1044z00_1402;

																{	/* Match/descr.scm 282 */
																	obj_t BgL_arg1435z00_1404;

																	{	/* Match/descr.scm 282 */
																		obj_t BgL_pairz00_2457;

																		BgL_pairz00_2457 =
																			CDR(((obj_t) BgL_fz00_28));
																		BgL_arg1435z00_1404 = CAR(BgL_pairz00_2457);
																	}
																	BgL__ortest_1044z00_1402 =
																		BGl_morezd2precisezf3z21zz__match_descriptionsz00
																		(BgL_descrz00_27, BgL_arg1435z00_1404);
																}
																if (CBOOL(BgL__ortest_1044z00_1402))
																	{	/* Match/descr.scm 282 */
																		return BgL__ortest_1044z00_1402;
																	}
																else
																	{	/* Match/descr.scm 283 */
																		obj_t BgL_arg1434z00_1403;

																		{	/* Match/descr.scm 283 */
																			obj_t BgL_pairz00_2463;

																			{	/* Match/descr.scm 283 */
																				obj_t BgL_pairz00_2462;

																				BgL_pairz00_2462 =
																					CDR(((obj_t) BgL_fz00_28));
																				BgL_pairz00_2463 =
																					CDR(BgL_pairz00_2462);
																			}
																			BgL_arg1434z00_1403 =
																				CAR(BgL_pairz00_2463);
																		}
																		{
																			obj_t BgL_fz00_4108;

																			BgL_fz00_4108 = BgL_arg1434z00_1403;
																			BgL_fz00_28 = BgL_fz00_4108;
																			goto
																				BGl_morezd2precisezf3z21zz__match_descriptionsz00;
																		}
																	}
															}
														else
															{	/* Match/descr.scm 281 */
																if (
																	(CAR(
																			((obj_t) BgL_fz00_28)) ==
																		BGl_symbol2236z00zz__match_descriptionsz00))
																	{	/* Match/descr.scm 285 */
																		return BFALSE;
																	}
																else
																	{	/* Match/descr.scm 285 */
																		if (CBOOL
																			(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																				(CAR(((obj_t) BgL_fz00_28)),
																					BGl_list2273z00zz__match_descriptionsz00)))
																			{	/* Match/descr.scm 288 */
																				if (
																					(CAR(
																							((obj_t) BgL_descrz00_27)) ==
																						BGl_symbol2241z00zz__match_descriptionsz00))
																					{	/* Match/descr.scm 290 */
																						obj_t BgL__andtest_1046z00_1410;

																						{	/* Match/descr.scm 290 */
																							obj_t BgL_arg1442z00_1413;
																							obj_t BgL_arg1443z00_1414;

																							{	/* Match/descr.scm 290 */
																								obj_t BgL_pairz00_2473;

																								BgL_pairz00_2473 =
																									CDR(
																									((obj_t) BgL_descrz00_27));
																								BgL_arg1442z00_1413 =
																									CAR(BgL_pairz00_2473);
																							}
																							{	/* Match/descr.scm 290 */
																								obj_t BgL_pairz00_2477;

																								BgL_pairz00_2477 =
																									CDR(((obj_t) BgL_fz00_28));
																								BgL_arg1443z00_1414 =
																									CAR(BgL_pairz00_2477);
																							}
																							BgL__andtest_1046z00_1410 =
																								BGl_morezd2precisezf3z21zz__match_descriptionsz00
																								(BgL_arg1442z00_1413,
																								BgL_arg1443z00_1414);
																						}
																						if (CBOOL
																							(BgL__andtest_1046z00_1410))
																							{	/* Match/descr.scm 291 */
																								obj_t BgL_arg1440z00_1411;
																								obj_t BgL_arg1441z00_1412;

																								{	/* Match/descr.scm 291 */
																									obj_t BgL_pairz00_2483;

																									{	/* Match/descr.scm 291 */
																										obj_t BgL_pairz00_2482;

																										BgL_pairz00_2482 =
																											CDR(
																											((obj_t)
																												BgL_descrz00_27));
																										BgL_pairz00_2483 =
																											CDR(BgL_pairz00_2482);
																									}
																									BgL_arg1440z00_1411 =
																										CAR(BgL_pairz00_2483);
																								}
																								{	/* Match/descr.scm 291 */
																									obj_t BgL_pairz00_2489;

																									{	/* Match/descr.scm 291 */
																										obj_t BgL_pairz00_2488;

																										BgL_pairz00_2488 =
																											CDR(
																											((obj_t) BgL_fz00_28));
																										BgL_pairz00_2489 =
																											CDR(BgL_pairz00_2488);
																									}
																									BgL_arg1441z00_1412 =
																										CAR(BgL_pairz00_2489);
																								}
																								{
																									obj_t BgL_fz00_4140;
																									obj_t BgL_descrz00_4139;

																									BgL_descrz00_4139 =
																										BgL_arg1440z00_1411;
																									BgL_fz00_4140 =
																										BgL_arg1441z00_1412;
																									BgL_fz00_28 = BgL_fz00_4140;
																									BgL_descrz00_27 =
																										BgL_descrz00_4139;
																									goto
																										BGl_morezd2precisezf3z21zz__match_descriptionsz00;
																								}
																							}
																						else
																							{	/* Match/descr.scm 290 */
																								return BFALSE;
																							}
																					}
																				else
																					{	/* Match/descr.scm 289 */
																						return BFALSE;
																					}
																			}
																		else
																			{	/* Match/descr.scm 288 */
																				return BFALSE;
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



/* &more-precise? */
	obj_t BGl_z62morezd2precisezf3z43zz__match_descriptionsz00(obj_t
		BgL_envz00_3437, obj_t BgL_descrz00_3438, obj_t BgL_fz00_3439)
	{
		{	/* Match/descr.scm 263 */
			return
				BGl_morezd2precisezf3z21zz__match_descriptionsz00(BgL_descrz00_3438,
				BgL_fz00_3439);
		}

	}



/* compatible? */
	BGL_EXPORTED_DEF obj_t BGl_compatiblezf3zf3zz__match_descriptionsz00(obj_t
		BgL_descrz00_29, obj_t BgL_patternz00_30)
	{
		{	/* Match/descr.scm 315 */
			{	/* Match/descr.scm 316 */
				obj_t BgL_resz00_1425;

				if (
					(CAR(
							((obj_t) BgL_patternz00_30)) ==
						BGl_symbol2238z00zz__match_descriptionsz00))
					{	/* Match/descr.scm 319 */
						obj_t BgL__andtest_1047z00_1427;

						{	/* Match/descr.scm 319 */
							obj_t BgL_arg1458z00_1429;

							{	/* Match/descr.scm 319 */
								obj_t BgL_pairz00_2498;

								BgL_pairz00_2498 = CDR(((obj_t) BgL_patternz00_30));
								BgL_arg1458z00_1429 = CAR(BgL_pairz00_2498);
							}
							BgL__andtest_1047z00_1427 =
								BGl_compatiblezf3zf3zz__match_descriptionsz00(BgL_descrz00_29,
								BgL_arg1458z00_1429);
						}
						if (CBOOL(BgL__andtest_1047z00_1427))
							{	/* Match/descr.scm 320 */
								obj_t BgL_arg1457z00_1428;

								{	/* Match/descr.scm 320 */
									obj_t BgL_pairz00_2504;

									{	/* Match/descr.scm 320 */
										obj_t BgL_pairz00_2503;

										BgL_pairz00_2503 = CDR(((obj_t) BgL_patternz00_30));
										BgL_pairz00_2504 = CDR(BgL_pairz00_2503);
									}
									BgL_arg1457z00_1428 = CAR(BgL_pairz00_2504);
								}
								BgL_resz00_1425 =
									BGl_compatiblezf3zf3zz__match_descriptionsz00(BgL_descrz00_29,
									BgL_arg1457z00_1428);
							}
						else
							{	/* Match/descr.scm 319 */
								BgL_resz00_1425 = BFALSE;
							}
					}
				else
					{	/* Match/descr.scm 318 */
						BgL_resz00_1425 =
							BGl_comparez00zz__match_descriptionsz00(BgL_descrz00_29,
							BGl_alphazd2convertzd2zz__match_descriptionsz00
							(BgL_patternz00_30), BGl_proc2278z00zz__match_descriptionsz00,
							BGl_proc2279z00zz__match_descriptionsz00,
							BGl_proc2280z00zz__match_descriptionsz00);
					}
				return BgL_resz00_1425;
			}
		}

	}



/* &compatible? */
	obj_t BGl_z62compatiblezf3z91zz__match_descriptionsz00(obj_t BgL_envz00_3443,
		obj_t BgL_descrz00_3444, obj_t BgL_patternz00_3445)
	{
		{	/* Match/descr.scm 315 */
			return
				BGl_compatiblezf3zf3zz__match_descriptionsz00(BgL_descrz00_3444,
				BgL_patternz00_3445);
		}

	}



/* &<@anonymous:1465> */
	obj_t BGl_z62zc3z04anonymousza31465ze3ze5zz__match_descriptionsz00(obj_t
		BgL_envz00_3446, obj_t BgL_xz00_3447)
	{
		{	/* Match/descr.scm 326 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &<@anonymous:1464> */
	obj_t BGl_z62zc3z04anonymousza31464ze3ze5zz__match_descriptionsz00(obj_t
		BgL_envz00_3448, obj_t BgL_xz00_3449)
	{
		{	/* Match/descr.scm 325 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &<@anonymous:1463> */
	obj_t BGl_z62zc3z04anonymousza31463ze3ze5zz__match_descriptionsz00(obj_t
		BgL_envz00_3450, obj_t BgL_xz00_3451)
	{
		{	/* Match/descr.scm 324 */
			return BGl_symbol2281z00zz__match_descriptionsz00;
		}

	}



/* compare */
	obj_t BGl_comparez00zz__match_descriptionsz00(obj_t BgL_descrz00_31,
		obj_t BgL_patz00_32, obj_t BgL_envz00_33, obj_t BgL_kz00_34,
		obj_t BgL_za7za7_35)
	{
		{	/* Match/descr.scm 343 */
		BGl_comparez00zz__match_descriptionsz00:
			{	/* Match/descr.scm 346 */
				bool_t BgL_test2421z00_4162;

				{	/* Match/descr.scm 346 */
					bool_t BgL_test2422z00_4163;

					if (
						(CAR(
								((obj_t) BgL_descrz00_31)) ==
							BGl_symbol2258z00zz__match_descriptionsz00))
						{	/* Match/descr.scm 502 */
							BgL_test2422z00_4163 = ((bool_t) 1);
						}
					else
						{	/* Match/descr.scm 502 */
							BgL_test2422z00_4163 =
								(CAR(
									((obj_t) BgL_descrz00_31)) ==
								BGl_symbol2260z00zz__match_descriptionsz00);
						}
					if (BgL_test2422z00_4163)
						{	/* Match/descr.scm 346 */
							BgL_test2421z00_4162 = ((bool_t) 1);
						}
					else
						{	/* Match/descr.scm 347 */
							bool_t BgL_test2424z00_4171;

							if (
								(CAR(
										((obj_t) BgL_patz00_32)) ==
									BGl_symbol2258z00zz__match_descriptionsz00))
								{	/* Match/descr.scm 502 */
									BgL_test2424z00_4171 = ((bool_t) 1);
								}
							else
								{	/* Match/descr.scm 502 */
									BgL_test2424z00_4171 =
										(CAR(
											((obj_t) BgL_patz00_32)) ==
										BGl_symbol2260z00zz__match_descriptionsz00);
								}
							if (BgL_test2424z00_4171)
								{	/* Match/descr.scm 347 */
									BgL_test2421z00_4162 = ((bool_t) 1);
								}
							else
								{	/* Match/descr.scm 347 */
									if (
										(CAR(
												((obj_t) BgL_patz00_32)) ==
											BGl_symbol2234z00zz__match_descriptionsz00))
										{	/* Match/descr.scm 348 */
											BgL_test2421z00_4162 = ((bool_t) 1);
										}
									else
										{	/* Match/descr.scm 348 */
											if (
												(CAR(
														((obj_t) BgL_patz00_32)) ==
													BGl_symbol2236z00zz__match_descriptionsz00))
												{	/* Match/descr.scm 348 */
													BgL_test2421z00_4162 = ((bool_t) 1);
												}
											else
												{	/* Match/descr.scm 348 */
													if (
														(CAR(
																((obj_t) BgL_patz00_32)) ==
															BGl_symbol2283z00zz__match_descriptionsz00))
														{	/* Match/descr.scm 348 */
															BgL_test2421z00_4162 = ((bool_t) 1);
														}
													else
														{	/* Match/descr.scm 348 */
															if (
																(CAR(
																		((obj_t) BgL_patz00_32)) ==
																	BGl_symbol2269z00zz__match_descriptionsz00))
																{	/* Match/descr.scm 349 */
																	BgL_test2421z00_4162 = ((bool_t) 1);
																}
															else
																{	/* Match/descr.scm 349 */
																	if (
																		(CAR(
																				((obj_t) BgL_patz00_32)) ==
																			BGl_symbol2260z00zz__match_descriptionsz00))
																		{	/* Match/descr.scm 350 */
																			BgL_test2421z00_4162 = ((bool_t) 1);
																		}
																	else
																		{	/* Match/descr.scm 350 */
																			if (
																				(CAR(
																						((obj_t) BgL_patz00_32)) ==
																					BGl_symbol2248z00zz__match_descriptionsz00))
																				{	/* Match/descr.scm 351 */
																					BgL_test2421z00_4162 = ((bool_t) 1);
																				}
																			else
																				{	/* Match/descr.scm 351 */
																					BgL_test2421z00_4162 =
																						(CAR(
																							((obj_t) BgL_patz00_32)) ==
																						BGl_symbol2246z00zz__match_descriptionsz00);
																				}
																		}
																}
														}
												}
										}
								}
						}
				}
				if (BgL_test2421z00_4162)
					{	/* Match/descr.scm 346 */
						return
							PROCEDURE_ENTRY(BgL_kz00_34) (BgL_kz00_34, BgL_envz00_33, BEOA);
					}
				else
					{	/* Match/descr.scm 346 */
						if (
							(CAR(
									((obj_t) BgL_patz00_32)) ==
								BGl_symbol2238z00zz__match_descriptionsz00))
							{	/* Match/descr.scm 356 */
								obj_t BgL_arg1476z00_1453;

								{	/* Match/descr.scm 356 */
									obj_t BgL_pairz00_2534;

									BgL_pairz00_2534 = CDR(((obj_t) BgL_patz00_32));
									BgL_arg1476z00_1453 = CAR(BgL_pairz00_2534);
								}
								{	/* Match/descr.scm 357 */
									obj_t BgL_zc3z04anonymousza31478ze3z87_3452;

									BgL_zc3z04anonymousza31478ze3z87_3452 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31478ze3ze5zz__match_descriptionsz00,
										(int) (((long) 1)), (int) (((long) 4)));
									PROCEDURE_SET(BgL_zc3z04anonymousza31478ze3z87_3452,
										(int) (((long) 0)), BgL_patz00_32);
									PROCEDURE_SET(BgL_zc3z04anonymousza31478ze3z87_3452,
										(int) (((long) 1)), BgL_descrz00_31);
									PROCEDURE_SET(BgL_zc3z04anonymousza31478ze3z87_3452,
										(int) (((long) 2)), BgL_kz00_34);
									PROCEDURE_SET(BgL_zc3z04anonymousza31478ze3z87_3452,
										(int) (((long) 3)), BgL_za7za7_35);
									{
										obj_t BgL_kz00_4229;
										obj_t BgL_patz00_4228;

										BgL_patz00_4228 = BgL_arg1476z00_1453;
										BgL_kz00_4229 = BgL_zc3z04anonymousza31478ze3z87_3452;
										BgL_kz00_34 = BgL_kz00_4229;
										BgL_patz00_32 = BgL_patz00_4228;
										goto BGl_comparez00zz__match_descriptionsz00;
									}
								}
							}
						else
							{	/* Match/descr.scm 355 */
								if (
									(CAR(
											((obj_t) BgL_patz00_32)) ==
										BGl_symbol2241z00zz__match_descriptionsz00))
									{	/* Match/descr.scm 360 */
										if (BGl_mayzd2bezd2azd2conszd2zz__match_descriptionsz00
											(BgL_descrz00_31))
											{	/* Match/descr.scm 362 */
												obj_t BgL_arg1483z00_1461;
												obj_t BgL_arg1484z00_1462;

												if (
													(CAR(
															((obj_t) BgL_descrz00_31)) ==
														BGl_symbol2241z00zz__match_descriptionsz00))
													{	/* Match/descr.scm 179 */
														obj_t BgL_pairz00_2550;

														BgL_pairz00_2550 = CDR(((obj_t) BgL_descrz00_31));
														BgL_arg1483z00_1461 = CAR(BgL_pairz00_2550);
													}
												else
													{	/* Match/descr.scm 178 */
														BgL_arg1483z00_1461 =
															BGl_list2268z00zz__match_descriptionsz00;
													}
												{	/* Match/descr.scm 362 */
													obj_t BgL_pairz00_2554;

													BgL_pairz00_2554 = CDR(((obj_t) BgL_patz00_32));
													BgL_arg1484z00_1462 = CAR(BgL_pairz00_2554);
												}
												{	/* Match/descr.scm 364 */
													obj_t BgL_zc3z04anonymousza31486ze3z87_3453;

													BgL_zc3z04anonymousza31486ze3z87_3453 =
														MAKE_FX_PROCEDURE
														(BGl_z62zc3z04anonymousza31486ze3ze5zz__match_descriptionsz00,
														(int) (((long) 1)), (int) (((long) 4)));
													PROCEDURE_SET(BgL_zc3z04anonymousza31486ze3z87_3453,
														(int) (((long) 0)), BgL_descrz00_31);
													PROCEDURE_SET(BgL_zc3z04anonymousza31486ze3z87_3453,
														(int) (((long) 1)), BgL_patz00_32);
													PROCEDURE_SET(BgL_zc3z04anonymousza31486ze3z87_3453,
														(int) (((long) 2)), BgL_kz00_34);
													PROCEDURE_SET(BgL_zc3z04anonymousza31486ze3z87_3453,
														(int) (((long) 3)), BgL_za7za7_35);
													{
														obj_t BgL_kz00_4259;
														obj_t BgL_patz00_4258;
														obj_t BgL_descrz00_4257;

														BgL_descrz00_4257 = BgL_arg1483z00_1461;
														BgL_patz00_4258 = BgL_arg1484z00_1462;
														BgL_kz00_4259 =
															BgL_zc3z04anonymousza31486ze3z87_3453;
														BgL_kz00_34 = BgL_kz00_4259;
														BgL_patz00_32 = BgL_patz00_4258;
														BgL_descrz00_31 = BgL_descrz00_4257;
														goto BGl_comparez00zz__match_descriptionsz00;
													}
												}
											}
										else
											{	/* Match/descr.scm 361 */
												return
													PROCEDURE_ENTRY(BgL_za7za7_35) (BgL_za7za7_35,
													BgL_envz00_33, BEOA);
											}
									}
								else
									{	/* Match/descr.scm 360 */
										if (
											(CAR(
													((obj_t) BgL_patz00_32)) ==
												BGl_symbol2271z00zz__match_descriptionsz00))
											{	/* Match/descr.scm 372 */
												obj_t BgL_arg1491z00_1470;

												{	/* Match/descr.scm 372 */
													obj_t BgL_pairz00_2577;

													BgL_pairz00_2577 = CDR(((obj_t) BgL_patz00_32));
													BgL_arg1491z00_1470 = CAR(BgL_pairz00_2577);
												}
												return
													BGl_matchz00zz__match_descriptionsz00(BgL_descrz00_31,
													BgL_arg1491z00_1470, BgL_envz00_33, BgL_kz00_34,
													BgL_za7za7_35);
											}
										else
											{	/* Match/descr.scm 374 */
												bool_t BgL_test2437z00_4272;

												if (
													(CAR(
															((obj_t) BgL_descrz00_31)) ==
														BGl_symbol2250z00zz__match_descriptionsz00))
													{	/* Match/descr.scm 374 */
														BgL_test2437z00_4272 =
															(CAR(
																((obj_t) BgL_patz00_32)) ==
															BGl_symbol2250z00zz__match_descriptionsz00);
													}
												else
													{	/* Match/descr.scm 374 */
														BgL_test2437z00_4272 = ((bool_t) 0);
													}
												if (BgL_test2437z00_4272)
													{	/* Match/descr.scm 375 */
														bool_t BgL_test2439z00_4280;

														{	/* Match/descr.scm 375 */
															obj_t BgL_arg1533z00_1506;

															{	/* Match/descr.scm 375 */
																obj_t BgL_arg1534z00_1507;

																{	/* Match/descr.scm 375 */
																	obj_t BgL_pairz00_2585;

																	BgL_pairz00_2585 =
																		CDR(((obj_t) BgL_descrz00_31));
																	BgL_arg1534z00_1507 = CAR(BgL_pairz00_2585);
																}
																BgL_arg1533z00_1506 =
																	PROCEDURE_ENTRY(BgL_envz00_33) (BgL_envz00_33,
																	BgL_arg1534z00_1507, BEOA);
															}
															BgL_test2439z00_4280 =
																(BgL_arg1533z00_1506 ==
																BGl_symbol2281z00zz__match_descriptionsz00);
														}
														if (BgL_test2439z00_4280)
															{	/* Match/descr.scm 376 */
																bool_t BgL_test2440z00_4289;

																{	/* Match/descr.scm 376 */
																	obj_t BgL_arg1514z00_1491;

																	{	/* Match/descr.scm 376 */
																		obj_t BgL_arg1515z00_1492;

																		{	/* Match/descr.scm 376 */
																			obj_t BgL_pairz00_2589;

																			BgL_pairz00_2589 =
																				CDR(((obj_t) BgL_patz00_32));
																			BgL_arg1515z00_1492 =
																				CAR(BgL_pairz00_2589);
																		}
																		BgL_arg1514z00_1491 =
																			PROCEDURE_ENTRY(BgL_envz00_33)
																			(BgL_envz00_33, BgL_arg1515z00_1492,
																			BEOA);
																	}
																	BgL_test2440z00_4289 =
																		(BgL_arg1514z00_1491 ==
																		BGl_symbol2281z00zz__match_descriptionsz00);
																}
																if (BgL_test2440z00_4289)
																	{	/* Match/descr.scm 377 */
																		obj_t BgL_sz00_1479;

																		{	/* Match/descr.scm 377 */
																			obj_t BgL_arg1507z00_1484;

																			BgL_arg1507z00_1484 =
																				PROCEDURE_ENTRY
																				(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
																				(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
																				BGl_string2285z00zz__match_descriptionsz00,
																				BEOA);
																			{	/* Match/descr.scm 377 */
																				obj_t BgL_list1508z00_1485;

																				{	/* Match/descr.scm 377 */
																					obj_t BgL_arg1509z00_1486;

																					BgL_arg1509z00_1486 =
																						MAKE_YOUNG_PAIR(BgL_arg1507z00_1484,
																						BNIL);
																					BgL_list1508z00_1485 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol2250z00zz__match_descriptionsz00,
																						BgL_arg1509z00_1486);
																				}
																				BgL_sz00_1479 = BgL_list1508z00_1485;
																			}
																		}
																		{	/* Match/descr.scm 378 */
																			obj_t BgL_arg1500z00_1480;

																			{	/* Match/descr.scm 378 */
																				obj_t BgL_arg1502z00_1481;
																				obj_t BgL_arg1505z00_1482;

																				{	/* Match/descr.scm 378 */
																					obj_t BgL_arg1506z00_1483;

																					{	/* Match/descr.scm 378 */
																						obj_t BgL_pairz00_2594;

																						BgL_pairz00_2594 =
																							CDR(((obj_t) BgL_descrz00_31));
																						BgL_arg1506z00_1483 =
																							CAR(BgL_pairz00_2594);
																					}
																					{	/* Match/descr.scm 124 */
																						obj_t
																							BgL_zc3z04anonymousza31300ze3z87_3455;
																						{
																							int BgL_tmpz00_4307;

																							BgL_tmpz00_4307 =
																								(int) (((long) 3));
																							BgL_zc3z04anonymousza31300ze3z87_3455
																								=
																								MAKE_EL_PROCEDURE
																								(BgL_tmpz00_4307);
																						}
																						PROCEDURE_EL_SET
																							(BgL_zc3z04anonymousza31300ze3z87_3455,
																							(int) (((long) 0)),
																							BgL_envz00_33);
																						PROCEDURE_EL_SET
																							(BgL_zc3z04anonymousza31300ze3z87_3455,
																							(int) (((long) 1)),
																							BgL_sz00_1479);
																						PROCEDURE_EL_SET
																							(BgL_zc3z04anonymousza31300ze3z87_3455,
																							(int) (((long) 2)),
																							BgL_arg1506z00_1483);
																						BgL_arg1502z00_1481 =
																							BgL_zc3z04anonymousza31300ze3z87_3455;
																				}}
																				{	/* Match/descr.scm 379 */
																					obj_t BgL_pairz00_2602;

																					BgL_pairz00_2602 =
																						CDR(((obj_t) BgL_patz00_32));
																					BgL_arg1505z00_1482 =
																						CAR(BgL_pairz00_2602);
																				}
																				{	/* Match/descr.scm 124 */
																					obj_t
																						BgL_zc3z04anonymousza31300ze3z87_3454;
																					BgL_zc3z04anonymousza31300ze3z87_3454
																						=
																						MAKE_FX_PROCEDURE
																						(BGl_z62zc3z04anonymousza31300ze3ze5zz__match_descriptionsz00,
																						(int) (((long) 1)),
																						(int) (((long) 3)));
																					PROCEDURE_SET
																						(BgL_zc3z04anonymousza31300ze3z87_3454,
																						(int) (((long) 0)),
																						BgL_arg1502z00_1481);
																					PROCEDURE_SET
																						(BgL_zc3z04anonymousza31300ze3z87_3454,
																						(int) (((long) 1)), BgL_sz00_1479);
																					PROCEDURE_SET
																						(BgL_zc3z04anonymousza31300ze3z87_3454,
																						(int) (((long) 2)),
																						BgL_arg1505z00_1482);
																					BgL_arg1500z00_1480 =
																						BgL_zc3z04anonymousza31300ze3z87_3454;
																			}}
																			return
																				PROCEDURE_ENTRY(BgL_kz00_34)
																				(BgL_kz00_34, BgL_arg1500z00_1480,
																				BEOA);
																		}
																	}
																else
																	{	/* Match/descr.scm 381 */
																		obj_t BgL_arg1510z00_1487;

																		{	/* Match/descr.scm 381 */
																			obj_t BgL_arg1511z00_1488;
																			obj_t BgL_arg1512z00_1489;

																			{	/* Match/descr.scm 381 */
																				obj_t BgL_pairz00_2610;

																				BgL_pairz00_2610 =
																					CDR(((obj_t) BgL_descrz00_31));
																				BgL_arg1511z00_1488 =
																					CAR(BgL_pairz00_2610);
																			}
																			{	/* Match/descr.scm 381 */
																				obj_t BgL_arg1513z00_1490;

																				{	/* Match/descr.scm 381 */
																					obj_t BgL_pairz00_2614;

																					BgL_pairz00_2614 =
																						CDR(((obj_t) BgL_patz00_32));
																					BgL_arg1513z00_1490 =
																						CAR(BgL_pairz00_2614);
																				}
																				BgL_arg1512z00_1489 =
																					PROCEDURE_ENTRY(BgL_envz00_33)
																					(BgL_envz00_33, BgL_arg1513z00_1490,
																					BEOA);
																			}
																			{	/* Match/descr.scm 124 */
																				obj_t
																					BgL_zc3z04anonymousza31300ze3z87_3456;
																				BgL_zc3z04anonymousza31300ze3z87_3456 =
																					MAKE_FX_PROCEDURE
																					(BGl_z62zc3z04anonymousza31300ze32227ze5zz__match_descriptionsz00,
																					(int) (((long) 1)),
																					(int) (((long) 3)));
																				PROCEDURE_SET
																					(BgL_zc3z04anonymousza31300ze3z87_3456,
																					(int) (((long) 0)), BgL_envz00_33);
																				PROCEDURE_SET
																					(BgL_zc3z04anonymousza31300ze3z87_3456,
																					(int) (((long) 1)),
																					BgL_arg1512z00_1489);
																				PROCEDURE_SET
																					(BgL_zc3z04anonymousza31300ze3z87_3456,
																					(int) (((long) 2)),
																					BgL_arg1511z00_1488);
																				BgL_arg1510z00_1487 =
																					BgL_zc3z04anonymousza31300ze3z87_3456;
																		}}
																		return
																			PROCEDURE_ENTRY(BgL_kz00_34) (BgL_kz00_34,
																			BgL_arg1510z00_1487, BEOA);
																	}
															}
														else
															{	/* Match/descr.scm 382 */
																bool_t BgL_test2441z00_4355;

																{	/* Match/descr.scm 382 */
																	obj_t BgL_arg1531z00_1504;

																	{	/* Match/descr.scm 382 */
																		obj_t BgL_arg1532z00_1505;

																		{	/* Match/descr.scm 382 */
																			obj_t BgL_pairz00_2622;

																			BgL_pairz00_2622 =
																				CDR(((obj_t) BgL_patz00_32));
																			BgL_arg1532z00_1505 =
																				CAR(BgL_pairz00_2622);
																		}
																		BgL_arg1531z00_1504 =
																			PROCEDURE_ENTRY(BgL_envz00_33)
																			(BgL_envz00_33, BgL_arg1532z00_1505,
																			BEOA);
																	}
																	BgL_test2441z00_4355 =
																		(BgL_arg1531z00_1504 ==
																		BGl_symbol2281z00zz__match_descriptionsz00);
																}
																if (BgL_test2441z00_4355)
																	{	/* Match/descr.scm 383 */
																		obj_t BgL_arg1520z00_1496;

																		{	/* Match/descr.scm 383 */
																			obj_t BgL_arg1521z00_1497;
																			obj_t BgL_arg1523z00_1498;

																			{	/* Match/descr.scm 383 */
																				obj_t BgL_pairz00_2626;

																				BgL_pairz00_2626 =
																					CDR(((obj_t) BgL_patz00_32));
																				BgL_arg1521z00_1497 =
																					CAR(BgL_pairz00_2626);
																			}
																			{	/* Match/descr.scm 383 */
																				obj_t BgL_arg1524z00_1499;

																				{	/* Match/descr.scm 383 */
																					obj_t BgL_pairz00_2630;

																					BgL_pairz00_2630 =
																						CDR(((obj_t) BgL_descrz00_31));
																					BgL_arg1524z00_1499 =
																						CAR(BgL_pairz00_2630);
																				}
																				BgL_arg1523z00_1498 =
																					PROCEDURE_ENTRY(BgL_envz00_33)
																					(BgL_envz00_33, BgL_arg1524z00_1499,
																					BEOA);
																			}
																			{	/* Match/descr.scm 124 */
																				obj_t
																					BgL_zc3z04anonymousza31300ze3z87_3457;
																				BgL_zc3z04anonymousza31300ze3z87_3457 =
																					MAKE_FX_PROCEDURE
																					(BGl_z62zc3z04anonymousza31300ze32228ze5zz__match_descriptionsz00,
																					(int) (((long) 1)),
																					(int) (((long) 3)));
																				PROCEDURE_SET
																					(BgL_zc3z04anonymousza31300ze3z87_3457,
																					(int) (((long) 0)), BgL_envz00_33);
																				PROCEDURE_SET
																					(BgL_zc3z04anonymousza31300ze3z87_3457,
																					(int) (((long) 1)),
																					BgL_arg1523z00_1498);
																				PROCEDURE_SET
																					(BgL_zc3z04anonymousza31300ze3z87_3457,
																					(int) (((long) 2)),
																					BgL_arg1521z00_1497);
																				BgL_arg1520z00_1496 =
																					BgL_zc3z04anonymousza31300ze3z87_3457;
																		}}
																		return
																			PROCEDURE_ENTRY(BgL_kz00_34) (BgL_kz00_34,
																			BgL_arg1520z00_1496, BEOA);
																	}
																else
																	{	/* Match/descr.scm 384 */
																		obj_t BgL_arg1525z00_1500;
																		obj_t BgL_arg1526z00_1501;

																		{	/* Match/descr.scm 384 */
																			obj_t BgL_arg1528z00_1502;

																			{	/* Match/descr.scm 384 */
																				obj_t BgL_pairz00_2638;

																				BgL_pairz00_2638 =
																					CDR(((obj_t) BgL_descrz00_31));
																				BgL_arg1528z00_1502 =
																					CAR(BgL_pairz00_2638);
																			}
																			BgL_arg1525z00_1500 =
																				PROCEDURE_ENTRY(BgL_envz00_33)
																				(BgL_envz00_33, BgL_arg1528z00_1502,
																				BEOA);
																		}
																		{	/* Match/descr.scm 384 */
																			obj_t BgL_arg1530z00_1503;

																			{	/* Match/descr.scm 384 */
																				obj_t BgL_pairz00_2642;

																				BgL_pairz00_2642 =
																					CDR(((obj_t) BgL_patz00_32));
																				BgL_arg1530z00_1503 =
																					CAR(BgL_pairz00_2642);
																			}
																			BgL_arg1526z00_1501 =
																				PROCEDURE_ENTRY(BgL_envz00_33)
																				(BgL_envz00_33, BgL_arg1530z00_1503,
																				BEOA);
																		}
																		{
																			obj_t BgL_patz00_4402;
																			obj_t BgL_descrz00_4401;

																			BgL_descrz00_4401 = BgL_arg1525z00_1500;
																			BgL_patz00_4402 = BgL_arg1526z00_1501;
																			BgL_patz00_32 = BgL_patz00_4402;
																			BgL_descrz00_31 = BgL_descrz00_4401;
																			goto
																				BGl_comparez00zz__match_descriptionsz00;
																		}
																	}
															}
													}
												else
													{	/* Match/descr.scm 374 */
														if (
															(CAR(
																	((obj_t) BgL_patz00_32)) ==
																BGl_symbol2250z00zz__match_descriptionsz00))
															{	/* Match/descr.scm 387 */
																bool_t BgL_test2443z00_4407;

																{	/* Match/descr.scm 387 */
																	obj_t BgL_arg1545z00_1516;

																	{	/* Match/descr.scm 387 */
																		obj_t BgL_arg1546z00_1517;

																		{	/* Match/descr.scm 387 */
																			obj_t BgL_pairz00_2648;

																			BgL_pairz00_2648 =
																				CDR(((obj_t) BgL_patz00_32));
																			BgL_arg1546z00_1517 =
																				CAR(BgL_pairz00_2648);
																		}
																		BgL_arg1545z00_1516 =
																			PROCEDURE_ENTRY(BgL_envz00_33)
																			(BgL_envz00_33, BgL_arg1546z00_1517,
																			BEOA);
																	}
																	BgL_test2443z00_4407 =
																		(BgL_arg1545z00_1516 ==
																		BGl_symbol2281z00zz__match_descriptionsz00);
																}
																if (BgL_test2443z00_4407)
																	{	/* Match/descr.scm 388 */
																		obj_t BgL_arg1540z00_1512;

																		{	/* Match/descr.scm 388 */
																			obj_t BgL_arg1541z00_1513;

																			{	/* Match/descr.scm 388 */
																				obj_t BgL_pairz00_2652;

																				BgL_pairz00_2652 =
																					CDR(((obj_t) BgL_patz00_32));
																				BgL_arg1541z00_1513 =
																					CAR(BgL_pairz00_2652);
																			}
																			{	/* Match/descr.scm 124 */
																				obj_t
																					BgL_zc3z04anonymousza31300ze3z87_3458;
																				BgL_zc3z04anonymousza31300ze3z87_3458 =
																					MAKE_FX_PROCEDURE
																					(BGl_z62zc3z04anonymousza31300ze32229ze5zz__match_descriptionsz00,
																					(int) (((long) 1)),
																					(int) (((long) 3)));
																				PROCEDURE_SET
																					(BgL_zc3z04anonymousza31300ze3z87_3458,
																					(int) (((long) 0)), BgL_envz00_33);
																				PROCEDURE_SET
																					(BgL_zc3z04anonymousza31300ze3z87_3458,
																					(int) (((long) 1)), BgL_descrz00_31);
																				PROCEDURE_SET
																					(BgL_zc3z04anonymousza31300ze3z87_3458,
																					(int) (((long) 2)),
																					BgL_arg1541z00_1513);
																				BgL_arg1540z00_1512 =
																					BgL_zc3z04anonymousza31300ze3z87_3458;
																		}}
																		return
																			PROCEDURE_ENTRY(BgL_kz00_34) (BgL_kz00_34,
																			BgL_arg1540z00_1512, BEOA);
																	}
																else
																	{	/* Match/descr.scm 389 */
																		obj_t BgL_arg1542z00_1514;

																		{	/* Match/descr.scm 389 */
																			obj_t BgL_arg1544z00_1515;

																			{	/* Match/descr.scm 389 */
																				obj_t BgL_pairz00_2660;

																				BgL_pairz00_2660 =
																					CDR(((obj_t) BgL_patz00_32));
																				BgL_arg1544z00_1515 =
																					CAR(BgL_pairz00_2660);
																			}
																			BgL_arg1542z00_1514 =
																				PROCEDURE_ENTRY(BgL_envz00_33)
																				(BgL_envz00_33, BgL_arg1544z00_1515,
																				BEOA);
																		}
																		{
																			obj_t BgL_patz00_4439;

																			BgL_patz00_4439 = BgL_arg1542z00_1514;
																			BgL_patz00_32 = BgL_patz00_4439;
																			goto
																				BGl_comparez00zz__match_descriptionsz00;
																		}
																	}
															}
														else
															{	/* Match/descr.scm 386 */
																if (
																	(CAR(
																			((obj_t) BgL_descrz00_31)) ==
																		BGl_symbol2250z00zz__match_descriptionsz00))
																	{	/* Match/descr.scm 392 */
																		bool_t BgL_test2445z00_4444;

																		{	/* Match/descr.scm 392 */
																			obj_t BgL_arg1560z00_1526;

																			{	/* Match/descr.scm 392 */
																				obj_t BgL_arg1561z00_1527;

																				{	/* Match/descr.scm 392 */
																					obj_t BgL_pairz00_2666;

																					BgL_pairz00_2666 =
																						CDR(((obj_t) BgL_descrz00_31));
																					BgL_arg1561z00_1527 =
																						CAR(BgL_pairz00_2666);
																				}
																				BgL_arg1560z00_1526 =
																					PROCEDURE_ENTRY(BgL_envz00_33)
																					(BgL_envz00_33, BgL_arg1561z00_1527,
																					BEOA);
																			}
																			BgL_test2445z00_4444 =
																				(BgL_arg1560z00_1526 ==
																				BGl_symbol2281z00zz__match_descriptionsz00);
																		}
																		if (BgL_test2445z00_4444)
																			{	/* Match/descr.scm 393 */
																				obj_t BgL_arg1554z00_1522;

																				{	/* Match/descr.scm 393 */
																					obj_t BgL_arg1556z00_1523;

																					{	/* Match/descr.scm 393 */
																						obj_t BgL_pairz00_2670;

																						BgL_pairz00_2670 =
																							CDR(((obj_t) BgL_descrz00_31));
																						BgL_arg1556z00_1523 =
																							CAR(BgL_pairz00_2670);
																					}
																					{	/* Match/descr.scm 124 */
																						obj_t
																							BgL_zc3z04anonymousza31300ze3z87_3459;
																						BgL_zc3z04anonymousza31300ze3z87_3459
																							=
																							MAKE_FX_PROCEDURE
																							(BGl_z62zc3z04anonymousza31300ze32230ze5zz__match_descriptionsz00,
																							(int) (((long) 1)),
																							(int) (((long) 3)));
																						PROCEDURE_SET
																							(BgL_zc3z04anonymousza31300ze3z87_3459,
																							(int) (((long) 0)),
																							BgL_envz00_33);
																						PROCEDURE_SET
																							(BgL_zc3z04anonymousza31300ze3z87_3459,
																							(int) (((long) 1)),
																							BgL_patz00_32);
																						PROCEDURE_SET
																							(BgL_zc3z04anonymousza31300ze3z87_3459,
																							(int) (((long) 2)),
																							BgL_arg1556z00_1523);
																						BgL_arg1554z00_1522 =
																							BgL_zc3z04anonymousza31300ze3z87_3459;
																				}}
																				return
																					PROCEDURE_ENTRY(BgL_kz00_34)
																					(BgL_kz00_34, BgL_arg1554z00_1522,
																					BEOA);
																			}
																		else
																			{	/* Match/descr.scm 394 */
																				obj_t BgL_arg1557z00_1524;

																				{	/* Match/descr.scm 394 */
																					obj_t BgL_arg1558z00_1525;

																					{	/* Match/descr.scm 394 */
																						obj_t BgL_pairz00_2678;

																						BgL_pairz00_2678 =
																							CDR(((obj_t) BgL_descrz00_31));
																						BgL_arg1558z00_1525 =
																							CAR(BgL_pairz00_2678);
																					}
																					BgL_arg1557z00_1524 =
																						PROCEDURE_ENTRY(BgL_envz00_33)
																						(BgL_envz00_33, BgL_arg1558z00_1525,
																						BEOA);
																				}
																				{
																					obj_t BgL_patz00_4476;

																					BgL_patz00_4476 = BgL_arg1557z00_1524;
																					BgL_patz00_32 = BgL_patz00_4476;
																					goto
																						BGl_comparez00zz__match_descriptionsz00;
																				}
																			}
																	}
																else
																	{	/* Match/descr.scm 391 */
																		if (
																			(CAR(
																					((obj_t) BgL_patz00_32)) ==
																				BGl_symbol2266z00zz__match_descriptionsz00))
																			{	/* Match/descr.scm 396 */
																				bool_t BgL_test2447z00_4481;

																				{	/* Match/descr.scm 396 */
																					obj_t BgL_arg1565z00_1531;

																					{	/* Match/descr.scm 396 */
																						obj_t BgL_pairz00_2684;

																						BgL_pairz00_2684 =
																							CDR(((obj_t) BgL_patz00_32));
																						BgL_arg1565z00_1531 =
																							CAR(BgL_pairz00_2684);
																					}
																					BgL_test2447z00_4481 =
																						CBOOL
																						(BGl_morezd2precisezf3z21zz__match_descriptionsz00
																						(BgL_arg1565z00_1531,
																							BgL_descrz00_31));
																				}
																				if (BgL_test2447z00_4481)
																					{	/* Match/descr.scm 396 */
																						return
																							PROCEDURE_ENTRY(BgL_za7za7_35)
																							(BgL_za7za7_35, BgL_envz00_33,
																							BEOA);
																					}
																				else
																					{	/* Match/descr.scm 396 */
																						return
																							PROCEDURE_ENTRY(BgL_kz00_34)
																							(BgL_kz00_34, BgL_envz00_33,
																							BEOA);
																					}
																			}
																		else
																			{	/* Match/descr.scm 396 */
																				if (
																					(CAR(
																							((obj_t) BgL_patz00_32)) ==
																						BGl_symbol2252z00zz__match_descriptionsz00))
																					{	/* Match/descr.scm 401 */
																						bool_t BgL_test2449z00_4499;

																						if (
																							(CAR(
																									((obj_t) BgL_descrz00_31)) ==
																								BGl_symbol2258z00zz__match_descriptionsz00))
																							{	/* Match/descr.scm 502 */
																								BgL_test2449z00_4499 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Match/descr.scm 502 */
																								BgL_test2449z00_4499 =
																									(CAR(
																										((obj_t) BgL_descrz00_31))
																									==
																									BGl_symbol2260z00zz__match_descriptionsz00);
																							}
																						if (BgL_test2449z00_4499)
																							{	/* Match/descr.scm 401 */
																								return BTRUE;
																							}
																						else
																							{	/* Match/descr.scm 401 */
																								if (
																									(CAR(
																											((obj_t) BgL_descrz00_31))
																										==
																										BGl_symbol2286z00zz__match_descriptionsz00))
																									{	/* Match/descr.scm 403 */
																										return
																											BGl_matchz00zz__match_descriptionsz00
																											(BgL_patz00_32,
																											BgL_descrz00_31,
																											BgL_envz00_33,
																											BgL_kz00_34,
																											BgL_za7za7_35);
																									}
																								else
																									{	/* Match/descr.scm 403 */
																										return BFALSE;
																									}
																							}
																					}
																				else
																					{	/* Match/descr.scm 400 */
																						return
																							PROCEDURE_ENTRY(BgL_kz00_34)
																							(BgL_kz00_34, BgL_envz00_33,
																							BEOA);
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



/* &<@anonymous:1478> */
	obj_t BGl_z62zc3z04anonymousza31478ze3ze5zz__match_descriptionsz00(obj_t
		BgL_envz00_3460, obj_t BgL_envz00_3465)
	{
		{	/* Match/descr.scm 357 */
			{	/* Match/descr.scm 357 */
				obj_t BgL_patz00_3461;
				obj_t BgL_descrz00_3462;
				obj_t BgL_kz00_3463;
				obj_t BgL_za7za7_3464;

				BgL_patz00_3461 = PROCEDURE_REF(BgL_envz00_3460, (int) (((long) 0)));
				BgL_descrz00_3462 = PROCEDURE_REF(BgL_envz00_3460, (int) (((long) 1)));
				BgL_kz00_3463 = PROCEDURE_REF(BgL_envz00_3460, (int) (((long) 2)));
				BgL_za7za7_3464 = PROCEDURE_REF(BgL_envz00_3460, (int) (((long) 3)));
				{	/* Match/descr.scm 357 */
					obj_t BgL_arg1479z00_3631;

					{	/* Match/descr.scm 357 */
						obj_t BgL_pairz00_3632;

						{	/* Match/descr.scm 357 */
							obj_t BgL_pairz00_3633;

							BgL_pairz00_3633 = CDR(((obj_t) BgL_patz00_3461));
							BgL_pairz00_3632 = CDR(BgL_pairz00_3633);
						}
						BgL_arg1479z00_3631 = CAR(BgL_pairz00_3632);
					}
					return
						BGl_comparez00zz__match_descriptionsz00(BgL_descrz00_3462,
						BgL_arg1479z00_3631, BgL_envz00_3465, BgL_kz00_3463,
						BgL_za7za7_3464);
				}
			}
		}

	}



/* &<@anonymous:1486> */
	obj_t BGl_z62zc3z04anonymousza31486ze3ze5zz__match_descriptionsz00(obj_t
		BgL_envz00_3466, obj_t BgL_envz00_3471)
	{
		{	/* Match/descr.scm 363 */
			{	/* Match/descr.scm 364 */
				obj_t BgL_descrz00_3467;
				obj_t BgL_patz00_3468;
				obj_t BgL_kz00_3469;
				obj_t BgL_za7za7_3470;

				BgL_descrz00_3467 = PROCEDURE_REF(BgL_envz00_3466, (int) (((long) 0)));
				BgL_patz00_3468 = PROCEDURE_REF(BgL_envz00_3466, (int) (((long) 1)));
				BgL_kz00_3469 = PROCEDURE_REF(BgL_envz00_3466, (int) (((long) 2)));
				BgL_za7za7_3470 = PROCEDURE_REF(BgL_envz00_3466, (int) (((long) 3)));
				{	/* Match/descr.scm 364 */
					obj_t BgL_arg1487z00_3634;
					obj_t BgL_arg1489z00_3635;

					if (
						(CAR(
								((obj_t) BgL_descrz00_3467)) ==
							BGl_symbol2241z00zz__match_descriptionsz00))
						{	/* Match/descr.scm 184 */
							obj_t BgL_pairz00_3636;

							{	/* Match/descr.scm 184 */
								obj_t BgL_pairz00_3637;

								BgL_pairz00_3637 = CDR(((obj_t) BgL_descrz00_3467));
								BgL_pairz00_3636 = CDR(BgL_pairz00_3637);
							}
							BgL_arg1487z00_3634 = CAR(BgL_pairz00_3636);
						}
					else
						{	/* Match/descr.scm 183 */
							BgL_arg1487z00_3634 = BGl_list2268z00zz__match_descriptionsz00;
						}
					{	/* Match/descr.scm 365 */
						obj_t BgL_pairz00_3638;

						{	/* Match/descr.scm 365 */
							obj_t BgL_pairz00_3639;

							BgL_pairz00_3639 = CDR(((obj_t) BgL_patz00_3468));
							BgL_pairz00_3638 = CDR(BgL_pairz00_3639);
						}
						BgL_arg1489z00_3635 = CAR(BgL_pairz00_3638);
					}
					return
						BGl_comparez00zz__match_descriptionsz00(BgL_arg1487z00_3634,
						BgL_arg1489z00_3635, BgL_envz00_3471, BgL_kz00_3469,
						BgL_za7za7_3470);
				}
			}
		}

	}



/* &<@anonymous:1300> */
	obj_t BGl_z62zc3z04anonymousza31300ze3ze5zz__match_descriptionsz00(obj_t
		BgL_envz00_3472, obj_t BgL_xz00_3476)
	{
		{	/* Match/descr.scm 124 */
			{	/* Match/descr.scm 124 */
				obj_t BgL_arg1502z00_3473;
				obj_t BgL_sz00_3474;
				obj_t BgL_arg1505z00_3475;

				BgL_arg1502z00_3473 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3472, (int) (((long) 0))));
				BgL_sz00_3474 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3472, (int) (((long) 1))));
				BgL_arg1505z00_3475 =
					PROCEDURE_REF(BgL_envz00_3472, (int) (((long) 2)));
				if ((BgL_xz00_3476 == BgL_arg1505z00_3475))
					{	/* Match/descr.scm 124 */
						return BgL_sz00_3474;
					}
				else
					{	/* Match/descr.scm 124 */
						return
							BGl_z62zc3z04anonymousza31300ze32226ze5zz__match_descriptionsz00
							(BgL_arg1502z00_3473, BgL_xz00_3476);
					}
			}
		}

	}



/* &<@anonymous:1300>2226 */
	obj_t BGl_z62zc3z04anonymousza31300ze32226ze5zz__match_descriptionsz00(obj_t
		BgL_envz00_3477, obj_t BgL_xz00_3481)
	{
		{	/* Match/descr.scm 124 */
			{	/* Match/descr.scm 124 */
				obj_t BgL_envz00_3478;
				obj_t BgL_sz00_3479;
				obj_t BgL_arg1506z00_3480;

				BgL_envz00_3478 = PROCEDURE_EL_REF(BgL_envz00_3477, (int) (((long) 0)));
				BgL_sz00_3479 =
					((obj_t) PROCEDURE_EL_REF(BgL_envz00_3477, (int) (((long) 1))));
				BgL_arg1506z00_3480 =
					PROCEDURE_EL_REF(BgL_envz00_3477, (int) (((long) 2)));
				if ((BgL_xz00_3481 == BgL_arg1506z00_3480))
					{	/* Match/descr.scm 124 */
						return BgL_sz00_3479;
					}
				else
					{	/* Match/descr.scm 124 */
						return
							PROCEDURE_ENTRY(BgL_envz00_3478) (BgL_envz00_3478, BgL_xz00_3481,
							BEOA);
					}
			}
		}

	}



/* &<@anonymous:1300>2227 */
	obj_t BGl_z62zc3z04anonymousza31300ze32227ze5zz__match_descriptionsz00(obj_t
		BgL_envz00_3482, obj_t BgL_xz00_3486)
	{
		{	/* Match/descr.scm 124 */
			{	/* Match/descr.scm 124 */
				obj_t BgL_envz00_3483;
				obj_t BgL_arg1512z00_3484;
				obj_t BgL_arg1511z00_3485;

				BgL_envz00_3483 = PROCEDURE_REF(BgL_envz00_3482, (int) (((long) 0)));
				BgL_arg1512z00_3484 =
					PROCEDURE_REF(BgL_envz00_3482, (int) (((long) 1)));
				BgL_arg1511z00_3485 =
					PROCEDURE_REF(BgL_envz00_3482, (int) (((long) 2)));
				if ((BgL_xz00_3486 == BgL_arg1511z00_3485))
					{	/* Match/descr.scm 124 */
						return BgL_arg1512z00_3484;
					}
				else
					{	/* Match/descr.scm 124 */
						return
							PROCEDURE_ENTRY(BgL_envz00_3483) (BgL_envz00_3483, BgL_xz00_3486,
							BEOA);
					}
			}
		}

	}



/* &<@anonymous:1300>2228 */
	obj_t BGl_z62zc3z04anonymousza31300ze32228ze5zz__match_descriptionsz00(obj_t
		BgL_envz00_3487, obj_t BgL_xz00_3491)
	{
		{	/* Match/descr.scm 124 */
			{	/* Match/descr.scm 124 */
				obj_t BgL_envz00_3488;
				obj_t BgL_arg1523z00_3489;
				obj_t BgL_arg1521z00_3490;

				BgL_envz00_3488 = PROCEDURE_REF(BgL_envz00_3487, (int) (((long) 0)));
				BgL_arg1523z00_3489 =
					PROCEDURE_REF(BgL_envz00_3487, (int) (((long) 1)));
				BgL_arg1521z00_3490 =
					PROCEDURE_REF(BgL_envz00_3487, (int) (((long) 2)));
				if ((BgL_xz00_3491 == BgL_arg1521z00_3490))
					{	/* Match/descr.scm 124 */
						return BgL_arg1523z00_3489;
					}
				else
					{	/* Match/descr.scm 124 */
						return
							PROCEDURE_ENTRY(BgL_envz00_3488) (BgL_envz00_3488, BgL_xz00_3491,
							BEOA);
					}
			}
		}

	}



/* &<@anonymous:1300>2229 */
	obj_t BGl_z62zc3z04anonymousza31300ze32229ze5zz__match_descriptionsz00(obj_t
		BgL_envz00_3492, obj_t BgL_xz00_3496)
	{
		{	/* Match/descr.scm 124 */
			{	/* Match/descr.scm 124 */
				obj_t BgL_envz00_3493;
				obj_t BgL_descrz00_3494;
				obj_t BgL_arg1541z00_3495;

				BgL_envz00_3493 = PROCEDURE_REF(BgL_envz00_3492, (int) (((long) 0)));
				BgL_descrz00_3494 = PROCEDURE_REF(BgL_envz00_3492, (int) (((long) 1)));
				BgL_arg1541z00_3495 =
					PROCEDURE_REF(BgL_envz00_3492, (int) (((long) 2)));
				if ((BgL_xz00_3496 == BgL_arg1541z00_3495))
					{	/* Match/descr.scm 124 */
						return BgL_descrz00_3494;
					}
				else
					{	/* Match/descr.scm 124 */
						return
							PROCEDURE_ENTRY(BgL_envz00_3493) (BgL_envz00_3493, BgL_xz00_3496,
							BEOA);
					}
			}
		}

	}



/* &<@anonymous:1300>2230 */
	obj_t BGl_z62zc3z04anonymousza31300ze32230ze5zz__match_descriptionsz00(obj_t
		BgL_envz00_3497, obj_t BgL_xz00_3501)
	{
		{	/* Match/descr.scm 124 */
			{	/* Match/descr.scm 124 */
				obj_t BgL_envz00_3498;
				obj_t BgL_patz00_3499;
				obj_t BgL_arg1556z00_3500;

				BgL_envz00_3498 = PROCEDURE_REF(BgL_envz00_3497, (int) (((long) 0)));
				BgL_patz00_3499 = PROCEDURE_REF(BgL_envz00_3497, (int) (((long) 1)));
				BgL_arg1556z00_3500 =
					PROCEDURE_REF(BgL_envz00_3497, (int) (((long) 2)));
				if ((BgL_xz00_3501 == BgL_arg1556z00_3500))
					{	/* Match/descr.scm 124 */
						return BgL_patz00_3499;
					}
				else
					{	/* Match/descr.scm 124 */
						return
							PROCEDURE_ENTRY(BgL_envz00_3498) (BgL_envz00_3498, BgL_xz00_3501,
							BEOA);
					}
			}
		}

	}



/* may-be-a-cons */
	bool_t BGl_mayzd2bezd2azd2conszd2zz__match_descriptionsz00(obj_t
		BgL_descrz00_36)
	{
		{	/* Match/descr.scm 411 */
		BGl_mayzd2bezd2azd2conszd2zz__match_descriptionsz00:
			if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_descrz00_36,
					BGl_list2288z00zz__match_descriptionsz00))
				{	/* Match/descr.scm 412 */
					return ((bool_t) 0);
				}
			else
				{	/* Match/descr.scm 412 */
					if (
						(CAR(
								((obj_t) BgL_descrz00_36)) ==
							BGl_symbol2238z00zz__match_descriptionsz00))
						{	/* Match/descr.scm 415 */
							bool_t BgL_test2461z00_4631;

							{	/* Match/descr.scm 415 */
								obj_t BgL_arg1574z00_1548;

								{	/* Match/descr.scm 415 */
									obj_t BgL_pairz00_2699;

									BgL_pairz00_2699 = CDR(((obj_t) BgL_descrz00_36));
									BgL_arg1574z00_1548 = CAR(BgL_pairz00_2699);
								}
								BgL_test2461z00_4631 =
									BGl_mayzd2bezd2azd2conszd2zz__match_descriptionsz00
									(BgL_arg1574z00_1548);
							}
							if (BgL_test2461z00_4631)
								{	/* Match/descr.scm 416 */
									obj_t BgL_arg1573z00_1547;

									{	/* Match/descr.scm 416 */
										obj_t BgL_pairz00_2705;

										{	/* Match/descr.scm 416 */
											obj_t BgL_pairz00_2704;

											BgL_pairz00_2704 = CDR(((obj_t) BgL_descrz00_36));
											BgL_pairz00_2705 = CDR(BgL_pairz00_2704);
										}
										BgL_arg1573z00_1547 = CAR(BgL_pairz00_2705);
									}
									{
										obj_t BgL_descrz00_4640;

										BgL_descrz00_4640 = BgL_arg1573z00_1547;
										BgL_descrz00_36 = BgL_descrz00_4640;
										goto BGl_mayzd2bezd2azd2conszd2zz__match_descriptionsz00;
									}
								}
							else
								{	/* Match/descr.scm 415 */
									return ((bool_t) 0);
								}
						}
					else
						{	/* Match/descr.scm 414 */
							return ((bool_t) 1);
						}
				}
		}

	}



/* match */
	obj_t BGl_matchz00zz__match_descriptionsz00(obj_t BgL_dz00_37,
		obj_t BgL_ez00_38, obj_t BgL_envz00_39, obj_t BgL_kz00_40,
		obj_t BgL_za7za7_41)
	{
		{	/* Match/descr.scm 423 */
		BGl_matchz00zz__match_descriptionsz00:
			{	/* Match/descr.scm 424 */
				obj_t BgL_casezd2valuezd2_1549;

				BgL_casezd2valuezd2_1549 = CAR(((obj_t) BgL_dz00_37));
				if (
					(BgL_casezd2valuezd2_1549 ==
						BGl_symbol2258z00zz__match_descriptionsz00))
					{	/* Match/descr.scm 424 */
						return
							PROCEDURE_ENTRY(BgL_kz00_40) (BgL_kz00_40, BgL_envz00_39, BEOA);
					}
				else
					{	/* Match/descr.scm 424 */
						if (
							(BgL_casezd2valuezd2_1549 ==
								BGl_symbol2271z00zz__match_descriptionsz00))
							{	/* Match/descr.scm 427 */
								bool_t BgL_test2464z00_4651;

								{	/* Match/descr.scm 427 */
									bool_t BgL_test2465z00_4652;

									{	/* Match/descr.scm 427 */
										obj_t BgL_tmpz00_4653;

										{	/* Match/descr.scm 427 */
											obj_t BgL_pairz00_2714;

											BgL_pairz00_2714 = CDR(((obj_t) BgL_dz00_37));
											BgL_tmpz00_4653 = CAR(BgL_pairz00_2714);
										}
										BgL_test2465z00_4652 = (BgL_ez00_38 == BgL_tmpz00_4653);
									}
									if (BgL_test2465z00_4652)
										{	/* Match/descr.scm 427 */
											BgL_test2464z00_4651 = ((bool_t) 1);
										}
									else
										{	/* Match/descr.scm 427 */
											if (STRINGP(BgL_ez00_38))
												{	/* Match/descr.scm 427 */
													obj_t BgL_arg1582z00_1560;

													{	/* Match/descr.scm 427 */
														obj_t BgL_pairz00_2719;

														BgL_pairz00_2719 = CDR(((obj_t) BgL_dz00_37));
														BgL_arg1582z00_1560 = CAR(BgL_pairz00_2719);
													}
													{	/* Match/descr.scm 427 */
														bool_t BgL_res2141z00_2735;

														{	/* Match/descr.scm 427 */
															long BgL_l1z00_2722;

															BgL_l1z00_2722 = STRING_LENGTH(BgL_ez00_38);
															if (
																(BgL_l1z00_2722 ==
																	STRING_LENGTH(((obj_t) BgL_arg1582z00_1560))))
																{	/* Match/descr.scm 427 */
																	int BgL_arg1927z00_2725;

																	{	/* Match/descr.scm 427 */
																		char *BgL_auxz00_4670;
																		char *BgL_tmpz00_4668;

																		BgL_auxz00_4670 =
																			BSTRING_TO_STRING(
																			((obj_t) BgL_arg1582z00_1560));
																		BgL_tmpz00_4668 =
																			BSTRING_TO_STRING(BgL_ez00_38);
																		BgL_arg1927z00_2725 =
																			memcmp(BgL_tmpz00_4668, BgL_auxz00_4670,
																			BgL_l1z00_2722);
																	}
																	BgL_res2141z00_2735 =
																		(
																		(long) (BgL_arg1927z00_2725) == ((long) 0));
																}
															else
																{	/* Match/descr.scm 427 */
																	BgL_res2141z00_2735 = ((bool_t) 0);
																}
														}
														BgL_test2464z00_4651 = BgL_res2141z00_2735;
													}
												}
											else
												{	/* Match/descr.scm 427 */
													BgL_test2464z00_4651 = ((bool_t) 0);
												}
										}
								}
								if (BgL_test2464z00_4651)
									{	/* Match/descr.scm 427 */
										return
											PROCEDURE_ENTRY(BgL_kz00_40) (BgL_kz00_40, BgL_envz00_39,
											BEOA);
									}
								else
									{	/* Match/descr.scm 427 */
										return
											PROCEDURE_ENTRY(BgL_za7za7_41) (BgL_za7za7_41,
											BgL_envz00_39, BEOA);
									}
							}
						else
							{	/* Match/descr.scm 424 */
								if (
									(BgL_casezd2valuezd2_1549 ==
										BGl_symbol2238z00zz__match_descriptionsz00))
									{	/* Match/descr.scm 430 */
										obj_t BgL_arg1587z00_1563;

										{	/* Match/descr.scm 430 */
											obj_t BgL_pairz00_2741;

											BgL_pairz00_2741 = CDR(((obj_t) BgL_dz00_37));
											BgL_arg1587z00_1563 = CAR(BgL_pairz00_2741);
										}
										{	/* Match/descr.scm 432 */
											obj_t BgL_zc3z04anonymousza31589ze3z87_3502;

											BgL_zc3z04anonymousza31589ze3z87_3502 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31589ze3ze5zz__match_descriptionsz00,
												(int) (((long) 1)), (int) (((long) 4)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31589ze3z87_3502,
												(int) (((long) 0)), BgL_dz00_37);
											PROCEDURE_SET(BgL_zc3z04anonymousza31589ze3z87_3502,
												(int) (((long) 1)), BgL_ez00_38);
											PROCEDURE_SET(BgL_zc3z04anonymousza31589ze3z87_3502,
												(int) (((long) 2)), BgL_kz00_40);
											PROCEDURE_SET(BgL_zc3z04anonymousza31589ze3z87_3502,
												(int) (((long) 3)), BgL_za7za7_41);
											{
												obj_t BgL_kz00_4701;
												obj_t BgL_dz00_4700;

												BgL_dz00_4700 = BgL_arg1587z00_1563;
												BgL_kz00_4701 = BgL_zc3z04anonymousza31589ze3z87_3502;
												BgL_kz00_40 = BgL_kz00_4701;
												BgL_dz00_37 = BgL_dz00_4700;
												goto BGl_matchz00zz__match_descriptionsz00;
											}
										}
									}
								else
									{	/* Match/descr.scm 424 */
										if (
											(BgL_casezd2valuezd2_1549 ==
												BGl_symbol2241z00zz__match_descriptionsz00))
											{	/* Match/descr.scm 424 */
												if (PAIRP(BgL_ez00_38))
													{	/* Match/descr.scm 436 */
														obj_t BgL_arg1596z00_1571;
														obj_t BgL_arg1597z00_1572;

														{	/* Match/descr.scm 436 */
															obj_t BgL_pairz00_2755;

															BgL_pairz00_2755 = CDR(((obj_t) BgL_dz00_37));
															BgL_arg1596z00_1571 = CAR(BgL_pairz00_2755);
														}
														BgL_arg1597z00_1572 = CAR(BgL_ez00_38);
														{	/* Match/descr.scm 438 */
															obj_t BgL_zc3z04anonymousza31599ze3z87_3503;

															BgL_zc3z04anonymousza31599ze3z87_3503 =
																MAKE_FX_PROCEDURE
																(BGl_z62zc3z04anonymousza31599ze3ze5zz__match_descriptionsz00,
																(int) (((long) 1)), (int) (((long) 4)));
															PROCEDURE_SET
																(BgL_zc3z04anonymousza31599ze3z87_3503,
																(int) (((long) 0)), BgL_dz00_37);
															PROCEDURE_SET
																(BgL_zc3z04anonymousza31599ze3z87_3503,
																(int) (((long) 1)), BgL_ez00_38);
															PROCEDURE_SET
																(BgL_zc3z04anonymousza31599ze3z87_3503,
																(int) (((long) 2)), BgL_kz00_40);
															PROCEDURE_SET
																(BgL_zc3z04anonymousza31599ze3z87_3503,
																(int) (((long) 3)), BgL_za7za7_41);
															{
																obj_t BgL_kz00_4723;
																obj_t BgL_ez00_4722;
																obj_t BgL_dz00_4721;

																BgL_dz00_4721 = BgL_arg1596z00_1571;
																BgL_ez00_4722 = BgL_arg1597z00_1572;
																BgL_kz00_4723 =
																	BgL_zc3z04anonymousza31599ze3z87_3503;
																BgL_kz00_40 = BgL_kz00_4723;
																BgL_ez00_38 = BgL_ez00_4722;
																BgL_dz00_37 = BgL_dz00_4721;
																goto BGl_matchz00zz__match_descriptionsz00;
															}
														}
													}
												else
													{	/* Match/descr.scm 435 */
														return
															PROCEDURE_ENTRY(BgL_za7za7_41) (BgL_za7za7_41,
															BgL_envz00_39, BEOA);
													}
											}
										else
											{	/* Match/descr.scm 424 */
												if (
													(BgL_casezd2valuezd2_1549 ==
														BGl_symbol2266z00zz__match_descriptionsz00))
													{	/* Match/descr.scm 445 */
														bool_t BgL_test2472z00_4730;

														{	/* Match/descr.scm 516 */
															obj_t BgL_tmpz00_4731;

															{	/* Match/descr.scm 516 */
																obj_t BgL_pairz00_2773;

																{	/* Match/descr.scm 445 */
																	obj_t BgL_pairz00_2771;

																	BgL_pairz00_2771 = CDR(((obj_t) BgL_dz00_37));
																	BgL_pairz00_2773 = CAR(BgL_pairz00_2771);
																}
																BgL_tmpz00_4731 = CAR(BgL_pairz00_2773);
															}
															BgL_test2472z00_4730 =
																(BgL_tmpz00_4731 ==
																BGl_symbol2250z00zz__match_descriptionsz00);
														}
														if (BgL_test2472z00_4730)
															{	/* Match/descr.scm 446 */
																obj_t BgL_sz00_1582;

																BgL_sz00_1582 =
																	PROCEDURE_ENTRY
																	(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
																	(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
																	BGl_string2285z00zz__match_descriptionsz00,
																	BEOA);
																{	/* Match/descr.scm 447 */
																	obj_t BgL_arg1607z00_1583;

																	{	/* Match/descr.scm 447 */
																		obj_t BgL_arg1608z00_1584;
																		obj_t BgL_arg1611z00_1585;

																		{	/* Match/descr.scm 447 */
																			obj_t BgL_pairz00_2781;

																			{	/* Match/descr.scm 447 */
																				obj_t BgL_pairz00_2780;

																				{	/* Match/descr.scm 447 */
																					obj_t BgL_pairz00_2779;

																					BgL_pairz00_2779 =
																						CDR(((obj_t) BgL_dz00_37));
																					BgL_pairz00_2780 =
																						CAR(BgL_pairz00_2779);
																				}
																				BgL_pairz00_2781 =
																					CDR(BgL_pairz00_2780);
																			}
																			BgL_arg1608z00_1584 =
																				CAR(BgL_pairz00_2781);
																		}
																		{	/* Match/descr.scm 447 */
																			obj_t BgL_arg1612z00_1586;

																			{	/* Match/descr.scm 447 */
																				obj_t BgL_arg1613z00_1587;

																				{	/* Match/descr.scm 447 */
																					obj_t BgL_arg1614z00_1588;

																					BgL_arg1614z00_1588 =
																						MAKE_YOUNG_PAIR(BgL_sz00_1582,
																						BNIL);
																					BgL_arg1613z00_1587 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol2271z00zz__match_descriptionsz00,
																						BgL_arg1614z00_1588);
																				}
																				BgL_arg1612z00_1586 =
																					MAKE_YOUNG_PAIR(BgL_arg1613z00_1587,
																					BNIL);
																			}
																			BgL_arg1611z00_1585 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol2266z00zz__match_descriptionsz00,
																				BgL_arg1612z00_1586);
																		}
																		{	/* Match/descr.scm 124 */
																			obj_t
																				BgL_zc3z04anonymousza31300ze3z87_3504;
																			BgL_zc3z04anonymousza31300ze3z87_3504 =
																				MAKE_FX_PROCEDURE
																				(BGl_z62zc3z04anonymousza31300ze32231ze5zz__match_descriptionsz00,
																				(int) (((long) 1)), (int) (((long) 3)));
																			PROCEDURE_SET
																				(BgL_zc3z04anonymousza31300ze3z87_3504,
																				(int) (((long) 0)), BgL_envz00_39);
																			PROCEDURE_SET
																				(BgL_zc3z04anonymousza31300ze3z87_3504,
																				(int) (((long) 1)),
																				BgL_arg1611z00_1585);
																			PROCEDURE_SET
																				(BgL_zc3z04anonymousza31300ze3z87_3504,
																				(int) (((long) 2)),
																				BgL_arg1608z00_1584);
																			BgL_arg1607z00_1583 =
																				BgL_zc3z04anonymousza31300ze3z87_3504;
																	}}
																	return
																		PROCEDURE_ENTRY(BgL_kz00_40) (BgL_kz00_40,
																		BgL_arg1607z00_1583, BEOA);
																}
															}
														else
															{	/* Match/descr.scm 448 */
																obj_t BgL_arg1615z00_1589;

																{	/* Match/descr.scm 448 */
																	obj_t BgL_pairz00_2789;

																	BgL_pairz00_2789 = CDR(((obj_t) BgL_dz00_37));
																	BgL_arg1615z00_1589 = CAR(BgL_pairz00_2789);
																}
																{
																	obj_t BgL_za7za7_4768;
																	obj_t BgL_kz00_4767;
																	obj_t BgL_dz00_4766;

																	BgL_dz00_4766 = BgL_arg1615z00_1589;
																	BgL_kz00_4767 = BgL_za7za7_41;
																	BgL_za7za7_4768 = BgL_kz00_40;
																	BgL_za7za7_41 = BgL_za7za7_4768;
																	BgL_kz00_40 = BgL_kz00_4767;
																	BgL_dz00_37 = BgL_dz00_4766;
																	goto BGl_matchz00zz__match_descriptionsz00;
																}
															}
													}
												else
													{	/* Match/descr.scm 424 */
														if (
															(BgL_casezd2valuezd2_1549 ==
																BGl_symbol2252z00zz__match_descriptionsz00))
															{	/* Match/descr.scm 453 */
																obj_t BgL_fun1620z00_1594;

																{	/* Match/descr.scm 453 */
																	obj_t BgL_arg1618z00_1592;
																	obj_t BgL_arg1619z00_1593;

																	{	/* Match/descr.scm 453 */
																		obj_t BgL_pairz00_2797;

																		{	/* Match/descr.scm 453 */
																			obj_t BgL_pairz00_2796;

																			BgL_pairz00_2796 =
																				CDR(((obj_t) BgL_dz00_37));
																			BgL_pairz00_2797 = CDR(BgL_pairz00_2796);
																		}
																		BgL_arg1618z00_1592 = CAR(BgL_pairz00_2797);
																	}
																	{	/* Match/descr.scm 453 */
																		obj_t BgL_pairz00_2803;

																		{	/* Match/descr.scm 453 */
																			obj_t BgL_pairz00_2802;

																			BgL_pairz00_2802 =
																				CDR(((obj_t) BgL_ez00_38));
																			BgL_pairz00_2803 = CDR(BgL_pairz00_2802);
																		}
																		BgL_arg1619z00_1593 = CAR(BgL_pairz00_2803);
																	}
																	BgL_fun1620z00_1594 =
																		BGl_matchz00zz__match_descriptionsz00
																		(BgL_arg1618z00_1592, BgL_arg1619z00_1593,
																		BgL_envz00_39, BgL_kz00_40, BgL_za7za7_41);
																}
																return
																	PROCEDURE_ENTRY(BgL_fun1620z00_1594)
																	(BgL_fun1620z00_1594, BINT(((long) 0)), BEOA);
															}
														else
															{	/* Match/descr.scm 424 */
																if (
																	(BgL_casezd2valuezd2_1549 ==
																		BGl_symbol2243z00zz__match_descriptionsz00))
																	{	/* Match/descr.scm 456 */
																		obj_t BgL_zc3z04anonymousza31622ze3z87_3506;

																		BgL_zc3z04anonymousza31622ze3z87_3506 =
																			MAKE_FX_PROCEDURE
																			(BGl_z62zc3z04anonymousza31622ze3ze5zz__match_descriptionsz00,
																			(int) (((long) 1)), (int) (((long) 5)));
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31622ze3z87_3506,
																			(int) (((long) 0)), BgL_dz00_37);
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31622ze3z87_3506,
																			(int) (((long) 1)), BgL_ez00_38);
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31622ze3z87_3506,
																			(int) (((long) 2)), BgL_kz00_40);
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31622ze3z87_3506,
																			(int) (((long) 3)), BgL_za7za7_41);
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31622ze3z87_3506,
																			(int) (((long) 4)), BgL_envz00_39);
																		return
																			BgL_zc3z04anonymousza31622ze3z87_3506;
																	}
																else
																	{	/* Match/descr.scm 424 */
																		if (
																			(BgL_casezd2valuezd2_1549 ==
																				BGl_symbol2254z00zz__match_descriptionsz00))
																			{	/* Match/descr.scm 467 */
																				obj_t
																					BgL_zc3z04anonymousza31636ze3z87_3507;
																				BgL_zc3z04anonymousza31636ze3z87_3507 =
																					MAKE_FX_PROCEDURE
																					(BGl_z62zc3z04anonymousza31636ze3ze5zz__match_descriptionsz00,
																					(int) (((long) 1)),
																					(int) (((long) 2)));
																				PROCEDURE_SET
																					(BgL_zc3z04anonymousza31636ze3z87_3507,
																					(int) (((long) 0)), BgL_kz00_40);
																				PROCEDURE_SET
																					(BgL_zc3z04anonymousza31636ze3z87_3507,
																					(int) (((long) 1)), BgL_envz00_39);
																				return
																					BgL_zc3z04anonymousza31636ze3z87_3507;
																			}
																		else
																			{	/* Match/descr.scm 424 */
																				if (
																					(BgL_casezd2valuezd2_1549 ==
																						BGl_symbol2250z00zz__match_descriptionsz00))
																					{	/* Match/descr.scm 469 */
																						bool_t BgL_test2477z00_4811;

																						{	/* Match/descr.scm 469 */
																							obj_t BgL_arg1650z00_1624;

																							{	/* Match/descr.scm 469 */
																								obj_t BgL_arg1651z00_1625;

																								{	/* Match/descr.scm 469 */
																									obj_t BgL_pairz00_2834;

																									BgL_pairz00_2834 =
																										CDR(((obj_t) BgL_dz00_37));
																									BgL_arg1651z00_1625 =
																										CAR(BgL_pairz00_2834);
																								}
																								BgL_arg1650z00_1624 =
																									PROCEDURE_ENTRY(BgL_envz00_39)
																									(BgL_envz00_39,
																									BgL_arg1651z00_1625, BEOA);
																							}
																							BgL_test2477z00_4811 =
																								(BgL_arg1650z00_1624 ==
																								BGl_symbol2281z00zz__match_descriptionsz00);
																						}
																						if (BgL_test2477z00_4811)
																							{	/* Match/descr.scm 470 */
																								obj_t BgL_arg1642z00_1617;

																								{	/* Match/descr.scm 470 */
																									obj_t BgL_arg1643z00_1618;

																									{	/* Match/descr.scm 470 */
																										obj_t BgL_pairz00_2838;

																										BgL_pairz00_2838 =
																											CDR(
																											((obj_t) BgL_dz00_37));
																										BgL_arg1643z00_1618 =
																											CAR(BgL_pairz00_2838);
																									}
																									{	/* Match/descr.scm 124 */
																										obj_t
																											BgL_zc3z04anonymousza31300ze3z87_3508;
																										BgL_zc3z04anonymousza31300ze3z87_3508
																											=
																											MAKE_FX_PROCEDURE
																											(BGl_z62zc3z04anonymousza31300ze32232ze5zz__match_descriptionsz00,
																											(int) (((long) 1)),
																											(int) (((long) 3)));
																										PROCEDURE_SET
																											(BgL_zc3z04anonymousza31300ze3z87_3508,
																											(int) (((long) 0)),
																											BgL_envz00_39);
																										PROCEDURE_SET
																											(BgL_zc3z04anonymousza31300ze3z87_3508,
																											(int) (((long) 1)),
																											BgL_ez00_38);
																										PROCEDURE_SET
																											(BgL_zc3z04anonymousza31300ze3z87_3508,
																											(int) (((long) 2)),
																											BgL_arg1643z00_1618);
																										BgL_arg1642z00_1617 =
																											BgL_zc3z04anonymousza31300ze3z87_3508;
																								}}
																								return
																									PROCEDURE_ENTRY(BgL_kz00_40)
																									(BgL_kz00_40,
																									BgL_arg1642z00_1617, BEOA);
																							}
																						else
																							{	/* Match/descr.scm 471 */
																								bool_t BgL_test2478z00_4836;

																								{	/* Match/descr.scm 471 */
																									obj_t BgL_arg1648z00_1622;

																									{	/* Match/descr.scm 471 */
																										obj_t BgL_arg1649z00_1623;

																										{	/* Match/descr.scm 471 */
																											obj_t BgL_pairz00_2846;

																											BgL_pairz00_2846 =
																												CDR(
																												((obj_t) BgL_dz00_37));
																											BgL_arg1649z00_1623 =
																												CAR(BgL_pairz00_2846);
																										}
																										BgL_arg1648z00_1622 =
																											PROCEDURE_ENTRY
																											(BgL_envz00_39)
																											(BgL_envz00_39,
																											BgL_arg1649z00_1623,
																											BEOA);
																									}
																									BgL_test2478z00_4836 =
																										(BgL_arg1648z00_1622 ==
																										BgL_ez00_38);
																								}
																								if (BgL_test2478z00_4836)
																									{	/* Match/descr.scm 471 */
																										return
																											PROCEDURE_ENTRY
																											(BgL_kz00_40)
																											(BgL_kz00_40,
																											BgL_envz00_39, BEOA);
																									}
																								else
																									{	/* Match/descr.scm 471 */
																										return
																											PROCEDURE_ENTRY
																											(BgL_za7za7_41)
																											(BgL_za7za7_41,
																											BgL_envz00_39, BEOA);
																									}
																							}
																					}
																				else
																					{	/* Match/descr.scm 424 */
																						return BUNSPEC;
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



/* &<@anonymous:1589> */
	obj_t BGl_z62zc3z04anonymousza31589ze3ze5zz__match_descriptionsz00(obj_t
		BgL_envz00_3509, obj_t BgL_envz00_3514)
	{
		{	/* Match/descr.scm 431 */
			{	/* Match/descr.scm 432 */
				obj_t BgL_dz00_3510;
				obj_t BgL_ez00_3511;
				obj_t BgL_kz00_3512;
				obj_t BgL_za7za7_3513;

				BgL_dz00_3510 = PROCEDURE_REF(BgL_envz00_3509, (int) (((long) 0)));
				BgL_ez00_3511 = PROCEDURE_REF(BgL_envz00_3509, (int) (((long) 1)));
				BgL_kz00_3512 = PROCEDURE_REF(BgL_envz00_3509, (int) (((long) 2)));
				BgL_za7za7_3513 = PROCEDURE_REF(BgL_envz00_3509, (int) (((long) 3)));
				{	/* Match/descr.scm 432 */
					obj_t BgL_arg1592z00_3640;

					{	/* Match/descr.scm 432 */
						obj_t BgL_pairz00_3641;

						{	/* Match/descr.scm 432 */
							obj_t BgL_pairz00_3642;

							BgL_pairz00_3642 = CDR(((obj_t) BgL_dz00_3510));
							BgL_pairz00_3641 = CDR(BgL_pairz00_3642);
						}
						BgL_arg1592z00_3640 = CAR(BgL_pairz00_3641);
					}
					return
						BGl_matchz00zz__match_descriptionsz00(BgL_arg1592z00_3640,
						BgL_ez00_3511, BgL_envz00_3514, BgL_kz00_3512, BgL_za7za7_3513);
				}
			}
		}

	}



/* &<@anonymous:1599> */
	obj_t BGl_z62zc3z04anonymousza31599ze3ze5zz__match_descriptionsz00(obj_t
		BgL_envz00_3515, obj_t BgL_envz00_3520)
	{
		{	/* Match/descr.scm 437 */
			{	/* Match/descr.scm 438 */
				obj_t BgL_dz00_3516;
				obj_t BgL_ez00_3517;
				obj_t BgL_kz00_3518;
				obj_t BgL_za7za7_3519;

				BgL_dz00_3516 = PROCEDURE_REF(BgL_envz00_3515, (int) (((long) 0)));
				BgL_ez00_3517 = PROCEDURE_REF(BgL_envz00_3515, (int) (((long) 1)));
				BgL_kz00_3518 = PROCEDURE_REF(BgL_envz00_3515, (int) (((long) 2)));
				BgL_za7za7_3519 = PROCEDURE_REF(BgL_envz00_3515, (int) (((long) 3)));
				{	/* Match/descr.scm 438 */
					obj_t BgL_arg1602z00_3643;
					obj_t BgL_arg1603z00_3644;

					{	/* Match/descr.scm 438 */
						obj_t BgL_pairz00_3645;

						{	/* Match/descr.scm 438 */
							obj_t BgL_pairz00_3646;

							BgL_pairz00_3646 = CDR(((obj_t) BgL_dz00_3516));
							BgL_pairz00_3645 = CDR(BgL_pairz00_3646);
						}
						BgL_arg1602z00_3643 = CAR(BgL_pairz00_3645);
					}
					BgL_arg1603z00_3644 = CDR(((obj_t) BgL_ez00_3517));
					return
						BGl_matchz00zz__match_descriptionsz00(BgL_arg1602z00_3643,
						BgL_arg1603z00_3644, BgL_envz00_3520, BgL_kz00_3518,
						BgL_za7za7_3519);
				}
			}
		}

	}



/* &<@anonymous:1300>2231 */
	obj_t BGl_z62zc3z04anonymousza31300ze32231ze5zz__match_descriptionsz00(obj_t
		BgL_envz00_3521, obj_t BgL_xz00_3525)
	{
		{	/* Match/descr.scm 124 */
			{	/* Match/descr.scm 124 */
				obj_t BgL_envz00_3522;
				obj_t BgL_arg1611z00_3523;
				obj_t BgL_arg1608z00_3524;

				BgL_envz00_3522 = PROCEDURE_REF(BgL_envz00_3521, (int) (((long) 0)));
				BgL_arg1611z00_3523 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3521, (int) (((long) 1))));
				BgL_arg1608z00_3524 =
					PROCEDURE_REF(BgL_envz00_3521, (int) (((long) 2)));
				if ((BgL_xz00_3525 == BgL_arg1608z00_3524))
					{	/* Match/descr.scm 124 */
						return BgL_arg1611z00_3523;
					}
				else
					{	/* Match/descr.scm 124 */
						return
							PROCEDURE_ENTRY(BgL_envz00_3522) (BgL_envz00_3522, BgL_xz00_3525,
							BEOA);
					}
			}
		}

	}



/* &<@anonymous:1622> */
	obj_t BGl_z62zc3z04anonymousza31622ze3ze5zz__match_descriptionsz00(obj_t
		BgL_envz00_3526, obj_t BgL_iz00_3532)
	{
		{	/* Match/descr.scm 456 */
			{	/* Match/descr.scm 457 */
				obj_t BgL_dz00_3527;
				obj_t BgL_ez00_3528;
				obj_t BgL_kz00_3529;
				obj_t BgL_za7za7_3530;
				obj_t BgL_envz00_3531;

				BgL_dz00_3527 = PROCEDURE_REF(BgL_envz00_3526, (int) (((long) 0)));
				BgL_ez00_3528 = PROCEDURE_REF(BgL_envz00_3526, (int) (((long) 1)));
				BgL_kz00_3529 = PROCEDURE_REF(BgL_envz00_3526, (int) (((long) 2)));
				BgL_za7za7_3530 = PROCEDURE_REF(BgL_envz00_3526, (int) (((long) 3)));
				BgL_envz00_3531 = PROCEDURE_REF(BgL_envz00_3526, (int) (((long) 4)));
				if (
					((long) CINT(BgL_iz00_3532) >=
						VECTOR_LENGTH(((obj_t) BgL_ez00_3528))))
					{	/* Match/descr.scm 457 */
						return
							PROCEDURE_ENTRY(BgL_kz00_3529) (BgL_kz00_3529, BgL_envz00_3531,
							BEOA);
					}
				else
					{	/* Match/descr.scm 459 */
						obj_t BgL_arg1626z00_3647;
						obj_t BgL_arg1627z00_3648;

						{	/* Match/descr.scm 459 */
							obj_t BgL_pairz00_3649;

							BgL_pairz00_3649 = CDR(((obj_t) BgL_dz00_3527));
							BgL_arg1626z00_3647 = CAR(BgL_pairz00_3649);
						}
						{	/* Match/descr.scm 459 */
							long BgL_kz00_3650;

							BgL_kz00_3650 = (long) CINT(BgL_iz00_3532);
							BgL_arg1627z00_3648 =
								VECTOR_REF(((obj_t) BgL_ez00_3528), BgL_kz00_3650);
						}
						{	/* Match/descr.scm 462 */
							obj_t BgL_zc3z04anonymousza31629ze3z87_3651;

							BgL_zc3z04anonymousza31629ze3z87_3651 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31629ze3ze5zz__match_descriptionsz00,
								(int) (((long) 1)), (int) (((long) 5)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31629ze3z87_3651,
								(int) (((long) 0)), BgL_dz00_3527);
							PROCEDURE_SET(BgL_zc3z04anonymousza31629ze3z87_3651,
								(int) (((long) 1)), BgL_ez00_3528);
							PROCEDURE_SET(BgL_zc3z04anonymousza31629ze3z87_3651,
								(int) (((long) 2)), BgL_kz00_3529);
							PROCEDURE_SET(BgL_zc3z04anonymousza31629ze3z87_3651,
								(int) (((long) 3)), BgL_za7za7_3530);
							PROCEDURE_SET(BgL_zc3z04anonymousza31629ze3z87_3651,
								(int) (((long) 4)), BgL_iz00_3532);
							return
								BGl_comparez00zz__match_descriptionsz00(BgL_arg1626z00_3647,
								BgL_arg1627z00_3648, BgL_envz00_3531,
								BgL_zc3z04anonymousza31629ze3z87_3651, BgL_za7za7_3530);
						}
					}
			}
		}

	}



/* &<@anonymous:1629> */
	obj_t BGl_z62zc3z04anonymousza31629ze3ze5zz__match_descriptionsz00(obj_t
		BgL_envz00_3533, obj_t BgL_envz00_3539)
	{
		{	/* Match/descr.scm 461 */
			{	/* Match/descr.scm 462 */
				obj_t BgL_dz00_3534;
				obj_t BgL_ez00_3535;
				obj_t BgL_kz00_3536;
				obj_t BgL_za7za7_3537;
				obj_t BgL_iz00_3538;

				BgL_dz00_3534 = PROCEDURE_REF(BgL_envz00_3533, (int) (((long) 0)));
				BgL_ez00_3535 = PROCEDURE_REF(BgL_envz00_3533, (int) (((long) 1)));
				BgL_kz00_3536 = PROCEDURE_REF(BgL_envz00_3533, (int) (((long) 2)));
				BgL_za7za7_3537 = PROCEDURE_REF(BgL_envz00_3533, (int) (((long) 3)));
				BgL_iz00_3538 = PROCEDURE_REF(BgL_envz00_3533, (int) (((long) 4)));
				{	/* Match/descr.scm 462 */
					obj_t BgL_fun1633z00_3652;

					{	/* Match/descr.scm 462 */
						obj_t BgL_arg1630z00_3653;

						{	/* Match/descr.scm 462 */
							obj_t BgL_pairz00_3654;

							{	/* Match/descr.scm 462 */
								obj_t BgL_pairz00_3655;

								BgL_pairz00_3655 = CDR(((obj_t) BgL_dz00_3534));
								BgL_pairz00_3654 = CDR(BgL_pairz00_3655);
							}
							BgL_arg1630z00_3653 = CAR(BgL_pairz00_3654);
						}
						BgL_fun1633z00_3652 =
							BGl_matchz00zz__match_descriptionsz00(BgL_arg1630z00_3653,
							BgL_ez00_3535, BgL_envz00_3539, BgL_kz00_3536, BgL_za7za7_3537);
					}
					{	/* Match/descr.scm 463 */
						long BgL_arg1631z00_3656;

						BgL_arg1631z00_3656 = ((long) CINT(BgL_iz00_3538) + ((long) 1));
						return
							PROCEDURE_ENTRY(BgL_fun1633z00_3652) (BgL_fun1633z00_3652,
							BINT(BgL_arg1631z00_3656), BEOA);
					}
				}
			}
		}

	}



/* &<@anonymous:1636> */
	obj_t BGl_z62zc3z04anonymousza31636ze3ze5zz__match_descriptionsz00(obj_t
		BgL_envz00_3540, obj_t BgL_iz00_3543)
	{
		{	/* Match/descr.scm 467 */
			{	/* Match/descr.scm 467 */
				obj_t BgL_kz00_3541;
				obj_t BgL_envz00_3542;

				BgL_kz00_3541 = PROCEDURE_REF(BgL_envz00_3540, (int) (((long) 0)));
				BgL_envz00_3542 = PROCEDURE_REF(BgL_envz00_3540, (int) (((long) 1)));
				return
					PROCEDURE_ENTRY(BgL_kz00_3541) (BgL_kz00_3541, BgL_envz00_3542, BEOA);
			}
		}

	}



/* &<@anonymous:1300>2232 */
	obj_t BGl_z62zc3z04anonymousza31300ze32232ze5zz__match_descriptionsz00(obj_t
		BgL_envz00_3544, obj_t BgL_xz00_3548)
	{
		{	/* Match/descr.scm 124 */
			{	/* Match/descr.scm 124 */
				obj_t BgL_envz00_3545;
				obj_t BgL_ez00_3546;
				obj_t BgL_arg1643z00_3547;

				BgL_envz00_3545 = PROCEDURE_REF(BgL_envz00_3544, (int) (((long) 0)));
				BgL_ez00_3546 = PROCEDURE_REF(BgL_envz00_3544, (int) (((long) 1)));
				BgL_arg1643z00_3547 =
					PROCEDURE_REF(BgL_envz00_3544, (int) (((long) 2)));
				if ((BgL_xz00_3548 == BgL_arg1643z00_3547))
					{	/* Match/descr.scm 124 */
						return BgL_ez00_3546;
					}
				else
					{	/* Match/descr.scm 124 */
						return
							PROCEDURE_ENTRY(BgL_envz00_3545) (BgL_envz00_3545, BgL_xz00_3548,
							BEOA);
					}
			}
		}

	}



/* alpha-convert */
	obj_t BGl_alphazd2convertzd2zz__match_descriptionsz00(obj_t BgL_fz00_42)
	{
		{	/* Match/descr.scm 479 */
			return
				BGl_z62loopz62zz__match_descriptionsz00(BgL_fz00_42,
				BGl_proc2291z00zz__match_descriptionsz00,
				BGl_proc2290z00zz__match_descriptionsz00);
		}

	}



/* &loop */
	obj_t BGl_z62loopz62zz__match_descriptionsz00(obj_t BgL_fz00_1629,
		obj_t BgL_envz00_1630, obj_t BgL_kz00_1631)
	{
		{	/* Match/descr.scm 480 */
		BGl_z62loopz62zz__match_descriptionsz00:
			if (PAIRP(BgL_fz00_1629))
				{	/* Match/descr.scm 484 */
					if (
						(CAR(BgL_fz00_1629) == BGl_symbol2271z00zz__match_descriptionsz00))
						{	/* Match/descr.scm 486 */
							return
								PROCEDURE_L_ENTRY(BgL_kz00_1631) (BgL_kz00_1631, BgL_fz00_1629,
								BgL_envz00_1630);
						}
					else
						{	/* Match/descr.scm 486 */
							if (
								(CAR(BgL_fz00_1629) ==
									BGl_symbol2250z00zz__match_descriptionsz00))
								{	/* Match/descr.scm 489 */
									bool_t BgL_test2485z00_4989;

									{	/* Match/descr.scm 489 */
										obj_t BgL_arg1683z00_1652;

										{	/* Match/descr.scm 489 */
											obj_t BgL_arg1684z00_1653;

											BgL_arg1684z00_1653 = CAR(CDR(BgL_fz00_1629));
											BgL_arg1683z00_1652 =
												PROCEDURE_ENTRY(BgL_envz00_1630) (BgL_envz00_1630,
												BgL_arg1684z00_1653, BEOA);
										}
										BgL_test2485z00_4989 =
											(BgL_arg1683z00_1652 ==
											BGl_symbol2281z00zz__match_descriptionsz00);
									}
									if (BgL_test2485z00_4989)
										{	/* Match/descr.scm 490 */
											obj_t BgL_sz00_1641;

											BgL_sz00_1641 =
												PROCEDURE_ENTRY(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
												(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
												BGl_string2292z00zz__match_descriptionsz00, BEOA);
											{	/* Match/descr.scm 491 */
												obj_t BgL_arg1661z00_1642;
												obj_t BgL_arg1662z00_1643;

												{	/* Match/descr.scm 491 */
													obj_t BgL_list1663z00_1644;

													{	/* Match/descr.scm 491 */
														obj_t BgL_arg1664z00_1645;

														BgL_arg1664z00_1645 =
															MAKE_YOUNG_PAIR(BgL_sz00_1641, BNIL);
														BgL_list1663z00_1644 =
															MAKE_YOUNG_PAIR
															(BGl_symbol2250z00zz__match_descriptionsz00,
															BgL_arg1664z00_1645);
													}
													BgL_arg1661z00_1642 = BgL_list1663z00_1644;
												}
												{	/* Match/descr.scm 491 */
													obj_t BgL_arg1665z00_1646;

													BgL_arg1665z00_1646 = CAR(CDR(BgL_fz00_1629));
													{	/* Match/descr.scm 124 */
														obj_t BgL_zc3z04anonymousza31300ze3z87_3549;

														BgL_zc3z04anonymousza31300ze3z87_3549 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31300ze32233ze5zz__match_descriptionsz00,
															(int) (((long) 1)), (int) (((long) 3)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31300ze3z87_3549,
															(int) (((long) 0)), BgL_envz00_1630);
														PROCEDURE_SET(BgL_zc3z04anonymousza31300ze3z87_3549,
															(int) (((long) 1)), BgL_sz00_1641);
														PROCEDURE_SET(BgL_zc3z04anonymousza31300ze3z87_3549,
															(int) (((long) 2)), BgL_arg1665z00_1646);
														BgL_arg1662z00_1643 =
															BgL_zc3z04anonymousza31300ze3z87_3549;
												}}
												return
													PROCEDURE_L_ENTRY(BgL_kz00_1631) (BgL_kz00_1631,
													BgL_arg1661z00_1642, BgL_arg1662z00_1643);
											}
										}
									else
										{	/* Match/descr.scm 492 */
											obj_t BgL_arg1667z00_1647;

											{	/* Match/descr.scm 492 */
												obj_t BgL_arg1668z00_1648;

												{	/* Match/descr.scm 492 */
													obj_t BgL_arg1675z00_1651;

													BgL_arg1675z00_1651 = CAR(CDR(BgL_fz00_1629));
													BgL_arg1668z00_1648 =
														PROCEDURE_ENTRY(BgL_envz00_1630) (BgL_envz00_1630,
														BgL_arg1675z00_1651, BEOA);
												}
												{	/* Match/descr.scm 492 */
													obj_t BgL_list1669z00_1649;

													{	/* Match/descr.scm 492 */
														obj_t BgL_arg1672z00_1650;

														BgL_arg1672z00_1650 =
															MAKE_YOUNG_PAIR(BgL_arg1668z00_1648, BNIL);
														BgL_list1669z00_1649 =
															MAKE_YOUNG_PAIR
															(BGl_symbol2250z00zz__match_descriptionsz00,
															BgL_arg1672z00_1650);
													}
													BgL_arg1667z00_1647 = BgL_list1669z00_1649;
												}
											}
											return
												PROCEDURE_L_ENTRY(BgL_kz00_1631) (BgL_kz00_1631,
												BgL_arg1667z00_1647, BgL_envz00_1630);
										}
								}
							else
								{	/* Match/descr.scm 493 */
									obj_t BgL_arg1685z00_1654;

									BgL_arg1685z00_1654 = CAR(BgL_fz00_1629);
									{	/* Match/descr.scm 495 */
										obj_t BgL_zc3z04anonymousza31687ze3z87_3551;

										{
											int BgL_tmpz00_5033;

											BgL_tmpz00_5033 = (int) (((long) 2));
											BgL_zc3z04anonymousza31687ze3z87_3551 =
												MAKE_L_PROCEDURE
												(BGl_z62zc3z04anonymousza31687ze3ze5zz__match_descriptionsz00,
												BgL_tmpz00_5033);
										}
										PROCEDURE_L_SET(BgL_zc3z04anonymousza31687ze3z87_3551,
											(int) (((long) 0)), BgL_fz00_1629);
										PROCEDURE_L_SET(BgL_zc3z04anonymousza31687ze3z87_3551,
											(int) (((long) 1)), BgL_kz00_1631);
										{
											obj_t BgL_kz00_5041;
											obj_t BgL_fz00_5040;

											BgL_fz00_5040 = BgL_arg1685z00_1654;
											BgL_kz00_5041 = BgL_zc3z04anonymousza31687ze3z87_3551;
											BgL_kz00_1631 = BgL_kz00_5041;
											BgL_fz00_1629 = BgL_fz00_5040;
											goto BGl_z62loopz62zz__match_descriptionsz00;
										}
									}
								}
						}
				}
			else
				{	/* Match/descr.scm 484 */
					return
						PROCEDURE_L_ENTRY(BgL_kz00_1631) (BgL_kz00_1631, BgL_fz00_1629,
						BgL_envz00_1630);
				}
		}

	}



/* &g1051 */
	obj_t BGl_z62g1051z62zz__match_descriptionsz00(obj_t BgL_envz00_3555,
		obj_t BgL_fz00_3556, obj_t BgL_ez00_3557)
	{
		{	/* Match/descr.scm 482 */
			return BgL_fz00_3556;
		}

	}



/* &g1050 */
	obj_t BGl_z62g1050z62zz__match_descriptionsz00(obj_t BgL_envz00_3558,
		obj_t BgL_xz00_3559)
	{
		{	/* Match/descr.scm 481 */
			return BGl_symbol2281z00zz__match_descriptionsz00;
		}

	}



/* &<@anonymous:1300>2233 */
	obj_t BGl_z62zc3z04anonymousza31300ze32233ze5zz__match_descriptionsz00(obj_t
		BgL_envz00_3560, obj_t BgL_xz00_3564)
	{
		{	/* Match/descr.scm 124 */
			{	/* Match/descr.scm 124 */
				obj_t BgL_envz00_3561;
				obj_t BgL_sz00_3562;
				obj_t BgL_arg1665z00_3563;

				BgL_envz00_3561 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3560, (int) (((long) 0))));
				BgL_sz00_3562 = PROCEDURE_REF(BgL_envz00_3560, (int) (((long) 1)));
				BgL_arg1665z00_3563 =
					PROCEDURE_REF(BgL_envz00_3560, (int) (((long) 2)));
				if ((BgL_xz00_3564 == BgL_arg1665z00_3563))
					{	/* Match/descr.scm 124 */
						return BgL_sz00_3562;
					}
				else
					{	/* Match/descr.scm 124 */
						return
							PROCEDURE_ENTRY(BgL_envz00_3561) (BgL_envz00_3561, BgL_xz00_3564,
							BEOA);
					}
			}
		}

	}



/* &<@anonymous:1687> */
	obj_t BGl_z62zc3z04anonymousza31687ze3ze5zz__match_descriptionsz00(obj_t
		BgL_envz00_3565, obj_t BgL_fcarz00_3568, obj_t BgL_ez00_3569)
	{
		{	/* Match/descr.scm 494 */
			{	/* Match/descr.scm 495 */
				obj_t BgL_fz00_3566;
				obj_t BgL_kz00_3567;

				BgL_fz00_3566 = PROCEDURE_L_REF(BgL_envz00_3565, (int) (((long) 0)));
				BgL_kz00_3567 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_3565, (int) (((long) 1))));
				{	/* Match/descr.scm 495 */
					obj_t BgL_arg1688z00_3659;

					BgL_arg1688z00_3659 = CDR(((obj_t) BgL_fz00_3566));
					{	/* Match/descr.scm 497 */
						obj_t BgL_zc3z04anonymousza31692ze3z87_3660;

						{	/* Match/descr.scm 495 */
							int BgL_tmpz00_5067;

							BgL_tmpz00_5067 = (int) (((long) 2));
							BgL_zc3z04anonymousza31692ze3z87_3660 =
								MAKE_L_PROCEDURE
								(BGl_z62zc3z04anonymousza31692ze3ze5zz__match_descriptionsz00,
								BgL_tmpz00_5067);
						}
						PROCEDURE_L_SET(BgL_zc3z04anonymousza31692ze3z87_3660,
							(int) (((long) 0)), BgL_fcarz00_3568);
						PROCEDURE_L_SET(BgL_zc3z04anonymousza31692ze3z87_3660,
							(int) (((long) 1)), BgL_kz00_3567);
						return
							BGl_z62loopz62zz__match_descriptionsz00(BgL_arg1688z00_3659,
							BgL_ez00_3569, BgL_zc3z04anonymousza31692ze3z87_3660);
					}
				}
			}
		}

	}



/* &<@anonymous:1692> */
	obj_t BGl_z62zc3z04anonymousza31692ze3ze5zz__match_descriptionsz00(obj_t
		BgL_envz00_3570, obj_t BgL_fcdrz00_3573, obj_t BgL_ez00_3574)
	{
		{	/* Match/descr.scm 496 */
			{	/* Match/descr.scm 497 */
				obj_t BgL_fcarz00_3571;
				obj_t BgL_kz00_3572;

				BgL_fcarz00_3571 = PROCEDURE_L_REF(BgL_envz00_3570, (int) (((long) 0)));
				BgL_kz00_3572 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_3570, (int) (((long) 1))));
				{	/* Match/descr.scm 497 */
					obj_t BgL_arg1693z00_3662;

					BgL_arg1693z00_3662 =
						MAKE_YOUNG_PAIR(BgL_fcarz00_3571, BgL_fcdrz00_3573);
					return
						PROCEDURE_L_ENTRY(BgL_kz00_3572) (BgL_kz00_3572,
						BgL_arg1693z00_3662, BgL_ez00_3574);
				}
			}
		}

	}



/* isAny? */
	BGL_EXPORTED_DEF obj_t BGl_isAnyzf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_43)
	{
		{	/* Match/descr.scm 502 */
			if (
				(CAR(
						((obj_t) BgL_cz00_43)) ==
					BGl_symbol2258z00zz__match_descriptionsz00))
				{	/* Match/descr.scm 502 */
					return BTRUE;
				}
			else
				{	/* Match/descr.scm 502 */
					return
						BBOOL(
						(CAR(
								((obj_t) BgL_cz00_43)) ==
							BGl_symbol2260z00zz__match_descriptionsz00));
				}
		}

	}



/* &isAny? */
	obj_t BGl_z62isAnyzf3z91zz__match_descriptionsz00(obj_t BgL_envz00_3575,
		obj_t BgL_cz00_3576)
	{
		{	/* Match/descr.scm 502 */
			return BGl_isAnyzf3zf3zz__match_descriptionsz00(BgL_cz00_3576);
		}

	}



/* isCheck? */
	BGL_EXPORTED_DEF obj_t BGl_isCheckzf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_44)
	{
		{	/* Match/descr.scm 506 */
			return
				BBOOL(
				(CAR(
						((obj_t) BgL_cz00_44)) ==
					BGl_symbol2260z00zz__match_descriptionsz00));
		}

	}



/* &isCheck? */
	obj_t BGl_z62isCheckzf3z91zz__match_descriptionsz00(obj_t BgL_envz00_3577,
		obj_t BgL_cz00_3578)
	{
		{	/* Match/descr.scm 506 */
			return BGl_isCheckzf3zf3zz__match_descriptionsz00(BgL_cz00_3578);
		}

	}



/* isSuccess? */
	BGL_EXPORTED_DEF obj_t BGl_isSuccesszf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_45)
	{
		{	/* Match/descr.scm 508 */
			return
				BBOOL(
				(CAR(
						((obj_t) BgL_cz00_45)) ==
					BGl_symbol2269z00zz__match_descriptionsz00));
		}

	}



/* &isSuccess? */
	obj_t BGl_z62isSuccesszf3z91zz__match_descriptionsz00(obj_t BgL_envz00_3579,
		obj_t BgL_cz00_3580)
	{
		{	/* Match/descr.scm 508 */
			return BGl_isSuccesszf3zf3zz__match_descriptionsz00(BgL_cz00_3580);
		}

	}



/* isTop? */
	BGL_EXPORTED_DEF obj_t BGl_isTopzf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_46)
	{
		{	/* Match/descr.scm 510 */
			return
				BBOOL(
				(CAR(
						((obj_t) BgL_cz00_46)) ==
					BGl_symbol2293z00zz__match_descriptionsz00));
		}

	}



/* &isTop? */
	obj_t BGl_z62isTopzf3z91zz__match_descriptionsz00(obj_t BgL_envz00_3581,
		obj_t BgL_cz00_3582)
	{
		{	/* Match/descr.scm 510 */
			return BGl_isTopzf3zf3zz__match_descriptionsz00(BgL_cz00_3582);
		}

	}



/* isBottom? */
	BGL_EXPORTED_DEF obj_t BGl_isBottomzf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_47)
	{
		{	/* Match/descr.scm 512 */
			return
				BBOOL(
				(CAR(
						((obj_t) BgL_cz00_47)) ==
					BGl_symbol2264z00zz__match_descriptionsz00));
		}

	}



/* &isBottom? */
	obj_t BGl_z62isBottomzf3z91zz__match_descriptionsz00(obj_t BgL_envz00_3583,
		obj_t BgL_cz00_3584)
	{
		{	/* Match/descr.scm 512 */
			return BGl_isBottomzf3zf3zz__match_descriptionsz00(BgL_cz00_3584);
		}

	}



/* isQuote? */
	BGL_EXPORTED_DEF obj_t BGl_isQuotezf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_48)
	{
		{	/* Match/descr.scm 514 */
			return
				BBOOL(
				(CAR(
						((obj_t) BgL_cz00_48)) ==
					BGl_symbol2271z00zz__match_descriptionsz00));
		}

	}



/* &isQuote? */
	obj_t BGl_z62isQuotezf3z91zz__match_descriptionsz00(obj_t BgL_envz00_3585,
		obj_t BgL_cz00_3586)
	{
		{	/* Match/descr.scm 514 */
			return BGl_isQuotezf3zf3zz__match_descriptionsz00(BgL_cz00_3586);
		}

	}



/* isVar? */
	BGL_EXPORTED_DEF obj_t BGl_isVarzf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_49)
	{
		{	/* Match/descr.scm 516 */
			return
				BBOOL(
				(CAR(
						((obj_t) BgL_cz00_49)) ==
					BGl_symbol2250z00zz__match_descriptionsz00));
		}

	}



/* &isVar? */
	obj_t BGl_z62isVarzf3z91zz__match_descriptionsz00(obj_t BgL_envz00_3587,
		obj_t BgL_cz00_3588)
	{
		{	/* Match/descr.scm 516 */
			return BGl_isVarzf3zf3zz__match_descriptionsz00(BgL_cz00_3588);
		}

	}



/* isNot? */
	BGL_EXPORTED_DEF obj_t BGl_isNotzf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_50)
	{
		{	/* Match/descr.scm 518 */
			return
				BBOOL(
				(CAR(
						((obj_t) BgL_cz00_50)) ==
					BGl_symbol2266z00zz__match_descriptionsz00));
		}

	}



/* &isNot? */
	obj_t BGl_z62isNotzf3z91zz__match_descriptionsz00(obj_t BgL_envz00_3589,
		obj_t BgL_cz00_3590)
	{
		{	/* Match/descr.scm 518 */
			return BGl_isNotzf3zf3zz__match_descriptionsz00(BgL_cz00_3590);
		}

	}



/* isAnd? */
	BGL_EXPORTED_DEF obj_t BGl_isAndzf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_51)
	{
		{	/* Match/descr.scm 520 */
			return
				BBOOL(
				(CAR(
						((obj_t) BgL_cz00_51)) ==
					BGl_symbol2238z00zz__match_descriptionsz00));
		}

	}



/* &isAnd? */
	obj_t BGl_z62isAndzf3z91zz__match_descriptionsz00(obj_t BgL_envz00_3591,
		obj_t BgL_cz00_3592)
	{
		{	/* Match/descr.scm 520 */
			return BGl_isAndzf3zf3zz__match_descriptionsz00(BgL_cz00_3592);
		}

	}



/* isOr? */
	BGL_EXPORTED_DEF obj_t BGl_isOrzf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_52)
	{
		{	/* Match/descr.scm 522 */
			return
				BBOOL(
				(CAR(
						((obj_t) BgL_cz00_52)) ==
					BGl_symbol2234z00zz__match_descriptionsz00));
		}

	}



/* &isOr? */
	obj_t BGl_z62isOrzf3z91zz__match_descriptionsz00(obj_t BgL_envz00_3593,
		obj_t BgL_cz00_3594)
	{
		{	/* Match/descr.scm 522 */
			return BGl_isOrzf3zf3zz__match_descriptionsz00(BgL_cz00_3594);
		}

	}



/* isT-Or? */
	BGL_EXPORTED_DEF obj_t BGl_isTzd2Orzf3z21zz__match_descriptionsz00(obj_t
		BgL_cz00_53)
	{
		{	/* Match/descr.scm 524 */
			return
				BBOOL(
				(CAR(
						((obj_t) BgL_cz00_53)) ==
					BGl_symbol2236z00zz__match_descriptionsz00));
		}

	}



/* &isT-Or? */
	obj_t BGl_z62isTzd2Orzf3z43zz__match_descriptionsz00(obj_t BgL_envz00_3595,
		obj_t BgL_cz00_3596)
	{
		{	/* Match/descr.scm 524 */
			return BGl_isTzd2Orzf3z21zz__match_descriptionsz00(BgL_cz00_3596);
		}

	}



/* isTagged-Or? */
	BGL_EXPORTED_DEF obj_t BGl_isTaggedzd2Orzf3z21zz__match_descriptionsz00(obj_t
		BgL_cz00_54)
	{
		{	/* Match/descr.scm 526 */
			return
				BBOOL(
				(CAR(
						((obj_t) BgL_cz00_54)) ==
					BGl_symbol2283z00zz__match_descriptionsz00));
		}

	}



/* &isTagged-Or? */
	obj_t BGl_z62isTaggedzd2Orzf3z43zz__match_descriptionsz00(obj_t
		BgL_envz00_3597, obj_t BgL_cz00_3598)
	{
		{	/* Match/descr.scm 526 */
			return BGl_isTaggedzd2Orzf3z21zz__match_descriptionsz00(BgL_cz00_3598);
		}

	}



/* isCons? */
	BGL_EXPORTED_DEF obj_t BGl_isConszf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_55)
	{
		{	/* Match/descr.scm 528 */
			return
				BBOOL(
				(CAR(
						((obj_t) BgL_cz00_55)) ==
					BGl_symbol2241z00zz__match_descriptionsz00));
		}

	}



/* &isCons? */
	obj_t BGl_z62isConszf3z91zz__match_descriptionsz00(obj_t BgL_envz00_3599,
		obj_t BgL_cz00_3600)
	{
		{	/* Match/descr.scm 528 */
			return BGl_isConszf3zf3zz__match_descriptionsz00(BgL_cz00_3600);
		}

	}



/* isACons? */
	BGL_EXPORTED_DEF obj_t BGl_isAConszf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_56)
	{
		{	/* Match/descr.scm 530 */
			return
				BBOOL(
				(CAR(
						((obj_t) BgL_cz00_56)) ==
					BGl_symbol2274z00zz__match_descriptionsz00));
		}

	}



/* &isACons? */
	obj_t BGl_z62isAConszf3z91zz__match_descriptionsz00(obj_t BgL_envz00_3601,
		obj_t BgL_cz00_3602)
	{
		{	/* Match/descr.scm 530 */
			return BGl_isAConszf3zf3zz__match_descriptionsz00(BgL_cz00_3602);
		}

	}



/* isXCons? */
	BGL_EXPORTED_DEF obj_t BGl_isXConszf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_57)
	{
		{	/* Match/descr.scm 532 */
			return
				BBOOL(
				(CAR(
						((obj_t) BgL_cz00_57)) ==
					BGl_symbol2276z00zz__match_descriptionsz00));
		}

	}



/* &isXCons? */
	obj_t BGl_z62isXConszf3z91zz__match_descriptionsz00(obj_t BgL_envz00_3603,
		obj_t BgL_cz00_3604)
	{
		{	/* Match/descr.scm 532 */
			return BGl_isXConszf3zf3zz__match_descriptionsz00(BgL_cz00_3604);
		}

	}



/* isTimes? */
	BGL_EXPORTED_DEF obj_t BGl_isTimeszf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_58)
	{
		{	/* Match/descr.scm 534 */
			return
				BBOOL(
				(CAR(
						((obj_t) BgL_cz00_58)) ==
					BGl_symbol2248z00zz__match_descriptionsz00));
		}

	}



/* &isTimes? */
	obj_t BGl_z62isTimeszf3z91zz__match_descriptionsz00(obj_t BgL_envz00_3605,
		obj_t BgL_cz00_3606)
	{
		{	/* Match/descr.scm 534 */
			return BGl_isTimeszf3zf3zz__match_descriptionsz00(BgL_cz00_3606);
		}

	}



/* containsHole? */
	BGL_EXPORTED_DEF obj_t BGl_containsHolezf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_59)
	{
		{	/* Match/descr.scm 536 */
			return
				BBOOL(
				(CAR(
						((obj_t) BgL_cz00_59)) ==
					BGl_symbol2295z00zz__match_descriptionsz00));
		}

	}



/* &containsHole? */
	obj_t BGl_z62containsHolezf3z91zz__match_descriptionsz00(obj_t
		BgL_envz00_3607, obj_t BgL_cz00_3608)
	{
		{	/* Match/descr.scm 536 */
			return BGl_containsHolezf3zf3zz__match_descriptionsz00(BgL_cz00_3608);
		}

	}



/* isHole? */
	BGL_EXPORTED_DEF obj_t BGl_isHolezf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_60)
	{
		{	/* Match/descr.scm 538 */
			return
				BBOOL(
				(CAR(
						((obj_t) BgL_cz00_60)) ==
					BGl_symbol2295z00zz__match_descriptionsz00));
		}

	}



/* &isHole? */
	obj_t BGl_z62isHolezf3z91zz__match_descriptionsz00(obj_t BgL_envz00_3609,
		obj_t BgL_cz00_3610)
	{
		{	/* Match/descr.scm 538 */
			return BGl_isHolezf3zf3zz__match_descriptionsz00(BgL_cz00_3610);
		}

	}



/* isTree? */
	BGL_EXPORTED_DEF obj_t BGl_isTreezf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_61)
	{
		{	/* Match/descr.scm 540 */
			return
				BBOOL(
				(CAR(
						((obj_t) BgL_cz00_61)) ==
					BGl_symbol2246z00zz__match_descriptionsz00));
		}

	}



/* &isTree? */
	obj_t BGl_z62isTreezf3z91zz__match_descriptionsz00(obj_t BgL_envz00_3611,
		obj_t BgL_cz00_3612)
	{
		{	/* Match/descr.scm 540 */
			return BGl_isTreezf3zf3zz__match_descriptionsz00(BgL_cz00_3612);
		}

	}



/* isVector? */
	BGL_EXPORTED_DEF obj_t BGl_isVectorzf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_62)
	{
		{	/* Match/descr.scm 542 */
			return
				BBOOL(
				(CAR(
						((obj_t) BgL_cz00_62)) ==
					BGl_symbol2286z00zz__match_descriptionsz00));
		}

	}



/* &isVector? */
	obj_t BGl_z62isVectorzf3z91zz__match_descriptionsz00(obj_t BgL_envz00_3613,
		obj_t BgL_cz00_3614)
	{
		{	/* Match/descr.scm 542 */
			return BGl_isVectorzf3zf3zz__match_descriptionsz00(BgL_cz00_3614);
		}

	}



/* isVector-begin? */
	BGL_EXPORTED_DEF obj_t
		BGl_isVectorzd2beginzf3z21zz__match_descriptionsz00(obj_t BgL_cz00_63)
	{
		{	/* Match/descr.scm 544 */
			return
				BBOOL(
				(CAR(
						((obj_t) BgL_cz00_63)) ==
					BGl_symbol2252z00zz__match_descriptionsz00));
		}

	}



/* &isVector-begin? */
	obj_t BGl_z62isVectorzd2beginzf3z43zz__match_descriptionsz00(obj_t
		BgL_envz00_3615, obj_t BgL_cz00_3616)
	{
		{	/* Match/descr.scm 544 */
			return BGl_isVectorzd2beginzf3z21zz__match_descriptionsz00(BgL_cz00_3616);
		}

	}



/* isVector-end? */
	BGL_EXPORTED_DEF obj_t BGl_isVectorzd2endzf3z21zz__match_descriptionsz00(obj_t
		BgL_cz00_64)
	{
		{	/* Match/descr.scm 546 */
			return
				BBOOL(
				(CAR(
						((obj_t) BgL_cz00_64)) ==
					BGl_symbol2254z00zz__match_descriptionsz00));
		}

	}



/* &isVector-end? */
	obj_t BGl_z62isVectorzd2endzf3z43zz__match_descriptionsz00(obj_t
		BgL_envz00_3617, obj_t BgL_cz00_3618)
	{
		{	/* Match/descr.scm 546 */
			return BGl_isVectorzd2endzf3z21zz__match_descriptionsz00(BgL_cz00_3618);
		}

	}



/* vector-plus */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2pluszd2zz__match_descriptionsz00(obj_t
		BgL_vz00_65, obj_t BgL_iz00_66, obj_t BgL_dz00_67)
	{
		{	/* Match/descr.scm 555 */
			{	/* Match/descr.scm 556 */
				bool_t BgL_test2488z00_5200;

				{	/* Match/descr.scm 556 */
					long BgL_arg1738z00_1708;

					{	/* Match/descr.scm 556 */
						obj_t BgL_arg1739z00_1709;

						{	/* Match/descr.scm 556 */
							obj_t BgL_pairz00_2928;

							{	/* Match/descr.scm 556 */
								obj_t BgL_pairz00_2927;

								BgL_pairz00_2927 = CDR(((obj_t) BgL_vz00_65));
								BgL_pairz00_2928 = CDR(BgL_pairz00_2927);
							}
							BgL_arg1739z00_1709 = CAR(BgL_pairz00_2928);
						}
						BgL_arg1738z00_1708 = VECTOR_LENGTH(((obj_t) BgL_arg1739z00_1709));
					}
					BgL_test2488z00_5200 =
						((long) CINT(BgL_iz00_66) >= BgL_arg1738z00_1708);
				}
				if (BgL_test2488z00_5200)
					{	/* Match/descr.scm 557 */
						obj_t BgL_arg1734z00_1705;
						obj_t BgL_arg1736z00_1706;

						{	/* Match/descr.scm 557 */
							obj_t BgL_pairz00_2936;

							BgL_pairz00_2936 = CDR(((obj_t) BgL_vz00_65));
							BgL_arg1734z00_1705 = CDR(BgL_pairz00_2936);
						}
						{	/* Match/descr.scm 558 */
							obj_t BgL_arg1737z00_1707;

							{	/* Match/descr.scm 558 */
								obj_t BgL_pairz00_2942;

								{	/* Match/descr.scm 558 */
									obj_t BgL_pairz00_2941;

									BgL_pairz00_2941 = CDR(((obj_t) BgL_vz00_65));
									BgL_pairz00_2942 = CDR(BgL_pairz00_2941);
								}
								BgL_arg1737z00_1707 = CAR(BgL_pairz00_2942);
							}
							{	/* Match/descr.scm 558 */
								obj_t BgL_fillz00_2943;

								BgL_fillz00_2943 = BGl_list2268z00zz__match_descriptionsz00;
								{	/* Match/descr.scm 582 */
									obj_t BgL_resz00_2944;

									{	/* Match/descr.scm 583 */
										obj_t BgL_newzd2vectorzd2_2945;

										BgL_newzd2vectorzd2_2945 =
											make_vector((long) CINT(BgL_iz00_66), BgL_fillz00_2943);
										{
											long BgL_iz00_2947;

											BgL_iz00_2947 = ((long) 0);
										BgL_loopz00_2946:
											if (
												(BgL_iz00_2947 ==
													VECTOR_LENGTH(((obj_t) BgL_arg1737z00_1707))))
												{	/* Match/descr.scm 585 */
													BgL_resz00_2944 = BgL_newzd2vectorzd2_2945;
												}
											else
												{	/* Match/descr.scm 585 */
													{	/* Match/descr.scm 588 */
														obj_t BgL_arg1777z00_2950;

														BgL_arg1777z00_2950 =
															VECTOR_REF(
															((obj_t) BgL_arg1737z00_1707), BgL_iz00_2947);
														VECTOR_SET(BgL_newzd2vectorzd2_2945, BgL_iz00_2947,
															BgL_arg1777z00_2950);
													}
													{
														long BgL_iz00_5225;

														BgL_iz00_5225 = (BgL_iz00_2947 + ((long) 1));
														BgL_iz00_2947 = BgL_iz00_5225;
														goto BgL_loopz00_2946;
													}
												}
										}
									}
									BgL_arg1736z00_1706 = BgL_resz00_2944;
								}
							}
						}
						{	/* Match/descr.scm 557 */
							obj_t BgL_tmpz00_5227;

							BgL_tmpz00_5227 = ((obj_t) BgL_arg1734z00_1705);
							SET_CAR(BgL_tmpz00_5227, BgL_arg1736z00_1706);
						}
					}
				else
					{	/* Match/descr.scm 556 */
						BTRUE;
					}
			}
			{	/* Match/descr.scm 560 */
				obj_t BgL_resz00_1710;

				{	/* Match/descr.scm 560 */
					obj_t BgL_arg1744z00_1715;

					{	/* Match/descr.scm 560 */
						long BgL_arg1745z00_1716;
						obj_t BgL_arg1746z00_1717;

						{	/* Match/descr.scm 560 */
							obj_t BgL_arg1747z00_1718;

							{	/* Match/descr.scm 560 */
								obj_t BgL_pairz00_2968;

								{	/* Match/descr.scm 560 */
									obj_t BgL_pairz00_2967;

									BgL_pairz00_2967 = CDR(((obj_t) BgL_vz00_65));
									BgL_pairz00_2968 = CDR(BgL_pairz00_2967);
								}
								BgL_arg1747z00_1718 = CAR(BgL_pairz00_2968);
							}
							BgL_arg1745z00_1716 =
								VECTOR_LENGTH(((obj_t) BgL_arg1747z00_1718));
						}
						{	/* Match/descr.scm 561 */
							obj_t BgL_arg1748z00_1719;

							{	/* Match/descr.scm 561 */
								obj_t BgL_arg1750z00_1720;

								{	/* Match/descr.scm 561 */
									obj_t BgL_arg1751z00_1721;

									{	/* Match/descr.scm 561 */
										obj_t BgL_pairz00_2975;

										{	/* Match/descr.scm 561 */
											obj_t BgL_pairz00_2974;

											BgL_pairz00_2974 = CDR(((obj_t) BgL_vz00_65));
											BgL_pairz00_2975 = CDR(BgL_pairz00_2974);
										}
										BgL_arg1751z00_1721 = CAR(BgL_pairz00_2975);
									}
									BgL_arg1750z00_1720 =
										BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00
										(BgL_arg1751z00_1721);
								}
								BgL_arg1748z00_1719 =
									BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
									(BgL_arg1750z00_1720);
							}
							BgL_arg1746z00_1717 = MAKE_YOUNG_PAIR(BgL_arg1748z00_1719, BNIL);
						}
						BgL_arg1744z00_1715 =
							MAKE_YOUNG_PAIR(BINT(BgL_arg1745z00_1716), BgL_arg1746z00_1717);
					}
					BgL_resz00_1710 =
						MAKE_YOUNG_PAIR(BGl_symbol2286z00zz__match_descriptionsz00,
						BgL_arg1744z00_1715);
				}
				{	/* Match/descr.scm 562 */
					obj_t BgL_arg1740z00_1711;
					obj_t BgL_arg1741z00_1712;

					BgL_arg1740z00_1711 = CAR(CDR(CDR(BgL_resz00_1710)));
					{	/* Match/descr.scm 563 */
						obj_t BgL_arg1742z00_1713;

						{	/* Match/descr.scm 563 */
							obj_t BgL_arg1743z00_1714;

							{	/* Match/descr.scm 563 */
								obj_t BgL_pairz00_2987;

								{	/* Match/descr.scm 563 */
									obj_t BgL_pairz00_2986;

									BgL_pairz00_2986 = CDR(((obj_t) BgL_vz00_65));
									BgL_pairz00_2987 = CDR(BgL_pairz00_2986);
								}
								BgL_arg1743z00_1714 = CAR(BgL_pairz00_2987);
							}
							{	/* Match/descr.scm 563 */
								long BgL_kz00_2989;

								BgL_kz00_2989 = (long) CINT(BgL_iz00_66);
								BgL_arg1742z00_1713 =
									VECTOR_REF(((obj_t) BgL_arg1743z00_1714), BgL_kz00_2989);
						}}
						BgL_arg1741z00_1712 =
							BGl_patternzd2pluszd2zz__match_descriptionsz00
							(BgL_arg1742z00_1713, BgL_dz00_67);
					}
					{	/* Match/descr.scm 562 */
						long BgL_kz00_2991;

						BgL_kz00_2991 = (long) CINT(BgL_iz00_66);
						VECTOR_SET(
							((obj_t) BgL_arg1740z00_1711), BgL_kz00_2991,
							BgL_arg1741z00_1712);
				}}
				return BgL_resz00_1710;
			}
		}

	}



/* &vector-plus */
	obj_t BGl_z62vectorzd2pluszb0zz__match_descriptionsz00(obj_t BgL_envz00_3619,
		obj_t BgL_vz00_3620, obj_t BgL_iz00_3621, obj_t BgL_dz00_3622)
	{
		{	/* Match/descr.scm 555 */
			return
				BGl_vectorzd2pluszd2zz__match_descriptionsz00(BgL_vz00_3620,
				BgL_iz00_3621, BgL_dz00_3622);
		}

	}



/* vector-minus */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2minuszd2zz__match_descriptionsz00(obj_t
		BgL_vz00_68, obj_t BgL_iz00_69, obj_t BgL_dz00_70)
	{
		{	/* Match/descr.scm 566 */
			{	/* Match/descr.scm 567 */
				bool_t BgL_test2490z00_5261;

				{	/* Match/descr.scm 567 */
					long BgL_arg1760z00_1728;

					{	/* Match/descr.scm 567 */
						obj_t BgL_arg1761z00_1729;

						{	/* Match/descr.scm 567 */
							obj_t BgL_pairz00_2997;

							{	/* Match/descr.scm 567 */
								obj_t BgL_pairz00_2996;

								BgL_pairz00_2996 = CDR(((obj_t) BgL_vz00_68));
								BgL_pairz00_2997 = CDR(BgL_pairz00_2996);
							}
							BgL_arg1761z00_1729 = CAR(BgL_pairz00_2997);
						}
						BgL_arg1760z00_1728 = VECTOR_LENGTH(((obj_t) BgL_arg1761z00_1729));
					}
					BgL_test2490z00_5261 =
						((long) CINT(BgL_iz00_69) >= BgL_arg1760z00_1728);
				}
				if (BgL_test2490z00_5261)
					{	/* Match/descr.scm 568 */
						obj_t BgL_arg1756z00_1725;
						obj_t BgL_arg1757z00_1726;

						{	/* Match/descr.scm 568 */
							obj_t BgL_pairz00_3005;

							BgL_pairz00_3005 = CDR(((obj_t) BgL_vz00_68));
							BgL_arg1756z00_1725 = CDR(BgL_pairz00_3005);
						}
						{	/* Match/descr.scm 569 */
							obj_t BgL_arg1759z00_1727;

							{	/* Match/descr.scm 569 */
								obj_t BgL_pairz00_3011;

								{	/* Match/descr.scm 569 */
									obj_t BgL_pairz00_3010;

									BgL_pairz00_3010 = CDR(((obj_t) BgL_vz00_68));
									BgL_pairz00_3011 = CDR(BgL_pairz00_3010);
								}
								BgL_arg1759z00_1727 = CAR(BgL_pairz00_3011);
							}
							{	/* Match/descr.scm 569 */
								obj_t BgL_fillz00_3012;

								BgL_fillz00_3012 = BGl_list2268z00zz__match_descriptionsz00;
								{	/* Match/descr.scm 582 */
									obj_t BgL_resz00_3013;

									{	/* Match/descr.scm 583 */
										obj_t BgL_newzd2vectorzd2_3014;

										BgL_newzd2vectorzd2_3014 =
											make_vector((long) CINT(BgL_iz00_69), BgL_fillz00_3012);
										{
											long BgL_iz00_3016;

											BgL_iz00_3016 = ((long) 0);
										BgL_loopz00_3015:
											if (
												(BgL_iz00_3016 ==
													VECTOR_LENGTH(((obj_t) BgL_arg1759z00_1727))))
												{	/* Match/descr.scm 585 */
													BgL_resz00_3013 = BgL_newzd2vectorzd2_3014;
												}
											else
												{	/* Match/descr.scm 585 */
													{	/* Match/descr.scm 588 */
														obj_t BgL_arg1777z00_3019;

														BgL_arg1777z00_3019 =
															VECTOR_REF(
															((obj_t) BgL_arg1759z00_1727), BgL_iz00_3016);
														VECTOR_SET(BgL_newzd2vectorzd2_3014, BgL_iz00_3016,
															BgL_arg1777z00_3019);
													}
													{
														long BgL_iz00_5286;

														BgL_iz00_5286 = (BgL_iz00_3016 + ((long) 1));
														BgL_iz00_3016 = BgL_iz00_5286;
														goto BgL_loopz00_3015;
													}
												}
										}
									}
									BgL_arg1757z00_1726 = BgL_resz00_3013;
								}
							}
						}
						{	/* Match/descr.scm 568 */
							obj_t BgL_tmpz00_5288;

							BgL_tmpz00_5288 = ((obj_t) BgL_arg1756z00_1725);
							SET_CAR(BgL_tmpz00_5288, BgL_arg1757z00_1726);
						}
					}
				else
					{	/* Match/descr.scm 567 */
						BTRUE;
					}
			}
			{	/* Match/descr.scm 571 */
				obj_t BgL_resz00_1730;

				{	/* Match/descr.scm 571 */
					obj_t BgL_arg1766z00_1735;

					{	/* Match/descr.scm 571 */
						long BgL_arg1768z00_1736;
						obj_t BgL_arg1769z00_1737;

						{	/* Match/descr.scm 571 */
							obj_t BgL_auxz00_5291;

							{	/* Match/descr.scm 571 */
								obj_t BgL_pairz00_3037;

								{	/* Match/descr.scm 571 */
									obj_t BgL_pairz00_3036;

									BgL_pairz00_3036 = CDR(((obj_t) BgL_vz00_68));
									BgL_pairz00_3037 = CDR(BgL_pairz00_3036);
								}
								BgL_auxz00_5291 = CAR(BgL_pairz00_3037);
							}
							BgL_arg1768z00_1736 = bgl_list_length(BgL_auxz00_5291);
						}
						{	/* Match/descr.scm 572 */
							obj_t BgL_arg1771z00_1739;

							{	/* Match/descr.scm 572 */
								obj_t BgL_arg1772z00_1740;

								{	/* Match/descr.scm 572 */
									obj_t BgL_arg1773z00_1741;

									{	/* Match/descr.scm 572 */
										obj_t BgL_pairz00_3043;

										{	/* Match/descr.scm 572 */
											obj_t BgL_pairz00_3042;

											BgL_pairz00_3042 = CDR(((obj_t) BgL_vz00_68));
											BgL_pairz00_3043 = CDR(BgL_pairz00_3042);
										}
										BgL_arg1773z00_1741 = CAR(BgL_pairz00_3043);
									}
									BgL_arg1772z00_1740 =
										BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00
										(BgL_arg1773z00_1741);
								}
								BgL_arg1771z00_1739 =
									BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
									(BgL_arg1772z00_1740);
							}
							BgL_arg1769z00_1737 = MAKE_YOUNG_PAIR(BgL_arg1771z00_1739, BNIL);
						}
						BgL_arg1766z00_1735 =
							MAKE_YOUNG_PAIR(BINT(BgL_arg1768z00_1736), BgL_arg1769z00_1737);
					}
					BgL_resz00_1730 =
						MAKE_YOUNG_PAIR(BGl_symbol2286z00zz__match_descriptionsz00,
						BgL_arg1766z00_1735);
				}
				{	/* Match/descr.scm 573 */
					obj_t BgL_arg1762z00_1731;
					obj_t BgL_arg1763z00_1732;

					BgL_arg1762z00_1731 = CAR(CDR(CDR(BgL_resz00_1730)));
					{	/* Match/descr.scm 574 */
						obj_t BgL_arg1764z00_1733;

						{	/* Match/descr.scm 574 */
							obj_t BgL_arg1765z00_1734;

							{	/* Match/descr.scm 574 */
								obj_t BgL_pairz00_3055;

								{	/* Match/descr.scm 574 */
									obj_t BgL_pairz00_3054;

									BgL_pairz00_3054 = CDR(((obj_t) BgL_vz00_68));
									BgL_pairz00_3055 = CDR(BgL_pairz00_3054);
								}
								BgL_arg1765z00_1734 = CAR(BgL_pairz00_3055);
							}
							{	/* Match/descr.scm 574 */
								long BgL_kz00_3057;

								BgL_kz00_3057 = (long) CINT(BgL_iz00_69);
								BgL_arg1764z00_1733 =
									VECTOR_REF(((obj_t) BgL_arg1765z00_1734), BgL_kz00_3057);
						}}
						BgL_arg1763z00_1732 =
							BGl_patternzd2minuszd2zz__match_descriptionsz00
							(BgL_arg1764z00_1733, BgL_dz00_70);
					}
					{	/* Match/descr.scm 573 */
						long BgL_kz00_3059;

						BgL_kz00_3059 = (long) CINT(BgL_iz00_69);
						VECTOR_SET(
							((obj_t) BgL_arg1762z00_1731), BgL_kz00_3059,
							BgL_arg1763z00_1732);
				}}
				return BgL_resz00_1730;
			}
		}

	}



/* &vector-minus */
	obj_t BGl_z62vectorzd2minuszb0zz__match_descriptionsz00(obj_t BgL_envz00_3623,
		obj_t BgL_vz00_3624, obj_t BgL_iz00_3625, obj_t BgL_dz00_3626)
	{
		{	/* Match/descr.scm 566 */
			return
				BGl_vectorzd2minuszd2zz__match_descriptionsz00(BgL_vz00_3624,
				BgL_iz00_3625, BgL_dz00_3626);
		}

	}



/* extend-vector */
	BGL_EXPORTED_DEF obj_t BGl_extendzd2vectorzd2zz__match_descriptionsz00(obj_t
		BgL_vz00_71, obj_t BgL_lgz00_72, obj_t BgL_fillz00_73)
	{
		{	/* Match/descr.scm 581 */
			{	/* Match/descr.scm 582 */
				obj_t BgL_resz00_3060;

				{	/* Match/descr.scm 583 */
					obj_t BgL_newzd2vectorzd2_3061;

					BgL_newzd2vectorzd2_3061 =
						make_vector((long) CINT(BgL_lgz00_72), BgL_fillz00_73);
					{
						long BgL_iz00_3079;

						BgL_iz00_3079 = ((long) 0);
					BgL_loopz00_3078:
						if ((BgL_iz00_3079 == VECTOR_LENGTH(((obj_t) BgL_vz00_71))))
							{	/* Match/descr.scm 585 */
								BgL_resz00_3060 = BgL_newzd2vectorzd2_3061;
							}
						else
							{	/* Match/descr.scm 585 */
								{	/* Match/descr.scm 588 */
									obj_t BgL_arg1777z00_3086;

									BgL_arg1777z00_3086 =
										VECTOR_REF(((obj_t) BgL_vz00_71), BgL_iz00_3079);
									VECTOR_SET(BgL_newzd2vectorzd2_3061, BgL_iz00_3079,
										BgL_arg1777z00_3086);
								}
								{
									long BgL_iz00_5331;

									BgL_iz00_5331 = (BgL_iz00_3079 + ((long) 1));
									BgL_iz00_3079 = BgL_iz00_5331;
									goto BgL_loopz00_3078;
								}
							}
					}
				}
				return BgL_resz00_3060;
			}
		}

	}



/* &extend-vector */
	obj_t BGl_z62extendzd2vectorzb0zz__match_descriptionsz00(obj_t
		BgL_envz00_3627, obj_t BgL_vz00_3628, obj_t BgL_lgz00_3629,
		obj_t BgL_fillz00_3630)
	{
		{	/* Match/descr.scm 581 */
			return
				BGl_extendzd2vectorzd2zz__match_descriptionsz00(BgL_vz00_3628,
				BgL_lgz00_3629, BgL_fillz00_3630);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__match_descriptionsz00()
	{
		{	/* Match/descr.scm 12 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__match_descriptionsz00()
	{
		{	/* Match/descr.scm 12 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__match_descriptionsz00()
	{
		{	/* Match/descr.scm 12 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__match_descriptionsz00()
	{
		{	/* Match/descr.scm 12 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2297z00zz__match_descriptionsz00));
			BGl_modulezd2initializa7ationz75zz__match_s2cfunz00(((long) 509060642),
				BSTRING_TO_STRING(BGl_string2297z00zz__match_descriptionsz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2297z00zz__match_descriptionsz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string2297z00zz__match_descriptionsz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string2297z00zz__match_descriptionsz00));
			return
				BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string2297z00zz__match_descriptionsz00));
		}

	}

#ifdef __cplusplus
}
#endif
