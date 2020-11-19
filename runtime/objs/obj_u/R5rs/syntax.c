/*===========================================================================*/
/*   (R5rs/syntax.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c R5rs/syntax.scm -indent -o objs/obj_u/R5rs/syntax.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_syntaxzd2expanderzd2zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
	static obj_t BGl_z62syntaxzd2expanderzb0zz__r5_macro_4_3_syntaxz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2561z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2806z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2726z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2645z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2564z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2566z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2letreczd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
	static obj_t BGl_symbol2649z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static bool_t BGl_ellipsiszf3zf3zz__r5_macro_4_3_syntaxz00(obj_t);
	static obj_t BGl_symbol2572z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_syntaxzd2getzd2framesz00zz__r5_macro_4_3_syntaxz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2735z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2654z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2574z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2579z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00 =
		BUNSPEC;
	static obj_t BGl_symbol2740z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_hygienezd2markzd2zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2742z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2663z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2665z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2584z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2748z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2667z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2586z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static bool_t BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
	static obj_t BGl_symbol2669z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2589z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t
		BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00(obj_t, obj_t,
		obj_t, obj_t);
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2750z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2673z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2593z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2757z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
	static obj_t BGl_symbol2596z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2759z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2678z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2761z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2682z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2764z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2766z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2686z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_initzd2syntaxzd2expandersz12z12zz__r5_macro_4_3_syntaxz00();
	static obj_t BGl_toplevelzd2initzd2zz__r5_macro_4_3_syntaxz00();
	static obj_t
		BGl_z62zc3z04anonymousza31301ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_unhygieniza7eza7zz__r5_macro_4_3_syntaxz00(obj_t);
	static obj_t
		BGl_z62syntaxzd2ruleszd2ze3expanderz81zz__r5_macro_4_3_syntaxz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2771z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2696z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2698z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t bgl_reverse(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__r5_macro_4_3_syntaxz00();
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_symbol2788z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_objectzd2initzd2zz__r5_macro_4_3_syntaxz00();
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_appendzd221011zd2zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__r5_macro_4_3_syntaxz00();
	static obj_t BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_hygienezd2valuezd2zz__r5_macro_4_3_syntaxz00(obj_t);
	extern obj_t string_append(obj_t, obj_t);
	static obj_t BGl_list2600z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_list2605z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2606z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2607z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2608z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2609z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_flattenz00zz__r5_macro_4_3_syntaxz00(obj_t);
	static obj_t BGl_list2610z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2611z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	extern bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_list2612z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2613z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2614z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2615z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2616z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2617z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2618z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2619z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2700z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2620z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2621z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2705z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2624z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2706z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2625z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2707z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2626z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2708z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2627z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2709z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2628z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t
		BGl_z62zc3z04anonymousza31346ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_list2710z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2711z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2712z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2713z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2633z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2634z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2635z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2638z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2letzd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
	static obj_t BGl_list2639z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t
		BGl_z62zc3z04anonymousza31282ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_installzd2expanderzd2zz__macroz00(obj_t, obj_t);
	static obj_t BGl_list2720z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2640z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_list2722z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2641z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2723z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2642z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2724z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2643z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2725z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2644z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2563z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2728z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2647z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2729z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2648z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2568z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2569z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_genvarsz00zz__r5_macro_4_3_syntaxz00(obj_t);
	static long BGl_hygienezd2prefixzd2lenz00zz__r5_macro_4_3_syntaxz00;
	static obj_t BGl_list2730z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2731z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2732z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2651z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2570z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2733z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2652z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2571z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2734z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2653z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2737z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2656z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2738z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2657z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2739z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2658z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2659z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2578z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t
		BGl_z62zc3z04anonymousza31292ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2660z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2661z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2662z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2581z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2744z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2582z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2745z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2583z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2746z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2747z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2588z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__r5_macro_4_3_syntaxz00();
	extern long bgl_list_length(obj_t);
	static obj_t
		BGl_z62installzd2syntaxzd2expanderz62zz__r5_macro_4_3_syntaxz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_list2752z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2671z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2753z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2672z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2591z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2754z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2592z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2755z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2756z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2675z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2676z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2595z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2677z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2598z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_gczd2rootszd2initz00zz__r5_macro_4_3_syntaxz00();
	static obj_t BGl_list2599z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_importedzd2moduleszd2initz00zz__r5_macro_4_3_syntaxz00();
	static obj_t
		BGl_z62expandzd2definezd2syntaxz62zz__r5_macro_4_3_syntaxz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_list2680z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2681z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2763z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2684z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2685z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2768z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2769z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2688z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2689z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	extern bool_t bigloo_strcmp_at(obj_t, obj_t, long);
	static obj_t BGl_list2770z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2690z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2691z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2773z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2692z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2774z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2693z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2775z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2694z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2776z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2695z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2777z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2778z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2779z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2definezd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
	static obj_t BGl_gennameze70ze7zz__r5_macro_4_3_syntaxz00(obj_t);
	static obj_t BGl_syntaxzd2expanderszd2mutexz00zz__r5_macro_4_3_syntaxz00 =
		BUNSPEC;
	static obj_t BGl_list2780z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2781z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2782z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2783z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2784z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2785z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t
		BGl_z62zc3z04anonymousza31386ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t, obj_t,
		obj_t);
	extern obj_t c_substring(obj_t, long, long);
	BGL_EXPORTED_DECL obj_t
		BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31379ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_keyword2804z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2601z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2603z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
	static obj_t BGl_loopze71ze7zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
	static obj_t BGl_loopze72ze7zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
	static obj_t BGl_getzd2ellipsiszd2framesz00zz__r5_macro_4_3_syntaxz00(obj_t,
		obj_t);
	static obj_t BGl_loopze73ze7zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
	extern obj_t bstring_to_keyword(obj_t);
	static obj_t BGl_subze70ze7zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
	static obj_t BGl_symbol2701z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2622z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2629z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t
		BGl_z62expandzd2letreczd2syntaxz62zz__r5_macro_4_3_syntaxz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2letzd2syntaxz62zz__r5_macro_4_3_syntaxz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2631z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2550z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2714z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2552z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2716z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2636z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2718z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2559z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_installzd2syntaxzd2expanderzd2envzd2zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_za762installza7d2syn2809z00,
		BGl_z62installzd2syntaxzd2expanderz62zz__r5_macro_4_3_syntaxz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2definezd2syntaxzd2envzd2zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_za762expandza7d2defi2810z00,
		BGl_z62expandzd2definezd2syntaxz62zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string2602z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2602za700za7za7_2811za7, "clause1", 7);
	      DEFINE_STRING(BGl_string2604z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2604za700za7za7_2812za7, "clause2", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2letzd2syntaxzd2envzd2zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_za762expandza7d2letza72813za7,
		BGl_z62expandzd2letzd2syntaxz62zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2702z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2702za700za7za7_2814za7, "name2", 5);
	      DEFINE_STRING(BGl_string2704z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2704za700za7za7_2815za7, "val2", 4);
	      DEFINE_STRING(BGl_string2623z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2623za700za7za7_2816za7, "case", 4);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_syntaxzd2expanderzd2envz00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_za762syntaxza7d2expa2817z00,
		BGl_z62syntaxzd2expanderzb0zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2630z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2630za700za7za7_2818za7, "key", 3);
	      DEFINE_STRING(BGl_string2632z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2632za700za7za7_2819za7, "clauses", 7);
	      DEFINE_STRING(BGl_string2551z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2551za700za7za7_2820za7, "hygiene.r5rs.mark", 17);
	      DEFINE_STRING(BGl_string2715z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2715za700za7za7_2821za7, "var1", 4);
	      DEFINE_STRING(BGl_string2553z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2553za700za7za7_2822za7, "mutex", 5);
	      DEFINE_STRING(BGl_string2554z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2554za700za7za7_2823za7, "/tmp/4.4a/runtime/R5rs/syntax.scm",
		33);
	      DEFINE_STRING(BGl_string2717z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2717za700za7za7_2824za7, "init1", 5);
	      DEFINE_STRING(BGl_string2555z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2555za700za7za7_2825za7, "&install-syntax-expander", 24);
	      DEFINE_STRING(BGl_string2637z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2637za700za7za7_2826za7, "atom-key", 8);
	      DEFINE_STRING(BGl_string2556z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2556za700za7za7_2827za7, "symbol", 6);
	      DEFINE_STRING(BGl_string2719z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2719za700za7za7_2828za7, "body", 4);
	      DEFINE_STRING(BGl_string2557z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2557za700za7za7_2829za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2800z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2800za700za7za7_2830za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string2801z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2801za700za7za7_2831za7, "No matching clause", 18);
	      DEFINE_STRING(BGl_string2802z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2802za700za7za7_2832za7, "Illegal clause", 14);
	      DEFINE_STRING(BGl_string2721z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2721za700za7za7_2833za7, "generate temp names", 19);
	      DEFINE_STRING(BGl_string2803z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2803za700za7za7_2834za7, "Illegal ellipsis", 16);
	      DEFINE_STRING(BGl_string2560z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2560za700za7za7_2835za7, "quote", 5);
	      DEFINE_STRING(BGl_string2805z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2805za700za7za7_2836za7, "ellipsis", 8);
	      DEFINE_STRING(BGl_string2562z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2562za700za7za7_2837za7, "cond", 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2558z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_za762za7c3za704anonymo2838za7,
		BGl_z62zc3z04anonymousza31282ze3ze5zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string2807z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2807za700za7za7_2839za7, "bind-exit", 9);
	      DEFINE_STRING(BGl_string2808z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2808za700za7za7_2840za7, "__r5_macro_4_3_syntax", 21);
	      DEFINE_STRING(BGl_string2727z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2727za700za7za7_2841za7, "temp1", 5);
	      DEFINE_STRING(BGl_string2646z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2646za700za7za7_2842za7, "atoms", 5);
	      DEFINE_STRING(BGl_string2565z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2565za700za7za7_2843za7, "else", 4);
	      DEFINE_STRING(BGl_string2567z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2567za700za7za7_2844za7, "=>", 2);
	      DEFINE_STRING(BGl_string2650z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2650za700za7za7_2845za7, "memv", 4);
	      DEFINE_STRING(BGl_string2573z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2573za700za7za7_2846za7, "result1", 7);
	      DEFINE_STRING(BGl_string2736z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2736za700za7za7_2847za7, "set!", 4);
	      DEFINE_STRING(BGl_string2655z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2655za700za7za7_2848za7, "clause", 6);
	      DEFINE_STRING(BGl_string2575z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2575za700za7za7_2849za7, "result2", 7);
	      DEFINE_STRING(BGl_string2577z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2577za700za7za7_2850za7, "...", 3);
	      DEFINE_STRING(BGl_string2741z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2741za700za7za7_2851za7, "x", 1);
	      DEFINE_STRING(BGl_string2580z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2580za700za7za7_2852za7, "begin", 5);
	      DEFINE_STRING(BGl_string2743z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2743za700za7za7_2853za7, "y", 1);
	      DEFINE_STRING(BGl_string2664z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2664za700za7za7_2854za7, "name", 4);
	      DEFINE_STRING(BGl_string2666z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2666za700za7za7_2855za7, "val", 3);
	      DEFINE_STRING(BGl_string2585z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2585za700za7za7_2856za7, "test", 4);
	      DEFINE_STRING(BGl_string2749z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2749za700za7za7_2857za7, "newtemp", 7);
	      DEFINE_STRING(BGl_string2668z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2668za700za7za7_2858za7, "body1", 5);
	      DEFINE_STRING(BGl_string2587z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2587za700za7za7_2859za7, "result", 6);
	      DEFINE_STRING(BGl_string2751z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2751za700za7za7_2860za7, "do", 2);
	      DEFINE_STRING(BGl_string2670z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2670za700za7za7_2861za7, "body2", 5);
	      DEFINE_STRING(BGl_string2590z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2590za700za7za7_2862za7, "let", 3);
	      DEFINE_STRING(BGl_string2674z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2674za700za7za7_2863za7, "lambda", 6);
	      DEFINE_STRING(BGl_string2594z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2594za700za7za7_2864za7, "temp", 4);
	      DEFINE_STRING(BGl_string2758z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2758za700za7za7_2865za7, "var", 3);
	      DEFINE_STRING(BGl_string2597z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2597za700za7za7_2866za7, "if", 2);
	      DEFINE_STRING(BGl_string2679z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2679za700za7za7_2867za7, "tag", 3);
	      DEFINE_STRING(BGl_string2760z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2760za700za7za7_2868za7, "init", 4);
	      DEFINE_STRING(BGl_string2762z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2762za700za7za7_2869za7, "step", 4);
	      DEFINE_STRING(BGl_string2683z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2683za700za7za7_2870za7, "letrec", 6);
	      DEFINE_STRING(BGl_string2765z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2765za700za7za7_2871za7, "expr", 4);
	      DEFINE_STRING(BGl_string2767z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2767za700za7za7_2872za7, "command", 7);
	      DEFINE_STRING(BGl_string2687z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2687za700za7za7_2873za7, "let*", 4);
	      DEFINE_STRING(BGl_string2772z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2772za700za7za7_2874za7, "loop", 4);
	      DEFINE_STRING(BGl_string2697z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2697za700za7za7_2875za7, "name1", 5);
	      DEFINE_STRING(BGl_string2699z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2699za700za7za7_2876za7, "val1", 4);
	      DEFINE_STRING(BGl_string2789z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2789za700za7za7_2877za7, "syntax-rules", 12);
	      DEFINE_STRING(BGl_string2790z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2790za700za7za7_2878za7, "define-syntax", 13);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2786z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_za762za7c3za704anonymo2879za7,
		BGl_z62zc3z04anonymousza31292ze3ze5zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string2791z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2791za700za7za7_2880za7, "Illegal form", 12);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2787z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_za762za7c3za704anonymo2881za7,
		BGl_z62zc3z04anonymousza31301ze3ze5zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string2792z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2792za700za7za7_2882za7, "&expand-define-syntax", 21);
	      DEFINE_STRING(BGl_string2793z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2793za700za7za7_2883za7, "letrec-syntax", 13);
	      DEFINE_STRING(BGl_string2794z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2794za700za7za7_2884za7, "let-syntax", 10);
	      DEFINE_STRING(BGl_string2795z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2795za700za7za7_2885za7, "Illegal bindings", 16);
	      DEFINE_STRING(BGl_string2796z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2796za700za7za7_2886za7, "&expand-letrec-syntax", 21);
	      DEFINE_STRING(BGl_string2797z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2797za700za7za7_2887za7, "&expand-let-syntax", 18);
	      DEFINE_STRING(BGl_string2798z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2798za700za7za7_2888za7, "Illegal declaration", 19);
	      DEFINE_STRING(BGl_string2799z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2799za700za7za7_2889za7, "&syntax-rules->expander", 23);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_syntaxzd2ruleszd2ze3expanderzd2envz31zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_za762syntaxza7d2rule2890z00,
		BGl_z62syntaxzd2ruleszd2ze3expanderz81zz__r5_macro_4_3_syntaxz00, 0L,
		BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2letreczd2syntaxzd2envzd2zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_za762expandza7d2letr2891z00,
		BGl_z62expandzd2letreczd2syntaxz62zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC,
		2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol2561z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2806z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2726z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2645z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2564z00zz__r5_macro_4_3_syntaxz00));
		   
			 ADD_ROOT((void *) (&BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2566z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2649z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2572z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2735z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2654z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2574z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2579z00zz__r5_macro_4_3_syntaxz00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2740z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_hygienezd2markzd2zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2742z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2663z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2665z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2584z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2748z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2667z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2586z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2669z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2589z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2750z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2673z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2593z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2757z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2596z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2759z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2678z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2761z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2682z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2764z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2766z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2686z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2771z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2696z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2698z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2788z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2600z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2605z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2606z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2607z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2608z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2609z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2610z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2611z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2612z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2613z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2614z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2615z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2616z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2617z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2618z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2619z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2700z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2620z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2621z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2705z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2624z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2706z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2625z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2707z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2626z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2708z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2627z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2709z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2628z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2710z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2711z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2712z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2713z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2633z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2634z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2635z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2638z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2639z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2720z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2640z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2722z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2641z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2723z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2642z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2724z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2643z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2725z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2644z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2563z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2728z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2647z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2729z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2648z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2568z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2569z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2730z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2731z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2732z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2651z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2570z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2733z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2652z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2571z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2734z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2653z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2737z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2656z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2738z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2657z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2739z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2658z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2659z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2578z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2660z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2661z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2662z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2581z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2744z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2582z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2745z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2583z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2746z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2747z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2588z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2752z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2671z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2753z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2672z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2591z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2754z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2592z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2755z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2756z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2675z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2676z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2595z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2677z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2598z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2599z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2680z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2681z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2763z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2684z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2685z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2768z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2769z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2688z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2689z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2770z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2690z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2691z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2773z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2692z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2774z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2693z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2775z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2694z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2776z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2695z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2777z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2778z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2779z00zz__r5_macro_4_3_syntaxz00));
		   
			 ADD_ROOT((void
				*) (&BGl_syntaxzd2expanderszd2mutexz00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2780z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2781z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2782z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2783z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2784z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_list2785z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_keyword2804z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2601z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2603z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2701z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2622z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2629z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2631z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2550z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2714z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2552z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2716z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2636z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2718z00zz__r5_macro_4_3_syntaxz00));
		     ADD_ROOT((void *) (&BGl_symbol2559z00zz__r5_macro_4_3_syntaxz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00(long
		BgL_checksumz00_3935, char *BgL_fromz00_3936)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00))
				{
					BGl_requirezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__r5_macro_4_3_syntaxz00();
					BGl_cnstzd2initzd2zz__r5_macro_4_3_syntaxz00();
					BGl_importedzd2moduleszd2initz00zz__r5_macro_4_3_syntaxz00();
					return BGl_toplevelzd2initzd2zz__r5_macro_4_3_syntaxz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__r5_macro_4_3_syntaxz00()
	{
		{	/* R5rs/syntax.scm 17 */
			BGl_symbol2550z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2551z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2552z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2553z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2559z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2560z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2561z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2562z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2564z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2565z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2566z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2567z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2563z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2564z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2566z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2572z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2573z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2574z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2575z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2577z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2571z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2564z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2572z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2574z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
							BNIL))));
			BGl_list2570z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2561z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2571z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2579z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2580z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2578z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2579z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2572z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2574z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
							BNIL))));
			BGl_list2569z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2570z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2578z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2584z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2585z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2586z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2587z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2583z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2584z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2566z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2586z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2582z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2561z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2583z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2589z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2590z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2593z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2594z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2592z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2593z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2584z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2591z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2592z00zz__r5_macro_4_3_syntaxz00, BNIL);
			BGl_symbol2596z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2597z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2598z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2586z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2593z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2595z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2596z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2593z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2598z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2588z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2589z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2591z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2595z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2581z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2582z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2588z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2601z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2602z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2603z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2604z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2600z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2561z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2583z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2601z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2603z00zz__r5_macro_4_3_syntaxz00,
							MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
								BNIL)))));
			BGl_list2607z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2561z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2601z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2603z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
							BNIL))));
			BGl_list2606z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2596z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2593z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2598z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_list2607z00zz__r5_macro_4_3_syntaxz00, BNIL))));
			BGl_list2605z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2589z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2591z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2606z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2599z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2600z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2605z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2610z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2584z00zz__r5_macro_4_3_syntaxz00, BNIL);
			BGl_list2609z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2561z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2610z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2608z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2609z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2584z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2612z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2561z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2610z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2601z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2603z00zz__r5_macro_4_3_syntaxz00,
							MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
								BNIL)))));
			BGl_list2614z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2596z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2593z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2593z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_list2607z00zz__r5_macro_4_3_syntaxz00, BNIL))));
			BGl_list2613z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2589z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2591z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2614z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2611z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2612z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2613z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2617z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2584z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2572z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2574z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
							BNIL))));
			BGl_list2616z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2561z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2617z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2618z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2596z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2584z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2578z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2615z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2616z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2618z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2620z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2561z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2617z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2601z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2603z00zz__r5_macro_4_3_syntaxz00,
							MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
								BNIL)))));
			BGl_list2621z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2596z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2584z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2578z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_list2607z00zz__r5_macro_4_3_syntaxz00, BNIL))));
			BGl_list2619z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2620z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2621z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2568z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2569z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2581z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2599z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_list2608z00zz__r5_macro_4_3_syntaxz00,
							MAKE_YOUNG_PAIR(BGl_list2611z00zz__r5_macro_4_3_syntaxz00,
								MAKE_YOUNG_PAIR(BGl_list2615z00zz__r5_macro_4_3_syntaxz00,
									MAKE_YOUNG_PAIR(BGl_list2619z00zz__r5_macro_4_3_syntaxz00,
										BNIL)))))));
			BGl_symbol2622z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2623z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2624z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2564z00zz__r5_macro_4_3_syntaxz00, BNIL);
			BGl_symbol2629z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2630z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2628z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2629z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2631z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2632z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2627z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2622z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2628z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2631z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
							BNIL))));
			BGl_symbol2636z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2637z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2635z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2636z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2628z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2634z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2635z00zz__r5_macro_4_3_syntaxz00, BNIL);
			BGl_list2638z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2622z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2636z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2631z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
							BNIL))));
			BGl_list2633z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2589z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2634z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2638z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2626z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2627z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2633z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2640z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2622z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2629z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2571z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2639z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2640z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2578z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2645z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2646z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2644z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2645z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2643z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2644z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2572z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2574z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
							BNIL))));
			BGl_list2642z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2622z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2629z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2643z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_symbol2649z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2650z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2651z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2559z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2644z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2648z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2649z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2629z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2651z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2647z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2596z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2648z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2578z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2641z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2642z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2647z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2654z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2655z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2653z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2622z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2629z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2643z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2654z00zz__r5_macro_4_3_syntaxz00,
							MAKE_YOUNG_PAIR(BGl_symbol2631z00zz__r5_macro_4_3_syntaxz00,
								MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
									BNIL))))));
			BGl_list2657z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2622z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2629z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2654z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2631z00zz__r5_macro_4_3_syntaxz00,
							MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
								BNIL)))));
			BGl_list2656z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2596z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2648z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2578z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_list2657z00zz__r5_macro_4_3_syntaxz00, BNIL))));
			BGl_list2652z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2653z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2656z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2625z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2626z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2639z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2641z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_list2652z00zz__r5_macro_4_3_syntaxz00, BNIL))));
			BGl_symbol2663z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2664z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2665z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2666z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2662z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2663z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2665z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2661z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2662z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2667z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2668z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2669z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2670z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2660z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2589z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2661z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2667z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2669z00zz__r5_macro_4_3_syntaxz00,
							MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
								BNIL)))));
			BGl_symbol2673z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2674z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2675z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2663z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2672z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2673z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2675z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2667z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2669z00zz__r5_macro_4_3_syntaxz00,
							MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
								BNIL)))));
			BGl_list2671z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2672z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2665z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2659z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2660z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2671z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2678z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2679z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2677z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2589z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2678z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2661z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2667z00zz__r5_macro_4_3_syntaxz00,
							MAKE_YOUNG_PAIR(BGl_symbol2669z00zz__r5_macro_4_3_syntaxz00,
								MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
									BNIL))))));
			BGl_symbol2682z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2683z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2685z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2678z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2672z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2684z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2685z00zz__r5_macro_4_3_syntaxz00, BNIL);
			BGl_list2681z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2682z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2684z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2678z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2680z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2681z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2665z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2676z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2677z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2680z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2658z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2659z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2676z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2686z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2687z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2690z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2686z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BNIL,
					MAKE_YOUNG_PAIR(BGl_symbol2667z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2669z00zz__r5_macro_4_3_syntaxz00,
							MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
								BNIL)))));
			BGl_list2691z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2589z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BNIL,
					MAKE_YOUNG_PAIR(BGl_symbol2667z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2669z00zz__r5_macro_4_3_syntaxz00,
							MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
								BNIL)))));
			BGl_list2689z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2690z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2691z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2696z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2697z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2698z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2699z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2695z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2696z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2698z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2701z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2702z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2704z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2700z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2701z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2694z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2695z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2700z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2693z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2686z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2694z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2667z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2669z00zz__r5_macro_4_3_syntaxz00,
							MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
								BNIL)))));
			BGl_list2706z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2695z00zz__r5_macro_4_3_syntaxz00, BNIL);
			BGl_list2708z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2700z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2707z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2686z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2708z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2667z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2669z00zz__r5_macro_4_3_syntaxz00,
							MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
								BNIL)))));
			BGl_list2705z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2589z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2706z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2707z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2692z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2693z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2705z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2688z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2689z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2692z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2714z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2715z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2716z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2717z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2713z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2714z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2716z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2712z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2713z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2718z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2719z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2711z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2682z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2712z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2718z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
							BNIL))));
			BGl_list2722z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2714z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2720z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2682z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_string2721z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2722z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BNIL,
							MAKE_YOUNG_PAIR(BGl_list2712z00zz__r5_macro_4_3_syntaxz00,
								MAKE_YOUNG_PAIR(BGl_symbol2718z00zz__r5_macro_4_3_syntaxz00,
									MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
										BNIL)))))));
			BGl_list2710z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2711z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2720z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2726z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2727z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2725z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2726z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2724z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2682z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_string2721z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BNIL,
						MAKE_YOUNG_PAIR(BGl_list2725z00zz__r5_macro_4_3_syntaxz00,
							MAKE_YOUNG_PAIR(BGl_list2712z00zz__r5_macro_4_3_syntaxz00,
								MAKE_YOUNG_PAIR(BGl_symbol2718z00zz__r5_macro_4_3_syntaxz00,
									MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
										BNIL)))))));
			BGl_list2730z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2714z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BUNSPEC, BNIL));
			BGl_list2729z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2730z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2733z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2726z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2716z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2732z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2733z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2735z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2736z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2734z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2735z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2714z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2726z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2731z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2589z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2732z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2734z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
							MAKE_YOUNG_PAIR(BGl_symbol2718z00zz__r5_macro_4_3_syntaxz00,
								MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
									BNIL))))));
			BGl_list2728z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2589z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2729z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2731z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2723z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2724z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2728z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2740z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2741z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2742z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2743z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2739z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2740z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2742z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2744z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2593z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2738z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2682z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_string2721z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2739z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_list2744z00zz__r5_macro_4_3_syntaxz00,
							MAKE_YOUNG_PAIR(BGl_list2712z00zz__r5_macro_4_3_syntaxz00,
								MAKE_YOUNG_PAIR(BGl_symbol2718z00zz__r5_macro_4_3_syntaxz00,
									MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
										BNIL)))))));
			BGl_list2746z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2742z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2748z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2749z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2747z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2748z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2593z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2745z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2682z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_string2721z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2746z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_list2747z00zz__r5_macro_4_3_syntaxz00,
							MAKE_YOUNG_PAIR(BGl_list2712z00zz__r5_macro_4_3_syntaxz00,
								MAKE_YOUNG_PAIR(BGl_symbol2718z00zz__r5_macro_4_3_syntaxz00,
									MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
										BNIL)))))));
			BGl_list2737z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2738z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2745z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2709z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2710z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2723z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2737z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_symbol2750z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2751z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2757z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2758z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2759z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2760z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2761z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2762z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2756z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2757z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2759z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2761z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
							BNIL))));
			BGl_list2755z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2756z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2764z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2765z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2763z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2584z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2764z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_symbol2766z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2767z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2754z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2750z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2755z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2763z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2766z00zz__r5_macro_4_3_syntaxz00,
							MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
								BNIL)))));
			BGl_symbol2771z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2772z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2774z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2757z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2777z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2596z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BBOOL(((bool_t) 0)),
					MAKE_YOUNG_PAIR(BBOOL(((bool_t) 0)), BNIL)));
			BGl_list2776z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2579z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2777z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2764z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
							BNIL))));
			BGl_list2780z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2750z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_string2762z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2757z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2761z00zz__r5_macro_4_3_syntaxz00,
							MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
								BNIL)))));
			BGl_list2779z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2771z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2780z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2778z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2579z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2766z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_list2779z00zz__r5_macro_4_3_syntaxz00, BNIL))));
			BGl_list2775z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2596z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2584z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2776z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_list2778z00zz__r5_macro_4_3_syntaxz00, BNIL))));
			BGl_list2773z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2673z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2774z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2775z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2770z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2771z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2773z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2769z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2770z00zz__r5_macro_4_3_syntaxz00, BNIL);
			BGl_list2781z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2771z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2759z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2768z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2682z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2769z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2781z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2753z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2754z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2768z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2783z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2750z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_string2762z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2740z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2782z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2783z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2740z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2785z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2750z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_string2762z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_symbol2740z00zz__r5_macro_4_3_syntaxz00,
						MAKE_YOUNG_PAIR(BGl_symbol2742z00zz__r5_macro_4_3_syntaxz00,
							BNIL))));
			BGl_list2784z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2785z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_symbol2742z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2752z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_YOUNG_PAIR(BGl_list2753z00zz__r5_macro_4_3_syntaxz00,
				MAKE_YOUNG_PAIR(BGl_list2782z00zz__r5_macro_4_3_syntaxz00,
					MAKE_YOUNG_PAIR(BGl_list2784z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_symbol2788z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2789z00zz__r5_macro_4_3_syntaxz00);
			BGl_keyword2804z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_keyword(BGl_string2805z00zz__r5_macro_4_3_syntaxz00);
			return (BGl_symbol2806z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2807z00zz__r5_macro_4_3_syntaxz00),
				BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__r5_macro_4_3_syntaxz00()
	{
		{	/* R5rs/syntax.scm 17 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__r5_macro_4_3_syntaxz00()
	{
		{	/* R5rs/syntax.scm 17 */
			BGl_hygienezd2markzd2zz__r5_macro_4_3_syntaxz00 =
				BGl_gensymz00zz__r4_symbols_6_4z00
				(BGl_symbol2550z00zz__r5_macro_4_3_syntaxz00);
			{	/* R5rs/syntax.scm 57 */
				obj_t BgL_res2233z00_2446;

				{	/* R5rs/syntax.scm 57 */
					obj_t BgL_symbolz00_2444;

					BgL_symbolz00_2444 = BGl_hygienezd2markzd2zz__r5_macro_4_3_syntaxz00;
					{	/* R5rs/syntax.scm 57 */
						obj_t BgL_arg2071z00_2445;

						BgL_arg2071z00_2445 = SYMBOL_TO_STRING(BgL_symbolz00_2444);
						BgL_res2233z00_2446 =
							BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2071z00_2445);
					}
				}
				BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00 = BgL_res2233z00_2446;
			}
			BGl_hygienezd2prefixzd2lenz00zz__r5_macro_4_3_syntaxz00 =
				STRING_LENGTH(BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00);
			BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 = BFALSE;
			{	/* R5rs/syntax.scm 61 */

				{	/* Llib/thread.scm 214 */
					obj_t BgL_namez00_1052;

					BgL_namez00_1052 =
						BGl_gensymz00zz__r4_symbols_6_4z00
						(BGl_symbol2552z00zz__r5_macro_4_3_syntaxz00);
					{	/* Llib/thread.scm 214 */

						{	/* Llib/thread.scm 214 */
							obj_t BgL_res2235z00_2449;

							BgL_res2235z00_2449 = bgl_make_mutex(BgL_namez00_1052);
							BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00 =
								BgL_res2235z00_2449;
						}
					}
				}
			}
			{	/* R5rs/syntax.scm 62 */

				{	/* Llib/thread.scm 214 */
					obj_t BgL_namez00_1053;

					BgL_namez00_1053 =
						BGl_gensymz00zz__r4_symbols_6_4z00
						(BGl_symbol2552z00zz__r5_macro_4_3_syntaxz00);
					{	/* Llib/thread.scm 214 */

						{	/* Llib/thread.scm 214 */
							obj_t BgL_res2236z00_2450;

							BgL_res2236z00_2450 = bgl_make_mutex(BgL_namez00_1053);
							return
								(BGl_syntaxzd2expanderszd2mutexz00zz__r5_macro_4_3_syntaxz00 =
								BgL_res2236z00_2450, BUNSPEC);
						}
					}
				}
			}
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zz__r5_macro_4_3_syntaxz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1054;

				BgL_headz00_1054 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_2468;
					obj_t BgL_tailz00_2469;

					BgL_prevz00_2468 = BgL_headz00_1054;
					BgL_tailz00_2469 = BgL_l1z00_1;
				BgL_loopz00_2467:
					if (PAIRP(BgL_tailz00_2469))
						{
							obj_t BgL_newzd2prevzd2_2475;

							BgL_newzd2prevzd2_2475 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_2469), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_2468, BgL_newzd2prevzd2_2475);
							{
								obj_t BgL_tailz00_4403;
								obj_t BgL_prevz00_4402;

								BgL_prevz00_4402 = BgL_newzd2prevzd2_2475;
								BgL_tailz00_4403 = CDR(BgL_tailz00_2469);
								BgL_tailz00_2469 = BgL_tailz00_4403;
								BgL_prevz00_2468 = BgL_prevz00_4402;
								goto BgL_loopz00_2467;
							}
						}
					else
						{
							BNIL;
						}
				}
				return CDR(BgL_headz00_1054);
			}
		}

	}



