/*===========================================================================*/
/*   (Eval/expdargs.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/expdargs.scm -indent -o objs/obj_u/Eval/expdargs.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	static obj_t BGl_symbol2640z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2642z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2644z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2646z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2648z00zz__expander_argsz00 = BUNSPEC;
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol2650z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2652z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2654z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2656z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2658z00zz__expander_argsz00 = BUNSPEC;
	extern obj_t BGl_expandzd2errorzd2zz__expandz00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2660z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2662z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2665z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2667z00zz__expander_argsz00 = BUNSPEC;
	extern obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2592z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2674z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2594z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2676z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2596z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2678z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2598z00zz__expander_argsz00 = BUNSPEC;
	extern obj_t BGl_warningz00zz__errorz00(obj_t);
	static obj_t BGl_makezd2simplezd2optzd2parserzd2zz__expander_argsz00(obj_t,
		obj_t);
	static obj_t BGl_symbol2682z00zz__expander_argsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2argszd2parsez00zz__expander_argsz00(obj_t, obj_t);
	static obj_t BGl_symbol2684z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2686z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2688z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2690z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2692z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2694z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2696z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__expander_argsz00();
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_objectzd2initzd2zz__expander_argsz00();
	extern obj_t bgl_reverse_bang(obj_t);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_makezd2parserzd2zz__expander_argsz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__expander_argsz00();
	static obj_t BGl_fetchzd2optionzd2argumentsz00zz__expander_argsz00(obj_t);
	extern obj_t make_string(long, unsigned char);
	static obj_t BGl_makezd2synopsiszd2namez00zz__expander_argsz00(obj_t);
	extern obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_fetchzd2argumentzd2namez00zz__expander_argsz00(obj_t, obj_t);
	extern bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62expandzd2argszd2parsez62zz__expander_argsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32066ze3ze5zz__expander_argsz00(obj_t,
		obj_t);
	static obj_t
		BGl_fetchzd2optionzd2embedzd2argumentzd2zz__expander_argsz00(obj_t);
	static bool_t BGl_helpzd2messagezf3z21zz__expander_argsz00(obj_t);
	static obj_t BGl_bindzd2optionz12zc0zz__expander_argsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_dozd2expandzd2argszd2parsezd2zz__expander_argsz00(obj_t,
		obj_t);
	extern obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	static obj_t BGl_concatze70ze7zz__expander_argsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__expander_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
		char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__expander_argsz00();
	BGL_EXPORTED_DECL obj_t
		BGl_argszd2parsezd2usagez00zz__expander_argsz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__expander_argsz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__expander_argsz00();
	static obj_t BGl_makezd2multiplezd2optzd2parserzd2zz__expander_argsz00(obj_t,
		obj_t);
	static bool_t BGl_synopsiszf3zf3zz__expander_argsz00(obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_makezd2optzd2parserz00zz__expander_argsz00(obj_t, obj_t);
	extern obj_t c_substring(obj_t, long, long);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_bindzd2optionzd2argumentsz00zz__expander_argsz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2600z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2602z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2604z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_loopze70ze7zz__expander_argsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62argszd2parsezd2usagez62zz__expander_argsz00(obj_t, obj_t);
	static obj_t BGl_loopze71ze7zz__expander_argsz00(obj_t, obj_t);
	static obj_t BGl_symbol2608z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_loopze72ze7zz__expander_argsz00(obj_t, obj_t);
	static obj_t BGl_makezd2helpzd2zz__expander_argsz00(obj_t);
	static obj_t BGl_symbol2610z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2612z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2614z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2616z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2618z00zz__expander_argsz00 = BUNSPEC;
	extern obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_symbol2620z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2622z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2624z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2706z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2626z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2628z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2630z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2632z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2634z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2636z00zz__expander_argsz00 = BUNSPEC;
	static obj_t BGl_symbol2638z00zz__expander_argsz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2601z00zz__expander_argsz00,
		BgL_bgl_string2601za700za7za7_2710za7, "quote", 5);
	      DEFINE_STRING(BGl_string2603z00zz__expander_argsz00,
		BgL_bgl_string2603za700za7za7_2711za7, "values", 6);
	      DEFINE_STRING(BGl_string2605z00zz__expander_argsz00,
		BgL_bgl_string2605za700za7za7_2712za7, "car", 3);
	      DEFINE_STRING(BGl_string2606z00zz__expander_argsz00,
		BgL_bgl_string2606za700za7za7_2713za7, "see -help", 9);
	      DEFINE_STRING(BGl_string2607z00zz__expander_argsz00,
		BgL_bgl_string2607za700za7za7_2714za7, "Illegal option", 14);
	      DEFINE_STRING(BGl_string2609z00zz__expander_argsz00,
		BgL_bgl_string2609za700za7za7_2715za7, "error", 5);
	      DEFINE_STRING(BGl_string2611z00zz__expander_argsz00,
		BgL_bgl_string2611za700za7za7_2716za7, "if", 2);
	      DEFINE_STRING(BGl_string2613z00zz__expander_argsz00,
		BgL_bgl_string2613za700za7za7_2717za7, "lambda", 6);
	      DEFINE_STRING(BGl_string2615z00zz__expander_argsz00,
		BgL_bgl_string2615za700za7za7_2718za7, "unquote", 7);
	      DEFINE_STRING(BGl_string2617z00zz__expander_argsz00,
		BgL_bgl_string2617za700za7za7_2719za7, "quasiquote", 10);
	      DEFINE_STRING(BGl_string2619z00zz__expander_argsz00,
		BgL_bgl_string2619za700za7za7_2720za7, "args-parse-usage", 16);
	      DEFINE_STRING(BGl_string2700z00zz__expander_argsz00,
		BgL_bgl_string2700za700za7za7_2721za7, "'", 1);
	      DEFINE_STRING(BGl_string2701z00zz__expander_argsz00,
		BgL_bgl_string2701za700za7za7_2722za7, "Illegal option argument", 23);
	      DEFINE_STRING(BGl_string2702z00zz__expander_argsz00,
		BgL_bgl_string2702za700za7za7_2723za7, "&args-parse-usage", 17);
	      DEFINE_STRING(BGl_string2621z00zz__expander_argsz00,
		BgL_bgl_string2621za700za7za7_2724za7, "list", 4);
	      DEFINE_STRING(BGl_string2703z00zz__expander_argsz00,
		BgL_bgl_string2703za700za7za7_2725za7, "(", 1);
	      DEFINE_STRING(BGl_string2704z00zz__expander_argsz00,
		BgL_bgl_string2704za700za7za7_2726za7, "   ", 3);
	      DEFINE_STRING(BGl_string2623z00zz__expander_argsz00,
		BgL_bgl_string2623za700za7za7_2727za7, "p*", 2);
	      DEFINE_STRING(BGl_string2705z00zz__expander_argsz00,
		BgL_bgl_string2705za700za7za7_2728za7, ":", 1);
	      DEFINE_STRING(BGl_string2625z00zz__expander_argsz00,
		BgL_bgl_string2625za700za7za7_2729za7, "a*", 2);
	      DEFINE_STRING(BGl_string2707z00zz__expander_argsz00,
		BgL_bgl_string2707za700za7za7_2730za7, "usage-done", 10);
	      DEFINE_STRING(BGl_string2708z00zz__expander_argsz00,
		BgL_bgl_string2708za700za7za7_2731za7, ")", 1);
	      DEFINE_STRING(BGl_string2627z00zz__expander_argsz00,
		BgL_bgl_string2627za700za7za7_2732za7, "cons", 4);
	      DEFINE_STRING(BGl_string2709z00zz__expander_argsz00,
		BgL_bgl_string2709za700za7za7_2733za7, "__expander_args", 15);
	      DEFINE_STRING(BGl_string2629z00zz__expander_argsz00,
		BgL_bgl_string2629za700za7za7_2734za7, "set!", 4);
	      DEFINE_STRING(BGl_string2631z00zz__expander_argsz00,
		BgL_bgl_string2631za700za7za7_2735za7, "list?", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2argszd2parsezd2envzd2zz__expander_argsz00,
		BgL_bgl_za762expandza7d2args2736z00,
		BGl_z62expandzd2argszd2parsez62zz__expander_argsz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2633z00zz__expander_argsz00,
		BgL_bgl_string2633za700za7za7_2737za7, "not", 3);
	      DEFINE_STRING(BGl_string2635z00zz__expander_argsz00,
		BgL_bgl_string2635za700za7za7_2738za7, "Illegal argument list", 21);
	      DEFINE_STRING(BGl_string2637z00zz__expander_argsz00,
		BgL_bgl_string2637za700za7za7_2739za7, "nv", 2);
	      DEFINE_STRING(BGl_string2639z00zz__expander_argsz00,
		BgL_bgl_string2639za700za7za7_2740za7, "na*", 3);
	      DEFINE_STRING(BGl_string2641z00zz__expander_argsz00,
		BgL_bgl_string2641za700za7za7_2741za7, "action", 6);
	      DEFINE_STRING(BGl_string2643z00zz__expander_argsz00,
		BgL_bgl_string2643za700za7za7_2742za7, "next", 4);
	      DEFINE_STRING(BGl_string2645z00zz__expander_argsz00,
		BgL_bgl_string2645za700za7za7_2743za7, "loop", 4);
	      DEFINE_STRING(BGl_string2647z00zz__expander_argsz00,
		BgL_bgl_string2647za700za7za7_2744za7, "fail", 4);
	      DEFINE_STRING(BGl_string2649z00zz__expander_argsz00,
		BgL_bgl_string2649za700za7za7_2745za7, "cdr", 3);
	      DEFINE_STRING(BGl_string2651z00zz__expander_argsz00,
		BgL_bgl_string2651za700za7za7_2746za7, "liip", 4);
	      DEFINE_STRING(BGl_string2653z00zz__expander_argsz00,
		BgL_bgl_string2653za700za7za7_2747za7, "case", 4);
	      DEFINE_STRING(BGl_string2655z00zz__expander_argsz00,
		BgL_bgl_string2655za700za7za7_2748za7, "multiple-value-bind", 19);
	      DEFINE_STRING(BGl_string2657z00zz__expander_argsz00,
		BgL_bgl_string2657za700za7za7_2749za7, "let", 3);
	      DEFINE_STRING(BGl_string2659z00zz__expander_argsz00,
		BgL_bgl_string2659za700za7za7_2750za7, "let*", 4);
	      DEFINE_STRING(BGl_string2661z00zz__expander_argsz00,
		BgL_bgl_string2661za700za7za7_2751za7, "help", 4);
	      DEFINE_STRING(BGl_string2663z00zz__expander_argsz00,
		BgL_bgl_string2663za700za7za7_2752za7, "synopsis", 8);
	      DEFINE_STRING(BGl_string2664z00zz__expander_argsz00,
		BgL_bgl_string2664za700za7za7_2753za7, "Illegal help message", 20);
	      DEFINE_STRING(BGl_string2666z00zz__expander_argsz00,
		BgL_bgl_string2666za700za7za7_2754za7, "section", 7);
	      DEFINE_STRING(BGl_string2586z00zz__expander_argsz00,
		BgL_bgl_string2586za700za7za7_2755za7, "args-parse", 10);
	      DEFINE_STRING(BGl_string2668z00zz__expander_argsz00,
		BgL_bgl_string2668za700za7za7_2756za7, "else", 4);
	      DEFINE_STRING(BGl_string2587z00zz__expander_argsz00,
		BgL_bgl_string2587za700za7za7_2757za7, "Illegal syntax", 14);
	      DEFINE_STRING(BGl_string2669z00zz__expander_argsz00,
		BgL_bgl_string2669za700za7za7_2758za7, " ", 1);
	      DEFINE_STRING(BGl_string2588z00zz__expander_argsz00,
		BgL_bgl_string2588za700za7za7_2759za7,
		"/tmp/4.4a/runtime/Eval/expdargs.scm", 35);
	      DEFINE_STRING(BGl_string2589z00zz__expander_argsz00,
		BgL_bgl_string2589za700za7za7_2760za7, "&expand-args-parse", 18);
	      DEFINE_STRING(BGl_string2670z00zz__expander_argsz00,
		BgL_bgl_string2670za700za7za7_2761za7, "Illegal options", 15);
	      DEFINE_STRING(BGl_string2671z00zz__expander_argsz00,
		BgL_bgl_string2671za700za7za7_2762za7, "Illegal clause", 14);
	      DEFINE_STRING(BGl_string2590z00zz__expander_argsz00,
		BgL_bgl_string2590za700za7za7_2763za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string2672z00zz__expander_argsz00,
		BgL_bgl_string2672za700za7za7_2764za7, "", 0);
	      DEFINE_STRING(BGl_string2591z00zz__expander_argsz00,
		BgL_bgl_string2591za700za7za7_2765za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2673z00zz__expander_argsz00,
		BgL_bgl_string2673za700za7za7_2766za7, ",", 1);
	      DEFINE_STRING(BGl_string2593z00zz__expander_argsz00,
		BgL_bgl_string2593za700za7za7_2767za7, "v", 1);
	      DEFINE_STRING(BGl_string2675z00zz__expander_argsz00,
		BgL_bgl_string2675za700za7za7_2768za7, "begin", 5);
	      DEFINE_STRING(BGl_string2595z00zz__expander_argsz00,
		BgL_bgl_string2595za700za7za7_2769za7, "a", 1);
	      DEFINE_STRING(BGl_string2677z00zz__expander_argsz00,
		BgL_bgl_string2677za700za7za7_2770za7, "pair?", 5);
	      DEFINE_STRING(BGl_string2597z00zz__expander_argsz00,
		BgL_bgl_string2597za700za7za7_2771za7, "null?", 5);
	      DEFINE_STRING(BGl_string2679z00zz__expander_argsz00,
		BgL_bgl_string2679za700za7za7_2772za7, "rest", 4);
	      DEFINE_STRING(BGl_string2599z00zz__expander_argsz00,
		BgL_bgl_string2599za700za7za7_2773za7, "end", 3);
	      DEFINE_STRING(BGl_string2680z00zz__expander_argsz00,
		BgL_bgl_string2680za700za7za7_2774za7, "  ", 2);
	      DEFINE_STRING(BGl_string2681z00zz__expander_argsz00,
		BgL_bgl_string2681za700za7za7_2775za7, " -- Option overridden:", 22);
	      DEFINE_STRING(BGl_string2683z00zz__expander_argsz00,
		BgL_bgl_string2683za700za7za7_2776za7, "substring=?", 11);
	      DEFINE_STRING(BGl_string2685z00zz__expander_argsz00,
		BgL_bgl_string2685za700za7za7_2777za7, "and", 3);
	      DEFINE_STRING(BGl_string2687z00zz__expander_argsz00,
		BgL_bgl_string2687za700za7za7_2778za7, "string-length", 13);
	      DEFINE_STRING(BGl_string2689z00zz__expander_argsz00,
		BgL_bgl_string2689za700za7za7_2779za7, "substring", 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_argszd2parsezd2usagezd2envzd2zz__expander_argsz00,
		BgL_bgl_za762argsza7d2parseza72780za7,
		BGl_z62argszd2parsezd2usagez62zz__expander_argsz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2691z00zz__expander_argsz00,
		BgL_bgl_string2691za700za7za7_2781za7, "the-remaining-args", 18);
	      DEFINE_STRING(BGl_string2693z00zz__expander_argsz00,
		BgL_bgl_string2693za700za7za7_2782za7, "string=?", 8);
	      DEFINE_STRING(BGl_string2695z00zz__expander_argsz00,
		BgL_bgl_string2695za700za7za7_2783za7, "cond", 4);
	      DEFINE_STRING(BGl_string2697z00zz__expander_argsz00,
		BgL_bgl_string2697za700za7za7_2784za7, "or", 2);
	      DEFINE_STRING(BGl_string2698z00zz__expander_argsz00,
		BgL_bgl_string2698za700za7za7_2785za7, "missing argument", 16);
	      DEFINE_STRING(BGl_string2699z00zz__expander_argsz00,
		BgL_bgl_string2699za700za7za7_2786za7, "Illegal option argument `", 25);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol2640z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2642z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2644z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2646z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2648z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2650z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2652z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2654z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2656z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2658z00zz__expander_argsz00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2660z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2662z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2665z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2667z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2592z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2674z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2594z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2676z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2596z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2678z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2598z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2682z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2684z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2686z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2688z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2690z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2692z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2694z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2696z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2600z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2602z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2604z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2608z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2610z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2612z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2614z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2616z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2618z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2620z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2622z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2624z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2706z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2626z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2628z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2630z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2632z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2634z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2636z00zz__expander_argsz00));
		     ADD_ROOT((void *) (&BGl_symbol2638z00zz__expander_argsz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__expander_argsz00(long
		BgL_checksumz00_3364, char *BgL_fromz00_3365)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expander_argsz00))
				{
					BGl_requirezd2initializa7ationz75zz__expander_argsz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__expander_argsz00();
					BGl_cnstzd2initzd2zz__expander_argsz00();
					BGl_importedzd2moduleszd2initz00zz__expander_argsz00();
					return BGl_methodzd2initzd2zz__expander_argsz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__expander_argsz00()
	{
		{	/* Eval/expdargs.scm 19 */
			BGl_symbol2592z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2593z00zz__expander_argsz00);
			BGl_symbol2594z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2595z00zz__expander_argsz00);
			BGl_symbol2596z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2597z00zz__expander_argsz00);
			BGl_symbol2598z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2599z00zz__expander_argsz00);
			BGl_symbol2600z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2601z00zz__expander_argsz00);
			BGl_symbol2602z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2603z00zz__expander_argsz00);
			BGl_symbol2604z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2605z00zz__expander_argsz00);
			BGl_symbol2608z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2609z00zz__expander_argsz00);
			BGl_symbol2610z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2611z00zz__expander_argsz00);
			BGl_symbol2612z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2613z00zz__expander_argsz00);
			BGl_symbol2614z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2615z00zz__expander_argsz00);
			BGl_symbol2616z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2617z00zz__expander_argsz00);
			BGl_symbol2618z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2619z00zz__expander_argsz00);
			BGl_symbol2620z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2621z00zz__expander_argsz00);
			BGl_symbol2622z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2623z00zz__expander_argsz00);
			BGl_symbol2624z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2625z00zz__expander_argsz00);
			BGl_symbol2626z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2627z00zz__expander_argsz00);
			BGl_symbol2628z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2629z00zz__expander_argsz00);
			BGl_symbol2630z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2631z00zz__expander_argsz00);
			BGl_symbol2632z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2633z00zz__expander_argsz00);
			BGl_symbol2634z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2586z00zz__expander_argsz00);
			BGl_symbol2636z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2637z00zz__expander_argsz00);
			BGl_symbol2638z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2639z00zz__expander_argsz00);
			BGl_symbol2640z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2641z00zz__expander_argsz00);
			BGl_symbol2642z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2643z00zz__expander_argsz00);
			BGl_symbol2644z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2645z00zz__expander_argsz00);
			BGl_symbol2646z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2647z00zz__expander_argsz00);
			BGl_symbol2648z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2649z00zz__expander_argsz00);
			BGl_symbol2650z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2651z00zz__expander_argsz00);
			BGl_symbol2652z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2653z00zz__expander_argsz00);
			BGl_symbol2654z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2655z00zz__expander_argsz00);
			BGl_symbol2656z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2657z00zz__expander_argsz00);
			BGl_symbol2658z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2659z00zz__expander_argsz00);
			BGl_symbol2660z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2661z00zz__expander_argsz00);
			BGl_symbol2662z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2663z00zz__expander_argsz00);
			BGl_symbol2665z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2666z00zz__expander_argsz00);
			BGl_symbol2667z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2668z00zz__expander_argsz00);
			BGl_symbol2674z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2675z00zz__expander_argsz00);
			BGl_symbol2676z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2677z00zz__expander_argsz00);
			BGl_symbol2678z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2679z00zz__expander_argsz00);
			BGl_symbol2682z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2683z00zz__expander_argsz00);
			BGl_symbol2684z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2685z00zz__expander_argsz00);
			BGl_symbol2686z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2687z00zz__expander_argsz00);
			BGl_symbol2688z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2689z00zz__expander_argsz00);
			BGl_symbol2690z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2691z00zz__expander_argsz00);
			BGl_symbol2692z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2693z00zz__expander_argsz00);
			BGl_symbol2694z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2695z00zz__expander_argsz00);
			BGl_symbol2696z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2697z00zz__expander_argsz00);
			return (BGl_symbol2706z00zz__expander_argsz00 =
				bstring_to_symbol(BGl_string2707z00zz__expander_argsz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__expander_argsz00()
	{
		{	/* Eval/expdargs.scm 19 */
			return bgl_gc_roots_register();
		}

	}



/* expand-args-parse */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2argszd2parsez00zz__expander_argsz00(obj_t
		BgL_xz00_6, obj_t BgL_ez00_7)
	{
		{	/* Eval/expdargs.scm 76 */
			if (NULLP(BgL_xz00_6))
				{	/* Eval/expdargs.scm 77 */
					return
						BGl_expandzd2errorzd2zz__expandz00
						(BGl_string2586z00zz__expander_argsz00,
						BGl_string2587z00zz__expander_argsz00, BgL_xz00_6);
				}
			else
				{	/* Eval/expdargs.scm 77 */
					obj_t BgL_cdrzd2105zd2_1102;

					BgL_cdrzd2105zd2_1102 = CDR(BgL_xz00_6);
					if (PAIRP(BgL_cdrzd2105zd2_1102))
						{	/* Eval/expdargs.scm 77 */
							bool_t BgL_test2790z00_3429;

							{	/* Eval/expdargs.scm 77 */
								obj_t BgL_tmpz00_3430;

								BgL_tmpz00_3430 = CDR(BgL_cdrzd2105zd2_1102);
								BgL_test2790z00_3429 = PAIRP(BgL_tmpz00_3430);
							}
							if (BgL_test2790z00_3429)
								{	/* Eval/expdargs.scm 79 */
									obj_t BgL_arg1253z00_2539;

									BgL_arg1253z00_2539 =
										BGl_dozd2expandzd2argszd2parsezd2zz__expander_argsz00
										(BgL_xz00_6, BgL_ez00_7);
									return PROCEDURE_ENTRY(BgL_ez00_7) (BgL_ez00_7,
										BgL_arg1253z00_2539, BgL_ez00_7, BEOA);
								}
							else
								{	/* Eval/expdargs.scm 77 */
									return
										BGl_expandzd2errorzd2zz__expandz00
										(BGl_string2586z00zz__expander_argsz00,
										BGl_string2587z00zz__expander_argsz00, BgL_xz00_6);
								}
						}
					else
						{	/* Eval/expdargs.scm 77 */
							return
								BGl_expandzd2errorzd2zz__expandz00
								(BGl_string2586z00zz__expander_argsz00,
								BGl_string2587z00zz__expander_argsz00, BgL_xz00_6);
						}
				}
		}

	}



/* &expand-args-parse */
	obj_t BGl_z62expandzd2argszd2parsez62zz__expander_argsz00(obj_t
		BgL_envz00_3318, obj_t BgL_xz00_3319, obj_t BgL_ez00_3320)
	{
		{	/* Eval/expdargs.scm 76 */
			{	/* Eval/expdargs.scm 77 */
				obj_t BgL_auxz00_3448;
				obj_t BgL_auxz00_3441;

				if (PROCEDUREP(BgL_ez00_3320))
					{	/* Eval/expdargs.scm 77 */
						BgL_auxz00_3448 = BgL_ez00_3320;
					}
				else
					{
						obj_t BgL_auxz00_3451;

						BgL_auxz00_3451 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2588z00zz__expander_argsz00, BINT(((long) 2941)),
							BGl_string2589z00zz__expander_argsz00,
							BGl_string2591z00zz__expander_argsz00, BgL_ez00_3320);
						FAILURE(BgL_auxz00_3451, BFALSE, BFALSE);
					}
				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_xz00_3319))
					{	/* Eval/expdargs.scm 77 */
						BgL_auxz00_3441 = BgL_xz00_3319;
					}
				else
					{
						obj_t BgL_auxz00_3444;

						BgL_auxz00_3444 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2588z00zz__expander_argsz00, BINT(((long) 2941)),
							BGl_string2589z00zz__expander_argsz00,
							BGl_string2590z00zz__expander_argsz00, BgL_xz00_3319);
						FAILURE(BgL_auxz00_3444, BFALSE, BFALSE);
					}
				return
					BGl_expandzd2argszd2parsez00zz__expander_argsz00(BgL_auxz00_3441,
					BgL_auxz00_3448);
			}
		}

	}



