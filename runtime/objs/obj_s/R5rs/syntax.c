/*===========================================================================*/
/*   (R5rs/syntax.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c R5rs/syntax.scm -indent -o objs/obj_s/R5rs/syntax.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_syntaxzd2expanderzd2zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
static obj_t BGl_z62syntaxzd2expanderzb0zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2801z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2720z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2723z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2806z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2728z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_expandzd2letreczd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol2810z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2730z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static bool_t BGl_ellipsiszf3zf3zz__r5_macro_4_3_syntaxz00(obj_t);
static obj_t BGl_symbol2814z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_syntaxzd2getzd2framesz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_z62zc3z04anonymousza31839ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
static obj_t BGl_hygienezd2markzd2zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2824z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2826z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2829z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static bool_t BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
static obj_t BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t, obj_t);
extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol2831z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2750z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2675z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2919z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2757z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
static obj_t BGl_symbol2677z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2759z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2921z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2923z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2842z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2844z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2764z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2846z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2929z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2686z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_initzd2syntaxzd2expandersz12z12zz__r5_macro_4_3_syntaxz00();
static obj_t BGl_symbol2688z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_toplevelzd2initzd2zz__r5_macro_4_3_syntaxz00();
static obj_t BGl_unhygieniza7eza7zz__r5_macro_4_3_syntaxz00(obj_t);
static obj_t BGl_z62syntaxzd2ruleszd2ze3expanderz81zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol2932z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2691z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2854z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2773z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2693z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2777z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2699z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
extern obj_t bgl_reverse(obj_t);
BGL_EXPORTED_DECL obj_t BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
static obj_t BGl_genericzd2initzd2zz__r5_macro_4_3_syntaxz00();
extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_keyword2989z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2941z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2863z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2782z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2868z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_objectzd2initzd2zz__r5_macro_4_3_syntaxz00();
static obj_t BGl_symbol2870z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2791z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol2793z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2956z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2876z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2795z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2958z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2878z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2797z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2961z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2966z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2885z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2887z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2889z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2892z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2894z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl_symbol2899z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_z62zc3z04anonymousza31233ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2981z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_appendzd221011zd2zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
static obj_t BGl_methodzd2initzd2zz__r5_macro_4_3_syntaxz00();
static obj_t BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31308ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
extern obj_t BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_z62zc3z04anonymousza31350ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
static obj_t BGl_hygienezd2valuezd2zz__r5_macro_4_3_syntaxz00(obj_t);
extern obj_t string_append(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31343ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_flattenz00zz__r5_macro_4_3_syntaxz00(obj_t);
extern obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
extern bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31248ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
static obj_t BGl_list2705z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2708z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2709z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2710z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2715z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2718z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2719z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_expandzd2letzd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
extern obj_t BGl_installzd2expanderzd2zz__macroz00(obj_t, obj_t);
static obj_t BGl_symbol3009z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2800z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_list2803z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2722z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2804z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2805z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2725z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2726z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2808z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2727z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2809z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_genvarsz00zz__r5_macro_4_3_syntaxz00(obj_t);
static long BGl_hygienezd2prefixzd2lenz00zz__r5_macro_4_3_syntaxz00;
static obj_t BGl_z62zc3z04anonymousza31259ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
static obj_t BGl_list2812z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2813z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2732z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2733z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2734z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2816z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2735z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2817z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2736z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2818z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2737z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2819z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2738z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2739z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_getzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(obj_t);
static obj_t BGl_list2901z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2820z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2902z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2821z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2740z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2903z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2822z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2741z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2904z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2823z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2742z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2905z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2743z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2906z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2744z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2907z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2745z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2908z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2746z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2909z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2828z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2747z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2748z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_cnstzd2initzd2zz__r5_macro_4_3_syntaxz00();
extern long bgl_list_length(obj_t);
static obj_t BGl_z62installzd2syntaxzd2expanderz62zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
static obj_t BGl_list2910z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2911z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2912z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2913z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2833z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2752z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2834z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2753z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2835z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2754z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2836z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2755z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2918z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2837z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2756z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2838z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2839z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_gczd2rootszd2initz00zz__r5_macro_4_3_syntaxz00();
static obj_t BGl_importedzd2moduleszd2initz00zz__r5_macro_4_3_syntaxz00();
static obj_t BGl_z62expandzd2definezd2syntaxz62zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
static obj_t BGl_list2840z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2841z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2761z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2762z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2763z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2928z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2766z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2848z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2767z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2768z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2769z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
extern bool_t bigloo_strcmp_at(obj_t, obj_t, long);
static obj_t BGl_list2931z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2850z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2851z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2770z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2852z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2771z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2690z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2853z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2772z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2856z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2775z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2857z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2776z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2695z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2858z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2696z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2859z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2697z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2779z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2698z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_expandzd2definezd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
static obj_t BGl_gennameze70ze7zz__r5_macro_4_3_syntaxz00(obj_t);
static obj_t BGl_list2940z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2860z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_syntaxzd2expanderszd2mutexz00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2861z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2780z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2862z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2781z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2865z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2784z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2866z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2785z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2867z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2786z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2787z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2788z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2789z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2790z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2872z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
static obj_t BGl_list2873z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2955z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2874z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
static obj_t BGl_list2875z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2799z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_z62zc3z04anonymousza31751ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
static obj_t BGl_list2960z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2880z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2881z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2882z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2883z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2965z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2884z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
extern obj_t BGl_mapz00zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
static obj_t BGl_loopze71ze7zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
static obj_t BGl_loopze72ze7zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
static obj_t BGl_getzd2ellipsiszd2framesz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
static obj_t BGl_loopze73ze7zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
static obj_t BGl_list2891z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2974z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2896z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2897z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list2898z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
extern obj_t bstring_to_keyword(obj_t);
static obj_t BGl_list2980z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_subze70ze7zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31762ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2701z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2706z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_z62expandzd2letreczd2syntaxz62zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62expandzd2letzd2syntaxz62zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31828ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2711z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2713z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol2716z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t *__cnst;


DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3004z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_za762za7c3za704anonymo3048za7, BGl_z62zc3z04anonymousza31762ze3ze5zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3010z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3010za700za7za7_3049za7, "bind-exit", 9 );
DEFINE_STRING( BGl_string3011z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3011za700za7za7_3050za7, "<@anonymous:1828>", 17 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3007z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_za762za7c3za704anonymo3051za7, BGl_z62zc3z04anonymousza31839ze3ze5zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3012z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3012za700za7za7_3052za7, "<@anonymous:1839>", 17 );
DEFINE_STRING( BGl_string3015z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3015za700za7za7_3053za7, "<@anonymous:1751>", 17 );
DEFINE_STRING( BGl_string3016z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3016za700za7za7_3054za7, "<@anonymous:1762>", 17 );
DEFINE_STRING( BGl_string3017z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3017za700za7za7_3055za7, "TAG-870", 7 );
DEFINE_STRING( BGl_string3018z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3018za700za7za7_3056za7, "__r5_macro_4_3_syntax", 21 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_installzd2syntaxzd2expanderzd2envzd2zz__r5_macro_4_3_syntaxz00, BgL_bgl_za762installza7d2syn3057z00, BGl_z62installzd2syntaxzd2expanderz62zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2 );
extern obj_t BGl_appendzd2envzd2zz__r4_pairs_and_lists_6_3z00;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_expandzd2definezd2syntaxzd2envzd2zz__r5_macro_4_3_syntaxz00, BgL_bgl_za762expandza7d2defi3058z00, BGl_z62expandzd2definezd2syntaxz62zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2 );
extern obj_t BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_expandzd2letzd2syntaxzd2envzd2zz__r5_macro_4_3_syntaxz00, BgL_bgl_za762expandza7d2letza73059za7, BGl_z62expandzd2letzd2syntaxz62zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2700z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2700za700za7za7_3060za7, "result1", 7 );
DEFINE_STRING( BGl_string2702z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2702za700za7za7_3061za7, "result2", 7 );
DEFINE_STRING( BGl_string2704z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2704za700za7za7_3062za7, "...", 3 );
DEFINE_STRING( BGl_string2707z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2707za700za7za7_3063za7, "begin", 5 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_syntaxzd2expanderzd2envz00zz__r5_macro_4_3_syntaxz00, BgL_bgl_za762syntaxza7d2expa3064z00, BGl_z62syntaxzd2expanderzb0zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2712z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2712za700za7za7_3065za7, "test", 4 );
DEFINE_STRING( BGl_string2714z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2714za700za7za7_3066za7, "result", 6 );
DEFINE_STRING( BGl_string2717z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2717za700za7za7_3067za7, "let", 3 );
DEFINE_STRING( BGl_string2802z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2802za700za7za7_3068za7, "lambda", 6 );
DEFINE_STRING( BGl_string2721z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2721za700za7za7_3069za7, "temp", 4 );
DEFINE_STRING( BGl_string2724z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2724za700za7za7_3070za7, "if", 2 );
DEFINE_STRING( BGl_string2807z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2807za700za7za7_3071za7, "tag", 3 );
DEFINE_STRING( BGl_string2729z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2729za700za7za7_3072za7, "clause1", 7 );
DEFINE_STRING( BGl_string2811z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2811za700za7za7_3073za7, "letrec", 6 );
DEFINE_STRING( BGl_string2731z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2731za700za7za7_3074za7, "clause2", 7 );
DEFINE_STRING( BGl_string2815z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2815za700za7za7_3075za7, "let*", 4 );
DEFINE_STRING( BGl_string2900z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2900za700za7za7_3076za7, "loop", 4 );
DEFINE_STRING( BGl_string2825z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2825za700za7za7_3077za7, "name1", 5 );
DEFINE_STRING( BGl_string2827z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2827za700za7za7_3078za7, "val1", 4 );
DEFINE_STRING( BGl_string2749z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2749za700za7za7_3079za7, "init-syntax-expanders!", 22 );
DEFINE_STRING( BGl_string2830z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2830za700za7za7_3080za7, "name2", 5 );
DEFINE_STRING( BGl_string2832z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2832za700za7za7_3081za7, "val2", 4 );
DEFINE_STRING( BGl_string2751z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2751za700za7za7_3082za7, "case", 4 );
DEFINE_STRING( BGl_string2916z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2916za700za7za7_3083za7, "syntax-expander", 15 );
DEFINE_STRING( BGl_string2917z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2917za700za7za7_3084za7, "syntax-expander:Wrong number of arguments", 41 );
DEFINE_STRING( BGl_string2676z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2676za700za7za7_3085za7, "hygiene.r5rs.mark", 17 );
DEFINE_STRING( BGl_string2758z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2758za700za7za7_3086za7, "key", 3 );
DEFINE_STRING( BGl_string2678z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2678za700za7za7_3087za7, "mutex", 5 );
DEFINE_STRING( BGl_string2679z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2679za700za7za7_3088za7, "/tmp/4.4a/runtime/R5rs/syntax.scm", 33 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2914z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_za762za7c3za704anonymo3089za7, BGl_z62zc3z04anonymousza31248ze3ze5zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2915z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_za762za7c3za704anonymo3090za7, BGl_z62zc3z04anonymousza31259ze3ze5zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2920z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2920za700za7za7_3091za7, "funcall", 7 );
DEFINE_STRING( BGl_string2922z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2922za700za7za7_3092za7, "e1", 2 );
DEFINE_STRING( BGl_string2760z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2760za700za7za7_3093za7, "clauses", 7 );
DEFINE_STRING( BGl_string2680z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2680za700za7za7_3094za7, "get-syntax-expander", 19 );
DEFINE_STRING( BGl_string2924z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2924za700za7za7_3095za7, "e", 1 );
DEFINE_STRING( BGl_string2843z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2843za700za7za7_3096za7, "var1", 4 );
DEFINE_STRING( BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2681za700za7za7_3097za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string2925z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2925za700za7za7_3098za7, "epair", 5 );
DEFINE_STRING( BGl_string2682z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2682za700za7za7_3099za7, "&install-syntax-expander", 24 );
DEFINE_STRING( BGl_string2926z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2926za700za7za7_3100za7, "loop~3", 6 );
DEFINE_STRING( BGl_string2845z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2845za700za7za7_3101za7, "init1", 5 );
DEFINE_STRING( BGl_string2683z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2683za700za7za7_3102za7, "symbol", 6 );
DEFINE_STRING( BGl_string2927z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2927za700za7za7_3103za7, "loop~3:Wrong number of arguments", 32 );
DEFINE_STRING( BGl_string2765z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2765za700za7za7_3104za7, "atom-key", 8 );
DEFINE_STRING( BGl_string2684z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2684za700za7za7_3105za7, "procedure", 9 );
DEFINE_STRING( BGl_string2847z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2847za700za7za7_3106za7, "body", 4 );
DEFINE_STRING( BGl_string2849z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2849za700za7za7_3107za7, "generate temp names", 19 );
DEFINE_STRING( BGl_string2687z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2687za700za7za7_3108za7, "quote", 5 );
DEFINE_STRING( BGl_string2689z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2689za700za7za7_3109za7, "cond", 4 );
DEFINE_STRING( BGl_string2930z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2930za700za7za7_3110za7, "arg1254", 7 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2685z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_za762za7c3za704anonymo3111za7, BGl_z62zc3z04anonymousza31233ze3ze5zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2933z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2933za700za7za7_3112za7, "syntax-rules", 12 );
DEFINE_STRING( BGl_string2934z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2934za700za7za7_3113za7, "expand-define-syntax", 20 );
DEFINE_STRING( BGl_string2935z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2935za700za7za7_3114za7, "define-syntax", 13 );
DEFINE_STRING( BGl_string2692z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2692za700za7za7_3115za7, "else", 4 );
DEFINE_STRING( BGl_string2936z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2936za700za7za7_3116za7, "Illegal form", 12 );
DEFINE_STRING( BGl_string2855z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2855za700za7za7_3117za7, "temp1", 5 );
DEFINE_STRING( BGl_string2774z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2774za700za7za7_3118za7, "atoms", 5 );
DEFINE_STRING( BGl_string2937z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2937za700za7za7_3119za7, "&expand-define-syntax", 21 );
DEFINE_STRING( BGl_string2694z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2694za700za7za7_3120za7, "=>", 2 );
DEFINE_STRING( BGl_string2938z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2938za700za7za7_3121za7, "<@anonymous:1286>", 17 );
DEFINE_STRING( BGl_string2939z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2939za700za7za7_3122za7, "<@anonymous:1286>:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string2778z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2778za700za7za7_3123za7, "memv", 4 );
DEFINE_STRING( BGl_string2942z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2942za700za7za7_3124za7, "arg1290", 7 );
DEFINE_STRING( BGl_string2943z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2943za700za7za7_3125za7, "map", 3 );
DEFINE_STRING( BGl_string2944z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2944za700za7za7_3126za7, "list", 4 );
DEFINE_STRING( BGl_string2945z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2945za700za7za7_3127za7, "TAG-134", 7 );
DEFINE_STRING( BGl_string2864z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2864za700za7za7_3128za7, "set!", 4 );
DEFINE_STRING( BGl_string2783z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2783za700za7za7_3129za7, "clause", 6 );
DEFINE_STRING( BGl_string2946z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2946za700za7za7_3130za7, "letrec-syntax", 13 );
DEFINE_STRING( BGl_string2947z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2947za700za7za7_3131za7, "TAG-149", 7 );
DEFINE_STRING( BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2948za700za7za7_3132za7, "pair", 4 );
DEFINE_STRING( BGl_string2949z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2949za700za7za7_3133za7, "loop~2", 6 );
DEFINE_STRING( BGl_string2869z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2869za700za7za7_3134za7, "x", 1 );
DEFINE_STRING( BGl_string2950z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2950za700za7za7_3135za7, "let-syntax", 10 );
DEFINE_STRING( BGl_string2951z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2951za700za7za7_3136za7, "Illegal bindings", 16 );
DEFINE_STRING( BGl_string2952z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2952za700za7za7_3137za7, "&expand-letrec-syntax", 21 );
DEFINE_STRING( BGl_string2871z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2871za700za7za7_3138za7, "y", 1 );
DEFINE_STRING( BGl_string2953z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2953za700za7za7_3139za7, "<@anonymous:1308>", 17 );
DEFINE_STRING( BGl_string2954z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2954za700za7za7_3140za7, "<@anonymous:1308>:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string2792z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2792za700za7za7_3141za7, "name", 4 );
DEFINE_STRING( BGl_string2794z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2794za700za7za7_3142za7, "val", 3 );
DEFINE_STRING( BGl_string2957z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2957za700za7za7_3143za7, "e3", 2 );
DEFINE_STRING( BGl_string2877z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2877za700za7za7_3144za7, "newtemp", 7 );
DEFINE_STRING( BGl_string2796z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2796za700za7za7_3145za7, "body1", 5 );
DEFINE_STRING( BGl_string2959z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2959za700za7za7_3146za7, "e2", 2 );
DEFINE_STRING( BGl_string2879z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2879za700za7za7_3147za7, "do", 2 );
DEFINE_STRING( BGl_string2798z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2798za700za7za7_3148za7, "body2", 5 );
DEFINE_STRING( BGl_string2962z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2962za700za7za7_3149za7, "e4", 2 );
DEFINE_STRING( BGl_string2963z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2963za700za7za7_3150za7, "<@anonymous:1321>", 17 );
DEFINE_STRING( BGl_string2964z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2964za700za7za7_3151za7, "<@anonymous:1321>:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string2967z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2967za700za7za7_3152za7, "arg1326", 7 );
DEFINE_STRING( BGl_string2886z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2886za700za7za7_3153za7, "var", 3 );
DEFINE_STRING( BGl_string2968z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2968za700za7za7_3154za7, "TAG-177", 7 );
DEFINE_STRING( BGl_string2969z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2969za700za7za7_3155za7, "TAG-192", 7 );
DEFINE_STRING( BGl_string2888z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2888za700za7za7_3156za7, "init", 4 );
DEFINE_STRING( BGl_string2970z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2970za700za7za7_3157za7, "loop~1", 6 );
DEFINE_STRING( BGl_string2971z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2971za700za7za7_3158za7, "&expand-let-syntax", 18 );
DEFINE_STRING( BGl_string2890z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2890za700za7za7_3159za7, "step", 4 );
DEFINE_STRING( BGl_string2972z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2972za700za7za7_3160za7, "<@anonymous:1343>", 17 );
DEFINE_STRING( BGl_string2973z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2973za700za7za7_3161za7, "<@anonymous:1343>:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string2893z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2893za700za7za7_3162za7, "expr", 4 );
DEFINE_STRING( BGl_string2975z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2975za700za7za7_3163za7, "Illegal declaration", 19 );
DEFINE_STRING( BGl_string2976z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2976za700za7za7_3164za7, "&syntax-rules->expander", 23 );
DEFINE_STRING( BGl_string2895z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2895za700za7za7_3165za7, "command", 7 );
DEFINE_STRING( BGl_string2977z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2977za700za7za7_3166za7, "No matching clause", 18 );
DEFINE_STRING( BGl_string2978z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2978za700za7za7_3167za7, "TAG-220", 7 );
DEFINE_STRING( BGl_string2979z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2979za700za7za7_3168za7, "TAG-220:Wrong number of arguments", 33 );
DEFINE_STRING( BGl_string2982z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2982za700za7za7_3169za7, "arg1362", 7 );
DEFINE_STRING( BGl_string2983z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2983za700za7za7_3170za7, "TAG-221", 7 );
DEFINE_STRING( BGl_string2984z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2984za700za7za7_3171za7, "Illegal clause", 14 );
DEFINE_STRING( BGl_string2985z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2985za700za7za7_3172za7, "syntax-matches-pattern?", 23 );
DEFINE_STRING( BGl_string2986z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2986za700za7za7_3173za7, "every", 5 );
DEFINE_STRING( BGl_string2987z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2987za700za7za7_3174za7, "Illegal ellipsis", 16 );
DEFINE_STRING( BGl_string2988z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2988za700za7za7_3175za7, "syntax-get-frames", 17 );
DEFINE_STRING( BGl_string2990z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2990za700za7za7_3176za7, "ellipsis", 8 );
DEFINE_STRING( BGl_string2991z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2991za700za7za7_3177za7, "<@anonymous:1419>", 17 );
DEFINE_STRING( BGl_string2992z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2992za700za7za7_3178za7, "syntax-expand-pattern", 21 );
DEFINE_STRING( BGl_string2993z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2993za700za7za7_3179za7, "<@anonymous:1452>", 17 );
DEFINE_STRING( BGl_string2994z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2994za700za7za7_3180za7, "<@anonymous:1459>", 17 );
DEFINE_STRING( BGl_string2995z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2995za700za7za7_3181za7, "any", 3 );
DEFINE_STRING( BGl_string2996z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2996za700za7za7_3182za7, "<@anonymous:1445>", 17 );
DEFINE_STRING( BGl_string2997z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2997za700za7za7_3183za7, "liip", 4 );
DEFINE_STRING( BGl_string2998z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2998za700za7za7_3184za7, "sub~0", 5 );
DEFINE_STRING( BGl_string2999z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string2999za700za7za7_3185za7, "ellipsis?", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_syntaxzd2ruleszd2ze3expanderzd2envz31zz__r5_macro_4_3_syntaxz00, BgL_bgl_za762syntaxza7d2rule3186z00, BGl_z62syntaxzd2ruleszd2ze3expanderz81zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string3000z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3000za700za7za7_3187za7, "TAG-234", 7 );
DEFINE_STRING( BGl_string3001z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3001za700za7za7_3188za7, "TAG-236", 7 );
DEFINE_STRING( BGl_string3002z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3002za700za7za7_3189za7, "TAG-237", 7 );
DEFINE_STRING( BGl_string3003z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3003za700za7za7_3190za7, "<@anonymous:1766>", 17 );
DEFINE_STRING( BGl_string3005z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3005za700za7za7_3191za7, "TAG-240", 7 );
DEFINE_STRING( BGl_string3006z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3006za700za7za7_3192za7, "<@anonymous:1843>", 17 );
DEFINE_STRING( BGl_string3008z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3008za700za7za7_3193za7, "TAG-241", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_expandzd2letreczd2syntaxzd2envzd2zz__r5_macro_4_3_syntaxz00, BgL_bgl_za762expandza7d2letr3194z00, BGl_z62expandzd2letreczd2syntaxz62zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_symbol2801z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2720z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2723z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2806z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2728z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2810z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2730z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2814z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_hygienezd2markzd2zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2824z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2826z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2829z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2831z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2750z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2675z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2919z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2757z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2677z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2759z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2921z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2923z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2842z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2844z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2764z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2846z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2929z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2686z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2688z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2932z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2691z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2854z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2773z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2693z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2777z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2699z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_keyword2989z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2941z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2863z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2782z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2868z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2870z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2791z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2793z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2956z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2876z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2795z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2958z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2878z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2797z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2961z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2966z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2885z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2887z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2889z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2892z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2894z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2899z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2981z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2705z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2708z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2709z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2710z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2715z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2718z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2719z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol3009z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2800z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2803z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2722z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2804z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2805z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2725z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2726z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2808z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2727z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2809z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2812z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2813z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2732z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2733z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2734z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2816z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2735z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2817z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2736z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2818z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2737z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2819z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2738z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2739z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2901z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2820z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2902z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2821z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2740z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2903z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2822z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2741z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2904z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2823z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2742z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2905z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2743z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2906z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2744z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2907z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2745z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2908z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2746z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2909z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2828z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2747z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2748z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2910z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2911z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2912z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2913z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2833z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2752z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2834z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2753z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2835z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2754z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2836z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2755z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2918z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2837z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2756z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2838z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2839z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2840z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2841z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2761z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2762z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2763z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2928z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2766z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2848z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2767z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2768z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2769z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2931z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2850z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2851z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2770z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2852z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2771z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2690z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2853z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2772z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2856z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2775z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2857z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2776z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2695z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2858z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2696z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2859z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2697z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2779z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2698z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2940z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2860z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_syntaxzd2expanderszd2mutexz00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2861z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2780z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2862z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2781z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2865z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2784z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2866z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2785z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2867z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2786z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2787z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2788z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2789z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2790z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2872z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2873z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2955z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2874z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2875z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2799z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2960z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2880z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2881z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2882z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2883z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2965z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2884z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2891z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2974z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2896z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2897z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2898z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_list2980z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2701z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2706z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2711z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2713z00zz__r5_macro_4_3_syntaxz00) );
ADD_ROOT( (void *)(&BGl_symbol2716z00zz__r5_macro_4_3_syntaxz00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00(long BgL_checksumz00_3693, char * BgL_fromz00_3694)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00))
{ 
BGl_requirezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__r5_macro_4_3_syntaxz00(); 
BGl_cnstzd2initzd2zz__r5_macro_4_3_syntaxz00(); 
BGl_importedzd2moduleszd2initz00zz__r5_macro_4_3_syntaxz00(); 
return 
BGl_toplevelzd2initzd2zz__r5_macro_4_3_syntaxz00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__r5_macro_4_3_syntaxz00()
{
{ /* R5rs/syntax.scm 17 */
BGl_symbol2675z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2676z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol2677z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2678z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol2686z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2687z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol2688z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2689z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol2691z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2692z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol2693z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2694z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2690z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2691z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2693z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol2699z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2700z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol2701z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2702z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2704z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2698z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2691z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2699z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2701z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list2697z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2688z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2698z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol2706z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2707z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2705z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2706z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2699z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2701z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list2696z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2697z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2705z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol2711z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2712z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol2713z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2714z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2710z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2711z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2693z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2713z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list2709z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2688z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2710z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol2716z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2717z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol2720z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2721z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2719z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2720z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2711z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2718z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2719z00zz__r5_macro_4_3_syntaxz00, BNIL); 
BGl_symbol2723z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2724z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2725z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2713z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2720z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2722z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2723z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2720z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2725z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list2715z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2716z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2718z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2722z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list2708z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2709z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2715z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol2728z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2729z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol2730z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2731z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2727z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2688z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2710z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2728z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2730z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_list2734z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2688z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2728z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2730z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list2733z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2723z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2720z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2725z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2734z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list2732z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2716z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2718z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2733z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list2726z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2727z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2732z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2737z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2711z00zz__r5_macro_4_3_syntaxz00, BNIL); 
BGl_list2736z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2688z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2737z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2735z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2736z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2711z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2739z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2688z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2737z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2728z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2730z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_list2741z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2723z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2720z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2720z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2734z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list2740z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2716z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2718z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2741z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list2738z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2739z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2740z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2744z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2711z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2699z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2701z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list2743z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2688z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2744z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2745z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2723z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2711z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2705z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list2742z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2743z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2745z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2747z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2688z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2744z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2728z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2730z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_list2748z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2723z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2711z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2705z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2734z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list2746z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2747z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2748z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2695z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2696z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2708z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2726z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2735z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2738z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2742z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2746z00zz__r5_macro_4_3_syntaxz00, BNIL))))))); 
BGl_symbol2750z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2751z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2752z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2691z00zz__r5_macro_4_3_syntaxz00, BNIL); 
BGl_symbol2757z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2758z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2756z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2757z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol2759z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2760z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2755z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2750z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2756z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2759z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_symbol2764z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2765z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2763z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2764z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2756z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2762z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2763z00zz__r5_macro_4_3_syntaxz00, BNIL); 
BGl_list2766z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2750z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2764z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2759z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list2761z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2716z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2762z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2766z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list2754z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2755z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2761z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2768z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2750z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2757z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2698z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list2767z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2768z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2705z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol2773z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2774z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2772z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2773z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2771z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2772z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2699z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2701z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list2770z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2750z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2757z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2771z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_symbol2777z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2778z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2779z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2686z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2772z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2776z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2777z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2757z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2779z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list2775z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2723z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2776z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2705z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list2769z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2770z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2775z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol2782z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2783z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2781z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2750z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2757z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2771z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2782z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2759z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)))))); 
BGl_list2785z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2750z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2757z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2782z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2759z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_list2784z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2723z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2776z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2705z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2785z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list2780z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2781z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2784z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2753z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2754z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2767z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2769z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2780z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_symbol2791z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2792z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol2793z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2794z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2790z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2791z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2793z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2789z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2790z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol2795z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2796z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol2797z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2798z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2788z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2716z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2789z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2795z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2797z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_symbol2801z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2802z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2803z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2791z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2800z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2801z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2803z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2795z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2797z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_list2799z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2800z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2793z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list2787z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2788z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2799z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol2806z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2807z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2805z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2716z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2806z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2789z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2795z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2797z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)))))); 
BGl_symbol2810z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2811z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2813z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2806z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2800z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2812z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2813z00zz__r5_macro_4_3_syntaxz00, BNIL); 
BGl_list2809z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2810z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2812z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2806z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list2808z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2809z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2793z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list2804z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2805z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2808z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2786z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2787z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2804z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol2814z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2815z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2818z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2814z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BNIL, 
MAKE_YOUNG_PAIR(BGl_symbol2795z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2797z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_list2819z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2716z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BNIL, 
MAKE_YOUNG_PAIR(BGl_symbol2795z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2797z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_list2817z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2818z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2819z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol2824z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2825z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol2826z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2827z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2823z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2824z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2826z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol2829z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2830z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol2831z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2832z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2828z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2829z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2831z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2822z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2823z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2828z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list2821z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2814z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2822z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2795z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2797z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_list2834z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2823z00zz__r5_macro_4_3_syntaxz00, BNIL); 
BGl_list2836z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2828z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2835z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2814z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2836z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2795z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2797z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_list2833z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2716z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2834z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2835z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list2820z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2821z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2833z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2816z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2817z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2820z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol2842z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2843z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol2844z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2845z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2841z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2842z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2844z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2840z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2841z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol2846z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2847z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2839z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2810z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2840z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2846z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list2850z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2842z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2848z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2810z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_string2849z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2850z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BNIL, 
MAKE_YOUNG_PAIR(BGl_list2840z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2846z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL))))))); 
BGl_list2838z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2839z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2848z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol2854z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2855z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2853z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2854z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2852z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2810z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_string2849z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BNIL, 
MAKE_YOUNG_PAIR(BGl_list2853z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2840z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2846z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL))))))); 
BGl_list2858z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2842z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BUNSPEC, BNIL)); 
BGl_list2857z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2858z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2861z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2854z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2844z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2860z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2861z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol2863z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2864z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2862z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2863z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2842z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2854z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list2859z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2716z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2860z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2862z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2846z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)))))); 
BGl_list2856z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2716z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2857z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2859z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list2851z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2852z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2856z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol2868z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2869z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol2870z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2871z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2867z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2868z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2870z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list2872z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2720z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2866z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2810z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_string2849z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2867z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2872z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2840z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2846z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL))))))); 
BGl_list2874z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2870z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol2876z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2877z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2875z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2876z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2720z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list2873z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2810z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_string2849z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2874z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2875z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2840z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2846z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL))))))); 
BGl_list2865z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2866z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2873z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2837z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2838z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2851z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2865z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_symbol2878z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2879z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol2885z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2886z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol2887z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2888z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol2889z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2890z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2884z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2885z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2887z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2889z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list2883z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2884z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol2892z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2893z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2891z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2711z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2892z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_symbol2894z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2895z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2882z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2878z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2883z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2891z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2894z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_symbol2899z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2900z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2902z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2885z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2905z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2723z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(
BBOOL(((bool_t)0)), 
MAKE_YOUNG_PAIR(
BBOOL(((bool_t)0)), BNIL))); 
BGl_list2904z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2706z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2905z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2892z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list2908z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2878z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_string2890z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2885z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2889z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_list2907z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2899z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2908z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list2906z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2706z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2894z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2907z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list2903z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2723z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2711z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2904z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2906z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list2901z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2801z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2902z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2903z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list2898z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2899z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2901z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2897z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2898z00zz__r5_macro_4_3_syntaxz00, BNIL); 
BGl_list2909z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2899z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2887z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list2896z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2810z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2897z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2909z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list2881z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2882z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2896z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2911z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2878z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_string2890z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2868z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list2910z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2911z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2868z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2913z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2878z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_string2890z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2868z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2870z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list2912z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2913z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2870z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list2880z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_list2881z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2910z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_list2912z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_symbol2919z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2920z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol2921z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2922z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol2923z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2924z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2918z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2919z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2921z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2921z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2868z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2923z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_symbol2929z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2930z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2928z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2919z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2923z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2923z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2929z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2923z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_list2931z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2919z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2923z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2923z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2868z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2923z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_symbol2932z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2933z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol2941z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2942z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2940z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2919z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2921z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2921z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2941z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2921z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_symbol2956z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2957z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol2958z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2959z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2955z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2919z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2956z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2956z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2868z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2958z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_symbol2961z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2962z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2960z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2919z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2961z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2961z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2868z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2958z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_symbol2966z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2967z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2965z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2919z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2921z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2921z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2966z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2921z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_list2974z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2919z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2956z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2956z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2868z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2923z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_symbol2981z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string2982z00zz__r5_macro_4_3_syntaxz00); 
BGl_list2980z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2919z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2923z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2923z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2981z00zz__r5_macro_4_3_syntaxz00, 
MAKE_YOUNG_PAIR(BGl_symbol2923z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_keyword2989z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_keyword(BGl_string2990z00zz__r5_macro_4_3_syntaxz00); 
return ( 
BGl_symbol3009z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3010z00zz__r5_macro_4_3_syntaxz00), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__r5_macro_4_3_syntaxz00()
{
{ /* R5rs/syntax.scm 17 */
return 
bgl_gc_roots_register();} 

}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__r5_macro_4_3_syntaxz00()
{
{ /* R5rs/syntax.scm 17 */
BGl_hygienezd2markzd2zz__r5_macro_4_3_syntaxz00 = 
BGl_gensymz00zz__r4_symbols_6_4z00(BGl_symbol2675z00zz__r5_macro_4_3_syntaxz00); 
{ /* R5rs/syntax.scm 57 */
obj_t BgL_res2193z00_2371;
{ /* R5rs/syntax.scm 57 */
obj_t BgL_symbolz00_2369;
BgL_symbolz00_2369 = BGl_hygienezd2markzd2zz__r5_macro_4_3_syntaxz00; 
{ /* R5rs/syntax.scm 57 */
obj_t BgL_arg2007z00_2370;
BgL_arg2007z00_2370 = 
SYMBOL_TO_STRING(BgL_symbolz00_2369); 
BgL_res2193z00_2371 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2007z00_2370); } } 
BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00 = BgL_res2193z00_2371; } 
BGl_hygienezd2prefixzd2lenz00zz__r5_macro_4_3_syntaxz00 = 
STRING_LENGTH(BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00); 
BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 = BFALSE; 
{ /* R5rs/syntax.scm 61 */

{ /* Llib/thread.scm 214 */
obj_t BgL_namez00_1052;
BgL_namez00_1052 = 
BGl_gensymz00zz__r4_symbols_6_4z00(BGl_symbol2677z00zz__r5_macro_4_3_syntaxz00); 
{ /* Llib/thread.scm 214 */

{ /* Llib/thread.scm 214 */
obj_t BgL_res2195z00_2374;
BgL_res2195z00_2374 = 
bgl_make_mutex(BgL_namez00_1052); 
BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00 = BgL_res2195z00_2374; } } } } 
{ /* R5rs/syntax.scm 62 */

{ /* Llib/thread.scm 214 */
obj_t BgL_namez00_1053;
BgL_namez00_1053 = 
BGl_gensymz00zz__r4_symbols_6_4z00(BGl_symbol2677z00zz__r5_macro_4_3_syntaxz00); 
{ /* Llib/thread.scm 214 */

{ /* Llib/thread.scm 214 */
obj_t BgL_res2196z00_2375;
BgL_res2196z00_2375 = 
bgl_make_mutex(BgL_namez00_1053); 
return ( 
BGl_syntaxzd2expanderszd2mutexz00zz__r5_macro_4_3_syntaxz00 = BgL_res2196z00_2375, BUNSPEC) ;} } } } } 

}