/* install-syntax-expander */
	BGL_EXPORTED_DEF obj_t
		BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_keywordz00_4, obj_t BgL_expanderz00_5)
	{
		{	/* R5rs/syntax.scm 76 */
			BGL_MUTEX_LOCK(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00);
			{	/* R5rs/syntax.scm 77 */
				obj_t BgL_tmp2894z00_4406;

				{	/* R5rs/syntax.scm 78 */
					obj_t BgL_arg1280z00_2488;

					BgL_arg1280z00_2488 =
						MAKE_YOUNG_PAIR(BgL_keywordz00_4, BgL_expanderz00_5);
					BgL_tmp2894z00_4406 = (BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 =
						MAKE_YOUNG_PAIR(BgL_arg1280z00_2488,
							BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00), BUNSPEC);
				}
				BGL_MUTEX_UNLOCK(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00);
				return BgL_tmp2894z00_4406;
			}
		}

	}



/* &install-syntax-expander */
	obj_t BGl_z62installzd2syntaxzd2expanderz62zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3849, obj_t BgL_keywordz00_3850, obj_t BgL_expanderz00_3851)
	{
		{	/* R5rs/syntax.scm 76 */
			{	/* R5rs/syntax.scm 77 */
				obj_t BgL_auxz00_4418;
				obj_t BgL_auxz00_4411;

				if (PROCEDUREP(BgL_expanderz00_3851))
					{	/* R5rs/syntax.scm 77 */
						BgL_auxz00_4418 = BgL_expanderz00_3851;
					}
				else
					{
						obj_t BgL_auxz00_4421;

						BgL_auxz00_4421 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2554z00zz__r5_macro_4_3_syntaxz00, BINT(((long) 3094)),
							BGl_string2555z00zz__r5_macro_4_3_syntaxz00,
							BGl_string2557z00zz__r5_macro_4_3_syntaxz00,
							BgL_expanderz00_3851);
						FAILURE(BgL_auxz00_4421, BFALSE, BFALSE);
					}
				if (SYMBOLP(BgL_keywordz00_3850))
					{	/* R5rs/syntax.scm 77 */
						BgL_auxz00_4411 = BgL_keywordz00_3850;
					}
				else
					{
						obj_t BgL_auxz00_4414;

						BgL_auxz00_4414 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2554z00zz__r5_macro_4_3_syntaxz00, BINT(((long) 3094)),
							BGl_string2555z00zz__r5_macro_4_3_syntaxz00,
							BGl_string2556z00zz__r5_macro_4_3_syntaxz00, BgL_keywordz00_3850);
						FAILURE(BgL_auxz00_4414, BFALSE, BFALSE);
					}
				return
					BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00
					(BgL_auxz00_4411, BgL_auxz00_4418);
			}
		}

	}



/* init-syntax-expanders! */
	obj_t BGl_initzd2syntaxzd2expandersz12z12zz__r5_macro_4_3_syntaxz00()
	{
		{	/* R5rs/syntax.scm 83 */
			{	/* R5rs/syntax.scm 88 */
				obj_t BgL_top2898z00_4427;

				BgL_top2898z00_4427 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK
					(BGl_syntaxzd2expanderszd2mutexz00zz__r5_macro_4_3_syntaxz00);
				BGL_EXITD_PUSH_PROTECT(BgL_top2898z00_4427,
					BGl_syntaxzd2expanderszd2mutexz00zz__r5_macro_4_3_syntaxz00);
				BUNSPEC;
				{	/* R5rs/syntax.scm 88 */
					obj_t BgL_tmp2897z00_4426;

					if (CBOOL(BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00))
						{	/* R5rs/syntax.scm 89 */
							BgL_tmp2897z00_4426 = BFALSE;
						}
					else
						{	/* R5rs/syntax.scm 89 */
							BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 = BNIL;
							{	/* R5rs/syntax.scm 92 */
								obj_t BgL_keywordz00_2493;

								BgL_keywordz00_2493 =
									BGl_symbol2559z00zz__r5_macro_4_3_syntaxz00;
								BGL_MUTEX_LOCK(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00);
								{	/* R5rs/syntax.scm 77 */
									obj_t BgL_tmp2900z00_4433;

									{	/* R5rs/syntax.scm 78 */
										obj_t BgL_arg1280z00_2494;

										BgL_arg1280z00_2494 =
											MAKE_YOUNG_PAIR(BgL_keywordz00_2493,
											BGl_proc2558z00zz__r5_macro_4_3_syntaxz00);
										BgL_tmp2900z00_4433 =
											(BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 =
											MAKE_YOUNG_PAIR(BgL_arg1280z00_2494,
												BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00), BUNSPEC);
									}
									BGL_MUTEX_UNLOCK
										(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00);
									BgL_tmp2900z00_4433;
								}
							}
							{	/* R5rs/syntax.scm 94 */
								obj_t BgL_idz00_2495;
								obj_t BgL_literalsz00_2496;
								obj_t BgL_rulesz00_2497;

								BgL_idz00_2495 = BGl_symbol2561z00zz__r5_macro_4_3_syntaxz00;
								BgL_literalsz00_2496 =
									BGl_list2563z00zz__r5_macro_4_3_syntaxz00;
								BgL_rulesz00_2497 = BGl_list2568z00zz__r5_macro_4_3_syntaxz00;
								{	/* R5rs/syntax.scm 86 */
									obj_t BgL_arg1284z00_2498;

									BgL_arg1284z00_2498 =
										BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00
										(BgL_idz00_2495, BgL_literalsz00_2496, BgL_rulesz00_2497);
									BGL_MUTEX_LOCK
										(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00);
									{	/* R5rs/syntax.scm 77 */
										obj_t BgL_tmp2901z00_4439;

										{	/* R5rs/syntax.scm 78 */
											obj_t BgL_arg1280z00_2501;

											BgL_arg1280z00_2501 =
												MAKE_YOUNG_PAIR(BgL_idz00_2495,
												((obj_t) BgL_arg1284z00_2498));
											BgL_tmp2901z00_4439 =
												(BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 =
												MAKE_YOUNG_PAIR(BgL_arg1280z00_2501,
													BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00), BUNSPEC);
										}
										BGL_MUTEX_UNLOCK
											(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00);
										BgL_tmp2901z00_4439;
									}
								}
							}
							{	/* R5rs/syntax.scm 120 */
								obj_t BgL_idz00_2502;
								obj_t BgL_literalsz00_2503;
								obj_t BgL_rulesz00_2504;

								BgL_idz00_2502 = BGl_symbol2622z00zz__r5_macro_4_3_syntaxz00;
								BgL_literalsz00_2503 =
									BGl_list2624z00zz__r5_macro_4_3_syntaxz00;
								BgL_rulesz00_2504 = BGl_list2625z00zz__r5_macro_4_3_syntaxz00;
								{	/* R5rs/syntax.scm 86 */
									obj_t BgL_arg1284z00_2505;

									BgL_arg1284z00_2505 =
										BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00
										(BgL_idz00_2502, BgL_literalsz00_2503, BgL_rulesz00_2504);
									BGL_MUTEX_LOCK
										(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00);
									{	/* R5rs/syntax.scm 77 */
										obj_t BgL_tmp2902z00_4446;

										{	/* R5rs/syntax.scm 78 */
											obj_t BgL_arg1280z00_2508;

											BgL_arg1280z00_2508 =
												MAKE_YOUNG_PAIR(BgL_idz00_2502,
												((obj_t) BgL_arg1284z00_2505));
											BgL_tmp2902z00_4446 =
												(BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 =
												MAKE_YOUNG_PAIR(BgL_arg1280z00_2508,
													BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00), BUNSPEC);
										}
										BGL_MUTEX_UNLOCK
											(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00);
										BgL_tmp2902z00_4446;
									}
								}
							}
							{	/* R5rs/syntax.scm 140 */
								obj_t BgL_idz00_2509;
								obj_t BgL_rulesz00_2510;

								BgL_idz00_2509 = BGl_symbol2589z00zz__r5_macro_4_3_syntaxz00;
								BgL_rulesz00_2510 = BGl_list2658z00zz__r5_macro_4_3_syntaxz00;
								{	/* R5rs/syntax.scm 86 */
									obj_t BgL_arg1284z00_2511;

									BgL_arg1284z00_2511 =
										BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00
										(BgL_idz00_2509, BNIL, BgL_rulesz00_2510);
									BGL_MUTEX_LOCK
										(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00);
									{	/* R5rs/syntax.scm 77 */
										obj_t BgL_tmp2903z00_4453;

										{	/* R5rs/syntax.scm 78 */
											obj_t BgL_arg1280z00_2514;

											BgL_arg1280z00_2514 =
												MAKE_YOUNG_PAIR(BgL_idz00_2509,
												((obj_t) BgL_arg1284z00_2511));
											BgL_tmp2903z00_4453 =
												(BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 =
												MAKE_YOUNG_PAIR(BgL_arg1280z00_2514,
													BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00), BUNSPEC);
										}
										BGL_MUTEX_UNLOCK
											(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00);
										BgL_tmp2903z00_4453;
									}
								}
							}
							{	/* R5rs/syntax.scm 151 */
								obj_t BgL_idz00_2515;
								obj_t BgL_rulesz00_2516;

								BgL_idz00_2515 = BGl_symbol2686z00zz__r5_macro_4_3_syntaxz00;
								BgL_rulesz00_2516 = BGl_list2688z00zz__r5_macro_4_3_syntaxz00;
								{	/* R5rs/syntax.scm 86 */
									obj_t BgL_arg1284z00_2517;

									BgL_arg1284z00_2517 =
										BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00
										(BgL_idz00_2515, BNIL, BgL_rulesz00_2516);
									BGL_MUTEX_LOCK
										(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00);
									{	/* R5rs/syntax.scm 77 */
										obj_t BgL_tmp2904z00_4460;

										{	/* R5rs/syntax.scm 78 */
											obj_t BgL_arg1280z00_2520;

											BgL_arg1280z00_2520 =
												MAKE_YOUNG_PAIR(BgL_idz00_2515,
												((obj_t) BgL_arg1284z00_2517));
											BgL_tmp2904z00_4460 =
												(BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 =
												MAKE_YOUNG_PAIR(BgL_arg1280z00_2520,
													BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00), BUNSPEC);
										}
										BGL_MUTEX_UNLOCK
											(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00);
										BgL_tmp2904z00_4460;
									}
								}
							}
							{	/* R5rs/syntax.scm 161 */
								obj_t BgL_idz00_2521;
								obj_t BgL_rulesz00_2522;

								BgL_idz00_2521 = BGl_symbol2682z00zz__r5_macro_4_3_syntaxz00;
								BgL_rulesz00_2522 = BGl_list2709z00zz__r5_macro_4_3_syntaxz00;
								{	/* R5rs/syntax.scm 86 */
									obj_t BgL_arg1284z00_2523;

									BgL_arg1284z00_2523 =
										BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00
										(BgL_idz00_2521, BNIL, BgL_rulesz00_2522);
									BGL_MUTEX_LOCK
										(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00);
									{	/* R5rs/syntax.scm 77 */
										obj_t BgL_tmp2905z00_4467;

										{	/* R5rs/syntax.scm 78 */
											obj_t BgL_arg1280z00_2526;

											BgL_arg1280z00_2526 =
												MAKE_YOUNG_PAIR(BgL_idz00_2521,
												((obj_t) BgL_arg1284z00_2523));
											BgL_tmp2905z00_4467 =
												(BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 =
												MAKE_YOUNG_PAIR(BgL_arg1280z00_2526,
													BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00), BUNSPEC);
										}
										BGL_MUTEX_UNLOCK
											(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00);
										BgL_tmp2905z00_4467;
									}
								}
							}
							{	/* R5rs/syntax.scm 190 */
								obj_t BgL_idz00_2527;
								obj_t BgL_rulesz00_2528;

								BgL_idz00_2527 = BGl_symbol2750z00zz__r5_macro_4_3_syntaxz00;
								BgL_rulesz00_2528 = BGl_list2752z00zz__r5_macro_4_3_syntaxz00;
								{	/* R5rs/syntax.scm 86 */
									obj_t BgL_arg1284z00_2529;

									BgL_arg1284z00_2529 =
										BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00
										(BgL_idz00_2527, BNIL, BgL_rulesz00_2528);
									BGL_MUTEX_LOCK
										(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00);
									{	/* R5rs/syntax.scm 77 */
										obj_t BgL_tmp2906z00_4474;

										{	/* R5rs/syntax.scm 78 */
											obj_t BgL_arg1280z00_2532;

											BgL_arg1280z00_2532 =
												MAKE_YOUNG_PAIR(BgL_idz00_2527,
												((obj_t) BgL_arg1284z00_2529));
											BgL_tmp2906z00_4474 =
												(BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 =
												MAKE_YOUNG_PAIR(BgL_arg1280z00_2532,
													BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00), BUNSPEC);
										}
										BGL_MUTEX_UNLOCK
											(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00);
										BgL_tmp2897z00_4426 = BgL_tmp2906z00_4474;
									}
								}
							}
						}
					BGL_EXITD_POP_PROTECT(BgL_top2898z00_4427);
					BUNSPEC;
					BGL_MUTEX_UNLOCK
						(BGl_syntaxzd2expanderszd2mutexz00zz__r5_macro_4_3_syntaxz00);
					return BgL_tmp2897z00_4426;
				}
			}
		}

	}



/* &<@anonymous:1282> */
	obj_t BGl_z62zc3z04anonymousza31282ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3853, obj_t BgL_xz00_3854, obj_t BgL_ez00_3855)
	{
		{	/* R5rs/syntax.scm 92 */
			return BgL_xz00_3854;
		}

	}



/* syntax-expander */
	obj_t BGl_syntaxzd2expanderzd2zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_7,
		obj_t BgL_ez00_8)
	{
		{	/* R5rs/syntax.scm 222 */
			{	/* R5rs/syntax.scm 223 */
				obj_t BgL_e1z00_1078;

				if (PAIRP(BgL_xz00_7))
					{	/* R5rs/syntax.scm 226 */
						obj_t BgL_g1039z00_1089;

						{	/* R5rs/syntax.scm 226 */
							obj_t BgL_arg1300z00_1105;

							BgL_arg1300z00_1105 = CAR(BgL_xz00_7);
							{	/* R5rs/syntax.scm 68 */
								obj_t BgL_idz00_2535;

								BgL_idz00_2535 =
									BGl_hygienezd2valuezd2zz__r5_macro_4_3_syntaxz00
									(BgL_arg1300z00_1105);
								{	/* R5rs/syntax.scm 68 */
									obj_t BgL_cz00_2536;

									{	/* R5rs/syntax.scm 69 */
										obj_t BgL_top2909z00_4487;

										BgL_top2909z00_4487 = BGL_EXITD_TOP_AS_OBJ();
										BGL_MUTEX_LOCK
											(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00);
										BGL_EXITD_PUSH_PROTECT(BgL_top2909z00_4487,
											BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00);
										BUNSPEC;
										{	/* R5rs/syntax.scm 69 */
											obj_t BgL_tmp2908z00_4486;

											BgL_tmp2908z00_4486 =
												BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_2535,
												BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00);
											BGL_EXITD_POP_PROTECT(BgL_top2909z00_4487);
											BUNSPEC;
											BGL_MUTEX_UNLOCK
												(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00);
											BgL_cz00_2536 = BgL_tmp2908z00_4486;
										}
									}
									{	/* R5rs/syntax.scm 69 */

										if (PAIRP(BgL_cz00_2536))
											{	/* R5rs/syntax.scm 70 */
												BgL_g1039z00_1089 = CDR(BgL_cz00_2536);
											}
										else
											{	/* R5rs/syntax.scm 70 */
												BgL_g1039z00_1089 = BFALSE;
											}
									}
								}
							}
						}
						if (CBOOL(BgL_g1039z00_1089))
							{	/* R5rs/syntax.scm 226 */
								BgL_e1z00_1078 = BgL_g1039z00_1089;
							}
						else
							{	/* R5rs/syntax.scm 226 */
								BgL_e1z00_1078 = BGl_proc2786z00zz__r5_macro_4_3_syntaxz00;
							}
					}
				else
					{	/* R5rs/syntax.scm 224 */
						BgL_e1z00_1078 = BGl_proc2787z00zz__r5_macro_4_3_syntaxz00;
					}
				{	/* R5rs/syntax.scm 239 */
					obj_t BgL_newz00_1079;

					BgL_newz00_1079 =
						PROCEDURE_ENTRY(BgL_e1z00_1078) (BgL_e1z00_1078, BgL_xz00_7,
						BgL_ez00_8, BEOA);
					{	/* R5rs/syntax.scm 240 */
						bool_t BgL_test2912z00_4504;

						if (PAIRP(BgL_newz00_1079))
							{	/* R5rs/syntax.scm 240 */
								bool_t BgL_test2914z00_4507;

								{	/* R5rs/syntax.scm 240 */
									bool_t BgL_res2246z00_2545;

									BgL_res2246z00_2545 = EPAIRP(BgL_newz00_1079);
									BgL_test2914z00_4507 = BgL_res2246z00_2545;
								}
								if (BgL_test2914z00_4507)
									{	/* R5rs/syntax.scm 240 */
										BgL_test2912z00_4504 = ((bool_t) 0);
									}
								else
									{	/* R5rs/syntax.scm 240 */
										bool_t BgL_res2247z00_2546;

										BgL_res2247z00_2546 = EPAIRP(BgL_xz00_7);
										BgL_test2912z00_4504 = BgL_res2247z00_2546;
									}
							}
						else
							{	/* R5rs/syntax.scm 240 */
								BgL_test2912z00_4504 = ((bool_t) 0);
							}
						if (BgL_test2912z00_4504)
							{	/* R5rs/syntax.scm 241 */
								obj_t BgL_arg1288z00_1083;
								obj_t BgL_arg1289z00_1084;
								obj_t BgL_arg1290z00_1085;

								BgL_arg1288z00_1083 = CAR(BgL_newz00_1079);
								BgL_arg1289z00_1084 = CDR(BgL_newz00_1079);
								BgL_arg1290z00_1085 = CER(((obj_t) BgL_xz00_7));
								{	/* R5rs/syntax.scm 241 */
									obj_t BgL_res2248z00_2550;

									BgL_res2248z00_2550 =
										MAKE_YOUNG_EPAIR(BgL_arg1288z00_1083, BgL_arg1289z00_1084,
										BgL_arg1290z00_1085);
									return BgL_res2248z00_2550;
								}
							}
						else
							{	/* R5rs/syntax.scm 240 */
								return BgL_newz00_1079;
							}
					}
				}
			}
		}

	}



