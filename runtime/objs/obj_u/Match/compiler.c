/*===========================================================================*/
/*   (Match/compiler.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Match/compiler.scm -indent -o objs/obj_u/Match/compiler.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_patternzd2pluszd2zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31578ze3ze5zz__match_compilerz00(obj_t,
		obj_t);
	static obj_t BGl_dzd2initzd2zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_buildzd2ifzd2zz__match_compilerz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31676ze3ze5zz__match_compilerz00(obj_t,
		obj_t);
	static obj_t BGl_compilez00zz__match_compilerz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__match_compilerz00 = BUNSPEC;
	extern obj_t BGl_morezd2precisezf3z21zz__match_descriptionsz00(obj_t, obj_t);
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static bool_t BGl_isDirectCallzf3zf3zz__match_compilerz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__match_compilerz00();
	extern obj_t BGl_jimzd2gensymzd2zz__match_s2cfunz00;
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__match_compilerz00();
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_rzd2initzd2zz__match_compilerz00 = BUNSPEC;
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__match_compilerz00();
	static obj_t BGl_integersz00zz__match_compilerz00(long, long);
	extern bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_compilezd2vectorzd2consz00zz__match_compilerz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_extendzd2vectorzd2zz__match_descriptionsz00(obj_t, obj_t,
		obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t make_vector(long, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31644ze32255ze5zz__match_compilerz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__match_compilerz00();
	static obj_t BGl_countzd2occurrenceszd2zz__match_compilerz00(obj_t, obj_t,
		long);
	static obj_t BGl_list2256z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_list2346z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_list2347z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_z62kzd2initzb0zz__match_compilerz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31610ze3ze5zz__match_compilerz00(obj_t,
		obj_t);
	static obj_t BGl_buildzd2atomzd2equalityzd2testzd2zz__match_compilerz00(obj_t,
		obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31603ze3ze5zz__match_compilerz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62pcompilez62zz__match_compilerz00(obj_t, obj_t);
	extern obj_t BGl_compatiblezf3zf3zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_succeszd2conszd2zz__match_compilerz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_compileza2za2zz__match_compilerz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31621ze3ze5zz__match_compilerz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31613ze3ze5zz__match_compilerz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31516ze3ze5zz__match_compilerz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31630ze3ze5zz__match_compilerz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31371ze3ze5zz__match_compilerz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_compilezd2timeszd2zz__match_compilerz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__match_compilerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_descriptionsz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_s2cfunz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_z62zc3z04anonymousza31380ze3ze5zz__match_compilerz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31356ze3ze5zz__match_compilerz00(obj_t,
		obj_t, obj_t, obj_t);
	extern bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31462ze3ze5zz__match_compilerz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31381ze3ze5zz__match_compilerz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31357ze3ze5zz__match_compilerz00(obj_t,
		obj_t);
	extern obj_t BGl_patternzd2carzd2zz__match_descriptionsz00(obj_t);
	extern obj_t BGl_vectorzd2pluszd2zz__match_descriptionsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_extendza2za2zz__match_compilerz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__match_compilerz00();
	extern obj_t BGl_patternzd2minuszd2zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_symbol2302z00zz__match_compilerz00 = BUNSPEC;
	extern long bgl_list_length(obj_t);
	static obj_t BGl_symbol2306z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2308z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_z62instanciatezd2tryzb0zz__match_compilerz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__match_compilerz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__match_compilerz00();
	static obj_t BGl_z62zc3z04anonymousza31472ze3ze5zz__match_compilerz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31391ze3ze5zz__match_compilerz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31383ze3ze5zz__match_compilerz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2310z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2312z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2314z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2316z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2318z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_unfoldz00zz__match_compilerz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62mzd2initzb0zz__match_compilerz00(obj_t, obj_t);
	static obj_t BGl_symbol2320z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31368ze3ze5zz__match_compilerz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2322z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2324z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2326z00zz__match_compilerz00 = BUNSPEC;
	extern obj_t BGl_patternzd2cdrzd2zz__match_descriptionsz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31644ze3ze5zz__match_compilerz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31393ze3ze5zz__match_compilerz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31458ze3ze5zz__match_compilerz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2330z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31369ze3ze5zz__match_compilerz00(obj_t,
		obj_t);
	static obj_t BGl_z62za7zd2initz17zz__match_compilerz00(obj_t, obj_t);
	static obj_t BGl_symbol2332z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_compilezd2varzd2zz__match_compilerz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2336z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2257z00zz__match_compilerz00 = BUNSPEC;
	extern obj_t BGl_patternzd2variableszd2zz__match_descriptionsz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_pcompilez00zz__match_compilerz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31467ze3ze5zz__match_compilerz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31629ze3ze5zz__match_compilerz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2340z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2260z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2342z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_buildzd2letzd2zz__match_compilerz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2262z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2344z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2264z00zz__match_compilerz00 = BUNSPEC;
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_symbol2266z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2348z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2268z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2350z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2270z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2352z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2272z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2355z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2274z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2357z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2276z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2278z00zz__match_compilerz00 = BUNSPEC;
	extern obj_t BGl_atomzf3zf3zz__match_s2cfunz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31396ze3ze5zz__match_compilerz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2280z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2282z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2284z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2289z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_compilezd2orzd2zz__match_compilerz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31664ze3ze5zz__match_compilerz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2291z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2293z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2295z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2297z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2299z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31495ze3ze5zz__match_compilerz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_compilezd2vectorzd2beginz00zz__match_compilerz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31496ze3ze5zz__match_compilerz00(obj_t,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2300z00zz__match_compilerz00,
		BgL_bgl_string2300za700za7za7_2360za7, "vector-times", 12);
	      DEFINE_STRING(BGl_string2301z00zz__match_compilerz00,
		BgL_bgl_string2301za700za7za7_2361za7, "Not yet allowed", 15);
	      DEFINE_STRING(BGl_string2303z00zz__match_compilerz00,
		BgL_bgl_string2303za700za7za7_2362za7, "struct-pat", 10);
	      DEFINE_STRING(BGl_string2304z00zz__match_compilerz00,
		BgL_bgl_string2304za700za7za7_2363za7, "KAP-", 4);
	      DEFINE_STRING(BGl_string2305z00zz__match_compilerz00,
		BgL_bgl_string2305za700za7za7_2364za7, "Unrecognized pattern", 20);
	      DEFINE_STRING(BGl_string2307z00zz__match_compilerz00,
		BgL_bgl_string2307za700za7za7_2365za7, "vector-length", 13);
	      DEFINE_STRING(BGl_string2309z00zz__match_compilerz00,
		BgL_bgl_string2309za700za7za7_2366za7, "eq?", 3);
	      DEFINE_STRING(BGl_string2311z00zz__match_compilerz00,
		BgL_bgl_string2311za700za7za7_2367za7, "null?", 5);
	      DEFINE_STRING(BGl_string2313z00zz__match_compilerz00,
		BgL_bgl_string2313za700za7za7_2368za7, "flonum?", 7);
	      DEFINE_STRING(BGl_string2315z00zz__match_compilerz00,
		BgL_bgl_string2315za700za7za7_2369za7, "=fl", 3);
	      DEFINE_STRING(BGl_string2317z00zz__match_compilerz00,
		BgL_bgl_string2317za700za7za7_2370za7, "number?", 7);
	      DEFINE_STRING(BGl_string2319z00zz__match_compilerz00,
		BgL_bgl_string2319za700za7za7_2371za7, "=", 1);
	      DEFINE_STRING(BGl_string2321z00zz__match_compilerz00,
		BgL_bgl_string2321za700za7za7_2372za7, "string?", 7);
	      DEFINE_STRING(BGl_string2323z00zz__match_compilerz00,
		BgL_bgl_string2323za700za7za7_2373za7, "string=?", 8);
	      DEFINE_STRING(BGl_string2325z00zz__match_compilerz00,
		BgL_bgl_string2325za700za7za7_2374za7, "equal?", 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_mzd2initzd2envz00zz__match_compilerz00,
		BgL_bgl_za762mza7d2initza7b0za7za72375za7,
		BGl_z62mzd2initzb0zz__match_compilerz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2327z00zz__match_compilerz00,
		BgL_bgl_string2327za700za7za7_2376za7, "labels", 6);
	      DEFINE_STRING(BGl_string2328z00zz__match_compilerz00,
		BgL_bgl_string2328za700za7za7_2377za7, "KAP", 3);
	      DEFINE_STRING(BGl_string2329z00zz__match_compilerz00,
		BgL_bgl_string2329za700za7za7_2378za7, "TAG", 3);
	      DEFINE_STRING(BGl_string2331z00zz__match_compilerz00,
		BgL_bgl_string2331za700za7za7_2379za7, "unbound", 7);
	      DEFINE_STRING(BGl_string2333z00zz__match_compilerz00,
		BgL_bgl_string2333za700za7za7_2380za7, "let", 3);
	      DEFINE_STRING(BGl_string2334z00zz__match_compilerz00,
		BgL_bgl_string2334za700za7za7_2381za7, "CAR-", 4);
	      DEFINE_STRING(BGl_string2335z00zz__match_compilerz00,
		BgL_bgl_string2335za700za7za7_2382za7, "CDR-", 4);
	      DEFINE_STRING(BGl_string2337z00zz__match_compilerz00,
		BgL_bgl_string2337za700za7za7_2383za7, "letrec", 6);
	      DEFINE_STRING(BGl_string2338z00zz__match_compilerz00,
		BgL_bgl_string2338za700za7za7_2384za7, "G-", 2);
	      DEFINE_STRING(BGl_string2339z00zz__match_compilerz00,
		BgL_bgl_string2339za700za7za7_2385za7, "TRY-", 4);
	      DEFINE_STRING(BGl_string2258z00zz__match_compilerz00,
		BgL_bgl_string2258za700za7za7_2386za7, "any", 3);
	      DEFINE_STRING(BGl_string2259z00zz__match_compilerz00,
		BgL_bgl_string2259za700za7za7_2387za7, "E-", 2);
	      DEFINE_STRING(BGl_string2341z00zz__match_compilerz00,
		BgL_bgl_string2341za700za7za7_2388za7, "vector", 6);
	      DEFINE_STRING(BGl_string2261z00zz__match_compilerz00,
		BgL_bgl_string2261za700za7za7_2389za7, "lambda", 6);
	      DEFINE_STRING(BGl_string2343z00zz__match_compilerz00,
		BgL_bgl_string2343za700za7za7_2390za7, ">=", 2);
	      DEFINE_STRING(BGl_string2263z00zz__match_compilerz00,
		BgL_bgl_string2263za700za7za7_2391za7, "check", 5);
	      DEFINE_STRING(BGl_string2345z00zz__match_compilerz00,
		BgL_bgl_string2345za700za7za7_2392za7, "vector?", 7);
	      DEFINE_STRING(BGl_string2265z00zz__match_compilerz00,
		BgL_bgl_string2265za700za7za7_2393za7, "if", 2);
	      DEFINE_STRING(BGl_string2267z00zz__match_compilerz00,
		BgL_bgl_string2267za700za7za7_2394za7, "quote", 5);
	      DEFINE_STRING(BGl_string2349z00zz__match_compilerz00,
		BgL_bgl_string2349za700za7za7_2395za7, "vector-ref", 10);
	      DEFINE_STRING(BGl_string2269z00zz__match_compilerz00,
		BgL_bgl_string2269za700za7za7_2396za7, "var", 3);
	      DEFINE_STRING(BGl_string2351z00zz__match_compilerz00,
		BgL_bgl_string2351za700za7za7_2397za7, "struct-ref", 10);
	      DEFINE_STRING(BGl_string2271z00zz__match_compilerz00,
		BgL_bgl_string2271za700za7za7_2398za7, "not", 3);
	      DEFINE_STRING(BGl_string2353z00zz__match_compilerz00,
		BgL_bgl_string2353za700za7za7_2399za7, "dummy", 5);
	      DEFINE_STRING(BGl_string2354z00zz__match_compilerz00,
		BgL_bgl_string2354za700za7za7_2400za7, "No current repetition named", 27);
	      DEFINE_STRING(BGl_string2273z00zz__match_compilerz00,
		BgL_bgl_string2273za700za7za7_2401za7, "or", 2);
	      DEFINE_STRING(BGl_string2356z00zz__match_compilerz00,
		BgL_bgl_string2356za700za7za7_2402za7, "car", 3);
	      DEFINE_STRING(BGl_string2275z00zz__match_compilerz00,
		BgL_bgl_string2275za700za7za7_2403za7, "tagged-or", 9);
	      DEFINE_STRING(BGl_string2358z00zz__match_compilerz00,
		BgL_bgl_string2358za700za7za7_2404za7, "cdr", 3);
	      DEFINE_STRING(BGl_string2277z00zz__match_compilerz00,
		BgL_bgl_string2277za700za7za7_2405za7, "and", 3);
	      DEFINE_STRING(BGl_string2359z00zz__match_compilerz00,
		BgL_bgl_string2359za700za7za7_2406za7, "__match_compiler", 16);
	      DEFINE_STRING(BGl_string2279z00zz__match_compilerz00,
		BgL_bgl_string2279za700za7za7_2407za7, "cons", 4);
	      DEFINE_STRING(BGl_string2281z00zz__match_compilerz00,
		BgL_bgl_string2281za700za7za7_2408za7, "pair?", 5);
	      DEFINE_STRING(BGl_string2283z00zz__match_compilerz00,
		BgL_bgl_string2283za700za7za7_2409za7, "times", 5);
	      DEFINE_STRING(BGl_string2285z00zz__match_compilerz00,
		BgL_bgl_string2285za700za7za7_2410za7, "tree", 4);
	      DEFINE_STRING(BGl_string2286z00zz__match_compilerz00,
		BgL_bgl_string2286za700za7za7_2411za7, "Tree not yet allowed", 20);
	      DEFINE_STRING(BGl_string2287z00zz__match_compilerz00,
		BgL_bgl_string2287za700za7za7_2412za7, "Incorrect pattern: ", 19);
	      DEFINE_STRING(BGl_string2288z00zz__match_compilerz00,
		BgL_bgl_string2288za700za7za7_2413za7, " *** ", 5);
	      DEFINE_STRING(BGl_string2290z00zz__match_compilerz00,
		BgL_bgl_string2290za700za7za7_2414za7, "hole", 4);
	      DEFINE_STRING(BGl_string2292z00zz__match_compilerz00,
		BgL_bgl_string2292za700za7za7_2415za7, "vector-begin", 12);
	      DEFINE_STRING(BGl_string2294z00zz__match_compilerz00,
		BgL_bgl_string2294za700za7za7_2416za7, "vector-end", 10);
	      DEFINE_STRING(BGl_string2296z00zz__match_compilerz00,
		BgL_bgl_string2296za700za7za7_2417za7, "vector-any", 10);
	      DEFINE_STRING(BGl_string2298z00zz__match_compilerz00,
		BgL_bgl_string2298za700za7za7_2418za7, "vector-cons", 11);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_kzd2initzd2envz00zz__match_compilerz00,
		BgL_bgl_za762kza7d2initza7b0za7za72419za7,
		BGl_z62kzd2initzb0zz__match_compilerz00, 0L, BUNSPEC, 3);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_za7zd2initzd2envza7zz__match_compilerz00,
		BgL_bgl_za762za7a7za7d2initza7172420z00,
		BGl_z62za7zd2initz17zz__match_compilerz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pcompilezd2envzd2zz__match_compilerz00,
		BgL_bgl_za762pcompileza762za7za72421z00,
		BGl_z62pcompilez62zz__match_compilerz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_dzd2initzd2zz__match_compilerz00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_rzd2initzd2zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_list2256z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_list2346z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_list2347z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2302z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2306z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2308z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2310z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2312z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2314z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2316z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2318z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2320z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2322z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2324z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2326z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2330z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2332z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2336z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2257z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2340z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2260z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2342z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2262z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2344z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2264z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2266z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2348z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2268z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2350z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2270z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2352z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2272z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2355z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2274z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2357z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2276z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2278z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2280z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2282z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2284z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2289z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2291z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2293z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2295z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2297z00zz__match_compilerz00));
		     ADD_ROOT((void *) (&BGl_symbol2299z00zz__match_compilerz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__match_compilerz00(long
		BgL_checksumz00_3865, char *BgL_fromz00_3866)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__match_compilerz00))
				{
					BGl_requirezd2initializa7ationz75zz__match_compilerz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__match_compilerz00();
					BGl_cnstzd2initzd2zz__match_compilerz00();
					BGl_importedzd2moduleszd2initz00zz__match_compilerz00();
					return BGl_toplevelzd2initzd2zz__match_compilerz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__match_compilerz00()
	{
		{	/* Match/compiler.scm 26 */
			BGl_symbol2257z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2258z00zz__match_compilerz00);
			BGl_list2256z00zz__match_compilerz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2257z00zz__match_compilerz00, BNIL);
			BGl_symbol2260z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2261z00zz__match_compilerz00);
			BGl_symbol2262z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2263z00zz__match_compilerz00);
			BGl_symbol2264z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2265z00zz__match_compilerz00);
			BGl_symbol2266z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2267z00zz__match_compilerz00);
			BGl_symbol2268z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2269z00zz__match_compilerz00);
			BGl_symbol2270z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2271z00zz__match_compilerz00);
			BGl_symbol2272z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2273z00zz__match_compilerz00);
			BGl_symbol2274z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2275z00zz__match_compilerz00);
			BGl_symbol2276z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2277z00zz__match_compilerz00);
			BGl_symbol2278z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2279z00zz__match_compilerz00);
			BGl_symbol2280z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2281z00zz__match_compilerz00);
			BGl_symbol2282z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2283z00zz__match_compilerz00);
			BGl_symbol2284z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2285z00zz__match_compilerz00);
			BGl_symbol2289z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2290z00zz__match_compilerz00);
			BGl_symbol2291z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2292z00zz__match_compilerz00);
			BGl_symbol2293z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2294z00zz__match_compilerz00);
			BGl_symbol2295z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2296z00zz__match_compilerz00);
			BGl_symbol2297z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2298z00zz__match_compilerz00);
			BGl_symbol2299z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2300z00zz__match_compilerz00);
			BGl_symbol2302z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2303z00zz__match_compilerz00);
			BGl_symbol2306z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2307z00zz__match_compilerz00);
			BGl_symbol2308z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2309z00zz__match_compilerz00);
			BGl_symbol2310z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2311z00zz__match_compilerz00);
			BGl_symbol2312z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2313z00zz__match_compilerz00);
			BGl_symbol2314z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2315z00zz__match_compilerz00);
			BGl_symbol2316z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2317z00zz__match_compilerz00);
			BGl_symbol2318z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2319z00zz__match_compilerz00);
			BGl_symbol2320z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2321z00zz__match_compilerz00);
			BGl_symbol2322z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2323z00zz__match_compilerz00);
			BGl_symbol2324z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2325z00zz__match_compilerz00);
			BGl_symbol2326z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2327z00zz__match_compilerz00);
			BGl_symbol2330z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2331z00zz__match_compilerz00);
			BGl_symbol2332z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2333z00zz__match_compilerz00);
			BGl_symbol2336z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2337z00zz__match_compilerz00);
			BGl_symbol2340z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2341z00zz__match_compilerz00);
			BGl_symbol2342z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2343z00zz__match_compilerz00);
			BGl_symbol2344z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2345z00zz__match_compilerz00);
			BGl_list2347z00zz__match_compilerz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2340z00zz__match_compilerz00, BNIL);
			BGl_list2346z00zz__match_compilerz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2270z00zz__match_compilerz00,
				MAKE_YOUNG_PAIR(BGl_list2347z00zz__match_compilerz00, BNIL));
			BGl_symbol2348z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2349z00zz__match_compilerz00);
			BGl_symbol2350z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2351z00zz__match_compilerz00);
			BGl_symbol2352z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2353z00zz__match_compilerz00);
			BGl_symbol2355z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2356z00zz__match_compilerz00);
			return (BGl_symbol2357z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2358z00zz__match_compilerz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__match_compilerz00()
	{
		{	/* Match/compiler.scm 26 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__match_compilerz00()
	{
		{	/* Match/compiler.scm 26 */
			BGl_dzd2initzd2zz__match_compilerz00 =
				BGl_list2256z00zz__match_compilerz00;
			return (BGl_rzd2initzd2zz__match_compilerz00 = BNIL, BUNSPEC);
		}

	}



/* pcompile */
	BGL_EXPORTED_DEF obj_t BGl_pcompilez00zz__match_compilerz00(obj_t BgL_fz00_3)
	{
		{	/* Match/compiler.scm 64 */
			{	/* Match/compiler.scm 65 */
				obj_t BgL_sz00_1353;

				BgL_sz00_1353 =
					PROCEDURE_ENTRY(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
					(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
					BGl_string2259z00zz__match_compilerz00, BEOA);
				{	/* Match/compiler.scm 66 */
					obj_t BgL_arg1201z00_1354;

					{	/* Match/compiler.scm 66 */
						obj_t BgL_arg1208z00_1355;
						obj_t BgL_arg1211z00_1356;

						BgL_arg1208z00_1355 = MAKE_YOUNG_PAIR(BgL_sz00_1353, BNIL);
						BgL_arg1211z00_1356 =
							MAKE_YOUNG_PAIR(BGl_compilez00zz__match_compilerz00(BgL_fz00_3,
								BgL_sz00_1353, BNIL, BGl_mzd2initzd2envz00zz__match_compilerz00,
								BGl_kzd2initzd2envz00zz__match_compilerz00,
								BGl_za7zd2initzd2envza7zz__match_compilerz00,
								BGl_list2256z00zz__match_compilerz00), BNIL);
						BgL_arg1201z00_1354 =
							MAKE_YOUNG_PAIR(BgL_arg1208z00_1355, BgL_arg1211z00_1356);
					}
					return
						MAKE_YOUNG_PAIR(BGl_symbol2260z00zz__match_compilerz00,
						BgL_arg1201z00_1354);
				}
			}
		}

	}



/* &pcompile */
	obj_t BGl_z62pcompilez62zz__match_compilerz00(obj_t BgL_envz00_3518,
		obj_t BgL_fz00_3519)
	{
		{	/* Match/compiler.scm 64 */
			return BGl_pcompilez00zz__match_compilerz00(BgL_fz00_3519);
		}

	}



/* compile */
	obj_t BGl_compilez00zz__match_compilerz00(obj_t BgL_fz00_4, obj_t BgL_ez00_5,
		obj_t BgL_rz00_6, obj_t BgL_mz00_7, obj_t BgL_kz00_8, obj_t BgL_za7za7_9,
		obj_t BgL_dz00_10)
	{
		{	/* Match/compiler.scm 70 */
		BGl_compilez00zz__match_compilerz00:
			if (CBOOL(BGl_morezd2precisezf3z21zz__match_descriptionsz00(BgL_dz00_10,
						BgL_fz00_4)))
				{	/* Match/compiler.scm 72 */
					return
						PROCEDURE_ENTRY(BgL_kz00_8) (BgL_kz00_8, BgL_rz00_6, BgL_za7za7_9,
						BgL_dz00_10, BEOA);
				}
			else
				{	/* Match/compiler.scm 72 */
					if (CBOOL(BGl_compatiblezf3zf3zz__match_descriptionsz00(BgL_dz00_10,
								BgL_fz00_4)))
						{	/* Match/compiler.scm 74 */
							obj_t BgL_casezd2valuezd2_1360;

							BgL_casezd2valuezd2_1360 = CAR(((obj_t) BgL_fz00_4));
							if (
								(BgL_casezd2valuezd2_1360 ==
									BGl_symbol2257z00zz__match_compilerz00))
								{	/* Match/compiler.scm 74 */
									return
										PROCEDURE_ENTRY(BgL_kz00_8) (BgL_kz00_8, BgL_rz00_6,
										BgL_za7za7_9, BgL_dz00_10, BEOA);
								}
							else
								{	/* Match/compiler.scm 74 */
									if (
										(BgL_casezd2valuezd2_1360 ==
											BGl_symbol2262z00zz__match_compilerz00))
										{	/* Match/compiler.scm 76 */
											obj_t BgL_arg1221z00_1363;

											{	/* Match/compiler.scm 76 */
												obj_t BgL_pairz00_2401;

												BgL_pairz00_2401 = CDR(((obj_t) BgL_fz00_4));
												BgL_arg1221z00_1363 = CAR(BgL_pairz00_2401);
											}
											{	/* Match/compiler.scm 112 */
												obj_t BgL_arg1290z00_2402;

												{	/* Match/compiler.scm 112 */
													obj_t BgL_arg1291z00_2403;
													obj_t BgL_arg1292z00_2404;

													{	/* Match/compiler.scm 112 */
														obj_t BgL_arg1295z00_2405;

														BgL_arg1295z00_2405 =
															MAKE_YOUNG_PAIR(BgL_ez00_5, BNIL);
														BgL_arg1291z00_2403 =
															MAKE_YOUNG_PAIR(BgL_arg1221z00_1363,
															BgL_arg1295z00_2405);
													}
													{	/* Match/compiler.scm 113 */
														obj_t BgL_arg1296z00_2406;
														obj_t BgL_arg1297z00_2407;

														BgL_arg1296z00_2406 =
															PROCEDURE_ENTRY(BgL_kz00_8) (BgL_kz00_8,
															BgL_rz00_6, BgL_za7za7_9, BgL_dz00_10, BEOA);
														{	/* Match/compiler.scm 114 */
															obj_t BgL_arg1298z00_2408;

															BgL_arg1298z00_2408 =
																PROCEDURE_ENTRY(BgL_za7za7_9) (BgL_za7za7_9,
																BgL_dz00_10, BEOA);
															BgL_arg1297z00_2407 =
																MAKE_YOUNG_PAIR(BgL_arg1298z00_2408, BNIL);
														}
														BgL_arg1292z00_2404 =
															MAKE_YOUNG_PAIR(BgL_arg1296z00_2406,
															BgL_arg1297z00_2407);
													}
													BgL_arg1290z00_2402 =
														MAKE_YOUNG_PAIR(BgL_arg1291z00_2403,
														BgL_arg1292z00_2404);
												}
												return
													MAKE_YOUNG_PAIR
													(BGl_symbol2264z00zz__match_compilerz00,
													BgL_arg1290z00_2402);
											}
										}
									else
										{	/* Match/compiler.scm 74 */
											if (
												(BgL_casezd2valuezd2_1360 ==
													BGl_symbol2266z00zz__match_compilerz00))
												{	/* Match/compiler.scm 138 */
													obj_t BgL_arg1345z00_2411;
													obj_t BgL_arg1346z00_2412;
													obj_t BgL_arg1347z00_2413;

													{	/* Match/compiler.scm 138 */
														obj_t BgL_arg1348z00_2414;

														{	/* Match/compiler.scm 138 */
															obj_t BgL_pairz00_2422;

															BgL_pairz00_2422 = CDR(((obj_t) BgL_fz00_4));
															BgL_arg1348z00_2414 = CAR(BgL_pairz00_2422);
														}
														BgL_arg1345z00_2411 =
															BGl_buildzd2atomzd2equalityzd2testzd2zz__match_compilerz00
															(BgL_ez00_5, BgL_arg1348z00_2414);
													}
													{	/* Match/compiler.scm 139 */
														obj_t BgL_arg1350z00_2415;

														{	/* Match/compiler.scm 139 */
															obj_t BgL_arg1351z00_2416;

															{	/* Match/compiler.scm 139 */
																obj_t BgL_arg1352z00_2417;

																{	/* Match/compiler.scm 139 */
																	obj_t BgL_pairz00_2426;

																	BgL_pairz00_2426 = CDR(((obj_t) BgL_fz00_4));
																	BgL_arg1352z00_2417 = CAR(BgL_pairz00_2426);
																}
																BgL_arg1351z00_2416 =
																	MAKE_YOUNG_PAIR(BgL_arg1352z00_2417, BNIL);
															}
															BgL_arg1350z00_2415 =
																MAKE_YOUNG_PAIR
																(BGl_symbol2266z00zz__match_compilerz00,
																BgL_arg1351z00_2416);
														}
														BgL_arg1346z00_2412 =
															PROCEDURE_ENTRY(BgL_kz00_8) (BgL_kz00_8,
															BgL_rz00_6, BgL_za7za7_9, BgL_arg1350z00_2415,
															BEOA);
													}
													{	/* Match/compiler.scm 140 */
														obj_t BgL_arg1353z00_2418;

														BgL_arg1353z00_2418 =
															BGl_patternzd2minuszd2zz__match_descriptionsz00
															(BgL_dz00_10, BgL_fz00_4);
														BgL_arg1347z00_2413 =
															PROCEDURE_ENTRY(BgL_za7za7_9) (BgL_za7za7_9,
															BgL_arg1353z00_2418, BEOA);
													}
													return
														BGl_buildzd2ifzd2zz__match_compilerz00
														(BgL_arg1345z00_2411, BgL_arg1346z00_2412,
														BgL_arg1347z00_2413);
												}
											else
												{	/* Match/compiler.scm 74 */
													if (
														(BgL_casezd2valuezd2_1360 ==
															BGl_symbol2268z00zz__match_compilerz00))
														{	/* Match/compiler.scm 78 */
															obj_t BgL_arg1225z00_1366;

															{	/* Match/compiler.scm 78 */
																obj_t BgL_pairz00_2432;

																BgL_pairz00_2432 = CDR(((obj_t) BgL_fz00_4));
																BgL_arg1225z00_1366 = CAR(BgL_pairz00_2432);
															}
															return
																BGl_compilezd2varzd2zz__match_compilerz00
																(BgL_arg1225z00_1366, BgL_ez00_5, BgL_rz00_6,
																BgL_mz00_7, BgL_kz00_8, BgL_za7za7_9,
																BgL_dz00_10);
														}
													else
														{	/* Match/compiler.scm 74 */
															if (
																(BgL_casezd2valuezd2_1360 ==
																	BGl_symbol2270z00zz__match_compilerz00))
																{	/* Match/compiler.scm 79 */
																	obj_t BgL_arg1227z00_1368;

																	{	/* Match/compiler.scm 79 */
																		obj_t BgL_pairz00_2438;

																		BgL_pairz00_2438 =
																			CDR(((obj_t) BgL_fz00_4));
																		BgL_arg1227z00_1368 = CAR(BgL_pairz00_2438);
																	}
																	{	/* Match/compiler.scm 143 */
																		obj_t BgL_zc3z04anonymousza31357ze3z87_3528;
																		obj_t BgL_zc3z04anonymousza31356ze3z87_3529;

																		BgL_zc3z04anonymousza31357ze3z87_3528 =
																			MAKE_FX_PROCEDURE
																			(BGl_z62zc3z04anonymousza31357ze3ze5zz__match_compilerz00,
																			(int) (((long) 1)), (int) (((long) 3)));
																		BgL_zc3z04anonymousza31356ze3z87_3529 =
																			MAKE_FX_PROCEDURE
																			(BGl_z62zc3z04anonymousza31356ze3ze5zz__match_compilerz00,
																			(int) (((long) 3)), (int) (((long) 1)));
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31357ze3z87_3528,
																			(int) (((long) 0)), BgL_kz00_8);
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31357ze3z87_3528,
																			(int) (((long) 1)), BgL_rz00_6);
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31357ze3z87_3528,
																			(int) (((long) 2)), BgL_za7za7_9);
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31356ze3z87_3529,
																			(int) (((long) 0)), BgL_za7za7_9);
																		{
																			obj_t BgL_za7za7_4025;
																			obj_t BgL_kz00_4024;
																			obj_t BgL_fz00_4023;

																			BgL_fz00_4023 = BgL_arg1227z00_1368;
																			BgL_kz00_4024 =
																				BgL_zc3z04anonymousza31356ze3z87_3529;
																			BgL_za7za7_4025 =
																				BgL_zc3z04anonymousza31357ze3z87_3528;
																			BgL_za7za7_9 = BgL_za7za7_4025;
																			BgL_kz00_8 = BgL_kz00_4024;
																			BgL_fz00_4 = BgL_fz00_4023;
																			goto BGl_compilez00zz__match_compilerz00;
																		}
																	}
																}
															else
																{	/* Match/compiler.scm 74 */
																	if (
																		(BgL_casezd2valuezd2_1360 ==
																			BGl_symbol2272z00zz__match_compilerz00))
																		{	/* Match/compiler.scm 80 */
																			obj_t BgL_arg1229z00_1370;
																			obj_t BgL_arg1232z00_1371;

																			{	/* Match/compiler.scm 80 */
																				obj_t BgL_pairz00_2450;

																				BgL_pairz00_2450 =
																					CDR(((obj_t) BgL_fz00_4));
																				BgL_arg1229z00_1370 =
																					CAR(BgL_pairz00_2450);
																			}
																			{	/* Match/compiler.scm 80 */
																				obj_t BgL_pairz00_2456;

																				{	/* Match/compiler.scm 80 */
																					obj_t BgL_pairz00_2455;

																					BgL_pairz00_2455 =
																						CDR(((obj_t) BgL_fz00_4));
																					BgL_pairz00_2456 =
																						CDR(BgL_pairz00_2455);
																				}
																				BgL_arg1232z00_1371 =
																					CAR(BgL_pairz00_2456);
																			}
																			return
																				BGl_compilezd2orzd2zz__match_compilerz00
																				(BgL_arg1229z00_1370,
																				BgL_arg1232z00_1371, BgL_ez00_5,
																				BgL_rz00_6, BgL_mz00_7, BgL_kz00_8,
																				BgL_za7za7_9, BgL_dz00_10);
																		}
																	else
																		{	/* Match/compiler.scm 74 */
																			if (
																				(BgL_casezd2valuezd2_1360 ==
																					BGl_symbol2274z00zz__match_compilerz00))
																				{	/* Match/compiler.scm 81 */
																					obj_t BgL_arg1239z00_1373;
																					obj_t BgL_arg1242z00_1374;
																					obj_t BgL_arg1243z00_1375;

																					{	/* Match/compiler.scm 81 */
																						obj_t BgL_pairz00_2462;

																						BgL_pairz00_2462 =
																							CDR(((obj_t) BgL_fz00_4));
																						BgL_arg1239z00_1373 =
																							CAR(BgL_pairz00_2462);
																					}
																					{	/* Match/compiler.scm 81 */
																						obj_t BgL_pairz00_2468;

																						{	/* Match/compiler.scm 81 */
																							obj_t BgL_pairz00_2467;

																							BgL_pairz00_2467 =
																								CDR(((obj_t) BgL_fz00_4));
																							BgL_pairz00_2468 =
																								CDR(BgL_pairz00_2467);
																						}
																						BgL_arg1242z00_1374 =
																							CAR(BgL_pairz00_2468);
																					}
																					{	/* Match/compiler.scm 81 */
																						obj_t BgL_pairz00_2476;

																						{	/* Match/compiler.scm 81 */
																							obj_t BgL_pairz00_2475;

																							{	/* Match/compiler.scm 81 */
																								obj_t BgL_pairz00_2474;

																								BgL_pairz00_2474 =
																									CDR(((obj_t) BgL_fz00_4));
																								BgL_pairz00_2475 =
																									CDR(BgL_pairz00_2474);
																							}
																							BgL_pairz00_2476 =
																								CDR(BgL_pairz00_2475);
																						}
																						BgL_arg1243z00_1375 =
																							CAR(BgL_pairz00_2476);
																					}
																					{	/* Match/compiler.scm 196 */
																						obj_t BgL_za2varsza2z00_2477;

																						BgL_za2varsza2z00_2477 =
																							BGl_patternzd2variableszd2zz__match_descriptionsz00
																							(BgL_arg1239z00_1373);
																						{	/* Match/compiler.scm 199 */
																							obj_t
																								BgL_zc3z04anonymousza31393ze3z87_3530;
																							obj_t
																								BgL_zc3z04anonymousza31391ze3z87_3531;
																							BgL_zc3z04anonymousza31393ze3z87_3530
																								=
																								MAKE_FX_PROCEDURE
																								(BGl_z62zc3z04anonymousza31393ze3ze5zz__match_compilerz00,
																								(int) (((long) 1)),
																								(int) (((long) 6)));
																							BgL_zc3z04anonymousza31391ze3z87_3531
																								=
																								MAKE_FX_PROCEDURE
																								(BGl_z62zc3z04anonymousza31391ze3ze5zz__match_compilerz00,
																								(int) (((long) 3)),
																								(int) (((long) 2)));
																							PROCEDURE_SET
																								(BgL_zc3z04anonymousza31393ze3z87_3530,
																								(int) (((long) 0)),
																								BgL_arg1243z00_1375);
																							PROCEDURE_SET
																								(BgL_zc3z04anonymousza31393ze3z87_3530,
																								(int) (((long) 1)), BgL_ez00_5);
																							PROCEDURE_SET
																								(BgL_zc3z04anonymousza31393ze3z87_3530,
																								(int) (((long) 2)), BgL_rz00_6);
																							PROCEDURE_SET
																								(BgL_zc3z04anonymousza31393ze3z87_3530,
																								(int) (((long) 3)), BgL_mz00_7);
																							PROCEDURE_SET
																								(BgL_zc3z04anonymousza31393ze3z87_3530,
																								(int) (((long) 4)), BgL_kz00_8);
																							PROCEDURE_SET
																								(BgL_zc3z04anonymousza31393ze3z87_3530,
																								(int) (((long) 5)),
																								BgL_za7za7_9);
																							PROCEDURE_SET
																								(BgL_zc3z04anonymousza31391ze3z87_3531,
																								(int) (((long) 0)),
																								BgL_za2varsza2z00_2477);
																							PROCEDURE_SET
																								(BgL_zc3z04anonymousza31391ze3z87_3531,
																								(int) (((long) 1)),
																								BgL_arg1242z00_1374);
																							{
																								obj_t BgL_za7za7_4075;
																								obj_t BgL_kz00_4074;
																								obj_t BgL_fz00_4073;

																								BgL_fz00_4073 =
																									BgL_arg1239z00_1373;
																								BgL_kz00_4074 =
																									BgL_zc3z04anonymousza31391ze3z87_3531;
																								BgL_za7za7_4075 =
																									BgL_zc3z04anonymousza31393ze3z87_3530;
																								BgL_za7za7_9 = BgL_za7za7_4075;
																								BgL_kz00_8 = BgL_kz00_4074;
																								BgL_fz00_4 = BgL_fz00_4073;
																								goto
																									BGl_compilez00zz__match_compilerz00;
																							}
																						}
																					}
																				}
																			else
																				{	/* Match/compiler.scm 74 */
																					if (
																						(BgL_casezd2valuezd2_1360 ==
																							BGl_symbol2276z00zz__match_compilerz00))
																						{	/* Match/compiler.scm 83 */
																							obj_t BgL_arg1245z00_1377;
																							obj_t BgL_arg1246z00_1378;

																							{	/* Match/compiler.scm 83 */
																								obj_t BgL_pairz00_2491;

																								BgL_pairz00_2491 =
																									CDR(((obj_t) BgL_fz00_4));
																								BgL_arg1245z00_1377 =
																									CAR(BgL_pairz00_2491);
																							}
																							{	/* Match/compiler.scm 83 */
																								obj_t BgL_pairz00_2497;

																								{	/* Match/compiler.scm 83 */
																									obj_t BgL_pairz00_2496;

																									BgL_pairz00_2496 =
																										CDR(((obj_t) BgL_fz00_4));
																									BgL_pairz00_2497 =
																										CDR(BgL_pairz00_2496);
																								}
																								BgL_arg1246z00_1378 =
																									CAR(BgL_pairz00_2497);
																							}
																							if (CBOOL
																								(BGl_compatiblezf3zf3zz__match_descriptionsz00
																									(BgL_arg1245z00_1377,
																										BgL_arg1246z00_1378)))
																								{	/* Match/compiler.scm 208 */
																									obj_t
																										BgL_zc3z04anonymousza31396ze3z87_3532;
																									BgL_zc3z04anonymousza31396ze3z87_3532
																										=
																										MAKE_FX_PROCEDURE
																										(BGl_z62zc3z04anonymousza31396ze3ze5zz__match_compilerz00,
																										(int) (((long) 3)),
																										(int) (((long) 4)));
																									PROCEDURE_SET
																										(BgL_zc3z04anonymousza31396ze3z87_3532,
																										(int) (((long) 0)),
																										BgL_arg1246z00_1378);
																									PROCEDURE_SET
																										(BgL_zc3z04anonymousza31396ze3z87_3532,
																										(int) (((long) 1)),
																										BgL_ez00_5);
																									PROCEDURE_SET
																										(BgL_zc3z04anonymousza31396ze3z87_3532,
																										(int) (((long) 2)),
																										BgL_mz00_7);
																									PROCEDURE_SET
																										(BgL_zc3z04anonymousza31396ze3z87_3532,
																										(int) (((long) 3)),
																										BgL_kz00_8);
																									{
																										obj_t BgL_kz00_4100;
																										obj_t BgL_fz00_4099;

																										BgL_fz00_4099 =
																											BgL_arg1245z00_1377;
																										BgL_kz00_4100 =
																											BgL_zc3z04anonymousza31396ze3z87_3532;
																										BgL_kz00_8 = BgL_kz00_4100;
																										BgL_fz00_4 = BgL_fz00_4099;
																										goto
																											BGl_compilez00zz__match_compilerz00;
																									}
																								}
																							else
																								{	/* Match/compiler.scm 205 */
																									return
																										PROCEDURE_ENTRY
																										(BgL_za7za7_9)
																										(BgL_za7za7_9, BgL_dz00_10,
																										BEOA);
																								}
																						}
																					else
																						{	/* Match/compiler.scm 74 */
																							if (
																								(BgL_casezd2valuezd2_1360 ==
																									BGl_symbol2278z00zz__match_compilerz00))
																								{	/* Match/compiler.scm 84 */
																									obj_t BgL_arg1250z00_1380;
																									obj_t BgL_arg1252z00_1381;

																									{	/* Match/compiler.scm 84 */
																										obj_t BgL_pairz00_2508;

																										BgL_pairz00_2508 =
																											CDR(((obj_t) BgL_fz00_4));
																										BgL_arg1250z00_1380 =
																											CAR(BgL_pairz00_2508);
																									}
																									{	/* Match/compiler.scm 84 */
																										obj_t BgL_pairz00_2514;

																										{	/* Match/compiler.scm 84 */
																											obj_t BgL_pairz00_2513;

																											BgL_pairz00_2513 =
																												CDR(
																												((obj_t) BgL_fz00_4));
																											BgL_pairz00_2514 =
																												CDR(BgL_pairz00_2513);
																										}
																										BgL_arg1252z00_1381 =
																											CAR(BgL_pairz00_2514);
																									}
																									if (
																										(CAR(
																												((obj_t) BgL_dz00_10))
																											==
																											BGl_symbol2278z00zz__match_compilerz00))
																										{	/* Match/compiler.scm 250 */
																											return
																												BGl_succeszd2conszd2zz__match_compilerz00
																												(BgL_arg1250z00_1380,
																												BgL_arg1252z00_1381,
																												BgL_ez00_5, BgL_rz00_6,
																												BgL_mz00_7, BgL_kz00_8,
																												BgL_za7za7_9,
																												BgL_dz00_10);
																										}
																									else
																										{	/* Match/compiler.scm 252 */
																											obj_t BgL_arg1441z00_2516;

																											{	/* Match/compiler.scm 252 */
																												obj_t
																													BgL_arg1442z00_2517;
																												obj_t
																													BgL_arg1443z00_2518;
																												{	/* Match/compiler.scm 252 */
																													obj_t
																														BgL_arg1444z00_2519;
																													BgL_arg1444z00_2519 =
																														MAKE_YOUNG_PAIR
																														(BgL_ez00_5, BNIL);
																													BgL_arg1442z00_2517 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol2280z00zz__match_compilerz00,
																														BgL_arg1444z00_2519);
																												}
																												{	/* Match/compiler.scm 253 */
																													obj_t
																														BgL_arg1445z00_2520;
																													obj_t
																														BgL_arg1446z00_2521;
																													BgL_arg1445z00_2520 =
																														BGl_succeszd2conszd2zz__match_compilerz00
																														(BgL_arg1250z00_1380,
																														BgL_arg1252z00_1381,
																														BgL_ez00_5,
																														BgL_rz00_6,
																														BgL_mz00_7,
																														BgL_kz00_8,
																														BgL_za7za7_9,
																														BgL_dz00_10);
																													{	/* Match/compiler.scm 254 */
																														obj_t
																															BgL_arg1448z00_2522;
																														{	/* Match/compiler.scm 254 */
																															obj_t
																																BgL_arg1449z00_2523;
																															{	/* Match/compiler.scm 254 */
																																obj_t
																																	BgL_arg1451z00_2524;
																																{	/* Match/compiler.scm 254 */
																																	obj_t
																																		BgL_list1452z00_2525;
																																	{	/* Match/compiler.scm 254 */
																																		obj_t
																																			BgL_arg1453z00_2526;
																																		{	/* Match/compiler.scm 254 */
																																			obj_t
																																				BgL_arg1454z00_2527;
																																			BgL_arg1454z00_2527
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_list2256z00zz__match_compilerz00,
																																				BNIL);
																																			BgL_arg1453z00_2526
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_list2256z00zz__match_compilerz00,
																																				BgL_arg1454z00_2527);
																																		}
																																		BgL_list1452z00_2525
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_symbol2278z00zz__match_compilerz00,
																																			BgL_arg1453z00_2526);
																																	}
																																	BgL_arg1451z00_2524
																																		=
																																		BgL_list1452z00_2525;
																																}
																																BgL_arg1449z00_2523
																																	=
																																	BGl_patternzd2minuszd2zz__match_descriptionsz00
																																	(BgL_dz00_10,
																																	BgL_arg1451z00_2524);
																															}
																															BgL_arg1448z00_2522
																																=
																																PROCEDURE_ENTRY
																																(BgL_za7za7_9)
																																(BgL_za7za7_9,
																																BgL_arg1449z00_2523,
																																BEOA);
																														}
																														BgL_arg1446z00_2521
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1448z00_2522,
																															BNIL);
																													}
																													BgL_arg1443z00_2518 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1445z00_2520,
																														BgL_arg1446z00_2521);
																												}
																												BgL_arg1441z00_2516 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1442z00_2517,
																													BgL_arg1443z00_2518);
																											}
																											return
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2264z00zz__match_compilerz00,
																												BgL_arg1441z00_2516);
																										}
																								}
																							else
																								{	/* Match/compiler.scm 74 */
																									if (
																										(BgL_casezd2valuezd2_1360 ==
																											BGl_symbol2282z00zz__match_compilerz00))
																										{	/* Match/compiler.scm 86 */
																											obj_t BgL_arg1254z00_1383;
																											obj_t BgL_arg1256z00_1384;
																											obj_t BgL_arg1258z00_1385;

																											{	/* Match/compiler.scm 86 */
																												obj_t BgL_pairz00_2536;

																												BgL_pairz00_2536 =
																													CDR(
																													((obj_t) BgL_fz00_4));
																												BgL_arg1254z00_1383 =
																													CAR(BgL_pairz00_2536);
																											}
																											{	/* Match/compiler.scm 86 */
																												obj_t BgL_pairz00_2542;

																												{	/* Match/compiler.scm 86 */
																													obj_t
																														BgL_pairz00_2541;
																													BgL_pairz00_2541 =
																														CDR(((obj_t)
																															BgL_fz00_4));
																													BgL_pairz00_2542 =
																														CDR
																														(BgL_pairz00_2541);
																												}
																												BgL_arg1256z00_1384 =
																													CAR(BgL_pairz00_2542);
																											}
																											{	/* Match/compiler.scm 86 */
																												obj_t BgL_pairz00_2550;

																												{	/* Match/compiler.scm 86 */
																													obj_t
																														BgL_pairz00_2549;
																													{	/* Match/compiler.scm 86 */
																														obj_t
																															BgL_pairz00_2548;
																														BgL_pairz00_2548 =
																															CDR(((obj_t)
																																BgL_fz00_4));
																														BgL_pairz00_2549 =
																															CDR
																															(BgL_pairz00_2548);
																													}
																													BgL_pairz00_2550 =
																														CDR
																														(BgL_pairz00_2549);
																												}
																												BgL_arg1258z00_1385 =
																													CAR(BgL_pairz00_2550);
																											}
																											return
																												BGl_compilezd2timeszd2zz__match_compilerz00
																												(BgL_arg1254z00_1383,
																												BgL_arg1256z00_1384,
																												BgL_arg1258z00_1385,
																												BgL_ez00_5, BgL_rz00_6,
																												BgL_mz00_7, BgL_kz00_8,
																												BgL_za7za7_9,
																												BgL_dz00_10);
																										}
																									else
																										{	/* Match/compiler.scm 74 */
																											if (
																												(BgL_casezd2valuezd2_1360
																													==
																													BGl_symbol2284z00zz__match_compilerz00))
																												{	/* Match/compiler.scm 325 */
																													obj_t
																														BgL_list1522z00_2571;
																													BgL_list1522z00_2571 =
																														MAKE_YOUNG_PAIR
																														(BGl_string2286z00zz__match_compilerz00,
																														BNIL);
																													return
																														BGl_errorz00zz__errorz00
																														(BGl_string2287z00zz__match_compilerz00,
																														BgL_list1522z00_2571,
																														BGl_string2288z00zz__match_compilerz00);
																												}
																											else
																												{	/* Match/compiler.scm 74 */
																													if (
																														(BgL_casezd2valuezd2_1360
																															==
																															BGl_symbol2289z00zz__match_compilerz00))
																														{	/* Match/compiler.scm 89 */
																															obj_t
																																BgL_arg1273z00_1391;
																															{	/* Match/compiler.scm 89 */
																																obj_t
																																	BgL_pairz00_2577;
																																BgL_pairz00_2577
																																	=
																																	CDR(((obj_t)
																																		BgL_fz00_4));
																																BgL_arg1273z00_1391
																																	=
																																	CAR
																																	(BgL_pairz00_2577);
																															}
																															{	/* Match/compiler.scm 322 */
																																obj_t
																																	BgL_arg1519z00_2578;
																																obj_t
																																	BgL_arg1520z00_2579;
																																{	/* Match/compiler.scm 322 */
																																	obj_t
																																		BgL_fun1521z00_2580;
																																	BgL_fun1521z00_2580
																																		=
																																		PROCEDURE_ENTRY
																																		(BgL_mz00_7)
																																		(BgL_mz00_7,
																																		BgL_arg1273z00_1391,
																																		BEOA);
																																	BgL_arg1519z00_2578
																																		=
																																		PROCEDURE_ENTRY
																																		(BgL_fun1521z00_2580)
																																		(BgL_fun1521z00_2580,
																																		BgL_rz00_6,
																																		BgL_mz00_7,
																																		BgL_kz00_8,
																																		BgL_za7za7_9,
																																		BgL_dz00_10,
																																		BEOA);
																																}
																																BgL_arg1520z00_2579
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_ez00_5,
																																	BNIL);
																																return
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1519z00_2578,
																																	BgL_arg1520z00_2579);
																															}
																														}
																													else
																														{	/* Match/compiler.scm 74 */
																															if (
																																(BgL_casezd2valuezd2_1360
																																	==
																																	BGl_symbol2291z00zz__match_compilerz00))
																																{	/* Match/compiler.scm 91 */
																																	obj_t
																																		BgL_arg1275z00_1393;
																																	obj_t
																																		BgL_arg1276z00_1394;
																																	{	/* Match/compiler.scm 91 */
																																		obj_t
																																			BgL_pairz00_2586;
																																		BgL_pairz00_2586
																																			=
																																			CDR((
																																				(obj_t)
																																				BgL_fz00_4));
																																		BgL_arg1275z00_1393
																																			=
																																			CAR
																																			(BgL_pairz00_2586);
																																	}
																																	{	/* Match/compiler.scm 91 */
																																		obj_t
																																			BgL_pairz00_2592;
																																		{	/* Match/compiler.scm 91 */
																																			obj_t
																																				BgL_pairz00_2591;
																																			BgL_pairz00_2591
																																				=
																																				CDR((
																																					(obj_t)
																																					BgL_fz00_4));
																																			BgL_pairz00_2592
																																				=
																																				CDR
																																				(BgL_pairz00_2591);
																																		}
																																		BgL_arg1276z00_1394
																																			=
																																			CAR
																																			(BgL_pairz00_2592);
																																	}
																																	return
																																		BGl_compilezd2vectorzd2beginz00zz__match_compilerz00
																																		(BgL_arg1275z00_1393,
																																		BgL_arg1276z00_1394,
																																		BgL_ez00_5,
																																		BgL_rz00_6,
																																		BgL_mz00_7,
																																		BgL_kz00_8,
																																		BgL_za7za7_9,
																																		BgL_dz00_10);
																																}
																															else
																																{	/* Match/compiler.scm 74 */
																																	if (
																																		(BgL_casezd2valuezd2_1360
																																			==
																																			BGl_symbol2293z00zz__match_compilerz00))
																																		{	/* Match/compiler.scm 372 */
																																			obj_t
																																				BgL_zc3z04anonymousza31613ze3z87_3533;
																																			BgL_zc3z04anonymousza31613ze3z87_3533
																																				=
																																				MAKE_FX_PROCEDURE
																																				(BGl_z62zc3z04anonymousza31613ze3ze5zz__match_compilerz00,
																																				(int) ((
																																						(long)
																																						1)),
																																				(int) ((
																																						(long)
																																						5)));
																																			PROCEDURE_SET
																																				(BgL_zc3z04anonymousza31613ze3z87_3533,
																																				(int) ((
																																						(long)
																																						0)),
																																				BgL_ez00_5);
																																			PROCEDURE_SET
																																				(BgL_zc3z04anonymousza31613ze3z87_3533,
																																				(int) ((
																																						(long)
																																						1)),
																																				BgL_kz00_8);
																																			PROCEDURE_SET
																																				(BgL_zc3z04anonymousza31613ze3z87_3533,
																																				(int) ((
																																						(long)
																																						2)),
																																				BgL_rz00_6);
																																			PROCEDURE_SET
																																				(BgL_zc3z04anonymousza31613ze3z87_3533,
																																				(int) ((
																																						(long)
																																						3)),
																																				BgL_za7za7_9);
																																			PROCEDURE_SET
																																				(BgL_zc3z04anonymousza31613ze3z87_3533,
																																				(int) ((
																																						(long)
																																						4)),
																																				BgL_dz00_10);
																																			return
																																				BgL_zc3z04anonymousza31613ze3z87_3533;
																																		}
																																	else
																																		{	/* Match/compiler.scm 74 */
																																			if (
																																				(BgL_casezd2valuezd2_1360
																																					==
																																					BGl_symbol2295z00zz__match_compilerz00))
																																				{	/* Match/compiler.scm 378 */
																																					obj_t
																																						BgL_zc3z04anonymousza31621ze3z87_3534;
																																					BgL_zc3z04anonymousza31621ze3z87_3534
																																						=
																																						MAKE_FX_PROCEDURE
																																						(BGl_z62zc3z04anonymousza31621ze3ze5zz__match_compilerz00,
																																						(int)
																																						(((long) 1)), (int) (((long) 4)));
																																					PROCEDURE_SET
																																						(BgL_zc3z04anonymousza31621ze3z87_3534,
																																						(int)
																																						(((long) 0)), BgL_kz00_8);
																																					PROCEDURE_SET
																																						(BgL_zc3z04anonymousza31621ze3z87_3534,
																																						(int)
																																						(((long) 1)), BgL_rz00_6);
																																					PROCEDURE_SET
																																						(BgL_zc3z04anonymousza31621ze3z87_3534,
																																						(int)
																																						(((long) 2)), BgL_za7za7_9);
																																					PROCEDURE_SET
																																						(BgL_zc3z04anonymousza31621ze3z87_3534,
																																						(int)
																																						(((long) 3)), BgL_dz00_10);
																																					return
																																						BgL_zc3z04anonymousza31621ze3z87_3534;
																																				}
																																			else
																																				{	/* Match/compiler.scm 74 */
																																					if (
																																						(BgL_casezd2valuezd2_1360
																																							==
																																							BGl_symbol2297z00zz__match_compilerz00))
																																						{	/* Match/compiler.scm 95 */
																																							obj_t
																																								BgL_auxz00_4216;
																																							obj_t
																																								BgL_auxz00_4212;
																																							{	/* Match/compiler.scm 95 */
																																								obj_t
																																									BgL_pairz00_2619;
																																								{	/* Match/compiler.scm 95 */
																																									obj_t
																																										BgL_pairz00_2618;
																																									BgL_pairz00_2618
																																										=
																																										CDR
																																										(
																																										((obj_t) BgL_fz00_4));
																																									BgL_pairz00_2619
																																										=
																																										CDR
																																										(BgL_pairz00_2618);
																																								}
																																								BgL_auxz00_4216
																																									=
																																									CAR
																																									(BgL_pairz00_2619);
																																							}
																																							{	/* Match/compiler.scm 95 */
																																								obj_t
																																									BgL_pairz00_2613;
																																								BgL_pairz00_2613
																																									=
																																									CDR
																																									(
																																									((obj_t) BgL_fz00_4));
																																								BgL_auxz00_4212
																																									=
																																									CAR
																																									(BgL_pairz00_2613);
																																							}
																																							return
																																								BGl_compilezd2vectorzd2consz00zz__match_compilerz00
																																								(BgL_auxz00_4212,
																																								BgL_auxz00_4216,
																																								BgL_ez00_5,
																																								BgL_rz00_6,
																																								BgL_mz00_7,
																																								BgL_kz00_8,
																																								BgL_za7za7_9,
																																								BgL_dz00_10);
																																						}
																																					else
																																						{	/* Match/compiler.scm 74 */
																																							if ((BgL_casezd2valuezd2_1360 == BGl_symbol2299z00zz__match_compilerz00))
																																								{	/* Match/compiler.scm 382 */
																																									obj_t
																																										BgL_list1622z00_2640;
																																									BgL_list1622z00_2640
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BGl_string2301z00zz__match_compilerz00,
																																										BNIL);
																																									return
																																										BGl_errorz00zz__errorz00
																																										(BGl_string2287z00zz__match_compilerz00,
																																										BgL_list1622z00_2640,
																																										BGl_string2288z00zz__match_compilerz00);
																																								}
																																							else
																																								{	/* Match/compiler.scm 74 */
																																									if ((BgL_casezd2valuezd2_1360 == BGl_symbol2302z00zz__match_compilerz00))
																																										{	/* Match/compiler.scm 388 */
																																											obj_t
																																												BgL_predz00_2644;
																																											{	/* Match/compiler.scm 389 */
																																												obj_t
																																													BgL_pairz00_2674;
																																												{	/* Match/compiler.scm 389 */
																																													obj_t
																																														BgL_pairz00_2673;
																																													BgL_pairz00_2673
																																														=
																																														CDR
																																														(
																																														((obj_t) BgL_fz00_4));
																																													BgL_pairz00_2674
																																														=
																																														CDR
																																														(BgL_pairz00_2673);
																																												}
																																												BgL_predz00_2644
																																													=
																																													CAR
																																													(BgL_pairz00_2674);
																																											}
																																											{	/* Match/compiler.scm 389 */
																																												obj_t
																																													BgL_pza2za2_2645;
																																												{	/* Match/compiler.scm 390 */
																																													obj_t
																																														BgL_pairz00_2680;
																																													{	/* Match/compiler.scm 390 */
																																														obj_t
																																															BgL_pairz00_2679;
																																														BgL_pairz00_2679
																																															=
																																															CDR
																																															(
																																															((obj_t) BgL_fz00_4));
																																														BgL_pairz00_2680
																																															=
																																															CDR
																																															(BgL_pairz00_2679);
																																													}
																																													BgL_pza2za2_2645
																																														=
																																														CDR
																																														(BgL_pairz00_2680);
																																												}
																																												{	/* Match/compiler.scm 390 */
																																													obj_t
																																														BgL_za2kza2z00_2646;
																																													BgL_za2kza2z00_2646
																																														=
																																														PROCEDURE_ENTRY
																																														(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
																																														(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
																																														BGl_string2304z00zz__match_compilerz00,
																																														BEOA);
																																													{	/* Match/compiler.scm 391 */
																																														obj_t
																																															BgL_za2varsza2z00_2647;
																																														BgL_za2varsza2z00_2647
																																															=
																																															BGl_patternzd2variableszd2zz__match_descriptionsz00
																																															(BgL_fz00_4);
																																														{	/* Match/compiler.scm 392 */
																																															obj_t
																																																BgL_za2callza2z00_2648;
																																															BgL_za2callza2z00_2648
																																																=
																																																MAKE_YOUNG_PAIR
																																																(BgL_za2kza2z00_2646,
																																																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																																(BgL_za2varsza2z00_2647,
																																																	BNIL));
																																															{	/* Match/compiler.scm 393 */
																																																obj_t
																																																	BgL_successzd2formzd2_2650;
																																																{	/* Match/compiler.scm 394 */
																																																	obj_t
																																																		BgL_arg1633z00_2651;
																																																	BgL_arg1633z00_2651
																																																		=
																																																		BGl_extendza2za2zz__match_compilerz00
																																																		(BgL_rz00_6,
																																																		BgL_za2varsza2z00_2647);
																																																	BgL_successzd2formzd2_2650
																																																		=
																																																		PROCEDURE_ENTRY
																																																		(BgL_kz00_8)
																																																		(BgL_kz00_8,
																																																		BgL_arg1633z00_2651,
																																																		BgL_za7za7_9,
																																																		BgL_dz00_10,
																																																		BEOA);
																																																}
																																																{	/* Match/compiler.scm 394 */
																																																	obj_t
																																																		BgL_failurezd2formzd2_2652;
																																																	BgL_failurezd2formzd2_2652
																																																		=
																																																		PROCEDURE_ENTRY
																																																		(BgL_za7za7_9)
																																																		(BgL_za7za7_9,
																																																		BgL_dz00_10,
																																																		BEOA);
																																																	{	/* Match/compiler.scm 395 */
																																																		obj_t
																																																			BgL_indexesz00_2653;
																																																		BgL_indexesz00_2653
																																																			=
																																																			BGl_integersz00zz__match_compilerz00
																																																			(
																																																			((long) 0), (long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(bgl_list_length(BgL_pza2za2_2645)), BINT(((long) 1)))));
																																																		{	/* Match/compiler.scm 396 */

																																																			{	/* Match/compiler.scm 397 */
																																																				obj_t
																																																					BgL_arg1623z00_2656;
																																																				obj_t
																																																					BgL_arg1624z00_2657;
																																																				{	/* Match/compiler.scm 397 */
																																																					obj_t
																																																						BgL_arg1626z00_2658;
																																																					BgL_arg1626z00_2658
																																																						=
																																																						MAKE_YOUNG_PAIR
																																																						(BgL_ez00_5,
																																																						BNIL);
																																																					BgL_arg1623z00_2656
																																																						=
																																																						MAKE_YOUNG_PAIR
																																																						(BgL_predz00_2644,
																																																						BgL_arg1626z00_2658);
																																																				}
																																																				{	/* Match/compiler.scm 400 */
																																																					obj_t
																																																						BgL_zc3z04anonymousza31630ze3z87_3535;
																																																					obj_t
																																																						BgL_zc3z04anonymousza31629ze3z87_3536;
																																																					BgL_zc3z04anonymousza31630ze3z87_3535
																																																						=
																																																						MAKE_FX_PROCEDURE
																																																						(BGl_z62zc3z04anonymousza31630ze3ze5zz__match_compilerz00,
																																																						(int)
																																																						(((long) 1)), (int) (((long) 1)));
																																																					BgL_zc3z04anonymousza31629ze3z87_3536
																																																						=
																																																						MAKE_FX_PROCEDURE
																																																						(BGl_z62zc3z04anonymousza31629ze3ze5zz__match_compilerz00,
																																																						(int)
																																																						(((long) 3)), (int) (((long) 1)));
																																																					PROCEDURE_SET
																																																						(BgL_zc3z04anonymousza31630ze3z87_3535,
																																																						(int)
																																																						(((long) 0)), BgL_failurezd2formzd2_2652);
																																																					PROCEDURE_SET
																																																						(BgL_zc3z04anonymousza31629ze3z87_3536,
																																																						(int)
																																																						(((long) 0)), BgL_successzd2formzd2_2650);
																																																					BgL_arg1624z00_2657
																																																						=
																																																						BGl_compileza2za2zz__match_compilerz00
																																																						(BgL_pza2za2_2645,
																																																						BgL_indexesz00_2653,
																																																						BgL_ez00_5,
																																																						BgL_rz00_6,
																																																						BgL_mz00_7,
																																																						BgL_zc3z04anonymousza31629ze3z87_3536,
																																																						BgL_zc3z04anonymousza31630ze3z87_3535,
																																																						BGl_list2256z00zz__match_compilerz00);
																																																				}
																																																				return
																																																					BGl_buildzd2ifzd2zz__match_compilerz00
																																																					(BgL_arg1623z00_2656,
																																																					BgL_arg1624z00_2657,
																																																					BgL_failurezd2formzd2_2652);
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
																																										{	/* Match/compiler.scm 100 */
																																											obj_t
																																												BgL_list1288z00_1405;
																																											{	/* Match/compiler.scm 100 */
																																												obj_t
																																													BgL_arg1289z00_1406;
																																												BgL_arg1289z00_1406
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BgL_fz00_4,
																																													BNIL);
																																												BgL_list1288z00_1405
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BGl_string2305z00zz__match_compilerz00,
																																													BgL_arg1289z00_1406);
																																											}
																																											return
																																												BGl_errorz00zz__errorz00
																																												(BGl_string2287z00zz__match_compilerz00,
																																												BgL_list1288z00_1405,
																																												BGl_string2288z00zz__match_compilerz00);
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
					else
						{	/* Match/compiler.scm 73 */
							return
								PROCEDURE_ENTRY(BgL_za7za7_9) (BgL_za7za7_9, BgL_dz00_10, BEOA);
						}
				}
		}

	}



/* &<@anonymous:1357> */
	obj_t BGl_z62zc3z04anonymousza31357ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3537, obj_t BgL_d2z00_3541)
	{
		{	/* Match/compiler.scm 144 */
			{	/* Match/compiler.scm 144 */
				obj_t BgL_kz00_3538;
				obj_t BgL_rz00_3539;
				obj_t BgL_za7za7_3540;

				BgL_kz00_3538 = PROCEDURE_REF(BgL_envz00_3537, (int) (((long) 0)));
				BgL_rz00_3539 = PROCEDURE_REF(BgL_envz00_3537, (int) (((long) 1)));
				BgL_za7za7_3540 = PROCEDURE_REF(BgL_envz00_3537, (int) (((long) 2)));
				return
					PROCEDURE_ENTRY(BgL_kz00_3538) (BgL_kz00_3538, BgL_rz00_3539,
					BgL_za7za7_3540, BgL_d2z00_3541, BEOA);
			}
		}

	}



/* &<@anonymous:1356> */
	obj_t BGl_z62zc3z04anonymousza31356ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3542, obj_t BgL_r2z00_3544, obj_t BgL_za72za7_3545,
		obj_t BgL_d2z00_3546)
	{
		{	/* Match/compiler.scm 143 */
			{	/* Match/compiler.scm 143 */
				obj_t BgL_za7za7_3543;

				BgL_za7za7_3543 = PROCEDURE_REF(BgL_envz00_3542, (int) (((long) 0)));
				return
					PROCEDURE_ENTRY(BgL_za7za7_3543) (BgL_za7za7_3543, BgL_d2z00_3546,
					BEOA);
			}
		}

	}



/* &<@anonymous:1393> */
	obj_t BGl_z62zc3z04anonymousza31393ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3547, obj_t BgL_dz00_3554)
	{
		{	/* Match/compiler.scm 200 */
			return
				BGl_compilez00zz__match_compilerz00(PROCEDURE_REF(BgL_envz00_3547,
					(int) (((long) 0))),
				PROCEDURE_REF(BgL_envz00_3547,
					(int) (((long) 1))),
				PROCEDURE_REF(BgL_envz00_3547,
					(int) (((long) 2))),
				PROCEDURE_REF(BgL_envz00_3547,
					(int) (((long) 3))),
				PROCEDURE_REF(BgL_envz00_3547,
					(int) (((long) 4))),
				PROCEDURE_REF(BgL_envz00_3547, (int) (((long) 5))), BgL_dz00_3554);
		}

	}



/* &<@anonymous:1391> */
	obj_t BGl_z62zc3z04anonymousza31391ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3555, obj_t BgL_rz00_3558, obj_t BgL_za7za7_3559,
		obj_t BgL_cz00_3560)
	{
		{	/* Match/compiler.scm 198 */
			{	/* Match/compiler.scm 199 */
				obj_t BgL_za2varsza2z00_3556;
				obj_t BgL_arg1242z00_3557;

				BgL_za2varsza2z00_3556 =
					PROCEDURE_REF(BgL_envz00_3555, (int) (((long) 0)));
				BgL_arg1242z00_3557 =
					PROCEDURE_REF(BgL_envz00_3555, (int) (((long) 1)));
				return
					MAKE_YOUNG_PAIR(BgL_arg1242z00_3557,
					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
					(BgL_za2varsza2z00_3556, BNIL));
			}
		}

	}



/* &<@anonymous:1396> */
	obj_t BGl_z62zc3z04anonymousza31396ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3561, obj_t BgL_r2z00_3566, obj_t BgL_za72za7_3567,
		obj_t BgL_c2z00_3568)
	{
		{	/* Match/compiler.scm 207 */
			return
				BGl_compilez00zz__match_compilerz00(PROCEDURE_REF(BgL_envz00_3561,
					(int) (((long) 0))),
				PROCEDURE_REF(BgL_envz00_3561,
					(int) (((long) 1))), BgL_r2z00_3566,
				PROCEDURE_REF(BgL_envz00_3561,
					(int) (((long) 2))),
				PROCEDURE_REF(BgL_envz00_3561,
					(int) (((long) 3))), BgL_za72za7_3567, BgL_c2z00_3568);
		}

	}



/* &<@anonymous:1613> */
	obj_t BGl_z62zc3z04anonymousza31613ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3569, obj_t BgL_iz00_3575)
	{
		{	/* Match/compiler.scm 372 */
			{	/* Match/compiler.scm 373 */
				obj_t BgL_ez00_3570;
				obj_t BgL_kz00_3571;
				obj_t BgL_rz00_3572;
				obj_t BgL_za7za7_3573;
				obj_t BgL_dz00_3574;

				BgL_ez00_3570 = PROCEDURE_REF(BgL_envz00_3569, (int) (((long) 0)));
				BgL_kz00_3571 = PROCEDURE_REF(BgL_envz00_3569, (int) (((long) 1)));
				BgL_rz00_3572 = PROCEDURE_REF(BgL_envz00_3569, (int) (((long) 2)));
				BgL_za7za7_3573 = PROCEDURE_REF(BgL_envz00_3569, (int) (((long) 3)));
				BgL_dz00_3574 = PROCEDURE_REF(BgL_envz00_3569, (int) (((long) 4)));
				{	/* Match/compiler.scm 373 */
					obj_t BgL_arg1614z00_3773;
					obj_t BgL_arg1615z00_3774;
					obj_t BgL_arg1616z00_3775;

					{	/* Match/compiler.scm 373 */
						obj_t BgL_arg1617z00_3776;

						{	/* Match/compiler.scm 373 */
							obj_t BgL_arg1618z00_3777;

							{	/* Match/compiler.scm 373 */
								obj_t BgL_arg1619z00_3778;

								{	/* Match/compiler.scm 373 */
									obj_t BgL_arg1620z00_3779;

									BgL_arg1620z00_3779 = MAKE_YOUNG_PAIR(BgL_ez00_3570, BNIL);
									BgL_arg1619z00_3778 =
										MAKE_YOUNG_PAIR(BGl_symbol2306z00zz__match_compilerz00,
										BgL_arg1620z00_3779);
								}
								BgL_arg1618z00_3777 =
									MAKE_YOUNG_PAIR(BgL_arg1619z00_3778, BNIL);
							}
							BgL_arg1617z00_3776 =
								MAKE_YOUNG_PAIR(BgL_iz00_3575, BgL_arg1618z00_3777);
						}
						BgL_arg1614z00_3773 =
							MAKE_YOUNG_PAIR(BGl_symbol2308z00zz__match_compilerz00,
							BgL_arg1617z00_3776);
					}
					BgL_arg1615z00_3774 =
						PROCEDURE_ENTRY(BgL_kz00_3571) (BgL_kz00_3571, BgL_rz00_3572,
						BgL_za7za7_3573, BgL_dz00_3574, BEOA);
					BgL_arg1616z00_3775 =
						PROCEDURE_ENTRY(BgL_za7za7_3573) (BgL_za7za7_3573, BgL_dz00_3574,
						BEOA);
					return BGl_buildzd2ifzd2zz__match_compilerz00(BgL_arg1614z00_3773,
						BgL_arg1615z00_3774, BgL_arg1616z00_3775);
				}
			}
		}

	}



/* &<@anonymous:1621> */
	obj_t BGl_z62zc3z04anonymousza31621ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3576, obj_t BgL_iz00_3581)
	{
		{	/* Match/compiler.scm 378 */
			{	/* Match/compiler.scm 379 */
				obj_t BgL_kz00_3577;
				obj_t BgL_rz00_3578;
				obj_t BgL_za7za7_3579;
				obj_t BgL_dz00_3580;

				BgL_kz00_3577 = PROCEDURE_REF(BgL_envz00_3576, (int) (((long) 0)));
				BgL_rz00_3578 = PROCEDURE_REF(BgL_envz00_3576, (int) (((long) 1)));
				BgL_za7za7_3579 = PROCEDURE_REF(BgL_envz00_3576, (int) (((long) 2)));
				BgL_dz00_3580 = PROCEDURE_REF(BgL_envz00_3576, (int) (((long) 3)));
				return
					PROCEDURE_ENTRY(BgL_kz00_3577) (BgL_kz00_3577, BgL_rz00_3578,
					BgL_za7za7_3579, BgL_dz00_3580, BEOA);
			}
		}

	}



/* &<@anonymous:1630> */
	obj_t BGl_z62zc3z04anonymousza31630ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3582, obj_t BgL_dz00_3584)
	{
		{	/* Match/compiler.scm 401 */
			return PROCEDURE_REF(BgL_envz00_3582, (int) (((long) 0)));
		}

	}



/* &<@anonymous:1629> */
	obj_t BGl_z62zc3z04anonymousza31629ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3585, obj_t BgL_rz00_3587, obj_t BgL_za7za7_3588,
		obj_t BgL_dz00_3589)
	{
		{	/* Match/compiler.scm 400 */
			return PROCEDURE_REF(BgL_envz00_3585, (int) (((long) 0)));
		}

	}



/* build-atom-equality-test */
	obj_t BGl_buildzd2atomzd2equalityzd2testzd2zz__match_compilerz00(obj_t
		BgL_ez00_24, obj_t BgL_constz00_25)
	{
		{	/* Match/compiler.scm 116 */
			if (NULLP(BgL_constz00_25))
				{	/* Match/compiler.scm 120 */
					obj_t BgL_arg1300z00_1415;

					BgL_arg1300z00_1415 = MAKE_YOUNG_PAIR(BgL_ez00_24, BNIL);
					return
						MAKE_YOUNG_PAIR(BGl_symbol2310z00zz__match_compilerz00,
						BgL_arg1300z00_1415);
				}
			else
				{	/* Match/compiler.scm 121 */
					bool_t BgL_test2446z00_4375;

					if (INTEGERP(BgL_constz00_25))
						{	/* Match/compiler.scm 121 */
							BgL_test2446z00_4375 = ((bool_t) 1);
						}
					else
						{	/* Match/compiler.scm 121 */
							if (CHARP(BgL_constz00_25))
								{	/* Match/compiler.scm 122 */
									BgL_test2446z00_4375 = ((bool_t) 1);
								}
							else
								{	/* Match/compiler.scm 122 */
									if (BOOLEANP(BgL_constz00_25))
										{	/* Match/compiler.scm 123 */
											BgL_test2446z00_4375 = ((bool_t) 1);
										}
									else
										{	/* Match/compiler.scm 123 */
											BgL_test2446z00_4375 = SYMBOLP(BgL_constz00_25);
										}
								}
						}
					if (BgL_test2446z00_4375)
						{	/* Match/compiler.scm 125 */
							obj_t BgL_arg1306z00_1420;

							{	/* Match/compiler.scm 125 */
								obj_t BgL_arg1307z00_1421;

								{	/* Match/compiler.scm 125 */
									obj_t BgL_arg1308z00_1422;

									{	/* Match/compiler.scm 125 */
										obj_t BgL_arg1309z00_1423;

										BgL_arg1309z00_1423 =
											MAKE_YOUNG_PAIR(BgL_constz00_25, BNIL);
										BgL_arg1308z00_1422 =
											MAKE_YOUNG_PAIR(BGl_symbol2266z00zz__match_compilerz00,
											BgL_arg1309z00_1423);
									}
									BgL_arg1307z00_1421 =
										MAKE_YOUNG_PAIR(BgL_arg1308z00_1422, BNIL);
								}
								BgL_arg1306z00_1420 =
									MAKE_YOUNG_PAIR(BgL_ez00_24, BgL_arg1307z00_1421);
							}
							return
								MAKE_YOUNG_PAIR(BGl_symbol2308z00zz__match_compilerz00,
								BgL_arg1306z00_1420);
						}
					else
						{	/* Match/compiler.scm 121 */
							if (REALP(BgL_constz00_25))
								{	/* Match/compiler.scm 127 */
									obj_t BgL_arg1311z00_1425;

									{	/* Match/compiler.scm 127 */
										obj_t BgL_arg1312z00_1426;
										obj_t BgL_arg1313z00_1427;

										{	/* Match/compiler.scm 127 */
											obj_t BgL_arg1314z00_1428;

											BgL_arg1314z00_1428 = MAKE_YOUNG_PAIR(BgL_ez00_24, BNIL);
											BgL_arg1312z00_1426 =
												MAKE_YOUNG_PAIR(BGl_symbol2312z00zz__match_compilerz00,
												BgL_arg1314z00_1428);
										}
										{	/* Match/compiler.scm 127 */
											obj_t BgL_arg1315z00_1429;

											{	/* Match/compiler.scm 127 */
												obj_t BgL_arg1316z00_1430;

												{	/* Match/compiler.scm 127 */
													obj_t BgL_arg1317z00_1431;

													BgL_arg1317z00_1431 =
														MAKE_YOUNG_PAIR(BgL_constz00_25, BNIL);
													BgL_arg1316z00_1430 =
														MAKE_YOUNG_PAIR(BgL_ez00_24, BgL_arg1317z00_1431);
												}
												BgL_arg1315z00_1429 =
													MAKE_YOUNG_PAIR
													(BGl_symbol2314z00zz__match_compilerz00,
													BgL_arg1316z00_1430);
											}
											BgL_arg1313z00_1427 =
												MAKE_YOUNG_PAIR(BgL_arg1315z00_1429, BNIL);
										}
										BgL_arg1311z00_1425 =
											MAKE_YOUNG_PAIR(BgL_arg1312z00_1426, BgL_arg1313z00_1427);
									}
									return
										MAKE_YOUNG_PAIR(BGl_symbol2276z00zz__match_compilerz00,
										BgL_arg1311z00_1425);
								}
							else
								{	/* Match/compiler.scm 126 */
									if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_constz00_25))
										{	/* Match/compiler.scm 129 */
											obj_t BgL_arg1319z00_1433;

											{	/* Match/compiler.scm 129 */
												obj_t BgL_arg1322z00_1434;
												obj_t BgL_arg1324z00_1435;

												{	/* Match/compiler.scm 129 */
													obj_t BgL_arg1325z00_1436;

													BgL_arg1325z00_1436 =
														MAKE_YOUNG_PAIR(BgL_ez00_24, BNIL);
													BgL_arg1322z00_1434 =
														MAKE_YOUNG_PAIR
														(BGl_symbol2316z00zz__match_compilerz00,
														BgL_arg1325z00_1436);
												}
												{	/* Match/compiler.scm 129 */
													obj_t BgL_arg1326z00_1437;

													{	/* Match/compiler.scm 129 */
														obj_t BgL_arg1327z00_1438;

														{	/* Match/compiler.scm 129 */
															obj_t BgL_arg1328z00_1439;

															BgL_arg1328z00_1439 =
																MAKE_YOUNG_PAIR(BgL_constz00_25, BNIL);
															BgL_arg1327z00_1438 =
																MAKE_YOUNG_PAIR(BgL_ez00_24,
																BgL_arg1328z00_1439);
														}
														BgL_arg1326z00_1437 =
															MAKE_YOUNG_PAIR
															(BGl_symbol2318z00zz__match_compilerz00,
															BgL_arg1327z00_1438);
													}
													BgL_arg1324z00_1435 =
														MAKE_YOUNG_PAIR(BgL_arg1326z00_1437, BNIL);
												}
												BgL_arg1319z00_1433 =
													MAKE_YOUNG_PAIR(BgL_arg1322z00_1434,
													BgL_arg1324z00_1435);
											}
											return
												MAKE_YOUNG_PAIR(BGl_symbol2276z00zz__match_compilerz00,
												BgL_arg1319z00_1433);
										}
									else
										{	/* Match/compiler.scm 128 */
											if (STRINGP(BgL_constz00_25))
												{	/* Match/compiler.scm 131 */
													obj_t BgL_arg1330z00_1441;

													{	/* Match/compiler.scm 131 */
														obj_t BgL_arg1331z00_1442;
														obj_t BgL_arg1333z00_1443;

														{	/* Match/compiler.scm 131 */
															obj_t BgL_arg1334z00_1444;

															BgL_arg1334z00_1444 =
																MAKE_YOUNG_PAIR(BgL_ez00_24, BNIL);
															BgL_arg1331z00_1442 =
																MAKE_YOUNG_PAIR
																(BGl_symbol2320z00zz__match_compilerz00,
																BgL_arg1334z00_1444);
														}
														{	/* Match/compiler.scm 131 */
															obj_t BgL_arg1335z00_1445;

															{	/* Match/compiler.scm 131 */
																obj_t BgL_arg1337z00_1446;

																{	/* Match/compiler.scm 131 */
																	obj_t BgL_arg1338z00_1447;

																	BgL_arg1338z00_1447 =
																		MAKE_YOUNG_PAIR(BgL_constz00_25, BNIL);
																	BgL_arg1337z00_1446 =
																		MAKE_YOUNG_PAIR(BgL_ez00_24,
																		BgL_arg1338z00_1447);
																}
																BgL_arg1335z00_1445 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol2322z00zz__match_compilerz00,
																	BgL_arg1337z00_1446);
															}
															BgL_arg1333z00_1443 =
																MAKE_YOUNG_PAIR(BgL_arg1335z00_1445, BNIL);
														}
														BgL_arg1330z00_1441 =
															MAKE_YOUNG_PAIR(BgL_arg1331z00_1442,
															BgL_arg1333z00_1443);
													}
													return
														MAKE_YOUNG_PAIR
														(BGl_symbol2276z00zz__match_compilerz00,
														BgL_arg1330z00_1441);
												}
											else
												{	/* Match/compiler.scm 130 */
													if (NULLP(BgL_constz00_25))
														{	/* Match/compiler.scm 133 */
															obj_t BgL_arg1340z00_1449;

															BgL_arg1340z00_1449 =
																MAKE_YOUNG_PAIR(BgL_ez00_24, BNIL);
															return
																MAKE_YOUNG_PAIR
																(BGl_symbol2310z00zz__match_compilerz00,
																BgL_arg1340z00_1449);
														}
													else
														{	/* Match/compiler.scm 135 */
															obj_t BgL_arg1341z00_1450;

															{	/* Match/compiler.scm 135 */
																obj_t BgL_arg1342z00_1451;

																{	/* Match/compiler.scm 135 */
																	obj_t BgL_arg1343z00_1452;

																	{	/* Match/compiler.scm 135 */
																		obj_t BgL_arg1344z00_1453;

																		BgL_arg1344z00_1453 =
																			MAKE_YOUNG_PAIR(BgL_constz00_25, BNIL);
																		BgL_arg1343z00_1452 =
																			MAKE_YOUNG_PAIR
																			(BGl_symbol2266z00zz__match_compilerz00,
																			BgL_arg1344z00_1453);
																	}
																	BgL_arg1342z00_1451 =
																		MAKE_YOUNG_PAIR(BgL_arg1343z00_1452, BNIL);
																}
																BgL_arg1341z00_1450 =
																	MAKE_YOUNG_PAIR(BgL_ez00_24,
																	BgL_arg1342z00_1451);
															}
															return
																MAKE_YOUNG_PAIR
																(BGl_symbol2324z00zz__match_compilerz00,
																BgL_arg1341z00_1450);
														}
												}
										}
								}
						}
				}
		}

	}



/* compile-or */
	obj_t BGl_compilezd2orzd2zz__match_compilerz00(obj_t BgL_f1z00_40,
		obj_t BgL_f2z00_41, obj_t BgL_ez00_42, obj_t BgL_rz00_43, obj_t BgL_mz00_44,
		obj_t BgL_kz00_45, obj_t BgL_za7za7_46, obj_t BgL_dz00_47)
	{
		{	/* Match/compiler.scm 151 */
			{	/* Match/compiler.scm 152 */
				obj_t BgL_za2kza2z00_1475;

				BgL_za2kza2z00_1475 =
					PROCEDURE_ENTRY(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
					(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
					BGl_string2304z00zz__match_compilerz00, BEOA);
				{	/* Match/compiler.scm 152 */
					obj_t BgL_za2varsza2z00_1476;

					BgL_za2varsza2z00_1476 =
						BGl_patternzd2variableszd2zz__match_descriptionsz00(BgL_f1z00_40);
					{	/* Match/compiler.scm 153 */
						obj_t BgL_za2callza2z00_1477;

						BgL_za2callza2z00_1477 =
							MAKE_YOUNG_PAIR(BgL_za2kza2z00_1475,
							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
							(BgL_za2varsza2z00_1476, BNIL));
						{	/* Match/compiler.scm 154 */
							obj_t BgL_successzd2formzd2_1478;

							{	/* Match/compiler.scm 155 */
								obj_t BgL_arg1386z00_1529;

								BgL_arg1386z00_1529 =
									BGl_extendza2za2zz__match_compilerz00(BgL_rz00_43,
									BgL_za2varsza2z00_1476);
								BgL_successzd2formzd2_1478 =
									PROCEDURE_ENTRY(BgL_kz00_45) (BgL_kz00_45,
									BgL_arg1386z00_1529, BgL_za7za7_46, BgL_dz00_47, BEOA);
							}
							{	/* Match/compiler.scm 155 */

								{	/* Match/compiler.scm 157 */
									bool_t BgL_test2454z00_4441;

									if ((BgL_successzd2formzd2_1478 == BFALSE))
										{	/* Match/compiler.scm 157 */
											BgL_test2454z00_4441 = ((bool_t) 1);
										}
									else
										{	/* Match/compiler.scm 157 */
											if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(CDR
													(BgL_za2callza2z00_1477),
													CDR(((obj_t) BgL_successzd2formzd2_1478))))
												{	/* Match/compiler.scm 158 */
													BgL_test2454z00_4441 = ((bool_t) 1);
												}
											else
												{	/* Match/compiler.scm 158 */
													BgL_test2454z00_4441 =
														BGl_isDirectCallzf3zf3zz__match_compilerz00
														(BgL_successzd2formzd2_1478);
												}
										}
									if (BgL_test2454z00_4441)
										{	/* Match/compiler.scm 161 */
											obj_t BgL_zc3z04anonymousza31369ze3z87_3591;
											obj_t BgL_zc3z04anonymousza31368ze3z87_3592;

											BgL_zc3z04anonymousza31369ze3z87_3591 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31369ze3ze5zz__match_compilerz00,
												(int) (((long) 1)), (int) (((long) 6)));
											BgL_zc3z04anonymousza31368ze3z87_3592 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31368ze3ze5zz__match_compilerz00,
												(int) (((long) 3)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31369ze3z87_3591,
												(int) (((long) 0)), BgL_successzd2formzd2_1478);
											PROCEDURE_SET(BgL_zc3z04anonymousza31369ze3z87_3591,
												(int) (((long) 1)), BgL_f2z00_41);
											PROCEDURE_SET(BgL_zc3z04anonymousza31369ze3z87_3591,
												(int) (((long) 2)), BgL_ez00_42);
											PROCEDURE_SET(BgL_zc3z04anonymousza31369ze3z87_3591,
												(int) (((long) 3)), BgL_rz00_43);
											PROCEDURE_SET(BgL_zc3z04anonymousza31369ze3z87_3591,
												(int) (((long) 4)), BgL_mz00_44);
											PROCEDURE_SET(BgL_zc3z04anonymousza31369ze3z87_3591,
												(int) (((long) 5)), BgL_za7za7_46);
											PROCEDURE_SET(BgL_zc3z04anonymousza31368ze3z87_3592,
												(int) (((long) 0)), BgL_successzd2formzd2_1478);
											return BGl_compilez00zz__match_compilerz00(BgL_f1z00_40,
												BgL_ez00_42, BgL_rz00_43, BgL_mz00_44,
												BgL_zc3z04anonymousza31368ze3z87_3592,
												BgL_zc3z04anonymousza31369ze3z87_3591, BgL_dz00_47);
										}
									else
										{	/* Match/compiler.scm 167 */
											obj_t BgL_resz00_1502;

											{	/* Match/compiler.scm 168 */
												obj_t BgL_zc3z04anonymousza31381ze3z87_3594;
												obj_t BgL_zc3z04anonymousza31380ze3z87_3595;

												BgL_zc3z04anonymousza31381ze3z87_3594 =
													MAKE_FX_PROCEDURE
													(BGl_z62zc3z04anonymousza31381ze3ze5zz__match_compilerz00,
													(int) (((long) 1)), (int) (((long) 6)));
												BgL_zc3z04anonymousza31380ze3z87_3595 =
													MAKE_FX_PROCEDURE
													(BGl_z62zc3z04anonymousza31380ze3ze5zz__match_compilerz00,
													(int) (((long) 3)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3z04anonymousza31381ze3z87_3594,
													(int) (((long) 0)), BgL_za2callza2z00_1477);
												PROCEDURE_SET(BgL_zc3z04anonymousza31381ze3z87_3594,
													(int) (((long) 1)), BgL_f2z00_41);
												PROCEDURE_SET(BgL_zc3z04anonymousza31381ze3z87_3594,
													(int) (((long) 2)), BgL_ez00_42);
												PROCEDURE_SET(BgL_zc3z04anonymousza31381ze3z87_3594,
													(int) (((long) 3)), BgL_rz00_43);
												PROCEDURE_SET(BgL_zc3z04anonymousza31381ze3z87_3594,
													(int) (((long) 4)), BgL_mz00_44);
												PROCEDURE_SET(BgL_zc3z04anonymousza31381ze3z87_3594,
													(int) (((long) 5)), BgL_za7za7_46);
												PROCEDURE_SET(BgL_zc3z04anonymousza31380ze3z87_3595,
													(int) (((long) 0)), BgL_za2callza2z00_1477);
												BgL_resz00_1502 =
													BGl_compilez00zz__match_compilerz00(BgL_f1z00_40,
													BgL_ez00_42, BgL_rz00_43, BgL_mz00_44,
													BgL_zc3z04anonymousza31380ze3z87_3595,
													BgL_zc3z04anonymousza31381ze3z87_3594, BgL_dz00_47);
											}
											if (CBOOL(BgL_resz00_1502))
												{	/* Match/compiler.scm 175 */
													obj_t BgL_arg1372z00_1503;

													{	/* Match/compiler.scm 175 */
														obj_t BgL_arg1373z00_1504;
														obj_t BgL_arg1374z00_1505;

														{	/* Match/compiler.scm 175 */
															obj_t BgL_arg1375z00_1506;

															{	/* Match/compiler.scm 175 */
																obj_t BgL_arg1376z00_1507;

																{	/* Match/compiler.scm 175 */
																	obj_t BgL_arg1377z00_1508;

																	BgL_arg1377z00_1508 =
																		MAKE_YOUNG_PAIR(BgL_successzd2formzd2_1478,
																		BNIL);
																	BgL_arg1376z00_1507 =
																		MAKE_YOUNG_PAIR(BgL_za2varsza2z00_1476,
																		BgL_arg1377z00_1508);
																}
																BgL_arg1375z00_1506 =
																	MAKE_YOUNG_PAIR(BgL_za2kza2z00_1475,
																	BgL_arg1376z00_1507);
															}
															BgL_arg1373z00_1504 =
																MAKE_YOUNG_PAIR(BgL_arg1375z00_1506, BNIL);
														}
														BgL_arg1374z00_1505 =
															MAKE_YOUNG_PAIR(BgL_resz00_1502, BNIL);
														BgL_arg1372z00_1503 =
															MAKE_YOUNG_PAIR(BgL_arg1373z00_1504,
															BgL_arg1374z00_1505);
													}
													return
														MAKE_YOUNG_PAIR
														(BGl_symbol2326z00zz__match_compilerz00,
														BgL_arg1372z00_1503);
												}
											else
												{	/* Match/compiler.scm 174 */
													return BgL_resz00_1502;
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



/* &<@anonymous:1369> */
	obj_t BGl_z62zc3z04anonymousza31369ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3596, obj_t BgL_dz00_3603)
	{
		{	/* Match/compiler.scm 162 */
			{	/* Match/compiler.scm 164 */
				obj_t BgL_successzd2formzd2_3597;
				obj_t BgL_f2z00_3598;
				obj_t BgL_ez00_3599;
				obj_t BgL_rz00_3600;
				obj_t BgL_mz00_3601;
				obj_t BgL_za7za7_3602;

				BgL_successzd2formzd2_3597 =
					PROCEDURE_REF(BgL_envz00_3596, (int) (((long) 0)));
				BgL_f2z00_3598 = PROCEDURE_REF(BgL_envz00_3596, (int) (((long) 1)));
				BgL_ez00_3599 = PROCEDURE_REF(BgL_envz00_3596, (int) (((long) 2)));
				BgL_rz00_3600 = PROCEDURE_REF(BgL_envz00_3596, (int) (((long) 3)));
				BgL_mz00_3601 = PROCEDURE_REF(BgL_envz00_3596, (int) (((long) 4)));
				BgL_za7za7_3602 = PROCEDURE_REF(BgL_envz00_3596, (int) (((long) 5)));
				{	/* Match/compiler.scm 164 */
					obj_t BgL_zc3z04anonymousza31371ze3z87_3780;

					BgL_zc3z04anonymousza31371ze3z87_3780 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31371ze3ze5zz__match_compilerz00,
						(int) (((long) 3)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31371ze3z87_3780,
						(int) (((long) 0)), BgL_successzd2formzd2_3597);
					return BGl_compilez00zz__match_compilerz00(BgL_f2z00_3598,
						BgL_ez00_3599, BgL_rz00_3600, BgL_mz00_3601,
						BgL_zc3z04anonymousza31371ze3z87_3780, BgL_za7za7_3602,
						BgL_dz00_3603);
				}
			}
		}

	}



/* &<@anonymous:1368> */
	obj_t BGl_z62zc3z04anonymousza31368ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3604, obj_t BgL_rz00_3606, obj_t BgL_za7za7_3607,
		obj_t BgL_dz00_3608)
	{
		{	/* Match/compiler.scm 161 */
			return PROCEDURE_REF(BgL_envz00_3604, (int) (((long) 0)));
		}

	}



/* &<@anonymous:1371> */
	obj_t BGl_z62zc3z04anonymousza31371ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3609, obj_t BgL_rz00_3611, obj_t BgL_za7za7_3612,
		obj_t BgL_dz00_3613)
	{
		{	/* Match/compiler.scm 164 */
			return PROCEDURE_REF(BgL_envz00_3609, (int) (((long) 0)));
		}

	}



/* &<@anonymous:1381> */
	obj_t BGl_z62zc3z04anonymousza31381ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3614, obj_t BgL_dz00_3621)
	{
		{	/* Match/compiler.scm 169 */
			{	/* Match/compiler.scm 171 */
				obj_t BgL_za2callza2z00_3615;
				obj_t BgL_f2z00_3616;
				obj_t BgL_ez00_3617;
				obj_t BgL_rz00_3618;
				obj_t BgL_mz00_3619;
				obj_t BgL_za7za7_3620;

				BgL_za2callza2z00_3615 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3614, (int) (((long) 0))));
				BgL_f2z00_3616 = PROCEDURE_REF(BgL_envz00_3614, (int) (((long) 1)));
				BgL_ez00_3617 = PROCEDURE_REF(BgL_envz00_3614, (int) (((long) 2)));
				BgL_rz00_3618 = PROCEDURE_REF(BgL_envz00_3614, (int) (((long) 3)));
				BgL_mz00_3619 = PROCEDURE_REF(BgL_envz00_3614, (int) (((long) 4)));
				BgL_za7za7_3620 = PROCEDURE_REF(BgL_envz00_3614, (int) (((long) 5)));
				{	/* Match/compiler.scm 171 */
					obj_t BgL_zc3z04anonymousza31383ze3z87_3781;

					BgL_zc3z04anonymousza31383ze3z87_3781 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31383ze3ze5zz__match_compilerz00,
						(int) (((long) 3)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31383ze3z87_3781,
						(int) (((long) 0)), BgL_za2callza2z00_3615);
					return BGl_compilez00zz__match_compilerz00(BgL_f2z00_3616,
						BgL_ez00_3617, BgL_rz00_3618, BgL_mz00_3619,
						BgL_zc3z04anonymousza31383ze3z87_3781, BgL_za7za7_3620,
						BgL_dz00_3621);
				}
			}
		}

	}



/* &<@anonymous:1380> */
	obj_t BGl_z62zc3z04anonymousza31380ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3622, obj_t BgL_rz00_3624, obj_t BgL_za7za7_3625,
		obj_t BgL_dz00_3626)
	{
		{	/* Match/compiler.scm 168 */
			return ((obj_t) PROCEDURE_REF(BgL_envz00_3622, (int) (((long) 0))));
		}

	}



/* &<@anonymous:1383> */
	obj_t BGl_z62zc3z04anonymousza31383ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3627, obj_t BgL_rz00_3629, obj_t BgL_za7za7_3630,
		obj_t BgL_dz00_3631)
	{
		{	/* Match/compiler.scm 171 */
			return ((obj_t) PROCEDURE_REF(BgL_envz00_3627, (int) (((long) 0))));
		}

	}



/* isDirectCall? */
	bool_t BGl_isDirectCallzf3zf3zz__match_compilerz00(obj_t BgL_ez00_48)
	{
		{	/* Match/compiler.scm 182 */
			if (PAIRP(BgL_ez00_48))
				{	/* Match/compiler.scm 184 */
					obj_t BgL_prz00_1532;

					BgL_prz00_1532 = CAR(BgL_ez00_48);
					if (SYMBOLP(BgL_prz00_1532))
						{	/* Match/compiler.scm 186 */
							obj_t BgL_sz00_1534;

							{	/* Match/compiler.scm 186 */
								obj_t BgL_res2140z00_2733;

								{	/* Match/compiler.scm 186 */
									obj_t BgL_arg1912z00_2732;

									BgL_arg1912z00_2732 = SYMBOL_TO_STRING(BgL_prz00_1532);
									BgL_res2140z00_2733 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg1912z00_2732);
								}
								BgL_sz00_1534 = BgL_res2140z00_2733;
							}
							if ((STRING_LENGTH(BgL_sz00_1534) > ((long) 3)))
								{	/* Match/compiler.scm 188 */
									obj_t BgL_sz00_1536;

									BgL_sz00_1536 =
										c_substring(BgL_sz00_1534, ((long) 0), ((long) 3));
									{	/* Match/compiler.scm 189 */
										bool_t BgL__ortest_1042z00_1537;

										{	/* Match/compiler.scm 189 */
											bool_t BgL_res2148z00_2755;

											{	/* Match/compiler.scm 189 */
												long BgL_l1z00_2742;

												BgL_l1z00_2742 = STRING_LENGTH(BgL_sz00_1536);
												if ((BgL_l1z00_2742 == ((long) 3)))
													{	/* Match/compiler.scm 189 */
														int BgL_arg1905z00_2745;

														{	/* Match/compiler.scm 189 */
															char *BgL_auxz00_4564;
															char *BgL_tmpz00_4562;

															BgL_auxz00_4564 =
																BSTRING_TO_STRING
																(BGl_string2328z00zz__match_compilerz00);
															BgL_tmpz00_4562 =
																BSTRING_TO_STRING(BgL_sz00_1536);
															BgL_arg1905z00_2745 =
																memcmp(BgL_tmpz00_4562, BgL_auxz00_4564,
																BgL_l1z00_2742);
														}
														BgL_res2148z00_2755 =
															((long) (BgL_arg1905z00_2745) == ((long) 0));
													}
												else
													{	/* Match/compiler.scm 189 */
														BgL_res2148z00_2755 = ((bool_t) 0);
													}
											}
											BgL__ortest_1042z00_1537 = BgL_res2148z00_2755;
										}
										if (BgL__ortest_1042z00_1537)
											{	/* Match/compiler.scm 189 */
												return BgL__ortest_1042z00_1537;
											}
										else
											{	/* Match/compiler.scm 190 */
												bool_t BgL_res2153z00_2771;

												{	/* Match/compiler.scm 190 */
													long BgL_l1z00_2758;

													BgL_l1z00_2758 = STRING_LENGTH(BgL_sz00_1536);
													if ((BgL_l1z00_2758 == ((long) 3)))
														{	/* Match/compiler.scm 190 */
															int BgL_arg1905z00_2761;

															{	/* Match/compiler.scm 190 */
																char *BgL_auxz00_4575;
																char *BgL_tmpz00_4573;

																BgL_auxz00_4575 =
																	BSTRING_TO_STRING
																	(BGl_string2329z00zz__match_compilerz00);
																BgL_tmpz00_4573 =
																	BSTRING_TO_STRING(BgL_sz00_1536);
																BgL_arg1905z00_2761 =
																	memcmp(BgL_tmpz00_4573, BgL_auxz00_4575,
																	BgL_l1z00_2758);
															}
															BgL_res2153z00_2771 =
																((long) (BgL_arg1905z00_2761) == ((long) 0));
														}
													else
														{	/* Match/compiler.scm 190 */
															BgL_res2153z00_2771 = ((bool_t) 0);
														}
												}
												return BgL_res2153z00_2771;
											}
									}
								}
							else
								{	/* Match/compiler.scm 187 */
									return ((bool_t) 0);
								}
						}
					else
						{	/* Match/compiler.scm 185 */
							return ((bool_t) 0);
						}
				}
			else
				{	/* Match/compiler.scm 183 */
					return ((bool_t) 0);
				}
		}

	}



/* compile-var */
	obj_t BGl_compilezd2varzd2zz__match_compilerz00(obj_t BgL_nz00_66,
		obj_t BgL_ez00_67, obj_t BgL_rz00_68, obj_t BgL_mz00_69, obj_t BgL_kz00_70,
		obj_t BgL_za7za7_71, obj_t BgL_cz00_72)
	{
		{	/* Match/compiler.scm 215 */
			{	/* Match/compiler.scm 216 */
				bool_t BgL_test2464z00_4580;

				{	/* Match/compiler.scm 455 */
					bool_t BgL_test2465z00_4581;

					{	/* Match/compiler.scm 455 */
						obj_t BgL_tmpz00_4582;

						if (CBOOL(BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_nz00_66,
									BgL_rz00_68)))
							{	/* Match/compiler.scm 438 */
								BgL_tmpz00_4582 =
									CDR(BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_nz00_66,
										BgL_rz00_68));
							}
						else
							{	/* Match/compiler.scm 438 */
								BgL_tmpz00_4582 = BGl_symbol2330z00zz__match_compilerz00;
							}
						BgL_test2465z00_4581 =
							(BgL_tmpz00_4582 == BGl_symbol2330z00zz__match_compilerz00);
					}
					if (BgL_test2465z00_4581)
						{	/* Match/compiler.scm 455 */
							BgL_test2464z00_4580 = ((bool_t) 0);
						}
					else
						{	/* Match/compiler.scm 455 */
							BgL_test2464z00_4580 = ((bool_t) 1);
						}
				}
				if (BgL_test2464z00_4580)
					{	/* Match/compiler.scm 217 */
						obj_t BgL_arg1398z00_1559;
						obj_t BgL_arg1399z00_1560;
						obj_t BgL_arg1400z00_1561;

						{	/* Match/compiler.scm 217 */
							obj_t BgL_arg1401z00_1562;

							{	/* Match/compiler.scm 217 */
								obj_t BgL_arg1402z00_1563;

								BgL_arg1402z00_1563 = MAKE_YOUNG_PAIR(BgL_ez00_67, BNIL);
								BgL_arg1401z00_1562 =
									MAKE_YOUNG_PAIR(BgL_nz00_66, BgL_arg1402z00_1563);
							}
							BgL_arg1398z00_1559 =
								MAKE_YOUNG_PAIR(BGl_symbol2308z00zz__match_compilerz00,
								BgL_arg1401z00_1562);
						}
						{	/* Match/compiler.scm 218 */
							obj_t BgL_arg1404z00_1564;

							{	/* Match/compiler.scm 218 */
								obj_t BgL_arg1405z00_1565;

								{	/* Match/compiler.scm 218 */
									obj_t BgL_list1406z00_1566;

									{	/* Match/compiler.scm 218 */
										obj_t BgL_arg1407z00_1567;

										BgL_arg1407z00_1567 = MAKE_YOUNG_PAIR(BgL_nz00_66, BNIL);
										BgL_list1406z00_1566 =
											MAKE_YOUNG_PAIR(BGl_symbol2268z00zz__match_compilerz00,
											BgL_arg1407z00_1567);
									}
									BgL_arg1405z00_1565 = BgL_list1406z00_1566;
								}
								BgL_arg1404z00_1564 =
									BGl_patternzd2pluszd2zz__match_descriptionsz00(BgL_cz00_72,
									BgL_arg1405z00_1565);
							}
							BgL_arg1399z00_1560 =
								PROCEDURE_ENTRY(BgL_kz00_70) (BgL_kz00_70, BgL_rz00_68,
								BgL_za7za7_71, BgL_arg1404z00_1564, BEOA);
						}
						{	/* Match/compiler.scm 219 */
							obj_t BgL_arg1409z00_1568;

							{	/* Match/compiler.scm 219 */
								obj_t BgL_arg1410z00_1569;

								{	/* Match/compiler.scm 219 */
									obj_t BgL_list1411z00_1570;

									{	/* Match/compiler.scm 219 */
										obj_t BgL_arg1412z00_1571;

										BgL_arg1412z00_1571 = MAKE_YOUNG_PAIR(BgL_nz00_66, BNIL);
										BgL_list1411z00_1570 =
											MAKE_YOUNG_PAIR(BGl_symbol2268z00zz__match_compilerz00,
											BgL_arg1412z00_1571);
									}
									BgL_arg1410z00_1569 = BgL_list1411z00_1570;
								}
								BgL_arg1409z00_1568 =
									BGl_patternzd2minuszd2zz__match_descriptionsz00(BgL_cz00_72,
									BgL_arg1410z00_1569);
							}
							BgL_arg1400z00_1561 =
								PROCEDURE_ENTRY(BgL_za7za7_71) (BgL_za7za7_71,
								BgL_arg1409z00_1568, BEOA);
						}
						return
							BGl_buildzd2ifzd2zz__match_compilerz00(BgL_arg1398z00_1559,
							BgL_arg1399z00_1560, BgL_arg1400z00_1561);
					}
				else
					{	/* Match/compiler.scm 220 */
						obj_t BgL_bodyz00_1572;

						{	/* Match/compiler.scm 220 */
							obj_t BgL_arg1421z00_1581;
							obj_t BgL_arg1422z00_1582;

							{	/* Match/compiler.scm 435 */
								obj_t BgL_arg1656z00_2795;
								obj_t BgL_arg1657z00_2796;

								BgL_arg1656z00_2795 = MAKE_YOUNG_PAIR(BgL_nz00_66, BgL_ez00_67);
								BgL_arg1657z00_2796 =
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_rz00_68,
									BNIL);
								BgL_arg1421z00_1581 =
									MAKE_YOUNG_PAIR(BgL_arg1656z00_2795, BgL_arg1657z00_2796);
							}
							{	/* Match/compiler.scm 221 */
								obj_t BgL_arg1424z00_1583;

								{	/* Match/compiler.scm 221 */
									obj_t BgL_list1425z00_1584;

									{	/* Match/compiler.scm 221 */
										obj_t BgL_arg1426z00_1585;

										BgL_arg1426z00_1585 = MAKE_YOUNG_PAIR(BgL_nz00_66, BNIL);
										BgL_list1425z00_1584 =
											MAKE_YOUNG_PAIR(BGl_symbol2268z00zz__match_compilerz00,
											BgL_arg1426z00_1585);
									}
									BgL_arg1424z00_1583 = BgL_list1425z00_1584;
								}
								BgL_arg1422z00_1582 =
									BGl_patternzd2pluszd2zz__match_descriptionsz00(BgL_cz00_72,
									BgL_arg1424z00_1583);
							}
							BgL_bodyz00_1572 =
								PROCEDURE_ENTRY(BgL_kz00_70) (BgL_kz00_70, BgL_arg1421z00_1581,
								BgL_za7za7_71, BgL_arg1422z00_1582, BEOA);
						}
						if (BGl_2ze3ze3zz__r4_numbers_6_5z00
							(BGl_countzd2occurrenceszd2zz__match_compilerz00(BgL_nz00_66,
									BgL_bodyz00_1572, ((long) 0)), BINT(((long) 1))))
							{	/* Match/compiler.scm 223 */
								obj_t BgL_arg1415z00_1575;

								{	/* Match/compiler.scm 223 */
									obj_t BgL_arg1416z00_1576;
									obj_t BgL_arg1417z00_1577;

									{	/* Match/compiler.scm 223 */
										obj_t BgL_arg1418z00_1578;

										{	/* Match/compiler.scm 223 */
											obj_t BgL_arg1419z00_1579;

											BgL_arg1419z00_1579 = MAKE_YOUNG_PAIR(BgL_ez00_67, BNIL);
											BgL_arg1418z00_1578 =
												MAKE_YOUNG_PAIR(BgL_nz00_66, BgL_arg1419z00_1579);
										}
										BgL_arg1416z00_1576 =
											MAKE_YOUNG_PAIR(BgL_arg1418z00_1578, BNIL);
									}
									BgL_arg1417z00_1577 = MAKE_YOUNG_PAIR(BgL_bodyz00_1572, BNIL);
									BgL_arg1415z00_1575 =
										MAKE_YOUNG_PAIR(BgL_arg1416z00_1576, BgL_arg1417z00_1577);
								}
								return
									MAKE_YOUNG_PAIR(BGl_symbol2332z00zz__match_compilerz00,
									BgL_arg1415z00_1575);
							}
						else
							{	/* Match/compiler.scm 222 */
								return
									BGl_unfoldz00zz__match_compilerz00(BgL_nz00_66, BgL_ez00_67,
									BgL_bodyz00_1572);
							}
					}
			}
		}

	}