/* append-21011 */
obj_t BGl_appendzd221011zd2zz__r5_macro_4_3_syntaxz00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
{
{ 
{ 
obj_t BgL_headz00_1054;
BgL_headz00_1054 = 
MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2); 
{ 
obj_t BgL_prevz00_1055;obj_t BgL_tailz00_1056;
BgL_prevz00_1055 = BgL_headz00_1054; 
BgL_tailz00_1056 = BgL_l1z00_1; 
BgL_loopz00_1057:
if(
PAIRP(BgL_tailz00_1056))
{ 
obj_t BgL_newzd2prevzd2_1059;
BgL_newzd2prevzd2_1059 = 
MAKE_YOUNG_PAIR(
CAR(BgL_tailz00_1056), BgL_l2z00_2); 
SET_CDR(BgL_prevz00_1055, BgL_newzd2prevzd2_1059); 
{ 
obj_t BgL_tailz00_4216;obj_t BgL_prevz00_4215;
BgL_prevz00_4215 = BgL_newzd2prevzd2_1059; 
BgL_tailz00_4216 = 
CDR(BgL_tailz00_1056); 
BgL_tailz00_1056 = BgL_tailz00_4216; 
BgL_prevz00_1055 = BgL_prevz00_4215; 
goto BgL_loopz00_1057;} }  else 
{ BNIL; } 
return 
CDR(BgL_headz00_1054);} } } 

}



/* get-syntax-expander */
obj_t BGl_getzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_fz00_3)
{
{ /* R5rs/syntax.scm 67 */
{ /* R5rs/syntax.scm 68 */
obj_t BgL_idz00_1062;
BgL_idz00_1062 = 
BGl_hygienezd2valuezd2zz__r5_macro_4_3_syntaxz00(BgL_fz00_3); 
{ /* R5rs/syntax.scm 68 */
obj_t BgL_cz00_1063;
{ /* R5rs/syntax.scm 69 */
obj_t BgL_top3198z00_4221;
BgL_top3198z00_4221 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00); 
BGL_EXITD_PUSH_PROTECT(BgL_top3198z00_4221, BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00); BUNSPEC; 
{ /* R5rs/syntax.scm 69 */
obj_t BgL_tmp3197z00_4220;
{ /* R5rs/syntax.scm 69 */
obj_t BgL_auxz00_4225;
{ /* R5rs/syntax.scm 69 */
obj_t BgL_aux2433z00_3291;
BgL_aux2433z00_3291 = BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00; 
{ /* R5rs/syntax.scm 69 */
bool_t BgL_test3199z00_4226;
if(
PAIRP(BgL_aux2433z00_3291))
{ /* R5rs/syntax.scm 69 */
BgL_test3199z00_4226 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 69 */
BgL_test3199z00_4226 = 
NULLP(BgL_aux2433z00_3291)
; } 
if(BgL_test3199z00_4226)
{ /* R5rs/syntax.scm 69 */
BgL_auxz00_4225 = BgL_aux2433z00_3291
; }  else 
{ 
obj_t BgL_auxz00_4230;
BgL_auxz00_4230 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)2769)), BGl_string2680z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_aux2433z00_3291); 
FAILURE(BgL_auxz00_4230,BFALSE,BFALSE);} } } 
BgL_tmp3197z00_4220 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_1062, BgL_auxz00_4225); } 
BGL_EXITD_POP_PROTECT(BgL_top3198z00_4221); BUNSPEC; 
BGL_MUTEX_UNLOCK(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00); 
BgL_cz00_1063 = BgL_tmp3197z00_4220; } } 
{ /* R5rs/syntax.scm 69 */

if(
PAIRP(BgL_cz00_1063))
{ /* R5rs/syntax.scm 70 */
return 
CDR(BgL_cz00_1063);}  else 
{ /* R5rs/syntax.scm 70 */
return BFALSE;} } } } } 

}



/* install-syntax-expander */
BGL_EXPORTED_DEF obj_t BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_keywordz00_4, obj_t BgL_expanderz00_5)
{
{ /* R5rs/syntax.scm 76 */
BGL_MUTEX_LOCK(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00); 
{ /* R5rs/syntax.scm 77 */
obj_t BgL_tmp3202z00_4240;
{ /* R5rs/syntax.scm 78 */
obj_t BgL_arg1229z00_2383;
BgL_arg1229z00_2383 = 
MAKE_YOUNG_PAIR(BgL_keywordz00_4, BgL_expanderz00_5); 
BgL_tmp3202z00_4240 = ( 
BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BgL_arg1229z00_2383, BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00), BUNSPEC) ; } 
BGL_MUTEX_UNLOCK(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00); 
return BgL_tmp3202z00_4240;} } 

}



/* &install-syntax-expander */
obj_t BGl_z62installzd2syntaxzd2expanderz62zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3201, obj_t BgL_keywordz00_3202, obj_t BgL_expanderz00_3203)
{
{ /* R5rs/syntax.scm 76 */
{ /* R5rs/syntax.scm 77 */
obj_t BgL_auxz00_4252;obj_t BgL_auxz00_4245;
if(
PROCEDUREP(BgL_expanderz00_3203))
{ /* R5rs/syntax.scm 77 */
BgL_auxz00_4252 = BgL_expanderz00_3203
; }  else 
{ 
obj_t BgL_auxz00_4255;
BgL_auxz00_4255 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)3094)), BGl_string2682z00zz__r5_macro_4_3_syntaxz00, BGl_string2684z00zz__r5_macro_4_3_syntaxz00, BgL_expanderz00_3203); 
FAILURE(BgL_auxz00_4255,BFALSE,BFALSE);} 
if(
SYMBOLP(BgL_keywordz00_3202))
{ /* R5rs/syntax.scm 77 */
BgL_auxz00_4245 = BgL_keywordz00_3202
; }  else 
{ 
obj_t BgL_auxz00_4248;
BgL_auxz00_4248 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)3094)), BGl_string2682z00zz__r5_macro_4_3_syntaxz00, BGl_string2683z00zz__r5_macro_4_3_syntaxz00, BgL_keywordz00_3202); 
FAILURE(BgL_auxz00_4248,BFALSE,BFALSE);} 
return 
BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(BgL_auxz00_4245, BgL_auxz00_4252);} } 

}



/* init-syntax-expanders! */
obj_t BGl_initzd2syntaxzd2expandersz12z12zz__r5_macro_4_3_syntaxz00()
{
{ /* R5rs/syntax.scm 83 */
{ /* R5rs/syntax.scm 88 */
obj_t BgL_top3206z00_4261;
BgL_top3206z00_4261 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(BGl_syntaxzd2expanderszd2mutexz00zz__r5_macro_4_3_syntaxz00); 
BGL_EXITD_PUSH_PROTECT(BgL_top3206z00_4261, BGl_syntaxzd2expanderszd2mutexz00zz__r5_macro_4_3_syntaxz00); BUNSPEC; 
{ /* R5rs/syntax.scm 88 */
obj_t BgL_tmp3205z00_4260;
if(
CBOOL(BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00))
{ /* R5rs/syntax.scm 89 */
BgL_tmp3205z00_4260 = BFALSE; }  else 
{ /* R5rs/syntax.scm 89 */
BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 = BNIL; 
{ /* R5rs/syntax.scm 92 */
obj_t BgL_keywordz00_2388;
BgL_keywordz00_2388 = BGl_symbol2686z00zz__r5_macro_4_3_syntaxz00; 
BGL_MUTEX_LOCK(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00); 
{ /* R5rs/syntax.scm 77 */
obj_t BgL_tmp3208z00_4267;
{ /* R5rs/syntax.scm 78 */
obj_t BgL_arg1229z00_2389;
BgL_arg1229z00_2389 = 
MAKE_YOUNG_PAIR(BgL_keywordz00_2388, BGl_proc2685z00zz__r5_macro_4_3_syntaxz00); 
BgL_tmp3208z00_4267 = ( 
BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 = 
MAKE_YOUNG_PAIR(BgL_arg1229z00_2389, BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00), BUNSPEC) ; } 
BGL_MUTEX_UNLOCK(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00); BgL_tmp3208z00_4267; } } 
{ /* R5rs/syntax.scm 94 */
obj_t BgL_idz00_2390;obj_t BgL_literalsz00_2391;obj_t BgL_rulesz00_2392;
BgL_idz00_2390 = BGl_symbol2688z00zz__r5_macro_4_3_syntaxz00; 
BgL_literalsz00_2391 = BGl_list2690z00zz__r5_macro_4_3_syntaxz00; 
BgL_rulesz00_2392 = BGl_list2695z00zz__r5_macro_4_3_syntaxz00; 
{ /* R5rs/syntax.scm 86 */
obj_t BgL_arg1239z00_2393;
BgL_arg1239z00_2393 = 
BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(BgL_idz00_2390, BgL_literalsz00_2391, BgL_rulesz00_2392); 
{ /* R5rs/syntax.scm 86 */
obj_t BgL_auxz00_4273;
if(
PROCEDUREP(BgL_arg1239z00_2393))
{ /* R5rs/syntax.scm 86 */
BgL_auxz00_4273 = BgL_arg1239z00_2393
; }  else 
{ 
obj_t BgL_auxz00_4276;
BgL_auxz00_4276 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)3573)), BGl_string2749z00zz__r5_macro_4_3_syntaxz00, BGl_string2684z00zz__r5_macro_4_3_syntaxz00, BgL_arg1239z00_2393); 
FAILURE(BgL_auxz00_4276,BFALSE,BFALSE);} 
BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(BgL_idz00_2390, BgL_auxz00_4273); } } } 
{ /* R5rs/syntax.scm 120 */
obj_t BgL_idz00_2394;obj_t BgL_literalsz00_2395;obj_t BgL_rulesz00_2396;
BgL_idz00_2394 = BGl_symbol2750z00zz__r5_macro_4_3_syntaxz00; 
BgL_literalsz00_2395 = BGl_list2752z00zz__r5_macro_4_3_syntaxz00; 
BgL_rulesz00_2396 = BGl_list2753z00zz__r5_macro_4_3_syntaxz00; 
{ /* R5rs/syntax.scm 86 */
obj_t BgL_arg1239z00_2397;
BgL_arg1239z00_2397 = 
BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(BgL_idz00_2394, BgL_literalsz00_2395, BgL_rulesz00_2396); 
{ /* R5rs/syntax.scm 86 */
obj_t BgL_auxz00_4282;
if(
PROCEDUREP(BgL_arg1239z00_2397))
{ /* R5rs/syntax.scm 86 */
BgL_auxz00_4282 = BgL_arg1239z00_2397
; }  else 
{ 
obj_t BgL_auxz00_4285;
BgL_auxz00_4285 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)3573)), BGl_string2749z00zz__r5_macro_4_3_syntaxz00, BGl_string2684z00zz__r5_macro_4_3_syntaxz00, BgL_arg1239z00_2397); 
FAILURE(BgL_auxz00_4285,BFALSE,BFALSE);} 
BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(BgL_idz00_2394, BgL_auxz00_4282); } } } 
{ /* R5rs/syntax.scm 140 */
obj_t BgL_idz00_2398;obj_t BgL_rulesz00_2399;
BgL_idz00_2398 = BGl_symbol2716z00zz__r5_macro_4_3_syntaxz00; 
BgL_rulesz00_2399 = BGl_list2786z00zz__r5_macro_4_3_syntaxz00; 
{ /* R5rs/syntax.scm 86 */
obj_t BgL_arg1239z00_2400;
BgL_arg1239z00_2400 = 
BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(BgL_idz00_2398, BNIL, BgL_rulesz00_2399); 
{ /* R5rs/syntax.scm 86 */
obj_t BgL_auxz00_4291;
if(
PROCEDUREP(BgL_arg1239z00_2400))
{ /* R5rs/syntax.scm 86 */
BgL_auxz00_4291 = BgL_arg1239z00_2400
; }  else 
{ 
obj_t BgL_auxz00_4294;
BgL_auxz00_4294 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)3573)), BGl_string2749z00zz__r5_macro_4_3_syntaxz00, BGl_string2684z00zz__r5_macro_4_3_syntaxz00, BgL_arg1239z00_2400); 
FAILURE(BgL_auxz00_4294,BFALSE,BFALSE);} 
BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(BgL_idz00_2398, BgL_auxz00_4291); } } } 
{ /* R5rs/syntax.scm 151 */
obj_t BgL_idz00_2401;obj_t BgL_rulesz00_2402;
BgL_idz00_2401 = BGl_symbol2814z00zz__r5_macro_4_3_syntaxz00; 
BgL_rulesz00_2402 = BGl_list2816z00zz__r5_macro_4_3_syntaxz00; 
{ /* R5rs/syntax.scm 86 */
obj_t BgL_arg1239z00_2403;
BgL_arg1239z00_2403 = 
BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(BgL_idz00_2401, BNIL, BgL_rulesz00_2402); 
{ /* R5rs/syntax.scm 86 */
obj_t BgL_auxz00_4300;
if(
PROCEDUREP(BgL_arg1239z00_2403))
{ /* R5rs/syntax.scm 86 */
BgL_auxz00_4300 = BgL_arg1239z00_2403
; }  else 
{ 
obj_t BgL_auxz00_4303;
BgL_auxz00_4303 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)3573)), BGl_string2749z00zz__r5_macro_4_3_syntaxz00, BGl_string2684z00zz__r5_macro_4_3_syntaxz00, BgL_arg1239z00_2403); 
FAILURE(BgL_auxz00_4303,BFALSE,BFALSE);} 
BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(BgL_idz00_2401, BgL_auxz00_4300); } } } 
{ /* R5rs/syntax.scm 161 */
obj_t BgL_idz00_2404;obj_t BgL_rulesz00_2405;
BgL_idz00_2404 = BGl_symbol2810z00zz__r5_macro_4_3_syntaxz00; 
BgL_rulesz00_2405 = BGl_list2837z00zz__r5_macro_4_3_syntaxz00; 
{ /* R5rs/syntax.scm 86 */
obj_t BgL_arg1239z00_2406;
BgL_arg1239z00_2406 = 
BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(BgL_idz00_2404, BNIL, BgL_rulesz00_2405); 
{ /* R5rs/syntax.scm 86 */
obj_t BgL_auxz00_4309;
if(
PROCEDUREP(BgL_arg1239z00_2406))
{ /* R5rs/syntax.scm 86 */
BgL_auxz00_4309 = BgL_arg1239z00_2406
; }  else 
{ 
obj_t BgL_auxz00_4312;
BgL_auxz00_4312 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)3573)), BGl_string2749z00zz__r5_macro_4_3_syntaxz00, BGl_string2684z00zz__r5_macro_4_3_syntaxz00, BgL_arg1239z00_2406); 
FAILURE(BgL_auxz00_4312,BFALSE,BFALSE);} 
BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(BgL_idz00_2404, BgL_auxz00_4309); } } } 
{ /* R5rs/syntax.scm 190 */
obj_t BgL_idz00_2407;obj_t BgL_rulesz00_2408;
BgL_idz00_2407 = BGl_symbol2878z00zz__r5_macro_4_3_syntaxz00; 
BgL_rulesz00_2408 = BGl_list2880z00zz__r5_macro_4_3_syntaxz00; 
{ /* R5rs/syntax.scm 86 */
obj_t BgL_arg1239z00_2409;
BgL_arg1239z00_2409 = 
BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(BgL_idz00_2407, BNIL, BgL_rulesz00_2408); 
{ /* R5rs/syntax.scm 86 */
obj_t BgL_auxz00_4318;
if(
PROCEDUREP(BgL_arg1239z00_2409))
{ /* R5rs/syntax.scm 86 */
BgL_auxz00_4318 = BgL_arg1239z00_2409
; }  else 
{ 
obj_t BgL_auxz00_4321;
BgL_auxz00_4321 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)3573)), BGl_string2749z00zz__r5_macro_4_3_syntaxz00, BGl_string2684z00zz__r5_macro_4_3_syntaxz00, BgL_arg1239z00_2409); 
FAILURE(BgL_auxz00_4321,BFALSE,BFALSE);} 
BgL_tmp3205z00_4260 = 
BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(BgL_idz00_2407, BgL_auxz00_4318); } } } } 
BGL_EXITD_POP_PROTECT(BgL_top3206z00_4261); BUNSPEC; 
BGL_MUTEX_UNLOCK(BGl_syntaxzd2expanderszd2mutexz00zz__r5_macro_4_3_syntaxz00); 
return BgL_tmp3205z00_4260;} } } 

}



/* &<@anonymous:1233> */
obj_t BGl_z62zc3z04anonymousza31233ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3205, obj_t BgL_xz00_3206, obj_t BgL_ez00_3207)
{
{ /* R5rs/syntax.scm 92 */
return BgL_xz00_3206;} 

}



/* syntax-expander */
obj_t BGl_syntaxzd2expanderzd2zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_7, obj_t BgL_ez00_8)
{
{ /* R5rs/syntax.scm 222 */
{ /* R5rs/syntax.scm 223 */
obj_t BgL_e1z00_1078;
if(
PAIRP(BgL_xz00_7))
{ /* R5rs/syntax.scm 226 */
obj_t BgL_g1039z00_1089;
BgL_g1039z00_1089 = 
BGl_getzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(
CAR(BgL_xz00_7)); 
if(
CBOOL(BgL_g1039z00_1089))
{ /* R5rs/syntax.scm 226 */
BgL_e1z00_1078 = BgL_g1039z00_1089; }  else 
{ /* R5rs/syntax.scm 226 */
BgL_e1z00_1078 = BGl_proc2914z00zz__r5_macro_4_3_syntaxz00; } }  else 
{ /* R5rs/syntax.scm 224 */
BgL_e1z00_1078 = BGl_proc2915z00zz__r5_macro_4_3_syntaxz00; } 
{ /* R5rs/syntax.scm 239 */
obj_t BgL_newz00_1079;
{ /* R5rs/syntax.scm 239 */
obj_t BgL_funz00_3311;
if(
PROCEDUREP(BgL_e1z00_1078))
{ /* R5rs/syntax.scm 239 */
BgL_funz00_3311 = BgL_e1z00_1078; }  else 
{ 
obj_t BgL_auxz00_4336;
BgL_auxz00_4336 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)7568)), BGl_string2916z00zz__r5_macro_4_3_syntaxz00, BGl_string2684z00zz__r5_macro_4_3_syntaxz00, BgL_e1z00_1078); 
FAILURE(BgL_auxz00_4336,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3311, ((long)2)))
{ /* R5rs/syntax.scm 239 */
BgL_newz00_1079 = 
PROCEDURE_ENTRY(BgL_funz00_3311)(BgL_e1z00_1078, BgL_xz00_7, BgL_ez00_8, BEOA); }  else 
{ /* R5rs/syntax.scm 239 */
FAILURE(BGl_string2917z00zz__r5_macro_4_3_syntaxz00,BGl_list2918z00zz__r5_macro_4_3_syntaxz00,BgL_funz00_3311);} } 
{ /* R5rs/syntax.scm 240 */
bool_t BgL_test3219z00_4348;
if(
PAIRP(BgL_newz00_1079))
{ /* R5rs/syntax.scm 240 */
bool_t BgL_test3221z00_4351;
{ /* R5rs/syntax.scm 240 */
bool_t BgL_res2203z00_2417;
BgL_res2203z00_2417 = 
EPAIRP(BgL_newz00_1079); 
BgL_test3221z00_4351 = BgL_res2203z00_2417; } 
if(BgL_test3221z00_4351)
{ /* R5rs/syntax.scm 240 */
BgL_test3219z00_4348 = ((bool_t)0)
; }  else 
{ /* R5rs/syntax.scm 240 */
bool_t BgL_res2204z00_2418;
BgL_res2204z00_2418 = 
EPAIRP(BgL_xz00_7); 
BgL_test3219z00_4348 = BgL_res2204z00_2418; } }  else 
{ /* R5rs/syntax.scm 240 */
BgL_test3219z00_4348 = ((bool_t)0)
; } 
if(BgL_test3219z00_4348)
{ /* R5rs/syntax.scm 241 */
obj_t BgL_arg1243z00_1083;obj_t BgL_arg1245z00_1084;obj_t BgL_arg1246z00_1085;
BgL_arg1243z00_1083 = 
CAR(BgL_newz00_1079); 
BgL_arg1245z00_1084 = 
CDR(BgL_newz00_1079); 
{ /* R5rs/syntax.scm 241 */
obj_t BgL_objz00_2421;
if(
EPAIRP(BgL_xz00_7))
{ /* R5rs/syntax.scm 241 */
BgL_objz00_2421 = BgL_xz00_7; }  else 
{ 
obj_t BgL_auxz00_4358;
BgL_auxz00_4358 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)7671)), BGl_string2916z00zz__r5_macro_4_3_syntaxz00, BGl_string2925z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_7); 
FAILURE(BgL_auxz00_4358,BFALSE,BFALSE);} 
BgL_arg1246z00_1085 = 
CER(BgL_objz00_2421); } 
{ /* R5rs/syntax.scm 241 */
obj_t BgL_res2205z00_2422;
BgL_res2205z00_2422 = 
MAKE_YOUNG_EPAIR(BgL_arg1243z00_1083, BgL_arg1245z00_1084, BgL_arg1246z00_1085); 
return BgL_res2205z00_2422;} }  else 
{ /* R5rs/syntax.scm 240 */
return BgL_newz00_1079;} } } } } 

}



/* &syntax-expander */
obj_t BGl_z62syntaxzd2expanderzb0zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3210, obj_t BgL_xz00_3211, obj_t BgL_ez00_3212)
{
{ /* R5rs/syntax.scm 222 */
return 
BGl_syntaxzd2expanderzd2zz__r5_macro_4_3_syntaxz00(BgL_xz00_3211, BgL_ez00_3212);} 

}



/* &<@anonymous:1248> */
obj_t BGl_z62zc3z04anonymousza31248ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3213, obj_t BgL_xz00_3214, obj_t BgL_ez00_3215)
{
{ /* R5rs/syntax.scm 230 */
return 
BGl_loopze73ze7zz__r5_macro_4_3_syntaxz00(BgL_ez00_3215, BgL_xz00_3214);} 

}