/* &syntax-expander */
	obj_t BGl_z62syntaxzd2expanderzb0zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3858, obj_t BgL_xz00_3859, obj_t BgL_ez00_3860)
	{
		{	/* R5rs/syntax.scm 222 */
			return
				BGl_syntaxzd2expanderzd2zz__r5_macro_4_3_syntaxz00(BgL_xz00_3859,
				BgL_ez00_3860);
		}

	}



/* &<@anonymous:1292> */
	obj_t BGl_z62zc3z04anonymousza31292ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3861, obj_t BgL_xz00_3862, obj_t BgL_ez00_3863)
	{
		{	/* R5rs/syntax.scm 230 */
			return
				BGl_loopze73ze7zz__r5_macro_4_3_syntaxz00(BgL_ez00_3863, BgL_xz00_3862);
		}

	}



/* loop~3 */
	obj_t BGl_loopze73ze7zz__r5_macro_4_3_syntaxz00(obj_t BgL_ez00_3906,
		obj_t BgL_xz00_1096)
	{
		{	/* R5rs/syntax.scm 231 */
			if (PAIRP(BgL_xz00_1096))
				{	/* R5rs/syntax.scm 234 */
					obj_t BgL_arg1295z00_1099;
					obj_t BgL_arg1296z00_1100;

					{	/* R5rs/syntax.scm 234 */
						obj_t BgL_arg1297z00_1101;

						BgL_arg1297z00_1101 = CAR(BgL_xz00_1096);
						BgL_arg1295z00_1099 =
							PROCEDURE_ENTRY(BgL_ez00_3906) (BgL_ez00_3906,
							BgL_arg1297z00_1101, BgL_ez00_3906, BEOA);
					}
					BgL_arg1296z00_1100 =
						BGl_loopze73ze7zz__r5_macro_4_3_syntaxz00(BgL_ez00_3906,
						CDR(BgL_xz00_1096));
					return MAKE_YOUNG_PAIR(BgL_arg1295z00_1099, BgL_arg1296z00_1100);
				}
			else
				{	/* R5rs/syntax.scm 233 */
					if (NULLP(BgL_xz00_1096))
						{	/* R5rs/syntax.scm 235 */
							return BNIL;
						}
					else
						{	/* R5rs/syntax.scm 235 */
							return
								PROCEDURE_ENTRY(BgL_ez00_3906) (BgL_ez00_3906, BgL_xz00_1096,
								BgL_ez00_3906, BEOA);
						}
				}
		}

	}



/* &<@anonymous:1301> */
	obj_t BGl_z62zc3z04anonymousza31301ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3864, obj_t BgL_xz00_3865, obj_t BgL_ez00_3866)
	{
		{	/* R5rs/syntax.scm 225 */
			return BgL_xz00_3865;
		}

	}



/* expand-define-syntax */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2definezd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_9,
		obj_t BgL_ez00_10)
	{
		{	/* R5rs/syntax.scm 247 */
			if (PAIRP(BgL_xz00_9))
				{	/* R5rs/syntax.scm 248 */
					obj_t BgL_cdrzd2111zd2_1116;

					BgL_cdrzd2111zd2_1116 = CDR(BgL_xz00_9);
					if (PAIRP(BgL_cdrzd2111zd2_1116))
						{	/* R5rs/syntax.scm 248 */
							obj_t BgL_carzd2115zd2_1118;
							obj_t BgL_cdrzd2116zd2_1119;

							BgL_carzd2115zd2_1118 = CAR(BgL_cdrzd2111zd2_1116);
							BgL_cdrzd2116zd2_1119 = CDR(BgL_cdrzd2111zd2_1116);
							if (SYMBOLP(BgL_carzd2115zd2_1118))
								{	/* R5rs/syntax.scm 248 */
									if (PAIRP(BgL_cdrzd2116zd2_1119))
										{	/* R5rs/syntax.scm 248 */
											obj_t BgL_carzd2122zd2_1122;

											BgL_carzd2122zd2_1122 = CAR(BgL_cdrzd2116zd2_1119);
											if (PAIRP(BgL_carzd2122zd2_1122))
												{	/* R5rs/syntax.scm 248 */
													obj_t BgL_cdrzd2127zd2_1124;

													BgL_cdrzd2127zd2_1124 = CDR(BgL_carzd2122zd2_1122);
													if (
														(CAR(BgL_carzd2122zd2_1122) ==
															BGl_symbol2788z00zz__r5_macro_4_3_syntaxz00))
														{	/* R5rs/syntax.scm 248 */
															if (PAIRP(BgL_cdrzd2127zd2_1124))
																{	/* R5rs/syntax.scm 248 */
																	if (NULLP(CDR(BgL_cdrzd2116zd2_1119)))
																		{	/* R5rs/syntax.scm 248 */
																			obj_t BgL_arg1312z00_1130;
																			obj_t BgL_arg1313z00_1131;

																			BgL_arg1312z00_1130 =
																				CAR(BgL_cdrzd2127zd2_1124);
																			BgL_arg1313z00_1131 =
																				CDR(BgL_cdrzd2127zd2_1124);
																			{	/* R5rs/syntax.scm 250 */
																				obj_t BgL_exz00_2571;

																				BGl_initzd2syntaxzd2expandersz12z12zz__r5_macro_4_3_syntaxz00
																					();
																				BgL_exz00_2571 =
																					BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00
																					(BgL_carzd2115zd2_1118,
																					BgL_arg1312z00_1130,
																					BgL_arg1313z00_1131);
																				BGL_MUTEX_LOCK
																					(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00);
																				{	/* R5rs/syntax.scm 77 */
																					obj_t BgL_tmp2925z00_4562;

																					{	/* R5rs/syntax.scm 78 */
																						obj_t BgL_arg1280z00_2574;

																						BgL_arg1280z00_2574 =
																							MAKE_YOUNG_PAIR
																							(BgL_carzd2115zd2_1118,
																							((obj_t) BgL_exz00_2571));
																						BgL_tmp2925z00_4562 =
																							(BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00
																							=
																							MAKE_YOUNG_PAIR
																							(BgL_arg1280z00_2574,
																								BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00),
																							BUNSPEC);
																					}
																					BGL_MUTEX_UNLOCK
																						(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00);
																					BgL_tmp2925z00_4562;
																				}
																				BGl_installzd2expanderzd2zz__macroz00
																					(BgL_carzd2115zd2_1118,
																					BgL_exz00_2571);
																				return BUNSPEC;
																			}
																		}
																	else
																		{	/* R5rs/syntax.scm 248 */
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_string2790z00zz__r5_macro_4_3_syntaxz00,
																				BGl_string2791z00zz__r5_macro_4_3_syntaxz00,
																				BgL_xz00_9);
																		}
																}
															else
																{	/* R5rs/syntax.scm 248 */
																	return
																		BGl_errorz00zz__errorz00
																		(BGl_string2790z00zz__r5_macro_4_3_syntaxz00,
																		BGl_string2791z00zz__r5_macro_4_3_syntaxz00,
																		BgL_xz00_9);
																}
														}
													else
														{	/* R5rs/syntax.scm 248 */
															return
																BGl_errorz00zz__errorz00
																(BGl_string2790z00zz__r5_macro_4_3_syntaxz00,
																BGl_string2791z00zz__r5_macro_4_3_syntaxz00,
																BgL_xz00_9);
														}
												}
											else
												{	/* R5rs/syntax.scm 248 */
													return
														BGl_errorz00zz__errorz00
														(BGl_string2790z00zz__r5_macro_4_3_syntaxz00,
														BGl_string2791z00zz__r5_macro_4_3_syntaxz00,
														BgL_xz00_9);
												}
										}
									else
										{	/* R5rs/syntax.scm 248 */
											return
												BGl_errorz00zz__errorz00
												(BGl_string2790z00zz__r5_macro_4_3_syntaxz00,
												BGl_string2791z00zz__r5_macro_4_3_syntaxz00,
												BgL_xz00_9);
										}
								}
							else
								{	/* R5rs/syntax.scm 248 */
									return
										BGl_errorz00zz__errorz00
										(BGl_string2790z00zz__r5_macro_4_3_syntaxz00,
										BGl_string2791z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_9);
								}
						}
					else
						{	/* R5rs/syntax.scm 248 */
							return
								BGl_errorz00zz__errorz00
								(BGl_string2790z00zz__r5_macro_4_3_syntaxz00,
								BGl_string2791z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_9);
						}
				}
			else
				{	/* R5rs/syntax.scm 248 */
					return
						BGl_errorz00zz__errorz00
						(BGl_string2790z00zz__r5_macro_4_3_syntaxz00,
						BGl_string2791z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_9);
				}
		}

	}



/* &expand-define-syntax */
	obj_t BGl_z62expandzd2definezd2syntaxz62zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3867, obj_t BgL_xz00_3868, obj_t BgL_ez00_3869)
	{
		{	/* R5rs/syntax.scm 247 */
			{	/* R5rs/syntax.scm 248 */
				obj_t BgL_auxz00_4577;

				if (PROCEDUREP(BgL_ez00_3869))
					{	/* R5rs/syntax.scm 248 */
						BgL_auxz00_4577 = BgL_ez00_3869;
					}
				else
					{
						obj_t BgL_auxz00_4580;

						BgL_auxz00_4580 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2554z00zz__r5_macro_4_3_syntaxz00, BINT(((long) 7950)),
							BGl_string2792z00zz__r5_macro_4_3_syntaxz00,
							BGl_string2557z00zz__r5_macro_4_3_syntaxz00, BgL_ez00_3869);
						FAILURE(BgL_auxz00_4580, BFALSE, BFALSE);
					}
				return
					BGl_expandzd2definezd2syntaxz00zz__r5_macro_4_3_syntaxz00
					(BgL_xz00_3868, BgL_auxz00_4577);
			}
		}

	}



/* expand-letrec-syntax */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2letreczd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_11,
		obj_t BgL_ez00_12)
	{
		{	/* R5rs/syntax.scm 260 */
			{
				obj_t BgL_bsz00_1135;
				obj_t BgL_bodyz00_1136;

				if (PAIRP(BgL_xz00_11))
					{	/* R5rs/syntax.scm 261 */
						obj_t BgL_cdrzd2142zd2_1141;

						BgL_cdrzd2142zd2_1141 = CDR(BgL_xz00_11);
						if (PAIRP(BgL_cdrzd2142zd2_1141))
							{	/* R5rs/syntax.scm 261 */
								BgL_bsz00_1135 = CAR(BgL_cdrzd2142zd2_1141);
								BgL_bodyz00_1136 = CDR(BgL_cdrzd2142zd2_1141);
								{	/* R5rs/syntax.scm 263 */
									obj_t BgL_e1z00_1145;

									BgL_e1z00_1145 =
										BGl_loopze72ze7zz__r5_macro_4_3_syntaxz00(BgL_ez00_12,
										BgL_bsz00_1135);
									{	/* R5rs/syntax.scm 277 */
										obj_t BgL_arg1322z00_1146;

										{	/* R5rs/syntax.scm 277 */
											obj_t BgL_arg1324z00_1147;

											if (NULLP(BgL_bodyz00_1136))
												{	/* R5rs/syntax.scm 277 */
													BgL_arg1324z00_1147 = BNIL;
												}
											else
												{	/* R5rs/syntax.scm 277 */
													obj_t BgL_head1093z00_1150;

													{	/* R5rs/syntax.scm 277 */
														obj_t BgL_res2265z00_2598;

														BgL_res2265z00_2598 = MAKE_YOUNG_PAIR(BNIL, BNIL);
														BgL_head1093z00_1150 = BgL_res2265z00_2598;
													}
													{
														obj_t BgL_l1091z00_1152;
														obj_t BgL_tail1094z00_1153;

														BgL_l1091z00_1152 = BgL_bodyz00_1136;
														BgL_tail1094z00_1153 = BgL_head1093z00_1150;
													BgL_zc3z04anonymousza31326ze3z87_1154:
														if (NULLP(BgL_l1091z00_1152))
															{	/* R5rs/syntax.scm 277 */
																BgL_arg1324z00_1147 = CDR(BgL_head1093z00_1150);
															}
														else
															{	/* R5rs/syntax.scm 277 */
																obj_t BgL_newtail1095z00_1156;

																{	/* R5rs/syntax.scm 277 */
																	obj_t BgL_arg1329z00_1158;

																	{	/* R5rs/syntax.scm 277 */
																		obj_t BgL_xz00_1159;

																		BgL_xz00_1159 =
																			CAR(((obj_t) BgL_l1091z00_1152));
																		{	/* R5rs/syntax.scm 277 */
																			obj_t BgL_arg1330z00_1160;

																			BgL_arg1330z00_1160 =
																				BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00
																				(BgL_xz00_1159, BNIL);
																			BgL_arg1329z00_1158 =
																				PROCEDURE_ENTRY(BgL_e1z00_1145)
																				(BgL_e1z00_1145, BgL_arg1330z00_1160,
																				BgL_e1z00_1145, BEOA);
																		}
																	}
																	{	/* R5rs/syntax.scm 277 */
																		obj_t BgL_res2267z00_2602;

																		BgL_res2267z00_2602 =
																			MAKE_YOUNG_PAIR(BgL_arg1329z00_1158,
																			BNIL);
																		BgL_newtail1095z00_1156 =
																			BgL_res2267z00_2602;
																	}
																}
																SET_CDR(BgL_tail1094z00_1153,
																	BgL_newtail1095z00_1156);
																{	/* R5rs/syntax.scm 277 */
																	obj_t BgL_arg1328z00_1157;

																	BgL_arg1328z00_1157 =
																		CDR(((obj_t) BgL_l1091z00_1152));
																	{
																		obj_t BgL_tail1094z00_4610;
																		obj_t BgL_l1091z00_4609;

																		BgL_l1091z00_4609 = BgL_arg1328z00_1157;
																		BgL_tail1094z00_4610 =
																			BgL_newtail1095z00_1156;
																		BgL_tail1094z00_1153 = BgL_tail1094z00_4610;
																		BgL_l1091z00_1152 = BgL_l1091z00_4609;
																		goto BgL_zc3z04anonymousza31326ze3z87_1154;
																	}
																}
															}
													}
												}
											BgL_arg1322z00_1146 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg1324z00_1147, BNIL);
										}
										return
											MAKE_YOUNG_PAIR
											(BGl_symbol2579z00zz__r5_macro_4_3_syntaxz00,
											BgL_arg1322z00_1146);
									}
								}
							}
						else
							{	/* R5rs/syntax.scm 261 */
								return
									BGl_errorz00zz__errorz00
									(BGl_string2793z00zz__r5_macro_4_3_syntaxz00,
									BGl_string2791z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_11);
							}
					}
				else
					{	/* R5rs/syntax.scm 261 */
						return
							BGl_errorz00zz__errorz00
							(BGl_string2793z00zz__r5_macro_4_3_syntaxz00,
							BGl_string2791z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_11);
					}
			}
		}

	}



/* loop~2 */
	obj_t BGl_loopze72ze7zz__r5_macro_4_3_syntaxz00(obj_t BgL_ez00_3905,
		obj_t BgL_bsz00_1163)
	{
		{	/* R5rs/syntax.scm 263 */
			if (NULLP(BgL_bsz00_1163))
				{	/* R5rs/syntax.scm 264 */
					return BgL_ez00_3905;
				}
			else
				{
					obj_t BgL_mz00_1166;
					obj_t BgL_lsz00_1167;
					obj_t BgL_rulesz00_1168;

					{	/* R5rs/syntax.scm 266 */
						obj_t BgL_ezd2151zd2_1171;

						BgL_ezd2151zd2_1171 = CAR(((obj_t) BgL_bsz00_1163));
						if (PAIRP(BgL_ezd2151zd2_1171))
							{	/* R5rs/syntax.scm 266 */
								obj_t BgL_carzd2158zd2_1173;
								obj_t BgL_cdrzd2159zd2_1174;

								BgL_carzd2158zd2_1173 = CAR(BgL_ezd2151zd2_1171);
								BgL_cdrzd2159zd2_1174 = CDR(BgL_ezd2151zd2_1171);
								if (SYMBOLP(BgL_carzd2158zd2_1173))
									{	/* R5rs/syntax.scm 266 */
										if (PAIRP(BgL_cdrzd2159zd2_1174))
											{	/* R5rs/syntax.scm 266 */
												obj_t BgL_carzd2165zd2_1177;

												BgL_carzd2165zd2_1177 = CAR(BgL_cdrzd2159zd2_1174);
												if (PAIRP(BgL_carzd2165zd2_1177))
													{	/* R5rs/syntax.scm 266 */
														obj_t BgL_cdrzd2170zd2_1179;

														BgL_cdrzd2170zd2_1179 = CDR(BgL_carzd2165zd2_1177);
														if (
															(CAR(BgL_carzd2165zd2_1177) ==
																BGl_symbol2788z00zz__r5_macro_4_3_syntaxz00))
															{	/* R5rs/syntax.scm 266 */
																if (PAIRP(BgL_cdrzd2170zd2_1179))
																	{	/* R5rs/syntax.scm 266 */
																		if (NULLP(CDR(BgL_cdrzd2159zd2_1174)))
																			{	/* R5rs/syntax.scm 266 */
																				BgL_mz00_1166 = BgL_carzd2158zd2_1173;
																				BgL_lsz00_1167 =
																					CAR(BgL_cdrzd2170zd2_1179);
																				BgL_rulesz00_1168 =
																					CDR(BgL_cdrzd2170zd2_1179);
																				{	/* R5rs/syntax.scm 268 */
																					obj_t BgL_e3z00_1189;
																					obj_t BgL_e4z00_1190;

																					BGl_initzd2syntaxzd2expandersz12z12zz__r5_macro_4_3_syntaxz00
																						();
																					BgL_e3z00_1189 =
																						BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00
																						(BgL_mz00_1166, BgL_lsz00_1167,
																						BgL_rulesz00_1168);
																					{	/* R5rs/syntax.scm 269 */
																						obj_t BgL_arg1351z00_1199;

																						BgL_arg1351z00_1199 =
																							CDR(((obj_t) BgL_bsz00_1163));
																						BgL_e4z00_1190 =
																							BGl_loopze72ze7zz__r5_macro_4_3_syntaxz00
																							(BgL_ez00_3905,
																							BgL_arg1351z00_1199);
																					}
																					{	/* R5rs/syntax.scm 270 */
																						obj_t
																							BgL_zc3z04anonymousza31346ze3z87_3870;
																						BgL_zc3z04anonymousza31346ze3z87_3870
																							=
																							MAKE_FX_PROCEDURE
																							(BGl_z62zc3z04anonymousza31346ze3ze5zz__r5_macro_4_3_syntaxz00,
																							(int) (((long) 2)),
																							(int) (((long) 3)));
																						PROCEDURE_SET
																							(BgL_zc3z04anonymousza31346ze3z87_3870,
																							(int) (((long) 0)),
																							BgL_e4z00_1190);
																						PROCEDURE_SET
																							(BgL_zc3z04anonymousza31346ze3z87_3870,
																							(int) (((long) 1)),
																							BgL_e3z00_1189);
																						PROCEDURE_SET
																							(BgL_zc3z04anonymousza31346ze3z87_3870,
																							(int) (((long) 2)),
																							BgL_mz00_1166);
																						return
																							BgL_zc3z04anonymousza31346ze3z87_3870;
																					}
																				}
																			}
																		else
																			{	/* R5rs/syntax.scm 266 */
																				return
																					BGl_errorz00zz__errorz00
																					(BGl_string2794z00zz__r5_macro_4_3_syntaxz00,
																					BGl_string2795z00zz__r5_macro_4_3_syntaxz00,
																					BgL_bsz00_1163);
																			}
																	}
																else
																	{	/* R5rs/syntax.scm 266 */
																		return
																			BGl_errorz00zz__errorz00
																			(BGl_string2794z00zz__r5_macro_4_3_syntaxz00,
																			BGl_string2795z00zz__r5_macro_4_3_syntaxz00,
																			BgL_bsz00_1163);
																	}
															}
														else
															{	/* R5rs/syntax.scm 266 */
																return
																	BGl_errorz00zz__errorz00
																	(BGl_string2794z00zz__r5_macro_4_3_syntaxz00,
																	BGl_string2795z00zz__r5_macro_4_3_syntaxz00,
																	BgL_bsz00_1163);
															}
													}
												else
													{	/* R5rs/syntax.scm 266 */
														return
															BGl_errorz00zz__errorz00
															(BGl_string2794z00zz__r5_macro_4_3_syntaxz00,
															BGl_string2795z00zz__r5_macro_4_3_syntaxz00,
															BgL_bsz00_1163);
													}
											}
										else
											{	/* R5rs/syntax.scm 266 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string2794z00zz__r5_macro_4_3_syntaxz00,
													BGl_string2795z00zz__r5_macro_4_3_syntaxz00,
													BgL_bsz00_1163);
											}
									}
								else
									{	/* R5rs/syntax.scm 266 */
										return
											BGl_errorz00zz__errorz00
											(BGl_string2794z00zz__r5_macro_4_3_syntaxz00,
											BGl_string2795z00zz__r5_macro_4_3_syntaxz00,
											BgL_bsz00_1163);
									}
							}
						else
							{	/* R5rs/syntax.scm 266 */
								return
									BGl_errorz00zz__errorz00
									(BGl_string2794z00zz__r5_macro_4_3_syntaxz00,
									BGl_string2795z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_1163);
							}
					}
				}
		}

	}



/* &expand-letrec-syntax */
	obj_t BGl_z62expandzd2letreczd2syntaxz62zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3871, obj_t BgL_xz00_3872, obj_t BgL_ez00_3873)
	{
		{	/* R5rs/syntax.scm 260 */
			{	/* R5rs/syntax.scm 261 */
				obj_t BgL_auxz00_4664;

				if (PROCEDUREP(BgL_ez00_3873))
					{	/* R5rs/syntax.scm 261 */
						BgL_auxz00_4664 = BgL_ez00_3873;
					}
				else
					{
						obj_t BgL_auxz00_4667;

						BgL_auxz00_4667 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2554z00zz__r5_macro_4_3_syntaxz00, BINT(((long) 8532)),
							BGl_string2796z00zz__r5_macro_4_3_syntaxz00,
							BGl_string2557z00zz__r5_macro_4_3_syntaxz00, BgL_ez00_3873);
						FAILURE(BgL_auxz00_4667, BFALSE, BFALSE);
					}
				return
					BGl_expandzd2letreczd2syntaxz00zz__r5_macro_4_3_syntaxz00
					(BgL_xz00_3872, BgL_auxz00_4664);
			}
		}

	}



