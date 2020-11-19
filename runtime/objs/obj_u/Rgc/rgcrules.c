/*===========================================================================*/
/*   (Rgc/rgcrules.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Rgc/rgcrules.scm -indent -o objs/obj_u/Rgc/rgcrules.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl_symbol2563z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2565z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2568z00zz__rgc_rulesz00 = BUNSPEC;
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol2570z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2576z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2578z00zz__rgc_rulesz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_specialzd2charzf3z21zz__rgc_rulesz00(int);
	static obj_t BGl_za2specialzd2stopzd2matchzd2charza2zd2zz__rgc_rulesz00 =
		BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2581z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2583z00zz__rgc_rulesz00 = BUNSPEC;
	extern obj_t BGl_rgcsetzd2notz12zc0zz__rgc_setz00(obj_t);
	static obj_t BGl_symbol2585z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2587z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2589z00zz__rgc_rulesz00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2591z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2593z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2595z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2597z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2599z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zz__rgc_rulesz00();
	static bool_t BGl_za2lockzd2submatchza2zd2zz__rgc_rulesz00;
	extern obj_t BGl_rgcsetzd2ze3listz31zz__rgc_setz00(obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t bgl_reverse(obj_t);
	static obj_t BGl_genericzd2initzd2zz__rgc_rulesz00();
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__rgc_rulesz00();
	extern bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_rgcsetzd2andz12zc0zz__rgc_setz00(obj_t, obj_t);
	static long BGl_za2maxzd2rgczd2zd3zd2numza2z01zz__rgc_rulesz00;
	static obj_t BGl_z62treezd2maxzd2charz62zz__rgc_rulesz00(obj_t);
	static obj_t BGl_expandzd2atomzd2zz__rgc_rulesz00(long, obj_t, obj_t);
	static obj_t BGl_expandzd2andzd2zz__rgc_rulesz00(long, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_expandzd2za2za2zd2zz__rgc_rulesz00(long, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rgcsetzd2butz12zc0zz__rgc_setz00(obj_t, obj_t);
	extern obj_t make_vector(long, obj_t);
	static obj_t BGl_appendzd221011zd2zz__rgc_rulesz00(obj_t, obj_t);
	static long BGl_getzd2newzd2submatchz00zz__rgc_rulesz00();
	static obj_t BGl_methodzd2initzd2zz__rgc_rulesz00();
	extern obj_t BGl_listzd2ze3rgcsetz31zz__rgc_setz00(obj_t, long);
	static obj_t BGl_expandzd2zb2z60zz__rgc_rulesz00(long, obj_t, obj_t);
	extern obj_t BGl_posixzd2ze3rgcz31zz__rgc_posixz00(obj_t);
	static obj_t BGl_expandzd2inzd2zz__rgc_rulesz00(long, obj_t, obj_t, obj_t);
	static obj_t BGl_expandzd2outzd2zz__rgc_rulesz00(long, obj_t, obj_t, obj_t);
	static obj_t BGl_expandzd2zd3z01zz__rgc_rulesz00(long, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_expandzd2dotszd2zz__rgc_rulesz00(long, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_list2508z00zz__rgc_rulesz00 = BUNSPEC;
	extern bool_t BGl_rgczd2alphabeticzf3z21zz__rgc_configz00(obj_t);
	static obj_t BGl_za2specialzd2startzd2matchzd2charza2zd2zz__rgc_rulesz00 =
		BUNSPEC;
	static obj_t BGl_z62specialzd2charzd2matchzf3z91zz__rgc_rulesz00(obj_t,
		obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_makezd2variablezd2envz00zz__rgc_rulesz00(obj_t);
	static obj_t BGl_expandzd2matchzd2rulez00zz__rgc_rulesz00(long, obj_t, obj_t);
	static obj_t BGl_list2534z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_list2541z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_list2544z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_list2545z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_list2548z00zz__rgc_rulesz00 = BUNSPEC;
	BGL_EXPORTED_DECL int
		BGl_specialzd2matchzd2charzd2ze3rulezd2numberze3zz__rgc_rulesz00(int);
	static obj_t
		BGl_z62specialzd2matchzd2charzd2ze3rulezd2numberz81zz__rgc_rulesz00(obj_t,
		obj_t);
	static obj_t BGl_list2555z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_list2558z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_expandzd2butzd2zz__rgc_rulesz00(long, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__rgc_rulesz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_posixz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_setz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_configz00(long, char *);
	static obj_t BGl_list2561z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_charzd2rangeze70z35zz__rgc_rulesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_list2562z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_expandzd2submatchzd2zz__rgc_rulesz00(long, obj_t, obj_t,
		obj_t);
	static obj_t BGl_expandzd2orzd2zz__rgc_rulesz00(long, obj_t, obj_t);
	static obj_t BGl_list2567z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_list2572z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_list2573z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_list2574z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_list2575z00zz__rgc_rulesz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_treezd2maxzd2charz00zz__rgc_rulesz00();
	static bool_t BGl_rgczd2charzf3ze70zc6zz__rgc_rulesz00(obj_t);
	static obj_t BGl_z62specialzd2charzf3z43zz__rgc_rulesz00(obj_t, obj_t);
	static obj_t BGl_z62ruleszd2ze3regularzd2treez81zz__rgc_rulesz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zz__rgc_rulesz00();
	static obj_t BGl_makezd2sequencezd2zz__rgc_rulesz00(obj_t);
	static long BGl_za2submatchzd2countza2zd2zz__rgc_rulesz00;
	BGL_EXPORTED_DECL bool_t
		BGl_specialzd2charzd2matchzf3zf3zz__rgc_rulesz00(int);
	static long BGl_specialzd2charzd2numz00zz__rgc_rulesz00;
	static obj_t BGl_gczd2rootszd2initz00zz__rgc_rulesz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__rgc_rulesz00();
	static obj_t
		BGl_z62resetzd2specialzd2matchzd2charz12za2zz__rgc_rulesz00(obj_t);
	extern obj_t BGl_rgczd2downcasezd2zz__rgc_configz00(obj_t);
	static obj_t BGl_stringzd2rangeze70z35zz__rgc_rulesz00(obj_t, obj_t);
	static obj_t BGl_expandzd2uncasezd2zz__rgc_rulesz00(long, obj_t, obj_t);
	static obj_t BGl_symbol2500z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2502z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2504z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2506z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_za2specialzd2matchzd2charza2z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2509z00zz__rgc_rulesz00 = BUNSPEC;
	extern obj_t BGl_rgczd2envzd2zz__rgc_configz00();
	static obj_t BGl_symbol2512z00zz__rgc_rulesz00 = BUNSPEC;
	extern obj_t BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_expandzd2rulezd2zz__rgc_rulesz00(long, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_resetzd2specialzd2matchzd2charz12zc0zz__rgc_rulesz00();
	static obj_t BGl_symbol2601z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2603z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2522z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2605z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2524z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_loopze70ze7zz__rgc_rulesz00(obj_t, obj_t);
	static obj_t BGl_symbol2607z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2526z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_loopze71ze7zz__rgc_rulesz00(obj_t, obj_t, long);
	static obj_t BGl_symbol2609z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2528z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2530z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2532z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2615z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2535z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2537z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2539z00zz__rgc_rulesz00 = BUNSPEC;
	extern obj_t BGl_rgczd2upcasezd2zz__rgc_configz00(obj_t);
	static obj_t BGl_addzd2predicatezd2matchz12z12zz__rgc_rulesz00(long, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_ruleszd2ze3regularzd2treeze3zz__rgc_rulesz00(obj_t, obj_t);
	static obj_t BGl_za2predicatesza2z00zz__rgc_rulesz00 = BUNSPEC;
	extern obj_t BGl_rgczd2maxzd2charz00zz__rgc_configz00();
	static obj_t BGl_symbol2542z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2546z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2549z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_expandzd2sequencezd2zz__rgc_rulesz00(long, obj_t, obj_t);
	static bool_t BGl_za2submatchzf3za2zf3zz__rgc_rulesz00;
	static obj_t BGl_explodezd2sequenceze70z35zz__rgc_rulesz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_predicatezd2matchzd2zz__rgc_rulesz00(int);
	static obj_t BGl_z62predicatezd2matchzb0zz__rgc_rulesz00(obj_t, obj_t);
	static obj_t BGl_symbol2551z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2553z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_expandzd2ze3zd3ze2zz__rgc_rulesz00(long, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_expandzd2stringzd2zz__rgc_rulesz00(obj_t, obj_t);
	static obj_t BGl_symbol2556z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2559z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2501z00zz__rgc_rulesz00,
		BgL_bgl_string2501za700za7za7_2622za7, "in", 2);
	      DEFINE_STRING(BGl_string2503z00zz__rgc_rulesz00,
		BgL_bgl_string2503za700za7za7_2623za7, "begin", 5);
	      DEFINE_STRING(BGl_string2505z00zz__rgc_rulesz00,
		BgL_bgl_string2505za700za7za7_2624za7, "else", 4);
	      DEFINE_STRING(BGl_string2507z00zz__rgc_rulesz00,
		BgL_bgl_string2507za700za7za7_2625za7, "or", 2);
	      DEFINE_STRING(BGl_string2510z00zz__rgc_rulesz00,
		BgL_bgl_string2510za700za7za7_2626za7, "the-failure", 11);
	      DEFINE_STRING(BGl_string2511z00zz__rgc_rulesz00,
		BgL_bgl_string2511za700za7za7_2627za7, "RGC:Illegal else clause", 23);
	      DEFINE_STRING(BGl_string2513z00zz__rgc_rulesz00,
		BgL_bgl_string2513za700za7za7_2628za7, "define", 6);
	      DEFINE_STRING(BGl_string2514z00zz__rgc_rulesz00,
		BgL_bgl_string2514za700za7za7_2629za7, "RGC:Illegal clause", 18);
	      DEFINE_STRING(BGl_string2515z00zz__rgc_rulesz00,
		BgL_bgl_string2515za700za7za7_2630za7,
		"RGC:Illegal regular variable definition", 39);
	      DEFINE_STRING(BGl_string2516z00zz__rgc_rulesz00,
		BgL_bgl_string2516za700za7za7_2631za7, "/tmp/4.4a/runtime/Rgc/rgcrules.scm",
		34);
	      DEFINE_STRING(BGl_string2517z00zz__rgc_rulesz00,
		BgL_bgl_string2517za700za7za7_2632za7, "&special-char?", 14);
	      DEFINE_STRING(BGl_string2518z00zz__rgc_rulesz00,
		BgL_bgl_string2518za700za7za7_2633za7, "bint", 4);
	      DEFINE_STRING(BGl_string2519z00zz__rgc_rulesz00,
		BgL_bgl_string2519za700za7za7_2634za7, "&special-char-match?", 20);
	      DEFINE_STRING(BGl_string2600z00zz__rgc_rulesz00,
		BgL_bgl_string2600za700za7za7_2635za7, "and", 3);
	      DEFINE_STRING(BGl_string2520z00zz__rgc_rulesz00,
		BgL_bgl_string2520za700za7za7_2636za7, "&special-match-char->rule-number",
		32);
	      DEFINE_STRING(BGl_string2602z00zz__rgc_rulesz00,
		BgL_bgl_string2602za700za7za7_2637za7, "but", 3);
	      DEFINE_STRING(BGl_string2521z00zz__rgc_rulesz00,
		BgL_bgl_string2521za700za7za7_2638za7, "&predicate-match", 16);
	      DEFINE_STRING(BGl_string2604z00zz__rgc_rulesz00,
		BgL_bgl_string2604za700za7za7_2639za7, "submatch", 8);
	      DEFINE_STRING(BGl_string2523z00zz__rgc_rulesz00,
		BgL_bgl_string2523za700za7za7_2640za7, "when", 4);
	      DEFINE_STRING(BGl_string2606z00zz__rgc_rulesz00,
		BgL_bgl_string2606za700za7za7_2641za7, ":", 1);
	      DEFINE_STRING(BGl_string2525z00zz__rgc_rulesz00,
		BgL_bgl_string2525za700za7za7_2642za7, "context", 7);
	      DEFINE_STRING(BGl_string2608z00zz__rgc_rulesz00,
		BgL_bgl_string2608za700za7za7_2643za7, "seq", 3);
	      DEFINE_STRING(BGl_string2527z00zz__rgc_rulesz00,
		BgL_bgl_string2527za700za7za7_2644za7, "quote", 5);
	      DEFINE_STRING(BGl_string2529z00zz__rgc_rulesz00,
		BgL_bgl_string2529za700za7za7_2645za7, "the-rgc-context", 15);
	      DEFINE_STRING(BGl_string2610z00zz__rgc_rulesz00,
		BgL_bgl_string2610za700za7za7_2646za7, "posix", 5);
	      DEFINE_STRING(BGl_string2611z00zz__rgc_rulesz00,
		BgL_bgl_string2611za700za7za7_2647za7, "RGC:illegal atom", 16);
	      DEFINE_STRING(BGl_string2612z00zz__rgc_rulesz00,
		BgL_bgl_string2612za700za7za7_2648za7, "RGC:regular variable unbound", 28);
	      DEFINE_STRING(BGl_string2531z00zz__rgc_rulesz00,
		BgL_bgl_string2531za700za7za7_2649za7, "eq?", 3);
	      DEFINE_STRING(BGl_string2613z00zz__rgc_rulesz00,
		BgL_bgl_string2613za700za7za7_2650za7, "RGC:Illegal regular expression",
		30);
	      DEFINE_STRING(BGl_string2614z00zz__rgc_rulesz00,
		BgL_bgl_string2614za700za7za7_2651za7, "RGC:Illegal empty string", 24);
	      DEFINE_STRING(BGl_string2533z00zz__rgc_rulesz00,
		BgL_bgl_string2533za700za7za7_2652za7, "bol", 3);
	      DEFINE_STRING(BGl_string2616z00zz__rgc_rulesz00,
		BgL_bgl_string2616za700za7za7_2653za7, "sequence", 8);
	      DEFINE_STRING(BGl_string2617z00zz__rgc_rulesz00,
		BgL_bgl_string2617za700za7za7_2654za7, "RGC:Illegal regular range", 25);
	      DEFINE_STRING(BGl_string2536z00zz__rgc_rulesz00,
		BgL_bgl_string2536za700za7za7_2655za7, "rgc-buffer-bol?", 15);
	      DEFINE_STRING(BGl_string2618z00zz__rgc_rulesz00,
		BgL_bgl_string2618za700za7za7_2656za7, "RGC:Illegal range string", 24);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_specialzd2charzd2matchzf3zd2envz21zz__rgc_rulesz00,
		BgL_bgl_za762specialza7d2cha2657z00,
		BGl_z62specialzd2charzd2matchzf3z91zz__rgc_rulesz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2619z00zz__rgc_rulesz00,
		BgL_bgl_string2619za700za7za7_2658za7, "RGC:Illegal range", 17);
	      DEFINE_STRING(BGl_string2538z00zz__rgc_rulesz00,
		BgL_bgl_string2538za700za7za7_2659za7, "iport", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_predicatezd2matchzd2envz00zz__rgc_rulesz00,
		BgL_bgl_za762predicateza7d2m2660z00,
		BGl_z62predicatezd2matchzb0zz__rgc_rulesz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2620z00zz__rgc_rulesz00,
		BgL_bgl_string2620za700za7za7_2661za7, "RGC:Illegal nested submatches", 29);
	      DEFINE_STRING(BGl_string2621z00zz__rgc_rulesz00,
		BgL_bgl_string2621za700za7za7_2662za7, "__rgc_rules", 11);
	      DEFINE_STRING(BGl_string2540z00zz__rgc_rulesz00,
		BgL_bgl_string2540za700za7za7_2663za7, "eol", 3);
	      DEFINE_STRING(BGl_string2543z00zz__rgc_rulesz00,
		BgL_bgl_string2543za700za7za7_2664za7, "let", 3);
	      DEFINE_STRING(BGl_string2547z00zz__rgc_rulesz00,
		BgL_bgl_string2547za700za7za7_2665za7, "r", 1);
	      DEFINE_STRING(BGl_string2550z00zz__rgc_rulesz00,
		BgL_bgl_string2550za700za7za7_2666za7, "rgc-buffer-eol?", 15);
	      DEFINE_STRING(BGl_string2552z00zz__rgc_rulesz00,
		BgL_bgl_string2552za700za7za7_2667za7, "forward", 7);
	      DEFINE_STRING(BGl_string2554z00zz__rgc_rulesz00,
		BgL_bgl_string2554za700za7za7_2668za7, "bufpos", 6);
	      DEFINE_STRING(BGl_string2557z00zz__rgc_rulesz00,
		BgL_bgl_string2557za700za7za7_2669za7, "set!", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_treezd2maxzd2charzd2envzd2zz__rgc_rulesz00,
		BgL_bgl_za762treeza7d2maxza7d22670za7,
		BGl_z62treezd2maxzd2charz62zz__rgc_rulesz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2560z00zz__rgc_rulesz00,
		BgL_bgl_string2560za700za7za7_2671za7, "rgc-buffer-forward", 18);
	      DEFINE_STRING(BGl_string2564z00zz__rgc_rulesz00,
		BgL_bgl_string2564za700za7za7_2672za7, "rgc-buffer-bufpos", 17);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_specialzd2charzf3zd2envzf3zz__rgc_rulesz00,
		BgL_bgl_za762specialza7d2cha2673z00,
		BGl_z62specialzd2charzf3z43zz__rgc_rulesz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2566z00zz__rgc_rulesz00,
		BgL_bgl_string2566za700za7za7_2674za7, "bof", 3);
	      DEFINE_STRING(BGl_string2569z00zz__rgc_rulesz00,
		BgL_bgl_string2569za700za7za7_2675za7, "rgc-buffer-bof?", 15);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_specialzd2matchzd2charzd2ze3rulezd2numberzd2envz31zz__rgc_rulesz00,
		BgL_bgl_za762specialza7d2mat2676z00,
		BGl_z62specialzd2matchzd2charzd2ze3rulezd2numberz81zz__rgc_rulesz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2571z00zz__rgc_rulesz00,
		BgL_bgl_string2571za700za7za7_2677za7, "eof", 3);
	      DEFINE_STRING(BGl_string2577z00zz__rgc_rulesz00,
		BgL_bgl_string2577za700za7za7_2678za7, "rgc-buffer-eof2?", 16);
	      DEFINE_STRING(BGl_string2579z00zz__rgc_rulesz00,
		BgL_bgl_string2579za700za7za7_2679za7, "...", 3);
	      DEFINE_STRING(BGl_string2499z00zz__rgc_rulesz00,
		BgL_bgl_string2499za700za7za7_2680za7, "RGC:Illegal clauses", 19);
	      DEFINE_STRING(BGl_string2580z00zz__rgc_rulesz00,
		BgL_bgl_string2580za700za7za7_2681za7, "RGC:Illegal construction", 24);
	      DEFINE_STRING(BGl_string2582z00zz__rgc_rulesz00,
		BgL_bgl_string2582za700za7za7_2682za7, "uncase", 6);
	      DEFINE_STRING(BGl_string2584z00zz__rgc_rulesz00,
		BgL_bgl_string2584za700za7za7_2683za7, "*", 1);
	      DEFINE_STRING(BGl_string2586z00zz__rgc_rulesz00,
		BgL_bgl_string2586za700za7za7_2684za7, "+", 1);
	      DEFINE_STRING(BGl_string2588z00zz__rgc_rulesz00,
		BgL_bgl_string2588za700za7za7_2685za7, "?", 1);
	      DEFINE_STRING(BGl_string2590z00zz__rgc_rulesz00,
		BgL_bgl_string2590za700za7za7_2686za7, "epsilon", 7);
	      DEFINE_STRING(BGl_string2592z00zz__rgc_rulesz00,
		BgL_bgl_string2592za700za7za7_2687za7, "=", 1);
	      DEFINE_STRING(BGl_string2594z00zz__rgc_rulesz00,
		BgL_bgl_string2594za700za7za7_2688za7, ">=", 2);
	      DEFINE_STRING(BGl_string2596z00zz__rgc_rulesz00,
		BgL_bgl_string2596za700za7za7_2689za7, "**", 2);
	      DEFINE_STRING(BGl_string2598z00zz__rgc_rulesz00,
		BgL_bgl_string2598za700za7za7_2690za7, "out", 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ruleszd2ze3regularzd2treezd2envz31zz__rgc_rulesz00,
		BgL_bgl_za762rulesza7d2za7e3re2691za7,
		BGl_z62ruleszd2ze3regularzd2treez81zz__rgc_rulesz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_resetzd2specialzd2matchzd2charz12zd2envz12zz__rgc_rulesz00,
		BgL_bgl_za762resetza7d2speci2692z00,
		BGl_z62resetzd2specialzd2matchzd2charz12za2zz__rgc_rulesz00, 0L, BUNSPEC,
		0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol2563z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2565z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2568z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2570z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2576z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2578z00zz__rgc_rulesz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2specialzd2stopzd2matchzd2charza2zd2zz__rgc_rulesz00));
		     ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2581z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2583z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2585z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2587z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2589z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2591z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2593z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2595z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2597z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2599z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_list2508z00zz__rgc_rulesz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2specialzd2startzd2matchzd2charza2zd2zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_list2534z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_list2541z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_list2544z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_list2545z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_list2548z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_list2555z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_list2558z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_list2561z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_list2562z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_list2567z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_list2572z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_list2573z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_list2574z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_list2575z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2500z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2502z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2504z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2506z00zz__rgc_rulesz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2specialzd2matchzd2charza2z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2509z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2512z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2601z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2603z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2522z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2605z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2524z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2607z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2526z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2609z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2528z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2530z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2532z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2615z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2535z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2537z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2539z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_za2predicatesza2z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2542z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2546z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2549z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2551z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2553z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2556z00zz__rgc_rulesz00));
		     ADD_ROOT((void *) (&BGl_symbol2559z00zz__rgc_rulesz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__rgc_rulesz00(long
		BgL_checksumz00_3807, char *BgL_fromz00_3808)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__rgc_rulesz00))
				{
					BGl_requirezd2initializa7ationz75zz__rgc_rulesz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__rgc_rulesz00();
					BGl_cnstzd2initzd2zz__rgc_rulesz00();
					BGl_importedzd2moduleszd2initz00zz__rgc_rulesz00();
					return BGl_toplevelzd2initzd2zz__rgc_rulesz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__rgc_rulesz00()
	{
		{	/* Rgc/rgcrules.scm 24 */
			BGl_symbol2500z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2501z00zz__rgc_rulesz00);
			BGl_symbol2502z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2503z00zz__rgc_rulesz00);
			BGl_symbol2504z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2505z00zz__rgc_rulesz00);
			BGl_symbol2506z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2507z00zz__rgc_rulesz00);
			BGl_symbol2509z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2510z00zz__rgc_rulesz00);
			BGl_list2508z00zz__rgc_rulesz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2509z00zz__rgc_rulesz00, BNIL);
			BGl_symbol2512z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2513z00zz__rgc_rulesz00);
			BGl_symbol2522z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2523z00zz__rgc_rulesz00);
			BGl_symbol2524z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2525z00zz__rgc_rulesz00);
			BGl_symbol2526z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2527z00zz__rgc_rulesz00);
			BGl_symbol2528z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2529z00zz__rgc_rulesz00);
			BGl_symbol2530z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2531z00zz__rgc_rulesz00);
			BGl_symbol2532z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2533z00zz__rgc_rulesz00);
			BGl_symbol2535z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2536z00zz__rgc_rulesz00);
			BGl_symbol2537z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2538z00zz__rgc_rulesz00);
			BGl_list2534z00zz__rgc_rulesz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2535z00zz__rgc_rulesz00,
				MAKE_YOUNG_PAIR(BGl_symbol2537z00zz__rgc_rulesz00, BNIL));
			BGl_symbol2539z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2540z00zz__rgc_rulesz00);
			BGl_symbol2542z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2543z00zz__rgc_rulesz00);
			BGl_symbol2546z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2547z00zz__rgc_rulesz00);
			BGl_symbol2549z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2550z00zz__rgc_rulesz00);
			BGl_symbol2551z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2552z00zz__rgc_rulesz00);
			BGl_symbol2553z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2554z00zz__rgc_rulesz00);
			BGl_list2548z00zz__rgc_rulesz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2549z00zz__rgc_rulesz00,
				MAKE_YOUNG_PAIR(BGl_symbol2537z00zz__rgc_rulesz00,
					MAKE_YOUNG_PAIR(BGl_symbol2551z00zz__rgc_rulesz00,
						MAKE_YOUNG_PAIR(BGl_symbol2553z00zz__rgc_rulesz00, BNIL))));
			BGl_list2545z00zz__rgc_rulesz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2546z00zz__rgc_rulesz00,
				MAKE_YOUNG_PAIR(BGl_list2548z00zz__rgc_rulesz00, BNIL));
			BGl_list2544z00zz__rgc_rulesz00 =
				MAKE_YOUNG_PAIR(BGl_list2545z00zz__rgc_rulesz00, BNIL);
			BGl_symbol2556z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2557z00zz__rgc_rulesz00);
			BGl_symbol2559z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2560z00zz__rgc_rulesz00);
			BGl_list2558z00zz__rgc_rulesz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2559z00zz__rgc_rulesz00,
				MAKE_YOUNG_PAIR(BGl_symbol2537z00zz__rgc_rulesz00, BNIL));
			BGl_list2555z00zz__rgc_rulesz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2556z00zz__rgc_rulesz00,
				MAKE_YOUNG_PAIR(BGl_symbol2551z00zz__rgc_rulesz00,
					MAKE_YOUNG_PAIR(BGl_list2558z00zz__rgc_rulesz00, BNIL)));
			BGl_symbol2563z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2564z00zz__rgc_rulesz00);
			BGl_list2562z00zz__rgc_rulesz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2563z00zz__rgc_rulesz00,
				MAKE_YOUNG_PAIR(BGl_symbol2537z00zz__rgc_rulesz00, BNIL));
			BGl_list2561z00zz__rgc_rulesz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2556z00zz__rgc_rulesz00,
				MAKE_YOUNG_PAIR(BGl_symbol2553z00zz__rgc_rulesz00,
					MAKE_YOUNG_PAIR(BGl_list2562z00zz__rgc_rulesz00, BNIL)));
			BGl_list2541z00zz__rgc_rulesz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2542z00zz__rgc_rulesz00,
				MAKE_YOUNG_PAIR(BGl_list2544z00zz__rgc_rulesz00,
					MAKE_YOUNG_PAIR(BGl_list2555z00zz__rgc_rulesz00,
						MAKE_YOUNG_PAIR(BGl_list2561z00zz__rgc_rulesz00,
							MAKE_YOUNG_PAIR(BGl_symbol2546z00zz__rgc_rulesz00, BNIL)))));
			BGl_symbol2565z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2566z00zz__rgc_rulesz00);
			BGl_symbol2568z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2569z00zz__rgc_rulesz00);
			BGl_list2567z00zz__rgc_rulesz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2568z00zz__rgc_rulesz00,
				MAKE_YOUNG_PAIR(BGl_symbol2537z00zz__rgc_rulesz00, BNIL));
			BGl_symbol2570z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2571z00zz__rgc_rulesz00);
			BGl_symbol2576z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2577z00zz__rgc_rulesz00);
			BGl_list2575z00zz__rgc_rulesz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__rgc_rulesz00,
				MAKE_YOUNG_PAIR(BGl_symbol2537z00zz__rgc_rulesz00,
					MAKE_YOUNG_PAIR(BGl_symbol2551z00zz__rgc_rulesz00,
						MAKE_YOUNG_PAIR(BGl_symbol2553z00zz__rgc_rulesz00, BNIL))));
			BGl_list2574z00zz__rgc_rulesz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2546z00zz__rgc_rulesz00,
				MAKE_YOUNG_PAIR(BGl_list2575z00zz__rgc_rulesz00, BNIL));
			BGl_list2573z00zz__rgc_rulesz00 =
				MAKE_YOUNG_PAIR(BGl_list2574z00zz__rgc_rulesz00, BNIL);
			BGl_list2572z00zz__rgc_rulesz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2542z00zz__rgc_rulesz00,
				MAKE_YOUNG_PAIR(BGl_list2573z00zz__rgc_rulesz00,
					MAKE_YOUNG_PAIR(BGl_list2555z00zz__rgc_rulesz00,
						MAKE_YOUNG_PAIR(BGl_list2561z00zz__rgc_rulesz00,
							MAKE_YOUNG_PAIR(BGl_symbol2546z00zz__rgc_rulesz00, BNIL)))));
			BGl_symbol2578z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2579z00zz__rgc_rulesz00);
			BGl_symbol2581z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2582z00zz__rgc_rulesz00);
			BGl_symbol2583z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2584z00zz__rgc_rulesz00);
			BGl_symbol2585z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2586z00zz__rgc_rulesz00);
			BGl_symbol2587z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2588z00zz__rgc_rulesz00);
			BGl_symbol2589z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2590z00zz__rgc_rulesz00);
			BGl_symbol2591z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2592z00zz__rgc_rulesz00);
			BGl_symbol2593z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2594z00zz__rgc_rulesz00);
			BGl_symbol2595z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2596z00zz__rgc_rulesz00);
			BGl_symbol2597z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2598z00zz__rgc_rulesz00);
			BGl_symbol2599z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2600z00zz__rgc_rulesz00);
			BGl_symbol2601z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2602z00zz__rgc_rulesz00);
			BGl_symbol2603z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2604z00zz__rgc_rulesz00);
			BGl_symbol2605z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2606z00zz__rgc_rulesz00);
			BGl_symbol2607z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2608z00zz__rgc_rulesz00);
			BGl_symbol2609z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2610z00zz__rgc_rulesz00);
			return (BGl_symbol2615z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2616z00zz__rgc_rulesz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__rgc_rulesz00()
	{
		{	/* Rgc/rgcrules.scm 24 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__rgc_rulesz00()
	{
		{	/* Rgc/rgcrules.scm 24 */
			BGl_za2maxzd2rgczd2zd3zd2numza2z01zz__rgc_rulesz00 = ((long) 81);
			{	/* Rgc/rgcrules.scm 163 */
				obj_t BgL_arg1239z00_1204;

				BgL_arg1239z00_1204 = BGl_rgczd2maxzd2charz00zz__rgc_configz00();
				BGl_specialzd2charzd2numz00zz__rgc_rulesz00 =
					((long) CINT(BgL_arg1239z00_1204) - ((long) 1));
			}
			BGl_za2specialzd2matchzd2charza2z00zz__rgc_rulesz00 = BNIL;
			BGl_za2specialzd2startzd2matchzd2charza2zd2zz__rgc_rulesz00 = BNIL;
			BGl_za2specialzd2stopzd2matchzd2charza2zd2zz__rgc_rulesz00 = BNIL;
			BGl_za2predicatesza2z00zz__rgc_rulesz00 = BNIL;
			BGl_za2submatchzf3za2zf3zz__rgc_rulesz00 = ((bool_t) 0);
			BGl_za2submatchzd2countza2zd2zz__rgc_rulesz00 = ((long) 0);
			return (BGl_za2lockzd2submatchza2zd2zz__rgc_rulesz00 =
				((bool_t) 0), BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zz__rgc_rulesz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1205;

				BgL_headz00_1205 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_2531;
					obj_t BgL_tailz00_2532;

					BgL_prevz00_2531 = BgL_headz00_1205;
					BgL_tailz00_2532 = BgL_l1z00_1;
				BgL_loopz00_2530:
					if (PAIRP(BgL_tailz00_2532))
						{
							obj_t BgL_newzd2prevzd2_2538;

							BgL_newzd2prevzd2_2538 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_2532), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_2531, BgL_newzd2prevzd2_2538);
							{
								obj_t BgL_tailz00_3910;
								obj_t BgL_prevz00_3909;

								BgL_prevz00_3909 = BgL_newzd2prevzd2_2538;
								BgL_tailz00_3910 = CDR(BgL_tailz00_2532);
								BgL_tailz00_2532 = BgL_tailz00_3910;
								BgL_prevz00_2531 = BgL_prevz00_3909;
								goto BgL_loopz00_2530;
							}
						}
					else
						{
							BNIL;
						}
				}
				return CDR(BgL_headz00_1205);
			}
		}

	}