/* count-occurrences */
	obj_t BGl_countzd2occurrenceszd2zz__match_compilerz00(obj_t BgL_sz00_73,
		obj_t BgL_ez00_74, long BgL_accz00_75)
	{
		{	/* Match/compiler.scm 227 */
			if (NULLP(BgL_ez00_74))
				{	/* Match/compiler.scm 228 */
					return BINT(BgL_accz00_75);
				}
			else
				{	/* Match/compiler.scm 228 */
					if (CBOOL(BGl_atomzf3zf3zz__match_s2cfunz00(BgL_ez00_74)))
						{	/* Match/compiler.scm 230 */
							if ((BgL_sz00_73 == BgL_ez00_74))
								{	/* Match/compiler.scm 231 */
									return BINT((BgL_accz00_75 + ((long) 1)));
								}
							else
								{	/* Match/compiler.scm 231 */
									return BINT(BgL_accz00_75);
								}
						}
					else
						{	/* Match/compiler.scm 230 */
							if (PAIRP(BgL_ez00_74))
								{	/* Match/compiler.scm 234 */
									if (
										(CAR(BgL_ez00_74) ==
											BGl_symbol2266z00zz__match_compilerz00))
										{	/* Match/compiler.scm 235 */
											return BINT(BgL_accz00_75);
										}
									else
										{	/* Match/compiler.scm 235 */
											return
												BGl_2zb2zb2zz__r4_numbers_6_5z00
												(BGl_countzd2occurrenceszd2zz__match_compilerz00
												(BgL_sz00_73, CAR(BgL_ez00_74), BgL_accz00_75),
												BGl_countzd2occurrenceszd2zz__match_compilerz00
												(BgL_sz00_73, CDR(BgL_ez00_74), BgL_accz00_75));
										}
								}
							else
								{	/* Match/compiler.scm 234 */
									return BFALSE;
								}
						}
				}
		}

	}