/* &<@anonymous:1346> */
	obj_t BGl_z62zc3z04anonymousza31346ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3874, obj_t BgL_xz00_3878, obj_t BgL_e2z00_3879)
	{
		{	/* R5rs/syntax.scm 270 */
			{	/* R5rs/syntax.scm 271 */
				obj_t BgL_e4z00_3875;
				obj_t BgL_e3z00_3876;
				obj_t BgL_mz00_3877;

				BgL_e4z00_3875 = PROCEDURE_REF(BgL_envz00_3874, (int) (((long) 0)));
				BgL_e3z00_3876 = PROCEDURE_REF(BgL_envz00_3874, (int) (((long) 1)));
				BgL_mz00_3877 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3874, (int) (((long) 2))));
				{	/* R5rs/syntax.scm 271 */
					bool_t BgL_test2940z00_4679;

					if (PAIRP(BgL_xz00_3878))
						{	/* R5rs/syntax.scm 271 */
							BgL_test2940z00_4679 =
								BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00(BgL_mz00_3877,
								CAR(BgL_xz00_3878));
						}
					else
						{	/* R5rs/syntax.scm 271 */
							BgL_test2940z00_4679 = ((bool_t) 0);
						}
					if (BgL_test2940z00_4679)
						{	/* R5rs/syntax.scm 271 */
							return
								PROCEDURE_ENTRY(BgL_e3z00_3876) (BgL_e3z00_3876, BgL_xz00_3878,
								BgL_e2z00_3879, BEOA);
						}
					else
						{	/* R5rs/syntax.scm 271 */
							return
								PROCEDURE_ENTRY(BgL_e4z00_3875) (BgL_e4z00_3875, BgL_xz00_3878,
								BgL_e2z00_3879, BEOA);
						}
				}
			}
		}

	}



/* expand-let-syntax */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2letzd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_13,
		obj_t BgL_ez00_14)
	{
		{	/* R5rs/syntax.scm 284 */
			{
				obj_t BgL_bsz00_1201;
				obj_t BgL_bodyz00_1202;

				if (PAIRP(BgL_xz00_13))
					{	/* R5rs/syntax.scm 285 */
						obj_t BgL_cdrzd2185zd2_1207;

						BgL_cdrzd2185zd2_1207 = CDR(BgL_xz00_13);
						if (PAIRP(BgL_cdrzd2185zd2_1207))
							{	/* R5rs/syntax.scm 285 */
								BgL_bsz00_1201 = CAR(BgL_cdrzd2185zd2_1207);
								BgL_bodyz00_1202 = CDR(BgL_cdrzd2185zd2_1207);
								{	/* R5rs/syntax.scm 287 */
									obj_t BgL_e1z00_1211;

									BgL_e1z00_1211 =
										BGl_loopze71ze7zz__r5_macro_4_3_syntaxz00(BgL_ez00_14,
										BgL_bsz00_1201);
									{	/* R5rs/syntax.scm 301 */
										obj_t BgL_arg1356z00_1212;

										{	/* R5rs/syntax.scm 301 */
											obj_t BgL_arg1357z00_1213;

											if (NULLP(BgL_bodyz00_1202))
												{	/* R5rs/syntax.scm 301 */
													BgL_arg1357z00_1213 = BNIL;
												}
											else
												{	/* R5rs/syntax.scm 301 */
													obj_t BgL_head1098z00_1216;

													{	/* R5rs/syntax.scm 301 */
														obj_t BgL_res2279z00_2633;

														BgL_res2279z00_2633 = MAKE_YOUNG_PAIR(BNIL, BNIL);
														BgL_head1098z00_1216 = BgL_res2279z00_2633;
													}
													{
														obj_t BgL_l1096z00_1218;
														obj_t BgL_tail1099z00_1219;

														BgL_l1096z00_1218 = BgL_bodyz00_1202;
														BgL_tail1099z00_1219 = BgL_head1098z00_1216;
													BgL_zc3z04anonymousza31359ze3z87_1220:
														if (NULLP(BgL_l1096z00_1218))
															{	/* R5rs/syntax.scm 301 */
																BgL_arg1357z00_1213 = CDR(BgL_head1098z00_1216);
															}
														else
															{	/* R5rs/syntax.scm 301 */
																obj_t BgL_newtail1100z00_1222;

																{	/* R5rs/syntax.scm 301 */
																	obj_t BgL_arg1362z00_1224;

																	{	/* R5rs/syntax.scm 301 */
																		obj_t BgL_xz00_1225;

																		BgL_xz00_1225 =
																			CAR(((obj_t) BgL_l1096z00_1218));
																		{	/* R5rs/syntax.scm 301 */
																			obj_t BgL_arg1363z00_1226;

																			BgL_arg1363z00_1226 =
																				BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00
																				(BgL_xz00_1225, BNIL);
																			BgL_arg1362z00_1224 =
																				PROCEDURE_ENTRY(BgL_e1z00_1211)
																				(BgL_e1z00_1211, BgL_arg1363z00_1226,
																				BgL_e1z00_1211, BEOA);
																		}
																	}
																	{	/* R5rs/syntax.scm 301 */
																		obj_t BgL_res2281z00_2637;

																		BgL_res2281z00_2637 =
																			MAKE_YOUNG_PAIR(BgL_arg1362z00_1224,
																			BNIL);
																		BgL_newtail1100z00_1222 =
																			BgL_res2281z00_2637;
																	}
																}
																SET_CDR(BgL_tail1099z00_1219,
																	BgL_newtail1100z00_1222);
																{	/* R5rs/syntax.scm 301 */
																	obj_t BgL_arg1361z00_1223;

																	BgL_arg1361z00_1223 =
																		CDR(((obj_t) BgL_l1096z00_1218));
																	{
																		obj_t BgL_tail1099z00_4719;
																		obj_t BgL_l1096z00_4718;

																		BgL_l1096z00_4718 = BgL_arg1361z00_1223;
																		BgL_tail1099z00_4719 =
																			BgL_newtail1100z00_1222;
																		BgL_tail1099z00_1219 = BgL_tail1099z00_4719;
																		BgL_l1096z00_1218 = BgL_l1096z00_4718;
																		goto BgL_zc3z04anonymousza31359ze3z87_1220;
																	}
																}
															}
													}
												}
											BgL_arg1356z00_1212 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg1357z00_1213, BNIL);
										}
										return
											MAKE_YOUNG_PAIR
											(BGl_symbol2579z00zz__r5_macro_4_3_syntaxz00,
											BgL_arg1356z00_1212);
									}
								}
							}
						else
							{	/* R5rs/syntax.scm 285 */
								return
									BGl_errorz00zz__errorz00
									(BGl_string2794z00zz__r5_macro_4_3_syntaxz00,
									BGl_string2791z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_13);
							}
					}
				else
					{	/* R5rs/syntax.scm 285 */
						return
							BGl_errorz00zz__errorz00
							(BGl_string2794z00zz__r5_macro_4_3_syntaxz00,
							BGl_string2791z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_13);
					}
			}
		}

	}



/* loop~1 */
	obj_t BGl_loopze71ze7zz__r5_macro_4_3_syntaxz00(obj_t BgL_ez00_3904,
		obj_t BgL_bsz00_1229)
	{
		{	/* R5rs/syntax.scm 287 */
			if (NULLP(BgL_bsz00_1229))
				{	/* R5rs/syntax.scm 288 */
					return BgL_ez00_3904;
				}
			else
				{
					obj_t BgL_mz00_1232;
					obj_t BgL_lsz00_1233;
					obj_t BgL_rulesz00_1234;

					{	/* R5rs/syntax.scm 290 */
						obj_t BgL_ezd2194zd2_1237;

						BgL_ezd2194zd2_1237 = CAR(((obj_t) BgL_bsz00_1229));
						if (PAIRP(BgL_ezd2194zd2_1237))
							{	/* R5rs/syntax.scm 290 */
								obj_t BgL_carzd2201zd2_1239;
								obj_t BgL_cdrzd2202zd2_1240;

								BgL_carzd2201zd2_1239 = CAR(BgL_ezd2194zd2_1237);
								BgL_cdrzd2202zd2_1240 = CDR(BgL_ezd2194zd2_1237);
								if (SYMBOLP(BgL_carzd2201zd2_1239))
									{	/* R5rs/syntax.scm 290 */
										if (PAIRP(BgL_cdrzd2202zd2_1240))
											{	/* R5rs/syntax.scm 290 */
												obj_t BgL_carzd2208zd2_1243;

												BgL_carzd2208zd2_1243 = CAR(BgL_cdrzd2202zd2_1240);
												if (PAIRP(BgL_carzd2208zd2_1243))
													{	/* R5rs/syntax.scm 290 */
														obj_t BgL_cdrzd2213zd2_1245;

														BgL_cdrzd2213zd2_1245 = CDR(BgL_carzd2208zd2_1243);
														if (
															(CAR(BgL_carzd2208zd2_1243) ==
																BGl_symbol2788z00zz__r5_macro_4_3_syntaxz00))
															{	/* R5rs/syntax.scm 290 */
																if (PAIRP(BgL_cdrzd2213zd2_1245))
																	{	/* R5rs/syntax.scm 290 */
																		if (NULLP(CDR(BgL_cdrzd2202zd2_1240)))
																			{	/* R5rs/syntax.scm 290 */
																				BgL_mz00_1232 = BgL_carzd2201zd2_1239;
																				BgL_lsz00_1233 =
																					CAR(BgL_cdrzd2213zd2_1245);
																				BgL_rulesz00_1234 =
																					CDR(BgL_cdrzd2213zd2_1245);
																				{	/* R5rs/syntax.scm 292 */
																					obj_t BgL_e3z00_1255;
																					obj_t BgL_e4z00_1256;

																					BGl_initzd2syntaxzd2expandersz12z12zz__r5_macro_4_3_syntaxz00
																						();
																					BgL_e3z00_1255 =
																						BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00
																						(BgL_mz00_1232, BgL_lsz00_1233,
																						BgL_rulesz00_1234);
																					{	/* R5rs/syntax.scm 293 */
																						obj_t BgL_arg1384z00_1265;

																						BgL_arg1384z00_1265 =
																							CDR(((obj_t) BgL_bsz00_1229));
																						BgL_e4z00_1256 =
																							BGl_loopze71ze7zz__r5_macro_4_3_syntaxz00
																							(BgL_ez00_3904,
																							BgL_arg1384z00_1265);
																					}
																					{	/* R5rs/syntax.scm 294 */
																						obj_t
																							BgL_zc3z04anonymousza31379ze3z87_3880;
																						BgL_zc3z04anonymousza31379ze3z87_3880
																							=
																							MAKE_FX_PROCEDURE
																							(BGl_z62zc3z04anonymousza31379ze3ze5zz__r5_macro_4_3_syntaxz00,
																							(int) (((long) 2)),
																							(int) (((long) 4)));
																						PROCEDURE_SET
																							(BgL_zc3z04anonymousza31379ze3z87_3880,
																							(int) (((long) 0)),
																							BgL_e4z00_1256);
																						PROCEDURE_SET
																							(BgL_zc3z04anonymousza31379ze3z87_3880,
																							(int) (((long) 1)),
																							BgL_e3z00_1255);
																						PROCEDURE_SET
																							(BgL_zc3z04anonymousza31379ze3z87_3880,
																							(int) (((long) 2)),
																							BgL_ez00_3904);
																						PROCEDURE_SET
																							(BgL_zc3z04anonymousza31379ze3z87_3880,
																							(int) (((long) 3)),
																							BgL_mz00_1232);
																						return
																							BgL_zc3z04anonymousza31379ze3z87_3880;
																					}
																				}
																			}
																		else
																			{	/* R5rs/syntax.scm 290 */
																				return
																					BGl_errorz00zz__errorz00
																					(BGl_string2794z00zz__r5_macro_4_3_syntaxz00,
																					BGl_string2795z00zz__r5_macro_4_3_syntaxz00,
																					BgL_bsz00_1229);
																			}
																	}
																else
																	{	/* R5rs/syntax.scm 290 */
																		return
																			BGl_errorz00zz__errorz00
																			(BGl_string2794z00zz__r5_macro_4_3_syntaxz00,
																			BGl_string2795z00zz__r5_macro_4_3_syntaxz00,
																			BgL_bsz00_1229);
																	}
															}
														else
															{	/* R5rs/syntax.scm 290 */
																return
																	BGl_errorz00zz__errorz00
																	(BGl_string2794z00zz__r5_macro_4_3_syntaxz00,
																	BGl_string2795z00zz__r5_macro_4_3_syntaxz00,
																	BgL_bsz00_1229);
															}
													}
												else
													{	/* R5rs/syntax.scm 290 */
														return
															BGl_errorz00zz__errorz00
															(BGl_string2794z00zz__r5_macro_4_3_syntaxz00,
															BGl_string2795z00zz__r5_macro_4_3_syntaxz00,
															BgL_bsz00_1229);
													}
											}
										else
											{	/* R5rs/syntax.scm 290 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string2794z00zz__r5_macro_4_3_syntaxz00,
													BGl_string2795z00zz__r5_macro_4_3_syntaxz00,
													BgL_bsz00_1229);
											}
									}
								else
									{	/* R5rs/syntax.scm 290 */
										return
											BGl_errorz00zz__errorz00
											(BGl_string2794z00zz__r5_macro_4_3_syntaxz00,
											BGl_string2795z00zz__r5_macro_4_3_syntaxz00,
											BgL_bsz00_1229);
									}
							}
						else
							{	/* R5rs/syntax.scm 290 */
								return
									BGl_errorz00zz__errorz00
									(BGl_string2794z00zz__r5_macro_4_3_syntaxz00,
									BGl_string2795z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_1229);
							}
					}
				}
		}

	}



/* &expand-let-syntax */
	obj_t BGl_z62expandzd2letzd2syntaxz62zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3881, obj_t BgL_xz00_3882, obj_t BgL_ez00_3883)
	{
		{	/* R5rs/syntax.scm 284 */
			{	/* R5rs/syntax.scm 285 */
				obj_t BgL_auxz00_4775;

				if (PROCEDUREP(BgL_ez00_3883))
					{	/* R5rs/syntax.scm 285 */
						BgL_auxz00_4775 = BgL_ez00_3883;
					}
				else
					{
						obj_t BgL_auxz00_4778;

						BgL_auxz00_4778 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2554z00zz__r5_macro_4_3_syntaxz00, BINT(((long) 9383)),
							BGl_string2797z00zz__r5_macro_4_3_syntaxz00,
							BGl_string2557z00zz__r5_macro_4_3_syntaxz00, BgL_ez00_3883);
						FAILURE(BgL_auxz00_4778, BFALSE, BFALSE);
					}
				return
					BGl_expandzd2letzd2syntaxz00zz__r5_macro_4_3_syntaxz00(BgL_xz00_3882,
					BgL_auxz00_4775);
			}
		}

	}



/* &<@anonymous:1379> */
	obj_t BGl_z62zc3z04anonymousza31379ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3884, obj_t BgL_xz00_3889, obj_t BgL_e2z00_3890)
	{
		{	/* R5rs/syntax.scm 294 */
			{	/* R5rs/syntax.scm 295 */
				obj_t BgL_e4z00_3885;
				obj_t BgL_e3z00_3886;
				obj_t BgL_ez00_3887;
				obj_t BgL_mz00_3888;

				BgL_e4z00_3885 = PROCEDURE_REF(BgL_envz00_3884, (int) (((long) 0)));
				BgL_e3z00_3886 = PROCEDURE_REF(BgL_envz00_3884, (int) (((long) 1)));
				BgL_ez00_3887 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3884, (int) (((long) 2))));
				BgL_mz00_3888 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3884, (int) (((long) 3))));
				{	/* R5rs/syntax.scm 295 */
					bool_t BgL_test2955z00_4793;

					if (PAIRP(BgL_xz00_3889))
						{	/* R5rs/syntax.scm 295 */
							BgL_test2955z00_4793 =
								BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00(BgL_mz00_3888,
								CAR(BgL_xz00_3889));
						}
					else
						{	/* R5rs/syntax.scm 295 */
							BgL_test2955z00_4793 = ((bool_t) 0);
						}
					if (BgL_test2955z00_4793)
						{	/* R5rs/syntax.scm 295 */
							return
								PROCEDURE_ENTRY(BgL_e3z00_3886) (BgL_e3z00_3886, BgL_xz00_3889,
								BgL_ez00_3887, BEOA);
						}
					else
						{	/* R5rs/syntax.scm 295 */
							return
								PROCEDURE_ENTRY(BgL_e4z00_3885) (BgL_e4z00_3885, BgL_xz00_3889,
								BgL_e2z00_3890, BEOA);
						}
				}
			}
		}

	}



/* syntax-rules->expander */
	BGL_EXPORTED_DEF obj_t
		BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_keywordz00_18, obj_t BgL_literalsz00_19, obj_t BgL_rulesz00_20)
	{
		{	/* R5rs/syntax.scm 315 */
			{	/* R5rs/syntax.scm 316 */
				obj_t BgL_kz00_1267;

				BgL_kz00_1267 = MAKE_YOUNG_PAIR(BgL_keywordz00_18, BgL_literalsz00_19);
				if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_rulesz00_20))
					{	/* R5rs/syntax.scm 318 */
						obj_t BgL_zc3z04anonymousza31386ze3z87_3891;

						BgL_zc3z04anonymousza31386ze3z87_3891 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31386ze3ze5zz__r5_macro_4_3_syntaxz00,
							(int) (((long) 2)), (int) (((long) 3)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31386ze3z87_3891,
							(int) (((long) 0)), BgL_kz00_1267);
						PROCEDURE_SET(BgL_zc3z04anonymousza31386ze3z87_3891,
							(int) (((long) 1)), BgL_keywordz00_18);
						PROCEDURE_SET(BgL_zc3z04anonymousza31386ze3z87_3891,
							(int) (((long) 2)), BgL_rulesz00_20);
						return BgL_zc3z04anonymousza31386ze3z87_3891;
					}
				else
					{	/* R5rs/syntax.scm 317 */
						return
							BGl_errorz00zz__errorz00(BgL_keywordz00_18,
							BGl_string2798z00zz__r5_macro_4_3_syntaxz00, BgL_rulesz00_20);
					}
			}
		}

	}



/* &syntax-rules->expander */
	obj_t BGl_z62syntaxzd2ruleszd2ze3expanderz81zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3892, obj_t BgL_keywordz00_3893, obj_t BgL_literalsz00_3894,
		obj_t BgL_rulesz00_3895)
	{
		{	/* R5rs/syntax.scm 315 */
			{	/* R5rs/syntax.scm 316 */
				obj_t BgL_auxz00_4835;
				obj_t BgL_auxz00_4828;
				obj_t BgL_auxz00_4821;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_rulesz00_3895))
					{	/* R5rs/syntax.scm 316 */
						BgL_auxz00_4835 = BgL_rulesz00_3895;
					}
				else
					{
						obj_t BgL_auxz00_4838;

						BgL_auxz00_4838 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2554z00zz__r5_macro_4_3_syntaxz00,
							BINT(((long) 10618)), BGl_string2799z00zz__r5_macro_4_3_syntaxz00,
							BGl_string2800z00zz__r5_macro_4_3_syntaxz00, BgL_rulesz00_3895);
						FAILURE(BgL_auxz00_4838, BFALSE, BFALSE);
					}
				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_literalsz00_3894))
					{	/* R5rs/syntax.scm 316 */
						BgL_auxz00_4828 = BgL_literalsz00_3894;
					}
				else
					{
						obj_t BgL_auxz00_4831;

						BgL_auxz00_4831 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2554z00zz__r5_macro_4_3_syntaxz00,
							BINT(((long) 10618)), BGl_string2799z00zz__r5_macro_4_3_syntaxz00,
							BGl_string2800z00zz__r5_macro_4_3_syntaxz00,
							BgL_literalsz00_3894);
						FAILURE(BgL_auxz00_4831, BFALSE, BFALSE);
					}
				if (SYMBOLP(BgL_keywordz00_3893))
					{	/* R5rs/syntax.scm 316 */
						BgL_auxz00_4821 = BgL_keywordz00_3893;
					}
				else
					{
						obj_t BgL_auxz00_4824;

						BgL_auxz00_4824 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2554z00zz__r5_macro_4_3_syntaxz00,
							BINT(((long) 10618)), BGl_string2799z00zz__r5_macro_4_3_syntaxz00,
							BGl_string2556z00zz__r5_macro_4_3_syntaxz00, BgL_keywordz00_3893);
						FAILURE(BgL_auxz00_4824, BFALSE, BFALSE);
					}
				return
					BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00
					(BgL_auxz00_4821, BgL_auxz00_4828, BgL_auxz00_4835);
			}
		}

	}



/* &<@anonymous:1386> */
	obj_t BGl_z62zc3z04anonymousza31386ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3896, obj_t BgL_xz00_3900, obj_t BgL_ez00_3901)
	{
		{	/* R5rs/syntax.scm 318 */
			{	/* R5rs/syntax.scm 320 */
				obj_t BgL_kz00_3897;
				obj_t BgL_keywordz00_3898;
				obj_t BgL_rulesz00_3899;

				BgL_kz00_3897 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3896, (int) (((long) 0))));
				BgL_keywordz00_3898 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3896, (int) (((long) 1))));
				BgL_rulesz00_3899 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3896, (int) (((long) 2))));
				{
					obj_t BgL_rulesz00_3924;

					BgL_rulesz00_3924 = BgL_rulesz00_3899;
				BgL_loopz00_3923:
					if (NULLP(BgL_rulesz00_3924))
						{	/* R5rs/syntax.scm 320 */
							return
								BGl_errorz00zz__errorz00(BgL_keywordz00_3898,
								BGl_string2801z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_3900);
						}
					else
						{
							obj_t BgL_patternz00_3926;
							obj_t BgL_templatez00_3927;

							{	/* R5rs/syntax.scm 322 */
								obj_t BgL_ezd2222zd2_3933;

								BgL_ezd2222zd2_3933 = CAR(((obj_t) BgL_rulesz00_3924));
								if (PAIRP(BgL_ezd2222zd2_3933))
									{	/* R5rs/syntax.scm 322 */
										obj_t BgL_cdrzd2228zd2_3934;

										BgL_cdrzd2228zd2_3934 = CDR(BgL_ezd2222zd2_3933);
										if (PAIRP(BgL_cdrzd2228zd2_3934))
											{	/* R5rs/syntax.scm 322 */
												if (NULLP(CDR(BgL_cdrzd2228zd2_3934)))
													{	/* R5rs/syntax.scm 322 */
														BgL_patternz00_3926 = CAR(BgL_ezd2222zd2_3933);
														BgL_templatez00_3927 = CAR(BgL_cdrzd2228zd2_3934);
														if (CBOOL
															(BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00
																(BgL_keywordz00_3898, BgL_patternz00_3926,
																	BgL_xz00_3900, BgL_kz00_3897)))
															{	/* R5rs/syntax.scm 326 */
																obj_t BgL_fsz00_3928;

																BgL_fsz00_3928 =
																	BGl_syntaxzd2getzd2framesz00zz__r5_macro_4_3_syntaxz00
																	(BgL_patternz00_3926, BgL_xz00_3900,
																	BgL_kz00_3897);
																{	/* R5rs/syntax.scm 326 */
																	obj_t BgL_tz00_3929;

																	BgL_tz00_3929 =
																		BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00
																		(BgL_templatez00_3927, BgL_fsz00_3928,
																		BgL_kz00_3897);
																	{	/* R5rs/syntax.scm 327 */
																		obj_t BgL_tez00_3930;

																		BgL_tez00_3930 =
																			BGl_syntaxzd2expanderzd2zz__r5_macro_4_3_syntaxz00
																			(BgL_tz00_3929,
																			BGl_syntaxzd2expanderzd2envz00zz__r5_macro_4_3_syntaxz00);
																		{	/* R5rs/syntax.scm 328 */

																			{	/* R5rs/syntax.scm 329 */
																				obj_t BgL_arg1397z00_3931;

																				BgL_arg1397z00_3931 =
																					BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00
																					(BgL_tez00_3930, BNIL);
																				return
																					PROCEDURE_ENTRY(BgL_ez00_3901)
																					(BgL_ez00_3901, BgL_arg1397z00_3931,
																					BgL_ez00_3901, BEOA);
																			}
																		}
																	}
																}
															}
														else
															{	/* R5rs/syntax.scm 330 */
																obj_t BgL_arg1398z00_3932;

																BgL_arg1398z00_3932 =
																	CDR(((obj_t) BgL_rulesz00_3924));
																{
																	obj_t BgL_rulesz00_4879;

																	BgL_rulesz00_4879 = BgL_arg1398z00_3932;
																	BgL_rulesz00_3924 = BgL_rulesz00_4879;
																	goto BgL_loopz00_3923;
																}
															}
													}
												else
													{	/* R5rs/syntax.scm 322 */
														return
															BGl_errorz00zz__errorz00(BgL_keywordz00_3898,
															BGl_string2802z00zz__r5_macro_4_3_syntaxz00,
															BgL_ezd2222zd2_3933);
													}
											}
										else
											{	/* R5rs/syntax.scm 322 */
												return
													BGl_errorz00zz__errorz00(BgL_keywordz00_3898,
													BGl_string2802z00zz__r5_macro_4_3_syntaxz00,
													BgL_ezd2222zd2_3933);
											}
									}
								else
									{	/* R5rs/syntax.scm 322 */
										return
											BGl_errorz00zz__errorz00(BgL_keywordz00_3898,
											BGl_string2802z00zz__r5_macro_4_3_syntaxz00,
											BgL_ezd2222zd2_3933);
									}
							}
						}
				}
			}
		}

	}