/* rules->regular-tree */
	BGL_EXPORTED_DEF obj_t BGl_ruleszd2ze3regularzd2treeze3zz__rgc_rulesz00(obj_t
		BgL_userzd2envzd2_3, obj_t BgL_clausesz00_4)
	{
		{	/* Rgc/rgcrules.scm 80 */
			BGl_resetzd2specialzd2matchzd2charz12zc0zz__rgc_rulesz00();
			if (NULLP(BgL_clausesz00_4))
				{	/* Rgc/rgcrules.scm 82 */
					return
						BGl_errorz00zz__errorz00(BFALSE, BGl_string2499z00zz__rgc_rulesz00,
						BgL_clausesz00_4);
				}
			else
				{	/* Rgc/rgcrules.scm 84 */
					obj_t BgL_envz00_1214;
					obj_t BgL_dfltz00_1215;

					BgL_envz00_1214 =
						BGl_makezd2variablezd2envz00zz__rgc_rulesz00
						(BGl_appendzd221011zd2zz__rgc_rulesz00(BgL_userzd2envzd2_3,
							BGl_rgczd2envzd2zz__rgc_configz00()));
					{	/* Rgc/rgcrules.scm 85 */
						obj_t BgL_arg1292z00_1279;

						{	/* Rgc/rgcrules.scm 85 */
							obj_t BgL_arg1295z00_1280;

							{	/* Rgc/rgcrules.scm 85 */
								obj_t BgL_arg1296z00_1281;

								BgL_arg1296z00_1281 =
									MAKE_YOUNG_PAIR(BGl_2zd2zd2zz__r4_numbers_6_5z00
									(BGl_rgczd2maxzd2charz00zz__rgc_configz00(),
										BINT(((long) 1))), BNIL);
								BgL_arg1295z00_1280 =
									MAKE_YOUNG_PAIR(BINT(((long) 0)), BgL_arg1296z00_1281);
							}
							BgL_arg1292z00_1279 = MAKE_YOUNG_PAIR(BgL_arg1295z00_1280, BNIL);
						}
						BgL_dfltz00_1215 =
							MAKE_YOUNG_PAIR(BGl_symbol2500z00zz__rgc_rulesz00,
							BgL_arg1292z00_1279);
					}
					{
						obj_t BgL_clausesz00_1220;
						long BgL_matchz00_1221;
						obj_t BgL_branchesz00_1222;
						obj_t BgL_actionsz00_1223;
						obj_t BgL_defsz00_1224;

						BgL_clausesz00_1220 = BgL_clausesz00_4;
						BgL_matchz00_1221 = ((long) 0);
						BgL_branchesz00_1222 = BNIL;
						BgL_actionsz00_1223 = BNIL;
						BgL_defsz00_1224 = BNIL;
					BgL_zc3z04anonymousza31245ze3z87_1225:
						{
							obj_t BgL_rulez00_1227;
							obj_t BgL_actsz00_1228;

							{	/* Rgc/rgcrules.scm 91 */
								obj_t BgL_ezd2104zd2_1231;

								BgL_ezd2104zd2_1231 = CAR(((obj_t) BgL_clausesz00_1220));
								if (PAIRP(BgL_ezd2104zd2_1231))
									{	/* Rgc/rgcrules.scm 86 */
										if (
											(CAR(BgL_ezd2104zd2_1231) ==
												BGl_symbol2512z00zz__rgc_rulesz00))
											{	/* Rgc/rgcrules.scm 86 */
												{	/* Rgc/rgcrules.scm 93 */
													obj_t BgL_arg1253z00_1239;
													obj_t BgL_arg1254z00_1240;

													BgL_arg1253z00_1239 =
														CDR(((obj_t) BgL_clausesz00_1220));
													{	/* Rgc/rgcrules.scm 97 */
														obj_t BgL_arg1256z00_1241;

														BgL_arg1256z00_1241 =
															CAR(((obj_t) BgL_clausesz00_1220));
														BgL_arg1254z00_1240 =
															MAKE_YOUNG_PAIR(BgL_arg1256z00_1241,
															BgL_defsz00_1224);
													}
													{
														obj_t BgL_defsz00_3941;
														obj_t BgL_clausesz00_3940;

														BgL_clausesz00_3940 = BgL_arg1253z00_1239;
														BgL_defsz00_3941 = BgL_arg1254z00_1240;
														BgL_defsz00_1224 = BgL_defsz00_3941;
														BgL_clausesz00_1220 = BgL_clausesz00_3940;
														goto BgL_zc3z04anonymousza31245ze3z87_1225;
													}
												}
											}
										else
											{	/* Rgc/rgcrules.scm 86 */
												obj_t BgL_cdrzd2114zd2_1235;

												BgL_cdrzd2114zd2_1235 = CDR(BgL_ezd2104zd2_1231);
												if (PAIRP(BgL_cdrzd2114zd2_1235))
													{	/* Rgc/rgcrules.scm 86 */
														BgL_rulez00_1227 = CAR(BgL_ezd2104zd2_1231);
														BgL_actsz00_1228 = BgL_cdrzd2114zd2_1235;
														{	/* Rgc/rgcrules.scm 99 */
															obj_t BgL_actz00_1242;

															{	/* Rgc/rgcrules.scm 99 */
																obj_t BgL_arg1289z00_1275;

																BgL_arg1289z00_1275 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_actsz00_1228, BNIL);
																BgL_actz00_1242 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol2502z00zz__rgc_rulesz00,
																	BgL_arg1289z00_1275);
															}
															if (NULLP(CDR(((obj_t) BgL_clausesz00_1220))))
																{	/* Rgc/rgcrules.scm 100 */
																	if (
																		(BgL_rulez00_1227 ==
																			BGl_symbol2504z00zz__rgc_rulesz00))
																		{	/* Rgc/rgcrules.scm 103 */
																			obj_t BgL_val0_1099z00_1246;
																			obj_t BgL_val1_1100z00_1247;
																			bool_t BgL_val3_1102z00_1249;

																			{	/* Rgc/rgcrules.scm 103 */
																				obj_t BgL_arg1263z00_1251;

																				BgL_arg1263z00_1251 =
																					MAKE_YOUNG_PAIR
																					(BGl_expandzd2matchzd2rulez00zz__rgc_rulesz00
																					(BgL_matchz00_1221, BgL_envz00_1214,
																						BgL_dfltz00_1215),
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_branchesz00_1222, BNIL));
																				BgL_val0_1099z00_1246 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2506z00zz__rgc_rulesz00,
																					BgL_arg1263z00_1251);
																			}
																			{	/* Rgc/rgcrules.scm 105 */
																				obj_t BgL_arg1271z00_1254;

																				BgL_arg1271z00_1254 =
																					MAKE_YOUNG_PAIR(BgL_actz00_1242,
																					BgL_actionsz00_1223);
																				BgL_val1_1100z00_1247 =
																					bgl_reverse_bang(BgL_arg1271z00_1254);
																			}
																			BgL_val3_1102z00_1249 =
																				BGl_za2submatchzf3za2zf3zz__rgc_rulesz00;
																			{	/* Rgc/rgcrules.scm 103 */
																				int BgL_res2210z00_2551;

																				{	/* Rgc/rgcrules.scm 103 */
																					int BgL_tmpz00_3959;

																					BgL_tmpz00_3959 = (int) (((long) 5));
																					BgL_res2210z00_2551 =
																						BGL_MVALUES_NUMBER_SET
																						(BgL_tmpz00_3959);
																				} BgL_res2210z00_2551;
																			}
																			{	/* Rgc/rgcrules.scm 103 */
																				int BgL_tmpz00_3962;

																				BgL_tmpz00_3962 = (int) (((long) 1));
																				BGL_MVALUES_VAL_SET(BgL_tmpz00_3962,
																					BgL_val1_1100z00_1247);
																			}
																			{	/* Rgc/rgcrules.scm 103 */
																				obj_t BgL_auxz00_3967;
																				int BgL_tmpz00_3965;

																				BgL_auxz00_3967 =
																					BINT(BgL_matchz00_1221);
																				BgL_tmpz00_3965 = (int) (((long) 2));
																				BGL_MVALUES_VAL_SET(BgL_tmpz00_3965,
																					BgL_auxz00_3967);
																			}
																			{	/* Rgc/rgcrules.scm 103 */
																				obj_t BgL_auxz00_3972;
																				int BgL_tmpz00_3970;

																				BgL_auxz00_3972 =
																					BBOOL(BgL_val3_1102z00_1249);
																				BgL_tmpz00_3970 = (int) (((long) 3));
																				BGL_MVALUES_VAL_SET(BgL_tmpz00_3970,
																					BgL_auxz00_3972);
																			}
																			{	/* Rgc/rgcrules.scm 103 */
																				int BgL_tmpz00_3975;

																				BgL_tmpz00_3975 = (int) (((long) 4));
																				BGL_MVALUES_VAL_SET(BgL_tmpz00_3975,
																					BgL_defsz00_1224);
																			}
																			return BgL_val0_1099z00_1246;
																		}
																	else
																		{	/* Rgc/rgcrules.scm 109 */
																			obj_t BgL_val0_1104z00_1255;
																			obj_t BgL_val1_1105z00_1256;
																			long BgL_val2_1106z00_1257;
																			bool_t BgL_val3_1107z00_1258;

																			{	/* Rgc/rgcrules.scm 109 */
																				obj_t BgL_arg1273z00_1260;

																				{	/* Rgc/rgcrules.scm 109 */
																					obj_t BgL_arg1274z00_1261;
																					obj_t BgL_arg1275z00_1262;

																					BgL_arg1274z00_1261 =
																						BGl_expandzd2matchzd2rulez00zz__rgc_rulesz00
																						((BgL_matchz00_1221 + ((long) 1)),
																						BgL_envz00_1214, BgL_dfltz00_1215);
																					BgL_arg1275z00_1262 =
																						MAKE_YOUNG_PAIR
																						(BGl_expandzd2matchzd2rulez00zz__rgc_rulesz00
																						(BgL_matchz00_1221, BgL_envz00_1214,
																							BgL_rulez00_1227),
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_branchesz00_1222, BNIL));
																					BgL_arg1273z00_1260 =
																						MAKE_YOUNG_PAIR(BgL_arg1274z00_1261,
																						BgL_arg1275z00_1262);
																				}
																				BgL_val0_1104z00_1255 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2506z00zz__rgc_rulesz00,
																					BgL_arg1273z00_1260);
																			}
																			{	/* Rgc/rgcrules.scm 114 */
																				obj_t BgL_arg1281z00_1266;

																				{	/* Rgc/rgcrules.scm 114 */
																					obj_t BgL_arg1282z00_1267;

																					BgL_arg1282z00_1267 =
																						MAKE_YOUNG_PAIR(BgL_actz00_1242,
																						BgL_actionsz00_1223);
																					BgL_arg1281z00_1266 =
																						MAKE_YOUNG_PAIR
																						(BGl_list2508z00zz__rgc_rulesz00,
																						BgL_arg1282z00_1267);
																				}
																				BgL_val1_1105z00_1256 =
																					bgl_reverse_bang(BgL_arg1281z00_1266);
																			}
																			BgL_val2_1106z00_1257 =
																				(((long) 1) + BgL_matchz00_1221);
																			BgL_val3_1107z00_1258 =
																				BGl_za2submatchzf3za2zf3zz__rgc_rulesz00;
																			{	/* Rgc/rgcrules.scm 109 */
																				int BgL_res2213z00_2556;

																				{	/* Rgc/rgcrules.scm 109 */
																					int BgL_tmpz00_3989;

																					BgL_tmpz00_3989 = (int) (((long) 5));
																					BgL_res2213z00_2556 =
																						BGL_MVALUES_NUMBER_SET
																						(BgL_tmpz00_3989);
																				} BgL_res2213z00_2556;
																			}
																			{	/* Rgc/rgcrules.scm 109 */
																				int BgL_tmpz00_3992;

																				BgL_tmpz00_3992 = (int) (((long) 1));
																				BGL_MVALUES_VAL_SET(BgL_tmpz00_3992,
																					BgL_val1_1105z00_1256);
																			}
																			{	/* Rgc/rgcrules.scm 109 */
																				obj_t BgL_auxz00_3997;
																				int BgL_tmpz00_3995;

																				BgL_auxz00_3997 =
																					BINT(BgL_val2_1106z00_1257);
																				BgL_tmpz00_3995 = (int) (((long) 2));
																				BGL_MVALUES_VAL_SET(BgL_tmpz00_3995,
																					BgL_auxz00_3997);
																			}
																			{	/* Rgc/rgcrules.scm 109 */
																				obj_t BgL_auxz00_4002;
																				int BgL_tmpz00_4000;

																				BgL_auxz00_4002 =
																					BBOOL(BgL_val3_1107z00_1258);
																				BgL_tmpz00_4000 = (int) (((long) 3));
																				BGL_MVALUES_VAL_SET(BgL_tmpz00_4000,
																					BgL_auxz00_4002);
																			}
																			{	/* Rgc/rgcrules.scm 109 */
																				int BgL_tmpz00_4005;

																				BgL_tmpz00_4005 = (int) (((long) 4));
																				BGL_MVALUES_VAL_SET(BgL_tmpz00_4005,
																					BgL_defsz00_1224);
																			}
																			return BgL_val0_1104z00_1255;
																		}
																}
															else
																{	/* Rgc/rgcrules.scm 100 */
																	if (
																		(BgL_rulez00_1227 ==
																			BGl_symbol2504z00zz__rgc_rulesz00))
																		{	/* Rgc/rgcrules.scm 121 */
																			return
																				BGl_errorz00zz__errorz00(BFALSE,
																				BGl_string2511z00zz__rgc_rulesz00,
																				BgL_clausesz00_1220);
																		}
																	else
																		{	/* Rgc/rgcrules.scm 123 */
																			obj_t BgL_erulez00_1269;

																			BgL_erulez00_1269 =
																				BGl_expandzd2matchzd2rulez00zz__rgc_rulesz00
																				(BgL_matchz00_1221, BgL_envz00_1214,
																				BgL_rulez00_1227);
																			{	/* Rgc/rgcrules.scm 124 */
																				obj_t BgL_arg1284z00_1270;
																				long BgL_arg1285z00_1271;
																				obj_t BgL_arg1286z00_1272;
																				obj_t BgL_arg1287z00_1273;

																				BgL_arg1284z00_1270 =
																					CDR(((obj_t) BgL_clausesz00_1220));
																				BgL_arg1285z00_1271 =
																					(BgL_matchz00_1221 + ((long) 1));
																				BgL_arg1286z00_1272 =
																					MAKE_YOUNG_PAIR(BgL_erulez00_1269,
																					BgL_branchesz00_1222);
																				BgL_arg1287z00_1273 =
																					MAKE_YOUNG_PAIR(BgL_actz00_1242,
																					BgL_actionsz00_1223);
																				{
																					obj_t BgL_actionsz00_4020;
																					obj_t BgL_branchesz00_4019;
																					long BgL_matchz00_4018;
																					obj_t BgL_clausesz00_4017;

																					BgL_clausesz00_4017 =
																						BgL_arg1284z00_1270;
																					BgL_matchz00_4018 =
																						BgL_arg1285z00_1271;
																					BgL_branchesz00_4019 =
																						BgL_arg1286z00_1272;
																					BgL_actionsz00_4020 =
																						BgL_arg1287z00_1273;
																					BgL_actionsz00_1223 =
																						BgL_actionsz00_4020;
																					BgL_branchesz00_1222 =
																						BgL_branchesz00_4019;
																					BgL_matchz00_1221 = BgL_matchz00_4018;
																					BgL_clausesz00_1220 =
																						BgL_clausesz00_4017;
																					goto
																						BgL_zc3z04anonymousza31245ze3z87_1225;
																				}
																			}
																		}
																}
														}
													}
												else
													{	/* Rgc/rgcrules.scm 86 */
														return
															BGl_errorz00zz__errorz00(BFALSE,
															BGl_string2514z00zz__rgc_rulesz00,
															BgL_clausesz00_1220);
													}
											}
									}
								else
									{	/* Rgc/rgcrules.scm 86 */
										return
											BGl_errorz00zz__errorz00(BFALSE,
											BGl_string2514z00zz__rgc_rulesz00, BgL_clausesz00_1220);
									}
							}
						}
					}
				}
		}

	}



/* &rules->regular-tree */
	obj_t BGl_z62ruleszd2ze3regularzd2treez81zz__rgc_rulesz00(obj_t
		BgL_envz00_3782, obj_t BgL_userzd2envzd2_3783, obj_t BgL_clausesz00_3784)
	{
		{	/* Rgc/rgcrules.scm 80 */
			return
				BGl_ruleszd2ze3regularzd2treeze3zz__rgc_rulesz00(BgL_userzd2envzd2_3783,
				BgL_clausesz00_3784);
		}

	}



/* make-variable-env */
	obj_t BGl_makezd2variablezd2envz00zz__rgc_rulesz00(obj_t BgL_bindingsz00_5)
	{
		{	/* Rgc/rgcrules.scm 138 */
			if (NULLP(BgL_bindingsz00_5))
				{	/* Rgc/rgcrules.scm 139 */
					return BNIL;
				}
			else
				{	/* Rgc/rgcrules.scm 141 */
					obj_t BgL_ezd2125zd2_1289;

					BgL_ezd2125zd2_1289 = CAR(((obj_t) BgL_bindingsz00_5));
					if (PAIRP(BgL_ezd2125zd2_1289))
						{	/* Rgc/rgcrules.scm 141 */
							obj_t BgL_carzd2130zd2_1291;
							obj_t BgL_cdrzd2131zd2_1292;

							BgL_carzd2130zd2_1291 = CAR(BgL_ezd2125zd2_1289);
							BgL_cdrzd2131zd2_1292 = CDR(BgL_ezd2125zd2_1289);
							if (SYMBOLP(BgL_carzd2130zd2_1291))
								{	/* Rgc/rgcrules.scm 141 */
									if (PAIRP(BgL_cdrzd2131zd2_1292))
										{	/* Rgc/rgcrules.scm 141 */
											if (NULLP(CDR(BgL_cdrzd2131zd2_1292)))
												{	/* Rgc/rgcrules.scm 141 */
													obj_t BgL_arg1306z00_1297;

													BgL_arg1306z00_1297 = CAR(BgL_cdrzd2131zd2_1292);
													{	/* Rgc/rgcrules.scm 143 */
														obj_t BgL_envz00_2582;

														{	/* Rgc/rgcrules.scm 143 */
															obj_t BgL_arg1309z00_2583;

															BgL_arg1309z00_2583 =
																CDR(((obj_t) BgL_bindingsz00_5));
															BgL_envz00_2582 =
																BGl_makezd2variablezd2envz00zz__rgc_rulesz00
																(BgL_arg1309z00_2583);
														}
														{	/* Rgc/rgcrules.scm 144 */
															obj_t BgL_arg1308z00_2584;

															BgL_arg1308z00_2584 =
																MAKE_YOUNG_PAIR(BgL_carzd2130zd2_1291,
																BgL_arg1306z00_1297);
															return MAKE_YOUNG_PAIR(BgL_arg1308z00_2584,
																BgL_envz00_2582);
														}
													}
												}
											else
												{	/* Rgc/rgcrules.scm 141 */
													return
														BGl_errorz00zz__errorz00(BFALSE,
														BGl_string2515z00zz__rgc_rulesz00,
														BgL_ezd2125zd2_1289);
												}
										}
									else
										{	/* Rgc/rgcrules.scm 141 */
											return
												BGl_errorz00zz__errorz00(BFALSE,
												BGl_string2515z00zz__rgc_rulesz00, BgL_ezd2125zd2_1289);
										}
								}
							else
								{	/* Rgc/rgcrules.scm 141 */
									return
										BGl_errorz00zz__errorz00(BFALSE,
										BGl_string2515z00zz__rgc_rulesz00, BgL_ezd2125zd2_1289);
								}
						}
					else
						{	/* Rgc/rgcrules.scm 141 */
							return
								BGl_errorz00zz__errorz00(BFALSE,
								BGl_string2515z00zz__rgc_rulesz00, BgL_ezd2125zd2_1289);
						}
				}
		}

	}