/* loop~3 */
obj_t BGl_loopze73ze7zz__r5_macro_4_3_syntaxz00(obj_t BgL_ez00_3290, obj_t BgL_xz00_1096)
{
{ /* R5rs/syntax.scm 231 */
if(
PAIRP(BgL_xz00_1096))
{ /* R5rs/syntax.scm 234 */
obj_t BgL_arg1252z00_1099;obj_t BgL_arg1253z00_1100;
{ /* R5rs/syntax.scm 234 */
obj_t BgL_arg1254z00_1101;
BgL_arg1254z00_1101 = 
CAR(BgL_xz00_1096); 
{ /* R5rs/syntax.scm 234 */
obj_t BgL_funz00_3318;
if(
PROCEDUREP(BgL_ez00_3290))
{ /* R5rs/syntax.scm 234 */
BgL_funz00_3318 = BgL_ez00_3290; }  else 
{ 
obj_t BgL_auxz00_4371;
BgL_auxz00_4371 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)7460)), BGl_string2926z00zz__r5_macro_4_3_syntaxz00, BGl_string2684z00zz__r5_macro_4_3_syntaxz00, BgL_ez00_3290); 
FAILURE(BgL_auxz00_4371,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3318, ((long)2)))
{ /* R5rs/syntax.scm 234 */
BgL_arg1252z00_1099 = 
PROCEDURE_ENTRY(BgL_funz00_3318)(BgL_ez00_3290, BgL_arg1254z00_1101, BgL_ez00_3290, BEOA); }  else 
{ /* R5rs/syntax.scm 234 */
FAILURE(BGl_string2927z00zz__r5_macro_4_3_syntaxz00,BGl_list2928z00zz__r5_macro_4_3_syntaxz00,BgL_funz00_3318);} } } 
BgL_arg1253z00_1100 = 
BGl_loopze73ze7zz__r5_macro_4_3_syntaxz00(BgL_ez00_3290, 
CDR(BgL_xz00_1096)); 
return 
MAKE_YOUNG_PAIR(BgL_arg1252z00_1099, BgL_arg1253z00_1100);}  else 
{ /* R5rs/syntax.scm 233 */
if(
NULLP(BgL_xz00_1096))
{ /* R5rs/syntax.scm 235 */
return BNIL;}  else 
{ /* R5rs/syntax.scm 238 */
obj_t BgL_funz00_3323;
if(
PROCEDUREP(BgL_ez00_3290))
{ /* R5rs/syntax.scm 238 */
BgL_funz00_3323 = BgL_ez00_3290; }  else 
{ 
obj_t BgL_auxz00_4390;
BgL_auxz00_4390 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)7535)), BGl_string2926z00zz__r5_macro_4_3_syntaxz00, BGl_string2684z00zz__r5_macro_4_3_syntaxz00, BgL_ez00_3290); 
FAILURE(BgL_auxz00_4390,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3323, ((long)2)))
{ /* R5rs/syntax.scm 238 */
return 
PROCEDURE_ENTRY(BgL_funz00_3323)(BgL_ez00_3290, BgL_xz00_1096, BgL_ez00_3290, BEOA);}  else 
{ /* R5rs/syntax.scm 238 */
FAILURE(BGl_string2927z00zz__r5_macro_4_3_syntaxz00,BGl_list2931z00zz__r5_macro_4_3_syntaxz00,BgL_funz00_3323);} } } } 

}



/* &<@anonymous:1259> */
obj_t BGl_z62zc3z04anonymousza31259ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3216, obj_t BgL_xz00_3217, obj_t BgL_ez00_3218)
{
{ /* R5rs/syntax.scm 225 */
return BgL_xz00_3217;} 

}



/* expand-define-syntax */
BGL_EXPORTED_DEF obj_t BGl_expandzd2definezd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_9, obj_t BgL_ez00_10)
{
{ /* R5rs/syntax.scm 247 */
if(
PAIRP(BgL_xz00_9))
{ /* R5rs/syntax.scm 248 */
obj_t BgL_cdrzd2111zd2_1116;
BgL_cdrzd2111zd2_1116 = 
CDR(BgL_xz00_9); 
if(
PAIRP(BgL_cdrzd2111zd2_1116))
{ /* R5rs/syntax.scm 248 */
obj_t BgL_carzd2115zd2_1118;obj_t BgL_cdrzd2116zd2_1119;
BgL_carzd2115zd2_1118 = 
CAR(BgL_cdrzd2111zd2_1116); 
BgL_cdrzd2116zd2_1119 = 
CDR(BgL_cdrzd2111zd2_1116); 
if(
SYMBOLP(BgL_carzd2115zd2_1118))
{ /* R5rs/syntax.scm 248 */
if(
PAIRP(BgL_cdrzd2116zd2_1119))
{ /* R5rs/syntax.scm 248 */
obj_t BgL_carzd2122zd2_1122;
BgL_carzd2122zd2_1122 = 
CAR(BgL_cdrzd2116zd2_1119); 
if(
PAIRP(BgL_carzd2122zd2_1122))
{ /* R5rs/syntax.scm 248 */
obj_t BgL_cdrzd2127zd2_1124;
BgL_cdrzd2127zd2_1124 = 
CDR(BgL_carzd2122zd2_1122); 
if(
(
CAR(BgL_carzd2122zd2_1122)==BGl_symbol2932z00zz__r5_macro_4_3_syntaxz00))
{ /* R5rs/syntax.scm 248 */
if(
PAIRP(BgL_cdrzd2127zd2_1124))
{ /* R5rs/syntax.scm 248 */
if(
NULLP(
CDR(BgL_cdrzd2116zd2_1119)))
{ /* R5rs/syntax.scm 248 */
obj_t BgL_arg1273z00_1130;obj_t BgL_arg1274z00_1131;
BgL_arg1273z00_1130 = 
CAR(BgL_cdrzd2127zd2_1124); 
BgL_arg1274z00_1131 = 
CDR(BgL_cdrzd2127zd2_1124); 
{ /* R5rs/syntax.scm 250 */
obj_t BgL_exz00_2443;
BGl_initzd2syntaxzd2expandersz12z12zz__r5_macro_4_3_syntaxz00(); 
{ /* R5rs/syntax.scm 310 */
obj_t BgL_auxz00_4437;obj_t BgL_auxz00_4428;
{ /* R5rs/syntax.scm 310 */
bool_t BgL_test3239z00_4438;
if(
PAIRP(BgL_arg1274z00_1131))
{ /* R5rs/syntax.scm 310 */
BgL_test3239z00_4438 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 310 */
BgL_test3239z00_4438 = 
NULLP(BgL_arg1274z00_1131)
; } 
if(BgL_test3239z00_4438)
{ /* R5rs/syntax.scm 310 */
BgL_auxz00_4437 = BgL_arg1274z00_1131
; }  else 
{ 
obj_t BgL_auxz00_4442;
BgL_auxz00_4442 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)10328)), BGl_string2934z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_arg1274z00_1131); 
FAILURE(BgL_auxz00_4442,BFALSE,BFALSE);} } 
{ /* R5rs/syntax.scm 310 */
bool_t BgL_test3237z00_4429;
if(
PAIRP(BgL_arg1273z00_1130))
{ /* R5rs/syntax.scm 310 */
BgL_test3237z00_4429 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 310 */
BgL_test3237z00_4429 = 
NULLP(BgL_arg1273z00_1130)
; } 
if(BgL_test3237z00_4429)
{ /* R5rs/syntax.scm 310 */
BgL_auxz00_4428 = BgL_arg1273z00_1130
; }  else 
{ 
obj_t BgL_auxz00_4433;
BgL_auxz00_4433 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)10319)), BGl_string2934z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_arg1273z00_1130); 
FAILURE(BgL_auxz00_4433,BFALSE,BFALSE);} } 
BgL_exz00_2443 = 
BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(BgL_carzd2115zd2_1118, BgL_auxz00_4428, BgL_auxz00_4437); } 
{ /* R5rs/syntax.scm 251 */
obj_t BgL_auxz00_4447;
if(
PROCEDUREP(BgL_exz00_2443))
{ /* R5rs/syntax.scm 251 */
BgL_auxz00_4447 = BgL_exz00_2443
; }  else 
{ 
obj_t BgL_auxz00_4450;
BgL_auxz00_4450 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)8151)), BGl_string2934z00zz__r5_macro_4_3_syntaxz00, BGl_string2684z00zz__r5_macro_4_3_syntaxz00, BgL_exz00_2443); 
FAILURE(BgL_auxz00_4450,BFALSE,BFALSE);} 
BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(BgL_carzd2115zd2_1118, BgL_auxz00_4447); } 
BGl_installzd2expanderzd2zz__macroz00(BgL_carzd2115zd2_1118, BgL_exz00_2443); 
return BUNSPEC;} }  else 
{ /* R5rs/syntax.scm 248 */
return 
BGl_errorz00zz__errorz00(BGl_string2935z00zz__r5_macro_4_3_syntaxz00, BGl_string2936z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_9);} }  else 
{ /* R5rs/syntax.scm 248 */
return 
BGl_errorz00zz__errorz00(BGl_string2935z00zz__r5_macro_4_3_syntaxz00, BGl_string2936z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_9);} }  else 
{ /* R5rs/syntax.scm 248 */
return 
BGl_errorz00zz__errorz00(BGl_string2935z00zz__r5_macro_4_3_syntaxz00, BGl_string2936z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_9);} }  else 
{ /* R5rs/syntax.scm 248 */
return 
BGl_errorz00zz__errorz00(BGl_string2935z00zz__r5_macro_4_3_syntaxz00, BGl_string2936z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_9);} }  else 
{ /* R5rs/syntax.scm 248 */
return 
BGl_errorz00zz__errorz00(BGl_string2935z00zz__r5_macro_4_3_syntaxz00, BGl_string2936z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_9);} }  else 
{ /* R5rs/syntax.scm 248 */
return 
BGl_errorz00zz__errorz00(BGl_string2935z00zz__r5_macro_4_3_syntaxz00, BGl_string2936z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_9);} }  else 
{ /* R5rs/syntax.scm 248 */
return 
BGl_errorz00zz__errorz00(BGl_string2935z00zz__r5_macro_4_3_syntaxz00, BGl_string2936z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_9);} }  else 
{ /* R5rs/syntax.scm 248 */
return 
BGl_errorz00zz__errorz00(BGl_string2935z00zz__r5_macro_4_3_syntaxz00, BGl_string2936z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_9);} } 

}



/* &expand-define-syntax */
obj_t BGl_z62expandzd2definezd2syntaxz62zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3219, obj_t BgL_xz00_3220, obj_t BgL_ez00_3221)
{
{ /* R5rs/syntax.scm 247 */
{ /* R5rs/syntax.scm 248 */
obj_t BgL_auxz00_4464;
if(
PROCEDUREP(BgL_ez00_3221))
{ /* R5rs/syntax.scm 248 */
BgL_auxz00_4464 = BgL_ez00_3221
; }  else 
{ 
obj_t BgL_auxz00_4467;
BgL_auxz00_4467 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)7950)), BGl_string2937z00zz__r5_macro_4_3_syntaxz00, BGl_string2684z00zz__r5_macro_4_3_syntaxz00, BgL_ez00_3221); 
FAILURE(BgL_auxz00_4467,BFALSE,BFALSE);} 
return 
BGl_expandzd2definezd2syntaxz00zz__r5_macro_4_3_syntaxz00(BgL_xz00_3220, BgL_auxz00_4464);} } 

}



/* expand-letrec-syntax */
BGL_EXPORTED_DEF obj_t BGl_expandzd2letreczd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_11, obj_t BgL_ez00_12)
{
{ /* R5rs/syntax.scm 260 */
{ 
obj_t BgL_bsz00_1135;obj_t BgL_bodyz00_1136;
if(
PAIRP(BgL_xz00_11))
{ /* R5rs/syntax.scm 261 */
obj_t BgL_cdrzd2142zd2_1141;
BgL_cdrzd2142zd2_1141 = 
CDR(BgL_xz00_11); 
if(
PAIRP(BgL_cdrzd2142zd2_1141))
{ /* R5rs/syntax.scm 261 */
BgL_bsz00_1135 = 
CAR(BgL_cdrzd2142zd2_1141); 
BgL_bodyz00_1136 = 
CDR(BgL_cdrzd2142zd2_1141); 
{ /* R5rs/syntax.scm 263 */
obj_t BgL_e1z00_1145;
BgL_e1z00_1145 = 
BGl_loopze72ze7zz__r5_macro_4_3_syntaxz00(BgL_ez00_12, BgL_bsz00_1135); 
{ /* R5rs/syntax.scm 277 */
obj_t BgL_arg1282z00_1146;
{ /* R5rs/syntax.scm 277 */
obj_t BgL_arg1284z00_1147;
if(
NULLP(BgL_bodyz00_1136))
{ /* R5rs/syntax.scm 277 */
BgL_arg1284z00_1147 = BNIL; }  else 
{ /* R5rs/syntax.scm 277 */
obj_t BgL_head1093z00_1150;
{ /* R5rs/syntax.scm 277 */
obj_t BgL_res2222z00_2464;
BgL_res2222z00_2464 = 
MAKE_YOUNG_PAIR(BNIL, BNIL); 
BgL_head1093z00_1150 = BgL_res2222z00_2464; } 
{ 
obj_t BgL_l1091z00_1152;obj_t BgL_tail1094z00_1153;
BgL_l1091z00_1152 = BgL_bodyz00_1136; 
BgL_tail1094z00_1153 = BgL_head1093z00_1150; 
BgL_zc3z04anonymousza31286ze3z87_1154:
if(
PAIRP(BgL_l1091z00_1152))
{ /* R5rs/syntax.scm 277 */
obj_t BgL_newtail1095z00_1156;
{ /* R5rs/syntax.scm 277 */
obj_t BgL_arg1289z00_1158;
{ /* R5rs/syntax.scm 277 */
obj_t BgL_xz00_1159;
BgL_xz00_1159 = 
CAR(BgL_l1091z00_1152); 
{ /* R5rs/syntax.scm 277 */
obj_t BgL_arg1290z00_1160;
BgL_arg1290z00_1160 = 
BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(BgL_xz00_1159, BNIL); 
{ /* R5rs/syntax.scm 277 */
obj_t BgL_funz00_3336;
if(
PROCEDUREP(BgL_e1z00_1145))
{ /* R5rs/syntax.scm 277 */
BgL_funz00_3336 = BgL_e1z00_1145; }  else 
{ 
obj_t BgL_auxz00_4487;
BgL_auxz00_4487 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)9026)), BGl_string2938z00zz__r5_macro_4_3_syntaxz00, BGl_string2684z00zz__r5_macro_4_3_syntaxz00, BgL_e1z00_1145); 
FAILURE(BgL_auxz00_4487,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3336, ((long)2)))
{ /* R5rs/syntax.scm 277 */
BgL_arg1289z00_1158 = 
PROCEDURE_ENTRY(BgL_funz00_3336)(BgL_e1z00_1145, BgL_arg1290z00_1160, BgL_e1z00_1145, BEOA); }  else 
{ /* R5rs/syntax.scm 277 */
FAILURE(BGl_string2939z00zz__r5_macro_4_3_syntaxz00,BGl_list2940z00zz__r5_macro_4_3_syntaxz00,BgL_funz00_3336);} } } } 
{ /* R5rs/syntax.scm 277 */
obj_t BgL_res2224z00_2467;
BgL_res2224z00_2467 = 
MAKE_YOUNG_PAIR(BgL_arg1289z00_1158, BNIL); 
BgL_newtail1095z00_1156 = BgL_res2224z00_2467; } } 
SET_CDR(BgL_tail1094z00_1153, BgL_newtail1095z00_1156); 
{ 
obj_t BgL_tail1094z00_4503;obj_t BgL_l1091z00_4501;
BgL_l1091z00_4501 = 
CDR(BgL_l1091z00_1152); 
BgL_tail1094z00_4503 = BgL_newtail1095z00_1156; 
BgL_tail1094z00_1153 = BgL_tail1094z00_4503; 
BgL_l1091z00_1152 = BgL_l1091z00_4501; 
goto BgL_zc3z04anonymousza31286ze3z87_1154;} }  else 
{ /* R5rs/syntax.scm 277 */
if(
NULLP(BgL_l1091z00_1152))
{ /* R5rs/syntax.scm 277 */
BgL_arg1284z00_1147 = 
CDR(BgL_head1093z00_1150); }  else 
{ /* R5rs/syntax.scm 277 */
BgL_arg1284z00_1147 = 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string2943z00zz__r5_macro_4_3_syntaxz00, BGl_string2944z00zz__r5_macro_4_3_syntaxz00, BgL_l1091z00_1152, BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)9009))); } } } } 
{ /* R5rs/syntax.scm 276 */
obj_t BgL_auxz00_4509;
{ /* R5rs/syntax.scm 276 */
bool_t BgL_test3250z00_4510;
if(
PAIRP(BgL_arg1284z00_1147))
{ /* R5rs/syntax.scm 276 */
BgL_test3250z00_4510 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 276 */
BgL_test3250z00_4510 = 
NULLP(BgL_arg1284z00_1147)
; } 
if(BgL_test3250z00_4510)
{ /* R5rs/syntax.scm 276 */
BgL_auxz00_4509 = BgL_arg1284z00_1147
; }  else 
{ 
obj_t BgL_auxz00_4514;
BgL_auxz00_4514 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)8993)), BGl_string2945z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_arg1284z00_1147); 
FAILURE(BgL_auxz00_4514,BFALSE,BFALSE);} } 
BgL_arg1282z00_1146 = 
BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4509, BNIL); } } 
return 
MAKE_YOUNG_PAIR(BGl_symbol2706z00zz__r5_macro_4_3_syntaxz00, BgL_arg1282z00_1146);} } }  else 
{ /* R5rs/syntax.scm 261 */
return 
BGl_errorz00zz__errorz00(BGl_string2946z00zz__r5_macro_4_3_syntaxz00, BGl_string2936z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_11);} }  else 
{ /* R5rs/syntax.scm 261 */
return 
BGl_errorz00zz__errorz00(BGl_string2946z00zz__r5_macro_4_3_syntaxz00, BGl_string2936z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_11);} } } 

}



/* loop~2 */
obj_t BGl_loopze72ze7zz__r5_macro_4_3_syntaxz00(obj_t BgL_ez00_3289, obj_t BgL_bsz00_1164)
{
{ /* R5rs/syntax.scm 263 */
if(
NULLP(BgL_bsz00_1164))
{ /* R5rs/syntax.scm 264 */
return BgL_ez00_3289;}  else 
{ 
obj_t BgL_mz00_1167;obj_t BgL_lsz00_1168;obj_t BgL_rulesz00_1169;
{ /* R5rs/syntax.scm 266 */
obj_t BgL_ezd2151zd2_1172;
{ /* R5rs/syntax.scm 266 */
obj_t BgL_pairz00_2448;
if(
PAIRP(BgL_bsz00_1164))
{ /* R5rs/syntax.scm 266 */
BgL_pairz00_2448 = BgL_bsz00_1164; }  else 
{ 
obj_t BgL_auxz00_4528;
BgL_auxz00_4528 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)8653)), BGl_string2949z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_1164); 
FAILURE(BgL_auxz00_4528,BFALSE,BFALSE);} 
BgL_ezd2151zd2_1172 = 
CAR(BgL_pairz00_2448); } 
if(
PAIRP(BgL_ezd2151zd2_1172))
{ /* R5rs/syntax.scm 266 */
obj_t BgL_carzd2158zd2_1174;obj_t BgL_cdrzd2159zd2_1175;
BgL_carzd2158zd2_1174 = 
CAR(BgL_ezd2151zd2_1172); 
BgL_cdrzd2159zd2_1175 = 
CDR(BgL_ezd2151zd2_1172); 
if(
SYMBOLP(BgL_carzd2158zd2_1174))
{ /* R5rs/syntax.scm 266 */
if(
PAIRP(BgL_cdrzd2159zd2_1175))
{ /* R5rs/syntax.scm 266 */
obj_t BgL_carzd2165zd2_1178;
BgL_carzd2165zd2_1178 = 
CAR(BgL_cdrzd2159zd2_1175); 
if(
PAIRP(BgL_carzd2165zd2_1178))
{ /* R5rs/syntax.scm 266 */
obj_t BgL_cdrzd2170zd2_1180;
BgL_cdrzd2170zd2_1180 = 
CDR(BgL_carzd2165zd2_1178); 
if(
(
CAR(BgL_carzd2165zd2_1178)==BGl_symbol2932z00zz__r5_macro_4_3_syntaxz00))
{ /* R5rs/syntax.scm 266 */
if(
PAIRP(BgL_cdrzd2170zd2_1180))
{ /* R5rs/syntax.scm 266 */
if(
NULLP(
CDR(BgL_cdrzd2159zd2_1175)))
{ /* R5rs/syntax.scm 266 */
BgL_mz00_1167 = BgL_carzd2158zd2_1174; 
BgL_lsz00_1168 = 
CAR(BgL_cdrzd2170zd2_1180); 
BgL_rulesz00_1169 = 
CDR(BgL_cdrzd2170zd2_1180); 
{ /* R5rs/syntax.scm 268 */
obj_t BgL_e3z00_1190;obj_t BgL_e4z00_1191;
BGl_initzd2syntaxzd2expandersz12z12zz__r5_macro_4_3_syntaxz00(); 
{ /* R5rs/syntax.scm 310 */
obj_t BgL_auxz00_4563;obj_t BgL_auxz00_4554;
{ /* R5rs/syntax.scm 310 */
bool_t BgL_test3263z00_4564;
if(
PAIRP(BgL_rulesz00_1169))
{ /* R5rs/syntax.scm 310 */
BgL_test3263z00_4564 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 310 */
BgL_test3263z00_4564 = 
NULLP(BgL_rulesz00_1169)
; } 
if(BgL_test3263z00_4564)
{ /* R5rs/syntax.scm 310 */
BgL_auxz00_4563 = BgL_rulesz00_1169
; }  else 
{ 
obj_t BgL_auxz00_4568;
BgL_auxz00_4568 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)10328)), BGl_string2947z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_rulesz00_1169); 
FAILURE(BgL_auxz00_4568,BFALSE,BFALSE);} } 
{ /* R5rs/syntax.scm 310 */
bool_t BgL_test3261z00_4555;
if(
PAIRP(BgL_lsz00_1168))
{ /* R5rs/syntax.scm 310 */
BgL_test3261z00_4555 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 310 */
BgL_test3261z00_4555 = 
NULLP(BgL_lsz00_1168)
; } 
if(BgL_test3261z00_4555)
{ /* R5rs/syntax.scm 310 */
BgL_auxz00_4554 = BgL_lsz00_1168
; }  else 
{ 
obj_t BgL_auxz00_4559;
BgL_auxz00_4559 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)10319)), BGl_string2947z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_lsz00_1168); 
FAILURE(BgL_auxz00_4559,BFALSE,BFALSE);} } 
BgL_e3z00_1190 = 
BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(BgL_mz00_1167, BgL_auxz00_4554, BgL_auxz00_4563); } 
{ /* R5rs/syntax.scm 269 */
obj_t BgL_arg1313z00_1200;
{ /* R5rs/syntax.scm 269 */
obj_t BgL_pairz00_2445;
if(
PAIRP(BgL_bsz00_1164))
{ /* R5rs/syntax.scm 269 */
BgL_pairz00_2445 = BgL_bsz00_1164; }  else 
{ 
obj_t BgL_auxz00_4575;
BgL_auxz00_4575 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)8795)), BGl_string2947z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_1164); 
FAILURE(BgL_auxz00_4575,BFALSE,BFALSE);} 
BgL_arg1313z00_1200 = 
CDR(BgL_pairz00_2445); } 
BgL_e4z00_1191 = 
BGl_loopze72ze7zz__r5_macro_4_3_syntaxz00(BgL_ez00_3289, BgL_arg1313z00_1200); } 
{ /* R5rs/syntax.scm 270 */
obj_t BgL_zc3z04anonymousza31308ze3z87_3222;
BgL_zc3z04anonymousza31308ze3z87_3222 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31308ze3ze5zz__r5_macro_4_3_syntaxz00, 
(int)(((long)2)), 
(int)(((long)3))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31308ze3z87_3222, 
(int)(((long)0)), BgL_e4z00_1191); 
PROCEDURE_SET(BgL_zc3z04anonymousza31308ze3z87_3222, 
(int)(((long)1)), BgL_e3z00_1190); 
PROCEDURE_SET(BgL_zc3z04anonymousza31308ze3z87_3222, 
(int)(((long)2)), BgL_mz00_1167); 
return BgL_zc3z04anonymousza31308ze3z87_3222;} } }  else 
{ /* R5rs/syntax.scm 266 */
return 
BGl_errorz00zz__errorz00(BGl_string2950z00zz__r5_macro_4_3_syntaxz00, BGl_string2951z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_1164);} }  else 
{ /* R5rs/syntax.scm 266 */
return 
BGl_errorz00zz__errorz00(BGl_string2950z00zz__r5_macro_4_3_syntaxz00, BGl_string2951z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_1164);} }  else 
{ /* R5rs/syntax.scm 266 */
return 
BGl_errorz00zz__errorz00(BGl_string2950z00zz__r5_macro_4_3_syntaxz00, BGl_string2951z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_1164);} }  else 
{ /* R5rs/syntax.scm 266 */
return 
BGl_errorz00zz__errorz00(BGl_string2950z00zz__r5_macro_4_3_syntaxz00, BGl_string2951z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_1164);} }  else 
{ /* R5rs/syntax.scm 266 */
return 
BGl_errorz00zz__errorz00(BGl_string2950z00zz__r5_macro_4_3_syntaxz00, BGl_string2951z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_1164);} }  else 
{ /* R5rs/syntax.scm 266 */
return 
BGl_errorz00zz__errorz00(BGl_string2950z00zz__r5_macro_4_3_syntaxz00, BGl_string2951z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_1164);} }  else 
{ /* R5rs/syntax.scm 266 */
return 
BGl_errorz00zz__errorz00(BGl_string2950z00zz__r5_macro_4_3_syntaxz00, BGl_string2951z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_1164);} } } } 

}



/* &expand-letrec-syntax */
obj_t BGl_z62expandzd2letreczd2syntaxz62zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3223, obj_t BgL_xz00_3224, obj_t BgL_ez00_3225)
{
{ /* R5rs/syntax.scm 260 */
{ /* R5rs/syntax.scm 261 */
obj_t BgL_auxz00_4599;
if(
PROCEDUREP(BgL_ez00_3225))
{ /* R5rs/syntax.scm 261 */
BgL_auxz00_4599 = BgL_ez00_3225
; }  else 
{ 
obj_t BgL_auxz00_4602;
BgL_auxz00_4602 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)8532)), BGl_string2952z00zz__r5_macro_4_3_syntaxz00, BGl_string2684z00zz__r5_macro_4_3_syntaxz00, BgL_ez00_3225); 
FAILURE(BgL_auxz00_4602,BFALSE,BFALSE);} 
return 
BGl_expandzd2letreczd2syntaxz00zz__r5_macro_4_3_syntaxz00(BgL_xz00_3224, BgL_auxz00_4599);} } 

}



/* &<@anonymous:1308> */
obj_t BGl_z62zc3z04anonymousza31308ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3226, obj_t BgL_xz00_3230, obj_t BgL_e2z00_3231)
{
{ /* R5rs/syntax.scm 270 */
{ /* R5rs/syntax.scm 271 */
obj_t BgL_e4z00_3227;obj_t BgL_e3z00_3228;obj_t BgL_mz00_3229;
BgL_e4z00_3227 = 
PROCEDURE_REF(BgL_envz00_3226, 
(int)(((long)0))); 
BgL_e3z00_3228 = 
PROCEDURE_REF(BgL_envz00_3226, 
(int)(((long)1))); 
BgL_mz00_3229 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3226, 
(int)(((long)2)))); 
{ /* R5rs/syntax.scm 271 */
bool_t BgL_test3267z00_4614;
if(
PAIRP(BgL_xz00_3230))
{ /* R5rs/syntax.scm 271 */
BgL_test3267z00_4614 = 
BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00(BgL_mz00_3229, 
CAR(BgL_xz00_3230))
; }  else 
{ /* R5rs/syntax.scm 271 */
BgL_test3267z00_4614 = ((bool_t)0)
; } 
if(BgL_test3267z00_4614)
{ /* R5rs/syntax.scm 272 */
obj_t BgL_funz00_3567;
if(
PROCEDUREP(BgL_e3z00_3228))
{ /* R5rs/syntax.scm 272 */
BgL_funz00_3567 = BgL_e3z00_3228; }  else 
{ 
obj_t BgL_auxz00_4621;
BgL_auxz00_4621 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)8887)), BGl_string2953z00zz__r5_macro_4_3_syntaxz00, BGl_string2684z00zz__r5_macro_4_3_syntaxz00, BgL_e3z00_3228); 
FAILURE(BgL_auxz00_4621,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3567, ((long)2)))
{ /* R5rs/syntax.scm 272 */
return 
PROCEDURE_ENTRY(BgL_funz00_3567)(BgL_e3z00_3228, BgL_xz00_3230, BgL_e2z00_3231, BEOA);}  else 
{ /* R5rs/syntax.scm 272 */
FAILURE(BGl_string2954z00zz__r5_macro_4_3_syntaxz00,BGl_list2955z00zz__r5_macro_4_3_syntaxz00,BgL_funz00_3567);} }  else 
{ /* R5rs/syntax.scm 273 */
obj_t BgL_funz00_3568;
if(
PROCEDUREP(BgL_e4z00_3227))
{ /* R5rs/syntax.scm 273 */
BgL_funz00_3568 = BgL_e4z00_3227; }  else 
{ 
obj_t BgL_auxz00_4635;
BgL_auxz00_4635 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)8907)), BGl_string2953z00zz__r5_macro_4_3_syntaxz00, BGl_string2684z00zz__r5_macro_4_3_syntaxz00, BgL_e4z00_3227); 
FAILURE(BgL_auxz00_4635,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3568, ((long)2)))
{ /* R5rs/syntax.scm 273 */
return 
PROCEDURE_ENTRY(BgL_funz00_3568)(BgL_e4z00_3227, BgL_xz00_3230, BgL_e2z00_3231, BEOA);}  else 
{ /* R5rs/syntax.scm 273 */
FAILURE(BGl_string2954z00zz__r5_macro_4_3_syntaxz00,BGl_list2960z00zz__r5_macro_4_3_syntaxz00,BgL_funz00_3568);} } } } } 

}