/* succes-cons */
	obj_t BGl_succeszd2conszd2zz__match_compilerz00(obj_t BgL_f1z00_85,
		obj_t BgL_f2z00_86, obj_t BgL_ez00_87, obj_t BgL_rz00_88, obj_t BgL_mz00_89,
		obj_t BgL_kz00_90, obj_t BgL_za7za7_91, obj_t BgL_cz00_92)
	{
		{	/* Match/compiler.scm 256 */
			{	/* Match/compiler.scm 257 */
				obj_t BgL_za2carza2z00_1612;

				BgL_za2carza2z00_1612 =
					PROCEDURE_ENTRY(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
					(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
					BGl_string2334z00zz__match_compilerz00, BEOA);
				{	/* Match/compiler.scm 257 */
					obj_t BgL_za2cdrza2z00_1613;

					BgL_za2cdrza2z00_1613 =
						PROCEDURE_ENTRY(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
						(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
						BGl_string2335z00zz__match_compilerz00, BEOA);
					{	/* Match/compiler.scm 258 */
						obj_t BgL_bodyz00_1614;

						{	/* Match/compiler.scm 261 */
							obj_t BgL_arg1457z00_1617;

							BgL_arg1457z00_1617 =
								BGl_patternzd2carzd2zz__match_descriptionsz00(BgL_cz00_92);
							{	/* Match/compiler.scm 263 */
								obj_t BgL_zc3z04anonymousza31472ze3z87_3632;
								obj_t BgL_zc3z04anonymousza31458ze3z87_3635;

								BgL_zc3z04anonymousza31472ze3z87_3632 =
									MAKE_FX_PROCEDURE
									(BGl_z62zc3z04anonymousza31472ze3ze5zz__match_compilerz00,
									(int) (((long) 1)), (int) (((long) 2)));
								BgL_zc3z04anonymousza31458ze3z87_3635 =
									MAKE_FX_PROCEDURE
									(BGl_z62zc3z04anonymousza31458ze3ze5zz__match_compilerz00,
									(int) (((long) 3)), (int) (((long) 6)));
								PROCEDURE_SET(BgL_zc3z04anonymousza31472ze3z87_3632,
									(int) (((long) 0)), BgL_cz00_92);
								PROCEDURE_SET(BgL_zc3z04anonymousza31472ze3z87_3632,
									(int) (((long) 1)), BgL_za7za7_91);
								PROCEDURE_SET(BgL_zc3z04anonymousza31458ze3z87_3635,
									(int) (((long) 0)), BgL_cz00_92);
								PROCEDURE_SET(BgL_zc3z04anonymousza31458ze3z87_3635,
									(int) (((long) 1)), BgL_kz00_90);
								PROCEDURE_SET(BgL_zc3z04anonymousza31458ze3z87_3635,
									(int) (((long) 2)), BgL_za7za7_91);
								PROCEDURE_SET(BgL_zc3z04anonymousza31458ze3z87_3635,
									(int) (((long) 3)), BgL_f2z00_86);
								PROCEDURE_SET(BgL_zc3z04anonymousza31458ze3z87_3635,
									(int) (((long) 4)), BgL_za2cdrza2z00_1613);
								PROCEDURE_SET(BgL_zc3z04anonymousza31458ze3z87_3635,
									(int) (((long) 5)), BgL_mz00_89);
								BgL_bodyz00_1614 =
									BGl_compilez00zz__match_compilerz00(BgL_f1z00_85,
									BgL_za2carza2z00_1612, BgL_rz00_88, BgL_mz00_89,
									BgL_zc3z04anonymousza31458ze3z87_3635,
									BgL_zc3z04anonymousza31472ze3z87_3632, BgL_arg1457z00_1617);
						}}
						{	/* Match/compiler.scm 259 */

							return
								BGl_buildzd2letzd2zz__match_compilerz00(BgL_za2carza2z00_1612,
								BgL_za2cdrza2z00_1613, BgL_ez00_87, BgL_bodyz00_1614);
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1472> */
	obj_t BGl_z62zc3z04anonymousza31472ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3636, obj_t BgL_c2z00_3639)
	{
		{	/* Match/compiler.scm 267 */
			{	/* Match/compiler.scm 267 */
				obj_t BgL_cz00_3637;
				obj_t BgL_za7za7_3638;

				BgL_cz00_3637 = PROCEDURE_REF(BgL_envz00_3636, (int) (((long) 0)));
				BgL_za7za7_3638 = PROCEDURE_REF(BgL_envz00_3636, (int) (((long) 1)));
				{	/* Match/compiler.scm 267 */
					obj_t BgL_arg1473z00_3782;

					{	/* Match/compiler.scm 267 */
						obj_t BgL_arg1474z00_3783;

						BgL_arg1474z00_3783 =
							BGl_patternzd2cdrzd2zz__match_descriptionsz00(BgL_cz00_3637);
						{	/* Match/compiler.scm 267 */
							obj_t BgL_list1475z00_3784;

							{	/* Match/compiler.scm 267 */
								obj_t BgL_arg1476z00_3785;

								{	/* Match/compiler.scm 267 */
									obj_t BgL_arg1477z00_3786;

									BgL_arg1477z00_3786 =
										MAKE_YOUNG_PAIR(BgL_arg1474z00_3783, BNIL);
									BgL_arg1476z00_3785 =
										MAKE_YOUNG_PAIR(BgL_c2z00_3639, BgL_arg1477z00_3786);
								}
								BgL_list1475z00_3784 =
									MAKE_YOUNG_PAIR(BGl_symbol2278z00zz__match_compilerz00,
									BgL_arg1476z00_3785);
							}
							BgL_arg1473z00_3782 = BgL_list1475z00_3784;
					}}
					return
						PROCEDURE_ENTRY(BgL_za7za7_3638) (BgL_za7za7_3638,
						BgL_arg1473z00_3782, BEOA);
				}
			}
		}

	}



/* &<@anonymous:1458> */
	obj_t BGl_z62zc3z04anonymousza31458ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3640, obj_t BgL_r2z00_3647, obj_t BgL_za72za7_3648,
		obj_t BgL_c2z00_3649)
	{
		{	/* Match/compiler.scm 261 */
			{	/* Match/compiler.scm 263 */
				obj_t BgL_cz00_3641;
				obj_t BgL_kz00_3642;
				obj_t BgL_za7za7_3643;
				obj_t BgL_f2z00_3644;
				obj_t BgL_za2cdrza2z00_3645;
				obj_t BgL_mz00_3646;

				BgL_cz00_3641 = PROCEDURE_REF(BgL_envz00_3640, (int) (((long) 0)));
				BgL_kz00_3642 = PROCEDURE_REF(BgL_envz00_3640, (int) (((long) 1)));
				BgL_za7za7_3643 = PROCEDURE_REF(BgL_envz00_3640, (int) (((long) 2)));
				BgL_f2z00_3644 = PROCEDURE_REF(BgL_envz00_3640, (int) (((long) 3)));
				BgL_za2cdrza2z00_3645 =
					PROCEDURE_REF(BgL_envz00_3640, (int) (((long) 4)));
				BgL_mz00_3646 = PROCEDURE_REF(BgL_envz00_3640, (int) (((long) 5)));
				{	/* Match/compiler.scm 263 */
					obj_t BgL_arg1461z00_3787;

					BgL_arg1461z00_3787 =
						BGl_patternzd2cdrzd2zz__match_descriptionsz00(BgL_cz00_3641);
					{	/* Match/compiler.scm 264 */
						obj_t BgL_zc3z04anonymousza31462ze3z87_3788;
						obj_t BgL_zc3z04anonymousza31467ze3z87_3789;

						BgL_zc3z04anonymousza31462ze3z87_3788 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31462ze3ze5zz__match_compilerz00,
							(int) (((long) 3)), (int) (((long) 2)));
						BgL_zc3z04anonymousza31467ze3z87_3789 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31467ze3ze5zz__match_compilerz00,
							(int) (((long) 1)), (int) (((long) 2)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31462ze3z87_3788,
							(int) (((long) 0)), BgL_c2z00_3649);
						PROCEDURE_SET(BgL_zc3z04anonymousza31462ze3z87_3788,
							(int) (((long) 1)), BgL_kz00_3642);
						PROCEDURE_SET(BgL_zc3z04anonymousza31467ze3z87_3789,
							(int) (((long) 0)), BgL_c2z00_3649);
						PROCEDURE_SET(BgL_zc3z04anonymousza31467ze3z87_3789,
							(int) (((long) 1)), BgL_za7za7_3643);
						return BGl_compilez00zz__match_compilerz00(BgL_f2z00_3644,
							BgL_za2cdrza2z00_3645, BgL_r2z00_3647, BgL_mz00_3646,
							BgL_zc3z04anonymousza31462ze3z87_3788,
							BgL_zc3z04anonymousza31467ze3z87_3789, BgL_arg1461z00_3787);
					}
				}
			}
		}

	}



/* &<@anonymous:1467> */
	obj_t BGl_z62zc3z04anonymousza31467ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3650, obj_t BgL_c3z00_3653)
	{
		{	/* Match/compiler.scm 265 */
			{	/* Match/compiler.scm 265 */
				obj_t BgL_c2z00_3651;
				obj_t BgL_za7za7_3652;

				BgL_c2z00_3651 = PROCEDURE_REF(BgL_envz00_3650, (int) (((long) 0)));
				BgL_za7za7_3652 = PROCEDURE_REF(BgL_envz00_3650, (int) (((long) 1)));
				{	/* Match/compiler.scm 265 */
					obj_t BgL_arg1468z00_3790;

					{	/* Match/compiler.scm 265 */
						obj_t BgL_list1469z00_3791;

						{	/* Match/compiler.scm 265 */
							obj_t BgL_arg1470z00_3792;

							{	/* Match/compiler.scm 265 */
								obj_t BgL_arg1471z00_3793;

								BgL_arg1471z00_3793 = MAKE_YOUNG_PAIR(BgL_c3z00_3653, BNIL);
								BgL_arg1470z00_3792 =
									MAKE_YOUNG_PAIR(BgL_c2z00_3651, BgL_arg1471z00_3793);
							}
							BgL_list1469z00_3791 =
								MAKE_YOUNG_PAIR(BGl_symbol2278z00zz__match_compilerz00,
								BgL_arg1470z00_3792);
						}
						BgL_arg1468z00_3790 = BgL_list1469z00_3791;
					}
					return
						PROCEDURE_ENTRY(BgL_za7za7_3652) (BgL_za7za7_3652,
						BgL_arg1468z00_3790, BEOA);
				}
			}
		}

	}



/* &<@anonymous:1462> */
	obj_t BGl_z62zc3z04anonymousza31462ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3654, obj_t BgL_r3z00_3657, obj_t BgL_za73za7_3658,
		obj_t BgL_c3z00_3659)
	{
		{	/* Match/compiler.scm 263 */
			{	/* Match/compiler.scm 264 */
				obj_t BgL_c2z00_3655;
				obj_t BgL_kz00_3656;

				BgL_c2z00_3655 = PROCEDURE_REF(BgL_envz00_3654, (int) (((long) 0)));
				BgL_kz00_3656 = PROCEDURE_REF(BgL_envz00_3654, (int) (((long) 1)));
				{	/* Match/compiler.scm 264 */
					obj_t BgL_arg1463z00_3794;

					{	/* Match/compiler.scm 264 */
						obj_t BgL_list1464z00_3795;

						{	/* Match/compiler.scm 264 */
							obj_t BgL_arg1465z00_3796;

							{	/* Match/compiler.scm 264 */
								obj_t BgL_arg1466z00_3797;

								BgL_arg1466z00_3797 = MAKE_YOUNG_PAIR(BgL_c3z00_3659, BNIL);
								BgL_arg1465z00_3796 =
									MAKE_YOUNG_PAIR(BgL_c2z00_3655, BgL_arg1466z00_3797);
							}
							BgL_list1464z00_3795 =
								MAKE_YOUNG_PAIR(BGl_symbol2278z00zz__match_compilerz00,
								BgL_arg1465z00_3796);
						}
						BgL_arg1463z00_3794 = BgL_list1464z00_3795;
					}
					return
						PROCEDURE_ENTRY(BgL_kz00_3656) (BgL_kz00_3656, BgL_r3z00_3657,
						BgL_za73za7_3658, BgL_arg1463z00_3794, BEOA);
				}
			}
		}

	}



/* compile-times */
	obj_t BGl_compilezd2timeszd2zz__match_compilerz00(obj_t BgL_nz00_93,
		obj_t BgL_f1z00_94, obj_t BgL_f2z00_95, obj_t BgL_ez00_96,
		obj_t BgL_rz00_97, obj_t BgL_mz00_98, obj_t BgL_k0z00_99,
		obj_t BgL_za70za7_100, obj_t BgL_d0z00_101)
	{
		{	/* Match/compiler.scm 284 */
			{	/* Match/compiler.scm 286 */
				obj_t BgL_fzd2envzd2_3710;
				obj_t BgL_dzd2envzd2_3711;

				BgL_fzd2envzd2_3710 = MAKE_CELL(BNIL);
				BgL_dzd2envzd2_3711 = MAKE_CELL(BNIL);
				{	/* Match/compiler.scm 290 */
					obj_t BgL_instanciatezd2tryzd2_3662;

					BgL_instanciatezd2tryzd2_3662 =
						MAKE_FX_PROCEDURE(BGl_z62instanciatezd2tryzb0zz__match_compilerz00,
						(int) (((long) 5)), (int) (((long) 5)));
					PROCEDURE_SET(BgL_instanciatezd2tryzd2_3662,
						(int) (((long) 0)), ((obj_t) BgL_dzd2envzd2_3711));
					PROCEDURE_SET(BgL_instanciatezd2tryzd2_3662,
						(int) (((long) 1)), BgL_nz00_93);
					PROCEDURE_SET(BgL_instanciatezd2tryzd2_3662,
						(int) (((long) 2)), BgL_f1z00_94);
					PROCEDURE_SET(BgL_instanciatezd2tryzd2_3662,
						(int) (((long) 3)), BgL_f2z00_95);
					PROCEDURE_SET(BgL_instanciatezd2tryzd2_3662,
						(int) (((long) 4)), ((obj_t) BgL_fzd2envzd2_3710));
					{	/* Match/compiler.scm 313 */
						obj_t BgL_reszd2bodyzd2_1653;

						{	/* Match/compiler.scm 315 */
							obj_t BgL_zc3z04anonymousza31496ze3z87_3660;
							obj_t BgL_zc3z04anonymousza31495ze3z87_3661;

							BgL_zc3z04anonymousza31496ze3z87_3660 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31496ze3ze5zz__match_compilerz00,
								(int) (((long) 1)), (int) (((long) 2)));
							BgL_zc3z04anonymousza31495ze3z87_3661 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31495ze3ze5zz__match_compilerz00,
								(int) (((long) 3)), (int) (((long) 2)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31496ze3z87_3660,
								(int) (((long) 0)), BgL_za70za7_100);
							PROCEDURE_SET(BgL_zc3z04anonymousza31496ze3z87_3660,
								(int) (((long) 1)), BgL_d0z00_101);
							PROCEDURE_SET(BgL_zc3z04anonymousza31495ze3z87_3661,
								(int) (((long) 0)), BgL_k0z00_99);
							PROCEDURE_SET(BgL_zc3z04anonymousza31495ze3z87_3661,
								(int) (((long) 1)), BgL_d0z00_101);
							BgL_reszd2bodyzd2_1653 =
								BGl_z62instanciatezd2tryzb0zz__match_compilerz00
								(BgL_instanciatezd2tryzd2_3662, BgL_rz00_97, BgL_mz00_98,
								BgL_zc3z04anonymousza31495ze3z87_3661,
								BgL_zc3z04anonymousza31496ze3z87_3660, BgL_d0z00_101);
						}
						{	/* Match/compiler.scm 318 */
							obj_t BgL_arg1478z00_1654;

							{	/* Match/compiler.scm 318 */
								obj_t BgL_arg1479z00_1655;
								obj_t BgL_arg1480z00_1656;

								{	/* Match/compiler.scm 318 */
									obj_t BgL_l1088z00_1657;

									BgL_l1088z00_1657 = CELL_REF(BgL_fzd2envzd2_3710);
									if (NULLP(BgL_l1088z00_1657))
										{	/* Match/compiler.scm 318 */
											BgL_arg1479z00_1655 = BNIL;
										}
									else
										{	/* Match/compiler.scm 318 */
											obj_t BgL_head1090z00_1659;

											{	/* Match/compiler.scm 318 */
												obj_t BgL_arg1487z00_1671;

												{	/* Match/compiler.scm 463 */
													obj_t BgL_pairz00_2868;

													{	/* Match/compiler.scm 463 */
														obj_t BgL_pairz00_2860;

														BgL_pairz00_2860 = CAR(((obj_t) BgL_l1088z00_1657));
														BgL_pairz00_2868 =
															CAR(CDR(CAR(CDR(BgL_pairz00_2860))));
													}
													BgL_arg1487z00_1671 = CAR(BgL_pairz00_2868);
												}
												{	/* Match/compiler.scm 318 */
													obj_t BgL_res2170z00_2869;

													BgL_res2170z00_2869 =
														MAKE_YOUNG_PAIR(BgL_arg1487z00_1671, BNIL);
													BgL_head1090z00_1659 = BgL_res2170z00_2869;
												}
											}
											{	/* Match/compiler.scm 318 */
												obj_t BgL_g1093z00_1660;

												BgL_g1093z00_1660 = CDR(((obj_t) BgL_l1088z00_1657));
												{
													obj_t BgL_l1088z00_2912;
													obj_t BgL_tail1091z00_2913;

													BgL_l1088z00_2912 = BgL_g1093z00_1660;
													BgL_tail1091z00_2913 = BgL_head1090z00_1659;
												BgL_zc3z04anonymousza31482ze3z87_2911:
													if (NULLP(BgL_l1088z00_2912))
														{	/* Match/compiler.scm 318 */
															BgL_arg1479z00_1655 = BgL_head1090z00_1659;
														}
													else
														{	/* Match/compiler.scm 318 */
															obj_t BgL_newtail1092z00_2920;

															{	/* Match/compiler.scm 318 */
																obj_t BgL_arg1485z00_2921;

																{	/* Match/compiler.scm 463 */
																	obj_t BgL_pairz00_2935;

																	{	/* Match/compiler.scm 463 */
																		obj_t BgL_pairz00_2927;

																		BgL_pairz00_2927 =
																			CAR(((obj_t) BgL_l1088z00_2912));
																		BgL_pairz00_2935 =
																			CAR(CDR(CAR(CDR(BgL_pairz00_2927))));
																	}
																	BgL_arg1485z00_2921 = CAR(BgL_pairz00_2935);
																}
																{	/* Match/compiler.scm 318 */
																	obj_t BgL_res2176z00_2936;

																	BgL_res2176z00_2936 =
																		MAKE_YOUNG_PAIR(BgL_arg1485z00_2921, BNIL);
																	BgL_newtail1092z00_2920 = BgL_res2176z00_2936;
																}
															}
															SET_CDR(BgL_tail1091z00_2913,
																BgL_newtail1092z00_2920);
															{	/* Match/compiler.scm 318 */
																obj_t BgL_arg1484z00_2923;

																BgL_arg1484z00_2923 =
																	CDR(((obj_t) BgL_l1088z00_2912));
																{
																	obj_t BgL_tail1091z00_4807;
																	obj_t BgL_l1088z00_4806;

																	BgL_l1088z00_4806 = BgL_arg1484z00_2923;
																	BgL_tail1091z00_4807 =
																		BgL_newtail1092z00_2920;
																	BgL_tail1091z00_2913 = BgL_tail1091z00_4807;
																	BgL_l1088z00_2912 = BgL_l1088z00_4806;
																	goto BgL_zc3z04anonymousza31482ze3z87_2911;
																}
															}
														}
												}
											}
										}
								}
								{	/* Match/compiler.scm 318 */
									obj_t BgL_arg1491z00_1673;

									{	/* Match/compiler.scm 318 */
										obj_t BgL_arg1492z00_1674;

										BgL_arg1492z00_1674 = MAKE_YOUNG_PAIR(BgL_ez00_96, BNIL);
										BgL_arg1491z00_1673 =
											MAKE_YOUNG_PAIR(BgL_reszd2bodyzd2_1653,
											BgL_arg1492z00_1674);
									}
									BgL_arg1480z00_1656 =
										MAKE_YOUNG_PAIR(BgL_arg1491z00_1673, BNIL);
								}
								BgL_arg1478z00_1654 =
									MAKE_YOUNG_PAIR(BgL_arg1479z00_1655, BgL_arg1480z00_1656);
							}
							return
								MAKE_YOUNG_PAIR(BGl_symbol2336z00zz__match_compilerz00,
								BgL_arg1478z00_1654);
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1496> */
	obj_t BGl_z62zc3z04anonymousza31496ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3665, obj_t BgL_dz00_3668)
	{
		{	/* Match/compiler.scm 316 */
			{	/* Match/compiler.scm 316 */
				obj_t BgL_za70za7_3666;
				obj_t BgL_d0z00_3667;

				BgL_za70za7_3666 = PROCEDURE_REF(BgL_envz00_3665, (int) (((long) 0)));
				BgL_d0z00_3667 = PROCEDURE_REF(BgL_envz00_3665, (int) (((long) 1)));
				return
					PROCEDURE_ENTRY(BgL_za70za7_3666) (BgL_za70za7_3666, BgL_d0z00_3667,
					BEOA);
			}
		}

	}



/* &<@anonymous:1495> */
	obj_t BGl_z62zc3z04anonymousza31495ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3669, obj_t BgL_rz00_3672, obj_t BgL_za7za7_3673,
		obj_t BgL_dz00_3674)
	{
		{	/* Match/compiler.scm 315 */
			{	/* Match/compiler.scm 315 */
				obj_t BgL_k0z00_3670;
				obj_t BgL_d0z00_3671;

				BgL_k0z00_3670 = PROCEDURE_REF(BgL_envz00_3669, (int) (((long) 0)));
				BgL_d0z00_3671 = PROCEDURE_REF(BgL_envz00_3669, (int) (((long) 1)));
				return
					PROCEDURE_ENTRY(BgL_k0z00_3670) (BgL_k0z00_3670, BgL_rz00_3672,
					BgL_za7za7_3673, BgL_d0z00_3671, BEOA);
			}
		}

	}



/* &<@anonymous:1516> */
	obj_t BGl_z62zc3z04anonymousza31516ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3675, obj_t BgL_d2z00_3687)
	{
		{	/* Match/compiler.scm 302 */
			{	/* Match/compiler.scm 304 */
				obj_t BgL_dzd2envzd2_3676;
				obj_t BgL_f2z00_3677;
				obj_t BgL_fzd2envzd2_3678;
				obj_t BgL_mz00_3679;
				obj_t BgL_instanciatezd2tryzd2_3680;
				obj_t BgL_nz00_3681;
				obj_t BgL_f1z00_3682;
				obj_t BgL_gz00_3683;
				obj_t BgL_rz00_3684;
				obj_t BgL_kz00_3685;
				obj_t BgL_za7za7_3686;

				BgL_dzd2envzd2_3676 =
					PROCEDURE_REF(BgL_envz00_3675, (int) (((long) 0)));
				BgL_f2z00_3677 = PROCEDURE_REF(BgL_envz00_3675, (int) (((long) 1)));
				BgL_fzd2envzd2_3678 =
					PROCEDURE_REF(BgL_envz00_3675, (int) (((long) 2)));
				BgL_mz00_3679 = PROCEDURE_REF(BgL_envz00_3675, (int) (((long) 3)));
				BgL_instanciatezd2tryzd2_3680 =
					PROCEDURE_REF(BgL_envz00_3675, (int) (((long) 4)));
				BgL_nz00_3681 = PROCEDURE_REF(BgL_envz00_3675, (int) (((long) 5)));
				BgL_f1z00_3682 = PROCEDURE_REF(BgL_envz00_3675, (int) (((long) 6)));
				BgL_gz00_3683 = PROCEDURE_REF(BgL_envz00_3675, (int) (((long) 7)));
				BgL_rz00_3684 = PROCEDURE_REF(BgL_envz00_3675, (int) (((long) 8)));
				BgL_kz00_3685 = PROCEDURE_REF(BgL_envz00_3675, (int) (((long) 9)));
				BgL_za7za7_3686 = PROCEDURE_REF(BgL_envz00_3675, (int) (((long) 10)));
				{	/* Match/compiler.scm 304 */
					obj_t BgL_arg1518z00_3798;

					{	/* Match/compiler.scm 467 */
						obj_t BgL_zc3z04anonymousza31676ze3z87_3799;

						BgL_zc3z04anonymousza31676ze3z87_3799 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31676ze3ze5zz__match_compilerz00,
							(int) (((long) 1)), (int) (((long) 7)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31676ze3z87_3799,
							(int) (((long) 0)), BgL_dzd2envzd2_3676);
						PROCEDURE_SET(BgL_zc3z04anonymousza31676ze3z87_3799,
							(int) (((long) 1)), BgL_f1z00_3682);
						PROCEDURE_SET(BgL_zc3z04anonymousza31676ze3z87_3799,
							(int) (((long) 2)), BgL_f2z00_3677);
						PROCEDURE_SET(BgL_zc3z04anonymousza31676ze3z87_3799,
							(int) (((long) 3)), BgL_fzd2envzd2_3678);
						PROCEDURE_SET(BgL_zc3z04anonymousza31676ze3z87_3799,
							(int) (((long) 4)), BgL_mz00_3679);
						PROCEDURE_SET(BgL_zc3z04anonymousza31676ze3z87_3799,
							(int) (((long) 5)), BgL_instanciatezd2tryzd2_3680);
						PROCEDURE_SET(BgL_zc3z04anonymousza31676ze3z87_3799,
							(int) (((long) 6)), BgL_nz00_3681);
						BgL_arg1518z00_3798 = BgL_zc3z04anonymousza31676ze3z87_3799;
					}
					return
						BGl_compilez00zz__match_compilerz00(BgL_f1z00_3682, BgL_gz00_3683,
						BgL_rz00_3684, BgL_arg1518z00_3798, BgL_kz00_3685, BgL_za7za7_3686,
						BgL_d2z00_3687);
				}
			}
		}

	}



/* &<@anonymous:1676> */
	obj_t BGl_z62zc3z04anonymousza31676ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3688, obj_t BgL_xz00_3696)
	{
		{	/* Match/compiler.scm 467 */
			{	/* Match/compiler.scm 468 */
				obj_t BgL_mz00_3693;
				obj_t BgL_instanciatezd2tryzd2_3694;
				obj_t BgL_nz00_3695;

				BgL_mz00_3693 = PROCEDURE_REF(BgL_envz00_3688, (int) (((long) 4)));
				BgL_instanciatezd2tryzd2_3694 =
					PROCEDURE_REF(BgL_envz00_3688, (int) (((long) 5)));
				BgL_nz00_3695 = PROCEDURE_REF(BgL_envz00_3688, (int) (((long) 6)));
				if ((BgL_xz00_3696 == BgL_nz00_3695))
					{	/* Match/compiler.scm 468 */
						return BgL_instanciatezd2tryzd2_3694;
					}
				else
					{	/* Match/compiler.scm 468 */
						return
							PROCEDURE_ENTRY(BgL_mz00_3693) (BgL_mz00_3693, BgL_xz00_3696,
							BEOA);
					}
			}
		}

	}



/* &instanciate-try */
	obj_t BGl_z62instanciatezd2tryzb0zz__match_compilerz00(obj_t BgL_envz00_3697,
		obj_t BgL_rz00_3703, obj_t BgL_mz00_3704, obj_t BgL_kz00_3705,
		obj_t BgL_za7za7_3706, obj_t BgL_dz00_3707)
	{
		{	/* Match/compiler.scm 289 */
			{	/* Match/compiler.scm 290 */
				obj_t BgL_dzd2envzd2_3698;
				obj_t BgL_nz00_3699;
				obj_t BgL_f1z00_3700;
				obj_t BgL_f2z00_3701;
				obj_t BgL_fzd2envzd2_3702;

				BgL_dzd2envzd2_3698 =
					PROCEDURE_REF(BgL_envz00_3697, (int) (((long) 0)));
				BgL_nz00_3699 = PROCEDURE_REF(BgL_envz00_3697, (int) (((long) 1)));
				BgL_f1z00_3700 = PROCEDURE_REF(BgL_envz00_3697, (int) (((long) 2)));
				BgL_f2z00_3701 = PROCEDURE_REF(BgL_envz00_3697, (int) (((long) 3)));
				BgL_fzd2envzd2_3702 =
					PROCEDURE_REF(BgL_envz00_3697, (int) (((long) 4)));
				{	/* Match/compiler.scm 290 */
					obj_t BgL_tmpz00_3800;

					{
						obj_t BgL_dzd2envzd2_3802;

						BgL_dzd2envzd2_3802 = CELL_REF(BgL_dzd2envzd2_3698);
					BgL_lookzd2forzd2descrz00_3801:
						if (NULLP(BgL_dzd2envzd2_3802))
							{	/* Match/compiler.scm 416 */
								BgL_tmpz00_3800 = BFALSE;
							}
						else
							{	/* Match/compiler.scm 418 */
								bool_t BgL_test2477z00_4895;

								{	/* Match/compiler.scm 418 */
									obj_t BgL_auxz00_4896;

									{	/* Match/compiler.scm 418 */
										obj_t BgL_pairz00_3803;

										BgL_pairz00_3803 = CAR(((obj_t) BgL_dzd2envzd2_3802));
										BgL_auxz00_4896 = CAR(BgL_pairz00_3803);
									}
									BgL_test2477z00_4895 =
										BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_auxz00_4896,
										BgL_dz00_3707);
								}
								if (BgL_test2477z00_4895)
									{	/* Match/compiler.scm 418 */
										BgL_tmpz00_3800 = CAR(((obj_t) BgL_dzd2envzd2_3802));
									}
								else
									{	/* Match/compiler.scm 420 */
										obj_t BgL_arg1652z00_3804;

										BgL_arg1652z00_3804 = CDR(((obj_t) BgL_dzd2envzd2_3802));
										{
											obj_t BgL_dzd2envzd2_4905;

											BgL_dzd2envzd2_4905 = BgL_arg1652z00_3804;
											BgL_dzd2envzd2_3802 = BgL_dzd2envzd2_4905;
											goto BgL_lookzd2forzd2descrz00_3801;
										}
									}
							}
					}
					if (CBOOL(BgL_tmpz00_3800))
						{	/* Match/compiler.scm 292 */
							obj_t BgL_pairz00_3805;

							BgL_pairz00_3805 = CDR(((obj_t) BgL_tmpz00_3800));
							return CAR(BgL_pairz00_3805);
						}
					else
						{	/* Match/compiler.scm 293 */
							obj_t BgL_gz00_3806;
							obj_t BgL_tryz00_3807;

							BgL_gz00_3806 =
								PROCEDURE_ENTRY(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
								(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
								BGl_string2338z00zz__match_compilerz00, BEOA);
							BgL_tryz00_3807 =
								PROCEDURE_ENTRY(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
								(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
								BGl_string2339z00zz__match_compilerz00, BEOA);
							{	/* Match/compiler.scm 295 */
								obj_t BgL_auxz00_3808;

								{	/* Match/compiler.scm 295 */
									obj_t BgL_arg1498z00_3809;

									{	/* Match/compiler.scm 295 */
										obj_t BgL_list1499z00_3810;

										{	/* Match/compiler.scm 295 */
											obj_t BgL_arg1500z00_3811;

											BgL_arg1500z00_3811 =
												MAKE_YOUNG_PAIR(BgL_tryz00_3807, BNIL);
											BgL_list1499z00_3810 =
												MAKE_YOUNG_PAIR(BgL_dz00_3707, BgL_arg1500z00_3811);
										}
										BgL_arg1498z00_3809 = BgL_list1499z00_3810;
									}
									BgL_auxz00_3808 =
										MAKE_YOUNG_PAIR(BgL_arg1498z00_3809,
										CELL_REF(BgL_dzd2envzd2_3698));
								}
								CELL_SET(BgL_dzd2envzd2_3698, BgL_auxz00_3808);
							}
							{	/* Match/compiler.scm 296 */
								obj_t BgL_newzd2defzd2_3812;

								{	/* Match/compiler.scm 299 */
									obj_t BgL_arg1502z00_3813;

									{	/* Match/compiler.scm 299 */
										obj_t BgL_arg1506z00_3814;

										{	/* Match/compiler.scm 299 */
											obj_t BgL_arg1507z00_3815;

											{	/* Match/compiler.scm 299 */
												obj_t BgL_arg1508z00_3816;

												{	/* Match/compiler.scm 299 */
													obj_t BgL_arg1509z00_3817;

													{	/* Match/compiler.scm 299 */
														obj_t BgL_arg1510z00_3818;

														{	/* Match/compiler.scm 299 */
															obj_t BgL_arg1511z00_3819;

															{	/* Match/compiler.scm 299 */
																obj_t BgL_arg1512z00_3820;
																obj_t BgL_arg1513z00_3821;

																BgL_arg1512z00_3820 =
																	MAKE_YOUNG_PAIR(BgL_gz00_3806, BNIL);
																{	/* Match/compiler.scm 304 */
																	obj_t BgL_arg1514z00_3822;

																	{	/* Match/compiler.scm 304 */
																		obj_t BgL_zc3z04anonymousza31516ze3z87_3823;

																		BgL_zc3z04anonymousza31516ze3z87_3823 =
																			MAKE_FX_PROCEDURE
																			(BGl_z62zc3z04anonymousza31516ze3ze5zz__match_compilerz00,
																			(int) (((long) 1)), (int) (((long) 11)));
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31516ze3z87_3823,
																			(int) (((long) 0)), BgL_dzd2envzd2_3698);
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31516ze3z87_3823,
																			(int) (((long) 1)), BgL_f2z00_3701);
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31516ze3z87_3823,
																			(int) (((long) 2)), BgL_fzd2envzd2_3702);
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31516ze3z87_3823,
																			(int) (((long) 3)), BgL_mz00_3704);
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31516ze3z87_3823,
																			(int) (((long) 4)), BgL_envz00_3697);
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31516ze3z87_3823,
																			(int) (((long) 5)), BgL_nz00_3699);
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31516ze3z87_3823,
																			(int) (((long) 6)), BgL_f1z00_3700);
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31516ze3z87_3823,
																			(int) (((long) 7)), BgL_gz00_3806);
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31516ze3z87_3823,
																			(int) (((long) 8)), BgL_rz00_3703);
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31516ze3z87_3823,
																			(int) (((long) 9)), BgL_kz00_3705);
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31516ze3z87_3823,
																			(int) (((long) 10)), BgL_za7za7_3706);
																		BgL_arg1514z00_3822 =
																			BGl_compilez00zz__match_compilerz00
																			(BgL_f2z00_3701, BgL_gz00_3806,
																			BgL_rz00_3703, BgL_mz00_3704,
																			BgL_kz00_3705,
																			BgL_zc3z04anonymousza31516ze3z87_3823,
																			BgL_dz00_3707);
																	}
																	BgL_arg1513z00_3821 =
																		MAKE_YOUNG_PAIR(BgL_arg1514z00_3822, BNIL);
																}
																BgL_arg1511z00_3819 =
																	MAKE_YOUNG_PAIR(BgL_arg1512z00_3820,
																	BgL_arg1513z00_3821);
															}
															BgL_arg1510z00_3818 =
																MAKE_YOUNG_PAIR
																(BGl_symbol2260z00zz__match_compilerz00,
																BgL_arg1511z00_3819);
														}
														BgL_arg1509z00_3817 =
															MAKE_YOUNG_PAIR(BgL_arg1510z00_3818, BNIL);
													}
													BgL_arg1508z00_3816 =
														MAKE_YOUNG_PAIR(BgL_tryz00_3807,
														BgL_arg1509z00_3817);
												}
												BgL_arg1507z00_3815 =
													MAKE_YOUNG_PAIR(BgL_arg1508z00_3816, BNIL);
											}
											BgL_arg1506z00_3814 =
												MAKE_YOUNG_PAIR(BgL_arg1507z00_3815, BNIL);
										}
										BgL_arg1502z00_3813 =
											MAKE_YOUNG_PAIR(BGl_symbol2336z00zz__match_compilerz00,
											BgL_arg1506z00_3814);
									}
									{	/* Match/compiler.scm 296 */
										obj_t BgL_list1503z00_3824;

										{	/* Match/compiler.scm 296 */
											obj_t BgL_arg1505z00_3825;

											BgL_arg1505z00_3825 =
												MAKE_YOUNG_PAIR(BgL_arg1502z00_3813, BNIL);
											BgL_list1503z00_3824 =
												MAKE_YOUNG_PAIR(BgL_tryz00_3807, BgL_arg1505z00_3825);
										}
										BgL_newzd2defzd2_3812 = BgL_list1503z00_3824;
								}}
								{	/* Match/compiler.scm 309 */
									obj_t BgL_auxz00_3826;

									BgL_auxz00_3826 =
										MAKE_YOUNG_PAIR(BgL_newzd2defzd2_3812,
										CELL_REF(BgL_fzd2envzd2_3702));
									CELL_SET(BgL_fzd2envzd2_3702, BgL_auxz00_3826);
								}
								return BgL_tryz00_3807;
							}
						}
				}
			}
		}

	}