/* do-expand-args-parse */
	obj_t BGl_dozd2expandzd2argszd2parsezd2zz__expander_argsz00(obj_t BgL_xz00_8,
		obj_t BgL_ez00_9)
	{
		{	/* Eval/expdargs.scm 86 */
			{	/* Eval/expdargs.scm 87 */
				obj_t BgL_expz00_1108;

				{	/* Eval/expdargs.scm 87 */
					obj_t BgL_pairz00_2543;

					BgL_pairz00_2543 = CDR(((obj_t) BgL_xz00_8));
					BgL_expz00_1108 = CAR(BgL_pairz00_2543);
				}
				{	/* Eval/expdargs.scm 87 */
					obj_t BgL_clausesz00_1109;

					{	/* Eval/expdargs.scm 88 */
						obj_t BgL_pairz00_2547;

						BgL_pairz00_2547 = CDR(((obj_t) BgL_xz00_8));
						BgL_clausesz00_1109 = CDR(BgL_pairz00_2547);
					}
					{	/* Eval/expdargs.scm 88 */
						obj_t BgL_otablez00_1110;

						{	/* Eval/expdargs.scm 89 */
							obj_t BgL_list1436z00_1323;

							BgL_list1436z00_1323 = MAKE_YOUNG_PAIR(BINT(((long) 20)), BNIL);
							BgL_otablez00_1110 =
								BGl_makezd2hashtablezd2zz__hashz00(BgL_list1436z00_1323);
						}
						{	/* Eval/expdargs.scm 89 */
							obj_t BgL_parsersz00_1111;

							if (NULLP(BgL_clausesz00_1109))
								{	/* Eval/expdargs.scm 90 */
									BgL_parsersz00_1111 = BNIL;
								}
							else
								{	/* Eval/expdargs.scm 90 */
									obj_t BgL_head1089z00_1312;

									{	/* Eval/expdargs.scm 90 */
										obj_t BgL_res2389z00_2549;

										BgL_res2389z00_2549 = MAKE_YOUNG_PAIR(BNIL, BNIL);
										BgL_head1089z00_1312 = BgL_res2389z00_2549;
									}
									{
										obj_t BgL_l1087z00_2573;
										obj_t BgL_tail1090z00_2574;

										BgL_l1087z00_2573 = BgL_clausesz00_1109;
										BgL_tail1090z00_2574 = BgL_head1089z00_1312;
									BgL_zc3z04anonymousza31432ze3z87_2572:
										if (NULLP(BgL_l1087z00_2573))
											{	/* Eval/expdargs.scm 90 */
												BgL_parsersz00_1111 = CDR(BgL_head1089z00_1312);
											}
										else
											{	/* Eval/expdargs.scm 90 */
												obj_t BgL_newtail1091z00_2581;

												{	/* Eval/expdargs.scm 90 */
													obj_t BgL_arg1435z00_2582;

													{	/* Eval/expdargs.scm 90 */
														obj_t BgL_cz00_2583;

														BgL_cz00_2583 = CAR(((obj_t) BgL_l1087z00_2573));
														BgL_arg1435z00_2582 =
															BGl_makezd2parserzd2zz__expander_argsz00
															(BgL_cz00_2583, BgL_otablez00_1110);
													}
													{	/* Eval/expdargs.scm 90 */
														obj_t BgL_res2395z00_2588;

														BgL_res2395z00_2588 =
															MAKE_YOUNG_PAIR(BgL_arg1435z00_2582, BNIL);
														BgL_newtail1091z00_2581 = BgL_res2395z00_2588;
													}
												}
												SET_CDR(BgL_tail1090z00_2574, BgL_newtail1091z00_2581);
												{	/* Eval/expdargs.scm 90 */
													obj_t BgL_arg1434z00_2584;

													BgL_arg1434z00_2584 =
														CDR(((obj_t) BgL_l1087z00_2573));
													{
														obj_t BgL_tail1090z00_3479;
														obj_t BgL_l1087z00_3478;

														BgL_l1087z00_3478 = BgL_arg1434z00_2584;
														BgL_tail1090z00_3479 = BgL_newtail1091z00_2581;
														BgL_tail1090z00_2574 = BgL_tail1090z00_3479;
														BgL_l1087z00_2573 = BgL_l1087z00_3478;
														goto BgL_zc3z04anonymousza31432ze3z87_2572;
													}
												}
											}
									}
								}
							{	/* Eval/expdargs.scm 90 */
								obj_t BgL_lastzd2parserzd2_1112;

								{	/* Eval/expdargs.scm 91 */
									obj_t BgL_arg1407z00_1288;

									{	/* Eval/expdargs.scm 91 */
										obj_t BgL_arg1409z00_1289;
										obj_t BgL_arg1410z00_1290;

										{	/* Eval/expdargs.scm 91 */
											obj_t BgL_arg1411z00_1291;

											BgL_arg1411z00_1291 =
												MAKE_YOUNG_PAIR(BGl_symbol2592z00zz__expander_argsz00,
												BNIL);
											BgL_arg1409z00_1289 =
												MAKE_YOUNG_PAIR(BGl_symbol2594z00zz__expander_argsz00,
												BgL_arg1411z00_1291);
										}
										{	/* Eval/expdargs.scm 92 */
											obj_t BgL_arg1412z00_1292;

											{	/* Eval/expdargs.scm 92 */
												obj_t BgL_arg1413z00_1293;

												{	/* Eval/expdargs.scm 92 */
													obj_t BgL_arg1414z00_1294;
													obj_t BgL_arg1415z00_1295;

													{	/* Eval/expdargs.scm 92 */
														obj_t BgL_arg1416z00_1296;

														BgL_arg1416z00_1296 =
															MAKE_YOUNG_PAIR
															(BGl_symbol2594z00zz__expander_argsz00, BNIL);
														BgL_arg1414z00_1294 =
															MAKE_YOUNG_PAIR
															(BGl_symbol2596z00zz__expander_argsz00,
															BgL_arg1416z00_1296);
													}
													{	/* Eval/expdargs.scm 93 */
														obj_t BgL_arg1417z00_1297;
														obj_t BgL_arg1418z00_1298;

														{	/* Eval/expdargs.scm 93 */
															obj_t BgL_arg1419z00_1299;

															{	/* Eval/expdargs.scm 93 */
																obj_t BgL_arg1420z00_1300;
																obj_t BgL_arg1421z00_1301;

																{	/* Eval/expdargs.scm 93 */
																	obj_t BgL_arg1422z00_1302;

																	BgL_arg1422z00_1302 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2598z00zz__expander_argsz00,
																		BNIL);
																	BgL_arg1420z00_1300 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2600z00zz__expander_argsz00,
																		BgL_arg1422z00_1302);
																}
																{	/* Eval/expdargs.scm 93 */
																	obj_t BgL_arg1424z00_1303;

																	BgL_arg1424z00_1303 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2592z00zz__expander_argsz00,
																		BNIL);
																	BgL_arg1421z00_1301 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2594z00zz__expander_argsz00,
																		BgL_arg1424z00_1303);
																}
																BgL_arg1419z00_1299 =
																	MAKE_YOUNG_PAIR(BgL_arg1420z00_1300,
																	BgL_arg1421z00_1301);
															}
															BgL_arg1417z00_1297 =
																MAKE_YOUNG_PAIR
																(BGl_symbol2602z00zz__expander_argsz00,
																BgL_arg1419z00_1299);
														}
														{	/* Eval/expdargs.scm 94 */
															obj_t BgL_arg1425z00_1304;

															{	/* Eval/expdargs.scm 94 */
																obj_t BgL_arg1426z00_1305;

																{	/* Eval/expdargs.scm 94 */
																	obj_t BgL_arg1427z00_1306;
																	obj_t BgL_arg1428z00_1307;

																	{	/* Eval/expdargs.scm 94 */
																		obj_t BgL_arg1429z00_1308;

																		BgL_arg1429z00_1308 =
																			MAKE_YOUNG_PAIR
																			(BGl_symbol2594z00zz__expander_argsz00,
																			BNIL);
																		BgL_arg1427z00_1306 =
																			MAKE_YOUNG_PAIR
																			(BGl_symbol2604z00zz__expander_argsz00,
																			BgL_arg1429z00_1308);
																	}
																	{	/* Eval/expdargs.scm 94 */
																		obj_t BgL_arg1430z00_1309;

																		BgL_arg1430z00_1309 =
																			MAKE_YOUNG_PAIR
																			(BGl_string2606z00zz__expander_argsz00,
																			BNIL);
																		BgL_arg1428z00_1307 =
																			MAKE_YOUNG_PAIR
																			(BGl_string2607z00zz__expander_argsz00,
																			BgL_arg1430z00_1309);
																	}
																	BgL_arg1426z00_1305 =
																		MAKE_YOUNG_PAIR(BgL_arg1427z00_1306,
																		BgL_arg1428z00_1307);
																}
																BgL_arg1425z00_1304 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol2608z00zz__expander_argsz00,
																	BgL_arg1426z00_1305);
															}
															BgL_arg1418z00_1298 =
																MAKE_YOUNG_PAIR(BgL_arg1425z00_1304, BNIL);
														}
														BgL_arg1415z00_1295 =
															MAKE_YOUNG_PAIR(BgL_arg1417z00_1297,
															BgL_arg1418z00_1298);
													}
													BgL_arg1413z00_1293 =
														MAKE_YOUNG_PAIR(BgL_arg1414z00_1294,
														BgL_arg1415z00_1295);
												}
												BgL_arg1412z00_1292 =
													MAKE_YOUNG_PAIR(BGl_symbol2610z00zz__expander_argsz00,
													BgL_arg1413z00_1293);
											}
											BgL_arg1410z00_1290 =
												MAKE_YOUNG_PAIR(BgL_arg1412z00_1292, BNIL);
										}
										BgL_arg1407z00_1288 =
											MAKE_YOUNG_PAIR(BgL_arg1409z00_1289, BgL_arg1410z00_1290);
									}
									BgL_lastzd2parserzd2_1112 =
										MAKE_YOUNG_PAIR(BGl_symbol2612z00zz__expander_argsz00,
										BgL_arg1407z00_1288);
								}
								{	/* Eval/expdargs.scm 91 */
									obj_t BgL_descrsz00_1113;

									{	/* Eval/expdargs.scm 95 */
										obj_t BgL_hook1102z00_1257;

										BgL_hook1102z00_1257 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
										{	/* Eval/expdargs.scm 95 */
											obj_t BgL_g1103z00_1258;

											if (NULLP(BgL_clausesz00_1109))
												{	/* Eval/expdargs.scm 95 */
													BgL_g1103z00_1258 = BNIL;
												}
											else
												{	/* Eval/expdargs.scm 95 */
													obj_t BgL_head1094z00_1274;

													{	/* Eval/expdargs.scm 95 */
														obj_t BgL_arg1405z00_1286;

														{	/* Eval/expdargs.scm 95 */
															obj_t BgL_arg1406z00_1287;

															BgL_arg1406z00_1287 =
																CAR(((obj_t) BgL_clausesz00_1109));
															BgL_arg1405z00_1286 =
																BGl_makezd2helpzd2zz__expander_argsz00
																(BgL_arg1406z00_1287);
														}
														{	/* Eval/expdargs.scm 95 */
															obj_t BgL_res2397z00_2593;

															BgL_res2397z00_2593 =
																MAKE_YOUNG_PAIR(BgL_arg1405z00_1286, BNIL);
															BgL_head1094z00_1274 = BgL_res2397z00_2593;
														}
													}
													{	/* Eval/expdargs.scm 95 */
														obj_t BgL_g1097z00_1275;

														BgL_g1097z00_1275 =
															CDR(((obj_t) BgL_clausesz00_1109));
														{
															obj_t BgL_l1092z00_2616;
															obj_t BgL_tail1095z00_2617;

															BgL_l1092z00_2616 = BgL_g1097z00_1275;
															BgL_tail1095z00_2617 = BgL_head1094z00_1274;
														BgL_zc3z04anonymousza31399ze3z87_2615:
															if (NULLP(BgL_l1092z00_2616))
																{	/* Eval/expdargs.scm 95 */
																	BgL_g1103z00_1258 = BgL_head1094z00_1274;
																}
															else
																{	/* Eval/expdargs.scm 95 */
																	obj_t BgL_newtail1096z00_2624;

																	{	/* Eval/expdargs.scm 95 */
																		obj_t BgL_arg1402z00_2625;

																		{	/* Eval/expdargs.scm 95 */
																			obj_t BgL_arg1404z00_2626;

																			BgL_arg1404z00_2626 =
																				CAR(((obj_t) BgL_l1092z00_2616));
																			BgL_arg1402z00_2625 =
																				BGl_makezd2helpzd2zz__expander_argsz00
																				(BgL_arg1404z00_2626);
																		}
																		{	/* Eval/expdargs.scm 95 */
																			obj_t BgL_res2403z00_2630;

																			BgL_res2403z00_2630 =
																				MAKE_YOUNG_PAIR(BgL_arg1402z00_2625,
																				BNIL);
																			BgL_newtail1096z00_2624 =
																				BgL_res2403z00_2630;
																		}
																	}
																	SET_CDR(BgL_tail1095z00_2617,
																		BgL_newtail1096z00_2624);
																	{	/* Eval/expdargs.scm 95 */
																		obj_t BgL_arg1401z00_2627;

																		BgL_arg1401z00_2627 =
																			CDR(((obj_t) BgL_l1092z00_2616));
																		{
																			obj_t BgL_tail1095z00_3522;
																			obj_t BgL_l1092z00_3521;

																			BgL_l1092z00_3521 = BgL_arg1401z00_2627;
																			BgL_tail1095z00_3522 =
																				BgL_newtail1096z00_2624;
																			BgL_tail1095z00_2617 =
																				BgL_tail1095z00_3522;
																			BgL_l1092z00_2616 = BgL_l1092z00_3521;
																			goto
																				BgL_zc3z04anonymousza31399ze3z87_2615;
																		}
																	}
																}
														}
													}
												}
											{
												obj_t BgL_l1099z00_1260;
												obj_t BgL_h1100z00_1261;

												BgL_l1099z00_1260 = BgL_g1103z00_1258;
												BgL_h1100z00_1261 = BgL_hook1102z00_1257;
											BgL_zc3z04anonymousza31392ze3z87_1262:
												if (NULLP(BgL_l1099z00_1260))
													{	/* Eval/expdargs.scm 95 */
														BgL_descrsz00_1113 = CDR(BgL_hook1102z00_1257);
													}
												else
													{	/* Eval/expdargs.scm 95 */
														if (CBOOL(CAR(((obj_t) BgL_l1099z00_1260))))
															{	/* Eval/expdargs.scm 95 */
																obj_t BgL_nh1101z00_1266;

																{	/* Eval/expdargs.scm 95 */
																	obj_t BgL_arg1396z00_1268;

																	BgL_arg1396z00_1268 =
																		CAR(((obj_t) BgL_l1099z00_1260));
																	{	/* Eval/expdargs.scm 95 */
																		obj_t BgL_res2405z00_2637;

																		BgL_res2405z00_2637 =
																			MAKE_YOUNG_PAIR(BgL_arg1396z00_1268,
																			BNIL);
																		BgL_nh1101z00_1266 = BgL_res2405z00_2637;
																	}
																}
																SET_CDR(BgL_h1100z00_1261, BgL_nh1101z00_1266);
																{	/* Eval/expdargs.scm 95 */
																	obj_t BgL_arg1395z00_1267;

																	BgL_arg1395z00_1267 =
																		CDR(((obj_t) BgL_l1099z00_1260));
																	{
																		obj_t BgL_h1100z00_3537;
																		obj_t BgL_l1099z00_3536;

																		BgL_l1099z00_3536 = BgL_arg1395z00_1267;
																		BgL_h1100z00_3537 = BgL_nh1101z00_1266;
																		BgL_h1100z00_1261 = BgL_h1100z00_3537;
																		BgL_l1099z00_1260 = BgL_l1099z00_3536;
																		goto BgL_zc3z04anonymousza31392ze3z87_1262;
																	}
																}
															}
														else
															{	/* Eval/expdargs.scm 95 */
																obj_t BgL_arg1397z00_1269;

																BgL_arg1397z00_1269 =
																	CDR(((obj_t) BgL_l1099z00_1260));
																{
																	obj_t BgL_l1099z00_3540;

																	BgL_l1099z00_3540 = BgL_arg1397z00_1269;
																	BgL_l1099z00_1260 = BgL_l1099z00_3540;
																	goto BgL_zc3z04anonymousza31392ze3z87_1262;
																}
															}
													}
											}
										}
									}
									{	/* Eval/expdargs.scm 95 */

										{	/* Eval/expdargs.scm 98 */
											obj_t BgL_arg1254z00_1114;

											{	/* Eval/expdargs.scm 98 */
												obj_t BgL_arg1256z00_1115;
												obj_t BgL_arg1258z00_1116;

												{	/* Eval/expdargs.scm 98 */
													obj_t BgL_arg1263z00_1117;
													obj_t BgL_arg1268z00_1118;

													{	/* Eval/expdargs.scm 98 */
														obj_t BgL_arg1270z00_1119;

														{	/* Eval/expdargs.scm 98 */
															obj_t BgL_arg1271z00_1120;

															{	/* Eval/expdargs.scm 98 */
																obj_t BgL_arg1273z00_1121;

																{	/* Eval/expdargs.scm 98 */
																	obj_t BgL_arg1274z00_1122;

																	{	/* Eval/expdargs.scm 98 */
																		obj_t BgL_arg1275z00_1123;

																		{	/* Eval/expdargs.scm 98 */
																			bool_t BgL_test2799z00_3541;

																			{
																				obj_t BgL_l1104z00_1140;

																				BgL_l1104z00_1140 = BgL_descrsz00_1113;
																			BgL_zc3z04anonymousza31284ze3z87_1141:
																				if (NULLP(BgL_l1104z00_1140))
																					{	/* Eval/expdargs.scm 98 */
																						BgL_test2799z00_3541 = ((bool_t) 0);
																					}
																				else
																					{	/* Eval/expdargs.scm 99 */
																						bool_t BgL__ortest_1106z00_1143;

																						{	/* Eval/expdargs.scm 99 */
																							obj_t BgL_fz00_1145;

																							BgL_fz00_1145 =
																								CAR(
																								((obj_t) BgL_l1104z00_1140));
																							if (PAIRP(BgL_fz00_1145))
																								{	/* Eval/expdargs.scm 100 */
																									bool_t BgL_test2802z00_3548;

																									{	/* Eval/expdargs.scm 100 */
																										obj_t BgL_tmpz00_3549;

																										BgL_tmpz00_3549 =
																											CDR(BgL_fz00_1145);
																										BgL_test2802z00_3548 =
																											PAIRP(BgL_tmpz00_3549);
																									}
																									if (BgL_test2802z00_3548)
																										{	/* Eval/expdargs.scm 100 */
																											BgL__ortest_1106z00_1143 =
																												(CAR(CDR(BgL_fz00_1145))
																												==
																												BGl_symbol2614z00zz__expander_argsz00);
																										}
																									else
																										{	/* Eval/expdargs.scm 100 */
																											BgL__ortest_1106z00_1143 =
																												((bool_t) 0);
																										}
																								}
																							else
																								{	/* Eval/expdargs.scm 99 */
																									BgL__ortest_1106z00_1143 =
																										((bool_t) 0);
																								}
																						}
																						if (BgL__ortest_1106z00_1143)
																							{	/* Eval/expdargs.scm 98 */
																								BgL_test2799z00_3541 =
																									BgL__ortest_1106z00_1143;
																							}
																						else
																							{	/* Eval/expdargs.scm 98 */
																								obj_t BgL_arg1285z00_1144;

																								BgL_arg1285z00_1144 =
																									CDR(
																									((obj_t) BgL_l1104z00_1140));
																								{
																									obj_t BgL_l1104z00_3558;

																									BgL_l1104z00_3558 =
																										BgL_arg1285z00_1144;
																									BgL_l1104z00_1140 =
																										BgL_l1104z00_3558;
																									goto
																										BgL_zc3z04anonymousza31284ze3z87_1141;
																								}
																							}
																					}
																			}
																			if (BgL_test2799z00_3541)
																				{	/* Eval/expdargs.scm 98 */
																					BgL_arg1275z00_1123 =
																						BGl_symbol2616z00zz__expander_argsz00;
																				}
																			else
																				{	/* Eval/expdargs.scm 98 */
																					BgL_arg1275z00_1123 =
																						BGl_symbol2600z00zz__expander_argsz00;
																				}
																		}
																		{	/* Eval/expdargs.scm 98 */
																			obj_t BgL_list1276z00_1124;

																			{	/* Eval/expdargs.scm 98 */
																				obj_t BgL_arg1277z00_1125;

																				BgL_arg1277z00_1125 =
																					MAKE_YOUNG_PAIR(BgL_descrsz00_1113,
																					BNIL);
																				BgL_list1276z00_1124 =
																					MAKE_YOUNG_PAIR(BgL_arg1275z00_1123,
																					BgL_arg1277z00_1125);
																			}
																			BgL_arg1274z00_1122 =
																				BgL_list1276z00_1124;
																		}
																	}
																	BgL_arg1273z00_1121 =
																		MAKE_YOUNG_PAIR(BgL_arg1274z00_1122, BNIL);
																}
																BgL_arg1271z00_1120 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol2618z00zz__expander_argsz00,
																	BgL_arg1273z00_1121);
															}
															BgL_arg1270z00_1119 =
																MAKE_YOUNG_PAIR(BgL_arg1271z00_1120, BNIL);
														}
														BgL_arg1263z00_1117 =
															MAKE_YOUNG_PAIR
															(BGl_symbol2618z00zz__expander_argsz00,
															BgL_arg1270z00_1119);
													}
													{	/* Eval/expdargs.scm 106 */
														obj_t BgL_arg1288z00_1151;
														obj_t BgL_arg1289z00_1152;

														{	/* Eval/expdargs.scm 106 */
															obj_t BgL_arg1290z00_1153;

															{	/* Eval/expdargs.scm 106 */
																obj_t BgL_arg1291z00_1154;

																{	/* Eval/expdargs.scm 106 */
																	obj_t BgL_arg1292z00_1155;

																	BgL_arg1292z00_1155 =
																		MAKE_YOUNG_PAIR(BgL_lastzd2parserzd2_1112,
																		BNIL);
																	BgL_arg1291z00_1154 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2620z00zz__expander_argsz00,
																		BgL_arg1292z00_1155);
																}
																BgL_arg1290z00_1153 =
																	MAKE_YOUNG_PAIR(BgL_arg1291z00_1154, BNIL);
															}
															BgL_arg1288z00_1151 =
																MAKE_YOUNG_PAIR
																(BGl_symbol2622z00zz__expander_argsz00,
																BgL_arg1290z00_1153);
														}
														{	/* Eval/expdargs.scm 107 */
															obj_t BgL_arg1295z00_1156;

															{	/* Eval/expdargs.scm 107 */
																obj_t BgL_arg1296z00_1157;

																BgL_arg1296z00_1157 =
																	MAKE_YOUNG_PAIR(BgL_expz00_1108, BNIL);
																BgL_arg1295z00_1156 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol2624z00zz__expander_argsz00,
																	BgL_arg1296z00_1157);
															}
															BgL_arg1289z00_1152 =
																MAKE_YOUNG_PAIR(BgL_arg1295z00_1156, BNIL);
														}
														BgL_arg1268z00_1118 =
															MAKE_YOUNG_PAIR(BgL_arg1288z00_1151,
															BgL_arg1289z00_1152);
													}
													BgL_arg1256z00_1115 =
														MAKE_YOUNG_PAIR(BgL_arg1263z00_1117,
														BgL_arg1268z00_1118);
												}
												{	/* Eval/expdargs.scm 108 */
													obj_t BgL_arg1297z00_1158;
													obj_t BgL_arg1298z00_1159;

													{	/* Eval/expdargs.scm 108 */
														obj_t BgL_l1112z00_1160;

														{	/* Eval/expdargs.scm 109 */
															obj_t BgL_arg1310z00_1178;

															{	/* Eval/expdargs.scm 109 */
																obj_t BgL_hook1111z00_1179;

																BgL_hook1111z00_1179 =
																	MAKE_YOUNG_PAIR(BFALSE, BNIL);
																{
																	obj_t BgL_l1108z00_1181;
																	obj_t BgL_h1109z00_1182;

																	BgL_l1108z00_1181 = BgL_parsersz00_1111;
																	BgL_h1109z00_1182 = BgL_hook1111z00_1179;
																BgL_zc3z04anonymousza31311ze3z87_1183:
																	if (NULLP(BgL_l1108z00_1181))
																		{	/* Eval/expdargs.scm 109 */
																			BgL_arg1310z00_1178 =
																				CDR(BgL_hook1111z00_1179);
																		}
																	else
																		{	/* Eval/expdargs.scm 109 */
																			bool_t BgL_test2805z00_3578;

																			{	/* Eval/expdargs.scm 109 */
																				obj_t BgL_tmpz00_3579;

																				BgL_tmpz00_3579 =
																					CAR(((obj_t) BgL_l1108z00_1181));
																				BgL_test2805z00_3578 =
																					PAIRP(BgL_tmpz00_3579);
																			}
																			if (BgL_test2805z00_3578)
																				{	/* Eval/expdargs.scm 109 */
																					obj_t BgL_nh1110z00_1187;

																					{	/* Eval/expdargs.scm 109 */
																						obj_t BgL_arg1316z00_1189;

																						BgL_arg1316z00_1189 =
																							CAR(((obj_t) BgL_l1108z00_1181));
																						{	/* Eval/expdargs.scm 109 */
																							obj_t BgL_res2412z00_2657;

																							BgL_res2412z00_2657 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1316z00_1189, BNIL);
																							BgL_nh1110z00_1187 =
																								BgL_res2412z00_2657;
																						}
																					}
																					SET_CDR(BgL_h1109z00_1182,
																						BgL_nh1110z00_1187);
																					{	/* Eval/expdargs.scm 109 */
																						obj_t BgL_arg1315z00_1188;

																						BgL_arg1315z00_1188 =
																							CDR(((obj_t) BgL_l1108z00_1181));
																						{
																							obj_t BgL_h1109z00_3590;
																							obj_t BgL_l1108z00_3589;

																							BgL_l1108z00_3589 =
																								BgL_arg1315z00_1188;
																							BgL_h1109z00_3590 =
																								BgL_nh1110z00_1187;
																							BgL_h1109z00_1182 =
																								BgL_h1109z00_3590;
																							BgL_l1108z00_1181 =
																								BgL_l1108z00_3589;
																							goto
																								BgL_zc3z04anonymousza31311ze3z87_1183;
																						}
																					}
																				}
																			else
																				{	/* Eval/expdargs.scm 109 */
																					obj_t BgL_arg1317z00_1190;

																					BgL_arg1317z00_1190 =
																						CDR(((obj_t) BgL_l1108z00_1181));
																					{
																						obj_t BgL_l1108z00_3593;

																						BgL_l1108z00_3593 =
																							BgL_arg1317z00_1190;
																						BgL_l1108z00_1181 =
																							BgL_l1108z00_3593;
																						goto
																							BgL_zc3z04anonymousza31311ze3z87_1183;
																					}
																				}
																		}
																}
															}
															BgL_l1112z00_1160 =
																bgl_reverse_bang(BgL_arg1310z00_1178);
														}
														if (NULLP(BgL_l1112z00_1160))
															{	/* Eval/expdargs.scm 108 */
																BgL_arg1297z00_1158 = BNIL;
															}
														else
															{	/* Eval/expdargs.scm 108 */
																obj_t BgL_head1114z00_1162;

																{	/* Eval/expdargs.scm 108 */
																	obj_t BgL_res2414z00_2662;

																	BgL_res2414z00_2662 =
																		MAKE_YOUNG_PAIR(BNIL, BNIL);
																	BgL_head1114z00_1162 = BgL_res2414z00_2662;
																}
																{
																	obj_t BgL_l1112z00_1164;
																	obj_t BgL_tail1115z00_1165;

																	BgL_l1112z00_1164 = BgL_l1112z00_1160;
																	BgL_tail1115z00_1165 = BgL_head1114z00_1162;
																BgL_zc3z04anonymousza31300ze3z87_1166:
																	if (NULLP(BgL_l1112z00_1164))
																		{	/* Eval/expdargs.scm 108 */
																			BgL_arg1297z00_1158 =
																				CDR(BgL_head1114z00_1162);
																		}
																	else
																		{	/* Eval/expdargs.scm 108 */
																			obj_t BgL_newtail1116z00_1168;

																			{	/* Eval/expdargs.scm 108 */
																				obj_t BgL_arg1303z00_1170;

																				{	/* Eval/expdargs.scm 108 */
																					obj_t BgL_pz00_1171;

																					BgL_pz00_1171 =
																						CAR(((obj_t) BgL_l1112z00_1164));
																					{	/* Eval/expdargs.scm 108 */
																						obj_t BgL_arg1304z00_1172;

																						{	/* Eval/expdargs.scm 108 */
																							obj_t BgL_arg1306z00_1173;

																							{	/* Eval/expdargs.scm 108 */
																								obj_t BgL_arg1307z00_1174;

																								{	/* Eval/expdargs.scm 108 */
																									obj_t BgL_arg1308z00_1175;

																									{	/* Eval/expdargs.scm 108 */
																										obj_t BgL_arg1309z00_1176;

																										BgL_arg1309z00_1176 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2622z00zz__expander_argsz00,
																											BNIL);
																										BgL_arg1308z00_1175 =
																											MAKE_YOUNG_PAIR
																											(BgL_pz00_1171,
																											BgL_arg1309z00_1176);
																									}
																									BgL_arg1307z00_1174 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2626z00zz__expander_argsz00,
																										BgL_arg1308z00_1175);
																								}
																								BgL_arg1306z00_1173 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1307z00_1174, BNIL);
																							}
																							BgL_arg1304z00_1172 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2622z00zz__expander_argsz00,
																								BgL_arg1306z00_1173);
																						}
																						BgL_arg1303z00_1170 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2628z00zz__expander_argsz00,
																							BgL_arg1304z00_1172);
																					}
																				}
																				{	/* Eval/expdargs.scm 108 */
																					obj_t BgL_res2416z00_2666;

																					BgL_res2416z00_2666 =
																						MAKE_YOUNG_PAIR(BgL_arg1303z00_1170,
																						BNIL);
																					BgL_newtail1116z00_1168 =
																						BgL_res2416z00_2666;
																				}
																			}
																			SET_CDR(BgL_tail1115z00_1165,
																				BgL_newtail1116z00_1168);
																			{	/* Eval/expdargs.scm 108 */
																				obj_t BgL_arg1302z00_1169;

																				BgL_arg1302z00_1169 =
																					CDR(((obj_t) BgL_l1112z00_1164));
																				{
																					obj_t BgL_tail1115z00_3614;
																					obj_t BgL_l1112z00_3613;

																					BgL_l1112z00_3613 =
																						BgL_arg1302z00_1169;
																					BgL_tail1115z00_3614 =
																						BgL_newtail1116z00_1168;
																					BgL_tail1115z00_1165 =
																						BgL_tail1115z00_3614;
																					BgL_l1112z00_1164 = BgL_l1112z00_3613;
																					goto
																						BgL_zc3z04anonymousza31300ze3z87_1166;
																				}
																			}
																		}
																}
															}
													}
													{	/* Eval/expdargs.scm 110 */
														obj_t BgL_arg1319z00_1193;

														{	/* Eval/expdargs.scm 110 */
															obj_t BgL_arg1322z00_1194;

															{	/* Eval/expdargs.scm 110 */
																obj_t BgL_arg1324z00_1195;
																obj_t BgL_arg1325z00_1196;

																{	/* Eval/expdargs.scm 110 */
																	obj_t BgL_arg1326z00_1197;

																	{	/* Eval/expdargs.scm 110 */
																		obj_t BgL_arg1327z00_1198;

																		{	/* Eval/expdargs.scm 110 */
																			obj_t BgL_arg1328z00_1199;

																			BgL_arg1328z00_1199 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol2624z00zz__expander_argsz00,
																				BNIL);
																			BgL_arg1327z00_1198 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol2630z00zz__expander_argsz00,
																				BgL_arg1328z00_1199);
																		}
																		BgL_arg1326z00_1197 =
																			MAKE_YOUNG_PAIR(BgL_arg1327z00_1198,
																			BNIL);
																	}
																	BgL_arg1324z00_1195 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2632z00zz__expander_argsz00,
																		BgL_arg1326z00_1197);
																}
																{	/* Eval/expdargs.scm 111 */
																	obj_t BgL_arg1329z00_1200;
																	obj_t BgL_arg1330z00_1201;

																	{	/* Eval/expdargs.scm 111 */
																		obj_t BgL_arg1331z00_1202;

																		{	/* Eval/expdargs.scm 111 */
																			obj_t BgL_arg1333z00_1203;
																			obj_t BgL_arg1334z00_1204;

																			{	/* Eval/expdargs.scm 111 */
																				obj_t BgL_arg1335z00_1205;

																				BgL_arg1335z00_1205 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2634z00zz__expander_argsz00,
																					BNIL);
																				BgL_arg1333z00_1203 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2600z00zz__expander_argsz00,
																					BgL_arg1335z00_1205);
																			}
																			{	/* Eval/expdargs.scm 111 */
																				obj_t BgL_arg1337z00_1206;

																				BgL_arg1337z00_1206 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2624z00zz__expander_argsz00,
																					BNIL);
																				BgL_arg1334z00_1204 =
																					MAKE_YOUNG_PAIR
																					(BGl_string2635z00zz__expander_argsz00,
																					BgL_arg1337z00_1206);
																			}
																			BgL_arg1331z00_1202 =
																				MAKE_YOUNG_PAIR(BgL_arg1333z00_1203,
																				BgL_arg1334z00_1204);
																		}
																		BgL_arg1329z00_1200 =
																			MAKE_YOUNG_PAIR
																			(BGl_symbol2608z00zz__expander_argsz00,
																			BgL_arg1331z00_1202);
																	}
																	{	/* Eval/expdargs.scm 112 */
																		obj_t BgL_arg1338z00_1207;

																		{	/* Eval/expdargs.scm 112 */
																			obj_t BgL_arg1339z00_1208;

																			{	/* Eval/expdargs.scm 112 */
																				obj_t BgL_arg1340z00_1209;

																				{	/* Eval/expdargs.scm 112 */
																					obj_t BgL_arg1341z00_1210;
																					obj_t BgL_arg1342z00_1211;

																					{	/* Eval/expdargs.scm 112 */
																						obj_t BgL_arg1343z00_1212;
																						obj_t BgL_arg1344z00_1213;

																						{	/* Eval/expdargs.scm 112 */
																							obj_t BgL_arg1345z00_1214;

																							BgL_arg1345z00_1214 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2624z00zz__expander_argsz00,
																								BNIL);
																							BgL_arg1343z00_1212 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2624z00zz__expander_argsz00,
																								BgL_arg1345z00_1214);
																						}
																						{	/* Eval/expdargs.scm 113 */
																							obj_t BgL_arg1346z00_1215;

																							{	/* Eval/expdargs.scm 113 */
																								obj_t BgL_arg1347z00_1216;

																								BgL_arg1347z00_1216 =
																									MAKE_YOUNG_PAIR(BFALSE, BNIL);
																								BgL_arg1346z00_1215 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2592z00zz__expander_argsz00,
																									BgL_arg1347z00_1216);
																							}
																							BgL_arg1344z00_1213 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1346z00_1215, BNIL);
																						}
																						BgL_arg1341z00_1210 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1343z00_1212,
																							BgL_arg1344z00_1213);
																					}
																					{	/* Eval/expdargs.scm 114 */
																						obj_t BgL_arg1348z00_1217;

																						{	/* Eval/expdargs.scm 114 */
																							obj_t BgL_arg1350z00_1218;

																							{	/* Eval/expdargs.scm 114 */
																								obj_t BgL_arg1351z00_1219;

																								{	/* Eval/expdargs.scm 114 */
																									obj_t BgL_arg1352z00_1220;
																									obj_t BgL_arg1353z00_1221;

																									{	/* Eval/expdargs.scm 114 */
																										obj_t BgL_arg1354z00_1222;

																										{	/* Eval/expdargs.scm 114 */
																											obj_t BgL_arg1355z00_1223;

																											BgL_arg1355z00_1223 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2622z00zz__expander_argsz00,
																												BNIL);
																											BgL_arg1354z00_1222 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2622z00zz__expander_argsz00,
																												BgL_arg1355z00_1223);
																										}
																										BgL_arg1352z00_1220 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1354z00_1222,
																											BNIL);
																									}
																									{	/* Eval/expdargs.scm 115 */
																										obj_t BgL_arg1356z00_1224;

																										{	/* Eval/expdargs.scm 115 */
																											obj_t BgL_arg1357z00_1225;

																											{	/* Eval/expdargs.scm 115 */
																												obj_t
																													BgL_arg1359z00_1226;
																												obj_t
																													BgL_arg1360z00_1227;
																												{	/* Eval/expdargs.scm 115 */
																													obj_t
																														BgL_arg1361z00_1228;
																													{	/* Eval/expdargs.scm 115 */
																														obj_t
																															BgL_arg1362z00_1229;
																														BgL_arg1362z00_1229
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2636z00zz__expander_argsz00,
																															BNIL);
																														BgL_arg1361z00_1228
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2638z00zz__expander_argsz00,
																															BgL_arg1362z00_1229);
																													}
																													BgL_arg1359z00_1226 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol2640z00zz__expander_argsz00,
																														BgL_arg1361z00_1228);
																												}
																												{	/* Eval/expdargs.scm 116 */
																													obj_t
																														BgL_arg1363z00_1230;
																													obj_t
																														BgL_arg1364z00_1231;
																													{	/* Eval/expdargs.scm 116 */
																														obj_t
																															BgL_arg1365z00_1232;
																														obj_t
																															BgL_arg1367z00_1233;
																														{	/* Eval/expdargs.scm 116 */
																															obj_t
																																BgL_arg1368z00_1234;
																															BgL_arg1368z00_1234
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2622z00zz__expander_argsz00,
																																BNIL);
																															BgL_arg1365z00_1232
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2604z00zz__expander_argsz00,
																																BgL_arg1368z00_1234);
																														}
																														{	/* Eval/expdargs.scm 116 */
																															obj_t
																																BgL_arg1370z00_1235;
																															BgL_arg1370z00_1235
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2592z00zz__expander_argsz00,
																																BNIL);
																															BgL_arg1367z00_1233
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2624z00zz__expander_argsz00,
																																BgL_arg1370z00_1235);
																														}
																														BgL_arg1363z00_1230
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1365z00_1232,
																															BgL_arg1367z00_1233);
																													}
																													{	/* Eval/expdargs.scm 118 */
																														obj_t
																															BgL_arg1371z00_1236;
																														{	/* Eval/expdargs.scm 118 */
																															obj_t
																																BgL_arg1372z00_1237;
																															{	/* Eval/expdargs.scm 118 */
																																obj_t
																																	BgL_arg1373z00_1238;
																																{	/* Eval/expdargs.scm 118 */
																																	obj_t
																																		BgL_arg1374z00_1239;
																																	obj_t
																																		BgL_arg1375z00_1240;
																																	{	/* Eval/expdargs.scm 118 */
																																		obj_t
																																			BgL_arg1376z00_1241;
																																		obj_t
																																			BgL_arg1377z00_1242;
																																		BgL_arg1376z00_1241
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_symbol2642z00zz__expander_argsz00,
																																			BNIL);
																																		{	/* Eval/expdargs.scm 119 */
																																			obj_t
																																				BgL_arg1378z00_1243;
																																			{	/* Eval/expdargs.scm 119 */
																																				obj_t
																																					BgL_arg1379z00_1244;
																																				{	/* Eval/expdargs.scm 119 */
																																					obj_t
																																						BgL_arg1380z00_1245;
																																					BgL_arg1380z00_1245
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2636z00zz__expander_argsz00,
																																						BNIL);
																																					BgL_arg1379z00_1244
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2638z00zz__expander_argsz00,
																																						BgL_arg1380z00_1245);
																																				}
																																				BgL_arg1378z00_1243
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2644z00zz__expander_argsz00,
																																					BgL_arg1379z00_1244);
																																			}
																																			BgL_arg1377z00_1242
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1378z00_1243,
																																				BNIL);
																																		}
																																		BgL_arg1374z00_1239
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1376z00_1241,
																																			BgL_arg1377z00_1242);
																																	}
																																	{	/* Eval/expdargs.scm 120 */
																																		obj_t
																																			BgL_arg1381z00_1246;
																																		obj_t
																																			BgL_arg1382z00_1247;
																																		{	/* Eval/expdargs.scm 120 */
																																			obj_t
																																				BgL_arg1383z00_1248;
																																			obj_t
																																				BgL_arg1384z00_1249;
																																			BgL_arg1383z00_1248
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol2646z00zz__expander_argsz00,
																																				BNIL);
																																			{	/* Eval/expdargs.scm 121 */
																																				obj_t
																																					BgL_arg1385z00_1250;
																																				{	/* Eval/expdargs.scm 121 */
																																					obj_t
																																						BgL_arg1386z00_1251;
																																					{	/* Eval/expdargs.scm 121 */
																																						obj_t
																																							BgL_arg1387z00_1252;
																																						{	/* Eval/expdargs.scm 121 */
																																							obj_t
																																								BgL_arg1388z00_1253;
																																							BgL_arg1388z00_1253
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2622z00zz__expander_argsz00,
																																								BNIL);
																																							BgL_arg1387z00_1252
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2648z00zz__expander_argsz00,
																																								BgL_arg1388z00_1253);
																																						}
																																						BgL_arg1386z00_1251
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1387z00_1252,
																																							BNIL);
																																					}
																																					BgL_arg1385z00_1250
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2650z00zz__expander_argsz00,
																																						BgL_arg1386z00_1251);
																																				}
																																				BgL_arg1384z00_1249
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1385z00_1250,
																																					BNIL);
																																			}
																																			BgL_arg1381z00_1246
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1383z00_1248,
																																				BgL_arg1384z00_1249);
																																		}
																																		{	/* Eval/expdargs.scm 122 */
																																			obj_t
																																				BgL_arg1389z00_1254;
																																			{	/* Eval/expdargs.scm 122 */
																																				obj_t
																																					BgL_arg1390z00_1255;
																																				obj_t
																																					BgL_arg1391z00_1256;
																																				BgL_arg1390z00_1255
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2598z00zz__expander_argsz00,
																																					BNIL);
																																				BgL_arg1391z00_1256
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2636z00zz__expander_argsz00,
																																					BNIL);
																																				BgL_arg1389z00_1254
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1390z00_1255,
																																					BgL_arg1391z00_1256);
																																			}
																																			BgL_arg1382z00_1247
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1389z00_1254,
																																				BNIL);
																																		}
																																		BgL_arg1375z00_1240
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1381z00_1246,
																																			BgL_arg1382z00_1247);
																																	}
																																	BgL_arg1373z00_1238
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1374z00_1239,
																																		BgL_arg1375z00_1240);
																																}
																																BgL_arg1372z00_1237
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_symbol2640z00zz__expander_argsz00,
																																	BgL_arg1373z00_1238);
																															}
																															BgL_arg1371z00_1236
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2652z00zz__expander_argsz00,
																																BgL_arg1372z00_1237);
																														}
																														BgL_arg1364z00_1231
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1371z00_1236,
																															BNIL);
																													}
																													BgL_arg1360z00_1227 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1363z00_1230,
																														BgL_arg1364z00_1231);
																												}
																												BgL_arg1357z00_1225 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1359z00_1226,
																													BgL_arg1360z00_1227);
																											}
																											BgL_arg1356z00_1224 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2654z00zz__expander_argsz00,
																												BgL_arg1357z00_1225);
																										}
																										BgL_arg1353z00_1221 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1356z00_1224,
																											BNIL);
																									}
																									BgL_arg1351z00_1219 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1352z00_1220,
																										BgL_arg1353z00_1221);
																								}
																								BgL_arg1350z00_1218 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2650z00zz__expander_argsz00,
																									BgL_arg1351z00_1219);
																							}
																							BgL_arg1348z00_1217 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2656z00zz__expander_argsz00,
																								BgL_arg1350z00_1218);
																						}
																						BgL_arg1342z00_1211 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1348z00_1217, BNIL);
																					}
																					BgL_arg1340z00_1209 =
																						MAKE_YOUNG_PAIR(BgL_arg1341z00_1210,
																						BgL_arg1342z00_1211);
																				}
																				BgL_arg1339z00_1208 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2644z00zz__expander_argsz00,
																					BgL_arg1340z00_1209);
																			}
																			BgL_arg1338z00_1207 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol2656z00zz__expander_argsz00,
																				BgL_arg1339z00_1208);
																		}
																		BgL_arg1330z00_1201 =
																			MAKE_YOUNG_PAIR(BgL_arg1338z00_1207,
																			BNIL);
																	}
																	BgL_arg1325z00_1196 =
																		MAKE_YOUNG_PAIR(BgL_arg1329z00_1200,
																		BgL_arg1330z00_1201);
																}
																BgL_arg1322z00_1194 =
																	MAKE_YOUNG_PAIR(BgL_arg1324z00_1195,
																	BgL_arg1325z00_1196);
															}
															BgL_arg1319z00_1193 =
																MAKE_YOUNG_PAIR
																(BGl_symbol2610z00zz__expander_argsz00,
																BgL_arg1322z00_1194);
														}
														BgL_arg1298z00_1159 =
															MAKE_YOUNG_PAIR(BgL_arg1319z00_1193, BNIL);
													}
													BgL_arg1258z00_1116 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg1297z00_1158, BgL_arg1298z00_1159);
												}
												BgL_arg1254z00_1114 =
													MAKE_YOUNG_PAIR(BgL_arg1256z00_1115,
													BgL_arg1258z00_1116);
											}
											return
												MAKE_YOUNG_PAIR(BGl_symbol2658z00zz__expander_argsz00,
												BgL_arg1254z00_1114);
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