/* syntax-matches-pattern? */
	obj_t BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_keywordz00_21, obj_t BgL_pz00_22, obj_t BgL_ez00_23, obj_t BgL_kz00_24)
	{
		{	/* R5rs/syntax.scm 338 */
		BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00:
			if (BGl_ellipsiszf3zf3zz__r5_macro_4_3_syntaxz00(BgL_pz00_22))
				{	/* R5rs/syntax.scm 340 */
					if ((bgl_list_length(BgL_pz00_22) == ((long) 2)))
						{	/* R5rs/syntax.scm 341 */
							if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_ez00_23))
								{	/* R5rs/syntax.scm 344 */
									obj_t BgL_p0z00_1301;

									BgL_p0z00_1301 = CAR(((obj_t) BgL_pz00_22));
									{
										obj_t BgL_l1101z00_1303;

										{	/* R5rs/syntax.scm 345 */
											bool_t BgL_tmpz00_4894;

											BgL_l1101z00_1303 = BgL_ez00_23;
										BgL_zc3z04anonymousza31403ze3z87_1304:
											if (NULLP(BgL_l1101z00_1303))
												{	/* R5rs/syntax.scm 345 */
													BgL_tmpz00_4894 = ((bool_t) 1);
												}
											else
												{	/* R5rs/syntax.scm 346 */
													obj_t BgL_nvz00_1306;

													{	/* R5rs/syntax.scm 346 */
														obj_t BgL_eiz00_1309;

														BgL_eiz00_1309 = CAR(((obj_t) BgL_l1101z00_1303));
														BgL_nvz00_1306 =
															BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00
															(BgL_keywordz00_21, BgL_p0z00_1301,
															BgL_eiz00_1309, BgL_kz00_24);
													}
													if (CBOOL(BgL_nvz00_1306))
														{	/* R5rs/syntax.scm 345 */
															obj_t BgL_arg1405z00_1308;

															BgL_arg1405z00_1308 =
																CDR(((obj_t) BgL_l1101z00_1303));
															{
																obj_t BgL_l1101z00_4904;

																BgL_l1101z00_4904 = BgL_arg1405z00_1308;
																BgL_l1101z00_1303 = BgL_l1101z00_4904;
																goto BgL_zc3z04anonymousza31403ze3z87_1304;
															}
														}
													else
														{	/* R5rs/syntax.scm 345 */
															BgL_tmpz00_4894 = ((bool_t) 0);
														}
												}
											return BBOOL(BgL_tmpz00_4894);
										}
									}
								}
							else
								{	/* R5rs/syntax.scm 343 */
									return BFALSE;
								}
						}
					else
						{	/* R5rs/syntax.scm 341 */
							return
								BGl_errorz00zz__errorz00(BgL_keywordz00_21,
								BGl_string2803z00zz__r5_macro_4_3_syntaxz00, BgL_pz00_22);
						}
				}
			else
				{	/* R5rs/syntax.scm 340 */
					if (PAIRP(BgL_pz00_22))
						{	/* R5rs/syntax.scm 348 */
							if (PAIRP(BgL_ez00_23))
								{	/* R5rs/syntax.scm 350 */
									obj_t BgL__andtest_1043z00_1314;

									BgL__andtest_1043z00_1314 =
										BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00
										(BgL_keywordz00_21, CAR(BgL_pz00_22), CAR(BgL_ez00_23),
										BgL_kz00_24);
									if (CBOOL(BgL__andtest_1043z00_1314))
										{
											obj_t BgL_ez00_4918;
											obj_t BgL_pz00_4916;

											BgL_pz00_4916 = CDR(BgL_pz00_22);
											BgL_ez00_4918 = CDR(BgL_ez00_23);
											BgL_ez00_23 = BgL_ez00_4918;
											BgL_pz00_22 = BgL_pz00_4916;
											goto
												BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00;
										}
									else
										{	/* R5rs/syntax.scm 350 */
											return BFALSE;
										}
								}
							else
								{	/* R5rs/syntax.scm 349 */
									return BFALSE;
								}
						}
					else
						{	/* R5rs/syntax.scm 348 */
							if (SYMBOLP(BgL_pz00_22))
								{	/* R5rs/syntax.scm 352 */
									if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
											(BgL_pz00_22, BgL_kz00_24)))
										{	/* R5rs/syntax.scm 353 */
											return
												BBOOL(BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00
												(BgL_ez00_23, BgL_pz00_22));
										}
									else
										{	/* R5rs/syntax.scm 353 */
											return BTRUE;
										}
								}
							else
								{	/* R5rs/syntax.scm 352 */
									return
										BBOOL(BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_pz00_22,
											BgL_ez00_23));
								}
						}
				}
		}

	}



/* syntax-get-frames */
	obj_t BGl_syntaxzd2getzd2framesz00zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_pz00_25, obj_t BgL_ez00_26, obj_t BgL_kz00_27)
	{
		{	/* R5rs/syntax.scm 360 */
			if (BGl_ellipsiszf3zf3zz__r5_macro_4_3_syntaxz00(BgL_pz00_25))
				{	/* R5rs/syntax.scm 363 */
					obj_t BgL_p0z00_1322;

					BgL_p0z00_1322 = CAR(((obj_t) BgL_pz00_25));
					{	/* R5rs/syntax.scm 365 */
						obj_t BgL_arg1416z00_1323;

						{	/* R5rs/syntax.scm 365 */
							obj_t BgL_arg1418z00_1325;

							if (NULLP(BgL_ez00_26))
								{	/* R5rs/syntax.scm 365 */
									BgL_arg1418z00_1325 = BNIL;
								}
							else
								{	/* R5rs/syntax.scm 365 */
									obj_t BgL_head1106z00_1328;

									{	/* R5rs/syntax.scm 365 */
										obj_t BgL_res2294z00_2678;

										BgL_res2294z00_2678 = MAKE_YOUNG_PAIR(BNIL, BNIL);
										BgL_head1106z00_1328 = BgL_res2294z00_2678;
									}
									{
										obj_t BgL_l1104z00_2702;
										obj_t BgL_tail1107z00_2703;

										BgL_l1104z00_2702 = BgL_ez00_26;
										BgL_tail1107z00_2703 = BgL_head1106z00_1328;
									BgL_zc3z04anonymousza31420ze3z87_2701:
										if (NULLP(BgL_l1104z00_2702))
											{	/* R5rs/syntax.scm 365 */
												BgL_arg1418z00_1325 = CDR(BgL_head1106z00_1328);
											}
										else
											{	/* R5rs/syntax.scm 365 */
												obj_t BgL_newtail1108z00_2710;

												{	/* R5rs/syntax.scm 365 */
													obj_t BgL_arg1424z00_2711;

													{	/* R5rs/syntax.scm 365 */
														obj_t BgL_eiz00_2712;

														BgL_eiz00_2712 = CAR(((obj_t) BgL_l1104z00_2702));
														BgL_arg1424z00_2711 =
															BGl_syntaxzd2getzd2framesz00zz__r5_macro_4_3_syntaxz00
															(BgL_p0z00_1322, BgL_eiz00_2712, BgL_kz00_27);
													}
													{	/* R5rs/syntax.scm 365 */
														obj_t BgL_res2300z00_2717;

														BgL_res2300z00_2717 =
															MAKE_YOUNG_PAIR(BgL_arg1424z00_2711, BNIL);
														BgL_newtail1108z00_2710 = BgL_res2300z00_2717;
													}
												}
												SET_CDR(BgL_tail1107z00_2703, BgL_newtail1108z00_2710);
												{	/* R5rs/syntax.scm 365 */
													obj_t BgL_arg1422z00_2713;

													BgL_arg1422z00_2713 =
														CDR(((obj_t) BgL_l1104z00_2702));
													{
														obj_t BgL_tail1107z00_4947;
														obj_t BgL_l1104z00_4946;

														BgL_l1104z00_4946 = BgL_arg1422z00_2713;
														BgL_tail1107z00_4947 = BgL_newtail1108z00_2710;
														BgL_tail1107z00_2703 = BgL_tail1107z00_4947;
														BgL_l1104z00_2702 = BgL_l1104z00_4946;
														goto BgL_zc3z04anonymousza31420ze3z87_2701;
													}
												}
											}
									}
								}
							BgL_arg1416z00_1323 =
								MAKE_YOUNG_PAIR(BGl_keyword2804z00zz__r5_macro_4_3_syntaxz00,
								BgL_arg1418z00_1325);
						}
						{	/* R5rs/syntax.scm 364 */
							obj_t BgL_list1417z00_1324;

							BgL_list1417z00_1324 = MAKE_YOUNG_PAIR(BgL_arg1416z00_1323, BNIL);
							return BgL_list1417z00_1324;
						}
					}
				}
			else
				{	/* R5rs/syntax.scm 362 */
					if (PAIRP(BgL_pz00_25))
						{	/* R5rs/syntax.scm 369 */
							obj_t BgL_arg1426z00_1340;
							obj_t BgL_arg1427z00_1341;

							{	/* R5rs/syntax.scm 369 */
								obj_t BgL_arg1428z00_1342;
								obj_t BgL_arg1429z00_1343;

								BgL_arg1428z00_1342 = CAR(BgL_pz00_25);
								BgL_arg1429z00_1343 = CAR(((obj_t) BgL_ez00_26));
								BgL_arg1426z00_1340 =
									BGl_syntaxzd2getzd2framesz00zz__r5_macro_4_3_syntaxz00
									(BgL_arg1428z00_1342, BgL_arg1429z00_1343, BgL_kz00_27);
							}
							{	/* R5rs/syntax.scm 370 */
								obj_t BgL_arg1430z00_1344;
								obj_t BgL_arg1431z00_1345;

								BgL_arg1430z00_1344 = CDR(BgL_pz00_25);
								BgL_arg1431z00_1345 = CDR(((obj_t) BgL_ez00_26));
								BgL_arg1427z00_1341 =
									BGl_syntaxzd2getzd2framesz00zz__r5_macro_4_3_syntaxz00
									(BgL_arg1430z00_1344, BgL_arg1431z00_1345, BgL_kz00_27);
							}
							return
								BGl_appendzd221011zd2zz__r5_macro_4_3_syntaxz00
								(BgL_arg1426z00_1340, BgL_arg1427z00_1341);
						}
					else
						{	/* R5rs/syntax.scm 368 */
							if (SYMBOLP(BgL_pz00_25))
								{	/* R5rs/syntax.scm 371 */
									if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
											(BgL_pz00_25, BgL_kz00_27)))
										{	/* R5rs/syntax.scm 372 */
											return BNIL;
										}
									else
										{	/* R5rs/syntax.scm 372 */
											obj_t BgL_arg1434z00_1348;

											BgL_arg1434z00_1348 =
												MAKE_YOUNG_PAIR(BgL_pz00_25,
												BGl_unhygieniza7eza7zz__r5_macro_4_3_syntaxz00
												(BgL_ez00_26));
											{	/* R5rs/syntax.scm 372 */
												obj_t BgL_list1435z00_1349;

												BgL_list1435z00_1349 =
													MAKE_YOUNG_PAIR(BgL_arg1434z00_1348, BNIL);
												return BgL_list1435z00_1349;
											}
										}
								}
							else
								{	/* R5rs/syntax.scm 371 */
									return BNIL;
								}
						}
				}
		}

	}



/* syntax-expand-pattern */
	obj_t BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_pz00_28, obj_t BgL_envz00_29, obj_t BgL_kz00_30)
	{
		{	/* R5rs/syntax.scm 379 */
			{
				obj_t BgL_p0z00_1366;
				obj_t BgL_envz00_1367;
				obj_t BgL_kz00_1368;

				if (BGl_ellipsiszf3zf3zz__r5_macro_4_3_syntaxz00(BgL_pz00_28))
					{	/* R5rs/syntax.scm 392 */
						obj_t BgL_arg1438z00_1353;
						obj_t BgL_arg1439z00_1354;

						{	/* R5rs/syntax.scm 392 */
							obj_t BgL_arg1440z00_1355;

							BgL_arg1440z00_1355 = CAR(((obj_t) BgL_pz00_28));
							BgL_p0z00_1366 = BgL_arg1440z00_1355;
							BgL_envz00_1367 = BgL_envz00_29;
							BgL_kz00_1368 = BgL_kz00_30;
							{	/* R5rs/syntax.scm 382 */
								obj_t BgL_varsz00_1370;

								BgL_varsz00_1370 =
									BGl_subze70ze7zz__r5_macro_4_3_syntaxz00(BgL_kz00_1368,
									BgL_p0z00_1366);
								{	/* R5rs/syntax.scm 382 */
									obj_t BgL_framesz00_1371;

									BgL_framesz00_1371 =
										BGl_getzd2ellipsiszd2framesz00zz__r5_macro_4_3_syntaxz00
										(BgL_varsz00_1370, BgL_envz00_1367);
									{	/* R5rs/syntax.scm 383 */

										if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
											(BgL_framesz00_1371))
											{	/* R5rs/syntax.scm 384 */
												if (NULLP(BgL_framesz00_1371))
													{	/* R5rs/syntax.scm 386 */
														BgL_arg1438z00_1353 = BNIL;
													}
												else
													{	/* R5rs/syntax.scm 386 */
														obj_t BgL_head1111z00_1375;

														{	/* R5rs/syntax.scm 386 */
															obj_t BgL_res2306z00_2729;

															BgL_res2306z00_2729 = MAKE_YOUNG_PAIR(BNIL, BNIL);
															BgL_head1111z00_1375 = BgL_res2306z00_2729;
														}
														{
															obj_t BgL_l1109z00_1377;
															obj_t BgL_tail1112z00_1378;

															BgL_l1109z00_1377 = BgL_framesz00_1371;
															BgL_tail1112z00_1378 = BgL_head1111z00_1375;
														BgL_zc3z04anonymousza31453ze3z87_1379:
															if (NULLP(BgL_l1109z00_1377))
																{	/* R5rs/syntax.scm 386 */
																	BgL_arg1438z00_1353 =
																		CDR(BgL_head1111z00_1375);
																}
															else
																{	/* R5rs/syntax.scm 386 */
																	obj_t BgL_newtail1113z00_1381;

																	{	/* R5rs/syntax.scm 386 */
																		obj_t BgL_arg1456z00_1383;

																		{	/* R5rs/syntax.scm 386 */
																			obj_t BgL_fz00_1384;

																			BgL_fz00_1384 =
																				CAR(((obj_t) BgL_l1109z00_1377));
																			BgL_arg1456z00_1383 =
																				BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00
																				(BgL_p0z00_1366,
																				BGl_appendzd221011zd2zz__r5_macro_4_3_syntaxz00
																				(BgL_fz00_1384, BgL_envz00_1367),
																				BgL_kz00_1368);
																		}
																		{	/* R5rs/syntax.scm 386 */
																			obj_t BgL_res2308z00_2733;

																			BgL_res2308z00_2733 =
																				MAKE_YOUNG_PAIR(BgL_arg1456z00_1383,
																				BNIL);
																			BgL_newtail1113z00_1381 =
																				BgL_res2308z00_2733;
																		}
																	}
																	SET_CDR(BgL_tail1112z00_1378,
																		BgL_newtail1113z00_1381);
																	{	/* R5rs/syntax.scm 386 */
																		obj_t BgL_arg1455z00_1382;

																		BgL_arg1455z00_1382 =
																			CDR(((obj_t) BgL_l1109z00_1377));
																		{
																			obj_t BgL_tail1112z00_4992;
																			obj_t BgL_l1109z00_4991;

																			BgL_l1109z00_4991 = BgL_arg1455z00_1382;
																			BgL_tail1112z00_4992 =
																				BgL_newtail1113z00_1381;
																			BgL_tail1112z00_1378 =
																				BgL_tail1112z00_4992;
																			BgL_l1109z00_1377 = BgL_l1109z00_4991;
																			goto
																				BgL_zc3z04anonymousza31453ze3z87_1379;
																		}
																	}
																}
														}
													}
											}
										else
											{	/* R5rs/syntax.scm 384 */
												BgL_arg1438z00_1353 = BNIL;
											}
									}
								}
							}
						}
						{	/* R5rs/syntax.scm 393 */
							obj_t BgL_arg1441z00_1356;

							{	/* R5rs/syntax.scm 393 */
								obj_t BgL_pairz00_2740;

								BgL_pairz00_2740 = CDR(((obj_t) BgL_pz00_28));
								BgL_arg1441z00_1356 = CDR(BgL_pairz00_2740);
							}
							BgL_arg1439z00_1354 =
								BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00
								(BgL_arg1441z00_1356, BgL_envz00_29, BgL_kz00_30);
						}
						return
							BGl_appendzd221011zd2zz__r5_macro_4_3_syntaxz00
							(BgL_arg1438z00_1353, BgL_arg1439z00_1354);
					}
				else
					{	/* R5rs/syntax.scm 391 */
						if (PAIRP(BgL_pz00_28))
							{	/* R5rs/syntax.scm 394 */
								return
									MAKE_YOUNG_PAIR
									(BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00
									(CAR(BgL_pz00_28), BgL_envz00_29, BgL_kz00_30),
									BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00(CDR
										(BgL_pz00_28), BgL_envz00_29, BgL_kz00_30));
							}
						else
							{	/* R5rs/syntax.scm 394 */
								if (SYMBOLP(BgL_pz00_28))
									{	/* R5rs/syntax.scm 397 */
										if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
												(BgL_pz00_28, BgL_kz00_30)))
											{	/* R5rs/syntax.scm 398 */
												return BgL_pz00_28;
											}
										else
											{	/* R5rs/syntax.scm 400 */
												obj_t BgL_xz00_1364;

												BgL_xz00_1364 =
													BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_pz00_28,
													BgL_envz00_29);
												if (PAIRP(BgL_xz00_1364))
													{	/* R5rs/syntax.scm 401 */
														return CDR(BgL_xz00_1364);
													}
												else
													{	/* R5rs/syntax.scm 401 */
														return BgL_pz00_28;
													}
											}
									}
								else
									{	/* R5rs/syntax.scm 397 */
										return BgL_pz00_28;
									}
							}
					}
			}
		}

	}



