/*===========================================================================*/
/*   (Rgc/rgcexpand.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Rgc/rgcexpand.scm -indent -o objs/obj_u/Rgc/rgcexpand.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_symbol2561z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2480z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2563z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2482z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2565z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2484z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2567z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2486z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2569z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2489z00zz__rgc_expandz00 = BUNSPEC;
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol2572z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2491z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2574z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2493z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2576z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2495z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2578z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2497z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2499z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2583z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2585z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2591z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2595z00zz__rgc_expandz00 = BUNSPEC;
	extern obj_t BGl_regularzd2treezd2ze3nodeze3zz__rgc_treez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2regularzd2grammarz00zz__rgc_expandz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__rgc_expandz00();
	static obj_t BGl_objectzd2initzd2zz__rgc_expandz00();
	extern obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_makezd2regularzd2parserz00zz__rgc_expandz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_statezd2namezd2zz__rgc_dfaz00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_resetzd2treez12zc0zz__rgc_treez00();
	static obj_t BGl_list2402z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2403z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zz__rgc_expandz00();
	static obj_t BGl_list2404z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2405z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2408z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2409z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2412z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2413z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2414z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2415z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2418z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2419z00zz__rgc_expandz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_expandzd2stringzd2casez00zz__rgc_expandz00(obj_t,
		obj_t);
	static obj_t BGl_list2600z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2601z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2602z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2603z00zz__rgc_expandz00 = BUNSPEC;
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_list2363z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2366z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2611z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2612z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2613z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_z62expandzd2regularzd2grammarz62zz__rgc_expandz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_list2616z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2375z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2619z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2622z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2380z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2625z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2383z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2628z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2632z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2390z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2393z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2398z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2399z00zz__rgc_expandz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__rgc_expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_setz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgcz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_configz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_compilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_dfaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_treez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_rulesz00(long, char *);
	static obj_t BGl_list2571z00zz__rgc_expandz00 = BUNSPEC;
	extern obj_t BGl_nodezd2ze3dfaz31zz__rgc_dfaz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_resetzd2dfaz12zc0zz__rgc_dfaz00();
	static obj_t BGl_list2580z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2581z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2582z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2587z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2588z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2589z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zz__rgc_expandz00();
	static obj_t BGl_list2590z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2593z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2594z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2597z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list2598z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_gczd2rootszd2initz00zz__rgc_expandz00();
	static obj_t BGl_list2599z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_importedzd2moduleszd2initz00zz__rgc_expandz00();
	static obj_t BGl_symbol2400z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2406z00zz__rgc_expandz00 = BUNSPEC;
	extern obj_t BGl_getzd2initialzd2statez00zz__rgc_dfaz00();
	static obj_t BGl_symbol2410z00zz__rgc_expandz00 = BUNSPEC;
	extern obj_t BGl_compilezd2dfazd2zz__rgc_compilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2416z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2501z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2420z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2503z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2422z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2505z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2424z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2343z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2507z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2426z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2345z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2509z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2428z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2347z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2349z00zz__rgc_expandz00 = BUNSPEC;
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_symbol2430z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2513z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2432z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2351z00zz__rgc_expandz00 = BUNSPEC;
	extern obj_t BGl_za2unsafezd2rgcza2zd2zz__rgcz00;
	static obj_t BGl_symbol2515z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2434z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2353z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2517z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2436z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2355z00zz__rgc_expandz00 = BUNSPEC;
	extern obj_t BGl_resetzd2specialzd2matchzd2charz12zc0zz__rgc_rulesz00();
	static obj_t BGl_symbol2519z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2438z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2359z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2440z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2522z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2604z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2442z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2361z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2524z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2444z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2607z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2526z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2364z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2446z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2609z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2528z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2448z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2367z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2369z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2531z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2450z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2614z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2533z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2452z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2371z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2535z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2454z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2373z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2617z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2537z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2456z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2376z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2539z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2458z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2378z00zz__rgc_expandz00 = BUNSPEC;
	extern obj_t BGl_ruleszd2ze3regularzd2treeze3zz__rgc_rulesz00(obj_t, obj_t);
	static obj_t BGl_symbol2620z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2541z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2460z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2623z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2543z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2462z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2381z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2626z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2545z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2464z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2384z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2547z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2466z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2629z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2386z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2549z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2468z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2388z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_z62expandzd2stringzd2casez62zz__rgc_expandz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2551z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2470z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2633z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2553z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2472z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2391z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2635z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2555z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2394z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2557z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2476z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2396z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2559z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2478z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2401z00zz__rgc_expandz00,
		BgL_bgl_string2401za700za7za7_2638za7, "rgc-submatch-start*2!", 21);
	      DEFINE_STRING(BGl_string2407z00zz__rgc_expandz00,
		BgL_bgl_string2407za700za7za7_2639za7, "start*", 6);
	      DEFINE_STRING(BGl_string2411z00zz__rgc_expandz00,
		BgL_bgl_string2411za700za7za7_2640za7, "rgc-submatch-start2!", 20);
	      DEFINE_STRING(BGl_string2417z00zz__rgc_expandz00,
		BgL_bgl_string2417za700za7za7_2641za7, "start", 5);
	      DEFINE_STRING(BGl_string2500z00zz__rgc_expandz00,
		BgL_bgl_string2500za700za7za7_2642za7, "rgc-buffer-integer", 18);
	      DEFINE_STRING(BGl_string2502z00zz__rgc_expandz00,
		BgL_bgl_string2502za700za7za7_2643za7, "the-flonum::double", 18);
	      DEFINE_STRING(BGl_string2421z00zz__rgc_expandz00,
		BgL_bgl_string2421za700za7za7_2644za7, "the-port::input-port", 20);
	      DEFINE_STRING(BGl_string2504z00zz__rgc_expandz00,
		BgL_bgl_string2504za700za7za7_2645za7, "rgc-buffer-flonum", 17);
	      DEFINE_STRING(BGl_string2423z00zz__rgc_expandz00,
		BgL_bgl_string2423za700za7za7_2646za7, "the-character::char", 19);
	      DEFINE_STRING(BGl_string2506z00zz__rgc_expandz00,
		BgL_bgl_string2506za700za7za7_2647za7, "the-symbol::symbol", 18);
	      DEFINE_STRING(BGl_string2425z00zz__rgc_expandz00,
		BgL_bgl_string2425za700za7za7_2648za7, "rgc-buffer-character", 20);
	      DEFINE_STRING(BGl_string2344z00zz__rgc_expandz00,
		BgL_bgl_string2344za700za7za7_2649za7, "port", 4);
	      DEFINE_STRING(BGl_string2508z00zz__rgc_expandz00,
		BgL_bgl_string2508za700za7za7_2650za7, "rgc-buffer-symbol", 17);
	      DEFINE_STRING(BGl_string2427z00zz__rgc_expandz00,
		BgL_bgl_string2427za700za7za7_2651za7, "the-byte::int", 13);
	      DEFINE_STRING(BGl_string2346z00zz__rgc_expandz00,
		BgL_bgl_string2346za700za7za7_2652za7, "open-input-string", 17);
	      DEFINE_STRING(BGl_string2429z00zz__rgc_expandz00,
		BgL_bgl_string2429za700za7za7_2653za7, "rgc-buffer-byte", 15);
	      DEFINE_STRING(BGl_string2348z00zz__rgc_expandz00,
		BgL_bgl_string2348za700za7za7_2654za7, "regular-grammar", 15);
	      DEFINE_STRING(BGl_string2510z00zz__rgc_expandz00,
		BgL_bgl_string2510za700za7za7_2655za7, "the-subsymbol::symbol", 21);
	      DEFINE_STRING(BGl_string2511z00zz__rgc_expandz00,
		BgL_bgl_string2511za700za7za7_2656za7, "Illegal range", 13);
	      DEFINE_STRING(BGl_string2512z00zz__rgc_expandz00,
		BgL_bgl_string2512za700za7za7_2657za7, "the-subsymbol", 13);
	      DEFINE_STRING(BGl_string2431z00zz__rgc_expandz00,
		BgL_bgl_string2431za700za7za7_2658za7, "offset::int", 11);
	      DEFINE_STRING(BGl_string2350z00zz__rgc_expandz00,
		BgL_bgl_string2350za700za7za7_2659za7, "read/rp", 7);
	      DEFINE_STRING(BGl_string2514z00zz__rgc_expandz00,
		BgL_bgl_string2514za700za7za7_2660za7, "rgc-buffer-subsymbol", 20);
	      DEFINE_STRING(BGl_string2433z00zz__rgc_expandz00,
		BgL_bgl_string2433za700za7za7_2661za7, "the-byte-ref::int", 17);
	      DEFINE_STRING(BGl_string2352z00zz__rgc_expandz00,
		BgL_bgl_string2352za700za7za7_2662za7, "close-input-port", 16);
	      DEFINE_STRING(BGl_string2516z00zz__rgc_expandz00,
		BgL_bgl_string2516za700za7za7_2663za7, "the-downcase-symbol::symbol", 27);
	      DEFINE_STRING(BGl_string2435z00zz__rgc_expandz00,
		BgL_bgl_string2435za700za7za7_2664za7, "offset", 6);
	      DEFINE_STRING(BGl_string2354z00zz__rgc_expandz00,
		BgL_bgl_string2354za700za7za7_2665za7, "unwind-protect", 14);
	      DEFINE_STRING(BGl_string2518z00zz__rgc_expandz00,
		BgL_bgl_string2518za700za7za7_2666za7, "rgc-buffer-downcase-symbol", 26);
	      DEFINE_STRING(BGl_string2437z00zz__rgc_expandz00,
		BgL_bgl_string2437za700za7za7_2667za7, "rgc-buffer-byte-ref", 19);
	      DEFINE_STRING(BGl_string2356z00zz__rgc_expandz00,
		BgL_bgl_string2356za700za7za7_2668za7, "let", 3);
	      DEFINE_STRING(BGl_string2357z00zz__rgc_expandz00,
		BgL_bgl_string2357za700za7za7_2669za7, "string-case", 11);
	      DEFINE_STRING(BGl_string2439z00zz__rgc_expandz00,
		BgL_bgl_string2439za700za7za7_2670za7, "the-string::bstring", 19);
	      DEFINE_STRING(BGl_string2358z00zz__rgc_expandz00,
		BgL_bgl_string2358za700za7za7_2671za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string2520z00zz__rgc_expandz00,
		BgL_bgl_string2520za700za7za7_2672za7, "the-downcase-subsymbol::symbol",
		30);
	      DEFINE_STRING(BGl_string2521z00zz__rgc_expandz00,
		BgL_bgl_string2521za700za7za7_2673za7, "the-downcase-subsymbol", 22);
	      DEFINE_STRING(BGl_string2441z00zz__rgc_expandz00,
		BgL_bgl_string2441za700za7za7_2674za7, "the-length", 10);
	      DEFINE_STRING(BGl_string2360z00zz__rgc_expandz00,
		BgL_bgl_string2360za700za7za7_2675za7, "the-rgc-context", 15);
	      DEFINE_STRING(BGl_string2523z00zz__rgc_expandz00,
		BgL_bgl_string2523za700za7za7_2676za7, "rgc-buffer-downcase-subsymbol", 29);
	      DEFINE_STRING(BGl_string2605z00zz__rgc_expandz00,
		BgL_bgl_string2605za700za7za7_2677za7, "", 0);
	      DEFINE_STRING(BGl_string2443z00zz__rgc_expandz00,
		BgL_bgl_string2443za700za7za7_2678za7, "rgc-buffer-substring", 20);
	      DEFINE_STRING(BGl_string2362z00zz__rgc_expandz00,
		BgL_bgl_string2362za700za7za7_2679za7, "iport", 5);
	      DEFINE_STRING(BGl_string2606z00zz__rgc_expandz00,
		BgL_bgl_string2606za700za7za7_2680za7, "Illegal match", 13);
	      DEFINE_STRING(BGl_string2525z00zz__rgc_expandz00,
		BgL_bgl_string2525za700za7za7_2681za7, "the-upcase-symbol::symbol", 25);
	      DEFINE_STRING(BGl_string2445z00zz__rgc_expandz00,
		BgL_bgl_string2445za700za7za7_2682za7, "max::int", 8);
	      DEFINE_STRING(BGl_string2608z00zz__rgc_expandz00,
		BgL_bgl_string2608za700za7za7_2683za7, "else", 4);
	      DEFINE_STRING(BGl_string2527z00zz__rgc_expandz00,
		BgL_bgl_string2527za700za7za7_2684za7, "rgc-buffer-upcase-symbol", 24);
	      DEFINE_STRING(BGl_string2365z00zz__rgc_expandz00,
		BgL_bgl_string2365za700za7za7_2685za7, "define", 6);
	      DEFINE_STRING(BGl_string2447z00zz__rgc_expandz00,
		BgL_bgl_string2447za700za7za7_2686za7, "min::int", 8);
	      DEFINE_STRING(BGl_string2529z00zz__rgc_expandz00,
		BgL_bgl_string2529za700za7za7_2687za7, "the-upcase-subsymbol::symbol", 28);
	      DEFINE_STRING(BGl_string2449z00zz__rgc_expandz00,
		BgL_bgl_string2449za700za7za7_2688za7, "the-substring::bstring", 22);
	      DEFINE_STRING(BGl_string2368z00zz__rgc_expandz00,
		BgL_bgl_string2368za700za7za7_2689za7, "rgc-submatch-stop2!", 19);
	      DEFINE_STRING(BGl_string2610z00zz__rgc_expandz00,
		BgL_bgl_string2610za700za7za7_2690za7, "case", 4);
	      DEFINE_STRING(BGl_string2530z00zz__rgc_expandz00,
		BgL_bgl_string2530za700za7za7_2691za7, "the-upcase-subsymbol", 20);
	      DEFINE_STRING(BGl_string2532z00zz__rgc_expandz00,
		BgL_bgl_string2532za700za7za7_2692za7, "rgc-buffer-upcase-subsymbol", 27);
	      DEFINE_STRING(BGl_string2451z00zz__rgc_expandz00,
		BgL_bgl_string2451za700za7za7_2693za7, "min", 3);
	      DEFINE_STRING(BGl_string2370z00zz__rgc_expandz00,
		BgL_bgl_string2370za700za7za7_2694za7, "match::int", 10);
	      DEFINE_STRING(BGl_string2615z00zz__rgc_expandz00,
		BgL_bgl_string2615za700za7za7_2695za7, "closed-input-port?", 18);
	      DEFINE_STRING(BGl_string2534z00zz__rgc_expandz00,
		BgL_bgl_string2534za700za7za7_2696za7, "the-keyword::keyword", 20);
	      DEFINE_STRING(BGl_string2453z00zz__rgc_expandz00,
		BgL_bgl_string2453za700za7za7_2697za7, "max", 3);
	      DEFINE_STRING(BGl_string2372z00zz__rgc_expandz00,
		BgL_bgl_string2372za700za7za7_2698za7, "submatch::int", 13);
	      DEFINE_STRING(BGl_string2536z00zz__rgc_expandz00,
		BgL_bgl_string2536za700za7za7_2699za7, "rgc-buffer-keyword", 18);
	      DEFINE_STRING(BGl_string2455z00zz__rgc_expandz00,
		BgL_bgl_string2455za700za7za7_2700za7, "<fx", 3);
	      DEFINE_STRING(BGl_string2374z00zz__rgc_expandz00,
		BgL_bgl_string2374za700za7za7_2701za7, "forward", 7);
	      DEFINE_STRING(BGl_string2618z00zz__rgc_expandz00,
		BgL_bgl_string2618za700za7za7_2702za7, "the-port", 8);
	      DEFINE_STRING(BGl_string2538z00zz__rgc_expandz00,
		BgL_bgl_string2538za700za7za7_2703za7, "the-downcase-keyword::keyword", 29);
	      DEFINE_STRING(BGl_string2457z00zz__rgc_expandz00,
		BgL_bgl_string2457za700za7za7_2704za7, "+fx", 3);
	      DEFINE_STRING(BGl_string2377z00zz__rgc_expandz00,
		BgL_bgl_string2377za700za7za7_2705za7, "set!", 4);
	      DEFINE_STRING(BGl_string2459z00zz__rgc_expandz00,
		BgL_bgl_string2459za700za7za7_2706za7, "when", 4);
	      DEFINE_STRING(BGl_string2379z00zz__rgc_expandz00,
		BgL_bgl_string2379za700za7za7_2707za7, "rgc-submatches", 14);
	      DEFINE_STRING(BGl_string2621z00zz__rgc_expandz00,
		BgL_bgl_string2621za700za7za7_2708za7, "raise", 5);
	      DEFINE_STRING(BGl_string2540z00zz__rgc_expandz00,
		BgL_bgl_string2540za700za7za7_2709za7, "rgc-buffer-downcase-keyword", 27);
	      DEFINE_STRING(BGl_string2542z00zz__rgc_expandz00,
		BgL_bgl_string2542za700za7za7_2710za7, "the-upcase-keyword::keyword", 27);
	      DEFINE_STRING(BGl_string2461z00zz__rgc_expandz00,
		BgL_bgl_string2461za700za7za7_2711za7, ">=fx", 4);
	      DEFINE_STRING(BGl_string2624z00zz__rgc_expandz00,
		BgL_bgl_string2624za700za7za7_2712za7, "instantiate::&io-closed-error", 29);
	      DEFINE_STRING(BGl_string2544z00zz__rgc_expandz00,
		BgL_bgl_string2544za700za7za7_2713za7, "rgc-buffer-upcase-keyword", 25);
	      DEFINE_STRING(BGl_string2463z00zz__rgc_expandz00,
		BgL_bgl_string2463za700za7za7_2714za7, "<=fx", 4);
	      DEFINE_STRING(BGl_string2382z00zz__rgc_expandz00,
		BgL_bgl_string2382za700za7za7_2715za7, "cons", 4);
	      DEFINE_STRING(BGl_string2627z00zz__rgc_expandz00,
		BgL_bgl_string2627za700za7za7_2716za7, "proc", 4);
	      DEFINE_STRING(BGl_string2546z00zz__rgc_expandz00,
		BgL_bgl_string2546za700za7za7_2717za7, "the-failure", 11);
	      DEFINE_STRING(BGl_string2465z00zz__rgc_expandz00,
		BgL_bgl_string2465za700za7za7_2718za7, "and", 3);
	      DEFINE_STRING(BGl_string2385z00zz__rgc_expandz00,
		BgL_bgl_string2385za700za7za7_2719za7, "vector", 6);
	      DEFINE_STRING(BGl_string2548z00zz__rgc_expandz00,
		BgL_bgl_string2548za700za7za7_2720za7, "=fx", 3);
	      DEFINE_STRING(BGl_string2467z00zz__rgc_expandz00,
		BgL_bgl_string2467za700za7za7_2721za7, "__r4_output_6_10_3", 18);
	      DEFINE_STRING(BGl_string2387z00zz__rgc_expandz00,
		BgL_bgl_string2387za700za7za7_2722za7, "match", 5);
	      DEFINE_STRING(BGl_string2469z00zz__rgc_expandz00,
		BgL_bgl_string2469za700za7za7_2723za7, "format", 6);
	      DEFINE_STRING(BGl_string2389z00zz__rgc_expandz00,
		BgL_bgl_string2389za700za7za7_2724za7, "submatch", 8);
	      DEFINE_STRING(BGl_string2630z00zz__rgc_expandz00,
		BgL_bgl_string2630za700za7za7_2725za7, "msg", 3);
	      DEFINE_STRING(BGl_string2631z00zz__rgc_expandz00,
		BgL_bgl_string2631za700za7za7_2726za7, "Can't read on a closed input port",
		33);
	      DEFINE_STRING(BGl_string2550z00zz__rgc_expandz00,
		BgL_bgl_string2550za700za7za7_2727za7, "eof-object", 10);
	      DEFINE_STRING(BGl_string2552z00zz__rgc_expandz00,
		BgL_bgl_string2552za700za7za7_2728za7, "the-context", 11);
	      DEFINE_STRING(BGl_string2471z00zz__rgc_expandz00,
		BgL_bgl_string2471za700za7za7_2729za7, "@", 1);
	      DEFINE_STRING(BGl_string2634z00zz__rgc_expandz00,
		BgL_bgl_string2634za700za7za7_2730za7, "obj", 3);
	      DEFINE_STRING(BGl_string2554z00zz__rgc_expandz00,
		BgL_bgl_string2554za700za7za7_2731za7, "context", 7);
	      DEFINE_STRING(BGl_string2473z00zz__rgc_expandz00,
		BgL_bgl_string2473za700za7za7_2732za7, "the-string", 10);
	      DEFINE_STRING(BGl_string2392z00zz__rgc_expandz00,
		BgL_bgl_string2392za700za7za7_2733za7, "rgc-buffer-position", 19);
	      DEFINE_STRING(BGl_string2636z00zz__rgc_expandz00,
		BgL_bgl_string2636za700za7za7_2734za7, "lambda", 6);
	      DEFINE_STRING(BGl_string2474z00zz__rgc_expandz00,
		BgL_bgl_string2474za700za7za7_2735za7, "Illegal range `~a'", 18);
	      DEFINE_STRING(BGl_string2637z00zz__rgc_expandz00,
		BgL_bgl_string2637za700za7za7_2736za7, "__rgc_expand", 12);
	      DEFINE_STRING(BGl_string2556z00zz__rgc_expandz00,
		BgL_bgl_string2556za700za7za7_2737za7, "rgc-context?::bool", 18);
	      DEFINE_STRING(BGl_string2475z00zz__rgc_expandz00,
		BgL_bgl_string2475za700za7za7_2738za7, "the-substring", 13);
	      DEFINE_STRING(BGl_string2395z00zz__rgc_expandz00,
		BgL_bgl_string2395za700za7za7_2739za7, "quote", 5);
	      DEFINE_STRING(BGl_string2558z00zz__rgc_expandz00,
		BgL_bgl_string2558za700za7za7_2740za7, "eq?", 3);
	      DEFINE_STRING(BGl_string2477z00zz__rgc_expandz00,
		BgL_bgl_string2477za700za7za7_2741za7, "error", 5);
	      DEFINE_STRING(BGl_string2397z00zz__rgc_expandz00,
		BgL_bgl_string2397za700za7za7_2742za7, "stop", 4);
	      DEFINE_STRING(BGl_string2479z00zz__rgc_expandz00,
		BgL_bgl_string2479za700za7za7_2743za7, "if", 2);
	      DEFINE_STRING(BGl_string2560z00zz__rgc_expandz00,
		BgL_bgl_string2560za700za7za7_2744za7, "rgc-set-context!", 16);
	      DEFINE_STRING(BGl_string2562z00zz__rgc_expandz00,
		BgL_bgl_string2562za700za7za7_2745za7, "rgc-context", 11);
	      DEFINE_STRING(BGl_string2481z00zz__rgc_expandz00,
		BgL_bgl_string2481za700za7za7_2746za7, "strict::bool", 12);
	      DEFINE_STRING(BGl_string2564z00zz__rgc_expandz00,
		BgL_bgl_string2564za700za7za7_2747za7, "pair?", 5);
	      DEFINE_STRING(BGl_string2483z00zz__rgc_expandz00,
		BgL_bgl_string2483za700za7za7_2748za7, "the-escape-substring::bstring", 29);
	      DEFINE_STRING(BGl_string2566z00zz__rgc_expandz00,
		BgL_bgl_string2566za700za7za7_2749za7, "car", 3);
	      DEFINE_STRING(BGl_string2485z00zz__rgc_expandz00,
		BgL_bgl_string2485za700za7za7_2750za7, "strict", 6);
	      DEFINE_STRING(BGl_string2568z00zz__rgc_expandz00,
		BgL_bgl_string2568za700za7za7_2751za7, "ignore", 6);
	      DEFINE_STRING(BGl_string2487z00zz__rgc_expandz00,
		BgL_bgl_string2487za700za7za7_2752za7, "rgc-buffer-escape-substring", 27);
	      DEFINE_STRING(BGl_string2488z00zz__rgc_expandz00,
		BgL_bgl_string2488za700za7za7_2753za7, "the-escape-substring", 20);
	      DEFINE_STRING(BGl_string2570z00zz__rgc_expandz00,
		BgL_bgl_string2570za700za7za7_2754za7, "rgc-start-match!", 16);
	      DEFINE_STRING(BGl_string2490z00zz__rgc_expandz00,
		BgL_bgl_string2490za700za7za7_2755za7, "the-length::int", 15);
	      DEFINE_STRING(BGl_string2573z00zz__rgc_expandz00,
		BgL_bgl_string2573za700za7za7_2756za7, "rgc-buffer-forward", 18);
	      DEFINE_STRING(BGl_string2492z00zz__rgc_expandz00,
		BgL_bgl_string2492za700za7za7_2757za7, "rgc-buffer-length", 17);
	      DEFINE_STRING(BGl_string2575z00zz__rgc_expandz00,
		BgL_bgl_string2575za700za7za7_2758za7, "rgc-buffer-bufpos", 17);
	      DEFINE_STRING(BGl_string2494z00zz__rgc_expandz00,
		BgL_bgl_string2494za700za7za7_2759za7, "the-fixnum::long", 16);
	      DEFINE_STRING(BGl_string2577z00zz__rgc_expandz00,
		BgL_bgl_string2577za700za7za7_2760za7, "match::long", 11);
	      DEFINE_STRING(BGl_string2496z00zz__rgc_expandz00,
		BgL_bgl_string2496za700za7za7_2761za7, "rgc-buffer-fixnum", 17);
	      DEFINE_STRING(BGl_string2579z00zz__rgc_expandz00,
		BgL_bgl_string2579za700za7za7_2762za7, "rgc-set-filepos!", 16);
	      DEFINE_STRING(BGl_string2498z00zz__rgc_expandz00,
		BgL_bgl_string2498za700za7za7_2763za7, "the-integer::obj", 16);
	      DEFINE_STRING(BGl_string2584z00zz__rgc_expandz00,
		BgL_bgl_string2584za700za7za7_2764za7, "the-submatch", 12);
	      DEFINE_STRING(BGl_string2586z00zz__rgc_expandz00,
		BgL_bgl_string2586za700za7za7_2765za7, "num", 3);
	      DEFINE_STRING(BGl_string2592z00zz__rgc_expandz00,
		BgL_bgl_string2592za700za7za7_2766za7, "multiple-value-bind", 19);
	      DEFINE_STRING(BGl_string2596z00zz__rgc_expandz00,
		BgL_bgl_string2596za700za7za7_2767za7, "rgc-the-submatch", 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2regularzd2grammarzd2envzd2zz__rgc_expandz00,
		BgL_bgl_za762expandza7d2regu2768z00,
		BGl_z62expandzd2regularzd2grammarz62zz__rgc_expandz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2stringzd2casezd2envzd2zz__rgc_expandz00,
		BgL_bgl_za762expandza7d2stri2769z00,
		BGl_z62expandzd2stringzd2casez62zz__rgc_expandz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol2561z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2480z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2563z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2482z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2565z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2484z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2567z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2486z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2569z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2489z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2572z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2491z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2574z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2493z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2576z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2495z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2578z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2497z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2499z00zz__rgc_expandz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2583z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2585z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2591z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2595z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2402z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2403z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2404z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2405z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2408z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2409z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2412z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2413z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2414z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2415z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2418z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2419z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2600z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2601z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2602z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2603z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2363z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2366z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2611z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2612z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2613z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2616z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2375z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2619z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2622z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2380z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2625z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2383z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2628z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2632z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2390z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2393z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2398z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2399z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2571z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2580z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2581z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2582z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2587z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2588z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2589z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2590z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2593z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2594z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2597z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2598z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_list2599z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2400z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2406z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2410z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2416z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2501z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2420z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2503z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2422z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2505z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2424z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2343z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2507z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2426z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2345z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2509z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2428z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2347z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2349z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2430z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2513z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2432z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2351z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2515z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2434z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2353z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2517z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2436z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2355z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2519z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2438z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2359z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2440z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2522z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2604z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2442z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2361z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2524z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2444z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2607z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2526z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2364z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2446z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2609z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2528z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2448z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2367z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2369z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2531z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2450z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2614z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2533z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2452z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2371z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2535z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2454z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2373z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2617z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2537z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2456z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2376z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2539z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2458z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2378z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2620z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2541z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2460z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2623z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2543z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2462z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2381z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2626z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2545z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2464z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2384z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2547z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2466z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2629z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2386z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2549z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2468z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2388z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2551z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2470z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2633z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2553z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2472z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2391z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2635z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2555z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2394z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2557z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2476z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2396z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2559z00zz__rgc_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2478z00zz__rgc_expandz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__rgc_expandz00(long
		BgL_checksumz00_2570, char *BgL_fromz00_2571)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__rgc_expandz00))
				{
					BGl_requirezd2initializa7ationz75zz__rgc_expandz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__rgc_expandz00();
					BGl_cnstzd2initzd2zz__rgc_expandz00();
					BGl_importedzd2moduleszd2initz00zz__rgc_expandz00();
					return BGl_methodzd2initzd2zz__rgc_expandz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__rgc_expandz00()
	{
		{	/* Rgc/rgcexpand.scm 22 */
			BGl_symbol2343z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2344z00zz__rgc_expandz00);
			BGl_symbol2345z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2346z00zz__rgc_expandz00);
			BGl_symbol2347z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2348z00zz__rgc_expandz00);
			BGl_symbol2349z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2350z00zz__rgc_expandz00);
			BGl_symbol2351z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2352z00zz__rgc_expandz00);
			BGl_symbol2353z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2354z00zz__rgc_expandz00);
			BGl_symbol2355z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2356z00zz__rgc_expandz00);
			BGl_symbol2359z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2360z00zz__rgc_expandz00);
			BGl_symbol2361z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2362z00zz__rgc_expandz00);
			BGl_symbol2364z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2365z00zz__rgc_expandz00);
			BGl_symbol2367z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2368z00zz__rgc_expandz00);
			BGl_symbol2369z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2370z00zz__rgc_expandz00);
			BGl_symbol2371z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2372z00zz__rgc_expandz00);
			BGl_symbol2373z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2374z00zz__rgc_expandz00);
			BGl_list2366z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2367z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_symbol2369z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_symbol2371z00zz__rgc_expandz00,
						MAKE_YOUNG_PAIR(BGl_symbol2373z00zz__rgc_expandz00, BNIL))));
			BGl_symbol2376z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2377z00zz__rgc_expandz00);
			BGl_symbol2378z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2379z00zz__rgc_expandz00);
			BGl_symbol2381z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2382z00zz__rgc_expandz00);
			BGl_symbol2384z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2385z00zz__rgc_expandz00);
			BGl_symbol2386z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2387z00zz__rgc_expandz00);
			BGl_symbol2388z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2389z00zz__rgc_expandz00);
			BGl_symbol2391z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2392z00zz__rgc_expandz00);
			BGl_list2390z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2391z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_symbol2361z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_symbol2373z00zz__rgc_expandz00, BNIL)));
			BGl_symbol2394z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2395z00zz__rgc_expandz00);
			BGl_symbol2396z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2397z00zz__rgc_expandz00);
			BGl_list2393z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2394z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_symbol2396z00zz__rgc_expandz00, BNIL));
			BGl_list2383z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2384z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_symbol2386z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_symbol2388z00zz__rgc_expandz00,
						MAKE_YOUNG_PAIR(BGl_list2390z00zz__rgc_expandz00,
							MAKE_YOUNG_PAIR(BGl_list2393z00zz__rgc_expandz00, BNIL)))));
			BGl_list2380z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2381z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_list2383z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_symbol2378z00zz__rgc_expandz00, BNIL)));
			BGl_list2375z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2376z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_symbol2378z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_list2380z00zz__rgc_expandz00, BNIL)));
			BGl_list2363z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2364z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_list2366z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_list2375z00zz__rgc_expandz00, BNIL)));
			BGl_symbol2400z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2401z00zz__rgc_expandz00);
			BGl_list2399z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2400z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_symbol2369z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_symbol2371z00zz__rgc_expandz00,
						MAKE_YOUNG_PAIR(BGl_symbol2373z00zz__rgc_expandz00, BNIL))));
			BGl_symbol2406z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2407z00zz__rgc_expandz00);
			BGl_list2405z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2394z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_symbol2406z00zz__rgc_expandz00, BNIL));
			BGl_list2404z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2384z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_symbol2386z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_symbol2388z00zz__rgc_expandz00,
						MAKE_YOUNG_PAIR(BGl_list2390z00zz__rgc_expandz00,
							MAKE_YOUNG_PAIR(BGl_list2405z00zz__rgc_expandz00, BNIL)))));
			BGl_list2403z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2381z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_list2404z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_symbol2378z00zz__rgc_expandz00, BNIL)));
			BGl_list2402z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2376z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_symbol2378z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_list2403z00zz__rgc_expandz00, BNIL)));
			BGl_list2398z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2364z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_list2399z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_list2402z00zz__rgc_expandz00, BNIL)));
			BGl_symbol2410z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2411z00zz__rgc_expandz00);
			BGl_list2409z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2410z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_symbol2369z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_symbol2371z00zz__rgc_expandz00,
						MAKE_YOUNG_PAIR(BGl_symbol2373z00zz__rgc_expandz00, BNIL))));
			BGl_symbol2416z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2417z00zz__rgc_expandz00);
			BGl_list2415z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2394z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_symbol2416z00zz__rgc_expandz00, BNIL));
			BGl_list2414z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2384z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_symbol2386z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_symbol2388z00zz__rgc_expandz00,
						MAKE_YOUNG_PAIR(BGl_list2390z00zz__rgc_expandz00,
							MAKE_YOUNG_PAIR(BGl_list2415z00zz__rgc_expandz00, BNIL)))));
			BGl_list2413z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2381z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_list2414z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_symbol2378z00zz__rgc_expandz00, BNIL)));
			BGl_list2412z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2376z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_symbol2378z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_list2413z00zz__rgc_expandz00, BNIL)));
			BGl_list2408z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2364z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_list2409z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_list2412z00zz__rgc_expandz00, BNIL)));
			BGl_list2419z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2394z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BNIL, BNIL));
			BGl_list2418z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2364z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_symbol2378z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_list2419z00zz__rgc_expandz00, BNIL)));
			BGl_symbol2420z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2421z00zz__rgc_expandz00);
			BGl_symbol2422z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2423z00zz__rgc_expandz00);
			BGl_symbol2424z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2425z00zz__rgc_expandz00);
			BGl_symbol2426z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2427z00zz__rgc_expandz00);
			BGl_symbol2428z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2429z00zz__rgc_expandz00);
			BGl_symbol2430z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2431z00zz__rgc_expandz00);
			BGl_symbol2432z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2433z00zz__rgc_expandz00);
			BGl_symbol2434z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2435z00zz__rgc_expandz00);
			BGl_symbol2436z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2437z00zz__rgc_expandz00);
			BGl_symbol2438z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2439z00zz__rgc_expandz00);
			BGl_symbol2440z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2441z00zz__rgc_expandz00);
			BGl_symbol2442z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2443z00zz__rgc_expandz00);
			BGl_symbol2444z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2445z00zz__rgc_expandz00);
			BGl_symbol2446z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2447z00zz__rgc_expandz00);
			BGl_symbol2448z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2449z00zz__rgc_expandz00);
			BGl_symbol2450z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2451z00zz__rgc_expandz00);
			BGl_symbol2452z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2453z00zz__rgc_expandz00);
			BGl_symbol2454z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2455z00zz__rgc_expandz00);
			BGl_symbol2456z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2457z00zz__rgc_expandz00);
			BGl_symbol2458z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2459z00zz__rgc_expandz00);
			BGl_symbol2460z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2461z00zz__rgc_expandz00);
			BGl_symbol2462z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2463z00zz__rgc_expandz00);
			BGl_symbol2464z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2465z00zz__rgc_expandz00);
			BGl_symbol2466z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2467z00zz__rgc_expandz00);
			BGl_symbol2468z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2469z00zz__rgc_expandz00);
			BGl_symbol2470z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2471z00zz__rgc_expandz00);
			BGl_symbol2472z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2473z00zz__rgc_expandz00);
			BGl_symbol2476z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2477z00zz__rgc_expandz00);
			BGl_symbol2478z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2479z00zz__rgc_expandz00);
			BGl_symbol2480z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2481z00zz__rgc_expandz00);
			BGl_symbol2482z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2483z00zz__rgc_expandz00);
			BGl_symbol2484z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2485z00zz__rgc_expandz00);
			BGl_symbol2486z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2487z00zz__rgc_expandz00);
			BGl_symbol2489z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2490z00zz__rgc_expandz00);
			BGl_symbol2491z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2492z00zz__rgc_expandz00);
			BGl_symbol2493z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2494z00zz__rgc_expandz00);
			BGl_symbol2495z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2496z00zz__rgc_expandz00);
			BGl_symbol2497z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2498z00zz__rgc_expandz00);
			BGl_symbol2499z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2500z00zz__rgc_expandz00);
			BGl_symbol2501z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2502z00zz__rgc_expandz00);
			BGl_symbol2503z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2504z00zz__rgc_expandz00);
			BGl_symbol2505z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2506z00zz__rgc_expandz00);
			BGl_symbol2507z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2508z00zz__rgc_expandz00);
			BGl_symbol2509z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2510z00zz__rgc_expandz00);
			BGl_symbol2513z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2514z00zz__rgc_expandz00);
			BGl_symbol2515z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2516z00zz__rgc_expandz00);
			BGl_symbol2517z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2518z00zz__rgc_expandz00);
			BGl_symbol2519z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2520z00zz__rgc_expandz00);
			BGl_symbol2522z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2523z00zz__rgc_expandz00);
			BGl_symbol2524z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2525z00zz__rgc_expandz00);
			BGl_symbol2526z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2527z00zz__rgc_expandz00);
			BGl_symbol2528z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2529z00zz__rgc_expandz00);
			BGl_symbol2531z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2532z00zz__rgc_expandz00);
			BGl_symbol2533z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2534z00zz__rgc_expandz00);
			BGl_symbol2535z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2536z00zz__rgc_expandz00);
			BGl_symbol2537z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2538z00zz__rgc_expandz00);
			BGl_symbol2539z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2540z00zz__rgc_expandz00);
			BGl_symbol2541z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2542z00zz__rgc_expandz00);
			BGl_symbol2543z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2544z00zz__rgc_expandz00);
			BGl_symbol2545z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2546z00zz__rgc_expandz00);
			BGl_symbol2547z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2548z00zz__rgc_expandz00);
			BGl_symbol2549z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2550z00zz__rgc_expandz00);
			BGl_symbol2551z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2552z00zz__rgc_expandz00);
			BGl_symbol2553z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2554z00zz__rgc_expandz00);
			BGl_symbol2555z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2556z00zz__rgc_expandz00);
			BGl_symbol2557z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2558z00zz__rgc_expandz00);
			BGl_symbol2559z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2560z00zz__rgc_expandz00);
			BGl_symbol2561z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2562z00zz__rgc_expandz00);
			BGl_symbol2563z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2564z00zz__rgc_expandz00);
			BGl_symbol2565z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2566z00zz__rgc_expandz00);
			BGl_symbol2567z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2568z00zz__rgc_expandz00);
			BGl_symbol2569z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2570z00zz__rgc_expandz00);
			BGl_list2571z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2376z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_symbol2378z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_list2419z00zz__rgc_expandz00, BNIL)));
			BGl_symbol2572z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2573z00zz__rgc_expandz00);
			BGl_symbol2574z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2575z00zz__rgc_expandz00);
			BGl_symbol2576z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2577z00zz__rgc_expandz00);
			BGl_symbol2578z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2579z00zz__rgc_expandz00);
			BGl_symbol2583z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2584z00zz__rgc_expandz00);
			BGl_symbol2585z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2586z00zz__rgc_expandz00);
			BGl_list2582z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2583z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_symbol2585z00zz__rgc_expandz00, BNIL));
			BGl_list2588z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2547z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_symbol2585z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BINT(((long) 0)), BNIL)));
			BGl_list2589z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2472z00zz__rgc_expandz00, BNIL);
			BGl_symbol2591z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2592z00zz__rgc_expandz00);
			BGl_list2593z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2416z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_symbol2396z00zz__rgc_expandz00, BNIL));
			BGl_symbol2595z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2596z00zz__rgc_expandz00);
			BGl_list2598z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2572z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_symbol2361z00zz__rgc_expandz00, BNIL));
			BGl_list2597z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2391z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_symbol2361z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_list2598z00zz__rgc_expandz00, BNIL)));
			BGl_list2594z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2595z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_symbol2378z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_list2597z00zz__rgc_expandz00,
						MAKE_YOUNG_PAIR(BGl_symbol2386z00zz__rgc_expandz00,
							MAKE_YOUNG_PAIR(BGl_symbol2585z00zz__rgc_expandz00, BNIL)))));
			BGl_list2601z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2460z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_symbol2416z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BINT(((long) 0)), BNIL)));
			BGl_list2602z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2460z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_symbol2396z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_symbol2416z00zz__rgc_expandz00, BNIL)));
			BGl_list2600z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2464z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_list2601z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_list2602z00zz__rgc_expandz00, BNIL)));
			BGl_symbol2604z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2475z00zz__rgc_expandz00);
			BGl_list2603z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2604z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_symbol2416z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_symbol2396z00zz__rgc_expandz00, BNIL)));
			BGl_list2599z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2478z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_list2600z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_list2603z00zz__rgc_expandz00,
						MAKE_YOUNG_PAIR(BGl_string2605z00zz__rgc_expandz00, BNIL))));
			BGl_list2590z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2591z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_list2593z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_list2594z00zz__rgc_expandz00,
						MAKE_YOUNG_PAIR(BGl_list2599z00zz__rgc_expandz00, BNIL))));
			BGl_list2587z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2478z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_list2588z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_list2589z00zz__rgc_expandz00,
						MAKE_YOUNG_PAIR(BGl_list2590z00zz__rgc_expandz00, BNIL))));
			BGl_list2581z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2364z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_list2582z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_list2587z00zz__rgc_expandz00, BNIL)));
			BGl_list2580z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_list2581z00zz__rgc_expandz00, BNIL);
			BGl_symbol2607z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2608z00zz__rgc_expandz00);
			BGl_symbol2609z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2610z00zz__rgc_expandz00);
			BGl_list2611z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2567z00zz__rgc_expandz00, BNIL);
			BGl_symbol2614z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2615z00zz__rgc_expandz00);
			BGl_symbol2617z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2618z00zz__rgc_expandz00);
			BGl_list2616z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2617z00zz__rgc_expandz00, BNIL);
			BGl_list2613z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2614z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_list2616z00zz__rgc_expandz00, BNIL));
			BGl_symbol2620z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2621z00zz__rgc_expandz00);
			BGl_symbol2623z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2624z00zz__rgc_expandz00);
			BGl_symbol2626z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2627z00zz__rgc_expandz00);
			BGl_list2625z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2626z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_string2348z00zz__rgc_expandz00, BNIL));
			BGl_symbol2629z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2630z00zz__rgc_expandz00);
			BGl_list2628z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2629z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_string2631z00zz__rgc_expandz00, BNIL));
			BGl_symbol2633z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2634z00zz__rgc_expandz00);
			BGl_list2632z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2633z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_list2616z00zz__rgc_expandz00, BNIL));
			BGl_list2622z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2623z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_list2625z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_list2628z00zz__rgc_expandz00,
						MAKE_YOUNG_PAIR(BGl_list2632z00zz__rgc_expandz00, BNIL))));
			BGl_list2619z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2620z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_list2622z00zz__rgc_expandz00, BNIL));
			BGl_list2612z00zz__rgc_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2478z00zz__rgc_expandz00,
				MAKE_YOUNG_PAIR(BGl_list2613z00zz__rgc_expandz00,
					MAKE_YOUNG_PAIR(BGl_list2619z00zz__rgc_expandz00,
						MAKE_YOUNG_PAIR(BGl_list2611z00zz__rgc_expandz00, BNIL))));
			return (BGl_symbol2635z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string2636z00zz__rgc_expandz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__rgc_expandz00()
	{
		{	/* Rgc/rgcexpand.scm 22 */
			return bgl_gc_roots_register();
		}

	}



/* expand-string-case */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2stringzd2casez00zz__rgc_expandz00(obj_t
		BgL_xz00_3, obj_t BgL_ez00_4)
	{
		{	/* Rgc/rgcexpand.scm 75 */
			{
				obj_t BgL_strz00_1130;
				obj_t BgL_clausesz00_1131;

				if (PAIRP(BgL_xz00_3))
					{	/* Rgc/rgcexpand.scm 76 */
						obj_t BgL_cdrzd2109zd2_1136;

						BgL_cdrzd2109zd2_1136 = CDR(BgL_xz00_3);
						if (PAIRP(BgL_cdrzd2109zd2_1136))
							{	/* Rgc/rgcexpand.scm 76 */
								BgL_strz00_1130 = CAR(BgL_cdrzd2109zd2_1136);
								BgL_clausesz00_1131 = CDR(BgL_cdrzd2109zd2_1136);
								{	/* Rgc/rgcexpand.scm 78 */
									obj_t BgL_portzd2idzd2_1140;

									BgL_portzd2idzd2_1140 =
										BGl_gensymz00zz__r4_symbols_6_4z00
										(BGl_symbol2343z00zz__rgc_expandz00);
									{	/* Rgc/rgcexpand.scm 79 */
										obj_t BgL_newz00_1141;

										{	/* Rgc/rgcexpand.scm 79 */
											obj_t BgL_arg1211z00_1144;

											{	/* Rgc/rgcexpand.scm 79 */
												obj_t BgL_arg1216z00_1145;
												obj_t BgL_arg1221z00_1146;

												{	/* Rgc/rgcexpand.scm 79 */
													obj_t BgL_arg1223z00_1147;

													{	/* Rgc/rgcexpand.scm 79 */
														obj_t BgL_arg1225z00_1148;

														{	/* Rgc/rgcexpand.scm 79 */
															obj_t BgL_arg1227z00_1149;

															{	/* Rgc/rgcexpand.scm 79 */
																obj_t BgL_arg1229z00_1150;

																BgL_arg1229z00_1150 =
																	MAKE_YOUNG_PAIR(BgL_strz00_1130, BNIL);
																BgL_arg1227z00_1149 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol2345z00zz__rgc_expandz00,
																	BgL_arg1229z00_1150);
															}
															BgL_arg1225z00_1148 =
																MAKE_YOUNG_PAIR(BgL_arg1227z00_1149, BNIL);
														}
														BgL_arg1223z00_1147 =
															MAKE_YOUNG_PAIR(BgL_portzd2idzd2_1140,
															BgL_arg1225z00_1148);
													}
													BgL_arg1216z00_1145 =
														MAKE_YOUNG_PAIR(BgL_arg1223z00_1147, BNIL);
												}
												{	/* Rgc/rgcexpand.scm 81 */
													obj_t BgL_arg1232z00_1151;

													{	/* Rgc/rgcexpand.scm 81 */
														obj_t BgL_arg1239z00_1152;

														{	/* Rgc/rgcexpand.scm 81 */
															obj_t BgL_arg1242z00_1153;
															obj_t BgL_arg1243z00_1154;

															{	/* Rgc/rgcexpand.scm 81 */
																obj_t BgL_arg1245z00_1155;

																{	/* Rgc/rgcexpand.scm 81 */
																	obj_t BgL_arg1246z00_1156;
																	obj_t BgL_arg1247z00_1157;

																	{	/* Rgc/rgcexpand.scm 81 */
																		obj_t BgL_arg1250z00_1158;

																		BgL_arg1250z00_1158 =
																			MAKE_YOUNG_PAIR(BNIL,
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_clausesz00_1131, BNIL));
																		BgL_arg1246z00_1156 =
																			MAKE_YOUNG_PAIR
																			(BGl_symbol2347z00zz__rgc_expandz00,
																			BgL_arg1250z00_1158);
																	}
																	BgL_arg1247z00_1157 =
																		MAKE_YOUNG_PAIR(BgL_portzd2idzd2_1140,
																		BNIL);
																	BgL_arg1245z00_1155 =
																		MAKE_YOUNG_PAIR(BgL_arg1246z00_1156,
																		BgL_arg1247z00_1157);
																}
																BgL_arg1242z00_1153 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol2349z00zz__rgc_expandz00,
																	BgL_arg1245z00_1155);
															}
															{	/* Rgc/rgcexpand.scm 84 */
																obj_t BgL_arg1253z00_1160;

																{	/* Rgc/rgcexpand.scm 84 */
																	obj_t BgL_arg1254z00_1161;

																	BgL_arg1254z00_1161 =
																		MAKE_YOUNG_PAIR(BgL_portzd2idzd2_1140,
																		BNIL);
																	BgL_arg1253z00_1160 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2351z00zz__rgc_expandz00,
																		BgL_arg1254z00_1161);
																}
																BgL_arg1243z00_1154 =
																	MAKE_YOUNG_PAIR(BgL_arg1253z00_1160, BNIL);
															}
															BgL_arg1239z00_1152 =
																MAKE_YOUNG_PAIR(BgL_arg1242z00_1153,
																BgL_arg1243z00_1154);
														}
														BgL_arg1232z00_1151 =
															MAKE_YOUNG_PAIR
															(BGl_symbol2353z00zz__rgc_expandz00,
															BgL_arg1239z00_1152);
													}
													BgL_arg1221z00_1146 =
														MAKE_YOUNG_PAIR(BgL_arg1232z00_1151, BNIL);
												}
												BgL_arg1211z00_1144 =
													MAKE_YOUNG_PAIR(BgL_arg1216z00_1145,
													BgL_arg1221z00_1146);
											}
											BgL_newz00_1141 =
												MAKE_YOUNG_PAIR(BGl_symbol2355z00zz__rgc_expandz00,
												BgL_arg1211z00_1144);
										}
										{	/* Rgc/rgcexpand.scm 85 */
											obj_t BgL_arg1201z00_1142;

											BgL_arg1201z00_1142 = CAR(BgL_newz00_1141);
											{	/* Rgc/rgcexpand.scm 85 */
												obj_t BgL_tmpz00_2863;

												BgL_tmpz00_2863 = ((obj_t) BgL_xz00_3);
												SET_CAR(BgL_tmpz00_2863, BgL_arg1201z00_1142);
											}
										}
										{	/* Rgc/rgcexpand.scm 86 */
											obj_t BgL_arg1208z00_1143;

											BgL_arg1208z00_1143 = CDR(BgL_newz00_1141);
											{	/* Rgc/rgcexpand.scm 86 */
												obj_t BgL_tmpz00_2867;

												BgL_tmpz00_2867 = ((obj_t) BgL_xz00_3);
												SET_CDR(BgL_tmpz00_2867, BgL_arg1208z00_1143);
											}
										}
										return
											PROCEDURE_ENTRY(BgL_ez00_4) (BgL_ez00_4, BgL_xz00_3,
											BgL_ez00_4, BEOA);
									}
								}
							}
						else
							{	/* Rgc/rgcexpand.scm 76 */
								return
									BGl_errorz00zz__errorz00(BGl_string2357z00zz__rgc_expandz00,
									BGl_string2358z00zz__rgc_expandz00, BgL_xz00_3);
							}
					}
				else
					{	/* Rgc/rgcexpand.scm 76 */
						return
							BGl_errorz00zz__errorz00(BGl_string2357z00zz__rgc_expandz00,
							BGl_string2358z00zz__rgc_expandz00, BgL_xz00_3);
					}
			}
		}

	}