/* special-char? */
	BGL_EXPORTED_DEF bool_t BGl_specialzd2charzf3z21zz__rgc_rulesz00(int
		BgL_charz00_6)
	{
		{	/* Rgc/rgcrules.scm 171 */
			{	/* Rgc/rgcrules.scm 172 */
				obj_t BgL_arg1311z00_2596;

				BgL_arg1311z00_2596 = BGl_rgczd2maxzd2charz00zz__rgc_configz00();
				return ((long) (BgL_charz00_6) >= (long) CINT(BgL_arg1311z00_2596));
		}}

	}



/* &special-char? */
	obj_t BGl_z62specialzd2charzf3z43zz__rgc_rulesz00(obj_t BgL_envz00_3785,
		obj_t BgL_charz00_3786)
	{
		{	/* Rgc/rgcrules.scm 171 */
			{	/* Rgc/rgcrules.scm 172 */
				bool_t BgL_tmpz00_4054;

				{	/* Rgc/rgcrules.scm 172 */
					int BgL_auxz00_4055;

					{	/* Rgc/rgcrules.scm 172 */
						obj_t BgL_tmpz00_4056;

						if (INTEGERP(BgL_charz00_3786))
							{	/* Rgc/rgcrules.scm 172 */
								BgL_tmpz00_4056 = BgL_charz00_3786;
							}
						else
							{
								obj_t BgL_auxz00_4059;

								BgL_auxz00_4059 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2516z00zz__rgc_rulesz00, BINT(((long) 6901)),
									BGl_string2517z00zz__rgc_rulesz00,
									BGl_string2518z00zz__rgc_rulesz00, BgL_charz00_3786);
								FAILURE(BgL_auxz00_4059, BFALSE, BFALSE);
							}
						BgL_auxz00_4055 = CINT(BgL_tmpz00_4056);
					}
					BgL_tmpz00_4054 =
						BGl_specialzd2charzf3z21zz__rgc_rulesz00(BgL_auxz00_4055);
				}
				return BBOOL(BgL_tmpz00_4054);
			}
		}

	}



/* tree-max-char */
	BGL_EXPORTED_DEF obj_t BGl_treezd2maxzd2charz00zz__rgc_rulesz00()
	{
		{	/* Rgc/rgcrules.scm 181 */
			{	/* Rgc/rgcrules.scm 182 */
				long BgL_za72za7_2600;

				BgL_za72za7_2600 = BGl_specialzd2charzd2numz00zz__rgc_rulesz00;
				return BINT((((long) 1) + BgL_za72za7_2600));
		}}

	}



/* &tree-max-char */
	obj_t BGl_z62treezd2maxzd2charz62zz__rgc_rulesz00(obj_t BgL_envz00_3787)
	{
		{	/* Rgc/rgcrules.scm 181 */
			return BGl_treezd2maxzd2charz00zz__rgc_rulesz00();
		}

	}



/* reset-special-match-char! */
	BGL_EXPORTED_DEF obj_t
		BGl_resetzd2specialzd2matchzd2charz12zc0zz__rgc_rulesz00()
	{
		{	/* Rgc/rgcrules.scm 196 */
			BGl_za2submatchzf3za2zf3zz__rgc_rulesz00 = ((bool_t) 0);
			BGl_za2predicatesza2z00zz__rgc_rulesz00 = BNIL;
			return (BGl_za2specialzd2matchzd2charza2z00zz__rgc_rulesz00 =
				BNIL, BUNSPEC);
		}

	}



/* &reset-special-match-char! */
	obj_t BGl_z62resetzd2specialzd2matchzd2charz12za2zz__rgc_rulesz00(obj_t
		BgL_envz00_3788)
	{
		{	/* Rgc/rgcrules.scm 196 */
			return BGl_resetzd2specialzd2matchzd2charz12zc0zz__rgc_rulesz00();
		}

	}



/* special-char-match? */
	BGL_EXPORTED_DEF bool_t BGl_specialzd2charzd2matchzf3zf3zz__rgc_rulesz00(int
		BgL_charz00_9)
	{
		{	/* Rgc/rgcrules.scm 210 */
			{	/* Rgc/rgcrules.scm 211 */
				obj_t BgL_tmpz00_4070;

				BgL_tmpz00_4070 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BINT(BgL_charz00_9),
					BGl_za2specialzd2matchzd2charza2z00zz__rgc_rulesz00);
				return PAIRP(BgL_tmpz00_4070);
			}
		}

	}



/* &special-char-match? */
	obj_t BGl_z62specialzd2charzd2matchzf3z91zz__rgc_rulesz00(obj_t
		BgL_envz00_3789, obj_t BgL_charz00_3790)
	{
		{	/* Rgc/rgcrules.scm 210 */
			{	/* Rgc/rgcrules.scm 211 */
				bool_t BgL_tmpz00_4074;

				{	/* Rgc/rgcrules.scm 211 */
					int BgL_auxz00_4075;

					{	/* Rgc/rgcrules.scm 211 */
						obj_t BgL_tmpz00_4076;

						if (INTEGERP(BgL_charz00_3790))
							{	/* Rgc/rgcrules.scm 211 */
								BgL_tmpz00_4076 = BgL_charz00_3790;
							}
						else
							{
								obj_t BgL_auxz00_4079;

								BgL_auxz00_4079 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2516z00zz__rgc_rulesz00, BINT(((long) 8835)),
									BGl_string2519z00zz__rgc_rulesz00,
									BGl_string2518z00zz__rgc_rulesz00, BgL_charz00_3790);
								FAILURE(BgL_auxz00_4079, BFALSE, BFALSE);
							}
						BgL_auxz00_4075 = CINT(BgL_tmpz00_4076);
					}
					BgL_tmpz00_4074 =
						BGl_specialzd2charzd2matchzf3zf3zz__rgc_rulesz00(BgL_auxz00_4075);
				}
				return BBOOL(BgL_tmpz00_4074);
			}
		}

	}



/* special-match-char->rule-number */
	BGL_EXPORTED_DEF int
		BGl_specialzd2matchzd2charzd2ze3rulezd2numberze3zz__rgc_rulesz00(int
		BgL_charz00_10)
	{
		{	/* Rgc/rgcrules.scm 216 */
			{	/* Rgc/rgcrules.scm 217 */
				obj_t BgL_arg1314z00_2605;

				BgL_arg1314z00_2605 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BINT(BgL_charz00_10),
					BGl_za2specialzd2matchzd2charza2z00zz__rgc_rulesz00);
				return CINT(CDR(((obj_t) BgL_arg1314z00_2605)));
			}
		}

	}



/* &special-match-char->rule-number */
	obj_t
		BGl_z62specialzd2matchzd2charzd2ze3rulezd2numberz81zz__rgc_rulesz00(obj_t
		BgL_envz00_3791, obj_t BgL_charz00_3792)
	{
		{	/* Rgc/rgcrules.scm 216 */
			{	/* Rgc/rgcrules.scm 217 */
				int BgL_tmpz00_4091;

				{	/* Rgc/rgcrules.scm 217 */
					int BgL_auxz00_4092;

					{	/* Rgc/rgcrules.scm 217 */
						obj_t BgL_tmpz00_4093;

						if (INTEGERP(BgL_charz00_3792))
							{	/* Rgc/rgcrules.scm 217 */
								BgL_tmpz00_4093 = BgL_charz00_3792;
							}
						else
							{
								obj_t BgL_auxz00_4096;

								BgL_auxz00_4096 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2516z00zz__rgc_rulesz00, BINT(((long) 9148)),
									BGl_string2520z00zz__rgc_rulesz00,
									BGl_string2518z00zz__rgc_rulesz00, BgL_charz00_3792);
								FAILURE(BgL_auxz00_4096, BFALSE, BFALSE);
							}
						BgL_auxz00_4092 = CINT(BgL_tmpz00_4093);
					}
					BgL_tmpz00_4091 =
						BGl_specialzd2matchzd2charzd2ze3rulezd2numberze3zz__rgc_rulesz00
						(BgL_auxz00_4092);
				}
				return BINT(BgL_tmpz00_4091);
			}
		}

	}



/* get-new-submatch */
	long BGl_getzd2newzd2submatchz00zz__rgc_rulesz00()
	{
		{	/* Rgc/rgcrules.scm 233 */
			BGl_za2submatchzf3za2zf3zz__rgc_rulesz00 = ((bool_t) 1);
			BGl_za2submatchzd2countza2zd2zz__rgc_rulesz00 =
				(((long) 1) + BGl_za2submatchzd2countza2zd2zz__rgc_rulesz00);
			return BGl_za2submatchzd2countza2zd2zz__rgc_rulesz00;
		}

	}



/* add-predicate-match! */
	obj_t BGl_addzd2predicatezd2matchz12z12zz__rgc_rulesz00(long BgL_matchz00_11,
		obj_t BgL_predicatez00_12)
	{
		{	/* Rgc/rgcrules.scm 241 */
			{	/* Rgc/rgcrules.scm 242 */
				obj_t BgL_cellz00_1307;

				BgL_cellz00_1307 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BINT(BgL_matchz00_11),
					BGl_za2predicatesza2z00zz__rgc_rulesz00);
				if (PAIRP(BgL_cellz00_1307))
					{	/* Rgc/rgcrules.scm 244 */
						obj_t BgL_arg1316z00_1309;

						BgL_arg1316z00_1309 =
							MAKE_YOUNG_PAIR(BgL_predicatez00_12, CDR(BgL_cellz00_1307));
						return SET_CDR(BgL_cellz00_1307, BgL_arg1316z00_1309);
					}
				else
					{	/* Rgc/rgcrules.scm 245 */
						obj_t BgL_arg1318z00_1311;

						{	/* Rgc/rgcrules.scm 245 */
							obj_t BgL_arg1319z00_1312;

							{	/* Rgc/rgcrules.scm 245 */
								obj_t BgL_list1320z00_1313;

								BgL_list1320z00_1313 =
									MAKE_YOUNG_PAIR(BgL_predicatez00_12, BNIL);
								BgL_arg1319z00_1312 = BgL_list1320z00_1313;
							}
							BgL_arg1318z00_1311 =
								MAKE_YOUNG_PAIR(BINT(BgL_matchz00_11), BgL_arg1319z00_1312);
						}
						return (BGl_za2predicatesza2z00zz__rgc_rulesz00 =
							MAKE_YOUNG_PAIR(BgL_arg1318z00_1311,
								BGl_za2predicatesza2z00zz__rgc_rulesz00), BUNSPEC);
					}
			}
		}

	}



/* predicate-match */
	BGL_EXPORTED_DEF obj_t BGl_predicatezd2matchzd2zz__rgc_rulesz00(int
		BgL_matchz00_13)
	{
		{	/* Rgc/rgcrules.scm 251 */
			{	/* Rgc/rgcrules.scm 252 */
				obj_t BgL_cellz00_2613;

				BgL_cellz00_2613 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BINT(BgL_matchz00_13),
					BGl_za2predicatesza2z00zz__rgc_rulesz00);
				if (PAIRP(BgL_cellz00_2613))
					{	/* Rgc/rgcrules.scm 253 */
						return CDR(BgL_cellz00_2613);
					}
				else
					{	/* Rgc/rgcrules.scm 253 */
						return BFALSE;
					}
			}
		}

	}



/* &predicate-match */
	obj_t BGl_z62predicatezd2matchzb0zz__rgc_rulesz00(obj_t BgL_envz00_3793,
		obj_t BgL_matchz00_3794)
	{
		{	/* Rgc/rgcrules.scm 251 */
			{	/* Rgc/rgcrules.scm 252 */
				int BgL_auxz00_4120;

				{	/* Rgc/rgcrules.scm 252 */
					obj_t BgL_tmpz00_4121;

					if (INTEGERP(BgL_matchz00_3794))
						{	/* Rgc/rgcrules.scm 252 */
							BgL_tmpz00_4121 = BgL_matchz00_3794;
						}
					else
						{
							obj_t BgL_auxz00_4124;

							BgL_auxz00_4124 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2516z00zz__rgc_rulesz00, BINT(((long) 10790)),
								BGl_string2521z00zz__rgc_rulesz00,
								BGl_string2518z00zz__rgc_rulesz00, BgL_matchz00_3794);
							FAILURE(BgL_auxz00_4124, BFALSE, BFALSE);
						}
					BgL_auxz00_4120 = CINT(BgL_tmpz00_4121);
				}
				return BGl_predicatezd2matchzd2zz__rgc_rulesz00(BgL_auxz00_4120);
			}
		}

	}



/* expand-match-rule */
	obj_t BGl_expandzd2matchzd2rulez00zz__rgc_rulesz00(long BgL_matchz00_14,
		obj_t BgL_envz00_15, obj_t BgL_rulez00_16)
	{
		{	/* Rgc/rgcrules.scm 264 */
			BGl_za2submatchzd2countza2zd2zz__rgc_rulesz00 = ((long) 0);
			{	/* Rgc/rgcrules.scm 266 */
				long BgL_specialzd2charzd2_1316;

				BGl_specialzd2charzd2numz00zz__rgc_rulesz00 =
					(((long) 1) + BGl_specialzd2charzd2numz00zz__rgc_rulesz00);
				BgL_specialzd2charzd2_1316 =
					BGl_specialzd2charzd2numz00zz__rgc_rulesz00;
				{	/* Rgc/rgcrules.scm 205 */
					obj_t BgL_arg1312z00_2619;

					BgL_arg1312z00_2619 =
						MAKE_YOUNG_PAIR(BINT(BgL_specialzd2charzd2_1316),
						BINT(BgL_matchz00_14));
					BGl_za2specialzd2matchzd2charza2z00zz__rgc_rulesz00 =
						MAKE_YOUNG_PAIR(BgL_arg1312z00_2619,
						BGl_za2specialzd2matchzd2charza2z00zz__rgc_rulesz00);
				}
				{
					obj_t BgL_rulez00_1318;

					BgL_rulez00_1318 = BgL_rulez00_16;
					{	/* Rgc/rgcrules.scm 272 */
						obj_t BgL_arg1324z00_1320;

						{	/* Rgc/rgcrules.scm 272 */
							obj_t BgL_arg1325z00_1321;

							{
								obj_t BgL_rulez00_1325;

								BgL_rulez00_1325 = BgL_rulez00_1318;
							BgL_zc3z04anonymousza31328ze3z87_1326:
								if (PAIRP(BgL_rulez00_1325))
									{	/* Rgc/rgcrules.scm 272 */
										obj_t BgL_cdrzd2153zd2_1344;

										BgL_cdrzd2153zd2_1344 = CDR(BgL_rulez00_1325);
										if (
											(CAR(BgL_rulez00_1325) ==
												BGl_symbol2522z00zz__rgc_rulesz00))
											{	/* Rgc/rgcrules.scm 272 */
												if (PAIRP(BgL_cdrzd2153zd2_1344))
													{	/* Rgc/rgcrules.scm 272 */
														obj_t BgL_cdrzd2157zd2_1348;

														BgL_cdrzd2157zd2_1348 = CDR(BgL_cdrzd2153zd2_1344);
														if (PAIRP(BgL_cdrzd2157zd2_1348))
															{	/* Rgc/rgcrules.scm 272 */
																if (NULLP(CDR(BgL_cdrzd2157zd2_1348)))
																	{	/* Rgc/rgcrules.scm 272 */
																		obj_t BgL_arg1337z00_1352;
																		obj_t BgL_arg1338z00_1353;

																		BgL_arg1337z00_1352 =
																			CAR(BgL_cdrzd2153zd2_1344);
																		BgL_arg1338z00_1353 =
																			CAR(BgL_cdrzd2157zd2_1348);
																		BGl_addzd2predicatezd2matchz12z12zz__rgc_rulesz00
																			(BgL_matchz00_14, BgL_arg1337z00_1352);
																		{
																			obj_t BgL_rulez00_4152;

																			BgL_rulez00_4152 = BgL_arg1338z00_1353;
																			BgL_rulez00_1325 = BgL_rulez00_4152;
																			goto
																				BgL_zc3z04anonymousza31328ze3z87_1326;
																		}
																	}
																else
																	{	/* Rgc/rgcrules.scm 272 */
																		BgL_arg1325z00_1321 =
																			BGl_expandzd2rulezd2zz__rgc_rulesz00
																			(BgL_matchz00_14, BgL_envz00_15,
																			BgL_rulez00_1325);
																	}
															}
														else
															{	/* Rgc/rgcrules.scm 272 */
																BgL_arg1325z00_1321 =
																	BGl_expandzd2rulezd2zz__rgc_rulesz00
																	(BgL_matchz00_14, BgL_envz00_15,
																	BgL_rulez00_1325);
															}
													}
												else
													{	/* Rgc/rgcrules.scm 272 */
														BgL_arg1325z00_1321 =
															BGl_expandzd2rulezd2zz__rgc_rulesz00
															(BgL_matchz00_14, BgL_envz00_15,
															BgL_rulez00_1325);
													}
											}
										else
											{	/* Rgc/rgcrules.scm 272 */
												if (
													(CAR(BgL_rulez00_1325) ==
														BGl_symbol2524z00zz__rgc_rulesz00))
													{	/* Rgc/rgcrules.scm 272 */
														if (PAIRP(BgL_cdrzd2153zd2_1344))
															{	/* Rgc/rgcrules.scm 272 */
																obj_t BgL_cdrzd2208zd2_1359;

																BgL_cdrzd2208zd2_1359 =
																	CDR(BgL_cdrzd2153zd2_1344);
																if (PAIRP(BgL_cdrzd2208zd2_1359))
																	{	/* Rgc/rgcrules.scm 272 */
																		if (NULLP(CDR(BgL_cdrzd2208zd2_1359)))
																			{	/* Rgc/rgcrules.scm 272 */
																				obj_t BgL_arg1346z00_1363;
																				obj_t BgL_arg1347z00_1364;

																				BgL_arg1346z00_1363 =
																					CAR(BgL_cdrzd2153zd2_1344);
																				BgL_arg1347z00_1364 =
																					CAR(BgL_cdrzd2208zd2_1359);
																				{	/* Rgc/rgcrules.scm 279 */
																					obj_t BgL_arg1385z00_2692;

																					{	/* Rgc/rgcrules.scm 279 */
																						obj_t BgL_arg1386z00_2693;

																						{	/* Rgc/rgcrules.scm 279 */
																							obj_t BgL_arg1387z00_2694;

																							{	/* Rgc/rgcrules.scm 279 */
																								obj_t BgL_arg1388z00_2695;

																								{	/* Rgc/rgcrules.scm 279 */
																									obj_t BgL_arg1389z00_2696;

																									BgL_arg1389z00_2696 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1346z00_1363, BNIL);
																									BgL_arg1388z00_2695 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2526z00zz__rgc_rulesz00,
																										BgL_arg1389z00_2696);
																								}
																								BgL_arg1387z00_2694 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1388z00_2695, BNIL);
																							}
																							BgL_arg1386z00_2693 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2528z00zz__rgc_rulesz00,
																								BgL_arg1387z00_2694);
																						}
																						BgL_arg1385z00_2692 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2530z00zz__rgc_rulesz00,
																							BgL_arg1386z00_2693);
																					}
																					BGl_addzd2predicatezd2matchz12z12zz__rgc_rulesz00
																						(BgL_matchz00_14,
																						BgL_arg1385z00_2692);
																				}
																				{
																					obj_t BgL_rulez00_4175;

																					BgL_rulez00_4175 =
																						BgL_arg1347z00_1364;
																					BgL_rulez00_1325 = BgL_rulez00_4175;
																					goto
																						BgL_zc3z04anonymousza31328ze3z87_1326;
																				}
																			}
																		else
																			{	/* Rgc/rgcrules.scm 272 */
																				BgL_arg1325z00_1321 =
																					BGl_expandzd2rulezd2zz__rgc_rulesz00
																					(BgL_matchz00_14, BgL_envz00_15,
																					BgL_rulez00_1325);
																			}
																	}
																else
																	{	/* Rgc/rgcrules.scm 272 */
																		BgL_arg1325z00_1321 =
																			BGl_expandzd2rulezd2zz__rgc_rulesz00
																			(BgL_matchz00_14, BgL_envz00_15,
																			BgL_rulez00_1325);
																	}
															}
														else
															{	/* Rgc/rgcrules.scm 272 */
																BgL_arg1325z00_1321 =
																	BGl_expandzd2rulezd2zz__rgc_rulesz00
																	(BgL_matchz00_14, BgL_envz00_15,
																	BgL_rulez00_1325);
															}
													}
												else
													{	/* Rgc/rgcrules.scm 272 */
														obj_t BgL_cdrzd2241zd2_1366;

														BgL_cdrzd2241zd2_1366 = CDR(BgL_rulez00_1325);
														if (
															(CAR(BgL_rulez00_1325) ==
																BGl_symbol2532z00zz__rgc_rulesz00))
															{	/* Rgc/rgcrules.scm 272 */
																if (PAIRP(BgL_cdrzd2241zd2_1366))
																	{	/* Rgc/rgcrules.scm 272 */
																		if (NULLP(CDR(BgL_cdrzd2241zd2_1366)))
																			{	/* Rgc/rgcrules.scm 272 */
																				obj_t BgL_arg1355z00_1372;

																				BgL_arg1355z00_1372 =
																					CAR(BgL_cdrzd2241zd2_1366);
																				BGl_addzd2predicatezd2matchz12z12zz__rgc_rulesz00
																					(BgL_matchz00_14,
																					BGl_list2534z00zz__rgc_rulesz00);
																				{
																					obj_t BgL_rulez00_4190;

																					BgL_rulez00_4190 =
																						BgL_arg1355z00_1372;
																					BgL_rulez00_1325 = BgL_rulez00_4190;
																					goto
																						BgL_zc3z04anonymousza31328ze3z87_1326;
																				}
																			}
																		else
																			{	/* Rgc/rgcrules.scm 272 */
																				BgL_arg1325z00_1321 =
																					BGl_expandzd2rulezd2zz__rgc_rulesz00
																					(BgL_matchz00_14, BgL_envz00_15,
																					BgL_rulez00_1325);
																			}
																	}
																else
																	{	/* Rgc/rgcrules.scm 272 */
																		BgL_arg1325z00_1321 =
																			BGl_expandzd2rulezd2zz__rgc_rulesz00
																			(BgL_matchz00_14, BgL_envz00_15,
																			BgL_rulez00_1325);
																	}
															}
														else
															{	/* Rgc/rgcrules.scm 272 */
																if (
																	(CAR(BgL_rulez00_1325) ==
																		BGl_symbol2539z00zz__rgc_rulesz00))
																	{	/* Rgc/rgcrules.scm 272 */
																		if (PAIRP(BgL_cdrzd2241zd2_1366))
																			{	/* Rgc/rgcrules.scm 272 */
																				if (NULLP(CDR(BgL_cdrzd2241zd2_1366)))
																					{	/* Rgc/rgcrules.scm 272 */
																						obj_t BgL_arg1362z00_1380;

																						BgL_arg1362z00_1380 =
																							CAR(BgL_cdrzd2241zd2_1366);
																						BGl_addzd2predicatezd2matchz12z12zz__rgc_rulesz00
																							(BgL_matchz00_14,
																							BGl_list2541z00zz__rgc_rulesz00);
																						{
																							obj_t BgL_rulez00_4203;

																							BgL_rulez00_4203 =
																								BgL_arg1362z00_1380;
																							BgL_rulez00_1325 =
																								BgL_rulez00_4203;
																							goto
																								BgL_zc3z04anonymousza31328ze3z87_1326;
																						}
																					}
																				else
																					{	/* Rgc/rgcrules.scm 272 */
																						BgL_arg1325z00_1321 =
																							BGl_expandzd2rulezd2zz__rgc_rulesz00
																							(BgL_matchz00_14, BgL_envz00_15,
																							BgL_rulez00_1325);
																					}
																			}
																		else
																			{	/* Rgc/rgcrules.scm 272 */
																				BgL_arg1325z00_1321 =
																					BGl_expandzd2rulezd2zz__rgc_rulesz00
																					(BgL_matchz00_14, BgL_envz00_15,
																					BgL_rulez00_1325);
																			}
																	}
																else
																	{	/* Rgc/rgcrules.scm 272 */
																		obj_t BgL_cdrzd2277zd2_1382;

																		BgL_cdrzd2277zd2_1382 =
																			CDR(BgL_rulez00_1325);
																		if (
																			(CAR(BgL_rulez00_1325) ==
																				BGl_symbol2565z00zz__rgc_rulesz00))
																			{	/* Rgc/rgcrules.scm 272 */
																				if (PAIRP(BgL_cdrzd2277zd2_1382))
																					{	/* Rgc/rgcrules.scm 272 */
																						if (NULLP(CDR
																								(BgL_cdrzd2277zd2_1382)))
																							{	/* Rgc/rgcrules.scm 272 */
																								obj_t BgL_arg1370z00_1388;

																								BgL_arg1370z00_1388 =
																									CAR(BgL_cdrzd2277zd2_1382);
																								BGl_addzd2predicatezd2matchz12z12zz__rgc_rulesz00
																									(BgL_matchz00_14,
																									BGl_list2567z00zz__rgc_rulesz00);
																								{
																									obj_t BgL_rulez00_4217;

																									BgL_rulez00_4217 =
																										BgL_arg1370z00_1388;
																									BgL_rulez00_1325 =
																										BgL_rulez00_4217;
																									goto
																										BgL_zc3z04anonymousza31328ze3z87_1326;
																								}
																							}
																						else
																							{	/* Rgc/rgcrules.scm 272 */
																								BgL_arg1325z00_1321 =
																									BGl_expandzd2rulezd2zz__rgc_rulesz00
																									(BgL_matchz00_14,
																									BgL_envz00_15,
																									BgL_rulez00_1325);
																							}
																					}
																				else
																					{	/* Rgc/rgcrules.scm 272 */
																						BgL_arg1325z00_1321 =
																							BGl_expandzd2rulezd2zz__rgc_rulesz00
																							(BgL_matchz00_14, BgL_envz00_15,
																							BgL_rulez00_1325);
																					}
																			}
																		else
																			{	/* Rgc/rgcrules.scm 272 */
																				if (
																					(CAR(BgL_rulez00_1325) ==
																						BGl_symbol2570z00zz__rgc_rulesz00))
																					{	/* Rgc/rgcrules.scm 272 */
																						if (PAIRP(BgL_cdrzd2277zd2_1382))
																							{	/* Rgc/rgcrules.scm 272 */
																								if (NULLP(CDR
																										(BgL_cdrzd2277zd2_1382)))
																									{	/* Rgc/rgcrules.scm 272 */
																										obj_t BgL_arg1377z00_1396;

																										BgL_arg1377z00_1396 =
																											CAR
																											(BgL_cdrzd2277zd2_1382);
																										BGl_addzd2predicatezd2matchz12z12zz__rgc_rulesz00
																											(BgL_matchz00_14,
																											BGl_list2572z00zz__rgc_rulesz00);
																										{
																											obj_t BgL_rulez00_4230;

																											BgL_rulez00_4230 =
																												BgL_arg1377z00_1396;
																											BgL_rulez00_1325 =
																												BgL_rulez00_4230;
																											goto
																												BgL_zc3z04anonymousza31328ze3z87_1326;
																										}
																									}
																								else
																									{	/* Rgc/rgcrules.scm 272 */
																										BgL_arg1325z00_1321 =
																											BGl_expandzd2rulezd2zz__rgc_rulesz00
																											(BgL_matchz00_14,
																											BgL_envz00_15,
																											BgL_rulez00_1325);
																									}
																							}
																						else
																							{	/* Rgc/rgcrules.scm 272 */
																								BgL_arg1325z00_1321 =
																									BGl_expandzd2rulezd2zz__rgc_rulesz00
																									(BgL_matchz00_14,
																									BgL_envz00_15,
																									BgL_rulez00_1325);
																							}
																					}
																				else
																					{	/* Rgc/rgcrules.scm 272 */
																						BgL_arg1325z00_1321 =
																							BGl_expandzd2rulezd2zz__rgc_rulesz00
																							(BgL_matchz00_14, BgL_envz00_15,
																							BgL_rulez00_1325);
																					}
																			}
																	}
															}
													}
											}
									}
								else
									{	/* Rgc/rgcrules.scm 272 */
										BgL_arg1325z00_1321 =
											BGl_expandzd2rulezd2zz__rgc_rulesz00(BgL_matchz00_14,
											BgL_envz00_15, BgL_rulez00_1325);
									}
							}
							{	/* Rgc/rgcrules.scm 272 */
								obj_t BgL_list1326z00_1322;

								{	/* Rgc/rgcrules.scm 272 */
									obj_t BgL_arg1327z00_1323;

									BgL_arg1327z00_1323 =
										MAKE_YOUNG_PAIR(BINT(BgL_specialzd2charzd2_1316), BNIL);
									BgL_list1326z00_1322 =
										MAKE_YOUNG_PAIR(BgL_arg1325z00_1321, BgL_arg1327z00_1323);
								}
								BgL_arg1324z00_1320 = BgL_list1326z00_1322;
							}
						}
						return BGl_makezd2sequencezd2zz__rgc_rulesz00(BgL_arg1324z00_1320);
					}
				}
			}
		}

	}