/* compile-vector-begin */
	obj_t BGl_compilezd2vectorzd2beginz00zz__match_compilerz00(obj_t
		BgL_lgminz00_118, obj_t BgL_fz00_119, obj_t BgL_ez00_120,
		obj_t BgL_rz00_121, obj_t BgL_mz00_122, obj_t BgL_kz00_123,
		obj_t BgL_za7za7_124, obj_t BgL_dz00_125)
	{
		{	/* Match/compiler.scm 334 */
			if (
				(CAR(((obj_t) BgL_dz00_125)) == BGl_symbol2340z00zz__match_compilerz00))
				{	/* Match/compiler.scm 336 */
					bool_t BgL_test2480z00_4964;

					{	/* Match/compiler.scm 336 */
						obj_t BgL_auxz00_4965;

						{	/* Match/compiler.scm 336 */
							obj_t BgL_pairz00_2948;

							BgL_pairz00_2948 = CDR(((obj_t) BgL_dz00_125));
							BgL_auxz00_4965 = CAR(BgL_pairz00_2948);
						}
						BgL_test2480z00_4964 =
							BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_auxz00_4965,
							BgL_lgminz00_118);
					}
					if (BgL_test2480z00_4964)
						{	/* Match/compiler.scm 337 */
							obj_t BgL_fun1526z00_1723;

							BgL_fun1526z00_1723 =
								BGl_compilez00zz__match_compilerz00(BgL_fz00_119, BgL_ez00_120,
								BgL_rz00_121, BgL_mz00_122, BgL_kz00_123, BgL_za7za7_124,
								BgL_dz00_125);
							return PROCEDURE_ENTRY(BgL_fun1526z00_1723) (BgL_fun1526z00_1723,
								BINT(((long) 0)), BEOA);
						}
					else
						{	/* Match/compiler.scm 339 */
							obj_t BgL_arg1528z00_1724;

							{	/* Match/compiler.scm 339 */
								obj_t BgL_arg1530z00_1725;
								obj_t BgL_arg1531z00_1726;

								{	/* Match/compiler.scm 339 */
									obj_t BgL_arg1532z00_1727;

									{	/* Match/compiler.scm 339 */
										obj_t BgL_arg1533z00_1728;
										obj_t BgL_arg1534z00_1729;

										{	/* Match/compiler.scm 339 */
											obj_t BgL_arg1535z00_1730;

											BgL_arg1535z00_1730 = MAKE_YOUNG_PAIR(BgL_ez00_120, BNIL);
											BgL_arg1533z00_1728 =
												MAKE_YOUNG_PAIR(BGl_symbol2306z00zz__match_compilerz00,
												BgL_arg1535z00_1730);
										}
										BgL_arg1534z00_1729 =
											MAKE_YOUNG_PAIR(BgL_lgminz00_118, BNIL);
										BgL_arg1532z00_1727 =
											MAKE_YOUNG_PAIR(BgL_arg1533z00_1728, BgL_arg1534z00_1729);
									}
									BgL_arg1530z00_1725 =
										MAKE_YOUNG_PAIR(BGl_symbol2342z00zz__match_compilerz00,
										BgL_arg1532z00_1727);
								}
								{	/* Match/compiler.scm 340 */
									obj_t BgL_arg1536z00_1731;
									obj_t BgL_arg1537z00_1732;

									{	/* Match/compiler.scm 340 */
										obj_t BgL_fun1538z00_1733;

										BgL_fun1538z00_1733 =
											BGl_compilez00zz__match_compilerz00(BgL_fz00_119,
											BgL_ez00_120, BgL_rz00_121, BgL_mz00_122, BgL_kz00_123,
											BgL_za7za7_124, BgL_dz00_125);
										BgL_arg1536z00_1731 =
											PROCEDURE_ENTRY(BgL_fun1538z00_1733) (BgL_fun1538z00_1733,
											BINT(((long) 0)), BEOA);
									}
									{	/* Match/compiler.scm 342 */
										obj_t BgL_arg1540z00_1734;

										BgL_arg1540z00_1734 =
											PROCEDURE_ENTRY(BgL_za7za7_124) (BgL_za7za7_124,
											BgL_dz00_125, BEOA);
										BgL_arg1537z00_1732 =
											MAKE_YOUNG_PAIR(BgL_arg1540z00_1734, BNIL);
									}
									BgL_arg1531z00_1726 =
										MAKE_YOUNG_PAIR(BgL_arg1536z00_1731, BgL_arg1537z00_1732);
								}
								BgL_arg1528z00_1724 =
									MAKE_YOUNG_PAIR(BgL_arg1530z00_1725, BgL_arg1531z00_1726);
							}
							return
								MAKE_YOUNG_PAIR(BGl_symbol2264z00zz__match_compilerz00,
								BgL_arg1528z00_1724);
						}
				}
			else
				{	/* Match/compiler.scm 343 */
					obj_t BgL_arg1542z00_1736;

					{	/* Match/compiler.scm 343 */
						obj_t BgL_arg1544z00_1737;
						obj_t BgL_arg1545z00_1738;

						{	/* Match/compiler.scm 343 */
							obj_t BgL_arg1546z00_1739;

							BgL_arg1546z00_1739 = MAKE_YOUNG_PAIR(BgL_ez00_120, BNIL);
							BgL_arg1544z00_1737 =
								MAKE_YOUNG_PAIR(BGl_symbol2344z00zz__match_compilerz00,
								BgL_arg1546z00_1739);
						}
						{	/* Match/compiler.scm 344 */
							obj_t BgL_arg1547z00_1740;
							obj_t BgL_arg1551z00_1741;

							{	/* Match/compiler.scm 344 */
								obj_t BgL_arg1552z00_1742;

								{	/* Match/compiler.scm 344 */
									obj_t BgL_arg1553z00_1743;
									obj_t BgL_arg1554z00_1744;

									{	/* Match/compiler.scm 344 */
										obj_t BgL_arg1556z00_1745;

										{	/* Match/compiler.scm 344 */
											obj_t BgL_arg1557z00_1746;
											obj_t BgL_arg1558z00_1747;

											{	/* Match/compiler.scm 344 */
												obj_t BgL_arg1560z00_1748;

												BgL_arg1560z00_1748 =
													MAKE_YOUNG_PAIR(BgL_ez00_120, BNIL);
												BgL_arg1557z00_1746 =
													MAKE_YOUNG_PAIR
													(BGl_symbol2306z00zz__match_compilerz00,
													BgL_arg1560z00_1748);
											}
											BgL_arg1558z00_1747 =
												MAKE_YOUNG_PAIR(BgL_lgminz00_118, BNIL);
											BgL_arg1556z00_1745 =
												MAKE_YOUNG_PAIR(BgL_arg1557z00_1746,
												BgL_arg1558z00_1747);
										}
										BgL_arg1553z00_1743 =
											MAKE_YOUNG_PAIR(BGl_symbol2342z00zz__match_compilerz00,
											BgL_arg1556z00_1745);
									}
									{	/* Match/compiler.scm 348 */
										obj_t BgL_arg1561z00_1749;
										obj_t BgL_arg1562z00_1750;

										{	/* Match/compiler.scm 348 */
											obj_t BgL_fun1567z00_1755;

											{	/* Match/compiler.scm 348 */
												obj_t BgL_arg1563z00_1751;

												{	/* Match/compiler.scm 348 */
													obj_t BgL_arg1564z00_1752;

													{	/* Match/compiler.scm 348 */
														obj_t BgL_arg1565z00_1753;

														BgL_arg1565z00_1753 =
															MAKE_YOUNG_PAIR(make_vector(
																(long) CINT(BgL_lgminz00_118),
																BGl_list2256z00zz__match_compilerz00), BNIL);
														BgL_arg1564z00_1752 =
															MAKE_YOUNG_PAIR(BgL_lgminz00_118,
															BgL_arg1565z00_1753);
													}
													BgL_arg1563z00_1751 =
														MAKE_YOUNG_PAIR
														(BGl_symbol2340z00zz__match_compilerz00,
														BgL_arg1564z00_1752);
												}
												BgL_fun1567z00_1755 =
													BGl_compilez00zz__match_compilerz00(BgL_fz00_119,
													BgL_ez00_120, BgL_rz00_121, BgL_mz00_122,
													BgL_kz00_123, BgL_za7za7_124, BgL_arg1563z00_1751);
											}
											BgL_arg1561z00_1749 =
												PROCEDURE_ENTRY(BgL_fun1567z00_1755)
												(BgL_fun1567z00_1755, BINT(((long) 0)), BEOA);
										}
										{	/* Match/compiler.scm 350 */
											obj_t BgL_arg1568z00_1756;

											{	/* Match/compiler.scm 350 */
												obj_t BgL_arg1569z00_1757;

												{	/* Match/compiler.scm 350 */
													obj_t BgL_arg1570z00_1758;

													{	/* Match/compiler.scm 350 */
														obj_t BgL_arg1573z00_1759;

														BgL_arg1573z00_1759 =
															MAKE_YOUNG_PAIR(make_vector(((long) 0),
																BGl_list2256z00zz__match_compilerz00), BNIL);
														BgL_arg1570z00_1758 =
															MAKE_YOUNG_PAIR(BINT(((long) 0)),
															BgL_arg1573z00_1759);
													}
													BgL_arg1569z00_1757 =
														MAKE_YOUNG_PAIR
														(BGl_symbol2340z00zz__match_compilerz00,
														BgL_arg1570z00_1758);
												}
												BgL_arg1568z00_1756 =
													PROCEDURE_ENTRY(BgL_za7za7_124) (BgL_za7za7_124,
													BgL_arg1569z00_1757, BEOA);
											}
											BgL_arg1562z00_1750 =
												MAKE_YOUNG_PAIR(BgL_arg1568z00_1756, BNIL);
										}
										BgL_arg1554z00_1744 =
											MAKE_YOUNG_PAIR(BgL_arg1561z00_1749, BgL_arg1562z00_1750);
									}
									BgL_arg1552z00_1742 =
										MAKE_YOUNG_PAIR(BgL_arg1553z00_1743, BgL_arg1554z00_1744);
								}
								BgL_arg1547z00_1740 =
									MAKE_YOUNG_PAIR(BGl_symbol2264z00zz__match_compilerz00,
									BgL_arg1552z00_1742);
							}
							{	/* Match/compiler.scm 351 */
								obj_t BgL_arg1575z00_1761;

								{	/* Match/compiler.scm 351 */
									obj_t BgL_arg1577z00_1762;

									BgL_arg1577z00_1762 =
										BGl_patternzd2pluszd2zz__match_descriptionsz00(BgL_dz00_125,
										BGl_list2346z00zz__match_compilerz00);
									BgL_arg1575z00_1761 =
										PROCEDURE_ENTRY(BgL_za7za7_124) (BgL_za7za7_124,
										BgL_arg1577z00_1762, BEOA);
								}
								BgL_arg1551z00_1741 =
									MAKE_YOUNG_PAIR(BgL_arg1575z00_1761, BNIL);
							}
							BgL_arg1545z00_1738 =
								MAKE_YOUNG_PAIR(BgL_arg1547z00_1740, BgL_arg1551z00_1741);
						}
						BgL_arg1542z00_1736 =
							MAKE_YOUNG_PAIR(BgL_arg1544z00_1737, BgL_arg1545z00_1738);
					}
					return
						MAKE_YOUNG_PAIR(BGl_symbol2264z00zz__match_compilerz00,
						BgL_arg1542z00_1736);
				}
		}

	}