/* get-ellipsis-frames */
	obj_t BGl_getzd2ellipsiszd2framesz00zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_varsz00_31, obj_t BgL_framesz00_32)
	{
		{	/* R5rs/syntax.scm 410 */
			{
				obj_t BgL_varsz00_1390;
				obj_t BgL_resz00_1391;

				BgL_varsz00_1390 = BgL_varsz00_31;
				BgL_resz00_1391 = BNIL;
			BgL_zc3z04anonymousza31458ze3z87_1392:
				if (NULLP(BgL_varsz00_1390))
					{	/* R5rs/syntax.scm 413 */
						return BgL_resz00_1391;
					}
				else
					{	/* R5rs/syntax.scm 415 */
						obj_t BgL_vz00_1394;

						BgL_vz00_1394 = CAR(((obj_t) BgL_varsz00_1390));
						{	/* R5rs/syntax.scm 416 */
							obj_t BgL_fz00_1395;

							{
								obj_t BgL_l1120z00_1455;

								BgL_l1120z00_1455 = BgL_framesz00_32;
							BgL_zc3z04anonymousza31494ze3z87_1456:
								if (NULLP(BgL_l1120z00_1455))
									{	/* R5rs/syntax.scm 416 */
										BgL_fz00_1395 = BFALSE;
									}
								else
									{	/* R5rs/syntax.scm 417 */
										obj_t BgL__ortest_1122z00_1458;

										{	/* R5rs/syntax.scm 417 */
											obj_t BgL_fz00_1460;

											BgL_fz00_1460 = CAR(((obj_t) BgL_l1120z00_1455));
											if (
												(CAR(
														((obj_t) BgL_fz00_1460)) ==
													BGl_keyword2804z00zz__r5_macro_4_3_syntaxz00))
												{	/* R5rs/syntax.scm 418 */
													obj_t BgL_ez00_1463;

													{	/* R5rs/syntax.scm 418 */
														obj_t BgL_hook1118z00_1465;

														BgL_hook1118z00_1465 =
															MAKE_YOUNG_PAIR(BFALSE, BNIL);
														{	/* R5rs/syntax.scm 418 */
															obj_t BgL_g1119z00_1466;

															BgL_g1119z00_1466 = CDR(((obj_t) BgL_fz00_1460));
															{
																obj_t BgL_l1115z00_1468;
																obj_t BgL_h1116z00_1469;

																BgL_l1115z00_1468 = BgL_g1119z00_1466;
																BgL_h1116z00_1469 = BgL_hook1118z00_1465;
															BgL_zc3z04anonymousza31500ze3z87_1470:
																if (NULLP(BgL_l1115z00_1468))
																	{	/* R5rs/syntax.scm 418 */
																		BgL_ez00_1463 = CDR(BgL_hook1118z00_1465);
																	}
																else
																	{	/* R5rs/syntax.scm 418 */
																		if (CBOOL
																			(BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																				(BgL_vz00_1394,
																					CAR(((obj_t) BgL_l1115z00_1468)))))
																			{	/* R5rs/syntax.scm 418 */
																				obj_t BgL_nh1117z00_1474;

																				{	/* R5rs/syntax.scm 418 */
																					obj_t BgL_arg1506z00_1476;

																					BgL_arg1506z00_1476 =
																						CAR(((obj_t) BgL_l1115z00_1468));
																					{	/* R5rs/syntax.scm 418 */
																						obj_t BgL_res2315z00_2757;

																						BgL_res2315z00_2757 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1506z00_1476, BNIL);
																						BgL_nh1117z00_1474 =
																							BgL_res2315z00_2757;
																					}
																				}
																				SET_CDR(BgL_h1116z00_1469,
																					BgL_nh1117z00_1474);
																				{	/* R5rs/syntax.scm 418 */
																					obj_t BgL_arg1505z00_1475;

																					BgL_arg1505z00_1475 =
																						CDR(((obj_t) BgL_l1115z00_1468));
																					{
																						obj_t BgL_h1116z00_5044;
																						obj_t BgL_l1115z00_5043;

																						BgL_l1115z00_5043 =
																							BgL_arg1505z00_1475;
																						BgL_h1116z00_5044 =
																							BgL_nh1117z00_1474;
																						BgL_h1116z00_1469 =
																							BgL_h1116z00_5044;
																						BgL_l1115z00_1468 =
																							BgL_l1115z00_5043;
																						goto
																							BgL_zc3z04anonymousza31500ze3z87_1470;
																					}
																				}
																			}
																		else
																			{	/* R5rs/syntax.scm 418 */
																				obj_t BgL_arg1507z00_1477;

																				BgL_arg1507z00_1477 =
																					CDR(((obj_t) BgL_l1115z00_1468));
																				{
																					obj_t BgL_l1115z00_5047;

																					BgL_l1115z00_5047 =
																						BgL_arg1507z00_1477;
																					BgL_l1115z00_1468 = BgL_l1115z00_5047;
																					goto
																						BgL_zc3z04anonymousza31500ze3z87_1470;
																				}
																			}
																	}
															}
														}
													}
													if (PAIRP(BgL_ez00_1463))
														{	/* R5rs/syntax.scm 419 */
															BgL__ortest_1122z00_1458 = BgL_ez00_1463;
														}
													else
														{	/* R5rs/syntax.scm 419 */
															BgL__ortest_1122z00_1458 = BFALSE;
														}
												}
											else
												{	/* R5rs/syntax.scm 417 */
													BgL__ortest_1122z00_1458 = BFALSE;
												}
										}
										if (CBOOL(BgL__ortest_1122z00_1458))
											{	/* R5rs/syntax.scm 416 */
												BgL_fz00_1395 = BgL__ortest_1122z00_1458;
											}
										else
											{	/* R5rs/syntax.scm 416 */
												obj_t BgL_arg1496z00_1459;

												BgL_arg1496z00_1459 = CDR(((obj_t) BgL_l1120z00_1455));
												{
													obj_t BgL_l1120z00_5054;

													BgL_l1120z00_5054 = BgL_arg1496z00_1459;
													BgL_l1120z00_1455 = BgL_l1120z00_5054;
													goto BgL_zc3z04anonymousza31494ze3z87_1456;
												}
											}
									}
							}
							if (CBOOL(BgL_fz00_1395))
								{	/* R5rs/syntax.scm 422 */
									obj_t BgL_g1045z00_1396;

									BgL_g1045z00_1396 = CDR(((obj_t) BgL_varsz00_1390));
									{
										obj_t BgL_ovarsz00_1399;
										obj_t BgL_nvarsz00_1400;

										BgL_ovarsz00_1399 = BgL_g1045z00_1396;
										BgL_nvarsz00_1400 = BNIL;
									BgL_zc3z04anonymousza31460ze3z87_1401:
										if (NULLP(BgL_ovarsz00_1399))
											{	/* R5rs/syntax.scm 425 */
												if (NULLP(BgL_resz00_1391))
													{
														obj_t BgL_resz00_5064;
														obj_t BgL_varsz00_5063;

														BgL_varsz00_5063 = BgL_nvarsz00_1400;
														BgL_resz00_5064 = BgL_fz00_1395;
														BgL_resz00_1391 = BgL_resz00_5064;
														BgL_varsz00_1390 = BgL_varsz00_5063;
														goto BgL_zc3z04anonymousza31458ze3z87_1392;
													}
												else
													{	/* R5rs/syntax.scm 428 */
														obj_t BgL_arg1463z00_1404;

														if (NULLP(BgL_fz00_1395))
															{	/* R5rs/syntax.scm 428 */
																BgL_arg1463z00_1404 = BNIL;
															}
														else
															{	/* R5rs/syntax.scm 428 */
																obj_t BgL_head1125z00_1408;

																{	/* R5rs/syntax.scm 428 */
																	obj_t BgL_arg1472z00_1424;

																	{	/* R5rs/syntax.scm 428 */
																		obj_t BgL_arg1473z00_1425;
																		obj_t BgL_arg1474z00_1426;

																		BgL_arg1473z00_1425 =
																			CAR(((obj_t) BgL_fz00_1395));
																		BgL_arg1474z00_1426 =
																			CAR(((obj_t) BgL_resz00_1391));
																		BgL_arg1472z00_1424 =
																			BGl_appendzd221011zd2zz__r5_macro_4_3_syntaxz00
																			(BgL_arg1473z00_1425,
																			BgL_arg1474z00_1426);
																	}
																	{	/* R5rs/syntax.scm 428 */
																		obj_t BgL_res2320z00_2769;

																		BgL_res2320z00_2769 =
																			MAKE_YOUNG_PAIR(BgL_arg1472z00_1424,
																			BNIL);
																		BgL_head1125z00_1408 = BgL_res2320z00_2769;
																	}
																}
																{	/* R5rs/syntax.scm 428 */
																	obj_t BgL_g1129z00_1409;
																	obj_t BgL_g1130z00_1410;

																	BgL_g1129z00_1409 =
																		CDR(((obj_t) BgL_fz00_1395));
																	BgL_g1130z00_1410 =
																		CDR(((obj_t) BgL_resz00_1391));
																	{
																		obj_t BgL_ll1123z00_2801;
																		obj_t BgL_ll1124z00_2802;
																		obj_t BgL_tail1126z00_2803;

																		BgL_ll1123z00_2801 = BgL_g1129z00_1409;
																		BgL_ll1124z00_2802 = BgL_g1130z00_1410;
																		BgL_tail1126z00_2803 = BgL_head1125z00_1408;
																	BgL_zc3z04anonymousza31465ze3z87_2800:
																		if (NULLP(BgL_ll1123z00_2801))
																			{	/* R5rs/syntax.scm 428 */
																				BgL_arg1463z00_1404 =
																					BgL_head1125z00_1408;
																			}
																		else
																			{	/* R5rs/syntax.scm 428 */
																				obj_t BgL_newtail1127z00_2812;

																				{	/* R5rs/syntax.scm 428 */
																					obj_t BgL_arg1469z00_2813;

																					{	/* R5rs/syntax.scm 428 */
																						obj_t BgL_arg1470z00_2814;
																						obj_t BgL_arg1471z00_2815;

																						BgL_arg1470z00_2814 =
																							CAR(((obj_t) BgL_ll1123z00_2801));
																						BgL_arg1471z00_2815 =
																							CAR(((obj_t) BgL_ll1124z00_2802));
																						BgL_arg1469z00_2813 =
																							BGl_appendzd221011zd2zz__r5_macro_4_3_syntaxz00
																							(BgL_arg1470z00_2814,
																							BgL_arg1471z00_2815);
																					}
																					{	/* R5rs/syntax.scm 428 */
																						obj_t BgL_res2326z00_2821;

																						BgL_res2326z00_2821 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1469z00_2813, BNIL);
																						BgL_newtail1127z00_2812 =
																							BgL_res2326z00_2821;
																					}
																				}
																				SET_CDR(BgL_tail1126z00_2803,
																					BgL_newtail1127z00_2812);
																				{	/* R5rs/syntax.scm 428 */
																					obj_t BgL_arg1467z00_2816;
																					obj_t BgL_arg1468z00_2817;

																					BgL_arg1467z00_2816 =
																						CDR(((obj_t) BgL_ll1123z00_2801));
																					BgL_arg1468z00_2817 =
																						CDR(((obj_t) BgL_ll1124z00_2802));
																					{
																						obj_t BgL_tail1126z00_5092;
																						obj_t BgL_ll1124z00_5091;
																						obj_t BgL_ll1123z00_5090;

																						BgL_ll1123z00_5090 =
																							BgL_arg1467z00_2816;
																						BgL_ll1124z00_5091 =
																							BgL_arg1468z00_2817;
																						BgL_tail1126z00_5092 =
																							BgL_newtail1127z00_2812;
																						BgL_tail1126z00_2803 =
																							BgL_tail1126z00_5092;
																						BgL_ll1124z00_2802 =
																							BgL_ll1124z00_5091;
																						BgL_ll1123z00_2801 =
																							BgL_ll1123z00_5090;
																						goto
																							BgL_zc3z04anonymousza31465ze3z87_2800;
																					}
																				}
																			}
																	}
																}
															}
														{
															obj_t BgL_resz00_5094;
															obj_t BgL_varsz00_5093;

															BgL_varsz00_5093 = BgL_nvarsz00_1400;
															BgL_resz00_5094 = BgL_arg1463z00_1404;
															BgL_resz00_1391 = BgL_resz00_5094;
															BgL_varsz00_1390 = BgL_varsz00_5093;
															goto BgL_zc3z04anonymousza31458ze3z87_1392;
														}
													}
											}
										else
											{	/* R5rs/syntax.scm 429 */
												bool_t BgL_test3002z00_5095;

												{
													obj_t BgL_l1131z00_1443;

													BgL_l1131z00_1443 = BgL_fz00_1395;
												BgL_zc3z04anonymousza31487ze3z87_1444:
													if (NULLP(BgL_l1131z00_1443))
														{	/* R5rs/syntax.scm 429 */
															BgL_test3002z00_5095 = ((bool_t) 0);
														}
													else
														{	/* R5rs/syntax.scm 429 */
															bool_t BgL__ortest_1133z00_1446;

															{	/* R5rs/syntax.scm 429 */
																obj_t BgL_tmpz00_5098;

																BgL_tmpz00_5098 =
																	BGl_assqz00zz__r4_pairs_and_lists_6_3z00(CAR(
																		((obj_t) BgL_ovarsz00_1399)),
																	CAR(((obj_t) BgL_l1131z00_1443)));
																BgL__ortest_1133z00_1446 =
																	PAIRP(BgL_tmpz00_5098);
															}
															if (BgL__ortest_1133z00_1446)
																{	/* R5rs/syntax.scm 429 */
																	BgL_test3002z00_5095 =
																		BgL__ortest_1133z00_1446;
																}
															else
																{
																	obj_t BgL_l1131z00_5106;

																	BgL_l1131z00_5106 =
																		CDR(((obj_t) BgL_l1131z00_1443));
																	BgL_l1131z00_1443 = BgL_l1131z00_5106;
																	goto BgL_zc3z04anonymousza31487ze3z87_1444;
																}
														}
												}
												if (BgL_test3002z00_5095)
													{	/* R5rs/syntax.scm 430 */
														obj_t BgL_arg1483z00_1438;

														BgL_arg1483z00_1438 =
															CDR(((obj_t) BgL_ovarsz00_1399));
														{
															obj_t BgL_ovarsz00_5111;

															BgL_ovarsz00_5111 = BgL_arg1483z00_1438;
															BgL_ovarsz00_1399 = BgL_ovarsz00_5111;
															goto BgL_zc3z04anonymousza31460ze3z87_1401;
														}
													}
												else
													{	/* R5rs/syntax.scm 432 */
														obj_t BgL_arg1484z00_1439;
														obj_t BgL_arg1485z00_1440;

														BgL_arg1484z00_1439 =
															CDR(((obj_t) BgL_ovarsz00_1399));
														{	/* R5rs/syntax.scm 432 */
															obj_t BgL_arg1486z00_1441;

															BgL_arg1486z00_1441 =
																CAR(((obj_t) BgL_ovarsz00_1399));
															BgL_arg1485z00_1440 =
																MAKE_YOUNG_PAIR(BgL_arg1486z00_1441,
																BgL_nvarsz00_1400);
														}
														{
															obj_t BgL_nvarsz00_5118;
															obj_t BgL_ovarsz00_5117;

															BgL_ovarsz00_5117 = BgL_arg1484z00_1439;
															BgL_nvarsz00_5118 = BgL_arg1485z00_1440;
															BgL_nvarsz00_1400 = BgL_nvarsz00_5118;
															BgL_ovarsz00_1399 = BgL_ovarsz00_5117;
															goto BgL_zc3z04anonymousza31460ze3z87_1401;
														}
													}
											}
									}
								}
							else
								{	/* R5rs/syntax.scm 433 */
									obj_t BgL_arg1493z00_1453;

									BgL_arg1493z00_1453 = CDR(((obj_t) BgL_varsz00_1390));
									{
										obj_t BgL_varsz00_5121;

										BgL_varsz00_5121 = BgL_arg1493z00_1453;
										BgL_varsz00_1390 = BgL_varsz00_5121;
										goto BgL_zc3z04anonymousza31458ze3z87_1392;
									}
								}
						}
					}
			}
		}

	}



/* sub~0 */
	obj_t BGl_subze70ze7zz__r5_macro_4_3_syntaxz00(obj_t BgL_kz00_3903,
		obj_t BgL_pz00_1484)
	{
		{	/* R5rs/syntax.scm 439 */
			if (BGl_ellipsiszf3zf3zz__r5_macro_4_3_syntaxz00(BgL_pz00_1484))
				{	/* R5rs/syntax.scm 442 */
					obj_t BgL_arg1511z00_1487;
					obj_t BgL_arg1512z00_1488;

					{	/* R5rs/syntax.scm 442 */
						obj_t BgL_arg1513z00_1489;

						BgL_arg1513z00_1489 = CAR(((obj_t) BgL_pz00_1484));
						BgL_arg1511z00_1487 =
							BGl_subze70ze7zz__r5_macro_4_3_syntaxz00(BgL_kz00_3903,
							BgL_arg1513z00_1489);
					}
					{	/* R5rs/syntax.scm 442 */
						obj_t BgL_arg1514z00_1490;

						{	/* R5rs/syntax.scm 442 */
							obj_t BgL_pairz00_2838;

							BgL_pairz00_2838 = CDR(((obj_t) BgL_pz00_1484));
							BgL_arg1514z00_1490 = CDR(BgL_pairz00_2838);
						}
						BgL_arg1512z00_1488 =
							BGl_subze70ze7zz__r5_macro_4_3_syntaxz00(BgL_kz00_3903,
							BgL_arg1514z00_1490);
					}
					return MAKE_YOUNG_PAIR(BgL_arg1511z00_1487, BgL_arg1512z00_1488);
				}
			else
				{	/* R5rs/syntax.scm 441 */
					if (PAIRP(BgL_pz00_1484))
						{	/* R5rs/syntax.scm 443 */
							return
								BGl_appendzd221011zd2zz__r5_macro_4_3_syntaxz00
								(BGl_subze70ze7zz__r5_macro_4_3_syntaxz00(BgL_kz00_3903,
									CAR(BgL_pz00_1484)),
								BGl_subze70ze7zz__r5_macro_4_3_syntaxz00(BgL_kz00_3903,
									CDR(BgL_pz00_1484)));
						}
					else
						{	/* R5rs/syntax.scm 443 */
							if (SYMBOLP(BgL_pz00_1484))
								{	/* R5rs/syntax.scm 445 */
									if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
											(BgL_pz00_1484, BgL_kz00_3903)))
										{	/* R5rs/syntax.scm 446 */
											return BNIL;
										}
									else
										{	/* R5rs/syntax.scm 446 */
											obj_t BgL_list1525z00_1498;

											BgL_list1525z00_1498 =
												MAKE_YOUNG_PAIR(BgL_pz00_1484, BNIL);
											return BgL_list1525z00_1498;
										}
								}
							else
								{	/* R5rs/syntax.scm 445 */
									return BNIL;
								}
						}
				}
		}

	}



/* ellipsis? */
	bool_t BGl_ellipsiszf3zf3zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_35)
	{
		{	/* R5rs/syntax.scm 453 */
			if (PAIRP(BgL_xz00_35))
				{	/* R5rs/syntax.scm 455 */
					bool_t BgL_test3010z00_5147;

					{	/* R5rs/syntax.scm 455 */
						obj_t BgL_tmpz00_5148;

						BgL_tmpz00_5148 = CDR(BgL_xz00_35);
						BgL_test3010z00_5147 = PAIRP(BgL_tmpz00_5148);
					}
					if (BgL_test3010z00_5147)
						{	/* R5rs/syntax.scm 455 */
							return
								(CAR(CDR(BgL_xz00_35)) ==
								BGl_symbol2576z00zz__r5_macro_4_3_syntaxz00);
						}
					else
						{	/* R5rs/syntax.scm 455 */
							return ((bool_t) 0);
						}
				}
			else
				{	/* R5rs/syntax.scm 454 */
					return ((bool_t) 0);
				}
		}

	}



/* hygiene-value */
	obj_t BGl_hygienezd2valuezd2zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_38)
	{
		{	/* R5rs/syntax.scm 474 */
			if (SYMBOLP(BgL_xz00_38))
				{	/* R5rs/syntax.scm 477 */
					obj_t BgL_sz00_1509;

					{	/* R5rs/syntax.scm 477 */
						obj_t BgL_res2339z00_2869;

						{	/* R5rs/syntax.scm 477 */
							obj_t BgL_arg2071z00_2868;

							BgL_arg2071z00_2868 = SYMBOL_TO_STRING(BgL_xz00_38);
							BgL_res2339z00_2869 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2071z00_2868);
						}
						BgL_sz00_1509 = BgL_res2339z00_2869;
					}
					if (bigloo_strcmp_at(BgL_sz00_1509,
							BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00, ((long) 0)))
						{	/* R5rs/syntax.scm 480 */
							obj_t BgL_arg1535z00_1511;

							{	/* R5rs/syntax.scm 480 */
								long BgL_arg1536z00_1512;

								BgL_arg1536z00_1512 = STRING_LENGTH(BgL_sz00_1509);
								BgL_arg1535z00_1511 =
									c_substring(BgL_sz00_1509,
									BGl_hygienezd2prefixzd2lenz00zz__r5_macro_4_3_syntaxz00,
									BgL_arg1536z00_1512);
							}
							return bstring_to_symbol(BgL_arg1535z00_1511);
						}
					else
						{	/* R5rs/syntax.scm 478 */
							return BgL_xz00_38;
						}
				}
			else
				{	/* R5rs/syntax.scm 475 */
					return BgL_xz00_38;
				}
		}

	}



/* hygiene-eq? */
	bool_t BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_39,
		obj_t BgL_idz00_40)
	{
		{	/* R5rs/syntax.scm 486 */
		BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00:
			{	/* R5rs/syntax.scm 487 */
				bool_t BgL_test3013z00_5163;

				if (SYMBOLP(BgL_idz00_40))
					{	/* R5rs/syntax.scm 487 */
						BgL_test3013z00_5163 = SYMBOLP(BgL_xz00_39);
					}
				else
					{	/* R5rs/syntax.scm 487 */
						BgL_test3013z00_5163 = ((bool_t) 0);
					}
				if (BgL_test3013z00_5163)
					{	/* R5rs/syntax.scm 488 */
						bool_t BgL__ortest_1049z00_1515;

						BgL__ortest_1049z00_1515 = (BgL_xz00_39 == BgL_idz00_40);
						if (BgL__ortest_1049z00_1515)
							{	/* R5rs/syntax.scm 488 */
								return BgL__ortest_1049z00_1515;
							}
						else
							{	/* R5rs/syntax.scm 489 */
								bool_t BgL_test3016z00_5169;

								{	/* R5rs/syntax.scm 468 */
									obj_t BgL_sz00_2880;

									{	/* R5rs/syntax.scm 468 */
										obj_t BgL_res2345z00_2883;

										{	/* R5rs/syntax.scm 468 */
											obj_t BgL_arg2071z00_2882;

											BgL_arg2071z00_2882 = SYMBOL_TO_STRING(BgL_xz00_39);
											BgL_res2345z00_2883 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2071z00_2882);
										}
										BgL_sz00_2880 = BgL_res2345z00_2883;
									}
									BgL_test3016z00_5169 =
										bigloo_strcmp_at(BgL_sz00_2880,
										BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00,
										((long) 0));
								}
								if (BgL_test3016z00_5169)
									{
										obj_t BgL_xz00_5173;

										BgL_xz00_5173 =
											BGl_hygienezd2valuezd2zz__r5_macro_4_3_syntaxz00
											(BgL_xz00_39);
										BgL_xz00_39 = BgL_xz00_5173;
										goto BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00;
									}
								else
									{	/* R5rs/syntax.scm 489 */
										return ((bool_t) 0);
									}
							}
					}
				else
					{	/* R5rs/syntax.scm 487 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* unhygienize */
	obj_t BGl_unhygieniza7eza7zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_41)
	{
		{	/* R5rs/syntax.scm 494 */
			if (SYMBOLP(BgL_xz00_41))
				{	/* R5rs/syntax.scm 462 */
					obj_t BgL_arg1530z00_2885;

					{	/* R5rs/syntax.scm 462 */
						obj_t BgL_arg1531z00_2886;
						obj_t BgL_arg1532z00_2887;

						{	/* R5rs/syntax.scm 462 */
							obj_t BgL_res2347z00_2890;

							{	/* R5rs/syntax.scm 462 */
								obj_t BgL_symbolz00_2888;

								BgL_symbolz00_2888 =
									BGl_hygienezd2markzd2zz__r5_macro_4_3_syntaxz00;
								{	/* R5rs/syntax.scm 462 */
									obj_t BgL_arg2071z00_2889;

									BgL_arg2071z00_2889 = SYMBOL_TO_STRING(BgL_symbolz00_2888);
									BgL_res2347z00_2890 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2071z00_2889);
								}
							}
							BgL_arg1531z00_2886 = BgL_res2347z00_2890;
						}
						{	/* R5rs/syntax.scm 462 */
							obj_t BgL_res2348z00_2893;

							{	/* R5rs/syntax.scm 462 */
								obj_t BgL_arg2071z00_2892;

								BgL_arg2071z00_2892 = SYMBOL_TO_STRING(BgL_xz00_41);
								BgL_res2348z00_2893 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2071z00_2892);
							}
							BgL_arg1532z00_2887 = BgL_res2348z00_2893;
						}
						BgL_arg1530z00_2885 =
							string_append(BgL_arg1531z00_2886, BgL_arg1532z00_2887);
					}
					return bstring_to_symbol(BgL_arg1530z00_2885);
				}
			else
				{	/* R5rs/syntax.scm 496 */
					if (PAIRP(BgL_xz00_41))
						{	/* R5rs/syntax.scm 498 */
							return
								MAKE_YOUNG_PAIR(BGl_unhygieniza7eza7zz__r5_macro_4_3_syntaxz00
								(CAR(BgL_xz00_41)),
								BGl_unhygieniza7eza7zz__r5_macro_4_3_syntaxz00(CDR
									(BgL_xz00_41)));
						}
					else
						{	/* R5rs/syntax.scm 498 */
							return BgL_xz00_41;
						}
				}
		}

	}