/* expand-rule */
	obj_t BGl_expandzd2rulezd2zz__rgc_rulesz00(long BgL_matchz00_17,
		obj_t BgL_envz00_18, obj_t BgL_rulez00_19)
	{
		{	/* Rgc/rgcrules.scm 312 */
		BGl_expandzd2rulezd2zz__rgc_rulesz00:
			if (PAIRP(BgL_rulez00_19))
				{	/* Rgc/rgcrules.scm 315 */
					obj_t BgL_cdrzd2337zd2_1454;

					BgL_cdrzd2337zd2_1454 = CDR(BgL_rulez00_19);
					if ((CAR(BgL_rulez00_19) == BGl_symbol2578z00zz__rgc_rulesz00))
						{	/* Rgc/rgcrules.scm 315 */
							if (PAIRP(BgL_cdrzd2337zd2_1454))
								{	/* Rgc/rgcrules.scm 315 */
									obj_t BgL_cdrzd2341zd2_1458;

									BgL_cdrzd2341zd2_1458 = CDR(BgL_cdrzd2337zd2_1454);
									if (PAIRP(BgL_cdrzd2341zd2_1458))
										{	/* Rgc/rgcrules.scm 315 */
											if (NULLP(CDR(BgL_cdrzd2341zd2_1458)))
												{	/* Rgc/rgcrules.scm 315 */
													return
														BGl_expandzd2dotszd2zz__rgc_rulesz00
														(BgL_matchz00_17, BgL_envz00_18,
														CAR(BgL_cdrzd2337zd2_1454),
														CAR(BgL_cdrzd2341zd2_1458), BgL_rulez00_19);
												}
											else
												{	/* Rgc/rgcrules.scm 315 */
													return
														BGl_errorz00zz__errorz00(BFALSE,
														BGl_string2580z00zz__rgc_rulesz00, BgL_rulez00_19);
												}
										}
									else
										{	/* Rgc/rgcrules.scm 315 */
											return
												BGl_errorz00zz__errorz00(BFALSE,
												BGl_string2580z00zz__rgc_rulesz00, BgL_rulez00_19);
										}
								}
							else
								{	/* Rgc/rgcrules.scm 315 */
									return
										BGl_errorz00zz__errorz00(BFALSE,
										BGl_string2580z00zz__rgc_rulesz00, BgL_rulez00_19);
								}
						}
					else
						{	/* Rgc/rgcrules.scm 315 */
							if ((CAR(BgL_rulez00_19) == BGl_symbol2581z00zz__rgc_rulesz00))
								{	/* Rgc/rgcrules.scm 315 */
									if (PAIRP(BgL_cdrzd2337zd2_1454))
										{	/* Rgc/rgcrules.scm 315 */
											if (NULLP(CDR(BgL_cdrzd2337zd2_1454)))
												{	/* Rgc/rgcrules.scm 315 */
													return
														BGl_expandzd2uncasezd2zz__rgc_rulesz00
														(BgL_matchz00_17, BgL_envz00_18,
														CAR(BgL_cdrzd2337zd2_1454));
												}
											else
												{	/* Rgc/rgcrules.scm 315 */
													return
														BGl_errorz00zz__errorz00(BFALSE,
														BGl_string2580z00zz__rgc_rulesz00, BgL_rulez00_19);
												}
										}
									else
										{	/* Rgc/rgcrules.scm 315 */
											return
												BGl_errorz00zz__errorz00(BFALSE,
												BGl_string2580z00zz__rgc_rulesz00, BgL_rulez00_19);
										}
								}
							else
								{	/* Rgc/rgcrules.scm 315 */
									obj_t BgL_cdrzd2994zd2_1473;

									BgL_cdrzd2994zd2_1473 = CDR(BgL_rulez00_19);
									if (
										(CAR(BgL_rulez00_19) == BGl_symbol2583z00zz__rgc_rulesz00))
										{	/* Rgc/rgcrules.scm 315 */
											if (PAIRP(BgL_cdrzd2994zd2_1473))
												{	/* Rgc/rgcrules.scm 315 */
													if (NULLP(CDR(BgL_cdrzd2994zd2_1473)))
														{	/* Rgc/rgcrules.scm 315 */
															obj_t BgL_arg1414z00_1479;

															BgL_arg1414z00_1479 = CAR(BgL_cdrzd2994zd2_1473);
															{	/* Rgc/rgcrules.scm 459 */
																obj_t BgL_arg1635z00_2818;

																BgL_arg1635z00_2818 =
																	MAKE_YOUNG_PAIR
																	(BGl_expandzd2rulezd2zz__rgc_rulesz00
																	(BgL_matchz00_17, BgL_envz00_18,
																		BgL_arg1414z00_1479), BNIL);
																return
																	MAKE_YOUNG_PAIR
																	(BGl_symbol2583z00zz__rgc_rulesz00,
																	BgL_arg1635z00_2818);
															}
														}
													else
														{	/* Rgc/rgcrules.scm 315 */
															return
																BGl_errorz00zz__errorz00(BFALSE,
																BGl_string2580z00zz__rgc_rulesz00,
																BgL_rulez00_19);
														}
												}
											else
												{	/* Rgc/rgcrules.scm 315 */
													return
														BGl_errorz00zz__errorz00(BFALSE,
														BGl_string2580z00zz__rgc_rulesz00, BgL_rulez00_19);
												}
										}
									else
										{	/* Rgc/rgcrules.scm 315 */
											if (
												(CAR(BgL_rulez00_19) ==
													BGl_symbol2585z00zz__rgc_rulesz00))
												{	/* Rgc/rgcrules.scm 315 */
													if (PAIRP(BgL_cdrzd2994zd2_1473))
														{	/* Rgc/rgcrules.scm 315 */
															if (NULLP(CDR(BgL_cdrzd2994zd2_1473)))
																{	/* Rgc/rgcrules.scm 315 */
																	return
																		BGl_expandzd2zb2z60zz__rgc_rulesz00
																		(BgL_matchz00_17, BgL_envz00_18,
																		CAR(BgL_cdrzd2994zd2_1473));
																}
															else
																{	/* Rgc/rgcrules.scm 315 */
																	return
																		BGl_errorz00zz__errorz00(BFALSE,
																		BGl_string2580z00zz__rgc_rulesz00,
																		BgL_rulez00_19);
																}
														}
													else
														{	/* Rgc/rgcrules.scm 315 */
															return
																BGl_errorz00zz__errorz00(BFALSE,
																BGl_string2580z00zz__rgc_rulesz00,
																BgL_rulez00_19);
														}
												}
											else
												{	/* Rgc/rgcrules.scm 315 */
													obj_t BgL_cdrzd21430zd2_1489;

													BgL_cdrzd21430zd2_1489 = CDR(BgL_rulez00_19);
													if (
														(CAR(BgL_rulez00_19) ==
															BGl_symbol2587z00zz__rgc_rulesz00))
														{	/* Rgc/rgcrules.scm 315 */
															if (PAIRP(BgL_cdrzd21430zd2_1489))
																{	/* Rgc/rgcrules.scm 315 */
																	if (NULLP(CDR(BgL_cdrzd21430zd2_1489)))
																		{	/* Rgc/rgcrules.scm 315 */
																			obj_t BgL_arg1429z00_1495;

																			BgL_arg1429z00_1495 =
																				CAR(BgL_cdrzd21430zd2_1489);
																			{	/* Rgc/rgcrules.scm 472 */
																				obj_t BgL_arg1643z00_2832;

																				{	/* Rgc/rgcrules.scm 472 */
																					obj_t BgL_arg1644z00_2833;

																					BgL_arg1644z00_2833 =
																						MAKE_YOUNG_PAIR
																						(BGl_expandzd2rulezd2zz__rgc_rulesz00
																						(BgL_matchz00_17, BgL_envz00_18,
																							BgL_arg1429z00_1495), BNIL);
																					BgL_arg1643z00_2832 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol2589z00zz__rgc_rulesz00,
																						BgL_arg1644z00_2833);
																				}
																				return
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2506z00zz__rgc_rulesz00,
																					BgL_arg1643z00_2832);
																			}
																		}
																	else
																		{	/* Rgc/rgcrules.scm 315 */
																			return
																				BGl_errorz00zz__errorz00(BFALSE,
																				BGl_string2580z00zz__rgc_rulesz00,
																				BgL_rulez00_19);
																		}
																}
															else
																{	/* Rgc/rgcrules.scm 315 */
																	return
																		BGl_errorz00zz__errorz00(BFALSE,
																		BGl_string2580z00zz__rgc_rulesz00,
																		BgL_rulez00_19);
																}
														}
													else
														{	/* Rgc/rgcrules.scm 315 */
															if (
																(CAR(BgL_rulez00_19) ==
																	BGl_symbol2506z00zz__rgc_rulesz00))
																{	/* Rgc/rgcrules.scm 315 */
																	return
																		BGl_expandzd2orzd2zz__rgc_rulesz00
																		(BgL_matchz00_17, BgL_envz00_18,
																		BgL_cdrzd21430zd2_1489);
																}
															else
																{	/* Rgc/rgcrules.scm 315 */
																	if (
																		(CAR(BgL_rulez00_19) ==
																			BGl_symbol2591z00zz__rgc_rulesz00))
																		{	/* Rgc/rgcrules.scm 315 */
																			if (PAIRP(BgL_cdrzd21430zd2_1489))
																				{	/* Rgc/rgcrules.scm 315 */
																					obj_t BgL_cdrzd21632zd2_1504;

																					BgL_cdrzd21632zd2_1504 =
																						CDR(BgL_cdrzd21430zd2_1489);
																					if (PAIRP(BgL_cdrzd21632zd2_1504))
																						{	/* Rgc/rgcrules.scm 315 */
																							if (NULLP(CDR
																									(BgL_cdrzd21632zd2_1504)))
																								{	/* Rgc/rgcrules.scm 315 */
																									return
																										BGl_expandzd2zd3z01zz__rgc_rulesz00
																										(BgL_matchz00_17,
																										BgL_envz00_18,
																										CAR(BgL_cdrzd21430zd2_1489),
																										CAR(BgL_cdrzd21632zd2_1504),
																										BgL_rulez00_19);
																								}
																							else
																								{	/* Rgc/rgcrules.scm 315 */
																									return
																										BGl_errorz00zz__errorz00
																										(BFALSE,
																										BGl_string2580z00zz__rgc_rulesz00,
																										BgL_rulez00_19);
																								}
																						}
																					else
																						{	/* Rgc/rgcrules.scm 315 */
																							return
																								BGl_errorz00zz__errorz00(BFALSE,
																								BGl_string2580z00zz__rgc_rulesz00,
																								BgL_rulez00_19);
																						}
																				}
																			else
																				{	/* Rgc/rgcrules.scm 315 */
																					return
																						BGl_errorz00zz__errorz00(BFALSE,
																						BGl_string2580z00zz__rgc_rulesz00,
																						BgL_rulez00_19);
																				}
																		}
																	else
																		{	/* Rgc/rgcrules.scm 315 */
																			obj_t BgL_cdrzd21839zd2_1511;

																			BgL_cdrzd21839zd2_1511 =
																				CDR(BgL_rulez00_19);
																			if (
																				(CAR(BgL_rulez00_19) ==
																					BGl_symbol2593z00zz__rgc_rulesz00))
																				{	/* Rgc/rgcrules.scm 315 */
																					if (PAIRP(BgL_cdrzd21839zd2_1511))
																						{	/* Rgc/rgcrules.scm 315 */
																							obj_t BgL_cdrzd21843zd2_1515;

																							BgL_cdrzd21843zd2_1515 =
																								CDR(BgL_cdrzd21839zd2_1511);
																							if (PAIRP(BgL_cdrzd21843zd2_1515))
																								{	/* Rgc/rgcrules.scm 315 */
																									if (NULLP(CDR
																											(BgL_cdrzd21843zd2_1515)))
																										{	/* Rgc/rgcrules.scm 315 */
																											return
																												BGl_expandzd2ze3zd3ze2zz__rgc_rulesz00
																												(BgL_matchz00_17,
																												BgL_envz00_18,
																												CAR
																												(BgL_cdrzd21839zd2_1511),
																												CAR
																												(BgL_cdrzd21843zd2_1515),
																												BgL_rulez00_19);
																										}
																									else
																										{	/* Rgc/rgcrules.scm 315 */
																											return
																												BGl_errorz00zz__errorz00
																												(BFALSE,
																												BGl_string2580z00zz__rgc_rulesz00,
																												BgL_rulez00_19);
																										}
																								}
																							else
																								{	/* Rgc/rgcrules.scm 315 */
																									return
																										BGl_errorz00zz__errorz00
																										(BFALSE,
																										BGl_string2580z00zz__rgc_rulesz00,
																										BgL_rulez00_19);
																								}
																						}
																					else
																						{	/* Rgc/rgcrules.scm 315 */
																							return
																								BGl_errorz00zz__errorz00(BFALSE,
																								BGl_string2580z00zz__rgc_rulesz00,
																								BgL_rulez00_19);
																						}
																				}
																			else
																				{	/* Rgc/rgcrules.scm 315 */
																					if (
																						(CAR(BgL_rulez00_19) ==
																							BGl_symbol2595z00zz__rgc_rulesz00))
																						{	/* Rgc/rgcrules.scm 315 */
																							if (PAIRP(BgL_cdrzd21839zd2_1511))
																								{	/* Rgc/rgcrules.scm 315 */
																									obj_t BgL_cdrzd22022zd2_1526;

																									BgL_cdrzd22022zd2_1526 =
																										CDR(BgL_cdrzd21839zd2_1511);
																									if (PAIRP
																										(BgL_cdrzd22022zd2_1526))
																										{	/* Rgc/rgcrules.scm 315 */
																											obj_t
																												BgL_cdrzd22027zd2_1528;
																											BgL_cdrzd22027zd2_1528 =
																												CDR
																												(BgL_cdrzd22022zd2_1526);
																											if (PAIRP
																												(BgL_cdrzd22027zd2_1528))
																												{	/* Rgc/rgcrules.scm 315 */
																													if (NULLP(CDR
																															(BgL_cdrzd22027zd2_1528)))
																														{	/* Rgc/rgcrules.scm 315 */
																															return
																																BGl_expandzd2za2za2zd2zz__rgc_rulesz00
																																(BgL_matchz00_17,
																																BgL_envz00_18,
																																CAR
																																(BgL_cdrzd21839zd2_1511),
																																CAR
																																(BgL_cdrzd22022zd2_1526),
																																CAR
																																(BgL_cdrzd22027zd2_1528),
																																BgL_rulez00_19);
																														}
																													else
																														{	/* Rgc/rgcrules.scm 315 */
																															return
																																BGl_errorz00zz__errorz00
																																(BFALSE,
																																BGl_string2580z00zz__rgc_rulesz00,
																																BgL_rulez00_19);
																														}
																												}
																											else
																												{	/* Rgc/rgcrules.scm 315 */
																													return
																														BGl_errorz00zz__errorz00
																														(BFALSE,
																														BGl_string2580z00zz__rgc_rulesz00,
																														BgL_rulez00_19);
																												}
																										}
																									else
																										{	/* Rgc/rgcrules.scm 315 */
																											return
																												BGl_errorz00zz__errorz00
																												(BFALSE,
																												BGl_string2580z00zz__rgc_rulesz00,
																												BgL_rulez00_19);
																										}
																								}
																							else
																								{	/* Rgc/rgcrules.scm 315 */
																									return
																										BGl_errorz00zz__errorz00
																										(BFALSE,
																										BGl_string2580z00zz__rgc_rulesz00,
																										BgL_rulez00_19);
																								}
																						}
																					else
																						{	/* Rgc/rgcrules.scm 315 */
																							if (
																								(CAR(BgL_rulez00_19) ==
																									BGl_symbol2500z00zz__rgc_rulesz00))
																								{	/* Rgc/rgcrules.scm 315 */
																									return
																										BGl_expandzd2inzd2zz__rgc_rulesz00
																										(BgL_matchz00_17,
																										BgL_envz00_18,
																										CDR(BgL_rulez00_19),
																										BgL_rulez00_19);
																								}
																							else
																								{	/* Rgc/rgcrules.scm 315 */
																									if (
																										(CAR(BgL_rulez00_19) ==
																											BGl_symbol2597z00zz__rgc_rulesz00))
																										{	/* Rgc/rgcrules.scm 315 */
																											return
																												BGl_expandzd2outzd2zz__rgc_rulesz00
																												(BgL_matchz00_17,
																												BgL_envz00_18,
																												CDR(BgL_rulez00_19),
																												BgL_rulez00_19);
																										}
																									else
																										{	/* Rgc/rgcrules.scm 315 */
																											obj_t
																												BgL_cdrzd22225zd2_1542;
																											BgL_cdrzd22225zd2_1542 =
																												CDR(BgL_rulez00_19);
																											if ((CAR(BgL_rulez00_19)
																													==
																													BGl_symbol2599z00zz__rgc_rulesz00))
																												{	/* Rgc/rgcrules.scm 315 */
																													if (PAIRP
																														(BgL_cdrzd22225zd2_1542))
																														{	/* Rgc/rgcrules.scm 315 */
																															obj_t
																																BgL_cdrzd22229zd2_1546;
																															BgL_cdrzd22229zd2_1546
																																=
																																CDR
																																(BgL_cdrzd22225zd2_1542);
																															if (PAIRP
																																(BgL_cdrzd22229zd2_1546))
																																{	/* Rgc/rgcrules.scm 315 */
																																	if (NULLP(CDR
																																			(BgL_cdrzd22229zd2_1546)))
																																		{	/* Rgc/rgcrules.scm 315 */
																																			return
																																				BGl_expandzd2andzd2zz__rgc_rulesz00
																																				(BgL_matchz00_17,
																																				BgL_envz00_18,
																																				CAR
																																				(BgL_cdrzd22225zd2_1542),
																																				CAR
																																				(BgL_cdrzd22229zd2_1546),
																																				BgL_rulez00_19);
																																		}
																																	else
																																		{	/* Rgc/rgcrules.scm 315 */
																																			return
																																				BGl_errorz00zz__errorz00
																																				(BFALSE,
																																				BGl_string2580z00zz__rgc_rulesz00,
																																				BgL_rulez00_19);
																																		}
																																}
																															else
																																{	/* Rgc/rgcrules.scm 315 */
																																	return
																																		BGl_errorz00zz__errorz00
																																		(BFALSE,
																																		BGl_string2580z00zz__rgc_rulesz00,
																																		BgL_rulez00_19);
																																}
																														}
																													else
																														{	/* Rgc/rgcrules.scm 315 */
																															return
																																BGl_errorz00zz__errorz00
																																(BFALSE,
																																BGl_string2580z00zz__rgc_rulesz00,
																																BgL_rulez00_19);
																														}
																												}
																											else
																												{	/* Rgc/rgcrules.scm 315 */
																													if (
																														(CAR(BgL_rulez00_19)
																															==
																															BGl_symbol2601z00zz__rgc_rulesz00))
																														{	/* Rgc/rgcrules.scm 315 */
																															if (PAIRP
																																(BgL_cdrzd22225zd2_1542))
																																{	/* Rgc/rgcrules.scm 315 */
																																	obj_t
																																		BgL_cdrzd22307zd2_1557;
																																	BgL_cdrzd22307zd2_1557
																																		=
																																		CDR
																																		(BgL_cdrzd22225zd2_1542);
																																	if (PAIRP
																																		(BgL_cdrzd22307zd2_1557))
																																		{	/* Rgc/rgcrules.scm 315 */
																																			if (NULLP
																																				(CDR
																																					(BgL_cdrzd22307zd2_1557)))
																																				{	/* Rgc/rgcrules.scm 315 */
																																					return
																																						BGl_expandzd2butzd2zz__rgc_rulesz00
																																						(BgL_matchz00_17,
																																						BgL_envz00_18,
																																						CAR
																																						(BgL_cdrzd22225zd2_1542),
																																						CAR
																																						(BgL_cdrzd22307zd2_1557),
																																						BgL_rulez00_19);
																																				}
																																			else
																																				{	/* Rgc/rgcrules.scm 315 */
																																					return
																																						BGl_errorz00zz__errorz00
																																						(BFALSE,
																																						BGl_string2580z00zz__rgc_rulesz00,
																																						BgL_rulez00_19);
																																				}
																																		}
																																	else
																																		{	/* Rgc/rgcrules.scm 315 */
																																			return
																																				BGl_errorz00zz__errorz00
																																				(BFALSE,
																																				BGl_string2580z00zz__rgc_rulesz00,
																																				BgL_rulez00_19);
																																		}
																																}
																															else
																																{	/* Rgc/rgcrules.scm 315 */
																																	return
																																		BGl_errorz00zz__errorz00
																																		(BFALSE,
																																		BGl_string2580z00zz__rgc_rulesz00,
																																		BgL_rulez00_19);
																																}
																														}
																													else
																														{	/* Rgc/rgcrules.scm 315 */
																															obj_t
																																BgL_cdrzd22357zd2_1564;
																															BgL_cdrzd22357zd2_1564
																																=
																																CDR
																																(BgL_rulez00_19);
																															if ((CAR
																																	(BgL_rulez00_19)
																																	==
																																	BGl_symbol2603z00zz__rgc_rulesz00))
																																{	/* Rgc/rgcrules.scm 315 */
																																	if (PAIRP
																																		(BgL_cdrzd22357zd2_1564))
																																		{	/* Rgc/rgcrules.scm 315 */
																																			if (NULLP
																																				(CDR
																																					(BgL_cdrzd22357zd2_1564)))
																																				{	/* Rgc/rgcrules.scm 315 */
																																					return
																																						BGl_expandzd2submatchzd2zz__rgc_rulesz00
																																						(BgL_matchz00_17,
																																						BgL_envz00_18,
																																						CAR
																																						(BgL_cdrzd22357zd2_1564),
																																						BgL_rulez00_19);
																																				}
																																			else
																																				{	/* Rgc/rgcrules.scm 315 */
																																					return
																																						BGl_errorz00zz__errorz00
																																						(BFALSE,
																																						BGl_string2580z00zz__rgc_rulesz00,
																																						BgL_rulez00_19);
																																				}
																																		}
																																	else
																																		{	/* Rgc/rgcrules.scm 315 */
																																			return
																																				BGl_errorz00zz__errorz00
																																				(BFALSE,
																																				BGl_string2580z00zz__rgc_rulesz00,
																																				BgL_rulez00_19);
																																		}
																																}
																															else
																																{	/* Rgc/rgcrules.scm 315 */
																																	obj_t
																																		BgL_carzd22383zd2_1572;
																																	BgL_carzd22383zd2_1572
																																		=
																																		CAR
																																		(BgL_rulez00_19);
																																	if (
																																		(BgL_carzd22383zd2_1572
																																			==
																																			BGl_symbol2605z00zz__rgc_rulesz00))
																																		{	/* Rgc/rgcrules.scm 315 */
																																			return
																																				BGl_expandzd2sequencezd2zz__rgc_rulesz00
																																				(BgL_matchz00_17,
																																				BgL_envz00_18,
																																				BgL_cdrzd22357zd2_1564);
																																		}
																																	else
																																		{	/* Rgc/rgcrules.scm 315 */
																																			if (
																																				(BgL_carzd22383zd2_1572
																																					==
																																					BGl_symbol2607z00zz__rgc_rulesz00))
																																				{	/* Rgc/rgcrules.scm 315 */
																																					return
																																						BGl_expandzd2sequencezd2zz__rgc_rulesz00
																																						(BgL_matchz00_17,
																																						BgL_envz00_18,
																																						BgL_cdrzd22357zd2_1564);
																																				}
																																			else
																																				{	/* Rgc/rgcrules.scm 315 */
																																					obj_t
																																						BgL_cdrzd22390zd2_1576;
																																					BgL_cdrzd22390zd2_1576
																																						=
																																						CDR
																																						(BgL_rulez00_19);
																																					if (
																																						(CAR
																																							(BgL_rulez00_19)
																																							==
																																							BGl_symbol2609z00zz__rgc_rulesz00))
																																						{	/* Rgc/rgcrules.scm 315 */
																																							if (PAIRP(BgL_cdrzd22390zd2_1576))
																																								{	/* Rgc/rgcrules.scm 315 */
																																									if (NULLP(CDR(BgL_cdrzd22390zd2_1576)))
																																										{	/* Rgc/rgcrules.scm 315 */
																																											obj_t
																																												BgL_arg1507z00_1582;
																																											BgL_arg1507z00_1582
																																												=
																																												CAR
																																												(BgL_cdrzd22390zd2_1576);
																																											if (STRINGP(BgL_arg1507z00_1582))
																																												{
																																													obj_t
																																														BgL_rulez00_4452;
																																													BgL_rulez00_4452
																																														=
																																														BGl_posixzd2ze3rgcz31zz__rgc_posixz00
																																														(BgL_arg1507z00_1582);
																																													BgL_rulez00_19
																																														=
																																														BgL_rulez00_4452;
																																													goto
																																														BGl_expandzd2rulezd2zz__rgc_rulesz00;
																																												}
																																											else
																																												{	/* Rgc/rgcrules.scm 728 */
																																													return
																																														BGl_errorz00zz__errorz00
																																														(BFALSE,
																																														BGl_string2580z00zz__rgc_rulesz00,
																																														BgL_rulez00_19);
																																												}
																																										}
																																									else
																																										{	/* Rgc/rgcrules.scm 315 */
																																											return
																																												BGl_errorz00zz__errorz00
																																												(BFALSE,
																																												BGl_string2580z00zz__rgc_rulesz00,
																																												BgL_rulez00_19);
																																										}
																																								}
																																							else
																																								{	/* Rgc/rgcrules.scm 315 */
																																									return
																																										BGl_errorz00zz__errorz00
																																										(BFALSE,
																																										BGl_string2580z00zz__rgc_rulesz00,
																																										BgL_rulez00_19);
																																								}
																																						}
																																					else
																																						{	/* Rgc/rgcrules.scm 315 */
																																							return
																																								BGl_errorz00zz__errorz00
																																								(BFALSE,
																																								BGl_string2580z00zz__rgc_rulesz00,
																																								BgL_rulez00_19);
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
				{	/* Rgc/rgcrules.scm 313 */
					return
						BGl_expandzd2atomzd2zz__rgc_rulesz00(BgL_matchz00_17, BgL_envz00_18,
						BgL_rulez00_19);
				}
		}

	}



/* expand-atom */
	obj_t BGl_expandzd2atomzd2zz__rgc_rulesz00(long BgL_matchz00_20,
		obj_t BgL_envz00_21, obj_t BgL_rulez00_22)
	{
		{	/* Rgc/rgcrules.scm 340 */
			if (CHARP(BgL_rulez00_22))
				{	/* Rgc/rgcrules.scm 342 */
					return BINT((CCHAR(BgL_rulez00_22)));
				}
			else
				{	/* Rgc/rgcrules.scm 344 */
					bool_t BgL_test2785z00_4464;

					if (INTEGERP(BgL_rulez00_22))
						{	/* Rgc/rgcrules.scm 344 */
							if (((long) CINT(BgL_rulez00_22) >= ((long) 0)))
								{	/* Rgc/rgcrules.scm 345 */
									BgL_test2785z00_4464 =
										BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_rulez00_22,
										BGl_rgczd2maxzd2charz00zz__rgc_configz00());
								}
							else
								{	/* Rgc/rgcrules.scm 345 */
									BgL_test2785z00_4464 = ((bool_t) 0);
								}
						}
					else
						{	/* Rgc/rgcrules.scm 344 */
							BgL_test2785z00_4464 = ((bool_t) 0);
						}
					if (BgL_test2785z00_4464)
						{	/* Rgc/rgcrules.scm 344 */
							return
								BGl_errorz00zz__errorz00(BFALSE,
								BGl_string2611z00zz__rgc_rulesz00, BgL_rulez00_22);
						}
					else
						{	/* Rgc/rgcrules.scm 344 */
							if (STRINGP(BgL_rulez00_22))
								{	/* Rgc/rgcrules.scm 348 */
									return
										BGl_expandzd2stringzd2zz__rgc_rulesz00(BgL_envz00_21,
										BgL_rulez00_22);
								}
							else
								{	/* Rgc/rgcrules.scm 348 */
									if (SYMBOLP(BgL_rulez00_22))
										{	/* Rgc/rgcrules.scm 351 */
											obj_t BgL_cellz00_1608;

											BgL_cellz00_1608 =
												BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_rulez00_22,
												BgL_envz00_21);
											if (PAIRP(BgL_cellz00_1608))
												{	/* Rgc/rgcrules.scm 352 */
													return
														BGl_expandzd2rulezd2zz__rgc_rulesz00
														(BgL_matchz00_20, BgL_envz00_21,
														CDR(BgL_cellz00_1608));
												}
											else
												{	/* Rgc/rgcrules.scm 352 */
													return
														BGl_errorz00zz__errorz00(BFALSE,
														BGl_string2612z00zz__rgc_rulesz00, BgL_rulez00_22);
												}
										}
									else
										{	/* Rgc/rgcrules.scm 350 */
											return
												BGl_errorz00zz__errorz00(BFALSE,
												BGl_string2613z00zz__rgc_rulesz00, BgL_rulez00_22);
										}
								}
						}
				}
		}

	}



/* expand-string */
	obj_t BGl_expandzd2stringzd2zz__rgc_rulesz00(obj_t BgL_envz00_23,
		obj_t BgL_rulez00_24)
	{
		{	/* Rgc/rgcrules.scm 367 */
			if ((STRING_LENGTH(BgL_rulez00_24) == ((long) 0)))
				{	/* Rgc/rgcrules.scm 368 */
					return
						BGl_errorz00zz__errorz00(BFALSE, BGl_string2614z00zz__rgc_rulesz00,
						BgL_rulez00_24);
				}
			else
				{	/* Rgc/rgcrules.scm 370 */
					obj_t BgL_arg1540z00_1617;

					{	/* Rgc/rgcrules.scm 370 */
						obj_t BgL_l1109z00_1618;

						BgL_l1109z00_1618 =
							BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(BgL_rulez00_24);
						if (NULLP(BgL_l1109z00_1618))
							{	/* Rgc/rgcrules.scm 370 */
								BgL_arg1540z00_1617 = BNIL;
							}
						else
							{	/* Rgc/rgcrules.scm 370 */
								obj_t BgL_head1111z00_1620;

								{	/* Rgc/rgcrules.scm 370 */
									long BgL_arg1547z00_1632;

									BgL_arg1547z00_1632 = (CCHAR(CAR(BgL_l1109z00_1618)));
									{	/* Rgc/rgcrules.scm 370 */
										obj_t BgL_res2301z00_2925;

										BgL_res2301z00_2925 =
											MAKE_YOUNG_PAIR(BINT(BgL_arg1547z00_1632), BNIL);
										BgL_head1111z00_1620 = BgL_res2301z00_2925;
								}}
								{	/* Rgc/rgcrules.scm 370 */
									obj_t BgL_g1114z00_1621;

									BgL_g1114z00_1621 = CDR(BgL_l1109z00_1618);
									{
										obj_t BgL_l1109z00_2952;
										obj_t BgL_tail1112z00_2953;

										BgL_l1109z00_2952 = BgL_g1114z00_1621;
										BgL_tail1112z00_2953 = BgL_head1111z00_1620;
									BgL_zc3z04anonymousza31542ze3z87_2951:
										if (NULLP(BgL_l1109z00_2952))
											{	/* Rgc/rgcrules.scm 370 */
												BgL_arg1540z00_1617 = BgL_head1111z00_1620;
											}
										else
											{	/* Rgc/rgcrules.scm 370 */
												obj_t BgL_newtail1113z00_2960;

												{	/* Rgc/rgcrules.scm 370 */
													long BgL_arg1545z00_2961;

													BgL_arg1545z00_2961 =
														(CCHAR(CAR(((obj_t) BgL_l1109z00_2952))));
													{	/* Rgc/rgcrules.scm 370 */
														obj_t BgL_res2310z00_2968;

														BgL_res2310z00_2968 =
															MAKE_YOUNG_PAIR(BINT(BgL_arg1545z00_2961), BNIL);
														BgL_newtail1113z00_2960 = BgL_res2310z00_2968;
												}}
												SET_CDR(BgL_tail1112z00_2953, BgL_newtail1113z00_2960);
												{	/* Rgc/rgcrules.scm 370 */
													obj_t BgL_arg1544z00_2963;

													BgL_arg1544z00_2963 =
														CDR(((obj_t) BgL_l1109z00_2952));
													{
														obj_t BgL_tail1112z00_4510;
														obj_t BgL_l1109z00_4509;

														BgL_l1109z00_4509 = BgL_arg1544z00_2963;
														BgL_tail1112z00_4510 = BgL_newtail1113z00_2960;
														BgL_tail1112z00_2953 = BgL_tail1112z00_4510;
														BgL_l1109z00_2952 = BgL_l1109z00_4509;
														goto BgL_zc3z04anonymousza31542ze3z87_2951;
													}
												}
											}
									}
								}
							}
					}
					return BGl_makezd2sequencezd2zz__rgc_rulesz00(BgL_arg1540z00_1617);
				}
		}

	}



/* expand-dots */
	obj_t BGl_expandzd2dotszd2zz__rgc_rulesz00(long BgL_matchz00_25,
		obj_t BgL_envz00_26, obj_t BgL_numz00_27, obj_t BgL_rulez00_28,
		obj_t BgL_errz00_29)
	{
		{	/* Rgc/rgcrules.scm 385 */
			{	/* Rgc/rgcrules.scm 395 */
				bool_t BgL_test2794z00_4512;

				if (INTEGERP(BgL_numz00_27))
					{	/* Rgc/rgcrules.scm 395 */
						if (((long) CINT(BgL_numz00_27) > ((long) 0)))
							{	/* Rgc/rgcrules.scm 395 */
								BgL_test2794z00_4512 =
									BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_numz00_27,
									BINT(((long) 81)));
							}
						else
							{	/* Rgc/rgcrules.scm 395 */
								BgL_test2794z00_4512 = ((bool_t) 0);
							}
					}
				else
					{	/* Rgc/rgcrules.scm 395 */
						BgL_test2794z00_4512 = ((bool_t) 0);
					}
				if (BgL_test2794z00_4512)
					{
						obj_t BgL_rulesz00_1641;

						{	/* Rgc/rgcrules.scm 397 */
							obj_t BgL_ezd22521zd2_1644;

							BgL_ezd22521zd2_1644 =
								BGl_expandzd2rulezd2zz__rgc_rulesz00(BgL_matchz00_25,
								BgL_envz00_26, BgL_rulez00_28);
							if (PAIRP(BgL_ezd22521zd2_1644))
								{	/* Rgc/rgcrules.scm 397 */
									if (
										(CAR(BgL_ezd22521zd2_1644) ==
											BGl_symbol2615z00zz__rgc_rulesz00))
										{	/* Rgc/rgcrules.scm 397 */
											BgL_rulesz00_1641 = CDR(BgL_ezd22521zd2_1644);
											{	/* Rgc/rgcrules.scm 399 */
												obj_t BgL_arg1562z00_1650;

												{	/* Rgc/rgcrules.scm 399 */
													obj_t BgL_arg1563z00_1651;

													{	/* Rgc/rgcrules.scm 399 */
														obj_t BgL_l1120z00_1652;

														BgL_l1120z00_1652 =
															BGl_explodezd2sequenceze70z35zz__rgc_rulesz00
															(BgL_numz00_27, BgL_rulesz00_1641);
														if (NULLP(BgL_l1120z00_1652))
															{	/* Rgc/rgcrules.scm 399 */
																BgL_arg1563z00_1651 = BNIL;
															}
														else
															{	/* Rgc/rgcrules.scm 399 */
																obj_t BgL_head1122z00_1654;

																{	/* Rgc/rgcrules.scm 399 */
																	obj_t BgL_arg1570z00_1666;

																	BgL_arg1570z00_1666 =
																		BGl_makezd2sequencezd2zz__rgc_rulesz00(CAR
																		(BgL_l1120z00_1652));
																	{	/* Rgc/rgcrules.scm 399 */
																		obj_t BgL_res2327z00_3029;

																		BgL_res2327z00_3029 =
																			MAKE_YOUNG_PAIR(BgL_arg1570z00_1666,
																			BNIL);
																		BgL_head1122z00_1654 = BgL_res2327z00_3029;
																	}
																}
																{	/* Rgc/rgcrules.scm 399 */
																	obj_t BgL_g1125z00_1655;

																	BgL_g1125z00_1655 = CDR(BgL_l1120z00_1652);
																	{
																		obj_t BgL_l1120z00_3052;
																		obj_t BgL_tail1123z00_3053;

																		BgL_l1120z00_3052 = BgL_g1125z00_1655;
																		BgL_tail1123z00_3053 = BgL_head1122z00_1654;
																	BgL_zc3z04anonymousza31565ze3z87_3051:
																		if (NULLP(BgL_l1120z00_3052))
																			{	/* Rgc/rgcrules.scm 399 */
																				BgL_arg1563z00_1651 =
																					BgL_head1122z00_1654;
																			}
																		else
																			{	/* Rgc/rgcrules.scm 399 */
																				obj_t BgL_newtail1124z00_3060;

																				{	/* Rgc/rgcrules.scm 399 */
																					obj_t BgL_arg1568z00_3061;

																					{	/* Rgc/rgcrules.scm 399 */
																						obj_t BgL_arg1569z00_3062;

																						BgL_arg1569z00_3062 =
																							CAR(((obj_t) BgL_l1120z00_3052));
																						BgL_arg1568z00_3061 =
																							BGl_makezd2sequencezd2zz__rgc_rulesz00
																							(BgL_arg1569z00_3062);
																					}
																					{	/* Rgc/rgcrules.scm 399 */
																						obj_t BgL_res2333z00_3066;

																						BgL_res2333z00_3066 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1568z00_3061, BNIL);
																						BgL_newtail1124z00_3060 =
																							BgL_res2333z00_3066;
																					}
																				}
																				SET_CDR(BgL_tail1123z00_3053,
																					BgL_newtail1124z00_3060);
																				{	/* Rgc/rgcrules.scm 399 */
																					obj_t BgL_arg1567z00_3063;

																					BgL_arg1567z00_3063 =
																						CDR(((obj_t) BgL_l1120z00_3052));
																					{
																						obj_t BgL_tail1123z00_4543;
																						obj_t BgL_l1120z00_4542;

																						BgL_l1120z00_4542 =
																							BgL_arg1567z00_3063;
																						BgL_tail1123z00_4543 =
																							BgL_newtail1124z00_3060;
																						BgL_tail1123z00_3053 =
																							BgL_tail1123z00_4543;
																						BgL_l1120z00_3052 =
																							BgL_l1120z00_4542;
																						goto
																							BgL_zc3z04anonymousza31565ze3z87_3051;
																					}
																				}
																			}
																	}
																}
															}
													}
													BgL_arg1562z00_1650 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg1563z00_1651, BNIL);
												}
												return
													MAKE_YOUNG_PAIR(BGl_symbol2506z00zz__rgc_rulesz00,
													BgL_arg1562z00_1650);
											}
										}
									else
										{	/* Rgc/rgcrules.scm 397 */
											return
												BGl_errorz00zz__errorz00(BFALSE,
												BGl_string2613z00zz__rgc_rulesz00, BgL_errz00_29);
										}
								}
							else
								{	/* Rgc/rgcrules.scm 397 */
									return
										BGl_errorz00zz__errorz00(BFALSE,
										BGl_string2613z00zz__rgc_rulesz00, BgL_errz00_29);
								}
						}
					}
				else
					{	/* Rgc/rgcrules.scm 395 */
						return
							BGl_errorz00zz__errorz00(BFALSE,
							BGl_string2617z00zz__rgc_rulesz00, BgL_errz00_29);
					}
			}
		}

	}



/* loop~1 */
	obj_t BGl_loopze71ze7zz__rgc_rulesz00(obj_t BgL_numz00_3797,
		obj_t BgL_rulesz00_1674, long BgL_iz00_1675)
	{
		{	/* Rgc/rgcrules.scm 387 */
			{	/* Rgc/rgcrules.scm 389 */
				bool_t BgL_test2801z00_4550;

				if (NULLP(BgL_rulesz00_1674))
					{	/* Rgc/rgcrules.scm 389 */
						BgL_test2801z00_4550 = ((bool_t) 1);
					}
				else
					{	/* Rgc/rgcrules.scm 389 */
						BgL_test2801z00_4550 =
							(BgL_iz00_1675 == (long) CINT(BgL_numz00_3797));
					}
				if (BgL_test2801z00_4550)
					{	/* Rgc/rgcrules.scm 389 */
						return BNIL;
					}
				else
					{	/* Rgc/rgcrules.scm 391 */
						obj_t BgL_firstz00_1679;

						BgL_firstz00_1679 = CAR(((obj_t) BgL_rulesz00_1674));
						{	/* Rgc/rgcrules.scm 392 */
							obj_t BgL_arg1578z00_1680;
							obj_t BgL_arg1579z00_1681;

							{	/* Rgc/rgcrules.scm 392 */
								obj_t BgL_list1580z00_1682;

								BgL_list1580z00_1682 = MAKE_YOUNG_PAIR(BgL_firstz00_1679, BNIL);
								BgL_arg1578z00_1680 = BgL_list1580z00_1682;
							}
							{	/* Rgc/rgcrules.scm 393 */
								obj_t BgL_l1115z00_1683;

								{	/* Rgc/rgcrules.scm 394 */
									obj_t BgL_arg1588z00_1696;
									long BgL_arg1589z00_1697;

									BgL_arg1588z00_1696 = CDR(((obj_t) BgL_rulesz00_1674));
									BgL_arg1589z00_1697 = (BgL_iz00_1675 + ((long) 1));
									BgL_l1115z00_1683 =
										BGl_loopze71ze7zz__rgc_rulesz00(BgL_numz00_3797,
										BgL_arg1588z00_1696, BgL_arg1589z00_1697);
								}
								if (NULLP(BgL_l1115z00_1683))
									{	/* Rgc/rgcrules.scm 393 */
										BgL_arg1579z00_1681 = BNIL;
									}
								else
									{	/* Rgc/rgcrules.scm 393 */
										obj_t BgL_head1117z00_1685;

										{	/* Rgc/rgcrules.scm 393 */
											obj_t BgL_res2316z00_2981;

											BgL_res2316z00_2981 = MAKE_YOUNG_PAIR(BNIL, BNIL);
											BgL_head1117z00_1685 = BgL_res2316z00_2981;
										}
										{
											obj_t BgL_l1115z00_3005;
											obj_t BgL_tail1118z00_3006;

											BgL_l1115z00_3005 = BgL_l1115z00_1683;
											BgL_tail1118z00_3006 = BgL_head1117z00_1685;
										BgL_zc3z04anonymousza31582ze3z87_3004:
											if (NULLP(BgL_l1115z00_3005))
												{	/* Rgc/rgcrules.scm 393 */
													BgL_arg1579z00_1681 = CDR(BgL_head1117z00_1685);
												}
											else
												{	/* Rgc/rgcrules.scm 393 */
													obj_t BgL_newtail1119z00_3013;

													{	/* Rgc/rgcrules.scm 393 */
														obj_t BgL_arg1587z00_3014;

														{	/* Rgc/rgcrules.scm 393 */
															obj_t BgL_rz00_3015;

															BgL_rz00_3015 = CAR(((obj_t) BgL_l1115z00_3005));
															BgL_arg1587z00_3014 =
																MAKE_YOUNG_PAIR(BgL_firstz00_1679,
																BgL_rz00_3015);
														}
														{	/* Rgc/rgcrules.scm 393 */
															obj_t BgL_res2322z00_3020;

															BgL_res2322z00_3020 =
																MAKE_YOUNG_PAIR(BgL_arg1587z00_3014, BNIL);
															BgL_newtail1119z00_3013 = BgL_res2322z00_3020;
														}
													}
													SET_CDR(BgL_tail1118z00_3006,
														BgL_newtail1119z00_3013);
													{	/* Rgc/rgcrules.scm 393 */
														obj_t BgL_arg1584z00_3016;

														BgL_arg1584z00_3016 =
															CDR(((obj_t) BgL_l1115z00_3005));
														{
															obj_t BgL_tail1118z00_4576;
															obj_t BgL_l1115z00_4575;

															BgL_l1115z00_4575 = BgL_arg1584z00_3016;
															BgL_tail1118z00_4576 = BgL_newtail1119z00_3013;
															BgL_tail1118z00_3006 = BgL_tail1118z00_4576;
															BgL_l1115z00_3005 = BgL_l1115z00_4575;
															goto BgL_zc3z04anonymousza31582ze3z87_3004;
														}
													}
												}
										}
									}
							}
							return MAKE_YOUNG_PAIR(BgL_arg1578z00_1680, BgL_arg1579z00_1681);
						}
					}
			}
		}

	}



/* explode-sequence~0 */
	obj_t BGl_explodezd2sequenceze70z35zz__rgc_rulesz00(obj_t BgL_numz00_3798,
		obj_t BgL_rulesz00_1671)
	{
		{	/* Rgc/rgcrules.scm 394 */
			return
				BGl_loopze71ze7zz__rgc_rulesz00(BgL_numz00_3798, BgL_rulesz00_1671,
				((long) 0));
		}

	}



/* expand-uncase */
	obj_t BGl_expandzd2uncasezd2zz__rgc_rulesz00(long BgL_matchz00_30,
		obj_t BgL_envz00_31, obj_t BgL_rulez00_32)
	{
		{	/* Rgc/rgcrules.scm 422 */
			return
				BGl_loopze70ze7zz__rgc_rulesz00(BGl_expandzd2rulezd2zz__rgc_rulesz00
				(BgL_matchz00_30, BgL_envz00_31, BgL_rulez00_32), BNIL);
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zz__rgc_rulesz00(obj_t BgL_rulez00_1704,
		obj_t BgL_resz00_1705)
	{
		{	/* Rgc/rgcrules.scm 423 */
		BGl_loopze70ze7zz__rgc_rulesz00:
			if (NULLP(BgL_rulez00_1704))
				{	/* Rgc/rgcrules.scm 426 */
					return bgl_reverse_bang(BgL_resz00_1705);
				}
			else
				{	/* Rgc/rgcrules.scm 426 */
					if (PAIRP(BgL_rulez00_1704))
						{	/* Rgc/rgcrules.scm 437 */
							bool_t BgL_test2807z00_4586;

							{	/* Rgc/rgcrules.scm 437 */
								obj_t BgL_tmpz00_4587;

								BgL_tmpz00_4587 = CAR(BgL_rulez00_1704);
								BgL_test2807z00_4586 = PAIRP(BgL_tmpz00_4587);
							}
							if (BgL_test2807z00_4586)
								{	/* Rgc/rgcrules.scm 438 */
									obj_t BgL_arg1596z00_1711;
									obj_t BgL_arg1597z00_1712;

									BgL_arg1596z00_1711 = CDR(BgL_rulez00_1704);
									BgL_arg1597z00_1712 =
										MAKE_YOUNG_PAIR(BGl_loopze70ze7zz__rgc_rulesz00(CAR
											(BgL_rulez00_1704), BNIL), BgL_resz00_1705);
									{
										obj_t BgL_resz00_4595;
										obj_t BgL_rulez00_4594;

										BgL_rulez00_4594 = BgL_arg1596z00_1711;
										BgL_resz00_4595 = BgL_arg1597z00_1712;
										BgL_resz00_1705 = BgL_resz00_4595;
										BgL_rulez00_1704 = BgL_rulez00_4594;
										goto BGl_loopze70ze7zz__rgc_rulesz00;
									}
								}
							else
								{	/* Rgc/rgcrules.scm 437 */
									if (INTEGERP(CAR(BgL_rulez00_1704)))
										{	/* Rgc/rgcrules.scm 440 */
											if (BGl_rgczd2alphabeticzf3z21zz__rgc_configz00(CAR
													(BgL_rulez00_1704)))
												{	/* Rgc/rgcrules.scm 445 */
													obj_t BgL_arg1606z00_1719;
													obj_t BgL_arg1607z00_1720;

													BgL_arg1606z00_1719 = CDR(BgL_rulez00_1704);
													{	/* Rgc/rgcrules.scm 446 */
														obj_t BgL_arg1608z00_1721;

														{	/* Rgc/rgcrules.scm 446 */
															obj_t BgL_arg1611z00_1722;

															{	/* Rgc/rgcrules.scm 446 */
																obj_t BgL_arg1612z00_1723;
																obj_t BgL_arg1613z00_1724;

																BgL_arg1612z00_1723 =
																	BGl_rgczd2upcasezd2zz__rgc_configz00(CAR
																	(BgL_rulez00_1704));
																BgL_arg1613z00_1724 =
																	MAKE_YOUNG_PAIR
																	(BGl_rgczd2downcasezd2zz__rgc_configz00(CAR
																		(BgL_rulez00_1704)), BNIL);
																BgL_arg1611z00_1722 =
																	MAKE_YOUNG_PAIR(BgL_arg1612z00_1723,
																	BgL_arg1613z00_1724);
															}
															BgL_arg1608z00_1721 =
																MAKE_YOUNG_PAIR
																(BGl_symbol2506z00zz__rgc_rulesz00,
																BgL_arg1611z00_1722);
														}
														BgL_arg1607z00_1720 =
															MAKE_YOUNG_PAIR(BgL_arg1608z00_1721,
															BgL_resz00_1705);
													}
													{
														obj_t BgL_resz00_4612;
														obj_t BgL_rulez00_4611;

														BgL_rulez00_4611 = BgL_arg1606z00_1719;
														BgL_resz00_4612 = BgL_arg1607z00_1720;
														BgL_resz00_1705 = BgL_resz00_4612;
														BgL_rulez00_1704 = BgL_rulez00_4611;
														goto BGl_loopze70ze7zz__rgc_rulesz00;
													}
												}
											else
												{	/* Rgc/rgcrules.scm 449 */
													obj_t BgL_arg1617z00_1728;
													obj_t BgL_arg1618z00_1729;

													BgL_arg1617z00_1728 = CDR(BgL_rulez00_1704);
													BgL_arg1618z00_1729 =
														MAKE_YOUNG_PAIR(CAR(BgL_rulez00_1704),
														BgL_resz00_1705);
													{
														obj_t BgL_resz00_4617;
														obj_t BgL_rulez00_4616;

														BgL_rulez00_4616 = BgL_arg1617z00_1728;
														BgL_resz00_4617 = BgL_arg1618z00_1729;
														BgL_resz00_1705 = BgL_resz00_4617;
														BgL_rulez00_1704 = BgL_rulez00_4616;
														goto BGl_loopze70ze7zz__rgc_rulesz00;
													}
												}
										}
									else
										{	/* Rgc/rgcrules.scm 452 */
											obj_t BgL_arg1621z00_1732;
											obj_t BgL_arg1623z00_1733;

											BgL_arg1621z00_1732 = CDR(BgL_rulez00_1704);
											BgL_arg1623z00_1733 =
												MAKE_YOUNG_PAIR(CAR(BgL_rulez00_1704), BgL_resz00_1705);
											{
												obj_t BgL_resz00_4622;
												obj_t BgL_rulez00_4621;

												BgL_rulez00_4621 = BgL_arg1621z00_1732;
												BgL_resz00_4622 = BgL_arg1623z00_1733;
												BgL_resz00_1705 = BgL_resz00_4622;
												BgL_rulez00_1704 = BgL_rulez00_4621;
												goto BGl_loopze70ze7zz__rgc_rulesz00;
											}
										}
								}
						}
					else
						{	/* Rgc/rgcrules.scm 428 */
							if (INTEGERP(BgL_rulez00_1704))
								{	/* Rgc/rgcrules.scm 429 */
									if (BGl_rgczd2alphabeticzf3z21zz__rgc_configz00
										(BgL_rulez00_1704))
										{	/* Rgc/rgcrules.scm 434 */
											obj_t BgL_arg1630z00_1739;

											{	/* Rgc/rgcrules.scm 434 */
												obj_t BgL_arg1631z00_1740;
												obj_t BgL_arg1632z00_1741;

												BgL_arg1631z00_1740 =
													BGl_rgczd2upcasezd2zz__rgc_configz00
													(BgL_rulez00_1704);
												BgL_arg1632z00_1741 =
													MAKE_YOUNG_PAIR(BGl_rgczd2downcasezd2zz__rgc_configz00
													(BgL_rulez00_1704),
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_resz00_1705, BNIL));
												BgL_arg1630z00_1739 =
													MAKE_YOUNG_PAIR(BgL_arg1631z00_1740,
													BgL_arg1632z00_1741);
											}
											return
												MAKE_YOUNG_PAIR(BGl_symbol2506z00zz__rgc_rulesz00,
												BgL_arg1630z00_1739);
										}
									else
										{	/* Rgc/rgcrules.scm 430 */
											return BgL_rulez00_1704;
										}
								}
							else
								{	/* Rgc/rgcrules.scm 429 */
									return BgL_rulez00_1704;
								}
						}
				}
		}

	}



/* expand-+ */
	obj_t BGl_expandzd2zb2z60zz__rgc_rulesz00(long BgL_matchz00_36,
		obj_t BgL_envz00_37, obj_t BgL_rulez00_38)
	{
		{	/* Rgc/rgcrules.scm 464 */
			{	/* Rgc/rgcrules.scm 465 */
				obj_t BgL_erulez00_3091;

				BgL_erulez00_3091 =
					BGl_expandzd2rulezd2zz__rgc_rulesz00(BgL_matchz00_36, BgL_envz00_37,
					BgL_rulez00_38);
				{	/* Rgc/rgcrules.scm 466 */
					obj_t BgL_arg1639z00_3092;

					{	/* Rgc/rgcrules.scm 466 */
						obj_t BgL_arg1640z00_3093;

						{	/* Rgc/rgcrules.scm 466 */
							obj_t BgL_arg1641z00_3094;

							{	/* Rgc/rgcrules.scm 466 */
								obj_t BgL_arg1642z00_3095;

								BgL_arg1642z00_3095 = MAKE_YOUNG_PAIR(BgL_erulez00_3091, BNIL);
								BgL_arg1641z00_3094 =
									MAKE_YOUNG_PAIR(BGl_symbol2583z00zz__rgc_rulesz00,
									BgL_arg1642z00_3095);
							}
							BgL_arg1640z00_3093 = MAKE_YOUNG_PAIR(BgL_arg1641z00_3094, BNIL);
						}
						BgL_arg1639z00_3092 =
							MAKE_YOUNG_PAIR(BgL_erulez00_3091, BgL_arg1640z00_3093);
					}
					return
						MAKE_YOUNG_PAIR(BGl_symbol2615z00zz__rgc_rulesz00,
						BgL_arg1639z00_3092);
				}
			}
		}

	}



/* expand-or */
	obj_t BGl_expandzd2orzd2zz__rgc_rulesz00(long BgL_matchz00_42,
		obj_t BgL_envz00_43, obj_t BgL_rulesz00_44)
	{
		{	/* Rgc/rgcrules.scm 477 */
			if (NULLP(BgL_rulesz00_44))
				{	/* Rgc/rgcrules.scm 478 */
					return BGl_symbol2589z00zz__rgc_rulesz00;
				}
			else
				{
					obj_t BgL_rulesz00_1758;
					obj_t BgL_resz00_1759;

					BgL_rulesz00_1758 = BgL_rulesz00_44;
					BgL_resz00_1759 = BNIL;
				BgL_zc3z04anonymousza31647ze3z87_1760:
					if (NULLP(BgL_rulesz00_1758))
						{	/* Rgc/rgcrules.scm 483 */
							obj_t BgL_arg1649z00_1762;

							BgL_arg1649z00_1762 =
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(bgl_reverse_bang
								(BgL_resz00_1759), BNIL);
							return MAKE_YOUNG_PAIR(BGl_symbol2506z00zz__rgc_rulesz00,
								BgL_arg1649z00_1762);
						}
					else
						{	/* Rgc/rgcrules.scm 484 */
							obj_t BgL_rulez00_1764;

							{	/* Rgc/rgcrules.scm 484 */
								obj_t BgL_arg1662z00_1776;

								BgL_arg1662z00_1776 = CAR(((obj_t) BgL_rulesz00_1758));
								BgL_rulez00_1764 =
									BGl_expandzd2rulezd2zz__rgc_rulesz00(BgL_matchz00_42,
									BgL_envz00_43, BgL_arg1662z00_1776);
							}
							{	/* Rgc/rgcrules.scm 485 */
								bool_t BgL_test2814z00_4649;

								if (PAIRP(BgL_rulez00_1764))
									{	/* Rgc/rgcrules.scm 485 */
										BgL_test2814z00_4649 =
											(CAR(BgL_rulez00_1764) ==
											BGl_symbol2506z00zz__rgc_rulesz00);
									}
								else
									{	/* Rgc/rgcrules.scm 485 */
										BgL_test2814z00_4649 = ((bool_t) 0);
									}
								if (BgL_test2814z00_4649)
									{	/* Rgc/rgcrules.scm 486 */
										obj_t BgL_arg1654z00_1768;
										obj_t BgL_arg1656z00_1769;

										BgL_arg1654z00_1768 = CDR(((obj_t) BgL_rulesz00_1758));
										BgL_arg1656z00_1769 =
											BGl_appendzd221011zd2zz__rgc_rulesz00(bgl_reverse_bang(CDR
												(BgL_rulez00_1764)), BgL_resz00_1759);
										{
											obj_t BgL_resz00_4660;
											obj_t BgL_rulesz00_4659;

											BgL_rulesz00_4659 = BgL_arg1654z00_1768;
											BgL_resz00_4660 = BgL_arg1656z00_1769;
											BgL_resz00_1759 = BgL_resz00_4660;
											BgL_rulesz00_1758 = BgL_rulesz00_4659;
											goto BgL_zc3z04anonymousza31647ze3z87_1760;
										}
									}
								else
									{	/* Rgc/rgcrules.scm 487 */
										obj_t BgL_arg1659z00_1772;
										obj_t BgL_arg1660z00_1773;

										BgL_arg1659z00_1772 = CDR(((obj_t) BgL_rulesz00_1758));
										BgL_arg1660z00_1773 =
											MAKE_YOUNG_PAIR(BgL_rulez00_1764, BgL_resz00_1759);
										{
											obj_t BgL_resz00_4665;
											obj_t BgL_rulesz00_4664;

											BgL_rulesz00_4664 = BgL_arg1659z00_1772;
											BgL_resz00_4665 = BgL_arg1660z00_1773;
											BgL_resz00_1759 = BgL_resz00_4665;
											BgL_rulesz00_1758 = BgL_rulesz00_4664;
											goto BgL_zc3z04anonymousza31647ze3z87_1760;
										}
									}
							}
						}
				}
		}

	}



/* expand-= */
	obj_t BGl_expandzd2zd3z01zz__rgc_rulesz00(long BgL_matchz00_45,
		obj_t BgL_envz00_46, obj_t BgL_numz00_47, obj_t BgL_rulez00_48,
		obj_t BgL_errz00_49)
	{
		{	/* Rgc/rgcrules.scm 497 */
			{	/* Rgc/rgcrules.scm 498 */
				bool_t BgL_test2816z00_4666;

				if (INTEGERP(BgL_numz00_47))
					{	/* Rgc/rgcrules.scm 498 */
						if (((long) CINT(BgL_numz00_47) > ((long) 0)))
							{	/* Rgc/rgcrules.scm 498 */
								BgL_test2816z00_4666 =
									BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_numz00_47,
									BINT(((long) 81)));
							}
						else
							{	/* Rgc/rgcrules.scm 498 */
								BgL_test2816z00_4666 = ((bool_t) 0);
							}
					}
				else
					{	/* Rgc/rgcrules.scm 498 */
						BgL_test2816z00_4666 = ((bool_t) 0);
					}
				if (BgL_test2816z00_4666)
					{	/* Rgc/rgcrules.scm 500 */
						obj_t BgL_erulez00_3111;

						BgL_erulez00_3111 =
							BGl_expandzd2rulezd2zz__rgc_rulesz00(BgL_matchz00_45,
							BgL_envz00_46, BgL_rulez00_48);
						return
							BGl_makezd2sequencezd2zz__rgc_rulesz00
							(BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(make_vector((long)
									CINT(BgL_numz00_47), BgL_erulez00_3111)));
					}
				else
					{	/* Rgc/rgcrules.scm 498 */
						return
							BGl_errorz00zz__errorz00(BFALSE,
							BGl_string2617z00zz__rgc_rulesz00, BgL_errz00_49);
					}
			}
		}

	}



/* expand->= */
	obj_t BGl_expandzd2ze3zd3ze2zz__rgc_rulesz00(long BgL_matchz00_50,
		obj_t BgL_envz00_51, obj_t BgL_numz00_52, obj_t BgL_rulez00_53,
		obj_t BgL_errz00_54)
	{
		{	/* Rgc/rgcrules.scm 511 */
			{	/* Rgc/rgcrules.scm 512 */
				bool_t BgL_test2819z00_4680;

				if (INTEGERP(BgL_numz00_52))
					{	/* Rgc/rgcrules.scm 512 */
						if (((long) CINT(BgL_numz00_52) > ((long) 0)))
							{	/* Rgc/rgcrules.scm 512 */
								BgL_test2819z00_4680 =
									BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_numz00_52,
									BINT(((long) 81)));
							}
						else
							{	/* Rgc/rgcrules.scm 512 */
								BgL_test2819z00_4680 = ((bool_t) 0);
							}
					}
				else
					{	/* Rgc/rgcrules.scm 512 */
						BgL_test2819z00_4680 = ((bool_t) 0);
					}
				if (BgL_test2819z00_4680)
					{	/* Rgc/rgcrules.scm 514 */
						obj_t BgL_erulez00_1794;

						BgL_erulez00_1794 =
							BGl_expandzd2rulezd2zz__rgc_rulesz00(BgL_matchz00_50,
							BgL_envz00_51, BgL_rulez00_53);
						{	/* Rgc/rgcrules.scm 515 */
							obj_t BgL_arg1675z00_1795;

							{	/* Rgc/rgcrules.scm 515 */
								obj_t BgL_arg1683z00_1796;
								obj_t BgL_arg1684z00_1797;

								BgL_arg1683z00_1796 =
									BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(make_vector(
										(long) CINT(BgL_numz00_52), BgL_erulez00_1794));
								{	/* Rgc/rgcrules.scm 516 */
									obj_t BgL_arg1686z00_1799;

									{	/* Rgc/rgcrules.scm 516 */
										obj_t BgL_arg1687z00_1800;

										BgL_arg1687z00_1800 =
											MAKE_YOUNG_PAIR(BgL_erulez00_1794, BNIL);
										BgL_arg1686z00_1799 =
											MAKE_YOUNG_PAIR(BGl_symbol2583z00zz__rgc_rulesz00,
											BgL_arg1687z00_1800);
									}
									BgL_arg1684z00_1797 =
										MAKE_YOUNG_PAIR(BgL_arg1686z00_1799, BNIL);
								}
								BgL_arg1675z00_1795 =
									BGl_appendzd221011zd2zz__rgc_rulesz00(BgL_arg1683z00_1796,
									BgL_arg1684z00_1797);
							}
							return
								BGl_makezd2sequencezd2zz__rgc_rulesz00(BgL_arg1675z00_1795);
						}
					}
				else
					{	/* Rgc/rgcrules.scm 512 */
						return
							BGl_errorz00zz__errorz00(BFALSE,
							BGl_string2617z00zz__rgc_rulesz00, BgL_errz00_54);
					}
			}
		}

	}



/* expand-** */
	obj_t BGl_expandzd2za2za2zd2zz__rgc_rulesz00(long BgL_matchz00_55,
		obj_t BgL_envz00_56, obj_t BgL_minz00_57, obj_t BgL_maxz00_58,
		obj_t BgL_rulez00_59, obj_t BgL_errz00_60)
	{
		{	/* Rgc/rgcrules.scm 526 */
			{	/* Rgc/rgcrules.scm 527 */
				bool_t BgL_test2822z00_4698;

				if (INTEGERP(BgL_minz00_57))
					{	/* Rgc/rgcrules.scm 527 */
						if (((long) CINT(BgL_minz00_57) > ((long) 0)))
							{	/* Rgc/rgcrules.scm 528 */
								if (INTEGERP(BgL_maxz00_58))
									{	/* Rgc/rgcrules.scm 529 */
										if (BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_maxz00_58,
												BgL_minz00_57))
											{	/* Rgc/rgcrules.scm 530 */
												BgL_test2822z00_4698 =
													BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_maxz00_58,
													BINT(((long) 81)));
											}
										else
											{	/* Rgc/rgcrules.scm 530 */
												BgL_test2822z00_4698 = ((bool_t) 0);
											}
									}
								else
									{	/* Rgc/rgcrules.scm 529 */
										BgL_test2822z00_4698 = ((bool_t) 0);
									}
							}
						else
							{	/* Rgc/rgcrules.scm 528 */
								BgL_test2822z00_4698 = ((bool_t) 0);
							}
					}
				else
					{	/* Rgc/rgcrules.scm 527 */
						BgL_test2822z00_4698 = ((bool_t) 0);
					}
				if (BgL_test2822z00_4698)
					{	/* Rgc/rgcrules.scm 533 */
						obj_t BgL_erulez00_1811;

						BgL_erulez00_1811 =
							BGl_expandzd2rulezd2zz__rgc_rulesz00(BgL_matchz00_55,
							BgL_envz00_56, BgL_rulez00_59);
						{
							obj_t BgL_minz00_1814;
							obj_t BgL_resz00_1815;

							BgL_minz00_1814 = BgL_minz00_57;
							BgL_resz00_1815 = BNIL;
						BgL_zc3z04anonymousza31694ze3z87_1816:
							if (BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_minz00_1814,
									BgL_maxz00_58))
								{	/* Rgc/rgcrules.scm 537 */
									obj_t BgL_arg1696z00_1818;

									BgL_arg1696z00_1818 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(bgl_reverse_bang(BgL_resz00_1815), BNIL);
									return MAKE_YOUNG_PAIR(BGl_symbol2506z00zz__rgc_rulesz00,
										BgL_arg1696z00_1818);
								}
							else
								{	/* Rgc/rgcrules.scm 538 */
									obj_t BgL_arg1698z00_1820;
									obj_t BgL_arg1699z00_1821;

									if (INTEGERP(BgL_minz00_1814))
										{	/* Rgc/rgcrules.scm 538 */
											BgL_arg1698z00_1820 =
												ADDFX(BgL_minz00_1814, BINT(((long) 1)));
										}
									else
										{	/* Rgc/rgcrules.scm 538 */
											BgL_arg1698z00_1820 =
												BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_minz00_1814,
												BINT(((long) 1)));
										}
									BgL_arg1699z00_1821 =
										MAKE_YOUNG_PAIR(BGl_makezd2sequencezd2zz__rgc_rulesz00
										(BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(make_vector(
													(long) CINT(BgL_minz00_1814), BgL_erulez00_1811))),
										BgL_resz00_1815);
									{
										obj_t BgL_resz00_4728;
										obj_t BgL_minz00_4727;

										BgL_minz00_4727 = BgL_arg1698z00_1820;
										BgL_resz00_4728 = BgL_arg1699z00_1821;
										BgL_resz00_1815 = BgL_resz00_4728;
										BgL_minz00_1814 = BgL_minz00_4727;
										goto BgL_zc3z04anonymousza31694ze3z87_1816;
									}
								}
						}
					}
				else
					{	/* Rgc/rgcrules.scm 527 */
						return
							BGl_errorz00zz__errorz00(BFALSE,
							BGl_string2617z00zz__rgc_rulesz00, BgL_errz00_60);
					}
			}
		}

	}



/* expand-in */
	obj_t BGl_expandzd2inzd2zz__rgc_rulesz00(long BgL_matchz00_61,
		obj_t BgL_envz00_62, obj_t BgL_valuesz00_63, obj_t BgL_errz00_64)
	{
		{	/* Rgc/rgcrules.scm 554 */
			if (NULLP(BgL_valuesz00_63))
				{	/* Rgc/rgcrules.scm 586 */
					return BGl_symbol2589z00zz__rgc_rulesz00;
				}
			else
				{
					obj_t BgL_valuesz00_1838;
					obj_t BgL_charsz00_1839;

					BgL_valuesz00_1838 = BgL_valuesz00_63;
					BgL_charsz00_1839 = BNIL;
				BgL_zc3z04anonymousza31706ze3z87_1840:
					if (NULLP(BgL_valuesz00_1838))
						{	/* Rgc/rgcrules.scm 591 */
							obj_t BgL_arg1708z00_1842;

							BgL_arg1708z00_1842 =
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BgL_charsz00_1839, BNIL);
							return MAKE_YOUNG_PAIR(BGl_symbol2506z00zz__rgc_rulesz00,
								BgL_arg1708z00_1842);
						}
					else
						{	/* Rgc/rgcrules.scm 592 */
							obj_t BgL_valuez00_1843;

							BgL_valuez00_1843 = CAR(((obj_t) BgL_valuesz00_1838));
							{
								obj_t BgL_orzd2charszd2_1851;

								if (BGl_rgczd2charzf3ze70zc6zz__rgc_rulesz00(BgL_valuez00_1843))
									{	/* Rgc/rgcrules.scm 593 */
										{	/* Rgc/rgcrules.scm 595 */
											obj_t BgL_arg1756z00_1901;
											obj_t BgL_arg1757z00_1902;

											BgL_arg1756z00_1901 = CDR(((obj_t) BgL_valuesz00_1838));
											{	/* Rgc/rgcrules.scm 595 */
												obj_t BgL_arg1759z00_1903;

												if (CHARP(BgL_valuez00_1843))
													{	/* Rgc/rgcrules.scm 595 */
														BgL_arg1759z00_1903 =
															BINT((CCHAR(BgL_valuez00_1843)));
													}
												else
													{	/* Rgc/rgcrules.scm 595 */
														BgL_arg1759z00_1903 = BgL_valuez00_1843;
													}
												BgL_arg1757z00_1902 =
													MAKE_YOUNG_PAIR(BgL_arg1759z00_1903,
													BgL_charsz00_1839);
											}
											{
												obj_t BgL_charsz00_4749;
												obj_t BgL_valuesz00_4748;

												BgL_valuesz00_4748 = BgL_arg1756z00_1901;
												BgL_charsz00_4749 = BgL_arg1757z00_1902;
												BgL_charsz00_1839 = BgL_charsz00_4749;
												BgL_valuesz00_1838 = BgL_valuesz00_4748;
												goto BgL_zc3z04anonymousza31706ze3z87_1840;
											}
										}
									}
								else
									{	/* Rgc/rgcrules.scm 593 */
										if (STRINGP(BgL_valuez00_1843))
											{	/* Rgc/rgcrules.scm 593 */
												if (
													(STRING_LENGTH(
															((obj_t) BgL_valuez00_1843)) == ((long) 0)))
													{	/* Rgc/rgcrules.scm 600 */
														return BGl_symbol2589z00zz__rgc_rulesz00;
													}
												else
													{	/* Rgc/rgcrules.scm 602 */
														obj_t BgL_arg1763z00_1907;
														obj_t BgL_arg1764z00_1908;

														BgL_arg1763z00_1907 =
															CDR(((obj_t) BgL_valuesz00_1838));
														{	/* Rgc/rgcrules.scm 603 */
															obj_t BgL_arg1765z00_1909;

															{	/* Rgc/rgcrules.scm 603 */
																obj_t BgL_l1126z00_1910;

																BgL_l1126z00_1910 =
																	BGl_stringzd2ze3listz31zz__r4_strings_6_7z00
																	(BgL_valuez00_1843);
																if (NULLP(BgL_l1126z00_1910))
																	{	/* Rgc/rgcrules.scm 603 */
																		BgL_arg1765z00_1909 = BNIL;
																	}
																else
																	{	/* Rgc/rgcrules.scm 603 */
																		obj_t BgL_head1128z00_1912;

																		{	/* Rgc/rgcrules.scm 603 */
																			long BgL_arg1772z00_1924;

																			BgL_arg1772z00_1924 =
																				(CCHAR(CAR(BgL_l1126z00_1910)));
																			{	/* Rgc/rgcrules.scm 603 */
																				obj_t BgL_res2390z00_3249;

																				BgL_res2390z00_3249 =
																					MAKE_YOUNG_PAIR(BINT
																					(BgL_arg1772z00_1924), BNIL);
																				BgL_head1128z00_1912 =
																					BgL_res2390z00_3249;
																		}}
																		{	/* Rgc/rgcrules.scm 603 */
																			obj_t BgL_g1131z00_1913;

																			BgL_g1131z00_1913 =
																				CDR(BgL_l1126z00_1910);
																			{
																				obj_t BgL_l1126z00_3276;
																				obj_t BgL_tail1129z00_3277;

																				BgL_l1126z00_3276 = BgL_g1131z00_1913;
																				BgL_tail1129z00_3277 =
																					BgL_head1128z00_1912;
																			BgL_zc3z04anonymousza31767ze3z87_3275:
																				if (NULLP(BgL_l1126z00_3276))
																					{	/* Rgc/rgcrules.scm 603 */
																						BgL_arg1765z00_1909 =
																							BgL_head1128z00_1912;
																					}
																				else
																					{	/* Rgc/rgcrules.scm 603 */
																						obj_t BgL_newtail1130z00_3284;

																						{	/* Rgc/rgcrules.scm 603 */
																							long BgL_arg1770z00_3285;

																							BgL_arg1770z00_3285 =
																								(CCHAR(CAR(
																										((obj_t)
																											BgL_l1126z00_3276))));
																							{	/* Rgc/rgcrules.scm 603 */
																								obj_t BgL_res2399z00_3292;

																								BgL_res2399z00_3292 =
																									MAKE_YOUNG_PAIR(BINT
																									(BgL_arg1770z00_3285), BNIL);
																								BgL_newtail1130z00_3284 =
																									BgL_res2399z00_3292;
																						}}
																						SET_CDR(BgL_tail1129z00_3277,
																							BgL_newtail1130z00_3284);
																						{	/* Rgc/rgcrules.scm 603 */
																							obj_t BgL_arg1769z00_3287;

																							BgL_arg1769z00_3287 =
																								CDR(
																								((obj_t) BgL_l1126z00_3276));
																							{
																								obj_t BgL_tail1129z00_4779;
																								obj_t BgL_l1126z00_4778;

																								BgL_l1126z00_4778 =
																									BgL_arg1769z00_3287;
																								BgL_tail1129z00_4779 =
																									BgL_newtail1130z00_3284;
																								BgL_tail1129z00_3277 =
																									BgL_tail1129z00_4779;
																								BgL_l1126z00_3276 =
																									BgL_l1126z00_4778;
																								goto
																									BgL_zc3z04anonymousza31767ze3z87_3275;
																							}
																						}
																					}
																			}
																		}
																	}
															}
															BgL_arg1764z00_1908 =
																BGl_appendzd221011zd2zz__rgc_rulesz00
																(BgL_arg1765z00_1909, BgL_charsz00_1839);
														}
														{
															obj_t BgL_charsz00_4782;
															obj_t BgL_valuesz00_4781;

															BgL_valuesz00_4781 = BgL_arg1763z00_1907;
															BgL_charsz00_4782 = BgL_arg1764z00_1908;
															BgL_charsz00_1839 = BgL_charsz00_4782;
															BgL_valuesz00_1838 = BgL_valuesz00_4781;
															goto BgL_zc3z04anonymousza31706ze3z87_1840;
														}
													}
											}
										else
											{	/* Rgc/rgcrules.scm 593 */
												if (PAIRP(BgL_valuez00_1843))
													{	/* Rgc/rgcrules.scm 593 */
														obj_t BgL_carzd22548zd2_1858;
														obj_t BgL_cdrzd22549zd2_1859;

														BgL_carzd22548zd2_1858 = CAR(BgL_valuez00_1843);
														BgL_cdrzd22549zd2_1859 = CDR(BgL_valuez00_1843);
														if (BGl_rgczd2charzf3ze70zc6zz__rgc_rulesz00
															(BgL_carzd22548zd2_1858))
															{	/* Rgc/rgcrules.scm 593 */
																if (PAIRP(BgL_cdrzd22549zd2_1859))
																	{	/* Rgc/rgcrules.scm 593 */
																		obj_t BgL_carzd22554zd2_1862;

																		BgL_carzd22554zd2_1862 =
																			CAR(BgL_cdrzd22549zd2_1859);
																		if (BGl_rgczd2charzf3ze70zc6zz__rgc_rulesz00
																			(BgL_carzd22554zd2_1862))
																			{	/* Rgc/rgcrules.scm 593 */
																				if (NULLP(CDR(BgL_cdrzd22549zd2_1859)))
																					{	/* Rgc/rgcrules.scm 606 */
																						obj_t BgL_arg1775z00_3329;
																						obj_t BgL_arg1776z00_3330;

																						BgL_arg1775z00_3329 =
																							CDR(((obj_t) BgL_valuesz00_1838));
																						BgL_arg1776z00_3330 =
																							BGl_appendzd221011zd2zz__rgc_rulesz00
																							(BGl_charzd2rangeze70z35zz__rgc_rulesz00
																							(BgL_errz00_64,
																								BgL_carzd22548zd2_1858,
																								BgL_carzd22554zd2_1862),
																							BgL_charsz00_1839);
																						{
																							obj_t BgL_charsz00_4802;
																							obj_t BgL_valuesz00_4801;

																							BgL_valuesz00_4801 =
																								BgL_arg1775z00_3329;
																							BgL_charsz00_4802 =
																								BgL_arg1776z00_3330;
																							BgL_charsz00_1839 =
																								BgL_charsz00_4802;
																							BgL_valuesz00_1838 =
																								BgL_valuesz00_4801;
																							goto
																								BgL_zc3z04anonymousza31706ze3z87_1840;
																						}
																					}
																				else
																					{	/* Rgc/rgcrules.scm 593 */
																						if (
																							(CAR(BgL_valuez00_1843) ==
																								BGl_symbol2506z00zz__rgc_rulesz00))
																							{	/* Rgc/rgcrules.scm 593 */
																								BgL_orzd2charszd2_1851 =
																									CDR(BgL_valuez00_1843);
																							BgL_tagzd22531zd2_1852:
																								{
																									obj_t BgL_csz00_1935;
																									obj_t BgL_resz00_1936;

																									BgL_csz00_1935 =
																										BgL_orzd2charszd2_1851;
																									BgL_resz00_1936 = BNIL;
																								BgL_zc3z04anonymousza31781ze3z87_1937:
																									if (NULLP
																										(BgL_csz00_1935))
																										{	/* Rgc/rgcrules.scm 614 */
																											obj_t BgL_arg1783z00_1939;
																											obj_t BgL_arg1784z00_1940;

																											BgL_arg1783z00_1939 =
																												CDR(
																												((obj_t)
																													BgL_valuesz00_1838));
																											BgL_arg1784z00_1940 =
																												BGl_appendzd221011zd2zz__rgc_rulesz00
																												(BgL_resz00_1936,
																												BgL_charsz00_1839);
																											{
																												obj_t BgL_charsz00_4812;
																												obj_t
																													BgL_valuesz00_4811;
																												BgL_valuesz00_4811 =
																													BgL_arg1783z00_1939;
																												BgL_charsz00_4812 =
																													BgL_arg1784z00_1940;
																												BgL_charsz00_1839 =
																													BgL_charsz00_4812;
																												BgL_valuesz00_1838 =
																													BgL_valuesz00_4811;
																												goto
																													BgL_zc3z04anonymousza31706ze3z87_1840;
																											}
																										}
																									else
																										{	/* Rgc/rgcrules.scm 616 */
																											bool_t
																												BgL_test2844z00_4813;
																											{	/* Rgc/rgcrules.scm 616 */
																												obj_t
																													BgL_arg1803z00_1957;
																												BgL_arg1803z00_1957 =
																													CAR(((obj_t)
																														BgL_csz00_1935));
																												BgL_test2844z00_4813 =
																													BGl_rgczd2charzf3ze70zc6zz__rgc_rulesz00
																													(BgL_arg1803z00_1957);
																											}
																											if (BgL_test2844z00_4813)
																												{	/* Rgc/rgcrules.scm 617 */
																													obj_t
																														BgL_arg1788z00_1943;
																													obj_t
																														BgL_arg1789z00_1944;
																													BgL_arg1788z00_1943 =
																														CDR(((obj_t)
																															BgL_csz00_1935));
																													{	/* Rgc/rgcrules.scm 617 */
																														obj_t
																															BgL_arg1790z00_1945;
																														BgL_arg1790z00_1945
																															=
																															CAR(((obj_t)
																																BgL_csz00_1935));
																														BgL_arg1789z00_1944
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1790z00_1945,
																															BgL_resz00_1936);
																													}
																													{
																														obj_t
																															BgL_resz00_4823;
																														obj_t
																															BgL_csz00_4822;
																														BgL_csz00_4822 =
																															BgL_arg1788z00_1943;
																														BgL_resz00_4823 =
																															BgL_arg1789z00_1944;
																														BgL_resz00_1936 =
																															BgL_resz00_4823;
																														BgL_csz00_1935 =
																															BgL_csz00_4822;
																														goto
																															BgL_zc3z04anonymousza31781ze3z87_1937;
																													}
																												}
																											else
																												{	/* Rgc/rgcrules.scm 618 */
																													bool_t
																														BgL_test2845z00_4824;
																													{	/* Rgc/rgcrules.scm 618 */
																														bool_t
																															BgL_test2846z00_4825;
																														{	/* Rgc/rgcrules.scm 618 */
																															obj_t
																																BgL_tmpz00_4826;
																															BgL_tmpz00_4826 =
																																CAR(((obj_t)
																																	BgL_csz00_1935));
																															BgL_test2846z00_4825
																																=
																																PAIRP
																																(BgL_tmpz00_4826);
																														}
																														if (BgL_test2846z00_4825)
																															{	/* Rgc/rgcrules.scm 618 */
																																obj_t
																																	BgL_tmpz00_4830;
																																{	/* Rgc/rgcrules.scm 618 */
																																	obj_t
																																		BgL_pairz00_3313;
																																	BgL_pairz00_3313
																																		=
																																		CAR(((obj_t)
																																			BgL_csz00_1935));
																																	BgL_tmpz00_4830
																																		=
																																		CAR
																																		(BgL_pairz00_3313);
																																}
																																BgL_test2845z00_4824
																																	=
																																	(BgL_tmpz00_4830
																																	==
																																	BGl_symbol2506z00zz__rgc_rulesz00);
																															}
																														else
																															{	/* Rgc/rgcrules.scm 618 */
																																BgL_test2845z00_4824
																																	=
																																	((bool_t) 0);
																															}
																													}
																													if (BgL_test2845z00_4824)
																														{	/* Rgc/rgcrules.scm 619 */
																															obj_t
																																BgL_arg1797z00_1951;
																															{	/* Rgc/rgcrules.scm 619 */
																																obj_t
																																	BgL_arg1798z00_1952;
																																obj_t
																																	BgL_arg1799z00_1953;
																																{	/* Rgc/rgcrules.scm 619 */
																																	obj_t
																																		BgL_pairz00_3317;
																																	BgL_pairz00_3317
																																		=
																																		CAR(((obj_t)
																																			BgL_csz00_1935));
																																	BgL_arg1798z00_1952
																																		=
																																		CDR
																																		(BgL_pairz00_3317);
																																}
																																BgL_arg1799z00_1953
																																	=
																																	CDR(((obj_t)
																																		BgL_csz00_1935));
																																BgL_arg1797z00_1951
																																	=
																																	BGl_appendzd221011zd2zz__rgc_rulesz00
																																	(BgL_arg1798z00_1952,
																																	BgL_arg1799z00_1953);
																															}
																															{
																																obj_t
																																	BgL_csz00_4841;
																																BgL_csz00_4841 =
																																	BgL_arg1797z00_1951;
																																BgL_csz00_1935 =
																																	BgL_csz00_4841;
																																goto
																																	BgL_zc3z04anonymousza31781ze3z87_1937;
																															}
																														}
																													else
																														{	/* Rgc/rgcrules.scm 618 */
																															return
																																BGl_errorz00zz__errorz00
																																(BFALSE,
																																BGl_string2580z00zz__rgc_rulesz00,
																																BgL_errz00_64);
																														}
																												}
																										}
																								}
																							}
																						else
																							{	/* Rgc/rgcrules.scm 593 */
																							BgL_tagzd22532zd2_1853:
																								{	/* Rgc/rgcrules.scm 624 */
																									obj_t BgL_arg1805z00_1959;

																									{	/* Rgc/rgcrules.scm 624 */
																										obj_t BgL_arg1806z00_1960;
																										obj_t BgL_arg1807z00_1961;

																										{	/* Rgc/rgcrules.scm 624 */
																											obj_t BgL_arg1808z00_1962;

																											BgL_arg1808z00_1962 =
																												CAR(
																												((obj_t)
																													BgL_valuesz00_1838));
																											BgL_arg1806z00_1960 =
																												BGl_expandzd2rulezd2zz__rgc_rulesz00
																												(BgL_matchz00_61,
																												BgL_envz00_62,
																												BgL_arg1808z00_1962);
																										}
																										BgL_arg1807z00_1961 =
																											CDR(
																											((obj_t)
																												BgL_valuesz00_1838));
																										BgL_arg1805z00_1959 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1806z00_1960,
																											BgL_arg1807z00_1961);
																									}
																									{
																										obj_t BgL_valuesz00_4850;

																										BgL_valuesz00_4850 =
																											BgL_arg1805z00_1959;
																										BgL_valuesz00_1838 =
																											BgL_valuesz00_4850;
																										goto
																											BgL_zc3z04anonymousza31706ze3z87_1840;
																									}
																								}
																							}
																					}
																			}
																		else
																			{	/* Rgc/rgcrules.scm 593 */
																				if (
																					(CAR(BgL_valuez00_1843) ==
																						BGl_symbol2506z00zz__rgc_rulesz00))
																					{
																						obj_t BgL_orzd2charszd2_4854;

																						BgL_orzd2charszd2_4854 =
																							CDR(BgL_valuez00_1843);
																						BgL_orzd2charszd2_1851 =
																							BgL_orzd2charszd2_4854;
																						goto BgL_tagzd22531zd2_1852;
																					}
																				else
																					{	/* Rgc/rgcrules.scm 593 */
																						goto BgL_tagzd22532zd2_1853;
																					}
																			}
																	}
																else
																	{	/* Rgc/rgcrules.scm 593 */
																		obj_t BgL_carzd22581zd2_1875;

																		BgL_carzd22581zd2_1875 =
																			CAR(BgL_valuez00_1843);
																		if (STRINGP(BgL_carzd22581zd2_1875))
																			{	/* Rgc/rgcrules.scm 593 */
																				if (NULLP(CDR(BgL_valuez00_1843)))
																					{	/* Rgc/rgcrules.scm 608 */
																						obj_t BgL_arg1778z00_3341;
																						obj_t BgL_arg1779z00_3342;

																						BgL_arg1778z00_3341 =
																							CDR(((obj_t) BgL_valuesz00_1838));
																						BgL_arg1779z00_3342 =
																							BGl_appendzd221011zd2zz__rgc_rulesz00
																							(BGl_stringzd2rangeze70z35zz__rgc_rulesz00
																							(BgL_errz00_64,
																								BgL_carzd22581zd2_1875),
																							BgL_charsz00_1839);
																						{
																							obj_t BgL_charsz00_4867;
																							obj_t BgL_valuesz00_4866;

																							BgL_valuesz00_4866 =
																								BgL_arg1778z00_3341;
																							BgL_charsz00_4867 =
																								BgL_arg1779z00_3342;
																							BgL_charsz00_1839 =
																								BgL_charsz00_4867;
																							BgL_valuesz00_1838 =
																								BgL_valuesz00_4866;
																							goto
																								BgL_zc3z04anonymousza31706ze3z87_1840;
																						}
																					}
																				else
																					{	/* Rgc/rgcrules.scm 593 */
																						if (
																							(BgL_carzd22581zd2_1875 ==
																								BGl_symbol2506z00zz__rgc_rulesz00))
																							{
																								obj_t BgL_orzd2charszd2_4870;

																								BgL_orzd2charszd2_4870 =
																									CDR(BgL_valuez00_1843);
																								BgL_orzd2charszd2_1851 =
																									BgL_orzd2charszd2_4870;
																								goto BgL_tagzd22531zd2_1852;
																							}
																						else
																							{	/* Rgc/rgcrules.scm 593 */
																								goto BgL_tagzd22532zd2_1853;
																							}
																					}
																			}
																		else
																			{	/* Rgc/rgcrules.scm 593 */
																				if (
																					(BgL_carzd22581zd2_1875 ==
																						BGl_symbol2506z00zz__rgc_rulesz00))
																					{
																						obj_t BgL_orzd2charszd2_4874;

																						BgL_orzd2charszd2_4874 =
																							CDR(BgL_valuez00_1843);
																						BgL_orzd2charszd2_1851 =
																							BgL_orzd2charszd2_4874;
																						goto BgL_tagzd22531zd2_1852;
																					}
																				else
																					{	/* Rgc/rgcrules.scm 593 */
																						goto BgL_tagzd22532zd2_1853;
																					}
																			}
																	}
															}
														else
															{	/* Rgc/rgcrules.scm 593 */
																obj_t BgL_carzd22600zd2_1888;

																BgL_carzd22600zd2_1888 = CAR(BgL_valuez00_1843);
																if (STRINGP(BgL_carzd22600zd2_1888))
																	{	/* Rgc/rgcrules.scm 593 */
																		if (NULLP(CDR(BgL_valuez00_1843)))
																			{	/* Rgc/rgcrules.scm 608 */
																				obj_t BgL_arg1778z00_3353;
																				obj_t BgL_arg1779z00_3354;

																				BgL_arg1778z00_3353 =
																					CDR(((obj_t) BgL_valuesz00_1838));
																				BgL_arg1779z00_3354 =
																					BGl_appendzd221011zd2zz__rgc_rulesz00
																					(BGl_stringzd2rangeze70z35zz__rgc_rulesz00
																					(BgL_errz00_64,
																						BgL_carzd22600zd2_1888),
																					BgL_charsz00_1839);
																				{
																					obj_t BgL_charsz00_4887;
																					obj_t BgL_valuesz00_4886;

																					BgL_valuesz00_4886 =
																						BgL_arg1778z00_3353;
																					BgL_charsz00_4887 =
																						BgL_arg1779z00_3354;
																					BgL_charsz00_1839 = BgL_charsz00_4887;
																					BgL_valuesz00_1838 =
																						BgL_valuesz00_4886;
																					goto
																						BgL_zc3z04anonymousza31706ze3z87_1840;
																				}
																			}
																		else
																			{	/* Rgc/rgcrules.scm 593 */
																				if (
																					(BgL_carzd22600zd2_1888 ==
																						BGl_symbol2506z00zz__rgc_rulesz00))
																					{
																						obj_t BgL_orzd2charszd2_4890;

																						BgL_orzd2charszd2_4890 =
																							CDR(BgL_valuez00_1843);
																						BgL_orzd2charszd2_1851 =
																							BgL_orzd2charszd2_4890;
																						goto BgL_tagzd22531zd2_1852;
																					}
																				else
																					{	/* Rgc/rgcrules.scm 593 */
																						goto BgL_tagzd22532zd2_1853;
																					}
																			}
																	}
																else
																	{	/* Rgc/rgcrules.scm 593 */
																		if (
																			(BgL_carzd22600zd2_1888 ==
																				BGl_symbol2506z00zz__rgc_rulesz00))
																			{
																				obj_t BgL_orzd2charszd2_4894;

																				BgL_orzd2charszd2_4894 =
																					CDR(BgL_valuez00_1843);
																				BgL_orzd2charszd2_1851 =
																					BgL_orzd2charszd2_4894;
																				goto BgL_tagzd22531zd2_1852;
																			}
																		else
																			{	/* Rgc/rgcrules.scm 593 */
																				goto BgL_tagzd22532zd2_1853;
																			}
																	}
															}
													}
												else
													{	/* Rgc/rgcrules.scm 593 */
														goto BgL_tagzd22532zd2_1853;
													}
											}
									}
							}
						}
				}
		}

	}



/* string-range~0 */
	obj_t BGl_stringzd2rangeze70z35zz__rgc_rulesz00(obj_t BgL_errz00_3795,
		obj_t BgL_stringz00_1987)
	{
		{	/* Rgc/rgcrules.scm 585 */
			{	/* Rgc/rgcrules.scm 575 */
				long BgL_lenz00_1989;

				BgL_lenz00_1989 = STRING_LENGTH(BgL_stringz00_1987);
				{	/* Rgc/rgcrules.scm 576 */
					bool_t BgL_test2856z00_4897;

					{	/* Rgc/rgcrules.scm 576 */
						long BgL_arg1830z00_2005;

						{	/* Rgc/rgcrules.scm 576 */
							long BgL_res2376z00_3196;

							{	/* Rgc/rgcrules.scm 576 */
								long BgL_n1z00_3178;
								long BgL_n2z00_3179;

								BgL_n1z00_3178 = BgL_lenz00_1989;
								BgL_n2z00_3179 = ((long) 2);
								{	/* Rgc/rgcrules.scm 576 */
									bool_t BgL_test2857z00_4898;

									{	/* Rgc/rgcrules.scm 576 */
										long BgL_arg2075z00_3181;

										BgL_arg2075z00_3181 =
											(((BgL_n1z00_3178) | (BgL_n2z00_3179)) & -2147483648);
										BgL_test2857z00_4898 = (BgL_arg2075z00_3181 == ((long) 0));
									}
									if (BgL_test2857z00_4898)
										{	/* Rgc/rgcrules.scm 576 */
											int32_t BgL_arg2070z00_3182;

											{	/* Rgc/rgcrules.scm 576 */
												int32_t BgL_arg2071z00_3183;
												int32_t BgL_arg2072z00_3184;

												{	/* Rgc/rgcrules.scm 576 */
													int32_t BgL_res2372z00_3188;

													BgL_res2372z00_3188 = (int32_t) (BgL_n1z00_3178);
													BgL_arg2071z00_3183 = BgL_res2372z00_3188;
												}
												{	/* Rgc/rgcrules.scm 576 */
													int32_t BgL_res2373z00_3190;

													BgL_res2373z00_3190 = (int32_t) (BgL_n2z00_3179);
													BgL_arg2072z00_3184 = BgL_res2373z00_3190;
												}
												BgL_arg2070z00_3182 =
													(BgL_arg2071z00_3183 % BgL_arg2072z00_3184);
											}
											{	/* Rgc/rgcrules.scm 576 */
												long BgL_res2375z00_3195;

												{	/* Rgc/rgcrules.scm 576 */
													long BgL_arg2170z00_3192;

													BgL_arg2170z00_3192 = (long) (BgL_arg2070z00_3182);
													{	/* Rgc/rgcrules.scm 576 */
														long BgL_res2374z00_3194;

														BgL_res2374z00_3194 = (long) (BgL_arg2170z00_3192);
														BgL_res2375z00_3195 = BgL_res2374z00_3194;
												}}
												BgL_res2376z00_3196 = BgL_res2375z00_3195;
										}}
									else
										{	/* Rgc/rgcrules.scm 576 */
											BgL_res2376z00_3196 = (BgL_n1z00_3178 % BgL_n2z00_3179);
										}
								}
							}
							BgL_arg1830z00_2005 = BgL_res2376z00_3196;
						}
						BgL_test2856z00_4897 =
							BGl_2ze3ze3zz__r4_numbers_6_5z00(BINT(BgL_arg1830z00_2005),
							BINT(((long) 0)));
					}
					if (BgL_test2856z00_4897)
						{	/* Rgc/rgcrules.scm 576 */
							return
								BGl_errorz00zz__errorz00(BFALSE,
								BGl_string2618z00zz__rgc_rulesz00, BgL_errz00_3795);
						}
					else
						{
							long BgL_iz00_3211;
							obj_t BgL_resz00_3212;

							BgL_iz00_3211 = ((long) 0);
							BgL_resz00_3212 = BNIL;
						BgL_loopz00_3210:
							if ((BgL_iz00_3211 == BgL_lenz00_1989))
								{	/* Rgc/rgcrules.scm 580 */
									return BgL_resz00_3212;
								}
							else
								{	/* Rgc/rgcrules.scm 582 */
									long BgL_arg1824z00_3217;
									obj_t BgL_arg1825z00_3218;

									BgL_arg1824z00_3217 = (BgL_iz00_3211 + ((long) 2));
									{	/* Rgc/rgcrules.scm 583 */
										obj_t BgL_arg1826z00_3221;

										{	/* Rgc/rgcrules.scm 583 */
											unsigned char BgL_arg1827z00_3222;
											unsigned char BgL_arg1828z00_3223;

											BgL_arg1827z00_3222 =
												STRING_REF(BgL_stringz00_1987, BgL_iz00_3211);
											BgL_arg1828z00_3223 =
												STRING_REF(BgL_stringz00_1987,
												(BgL_iz00_3211 + ((long) 1)));
											BgL_arg1826z00_3221 =
												BGl_charzd2rangeze70z35zz__rgc_rulesz00(BgL_errz00_3795,
												BCHAR(BgL_arg1827z00_3222), BCHAR(BgL_arg1828z00_3223));
										}
										BgL_arg1825z00_3218 =
											BGl_appendzd221011zd2zz__rgc_rulesz00(BgL_arg1826z00_3221,
											BgL_resz00_3212);
									}
									{
										obj_t BgL_resz00_4922;
										long BgL_iz00_4921;

										BgL_iz00_4921 = BgL_arg1824z00_3217;
										BgL_resz00_4922 = BgL_arg1825z00_3218;
										BgL_resz00_3212 = BgL_resz00_4922;
										BgL_iz00_3211 = BgL_iz00_4921;
										goto BgL_loopz00_3210;
									}
								}
						}
				}
			}
		}

	}



/* rgc-char?~0 */
	bool_t BGl_rgczd2charzf3ze70zc6zz__rgc_rulesz00(obj_t BgL_xz00_1964)
	{
		{	/* Rgc/rgcrules.scm 561 */
			{	/* Rgc/rgcrules.scm 558 */
				bool_t BgL__ortest_1046z00_1966;

				BgL__ortest_1046z00_1966 = CHARP(BgL_xz00_1964);
				if (BgL__ortest_1046z00_1966)
					{	/* Rgc/rgcrules.scm 558 */
						return BgL__ortest_1046z00_1966;
					}
				else
					{	/* Rgc/rgcrules.scm 558 */
						if (INTEGERP(BgL_xz00_1964))
							{	/* Rgc/rgcrules.scm 559 */
								if (((long) CINT(BgL_xz00_1964) >= ((long) 0)))
									{	/* Rgc/rgcrules.scm 561 */
										obj_t BgL_arg1810z00_1969;

										BgL_arg1810z00_1969 =
											BGl_rgczd2maxzd2charz00zz__rgc_configz00();
										return
											(
											(long) CINT(BgL_xz00_1964) <
											(long) CINT(BgL_arg1810z00_1969));
									}
								else
									{	/* Rgc/rgcrules.scm 560 */
										return ((bool_t) 0);
									}
							}
						else
							{	/* Rgc/rgcrules.scm 559 */
								return ((bool_t) 0);
							}
					}
			}
		}

	}



/* char-range~0 */
	obj_t BGl_charzd2rangeze70z35zz__rgc_rulesz00(obj_t BgL_errz00_3796,
		obj_t BgL_minz00_1970, obj_t BgL_maxz00_1971)
	{
		{	/* Rgc/rgcrules.scm 573 */
			{	/* Rgc/rgcrules.scm 563 */
				obj_t BgL_minz00_1973;
				obj_t BgL_maxz00_1974;

				if (CHARP(BgL_minz00_1970))
					{	/* Rgc/rgcrules.scm 563 */
						BgL_minz00_1973 = BINT((CCHAR(BgL_minz00_1970)));
					}
				else
					{	/* Rgc/rgcrules.scm 563 */
						BgL_minz00_1973 = BgL_minz00_1970;
					}
				if (CHARP(BgL_maxz00_1971))
					{	/* Rgc/rgcrules.scm 564 */
						BgL_maxz00_1974 = BINT((CCHAR(BgL_maxz00_1971)));
					}
				else
					{	/* Rgc/rgcrules.scm 564 */
						BgL_maxz00_1974 = BgL_maxz00_1971;
					}
				if (((long) CINT(BgL_maxz00_1974) >= (long) CINT(BgL_minz00_1973)))
					{
						obj_t BgL_maxz00_3163;
						obj_t BgL_resz00_3164;

						BgL_maxz00_3163 = BgL_maxz00_1974;
						BgL_resz00_3164 = BNIL;
					BgL_loopz00_3162:
						if (((long) CINT(BgL_maxz00_3163) == (long) CINT(BgL_minz00_1973)))
							{	/* Rgc/rgcrules.scm 569 */
								return MAKE_YOUNG_PAIR(BgL_minz00_1973, BgL_resz00_3164);
							}
						else
							{	/* Rgc/rgcrules.scm 571 */
								long BgL_arg1815z00_3169;
								obj_t BgL_arg1816z00_3170;

								BgL_arg1815z00_3169 =
									((long) CINT(BgL_maxz00_3163) - ((long) 1));
								BgL_arg1816z00_3170 =
									MAKE_YOUNG_PAIR(BgL_maxz00_3163, BgL_resz00_3164);
								{
									obj_t BgL_resz00_4958;
									obj_t BgL_maxz00_4956;

									BgL_maxz00_4956 = BINT(BgL_arg1815z00_3169);
									BgL_resz00_4958 = BgL_arg1816z00_3170;
									BgL_resz00_3164 = BgL_resz00_4958;
									BgL_maxz00_3163 = BgL_maxz00_4956;
									goto BgL_loopz00_3162;
								}
							}
					}
				else
					{	/* Rgc/rgcrules.scm 566 */
						return
							BGl_errorz00zz__errorz00(BFALSE,
							BGl_string2619z00zz__rgc_rulesz00, BgL_errz00_3796);
					}
			}
		}

	}



/* expand-out */
	obj_t BGl_expandzd2outzd2zz__rgc_rulesz00(long BgL_matchz00_65,
		obj_t BgL_envz00_66, obj_t BgL_valuesz00_67, obj_t BgL_errz00_68)
	{
		{	/* Rgc/rgcrules.scm 635 */
			{	/* Rgc/rgcrules.scm 636 */
				obj_t BgL_inz00_3361;

				BgL_inz00_3361 =
					BGl_expandzd2inzd2zz__rgc_rulesz00(BgL_matchz00_65, BgL_envz00_66,
					BgL_valuesz00_67, BgL_errz00_68);
				{	/* Rgc/rgcrules.scm 636 */
					obj_t BgL_bcz00_3362;

					{	/* Rgc/rgcrules.scm 637 */
						obj_t BgL_arg1833z00_3363;
						obj_t BgL_arg1835z00_3364;

						BgL_arg1833z00_3363 = CDR(((obj_t) BgL_inz00_3361));
						BgL_arg1835z00_3364 = BGl_rgczd2maxzd2charz00zz__rgc_configz00();
						BgL_bcz00_3362 =
							BGl_listzd2ze3rgcsetz31zz__rgc_setz00(BgL_arg1833z00_3363,
							(long) CINT(BgL_arg1835z00_3364));
					}
					{	/* Rgc/rgcrules.scm 637 */

						BGl_rgcsetzd2notz12zc0zz__rgc_setz00(BgL_bcz00_3362);
						{	/* Rgc/rgcrules.scm 639 */
							obj_t BgL_arg1831z00_3365;

							BgL_arg1831z00_3365 =
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BGl_rgcsetzd2ze3listz31zz__rgc_setz00(BgL_bcz00_3362), BNIL);
							return MAKE_YOUNG_PAIR(BGl_symbol2506z00zz__rgc_rulesz00,
								BgL_arg1831z00_3365);
						}
					}
				}
			}
		}

	}



/* expand-and */
	obj_t BGl_expandzd2andzd2zz__rgc_rulesz00(long BgL_matchz00_69,
		obj_t BgL_envz00_70, obj_t BgL_val1z00_71, obj_t BgL_val2z00_72,
		obj_t BgL_errz00_73)
	{
		{	/* Rgc/rgcrules.scm 646 */
			{	/* Rgc/rgcrules.scm 647 */
				obj_t BgL_in1z00_3368;

				{	/* Rgc/rgcrules.scm 647 */
					obj_t BgL_arg1848z00_3369;

					{	/* Rgc/rgcrules.scm 647 */
						obj_t BgL_list1849z00_3370;

						BgL_list1849z00_3370 = MAKE_YOUNG_PAIR(BgL_val1z00_71, BNIL);
						BgL_arg1848z00_3369 = BgL_list1849z00_3370;
					}
					BgL_in1z00_3368 =
						BGl_expandzd2inzd2zz__rgc_rulesz00(BgL_matchz00_69, BgL_envz00_70,
						BgL_arg1848z00_3369, BgL_errz00_73);
				}
				{	/* Rgc/rgcrules.scm 647 */
					obj_t BgL_in2z00_3371;

					{	/* Rgc/rgcrules.scm 648 */
						obj_t BgL_arg1846z00_3372;

						{	/* Rgc/rgcrules.scm 648 */
							obj_t BgL_list1847z00_3373;

							BgL_list1847z00_3373 = MAKE_YOUNG_PAIR(BgL_val2z00_72, BNIL);
							BgL_arg1846z00_3372 = BgL_list1847z00_3373;
						}
						BgL_in2z00_3371 =
							BGl_expandzd2inzd2zz__rgc_rulesz00(BgL_matchz00_69, BgL_envz00_70,
							BgL_arg1846z00_3372, BgL_errz00_73);
					}
					{	/* Rgc/rgcrules.scm 648 */
						obj_t BgL_bc1z00_3374;

						{	/* Rgc/rgcrules.scm 649 */
							obj_t BgL_arg1842z00_3375;
							obj_t BgL_arg1845z00_3376;

							BgL_arg1842z00_3375 = CDR(((obj_t) BgL_in1z00_3368));
							BgL_arg1845z00_3376 = BGl_rgczd2maxzd2charz00zz__rgc_configz00();
							BgL_bc1z00_3374 =
								BGl_listzd2ze3rgcsetz31zz__rgc_setz00(BgL_arg1842z00_3375,
								(long) CINT(BgL_arg1845z00_3376));
						}
						{	/* Rgc/rgcrules.scm 649 */
							obj_t BgL_bc2z00_3377;

							{	/* Rgc/rgcrules.scm 650 */
								obj_t BgL_arg1840z00_3378;
								obj_t BgL_arg1841z00_3379;

								BgL_arg1840z00_3378 = CDR(((obj_t) BgL_in2z00_3371));
								BgL_arg1841z00_3379 =
									BGl_rgczd2maxzd2charz00zz__rgc_configz00();
								BgL_bc2z00_3377 =
									BGl_listzd2ze3rgcsetz31zz__rgc_setz00(BgL_arg1840z00_3378,
									(long) CINT(BgL_arg1841z00_3379));
							}
							{	/* Rgc/rgcrules.scm 650 */

								BGl_rgcsetzd2andz12zc0zz__rgc_setz00(BgL_bc1z00_3374,
									BgL_bc2z00_3377);
								{	/* Rgc/rgcrules.scm 652 */
									obj_t BgL_arg1836z00_3380;

									BgL_arg1836z00_3380 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BGl_rgcsetzd2ze3listz31zz__rgc_setz00(BgL_bc1z00_3374),
										BNIL);
									return MAKE_YOUNG_PAIR(BGl_symbol2506z00zz__rgc_rulesz00,
										BgL_arg1836z00_3380);
								}
							}
						}
					}
				}
			}
		}

	}



/* expand-but */
	obj_t BGl_expandzd2butzd2zz__rgc_rulesz00(long BgL_matchz00_74,
		obj_t BgL_envz00_75, obj_t BgL_val1z00_76, obj_t BgL_val2z00_77,
		obj_t BgL_errz00_78)
	{
		{	/* Rgc/rgcrules.scm 659 */
			{	/* Rgc/rgcrules.scm 660 */
				obj_t BgL_in1z00_3386;

				{	/* Rgc/rgcrules.scm 660 */
					obj_t BgL_arg1859z00_3387;

					{	/* Rgc/rgcrules.scm 660 */
						obj_t BgL_list1860z00_3388;

						BgL_list1860z00_3388 = MAKE_YOUNG_PAIR(BgL_val1z00_76, BNIL);
						BgL_arg1859z00_3387 = BgL_list1860z00_3388;
					}
					BgL_in1z00_3386 =
						BGl_expandzd2inzd2zz__rgc_rulesz00(BgL_matchz00_74, BgL_envz00_75,
						BgL_arg1859z00_3387, BgL_errz00_78);
				}
				{	/* Rgc/rgcrules.scm 660 */
					obj_t BgL_in2z00_3389;

					{	/* Rgc/rgcrules.scm 661 */
						obj_t BgL_arg1857z00_3390;

						{	/* Rgc/rgcrules.scm 661 */
							obj_t BgL_list1858z00_3391;

							BgL_list1858z00_3391 = MAKE_YOUNG_PAIR(BgL_val2z00_77, BNIL);
							BgL_arg1857z00_3390 = BgL_list1858z00_3391;
						}
						BgL_in2z00_3389 =
							BGl_expandzd2inzd2zz__rgc_rulesz00(BgL_matchz00_74, BgL_envz00_75,
							BgL_arg1857z00_3390, BgL_errz00_78);
					}
					{	/* Rgc/rgcrules.scm 661 */
						obj_t BgL_bc1z00_3392;

						{	/* Rgc/rgcrules.scm 662 */
							obj_t BgL_arg1855z00_3393;
							obj_t BgL_arg1856z00_3394;

							BgL_arg1855z00_3393 = CDR(((obj_t) BgL_in1z00_3386));
							BgL_arg1856z00_3394 = BGl_rgczd2maxzd2charz00zz__rgc_configz00();
							BgL_bc1z00_3392 =
								BGl_listzd2ze3rgcsetz31zz__rgc_setz00(BgL_arg1855z00_3393,
								(long) CINT(BgL_arg1856z00_3394));
						}
						{	/* Rgc/rgcrules.scm 662 */
							obj_t BgL_bc2z00_3395;

							{	/* Rgc/rgcrules.scm 663 */
								obj_t BgL_arg1852z00_3396;
								obj_t BgL_arg1853z00_3397;

								BgL_arg1852z00_3396 = CDR(((obj_t) BgL_in2z00_3389));
								BgL_arg1853z00_3397 =
									BGl_rgczd2maxzd2charz00zz__rgc_configz00();
								BgL_bc2z00_3395 =
									BGl_listzd2ze3rgcsetz31zz__rgc_setz00(BgL_arg1852z00_3396,
									(long) CINT(BgL_arg1853z00_3397));
							}
							{	/* Rgc/rgcrules.scm 663 */

								BGl_rgcsetzd2butz12zc0zz__rgc_setz00(BgL_bc1z00_3392,
									BgL_bc2z00_3395);
								{	/* Rgc/rgcrules.scm 665 */
									obj_t BgL_arg1850z00_3398;

									BgL_arg1850z00_3398 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BGl_rgcsetzd2ze3listz31zz__rgc_setz00(BgL_bc1z00_3392),
										BNIL);
									return MAKE_YOUNG_PAIR(BGl_symbol2506z00zz__rgc_rulesz00,
										BgL_arg1850z00_3398);
								}
							}
						}
					}
				}
			}
		}

	}