/* compile-vector-cons */
	obj_t BGl_compilezd2vectorzd2consz00zz__match_compilerz00(obj_t BgL_f1z00_126,
		obj_t BgL_f2z00_127, obj_t BgL_ez00_128, obj_t BgL_rz00_129,
		obj_t BgL_mz00_130, obj_t BgL_kz00_131, obj_t BgL_za7za7_132,
		obj_t BgL_dz00_133)
	{
		{	/* Match/compiler.scm 357 */
			{	/* Match/compiler.scm 358 */
				obj_t BgL_zc3z04anonymousza31578ze3z87_3716;

				BgL_zc3z04anonymousza31578ze3z87_3716 =
					MAKE_FX_PROCEDURE
					(BGl_z62zc3z04anonymousza31578ze3ze5zz__match_compilerz00,
					(int) (((long) 1)), (int) (((long) 8)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31578ze3z87_3716, (int) (((long) 0)),
					BgL_dz00_133);
				PROCEDURE_SET(BgL_zc3z04anonymousza31578ze3z87_3716, (int) (((long) 1)),
					BgL_ez00_128);
				PROCEDURE_SET(BgL_zc3z04anonymousza31578ze3z87_3716, (int) (((long) 2)),
					BgL_f2z00_127);
				PROCEDURE_SET(BgL_zc3z04anonymousza31578ze3z87_3716, (int) (((long) 3)),
					BgL_mz00_130);
				PROCEDURE_SET(BgL_zc3z04anonymousza31578ze3z87_3716, (int) (((long) 4)),
					BgL_kz00_131);
				PROCEDURE_SET(BgL_zc3z04anonymousza31578ze3z87_3716, (int) (((long) 5)),
					BgL_za7za7_132);
				PROCEDURE_SET(BgL_zc3z04anonymousza31578ze3z87_3716, (int) (((long) 6)),
					BgL_f1z00_126);
				PROCEDURE_SET(BgL_zc3z04anonymousza31578ze3z87_3716, (int) (((long) 7)),
					BgL_rz00_129);
				return BgL_zc3z04anonymousza31578ze3z87_3716;
			}
		}

	}



/* &<@anonymous:1578> */
	obj_t BGl_z62zc3z04anonymousza31578ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3717, obj_t BgL_iz00_3726)
	{
		{	/* Match/compiler.scm 358 */
			{	/* Match/compiler.scm 359 */
				obj_t BgL_dz00_3718;
				obj_t BgL_ez00_3719;
				obj_t BgL_f2z00_3720;
				obj_t BgL_mz00_3721;
				obj_t BgL_kz00_3722;
				obj_t BgL_za7za7_3723;
				obj_t BgL_f1z00_3724;
				obj_t BgL_rz00_3725;

				BgL_dz00_3718 = PROCEDURE_REF(BgL_envz00_3717, (int) (((long) 0)));
				BgL_ez00_3719 = PROCEDURE_REF(BgL_envz00_3717, (int) (((long) 1)));
				BgL_f2z00_3720 = PROCEDURE_REF(BgL_envz00_3717, (int) (((long) 2)));
				BgL_mz00_3721 = PROCEDURE_REF(BgL_envz00_3717, (int) (((long) 3)));
				BgL_kz00_3722 = PROCEDURE_REF(BgL_envz00_3717, (int) (((long) 4)));
				BgL_za7za7_3723 = PROCEDURE_REF(BgL_envz00_3717, (int) (((long) 5)));
				BgL_f1z00_3724 = PROCEDURE_REF(BgL_envz00_3717, (int) (((long) 6)));
				BgL_rz00_3725 = PROCEDURE_REF(BgL_envz00_3717, (int) (((long) 7)));
				{	/* Match/compiler.scm 359 */
					bool_t BgL_test2481z00_5070;

					{	/* Match/compiler.scm 359 */
						long BgL_arg1589z00_3827;

						{	/* Match/compiler.scm 359 */
							obj_t BgL_arg1592z00_3828;

							{	/* Match/compiler.scm 359 */
								obj_t BgL_pairz00_3829;

								{	/* Match/compiler.scm 359 */
									obj_t BgL_pairz00_3830;

									BgL_pairz00_3830 = CDR(((obj_t) BgL_dz00_3718));
									BgL_pairz00_3829 = CDR(BgL_pairz00_3830);
								}
								BgL_arg1592z00_3828 = CAR(BgL_pairz00_3829);
							}
							BgL_arg1589z00_3827 =
								VECTOR_LENGTH(((obj_t) BgL_arg1592z00_3828));
						}
						BgL_test2481z00_5070 =
							BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_3726,
							BINT(BgL_arg1589z00_3827));
					}
					if (BgL_test2481z00_5070)
						{	/* Match/compiler.scm 360 */
							obj_t BgL_arg1582z00_3831;
							obj_t BgL_arg1583z00_3832;

							{	/* Match/compiler.scm 360 */
								obj_t BgL_pairz00_3833;

								BgL_pairz00_3833 = CDR(((obj_t) BgL_dz00_3718));
								BgL_arg1582z00_3831 = CDR(BgL_pairz00_3833);
							}
							{	/* Match/compiler.scm 361 */
								obj_t BgL_arg1584z00_3834;
								obj_t BgL_arg1587z00_3835;

								{	/* Match/compiler.scm 361 */
									obj_t BgL_pairz00_3836;

									{	/* Match/compiler.scm 361 */
										obj_t BgL_pairz00_3837;

										BgL_pairz00_3837 = CDR(((obj_t) BgL_dz00_3718));
										BgL_pairz00_3836 = CDR(BgL_pairz00_3837);
									}
									BgL_arg1584z00_3834 = CAR(BgL_pairz00_3836);
								}
								if (INTEGERP(BgL_iz00_3726))
									{	/* Match/compiler.scm 361 */
										BgL_arg1587z00_3835 =
											ADDFX(BgL_iz00_3726, BINT(((long) 1)));
									}
								else
									{	/* Match/compiler.scm 361 */
										BgL_arg1587z00_3835 =
											BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_3726,
											BINT(((long) 1)));
									}
								BgL_arg1583z00_3832 =
									BGl_extendzd2vectorzd2zz__match_descriptionsz00
									(BgL_arg1584z00_3834, BgL_arg1587z00_3835,
									BGl_list2256z00zz__match_compilerz00);
							}
							{	/* Match/compiler.scm 360 */
								obj_t BgL_tmpz00_5093;

								BgL_tmpz00_5093 = ((obj_t) BgL_arg1582z00_3831);
								SET_CAR(BgL_tmpz00_5093, BgL_arg1583z00_3832);
						}}
					else
						{	/* Match/compiler.scm 359 */
							BTRUE;
						}
				}
				{	/* Match/compiler.scm 363 */
					obj_t BgL_arg1593z00_3838;
					obj_t BgL_arg1598z00_3839;

					{	/* Match/compiler.scm 363 */
						obj_t BgL_arg1599z00_3840;

						{	/* Match/compiler.scm 363 */
							obj_t BgL_arg1602z00_3841;

							BgL_arg1602z00_3841 = MAKE_YOUNG_PAIR(BgL_iz00_3726, BNIL);
							BgL_arg1599z00_3840 =
								MAKE_YOUNG_PAIR(BgL_ez00_3719, BgL_arg1602z00_3841);
						}
						BgL_arg1593z00_3838 =
							MAKE_YOUNG_PAIR(BGl_symbol2348z00zz__match_compilerz00,
							BgL_arg1599z00_3840);
					}
					{	/* Match/compiler.scm 369 */
						obj_t BgL_arg1612z00_3842;

						{	/* Match/compiler.scm 369 */
							obj_t BgL_pairz00_3843;

							{	/* Match/compiler.scm 369 */
								obj_t BgL_pairz00_3844;

								BgL_pairz00_3844 = CDR(((obj_t) BgL_dz00_3718));
								BgL_pairz00_3843 = CDR(BgL_pairz00_3844);
							}
							BgL_arg1612z00_3842 = CAR(BgL_pairz00_3843);
						}
						{	/* Match/compiler.scm 369 */
							long BgL_kz00_3845;

							BgL_kz00_3845 = (long) CINT(BgL_iz00_3726);
							BgL_arg1598z00_3839 =
								VECTOR_REF(((obj_t) BgL_arg1612z00_3842), BgL_kz00_3845);
					}}
					{	/* Match/compiler.scm 365 */
						obj_t BgL_zc3z04anonymousza31603ze3z87_3846;
						obj_t BgL_zc3z04anonymousza31610ze3z87_3847;

						BgL_zc3z04anonymousza31603ze3z87_3846 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31603ze3ze5zz__match_compilerz00,
							(int) (((long) 3)), (int) (((long) 7)));
						BgL_zc3z04anonymousza31610ze3z87_3847 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31610ze3ze5zz__match_compilerz00,
							(int) (((long) 1)), (int) (((long) 3)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31603ze3z87_3846,
							(int) (((long) 0)), BgL_dz00_3718);
						PROCEDURE_SET(BgL_zc3z04anonymousza31603ze3z87_3846,
							(int) (((long) 1)), BgL_iz00_3726);
						PROCEDURE_SET(BgL_zc3z04anonymousza31603ze3z87_3846,
							(int) (((long) 2)), BgL_f2z00_3720);
						PROCEDURE_SET(BgL_zc3z04anonymousza31603ze3z87_3846,
							(int) (((long) 3)), BgL_ez00_3719);
						PROCEDURE_SET(BgL_zc3z04anonymousza31603ze3z87_3846,
							(int) (((long) 4)), BgL_mz00_3721);
						PROCEDURE_SET(BgL_zc3z04anonymousza31603ze3z87_3846,
							(int) (((long) 5)), BgL_kz00_3722);
						PROCEDURE_SET(BgL_zc3z04anonymousza31603ze3z87_3846,
							(int) (((long) 6)), BgL_za7za7_3723);
						PROCEDURE_SET(BgL_zc3z04anonymousza31610ze3z87_3847,
							(int) (((long) 0)), BgL_dz00_3718);
						PROCEDURE_SET(BgL_zc3z04anonymousza31610ze3z87_3847,
							(int) (((long) 1)), BgL_iz00_3726);
						PROCEDURE_SET(BgL_zc3z04anonymousza31610ze3z87_3847,
							(int) (((long) 2)), BgL_za7za7_3723);
						return BGl_compilez00zz__match_compilerz00(BgL_f1z00_3724,
							BgL_arg1593z00_3838, BgL_rz00_3725, BgL_mz00_3721,
							BgL_zc3z04anonymousza31603ze3z87_3846,
							BgL_zc3z04anonymousza31610ze3z87_3847, BgL_arg1598z00_3839);
					}
				}
			}
		}

	}



