/*===========================================================================*/
/*   (Ieee/pairlist.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Ieee/pairlist.scm -indent -o objs/obj_s/Ieee/pairlist.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
BGL_EXPORTED_DECL obj_t BGl_listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, long, obj_t);
static obj_t BGl_z62carz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62nullzf3z91zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62cdaarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62caddrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_cddddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_symbol2804z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_z62lengthz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62takez62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2809z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_reducez00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t bgl_append2(obj_t, obj_t);
static obj_t BGl_z62appendz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_cdaadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_caddarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_z62listz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_ereversez00zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_anyz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62cddaarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol2814z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_z62cdaddrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol2819z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t bgl_remq_bang(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_caaaarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_cddarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_z62caadarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_takez00zz__r4_pairs_and_lists_6_3z00(obj_t, long);
static obj_t BGl_symbol2901z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t bgl_list_ref(obj_t, long);
static obj_t BGl_symbol2824z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2743z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2908z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2829z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_z62epairzf3z91zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_caaarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_listz00zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_findzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62caarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62cdrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3004z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol3006z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_z62cdadrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list2800z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2832z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2751z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_symbol2915z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2803z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2753z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2755z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2837z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2806z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2807z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2757z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2808z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_recurze70ze7zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol2759z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_deletez00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_appendzd2listze70z35zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_appendzd2listze71z35zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_appendzd2listze72z35zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62assqz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62cerz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_cdadarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_z62assvz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_cadddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_symbol3016z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2920z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2841z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_z62cddadrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list2811z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_everyz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list2812z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2844z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2813z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2765z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2816z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_z62pairzd2orzd2nullzf3z91zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol2848z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2817z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2818z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_z62makezd2listzb0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2769z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_z62iotaz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_setzd2cdrz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_caarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_z62setzd2carz12za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl__deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62remqz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_appendz12z12zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2splitz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, int, obj_t);
BGL_EXPORTED_DECL obj_t BGl_caaadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_consza21ze70z45zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_symbol3020z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_cdddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_z62appendz12z70zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62cadaarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62caaddrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol2931z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2900z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2850z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2820z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2821z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2822z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2904z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2854z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2823z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2905z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2937z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2906z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2907z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2826z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2827z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2777z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2859z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2828z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2779z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__deletez00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62memqz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62memvz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_caadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_assvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__r4_pairs_and_lists_6_3z00();
static obj_t BGl_z62remqz12z70zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t bgl_reverse(obj_t);
static obj_t BGl_z62cadrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL long bgl_list_length(obj_t);
static obj_t BGl_list3003z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_z62reversez62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62cddarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list2910z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2911z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_iotaz00zz__r4_pairs_and_lists_6_3z00(int, obj_t);
static obj_t BGl_symbol2943z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2912z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2831z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2750z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2913z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2945z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2914z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2864z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2783z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2834z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2835z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2917z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2836z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2786z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2918z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2919z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t bgl_remq(obj_t, obj_t);
static obj_t BGl_list2839z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_gczd2rootszd2initz00zz__r4_pairs_and_lists_6_3z00();
BGL_EXPORTED_DECL obj_t BGl_setzd2cerz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
extern obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z62dropz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__r4_pairs_and_lists_6_3z00();
extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z62caaarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_cddaarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_z62appendzd22zb0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_cdaddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_z62cdddarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62ereversez62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_pairzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_symbol2952z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2840z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2922z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2923z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2873z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list2924z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2843z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2793z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2925z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2957z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2926z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2795z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2764z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2927z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2877z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2846z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2928z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2847z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_memvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_carz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_list2929z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2798z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2849z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2768z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_cadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl__deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_caadarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_z62assocz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t bgl_reverse_bang(obj_t);
static obj_t BGl_z62cdaaarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62cadadrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(int, obj_t);
static obj_t BGl_list2930z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2933z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2883z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2852z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_z62listzd2refzb0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_list2934z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2853z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_epairzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_symbol2966z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2935z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_z62everyz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_list2936z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2856z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_dropz00zz__r4_pairs_and_lists_6_3z00(obj_t, long);
static obj_t BGl_symbol2888z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2857z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2776z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2939z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2858z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_cadarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_z62memberz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62cdarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62findz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62cdddrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62anyz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_list2940z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2941z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2942z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2861z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2862z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2944z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2894z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2863z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2977z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2947z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2866z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2785z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2948z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2867z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl_list2949z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2868z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2869z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2788z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_z62lastzd2pairzb0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2splitzd2zz__r4_pairs_and_lists_6_3z00(obj_t, int, obj_t);
static obj_t BGl_z62listzf3z91zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62caadrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62appendzd22z12za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2tabulatezd2zz__r4_pairs_and_lists_6_3z00(int, obj_t);
BGL_EXPORTED_DECL obj_t BGl_cddadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_z62cddddrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list2950z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2951z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2870z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2871z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2872z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2791z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2954z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2792z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2955z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2956z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2875z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2876z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_cdrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_list2959z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2797z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_econsz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_list2879z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_cdarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_z62setzd2cdrz12za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_cadaarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_z62reducez62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_findz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_caaddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_appendzd221011zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62cdaadrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62caddarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2990z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2960z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2961z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2880z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2962z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2881z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_z62pairzf3z91zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol2994z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2963z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2882z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2964z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2996z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2965z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2885z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2998z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2886z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2968z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2887z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_cerz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_list2969z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_cdaarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_caddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_z62listzd2splitzb0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62listzd2setz12za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62caaaarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62cddrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62consza2zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_loopze70ze7zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_list2970z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2971z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2890z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2972z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2891z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2973z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2892z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2974z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2893z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2975z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_deletez12z12zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_list2976z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2896z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_z62consz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_list2979z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_z62setzd2cerz12za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_eappendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
extern obj_t BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62cadarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62listzd2splitz12za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_cdddarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_z62eappendz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62eappendzd22zb0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_list2980z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2981z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2982z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2983z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__deletez12z12zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list2989z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_cddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_cdaaarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_z62listzd2tailzb0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_cadadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_z62treezd2copyzb0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62reversez12z70zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62cdadarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62listzd2tabulatezb0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62cadddrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62listzd2copyzb0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_consz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_setzd2carz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list2993z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_cdadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_z62econsz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62findzd2tailzb0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62caaadrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
extern bool_t BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_eappendzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762eappendza762za7za7_3025z00, va_generic_entry, BGl_z62eappendz62zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_eappendzd22zd2envz00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762eappendza7d22za7b3026za7, BGl_z62eappendzd22zb0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3010z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3010za700za7za7_3027za7, "&list-split!", 12 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_anyzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762anyza762za7za7__r4_3028z00, va_generic_entry, BGl_z62anyz62zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string3011z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3011za700za7za7_3029za7, "iota", 4 );
DEFINE_STRING( BGl_string3012z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3012za700za7za7_3030za7, "&iota", 5 );
DEFINE_STRING( BGl_string3013z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3013za700za7za7_3031za7, "list-copy", 9 );
DEFINE_STRING( BGl_string3014z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3014za700za7za7_3032za7, "&list-copy", 10 );
DEFINE_STRING( BGl_string3015z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3015za700za7za7_3033za7, "tree-copy", 9 );
DEFINE_STRING( BGl_string3017z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3017za700za7za7_3034za7, "delete-duplicates", 17 );
DEFINE_STRING( BGl_string3018z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3018za700za7za7_3035za7, "wrong number of arguments: [1..2] expected, provided", 52 );
DEFINE_STRING( BGl_string3019z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3019za700za7za7_3036za7, "_delete-duplicates", 18 );
DEFINE_STRING( BGl_string2921z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2921za700za7za7_3037za7, "arg1573", 7 );
DEFINE_STRING( BGl_string2760z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2760za700za7za7_3038za7, "delete!", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_lastzd2pairzd2envz00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762lastza7d2pairza7b3039za7, BGl_z62lastzd2pairzb0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2842z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2842za700za7za7_3040za7, "$cdr", 4 );
DEFINE_STRING( BGl_string2761z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2761za700za7za7_3041za7, "_delete!", 8 );
DEFINE_STRING( BGl_string2680z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2680za700za7za7_3042za7, "caddar", 6 );
DEFINE_STRING( BGl_string2762z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2762za700za7za7_3043za7, "laap", 4 );
DEFINE_STRING( BGl_string2681z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2681za700za7za7_3044za7, "&caddar", 7 );
DEFINE_STRING( BGl_string2763z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2763za700za7za7_3045za7, "laap:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string2682z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2682za700za7za7_3046za7, "cadadr", 6 );
DEFINE_STRING( BGl_string2845z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2845za700za7za7_3047za7, "labels", 6 );
DEFINE_STRING( BGl_string2683z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2683za700za7za7_3048za7, "&cadadr", 7 );
DEFINE_STRING( BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2684za700za7za7_3049za7, "cadddr", 6 );
DEFINE_STRING( BGl_string2766z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2766za700za7za7_3050za7, "arg1493", 7 );
DEFINE_STRING( BGl_string2685z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2685za700za7za7_3051za7, "&cadddr", 7 );
DEFINE_STRING( BGl_string2767z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2767za700za7za7_3052za7, "loop:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2686za700za7za7_3053za7, "cdaadr", 6 );
DEFINE_STRING( BGl_string2687z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2687za700za7za7_3054za7, "&cdaadr", 7 );
DEFINE_STRING( BGl_string2688z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2688za700za7za7_3055za7, "cdaddr", 6 );
DEFINE_STRING( BGl_string2689z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2689za700za7za7_3056za7, "&cdaddr", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzf3zd2envz21zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762listza7f3za791za7za7_3057za7, BGl_z62listzf3z91zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_caadrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762caadrza762za7za7__r3058z00, BGl_z62caadrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_treezd2copyzd2envz00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762treeza7d2copyza7b3059za7, BGl_z62treezd2copyzb0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cddrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762cddrza762za7za7__r43060z00, BGl_z62cddrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cddadrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762cddadrza762za7za7__3061z00, BGl_z62cddadrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3021z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3021za700za7za7_3062za7, "delete-duplicates!", 18 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2copyzd2envz00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762listza7d2copyza7b3063za7, BGl_z62listzd2copyzb0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3022z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3022za700za7za7_3064za7, "_delete-duplicates!", 19 );
DEFINE_STRING( BGl_string3023z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3023za700za7za7_3065za7, "recur~0", 7 );
DEFINE_STRING( BGl_string3024z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3024za700za7za7_3066za7, "__r4_pairs_and_lists_6_3", 24 );
DEFINE_STRING( BGl_string2932z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2932za700za7za7_3067za7, "res1939", 7 );
DEFINE_STRING( BGl_string2851z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2851za700za7za7_3068za7, "tail1075", 8 );
DEFINE_STRING( BGl_string2770z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2770za700za7za7_3069za7, "arg1491", 7 );
DEFINE_STRING( BGl_string2771z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2771za700za7za7_3070za7, "cons*1~0", 8 );
DEFINE_STRING( BGl_string2690z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2690za700za7za7_3071za7, "cddaar", 6 );
DEFINE_STRING( BGl_string2772z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2772za700za7za7_3072za7, "nr", 2 );
DEFINE_STRING( BGl_string2691z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2691za700za7za7_3073za7, "&cddaar", 7 );
DEFINE_STRING( BGl_string2773z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2773za700za7za7_3074za7, "reverse!", 8 );
DEFINE_STRING( BGl_string2692z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2692za700za7za7_3075za7, "cddadr", 6 );
DEFINE_STRING( BGl_string2855z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2855za700za7za7_3076za7, "$pair?", 6 );
DEFINE_STRING( BGl_string2774z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2774za700za7za7_3077za7, "&reverse!", 9 );
DEFINE_STRING( BGl_string2693z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2693za700za7za7_3078za7, "&cddadr", 7 );
DEFINE_STRING( BGl_string2775z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2775za700za7za7_3079za7, "every", 5 );
DEFINE_STRING( BGl_string2694z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2694za700za7za7_3080za7, "cdadar", 6 );
DEFINE_STRING( BGl_string2938z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2938za700za7za7_3081za7, "g1089", 5 );
DEFINE_STRING( BGl_string2695z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2695za700za7za7_3082za7, "&cdadar", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_caaarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762caaarza762za7za7__r3083z00, BGl_z62caaarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2696z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2696za700za7za7_3084za7, "cdddar", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cdarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762cdarza762za7za7__r43085z00, BGl_z62cdarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2778z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2778za700za7za7_3086za7, "pred", 4 );
DEFINE_STRING( BGl_string2697z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2697za700za7za7_3087za7, "&cdddar", 7 );
DEFINE_STRING( BGl_string2698z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2698za700za7za7_3088za7, "cddddr", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762listza762za7za7__r43089z00, va_generic_entry, BGl_z62listz62zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -1 );
DEFINE_STRING( BGl_string2699z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2699za700za7za7_3090za7, "&cddddr", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_findzd2tailzd2envz00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762findza7d2tailza7b3091za7, BGl_z62findzd2tailzb0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cddaarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762cddaarza762za7za7__3092z00, BGl_z62cddaarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_pairzf3zd2envz21zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762pairza7f3za791za7za7_3093za7, BGl_z62pairzf3z91zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2860z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2860za700za7za7_3094za7, "newtail1076", 11 );
DEFINE_STRING( BGl_string2780z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2780za700za7za7_3095za7, "arg1518", 7 );
DEFINE_STRING( BGl_string2781z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2781za700za7za7_3096za7, "<@anonymous:1532>", 17 );
DEFINE_STRING( BGl_string2782z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2782za700za7za7_3097za7, "map", 3 );
DEFINE_STRING( BGl_string2946z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2946za700za7za7_3098za7, "tail1087", 8 );
DEFINE_STRING( BGl_string2865z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2865za700za7za7_3099za7, "arg1535", 7 );
DEFINE_STRING( BGl_string2784z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2784za700za7za7_3100za7, "Wrong number of arguments", 25 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cerzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762cerza762za7za7__r4_3101z00, BGl_z62cerz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2787z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2787za700za7za7_3102za7, "apply", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_nullzf3zd2envz21zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762nullza7f3za791za7za7_3103za7, BGl_z62nullzf3z91zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_caddrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762caddrza762za7za7__r3104z00, BGl_z62caddrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cddddrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762cddddrza762za7za7__3105z00, BGl_z62cddddrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_pairzd2orzd2nullzf3zd2envz21zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762pairza7d2orza7d2n3106za7, BGl_z62pairzd2orzd2nullzf3z91zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2listzd2envz00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762makeza7d2listza7b3107za7, va_generic_entry, BGl_z62makezd2listzb0zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string2790z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2790za700za7za7_3108za7, "let", 3 );
DEFINE_STRING( BGl_string2953z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2953za700za7za7_3109za7, "newtail1088", 11 );
DEFINE_STRING( BGl_string2874z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2874za700za7za7_3110za7, "res1927", 7 );
DEFINE_STRING( BGl_string2794z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2794za700za7za7_3111za7, "l1072", 5 );
DEFINE_STRING( BGl_string2958z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2958za700za7za7_3112za7, "arg1569", 7 );
DEFINE_STRING( BGl_string2796z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2796za700za7za7_3113za7, "l", 1 );
DEFINE_STRING( BGl_string2878z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2878za700za7za7_3114za7, "begin", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cadarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762cadarza762za7za7__r3115z00, BGl_z62cadarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2799z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2799za700za7za7_3116za7, "if", 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_caaadrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762caaadrza762za7za7__3117z00, BGl_z62caaadrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cdddarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762cdddarza762za7za7__3118z00, BGl_z62cdddarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ereversezd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762ereverseza762za7za73119z00, BGl_z62ereversez62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_assqzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762assqza762za7za7__r43120z00, BGl_z62assqz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2884z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2884za700za7za7_3121za7, "$set-cdr!", 9 );
DEFINE_STRING( BGl_string2967z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2967za700za7za7_3122za7, "res1941", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_deletezd2duplicateszd2envz00zz__r4_pairs_and_lists_6_3z00, BgL_bgl__deleteza7d2duplic3123za7, opt_generic_entry, BGl__deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_caaaarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762caaaarza762za7za7__3124z00, BGl_z62caaaarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2889z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2889za700za7za7_3125za7, "arg1534", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_reversezd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762reverseza762za7za7_3126z00, BGl_z62reversez62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2tabulatezd2envz00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762listza7d2tabula3127z00, BGl_z62listzd2tabulatezb0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_takezd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762takeza762za7za7__r43128z00, BGl_z62takez62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_setzd2cerz12zd2envz12zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762setza7d2cerza712za73129z00, BGl_z62setzd2cerz12za2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_appendzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762appendza762za7za7__3130z00, va_generic_entry, BGl_z62appendz62zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -1 );
DEFINE_STRING( BGl_string2895z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2895za700za7za7_3131za7, "bigloo-type-error/location", 26 );
DEFINE_STRING( BGl_string2978z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2978za700za7za7_3132za7, "arg1568", 7 );
DEFINE_STRING( BGl_string2897z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2897za700za7za7_3133za7, "<@anonymous:1522>", 17 );
DEFINE_STRING( BGl_string2898z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2898za700za7za7_3134za7, "&every", 6 );
DEFINE_STRING( BGl_string2899z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2899za700za7za7_3135za7, "any", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cdadrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762cdadrza762za7za7__r3136z00, BGl_z62cdadrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_caaddrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762caaddrza762za7za7__3137z00, BGl_z62caaddrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_memqzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762memqza762za7za7__r43138z00, BGl_z62memqz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2984z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2984za700za7za7_3139za7, "<@anonymous:1556>", 17 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_assoczd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762assocza762za7za7__r3140z00, BGl_z62assocz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2985z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2985za700za7za7_3141za7, "&any", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2setz12zd2envz12zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762listza7d2setza7123142za7, BGl_z62listzd2setz12za2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string2986z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2986za700za7za7_3143za7, "find", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cdaarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762cdaarza762za7za7__r3144z00, BGl_z62cdaarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2987z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2987za700za7za7_3145za7, "&find", 5 );
DEFINE_STRING( BGl_string2988z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2988za700za7za7_3146za7, "lp:Wrong number of arguments", 28 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_caadarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762caadarza762za7za7__3147z00, BGl_z62caadarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_epairzf3zd2envz21zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762epairza7f3za791za7za73148za7, BGl_z62epairzf3z91zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2991z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2991za700za7za7_3149za7, "arg1583", 7 );
DEFINE_STRING( BGl_string2992z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2992za700za7za7_3150za7, "&find-tail", 10 );
DEFINE_STRING( BGl_string2995z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2995za700za7za7_3151za7, "f", 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_appendz12zd2envzc0zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762appendza712za770za73152z00, va_generic_entry, BGl_z62appendz12z70zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -1 );
DEFINE_STRING( BGl_string2997z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2997za700za7za7_3153za7, "arg1589", 7 );
DEFINE_STRING( BGl_string2999z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2999za700za7za7_3154za7, "ans", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cdddrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762cdddrza762za7za7__r3155z00, BGl_z62cdddrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_remqz12zd2envzc0zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762remqza712za770za7za7_3156za7, BGl_z62remqz12z70zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_assvzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762assvza762za7za7__r43157z00, BGl_z62assvz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cddarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762cddarza762za7za7__r3158z00, BGl_z62cddarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cadadrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762cadadrza762za7za7__3159z00, BGl_z62cadadrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2refzd2envz00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762listza7d2refza7b03160za7, BGl_z62listzd2refzb0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_iotazd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762iotaza762za7za7__r43161z00, va_generic_entry, BGl_z62iotaz62zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762consza762za7za7__r43162z00, BGl_z62consz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_remqzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762remqza762za7za7__r43163z00, BGl_z62remqz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_econszd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762econsza762za7za7__r3164z00, BGl_z62econsz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cadaarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762cadaarza762za7za7__3165z00, BGl_z62cadaarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2700z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2700za700za7za7_3166za7, "&set-car!", 9 );
DEFINE_STRING( BGl_string2701z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2701za700za7za7_3167za7, "&set-cdr!", 9 );
DEFINE_STRING( BGl_string2702z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2702za700za7za7_3168za7, "&set-cer!", 9 );
DEFINE_STRING( BGl_string2703z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2703za700za7za7_3169za7, "list", 4 );
DEFINE_STRING( BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2704za700za7za7_3170za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string2705z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2705za700za7za7_3171za7, "l2", 2 );
DEFINE_STRING( BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2706za700za7za7_3172za7, "loop", 4 );
DEFINE_STRING( BGl_string2707z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2707za700za7za7_3173za7, "&append-2", 9 );
DEFINE_STRING( BGl_string2708z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2708za700za7za7_3174za7, "eappend-2", 9 );
DEFINE_STRING( BGl_string2709z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2709za700za7za7_3175za7, "&eappend-2", 10 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_memvzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762memvza762za7za7__r43176z00, BGl_z62memvz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_consza2zd2envz70zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762consza7a2za7c0za7za7_3177za7, va_generic_entry, BGl_z62consza2zc0zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_reversez12zd2envzc0zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762reverseza712za7703178za7, BGl_z62reversez12z70zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cadddrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762cadddrza762za7za7__3179z00, BGl_z62cadddrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2710z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2710za700za7za7_3180za7, "append-list~2", 13 );
DEFINE_STRING( BGl_string2711z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2711za700za7za7_3181za7, "case_else1012", 13 );
DEFINE_STRING( BGl_string2712z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2712za700za7za7_3182za7, "append-list~1", 13 );
DEFINE_STRING( BGl_string2713z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2713za700za7za7_3183za7, "case_else1014", 13 );
DEFINE_STRING( BGl_string2714z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2714za700za7za7_3184za7, "append!", 7 );
DEFINE_STRING( BGl_string2715z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2715za700za7za7_3185za7, "append-list~0", 13 );
DEFINE_STRING( BGl_string2716z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2716za700za7za7_3186za7, "case_else1016", 13 );
DEFINE_STRING( BGl_string2717z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2717za700za7za7_3187za7, "do-loop--1018", 13 );
DEFINE_STRING( BGl_string2718z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2718za700za7za7_3188za7, "&append-2!", 10 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dropzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762dropza762za7za7__r43189z00, BGl_z62dropz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2719z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2719za700za7za7_3190za7, "&length", 7 );
DEFINE_STRING( BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2638za700za7za7_3191za7, "/tmp/4.4a/runtime/Ieee/pairlist.scm", 35 );
DEFINE_STRING( BGl_string2639z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2639za700za7za7_3192za7, "&car", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_deletez12zd2envzc0zz__r4_pairs_and_lists_6_3z00, BgL_bgl__deleteza712za712za7za7_3193z00, opt_generic_entry, BGl__deletez12z12zz__r4_pairs_and_lists_6_3z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_appendzd22zd2envz00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762appendza7d22za7b03194za7, BGl_z62appendzd22zb0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2splitz12zd2envz12zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762listza7d2splitza73195za7, va_generic_entry, BGl_z62listzd2splitz12za2zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cdaadrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762cdaadrza762za7za7__3196z00, BGl_z62cdaadrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_caddarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762caddarza762za7za7__3197z00, BGl_z62caddarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2720z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2720za700za7za7_3198za7, "&reverse", 8 );
DEFINE_STRING( BGl_string2802z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2802za700za7za7_3199za7, "$null?", 6 );
DEFINE_STRING( BGl_string2721z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2721za700za7za7_3200za7, "&ereverse", 9 );
DEFINE_STRING( BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2640za700za7za7_3201za7, "pair", 4 );
DEFINE_STRING( BGl_string2722z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2722za700za7za7_3202za7, "&take", 5 );
DEFINE_STRING( BGl_string2641z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2641za700za7za7_3203za7, "&cdr", 4 );
DEFINE_STRING( BGl_string2723z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2723za700za7za7_3204za7, "bint", 4 );
DEFINE_STRING( BGl_string2642z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2642za700za7za7_3205za7, "&cer", 4 );
DEFINE_STRING( BGl_string2805z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2805za700za7za7_3206za7, "quote", 5 );
DEFINE_STRING( BGl_string2724z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2724za700za7za7_3207za7, "drop", 4 );
DEFINE_STRING( BGl_string2643z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2643za700za7za7_3208za7, "epair", 5 );
DEFINE_STRING( BGl_string2725z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2725za700za7za7_3209za7, "&drop", 5 );
DEFINE_STRING( BGl_string2644z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2644za700za7za7_3210za7, "caar", 4 );
DEFINE_STRING( BGl_string2726z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2726za700za7za7_3211za7, "&list-tail", 10 );
DEFINE_STRING( BGl_string2645z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2645za700za7za7_3212za7, "&caar", 5 );
DEFINE_STRING( BGl_string2727z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2727za700za7za7_3213za7, "list-ref", 8 );
DEFINE_STRING( BGl_string2646z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2646za700za7za7_3214za7, "cadr", 4 );
DEFINE_STRING( BGl_string2728z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2728za700za7za7_3215za7, "&list-ref", 9 );
DEFINE_STRING( BGl_string2647z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2647za700za7za7_3216za7, "&cadr", 5 );
DEFINE_STRING( BGl_string2729z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2729za700za7za7_3217za7, "list-set!", 9 );
DEFINE_STRING( BGl_string2648z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2648za700za7za7_3218za7, "cdar", 4 );
DEFINE_STRING( BGl_string2649z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2649za700za7za7_3219za7, "&cdar", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2tailzd2envz00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762listza7d2tailza7b3220za7, BGl_z62listzd2tailzb0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2splitzd2envz00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762listza7d2splitza73221za7, va_generic_entry, BGl_z62listzd2splitzb0zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_deletezd2duplicatesz12zd2envz12zz__r4_pairs_and_lists_6_3z00, BgL_bgl__deleteza7d2duplic3222za7, opt_generic_entry, BGl__deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_appendzd22z12zd2envz12zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762appendza7d22za7123223za7, BGl_z62appendzd22z12za2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cdaaarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762cdaaarza762za7za7__3224z00, BGl_z62cdaaarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_lengthzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762lengthza762za7za7__3225z00, BGl_z62lengthz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2810z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2810za700za7za7_3226za7, "head1074", 8 );
DEFINE_STRING( BGl_string2730z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2730za700za7za7_3227za7, "&list-set!", 10 );
DEFINE_STRING( BGl_string2731z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2731za700za7za7_3228za7, "last-pair", 9 );
DEFINE_STRING( BGl_string2650z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2650za700za7za7_3229za7, "cddr", 4 );
DEFINE_STRING( BGl_string2732z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2732za700za7za7_3230za7, "&last-pair", 10 );
DEFINE_STRING( BGl_string2651z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2651za700za7za7_3231za7, "&cddr", 5 );
DEFINE_STRING( BGl_string2733z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2733za700za7za7_3232za7, "&memq", 5 );
DEFINE_STRING( BGl_string2652z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2652za700za7za7_3233za7, "caaar", 5 );
DEFINE_STRING( BGl_string2815z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2815za700za7za7_3234za7, "arg1540", 7 );
DEFINE_STRING( BGl_string2734z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2734za700za7za7_3235za7, "&memv", 5 );
DEFINE_STRING( BGl_string2653z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2653za700za7za7_3236za7, "&caaar", 6 );
DEFINE_STRING( BGl_string2735z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2735za700za7za7_3237za7, "&member", 7 );
DEFINE_STRING( BGl_string2654z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2654za700za7za7_3238za7, "caadr", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_setzd2carz12zd2envz12zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762setza7d2carza712za73239z00, BGl_z62setzd2carz12za2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2736z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2736za700za7za7_3240za7, "&assq", 5 );
DEFINE_STRING( BGl_string2655z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2655za700za7za7_3241za7, "&caadr", 6 );
DEFINE_STRING( BGl_string2737z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2737za700za7za7_3242za7, "&assv", 5 );
DEFINE_STRING( BGl_string2656z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2656za700za7za7_3243za7, "cadar", 5 );
DEFINE_STRING( BGl_string2738z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2738za700za7za7_3244za7, "&assoc", 6 );
DEFINE_STRING( BGl_string2657z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2657za700za7za7_3245za7, "&cadar", 6 );
DEFINE_STRING( BGl_string2739z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2739za700za7za7_3246za7, "remq", 4 );
DEFINE_STRING( BGl_string2658z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2658za700za7za7_3247za7, "caddr", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762cdrza762za7za7__r4_3248z00, BGl_z62cdrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2659z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2659za700za7za7_3249za7, "&caddr", 6 );
extern obj_t BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_memberzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762memberza762za7za7__3250z00, BGl_z62memberz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_findzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762findza762za7za7__r43251z00, BGl_z62findz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cdaddrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762cdaddrza762za7za7__3252z00, BGl_z62cdaddrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2902z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2902za700za7za7_3253za7, "arg1552", 7 );
DEFINE_STRING( BGl_string2740z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2740za700za7za7_3254za7, "&remq", 5 );
DEFINE_STRING( BGl_string2903z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2903za700za7za7_3255za7, "<@anonymous:1566>", 17 );
DEFINE_STRING( BGl_string2741z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2741za700za7za7_3256za7, "remq!", 5 );
DEFINE_STRING( BGl_string2660z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2660za700za7za7_3257za7, "cdaar", 5 );
DEFINE_STRING( BGl_string2742z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2742za700za7za7_3258za7, "&remq!", 6 );
DEFINE_STRING( BGl_string2661z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2661za700za7za7_3259za7, "&cdaar", 6 );
DEFINE_STRING( BGl_string2662z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2662za700za7za7_3260za7, "cddar", 5 );
DEFINE_STRING( BGl_string2825z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2825za700za7za7_3261za7, "$car", 4 );
DEFINE_STRING( BGl_string2744z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2744za700za7za7_3262za7, "delete", 6 );
DEFINE_STRING( BGl_string2663z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2663za700za7za7_3263za7, "&cddar", 6 );
DEFINE_STRING( BGl_string2745z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2745za700za7za7_3264za7, "wrong number of arguments: [2..3] expected, provided", 52 );
DEFINE_STRING( BGl_string2664z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2664za700za7za7_3265za7, "cdadr", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_deletezd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__deleteza700za7za7__r43266za7, opt_generic_entry, BGl__deletez00zz__r4_pairs_and_lists_6_3z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762carza762za7za7__r4_3267z00, BGl_z62carz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2746z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2746za700za7za7_3268za7, "_delete", 7 );
DEFINE_STRING( BGl_string2665z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2665za700za7za7_3269za7, "&cdadr", 6 );
DEFINE_STRING( BGl_string2909z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2909za700za7za7_3270za7, "l1084", 5 );
DEFINE_STRING( BGl_string2747z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2747za700za7za7_3271za7, "loop~0", 6 );
DEFINE_STRING( BGl_string2666z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2666za700za7za7_3272za7, "cdddr", 5 );
DEFINE_STRING( BGl_string2748z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2748za700za7za7_3273za7, "procedure", 9 );
DEFINE_STRING( BGl_string2667z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2667za700za7za7_3274za7, "&cdddr", 6 );
DEFINE_STRING( BGl_string2749z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2749za700za7za7_3275za7, "loop~0:Wrong number of arguments", 32 );
DEFINE_STRING( BGl_string2668z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2668za700za7za7_3276za7, "caaaar", 6 );
DEFINE_STRING( BGl_string2669z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2669za700za7za7_3277za7, "&caaaar", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cadrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762cadrza762za7za7__r43278z00, BGl_z62cadrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cdadarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762cdadarza762za7za7__3279z00, BGl_z62cdadarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3000z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3000za700za7za7_3280za7, "&reduce", 7 );
DEFINE_STRING( BGl_string3001z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3001za700za7za7_3281za7, "&make-list", 10 );
DEFINE_STRING( BGl_string3002z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3002za700za7za7_3282za7, "walk:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string3005z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3005za700za7za7_3283za7, "init-proc", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_everyzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762everyza762za7za7__r3284z00, va_generic_entry, BGl_z62everyz62zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string3007z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3007za700za7za7_3285za7, "i", 1 );
DEFINE_STRING( BGl_string3008z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3008za700za7za7_3286za7, "&list-tabulate", 14 );
DEFINE_STRING( BGl_string3009z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3009za700za7za7_3287za7, "&list-split", 11 );
DEFINE_STRING( BGl_string2830z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2830za700za7za7_3288za7, "res1925", 7 );
DEFINE_STRING( BGl_string2670z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2670za700za7za7_3289za7, "caaadr", 6 );
DEFINE_STRING( BGl_string2833z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2833za700za7za7_3290za7, "$cons", 5 );
DEFINE_STRING( BGl_string2752z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2752za700za7za7_3291za7, "funcall", 7 );
DEFINE_STRING( BGl_string2671z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2671za700za7za7_3292za7, "&caaadr", 7 );
DEFINE_STRING( BGl_string2672z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2672za700za7za7_3293za7, "caadar", 6 );
DEFINE_STRING( BGl_string2916z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2916za700za7za7_3294za7, "head1086", 8 );
DEFINE_STRING( BGl_string2754z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2754za700za7za7_3295za7, "eq", 2 );
DEFINE_STRING( BGl_string2673z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2673za700za7za7_3296za7, "&caadar", 7 );
DEFINE_STRING( BGl_string2674z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2674za700za7za7_3297za7, "cadaar", 6 );
DEFINE_STRING( BGl_string2756z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2756za700za7za7_3298za7, "x", 1 );
DEFINE_STRING( BGl_string2675z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2675za700za7za7_3299za7, "&cadaar", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_setzd2cdrz12zd2envz12zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762setza7d2cdrza712za73300z00, BGl_z62setzd2cdrz12za2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_caarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762caarza762za7za7__r43301z00, BGl_z62caarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2838z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2838za700za7za7_3302za7, "g1077", 5 );
DEFINE_STRING( BGl_string2676z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2676za700za7za7_3303za7, "cdaaar", 6 );
DEFINE_STRING( BGl_string2758z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2758za700za7za7_3304za7, "arg1472", 7 );
DEFINE_STRING( BGl_string2677z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2677za700za7za7_3305za7, "&cdaaar", 7 );
DEFINE_STRING( BGl_string2678z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2678za700za7za7_3306za7, "caaddr", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_reducezd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl_za762reduceza762za7za7__3307z00, BGl_z62reducez62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string2679z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2679za700za7za7_3308za7, "&caaddr", 7 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2804z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2809z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2814z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2819z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2901z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2824z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2743z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2908z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2829z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3004z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3006z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2800z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2832z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2751z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2915z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2803z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2753z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2755z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2837z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2806z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2807z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2757z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2808z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2759z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3016z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2920z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2841z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2811z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2812z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2844z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2813z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2765z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2816z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2848z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2817z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2818z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2769z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3020z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2931z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2900z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2850z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2820z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2821z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2822z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2904z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2854z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2823z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2905z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2937z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2906z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2907z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2826z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2827z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2777z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2859z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2828z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2779z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list3003z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2910z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2911z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2943z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2912z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2831z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2750z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2913z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2945z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2914z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2864z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2783z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2834z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2835z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2917z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2836z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2786z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2918z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2919z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2839z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2952z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2840z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2922z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2923z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2873z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2924z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2843z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2793z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2925z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2957z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2926z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2795z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2764z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2927z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2877z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2846z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2928z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2847z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2929z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2798z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2849z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2768z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2930z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2933z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2883z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2852z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2934z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2853z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2966z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2935z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2936z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2856z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2888z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2857z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2776z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2939z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2858z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2940z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2941z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2942z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2861z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2862z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2944z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2894z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2863z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2977z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2947z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2866z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2785z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2948z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2867z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2949z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2868z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2869z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2788z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2950z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2951z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2870z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2871z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2872z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2791z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2954z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2792z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2955z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2956z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2875z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2876z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2959z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2797z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2879z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2990z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2960z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2961z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2880z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2962z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2881z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2994z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2963z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2882z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2964z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2996z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2965z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2885z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2998z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2886z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2968z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2887z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2969z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2970z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2971z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2890z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2972z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2891z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2973z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2892z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2974z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2893z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2975z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2976z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2896z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2979z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2980z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2981z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2982z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2983z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2989z00zz__r4_pairs_and_lists_6_3z00) );
ADD_ROOT( (void *)(&BGl_list2993z00zz__r4_pairs_and_lists_6_3z00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long BgL_checksumz00_3435, char * BgL_fromz00_3436)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00))
{ 
BGl_requirezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__r4_pairs_and_lists_6_3z00(); 
BGl_cnstzd2initzd2zz__r4_pairs_and_lists_6_3z00(); 
return 
BGl_importedzd2moduleszd2initz00zz__r4_pairs_and_lists_6_3z00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__r4_pairs_and_lists_6_3z00()
{
{ /* Ieee/pairlist.scm 18 */
BGl_symbol2743z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2744z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2751z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2752z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2753z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2754z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2755z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2756z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2757z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2758z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2750z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2751z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2753z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2753z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2755z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2757z00zz__r4_pairs_and_lists_6_3z00, BNIL))))); 
BGl_symbol2759z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2760z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2765z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2766z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2764z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2751z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2753z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2753z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2755z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2765z00zz__r4_pairs_and_lists_6_3z00, BNIL))))); 
BGl_symbol2769z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2770z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2768z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2751z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2753z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2753z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2769z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2755z00zz__r4_pairs_and_lists_6_3z00, BNIL))))); 
BGl_symbol2777z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2778z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2779z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2780z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2776z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2751z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2777z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2777z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2779z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_symbol2783z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2706z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2786z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2787z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2790z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2793z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2794z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2795z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2796z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2792z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2793z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2795z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2791z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2792z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_symbol2798z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2799z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2802z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2800z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2793z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol2804z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2805z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2803z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2804z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BNIL, BNIL)); 
BGl_symbol2809z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2810z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2814z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2815z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2819z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2640z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2822z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2819z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2793z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2821z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2822z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_symbol2824z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2825z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2823z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2824z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2819z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2820z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2821z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2823z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2818z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2819z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2820z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2817z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2818z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2816z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2817z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2823z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2813z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2814z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2816z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2812z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2813z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_symbol2829z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2830z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2832z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2833z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2831z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2832z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2814z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2803z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2828z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2829z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2831z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2827z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2828z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2826z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2827z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2829z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2811z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2812z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2826z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2808z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2809z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2811z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2807z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2808z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_symbol2837z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2838z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2841z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2842z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2840z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2841z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2819z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2839z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2821z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2840z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2836z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2837z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2839z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2835z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2836z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_symbol2844z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2845z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2848z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2781z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2850z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2851z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2849z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2793z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2850z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol2854z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2855z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2853z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2854z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2793z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol2859z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2860z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2864z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2865z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2869z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2824z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2793z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2868z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2819z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2869z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2867z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2868z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2866z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2867z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2823z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2863z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2864z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2866z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2862z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2863z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_symbol2873z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2874z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2875z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2832z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2864z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2803z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2872z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2873z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2875z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2871z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2872z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2870z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2871z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2873z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2861z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2862z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2870z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2858z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2859z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2861z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2857z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2858z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_symbol2877z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2878z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2881z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2819z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2850z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2880z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2881z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_symbol2883z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2884z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2882z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2883z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2819z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2859z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2879z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2880z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2882z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_symbol2888z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2889z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2890z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2841z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2793z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2887z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2888z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2890z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2886z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2887z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2891z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2848z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2888z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2859z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2885z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2886z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2891z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2876z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2877z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2879z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2885z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2856z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2857z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2876z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_symbol2894z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2895z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2893z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2894z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_string2782z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_string2703z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2793z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(
BINT(((long)32233)), BNIL)))))); 
BGl_list2892z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2798z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2800z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2809z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2893z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_list2852z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2798z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2853z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2856z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2892z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_list2847z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2848z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2849z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2852z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2846z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2847z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2896z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2848z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2837z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2809z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2843z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2844z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2846z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2896z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2834z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2835z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2843z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2806z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2807z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2834z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2797z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2798z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2800z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2803z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2806z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_list2788z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2791z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2797z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2785z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2786z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2777z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2788z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_symbol2901z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2902z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2900z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2751z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2777z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2777z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2901z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_symbol2908z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2909z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2907z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2908z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2795z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2906z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2907z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2911z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2908z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol2915z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2916z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2920z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2921z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2927z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2819z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2908z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2926z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2927z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2925z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2926z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2823z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2924z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2819z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2925z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2923z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2924z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2922z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2923z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2823z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2919z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2920z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2922z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2918z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2919z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_symbol2931z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2932z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2933z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2832z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2920z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2803z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2930z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2931z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2933z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2929z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2930z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2928z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2929z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2931z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2917z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2918z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2928z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2914z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2915z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2917z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2913z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2914z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_symbol2937z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2938z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2939z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2926z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2840z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2936z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2937z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2939z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2935z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2936z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_symbol2943z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2903z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2945z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2946z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2944z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2908z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2945z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2948z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2854z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2908z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol2952z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2953z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2957z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2958z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2962z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2824z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2908z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2961z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2819z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2962z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2960z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2961z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2959z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2960z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2823z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2956z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2957z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2959z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2955z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2956z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_symbol2966z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2967z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2968z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2832z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2957z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2803z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2965z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2966z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2968z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2964z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2965z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2963z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2964z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2966z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2954z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2955z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2963z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2951z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2952z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2954z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2950z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2951z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2972z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2819z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2945z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2971z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2972z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2973z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2883z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2819z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2952z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2970z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2971z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2973z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_symbol2977z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2978z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2979z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2841z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2908z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2976z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2977z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2979z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2975z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2976z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2980z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2943z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2977z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2952z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2974z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2975z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2980z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2969z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2877z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2970z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2974z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2949z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2950z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2969z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2982z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2894z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_string2782z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_string2703z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2908z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(
BINT(((long)32757)), BNIL)))))); 
BGl_list2981z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2798z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2911z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2915z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2982z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_list2947z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2798z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2948z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2949z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2981z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_list2942z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2943z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2944z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2947z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2941z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_list2942z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2983z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2943z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2937z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2915z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2940z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2844z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2941z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2983z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2934z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2935z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2940z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2912z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2913z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2934z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2910z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2798z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2911z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2803z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2912z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_list2905z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2906z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2910z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2904z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2786z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2777z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_list2905z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_symbol2990z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2991z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2989z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2751z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2777z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2777z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2990z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_symbol2994z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2995z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2996z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2997z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2998z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2999z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2993z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2751z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2994z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2994z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2996z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol2998z00zz__r4_pairs_and_lists_6_3z00, BNIL))))); 
BGl_symbol3004z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3005z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol3006z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3007z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list3003z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2751z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3004z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3004z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3006z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_symbol3016z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3017z00zz__r4_pairs_and_lists_6_3z00); 
return ( 
BGl_symbol3020z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3021z00zz__r4_pairs_and_lists_6_3z00), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__r4_pairs_and_lists_6_3z00()
{
{ /* Ieee/pairlist.scm 18 */
return 
bgl_gc_roots_register();} 

}



/* append-21011 */
obj_t BGl_appendzd221011zd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
{
{ 
{ 
obj_t BgL_headz00_785;
BgL_headz00_785 = 
MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2); 
{ 
obj_t BgL_prevz00_786;obj_t BgL_tailz00_787;
BgL_prevz00_786 = BgL_headz00_785; 
BgL_tailz00_787 = BgL_l1z00_1; 
BgL_loopz00_788:
if(
PAIRP(BgL_tailz00_787))
{ 
obj_t BgL_newzd2prevzd2_790;
BgL_newzd2prevzd2_790 = 
MAKE_YOUNG_PAIR(
CAR(BgL_tailz00_787), BgL_l2z00_2); 
SET_CDR(BgL_prevz00_786, BgL_newzd2prevzd2_790); 
{ 
obj_t BgL_tailz00_3826;obj_t BgL_prevz00_3825;
BgL_prevz00_3825 = BgL_newzd2prevzd2_790; 
BgL_tailz00_3826 = 
CDR(BgL_tailz00_787); 
BgL_tailz00_787 = BgL_tailz00_3826; 
BgL_prevz00_786 = BgL_prevz00_3825; 
goto BgL_loopz00_788;} }  else 
{ BNIL; } 
return 
CDR(BgL_headz00_785);} } } 

}



/* pair? */
BGL_EXPORTED_DEF bool_t BGl_pairzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_objz00_3)
{
{ /* Ieee/pairlist.scm 213 */
return 
PAIRP(BgL_objz00_3);} 

}



/* &pair? */
obj_t BGl_z62pairzf3z91zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2465, obj_t BgL_objz00_2466)
{
{ /* Ieee/pairlist.scm 213 */
return 
BBOOL(
BGl_pairzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_objz00_2466));} 

}



/* epair? */
BGL_EXPORTED_DEF bool_t BGl_epairzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_objz00_4)
{
{ /* Ieee/pairlist.scm 219 */
return 
EPAIRP(BgL_objz00_4);} 

}



/* &epair? */
obj_t BGl_z62epairzf3z91zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2467, obj_t BgL_objz00_2468)
{
{ /* Ieee/pairlist.scm 219 */
return 
BBOOL(
BGl_epairzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_objz00_2468));} 

}



/* pair-or-null? */
BGL_EXPORTED_DEF bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_objz00_5)
{
{ /* Ieee/pairlist.scm 225 */
if(
PAIRP(BgL_objz00_5))
{ /* Ieee/pairlist.scm 226 */
return ((bool_t)1);}  else 
{ /* Ieee/pairlist.scm 226 */
return 
NULLP(BgL_objz00_5);} } 

}



/* &pair-or-null? */
obj_t BGl_z62pairzd2orzd2nullzf3z91zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2469, obj_t BgL_objz00_2470)
{
{ /* Ieee/pairlist.scm 225 */
return 
BBOOL(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_objz00_2470));} 

}



/* cons */
BGL_EXPORTED_DEF obj_t BGl_consz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_obj1z00_6, obj_t BgL_obj2z00_7)
{
{ /* Ieee/pairlist.scm 233 */
return 
MAKE_YOUNG_PAIR(BgL_obj1z00_6, BgL_obj2z00_7);} 

}



/* &cons */
obj_t BGl_z62consz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2471, obj_t BgL_obj1z00_2472, obj_t BgL_obj2z00_2473)
{
{ /* Ieee/pairlist.scm 233 */
return 
BGl_consz00zz__r4_pairs_and_lists_6_3z00(BgL_obj1z00_2472, BgL_obj2z00_2473);} 

}



/* econs */
BGL_EXPORTED_DEF obj_t BGl_econsz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_obj1z00_8, obj_t BgL_obj2z00_9, obj_t BgL_obj3z00_10)
{
{ /* Ieee/pairlist.scm 239 */
return 
MAKE_YOUNG_EPAIR(BgL_obj1z00_8, BgL_obj2z00_9, BgL_obj3z00_10);} 

}



/* &econs */
obj_t BGl_z62econsz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2474, obj_t BgL_obj1z00_2475, obj_t BgL_obj2z00_2476, obj_t BgL_obj3z00_2477)
{
{ /* Ieee/pairlist.scm 239 */
return 
BGl_econsz00zz__r4_pairs_and_lists_6_3z00(BgL_obj1z00_2475, BgL_obj2z00_2476, BgL_obj3z00_2477);} 

}



/* car */
BGL_EXPORTED_DEF obj_t BGl_carz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_11)
{
{ /* Ieee/pairlist.scm 245 */
return 
CAR(BgL_pairz00_11);} 

}



/* &car */
obj_t BGl_z62carz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2478, obj_t BgL_pairz00_2479)
{
{ /* Ieee/pairlist.scm 245 */
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_auxz00_3845;
if(
PAIRP(BgL_pairz00_2479))
{ /* Ieee/pairlist.scm 246 */
BgL_auxz00_3845 = BgL_pairz00_2479
; }  else 
{ 
obj_t BgL_auxz00_3848;
BgL_auxz00_3848 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2639z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2479); 
FAILURE(BgL_auxz00_3848,BFALSE,BFALSE);} 
return 
BGl_carz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3845);} } 

}



/* cdr */
BGL_EXPORTED_DEF obj_t BGl_cdrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_12)
{
{ /* Ieee/pairlist.scm 251 */
return 
CDR(BgL_pairz00_12);} 

}



/* &cdr */
obj_t BGl_z62cdrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2480, obj_t BgL_pairz00_2481)
{
{ /* Ieee/pairlist.scm 251 */
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_auxz00_3854;
if(
PAIRP(BgL_pairz00_2481))
{ /* Ieee/pairlist.scm 252 */
BgL_auxz00_3854 = BgL_pairz00_2481
; }  else 
{ 
obj_t BgL_auxz00_3857;
BgL_auxz00_3857 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2641z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2481); 
FAILURE(BgL_auxz00_3857,BFALSE,BFALSE);} 
return 
BGl_cdrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3854);} } 

}



/* cer */
BGL_EXPORTED_DEF obj_t BGl_cerz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_objz00_13)
{
{ /* Ieee/pairlist.scm 257 */
return 
CER(BgL_objz00_13);} 

}



/* &cer */
obj_t BGl_z62cerz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2482, obj_t BgL_objz00_2483)
{
{ /* Ieee/pairlist.scm 257 */
{ /* Ieee/pairlist.scm 258 */
obj_t BgL_auxz00_3863;
if(
EPAIRP(BgL_objz00_2483))
{ /* Ieee/pairlist.scm 258 */
BgL_auxz00_3863 = BgL_objz00_2483
; }  else 
{ 
obj_t BgL_auxz00_3866;
BgL_auxz00_3866 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10272)), BGl_string2642z00zz__r4_pairs_and_lists_6_3z00, BGl_string2643z00zz__r4_pairs_and_lists_6_3z00, BgL_objz00_2483); 
FAILURE(BgL_auxz00_3866,BFALSE,BFALSE);} 
return 
BGl_cerz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3863);} } 

}



/* caar */
BGL_EXPORTED_DEF obj_t BGl_caarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_14)
{
{ /* Ieee/pairlist.scm 263 */
{ /* Ieee/pairlist.scm 264 */
obj_t BgL_pairz00_3299;
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2022z00_3300;
BgL_aux2022z00_3300 = 
CAR(BgL_pairz00_14); 
if(
PAIRP(BgL_aux2022z00_3300))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3299 = BgL_aux2022z00_3300; }  else 
{ 
obj_t BgL_auxz00_3874;
BgL_auxz00_3874 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2644z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2022z00_3300); 
FAILURE(BgL_auxz00_3874,BFALSE,BFALSE);} } 
return 
CAR(BgL_pairz00_3299);} } 

}



/* &caar */
obj_t BGl_z62caarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2484, obj_t BgL_pairz00_2485)
{
{ /* Ieee/pairlist.scm 263 */
{ /* Ieee/pairlist.scm 264 */
obj_t BgL_auxz00_3879;
if(
PAIRP(BgL_pairz00_2485))
{ /* Ieee/pairlist.scm 264 */
BgL_auxz00_3879 = BgL_pairz00_2485
; }  else 
{ 
obj_t BgL_auxz00_3882;
BgL_auxz00_3882 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10542)), BGl_string2645z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2485); 
FAILURE(BgL_auxz00_3882,BFALSE,BFALSE);} 
return 
BGl_caarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3879);} } 

}



/* cadr */
BGL_EXPORTED_DEF obj_t BGl_cadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_15)
{
{ /* Ieee/pairlist.scm 269 */
{ /* Ieee/pairlist.scm 270 */
obj_t BgL_pairz00_3301;
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2026z00_3302;
BgL_aux2026z00_3302 = 
CDR(BgL_pairz00_15); 
if(
PAIRP(BgL_aux2026z00_3302))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3301 = BgL_aux2026z00_3302; }  else 
{ 
obj_t BgL_auxz00_3890;
BgL_auxz00_3890 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2646z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2026z00_3302); 
FAILURE(BgL_auxz00_3890,BFALSE,BFALSE);} } 
return 
CAR(BgL_pairz00_3301);} } 

}



/* &cadr */
obj_t BGl_z62cadrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2486, obj_t BgL_pairz00_2487)
{
{ /* Ieee/pairlist.scm 269 */
{ /* Ieee/pairlist.scm 270 */
obj_t BgL_auxz00_3895;
if(
PAIRP(BgL_pairz00_2487))
{ /* Ieee/pairlist.scm 270 */
BgL_auxz00_3895 = BgL_pairz00_2487
; }  else 
{ 
obj_t BgL_auxz00_3898;
BgL_auxz00_3898 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10813)), BGl_string2647z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2487); 
FAILURE(BgL_auxz00_3898,BFALSE,BFALSE);} 
return 
BGl_cadrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3895);} } 

}



/* cdar */
BGL_EXPORTED_DEF obj_t BGl_cdarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_16)
{
{ /* Ieee/pairlist.scm 275 */
{ /* Ieee/pairlist.scm 276 */
obj_t BgL_pairz00_3303;
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2030z00_3304;
BgL_aux2030z00_3304 = 
CAR(BgL_pairz00_16); 
if(
PAIRP(BgL_aux2030z00_3304))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3303 = BgL_aux2030z00_3304; }  else 
{ 
obj_t BgL_auxz00_3906;
BgL_auxz00_3906 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2648z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2030z00_3304); 
FAILURE(BgL_auxz00_3906,BFALSE,BFALSE);} } 
return 
CDR(BgL_pairz00_3303);} } 

}



/* &cdar */
obj_t BGl_z62cdarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2488, obj_t BgL_pairz00_2489)
{
{ /* Ieee/pairlist.scm 275 */
{ /* Ieee/pairlist.scm 276 */
obj_t BgL_auxz00_3911;
if(
PAIRP(BgL_pairz00_2489))
{ /* Ieee/pairlist.scm 276 */
BgL_auxz00_3911 = BgL_pairz00_2489
; }  else 
{ 
obj_t BgL_auxz00_3914;
BgL_auxz00_3914 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)11084)), BGl_string2649z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2489); 
FAILURE(BgL_auxz00_3914,BFALSE,BFALSE);} 
return 
BGl_cdarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3911);} } 

}



/* cddr */
BGL_EXPORTED_DEF obj_t BGl_cddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_17)
{
{ /* Ieee/pairlist.scm 281 */
{ /* Ieee/pairlist.scm 282 */
obj_t BgL_pairz00_3305;
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2034z00_3306;
BgL_aux2034z00_3306 = 
CDR(BgL_pairz00_17); 
if(
PAIRP(BgL_aux2034z00_3306))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3305 = BgL_aux2034z00_3306; }  else 
{ 
obj_t BgL_auxz00_3922;
BgL_auxz00_3922 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2650z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2034z00_3306); 
FAILURE(BgL_auxz00_3922,BFALSE,BFALSE);} } 
return 
CDR(BgL_pairz00_3305);} } 

}



/* &cddr */
obj_t BGl_z62cddrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2490, obj_t BgL_pairz00_2491)
{
{ /* Ieee/pairlist.scm 281 */
{ /* Ieee/pairlist.scm 282 */
obj_t BgL_auxz00_3927;
if(
PAIRP(BgL_pairz00_2491))
{ /* Ieee/pairlist.scm 282 */
BgL_auxz00_3927 = BgL_pairz00_2491
; }  else 
{ 
obj_t BgL_auxz00_3930;
BgL_auxz00_3930 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)11355)), BGl_string2651z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2491); 
FAILURE(BgL_auxz00_3930,BFALSE,BFALSE);} 
return 
BGl_cddrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3927);} } 

}



/* caaar */
BGL_EXPORTED_DEF obj_t BGl_caaarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_18)
{
{ /* Ieee/pairlist.scm 287 */
{ /* Ieee/pairlist.scm 288 */
obj_t BgL_pairz00_3307;
{ /* Ieee/pairlist.scm 288 */
obj_t BgL_pairz00_3308;
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2038z00_3309;
BgL_aux2038z00_3309 = 
CAR(BgL_pairz00_18); 
if(
PAIRP(BgL_aux2038z00_3309))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3308 = BgL_aux2038z00_3309; }  else 
{ 
obj_t BgL_auxz00_3938;
BgL_auxz00_3938 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2652z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2038z00_3309); 
FAILURE(BgL_auxz00_3938,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2040z00_3310;
BgL_aux2040z00_3310 = 
CAR(BgL_pairz00_3308); 
if(
PAIRP(BgL_aux2040z00_3310))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3307 = BgL_aux2040z00_3310; }  else 
{ 
obj_t BgL_auxz00_3945;
BgL_auxz00_3945 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2652z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2040z00_3310); 
FAILURE(BgL_auxz00_3945,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3307);} } 

}



/* &caaar */
obj_t BGl_z62caaarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2492, obj_t BgL_pairz00_2493)
{
{ /* Ieee/pairlist.scm 287 */
{ /* Ieee/pairlist.scm 288 */
obj_t BgL_auxz00_3950;
if(
PAIRP(BgL_pairz00_2493))
{ /* Ieee/pairlist.scm 288 */
BgL_auxz00_3950 = BgL_pairz00_2493
; }  else 
{ 
obj_t BgL_auxz00_3953;
BgL_auxz00_3953 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)11632)), BGl_string2653z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2493); 
FAILURE(BgL_auxz00_3953,BFALSE,BFALSE);} 
return 
BGl_caaarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3950);} } 

}



/* caadr */
BGL_EXPORTED_DEF obj_t BGl_caadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_19)
{
{ /* Ieee/pairlist.scm 293 */
{ /* Ieee/pairlist.scm 294 */
obj_t BgL_pairz00_3311;
{ /* Ieee/pairlist.scm 294 */
obj_t BgL_pairz00_3312;
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2044z00_3313;
BgL_aux2044z00_3313 = 
CDR(BgL_pairz00_19); 
if(
PAIRP(BgL_aux2044z00_3313))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3312 = BgL_aux2044z00_3313; }  else 
{ 
obj_t BgL_auxz00_3961;
BgL_auxz00_3961 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2654z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2044z00_3313); 
FAILURE(BgL_auxz00_3961,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2046z00_3314;
BgL_aux2046z00_3314 = 
CAR(BgL_pairz00_3312); 
if(
PAIRP(BgL_aux2046z00_3314))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3311 = BgL_aux2046z00_3314; }  else 
{ 
obj_t BgL_auxz00_3968;
BgL_auxz00_3968 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2654z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2046z00_3314); 
FAILURE(BgL_auxz00_3968,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3311);} } 

}



/* &caadr */
obj_t BGl_z62caadrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2494, obj_t BgL_pairz00_2495)
{
{ /* Ieee/pairlist.scm 293 */
{ /* Ieee/pairlist.scm 294 */
obj_t BgL_auxz00_3973;
if(
PAIRP(BgL_pairz00_2495))
{ /* Ieee/pairlist.scm 294 */
BgL_auxz00_3973 = BgL_pairz00_2495
; }  else 
{ 
obj_t BgL_auxz00_3976;
BgL_auxz00_3976 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)11910)), BGl_string2655z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2495); 
FAILURE(BgL_auxz00_3976,BFALSE,BFALSE);} 
return 
BGl_caadrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3973);} } 

}



/* cadar */
BGL_EXPORTED_DEF obj_t BGl_cadarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_20)
{
{ /* Ieee/pairlist.scm 299 */
{ /* Ieee/pairlist.scm 300 */
obj_t BgL_pairz00_3315;
{ /* Ieee/pairlist.scm 300 */
obj_t BgL_pairz00_3316;
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2050z00_3317;
BgL_aux2050z00_3317 = 
CAR(BgL_pairz00_20); 
if(
PAIRP(BgL_aux2050z00_3317))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3316 = BgL_aux2050z00_3317; }  else 
{ 
obj_t BgL_auxz00_3984;
BgL_auxz00_3984 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2656z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2050z00_3317); 
FAILURE(BgL_auxz00_3984,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2052z00_3318;
BgL_aux2052z00_3318 = 
CDR(BgL_pairz00_3316); 
if(
PAIRP(BgL_aux2052z00_3318))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3315 = BgL_aux2052z00_3318; }  else 
{ 
obj_t BgL_auxz00_3991;
BgL_auxz00_3991 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2656z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2052z00_3318); 
FAILURE(BgL_auxz00_3991,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3315);} } 

}



/* &cadar */
obj_t BGl_z62cadarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2496, obj_t BgL_pairz00_2497)
{
{ /* Ieee/pairlist.scm 299 */
{ /* Ieee/pairlist.scm 300 */
obj_t BgL_auxz00_3996;
if(
PAIRP(BgL_pairz00_2497))
{ /* Ieee/pairlist.scm 300 */
BgL_auxz00_3996 = BgL_pairz00_2497
; }  else 
{ 
obj_t BgL_auxz00_3999;
BgL_auxz00_3999 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)12188)), BGl_string2657z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2497); 
FAILURE(BgL_auxz00_3999,BFALSE,BFALSE);} 
return 
BGl_cadarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3996);} } 

}



/* caddr */
BGL_EXPORTED_DEF obj_t BGl_caddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_21)
{
{ /* Ieee/pairlist.scm 305 */
{ /* Ieee/pairlist.scm 306 */
obj_t BgL_pairz00_3319;
{ /* Ieee/pairlist.scm 306 */
obj_t BgL_pairz00_3320;
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2056z00_3321;
BgL_aux2056z00_3321 = 
CDR(BgL_pairz00_21); 
if(
PAIRP(BgL_aux2056z00_3321))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3320 = BgL_aux2056z00_3321; }  else 
{ 
obj_t BgL_auxz00_4007;
BgL_auxz00_4007 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2658z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2056z00_3321); 
FAILURE(BgL_auxz00_4007,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2058z00_3322;
BgL_aux2058z00_3322 = 
CDR(BgL_pairz00_3320); 
if(
PAIRP(BgL_aux2058z00_3322))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3319 = BgL_aux2058z00_3322; }  else 
{ 
obj_t BgL_auxz00_4014;
BgL_auxz00_4014 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2658z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2058z00_3322); 
FAILURE(BgL_auxz00_4014,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3319);} } 

}



/* &caddr */
obj_t BGl_z62caddrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2498, obj_t BgL_pairz00_2499)
{
{ /* Ieee/pairlist.scm 305 */
{ /* Ieee/pairlist.scm 306 */
obj_t BgL_auxz00_4019;
if(
PAIRP(BgL_pairz00_2499))
{ /* Ieee/pairlist.scm 306 */
BgL_auxz00_4019 = BgL_pairz00_2499
; }  else 
{ 
obj_t BgL_auxz00_4022;
BgL_auxz00_4022 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)12466)), BGl_string2659z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2499); 
FAILURE(BgL_auxz00_4022,BFALSE,BFALSE);} 
return 
BGl_caddrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4019);} } 

}



/* cdaar */
BGL_EXPORTED_DEF obj_t BGl_cdaarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_22)
{
{ /* Ieee/pairlist.scm 311 */
{ /* Ieee/pairlist.scm 312 */
obj_t BgL_pairz00_3323;
{ /* Ieee/pairlist.scm 312 */
obj_t BgL_pairz00_3324;
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2062z00_3325;
BgL_aux2062z00_3325 = 
CAR(BgL_pairz00_22); 
if(
PAIRP(BgL_aux2062z00_3325))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3324 = BgL_aux2062z00_3325; }  else 
{ 
obj_t BgL_auxz00_4030;
BgL_auxz00_4030 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2660z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2062z00_3325); 
FAILURE(BgL_auxz00_4030,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2064z00_3326;
BgL_aux2064z00_3326 = 
CAR(BgL_pairz00_3324); 
if(
PAIRP(BgL_aux2064z00_3326))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3323 = BgL_aux2064z00_3326; }  else 
{ 
obj_t BgL_auxz00_4037;
BgL_auxz00_4037 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2660z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2064z00_3326); 
FAILURE(BgL_auxz00_4037,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3323);} } 

}



/* &cdaar */
obj_t BGl_z62cdaarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2500, obj_t BgL_pairz00_2501)
{
{ /* Ieee/pairlist.scm 311 */
{ /* Ieee/pairlist.scm 312 */
obj_t BgL_auxz00_4042;
if(
PAIRP(BgL_pairz00_2501))
{ /* Ieee/pairlist.scm 312 */
BgL_auxz00_4042 = BgL_pairz00_2501
; }  else 
{ 
obj_t BgL_auxz00_4045;
BgL_auxz00_4045 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)12744)), BGl_string2661z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2501); 
FAILURE(BgL_auxz00_4045,BFALSE,BFALSE);} 
return 
BGl_cdaarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4042);} } 

}



/* cddar */
BGL_EXPORTED_DEF obj_t BGl_cddarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_23)
{
{ /* Ieee/pairlist.scm 317 */
{ /* Ieee/pairlist.scm 318 */
obj_t BgL_pairz00_3327;
{ /* Ieee/pairlist.scm 318 */
obj_t BgL_pairz00_3328;
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2068z00_3329;
BgL_aux2068z00_3329 = 
CAR(BgL_pairz00_23); 
if(
PAIRP(BgL_aux2068z00_3329))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3328 = BgL_aux2068z00_3329; }  else 
{ 
obj_t BgL_auxz00_4053;
BgL_auxz00_4053 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2662z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2068z00_3329); 
FAILURE(BgL_auxz00_4053,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2070z00_3330;
BgL_aux2070z00_3330 = 
CDR(BgL_pairz00_3328); 
if(
PAIRP(BgL_aux2070z00_3330))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3327 = BgL_aux2070z00_3330; }  else 
{ 
obj_t BgL_auxz00_4060;
BgL_auxz00_4060 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2662z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2070z00_3330); 
FAILURE(BgL_auxz00_4060,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3327);} } 

}



/* &cddar */
obj_t BGl_z62cddarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2502, obj_t BgL_pairz00_2503)
{
{ /* Ieee/pairlist.scm 317 */
{ /* Ieee/pairlist.scm 318 */
obj_t BgL_auxz00_4065;
if(
PAIRP(BgL_pairz00_2503))
{ /* Ieee/pairlist.scm 318 */
BgL_auxz00_4065 = BgL_pairz00_2503
; }  else 
{ 
obj_t BgL_auxz00_4068;
BgL_auxz00_4068 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13022)), BGl_string2663z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2503); 
FAILURE(BgL_auxz00_4068,BFALSE,BFALSE);} 
return 
BGl_cddarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4065);} } 

}



/* cdadr */
BGL_EXPORTED_DEF obj_t BGl_cdadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_24)
{
{ /* Ieee/pairlist.scm 323 */
{ /* Ieee/pairlist.scm 324 */
obj_t BgL_pairz00_3331;
{ /* Ieee/pairlist.scm 324 */
obj_t BgL_pairz00_3332;
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2074z00_3333;
BgL_aux2074z00_3333 = 
CDR(BgL_pairz00_24); 
if(
PAIRP(BgL_aux2074z00_3333))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3332 = BgL_aux2074z00_3333; }  else 
{ 
obj_t BgL_auxz00_4076;
BgL_auxz00_4076 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2664z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2074z00_3333); 
FAILURE(BgL_auxz00_4076,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2076z00_3334;
BgL_aux2076z00_3334 = 
CAR(BgL_pairz00_3332); 
if(
PAIRP(BgL_aux2076z00_3334))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3331 = BgL_aux2076z00_3334; }  else 
{ 
obj_t BgL_auxz00_4083;
BgL_auxz00_4083 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2664z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2076z00_3334); 
FAILURE(BgL_auxz00_4083,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3331);} } 

}



/* &cdadr */
obj_t BGl_z62cdadrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2504, obj_t BgL_pairz00_2505)
{
{ /* Ieee/pairlist.scm 323 */
{ /* Ieee/pairlist.scm 324 */
obj_t BgL_auxz00_4088;
if(
PAIRP(BgL_pairz00_2505))
{ /* Ieee/pairlist.scm 324 */
BgL_auxz00_4088 = BgL_pairz00_2505
; }  else 
{ 
obj_t BgL_auxz00_4091;
BgL_auxz00_4091 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13300)), BGl_string2665z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2505); 
FAILURE(BgL_auxz00_4091,BFALSE,BFALSE);} 
return 
BGl_cdadrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4088);} } 

}



/* cdddr */
BGL_EXPORTED_DEF obj_t BGl_cdddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_25)
{
{ /* Ieee/pairlist.scm 329 */
{ /* Ieee/pairlist.scm 330 */
obj_t BgL_pairz00_3335;
{ /* Ieee/pairlist.scm 330 */
obj_t BgL_pairz00_3336;
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2080z00_3337;
BgL_aux2080z00_3337 = 
CDR(BgL_pairz00_25); 
if(
PAIRP(BgL_aux2080z00_3337))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3336 = BgL_aux2080z00_3337; }  else 
{ 
obj_t BgL_auxz00_4099;
BgL_auxz00_4099 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2666z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2080z00_3337); 
FAILURE(BgL_auxz00_4099,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2082z00_3338;
BgL_aux2082z00_3338 = 
CDR(BgL_pairz00_3336); 
if(
PAIRP(BgL_aux2082z00_3338))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3335 = BgL_aux2082z00_3338; }  else 
{ 
obj_t BgL_auxz00_4106;
BgL_auxz00_4106 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2666z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2082z00_3338); 
FAILURE(BgL_auxz00_4106,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3335);} } 

}



/* &cdddr */
obj_t BGl_z62cdddrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2506, obj_t BgL_pairz00_2507)
{
{ /* Ieee/pairlist.scm 329 */
{ /* Ieee/pairlist.scm 330 */
obj_t BgL_auxz00_4111;
if(
PAIRP(BgL_pairz00_2507))
{ /* Ieee/pairlist.scm 330 */
BgL_auxz00_4111 = BgL_pairz00_2507
; }  else 
{ 
obj_t BgL_auxz00_4114;
BgL_auxz00_4114 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13578)), BGl_string2667z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2507); 
FAILURE(BgL_auxz00_4114,BFALSE,BFALSE);} 
return 
BGl_cdddrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4111);} } 

}



/* caaaar */
BGL_EXPORTED_DEF obj_t BGl_caaaarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_26)
{
{ /* Ieee/pairlist.scm 335 */
{ /* Ieee/pairlist.scm 336 */
obj_t BgL_pairz00_3339;
{ /* Ieee/pairlist.scm 336 */
obj_t BgL_pairz00_3340;
{ /* Ieee/pairlist.scm 336 */
obj_t BgL_pairz00_3341;
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2086z00_3342;
BgL_aux2086z00_3342 = 
CAR(BgL_pairz00_26); 
if(
PAIRP(BgL_aux2086z00_3342))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3341 = BgL_aux2086z00_3342; }  else 
{ 
obj_t BgL_auxz00_4122;
BgL_auxz00_4122 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2668z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2086z00_3342); 
FAILURE(BgL_auxz00_4122,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2088z00_3343;
BgL_aux2088z00_3343 = 
CAR(BgL_pairz00_3341); 
if(
PAIRP(BgL_aux2088z00_3343))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3340 = BgL_aux2088z00_3343; }  else 
{ 
obj_t BgL_auxz00_4129;
BgL_auxz00_4129 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2668z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2088z00_3343); 
FAILURE(BgL_auxz00_4129,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2090z00_3344;
BgL_aux2090z00_3344 = 
CAR(BgL_pairz00_3340); 
if(
PAIRP(BgL_aux2090z00_3344))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3339 = BgL_aux2090z00_3344; }  else 
{ 
obj_t BgL_auxz00_4136;
BgL_auxz00_4136 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2668z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2090z00_3344); 
FAILURE(BgL_auxz00_4136,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3339);} } 

}



/* &caaaar */
obj_t BGl_z62caaaarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2508, obj_t BgL_pairz00_2509)
{
{ /* Ieee/pairlist.scm 335 */
{ /* Ieee/pairlist.scm 336 */
obj_t BgL_auxz00_4141;
if(
PAIRP(BgL_pairz00_2509))
{ /* Ieee/pairlist.scm 336 */
BgL_auxz00_4141 = BgL_pairz00_2509
; }  else 
{ 
obj_t BgL_auxz00_4144;
BgL_auxz00_4144 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13862)), BGl_string2669z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2509); 
FAILURE(BgL_auxz00_4144,BFALSE,BFALSE);} 
return 
BGl_caaaarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4141);} } 

}



/* caaadr */
BGL_EXPORTED_DEF obj_t BGl_caaadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_27)
{
{ /* Ieee/pairlist.scm 341 */
{ /* Ieee/pairlist.scm 342 */
obj_t BgL_pairz00_3345;
{ /* Ieee/pairlist.scm 342 */
obj_t BgL_pairz00_3346;
{ /* Ieee/pairlist.scm 342 */
obj_t BgL_pairz00_3347;
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2094z00_3348;
BgL_aux2094z00_3348 = 
CDR(BgL_pairz00_27); 
if(
PAIRP(BgL_aux2094z00_3348))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3347 = BgL_aux2094z00_3348; }  else 
{ 
obj_t BgL_auxz00_4152;
BgL_auxz00_4152 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2670z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2094z00_3348); 
FAILURE(BgL_auxz00_4152,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2096z00_3349;
BgL_aux2096z00_3349 = 
CAR(BgL_pairz00_3347); 
if(
PAIRP(BgL_aux2096z00_3349))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3346 = BgL_aux2096z00_3349; }  else 
{ 
obj_t BgL_auxz00_4159;
BgL_auxz00_4159 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2670z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2096z00_3349); 
FAILURE(BgL_auxz00_4159,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2098z00_3350;
BgL_aux2098z00_3350 = 
CAR(BgL_pairz00_3346); 
if(
PAIRP(BgL_aux2098z00_3350))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3345 = BgL_aux2098z00_3350; }  else 
{ 
obj_t BgL_auxz00_4166;
BgL_auxz00_4166 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2670z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2098z00_3350); 
FAILURE(BgL_auxz00_4166,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3345);} } 

}



/* &caaadr */
obj_t BGl_z62caaadrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2510, obj_t BgL_pairz00_2511)
{
{ /* Ieee/pairlist.scm 341 */
{ /* Ieee/pairlist.scm 342 */
obj_t BgL_auxz00_4171;
if(
PAIRP(BgL_pairz00_2511))
{ /* Ieee/pairlist.scm 342 */
BgL_auxz00_4171 = BgL_pairz00_2511
; }  else 
{ 
obj_t BgL_auxz00_4174;
BgL_auxz00_4174 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14147)), BGl_string2671z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2511); 
FAILURE(BgL_auxz00_4174,BFALSE,BFALSE);} 
return 
BGl_caaadrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4171);} } 

}



/* caadar */
BGL_EXPORTED_DEF obj_t BGl_caadarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_28)
{
{ /* Ieee/pairlist.scm 347 */
{ /* Ieee/pairlist.scm 348 */
obj_t BgL_pairz00_3351;
{ /* Ieee/pairlist.scm 348 */
obj_t BgL_pairz00_3352;
{ /* Ieee/pairlist.scm 348 */
obj_t BgL_pairz00_3353;
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2102z00_3354;
BgL_aux2102z00_3354 = 
CAR(BgL_pairz00_28); 
if(
PAIRP(BgL_aux2102z00_3354))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3353 = BgL_aux2102z00_3354; }  else 
{ 
obj_t BgL_auxz00_4182;
BgL_auxz00_4182 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2672z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2102z00_3354); 
FAILURE(BgL_auxz00_4182,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2104z00_3355;
BgL_aux2104z00_3355 = 
CDR(BgL_pairz00_3353); 
if(
PAIRP(BgL_aux2104z00_3355))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3352 = BgL_aux2104z00_3355; }  else 
{ 
obj_t BgL_auxz00_4189;
BgL_auxz00_4189 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2672z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2104z00_3355); 
FAILURE(BgL_auxz00_4189,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2106z00_3356;
BgL_aux2106z00_3356 = 
CAR(BgL_pairz00_3352); 
if(
PAIRP(BgL_aux2106z00_3356))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3351 = BgL_aux2106z00_3356; }  else 
{ 
obj_t BgL_auxz00_4196;
BgL_auxz00_4196 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2672z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2106z00_3356); 
FAILURE(BgL_auxz00_4196,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3351);} } 

}



/* &caadar */
obj_t BGl_z62caadarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2512, obj_t BgL_pairz00_2513)
{
{ /* Ieee/pairlist.scm 347 */
{ /* Ieee/pairlist.scm 348 */
obj_t BgL_auxz00_4201;
if(
PAIRP(BgL_pairz00_2513))
{ /* Ieee/pairlist.scm 348 */
BgL_auxz00_4201 = BgL_pairz00_2513
; }  else 
{ 
obj_t BgL_auxz00_4204;
BgL_auxz00_4204 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14432)), BGl_string2673z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2513); 
FAILURE(BgL_auxz00_4204,BFALSE,BFALSE);} 
return 
BGl_caadarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4201);} } 

}



/* cadaar */
BGL_EXPORTED_DEF obj_t BGl_cadaarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_29)
{
{ /* Ieee/pairlist.scm 353 */
{ /* Ieee/pairlist.scm 354 */
obj_t BgL_pairz00_3357;
{ /* Ieee/pairlist.scm 354 */
obj_t BgL_pairz00_3358;
{ /* Ieee/pairlist.scm 354 */
obj_t BgL_pairz00_3359;
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2110z00_3360;
BgL_aux2110z00_3360 = 
CAR(BgL_pairz00_29); 
if(
PAIRP(BgL_aux2110z00_3360))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3359 = BgL_aux2110z00_3360; }  else 
{ 
obj_t BgL_auxz00_4212;
BgL_auxz00_4212 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2674z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2110z00_3360); 
FAILURE(BgL_auxz00_4212,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2112z00_3361;
BgL_aux2112z00_3361 = 
CAR(BgL_pairz00_3359); 
if(
PAIRP(BgL_aux2112z00_3361))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3358 = BgL_aux2112z00_3361; }  else 
{ 
obj_t BgL_auxz00_4219;
BgL_auxz00_4219 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2674z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2112z00_3361); 
FAILURE(BgL_auxz00_4219,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2114z00_3362;
BgL_aux2114z00_3362 = 
CDR(BgL_pairz00_3358); 
if(
PAIRP(BgL_aux2114z00_3362))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3357 = BgL_aux2114z00_3362; }  else 
{ 
obj_t BgL_auxz00_4226;
BgL_auxz00_4226 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2674z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2114z00_3362); 
FAILURE(BgL_auxz00_4226,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3357);} } 

}



/* &cadaar */
obj_t BGl_z62cadaarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2514, obj_t BgL_pairz00_2515)
{
{ /* Ieee/pairlist.scm 353 */
{ /* Ieee/pairlist.scm 354 */
obj_t BgL_auxz00_4231;
if(
PAIRP(BgL_pairz00_2515))
{ /* Ieee/pairlist.scm 354 */
BgL_auxz00_4231 = BgL_pairz00_2515
; }  else 
{ 
obj_t BgL_auxz00_4234;
BgL_auxz00_4234 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14717)), BGl_string2675z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2515); 
FAILURE(BgL_auxz00_4234,BFALSE,BFALSE);} 
return 
BGl_cadaarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4231);} } 

}



/* cdaaar */
BGL_EXPORTED_DEF obj_t BGl_cdaaarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_30)
{
{ /* Ieee/pairlist.scm 359 */
{ /* Ieee/pairlist.scm 360 */
obj_t BgL_pairz00_3363;
{ /* Ieee/pairlist.scm 360 */
obj_t BgL_pairz00_3364;
{ /* Ieee/pairlist.scm 360 */
obj_t BgL_pairz00_3365;
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2118z00_3366;
BgL_aux2118z00_3366 = 
CAR(BgL_pairz00_30); 
if(
PAIRP(BgL_aux2118z00_3366))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3365 = BgL_aux2118z00_3366; }  else 
{ 
obj_t BgL_auxz00_4242;
BgL_auxz00_4242 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2676z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2118z00_3366); 
FAILURE(BgL_auxz00_4242,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2120z00_3367;
BgL_aux2120z00_3367 = 
CAR(BgL_pairz00_3365); 
if(
PAIRP(BgL_aux2120z00_3367))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3364 = BgL_aux2120z00_3367; }  else 
{ 
obj_t BgL_auxz00_4249;
BgL_auxz00_4249 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2676z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2120z00_3367); 
FAILURE(BgL_auxz00_4249,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2122z00_3368;
BgL_aux2122z00_3368 = 
CAR(BgL_pairz00_3364); 
if(
PAIRP(BgL_aux2122z00_3368))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3363 = BgL_aux2122z00_3368; }  else 
{ 
obj_t BgL_auxz00_4256;
BgL_auxz00_4256 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2676z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2122z00_3368); 
FAILURE(BgL_auxz00_4256,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3363);} } 

}



/* &cdaaar */
obj_t BGl_z62cdaaarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2516, obj_t BgL_pairz00_2517)
{
{ /* Ieee/pairlist.scm 359 */
{ /* Ieee/pairlist.scm 360 */
obj_t BgL_auxz00_4261;
if(
PAIRP(BgL_pairz00_2517))
{ /* Ieee/pairlist.scm 360 */
BgL_auxz00_4261 = BgL_pairz00_2517
; }  else 
{ 
obj_t BgL_auxz00_4264;
BgL_auxz00_4264 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)15002)), BGl_string2677z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2517); 
FAILURE(BgL_auxz00_4264,BFALSE,BFALSE);} 
return 
BGl_cdaaarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4261);} } 

}



/* caaddr */
BGL_EXPORTED_DEF obj_t BGl_caaddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_31)
{
{ /* Ieee/pairlist.scm 365 */
{ /* Ieee/pairlist.scm 366 */
obj_t BgL_pairz00_3369;
{ /* Ieee/pairlist.scm 366 */
obj_t BgL_pairz00_3370;
{ /* Ieee/pairlist.scm 366 */
obj_t BgL_pairz00_3371;
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2126z00_3372;
BgL_aux2126z00_3372 = 
CDR(BgL_pairz00_31); 
if(
PAIRP(BgL_aux2126z00_3372))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3371 = BgL_aux2126z00_3372; }  else 
{ 
obj_t BgL_auxz00_4272;
BgL_auxz00_4272 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2678z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2126z00_3372); 
FAILURE(BgL_auxz00_4272,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2128z00_3373;
BgL_aux2128z00_3373 = 
CDR(BgL_pairz00_3371); 
if(
PAIRP(BgL_aux2128z00_3373))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3370 = BgL_aux2128z00_3373; }  else 
{ 
obj_t BgL_auxz00_4279;
BgL_auxz00_4279 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2678z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2128z00_3373); 
FAILURE(BgL_auxz00_4279,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2130z00_3374;
BgL_aux2130z00_3374 = 
CAR(BgL_pairz00_3370); 
if(
PAIRP(BgL_aux2130z00_3374))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3369 = BgL_aux2130z00_3374; }  else 
{ 
obj_t BgL_auxz00_4286;
BgL_auxz00_4286 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2678z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2130z00_3374); 
FAILURE(BgL_auxz00_4286,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3369);} } 

}



/* &caaddr */
obj_t BGl_z62caaddrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2518, obj_t BgL_pairz00_2519)
{
{ /* Ieee/pairlist.scm 365 */
{ /* Ieee/pairlist.scm 366 */
obj_t BgL_auxz00_4291;
if(
PAIRP(BgL_pairz00_2519))
{ /* Ieee/pairlist.scm 366 */
BgL_auxz00_4291 = BgL_pairz00_2519
; }  else 
{ 
obj_t BgL_auxz00_4294;
BgL_auxz00_4294 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)15287)), BGl_string2679z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2519); 
FAILURE(BgL_auxz00_4294,BFALSE,BFALSE);} 
return 
BGl_caaddrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4291);} } 

}



/* caddar */
BGL_EXPORTED_DEF obj_t BGl_caddarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_32)
{
{ /* Ieee/pairlist.scm 371 */
{ /* Ieee/pairlist.scm 372 */
obj_t BgL_pairz00_3375;
{ /* Ieee/pairlist.scm 372 */
obj_t BgL_pairz00_3376;
{ /* Ieee/pairlist.scm 372 */
obj_t BgL_pairz00_3377;
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2134z00_3378;
BgL_aux2134z00_3378 = 
CAR(BgL_pairz00_32); 
if(
PAIRP(BgL_aux2134z00_3378))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3377 = BgL_aux2134z00_3378; }  else 
{ 
obj_t BgL_auxz00_4302;
BgL_auxz00_4302 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2680z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2134z00_3378); 
FAILURE(BgL_auxz00_4302,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2136z00_3379;
BgL_aux2136z00_3379 = 
CDR(BgL_pairz00_3377); 
if(
PAIRP(BgL_aux2136z00_3379))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3376 = BgL_aux2136z00_3379; }  else 
{ 
obj_t BgL_auxz00_4309;
BgL_auxz00_4309 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2680z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2136z00_3379); 
FAILURE(BgL_auxz00_4309,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2138z00_3380;
BgL_aux2138z00_3380 = 
CDR(BgL_pairz00_3376); 
if(
PAIRP(BgL_aux2138z00_3380))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3375 = BgL_aux2138z00_3380; }  else 
{ 
obj_t BgL_auxz00_4316;
BgL_auxz00_4316 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2680z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2138z00_3380); 
FAILURE(BgL_auxz00_4316,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3375);} } 

}



/* &caddar */
obj_t BGl_z62caddarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2520, obj_t BgL_pairz00_2521)
{
{ /* Ieee/pairlist.scm 371 */
{ /* Ieee/pairlist.scm 372 */
obj_t BgL_auxz00_4321;
if(
PAIRP(BgL_pairz00_2521))
{ /* Ieee/pairlist.scm 372 */
BgL_auxz00_4321 = BgL_pairz00_2521
; }  else 
{ 
obj_t BgL_auxz00_4324;
BgL_auxz00_4324 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)15572)), BGl_string2681z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2521); 
FAILURE(BgL_auxz00_4324,BFALSE,BFALSE);} 
return 
BGl_caddarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4321);} } 

}



/* cadadr */
BGL_EXPORTED_DEF obj_t BGl_cadadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_33)
{
{ /* Ieee/pairlist.scm 377 */
{ /* Ieee/pairlist.scm 378 */
obj_t BgL_pairz00_3381;
{ /* Ieee/pairlist.scm 378 */
obj_t BgL_pairz00_3382;
{ /* Ieee/pairlist.scm 378 */
obj_t BgL_pairz00_3383;
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2142z00_3384;
BgL_aux2142z00_3384 = 
CDR(BgL_pairz00_33); 
if(
PAIRP(BgL_aux2142z00_3384))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3383 = BgL_aux2142z00_3384; }  else 
{ 
obj_t BgL_auxz00_4332;
BgL_auxz00_4332 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2682z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2142z00_3384); 
FAILURE(BgL_auxz00_4332,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2144z00_3385;
BgL_aux2144z00_3385 = 
CAR(BgL_pairz00_3383); 
if(
PAIRP(BgL_aux2144z00_3385))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3382 = BgL_aux2144z00_3385; }  else 
{ 
obj_t BgL_auxz00_4339;
BgL_auxz00_4339 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2682z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2144z00_3385); 
FAILURE(BgL_auxz00_4339,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2146z00_3386;
BgL_aux2146z00_3386 = 
CDR(BgL_pairz00_3382); 
if(
PAIRP(BgL_aux2146z00_3386))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3381 = BgL_aux2146z00_3386; }  else 
{ 
obj_t BgL_auxz00_4346;
BgL_auxz00_4346 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2682z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2146z00_3386); 
FAILURE(BgL_auxz00_4346,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3381);} } 

}



/* &cadadr */
obj_t BGl_z62cadadrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2522, obj_t BgL_pairz00_2523)
{
{ /* Ieee/pairlist.scm 377 */
{ /* Ieee/pairlist.scm 378 */
obj_t BgL_auxz00_4351;
if(
PAIRP(BgL_pairz00_2523))
{ /* Ieee/pairlist.scm 378 */
BgL_auxz00_4351 = BgL_pairz00_2523
; }  else 
{ 
obj_t BgL_auxz00_4354;
BgL_auxz00_4354 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)15857)), BGl_string2683z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2523); 
FAILURE(BgL_auxz00_4354,BFALSE,BFALSE);} 
return 
BGl_cadadrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4351);} } 

}



/* cadddr */
BGL_EXPORTED_DEF obj_t BGl_cadddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_34)
{
{ /* Ieee/pairlist.scm 383 */
{ /* Ieee/pairlist.scm 384 */
obj_t BgL_pairz00_3387;
{ /* Ieee/pairlist.scm 384 */
obj_t BgL_pairz00_3388;
{ /* Ieee/pairlist.scm 384 */
obj_t BgL_pairz00_3389;
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2150z00_3390;
BgL_aux2150z00_3390 = 
CDR(BgL_pairz00_34); 
if(
PAIRP(BgL_aux2150z00_3390))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3389 = BgL_aux2150z00_3390; }  else 
{ 
obj_t BgL_auxz00_4362;
BgL_auxz00_4362 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2150z00_3390); 
FAILURE(BgL_auxz00_4362,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2152z00_3391;
BgL_aux2152z00_3391 = 
CDR(BgL_pairz00_3389); 
if(
PAIRP(BgL_aux2152z00_3391))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3388 = BgL_aux2152z00_3391; }  else 
{ 
obj_t BgL_auxz00_4369;
BgL_auxz00_4369 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2152z00_3391); 
FAILURE(BgL_auxz00_4369,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2154z00_3392;
BgL_aux2154z00_3392 = 
CDR(BgL_pairz00_3388); 
if(
PAIRP(BgL_aux2154z00_3392))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3387 = BgL_aux2154z00_3392; }  else 
{ 
obj_t BgL_auxz00_4376;
BgL_auxz00_4376 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2154z00_3392); 
FAILURE(BgL_auxz00_4376,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3387);} } 

}



/* &cadddr */
obj_t BGl_z62cadddrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2524, obj_t BgL_pairz00_2525)
{
{ /* Ieee/pairlist.scm 383 */
{ /* Ieee/pairlist.scm 384 */
obj_t BgL_auxz00_4381;
if(
PAIRP(BgL_pairz00_2525))
{ /* Ieee/pairlist.scm 384 */
BgL_auxz00_4381 = BgL_pairz00_2525
; }  else 
{ 
obj_t BgL_auxz00_4384;
BgL_auxz00_4384 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16142)), BGl_string2685z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2525); 
FAILURE(BgL_auxz00_4384,BFALSE,BFALSE);} 
return 
BGl_cadddrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4381);} } 

}



/* cdaadr */
BGL_EXPORTED_DEF obj_t BGl_cdaadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_35)
{
{ /* Ieee/pairlist.scm 389 */
{ /* Ieee/pairlist.scm 390 */
obj_t BgL_pairz00_3393;
{ /* Ieee/pairlist.scm 390 */
obj_t BgL_pairz00_3394;
{ /* Ieee/pairlist.scm 390 */
obj_t BgL_pairz00_3395;
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2158z00_3396;
BgL_aux2158z00_3396 = 
CDR(BgL_pairz00_35); 
if(
PAIRP(BgL_aux2158z00_3396))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3395 = BgL_aux2158z00_3396; }  else 
{ 
obj_t BgL_auxz00_4392;
BgL_auxz00_4392 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2158z00_3396); 
FAILURE(BgL_auxz00_4392,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2160z00_3397;
BgL_aux2160z00_3397 = 
CAR(BgL_pairz00_3395); 
if(
PAIRP(BgL_aux2160z00_3397))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3394 = BgL_aux2160z00_3397; }  else 
{ 
obj_t BgL_auxz00_4399;
BgL_auxz00_4399 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2160z00_3397); 
FAILURE(BgL_auxz00_4399,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2162z00_3398;
BgL_aux2162z00_3398 = 
CAR(BgL_pairz00_3394); 
if(
PAIRP(BgL_aux2162z00_3398))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3393 = BgL_aux2162z00_3398; }  else 
{ 
obj_t BgL_auxz00_4406;
BgL_auxz00_4406 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2162z00_3398); 
FAILURE(BgL_auxz00_4406,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3393);} } 

}



/* &cdaadr */
obj_t BGl_z62cdaadrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2526, obj_t BgL_pairz00_2527)
{
{ /* Ieee/pairlist.scm 389 */
{ /* Ieee/pairlist.scm 390 */
obj_t BgL_auxz00_4411;
if(
PAIRP(BgL_pairz00_2527))
{ /* Ieee/pairlist.scm 390 */
BgL_auxz00_4411 = BgL_pairz00_2527
; }  else 
{ 
obj_t BgL_auxz00_4414;
BgL_auxz00_4414 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16427)), BGl_string2687z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2527); 
FAILURE(BgL_auxz00_4414,BFALSE,BFALSE);} 
return 
BGl_cdaadrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4411);} } 

}



/* cdaddr */
BGL_EXPORTED_DEF obj_t BGl_cdaddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_36)
{
{ /* Ieee/pairlist.scm 395 */
{ /* Ieee/pairlist.scm 396 */
obj_t BgL_pairz00_3399;
{ /* Ieee/pairlist.scm 396 */
obj_t BgL_pairz00_3400;
{ /* Ieee/pairlist.scm 396 */
obj_t BgL_pairz00_3401;
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2166z00_3402;
BgL_aux2166z00_3402 = 
CDR(BgL_pairz00_36); 
if(
PAIRP(BgL_aux2166z00_3402))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3401 = BgL_aux2166z00_3402; }  else 
{ 
obj_t BgL_auxz00_4422;
BgL_auxz00_4422 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2688z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2166z00_3402); 
FAILURE(BgL_auxz00_4422,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2168z00_3403;
BgL_aux2168z00_3403 = 
CDR(BgL_pairz00_3401); 
if(
PAIRP(BgL_aux2168z00_3403))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3400 = BgL_aux2168z00_3403; }  else 
{ 
obj_t BgL_auxz00_4429;
BgL_auxz00_4429 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2688z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2168z00_3403); 
FAILURE(BgL_auxz00_4429,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2170z00_3404;
BgL_aux2170z00_3404 = 
CAR(BgL_pairz00_3400); 
if(
PAIRP(BgL_aux2170z00_3404))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3399 = BgL_aux2170z00_3404; }  else 
{ 
obj_t BgL_auxz00_4436;
BgL_auxz00_4436 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2688z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2170z00_3404); 
FAILURE(BgL_auxz00_4436,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3399);} } 

}



/* &cdaddr */
obj_t BGl_z62cdaddrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2528, obj_t BgL_pairz00_2529)
{
{ /* Ieee/pairlist.scm 395 */
{ /* Ieee/pairlist.scm 396 */
obj_t BgL_auxz00_4441;
if(
PAIRP(BgL_pairz00_2529))
{ /* Ieee/pairlist.scm 396 */
BgL_auxz00_4441 = BgL_pairz00_2529
; }  else 
{ 
obj_t BgL_auxz00_4444;
BgL_auxz00_4444 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16712)), BGl_string2689z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2529); 
FAILURE(BgL_auxz00_4444,BFALSE,BFALSE);} 
return 
BGl_cdaddrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4441);} } 

}



/* cddaar */
BGL_EXPORTED_DEF obj_t BGl_cddaarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_37)
{
{ /* Ieee/pairlist.scm 401 */
{ /* Ieee/pairlist.scm 402 */
obj_t BgL_pairz00_3405;
{ /* Ieee/pairlist.scm 402 */
obj_t BgL_pairz00_3406;
{ /* Ieee/pairlist.scm 402 */
obj_t BgL_pairz00_3407;
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2174z00_3408;
BgL_aux2174z00_3408 = 
CAR(BgL_pairz00_37); 
if(
PAIRP(BgL_aux2174z00_3408))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3407 = BgL_aux2174z00_3408; }  else 
{ 
obj_t BgL_auxz00_4452;
BgL_auxz00_4452 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2690z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2174z00_3408); 
FAILURE(BgL_auxz00_4452,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2176z00_3409;
BgL_aux2176z00_3409 = 
CAR(BgL_pairz00_3407); 
if(
PAIRP(BgL_aux2176z00_3409))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3406 = BgL_aux2176z00_3409; }  else 
{ 
obj_t BgL_auxz00_4459;
BgL_auxz00_4459 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2690z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2176z00_3409); 
FAILURE(BgL_auxz00_4459,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2178z00_3410;
BgL_aux2178z00_3410 = 
CDR(BgL_pairz00_3406); 
if(
PAIRP(BgL_aux2178z00_3410))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3405 = BgL_aux2178z00_3410; }  else 
{ 
obj_t BgL_auxz00_4466;
BgL_auxz00_4466 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2690z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2178z00_3410); 
FAILURE(BgL_auxz00_4466,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3405);} } 

}



/* &cddaar */
obj_t BGl_z62cddaarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2530, obj_t BgL_pairz00_2531)
{
{ /* Ieee/pairlist.scm 401 */
{ /* Ieee/pairlist.scm 402 */
obj_t BgL_auxz00_4471;
if(
PAIRP(BgL_pairz00_2531))
{ /* Ieee/pairlist.scm 402 */
BgL_auxz00_4471 = BgL_pairz00_2531
; }  else 
{ 
obj_t BgL_auxz00_4474;
BgL_auxz00_4474 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16997)), BGl_string2691z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2531); 
FAILURE(BgL_auxz00_4474,BFALSE,BFALSE);} 
return 
BGl_cddaarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4471);} } 

}



/* cddadr */
BGL_EXPORTED_DEF obj_t BGl_cddadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_38)
{
{ /* Ieee/pairlist.scm 407 */
{ /* Ieee/pairlist.scm 408 */
obj_t BgL_pairz00_3411;
{ /* Ieee/pairlist.scm 408 */
obj_t BgL_pairz00_3412;
{ /* Ieee/pairlist.scm 408 */
obj_t BgL_pairz00_3413;
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2182z00_3414;
BgL_aux2182z00_3414 = 
CDR(BgL_pairz00_38); 
if(
PAIRP(BgL_aux2182z00_3414))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3413 = BgL_aux2182z00_3414; }  else 
{ 
obj_t BgL_auxz00_4482;
BgL_auxz00_4482 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2692z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2182z00_3414); 
FAILURE(BgL_auxz00_4482,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2184z00_3415;
BgL_aux2184z00_3415 = 
CAR(BgL_pairz00_3413); 
if(
PAIRP(BgL_aux2184z00_3415))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3412 = BgL_aux2184z00_3415; }  else 
{ 
obj_t BgL_auxz00_4489;
BgL_auxz00_4489 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2692z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2184z00_3415); 
FAILURE(BgL_auxz00_4489,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2186z00_3416;
BgL_aux2186z00_3416 = 
CDR(BgL_pairz00_3412); 
if(
PAIRP(BgL_aux2186z00_3416))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3411 = BgL_aux2186z00_3416; }  else 
{ 
obj_t BgL_auxz00_4496;
BgL_auxz00_4496 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2692z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2186z00_3416); 
FAILURE(BgL_auxz00_4496,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3411);} } 

}



/* &cddadr */
obj_t BGl_z62cddadrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2532, obj_t BgL_pairz00_2533)
{
{ /* Ieee/pairlist.scm 407 */
{ /* Ieee/pairlist.scm 408 */
obj_t BgL_auxz00_4501;
if(
PAIRP(BgL_pairz00_2533))
{ /* Ieee/pairlist.scm 408 */
BgL_auxz00_4501 = BgL_pairz00_2533
; }  else 
{ 
obj_t BgL_auxz00_4504;
BgL_auxz00_4504 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)17282)), BGl_string2693z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2533); 
FAILURE(BgL_auxz00_4504,BFALSE,BFALSE);} 
return 
BGl_cddadrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4501);} } 

}



/* cdadar */
BGL_EXPORTED_DEF obj_t BGl_cdadarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_39)
{
{ /* Ieee/pairlist.scm 413 */
{ /* Ieee/pairlist.scm 414 */
obj_t BgL_pairz00_3417;
{ /* Ieee/pairlist.scm 414 */
obj_t BgL_pairz00_3418;
{ /* Ieee/pairlist.scm 414 */
obj_t BgL_pairz00_3419;
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2190z00_3420;
BgL_aux2190z00_3420 = 
CAR(BgL_pairz00_39); 
if(
PAIRP(BgL_aux2190z00_3420))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3419 = BgL_aux2190z00_3420; }  else 
{ 
obj_t BgL_auxz00_4512;
BgL_auxz00_4512 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2694z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2190z00_3420); 
FAILURE(BgL_auxz00_4512,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2192z00_3421;
BgL_aux2192z00_3421 = 
CDR(BgL_pairz00_3419); 
if(
PAIRP(BgL_aux2192z00_3421))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3418 = BgL_aux2192z00_3421; }  else 
{ 
obj_t BgL_auxz00_4519;
BgL_auxz00_4519 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2694z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2192z00_3421); 
FAILURE(BgL_auxz00_4519,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2194z00_3422;
BgL_aux2194z00_3422 = 
CAR(BgL_pairz00_3418); 
if(
PAIRP(BgL_aux2194z00_3422))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3417 = BgL_aux2194z00_3422; }  else 
{ 
obj_t BgL_auxz00_4526;
BgL_auxz00_4526 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2694z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2194z00_3422); 
FAILURE(BgL_auxz00_4526,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3417);} } 

}



/* &cdadar */
obj_t BGl_z62cdadarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2534, obj_t BgL_pairz00_2535)
{
{ /* Ieee/pairlist.scm 413 */
{ /* Ieee/pairlist.scm 414 */
obj_t BgL_auxz00_4531;
if(
PAIRP(BgL_pairz00_2535))
{ /* Ieee/pairlist.scm 414 */
BgL_auxz00_4531 = BgL_pairz00_2535
; }  else 
{ 
obj_t BgL_auxz00_4534;
BgL_auxz00_4534 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)17567)), BGl_string2695z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2535); 
FAILURE(BgL_auxz00_4534,BFALSE,BFALSE);} 
return 
BGl_cdadarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4531);} } 

}



/* cdddar */
BGL_EXPORTED_DEF obj_t BGl_cdddarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_40)
{
{ /* Ieee/pairlist.scm 419 */
{ /* Ieee/pairlist.scm 420 */
obj_t BgL_pairz00_3423;
{ /* Ieee/pairlist.scm 420 */
obj_t BgL_pairz00_3424;
{ /* Ieee/pairlist.scm 420 */
obj_t BgL_pairz00_3425;
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2198z00_3426;
BgL_aux2198z00_3426 = 
CAR(BgL_pairz00_40); 
if(
PAIRP(BgL_aux2198z00_3426))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_3425 = BgL_aux2198z00_3426; }  else 
{ 
obj_t BgL_auxz00_4542;
BgL_auxz00_4542 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2696z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2198z00_3426); 
FAILURE(BgL_auxz00_4542,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2200z00_3427;
BgL_aux2200z00_3427 = 
CDR(BgL_pairz00_3425); 
if(
PAIRP(BgL_aux2200z00_3427))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3424 = BgL_aux2200z00_3427; }  else 
{ 
obj_t BgL_auxz00_4549;
BgL_auxz00_4549 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2696z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2200z00_3427); 
FAILURE(BgL_auxz00_4549,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2202z00_3428;
BgL_aux2202z00_3428 = 
CDR(BgL_pairz00_3424); 
if(
PAIRP(BgL_aux2202z00_3428))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3423 = BgL_aux2202z00_3428; }  else 
{ 
obj_t BgL_auxz00_4556;
BgL_auxz00_4556 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2696z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2202z00_3428); 
FAILURE(BgL_auxz00_4556,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3423);} } 

}



/* &cdddar */
obj_t BGl_z62cdddarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2536, obj_t BgL_pairz00_2537)
{
{ /* Ieee/pairlist.scm 419 */
{ /* Ieee/pairlist.scm 420 */
obj_t BgL_auxz00_4561;
if(
PAIRP(BgL_pairz00_2537))
{ /* Ieee/pairlist.scm 420 */
BgL_auxz00_4561 = BgL_pairz00_2537
; }  else 
{ 
obj_t BgL_auxz00_4564;
BgL_auxz00_4564 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)17852)), BGl_string2697z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2537); 
FAILURE(BgL_auxz00_4564,BFALSE,BFALSE);} 
return 
BGl_cdddarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4561);} } 

}



/* cddddr */
BGL_EXPORTED_DEF obj_t BGl_cddddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_41)
{
{ /* Ieee/pairlist.scm 426 */
{ /* Ieee/pairlist.scm 427 */
obj_t BgL_pairz00_3429;
{ /* Ieee/pairlist.scm 427 */
obj_t BgL_pairz00_3430;
{ /* Ieee/pairlist.scm 427 */
obj_t BgL_pairz00_3431;
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2206z00_3432;
BgL_aux2206z00_3432 = 
CDR(BgL_pairz00_41); 
if(
PAIRP(BgL_aux2206z00_3432))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3431 = BgL_aux2206z00_3432; }  else 
{ 
obj_t BgL_auxz00_4572;
BgL_auxz00_4572 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2698z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2206z00_3432); 
FAILURE(BgL_auxz00_4572,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2208z00_3433;
BgL_aux2208z00_3433 = 
CDR(BgL_pairz00_3431); 
if(
PAIRP(BgL_aux2208z00_3433))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3430 = BgL_aux2208z00_3433; }  else 
{ 
obj_t BgL_auxz00_4579;
BgL_auxz00_4579 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2698z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2208z00_3433); 
FAILURE(BgL_auxz00_4579,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2210z00_3434;
BgL_aux2210z00_3434 = 
CDR(BgL_pairz00_3430); 
if(
PAIRP(BgL_aux2210z00_3434))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_3429 = BgL_aux2210z00_3434; }  else 
{ 
obj_t BgL_auxz00_4586;
BgL_auxz00_4586 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2698z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2210z00_3434); 
FAILURE(BgL_auxz00_4586,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3429);} } 

}



/* &cddddr */
obj_t BGl_z62cddddrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2538, obj_t BgL_pairz00_2539)
{
{ /* Ieee/pairlist.scm 426 */
{ /* Ieee/pairlist.scm 427 */
obj_t BgL_auxz00_4591;
if(
PAIRP(BgL_pairz00_2539))
{ /* Ieee/pairlist.scm 427 */
BgL_auxz00_4591 = BgL_pairz00_2539
; }  else 
{ 
obj_t BgL_auxz00_4594;
BgL_auxz00_4594 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)18138)), BGl_string2699z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2539); 
FAILURE(BgL_auxz00_4594,BFALSE,BFALSE);} 
return 
BGl_cddddrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4591);} } 

}



/* set-car! */
BGL_EXPORTED_DEF obj_t BGl_setzd2carz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_42, obj_t BgL_objz00_43)
{
{ /* Ieee/pairlist.scm 432 */
return 
SET_CAR(BgL_pairz00_42, BgL_objz00_43);} 

}



/* &set-car! */
obj_t BGl_z62setzd2carz12za2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2540, obj_t BgL_pairz00_2541, obj_t BgL_objz00_2542)
{
{ /* Ieee/pairlist.scm 432 */
{ /* Ieee/pairlist.scm 433 */
obj_t BgL_auxz00_4600;
if(
PAIRP(BgL_pairz00_2541))
{ /* Ieee/pairlist.scm 433 */
BgL_auxz00_4600 = BgL_pairz00_2541
; }  else 
{ 
obj_t BgL_auxz00_4603;
BgL_auxz00_4603 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)18414)), BGl_string2700z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2541); 
FAILURE(BgL_auxz00_4603,BFALSE,BFALSE);} 
return 
BGl_setzd2carz12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4600, BgL_objz00_2542);} } 

}



/* set-cdr! */
BGL_EXPORTED_DEF obj_t BGl_setzd2cdrz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_44, obj_t BgL_objz00_45)
{
{ /* Ieee/pairlist.scm 438 */
return 
SET_CDR(BgL_pairz00_44, BgL_objz00_45);} 

}



/* &set-cdr! */
obj_t BGl_z62setzd2cdrz12za2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2543, obj_t BgL_pairz00_2544, obj_t BgL_objz00_2545)
{
{ /* Ieee/pairlist.scm 438 */
{ /* Ieee/pairlist.scm 439 */
obj_t BgL_auxz00_4609;
if(
PAIRP(BgL_pairz00_2544))
{ /* Ieee/pairlist.scm 439 */
BgL_auxz00_4609 = BgL_pairz00_2544
; }  else 
{ 
obj_t BgL_auxz00_4612;
BgL_auxz00_4612 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)18697)), BGl_string2701z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2544); 
FAILURE(BgL_auxz00_4612,BFALSE,BFALSE);} 
return 
BGl_setzd2cdrz12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4609, BgL_objz00_2545);} } 

}



/* set-cer! */
BGL_EXPORTED_DEF obj_t BGl_setzd2cerz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_epairz00_46, obj_t BgL_objz00_47)
{
{ /* Ieee/pairlist.scm 444 */
return 
SET_CER(BgL_epairz00_46, BgL_objz00_47);} 

}



/* &set-cer! */
obj_t BGl_z62setzd2cerz12za2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2546, obj_t BgL_epairz00_2547, obj_t BgL_objz00_2548)
{
{ /* Ieee/pairlist.scm 444 */
{ /* Ieee/pairlist.scm 445 */
obj_t BgL_auxz00_4618;
if(
EPAIRP(BgL_epairz00_2547))
{ /* Ieee/pairlist.scm 445 */
BgL_auxz00_4618 = BgL_epairz00_2547
; }  else 
{ 
obj_t BgL_auxz00_4621;
BgL_auxz00_4621 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)18981)), BGl_string2702z00zz__r4_pairs_and_lists_6_3z00, BGl_string2643z00zz__r4_pairs_and_lists_6_3z00, BgL_epairz00_2547); 
FAILURE(BgL_auxz00_4621,BFALSE,BFALSE);} 
return 
BGl_setzd2cerz12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4618, BgL_objz00_2548);} } 

}



/* null? */
BGL_EXPORTED_DEF bool_t BGl_nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_objz00_48)
{
{ /* Ieee/pairlist.scm 450 */
return 
NULLP(BgL_objz00_48);} 

}



/* &null? */
obj_t BGl_z62nullzf3z91zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2549, obj_t BgL_objz00_2550)
{
{ /* Ieee/pairlist.scm 450 */
return 
BBOOL(
BGl_nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_objz00_2550));} 

}



/* list */
BGL_EXPORTED_DEF obj_t BGl_listz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_49)
{
{ /* Ieee/pairlist.scm 456 */
{ /* Ieee/pairlist.scm 456 */
bool_t BgL_test3414z00_4629;
if(
PAIRP(BgL_lz00_49))
{ /* Ieee/pairlist.scm 226 */
BgL_test3414z00_4629 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3414z00_4629 = 
NULLP(BgL_lz00_49)
; } 
if(BgL_test3414z00_4629)
{ /* Ieee/pairlist.scm 456 */
return BgL_lz00_49;}  else 
{ 
obj_t BgL_auxz00_4633;
BgL_auxz00_4633 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)19495)), BGl_string2703z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_49); 
FAILURE(BgL_auxz00_4633,BFALSE,BFALSE);} } } 

}



/* &list */
obj_t BGl_z62listz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2551, obj_t BgL_lz00_2552)
{
{ /* Ieee/pairlist.scm 456 */
return 
BGl_listz00zz__r4_pairs_and_lists_6_3z00(BgL_lz00_2552);} 

}



/* list? */
BGL_EXPORTED_DEF bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_xz00_50)
{
{ /* Ieee/pairlist.scm 462 */
{ 
obj_t BgL_xz00_865;obj_t BgL_prevz00_866;obj_t BgL_xz00_862;obj_t BgL_prevz00_863;
if(
NULLP(BgL_xz00_50))
{ /* Ieee/pairlist.scm 479 */
return ((bool_t)1);}  else 
{ /* Ieee/pairlist.scm 479 */
if(
PAIRP(BgL_xz00_50))
{ /* Ieee/pairlist.scm 481 */
BgL_xz00_862 = 
CDR(BgL_xz00_50); 
BgL_prevz00_863 = BgL_xz00_50; 
BgL_l1z00_864:
if(
NULLP(BgL_xz00_862))
{ /* Ieee/pairlist.scm 464 */
return ((bool_t)1);}  else 
{ /* Ieee/pairlist.scm 464 */
if(
PAIRP(BgL_xz00_862))
{ /* Ieee/pairlist.scm 466 */
if(
(BgL_xz00_862==BgL_prevz00_863))
{ /* Ieee/pairlist.scm 467 */
return ((bool_t)0);}  else 
{ /* Ieee/pairlist.scm 467 */
BgL_xz00_865 = 
CDR(BgL_xz00_862); 
BgL_prevz00_866 = BgL_prevz00_863; 
if(
NULLP(BgL_xz00_865))
{ /* Ieee/pairlist.scm 472 */
return ((bool_t)1);}  else 
{ /* Ieee/pairlist.scm 472 */
if(
PAIRP(BgL_xz00_865))
{ /* Ieee/pairlist.scm 474 */
if(
(BgL_xz00_865==BgL_prevz00_866))
{ /* Ieee/pairlist.scm 475 */
return ((bool_t)0);}  else 
{ 
obj_t BgL_prevz00_4656;obj_t BgL_xz00_4654;
BgL_xz00_4654 = 
CDR(BgL_xz00_865); 
{ /* Ieee/pairlist.scm 477 */
obj_t BgL_pairz00_1800;
if(
PAIRP(BgL_prevz00_866))
{ /* Ieee/pairlist.scm 477 */
BgL_pairz00_1800 = BgL_prevz00_866; }  else 
{ 
obj_t BgL_auxz00_4659;
BgL_auxz00_4659 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)20062)), BGl_string2705z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_prevz00_866); 
FAILURE(BgL_auxz00_4659,BFALSE,BFALSE);} 
BgL_prevz00_4656 = 
CDR(BgL_pairz00_1800); } 
BgL_prevz00_863 = BgL_prevz00_4656; 
BgL_xz00_862 = BgL_xz00_4654; 
goto BgL_l1z00_864;} }  else 
{ /* Ieee/pairlist.scm 474 */
return ((bool_t)0);} } } }  else 
{ /* Ieee/pairlist.scm 466 */
return ((bool_t)0);} } }  else 
{ /* Ieee/pairlist.scm 481 */
return ((bool_t)0);} } } } 

}



/* &list? */
obj_t BGl_z62listzf3z91zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2553, obj_t BgL_xz00_2554)
{
{ /* Ieee/pairlist.scm 462 */
return 
BBOOL(
BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_xz00_2554));} 

}



/* append-2 */
BGL_EXPORTED_DEF obj_t bgl_append2(obj_t BgL_l1z00_51, obj_t BgL_l2z00_52)
{
{ /* Ieee/pairlist.scm 489 */
{ /* Ieee/pairlist.scm 490 */
obj_t BgL_headz00_880;
BgL_headz00_880 = 
MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_52); 
{ 
obj_t BgL_prevz00_881;obj_t BgL_tailz00_882;
BgL_prevz00_881 = BgL_headz00_880; 
BgL_tailz00_882 = BgL_l1z00_51; 
BgL_loopz00_883:
if(
NULLP(BgL_tailz00_882))
{ /* Ieee/pairlist.scm 492 */BNIL; }  else 
{ /* Ieee/pairlist.scm 494 */
obj_t BgL_newzd2prevzd2_885;
{ /* Ieee/pairlist.scm 494 */
obj_t BgL_arg1318z00_887;
{ /* Ieee/pairlist.scm 494 */
obj_t BgL_pairz00_1805;
if(
PAIRP(BgL_tailz00_882))
{ /* Ieee/pairlist.scm 494 */
BgL_pairz00_1805 = BgL_tailz00_882; }  else 
{ 
obj_t BgL_auxz00_4673;
BgL_auxz00_4673 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)20562)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_tailz00_882); 
FAILURE(BgL_auxz00_4673,BFALSE,BFALSE);} 
BgL_arg1318z00_887 = 
CAR(BgL_pairz00_1805); } 
BgL_newzd2prevzd2_885 = 
MAKE_YOUNG_PAIR(BgL_arg1318z00_887, BgL_l2z00_52); } 
SET_CDR(BgL_prevz00_881, BgL_newzd2prevzd2_885); 
{ /* Ieee/pairlist.scm 496 */
obj_t BgL_arg1317z00_886;
{ /* Ieee/pairlist.scm 496 */
obj_t BgL_pairz00_1807;
if(
PAIRP(BgL_tailz00_882))
{ /* Ieee/pairlist.scm 496 */
BgL_pairz00_1807 = BgL_tailz00_882; }  else 
{ 
obj_t BgL_auxz00_4682;
BgL_auxz00_4682 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)20633)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_tailz00_882); 
FAILURE(BgL_auxz00_4682,BFALSE,BFALSE);} 
BgL_arg1317z00_886 = 
CDR(BgL_pairz00_1807); } 
{ 
obj_t BgL_tailz00_4688;obj_t BgL_prevz00_4687;
BgL_prevz00_4687 = BgL_newzd2prevzd2_885; 
BgL_tailz00_4688 = BgL_arg1317z00_886; 
BgL_tailz00_882 = BgL_tailz00_4688; 
BgL_prevz00_881 = BgL_prevz00_4687; 
goto BgL_loopz00_883;} } } 
return 
CDR(BgL_headz00_880);} } } 

}



/* &append-2 */
obj_t BGl_z62appendzd22zb0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2555, obj_t BgL_l1z00_2556, obj_t BgL_l2z00_2557)
{
{ /* Ieee/pairlist.scm 489 */
{ /* Ieee/pairlist.scm 490 */
obj_t BgL_auxz00_4690;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_l1z00_2556))
{ /* Ieee/pairlist.scm 490 */
BgL_auxz00_4690 = BgL_l1z00_2556
; }  else 
{ 
obj_t BgL_auxz00_4693;
BgL_auxz00_4693 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)20438)), BGl_string2707z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_l1z00_2556); 
FAILURE(BgL_auxz00_4693,BFALSE,BFALSE);} 
return 
bgl_append2(BgL_auxz00_4690, BgL_l2z00_2557);} } 

}



/* eappend-2 */
BGL_EXPORTED_DEF obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_l1z00_53, obj_t BgL_l2z00_54)
{
{ /* Ieee/pairlist.scm 503 */
{ /* Ieee/pairlist.scm 504 */
obj_t BgL_headz00_888;
{ /* Ieee/pairlist.scm 504 */
bool_t BgL_test3429z00_4698;
{ /* Ieee/pairlist.scm 504 */
bool_t BgL_res1849z00_1809;
BgL_res1849z00_1809 = 
EPAIRP(BgL_l2z00_54); 
BgL_test3429z00_4698 = BgL_res1849z00_1809; } 
if(BgL_test3429z00_4698)
{ /* Ieee/pairlist.scm 505 */
obj_t BgL_arg1328z00_900;
{ /* Ieee/pairlist.scm 505 */
obj_t BgL_objz00_1810;
if(
EPAIRP(BgL_l2z00_54))
{ /* Ieee/pairlist.scm 505 */
BgL_objz00_1810 = BgL_l2z00_54; }  else 
{ 
obj_t BgL_auxz00_4702;
BgL_auxz00_4702 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)20981)), BGl_string2708z00zz__r4_pairs_and_lists_6_3z00, BGl_string2643z00zz__r4_pairs_and_lists_6_3z00, BgL_l2z00_54); 
FAILURE(BgL_auxz00_4702,BFALSE,BFALSE);} 
BgL_arg1328z00_900 = 
CER(BgL_objz00_1810); } 
{ /* Ieee/pairlist.scm 505 */
obj_t BgL_res1850z00_1811;
BgL_res1850z00_1811 = 
MAKE_YOUNG_EPAIR(BNIL, BgL_l2z00_54, BgL_arg1328z00_900); 
BgL_headz00_888 = BgL_res1850z00_1811; } }  else 
{ /* Ieee/pairlist.scm 504 */
BgL_headz00_888 = 
MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_54); } } 
{ 
obj_t BgL_prevz00_889;obj_t BgL_tailz00_890;
BgL_prevz00_889 = BgL_headz00_888; 
BgL_tailz00_890 = BgL_l1z00_53; 
BgL_loopz00_891:
if(
NULLP(BgL_tailz00_890))
{ /* Ieee/pairlist.scm 508 */BNIL; }  else 
{ /* Ieee/pairlist.scm 510 */
obj_t BgL_newzd2prevzd2_893;
{ /* Ieee/pairlist.scm 510 */
bool_t BgL_test3432z00_4711;
{ /* Ieee/pairlist.scm 510 */
bool_t BgL_res1852z00_1813;
BgL_res1852z00_1813 = 
EPAIRP(BgL_tailz00_890); 
BgL_test3432z00_4711 = BgL_res1852z00_1813; } 
if(BgL_test3432z00_4711)
{ /* Ieee/pairlist.scm 511 */
obj_t BgL_arg1324z00_896;obj_t BgL_arg1325z00_897;
{ /* Ieee/pairlist.scm 511 */
obj_t BgL_pairz00_1814;
if(
PAIRP(BgL_tailz00_890))
{ /* Ieee/pairlist.scm 511 */
BgL_pairz00_1814 = BgL_tailz00_890; }  else 
{ 
obj_t BgL_auxz00_4715;
BgL_auxz00_4715 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)21133)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_tailz00_890); 
FAILURE(BgL_auxz00_4715,BFALSE,BFALSE);} 
BgL_arg1324z00_896 = 
CAR(BgL_pairz00_1814); } 
{ /* Ieee/pairlist.scm 511 */
obj_t BgL_objz00_1815;
if(
EPAIRP(BgL_tailz00_890))
{ /* Ieee/pairlist.scm 511 */
BgL_objz00_1815 = BgL_tailz00_890; }  else 
{ 
obj_t BgL_auxz00_4722;
BgL_auxz00_4722 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)21147)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2643z00zz__r4_pairs_and_lists_6_3z00, BgL_tailz00_890); 
FAILURE(BgL_auxz00_4722,BFALSE,BFALSE);} 
BgL_arg1325z00_897 = 
CER(BgL_objz00_1815); } 
{ /* Ieee/pairlist.scm 511 */
obj_t BgL_res1853z00_1816;
BgL_res1853z00_1816 = 
MAKE_YOUNG_EPAIR(BgL_arg1324z00_896, BgL_l2z00_54, BgL_arg1325z00_897); 
BgL_newzd2prevzd2_893 = BgL_res1853z00_1816; } }  else 
{ /* Ieee/pairlist.scm 512 */
obj_t BgL_arg1326z00_898;
{ /* Ieee/pairlist.scm 512 */
obj_t BgL_pairz00_1817;
if(
PAIRP(BgL_tailz00_890))
{ /* Ieee/pairlist.scm 512 */
BgL_pairz00_1817 = BgL_tailz00_890; }  else 
{ 
obj_t BgL_auxz00_4730;
BgL_auxz00_4730 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)21175)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_tailz00_890); 
FAILURE(BgL_auxz00_4730,BFALSE,BFALSE);} 
BgL_arg1326z00_898 = 
CAR(BgL_pairz00_1817); } 
BgL_newzd2prevzd2_893 = 
MAKE_YOUNG_PAIR(BgL_arg1326z00_898, BgL_l2z00_54); } } 
SET_CDR(BgL_prevz00_889, BgL_newzd2prevzd2_893); 
{ /* Ieee/pairlist.scm 514 */
obj_t BgL_arg1322z00_894;
{ /* Ieee/pairlist.scm 514 */
obj_t BgL_pairz00_1819;
if(
PAIRP(BgL_tailz00_890))
{ /* Ieee/pairlist.scm 514 */
BgL_pairz00_1819 = BgL_tailz00_890; }  else 
{ 
obj_t BgL_auxz00_4739;
BgL_auxz00_4739 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)21247)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_tailz00_890); 
FAILURE(BgL_auxz00_4739,BFALSE,BFALSE);} 
BgL_arg1322z00_894 = 
CDR(BgL_pairz00_1819); } 
{ 
obj_t BgL_tailz00_4745;obj_t BgL_prevz00_4744;
BgL_prevz00_4744 = BgL_newzd2prevzd2_893; 
BgL_tailz00_4745 = BgL_arg1322z00_894; 
BgL_tailz00_890 = BgL_tailz00_4745; 
BgL_prevz00_889 = BgL_prevz00_4744; 
goto BgL_loopz00_891;} } } 
return 
CDR(BgL_headz00_888);} } } 

}



/* &eappend-2 */
obj_t BGl_z62eappendzd22zb0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2558, obj_t BgL_l1z00_2559, obj_t BgL_l2z00_2560)
{
{ /* Ieee/pairlist.scm 503 */
{ /* Ieee/pairlist.scm 504 */
obj_t BgL_auxz00_4747;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_l1z00_2559))
{ /* Ieee/pairlist.scm 504 */
BgL_auxz00_4747 = BgL_l1z00_2559
; }  else 
{ 
obj_t BgL_auxz00_4750;
BgL_auxz00_4750 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)20929)), BGl_string2709z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_l1z00_2559); 
FAILURE(BgL_auxz00_4750,BFALSE,BFALSE);} 
return 
BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4747, BgL_l2z00_2560);} } 

}



/* append */
BGL_EXPORTED_DEF obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_55)
{
{ /* Ieee/pairlist.scm 521 */
return 
BGl_appendzd2listze72z35zz__r4_pairs_and_lists_6_3z00(BgL_lz00_55);} 

}



/* append-list~2 */
obj_t BGl_appendzd2listze72z35zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_901)
{
{ /* Ieee/pairlist.scm 522 */
{ /* Ieee/pairlist.scm 523 */
long BgL_lenz00_903;
{ /* Ieee/pairlist.scm 523 */
obj_t BgL_auxz00_4756;
{ /* Ieee/pairlist.scm 523 */
bool_t BgL_test3438z00_4757;
if(
PAIRP(BgL_lz00_901))
{ /* Ieee/pairlist.scm 226 */
BgL_test3438z00_4757 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3438z00_4757 = 
NULLP(BgL_lz00_901)
; } 
if(BgL_test3438z00_4757)
{ /* Ieee/pairlist.scm 523 */
BgL_auxz00_4756 = BgL_lz00_901
; }  else 
{ 
obj_t BgL_auxz00_4761;
BgL_auxz00_4761 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)21587)), BGl_string2710z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_901); 
FAILURE(BgL_auxz00_4761,BFALSE,BFALSE);} } 
BgL_lenz00_903 = 
bgl_list_length(BgL_auxz00_4756); } 
{ 

switch( BgL_lenz00_903) { case ((long)0) : 

return BNIL;break;case ((long)1) : 

{ /* Ieee/pairlist.scm 527 */
obj_t BgL_pairz00_1823;
if(
PAIRP(BgL_lz00_901))
{ /* Ieee/pairlist.scm 527 */
BgL_pairz00_1823 = BgL_lz00_901; }  else 
{ 
obj_t BgL_auxz00_4768;
BgL_auxz00_4768 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)21656)), BGl_string2710z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_901); 
FAILURE(BgL_auxz00_4768,BFALSE,BFALSE);} 
return 
CAR(BgL_pairz00_1823);} break;case ((long)2) : 

{ /* Ieee/pairlist.scm 529 */
obj_t BgL_arg1330z00_907;obj_t BgL_arg1331z00_908;
{ /* Ieee/pairlist.scm 529 */
obj_t BgL_pairz00_1824;
if(
PAIRP(BgL_lz00_901))
{ /* Ieee/pairlist.scm 529 */
BgL_pairz00_1824 = BgL_lz00_901; }  else 
{ 
obj_t BgL_auxz00_4775;
BgL_auxz00_4775 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)21703)), BGl_string2710z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_901); 
FAILURE(BgL_auxz00_4775,BFALSE,BFALSE);} 
BgL_arg1330z00_907 = 
CAR(BgL_pairz00_1824); } 
{ /* Ieee/pairlist.scm 530 */
obj_t BgL_pairz00_1826;
{ /* Ieee/pairlist.scm 530 */
obj_t BgL_pairz00_1825;
if(
PAIRP(BgL_lz00_901))
{ /* Ieee/pairlist.scm 530 */
BgL_pairz00_1825 = BgL_lz00_901; }  else 
{ 
obj_t BgL_auxz00_4782;
BgL_auxz00_4782 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)21724)), BGl_string2710z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_901); 
FAILURE(BgL_auxz00_4782,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2256z00_2905;
BgL_aux2256z00_2905 = 
CDR(BgL_pairz00_1825); 
if(
PAIRP(BgL_aux2256z00_2905))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_1826 = BgL_aux2256z00_2905; }  else 
{ 
obj_t BgL_auxz00_4789;
BgL_auxz00_4789 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2710z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2256z00_2905); 
FAILURE(BgL_auxz00_4789,BFALSE,BFALSE);} } } 
BgL_arg1331z00_908 = 
CAR(BgL_pairz00_1826); } 
{ /* Ieee/pairlist.scm 529 */
obj_t BgL_auxz00_4794;
{ /* Ieee/pairlist.scm 529 */
bool_t BgL_test3444z00_4795;
if(
PAIRP(BgL_arg1330z00_907))
{ /* Ieee/pairlist.scm 226 */
BgL_test3444z00_4795 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3444z00_4795 = 
NULLP(BgL_arg1330z00_907)
; } 
if(BgL_test3444z00_4795)
{ /* Ieee/pairlist.scm 529 */
BgL_auxz00_4794 = BgL_arg1330z00_907
; }  else 
{ 
obj_t BgL_auxz00_4799;
BgL_auxz00_4799 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)21688)), BGl_string2710z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1330z00_907); 
FAILURE(BgL_auxz00_4799,BFALSE,BFALSE);} } 
return 
BGl_appendzd221011zd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4794, BgL_arg1331z00_908);} } break;
default: 
{ /* Ieee/pairlist.scm 531 */
obj_t BgL_arg1334z00_910;obj_t BgL_arg1335z00_911;
{ /* Ieee/pairlist.scm 531 */
obj_t BgL_pairz00_1821;
if(
PAIRP(BgL_lz00_901))
{ /* Ieee/pairlist.scm 531 */
BgL_pairz00_1821 = BgL_lz00_901; }  else 
{ 
obj_t BgL_auxz00_4806;
BgL_auxz00_4806 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)21749)), BGl_string2711z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_901); 
FAILURE(BgL_auxz00_4806,BFALSE,BFALSE);} 
BgL_arg1334z00_910 = 
CAR(BgL_pairz00_1821); } 
{ /* Ieee/pairlist.scm 532 */
obj_t BgL_arg1337z00_912;
{ /* Ieee/pairlist.scm 532 */
obj_t BgL_pairz00_1822;
if(
PAIRP(BgL_lz00_901))
{ /* Ieee/pairlist.scm 532 */
BgL_pairz00_1822 = BgL_lz00_901; }  else 
{ 
obj_t BgL_auxz00_4813;
BgL_auxz00_4813 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)21778)), BGl_string2711z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_901); 
FAILURE(BgL_auxz00_4813,BFALSE,BFALSE);} 
BgL_arg1337z00_912 = 
CDR(BgL_pairz00_1822); } 
BgL_arg1335z00_911 = 
BGl_appendzd2listze72z35zz__r4_pairs_and_lists_6_3z00(BgL_arg1337z00_912); } 
{ /* Ieee/pairlist.scm 531 */
obj_t BgL_auxz00_4819;
{ /* Ieee/pairlist.scm 531 */
bool_t BgL_test3448z00_4820;
if(
PAIRP(BgL_arg1334z00_910))
{ /* Ieee/pairlist.scm 226 */
BgL_test3448z00_4820 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3448z00_4820 = 
NULLP(BgL_arg1334z00_910)
; } 
if(BgL_test3448z00_4820)
{ /* Ieee/pairlist.scm 531 */
BgL_auxz00_4819 = BgL_arg1334z00_910
; }  else 
{ 
obj_t BgL_auxz00_4824;
BgL_auxz00_4824 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)21734)), BGl_string2711z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1334z00_910); 
FAILURE(BgL_auxz00_4824,BFALSE,BFALSE);} } 
return 
BGl_appendzd221011zd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4819, BgL_arg1335z00_911);} } } } } } 

}



/* &append */
obj_t BGl_z62appendz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2561, obj_t BgL_lz00_2562)
{
{ /* Ieee/pairlist.scm 521 */
return 
BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_lz00_2562);} 

}



/* eappend */
BGL_EXPORTED_DEF obj_t BGl_eappendz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_56)
{
{ /* Ieee/pairlist.scm 538 */
return 
BGl_appendzd2listze71z35zz__r4_pairs_and_lists_6_3z00(BgL_lz00_56);} 

}



/* append-list~1 */
obj_t BGl_appendzd2listze71z35zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_913)
{
{ /* Ieee/pairlist.scm 539 */
{ /* Ieee/pairlist.scm 540 */
long BgL_lenz00_915;
{ /* Ieee/pairlist.scm 540 */
obj_t BgL_auxz00_4832;
{ /* Ieee/pairlist.scm 540 */
bool_t BgL_test3450z00_4833;
if(
PAIRP(BgL_lz00_913))
{ /* Ieee/pairlist.scm 226 */
BgL_test3450z00_4833 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3450z00_4833 = 
NULLP(BgL_lz00_913)
; } 
if(BgL_test3450z00_4833)
{ /* Ieee/pairlist.scm 540 */
BgL_auxz00_4832 = BgL_lz00_913
; }  else 
{ 
obj_t BgL_auxz00_4837;
BgL_auxz00_4837 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22110)), BGl_string2712z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_913); 
FAILURE(BgL_auxz00_4837,BFALSE,BFALSE);} } 
BgL_lenz00_915 = 
bgl_list_length(BgL_auxz00_4832); } 
{ 

switch( BgL_lenz00_915) { case ((long)0) : 

return BNIL;break;case ((long)1) : 

{ /* Ieee/pairlist.scm 544 */
obj_t BgL_pairz00_1829;
if(
PAIRP(BgL_lz00_913))
{ /* Ieee/pairlist.scm 544 */
BgL_pairz00_1829 = BgL_lz00_913; }  else 
{ 
obj_t BgL_auxz00_4844;
BgL_auxz00_4844 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22179)), BGl_string2712z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_913); 
FAILURE(BgL_auxz00_4844,BFALSE,BFALSE);} 
return 
CAR(BgL_pairz00_1829);} break;case ((long)2) : 

{ /* Ieee/pairlist.scm 546 */
obj_t BgL_arg1339z00_919;obj_t BgL_arg1340z00_920;
{ /* Ieee/pairlist.scm 546 */
obj_t BgL_pairz00_1830;
if(
PAIRP(BgL_lz00_913))
{ /* Ieee/pairlist.scm 546 */
BgL_pairz00_1830 = BgL_lz00_913; }  else 
{ 
obj_t BgL_auxz00_4851;
BgL_auxz00_4851 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22227)), BGl_string2712z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_913); 
FAILURE(BgL_auxz00_4851,BFALSE,BFALSE);} 
BgL_arg1339z00_919 = 
CAR(BgL_pairz00_1830); } 
{ /* Ieee/pairlist.scm 547 */
obj_t BgL_pairz00_1832;
{ /* Ieee/pairlist.scm 547 */
obj_t BgL_pairz00_1831;
if(
PAIRP(BgL_lz00_913))
{ /* Ieee/pairlist.scm 547 */
BgL_pairz00_1831 = BgL_lz00_913; }  else 
{ 
obj_t BgL_auxz00_4858;
BgL_auxz00_4858 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22249)), BGl_string2712z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_913); 
FAILURE(BgL_auxz00_4858,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2274z00_2923;
BgL_aux2274z00_2923 = 
CDR(BgL_pairz00_1831); 
if(
PAIRP(BgL_aux2274z00_2923))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_1832 = BgL_aux2274z00_2923; }  else 
{ 
obj_t BgL_auxz00_4865;
BgL_auxz00_4865 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2712z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2274z00_2923); 
FAILURE(BgL_auxz00_4865,BFALSE,BFALSE);} } } 
BgL_arg1340z00_920 = 
CAR(BgL_pairz00_1832); } 
{ /* Ieee/pairlist.scm 546 */
obj_t BgL_auxz00_4870;
{ /* Ieee/pairlist.scm 546 */
bool_t BgL_test3456z00_4871;
if(
PAIRP(BgL_arg1339z00_919))
{ /* Ieee/pairlist.scm 226 */
BgL_test3456z00_4871 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3456z00_4871 = 
NULLP(BgL_arg1339z00_919)
; } 
if(BgL_test3456z00_4871)
{ /* Ieee/pairlist.scm 546 */
BgL_auxz00_4870 = BgL_arg1339z00_919
; }  else 
{ 
obj_t BgL_auxz00_4875;
BgL_auxz00_4875 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22228)), BGl_string2712z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1339z00_919); 
FAILURE(BgL_auxz00_4875,BFALSE,BFALSE);} } 
return 
BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4870, BgL_arg1340z00_920);} } break;
default: 
{ /* Ieee/pairlist.scm 548 */
obj_t BgL_arg1342z00_922;obj_t BgL_arg1343z00_923;
{ /* Ieee/pairlist.scm 548 */
obj_t BgL_pairz00_1827;
if(
PAIRP(BgL_lz00_913))
{ /* Ieee/pairlist.scm 548 */
BgL_pairz00_1827 = BgL_lz00_913; }  else 
{ 
obj_t BgL_auxz00_4882;
BgL_auxz00_4882 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22275)), BGl_string2713z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_913); 
FAILURE(BgL_auxz00_4882,BFALSE,BFALSE);} 
BgL_arg1342z00_922 = 
CAR(BgL_pairz00_1827); } 
{ /* Ieee/pairlist.scm 549 */
obj_t BgL_auxz00_4887;
{ /* Ieee/pairlist.scm 549 */
obj_t BgL_pairz00_1828;
if(
PAIRP(BgL_lz00_913))
{ /* Ieee/pairlist.scm 549 */
BgL_pairz00_1828 = BgL_lz00_913; }  else 
{ 
obj_t BgL_auxz00_4890;
BgL_auxz00_4890 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22305)), BGl_string2713z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_913); 
FAILURE(BgL_auxz00_4890,BFALSE,BFALSE);} 
BgL_auxz00_4887 = 
CDR(BgL_pairz00_1828); } 
BgL_arg1343z00_923 = 
BGl_appendzd2listze71z35zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4887); } 
{ /* Ieee/pairlist.scm 548 */
obj_t BgL_auxz00_4896;
{ /* Ieee/pairlist.scm 548 */
bool_t BgL_test3460z00_4897;
if(
PAIRP(BgL_arg1342z00_922))
{ /* Ieee/pairlist.scm 226 */
BgL_test3460z00_4897 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3460z00_4897 = 
NULLP(BgL_arg1342z00_922)
; } 
if(BgL_test3460z00_4897)
{ /* Ieee/pairlist.scm 548 */
BgL_auxz00_4896 = BgL_arg1342z00_922
; }  else 
{ 
obj_t BgL_auxz00_4901;
BgL_auxz00_4901 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22276)), BGl_string2713z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1342z00_922); 
FAILURE(BgL_auxz00_4901,BFALSE,BFALSE);} } 
return 
BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4896, BgL_arg1343z00_923);} } } } } } 

}



/* &eappend */
obj_t BGl_z62eappendz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2563, obj_t BgL_lz00_2564)
{
{ /* Ieee/pairlist.scm 538 */
return 
BGl_eappendz00zz__r4_pairs_and_lists_6_3z00(BgL_lz00_2564);} 

}



/* append! */
BGL_EXPORTED_DEF obj_t BGl_appendz12z12zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_57)
{
{ /* Ieee/pairlist.scm 555 */
{ /* Ieee/pairlist.scm 567 */
obj_t BgL_aux2278z00_2927;
BgL_aux2278z00_2927 = 
BGl_appendzd2listze70z35zz__r4_pairs_and_lists_6_3z00(BgL_lz00_57); 
{ /* Ieee/pairlist.scm 567 */
bool_t BgL_test3462z00_4909;
if(
PAIRP(BgL_aux2278z00_2927))
{ /* Ieee/pairlist.scm 226 */
BgL_test3462z00_4909 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3462z00_4909 = 
NULLP(BgL_aux2278z00_2927)
; } 
if(BgL_test3462z00_4909)
{ /* Ieee/pairlist.scm 567 */
return BgL_aux2278z00_2927;}  else 
{ 
obj_t BgL_auxz00_4913;
BgL_auxz00_4913 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22849)), BGl_string2714z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2278z00_2927); 
FAILURE(BgL_auxz00_4913,BFALSE,BFALSE);} } } } 

}



/* append-list~0 */
obj_t BGl_appendzd2listze70z35zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_925)
{
{ /* Ieee/pairlist.scm 556 */
{ /* Ieee/pairlist.scm 557 */
long BgL_lenz00_927;
{ /* Ieee/pairlist.scm 557 */
obj_t BgL_auxz00_4917;
{ /* Ieee/pairlist.scm 557 */
bool_t BgL_test3464z00_4918;
if(
PAIRP(BgL_lz00_925))
{ /* Ieee/pairlist.scm 226 */
BgL_test3464z00_4918 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3464z00_4918 = 
NULLP(BgL_lz00_925)
; } 
if(BgL_test3464z00_4918)
{ /* Ieee/pairlist.scm 557 */
BgL_auxz00_4917 = BgL_lz00_925
; }  else 
{ 
obj_t BgL_auxz00_4922;
BgL_auxz00_4922 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22637)), BGl_string2715z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_925); 
FAILURE(BgL_auxz00_4922,BFALSE,BFALSE);} } 
BgL_lenz00_927 = 
bgl_list_length(BgL_auxz00_4917); } 
{ 

switch( BgL_lenz00_927) { case ((long)0) : 

return BNIL;break;case ((long)1) : 

{ /* Ieee/pairlist.scm 561 */
obj_t BgL_pairz00_1835;
if(
PAIRP(BgL_lz00_925))
{ /* Ieee/pairlist.scm 561 */
BgL_pairz00_1835 = BgL_lz00_925; }  else 
{ 
obj_t BgL_auxz00_4929;
BgL_auxz00_4929 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22706)), BGl_string2715z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_925); 
FAILURE(BgL_auxz00_4929,BFALSE,BFALSE);} 
return 
CAR(BgL_pairz00_1835);} break;case ((long)2) : 

{ /* Ieee/pairlist.scm 563 */
obj_t BgL_arg1346z00_931;obj_t BgL_arg1347z00_932;
{ /* Ieee/pairlist.scm 563 */
obj_t BgL_pairz00_1836;
if(
PAIRP(BgL_lz00_925))
{ /* Ieee/pairlist.scm 563 */
BgL_pairz00_1836 = BgL_lz00_925; }  else 
{ 
obj_t BgL_auxz00_4936;
BgL_auxz00_4936 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22754)), BGl_string2715z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_925); 
FAILURE(BgL_auxz00_4936,BFALSE,BFALSE);} 
BgL_arg1346z00_931 = 
CAR(BgL_pairz00_1836); } 
{ /* Ieee/pairlist.scm 564 */
obj_t BgL_pairz00_1838;
{ /* Ieee/pairlist.scm 564 */
obj_t BgL_pairz00_1837;
if(
PAIRP(BgL_lz00_925))
{ /* Ieee/pairlist.scm 564 */
BgL_pairz00_1837 = BgL_lz00_925; }  else 
{ 
obj_t BgL_auxz00_4943;
BgL_auxz00_4943 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22776)), BGl_string2715z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_925); 
FAILURE(BgL_auxz00_4943,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2296z00_2945;
BgL_aux2296z00_2945 = 
CDR(BgL_pairz00_1837); 
if(
PAIRP(BgL_aux2296z00_2945))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_1838 = BgL_aux2296z00_2945; }  else 
{ 
obj_t BgL_auxz00_4950;
BgL_auxz00_4950 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2715z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2296z00_2945); 
FAILURE(BgL_auxz00_4950,BFALSE,BFALSE);} } } 
BgL_arg1347z00_932 = 
CAR(BgL_pairz00_1838); } 
{ /* Ieee/pairlist.scm 563 */
obj_t BgL_auxz00_4964;obj_t BgL_auxz00_4955;
{ /* Ieee/pairlist.scm 564 */
bool_t BgL_test3472z00_4965;
if(
PAIRP(BgL_arg1347z00_932))
{ /* Ieee/pairlist.scm 226 */
BgL_test3472z00_4965 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3472z00_4965 = 
NULLP(BgL_arg1347z00_932)
; } 
if(BgL_test3472z00_4965)
{ /* Ieee/pairlist.scm 564 */
BgL_auxz00_4964 = BgL_arg1347z00_932
; }  else 
{ 
obj_t BgL_auxz00_4969;
BgL_auxz00_4969 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22778)), BGl_string2715z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1347z00_932); 
FAILURE(BgL_auxz00_4969,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 563 */
bool_t BgL_test3470z00_4956;
if(
PAIRP(BgL_arg1346z00_931))
{ /* Ieee/pairlist.scm 226 */
BgL_test3470z00_4956 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3470z00_4956 = 
NULLP(BgL_arg1346z00_931)
; } 
if(BgL_test3470z00_4956)
{ /* Ieee/pairlist.scm 563 */
BgL_auxz00_4955 = BgL_arg1346z00_931
; }  else 
{ 
obj_t BgL_auxz00_4960;
BgL_auxz00_4960 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22755)), BGl_string2715z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1346z00_931); 
FAILURE(BgL_auxz00_4960,BFALSE,BFALSE);} } 
return 
BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4955, BgL_auxz00_4964);} } break;
default: 
{ /* Ieee/pairlist.scm 565 */
obj_t BgL_arg1350z00_934;obj_t BgL_arg1351z00_935;
{ /* Ieee/pairlist.scm 565 */
obj_t BgL_pairz00_1833;
if(
PAIRP(BgL_lz00_925))
{ /* Ieee/pairlist.scm 565 */
BgL_pairz00_1833 = BgL_lz00_925; }  else 
{ 
obj_t BgL_auxz00_4976;
BgL_auxz00_4976 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22802)), BGl_string2716z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_925); 
FAILURE(BgL_auxz00_4976,BFALSE,BFALSE);} 
BgL_arg1350z00_934 = 
CAR(BgL_pairz00_1833); } 
{ /* Ieee/pairlist.scm 566 */
obj_t BgL_arg1352z00_936;
{ /* Ieee/pairlist.scm 566 */
obj_t BgL_pairz00_1834;
if(
PAIRP(BgL_lz00_925))
{ /* Ieee/pairlist.scm 566 */
BgL_pairz00_1834 = BgL_lz00_925; }  else 
{ 
obj_t BgL_auxz00_4983;
BgL_auxz00_4983 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22832)), BGl_string2716z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_925); 
FAILURE(BgL_auxz00_4983,BFALSE,BFALSE);} 
BgL_arg1352z00_936 = 
CDR(BgL_pairz00_1834); } 
BgL_arg1351z00_935 = 
BGl_appendzd2listze70z35zz__r4_pairs_and_lists_6_3z00(BgL_arg1352z00_936); } 
{ /* Ieee/pairlist.scm 565 */
obj_t BgL_auxz00_4998;obj_t BgL_auxz00_4989;
{ /* Ieee/pairlist.scm 566 */
bool_t BgL_test3478z00_4999;
if(
PAIRP(BgL_arg1351z00_935))
{ /* Ieee/pairlist.scm 226 */
BgL_test3478z00_4999 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3478z00_4999 = 
NULLP(BgL_arg1351z00_935)
; } 
if(BgL_test3478z00_4999)
{ /* Ieee/pairlist.scm 566 */
BgL_auxz00_4998 = BgL_arg1351z00_935
; }  else 
{ 
obj_t BgL_auxz00_5003;
BgL_auxz00_5003 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22834)), BGl_string2716z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1351z00_935); 
FAILURE(BgL_auxz00_5003,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 565 */
bool_t BgL_test3476z00_4990;
if(
PAIRP(BgL_arg1350z00_934))
{ /* Ieee/pairlist.scm 226 */
BgL_test3476z00_4990 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3476z00_4990 = 
NULLP(BgL_arg1350z00_934)
; } 
if(BgL_test3476z00_4990)
{ /* Ieee/pairlist.scm 565 */
BgL_auxz00_4989 = BgL_arg1350z00_934
; }  else 
{ 
obj_t BgL_auxz00_4994;
BgL_auxz00_4994 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22803)), BGl_string2716z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1350z00_934); 
FAILURE(BgL_auxz00_4994,BFALSE,BFALSE);} } 
return 
BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4989, BgL_auxz00_4998);} } } } } } 

}



/* &append! */
obj_t BGl_z62appendz12z70zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2565, obj_t BgL_lz00_2566)
{
{ /* Ieee/pairlist.scm 555 */
return 
BGl_appendz12z12zz__r4_pairs_and_lists_6_3z00(BgL_lz00_2566);} 

}



/* append-2! */
BGL_EXPORTED_DEF obj_t BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_xz00_58, obj_t BgL_yz00_59)
{
{ /* Ieee/pairlist.scm 572 */
if(
NULLP(BgL_xz00_58))
{ /* Ieee/pairlist.scm 573 */
return BgL_yz00_59;}  else 
{ /* Ieee/pairlist.scm 576 */
obj_t BgL_arg1354z00_939;
BgL_arg1354z00_939 = 
CDR(BgL_xz00_58); 
{ 
obj_t BgL_az00_1852;obj_t BgL_bz00_1853;
BgL_az00_1852 = BgL_xz00_58; 
BgL_bz00_1853 = BgL_arg1354z00_939; 
BgL_dozd2loopzd2zd21018zd2_1851:
if(
NULLP(BgL_bz00_1853))
{ /* Ieee/pairlist.scm 575 */
{ /* Ieee/pairlist.scm 578 */
obj_t BgL_pairz00_1859;
if(
PAIRP(BgL_az00_1852))
{ /* Ieee/pairlist.scm 578 */
BgL_pairz00_1859 = BgL_az00_1852; }  else 
{ 
obj_t BgL_auxz00_5017;
BgL_auxz00_5017 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)23231)), BGl_string2717z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_az00_1852); 
FAILURE(BgL_auxz00_5017,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_1859, BgL_yz00_59); } 
return BgL_xz00_58;}  else 
{ /* Ieee/pairlist.scm 576 */
obj_t BgL_arg1357z00_1857;
{ /* Ieee/pairlist.scm 576 */
obj_t BgL_pairz00_1860;
if(
PAIRP(BgL_bz00_1853))
{ /* Ieee/pairlist.scm 576 */
BgL_pairz00_1860 = BgL_bz00_1853; }  else 
{ 
obj_t BgL_auxz00_5024;
BgL_auxz00_5024 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)23184)), BGl_string2717z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_bz00_1853); 
FAILURE(BgL_auxz00_5024,BFALSE,BFALSE);} 
BgL_arg1357z00_1857 = 
CDR(BgL_pairz00_1860); } 
{ 
obj_t BgL_bz00_5030;obj_t BgL_az00_5029;
BgL_az00_5029 = BgL_bz00_1853; 
BgL_bz00_5030 = BgL_arg1357z00_1857; 
BgL_bz00_1853 = BgL_bz00_5030; 
BgL_az00_1852 = BgL_az00_5029; 
goto BgL_dozd2loopzd2zd21018zd2_1851;} } } } } 

}



/* &append-2! */
obj_t BGl_z62appendzd22z12za2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2567, obj_t BgL_xz00_2568, obj_t BgL_yz00_2569)
{
{ /* Ieee/pairlist.scm 572 */
{ /* Ieee/pairlist.scm 573 */
obj_t BgL_auxz00_5038;obj_t BgL_auxz00_5031;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_yz00_2569))
{ /* Ieee/pairlist.scm 573 */
BgL_auxz00_5038 = BgL_yz00_2569
; }  else 
{ 
obj_t BgL_auxz00_5041;
BgL_auxz00_5041 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)23116)), BGl_string2718z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_2569); 
FAILURE(BgL_auxz00_5041,BFALSE,BFALSE);} 
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_xz00_2568))
{ /* Ieee/pairlist.scm 573 */
BgL_auxz00_5031 = BgL_xz00_2568
; }  else 
{ 
obj_t BgL_auxz00_5034;
BgL_auxz00_5034 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)23116)), BGl_string2718z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_xz00_2568); 
FAILURE(BgL_auxz00_5034,BFALSE,BFALSE);} 
return 
BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_5031, BgL_auxz00_5038);} } 

}



/* length */
BGL_EXPORTED_DEF long bgl_list_length(obj_t BgL_listz00_60)
{
{ /* Ieee/pairlist.scm 584 */
{ 
obj_t BgL_lz00_1877;long BgL_resz00_1878;
BgL_lz00_1877 = BgL_listz00_60; 
BgL_resz00_1878 = ((long)0); 
BgL_loopz00_1876:
if(
NULLP(BgL_lz00_1877))
{ /* Ieee/pairlist.scm 588 */
return BgL_resz00_1878;}  else 
{ 
long BgL_resz00_5056;obj_t BgL_lz00_5048;
{ /* Ieee/pairlist.scm 591 */
obj_t BgL_pairz00_1886;
if(
PAIRP(BgL_lz00_1877))
{ /* Ieee/pairlist.scm 591 */
BgL_pairz00_1886 = BgL_lz00_1877; }  else 
{ 
obj_t BgL_auxz00_5051;
BgL_auxz00_5051 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)23604)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1877); 
FAILURE(BgL_auxz00_5051,BFALSE,BFALSE);} 
BgL_lz00_5048 = 
CDR(BgL_pairz00_1886); } 
BgL_resz00_5056 = 
(((long)1)+BgL_resz00_1878); 
BgL_resz00_1878 = BgL_resz00_5056; 
BgL_lz00_1877 = BgL_lz00_5048; 
goto BgL_loopz00_1876;} } } 

}



/* &length */
obj_t BGl_z62lengthz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2570, obj_t BgL_listz00_2571)
{
{ /* Ieee/pairlist.scm 584 */
{ /* Ieee/pairlist.scm 585 */
long BgL_tmpz00_5058;
{ /* Ieee/pairlist.scm 585 */
obj_t BgL_auxz00_5059;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_listz00_2571))
{ /* Ieee/pairlist.scm 585 */
BgL_auxz00_5059 = BgL_listz00_2571
; }  else 
{ 
obj_t BgL_auxz00_5062;
BgL_auxz00_5062 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)23501)), BGl_string2719z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2571); 
FAILURE(BgL_auxz00_5062,BFALSE,BFALSE);} 
BgL_tmpz00_5058 = 
bgl_list_length(BgL_auxz00_5059); } 
return 
BINT(BgL_tmpz00_5058);} } 

}



/* reverse */
BGL_EXPORTED_DEF obj_t bgl_reverse(obj_t BgL_lz00_61)
{
{ /* Ieee/pairlist.scm 596 */
{ 
obj_t BgL_lz00_1904;obj_t BgL_accz00_1905;
BgL_lz00_1904 = BgL_lz00_61; 
BgL_accz00_1905 = BNIL; 
BgL_loopz00_1903:
if(
NULLP(BgL_lz00_1904))
{ /* Ieee/pairlist.scm 599 */
return BgL_accz00_1905;}  else 
{ /* Ieee/pairlist.scm 601 */
obj_t BgL_arg1364z00_1911;obj_t BgL_arg1365z00_1912;
{ /* Ieee/pairlist.scm 601 */
obj_t BgL_pairz00_1915;
if(
PAIRP(BgL_lz00_1904))
{ /* Ieee/pairlist.scm 601 */
BgL_pairz00_1915 = BgL_lz00_1904; }  else 
{ 
obj_t BgL_auxz00_5072;
BgL_auxz00_5072 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)23949)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1904); 
FAILURE(BgL_auxz00_5072,BFALSE,BFALSE);} 
BgL_arg1364z00_1911 = 
CDR(BgL_pairz00_1915); } 
{ /* Ieee/pairlist.scm 601 */
obj_t BgL_arg1367z00_1913;
{ /* Ieee/pairlist.scm 601 */
obj_t BgL_pairz00_1916;
if(
PAIRP(BgL_lz00_1904))
{ /* Ieee/pairlist.scm 601 */
BgL_pairz00_1916 = BgL_lz00_1904; }  else 
{ 
obj_t BgL_auxz00_5079;
BgL_auxz00_5079 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)23963)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1904); 
FAILURE(BgL_auxz00_5079,BFALSE,BFALSE);} 
BgL_arg1367z00_1913 = 
CAR(BgL_pairz00_1916); } 
BgL_arg1365z00_1912 = 
MAKE_YOUNG_PAIR(BgL_arg1367z00_1913, BgL_accz00_1905); } 
{ 
obj_t BgL_accz00_5086;obj_t BgL_lz00_5085;
BgL_lz00_5085 = BgL_arg1364z00_1911; 
BgL_accz00_5086 = BgL_arg1365z00_1912; 
BgL_accz00_1905 = BgL_accz00_5086; 
BgL_lz00_1904 = BgL_lz00_5085; 
goto BgL_loopz00_1903;} } } } 

}



/* &reverse */
obj_t BGl_z62reversez62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2572, obj_t BgL_lz00_2573)
{
{ /* Ieee/pairlist.scm 596 */
{ /* Ieee/pairlist.scm 597 */
obj_t BgL_auxz00_5087;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_lz00_2573))
{ /* Ieee/pairlist.scm 597 */
BgL_auxz00_5087 = BgL_lz00_2573
; }  else 
{ 
obj_t BgL_auxz00_5090;
BgL_auxz00_5090 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)23871)), BGl_string2720z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_2573); 
FAILURE(BgL_auxz00_5090,BFALSE,BFALSE);} 
return 
bgl_reverse(BgL_auxz00_5087);} } 

}



/* ereverse */
BGL_EXPORTED_DEF obj_t BGl_ereversez00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_62)
{
{ /* Ieee/pairlist.scm 606 */
{ 
obj_t BgL_lz00_966;obj_t BgL_accz00_967;
BgL_lz00_966 = BgL_lz00_62; 
BgL_accz00_967 = BNIL; 
BgL_zc3z04anonymousza31368ze3z87_968:
if(
NULLP(BgL_lz00_966))
{ /* Ieee/pairlist.scm 609 */
return BgL_accz00_967;}  else 
{ /* Ieee/pairlist.scm 611 */
obj_t BgL_arg1370z00_970;obj_t BgL_arg1371z00_971;
{ /* Ieee/pairlist.scm 611 */
obj_t BgL_pairz00_1918;
if(
PAIRP(BgL_lz00_966))
{ /* Ieee/pairlist.scm 611 */
BgL_pairz00_1918 = BgL_lz00_966; }  else 
{ 
obj_t BgL_auxz00_5099;
BgL_auxz00_5099 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)24300)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_966); 
FAILURE(BgL_auxz00_5099,BFALSE,BFALSE);} 
BgL_arg1370z00_970 = 
CDR(BgL_pairz00_1918); } 
{ /* Ieee/pairlist.scm 612 */
bool_t BgL_test3495z00_5104;
{ /* Ieee/pairlist.scm 612 */
bool_t BgL_res1868z00_1919;
BgL_res1868z00_1919 = 
EPAIRP(BgL_lz00_966); 
BgL_test3495z00_5104 = BgL_res1868z00_1919; } 
if(BgL_test3495z00_5104)
{ /* Ieee/pairlist.scm 613 */
obj_t BgL_arg1373z00_973;obj_t BgL_arg1374z00_974;
{ /* Ieee/pairlist.scm 613 */
obj_t BgL_pairz00_1920;
if(
PAIRP(BgL_lz00_966))
{ /* Ieee/pairlist.scm 613 */
BgL_pairz00_1920 = BgL_lz00_966; }  else 
{ 
obj_t BgL_auxz00_5108;
BgL_auxz00_5108 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)24338)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_966); 
FAILURE(BgL_auxz00_5108,BFALSE,BFALSE);} 
BgL_arg1373z00_973 = 
CAR(BgL_pairz00_1920); } 
{ /* Ieee/pairlist.scm 613 */
obj_t BgL_objz00_1921;
if(
EPAIRP(BgL_lz00_966))
{ /* Ieee/pairlist.scm 613 */
BgL_objz00_1921 = BgL_lz00_966; }  else 
{ 
obj_t BgL_auxz00_5115;
BgL_auxz00_5115 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)24350)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2643z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_966); 
FAILURE(BgL_auxz00_5115,BFALSE,BFALSE);} 
BgL_arg1374z00_974 = 
CER(BgL_objz00_1921); } 
{ /* Ieee/pairlist.scm 613 */
obj_t BgL_res1869z00_1922;
BgL_res1869z00_1922 = 
MAKE_YOUNG_EPAIR(BgL_arg1373z00_973, BgL_accz00_967, BgL_arg1374z00_974); 
BgL_arg1371z00_971 = BgL_res1869z00_1922; } }  else 
{ /* Ieee/pairlist.scm 614 */
obj_t BgL_arg1375z00_975;
{ /* Ieee/pairlist.scm 614 */
obj_t BgL_pairz00_1923;
if(
PAIRP(BgL_lz00_966))
{ /* Ieee/pairlist.scm 614 */
BgL_pairz00_1923 = BgL_lz00_966; }  else 
{ 
obj_t BgL_auxz00_5123;
BgL_auxz00_5123 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)24371)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_966); 
FAILURE(BgL_auxz00_5123,BFALSE,BFALSE);} 
BgL_arg1375z00_975 = 
CAR(BgL_pairz00_1923); } 
BgL_arg1371z00_971 = 
MAKE_YOUNG_PAIR(BgL_arg1375z00_975, BgL_accz00_967); } } 
{ 
obj_t BgL_accz00_5130;obj_t BgL_lz00_5129;
BgL_lz00_5129 = BgL_arg1370z00_970; 
BgL_accz00_5130 = BgL_arg1371z00_971; 
BgL_accz00_967 = BgL_accz00_5130; 
BgL_lz00_966 = BgL_lz00_5129; 
goto BgL_zc3z04anonymousza31368ze3z87_968;} } } } 

}



/* &ereverse */
obj_t BGl_z62ereversez62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2574, obj_t BgL_lz00_2575)
{
{ /* Ieee/pairlist.scm 606 */
{ /* Ieee/pairlist.scm 609 */
obj_t BgL_auxz00_5131;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_lz00_2575))
{ /* Ieee/pairlist.scm 609 */
BgL_auxz00_5131 = BgL_lz00_2575
; }  else 
{ 
obj_t BgL_auxz00_5134;
BgL_auxz00_5134 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)24265)), BGl_string2721z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_2575); 
FAILURE(BgL_auxz00_5134,BFALSE,BFALSE);} 
return 
BGl_ereversez00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_5131);} } 

}



/* take */
BGL_EXPORTED_DEF obj_t BGl_takez00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_listz00_63, long BgL_kz00_64)
{
{ /* Ieee/pairlist.scm 619 */
{ 
obj_t BgL_listz00_1951;long BgL_kz00_1952;obj_t BgL_resz00_1953;
BgL_listz00_1951 = BgL_listz00_63; 
BgL_kz00_1952 = BgL_kz00_64; 
BgL_resz00_1953 = BNIL; 
BgL_loopz00_1950:
if(
(BgL_kz00_1952==((long)0)))
{ /* Ieee/pairlist.scm 623 */
return 
bgl_reverse_bang(BgL_resz00_1953);}  else 
{ /* Ieee/pairlist.scm 625 */
obj_t BgL_arg1378z00_1960;long BgL_arg1379z00_1961;obj_t BgL_arg1380z00_1962;
{ /* Ieee/pairlist.scm 625 */
obj_t BgL_pairz00_1968;
if(
PAIRP(BgL_listz00_1951))
{ /* Ieee/pairlist.scm 625 */
BgL_pairz00_1968 = BgL_listz00_1951; }  else 
{ 
obj_t BgL_auxz00_5144;
BgL_auxz00_5144 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)24740)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_1951); 
FAILURE(BgL_auxz00_5144,BFALSE,BFALSE);} 
BgL_arg1378z00_1960 = 
CDR(BgL_pairz00_1968); } 
BgL_arg1379z00_1961 = 
(BgL_kz00_1952-((long)1)); 
{ /* Ieee/pairlist.scm 625 */
obj_t BgL_arg1381z00_1963;
{ /* Ieee/pairlist.scm 625 */
obj_t BgL_pairz00_1971;
if(
PAIRP(BgL_listz00_1951))
{ /* Ieee/pairlist.scm 625 */
BgL_pairz00_1971 = BgL_listz00_1951; }  else 
{ 
obj_t BgL_auxz00_5152;
BgL_auxz00_5152 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)24767)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_1951); 
FAILURE(BgL_auxz00_5152,BFALSE,BFALSE);} 
BgL_arg1381z00_1963 = 
CAR(BgL_pairz00_1971); } 
BgL_arg1380z00_1962 = 
MAKE_YOUNG_PAIR(BgL_arg1381z00_1963, BgL_resz00_1953); } 
{ 
obj_t BgL_resz00_5160;long BgL_kz00_5159;obj_t BgL_listz00_5158;
BgL_listz00_5158 = BgL_arg1378z00_1960; 
BgL_kz00_5159 = BgL_arg1379z00_1961; 
BgL_resz00_5160 = BgL_arg1380z00_1962; 
BgL_resz00_1953 = BgL_resz00_5160; 
BgL_kz00_1952 = BgL_kz00_5159; 
BgL_listz00_1951 = BgL_listz00_5158; 
goto BgL_loopz00_1950;} } } } 

}



/* &take */
obj_t BGl_z62takez62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2576, obj_t BgL_listz00_2577, obj_t BgL_kz00_2578)
{
{ /* Ieee/pairlist.scm 619 */
{ /* Ieee/pairlist.scm 620 */
long BgL_auxz00_5168;obj_t BgL_auxz00_5161;
{ /* Ieee/pairlist.scm 620 */
obj_t BgL_tmpz00_5169;
if(
INTEGERP(BgL_kz00_2578))
{ /* Ieee/pairlist.scm 620 */
BgL_tmpz00_5169 = BgL_kz00_2578
; }  else 
{ 
obj_t BgL_auxz00_5172;
BgL_auxz00_5172 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)24632)), BGl_string2722z00zz__r4_pairs_and_lists_6_3z00, BGl_string2723z00zz__r4_pairs_and_lists_6_3z00, BgL_kz00_2578); 
FAILURE(BgL_auxz00_5172,BFALSE,BFALSE);} 
BgL_auxz00_5168 = 
(long)CINT(BgL_tmpz00_5169); } 
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_listz00_2577))
{ /* Ieee/pairlist.scm 620 */
BgL_auxz00_5161 = BgL_listz00_2577
; }  else 
{ 
obj_t BgL_auxz00_5164;
BgL_auxz00_5164 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)24632)), BGl_string2722z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2577); 
FAILURE(BgL_auxz00_5164,BFALSE,BFALSE);} 
return 
BGl_takez00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_5161, BgL_auxz00_5168);} } 

}



/* drop */
BGL_EXPORTED_DEF obj_t BGl_dropz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_listz00_65, long BgL_kz00_66)
{
{ /* Ieee/pairlist.scm 630 */
BGl_dropz00zz__r4_pairs_and_lists_6_3z00:
if(
(BgL_kz00_66==((long)0)))
{ /* Ieee/pairlist.scm 631 */
return BgL_listz00_65;}  else 
{ /* Ieee/pairlist.scm 633 */
obj_t BgL_listz00_1982;long BgL_kz00_1983;
{ /* Ieee/pairlist.scm 633 */
obj_t BgL_pairz00_1979;
if(
PAIRP(BgL_listz00_65))
{ /* Ieee/pairlist.scm 633 */
BgL_pairz00_1979 = BgL_listz00_65; }  else 
{ 
obj_t BgL_auxz00_5182;
BgL_auxz00_5182 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25076)), BGl_string2724z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_65); 
FAILURE(BgL_auxz00_5182,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2340z00_2989;
BgL_aux2340z00_2989 = 
CDR(BgL_pairz00_1979); 
{ /* Ieee/pairlist.scm 252 */
bool_t BgL_test3507z00_5187;
if(
PAIRP(BgL_aux2340z00_2989))
{ /* Ieee/pairlist.scm 226 */
BgL_test3507z00_5187 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3507z00_5187 = 
NULLP(BgL_aux2340z00_2989)
; } 
if(BgL_test3507z00_5187)
{ /* Ieee/pairlist.scm 252 */
BgL_listz00_1982 = BgL_aux2340z00_2989; }  else 
{ 
obj_t BgL_auxz00_5191;
BgL_auxz00_5191 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2724z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2340z00_2989); 
FAILURE(BgL_auxz00_5191,BFALSE,BFALSE);} } } } 
BgL_kz00_1983 = 
(BgL_kz00_66-((long)1)); 
if(
(BgL_kz00_1983==((long)0)))
{ /* Ieee/pairlist.scm 631 */
return BgL_listz00_1982;}  else 
{ 
long BgL_kz00_5214;obj_t BgL_listz00_5198;
{ /* Ieee/pairlist.scm 633 */
obj_t BgL_pairz00_1991;
if(
PAIRP(BgL_listz00_1982))
{ /* Ieee/pairlist.scm 633 */
BgL_pairz00_1991 = BgL_listz00_1982; }  else 
{ 
obj_t BgL_auxz00_5201;
BgL_auxz00_5201 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25076)), BGl_string2724z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_1982); 
FAILURE(BgL_auxz00_5201,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2344z00_2993;
BgL_aux2344z00_2993 = 
CDR(BgL_pairz00_1991); 
{ /* Ieee/pairlist.scm 252 */
bool_t BgL_test3511z00_5206;
if(
PAIRP(BgL_aux2344z00_2993))
{ /* Ieee/pairlist.scm 226 */
BgL_test3511z00_5206 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3511z00_5206 = 
NULLP(BgL_aux2344z00_2993)
; } 
if(BgL_test3511z00_5206)
{ /* Ieee/pairlist.scm 252 */
BgL_listz00_5198 = BgL_aux2344z00_2993; }  else 
{ 
obj_t BgL_auxz00_5210;
BgL_auxz00_5210 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2724z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2344z00_2993); 
FAILURE(BgL_auxz00_5210,BFALSE,BFALSE);} } } } 
BgL_kz00_5214 = 
(BgL_kz00_1983-((long)1)); 
BgL_kz00_66 = BgL_kz00_5214; 
BgL_listz00_65 = BgL_listz00_5198; 
goto BGl_dropz00zz__r4_pairs_and_lists_6_3z00;} } } 

}



/* &drop */
obj_t BGl_z62dropz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2579, obj_t BgL_listz00_2580, obj_t BgL_kz00_2581)
{
{ /* Ieee/pairlist.scm 630 */
{ /* Ieee/pairlist.scm 631 */
long BgL_auxz00_5223;obj_t BgL_auxz00_5216;
{ /* Ieee/pairlist.scm 631 */
obj_t BgL_tmpz00_5224;
if(
INTEGERP(BgL_kz00_2581))
{ /* Ieee/pairlist.scm 631 */
BgL_tmpz00_5224 = BgL_kz00_2581
; }  else 
{ 
obj_t BgL_auxz00_5227;
BgL_auxz00_5227 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25030)), BGl_string2725z00zz__r4_pairs_and_lists_6_3z00, BGl_string2723z00zz__r4_pairs_and_lists_6_3z00, BgL_kz00_2581); 
FAILURE(BgL_auxz00_5227,BFALSE,BFALSE);} 
BgL_auxz00_5223 = 
(long)CINT(BgL_tmpz00_5224); } 
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_listz00_2580))
{ /* Ieee/pairlist.scm 631 */
BgL_auxz00_5216 = BgL_listz00_2580
; }  else 
{ 
obj_t BgL_auxz00_5219;
BgL_auxz00_5219 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25030)), BGl_string2725z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2580); 
FAILURE(BgL_auxz00_5219,BFALSE,BFALSE);} 
return 
BGl_dropz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_5216, BgL_auxz00_5223);} } 

}



/* list-tail */
BGL_EXPORTED_DEF obj_t BGl_listzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_listz00_67, long BgL_kz00_68)
{
{ /* Ieee/pairlist.scm 638 */
{ 
obj_t BgL_listz00_1996;long BgL_kz00_1997;
BgL_listz00_1996 = BgL_listz00_67; 
BgL_kz00_1997 = BgL_kz00_68; 
BgL_dropz00_1995:
if(
(BgL_kz00_1997==((long)0)))
{ /* Ieee/pairlist.scm 631 */
return BgL_listz00_1996;}  else 
{ 
long BgL_kz00_5251;obj_t BgL_listz00_5235;
{ /* Ieee/pairlist.scm 633 */
obj_t BgL_pairz00_2008;
if(
PAIRP(BgL_listz00_1996))
{ /* Ieee/pairlist.scm 633 */
BgL_pairz00_2008 = BgL_listz00_1996; }  else 
{ 
obj_t BgL_auxz00_5238;
BgL_auxz00_5238 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25076)), BGl_string2724z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_1996); 
FAILURE(BgL_auxz00_5238,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2352z00_3001;
BgL_aux2352z00_3001 = 
CDR(BgL_pairz00_2008); 
{ /* Ieee/pairlist.scm 252 */
bool_t BgL_test3517z00_5243;
if(
PAIRP(BgL_aux2352z00_3001))
{ /* Ieee/pairlist.scm 226 */
BgL_test3517z00_5243 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3517z00_5243 = 
NULLP(BgL_aux2352z00_3001)
; } 
if(BgL_test3517z00_5243)
{ /* Ieee/pairlist.scm 252 */
BgL_listz00_5235 = BgL_aux2352z00_3001; }  else 
{ 
obj_t BgL_auxz00_5247;
BgL_auxz00_5247 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2724z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2352z00_3001); 
FAILURE(BgL_auxz00_5247,BFALSE,BFALSE);} } } } 
BgL_kz00_5251 = 
(BgL_kz00_1997-((long)1)); 
BgL_kz00_1997 = BgL_kz00_5251; 
BgL_listz00_1996 = BgL_listz00_5235; 
goto BgL_dropz00_1995;} } } 

}



/* &list-tail */
obj_t BGl_z62listzd2tailzb0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2582, obj_t BgL_listz00_2583, obj_t BgL_kz00_2584)
{
{ /* Ieee/pairlist.scm 638 */
{ /* Ieee/pairlist.scm 639 */
long BgL_auxz00_5260;obj_t BgL_auxz00_5253;
{ /* Ieee/pairlist.scm 639 */
obj_t BgL_tmpz00_5261;
if(
INTEGERP(BgL_kz00_2584))
{ /* Ieee/pairlist.scm 639 */
BgL_tmpz00_5261 = BgL_kz00_2584
; }  else 
{ 
obj_t BgL_auxz00_5264;
BgL_auxz00_5264 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25348)), BGl_string2726z00zz__r4_pairs_and_lists_6_3z00, BGl_string2723z00zz__r4_pairs_and_lists_6_3z00, BgL_kz00_2584); 
FAILURE(BgL_auxz00_5264,BFALSE,BFALSE);} 
BgL_auxz00_5260 = 
(long)CINT(BgL_tmpz00_5261); } 
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_listz00_2583))
{ /* Ieee/pairlist.scm 639 */
BgL_auxz00_5253 = BgL_listz00_2583
; }  else 
{ 
obj_t BgL_auxz00_5256;
BgL_auxz00_5256 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25348)), BGl_string2726z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2583); 
FAILURE(BgL_auxz00_5256,BFALSE,BFALSE);} 
return 
BGl_listzd2tailzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_5253, BgL_auxz00_5260);} } 

}



/* list-ref */
BGL_EXPORTED_DEF obj_t bgl_list_ref(obj_t BgL_listz00_69, long BgL_kz00_70)
{
{ /* Ieee/pairlist.scm 644 */
bgl_list_ref:
if(
(BgL_kz00_70==((long)0)))
{ /* Ieee/pairlist.scm 646 */
obj_t BgL_pairz00_2018;
if(
PAIRP(BgL_listz00_69))
{ /* Ieee/pairlist.scm 646 */
BgL_pairz00_2018 = BgL_listz00_69; }  else 
{ 
obj_t BgL_auxz00_5274;
BgL_auxz00_5274 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25643)), BGl_string2727z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_69); 
FAILURE(BgL_auxz00_5274,BFALSE,BFALSE);} 
return 
CAR(BgL_pairz00_2018);}  else 
{ /* Ieee/pairlist.scm 647 */
obj_t BgL_listz00_2022;long BgL_kz00_2023;
{ /* Ieee/pairlist.scm 647 */
obj_t BgL_pairz00_2019;
if(
PAIRP(BgL_listz00_69))
{ /* Ieee/pairlist.scm 647 */
BgL_pairz00_2019 = BgL_listz00_69; }  else 
{ 
obj_t BgL_auxz00_5281;
BgL_auxz00_5281 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25671)), BGl_string2727z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_69); 
FAILURE(BgL_auxz00_5281,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2362z00_3011;
BgL_aux2362z00_3011 = 
CDR(BgL_pairz00_2019); 
{ /* Ieee/pairlist.scm 252 */
bool_t BgL_test3524z00_5286;
if(
PAIRP(BgL_aux2362z00_3011))
{ /* Ieee/pairlist.scm 226 */
BgL_test3524z00_5286 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3524z00_5286 = 
NULLP(BgL_aux2362z00_3011)
; } 
if(BgL_test3524z00_5286)
{ /* Ieee/pairlist.scm 252 */
BgL_listz00_2022 = BgL_aux2362z00_3011; }  else 
{ 
obj_t BgL_auxz00_5290;
BgL_auxz00_5290 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2727z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2362z00_3011); 
FAILURE(BgL_auxz00_5290,BFALSE,BFALSE);} } } } 
BgL_kz00_2023 = 
(BgL_kz00_70-((long)1)); 
if(
(BgL_kz00_2023==((long)0)))
{ /* Ieee/pairlist.scm 646 */
obj_t BgL_pairz00_2031;
if(
PAIRP(BgL_listz00_2022))
{ /* Ieee/pairlist.scm 646 */
BgL_pairz00_2031 = BgL_listz00_2022; }  else 
{ 
obj_t BgL_auxz00_5299;
BgL_auxz00_5299 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25643)), BGl_string2727z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2022); 
FAILURE(BgL_auxz00_5299,BFALSE,BFALSE);} 
return 
CAR(BgL_pairz00_2031);}  else 
{ 
long BgL_kz00_5320;obj_t BgL_listz00_5304;
{ /* Ieee/pairlist.scm 647 */
obj_t BgL_pairz00_2032;
if(
PAIRP(BgL_listz00_2022))
{ /* Ieee/pairlist.scm 647 */
BgL_pairz00_2032 = BgL_listz00_2022; }  else 
{ 
obj_t BgL_auxz00_5307;
BgL_auxz00_5307 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25671)), BGl_string2727z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2022); 
FAILURE(BgL_auxz00_5307,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2368z00_3017;
BgL_aux2368z00_3017 = 
CDR(BgL_pairz00_2032); 
{ /* Ieee/pairlist.scm 252 */
bool_t BgL_test3529z00_5312;
if(
PAIRP(BgL_aux2368z00_3017))
{ /* Ieee/pairlist.scm 226 */
BgL_test3529z00_5312 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3529z00_5312 = 
NULLP(BgL_aux2368z00_3017)
; } 
if(BgL_test3529z00_5312)
{ /* Ieee/pairlist.scm 252 */
BgL_listz00_5304 = BgL_aux2368z00_3017; }  else 
{ 
obj_t BgL_auxz00_5316;
BgL_auxz00_5316 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2727z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2368z00_3017); 
FAILURE(BgL_auxz00_5316,BFALSE,BFALSE);} } } } 
BgL_kz00_5320 = 
(BgL_kz00_2023-((long)1)); 
BgL_kz00_70 = BgL_kz00_5320; 
BgL_listz00_69 = BgL_listz00_5304; 
goto bgl_list_ref;} } } 

}



/* &list-ref */
obj_t BGl_z62listzd2refzb0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2585, obj_t BgL_listz00_2586, obj_t BgL_kz00_2587)
{
{ /* Ieee/pairlist.scm 644 */
{ /* Ieee/pairlist.scm 645 */
long BgL_auxz00_5329;obj_t BgL_auxz00_5322;
{ /* Ieee/pairlist.scm 645 */
obj_t BgL_tmpz00_5330;
if(
INTEGERP(BgL_kz00_2587))
{ /* Ieee/pairlist.scm 645 */
BgL_tmpz00_5330 = BgL_kz00_2587
; }  else 
{ 
obj_t BgL_auxz00_5333;
BgL_auxz00_5333 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25615)), BGl_string2728z00zz__r4_pairs_and_lists_6_3z00, BGl_string2723z00zz__r4_pairs_and_lists_6_3z00, BgL_kz00_2587); 
FAILURE(BgL_auxz00_5333,BFALSE,BFALSE);} 
BgL_auxz00_5329 = 
(long)CINT(BgL_tmpz00_5330); } 
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_listz00_2586))
{ /* Ieee/pairlist.scm 645 */
BgL_auxz00_5322 = BgL_listz00_2586
; }  else 
{ 
obj_t BgL_auxz00_5325;
BgL_auxz00_5325 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25615)), BGl_string2728z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2586); 
FAILURE(BgL_auxz00_5325,BFALSE,BFALSE);} 
return 
bgl_list_ref(BgL_auxz00_5322, BgL_auxz00_5329);} } 

}



/* list-set! */
BGL_EXPORTED_DEF obj_t BGl_listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_listz00_71, long BgL_kz00_72, obj_t BgL_valz00_73)
{
{ /* Ieee/pairlist.scm 652 */
BGl_listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00:
if(
(BgL_kz00_72==((long)0)))
{ /* Ieee/pairlist.scm 654 */
obj_t BgL_pairz00_2042;
if(
PAIRP(BgL_listz00_71))
{ /* Ieee/pairlist.scm 654 */
BgL_pairz00_2042 = BgL_listz00_71; }  else 
{ 
obj_t BgL_auxz00_5343;
BgL_auxz00_5343 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25980)), BGl_string2729z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_71); 
FAILURE(BgL_auxz00_5343,BFALSE,BFALSE);} 
return 
SET_CAR(BgL_pairz00_2042, BgL_valz00_73);}  else 
{ /* Ieee/pairlist.scm 655 */
obj_t BgL_arg1389z00_2036;long BgL_arg1390z00_2037;
{ /* Ieee/pairlist.scm 655 */
obj_t BgL_pairz00_2043;
if(
PAIRP(BgL_listz00_71))
{ /* Ieee/pairlist.scm 655 */
BgL_pairz00_2043 = BgL_listz00_71; }  else 
{ 
obj_t BgL_auxz00_5350;
BgL_auxz00_5350 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)26013)), BGl_string2729z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_71); 
FAILURE(BgL_auxz00_5350,BFALSE,BFALSE);} 
BgL_arg1389z00_2036 = 
CDR(BgL_pairz00_2043); } 
BgL_arg1390z00_2037 = 
(BgL_kz00_72-((long)1)); 
{ /* Ieee/pairlist.scm 655 */
obj_t BgL_listz00_2046;
{ /* Ieee/pairlist.scm 655 */
bool_t BgL_test3536z00_5356;
if(
PAIRP(BgL_arg1389z00_2036))
{ /* Ieee/pairlist.scm 226 */
BgL_test3536z00_5356 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3536z00_5356 = 
NULLP(BgL_arg1389z00_2036)
; } 
if(BgL_test3536z00_5356)
{ /* Ieee/pairlist.scm 655 */
BgL_listz00_2046 = BgL_arg1389z00_2036; }  else 
{ 
obj_t BgL_auxz00_5360;
BgL_auxz00_5360 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)26017)), BGl_string2729z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1389z00_2036); 
FAILURE(BgL_auxz00_5360,BFALSE,BFALSE);} } 
if(
(BgL_arg1390z00_2037==((long)0)))
{ /* Ieee/pairlist.scm 654 */
obj_t BgL_pairz00_2055;
if(
PAIRP(BgL_listz00_2046))
{ /* Ieee/pairlist.scm 654 */
BgL_pairz00_2055 = BgL_listz00_2046; }  else 
{ 
obj_t BgL_auxz00_5368;
BgL_auxz00_5368 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25980)), BGl_string2729z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2046); 
FAILURE(BgL_auxz00_5368,BFALSE,BFALSE);} 
return 
SET_CAR(BgL_pairz00_2055, BgL_valz00_73);}  else 
{ /* Ieee/pairlist.scm 655 */
obj_t BgL_arg1389z00_2049;long BgL_arg1390z00_2050;
{ /* Ieee/pairlist.scm 655 */
obj_t BgL_pairz00_2056;
if(
PAIRP(BgL_listz00_2046))
{ /* Ieee/pairlist.scm 655 */
BgL_pairz00_2056 = BgL_listz00_2046; }  else 
{ 
obj_t BgL_auxz00_5375;
BgL_auxz00_5375 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)26013)), BGl_string2729z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2046); 
FAILURE(BgL_auxz00_5375,BFALSE,BFALSE);} 
BgL_arg1389z00_2049 = 
CDR(BgL_pairz00_2056); } 
BgL_arg1390z00_2050 = 
(BgL_arg1390z00_2037-((long)1)); 
{ 
long BgL_kz00_5390;obj_t BgL_listz00_5381;
{ /* Ieee/pairlist.scm 655 */
bool_t BgL_test3541z00_5382;
if(
PAIRP(BgL_arg1389z00_2049))
{ /* Ieee/pairlist.scm 226 */
BgL_test3541z00_5382 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3541z00_5382 = 
NULLP(BgL_arg1389z00_2049)
; } 
if(BgL_test3541z00_5382)
{ /* Ieee/pairlist.scm 655 */
BgL_listz00_5381 = BgL_arg1389z00_2049; }  else 
{ 
obj_t BgL_auxz00_5386;
BgL_auxz00_5386 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)26017)), BGl_string2729z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1389z00_2049); 
FAILURE(BgL_auxz00_5386,BFALSE,BFALSE);} } 
BgL_kz00_5390 = BgL_arg1390z00_2050; 
BgL_kz00_72 = BgL_kz00_5390; 
BgL_listz00_71 = BgL_listz00_5381; 
goto BGl_listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00;} } } } } 

}



/* &list-set! */
obj_t BGl_z62listzd2setz12za2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2588, obj_t BgL_listz00_2589, obj_t BgL_kz00_2590, obj_t BgL_valz00_2591)
{
{ /* Ieee/pairlist.scm 652 */
{ /* Ieee/pairlist.scm 653 */
long BgL_auxz00_5398;obj_t BgL_auxz00_5391;
{ /* Ieee/pairlist.scm 653 */
obj_t BgL_tmpz00_5399;
if(
INTEGERP(BgL_kz00_2590))
{ /* Ieee/pairlist.scm 653 */
BgL_tmpz00_5399 = BgL_kz00_2590
; }  else 
{ 
obj_t BgL_auxz00_5402;
BgL_auxz00_5402 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25947)), BGl_string2730z00zz__r4_pairs_and_lists_6_3z00, BGl_string2723z00zz__r4_pairs_and_lists_6_3z00, BgL_kz00_2590); 
FAILURE(BgL_auxz00_5402,BFALSE,BFALSE);} 
BgL_auxz00_5398 = 
(long)CINT(BgL_tmpz00_5399); } 
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_listz00_2589))
{ /* Ieee/pairlist.scm 653 */
BgL_auxz00_5391 = BgL_listz00_2589
; }  else 
{ 
obj_t BgL_auxz00_5394;
BgL_auxz00_5394 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25947)), BGl_string2730z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2589); 
FAILURE(BgL_auxz00_5394,BFALSE,BFALSE);} 
return 
BGl_listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_5391, BgL_auxz00_5398, BgL_valz00_2591);} } 

}



/* last-pair */
BGL_EXPORTED_DEF obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_xz00_74)
{
{ /* Ieee/pairlist.scm 660 */
BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00:
{ /* Ieee/pairlist.scm 661 */
bool_t BgL_test3545z00_5408;
{ /* Ieee/pairlist.scm 214 */
obj_t BgL_tmpz00_5409;
BgL_tmpz00_5409 = 
CDR(BgL_xz00_74); 
BgL_test3545z00_5408 = 
PAIRP(BgL_tmpz00_5409); } 
if(BgL_test3545z00_5408)
{ /* Ieee/pairlist.scm 662 */
obj_t BgL_xz00_2065;
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2390z00_3039;
BgL_aux2390z00_3039 = 
CDR(BgL_xz00_74); 
if(
PAIRP(BgL_aux2390z00_3039))
{ /* Ieee/pairlist.scm 252 */
BgL_xz00_2065 = BgL_aux2390z00_3039; }  else 
{ 
obj_t BgL_auxz00_5415;
BgL_auxz00_5415 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2731z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2390z00_3039); 
FAILURE(BgL_auxz00_5415,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 661 */
bool_t BgL_test3547z00_5419;
{ /* Ieee/pairlist.scm 214 */
obj_t BgL_tmpz00_5420;
BgL_tmpz00_5420 = 
CDR(BgL_xz00_2065); 
BgL_test3547z00_5419 = 
PAIRP(BgL_tmpz00_5420); } 
if(BgL_test3547z00_5419)
{ 
obj_t BgL_xz00_5423;
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2392z00_3041;
BgL_aux2392z00_3041 = 
CDR(BgL_xz00_2065); 
if(
PAIRP(BgL_aux2392z00_3041))
{ /* Ieee/pairlist.scm 252 */
BgL_xz00_5423 = BgL_aux2392z00_3041; }  else 
{ 
obj_t BgL_auxz00_5427;
BgL_auxz00_5427 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2731z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2392z00_3041); 
FAILURE(BgL_auxz00_5427,BFALSE,BFALSE);} } 
BgL_xz00_74 = BgL_xz00_5423; 
goto BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00;}  else 
{ /* Ieee/pairlist.scm 661 */
return BgL_xz00_2065;} } }  else 
{ /* Ieee/pairlist.scm 661 */
return BgL_xz00_74;} } } 

}



/* &last-pair */
obj_t BGl_z62lastzd2pairzb0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2592, obj_t BgL_xz00_2593)
{
{ /* Ieee/pairlist.scm 660 */
{ /* Ieee/pairlist.scm 661 */
obj_t BgL_auxz00_5431;
if(
PAIRP(BgL_xz00_2593))
{ /* Ieee/pairlist.scm 661 */
BgL_auxz00_5431 = BgL_xz00_2593
; }  else 
{ 
obj_t BgL_auxz00_5434;
BgL_auxz00_5434 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)26284)), BGl_string2732z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_xz00_2593); 
FAILURE(BgL_auxz00_5434,BFALSE,BFALSE);} 
return 
BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_5431);} } 

}



/* memq */
BGL_EXPORTED_DEF obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_objz00_75, obj_t BgL_listz00_76)
{
{ /* Ieee/pairlist.scm 668 */
{ 
obj_t BgL_listz00_1003;
BgL_listz00_1003 = BgL_listz00_76; 
BgL_zc3z04anonymousza31395ze3z87_1004:
if(
PAIRP(BgL_listz00_1003))
{ /* Ieee/pairlist.scm 670 */
if(
(
CAR(BgL_listz00_1003)==BgL_objz00_75))
{ /* Ieee/pairlist.scm 671 */
return BgL_listz00_1003;}  else 
{ 
obj_t BgL_listz00_5444;
BgL_listz00_5444 = 
CDR(BgL_listz00_1003); 
BgL_listz00_1003 = BgL_listz00_5444; 
goto BgL_zc3z04anonymousza31395ze3z87_1004;} }  else 
{ /* Ieee/pairlist.scm 670 */
return BFALSE;} } } 

}



/* &memq */
obj_t BGl_z62memqz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2594, obj_t BgL_objz00_2595, obj_t BgL_listz00_2596)
{
{ /* Ieee/pairlist.scm 668 */
{ /* Ieee/pairlist.scm 670 */
obj_t BgL_auxz00_5446;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_listz00_2596))
{ /* Ieee/pairlist.scm 670 */
BgL_auxz00_5446 = BgL_listz00_2596
; }  else 
{ 
obj_t BgL_auxz00_5449;
BgL_auxz00_5449 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)26622)), BGl_string2733z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2596); 
FAILURE(BgL_auxz00_5449,BFALSE,BFALSE);} 
return 
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_2595, BgL_auxz00_5446);} } 

}



/* memv */
BGL_EXPORTED_DEF obj_t BGl_memvz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_objz00_77, obj_t BgL_listz00_78)
{
{ /* Ieee/pairlist.scm 679 */
{ 
obj_t BgL_listz00_1012;
BgL_listz00_1012 = BgL_listz00_78; 
BgL_zc3z04anonymousza31401ze3z87_1013:
if(
PAIRP(BgL_listz00_1012))
{ /* Ieee/pairlist.scm 681 */
if(
BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(
CAR(BgL_listz00_1012), BgL_objz00_77))
{ /* Ieee/pairlist.scm 682 */
return BgL_listz00_1012;}  else 
{ 
obj_t BgL_listz00_5459;
BgL_listz00_5459 = 
CDR(BgL_listz00_1012); 
BgL_listz00_1012 = BgL_listz00_5459; 
goto BgL_zc3z04anonymousza31401ze3z87_1013;} }  else 
{ /* Ieee/pairlist.scm 681 */
return BFALSE;} } } 

}



/* &memv */
obj_t BGl_z62memvz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2597, obj_t BgL_objz00_2598, obj_t BgL_listz00_2599)
{
{ /* Ieee/pairlist.scm 679 */
{ /* Ieee/pairlist.scm 681 */
obj_t BgL_auxz00_5461;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_listz00_2599))
{ /* Ieee/pairlist.scm 681 */
BgL_auxz00_5461 = BgL_listz00_2599
; }  else 
{ 
obj_t BgL_auxz00_5464;
BgL_auxz00_5464 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)26994)), BGl_string2734z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2599); 
FAILURE(BgL_auxz00_5464,BFALSE,BFALSE);} 
return 
BGl_memvz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_2598, BgL_auxz00_5461);} } 

}



/* member */
BGL_EXPORTED_DEF obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_objz00_79, obj_t BgL_listz00_80)
{
{ /* Ieee/pairlist.scm 690 */
{ 
obj_t BgL_listz00_1021;
BgL_listz00_1021 = BgL_listz00_80; 
BgL_zc3z04anonymousza31408ze3z87_1022:
if(
PAIRP(BgL_listz00_1021))
{ /* Ieee/pairlist.scm 693 */
if(
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_objz00_79, 
CAR(BgL_listz00_1021)))
{ /* Ieee/pairlist.scm 694 */
return BgL_listz00_1021;}  else 
{ 
obj_t BgL_listz00_5474;
BgL_listz00_5474 = 
CDR(BgL_listz00_1021); 
BgL_listz00_1021 = BgL_listz00_5474; 
goto BgL_zc3z04anonymousza31408ze3z87_1022;} }  else 
{ /* Ieee/pairlist.scm 693 */
return BFALSE;} } } 

}



/* &member */
obj_t BGl_z62memberz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2600, obj_t BgL_objz00_2601, obj_t BgL_listz00_2602)
{
{ /* Ieee/pairlist.scm 690 */
{ /* Ieee/pairlist.scm 693 */
obj_t BgL_auxz00_5476;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_listz00_2602))
{ /* Ieee/pairlist.scm 693 */
BgL_auxz00_5476 = BgL_listz00_2602
; }  else 
{ 
obj_t BgL_auxz00_5479;
BgL_auxz00_5479 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)27377)), BGl_string2735z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2602); 
FAILURE(BgL_auxz00_5479,BFALSE,BFALSE);} 
return 
BGl_memberz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_2601, BgL_auxz00_5476);} } 

}



/* assq */
BGL_EXPORTED_DEF obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_objz00_81, obj_t BgL_alistz00_82)
{
{ /* Ieee/pairlist.scm 700 */
{ 
obj_t BgL_alistz00_1030;
BgL_alistz00_1030 = BgL_alistz00_82; 
BgL_zc3z04anonymousza31414ze3z87_1031:
if(
PAIRP(BgL_alistz00_1030))
{ /* Ieee/pairlist.scm 703 */
bool_t BgL_test3560z00_5486;
{ /* Ieee/pairlist.scm 703 */
obj_t BgL_tmpz00_5487;
{ /* Ieee/pairlist.scm 703 */
obj_t BgL_pairz00_2084;
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2402z00_3051;
BgL_aux2402z00_3051 = 
CAR(BgL_alistz00_1030); 
if(
PAIRP(BgL_aux2402z00_3051))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_2084 = BgL_aux2402z00_3051; }  else 
{ 
obj_t BgL_auxz00_5491;
BgL_auxz00_5491 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2402z00_3051); 
FAILURE(BgL_auxz00_5491,BFALSE,BFALSE);} } 
BgL_tmpz00_5487 = 
CAR(BgL_pairz00_2084); } 
BgL_test3560z00_5486 = 
(BgL_tmpz00_5487==BgL_objz00_81); } 
if(BgL_test3560z00_5486)
{ /* Ieee/pairlist.scm 703 */
return 
CAR(BgL_alistz00_1030);}  else 
{ 
obj_t BgL_alistz00_5498;
BgL_alistz00_5498 = 
CDR(BgL_alistz00_1030); 
BgL_alistz00_1030 = BgL_alistz00_5498; 
goto BgL_zc3z04anonymousza31414ze3z87_1031;} }  else 
{ /* Ieee/pairlist.scm 702 */
return BFALSE;} } } 

}



/* &assq */
obj_t BGl_z62assqz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2603, obj_t BgL_objz00_2604, obj_t BgL_alistz00_2605)
{
{ /* Ieee/pairlist.scm 700 */
{ /* Ieee/pairlist.scm 702 */
obj_t BgL_auxz00_5500;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_alistz00_2605))
{ /* Ieee/pairlist.scm 702 */
BgL_auxz00_5500 = BgL_alistz00_2605
; }  else 
{ 
obj_t BgL_auxz00_5503;
BgL_auxz00_5503 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)27748)), BGl_string2736z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_alistz00_2605); 
FAILURE(BgL_auxz00_5503,BFALSE,BFALSE);} 
return 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_2604, BgL_auxz00_5500);} } 

}



/* assv */
BGL_EXPORTED_DEF obj_t BGl_assvz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_objz00_83, obj_t BgL_alistz00_84)
{
{ /* Ieee/pairlist.scm 711 */
{ 
obj_t BgL_alistz00_1041;
BgL_alistz00_1041 = BgL_alistz00_84; 
BgL_zc3z04anonymousza31422ze3z87_1042:
if(
PAIRP(BgL_alistz00_1041))
{ /* Ieee/pairlist.scm 714 */
bool_t BgL_test3564z00_5510;
{ /* Ieee/pairlist.scm 714 */
obj_t BgL_auxz00_5511;
{ /* Ieee/pairlist.scm 714 */
obj_t BgL_pairz00_2089;
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2406z00_3055;
BgL_aux2406z00_3055 = 
CAR(BgL_alistz00_1041); 
if(
PAIRP(BgL_aux2406z00_3055))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_2089 = BgL_aux2406z00_3055; }  else 
{ 
obj_t BgL_auxz00_5515;
BgL_auxz00_5515 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2406z00_3055); 
FAILURE(BgL_auxz00_5515,BFALSE,BFALSE);} } 
BgL_auxz00_5511 = 
CAR(BgL_pairz00_2089); } 
BgL_test3564z00_5510 = 
BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(BgL_auxz00_5511, BgL_objz00_83); } 
if(BgL_test3564z00_5510)
{ /* Ieee/pairlist.scm 714 */
return 
CAR(BgL_alistz00_1041);}  else 
{ 
obj_t BgL_alistz00_5522;
BgL_alistz00_5522 = 
CDR(BgL_alistz00_1041); 
BgL_alistz00_1041 = BgL_alistz00_5522; 
goto BgL_zc3z04anonymousza31422ze3z87_1042;} }  else 
{ /* Ieee/pairlist.scm 713 */
return BFALSE;} } } 

}



/* &assv */
obj_t BGl_z62assvz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2606, obj_t BgL_objz00_2607, obj_t BgL_alistz00_2608)
{
{ /* Ieee/pairlist.scm 711 */
{ /* Ieee/pairlist.scm 713 */
obj_t BgL_auxz00_5524;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_alistz00_2608))
{ /* Ieee/pairlist.scm 713 */
BgL_auxz00_5524 = BgL_alistz00_2608
; }  else 
{ 
obj_t BgL_auxz00_5527;
BgL_auxz00_5527 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)28167)), BGl_string2737z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_alistz00_2608); 
FAILURE(BgL_auxz00_5527,BFALSE,BFALSE);} 
return 
BGl_assvz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_2607, BgL_auxz00_5524);} } 

}



/* assoc */
BGL_EXPORTED_DEF obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_objz00_85, obj_t BgL_alistz00_86)
{
{ /* Ieee/pairlist.scm 722 */
{ 
obj_t BgL_alistz00_1052;
BgL_alistz00_1052 = BgL_alistz00_86; 
BgL_zc3z04anonymousza31430ze3z87_1053:
if(
PAIRP(BgL_alistz00_1052))
{ /* Ieee/pairlist.scm 725 */
bool_t BgL_test3568z00_5534;
{ /* Ieee/pairlist.scm 725 */
obj_t BgL_auxz00_5535;
{ /* Ieee/pairlist.scm 725 */
obj_t BgL_pairz00_2094;
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2410z00_3059;
BgL_aux2410z00_3059 = 
CAR(BgL_alistz00_1052); 
if(
PAIRP(BgL_aux2410z00_3059))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_2094 = BgL_aux2410z00_3059; }  else 
{ 
obj_t BgL_auxz00_5539;
BgL_auxz00_5539 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2410z00_3059); 
FAILURE(BgL_auxz00_5539,BFALSE,BFALSE);} } 
BgL_auxz00_5535 = 
CAR(BgL_pairz00_2094); } 
BgL_test3568z00_5534 = 
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_auxz00_5535, BgL_objz00_85); } 
if(BgL_test3568z00_5534)
{ /* Ieee/pairlist.scm 725 */
return 
CAR(BgL_alistz00_1052);}  else 
{ 
obj_t BgL_alistz00_5546;
BgL_alistz00_5546 = 
CDR(BgL_alistz00_1052); 
BgL_alistz00_1052 = BgL_alistz00_5546; 
goto BgL_zc3z04anonymousza31430ze3z87_1053;} }  else 
{ /* Ieee/pairlist.scm 724 */
return BFALSE;} } } 

}



/* &assoc */
obj_t BGl_z62assocz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2609, obj_t BgL_objz00_2610, obj_t BgL_alistz00_2611)
{
{ /* Ieee/pairlist.scm 722 */
{ /* Ieee/pairlist.scm 724 */
obj_t BgL_auxz00_5548;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_alistz00_2611))
{ /* Ieee/pairlist.scm 724 */
BgL_auxz00_5548 = BgL_alistz00_2611
; }  else 
{ 
obj_t BgL_auxz00_5551;
BgL_auxz00_5551 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)28581)), BGl_string2738z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_alistz00_2611); 
FAILURE(BgL_auxz00_5551,BFALSE,BFALSE);} 
return 
BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_2610, BgL_auxz00_5548);} } 

}



/* remq */
BGL_EXPORTED_DEF obj_t bgl_remq(obj_t BgL_xz00_87, obj_t BgL_yz00_88)
{
{ /* Ieee/pairlist.scm 736 */
bgl_remq:
if(
NULLP(BgL_yz00_88))
{ /* Ieee/pairlist.scm 738 */
return BgL_yz00_88;}  else 
{ /* Ieee/pairlist.scm 738 */
if(
(BgL_xz00_87==
CAR(BgL_yz00_88)))
{ /* Ieee/pairlist.scm 739 */
obj_t BgL_arg1441z00_1065;
BgL_arg1441z00_1065 = 
CDR(BgL_yz00_88); 
{ 
obj_t BgL_yz00_5562;
{ /* Ieee/pairlist.scm 739 */
bool_t BgL_test3573z00_5563;
if(
PAIRP(BgL_arg1441z00_1065))
{ /* Ieee/pairlist.scm 226 */
BgL_test3573z00_5563 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3573z00_5563 = 
NULLP(BgL_arg1441z00_1065)
; } 
if(BgL_test3573z00_5563)
{ /* Ieee/pairlist.scm 739 */
BgL_yz00_5562 = BgL_arg1441z00_1065; }  else 
{ 
obj_t BgL_auxz00_5567;
BgL_auxz00_5567 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29243)), BGl_string2739z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1441z00_1065); 
FAILURE(BgL_auxz00_5567,BFALSE,BFALSE);} } 
BgL_yz00_88 = BgL_yz00_5562; 
goto bgl_remq;} }  else 
{ /* Ieee/pairlist.scm 740 */
obj_t BgL_arg1442z00_1066;obj_t BgL_arg1443z00_1067;
BgL_arg1442z00_1066 = 
CAR(BgL_yz00_88); 
{ /* Ieee/pairlist.scm 740 */
obj_t BgL_arg1444z00_1068;
BgL_arg1444z00_1068 = 
CDR(BgL_yz00_88); 
{ /* Ieee/pairlist.scm 740 */
obj_t BgL_auxz00_5573;
{ /* Ieee/pairlist.scm 740 */
bool_t BgL_test3575z00_5574;
if(
PAIRP(BgL_arg1444z00_1068))
{ /* Ieee/pairlist.scm 226 */
BgL_test3575z00_5574 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3575z00_5574 = 
NULLP(BgL_arg1444z00_1068)
; } 
if(BgL_test3575z00_5574)
{ /* Ieee/pairlist.scm 740 */
BgL_auxz00_5573 = BgL_arg1444z00_1068
; }  else 
{ 
obj_t BgL_auxz00_5578;
BgL_auxz00_5578 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29287)), BGl_string2739z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1444z00_1068); 
FAILURE(BgL_auxz00_5578,BFALSE,BFALSE);} } 
BgL_arg1443z00_1067 = 
bgl_remq(BgL_xz00_87, BgL_auxz00_5573); } } 
return 
MAKE_YOUNG_PAIR(BgL_arg1442z00_1066, BgL_arg1443z00_1067);} } } 

}



/* &remq */
obj_t BGl_z62remqz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2612, obj_t BgL_xz00_2613, obj_t BgL_yz00_2614)
{
{ /* Ieee/pairlist.scm 736 */
{ /* Ieee/pairlist.scm 738 */
obj_t BgL_auxz00_5584;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_yz00_2614))
{ /* Ieee/pairlist.scm 738 */
BgL_auxz00_5584 = BgL_yz00_2614
; }  else 
{ 
obj_t BgL_auxz00_5587;
BgL_auxz00_5587 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29192)), BGl_string2740z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_2614); 
FAILURE(BgL_auxz00_5587,BFALSE,BFALSE);} 
return 
bgl_remq(BgL_xz00_2613, BgL_auxz00_5584);} } 

}



/* remq! */
BGL_EXPORTED_DEF obj_t bgl_remq_bang(obj_t BgL_xz00_89, obj_t BgL_yz00_90)
{
{ /* Ieee/pairlist.scm 745 */
bgl_remq_bang:
if(
NULLP(BgL_yz00_90))
{ /* Ieee/pairlist.scm 747 */
return BgL_yz00_90;}  else 
{ /* Ieee/pairlist.scm 747 */
if(
(BgL_xz00_89==
CAR(BgL_yz00_90)))
{ /* Ieee/pairlist.scm 748 */
obj_t BgL_arg1451z00_1073;
BgL_arg1451z00_1073 = 
CDR(BgL_yz00_90); 
{ 
obj_t BgL_yz00_5598;
{ /* Ieee/pairlist.scm 748 */
bool_t BgL_test3580z00_5599;
if(
PAIRP(BgL_arg1451z00_1073))
{ /* Ieee/pairlist.scm 226 */
BgL_test3580z00_5599 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3580z00_5599 = 
NULLP(BgL_arg1451z00_1073)
; } 
if(BgL_test3580z00_5599)
{ /* Ieee/pairlist.scm 748 */
BgL_yz00_5598 = BgL_arg1451z00_1073; }  else 
{ 
obj_t BgL_auxz00_5603;
BgL_auxz00_5603 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29604)), BGl_string2741z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1451z00_1073); 
FAILURE(BgL_auxz00_5603,BFALSE,BFALSE);} } 
BgL_yz00_90 = BgL_yz00_5598; 
goto bgl_remq_bang;} }  else 
{ 
obj_t BgL_prevz00_1075;
BgL_prevz00_1075 = BgL_yz00_90; 
BgL_zc3z04anonymousza31452ze3z87_1076:
{ /* Ieee/pairlist.scm 750 */
bool_t BgL_test3582z00_5607;
{ /* Ieee/pairlist.scm 451 */
obj_t BgL_tmpz00_5608;
{ /* Ieee/pairlist.scm 750 */
obj_t BgL_pairz00_2105;
if(
PAIRP(BgL_prevz00_1075))
{ /* Ieee/pairlist.scm 750 */
BgL_pairz00_2105 = BgL_prevz00_1075; }  else 
{ 
obj_t BgL_auxz00_5611;
BgL_auxz00_5611 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29675)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_prevz00_1075); 
FAILURE(BgL_auxz00_5611,BFALSE,BFALSE);} 
BgL_tmpz00_5608 = 
CDR(BgL_pairz00_2105); } 
BgL_test3582z00_5607 = 
NULLP(BgL_tmpz00_5608); } 
if(BgL_test3582z00_5607)
{ /* Ieee/pairlist.scm 750 */
return BgL_yz00_90;}  else 
{ /* Ieee/pairlist.scm 752 */
bool_t BgL_test3584z00_5617;
{ /* Ieee/pairlist.scm 752 */
obj_t BgL_tmpz00_5618;
{ /* Ieee/pairlist.scm 752 */
obj_t BgL_pairz00_2107;
if(
PAIRP(BgL_prevz00_1075))
{ /* Ieee/pairlist.scm 752 */
BgL_pairz00_2107 = BgL_prevz00_1075; }  else 
{ 
obj_t BgL_auxz00_5621;
BgL_auxz00_5621 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29740)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_prevz00_1075); 
FAILURE(BgL_auxz00_5621,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 270 */
obj_t BgL_pairz00_2110;
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2426z00_3075;
BgL_aux2426z00_3075 = 
CDR(BgL_pairz00_2107); 
if(
PAIRP(BgL_aux2426z00_3075))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_2110 = BgL_aux2426z00_3075; }  else 
{ 
obj_t BgL_auxz00_5628;
BgL_auxz00_5628 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2426z00_3075); 
FAILURE(BgL_auxz00_5628,BFALSE,BFALSE);} } 
BgL_tmpz00_5618 = 
CAR(BgL_pairz00_2110); } } 
BgL_test3584z00_5617 = 
(BgL_tmpz00_5618==BgL_xz00_89); } 
if(BgL_test3584z00_5617)
{ /* Ieee/pairlist.scm 752 */
{ /* Ieee/pairlist.scm 753 */
obj_t BgL_arg1457z00_1081;
{ /* Ieee/pairlist.scm 753 */
obj_t BgL_pairz00_2111;
if(
PAIRP(BgL_prevz00_1075))
{ /* Ieee/pairlist.scm 753 */
BgL_pairz00_2111 = BgL_prevz00_1075; }  else 
{ 
obj_t BgL_auxz00_5636;
BgL_auxz00_5636 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29792)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_prevz00_1075); 
FAILURE(BgL_auxz00_5636,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 282 */
obj_t BgL_pairz00_2114;
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2430z00_3079;
BgL_aux2430z00_3079 = 
CDR(BgL_pairz00_2111); 
if(
PAIRP(BgL_aux2430z00_3079))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_2114 = BgL_aux2430z00_3079; }  else 
{ 
obj_t BgL_auxz00_5643;
BgL_auxz00_5643 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2430z00_3079); 
FAILURE(BgL_auxz00_5643,BFALSE,BFALSE);} } 
BgL_arg1457z00_1081 = 
CDR(BgL_pairz00_2114); } } 
{ /* Ieee/pairlist.scm 753 */
obj_t BgL_pairz00_2115;
if(
PAIRP(BgL_prevz00_1075))
{ /* Ieee/pairlist.scm 753 */
BgL_pairz00_2115 = BgL_prevz00_1075; }  else 
{ 
obj_t BgL_auxz00_5650;
BgL_auxz00_5650 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29781)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_prevz00_1075); 
FAILURE(BgL_auxz00_5650,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2115, BgL_arg1457z00_1081); } } 
{ 

goto BgL_zc3z04anonymousza31452ze3z87_1076;} }  else 
{ /* Ieee/pairlist.scm 755 */
obj_t BgL_arg1458z00_1082;
{ /* Ieee/pairlist.scm 755 */
obj_t BgL_pairz00_2116;
if(
PAIRP(BgL_prevz00_1075))
{ /* Ieee/pairlist.scm 755 */
BgL_pairz00_2116 = BgL_prevz00_1075; }  else 
{ 
obj_t BgL_auxz00_5657;
BgL_auxz00_5657 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29872)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_prevz00_1075); 
FAILURE(BgL_auxz00_5657,BFALSE,BFALSE);} 
BgL_arg1458z00_1082 = 
CDR(BgL_pairz00_2116); } 
{ 
obj_t BgL_prevz00_5662;
BgL_prevz00_5662 = BgL_arg1458z00_1082; 
BgL_prevz00_1075 = BgL_prevz00_5662; 
goto BgL_zc3z04anonymousza31452ze3z87_1076;} } } } } } } 

}



/* &remq! */
obj_t BGl_z62remqz12z70zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2615, obj_t BgL_xz00_2616, obj_t BgL_yz00_2617)
{
{ /* Ieee/pairlist.scm 745 */
{ /* Ieee/pairlist.scm 747 */
obj_t BgL_auxz00_5663;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_yz00_2617))
{ /* Ieee/pairlist.scm 747 */
BgL_auxz00_5663 = BgL_yz00_2617
; }  else 
{ 
obj_t BgL_auxz00_5666;
BgL_auxz00_5666 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29552)), BGl_string2742z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_2617); 
FAILURE(BgL_auxz00_5666,BFALSE,BFALSE);} 
return 
bgl_remq_bang(BgL_xz00_2616, BgL_auxz00_5663);} } 

}



/* _delete */
obj_t BGl__deletez00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_env1104z00_95, obj_t BgL_opt1103z00_94)
{
{ /* Ieee/pairlist.scm 760 */
{ /* Ieee/pairlist.scm 760 */
obj_t BgL_g1105z00_1087;obj_t BgL_g1106z00_1088;
BgL_g1105z00_1087 = 
VECTOR_REF(BgL_opt1103z00_94,((long)0)); 
BgL_g1106z00_1088 = 
VECTOR_REF(BgL_opt1103z00_94,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1103z00_94)) { case ((long)2) : 

{ /* Ieee/pairlist.scm 760 */

{ /* Ieee/pairlist.scm 760 */
obj_t BgL_auxz00_5673;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_g1106z00_1088))
{ /* Ieee/pairlist.scm 760 */
BgL_auxz00_5673 = BgL_g1106z00_1088
; }  else 
{ 
obj_t BgL_auxz00_5676;
BgL_auxz00_5676 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30108)), BGl_string2746z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_g1106z00_1088); 
FAILURE(BgL_auxz00_5676,BFALSE,BFALSE);} 
return 
BGl_deletez00zz__r4_pairs_and_lists_6_3z00(BgL_g1105z00_1087, BgL_auxz00_5673, BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} } break;case ((long)3) : 

{ /* Ieee/pairlist.scm 760 */
obj_t BgL_eqz00_1093;
BgL_eqz00_1093 = 
VECTOR_REF(BgL_opt1103z00_94,((long)2)); 
{ /* Ieee/pairlist.scm 760 */

{ /* Ieee/pairlist.scm 760 */
obj_t BgL_auxz00_5682;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_g1106z00_1088))
{ /* Ieee/pairlist.scm 760 */
BgL_auxz00_5682 = BgL_g1106z00_1088
; }  else 
{ 
obj_t BgL_auxz00_5685;
BgL_auxz00_5685 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30108)), BGl_string2746z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_g1106z00_1088); 
FAILURE(BgL_auxz00_5685,BFALSE,BFALSE);} 
return 
BGl_deletez00zz__r4_pairs_and_lists_6_3z00(BgL_g1105z00_1087, BgL_auxz00_5682, BgL_eqz00_1093);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2743z00zz__r4_pairs_and_lists_6_3z00, BGl_string2745z00zz__r4_pairs_and_lists_6_3z00, 
BINT(
VECTOR_LENGTH(BgL_opt1103z00_94)));} } } } 

}



/* delete */
BGL_EXPORTED_DEF obj_t BGl_deletez00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_xz00_91, obj_t BgL_yz00_92, obj_t BgL_eqz00_93)
{
{ /* Ieee/pairlist.scm 760 */
return 
BGl_loopze70ze7zz__r4_pairs_and_lists_6_3z00(BgL_eqz00_93, BgL_xz00_91, BgL_yz00_92);} 

}



/* loop~0 */
obj_t BGl_loopze70ze7zz__r4_pairs_and_lists_6_3z00(obj_t BgL_eqz00_2664, obj_t BgL_xz00_1096, obj_t BgL_yz00_1097)
{
{ /* Ieee/pairlist.scm 761 */
BGl_loopze70ze7zz__r4_pairs_and_lists_6_3z00:
if(
NULLP(BgL_yz00_1097))
{ /* Ieee/pairlist.scm 764 */
return BgL_yz00_1097;}  else 
{ /* Ieee/pairlist.scm 765 */
bool_t BgL_test3595z00_5698;
{ /* Ieee/pairlist.scm 765 */
obj_t BgL_arg1472z00_1106;
{ /* Ieee/pairlist.scm 765 */
obj_t BgL_pairz00_2118;
if(
PAIRP(BgL_yz00_1097))
{ /* Ieee/pairlist.scm 765 */
BgL_pairz00_2118 = BgL_yz00_1097; }  else 
{ 
obj_t BgL_auxz00_5701;
BgL_auxz00_5701 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30228)), BGl_string2747z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_1097); 
FAILURE(BgL_auxz00_5701,BFALSE,BFALSE);} 
BgL_arg1472z00_1106 = 
CAR(BgL_pairz00_2118); } 
{ /* Ieee/pairlist.scm 765 */
obj_t BgL_funz00_3095;
if(
PROCEDUREP(BgL_eqz00_2664))
{ /* Ieee/pairlist.scm 765 */
BgL_funz00_3095 = BgL_eqz00_2664; }  else 
{ 
obj_t BgL_auxz00_5708;
BgL_auxz00_5708 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30217)), BGl_string2747z00zz__r4_pairs_and_lists_6_3z00, BGl_string2748z00zz__r4_pairs_and_lists_6_3z00, BgL_eqz00_2664); 
FAILURE(BgL_auxz00_5708,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3095, ((long)2)))
{ /* Ieee/pairlist.scm 765 */
BgL_test3595z00_5698 = 
CBOOL(
PROCEDURE_ENTRY(BgL_funz00_3095)(BgL_eqz00_2664, BgL_xz00_1096, BgL_arg1472z00_1106, BEOA))
; }  else 
{ /* Ieee/pairlist.scm 765 */
FAILURE(BGl_string2749z00zz__r4_pairs_and_lists_6_3z00,BGl_list2750z00zz__r4_pairs_and_lists_6_3z00,BgL_funz00_3095);} } } 
if(BgL_test3595z00_5698)
{ /* Ieee/pairlist.scm 765 */
obj_t BgL_arg1468z00_1102;
{ /* Ieee/pairlist.scm 765 */
obj_t BgL_pairz00_2119;
if(
PAIRP(BgL_yz00_1097))
{ /* Ieee/pairlist.scm 765 */
BgL_pairz00_2119 = BgL_yz00_1097; }  else 
{ 
obj_t BgL_auxz00_5723;
BgL_auxz00_5723 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30245)), BGl_string2747z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_1097); 
FAILURE(BgL_auxz00_5723,BFALSE,BFALSE);} 
BgL_arg1468z00_1102 = 
CDR(BgL_pairz00_2119); } 
{ 
obj_t BgL_yz00_5728;
BgL_yz00_5728 = BgL_arg1468z00_1102; 
BgL_yz00_1097 = BgL_yz00_5728; 
goto BGl_loopze70ze7zz__r4_pairs_and_lists_6_3z00;} }  else 
{ /* Ieee/pairlist.scm 766 */
obj_t BgL_arg1469z00_1103;obj_t BgL_arg1470z00_1104;
{ /* Ieee/pairlist.scm 766 */
obj_t BgL_pairz00_2120;
if(
PAIRP(BgL_yz00_1097))
{ /* Ieee/pairlist.scm 766 */
BgL_pairz00_2120 = BgL_yz00_1097; }  else 
{ 
obj_t BgL_auxz00_5731;
BgL_auxz00_5731 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30269)), BGl_string2747z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_1097); 
FAILURE(BgL_auxz00_5731,BFALSE,BFALSE);} 
BgL_arg1469z00_1103 = 
CAR(BgL_pairz00_2120); } 
{ /* Ieee/pairlist.scm 766 */
obj_t BgL_arg1471z00_1105;
{ /* Ieee/pairlist.scm 766 */
obj_t BgL_pairz00_2121;
if(
PAIRP(BgL_yz00_1097))
{ /* Ieee/pairlist.scm 766 */
BgL_pairz00_2121 = BgL_yz00_1097; }  else 
{ 
obj_t BgL_auxz00_5738;
BgL_auxz00_5738 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30285)), BGl_string2747z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_1097); 
FAILURE(BgL_auxz00_5738,BFALSE,BFALSE);} 
BgL_arg1471z00_1105 = 
CDR(BgL_pairz00_2121); } 
BgL_arg1470z00_1104 = 
BGl_loopze70ze7zz__r4_pairs_and_lists_6_3z00(BgL_eqz00_2664, BgL_xz00_1096, BgL_arg1471z00_1105); } 
return 
MAKE_YOUNG_PAIR(BgL_arg1469z00_1103, BgL_arg1470z00_1104);} } } 

}



/* _delete! */
obj_t BGl__deletez12z12zz__r4_pairs_and_lists_6_3z00(obj_t BgL_env1110z00_100, obj_t BgL_opt1109z00_99)
{
{ /* Ieee/pairlist.scm 771 */
{ /* Ieee/pairlist.scm 771 */
obj_t BgL_g1111z00_1108;obj_t BgL_g1112z00_1109;
BgL_g1111z00_1108 = 
VECTOR_REF(BgL_opt1109z00_99,((long)0)); 
BgL_g1112z00_1109 = 
VECTOR_REF(BgL_opt1109z00_99,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1109z00_99)) { case ((long)2) : 

{ /* Ieee/pairlist.scm 771 */

{ /* Ieee/pairlist.scm 771 */
obj_t BgL_auxz00_5747;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_g1112z00_1109))
{ /* Ieee/pairlist.scm 771 */
BgL_auxz00_5747 = BgL_g1112z00_1109
; }  else 
{ 
obj_t BgL_auxz00_5750;
BgL_auxz00_5750 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30517)), BGl_string2761z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_g1112z00_1109); 
FAILURE(BgL_auxz00_5750,BFALSE,BFALSE);} 
return 
BGl_deletez12z12zz__r4_pairs_and_lists_6_3z00(BgL_g1111z00_1108, BgL_auxz00_5747, BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} } break;case ((long)3) : 

{ /* Ieee/pairlist.scm 771 */
obj_t BgL_eqz00_1114;
BgL_eqz00_1114 = 
VECTOR_REF(BgL_opt1109z00_99,((long)2)); 
{ /* Ieee/pairlist.scm 771 */

{ /* Ieee/pairlist.scm 771 */
obj_t BgL_auxz00_5756;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_g1112z00_1109))
{ /* Ieee/pairlist.scm 771 */
BgL_auxz00_5756 = BgL_g1112z00_1109
; }  else 
{ 
obj_t BgL_auxz00_5759;
BgL_auxz00_5759 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30517)), BGl_string2761z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_g1112z00_1109); 
FAILURE(BgL_auxz00_5759,BFALSE,BFALSE);} 
return 
BGl_deletez12z12zz__r4_pairs_and_lists_6_3z00(BgL_g1111z00_1108, BgL_auxz00_5756, BgL_eqz00_1114);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2759z00zz__r4_pairs_and_lists_6_3z00, BGl_string2745z00zz__r4_pairs_and_lists_6_3z00, 
BINT(
VECTOR_LENGTH(BgL_opt1109z00_99)));} } } } 

}



/* delete! */
BGL_EXPORTED_DEF obj_t BGl_deletez12z12zz__r4_pairs_and_lists_6_3z00(obj_t BgL_xz00_96, obj_t BgL_yz00_97, obj_t BgL_eqz00_98)
{
{ /* Ieee/pairlist.scm 771 */
{ 
obj_t BgL_xz00_1117;obj_t BgL_yz00_1118;
{ /* Ieee/pairlist.scm 772 */
obj_t BgL_aux2484z00_3136;
BgL_xz00_1117 = BgL_xz00_96; 
BgL_yz00_1118 = BgL_yz00_97; 
BgL_zc3z04anonymousza31475ze3z87_1119:
if(
NULLP(BgL_yz00_1118))
{ /* Ieee/pairlist.scm 775 */
BgL_aux2484z00_3136 = BgL_yz00_1118; }  else 
{ /* Ieee/pairlist.scm 776 */
bool_t BgL_test3605z00_5771;
{ /* Ieee/pairlist.scm 776 */
obj_t BgL_arg1493z00_1136;
{ /* Ieee/pairlist.scm 776 */
obj_t BgL_pairz00_2123;
if(
PAIRP(BgL_yz00_1118))
{ /* Ieee/pairlist.scm 776 */
BgL_pairz00_2123 = BgL_yz00_1118; }  else 
{ 
obj_t BgL_auxz00_5774;
BgL_auxz00_5774 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30638)), BGl_string2762z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_1118); 
FAILURE(BgL_auxz00_5774,BFALSE,BFALSE);} 
BgL_arg1493z00_1136 = 
CAR(BgL_pairz00_2123); } 
{ /* Ieee/pairlist.scm 776 */
obj_t BgL_funz00_3112;
if(
PROCEDUREP(BgL_eqz00_98))
{ /* Ieee/pairlist.scm 776 */
BgL_funz00_3112 = BgL_eqz00_98; }  else 
{ 
obj_t BgL_auxz00_5781;
BgL_auxz00_5781 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30627)), BGl_string2762z00zz__r4_pairs_and_lists_6_3z00, BGl_string2748z00zz__r4_pairs_and_lists_6_3z00, BgL_eqz00_98); 
FAILURE(BgL_auxz00_5781,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3112, ((long)2)))
{ /* Ieee/pairlist.scm 776 */
BgL_test3605z00_5771 = 
CBOOL(
PROCEDURE_ENTRY(BgL_funz00_3112)(BgL_eqz00_98, BgL_xz00_1117, BgL_arg1493z00_1136, BEOA))
; }  else 
{ /* Ieee/pairlist.scm 776 */
FAILURE(BGl_string2763z00zz__r4_pairs_and_lists_6_3z00,BGl_list2764z00zz__r4_pairs_and_lists_6_3z00,BgL_funz00_3112);} } } 
if(BgL_test3605z00_5771)
{ /* Ieee/pairlist.scm 776 */
obj_t BgL_arg1479z00_1123;
{ /* Ieee/pairlist.scm 776 */
obj_t BgL_pairz00_2124;
if(
PAIRP(BgL_yz00_1118))
{ /* Ieee/pairlist.scm 776 */
BgL_pairz00_2124 = BgL_yz00_1118; }  else 
{ 
obj_t BgL_auxz00_5796;
BgL_auxz00_5796 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30655)), BGl_string2762z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_1118); 
FAILURE(BgL_auxz00_5796,BFALSE,BFALSE);} 
BgL_arg1479z00_1123 = 
CDR(BgL_pairz00_2124); } 
{ 
obj_t BgL_yz00_5801;
BgL_yz00_5801 = BgL_arg1479z00_1123; 
BgL_yz00_1118 = BgL_yz00_5801; 
goto BgL_zc3z04anonymousza31475ze3z87_1119;} }  else 
{ 
obj_t BgL_prevz00_1125;
BgL_prevz00_1125 = BgL_yz00_1118; 
BgL_zc3z04anonymousza31480ze3z87_1126:
{ /* Ieee/pairlist.scm 778 */
bool_t BgL_test3610z00_5802;
{ /* Ieee/pairlist.scm 451 */
obj_t BgL_tmpz00_5803;
{ /* Ieee/pairlist.scm 778 */
obj_t BgL_pairz00_2125;
if(
PAIRP(BgL_prevz00_1125))
{ /* Ieee/pairlist.scm 778 */
BgL_pairz00_2125 = BgL_prevz00_1125; }  else 
{ 
obj_t BgL_auxz00_5806;
BgL_auxz00_5806 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30712)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_prevz00_1125); 
FAILURE(BgL_auxz00_5806,BFALSE,BFALSE);} 
BgL_tmpz00_5803 = 
CDR(BgL_pairz00_2125); } 
BgL_test3610z00_5802 = 
NULLP(BgL_tmpz00_5803); } 
if(BgL_test3610z00_5802)
{ /* Ieee/pairlist.scm 778 */
BgL_aux2484z00_3136 = BgL_yz00_1118; }  else 
{ /* Ieee/pairlist.scm 780 */
bool_t BgL_test3612z00_5812;
{ /* Ieee/pairlist.scm 780 */
obj_t BgL_arg1491z00_1133;
{ /* Ieee/pairlist.scm 780 */
obj_t BgL_pairz00_2127;
if(
PAIRP(BgL_prevz00_1125))
{ /* Ieee/pairlist.scm 780 */
BgL_pairz00_2127 = BgL_prevz00_1125; }  else 
{ 
obj_t BgL_auxz00_5815;
BgL_auxz00_5815 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30740)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_prevz00_1125); 
FAILURE(BgL_auxz00_5815,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 270 */
obj_t BgL_pairz00_2130;
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2470z00_3121;
BgL_aux2470z00_3121 = 
CDR(BgL_pairz00_2127); 
if(
PAIRP(BgL_aux2470z00_3121))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_2130 = BgL_aux2470z00_3121; }  else 
{ 
obj_t BgL_auxz00_5822;
BgL_auxz00_5822 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2470z00_3121); 
FAILURE(BgL_auxz00_5822,BFALSE,BFALSE);} } 
BgL_arg1491z00_1133 = 
CAR(BgL_pairz00_2130); } } 
{ /* Ieee/pairlist.scm 780 */
obj_t BgL_funz00_3125;
if(
PROCEDUREP(BgL_eqz00_98))
{ /* Ieee/pairlist.scm 780 */
BgL_funz00_3125 = BgL_eqz00_98; }  else 
{ 
obj_t BgL_auxz00_5829;
BgL_auxz00_5829 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30730)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2748z00zz__r4_pairs_and_lists_6_3z00, BgL_eqz00_98); 
FAILURE(BgL_auxz00_5829,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3125, ((long)2)))
{ /* Ieee/pairlist.scm 780 */
BgL_test3612z00_5812 = 
CBOOL(
PROCEDURE_ENTRY(BgL_funz00_3125)(BgL_eqz00_98, BgL_arg1491z00_1133, BgL_xz00_1117, BEOA))
; }  else 
{ /* Ieee/pairlist.scm 780 */
FAILURE(BGl_string2767z00zz__r4_pairs_and_lists_6_3z00,BGl_list2768z00zz__r4_pairs_and_lists_6_3z00,BgL_funz00_3125);} } } 
if(BgL_test3612z00_5812)
{ /* Ieee/pairlist.scm 780 */
{ /* Ieee/pairlist.scm 781 */
obj_t BgL_arg1487z00_1131;
{ /* Ieee/pairlist.scm 781 */
obj_t BgL_pairz00_2131;
if(
PAIRP(BgL_prevz00_1125))
{ /* Ieee/pairlist.scm 781 */
BgL_pairz00_2131 = BgL_prevz00_1125; }  else 
{ 
obj_t BgL_auxz00_5844;
BgL_auxz00_5844 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30774)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_prevz00_1125); 
FAILURE(BgL_auxz00_5844,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 282 */
obj_t BgL_pairz00_2134;
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2478z00_3130;
BgL_aux2478z00_3130 = 
CDR(BgL_pairz00_2131); 
if(
PAIRP(BgL_aux2478z00_3130))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_2134 = BgL_aux2478z00_3130; }  else 
{ 
obj_t BgL_auxz00_5851;
BgL_auxz00_5851 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2478z00_3130); 
FAILURE(BgL_auxz00_5851,BFALSE,BFALSE);} } 
BgL_arg1487z00_1131 = 
CDR(BgL_pairz00_2134); } } 
{ /* Ieee/pairlist.scm 781 */
obj_t BgL_pairz00_2135;
if(
PAIRP(BgL_prevz00_1125))
{ /* Ieee/pairlist.scm 781 */
BgL_pairz00_2135 = BgL_prevz00_1125; }  else 
{ 
obj_t BgL_auxz00_5858;
BgL_auxz00_5858 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30763)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_prevz00_1125); 
FAILURE(BgL_auxz00_5858,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2135, BgL_arg1487z00_1131); } } 
{ 

goto BgL_zc3z04anonymousza31480ze3z87_1126;} }  else 
{ /* Ieee/pairlist.scm 783 */
obj_t BgL_arg1489z00_1132;
{ /* Ieee/pairlist.scm 783 */
obj_t BgL_pairz00_2136;
if(
PAIRP(BgL_prevz00_1125))
{ /* Ieee/pairlist.scm 783 */
BgL_pairz00_2136 = BgL_prevz00_1125; }  else 
{ 
obj_t BgL_auxz00_5865;
BgL_auxz00_5865 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30818)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_prevz00_1125); 
FAILURE(BgL_auxz00_5865,BFALSE,BFALSE);} 
BgL_arg1489z00_1132 = 
CDR(BgL_pairz00_2136); } 
{ 
obj_t BgL_prevz00_5870;
BgL_prevz00_5870 = BgL_arg1489z00_1132; 
BgL_prevz00_1125 = BgL_prevz00_5870; 
goto BgL_zc3z04anonymousza31480ze3z87_1126;} } } } } } 
{ /* Ieee/pairlist.scm 772 */
bool_t BgL_test3621z00_5871;
if(
PAIRP(BgL_aux2484z00_3136))
{ /* Ieee/pairlist.scm 226 */
BgL_test3621z00_5871 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3621z00_5871 = 
NULLP(BgL_aux2484z00_3136)
; } 
if(BgL_test3621z00_5871)
{ /* Ieee/pairlist.scm 772 */
return BgL_aux2484z00_3136;}  else 
{ 
obj_t BgL_auxz00_5875;
BgL_auxz00_5875 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30565)), BGl_string2760z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2484z00_3136); 
FAILURE(BgL_auxz00_5875,BFALSE,BFALSE);} } } } } 

}



/* cons* */
BGL_EXPORTED_DEF obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_xz00_101, obj_t BgL_yz00_102)
{
{ /* Ieee/pairlist.scm 788 */
if(
NULLP(BgL_yz00_102))
{ /* Ieee/pairlist.scm 793 */
return BgL_xz00_101;}  else 
{ /* Ieee/pairlist.scm 793 */
return 
MAKE_YOUNG_PAIR(BgL_xz00_101, 
BGl_consza21ze70z45zz__r4_pairs_and_lists_6_3z00(BgL_yz00_102));} } 

}



/* cons*1~0 */
obj_t BGl_consza21ze70z45zz__r4_pairs_and_lists_6_3z00(obj_t BgL_xz00_1138)
{
{ /* Ieee/pairlist.scm 789 */
{ /* Ieee/pairlist.scm 789 */
bool_t BgL_test3624z00_5883;
{ /* Ieee/pairlist.scm 451 */
obj_t BgL_tmpz00_5884;
{ /* Ieee/pairlist.scm 789 */
obj_t BgL_pairz00_2137;
if(
PAIRP(BgL_xz00_1138))
{ /* Ieee/pairlist.scm 789 */
BgL_pairz00_2137 = BgL_xz00_1138; }  else 
{ 
obj_t BgL_auxz00_5887;
BgL_auxz00_5887 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)31120)), BGl_string2771z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_xz00_1138); 
FAILURE(BgL_auxz00_5887,BFALSE,BFALSE);} 
BgL_tmpz00_5884 = 
CDR(BgL_pairz00_2137); } 
BgL_test3624z00_5883 = 
NULLP(BgL_tmpz00_5884); } 
if(BgL_test3624z00_5883)
{ /* Ieee/pairlist.scm 790 */
obj_t BgL_pairz00_2139;
if(
PAIRP(BgL_xz00_1138))
{ /* Ieee/pairlist.scm 790 */
BgL_pairz00_2139 = BgL_xz00_1138; }  else 
{ 
obj_t BgL_auxz00_5895;
BgL_auxz00_5895 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)31139)), BGl_string2771z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_xz00_1138); 
FAILURE(BgL_auxz00_5895,BFALSE,BFALSE);} 
return 
CAR(BgL_pairz00_2139);}  else 
{ /* Ieee/pairlist.scm 792 */
obj_t BgL_arg1498z00_1144;obj_t BgL_arg1500z00_1145;
{ /* Ieee/pairlist.scm 792 */
obj_t BgL_pairz00_2140;
if(
PAIRP(BgL_xz00_1138))
{ /* Ieee/pairlist.scm 792 */
BgL_pairz00_2140 = BgL_xz00_1138; }  else 
{ 
obj_t BgL_auxz00_5902;
BgL_auxz00_5902 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)31179)), BGl_string2771z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_xz00_1138); 
FAILURE(BgL_auxz00_5902,BFALSE,BFALSE);} 
BgL_arg1498z00_1144 = 
CAR(BgL_pairz00_2140); } 
{ /* Ieee/pairlist.scm 792 */
obj_t BgL_arg1502z00_1146;
{ /* Ieee/pairlist.scm 792 */
obj_t BgL_pairz00_2141;
if(
PAIRP(BgL_xz00_1138))
{ /* Ieee/pairlist.scm 792 */
BgL_pairz00_2141 = BgL_xz00_1138; }  else 
{ 
obj_t BgL_auxz00_5909;
BgL_auxz00_5909 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)31195)), BGl_string2771z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_xz00_1138); 
FAILURE(BgL_auxz00_5909,BFALSE,BFALSE);} 
BgL_arg1502z00_1146 = 
CDR(BgL_pairz00_2141); } 
BgL_arg1500z00_1145 = 
BGl_consza21ze70z45zz__r4_pairs_and_lists_6_3z00(BgL_arg1502z00_1146); } 
return 
MAKE_YOUNG_PAIR(BgL_arg1498z00_1144, BgL_arg1500z00_1145);} } } 

}



/* &cons* */
obj_t BGl_z62consza2zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2621, obj_t BgL_xz00_2622, obj_t BgL_yz00_2623)
{
{ /* Ieee/pairlist.scm 788 */
return 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_xz00_2622, BgL_yz00_2623);} 

}



/* reverse! */
BGL_EXPORTED_DEF obj_t bgl_reverse_bang(obj_t BgL_lz00_103)
{
{ /* Ieee/pairlist.scm 800 */
if(
NULLP(BgL_lz00_103))
{ /* Ieee/pairlist.scm 801 */
return BgL_lz00_103;}  else 
{ 
obj_t BgL_lz00_1151;obj_t BgL_rz00_1152;
{ /* Ieee/pairlist.scm 802 */
obj_t BgL_aux2502z00_3154;
BgL_lz00_1151 = BgL_lz00_103; 
BgL_rz00_1152 = BNIL; 
BgL_zc3z04anonymousza31507ze3z87_1153:
{ /* Ieee/pairlist.scm 804 */
bool_t BgL_test3630z00_5919;
{ /* Ieee/pairlist.scm 451 */
obj_t BgL_tmpz00_5920;
{ /* Ieee/pairlist.scm 804 */
obj_t BgL_pairz00_2144;
if(
PAIRP(BgL_lz00_1151))
{ /* Ieee/pairlist.scm 804 */
BgL_pairz00_2144 = BgL_lz00_1151; }  else 
{ 
obj_t BgL_auxz00_5923;
BgL_auxz00_5923 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)31582)), BGl_string2772z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1151); 
FAILURE(BgL_auxz00_5923,BFALSE,BFALSE);} 
BgL_tmpz00_5920 = 
CDR(BgL_pairz00_2144); } 
BgL_test3630z00_5919 = 
NULLP(BgL_tmpz00_5920); } 
if(BgL_test3630z00_5919)
{ /* Ieee/pairlist.scm 804 */
{ /* Ieee/pairlist.scm 806 */
obj_t BgL_pairz00_2146;
if(
PAIRP(BgL_lz00_1151))
{ /* Ieee/pairlist.scm 806 */
BgL_pairz00_2146 = BgL_lz00_1151; }  else 
{ 
obj_t BgL_auxz00_5931;
BgL_auxz00_5931 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)31634)), BGl_string2772z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1151); 
FAILURE(BgL_auxz00_5931,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2146, BgL_rz00_1152); } 
BgL_aux2502z00_3154 = BgL_lz00_1151; }  else 
{ /* Ieee/pairlist.scm 808 */
obj_t BgL_cdrlz00_1156;
{ /* Ieee/pairlist.scm 808 */
obj_t BgL_pairz00_2147;
if(
PAIRP(BgL_lz00_1151))
{ /* Ieee/pairlist.scm 808 */
BgL_pairz00_2147 = BgL_lz00_1151; }  else 
{ 
obj_t BgL_auxz00_5938;
BgL_auxz00_5938 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)31683)), BGl_string2772z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1151); 
FAILURE(BgL_auxz00_5938,BFALSE,BFALSE);} 
BgL_cdrlz00_1156 = 
CDR(BgL_pairz00_2147); } 
{ /* Ieee/pairlist.scm 810 */
obj_t BgL_arg1510z00_1157;
{ /* Ieee/pairlist.scm 810 */
obj_t BgL_pairz00_2148;
if(
PAIRP(BgL_lz00_1151))
{ /* Ieee/pairlist.scm 810 */
BgL_pairz00_2148 = BgL_lz00_1151; }  else 
{ 
obj_t BgL_auxz00_5945;
BgL_auxz00_5945 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)31724)), BGl_string2772z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1151); 
FAILURE(BgL_auxz00_5945,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2148, BgL_rz00_1152); } 
BgL_arg1510z00_1157 = BgL_lz00_1151; 
{ 
obj_t BgL_rz00_5951;obj_t BgL_lz00_5950;
BgL_lz00_5950 = BgL_cdrlz00_1156; 
BgL_rz00_5951 = BgL_arg1510z00_1157; 
BgL_rz00_1152 = BgL_rz00_5951; 
BgL_lz00_1151 = BgL_lz00_5950; 
goto BgL_zc3z04anonymousza31507ze3z87_1153;} } } } 
{ /* Ieee/pairlist.scm 802 */
bool_t BgL_test3635z00_5952;
if(
PAIRP(BgL_aux2502z00_3154))
{ /* Ieee/pairlist.scm 226 */
BgL_test3635z00_5952 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3635z00_5952 = 
NULLP(BgL_aux2502z00_3154)
; } 
if(BgL_test3635z00_5952)
{ /* Ieee/pairlist.scm 802 */
return BgL_aux2502z00_3154;}  else 
{ 
obj_t BgL_auxz00_5956;
BgL_auxz00_5956 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)31530)), BGl_string2773z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2502z00_3154); 
FAILURE(BgL_auxz00_5956,BFALSE,BFALSE);} } } } } 

}



/* &reverse! */
obj_t BGl_z62reversez12z70zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2624, obj_t BgL_lz00_2625)
{
{ /* Ieee/pairlist.scm 800 */
{ /* Ieee/pairlist.scm 801 */
obj_t BgL_auxz00_5960;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_lz00_2625))
{ /* Ieee/pairlist.scm 801 */
BgL_auxz00_5960 = BgL_lz00_2625
; }  else 
{ 
obj_t BgL_auxz00_5963;
BgL_auxz00_5963 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)31509)), BGl_string2774z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_2625); 
FAILURE(BgL_auxz00_5963,BFALSE,BFALSE);} 
return 
bgl_reverse_bang(BgL_auxz00_5960);} } 

}



/* every */
BGL_EXPORTED_DEF obj_t BGl_everyz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_predz00_104, obj_t BgL_lz00_105)
{
{ /* Ieee/pairlist.scm 816 */
if(
NULLP(BgL_lz00_105))
{ /* Ieee/pairlist.scm 818 */
return BTRUE;}  else 
{ /* Ieee/pairlist.scm 820 */
bool_t BgL_test3639z00_5970;
{ /* Ieee/pairlist.scm 451 */
obj_t BgL_tmpz00_5971;
{ /* Ieee/pairlist.scm 820 */
obj_t BgL_pairz00_2150;
if(
PAIRP(BgL_lz00_105))
{ /* Ieee/pairlist.scm 820 */
BgL_pairz00_2150 = BgL_lz00_105; }  else 
{ 
obj_t BgL_auxz00_5974;
BgL_auxz00_5974 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32051)), BGl_string2775z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_105); 
FAILURE(BgL_auxz00_5974,BFALSE,BFALSE);} 
BgL_tmpz00_5971 = 
CDR(BgL_pairz00_2150); } 
BgL_test3639z00_5970 = 
NULLP(BgL_tmpz00_5971); } 
if(BgL_test3639z00_5970)
{ /* Ieee/pairlist.scm 821 */
obj_t BgL_g1025z00_1163;
{ /* Ieee/pairlist.scm 821 */
obj_t BgL_pairz00_2152;
if(
PAIRP(BgL_lz00_105))
{ /* Ieee/pairlist.scm 821 */
BgL_pairz00_2152 = BgL_lz00_105; }  else 
{ 
obj_t BgL_auxz00_5982;
BgL_auxz00_5982 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32081)), BGl_string2775z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_105); 
FAILURE(BgL_auxz00_5982,BFALSE,BFALSE);} 
BgL_g1025z00_1163 = 
CAR(BgL_pairz00_2152); } 
{ 
obj_t BgL_lz00_1165;
{ /* Ieee/pairlist.scm 821 */
bool_t BgL_tmpz00_5987;
BgL_lz00_1165 = BgL_g1025z00_1163; 
BgL_zc3z04anonymousza31515ze3z87_1166:
{ /* Ieee/pairlist.scm 822 */
bool_t BgL__ortest_1026z00_1167;
BgL__ortest_1026z00_1167 = 
NULLP(BgL_lz00_1165); 
if(BgL__ortest_1026z00_1167)
{ /* Ieee/pairlist.scm 822 */
BgL_tmpz00_5987 = BgL__ortest_1026z00_1167
; }  else 
{ /* Ieee/pairlist.scm 823 */
obj_t BgL__andtest_1027z00_1168;
{ /* Ieee/pairlist.scm 823 */
obj_t BgL_arg1518z00_1170;
{ /* Ieee/pairlist.scm 823 */
obj_t BgL_pairz00_2154;
if(
PAIRP(BgL_lz00_1165))
{ /* Ieee/pairlist.scm 823 */
BgL_pairz00_2154 = BgL_lz00_1165; }  else 
{ 
obj_t BgL_auxz00_5992;
BgL_auxz00_5992 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32126)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1165); 
FAILURE(BgL_auxz00_5992,BFALSE,BFALSE);} 
BgL_arg1518z00_1170 = 
CAR(BgL_pairz00_2154); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_predz00_104, ((long)1)))
{ /* Ieee/pairlist.scm 823 */
BgL__andtest_1027z00_1168 = 
PROCEDURE_ENTRY(BgL_predz00_104)(BgL_predz00_104, BgL_arg1518z00_1170, BEOA); }  else 
{ /* Ieee/pairlist.scm 823 */
FAILURE(BGl_string2767z00zz__r4_pairs_and_lists_6_3z00,BGl_list2776z00zz__r4_pairs_and_lists_6_3z00,BgL_predz00_104);} } 
if(
CBOOL(BgL__andtest_1027z00_1168))
{ /* Ieee/pairlist.scm 823 */
obj_t BgL_arg1516z00_1169;
{ /* Ieee/pairlist.scm 823 */
obj_t BgL_pairz00_2155;
if(
PAIRP(BgL_lz00_1165))
{ /* Ieee/pairlist.scm 823 */
BgL_pairz00_2155 = BgL_lz00_1165; }  else 
{ 
obj_t BgL_auxz00_6008;
BgL_auxz00_6008 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32141)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1165); 
FAILURE(BgL_auxz00_6008,BFALSE,BFALSE);} 
BgL_arg1516z00_1169 = 
CDR(BgL_pairz00_2155); } 
{ 
obj_t BgL_lz00_6013;
BgL_lz00_6013 = BgL_arg1516z00_1169; 
BgL_lz00_1165 = BgL_lz00_6013; 
goto BgL_zc3z04anonymousza31515ze3z87_1166;} }  else 
{ /* Ieee/pairlist.scm 823 */
BgL_tmpz00_5987 = ((bool_t)0)
; } } } 
return 
BBOOL(BgL_tmpz00_5987);} } }  else 
{ 
obj_t BgL_lz00_1173;
{ /* Ieee/pairlist.scm 825 */
bool_t BgL_tmpz00_6015;
BgL_lz00_1173 = BgL_lz00_105; 
BgL_zc3z04anonymousza31519ze3z87_1174:
{ /* Ieee/pairlist.scm 826 */
bool_t BgL__ortest_1028z00_1175;
{ /* Ieee/pairlist.scm 451 */
obj_t BgL_tmpz00_6016;
{ /* Ieee/pairlist.scm 826 */
obj_t BgL_pairz00_2156;
if(
PAIRP(BgL_lz00_1173))
{ /* Ieee/pairlist.scm 826 */
BgL_pairz00_2156 = BgL_lz00_1173; }  else 
{ 
obj_t BgL_auxz00_6019;
BgL_auxz00_6019 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32205)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1173); 
FAILURE(BgL_auxz00_6019,BFALSE,BFALSE);} 
BgL_tmpz00_6016 = 
CAR(BgL_pairz00_2156); } 
BgL__ortest_1028z00_1175 = 
NULLP(BgL_tmpz00_6016); } 
if(BgL__ortest_1028z00_1175)
{ /* Ieee/pairlist.scm 826 */
BgL_tmpz00_6015 = BgL__ortest_1028z00_1175
; }  else 
{ /* Ieee/pairlist.scm 827 */
obj_t BgL__andtest_1029z00_1176;
{ /* Ieee/pairlist.scm 827 */
obj_t BgL_valz00_3180;
if(
NULLP(BgL_lz00_1173))
{ /* Ieee/pairlist.scm 827 */
BgL_valz00_3180 = BNIL; }  else 
{ /* Ieee/pairlist.scm 827 */
obj_t BgL_head1074z00_1197;
{ /* Ieee/pairlist.scm 827 */
obj_t BgL_arg1540z00_1210;
{ /* Ieee/pairlist.scm 827 */
obj_t BgL_pairz00_2160;
{ /* Ieee/pairlist.scm 827 */
obj_t BgL_pairz00_2159;
if(
PAIRP(BgL_lz00_1173))
{ /* Ieee/pairlist.scm 827 */
BgL_pairz00_2159 = BgL_lz00_1173; }  else 
{ 
obj_t BgL_auxz00_6030;
BgL_auxz00_6030 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32233)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1173); 
FAILURE(BgL_auxz00_6030,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2520z00_3173;
BgL_aux2520z00_3173 = 
CAR(BgL_pairz00_2159); 
if(
PAIRP(BgL_aux2520z00_3173))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_2160 = BgL_aux2520z00_3173; }  else 
{ 
obj_t BgL_auxz00_6037;
BgL_auxz00_6037 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2520z00_3173); 
FAILURE(BgL_auxz00_6037,BFALSE,BFALSE);} } } 
BgL_arg1540z00_1210 = 
CAR(BgL_pairz00_2160); } 
{ /* Ieee/pairlist.scm 827 */
obj_t BgL_res1925z00_2161;
BgL_res1925z00_2161 = 
MAKE_YOUNG_PAIR(BgL_arg1540z00_1210, BNIL); 
BgL_head1074z00_1197 = BgL_res1925z00_2161; } } 
{ /* Ieee/pairlist.scm 827 */
obj_t BgL_g1077z00_1198;
{ /* Ieee/pairlist.scm 827 */
obj_t BgL_pairz00_2162;
if(
PAIRP(BgL_lz00_1173))
{ /* Ieee/pairlist.scm 827 */
BgL_pairz00_2162 = BgL_lz00_1173; }  else 
{ 
obj_t BgL_auxz00_6045;
BgL_auxz00_6045 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32233)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1173); 
FAILURE(BgL_auxz00_6045,BFALSE,BFALSE);} 
BgL_g1077z00_1198 = 
CDR(BgL_pairz00_2162); } 
{ 
obj_t BgL_l1072z00_1200;obj_t BgL_tail1075z00_1201;
BgL_l1072z00_1200 = BgL_g1077z00_1198; 
BgL_tail1075z00_1201 = BgL_head1074z00_1197; 
BgL_zc3z04anonymousza31532ze3z87_1202:
if(
PAIRP(BgL_l1072z00_1200))
{ /* Ieee/pairlist.scm 827 */
obj_t BgL_newtail1076z00_1204;
{ /* Ieee/pairlist.scm 827 */
obj_t BgL_arg1535z00_1206;
{ /* Ieee/pairlist.scm 827 */
obj_t BgL_pairz00_2165;
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2524z00_3177;
BgL_aux2524z00_3177 = 
CAR(BgL_l1072z00_1200); 
if(
PAIRP(BgL_aux2524z00_3177))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_2165 = BgL_aux2524z00_3177; }  else 
{ 
obj_t BgL_auxz00_6055;
BgL_auxz00_6055 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2781z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2524z00_3177); 
FAILURE(BgL_auxz00_6055,BFALSE,BFALSE);} } 
BgL_arg1535z00_1206 = 
CAR(BgL_pairz00_2165); } 
{ /* Ieee/pairlist.scm 827 */
obj_t BgL_res1927z00_2166;
BgL_res1927z00_2166 = 
MAKE_YOUNG_PAIR(BgL_arg1535z00_1206, BNIL); 
BgL_newtail1076z00_1204 = BgL_res1927z00_2166; } } 
SET_CDR(BgL_tail1075z00_1201, BgL_newtail1076z00_1204); 
{ 
obj_t BgL_tail1075z00_6064;obj_t BgL_l1072z00_6062;
BgL_l1072z00_6062 = 
CDR(BgL_l1072z00_1200); 
BgL_tail1075z00_6064 = BgL_newtail1076z00_1204; 
BgL_tail1075z00_1201 = BgL_tail1075z00_6064; 
BgL_l1072z00_1200 = BgL_l1072z00_6062; 
goto BgL_zc3z04anonymousza31532ze3z87_1202;} }  else 
{ /* Ieee/pairlist.scm 827 */
if(
NULLP(BgL_l1072z00_1200))
{ /* Ieee/pairlist.scm 827 */
BgL_valz00_3180 = BgL_head1074z00_1197; }  else 
{ /* Ieee/pairlist.scm 827 */
BgL_valz00_3180 = 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string2782z00zz__r4_pairs_and_lists_6_3z00, BGl_string2703z00zz__r4_pairs_and_lists_6_3z00, BgL_l1072z00_1200, BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32233))); } } } } } 
{ /* Ieee/pairlist.scm 827 */
int BgL_len2526z00_3181;
BgL_len2526z00_3181 = 
(int)(
bgl_list_length(BgL_valz00_3180)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_predz00_104, BgL_len2526z00_3181))
{ /* Ieee/pairlist.scm 827 */
BgL__andtest_1029z00_1176 = 
apply(BgL_predz00_104, BgL_valz00_3180); }  else 
{ /* Ieee/pairlist.scm 827 */
FAILURE(BGl_symbol2783z00zz__r4_pairs_and_lists_6_3z00,BGl_string2784z00zz__r4_pairs_and_lists_6_3z00,BGl_list2785z00zz__r4_pairs_and_lists_6_3z00);} } } 
if(
CBOOL(BgL__andtest_1029z00_1176))
{ /* Ieee/pairlist.scm 827 */
obj_t BgL_arg1520z00_1177;
if(
NULLP(BgL_lz00_1173))
{ /* Ieee/pairlist.scm 827 */
BgL_arg1520z00_1177 = BNIL; }  else 
{ /* Ieee/pairlist.scm 827 */
obj_t BgL_head1080z00_1180;
{ /* Ieee/pairlist.scm 827 */
obj_t BgL_arg1528z00_1193;
{ /* Ieee/pairlist.scm 827 */
obj_t BgL_pairz00_2172;
{ /* Ieee/pairlist.scm 827 */
obj_t BgL_pairz00_2171;
if(
PAIRP(BgL_lz00_1173))
{ /* Ieee/pairlist.scm 827 */
BgL_pairz00_2171 = BgL_lz00_1173; }  else 
{ 
obj_t BgL_auxz00_6082;
BgL_auxz00_6082 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32252)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1173); 
FAILURE(BgL_auxz00_6082,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2530z00_3185;
BgL_aux2530z00_3185 = 
CAR(BgL_pairz00_2171); 
if(
PAIRP(BgL_aux2530z00_3185))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_2172 = BgL_aux2530z00_3185; }  else 
{ 
obj_t BgL_auxz00_6089;
BgL_auxz00_6089 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2530z00_3185); 
FAILURE(BgL_auxz00_6089,BFALSE,BFALSE);} } } 
BgL_arg1528z00_1193 = 
CDR(BgL_pairz00_2172); } 
{ /* Ieee/pairlist.scm 827 */
obj_t BgL_res1930z00_2173;
BgL_res1930z00_2173 = 
MAKE_YOUNG_PAIR(BgL_arg1528z00_1193, BNIL); 
BgL_head1080z00_1180 = BgL_res1930z00_2173; } } 
{ /* Ieee/pairlist.scm 827 */
obj_t BgL_g1083z00_1181;
{ /* Ieee/pairlist.scm 827 */
obj_t BgL_pairz00_2174;
if(
PAIRP(BgL_lz00_1173))
{ /* Ieee/pairlist.scm 827 */
BgL_pairz00_2174 = BgL_lz00_1173; }  else 
{ 
obj_t BgL_auxz00_6097;
BgL_auxz00_6097 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32252)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1173); 
FAILURE(BgL_auxz00_6097,BFALSE,BFALSE);} 
BgL_g1083z00_1181 = 
CDR(BgL_pairz00_2174); } 
{ 
obj_t BgL_l1078z00_1183;obj_t BgL_tail1081z00_1184;
BgL_l1078z00_1183 = BgL_g1083z00_1181; 
BgL_tail1081z00_1184 = BgL_head1080z00_1180; 
BgL_zc3z04anonymousza31522ze3z87_1185:
if(
PAIRP(BgL_l1078z00_1183))
{ /* Ieee/pairlist.scm 827 */
obj_t BgL_newtail1082z00_1187;
{ /* Ieee/pairlist.scm 827 */
obj_t BgL_arg1525z00_1189;
{ /* Ieee/pairlist.scm 827 */
obj_t BgL_pairz00_2177;
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2534z00_3189;
BgL_aux2534z00_3189 = 
CAR(BgL_l1078z00_1183); 
if(
PAIRP(BgL_aux2534z00_3189))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_2177 = BgL_aux2534z00_3189; }  else 
{ 
obj_t BgL_auxz00_6107;
BgL_auxz00_6107 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2897z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2534z00_3189); 
FAILURE(BgL_auxz00_6107,BFALSE,BFALSE);} } 
BgL_arg1525z00_1189 = 
CDR(BgL_pairz00_2177); } 
{ /* Ieee/pairlist.scm 827 */
obj_t BgL_res1932z00_2178;
BgL_res1932z00_2178 = 
MAKE_YOUNG_PAIR(BgL_arg1525z00_1189, BNIL); 
BgL_newtail1082z00_1187 = BgL_res1932z00_2178; } } 
SET_CDR(BgL_tail1081z00_1184, BgL_newtail1082z00_1187); 
{ 
obj_t BgL_tail1081z00_6116;obj_t BgL_l1078z00_6114;
BgL_l1078z00_6114 = 
CDR(BgL_l1078z00_1183); 
BgL_tail1081z00_6116 = BgL_newtail1082z00_1187; 
BgL_tail1081z00_1184 = BgL_tail1081z00_6116; 
BgL_l1078z00_1183 = BgL_l1078z00_6114; 
goto BgL_zc3z04anonymousza31522ze3z87_1185;} }  else 
{ /* Ieee/pairlist.scm 827 */
if(
NULLP(BgL_l1078z00_1183))
{ /* Ieee/pairlist.scm 827 */
BgL_arg1520z00_1177 = BgL_head1080z00_1180; }  else 
{ /* Ieee/pairlist.scm 827 */
BgL_arg1520z00_1177 = 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string2782z00zz__r4_pairs_and_lists_6_3z00, BGl_string2703z00zz__r4_pairs_and_lists_6_3z00, BgL_l1078z00_1183, BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32252))); } } } } } 
{ 
obj_t BgL_lz00_6121;
BgL_lz00_6121 = BgL_arg1520z00_1177; 
BgL_lz00_1173 = BgL_lz00_6121; 
goto BgL_zc3z04anonymousza31519ze3z87_1174;} }  else 
{ /* Ieee/pairlist.scm 827 */
BgL_tmpz00_6015 = ((bool_t)0)
; } } } 
return 
BBOOL(BgL_tmpz00_6015);} } } } 

}



/* &every */
obj_t BGl_z62everyz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2626, obj_t BgL_predz00_2627, obj_t BgL_lz00_2628)
{
{ /* Ieee/pairlist.scm 816 */
{ /* Ieee/pairlist.scm 818 */
obj_t BgL_auxz00_6123;
if(
PROCEDUREP(BgL_predz00_2627))
{ /* Ieee/pairlist.scm 818 */
BgL_auxz00_6123 = BgL_predz00_2627
; }  else 
{ 
obj_t BgL_auxz00_6126;
BgL_auxz00_6126 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32010)), BGl_string2898z00zz__r4_pairs_and_lists_6_3z00, BGl_string2748z00zz__r4_pairs_and_lists_6_3z00, BgL_predz00_2627); 
FAILURE(BgL_auxz00_6126,BFALSE,BFALSE);} 
return 
BGl_everyz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_6123, BgL_lz00_2628);} } 

}



/* any */
BGL_EXPORTED_DEF obj_t BGl_anyz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_predz00_106, obj_t BgL_lz00_107)
{
{ /* Ieee/pairlist.scm 832 */
if(
NULLP(BgL_lz00_107))
{ /* Ieee/pairlist.scm 834 */
return BFALSE;}  else 
{ /* Ieee/pairlist.scm 836 */
bool_t BgL_test3667z00_6133;
{ /* Ieee/pairlist.scm 451 */
obj_t BgL_tmpz00_6134;
{ /* Ieee/pairlist.scm 836 */
obj_t BgL_pairz00_2183;
if(
PAIRP(BgL_lz00_107))
{ /* Ieee/pairlist.scm 836 */
BgL_pairz00_2183 = BgL_lz00_107; }  else 
{ 
obj_t BgL_auxz00_6137;
BgL_auxz00_6137 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32573)), BGl_string2899z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_107); 
FAILURE(BgL_auxz00_6137,BFALSE,BFALSE);} 
BgL_tmpz00_6134 = 
CDR(BgL_pairz00_2183); } 
BgL_test3667z00_6133 = 
NULLP(BgL_tmpz00_6134); } 
if(BgL_test3667z00_6133)
{ /* Ieee/pairlist.scm 837 */
obj_t BgL_g1030z00_1218;
{ /* Ieee/pairlist.scm 837 */
obj_t BgL_pairz00_2185;
if(
PAIRP(BgL_lz00_107))
{ /* Ieee/pairlist.scm 837 */
BgL_pairz00_2185 = BgL_lz00_107; }  else 
{ 
obj_t BgL_auxz00_6145;
BgL_auxz00_6145 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32603)), BGl_string2899z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_107); 
FAILURE(BgL_auxz00_6145,BFALSE,BFALSE);} 
BgL_g1030z00_1218 = 
CAR(BgL_pairz00_2185); } 
{ 
obj_t BgL_lz00_1220;
BgL_lz00_1220 = BgL_g1030z00_1218; 
BgL_zc3z04anonymousza31548ze3z87_1221:
if(
PAIRP(BgL_lz00_1220))
{ /* Ieee/pairlist.scm 839 */
obj_t BgL__ortest_1032z00_1223;
{ /* Ieee/pairlist.scm 839 */
obj_t BgL_arg1552z00_1225;
BgL_arg1552z00_1225 = 
CAR(BgL_lz00_1220); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_predz00_106, ((long)1)))
{ /* Ieee/pairlist.scm 839 */
BgL__ortest_1032z00_1223 = 
PROCEDURE_ENTRY(BgL_predz00_106)(BgL_predz00_106, BgL_arg1552z00_1225, BEOA); }  else 
{ /* Ieee/pairlist.scm 839 */
FAILURE(BGl_string2767z00zz__r4_pairs_and_lists_6_3z00,BGl_list2900z00zz__r4_pairs_and_lists_6_3z00,BgL_predz00_106);} } 
if(
CBOOL(BgL__ortest_1032z00_1223))
{ /* Ieee/pairlist.scm 839 */
return BgL__ortest_1032z00_1223;}  else 
{ 
obj_t BgL_lz00_6162;
BgL_lz00_6162 = 
CDR(BgL_lz00_1220); 
BgL_lz00_1220 = BgL_lz00_6162; 
goto BgL_zc3z04anonymousza31548ze3z87_1221;} }  else 
{ /* Ieee/pairlist.scm 838 */
return BFALSE;} } }  else 
{ 
obj_t BgL_lz00_1228;
BgL_lz00_1228 = BgL_lz00_107; 
BgL_zc3z04anonymousza31553ze3z87_1229:
{ /* Ieee/pairlist.scm 842 */
bool_t BgL_test3673z00_6164;
{ /* Ieee/pairlist.scm 214 */
obj_t BgL_tmpz00_6165;
{ /* Ieee/pairlist.scm 842 */
obj_t BgL_pairz00_2189;
if(
PAIRP(BgL_lz00_1228))
{ /* Ieee/pairlist.scm 842 */
BgL_pairz00_2189 = BgL_lz00_1228; }  else 
{ 
obj_t BgL_auxz00_6168;
BgL_auxz00_6168 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32729)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1228); 
FAILURE(BgL_auxz00_6168,BFALSE,BFALSE);} 
BgL_tmpz00_6165 = 
CAR(BgL_pairz00_2189); } 
BgL_test3673z00_6164 = 
PAIRP(BgL_tmpz00_6165); } 
if(BgL_test3673z00_6164)
{ /* Ieee/pairlist.scm 843 */
obj_t BgL__ortest_1034z00_1231;
{ /* Ieee/pairlist.scm 843 */
obj_t BgL_valz00_3211;
if(
NULLP(BgL_lz00_1228))
{ /* Ieee/pairlist.scm 843 */
BgL_valz00_3211 = BNIL; }  else 
{ /* Ieee/pairlist.scm 843 */
obj_t BgL_head1086z00_1252;
{ /* Ieee/pairlist.scm 843 */
obj_t BgL_arg1573z00_1265;
{ /* Ieee/pairlist.scm 843 */
obj_t BgL_pairz00_2193;
{ /* Ieee/pairlist.scm 843 */
obj_t BgL_pairz00_2192;
if(
PAIRP(BgL_lz00_1228))
{ /* Ieee/pairlist.scm 843 */
BgL_pairz00_2192 = BgL_lz00_1228; }  else 
{ 
obj_t BgL_auxz00_6178;
BgL_auxz00_6178 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32757)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1228); 
FAILURE(BgL_auxz00_6178,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2548z00_3204;
BgL_aux2548z00_3204 = 
CAR(BgL_pairz00_2192); 
if(
PAIRP(BgL_aux2548z00_3204))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_2193 = BgL_aux2548z00_3204; }  else 
{ 
obj_t BgL_auxz00_6185;
BgL_auxz00_6185 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2548z00_3204); 
FAILURE(BgL_auxz00_6185,BFALSE,BFALSE);} } } 
BgL_arg1573z00_1265 = 
CAR(BgL_pairz00_2193); } 
{ /* Ieee/pairlist.scm 843 */
obj_t BgL_res1939z00_2194;
BgL_res1939z00_2194 = 
MAKE_YOUNG_PAIR(BgL_arg1573z00_1265, BNIL); 
BgL_head1086z00_1252 = BgL_res1939z00_2194; } } 
{ /* Ieee/pairlist.scm 843 */
obj_t BgL_g1089z00_1253;
{ /* Ieee/pairlist.scm 843 */
obj_t BgL_pairz00_2195;
if(
PAIRP(BgL_lz00_1228))
{ /* Ieee/pairlist.scm 843 */
BgL_pairz00_2195 = BgL_lz00_1228; }  else 
{ 
obj_t BgL_auxz00_6193;
BgL_auxz00_6193 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32757)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1228); 
FAILURE(BgL_auxz00_6193,BFALSE,BFALSE);} 
BgL_g1089z00_1253 = 
CDR(BgL_pairz00_2195); } 
{ 
obj_t BgL_l1084z00_1255;obj_t BgL_tail1087z00_1256;
BgL_l1084z00_1255 = BgL_g1089z00_1253; 
BgL_tail1087z00_1256 = BgL_head1086z00_1252; 
BgL_zc3z04anonymousza31566ze3z87_1257:
if(
PAIRP(BgL_l1084z00_1255))
{ /* Ieee/pairlist.scm 843 */
obj_t BgL_newtail1088z00_1259;
{ /* Ieee/pairlist.scm 843 */
obj_t BgL_arg1569z00_1261;
{ /* Ieee/pairlist.scm 843 */
obj_t BgL_pairz00_2198;
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2552z00_3208;
BgL_aux2552z00_3208 = 
CAR(BgL_l1084z00_1255); 
if(
PAIRP(BgL_aux2552z00_3208))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_2198 = BgL_aux2552z00_3208; }  else 
{ 
obj_t BgL_auxz00_6203;
BgL_auxz00_6203 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2903z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2552z00_3208); 
FAILURE(BgL_auxz00_6203,BFALSE,BFALSE);} } 
BgL_arg1569z00_1261 = 
CAR(BgL_pairz00_2198); } 
{ /* Ieee/pairlist.scm 843 */
obj_t BgL_res1941z00_2199;
BgL_res1941z00_2199 = 
MAKE_YOUNG_PAIR(BgL_arg1569z00_1261, BNIL); 
BgL_newtail1088z00_1259 = BgL_res1941z00_2199; } } 
SET_CDR(BgL_tail1087z00_1256, BgL_newtail1088z00_1259); 
{ 
obj_t BgL_tail1087z00_6212;obj_t BgL_l1084z00_6210;
BgL_l1084z00_6210 = 
CDR(BgL_l1084z00_1255); 
BgL_tail1087z00_6212 = BgL_newtail1088z00_1259; 
BgL_tail1087z00_1256 = BgL_tail1087z00_6212; 
BgL_l1084z00_1255 = BgL_l1084z00_6210; 
goto BgL_zc3z04anonymousza31566ze3z87_1257;} }  else 
{ /* Ieee/pairlist.scm 843 */
if(
NULLP(BgL_l1084z00_1255))
{ /* Ieee/pairlist.scm 843 */
BgL_valz00_3211 = BgL_head1086z00_1252; }  else 
{ /* Ieee/pairlist.scm 843 */
BgL_valz00_3211 = 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string2782z00zz__r4_pairs_and_lists_6_3z00, BGl_string2703z00zz__r4_pairs_and_lists_6_3z00, BgL_l1084z00_1255, BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32757))); } } } } } 
{ /* Ieee/pairlist.scm 843 */
int BgL_len2554z00_3212;
BgL_len2554z00_3212 = 
(int)(
bgl_list_length(BgL_valz00_3211)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_predz00_106, BgL_len2554z00_3212))
{ /* Ieee/pairlist.scm 843 */
BgL__ortest_1034z00_1231 = 
apply(BgL_predz00_106, BgL_valz00_3211); }  else 
{ /* Ieee/pairlist.scm 843 */
FAILURE(BGl_symbol2783z00zz__r4_pairs_and_lists_6_3z00,BGl_string2784z00zz__r4_pairs_and_lists_6_3z00,BGl_list2904z00zz__r4_pairs_and_lists_6_3z00);} } } 
if(
CBOOL(BgL__ortest_1034z00_1231))
{ /* Ieee/pairlist.scm 843 */
return BgL__ortest_1034z00_1231;}  else 
{ /* Ieee/pairlist.scm 843 */
obj_t BgL_arg1554z00_1232;
if(
NULLP(BgL_lz00_1228))
{ /* Ieee/pairlist.scm 843 */
BgL_arg1554z00_1232 = BNIL; }  else 
{ /* Ieee/pairlist.scm 843 */
obj_t BgL_head1092z00_1235;
{ /* Ieee/pairlist.scm 843 */
obj_t BgL_arg1563z00_1248;
{ /* Ieee/pairlist.scm 843 */
obj_t BgL_pairz00_2205;
{ /* Ieee/pairlist.scm 843 */
obj_t BgL_pairz00_2204;
if(
PAIRP(BgL_lz00_1228))
{ /* Ieee/pairlist.scm 843 */
BgL_pairz00_2204 = BgL_lz00_1228; }  else 
{ 
obj_t BgL_auxz00_6230;
BgL_auxz00_6230 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32776)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1228); 
FAILURE(BgL_auxz00_6230,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2558z00_3216;
BgL_aux2558z00_3216 = 
CAR(BgL_pairz00_2204); 
if(
PAIRP(BgL_aux2558z00_3216))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_2205 = BgL_aux2558z00_3216; }  else 
{ 
obj_t BgL_auxz00_6237;
BgL_auxz00_6237 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2558z00_3216); 
FAILURE(BgL_auxz00_6237,BFALSE,BFALSE);} } } 
BgL_arg1563z00_1248 = 
CDR(BgL_pairz00_2205); } 
{ /* Ieee/pairlist.scm 843 */
obj_t BgL_res1944z00_2206;
BgL_res1944z00_2206 = 
MAKE_YOUNG_PAIR(BgL_arg1563z00_1248, BNIL); 
BgL_head1092z00_1235 = BgL_res1944z00_2206; } } 
{ /* Ieee/pairlist.scm 843 */
obj_t BgL_g1095z00_1236;
{ /* Ieee/pairlist.scm 843 */
obj_t BgL_pairz00_2207;
if(
PAIRP(BgL_lz00_1228))
{ /* Ieee/pairlist.scm 843 */
BgL_pairz00_2207 = BgL_lz00_1228; }  else 
{ 
obj_t BgL_auxz00_6245;
BgL_auxz00_6245 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32776)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1228); 
FAILURE(BgL_auxz00_6245,BFALSE,BFALSE);} 
BgL_g1095z00_1236 = 
CDR(BgL_pairz00_2207); } 
{ 
obj_t BgL_l1090z00_1238;obj_t BgL_tail1093z00_1239;
BgL_l1090z00_1238 = BgL_g1095z00_1236; 
BgL_tail1093z00_1239 = BgL_head1092z00_1235; 
BgL_zc3z04anonymousza31556ze3z87_1240:
if(
PAIRP(BgL_l1090z00_1238))
{ /* Ieee/pairlist.scm 843 */
obj_t BgL_newtail1094z00_1242;
{ /* Ieee/pairlist.scm 843 */
obj_t BgL_arg1560z00_1244;
{ /* Ieee/pairlist.scm 843 */
obj_t BgL_pairz00_2210;
{ /* Ieee/pairlist.scm 246 */
obj_t BgL_aux2562z00_3220;
BgL_aux2562z00_3220 = 
CAR(BgL_l1090z00_1238); 
if(
PAIRP(BgL_aux2562z00_3220))
{ /* Ieee/pairlist.scm 246 */
BgL_pairz00_2210 = BgL_aux2562z00_3220; }  else 
{ 
obj_t BgL_auxz00_6255;
BgL_auxz00_6255 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9743)), BGl_string2984z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2562z00_3220); 
FAILURE(BgL_auxz00_6255,BFALSE,BFALSE);} } 
BgL_arg1560z00_1244 = 
CDR(BgL_pairz00_2210); } 
{ /* Ieee/pairlist.scm 843 */
obj_t BgL_res1946z00_2211;
BgL_res1946z00_2211 = 
MAKE_YOUNG_PAIR(BgL_arg1560z00_1244, BNIL); 
BgL_newtail1094z00_1242 = BgL_res1946z00_2211; } } 
SET_CDR(BgL_tail1093z00_1239, BgL_newtail1094z00_1242); 
{ 
obj_t BgL_tail1093z00_6264;obj_t BgL_l1090z00_6262;
BgL_l1090z00_6262 = 
CDR(BgL_l1090z00_1238); 
BgL_tail1093z00_6264 = BgL_newtail1094z00_1242; 
BgL_tail1093z00_1239 = BgL_tail1093z00_6264; 
BgL_l1090z00_1238 = BgL_l1090z00_6262; 
goto BgL_zc3z04anonymousza31556ze3z87_1240;} }  else 
{ /* Ieee/pairlist.scm 843 */
if(
NULLP(BgL_l1090z00_1238))
{ /* Ieee/pairlist.scm 843 */
BgL_arg1554z00_1232 = BgL_head1092z00_1235; }  else 
{ /* Ieee/pairlist.scm 843 */
BgL_arg1554z00_1232 = 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string2782z00zz__r4_pairs_and_lists_6_3z00, BGl_string2703z00zz__r4_pairs_and_lists_6_3z00, BgL_l1090z00_1238, BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32776))); } } } } } 
{ 
obj_t BgL_lz00_6269;
BgL_lz00_6269 = BgL_arg1554z00_1232; 
BgL_lz00_1228 = BgL_lz00_6269; 
goto BgL_zc3z04anonymousza31553ze3z87_1229;} } }  else 
{ /* Ieee/pairlist.scm 842 */
return BFALSE;} } } } } 

}



/* &any */
obj_t BGl_z62anyz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2629, obj_t BgL_predz00_2630, obj_t BgL_lz00_2631)
{
{ /* Ieee/pairlist.scm 832 */
{ /* Ieee/pairlist.scm 834 */
obj_t BgL_auxz00_6270;
if(
PROCEDUREP(BgL_predz00_2630))
{ /* Ieee/pairlist.scm 834 */
BgL_auxz00_6270 = BgL_predz00_2630
; }  else 
{ 
obj_t BgL_auxz00_6273;
BgL_auxz00_6273 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32532)), BGl_string2985z00zz__r4_pairs_and_lists_6_3z00, BGl_string2748z00zz__r4_pairs_and_lists_6_3z00, BgL_predz00_2630); 
FAILURE(BgL_auxz00_6273,BFALSE,BFALSE);} 
return 
BGl_anyz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_6270, BgL_lz00_2631);} } 

}



/* find */
BGL_EXPORTED_DEF obj_t BGl_findz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_predz00_108, obj_t BgL_listz00_109)
{
{ /* Ieee/pairlist.scm 848 */
{ /* Ieee/pairlist.scm 849 */
obj_t BgL_g1035z00_2215;
BgL_g1035z00_2215 = 
BGl_findzd2tailzd2zz__r4_pairs_and_lists_6_3z00(BgL_predz00_108, BgL_listz00_109); 
if(
CBOOL(BgL_g1035z00_2215))
{ /* Ieee/pairlist.scm 849 */
obj_t BgL_pairz00_2217;
if(
PAIRP(BgL_g1035z00_2215))
{ /* Ieee/pairlist.scm 849 */
BgL_pairz00_2217 = BgL_g1035z00_2215; }  else 
{ 
obj_t BgL_auxz00_6283;
BgL_auxz00_6283 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)33053)), BGl_string2986z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_g1035z00_2215); 
FAILURE(BgL_auxz00_6283,BFALSE,BFALSE);} 
return 
CAR(BgL_pairz00_2217);}  else 
{ /* Ieee/pairlist.scm 849 */
return BFALSE;} } } 

}



/* &find */
obj_t BGl_z62findz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2632, obj_t BgL_predz00_2633, obj_t BgL_listz00_2634)
{
{ /* Ieee/pairlist.scm 848 */
{ /* Ieee/pairlist.scm 849 */
obj_t BgL_auxz00_6295;obj_t BgL_auxz00_6288;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_listz00_2634))
{ /* Ieee/pairlist.scm 849 */
BgL_auxz00_6295 = BgL_listz00_2634
; }  else 
{ 
obj_t BgL_auxz00_6298;
BgL_auxz00_6298 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)33053)), BGl_string2987z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2634); 
FAILURE(BgL_auxz00_6298,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_predz00_2633))
{ /* Ieee/pairlist.scm 849 */
BgL_auxz00_6288 = BgL_predz00_2633
; }  else 
{ 
obj_t BgL_auxz00_6291;
BgL_auxz00_6291 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)33053)), BGl_string2987z00zz__r4_pairs_and_lists_6_3z00, BGl_string2748z00zz__r4_pairs_and_lists_6_3z00, BgL_predz00_2633); 
FAILURE(BgL_auxz00_6291,BFALSE,BFALSE);} 
return 
BGl_findz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_6288, BgL_auxz00_6295);} } 

}



/* find-tail */
BGL_EXPORTED_DEF obj_t BGl_findzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_predz00_110, obj_t BgL_listz00_111)
{
{ /* Ieee/pairlist.scm 855 */
{ 
obj_t BgL_listz00_1273;
BgL_listz00_1273 = BgL_listz00_111; 
BgL_zc3z04anonymousza31578ze3z87_1274:
if(
PAIRP(BgL_listz00_1273))
{ /* Ieee/pairlist.scm 858 */
bool_t BgL_test3697z00_6305;
{ /* Ieee/pairlist.scm 858 */
obj_t BgL_arg1583z00_1279;
BgL_arg1583z00_1279 = 
CAR(BgL_listz00_1273); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_predz00_110, ((long)1)))
{ /* Ieee/pairlist.scm 858 */
BgL_test3697z00_6305 = 
CBOOL(
PROCEDURE_ENTRY(BgL_predz00_110)(BgL_predz00_110, BgL_arg1583z00_1279, BEOA))
; }  else 
{ /* Ieee/pairlist.scm 858 */
FAILURE(BGl_string2988z00zz__r4_pairs_and_lists_6_3z00,BGl_list2989z00zz__r4_pairs_and_lists_6_3z00,BgL_predz00_110);} } 
if(BgL_test3697z00_6305)
{ /* Ieee/pairlist.scm 858 */
return BgL_listz00_1273;}  else 
{ 
obj_t BgL_listz00_6315;
BgL_listz00_6315 = 
CDR(BgL_listz00_1273); 
BgL_listz00_1273 = BgL_listz00_6315; 
goto BgL_zc3z04anonymousza31578ze3z87_1274;} }  else 
{ /* Ieee/pairlist.scm 857 */
return BFALSE;} } } 

}



/* &find-tail */
obj_t BGl_z62findzd2tailzb0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2635, obj_t BgL_predz00_2636, obj_t BgL_listz00_2637)
{
{ /* Ieee/pairlist.scm 855 */
{ /* Ieee/pairlist.scm 857 */
obj_t BgL_auxz00_6324;obj_t BgL_auxz00_6317;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_listz00_2637))
{ /* Ieee/pairlist.scm 857 */
BgL_auxz00_6324 = BgL_listz00_2637
; }  else 
{ 
obj_t BgL_auxz00_6327;
BgL_auxz00_6327 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)33381)), BGl_string2992z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2637); 
FAILURE(BgL_auxz00_6327,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_predz00_2636))
{ /* Ieee/pairlist.scm 857 */
BgL_auxz00_6317 = BgL_predz00_2636
; }  else 
{ 
obj_t BgL_auxz00_6320;
BgL_auxz00_6320 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)33381)), BGl_string2992z00zz__r4_pairs_and_lists_6_3z00, BGl_string2748z00zz__r4_pairs_and_lists_6_3z00, BgL_predz00_2636); 
FAILURE(BgL_auxz00_6320,BFALSE,BFALSE);} 
return 
BGl_findzd2tailzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_6317, BgL_auxz00_6324);} } 

}



/* reduce */
BGL_EXPORTED_DEF obj_t BGl_reducez00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_fz00_112, obj_t BgL_ridentifyz00_113, obj_t BgL_listz00_114)
{
{ /* Ieee/pairlist.scm 865 */
if(
NULLP(BgL_listz00_114))
{ /* Ieee/pairlist.scm 866 */
return BgL_ridentifyz00_113;}  else 
{ /* Ieee/pairlist.scm 868 */
obj_t BgL_g1037z00_1282;obj_t BgL_g1038z00_1283;
BgL_g1037z00_1282 = 
CDR(BgL_listz00_114); 
BgL_g1038z00_1283 = 
CAR(BgL_listz00_114); 
{ 
obj_t BgL_listz00_2239;obj_t BgL_ansz00_2240;
BgL_listz00_2239 = BgL_g1037z00_1282; 
BgL_ansz00_2240 = BgL_g1038z00_1283; 
BgL_loopz00_2238:
if(
PAIRP(BgL_listz00_2239))
{ /* Ieee/pairlist.scm 872 */
obj_t BgL_arg1587z00_2246;obj_t BgL_arg1588z00_2247;
BgL_arg1587z00_2246 = 
CDR(BgL_listz00_2239); 
{ /* Ieee/pairlist.scm 872 */
obj_t BgL_arg1589z00_2248;
BgL_arg1589z00_2248 = 
CAR(BgL_listz00_2239); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_fz00_112, ((long)2)))
{ /* Ieee/pairlist.scm 872 */
BgL_arg1588z00_2247 = 
PROCEDURE_ENTRY(BgL_fz00_112)(BgL_fz00_112, BgL_arg1589z00_2248, BgL_ansz00_2240, BEOA); }  else 
{ /* Ieee/pairlist.scm 872 */
FAILURE(BGl_string2767z00zz__r4_pairs_and_lists_6_3z00,BGl_list2993z00zz__r4_pairs_and_lists_6_3z00,BgL_fz00_112);} } 
{ 
obj_t BgL_ansz00_6349;obj_t BgL_listz00_6348;
BgL_listz00_6348 = BgL_arg1587z00_2246; 
BgL_ansz00_6349 = BgL_arg1588z00_2247; 
BgL_ansz00_2240 = BgL_ansz00_6349; 
BgL_listz00_2239 = BgL_listz00_6348; 
goto BgL_loopz00_2238;} }  else 
{ /* Ieee/pairlist.scm 870 */
return BgL_ansz00_2240;} } } } 

}



/* &reduce */
obj_t BGl_z62reducez62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2638, obj_t BgL_fz00_2639, obj_t BgL_ridentifyz00_2640, obj_t BgL_listz00_2641)
{
{ /* Ieee/pairlist.scm 865 */
{ /* Ieee/pairlist.scm 866 */
obj_t BgL_auxz00_6357;obj_t BgL_auxz00_6350;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_listz00_2641))
{ /* Ieee/pairlist.scm 866 */
BgL_auxz00_6357 = BgL_listz00_2641
; }  else 
{ 
obj_t BgL_auxz00_6360;
BgL_auxz00_6360 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)33721)), BGl_string3000z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2641); 
FAILURE(BgL_auxz00_6360,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_fz00_2639))
{ /* Ieee/pairlist.scm 866 */
BgL_auxz00_6350 = BgL_fz00_2639
; }  else 
{ 
obj_t BgL_auxz00_6353;
BgL_auxz00_6353 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)33721)), BGl_string3000z00zz__r4_pairs_and_lists_6_3z00, BGl_string2748z00zz__r4_pairs_and_lists_6_3z00, BgL_fz00_2639); 
FAILURE(BgL_auxz00_6353,BFALSE,BFALSE);} 
return 
BGl_reducez00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_6350, BgL_ridentifyz00_2640, BgL_auxz00_6357);} } 

}



/* make-list */
BGL_EXPORTED_DEF obj_t BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(int BgL_nz00_115, obj_t BgL_oz00_116)
{
{ /* Ieee/pairlist.scm 877 */
{ /* Ieee/pairlist.scm 878 */
obj_t BgL_fillz00_1293;
if(
PAIRP(BgL_oz00_116))
{ /* Ieee/pairlist.scm 878 */
BgL_fillz00_1293 = 
CAR(BgL_oz00_116); }  else 
{ /* Ieee/pairlist.scm 878 */
BgL_fillz00_1293 = BUNSPEC; } 
{ 
int BgL_iz00_2269;obj_t BgL_rz00_2270;
BgL_iz00_2269 = BgL_nz00_115; 
BgL_rz00_2270 = BNIL; 
BgL_walkz00_2268:
if(
(
(long)(BgL_iz00_2269)<=((long)0)))
{ /* Ieee/pairlist.scm 880 */
return BgL_rz00_2270;}  else 
{ /* Ieee/pairlist.scm 882 */
long BgL_arg1592z00_2275;obj_t BgL_arg1593z00_2276;
BgL_arg1592z00_2275 = 
(
(long)(BgL_iz00_2269)-((long)1)); 
BgL_arg1593z00_2276 = 
MAKE_YOUNG_PAIR(BgL_fillz00_1293, BgL_rz00_2270); 
{ 
obj_t BgL_rz00_6376;int BgL_iz00_6374;
BgL_iz00_6374 = 
(int)(BgL_arg1592z00_2275); 
BgL_rz00_6376 = BgL_arg1593z00_2276; 
BgL_rz00_2270 = BgL_rz00_6376; 
BgL_iz00_2269 = BgL_iz00_6374; 
goto BgL_walkz00_2268;} } } } } 

}



/* &make-list */
obj_t BGl_z62makezd2listzb0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2642, obj_t BgL_nz00_2643, obj_t BgL_oz00_2644)
{
{ /* Ieee/pairlist.scm 877 */
{ /* Ieee/pairlist.scm 878 */
int BgL_auxz00_6377;
{ /* Ieee/pairlist.scm 878 */
obj_t BgL_tmpz00_6378;
if(
INTEGERP(BgL_nz00_2643))
{ /* Ieee/pairlist.scm 878 */
BgL_tmpz00_6378 = BgL_nz00_2643
; }  else 
{ 
obj_t BgL_auxz00_6381;
BgL_auxz00_6381 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)34150)), BGl_string3001z00zz__r4_pairs_and_lists_6_3z00, BGl_string2723z00zz__r4_pairs_and_lists_6_3z00, BgL_nz00_2643); 
FAILURE(BgL_auxz00_6381,BFALSE,BFALSE);} 
BgL_auxz00_6377 = 
CINT(BgL_tmpz00_6378); } 
return 
BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_6377, BgL_oz00_2644);} } 

}



/* list-tabulate */
BGL_EXPORTED_DEF obj_t BGl_listzd2tabulatezd2zz__r4_pairs_and_lists_6_3z00(int BgL_nz00_117, obj_t BgL_initzd2proczd2_118)
{
{ /* Ieee/pairlist.scm 887 */
{ /* Ieee/pairlist.scm 888 */
long BgL_g1040z00_1304;
BgL_g1040z00_1304 = 
(
(long)(BgL_nz00_117)-((long)1)); 
{ 
long BgL_iz00_1307;obj_t BgL_rz00_1308;
BgL_iz00_1307 = BgL_g1040z00_1304; 
BgL_rz00_1308 = BNIL; 
BgL_zc3z04anonymousza31595ze3z87_1309:
if(
(BgL_iz00_1307<((long)0)))
{ /* Ieee/pairlist.scm 889 */
return BgL_rz00_1308;}  else 
{ /* Ieee/pairlist.scm 891 */
long BgL_arg1597z00_1311;obj_t BgL_arg1598z00_1312;
BgL_arg1597z00_1311 = 
(BgL_iz00_1307-((long)1)); 
{ /* Ieee/pairlist.scm 891 */
obj_t BgL_arg1599z00_1313;
if(
PROCEDURE_CORRECT_ARITYP(BgL_initzd2proczd2_118, ((long)1)))
{ /* Ieee/pairlist.scm 891 */
BgL_arg1599z00_1313 = 
PROCEDURE_ENTRY(BgL_initzd2proczd2_118)(BgL_initzd2proczd2_118, 
BINT(BgL_iz00_1307), BEOA); }  else 
{ /* Ieee/pairlist.scm 891 */
FAILURE(BGl_string3002z00zz__r4_pairs_and_lists_6_3z00,BGl_list3003z00zz__r4_pairs_and_lists_6_3z00,BgL_initzd2proczd2_118);} 
BgL_arg1598z00_1312 = 
MAKE_YOUNG_PAIR(BgL_arg1599z00_1313, BgL_rz00_1308); } 
{ 
obj_t BgL_rz00_6402;long BgL_iz00_6401;
BgL_iz00_6401 = BgL_arg1597z00_1311; 
BgL_rz00_6402 = BgL_arg1598z00_1312; 
BgL_rz00_1308 = BgL_rz00_6402; 
BgL_iz00_1307 = BgL_iz00_6401; 
goto BgL_zc3z04anonymousza31595ze3z87_1309;} } } } } 

}



/* &list-tabulate */
obj_t BGl_z62listzd2tabulatezb0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2645, obj_t BgL_nz00_2646, obj_t BgL_initzd2proczd2_2647)
{
{ /* Ieee/pairlist.scm 887 */
{ /* Ieee/pairlist.scm 888 */
obj_t BgL_auxz00_6412;int BgL_auxz00_6403;
if(
PROCEDUREP(BgL_initzd2proczd2_2647))
{ /* Ieee/pairlist.scm 888 */
BgL_auxz00_6412 = BgL_initzd2proczd2_2647
; }  else 
{ 
obj_t BgL_auxz00_6415;
BgL_auxz00_6415 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)34561)), BGl_string3008z00zz__r4_pairs_and_lists_6_3z00, BGl_string2748z00zz__r4_pairs_and_lists_6_3z00, BgL_initzd2proczd2_2647); 
FAILURE(BgL_auxz00_6415,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 888 */
obj_t BgL_tmpz00_6404;
if(
INTEGERP(BgL_nz00_2646))
{ /* Ieee/pairlist.scm 888 */
BgL_tmpz00_6404 = BgL_nz00_2646
; }  else 
{ 
obj_t BgL_auxz00_6407;
BgL_auxz00_6407 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)34561)), BGl_string3008z00zz__r4_pairs_and_lists_6_3z00, BGl_string2723z00zz__r4_pairs_and_lists_6_3z00, BgL_nz00_2646); 
FAILURE(BgL_auxz00_6407,BFALSE,BFALSE);} 
BgL_auxz00_6403 = 
CINT(BgL_tmpz00_6404); } 
return 
BGl_listzd2tabulatezd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_6403, BgL_auxz00_6412);} } 

}



/* list-split */
BGL_EXPORTED_DEF obj_t BGl_listzd2splitzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_119, int BgL_numz00_120, obj_t BgL_fillz00_121)
{
{ /* Ieee/pairlist.scm 896 */
{ 
obj_t BgL_lz00_1318;long BgL_iz00_1319;obj_t BgL_accz00_1320;obj_t BgL_resz00_1321;
BgL_lz00_1318 = BgL_lz00_119; 
BgL_iz00_1319 = ((long)0); 
BgL_accz00_1320 = BNIL; 
BgL_resz00_1321 = BNIL; 
BgL_zc3z04anonymousza31600ze3z87_1322:
if(
NULLP(BgL_lz00_1318))
{ /* Ieee/pairlist.scm 903 */
obj_t BgL_arg1602z00_1324;
{ /* Ieee/pairlist.scm 903 */
obj_t BgL_arg1603z00_1325;
{ /* Ieee/pairlist.scm 903 */
bool_t BgL_test3714z00_6422;
if(
NULLP(BgL_fillz00_121))
{ /* Ieee/pairlist.scm 903 */
BgL_test3714z00_6422 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 903 */
if(
(BgL_iz00_1319==
(long)(BgL_numz00_120)))
{ /* Ieee/pairlist.scm 903 */
BgL_test3714z00_6422 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 903 */
BgL_test3714z00_6422 = 
(BgL_iz00_1319==((long)0))
; } } 
if(BgL_test3714z00_6422)
{ /* Ieee/pairlist.scm 903 */
BgL_arg1603z00_1325 = 
bgl_reverse_bang(BgL_accz00_1320); }  else 
{ /* Ieee/pairlist.scm 905 */
obj_t BgL_arg1607z00_1329;obj_t BgL_arg1608z00_1330;
BgL_arg1607z00_1329 = 
bgl_reverse_bang(BgL_accz00_1320); 
{ /* Ieee/pairlist.scm 906 */
long BgL_arg1611z00_1331;obj_t BgL_arg1612z00_1332;
BgL_arg1611z00_1331 = 
(
(long)(BgL_numz00_120)-BgL_iz00_1319); 
{ /* Ieee/pairlist.scm 906 */
obj_t BgL_pairz00_2297;
if(
PAIRP(BgL_fillz00_121))
{ /* Ieee/pairlist.scm 906 */
BgL_pairz00_2297 = BgL_fillz00_121; }  else 
{ 
obj_t BgL_auxz00_6435;
BgL_auxz00_6435 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)35175)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_fillz00_121); 
FAILURE(BgL_auxz00_6435,BFALSE,BFALSE);} 
BgL_arg1612z00_1332 = 
CAR(BgL_pairz00_2297); } 
{ /* Ieee/pairlist.scm 906 */
obj_t BgL_list1613z00_1333;
BgL_list1613z00_1333 = 
MAKE_YOUNG_PAIR(BgL_arg1612z00_1332, BNIL); 
BgL_arg1608z00_1330 = 
BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(
(int)(BgL_arg1611z00_1331), BgL_list1613z00_1333); } } 
BgL_arg1603z00_1325 = 
BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(BgL_arg1607z00_1329, BgL_arg1608z00_1330); } } 
BgL_arg1602z00_1324 = 
MAKE_YOUNG_PAIR(BgL_arg1603z00_1325, BgL_resz00_1321); } 
return 
bgl_reverse_bang(BgL_arg1602z00_1324);}  else 
{ /* Ieee/pairlist.scm 902 */
if(
(BgL_iz00_1319==
(long)(BgL_numz00_120)))
{ /* Ieee/pairlist.scm 909 */
obj_t BgL_arg1615z00_1337;
BgL_arg1615z00_1337 = 
MAKE_YOUNG_PAIR(
bgl_reverse_bang(BgL_accz00_1320), BgL_resz00_1321); 
{ 
obj_t BgL_resz00_6453;obj_t BgL_accz00_6452;long BgL_iz00_6451;
BgL_iz00_6451 = ((long)0); 
BgL_accz00_6452 = BNIL; 
BgL_resz00_6453 = BgL_arg1615z00_1337; 
BgL_resz00_1321 = BgL_resz00_6453; 
BgL_accz00_1320 = BgL_accz00_6452; 
BgL_iz00_1319 = BgL_iz00_6451; 
goto BgL_zc3z04anonymousza31600ze3z87_1322;} }  else 
{ /* Ieee/pairlist.scm 911 */
obj_t BgL_arg1617z00_1339;long BgL_arg1618z00_1340;obj_t BgL_arg1619z00_1341;
{ /* Ieee/pairlist.scm 911 */
obj_t BgL_pairz00_2301;
if(
PAIRP(BgL_lz00_1318))
{ /* Ieee/pairlist.scm 911 */
BgL_pairz00_2301 = BgL_lz00_1318; }  else 
{ 
obj_t BgL_auxz00_6456;
BgL_auxz00_6456 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)35278)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1318); 
FAILURE(BgL_auxz00_6456,BFALSE,BFALSE);} 
BgL_arg1617z00_1339 = 
CDR(BgL_pairz00_2301); } 
BgL_arg1618z00_1340 = 
(BgL_iz00_1319+((long)1)); 
{ /* Ieee/pairlist.scm 911 */
obj_t BgL_arg1620z00_1342;
{ /* Ieee/pairlist.scm 911 */
obj_t BgL_pairz00_2304;
if(
PAIRP(BgL_lz00_1318))
{ /* Ieee/pairlist.scm 911 */
BgL_pairz00_2304 = BgL_lz00_1318; }  else 
{ 
obj_t BgL_auxz00_6464;
BgL_auxz00_6464 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)35302)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1318); 
FAILURE(BgL_auxz00_6464,BFALSE,BFALSE);} 
BgL_arg1620z00_1342 = 
CAR(BgL_pairz00_2304); } 
BgL_arg1619z00_1341 = 
MAKE_YOUNG_PAIR(BgL_arg1620z00_1342, BgL_accz00_1320); } 
{ 
obj_t BgL_accz00_6472;long BgL_iz00_6471;obj_t BgL_lz00_6470;
BgL_lz00_6470 = BgL_arg1617z00_1339; 
BgL_iz00_6471 = BgL_arg1618z00_1340; 
BgL_accz00_6472 = BgL_arg1619z00_1341; 
BgL_accz00_1320 = BgL_accz00_6472; 
BgL_iz00_1319 = BgL_iz00_6471; 
BgL_lz00_1318 = BgL_lz00_6470; 
goto BgL_zc3z04anonymousza31600ze3z87_1322;} } } } } 

}



/* &list-split */
obj_t BGl_z62listzd2splitzb0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2648, obj_t BgL_lz00_2649, obj_t BgL_numz00_2650, obj_t BgL_fillz00_2651)
{
{ /* Ieee/pairlist.scm 896 */
{ /* Ieee/pairlist.scm 902 */
int BgL_auxz00_6480;obj_t BgL_auxz00_6473;
{ /* Ieee/pairlist.scm 902 */
obj_t BgL_tmpz00_6481;
if(
INTEGERP(BgL_numz00_2650))
{ /* Ieee/pairlist.scm 902 */
BgL_tmpz00_6481 = BgL_numz00_2650
; }  else 
{ 
obj_t BgL_auxz00_6484;
BgL_auxz00_6484 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)35005)), BGl_string3009z00zz__r4_pairs_and_lists_6_3z00, BGl_string2723z00zz__r4_pairs_and_lists_6_3z00, BgL_numz00_2650); 
FAILURE(BgL_auxz00_6484,BFALSE,BFALSE);} 
BgL_auxz00_6480 = 
CINT(BgL_tmpz00_6481); } 
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_lz00_2649))
{ /* Ieee/pairlist.scm 902 */
BgL_auxz00_6473 = BgL_lz00_2649
; }  else 
{ 
obj_t BgL_auxz00_6476;
BgL_auxz00_6476 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)35005)), BGl_string3009z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_2649); 
FAILURE(BgL_auxz00_6476,BFALSE,BFALSE);} 
return 
BGl_listzd2splitzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_6473, BgL_auxz00_6480, BgL_fillz00_2651);} } 

}



/* list-split! */
BGL_EXPORTED_DEF obj_t BGl_listzd2splitz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_122, int BgL_numz00_123, obj_t BgL_fillz00_124)
{
{ /* Ieee/pairlist.scm 916 */
{ 
obj_t BgL_lz00_1346;long BgL_iz00_1347;obj_t BgL_lastz00_1348;obj_t BgL_accz00_1349;obj_t BgL_rowsz00_1350;
BgL_lz00_1346 = BgL_lz00_122; 
BgL_iz00_1347 = ((long)0); 
BgL_lastz00_1348 = BFALSE; 
BgL_accz00_1349 = BgL_lz00_122; 
BgL_rowsz00_1350 = BNIL; 
BgL_zc3z04anonymousza31621ze3z87_1351:
if(
NULLP(BgL_lz00_1346))
{ /* Ieee/pairlist.scm 924 */
obj_t BgL_lrowz00_1353;
{ /* Ieee/pairlist.scm 924 */
bool_t BgL_test3724z00_6492;
if(
NULLP(BgL_fillz00_124))
{ /* Ieee/pairlist.scm 924 */
BgL_test3724z00_6492 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 924 */
if(
(BgL_iz00_1347==
(long)(BgL_numz00_123)))
{ /* Ieee/pairlist.scm 924 */
BgL_test3724z00_6492 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 924 */
BgL_test3724z00_6492 = 
(BgL_iz00_1347==((long)0))
; } } 
if(BgL_test3724z00_6492)
{ /* Ieee/pairlist.scm 924 */
BgL_lrowz00_1353 = BgL_accz00_1349; }  else 
{ /* Ieee/pairlist.scm 924 */
{ /* Ieee/pairlist.scm 928 */
obj_t BgL_arg1627z00_1358;
{ /* Ieee/pairlist.scm 928 */
long BgL_arg1628z00_1359;obj_t BgL_arg1629z00_1360;
BgL_arg1628z00_1359 = 
(
(long)(BgL_numz00_123)-BgL_iz00_1347); 
{ /* Ieee/pairlist.scm 928 */
obj_t BgL_pairz00_2315;
if(
PAIRP(BgL_fillz00_124))
{ /* Ieee/pairlist.scm 928 */
BgL_pairz00_2315 = BgL_fillz00_124; }  else 
{ 
obj_t BgL_auxz00_6503;
BgL_auxz00_6503 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)35828)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_fillz00_124); 
FAILURE(BgL_auxz00_6503,BFALSE,BFALSE);} 
BgL_arg1629z00_1360 = 
CAR(BgL_pairz00_2315); } 
{ /* Ieee/pairlist.scm 928 */
obj_t BgL_list1630z00_1361;
BgL_list1630z00_1361 = 
MAKE_YOUNG_PAIR(BgL_arg1629z00_1360, BNIL); 
BgL_arg1627z00_1358 = 
BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(
(int)(BgL_arg1628z00_1359), BgL_list1630z00_1361); } } 
{ /* Ieee/pairlist.scm 927 */
obj_t BgL_pairz00_2316;
if(
PAIRP(BgL_lastz00_1348))
{ /* Ieee/pairlist.scm 927 */
BgL_pairz00_2316 = BgL_lastz00_1348; }  else 
{ 
obj_t BgL_auxz00_6513;
BgL_auxz00_6513 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)35784)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lastz00_1348); 
FAILURE(BgL_auxz00_6513,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2316, BgL_arg1627z00_1358); } } 
BgL_lrowz00_1353 = BgL_accz00_1349; } } 
{ /* Ieee/pairlist.scm 930 */
obj_t BgL_arg1623z00_1354;
BgL_arg1623z00_1354 = 
MAKE_YOUNG_PAIR(BgL_lrowz00_1353, BgL_rowsz00_1350); 
return 
bgl_reverse_bang(BgL_arg1623z00_1354);} }  else 
{ /* Ieee/pairlist.scm 923 */
if(
(BgL_iz00_1347==
(long)(BgL_numz00_123)))
{ /* Ieee/pairlist.scm 931 */
{ /* Ieee/pairlist.scm 932 */
obj_t BgL_pairz00_2320;
if(
PAIRP(BgL_lastz00_1348))
{ /* Ieee/pairlist.scm 932 */
BgL_pairz00_2320 = BgL_lastz00_1348; }  else 
{ 
obj_t BgL_auxz00_6525;
BgL_auxz00_6525 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)35916)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lastz00_1348); 
FAILURE(BgL_auxz00_6525,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2320, BNIL); } 
{ /* Ieee/pairlist.scm 933 */
obj_t BgL_arg1632z00_1365;
BgL_arg1632z00_1365 = 
MAKE_YOUNG_PAIR(BgL_accz00_1349, BgL_rowsz00_1350); 
{ 
obj_t BgL_rowsz00_6534;obj_t BgL_accz00_6533;obj_t BgL_lastz00_6532;long BgL_iz00_6531;
BgL_iz00_6531 = ((long)0); 
BgL_lastz00_6532 = BgL_lz00_1346; 
BgL_accz00_6533 = BgL_lz00_1346; 
BgL_rowsz00_6534 = BgL_arg1632z00_1365; 
BgL_rowsz00_1350 = BgL_rowsz00_6534; 
BgL_accz00_1349 = BgL_accz00_6533; 
BgL_lastz00_1348 = BgL_lastz00_6532; 
BgL_iz00_1347 = BgL_iz00_6531; 
goto BgL_zc3z04anonymousza31621ze3z87_1351;} } }  else 
{ /* Ieee/pairlist.scm 935 */
obj_t BgL_arg1633z00_1366;long BgL_arg1634z00_1367;
{ /* Ieee/pairlist.scm 935 */
obj_t BgL_pairz00_2321;
if(
PAIRP(BgL_lz00_1346))
{ /* Ieee/pairlist.scm 935 */
BgL_pairz00_2321 = BgL_lz00_1346; }  else 
{ 
obj_t BgL_auxz00_6537;
BgL_auxz00_6537 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)35983)), BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1346); 
FAILURE(BgL_auxz00_6537,BFALSE,BFALSE);} 
BgL_arg1633z00_1366 = 
CDR(BgL_pairz00_2321); } 
BgL_arg1634z00_1367 = 
(BgL_iz00_1347+((long)1)); 
{ 
obj_t BgL_lastz00_6545;long BgL_iz00_6544;obj_t BgL_lz00_6543;
BgL_lz00_6543 = BgL_arg1633z00_1366; 
BgL_iz00_6544 = BgL_arg1634z00_1367; 
BgL_lastz00_6545 = BgL_lz00_1346; 
BgL_lastz00_1348 = BgL_lastz00_6545; 
BgL_iz00_1347 = BgL_iz00_6544; 
BgL_lz00_1346 = BgL_lz00_6543; 
goto BgL_zc3z04anonymousza31621ze3z87_1351;} } } } } 

}



/* &list-split! */
obj_t BGl_z62listzd2splitz12za2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2652, obj_t BgL_lz00_2653, obj_t BgL_numz00_2654, obj_t BgL_fillz00_2655)
{
{ /* Ieee/pairlist.scm 916 */
{ /* Ieee/pairlist.scm 923 */
int BgL_auxz00_6553;obj_t BgL_auxz00_6546;
{ /* Ieee/pairlist.scm 923 */
obj_t BgL_tmpz00_6554;
if(
INTEGERP(BgL_numz00_2654))
{ /* Ieee/pairlist.scm 923 */
BgL_tmpz00_6554 = BgL_numz00_2654
; }  else 
{ 
obj_t BgL_auxz00_6557;
BgL_auxz00_6557 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)35675)), BGl_string3010z00zz__r4_pairs_and_lists_6_3z00, BGl_string2723z00zz__r4_pairs_and_lists_6_3z00, BgL_numz00_2654); 
FAILURE(BgL_auxz00_6557,BFALSE,BFALSE);} 
BgL_auxz00_6553 = 
CINT(BgL_tmpz00_6554); } 
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_lz00_2653))
{ /* Ieee/pairlist.scm 923 */
BgL_auxz00_6546 = BgL_lz00_2653
; }  else 
{ 
obj_t BgL_auxz00_6549;
BgL_auxz00_6549 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)35675)), BGl_string3010z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_2653); 
FAILURE(BgL_auxz00_6549,BFALSE,BFALSE);} 
return 
BGl_listzd2splitz12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_6546, BgL_auxz00_6553, BgL_fillz00_2655);} } 

}



/* iota */
BGL_EXPORTED_DEF obj_t BGl_iotaz00zz__r4_pairs_and_lists_6_3z00(int BgL_countz00_125, obj_t BgL_restz00_126)
{
{ /* Ieee/pairlist.scm 940 */
{ /* Ieee/pairlist.scm 941 */
obj_t BgL_startz00_1369;obj_t BgL_stepz00_1370;
BgL_startz00_1369 = 
BINT(((long)0)); 
BgL_stepz00_1370 = 
BINT(((long)1)); 
if(
PAIRP(BgL_restz00_126))
{ /* Ieee/pairlist.scm 943 */
BgL_startz00_1369 = 
CAR(BgL_restz00_126); 
{ /* Ieee/pairlist.scm 946 */
bool_t BgL_test3735z00_6568;
{ /* Ieee/pairlist.scm 214 */
obj_t BgL_tmpz00_6569;
BgL_tmpz00_6569 = 
CDR(BgL_restz00_126); 
BgL_test3735z00_6568 = 
PAIRP(BgL_tmpz00_6569); } 
if(BgL_test3735z00_6568)
{ /* Ieee/pairlist.scm 270 */
obj_t BgL_pairz00_2331;
{ /* Ieee/pairlist.scm 252 */
obj_t BgL_aux2614z00_3275;
BgL_aux2614z00_3275 = 
CDR(BgL_restz00_126); 
if(
PAIRP(BgL_aux2614z00_3275))
{ /* Ieee/pairlist.scm 252 */
BgL_pairz00_2331 = BgL_aux2614z00_3275; }  else 
{ 
obj_t BgL_auxz00_6575;
BgL_auxz00_6575 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10008)), BGl_string3011z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2614z00_3275); 
FAILURE(BgL_auxz00_6575,BFALSE,BFALSE);} } 
BgL_stepz00_1370 = 
CAR(BgL_pairz00_2331); }  else 
{ /* Ieee/pairlist.scm 946 */BFALSE; } } }  else 
{ /* Ieee/pairlist.scm 943 */BFALSE; } 
{ /* Ieee/pairlist.scm 948 */
obj_t BgL_g1045z00_1375;
{ /* Ieee/pairlist.scm 948 */
obj_t BgL_arg1645z00_1387;
{ /* Ieee/pairlist.scm 948 */
long BgL_arg1648z00_1388;
BgL_arg1648z00_1388 = 
(
(long)(BgL_countz00_125)-((long)1)); 
BgL_arg1645z00_1387 = 
BGl_2za2za2zz__r4_numbers_6_5z00(
BINT(BgL_arg1648z00_1388), BgL_stepz00_1370); } 
BgL_g1045z00_1375 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_startz00_1369, BgL_arg1645z00_1387); } 
{ 
int BgL_iz00_2352;obj_t BgL_vz00_2353;obj_t BgL_rz00_2354;
BgL_iz00_2352 = BgL_countz00_125; 
BgL_vz00_2353 = BgL_g1045z00_1375; 
BgL_rz00_2354 = BNIL; 
BgL_walkz00_2351:
if(
(
(long)(BgL_iz00_2352)<=((long)0)))
{ /* Ieee/pairlist.scm 949 */
return BgL_rz00_2354;}  else 
{ /* Ieee/pairlist.scm 951 */
long BgL_arg1642z00_2360;obj_t BgL_arg1643z00_2361;obj_t BgL_arg1644z00_2362;
BgL_arg1642z00_2360 = 
(
(long)(BgL_iz00_2352)-((long)1)); 
BgL_arg1643z00_2361 = 
BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_vz00_2353, BgL_stepz00_1370); 
BgL_arg1644z00_2362 = 
MAKE_YOUNG_PAIR(BgL_vz00_2353, BgL_rz00_2354); 
{ 
obj_t BgL_rz00_6595;obj_t BgL_vz00_6594;int BgL_iz00_6592;
BgL_iz00_6592 = 
(int)(BgL_arg1642z00_2360); 
BgL_vz00_6594 = BgL_arg1643z00_2361; 
BgL_rz00_6595 = BgL_arg1644z00_2362; 
BgL_rz00_2354 = BgL_rz00_6595; 
BgL_vz00_2353 = BgL_vz00_6594; 
BgL_iz00_2352 = BgL_iz00_6592; 
goto BgL_walkz00_2351;} } } } } } 

}



/* &iota */
obj_t BGl_z62iotaz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2656, obj_t BgL_countz00_2657, obj_t BgL_restz00_2658)
{
{ /* Ieee/pairlist.scm 940 */
{ /* Ieee/pairlist.scm 941 */
int BgL_auxz00_6596;
{ /* Ieee/pairlist.scm 941 */
obj_t BgL_tmpz00_6597;
if(
INTEGERP(BgL_countz00_2657))
{ /* Ieee/pairlist.scm 941 */
BgL_tmpz00_6597 = BgL_countz00_2657
; }  else 
{ 
obj_t BgL_auxz00_6600;
BgL_auxz00_6600 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)36266)), BGl_string3012z00zz__r4_pairs_and_lists_6_3z00, BGl_string2723z00zz__r4_pairs_and_lists_6_3z00, BgL_countz00_2657); 
FAILURE(BgL_auxz00_6600,BFALSE,BFALSE);} 
BgL_auxz00_6596 = 
CINT(BgL_tmpz00_6597); } 
return 
BGl_iotaz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_6596, BgL_restz00_2658);} } 

}



/* list-copy */
BGL_EXPORTED_DEF obj_t BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_127)
{
{ /* Ieee/pairlist.scm 956 */
if(
NULLP(BgL_lz00_127))
{ /* Ieee/pairlist.scm 957 */
return BgL_lz00_127;}  else 
{ /* Ieee/pairlist.scm 958 */
obj_t BgL_arg1651z00_1391;obj_t BgL_arg1652z00_1392;
BgL_arg1651z00_1391 = 
CAR(BgL_lz00_127); 
{ /* Ieee/pairlist.scm 958 */
obj_t BgL_arg1654z00_1393;
BgL_arg1654z00_1393 = 
CDR(BgL_lz00_127); 
{ /* Ieee/pairlist.scm 958 */
obj_t BgL_auxz00_6610;
{ /* Ieee/pairlist.scm 958 */
bool_t BgL_test3740z00_6611;
if(
PAIRP(BgL_arg1654z00_1393))
{ /* Ieee/pairlist.scm 226 */
BgL_test3740z00_6611 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3740z00_6611 = 
NULLP(BgL_arg1654z00_1393)
; } 
if(BgL_test3740z00_6611)
{ /* Ieee/pairlist.scm 958 */
BgL_auxz00_6610 = BgL_arg1654z00_1393
; }  else 
{ 
obj_t BgL_auxz00_6615;
BgL_auxz00_6615 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)36862)), BGl_string3013z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1654z00_1393); 
FAILURE(BgL_auxz00_6615,BFALSE,BFALSE);} } 
BgL_arg1652z00_1392 = 
BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_6610); } } 
return 
MAKE_YOUNG_PAIR(BgL_arg1651z00_1391, BgL_arg1652z00_1392);} } 

}



/* &list-copy */
obj_t BGl_z62listzd2copyzb0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2659, obj_t BgL_lz00_2660)
{
{ /* Ieee/pairlist.scm 956 */
{ /* Ieee/pairlist.scm 957 */
obj_t BgL_auxz00_6621;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_lz00_2660))
{ /* Ieee/pairlist.scm 957 */
BgL_auxz00_6621 = BgL_lz00_2660
; }  else 
{ 
obj_t BgL_auxz00_6624;
BgL_auxz00_6624 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)36810)), BGl_string3014z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_2660); 
FAILURE(BgL_auxz00_6624,BFALSE,BFALSE);} 
return 
BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_6621);} } 

}



/* tree-copy */
BGL_EXPORTED_DEF obj_t BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_128)
{
{ /* Ieee/pairlist.scm 964 */
{ /* Ieee/pairlist.scm 966 */
bool_t BgL_test3743z00_6629;
{ /* Ieee/pairlist.scm 966 */
bool_t BgL_res1992z00_2370;
BgL_res1992z00_2370 = 
EPAIRP(BgL_lz00_128); 
BgL_test3743z00_6629 = BgL_res1992z00_2370; } 
if(BgL_test3743z00_6629)
{ /* Ieee/pairlist.scm 967 */
obj_t BgL_arg1656z00_1395;obj_t BgL_arg1657z00_1396;obj_t BgL_arg1658z00_1397;
{ /* Ieee/pairlist.scm 967 */
obj_t BgL_arg1659z00_1398;
{ /* Ieee/pairlist.scm 967 */
obj_t BgL_pairz00_2371;
if(
PAIRP(BgL_lz00_128))
{ /* Ieee/pairlist.scm 967 */
BgL_pairz00_2371 = BgL_lz00_128; }  else 
{ 
obj_t BgL_auxz00_6633;
BgL_auxz00_6633 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)37179)), BGl_string3015z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_128); 
FAILURE(BgL_auxz00_6633,BFALSE,BFALSE);} 
BgL_arg1659z00_1398 = 
CAR(BgL_pairz00_2371); } 
BgL_arg1656z00_1395 = 
BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(BgL_arg1659z00_1398); } 
{ /* Ieee/pairlist.scm 967 */
obj_t BgL_arg1660z00_1399;
{ /* Ieee/pairlist.scm 967 */
obj_t BgL_pairz00_2372;
if(
PAIRP(BgL_lz00_128))
{ /* Ieee/pairlist.scm 967 */
BgL_pairz00_2372 = BgL_lz00_128; }  else 
{ 
obj_t BgL_auxz00_6641;
BgL_auxz00_6641 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)37199)), BGl_string3015z00zz__r4_pairs_and_lists_6_3z00, BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_128); 
FAILURE(BgL_auxz00_6641,BFALSE,BFALSE);} 
BgL_arg1660z00_1399 = 
CDR(BgL_pairz00_2372); } 
BgL_arg1657z00_1396 = 
BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(BgL_arg1660z00_1399); } 
{ /* Ieee/pairlist.scm 967 */
obj_t BgL_arg1661z00_1400;
{ /* Ieee/pairlist.scm 967 */
obj_t BgL_objz00_2373;
if(
EPAIRP(BgL_lz00_128))
{ /* Ieee/pairlist.scm 967 */
BgL_objz00_2373 = BgL_lz00_128; }  else 
{ 
obj_t BgL_auxz00_6649;
BgL_auxz00_6649 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)37219)), BGl_string3015z00zz__r4_pairs_and_lists_6_3z00, BGl_string2643z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_128); 
FAILURE(BgL_auxz00_6649,BFALSE,BFALSE);} 
BgL_arg1661z00_1400 = 
CER(BgL_objz00_2373); } 
BgL_arg1658z00_1397 = 
BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(BgL_arg1661z00_1400); } 
{ /* Ieee/pairlist.scm 967 */
obj_t BgL_res1993z00_2374;
BgL_res1993z00_2374 = 
MAKE_YOUNG_EPAIR(BgL_arg1656z00_1395, BgL_arg1657z00_1396, BgL_arg1658z00_1397); 
return BgL_res1993z00_2374;} }  else 
{ /* Ieee/pairlist.scm 966 */
if(
PAIRP(BgL_lz00_128))
{ /* Ieee/pairlist.scm 968 */
return 
MAKE_YOUNG_PAIR(
BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(
CAR(BgL_lz00_128)), 
BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(
CDR(BgL_lz00_128)));}  else 
{ /* Ieee/pairlist.scm 968 */
return BgL_lz00_128;} } } } 

}



/* &tree-copy */
obj_t BGl_z62treezd2copyzb0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2661, obj_t BgL_lz00_2662)
{
{ /* Ieee/pairlist.scm 964 */
return 
BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(BgL_lz00_2662);} 

}



/* _delete-duplicates */
obj_t BGl__deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_env1116z00_132, obj_t BgL_opt1115z00_131)
{
{ /* Ieee/pairlist.scm 976 */
{ /* Ieee/pairlist.scm 976 */
obj_t BgL_g1117z00_1406;
BgL_g1117z00_1406 = 
VECTOR_REF(BgL_opt1115z00_131,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1115z00_131)) { case ((long)1) : 

{ /* Ieee/pairlist.scm 976 */

{ /* Ieee/pairlist.scm 976 */
obj_t BgL_res1995z00_2380;
{ /* Ieee/pairlist.scm 976 */
obj_t BgL_lisz00_2378;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_g1117z00_1406))
{ /* Ieee/pairlist.scm 976 */
BgL_lisz00_2378 = BgL_g1117z00_1406; }  else 
{ 
obj_t BgL_auxz00_6667;
BgL_auxz00_6667 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)37544)), BGl_string3019z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_g1117z00_1406); 
FAILURE(BgL_auxz00_6667,BFALSE,BFALSE);} 
BgL_res1995z00_2380 = 
BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(
BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(BgL_lisz00_2378), BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00); } 
return BgL_res1995z00_2380;} } break;case ((long)2) : 

{ /* Ieee/pairlist.scm 976 */
obj_t BgL_eqz00_1411;
BgL_eqz00_1411 = 
VECTOR_REF(BgL_opt1115z00_131,((long)1)); 
{ /* Ieee/pairlist.scm 976 */

{ /* Ieee/pairlist.scm 976 */
obj_t BgL_res1996z00_2383;
{ /* Ieee/pairlist.scm 976 */
obj_t BgL_lisz00_2381;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_g1117z00_1406))
{ /* Ieee/pairlist.scm 976 */
BgL_lisz00_2381 = BgL_g1117z00_1406; }  else 
{ 
obj_t BgL_auxz00_6676;
BgL_auxz00_6676 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)37544)), BGl_string3019z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_g1117z00_1406); 
FAILURE(BgL_auxz00_6676,BFALSE,BFALSE);} 
BgL_res1996z00_2383 = 
BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(
BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(BgL_lisz00_2381), BgL_eqz00_1411); } 
return BgL_res1996z00_2383;} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3016z00zz__r4_pairs_and_lists_6_3z00, BGl_string3018z00zz__r4_pairs_and_lists_6_3z00, 
BINT(
VECTOR_LENGTH(BgL_opt1115z00_131)));} } } } 

}



/* delete-duplicates */
BGL_EXPORTED_DEF obj_t BGl_deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lisz00_129, obj_t BgL_eqz00_130)
{
{ /* Ieee/pairlist.scm 976 */
return 
BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(
BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(BgL_lisz00_129), BgL_eqz00_130);} 

}



/* _delete-duplicates! */
obj_t BGl__deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_env1121z00_136, obj_t BgL_opt1120z00_135)
{
{ /* Ieee/pairlist.scm 982 */
{ /* Ieee/pairlist.scm 982 */
obj_t BgL_g1122z00_1414;
BgL_g1122z00_1414 = 
VECTOR_REF(BgL_opt1120z00_135,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1120z00_135)) { case ((long)1) : 

{ /* Ieee/pairlist.scm 982 */

{ /* Ieee/pairlist.scm 982 */
obj_t BgL_auxz00_6690;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_g1122z00_1414))
{ /* Ieee/pairlist.scm 982 */
BgL_auxz00_6690 = BgL_g1122z00_1414
; }  else 
{ 
obj_t BgL_auxz00_6693;
BgL_auxz00_6693 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)37866)), BGl_string3022z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_g1122z00_1414); 
FAILURE(BgL_auxz00_6693,BFALSE,BFALSE);} 
return 
BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_6690, BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} } break;case ((long)2) : 

{ /* Ieee/pairlist.scm 982 */
obj_t BgL_eqz00_1419;
BgL_eqz00_1419 = 
VECTOR_REF(BgL_opt1120z00_135,((long)1)); 
{ /* Ieee/pairlist.scm 982 */

{ /* Ieee/pairlist.scm 982 */
obj_t BgL_auxz00_6699;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_g1122z00_1414))
{ /* Ieee/pairlist.scm 982 */
BgL_auxz00_6699 = BgL_g1122z00_1414
; }  else 
{ 
obj_t BgL_auxz00_6702;
BgL_auxz00_6702 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)37866)), BGl_string3022z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_g1122z00_1414); 
FAILURE(BgL_auxz00_6702,BFALSE,BFALSE);} 
return 
BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_6699, BgL_eqz00_1419);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3020z00zz__r4_pairs_and_lists_6_3z00, BGl_string3018z00zz__r4_pairs_and_lists_6_3z00, 
BINT(
VECTOR_LENGTH(BgL_opt1120z00_135)));} } } } 

}



/* delete-duplicates! */
BGL_EXPORTED_DEF obj_t BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lisz00_133, obj_t BgL_eqz00_134)
{
{ /* Ieee/pairlist.scm 982 */
if(
PROCEDUREP(BgL_eqz00_134))
{ /* Ieee/pairlist.scm 983 */BFALSE; }  else 
{ /* Ieee/pairlist.scm 983 */
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_symbol3020z00zz__r4_pairs_and_lists_6_3z00, BGl_string2748z00zz__r4_pairs_and_lists_6_3z00, BgL_eqz00_134); } 
return 
BGl_recurze70ze7zz__r4_pairs_and_lists_6_3z00(BgL_eqz00_134, BgL_lisz00_133);} 

}



/* recur~0 */
obj_t BGl_recurze70ze7zz__r4_pairs_and_lists_6_3z00(obj_t BgL_eqz00_2663, obj_t BgL_lisz00_1423)
{
{ /* Ieee/pairlist.scm 985 */
if(
NULLP(BgL_lisz00_1423))
{ /* Ieee/pairlist.scm 986 */
return BgL_lisz00_1423;}  else 
{ /* Ieee/pairlist.scm 987 */
obj_t BgL_xz00_1426;
BgL_xz00_1426 = 
CAR(BgL_lisz00_1423); 
{ /* Ieee/pairlist.scm 987 */
obj_t BgL_tailz00_1427;
BgL_tailz00_1427 = 
CDR(BgL_lisz00_1423); 
{ /* Ieee/pairlist.scm 988 */
obj_t BgL_newzd2tailzd2_1428;
{ /* Ieee/pairlist.scm 989 */
obj_t BgL_arg1683z00_1430;
{ /* Ieee/pairlist.scm 989 */
obj_t BgL_auxz00_6720;
{ /* Ieee/pairlist.scm 989 */
bool_t BgL_test3754z00_6721;
if(
PAIRP(BgL_tailz00_1427))
{ /* Ieee/pairlist.scm 226 */
BgL_test3754z00_6721 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 226 */
BgL_test3754z00_6721 = 
NULLP(BgL_tailz00_1427)
; } 
if(BgL_test3754z00_6721)
{ /* Ieee/pairlist.scm 989 */
BgL_auxz00_6720 = BgL_tailz00_1427
; }  else 
{ 
obj_t BgL_auxz00_6725;
BgL_auxz00_6725 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)38134)), BGl_string3023z00zz__r4_pairs_and_lists_6_3z00, BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_tailz00_1427); 
FAILURE(BgL_auxz00_6725,BFALSE,BFALSE);} } 
BgL_arg1683z00_1430 = 
BGl_deletez12z12zz__r4_pairs_and_lists_6_3z00(BgL_xz00_1426, BgL_auxz00_6720, BgL_eqz00_2663); } 
BgL_newzd2tailzd2_1428 = 
BGl_recurze70ze7zz__r4_pairs_and_lists_6_3z00(BgL_eqz00_2663, BgL_arg1683z00_1430); } 
{ /* Ieee/pairlist.scm 989 */

if(
(BgL_tailz00_1427==BgL_newzd2tailzd2_1428))
{ /* Ieee/pairlist.scm 990 */
return BgL_lisz00_1423;}  else 
{ /* Ieee/pairlist.scm 990 */
return 
MAKE_YOUNG_PAIR(BgL_xz00_1426, BgL_newzd2tailzd2_1428);} } } } } } 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r4_pairs_and_lists_6_3z00()
{
{ /* Ieee/pairlist.scm 18 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string3024z00zz__r4_pairs_and_lists_6_3z00)); 
return 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)453938973), 
BSTRING_TO_STRING(BGl_string3024z00zz__r4_pairs_and_lists_6_3z00));} 

}

#ifdef __cplusplus
}
#endif