/* expand-let-syntax */
BGL_EXPORTED_DEF obj_t BGl_expandzd2letzd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_13, obj_t BgL_ez00_14)
{
{ /* R5rs/syntax.scm 284 */
{ 
obj_t BgL_bsz00_1202;obj_t BgL_bodyz00_1203;
if(
PAIRP(BgL_xz00_13))
{ /* R5rs/syntax.scm 285 */
obj_t BgL_cdrzd2185zd2_1208;
BgL_cdrzd2185zd2_1208 = 
CDR(BgL_xz00_13); 
if(
PAIRP(BgL_cdrzd2185zd2_1208))
{ /* R5rs/syntax.scm 285 */
BgL_bsz00_1202 = 
CAR(BgL_cdrzd2185zd2_1208); 
BgL_bodyz00_1203 = 
CDR(BgL_cdrzd2185zd2_1208); 
{ /* R5rs/syntax.scm 287 */
obj_t BgL_e1z00_1212;
BgL_e1z00_1212 = 
BGl_loopze71ze7zz__r5_macro_4_3_syntaxz00(BgL_ez00_14, BgL_bsz00_1202); 
{ /* R5rs/syntax.scm 301 */
obj_t BgL_arg1318z00_1213;
{ /* R5rs/syntax.scm 301 */
obj_t BgL_arg1319z00_1214;
if(
NULLP(BgL_bodyz00_1203))
{ /* R5rs/syntax.scm 301 */
BgL_arg1319z00_1214 = BNIL; }  else 
{ /* R5rs/syntax.scm 301 */
obj_t BgL_head1098z00_1217;
{ /* R5rs/syntax.scm 301 */
obj_t BgL_res2237z00_2497;
BgL_res2237z00_2497 = 
MAKE_YOUNG_PAIR(BNIL, BNIL); 
BgL_head1098z00_1217 = BgL_res2237z00_2497; } 
{ 
obj_t BgL_l1096z00_1219;obj_t BgL_tail1099z00_1220;
BgL_l1096z00_1219 = BgL_bodyz00_1203; 
BgL_tail1099z00_1220 = BgL_head1098z00_1217; 
BgL_zc3z04anonymousza31321ze3z87_1221:
if(
PAIRP(BgL_l1096z00_1219))
{ /* R5rs/syntax.scm 301 */
obj_t BgL_newtail1100z00_1223;
{ /* R5rs/syntax.scm 301 */
obj_t BgL_arg1325z00_1225;
{ /* R5rs/syntax.scm 301 */
obj_t BgL_xz00_1226;
BgL_xz00_1226 = 
CAR(BgL_l1096z00_1219); 
{ /* R5rs/syntax.scm 301 */
obj_t BgL_arg1326z00_1227;
BgL_arg1326z00_1227 = 
BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(BgL_xz00_1226, BNIL); 
{ /* R5rs/syntax.scm 301 */
obj_t BgL_funz00_3363;
if(
PROCEDUREP(BgL_e1z00_1212))
{ /* R5rs/syntax.scm 301 */
BgL_funz00_3363 = BgL_e1z00_1212; }  else 
{ 
obj_t BgL_auxz00_4662;
BgL_auxz00_4662 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)9876)), BGl_string2963z00zz__r5_macro_4_3_syntaxz00, BGl_string2684z00zz__r5_macro_4_3_syntaxz00, BgL_e1z00_1212); 
FAILURE(BgL_auxz00_4662,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3363, ((long)2)))
{ /* R5rs/syntax.scm 301 */
BgL_arg1325z00_1225 = 
PROCEDURE_ENTRY(BgL_funz00_3363)(BgL_e1z00_1212, BgL_arg1326z00_1227, BgL_e1z00_1212, BEOA); }  else 
{ /* R5rs/syntax.scm 301 */
FAILURE(BGl_string2964z00zz__r5_macro_4_3_syntaxz00,BGl_list2965z00zz__r5_macro_4_3_syntaxz00,BgL_funz00_3363);} } } } 
{ /* R5rs/syntax.scm 301 */
obj_t BgL_res2239z00_2500;
BgL_res2239z00_2500 = 
MAKE_YOUNG_PAIR(BgL_arg1325z00_1225, BNIL); 
BgL_newtail1100z00_1223 = BgL_res2239z00_2500; } } 
SET_CDR(BgL_tail1099z00_1220, BgL_newtail1100z00_1223); 
{ 
obj_t BgL_tail1099z00_4678;obj_t BgL_l1096z00_4676;
BgL_l1096z00_4676 = 
CDR(BgL_l1096z00_1219); 
BgL_tail1099z00_4678 = BgL_newtail1100z00_1223; 
BgL_tail1099z00_1220 = BgL_tail1099z00_4678; 
BgL_l1096z00_1219 = BgL_l1096z00_4676; 
goto BgL_zc3z04anonymousza31321ze3z87_1221;} }  else 
{ /* R5rs/syntax.scm 301 */
if(
NULLP(BgL_l1096z00_1219))
{ /* R5rs/syntax.scm 301 */
BgL_arg1319z00_1214 = 
CDR(BgL_head1098z00_1217); }  else 
{ /* R5rs/syntax.scm 301 */
BgL_arg1319z00_1214 = 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string2943z00zz__r5_macro_4_3_syntaxz00, BGl_string2944z00zz__r5_macro_4_3_syntaxz00, BgL_l1096z00_1219, BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)9859))); } } } } 
{ /* R5rs/syntax.scm 300 */
obj_t BgL_auxz00_4684;
{ /* R5rs/syntax.scm 300 */
bool_t BgL_test3280z00_4685;
if(
PAIRP(BgL_arg1319z00_1214))
{ /* R5rs/syntax.scm 300 */
BgL_test3280z00_4685 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 300 */
BgL_test3280z00_4685 = 
NULLP(BgL_arg1319z00_1214)
; } 
if(BgL_test3280z00_4685)
{ /* R5rs/syntax.scm 300 */
BgL_auxz00_4684 = BgL_arg1319z00_1214
; }  else 
{ 
obj_t BgL_auxz00_4689;
BgL_auxz00_4689 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)9843)), BGl_string2968z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_arg1319z00_1214); 
FAILURE(BgL_auxz00_4689,BFALSE,BFALSE);} } 
BgL_arg1318z00_1213 = 
BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4684, BNIL); } } 
return 
MAKE_YOUNG_PAIR(BGl_symbol2706z00zz__r5_macro_4_3_syntaxz00, BgL_arg1318z00_1213);} } }  else 
{ /* R5rs/syntax.scm 285 */
return 
BGl_errorz00zz__errorz00(BGl_string2950z00zz__r5_macro_4_3_syntaxz00, BGl_string2936z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_13);} }  else 
{ /* R5rs/syntax.scm 285 */
return 
BGl_errorz00zz__errorz00(BGl_string2950z00zz__r5_macro_4_3_syntaxz00, BGl_string2936z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_13);} } } 

}



/* loop~1 */
obj_t BGl_loopze71ze7zz__r5_macro_4_3_syntaxz00(obj_t BgL_ez00_3288, obj_t BgL_bsz00_1231)
{
{ /* R5rs/syntax.scm 287 */
if(
NULLP(BgL_bsz00_1231))
{ /* R5rs/syntax.scm 288 */
return BgL_ez00_3288;}  else 
{ 
obj_t BgL_mz00_1234;obj_t BgL_lsz00_1235;obj_t BgL_rulesz00_1236;
{ /* R5rs/syntax.scm 290 */
obj_t BgL_ezd2194zd2_1239;
{ /* R5rs/syntax.scm 290 */
obj_t BgL_pairz00_2481;
if(
PAIRP(BgL_bsz00_1231))
{ /* R5rs/syntax.scm 290 */
BgL_pairz00_2481 = BgL_bsz00_1231; }  else 
{ 
obj_t BgL_auxz00_4703;
BgL_auxz00_4703 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)9504)), BGl_string2970z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_1231); 
FAILURE(BgL_auxz00_4703,BFALSE,BFALSE);} 
BgL_ezd2194zd2_1239 = 
CAR(BgL_pairz00_2481); } 
if(
PAIRP(BgL_ezd2194zd2_1239))
{ /* R5rs/syntax.scm 290 */
obj_t BgL_carzd2201zd2_1241;obj_t BgL_cdrzd2202zd2_1242;
BgL_carzd2201zd2_1241 = 
CAR(BgL_ezd2194zd2_1239); 
BgL_cdrzd2202zd2_1242 = 
CDR(BgL_ezd2194zd2_1239); 
if(
SYMBOLP(BgL_carzd2201zd2_1241))
{ /* R5rs/syntax.scm 290 */
if(
PAIRP(BgL_cdrzd2202zd2_1242))
{ /* R5rs/syntax.scm 290 */
obj_t BgL_carzd2208zd2_1245;
BgL_carzd2208zd2_1245 = 
CAR(BgL_cdrzd2202zd2_1242); 
if(
PAIRP(BgL_carzd2208zd2_1245))
{ /* R5rs/syntax.scm 290 */
obj_t BgL_cdrzd2213zd2_1247;
BgL_cdrzd2213zd2_1247 = 
CDR(BgL_carzd2208zd2_1245); 
if(
(
CAR(BgL_carzd2208zd2_1245)==BGl_symbol2932z00zz__r5_macro_4_3_syntaxz00))
{ /* R5rs/syntax.scm 290 */
if(
PAIRP(BgL_cdrzd2213zd2_1247))
{ /* R5rs/syntax.scm 290 */
if(
NULLP(
CDR(BgL_cdrzd2202zd2_1242)))
{ /* R5rs/syntax.scm 290 */
BgL_mz00_1234 = BgL_carzd2201zd2_1241; 
BgL_lsz00_1235 = 
CAR(BgL_cdrzd2213zd2_1247); 
BgL_rulesz00_1236 = 
CDR(BgL_cdrzd2213zd2_1247); 
{ /* R5rs/syntax.scm 292 */
obj_t BgL_e3z00_1257;obj_t BgL_e4z00_1258;
BGl_initzd2syntaxzd2expandersz12z12zz__r5_macro_4_3_syntaxz00(); 
{ /* R5rs/syntax.scm 310 */
obj_t BgL_auxz00_4738;obj_t BgL_auxz00_4729;
{ /* R5rs/syntax.scm 310 */
bool_t BgL_test3293z00_4739;
if(
PAIRP(BgL_rulesz00_1236))
{ /* R5rs/syntax.scm 310 */
BgL_test3293z00_4739 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 310 */
BgL_test3293z00_4739 = 
NULLP(BgL_rulesz00_1236)
; } 
if(BgL_test3293z00_4739)
{ /* R5rs/syntax.scm 310 */
BgL_auxz00_4738 = BgL_rulesz00_1236
; }  else 
{ 
obj_t BgL_auxz00_4743;
BgL_auxz00_4743 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)10328)), BGl_string2969z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_rulesz00_1236); 
FAILURE(BgL_auxz00_4743,BFALSE,BFALSE);} } 
{ /* R5rs/syntax.scm 310 */
bool_t BgL_test3291z00_4730;
if(
PAIRP(BgL_lsz00_1235))
{ /* R5rs/syntax.scm 310 */
BgL_test3291z00_4730 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 310 */
BgL_test3291z00_4730 = 
NULLP(BgL_lsz00_1235)
; } 
if(BgL_test3291z00_4730)
{ /* R5rs/syntax.scm 310 */
BgL_auxz00_4729 = BgL_lsz00_1235
; }  else 
{ 
obj_t BgL_auxz00_4734;
BgL_auxz00_4734 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)10319)), BGl_string2969z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_lsz00_1235); 
FAILURE(BgL_auxz00_4734,BFALSE,BFALSE);} } 
BgL_e3z00_1257 = 
BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(BgL_mz00_1234, BgL_auxz00_4729, BgL_auxz00_4738); } 
{ /* R5rs/syntax.scm 293 */
obj_t BgL_arg1348z00_1267;
{ /* R5rs/syntax.scm 293 */
obj_t BgL_pairz00_2478;
if(
PAIRP(BgL_bsz00_1231))
{ /* R5rs/syntax.scm 293 */
BgL_pairz00_2478 = BgL_bsz00_1231; }  else 
{ 
obj_t BgL_auxz00_4750;
BgL_auxz00_4750 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)9646)), BGl_string2969z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_1231); 
FAILURE(BgL_auxz00_4750,BFALSE,BFALSE);} 
BgL_arg1348z00_1267 = 
CDR(BgL_pairz00_2478); } 
BgL_e4z00_1258 = 
BGl_loopze71ze7zz__r5_macro_4_3_syntaxz00(BgL_ez00_3288, BgL_arg1348z00_1267); } 
{ /* R5rs/syntax.scm 294 */
obj_t BgL_zc3z04anonymousza31343ze3z87_3232;
BgL_zc3z04anonymousza31343ze3z87_3232 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31343ze3ze5zz__r5_macro_4_3_syntaxz00, 
(int)(((long)2)), 
(int)(((long)4))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31343ze3z87_3232, 
(int)(((long)0)), BgL_e4z00_1258); 
PROCEDURE_SET(BgL_zc3z04anonymousza31343ze3z87_3232, 
(int)(((long)1)), BgL_e3z00_1257); 
PROCEDURE_SET(BgL_zc3z04anonymousza31343ze3z87_3232, 
(int)(((long)2)), BgL_ez00_3288); 
PROCEDURE_SET(BgL_zc3z04anonymousza31343ze3z87_3232, 
(int)(((long)3)), BgL_mz00_1234); 
return BgL_zc3z04anonymousza31343ze3z87_3232;} } }  else 
{ /* R5rs/syntax.scm 290 */
return 
BGl_errorz00zz__errorz00(BGl_string2950z00zz__r5_macro_4_3_syntaxz00, BGl_string2951z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_1231);} }  else 
{ /* R5rs/syntax.scm 290 */
return 
BGl_errorz00zz__errorz00(BGl_string2950z00zz__r5_macro_4_3_syntaxz00, BGl_string2951z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_1231);} }  else 
{ /* R5rs/syntax.scm 290 */
return 
BGl_errorz00zz__errorz00(BGl_string2950z00zz__r5_macro_4_3_syntaxz00, BGl_string2951z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_1231);} }  else 
{ /* R5rs/syntax.scm 290 */
return 
BGl_errorz00zz__errorz00(BGl_string2950z00zz__r5_macro_4_3_syntaxz00, BGl_string2951z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_1231);} }  else 
{ /* R5rs/syntax.scm 290 */
return 
BGl_errorz00zz__errorz00(BGl_string2950z00zz__r5_macro_4_3_syntaxz00, BGl_string2951z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_1231);} }  else 
{ /* R5rs/syntax.scm 290 */
return 
BGl_errorz00zz__errorz00(BGl_string2950z00zz__r5_macro_4_3_syntaxz00, BGl_string2951z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_1231);} }  else 
{ /* R5rs/syntax.scm 290 */
return 
BGl_errorz00zz__errorz00(BGl_string2950z00zz__r5_macro_4_3_syntaxz00, BGl_string2951z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_1231);} } } } 

}



/* &expand-let-syntax */
obj_t BGl_z62expandzd2letzd2syntaxz62zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3233, obj_t BgL_xz00_3234, obj_t BgL_ez00_3235)
{
{ /* R5rs/syntax.scm 284 */
{ /* R5rs/syntax.scm 285 */
obj_t BgL_auxz00_4776;
if(
PROCEDUREP(BgL_ez00_3235))
{ /* R5rs/syntax.scm 285 */
BgL_auxz00_4776 = BgL_ez00_3235
; }  else 
{ 
obj_t BgL_auxz00_4779;
BgL_auxz00_4779 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)9383)), BGl_string2971z00zz__r5_macro_4_3_syntaxz00, BGl_string2684z00zz__r5_macro_4_3_syntaxz00, BgL_ez00_3235); 
FAILURE(BgL_auxz00_4779,BFALSE,BFALSE);} 
return 
BGl_expandzd2letzd2syntaxz00zz__r5_macro_4_3_syntaxz00(BgL_xz00_3234, BgL_auxz00_4776);} } 

}



/* &<@anonymous:1343> */
obj_t BGl_z62zc3z04anonymousza31343ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3236, obj_t BgL_xz00_3241, obj_t BgL_e2z00_3242)
{
{ /* R5rs/syntax.scm 294 */
{ /* R5rs/syntax.scm 295 */
obj_t BgL_e4z00_3237;obj_t BgL_e3z00_3238;obj_t BgL_ez00_3239;obj_t BgL_mz00_3240;
BgL_e4z00_3237 = 
PROCEDURE_REF(BgL_envz00_3236, 
(int)(((long)0))); 
BgL_e3z00_3238 = 
PROCEDURE_REF(BgL_envz00_3236, 
(int)(((long)1))); 
BgL_ez00_3239 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3236, 
(int)(((long)2)))); 
BgL_mz00_3240 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3236, 
(int)(((long)3)))); 
{ /* R5rs/syntax.scm 295 */
bool_t BgL_test3297z00_4794;
if(
PAIRP(BgL_xz00_3241))
{ /* R5rs/syntax.scm 295 */
BgL_test3297z00_4794 = 
BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00(BgL_mz00_3240, 
CAR(BgL_xz00_3241))
; }  else 
{ /* R5rs/syntax.scm 295 */
BgL_test3297z00_4794 = ((bool_t)0)
; } 
if(BgL_test3297z00_4794)
{ /* R5rs/syntax.scm 296 */
obj_t BgL_funz00_3581;
if(
PROCEDUREP(BgL_e3z00_3238))
{ /* R5rs/syntax.scm 296 */
BgL_funz00_3581 = BgL_e3z00_3238; }  else 
{ 
obj_t BgL_auxz00_4801;
BgL_auxz00_4801 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)9738)), BGl_string2972z00zz__r5_macro_4_3_syntaxz00, BGl_string2684z00zz__r5_macro_4_3_syntaxz00, BgL_e3z00_3238); 
FAILURE(BgL_auxz00_4801,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3581, ((long)2)))
{ /* R5rs/syntax.scm 296 */
return 
PROCEDURE_ENTRY(BgL_funz00_3581)(BgL_e3z00_3238, BgL_xz00_3241, BgL_ez00_3239, BEOA);}  else 
{ /* R5rs/syntax.scm 296 */
FAILURE(BGl_string2973z00zz__r5_macro_4_3_syntaxz00,BGl_list2974z00zz__r5_macro_4_3_syntaxz00,BgL_funz00_3581);} }  else 
{ /* R5rs/syntax.scm 297 */
obj_t BgL_funz00_3582;
if(
PROCEDUREP(BgL_e4z00_3237))
{ /* R5rs/syntax.scm 297 */
BgL_funz00_3582 = BgL_e4z00_3237; }  else 
{ 
obj_t BgL_auxz00_4815;
BgL_auxz00_4815 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)9757)), BGl_string2972z00zz__r5_macro_4_3_syntaxz00, BGl_string2684z00zz__r5_macro_4_3_syntaxz00, BgL_e4z00_3237); 
FAILURE(BgL_auxz00_4815,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3582, ((long)2)))
{ /* R5rs/syntax.scm 297 */
return 
PROCEDURE_ENTRY(BgL_funz00_3582)(BgL_e4z00_3237, BgL_xz00_3241, BgL_e2z00_3242, BEOA);}  else 
{ /* R5rs/syntax.scm 297 */
FAILURE(BGl_string2973z00zz__r5_macro_4_3_syntaxz00,BGl_list2960z00zz__r5_macro_4_3_syntaxz00,BgL_funz00_3582);} } } } } 

}



/* syntax-rules->expander */
BGL_EXPORTED_DEF obj_t BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(obj_t BgL_keywordz00_18, obj_t BgL_literalsz00_19, obj_t BgL_rulesz00_20)
{
{ /* R5rs/syntax.scm 315 */
{ /* R5rs/syntax.scm 316 */
obj_t BgL_kz00_1269;
BgL_kz00_1269 = 
MAKE_YOUNG_PAIR(BgL_keywordz00_18, BgL_literalsz00_19); 
if(
BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_rulesz00_20))
{ /* R5rs/syntax.scm 318 */
obj_t BgL_zc3z04anonymousza31350ze3z87_3243;
BgL_zc3z04anonymousza31350ze3z87_3243 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31350ze3ze5zz__r5_macro_4_3_syntaxz00, 
(int)(((long)2)), 
(int)(((long)3))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31350ze3z87_3243, 
(int)(((long)0)), BgL_keywordz00_18); 
PROCEDURE_SET(BgL_zc3z04anonymousza31350ze3z87_3243, 
(int)(((long)1)), BgL_kz00_1269); 
PROCEDURE_SET(BgL_zc3z04anonymousza31350ze3z87_3243, 
(int)(((long)2)), BgL_rulesz00_20); 
return BgL_zc3z04anonymousza31350ze3z87_3243;}  else 
{ /* R5rs/syntax.scm 317 */
return 
BGl_errorz00zz__errorz00(BgL_keywordz00_18, BGl_string2975z00zz__r5_macro_4_3_syntaxz00, BgL_rulesz00_20);} } } 

}



/* &syntax-rules->expander */
obj_t BGl_z62syntaxzd2ruleszd2ze3expanderz81zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3244, obj_t BgL_keywordz00_3245, obj_t BgL_literalsz00_3246, obj_t BgL_rulesz00_3247)
{
{ /* R5rs/syntax.scm 315 */
{ /* R5rs/syntax.scm 316 */
obj_t BgL_auxz00_4854;obj_t BgL_auxz00_4847;obj_t BgL_auxz00_4840;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_rulesz00_3247))
{ /* R5rs/syntax.scm 316 */
BgL_auxz00_4854 = BgL_rulesz00_3247
; }  else 
{ 
obj_t BgL_auxz00_4857;
BgL_auxz00_4857 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)10618)), BGl_string2976z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_rulesz00_3247); 
FAILURE(BgL_auxz00_4857,BFALSE,BFALSE);} 
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_literalsz00_3246))
{ /* R5rs/syntax.scm 316 */
BgL_auxz00_4847 = BgL_literalsz00_3246
; }  else 
{ 
obj_t BgL_auxz00_4850;
BgL_auxz00_4850 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)10618)), BGl_string2976z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_literalsz00_3246); 
FAILURE(BgL_auxz00_4850,BFALSE,BFALSE);} 
if(
SYMBOLP(BgL_keywordz00_3245))
{ /* R5rs/syntax.scm 316 */
BgL_auxz00_4840 = BgL_keywordz00_3245
; }  else 
{ 
obj_t BgL_auxz00_4843;
BgL_auxz00_4843 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)10618)), BGl_string2976z00zz__r5_macro_4_3_syntaxz00, BGl_string2683z00zz__r5_macro_4_3_syntaxz00, BgL_keywordz00_3245); 
FAILURE(BgL_auxz00_4843,BFALSE,BFALSE);} 
return 
BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(BgL_auxz00_4840, BgL_auxz00_4847, BgL_auxz00_4854);} } 

}



/* &<@anonymous:1350> */
obj_t BGl_z62zc3z04anonymousza31350ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3248, obj_t BgL_xz00_3252, obj_t BgL_ez00_3253)
{
{ /* R5rs/syntax.scm 318 */
{ /* R5rs/syntax.scm 320 */
obj_t BgL_keywordz00_3249;obj_t BgL_kz00_3250;obj_t BgL_rulesz00_3251;
BgL_keywordz00_3249 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3248, 
(int)(((long)0)))); 
BgL_kz00_3250 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3248, 
(int)(((long)1)))); 
BgL_rulesz00_3251 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3248, 
(int)(((long)2)))); 
{ 
obj_t BgL_rulesz00_3584;
BgL_rulesz00_3584 = BgL_rulesz00_3251; 
BgL_loopz00_3583:
if(
NULLP(BgL_rulesz00_3584))
{ /* R5rs/syntax.scm 320 */
return 
BGl_errorz00zz__errorz00(BgL_keywordz00_3249, BGl_string2977z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_3252);}  else 
{ 
obj_t BgL_patternz00_3587;obj_t BgL_templatez00_3588;
{ /* R5rs/syntax.scm 322 */
obj_t BgL_ezd2222zd2_3598;
{ /* R5rs/syntax.scm 322 */
obj_t BgL_pairz00_3599;
if(
PAIRP(BgL_rulesz00_3584))
{ /* R5rs/syntax.scm 322 */
BgL_pairz00_3599 = BgL_rulesz00_3584; }  else 
{ 
obj_t BgL_auxz00_4876;
BgL_auxz00_4876 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)10814)), BGl_string2900z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_rulesz00_3584); 
FAILURE(BgL_auxz00_4876,BFALSE,BFALSE);} 
BgL_ezd2222zd2_3598 = 
CAR(BgL_pairz00_3599); } 
if(
PAIRP(BgL_ezd2222zd2_3598))
{ /* R5rs/syntax.scm 322 */
obj_t BgL_cdrzd2228zd2_3600;
BgL_cdrzd2228zd2_3600 = 
CDR(BgL_ezd2222zd2_3598); 
if(
PAIRP(BgL_cdrzd2228zd2_3600))
{ /* R5rs/syntax.scm 322 */
if(
NULLP(
CDR(BgL_cdrzd2228zd2_3600)))
{ /* R5rs/syntax.scm 322 */
BgL_patternz00_3587 = 
CAR(BgL_ezd2222zd2_3598); 
BgL_templatez00_3588 = 
CAR(BgL_cdrzd2228zd2_3600); 
if(
CBOOL(
BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00(BgL_keywordz00_3249, BgL_patternz00_3587, BgL_xz00_3252, BgL_kz00_3250)))
{ /* R5rs/syntax.scm 326 */
obj_t BgL_fsz00_3589;
BgL_fsz00_3589 = 
BGl_syntaxzd2getzd2framesz00zz__r5_macro_4_3_syntaxz00(BgL_patternz00_3587, BgL_xz00_3252, BgL_kz00_3250); 
{ /* R5rs/syntax.scm 326 */
obj_t BgL_tz00_3590;
BgL_tz00_3590 = 
BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00(BgL_templatez00_3588, BgL_fsz00_3589, BgL_kz00_3250); 
{ /* R5rs/syntax.scm 327 */
obj_t BgL_tez00_3591;
BgL_tez00_3591 = 
BGl_syntaxzd2expanderzd2zz__r5_macro_4_3_syntaxz00(BgL_tz00_3590, BGl_syntaxzd2expanderzd2envz00zz__r5_macro_4_3_syntaxz00); 
{ /* R5rs/syntax.scm 328 */

{ /* R5rs/syntax.scm 329 */
obj_t BgL_arg1362z00_3592;
BgL_arg1362z00_3592 = 
BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(BgL_tez00_3591, BNIL); 
{ /* R5rs/syntax.scm 329 */
obj_t BgL_funz00_3593;
if(
PROCEDUREP(BgL_ez00_3253))
{ /* R5rs/syntax.scm 329 */
BgL_funz00_3593 = BgL_ez00_3253; }  else 
{ 
obj_t BgL_auxz00_4898;
BgL_auxz00_4898 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)11065)), BGl_string2978z00zz__r5_macro_4_3_syntaxz00, BGl_string2684z00zz__r5_macro_4_3_syntaxz00, BgL_ez00_3253); 
FAILURE(BgL_auxz00_4898,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3593, ((long)2)))
{ /* R5rs/syntax.scm 329 */
return 
PROCEDURE_ENTRY(BgL_funz00_3593)(BgL_ez00_3253, BgL_arg1362z00_3592, BgL_ez00_3253, BEOA);}  else 
{ /* R5rs/syntax.scm 329 */
FAILURE(BGl_string2979z00zz__r5_macro_4_3_syntaxz00,BGl_list2980z00zz__r5_macro_4_3_syntaxz00,BgL_funz00_3593);} } } } } } }  else 
{ /* R5rs/syntax.scm 330 */
obj_t BgL_arg1363z00_3594;
{ /* R5rs/syntax.scm 330 */
obj_t BgL_pairz00_3595;
if(
PAIRP(BgL_rulesz00_3584))
{ /* R5rs/syntax.scm 330 */
BgL_pairz00_3595 = BgL_rulesz00_3584; }  else 
{ 
obj_t BgL_auxz00_4912;
BgL_auxz00_4912 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)11110)), BGl_string2978z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_rulesz00_3584); 
FAILURE(BgL_auxz00_4912,BFALSE,BFALSE);} 
BgL_arg1363z00_3594 = 
CDR(BgL_pairz00_3595); } 
{ 
obj_t BgL_rulesz00_4917;
BgL_rulesz00_4917 = BgL_arg1363z00_3594; 
BgL_rulesz00_3584 = BgL_rulesz00_4917; 
goto BgL_loopz00_3583;} } }  else 
{ /* R5rs/syntax.scm 322 */
BgL_tagzd2221zd2_3586:
{ /* R5rs/syntax.scm 332 */
obj_t BgL_arg1364z00_3596;
{ /* R5rs/syntax.scm 332 */
obj_t BgL_pairz00_3597;
if(
PAIRP(BgL_rulesz00_3584))
{ /* R5rs/syntax.scm 332 */
BgL_pairz00_3597 = BgL_rulesz00_3584; }  else 
{ 
obj_t BgL_auxz00_4922;
BgL_auxz00_4922 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)11175)), BGl_string2983z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_rulesz00_3584); 
FAILURE(BgL_auxz00_4922,BFALSE,BFALSE);} 
BgL_arg1364z00_3596 = 
CAR(BgL_pairz00_3597); } 
return 
BGl_errorz00zz__errorz00(BgL_keywordz00_3249, BGl_string2984z00zz__r5_macro_4_3_syntaxz00, BgL_arg1364z00_3596);} } }  else 
{ /* R5rs/syntax.scm 322 */
goto BgL_tagzd2221zd2_3586;} }  else 
{ /* R5rs/syntax.scm 322 */
goto BgL_tagzd2221zd2_3586;} } } } } } 

}