/* &<@anonymous:1610> */
	obj_t BGl_z62zc3z04anonymousza31610ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3727, obj_t BgL_d1z00_3731)
	{
		{	/* Match/compiler.scm 367 */
			{	/* Match/compiler.scm 368 */
				obj_t BgL_dz00_3728;
				obj_t BgL_iz00_3729;
				obj_t BgL_za7za7_3730;

				BgL_dz00_3728 = PROCEDURE_REF(BgL_envz00_3727, (int) (((long) 0)));
				BgL_iz00_3729 = PROCEDURE_REF(BgL_envz00_3727, (int) (((long) 1)));
				BgL_za7za7_3730 = PROCEDURE_REF(BgL_envz00_3727, (int) (((long) 2)));
				{	/* Match/compiler.scm 368 */
					obj_t BgL_arg1611z00_3848;

					BgL_arg1611z00_3848 =
						BGl_vectorzd2pluszd2zz__match_descriptionsz00(BgL_dz00_3728,
						BgL_iz00_3729, BgL_d1z00_3731);
					return PROCEDURE_ENTRY(BgL_za7za7_3730) (BgL_za7za7_3730,
						BgL_arg1611z00_3848, BEOA);
				}
			}
		}

	}



/* &<@anonymous:1603> */
	obj_t BGl_z62zc3z04anonymousza31603ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3732, obj_t BgL_rz00_3740, obj_t BgL_za71za7_3741,
		obj_t BgL_d1z00_3742)
	{
		{	/* Match/compiler.scm 364 */
			{	/* Match/compiler.scm 365 */
				obj_t BgL_dz00_3733;
				obj_t BgL_iz00_3734;
				obj_t BgL_f2z00_3735;
				obj_t BgL_ez00_3736;
				obj_t BgL_mz00_3737;
				obj_t BgL_kz00_3738;
				obj_t BgL_za7za7_3739;

				BgL_dz00_3733 = PROCEDURE_REF(BgL_envz00_3732, (int) (((long) 0)));
				BgL_iz00_3734 = PROCEDURE_REF(BgL_envz00_3732, (int) (((long) 1)));
				BgL_f2z00_3735 = PROCEDURE_REF(BgL_envz00_3732, (int) (((long) 2)));
				BgL_ez00_3736 = PROCEDURE_REF(BgL_envz00_3732, (int) (((long) 3)));
				BgL_mz00_3737 = PROCEDURE_REF(BgL_envz00_3732, (int) (((long) 4)));
				BgL_kz00_3738 = PROCEDURE_REF(BgL_envz00_3732, (int) (((long) 5)));
				BgL_za7za7_3739 = PROCEDURE_REF(BgL_envz00_3732, (int) (((long) 6)));
				{	/* Match/compiler.scm 365 */
					obj_t BgL_fun1608z00_3849;

					BgL_fun1608z00_3849 =
						BGl_compilez00zz__match_compilerz00(BgL_f2z00_3735, BgL_ez00_3736,
						BgL_rz00_3740, BgL_mz00_3737, BgL_kz00_3738, BgL_za7za7_3739,
						BGl_vectorzd2pluszd2zz__match_descriptionsz00(BgL_dz00_3733,
							BgL_iz00_3734, BgL_d1z00_3742));
					{	/* Match/compiler.scm 366 */
						obj_t BgL_arg1605z00_3850;

						if (INTEGERP(BgL_iz00_3734))
							{	/* Match/compiler.scm 366 */
								BgL_arg1605z00_3850 = ADDFX(BgL_iz00_3734, BINT(((long) 1)));
							}
						else
							{	/* Match/compiler.scm 366 */
								BgL_arg1605z00_3850 =
									BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_3734,
									BINT(((long) 1)));
							}
						return
							PROCEDURE_ENTRY(BgL_fun1608z00_3849) (BgL_fun1608z00_3849,
							BgL_arg1605z00_3850, BEOA);
					}
				}
			}
		}

	}