/* make-help */
	obj_t BGl_makezd2helpzd2zz__expander_argsz00(obj_t BgL_clausez00_10)
	{
		{	/* Eval/expdargs.scm 128 */
			{
				obj_t BgL_optz00_1329;

				if (PAIRP(BgL_clausez00_10))
					{	/* Eval/expdargs.scm 129 */
						obj_t BgL_cdrzd2121zd2_1334;

						BgL_cdrzd2121zd2_1334 = CDR(BgL_clausez00_10);
						if (
							(CAR(BgL_clausez00_10) == BGl_symbol2665z00zz__expander_argsz00))
							{	/* Eval/expdargs.scm 129 */
								if (PAIRP(BgL_cdrzd2121zd2_1334))
									{	/* Eval/expdargs.scm 129 */
										if (NULLP(CDR(BgL_cdrzd2121zd2_1334)))
											{	/* Eval/expdargs.scm 129 */
												obj_t BgL_arg1443z00_1340;

												BgL_arg1443z00_1340 = CAR(BgL_cdrzd2121zd2_1334);
												return
													MAKE_YOUNG_PAIR(BGl_symbol2665z00zz__expander_argsz00,
													BgL_arg1443z00_1340);
											}
										else
											{	/* Eval/expdargs.scm 129 */
												obj_t BgL_carzd2129zd2_1341;

												BgL_carzd2129zd2_1341 = CAR(BgL_clausez00_10);
												if (PAIRP(BgL_carzd2129zd2_1341))
													{	/* Eval/expdargs.scm 129 */
														if (NULLP(CDR(BgL_carzd2129zd2_1341)))
															{	/* Eval/expdargs.scm 129 */
																return BFALSE;
															}
														else
															{	/* Eval/expdargs.scm 129 */
																BgL_optz00_1329 = BgL_carzd2129zd2_1341;
															BgL_tagzd2114zd2_1330:
																{	/* Eval/expdargs.scm 139 */
																	obj_t BgL_synz00_1370;

																	BgL_synz00_1370 =
																		CAR
																		(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_optz00_1329));
																	{
																		obj_t BgL_synopsisz00_1375;
																		obj_t BgL_msgz00_1376;

																		if (PAIRP(BgL_synz00_1370))
																			{	/* Eval/expdargs.scm 140 */
																				obj_t BgL_cdrzd2197zd2_1381;

																				BgL_cdrzd2197zd2_1381 =
																					CDR(BgL_synz00_1370);
																				if (PAIRP(BgL_cdrzd2197zd2_1381))
																					{	/* Eval/expdargs.scm 140 */
																						obj_t BgL_cdrzd2202zd2_1383;

																						BgL_cdrzd2202zd2_1383 =
																							CDR(BgL_cdrzd2197zd2_1381);
																						if (PAIRP(BgL_cdrzd2202zd2_1383))
																							{	/* Eval/expdargs.scm 140 */
																								if (NULLP(CDR
																										(BgL_cdrzd2202zd2_1383)))
																									{	/* Eval/expdargs.scm 140 */
																										obj_t BgL_arg1477z00_1387;
																										obj_t BgL_arg1478z00_1388;
																										obj_t BgL_arg1479z00_1389;

																										BgL_arg1477z00_1387 =
																											CAR(BgL_synz00_1370);
																										BgL_arg1478z00_1388 =
																											CAR
																											(BgL_cdrzd2197zd2_1381);
																										BgL_arg1479z00_1389 =
																											CAR
																											(BgL_cdrzd2202zd2_1383);
																										if (BGl_synopsiszf3zf3zz__expander_argsz00(BgL_arg1477z00_1387))
																											{	/* Eval/expdargs.scm 144 */
																												obj_t
																													BgL_arg1489z00_2692;
																												if (STRINGP
																													(BgL_arg1479z00_1389))
																													{	/* Eval/expdargs.scm 144 */
																														BgL_arg1489z00_2692
																															=
																															BgL_arg1479z00_1389;
																													}
																												else
																													{	/* Eval/expdargs.scm 144 */
																														obj_t
																															BgL_list1491z00_2694;
																														{	/* Eval/expdargs.scm 144 */
																															obj_t
																																BgL_arg1492z00_2695;
																															BgL_arg1492z00_2695
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1479z00_1389,
																																BNIL);
																															BgL_list1491z00_2694
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2614z00zz__expander_argsz00,
																																BgL_arg1492z00_2695);
																														}
																														BgL_arg1489z00_2692
																															=
																															BgL_list1491z00_2694;
																													}
																												return
																													MAKE_YOUNG_PAIR
																													(BgL_arg1478z00_1388,
																													BgL_arg1489z00_2692);
																											}
																										else
																											{	/* Eval/expdargs.scm 142 */
																												return
																													BGl_expandzd2errorzd2zz__expandz00
																													(BGl_string2586z00zz__expander_argsz00,
																													BGl_string2664z00zz__expander_argsz00,
																													BgL_clausez00_10);
																											}
																									}
																								else
																									{	/* Eval/expdargs.scm 140 */
																										return BFALSE;
																									}
																							}
																						else
																							{	/* Eval/expdargs.scm 140 */
																								if (NULLP(CDR(
																											((obj_t)
																												BgL_cdrzd2197zd2_1381))))
																									{	/* Eval/expdargs.scm 140 */
																										obj_t BgL_arg1485z00_1394;
																										obj_t BgL_arg1486z00_1395;

																										BgL_arg1485z00_1394 =
																											CAR(BgL_synz00_1370);
																										BgL_arg1486z00_1395 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd2197zd2_1381));
																										BgL_synopsisz00_1375 =
																											BgL_arg1485z00_1394;
																										BgL_msgz00_1376 =
																											BgL_arg1486z00_1395;
																										{	/* Eval/expdargs.scm 146 */
																											bool_t
																												BgL_test2821z00_3733;
																											{	/* Eval/expdargs.scm 459 */
																												bool_t
																													BgL__ortest_1047z00_2678;
																												BgL__ortest_1047z00_2678
																													=
																													(BgL_synopsisz00_1375
																													==
																													BGl_symbol2660z00zz__expander_argsz00);
																												if (BgL__ortest_1047z00_2678)
																													{	/* Eval/expdargs.scm 459 */
																														BgL_test2821z00_3733
																															=
																															BgL__ortest_1047z00_2678;
																													}
																												else
																													{	/* Eval/expdargs.scm 459 */
																														BgL_test2821z00_3733
																															=
																															(BgL_synopsisz00_1375
																															==
																															BGl_symbol2662z00zz__expander_argsz00);
																													}
																											}
																											if (BgL_test2821z00_3733)
																												{	/* Eval/expdargs.scm 148 */
																													obj_t
																														BgL_arg1494z00_1403;
																													obj_t
																														BgL_arg1495z00_1404;
																													BgL_arg1494z00_1403 =
																														BGl_makezd2synopsiszd2namez00zz__expander_argsz00
																														(BgL_clausez00_10);
																													if (STRINGP
																														(BgL_msgz00_1376))
																														{	/* Eval/expdargs.scm 149 */
																															BgL_arg1495z00_1404
																																=
																																BgL_msgz00_1376;
																														}
																													else
																														{	/* Eval/expdargs.scm 149 */
																															obj_t
																																BgL_list1497z00_1406;
																															{	/* Eval/expdargs.scm 149 */
																																obj_t
																																	BgL_arg1498z00_1407;
																																BgL_arg1498z00_1407
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_msgz00_1376,
																																	BNIL);
																																BgL_list1497z00_1406
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_symbol2614z00zz__expander_argsz00,
																																	BgL_arg1498z00_1407);
																															}
																															BgL_arg1495z00_1404
																																=
																																BgL_list1497z00_1406;
																														}
																													return
																														MAKE_YOUNG_PAIR
																														(BgL_arg1494z00_1403,
																														BgL_arg1495z00_1404);
																												}
																											else
																												{	/* Eval/expdargs.scm 146 */
																													return
																														BGl_expandzd2errorzd2zz__expandz00
																														(BGl_string2586z00zz__expander_argsz00,
																														BGl_string2664z00zz__expander_argsz00,
																														BgL_clausez00_10);
																												}
																										}
																									}
																								else
																									{	/* Eval/expdargs.scm 140 */
																										return BFALSE;
																									}
																							}
																					}
																				else
																					{	/* Eval/expdargs.scm 140 */
																						return BFALSE;
																					}
																			}
																		else
																			{	/* Eval/expdargs.scm 140 */
																				return BFALSE;
																			}
																	}
																}
															}
													}
												else
													{
														obj_t BgL_optz00_3744;

														BgL_optz00_3744 = BgL_carzd2129zd2_1341;
														BgL_optz00_1329 = BgL_optz00_3744;
														goto BgL_tagzd2114zd2_1330;
													}
											}
									}
								else
									{	/* Eval/expdargs.scm 129 */
										obj_t BgL_carzd2146zd2_1349;

										BgL_carzd2146zd2_1349 = CAR(BgL_clausez00_10);
										if (PAIRP(BgL_carzd2146zd2_1349))
											{	/* Eval/expdargs.scm 129 */
												if (NULLP(CDR(BgL_carzd2146zd2_1349)))
													{	/* Eval/expdargs.scm 129 */
														return BFALSE;
													}
												else
													{
														obj_t BgL_optz00_3751;

														BgL_optz00_3751 = BgL_carzd2146zd2_1349;
														BgL_optz00_1329 = BgL_optz00_3751;
														goto BgL_tagzd2114zd2_1330;
													}
											}
										else
											{
												obj_t BgL_optz00_3752;

												BgL_optz00_3752 = BgL_carzd2146zd2_1349;
												BgL_optz00_1329 = BgL_optz00_3752;
												goto BgL_tagzd2114zd2_1330;
											}
									}
							}
						else
							{	/* Eval/expdargs.scm 129 */
								if (NULLP(CAR(BgL_clausez00_10)))
									{	/* Eval/expdargs.scm 129 */
										return BFALSE;
									}
								else
									{	/* Eval/expdargs.scm 129 */
										if (
											(CAR(BgL_clausez00_10) ==
												BGl_symbol2667z00zz__expander_argsz00))
											{	/* Eval/expdargs.scm 129 */
												return BFALSE;
											}
										else
											{	/* Eval/expdargs.scm 129 */
												obj_t BgL_carzd2167zd2_1360;

												BgL_carzd2167zd2_1360 = CAR(BgL_clausez00_10);
												if (PAIRP(BgL_carzd2167zd2_1360))
													{	/* Eval/expdargs.scm 129 */
														if (NULLP(CDR(BgL_carzd2167zd2_1360)))
															{	/* Eval/expdargs.scm 129 */
																return BFALSE;
															}
														else
															{
																obj_t BgL_optz00_3765;

																BgL_optz00_3765 = BgL_carzd2167zd2_1360;
																BgL_optz00_1329 = BgL_optz00_3765;
																goto BgL_tagzd2114zd2_1330;
															}
													}
												else
													{
														obj_t BgL_optz00_3766;

														BgL_optz00_3766 = BgL_carzd2167zd2_1360;
														BgL_optz00_1329 = BgL_optz00_3766;
														goto BgL_tagzd2114zd2_1330;
													}
											}
									}
							}
					}
				else
					{	/* Eval/expdargs.scm 129 */
						return BFALSE;
					}
			}
		}

	}