/* syntax-matches-pattern? */
obj_t BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00(obj_t BgL_keywordz00_21, obj_t BgL_pz00_22, obj_t BgL_ez00_23, obj_t BgL_kz00_24)
{
{ /* R5rs/syntax.scm 338 */
BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00:
if(
BGl_ellipsiszf3zf3zz__r5_macro_4_3_syntaxz00(BgL_pz00_22))
{ /* R5rs/syntax.scm 341 */
bool_t BgL_test3318z00_4930;
{ /* R5rs/syntax.scm 341 */
long BgL_tmpz00_4931;
{ /* R5rs/syntax.scm 341 */
obj_t BgL_auxz00_4932;
{ /* R5rs/syntax.scm 341 */
bool_t BgL_test3319z00_4933;
if(
PAIRP(BgL_pz00_22))
{ /* R5rs/syntax.scm 341 */
BgL_test3319z00_4933 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 341 */
BgL_test3319z00_4933 = 
NULLP(BgL_pz00_22)
; } 
if(BgL_test3319z00_4933)
{ /* R5rs/syntax.scm 341 */
BgL_auxz00_4932 = BgL_pz00_22
; }  else 
{ 
obj_t BgL_auxz00_4937;
BgL_auxz00_4937 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)11568)), BGl_string2985z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_pz00_22); 
FAILURE(BgL_auxz00_4937,BFALSE,BFALSE);} } 
BgL_tmpz00_4931 = 
bgl_list_length(BgL_auxz00_4932); } 
BgL_test3318z00_4930 = 
(BgL_tmpz00_4931==((long)2)); } 
if(BgL_test3318z00_4930)
{ /* R5rs/syntax.scm 341 */
if(
BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_ez00_23))
{ /* R5rs/syntax.scm 344 */
obj_t BgL_p0z00_1303;
{ /* R5rs/syntax.scm 344 */
obj_t BgL_pairz00_2523;
if(
PAIRP(BgL_pz00_22))
{ /* R5rs/syntax.scm 344 */
BgL_pairz00_2523 = BgL_pz00_22; }  else 
{ 
obj_t BgL_auxz00_4947;
BgL_auxz00_4947 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)11652)), BGl_string2985z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_pz00_22); 
FAILURE(BgL_auxz00_4947,BFALSE,BFALSE);} 
BgL_p0z00_1303 = 
CAR(BgL_pairz00_2523); } 
{ 
obj_t BgL_l1101z00_1305;
BgL_l1101z00_1305 = BgL_ez00_23; 
BgL_zc3z04anonymousza31369ze3z87_1306:
if(
NULLP(BgL_l1101z00_1305))
{ /* R5rs/syntax.scm 345 */
return BTRUE;}  else 
{ /* R5rs/syntax.scm 345 */
if(
PAIRP(BgL_l1101z00_1305))
{ /* R5rs/syntax.scm 346 */
obj_t BgL_nvz00_1309;
BgL_nvz00_1309 = 
BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00(BgL_keywordz00_21, BgL_p0z00_1303, 
CAR(BgL_l1101z00_1305), BgL_kz00_24); 
if(
CBOOL(BgL_nvz00_1309))
{ 
obj_t BgL_l1101z00_4960;
BgL_l1101z00_4960 = 
CDR(BgL_l1101z00_1305); 
BgL_l1101z00_1305 = BgL_l1101z00_4960; 
goto BgL_zc3z04anonymousza31369ze3z87_1306;}  else 
{ /* R5rs/syntax.scm 345 */
return BFALSE;} }  else 
{ /* R5rs/syntax.scm 345 */
return 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string2986z00zz__r5_macro_4_3_syntaxz00, BGl_string2944z00zz__r5_macro_4_3_syntaxz00, BgL_l1101z00_1305, BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)11662)));} } } }  else 
{ /* R5rs/syntax.scm 343 */
return BFALSE;} }  else 
{ /* R5rs/syntax.scm 341 */
return 
BGl_errorz00zz__errorz00(BgL_keywordz00_21, BGl_string2987z00zz__r5_macro_4_3_syntaxz00, BgL_pz00_22);} }  else 
{ /* R5rs/syntax.scm 340 */
if(
PAIRP(BgL_pz00_22))
{ /* R5rs/syntax.scm 348 */
if(
PAIRP(BgL_ez00_23))
{ /* R5rs/syntax.scm 350 */
obj_t BgL__andtest_1043z00_1317;
BgL__andtest_1043z00_1317 = 
BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00(BgL_keywordz00_21, 
CAR(BgL_pz00_22), 
CAR(BgL_ez00_23), BgL_kz00_24); 
if(
CBOOL(BgL__andtest_1043z00_1317))
{ 
obj_t BgL_ez00_4976;obj_t BgL_pz00_4974;
BgL_pz00_4974 = 
CDR(BgL_pz00_22); 
BgL_ez00_4976 = 
CDR(BgL_ez00_23); 
BgL_ez00_23 = BgL_ez00_4976; 
BgL_pz00_22 = BgL_pz00_4974; 
goto BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00;}  else 
{ /* R5rs/syntax.scm 350 */
return BFALSE;} }  else 
{ /* R5rs/syntax.scm 349 */
return BFALSE;} }  else 
{ /* R5rs/syntax.scm 348 */
if(
SYMBOLP(BgL_pz00_22))
{ /* R5rs/syntax.scm 353 */
bool_t BgL_test3330z00_4980;
{ /* R5rs/syntax.scm 353 */
obj_t BgL_tmpz00_4981;
{ /* R5rs/syntax.scm 353 */
obj_t BgL_auxz00_4982;
{ /* R5rs/syntax.scm 353 */
bool_t BgL_test3331z00_4983;
if(
PAIRP(BgL_kz00_24))
{ /* R5rs/syntax.scm 353 */
BgL_test3331z00_4983 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 353 */
BgL_test3331z00_4983 = 
NULLP(BgL_kz00_24)
; } 
if(BgL_test3331z00_4983)
{ /* R5rs/syntax.scm 353 */
BgL_auxz00_4982 = BgL_kz00_24
; }  else 
{ 
obj_t BgL_auxz00_4987;
BgL_auxz00_4987 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)11939)), BGl_string2985z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_kz00_24); 
FAILURE(BgL_auxz00_4987,BFALSE,BFALSE);} } 
BgL_tmpz00_4981 = 
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_pz00_22, BgL_auxz00_4982); } 
BgL_test3330z00_4980 = 
CBOOL(BgL_tmpz00_4981); } 
if(BgL_test3330z00_4980)
{ /* R5rs/syntax.scm 353 */
return 
BBOOL(
BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00(BgL_ez00_23, BgL_pz00_22));}  else 
{ /* R5rs/syntax.scm 353 */
return BTRUE;} }  else 
{ /* R5rs/syntax.scm 352 */
return 
BBOOL(
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_pz00_22, BgL_ez00_23));} } } } 

}



/* syntax-get-frames */
obj_t BGl_syntaxzd2getzd2framesz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_pz00_25, obj_t BgL_ez00_26, obj_t BgL_kz00_27)
{
{ /* R5rs/syntax.scm 360 */
if(
BGl_ellipsiszf3zf3zz__r5_macro_4_3_syntaxz00(BgL_pz00_25))
{ /* R5rs/syntax.scm 363 */
obj_t BgL_p0z00_1325;
{ /* R5rs/syntax.scm 363 */
obj_t BgL_pairz00_2535;
if(
PAIRP(BgL_pz00_25))
{ /* R5rs/syntax.scm 363 */
BgL_pairz00_2535 = BgL_pz00_25; }  else 
{ 
obj_t BgL_auxz00_5001;
BgL_auxz00_5001 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)12309)), BGl_string2988z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_pz00_25); 
FAILURE(BgL_auxz00_5001,BFALSE,BFALSE);} 
BgL_p0z00_1325 = 
CAR(BgL_pairz00_2535); } 
{ /* R5rs/syntax.scm 365 */
obj_t BgL_arg1382z00_1326;
{ /* R5rs/syntax.scm 365 */
obj_t BgL_arg1384z00_1328;
if(
NULLP(BgL_ez00_26))
{ /* R5rs/syntax.scm 365 */
BgL_arg1384z00_1328 = BNIL; }  else 
{ /* R5rs/syntax.scm 365 */
obj_t BgL_head1106z00_1331;
{ /* R5rs/syntax.scm 365 */
obj_t BgL_res2254z00_2537;
BgL_res2254z00_2537 = 
MAKE_YOUNG_PAIR(BNIL, BNIL); 
BgL_head1106z00_1331 = BgL_res2254z00_2537; } 
{ 
obj_t BgL_l1104z00_1333;obj_t BgL_tail1107z00_1334;
BgL_l1104z00_1333 = BgL_ez00_26; 
BgL_tail1107z00_1334 = BgL_head1106z00_1331; 
BgL_zc3z04anonymousza31386ze3z87_1335:
if(
PAIRP(BgL_l1104z00_1333))
{ /* R5rs/syntax.scm 365 */
obj_t BgL_newtail1108z00_1337;
{ /* R5rs/syntax.scm 365 */
obj_t BgL_arg1389z00_1339;
BgL_arg1389z00_1339 = 
BGl_syntaxzd2getzd2framesz00zz__r5_macro_4_3_syntaxz00(BgL_p0z00_1325, 
CAR(BgL_l1104z00_1333), BgL_kz00_27); 
{ /* R5rs/syntax.scm 365 */
obj_t BgL_res2256z00_2540;
BgL_res2256z00_2540 = 
MAKE_YOUNG_PAIR(BgL_arg1389z00_1339, BNIL); 
BgL_newtail1108z00_1337 = BgL_res2256z00_2540; } } 
SET_CDR(BgL_tail1107z00_1334, BgL_newtail1108z00_1337); 
{ 
obj_t BgL_tail1107z00_5017;obj_t BgL_l1104z00_5015;
BgL_l1104z00_5015 = 
CDR(BgL_l1104z00_1333); 
BgL_tail1107z00_5017 = BgL_newtail1108z00_1337; 
BgL_tail1107z00_1334 = BgL_tail1107z00_5017; 
BgL_l1104z00_1333 = BgL_l1104z00_5015; 
goto BgL_zc3z04anonymousza31386ze3z87_1335;} }  else 
{ /* R5rs/syntax.scm 365 */
if(
NULLP(BgL_l1104z00_1333))
{ /* R5rs/syntax.scm 365 */
BgL_arg1384z00_1328 = 
CDR(BgL_head1106z00_1331); }  else 
{ /* R5rs/syntax.scm 365 */
BgL_arg1384z00_1328 = 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string2943z00zz__r5_macro_4_3_syntaxz00, BGl_string2944z00zz__r5_macro_4_3_syntaxz00, BgL_l1104z00_1333, BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)12344))); } } } } 
BgL_arg1382z00_1326 = 
MAKE_YOUNG_PAIR(BGl_keyword2989z00zz__r5_macro_4_3_syntaxz00, BgL_arg1384z00_1328); } 
{ /* R5rs/syntax.scm 364 */
obj_t BgL_list1383z00_1327;
BgL_list1383z00_1327 = 
MAKE_YOUNG_PAIR(BgL_arg1382z00_1326, BNIL); 
return BgL_list1383z00_1327;} } }  else 
{ /* R5rs/syntax.scm 362 */
if(
PAIRP(BgL_pz00_25))
{ /* R5rs/syntax.scm 369 */
obj_t BgL_arg1392z00_1344;obj_t BgL_arg1393z00_1345;
{ /* R5rs/syntax.scm 369 */
obj_t BgL_arg1394z00_1346;obj_t BgL_arg1395z00_1347;
BgL_arg1394z00_1346 = 
CAR(BgL_pz00_25); 
{ /* R5rs/syntax.scm 369 */
obj_t BgL_pairz00_2548;
if(
PAIRP(BgL_ez00_26))
{ /* R5rs/syntax.scm 369 */
BgL_pairz00_2548 = BgL_ez00_26; }  else 
{ 
obj_t BgL_auxz00_5030;
BgL_auxz00_5030 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)12471)), BGl_string2988z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_ez00_26); 
FAILURE(BgL_auxz00_5030,BFALSE,BFALSE);} 
BgL_arg1395z00_1347 = 
CAR(BgL_pairz00_2548); } 
BgL_arg1392z00_1344 = 
BGl_syntaxzd2getzd2framesz00zz__r5_macro_4_3_syntaxz00(BgL_arg1394z00_1346, BgL_arg1395z00_1347, BgL_kz00_27); } 
{ /* R5rs/syntax.scm 370 */
obj_t BgL_arg1396z00_1348;obj_t BgL_arg1397z00_1349;
BgL_arg1396z00_1348 = 
CDR(BgL_pz00_25); 
{ /* R5rs/syntax.scm 370 */
obj_t BgL_pairz00_2550;
if(
PAIRP(BgL_ez00_26))
{ /* R5rs/syntax.scm 370 */
BgL_pairz00_2550 = BgL_ez00_26; }  else 
{ 
obj_t BgL_auxz00_5039;
BgL_auxz00_5039 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)12517)), BGl_string2988z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_ez00_26); 
FAILURE(BgL_auxz00_5039,BFALSE,BFALSE);} 
BgL_arg1397z00_1349 = 
CDR(BgL_pairz00_2550); } 
BgL_arg1393z00_1345 = 
BGl_syntaxzd2getzd2framesz00zz__r5_macro_4_3_syntaxz00(BgL_arg1396z00_1348, BgL_arg1397z00_1349, BgL_kz00_27); } 
{ /* R5rs/syntax.scm 369 */
obj_t BgL_auxz00_5045;
{ /* R5rs/syntax.scm 369 */
bool_t BgL_test3341z00_5046;
if(
PAIRP(BgL_arg1392z00_1344))
{ /* R5rs/syntax.scm 369 */
BgL_test3341z00_5046 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 369 */
BgL_test3341z00_5046 = 
NULLP(BgL_arg1392z00_1344)
; } 
if(BgL_test3341z00_5046)
{ /* R5rs/syntax.scm 369 */
BgL_auxz00_5045 = BgL_arg1392z00_1344
; }  else 
{ 
obj_t BgL_auxz00_5050;
BgL_auxz00_5050 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)12431)), BGl_string2988z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_arg1392z00_1344); 
FAILURE(BgL_auxz00_5050,BFALSE,BFALSE);} } 
return 
BGl_appendzd221011zd2zz__r5_macro_4_3_syntaxz00(BgL_auxz00_5045, BgL_arg1393z00_1345);} }  else 
{ /* R5rs/syntax.scm 368 */
if(
SYMBOLP(BgL_pz00_25))
{ /* R5rs/syntax.scm 372 */
bool_t BgL_test3344z00_5057;
{ /* R5rs/syntax.scm 372 */
obj_t BgL_tmpz00_5058;
{ /* R5rs/syntax.scm 372 */
obj_t BgL_auxz00_5059;
{ /* R5rs/syntax.scm 372 */
bool_t BgL_test3345z00_5060;
if(
PAIRP(BgL_kz00_27))
{ /* R5rs/syntax.scm 372 */
BgL_test3345z00_5060 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 372 */
BgL_test3345z00_5060 = 
NULLP(BgL_kz00_27)
; } 
if(BgL_test3345z00_5060)
{ /* R5rs/syntax.scm 372 */
BgL_auxz00_5059 = BgL_kz00_27
; }  else 
{ 
obj_t BgL_auxz00_5064;
BgL_auxz00_5064 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)12563)), BGl_string2988z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_kz00_27); 
FAILURE(BgL_auxz00_5064,BFALSE,BFALSE);} } 
BgL_tmpz00_5058 = 
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_pz00_25, BgL_auxz00_5059); } 
BgL_test3344z00_5057 = 
CBOOL(BgL_tmpz00_5058); } 
if(BgL_test3344z00_5057)
{ /* R5rs/syntax.scm 372 */
return BNIL;}  else 
{ /* R5rs/syntax.scm 372 */
obj_t BgL_arg1400z00_1352;
BgL_arg1400z00_1352 = 
MAKE_YOUNG_PAIR(BgL_pz00_25, 
BGl_unhygieniza7eza7zz__r5_macro_4_3_syntaxz00(BgL_ez00_26)); 
{ /* R5rs/syntax.scm 372 */
obj_t BgL_list1401z00_1353;
BgL_list1401z00_1353 = 
MAKE_YOUNG_PAIR(BgL_arg1400z00_1352, BNIL); 
return BgL_list1401z00_1353;} } }  else 
{ /* R5rs/syntax.scm 371 */
return BNIL;} } } } 

}



/* syntax-expand-pattern */
obj_t BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_pz00_28, obj_t BgL_envz00_29, obj_t BgL_kz00_30)
{
{ /* R5rs/syntax.scm 379 */
{ 
obj_t BgL_p0z00_1370;obj_t BgL_envz00_1371;obj_t BgL_kz00_1372;
if(
BGl_ellipsiszf3zf3zz__r5_macro_4_3_syntaxz00(BgL_pz00_28))
{ /* R5rs/syntax.scm 392 */
obj_t BgL_arg1404z00_1357;obj_t BgL_arg1405z00_1358;
{ /* R5rs/syntax.scm 392 */
obj_t BgL_arg1406z00_1359;
{ /* R5rs/syntax.scm 392 */
obj_t BgL_pairz00_2562;
if(
PAIRP(BgL_pz00_28))
{ /* R5rs/syntax.scm 392 */
BgL_pairz00_2562 = BgL_pz00_28; }  else 
{ 
obj_t BgL_auxz00_5077;
BgL_auxz00_5077 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)13244)), BGl_string2992z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_pz00_28); 
FAILURE(BgL_auxz00_5077,BFALSE,BFALSE);} 
BgL_arg1406z00_1359 = 
CAR(BgL_pairz00_2562); } 
BgL_p0z00_1370 = BgL_arg1406z00_1359; 
BgL_envz00_1371 = BgL_envz00_29; 
BgL_kz00_1372 = BgL_kz00_30; 
{ /* R5rs/syntax.scm 382 */
obj_t BgL_varsz00_1374;
BgL_varsz00_1374 = 
BGl_subze70ze7zz__r5_macro_4_3_syntaxz00(BgL_kz00_1372, BgL_p0z00_1370); 
{ /* R5rs/syntax.scm 382 */
obj_t BgL_framesz00_1375;
BgL_framesz00_1375 = 
BGl_getzd2ellipsiszd2framesz00zz__r5_macro_4_3_syntaxz00(BgL_varsz00_1374, BgL_envz00_1371); 
{ /* R5rs/syntax.scm 383 */

if(
BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_framesz00_1375))
{ /* R5rs/syntax.scm 384 */
if(
NULLP(BgL_framesz00_1375))
{ /* R5rs/syntax.scm 386 */
BgL_arg1404z00_1357 = BNIL; }  else 
{ /* R5rs/syntax.scm 386 */
obj_t BgL_head1111z00_1379;
{ /* R5rs/syntax.scm 386 */
obj_t BgL_res2263z00_2554;
BgL_res2263z00_2554 = 
MAKE_YOUNG_PAIR(BNIL, BNIL); 
BgL_head1111z00_1379 = BgL_res2263z00_2554; } 
{ 
obj_t BgL_l1109z00_1381;obj_t BgL_tail1112z00_1382;
BgL_l1109z00_1381 = BgL_framesz00_1375; 
BgL_tail1112z00_1382 = BgL_head1111z00_1379; 
BgL_zc3z04anonymousza31419ze3z87_1383:
if(
PAIRP(BgL_l1109z00_1381))
{ /* R5rs/syntax.scm 386 */
obj_t BgL_newtail1113z00_1385;
{ /* R5rs/syntax.scm 386 */
obj_t BgL_arg1422z00_1387;
{ /* R5rs/syntax.scm 386 */
obj_t BgL_fz00_1388;
BgL_fz00_1388 = 
CAR(BgL_l1109z00_1381); 
{ /* R5rs/syntax.scm 387 */
obj_t BgL_arg1424z00_1389;
{ /* R5rs/syntax.scm 387 */
obj_t BgL_auxz00_5092;
{ /* R5rs/syntax.scm 387 */
bool_t BgL_test3352z00_5093;
if(
PAIRP(BgL_fz00_1388))
{ /* R5rs/syntax.scm 387 */
BgL_test3352z00_5093 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 387 */
BgL_test3352z00_5093 = 
NULLP(BgL_fz00_1388)
; } 
if(BgL_test3352z00_5093)
{ /* R5rs/syntax.scm 387 */
BgL_auxz00_5092 = BgL_fz00_1388
; }  else 
{ 
obj_t BgL_auxz00_5097;
BgL_auxz00_5097 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)13132)), BGl_string2991z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_fz00_1388); 
FAILURE(BgL_auxz00_5097,BFALSE,BFALSE);} } 
BgL_arg1424z00_1389 = 
BGl_appendzd221011zd2zz__r5_macro_4_3_syntaxz00(BgL_auxz00_5092, BgL_envz00_1371); } 
BgL_arg1422z00_1387 = 
BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00(BgL_p0z00_1370, BgL_arg1424z00_1389, BgL_kz00_1372); } } 
{ /* R5rs/syntax.scm 386 */
obj_t BgL_res2265z00_2557;
BgL_res2265z00_2557 = 
MAKE_YOUNG_PAIR(BgL_arg1422z00_1387, BNIL); 
BgL_newtail1113z00_1385 = BgL_res2265z00_2557; } } 
SET_CDR(BgL_tail1112z00_1382, BgL_newtail1113z00_1385); 
{ 
obj_t BgL_tail1112z00_5107;obj_t BgL_l1109z00_5105;
BgL_l1109z00_5105 = 
CDR(BgL_l1109z00_1381); 
BgL_tail1112z00_5107 = BgL_newtail1113z00_1385; 
BgL_tail1112z00_1382 = BgL_tail1112z00_5107; 
BgL_l1109z00_1381 = BgL_l1109z00_5105; 
goto BgL_zc3z04anonymousza31419ze3z87_1383;} }  else 
{ /* R5rs/syntax.scm 386 */
if(
NULLP(BgL_l1109z00_1381))
{ /* R5rs/syntax.scm 386 */
BgL_arg1404z00_1357 = 
CDR(BgL_head1111z00_1379); }  else 
{ /* R5rs/syntax.scm 386 */
BgL_arg1404z00_1357 = 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string2943z00zz__r5_macro_4_3_syntaxz00, BGl_string2944z00zz__r5_macro_4_3_syntaxz00, BgL_l1109z00_1381, BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)13082))); } } } } }  else 
{ /* R5rs/syntax.scm 384 */
BgL_arg1404z00_1357 = BNIL; } } } } } 
{ /* R5rs/syntax.scm 393 */
obj_t BgL_arg1407z00_1360;
{ /* R5rs/syntax.scm 393 */
obj_t BgL_pairz00_2563;
if(
PAIRP(BgL_pz00_28))
{ /* R5rs/syntax.scm 393 */
BgL_pairz00_2563 = BgL_pz00_28; }  else 
{ 
obj_t BgL_auxz00_5115;
BgL_auxz00_5115 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)13291)), BGl_string2992z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_pz00_28); 
FAILURE(BgL_auxz00_5115,BFALSE,BFALSE);} 
{ /* R5rs/syntax.scm 393 */
obj_t BgL_pairz00_2566;
{ /* R5rs/syntax.scm 393 */
obj_t BgL_aux2559z00_3427;
BgL_aux2559z00_3427 = 
CDR(BgL_pairz00_2563); 
if(
PAIRP(BgL_aux2559z00_3427))
{ /* R5rs/syntax.scm 393 */
BgL_pairz00_2566 = BgL_aux2559z00_3427; }  else 
{ 
obj_t BgL_auxz00_5122;
BgL_auxz00_5122 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)13285)), BGl_string2992z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_aux2559z00_3427); 
FAILURE(BgL_auxz00_5122,BFALSE,BFALSE);} } 
BgL_arg1407z00_1360 = 
CDR(BgL_pairz00_2566); } } 
BgL_arg1405z00_1358 = 
BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00(BgL_arg1407z00_1360, BgL_envz00_29, BgL_kz00_30); } 
{ /* R5rs/syntax.scm 392 */
obj_t BgL_auxz00_5128;
{ /* R5rs/syntax.scm 392 */
bool_t BgL_test3357z00_5129;
if(
PAIRP(BgL_arg1404z00_1357))
{ /* R5rs/syntax.scm 392 */
BgL_test3357z00_5129 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 392 */
BgL_test3357z00_5129 = 
NULLP(BgL_arg1404z00_1357)
; } 
if(BgL_test3357z00_5129)
{ /* R5rs/syntax.scm 392 */
BgL_auxz00_5128 = BgL_arg1404z00_1357
; }  else 
{ 
obj_t BgL_auxz00_5133;
BgL_auxz00_5133 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)13207)), BGl_string2992z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_arg1404z00_1357); 
FAILURE(BgL_auxz00_5133,BFALSE,BFALSE);} } 
return 
BGl_appendzd221011zd2zz__r5_macro_4_3_syntaxz00(BgL_auxz00_5128, BgL_arg1405z00_1358);} }  else 
{ /* R5rs/syntax.scm 391 */
if(
PAIRP(BgL_pz00_28))
{ /* R5rs/syntax.scm 394 */
return 
MAKE_YOUNG_PAIR(
BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00(
CAR(BgL_pz00_28), BgL_envz00_29, BgL_kz00_30), 
BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00(
CDR(BgL_pz00_28), BgL_envz00_29, BgL_kz00_30));}  else 
{ /* R5rs/syntax.scm 394 */
if(
SYMBOLP(BgL_pz00_28))
{ /* R5rs/syntax.scm 398 */
bool_t BgL_test3361z00_5147;
{ /* R5rs/syntax.scm 398 */
obj_t BgL_tmpz00_5148;
{ /* R5rs/syntax.scm 398 */
obj_t BgL_auxz00_5149;
{ /* R5rs/syntax.scm 398 */
bool_t BgL_test3362z00_5150;
if(
PAIRP(BgL_kz00_30))
{ /* R5rs/syntax.scm 398 */
BgL_test3362z00_5150 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 398 */
BgL_test3362z00_5150 = 
NULLP(BgL_kz00_30)
; } 
if(BgL_test3362z00_5150)
{ /* R5rs/syntax.scm 398 */
BgL_auxz00_5149 = BgL_kz00_30
; }  else 
{ 
obj_t BgL_auxz00_5154;
BgL_auxz00_5154 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)13455)), BGl_string2992z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_kz00_30); 
FAILURE(BgL_auxz00_5154,BFALSE,BFALSE);} } 
BgL_tmpz00_5148 = 
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_pz00_28, BgL_auxz00_5149); } 
BgL_test3361z00_5147 = 
CBOOL(BgL_tmpz00_5148); } 
if(BgL_test3361z00_5147)
{ /* R5rs/syntax.scm 398 */
return BgL_pz00_28;}  else 
{ /* R5rs/syntax.scm 400 */
obj_t BgL_xz00_1368;
{ /* R5rs/syntax.scm 400 */
obj_t BgL_auxz00_5160;
{ /* R5rs/syntax.scm 400 */
bool_t BgL_test3364z00_5161;
if(
PAIRP(BgL_envz00_29))
{ /* R5rs/syntax.scm 400 */
BgL_test3364z00_5161 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 400 */
BgL_test3364z00_5161 = 
NULLP(BgL_envz00_29)
; } 
if(BgL_test3364z00_5161)
{ /* R5rs/syntax.scm 400 */
BgL_auxz00_5160 = BgL_envz00_29
; }  else 
{ 
obj_t BgL_auxz00_5165;
BgL_auxz00_5165 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)13485)), BGl_string2992z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_envz00_29); 
FAILURE(BgL_auxz00_5165,BFALSE,BFALSE);} } 
BgL_xz00_1368 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_pz00_28, BgL_auxz00_5160); } 
if(
PAIRP(BgL_xz00_1368))
{ /* R5rs/syntax.scm 401 */
return 
CDR(BgL_xz00_1368);}  else 
{ /* R5rs/syntax.scm 401 */
return BgL_pz00_28;} } }  else 
{ /* R5rs/syntax.scm 397 */
return BgL_pz00_28;} } } } } 

}