/* compile* */
	obj_t BGl_compileza2za2zz__match_compilerz00(obj_t BgL_pza2za2_162,
		obj_t BgL_iza2za2_163, obj_t BgL_ez00_164, obj_t BgL_rz00_165,
		obj_t BgL_mz00_166, obj_t BgL_kz00_167, obj_t BgL_za7za7_168,
		obj_t BgL_dz00_169)
	{
		{	/* Match/compiler.scm 405 */
			if (NULLP(BgL_pza2za2_162))
				{	/* Match/compiler.scm 406 */
					return
						PROCEDURE_ENTRY(BgL_kz00_167) (BgL_kz00_167, BgL_rz00_165,
						BgL_za7za7_168, BgL_dz00_169, BEOA);
				}
			else
				{	/* Match/compiler.scm 408 */
					obj_t BgL_arg1637z00_3061;
					obj_t BgL_arg1639z00_3062;

					BgL_arg1637z00_3061 = CAR(((obj_t) BgL_pza2za2_162));
					{	/* Match/compiler.scm 408 */
						obj_t BgL_arg1641z00_3063;

						{	/* Match/compiler.scm 408 */
							obj_t BgL_arg1642z00_3064;

							{	/* Match/compiler.scm 408 */
								obj_t BgL_arg1643z00_3065;

								BgL_arg1643z00_3065 = CAR(((obj_t) BgL_iza2za2_163));
								BgL_arg1642z00_3064 =
									MAKE_YOUNG_PAIR(BgL_arg1643z00_3065, BNIL);
							}
							BgL_arg1641z00_3063 =
								MAKE_YOUNG_PAIR(BgL_ez00_164, BgL_arg1642z00_3064);
						}
						BgL_arg1639z00_3062 =
							MAKE_YOUNG_PAIR(BGl_symbol2350z00zz__match_compilerz00,
							BgL_arg1641z00_3063);
					}
					{	/* Match/compiler.scm 410 */
						obj_t BgL_zc3z04anonymousza31644ze3z87_3744;

						BgL_zc3z04anonymousza31644ze3z87_3744 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31644ze3ze5zz__match_compilerz00,
							(int) (((long) 3)), (int) (((long) 6)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31644ze3z87_3744,
							(int) (((long) 0)), BgL_pza2za2_162);
						PROCEDURE_SET(BgL_zc3z04anonymousza31644ze3z87_3744,
							(int) (((long) 1)), BgL_iza2za2_163);
						PROCEDURE_SET(BgL_zc3z04anonymousza31644ze3z87_3744,
							(int) (((long) 2)), BgL_ez00_164);
						PROCEDURE_SET(BgL_zc3z04anonymousza31644ze3z87_3744,
							(int) (((long) 3)), BgL_mz00_166);
						PROCEDURE_SET(BgL_zc3z04anonymousza31644ze3z87_3744,
							(int) (((long) 4)), BgL_kz00_167);
						PROCEDURE_SET(BgL_zc3z04anonymousza31644ze3z87_3744,
							(int) (((long) 5)), BgL_za7za7_168);
						return BGl_compilez00zz__match_compilerz00(BgL_arg1637z00_3061,
							BgL_arg1639z00_3062, BgL_rz00_165, BgL_mz00_166,
							BgL_zc3z04anonymousza31644ze3z87_3744, BgL_za7za7_168,
							BGl_list2256z00zz__match_compilerz00);
					}
				}
		}

	}