/* make-synopsis-name */
	obj_t BGl_makezd2synopsiszd2namez00zz__expander_argsz00(obj_t
		BgL_clausez00_12)
	{
		{	/* Eval/expdargs.scm 164 */
			{
				obj_t BgL_optz00_1436;
				obj_t BgL_oz00_1437;
				obj_t BgL_argsz00_1438;
				obj_t BgL_optz00_1456;
				obj_t BgL_ozb2zb2_1457;
				obj_t BgL_argsz00_1458;

				{	/* Eval/expdargs.scm 222 */
					obj_t BgL_optz00_1411;

					BgL_optz00_1411 = CAR(((obj_t) BgL_clausez00_12));
					{	/* Eval/expdargs.scm 222 */
						obj_t BgL_oz00_1412;

						BgL_oz00_1412 = CAR(((obj_t) BgL_optz00_1411));
						{	/* Eval/expdargs.scm 223 */
							obj_t BgL_argsz00_1413;

							BgL_argsz00_1413 =
								BGl_fetchzd2optionzd2argumentsz00zz__expander_argsz00
								(BgL_optz00_1411);
							{	/* Eval/expdargs.scm 224 */

								if (STRINGP(BgL_oz00_1412))
									{	/* Eval/expdargs.scm 226 */
										BgL_optz00_1436 = BgL_optz00_1411;
										BgL_oz00_1437 = BgL_oz00_1412;
										BgL_argsz00_1438 = BgL_argsz00_1413;
										{	/* Eval/expdargs.scm 166 */
											obj_t BgL_oidz00_1440;

											BgL_oidz00_1440 =
												BGl_fetchzd2optionzd2embedzd2argumentzd2zz__expander_argsz00
												(BgL_oz00_1437);
											{	/* Eval/expdargs.scm 167 */
												obj_t BgL_aidz00_1441;

												{	/* Eval/expdargs.scm 169 */
													int BgL_tmpz00_3775;

													BgL_tmpz00_3775 = (int) (((long) 1));
													BgL_aidz00_1441 = BGL_MVALUES_VAL(BgL_tmpz00_3775);
												}
												{	/* Eval/expdargs.scm 169 */
													bool_t BgL_test2831z00_3778;

													if (CBOOL(BgL_aidz00_1441))
														{	/* Eval/expdargs.scm 169 */
															BgL_test2831z00_3778 = PAIRP(BgL_argsz00_1438);
														}
													else
														{	/* Eval/expdargs.scm 169 */
															BgL_test2831z00_3778 = ((bool_t) 0);
														}
													if (BgL_test2831z00_3778)
														{	/* Eval/expdargs.scm 169 */
															return
																BGl_expandzd2errorzd2zz__expandz00
																(BGl_string2586z00zz__expander_argsz00,
																BGl_string2671z00zz__expander_argsz00,
																BgL_clausez00_12);
														}
													else
														{	/* Eval/expdargs.scm 171 */
															bool_t BgL_test2833z00_3783;

															if (CBOOL(BgL_aidz00_1441))
																{	/* Eval/expdargs.scm 171 */
																	BgL_test2833z00_3783 = ((bool_t) 1);
																}
															else
																{	/* Eval/expdargs.scm 171 */
																	BgL_test2833z00_3783 =
																		PAIRP(BgL_argsz00_1438);
																}
															if (BgL_test2833z00_3783)
																{	/* Eval/expdargs.scm 171 */
																	if (CBOOL(BgL_aidz00_1441))
																		{	/* Eval/expdargs.scm 173 */
																			return
																				string_append(BgL_oidz00_1440,
																				BGl_stringzd2upcasezd2zz__r4_strings_6_7z00
																				(BgL_aidz00_1441));
																		}
																	else
																		{	/* Eval/expdargs.scm 173 */
																			return
																				string_append(BgL_oidz00_1440,
																				BGl_loopze71ze7zz__expander_argsz00
																				(BgL_clausez00_12, BgL_argsz00_1438));
																		}
																}
															else
																{	/* Eval/expdargs.scm 171 */
																	return BgL_oidz00_1440;
																}
														}
												}
											}
										}
									}
								else
									{	/* Eval/expdargs.scm 228 */
										bool_t BgL_test2836z00_3793;

										if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
											(BgL_oz00_1412))
											{
												obj_t BgL_l1127z00_1428;

												BgL_l1127z00_1428 = BgL_oz00_1412;
											BgL_zc3z04anonymousza31508ze3z87_1429:
												if (NULLP(BgL_l1127z00_1428))
													{	/* Eval/expdargs.scm 228 */
														BgL_test2836z00_3793 = ((bool_t) 1);
													}
												else
													{	/* Eval/expdargs.scm 228 */
														bool_t BgL_test2839z00_3798;

														{	/* Eval/expdargs.scm 228 */
															obj_t BgL_tmpz00_3799;

															BgL_tmpz00_3799 =
																CAR(((obj_t) BgL_l1127z00_1428));
															BgL_test2839z00_3798 = STRINGP(BgL_tmpz00_3799);
														}
														if (BgL_test2839z00_3798)
															{
																obj_t BgL_l1127z00_3803;

																BgL_l1127z00_3803 =
																	CDR(((obj_t) BgL_l1127z00_1428));
																BgL_l1127z00_1428 = BgL_l1127z00_3803;
																goto BgL_zc3z04anonymousza31508ze3z87_1429;
															}
														else
															{	/* Eval/expdargs.scm 228 */
																BgL_test2836z00_3793 = ((bool_t) 0);
															}
													}
											}
										else
											{	/* Eval/expdargs.scm 228 */
												BgL_test2836z00_3793 = ((bool_t) 0);
											}
										if (BgL_test2836z00_3793)
											{	/* Eval/expdargs.scm 228 */
												BgL_optz00_1456 = BgL_optz00_1411;
												BgL_ozb2zb2_1457 = BgL_oz00_1412;
												BgL_argsz00_1458 = BgL_argsz00_1413;
												{	/* Eval/expdargs.scm 192 */
													obj_t BgL_oidzb2zb2_1461;

													{
														obj_t BgL_ozb2zb2_1517;
														obj_t BgL_oidzb2zb2_1518;
														obj_t BgL_aidzb2zb2_1519;

														BgL_ozb2zb2_1517 = BgL_ozb2zb2_1457;
														BgL_oidzb2zb2_1518 = BNIL;
														BgL_aidzb2zb2_1519 = BNIL;
													BgL_zc3z04anonymousza31559ze3z87_1520:
														if (NULLP(BgL_ozb2zb2_1517))
															{	/* Eval/expdargs.scm 197 */
																obj_t BgL_val0_1117z00_1522;
																obj_t BgL_val1_1118z00_1523;

																BgL_val0_1117z00_1522 =
																	bgl_reverse_bang(BgL_oidzb2zb2_1518);
																BgL_val1_1118z00_1523 =
																	bgl_reverse_bang(BgL_aidzb2zb2_1519);
																{	/* Eval/expdargs.scm 197 */
																	int BgL_res2443z00_2742;

																	{	/* Eval/expdargs.scm 197 */
																		int BgL_tmpz00_3810;

																		BgL_tmpz00_3810 = (int) (((long) 2));
																		BgL_res2443z00_2742 =
																			BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3810);
																	} BgL_res2443z00_2742;
																}
																{	/* Eval/expdargs.scm 197 */
																	int BgL_tmpz00_3813;

																	BgL_tmpz00_3813 = (int) (((long) 1));
																	BGL_MVALUES_VAL_SET(BgL_tmpz00_3813,
																		BgL_val1_1118z00_1523);
																}
																BgL_oidzb2zb2_1461 = BgL_val0_1117z00_1522;
															}
														else
															{	/* Eval/expdargs.scm 198 */
																obj_t BgL_oidz00_1524;

																{	/* Eval/expdargs.scm 199 */
																	obj_t BgL_arg1564z00_1529;

																	BgL_arg1564z00_1529 =
																		CAR(((obj_t) BgL_ozb2zb2_1517));
																	BgL_oidz00_1524 =
																		BGl_fetchzd2optionzd2embedzd2argumentzd2zz__expander_argsz00
																		(BgL_arg1564z00_1529);
																}
																{	/* Eval/expdargs.scm 199 */
																	obj_t BgL_aidz00_1525;

																	{	/* Eval/expdargs.scm 200 */
																		int BgL_tmpz00_3819;

																		BgL_tmpz00_3819 = (int) (((long) 1));
																		BgL_aidz00_1525 =
																			BGL_MVALUES_VAL(BgL_tmpz00_3819);
																	}
																	{	/* Eval/expdargs.scm 200 */
																		obj_t BgL_arg1561z00_1526;
																		obj_t BgL_arg1562z00_1527;
																		obj_t BgL_arg1563z00_1528;

																		BgL_arg1561z00_1526 =
																			CDR(((obj_t) BgL_ozb2zb2_1517));
																		BgL_arg1562z00_1527 =
																			MAKE_YOUNG_PAIR(BgL_oidz00_1524,
																			BgL_oidzb2zb2_1518);
																		BgL_arg1563z00_1528 =
																			MAKE_YOUNG_PAIR(BgL_aidz00_1525,
																			BgL_aidzb2zb2_1519);
																		{
																			obj_t BgL_aidzb2zb2_3828;
																			obj_t BgL_oidzb2zb2_3827;
																			obj_t BgL_ozb2zb2_3826;

																			BgL_ozb2zb2_3826 = BgL_arg1561z00_1526;
																			BgL_oidzb2zb2_3827 = BgL_arg1562z00_1527;
																			BgL_aidzb2zb2_3828 = BgL_arg1563z00_1528;
																			BgL_aidzb2zb2_1519 = BgL_aidzb2zb2_3828;
																			BgL_oidzb2zb2_1518 = BgL_oidzb2zb2_3827;
																			BgL_ozb2zb2_1517 = BgL_ozb2zb2_3826;
																			goto
																				BgL_zc3z04anonymousza31559ze3z87_1520;
																		}
																	}
																}
															}
													}
													{	/* Eval/expdargs.scm 193 */
														obj_t BgL_aidzb2zb2_1462;

														{	/* Eval/expdargs.scm 202 */
															int BgL_tmpz00_3829;

															BgL_tmpz00_3829 = (int) (((long) 1));
															BgL_aidzb2zb2_1462 =
																BGL_MVALUES_VAL(BgL_tmpz00_3829);
														}
														{	/* Eval/expdargs.scm 202 */
															bool_t BgL_test2841z00_3832;

															if (PAIRP(BgL_aidzb2zb2_1462))
																{
																	obj_t BgL_l1119z00_2761;

																	{	/* Eval/expdargs.scm 202 */
																		obj_t BgL_tmpz00_3835;

																		BgL_l1119z00_2761 = BgL_aidzb2zb2_1462;
																	BgL_zc3z04anonymousza31557ze3z87_2760:
																		if (NULLP(BgL_l1119z00_2761))
																			{	/* Eval/expdargs.scm 202 */
																				BgL_tmpz00_3835 = BFALSE;
																			}
																		else
																			{	/* Eval/expdargs.scm 202 */
																				obj_t BgL__ortest_1121z00_2767;

																				BgL__ortest_1121z00_2767 =
																					CAR(((obj_t) BgL_l1119z00_2761));
																				if (CBOOL(BgL__ortest_1121z00_2767))
																					{	/* Eval/expdargs.scm 202 */
																						BgL_tmpz00_3835 =
																							BgL__ortest_1121z00_2767;
																					}
																				else
																					{
																						obj_t BgL_l1119z00_3842;

																						BgL_l1119z00_3842 =
																							CDR(((obj_t) BgL_l1119z00_2761));
																						BgL_l1119z00_2761 =
																							BgL_l1119z00_3842;
																						goto
																							BgL_zc3z04anonymousza31557ze3z87_2760;
																					}
																			}
																		BgL_test2841z00_3832 =
																			CBOOL(BgL_tmpz00_3835);
																	}
																}
															else
																{	/* Eval/expdargs.scm 202 */
																	BgL_test2841z00_3832 = ((bool_t) 0);
																}
															if (BgL_test2841z00_3832)
																{	/* Eval/expdargs.scm 202 */
																	if (NULLP(BgL_argsz00_1458))
																		{	/* Eval/expdargs.scm 215 */
																			obj_t BgL_runner1543z00_1492;

																			{	/* Eval/expdargs.scm 216 */
																				obj_t BgL_arg1532z00_1475;
																				obj_t BgL_arg1533z00_1476;

																				BgL_arg1532z00_1475 =
																					BGl_concatze70ze7zz__expander_argsz00
																					(BgL_oidzb2zb2_1461);
																				{	/* Eval/expdargs.scm 217 */
																					obj_t BgL_head1124z00_1480;

																					{	/* Eval/expdargs.scm 217 */
																						obj_t BgL_res2451z00_2776;

																						BgL_res2451z00_2776 =
																							MAKE_YOUNG_PAIR(BNIL, BNIL);
																						BgL_head1124z00_1480 =
																							BgL_res2451z00_2776;
																					}
																					{
																						obj_t BgL_l1122z00_1482;
																						obj_t BgL_tail1125z00_1483;

																						BgL_l1122z00_1482 =
																							BgL_aidzb2zb2_1462;
																						BgL_tail1125z00_1483 =
																							BgL_head1124z00_1480;
																					BgL_zc3z04anonymousza31536ze3z87_1484:
																						if (NULLP
																							(BgL_l1122z00_1482))
																							{	/* Eval/expdargs.scm 217 */
																								BgL_arg1533z00_1476 =
																									CDR(BgL_head1124z00_1480);
																							}
																						else
																							{	/* Eval/expdargs.scm 217 */
																								obj_t BgL_newtail1126z00_1486;

																								{	/* Eval/expdargs.scm 217 */
																									obj_t BgL_arg1541z00_1488;

																									{	/* Eval/expdargs.scm 217 */
																										obj_t BgL_az00_1489;

																										BgL_az00_1489 =
																											CAR(
																											((obj_t)
																												BgL_l1122z00_1482));
																										BgL_arg1541z00_1488 =
																											string_append
																											(BGl_string2669z00zz__expander_argsz00,
																											BGl_stringzd2upcasezd2zz__r4_strings_6_7z00
																											(BgL_az00_1489));
																									}
																									{	/* Eval/expdargs.scm 217 */
																										obj_t BgL_res2453z00_2780;

																										BgL_res2453z00_2780 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1541z00_1488,
																											BNIL);
																										BgL_newtail1126z00_1486 =
																											BgL_res2453z00_2780;
																									}
																								}
																								SET_CDR(BgL_tail1125z00_1483,
																									BgL_newtail1126z00_1486);
																								{	/* Eval/expdargs.scm 217 */
																									obj_t BgL_arg1540z00_1487;

																									BgL_arg1540z00_1487 =
																										CDR(
																										((obj_t)
																											BgL_l1122z00_1482));
																									{
																										obj_t BgL_tail1125z00_3862;
																										obj_t BgL_l1122z00_3861;

																										BgL_l1122z00_3861 =
																											BgL_arg1540z00_1487;
																										BgL_tail1125z00_3862 =
																											BgL_newtail1126z00_1486;
																										BgL_tail1125z00_1483 =
																											BgL_tail1125z00_3862;
																										BgL_l1122z00_1482 =
																											BgL_l1122z00_3861;
																										goto
																											BgL_zc3z04anonymousza31536ze3z87_1484;
																									}
																								}
																							}
																					}
																				}
																				{	/* Eval/expdargs.scm 215 */
																					obj_t BgL_list1534z00_1477;

																					BgL_list1534z00_1477 =
																						MAKE_YOUNG_PAIR(BgL_arg1533z00_1476,
																						BNIL);
																					BgL_runner1543z00_1492 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg1532z00_1475,
																						BgL_list1534z00_1477);
																				}
																			}
																			return
																				BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																				(BgL_runner1543z00_1492);
																		}
																	else
																		{	/* Eval/expdargs.scm 212 */
																			return
																				BGl_expandzd2errorzd2zz__expandz00
																				(BGl_string2586z00zz__expander_argsz00,
																				BGl_string2670z00zz__expander_argsz00,
																				BgL_clausez00_12);
																		}
																}
															else
																{	/* Eval/expdargs.scm 202 */
																	return
																		string_append
																		(BGl_concatze70ze7zz__expander_argsz00
																		(BgL_oidzb2zb2_1461),
																		BGl_loopze72ze7zz__expander_argsz00
																		(BgL_clausez00_12, BgL_argsz00_1458));
																}
														}
													}
												}
											}
										else
											{	/* Eval/expdargs.scm 228 */
												return
													BGl_expandzd2errorzd2zz__expandz00
													(BGl_string2586z00zz__expander_argsz00,
													BGl_string2671z00zz__expander_argsz00,
													BgL_clausez00_12);
											}
									}
							}
						}
					}
				}
			}
		}

	}



/* loop~1 */
	obj_t BGl_loopze71ze7zz__expander_argsz00(obj_t BgL_clausez00_3329,
		obj_t BgL_argsz00_1447)
	{
		{	/* Eval/expdargs.scm 178 */
			if (NULLP(BgL_argsz00_1447))
				{	/* Eval/expdargs.scm 179 */
					return BGl_string2672z00zz__expander_argsz00;
				}
			else
				{	/* Eval/expdargs.scm 183 */
					obj_t BgL_arg1518z00_1450;
					obj_t BgL_arg1519z00_1451;

					{	/* Eval/expdargs.scm 183 */
						obj_t BgL_arg1520z00_1452;

						{	/* Eval/expdargs.scm 183 */
							obj_t BgL_arg1521z00_1453;

							BgL_arg1521z00_1453 = CAR(((obj_t) BgL_argsz00_1447));
							BgL_arg1520z00_1452 =
								BGl_fetchzd2argumentzd2namez00zz__expander_argsz00
								(BgL_arg1521z00_1453, BgL_clausez00_3329);
						}
						BgL_arg1518z00_1450 =
							BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(BgL_arg1520z00_1452);
					}
					{	/* Eval/expdargs.scm 184 */
						obj_t BgL_arg1523z00_1454;

						BgL_arg1523z00_1454 = CDR(((obj_t) BgL_argsz00_1447));
						BgL_arg1519z00_1451 =
							BGl_loopze71ze7zz__expander_argsz00(BgL_clausez00_3329,
							BgL_arg1523z00_1454);
					}
					return
						string_append_3(BGl_string2669z00zz__expander_argsz00,
						BgL_arg1518z00_1450, BgL_arg1519z00_1451);
				}
		}

	}



/* loop~2 */
	obj_t BGl_loopze72ze7zz__expander_argsz00(obj_t BgL_clausez00_3330,
		obj_t BgL_argsz00_1496)
	{
		{	/* Eval/expdargs.scm 205 */
			if (NULLP(BgL_argsz00_1496))
				{	/* Eval/expdargs.scm 206 */
					return BGl_string2672z00zz__expander_argsz00;
				}
			else
				{	/* Eval/expdargs.scm 210 */
					obj_t BgL_arg1551z00_1499;
					obj_t BgL_arg1552z00_1500;

					{	/* Eval/expdargs.scm 210 */
						obj_t BgL_arg1553z00_1501;

						{	/* Eval/expdargs.scm 210 */
							obj_t BgL_arg1554z00_1502;

							BgL_arg1554z00_1502 = CAR(((obj_t) BgL_argsz00_1496));
							BgL_arg1553z00_1501 =
								BGl_fetchzd2argumentzd2namez00zz__expander_argsz00
								(BgL_arg1554z00_1502, BgL_clausez00_3330);
						}
						BgL_arg1551z00_1499 =
							BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(BgL_arg1553z00_1501);
					}
					{	/* Eval/expdargs.scm 211 */
						obj_t BgL_arg1556z00_1503;

						BgL_arg1556z00_1503 = CDR(((obj_t) BgL_argsz00_1496));
						BgL_arg1552z00_1500 =
							BGl_loopze72ze7zz__expander_argsz00(BgL_clausez00_3330,
							BgL_arg1556z00_1503);
					}
					return
						string_append_3(BGl_string2669z00zz__expander_argsz00,
						BgL_arg1551z00_1499, BgL_arg1552z00_1500);
				}
		}

	}



/* concat~0 */
	obj_t BGl_concatze70ze7zz__expander_argsz00(obj_t BgL_lz00_1531)
	{
		{	/* Eval/expdargs.scm 191 */
			if (NULLP(CDR(((obj_t) BgL_lz00_1531))))
				{	/* Eval/expdargs.scm 187 */
					return CAR(((obj_t) BgL_lz00_1531));
				}
			else
				{	/* Eval/expdargs.scm 189 */
					obj_t BgL_arg1568z00_1535;
					obj_t BgL_arg1569z00_1536;

					BgL_arg1568z00_1535 = CAR(((obj_t) BgL_lz00_1531));
					{	/* Eval/expdargs.scm 191 */
						obj_t BgL_arg1570z00_1537;

						BgL_arg1570z00_1537 = CDR(((obj_t) BgL_lz00_1531));
						BgL_arg1569z00_1536 =
							BGl_concatze70ze7zz__expander_argsz00(BgL_arg1570z00_1537);
					}
					return
						string_append_3(BgL_arg1568z00_1535,
						BGl_string2673z00zz__expander_argsz00, BgL_arg1569z00_1536);
				}
		}

	}



/* make-parser */
	obj_t BGl_makezd2parserzd2zz__expander_argsz00(obj_t BgL_clausez00_13,
		obj_t BgL_otablez00_14)
	{
		{	/* Eval/expdargs.scm 236 */
			{
				obj_t BgL_exprza2za2_1546;
				obj_t BgL_exprza2za2_1544;

				if (PAIRP(BgL_clausez00_13))
					{	/* Eval/expdargs.scm 237 */
						obj_t BgL_cdrzd2249zd2_1552;

						BgL_cdrzd2249zd2_1552 = CDR(BgL_clausez00_13);
						if (
							(CAR(BgL_clausez00_13) == BGl_symbol2665z00zz__expander_argsz00))
							{	/* Eval/expdargs.scm 237 */
								if (PAIRP(BgL_cdrzd2249zd2_1552))
									{	/* Eval/expdargs.scm 237 */
										if (NULLP(CDR(BgL_cdrzd2249zd2_1552)))
											{	/* Eval/expdargs.scm 237 */
												return BFALSE;
											}
										else
											{	/* Eval/expdargs.scm 237 */
												if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(CAR
														(BgL_clausez00_13)))
													{	/* Eval/expdargs.scm 237 */
														return
															BGl_makezd2optzd2parserz00zz__expander_argsz00
															(BgL_clausez00_13, BgL_otablez00_14);
													}
												else
													{	/* Eval/expdargs.scm 237 */
														return
															BGl_expandzd2errorzd2zz__expandz00
															(BGl_string2586z00zz__expander_argsz00,
															BGl_string2671z00zz__expander_argsz00,
															BgL_clausez00_13);
													}
											}
									}
								else
									{	/* Eval/expdargs.scm 237 */
										if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(CAR
												(BgL_clausez00_13)))
											{	/* Eval/expdargs.scm 237 */
												return
													BGl_makezd2optzd2parserz00zz__expander_argsz00
													(BgL_clausez00_13, BgL_otablez00_14);
											}
										else
											{	/* Eval/expdargs.scm 237 */
												return
													BGl_expandzd2errorzd2zz__expandz00
													(BGl_string2586z00zz__expander_argsz00,
													BGl_string2671z00zz__expander_argsz00,
													BgL_clausez00_13);
											}
									}
							}
						else
							{	/* Eval/expdargs.scm 237 */
								if (NULLP(CAR(BgL_clausez00_13)))
									{	/* Eval/expdargs.scm 237 */
										BgL_exprza2za2_1544 = BgL_cdrzd2249zd2_1552;
										{	/* Eval/expdargs.scm 241 */
											obj_t BgL_az00_1578;
											obj_t BgL_vz00_1579;

											{	/* Eval/expdargs.scm 241 */

												{	/* Eval/expdargs.scm 241 */

													BgL_az00_1578 =
														BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
												}
											}
											{	/* Eval/expdargs.scm 242 */

												{	/* Eval/expdargs.scm 242 */

													BgL_vz00_1579 =
														BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
												}
											}
											{	/* Eval/expdargs.scm 243 */
												obj_t BgL_arg1608z00_1580;

												{	/* Eval/expdargs.scm 243 */
													obj_t BgL_arg1611z00_1581;
													obj_t BgL_arg1612z00_1582;

													{	/* Eval/expdargs.scm 243 */
														obj_t BgL_arg1613z00_1583;

														BgL_arg1613z00_1583 =
															MAKE_YOUNG_PAIR(BgL_vz00_1579, BNIL);
														BgL_arg1611z00_1581 =
															MAKE_YOUNG_PAIR(BgL_az00_1578,
															BgL_arg1613z00_1583);
													}
													{	/* Eval/expdargs.scm 244 */
														obj_t BgL_arg1614z00_1584;

														{	/* Eval/expdargs.scm 244 */
															obj_t BgL_arg1615z00_1585;

															{	/* Eval/expdargs.scm 244 */
																obj_t BgL_arg1616z00_1586;
																obj_t BgL_arg1617z00_1587;

																{	/* Eval/expdargs.scm 244 */
																	obj_t BgL_arg1618z00_1588;

																	BgL_arg1618z00_1588 =
																		MAKE_YOUNG_PAIR(BgL_az00_1578, BNIL);
																	BgL_arg1616z00_1586 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2596z00zz__expander_argsz00,
																		BgL_arg1618z00_1588);
																}
																{	/* Eval/expdargs.scm 245 */
																	obj_t BgL_arg1619z00_1589;
																	obj_t BgL_arg1620z00_1590;

																	{	/* Eval/expdargs.scm 245 */
																		obj_t BgL_arg1621z00_1591;

																		{	/* Eval/expdargs.scm 245 */
																			obj_t BgL_arg1623z00_1592;
																			obj_t BgL_arg1624z00_1593;

																			{	/* Eval/expdargs.scm 245 */
																				obj_t BgL_arg1626z00_1594;

																				BgL_arg1626z00_1594 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2598z00zz__expander_argsz00,
																					BNIL);
																				BgL_arg1623z00_1592 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2600z00zz__expander_argsz00,
																					BgL_arg1626z00_1594);
																			}
																			{	/* Eval/expdargs.scm 245 */
																				obj_t BgL_arg1627z00_1595;

																				{	/* Eval/expdargs.scm 245 */
																					obj_t BgL_arg1628z00_1596;

																					{	/* Eval/expdargs.scm 245 */
																						obj_t BgL_arg1629z00_1597;

																						BgL_arg1629z00_1597 =
																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																							(BgL_exprza2za2_1544, BNIL);
																						BgL_arg1628z00_1596 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2674z00zz__expander_argsz00,
																							BgL_arg1629z00_1597);
																					}
																					BgL_arg1627z00_1595 =
																						MAKE_YOUNG_PAIR(BgL_arg1628z00_1596,
																						BNIL);
																				}
																				BgL_arg1624z00_1593 =
																					MAKE_YOUNG_PAIR(BgL_az00_1578,
																					BgL_arg1627z00_1595);
																			}
																			BgL_arg1621z00_1591 =
																				MAKE_YOUNG_PAIR(BgL_arg1623z00_1592,
																				BgL_arg1624z00_1593);
																		}
																		BgL_arg1619z00_1589 =
																			MAKE_YOUNG_PAIR
																			(BGl_symbol2602z00zz__expander_argsz00,
																			BgL_arg1621z00_1591);
																	}
																	{	/* Eval/expdargs.scm 246 */
																		obj_t BgL_arg1630z00_1598;

																		{	/* Eval/expdargs.scm 246 */
																			obj_t BgL_arg1631z00_1599;

																			{	/* Eval/expdargs.scm 246 */
																				obj_t BgL_arg1632z00_1600;
																				obj_t BgL_arg1633z00_1601;

																				{	/* Eval/expdargs.scm 246 */
																					obj_t BgL_arg1634z00_1602;

																					BgL_arg1634z00_1602 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol2646z00zz__expander_argsz00,
																						BNIL);
																					BgL_arg1632z00_1600 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol2600z00zz__expander_argsz00,
																						BgL_arg1634z00_1602);
																				}
																				{	/* Eval/expdargs.scm 246 */
																					obj_t BgL_arg1635z00_1603;

																					BgL_arg1635z00_1603 =
																						MAKE_YOUNG_PAIR(BgL_vz00_1579,
																						BNIL);
																					BgL_arg1633z00_1601 =
																						MAKE_YOUNG_PAIR(BgL_az00_1578,
																						BgL_arg1635z00_1603);
																				}
																				BgL_arg1631z00_1599 =
																					MAKE_YOUNG_PAIR(BgL_arg1632z00_1600,
																					BgL_arg1633z00_1601);
																			}
																			BgL_arg1630z00_1598 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol2602z00zz__expander_argsz00,
																				BgL_arg1631z00_1599);
																		}
																		BgL_arg1620z00_1590 =
																			MAKE_YOUNG_PAIR(BgL_arg1630z00_1598,
																			BNIL);
																	}
																	BgL_arg1617z00_1587 =
																		MAKE_YOUNG_PAIR(BgL_arg1619z00_1589,
																		BgL_arg1620z00_1590);
																}
																BgL_arg1615z00_1585 =
																	MAKE_YOUNG_PAIR(BgL_arg1616z00_1586,
																	BgL_arg1617z00_1587);
															}
															BgL_arg1614z00_1584 =
																MAKE_YOUNG_PAIR
																(BGl_symbol2610z00zz__expander_argsz00,
																BgL_arg1615z00_1585);
														}
														BgL_arg1612z00_1582 =
															MAKE_YOUNG_PAIR(BgL_arg1614z00_1584, BNIL);
													}
													BgL_arg1608z00_1580 =
														MAKE_YOUNG_PAIR(BgL_arg1611z00_1581,
														BgL_arg1612z00_1582);
												}
												return
													MAKE_YOUNG_PAIR(BGl_symbol2612z00zz__expander_argsz00,
													BgL_arg1608z00_1580);
											}
										}
									}
								else
									{	/* Eval/expdargs.scm 237 */
										if (
											(CAR(BgL_clausez00_13) ==
												BGl_symbol2667z00zz__expander_argsz00))
											{	/* Eval/expdargs.scm 237 */
												BgL_exprza2za2_1546 = BgL_cdrzd2249zd2_1552;
												{	/* Eval/expdargs.scm 248 */
													obj_t BgL_az00_1606;
													obj_t BgL_vz00_1607;

													{	/* Eval/expdargs.scm 248 */

														{	/* Eval/expdargs.scm 248 */

															BgL_az00_1606 =
																BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
														}
													}
													{	/* Eval/expdargs.scm 249 */

														{	/* Eval/expdargs.scm 249 */

															BgL_vz00_1607 =
																BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
														}
													}
													{	/* Eval/expdargs.scm 250 */
														obj_t BgL_arg1637z00_1608;

														{	/* Eval/expdargs.scm 250 */
															obj_t BgL_arg1639z00_1609;
															obj_t BgL_arg1640z00_1610;

															{	/* Eval/expdargs.scm 250 */
																obj_t BgL_arg1641z00_1611;

																BgL_arg1641z00_1611 =
																	MAKE_YOUNG_PAIR(BgL_vz00_1607, BNIL);
																BgL_arg1639z00_1609 =
																	MAKE_YOUNG_PAIR(BgL_az00_1606,
																	BgL_arg1641z00_1611);
															}
															{	/* Eval/expdargs.scm 251 */
																obj_t BgL_arg1642z00_1612;

																{	/* Eval/expdargs.scm 251 */
																	obj_t BgL_arg1643z00_1613;

																	{	/* Eval/expdargs.scm 251 */
																		obj_t BgL_arg1644z00_1614;
																		obj_t BgL_arg1645z00_1615;

																		{	/* Eval/expdargs.scm 251 */
																			obj_t BgL_arg1648z00_1616;

																			BgL_arg1648z00_1616 =
																				MAKE_YOUNG_PAIR(BgL_az00_1606, BNIL);
																			BgL_arg1644z00_1614 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol2676z00zz__expander_argsz00,
																				BgL_arg1648z00_1616);
																		}
																		{	/* Eval/expdargs.scm 252 */
																			obj_t BgL_arg1649z00_1617;
																			obj_t BgL_arg1650z00_1618;

																			{	/* Eval/expdargs.scm 252 */
																				obj_t BgL_arg1651z00_1619;

																				{	/* Eval/expdargs.scm 252 */
																					obj_t BgL_arg1652z00_1620;
																					obj_t BgL_arg1654z00_1621;

																					{	/* Eval/expdargs.scm 252 */
																						obj_t BgL_arg1656z00_1622;
																						obj_t BgL_arg1657z00_1623;

																						{	/* Eval/expdargs.scm 252 */
																							obj_t BgL_arg1658z00_1624;

																							{	/* Eval/expdargs.scm 252 */
																								obj_t BgL_arg1659z00_1625;

																								{	/* Eval/expdargs.scm 252 */
																									obj_t BgL_arg1660z00_1626;

																									BgL_arg1660z00_1626 =
																										MAKE_YOUNG_PAIR
																										(BgL_az00_1606, BNIL);
																									BgL_arg1659z00_1625 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2604z00zz__expander_argsz00,
																										BgL_arg1660z00_1626);
																								}
																								BgL_arg1658z00_1624 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1659z00_1625, BNIL);
																							}
																							BgL_arg1656z00_1622 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2667z00zz__expander_argsz00,
																								BgL_arg1658z00_1624);
																						}
																						{	/* Eval/expdargs.scm 253 */
																							obj_t BgL_arg1661z00_1627;

																							{	/* Eval/expdargs.scm 253 */
																								obj_t BgL_arg1662z00_1628;

																								BgL_arg1662z00_1628 =
																									MAKE_YOUNG_PAIR(BgL_az00_1606,
																									BNIL);
																								BgL_arg1661z00_1627 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2678z00zz__expander_argsz00,
																									BgL_arg1662z00_1628);
																							}
																							BgL_arg1657z00_1623 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1661z00_1627, BNIL);
																						}
																						BgL_arg1652z00_1620 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1656z00_1622,
																							BgL_arg1657z00_1623);
																					}
																					{	/* Eval/expdargs.scm 254 */
																						obj_t BgL_arg1663z00_1629;

																						{	/* Eval/expdargs.scm 254 */
																							obj_t BgL_arg1664z00_1630;

																							{	/* Eval/expdargs.scm 254 */
																								obj_t BgL_arg1665z00_1631;
																								obj_t BgL_arg1667z00_1632;

																								{	/* Eval/expdargs.scm 254 */
																									obj_t BgL_arg1668z00_1633;

																									BgL_arg1668z00_1633 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2642z00zz__expander_argsz00,
																										BNIL);
																									BgL_arg1665z00_1631 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2600z00zz__expander_argsz00,
																										BgL_arg1668z00_1633);
																								}
																								{	/* Eval/expdargs.scm 254 */
																									obj_t BgL_arg1669z00_1634;
																									obj_t BgL_arg1672z00_1635;

																									{	/* Eval/expdargs.scm 254 */
																										obj_t BgL_arg1675z00_1636;

																										BgL_arg1675z00_1636 =
																											MAKE_YOUNG_PAIR
																											(BgL_az00_1606, BNIL);
																										BgL_arg1669z00_1634 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2648z00zz__expander_argsz00,
																											BgL_arg1675z00_1636);
																									}
																									{	/* Eval/expdargs.scm 254 */
																										obj_t BgL_arg1683z00_1637;

																										{	/* Eval/expdargs.scm 254 */
																											obj_t BgL_arg1684z00_1638;

																											BgL_arg1684z00_1638 =
																												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																												(BgL_exprza2za2_1546,
																												BNIL);
																											BgL_arg1683z00_1637 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2674z00zz__expander_argsz00,
																												BgL_arg1684z00_1638);
																										}
																										BgL_arg1672z00_1635 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1683z00_1637,
																											BNIL);
																									}
																									BgL_arg1667z00_1632 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1669z00_1634,
																										BgL_arg1672z00_1635);
																								}
																								BgL_arg1664z00_1630 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1665z00_1631,
																									BgL_arg1667z00_1632);
																							}
																							BgL_arg1663z00_1629 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2602z00zz__expander_argsz00,
																								BgL_arg1664z00_1630);
																						}
																						BgL_arg1654z00_1621 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1663z00_1629, BNIL);
																					}
																					BgL_arg1651z00_1619 =
																						MAKE_YOUNG_PAIR(BgL_arg1652z00_1620,
																						BgL_arg1654z00_1621);
																				}
																				BgL_arg1649z00_1617 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2656z00zz__expander_argsz00,
																					BgL_arg1651z00_1619);
																			}
																			{	/* Eval/expdargs.scm 255 */
																				obj_t BgL_arg1685z00_1639;

																				{	/* Eval/expdargs.scm 255 */
																					obj_t BgL_arg1686z00_1640;

																					{	/* Eval/expdargs.scm 255 */
																						obj_t BgL_arg1687z00_1641;
																						obj_t BgL_arg1688z00_1642;

																						{	/* Eval/expdargs.scm 255 */
																							obj_t BgL_arg1691z00_1643;

																							BgL_arg1691z00_1643 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2646z00zz__expander_argsz00,
																								BNIL);
																							BgL_arg1687z00_1641 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2600z00zz__expander_argsz00,
																								BgL_arg1691z00_1643);
																						}
																						{	/* Eval/expdargs.scm 255 */
																							obj_t BgL_arg1692z00_1644;

																							BgL_arg1692z00_1644 =
																								MAKE_YOUNG_PAIR(BgL_vz00_1607,
																								BNIL);
																							BgL_arg1688z00_1642 =
																								MAKE_YOUNG_PAIR(BgL_az00_1606,
																								BgL_arg1692z00_1644);
																						}
																						BgL_arg1686z00_1640 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1687z00_1641,
																							BgL_arg1688z00_1642);
																					}
																					BgL_arg1685z00_1639 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol2602z00zz__expander_argsz00,
																						BgL_arg1686z00_1640);
																				}
																				BgL_arg1650z00_1618 =
																					MAKE_YOUNG_PAIR(BgL_arg1685z00_1639,
																					BNIL);
																			}
																			BgL_arg1645z00_1615 =
																				MAKE_YOUNG_PAIR(BgL_arg1649z00_1617,
																				BgL_arg1650z00_1618);
																		}
																		BgL_arg1643z00_1613 =
																			MAKE_YOUNG_PAIR(BgL_arg1644z00_1614,
																			BgL_arg1645z00_1615);
																	}
																	BgL_arg1642z00_1612 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2610z00zz__expander_argsz00,
																		BgL_arg1643z00_1613);
																}
																BgL_arg1640z00_1610 =
																	MAKE_YOUNG_PAIR(BgL_arg1642z00_1612, BNIL);
															}
															BgL_arg1637z00_1608 =
																MAKE_YOUNG_PAIR(BgL_arg1639z00_1609,
																BgL_arg1640z00_1610);
														}
														return
															MAKE_YOUNG_PAIR
															(BGl_symbol2612z00zz__expander_argsz00,
															BgL_arg1637z00_1608);
													}
												}
											}
										else
											{	/* Eval/expdargs.scm 237 */
												if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(CAR
														(BgL_clausez00_13)))
													{	/* Eval/expdargs.scm 237 */
														return
															BGl_makezd2optzd2parserz00zz__expander_argsz00
															(BgL_clausez00_13, BgL_otablez00_14);
													}
												else
													{	/* Eval/expdargs.scm 237 */
														return
															BGl_expandzd2errorzd2zz__expandz00
															(BGl_string2586z00zz__expander_argsz00,
															BGl_string2671z00zz__expander_argsz00,
															BgL_clausez00_13);
													}
											}
									}
							}
					}
				else
					{	/* Eval/expdargs.scm 237 */
						return
							BGl_expandzd2errorzd2zz__expandz00
							(BGl_string2586z00zz__expander_argsz00,
							BGl_string2671z00zz__expander_argsz00, BgL_clausez00_13);
					}
			}
		}

	}