/* get-ellipsis-frames */
obj_t BGl_getzd2ellipsiszd2framesz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_varsz00_31, obj_t BgL_framesz00_32)
{
{ /* R5rs/syntax.scm 410 */
{ 
obj_t BgL_varsz00_1395;obj_t BgL_resz00_1396;
BgL_varsz00_1395 = BgL_varsz00_31; 
BgL_resz00_1396 = BNIL; 
BgL_zc3z04anonymousza31426ze3z87_1397:
if(
NULLP(BgL_varsz00_1395))
{ /* R5rs/syntax.scm 413 */
return BgL_resz00_1396;}  else 
{ /* R5rs/syntax.scm 415 */
obj_t BgL_vz00_1399;
{ /* R5rs/syntax.scm 415 */
obj_t BgL_pairz00_2574;
if(
PAIRP(BgL_varsz00_1395))
{ /* R5rs/syntax.scm 415 */
BgL_pairz00_2574 = BgL_varsz00_1395; }  else 
{ 
obj_t BgL_auxz00_5177;
BgL_auxz00_5177 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)13915)), BGl_string2900z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_varsz00_1395); 
FAILURE(BgL_auxz00_5177,BFALSE,BFALSE);} 
BgL_vz00_1399 = 
CAR(BgL_pairz00_2574); } 
{ /* R5rs/syntax.scm 416 */
obj_t BgL_fz00_1400;
{ 
obj_t BgL_l1120z00_1442;
BgL_l1120z00_1442 = BgL_framesz00_32; 
BgL_zc3z04anonymousza31452ze3z87_1443:
if(
NULLP(BgL_l1120z00_1442))
{ /* R5rs/syntax.scm 416 */
BgL_fz00_1400 = BFALSE; }  else 
{ /* R5rs/syntax.scm 416 */
if(
PAIRP(BgL_l1120z00_1442))
{ /* R5rs/syntax.scm 417 */
obj_t BgL__ortest_1122z00_1446;
{ /* R5rs/syntax.scm 417 */
obj_t BgL_fz00_1448;
BgL_fz00_1448 = 
CAR(BgL_l1120z00_1442); 
{ /* R5rs/syntax.scm 417 */
bool_t BgL_test3371z00_5187;
{ /* R5rs/syntax.scm 417 */
obj_t BgL_tmpz00_5188;
{ /* R5rs/syntax.scm 417 */
obj_t BgL_pairz00_2578;
if(
PAIRP(BgL_fz00_1448))
{ /* R5rs/syntax.scm 417 */
BgL_pairz00_2578 = BgL_fz00_1448; }  else 
{ 
obj_t BgL_auxz00_5191;
BgL_auxz00_5191 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)13980)), BGl_string2993z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_fz00_1448); 
FAILURE(BgL_auxz00_5191,BFALSE,BFALSE);} 
BgL_tmpz00_5188 = 
CAR(BgL_pairz00_2578); } 
BgL_test3371z00_5187 = 
(BgL_tmpz00_5188==BGl_keyword2989z00zz__r5_macro_4_3_syntaxz00); } 
if(BgL_test3371z00_5187)
{ /* R5rs/syntax.scm 418 */
obj_t BgL_ez00_1451;
{ /* R5rs/syntax.scm 418 */
obj_t BgL_hook1118z00_1453;
BgL_hook1118z00_1453 = 
MAKE_YOUNG_PAIR(BFALSE, BNIL); 
{ /* R5rs/syntax.scm 418 */
obj_t BgL_g1119z00_1454;
{ /* R5rs/syntax.scm 418 */
obj_t BgL_pairz00_2579;
if(
PAIRP(BgL_fz00_1448))
{ /* R5rs/syntax.scm 418 */
BgL_pairz00_2579 = BgL_fz00_1448; }  else 
{ 
obj_t BgL_auxz00_5200;
BgL_auxz00_5200 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14045)), BGl_string2993z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_fz00_1448); 
FAILURE(BgL_auxz00_5200,BFALSE,BFALSE);} 
BgL_g1119z00_1454 = 
CDR(BgL_pairz00_2579); } 
{ 
obj_t BgL_l1115z00_1456;obj_t BgL_h1116z00_1457;
BgL_l1115z00_1456 = BgL_g1119z00_1454; 
BgL_h1116z00_1457 = BgL_hook1118z00_1453; 
BgL_zc3z04anonymousza31459ze3z87_1458:
if(
NULLP(BgL_l1115z00_1456))
{ /* R5rs/syntax.scm 418 */
BgL_ez00_1451 = 
CDR(BgL_hook1118z00_1453); }  else 
{ /* R5rs/syntax.scm 418 */
bool_t BgL_test3375z00_5208;
{ /* R5rs/syntax.scm 418 */
obj_t BgL_tmpz00_5209;
{ /* R5rs/syntax.scm 418 */
obj_t BgL_auxz00_5210;
{ /* R5rs/syntax.scm 418 */
obj_t BgL_pairz00_2582;
if(
PAIRP(BgL_l1115z00_1456))
{ /* R5rs/syntax.scm 418 */
BgL_pairz00_2582 = BgL_l1115z00_1456; }  else 
{ 
obj_t BgL_auxz00_5213;
BgL_auxz00_5213 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14028)), BGl_string2994z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_l1115z00_1456); 
FAILURE(BgL_auxz00_5213,BFALSE,BFALSE);} 
{ /* R5rs/syntax.scm 418 */
obj_t BgL_aux2575z00_3443;
BgL_aux2575z00_3443 = 
CAR(BgL_pairz00_2582); 
{ /* R5rs/syntax.scm 418 */
bool_t BgL_test3377z00_5218;
if(
PAIRP(BgL_aux2575z00_3443))
{ /* R5rs/syntax.scm 418 */
BgL_test3377z00_5218 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 418 */
BgL_test3377z00_5218 = 
NULLP(BgL_aux2575z00_3443)
; } 
if(BgL_test3377z00_5218)
{ /* R5rs/syntax.scm 418 */
BgL_auxz00_5210 = BgL_aux2575z00_3443
; }  else 
{ 
obj_t BgL_auxz00_5222;
BgL_auxz00_5222 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14028)), BGl_string2994z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_aux2575z00_3443); 
FAILURE(BgL_auxz00_5222,BFALSE,BFALSE);} } } } 
BgL_tmpz00_5209 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_vz00_1399, BgL_auxz00_5210); } 
BgL_test3375z00_5208 = 
CBOOL(BgL_tmpz00_5209); } 
if(BgL_test3375z00_5208)
{ /* R5rs/syntax.scm 418 */
obj_t BgL_nh1117z00_1462;
{ /* R5rs/syntax.scm 418 */
obj_t BgL_arg1463z00_1464;
{ /* R5rs/syntax.scm 418 */
obj_t BgL_pairz00_2583;
if(
PAIRP(BgL_l1115z00_1456))
{ /* R5rs/syntax.scm 418 */
BgL_pairz00_2583 = BgL_l1115z00_1456; }  else 
{ 
obj_t BgL_auxz00_5230;
BgL_auxz00_5230 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14040)), BGl_string2994z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_l1115z00_1456); 
FAILURE(BgL_auxz00_5230,BFALSE,BFALSE);} 
BgL_arg1463z00_1464 = 
CAR(BgL_pairz00_2583); } 
{ /* R5rs/syntax.scm 418 */
obj_t BgL_res2274z00_2584;
BgL_res2274z00_2584 = 
MAKE_YOUNG_PAIR(BgL_arg1463z00_1464, BNIL); 
BgL_nh1117z00_1462 = BgL_res2274z00_2584; } } 
SET_CDR(BgL_h1116z00_1457, BgL_nh1117z00_1462); 
{ /* R5rs/syntax.scm 418 */
obj_t BgL_arg1462z00_1463;
{ /* R5rs/syntax.scm 418 */
obj_t BgL_pairz00_2586;
if(
PAIRP(BgL_l1115z00_1456))
{ /* R5rs/syntax.scm 418 */
BgL_pairz00_2586 = BgL_l1115z00_1456; }  else 
{ 
obj_t BgL_auxz00_5239;
BgL_auxz00_5239 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14040)), BGl_string2994z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_l1115z00_1456); 
FAILURE(BgL_auxz00_5239,BFALSE,BFALSE);} 
BgL_arg1462z00_1463 = 
CDR(BgL_pairz00_2586); } 
{ 
obj_t BgL_h1116z00_5245;obj_t BgL_l1115z00_5244;
BgL_l1115z00_5244 = BgL_arg1462z00_1463; 
BgL_h1116z00_5245 = BgL_nh1117z00_1462; 
BgL_h1116z00_1457 = BgL_h1116z00_5245; 
BgL_l1115z00_1456 = BgL_l1115z00_5244; 
goto BgL_zc3z04anonymousza31459ze3z87_1458;} } }  else 
{ /* R5rs/syntax.scm 418 */
obj_t BgL_arg1464z00_1465;
{ /* R5rs/syntax.scm 418 */
obj_t BgL_pairz00_2587;
if(
PAIRP(BgL_l1115z00_1456))
{ /* R5rs/syntax.scm 418 */
BgL_pairz00_2587 = BgL_l1115z00_1456; }  else 
{ 
obj_t BgL_auxz00_5248;
BgL_auxz00_5248 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14040)), BGl_string2994z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_l1115z00_1456); 
FAILURE(BgL_auxz00_5248,BFALSE,BFALSE);} 
BgL_arg1464z00_1465 = 
CDR(BgL_pairz00_2587); } 
{ 
obj_t BgL_l1115z00_5253;
BgL_l1115z00_5253 = BgL_arg1464z00_1465; 
BgL_l1115z00_1456 = BgL_l1115z00_5253; 
goto BgL_zc3z04anonymousza31459ze3z87_1458;} } } } } } 
if(
PAIRP(BgL_ez00_1451))
{ /* R5rs/syntax.scm 419 */
BgL__ortest_1122z00_1446 = BgL_ez00_1451; }  else 
{ /* R5rs/syntax.scm 419 */
BgL__ortest_1122z00_1446 = BFALSE; } }  else 
{ /* R5rs/syntax.scm 417 */
BgL__ortest_1122z00_1446 = BFALSE; } } } 
if(
CBOOL(BgL__ortest_1122z00_1446))
{ /* R5rs/syntax.scm 416 */
BgL_fz00_1400 = BgL__ortest_1122z00_1446; }  else 
{ 
obj_t BgL_l1120z00_5258;
BgL_l1120z00_5258 = 
CDR(BgL_l1120z00_1442); 
BgL_l1120z00_1442 = BgL_l1120z00_5258; 
goto BgL_zc3z04anonymousza31452ze3z87_1443;} }  else 
{ /* R5rs/syntax.scm 416 */
BgL_fz00_1400 = 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string2995z00zz__r5_macro_4_3_syntaxz00, BGl_string2944z00zz__r5_macro_4_3_syntaxz00, BgL_l1120z00_1442, BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)13938))); } } } 
if(
CBOOL(BgL_fz00_1400))
{ /* R5rs/syntax.scm 422 */
obj_t BgL_g1045z00_1401;
{ /* R5rs/syntax.scm 422 */
obj_t BgL_pairz00_2590;
if(
PAIRP(BgL_varsz00_1395))
{ /* R5rs/syntax.scm 422 */
BgL_pairz00_2590 = BgL_varsz00_1395; }  else 
{ 
obj_t BgL_auxz00_5266;
BgL_auxz00_5266 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14134)), BGl_string2900z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_varsz00_1395); 
FAILURE(BgL_auxz00_5266,BFALSE,BFALSE);} 
BgL_g1045z00_1401 = 
CDR(BgL_pairz00_2590); } 
{ 
obj_t BgL_ovarsz00_1404;obj_t BgL_nvarsz00_1405;
BgL_ovarsz00_1404 = BgL_g1045z00_1401; 
BgL_nvarsz00_1405 = BNIL; 
BgL_zc3z04anonymousza31428ze3z87_1406:
if(
NULLP(BgL_ovarsz00_1404))
{ /* R5rs/syntax.scm 425 */
if(
NULLP(BgL_resz00_1396))
{ 
obj_t BgL_resz00_5276;obj_t BgL_varsz00_5275;
BgL_varsz00_5275 = BgL_nvarsz00_1405; 
BgL_resz00_5276 = BgL_fz00_1400; 
BgL_resz00_1396 = BgL_resz00_5276; 
BgL_varsz00_1395 = BgL_varsz00_5275; 
goto BgL_zc3z04anonymousza31426ze3z87_1397;}  else 
{ /* R5rs/syntax.scm 428 */
obj_t BgL_arg1431z00_1409;
{ /* R5rs/syntax.scm 428 */
obj_t BgL_list1432z00_1410;
{ /* R5rs/syntax.scm 428 */
obj_t BgL_arg1433z00_1411;
BgL_arg1433z00_1411 = 
MAKE_YOUNG_PAIR(BgL_resz00_1396, BNIL); 
BgL_list1432z00_1410 = 
MAKE_YOUNG_PAIR(BgL_fz00_1400, BgL_arg1433z00_1411); } 
BgL_arg1431z00_1409 = 
BGl_mapz00zz__r4_control_features_6_9z00(BGl_appendzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_list1432z00_1410); } 
{ 
obj_t BgL_resz00_5281;obj_t BgL_varsz00_5280;
BgL_varsz00_5280 = BgL_nvarsz00_1405; 
BgL_resz00_5281 = BgL_arg1431z00_1409; 
BgL_resz00_1396 = BgL_resz00_5281; 
BgL_varsz00_1395 = BgL_varsz00_5280; 
goto BgL_zc3z04anonymousza31426ze3z87_1397;} } }  else 
{ /* R5rs/syntax.scm 429 */
bool_t BgL_test3388z00_5282;
{ 
obj_t BgL_l1123z00_1429;
{ /* R5rs/syntax.scm 429 */
obj_t BgL_tmpz00_5283;
BgL_l1123z00_1429 = BgL_fz00_1400; 
BgL_zc3z04anonymousza31445ze3z87_1430:
if(
NULLP(BgL_l1123z00_1429))
{ /* R5rs/syntax.scm 429 */
BgL_tmpz00_5283 = BFALSE
; }  else 
{ /* R5rs/syntax.scm 429 */
if(
PAIRP(BgL_l1123z00_1429))
{ /* R5rs/syntax.scm 429 */
bool_t BgL__ortest_1125z00_1433;
{ /* R5rs/syntax.scm 429 */
obj_t BgL_tmpz00_5288;
{ /* R5rs/syntax.scm 429 */
obj_t BgL_auxz00_5297;obj_t BgL_auxz00_5289;
{ /* R5rs/syntax.scm 429 */
obj_t BgL_aux2587z00_3455;
BgL_aux2587z00_3455 = 
CAR(BgL_l1123z00_1429); 
{ /* R5rs/syntax.scm 429 */
bool_t BgL_test3392z00_5299;
if(
PAIRP(BgL_aux2587z00_3455))
{ /* R5rs/syntax.scm 429 */
BgL_test3392z00_5299 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 429 */
BgL_test3392z00_5299 = 
NULLP(BgL_aux2587z00_3455)
; } 
if(BgL_test3392z00_5299)
{ /* R5rs/syntax.scm 429 */
BgL_auxz00_5297 = BgL_aux2587z00_3455
; }  else 
{ 
obj_t BgL_auxz00_5303;
BgL_auxz00_5303 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14313)), BGl_string2996z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_aux2587z00_3455); 
FAILURE(BgL_auxz00_5303,BFALSE,BFALSE);} } } 
{ /* R5rs/syntax.scm 429 */
obj_t BgL_pairz00_2596;
if(
PAIRP(BgL_ovarsz00_1404))
{ /* R5rs/syntax.scm 429 */
BgL_pairz00_2596 = BgL_ovarsz00_1404; }  else 
{ 
obj_t BgL_auxz00_5292;
BgL_auxz00_5292 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14331)), BGl_string2996z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_ovarsz00_1404); 
FAILURE(BgL_auxz00_5292,BFALSE,BFALSE);} 
BgL_auxz00_5289 = 
CAR(BgL_pairz00_2596); } 
BgL_tmpz00_5288 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_5289, BgL_auxz00_5297); } 
BgL__ortest_1125z00_1433 = 
PAIRP(BgL_tmpz00_5288); } 
if(BgL__ortest_1125z00_1433)
{ /* R5rs/syntax.scm 429 */
BgL_tmpz00_5283 = 
BBOOL(BgL__ortest_1125z00_1433)
; }  else 
{ 
obj_t BgL_l1123z00_5311;
BgL_l1123z00_5311 = 
CDR(BgL_l1123z00_1429); 
BgL_l1123z00_1429 = BgL_l1123z00_5311; 
goto BgL_zc3z04anonymousza31445ze3z87_1430;} }  else 
{ /* R5rs/syntax.scm 429 */
BgL_tmpz00_5283 = 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string2995z00zz__r5_macro_4_3_syntaxz00, BGl_string2944z00zz__r5_macro_4_3_syntaxz00, BgL_l1123z00_1429, BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14296)))
; } } 
BgL_test3388z00_5282 = 
CBOOL(BgL_tmpz00_5283); } } 
if(BgL_test3388z00_5282)
{ /* R5rs/syntax.scm 430 */
obj_t BgL_arg1441z00_1424;
{ /* R5rs/syntax.scm 430 */
obj_t BgL_pairz00_2599;
if(
PAIRP(BgL_ovarsz00_1404))
{ /* R5rs/syntax.scm 430 */
BgL_pairz00_2599 = BgL_ovarsz00_1404; }  else 
{ 
obj_t BgL_auxz00_5318;
BgL_auxz00_5318 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14363)), BGl_string2997z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_ovarsz00_1404); 
FAILURE(BgL_auxz00_5318,BFALSE,BFALSE);} 
BgL_arg1441z00_1424 = 
CDR(BgL_pairz00_2599); } 
{ 
obj_t BgL_ovarsz00_5323;
BgL_ovarsz00_5323 = BgL_arg1441z00_1424; 
BgL_ovarsz00_1404 = BgL_ovarsz00_5323; 
goto BgL_zc3z04anonymousza31428ze3z87_1406;} }  else 
{ /* R5rs/syntax.scm 432 */
obj_t BgL_arg1442z00_1425;obj_t BgL_arg1443z00_1426;
{ /* R5rs/syntax.scm 432 */
obj_t BgL_pairz00_2600;
if(
PAIRP(BgL_ovarsz00_1404))
{ /* R5rs/syntax.scm 432 */
BgL_pairz00_2600 = BgL_ovarsz00_1404; }  else 
{ 
obj_t BgL_auxz00_5326;
BgL_auxz00_5326 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14406)), BGl_string2997z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_ovarsz00_1404); 
FAILURE(BgL_auxz00_5326,BFALSE,BFALSE);} 
BgL_arg1442z00_1425 = 
CDR(BgL_pairz00_2600); } 
{ /* R5rs/syntax.scm 432 */
obj_t BgL_arg1444z00_1427;
{ /* R5rs/syntax.scm 432 */
obj_t BgL_pairz00_2601;
if(
PAIRP(BgL_ovarsz00_1404))
{ /* R5rs/syntax.scm 432 */
BgL_pairz00_2601 = BgL_ovarsz00_1404; }  else 
{ 
obj_t BgL_auxz00_5333;
BgL_auxz00_5333 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14424)), BGl_string2997z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_ovarsz00_1404); 
FAILURE(BgL_auxz00_5333,BFALSE,BFALSE);} 
BgL_arg1444z00_1427 = 
CAR(BgL_pairz00_2601); } 
BgL_arg1443z00_1426 = 
MAKE_YOUNG_PAIR(BgL_arg1444z00_1427, BgL_nvarsz00_1405); } 
{ 
obj_t BgL_nvarsz00_5340;obj_t BgL_ovarsz00_5339;
BgL_ovarsz00_5339 = BgL_arg1442z00_1425; 
BgL_nvarsz00_5340 = BgL_arg1443z00_1426; 
BgL_nvarsz00_1405 = BgL_nvarsz00_5340; 
BgL_ovarsz00_1404 = BgL_ovarsz00_5339; 
goto BgL_zc3z04anonymousza31428ze3z87_1406;} } } } }  else 
{ /* R5rs/syntax.scm 433 */
obj_t BgL_arg1451z00_1440;
{ /* R5rs/syntax.scm 433 */
obj_t BgL_pairz00_2602;
if(
PAIRP(BgL_varsz00_1395))
{ /* R5rs/syntax.scm 433 */
BgL_pairz00_2602 = BgL_varsz00_1395; }  else 
{ 
obj_t BgL_auxz00_5343;
BgL_auxz00_5343 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14459)), BGl_string2900z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_varsz00_1395); 
FAILURE(BgL_auxz00_5343,BFALSE,BFALSE);} 
BgL_arg1451z00_1440 = 
CDR(BgL_pairz00_2602); } 
{ 
obj_t BgL_varsz00_5348;
BgL_varsz00_5348 = BgL_arg1451z00_1440; 
BgL_varsz00_1395 = BgL_varsz00_5348; 
goto BgL_zc3z04anonymousza31426ze3z87_1397;} } } } } } 

}



/* sub~0 */
obj_t BGl_subze70ze7zz__r5_macro_4_3_syntaxz00(obj_t BgL_kz00_3287, obj_t BgL_pz00_1472)
{
{ /* R5rs/syntax.scm 439 */
if(
BGl_ellipsiszf3zf3zz__r5_macro_4_3_syntaxz00(BgL_pz00_1472))
{ /* R5rs/syntax.scm 442 */
obj_t BgL_arg1468z00_1475;obj_t BgL_arg1469z00_1476;
{ /* R5rs/syntax.scm 442 */
obj_t BgL_arg1470z00_1477;
{ /* R5rs/syntax.scm 442 */
obj_t BgL_pairz00_2603;
if(
PAIRP(BgL_pz00_1472))
{ /* R5rs/syntax.scm 442 */
BgL_pairz00_2603 = BgL_pz00_1472; }  else 
{ 
obj_t BgL_auxz00_5353;
BgL_auxz00_5353 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14807)), BGl_string2998z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_pz00_1472); 
FAILURE(BgL_auxz00_5353,BFALSE,BFALSE);} 
BgL_arg1470z00_1477 = 
CAR(BgL_pairz00_2603); } 
BgL_arg1468z00_1475 = 
BGl_subze70ze7zz__r5_macro_4_3_syntaxz00(BgL_kz00_3287, BgL_arg1470z00_1477); } 
{ /* R5rs/syntax.scm 442 */
obj_t BgL_arg1471z00_1478;
{ /* R5rs/syntax.scm 442 */
obj_t BgL_pairz00_2604;
if(
PAIRP(BgL_pz00_1472))
{ /* R5rs/syntax.scm 442 */
BgL_pairz00_2604 = BgL_pz00_1472; }  else 
{ 
obj_t BgL_auxz00_5361;
BgL_auxz00_5361 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14822)), BGl_string2998z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_pz00_1472); 
FAILURE(BgL_auxz00_5361,BFALSE,BFALSE);} 
{ /* R5rs/syntax.scm 442 */
obj_t BgL_pairz00_2607;
{ /* R5rs/syntax.scm 442 */
obj_t BgL_aux2601z00_3469;
BgL_aux2601z00_3469 = 
CDR(BgL_pairz00_2604); 
if(
PAIRP(BgL_aux2601z00_3469))
{ /* R5rs/syntax.scm 442 */
BgL_pairz00_2607 = BgL_aux2601z00_3469; }  else 
{ 
obj_t BgL_auxz00_5368;
BgL_auxz00_5368 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14816)), BGl_string2998z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_aux2601z00_3469); 
FAILURE(BgL_auxz00_5368,BFALSE,BFALSE);} } 
BgL_arg1471z00_1478 = 
CDR(BgL_pairz00_2607); } } 
BgL_arg1469z00_1476 = 
BGl_subze70ze7zz__r5_macro_4_3_syntaxz00(BgL_kz00_3287, BgL_arg1471z00_1478); } 
return 
MAKE_YOUNG_PAIR(BgL_arg1468z00_1475, BgL_arg1469z00_1476);}  else 
{ /* R5rs/syntax.scm 441 */
if(
PAIRP(BgL_pz00_1472))
{ /* R5rs/syntax.scm 444 */
obj_t BgL_arg1473z00_1480;obj_t BgL_arg1474z00_1481;
BgL_arg1473z00_1480 = 
BGl_subze70ze7zz__r5_macro_4_3_syntaxz00(BgL_kz00_3287, 
CAR(BgL_pz00_1472)); 
BgL_arg1474z00_1481 = 
BGl_subze70ze7zz__r5_macro_4_3_syntaxz00(BgL_kz00_3287, 
CDR(BgL_pz00_1472)); 
{ /* R5rs/syntax.scm 444 */
obj_t BgL_auxz00_5381;
{ /* R5rs/syntax.scm 444 */
bool_t BgL_test3404z00_5382;
if(
PAIRP(BgL_arg1473z00_1480))
{ /* R5rs/syntax.scm 444 */
BgL_test3404z00_5382 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 444 */
BgL_test3404z00_5382 = 
NULLP(BgL_arg1473z00_1480)
; } 
if(BgL_test3404z00_5382)
{ /* R5rs/syntax.scm 444 */
BgL_auxz00_5381 = BgL_arg1473z00_1480
; }  else 
{ 
obj_t BgL_auxz00_5386;
BgL_auxz00_5386 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14844)), BGl_string2998z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_arg1473z00_1480); 
FAILURE(BgL_auxz00_5386,BFALSE,BFALSE);} } 
return 
BGl_appendzd221011zd2zz__r5_macro_4_3_syntaxz00(BgL_auxz00_5381, BgL_arg1474z00_1481);} }  else 
{ /* R5rs/syntax.scm 443 */
if(
SYMBOLP(BgL_pz00_1472))
{ /* R5rs/syntax.scm 446 */
bool_t BgL_test3407z00_5393;
{ /* R5rs/syntax.scm 446 */
obj_t BgL_tmpz00_5394;
{ /* R5rs/syntax.scm 446 */
obj_t BgL_auxz00_5395;
{ /* R5rs/syntax.scm 446 */
bool_t BgL_test3408z00_5396;
if(
PAIRP(BgL_kz00_3287))
{ /* R5rs/syntax.scm 446 */
BgL_test3408z00_5396 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 446 */
BgL_test3408z00_5396 = 
NULLP(BgL_kz00_3287)
; } 
if(BgL_test3408z00_5396)
{ /* R5rs/syntax.scm 446 */
BgL_auxz00_5395 = BgL_kz00_3287
; }  else 
{ 
obj_t BgL_auxz00_5400;
BgL_auxz00_5400 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14912)), BGl_string2998z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_kz00_3287); 
FAILURE(BgL_auxz00_5400,BFALSE,BFALSE);} } 
BgL_tmpz00_5394 = 
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_pz00_1472, BgL_auxz00_5395); } 
BgL_test3407z00_5393 = 
CBOOL(BgL_tmpz00_5394); } 
if(BgL_test3407z00_5393)
{ /* R5rs/syntax.scm 446 */
return BNIL;}  else 
{ /* R5rs/syntax.scm 446 */
obj_t BgL_list1479z00_1486;
BgL_list1479z00_1486 = 
MAKE_YOUNG_PAIR(BgL_pz00_1472, BNIL); 
return BgL_list1479z00_1486;} }  else 
{ /* R5rs/syntax.scm 445 */
return BNIL;} } } } 

}



/* ellipsis? */
bool_t BGl_ellipsiszf3zf3zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_35)
{
{ /* R5rs/syntax.scm 453 */
if(
PAIRP(BgL_xz00_35))
{ /* R5rs/syntax.scm 455 */
bool_t BgL_test3411z00_5409;
{ /* R5rs/syntax.scm 455 */
obj_t BgL_tmpz00_5410;
BgL_tmpz00_5410 = 
CDR(BgL_xz00_35); 
BgL_test3411z00_5409 = 
PAIRP(BgL_tmpz00_5410); } 
if(BgL_test3411z00_5409)
{ /* R5rs/syntax.scm 456 */
obj_t BgL_tmpz00_5413;
{ /* R5rs/syntax.scm 456 */
obj_t BgL_pairz00_2619;
{ /* R5rs/syntax.scm 456 */
obj_t BgL_aux2607z00_3475;
BgL_aux2607z00_3475 = 
CDR(BgL_xz00_35); 
if(
PAIRP(BgL_aux2607z00_3475))
{ /* R5rs/syntax.scm 456 */
BgL_pairz00_2619 = BgL_aux2607z00_3475; }  else 
{ 
obj_t BgL_auxz00_5417;
BgL_auxz00_5417 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)15235)), BGl_string2999z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_aux2607z00_3475); 
FAILURE(BgL_auxz00_5417,BFALSE,BFALSE);} } 
BgL_tmpz00_5413 = 
CAR(BgL_pairz00_2619); } 
return 
(BgL_tmpz00_5413==BGl_symbol2703z00zz__r5_macro_4_3_syntaxz00);}  else 
{ /* R5rs/syntax.scm 455 */
return ((bool_t)0);} }  else 
{ /* R5rs/syntax.scm 454 */
return ((bool_t)0);} } 

}



/* hygiene-value */
obj_t BGl_hygienezd2valuezd2zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_38)
{
{ /* R5rs/syntax.scm 474 */
if(
SYMBOLP(BgL_xz00_38))
{ /* R5rs/syntax.scm 477 */
obj_t BgL_sz00_1497;
{ /* R5rs/syntax.scm 477 */
obj_t BgL_res2291z00_2638;
{ /* R5rs/syntax.scm 477 */
obj_t BgL_arg2007z00_2637;
BgL_arg2007z00_2637 = 
SYMBOL_TO_STRING(BgL_xz00_38); 
BgL_res2291z00_2638 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2007z00_2637); } 
BgL_sz00_1497 = BgL_res2291z00_2638; } 
if(
bigloo_strcmp_at(BgL_sz00_1497, BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00, ((long)0)))
{ /* R5rs/syntax.scm 480 */
obj_t BgL_arg1489z00_1499;
{ /* R5rs/syntax.scm 480 */
long BgL_arg1491z00_1500;
BgL_arg1491z00_1500 = 
STRING_LENGTH(BgL_sz00_1497); 
BgL_arg1489z00_1499 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_sz00_1497, BGl_hygienezd2prefixzd2lenz00zz__r5_macro_4_3_syntaxz00, BgL_arg1491z00_1500); } 
return 
bstring_to_symbol(BgL_arg1489z00_1499);}  else 
{ /* R5rs/syntax.scm 478 */
return BgL_xz00_38;} }  else 
{ /* R5rs/syntax.scm 475 */
return BgL_xz00_38;} } 

}