/* hygienize */
	obj_t BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_42,
		obj_t BgL_envz00_43)
	{
		{	/* R5rs/syntax.scm 506 */
			{
				obj_t BgL_bindingsz00_1542;
				obj_t BgL_bodyz00_1543;
				obj_t BgL_bindingsz00_1539;
				obj_t BgL_bodyz00_1540;
				obj_t BgL_bindingsz00_1532;
				obj_t BgL_bodyz00_1533;
				obj_t BgL_varsz00_1529;
				obj_t BgL_bodyz00_1530;
				obj_t BgL_varz00_1525;

				if (SYMBOLP(BgL_xz00_42))
					{	/* R5rs/syntax.scm 507 */
						BgL_varz00_1525 = BgL_xz00_42;
						{	/* R5rs/syntax.scm 509 */
							bool_t BgL_test3020z00_5192;

							{	/* R5rs/syntax.scm 468 */
								obj_t BgL_sz00_2899;

								{	/* R5rs/syntax.scm 468 */
									obj_t BgL_res2351z00_2902;

									{	/* R5rs/syntax.scm 468 */
										obj_t BgL_arg2071z00_2901;

										BgL_arg2071z00_2901 =
											SYMBOL_TO_STRING(((obj_t) BgL_xz00_42));
										BgL_res2351z00_2902 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2071z00_2901);
									}
									BgL_sz00_2899 = BgL_res2351z00_2902;
								}
								BgL_test3020z00_5192 =
									bigloo_strcmp_at(BgL_sz00_2899,
									BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00,
									((long) 0));
							}
							if (BgL_test3020z00_5192)
								{	/* R5rs/syntax.scm 509 */
									return
										BGl_hygienezd2valuezd2zz__r5_macro_4_3_syntaxz00
										(BgL_xz00_42);
								}
							else
								{	/* R5rs/syntax.scm 511 */
									obj_t BgL_oz00_1772;

									BgL_oz00_1772 =
										BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_varz00_1525,
										BgL_envz00_43);
									if (PAIRP(BgL_oz00_1772))
										{	/* R5rs/syntax.scm 512 */
											return CDR(BgL_oz00_1772);
										}
									else
										{	/* R5rs/syntax.scm 512 */
											return BgL_varz00_1525;
										}
								}
						}
					}
				else
					{	/* R5rs/syntax.scm 507 */
						if (PAIRP(BgL_xz00_42))
							{	/* R5rs/syntax.scm 507 */
								if (
									(CAR(BgL_xz00_42) ==
										BGl_symbol2559z00zz__r5_macro_4_3_syntaxz00))
									{	/* R5rs/syntax.scm 507 */
										obj_t BgL_arg1553z00_1555;

										BgL_arg1553z00_1555 = CDR(BgL_xz00_42);
										{	/* R5rs/syntax.scm 516 */
											obj_t BgL_arg1773z00_3367;

											BgL_arg1773z00_3367 =
												BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00(BgL_envz00_43,
												BgL_arg1553z00_1555);
											return
												MAKE_YOUNG_PAIR
												(BGl_symbol2559z00zz__r5_macro_4_3_syntaxz00,
												BgL_arg1773z00_3367);
										}
									}
								else
									{	/* R5rs/syntax.scm 507 */
										obj_t BgL_cdrzd2271zd2_1556;

										BgL_cdrzd2271zd2_1556 = CDR(BgL_xz00_42);
										if (
											(CAR(BgL_xz00_42) ==
												BGl_symbol2673z00zz__r5_macro_4_3_syntaxz00))
											{	/* R5rs/syntax.scm 507 */
												if (PAIRP(BgL_cdrzd2271zd2_1556))
													{	/* R5rs/syntax.scm 507 */
														BgL_varsz00_1529 = CAR(BgL_cdrzd2271zd2_1556);
														BgL_bodyz00_1530 = CDR(BgL_cdrzd2271zd2_1556);
														{	/* R5rs/syntax.scm 518 */
															obj_t BgL_nvarsz00_1775;

															BgL_nvarsz00_1775 =
																BGl_genvarsz00zz__r5_macro_4_3_syntaxz00
																(BgL_varsz00_1529);
															{	/* R5rs/syntax.scm 518 */
																obj_t BgL_nenvz00_1776;

																{	/* R5rs/syntax.scm 519 */
																	obj_t BgL_arg1777z00_1780;

																	{	/* R5rs/syntax.scm 519 */
																		obj_t BgL_ll1134z00_1781;
																		obj_t BgL_ll1135z00_1782;

																		BgL_ll1134z00_1781 =
																			BGl_flattenz00zz__r5_macro_4_3_syntaxz00
																			(BgL_varsz00_1529);
																		BgL_ll1135z00_1782 =
																			BGl_flattenz00zz__r5_macro_4_3_syntaxz00
																			(BgL_nvarsz00_1775);
																		if (NULLP(BgL_ll1134z00_1781))
																			{	/* R5rs/syntax.scm 519 */
																				BgL_arg1777z00_1780 = BNIL;
																			}
																		else
																			{	/* R5rs/syntax.scm 519 */
																				obj_t BgL_head1136z00_1784;

																				{	/* R5rs/syntax.scm 519 */
																					obj_t BgL_arg1787z00_1800;

																					{	/* R5rs/syntax.scm 519 */
																						obj_t BgL_arg1788z00_1801;
																						obj_t BgL_arg1789z00_1802;

																						BgL_arg1788z00_1801 =
																							CAR(BgL_ll1134z00_1781);
																						BgL_arg1789z00_1802 =
																							CAR(((obj_t) BgL_ll1135z00_1782));
																						BgL_arg1787z00_1800 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1788z00_1801,
																							BgL_arg1789z00_1802);
																					}
																					{	/* R5rs/syntax.scm 519 */
																						obj_t BgL_res2354z00_2909;

																						BgL_res2354z00_2909 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1787z00_1800, BNIL);
																						BgL_head1136z00_1784 =
																							BgL_res2354z00_2909;
																					}
																				}
																				{	/* R5rs/syntax.scm 519 */
																					obj_t BgL_g1140z00_1785;
																					obj_t BgL_g1141z00_1786;

																					BgL_g1140z00_1785 =
																						CDR(BgL_ll1134z00_1781);
																					BgL_g1141z00_1786 =
																						CDR(((obj_t) BgL_ll1135z00_1782));
																					{
																						obj_t BgL_ll1134z00_2941;
																						obj_t BgL_ll1135z00_2942;
																						obj_t BgL_tail1137z00_2943;

																						BgL_ll1134z00_2941 =
																							BgL_g1140z00_1785;
																						BgL_ll1135z00_2942 =
																							BgL_g1141z00_1786;
																						BgL_tail1137z00_2943 =
																							BgL_head1136z00_1784;
																					BgL_zc3z04anonymousza31779ze3z87_2940:
																						if (NULLP
																							(BgL_ll1134z00_2941))
																							{	/* R5rs/syntax.scm 519 */
																								BgL_arg1777z00_1780 =
																									BgL_head1136z00_1784;
																							}
																						else
																							{	/* R5rs/syntax.scm 519 */
																								obj_t BgL_newtail1138z00_2952;

																								{	/* R5rs/syntax.scm 519 */
																									obj_t BgL_arg1783z00_2953;

																									{	/* R5rs/syntax.scm 519 */
																										obj_t BgL_arg1784z00_2954;
																										obj_t BgL_arg1786z00_2955;

																										BgL_arg1784z00_2954 =
																											CAR(
																											((obj_t)
																												BgL_ll1134z00_2941));
																										BgL_arg1786z00_2955 =
																											CAR(((obj_t)
																												BgL_ll1135z00_2942));
																										BgL_arg1783z00_2953 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1784z00_2954,
																											BgL_arg1786z00_2955);
																									}
																									{	/* R5rs/syntax.scm 519 */
																										obj_t BgL_res2360z00_2961;

																										BgL_res2360z00_2961 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1783z00_2953,
																											BNIL);
																										BgL_newtail1138z00_2952 =
																											BgL_res2360z00_2961;
																									}
																								}
																								SET_CDR(BgL_tail1137z00_2943,
																									BgL_newtail1138z00_2952);
																								{	/* R5rs/syntax.scm 519 */
																									obj_t BgL_arg1781z00_2956;
																									obj_t BgL_arg1782z00_2957;

																									BgL_arg1781z00_2956 =
																										CDR(
																										((obj_t)
																											BgL_ll1134z00_2941));
																									BgL_arg1782z00_2957 =
																										CDR(((obj_t)
																											BgL_ll1135z00_2942));
																									{
																										obj_t BgL_tail1137z00_5244;
																										obj_t BgL_ll1135z00_5243;
																										obj_t BgL_ll1134z00_5242;

																										BgL_ll1134z00_5242 =
																											BgL_arg1781z00_2956;
																										BgL_ll1135z00_5243 =
																											BgL_arg1782z00_2957;
																										BgL_tail1137z00_5244 =
																											BgL_newtail1138z00_2952;
																										BgL_tail1137z00_2943 =
																											BgL_tail1137z00_5244;
																										BgL_ll1135z00_2942 =
																											BgL_ll1135z00_5243;
																										BgL_ll1134z00_2941 =
																											BgL_ll1134z00_5242;
																										goto
																											BgL_zc3z04anonymousza31779ze3z87_2940;
																									}
																								}
																							}
																					}
																				}
																			}
																	}
																	BgL_nenvz00_1776 =
																		BGl_appendzd221011zd2zz__r5_macro_4_3_syntaxz00
																		(BgL_arg1777z00_1780, BgL_envz00_43);
																}
																{	/* R5rs/syntax.scm 519 */

																	{	/* R5rs/syntax.scm 521 */
																		obj_t BgL_arg1774z00_1777;

																		BgL_arg1774z00_1777 =
																			MAKE_YOUNG_PAIR(BgL_nvarsz00_1775,
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00
																				(BgL_nenvz00_1776, BgL_bodyz00_1530),
																				BNIL));
																		return
																			MAKE_YOUNG_PAIR
																			(BGl_symbol2673z00zz__r5_macro_4_3_syntaxz00,
																			BgL_arg1774z00_1777);
																	}
																}
															}
														}
													}
												else
													{	/* R5rs/syntax.scm 507 */
														return
															BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00
															(BgL_envz00_43, BgL_xz00_42);
													}
											}
										else
											{	/* R5rs/syntax.scm 507 */
												if (
													(CAR(BgL_xz00_42) ==
														BGl_symbol2589z00zz__r5_macro_4_3_syntaxz00))
													{	/* R5rs/syntax.scm 507 */
														if (PAIRP(BgL_cdrzd2271zd2_1556))
															{	/* R5rs/syntax.scm 507 */
																BgL_bindingsz00_1532 =
																	CAR(BgL_cdrzd2271zd2_1556);
																BgL_bodyz00_1533 = CDR(BgL_cdrzd2271zd2_1556);
																{	/* R5rs/syntax.scm 523 */
																	obj_t BgL_nvarsz00_1803;

																	{	/* R5rs/syntax.scm 523 */
																		obj_t BgL_arg1814z00_1849;

																		if (NULLP(BgL_bindingsz00_1532))
																			{	/* R5rs/syntax.scm 523 */
																				BgL_arg1814z00_1849 = BNIL;
																			}
																		else
																			{	/* R5rs/syntax.scm 523 */
																				obj_t BgL_head1144z00_1852;

																				{	/* R5rs/syntax.scm 523 */
																					obj_t BgL_arg1821z00_1864;

																					{	/* R5rs/syntax.scm 523 */
																						obj_t BgL_pairz00_2967;

																						BgL_pairz00_2967 =
																							CAR(
																							((obj_t) BgL_bindingsz00_1532));
																						BgL_arg1821z00_1864 =
																							CAR(BgL_pairz00_2967);
																					}
																					{	/* R5rs/syntax.scm 523 */
																						obj_t BgL_res2362z00_2968;

																						BgL_res2362z00_2968 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1821z00_1864, BNIL);
																						BgL_head1144z00_1852 =
																							BgL_res2362z00_2968;
																					}
																				}
																				{	/* R5rs/syntax.scm 523 */
																					obj_t BgL_g1147z00_1853;

																					BgL_g1147z00_1853 =
																						CDR(((obj_t) BgL_bindingsz00_1532));
																					{
																						obj_t BgL_l1142z00_2993;
																						obj_t BgL_tail1145z00_2994;

																						BgL_l1142z00_2993 =
																							BgL_g1147z00_1853;
																						BgL_tail1145z00_2994 =
																							BgL_head1144z00_1852;
																					BgL_zc3z04anonymousza31816ze3z87_2992:
																						if (NULLP
																							(BgL_l1142z00_2993))
																							{	/* R5rs/syntax.scm 523 */
																								BgL_arg1814z00_1849 =
																									BgL_head1144z00_1852;
																							}
																						else
																							{	/* R5rs/syntax.scm 523 */
																								obj_t BgL_newtail1146z00_3001;

																								{	/* R5rs/syntax.scm 523 */
																									obj_t BgL_arg1819z00_3002;

																									{	/* R5rs/syntax.scm 523 */
																										obj_t BgL_pairz00_3007;

																										BgL_pairz00_3007 =
																											CAR(
																											((obj_t)
																												BgL_l1142z00_2993));
																										BgL_arg1819z00_3002 =
																											CAR(BgL_pairz00_3007);
																									}
																									{	/* R5rs/syntax.scm 523 */
																										obj_t BgL_res2368z00_3008;

																										BgL_res2368z00_3008 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1819z00_3002,
																											BNIL);
																										BgL_newtail1146z00_3001 =
																											BgL_res2368z00_3008;
																									}
																								}
																								SET_CDR(BgL_tail1145z00_2994,
																									BgL_newtail1146z00_3001);
																								{	/* R5rs/syntax.scm 523 */
																									obj_t BgL_arg1818z00_3004;

																									BgL_arg1818z00_3004 =
																										CDR(
																										((obj_t)
																											BgL_l1142z00_2993));
																									{
																										obj_t BgL_tail1145z00_5276;
																										obj_t BgL_l1142z00_5275;

																										BgL_l1142z00_5275 =
																											BgL_arg1818z00_3004;
																										BgL_tail1145z00_5276 =
																											BgL_newtail1146z00_3001;
																										BgL_tail1145z00_2994 =
																											BgL_tail1145z00_5276;
																										BgL_l1142z00_2993 =
																											BgL_l1142z00_5275;
																										goto
																											BgL_zc3z04anonymousza31816ze3z87_2992;
																									}
																								}
																							}
																					}
																				}
																			}
																		BgL_nvarsz00_1803 =
																			BGl_genvarsz00zz__r5_macro_4_3_syntaxz00
																			(BgL_arg1814z00_1849);
																	}
																	{	/* R5rs/syntax.scm 523 */
																		obj_t BgL_nenvz00_1804;

																		{	/* R5rs/syntax.scm 524 */
																			obj_t BgL_arg1806z00_1830;

																			if (NULLP(BgL_bindingsz00_1532))
																				{	/* R5rs/syntax.scm 524 */
																					BgL_arg1806z00_1830 = BNIL;
																				}
																			else
																				{	/* R5rs/syntax.scm 524 */
																					obj_t BgL_head1150z00_1834;

																					{	/* R5rs/syntax.scm 524 */
																						obj_t BgL_res2370z00_3012;

																						BgL_res2370z00_3012 =
																							MAKE_YOUNG_PAIR(BNIL, BNIL);
																						BgL_head1150z00_1834 =
																							BgL_res2370z00_3012;
																					}
																					{
																						obj_t BgL_ll1148z00_3048;
																						obj_t BgL_ll1149z00_3049;
																						obj_t BgL_tail1151z00_3050;

																						BgL_ll1148z00_3048 =
																							BgL_bindingsz00_1532;
																						BgL_ll1149z00_3049 =
																							BgL_nvarsz00_1803;
																						BgL_tail1151z00_3050 =
																							BgL_head1150z00_1834;
																					BgL_zc3z04anonymousza31808ze3z87_3047:
																						if (NULLP
																							(BgL_ll1148z00_3048))
																							{	/* R5rs/syntax.scm 524 */
																								BgL_arg1806z00_1830 =
																									CDR(BgL_head1150z00_1834);
																							}
																						else
																							{	/* R5rs/syntax.scm 524 */
																								obj_t BgL_newtail1152z00_3060;

																								{	/* R5rs/syntax.scm 524 */
																									obj_t BgL_arg1812z00_3061;

																									{	/* R5rs/syntax.scm 524 */
																										obj_t BgL_bz00_3062;
																										obj_t BgL_vz00_3063;

																										BgL_bz00_3062 =
																											CAR(
																											((obj_t)
																												BgL_ll1148z00_3048));
																										BgL_vz00_3063 =
																											CAR(((obj_t)
																												BgL_ll1149z00_3049));
																										{	/* R5rs/syntax.scm 525 */
																											obj_t BgL_arg1813z00_3064;

																											BgL_arg1813z00_3064 =
																												CAR(
																												((obj_t)
																													BgL_bz00_3062));
																											BgL_arg1812z00_3061 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1813z00_3064,
																												BgL_vz00_3063);
																										}
																									}
																									{	/* R5rs/syntax.scm 524 */
																										obj_t BgL_res2376z00_3072;

																										BgL_res2376z00_3072 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1812z00_3061,
																											BNIL);
																										BgL_newtail1152z00_3060 =
																											BgL_res2376z00_3072;
																									}
																								}
																								SET_CDR(BgL_tail1151z00_3050,
																									BgL_newtail1152z00_3060);
																								{	/* R5rs/syntax.scm 524 */
																									obj_t BgL_arg1810z00_3065;
																									obj_t BgL_arg1811z00_3066;

																									BgL_arg1810z00_3065 =
																										CDR(
																										((obj_t)
																											BgL_ll1148z00_3048));
																									BgL_arg1811z00_3066 =
																										CDR(((obj_t)
																											BgL_ll1149z00_3049));
																									{
																										obj_t BgL_tail1151z00_5299;
																										obj_t BgL_ll1149z00_5298;
																										obj_t BgL_ll1148z00_5297;

																										BgL_ll1148z00_5297 =
																											BgL_arg1810z00_3065;
																										BgL_ll1149z00_5298 =
																											BgL_arg1811z00_3066;
																										BgL_tail1151z00_5299 =
																											BgL_newtail1152z00_3060;
																										BgL_tail1151z00_3050 =
																											BgL_tail1151z00_5299;
																										BgL_ll1149z00_3049 =
																											BgL_ll1149z00_5298;
																										BgL_ll1148z00_3048 =
																											BgL_ll1148z00_5297;
																										goto
																											BgL_zc3z04anonymousza31808ze3z87_3047;
																									}
																								}
																							}
																					}
																				}
																			BgL_nenvz00_1804 =
																				BGl_appendzd221011zd2zz__r5_macro_4_3_syntaxz00
																				(BgL_arg1806z00_1830, BgL_envz00_43);
																		}
																		{	/* R5rs/syntax.scm 524 */

																			{	/* R5rs/syntax.scm 528 */
																				obj_t BgL_arg1790z00_1805;

																				{	/* R5rs/syntax.scm 528 */
																					obj_t BgL_arg1791z00_1806;
																					obj_t BgL_arg1792z00_1807;

																					if (NULLP(BgL_bindingsz00_1532))
																						{	/* R5rs/syntax.scm 528 */
																							BgL_arg1791z00_1806 = BNIL;
																						}
																					else
																						{	/* R5rs/syntax.scm 528 */
																							obj_t BgL_head1156z00_1811;

																							{	/* R5rs/syntax.scm 528 */
																								obj_t BgL_res2378z00_3077;

																								BgL_res2378z00_3077 =
																									MAKE_YOUNG_PAIR(BNIL, BNIL);
																								BgL_head1156z00_1811 =
																									BgL_res2378z00_3077;
																							}
																							{
																								obj_t BgL_ll1154z00_1813;
																								obj_t BgL_ll1155z00_1814;
																								obj_t BgL_tail1157z00_1815;

																								BgL_ll1154z00_1813 =
																									BgL_bindingsz00_1532;
																								BgL_ll1155z00_1814 =
																									BgL_nvarsz00_1803;
																								BgL_tail1157z00_1815 =
																									BgL_head1156z00_1811;
																							BgL_zc3z04anonymousza31794ze3z87_1816:
																								if (NULLP
																									(BgL_ll1154z00_1813))
																									{	/* R5rs/syntax.scm 528 */
																										BgL_arg1791z00_1806 =
																											CDR(BgL_head1156z00_1811);
																									}
																								else
																									{	/* R5rs/syntax.scm 528 */
																										obj_t
																											BgL_newtail1158z00_1818;
																										{	/* R5rs/syntax.scm 528 */
																											obj_t BgL_arg1798z00_1821;

																											{	/* R5rs/syntax.scm 528 */
																												obj_t BgL_bz00_1822;
																												obj_t BgL_vz00_1823;

																												BgL_bz00_1822 =
																													CAR(
																													((obj_t)
																														BgL_ll1154z00_1813));
																												BgL_vz00_1823 =
																													CAR(((obj_t)
																														BgL_ll1155z00_1814));
																												{	/* R5rs/syntax.scm 529 */
																													obj_t
																														BgL_arg1799z00_1824;
																													{	/* R5rs/syntax.scm 529 */
																														obj_t
																															BgL_arg1803z00_1827;
																														{	/* R5rs/syntax.scm 529 */
																															obj_t
																																BgL_pairz00_3085;
																															BgL_pairz00_3085 =
																																CDR(((obj_t)
																																	BgL_bz00_1822));
																															BgL_arg1803z00_1827
																																=
																																CAR
																																(BgL_pairz00_3085);
																														}
																														BgL_arg1799z00_1824
																															=
																															BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00
																															(BgL_arg1803z00_1827,
																															BgL_envz00_43);
																													}
																													{	/* R5rs/syntax.scm 529 */
																														obj_t
																															BgL_list1800z00_1825;
																														{	/* R5rs/syntax.scm 529 */
																															obj_t
																																BgL_arg1801z00_1826;
																															BgL_arg1801z00_1826
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1799z00_1824,
																																BNIL);
																															BgL_list1800z00_1825
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_vz00_1823,
																																BgL_arg1801z00_1826);
																														}
																														BgL_arg1798z00_1821
																															=
																															BgL_list1800z00_1825;
																													}
																												}
																											}
																											{	/* R5rs/syntax.scm 528 */
																												obj_t
																													BgL_res2381z00_3087;
																												BgL_res2381z00_3087 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1798z00_1821,
																													BNIL);
																												BgL_newtail1158z00_1818
																													= BgL_res2381z00_3087;
																											}
																										}
																										SET_CDR
																											(BgL_tail1157z00_1815,
																											BgL_newtail1158z00_1818);
																										{	/* R5rs/syntax.scm 528 */
																											obj_t BgL_arg1796z00_1819;
																											obj_t BgL_arg1797z00_1820;

																											BgL_arg1796z00_1819 =
																												CDR(
																												((obj_t)
																													BgL_ll1154z00_1813));
																											BgL_arg1797z00_1820 =
																												CDR(((obj_t)
																													BgL_ll1155z00_1814));
																											{
																												obj_t
																													BgL_tail1157z00_5325;
																												obj_t
																													BgL_ll1155z00_5324;
																												obj_t
																													BgL_ll1154z00_5323;
																												BgL_ll1154z00_5323 =
																													BgL_arg1796z00_1819;
																												BgL_ll1155z00_5324 =
																													BgL_arg1797z00_1820;
																												BgL_tail1157z00_5325 =
																													BgL_newtail1158z00_1818;
																												BgL_tail1157z00_1815 =
																													BgL_tail1157z00_5325;
																												BgL_ll1155z00_1814 =
																													BgL_ll1155z00_5324;
																												BgL_ll1154z00_1813 =
																													BgL_ll1154z00_5323;
																												goto
																													BgL_zc3z04anonymousza31794ze3z87_1816;
																											}
																										}
																									}
																							}
																						}
																					BgL_arg1792z00_1807 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00
																						(BgL_nenvz00_1804,
																							BgL_bodyz00_1533), BNIL);
																					BgL_arg1790z00_1805 =
																						MAKE_YOUNG_PAIR(BgL_arg1791z00_1806,
																						BgL_arg1792z00_1807);
																				}
																				return
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2589z00zz__r5_macro_4_3_syntaxz00,
																					BgL_arg1790z00_1805);
																			}
																		}
																	}
																}
															}
														else
															{	/* R5rs/syntax.scm 507 */
																return
																	BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00
																	(BgL_envz00_43, BgL_xz00_42);
															}
													}
												else
													{	/* R5rs/syntax.scm 507 */
														obj_t BgL_cdrzd2353zd2_1568;

														BgL_cdrzd2353zd2_1568 = CDR(BgL_xz00_42);
														if (
															(CAR(BgL_xz00_42) ==
																BGl_symbol2686z00zz__r5_macro_4_3_syntaxz00))
															{	/* R5rs/syntax.scm 507 */
																if (PAIRP(BgL_cdrzd2353zd2_1568))
																	{	/* R5rs/syntax.scm 507 */
																		BgL_bindingsz00_1539 =
																			CAR(BgL_cdrzd2353zd2_1568);
																		BgL_bodyz00_1540 =
																			CDR(BgL_cdrzd2353zd2_1568);
																		{
																			obj_t BgL_bindingsz00_1935;
																			obj_t BgL_nbindingsz00_1936;
																			obj_t BgL_nenvz00_1937;

																			BgL_bindingsz00_1935 =
																				BgL_bindingsz00_1539;
																			BgL_nbindingsz00_1936 = BNIL;
																			BgL_nenvz00_1937 = BgL_envz00_43;
																		BgL_zc3z04anonymousza31860ze3z87_1938:
																			if (NULLP(BgL_bindingsz00_1935))
																				{	/* R5rs/syntax.scm 549 */
																					obj_t BgL_arg1862z00_1940;

																					BgL_arg1862z00_1940 =
																						MAKE_YOUNG_PAIR(bgl_reverse
																						(BgL_nbindingsz00_1936),
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00
																							(BgL_nenvz00_1937,
																								BgL_bodyz00_1540), BNIL));
																					return
																						MAKE_YOUNG_PAIR
																						(BGl_symbol2686z00zz__r5_macro_4_3_syntaxz00,
																						BgL_arg1862z00_1940);
																				}
																			else
																				{	/* R5rs/syntax.scm 550 */
																					obj_t BgL_varz00_1944;

																					{	/* R5rs/syntax.scm 550 */
																						obj_t BgL_pairz00_3221;

																						BgL_pairz00_3221 =
																							CAR(
																							((obj_t) BgL_bindingsz00_1935));
																						BgL_varz00_1944 =
																							CAR(BgL_pairz00_3221);
																					}
																					{	/* R5rs/syntax.scm 551 */
																						obj_t BgL_nvarz00_1946;

																						BgL_nvarz00_1946 =
																							BGl_genvarsz00zz__r5_macro_4_3_syntaxz00
																							(BgL_varz00_1944);
																						{	/* R5rs/syntax.scm 552 */
																							obj_t BgL_nenvz00_1947;

																							{	/* R5rs/syntax.scm 553 */
																								obj_t BgL_arg1876z00_1954;

																								BgL_arg1876z00_1954 =
																									MAKE_YOUNG_PAIR
																									(BgL_varz00_1944,
																									BgL_nvarz00_1946);
																								BgL_nenvz00_1947 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1876z00_1954,
																									BgL_envz00_43);
																							}
																							{	/* R5rs/syntax.scm 553 */

																								{	/* R5rs/syntax.scm 554 */
																									obj_t BgL_arg1868z00_1948;
																									obj_t BgL_arg1870z00_1949;

																									BgL_arg1868z00_1948 =
																										CDR(
																										((obj_t)
																											BgL_bindingsz00_1935));
																									{	/* R5rs/syntax.scm 555 */
																										obj_t BgL_arg1871z00_1950;

																										{	/* R5rs/syntax.scm 555 */
																											obj_t BgL_arg1872z00_1951;

																											BgL_arg1872z00_1951 =
																												BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00
																												(BgL_varz00_1944,
																												BgL_envz00_43);
																											{	/* R5rs/syntax.scm 555 */
																												obj_t
																													BgL_list1873z00_1952;
																												{	/* R5rs/syntax.scm 555 */
																													obj_t
																														BgL_arg1874z00_1953;
																													BgL_arg1874z00_1953 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1872z00_1951,
																														BNIL);
																													BgL_list1873z00_1952 =
																														MAKE_YOUNG_PAIR
																														(BgL_varz00_1944,
																														BgL_arg1874z00_1953);
																												}
																												BgL_arg1871z00_1950 =
																													BgL_list1873z00_1952;
																											}
																										}
																										BgL_arg1870z00_1949 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1871z00_1950,
																											BgL_nbindingsz00_1936);
																									}
																									{
																										obj_t BgL_nenvz00_5360;
																										obj_t BgL_nbindingsz00_5359;
																										obj_t BgL_bindingsz00_5358;

																										BgL_bindingsz00_5358 =
																											BgL_arg1868z00_1948;
																										BgL_nbindingsz00_5359 =
																											BgL_arg1870z00_1949;
																										BgL_nenvz00_5360 =
																											BgL_nenvz00_1947;
																										BgL_nenvz00_1937 =
																											BgL_nenvz00_5360;
																										BgL_nbindingsz00_1936 =
																											BgL_nbindingsz00_5359;
																										BgL_bindingsz00_1935 =
																											BgL_bindingsz00_5358;
																										goto
																											BgL_zc3z04anonymousza31860ze3z87_1938;
																									}
																								}
																							}
																						}
																					}
																				}
																		}
																	}
																else
																	{	/* R5rs/syntax.scm 507 */
																		return
																			BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00
																			(BgL_envz00_43, BgL_xz00_42);
																	}
															}
														else
															{	/* R5rs/syntax.scm 507 */
																if (
																	(CAR(BgL_xz00_42) ==
																		BGl_symbol2682z00zz__r5_macro_4_3_syntaxz00))
																	{	/* R5rs/syntax.scm 507 */
																		if (PAIRP(BgL_cdrzd2353zd2_1568))
																			{	/* R5rs/syntax.scm 507 */
																				BgL_bindingsz00_1542 =
																					CAR(BgL_cdrzd2353zd2_1568);
																				BgL_bodyz00_1543 =
																					CDR(BgL_cdrzd2353zd2_1568);
																				{	/* R5rs/syntax.scm 558 */
																					obj_t BgL_nvarsz00_1956;

																					{	/* R5rs/syntax.scm 558 */
																						obj_t BgL_arg1902z00_2002;

																						if (NULLP(BgL_bindingsz00_1542))
																							{	/* R5rs/syntax.scm 558 */
																								BgL_arg1902z00_2002 = BNIL;
																							}
																						else
																							{	/* R5rs/syntax.scm 558 */
																								obj_t BgL_head1180z00_2005;

																								{	/* R5rs/syntax.scm 558 */
																									obj_t BgL_arg1909z00_2017;

																									{	/* R5rs/syntax.scm 558 */
																										obj_t BgL_pairz00_3232;

																										BgL_pairz00_3232 =
																											CAR(
																											((obj_t)
																												BgL_bindingsz00_1542));
																										BgL_arg1909z00_2017 =
																											CAR(BgL_pairz00_3232);
																									}
																									{	/* R5rs/syntax.scm 558 */
																										obj_t BgL_res2406z00_3233;

																										BgL_res2406z00_3233 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1909z00_2017,
																											BNIL);
																										BgL_head1180z00_2005 =
																											BgL_res2406z00_3233;
																									}
																								}
																								{	/* R5rs/syntax.scm 558 */
																									obj_t BgL_g1183z00_2006;

																									BgL_g1183z00_2006 =
																										CDR(
																										((obj_t)
																											BgL_bindingsz00_1542));
																									{
																										obj_t BgL_l1178z00_3258;
																										obj_t BgL_tail1181z00_3259;

																										BgL_l1178z00_3258 =
																											BgL_g1183z00_2006;
																										BgL_tail1181z00_3259 =
																											BgL_head1180z00_2005;
																									BgL_zc3z04anonymousza31904ze3z87_3257:
																										if (NULLP
																											(BgL_l1178z00_3258))
																											{	/* R5rs/syntax.scm 558 */
																												BgL_arg1902z00_2002 =
																													BgL_head1180z00_2005;
																											}
																										else
																											{	/* R5rs/syntax.scm 558 */
																												obj_t
																													BgL_newtail1182z00_3266;
																												{	/* R5rs/syntax.scm 558 */
																													obj_t
																														BgL_arg1907z00_3267;
																													{	/* R5rs/syntax.scm 558 */
																														obj_t
																															BgL_pairz00_3272;
																														BgL_pairz00_3272 =
																															CAR(((obj_t)
																																BgL_l1178z00_3258));
																														BgL_arg1907z00_3267
																															=
																															CAR
																															(BgL_pairz00_3272);
																													}
																													{	/* R5rs/syntax.scm 558 */
																														obj_t
																															BgL_res2412z00_3273;
																														BgL_res2412z00_3273
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1907z00_3267,
																															BNIL);
																														BgL_newtail1182z00_3266
																															=
																															BgL_res2412z00_3273;
																													}
																												}
																												SET_CDR
																													(BgL_tail1181z00_3259,
																													BgL_newtail1182z00_3266);
																												{	/* R5rs/syntax.scm 558 */
																													obj_t
																														BgL_arg1906z00_3269;
																													BgL_arg1906z00_3269 =
																														CDR(((obj_t)
																															BgL_l1178z00_3258));
																													{
																														obj_t
																															BgL_tail1181z00_5387;
																														obj_t
																															BgL_l1178z00_5386;
																														BgL_l1178z00_5386 =
																															BgL_arg1906z00_3269;
																														BgL_tail1181z00_5387
																															=
																															BgL_newtail1182z00_3266;
																														BgL_tail1181z00_3259
																															=
																															BgL_tail1181z00_5387;
																														BgL_l1178z00_3258 =
																															BgL_l1178z00_5386;
																														goto
																															BgL_zc3z04anonymousza31904ze3z87_3257;
																													}
																												}
																											}
																									}
																								}
																							}
																						BgL_nvarsz00_1956 =
																							BGl_genvarsz00zz__r5_macro_4_3_syntaxz00
																							(BgL_arg1902z00_2002);
																					}
																					{	/* R5rs/syntax.scm 558 */
																						obj_t BgL_nenvz00_1957;

																						{	/* R5rs/syntax.scm 559 */
																							obj_t BgL_arg1892z00_1983;

																							if (NULLP(BgL_bindingsz00_1542))
																								{	/* R5rs/syntax.scm 559 */
																									BgL_arg1892z00_1983 = BNIL;
																								}
																							else
																								{	/* R5rs/syntax.scm 559 */
																									obj_t BgL_head1186z00_1987;

																									{	/* R5rs/syntax.scm 559 */
																										obj_t BgL_res2414z00_3277;

																										BgL_res2414z00_3277 =
																											MAKE_YOUNG_PAIR(BNIL,
																											BNIL);
																										BgL_head1186z00_1987 =
																											BgL_res2414z00_3277;
																									}
																									{
																										obj_t BgL_ll1184z00_3313;
																										obj_t BgL_ll1185z00_3314;
																										obj_t BgL_tail1187z00_3315;

																										BgL_ll1184z00_3313 =
																											BgL_bindingsz00_1542;
																										BgL_ll1185z00_3314 =
																											BgL_nvarsz00_1956;
																										BgL_tail1187z00_3315 =
																											BgL_head1186z00_1987;
																									BgL_zc3z04anonymousza31894ze3z87_3312:
																										if (NULLP
																											(BgL_ll1184z00_3313))
																											{	/* R5rs/syntax.scm 559 */
																												BgL_arg1892z00_1983 =
																													CDR
																													(BgL_head1186z00_1987);
																											}
																										else
																											{	/* R5rs/syntax.scm 559 */
																												obj_t
																													BgL_newtail1188z00_3325;
																												{	/* R5rs/syntax.scm 559 */
																													obj_t
																														BgL_arg1898z00_3326;
																													{	/* R5rs/syntax.scm 559 */
																														obj_t BgL_bz00_3327;
																														obj_t BgL_vz00_3328;

																														BgL_bz00_3327 =
																															CAR(
																															((obj_t)
																																BgL_ll1184z00_3313));
																														BgL_vz00_3328 =
																															CAR(((obj_t)
																																BgL_ll1185z00_3314));
																														{	/* R5rs/syntax.scm 560 */
																															obj_t
																																BgL_arg1901z00_3329;
																															BgL_arg1901z00_3329
																																=
																																CAR(((obj_t)
																																	BgL_bz00_3327));
																															BgL_arg1898z00_3326
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1901z00_3329,
																																BgL_vz00_3328);
																														}
																													}
																													{	/* R5rs/syntax.scm 559 */
																														obj_t
																															BgL_res2420z00_3337;
																														BgL_res2420z00_3337
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1898z00_3326,
																															BNIL);
																														BgL_newtail1188z00_3325
																															=
																															BgL_res2420z00_3337;
																													}
																												}
																												SET_CDR
																													(BgL_tail1187z00_3315,
																													BgL_newtail1188z00_3325);
																												{	/* R5rs/syntax.scm 559 */
																													obj_t
																														BgL_arg1896z00_3330;
																													obj_t
																														BgL_arg1897z00_3331;
																													BgL_arg1896z00_3330 =
																														CDR(((obj_t)
																															BgL_ll1184z00_3313));
																													BgL_arg1897z00_3331 =
																														CDR(((obj_t)
																															BgL_ll1185z00_3314));
																													{
																														obj_t
																															BgL_tail1187z00_5410;
																														obj_t
																															BgL_ll1185z00_5409;
																														obj_t
																															BgL_ll1184z00_5408;
																														BgL_ll1184z00_5408 =
																															BgL_arg1896z00_3330;
																														BgL_ll1185z00_5409 =
																															BgL_arg1897z00_3331;
																														BgL_tail1187z00_5410
																															=
																															BgL_newtail1188z00_3325;
																														BgL_tail1187z00_3315
																															=
																															BgL_tail1187z00_5410;
																														BgL_ll1185z00_3314 =
																															BgL_ll1185z00_5409;
																														BgL_ll1184z00_3313 =
																															BgL_ll1184z00_5408;
																														goto
																															BgL_zc3z04anonymousza31894ze3z87_3312;
																													}
																												}
																											}
																									}
																								}
																							BgL_nenvz00_1957 =
																								BGl_appendzd221011zd2zz__r5_macro_4_3_syntaxz00
																								(BgL_arg1892z00_1983,
																								BgL_envz00_43);
																						}
																						{	/* R5rs/syntax.scm 559 */

																							{	/* R5rs/syntax.scm 563 */
																								obj_t BgL_arg1877z00_1958;

																								{	/* R5rs/syntax.scm 563 */
																									obj_t BgL_arg1878z00_1959;
																									obj_t BgL_arg1879z00_1960;

																									if (NULLP
																										(BgL_bindingsz00_1542))
																										{	/* R5rs/syntax.scm 563 */
																											BgL_arg1878z00_1959 =
																												BNIL;
																										}
																									else
																										{	/* R5rs/syntax.scm 563 */
																											obj_t
																												BgL_head1192z00_1964;
																											{	/* R5rs/syntax.scm 563 */
																												obj_t
																													BgL_res2422z00_3342;
																												BgL_res2422z00_3342 =
																													MAKE_YOUNG_PAIR(BNIL,
																													BNIL);
																												BgL_head1192z00_1964 =
																													BgL_res2422z00_3342;
																											}
																											{
																												obj_t
																													BgL_ll1190z00_1966;
																												obj_t
																													BgL_ll1191z00_1967;
																												obj_t
																													BgL_tail1193z00_1968;
																												BgL_ll1190z00_1966 =
																													BgL_bindingsz00_1542;
																												BgL_ll1191z00_1967 =
																													BgL_nvarsz00_1956;
																												BgL_tail1193z00_1968 =
																													BgL_head1192z00_1964;
																											BgL_zc3z04anonymousza31881ze3z87_1969:
																												if (NULLP
																													(BgL_ll1190z00_1966))
																													{	/* R5rs/syntax.scm 563 */
																														BgL_arg1878z00_1959
																															=
																															CDR
																															(BgL_head1192z00_1964);
																													}
																												else
																													{	/* R5rs/syntax.scm 563 */
																														obj_t
																															BgL_newtail1194z00_1971;
																														{	/* R5rs/syntax.scm 563 */
																															obj_t
																																BgL_arg1885z00_1974;
																															{	/* R5rs/syntax.scm 563 */
																																obj_t
																																	BgL_bz00_1975;
																																obj_t
																																	BgL_vz00_1976;
																																BgL_bz00_1975 =
																																	CAR(((obj_t)
																																		BgL_ll1190z00_1966));
																																BgL_vz00_1976 =
																																	CAR(((obj_t)
																																		BgL_ll1191z00_1967));
																																{	/* R5rs/syntax.scm 564 */
																																	obj_t
																																		BgL_arg1886z00_1977;
																																	{	/* R5rs/syntax.scm 564 */
																																		obj_t
																																			BgL_arg1889z00_1980;
																																		{	/* R5rs/syntax.scm 564 */
																																			obj_t
																																				BgL_pairz00_3350;
																																			BgL_pairz00_3350
																																				=
																																				CDR((
																																					(obj_t)
																																					BgL_bz00_1975));
																																			BgL_arg1889z00_1980
																																				=
																																				CAR
																																				(BgL_pairz00_3350);
																																		}
																																		BgL_arg1886z00_1977
																																			=
																																			BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00
																																			(BgL_arg1889z00_1980,
																																			BgL_nenvz00_1957);
																																	}
																																	{	/* R5rs/syntax.scm 564 */
																																		obj_t
																																			BgL_list1887z00_1978;
																																		{	/* R5rs/syntax.scm 564 */
																																			obj_t
																																				BgL_arg1888z00_1979;
																																			BgL_arg1888z00_1979
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1886z00_1977,
																																				BNIL);
																																			BgL_list1887z00_1978
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_vz00_1976,
																																				BgL_arg1888z00_1979);
																																		}
																																		BgL_arg1885z00_1974
																																			=
																																			BgL_list1887z00_1978;
																																	}
																																}
																															}
																															{	/* R5rs/syntax.scm 563 */
																																obj_t
																																	BgL_res2425z00_3352;
																																BgL_res2425z00_3352
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1885z00_1974,
																																	BNIL);
																																BgL_newtail1194z00_1971
																																	=
																																	BgL_res2425z00_3352;
																															}
																														}
																														SET_CDR
																															(BgL_tail1193z00_1968,
																															BgL_newtail1194z00_1971);
																														{	/* R5rs/syntax.scm 563 */
																															obj_t
																																BgL_arg1883z00_1972;
																															obj_t
																																BgL_arg1884z00_1973;
																															BgL_arg1883z00_1972
																																=
																																CDR(((obj_t)
																																	BgL_ll1190z00_1966));
																															BgL_arg1884z00_1973
																																=
																																CDR(((obj_t)
																																	BgL_ll1191z00_1967));
																															{
																																obj_t
																																	BgL_tail1193z00_5436;
																																obj_t
																																	BgL_ll1191z00_5435;
																																obj_t
																																	BgL_ll1190z00_5434;
																																BgL_ll1190z00_5434
																																	=
																																	BgL_arg1883z00_1972;
																																BgL_ll1191z00_5435
																																	=
																																	BgL_arg1884z00_1973;
																																BgL_tail1193z00_5436
																																	=
																																	BgL_newtail1194z00_1971;
																																BgL_tail1193z00_1968
																																	=
																																	BgL_tail1193z00_5436;
																																BgL_ll1191z00_1967
																																	=
																																	BgL_ll1191z00_5435;
																																BgL_ll1190z00_1966
																																	=
																																	BgL_ll1190z00_5434;
																																goto
																																	BgL_zc3z04anonymousza31881ze3z87_1969;
																															}
																														}
																													}
																											}
																										}
																									BgL_arg1879z00_1960 =
																										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																										(BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00
																										(BgL_nenvz00_1957,
																											BgL_bodyz00_1543), BNIL);
																									BgL_arg1877z00_1958 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1878z00_1959,
																										BgL_arg1879z00_1960);
																								}
																								return
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2682z00zz__r5_macro_4_3_syntaxz00,
																									BgL_arg1877z00_1958);
																							}
																						}
																					}
																				}
																			}
																		else
																			{	/* R5rs/syntax.scm 507 */
																				return
																					BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00
																					(BgL_envz00_43, BgL_xz00_42);
																			}
																	}
																else
																	{	/* R5rs/syntax.scm 507 */
																		obj_t BgL_cdrzd2391zd2_1580;

																		BgL_cdrzd2391zd2_1580 = CDR(BgL_xz00_42);
																		if (
																			(CAR(BgL_xz00_42) ==
																				BGl_symbol2806z00zz__r5_macro_4_3_syntaxz00))
																			{	/* R5rs/syntax.scm 507 */
																				if (PAIRP(BgL_cdrzd2391zd2_1580))
																					{	/* R5rs/syntax.scm 507 */
																						obj_t BgL_carzd2394zd2_1584;

																						BgL_carzd2394zd2_1584 =
																							CAR(BgL_cdrzd2391zd2_1580);
																						if (PAIRP(BgL_carzd2394zd2_1584))
																							{	/* R5rs/syntax.scm 507 */
																								if (NULLP(CDR
																										(BgL_carzd2394zd2_1584)))
																									{	/* R5rs/syntax.scm 507 */
																										obj_t BgL_arg1582z00_1588;
																										obj_t BgL_arg1583z00_1589;

																										BgL_arg1582z00_1588 =
																											CAR
																											(BgL_carzd2394zd2_1584);
																										BgL_arg1583z00_1589 =
																											CDR
																											(BgL_cdrzd2391zd2_1580);
																										{	/* R5rs/syntax.scm 568 */
																											obj_t BgL_nvarz00_3397;

																											BgL_nvarz00_3397 =
																												BGl_genvarsz00zz__r5_macro_4_3_syntaxz00
																												(BgL_arg1582z00_1588);
																											{	/* R5rs/syntax.scm 568 */
																												obj_t BgL_nenvz00_3398;

																												{	/* R5rs/syntax.scm 569 */
																													obj_t
																														BgL_arg1915z00_3399;
																													BgL_arg1915z00_3399 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1582z00_1588,
																														BgL_nvarz00_3397);
																													BgL_nenvz00_3398 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1915z00_3399,
																														BgL_envz00_43);
																												}
																												{	/* R5rs/syntax.scm 569 */

																													{	/* R5rs/syntax.scm 570 */
																														obj_t
																															BgL_arg1911z00_3400;
																														{	/* R5rs/syntax.scm 570 */
																															obj_t
																																BgL_arg1912z00_3401;
																															obj_t
																																BgL_arg1913z00_3402;
																															BgL_arg1912z00_3401
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_nvarz00_3397,
																																BNIL);
																															BgL_arg1913z00_3402
																																=
																																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																(BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00
																																(BgL_nenvz00_3398,
																																	BgL_arg1583z00_1589),
																																BNIL);
																															BgL_arg1911z00_3400
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1912z00_3401,
																																BgL_arg1913z00_3402);
																														}
																														return
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2806z00zz__r5_macro_4_3_syntaxz00,
																															BgL_arg1911z00_3400);
																													}
																												}
																											}
																										}
																									}
																								else
																									{	/* R5rs/syntax.scm 507 */
																										return
																											BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00
																											(BgL_envz00_43,
																											BgL_xz00_42);
																									}
																							}
																						else
																							{	/* R5rs/syntax.scm 507 */
																								return
																									BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00
																									(BgL_envz00_43, BgL_xz00_42);
																							}
																					}
																				else
																					{	/* R5rs/syntax.scm 507 */
																						return
																							BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00
																							(BgL_envz00_43, BgL_xz00_42);
																					}
																			}
																		else
																			{	/* R5rs/syntax.scm 507 */
																				return
																					BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00
																					(BgL_envz00_43, BgL_xz00_42);
																			}
																	}
															}
													}
											}
									}
							}
						else
							{	/* R5rs/syntax.scm 507 */
								return BgL_xz00_42;
							}
					}
			}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3902,
		obj_t BgL_xz00_2027)
	{
		{	/* R5rs/syntax.scm 580 */
			if (PAIRP(BgL_xz00_2027))
				{	/* R5rs/syntax.scm 582 */
					return
						MAKE_YOUNG_PAIR(BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(CAR
							(BgL_xz00_2027), BgL_envz00_3902),
						BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00(BgL_envz00_3902,
							CDR(BgL_xz00_2027)));
				}
			else
				{	/* R5rs/syntax.scm 582 */
					if (NULLP(BgL_xz00_2027))
						{	/* R5rs/syntax.scm 584 */
							return BNIL;
						}
					else
						{	/* R5rs/syntax.scm 584 */
							return
								BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(BgL_xz00_2027,
								BgL_envz00_3902);
						}
				}
		}

	}