/* bind-option! */
	obj_t BGl_bindzd2optionz12zc0zz__expander_argsz00(obj_t BgL_otablez00_15,
		obj_t BgL_oidz00_16, obj_t BgL_clausez00_17)
	{
		{	/* Eval/expdargs.scm 264 */
			{	/* Eval/expdargs.scm 265 */
				obj_t BgL_oldz00_1647;

				BgL_oldz00_1647 =
					BGl_hashtablezd2getzd2zz__hashz00(BgL_otablez00_15, BgL_oidz00_16);
				if (CBOOL(BgL_oldz00_1647))
					{	/* Eval/expdargs.scm 267 */
						obj_t BgL_list1693z00_1648;

						{	/* Eval/expdargs.scm 267 */
							obj_t BgL_arg1695z00_1649;

							{	/* Eval/expdargs.scm 267 */
								obj_t BgL_arg1696z00_1650;

								{	/* Eval/expdargs.scm 267 */
									obj_t BgL_arg1697z00_1651;

									{	/* Eval/expdargs.scm 267 */
										obj_t BgL_arg1698z00_1652;

										{	/* Eval/expdargs.scm 267 */
											obj_t BgL_arg1699z00_1653;

											{	/* Eval/expdargs.scm 267 */
												obj_t BgL_arg1700z00_1654;

												{	/* Eval/expdargs.scm 267 */
													obj_t BgL_arg1701z00_1655;

													{	/* Eval/expdargs.scm 267 */
														obj_t BgL_arg1702z00_1656;

														BgL_arg1702z00_1656 =
															MAKE_YOUNG_PAIR(BgL_clausez00_17, BNIL);
														BgL_arg1701z00_1655 =
															MAKE_YOUNG_PAIR
															(BGl_string2680z00zz__expander_argsz00,
															BgL_arg1702z00_1656);
													}
													BgL_arg1700z00_1654 =
														MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)),
														BgL_arg1701z00_1655);
												}
												BgL_arg1699z00_1653 =
													MAKE_YOUNG_PAIR(BgL_oldz00_1647, BgL_arg1700z00_1654);
											}
											BgL_arg1698z00_1652 =
												MAKE_YOUNG_PAIR(BGl_string2680z00zz__expander_argsz00,
												BgL_arg1699z00_1653);
										}
										BgL_arg1697z00_1651 =
											MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)),
											BgL_arg1698z00_1652);
									}
									BgL_arg1696z00_1650 =
										MAKE_YOUNG_PAIR(BGl_string2681z00zz__expander_argsz00,
										BgL_arg1697z00_1651);
								}
								BgL_arg1695z00_1649 =
									MAKE_YOUNG_PAIR(BgL_oidz00_16, BgL_arg1696z00_1650);
							}
							BgL_list1693z00_1648 =
								MAKE_YOUNG_PAIR(BGl_symbol2634z00zz__expander_argsz00,
								BgL_arg1695z00_1649);
						}
						return BGl_warningz00zz__errorz00(BgL_list1693z00_1648);
					}
				else
					{	/* Eval/expdargs.scm 266 */
						return
							BGl_hashtablezd2putz12zc0zz__hashz00(BgL_otablez00_15,
							BgL_oidz00_16, BgL_clausez00_17);
					}
			}
		}

	}



/* make-opt-parser */
	obj_t BGl_makezd2optzd2parserz00zz__expander_argsz00(obj_t BgL_clausez00_18,
		obj_t BgL_otablez00_19)
	{
		{	/* Eval/expdargs.scm 275 */
			{	/* Eval/expdargs.scm 276 */
				obj_t BgL_optz00_1657;

				BgL_optz00_1657 = CAR(((obj_t) BgL_clausez00_18));
				{	/* Eval/expdargs.scm 276 */
					obj_t BgL_oz00_1658;

					BgL_oz00_1658 = CAR(((obj_t) BgL_optz00_1657));
					{	/* Eval/expdargs.scm 277 */

						if (STRINGP(BgL_oz00_1658))
							{	/* Eval/expdargs.scm 279 */
								return
									BGl_makezd2simplezd2optzd2parserzd2zz__expander_argsz00
									(BgL_clausez00_18, BgL_otablez00_19);
							}
						else
							{	/* Eval/expdargs.scm 281 */
								bool_t BgL_test2861z00_4026;

								if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_oz00_1658))
									{
										obj_t BgL_l1130z00_1673;

										BgL_l1130z00_1673 = BgL_oz00_1658;
									BgL_zc3z04anonymousza31710ze3z87_1674:
										if (NULLP(BgL_l1130z00_1673))
											{	/* Eval/expdargs.scm 281 */
												BgL_test2861z00_4026 = ((bool_t) 1);
											}
										else
											{	/* Eval/expdargs.scm 281 */
												bool_t BgL_test2864z00_4031;

												{	/* Eval/expdargs.scm 281 */
													obj_t BgL_tmpz00_4032;

													BgL_tmpz00_4032 = CAR(((obj_t) BgL_l1130z00_1673));
													BgL_test2864z00_4031 = STRINGP(BgL_tmpz00_4032);
												}
												if (BgL_test2864z00_4031)
													{
														obj_t BgL_l1130z00_4036;

														BgL_l1130z00_4036 =
															CDR(((obj_t) BgL_l1130z00_1673));
														BgL_l1130z00_1673 = BgL_l1130z00_4036;
														goto BgL_zc3z04anonymousza31710ze3z87_1674;
													}
												else
													{	/* Eval/expdargs.scm 281 */
														BgL_test2861z00_4026 = ((bool_t) 0);
													}
											}
									}
								else
									{	/* Eval/expdargs.scm 281 */
										BgL_test2861z00_4026 = ((bool_t) 0);
									}
								if (BgL_test2861z00_4026)
									{	/* Eval/expdargs.scm 281 */
										return
											BGl_makezd2multiplezd2optzd2parserzd2zz__expander_argsz00
											(BgL_clausez00_18, BgL_otablez00_19);
									}
								else
									{	/* Eval/expdargs.scm 281 */
										return
											BGl_expandzd2errorzd2zz__expandz00
											(BGl_string2586z00zz__expander_argsz00,
											BGl_string2607z00zz__expander_argsz00, BgL_clausez00_18);
									}
							}
					}
				}
			}
		}

	}



/* make-simple-opt-parser */
	obj_t BGl_makezd2simplezd2optzd2parserzd2zz__expander_argsz00(obj_t
		BgL_clausez00_20, obj_t BgL_otablez00_21)
	{
		{	/* Eval/expdargs.scm 289 */
			{	/* Eval/expdargs.scm 290 */
				obj_t BgL_optz00_1681;

				BgL_optz00_1681 = CAR(((obj_t) BgL_clausez00_20));
				{	/* Eval/expdargs.scm 290 */
					obj_t BgL_oz00_1682;

					BgL_oz00_1682 = CAR(((obj_t) BgL_optz00_1681));
					{	/* Eval/expdargs.scm 291 */
						obj_t BgL_argsz00_1683;

						BgL_argsz00_1683 =
							BGl_fetchzd2optionzd2argumentsz00zz__expander_argsz00
							(BgL_optz00_1681);
						{	/* Eval/expdargs.scm 292 */
							obj_t BgL_exprza2za2_1684;

							BgL_exprza2za2_1684 = CDR(((obj_t) BgL_clausez00_20));
							{	/* Eval/expdargs.scm 293 */

								{	/* Eval/expdargs.scm 294 */
									obj_t BgL_oidz00_1685;

									BgL_oidz00_1685 =
										BGl_fetchzd2optionzd2embedzd2argumentzd2zz__expander_argsz00
										(BgL_oz00_1682);
									{	/* Eval/expdargs.scm 295 */
										obj_t BgL_aidz00_1686;

										{	/* Eval/expdargs.scm 297 */
											int BgL_tmpz00_4049;

											BgL_tmpz00_4049 = (int) (((long) 1));
											BgL_aidz00_1686 = BGL_MVALUES_VAL(BgL_tmpz00_4049);
										}
										{	/* Eval/expdargs.scm 297 */
											bool_t BgL_test2865z00_4052;

											if (CBOOL(BgL_aidz00_1686))
												{	/* Eval/expdargs.scm 297 */
													BgL_test2865z00_4052 = PAIRP(BgL_argsz00_1683);
												}
											else
												{	/* Eval/expdargs.scm 297 */
													BgL_test2865z00_4052 = ((bool_t) 0);
												}
											if (BgL_test2865z00_4052)
												{	/* Eval/expdargs.scm 297 */
													return
														BGl_expandzd2errorzd2zz__expandz00
														(BGl_string2586z00zz__expander_argsz00,
														BGl_string2670z00zz__expander_argsz00,
														BgL_clausez00_20);
												}
											else
												{	/* Eval/expdargs.scm 297 */
													if (STRINGP(BgL_aidz00_1686))
														{	/* Eval/expdargs.scm 299 */
															BGl_bindzd2optionz12zc0zz__expander_argsz00
																(BgL_otablez00_21, BgL_oidz00_1685,
																BgL_clausez00_20);
															{	/* Eval/expdargs.scm 301 */
																obj_t BgL_az00_1689;
																obj_t BgL_vz00_1690;
																long BgL_oidlz00_1691;

																{	/* Eval/expdargs.scm 301 */

																	{	/* Eval/expdargs.scm 301 */

																		BgL_az00_1689 =
																			BGl_gensymz00zz__r4_symbols_6_4z00
																			(BFALSE);
																}}
																{	/* Eval/expdargs.scm 302 */

																	{	/* Eval/expdargs.scm 302 */

																		BgL_vz00_1690 =
																			BGl_gensymz00zz__r4_symbols_6_4z00
																			(BFALSE);
																}}
																BgL_oidlz00_1691 =
																	STRING_LENGTH(((obj_t) BgL_oidz00_1685));
																{	/* Eval/expdargs.scm 304 */
																	obj_t BgL_arg1716z00_1692;

																	{	/* Eval/expdargs.scm 304 */
																		obj_t BgL_arg1717z00_1693;
																		obj_t BgL_arg1719z00_1694;

																		{	/* Eval/expdargs.scm 304 */
																			obj_t BgL_arg1720z00_1695;

																			BgL_arg1720z00_1695 =
																				MAKE_YOUNG_PAIR(BgL_vz00_1690, BNIL);
																			BgL_arg1717z00_1693 =
																				MAKE_YOUNG_PAIR(BgL_az00_1689,
																				BgL_arg1720z00_1695);
																		}
																		{	/* Eval/expdargs.scm 305 */
																			obj_t BgL_arg1721z00_1696;

																			{	/* Eval/expdargs.scm 305 */
																				obj_t BgL_arg1722z00_1697;

																				{	/* Eval/expdargs.scm 305 */
																					obj_t BgL_arg1723z00_1698;
																					obj_t BgL_arg1725z00_1699;

																					{	/* Eval/expdargs.scm 305 */
																						obj_t BgL_arg1726z00_1700;

																						{	/* Eval/expdargs.scm 305 */
																							obj_t BgL_arg1727z00_1701;
																							obj_t BgL_arg1728z00_1702;

																							{	/* Eval/expdargs.scm 305 */
																								obj_t BgL_arg1729z00_1703;

																								BgL_arg1729z00_1703 =
																									MAKE_YOUNG_PAIR(BgL_az00_1689,
																									BNIL);
																								BgL_arg1727z00_1701 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2676z00zz__expander_argsz00,
																									BgL_arg1729z00_1703);
																							}
																							{	/* Eval/expdargs.scm 306 */
																								obj_t BgL_arg1730z00_1704;

																								{	/* Eval/expdargs.scm 306 */
																									obj_t BgL_arg1731z00_1705;

																									{	/* Eval/expdargs.scm 306 */
																										obj_t BgL_arg1732z00_1706;

																										{	/* Eval/expdargs.scm 306 */
																											obj_t BgL_arg1733z00_1707;
																											obj_t BgL_arg1734z00_1708;

																											{	/* Eval/expdargs.scm 306 */
																												obj_t
																													BgL_arg1736z00_1709;
																												BgL_arg1736z00_1709 =
																													MAKE_YOUNG_PAIR
																													(BgL_az00_1689, BNIL);
																												BgL_arg1733z00_1707 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2604z00zz__expander_argsz00,
																													BgL_arg1736z00_1709);
																											}
																											BgL_arg1734z00_1708 =
																												MAKE_YOUNG_PAIR(BINT
																												(BgL_oidlz00_1691),
																												BNIL);
																											BgL_arg1732z00_1706 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1733z00_1707,
																												BgL_arg1734z00_1708);
																										}
																										BgL_arg1731z00_1705 =
																											MAKE_YOUNG_PAIR
																											(BgL_oidz00_1685,
																											BgL_arg1732z00_1706);
																									}
																									BgL_arg1730z00_1704 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2682z00zz__expander_argsz00,
																										BgL_arg1731z00_1705);
																								}
																								BgL_arg1728z00_1702 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1730z00_1704, BNIL);
																							}
																							BgL_arg1726z00_1700 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1727z00_1701,
																								BgL_arg1728z00_1702);
																						}
																						BgL_arg1723z00_1698 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2684z00zz__expander_argsz00,
																							BgL_arg1726z00_1700);
																					}
																					{	/* Eval/expdargs.scm 307 */
																						obj_t BgL_arg1737z00_1710;
																						obj_t BgL_arg1738z00_1711;

																						{	/* Eval/expdargs.scm 307 */
																							obj_t BgL_arg1739z00_1712;

																							{	/* Eval/expdargs.scm 307 */
																								obj_t BgL_arg1740z00_1713;
																								obj_t BgL_arg1741z00_1714;

																								{	/* Eval/expdargs.scm 307 */
																									obj_t BgL_arg1742z00_1715;
																									obj_t BgL_arg1743z00_1716;

																									{	/* Eval/expdargs.scm 307 */
																										obj_t BgL_arg1744z00_1717;
																										obj_t BgL_arg1745z00_1718;

																										BgL_arg1744z00_1717 =
																											bstring_to_symbol
																											(BgL_aidz00_1686);
																										{	/* Eval/expdargs.scm 308 */
																											obj_t BgL_arg1746z00_1719;

																											{	/* Eval/expdargs.scm 308 */
																												obj_t
																													BgL_arg1747z00_1720;
																												{	/* Eval/expdargs.scm 308 */
																													obj_t
																														BgL_arg1748z00_1721;
																													obj_t
																														BgL_arg1750z00_1722;
																													{	/* Eval/expdargs.scm 308 */
																														obj_t
																															BgL_arg1751z00_1723;
																														BgL_arg1751z00_1723
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_az00_1689,
																															BNIL);
																														BgL_arg1748z00_1721
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2604z00zz__expander_argsz00,
																															BgL_arg1751z00_1723);
																													}
																													{	/* Eval/expdargs.scm 310 */
																														obj_t
																															BgL_arg1752z00_1724;
																														{	/* Eval/expdargs.scm 310 */
																															obj_t
																																BgL_arg1754z00_1725;
																															{	/* Eval/expdargs.scm 310 */
																																obj_t
																																	BgL_arg1755z00_1726;
																																{	/* Eval/expdargs.scm 310 */
																																	obj_t
																																		BgL_arg1756z00_1727;
																																	{	/* Eval/expdargs.scm 310 */
																																		obj_t
																																			BgL_arg1757z00_1728;
																																		BgL_arg1757z00_1728
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_az00_1689,
																																			BNIL);
																																		BgL_arg1756z00_1727
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_symbol2604z00zz__expander_argsz00,
																																			BgL_arg1757z00_1728);
																																	}
																																	BgL_arg1755z00_1726
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1756z00_1727,
																																		BNIL);
																																}
																																BgL_arg1754z00_1725
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_symbol2686z00zz__expander_argsz00,
																																	BgL_arg1755z00_1726);
																															}
																															BgL_arg1752z00_1724
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1754z00_1725,
																																BNIL);
																														}
																														BgL_arg1750z00_1722
																															=
																															MAKE_YOUNG_PAIR
																															(BINT
																															(BgL_oidlz00_1691),
																															BgL_arg1752z00_1724);
																													}
																													BgL_arg1747z00_1720 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1748z00_1721,
																														BgL_arg1750z00_1722);
																												}
																												BgL_arg1746z00_1719 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2688z00zz__expander_argsz00,
																													BgL_arg1747z00_1720);
																											}
																											BgL_arg1745z00_1718 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1746z00_1719,
																												BNIL);
																										}
																										BgL_arg1742z00_1715 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1744z00_1717,
																											BgL_arg1745z00_1718);
																									}
																									{	/* Eval/expdargs.scm 311 */
																										obj_t BgL_arg1759z00_1729;
																										obj_t BgL_arg1760z00_1730;

																										{	/* Eval/expdargs.scm 311 */
																											obj_t BgL_arg1761z00_1731;

																											{	/* Eval/expdargs.scm 311 */
																												obj_t
																													BgL_arg1762z00_1732;
																												{	/* Eval/expdargs.scm 311 */
																													obj_t
																														BgL_arg1763z00_1733;
																													BgL_arg1763z00_1733 =
																														MAKE_YOUNG_PAIR
																														(BgL_az00_1689,
																														BNIL);
																													BgL_arg1762z00_1732 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol2648z00zz__expander_argsz00,
																														BgL_arg1763z00_1733);
																												}
																												BgL_arg1761z00_1731 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1762z00_1732,
																													BNIL);
																											}
																											BgL_arg1759z00_1729 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2690z00zz__expander_argsz00,
																												BgL_arg1761z00_1731);
																										}
																										{	/* Eval/expdargs.scm 312 */
																											obj_t BgL_arg1764z00_1734;

																											{	/* Eval/expdargs.scm 312 */
																												obj_t
																													BgL_arg1765z00_1735;
																												{	/* Eval/expdargs.scm 312 */
																													obj_t
																														BgL_arg1766z00_1736;
																													{	/* Eval/expdargs.scm 312 */
																														obj_t
																															BgL_arg1768z00_1737;
																														BgL_arg1768z00_1737
																															=
																															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																															(BgL_exprza2za2_1684,
																															BNIL);
																														BgL_arg1766z00_1736
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2674z00zz__expander_argsz00,
																															BgL_arg1768z00_1737);
																													}
																													BgL_arg1765z00_1735 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1766z00_1736,
																														BNIL);
																												}
																												BgL_arg1764z00_1734 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2636z00zz__expander_argsz00,
																													BgL_arg1765z00_1735);
																											}
																											BgL_arg1760z00_1730 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1764z00_1734,
																												BNIL);
																										}
																										BgL_arg1743z00_1716 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1759z00_1729,
																											BgL_arg1760z00_1730);
																									}
																									BgL_arg1740z00_1713 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1742z00_1715,
																										BgL_arg1743z00_1716);
																								}
																								{	/* Eval/expdargs.scm 313 */
																									obj_t BgL_arg1769z00_1738;

																									{	/* Eval/expdargs.scm 313 */
																										obj_t BgL_arg1770z00_1739;

																										{	/* Eval/expdargs.scm 313 */
																											obj_t BgL_arg1771z00_1740;
																											obj_t BgL_arg1772z00_1741;

																											{	/* Eval/expdargs.scm 313 */
																												obj_t
																													BgL_arg1773z00_1742;
																												BgL_arg1773z00_1742 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2642z00zz__expander_argsz00,
																													BNIL);
																												BgL_arg1771z00_1740 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2600z00zz__expander_argsz00,
																													BgL_arg1773z00_1742);
																											}
																											{	/* Eval/expdargs.scm 313 */
																												obj_t
																													BgL_arg1774z00_1743;
																												BgL_arg1774z00_1743 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2636z00zz__expander_argsz00,
																													BNIL);
																												BgL_arg1772z00_1741 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2690z00zz__expander_argsz00,
																													BgL_arg1774z00_1743);
																											}
																											BgL_arg1770z00_1739 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1771z00_1740,
																												BgL_arg1772z00_1741);
																										}
																										BgL_arg1769z00_1738 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2602z00zz__expander_argsz00,
																											BgL_arg1770z00_1739);
																									}
																									BgL_arg1741z00_1714 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1769z00_1738, BNIL);
																								}
																								BgL_arg1739z00_1712 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1740z00_1713,
																									BgL_arg1741z00_1714);
																							}
																							BgL_arg1737z00_1710 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2658z00zz__expander_argsz00,
																								BgL_arg1739z00_1712);
																						}
																						{	/* Eval/expdargs.scm 314 */
																							obj_t BgL_arg1775z00_1744;

																							{	/* Eval/expdargs.scm 314 */
																								obj_t BgL_arg1776z00_1745;

																								{	/* Eval/expdargs.scm 314 */
																									obj_t BgL_arg1777z00_1746;
																									obj_t BgL_arg1778z00_1747;

																									{	/* Eval/expdargs.scm 314 */
																										obj_t BgL_arg1779z00_1748;

																										BgL_arg1779z00_1748 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2646z00zz__expander_argsz00,
																											BNIL);
																										BgL_arg1777z00_1746 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2600z00zz__expander_argsz00,
																											BgL_arg1779z00_1748);
																									}
																									{	/* Eval/expdargs.scm 314 */
																										obj_t BgL_arg1780z00_1749;

																										BgL_arg1780z00_1749 =
																											MAKE_YOUNG_PAIR
																											(BgL_vz00_1690, BNIL);
																										BgL_arg1778z00_1747 =
																											MAKE_YOUNG_PAIR
																											(BgL_az00_1689,
																											BgL_arg1780z00_1749);
																									}
																									BgL_arg1776z00_1745 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1777z00_1746,
																										BgL_arg1778z00_1747);
																								}
																								BgL_arg1775z00_1744 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2602z00zz__expander_argsz00,
																									BgL_arg1776z00_1745);
																							}
																							BgL_arg1738z00_1711 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1775z00_1744, BNIL);
																						}
																						BgL_arg1725z00_1699 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1737z00_1710,
																							BgL_arg1738z00_1711);
																					}
																					BgL_arg1722z00_1697 =
																						MAKE_YOUNG_PAIR(BgL_arg1723z00_1698,
																						BgL_arg1725z00_1699);
																				}
																				BgL_arg1721z00_1696 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2610z00zz__expander_argsz00,
																					BgL_arg1722z00_1697);
																			}
																			BgL_arg1719z00_1694 =
																				MAKE_YOUNG_PAIR(BgL_arg1721z00_1696,
																				BNIL);
																		}
																		BgL_arg1716z00_1692 =
																			MAKE_YOUNG_PAIR(BgL_arg1717z00_1693,
																			BgL_arg1719z00_1694);
																	}
																	return
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2612z00zz__expander_argsz00,
																		BgL_arg1716z00_1692);
																}
															}
														}
													else
														{	/* Eval/expdargs.scm 299 */
															BGl_bindzd2optionz12zc0zz__expander_argsz00
																(BgL_otablez00_21, BgL_oidz00_1685,
																BgL_clausez00_20);
															{	/* Eval/expdargs.scm 317 */
																obj_t BgL_az00_1752;
																obj_t BgL_vz00_1753;
																obj_t BgL_naz00_1754;

																{	/* Eval/expdargs.scm 317 */

																	{	/* Eval/expdargs.scm 317 */

																		BgL_az00_1752 =
																			BGl_gensymz00zz__r4_symbols_6_4z00
																			(BFALSE);
																	}
																}
																{	/* Eval/expdargs.scm 318 */

																	{	/* Eval/expdargs.scm 318 */

																		BgL_vz00_1753 =
																			BGl_gensymz00zz__r4_symbols_6_4z00
																			(BFALSE);
																	}
																}
																BgL_naz00_1754 =
																	BGl_symbol2690z00zz__expander_argsz00;
																{	/* Eval/expdargs.scm 320 */
																	obj_t BgL_arg1781z00_1755;

																	{	/* Eval/expdargs.scm 320 */
																		obj_t BgL_arg1782z00_1756;
																		obj_t BgL_arg1783z00_1757;

																		{	/* Eval/expdargs.scm 320 */
																			obj_t BgL_arg1784z00_1758;

																			BgL_arg1784z00_1758 =
																				MAKE_YOUNG_PAIR(BgL_vz00_1753, BNIL);
																			BgL_arg1782z00_1756 =
																				MAKE_YOUNG_PAIR(BgL_az00_1752,
																				BgL_arg1784z00_1758);
																		}
																		{	/* Eval/expdargs.scm 321 */
																			obj_t BgL_arg1786z00_1759;

																			{	/* Eval/expdargs.scm 321 */
																				obj_t BgL_arg1787z00_1760;

																				{	/* Eval/expdargs.scm 321 */
																					obj_t BgL_arg1788z00_1761;
																					obj_t BgL_arg1789z00_1762;

																					{	/* Eval/expdargs.scm 321 */
																						obj_t BgL_arg1790z00_1763;

																						{	/* Eval/expdargs.scm 321 */
																							obj_t BgL_arg1791z00_1764;
																							obj_t BgL_arg1792z00_1765;

																							{	/* Eval/expdargs.scm 321 */
																								obj_t BgL_arg1794z00_1766;

																								BgL_arg1794z00_1766 =
																									MAKE_YOUNG_PAIR(BgL_az00_1752,
																									BNIL);
																								BgL_arg1791z00_1764 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2676z00zz__expander_argsz00,
																									BgL_arg1794z00_1766);
																							}
																							{	/* Eval/expdargs.scm 321 */
																								obj_t BgL_arg1795z00_1767;

																								{	/* Eval/expdargs.scm 321 */
																									obj_t BgL_arg1796z00_1768;

																									{	/* Eval/expdargs.scm 321 */
																										obj_t BgL_arg1797z00_1769;

																										{	/* Eval/expdargs.scm 321 */
																											obj_t BgL_arg1798z00_1770;

																											{	/* Eval/expdargs.scm 321 */
																												obj_t
																													BgL_arg1799z00_1771;
																												BgL_arg1799z00_1771 =
																													MAKE_YOUNG_PAIR
																													(BgL_az00_1752, BNIL);
																												BgL_arg1798z00_1770 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2604z00zz__expander_argsz00,
																													BgL_arg1799z00_1771);
																											}
																											BgL_arg1797z00_1769 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1798z00_1770,
																												BNIL);
																										}
																										BgL_arg1796z00_1768 =
																											MAKE_YOUNG_PAIR
																											(BgL_oidz00_1685,
																											BgL_arg1797z00_1769);
																									}
																									BgL_arg1795z00_1767 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2692z00zz__expander_argsz00,
																										BgL_arg1796z00_1768);
																								}
																								BgL_arg1792z00_1765 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1795z00_1767, BNIL);
																							}
																							BgL_arg1790z00_1763 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1791z00_1764,
																								BgL_arg1792z00_1765);
																						}
																						BgL_arg1788z00_1761 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2684z00zz__expander_argsz00,
																							BgL_arg1790z00_1763);
																					}
																					{	/* Eval/expdargs.scm 322 */
																						obj_t BgL_arg1800z00_1772;
																						obj_t BgL_arg1801z00_1773;

																						{	/* Eval/expdargs.scm 322 */
																							obj_t BgL_arg1803z00_1774;

																							{	/* Eval/expdargs.scm 322 */
																								obj_t BgL_arg1805z00_1775;
																								obj_t BgL_arg1806z00_1776;

																								{	/* Eval/expdargs.scm 322 */
																									obj_t BgL_arg1807z00_1777;
																									obj_t BgL_arg1808z00_1778;

																									BgL_arg1807z00_1777 =
																										BGl_bindzd2optionzd2argumentsz00zz__expander_argsz00
																										(BgL_argsz00_1683,
																										BgL_az00_1752,
																										BgL_naz00_1754,
																										BgL_clausez00_20);
																									{	/* Eval/expdargs.scm 323 */
																										obj_t BgL_arg1809z00_1779;

																										{	/* Eval/expdargs.scm 323 */
																											obj_t BgL_arg1810z00_1780;

																											{	/* Eval/expdargs.scm 323 */
																												obj_t
																													BgL_arg1811z00_1781;
																												{	/* Eval/expdargs.scm 323 */
																													obj_t
																														BgL_arg1812z00_1782;
																													BgL_arg1812z00_1782 =
																														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																														(BgL_exprza2za2_1684,
																														BNIL);
																													BgL_arg1811z00_1781 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol2674z00zz__expander_argsz00,
																														BgL_arg1812z00_1782);
																												}
																												BgL_arg1810z00_1780 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1811z00_1781,
																													BNIL);
																											}
																											BgL_arg1809z00_1779 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2636z00zz__expander_argsz00,
																												BgL_arg1810z00_1780);
																										}
																										BgL_arg1808z00_1778 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1809z00_1779,
																											BNIL);
																									}
																									BgL_arg1805z00_1775 =
																										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg1807z00_1777,
																										BgL_arg1808z00_1778);
																								}
																								{	/* Eval/expdargs.scm 324 */
																									obj_t BgL_arg1813z00_1783;

																									{	/* Eval/expdargs.scm 324 */
																										obj_t BgL_arg1814z00_1784;

																										{	/* Eval/expdargs.scm 324 */
																											obj_t BgL_arg1815z00_1785;
																											obj_t BgL_arg1816z00_1786;

																											{	/* Eval/expdargs.scm 324 */
																												obj_t
																													BgL_arg1817z00_1787;
																												BgL_arg1817z00_1787 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2642z00zz__expander_argsz00,
																													BNIL);
																												BgL_arg1815z00_1785 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2600z00zz__expander_argsz00,
																													BgL_arg1817z00_1787);
																											}
																											{	/* Eval/expdargs.scm 324 */
																												obj_t
																													BgL_arg1818z00_1788;
																												BgL_arg1818z00_1788 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2636z00zz__expander_argsz00,
																													BNIL);
																												BgL_arg1816z00_1786 =
																													MAKE_YOUNG_PAIR
																													(BgL_naz00_1754,
																													BgL_arg1818z00_1788);
																											}
																											BgL_arg1814z00_1784 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1815z00_1785,
																												BgL_arg1816z00_1786);
																										}
																										BgL_arg1813z00_1783 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2602z00zz__expander_argsz00,
																											BgL_arg1814z00_1784);
																									}
																									BgL_arg1806z00_1776 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1813z00_1783, BNIL);
																								}
																								BgL_arg1803z00_1774 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1805z00_1775,
																									BgL_arg1806z00_1776);
																							}
																							BgL_arg1800z00_1772 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2658z00zz__expander_argsz00,
																								BgL_arg1803z00_1774);
																						}
																						{	/* Eval/expdargs.scm 325 */
																							obj_t BgL_arg1819z00_1789;

																							{	/* Eval/expdargs.scm 325 */
																								obj_t BgL_arg1820z00_1790;

																								{	/* Eval/expdargs.scm 325 */
																									obj_t BgL_arg1821z00_1791;
																									obj_t BgL_arg1822z00_1792;

																									{	/* Eval/expdargs.scm 325 */
																										obj_t BgL_arg1823z00_1793;

																										BgL_arg1823z00_1793 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2646z00zz__expander_argsz00,
																											BNIL);
																										BgL_arg1821z00_1791 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2600z00zz__expander_argsz00,
																											BgL_arg1823z00_1793);
																									}
																									{	/* Eval/expdargs.scm 325 */
																										obj_t BgL_arg1824z00_1794;

																										BgL_arg1824z00_1794 =
																											MAKE_YOUNG_PAIR
																											(BgL_vz00_1753, BNIL);
																										BgL_arg1822z00_1792 =
																											MAKE_YOUNG_PAIR
																											(BgL_az00_1752,
																											BgL_arg1824z00_1794);
																									}
																									BgL_arg1820z00_1790 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1821z00_1791,
																										BgL_arg1822z00_1792);
																								}
																								BgL_arg1819z00_1789 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2602z00zz__expander_argsz00,
																									BgL_arg1820z00_1790);
																							}
																							BgL_arg1801z00_1773 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1819z00_1789, BNIL);
																						}
																						BgL_arg1789z00_1762 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1800z00_1772,
																							BgL_arg1801z00_1773);
																					}
																					BgL_arg1787z00_1760 =
																						MAKE_YOUNG_PAIR(BgL_arg1788z00_1761,
																						BgL_arg1789z00_1762);
																				}
																				BgL_arg1786z00_1759 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2610z00zz__expander_argsz00,
																					BgL_arg1787z00_1760);
																			}
																			BgL_arg1783z00_1757 =
																				MAKE_YOUNG_PAIR(BgL_arg1786z00_1759,
																				BNIL);
																		}
																		BgL_arg1781z00_1755 =
																			MAKE_YOUNG_PAIR(BgL_arg1782z00_1756,
																			BgL_arg1783z00_1757);
																	}
																	return
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2612z00zz__expander_argsz00,
																		BgL_arg1781z00_1755);
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