/* expand-submatch */
	obj_t BGl_expandzd2submatchzd2zz__rgc_rulesz00(long BgL_matchz00_79,
		obj_t BgL_envz00_80, obj_t BgL_rulez00_81, obj_t BgL_errz00_82)
	{
		{	/* Rgc/rgcrules.scm 675 */
			if (BGl_za2lockzd2submatchza2zd2zz__rgc_rulesz00)
				{	/* Rgc/rgcrules.scm 676 */
					return
						BGl_errorz00zz__errorz00(BFALSE, BGl_string2620z00zz__rgc_rulesz00,
						BgL_errz00_82);
				}
			else
				{	/* Rgc/rgcrules.scm 678 */
					long BgL_submatchz00_3404;

					BgL_submatchz00_3404 = BGl_getzd2newzd2submatchz00zz__rgc_rulesz00();
					BGl_za2lockzd2submatchza2zd2zz__rgc_rulesz00 = ((bool_t) 1);
					{	/* Rgc/rgcrules.scm 680 */
						obj_t BgL_resz00_3405;

						{	/* Rgc/rgcrules.scm 682 */
							obj_t BgL_arg1861z00_3406;

							{	/* Rgc/rgcrules.scm 682 */
								obj_t BgL_arg1862z00_3407;

								{	/* Rgc/rgcrules.scm 682 */
									obj_t BgL_arg1863z00_3408;

									BgL_arg1863z00_3408 =
										MAKE_YOUNG_PAIR(BGl_expandzd2rulezd2zz__rgc_rulesz00
										(BgL_matchz00_79, BgL_envz00_80, BgL_rulez00_81), BNIL);
									BgL_arg1862z00_3407 =
										MAKE_YOUNG_PAIR(BINT(BgL_submatchz00_3404),
										BgL_arg1863z00_3408);
								}
								BgL_arg1861z00_3406 =
									MAKE_YOUNG_PAIR(BINT(BgL_matchz00_79), BgL_arg1862z00_3407);
							}
							BgL_resz00_3405 =
								MAKE_YOUNG_PAIR(BGl_symbol2603z00zz__rgc_rulesz00,
								BgL_arg1861z00_3406);
						}
						BGl_za2lockzd2submatchza2zd2zz__rgc_rulesz00 = ((bool_t) 0);
						return BgL_resz00_3405;
					}
				}
		}

	}