/* flatten */
	obj_t BGl_flattenz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_lz00_46)
	{
		{	/* R5rs/syntax.scm 592 */
			if (PAIRP(BgL_lz00_46))
				{	/* R5rs/syntax.scm 594 */
					return
						MAKE_YOUNG_PAIR(CAR(BgL_lz00_46),
						BGl_flattenz00zz__r5_macro_4_3_syntaxz00(CDR(BgL_lz00_46)));
				}
			else
				{	/* R5rs/syntax.scm 594 */
					if (NULLP(BgL_lz00_46))
						{	/* R5rs/syntax.scm 595 */
							return BgL_lz00_46;
						}
					else
						{	/* R5rs/syntax.scm 596 */
							obj_t BgL_list1928z00_2041;

							BgL_list1928z00_2041 = MAKE_YOUNG_PAIR(BgL_lz00_46, BNIL);
							return BgL_list1928z00_2041;
						}
				}
		}

	}



/* genvars */
	obj_t BGl_genvarsz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_lz00_47)
	{
		{	/* R5rs/syntax.scm 601 */
			if (PAIRP(BgL_lz00_47))
				{	/* R5rs/syntax.scm 611 */
					return
						MAKE_YOUNG_PAIR(BGl_gennameze70ze7zz__r5_macro_4_3_syntaxz00(CAR
							(BgL_lz00_47)),
						BGl_genvarsz00zz__r5_macro_4_3_syntaxz00(CDR(BgL_lz00_47)));
				}
			else
				{	/* R5rs/syntax.scm 611 */
					if (NULLP(BgL_lz00_47))
						{	/* R5rs/syntax.scm 612 */
							return BgL_lz00_47;
						}
					else
						{	/* R5rs/syntax.scm 612 */
							return BGl_gennameze70ze7zz__r5_macro_4_3_syntaxz00(BgL_lz00_47);
						}
				}
		}

	}



/* genname~0 */
	obj_t BGl_gennameze70ze7zz__r5_macro_4_3_syntaxz00(obj_t BgL_lz00_2049)
	{
		{	/* R5rs/syntax.scm 609 */
			{

				if (SYMBOLP(BgL_lz00_2049))
					{	/* R5rs/syntax.scm 609 */
						{	/* R5rs/syntax.scm 605 */
							bool_t BgL_test3058z00_5501;

							{	/* R5rs/syntax.scm 468 */
								obj_t BgL_sz00_3585;

								{	/* R5rs/syntax.scm 468 */
									obj_t BgL_res2480z00_3588;

									{	/* R5rs/syntax.scm 468 */
										obj_t BgL_arg2071z00_3587;

										BgL_arg2071z00_3587 =
											SYMBOL_TO_STRING(((obj_t) BgL_lz00_2049));
										BgL_res2480z00_3588 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2071z00_3587);
									}
									BgL_sz00_3585 = BgL_res2480z00_3588;
								}
								BgL_test3058z00_5501 =
									bigloo_strcmp_at(BgL_sz00_3585,
									BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00,
									((long) 0));
							}
							if (BgL_test3058z00_5501)
								{	/* R5rs/syntax.scm 605 */
									return
										BGl_hygienezd2valuezd2zz__r5_macro_4_3_syntaxz00
										(BgL_lz00_2049);
								}
							else
								{	/* R5rs/syntax.scm 605 */
									return BGl_gensymz00zz__r4_symbols_6_4z00(BgL_lz00_2049);
								}
						}
					}
				else
					{	/* R5rs/syntax.scm 609 */

						{	/* R5rs/syntax.scm 609 */

							return BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
						}
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__r5_macro_4_3_syntaxz00()
	{
		{	/* R5rs/syntax.scm 17 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__r5_macro_4_3_syntaxz00()
	{
		{	/* R5rs/syntax.scm 17 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__r5_macro_4_3_syntaxz00()
	{
		{	/* R5rs/syntax.scm 17 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r5_macro_4_3_syntaxz00()
	{
		{	/* R5rs/syntax.scm 17 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2808z00zz__r5_macro_4_3_syntaxz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string2808z00zz__r5_macro_4_3_syntaxz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string2808z00zz__r5_macro_4_3_syntaxz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string2808z00zz__r5_macro_4_3_syntaxz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string2808z00zz__r5_macro_4_3_syntaxz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string2808z00zz__r5_macro_4_3_syntaxz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string2808z00zz__r5_macro_4_3_syntaxz00));
			return
				BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00((
					(long) 268155874),
				BSTRING_TO_STRING(BGl_string2808z00zz__r5_macro_4_3_syntaxz00));
		}

	}

#ifdef __cplusplus
}
#endif