/* make-multiple-opt-parser */
	obj_t BGl_makezd2multiplezd2optzd2parserzd2zz__expander_argsz00(obj_t
		BgL_clausez00_22, obj_t BgL_otablez00_23)
	{
		{	/* Eval/expdargs.scm 330 */
			{	/* Eval/expdargs.scm 331 */
				obj_t BgL_optz00_1797;

				BgL_optz00_1797 = CAR(((obj_t) BgL_clausez00_22));
				{	/* Eval/expdargs.scm 331 */
					obj_t BgL_ozb2zb2_1798;

					BgL_ozb2zb2_1798 = CAR(((obj_t) BgL_optz00_1797));
					{	/* Eval/expdargs.scm 332 */
						obj_t BgL_argsz00_1799;

						BgL_argsz00_1799 =
							BGl_fetchzd2optionzd2argumentsz00zz__expander_argsz00
							(BgL_optz00_1797);
						{	/* Eval/expdargs.scm 333 */
							obj_t BgL_exprza2za2_1800;

							BgL_exprza2za2_1800 = CDR(((obj_t) BgL_clausez00_22));
							{	/* Eval/expdargs.scm 334 */

								{	/* Eval/expdargs.scm 335 */
									obj_t BgL_oidzb2zb2_1801;

									{
										obj_t BgL_ozb2zb2_1998;
										obj_t BgL_oidzb2zb2_1999;
										obj_t BgL_aidzb2zb2_2000;

										BgL_ozb2zb2_1998 = BgL_ozb2zb2_1798;
										BgL_oidzb2zb2_1999 = BNIL;
										BgL_aidzb2zb2_2000 = BNIL;
									BgL_zc3z04anonymousza31987ze3z87_2001:
										if (NULLP(BgL_ozb2zb2_1998))
											{	/* Eval/expdargs.scm 340 */
												obj_t BgL_val0_1133z00_2003;
												obj_t BgL_val1_1134z00_2004;

												BgL_val0_1133z00_2003 =
													bgl_reverse_bang(BgL_oidzb2zb2_1999);
												BgL_val1_1134z00_2004 =
													bgl_reverse_bang(BgL_aidzb2zb2_2000);
												{	/* Eval/expdargs.scm 340 */
													int BgL_res2470z00_2828;

													{	/* Eval/expdargs.scm 340 */
														int BgL_tmpz00_4180;

														BgL_tmpz00_4180 = (int) (((long) 2));
														BgL_res2470z00_2828 =
															BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4180);
													} BgL_res2470z00_2828;
												}
												{	/* Eval/expdargs.scm 340 */
													int BgL_tmpz00_4183;

													BgL_tmpz00_4183 = (int) (((long) 1));
													BGL_MVALUES_VAL_SET(BgL_tmpz00_4183,
														BgL_val1_1134z00_2004);
												}
												BgL_oidzb2zb2_1801 = BgL_val0_1133z00_2003;
											}
										else
											{	/* Eval/expdargs.scm 341 */
												obj_t BgL_oidz00_2005;

												{	/* Eval/expdargs.scm 342 */
													obj_t BgL_arg1992z00_2010;

													BgL_arg1992z00_2010 = CAR(((obj_t) BgL_ozb2zb2_1998));
													BgL_oidz00_2005 =
														BGl_fetchzd2optionzd2embedzd2argumentzd2zz__expander_argsz00
														(BgL_arg1992z00_2010);
												}
												{	/* Eval/expdargs.scm 342 */
													obj_t BgL_aidz00_2006;

													{	/* Eval/expdargs.scm 343 */
														int BgL_tmpz00_4189;

														BgL_tmpz00_4189 = (int) (((long) 1));
														BgL_aidz00_2006 = BGL_MVALUES_VAL(BgL_tmpz00_4189);
													}
													{	/* Eval/expdargs.scm 343 */
														obj_t BgL_arg1989z00_2007;
														obj_t BgL_arg1990z00_2008;
														obj_t BgL_arg1991z00_2009;

														BgL_arg1989z00_2007 =
															CDR(((obj_t) BgL_ozb2zb2_1998));
														BgL_arg1990z00_2008 =
															MAKE_YOUNG_PAIR(BgL_oidz00_2005,
															BgL_oidzb2zb2_1999);
														BgL_arg1991z00_2009 =
															MAKE_YOUNG_PAIR(BgL_aidz00_2006,
															BgL_aidzb2zb2_2000);
														{
															obj_t BgL_aidzb2zb2_4198;
															obj_t BgL_oidzb2zb2_4197;
															obj_t BgL_ozb2zb2_4196;

															BgL_ozb2zb2_4196 = BgL_arg1989z00_2007;
															BgL_oidzb2zb2_4197 = BgL_arg1990z00_2008;
															BgL_aidzb2zb2_4198 = BgL_arg1991z00_2009;
															BgL_aidzb2zb2_2000 = BgL_aidzb2zb2_4198;
															BgL_oidzb2zb2_1999 = BgL_oidzb2zb2_4197;
															BgL_ozb2zb2_1998 = BgL_ozb2zb2_4196;
															goto BgL_zc3z04anonymousza31987ze3z87_2001;
														}
													}
												}
											}
									}
									{	/* Eval/expdargs.scm 336 */
										obj_t BgL_aidzb2zb2_1802;

										{	/* Eval/expdargs.scm 345 */
											int BgL_tmpz00_4199;

											BgL_tmpz00_4199 = (int) (((long) 1));
											BgL_aidzb2zb2_1802 = BGL_MVALUES_VAL(BgL_tmpz00_4199);
										}
										{	/* Eval/expdargs.scm 345 */
											bool_t BgL_test2869z00_4202;

											if (PAIRP(BgL_aidzb2zb2_1802))
												{
													obj_t BgL_l1135z00_2847;

													{	/* Eval/expdargs.scm 345 */
														obj_t BgL_tmpz00_4205;

														BgL_l1135z00_2847 = BgL_aidzb2zb2_1802;
													BgL_zc3z04anonymousza31985ze3z87_2846:
														if (NULLP(BgL_l1135z00_2847))
															{	/* Eval/expdargs.scm 345 */
																BgL_tmpz00_4205 = BFALSE;
															}
														else
															{	/* Eval/expdargs.scm 345 */
																obj_t BgL__ortest_1137z00_2853;

																BgL__ortest_1137z00_2853 =
																	CAR(((obj_t) BgL_l1135z00_2847));
																if (CBOOL(BgL__ortest_1137z00_2853))
																	{	/* Eval/expdargs.scm 345 */
																		BgL_tmpz00_4205 = BgL__ortest_1137z00_2853;
																	}
																else
																	{
																		obj_t BgL_l1135z00_4212;

																		BgL_l1135z00_4212 =
																			CDR(((obj_t) BgL_l1135z00_2847));
																		BgL_l1135z00_2847 = BgL_l1135z00_4212;
																		goto BgL_zc3z04anonymousza31985ze3z87_2846;
																	}
															}
														BgL_test2869z00_4202 = CBOOL(BgL_tmpz00_4205);
													}
												}
											else
												{	/* Eval/expdargs.scm 345 */
													BgL_test2869z00_4202 = ((bool_t) 0);
												}
											if (BgL_test2869z00_4202)
												{	/* Eval/expdargs.scm 345 */
													if (NULLP(BgL_argsz00_1799))
														{	/* Eval/expdargs.scm 359 */
															{
																obj_t BgL_l1145z00_2873;

																BgL_l1145z00_2873 = BgL_oidzb2zb2_1801;
															BgL_zc3z04anonymousza31831ze3z87_2872:
																if (PAIRP(BgL_l1145z00_2873))
																	{	/* Eval/expdargs.scm 360 */
																		BGl_bindzd2optionz12zc0zz__expander_argsz00
																			(BgL_otablez00_23, CAR(BgL_l1145z00_2873),
																			BgL_clausez00_22);
																		{
																			obj_t BgL_l1145z00_4222;

																			BgL_l1145z00_4222 =
																				CDR(BgL_l1145z00_2873);
																			BgL_l1145z00_2873 = BgL_l1145z00_4222;
																			goto
																				BgL_zc3z04anonymousza31831ze3z87_2872;
																		}
																	}
																else
																	{	/* Eval/expdargs.scm 360 */
																		((bool_t) 1);
																	}
															}
															{	/* Eval/expdargs.scm 361 */
																obj_t BgL_az00_1821;
																obj_t BgL_vz00_1822;
																obj_t BgL_naz00_1823;

																{	/* Eval/expdargs.scm 361 */

																	{	/* Eval/expdargs.scm 361 */

																		BgL_az00_1821 =
																			BGl_gensymz00zz__r4_symbols_6_4z00
																			(BFALSE);
																	}
																}
																{	/* Eval/expdargs.scm 362 */

																	{	/* Eval/expdargs.scm 362 */

																		BgL_vz00_1822 =
																			BGl_gensymz00zz__r4_symbols_6_4z00
																			(BFALSE);
																	}
																}
																BgL_naz00_1823 =
																	BGl_symbol2690z00zz__expander_argsz00;
																{	/* Eval/expdargs.scm 364 */
																	obj_t BgL_arg1835z00_1824;

																	{	/* Eval/expdargs.scm 364 */
																		obj_t BgL_arg1836z00_1825;
																		obj_t BgL_arg1838z00_1826;

																		{	/* Eval/expdargs.scm 364 */
																			obj_t BgL_arg1840z00_1827;

																			BgL_arg1840z00_1827 =
																				MAKE_YOUNG_PAIR(BgL_vz00_1822, BNIL);
																			BgL_arg1836z00_1825 =
																				MAKE_YOUNG_PAIR(BgL_az00_1821,
																				BgL_arg1840z00_1827);
																		}
																		{	/* Eval/expdargs.scm 366 */
																			obj_t BgL_arg1841z00_1828;

																			{	/* Eval/expdargs.scm 366 */
																				obj_t BgL_arg1842z00_1829;

																				{	/* Eval/expdargs.scm 366 */
																					obj_t BgL_arg1845z00_1830;
																					obj_t BgL_arg1846z00_1831;

																					{	/* Eval/expdargs.scm 366 */
																						obj_t BgL_arg1847z00_1832;
																						obj_t BgL_arg1848z00_1833;

																						{	/* Eval/expdargs.scm 366 */
																							obj_t BgL_arg1850z00_1834;

																							BgL_arg1850z00_1834 =
																								MAKE_YOUNG_PAIR(BgL_az00_1821,
																								BNIL);
																							BgL_arg1847z00_1832 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2676z00zz__expander_argsz00,
																								BgL_arg1850z00_1834);
																						}
																						{	/* Eval/expdargs.scm 367 */
																							obj_t BgL_arg1851z00_1835;

																							{	/* Eval/expdargs.scm 367 */
																								obj_t BgL_arg1852z00_1836;

																								{	/* Eval/expdargs.scm 367 */
																									obj_t BgL_arg1853z00_1837;
																									obj_t BgL_arg1855z00_1838;

																									if (NULLP(BgL_oidzb2zb2_1801))
																										{	/* Eval/expdargs.scm 367 */
																											BgL_arg1853z00_1837 =
																												BNIL;
																										}
																									else
																										{	/* Eval/expdargs.scm 367 */
																											obj_t
																												BgL_head1149z00_1842;
																											{	/* Eval/expdargs.scm 367 */
																												obj_t
																													BgL_res2480z00_2884;
																												BgL_res2480z00_2884 =
																													MAKE_YOUNG_PAIR(BNIL,
																													BNIL);
																												BgL_head1149z00_1842 =
																													BgL_res2480z00_2884;
																											}
																											{
																												obj_t
																													BgL_ll1147z00_1844;
																												obj_t
																													BgL_ll1148z00_1845;
																												obj_t
																													BgL_tail1150z00_1846;
																												BgL_ll1147z00_1844 =
																													BgL_oidzb2zb2_1801;
																												BgL_ll1148z00_1845 =
																													BgL_aidzb2zb2_1802;
																												BgL_tail1150z00_1846 =
																													BgL_head1149z00_1842;
																											BgL_zc3z04anonymousza31857ze3z87_1847:
																												if (NULLP
																													(BgL_ll1147z00_1844))
																													{	/* Eval/expdargs.scm 367 */
																														BgL_arg1853z00_1837
																															=
																															CDR
																															(BgL_head1149z00_1842);
																													}
																												else
																													{	/* Eval/expdargs.scm 367 */
																														obj_t
																															BgL_newtail1151z00_1849;
																														{	/* Eval/expdargs.scm 367 */
																															obj_t
																																BgL_arg1862z00_1852;
																															{	/* Eval/expdargs.scm 367 */
																																obj_t
																																	BgL_oidz00_1853;
																																obj_t
																																	BgL_aidz00_1854;
																																BgL_oidz00_1853
																																	=
																																	CAR(((obj_t)
																																		BgL_ll1147z00_1844));
																																BgL_aidz00_1854
																																	=
																																	CAR(((obj_t)
																																		BgL_ll1148z00_1845));
																																if (CBOOL
																																	(BgL_aidz00_1854))
																																	{	/* Eval/expdargs.scm 369 */
																																		long
																																			BgL_oidlz00_1855;
																																		BgL_oidlz00_1855
																																			=
																																			STRING_LENGTH
																																			(((obj_t)
																																				BgL_oidz00_1853));
																																		{	/* Eval/expdargs.scm 370 */
																																			obj_t
																																				BgL_arg1863z00_1856;
																																			obj_t
																																				BgL_arg1865z00_1857;
																																			{	/* Eval/expdargs.scm 370 */
																																				obj_t
																																					BgL_arg1866z00_1858;
																																				{	/* Eval/expdargs.scm 370 */
																																					obj_t
																																						BgL_arg1868z00_1859;
																																					{	/* Eval/expdargs.scm 370 */
																																						obj_t
																																							BgL_arg1870z00_1860;
																																						obj_t
																																							BgL_arg1871z00_1861;
																																						{	/* Eval/expdargs.scm 370 */
																																							obj_t
																																								BgL_arg1872z00_1862;
																																							BgL_arg1872z00_1862
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_az00_1821,
																																								BNIL);
																																							BgL_arg1870z00_1860
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2604z00zz__expander_argsz00,
																																								BgL_arg1872z00_1862);
																																						}
																																						BgL_arg1871z00_1861
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BINT
																																							(BgL_oidlz00_1855),
																																							BNIL);
																																						BgL_arg1868z00_1859
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1870z00_1860,
																																							BgL_arg1871z00_1861);
																																					}
																																					BgL_arg1866z00_1858
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_oidz00_1853,
																																						BgL_arg1868z00_1859);
																																				}
																																				BgL_arg1863z00_1856
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2682z00zz__expander_argsz00,
																																					BgL_arg1866z00_1858);
																																			}
																																			{	/* Eval/expdargs.scm 371 */
																																				obj_t
																																					BgL_arg1873z00_1863;
																																				{	/* Eval/expdargs.scm 371 */
																																					obj_t
																																						BgL_arg1874z00_1864;
																																					{	/* Eval/expdargs.scm 371 */
																																						obj_t
																																							BgL_arg1876z00_1865;
																																						obj_t
																																							BgL_arg1877z00_1866;
																																						{	/* Eval/expdargs.scm 371 */
																																							obj_t
																																								BgL_arg1878z00_1867;
																																							obj_t
																																								BgL_arg1879z00_1868;
																																							{	/* Eval/expdargs.scm 371 */
																																								obj_t
																																									BgL_arg1881z00_1869;
																																								obj_t
																																									BgL_arg1882z00_1870;
																																								{	/* Eval/expdargs.scm 371 */
																																									obj_t
																																										BgL_res2483z00_2892;
																																									BgL_res2483z00_2892
																																										=
																																										bstring_to_symbol
																																										(
																																										((obj_t) BgL_aidz00_1854));
																																									BgL_arg1881z00_1869
																																										=
																																										BgL_res2483z00_2892;
																																								}
																																								{	/* Eval/expdargs.scm 373 */
																																									obj_t
																																										BgL_arg1883z00_1871;
																																									{	/* Eval/expdargs.scm 373 */
																																										obj_t
																																											BgL_arg1884z00_1872;
																																										{	/* Eval/expdargs.scm 373 */
																																											obj_t
																																												BgL_arg1885z00_1873;
																																											obj_t
																																												BgL_arg1886z00_1874;
																																											{	/* Eval/expdargs.scm 373 */
																																												obj_t
																																													BgL_arg1887z00_1875;
																																												BgL_arg1887z00_1875
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BgL_az00_1821,
																																													BNIL);
																																												BgL_arg1885z00_1873
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BGl_symbol2604z00zz__expander_argsz00,
																																													BgL_arg1887z00_1875);
																																											}
																																											{	/* Eval/expdargs.scm 375 */
																																												obj_t
																																													BgL_arg1888z00_1876;
																																												{	/* Eval/expdargs.scm 375 */
																																													obj_t
																																														BgL_arg1889z00_1877;
																																													{	/* Eval/expdargs.scm 375 */
																																														obj_t
																																															BgL_arg1891z00_1878;
																																														{	/* Eval/expdargs.scm 375 */
																																															obj_t
																																																BgL_arg1892z00_1879;
																																															{	/* Eval/expdargs.scm 375 */
																																																obj_t
																																																	BgL_arg1893z00_1880;
																																																BgL_arg1893z00_1880
																																																	=
																																																	MAKE_YOUNG_PAIR
																																																	(BgL_az00_1821,
																																																	BNIL);
																																																BgL_arg1892z00_1879
																																																	=
																																																	MAKE_YOUNG_PAIR
																																																	(BGl_symbol2604z00zz__expander_argsz00,
																																																	BgL_arg1893z00_1880);
																																															}
																																															BgL_arg1891z00_1878
																																																=
																																																MAKE_YOUNG_PAIR
																																																(BgL_arg1892z00_1879,
																																																BNIL);
																																														}
																																														BgL_arg1889z00_1877
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BGl_symbol2686z00zz__expander_argsz00,
																																															BgL_arg1891z00_1878);
																																													}
																																													BgL_arg1888z00_1876
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BgL_arg1889z00_1877,
																																														BNIL);
																																												}
																																												BgL_arg1886z00_1874
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BINT
																																													(BgL_oidlz00_1855),
																																													BgL_arg1888z00_1876);
																																											}
																																											BgL_arg1884z00_1872
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_arg1885z00_1873,
																																												BgL_arg1886z00_1874);
																																										}
																																										BgL_arg1883z00_1871
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BGl_symbol2688z00zz__expander_argsz00,
																																											BgL_arg1884z00_1872);
																																									}
																																									BgL_arg1882z00_1870
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_arg1883z00_1871,
																																										BNIL);
																																								}
																																								BgL_arg1878z00_1867
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg1881z00_1869,
																																									BgL_arg1882z00_1870);
																																							}
																																							{	/* Eval/expdargs.scm 376 */
																																								obj_t
																																									BgL_arg1895z00_1881;
																																								obj_t
																																									BgL_arg1896z00_1882;
																																								BgL_arg1895z00_1881
																																									=
																																									BGl_bindzd2optionzd2argumentsz00zz__expander_argsz00
																																									(BgL_argsz00_1799,
																																									BgL_az00_1821,
																																									BgL_naz00_1823,
																																									BgL_clausez00_22);
																																								{	/* Eval/expdargs.scm 377 */
																																									obj_t
																																										BgL_arg1897z00_1883;
																																									{	/* Eval/expdargs.scm 377 */
																																										obj_t
																																											BgL_arg1898z00_1884;
																																										{	/* Eval/expdargs.scm 377 */
																																											obj_t
																																												BgL_arg1901z00_1885;
																																											{	/* Eval/expdargs.scm 377 */
																																												obj_t
																																													BgL_arg1902z00_1886;
																																												BgL_arg1902z00_1886
																																													=
																																													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																													(BgL_exprza2za2_1800,
																																													BNIL);
																																												BgL_arg1901z00_1885
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BGl_symbol2674z00zz__expander_argsz00,
																																													BgL_arg1902z00_1886);
																																											}
																																											BgL_arg1898z00_1884
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_arg1901z00_1885,
																																												BNIL);
																																										}
																																										BgL_arg1897z00_1883
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BGl_symbol2636z00zz__expander_argsz00,
																																											BgL_arg1898z00_1884);
																																									}
																																									BgL_arg1896z00_1882
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_arg1897z00_1883,
																																										BNIL);
																																								}
																																								BgL_arg1879z00_1868
																																									=
																																									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																									(BgL_arg1895z00_1881,
																																									BgL_arg1896z00_1882);
																																							}
																																							BgL_arg1876z00_1865
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_arg1878z00_1867,
																																								BgL_arg1879z00_1868);
																																						}
																																						{	/* Eval/expdargs.scm 378 */
																																							obj_t
																																								BgL_arg1903z00_1887;
																																							{	/* Eval/expdargs.scm 378 */
																																								obj_t
																																									BgL_arg1904z00_1888;
																																								{	/* Eval/expdargs.scm 378 */
																																									obj_t
																																										BgL_arg1905z00_1889;
																																									obj_t
																																										BgL_arg1906z00_1890;
																																									{	/* Eval/expdargs.scm 378 */
																																										obj_t
																																											BgL_arg1907z00_1891;
																																										BgL_arg1907z00_1891
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BGl_symbol2642z00zz__expander_argsz00,
																																											BNIL);
																																										BgL_arg1905z00_1889
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BGl_symbol2600z00zz__expander_argsz00,
																																											BgL_arg1907z00_1891);
																																									}
																																									{	/* Eval/expdargs.scm 378 */
																																										obj_t
																																											BgL_arg1908z00_1892;
																																										BgL_arg1908z00_1892
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BGl_symbol2636z00zz__expander_argsz00,
																																											BNIL);
																																										BgL_arg1906z00_1890
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_naz00_1823,
																																											BgL_arg1908z00_1892);
																																									}
																																									BgL_arg1904z00_1888
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_arg1905z00_1889,
																																										BgL_arg1906z00_1890);
																																								}
																																								BgL_arg1903z00_1887
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2602z00zz__expander_argsz00,
																																									BgL_arg1904z00_1888);
																																							}
																																							BgL_arg1877z00_1866
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_arg1903z00_1887,
																																								BNIL);
																																						}
																																						BgL_arg1874z00_1864
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1876z00_1865,
																																							BgL_arg1877z00_1866);
																																					}
																																					BgL_arg1873z00_1863
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2658z00zz__expander_argsz00,
																																						BgL_arg1874z00_1864);
																																				}
																																				BgL_arg1865z00_1857
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1873z00_1863,
																																					BNIL);
																																			}
																																			BgL_arg1862z00_1852
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1863z00_1856,
																																				BgL_arg1865z00_1857);
																																	}}
																																else
																																	{	/* Eval/expdargs.scm 379 */
																																		obj_t
																																			BgL_arg1909z00_1893;
																																		{	/* Eval/expdargs.scm 379 */
																																			obj_t
																																				BgL_arg1910z00_1894;
																																			{	/* Eval/expdargs.scm 379 */
																																				obj_t
																																					BgL_arg1911z00_1895;
																																				{	/* Eval/expdargs.scm 379 */
																																					obj_t
																																						BgL_arg1912z00_1896;
																																					obj_t
																																						BgL_arg1913z00_1897;
																																					{	/* Eval/expdargs.scm 379 */
																																						obj_t
																																							BgL_arg1914z00_1898;
																																						BgL_arg1914z00_1898
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol2646z00zz__expander_argsz00,
																																							BNIL);
																																						BgL_arg1912z00_1896
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol2600z00zz__expander_argsz00,
																																							BgL_arg1914z00_1898);
																																					}
																																					{	/* Eval/expdargs.scm 379 */
																																						obj_t
																																							BgL_arg1915z00_1899;
																																						BgL_arg1915z00_1899
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_vz00_1822,
																																							BNIL);
																																						BgL_arg1913z00_1897
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_az00_1821,
																																							BgL_arg1915z00_1899);
																																					}
																																					BgL_arg1911z00_1895
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg1912z00_1896,
																																						BgL_arg1913z00_1897);
																																				}
																																				BgL_arg1910z00_1894
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2602z00zz__expander_argsz00,
																																					BgL_arg1911z00_1895);
																																			}
																																			BgL_arg1909z00_1893
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1910z00_1894,
																																				BNIL);
																																		}
																																		BgL_arg1862z00_1852
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_symbol2667z00zz__expander_argsz00,
																																			BgL_arg1909z00_1893);
																																	}
																															}
																															{	/* Eval/expdargs.scm 367 */
																																obj_t
																																	BgL_res2484z00_2893;
																																BgL_res2484z00_2893
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1862z00_1852,
																																	BNIL);
																																BgL_newtail1151z00_1849
																																	=
																																	BgL_res2484z00_2893;
																															}
																														}
																														SET_CDR
																															(BgL_tail1150z00_1846,
																															BgL_newtail1151z00_1849);
																														{	/* Eval/expdargs.scm 367 */
																															obj_t
																																BgL_arg1859z00_1850;
																															obj_t
																																BgL_arg1861z00_1851;
																															BgL_arg1859z00_1850
																																=
																																CDR(((obj_t)
																																	BgL_ll1147z00_1844));
																															BgL_arg1861z00_1851
																																=
																																CDR(((obj_t)
																																	BgL_ll1148z00_1845));
																															{
																																obj_t
																																	BgL_tail1150z00_4301;
																																obj_t
																																	BgL_ll1148z00_4300;
																																obj_t
																																	BgL_ll1147z00_4299;
																																BgL_ll1147z00_4299
																																	=
																																	BgL_arg1859z00_1850;
																																BgL_ll1148z00_4300
																																	=
																																	BgL_arg1861z00_1851;
																																BgL_tail1150z00_4301
																																	=
																																	BgL_newtail1151z00_1849;
																																BgL_tail1150z00_1846
																																	=
																																	BgL_tail1150z00_4301;
																																BgL_ll1148z00_1845
																																	=
																																	BgL_ll1148z00_4300;
																																BgL_ll1147z00_1844
																																	=
																																	BgL_ll1147z00_4299;
																																goto
																																	BgL_zc3z04anonymousza31857ze3z87_1847;
																															}
																														}
																													}
																											}
																										}
																									{	/* Eval/expdargs.scm 381 */
																										obj_t BgL_arg1916z00_1901;

																										{	/* Eval/expdargs.scm 381 */
																											obj_t BgL_arg1917z00_1902;

																											{	/* Eval/expdargs.scm 381 */
																												obj_t
																													BgL_arg1918z00_1903;
																												{	/* Eval/expdargs.scm 381 */
																													obj_t
																														BgL_arg1919z00_1904;
																													{	/* Eval/expdargs.scm 381 */
																														obj_t
																															BgL_arg1920z00_1905;
																														obj_t
																															BgL_arg1921z00_1906;
																														{	/* Eval/expdargs.scm 381 */
																															obj_t
																																BgL_arg1923z00_1907;
																															BgL_arg1923z00_1907
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2646z00zz__expander_argsz00,
																																BNIL);
																															BgL_arg1920z00_1905
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2600z00zz__expander_argsz00,
																																BgL_arg1923z00_1907);
																														}
																														{	/* Eval/expdargs.scm 381 */
																															obj_t
																																BgL_arg1924z00_1908;
																															BgL_arg1924z00_1908
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_vz00_1822,
																																BNIL);
																															BgL_arg1921z00_1906
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_az00_1821,
																																BgL_arg1924z00_1908);
																														}
																														BgL_arg1919z00_1904
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1920z00_1905,
																															BgL_arg1921z00_1906);
																													}
																													BgL_arg1918z00_1903 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol2602z00zz__expander_argsz00,
																														BgL_arg1919z00_1904);
																												}
																												BgL_arg1917z00_1902 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1918z00_1903,
																													BNIL);
																											}
																											BgL_arg1916z00_1901 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2667z00zz__expander_argsz00,
																												BgL_arg1917z00_1902);
																										}
																										BgL_arg1855z00_1838 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1916z00_1901,
																											BNIL);
																									}
																									BgL_arg1852z00_1836 =
																										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg1853z00_1837,
																										BgL_arg1855z00_1838);
																								}
																								BgL_arg1851z00_1835 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2694z00zz__expander_argsz00,
																									BgL_arg1852z00_1836);
																							}
																							BgL_arg1848z00_1833 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1851z00_1835, BNIL);
																						}
																						BgL_arg1845z00_1830 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1847z00_1832,
																							BgL_arg1848z00_1833);
																					}
																					{	/* Eval/expdargs.scm 383 */
																						obj_t BgL_arg1925z00_1909;

																						{	/* Eval/expdargs.scm 383 */
																							obj_t BgL_arg1926z00_1910;

																							{	/* Eval/expdargs.scm 383 */
																								obj_t BgL_arg1927z00_1911;

																								{	/* Eval/expdargs.scm 383 */
																									obj_t BgL_arg1928z00_1912;

																									{	/* Eval/expdargs.scm 383 */
																										obj_t BgL_arg1929z00_1913;
																										obj_t BgL_arg1930z00_1914;

																										{	/* Eval/expdargs.scm 383 */
																											obj_t BgL_arg1931z00_1915;

																											BgL_arg1931z00_1915 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2646z00zz__expander_argsz00,
																												BNIL);
																											BgL_arg1929z00_1913 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2600z00zz__expander_argsz00,
																												BgL_arg1931z00_1915);
																										}
																										{	/* Eval/expdargs.scm 383 */
																											obj_t BgL_arg1932z00_1916;

																											BgL_arg1932z00_1916 =
																												MAKE_YOUNG_PAIR
																												(BgL_vz00_1822, BNIL);
																											BgL_arg1930z00_1914 =
																												MAKE_YOUNG_PAIR
																												(BgL_az00_1821,
																												BgL_arg1932z00_1916);
																										}
																										BgL_arg1928z00_1912 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1929z00_1913,
																											BgL_arg1930z00_1914);
																									}
																									BgL_arg1927z00_1911 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2602z00zz__expander_argsz00,
																										BgL_arg1928z00_1912);
																								}
																								BgL_arg1926z00_1910 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1927z00_1911, BNIL);
																							}
																							BgL_arg1925z00_1909 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2667z00zz__expander_argsz00,
																								BgL_arg1926z00_1910);
																						}
																						BgL_arg1846z00_1831 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1925z00_1909, BNIL);
																					}
																					BgL_arg1842z00_1829 =
																						MAKE_YOUNG_PAIR(BgL_arg1845z00_1830,
																						BgL_arg1846z00_1831);
																				}
																				BgL_arg1841z00_1828 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2694z00zz__expander_argsz00,
																					BgL_arg1842z00_1829);
																			}
																			BgL_arg1838z00_1826 =
																				MAKE_YOUNG_PAIR(BgL_arg1841z00_1828,
																				BNIL);
																		}
																		BgL_arg1835z00_1824 =
																			MAKE_YOUNG_PAIR(BgL_arg1836z00_1825,
																			BgL_arg1838z00_1826);
																	}
																	return
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2612z00zz__expander_argsz00,
																		BgL_arg1835z00_1824);
																}
															}
														}
													else
														{	/* Eval/expdargs.scm 359 */
															return
																BGl_expandzd2errorzd2zz__expandz00
																(BGl_string2586z00zz__expander_argsz00,
																BGl_string2670z00zz__expander_argsz00,
																BgL_clausez00_22);
														}
												}
											else
												{	/* Eval/expdargs.scm 345 */
													{
														obj_t BgL_l1138z00_2910;

														BgL_l1138z00_2910 = BgL_oidzb2zb2_1801;
													BgL_zc3z04anonymousza31933ze3z87_2909:
														if (PAIRP(BgL_l1138z00_2910))
															{	/* Eval/expdargs.scm 346 */
																BGl_bindzd2optionz12zc0zz__expander_argsz00
																	(BgL_otablez00_23, CAR(BgL_l1138z00_2910),
																	BgL_clausez00_22);
																{
																	obj_t BgL_l1138z00_4334;

																	BgL_l1138z00_4334 = CDR(BgL_l1138z00_2910);
																	BgL_l1138z00_2910 = BgL_l1138z00_4334;
																	goto BgL_zc3z04anonymousza31933ze3z87_2909;
																}
															}
														else
															{	/* Eval/expdargs.scm 346 */
																((bool_t) 1);
															}
													}
													{	/* Eval/expdargs.scm 347 */
														obj_t BgL_az00_1926;
														obj_t BgL_vz00_1927;
														obj_t BgL_naz00_1928;

														{	/* Eval/expdargs.scm 347 */

															{	/* Eval/expdargs.scm 347 */

																BgL_az00_1926 =
																	BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
															}
														}
														{	/* Eval/expdargs.scm 348 */

															{	/* Eval/expdargs.scm 348 */

																BgL_vz00_1927 =
																	BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
															}
														}
														BgL_naz00_1928 =
															BGl_symbol2690z00zz__expander_argsz00;
														{	/* Eval/expdargs.scm 350 */
															obj_t BgL_arg1936z00_1929;

															{	/* Eval/expdargs.scm 350 */
																obj_t BgL_arg1937z00_1930;
																obj_t BgL_arg1938z00_1931;

																{	/* Eval/expdargs.scm 350 */
																	obj_t BgL_arg1939z00_1932;

																	BgL_arg1939z00_1932 =
																		MAKE_YOUNG_PAIR(BgL_vz00_1927, BNIL);
																	BgL_arg1937z00_1930 =
																		MAKE_YOUNG_PAIR(BgL_az00_1926,
																		BgL_arg1939z00_1932);
																}
																{	/* Eval/expdargs.scm 351 */
																	obj_t BgL_arg1940z00_1933;

																	{	/* Eval/expdargs.scm 351 */
																		obj_t BgL_arg1941z00_1934;

																		{	/* Eval/expdargs.scm 351 */
																			obj_t BgL_arg1942z00_1935;
																			obj_t BgL_arg1943z00_1936;

																			{	/* Eval/expdargs.scm 351 */
																				obj_t BgL_arg1944z00_1937;

																				{	/* Eval/expdargs.scm 351 */
																					obj_t BgL_arg1945z00_1938;
																					obj_t BgL_arg1946z00_1939;

																					{	/* Eval/expdargs.scm 351 */
																						obj_t BgL_arg1947z00_1940;

																						BgL_arg1947z00_1940 =
																							MAKE_YOUNG_PAIR(BgL_az00_1926,
																							BNIL);
																						BgL_arg1945z00_1938 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2676z00zz__expander_argsz00,
																							BgL_arg1947z00_1940);
																					}
																					{	/* Eval/expdargs.scm 352 */
																						obj_t BgL_arg1948z00_1941;

																						{	/* Eval/expdargs.scm 352 */
																							obj_t BgL_arg1949z00_1942;

																							{	/* Eval/expdargs.scm 352 */
																								obj_t BgL_arg1951z00_1943;

																								if (NULLP(BgL_ozb2zb2_1798))
																									{	/* Eval/expdargs.scm 352 */
																										BgL_arg1951z00_1943 = BNIL;
																									}
																								else
																									{	/* Eval/expdargs.scm 352 */
																										obj_t BgL_head1142z00_1946;

																										{	/* Eval/expdargs.scm 352 */
																											obj_t BgL_res2489z00_2921;

																											BgL_res2489z00_2921 =
																												MAKE_YOUNG_PAIR(BNIL,
																												BNIL);
																											BgL_head1142z00_1946 =
																												BgL_res2489z00_2921;
																										}
																										{
																											obj_t BgL_l1140z00_1948;
																											obj_t
																												BgL_tail1143z00_1949;
																											BgL_l1140z00_1948 =
																												BgL_ozb2zb2_1798;
																											BgL_tail1143z00_1949 =
																												BgL_head1142z00_1946;
																										BgL_zc3z04anonymousza31953ze3z87_1950:
																											if (NULLP
																												(BgL_l1140z00_1948))
																												{	/* Eval/expdargs.scm 352 */
																													BgL_arg1951z00_1943 =
																														CDR
																														(BgL_head1142z00_1946);
																												}
																											else
																												{	/* Eval/expdargs.scm 352 */
																													obj_t
																														BgL_newtail1144z00_1952;
																													{	/* Eval/expdargs.scm 352 */
																														obj_t
																															BgL_arg1956z00_1954;
																														{	/* Eval/expdargs.scm 352 */
																															obj_t
																																BgL_oz00_1955;
																															BgL_oz00_1955 =
																																CAR(((obj_t)
																																	BgL_l1140z00_1948));
																															{	/* Eval/expdargs.scm 353 */
																																obj_t
																																	BgL_arg1957z00_1956;
																																{	/* Eval/expdargs.scm 353 */
																																	obj_t
																																		BgL_arg1958z00_1957;
																																	{	/* Eval/expdargs.scm 353 */
																																		obj_t
																																			BgL_arg1959z00_1958;
																																		{	/* Eval/expdargs.scm 353 */
																																			obj_t
																																				BgL_arg1960z00_1959;
																																			BgL_arg1960z00_1959
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_az00_1926,
																																				BNIL);
																																			BgL_arg1959z00_1958
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol2604z00zz__expander_argsz00,
																																				BgL_arg1960z00_1959);
																																		}
																																		BgL_arg1958z00_1957
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1959z00_1958,
																																			BNIL);
																																	}
																																	BgL_arg1957z00_1956
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_oz00_1955,
																																		BgL_arg1958z00_1957);
																																}
																																BgL_arg1956z00_1954
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_symbol2692z00zz__expander_argsz00,
																																	BgL_arg1957z00_1956);
																															}
																														}
																														{	/* Eval/expdargs.scm 352 */
																															obj_t
																																BgL_res2491z00_2925;
																															BgL_res2491z00_2925
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1956z00_1954,
																																BNIL);
																															BgL_newtail1144z00_1952
																																=
																																BgL_res2491z00_2925;
																														}
																													}
																													SET_CDR
																														(BgL_tail1143z00_1949,
																														BgL_newtail1144z00_1952);
																													{	/* Eval/expdargs.scm 352 */
																														obj_t
																															BgL_arg1955z00_1953;
																														BgL_arg1955z00_1953
																															=
																															CDR(((obj_t)
																																BgL_l1140z00_1948));
																														{
																															obj_t
																																BgL_tail1143z00_4360;
																															obj_t
																																BgL_l1140z00_4359;
																															BgL_l1140z00_4359
																																=
																																BgL_arg1955z00_1953;
																															BgL_tail1143z00_4360
																																=
																																BgL_newtail1144z00_1952;
																															BgL_tail1143z00_1949
																																=
																																BgL_tail1143z00_4360;
																															BgL_l1140z00_1948
																																=
																																BgL_l1140z00_4359;
																															goto
																																BgL_zc3z04anonymousza31953ze3z87_1950;
																														}
																													}
																												}
																										}
																									}
																								BgL_arg1949z00_1942 =
																									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg1951z00_1943, BNIL);
																							}
																							BgL_arg1948z00_1941 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2696z00zz__expander_argsz00,
																								BgL_arg1949z00_1942);
																						}
																						BgL_arg1946z00_1939 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1948z00_1941, BNIL);
																					}
																					BgL_arg1944z00_1937 =
																						MAKE_YOUNG_PAIR(BgL_arg1945z00_1938,
																						BgL_arg1946z00_1939);
																				}
																				BgL_arg1942z00_1935 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2684z00zz__expander_argsz00,
																					BgL_arg1944z00_1937);
																			}
																			{	/* Eval/expdargs.scm 355 */
																				obj_t BgL_arg1961z00_1961;
																				obj_t BgL_arg1962z00_1962;

																				{	/* Eval/expdargs.scm 355 */
																					obj_t BgL_arg1963z00_1963;

																					{	/* Eval/expdargs.scm 355 */
																						obj_t BgL_arg1964z00_1964;
																						obj_t BgL_arg1965z00_1965;

																						{	/* Eval/expdargs.scm 355 */
																							obj_t BgL_arg1966z00_1966;
																							obj_t BgL_arg1967z00_1967;

																							BgL_arg1966z00_1966 =
																								BGl_bindzd2optionzd2argumentsz00zz__expander_argsz00
																								(BgL_argsz00_1799,
																								BgL_az00_1926, BgL_naz00_1928,
																								BgL_clausez00_22);
																							{	/* Eval/expdargs.scm 356 */
																								obj_t BgL_arg1968z00_1968;

																								{	/* Eval/expdargs.scm 356 */
																									obj_t BgL_arg1969z00_1969;

																									{	/* Eval/expdargs.scm 356 */
																										obj_t BgL_arg1970z00_1970;

																										{	/* Eval/expdargs.scm 356 */
																											obj_t BgL_arg1971z00_1971;

																											BgL_arg1971z00_1971 =
																												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																												(BgL_exprza2za2_1800,
																												BNIL);
																											BgL_arg1970z00_1970 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2674z00zz__expander_argsz00,
																												BgL_arg1971z00_1971);
																										}
																										BgL_arg1969z00_1969 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1970z00_1970,
																											BNIL);
																									}
																									BgL_arg1968z00_1968 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2636z00zz__expander_argsz00,
																										BgL_arg1969z00_1969);
																								}
																								BgL_arg1967z00_1967 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1968z00_1968, BNIL);
																							}
																							BgL_arg1964z00_1964 =
																								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg1966z00_1966,
																								BgL_arg1967z00_1967);
																						}
																						{	/* Eval/expdargs.scm 357 */
																							obj_t BgL_arg1972z00_1972;

																							{	/* Eval/expdargs.scm 357 */
																								obj_t BgL_arg1973z00_1973;

																								{	/* Eval/expdargs.scm 357 */
																									obj_t BgL_arg1974z00_1974;
																									obj_t BgL_arg1975z00_1975;

																									{	/* Eval/expdargs.scm 357 */
																										obj_t BgL_arg1976z00_1976;

																										BgL_arg1976z00_1976 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2642z00zz__expander_argsz00,
																											BNIL);
																										BgL_arg1974z00_1974 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2600z00zz__expander_argsz00,
																											BgL_arg1976z00_1976);
																									}
																									{	/* Eval/expdargs.scm 357 */
																										obj_t BgL_arg1977z00_1977;

																										BgL_arg1977z00_1977 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2636z00zz__expander_argsz00,
																											BNIL);
																										BgL_arg1975z00_1975 =
																											MAKE_YOUNG_PAIR
																											(BgL_naz00_1928,
																											BgL_arg1977z00_1977);
																									}
																									BgL_arg1973z00_1973 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1974z00_1974,
																										BgL_arg1975z00_1975);
																								}
																								BgL_arg1972z00_1972 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2602z00zz__expander_argsz00,
																									BgL_arg1973z00_1973);
																							}
																							BgL_arg1965z00_1965 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1972z00_1972, BNIL);
																						}
																						BgL_arg1963z00_1963 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1964z00_1964,
																							BgL_arg1965z00_1965);
																					}
																					BgL_arg1961z00_1961 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol2658z00zz__expander_argsz00,
																						BgL_arg1963z00_1963);
																				}
																				{	/* Eval/expdargs.scm 358 */
																					obj_t BgL_arg1979z00_1978;

																					{	/* Eval/expdargs.scm 358 */
																						obj_t BgL_arg1980z00_1979;

																						{	/* Eval/expdargs.scm 358 */
																							obj_t BgL_arg1981z00_1980;
																							obj_t BgL_arg1982z00_1981;

																							{	/* Eval/expdargs.scm 358 */
																								obj_t BgL_arg1983z00_1982;

																								BgL_arg1983z00_1982 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2646z00zz__expander_argsz00,
																									BNIL);
																								BgL_arg1981z00_1980 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2600z00zz__expander_argsz00,
																									BgL_arg1983z00_1982);
																							}
																							{	/* Eval/expdargs.scm 358 */
																								obj_t BgL_arg1984z00_1983;

																								BgL_arg1984z00_1983 =
																									MAKE_YOUNG_PAIR(BgL_vz00_1927,
																									BNIL);
																								BgL_arg1982z00_1981 =
																									MAKE_YOUNG_PAIR(BgL_az00_1926,
																									BgL_arg1984z00_1983);
																							}
																							BgL_arg1980z00_1979 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1981z00_1980,
																								BgL_arg1982z00_1981);
																						}
																						BgL_arg1979z00_1978 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2602z00zz__expander_argsz00,
																							BgL_arg1980z00_1979);
																					}
																					BgL_arg1962z00_1962 =
																						MAKE_YOUNG_PAIR(BgL_arg1979z00_1978,
																						BNIL);
																				}
																				BgL_arg1943z00_1936 =
																					MAKE_YOUNG_PAIR(BgL_arg1961z00_1961,
																					BgL_arg1962z00_1962);
																			}
																			BgL_arg1941z00_1934 =
																				MAKE_YOUNG_PAIR(BgL_arg1942z00_1935,
																				BgL_arg1943z00_1936);
																		}
																		BgL_arg1940z00_1933 =
																			MAKE_YOUNG_PAIR
																			(BGl_symbol2610z00zz__expander_argsz00,
																			BgL_arg1941z00_1934);
																	}
																	BgL_arg1938z00_1931 =
																		MAKE_YOUNG_PAIR(BgL_arg1940z00_1933, BNIL);
																}
																BgL_arg1936z00_1929 =
																	MAKE_YOUNG_PAIR(BgL_arg1937z00_1930,
																	BgL_arg1938z00_1931);
															}
															return
																MAKE_YOUNG_PAIR
																(BGl_symbol2612z00zz__expander_argsz00,
																BgL_arg1936z00_1929);
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