/* &<@anonymous:1644> */
	obj_t BGl_z62zc3z04anonymousza31644ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3745, obj_t BgL_rrz00_3752, obj_t BgL_za7za7z00_3753,
		obj_t BgL_ddz00_3754)
	{
		{	/* Match/compiler.scm 409 */
			{	/* Match/compiler.scm 410 */
				obj_t BgL_pza2za2_3746;
				obj_t BgL_iza2za2_3747;
				obj_t BgL_ez00_3748;
				obj_t BgL_mz00_3749;
				obj_t BgL_kz00_3750;
				obj_t BgL_za7za7_3751;

				BgL_pza2za2_3746 = PROCEDURE_REF(BgL_envz00_3745, (int) (((long) 0)));
				BgL_iza2za2_3747 = PROCEDURE_REF(BgL_envz00_3745, (int) (((long) 1)));
				BgL_ez00_3748 = PROCEDURE_REF(BgL_envz00_3745, (int) (((long) 2)));
				BgL_mz00_3749 = PROCEDURE_REF(BgL_envz00_3745, (int) (((long) 3)));
				BgL_kz00_3750 = PROCEDURE_REF(BgL_envz00_3745, (int) (((long) 4)));
				BgL_za7za7_3751 = PROCEDURE_REF(BgL_envz00_3745, (int) (((long) 5)));
				{	/* Match/compiler.scm 410 */
					obj_t BgL_arg1645z00_3851;
					obj_t BgL_arg1648z00_3852;

					BgL_arg1645z00_3851 = CDR(((obj_t) BgL_pza2za2_3746));
					BgL_arg1648z00_3852 = CDR(((obj_t) BgL_iza2za2_3747));
					{	/* Match/compiler.scm 410 */
						obj_t BgL_dz00_3853;

						BgL_dz00_3853 = BGl_list2256z00zz__match_compilerz00;
						if (NULLP(BgL_arg1645z00_3851))
							{	/* Match/compiler.scm 406 */
								return
									PROCEDURE_ENTRY(BgL_kz00_3750) (BgL_kz00_3750, BgL_rrz00_3752,
									BgL_za7za7_3751, BgL_dz00_3853, BEOA);
							}
						else
							{	/* Match/compiler.scm 408 */
								obj_t BgL_arg1637z00_3854;
								obj_t BgL_arg1639z00_3855;

								BgL_arg1637z00_3854 = CAR(((obj_t) BgL_arg1645z00_3851));
								{	/* Match/compiler.scm 408 */
									obj_t BgL_arg1641z00_3856;

									{	/* Match/compiler.scm 408 */
										obj_t BgL_arg1642z00_3857;

										{	/* Match/compiler.scm 408 */
											obj_t BgL_arg1643z00_3858;

											BgL_arg1643z00_3858 = CAR(((obj_t) BgL_arg1648z00_3852));
											BgL_arg1642z00_3857 =
												MAKE_YOUNG_PAIR(BgL_arg1643z00_3858, BNIL);
										}
										BgL_arg1641z00_3856 =
											MAKE_YOUNG_PAIR(BgL_ez00_3748, BgL_arg1642z00_3857);
									}
									BgL_arg1639z00_3855 =
										MAKE_YOUNG_PAIR(BGl_symbol2350z00zz__match_compilerz00,
										BgL_arg1641z00_3856);
								}
								{	/* Match/compiler.scm 410 */
									obj_t BgL_zc3z04anonymousza31644ze3z87_3859;

									BgL_zc3z04anonymousza31644ze3z87_3859 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31644ze32255ze5zz__match_compilerz00,
										(int) (((long) 3)), (int) (((long) 6)));
									PROCEDURE_SET(BgL_zc3z04anonymousza31644ze3z87_3859,
										(int) (((long) 0)), BgL_arg1645z00_3851);
									PROCEDURE_SET(BgL_zc3z04anonymousza31644ze3z87_3859,
										(int) (((long) 1)), BgL_arg1648z00_3852);
									PROCEDURE_SET(BgL_zc3z04anonymousza31644ze3z87_3859,
										(int) (((long) 2)), BgL_ez00_3748);
									PROCEDURE_SET(BgL_zc3z04anonymousza31644ze3z87_3859,
										(int) (((long) 3)), BgL_mz00_3749);
									PROCEDURE_SET(BgL_zc3z04anonymousza31644ze3z87_3859,
										(int) (((long) 4)), BgL_kz00_3750);
									PROCEDURE_SET(BgL_zc3z04anonymousza31644ze3z87_3859,
										(int) (((long) 5)), BgL_za7za7_3751);
									return
										BGl_compilez00zz__match_compilerz00(BgL_arg1637z00_3854,
										BgL_arg1639z00_3855, BgL_rrz00_3752, BgL_mz00_3749,
										BgL_zc3z04anonymousza31644ze3z87_3859, BgL_za7za7_3751,
										BGl_list2256z00zz__match_compilerz00);
								}
							}
					}
				}
			}
		}

	}



/* &<@anonymous:1644>2255 */
	obj_t BGl_z62zc3z04anonymousza31644ze32255ze5zz__match_compilerz00(obj_t
		BgL_envz00_3755, obj_t BgL_rrz00_3762, obj_t BgL_za7za7z00_3763,
		obj_t BgL_ddz00_3764)
	{
		{	/* Match/compiler.scm 409 */
			{	/* Match/compiler.scm 410 */
				obj_t BgL_arg1645z00_3756;
				obj_t BgL_arg1648z00_3757;
				obj_t BgL_ez00_3758;
				obj_t BgL_mz00_3759;
				obj_t BgL_kz00_3760;
				obj_t BgL_za7za7_3761;

				BgL_arg1645z00_3756 =
					PROCEDURE_REF(BgL_envz00_3755, (int) (((long) 0)));
				BgL_arg1648z00_3757 =
					PROCEDURE_REF(BgL_envz00_3755, (int) (((long) 1)));
				BgL_ez00_3758 = PROCEDURE_REF(BgL_envz00_3755, (int) (((long) 2)));
				BgL_mz00_3759 = PROCEDURE_REF(BgL_envz00_3755, (int) (((long) 3)));
				BgL_kz00_3760 = PROCEDURE_REF(BgL_envz00_3755, (int) (((long) 4)));
				BgL_za7za7_3761 = PROCEDURE_REF(BgL_envz00_3755, (int) (((long) 5)));
				{	/* Match/compiler.scm 410 */
					obj_t BgL_arg1645z00_3860;
					obj_t BgL_arg1648z00_3861;

					BgL_arg1645z00_3860 = CDR(((obj_t) BgL_arg1645z00_3756));
					BgL_arg1648z00_3861 = CDR(((obj_t) BgL_arg1648z00_3757));
					return
						BGl_compileza2za2zz__match_compilerz00(BgL_arg1645z00_3860,
						BgL_arg1648z00_3861, BgL_ez00_3758, BgL_rrz00_3762, BgL_mz00_3759,
						BgL_kz00_3760, BgL_za7za7_3761,
						BGl_list2256z00zz__match_compilerz00);
				}
			}
		}

	}



/* &k-init */
	obj_t BGl_z62kzd2initzb0zz__match_compilerz00(obj_t BgL_envz00_3522,
		obj_t BgL_rz00_3523, obj_t BgL_za7za7_3524, obj_t BgL_dz00_3525)
	{
		{	/* Match/compiler.scm 423 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &z-init */
	obj_t BGl_z62za7zd2initz17zz__match_compilerz00(obj_t BgL_envz00_3526,
		obj_t BgL_dz00_3527)
	{
		{	/* Match/compiler.scm 425 */
			return BBOOL(((bool_t) 0));
		}

	}



/* extend* */
	obj_t BGl_extendza2za2zz__match_compilerz00(obj_t BgL_rz00_181,
		obj_t BgL_vza2za2_182)
	{
		{	/* Match/compiler.scm 442 */
			if (NULLP(BgL_vza2za2_182))
				{	/* Match/compiler.scm 443 */
					return BgL_rz00_181;
				}
			else
				{	/* Match/compiler.scm 445 */
					obj_t BgL_arg1661z00_3127;
					obj_t BgL_arg1662z00_3128;

					{	/* Match/compiler.scm 445 */
						obj_t BgL_arg1663z00_3129;

						BgL_arg1663z00_3129 = CDR(((obj_t) BgL_vza2za2_182));
						BgL_arg1661z00_3127 =
							BGl_extendza2za2zz__match_compilerz00(BgL_rz00_181,
							BgL_arg1663z00_3129);
					}
					BgL_arg1662z00_3128 = CAR(((obj_t) BgL_vza2za2_182));
					{	/* Match/compiler.scm 445 */
						obj_t BgL_imz00_3133;

						BgL_imz00_3133 = BGl_symbol2352z00zz__match_compilerz00;
						{	/* Match/compiler.scm 435 */
							obj_t BgL_arg1656z00_3134;
							obj_t BgL_arg1657z00_3135;

							BgL_arg1656z00_3134 =
								MAKE_YOUNG_PAIR(BgL_arg1662z00_3128, BgL_imz00_3133);
							BgL_arg1657z00_3135 =
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BgL_arg1661z00_3127, BNIL);
							return MAKE_YOUNG_PAIR(BgL_arg1656z00_3134, BgL_arg1657z00_3135);
						}
					}
				}
		}

	}



/* &m-init */
	obj_t BGl_z62mzd2initzb0zz__match_compilerz00(obj_t BgL_envz00_3520,
		obj_t BgL_nz00_3521)
	{
		{	/* Match/compiler.scm 450 */
			{	/* Match/compiler.scm 451 */
				obj_t BgL_zc3z04anonymousza31664ze3z87_3862;

				BgL_zc3z04anonymousza31664ze3z87_3862 =
					MAKE_FX_PROCEDURE
					(BGl_z62zc3z04anonymousza31664ze3ze5zz__match_compilerz00,
					(int) (((long) 5)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31664ze3z87_3862, (int) (((long) 0)),
					BgL_nz00_3521);
				return BgL_zc3z04anonymousza31664ze3z87_3862;
			}
		}

	}



/* &<@anonymous:1664> */
	obj_t BGl_z62zc3z04anonymousza31664ze3ze5zz__match_compilerz00(obj_t
		BgL_envz00_3766, obj_t BgL_ez00_3768, obj_t BgL_rz00_3769,
		obj_t BgL_kz00_3770, obj_t BgL_za7za7_3771, obj_t BgL_cz00_3772)
	{
		{	/* Match/compiler.scm 451 */
			{	/* Match/compiler.scm 452 */
				obj_t BgL_nz00_3767;

				BgL_nz00_3767 = PROCEDURE_REF(BgL_envz00_3766, (int) (((long) 0)));
				{	/* Match/compiler.scm 452 */
					obj_t BgL_list1665z00_3863;

					{	/* Match/compiler.scm 452 */
						obj_t BgL_arg1667z00_3864;

						BgL_arg1667z00_3864 = MAKE_YOUNG_PAIR(BgL_nz00_3767, BNIL);
						BgL_list1665z00_3863 =
							MAKE_YOUNG_PAIR(BGl_string2354z00zz__match_compilerz00,
							BgL_arg1667z00_3864);
					}
					return
						BGl_errorz00zz__errorz00(BGl_string2287z00zz__match_compilerz00,
						BgL_list1665z00_3863, BGl_string2288z00zz__match_compilerz00);
				}
			}
		}

	}



/* build-if */
	obj_t BGl_buildzd2ifzd2zz__match_compilerz00(obj_t BgL_tstz00_191,
		obj_t BgL_thenz00_192, obj_t BgL_elsez00_193)
	{
		{	/* Match/compiler.scm 470 */
			if ((BgL_tstz00_191 == BTRUE))
				{	/* Match/compiler.scm 472 */
					return BgL_thenz00_192;
				}
			else
				{	/* Match/compiler.scm 472 */
					if ((BgL_tstz00_191 == BFALSE))
						{	/* Match/compiler.scm 473 */
							return BgL_elsez00_193;
						}
					else
						{	/* Match/compiler.scm 474 */
							bool_t BgL_test2489z00_5291;

							if ((BgL_thenz00_192 == BTRUE))
								{	/* Match/compiler.scm 474 */
									BgL_test2489z00_5291 = (BgL_elsez00_193 == BFALSE);
								}
							else
								{	/* Match/compiler.scm 474 */
									BgL_test2489z00_5291 = ((bool_t) 0);
								}
							if (BgL_test2489z00_5291)
								{	/* Match/compiler.scm 474 */
									return BgL_tstz00_191;
								}
							else
								{	/* Match/compiler.scm 477 */
									bool_t BgL_test2491z00_5295;

									if ((BgL_thenz00_192 == BFALSE))
										{	/* Match/compiler.scm 477 */
											BgL_test2491z00_5295 = (BgL_elsez00_193 == BTRUE);
										}
									else
										{	/* Match/compiler.scm 477 */
											BgL_test2491z00_5295 = ((bool_t) 0);
										}
									if (BgL_test2491z00_5295)
										{	/* Match/compiler.scm 479 */
											obj_t BgL_arg1684z00_1881;

											BgL_arg1684z00_1881 =
												MAKE_YOUNG_PAIR(BgL_tstz00_191, BNIL);
											return
												MAKE_YOUNG_PAIR(BGl_symbol2270z00zz__match_compilerz00,
												BgL_arg1684z00_1881);
										}
									else
										{	/* Match/compiler.scm 480 */
											obj_t BgL_arg1685z00_1882;

											{	/* Match/compiler.scm 480 */
												obj_t BgL_arg1686z00_1883;

												{	/* Match/compiler.scm 480 */
													obj_t BgL_arg1687z00_1884;

													BgL_arg1687z00_1884 =
														MAKE_YOUNG_PAIR(BgL_elsez00_193, BNIL);
													BgL_arg1686z00_1883 =
														MAKE_YOUNG_PAIR(BgL_thenz00_192,
														BgL_arg1687z00_1884);
												}
												BgL_arg1685z00_1882 =
													MAKE_YOUNG_PAIR(BgL_tstz00_191, BgL_arg1686z00_1883);
											}
											return
												MAKE_YOUNG_PAIR(BGl_symbol2264z00zz__match_compilerz00,
												BgL_arg1685z00_1882);
										}
								}
						}
				}
		}

	}



/* build-let */
	obj_t BGl_buildzd2letzd2zz__match_compilerz00(obj_t BgL_za2carza2z00_194,
		obj_t BgL_za2cdrza2z00_195, obj_t BgL_ez00_196, obj_t BgL_bodyz00_197)
	{
		{	/* Match/compiler.scm 482 */
			if (BGl_2ze3ze3zz__r4_numbers_6_5z00
				(BGl_countzd2occurrenceszd2zz__match_compilerz00(BgL_za2carza2z00_194,
						BgL_bodyz00_197, ((long) 0)), BINT(((long) 1))))
				{	/* Match/compiler.scm 483 */
					if (BGl_2ze3ze3zz__r4_numbers_6_5z00
						(BGl_countzd2occurrenceszd2zz__match_compilerz00
							(BgL_za2cdrza2z00_195, BgL_bodyz00_197, ((long) 0)),
							BINT(((long) 1))))
						{	/* Match/compiler.scm 485 */
							obj_t BgL_arg1693z00_1891;

							{	/* Match/compiler.scm 485 */
								obj_t BgL_arg1695z00_1892;
								obj_t BgL_arg1696z00_1893;

								{	/* Match/compiler.scm 485 */
									obj_t BgL_arg1697z00_1894;
									obj_t BgL_arg1698z00_1895;

									{	/* Match/compiler.scm 485 */
										obj_t BgL_arg1699z00_1896;

										{	/* Match/compiler.scm 485 */
											obj_t BgL_arg1700z00_1897;

											{	/* Match/compiler.scm 485 */
												obj_t BgL_arg1701z00_1898;

												BgL_arg1701z00_1898 =
													MAKE_YOUNG_PAIR(BgL_ez00_196, BNIL);
												BgL_arg1700z00_1897 =
													MAKE_YOUNG_PAIR
													(BGl_symbol2355z00zz__match_compilerz00,
													BgL_arg1701z00_1898);
											}
											BgL_arg1699z00_1896 =
												MAKE_YOUNG_PAIR(BgL_arg1700z00_1897, BNIL);
										}
										BgL_arg1697z00_1894 =
											MAKE_YOUNG_PAIR(BgL_za2carza2z00_194,
											BgL_arg1699z00_1896);
									}
									{	/* Match/compiler.scm 485 */
										obj_t BgL_arg1702z00_1899;

										{	/* Match/compiler.scm 485 */
											obj_t BgL_arg1704z00_1900;

											{	/* Match/compiler.scm 485 */
												obj_t BgL_arg1707z00_1901;

												{	/* Match/compiler.scm 485 */
													obj_t BgL_arg1708z00_1902;

													BgL_arg1708z00_1902 =
														MAKE_YOUNG_PAIR(BgL_ez00_196, BNIL);
													BgL_arg1707z00_1901 =
														MAKE_YOUNG_PAIR
														(BGl_symbol2357z00zz__match_compilerz00,
														BgL_arg1708z00_1902);
												}
												BgL_arg1704z00_1900 =
													MAKE_YOUNG_PAIR(BgL_arg1707z00_1901, BNIL);
											}
											BgL_arg1702z00_1899 =
												MAKE_YOUNG_PAIR(BgL_za2cdrza2z00_195,
												BgL_arg1704z00_1900);
										}
										BgL_arg1698z00_1895 =
											MAKE_YOUNG_PAIR(BgL_arg1702z00_1899, BNIL);
									}
									BgL_arg1695z00_1892 =
										MAKE_YOUNG_PAIR(BgL_arg1697z00_1894, BgL_arg1698z00_1895);
								}
								BgL_arg1696z00_1893 = MAKE_YOUNG_PAIR(BgL_bodyz00_197, BNIL);
								BgL_arg1693z00_1891 =
									MAKE_YOUNG_PAIR(BgL_arg1695z00_1892, BgL_arg1696z00_1893);
							}
							return
								MAKE_YOUNG_PAIR(BGl_symbol2332z00zz__match_compilerz00,
								BgL_arg1693z00_1891);
						}
					else
						{	/* Match/compiler.scm 487 */
							obj_t BgL_arg1709z00_1903;

							{	/* Match/compiler.scm 487 */
								obj_t BgL_arg1710z00_1904;
								obj_t BgL_arg1711z00_1905;

								{	/* Match/compiler.scm 487 */
									obj_t BgL_arg1712z00_1906;

									{	/* Match/compiler.scm 487 */
										obj_t BgL_arg1713z00_1907;

										{	/* Match/compiler.scm 487 */
											obj_t BgL_arg1716z00_1908;

											{	/* Match/compiler.scm 487 */
												obj_t BgL_arg1717z00_1909;

												BgL_arg1717z00_1909 =
													MAKE_YOUNG_PAIR(BgL_ez00_196, BNIL);
												BgL_arg1716z00_1908 =
													MAKE_YOUNG_PAIR
													(BGl_symbol2355z00zz__match_compilerz00,
													BgL_arg1717z00_1909);
											}
											BgL_arg1713z00_1907 =
												MAKE_YOUNG_PAIR(BgL_arg1716z00_1908, BNIL);
										}
										BgL_arg1712z00_1906 =
											MAKE_YOUNG_PAIR(BgL_za2carza2z00_194,
											BgL_arg1713z00_1907);
									}
									BgL_arg1710z00_1904 =
										MAKE_YOUNG_PAIR(BgL_arg1712z00_1906, BNIL);
								}
								{	/* Match/compiler.scm 488 */
									obj_t BgL_arg1719z00_1910;

									{	/* Match/compiler.scm 488 */
										obj_t BgL_arg1720z00_1911;

										{	/* Match/compiler.scm 488 */
											obj_t BgL_arg1721z00_1912;

											BgL_arg1721z00_1912 = MAKE_YOUNG_PAIR(BgL_ez00_196, BNIL);
											BgL_arg1720z00_1911 =
												MAKE_YOUNG_PAIR(BGl_symbol2357z00zz__match_compilerz00,
												BgL_arg1721z00_1912);
										}
										BgL_arg1719z00_1910 =
											BGl_unfoldz00zz__match_compilerz00(BgL_za2cdrza2z00_195,
											BgL_arg1720z00_1911, BgL_bodyz00_197);
									}
									BgL_arg1711z00_1905 =
										MAKE_YOUNG_PAIR(BgL_arg1719z00_1910, BNIL);
								}
								BgL_arg1709z00_1903 =
									MAKE_YOUNG_PAIR(BgL_arg1710z00_1904, BgL_arg1711z00_1905);
							}
							return
								MAKE_YOUNG_PAIR(BGl_symbol2332z00zz__match_compilerz00,
								BgL_arg1709z00_1903);
						}
				}
			else
				{	/* Match/compiler.scm 483 */
					if (BGl_2ze3ze3zz__r4_numbers_6_5z00
						(BGl_countzd2occurrenceszd2zz__match_compilerz00
							(BgL_za2cdrza2z00_195, BgL_bodyz00_197, ((long) 0)),
							BINT(((long) 1))))
						{	/* Match/compiler.scm 490 */
							obj_t BgL_arg1725z00_1916;

							{	/* Match/compiler.scm 490 */
								obj_t BgL_arg1726z00_1917;
								obj_t BgL_arg1727z00_1918;

								{	/* Match/compiler.scm 490 */
									obj_t BgL_arg1728z00_1919;

									{	/* Match/compiler.scm 490 */
										obj_t BgL_arg1729z00_1920;

										{	/* Match/compiler.scm 490 */
											obj_t BgL_arg1730z00_1921;

											{	/* Match/compiler.scm 490 */
												obj_t BgL_arg1731z00_1922;

												BgL_arg1731z00_1922 =
													MAKE_YOUNG_PAIR(BgL_ez00_196, BNIL);
												BgL_arg1730z00_1921 =
													MAKE_YOUNG_PAIR
													(BGl_symbol2357z00zz__match_compilerz00,
													BgL_arg1731z00_1922);
											}
											BgL_arg1729z00_1920 =
												MAKE_YOUNG_PAIR(BgL_arg1730z00_1921, BNIL);
										}
										BgL_arg1728z00_1919 =
											MAKE_YOUNG_PAIR(BgL_za2cdrza2z00_195,
											BgL_arg1729z00_1920);
									}
									BgL_arg1726z00_1917 =
										MAKE_YOUNG_PAIR(BgL_arg1728z00_1919, BNIL);
								}
								{	/* Match/compiler.scm 491 */
									obj_t BgL_arg1732z00_1923;

									{	/* Match/compiler.scm 491 */
										obj_t BgL_arg1733z00_1924;

										{	/* Match/compiler.scm 491 */
											obj_t BgL_arg1734z00_1925;

											BgL_arg1734z00_1925 = MAKE_YOUNG_PAIR(BgL_ez00_196, BNIL);
											BgL_arg1733z00_1924 =
												MAKE_YOUNG_PAIR(BGl_symbol2355z00zz__match_compilerz00,
												BgL_arg1734z00_1925);
										}
										BgL_arg1732z00_1923 =
											BGl_unfoldz00zz__match_compilerz00(BgL_za2carza2z00_194,
											BgL_arg1733z00_1924, BgL_bodyz00_197);
									}
									BgL_arg1727z00_1918 =
										MAKE_YOUNG_PAIR(BgL_arg1732z00_1923, BNIL);
								}
								BgL_arg1725z00_1916 =
									MAKE_YOUNG_PAIR(BgL_arg1726z00_1917, BgL_arg1727z00_1918);
							}
							return
								MAKE_YOUNG_PAIR(BGl_symbol2332z00zz__match_compilerz00,
								BgL_arg1725z00_1916);
						}
					else
						{	/* Match/compiler.scm 492 */
							obj_t BgL_arg1736z00_1926;
							obj_t BgL_arg1737z00_1927;

							{	/* Match/compiler.scm 492 */
								obj_t BgL_arg1738z00_1928;

								BgL_arg1738z00_1928 = MAKE_YOUNG_PAIR(BgL_ez00_196, BNIL);
								BgL_arg1736z00_1926 =
									MAKE_YOUNG_PAIR(BGl_symbol2357z00zz__match_compilerz00,
									BgL_arg1738z00_1928);
							}
							{	/* Match/compiler.scm 493 */
								obj_t BgL_arg1739z00_1929;

								{	/* Match/compiler.scm 493 */
									obj_t BgL_arg1740z00_1930;

									BgL_arg1740z00_1930 = MAKE_YOUNG_PAIR(BgL_ez00_196, BNIL);
									BgL_arg1739z00_1929 =
										MAKE_YOUNG_PAIR(BGl_symbol2355z00zz__match_compilerz00,
										BgL_arg1740z00_1930);
								}
								BgL_arg1737z00_1927 =
									BGl_unfoldz00zz__match_compilerz00(BgL_za2carza2z00_194,
									BgL_arg1739z00_1929, BgL_bodyz00_197);
							}
							return
								BGl_unfoldz00zz__match_compilerz00(BgL_za2cdrza2z00_195,
								BgL_arg1736z00_1926, BgL_arg1737z00_1927);
						}
				}
		}

	}



/* unfold */
	obj_t BGl_unfoldz00zz__match_compilerz00(obj_t BgL_sz00_198,
		obj_t BgL_vz00_199, obj_t BgL_ez00_200)
	{
		{	/* Match/compiler.scm 498 */
			if (NULLP(BgL_ez00_200))
				{	/* Match/compiler.scm 499 */
					return BNIL;
				}
			else
				{	/* Match/compiler.scm 499 */
					if (CBOOL(BGl_atomzf3zf3zz__match_s2cfunz00(BgL_ez00_200)))
						{	/* Match/compiler.scm 501 */
							if ((BgL_ez00_200 == BgL_sz00_198))
								{	/* Match/compiler.scm 502 */
									return BgL_vz00_199;
								}
							else
								{	/* Match/compiler.scm 502 */
									return BgL_ez00_200;
								}
						}
					else
						{	/* Match/compiler.scm 501 */
							if (PAIRP(BgL_ez00_200))
								{	/* Match/compiler.scm 503 */
									if (
										(CAR(BgL_ez00_200) ==
											BGl_symbol2266z00zz__match_compilerz00))
										{	/* Match/compiler.scm 504 */
											return BgL_ez00_200;
										}
									else
										{	/* Match/compiler.scm 506 */
											obj_t BgL_fz00_1939;
											obj_t BgL_argsz00_1940;

											BgL_fz00_1939 = CAR(BgL_ez00_200);
											BgL_argsz00_1940 = CDR(BgL_ez00_200);
											return
												MAKE_YOUNG_PAIR(BGl_unfoldz00zz__match_compilerz00
												(BgL_sz00_198, BgL_vz00_199, BgL_fz00_1939),
												BGl_unfoldz00zz__match_compilerz00(BgL_sz00_198,
													BgL_vz00_199, BgL_argsz00_1940));
										}
								}
							else
								{	/* Match/compiler.scm 503 */
									return BFALSE;
								}
						}
				}
		}

	}



/* integers */
	obj_t BGl_integersz00zz__match_compilerz00(long BgL_fromz00_201,
		long BgL_toz00_202)
	{
		{	/* Match/compiler.scm 509 */
			if (BGl_2ze3ze3zz__r4_numbers_6_5z00(BINT(BgL_fromz00_201),
					BINT(BgL_toz00_202)))
				{	/* Match/compiler.scm 510 */
					return BNIL;
				}
			else
				{	/* Match/compiler.scm 510 */
					return
						MAKE_YOUNG_PAIR(BINT(BgL_fromz00_201),
						BGl_integersz00zz__match_compilerz00(
							(BgL_fromz00_201 + ((long) 1)), BgL_toz00_202));
		}}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__match_compilerz00()
	{
		{	/* Match/compiler.scm 26 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__match_compilerz00()
	{
		{	/* Match/compiler.scm 26 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__match_compilerz00()
	{
		{	/* Match/compiler.scm 26 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__match_compilerz00()
	{
		{	/* Match/compiler.scm 26 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2359z00zz__match_compilerz00));
			BGl_modulezd2initializa7ationz75zz__match_s2cfunz00(((long) 509060642),
				BSTRING_TO_STRING(BGl_string2359z00zz__match_compilerz00));
			BGl_modulezd2initializa7ationz75zz__match_descriptionsz00(((long)
					232414647),
				BSTRING_TO_STRING(BGl_string2359z00zz__match_compilerz00));
			return BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2359z00zz__match_compilerz00));
		}

	}

#ifdef __cplusplus
}
#endif