/* &expand-string-case */
	obj_t BGl_z62expandzd2stringzd2casez62zz__rgc_expandz00(obj_t BgL_envz00_2564,
		obj_t BgL_xz00_2565, obj_t BgL_ez00_2566)
	{
		{	/* Rgc/rgcexpand.scm 75 */
			return
				BGl_expandzd2stringzd2casez00zz__rgc_expandz00(BgL_xz00_2565,
				BgL_ez00_2566);
		}

	}



/* expand-regular-grammar */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2regularzd2grammarz00zz__rgc_expandz00(obj_t BgL_xz00_5,
		obj_t BgL_ez00_6)
	{
		{	/* Rgc/rgcexpand.scm 96 */
			{
				obj_t BgL_optsz00_1187;

				{
					obj_t BgL_optsz00_1163;
					obj_t BgL_clausesz00_1164;

					if (PAIRP(BgL_xz00_5))
						{	/* Rgc/rgcexpand.scm 108 */
							obj_t BgL_cdrzd2124zd2_1169;

							BgL_cdrzd2124zd2_1169 = CDR(BgL_xz00_5);
							if (PAIRP(BgL_cdrzd2124zd2_1169))
								{	/* Rgc/rgcexpand.scm 108 */
									BgL_optsz00_1163 = CAR(BgL_cdrzd2124zd2_1169);
									BgL_clausesz00_1164 = CDR(BgL_cdrzd2124zd2_1169);
									{	/* Rgc/rgcexpand.scm 110 */
										obj_t BgL_uenvz00_1173;

										BgL_optsz00_1187 = BgL_optsz00_1163;
										{
											obj_t BgL_osz00_1192;
											obj_t BgL_varsz00_1193;
											obj_t BgL_argsz00_1194;

											BgL_osz00_1192 = BgL_optsz00_1187;
											BgL_varsz00_1193 = BNIL;
											BgL_argsz00_1194 = BNIL;
										BgL_zc3z04anonymousza31270ze3z87_1195:
											if (NULLP(BgL_osz00_1192))
												{	/* Rgc/rgcexpand.scm 103 */
													obj_t BgL_val0_1087z00_1197;
													obj_t BgL_val1_1088z00_1198;

													BgL_val0_1087z00_1197 =
														bgl_reverse_bang(BgL_varsz00_1193);
													BgL_val1_1088z00_1198 =
														bgl_reverse_bang(BgL_argsz00_1194);
													{	/* Rgc/rgcexpand.scm 103 */
														int BgL_res2272z00_2211;

														{	/* Rgc/rgcexpand.scm 103 */
															int BgL_tmpz00_2889;

															BgL_tmpz00_2889 = (int) (((long) 2));
															BgL_res2272z00_2211 =
																BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2889);
														} BgL_res2272z00_2211;
													}
													{	/* Rgc/rgcexpand.scm 103 */
														int BgL_tmpz00_2892;

														BgL_tmpz00_2892 = (int) (((long) 1));
														BGL_MVALUES_VAL_SET(BgL_tmpz00_2892,
															BgL_val1_1088z00_1198);
													}
													BgL_uenvz00_1173 = BgL_val0_1087z00_1197;
												}
											else
												{	/* Rgc/rgcexpand.scm 104 */
													bool_t BgL_test2776z00_2895;

													{	/* Rgc/rgcexpand.scm 104 */
														obj_t BgL_tmpz00_2896;

														BgL_tmpz00_2896 = CAR(((obj_t) BgL_osz00_1192));
														BgL_test2776z00_2895 = SYMBOLP(BgL_tmpz00_2896);
													}
													if (BgL_test2776z00_2895)
														{	/* Rgc/rgcexpand.scm 105 */
															obj_t BgL_arg1275z00_1201;
															obj_t BgL_arg1276z00_1202;

															BgL_arg1275z00_1201 =
																CDR(((obj_t) BgL_osz00_1192));
															{	/* Rgc/rgcexpand.scm 105 */
																obj_t BgL_arg1277z00_1203;

																BgL_arg1277z00_1203 =
																	CAR(((obj_t) BgL_osz00_1192));
																BgL_arg1276z00_1202 =
																	MAKE_YOUNG_PAIR(BgL_arg1277z00_1203,
																	BgL_argsz00_1194);
															}
															{
																obj_t BgL_argsz00_2906;
																obj_t BgL_osz00_2905;

																BgL_osz00_2905 = BgL_arg1275z00_1201;
																BgL_argsz00_2906 = BgL_arg1276z00_1202;
																BgL_argsz00_1194 = BgL_argsz00_2906;
																BgL_osz00_1192 = BgL_osz00_2905;
																goto BgL_zc3z04anonymousza31270ze3z87_1195;
															}
														}
													else
														{	/* Rgc/rgcexpand.scm 107 */
															obj_t BgL_arg1280z00_1204;
															obj_t BgL_arg1281z00_1205;

															BgL_arg1280z00_1204 =
																CDR(((obj_t) BgL_osz00_1192));
															{	/* Rgc/rgcexpand.scm 107 */
																obj_t BgL_arg1282z00_1206;

																BgL_arg1282z00_1206 =
																	CAR(((obj_t) BgL_osz00_1192));
																BgL_arg1281z00_1205 =
																	MAKE_YOUNG_PAIR(BgL_arg1282z00_1206,
																	BgL_varsz00_1193);
															}
															{
																obj_t BgL_varsz00_2913;
																obj_t BgL_osz00_2912;

																BgL_osz00_2912 = BgL_arg1280z00_1204;
																BgL_varsz00_2913 = BgL_arg1281z00_1205;
																BgL_varsz00_1193 = BgL_varsz00_2913;
																BgL_osz00_1192 = BgL_osz00_2912;
																goto BgL_zc3z04anonymousza31270ze3z87_1195;
															}
														}
												}
										}
										{	/* Rgc/rgcexpand.scm 111 */
											obj_t BgL_argsz00_1174;

											{	/* Rgc/rgcexpand.scm 112 */
												int BgL_tmpz00_2914;

												BgL_tmpz00_2914 = (int) (((long) 1));
												BgL_argsz00_1174 = BGL_MVALUES_VAL(BgL_tmpz00_2914);
											}
											{	/* Rgc/rgcexpand.scm 112 */
												obj_t BgL_treez00_1175;

												BgL_treez00_1175 =
													BGl_ruleszd2ze3regularzd2treeze3zz__rgc_rulesz00
													(BgL_uenvz00_1173, BgL_clausesz00_1164);
												{	/* Rgc/rgcexpand.scm 115 */
													obj_t BgL_actionsz00_1176;
													obj_t BgL_elsezd2numzd2_1177;
													obj_t BgL_submatchzf3zf3_1178;
													obj_t BgL_defsz00_1179;

													{	/* Rgc/rgcexpand.scm 116 */
														int BgL_tmpz00_2918;

														BgL_tmpz00_2918 = (int) (((long) 1));
														BgL_actionsz00_1176 =
															BGL_MVALUES_VAL(BgL_tmpz00_2918);
													}
													{	/* Rgc/rgcexpand.scm 116 */
														int BgL_tmpz00_2921;

														BgL_tmpz00_2921 = (int) (((long) 2));
														BgL_elsezd2numzd2_1177 =
															BGL_MVALUES_VAL(BgL_tmpz00_2921);
													}
													{	/* Rgc/rgcexpand.scm 116 */
														int BgL_tmpz00_2924;

														BgL_tmpz00_2924 = (int) (((long) 3));
														BgL_submatchzf3zf3_1178 =
															BGL_MVALUES_VAL(BgL_tmpz00_2924);
													}
													{	/* Rgc/rgcexpand.scm 116 */
														int BgL_tmpz00_2927;

														BgL_tmpz00_2927 = (int) (((long) 4));
														BgL_defsz00_1179 = BGL_MVALUES_VAL(BgL_tmpz00_2927);
													}
													{	/* Rgc/rgcexpand.scm 116 */
														obj_t BgL_nodez00_1180;

														BgL_nodez00_1180 =
															BGl_regularzd2treezd2ze3nodeze3zz__rgc_treez00
															(BgL_treez00_1175);
														{	/* Rgc/rgcexpand.scm 120 */
															obj_t BgL_followposz00_1181;
															obj_t BgL_positionsz00_1182;
															obj_t BgL_submatchesz00_1183;

															{	/* Rgc/rgcexpand.scm 123 */
																int BgL_tmpz00_2931;

																BgL_tmpz00_2931 = (int) (((long) 1));
																BgL_followposz00_1181 =
																	BGL_MVALUES_VAL(BgL_tmpz00_2931);
															}
															{	/* Rgc/rgcexpand.scm 123 */
																int BgL_tmpz00_2934;

																BgL_tmpz00_2934 = (int) (((long) 2));
																BgL_positionsz00_1182 =
																	BGL_MVALUES_VAL(BgL_tmpz00_2934);
															}
															{	/* Rgc/rgcexpand.scm 123 */
																int BgL_tmpz00_2937;

																BgL_tmpz00_2937 = (int) (((long) 3));
																BgL_submatchesz00_1183 =
																	BGL_MVALUES_VAL(BgL_tmpz00_2937);
															}
															{	/* Rgc/rgcexpand.scm 123 */
																obj_t BgL_dfaz00_1184;

																BgL_dfaz00_1184 =
																	BGl_nodezd2ze3dfaz31zz__rgc_dfaz00
																	(BgL_nodez00_1180, BgL_followposz00_1181,
																	BgL_positionsz00_1182);
																{	/* Rgc/rgcexpand.scm 123 */
																	obj_t BgL_sexpz00_1185;

																	BgL_sexpz00_1185 =
																		BGl_makezd2regularzd2parserz00zz__rgc_expandz00
																		(BgL_argsz00_1174,
																		BGl_compilezd2dfazd2zz__rgc_compilez00
																		(BgL_submatchesz00_1183, BgL_dfaz00_1184,
																			BgL_positionsz00_1182),
																		BgL_actionsz00_1176, BgL_elsezd2numzd2_1177,
																		BgL_submatchzf3zf3_1178, BgL_defsz00_1179);
																	{	/* Rgc/rgcexpand.scm 124 */

																		BGl_resetzd2specialzd2matchzd2charz12zc0zz__rgc_rulesz00
																			();
																		BGl_resetzd2treez12zc0zz__rgc_treez00();
																		BGl_resetzd2dfaz12zc0zz__rgc_dfaz00();
																		return
																			PROCEDURE_ENTRY(BgL_ez00_6) (BgL_ez00_6,
																			BgL_sexpz00_1185, BgL_ez00_6, BEOA);
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
								{	/* Rgc/rgcexpand.scm 108 */
									return
										BGl_errorz00zz__errorz00(BGl_string2348z00zz__rgc_expandz00,
										BGl_string2358z00zz__rgc_expandz00, BgL_xz00_5);
								}
						}
					else
						{	/* Rgc/rgcexpand.scm 108 */
							return
								BGl_errorz00zz__errorz00(BGl_string2348z00zz__rgc_expandz00,
								BGl_string2358z00zz__rgc_expandz00, BgL_xz00_5);
						}
				}
			}
		}

	}



/* &expand-regular-grammar */
	obj_t BGl_z62expandzd2regularzd2grammarz62zz__rgc_expandz00(obj_t
		BgL_envz00_2567, obj_t BgL_xz00_2568, obj_t BgL_ez00_2569)
	{
		{	/* Rgc/rgcexpand.scm 96 */
			return
				BGl_expandzd2regularzd2grammarz00zz__rgc_expandz00(BgL_xz00_2568,
				BgL_ez00_2569);
		}

	}



/* make-regular-parser */
	obj_t BGl_makezd2regularzd2parserz00zz__rgc_expandz00(obj_t BgL_argsz00_7,
		obj_t BgL_statesz00_8, obj_t BgL_actionsz00_9, obj_t BgL_elsezd2numzd2_10,
		obj_t BgL_submatchzf3zf3_11, obj_t BgL_defsz00_12)
	{
		{	/* Rgc/rgcexpand.scm 141 */
			{	/* Rgc/rgcexpand.scm 142 */
				obj_t BgL_arg1285z00_1210;

				{	/* Rgc/rgcexpand.scm 142 */
					obj_t BgL_arg1286z00_1211;
					obj_t BgL_arg1287z00_1212;

					{	/* Rgc/rgcexpand.scm 142 */
						obj_t BgL_arg1288z00_1213;

						{	/* Rgc/rgcexpand.scm 142 */
							obj_t BgL_arg1289z00_1214;

							BgL_arg1289z00_1214 = MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
							BgL_arg1288z00_1213 =
								MAKE_YOUNG_PAIR(BGl_symbol2359z00zz__rgc_expandz00,
								BgL_arg1289z00_1214);
						}
						BgL_arg1286z00_1211 = MAKE_YOUNG_PAIR(BgL_arg1288z00_1213, BNIL);
					}
					{	/* Rgc/rgcexpand.scm 143 */
						obj_t BgL_arg1290z00_1215;

						{	/* Rgc/rgcexpand.scm 143 */
							obj_t BgL_arg1291z00_1216;

							{	/* Rgc/rgcexpand.scm 143 */
								obj_t BgL_arg1292z00_1217;
								obj_t BgL_arg1295z00_1218;

								{	/* Rgc/rgcexpand.scm 143 */
									obj_t BgL_arg1296z00_1219;

									BgL_arg1296z00_1219 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_argsz00_7, BNIL);
									BgL_arg1292z00_1217 =
										MAKE_YOUNG_PAIR(BGl_symbol2361z00zz__rgc_expandz00,
										BgL_arg1296z00_1219);
								}
								{	/* Rgc/rgcexpand.scm 145 */
									obj_t BgL_arg1297z00_1220;
									obj_t BgL_arg1298z00_1221;

									if (CBOOL(BgL_submatchzf3zf3_11))
										{	/* Rgc/rgcexpand.scm 146 */
											obj_t BgL_list1299z00_1222;

											{	/* Rgc/rgcexpand.scm 146 */
												obj_t BgL_arg1300z00_1223;

												{	/* Rgc/rgcexpand.scm 146 */
													obj_t BgL_arg1301z00_1224;

													{	/* Rgc/rgcexpand.scm 146 */
														obj_t BgL_arg1302z00_1225;

														BgL_arg1302z00_1225 =
															MAKE_YOUNG_PAIR(BGl_list2363z00zz__rgc_expandz00,
															BNIL);
														BgL_arg1301z00_1224 =
															MAKE_YOUNG_PAIR(BGl_list2398z00zz__rgc_expandz00,
															BgL_arg1302z00_1225);
													}
													BgL_arg1300z00_1223 =
														MAKE_YOUNG_PAIR(BGl_list2408z00zz__rgc_expandz00,
														BgL_arg1301z00_1224);
												}
												BgL_list1299z00_1222 =
													MAKE_YOUNG_PAIR(BGl_list2418z00zz__rgc_expandz00,
													BgL_arg1300z00_1223);
											}
											BgL_arg1297z00_1220 = BgL_list1299z00_1222;
										}
									else
										{	/* Rgc/rgcexpand.scm 145 */
											BgL_arg1297z00_1220 = BNIL;
										}
									{	/* Rgc/rgcexpand.scm 173 */
										obj_t BgL_arg1303z00_1226;

										{	/* Rgc/rgcexpand.scm 173 */
											obj_t BgL_arg1304z00_1227;
											obj_t BgL_arg1306z00_1228;

											{	/* Rgc/rgcexpand.scm 173 */
												obj_t BgL_arg1307z00_1229;

												{	/* Rgc/rgcexpand.scm 173 */
													obj_t BgL_arg1308z00_1230;
													obj_t BgL_arg1309z00_1231;

													BgL_arg1308z00_1230 =
														MAKE_YOUNG_PAIR(BGl_symbol2420z00zz__rgc_expandz00,
														BNIL);
													BgL_arg1309z00_1231 =
														MAKE_YOUNG_PAIR(BGl_symbol2361z00zz__rgc_expandz00,
														BNIL);
													BgL_arg1307z00_1229 =
														MAKE_YOUNG_PAIR(BgL_arg1308z00_1230,
														BgL_arg1309z00_1231);
												}
												BgL_arg1304z00_1227 =
													MAKE_YOUNG_PAIR(BGl_symbol2364z00zz__rgc_expandz00,
													BgL_arg1307z00_1229);
											}
											{	/* Rgc/rgcexpand.scm 176 */
												obj_t BgL_arg1310z00_1232;
												obj_t BgL_arg1311z00_1233;

												{	/* Rgc/rgcexpand.scm 176 */
													obj_t BgL_arg1312z00_1234;

													{	/* Rgc/rgcexpand.scm 176 */
														obj_t BgL_arg1313z00_1235;
														obj_t BgL_arg1314z00_1236;

														BgL_arg1313z00_1235 =
															MAKE_YOUNG_PAIR
															(BGl_symbol2422z00zz__rgc_expandz00, BNIL);
														{	/* Rgc/rgcexpand.scm 177 */
															obj_t BgL_arg1315z00_1237;

															{	/* Rgc/rgcexpand.scm 177 */
																obj_t BgL_arg1316z00_1238;

																BgL_arg1316z00_1238 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol2361z00zz__rgc_expandz00, BNIL);
																BgL_arg1315z00_1237 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol2424z00zz__rgc_expandz00,
																	BgL_arg1316z00_1238);
															}
															BgL_arg1314z00_1236 =
																MAKE_YOUNG_PAIR(BgL_arg1315z00_1237, BNIL);
														}
														BgL_arg1312z00_1234 =
															MAKE_YOUNG_PAIR(BgL_arg1313z00_1235,
															BgL_arg1314z00_1236);
													}
													BgL_arg1310z00_1232 =
														MAKE_YOUNG_PAIR(BGl_symbol2364z00zz__rgc_expandz00,
														BgL_arg1312z00_1234);
												}
												{	/* Rgc/rgcexpand.scm 179 */
													obj_t BgL_arg1317z00_1239;
													obj_t BgL_arg1318z00_1240;

													{	/* Rgc/rgcexpand.scm 179 */
														obj_t BgL_arg1319z00_1241;

														{	/* Rgc/rgcexpand.scm 179 */
															obj_t BgL_arg1322z00_1242;
															obj_t BgL_arg1324z00_1243;

															BgL_arg1322z00_1242 =
																MAKE_YOUNG_PAIR
																(BGl_symbol2426z00zz__rgc_expandz00, BNIL);
															{	/* Rgc/rgcexpand.scm 180 */
																obj_t BgL_arg1325z00_1244;

																{	/* Rgc/rgcexpand.scm 180 */
																	obj_t BgL_arg1326z00_1245;

																	BgL_arg1326z00_1245 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2361z00zz__rgc_expandz00, BNIL);
																	BgL_arg1325z00_1244 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2428z00zz__rgc_expandz00,
																		BgL_arg1326z00_1245);
																}
																BgL_arg1324z00_1243 =
																	MAKE_YOUNG_PAIR(BgL_arg1325z00_1244, BNIL);
															}
															BgL_arg1319z00_1241 =
																MAKE_YOUNG_PAIR(BgL_arg1322z00_1242,
																BgL_arg1324z00_1243);
														}
														BgL_arg1317z00_1239 =
															MAKE_YOUNG_PAIR
															(BGl_symbol2364z00zz__rgc_expandz00,
															BgL_arg1319z00_1241);
													}
													{	/* Rgc/rgcexpand.scm 182 */
														obj_t BgL_arg1327z00_1246;
														obj_t BgL_arg1328z00_1247;

														{	/* Rgc/rgcexpand.scm 182 */
															obj_t BgL_arg1329z00_1248;

															{	/* Rgc/rgcexpand.scm 182 */
																obj_t BgL_arg1330z00_1249;
																obj_t BgL_arg1331z00_1250;

																{	/* Rgc/rgcexpand.scm 182 */
																	obj_t BgL_arg1333z00_1251;

																	BgL_arg1333z00_1251 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2430z00zz__rgc_expandz00, BNIL);
																	BgL_arg1330z00_1249 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2432z00zz__rgc_expandz00,
																		BgL_arg1333z00_1251);
																}
																{	/* Rgc/rgcexpand.scm 183 */
																	obj_t BgL_arg1334z00_1252;

																	{	/* Rgc/rgcexpand.scm 183 */
																		obj_t BgL_arg1335z00_1253;

																		{	/* Rgc/rgcexpand.scm 183 */
																			obj_t BgL_arg1337z00_1254;

																			BgL_arg1337z00_1254 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol2434z00zz__rgc_expandz00,
																				BNIL);
																			BgL_arg1335z00_1253 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol2361z00zz__rgc_expandz00,
																				BgL_arg1337z00_1254);
																		}
																		BgL_arg1334z00_1252 =
																			MAKE_YOUNG_PAIR
																			(BGl_symbol2436z00zz__rgc_expandz00,
																			BgL_arg1335z00_1253);
																	}
																	BgL_arg1331z00_1250 =
																		MAKE_YOUNG_PAIR(BgL_arg1334z00_1252, BNIL);
																}
																BgL_arg1329z00_1248 =
																	MAKE_YOUNG_PAIR(BgL_arg1330z00_1249,
																	BgL_arg1331z00_1250);
															}
															BgL_arg1327z00_1246 =
																MAKE_YOUNG_PAIR
																(BGl_symbol2364z00zz__rgc_expandz00,
																BgL_arg1329z00_1248);
														}
														{	/* Rgc/rgcexpand.scm 185 */
															obj_t BgL_arg1338z00_1255;
															obj_t BgL_arg1339z00_1256;

															{	/* Rgc/rgcexpand.scm 185 */
																obj_t BgL_arg1340z00_1257;

																{	/* Rgc/rgcexpand.scm 185 */
																	obj_t BgL_arg1341z00_1258;
																	obj_t BgL_arg1342z00_1259;

																	BgL_arg1341z00_1258 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2438z00zz__rgc_expandz00, BNIL);
																	{	/* Rgc/rgcexpand.scm 186 */
																		obj_t BgL_arg1343z00_1260;

																		{	/* Rgc/rgcexpand.scm 186 */
																			obj_t BgL_arg1344z00_1261;

																			{	/* Rgc/rgcexpand.scm 186 */
																				obj_t BgL_arg1345z00_1262;

																				{	/* Rgc/rgcexpand.scm 186 */
																					obj_t BgL_arg1346z00_1263;

																					{	/* Rgc/rgcexpand.scm 186 */
																						obj_t BgL_arg1347z00_1264;

																						BgL_arg1347z00_1264 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2440z00zz__rgc_expandz00,
																							BNIL);
																						BgL_arg1346z00_1263 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1347z00_1264, BNIL);
																					}
																					BgL_arg1345z00_1262 =
																						MAKE_YOUNG_PAIR(BINT(((long) 0)),
																						BgL_arg1346z00_1263);
																				}
																				BgL_arg1344z00_1261 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2361z00zz__rgc_expandz00,
																					BgL_arg1345z00_1262);
																			}
																			BgL_arg1343z00_1260 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol2442z00zz__rgc_expandz00,
																				BgL_arg1344z00_1261);
																		}
																		BgL_arg1342z00_1259 =
																			MAKE_YOUNG_PAIR(BgL_arg1343z00_1260,
																			BNIL);
																	}
																	BgL_arg1340z00_1257 =
																		MAKE_YOUNG_PAIR(BgL_arg1341z00_1258,
																		BgL_arg1342z00_1259);
																}
																BgL_arg1338z00_1255 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol2364z00zz__rgc_expandz00,
																	BgL_arg1340z00_1257);
															}
															{	/* Rgc/rgcexpand.scm 188 */
																obj_t BgL_arg1348z00_1265;
																obj_t BgL_arg1350z00_1266;

																{	/* Rgc/rgcexpand.scm 188 */
																	obj_t BgL_arg1351z00_1267;

																	{	/* Rgc/rgcexpand.scm 188 */
																		obj_t BgL_arg1352z00_1268;
																		obj_t BgL_arg1353z00_1269;

																		{	/* Rgc/rgcexpand.scm 188 */
																			obj_t BgL_arg1354z00_1270;

																			{	/* Rgc/rgcexpand.scm 188 */
																				obj_t BgL_arg1355z00_1271;

																				BgL_arg1355z00_1271 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2444z00zz__rgc_expandz00,
																					BNIL);
																				BgL_arg1354z00_1270 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2446z00zz__rgc_expandz00,
																					BgL_arg1355z00_1271);
																			}
																			BgL_arg1352z00_1268 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol2448z00zz__rgc_expandz00,
																				BgL_arg1354z00_1270);
																		}
																		{	/* Rgc/rgcexpand.scm 189 */
																			obj_t BgL_arg1356z00_1272;
																			obj_t BgL_arg1357z00_1273;

																			{	/* Rgc/rgcexpand.scm 189 */
																				obj_t BgL_arg1359z00_1274;

																				{	/* Rgc/rgcexpand.scm 189 */
																					obj_t BgL_arg1360z00_1275;
																					obj_t BgL_arg1361z00_1276;

																					{	/* Rgc/rgcexpand.scm 189 */
																						obj_t BgL_arg1362z00_1277;

																						{	/* Rgc/rgcexpand.scm 189 */
																							obj_t BgL_arg1363z00_1278;

																							BgL_arg1363z00_1278 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2450z00zz__rgc_expandz00,
																								BNIL);
																							BgL_arg1362z00_1277 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2452z00zz__rgc_expandz00,
																								BgL_arg1363z00_1278);
																						}
																						BgL_arg1360z00_1275 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2454z00zz__rgc_expandz00,
																							BgL_arg1362z00_1277);
																					}
																					{	/* Rgc/rgcexpand.scm 189 */
																						obj_t BgL_arg1364z00_1279;

																						{	/* Rgc/rgcexpand.scm 189 */
																							obj_t BgL_arg1365z00_1280;

																							{	/* Rgc/rgcexpand.scm 189 */
																								obj_t BgL_arg1367z00_1281;

																								{	/* Rgc/rgcexpand.scm 189 */
																									obj_t BgL_arg1368z00_1282;

																									{	/* Rgc/rgcexpand.scm 189 */
																										obj_t BgL_arg1370z00_1283;

																										{	/* Rgc/rgcexpand.scm 189 */
																											obj_t BgL_arg1371z00_1284;
																											obj_t BgL_arg1372z00_1285;

																											BgL_arg1371z00_1284 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2440z00zz__rgc_expandz00,
																												BNIL);
																											BgL_arg1372z00_1285 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2452z00zz__rgc_expandz00,
																												BNIL);
																											BgL_arg1370z00_1283 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1371z00_1284,
																												BgL_arg1372z00_1285);
																										}
																										BgL_arg1368z00_1282 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2456z00zz__rgc_expandz00,
																											BgL_arg1370z00_1283);
																									}
																									BgL_arg1367z00_1281 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1368z00_1282, BNIL);
																								}
																								BgL_arg1365z00_1280 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2452z00zz__rgc_expandz00,
																									BgL_arg1367z00_1281);
																							}
																							BgL_arg1364z00_1279 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2376z00zz__rgc_expandz00,
																								BgL_arg1365z00_1280);
																						}
																						BgL_arg1361z00_1276 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1364z00_1279, BNIL);
																					}
																					BgL_arg1359z00_1274 =
																						MAKE_YOUNG_PAIR(BgL_arg1360z00_1275,
																						BgL_arg1361z00_1276);
																				}
																				BgL_arg1356z00_1272 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2458z00zz__rgc_expandz00,
																					BgL_arg1359z00_1274);
																			}
																			{	/* Rgc/rgcexpand.scm 190 */
																				obj_t BgL_arg1373z00_1286;

																				{	/* Rgc/rgcexpand.scm 190 */
																					obj_t BgL_arg1374z00_1287;

																					{	/* Rgc/rgcexpand.scm 190 */
																						obj_t BgL_arg1375z00_1288;
																						obj_t BgL_arg1376z00_1289;

																						{	/* Rgc/rgcexpand.scm 190 */
																							obj_t BgL_arg1377z00_1290;

																							{	/* Rgc/rgcexpand.scm 190 */
																								obj_t BgL_arg1378z00_1291;
																								obj_t BgL_arg1379z00_1292;

																								{	/* Rgc/rgcexpand.scm 190 */
																									obj_t BgL_arg1380z00_1293;

																									{	/* Rgc/rgcexpand.scm 190 */
																										obj_t BgL_arg1381z00_1294;

																										BgL_arg1381z00_1294 =
																											MAKE_YOUNG_PAIR(BINT((
																													(long) 0)), BNIL);
																										BgL_arg1380z00_1293 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2450z00zz__rgc_expandz00,
																											BgL_arg1381z00_1294);
																									}
																									BgL_arg1378z00_1291 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2460z00zz__rgc_expandz00,
																										BgL_arg1380z00_1293);
																								}
																								{	/* Rgc/rgcexpand.scm 190 */
																									obj_t BgL_arg1382z00_1295;
																									obj_t BgL_arg1383z00_1296;

																									{	/* Rgc/rgcexpand.scm 190 */
																										obj_t BgL_arg1384z00_1297;

																										{	/* Rgc/rgcexpand.scm 190 */
																											obj_t BgL_arg1385z00_1298;

																											BgL_arg1385z00_1298 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2450z00zz__rgc_expandz00,
																												BNIL);
																											BgL_arg1384z00_1297 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2452z00zz__rgc_expandz00,
																												BgL_arg1385z00_1298);
																										}
																										BgL_arg1382z00_1295 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2460z00zz__rgc_expandz00,
																											BgL_arg1384z00_1297);
																									}
																									{	/* Rgc/rgcexpand.scm 190 */
																										obj_t BgL_arg1386z00_1299;

																										{	/* Rgc/rgcexpand.scm 190 */
																											obj_t BgL_arg1387z00_1300;

																											{	/* Rgc/rgcexpand.scm 190 */
																												obj_t
																													BgL_arg1388z00_1301;
																												{	/* Rgc/rgcexpand.scm 190 */
																													obj_t
																														BgL_arg1389z00_1302;
																													BgL_arg1389z00_1302 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol2440z00zz__rgc_expandz00,
																														BNIL);
																													BgL_arg1388z00_1301 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1389z00_1302,
																														BNIL);
																												}
																												BgL_arg1387z00_1300 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2452z00zz__rgc_expandz00,
																													BgL_arg1388z00_1301);
																											}
																											BgL_arg1386z00_1299 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2462z00zz__rgc_expandz00,
																												BgL_arg1387z00_1300);
																										}
																										BgL_arg1383z00_1296 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1386z00_1299,
																											BNIL);
																									}
																									BgL_arg1379z00_1292 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1382z00_1295,
																										BgL_arg1383z00_1296);
																								}
																								BgL_arg1377z00_1290 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1378z00_1291,
																									BgL_arg1379z00_1292);
																							}
																							BgL_arg1375z00_1288 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2464z00zz__rgc_expandz00,
																								BgL_arg1377z00_1290);
																						}
																						{	/* Rgc/rgcexpand.scm 191 */
																							obj_t BgL_arg1390z00_1303;
																							obj_t BgL_arg1391z00_1304;

																							{	/* Rgc/rgcexpand.scm 191 */
																								obj_t BgL_arg1392z00_1305;

																								{	/* Rgc/rgcexpand.scm 191 */
																									obj_t BgL_arg1393z00_1306;

																									{	/* Rgc/rgcexpand.scm 191 */
																										obj_t BgL_arg1394z00_1307;

																										BgL_arg1394z00_1307 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2452z00zz__rgc_expandz00,
																											BNIL);
																										BgL_arg1393z00_1306 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2450z00zz__rgc_expandz00,
																											BgL_arg1394z00_1307);
																									}
																									BgL_arg1392z00_1305 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2361z00zz__rgc_expandz00,
																										BgL_arg1393z00_1306);
																								}
																								BgL_arg1390z00_1303 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2442z00zz__rgc_expandz00,
																									BgL_arg1392z00_1305);
																							}
																							{	/* Rgc/rgcexpand.scm 193 */
																								obj_t BgL_arg1395z00_1308;

																								{	/* Rgc/rgcexpand.scm 193 */
																									obj_t BgL_arg1396z00_1309;

																									{	/* Rgc/rgcexpand.scm 193 */
																										obj_t BgL_arg1397z00_1310;

																										{	/* Rgc/rgcexpand.scm 193 */
																											obj_t BgL_arg1398z00_1311;
																											obj_t BgL_arg1399z00_1312;

																											{	/* Rgc/rgcexpand.scm 193 */
																												obj_t
																													BgL_arg1400z00_1313;
																												obj_t
																													BgL_arg1401z00_1314;
																												{	/* Rgc/rgcexpand.scm 193 */
																													obj_t
																														BgL_arg1402z00_1315;
																													{	/* Rgc/rgcexpand.scm 193 */
																														obj_t
																															BgL_arg1404z00_1316;
																														BgL_arg1404z00_1316
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2466z00zz__rgc_expandz00,
																															BNIL);
																														BgL_arg1402z00_1315
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2468z00zz__rgc_expandz00,
																															BgL_arg1404z00_1316);
																													}
																													BgL_arg1400z00_1313 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol2470z00zz__rgc_expandz00,
																														BgL_arg1402z00_1315);
																												}
																												{	/* Rgc/rgcexpand.scm 194 */
																													obj_t
																														BgL_arg1405z00_1317;
																													{	/* Rgc/rgcexpand.scm 194 */
																														obj_t
																															BgL_arg1406z00_1318;
																														BgL_arg1406z00_1318
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2472z00zz__rgc_expandz00,
																															BNIL);
																														BgL_arg1405z00_1317
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1406z00_1318,
																															BNIL);
																													}
																													BgL_arg1401z00_1314 =
																														MAKE_YOUNG_PAIR
																														(BGl_string2474z00zz__rgc_expandz00,
																														BgL_arg1405z00_1317);
																												}
																												BgL_arg1398z00_1311 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1400z00_1313,
																													BgL_arg1401z00_1314);
																											}
																											{	/* Rgc/rgcexpand.scm 195 */
																												obj_t
																													BgL_arg1407z00_1319;
																												{	/* Rgc/rgcexpand.scm 195 */
																													obj_t
																														BgL_arg1409z00_1320;
																													{	/* Rgc/rgcexpand.scm 195 */
																														obj_t
																															BgL_arg1410z00_1321;
																														BgL_arg1410z00_1321
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2452z00zz__rgc_expandz00,
																															BNIL);
																														BgL_arg1409z00_1320
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2450z00zz__rgc_expandz00,
																															BgL_arg1410z00_1321);
																													}
																													BgL_arg1407z00_1319 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol2381z00zz__rgc_expandz00,
																														BgL_arg1409z00_1320);
																												}
																												BgL_arg1399z00_1312 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1407z00_1319,
																													BNIL);
																											}
																											BgL_arg1397z00_1310 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1398z00_1311,
																												BgL_arg1399z00_1312);
																										}
																										BgL_arg1396z00_1309 =
																											MAKE_YOUNG_PAIR
																											(BGl_string2475z00zz__rgc_expandz00,
																											BgL_arg1397z00_1310);
																									}
																									BgL_arg1395z00_1308 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2476z00zz__rgc_expandz00,
																										BgL_arg1396z00_1309);
																								}
																								BgL_arg1391z00_1304 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1395z00_1308, BNIL);
																							}
																							BgL_arg1376z00_1289 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1390z00_1303,
																								BgL_arg1391z00_1304);
																						}
																						BgL_arg1374z00_1287 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1375z00_1288,
																							BgL_arg1376z00_1289);
																					}
																					BgL_arg1373z00_1286 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol2478z00zz__rgc_expandz00,
																						BgL_arg1374z00_1287);
																				}
																				BgL_arg1357z00_1273 =
																					MAKE_YOUNG_PAIR(BgL_arg1373z00_1286,
																					BNIL);
																			}
																			BgL_arg1353z00_1269 =
																				MAKE_YOUNG_PAIR(BgL_arg1356z00_1272,
																				BgL_arg1357z00_1273);
																		}
																		BgL_arg1351z00_1267 =
																			MAKE_YOUNG_PAIR(BgL_arg1352z00_1268,
																			BgL_arg1353z00_1269);
																	}
																	BgL_arg1348z00_1265 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2364z00zz__rgc_expandz00,
																		BgL_arg1351z00_1267);
																}
																{	/* Rgc/rgcexpand.scm 197 */
																	obj_t BgL_arg1411z00_1322;
																	obj_t BgL_arg1412z00_1323;

																	{	/* Rgc/rgcexpand.scm 197 */
																		obj_t BgL_arg1413z00_1324;

																		{	/* Rgc/rgcexpand.scm 197 */
																			obj_t BgL_arg1414z00_1325;
																			obj_t BgL_arg1415z00_1326;

																			{	/* Rgc/rgcexpand.scm 197 */
																				obj_t BgL_arg1416z00_1327;

																				{	/* Rgc/rgcexpand.scm 197 */
																					obj_t BgL_arg1417z00_1328;

																					{	/* Rgc/rgcexpand.scm 197 */
																						obj_t BgL_arg1418z00_1329;

																						BgL_arg1418z00_1329 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2480z00zz__rgc_expandz00,
																							BNIL);
																						BgL_arg1417z00_1328 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2444z00zz__rgc_expandz00,
																							BgL_arg1418z00_1329);
																					}
																					BgL_arg1416z00_1327 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol2446z00zz__rgc_expandz00,
																						BgL_arg1417z00_1328);
																				}
																				BgL_arg1414z00_1325 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2482z00zz__rgc_expandz00,
																					BgL_arg1416z00_1327);
																			}
																			{	/* Rgc/rgcexpand.scm 198 */
																				obj_t BgL_arg1419z00_1330;
																				obj_t BgL_arg1420z00_1331;

																				{	/* Rgc/rgcexpand.scm 198 */
																					obj_t BgL_arg1421z00_1332;

																					{	/* Rgc/rgcexpand.scm 198 */
																						obj_t BgL_arg1422z00_1333;
																						obj_t BgL_arg1424z00_1334;

																						{	/* Rgc/rgcexpand.scm 198 */
																							obj_t BgL_arg1425z00_1335;

																							{	/* Rgc/rgcexpand.scm 198 */
																								obj_t BgL_arg1426z00_1336;

																								BgL_arg1426z00_1336 =
																									MAKE_YOUNG_PAIR(BINT(((long)
																											0)), BNIL);
																								BgL_arg1425z00_1335 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2452z00zz__rgc_expandz00,
																									BgL_arg1426z00_1336);
																							}
																							BgL_arg1422z00_1333 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2454z00zz__rgc_expandz00,
																								BgL_arg1425z00_1335);
																						}
																						{	/* Rgc/rgcexpand.scm 198 */
																							obj_t BgL_arg1427z00_1337;

																							{	/* Rgc/rgcexpand.scm 198 */
																								obj_t BgL_arg1428z00_1338;

																								{	/* Rgc/rgcexpand.scm 198 */
																									obj_t BgL_arg1429z00_1339;

																									{	/* Rgc/rgcexpand.scm 198 */
																										obj_t BgL_arg1430z00_1340;

																										{	/* Rgc/rgcexpand.scm 198 */
																											obj_t BgL_arg1431z00_1341;

																											{	/* Rgc/rgcexpand.scm 198 */
																												obj_t
																													BgL_arg1432z00_1342;
																												obj_t
																													BgL_arg1433z00_1343;
																												BgL_arg1432z00_1342 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2440z00zz__rgc_expandz00,
																													BNIL);
																												BgL_arg1433z00_1343 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2452z00zz__rgc_expandz00,
																													BNIL);
																												BgL_arg1431z00_1341 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1432z00_1342,
																													BgL_arg1433z00_1343);
																											}
																											BgL_arg1430z00_1340 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2456z00zz__rgc_expandz00,
																												BgL_arg1431z00_1341);
																										}
																										BgL_arg1429z00_1339 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1430z00_1340,
																											BNIL);
																									}
																									BgL_arg1428z00_1338 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2452z00zz__rgc_expandz00,
																										BgL_arg1429z00_1339);
																								}
																								BgL_arg1427z00_1337 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2376z00zz__rgc_expandz00,
																									BgL_arg1428z00_1338);
																							}
																							BgL_arg1424z00_1334 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1427z00_1337, BNIL);
																						}
																						BgL_arg1421z00_1332 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1422z00_1333,
																							BgL_arg1424z00_1334);
																					}
																					BgL_arg1419z00_1330 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol2458z00zz__rgc_expandz00,
																						BgL_arg1421z00_1332);
																				}
																				{	/* Rgc/rgcexpand.scm 199 */
																					obj_t BgL_arg1434z00_1344;

																					{	/* Rgc/rgcexpand.scm 199 */
																						obj_t BgL_arg1435z00_1345;

																						{	/* Rgc/rgcexpand.scm 199 */
																							obj_t BgL_arg1436z00_1346;
																							obj_t BgL_arg1437z00_1347;

																							{	/* Rgc/rgcexpand.scm 199 */
																								obj_t BgL_arg1438z00_1348;

																								{	/* Rgc/rgcexpand.scm 199 */
																									obj_t BgL_arg1439z00_1349;
																									obj_t BgL_arg1440z00_1350;

																									{	/* Rgc/rgcexpand.scm 199 */
																										obj_t BgL_arg1441z00_1351;

																										{	/* Rgc/rgcexpand.scm 199 */
																											obj_t BgL_arg1442z00_1352;

																											BgL_arg1442z00_1352 =
																												MAKE_YOUNG_PAIR(BINT((
																														(long) 0)), BNIL);
																											BgL_arg1441z00_1351 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2450z00zz__rgc_expandz00,
																												BgL_arg1442z00_1352);
																										}
																										BgL_arg1439z00_1349 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2460z00zz__rgc_expandz00,
																											BgL_arg1441z00_1351);
																									}
																									{	/* Rgc/rgcexpand.scm 199 */
																										obj_t BgL_arg1443z00_1353;
																										obj_t BgL_arg1444z00_1354;

																										{	/* Rgc/rgcexpand.scm 199 */
																											obj_t BgL_arg1445z00_1355;

																											{	/* Rgc/rgcexpand.scm 199 */
																												obj_t
																													BgL_arg1446z00_1356;
																												BgL_arg1446z00_1356 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2450z00zz__rgc_expandz00,
																													BNIL);
																												BgL_arg1445z00_1355 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2452z00zz__rgc_expandz00,
																													BgL_arg1446z00_1356);
																											}
																											BgL_arg1443z00_1353 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2460z00zz__rgc_expandz00,
																												BgL_arg1445z00_1355);
																										}
																										{	/* Rgc/rgcexpand.scm 199 */
																											obj_t BgL_arg1448z00_1357;

																											{	/* Rgc/rgcexpand.scm 199 */
																												obj_t
																													BgL_arg1449z00_1358;
																												{	/* Rgc/rgcexpand.scm 199 */
																													obj_t
																														BgL_arg1451z00_1359;
																													{	/* Rgc/rgcexpand.scm 199 */
																														obj_t
																															BgL_arg1452z00_1360;
																														BgL_arg1452z00_1360
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2440z00zz__rgc_expandz00,
																															BNIL);
																														BgL_arg1451z00_1359
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1452z00_1360,
																															BNIL);
																													}
																													BgL_arg1449z00_1358 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol2452z00zz__rgc_expandz00,
																														BgL_arg1451z00_1359);
																												}
																												BgL_arg1448z00_1357 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2462z00zz__rgc_expandz00,
																													BgL_arg1449z00_1358);
																											}
																											BgL_arg1444z00_1354 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1448z00_1357,
																												BNIL);
																										}
																										BgL_arg1440z00_1350 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1443z00_1353,
																											BgL_arg1444z00_1354);
																									}
																									BgL_arg1438z00_1348 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1439z00_1349,
																										BgL_arg1440z00_1350);
																								}
																								BgL_arg1436z00_1346 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2464z00zz__rgc_expandz00,
																									BgL_arg1438z00_1348);
																							}
																							{	/* Rgc/rgcexpand.scm 200 */
																								obj_t BgL_arg1453z00_1361;
																								obj_t BgL_arg1454z00_1362;

																								{	/* Rgc/rgcexpand.scm 200 */
																									obj_t BgL_arg1455z00_1363;

																									{	/* Rgc/rgcexpand.scm 200 */
																										obj_t BgL_arg1456z00_1364;

																										{	/* Rgc/rgcexpand.scm 200 */
																											obj_t BgL_arg1457z00_1365;

																											{	/* Rgc/rgcexpand.scm 200 */
																												obj_t
																													BgL_arg1458z00_1366;
																												BgL_arg1458z00_1366 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2484z00zz__rgc_expandz00,
																													BNIL);
																												BgL_arg1457z00_1365 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2452z00zz__rgc_expandz00,
																													BgL_arg1458z00_1366);
																											}
																											BgL_arg1456z00_1364 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2450z00zz__rgc_expandz00,
																												BgL_arg1457z00_1365);
																										}
																										BgL_arg1455z00_1363 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2361z00zz__rgc_expandz00,
																											BgL_arg1456z00_1364);
																									}
																									BgL_arg1453z00_1361 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2486z00zz__rgc_expandz00,
																										BgL_arg1455z00_1363);
																								}
																								{	/* Rgc/rgcexpand.scm 202 */
																									obj_t BgL_arg1459z00_1367;

																									{	/* Rgc/rgcexpand.scm 202 */
																										obj_t BgL_arg1460z00_1368;

																										{	/* Rgc/rgcexpand.scm 202 */
																											obj_t BgL_arg1461z00_1369;

																											{	/* Rgc/rgcexpand.scm 202 */
																												obj_t
																													BgL_arg1462z00_1370;
																												obj_t
																													BgL_arg1463z00_1371;
																												{	/* Rgc/rgcexpand.scm 202 */
																													obj_t
																														BgL_arg1464z00_1372;
																													obj_t
																														BgL_arg1465z00_1373;
																													{	/* Rgc/rgcexpand.scm 202 */
																														obj_t
																															BgL_arg1466z00_1374;
																														{	/* Rgc/rgcexpand.scm 202 */
																															obj_t
																																BgL_arg1467z00_1375;
																															BgL_arg1467z00_1375
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2466z00zz__rgc_expandz00,
																																BNIL);
																															BgL_arg1466z00_1374
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2468z00zz__rgc_expandz00,
																																BgL_arg1467z00_1375);
																														}
																														BgL_arg1464z00_1372
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2470z00zz__rgc_expandz00,
																															BgL_arg1466z00_1374);
																													}
																													{	/* Rgc/rgcexpand.scm 203 */
																														obj_t
																															BgL_arg1468z00_1376;
																														{	/* Rgc/rgcexpand.scm 203 */
																															obj_t
																																BgL_arg1469z00_1377;
																															BgL_arg1469z00_1377
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2472z00zz__rgc_expandz00,
																																BNIL);
																															BgL_arg1468z00_1376
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1469z00_1377,
																																BNIL);
																														}
																														BgL_arg1465z00_1373
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_string2474z00zz__rgc_expandz00,
																															BgL_arg1468z00_1376);
																													}
																													BgL_arg1462z00_1370 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1464z00_1372,
																														BgL_arg1465z00_1373);
																												}
																												{	/* Rgc/rgcexpand.scm 204 */
																													obj_t
																														BgL_arg1470z00_1378;
																													{	/* Rgc/rgcexpand.scm 204 */
																														obj_t
																															BgL_arg1471z00_1379;
																														{	/* Rgc/rgcexpand.scm 204 */
																															obj_t
																																BgL_arg1472z00_1380;
																															BgL_arg1472z00_1380
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2452z00zz__rgc_expandz00,
																																BNIL);
																															BgL_arg1471z00_1379
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2450z00zz__rgc_expandz00,
																																BgL_arg1472z00_1380);
																														}
																														BgL_arg1470z00_1378
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2381z00zz__rgc_expandz00,
																															BgL_arg1471z00_1379);
																													}
																													BgL_arg1463z00_1371 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1470z00_1378,
																														BNIL);
																												}
																												BgL_arg1461z00_1369 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1462z00_1370,
																													BgL_arg1463z00_1371);
																											}
																											BgL_arg1460z00_1368 =
																												MAKE_YOUNG_PAIR
																												(BGl_string2488z00zz__rgc_expandz00,
																												BgL_arg1461z00_1369);
																										}
																										BgL_arg1459z00_1367 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2476z00zz__rgc_expandz00,
																											BgL_arg1460z00_1368);
																									}
																									BgL_arg1454z00_1362 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1459z00_1367, BNIL);
																								}
																								BgL_arg1437z00_1347 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1453z00_1361,
																									BgL_arg1454z00_1362);
																							}
																							BgL_arg1435z00_1345 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1436z00_1346,
																								BgL_arg1437z00_1347);
																						}
																						BgL_arg1434z00_1344 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2478z00zz__rgc_expandz00,
																							BgL_arg1435z00_1345);
																					}
																					BgL_arg1420z00_1331 =
																						MAKE_YOUNG_PAIR(BgL_arg1434z00_1344,
																						BNIL);
																				}
																				BgL_arg1415z00_1326 =
																					MAKE_YOUNG_PAIR(BgL_arg1419z00_1330,
																					BgL_arg1420z00_1331);
																			}
																			BgL_arg1413z00_1324 =
																				MAKE_YOUNG_PAIR(BgL_arg1414z00_1325,
																				BgL_arg1415z00_1326);
																		}
																		BgL_arg1411z00_1322 =
																			MAKE_YOUNG_PAIR
																			(BGl_symbol2364z00zz__rgc_expandz00,
																			BgL_arg1413z00_1324);
																	}
																	{	/* Rgc/rgcexpand.scm 206 */
																		obj_t BgL_arg1473z00_1381;
																		obj_t BgL_arg1474z00_1382;

																		{	/* Rgc/rgcexpand.scm 206 */
																			obj_t BgL_arg1475z00_1383;

																			{	/* Rgc/rgcexpand.scm 206 */
																				obj_t BgL_arg1476z00_1384;
																				obj_t BgL_arg1477z00_1385;

																				BgL_arg1476z00_1384 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2489z00zz__rgc_expandz00,
																					BNIL);
																				{	/* Rgc/rgcexpand.scm 207 */
																					obj_t BgL_arg1478z00_1386;

																					{	/* Rgc/rgcexpand.scm 207 */
																						obj_t BgL_arg1479z00_1387;

																						BgL_arg1479z00_1387 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2361z00zz__rgc_expandz00,
																							BNIL);
																						BgL_arg1478z00_1386 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2491z00zz__rgc_expandz00,
																							BgL_arg1479z00_1387);
																					}
																					BgL_arg1477z00_1385 =
																						MAKE_YOUNG_PAIR(BgL_arg1478z00_1386,
																						BNIL);
																				}
																				BgL_arg1475z00_1383 =
																					MAKE_YOUNG_PAIR(BgL_arg1476z00_1384,
																					BgL_arg1477z00_1385);
																			}
																			BgL_arg1473z00_1381 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol2364z00zz__rgc_expandz00,
																				BgL_arg1475z00_1383);
																		}
																		{	/* Rgc/rgcexpand.scm 209 */
																			obj_t BgL_arg1480z00_1388;
																			obj_t BgL_arg1483z00_1389;

																			{	/* Rgc/rgcexpand.scm 209 */
																				obj_t BgL_arg1484z00_1390;

																				{	/* Rgc/rgcexpand.scm 209 */
																					obj_t BgL_arg1485z00_1391;
																					obj_t BgL_arg1486z00_1392;

																					BgL_arg1485z00_1391 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol2493z00zz__rgc_expandz00,
																						BNIL);
																					{	/* Rgc/rgcexpand.scm 210 */
																						obj_t BgL_arg1487z00_1393;

																						{	/* Rgc/rgcexpand.scm 210 */
																							obj_t BgL_arg1489z00_1394;

																							BgL_arg1489z00_1394 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2361z00zz__rgc_expandz00,
																								BNIL);
																							BgL_arg1487z00_1393 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2495z00zz__rgc_expandz00,
																								BgL_arg1489z00_1394);
																						}
																						BgL_arg1486z00_1392 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1487z00_1393, BNIL);
																					}
																					BgL_arg1484z00_1390 =
																						MAKE_YOUNG_PAIR(BgL_arg1485z00_1391,
																						BgL_arg1486z00_1392);
																				}
																				BgL_arg1480z00_1388 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2364z00zz__rgc_expandz00,
																					BgL_arg1484z00_1390);
																			}
																			{	/* Rgc/rgcexpand.scm 212 */
																				obj_t BgL_arg1491z00_1395;
																				obj_t BgL_arg1492z00_1396;

																				{	/* Rgc/rgcexpand.scm 212 */
																					obj_t BgL_arg1493z00_1397;

																					{	/* Rgc/rgcexpand.scm 212 */
																						obj_t BgL_arg1494z00_1398;
																						obj_t BgL_arg1495z00_1399;

																						BgL_arg1494z00_1398 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2497z00zz__rgc_expandz00,
																							BNIL);
																						{	/* Rgc/rgcexpand.scm 213 */
																							obj_t BgL_arg1496z00_1400;

																							{	/* Rgc/rgcexpand.scm 213 */
																								obj_t BgL_arg1497z00_1401;

																								BgL_arg1497z00_1401 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2361z00zz__rgc_expandz00,
																									BNIL);
																								BgL_arg1496z00_1400 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2499z00zz__rgc_expandz00,
																									BgL_arg1497z00_1401);
																							}
																							BgL_arg1495z00_1399 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1496z00_1400, BNIL);
																						}
																						BgL_arg1493z00_1397 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1494z00_1398,
																							BgL_arg1495z00_1399);
																					}
																					BgL_arg1491z00_1395 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol2364z00zz__rgc_expandz00,
																						BgL_arg1493z00_1397);
																				}
																				{	/* Rgc/rgcexpand.scm 215 */
																					obj_t BgL_arg1498z00_1402;
																					obj_t BgL_arg1500z00_1403;

																					{	/* Rgc/rgcexpand.scm 215 */
																						obj_t BgL_arg1502z00_1404;

																						{	/* Rgc/rgcexpand.scm 215 */
																							obj_t BgL_arg1505z00_1405;
																							obj_t BgL_arg1506z00_1406;

																							BgL_arg1505z00_1405 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2501z00zz__rgc_expandz00,
																								BNIL);
																							{	/* Rgc/rgcexpand.scm 216 */
																								obj_t BgL_arg1507z00_1407;

																								{	/* Rgc/rgcexpand.scm 216 */
																									obj_t BgL_arg1508z00_1408;

																									BgL_arg1508z00_1408 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2361z00zz__rgc_expandz00,
																										BNIL);
																									BgL_arg1507z00_1407 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2503z00zz__rgc_expandz00,
																										BgL_arg1508z00_1408);
																								}
																								BgL_arg1506z00_1406 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1507z00_1407, BNIL);
																							}
																							BgL_arg1502z00_1404 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1505z00_1405,
																								BgL_arg1506z00_1406);
																						}
																						BgL_arg1498z00_1402 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2364z00zz__rgc_expandz00,
																							BgL_arg1502z00_1404);
																					}
																					{	/* Rgc/rgcexpand.scm 218 */
																						obj_t BgL_arg1509z00_1409;
																						obj_t BgL_arg1510z00_1410;

																						{	/* Rgc/rgcexpand.scm 218 */
																							obj_t BgL_arg1511z00_1411;

																							{	/* Rgc/rgcexpand.scm 218 */
																								obj_t BgL_arg1512z00_1412;
																								obj_t BgL_arg1513z00_1413;

																								BgL_arg1512z00_1412 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2505z00zz__rgc_expandz00,
																									BNIL);
																								{	/* Rgc/rgcexpand.scm 219 */
																									obj_t BgL_arg1514z00_1414;

																									{	/* Rgc/rgcexpand.scm 219 */
																										obj_t BgL_arg1515z00_1415;

																										BgL_arg1515z00_1415 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2361z00zz__rgc_expandz00,
																											BNIL);
																										BgL_arg1514z00_1414 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2507z00zz__rgc_expandz00,
																											BgL_arg1515z00_1415);
																									}
																									BgL_arg1513z00_1413 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1514z00_1414, BNIL);
																								}
																								BgL_arg1511z00_1411 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1512z00_1412,
																									BgL_arg1513z00_1413);
																							}
																							BgL_arg1509z00_1409 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2364z00zz__rgc_expandz00,
																								BgL_arg1511z00_1411);
																						}
																						{	/* Rgc/rgcexpand.scm 221 */
																							obj_t BgL_arg1516z00_1416;
																							obj_t BgL_arg1518z00_1417;

																							{	/* Rgc/rgcexpand.scm 221 */
																								obj_t BgL_arg1519z00_1418;

																								{	/* Rgc/rgcexpand.scm 221 */
																									obj_t BgL_arg1520z00_1419;
																									obj_t BgL_arg1521z00_1420;

																									{	/* Rgc/rgcexpand.scm 221 */
																										obj_t BgL_arg1523z00_1421;

																										{	/* Rgc/rgcexpand.scm 221 */
																											obj_t BgL_arg1524z00_1422;

																											BgL_arg1524z00_1422 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2452z00zz__rgc_expandz00,
																												BNIL);
																											BgL_arg1523z00_1421 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2450z00zz__rgc_expandz00,
																												BgL_arg1524z00_1422);
																										}
																										BgL_arg1520z00_1419 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2509z00zz__rgc_expandz00,
																											BgL_arg1523z00_1421);
																									}
																									{	/* Rgc/rgcexpand.scm 222 */
																										obj_t BgL_arg1525z00_1423;

																										{	/* Rgc/rgcexpand.scm 222 */
																											obj_t BgL_arg1526z00_1424;

																											{	/* Rgc/rgcexpand.scm 222 */
																												obj_t
																													BgL_arg1528z00_1425;
																												obj_t
																													BgL_arg1530z00_1426;
																												{	/* Rgc/rgcexpand.scm 222 */
																													obj_t
																														BgL_arg1531z00_1427;
																													{	/* Rgc/rgcexpand.scm 222 */
																														obj_t
																															BgL_arg1532z00_1428;
																														BgL_arg1532z00_1428
																															=
																															MAKE_YOUNG_PAIR
																															(BINT(((long) 0)),
																															BNIL);
																														BgL_arg1531z00_1427
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2452z00zz__rgc_expandz00,
																															BgL_arg1532z00_1428);
																													}
																													BgL_arg1528z00_1425 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol2454z00zz__rgc_expandz00,
																														BgL_arg1531z00_1427);
																												}
																												{	/* Rgc/rgcexpand.scm 223 */
																													obj_t
																														BgL_arg1533z00_1429;
																													obj_t
																														BgL_arg1534z00_1430;
																													{	/* Rgc/rgcexpand.scm 223 */
																														obj_t
																															BgL_arg1535z00_1431;
																														{	/* Rgc/rgcexpand.scm 223 */
																															obj_t
																																BgL_arg1536z00_1432;
																															obj_t
																																BgL_arg1537z00_1433;
																															{	/* Rgc/rgcexpand.scm 223 */
																																obj_t
																																	BgL_arg1540z00_1434;
																																{	/* Rgc/rgcexpand.scm 223 */
																																	obj_t
																																		BgL_arg1541z00_1435;
																																	{	/* Rgc/rgcexpand.scm 223 */
																																		obj_t
																																			BgL_arg1542z00_1436;
																																		{	/* Rgc/rgcexpand.scm 223 */
																																			obj_t
																																				BgL_arg1544z00_1437;
																																			{	/* Rgc/rgcexpand.scm 223 */
																																				obj_t
																																					BgL_arg1545z00_1438;
																																				obj_t
																																					BgL_arg1546z00_1439;
																																				BgL_arg1545z00_1438
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2440z00zz__rgc_expandz00,
																																					BNIL);
																																				BgL_arg1546z00_1439
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2452z00zz__rgc_expandz00,
																																					BNIL);
																																				BgL_arg1544z00_1437
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1545z00_1438,
																																					BgL_arg1546z00_1439);
																																			}
																																			BgL_arg1542z00_1436
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol2456z00zz__rgc_expandz00,
																																				BgL_arg1544z00_1437);
																																		}
																																		BgL_arg1541z00_1435
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1542z00_1436,
																																			BNIL);
																																	}
																																	BgL_arg1540z00_1434
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_symbol2396z00zz__rgc_expandz00,
																																		BgL_arg1541z00_1435);
																																}
																																BgL_arg1536z00_1432
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1540z00_1434,
																																	BNIL);
																															}
																															{	/* Rgc/rgcexpand.scm 224 */
																																obj_t
																																	BgL_arg1547z00_1440;
																																{	/* Rgc/rgcexpand.scm 224 */
																																	obj_t
																																		BgL_arg1551z00_1441;
																																	{	/* Rgc/rgcexpand.scm 224 */
																																		obj_t
																																			BgL_arg1552z00_1442;
																																		obj_t
																																			BgL_arg1553z00_1443;
																																		{	/* Rgc/rgcexpand.scm 224 */
																																			obj_t
																																				BgL_arg1554z00_1444;
																																			{	/* Rgc/rgcexpand.scm 224 */
																																				obj_t
																																					BgL_arg1556z00_1445;
																																				BgL_arg1556z00_1445
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2450z00zz__rgc_expandz00,
																																					BNIL);
																																				BgL_arg1554z00_1444
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2396z00zz__rgc_expandz00,
																																					BgL_arg1556z00_1445);
																																			}
																																			BgL_arg1552z00_1442
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol2462z00zz__rgc_expandz00,
																																				BgL_arg1554z00_1444);
																																		}
																																		{	/* Rgc/rgcexpand.scm 225 */
																																			obj_t
																																				BgL_arg1557z00_1446;
																																			obj_t
																																				BgL_arg1558z00_1447;
																																			{	/* Rgc/rgcexpand.scm 225 */
																																				obj_t
																																					BgL_arg1560z00_1448;
																																				{	/* Rgc/rgcexpand.scm 225 */
																																					obj_t
																																						BgL_arg1561z00_1449;
																																					{	/* Rgc/rgcexpand.scm 225 */
																																						obj_t
																																							BgL_arg1562z00_1450;
																																						{	/* Rgc/rgcexpand.scm 225 */
																																							obj_t
																																								BgL_arg1563z00_1451;
																																							{	/* Rgc/rgcexpand.scm 225 */
																																								obj_t
																																									BgL_arg1564z00_1452;
																																								{	/* Rgc/rgcexpand.scm 225 */
																																									obj_t
																																										BgL_arg1565z00_1453;
																																									BgL_arg1565z00_1453
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BGl_symbol2452z00zz__rgc_expandz00,
																																										BNIL);
																																									BgL_arg1564z00_1452
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BGl_symbol2450z00zz__rgc_expandz00,
																																										BgL_arg1565z00_1453);
																																								}
																																								BgL_arg1563z00_1451
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2381z00zz__rgc_expandz00,
																																									BgL_arg1564z00_1452);
																																							}
																																							BgL_arg1562z00_1450
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_arg1563z00_1451,
																																								BNIL);
																																						}
																																						BgL_arg1561z00_1449
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_string2511z00zz__rgc_expandz00,
																																							BgL_arg1562z00_1450);
																																					}
																																					BgL_arg1560z00_1448
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_string2512z00zz__rgc_expandz00,
																																						BgL_arg1561z00_1449);
																																				}
																																				BgL_arg1557z00_1446
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2476z00zz__rgc_expandz00,
																																					BgL_arg1560z00_1448);
																																			}
																																			{	/* Rgc/rgcexpand.scm 226 */
																																				obj_t
																																					BgL_arg1566z00_1454;
																																				{	/* Rgc/rgcexpand.scm 226 */
																																					obj_t
																																						BgL_arg1567z00_1455;
																																					{	/* Rgc/rgcexpand.scm 226 */
																																						obj_t
																																							BgL_arg1568z00_1456;
																																						{	/* Rgc/rgcexpand.scm 226 */
																																							obj_t
																																								BgL_arg1569z00_1457;
																																							BgL_arg1569z00_1457
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2396z00zz__rgc_expandz00,
																																								BNIL);
																																							BgL_arg1568z00_1456
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2450z00zz__rgc_expandz00,
																																								BgL_arg1569z00_1457);
																																						}
																																						BgL_arg1567z00_1455
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol2361z00zz__rgc_expandz00,
																																							BgL_arg1568z00_1456);
																																					}
																																					BgL_arg1566z00_1454
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2513z00zz__rgc_expandz00,
																																						BgL_arg1567z00_1455);
																																				}
																																				BgL_arg1558z00_1447
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1566z00_1454,
																																					BNIL);
																																			}
																																			BgL_arg1553z00_1443
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1557z00_1446,
																																				BgL_arg1558z00_1447);
																																		}
																																		BgL_arg1551z00_1441
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1552z00_1442,
																																			BgL_arg1553z00_1443);
																																	}
																																	BgL_arg1547z00_1440
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_symbol2478z00zz__rgc_expandz00,
																																		BgL_arg1551z00_1441);
																																}
																																BgL_arg1537z00_1433
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1547z00_1440,
																																	BNIL);
																															}
																															BgL_arg1535z00_1431
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1536z00_1432,
																																BgL_arg1537z00_1433);
																														}
																														BgL_arg1533z00_1429
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2355z00zz__rgc_expandz00,
																															BgL_arg1535z00_1431);
																													}
																													{	/* Rgc/rgcexpand.scm 227 */
																														obj_t
																															BgL_arg1570z00_1458;
																														{	/* Rgc/rgcexpand.scm 227 */
																															obj_t
																																BgL_arg1573z00_1459;
																															{	/* Rgc/rgcexpand.scm 227 */
																																obj_t
																																	BgL_arg1574z00_1460;
																																obj_t
																																	BgL_arg1575z00_1461;
																																{	/* Rgc/rgcexpand.scm 227 */
																																	obj_t
																																		BgL_arg1577z00_1462;
																																	{	/* Rgc/rgcexpand.scm 227 */
																																		obj_t
																																			BgL_arg1578z00_1463;
																																		obj_t
																																			BgL_arg1579z00_1464;
																																		{	/* Rgc/rgcexpand.scm 227 */
																																			obj_t
																																				BgL_arg1580z00_1465;
																																			{	/* Rgc/rgcexpand.scm 227 */
																																				obj_t
																																					BgL_arg1582z00_1466;
																																				BgL_arg1582z00_1466
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BINT(
																																						((long) 0)), BNIL);
																																				BgL_arg1580z00_1465
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2450z00zz__rgc_expandz00,
																																					BgL_arg1582z00_1466);
																																			}
																																			BgL_arg1578z00_1463
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol2460z00zz__rgc_expandz00,
																																				BgL_arg1580z00_1465);
																																		}
																																		{	/* Rgc/rgcexpand.scm 227 */
																																			obj_t
																																				BgL_arg1583z00_1467;
																																			obj_t
																																				BgL_arg1584z00_1468;
																																			{	/* Rgc/rgcexpand.scm 227 */
																																				obj_t
																																					BgL_arg1587z00_1469;
																																				{	/* Rgc/rgcexpand.scm 227 */
																																					obj_t
																																						BgL_arg1588z00_1470;
																																					{	/* Rgc/rgcexpand.scm 227 */
																																						obj_t
																																							BgL_arg1589z00_1471;
																																						BgL_arg1589z00_1471
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol2440z00zz__rgc_expandz00,
																																							BNIL);
																																						BgL_arg1588z00_1470
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1589z00_1471,
																																							BNIL);
																																					}
																																					BgL_arg1587z00_1469
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2452z00zz__rgc_expandz00,
																																						BgL_arg1588z00_1470);
																																				}
																																				BgL_arg1583z00_1467
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2462z00zz__rgc_expandz00,
																																					BgL_arg1587z00_1469);
																																			}
																																			{	/* Rgc/rgcexpand.scm 227 */
																																				obj_t
																																					BgL_arg1592z00_1472;
																																				{	/* Rgc/rgcexpand.scm 227 */
																																					obj_t
																																						BgL_arg1593z00_1473;
																																					{	/* Rgc/rgcexpand.scm 227 */
																																						obj_t
																																							BgL_arg1596z00_1474;
																																						BgL_arg1596z00_1474
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol2450z00zz__rgc_expandz00,
																																							BNIL);
																																						BgL_arg1593z00_1473
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol2452z00zz__rgc_expandz00,
																																							BgL_arg1596z00_1474);
																																					}
																																					BgL_arg1592z00_1472
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2460z00zz__rgc_expandz00,
																																						BgL_arg1593z00_1473);
																																				}
																																				BgL_arg1584z00_1468
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1592z00_1472,
																																					BNIL);
																																			}
																																			BgL_arg1579z00_1464
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1583z00_1467,
																																				BgL_arg1584z00_1468);
																																		}
																																		BgL_arg1577z00_1462
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1578z00_1463,
																																			BgL_arg1579z00_1464);
																																	}
																																	BgL_arg1574z00_1460
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_symbol2464z00zz__rgc_expandz00,
																																		BgL_arg1577z00_1462);
																																}
																																{	/* Rgc/rgcexpand.scm 228 */
																																	obj_t
																																		BgL_arg1597z00_1475;
																																	obj_t
																																		BgL_arg1598z00_1476;
																																	{	/* Rgc/rgcexpand.scm 228 */
																																		obj_t
																																			BgL_arg1599z00_1477;
																																		{	/* Rgc/rgcexpand.scm 228 */
																																			obj_t
																																				BgL_arg1602z00_1478;
																																			{	/* Rgc/rgcexpand.scm 228 */
																																				obj_t
																																					BgL_arg1603z00_1479;
																																				BgL_arg1603z00_1479
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2452z00zz__rgc_expandz00,
																																					BNIL);
																																				BgL_arg1602z00_1478
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2450z00zz__rgc_expandz00,
																																					BgL_arg1603z00_1479);
																																			}
																																			BgL_arg1599z00_1477
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol2361z00zz__rgc_expandz00,
																																				BgL_arg1602z00_1478);
																																		}
																																		BgL_arg1597z00_1475
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_symbol2513z00zz__rgc_expandz00,
																																			BgL_arg1599z00_1477);
																																	}
																																	{	/* Rgc/rgcexpand.scm 229 */
																																		obj_t
																																			BgL_arg1604z00_1480;
																																		{	/* Rgc/rgcexpand.scm 229 */
																																			obj_t
																																				BgL_arg1605z00_1481;
																																			{	/* Rgc/rgcexpand.scm 229 */
																																				obj_t
																																					BgL_arg1606z00_1482;
																																				{	/* Rgc/rgcexpand.scm 229 */
																																					obj_t
																																						BgL_arg1607z00_1483;
																																					{	/* Rgc/rgcexpand.scm 229 */
																																						obj_t
																																							BgL_arg1608z00_1484;
																																						{	/* Rgc/rgcexpand.scm 229 */
																																							obj_t
																																								BgL_arg1611z00_1485;
																																							{	/* Rgc/rgcexpand.scm 229 */
																																								obj_t
																																									BgL_arg1612z00_1486;
																																								BgL_arg1612z00_1486
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2452z00zz__rgc_expandz00,
																																									BNIL);
																																								BgL_arg1611z00_1485
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2450z00zz__rgc_expandz00,
																																									BgL_arg1612z00_1486);
																																							}
																																							BgL_arg1608z00_1484
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2381z00zz__rgc_expandz00,
																																								BgL_arg1611z00_1485);
																																						}
																																						BgL_arg1607z00_1483
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1608z00_1484,
																																							BNIL);
																																					}
																																					BgL_arg1606z00_1482
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_string2511z00zz__rgc_expandz00,
																																						BgL_arg1607z00_1483);
																																				}
																																				BgL_arg1605z00_1481
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_string2512z00zz__rgc_expandz00,
																																					BgL_arg1606z00_1482);
																																			}
																																			BgL_arg1604z00_1480
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol2476z00zz__rgc_expandz00,
																																				BgL_arg1605z00_1481);
																																		}
																																		BgL_arg1598z00_1476
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1604z00_1480,
																																			BNIL);
																																	}
																																	BgL_arg1575z00_1461
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1597z00_1475,
																																		BgL_arg1598z00_1476);
																																}
																																BgL_arg1573z00_1459
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1574z00_1460,
																																	BgL_arg1575z00_1461);
																															}
																															BgL_arg1570z00_1458
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2478z00zz__rgc_expandz00,
																																BgL_arg1573z00_1459);
																														}
																														BgL_arg1534z00_1430
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1570z00_1458,
																															BNIL);
																													}
																													BgL_arg1530z00_1426 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1533z00_1429,
																														BgL_arg1534z00_1430);
																												}
																												BgL_arg1526z00_1424 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1528z00_1425,
																													BgL_arg1530z00_1426);
																											}
																											BgL_arg1525z00_1423 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2478z00zz__rgc_expandz00,
																												BgL_arg1526z00_1424);
																										}
																										BgL_arg1521z00_1420 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1525z00_1423,
																											BNIL);
																									}
																									BgL_arg1519z00_1418 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1520z00_1419,
																										BgL_arg1521z00_1420);
																								}
																								BgL_arg1516z00_1416 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2364z00zz__rgc_expandz00,
																									BgL_arg1519z00_1418);
																							}
																							{	/* Rgc/rgcexpand.scm 231 */
																								obj_t BgL_arg1613z00_1487;
																								obj_t BgL_arg1614z00_1488;

																								{	/* Rgc/rgcexpand.scm 231 */
																									obj_t BgL_arg1615z00_1489;

																									{	/* Rgc/rgcexpand.scm 231 */
																										obj_t BgL_arg1616z00_1490;
																										obj_t BgL_arg1617z00_1491;

																										BgL_arg1616z00_1490 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2515z00zz__rgc_expandz00,
																											BNIL);
																										{	/* Rgc/rgcexpand.scm 232 */
																											obj_t BgL_arg1618z00_1492;

																											{	/* Rgc/rgcexpand.scm 232 */
																												obj_t
																													BgL_arg1619z00_1493;
																												BgL_arg1619z00_1493 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2361z00zz__rgc_expandz00,
																													BNIL);
																												BgL_arg1618z00_1492 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2517z00zz__rgc_expandz00,
																													BgL_arg1619z00_1493);
																											}
																											BgL_arg1617z00_1491 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1618z00_1492,
																												BNIL);
																										}
																										BgL_arg1615z00_1489 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1616z00_1490,
																											BgL_arg1617z00_1491);
																									}
																									BgL_arg1613z00_1487 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2364z00zz__rgc_expandz00,
																										BgL_arg1615z00_1489);
																								}
																								{	/* Rgc/rgcexpand.scm 234 */
																									obj_t BgL_arg1620z00_1494;
																									obj_t BgL_arg1621z00_1495;

																									{	/* Rgc/rgcexpand.scm 234 */
																										obj_t BgL_arg1623z00_1496;

																										{	/* Rgc/rgcexpand.scm 234 */
																											obj_t BgL_arg1624z00_1497;
																											obj_t BgL_arg1626z00_1498;

																											{	/* Rgc/rgcexpand.scm 234 */
																												obj_t
																													BgL_arg1627z00_1499;
																												{	/* Rgc/rgcexpand.scm 234 */
																													obj_t
																														BgL_arg1628z00_1500;
																													BgL_arg1628z00_1500 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol2452z00zz__rgc_expandz00,
																														BNIL);
																													BgL_arg1627z00_1499 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol2450z00zz__rgc_expandz00,
																														BgL_arg1628z00_1500);
																												}
																												BgL_arg1624z00_1497 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2519z00zz__rgc_expandz00,
																													BgL_arg1627z00_1499);
																											}
																											{	/* Rgc/rgcexpand.scm 235 */
																												obj_t
																													BgL_arg1629z00_1501;
																												{	/* Rgc/rgcexpand.scm 235 */
																													obj_t
																														BgL_arg1630z00_1502;
																													{	/* Rgc/rgcexpand.scm 235 */
																														obj_t
																															BgL_arg1631z00_1503;
																														obj_t
																															BgL_arg1632z00_1504;
																														{	/* Rgc/rgcexpand.scm 235 */
																															obj_t
																																BgL_arg1633z00_1505;
																															{	/* Rgc/rgcexpand.scm 235 */
																																obj_t
																																	BgL_arg1634z00_1506;
																																BgL_arg1634z00_1506
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BINT(((long)
																																			0)),
																																	BNIL);
																																BgL_arg1633z00_1505
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_symbol2452z00zz__rgc_expandz00,
																																	BgL_arg1634z00_1506);
																															}
																															BgL_arg1631z00_1503
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2454z00zz__rgc_expandz00,
																																BgL_arg1633z00_1505);
																														}
																														{	/* Rgc/rgcexpand.scm 236 */
																															obj_t
																																BgL_arg1635z00_1507;
																															obj_t
																																BgL_arg1637z00_1508;
																															{	/* Rgc/rgcexpand.scm 236 */
																																obj_t
																																	BgL_arg1639z00_1509;
																																{	/* Rgc/rgcexpand.scm 236 */
																																	obj_t
																																		BgL_arg1640z00_1510;
																																	obj_t
																																		BgL_arg1641z00_1511;
																																	{	/* Rgc/rgcexpand.scm 236 */
																																		obj_t
																																			BgL_arg1642z00_1512;
																																		{	/* Rgc/rgcexpand.scm 236 */
																																			obj_t
																																				BgL_arg1643z00_1513;
																																			{	/* Rgc/rgcexpand.scm 236 */
																																				obj_t
																																					BgL_arg1644z00_1514;
																																				{	/* Rgc/rgcexpand.scm 236 */
																																					obj_t
																																						BgL_arg1645z00_1515;
																																					{	/* Rgc/rgcexpand.scm 236 */
																																						obj_t
																																							BgL_arg1648z00_1516;
																																						obj_t
																																							BgL_arg1649z00_1517;
																																						BgL_arg1648z00_1516
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol2440z00zz__rgc_expandz00,
																																							BNIL);
																																						BgL_arg1649z00_1517
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol2452z00zz__rgc_expandz00,
																																							BNIL);
																																						BgL_arg1645z00_1515
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1648z00_1516,
																																							BgL_arg1649z00_1517);
																																					}
																																					BgL_arg1644z00_1514
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2456z00zz__rgc_expandz00,
																																						BgL_arg1645z00_1515);
																																				}
																																				BgL_arg1643z00_1513
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1644z00_1514,
																																					BNIL);
																																			}
																																			BgL_arg1642z00_1512
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol2396z00zz__rgc_expandz00,
																																				BgL_arg1643z00_1513);
																																		}
																																		BgL_arg1640z00_1510
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1642z00_1512,
																																			BNIL);
																																	}
																																	{	/* Rgc/rgcexpand.scm 237 */
																																		obj_t
																																			BgL_arg1650z00_1518;
																																		{	/* Rgc/rgcexpand.scm 237 */
																																			obj_t
																																				BgL_arg1651z00_1519;
																																			{	/* Rgc/rgcexpand.scm 237 */
																																				obj_t
																																					BgL_arg1652z00_1520;
																																				obj_t
																																					BgL_arg1654z00_1521;
																																				{	/* Rgc/rgcexpand.scm 237 */
																																					obj_t
																																						BgL_arg1656z00_1522;
																																					{	/* Rgc/rgcexpand.scm 237 */
																																						obj_t
																																							BgL_arg1657z00_1523;
																																						BgL_arg1657z00_1523
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol2450z00zz__rgc_expandz00,
																																							BNIL);
																																						BgL_arg1656z00_1522
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol2396z00zz__rgc_expandz00,
																																							BgL_arg1657z00_1523);
																																					}
																																					BgL_arg1652z00_1520
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2462z00zz__rgc_expandz00,
																																						BgL_arg1656z00_1522);
																																				}
																																				{	/* Rgc/rgcexpand.scm 239 */
																																					obj_t
																																						BgL_arg1658z00_1524;
																																					obj_t
																																						BgL_arg1659z00_1525;
																																					{	/* Rgc/rgcexpand.scm 239 */
																																						obj_t
																																							BgL_arg1660z00_1526;
																																						{	/* Rgc/rgcexpand.scm 239 */
																																							obj_t
																																								BgL_arg1661z00_1527;
																																							{	/* Rgc/rgcexpand.scm 239 */
																																								obj_t
																																									BgL_arg1662z00_1528;
																																								{	/* Rgc/rgcexpand.scm 239 */
																																									obj_t
																																										BgL_arg1663z00_1529;
																																									{	/* Rgc/rgcexpand.scm 239 */
																																										obj_t
																																											BgL_arg1664z00_1530;
																																										{	/* Rgc/rgcexpand.scm 239 */
																																											obj_t
																																												BgL_arg1665z00_1531;
																																											BgL_arg1665z00_1531
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BGl_symbol2452z00zz__rgc_expandz00,
																																												BNIL);
																																											BgL_arg1664z00_1530
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BGl_symbol2450z00zz__rgc_expandz00,
																																												BgL_arg1665z00_1531);
																																										}
																																										BgL_arg1663z00_1529
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BGl_symbol2381z00zz__rgc_expandz00,
																																											BgL_arg1664z00_1530);
																																									}
																																									BgL_arg1662z00_1528
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_arg1663z00_1529,
																																										BNIL);
																																								}
																																								BgL_arg1661z00_1527
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_string2511z00zz__rgc_expandz00,
																																									BgL_arg1662z00_1528);
																																							}
																																							BgL_arg1660z00_1526
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_string2521z00zz__rgc_expandz00,
																																								BgL_arg1661z00_1527);
																																						}
																																						BgL_arg1658z00_1524
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol2476z00zz__rgc_expandz00,
																																							BgL_arg1660z00_1526);
																																					}
																																					{	/* Rgc/rgcexpand.scm 240 */
																																						obj_t
																																							BgL_arg1667z00_1532;
																																						{	/* Rgc/rgcexpand.scm 240 */
																																							obj_t
																																								BgL_arg1668z00_1533;
																																							{	/* Rgc/rgcexpand.scm 240 */
																																								obj_t
																																									BgL_arg1669z00_1534;
																																								{	/* Rgc/rgcexpand.scm 240 */
																																									obj_t
																																										BgL_arg1672z00_1535;
																																									BgL_arg1672z00_1535
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BGl_symbol2396z00zz__rgc_expandz00,
																																										BNIL);
																																									BgL_arg1669z00_1534
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BGl_symbol2450z00zz__rgc_expandz00,
																																										BgL_arg1672z00_1535);
																																								}
																																								BgL_arg1668z00_1533
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2361z00zz__rgc_expandz00,
																																									BgL_arg1669z00_1534);
																																							}
																																							BgL_arg1667z00_1532
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2522z00zz__rgc_expandz00,
																																								BgL_arg1668z00_1533);
																																						}
																																						BgL_arg1659z00_1525
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1667z00_1532,
																																							BNIL);
																																					}
																																					BgL_arg1654z00_1521
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg1658z00_1524,
																																						BgL_arg1659z00_1525);
																																				}
																																				BgL_arg1651z00_1519
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1652z00_1520,
																																					BgL_arg1654z00_1521);
																																			}
																																			BgL_arg1650z00_1518
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol2478z00zz__rgc_expandz00,
																																				BgL_arg1651z00_1519);
																																		}
																																		BgL_arg1641z00_1511
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1650z00_1518,
																																			BNIL);
																																	}
																																	BgL_arg1639z00_1509
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1640z00_1510,
																																		BgL_arg1641z00_1511);
																																}
																																BgL_arg1635z00_1507
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_symbol2355z00zz__rgc_expandz00,
																																	BgL_arg1639z00_1509);
																															}
																															{	/* Rgc/rgcexpand.scm 241 */
																																obj_t
																																	BgL_arg1675z00_1536;
																																{	/* Rgc/rgcexpand.scm 241 */
																																	obj_t
																																		BgL_arg1683z00_1537;
																																	{	/* Rgc/rgcexpand.scm 241 */
																																		obj_t
																																			BgL_arg1684z00_1538;
																																		obj_t
																																			BgL_arg1685z00_1539;
																																		{	/* Rgc/rgcexpand.scm 241 */
																																			obj_t
																																				BgL_arg1686z00_1540;
																																			{	/* Rgc/rgcexpand.scm 241 */
																																				obj_t
																																					BgL_arg1687z00_1541;
																																				obj_t
																																					BgL_arg1688z00_1542;
																																				{	/* Rgc/rgcexpand.scm 241 */
																																					obj_t
																																						BgL_arg1691z00_1543;
																																					{	/* Rgc/rgcexpand.scm 241 */
																																						obj_t
																																							BgL_arg1692z00_1544;
																																						BgL_arg1692z00_1544
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BINT
																																							(((long) 0)), BNIL);
																																						BgL_arg1691z00_1543
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol2450z00zz__rgc_expandz00,
																																							BgL_arg1692z00_1544);
																																					}
																																					BgL_arg1687z00_1541
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2460z00zz__rgc_expandz00,
																																						BgL_arg1691z00_1543);
																																				}
																																				{	/* Rgc/rgcexpand.scm 241 */
																																					obj_t
																																						BgL_arg1693z00_1545;
																																					obj_t
																																						BgL_arg1695z00_1546;
																																					{	/* Rgc/rgcexpand.scm 241 */
																																						obj_t
																																							BgL_arg1696z00_1547;
																																						{	/* Rgc/rgcexpand.scm 241 */
																																							obj_t
																																								BgL_arg1697z00_1548;
																																							{	/* Rgc/rgcexpand.scm 241 */
																																								obj_t
																																									BgL_arg1698z00_1549;
																																								BgL_arg1698z00_1549
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2440z00zz__rgc_expandz00,
																																									BNIL);
																																								BgL_arg1697z00_1548
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg1698z00_1549,
																																									BNIL);
																																							}
																																							BgL_arg1696z00_1547
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2452z00zz__rgc_expandz00,
																																								BgL_arg1697z00_1548);
																																						}
																																						BgL_arg1693z00_1545
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol2462z00zz__rgc_expandz00,
																																							BgL_arg1696z00_1547);
																																					}
																																					{	/* Rgc/rgcexpand.scm 241 */
																																						obj_t
																																							BgL_arg1699z00_1550;
																																						{	/* Rgc/rgcexpand.scm 241 */
																																							obj_t
																																								BgL_arg1700z00_1551;
																																							{	/* Rgc/rgcexpand.scm 241 */
																																								obj_t
																																									BgL_arg1701z00_1552;
																																								BgL_arg1701z00_1552
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2450z00zz__rgc_expandz00,
																																									BNIL);
																																								BgL_arg1700z00_1551
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2452z00zz__rgc_expandz00,
																																									BgL_arg1701z00_1552);
																																							}
																																							BgL_arg1699z00_1550
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2460z00zz__rgc_expandz00,
																																								BgL_arg1700z00_1551);
																																						}
																																						BgL_arg1695z00_1546
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1699z00_1550,
																																							BNIL);
																																					}
																																					BgL_arg1688z00_1542
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg1693z00_1545,
																																						BgL_arg1695z00_1546);
																																				}
																																				BgL_arg1686z00_1540
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1687z00_1541,
																																					BgL_arg1688z00_1542);
																																			}
																																			BgL_arg1684z00_1538
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol2464z00zz__rgc_expandz00,
																																				BgL_arg1686z00_1540);
																																		}
																																		{	/* Rgc/rgcexpand.scm 242 */
																																			obj_t
																																				BgL_arg1702z00_1553;
																																			obj_t
																																				BgL_arg1704z00_1554;
																																			{	/* Rgc/rgcexpand.scm 242 */
																																				obj_t
																																					BgL_arg1707z00_1555;
																																				{	/* Rgc/rgcexpand.scm 242 */
																																					obj_t
																																						BgL_arg1708z00_1556;
																																					{	/* Rgc/rgcexpand.scm 242 */
																																						obj_t
																																							BgL_arg1709z00_1557;
																																						BgL_arg1709z00_1557
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol2452z00zz__rgc_expandz00,
																																							BNIL);
																																						BgL_arg1708z00_1556
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol2450z00zz__rgc_expandz00,
																																							BgL_arg1709z00_1557);
																																					}
																																					BgL_arg1707z00_1555
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2361z00zz__rgc_expandz00,
																																						BgL_arg1708z00_1556);
																																				}
																																				BgL_arg1702z00_1553
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2522z00zz__rgc_expandz00,
																																					BgL_arg1707z00_1555);
																																			}
																																			{	/* Rgc/rgcexpand.scm 244 */
																																				obj_t
																																					BgL_arg1710z00_1558;
																																				{	/* Rgc/rgcexpand.scm 244 */
																																					obj_t
																																						BgL_arg1711z00_1559;
																																					{	/* Rgc/rgcexpand.scm 244 */
																																						obj_t
																																							BgL_arg1712z00_1560;
																																						{	/* Rgc/rgcexpand.scm 244 */
																																							obj_t
																																								BgL_arg1713z00_1561;
																																							{	/* Rgc/rgcexpand.scm 244 */
																																								obj_t
																																									BgL_arg1716z00_1562;
																																								{	/* Rgc/rgcexpand.scm 244 */
																																									obj_t
																																										BgL_arg1717z00_1563;
																																									{	/* Rgc/rgcexpand.scm 244 */
																																										obj_t
																																											BgL_arg1719z00_1564;
																																										BgL_arg1719z00_1564
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BGl_symbol2452z00zz__rgc_expandz00,
																																											BNIL);
																																										BgL_arg1717z00_1563
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BGl_symbol2450z00zz__rgc_expandz00,
																																											BgL_arg1719z00_1564);
																																									}
																																									BgL_arg1716z00_1562
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BGl_symbol2381z00zz__rgc_expandz00,
																																										BgL_arg1717z00_1563);
																																								}
																																								BgL_arg1713z00_1561
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg1716z00_1562,
																																									BNIL);
																																							}
																																							BgL_arg1712z00_1560
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_string2511z00zz__rgc_expandz00,
																																								BgL_arg1713z00_1561);
																																						}
																																						BgL_arg1711z00_1559
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_string2521z00zz__rgc_expandz00,
																																							BgL_arg1712z00_1560);
																																					}
																																					BgL_arg1710z00_1558
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2476z00zz__rgc_expandz00,
																																						BgL_arg1711z00_1559);
																																				}
																																				BgL_arg1704z00_1554
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1710z00_1558,
																																					BNIL);
																																			}
																																			BgL_arg1685z00_1539
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1702z00_1553,
																																				BgL_arg1704z00_1554);
																																		}
																																		BgL_arg1683z00_1537
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1684z00_1538,
																																			BgL_arg1685z00_1539);
																																	}
																																	BgL_arg1675z00_1536
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_symbol2478z00zz__rgc_expandz00,
																																		BgL_arg1683z00_1537);
																																}
																																BgL_arg1637z00_1508
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1675z00_1536,
																																	BNIL);
																															}
																															BgL_arg1632z00_1504
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1635z00_1507,
																																BgL_arg1637z00_1508);
																														}
																														BgL_arg1630z00_1502
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1631z00_1503,
																															BgL_arg1632z00_1504);
																													}
																													BgL_arg1629z00_1501 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol2478z00zz__rgc_expandz00,
																														BgL_arg1630z00_1502);
																												}
																												BgL_arg1626z00_1498 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1629z00_1501,
																													BNIL);
																											}
																											BgL_arg1623z00_1496 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1624z00_1497,
																												BgL_arg1626z00_1498);
																										}
																										BgL_arg1620z00_1494 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2364z00zz__rgc_expandz00,
																											BgL_arg1623z00_1496);
																									}
																									{	/* Rgc/rgcexpand.scm 246 */
																										obj_t BgL_arg1720z00_1565;
																										obj_t BgL_arg1721z00_1566;

																										{	/* Rgc/rgcexpand.scm 246 */
																											obj_t BgL_arg1722z00_1567;

																											{	/* Rgc/rgcexpand.scm 246 */
																												obj_t
																													BgL_arg1723z00_1568;
																												obj_t
																													BgL_arg1725z00_1569;
																												BgL_arg1723z00_1568 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2524z00zz__rgc_expandz00,
																													BNIL);
																												{	/* Rgc/rgcexpand.scm 247 */
																													obj_t
																														BgL_arg1726z00_1570;
																													{	/* Rgc/rgcexpand.scm 247 */
																														obj_t
																															BgL_arg1727z00_1571;
																														BgL_arg1727z00_1571
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2361z00zz__rgc_expandz00,
																															BNIL);
																														BgL_arg1726z00_1570
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2526z00zz__rgc_expandz00,
																															BgL_arg1727z00_1571);
																													}
																													BgL_arg1725z00_1569 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1726z00_1570,
																														BNIL);
																												}
																												BgL_arg1722z00_1567 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1723z00_1568,
																													BgL_arg1725z00_1569);
																											}
																											BgL_arg1720z00_1565 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2364z00zz__rgc_expandz00,
																												BgL_arg1722z00_1567);
																										}
																										{	/* Rgc/rgcexpand.scm 249 */
																											obj_t BgL_arg1728z00_1572;
																											obj_t BgL_arg1729z00_1573;

																											{	/* Rgc/rgcexpand.scm 249 */
																												obj_t
																													BgL_arg1730z00_1574;
																												{	/* Rgc/rgcexpand.scm 249 */
																													obj_t
																														BgL_arg1731z00_1575;
																													obj_t
																														BgL_arg1732z00_1576;
																													{	/* Rgc/rgcexpand.scm 249 */
																														obj_t
																															BgL_arg1733z00_1577;
																														{	/* Rgc/rgcexpand.scm 249 */
																															obj_t
																																BgL_arg1734z00_1578;
																															BgL_arg1734z00_1578
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2452z00zz__rgc_expandz00,
																																BNIL);
																															BgL_arg1733z00_1577
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2450z00zz__rgc_expandz00,
																																BgL_arg1734z00_1578);
																														}
																														BgL_arg1731z00_1575
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2528z00zz__rgc_expandz00,
																															BgL_arg1733z00_1577);
																													}
																													{	/* Rgc/rgcexpand.scm 250 */
																														obj_t
																															BgL_arg1736z00_1579;
																														{	/* Rgc/rgcexpand.scm 250 */
																															obj_t
																																BgL_arg1737z00_1580;
																															{	/* Rgc/rgcexpand.scm 250 */
																																obj_t
																																	BgL_arg1738z00_1581;
																																obj_t
																																	BgL_arg1739z00_1582;
																																{	/* Rgc/rgcexpand.scm 250 */
																																	obj_t
																																		BgL_arg1740z00_1583;
																																	{	/* Rgc/rgcexpand.scm 250 */
																																		obj_t
																																			BgL_arg1741z00_1584;
																																		BgL_arg1741z00_1584
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BINT((
																																					(long)
																																					0)),
																																			BNIL);
																																		BgL_arg1740z00_1583
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_symbol2452z00zz__rgc_expandz00,
																																			BgL_arg1741z00_1584);
																																	}
																																	BgL_arg1738z00_1581
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_symbol2454z00zz__rgc_expandz00,
																																		BgL_arg1740z00_1583);
																																}
																																{	/* Rgc/rgcexpand.scm 251 */
																																	obj_t
																																		BgL_arg1742z00_1585;
																																	obj_t
																																		BgL_arg1743z00_1586;
																																	{	/* Rgc/rgcexpand.scm 251 */
																																		obj_t
																																			BgL_arg1744z00_1587;
																																		{	/* Rgc/rgcexpand.scm 251 */
																																			obj_t
																																				BgL_arg1745z00_1588;
																																			obj_t
																																				BgL_arg1746z00_1589;
																																			{	/* Rgc/rgcexpand.scm 251 */
																																				obj_t
																																					BgL_arg1747z00_1590;
																																				{	/* Rgc/rgcexpand.scm 251 */
																																					obj_t
																																						BgL_arg1748z00_1591;
																																					{	/* Rgc/rgcexpand.scm 251 */
																																						obj_t
																																							BgL_arg1750z00_1592;
																																						{	/* Rgc/rgcexpand.scm 251 */
																																							obj_t
																																								BgL_arg1751z00_1593;
																																							{	/* Rgc/rgcexpand.scm 251 */
																																								obj_t
																																									BgL_arg1752z00_1594;
																																								obj_t
																																									BgL_arg1754z00_1595;
																																								BgL_arg1752z00_1594
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2440z00zz__rgc_expandz00,
																																									BNIL);
																																								BgL_arg1754z00_1595
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2452z00zz__rgc_expandz00,
																																									BNIL);
																																								BgL_arg1751z00_1593
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg1752z00_1594,
																																									BgL_arg1754z00_1595);
																																							}
																																							BgL_arg1750z00_1592
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2456z00zz__rgc_expandz00,
																																								BgL_arg1751z00_1593);
																																						}
																																						BgL_arg1748z00_1591
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1750z00_1592,
																																							BNIL);
																																					}
																																					BgL_arg1747z00_1590
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2396z00zz__rgc_expandz00,
																																						BgL_arg1748z00_1591);
																																				}
																																				BgL_arg1745z00_1588
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1747z00_1590,
																																					BNIL);
																																			}
																																			{	/* Rgc/rgcexpand.scm 252 */
																																				obj_t
																																					BgL_arg1755z00_1596;
																																				{	/* Rgc/rgcexpand.scm 252 */
																																					obj_t
																																						BgL_arg1756z00_1597;
																																					{	/* Rgc/rgcexpand.scm 252 */
																																						obj_t
																																							BgL_arg1757z00_1598;
																																						obj_t
																																							BgL_arg1759z00_1599;
																																						{	/* Rgc/rgcexpand.scm 252 */
																																							obj_t
																																								BgL_arg1760z00_1600;
																																							{	/* Rgc/rgcexpand.scm 252 */
																																								obj_t
																																									BgL_arg1761z00_1601;
																																								BgL_arg1761z00_1601
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2450z00zz__rgc_expandz00,
																																									BNIL);
																																								BgL_arg1760z00_1600
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2396z00zz__rgc_expandz00,
																																									BgL_arg1761z00_1601);
																																							}
																																							BgL_arg1757z00_1598
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2462z00zz__rgc_expandz00,
																																								BgL_arg1760z00_1600);
																																						}
																																						{	/* Rgc/rgcexpand.scm 254 */
																																							obj_t
																																								BgL_arg1762z00_1602;
																																							obj_t
																																								BgL_arg1763z00_1603;
																																							{	/* Rgc/rgcexpand.scm 254 */
																																								obj_t
																																									BgL_arg1764z00_1604;
																																								{	/* Rgc/rgcexpand.scm 254 */
																																									obj_t
																																										BgL_arg1765z00_1605;
																																									{	/* Rgc/rgcexpand.scm 254 */
																																										obj_t
																																											BgL_arg1766z00_1606;
																																										{	/* Rgc/rgcexpand.scm 254 */
																																											obj_t
																																												BgL_arg1768z00_1607;
																																											{	/* Rgc/rgcexpand.scm 254 */
																																												obj_t
																																													BgL_arg1769z00_1608;
																																												{	/* Rgc/rgcexpand.scm 254 */
																																													obj_t
																																														BgL_arg1770z00_1609;
																																													BgL_arg1770z00_1609
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BGl_symbol2452z00zz__rgc_expandz00,
																																														BNIL);
																																													BgL_arg1769z00_1608
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BGl_symbol2450z00zz__rgc_expandz00,
																																														BgL_arg1770z00_1609);
																																												}
																																												BgL_arg1768z00_1607
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BGl_symbol2381z00zz__rgc_expandz00,
																																													BgL_arg1769z00_1608);
																																											}
																																											BgL_arg1766z00_1606
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_arg1768z00_1607,
																																												BNIL);
																																										}
																																										BgL_arg1765z00_1605
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BGl_string2511z00zz__rgc_expandz00,
																																											BgL_arg1766z00_1606);
																																									}
																																									BgL_arg1764z00_1604
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BGl_string2530z00zz__rgc_expandz00,
																																										BgL_arg1765z00_1605);
																																								}
																																								BgL_arg1762z00_1602
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2476z00zz__rgc_expandz00,
																																									BgL_arg1764z00_1604);
																																							}
																																							{	/* Rgc/rgcexpand.scm 255 */
																																								obj_t
																																									BgL_arg1771z00_1610;
																																								{	/* Rgc/rgcexpand.scm 255 */
																																									obj_t
																																										BgL_arg1772z00_1611;
																																									{	/* Rgc/rgcexpand.scm 255 */
																																										obj_t
																																											BgL_arg1773z00_1612;
																																										{	/* Rgc/rgcexpand.scm 255 */
																																											obj_t
																																												BgL_arg1774z00_1613;
																																											BgL_arg1774z00_1613
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BGl_symbol2396z00zz__rgc_expandz00,
																																												BNIL);
																																											BgL_arg1773z00_1612
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BGl_symbol2450z00zz__rgc_expandz00,
																																												BgL_arg1774z00_1613);
																																										}
																																										BgL_arg1772z00_1611
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BGl_symbol2361z00zz__rgc_expandz00,
																																											BgL_arg1773z00_1612);
																																									}
																																									BgL_arg1771z00_1610
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BGl_symbol2531z00zz__rgc_expandz00,
																																										BgL_arg1772z00_1611);
																																								}
																																								BgL_arg1763z00_1603
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg1771z00_1610,
																																									BNIL);
																																							}
																																							BgL_arg1759z00_1599
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_arg1762z00_1602,
																																								BgL_arg1763z00_1603);
																																						}
																																						BgL_arg1756z00_1597
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1757z00_1598,
																																							BgL_arg1759z00_1599);
																																					}
																																					BgL_arg1755z00_1596
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2478z00zz__rgc_expandz00,
																																						BgL_arg1756z00_1597);
																																				}
																																				BgL_arg1746z00_1589
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1755z00_1596,
																																					BNIL);
																																			}
																																			BgL_arg1744z00_1587
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1745z00_1588,
																																				BgL_arg1746z00_1589);
																																		}
																																		BgL_arg1742z00_1585
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_symbol2355z00zz__rgc_expandz00,
																																			BgL_arg1744z00_1587);
																																	}
																																	{	/* Rgc/rgcexpand.scm 256 */
																																		obj_t
																																			BgL_arg1775z00_1614;
																																		{	/* Rgc/rgcexpand.scm 256 */
																																			obj_t
																																				BgL_arg1776z00_1615;
																																			{	/* Rgc/rgcexpand.scm 256 */
																																				obj_t
																																					BgL_arg1777z00_1616;
																																				obj_t
																																					BgL_arg1778z00_1617;
																																				{	/* Rgc/rgcexpand.scm 256 */
																																					obj_t
																																						BgL_arg1779z00_1618;
																																					{	/* Rgc/rgcexpand.scm 256 */
																																						obj_t
																																							BgL_arg1780z00_1619;
																																						obj_t
																																							BgL_arg1781z00_1620;
																																						{	/* Rgc/rgcexpand.scm 256 */
																																							obj_t
																																								BgL_arg1782z00_1621;
																																							{	/* Rgc/rgcexpand.scm 256 */
																																								obj_t
																																									BgL_arg1783z00_1622;
																																								BgL_arg1783z00_1622
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BINT
																																									(((long) 0)), BNIL);
																																								BgL_arg1782z00_1621
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2450z00zz__rgc_expandz00,
																																									BgL_arg1783z00_1622);
																																							}
																																							BgL_arg1780z00_1619
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2460z00zz__rgc_expandz00,
																																								BgL_arg1782z00_1621);
																																						}
																																						{	/* Rgc/rgcexpand.scm 256 */
																																							obj_t
																																								BgL_arg1784z00_1623;
																																							obj_t
																																								BgL_arg1786z00_1624;
																																							{	/* Rgc/rgcexpand.scm 256 */
																																								obj_t
																																									BgL_arg1787z00_1625;
																																								{	/* Rgc/rgcexpand.scm 256 */
																																									obj_t
																																										BgL_arg1788z00_1626;
																																									{	/* Rgc/rgcexpand.scm 256 */
																																										obj_t
																																											BgL_arg1789z00_1627;
																																										BgL_arg1789z00_1627
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BGl_symbol2440z00zz__rgc_expandz00,
																																											BNIL);
																																										BgL_arg1788z00_1626
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_arg1789z00_1627,
																																											BNIL);
																																									}
																																									BgL_arg1787z00_1625
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BGl_symbol2452z00zz__rgc_expandz00,
																																										BgL_arg1788z00_1626);
																																								}
																																								BgL_arg1784z00_1623
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2462z00zz__rgc_expandz00,
																																									BgL_arg1787z00_1625);
																																							}
																																							{	/* Rgc/rgcexpand.scm 256 */
																																								obj_t
																																									BgL_arg1790z00_1628;
																																								{	/* Rgc/rgcexpand.scm 256 */
																																									obj_t
																																										BgL_arg1791z00_1629;
																																									{	/* Rgc/rgcexpand.scm 256 */
																																										obj_t
																																											BgL_arg1792z00_1630;
																																										BgL_arg1792z00_1630
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BGl_symbol2450z00zz__rgc_expandz00,
																																											BNIL);
																																										BgL_arg1791z00_1629
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BGl_symbol2452z00zz__rgc_expandz00,
																																											BgL_arg1792z00_1630);
																																									}
																																									BgL_arg1790z00_1628
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BGl_symbol2460z00zz__rgc_expandz00,
																																										BgL_arg1791z00_1629);
																																								}
																																								BgL_arg1786z00_1624
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg1790z00_1628,
																																									BNIL);
																																							}
																																							BgL_arg1781z00_1620
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_arg1784z00_1623,
																																								BgL_arg1786z00_1624);
																																						}
																																						BgL_arg1779z00_1618
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1780z00_1619,
																																							BgL_arg1781z00_1620);
																																					}
																																					BgL_arg1777z00_1616
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2464z00zz__rgc_expandz00,
																																						BgL_arg1779z00_1618);
																																				}
																																				{	/* Rgc/rgcexpand.scm 257 */
																																					obj_t
																																						BgL_arg1794z00_1631;
																																					obj_t
																																						BgL_arg1795z00_1632;
																																					{	/* Rgc/rgcexpand.scm 257 */
																																						obj_t
																																							BgL_arg1796z00_1633;
																																						{	/* Rgc/rgcexpand.scm 257 */
																																							obj_t
																																								BgL_arg1797z00_1634;
																																							{	/* Rgc/rgcexpand.scm 257 */
																																								obj_t
																																									BgL_arg1798z00_1635;
																																								BgL_arg1798z00_1635
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2452z00zz__rgc_expandz00,
																																									BNIL);
																																								BgL_arg1797z00_1634
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2450z00zz__rgc_expandz00,
																																									BgL_arg1798z00_1635);
																																							}
																																							BgL_arg1796z00_1633
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2361z00zz__rgc_expandz00,
																																								BgL_arg1797z00_1634);
																																						}
																																						BgL_arg1794z00_1631
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol2531z00zz__rgc_expandz00,
																																							BgL_arg1796z00_1633);
																																					}
																																					{	/* Rgc/rgcexpand.scm 259 */
																																						obj_t
																																							BgL_arg1799z00_1636;
																																						{	/* Rgc/rgcexpand.scm 259 */
																																							obj_t
																																								BgL_arg1800z00_1637;
																																							{	/* Rgc/rgcexpand.scm 259 */
																																								obj_t
																																									BgL_arg1801z00_1638;
																																								{	/* Rgc/rgcexpand.scm 259 */
																																									obj_t
																																										BgL_arg1803z00_1639;
																																									{	/* Rgc/rgcexpand.scm 259 */
																																										obj_t
																																											BgL_arg1805z00_1640;
																																										{	/* Rgc/rgcexpand.scm 259 */
																																											obj_t
																																												BgL_arg1806z00_1641;
																																											{	/* Rgc/rgcexpand.scm 259 */
																																												obj_t
																																													BgL_arg1807z00_1642;
																																												BgL_arg1807z00_1642
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BGl_symbol2452z00zz__rgc_expandz00,
																																													BNIL);
																																												BgL_arg1806z00_1641
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BGl_symbol2450z00zz__rgc_expandz00,
																																													BgL_arg1807z00_1642);
																																											}
																																											BgL_arg1805z00_1640
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BGl_symbol2381z00zz__rgc_expandz00,
																																												BgL_arg1806z00_1641);
																																										}
																																										BgL_arg1803z00_1639
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_arg1805z00_1640,
																																											BNIL);
																																									}
																																									BgL_arg1801z00_1638
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BGl_string2511z00zz__rgc_expandz00,
																																										BgL_arg1803z00_1639);
																																								}
																																								BgL_arg1800z00_1637
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_string2530z00zz__rgc_expandz00,
																																									BgL_arg1801z00_1638);
																																							}
																																							BgL_arg1799z00_1636
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2476z00zz__rgc_expandz00,
																																								BgL_arg1800z00_1637);
																																						}
																																						BgL_arg1795z00_1632
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1799z00_1636,
																																							BNIL);
																																					}
																																					BgL_arg1778z00_1617
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg1794z00_1631,
																																						BgL_arg1795z00_1632);
																																				}
																																				BgL_arg1776z00_1615
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1777z00_1616,
																																					BgL_arg1778z00_1617);
																																			}
																																			BgL_arg1775z00_1614
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol2478z00zz__rgc_expandz00,
																																				BgL_arg1776z00_1615);
																																		}
																																		BgL_arg1743z00_1586
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1775z00_1614,
																																			BNIL);
																																	}
																																	BgL_arg1739z00_1582
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1742z00_1585,
																																		BgL_arg1743z00_1586);
																																}
																																BgL_arg1737z00_1580
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1738z00_1581,
																																	BgL_arg1739z00_1582);
																															}
																															BgL_arg1736z00_1579
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2478z00zz__rgc_expandz00,
																																BgL_arg1737z00_1580);
																														}
																														BgL_arg1732z00_1576
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1736z00_1579,
																															BNIL);
																													}
																													BgL_arg1730z00_1574 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1731z00_1575,
																														BgL_arg1732z00_1576);
																												}
																												BgL_arg1728z00_1572 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2364z00zz__rgc_expandz00,
																													BgL_arg1730z00_1574);
																											}
																											{	/* Rgc/rgcexpand.scm 261 */
																												obj_t
																													BgL_arg1808z00_1643;
																												obj_t
																													BgL_arg1809z00_1644;
																												{	/* Rgc/rgcexpand.scm 261 */
																													obj_t
																														BgL_arg1810z00_1645;
																													{	/* Rgc/rgcexpand.scm 261 */
																														obj_t
																															BgL_arg1811z00_1646;
																														obj_t
																															BgL_arg1812z00_1647;
																														BgL_arg1811z00_1646
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2533z00zz__rgc_expandz00,
																															BNIL);
																														{	/* Rgc/rgcexpand.scm 262 */
																															obj_t
																																BgL_arg1813z00_1648;
																															{	/* Rgc/rgcexpand.scm 262 */
																																obj_t
																																	BgL_arg1814z00_1649;
																																BgL_arg1814z00_1649
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_symbol2361z00zz__rgc_expandz00,
																																	BNIL);
																																BgL_arg1813z00_1648
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_symbol2535z00zz__rgc_expandz00,
																																	BgL_arg1814z00_1649);
																															}
																															BgL_arg1812z00_1647
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1813z00_1648,
																																BNIL);
																														}
																														BgL_arg1810z00_1645
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1811z00_1646,
																															BgL_arg1812z00_1647);
																													}
																													BgL_arg1808z00_1643 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol2364z00zz__rgc_expandz00,
																														BgL_arg1810z00_1645);
																												}
																												{	/* Rgc/rgcexpand.scm 264 */
																													obj_t
																														BgL_arg1815z00_1650;
																													obj_t
																														BgL_arg1816z00_1651;
																													{	/* Rgc/rgcexpand.scm 264 */
																														obj_t
																															BgL_arg1817z00_1652;
																														{	/* Rgc/rgcexpand.scm 264 */
																															obj_t
																																BgL_arg1818z00_1653;
																															obj_t
																																BgL_arg1819z00_1654;
																															BgL_arg1818z00_1653
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2537z00zz__rgc_expandz00,
																																BNIL);
																															{	/* Rgc/rgcexpand.scm 265 */
																																obj_t
																																	BgL_arg1820z00_1655;
																																{	/* Rgc/rgcexpand.scm 265 */
																																	obj_t
																																		BgL_arg1821z00_1656;
																																	BgL_arg1821z00_1656
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_symbol2361z00zz__rgc_expandz00,
																																		BNIL);
																																	BgL_arg1820z00_1655
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_symbol2539z00zz__rgc_expandz00,
																																		BgL_arg1821z00_1656);
																																}
																																BgL_arg1819z00_1654
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1820z00_1655,
																																	BNIL);
																															}
																															BgL_arg1817z00_1652
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1818z00_1653,
																																BgL_arg1819z00_1654);
																														}
																														BgL_arg1815z00_1650
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2364z00zz__rgc_expandz00,
																															BgL_arg1817z00_1652);
																													}
																													{	/* Rgc/rgcexpand.scm 267 */
																														obj_t
																															BgL_arg1822z00_1657;
																														obj_t
																															BgL_arg1823z00_1658;
																														{	/* Rgc/rgcexpand.scm 267 */
																															obj_t
																																BgL_arg1824z00_1659;
																															{	/* Rgc/rgcexpand.scm 267 */
																																obj_t
																																	BgL_arg1825z00_1660;
																																obj_t
																																	BgL_arg1826z00_1661;
																																BgL_arg1825z00_1660
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_symbol2541z00zz__rgc_expandz00,
																																	BNIL);
																																{	/* Rgc/rgcexpand.scm 268 */
																																	obj_t
																																		BgL_arg1827z00_1662;
																																	{	/* Rgc/rgcexpand.scm 268 */
																																		obj_t
																																			BgL_arg1828z00_1663;
																																		BgL_arg1828z00_1663
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_symbol2361z00zz__rgc_expandz00,
																																			BNIL);
																																		BgL_arg1827z00_1662
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_symbol2543z00zz__rgc_expandz00,
																																			BgL_arg1828z00_1663);
																																	}
																																	BgL_arg1826z00_1661
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1827z00_1662,
																																		BNIL);
																																}
																																BgL_arg1824z00_1659
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1825z00_1660,
																																	BgL_arg1826z00_1661);
																															}
																															BgL_arg1822z00_1657
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2364z00zz__rgc_expandz00,
																																BgL_arg1824z00_1659);
																														}
																														{	/* Rgc/rgcexpand.scm 270 */
																															obj_t
																																BgL_arg1829z00_1664;
																															obj_t
																																BgL_arg1830z00_1665;
																															{	/* Rgc/rgcexpand.scm 270 */
																																obj_t
																																	BgL_arg1831z00_1666;
																																{	/* Rgc/rgcexpand.scm 270 */
																																	obj_t
																																		BgL_arg1832z00_1667;
																																	obj_t
																																		BgL_arg1833z00_1668;
																																	BgL_arg1832z00_1667
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_symbol2545z00zz__rgc_expandz00,
																																		BNIL);
																																	{	/* Rgc/rgcexpand.scm 271 */
																																		obj_t
																																			BgL_arg1835z00_1669;
																																		{	/* Rgc/rgcexpand.scm 271 */
																																			obj_t
																																				BgL_arg1836z00_1670;
																																			{	/* Rgc/rgcexpand.scm 271 */
																																				obj_t
																																					BgL_arg1838z00_1671;
																																				obj_t
																																					BgL_arg1840z00_1672;
																																				{	/* Rgc/rgcexpand.scm 271 */
																																					obj_t
																																						BgL_arg1841z00_1673;
																																					{	/* Rgc/rgcexpand.scm 271 */
																																						obj_t
																																							BgL_arg1842z00_1674;
																																						obj_t
																																							BgL_arg1845z00_1675;
																																						{	/* Rgc/rgcexpand.scm 271 */
																																							obj_t
																																								BgL_arg1846z00_1676;
																																							BgL_arg1846z00_1676
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2361z00zz__rgc_expandz00,
																																								BNIL);
																																							BgL_arg1842z00_1674
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2491z00zz__rgc_expandz00,
																																								BgL_arg1846z00_1676);
																																						}
																																						BgL_arg1845z00_1675
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BINT
																																							(((long) 0)), BNIL);
																																						BgL_arg1841z00_1673
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1842z00_1674,
																																							BgL_arg1845z00_1675);
																																					}
																																					BgL_arg1838z00_1671
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2547z00zz__rgc_expandz00,
																																						BgL_arg1841z00_1673);
																																				}
																																				{	/* Rgc/rgcexpand.scm 273 */
																																					obj_t
																																						BgL_arg1847z00_1677;
																																					obj_t
																																						BgL_arg1848z00_1678;
																																					BgL_arg1847z00_1677
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2549z00zz__rgc_expandz00,
																																						BNIL);
																																					{	/* Rgc/rgcexpand.scm 274 */
																																						obj_t
																																							BgL_arg1850z00_1679;
																																						{	/* Rgc/rgcexpand.scm 274 */
																																							obj_t
																																								BgL_arg1851z00_1680;
																																							BgL_arg1851z00_1680
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2361z00zz__rgc_expandz00,
																																								BNIL);
																																							BgL_arg1850z00_1679
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2424z00zz__rgc_expandz00,
																																								BgL_arg1851z00_1680);
																																						}
																																						BgL_arg1848z00_1678
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1850z00_1679,
																																							BNIL);
																																					}
																																					BgL_arg1840z00_1672
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg1847z00_1677,
																																						BgL_arg1848z00_1678);
																																				}
																																				BgL_arg1836z00_1670
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1838z00_1671,
																																					BgL_arg1840z00_1672);
																																			}
																																			BgL_arg1835z00_1669
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol2478z00zz__rgc_expandz00,
																																				BgL_arg1836z00_1670);
																																		}
																																		BgL_arg1833z00_1668
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1835z00_1669,
																																			BNIL);
																																	}
																																	BgL_arg1831z00_1666
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1832z00_1667,
																																		BgL_arg1833z00_1668);
																																}
																																BgL_arg1829z00_1664
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_symbol2364z00zz__rgc_expandz00,
																																	BgL_arg1831z00_1666);
																															}
																															{	/* Rgc/rgcexpand.scm 276 */
																																obj_t
																																	BgL_arg1852z00_1681;
																																obj_t
																																	BgL_arg1853z00_1682;
																																{	/* Rgc/rgcexpand.scm 276 */
																																	obj_t
																																		BgL_arg1855z00_1683;
																																	{	/* Rgc/rgcexpand.scm 276 */
																																		obj_t
																																			BgL_arg1856z00_1684;
																																		obj_t
																																			BgL_arg1857z00_1685;
																																		BgL_arg1856z00_1684
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_symbol2551z00zz__rgc_expandz00,
																																			BNIL);
																																		BgL_arg1857z00_1685
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_symbol2359z00zz__rgc_expandz00,
																																			BNIL);
																																		BgL_arg1855z00_1683
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1856z00_1684,
																																			BgL_arg1857z00_1685);
																																	}
																																	BgL_arg1852z00_1681
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_symbol2364z00zz__rgc_expandz00,
																																		BgL_arg1855z00_1683);
																																}
																																{	/* Rgc/rgcexpand.scm 279 */
																																	obj_t
																																		BgL_arg1858z00_1686;
																																	obj_t
																																		BgL_arg1859z00_1687;
																																	{	/* Rgc/rgcexpand.scm 279 */
																																		obj_t
																																			BgL_arg1861z00_1688;
																																		{	/* Rgc/rgcexpand.scm 279 */
																																			obj_t
																																				BgL_arg1862z00_1689;
																																			obj_t
																																				BgL_arg1863z00_1690;
																																			{	/* Rgc/rgcexpand.scm 279 */
																																				obj_t
																																					BgL_arg1865z00_1691;
																																				BgL_arg1865z00_1691
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2553z00zz__rgc_expandz00,
																																					BNIL);
																																				BgL_arg1862z00_1689
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2555z00zz__rgc_expandz00,
																																					BgL_arg1865z00_1691);
																																			}
																																			{	/* Rgc/rgcexpand.scm 280 */
																																				obj_t
																																					BgL_arg1866z00_1692;
																																				{	/* Rgc/rgcexpand.scm 280 */
																																					obj_t
																																						BgL_arg1868z00_1693;
																																					{	/* Rgc/rgcexpand.scm 280 */
																																						obj_t
																																							BgL_arg1870z00_1694;
																																						BgL_arg1870z00_1694
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol2553z00zz__rgc_expandz00,
																																							BNIL);
																																						BgL_arg1868z00_1693
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol2359z00zz__rgc_expandz00,
																																							BgL_arg1870z00_1694);
																																					}
																																					BgL_arg1866z00_1692
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2557z00zz__rgc_expandz00,
																																						BgL_arg1868z00_1693);
																																				}
																																				BgL_arg1863z00_1690
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1866z00_1692,
																																					BNIL);
																																			}
																																			BgL_arg1861z00_1688
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1862z00_1689,
																																				BgL_arg1863z00_1690);
																																		}
																																		BgL_arg1858z00_1686
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_symbol2364z00zz__rgc_expandz00,
																																			BgL_arg1861z00_1688);
																																	}
																																	{	/* Rgc/rgcexpand.scm 282 */
																																		obj_t
																																			BgL_arg1871z00_1695;
																																		obj_t
																																			BgL_arg1872z00_1696;
																																		{	/* Rgc/rgcexpand.scm 282 */
																																			obj_t
																																				BgL_arg1873z00_1697;
																																			{	/* Rgc/rgcexpand.scm 282 */
																																				obj_t
																																					BgL_arg1874z00_1698;
																																				obj_t
																																					BgL_arg1876z00_1699;
																																				{	/* Rgc/rgcexpand.scm 282 */
																																					obj_t
																																						BgL_arg1877z00_1700;
																																					BgL_arg1877z00_1700
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2553z00zz__rgc_expandz00,
																																						BNIL);
																																					BgL_arg1874z00_1698
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2559z00zz__rgc_expandz00,
																																						BgL_arg1877z00_1700);
																																				}
																																				{	/* Rgc/rgcexpand.scm 283 */
																																					obj_t
																																						BgL_arg1878z00_1701;
																																					{	/* Rgc/rgcexpand.scm 283 */
																																						obj_t
																																							BgL_arg1879z00_1702;
																																						{	/* Rgc/rgcexpand.scm 283 */
																																							obj_t
																																								BgL_arg1881z00_1703;
																																							BgL_arg1881z00_1703
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2553z00zz__rgc_expandz00,
																																								BNIL);
																																							BgL_arg1879z00_1702
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2359z00zz__rgc_expandz00,
																																								BgL_arg1881z00_1703);
																																						}
																																						BgL_arg1878z00_1701
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol2376z00zz__rgc_expandz00,
																																							BgL_arg1879z00_1702);
																																					}
																																					BgL_arg1876z00_1699
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg1878z00_1701,
																																						BNIL);
																																				}
																																				BgL_arg1873z00_1697
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1874z00_1698,
																																					BgL_arg1876z00_1699);
																																			}
																																			BgL_arg1871z00_1695
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol2364z00zz__rgc_expandz00,
																																				BgL_arg1873z00_1697);
																																		}
																																		{	/* Rgc/rgcexpand.scm 284 */
																																			obj_t
																																				BgL_arg1882z00_1704;
																																			obj_t
																																				BgL_arg1883z00_1705;
																																			{	/* Rgc/rgcexpand.scm 284 */
																																				obj_t
																																					BgL_arg1884z00_1706;
																																				{	/* Rgc/rgcexpand.scm 284 */
																																					obj_t
																																						BgL_arg1885z00_1707;
																																					obj_t
																																						BgL_arg1886z00_1708;
																																					BgL_arg1885z00_1707
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2561z00zz__rgc_expandz00,
																																						BGl_symbol2553z00zz__rgc_expandz00);
																																					{	/* Rgc/rgcexpand.scm 285 */
																																						obj_t
																																							BgL_arg1887z00_1709;
																																						{	/* Rgc/rgcexpand.scm 285 */
																																							obj_t
																																								BgL_arg1888z00_1710;
																																							{	/* Rgc/rgcexpand.scm 285 */
																																								obj_t
																																									BgL_arg1889z00_1711;
																																								obj_t
																																									BgL_arg1891z00_1712;
																																								{	/* Rgc/rgcexpand.scm 285 */
																																									obj_t
																																										BgL_arg1892z00_1713;
																																									BgL_arg1892z00_1713
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BGl_symbol2553z00zz__rgc_expandz00,
																																										BNIL);
																																									BgL_arg1889z00_1711
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BGl_symbol2563z00zz__rgc_expandz00,
																																										BgL_arg1892z00_1713);
																																								}
																																								{	/* Rgc/rgcexpand.scm 286 */
																																									obj_t
																																										BgL_arg1893z00_1714;
																																									obj_t
																																										BgL_arg1895z00_1715;
																																									{	/* Rgc/rgcexpand.scm 286 */
																																										obj_t
																																											BgL_arg1896z00_1716;
																																										{	/* Rgc/rgcexpand.scm 286 */
																																											obj_t
																																												BgL_arg1897z00_1717;
																																											{	/* Rgc/rgcexpand.scm 286 */
																																												obj_t
																																													BgL_arg1898z00_1718;
																																												{	/* Rgc/rgcexpand.scm 286 */
																																													obj_t
																																														BgL_arg1901z00_1719;
																																													BgL_arg1901z00_1719
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BGl_symbol2553z00zz__rgc_expandz00,
																																														BNIL);
																																													BgL_arg1898z00_1718
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BGl_symbol2565z00zz__rgc_expandz00,
																																														BgL_arg1901z00_1719);
																																												}
																																												BgL_arg1897z00_1717
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BgL_arg1898z00_1718,
																																													BNIL);
																																											}
																																											BgL_arg1896z00_1716
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BGl_symbol2359z00zz__rgc_expandz00,
																																												BgL_arg1897z00_1717);
																																										}
																																										BgL_arg1893z00_1714
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BGl_symbol2376z00zz__rgc_expandz00,
																																											BgL_arg1896z00_1716);
																																									}
																																									{	/* Rgc/rgcexpand.scm 287 */
																																										obj_t
																																											BgL_arg1902z00_1720;
																																										{	/* Rgc/rgcexpand.scm 287 */
																																											obj_t
																																												BgL_arg1903z00_1721;
																																											{	/* Rgc/rgcexpand.scm 287 */
																																												obj_t
																																													BgL_arg1904z00_1722;
																																												BgL_arg1904z00_1722
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BUNSPEC,
																																													BNIL);
																																												BgL_arg1903z00_1721
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BGl_symbol2359z00zz__rgc_expandz00,
																																													BgL_arg1904z00_1722);
																																											}
																																											BgL_arg1902z00_1720
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BGl_symbol2376z00zz__rgc_expandz00,
																																												BgL_arg1903z00_1721);
																																										}
																																										BgL_arg1895z00_1715
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_arg1902z00_1720,
																																											BNIL);
																																									}
																																									BgL_arg1891z00_1712
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_arg1893z00_1714,
																																										BgL_arg1895z00_1715);
																																								}
																																								BgL_arg1888z00_1710
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg1889z00_1711,
																																									BgL_arg1891z00_1712);
																																							}
																																							BgL_arg1887z00_1709
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2478z00zz__rgc_expandz00,
																																								BgL_arg1888z00_1710);
																																						}
																																						BgL_arg1886z00_1708
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1887z00_1709,
																																							BNIL);
																																					}
																																					BgL_arg1884z00_1706
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg1885z00_1707,
																																						BgL_arg1886z00_1708);
																																				}
																																				BgL_arg1882z00_1704
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2364z00zz__rgc_expandz00,
																																					BgL_arg1884z00_1706);
																																			}
																																			{	/* Rgc/rgcexpand.scm 291 */
																																				obj_t
																																					BgL_arg1905z00_1723;
																																				{	/* Rgc/rgcexpand.scm 291 */
																																					obj_t
																																						BgL_arg1906z00_1724;
																																					obj_t
																																						BgL_arg1907z00_1725;
																																					{	/* Rgc/rgcexpand.scm 291 */
																																						obj_t
																																							BgL_arg1908z00_1726;
																																						{	/* Rgc/rgcexpand.scm 291 */
																																							obj_t
																																								BgL_arg1909z00_1727;
																																							obj_t
																																								BgL_arg1910z00_1728;
																																							BgL_arg1909z00_1727
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2567z00zz__rgc_expandz00,
																																								BNIL);
																																							{	/* Rgc/rgcexpand.scm 292 */
																																								obj_t
																																									BgL_arg1911z00_1729;
																																								obj_t
																																									BgL_arg1912z00_1730;
																																								{	/* Rgc/rgcexpand.scm 292 */
																																									obj_t
																																										BgL_arg1913z00_1731;
																																									BgL_arg1913z00_1731
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BGl_symbol2361z00zz__rgc_expandz00,
																																										BNIL);
																																									BgL_arg1911z00_1729
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BGl_symbol2569z00zz__rgc_expandz00,
																																										BgL_arg1913z00_1731);
																																								}
																																								{	/* Rgc/rgcexpand.scm 293 */
																																									obj_t
																																										BgL_arg1914z00_1732;
																																									obj_t
																																										BgL_arg1915z00_1733;
																																									if (CBOOL(BgL_submatchzf3zf3_11))
																																										{	/* Rgc/rgcexpand.scm 294 */
																																											obj_t
																																												BgL_list1916z00_1734;
																																											BgL_list1916z00_1734
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BGl_list2571z00zz__rgc_expandz00,
																																												BNIL);
																																											BgL_arg1914z00_1732
																																												=
																																												BgL_list1916z00_1734;
																																										}
																																									else
																																										{	/* Rgc/rgcexpand.scm 293 */
																																											BgL_arg1914z00_1732
																																												=
																																												BNIL;
																																										}
																																									{	/* Rgc/rgcexpand.scm 296 */
																																										obj_t
																																											BgL_arg1917z00_1735;
																																										{	/* Rgc/rgcexpand.scm 296 */
																																											obj_t
																																												BgL_arg1918z00_1736;
																																											{	/* Rgc/rgcexpand.scm 296 */
																																												obj_t
																																													BgL_arg1919z00_1737;
																																												obj_t
																																													BgL_arg1920z00_1738;
																																												{	/* Rgc/rgcexpand.scm 296 */
																																													obj_t
																																														BgL_arg1921z00_1739;
																																													{	/* Rgc/rgcexpand.scm 296 */
																																														obj_t
																																															BgL_arg1923z00_1740;
																																														{	/* Rgc/rgcexpand.scm 296 */
																																															obj_t
																																																BgL_arg1924z00_1741;
																																															{	/* Rgc/rgcexpand.scm 296 */
																																																obj_t
																																																	BgL_arg1925z00_1742;
																																																obj_t
																																																	BgL_arg1926z00_1743;
																																																BgL_arg1925z00_1742
																																																	=
																																																	BGl_statezd2namezd2zz__rgc_dfaz00
																																																	(BGl_getzd2initialzd2statez00zz__rgc_dfaz00
																																																	());
																																																{	/* Rgc/rgcexpand.scm 299 */
																																																	obj_t
																																																		BgL_arg1928z00_1745;
																																																	{	/* Rgc/rgcexpand.scm 299 */
																																																		obj_t
																																																			BgL_arg1929z00_1746;
																																																		{	/* Rgc/rgcexpand.scm 299 */
																																																			obj_t
																																																				BgL_arg1930z00_1747;
																																																			obj_t
																																																				BgL_arg1931z00_1748;
																																																			{	/* Rgc/rgcexpand.scm 299 */
																																																				obj_t
																																																					BgL_arg1932z00_1749;
																																																				BgL_arg1932z00_1749
																																																					=
																																																					MAKE_YOUNG_PAIR
																																																					(BGl_symbol2361z00zz__rgc_expandz00,
																																																					BNIL);
																																																				BgL_arg1930z00_1747
																																																					=
																																																					MAKE_YOUNG_PAIR
																																																					(BGl_symbol2572z00zz__rgc_expandz00,
																																																					BgL_arg1932z00_1749);
																																																			}
																																																			{	/* Rgc/rgcexpand.scm 300 */
																																																				obj_t
																																																					BgL_arg1933z00_1750;
																																																				{	/* Rgc/rgcexpand.scm 300 */
																																																					obj_t
																																																						BgL_arg1934z00_1751;
																																																					BgL_arg1934z00_1751
																																																						=
																																																						MAKE_YOUNG_PAIR
																																																						(BGl_symbol2361z00zz__rgc_expandz00,
																																																						BNIL);
																																																					BgL_arg1933z00_1750
																																																						=
																																																						MAKE_YOUNG_PAIR
																																																						(BGl_symbol2574z00zz__rgc_expandz00,
																																																						BgL_arg1934z00_1751);
																																																				}
																																																				BgL_arg1931z00_1748
																																																					=
																																																					MAKE_YOUNG_PAIR
																																																					(BgL_arg1933z00_1750,
																																																					BNIL);
																																																			}
																																																			BgL_arg1929z00_1746
																																																				=
																																																				MAKE_YOUNG_PAIR
																																																				(BgL_arg1930z00_1747,
																																																				BgL_arg1931z00_1748);
																																																		}
																																																		BgL_arg1928z00_1745
																																																			=
																																																			MAKE_YOUNG_PAIR
																																																			(BgL_elsezd2numzd2_10,
																																																			BgL_arg1929z00_1746);
																																																	}
																																																	BgL_arg1926z00_1743
																																																		=
																																																		MAKE_YOUNG_PAIR
																																																		(BGl_symbol2361z00zz__rgc_expandz00,
																																																		BgL_arg1928z00_1745);
																																																}
																																																BgL_arg1924z00_1741
																																																	=
																																																	MAKE_YOUNG_PAIR
																																																	(BgL_arg1925z00_1742,
																																																	BgL_arg1926z00_1743);
																																															}
																																															BgL_arg1923z00_1740
																																																=
																																																MAKE_YOUNG_PAIR
																																																(BgL_arg1924z00_1741,
																																																BNIL);
																																														}
																																														BgL_arg1921z00_1739
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BGl_symbol2576z00zz__rgc_expandz00,
																																															BgL_arg1923z00_1740);
																																													}
																																													BgL_arg1919z00_1737
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BgL_arg1921z00_1739,
																																														BNIL);
																																												}
																																												{	/* Rgc/rgcexpand.scm 301 */
																																													obj_t
																																														BgL_arg1935z00_1752;
																																													obj_t
																																														BgL_arg1936z00_1753;
																																													{	/* Rgc/rgcexpand.scm 301 */
																																														obj_t
																																															BgL_arg1937z00_1754;
																																														BgL_arg1937z00_1754
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BGl_symbol2361z00zz__rgc_expandz00,
																																															BNIL);
																																														BgL_arg1935z00_1752
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BGl_symbol2578z00zz__rgc_expandz00,
																																															BgL_arg1937z00_1754);
																																													}
																																													{	/* Rgc/rgcexpand.scm 302 */
																																														obj_t
																																															BgL_arg1938z00_1755;
																																														obj_t
																																															BgL_arg1939z00_1756;
																																														if (CBOOL(BgL_submatchzf3zf3_11))
																																															{	/* Rgc/rgcexpand.scm 302 */
																																																BgL_arg1938z00_1755
																																																	=
																																																	BGl_list2580z00zz__rgc_expandz00;
																																															}
																																														else
																																															{	/* Rgc/rgcexpand.scm 302 */
																																																BgL_arg1938z00_1755
																																																	=
																																																	BNIL;
																																															}
																																														{	/* Rgc/rgcexpand.scm 317 */
																																															obj_t
																																																BgL_arg1940z00_1757;
																																															{	/* Rgc/rgcexpand.scm 317 */
																																																obj_t
																																																	BgL_arg1941z00_1758;
																																																{	/* Rgc/rgcexpand.scm 317 */
																																																	obj_t
																																																		BgL_arg1942z00_1759;
																																																	{	/* Rgc/rgcexpand.scm 317 */
																																																		obj_t
																																																			BgL_arg1943z00_1760;
																																																		obj_t
																																																			BgL_arg1944z00_1761;
																																																		{
																																																			obj_t
																																																				BgL_actionsz00_2252;
																																																			long
																																																				BgL_numz00_2253;
																																																			obj_t
																																																				BgL_resz00_2254;
																																																			BgL_actionsz00_2252
																																																				=
																																																				BgL_actionsz00_9;
																																																			BgL_numz00_2253
																																																				=
																																																				(
																																																				(long)
																																																				0);
																																																			BgL_resz00_2254
																																																				=
																																																				BNIL;
																																																		BgL_loopz00_2251:
																																																			if (NULLP(BgL_actionsz00_2252))
																																																				{	/* Rgc/rgcexpand.scm 320 */
																																																					BgL_arg1943z00_1760
																																																						=
																																																						BgL_resz00_2254;
																																																				}
																																																			else
																																																				{	/* Rgc/rgcexpand.scm 322 */
																																																					obj_t
																																																						BgL_arg1947z00_2264;
																																																					long
																																																						BgL_arg1948z00_2265;
																																																					obj_t
																																																						BgL_arg1949z00_2266;
																																																					BgL_arg1947z00_2264
																																																						=
																																																						CDR
																																																						(
																																																						((obj_t) BgL_actionsz00_2252));
																																																					BgL_arg1948z00_2265
																																																						=
																																																						(BgL_numz00_2253
																																																						+
																																																						((long) 1));
																																																					{	/* Rgc/rgcexpand.scm 324 */
																																																						obj_t
																																																							BgL_arg1951z00_2267;
																																																						{	/* Rgc/rgcexpand.scm 324 */
																																																							obj_t
																																																								BgL_arg1952z00_2268;
																																																							obj_t
																																																								BgL_arg1953z00_2269;
																																																							BgL_arg1952z00_2268
																																																								=
																																																								MAKE_YOUNG_PAIR
																																																								(BINT
																																																								(BgL_numz00_2253),
																																																								BNIL);
																																																							{	/* Rgc/rgcexpand.scm 324 */
																																																								obj_t
																																																									BgL_arg1954z00_2270;
																																																								BgL_arg1954z00_2270
																																																									=
																																																									CAR
																																																									(
																																																									((obj_t) BgL_actionsz00_2252));
																																																								BgL_arg1953z00_2269
																																																									=
																																																									MAKE_YOUNG_PAIR
																																																									(BgL_arg1954z00_2270,
																																																									BNIL);
																																																							}
																																																							BgL_arg1951z00_2267
																																																								=
																																																								MAKE_YOUNG_PAIR
																																																								(BgL_arg1952z00_2268,
																																																								BgL_arg1953z00_2269);
																																																						}
																																																						BgL_arg1949z00_2266
																																																							=
																																																							MAKE_YOUNG_PAIR
																																																							(BgL_arg1951z00_2267,
																																																							BgL_resz00_2254);
																																																					}
																																																					{
																																																						obj_t
																																																							BgL_resz00_3487;
																																																						long
																																																							BgL_numz00_3486;
																																																						obj_t
																																																							BgL_actionsz00_3485;
																																																						BgL_actionsz00_3485
																																																							=
																																																							BgL_arg1947z00_2264;
																																																						BgL_numz00_3486
																																																							=
																																																							BgL_arg1948z00_2265;
																																																						BgL_resz00_3487
																																																							=
																																																							BgL_arg1949z00_2266;
																																																						BgL_resz00_2254
																																																							=
																																																							BgL_resz00_3487;
																																																						BgL_numz00_2253
																																																							=
																																																							BgL_numz00_3486;
																																																						BgL_actionsz00_2252
																																																							=
																																																							BgL_actionsz00_3485;
																																																						goto
																																																							BgL_loopz00_2251;
																																																					}
																																																				}
																																																		}
																																																		{	/* Rgc/rgcexpand.scm 326 */
																																																			obj_t
																																																				BgL_arg1955z00_1777;
																																																			{	/* Rgc/rgcexpand.scm 326 */
																																																				obj_t
																																																					BgL_arg1956z00_1778;
																																																				{	/* Rgc/rgcexpand.scm 326 */
																																																					obj_t
																																																						BgL_arg1957z00_1779;
																																																					{	/* Rgc/rgcexpand.scm 326 */
																																																						obj_t
																																																							BgL_arg1958z00_1780;
																																																						{	/* Rgc/rgcexpand.scm 326 */
																																																							obj_t
																																																								BgL_arg1959z00_1781;
																																																							{	/* Rgc/rgcexpand.scm 326 */
																																																								obj_t
																																																									BgL_arg1960z00_1782;
																																																								BgL_arg1960z00_1782
																																																									=
																																																									MAKE_YOUNG_PAIR
																																																									(BGl_symbol2386z00zz__rgc_expandz00,
																																																									BNIL);
																																																								BgL_arg1959z00_1781
																																																									=
																																																									MAKE_YOUNG_PAIR
																																																									(BGl_string2606z00zz__rgc_expandz00,
																																																									BgL_arg1960z00_1782);
																																																							}
																																																							BgL_arg1958z00_1780
																																																								=
																																																								MAKE_YOUNG_PAIR
																																																								(BGl_string2348z00zz__rgc_expandz00,
																																																								BgL_arg1959z00_1781);
																																																						}
																																																						BgL_arg1957z00_1779
																																																							=
																																																							MAKE_YOUNG_PAIR
																																																							(BGl_symbol2476z00zz__rgc_expandz00,
																																																							BgL_arg1958z00_1780);
																																																					}
																																																					BgL_arg1956z00_1778
																																																						=
																																																						MAKE_YOUNG_PAIR
																																																						(BgL_arg1957z00_1779,
																																																						BNIL);
																																																				}
																																																				BgL_arg1955z00_1777
																																																					=
																																																					MAKE_YOUNG_PAIR
																																																					(BGl_symbol2607z00zz__rgc_expandz00,
																																																					BgL_arg1956z00_1778);
																																																			}
																																																			BgL_arg1944z00_1761
																																																				=
																																																				MAKE_YOUNG_PAIR
																																																				(BgL_arg1955z00_1777,
																																																				BNIL);
																																																		}
																																																		BgL_arg1942z00_1759
																																																			=
																																																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																																			(BgL_arg1943z00_1760,
																																																			BgL_arg1944z00_1761);
																																																	}
																																																	BgL_arg1941z00_1758
																																																		=
																																																		MAKE_YOUNG_PAIR
																																																		(BGl_symbol2386z00zz__rgc_expandz00,
																																																		BgL_arg1942z00_1759);
																																																}
																																																BgL_arg1940z00_1757
																																																	=
																																																	MAKE_YOUNG_PAIR
																																																	(BGl_symbol2609z00zz__rgc_expandz00,
																																																	BgL_arg1941z00_1758);
																																															}
																																															BgL_arg1939z00_1756
																																																=
																																																MAKE_YOUNG_PAIR
																																																(BgL_arg1940z00_1757,
																																																BNIL);
																																														}
																																														BgL_arg1936z00_1753
																																															=
																																															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																															(BgL_arg1938z00_1755,
																																															BgL_arg1939z00_1756);
																																													}
																																													BgL_arg1920z00_1738
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BgL_arg1935z00_1752,
																																														BgL_arg1936z00_1753);
																																												}
																																												BgL_arg1918z00_1736
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BgL_arg1919z00_1737,
																																													BgL_arg1920z00_1738);
																																											}
																																											BgL_arg1917z00_1735
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BGl_symbol2355z00zz__rgc_expandz00,
																																												BgL_arg1918z00_1736);
																																										}
																																										BgL_arg1915z00_1733
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_arg1917z00_1735,
																																											BNIL);
																																									}
																																									BgL_arg1912z00_1730
																																										=
																																										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																										(BgL_arg1914z00_1732,
																																										BgL_arg1915z00_1733);
																																								}
																																								BgL_arg1910z00_1728
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg1911z00_1729,
																																									BgL_arg1912z00_1730);
																																							}
																																							BgL_arg1908z00_1726
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_arg1909z00_1727,
																																								BgL_arg1910z00_1728);
																																						}
																																						BgL_arg1906z00_1724
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol2364z00zz__rgc_expandz00,
																																							BgL_arg1908z00_1726);
																																					}
																																					{	/* Rgc/rgcexpand.scm 330 */
																																						obj_t
																																							BgL_arg1961z00_1783;
																																						if (CBOOL(BGl_za2unsafezd2rgcza2zd2zz__rgcz00))
																																							{	/* Rgc/rgcexpand.scm 330 */
																																								BgL_arg1961z00_1783
																																									=
																																									BGl_list2611z00zz__rgc_expandz00;
																																							}
																																						else
																																							{	/* Rgc/rgcexpand.scm 330 */
																																								BgL_arg1961z00_1783
																																									=
																																									BGl_list2612z00zz__rgc_expandz00;
																																							}
																																						BgL_arg1907z00_1725
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1961z00_1783,
																																							BNIL);
																																					}
																																					BgL_arg1905z00_1723
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg1906z00_1724,
																																						BgL_arg1907z00_1725);
																																				}
																																				BgL_arg1883z00_1705
																																					=
																																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																					(BgL_defsz00_12,
																																					BgL_arg1905z00_1723);
																																			}
																																			BgL_arg1872z00_1696
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1882z00_1704,
																																				BgL_arg1883z00_1705);
																																		}
																																		BgL_arg1859z00_1687
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1871z00_1695,
																																			BgL_arg1872z00_1696);
																																	}
																																	BgL_arg1853z00_1682
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1858z00_1686,
																																		BgL_arg1859z00_1687);
																																}
																																BgL_arg1830z00_1665
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1852z00_1681,
																																	BgL_arg1853z00_1682);
																															}
																															BgL_arg1823z00_1658
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1829z00_1664,
																																BgL_arg1830z00_1665);
																														}
																														BgL_arg1816z00_1651
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1822z00_1657,
																															BgL_arg1823z00_1658);
																													}
																													BgL_arg1809z00_1644 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1815z00_1650,
																														BgL_arg1816z00_1651);
																												}
																												BgL_arg1729z00_1573 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1808z00_1643,
																													BgL_arg1809z00_1644);
																											}
																											BgL_arg1721z00_1566 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1728z00_1572,
																												BgL_arg1729z00_1573);
																										}
																										BgL_arg1621z00_1495 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1720z00_1565,
																											BgL_arg1721z00_1566);
																									}
																									BgL_arg1614z00_1488 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1620z00_1494,
																										BgL_arg1621z00_1495);
																								}
																								BgL_arg1518z00_1417 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1613z00_1487,
																									BgL_arg1614z00_1488);
																							}
																							BgL_arg1510z00_1410 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1516z00_1416,
																								BgL_arg1518z00_1417);
																						}
																						BgL_arg1500z00_1403 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1509z00_1409,
																							BgL_arg1510z00_1410);
																					}
																					BgL_arg1492z00_1396 =
																						MAKE_YOUNG_PAIR(BgL_arg1498z00_1402,
																						BgL_arg1500z00_1403);
																				}
																				BgL_arg1483z00_1389 =
																					MAKE_YOUNG_PAIR(BgL_arg1491z00_1395,
																					BgL_arg1492z00_1396);
																			}
																			BgL_arg1474z00_1382 =
																				MAKE_YOUNG_PAIR(BgL_arg1480z00_1388,
																				BgL_arg1483z00_1389);
																		}
																		BgL_arg1412z00_1323 =
																			MAKE_YOUNG_PAIR(BgL_arg1473z00_1381,
																			BgL_arg1474z00_1382);
																	}
																	BgL_arg1350z00_1266 =
																		MAKE_YOUNG_PAIR(BgL_arg1411z00_1322,
																		BgL_arg1412z00_1323);
																}
																BgL_arg1339z00_1256 =
																	MAKE_YOUNG_PAIR(BgL_arg1348z00_1265,
																	BgL_arg1350z00_1266);
															}
															BgL_arg1328z00_1247 =
																MAKE_YOUNG_PAIR(BgL_arg1338z00_1255,
																BgL_arg1339z00_1256);
														}
														BgL_arg1318z00_1240 =
															MAKE_YOUNG_PAIR(BgL_arg1327z00_1246,
															BgL_arg1328z00_1247);
													}
													BgL_arg1311z00_1233 =
														MAKE_YOUNG_PAIR(BgL_arg1317z00_1239,
														BgL_arg1318z00_1240);
												}
												BgL_arg1306z00_1228 =
													MAKE_YOUNG_PAIR(BgL_arg1310z00_1232,
													BgL_arg1311z00_1233);
											}
											BgL_arg1303z00_1226 =
												MAKE_YOUNG_PAIR(BgL_arg1304z00_1227,
												BgL_arg1306z00_1228);
										}
										BgL_arg1298z00_1221 =
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BgL_statesz00_8, BgL_arg1303z00_1226);
									}
									BgL_arg1295z00_1218 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg1297z00_1220, BgL_arg1298z00_1221);
								}
								BgL_arg1291z00_1216 =
									MAKE_YOUNG_PAIR(BgL_arg1292z00_1217, BgL_arg1295z00_1218);
							}
							BgL_arg1290z00_1215 =
								MAKE_YOUNG_PAIR(BGl_symbol2635z00zz__rgc_expandz00,
								BgL_arg1291z00_1216);
						}
						BgL_arg1287z00_1212 = MAKE_YOUNG_PAIR(BgL_arg1290z00_1215, BNIL);
					}
					BgL_arg1285z00_1210 =
						MAKE_YOUNG_PAIR(BgL_arg1286z00_1211, BgL_arg1287z00_1212);
				}
				return
					MAKE_YOUNG_PAIR(BGl_symbol2355z00zz__rgc_expandz00,
					BgL_arg1285z00_1210);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__rgc_expandz00()
	{
		{	/* Rgc/rgcexpand.scm 22 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__rgc_expandz00()
	{
		{	/* Rgc/rgcexpand.scm 22 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__rgc_expandz00()
	{
		{	/* Rgc/rgcexpand.scm 22 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__rgc_expandz00()
	{
		{	/* Rgc/rgcexpand.scm 22 */
			BGl_modulezd2initializa7ationz75zz__rgc_rulesz00(((long) 181069196),
				BSTRING_TO_STRING(BGl_string2637z00zz__rgc_expandz00));
			BGl_modulezd2initializa7ationz75zz__rgc_treez00(((long) 424729437),
				BSTRING_TO_STRING(BGl_string2637z00zz__rgc_expandz00));
			BGl_modulezd2initializa7ationz75zz__rgc_dfaz00(((long) 477555300),
				BSTRING_TO_STRING(BGl_string2637z00zz__rgc_expandz00));
			BGl_modulezd2initializa7ationz75zz__rgc_compilez00(((long) 433136898),
				BSTRING_TO_STRING(BGl_string2637z00zz__rgc_expandz00));
			BGl_modulezd2initializa7ationz75zz__rgc_configz00(((long) 428274706),
				BSTRING_TO_STRING(BGl_string2637z00zz__rgc_expandz00));
			BGl_modulezd2initializa7ationz75zz__rgcz00(((long) 352596942),
				BSTRING_TO_STRING(BGl_string2637z00zz__rgc_expandz00));
			BGl_modulezd2initializa7ationz75zz__rgc_setz00(((long) 225075481),
				BSTRING_TO_STRING(BGl_string2637z00zz__rgc_expandz00));
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2637z00zz__rgc_expandz00));
		}

	}

#ifdef __cplusplus
}
#endif