/* fetch-option-arguments */
	obj_t BGl_fetchzd2optionzd2argumentsz00zz__expander_argsz00(obj_t
		BgL_optz00_24)
	{
		{	/* Eval/expdargs.scm 392 */
			{	/* Eval/expdargs.scm 393 */
				obj_t BgL_g1045z00_2012;

				BgL_g1045z00_2012 = CDR(((obj_t) BgL_optz00_24));
				{
					obj_t BgL_iz00_2950;
					obj_t BgL_resz00_2951;

					BgL_iz00_2950 = BgL_g1045z00_2012;
					BgL_resz00_2951 = BNIL;
				BgL_loopz00_2949:
					{	/* Eval/expdargs.scm 396 */
						bool_t BgL_test2881z00_4397;

						if (NULLP(BgL_iz00_2950))
							{	/* Eval/expdargs.scm 396 */
								BgL_test2881z00_4397 = ((bool_t) 1);
							}
						else
							{	/* Eval/expdargs.scm 396 */
								BgL_test2881z00_4397 =
									BGl_helpzd2messagezf3z21zz__expander_argsz00(CAR(
										((obj_t) BgL_iz00_2950)));
							}
						if (BgL_test2881z00_4397)
							{	/* Eval/expdargs.scm 396 */
								return bgl_reverse_bang(BgL_resz00_2951);
							}
						else
							{	/* Eval/expdargs.scm 399 */
								obj_t BgL_arg1997z00_2961;
								obj_t BgL_arg1998z00_2962;

								BgL_arg1997z00_2961 = CDR(((obj_t) BgL_iz00_2950));
								{	/* Eval/expdargs.scm 399 */
									obj_t BgL_arg1999z00_2963;

									BgL_arg1999z00_2963 = CAR(((obj_t) BgL_iz00_2950));
									BgL_arg1998z00_2962 =
										MAKE_YOUNG_PAIR(BgL_arg1999z00_2963, BgL_resz00_2951);
								}
								{
									obj_t BgL_resz00_4410;
									obj_t BgL_iz00_4409;

									BgL_iz00_4409 = BgL_arg1997z00_2961;
									BgL_resz00_4410 = BgL_arg1998z00_2962;
									BgL_resz00_2951 = BgL_resz00_4410;
									BgL_iz00_2950 = BgL_iz00_4409;
									goto BgL_loopz00_2949;
								}
							}
					}
				}
			}
		}

	}