/* expand-sequence */
	obj_t BGl_expandzd2sequencezd2zz__rgc_rulesz00(long BgL_matchz00_87,
		obj_t BgL_envz00_88, obj_t BgL_rulesz00_89)
	{
		{	/* Rgc/rgcrules.scm 698 */
			{	/* Rgc/rgcrules.scm 699 */
				obj_t BgL_arg1870z00_2051;

				{	/* Rgc/rgcrules.scm 699 */
					obj_t BgL_head1134z00_2054;

					{	/* Rgc/rgcrules.scm 699 */
						obj_t BgL_res2415z00_3411;

						BgL_res2415z00_3411 = MAKE_YOUNG_PAIR(BNIL, BNIL);
						BgL_head1134z00_2054 = BgL_res2415z00_3411;
					}
					{
						obj_t BgL_l1132z00_3435;
						obj_t BgL_tail1135z00_3436;

						BgL_l1132z00_3435 = BgL_rulesz00_89;
						BgL_tail1135z00_3436 = BgL_head1134z00_2054;
					BgL_zc3z04anonymousza31872ze3z87_3434:
						if (NULLP(BgL_l1132z00_3435))
							{	/* Rgc/rgcrules.scm 699 */
								BgL_arg1870z00_2051 = CDR(BgL_head1134z00_2054);
							}
						else
							{	/* Rgc/rgcrules.scm 699 */
								obj_t BgL_newtail1136z00_3443;

								{	/* Rgc/rgcrules.scm 699 */
									obj_t BgL_arg1876z00_3444;

									{	/* Rgc/rgcrules.scm 699 */
										obj_t BgL_rz00_3445;

										BgL_rz00_3445 = CAR(((obj_t) BgL_l1132z00_3435));
										BgL_arg1876z00_3444 =
											BGl_expandzd2rulezd2zz__rgc_rulesz00(BgL_matchz00_87,
											BgL_envz00_88, BgL_rz00_3445);
									}
									{	/* Rgc/rgcrules.scm 699 */
										obj_t BgL_res2421z00_3450;

										BgL_res2421z00_3450 =
											MAKE_YOUNG_PAIR(BgL_arg1876z00_3444, BNIL);
										BgL_newtail1136z00_3443 = BgL_res2421z00_3450;
									}
								}
								SET_CDR(BgL_tail1135z00_3436, BgL_newtail1136z00_3443);
								{	/* Rgc/rgcrules.scm 699 */
									obj_t BgL_arg1874z00_3446;

									BgL_arg1874z00_3446 = CDR(((obj_t) BgL_l1132z00_3435));
									{
										obj_t BgL_tail1135z00_5028;
										obj_t BgL_l1132z00_5027;

										BgL_l1132z00_5027 = BgL_arg1874z00_3446;
										BgL_tail1135z00_5028 = BgL_newtail1136z00_3443;
										BgL_tail1135z00_3436 = BgL_tail1135z00_5028;
										BgL_l1132z00_3435 = BgL_l1132z00_5027;
										goto BgL_zc3z04anonymousza31872ze3z87_3434;
									}
								}
							}
					}
				}
				return BGl_makezd2sequencezd2zz__rgc_rulesz00(BgL_arg1870z00_2051);
			}
		}

	}