/* hygiene-eq? */
bool_t BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_39, obj_t BgL_idz00_40)
{
{ /* R5rs/syntax.scm 486 */
BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00:
{ /* R5rs/syntax.scm 487 */
bool_t BgL_test3415z00_5432;
if(
SYMBOLP(BgL_idz00_40))
{ /* R5rs/syntax.scm 487 */
BgL_test3415z00_5432 = 
SYMBOLP(BgL_xz00_39)
; }  else 
{ /* R5rs/syntax.scm 487 */
BgL_test3415z00_5432 = ((bool_t)0)
; } 
if(BgL_test3415z00_5432)
{ /* R5rs/syntax.scm 488 */
bool_t BgL__ortest_1049z00_1503;
BgL__ortest_1049z00_1503 = 
(BgL_xz00_39==BgL_idz00_40); 
if(BgL__ortest_1049z00_1503)
{ /* R5rs/syntax.scm 488 */
return BgL__ortest_1049z00_1503;}  else 
{ /* R5rs/syntax.scm 489 */
bool_t BgL_test3418z00_5438;
{ /* R5rs/syntax.scm 468 */
obj_t BgL_sz00_2645;
{ /* R5rs/syntax.scm 468 */
obj_t BgL_res2296z00_2648;
{ /* R5rs/syntax.scm 468 */
obj_t BgL_arg2007z00_2647;
BgL_arg2007z00_2647 = 
SYMBOL_TO_STRING(BgL_xz00_39); 
BgL_res2296z00_2648 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2007z00_2647); } 
BgL_sz00_2645 = BgL_res2296z00_2648; } 
BgL_test3418z00_5438 = 
bigloo_strcmp_at(BgL_sz00_2645, BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00, ((long)0)); } 
if(BgL_test3418z00_5438)
{ 
obj_t BgL_xz00_5442;
BgL_xz00_5442 = 
BGl_hygienezd2valuezd2zz__r5_macro_4_3_syntaxz00(BgL_xz00_39); 
BgL_xz00_39 = BgL_xz00_5442; 
goto BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00;}  else 
{ /* R5rs/syntax.scm 489 */
return ((bool_t)0);} } }  else 
{ /* R5rs/syntax.scm 487 */
return ((bool_t)0);} } } 

}



/* unhygienize */
obj_t BGl_unhygieniza7eza7zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_41)
{
{ /* R5rs/syntax.scm 494 */
if(
SYMBOLP(BgL_xz00_41))
{ /* R5rs/syntax.scm 462 */
obj_t BgL_arg1484z00_2650;
{ /* R5rs/syntax.scm 462 */
obj_t BgL_arg1485z00_2651;obj_t BgL_arg1486z00_2652;
{ /* R5rs/syntax.scm 462 */
obj_t BgL_res2298z00_2655;
{ /* R5rs/syntax.scm 462 */
obj_t BgL_symbolz00_2653;
BgL_symbolz00_2653 = BGl_hygienezd2markzd2zz__r5_macro_4_3_syntaxz00; 
{ /* R5rs/syntax.scm 462 */
obj_t BgL_arg2007z00_2654;
BgL_arg2007z00_2654 = 
SYMBOL_TO_STRING(BgL_symbolz00_2653); 
BgL_res2298z00_2655 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2007z00_2654); } } 
BgL_arg1485z00_2651 = BgL_res2298z00_2655; } 
{ /* R5rs/syntax.scm 462 */
obj_t BgL_res2299z00_2658;
{ /* R5rs/syntax.scm 462 */
obj_t BgL_arg2007z00_2657;
BgL_arg2007z00_2657 = 
SYMBOL_TO_STRING(BgL_xz00_41); 
BgL_res2299z00_2658 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2007z00_2657); } 
BgL_arg1486z00_2652 = BgL_res2299z00_2658; } 
BgL_arg1484z00_2650 = 
string_append(BgL_arg1485z00_2651, BgL_arg1486z00_2652); } 
return 
bstring_to_symbol(BgL_arg1484z00_2650);}  else 
{ /* R5rs/syntax.scm 496 */
if(
PAIRP(BgL_xz00_41))
{ /* R5rs/syntax.scm 498 */
return 
MAKE_YOUNG_PAIR(
BGl_unhygieniza7eza7zz__r5_macro_4_3_syntaxz00(
CAR(BgL_xz00_41)), 
BGl_unhygieniza7eza7zz__r5_macro_4_3_syntaxz00(
CDR(BgL_xz00_41)));}  else 
{ /* R5rs/syntax.scm 498 */
return BgL_xz00_41;} } } 

}



/* hygienize */
obj_t BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_42, obj_t BgL_envz00_43)
{
{ /* R5rs/syntax.scm 506 */
{ 
obj_t BgL_varz00_1533;obj_t BgL_bodyz00_1534;obj_t BgL_bindingsz00_1530;obj_t BgL_bodyz00_1531;obj_t BgL_bindingsz00_1527;obj_t BgL_bodyz00_1528;obj_t BgL_bindingsz00_1520;obj_t BgL_bodyz00_1521;obj_t BgL_varsz00_1517;obj_t BgL_bodyz00_1518;obj_t BgL_varz00_1513;
if(
SYMBOLP(BgL_xz00_42))
{ /* R5rs/syntax.scm 507 */
BgL_varz00_1513 = BgL_xz00_42; 
{ /* R5rs/syntax.scm 509 */
bool_t BgL_test3422z00_5461;
{ /* R5rs/syntax.scm 468 */
obj_t BgL_sz00_2664;
{ /* R5rs/syntax.scm 468 */
obj_t BgL_res2302z00_2667;
{ /* R5rs/syntax.scm 468 */
obj_t BgL_symbolz00_2665;
if(
SYMBOLP(BgL_xz00_42))
{ /* R5rs/syntax.scm 468 */
BgL_symbolz00_2665 = BgL_xz00_42; }  else 
{ 
obj_t BgL_auxz00_5464;
BgL_auxz00_5464 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)15816)), BGl_string3000z00zz__r5_macro_4_3_syntaxz00, BGl_string2683z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_42); 
FAILURE(BgL_auxz00_5464,BFALSE,BFALSE);} 
{ /* R5rs/syntax.scm 468 */
obj_t BgL_arg2007z00_2666;
BgL_arg2007z00_2666 = 
SYMBOL_TO_STRING(BgL_symbolz00_2665); 
BgL_res2302z00_2667 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2007z00_2666); } } 
BgL_sz00_2664 = BgL_res2302z00_2667; } 
BgL_test3422z00_5461 = 
bigloo_strcmp_at(BgL_sz00_2664, BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00, ((long)0)); } 
if(BgL_test3422z00_5461)
{ /* R5rs/syntax.scm 509 */
return 
BGl_hygienezd2valuezd2zz__r5_macro_4_3_syntaxz00(BgL_xz00_42);}  else 
{ /* R5rs/syntax.scm 511 */
obj_t BgL_oz00_1760;
{ /* R5rs/syntax.scm 511 */
obj_t BgL_auxz00_5472;
{ /* R5rs/syntax.scm 511 */
bool_t BgL_test3424z00_5473;
if(
PAIRP(BgL_envz00_43))
{ /* R5rs/syntax.scm 511 */
BgL_test3424z00_5473 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 511 */
BgL_test3424z00_5473 = 
NULLP(BgL_envz00_43)
; } 
if(BgL_test3424z00_5473)
{ /* R5rs/syntax.scm 511 */
BgL_auxz00_5472 = BgL_envz00_43
; }  else 
{ 
obj_t BgL_auxz00_5477;
BgL_auxz00_5477 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)17477)), BGl_string3000z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_envz00_43); 
FAILURE(BgL_auxz00_5477,BFALSE,BFALSE);} } 
BgL_oz00_1760 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_varz00_1513, BgL_auxz00_5472); } 
if(
PAIRP(BgL_oz00_1760))
{ /* R5rs/syntax.scm 512 */
return 
CDR(BgL_oz00_1760);}  else 
{ /* R5rs/syntax.scm 512 */
return BgL_varz00_1513;} } } }  else 
{ /* R5rs/syntax.scm 507 */
if(
PAIRP(BgL_xz00_42))
{ /* R5rs/syntax.scm 507 */
if(
(
CAR(BgL_xz00_42)==BGl_symbol2686z00zz__r5_macro_4_3_syntaxz00))
{ /* R5rs/syntax.scm 507 */
obj_t BgL_arg1507z00_1543;
BgL_arg1507z00_1543 = 
CDR(BgL_xz00_42); 
{ /* R5rs/syntax.scm 516 */
obj_t BgL_arg1736z00_2757;
BgL_arg1736z00_2757 = 
BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00(BgL_envz00_43, BgL_arg1507z00_1543); 
return 
MAKE_YOUNG_PAIR(BGl_symbol2686z00zz__r5_macro_4_3_syntaxz00, BgL_arg1736z00_2757);} }  else 
{ /* R5rs/syntax.scm 507 */
obj_t BgL_cdrzd2271zd2_1544;
BgL_cdrzd2271zd2_1544 = 
CDR(BgL_xz00_42); 
if(
(
CAR(BgL_xz00_42)==BGl_symbol2801z00zz__r5_macro_4_3_syntaxz00))
{ /* R5rs/syntax.scm 507 */
if(
PAIRP(BgL_cdrzd2271zd2_1544))
{ /* R5rs/syntax.scm 507 */
BgL_varsz00_1517 = 
CAR(BgL_cdrzd2271zd2_1544); 
BgL_bodyz00_1518 = 
CDR(BgL_cdrzd2271zd2_1544); 
{ /* R5rs/syntax.scm 518 */
obj_t BgL_nvarsz00_1763;
BgL_nvarsz00_1763 = 
BGl_genvarsz00zz__r5_macro_4_3_syntaxz00(BgL_varsz00_1517); 
{ /* R5rs/syntax.scm 518 */
obj_t BgL_nenvz00_1764;
{ /* R5rs/syntax.scm 519 */
obj_t BgL_arg1740z00_1768;
{ /* R5rs/syntax.scm 519 */
obj_t BgL_arg1741z00_1769;obj_t BgL_arg1742z00_1770;
BgL_arg1741z00_1769 = 
BGl_flattenz00zz__r5_macro_4_3_syntaxz00(BgL_varsz00_1517); 
BgL_arg1742z00_1770 = 
BGl_flattenz00zz__r5_macro_4_3_syntaxz00(BgL_nvarsz00_1763); 
{ /* R5rs/syntax.scm 519 */
obj_t BgL_list1743z00_1771;
{ /* R5rs/syntax.scm 519 */
obj_t BgL_arg1744z00_1772;
BgL_arg1744z00_1772 = 
MAKE_YOUNG_PAIR(BgL_arg1742z00_1770, BNIL); 
BgL_list1743z00_1771 = 
MAKE_YOUNG_PAIR(BgL_arg1741z00_1769, BgL_arg1744z00_1772); } 
BgL_arg1740z00_1768 = 
BGl_mapz00zz__r4_control_features_6_9z00(BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_list1743z00_1771); } } 
BgL_nenvz00_1764 = 
BGl_appendzd221011zd2zz__r5_macro_4_3_syntaxz00(BgL_arg1740z00_1768, BgL_envz00_43); } 
{ /* R5rs/syntax.scm 519 */

{ /* R5rs/syntax.scm 521 */
obj_t BgL_arg1737z00_1765;
{ /* R5rs/syntax.scm 521 */
obj_t BgL_arg1738z00_1766;
{ /* R5rs/syntax.scm 521 */
obj_t BgL_arg1739z00_1767;
BgL_arg1739z00_1767 = 
BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00(BgL_nenvz00_1764, BgL_bodyz00_1518); 
{ /* R5rs/syntax.scm 520 */
obj_t BgL_auxz00_5507;
{ /* R5rs/syntax.scm 520 */
bool_t BgL_test3431z00_5508;
if(
PAIRP(BgL_arg1739z00_1767))
{ /* R5rs/syntax.scm 520 */
BgL_test3431z00_5508 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 520 */
BgL_test3431z00_5508 = 
NULLP(BgL_arg1739z00_1767)
; } 
if(BgL_test3431z00_5508)
{ /* R5rs/syntax.scm 520 */
BgL_auxz00_5507 = BgL_arg1739z00_1767
; }  else 
{ 
obj_t BgL_auxz00_5512;
BgL_auxz00_5512 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)17745)), BGl_string3001z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_arg1739z00_1767); 
FAILURE(BgL_auxz00_5512,BFALSE,BFALSE);} } 
BgL_arg1738z00_1766 = 
BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_5507, BNIL); } } 
BgL_arg1737z00_1765 = 
MAKE_YOUNG_PAIR(BgL_nvarsz00_1763, BgL_arg1738z00_1766); } 
return 
MAKE_YOUNG_PAIR(BGl_symbol2801z00zz__r5_macro_4_3_syntaxz00, BgL_arg1737z00_1765);} } } } }  else 
{ /* R5rs/syntax.scm 507 */
return 
BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00(BgL_envz00_43, BgL_xz00_42);} }  else 
{ /* R5rs/syntax.scm 507 */
if(
(
CAR(BgL_xz00_42)==BGl_symbol2716z00zz__r5_macro_4_3_syntaxz00))
{ /* R5rs/syntax.scm 507 */
if(
PAIRP(BgL_cdrzd2271zd2_1544))
{ /* R5rs/syntax.scm 507 */
BgL_bindingsz00_1520 = 
CAR(BgL_cdrzd2271zd2_1544); 
BgL_bodyz00_1521 = 
CDR(BgL_cdrzd2271zd2_1544); 
{ /* R5rs/syntax.scm 523 */
obj_t BgL_nvarsz00_1773;
{ /* R5rs/syntax.scm 523 */
obj_t BgL_arg1764z00_1799;
if(
NULLP(BgL_bindingsz00_1520))
{ /* R5rs/syntax.scm 523 */
BgL_arg1764z00_1799 = BNIL; }  else 
{ /* R5rs/syntax.scm 523 */
obj_t BgL_head1128z00_1802;
{ /* R5rs/syntax.scm 523 */
obj_t BgL_arg1772z00_1815;
{ /* R5rs/syntax.scm 523 */
obj_t BgL_pairz00_2673;
{ /* R5rs/syntax.scm 523 */
obj_t BgL_pairz00_2672;
if(
PAIRP(BgL_bindingsz00_1520))
{ /* R5rs/syntax.scm 523 */
BgL_pairz00_2672 = BgL_bindingsz00_1520; }  else 
{ 
obj_t BgL_auxz00_5531;
BgL_auxz00_5531 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)17856)), BGl_string3002z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_bindingsz00_1520); 
FAILURE(BgL_auxz00_5531,BFALSE,BFALSE);} 
{ /* R5rs/syntax.scm 523 */
obj_t BgL_aux2617z00_3485;
BgL_aux2617z00_3485 = 
CAR(BgL_pairz00_2672); 
if(
PAIRP(BgL_aux2617z00_3485))
{ /* R5rs/syntax.scm 523 */
BgL_pairz00_2673 = BgL_aux2617z00_3485; }  else 
{ 
obj_t BgL_auxz00_5538;
BgL_auxz00_5538 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)17856)), BGl_string3002z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_aux2617z00_3485); 
FAILURE(BgL_auxz00_5538,BFALSE,BFALSE);} } } 
BgL_arg1772z00_1815 = 
CAR(BgL_pairz00_2673); } 
{ /* R5rs/syntax.scm 523 */
obj_t BgL_res2305z00_2674;
BgL_res2305z00_2674 = 
MAKE_YOUNG_PAIR(BgL_arg1772z00_1815, BNIL); 
BgL_head1128z00_1802 = BgL_res2305z00_2674; } } 
{ /* R5rs/syntax.scm 523 */
obj_t BgL_g1131z00_1803;
{ /* R5rs/syntax.scm 523 */
obj_t BgL_pairz00_2675;
if(
PAIRP(BgL_bindingsz00_1520))
{ /* R5rs/syntax.scm 523 */
BgL_pairz00_2675 = BgL_bindingsz00_1520; }  else 
{ 
obj_t BgL_auxz00_5546;
BgL_auxz00_5546 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)17856)), BGl_string3002z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_bindingsz00_1520); 
FAILURE(BgL_auxz00_5546,BFALSE,BFALSE);} 
BgL_g1131z00_1803 = 
CDR(BgL_pairz00_2675); } 
{ 
obj_t BgL_l1126z00_1805;obj_t BgL_tail1129z00_1806;
BgL_l1126z00_1805 = BgL_g1131z00_1803; 
BgL_tail1129z00_1806 = BgL_head1128z00_1802; 
BgL_zc3z04anonymousza31766ze3z87_1807:
if(
PAIRP(BgL_l1126z00_1805))
{ /* R5rs/syntax.scm 523 */
obj_t BgL_newtail1130z00_1809;
{ /* R5rs/syntax.scm 523 */
obj_t BgL_arg1769z00_1811;
{ /* R5rs/syntax.scm 523 */
obj_t BgL_pairz00_2678;
{ /* R5rs/syntax.scm 523 */
obj_t BgL_aux2621z00_3489;
BgL_aux2621z00_3489 = 
CAR(BgL_l1126z00_1805); 
if(
PAIRP(BgL_aux2621z00_3489))
{ /* R5rs/syntax.scm 523 */
BgL_pairz00_2678 = BgL_aux2621z00_3489; }  else 
{ 
obj_t BgL_auxz00_5556;
BgL_auxz00_5556 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)17856)), BGl_string3003z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_aux2621z00_3489); 
FAILURE(BgL_auxz00_5556,BFALSE,BFALSE);} } 
BgL_arg1769z00_1811 = 
CAR(BgL_pairz00_2678); } 
{ /* R5rs/syntax.scm 523 */
obj_t BgL_res2307z00_2679;
BgL_res2307z00_2679 = 
MAKE_YOUNG_PAIR(BgL_arg1769z00_1811, BNIL); 
BgL_newtail1130z00_1809 = BgL_res2307z00_2679; } } 
SET_CDR(BgL_tail1129z00_1806, BgL_newtail1130z00_1809); 
{ 
obj_t BgL_tail1129z00_5565;obj_t BgL_l1126z00_5563;
BgL_l1126z00_5563 = 
CDR(BgL_l1126z00_1805); 
BgL_tail1129z00_5565 = BgL_newtail1130z00_1809; 
BgL_tail1129z00_1806 = BgL_tail1129z00_5565; 
BgL_l1126z00_1805 = BgL_l1126z00_5563; 
goto BgL_zc3z04anonymousza31766ze3z87_1807;} }  else 
{ /* R5rs/syntax.scm 523 */
if(
NULLP(BgL_l1126z00_1805))
{ /* R5rs/syntax.scm 523 */
BgL_arg1764z00_1799 = BgL_head1128z00_1802; }  else 
{ /* R5rs/syntax.scm 523 */
BgL_arg1764z00_1799 = 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string2943z00zz__r5_macro_4_3_syntaxz00, BGl_string2944z00zz__r5_macro_4_3_syntaxz00, BgL_l1126z00_1805, BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)17856))); } } } } } 
BgL_nvarsz00_1773 = 
BGl_genvarsz00zz__r5_macro_4_3_syntaxz00(BgL_arg1764z00_1799); } 
{ /* R5rs/syntax.scm 523 */
obj_t BgL_nenvz00_1774;
{ /* R5rs/syntax.scm 525 */
obj_t BgL_arg1757z00_1790;
{ /* R5rs/syntax.scm 524 */
obj_t BgL_list1760z00_1792;
{ /* R5rs/syntax.scm 524 */
obj_t BgL_arg1761z00_1793;
BgL_arg1761z00_1793 = 
MAKE_YOUNG_PAIR(BgL_nvarsz00_1773, BNIL); 
BgL_list1760z00_1792 = 
MAKE_YOUNG_PAIR(BgL_bindingsz00_1520, BgL_arg1761z00_1793); } 
BgL_arg1757z00_1790 = 
BGl_mapz00zz__r4_control_features_6_9z00(BGl_proc3004z00zz__r5_macro_4_3_syntaxz00, BgL_list1760z00_1792); } 
BgL_nenvz00_1774 = 
BGl_appendzd221011zd2zz__r5_macro_4_3_syntaxz00(BgL_arg1757z00_1790, BgL_envz00_43); } 
{ /* R5rs/syntax.scm 524 */

{ /* R5rs/syntax.scm 529 */
obj_t BgL_arg1745z00_1775;
{ /* R5rs/syntax.scm 529 */
obj_t BgL_arg1746z00_1776;obj_t BgL_arg1747z00_1777;
{ /* R5rs/syntax.scm 529 */
obj_t BgL_zc3z04anonymousza31751ze3z87_3260;
BgL_zc3z04anonymousza31751ze3z87_3260 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31751ze3ze5zz__r5_macro_4_3_syntaxz00, 
(int)(((long)2)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31751ze3z87_3260, 
(int)(((long)0)), BgL_envz00_43); 
{ /* R5rs/syntax.scm 528 */
obj_t BgL_list1749z00_1779;
{ /* R5rs/syntax.scm 528 */
obj_t BgL_arg1750z00_1780;
BgL_arg1750z00_1780 = 
MAKE_YOUNG_PAIR(BgL_nvarsz00_1773, BNIL); 
BgL_list1749z00_1779 = 
MAKE_YOUNG_PAIR(BgL_bindingsz00_1520, BgL_arg1750z00_1780); } 
BgL_arg1746z00_1776 = 
BGl_mapz00zz__r4_control_features_6_9z00(BgL_zc3z04anonymousza31751ze3z87_3260, BgL_list1749z00_1779); } } 
{ /* R5rs/syntax.scm 531 */
obj_t BgL_arg1756z00_1789;
BgL_arg1756z00_1789 = 
BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00(BgL_nenvz00_1774, BgL_bodyz00_1521); 
{ /* R5rs/syntax.scm 528 */
obj_t BgL_auxz00_5584;
{ /* R5rs/syntax.scm 528 */
bool_t BgL_test3442z00_5585;
if(
PAIRP(BgL_arg1756z00_1789))
{ /* R5rs/syntax.scm 528 */
BgL_test3442z00_5585 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 528 */
BgL_test3442z00_5585 = 
NULLP(BgL_arg1756z00_1789)
; } 
if(BgL_test3442z00_5585)
{ /* R5rs/syntax.scm 528 */
BgL_auxz00_5584 = BgL_arg1756z00_1789
; }  else 
{ 
obj_t BgL_auxz00_5589;
BgL_auxz00_5589 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)17982)), BGl_string3002z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_arg1756z00_1789); 
FAILURE(BgL_auxz00_5589,BFALSE,BFALSE);} } 
BgL_arg1747z00_1777 = 
BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_5584, BNIL); } } 
BgL_arg1745z00_1775 = 
MAKE_YOUNG_PAIR(BgL_arg1746z00_1776, BgL_arg1747z00_1777); } 
return 
MAKE_YOUNG_PAIR(BGl_symbol2716z00zz__r5_macro_4_3_syntaxz00, BgL_arg1745z00_1775);} } } } }  else 
{ /* R5rs/syntax.scm 507 */
return 
BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00(BgL_envz00_43, BgL_xz00_42);} }  else 
{ /* R5rs/syntax.scm 507 */
obj_t BgL_cdrzd2353zd2_1556;
BgL_cdrzd2353zd2_1556 = 
CDR(BgL_xz00_42); 
if(
(
CAR(BgL_xz00_42)==BGl_symbol2814z00zz__r5_macro_4_3_syntaxz00))
{ /* R5rs/syntax.scm 507 */
if(
PAIRP(BgL_cdrzd2353zd2_1556))
{ /* R5rs/syntax.scm 507 */
BgL_bindingsz00_1527 = 
CAR(BgL_cdrzd2353zd2_1556); 
BgL_bodyz00_1528 = 
CDR(BgL_cdrzd2353zd2_1556); 
{ 
obj_t BgL_bindingsz00_1867;obj_t BgL_nbindingsz00_1868;obj_t BgL_nenvz00_1869;
BgL_bindingsz00_1867 = BgL_bindingsz00_1527; 
BgL_nbindingsz00_1868 = BNIL; 
BgL_nenvz00_1869 = BgL_envz00_43; 
BgL_zc3z04anonymousza31809ze3z87_1870:
if(
NULLP(BgL_bindingsz00_1867))
{ /* R5rs/syntax.scm 549 */
obj_t BgL_arg1811z00_1872;
{ /* R5rs/syntax.scm 549 */
obj_t BgL_arg1812z00_1873;obj_t BgL_arg1813z00_1874;
BgL_arg1812z00_1873 = 
bgl_reverse(BgL_nbindingsz00_1868); 
{ /* R5rs/syntax.scm 549 */
obj_t BgL_arg1814z00_1875;
BgL_arg1814z00_1875 = 
BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00(BgL_nenvz00_1869, BgL_bodyz00_1528); 
{ /* R5rs/syntax.scm 549 */
obj_t BgL_auxz00_5609;
{ /* R5rs/syntax.scm 549 */
bool_t BgL_test3447z00_5610;
if(
PAIRP(BgL_arg1814z00_1875))
{ /* R5rs/syntax.scm 549 */
BgL_test3447z00_5610 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 549 */
BgL_test3447z00_5610 = 
NULLP(BgL_arg1814z00_1875)
; } 
if(BgL_test3447z00_5610)
{ /* R5rs/syntax.scm 549 */
BgL_auxz00_5609 = BgL_arg1814z00_1875
; }  else 
{ 
obj_t BgL_auxz00_5614;
BgL_auxz00_5614 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18643)), BGl_string2900z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_arg1814z00_1875); 
FAILURE(BgL_auxz00_5614,BFALSE,BFALSE);} } 
BgL_arg1813z00_1874 = 
BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_5609, BNIL); } } 
BgL_arg1811z00_1872 = 
MAKE_YOUNG_PAIR(BgL_arg1812z00_1873, BgL_arg1813z00_1874); } 
return 
MAKE_YOUNG_PAIR(BGl_symbol2814z00zz__r5_macro_4_3_syntaxz00, BgL_arg1811z00_1872);}  else 
{ /* R5rs/syntax.scm 550 */
obj_t BgL_varz00_1876;
{ /* R5rs/syntax.scm 550 */
obj_t BgL_pairz00_2718;
if(
PAIRP(BgL_bindingsz00_1867))
{ /* R5rs/syntax.scm 550 */
BgL_pairz00_2718 = BgL_bindingsz00_1867; }  else 
{ 
obj_t BgL_auxz00_5623;
BgL_auxz00_5623 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18721)), BGl_string2900z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_bindingsz00_1867); 
FAILURE(BgL_auxz00_5623,BFALSE,BFALSE);} 
{ /* R5rs/syntax.scm 550 */
obj_t BgL_pairz00_2721;
{ /* R5rs/syntax.scm 550 */
obj_t BgL_aux2639z00_3507;
BgL_aux2639z00_3507 = 
CAR(BgL_pairz00_2718); 
if(
PAIRP(BgL_aux2639z00_3507))
{ /* R5rs/syntax.scm 550 */
BgL_pairz00_2721 = BgL_aux2639z00_3507; }  else 
{ 
obj_t BgL_auxz00_5630;
BgL_auxz00_5630 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18715)), BGl_string2900z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_aux2639z00_3507); 
FAILURE(BgL_auxz00_5630,BFALSE,BFALSE);} } 
BgL_varz00_1876 = 
CAR(BgL_pairz00_2721); } } 
{ /* R5rs/syntax.scm 551 */
obj_t BgL_nvarz00_1878;
BgL_nvarz00_1878 = 
BGl_genvarsz00zz__r5_macro_4_3_syntaxz00(BgL_varz00_1876); 
{ /* R5rs/syntax.scm 552 */
obj_t BgL_nenvz00_1879;
{ /* R5rs/syntax.scm 553 */
obj_t BgL_arg1821z00_1886;
BgL_arg1821z00_1886 = 
MAKE_YOUNG_PAIR(BgL_varz00_1876, BgL_nvarz00_1878); 
BgL_nenvz00_1879 = 
MAKE_YOUNG_PAIR(BgL_arg1821z00_1886, BgL_envz00_43); } 
{ /* R5rs/syntax.scm 553 */

{ /* R5rs/syntax.scm 554 */
obj_t BgL_arg1815z00_1880;obj_t BgL_arg1816z00_1881;
{ /* R5rs/syntax.scm 554 */
obj_t BgL_pairz00_2728;
if(
PAIRP(BgL_bindingsz00_1867))
{ /* R5rs/syntax.scm 554 */
BgL_pairz00_2728 = BgL_bindingsz00_1867; }  else 
{ 
obj_t BgL_auxz00_5640;
BgL_auxz00_5640 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18846)), BGl_string2900z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_bindingsz00_1867); 
FAILURE(BgL_auxz00_5640,BFALSE,BFALSE);} 
BgL_arg1815z00_1880 = 
CDR(BgL_pairz00_2728); } 
{ /* R5rs/syntax.scm 555 */
obj_t BgL_arg1817z00_1882;
{ /* R5rs/syntax.scm 555 */
obj_t BgL_arg1818z00_1883;
BgL_arg1818z00_1883 = 
BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(BgL_varz00_1876, BgL_envz00_43); 
{ /* R5rs/syntax.scm 555 */
obj_t BgL_list1819z00_1884;
{ /* R5rs/syntax.scm 555 */
obj_t BgL_arg1820z00_1885;
BgL_arg1820z00_1885 = 
MAKE_YOUNG_PAIR(BgL_arg1818z00_1883, BNIL); 
BgL_list1819z00_1884 = 
MAKE_YOUNG_PAIR(BgL_varz00_1876, BgL_arg1820z00_1885); } 
BgL_arg1817z00_1882 = BgL_list1819z00_1884; } } 
BgL_arg1816z00_1881 = 
MAKE_YOUNG_PAIR(BgL_arg1817z00_1882, BgL_nbindingsz00_1868); } 
{ 
obj_t BgL_nenvz00_5651;obj_t BgL_nbindingsz00_5650;obj_t BgL_bindingsz00_5649;
BgL_bindingsz00_5649 = BgL_arg1815z00_1880; 
BgL_nbindingsz00_5650 = BgL_arg1816z00_1881; 
BgL_nenvz00_5651 = BgL_nenvz00_1879; 
BgL_nenvz00_1869 = BgL_nenvz00_5651; 
BgL_nbindingsz00_1868 = BgL_nbindingsz00_5650; 
BgL_bindingsz00_1867 = BgL_bindingsz00_5649; 
goto BgL_zc3z04anonymousza31809ze3z87_1870;} } } } } } } }  else 
{ /* R5rs/syntax.scm 507 */
return 
BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00(BgL_envz00_43, BgL_xz00_42);} }  else 
{ /* R5rs/syntax.scm 507 */
if(
(
CAR(BgL_xz00_42)==BGl_symbol2810z00zz__r5_macro_4_3_syntaxz00))
{ /* R5rs/syntax.scm 507 */
if(
PAIRP(BgL_cdrzd2353zd2_1556))
{ /* R5rs/syntax.scm 507 */
BgL_bindingsz00_1530 = 
CAR(BgL_cdrzd2353zd2_1556); 
BgL_bodyz00_1531 = 
CDR(BgL_cdrzd2353zd2_1556); 
{ /* R5rs/syntax.scm 558 */
obj_t BgL_nvarsz00_1888;
{ /* R5rs/syntax.scm 558 */
obj_t BgL_arg1841z00_1914;
if(
NULLP(BgL_bindingsz00_1530))
{ /* R5rs/syntax.scm 558 */
BgL_arg1841z00_1914 = BNIL; }  else 
{ /* R5rs/syntax.scm 558 */
obj_t BgL_head1140z00_1917;
{ /* R5rs/syntax.scm 558 */
obj_t BgL_arg1850z00_1930;
{ /* R5rs/syntax.scm 558 */
obj_t BgL_pairz00_2732;
{ /* R5rs/syntax.scm 558 */
obj_t BgL_pairz00_2731;
if(
PAIRP(BgL_bindingsz00_1530))
{ /* R5rs/syntax.scm 558 */
BgL_pairz00_2731 = BgL_bindingsz00_1530; }  else 
{ 
obj_t BgL_auxz00_5664;
BgL_auxz00_5664 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18996)), BGl_string3005z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_bindingsz00_1530); 
FAILURE(BgL_auxz00_5664,BFALSE,BFALSE);} 
{ /* R5rs/syntax.scm 558 */
obj_t BgL_aux2645z00_3513;
BgL_aux2645z00_3513 = 
CAR(BgL_pairz00_2731); 
if(
PAIRP(BgL_aux2645z00_3513))
{ /* R5rs/syntax.scm 558 */
BgL_pairz00_2732 = BgL_aux2645z00_3513; }  else 
{ 
obj_t BgL_auxz00_5671;
BgL_auxz00_5671 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18996)), BGl_string3005z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_aux2645z00_3513); 
FAILURE(BgL_auxz00_5671,BFALSE,BFALSE);} } } 
BgL_arg1850z00_1930 = 
CAR(BgL_pairz00_2732); } 
{ /* R5rs/syntax.scm 558 */
obj_t BgL_res2319z00_2733;
BgL_res2319z00_2733 = 
MAKE_YOUNG_PAIR(BgL_arg1850z00_1930, BNIL); 
BgL_head1140z00_1917 = BgL_res2319z00_2733; } } 
{ /* R5rs/syntax.scm 558 */
obj_t BgL_g1143z00_1918;
{ /* R5rs/syntax.scm 558 */
obj_t BgL_pairz00_2734;
if(
PAIRP(BgL_bindingsz00_1530))
{ /* R5rs/syntax.scm 558 */
BgL_pairz00_2734 = BgL_bindingsz00_1530; }  else 
{ 
obj_t BgL_auxz00_5679;
BgL_auxz00_5679 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18996)), BGl_string3005z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_bindingsz00_1530); 
FAILURE(BgL_auxz00_5679,BFALSE,BFALSE);} 
BgL_g1143z00_1918 = 
CDR(BgL_pairz00_2734); } 
{ 
obj_t BgL_l1138z00_1920;obj_t BgL_tail1141z00_1921;
BgL_l1138z00_1920 = BgL_g1143z00_1918; 
BgL_tail1141z00_1921 = BgL_head1140z00_1917; 
BgL_zc3z04anonymousza31843ze3z87_1922:
if(
PAIRP(BgL_l1138z00_1920))
{ /* R5rs/syntax.scm 558 */
obj_t BgL_newtail1142z00_1924;
{ /* R5rs/syntax.scm 558 */
obj_t BgL_arg1846z00_1926;
{ /* R5rs/syntax.scm 558 */
obj_t BgL_pairz00_2737;
{ /* R5rs/syntax.scm 558 */
obj_t BgL_aux2649z00_3517;
BgL_aux2649z00_3517 = 
CAR(BgL_l1138z00_1920); 
if(
PAIRP(BgL_aux2649z00_3517))
{ /* R5rs/syntax.scm 558 */
BgL_pairz00_2737 = BgL_aux2649z00_3517; }  else 
{ 
obj_t BgL_auxz00_5689;
BgL_auxz00_5689 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18996)), BGl_string3006z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_aux2649z00_3517); 
FAILURE(BgL_auxz00_5689,BFALSE,BFALSE);} } 
BgL_arg1846z00_1926 = 
CAR(BgL_pairz00_2737); } 
{ /* R5rs/syntax.scm 558 */
obj_t BgL_res2321z00_2738;
BgL_res2321z00_2738 = 
MAKE_YOUNG_PAIR(BgL_arg1846z00_1926, BNIL); 
BgL_newtail1142z00_1924 = BgL_res2321z00_2738; } } 
SET_CDR(BgL_tail1141z00_1921, BgL_newtail1142z00_1924); 
{ 
obj_t BgL_tail1141z00_5698;obj_t BgL_l1138z00_5696;
BgL_l1138z00_5696 = 
CDR(BgL_l1138z00_1920); 
BgL_tail1141z00_5698 = BgL_newtail1142z00_1924; 
BgL_tail1141z00_1921 = BgL_tail1141z00_5698; 
BgL_l1138z00_1920 = BgL_l1138z00_5696; 
goto BgL_zc3z04anonymousza31843ze3z87_1922;} }  else 
{ /* R5rs/syntax.scm 558 */
if(
NULLP(BgL_l1138z00_1920))
{ /* R5rs/syntax.scm 558 */
BgL_arg1841z00_1914 = BgL_head1140z00_1917; }  else 
{ /* R5rs/syntax.scm 558 */
BgL_arg1841z00_1914 = 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string2943z00zz__r5_macro_4_3_syntaxz00, BGl_string2944z00zz__r5_macro_4_3_syntaxz00, BgL_l1138z00_1920, BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18996))); } } } } } 
BgL_nvarsz00_1888 = 
BGl_genvarsz00zz__r5_macro_4_3_syntaxz00(BgL_arg1841z00_1914); } 
{ /* R5rs/syntax.scm 558 */
obj_t BgL_nenvz00_1889;
{ /* R5rs/syntax.scm 560 */
obj_t BgL_arg1835z00_1905;
{ /* R5rs/syntax.scm 559 */
obj_t BgL_list1837z00_1907;
{ /* R5rs/syntax.scm 559 */
obj_t BgL_arg1838z00_1908;
BgL_arg1838z00_1908 = 
MAKE_YOUNG_PAIR(BgL_nvarsz00_1888, BNIL); 
BgL_list1837z00_1907 = 
MAKE_YOUNG_PAIR(BgL_bindingsz00_1530, BgL_arg1838z00_1908); } 
BgL_arg1835z00_1905 = 
BGl_mapz00zz__r4_control_features_6_9z00(BGl_proc3007z00zz__r5_macro_4_3_syntaxz00, BgL_list1837z00_1907); } 
BgL_nenvz00_1889 = 
BGl_appendzd221011zd2zz__r5_macro_4_3_syntaxz00(BgL_arg1835z00_1905, BgL_envz00_43); } 
{ /* R5rs/syntax.scm 559 */

{ /* R5rs/syntax.scm 564 */
obj_t BgL_arg1822z00_1890;
{ /* R5rs/syntax.scm 564 */
obj_t BgL_arg1823z00_1891;obj_t BgL_arg1824z00_1892;
{ /* R5rs/syntax.scm 564 */
obj_t BgL_zc3z04anonymousza31828ze3z87_3256;
BgL_zc3z04anonymousza31828ze3z87_3256 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31828ze3ze5zz__r5_macro_4_3_syntaxz00, 
(int)(((long)2)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31828ze3z87_3256, 
(int)(((long)0)), BgL_nenvz00_1889); 
{ /* R5rs/syntax.scm 563 */
obj_t BgL_list1826z00_1894;
{ /* R5rs/syntax.scm 563 */
obj_t BgL_arg1827z00_1895;
BgL_arg1827z00_1895 = 
MAKE_YOUNG_PAIR(BgL_nvarsz00_1888, BNIL); 
BgL_list1826z00_1894 = 
MAKE_YOUNG_PAIR(BgL_bindingsz00_1530, BgL_arg1827z00_1895); } 
BgL_arg1823z00_1891 = 
BGl_mapz00zz__r4_control_features_6_9z00(BgL_zc3z04anonymousza31828ze3z87_3256, BgL_list1826z00_1894); } } 
{ /* R5rs/syntax.scm 566 */
obj_t BgL_arg1833z00_1904;
BgL_arg1833z00_1904 = 
BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00(BgL_nenvz00_1889, BgL_bodyz00_1531); 
{ /* R5rs/syntax.scm 563 */
obj_t BgL_auxz00_5717;
{ /* R5rs/syntax.scm 563 */
bool_t BgL_test3461z00_5718;
if(
PAIRP(BgL_arg1833z00_1904))
{ /* R5rs/syntax.scm 563 */
BgL_test3461z00_5718 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 563 */
BgL_test3461z00_5718 = 
NULLP(BgL_arg1833z00_1904)
; } 
if(BgL_test3461z00_5718)
{ /* R5rs/syntax.scm 563 */
BgL_auxz00_5717 = BgL_arg1833z00_1904
; }  else 
{ 
obj_t BgL_auxz00_5722;
BgL_auxz00_5722 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)19122)), BGl_string3005z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_arg1833z00_1904); 
FAILURE(BgL_auxz00_5722,BFALSE,BFALSE);} } 
BgL_arg1824z00_1892 = 
BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_5717, BNIL); } } 
BgL_arg1822z00_1890 = 
MAKE_YOUNG_PAIR(BgL_arg1823z00_1891, BgL_arg1824z00_1892); } 
return 
MAKE_YOUNG_PAIR(BGl_symbol2810z00zz__r5_macro_4_3_syntaxz00, BgL_arg1822z00_1890);} } } } }  else 
{ /* R5rs/syntax.scm 507 */
return 
BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00(BgL_envz00_43, BgL_xz00_42);} }  else 
{ /* R5rs/syntax.scm 507 */
obj_t BgL_cdrzd2391zd2_1568;
BgL_cdrzd2391zd2_1568 = 
CDR(BgL_xz00_42); 
if(
(
CAR(BgL_xz00_42)==BGl_symbol3009z00zz__r5_macro_4_3_syntaxz00))
{ /* R5rs/syntax.scm 507 */
if(
PAIRP(BgL_cdrzd2391zd2_1568))
{ /* R5rs/syntax.scm 507 */
obj_t BgL_carzd2394zd2_1572;
BgL_carzd2394zd2_1572 = 
CAR(BgL_cdrzd2391zd2_1568); 
if(
PAIRP(BgL_carzd2394zd2_1572))
{ /* R5rs/syntax.scm 507 */
if(
NULLP(
CDR(BgL_carzd2394zd2_1572)))
{ /* R5rs/syntax.scm 507 */
BgL_varz00_1533 = 
CAR(BgL_carzd2394zd2_1572); 
BgL_bodyz00_1534 = 
CDR(BgL_cdrzd2391zd2_1568); 
{ /* R5rs/syntax.scm 568 */
obj_t BgL_nvarz00_1932;
BgL_nvarz00_1932 = 
BGl_genvarsz00zz__r5_macro_4_3_syntaxz00(BgL_varz00_1533); 
{ /* R5rs/syntax.scm 568 */
obj_t BgL_nenvz00_1933;
{ /* R5rs/syntax.scm 569 */
obj_t BgL_arg1857z00_1938;
BgL_arg1857z00_1938 = 
MAKE_YOUNG_PAIR(BgL_varz00_1533, BgL_nvarz00_1932); 
BgL_nenvz00_1933 = 
MAKE_YOUNG_PAIR(BgL_arg1857z00_1938, BgL_envz00_43); } 
{ /* R5rs/syntax.scm 569 */

{ /* R5rs/syntax.scm 570 */
obj_t BgL_arg1852z00_1934;
{ /* R5rs/syntax.scm 570 */
obj_t BgL_arg1853z00_1935;obj_t BgL_arg1855z00_1936;
BgL_arg1853z00_1935 = 
MAKE_YOUNG_PAIR(BgL_nvarz00_1932, BNIL); 
{ /* R5rs/syntax.scm 570 */
obj_t BgL_arg1856z00_1937;
BgL_arg1856z00_1937 = 
BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00(BgL_nenvz00_1933, BgL_bodyz00_1534); 
{ /* R5rs/syntax.scm 570 */
obj_t BgL_auxz00_5749;
{ /* R5rs/syntax.scm 570 */
bool_t BgL_test3467z00_5750;
if(
PAIRP(BgL_arg1856z00_1937))
{ /* R5rs/syntax.scm 570 */
BgL_test3467z00_5750 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 570 */
BgL_test3467z00_5750 = 
NULLP(BgL_arg1856z00_1937)
; } 
if(BgL_test3467z00_5750)
{ /* R5rs/syntax.scm 570 */
BgL_auxz00_5749 = BgL_arg1856z00_1937
; }  else 
{ 
obj_t BgL_auxz00_5754;
BgL_auxz00_5754 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)19363)), BGl_string3008z00zz__r5_macro_4_3_syntaxz00, BGl_string2681z00zz__r5_macro_4_3_syntaxz00, BgL_arg1856z00_1937); 
FAILURE(BgL_auxz00_5754,BFALSE,BFALSE);} } 
BgL_arg1855z00_1936 = 
BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_5749, BNIL); } } 
BgL_arg1852z00_1934 = 
MAKE_YOUNG_PAIR(BgL_arg1853z00_1935, BgL_arg1855z00_1936); } 
return 
MAKE_YOUNG_PAIR(BGl_symbol3009z00zz__r5_macro_4_3_syntaxz00, BgL_arg1852z00_1934);} } } } }  else 
{ /* R5rs/syntax.scm 507 */
return 
BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00(BgL_envz00_43, BgL_xz00_42);} }  else 
{ /* R5rs/syntax.scm 507 */
return 
BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00(BgL_envz00_43, BgL_xz00_42);} }  else 
{ /* R5rs/syntax.scm 507 */
return 
BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00(BgL_envz00_43, BgL_xz00_42);} }  else 
{ /* R5rs/syntax.scm 507 */
return 
BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00(BgL_envz00_43, BgL_xz00_42);} } } } } } }  else 
{ /* R5rs/syntax.scm 507 */
return BgL_xz00_42;} } } } 

}