/* bind-option-arguments */
	obj_t BGl_bindzd2optionzd2argumentsz00zz__expander_argsz00(obj_t
		BgL_argsz00_25, obj_t BgL_azb2zb2_26, obj_t BgL_naz00_27,
		obj_t BgL_clausez00_28)
	{
		{	/* Eval/expdargs.scm 404 */
			{	/* Eval/expdargs.scm 405 */
				obj_t BgL_arg2001z00_2027;
				obj_t BgL_arg2002z00_2028;

				{	/* Eval/expdargs.scm 405 */
					obj_t BgL_arg2003z00_2029;

					{	/* Eval/expdargs.scm 405 */
						obj_t BgL_arg2004z00_2030;

						{	/* Eval/expdargs.scm 405 */
							obj_t BgL_arg2005z00_2031;

							BgL_arg2005z00_2031 = MAKE_YOUNG_PAIR(BgL_azb2zb2_26, BNIL);
							BgL_arg2004z00_2030 =
								MAKE_YOUNG_PAIR(BGl_symbol2648z00zz__expander_argsz00,
								BgL_arg2005z00_2031);
						}
						BgL_arg2003z00_2029 = MAKE_YOUNG_PAIR(BgL_arg2004z00_2030, BNIL);
					}
					BgL_arg2001z00_2027 =
						MAKE_YOUNG_PAIR(BgL_naz00_27, BgL_arg2003z00_2029);
				}
				BgL_arg2002z00_2028 =
					BGl_loopze70ze7zz__expander_argsz00(BgL_naz00_27, BgL_clausez00_28,
					BgL_argsz00_25);
				return MAKE_YOUNG_PAIR(BgL_arg2001z00_2027, BgL_arg2002z00_2028);
			}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zz__expander_argsz00(obj_t BgL_naz00_3328,
		obj_t BgL_clausez00_3327, obj_t BgL_argsz00_2033)
	{
		{	/* Eval/expdargs.scm 406 */
			if (PAIRP(BgL_argsz00_2033))
				{	/* Eval/expdargs.scm 408 */
					obj_t BgL_idz00_2036;

					BgL_idz00_2036 =
						BGl_fetchzd2argumentzd2namez00zz__expander_argsz00(CAR
						(BgL_argsz00_2033), BgL_clausez00_3327);
					{	/* Eval/expdargs.scm 409 */
						obj_t BgL_arg2008z00_2037;
						obj_t BgL_arg2010z00_2038;

						{	/* Eval/expdargs.scm 409 */
							obj_t BgL_arg2011z00_2039;
							obj_t BgL_arg2012z00_2040;

							{	/* Eval/expdargs.scm 409 */
								obj_t BgL_res2496z00_2971;

								BgL_res2496z00_2971 =
									bstring_to_symbol(((obj_t) BgL_idz00_2036));
								BgL_arg2011z00_2039 = BgL_res2496z00_2971;
							}
							{	/* Eval/expdargs.scm 410 */
								obj_t BgL_arg2013z00_2041;

								{	/* Eval/expdargs.scm 410 */
									obj_t BgL_arg2014z00_2042;

									{	/* Eval/expdargs.scm 410 */
										obj_t BgL_arg2016z00_2043;
										obj_t BgL_arg2017z00_2044;

										{	/* Eval/expdargs.scm 410 */
											obj_t BgL_arg2018z00_2045;

											BgL_arg2018z00_2045 =
												MAKE_YOUNG_PAIR(BgL_naz00_3328, BNIL);
											BgL_arg2016z00_2043 =
												MAKE_YOUNG_PAIR(BGl_symbol2676z00zz__expander_argsz00,
												BgL_arg2018z00_2045);
										}
										{	/* Eval/expdargs.scm 411 */
											obj_t BgL_arg2020z00_2046;
											obj_t BgL_arg2021z00_2047;

											{	/* Eval/expdargs.scm 411 */
												obj_t BgL_arg2022z00_2048;

												BgL_arg2022z00_2048 =
													MAKE_YOUNG_PAIR(BgL_naz00_3328, BNIL);
												BgL_arg2020z00_2046 =
													MAKE_YOUNG_PAIR(BGl_symbol2604z00zz__expander_argsz00,
													BgL_arg2022z00_2048);
											}
											{	/* Eval/expdargs.scm 412 */
												obj_t BgL_arg2023z00_2049;

												{	/* Eval/expdargs.scm 412 */
													obj_t BgL_arg2026z00_2050;

													{	/* Eval/expdargs.scm 412 */
														obj_t BgL_arg2028z00_2051;
														obj_t BgL_arg2029z00_2052;

														{	/* Eval/expdargs.scm 412 */
															obj_t BgL_arg2031z00_2053;

															BgL_arg2031z00_2053 =
																MAKE_YOUNG_PAIR(CAR(BgL_argsz00_2033), BNIL);
															BgL_arg2028z00_2051 =
																MAKE_YOUNG_PAIR
																(BGl_symbol2600z00zz__expander_argsz00,
																BgL_arg2031z00_2053);
														}
														{	/* Eval/expdargs.scm 412 */
															obj_t BgL_arg2034z00_2055;

															{	/* Eval/expdargs.scm 412 */
																obj_t BgL_arg2035z00_2056;

																{	/* Eval/expdargs.scm 412 */
																	obj_t BgL_arg2036z00_2057;

																	BgL_arg2036z00_2057 =
																		MAKE_YOUNG_PAIR(BgL_clausez00_3327, BNIL);
																	BgL_arg2035z00_2056 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2600z00zz__expander_argsz00,
																		BgL_arg2036z00_2057);
																}
																BgL_arg2034z00_2055 =
																	MAKE_YOUNG_PAIR(BgL_arg2035z00_2056, BNIL);
															}
															BgL_arg2029z00_2052 =
																MAKE_YOUNG_PAIR
																(BGl_string2698z00zz__expander_argsz00,
																BgL_arg2034z00_2055);
														}
														BgL_arg2026z00_2050 =
															MAKE_YOUNG_PAIR(BgL_arg2028z00_2051,
															BgL_arg2029z00_2052);
													}
													BgL_arg2023z00_2049 =
														MAKE_YOUNG_PAIR
														(BGl_symbol2608z00zz__expander_argsz00,
														BgL_arg2026z00_2050);
												}
												BgL_arg2021z00_2047 =
													MAKE_YOUNG_PAIR(BgL_arg2023z00_2049, BNIL);
											}
											BgL_arg2017z00_2044 =
												MAKE_YOUNG_PAIR(BgL_arg2020z00_2046,
												BgL_arg2021z00_2047);
										}
										BgL_arg2014z00_2042 =
											MAKE_YOUNG_PAIR(BgL_arg2016z00_2043, BgL_arg2017z00_2044);
									}
									BgL_arg2013z00_2041 =
										MAKE_YOUNG_PAIR(BGl_symbol2610z00zz__expander_argsz00,
										BgL_arg2014z00_2042);
								}
								BgL_arg2012z00_2040 =
									MAKE_YOUNG_PAIR(BgL_arg2013z00_2041, BNIL);
							}
							BgL_arg2008z00_2037 =
								MAKE_YOUNG_PAIR(BgL_arg2011z00_2039, BgL_arg2012z00_2040);
						}
						{	/* Eval/expdargs.scm 413 */
							obj_t BgL_arg2037z00_2058;
							obj_t BgL_arg2038z00_2059;

							{	/* Eval/expdargs.scm 413 */
								obj_t BgL_arg2039z00_2060;

								{	/* Eval/expdargs.scm 413 */
									obj_t BgL_arg2040z00_2061;

									{	/* Eval/expdargs.scm 413 */
										obj_t BgL_arg2041z00_2062;

										BgL_arg2041z00_2062 = MAKE_YOUNG_PAIR(BgL_naz00_3328, BNIL);
										BgL_arg2040z00_2061 =
											MAKE_YOUNG_PAIR(BGl_symbol2648z00zz__expander_argsz00,
											BgL_arg2041z00_2062);
									}
									BgL_arg2039z00_2060 =
										MAKE_YOUNG_PAIR(BgL_arg2040z00_2061, BNIL);
								}
								BgL_arg2037z00_2058 =
									MAKE_YOUNG_PAIR(BgL_naz00_3328, BgL_arg2039z00_2060);
							}
							BgL_arg2038z00_2059 =
								BGl_loopze70ze7zz__expander_argsz00(BgL_naz00_3328,
								BgL_clausez00_3327, CDR(BgL_argsz00_2033));
							BgL_arg2010z00_2038 =
								MAKE_YOUNG_PAIR(BgL_arg2037z00_2058, BgL_arg2038z00_2059);
						}
						return MAKE_YOUNG_PAIR(BgL_arg2008z00_2037, BgL_arg2010z00_2038);
					}
				}
			else
				{	/* Eval/expdargs.scm 407 */
					return BNIL;
				}
		}

	}



/* fetch-argument-name */
	obj_t BGl_fetchzd2argumentzd2namez00zz__expander_argsz00(obj_t BgL_az00_29,
		obj_t BgL_clausez00_30)
	{
		{	/* Eval/expdargs.scm 420 */
			if (SYMBOLP(BgL_az00_29))
				{	/* Eval/expdargs.scm 423 */
					obj_t BgL_sz00_2067;

					{	/* Eval/expdargs.scm 423 */
						obj_t BgL_res2498z00_2977;

						{	/* Eval/expdargs.scm 423 */
							obj_t BgL_arg2219z00_2976;

							BgL_arg2219z00_2976 = SYMBOL_TO_STRING(BgL_az00_29);
							BgL_res2498z00_2977 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2219z00_2976);
						}
						BgL_sz00_2067 = BgL_res2498z00_2977;
					}
					if ((STRING_REF(BgL_sz00_2067, ((long) 0)) == ((unsigned char) '?')))
						{	/* Eval/expdargs.scm 424 */
							return
								c_substring(BgL_sz00_2067, ((long) 1),
								STRING_LENGTH(BgL_sz00_2067));
						}
					else
						{	/* Eval/expdargs.scm 424 */
							return
								BGl_expandzd2errorzd2zz__expandz00
								(BGl_string2586z00zz__expander_argsz00,
								string_append_3(BGl_string2699z00zz__expander_argsz00,
									BgL_sz00_2067, BGl_string2700z00zz__expander_argsz00),
								BgL_clausez00_30);
						}
				}
			else
				{	/* Eval/expdargs.scm 421 */
					return
						BGl_expandzd2errorzd2zz__expandz00
						(BGl_string2586z00zz__expander_argsz00,
						BGl_string2701z00zz__expander_argsz00, BgL_clausez00_30);
				}
		}

	}



/* fetch-option-embed-argument */
	obj_t BGl_fetchzd2optionzd2embedzd2argumentzd2zz__expander_argsz00(obj_t
		BgL_optz00_31)
	{
		{	/* Eval/expdargs.scm 435 */
			{	/* Eval/expdargs.scm 436 */
				long BgL_lenz00_2073;

				BgL_lenz00_2073 = (STRING_LENGTH(((obj_t) BgL_optz00_31)) - ((long) 1));
				{
					long BgL_iz00_2075;

					BgL_iz00_2075 = ((long) 0);
				BgL_zc3z04anonymousza32051ze3z87_2076:
					if ((BgL_iz00_2075 >= BgL_lenz00_2073))
						{	/* Eval/expdargs.scm 439 */
							{	/* Eval/expdargs.scm 440 */
								int BgL_res2506z00_2995;

								{	/* Eval/expdargs.scm 440 */
									int BgL_tmpz00_4467;

									BgL_tmpz00_4467 = (int) (((long) 2));
									BgL_res2506z00_2995 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4467);
								} BgL_res2506z00_2995;
							}
							{	/* Eval/expdargs.scm 440 */
								int BgL_tmpz00_4470;

								BgL_tmpz00_4470 = (int) (((long) 1));
								BGL_MVALUES_VAL_SET(BgL_tmpz00_4470, BFALSE);
							}
							return BgL_optz00_31;
						}
					else
						{	/* Eval/expdargs.scm 439 */
							if (
								(STRING_REF(
										((obj_t) BgL_optz00_31),
										BgL_iz00_2075) == ((unsigned char) '?')))
								{	/* Eval/expdargs.scm 442 */
									obj_t BgL_val0_1155z00_2082;
									obj_t BgL_val1_1156z00_2083;

									{	/* Eval/expdargs.scm 442 */
										obj_t BgL_res2509z00_3004;

										BgL_res2509z00_3004 =
											c_substring(
											((obj_t) BgL_optz00_31), ((long) 0), BgL_iz00_2075);
										BgL_val0_1155z00_2082 = BgL_res2509z00_3004;
									}
									{	/* Eval/expdargs.scm 443 */
										long BgL_arg2055z00_2084;
										long BgL_arg2056z00_2085;

										BgL_arg2055z00_2084 = (((long) 1) + BgL_iz00_2075);
										BgL_arg2056z00_2085 = (BgL_lenz00_2073 + ((long) 1));
										{	/* Eval/expdargs.scm 443 */
											obj_t BgL_res2512z00_3012;

											BgL_res2512z00_3012 =
												c_substring(
												((obj_t) BgL_optz00_31), BgL_arg2055z00_2084,
												BgL_arg2056z00_2085);
											BgL_val1_1156z00_2083 = BgL_res2512z00_3012;
									}}
									{	/* Eval/expdargs.scm 442 */
										int BgL_res2513z00_3013;

										{	/* Eval/expdargs.scm 442 */
											int BgL_tmpz00_4483;

											BgL_tmpz00_4483 = (int) (((long) 2));
											BgL_res2513z00_3013 =
												BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4483);
										} BgL_res2513z00_3013;
									}
									{	/* Eval/expdargs.scm 442 */
										int BgL_tmpz00_4486;

										BgL_tmpz00_4486 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_4486, BgL_val1_1156z00_2083);
									}
									return BgL_val0_1155z00_2082;
								}
							else
								{
									long BgL_iz00_4489;

									BgL_iz00_4489 = (BgL_iz00_2075 + ((long) 1));
									BgL_iz00_2075 = BgL_iz00_4489;
									goto BgL_zc3z04anonymousza32051ze3z87_2076;
								}
						}
				}
			}
		}

	}



/* help-message? */
	bool_t BGl_helpzd2messagezf3z21zz__expander_argsz00(obj_t BgL_expz00_32)
	{
		{	/* Eval/expdargs.scm 450 */
			if (PAIRP(BgL_expz00_32))
				{	/* Eval/expdargs.scm 451 */
					obj_t BgL_arg2065z00_2096;

					BgL_arg2065z00_2096 = CAR(BgL_expz00_32);
					{	/* Eval/expdargs.scm 459 */
						bool_t BgL__ortest_1047z00_3018;

						BgL__ortest_1047z00_3018 =
							(BgL_arg2065z00_2096 == BGl_symbol2660z00zz__expander_argsz00);
						if (BgL__ortest_1047z00_3018)
							{	/* Eval/expdargs.scm 459 */
								return BgL__ortest_1047z00_3018;
							}
						else
							{	/* Eval/expdargs.scm 459 */
								return
									(BgL_arg2065z00_2096 ==
									BGl_symbol2662z00zz__expander_argsz00);
							}
					}
				}
			else
				{	/* Eval/expdargs.scm 451 */
					return ((bool_t) 0);
				}
		}

	}



/* synopsis? */
	bool_t BGl_synopsiszf3zf3zz__expander_argsz00(obj_t BgL_symz00_33)
	{
		{	/* Eval/expdargs.scm 458 */
			{	/* Eval/expdargs.scm 459 */
				bool_t BgL__ortest_1047z00_3019;

				BgL__ortest_1047z00_3019 =
					(BgL_symz00_33 == BGl_symbol2660z00zz__expander_argsz00);
				if (BgL__ortest_1047z00_3019)
					{	/* Eval/expdargs.scm 459 */
						return BgL__ortest_1047z00_3019;
					}
				else
					{	/* Eval/expdargs.scm 459 */
						return (BgL_symz00_33 == BGl_symbol2662z00zz__expander_argsz00);
					}
			}
		}

	}



/* args-parse-usage */
	BGL_EXPORTED_DEF obj_t BGl_argszd2parsezd2usagez00zz__expander_argsz00(obj_t
		BgL_descrsz00_34)
	{
		{	/* Eval/expdargs.scm 464 */
			{	/* Eval/expdargs.scm 465 */
				obj_t BgL_zc3z04anonymousza32066ze3z87_3321;

				BgL_zc3z04anonymousza32066ze3z87_3321 =
					MAKE_FX_PROCEDURE
					(BGl_z62zc3z04anonymousza32066ze3ze5zz__expander_argsz00,
					(int) (((long) 1)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza32066ze3z87_3321, (int) (((long) 0)),
					BgL_descrsz00_34);
				return BgL_zc3z04anonymousza32066ze3z87_3321;
			}
		}

	}



/* &args-parse-usage */
	obj_t BGl_z62argszd2parsezd2usagez62zz__expander_argsz00(obj_t
		BgL_envz00_3322, obj_t BgL_descrsz00_3323)
	{
		{	/* Eval/expdargs.scm 464 */
			{	/* Eval/expdargs.scm 465 */
				obj_t BgL_auxz00_4505;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_descrsz00_3323))
					{	/* Eval/expdargs.scm 465 */
						BgL_auxz00_4505 = BgL_descrsz00_3323;
					}
				else
					{
						obj_t BgL_auxz00_4508;

						BgL_auxz00_4508 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2588z00zz__expander_argsz00, BINT(((long) 16196)),
							BGl_string2702z00zz__expander_argsz00,
							BGl_string2590z00zz__expander_argsz00, BgL_descrsz00_3323);
						FAILURE(BgL_auxz00_4508, BFALSE, BFALSE);
					}
				return BGl_argszd2parsezd2usagez00zz__expander_argsz00(BgL_auxz00_4505);
			}
		}

	}



/* &<@anonymous:2066> */
	obj_t BGl_z62zc3z04anonymousza32066ze3ze5zz__expander_argsz00(obj_t
		BgL_envz00_3324, obj_t BgL_manualzf3zf3_3326)
	{
		{	/* Eval/expdargs.scm 465 */
			{	/* Eval/expdargs.scm 466 */
				obj_t BgL_descrsz00_3325;

				BgL_descrsz00_3325 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3324, (int) (((long) 0))));
				if (CBOOL(BgL_manualzf3zf3_3326))
					{	/* Eval/expdargs.scm 466 */
						obj_t BgL_port1157z00_3337;

						{	/* Eval/expdargs.scm 466 */
							obj_t BgL_res2516z00_3338;

							{	/* Eval/expdargs.scm 466 */
								obj_t BgL_tmpz00_4518;

								BgL_tmpz00_4518 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2516z00_3338 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4518);
							}
							BgL_port1157z00_3337 = BgL_res2516z00_3338;
						}
						bgl_display_string(BGl_string2703z00zz__expander_argsz00,
							BgL_port1157z00_3337);
						bgl_display_char(((unsigned char) 10), BgL_port1157z00_3337);
					}
				else
					{	/* Eval/expdargs.scm 466 */
						BFALSE;
					}
				{	/* Eval/expdargs.scm 467 */
					long BgL_mlenzd2symzd2_3339;

					BgL_mlenzd2symzd2_3339 = ((long) 0);
					{
						obj_t BgL_l1158z00_3341;

						BgL_l1158z00_3341 = BgL_descrsz00_3325;
					BgL_zc3z04anonymousza32067ze3z87_3340:
						if (PAIRP(BgL_l1158z00_3341))
							{	/* Eval/expdargs.scm 469 */
								{	/* Eval/expdargs.scm 470 */
									obj_t BgL_optz00_3342;

									BgL_optz00_3342 = CAR(BgL_l1158z00_3341);
									{	/* Eval/expdargs.scm 470 */
										obj_t BgL_namez00_3343;

										BgL_namez00_3343 = CAR(((obj_t) BgL_optz00_3342));
										if (STRINGP(BgL_namez00_3343))
											{	/* Eval/expdargs.scm 472 */
												long BgL_lenz00_3344;

												BgL_lenz00_3344 = STRING_LENGTH(BgL_namez00_3343);
												if ((BgL_lenz00_3344 > BgL_mlenzd2symzd2_3339))
													{	/* Eval/expdargs.scm 473 */
														BgL_mlenzd2symzd2_3339 = BgL_lenz00_3344;
													}
												else
													{	/* Eval/expdargs.scm 473 */
														BFALSE;
													}
											}
										else
											{	/* Eval/expdargs.scm 471 */
												BFALSE;
											}
									}
								}
								{
									obj_t BgL_l1158z00_4533;

									BgL_l1158z00_4533 = CDR(BgL_l1158z00_3341);
									BgL_l1158z00_3341 = BgL_l1158z00_4533;
									goto BgL_zc3z04anonymousza32067ze3z87_3340;
								}
							}
						else
							{	/* Eval/expdargs.scm 469 */
								((bool_t) 1);
							}
					}
					{
						obj_t BgL_l1162z00_3346;

						BgL_l1162z00_3346 = BgL_descrsz00_3325;
					BgL_zc3z04anonymousza32072ze3z87_3345:
						if (PAIRP(BgL_l1162z00_3346))
							{	/* Eval/expdargs.scm 476 */
								{	/* Eval/expdargs.scm 477 */
									obj_t BgL_optz00_3347;

									BgL_optz00_3347 = CAR(BgL_l1162z00_3346);
									{	/* Eval/expdargs.scm 477 */
										obj_t BgL_namez00_3348;

										BgL_namez00_3348 = CAR(((obj_t) BgL_optz00_3347));
										if (STRINGP(BgL_namez00_3348))
											{	/* Eval/expdargs.scm 480 */
												long BgL_lenz00_3349;

												BgL_lenz00_3349 =
													STRING_LENGTH(((obj_t) BgL_namez00_3348));
												{	/* Eval/expdargs.scm 481 */
													obj_t BgL_descz00_3350;

													BgL_descz00_3350 = CDR(((obj_t) BgL_optz00_3347));
													{	/* Eval/expdargs.scm 482 */
														obj_t BgL_tabz00_3351;

														BgL_tabz00_3351 =
															make_string(
															(BgL_mlenzd2symzd2_3339 - BgL_lenz00_3349),
															((unsigned char) ' '));
														{	/* Eval/expdargs.scm 483 */

															if (CBOOL(BgL_manualzf3zf3_3326))
																{	/* Eval/expdargs.scm 485 */
																	{	/* Eval/expdargs.scm 487 */
																		obj_t BgL_arg2075z00_3353;

																		{	/* Eval/expdargs.scm 487 */
																			obj_t BgL_arg2077z00_3354;

																			BgL_arg2077z00_3354 =
																				MAKE_YOUNG_PAIR(BgL_descz00_3350, BNIL);
																			BgL_arg2075z00_3353 =
																				MAKE_YOUNG_PAIR(BgL_namez00_3348,
																				BgL_arg2077z00_3354);
																		}
																		BGl_writez00zz__r4_output_6_10_3z00
																			(BgL_arg2075z00_3353, BNIL);
																	}
																	{	/* Eval/expdargs.scm 488 */
																		obj_t BgL_arg2078z00_3355;

																		{	/* Eval/expdargs.scm 488 */
																			obj_t BgL_res2526z00_3356;

																			{	/* Eval/expdargs.scm 488 */
																				obj_t BgL_tmpz00_4553;

																				BgL_tmpz00_4553 =
																					BGL_CURRENT_DYNAMIC_ENV();
																				BgL_res2526z00_3356 =
																					BGL_ENV_CURRENT_OUTPUT_PORT
																					(BgL_tmpz00_4553);
																			}
																			BgL_arg2078z00_3355 = BgL_res2526z00_3356;
																		}
																		bgl_display_char(((unsigned char) 10),
																			BgL_arg2078z00_3355);
																}}
															else
																{	/* Eval/expdargs.scm 489 */
																	obj_t BgL_port1160z00_3357;

																	{	/* Eval/expdargs.scm 489 */
																		obj_t BgL_res2527z00_3358;

																		{	/* Eval/expdargs.scm 489 */
																			obj_t BgL_tmpz00_4557;

																			BgL_tmpz00_4557 =
																				BGL_CURRENT_DYNAMIC_ENV();
																			BgL_res2527z00_3358 =
																				BGL_ENV_CURRENT_OUTPUT_PORT
																				(BgL_tmpz00_4557);
																		}
																		BgL_port1160z00_3357 = BgL_res2527z00_3358;
																	}
																	bgl_display_string
																		(BGl_string2704z00zz__expander_argsz00,
																		BgL_port1160z00_3357);
																	bgl_display_obj(BgL_namez00_3348,
																		BgL_port1160z00_3357);
																	bgl_display_obj(BgL_tabz00_3351,
																		BgL_port1160z00_3357);
																	bgl_display_string
																		(BGl_string2669z00zz__expander_argsz00,
																		BgL_port1160z00_3357);
																	bgl_display_obj(BgL_descz00_3350,
																		BgL_port1160z00_3357);
																	bgl_display_char(((unsigned char) 10),
																		BgL_port1160z00_3357);
											}}}}}
										else
											{	/* Eval/expdargs.scm 479 */
												if (
													(BgL_namez00_3348 ==
														BGl_symbol2665z00zz__expander_argsz00))
													{	/* Eval/expdargs.scm 491 */
														obj_t BgL_port1161z00_3359;

														{	/* Eval/expdargs.scm 491 */
															obj_t BgL_res2528z00_3360;

															{	/* Eval/expdargs.scm 491 */
																obj_t BgL_tmpz00_4568;

																BgL_tmpz00_4568 = BGL_CURRENT_DYNAMIC_ENV();
																BgL_res2528z00_3360 =
																	BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4568);
															}
															BgL_port1161z00_3359 = BgL_res2528z00_3360;
														}
														bgl_display_char(((unsigned char) 10),
															BgL_port1161z00_3359);
														{	/* Eval/expdargs.scm 491 */
															obj_t BgL_arg2081z00_3361;

															BgL_arg2081z00_3361 =
																CDR(((obj_t) BgL_optz00_3347));
															bgl_display_obj(BgL_arg2081z00_3361,
																BgL_port1161z00_3359);
														}
														bgl_display_string
															(BGl_string2705z00zz__expander_argsz00,
															BgL_port1161z00_3359);
														bgl_display_char(((unsigned char) 10),
															BgL_port1161z00_3359);
													}
												else
													{	/* Eval/expdargs.scm 490 */
														BFALSE;
													}
											}
									}
								}
								{
									obj_t BgL_l1162z00_4577;

									BgL_l1162z00_4577 = CDR(BgL_l1162z00_3346);
									BgL_l1162z00_3346 = BgL_l1162z00_4577;
									goto BgL_zc3z04anonymousza32072ze3z87_3345;
								}
							}
						else
							{	/* Eval/expdargs.scm 476 */
								((bool_t) 1);
							}
					}
					BGl_symbol2706z00zz__expander_argsz00;
				}
				if (CBOOL(BgL_manualzf3zf3_3326))
					{	/* Eval/expdargs.scm 494 */
						obj_t BgL_port1164z00_3362;

						{	/* Eval/expdargs.scm 494 */
							obj_t BgL_res2529z00_3363;

							{	/* Eval/expdargs.scm 494 */
								obj_t BgL_tmpz00_4581;

								BgL_tmpz00_4581 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2529z00_3363 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4581);
							}
							BgL_port1164z00_3362 = BgL_res2529z00_3363;
						}
						bgl_display_string(BGl_string2708z00zz__expander_argsz00,
							BgL_port1164z00_3362);
						return bgl_display_char(((unsigned char) 10), BgL_port1164z00_3362);
					}
				else
					{	/* Eval/expdargs.scm 494 */
						return BFALSE;
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__expander_argsz00()
	{
		{	/* Eval/expdargs.scm 19 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expander_argsz00()
	{
		{	/* Eval/expdargs.scm 19 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expander_argsz00()
	{
		{	/* Eval/expdargs.scm 19 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expander_argsz00()
	{
		{	/* Eval/expdargs.scm 19 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 214649622),
				BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(((long)
					515155831), BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581), BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945), BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874), BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048), BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694), BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845), BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long)
					228151379), BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 177147628),
				BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
			return BGl_modulezd2initializa7ationz75zz__expandz00(((long) 414007030),
				BSTRING_TO_STRING(BGl_string2709z00zz__expander_argsz00));
		}

	}

#ifdef __cplusplus
}
#endif