/* make-sequence */
	obj_t BGl_makezd2sequencezd2zz__rgc_rulesz00(obj_t BgL_rulesz00_90)
	{
		{	/* Rgc/rgcrules.scm 713 */
			{
				obj_t BgL_rulesz00_2067;
				obj_t BgL_resz00_2068;

				BgL_rulesz00_2067 = BgL_rulesz00_90;
				BgL_resz00_2068 = BNIL;
			BgL_zc3z04anonymousza31877ze3z87_2069:
				{

					if (NULLP(BgL_rulesz00_2067))
						{	/* Rgc/rgcrules.scm 714 */
							{	/* Rgc/rgcrules.scm 718 */
								obj_t BgL_arg1886z00_2085;

								BgL_arg1886z00_2085 =
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(bgl_reverse_bang(BgL_resz00_2068), BNIL);
								return MAKE_YOUNG_PAIR(BGl_symbol2615z00zz__rgc_rulesz00,
									BgL_arg1886z00_2085);
							}
						}
					else
						{	/* Rgc/rgcrules.scm 714 */
							if (PAIRP(BgL_rulesz00_2067))
								{	/* Rgc/rgcrules.scm 714 */
									obj_t BgL_carzd22629zd2_2078;

									BgL_carzd22629zd2_2078 = CAR(BgL_rulesz00_2067);
									if (PAIRP(BgL_carzd22629zd2_2078))
										{	/* Rgc/rgcrules.scm 714 */
											if (
												(CAR(BgL_carzd22629zd2_2078) ==
													BGl_symbol2615z00zz__rgc_rulesz00))
												{	/* Rgc/rgcrules.scm 714 */
													obj_t BgL_arg1883z00_2082;
													obj_t BgL_arg1884z00_2083;

													BgL_arg1883z00_2082 = CDR(BgL_carzd22629zd2_2078);
													BgL_arg1884z00_2083 = CDR(BgL_rulesz00_2067);
													{
														obj_t BgL_resz00_5046;
														obj_t BgL_rulesz00_5045;

														BgL_rulesz00_5045 = BgL_arg1884z00_2083;
														BgL_resz00_5046 =
															BGl_appendzd221011zd2zz__rgc_rulesz00(bgl_reverse
															(BgL_arg1883z00_2082), BgL_resz00_2068);
														BgL_resz00_2068 = BgL_resz00_5046;
														BgL_rulesz00_2067 = BgL_rulesz00_5045;
														goto BgL_zc3z04anonymousza31877ze3z87_2069;
													}
												}
											else
												{	/* Rgc/rgcrules.scm 714 */
												BgL_tagzd22621zd2_2074:
													{	/* Rgc/rgcrules.scm 722 */
														obj_t BgL_arg1891z00_2089;
														obj_t BgL_arg1892z00_2090;

														BgL_arg1891z00_2089 =
															CDR(((obj_t) BgL_rulesz00_2067));
														{	/* Rgc/rgcrules.scm 722 */
															obj_t BgL_arg1893z00_2091;

															BgL_arg1893z00_2091 =
																CAR(((obj_t) BgL_rulesz00_2067));
															BgL_arg1892z00_2090 =
																MAKE_YOUNG_PAIR(BgL_arg1893z00_2091,
																BgL_resz00_2068);
														}
														{
															obj_t BgL_resz00_5055;
															obj_t BgL_rulesz00_5054;

															BgL_rulesz00_5054 = BgL_arg1891z00_2089;
															BgL_resz00_5055 = BgL_arg1892z00_2090;
															BgL_resz00_2068 = BgL_resz00_5055;
															BgL_rulesz00_2067 = BgL_rulesz00_5054;
															goto BgL_zc3z04anonymousza31877ze3z87_2069;
														}
													}
												}
										}
									else
										{	/* Rgc/rgcrules.scm 714 */
											goto BgL_tagzd22621zd2_2074;
										}
								}
							else
								{	/* Rgc/rgcrules.scm 714 */
									goto BgL_tagzd22621zd2_2074;
								}
						}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__rgc_rulesz00()
	{
		{	/* Rgc/rgcrules.scm 24 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__rgc_rulesz00()
	{
		{	/* Rgc/rgcrules.scm 24 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__rgc_rulesz00()
	{
		{	/* Rgc/rgcrules.scm 24 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__rgc_rulesz00()
	{
		{	/* Rgc/rgcrules.scm 24 */
			BGl_modulezd2initializa7ationz75zz__rgc_configz00(((long) 428274706),
				BSTRING_TO_STRING(BGl_string2621z00zz__rgc_rulesz00));
			BGl_modulezd2initializa7ationz75zz__rgc_setz00(((long) 225075481),
				BSTRING_TO_STRING(BGl_string2621z00zz__rgc_rulesz00));
			BGl_modulezd2initializa7ationz75zz__rgc_posixz00(((long) 447103608),
				BSTRING_TO_STRING(BGl_string2621z00zz__rgc_rulesz00));
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2621z00zz__rgc_rulesz00));
		}

	}

#ifdef __cplusplus
}
#endif