/* &<@anonymous:1828> */
obj_t BGl_z62zc3z04anonymousza31828ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3262, obj_t BgL_bz00_3264, obj_t BgL_vz00_3265)
{
{ /* R5rs/syntax.scm 563 */
{ /* R5rs/syntax.scm 564 */
obj_t BgL_nenvz00_3263;
BgL_nenvz00_3263 = 
PROCEDURE_REF(BgL_envz00_3262, 
(int)(((long)0))); 
{ /* R5rs/syntax.scm 564 */
obj_t BgL_res3046z00_3680;
{ /* R5rs/syntax.scm 564 */
obj_t BgL_arg1829z00_3673;
{ /* R5rs/syntax.scm 564 */
obj_t BgL_arg1832z00_3674;
{ /* R5rs/syntax.scm 564 */
obj_t BgL_pairz00_3675;
if(
PAIRP(BgL_bz00_3264))
{ /* R5rs/syntax.scm 564 */
BgL_pairz00_3675 = BgL_bz00_3264; }  else 
{ 
obj_t BgL_auxz00_5771;
BgL_auxz00_5771 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)19182)), BGl_string3011z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_bz00_3264); 
FAILURE(BgL_auxz00_5771,BFALSE,BFALSE);} 
{ /* R5rs/syntax.scm 564 */
obj_t BgL_pairz00_3676;
{ /* R5rs/syntax.scm 564 */
obj_t BgL_aux2657z00_3677;
BgL_aux2657z00_3677 = 
CDR(BgL_pairz00_3675); 
if(
PAIRP(BgL_aux2657z00_3677))
{ /* R5rs/syntax.scm 564 */
BgL_pairz00_3676 = BgL_aux2657z00_3677; }  else 
{ 
obj_t BgL_auxz00_5778;
BgL_auxz00_5778 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)19176)), BGl_string3011z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_aux2657z00_3677); 
FAILURE(BgL_auxz00_5778,BFALSE,BFALSE);} } 
BgL_arg1832z00_3674 = 
CAR(BgL_pairz00_3676); } } 
BgL_arg1829z00_3673 = 
BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(BgL_arg1832z00_3674, BgL_nenvz00_3263); } 
{ /* R5rs/syntax.scm 564 */
obj_t BgL_list1830z00_3678;
{ /* R5rs/syntax.scm 564 */
obj_t BgL_arg1831z00_3679;
BgL_arg1831z00_3679 = 
MAKE_YOUNG_PAIR(BgL_arg1829z00_3673, BNIL); 
BgL_list1830z00_3678 = 
MAKE_YOUNG_PAIR(BgL_vz00_3265, BgL_arg1831z00_3679); } 
BgL_res3046z00_3680 = BgL_list1830z00_3678; } } 
return BgL_res3046z00_3680;} } } 

}



/* &<@anonymous:1839> */
obj_t BGl_z62zc3z04anonymousza31839ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3266, obj_t BgL_bz00_3267, obj_t BgL_vz00_3268)
{
{ /* R5rs/syntax.scm 559 */
{ /* R5rs/syntax.scm 560 */
obj_t BgL_arg1840z00_3681;
{ /* R5rs/syntax.scm 560 */
obj_t BgL_pairz00_3682;
if(
PAIRP(BgL_bz00_3267))
{ /* R5rs/syntax.scm 560 */
BgL_pairz00_3682 = BgL_bz00_3267; }  else 
{ 
obj_t BgL_auxz00_5788;
BgL_auxz00_5788 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)19076)), BGl_string3012z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_bz00_3267); 
FAILURE(BgL_auxz00_5788,BFALSE,BFALSE);} 
BgL_arg1840z00_3681 = 
CAR(BgL_pairz00_3682); } 
return 
MAKE_YOUNG_PAIR(BgL_arg1840z00_3681, BgL_vz00_3268);} } 

}



/* &<@anonymous:1751> */
obj_t BGl_z62zc3z04anonymousza31751ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3276, obj_t BgL_bz00_3278, obj_t BgL_vz00_3279)
{
{ /* R5rs/syntax.scm 528 */
{ /* R5rs/syntax.scm 529 */
obj_t BgL_envz00_3277;
BgL_envz00_3277 = 
PROCEDURE_REF(BgL_envz00_3276, 
(int)(((long)0))); 
{ /* R5rs/syntax.scm 529 */
obj_t BgL_res3047z00_3690;
{ /* R5rs/syntax.scm 529 */
obj_t BgL_arg1752z00_3683;
{ /* R5rs/syntax.scm 529 */
obj_t BgL_arg1755z00_3684;
{ /* R5rs/syntax.scm 529 */
obj_t BgL_pairz00_3685;
if(
PAIRP(BgL_bz00_3278))
{ /* R5rs/syntax.scm 529 */
BgL_pairz00_3685 = BgL_bz00_3278; }  else 
{ 
obj_t BgL_auxz00_5798;
BgL_auxz00_5798 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18036)), BGl_string3015z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_bz00_3278); 
FAILURE(BgL_auxz00_5798,BFALSE,BFALSE);} 
{ /* R5rs/syntax.scm 529 */
obj_t BgL_pairz00_3686;
{ /* R5rs/syntax.scm 529 */
obj_t BgL_aux2669z00_3687;
BgL_aux2669z00_3687 = 
CDR(BgL_pairz00_3685); 
if(
PAIRP(BgL_aux2669z00_3687))
{ /* R5rs/syntax.scm 529 */
BgL_pairz00_3686 = BgL_aux2669z00_3687; }  else 
{ 
obj_t BgL_auxz00_5805;
BgL_auxz00_5805 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18030)), BGl_string3015z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_aux2669z00_3687); 
FAILURE(BgL_auxz00_5805,BFALSE,BFALSE);} } 
BgL_arg1755z00_3684 = 
CAR(BgL_pairz00_3686); } } 
BgL_arg1752z00_3683 = 
BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(BgL_arg1755z00_3684, BgL_envz00_3277); } 
{ /* R5rs/syntax.scm 529 */
obj_t BgL_list1753z00_3688;
{ /* R5rs/syntax.scm 529 */
obj_t BgL_arg1754z00_3689;
BgL_arg1754z00_3689 = 
MAKE_YOUNG_PAIR(BgL_arg1752z00_3683, BNIL); 
BgL_list1753z00_3688 = 
MAKE_YOUNG_PAIR(BgL_vz00_3279, BgL_arg1754z00_3689); } 
BgL_res3047z00_3690 = BgL_list1753z00_3688; } } 
return BgL_res3047z00_3690;} } } 

}



/* &<@anonymous:1762> */
obj_t BGl_z62zc3z04anonymousza31762ze3ze5zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3280, obj_t BgL_bz00_3281, obj_t BgL_vz00_3282)
{
{ /* R5rs/syntax.scm 524 */
{ /* R5rs/syntax.scm 525 */
obj_t BgL_arg1763z00_3691;
{ /* R5rs/syntax.scm 525 */
obj_t BgL_pairz00_3692;
if(
PAIRP(BgL_bz00_3281))
{ /* R5rs/syntax.scm 525 */
BgL_pairz00_3692 = BgL_bz00_3281; }  else 
{ 
obj_t BgL_auxz00_5815;
BgL_auxz00_5815 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)17936)), BGl_string3016z00zz__r5_macro_4_3_syntaxz00, BGl_string2948z00zz__r5_macro_4_3_syntaxz00, BgL_bz00_3281); 
FAILURE(BgL_auxz00_5815,BFALSE,BFALSE);} 
BgL_arg1763z00_3691 = 
CAR(BgL_pairz00_3692); } 
return 
MAKE_YOUNG_PAIR(BgL_arg1763z00_3691, BgL_vz00_3282);} } 

}



/* loop~0 */
obj_t BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3286, obj_t BgL_xz00_1940)
{
{ /* R5rs/syntax.scm 580 */
if(
PAIRP(BgL_xz00_1940))
{ /* R5rs/syntax.scm 582 */
return 
MAKE_YOUNG_PAIR(
BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(
CAR(BgL_xz00_1940), BgL_envz00_3286), 
BGl_loopze70ze7zz__r5_macro_4_3_syntaxz00(BgL_envz00_3286, 
CDR(BgL_xz00_1940)));}  else 
{ /* R5rs/syntax.scm 582 */
if(
NULLP(BgL_xz00_1940))
{ /* R5rs/syntax.scm 584 */
return BNIL;}  else 
{ /* R5rs/syntax.scm 584 */
return 
BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(BgL_xz00_1940, BgL_envz00_3286);} } } 

}



/* flatten */
obj_t BGl_flattenz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_lz00_46)
{
{ /* R5rs/syntax.scm 592 */
if(
PAIRP(BgL_lz00_46))
{ /* R5rs/syntax.scm 594 */
return 
MAKE_YOUNG_PAIR(
CAR(BgL_lz00_46), 
BGl_flattenz00zz__r5_macro_4_3_syntaxz00(
CDR(BgL_lz00_46)));}  else 
{ /* R5rs/syntax.scm 594 */
if(
NULLP(BgL_lz00_46))
{ /* R5rs/syntax.scm 595 */
return BgL_lz00_46;}  else 
{ /* R5rs/syntax.scm 596 */
obj_t BgL_list1873z00_1954;
BgL_list1873z00_1954 = 
MAKE_YOUNG_PAIR(BgL_lz00_46, BNIL); 
return BgL_list1873z00_1954;} } } 

}



/* genvars */
obj_t BGl_genvarsz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_lz00_47)
{
{ /* R5rs/syntax.scm 601 */
if(
PAIRP(BgL_lz00_47))
{ /* R5rs/syntax.scm 611 */
return 
MAKE_YOUNG_PAIR(
BGl_gennameze70ze7zz__r5_macro_4_3_syntaxz00(
CAR(BgL_lz00_47)), 
BGl_genvarsz00zz__r5_macro_4_3_syntaxz00(
CDR(BgL_lz00_47)));}  else 
{ /* R5rs/syntax.scm 611 */
if(
NULLP(BgL_lz00_47))
{ /* R5rs/syntax.scm 612 */
return BgL_lz00_47;}  else 
{ /* R5rs/syntax.scm 612 */
return 
BGl_gennameze70ze7zz__r5_macro_4_3_syntaxz00(BgL_lz00_47);} } } 

}



/* genname~0 */
obj_t BGl_gennameze70ze7zz__r5_macro_4_3_syntaxz00(obj_t BgL_lz00_1962)
{
{ /* R5rs/syntax.scm 609 */
{ 

if(
SYMBOLP(BgL_lz00_1962))
{ /* R5rs/syntax.scm 609 */
{ /* R5rs/syntax.scm 605 */
bool_t BgL_test3482z00_5852;
{ /* R5rs/syntax.scm 468 */
obj_t BgL_sz00_2926;
{ /* R5rs/syntax.scm 468 */
obj_t BgL_res2378z00_2929;
{ /* R5rs/syntax.scm 468 */
obj_t BgL_symbolz00_2927;
if(
SYMBOLP(BgL_lz00_1962))
{ /* R5rs/syntax.scm 468 */
BgL_symbolz00_2927 = BgL_lz00_1962; }  else 
{ 
obj_t BgL_auxz00_5855;
BgL_auxz00_5855 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2679z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)15816)), BGl_string3017z00zz__r5_macro_4_3_syntaxz00, BGl_string2683z00zz__r5_macro_4_3_syntaxz00, BgL_lz00_1962); 
FAILURE(BgL_auxz00_5855,BFALSE,BFALSE);} 
{ /* R5rs/syntax.scm 468 */
obj_t BgL_arg2007z00_2928;
BgL_arg2007z00_2928 = 
SYMBOL_TO_STRING(BgL_symbolz00_2927); 
BgL_res2378z00_2929 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2007z00_2928); } } 
BgL_sz00_2926 = BgL_res2378z00_2929; } 
BgL_test3482z00_5852 = 
bigloo_strcmp_at(BgL_sz00_2926, BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00, ((long)0)); } 
if(BgL_test3482z00_5852)
{ /* R5rs/syntax.scm 605 */
return 
BGl_hygienezd2valuezd2zz__r5_macro_4_3_syntaxz00(BgL_lz00_1962);}  else 
{ /* R5rs/syntax.scm 605 */
return 
BGl_gensymz00zz__r4_symbols_6_4z00(BgL_lz00_1962);} } }  else 
{ /* R5rs/syntax.scm 609 */

{ /* R5rs/syntax.scm 609 */

return 
BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);} } } } 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__r5_macro_4_3_syntaxz00()
{
{ /* R5rs/syntax.scm 17 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__r5_macro_4_3_syntaxz00()
{
{ /* R5rs/syntax.scm 17 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__r5_macro_4_3_syntaxz00()
{
{ /* R5rs/syntax.scm 17 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r5_macro_4_3_syntaxz00()
{
{ /* R5rs/syntax.scm 17 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string3018z00zz__r5_macro_4_3_syntaxz00)); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)193422032), 
BSTRING_TO_STRING(BGl_string3018z00zz__r5_macro_4_3_syntaxz00)); 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)224967910), 
BSTRING_TO_STRING(BGl_string3018z00zz__r5_macro_4_3_syntaxz00)); 
BGl_modulezd2initializa7ationz75zz__bexitz00(((long)340267996), 
BSTRING_TO_STRING(BGl_string3018z00zz__r5_macro_4_3_syntaxz00)); 
BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)86988972), 
BSTRING_TO_STRING(BGl_string3018z00zz__r5_macro_4_3_syntaxz00)); 
BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long)68572481), 
BSTRING_TO_STRING(BGl_string3018z00zz__r5_macro_4_3_syntaxz00)); 
BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long)331540733), 
BSTRING_TO_STRING(BGl_string3018z00zz__r5_macro_4_3_syntaxz00)); 
return 
BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)268155874), 
BSTRING_TO_STRING(BGl_string3018z00zz__r5_macro_4_3_syntaxz00));} 

}

#ifdef __cplusplus
}
#endif
