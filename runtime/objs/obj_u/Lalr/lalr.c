/*===========================================================================*/
/*   (Lalr/lalr.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Lalr/lalr.scm -indent -o objs/obj_u/Lalr/lalr.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static bool_t BGl_setzd2shiftzd2tablez00zz__lalr_expandz00();
	extern obj_t BGl_rlhsz00zz__lalr_globalz00;
	static bool_t BGl_checkzd2lalrzd2rulesz00zz__lalr_expandz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2800z00zz__lalr_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2802z00zz__lalr_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2804z00zz__lalr_expandz00 = BUNSPEC;
	static bool_t BGl_setzd2reductionzd2tablez00zz__lalr_expandz00();
	extern obj_t BGl_nvarsz00zz__lalr_globalz00;
	extern obj_t BGl_2minz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_ngotosz00zz__lalr_globalz00;
	static bool_t BGl_loop2ze70ze7zz__lalr_expandz00(long, long, long, obj_t,
		obj_t, obj_t, obj_t, long, bool_t);
	static bool_t BGl_loop2ze71ze7zz__lalr_expandz00(long, obj_t, obj_t, obj_t,
		obj_t, obj_t, long);
	static obj_t BGl_symbol2810z00zz__lalr_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2815z00zz__lalr_expandz00 = BUNSPEC;
	static obj_t BGl_closurez00zz__lalr_expandz00(obj_t);
	extern obj_t BGl_ritemz00zz__lalr_globalz00;
	static obj_t BGl_requirezd2initializa7ationz75zz__lalr_expandz00 = BUNSPEC;
	static obj_t BGl_keyword2787z00zz__lalr_expandz00 = BUNSPEC;
	static obj_t BGl_keyword2789z00zz__lalr_expandz00 = BUNSPEC;
	extern obj_t BGl_LAz00zz__lalr_globalz00;
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	extern obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_nsymsz00zz__lalr_globalz00;
	static bool_t BGl_loop3ze70ze7zz__lalr_expandz00(obj_t, obj_t, long, obj_t,
		long, obj_t, long, long);
	static obj_t BGl_keyword2791z00zz__lalr_expandz00 = BUNSPEC;
	extern obj_t BGl_tokenzd2setzd2siza7eza7zz__lalr_globalz00;
	static obj_t BGl_getzd2statezd2zz__lalr_expandz00(obj_t);
	extern obj_t BGl_warningz00zz__errorz00(obj_t);
	extern obj_t BGl_lookaheadsz00zz__lalr_globalz00;
	extern obj_t BGl_genzd2lalrzd2codez00zz__lalr_genz00();
	extern obj_t BGl_shiftzd2symbolzd2zz__lalr_globalz00;
	static obj_t BGl_savezd2shiftszd2zz__lalr_expandz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__lalr_expandz00();
	extern obj_t BGl_nrulesz00zz__lalr_globalz00;
	static obj_t BGl_symbol2775z00zz__lalr_expandz00 = BUNSPEC;
	static bool_t BGl_computezd2lookaheadszd2zz__lalr_expandz00();
	static obj_t BGl_allocatezd2storagezd2zz__lalr_expandz00();
	static bool_t BGl_initializa7ezd2LAz75zz__lalr_expandz00();
	static obj_t BGl_allocatezd2itemzd2setsz00zz__lalr_expandz00();
	extern obj_t BGl_assvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_za2defaultza2z00zz__lalr_expandz00 = BUNSPEC;
	extern obj_t bgl_reverse(obj_t);
	static obj_t BGl_genericzd2initzd2zz__lalr_expandz00();
	static obj_t BGl_savezd2reductionszd2zz__lalr_expandz00(obj_t, obj_t);
	extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	extern obj_t BGl_acceszd2symbolzd2zz__lalr_globalz00;
	static obj_t BGl_symbol2780z00zz__lalr_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2782z00zz__lalr_expandz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2lalrzd2grammarz00zz__lalr_expandz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__lalr_expandz00();
	extern bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol2793z00zz__lalr_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2794z00zz__lalr_expandz00 = BUNSPEC;
	extern obj_t BGl_derivesz00zz__lalr_globalz00;
	extern obj_t BGl_redzd2setzd2zz__lalr_globalz00;
	extern obj_t BGl_lastzd2shiftzd2zz__lalr_globalz00;
	static bool_t BGl_setzd2nullablezd2zz__lalr_expandz00();
	extern obj_t BGl_includesz00zz__lalr_globalz00;
	static obj_t BGl_newzd2itemsetszd2zz__lalr_expandz00(obj_t);
	extern obj_t BGl_nullablez00zz__lalr_globalz00;
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_statezd2tablezd2zz__lalr_globalz00;
	extern obj_t BGl_lastzd2statezd2zz__lalr_globalz00;
	extern obj_t make_vector(long, obj_t);
	static bool_t BGl_digraphz00zz__lalr_expandz00(obj_t);
	static obj_t BGl_transposez00zz__lalr_expandz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__lalr_expandz00();
	extern obj_t BGl_STATEzd2TABLEzd2SIZEz00zz__lalr_globalz00;
	extern obj_t BGl_rrhsz00zz__lalr_globalz00;
	static bool_t BGl_traverseze70ze7zz__lalr_expandz00(long, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_grammarz00zz__lalr_globalz00;
	extern obj_t BGl_firstsz00zz__lalr_globalz00;
	extern obj_t BGl_finalzd2statezd2zz__lalr_globalz00;
	static obj_t BGl_setzd2maxzd2rhsz00zz__lalr_expandz00();
	extern obj_t BGl_LArulenoz00zz__lalr_globalz00;
	static bool_t BGl_setzd2deriveszd2zz__lalr_expandz00();
	static bool_t BGl_compactzd2actionzd2tablez00zz__lalr_expandz00();
	static obj_t BGl_newzd2statezd2zz__lalr_expandz00(obj_t);
	extern obj_t BGl_zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_tozd2statezd2zz__lalr_globalz00;
	extern obj_t BGl_lastzd2reductionzd2zz__lalr_globalz00;
	static obj_t BGl_buildzd2rulezd2zz__lalr_expandz00(long);
	extern obj_t BGl_quotientz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	extern obj_t BGl_Fz00zz__lalr_globalz00;
	static obj_t BGl_addzd2actionze70z35zz__lalr_expandz00(obj_t, long, obj_t);
	extern obj_t BGl_sinsertz00zz__lalr_utilz00(obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_actionzd2tablezd2zz__lalr_globalz00;
	extern obj_t BGl_za2symvza2z00zz__lalr_rewritez00;
	extern obj_t BGl_firstzd2reductionzd2zz__lalr_globalz00;
	extern obj_t BGl_consistentz00zz__lalr_globalz00;
	extern long BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(long, long);
	extern obj_t BGl_ntermsz00zz__lalr_globalz00;
	extern obj_t BGl_nshiftsz00zz__lalr_globalz00;
	extern obj_t BGl_initializa7ezd2allz75zz__lalr_globalz00();
	extern obj_t BGl_rewritezd2grammarz12zc0zz__lalr_rewritez00(obj_t);
	extern obj_t BGl_reductionzd2tablezd2zz__lalr_globalz00;
	static bool_t BGl_generatezd2stateszd2zz__lalr_expandz00();
	extern obj_t BGl_rprecz00zz__lalr_globalz00;
	static obj_t BGl_z62zc3z04anonymousza31347ze3ze5zz__lalr_expandz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__lalr_expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgcz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__lalr_rewritez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__lalr_globalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__lalr_genz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__lalr_utilz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static bool_t BGl_initializa7ezd2Fz75zz__lalr_expandz00();
	extern obj_t BGl_maxrhsz00zz__lalr_globalz00;
	extern obj_t BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	extern bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_buildzd2relationszd2zz__lalr_expandz00();
	static obj_t BGl_appendzd2stateszd2zz__lalr_expandz00();
	static bool_t BGl_setzd2gotozd2mapz00zz__lalr_expandz00();
	static long BGl_mapzd2gotozd2zz__lalr_expandz00(obj_t, obj_t);
	extern obj_t BGl_shiftzd2tablezd2zz__lalr_globalz00;
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__lalr_expandz00();
	extern long bgl_list_length(obj_t);
	extern obj_t BGl_nstatesz00zz__lalr_globalz00;
	extern obj_t BGl_gotozd2mapzd2zz__lalr_globalz00;
	extern obj_t BGl_fromzd2statezd2zz__lalr_globalz00;
	static obj_t BGl_gczd2rootszd2initz00zz__lalr_expandz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__lalr_expandz00();
	extern obj_t BGl_kernelzd2basezd2zz__lalr_globalz00;
	extern obj_t BGl_nitemsz00zz__lalr_globalz00;
	extern obj_t BGl_shiftzd2setzd2zz__lalr_globalz00;
	static obj_t BGl_buildzd2tableszd2zz__lalr_expandz00();
	extern obj_t BGl_2maxz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	static bool_t BGl_setzd2fderiveszd2zz__lalr_expandz00();
	extern obj_t BGl_sunionz00zz__lalr_utilz00(obj_t, obj_t);
	static obj_t BGl_initializa7ezd2statesz75zz__lalr_expandz00();
	extern obj_t BGl_exptz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_cleanzd2plistzd2zz__lalr_rewritez00();
	extern obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl_list2786z00zz__lalr_expandz00 = BUNSPEC;
	static bool_t BGl_setzd2firstszd2zz__lalr_expandz00();
	extern obj_t BGl_firstzd2shiftzd2zz__lalr_globalz00;
	extern obj_t BGl_fderivesz00zz__lalr_globalz00;
	extern obj_t BGl_lookbackz00zz__lalr_globalz00;
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_list2797z00zz__lalr_expandz00 = BUNSPEC;
	static bool_t BGl_setzd2accessingzd2symbolz00zz__lalr_expandz00();
	static bool_t BGl_lalrz00zz__lalr_expandz00();
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	static bool_t BGl_packzd2grammarzd2zz__lalr_expandz00();
	extern obj_t BGl_firstzd2statezd2zz__lalr_globalz00;
	static obj_t BGl_loopze70ze7zz__lalr_expandz00(obj_t);
	static obj_t BGl_loopze71ze7zz__lalr_expandz00(obj_t);
	static obj_t BGl_loopze72ze7zz__lalr_expandz00(obj_t);
	static bool_t BGl_loopze73ze7zz__lalr_expandz00(obj_t, obj_t, obj_t, obj_t,
		long, long, long);
	static bool_t BGl_loopze74ze7zz__lalr_expandz00(obj_t, obj_t, obj_t, obj_t,
		long, long);
	extern obj_t bstring_to_keyword(obj_t);
	static obj_t BGl_addzd2lookbackzd2edgez00zz__lalr_expandz00(obj_t, obj_t,
		long);
	extern obj_t BGl_kernelzd2endzd2zz__lalr_globalz00;
	static obj_t BGl_z62expandzd2lalrzd2grammarz62zz__lalr_expandz00(obj_t, obj_t,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2801z00zz__lalr_expandz00,
		BgL_bgl_string2801za700za7za7_2818za7, "bidon", 5);
	      DEFINE_STRING(BGl_string2803z00zz__lalr_expandz00,
		BgL_bgl_string2803za700za7za7_2819za7, "-->", 3);
	      DEFINE_STRING(BGl_string2805z00zz__lalr_expandz00,
		BgL_bgl_string2805za700za7za7_2820za7, "accept", 6);
	      DEFINE_STRING(BGl_string2806z00zz__lalr_expandz00,
		BgL_bgl_string2806za700za7za7_2821za7, "'", 1);
	      DEFINE_STRING(BGl_string2807z00zz__lalr_expandz00,
		BgL_bgl_string2807za700za7za7_2822za7, "\non token `", 11);
	      DEFINE_STRING(BGl_string2808z00zz__lalr_expandz00,
		BgL_bgl_string2808za700za7za7_2823za7, "\n - reduce by rule ", 19);
	      DEFINE_STRING(BGl_string2809z00zz__lalr_expandz00,
		BgL_bgl_string2809za700za7za7_2824za7, "** Reduce/Reduce conflict: ", 27);
	      DEFINE_STRING(BGl_string2811z00zz__lalr_expandz00,
		BgL_bgl_string2811za700za7za7_2825za7, "*error*", 7);
	      DEFINE_STRING(BGl_string2812z00zz__lalr_expandz00,
		BgL_bgl_string2812za700za7za7_2826za7, "\n - reduce rule ", 16);
	      DEFINE_STRING(BGl_string2813z00zz__lalr_expandz00,
		BgL_bgl_string2813za700za7za7_2827za7, "\n - shift to state ", 19);
	      DEFINE_STRING(BGl_string2814z00zz__lalr_expandz00,
		BgL_bgl_string2814za700za7za7_2828za7, "** Shift/Reduce conflict: ", 26);
	      DEFINE_STRING(BGl_string2816z00zz__lalr_expandz00,
		BgL_bgl_string2816za700za7za7_2829za7, "error", 5);
	      DEFINE_STRING(BGl_string2817z00zz__lalr_expandz00,
		BgL_bgl_string2817za700za7za7_2830za7, "__lalr_expand", 13);
	      DEFINE_STRING(BGl_string2776z00zz__lalr_expandz00,
		BgL_bgl_string2776za700za7za7_2831za7, "default", 7);
	      DEFINE_STRING(BGl_string2778z00zz__lalr_expandz00,
		BgL_bgl_string2778za700za7za7_2832za7, "lalr-grammar", 12);
	      DEFINE_STRING(BGl_string2779z00zz__lalr_expandz00,
		BgL_bgl_string2779za700za7za7_2833za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string2781z00zz__lalr_expandz00,
		BgL_bgl_string2781za700za7za7_2834za7, "sym-no", 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2777z00zz__lalr_expandz00,
		BgL_bgl_za762za7c3za704anonymo2835za7,
		BGl_z62zc3z04anonymousza31347ze3ze5zz__lalr_expandz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2783z00zz__lalr_expandz00,
		BgL_bgl_string2783za700za7za7_2836za7, "prec", 4);
	      DEFINE_STRING(BGl_string2784z00zz__lalr_expandz00,
		BgL_bgl_string2784za700za7za7_2837za7, "Illegal form ", 13);
	      DEFINE_STRING(BGl_string2785z00zz__lalr_expandz00,
		BgL_bgl_string2785za700za7za7_2838za7,
		"Illegal form (Illegal left hand side)", 37);
	      DEFINE_STRING(BGl_string2788z00zz__lalr_expandz00,
		BgL_bgl_string2788za700za7za7_2839za7, "left", 4);
	      DEFINE_STRING(BGl_string2790z00zz__lalr_expandz00,
		BgL_bgl_string2790za700za7za7_2840za7, "right", 5);
	      DEFINE_STRING(BGl_string2792z00zz__lalr_expandz00,
		BgL_bgl_string2792za700za7za7_2841za7, "none", 4);
	      DEFINE_STRING(BGl_string2795z00zz__lalr_expandz00,
		BgL_bgl_string2795za700za7za7_2842za7, "symbol", 6);
	      DEFINE_STRING(BGl_string2796z00zz__lalr_expandz00,
		BgL_bgl_string2796za700za7za7_2843za7, "Illegal token", 13);
	      DEFINE_STRING(BGl_string2798z00zz__lalr_expandz00,
		BgL_bgl_string2798za700za7za7_2844za7, "Error in map-goto", 17);
	      DEFINE_STRING(BGl_string2799z00zz__lalr_expandz00,
		BgL_bgl_string2799za700za7za7_2845za7, "Error in add-lookback-edge : ", 29);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2lalrzd2grammarzd2envzd2zz__lalr_expandz00,
		BgL_bgl_za762expandza7d2lalr2846z00,
		BGl_z62expandzd2lalrzd2grammarz62zz__lalr_expandz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol2800z00zz__lalr_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2802z00zz__lalr_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2804z00zz__lalr_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2810z00zz__lalr_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2815z00zz__lalr_expandz00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__lalr_expandz00));
		     ADD_ROOT((void *) (&BGl_keyword2787z00zz__lalr_expandz00));
		     ADD_ROOT((void *) (&BGl_keyword2789z00zz__lalr_expandz00));
		     ADD_ROOT((void *) (&BGl_keyword2791z00zz__lalr_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2775z00zz__lalr_expandz00));
		     ADD_ROOT((void *) (&BGl_za2defaultza2z00zz__lalr_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2780z00zz__lalr_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2782z00zz__lalr_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2793z00zz__lalr_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol2794z00zz__lalr_expandz00));
		     ADD_ROOT((void *) (&BGl_list2786z00zz__lalr_expandz00));
		     ADD_ROOT((void *) (&BGl_list2797z00zz__lalr_expandz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__lalr_expandz00(long
		BgL_checksumz00_4768, char *BgL_fromz00_4769)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__lalr_expandz00))
				{
					BGl_requirezd2initializa7ationz75zz__lalr_expandz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__lalr_expandz00();
					BGl_cnstzd2initzd2zz__lalr_expandz00();
					BGl_importedzd2moduleszd2initz00zz__lalr_expandz00();
					return BGl_toplevelzd2initzd2zz__lalr_expandz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 11 */
			BGl_symbol2775z00zz__lalr_expandz00 =
				bstring_to_symbol(BGl_string2776z00zz__lalr_expandz00);
			BGl_symbol2780z00zz__lalr_expandz00 =
				bstring_to_symbol(BGl_string2781z00zz__lalr_expandz00);
			BGl_symbol2782z00zz__lalr_expandz00 =
				bstring_to_symbol(BGl_string2783z00zz__lalr_expandz00);
			BGl_keyword2787z00zz__lalr_expandz00 =
				bstring_to_keyword(BGl_string2788z00zz__lalr_expandz00);
			BGl_keyword2789z00zz__lalr_expandz00 =
				bstring_to_keyword(BGl_string2790z00zz__lalr_expandz00);
			BGl_keyword2791z00zz__lalr_expandz00 =
				bstring_to_keyword(BGl_string2792z00zz__lalr_expandz00);
			BGl_list2786z00zz__lalr_expandz00 =
				MAKE_YOUNG_PAIR(BGl_keyword2787z00zz__lalr_expandz00,
				MAKE_YOUNG_PAIR(BGl_keyword2789z00zz__lalr_expandz00,
					MAKE_YOUNG_PAIR(BGl_keyword2791z00zz__lalr_expandz00, BNIL)));
			BGl_symbol2793z00zz__lalr_expandz00 =
				bstring_to_symbol(BGl_string2778z00zz__lalr_expandz00);
			BGl_symbol2794z00zz__lalr_expandz00 =
				bstring_to_symbol(BGl_string2795z00zz__lalr_expandz00);
			BGl_list2797z00zz__lalr_expandz00 =
				MAKE_YOUNG_PAIR(BINT(((long) 0)), BNIL);
			BGl_symbol2800z00zz__lalr_expandz00 =
				bstring_to_symbol(BGl_string2801z00zz__lalr_expandz00);
			BGl_symbol2802z00zz__lalr_expandz00 =
				bstring_to_symbol(BGl_string2803z00zz__lalr_expandz00);
			BGl_symbol2804z00zz__lalr_expandz00 =
				bstring_to_symbol(BGl_string2805z00zz__lalr_expandz00);
			BGl_symbol2810z00zz__lalr_expandz00 =
				bstring_to_symbol(BGl_string2811z00zz__lalr_expandz00);
			return (BGl_symbol2815z00zz__lalr_expandz00 =
				bstring_to_symbol(BGl_string2816z00zz__lalr_expandz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 11 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 11 */
			return (BGl_za2defaultza2z00zz__lalr_expandz00 =
				BGl_gensymz00zz__r4_symbols_6_4z00(BGl_symbol2775z00zz__lalr_expandz00),
				BUNSPEC);
		}

	}



/* expand-lalr-grammar */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2lalrzd2grammarz00zz__lalr_expandz00(obj_t
		BgL_xz00_3, obj_t BgL_ez00_4)
	{
		{	/* Lalr/lalr.scm 62 */
			{
				obj_t BgL_rulesz00_1154;

				if (PAIRP(BgL_xz00_3))
					{	/* Lalr/lalr.scm 63 */
						BgL_rulesz00_1154 = CDR(BgL_xz00_3);
						if (PAIRP(BgL_rulesz00_1154))
							{	/* Lalr/lalr.scm 65 */
								obj_t BgL_carzd2608zd2_1165;
								obj_t BgL_cdrzd2609zd2_1166;

								BgL_carzd2608zd2_1165 = CAR(BgL_rulesz00_1154);
								BgL_cdrzd2609zd2_1166 = CDR(BgL_rulesz00_1154);
								if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
									(BgL_carzd2608zd2_1165))
									{	/* Lalr/lalr.scm 65 */
										if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
											(BgL_cdrzd2609zd2_1166))
											{	/* Lalr/lalr.scm 65 */
												BGl_checkzd2lalrzd2rulesz00zz__lalr_expandz00
													(BgL_xz00_3, BgL_carzd2608zd2_1165,
													BgL_cdrzd2609zd2_1166);
											}
										else
											{	/* Lalr/lalr.scm 65 */
												((bool_t) 0);
											}
									}
								else
									{	/* Lalr/lalr.scm 65 */
										((bool_t) 0);
									}
							}
						else
							{	/* Lalr/lalr.scm 65 */
								((bool_t) 0);
							}
						{	/* Lalr/lalr.scm 68 */
							obj_t BgL_codez00_1169;

							{	/* Lalr/lalr.scm 68 */
								obj_t BgL_exitd1127z00_1170;

								BgL_exitd1127z00_1170 = BGL_EXITD_TOP_AS_OBJ();
								BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
									(BgL_exitd1127z00_1170, BGl_proc2777z00zz__lalr_expandz00);
								{	/* Lalr/lalr.scm 70 */
									obj_t BgL_tmp1129z00_1172;

									BGl_initializa7ezd2allz75zz__lalr_globalz00();
									BGl_rewritezd2grammarz12zc0zz__lalr_rewritez00
										(BgL_rulesz00_1154);
									BGl_packzd2grammarzd2zz__lalr_expandz00();
									BGl_setzd2deriveszd2zz__lalr_expandz00();
									BGl_setzd2nullablezd2zz__lalr_expandz00();
									BGl_generatezd2stateszd2zz__lalr_expandz00();
									BGl_lalrz00zz__lalr_expandz00();
									BGl_buildzd2tableszd2zz__lalr_expandz00();
									BGl_compactzd2actionzd2tablez00zz__lalr_expandz00();
									BgL_tmp1129z00_1172 =
										BGl_genzd2lalrzd2codez00zz__lalr_genz00();
									BGl_exitdzd2popzd2protectz12z12zz__bexitz00
										(BgL_exitd1127z00_1170);
									BGl_cleanzd2plistzd2zz__lalr_rewritez00();
									BgL_codez00_1169 = BgL_tmp1129z00_1172;
								}
							}
							return
								PROCEDURE_ENTRY(BgL_ez00_4) (BgL_ez00_4, BgL_codez00_1169,
								BgL_ez00_4, BEOA);
						}
					}
				else
					{	/* Lalr/lalr.scm 63 */
						return
							BGl_errorz00zz__errorz00(BGl_string2778z00zz__lalr_expandz00,
							BGl_string2779z00zz__lalr_expandz00, BgL_xz00_3);
					}
			}
		}

	}



/* &expand-lalr-grammar */
	obj_t BGl_z62expandzd2lalrzd2grammarz62zz__lalr_expandz00(obj_t
		BgL_envz00_4729, obj_t BgL_xz00_4730, obj_t BgL_ez00_4731)
	{
		{	/* Lalr/lalr.scm 62 */
			return
				BGl_expandzd2lalrzd2grammarz00zz__lalr_expandz00(BgL_xz00_4730,
				BgL_ez00_4731);
		}

	}



/* &<@anonymous:1347> */
	obj_t BGl_z62zc3z04anonymousza31347ze3ze5zz__lalr_expandz00(obj_t
		BgL_envz00_4732)
	{
		{	/* Lalr/lalr.scm 68 */
			return BGl_cleanzd2plistzd2zz__lalr_rewritez00();
		}

	}



/* pack-grammar */
	bool_t BGl_packzd2grammarzd2zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 88 */
			BGl_rlhsz00zz__lalr_globalz00 =
				make_vector((long) CINT(BGl_nrulesz00zz__lalr_globalz00), BFALSE);
			BGl_rrhsz00zz__lalr_globalz00 =
				make_vector((long) CINT(BGl_nrulesz00zz__lalr_globalz00), BFALSE);
			BGl_ritemz00zz__lalr_globalz00 =
				make_vector(
				(((long) 1) + (long) CINT(BGl_nitemsz00zz__lalr_globalz00)), BFALSE);
			BGl_rprecz00zz__lalr_globalz00 =
				make_vector((long) CINT(BGl_nrulesz00zz__lalr_globalz00), BFALSE);
			{
				obj_t BgL_pz00_1177;
				long BgL_itemzd2nozd2_1178;
				long BgL_rulezd2nozd2_1179;

				BgL_pz00_1177 = BGl_grammarz00zz__lalr_globalz00;
				BgL_itemzd2nozd2_1178 = ((long) 0);
				BgL_rulezd2nozd2_1179 = ((long) 1);
			BgL_zc3z04anonymousza31349ze3z87_1180:
				if (NULLP(BgL_pz00_1177))
					{	/* Lalr/lalr.scm 95 */
						return ((bool_t) 0);
					}
				else
					{	/* Lalr/lalr.scm 96 */
						obj_t BgL_ntz00_1182;

						{	/* Lalr/lalr.scm 96 */
							obj_t BgL_auxz00_4842;

							{	/* Lalr/lalr.scm 96 */
								obj_t BgL_pairz00_2816;

								BgL_pairz00_2816 = CAR(((obj_t) BgL_pz00_1177));
								BgL_auxz00_4842 = CAR(BgL_pairz00_2816);
							}
							BgL_ntz00_1182 =
								BGl_getpropz00zz__r4_symbols_6_4z00(BgL_auxz00_4842,
								BGl_symbol2780z00zz__lalr_expandz00);
						}
						{	/* Lalr/lalr.scm 97 */
							obj_t BgL_g1130z00_1183;

							{	/* Lalr/lalr.scm 97 */
								obj_t BgL_pairz00_2820;

								BgL_pairz00_2820 = CAR(((obj_t) BgL_pz00_1177));
								BgL_g1130z00_1183 = CDR(BgL_pairz00_2820);
							}
							{
								obj_t BgL_prodsz00_1185;
								long BgL_itzd2no2zd2_1186;
								long BgL_rlzd2no2zd2_1187;

								BgL_prodsz00_1185 = BgL_g1130z00_1183;
								BgL_itzd2no2zd2_1186 = BgL_itemzd2nozd2_1178;
								BgL_rlzd2no2zd2_1187 = BgL_rulezd2nozd2_1179;
							BgL_zc3z04anonymousza31351ze3z87_1188:
								if (NULLP(BgL_prodsz00_1185))
									{	/* Lalr/lalr.scm 99 */
										obj_t BgL_arg1353z00_1190;

										BgL_arg1353z00_1190 = CDR(((obj_t) BgL_pz00_1177));
										{
											long BgL_rulezd2nozd2_4856;
											long BgL_itemzd2nozd2_4855;
											obj_t BgL_pz00_4854;

											BgL_pz00_4854 = BgL_arg1353z00_1190;
											BgL_itemzd2nozd2_4855 = BgL_itzd2no2zd2_1186;
											BgL_rulezd2nozd2_4856 = BgL_rlzd2no2zd2_1187;
											BgL_rulezd2nozd2_1179 = BgL_rulezd2nozd2_4856;
											BgL_itemzd2nozd2_1178 = BgL_itemzd2nozd2_4855;
											BgL_pz00_1177 = BgL_pz00_4854;
											goto BgL_zc3z04anonymousza31349ze3z87_1180;
										}
									}
								else
									{	/* Lalr/lalr.scm 98 */
										VECTOR_SET(BGl_rlhsz00zz__lalr_globalz00,
											BgL_rlzd2no2zd2_1187, BgL_ntz00_1182);
										VECTOR_SET(BGl_rrhsz00zz__lalr_globalz00,
											BgL_rlzd2no2zd2_1187, BINT(BgL_itzd2no2zd2_1186));
										{	/* Lalr/lalr.scm 103 */
											obj_t BgL_g1131z00_1191;

											{	/* Lalr/lalr.scm 103 */
												obj_t BgL_pairz00_2830;

												BgL_pairz00_2830 = CAR(((obj_t) BgL_prodsz00_1185));
												BgL_g1131z00_1191 = CAR(BgL_pairz00_2830);
											}
											{
												obj_t BgL_rhsz00_1193;
												long BgL_itzd2no3zd2_1194;

												BgL_rhsz00_1193 = BgL_g1131z00_1191;
												BgL_itzd2no3zd2_1194 = BgL_itzd2no2zd2_1186;
											BgL_zc3z04anonymousza31354ze3z87_1195:
												if (NULLP(BgL_rhsz00_1193))
													{	/* Lalr/lalr.scm 104 */
														{	/* Lalr/lalr.scm 106 */
															long BgL_arg1356z00_1197;

															BgL_arg1356z00_1197 = NEG(BgL_rlzd2no2zd2_1187);
															VECTOR_SET(BGl_ritemz00zz__lalr_globalz00,
																BgL_itzd2no3zd2_1194,
																BINT(BgL_arg1356z00_1197));
														}
														{	/* Lalr/lalr.scm 107 */
															obj_t BgL_arg1357z00_1198;
															long BgL_arg1359z00_1199;
															long BgL_arg1360z00_1200;

															BgL_arg1357z00_1198 =
																CDR(((obj_t) BgL_prodsz00_1185));
															BgL_arg1359z00_1199 =
																(BgL_itzd2no3zd2_1194 + ((long) 1));
															BgL_arg1360z00_1200 =
																(BgL_rlzd2no2zd2_1187 + ((long) 1));
															{
																long BgL_rlzd2no2zd2_4874;
																long BgL_itzd2no2zd2_4873;
																obj_t BgL_prodsz00_4872;

																BgL_prodsz00_4872 = BgL_arg1357z00_1198;
																BgL_itzd2no2zd2_4873 = BgL_arg1359z00_1199;
																BgL_rlzd2no2zd2_4874 = BgL_arg1360z00_1200;
																BgL_rlzd2no2zd2_1187 = BgL_rlzd2no2zd2_4874;
																BgL_itzd2no2zd2_1186 = BgL_itzd2no2zd2_4873;
																BgL_prodsz00_1185 = BgL_prodsz00_4872;
																goto BgL_zc3z04anonymousza31351ze3z87_1188;
															}
														}
													}
												else
													{	/* Lalr/lalr.scm 108 */
														obj_t BgL_symz00_1201;

														BgL_symz00_1201 = CAR(((obj_t) BgL_rhsz00_1193));
														{	/* Lalr/lalr.scm 108 */
															obj_t BgL_asymz00_1202;

															if (PAIRP(BgL_symz00_1201))
																{	/* Lalr/lalr.scm 109 */
																	BgL_asymz00_1202 = CAR(BgL_symz00_1201);
																}
															else
																{	/* Lalr/lalr.scm 109 */
																	BgL_asymz00_1202 = BgL_symz00_1201;
																}
															{	/* Lalr/lalr.scm 109 */
																obj_t BgL_symzd2nozd2_1203;

																BgL_symzd2nozd2_1203 =
																	BGl_getpropz00zz__r4_symbols_6_4z00
																	(BgL_asymz00_1202,
																	BGl_symbol2780z00zz__lalr_expandz00);
																{	/* Lalr/lalr.scm 112 */

																	if (CBOOL(BGl_getpropz00zz__r4_symbols_6_4z00
																			(BgL_asymz00_1202,
																				BGl_symbol2782z00zz__lalr_expandz00)))
																		{	/* Lalr/lalr.scm 114 */
																			VECTOR_SET(BGl_rprecz00zz__lalr_globalz00,
																				BgL_rlzd2no2zd2_1187,
																				BGl_getpropz00zz__r4_symbols_6_4z00
																				(BgL_asymz00_1202,
																					BGl_symbol2782z00zz__lalr_expandz00));
																		}
																	else
																		{	/* Lalr/lalr.scm 114 */
																			BFALSE;
																		}
																	VECTOR_SET(BGl_ritemz00zz__lalr_globalz00,
																		BgL_itzd2no3zd2_1194, BgL_symzd2nozd2_1203);
																	{	/* Lalr/lalr.scm 117 */
																		obj_t BgL_arg1363z00_1206;
																		long BgL_arg1364z00_1207;

																		BgL_arg1363z00_1206 =
																			CDR(((obj_t) BgL_rhsz00_1193));
																		BgL_arg1364z00_1207 =
																			(BgL_itzd2no3zd2_1194 + ((long) 1));
																		{
																			long BgL_itzd2no3zd2_4891;
																			obj_t BgL_rhsz00_4890;

																			BgL_rhsz00_4890 = BgL_arg1363z00_1206;
																			BgL_itzd2no3zd2_4891 =
																				BgL_arg1364z00_1207;
																			BgL_itzd2no3zd2_1194 =
																				BgL_itzd2no3zd2_4891;
																			BgL_rhsz00_1193 = BgL_rhsz00_4890;
																			goto
																				BgL_zc3z04anonymousza31354ze3z87_1195;
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



/* check-lalr-rules */
	bool_t BGl_checkzd2lalrzd2rulesz00zz__lalr_expandz00(obj_t BgL_xz00_5,
		obj_t BgL_tokensz00_6, obj_t BgL_rulesz00_7)
	{
		{	/* Lalr/lalr.scm 122 */
			{
				obj_t BgL_rulez00_1243;

				{
					obj_t BgL_l1230z00_1215;

					BgL_l1230z00_1215 = BgL_tokensz00_6;
				BgL_zc3z04anonymousza31368ze3z87_1216:
					if (PAIRP(BgL_l1230z00_1215))
						{	/* Lalr/lalr.scm 142 */
							{	/* Lalr/lalr.scm 144 */
								obj_t BgL_tz00_1218;

								BgL_tz00_1218 = CAR(BgL_l1230z00_1215);
								if (SYMBOLP(BgL_tz00_1218))
									{	/* Lalr/lalr.scm 144 */
										BTRUE;
									}
								else
									{	/* Lalr/lalr.scm 146 */
										bool_t BgL_test2859z00_4897;

										if (PAIRP(BgL_tz00_1218))
											{	/* Lalr/lalr.scm 146 */
												BgL_test2859z00_4897 =
													CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
														(BgL_tz00_1218),
														BGl_list2786z00zz__lalr_expandz00));
											}
										else
											{	/* Lalr/lalr.scm 146 */
												BgL_test2859z00_4897 = ((bool_t) 0);
											}
										if (BgL_test2859z00_4897)
											{	/* Lalr/lalr.scm 147 */
												obj_t BgL_g1229z00_1223;

												BgL_g1229z00_1223 = CDR(BgL_tz00_1218);
												{
													obj_t BgL_l1227z00_1225;

													{	/* Lalr/lalr.scm 152 */
														bool_t BgL_tmpz00_4904;

														BgL_l1227z00_1225 = BgL_g1229z00_1223;
													BgL_zc3z04anonymousza31374ze3z87_1226:
														if (PAIRP(BgL_l1227z00_1225))
															{	/* Lalr/lalr.scm 152 */
																{	/* Lalr/lalr.scm 148 */
																	obj_t BgL_tz00_1228;

																	BgL_tz00_1228 = CAR(BgL_l1227z00_1225);
																	if (SYMBOLP(BgL_tz00_1228))
																		{	/* Lalr/lalr.scm 148 */
																			BFALSE;
																		}
																	else
																		{	/* Lalr/lalr.scm 148 */
																			BGl_bigloozd2typezd2errorz00zz__errorz00
																				(BGl_symbol2793z00zz__lalr_expandz00,
																				BGl_symbol2794z00zz__lalr_expandz00,
																				BgL_tz00_1228);
																		}
																}
																{
																	obj_t BgL_l1227z00_4911;

																	BgL_l1227z00_4911 = CDR(BgL_l1227z00_1225);
																	BgL_l1227z00_1225 = BgL_l1227z00_4911;
																	goto BgL_zc3z04anonymousza31374ze3z87_1226;
																}
															}
														else
															{	/* Lalr/lalr.scm 152 */
																BgL_tmpz00_4904 = ((bool_t) 1);
															}
														BBOOL(BgL_tmpz00_4904);
													}
												}
											}
										else
											{	/* Lalr/lalr.scm 146 */
												BGl_errorz00zz__errorz00
													(BGl_string2778z00zz__lalr_expandz00,
													BGl_string2796z00zz__lalr_expandz00, BgL_tz00_1218);
											}
									}
							}
							{
								obj_t BgL_l1230z00_4915;

								BgL_l1230z00_4915 = CDR(BgL_l1230z00_1215);
								BgL_l1230z00_1215 = BgL_l1230z00_4915;
								goto BgL_zc3z04anonymousza31368ze3z87_1216;
							}
						}
					else
						{	/* Lalr/lalr.scm 142 */
							((bool_t) 1);
						}
				}
				{
					obj_t BgL_l1232z00_2888;

					BgL_l1232z00_2888 = BgL_rulesz00_7;
				BgL_zc3z04anonymousza31380ze3z87_2887:
					if (PAIRP(BgL_l1232z00_2888))
						{	/* Lalr/lalr.scm 156 */
							BgL_rulez00_1243 = CAR(BgL_l1232z00_2888);
							{
								obj_t BgL_subrulesz00_1245;

								if (PAIRP(BgL_rulez00_1243))
									{	/* Lalr/lalr.scm 141 */
										obj_t BgL_cdrzd2622zd2_1250;

										BgL_cdrzd2622zd2_1250 = CDR(BgL_rulez00_1243);
										{	/* Lalr/lalr.scm 141 */
											bool_t BgL_test2865z00_4922;

											{	/* Lalr/lalr.scm 141 */
												obj_t BgL_tmpz00_4923;

												BgL_tmpz00_4923 = CAR(BgL_rulez00_1243);
												BgL_test2865z00_4922 = SYMBOLP(BgL_tmpz00_4923);
											}
											if (BgL_test2865z00_4922)
												{	/* Lalr/lalr.scm 141 */
													if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
														(BgL_cdrzd2622zd2_1250))
														{	/* Lalr/lalr.scm 141 */
															bool_t BgL_tmpz00_4928;

															BgL_subrulesz00_1245 = BgL_cdrzd2622zd2_1250;
															{
																obj_t BgL_l1225z00_1256;

																BgL_l1225z00_1256 = BgL_subrulesz00_1245;
															BgL_zc3z04anonymousza31390ze3z87_1257:
																if (PAIRP(BgL_l1225z00_1256))
																	{	/* Lalr/lalr.scm 126 */
																		{	/* Lalr/lalr.scm 127 */
																			obj_t BgL_srz00_1259;

																			BgL_srz00_1259 = CAR(BgL_l1225z00_1256);
																			{
																				obj_t BgL_srz00_1260;

																				if (PAIRP(BgL_srz00_1259))
																					{	/* Lalr/lalr.scm 127 */
																						obj_t BgL_carzd2631zd2_1265;

																						BgL_carzd2631zd2_1265 =
																							CAR(BgL_srz00_1259);
																						if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_carzd2631zd2_1265))
																							{	/* Lalr/lalr.scm 127 */
																								bool_t BgL_tmpz00_4937;

																								BgL_srz00_1260 =
																									BgL_carzd2631zd2_1265;
																								{
																									obj_t BgL_l1223z00_1268;

																									BgL_l1223z00_1268 =
																										BgL_srz00_1260;
																								BgL_zc3z04anonymousza31394ze3z87_1269:
																									if (PAIRP
																										(BgL_l1223z00_1268))
																										{	/* Lalr/lalr.scm 129 */
																											{	/* Lalr/lalr.scm 130 */
																												obj_t BgL_symz00_1271;

																												BgL_symz00_1271 =
																													CAR
																													(BgL_l1223z00_1268);
																												if (SYMBOLP
																													(BgL_symz00_1271))
																													{	/* Lalr/lalr.scm 130 */
																														BFALSE;
																													}
																												else
																													{	/* Lalr/lalr.scm 130 */
																														BGl_errorz00zz__errorz00
																															(BGl_string2778z00zz__lalr_expandz00,
																															BGl_string2784z00zz__lalr_expandz00,
																															BgL_rulez00_1243);
																													}
																											}
																											{
																												obj_t BgL_l1223z00_4944;

																												BgL_l1223z00_4944 =
																													CDR
																													(BgL_l1223z00_1268);
																												BgL_l1223z00_1268 =
																													BgL_l1223z00_4944;
																												goto
																													BgL_zc3z04anonymousza31394ze3z87_1269;
																											}
																										}
																									else
																										{	/* Lalr/lalr.scm 129 */
																											BgL_tmpz00_4937 =
																												((bool_t) 1);
																										}
																								}
																								BBOOL(BgL_tmpz00_4937);
																							}
																						else
																							{	/* Lalr/lalr.scm 127 */
																								BGl_errorz00zz__errorz00
																									(BGl_string2778z00zz__lalr_expandz00,
																									BGl_string2785z00zz__lalr_expandz00,
																									BgL_rulez00_1243);
																							}
																					}
																				else
																					{	/* Lalr/lalr.scm 127 */
																						BGl_errorz00zz__errorz00
																							(BGl_string2778z00zz__lalr_expandz00,
																							BGl_string2785z00zz__lalr_expandz00,
																							BgL_rulez00_1243);
																					}
																			}
																		}
																		{
																			obj_t BgL_l1225z00_4949;

																			BgL_l1225z00_4949 =
																				CDR(BgL_l1225z00_1256);
																			BgL_l1225z00_1256 = BgL_l1225z00_4949;
																			goto
																				BgL_zc3z04anonymousza31390ze3z87_1257;
																		}
																	}
																else
																	{	/* Lalr/lalr.scm 126 */
																		BgL_tmpz00_4928 = ((bool_t) 1);
																	}
															}
															BBOOL(BgL_tmpz00_4928);
														}
													else
														{	/* Lalr/lalr.scm 141 */
															BGl_errorz00zz__errorz00
																(BGl_string2778z00zz__lalr_expandz00,
																BGl_string2779z00zz__lalr_expandz00,
																BgL_xz00_5);
														}
												}
											else
												{	/* Lalr/lalr.scm 141 */
													BGl_errorz00zz__errorz00
														(BGl_string2778z00zz__lalr_expandz00,
														BGl_string2779z00zz__lalr_expandz00, BgL_xz00_5);
												}
										}
									}
								else
									{	/* Lalr/lalr.scm 141 */
										BGl_errorz00zz__errorz00
											(BGl_string2778z00zz__lalr_expandz00,
											BGl_string2779z00zz__lalr_expandz00, BgL_xz00_5);
									}
							}
							{
								obj_t BgL_l1232z00_4956;

								BgL_l1232z00_4956 = CDR(BgL_l1232z00_2888);
								BgL_l1232z00_2888 = BgL_l1232z00_4956;
								goto BgL_zc3z04anonymousza31380ze3z87_2887;
							}
						}
					else
						{	/* Lalr/lalr.scm 156 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* set-derives */
	bool_t BGl_setzd2deriveszd2zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 165 */
			{	/* Lalr/lalr.scm 166 */
				obj_t BgL_deltsz00_1278;

				BgL_deltsz00_1278 =
					make_vector(
					((long) CINT(BGl_nrulesz00zz__lalr_globalz00) + ((long) 1)),
					BINT(((long) 0)));
				{	/* Lalr/lalr.scm 167 */
					obj_t BgL_dsetz00_1279;

					BgL_dsetz00_1279 =
						make_vector(
						(long) CINT(BGl_nvarsz00zz__lalr_globalz00), BINT(((long) -1)));
					{
						long BgL_iz00_1281;
						long BgL_jz00_1282;

						BgL_iz00_1281 = ((long) 1);
						BgL_jz00_1282 = ((long) 0);
					BgL_zc3z04anonymousza31399ze3z87_1283:
						if ((BgL_iz00_1281 < (long) CINT(BGl_nrulesz00zz__lalr_globalz00)))
							{	/* Lalr/lalr.scm 171 */
								obj_t BgL_lhsz00_1285;

								BgL_lhsz00_1285 =
									VECTOR_REF(BGl_rlhsz00zz__lalr_globalz00, BgL_iz00_1281);
								if (((long) CINT(BgL_lhsz00_1285) >= ((long) 0)))
									{	/* Lalr/lalr.scm 172 */
										{	/* Lalr/lalr.scm 174 */
											obj_t BgL_arg1402z00_1287;

											{	/* Lalr/lalr.scm 174 */
												long BgL_arg1404z00_1288;

												{	/* Lalr/lalr.scm 174 */
													long BgL_kz00_2908;

													BgL_kz00_2908 = (long) CINT(BgL_lhsz00_1285);
													BgL_arg1404z00_1288 =
														(long) CINT(VECTOR_REF(BgL_dsetz00_1279,
															BgL_kz00_2908));
												}
												BgL_arg1402z00_1287 =
													MAKE_YOUNG_PAIR(BINT(BgL_iz00_1281),
													BINT(BgL_arg1404z00_1288));
											}
											VECTOR_SET(BgL_deltsz00_1278, BgL_jz00_1282,
												BgL_arg1402z00_1287);
										}
										VECTOR_SET(BgL_dsetz00_1279,
											(long) CINT(BgL_lhsz00_1285), BINT(BgL_jz00_1282));
										{
											long BgL_jz00_4984;
											long BgL_iz00_4982;

											BgL_iz00_4982 = (BgL_iz00_1281 + ((long) 1));
											BgL_jz00_4984 = (BgL_jz00_1282 + ((long) 1));
											BgL_jz00_1282 = BgL_jz00_4984;
											BgL_iz00_1281 = BgL_iz00_4982;
											goto BgL_zc3z04anonymousza31399ze3z87_1283;
										}
									}
								else
									{
										long BgL_iz00_4986;

										BgL_iz00_4986 = (BgL_iz00_1281 + ((long) 1));
										BgL_iz00_1281 = BgL_iz00_4986;
										goto BgL_zc3z04anonymousza31399ze3z87_1283;
									}
							}
						else
							{	/* Lalr/lalr.scm 170 */
								((bool_t) 0);
							}
					}
					BGl_derivesz00zz__lalr_globalz00 =
						make_vector(
						(long) CINT(BGl_nvarsz00zz__lalr_globalz00), BINT(((long) 0)));
					{
						long BgL_iz00_1294;

						BgL_iz00_1294 = ((long) 0);
					BgL_zc3z04anonymousza31408ze3z87_1295:
						if ((BgL_iz00_1294 < (long) CINT(BGl_nvarsz00zz__lalr_globalz00)))
							{	/* Lalr/lalr.scm 183 */
								obj_t BgL_qz00_1297;

								{	/* Lalr/lalr.scm 183 */
									long BgL_g1132z00_1299;

									BgL_g1132z00_1299 =
										(long) CINT(VECTOR_REF(BgL_dsetz00_1279, BgL_iz00_1294));
									{
										obj_t BgL_jz00_2947;
										obj_t BgL_sz00_2948;

										BgL_jz00_2947 = BINT(BgL_g1132z00_1299);
										BgL_sz00_2948 = BNIL;
									BgL_loop2z00_2946:
										if (((long) CINT(BgL_jz00_2947) < ((long) 0)))
											{	/* Lalr/lalr.scm 184 */
												BgL_qz00_1297 = BgL_sz00_2948;
											}
										else
											{	/* Lalr/lalr.scm 186 */
												obj_t BgL_xz00_2955;

												BgL_xz00_2955 =
													VECTOR_REF(BgL_deltsz00_1278,
													(long) CINT(BgL_jz00_2947));
												{	/* Lalr/lalr.scm 187 */
													obj_t BgL_arg1413z00_2956;
													obj_t BgL_arg1414z00_2957;

													BgL_arg1413z00_2956 = CDR(((obj_t) BgL_xz00_2955));
													{	/* Lalr/lalr.scm 187 */
														obj_t BgL_arg1415z00_2958;

														BgL_arg1415z00_2958 = CAR(((obj_t) BgL_xz00_2955));
														BgL_arg1414z00_2957 =
															MAKE_YOUNG_PAIR(BgL_arg1415z00_2958,
															BgL_sz00_2948);
													}
													{
														obj_t BgL_sz00_5007;
														obj_t BgL_jz00_5006;

														BgL_jz00_5006 = BgL_arg1413z00_2956;
														BgL_sz00_5007 = BgL_arg1414z00_2957;
														BgL_sz00_2948 = BgL_sz00_5007;
														BgL_jz00_2947 = BgL_jz00_5006;
														goto BgL_loop2z00_2946;
													}
												}
											}
									}
								}
								VECTOR_SET(BGl_derivesz00zz__lalr_globalz00, BgL_iz00_1294,
									BgL_qz00_1297);
								{
									long BgL_iz00_5010;

									BgL_iz00_5010 = (BgL_iz00_1294 + ((long) 1));
									BgL_iz00_1294 = BgL_iz00_5010;
									goto BgL_zc3z04anonymousza31408ze3z87_1295;
								}
							}
						else
							{	/* Lalr/lalr.scm 182 */
								return ((bool_t) 0);
							}
					}
				}
			}
		}

	}



/* set-nullable */
	bool_t BGl_setzd2nullablezd2zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 193 */
			BGl_nullablez00zz__lalr_globalz00 =
				make_vector((long) CINT(BGl_nvarsz00zz__lalr_globalz00), BFALSE);
			{	/* Lalr/lalr.scm 195 */
				obj_t BgL_squeuez00_1313;
				obj_t BgL_rcountz00_1314;
				obj_t BgL_rsetsz00_1315;
				obj_t BgL_reltsz00_1316;

				BgL_squeuez00_1313 =
					make_vector(
					(long) CINT(BGl_nvarsz00zz__lalr_globalz00), BINT(((long) 0)));
				BgL_rcountz00_1314 =
					make_vector(
					((long) CINT(BGl_nrulesz00zz__lalr_globalz00) + ((long) 1)),
					BINT(((long) 0)));
				BgL_rsetsz00_1315 =
					make_vector((long) CINT(BGl_nvarsz00zz__lalr_globalz00), BFALSE);
				{	/* Lalr/lalr.scm 198 */
					long BgL_arg1457z00_1392;

					{	/* Lalr/lalr.scm 198 */
						long BgL_za71za7_2973;

						BgL_za71za7_2973 = (long) CINT(BGl_nitemsz00zz__lalr_globalz00);
						BgL_arg1457z00_1392 =
							(BgL_za71za7_2973 +
							((long) CINT(BGl_nvarsz00zz__lalr_globalz00) + ((long) 1)));
					}
					BgL_reltsz00_1316 = make_vector(BgL_arg1457z00_1392, BFALSE);
				}
				return
					BGl_loopze73ze7zz__lalr_expandz00(BgL_squeuez00_1313,
					BgL_rsetsz00_1315, BgL_rcountz00_1314, BgL_reltsz00_1316, ((long) 0),
					((long) 0), ((long) 0));
		}}

	}



/* loop3~0 */
	bool_t BGl_loop3ze70ze7zz__lalr_expandz00(obj_t BgL_reltsz00_4747,
		obj_t BgL_rsetsz00_4746, long BgL_rulenoz00_4745, obj_t BgL_rcountz00_4744,
		long BgL_s2z00_4743, obj_t BgL_squeuez00_4742, long BgL_r2z00_1345,
		long BgL_p2z00_1346)
	{
		{	/* Lalr/lalr.scm 216 */
		BGl_loop3ze70ze7zz__lalr_expandz00:
			{	/* Lalr/lalr.scm 217 */
				obj_t BgL_symbolz00_1348;

				BgL_symbolz00_1348 =
					VECTOR_REF(BGl_ritemz00zz__lalr_globalz00, BgL_r2z00_1345);
				if (((long) CINT(BgL_symbolz00_1348) > ((long) 0)))
					{	/* Lalr/lalr.scm 218 */
						{	/* Lalr/lalr.scm 221 */
							long BgL_arg1433z00_1350;

							BgL_arg1433z00_1350 =
								(
								(long) CINT(VECTOR_REF(BgL_rcountz00_4744,
										BgL_rulenoz00_4745)) + ((long) 1));
							VECTOR_SET(BgL_rcountz00_4744, BgL_rulenoz00_4745,
								BINT(BgL_arg1433z00_1350));
						}
						{	/* Lalr/lalr.scm 223 */
							obj_t BgL_arg1435z00_1352;

							BgL_arg1435z00_1352 =
								MAKE_YOUNG_PAIR(VECTOR_REF(BgL_rsetsz00_4746,
									(long) CINT(BgL_symbolz00_1348)), BINT(BgL_rulenoz00_4745));
							VECTOR_SET(BgL_reltsz00_4747, BgL_p2z00_1346,
								BgL_arg1435z00_1352);
						}
						VECTOR_SET(BgL_rsetsz00_4746,
							(long) CINT(BgL_symbolz00_1348), BINT(BgL_p2z00_1346));
						{
							long BgL_p2z00_5048;
							long BgL_r2z00_5046;

							BgL_r2z00_5046 = (BgL_r2z00_1345 + ((long) 1));
							BgL_p2z00_5048 = (BgL_p2z00_1346 + ((long) 1));
							BgL_p2z00_1346 = BgL_p2z00_5048;
							BgL_r2z00_1345 = BgL_r2z00_5046;
							goto BGl_loop3ze70ze7zz__lalr_expandz00;
						}
					}
				else
					{	/* Lalr/lalr.scm 218 */
						return
							BGl_loopze73ze7zz__lalr_expandz00(BgL_squeuez00_4742,
							BgL_rsetsz00_4746, BgL_rcountz00_4744, BgL_reltsz00_4747,
							(BgL_r2z00_1345 + ((long) 1)), BgL_s2z00_4743, BgL_p2z00_1346);
		}}}

	}



/* loop2~0 */
	bool_t BGl_loop2ze70ze7zz__lalr_expandz00(long BgL_s2z00_4754,
		long BgL_pz00_4753, long BgL_rz00_4752, obj_t BgL_squeuez00_4751,
		obj_t BgL_rsetsz00_4750, obj_t BgL_rcountz00_4749, obj_t BgL_reltsz00_4748,
		long BgL_r1z00_1334, bool_t BgL_anyzd2tokenszd2_1335)
	{
		{	/* Lalr/lalr.scm 210 */
		BGl_loop2ze70ze7zz__lalr_expandz00:
			{	/* Lalr/lalr.scm 211 */
				obj_t BgL_symbolz00_1337;

				BgL_symbolz00_1337 =
					VECTOR_REF(BGl_ritemz00zz__lalr_globalz00, BgL_r1z00_1334);
				{	/* Lalr/lalr.scm 211 */

					if (((long) CINT(BgL_symbolz00_1337) > ((long) 0)))
						{	/* Lalr/lalr.scm 213 */
							long BgL_arg1428z00_1339;
							bool_t BgL_arg1429z00_1340;

							BgL_arg1428z00_1339 = (BgL_r1z00_1334 + ((long) 1));
							if (BgL_anyzd2tokenszd2_1335)
								{	/* Lalr/lalr.scm 213 */
									BgL_arg1429z00_1340 = BgL_anyzd2tokenszd2_1335;
								}
							else
								{	/* Lalr/lalr.scm 213 */
									BgL_arg1429z00_1340 =
										(
										(long) CINT(BgL_symbolz00_1337) >=
										(long) CINT(BGl_nvarsz00zz__lalr_globalz00));
								}
							{
								bool_t BgL_anyzd2tokenszd2_5062;
								long BgL_r1z00_5061;

								BgL_r1z00_5061 = BgL_arg1428z00_1339;
								BgL_anyzd2tokenszd2_5062 = BgL_arg1429z00_1340;
								BgL_anyzd2tokenszd2_1335 = BgL_anyzd2tokenszd2_5062;
								BgL_r1z00_1334 = BgL_r1z00_5061;
								goto BGl_loop2ze70ze7zz__lalr_expandz00;
							}
						}
					else
						{	/* Lalr/lalr.scm 212 */
							if (BgL_anyzd2tokenszd2_1335)
								{	/* Lalr/lalr.scm 214 */
									return
										BGl_loopze73ze7zz__lalr_expandz00(BgL_squeuez00_4751,
										BgL_rsetsz00_4750, BgL_rcountz00_4749, BgL_reltsz00_4748,
										(BgL_r1z00_1334 + ((long) 1)), BgL_s2z00_4754,
										BgL_pz00_4753);
								}
							else
								{	/* Lalr/lalr.scm 214 */
									return
										BGl_loop3ze70ze7zz__lalr_expandz00(BgL_reltsz00_4748,
										BgL_rsetsz00_4750, NEG((long) CINT(BgL_symbolz00_1337)),
										BgL_rcountz00_4749, BgL_s2z00_4754, BgL_squeuez00_4751,
										BgL_rz00_4752, BgL_pz00_4753);
		}}}}}

	}



/* loop~4 */
	bool_t BGl_loopze74ze7zz__lalr_expandz00(obj_t BgL_rsetsz00_4758,
		obj_t BgL_squeuez00_4757, obj_t BgL_rcountz00_4756, obj_t BgL_reltsz00_4755,
		long BgL_s1z00_1360, long BgL_s3z00_1361)
	{
		{	/* Lalr/lalr.scm 229 */
			if ((BgL_s1z00_1360 < BgL_s3z00_1361))
				{	/* Lalr/lalr.scm 231 */
					obj_t BgL_g1135z00_1364;

					{	/* Lalr/lalr.scm 231 */
						obj_t BgL_arg1455z00_1388;

						BgL_arg1455z00_1388 =
							VECTOR_REF(BgL_squeuez00_4757, BgL_s1z00_1360);
						BgL_g1135z00_1364 =
							VECTOR_REF(BgL_rsetsz00_4758, (long) CINT(BgL_arg1455z00_1388));
					}
					return
						BGl_loop2ze71ze7zz__lalr_expandz00(BgL_s1z00_1360,
						BgL_squeuez00_4757, BgL_rcountz00_4756, BgL_reltsz00_4755,
						BgL_rsetsz00_4758, BgL_g1135z00_1364, BgL_s3z00_1361);
				}
			else
				{	/* Lalr/lalr.scm 230 */
					return ((bool_t) 0);
				}
		}

	}



/* loop~3 */
	bool_t BGl_loopze73ze7zz__lalr_expandz00(obj_t BgL_squeuez00_4762,
		obj_t BgL_rsetsz00_4761, obj_t BgL_rcountz00_4760, obj_t BgL_reltsz00_4759,
		long BgL_rz00_1318, long BgL_s2z00_1319, long BgL_pz00_1320)
	{
		{	/* Lalr/lalr.scm 199 */
		BGl_loopze73ze7zz__lalr_expandz00:
			{	/* Lalr/lalr.scm 200 */
				obj_t BgL_za2rza2_1322;

				BgL_za2rza2_1322 =
					VECTOR_REF(BGl_ritemz00zz__lalr_globalz00, BgL_rz00_1318);
				if (CBOOL(BgL_za2rza2_1322))
					{	/* Lalr/lalr.scm 201 */
						if (((long) CINT(BgL_za2rza2_1322) < ((long) 0)))
							{	/* Lalr/lalr.scm 203 */
								obj_t BgL_symbolz00_1324;

								BgL_symbolz00_1324 =
									VECTOR_REF(BGl_rlhsz00zz__lalr_globalz00,
									NEG((long) CINT(BgL_za2rza2_1322)));
								{	/* Lalr/lalr.scm 204 */
									bool_t BgL_test2883z00_5084;

									if (((long) CINT(BgL_symbolz00_1324) >= ((long) 0)))
										{	/* Lalr/lalr.scm 205 */
											bool_t BgL_test2885z00_5088;

											{	/* Lalr/lalr.scm 205 */
												obj_t BgL_vectorz00_2986;
												long BgL_kz00_2987;

												BgL_vectorz00_2986 = BGl_nullablez00zz__lalr_globalz00;
												BgL_kz00_2987 = (long) CINT(BgL_symbolz00_1324);
												BgL_test2885z00_5088 =
													CBOOL(VECTOR_REF(BgL_vectorz00_2986, BgL_kz00_2987));
											}
											if (BgL_test2885z00_5088)
												{	/* Lalr/lalr.scm 205 */
													BgL_test2883z00_5084 = ((bool_t) 0);
												}
											else
												{	/* Lalr/lalr.scm 205 */
													BgL_test2883z00_5084 = ((bool_t) 1);
												}
										}
									else
										{	/* Lalr/lalr.scm 204 */
											BgL_test2883z00_5084 = ((bool_t) 0);
										}
									if (BgL_test2883z00_5084)
										{	/* Lalr/lalr.scm 204 */
											VECTOR_SET(BGl_nullablez00zz__lalr_globalz00,
												(long) CINT(BgL_symbolz00_1324), BTRUE);
											VECTOR_SET(BgL_squeuez00_4762, BgL_s2z00_1319,
												BgL_symbolz00_1324);
											{
												long BgL_s2z00_5097;
												long BgL_rz00_5095;

												BgL_rz00_5095 = (BgL_rz00_1318 + ((long) 1));
												BgL_s2z00_5097 = (BgL_s2z00_1319 + ((long) 1));
												BgL_s2z00_1319 = BgL_s2z00_5097;
												BgL_rz00_1318 = BgL_rz00_5095;
												goto BGl_loopze73ze7zz__lalr_expandz00;
											}
										}
									else
										{	/* Lalr/lalr.scm 204 */
											return ((bool_t) 0);
										}
								}
							}
						else
							{	/* Lalr/lalr.scm 202 */
								return
									BGl_loop2ze70ze7zz__lalr_expandz00(BgL_s2z00_1319,
									BgL_pz00_1320, BgL_rz00_1318, BgL_squeuez00_4762,
									BgL_rsetsz00_4761, BgL_rcountz00_4760, BgL_reltsz00_4759,
									BgL_rz00_1318, ((bool_t) 0));
							}
					}
				else
					{	/* Lalr/lalr.scm 201 */
						return
							BGl_loopze74ze7zz__lalr_expandz00(BgL_rsetsz00_4761,
							BgL_squeuez00_4762, BgL_rcountz00_4760, BgL_reltsz00_4759,
							((long) 0), BgL_s2z00_1319);
		}}}

	}



/* loop2~1 */
	bool_t BGl_loop2ze71ze7zz__lalr_expandz00(long BgL_s1z00_4767,
		obj_t BgL_squeuez00_4766, obj_t BgL_rcountz00_4765, obj_t BgL_reltsz00_4764,
		obj_t BgL_rsetsz00_4763, obj_t BgL_pz00_1366, long BgL_s4z00_1367)
	{
		{	/* Lalr/lalr.scm 231 */
			if (CBOOL(BgL_pz00_1366))
				{	/* Lalr/lalr.scm 233 */
					obj_t BgL_xz00_1369;

					BgL_xz00_1369 =
						VECTOR_REF(BgL_reltsz00_4764, (long) CINT(BgL_pz00_1366));
					{	/* Lalr/lalr.scm 233 */
						obj_t BgL_rulenoz00_1370;

						BgL_rulenoz00_1370 = CDR(((obj_t) BgL_xz00_1369));
						{	/* Lalr/lalr.scm 234 */
							long BgL_yz00_1371;

							{	/* Lalr/lalr.scm 235 */
								long BgL_arg1453z00_1385;

								{	/* Lalr/lalr.scm 235 */
									long BgL_kz00_3042;

									BgL_kz00_3042 = (long) CINT(BgL_rulenoz00_1370);
									BgL_arg1453z00_1385 =
										(long) CINT(VECTOR_REF(BgL_rcountz00_4765, BgL_kz00_3042));
								}
								BgL_yz00_1371 = (BgL_arg1453z00_1385 - ((long) 1));
							}
							{	/* Lalr/lalr.scm 235 */

								VECTOR_SET(BgL_rcountz00_4765,
									(long) CINT(BgL_rulenoz00_1370), BINT(BgL_yz00_1371));
								if ((BgL_yz00_1371 == ((long) 0)))
									{	/* Lalr/lalr.scm 238 */
										obj_t BgL_symbolz00_1374;

										BgL_symbolz00_1374 =
											VECTOR_REF(BGl_rlhsz00zz__lalr_globalz00,
											(long) CINT(BgL_rulenoz00_1370));
										{	/* Lalr/lalr.scm 239 */
											bool_t BgL_test2888z00_5118;

											if (((long) CINT(BgL_symbolz00_1374) >= ((long) 0)))
												{	/* Lalr/lalr.scm 240 */
													bool_t BgL_test2890z00_5122;

													{	/* Lalr/lalr.scm 240 */
														obj_t BgL_vectorz00_3054;
														long BgL_kz00_3055;

														BgL_vectorz00_3054 =
															BGl_nullablez00zz__lalr_globalz00;
														BgL_kz00_3055 = (long) CINT(BgL_symbolz00_1374);
														BgL_test2890z00_5122 =
															CBOOL(VECTOR_REF(BgL_vectorz00_3054,
																BgL_kz00_3055));
													}
													if (BgL_test2890z00_5122)
														{	/* Lalr/lalr.scm 240 */
															BgL_test2888z00_5118 = ((bool_t) 0);
														}
													else
														{	/* Lalr/lalr.scm 240 */
															BgL_test2888z00_5118 = ((bool_t) 1);
														}
												}
											else
												{	/* Lalr/lalr.scm 239 */
													BgL_test2888z00_5118 = ((bool_t) 0);
												}
											if (BgL_test2888z00_5118)
												{	/* Lalr/lalr.scm 239 */
													VECTOR_SET(BGl_nullablez00zz__lalr_globalz00,
														(long) CINT(BgL_symbolz00_1374), BTRUE);
													VECTOR_SET(BgL_squeuez00_4766, BgL_s4z00_1367,
														BgL_symbolz00_1374);
													{	/* Lalr/lalr.scm 244 */
														obj_t BgL_arg1448z00_1378;
														long BgL_arg1449z00_1379;

														BgL_arg1448z00_1378 = CAR(((obj_t) BgL_xz00_1369));
														BgL_arg1449z00_1379 = (BgL_s4z00_1367 + ((long) 1));
														BGl_loop2ze71ze7zz__lalr_expandz00(BgL_s1z00_4767,
															BgL_squeuez00_4766, BgL_rcountz00_4765,
															BgL_reltsz00_4764, BgL_rsetsz00_4763,
															BgL_arg1448z00_1378, BgL_arg1449z00_1379);
												}}
											else
												{	/* Lalr/lalr.scm 245 */
													obj_t BgL_arg1451z00_1380;

													BgL_arg1451z00_1380 = CAR(((obj_t) BgL_xz00_1369));
													BGl_loop2ze71ze7zz__lalr_expandz00(BgL_s1z00_4767,
														BgL_squeuez00_4766, BgL_rcountz00_4765,
														BgL_reltsz00_4764, BgL_rsetsz00_4763,
														BgL_arg1451z00_1380, BgL_s4z00_1367);
												}
										}
									}
								else
									{	/* Lalr/lalr.scm 246 */
										obj_t BgL_arg1452z00_1383;

										BgL_arg1452z00_1383 = CAR(((obj_t) BgL_xz00_1369));
										BGl_loop2ze71ze7zz__lalr_expandz00(BgL_s1z00_4767,
											BgL_squeuez00_4766, BgL_rcountz00_4765, BgL_reltsz00_4764,
											BgL_rsetsz00_4763, BgL_arg1452z00_1383, BgL_s4z00_1367);
									}
							}
						}
					}
				}
			else
				{	/* Lalr/lalr.scm 232 */
					((bool_t) 0);
				}
			return
				BGl_loopze74ze7zz__lalr_expandz00(BgL_rsetsz00_4763, BgL_squeuez00_4766,
				BgL_rcountz00_4765, BgL_reltsz00_4764, (BgL_s1z00_4767 + ((long) 1)),
				BgL_s4z00_1367);
		}

	}



/* set-firsts */
	bool_t BGl_setzd2firstszd2zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 256 */
			BGl_firstsz00zz__lalr_globalz00 =
				make_vector((long) CINT(BGl_nvarsz00zz__lalr_globalz00), BNIL);
			{
				long BgL_iz00_1395;

				BgL_iz00_1395 = ((long) 0);
			BgL_zc3z04anonymousza31459ze3z87_1396:
				if ((BgL_iz00_1395 < (long) CINT(BGl_nvarsz00zz__lalr_globalz00)))
					{	/* Lalr/lalr.scm 262 */
						obj_t BgL_g1136z00_1398;

						BgL_g1136z00_1398 =
							VECTOR_REF(BGl_derivesz00zz__lalr_globalz00, BgL_iz00_1395);
						{
							obj_t BgL_spz00_1400;

							BgL_spz00_1400 = BgL_g1136z00_1398;
						BgL_zc3z04anonymousza31461ze3z87_1401:
							if (NULLP(BgL_spz00_1400))
								{
									long BgL_iz00_5149;

									BgL_iz00_5149 = (BgL_iz00_1395 + ((long) 1));
									BgL_iz00_1395 = BgL_iz00_5149;
									goto BgL_zc3z04anonymousza31459ze3z87_1396;
								}
							else
								{	/* Lalr/lalr.scm 265 */
									obj_t BgL_symz00_1404;

									{	/* Lalr/lalr.scm 265 */
										obj_t BgL_arg1468z00_1411;

										{	/* Lalr/lalr.scm 265 */
											obj_t BgL_arg1469z00_1412;

											BgL_arg1469z00_1412 = CAR(((obj_t) BgL_spz00_1400));
											BgL_arg1468z00_1411 =
												VECTOR_REF(BGl_rrhsz00zz__lalr_globalz00,
												(long) CINT(BgL_arg1469z00_1412));
										}
										BgL_symz00_1404 =
											VECTOR_REF(BGl_ritemz00zz__lalr_globalz00,
											(long) CINT(BgL_arg1468z00_1411));
									}
									{	/* Lalr/lalr.scm 266 */
										bool_t BgL_test2893z00_5157;

										if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT(((long) -1)),
												BgL_symz00_1404))
											{	/* Lalr/lalr.scm 266 */
												BgL_test2893z00_5157 =
													BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_symz00_1404,
													BGl_nvarsz00zz__lalr_globalz00);
											}
										else
											{	/* Lalr/lalr.scm 266 */
												BgL_test2893z00_5157 = ((bool_t) 0);
											}
										if (BgL_test2893z00_5157)
											{	/* Lalr/lalr.scm 266 */
												VECTOR_SET(BGl_firstsz00zz__lalr_globalz00,
													BgL_iz00_1395,
													BGl_sinsertz00zz__lalr_utilz00(BgL_symz00_1404,
														VECTOR_REF(BGl_firstsz00zz__lalr_globalz00,
															BgL_iz00_1395)));
											}
										else
											{	/* Lalr/lalr.scm 266 */
												BFALSE;
											}
									}
									{	/* Lalr/lalr.scm 268 */
										obj_t BgL_arg1467z00_1410;

										BgL_arg1467z00_1410 = CDR(((obj_t) BgL_spz00_1400));
										{
											obj_t BgL_spz00_5167;

											BgL_spz00_5167 = BgL_arg1467z00_1410;
											BgL_spz00_1400 = BgL_spz00_5167;
											goto BgL_zc3z04anonymousza31461ze3z87_1401;
										}
									}
								}
						}
					}
				else
					{	/* Lalr/lalr.scm 261 */
						((bool_t) 0);
					}
			}
			{
				bool_t BgL_continuez00_1416;

				BgL_continuez00_1416 = ((bool_t) 1);
			BgL_zc3z04anonymousza31470ze3z87_1417:
				if (BgL_continuez00_1416)
					{
						long BgL_iz00_1419;
						bool_t BgL_contz00_1420;

						BgL_iz00_1419 = ((long) 0);
						BgL_contz00_1420 = ((bool_t) 0);
					BgL_zc3z04anonymousza31471ze3z87_1421:
						if ((BgL_iz00_1419 >= (long) CINT(BGl_nvarsz00zz__lalr_globalz00)))
							{
								bool_t BgL_continuez00_5172;

								BgL_continuez00_5172 = BgL_contz00_1420;
								BgL_continuez00_1416 = BgL_continuez00_5172;
								goto BgL_zc3z04anonymousza31470ze3z87_1417;
							}
						else
							{	/* Lalr/lalr.scm 276 */
								obj_t BgL_xz00_1423;

								BgL_xz00_1423 =
									VECTOR_REF(BGl_firstsz00zz__lalr_globalz00, BgL_iz00_1419);
								{	/* Lalr/lalr.scm 276 */
									obj_t BgL_yz00_1424;

									{
										obj_t BgL_lz00_3111;
										obj_t BgL_za7za7_3112;

										BgL_lz00_3111 = BgL_xz00_1423;
										BgL_za7za7_3112 = BgL_xz00_1423;
									BgL_loop3z00_3110:
										if (NULLP(BgL_lz00_3111))
											{	/* Lalr/lalr.scm 278 */
												BgL_yz00_1424 = BgL_za7za7_3112;
											}
										else
											{	/* Lalr/lalr.scm 280 */
												obj_t BgL_arg1478z00_3119;
												obj_t BgL_arg1479z00_3120;

												BgL_arg1478z00_3119 = CDR(((obj_t) BgL_lz00_3111));
												{	/* Lalr/lalr.scm 281 */
													obj_t BgL_arg1480z00_3121;

													{	/* Lalr/lalr.scm 281 */
														obj_t BgL_arg1483z00_3122;

														BgL_arg1483z00_3122 = CAR(((obj_t) BgL_lz00_3111));
														BgL_arg1480z00_3121 =
															VECTOR_REF(BGl_firstsz00zz__lalr_globalz00,
															(long) CINT(BgL_arg1483z00_3122));
													}
													BgL_arg1479z00_3120 =
														BGl_sunionz00zz__lalr_utilz00(BgL_arg1480z00_3121,
														BgL_za7za7_3112);
												}
												{
													obj_t BgL_za7za7_5184;
													obj_t BgL_lz00_5183;

													BgL_lz00_5183 = BgL_arg1478z00_3119;
													BgL_za7za7_5184 = BgL_arg1479z00_3120;
													BgL_za7za7_3112 = BgL_za7za7_5184;
													BgL_lz00_3111 = BgL_lz00_5183;
													goto BgL_loop3z00_3110;
												}
											}
									}
									{	/* Lalr/lalr.scm 277 */

										if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_xz00_1423,
												BgL_yz00_1424))
											{
												long BgL_iz00_5187;

												BgL_iz00_5187 = (BgL_iz00_1419 + ((long) 1));
												BgL_iz00_1419 = BgL_iz00_5187;
												goto BgL_zc3z04anonymousza31471ze3z87_1421;
											}
										else
											{	/* Lalr/lalr.scm 282 */
												VECTOR_SET(BGl_firstsz00zz__lalr_globalz00,
													BgL_iz00_1419, BgL_yz00_1424);
												{
													bool_t BgL_contz00_5192;
													long BgL_iz00_5190;

													BgL_iz00_5190 = (BgL_iz00_1419 + ((long) 1));
													BgL_contz00_5192 = ((bool_t) 1);
													BgL_contz00_1420 = BgL_contz00_5192;
													BgL_iz00_1419 = BgL_iz00_5190;
													goto BgL_zc3z04anonymousza31471ze3z87_1421;
												}
											}
									}
								}
							}
					}
				else
					{	/* Lalr/lalr.scm 272 */
						((bool_t) 0);
					}
			}
			{
				long BgL_iz00_3144;

				BgL_iz00_3144 = ((long) 0);
			BgL_loopz00_3143:
				if ((BgL_iz00_3144 < (long) CINT(BGl_nvarsz00zz__lalr_globalz00)))
					{	/* Lalr/lalr.scm 289 */
						VECTOR_SET(BGl_firstsz00zz__lalr_globalz00, BgL_iz00_3144,
							BGl_sinsertz00zz__lalr_utilz00(BINT(BgL_iz00_3144),
								VECTOR_REF(BGl_firstsz00zz__lalr_globalz00, BgL_iz00_3144)));
						{
							long BgL_iz00_5200;

							BgL_iz00_5200 = (BgL_iz00_3144 + ((long) 1));
							BgL_iz00_3144 = BgL_iz00_5200;
							goto BgL_loopz00_3143;
						}
					}
				else
					{	/* Lalr/lalr.scm 289 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* set-fderives */
	bool_t BGl_setzd2fderiveszd2zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 301 */
			BGl_fderivesz00zz__lalr_globalz00 =
				make_vector((long) CINT(BGl_nvarsz00zz__lalr_globalz00), BFALSE);
			BGl_setzd2firstszd2zz__lalr_expandz00();
			{
				long BgL_iz00_1449;

				BgL_iz00_1449 = ((long) 0);
			BgL_zc3z04anonymousza31490ze3z87_1450:
				if ((BgL_iz00_1449 < (long) CINT(BGl_nvarsz00zz__lalr_globalz00)))
					{	/* Lalr/lalr.scm 308 */
						obj_t BgL_xz00_1452;

						{	/* Lalr/lalr.scm 308 */
							obj_t BgL_g1137z00_1454;

							BgL_g1137z00_1454 =
								VECTOR_REF(BGl_firstsz00zz__lalr_globalz00, BgL_iz00_1449);
							{
								obj_t BgL_lz00_3184;
								obj_t BgL_fdz00_3185;

								BgL_lz00_3184 = BgL_g1137z00_1454;
								BgL_fdz00_3185 = BNIL;
							BgL_loop2z00_3183:
								if (NULLP(BgL_lz00_3184))
									{	/* Lalr/lalr.scm 309 */
										BgL_xz00_1452 = BgL_fdz00_3185;
									}
								else
									{	/* Lalr/lalr.scm 311 */
										obj_t BgL_arg1495z00_3192;
										obj_t BgL_arg1496z00_3193;

										BgL_arg1495z00_3192 = CDR(((obj_t) BgL_lz00_3184));
										{	/* Lalr/lalr.scm 312 */
											obj_t BgL_arg1497z00_3194;

											{	/* Lalr/lalr.scm 312 */
												obj_t BgL_arg1498z00_3195;

												BgL_arg1498z00_3195 = CAR(((obj_t) BgL_lz00_3184));
												BgL_arg1497z00_3194 =
													VECTOR_REF(BGl_derivesz00zz__lalr_globalz00,
													(long) CINT(BgL_arg1498z00_3195));
											}
											BgL_arg1496z00_3193 =
												BGl_sunionz00zz__lalr_utilz00(BgL_arg1497z00_3194,
												BgL_fdz00_3185);
										}
										{
											obj_t BgL_fdz00_5219;
											obj_t BgL_lz00_5218;

											BgL_lz00_5218 = BgL_arg1495z00_3192;
											BgL_fdz00_5219 = BgL_arg1496z00_3193;
											BgL_fdz00_3185 = BgL_fdz00_5219;
											BgL_lz00_3184 = BgL_lz00_5218;
											goto BgL_loop2z00_3183;
										}
									}
							}
						}
						VECTOR_SET(BGl_fderivesz00zz__lalr_globalz00, BgL_iz00_1449,
							BgL_xz00_1452);
						{
							long BgL_iz00_5221;

							BgL_iz00_5221 = (BgL_iz00_1449 + ((long) 1));
							BgL_iz00_1449 = BgL_iz00_5221;
							goto BgL_zc3z04anonymousza31490ze3z87_1450;
						}
					}
				else
					{	/* Lalr/lalr.scm 307 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* closure */
	obj_t BGl_closurez00zz__lalr_expandz00(obj_t BgL_corez00_8)
	{
		{	/* Lalr/lalr.scm 320 */
			{	/* Lalr/lalr.scm 320 */
				obj_t BgL_rulesetz00_1467;

				BgL_rulesetz00_1467 =
					make_vector((long) CINT(BGl_nrulesz00zz__lalr_globalz00), BFALSE);
				{
					obj_t BgL_cspz00_1469;

					BgL_cspz00_1469 = BgL_corez00_8;
				BgL_zc3z04anonymousza31499ze3z87_1470:
					if (NULLP(BgL_cspz00_1469))
						{	/* Lalr/lalr.scm 325 */
							((bool_t) 0);
						}
					else
						{	/* Lalr/lalr.scm 326 */
							obj_t BgL_symz00_1472;

							{	/* Lalr/lalr.scm 326 */
								obj_t BgL_arg1508z00_1485;

								BgL_arg1508z00_1485 = CAR(((obj_t) BgL_cspz00_1469));
								BgL_symz00_1472 =
									VECTOR_REF(BGl_ritemz00zz__lalr_globalz00,
									(long) CINT(BgL_arg1508z00_1485));
							}
							{	/* Lalr/lalr.scm 327 */
								bool_t BgL_test2903z00_5231;

								if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT(((long) -1)),
										BgL_symz00_1472))
									{	/* Lalr/lalr.scm 327 */
										BgL_test2903z00_5231 =
											BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_symz00_1472,
											BGl_nvarsz00zz__lalr_globalz00);
									}
								else
									{	/* Lalr/lalr.scm 327 */
										BgL_test2903z00_5231 = ((bool_t) 0);
									}
								if (BgL_test2903z00_5231)
									{	/* Lalr/lalr.scm 328 */
										obj_t BgL_g1139z00_1475;

										BgL_g1139z00_1475 =
											VECTOR_REF(BGl_fderivesz00zz__lalr_globalz00,
											(long) CINT(BgL_symz00_1472));
										{
											obj_t BgL_dspz00_3228;

											BgL_dspz00_3228 = BgL_g1139z00_1475;
										BgL_loop2z00_3227:
											if (NULLP(BgL_dspz00_3228))
												{	/* Lalr/lalr.scm 329 */
													((bool_t) 0);
												}
											else
												{	/* Lalr/lalr.scm 329 */
													{	/* Lalr/lalr.scm 331 */
														obj_t BgL_arg1505z00_3233;

														BgL_arg1505z00_3233 =
															CAR(((obj_t) BgL_dspz00_3228));
														VECTOR_SET(BgL_rulesetz00_1467,
															(long) CINT(BgL_arg1505z00_3233), BTRUE);
													}
													{	/* Lalr/lalr.scm 332 */
														obj_t BgL_arg1506z00_3234;

														BgL_arg1506z00_3234 =
															CDR(((obj_t) BgL_dspz00_3228));
														{
															obj_t BgL_dspz00_5246;

															BgL_dspz00_5246 = BgL_arg1506z00_3234;
															BgL_dspz00_3228 = BgL_dspz00_5246;
															goto BgL_loop2z00_3227;
														}
													}
												}
										}
									}
								else
									{	/* Lalr/lalr.scm 327 */
										((bool_t) 0);
									}
							}
							{	/* Lalr/lalr.scm 333 */
								obj_t BgL_arg1507z00_1484;

								BgL_arg1507z00_1484 = CDR(((obj_t) BgL_cspz00_1469));
								{
									obj_t BgL_cspz00_5249;

									BgL_cspz00_5249 = BgL_arg1507z00_1484;
									BgL_cspz00_1469 = BgL_cspz00_5249;
									goto BgL_zc3z04anonymousza31499ze3z87_1470;
								}
							}
						}
				}
				{
					long BgL_rulenoz00_1489;
					obj_t BgL_cspz00_1490;
					obj_t BgL_itemsetvz00_1491;

					BgL_rulenoz00_1489 = ((long) 1);
					BgL_cspz00_1490 = BgL_corez00_8;
					BgL_itemsetvz00_1491 = BNIL;
				BgL_zc3z04anonymousza31509ze3z87_1492:
					if (
						(BgL_rulenoz00_1489 < (long) CINT(BGl_nrulesz00zz__lalr_globalz00)))
						{	/* Lalr/lalr.scm 336 */
							if (CBOOL(VECTOR_REF(BgL_rulesetz00_1467, BgL_rulenoz00_1489)))
								{	/* Lalr/lalr.scm 338 */
									obj_t BgL_itemnoz00_1495;

									BgL_itemnoz00_1495 =
										VECTOR_REF(BGl_rrhsz00zz__lalr_globalz00,
										BgL_rulenoz00_1489);
									{
										obj_t BgL_cz00_1497;
										obj_t BgL_itemsetv2z00_1498;

										BgL_cz00_1497 = BgL_cspz00_1490;
										BgL_itemsetv2z00_1498 = BgL_itemsetvz00_1491;
									BgL_zc3z04anonymousza31512ze3z87_1499:
										{	/* Lalr/lalr.scm 340 */
											bool_t BgL_test2908z00_5257;

											if (PAIRP(BgL_cz00_1497))
												{	/* Lalr/lalr.scm 340 */
													BgL_test2908z00_5257 =
														(
														(long) CINT(CAR(BgL_cz00_1497)) <
														(long) CINT(BgL_itemnoz00_1495));
												}
											else
												{	/* Lalr/lalr.scm 340 */
													BgL_test2908z00_5257 = ((bool_t) 0);
												}
											if (BgL_test2908z00_5257)
												{	/* Lalr/lalr.scm 342 */
													obj_t BgL_arg1516z00_1503;
													obj_t BgL_arg1518z00_1504;

													BgL_arg1516z00_1503 = CDR(BgL_cz00_1497);
													BgL_arg1518z00_1504 =
														MAKE_YOUNG_PAIR(CAR(BgL_cz00_1497),
														BgL_itemsetv2z00_1498);
													{
														obj_t BgL_itemsetv2z00_5268;
														obj_t BgL_cz00_5267;

														BgL_cz00_5267 = BgL_arg1516z00_1503;
														BgL_itemsetv2z00_5268 = BgL_arg1518z00_1504;
														BgL_itemsetv2z00_1498 = BgL_itemsetv2z00_5268;
														BgL_cz00_1497 = BgL_cz00_5267;
														goto BgL_zc3z04anonymousza31512ze3z87_1499;
													}
												}
											else
												{	/* Lalr/lalr.scm 343 */
													long BgL_arg1520z00_1506;
													obj_t BgL_arg1521z00_1507;

													BgL_arg1520z00_1506 =
														(BgL_rulenoz00_1489 + ((long) 1));
													BgL_arg1521z00_1507 =
														MAKE_YOUNG_PAIR(BgL_itemnoz00_1495,
														BgL_itemsetv2z00_1498);
													{
														obj_t BgL_itemsetvz00_5273;
														obj_t BgL_cspz00_5272;
														long BgL_rulenoz00_5271;

														BgL_rulenoz00_5271 = BgL_arg1520z00_1506;
														BgL_cspz00_5272 = BgL_cz00_1497;
														BgL_itemsetvz00_5273 = BgL_arg1521z00_1507;
														BgL_itemsetvz00_1491 = BgL_itemsetvz00_5273;
														BgL_cspz00_1490 = BgL_cspz00_5272;
														BgL_rulenoz00_1489 = BgL_rulenoz00_5271;
														goto BgL_zc3z04anonymousza31509ze3z87_1492;
													}
												}
										}
									}
								}
							else
								{
									long BgL_rulenoz00_5274;

									BgL_rulenoz00_5274 = (BgL_rulenoz00_1489 + ((long) 1));
									BgL_rulenoz00_1489 = BgL_rulenoz00_5274;
									goto BgL_zc3z04anonymousza31509ze3z87_1492;
								}
						}
					else
						{
							obj_t BgL_cz00_3274;
							obj_t BgL_itemsetv2z00_3275;

							BgL_cz00_3274 = BgL_cspz00_1490;
							BgL_itemsetv2z00_3275 = BgL_itemsetvz00_1491;
						BgL_loop2z00_3273:
							if (PAIRP(BgL_cz00_3274))
								{	/* Lalr/lalr.scm 347 */
									obj_t BgL_arg1528z00_3281;
									obj_t BgL_arg1530z00_3282;

									BgL_arg1528z00_3281 = CDR(BgL_cz00_3274);
									BgL_arg1530z00_3282 =
										MAKE_YOUNG_PAIR(CAR(BgL_cz00_3274), BgL_itemsetv2z00_3275);
									{
										obj_t BgL_itemsetv2z00_5282;
										obj_t BgL_cz00_5281;

										BgL_cz00_5281 = BgL_arg1528z00_3281;
										BgL_itemsetv2z00_5282 = BgL_arg1530z00_3282;
										BgL_itemsetv2z00_3275 = BgL_itemsetv2z00_5282;
										BgL_cz00_3274 = BgL_cz00_5281;
										goto BgL_loop2z00_3273;
									}
								}
							else
								{	/* Lalr/lalr.scm 346 */
									return bgl_reverse(BgL_itemsetv2z00_3275);
								}
						}
				}
			}
		}

	}



/* allocate-item-sets */
	obj_t BGl_allocatezd2itemzd2setsz00zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 352 */
			BGl_kernelzd2basezd2zz__lalr_globalz00 =
				make_vector(
				(long) CINT(BGl_nsymsz00zz__lalr_globalz00), BINT(((long) 0)));
			return (BGl_kernelzd2endzd2zz__lalr_globalz00 =
				make_vector(
					(long) CINT(BGl_nsymsz00zz__lalr_globalz00), BFALSE), BUNSPEC);
		}

	}



/* allocate-storage */
	obj_t BGl_allocatezd2storagezd2zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 357 */
			BGl_allocatezd2itemzd2setsz00zz__lalr_expandz00();
			return (BGl_redzd2setzd2zz__lalr_globalz00 =
				make_vector(
					((long) CINT(BGl_nrulesz00zz__lalr_globalz00) + ((long) 1)),
					BINT(((long) 0))), BUNSPEC);
		}

	}



/* initialize-states */
	obj_t BGl_initializa7ezd2statesz75zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 364 */
			{	/* Lalr/lalr.scm 365 */
				obj_t BgL_pz00_1523;

				BgL_pz00_1523 = make_vector(((long) 4), BINT(((long) 0)));
				VECTOR_SET(BgL_pz00_1523, ((long) 0), BINT(((long) 0)));
				VECTOR_SET(BgL_pz00_1523, ((long) 1), BFALSE);
				VECTOR_SET(BgL_pz00_1523, ((long) 2), BINT(((long) 1)));
				VECTOR_SET(BgL_pz00_1523, ((long) 3),
					BGl_list2797z00zz__lalr_expandz00);
				{	/* Lalr/lalr.scm 371 */
					obj_t BgL_list1533z00_1524;

					BgL_list1533z00_1524 = MAKE_YOUNG_PAIR(BgL_pz00_1523, BNIL);
					BGl_firstzd2statezd2zz__lalr_globalz00 = BgL_list1533z00_1524;
				}
				BGl_lastzd2statezd2zz__lalr_globalz00 =
					BGl_firstzd2statezd2zz__lalr_globalz00;
				return (BGl_nstatesz00zz__lalr_globalz00 = BINT(((long) 1)), BUNSPEC);
		}}

	}



/* generate-states */
	bool_t BGl_generatezd2stateszd2zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 377 */
			BGl_allocatezd2storagezd2zz__lalr_expandz00();
			BGl_setzd2fderiveszd2zz__lalr_expandz00();
			BGl_initializa7ezd2statesz75zz__lalr_expandz00();
			{
				obj_t BgL_thiszd2statezd2_1526;

				BgL_thiszd2statezd2_1526 = BGl_firstzd2statezd2zz__lalr_globalz00;
			BgL_zc3z04anonymousza31534ze3z87_1527:
				if (PAIRP(BgL_thiszd2statezd2_1526))
					{	/* Lalr/lalr.scm 383 */
						obj_t BgL_xz00_1529;

						BgL_xz00_1529 = CAR(BgL_thiszd2statezd2_1526);
						{	/* Lalr/lalr.scm 383 */
							obj_t BgL_isz00_1530;

							{	/* Lalr/lalr.scm 384 */
								obj_t BgL_arg1540z00_1533;

								BgL_arg1540z00_1533 =
									VECTOR_REF(((obj_t) BgL_xz00_1529), ((long) 3));
								BgL_isz00_1530 =
									BGl_closurez00zz__lalr_expandz00(BgL_arg1540z00_1533);
							}
							{	/* Lalr/lalr.scm 384 */

								BGl_savezd2reductionszd2zz__lalr_expandz00(BgL_xz00_1529,
									BgL_isz00_1530);
								BGl_newzd2itemsetszd2zz__lalr_expandz00(BgL_isz00_1530);
								BGl_appendzd2stateszd2zz__lalr_expandz00();
								if (
									((long) CINT(BGl_nshiftsz00zz__lalr_globalz00) > ((long) 0)))
									{	/* Lalr/lalr.scm 388 */
										BGl_savezd2shiftszd2zz__lalr_expandz00(BgL_xz00_1529);
									}
								else
									{	/* Lalr/lalr.scm 388 */
										BFALSE;
									}
								{
									obj_t BgL_thiszd2statezd2_5320;

									BgL_thiszd2statezd2_5320 = CDR(BgL_thiszd2statezd2_1526);
									BgL_thiszd2statezd2_1526 = BgL_thiszd2statezd2_5320;
									goto BgL_zc3z04anonymousza31534ze3z87_1527;
								}
							}
						}
					}
				else
					{	/* Lalr/lalr.scm 382 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* new-itemsets */
	obj_t BGl_newzd2itemsetszd2zz__lalr_expandz00(obj_t BgL_itemsetz00_9)
	{
		{	/* Lalr/lalr.scm 396 */
			BGl_shiftzd2symbolzd2zz__lalr_globalz00 = BNIL;
			{
				long BgL_iz00_3320;

				BgL_iz00_3320 = ((long) 0);
			BgL_loopz00_3319:
				if ((BgL_iz00_3320 < (long) CINT(BGl_nsymsz00zz__lalr_globalz00)))
					{	/* Lalr/lalr.scm 400 */
						VECTOR_SET(BGl_kernelzd2endzd2zz__lalr_globalz00, BgL_iz00_3320,
							BNIL);
						{
							long BgL_iz00_5326;

							BgL_iz00_5326 = (BgL_iz00_3320 + ((long) 1));
							BgL_iz00_3320 = BgL_iz00_5326;
							goto BgL_loopz00_3319;
						}
					}
				else
					{	/* Lalr/lalr.scm 400 */
						((bool_t) 0);
					}
			}
			{
				obj_t BgL_ispz00_1542;

				BgL_ispz00_1542 = BgL_itemsetz00_9;
			BgL_zc3z04anonymousza31545ze3z87_1543:
				if (PAIRP(BgL_ispz00_1542))
					{	/* Lalr/lalr.scm 407 */
						obj_t BgL_iz00_1545;

						BgL_iz00_1545 = CAR(BgL_ispz00_1542);
						{	/* Lalr/lalr.scm 407 */
							obj_t BgL_symz00_1546;

							BgL_symz00_1546 =
								VECTOR_REF(BGl_ritemz00zz__lalr_globalz00,
								(long) CINT(BgL_iz00_1545));
							{	/* Lalr/lalr.scm 408 */

								if (((long) CINT(BgL_symz00_1546) >= ((long) 0)))
									{	/* Lalr/lalr.scm 409 */
										BGl_shiftzd2symbolzd2zz__lalr_globalz00 =
											BGl_sinsertz00zz__lalr_utilz00(BgL_symz00_1546,
											BGl_shiftzd2symbolzd2zz__lalr_globalz00);
										{	/* Lalr/lalr.scm 412 */
											obj_t BgL_xz00_1548;

											BgL_xz00_1548 =
												VECTOR_REF(BGl_kernelzd2endzd2zz__lalr_globalz00,
												(long) CINT(BgL_symz00_1546));
											if (NULLP(BgL_xz00_1548))
												{	/* Lalr/lalr.scm 413 */
													{	/* Lalr/lalr.scm 415 */
														obj_t BgL_arg1551z00_1550;

														{	/* Lalr/lalr.scm 415 */
															long BgL_arg1552z00_1551;

															BgL_arg1552z00_1551 =
																((long) CINT(BgL_iz00_1545) + ((long) 1));
															BgL_arg1551z00_1550 =
																MAKE_YOUNG_PAIR(BINT(BgL_arg1552z00_1551),
																BgL_xz00_1548);
														}
														VECTOR_SET(BGl_kernelzd2basezd2zz__lalr_globalz00,
															(long) CINT(BgL_symz00_1546),
															BgL_arg1551z00_1550);
													}
													VECTOR_SET(BGl_kernelzd2endzd2zz__lalr_globalz00,
														(long) CINT(BgL_symz00_1546),
														VECTOR_REF(BGl_kernelzd2basezd2zz__lalr_globalz00,
															(long) CINT(BgL_symz00_1546)));
												}
											else
												{	/* Lalr/lalr.scm 413 */
													{	/* Lalr/lalr.scm 418 */
														obj_t BgL_arg1554z00_1553;

														{	/* Lalr/lalr.scm 418 */
															long BgL_arg1556z00_1554;

															BgL_arg1556z00_1554 =
																((long) CINT(BgL_iz00_1545) + ((long) 1));
															{	/* Lalr/lalr.scm 418 */
																obj_t BgL_list1557z00_1555;

																BgL_list1557z00_1555 =
																	MAKE_YOUNG_PAIR(BINT(BgL_arg1556z00_1554),
																	BNIL);
																BgL_arg1554z00_1553 = BgL_list1557z00_1555;
														}}
														{	/* Lalr/lalr.scm 418 */
															obj_t BgL_tmpz00_5355;

															BgL_tmpz00_5355 = ((obj_t) BgL_xz00_1548);
															SET_CDR(BgL_tmpz00_5355, BgL_arg1554z00_1553);
													}}
													{	/* Lalr/lalr.scm 419 */
														obj_t BgL_arg1558z00_1556;

														BgL_arg1558z00_1556 = CDR(((obj_t) BgL_xz00_1548));
														VECTOR_SET(BGl_kernelzd2endzd2zz__lalr_globalz00,
															(long) CINT(BgL_symz00_1546),
															BgL_arg1558z00_1556);
									}}}}
								else
									{	/* Lalr/lalr.scm 409 */
										BFALSE;
									}
								{
									obj_t BgL_ispz00_5362;

									BgL_ispz00_5362 = CDR(BgL_ispz00_1542);
									BgL_ispz00_1542 = BgL_ispz00_5362;
									goto BgL_zc3z04anonymousza31545ze3z87_1543;
								}
							}
						}
					}
				else
					{	/* Lalr/lalr.scm 406 */
						((bool_t) 0);
					}
			}
			return (BGl_nshiftsz00zz__lalr_globalz00 =
				BINT(bgl_list_length(BGl_shiftzd2symbolzd2zz__lalr_globalz00)),
				BUNSPEC);
		}

	}



/* get-state */
	obj_t BGl_getzd2statezd2zz__lalr_expandz00(obj_t BgL_symz00_10)
	{
		{	/* Lalr/lalr.scm 426 */
			{	/* Lalr/lalr.scm 427 */
				obj_t BgL_ispz00_1559;

				BgL_ispz00_1559 =
					VECTOR_REF(BGl_kernelzd2basezd2zz__lalr_globalz00,
					(long) CINT(BgL_symz00_10));
				{	/* Lalr/lalr.scm 427 */
					long BgL_nz00_1560;

					BgL_nz00_1560 = bgl_list_length(BgL_ispz00_1559);
					{	/* Lalr/lalr.scm 428 */
						long BgL_keyz00_1561;

						{
							obj_t BgL_isp1z00_3380;
							long BgL_kz00_3381;

							BgL_isp1z00_3380 = BgL_ispz00_1559;
							BgL_kz00_3381 = ((long) 0);
						BgL_loopz00_3379:
							if (NULLP(BgL_isp1z00_3380))
								{	/* Lalr/lalr.scm 430 */
									BgL_keyz00_1561 =
										BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(BgL_kz00_3381,
										(long) CINT(BGl_STATEzd2TABLEzd2SIZEz00zz__lalr_globalz00));
								}
							else
								{	/* Lalr/lalr.scm 432 */
									obj_t BgL_arg1611z00_3387;
									long BgL_arg1612z00_3388;

									BgL_arg1611z00_3387 = CDR(((obj_t) BgL_isp1z00_3380));
									BgL_arg1612z00_3388 =
										(BgL_kz00_3381 +
										(long) CINT(CAR(((obj_t) BgL_isp1z00_3380))));
									{
										long BgL_kz00_5380;
										obj_t BgL_isp1z00_5379;

										BgL_isp1z00_5379 = BgL_arg1611z00_3387;
										BgL_kz00_5380 = BgL_arg1612z00_3388;
										BgL_kz00_3381 = BgL_kz00_5380;
										BgL_isp1z00_3380 = BgL_isp1z00_5379;
										goto BgL_loopz00_3379;
									}
								}
						}
						{	/* Lalr/lalr.scm 429 */
							obj_t BgL_spz00_1562;

							BgL_spz00_1562 =
								VECTOR_REF(BGl_statezd2tablezd2zz__lalr_globalz00,
								BgL_keyz00_1561);
							{	/* Lalr/lalr.scm 433 */

								if (NULLP(BgL_spz00_1562))
									{	/* Lalr/lalr.scm 435 */
										obj_t BgL_xz00_1564;

										BgL_xz00_1564 =
											BGl_newzd2statezd2zz__lalr_expandz00(BgL_symz00_10);
										{	/* Lalr/lalr.scm 436 */
											obj_t BgL_arg1562z00_1565;

											{	/* Lalr/lalr.scm 436 */
												obj_t BgL_list1563z00_1566;

												BgL_list1563z00_1566 =
													MAKE_YOUNG_PAIR(BgL_xz00_1564, BNIL);
												BgL_arg1562z00_1565 = BgL_list1563z00_1566;
											}
											VECTOR_SET(BGl_statezd2tablezd2zz__lalr_globalz00,
												BgL_keyz00_1561, BgL_arg1562z00_1565);
										}
										return VECTOR_REF(BgL_xz00_1564, ((long) 0));
									}
								else
									{
										obj_t BgL_sp1z00_1568;

										BgL_sp1z00_1568 = BgL_spz00_1562;
									BgL_zc3z04anonymousza31564ze3z87_1569:
										{	/* Lalr/lalr.scm 439 */
											bool_t BgL_test2919z00_5388;

											{	/* Lalr/lalr.scm 439 */
												bool_t BgL_test2920z00_5389;

												{	/* Lalr/lalr.scm 439 */
													obj_t BgL_arg1606z00_1614;

													{	/* Lalr/lalr.scm 439 */
														obj_t BgL_arg1607z00_1615;

														BgL_arg1607z00_1615 =
															CAR(((obj_t) BgL_sp1z00_1568));
														BgL_arg1606z00_1614 =
															VECTOR_REF(
															((obj_t) BgL_arg1607z00_1615), ((long) 2));
													}
													BgL_test2920z00_5389 =
														BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT
														(BgL_nz00_1560), BgL_arg1606z00_1614);
												}
												if (BgL_test2920z00_5389)
													{	/* Lalr/lalr.scm 440 */
														obj_t BgL_g1141z00_1601;

														{	/* Lalr/lalr.scm 440 */
															obj_t BgL_arg1605z00_1613;

															BgL_arg1605z00_1613 =
																CAR(((obj_t) BgL_sp1z00_1568));
															BgL_g1141z00_1601 =
																VECTOR_REF(
																((obj_t) BgL_arg1605z00_1613), ((long) 3));
														}
														{
															obj_t BgL_i1z00_3432;
															obj_t BgL_tz00_3433;

															BgL_i1z00_3432 = BgL_ispz00_1559;
															BgL_tz00_3433 = BgL_g1141z00_1601;
														BgL_loop2z00_3431:
															{	/* Lalr/lalr.scm 441 */
																bool_t BgL_test2921z00_5400;

																if (PAIRP(BgL_i1z00_3432))
																	{	/* Lalr/lalr.scm 441 */
																		BgL_test2921z00_5400 =
																			BGl_2zd3zd3zz__r4_numbers_6_5z00(CAR
																			(BgL_i1z00_3432),
																			CAR(((obj_t) BgL_tz00_3433)));
																	}
																else
																	{	/* Lalr/lalr.scm 441 */
																		BgL_test2921z00_5400 = ((bool_t) 0);
																	}
																if (BgL_test2921z00_5400)
																	{
																		obj_t BgL_tz00_5409;
																		obj_t BgL_i1z00_5407;

																		BgL_i1z00_5407 = CDR(BgL_i1z00_3432);
																		BgL_tz00_5409 =
																			CDR(((obj_t) BgL_tz00_3433));
																		BgL_tz00_3433 = BgL_tz00_5409;
																		BgL_i1z00_3432 = BgL_i1z00_5407;
																		goto BgL_loop2z00_3431;
																	}
																else
																	{	/* Lalr/lalr.scm 441 */
																		BgL_test2919z00_5388 =
																			NULLP(BgL_i1z00_3432);
																	}
															}
														}
													}
												else
													{	/* Lalr/lalr.scm 439 */
														BgL_test2919z00_5388 = ((bool_t) 0);
													}
											}
											if (BgL_test2919z00_5388)
												{	/* Lalr/lalr.scm 446 */
													obj_t BgL_arg1587z00_1592;

													BgL_arg1587z00_1592 = CAR(((obj_t) BgL_sp1z00_1568));
													return
														VECTOR_REF(
														((obj_t) BgL_arg1587z00_1592), ((long) 0));
												}
											else
												{	/* Lalr/lalr.scm 439 */
													if (NULLP(CDR(((obj_t) BgL_sp1z00_1568))))
														{	/* Lalr/lalr.scm 448 */
															obj_t BgL_xz00_1595;

															BgL_xz00_1595 =
																BGl_newzd2statezd2zz__lalr_expandz00
																(BgL_symz00_10);
															{	/* Lalr/lalr.scm 449 */
																obj_t BgL_arg1592z00_1596;

																{	/* Lalr/lalr.scm 449 */
																	obj_t BgL_list1593z00_1597;

																	BgL_list1593z00_1597 =
																		MAKE_YOUNG_PAIR(BgL_xz00_1595, BNIL);
																	BgL_arg1592z00_1596 = BgL_list1593z00_1597;
																}
																{	/* Lalr/lalr.scm 449 */
																	obj_t BgL_tmpz00_5423;

																	BgL_tmpz00_5423 = ((obj_t) BgL_sp1z00_1568);
																	SET_CDR(BgL_tmpz00_5423, BgL_arg1592z00_1596);
																}
															}
															return VECTOR_REF(BgL_xz00_1595, ((long) 0));
														}
													else
														{	/* Lalr/lalr.scm 451 */
															obj_t BgL_arg1596z00_1598;

															BgL_arg1596z00_1598 =
																CDR(((obj_t) BgL_sp1z00_1568));
															{
																obj_t BgL_sp1z00_5429;

																BgL_sp1z00_5429 = BgL_arg1596z00_1598;
																BgL_sp1z00_1568 = BgL_sp1z00_5429;
																goto BgL_zc3z04anonymousza31564ze3z87_1569;
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



/* new-state */
	obj_t BGl_newzd2statezd2zz__lalr_expandz00(obj_t BgL_symz00_11)
	{
		{	/* Lalr/lalr.scm 454 */
			{	/* Lalr/lalr.scm 455 */
				obj_t BgL_ispz00_1626;

				BgL_ispz00_1626 =
					VECTOR_REF(BGl_kernelzd2basezd2zz__lalr_globalz00,
					(long) CINT(BgL_symz00_11));
				{	/* Lalr/lalr.scm 455 */
					long BgL_nz00_1627;

					BgL_nz00_1627 = bgl_list_length(BgL_ispz00_1626);
					{	/* Lalr/lalr.scm 456 */
						obj_t BgL_pz00_1628;

						BgL_pz00_1628 = make_vector(((long) 4), BINT(((long) 0)));
						{	/* Lalr/lalr.scm 457 */

							VECTOR_SET(BgL_pz00_1628, ((long) 0),
								BGl_nstatesz00zz__lalr_globalz00);
							VECTOR_SET(BgL_pz00_1628, ((long) 1), BgL_symz00_11);
							if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_symz00_11,
									BGl_nvarsz00zz__lalr_globalz00))
								{	/* Lalr/lalr.scm 460 */
									BGl_finalzd2statezd2zz__lalr_globalz00 =
										BGl_nstatesz00zz__lalr_globalz00;
								}
							else
								{	/* Lalr/lalr.scm 460 */
									BFALSE;
								}
							VECTOR_SET(BgL_pz00_1628, ((long) 2), BINT(BgL_nz00_1627));
							VECTOR_SET(BgL_pz00_1628, ((long) 3), BgL_ispz00_1626);
							{	/* Lalr/lalr.scm 463 */
								obj_t BgL_arg1615z00_1630;

								{	/* Lalr/lalr.scm 463 */
									obj_t BgL_list1616z00_1631;

									BgL_list1616z00_1631 = MAKE_YOUNG_PAIR(BgL_pz00_1628, BNIL);
									BgL_arg1615z00_1630 = BgL_list1616z00_1631;
								}
								SET_CDR(BGl_lastzd2statezd2zz__lalr_globalz00,
									BgL_arg1615z00_1630);
							}
							BGl_lastzd2statezd2zz__lalr_globalz00 =
								CDR(BGl_lastzd2statezd2zz__lalr_globalz00);
							BGl_nstatesz00zz__lalr_globalz00 =
								ADDFX(BGl_nstatesz00zz__lalr_globalz00, BINT(((long) 1)));
							return BgL_pz00_1628;
						}
					}
				}
			}
		}

	}



/* append-states */
	obj_t BGl_appendzd2stateszd2zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 471 */
			return (BGl_shiftzd2setzd2zz__lalr_globalz00 =
				BGl_loopze72ze7zz__lalr_expandz00
				(BGl_shiftzd2symbolzd2zz__lalr_globalz00), BUNSPEC);
		}

	}



/* loop~2 */
	obj_t BGl_loopze72ze7zz__lalr_expandz00(obj_t BgL_lz00_1633)
	{
		{	/* Lalr/lalr.scm 473 */
			if (NULLP(BgL_lz00_1633))
				{	/* Lalr/lalr.scm 474 */
					return BNIL;
				}
			else
				{	/* Lalr/lalr.scm 476 */
					obj_t BgL_arg1619z00_1636;
					obj_t BgL_arg1620z00_1637;

					{	/* Lalr/lalr.scm 476 */
						obj_t BgL_arg1621z00_1638;

						BgL_arg1621z00_1638 = CAR(((obj_t) BgL_lz00_1633));
						BgL_arg1619z00_1636 =
							BGl_getzd2statezd2zz__lalr_expandz00(BgL_arg1621z00_1638);
					}
					{	/* Lalr/lalr.scm 476 */
						obj_t BgL_arg1623z00_1639;

						BgL_arg1623z00_1639 = CDR(((obj_t) BgL_lz00_1633));
						BgL_arg1620z00_1637 =
							BGl_loopze72ze7zz__lalr_expandz00(BgL_arg1623z00_1639);
					}
					return MAKE_YOUNG_PAIR(BgL_arg1619z00_1636, BgL_arg1620z00_1637);
				}
		}

	}



/* save-shifts */
	obj_t BGl_savezd2shiftszd2zz__lalr_expandz00(obj_t BgL_corez00_12)
	{
		{	/* Lalr/lalr.scm 480 */
			{	/* Lalr/lalr.scm 481 */
				obj_t BgL_pz00_1641;

				BgL_pz00_1641 = make_vector(((long) 3), BINT(((long) 0)));
				{	/* Lalr/lalr.scm 482 */
					obj_t BgL_arg1624z00_1642;

					BgL_arg1624z00_1642 =
						VECTOR_REF(((obj_t) BgL_corez00_12), ((long) 0));
					VECTOR_SET(BgL_pz00_1641, ((long) 0), BgL_arg1624z00_1642);
				}
				VECTOR_SET(BgL_pz00_1641, ((long) 1), BGl_nshiftsz00zz__lalr_globalz00);
				VECTOR_SET(BgL_pz00_1641, ((long) 2),
					BGl_shiftzd2setzd2zz__lalr_globalz00);
				if (CBOOL(BGl_lastzd2shiftzd2zz__lalr_globalz00))
					{	/* Lalr/lalr.scm 485 */
						{	/* Lalr/lalr.scm 487 */
							obj_t BgL_arg1626z00_1643;

							{	/* Lalr/lalr.scm 487 */
								obj_t BgL_list1627z00_1644;

								BgL_list1627z00_1644 = MAKE_YOUNG_PAIR(BgL_pz00_1641, BNIL);
								BgL_arg1626z00_1643 = BgL_list1627z00_1644;
							}
							SET_CDR(BGl_lastzd2shiftzd2zz__lalr_globalz00,
								BgL_arg1626z00_1643);
						}
						return (BGl_lastzd2shiftzd2zz__lalr_globalz00 =
							CDR(BGl_lastzd2shiftzd2zz__lalr_globalz00), BUNSPEC);
					}
				else
					{	/* Lalr/lalr.scm 485 */
						{	/* Lalr/lalr.scm 490 */
							obj_t BgL_list1628z00_1645;

							BgL_list1628z00_1645 = MAKE_YOUNG_PAIR(BgL_pz00_1641, BNIL);
							BGl_firstzd2shiftzd2zz__lalr_globalz00 = BgL_list1628z00_1645;
						}
						return (BGl_lastzd2shiftzd2zz__lalr_globalz00 =
							BGl_firstzd2shiftzd2zz__lalr_globalz00, BUNSPEC);
					}
			}
		}

	}



/* save-reductions */
	obj_t BGl_savezd2reductionszd2zz__lalr_expandz00(obj_t BgL_corez00_13,
		obj_t BgL_itemsetz00_14)
	{
		{	/* Lalr/lalr.scm 493 */
			{	/* Lalr/lalr.scm 494 */
				obj_t BgL_rsz00_1646;

				BgL_rsz00_1646 = BGl_loopze71ze7zz__lalr_expandz00(BgL_itemsetz00_14);
				if (NULLP(BgL_rsz00_1646))
					{	/* Lalr/lalr.scm 501 */
						return BFALSE;
					}
				else
					{	/* Lalr/lalr.scm 502 */
						obj_t BgL_pz00_1648;

						BgL_pz00_1648 = make_vector(((long) 3), BINT(((long) 0)));
						{	/* Lalr/lalr.scm 503 */
							obj_t BgL_arg1630z00_1649;

							BgL_arg1630z00_1649 =
								VECTOR_REF(((obj_t) BgL_corez00_13), ((long) 0));
							VECTOR_SET(BgL_pz00_1648, ((long) 0), BgL_arg1630z00_1649);
						}
						{	/* Lalr/lalr.scm 504 */
							long BgL_arg1631z00_1650;

							BgL_arg1631z00_1650 = bgl_list_length(BgL_rsz00_1646);
							VECTOR_SET(BgL_pz00_1648, ((long) 1), BINT(BgL_arg1631z00_1650));
						}
						VECTOR_SET(BgL_pz00_1648, ((long) 2), BgL_rsz00_1646);
						if (CBOOL(BGl_lastzd2reductionzd2zz__lalr_globalz00))
							{	/* Lalr/lalr.scm 506 */
								{	/* Lalr/lalr.scm 508 */
									obj_t BgL_arg1632z00_1651;

									{	/* Lalr/lalr.scm 508 */
										obj_t BgL_list1633z00_1652;

										BgL_list1633z00_1652 = MAKE_YOUNG_PAIR(BgL_pz00_1648, BNIL);
										BgL_arg1632z00_1651 = BgL_list1633z00_1652;
									}
									SET_CDR(BGl_lastzd2reductionzd2zz__lalr_globalz00,
										BgL_arg1632z00_1651);
								}
								return (BGl_lastzd2reductionzd2zz__lalr_globalz00 =
									CDR(BGl_lastzd2reductionzd2zz__lalr_globalz00), BUNSPEC);
							}
						else
							{	/* Lalr/lalr.scm 506 */
								{	/* Lalr/lalr.scm 511 */
									obj_t BgL_list1634z00_1653;

									BgL_list1634z00_1653 = MAKE_YOUNG_PAIR(BgL_pz00_1648, BNIL);
									BGl_firstzd2reductionzd2zz__lalr_globalz00 =
										BgL_list1634z00_1653;
								}
								return (BGl_lastzd2reductionzd2zz__lalr_globalz00 =
									BGl_firstzd2reductionzd2zz__lalr_globalz00, BUNSPEC);
							}
					}
			}
		}

	}



/* loop~1 */
	obj_t BGl_loopze71ze7zz__lalr_expandz00(obj_t BgL_lz00_1655)
	{
		{	/* Lalr/lalr.scm 494 */
		BGl_loopze71ze7zz__lalr_expandz00:
			if (NULLP(BgL_lz00_1655))
				{	/* Lalr/lalr.scm 495 */
					return BNIL;
				}
			else
				{	/* Lalr/lalr.scm 497 */
					obj_t BgL_itemz00_1658;

					{	/* Lalr/lalr.scm 497 */
						obj_t BgL_arg1643z00_1664;

						BgL_arg1643z00_1664 = CAR(((obj_t) BgL_lz00_1655));
						BgL_itemz00_1658 =
							VECTOR_REF(BGl_ritemz00zz__lalr_globalz00,
							(long) CINT(BgL_arg1643z00_1664));
					}
					if (((long) CINT(BgL_itemz00_1658) < ((long) 0)))
						{	/* Lalr/lalr.scm 499 */
							long BgL_arg1639z00_1660;
							obj_t BgL_arg1640z00_1661;

							BgL_arg1639z00_1660 = NEG((long) CINT(BgL_itemz00_1658));
							{	/* Lalr/lalr.scm 499 */
								obj_t BgL_arg1641z00_1662;

								BgL_arg1641z00_1662 = CDR(((obj_t) BgL_lz00_1655));
								BgL_arg1640z00_1661 =
									BGl_loopze71ze7zz__lalr_expandz00(BgL_arg1641z00_1662);
							}
							return
								MAKE_YOUNG_PAIR(BINT(BgL_arg1639z00_1660), BgL_arg1640z00_1661);
						}
					else
						{	/* Lalr/lalr.scm 500 */
							obj_t BgL_arg1642z00_1663;

							BgL_arg1642z00_1663 = CDR(((obj_t) BgL_lz00_1655));
							{
								obj_t BgL_lz00_5506;

								BgL_lz00_5506 = BgL_arg1642z00_1663;
								BgL_lz00_1655 = BgL_lz00_5506;
								goto BGl_loopze71ze7zz__lalr_expandz00;
							}
						}
				}
		}

	}



/* lalr */
	bool_t BGl_lalrz00zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 517 */
			{	/* Lalr/lalr.scm 518 */
				long BgL_arg1644z00_1666;

				{	/* Lalr/lalr.scm 518 */
					long BgL_res2546z00_3505;

					{	/* Lalr/lalr.scm 518 */
						long BgL_tmpz00_5507;

						BgL_tmpz00_5507 = (long) CINT(BGl_ntermsz00zz__lalr_globalz00);
						BgL_res2546z00_3505 = (BgL_tmpz00_5507 / ((long) 28));
					}
					BgL_arg1644z00_1666 = BgL_res2546z00_3505;
				}
				BGl_tokenzd2setzd2siza7eza7zz__lalr_globalz00 =
					BINT((((long) 1) + BgL_arg1644z00_1666));
			}
			BGl_setzd2accessingzd2symbolz00zz__lalr_expandz00();
			BGl_setzd2shiftzd2tablez00zz__lalr_expandz00();
			BGl_setzd2reductionzd2tablez00zz__lalr_expandz00();
			BGl_setzd2maxzd2rhsz00zz__lalr_expandz00();
			BGl_initializa7ezd2LAz75zz__lalr_expandz00();
			BGl_setzd2gotozd2mapz00zz__lalr_expandz00();
			BGl_initializa7ezd2Fz75zz__lalr_expandz00();
			BGl_buildzd2relationszd2zz__lalr_expandz00();
			BGl_digraphz00zz__lalr_expandz00(BGl_includesz00zz__lalr_globalz00);
			return BGl_computezd2lookaheadszd2zz__lalr_expandz00();
		}

	}



/* set-accessing-symbol */
	bool_t BGl_setzd2accessingzd2symbolz00zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 530 */
			BGl_acceszd2symbolzd2zz__lalr_globalz00 =
				make_vector((long) CINT(BGl_nstatesz00zz__lalr_globalz00), BFALSE);
			{
				obj_t BgL_lz00_1668;

				BgL_lz00_1668 = BGl_firstzd2statezd2zz__lalr_globalz00;
			BgL_zc3z04anonymousza31645ze3z87_1669:
				if (PAIRP(BgL_lz00_1668))
					{	/* Lalr/lalr.scm 534 */
						obj_t BgL_xz00_1671;

						BgL_xz00_1671 = CAR(BgL_lz00_1668);
						{	/* Lalr/lalr.scm 535 */
							obj_t BgL_arg1648z00_1672;
							obj_t BgL_arg1649z00_1673;

							BgL_arg1648z00_1672 =
								VECTOR_REF(((obj_t) BgL_xz00_1671), ((long) 0));
							BgL_arg1649z00_1673 =
								VECTOR_REF(((obj_t) BgL_xz00_1671), ((long) 1));
							VECTOR_SET(BGl_acceszd2symbolzd2zz__lalr_globalz00,
								(long) CINT(BgL_arg1648z00_1672), BgL_arg1649z00_1673);
						}
						{
							obj_t BgL_lz00_5533;

							BgL_lz00_5533 = CDR(BgL_lz00_1668);
							BgL_lz00_1668 = BgL_lz00_5533;
							goto BgL_zc3z04anonymousza31645ze3z87_1669;
						}
					}
				else
					{	/* Lalr/lalr.scm 533 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* set-shift-table */
	bool_t BGl_setzd2shiftzd2tablez00zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 538 */
			BGl_shiftzd2tablezd2zz__lalr_globalz00 =
				make_vector((long) CINT(BGl_nstatesz00zz__lalr_globalz00), BFALSE);
			{
				obj_t BgL_lz00_1677;

				BgL_lz00_1677 = BGl_firstzd2shiftzd2zz__lalr_globalz00;
			BgL_zc3z04anonymousza31651ze3z87_1678:
				if (PAIRP(BgL_lz00_1677))
					{	/* Lalr/lalr.scm 542 */
						obj_t BgL_xz00_1680;

						BgL_xz00_1680 = CAR(BgL_lz00_1677);
						{	/* Lalr/lalr.scm 543 */
							obj_t BgL_arg1654z00_1681;

							BgL_arg1654z00_1681 =
								VECTOR_REF(((obj_t) BgL_xz00_1680), ((long) 0));
							VECTOR_SET(BGl_shiftzd2tablezd2zz__lalr_globalz00,
								(long) CINT(BgL_arg1654z00_1681), BgL_xz00_1680);
						}
						{
							obj_t BgL_lz00_5544;

							BgL_lz00_5544 = CDR(BgL_lz00_1677);
							BgL_lz00_1677 = BgL_lz00_5544;
							goto BgL_zc3z04anonymousza31651ze3z87_1678;
						}
					}
				else
					{	/* Lalr/lalr.scm 541 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* set-reduction-table */
	bool_t BGl_setzd2reductionzd2tablez00zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 546 */
			BGl_reductionzd2tablezd2zz__lalr_globalz00 =
				make_vector((long) CINT(BGl_nstatesz00zz__lalr_globalz00), BFALSE);
			{
				obj_t BgL_lz00_1685;

				BgL_lz00_1685 = BGl_firstzd2reductionzd2zz__lalr_globalz00;
			BgL_zc3z04anonymousza31657ze3z87_1686:
				if (PAIRP(BgL_lz00_1685))
					{	/* Lalr/lalr.scm 550 */
						obj_t BgL_xz00_1688;

						BgL_xz00_1688 = CAR(BgL_lz00_1685);
						{	/* Lalr/lalr.scm 551 */
							obj_t BgL_arg1659z00_1689;

							BgL_arg1659z00_1689 =
								VECTOR_REF(((obj_t) BgL_xz00_1688), ((long) 0));
							VECTOR_SET(BGl_reductionzd2tablezd2zz__lalr_globalz00,
								(long) CINT(BgL_arg1659z00_1689), BgL_xz00_1688);
						}
						{
							obj_t BgL_lz00_5555;

							BgL_lz00_5555 = CDR(BgL_lz00_1685);
							BgL_lz00_1685 = BgL_lz00_5555;
							goto BgL_zc3z04anonymousza31657ze3z87_1686;
						}
					}
				else
					{	/* Lalr/lalr.scm 549 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* set-max-rhs */
	obj_t BGl_setzd2maxzd2rhsz00zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 554 */
			{
				long BgL_pz00_3556;
				obj_t BgL_curmaxz00_3557;
				long BgL_lengthz00_3558;

				BgL_pz00_3556 = ((long) 0);
				BgL_curmaxz00_3557 = BINT(((long) 0));
				BgL_lengthz00_3558 = ((long) 0);
			BgL_loopz00_3555:
				{	/* Lalr/lalr.scm 556 */
					obj_t BgL_xz00_3559;

					BgL_xz00_3559 =
						VECTOR_REF(BGl_ritemz00zz__lalr_globalz00, BgL_pz00_3556);
					if (CBOOL(BgL_xz00_3559))
						{	/* Lalr/lalr.scm 557 */
							if (((long) CINT(BgL_xz00_3559) >= ((long) 0)))
								{
									long BgL_lengthz00_5565;
									long BgL_pz00_5563;

									BgL_pz00_5563 = (BgL_pz00_3556 + ((long) 1));
									BgL_lengthz00_5565 = (BgL_lengthz00_3558 + ((long) 1));
									BgL_lengthz00_3558 = BgL_lengthz00_5565;
									BgL_pz00_3556 = BgL_pz00_5563;
									goto BgL_loopz00_3555;
								}
							else
								{	/* Lalr/lalr.scm 560 */
									long BgL_arg1665z00_3571;
									obj_t BgL_arg1667z00_3572;

									BgL_arg1665z00_3571 = (BgL_pz00_3556 + ((long) 1));
									BgL_arg1667z00_3572 =
										BGl_2maxz00zz__r4_numbers_6_5z00(BgL_curmaxz00_3557,
										BINT(BgL_lengthz00_3558));
									{	/* Lalr/lalr.scm 556 */
										obj_t BgL_xz00_3577;

										BgL_xz00_3577 =
											VECTOR_REF(BGl_ritemz00zz__lalr_globalz00,
											BgL_arg1665z00_3571);
										if (CBOOL(BgL_xz00_3577))
											{	/* Lalr/lalr.scm 557 */
												if (((long) CINT(BgL_xz00_3577) >= ((long) 0)))
													{
														long BgL_lengthz00_5579;
														obj_t BgL_curmaxz00_5578;
														long BgL_pz00_5576;

														BgL_pz00_5576 = (BgL_arg1665z00_3571 + ((long) 1));
														BgL_curmaxz00_5578 = BgL_arg1667z00_3572;
														BgL_lengthz00_5579 = (((long) 0) + ((long) 1));
														BgL_lengthz00_3558 = BgL_lengthz00_5579;
														BgL_curmaxz00_3557 = BgL_curmaxz00_5578;
														BgL_pz00_3556 = BgL_pz00_5576;
														goto BgL_loopz00_3555;
													}
												else
													{
														long BgL_lengthz00_5586;
														obj_t BgL_curmaxz00_5583;
														long BgL_pz00_5581;

														BgL_pz00_5581 = (BgL_arg1665z00_3571 + ((long) 1));
														BgL_curmaxz00_5583 =
															BGl_2maxz00zz__r4_numbers_6_5z00
															(BgL_arg1667z00_3572, BINT(((long) 0)));
														BgL_lengthz00_5586 = ((long) 0);
														BgL_lengthz00_3558 = BgL_lengthz00_5586;
														BgL_curmaxz00_3557 = BgL_curmaxz00_5583;
														BgL_pz00_3556 = BgL_pz00_5581;
														goto BgL_loopz00_3555;
													}
											}
										else
											{	/* Lalr/lalr.scm 557 */
												return (BGl_maxrhsz00zz__lalr_globalz00 =
													BgL_arg1667z00_3572, BUNSPEC);
											}
									}
								}
						}
					else
						{	/* Lalr/lalr.scm 557 */
							return (BGl_maxrhsz00zz__lalr_globalz00 =
								BgL_curmaxz00_3557, BUNSPEC);
						}
				}
			}
		}

	}



/* initialize-LA */
	bool_t BGl_initializa7ezd2LAz75zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 563 */
			BGl_consistentz00zz__lalr_globalz00 =
				make_vector((long) CINT(BGl_nstatesz00zz__lalr_globalz00), BFALSE);
			BGl_lookaheadsz00zz__lalr_globalz00 =
				make_vector(
				((long) CINT(BGl_nstatesz00zz__lalr_globalz00) + ((long) 1)), BFALSE);
			{
				long BgL_countz00_1709;
				long BgL_iz00_1710;

				BgL_countz00_1709 = ((long) 0);
				BgL_iz00_1710 = ((long) 0);
			BgL_zc3z04anonymousza31669ze3z87_1711:
				if ((BgL_iz00_1710 < (long) CINT(BGl_nstatesz00zz__lalr_globalz00)))
					{	/* Lalr/lalr.scm 573 */
						VECTOR_SET(BGl_lookaheadsz00zz__lalr_globalz00, BgL_iz00_1710,
							BINT(BgL_countz00_1709));
						{	/* Lalr/lalr.scm 576 */
							obj_t BgL_rpz00_1713;
							obj_t BgL_spz00_1714;

							BgL_rpz00_1713 =
								VECTOR_REF(BGl_reductionzd2tablezd2zz__lalr_globalz00,
								BgL_iz00_1710);
							BgL_spz00_1714 =
								VECTOR_REF(BGl_shiftzd2tablezd2zz__lalr_globalz00,
								BgL_iz00_1710);
							{	/* Lalr/lalr.scm 578 */
								bool_t BgL_test2939z00_5600;

								if (CBOOL(BgL_rpz00_1713))
									{	/* Lalr/lalr.scm 579 */
										bool_t BgL__ortest_1142z00_1730;

										{	/* Lalr/lalr.scm 579 */
											obj_t BgL_arg1699z00_1736;

											BgL_arg1699z00_1736 =
												VECTOR_REF(((obj_t) BgL_rpz00_1713), ((long) 1));
											BgL__ortest_1142z00_1730 =
												((long) CINT(BgL_arg1699z00_1736) > ((long) 1));
										}
										if (BgL__ortest_1142z00_1730)
											{	/* Lalr/lalr.scm 579 */
												BgL_test2939z00_5600 = BgL__ortest_1142z00_1730;
											}
										else
											{	/* Lalr/lalr.scm 579 */
												if (CBOOL(BgL_spz00_1714))
													{	/* Lalr/lalr.scm 581 */
														bool_t BgL_test2943z00_5610;

														{	/* Lalr/lalr.scm 583 */
															obj_t BgL_arg1696z00_1733;

															{	/* Lalr/lalr.scm 583 */
																obj_t BgL_arg1697z00_1734;

																{	/* Lalr/lalr.scm 583 */
																	obj_t BgL_arg1698z00_1735;

																	BgL_arg1698z00_1735 =
																		VECTOR_REF(
																		((obj_t) BgL_spz00_1714), ((long) 2));
																	{
																		obj_t BgL_lz00_3625;

																		BgL_lz00_3625 = BgL_arg1698z00_1735;
																	BgL_lastz00_3624:
																		if (NULLP(CDR(((obj_t) BgL_lz00_3625))))
																			{	/* Lalr/lalr.scm 565 */
																				BgL_arg1697z00_1734 =
																					CAR(((obj_t) BgL_lz00_3625));
																			}
																		else
																			{
																				obj_t BgL_lz00_5619;

																				BgL_lz00_5619 =
																					CDR(((obj_t) BgL_lz00_3625));
																				BgL_lz00_3625 = BgL_lz00_5619;
																				goto BgL_lastz00_3624;
																			}
																	}
																}
																BgL_arg1696z00_1733 =
																	VECTOR_REF
																	(BGl_acceszd2symbolzd2zz__lalr_globalz00,
																	(long) CINT(BgL_arg1697z00_1734));
															}
															BgL_test2943z00_5610 =
																(
																(long) CINT(BgL_arg1696z00_1733) <
																(long) CINT(BGl_nvarsz00zz__lalr_globalz00));
														}
														if (BgL_test2943z00_5610)
															{	/* Lalr/lalr.scm 581 */
																BgL_test2939z00_5600 = ((bool_t) 0);
															}
														else
															{	/* Lalr/lalr.scm 581 */
																BgL_test2939z00_5600 = ((bool_t) 1);
															}
													}
												else
													{	/* Lalr/lalr.scm 580 */
														BgL_test2939z00_5600 = ((bool_t) 0);
													}
											}
									}
								else
									{	/* Lalr/lalr.scm 578 */
										BgL_test2939z00_5600 = ((bool_t) 0);
									}
								if (BgL_test2939z00_5600)
									{	/* Lalr/lalr.scm 585 */
										long BgL_arg1691z00_1726;
										long BgL_arg1692z00_1727;

										{	/* Lalr/lalr.scm 585 */
											obj_t BgL_arg1693z00_1728;

											BgL_arg1693z00_1728 =
												VECTOR_REF(((obj_t) BgL_rpz00_1713), ((long) 1));
											BgL_arg1691z00_1726 =
												(BgL_countz00_1709 + (long) CINT(BgL_arg1693z00_1728));
										}
										BgL_arg1692z00_1727 = (BgL_iz00_1710 + ((long) 1));
										{
											long BgL_iz00_5633;
											long BgL_countz00_5632;

											BgL_countz00_5632 = BgL_arg1691z00_1726;
											BgL_iz00_5633 = BgL_arg1692z00_1727;
											BgL_iz00_1710 = BgL_iz00_5633;
											BgL_countz00_1709 = BgL_countz00_5632;
											goto BgL_zc3z04anonymousza31669ze3z87_1711;
										}
									}
								else
									{	/* Lalr/lalr.scm 578 */
										VECTOR_SET(BGl_consistentz00zz__lalr_globalz00,
											BgL_iz00_1710, BTRUE);
										{
											long BgL_iz00_5635;

											BgL_iz00_5635 = (BgL_iz00_1710 + ((long) 1));
											BgL_iz00_1710 = BgL_iz00_5635;
											goto BgL_zc3z04anonymousza31669ze3z87_1711;
										}
									}
							}
						}
					}
				else
					{	/* Lalr/lalr.scm 573 */
						VECTOR_SET(BGl_lookaheadsz00zz__lalr_globalz00,
							(long) CINT(BGl_nstatesz00zz__lalr_globalz00),
							BINT(BgL_countz00_1709));
						{	/* Lalr/lalr.scm 592 */
							obj_t BgL_cz00_1737;

							BgL_cz00_1737 =
								BGl_2maxz00zz__r4_numbers_6_5z00(BINT(BgL_countz00_1709),
								BINT(((long) 1)));
							BGl_LAz00zz__lalr_globalz00 =
								make_vector((long) CINT(BgL_cz00_1737), BFALSE);
							{
								long BgL_jz00_3658;

								BgL_jz00_3658 = ((long) 0);
							BgL_dozd2loopzd2zd21144zd2_3657:
								if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_jz00_3658),
										BgL_cz00_1737))
									{	/* Lalr/lalr.scm 594 */
										((bool_t) 0);
									}
								else
									{	/* Lalr/lalr.scm 594 */
										VECTOR_SET(BGl_LAz00zz__lalr_globalz00, BgL_jz00_3658,
											make_vector(
												(long)
												CINT(BGl_tokenzd2setzd2siza7eza7zz__lalr_globalz00),
												BINT(((long) 0))));
										{
											long BgL_jz00_5652;

											BgL_jz00_5652 = (BgL_jz00_3658 + ((long) 1));
											BgL_jz00_3658 = BgL_jz00_5652;
											goto BgL_dozd2loopzd2zd21144zd2_3657;
										}
									}
							}
							BGl_LArulenoz00zz__lalr_globalz00 =
								make_vector((long) CINT(BgL_cz00_1737), BINT(((long) -1)));
							BGl_lookbackz00zz__lalr_globalz00 =
								make_vector((long) CINT(BgL_cz00_1737), BFALSE);
						}
						{
							long BgL_iz00_1748;
							long BgL_npz00_1749;

							BgL_iz00_1748 = ((long) 0);
							BgL_npz00_1749 = ((long) 0);
						BgL_zc3z04anonymousza31705ze3z87_1750:
							if (
								(BgL_iz00_1748 < (long) CINT(BGl_nstatesz00zz__lalr_globalz00)))
								{	/* Lalr/lalr.scm 599 */
									bool_t BgL_test2947z00_5662;

									{	/* Lalr/lalr.scm 599 */
										obj_t BgL_vectorz00_3669;

										BgL_vectorz00_3669 = BGl_consistentz00zz__lalr_globalz00;
										BgL_test2947z00_5662 =
											CBOOL(VECTOR_REF(BgL_vectorz00_3669, BgL_iz00_1748));
									}
									if (BgL_test2947z00_5662)
										{
											long BgL_iz00_5665;

											BgL_iz00_5665 = (BgL_iz00_1748 + ((long) 1));
											BgL_iz00_1748 = BgL_iz00_5665;
											goto BgL_zc3z04anonymousza31705ze3z87_1750;
										}
									else
										{	/* Lalr/lalr.scm 601 */
											obj_t BgL_rpz00_1754;

											BgL_rpz00_1754 =
												VECTOR_REF(BGl_reductionzd2tablezd2zz__lalr_globalz00,
												BgL_iz00_1748);
											if (CBOOL(BgL_rpz00_1754))
												{	/* Lalr/lalr.scm 603 */
													obj_t BgL_g1145z00_1755;

													BgL_g1145z00_1755 =
														VECTOR_REF(((obj_t) BgL_rpz00_1754), ((long) 2));
													{
														obj_t BgL_jz00_1757;
														long BgL_np2z00_1758;

														BgL_jz00_1757 = BgL_g1145z00_1755;
														BgL_np2z00_1758 = BgL_npz00_1749;
													BgL_zc3z04anonymousza31709ze3z87_1759:
														if (NULLP(BgL_jz00_1757))
															{
																long BgL_npz00_5676;
																long BgL_iz00_5674;

																BgL_iz00_5674 = (BgL_iz00_1748 + ((long) 1));
																BgL_npz00_5676 = BgL_np2z00_1758;
																BgL_npz00_1749 = BgL_npz00_5676;
																BgL_iz00_1748 = BgL_iz00_5674;
																goto BgL_zc3z04anonymousza31705ze3z87_1750;
															}
														else
															{	/* Lalr/lalr.scm 604 */
																{	/* Lalr/lalr.scm 607 */
																	obj_t BgL_arg1712z00_1762;

																	BgL_arg1712z00_1762 =
																		CAR(((obj_t) BgL_jz00_1757));
																	VECTOR_SET(BGl_LArulenoz00zz__lalr_globalz00,
																		BgL_np2z00_1758, BgL_arg1712z00_1762);
																}
																{	/* Lalr/lalr.scm 608 */
																	obj_t BgL_arg1713z00_1763;
																	long BgL_arg1716z00_1764;

																	BgL_arg1713z00_1763 =
																		CDR(((obj_t) BgL_jz00_1757));
																	BgL_arg1716z00_1764 =
																		(BgL_np2z00_1758 + ((long) 1));
																	{
																		long BgL_np2z00_5684;
																		obj_t BgL_jz00_5683;

																		BgL_jz00_5683 = BgL_arg1713z00_1763;
																		BgL_np2z00_5684 = BgL_arg1716z00_1764;
																		BgL_np2z00_1758 = BgL_np2z00_5684;
																		BgL_jz00_1757 = BgL_jz00_5683;
																		goto BgL_zc3z04anonymousza31709ze3z87_1759;
																	}
																}
															}
													}
												}
											else
												{
													long BgL_iz00_5685;

													BgL_iz00_5685 = (BgL_iz00_1748 + ((long) 1));
													BgL_iz00_1748 = BgL_iz00_5685;
													goto BgL_zc3z04anonymousza31705ze3z87_1750;
												}
										}
								}
							else
								{	/* Lalr/lalr.scm 598 */
									return ((bool_t) 0);
								}
						}
					}
			}
		}

	}



/* set-goto-map */
	bool_t BGl_setzd2gotozd2mapz00zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 612 */
			BGl_gotozd2mapzd2zz__lalr_globalz00 =
				make_vector(
				((long) CINT(BGl_nvarsz00zz__lalr_globalz00) + ((long) 1)),
				BINT(((long) 0)));
			{	/* Lalr/lalr.scm 614 */
				obj_t BgL_tempzd2mapzd2_1777;

				BgL_tempzd2mapzd2_1777 =
					make_vector(
					((long) CINT(BGl_nvarsz00zz__lalr_globalz00) + ((long) 1)),
					BINT(((long) 0)));
				{
					long BgL_ngz00_1779;
					obj_t BgL_spz00_1780;

					BgL_ngz00_1779 = ((long) 0);
					BgL_spz00_1780 = BGl_firstzd2shiftzd2zz__lalr_globalz00;
				BgL_zc3z04anonymousza31724ze3z87_1781:
					if (PAIRP(BgL_spz00_1780))
						{	/* Lalr/lalr.scm 617 */
							obj_t BgL_g1146z00_1783;

							{	/* Lalr/lalr.scm 617 */
								obj_t BgL_arg1738z00_1799;

								{	/* Lalr/lalr.scm 617 */
									obj_t BgL_arg1739z00_1800;

									BgL_arg1739z00_1800 = CAR(BgL_spz00_1780);
									BgL_arg1738z00_1799 =
										VECTOR_REF(((obj_t) BgL_arg1739z00_1800), ((long) 2));
								}
								BgL_g1146z00_1783 = bgl_reverse(BgL_arg1738z00_1799);
							}
							{
								obj_t BgL_iz00_1785;
								long BgL_ng2z00_1786;

								BgL_iz00_1785 = BgL_g1146z00_1783;
								BgL_ng2z00_1786 = BgL_ngz00_1779;
							BgL_zc3z04anonymousza31727ze3z87_1787:
								if (PAIRP(BgL_iz00_1785))
									{	/* Lalr/lalr.scm 619 */
										obj_t BgL_symbolz00_1789;

										{	/* Lalr/lalr.scm 619 */
											obj_t BgL_arg1736z00_1796;

											BgL_arg1736z00_1796 = CAR(BgL_iz00_1785);
											BgL_symbolz00_1789 =
												VECTOR_REF(BGl_acceszd2symbolzd2zz__lalr_globalz00,
												(long) CINT(BgL_arg1736z00_1796));
										}
										if (
											((long) CINT(BgL_symbolz00_1789) <
												(long) CINT(BGl_nvarsz00zz__lalr_globalz00)))
											{	/* Lalr/lalr.scm 620 */
												{	/* Lalr/lalr.scm 623 */
													long BgL_arg1730z00_1791;

													{	/* Lalr/lalr.scm 623 */
														obj_t BgL_arg1731z00_1792;

														BgL_arg1731z00_1792 =
															VECTOR_REF(BGl_gotozd2mapzd2zz__lalr_globalz00,
															(long) CINT(BgL_symbolz00_1789));
														BgL_arg1730z00_1791 =
															(((long) 1) + (long) CINT(BgL_arg1731z00_1792));
													}
													VECTOR_SET(BGl_gotozd2mapzd2zz__lalr_globalz00,
														(long) CINT(BgL_symbolz00_1789),
														BINT(BgL_arg1730z00_1791));
												}
												{
													long BgL_ng2z00_5719;
													obj_t BgL_iz00_5717;

													BgL_iz00_5717 = CDR(BgL_iz00_1785);
													BgL_ng2z00_5719 = (BgL_ng2z00_1786 + ((long) 1));
													BgL_ng2z00_1786 = BgL_ng2z00_5719;
													BgL_iz00_1785 = BgL_iz00_5717;
													goto BgL_zc3z04anonymousza31727ze3z87_1787;
												}
											}
										else
											{
												obj_t BgL_iz00_5721;

												BgL_iz00_5721 = CDR(BgL_iz00_1785);
												BgL_iz00_1785 = BgL_iz00_5721;
												goto BgL_zc3z04anonymousza31727ze3z87_1787;
											}
									}
								else
									{	/* Lalr/lalr.scm 626 */
										obj_t BgL_arg1737z00_1797;

										BgL_arg1737z00_1797 = CDR(((obj_t) BgL_spz00_1780));
										{
											obj_t BgL_spz00_5726;
											long BgL_ngz00_5725;

											BgL_ngz00_5725 = BgL_ng2z00_1786;
											BgL_spz00_5726 = BgL_arg1737z00_1797;
											BgL_spz00_1780 = BgL_spz00_5726;
											BgL_ngz00_1779 = BgL_ngz00_5725;
											goto BgL_zc3z04anonymousza31724ze3z87_1781;
										}
									}
							}
						}
					else
						{
							long BgL_kz00_1802;
							long BgL_iz00_1803;

							BgL_kz00_1802 = ((long) 0);
							BgL_iz00_1803 = ((long) 0);
						BgL_zc3z04anonymousza31740ze3z87_1804:
							if ((BgL_iz00_1803 < (long) CINT(BGl_nvarsz00zz__lalr_globalz00)))
								{	/* Lalr/lalr.scm 629 */
									VECTOR_SET(BgL_tempzd2mapzd2_1777, BgL_iz00_1803,
										BINT(BgL_kz00_1802));
									{	/* Lalr/lalr.scm 632 */
										long BgL_arg1742z00_1806;
										long BgL_arg1743z00_1807;

										{	/* Lalr/lalr.scm 632 */
											obj_t BgL_arg1744z00_1808;

											BgL_arg1744z00_1808 =
												VECTOR_REF(BGl_gotozd2mapzd2zz__lalr_globalz00,
												BgL_iz00_1803);
											BgL_arg1742z00_1806 =
												(BgL_kz00_1802 + (long) CINT(BgL_arg1744z00_1808));
										}
										BgL_arg1743z00_1807 = (BgL_iz00_1803 + ((long) 1));
										{
											long BgL_iz00_5737;
											long BgL_kz00_5736;

											BgL_kz00_5736 = BgL_arg1742z00_1806;
											BgL_iz00_5737 = BgL_arg1743z00_1807;
											BgL_iz00_1803 = BgL_iz00_5737;
											BgL_kz00_1802 = BgL_kz00_5736;
											goto BgL_zc3z04anonymousza31740ze3z87_1804;
										}
									}
								}
							else
								{	/* Lalr/lalr.scm 629 */
									{
										long BgL_iz00_3734;

										BgL_iz00_3734 = ((long) 0);
									BgL_dozd2loopzd2zd21147zd2_3733:
										if (
											(BgL_iz00_3734 >=
												(long) CINT(BGl_nvarsz00zz__lalr_globalz00)))
											{	/* Lalr/lalr.scm 635 */
												((bool_t) 0);
											}
										else
											{	/* Lalr/lalr.scm 635 */
												VECTOR_SET(BGl_gotozd2mapzd2zz__lalr_globalz00,
													BgL_iz00_3734, VECTOR_REF(BgL_tempzd2mapzd2_1777,
														BgL_iz00_3734));
												{
													long BgL_iz00_5743;

													BgL_iz00_5743 = (BgL_iz00_3734 + ((long) 1));
													BgL_iz00_3734 = BgL_iz00_5743;
													goto BgL_dozd2loopzd2zd21147zd2_3733;
												}
											}
									}
									BGl_ngotosz00zz__lalr_globalz00 = BINT(BgL_ngz00_1779);
									VECTOR_SET(BGl_gotozd2mapzd2zz__lalr_globalz00,
										(long) CINT(BGl_nvarsz00zz__lalr_globalz00),
										BGl_ngotosz00zz__lalr_globalz00);
									VECTOR_SET(BgL_tempzd2mapzd2_1777,
										(long) CINT(BGl_nvarsz00zz__lalr_globalz00),
										BGl_ngotosz00zz__lalr_globalz00);
									BGl_fromzd2statezd2zz__lalr_globalz00 =
										make_vector((long) CINT(BGl_ngotosz00zz__lalr_globalz00),
										BFALSE);
									BGl_tozd2statezd2zz__lalr_globalz00 =
										make_vector((long) CINT(BGl_ngotosz00zz__lalr_globalz00),
										BFALSE);
									{
										obj_t BgL_spz00_1817;

										BgL_spz00_1817 = BGl_firstzd2shiftzd2zz__lalr_globalz00;
									BgL_zc3z04anonymousza31749ze3z87_1818:
										if (NULLP(BgL_spz00_1817))
											{	/* Lalr/lalr.scm 645 */
												return ((bool_t) 0);
											}
										else
											{	/* Lalr/lalr.scm 645 */
												{	/* Lalr/lalr.scm 647 */
													obj_t BgL_xz00_1820;

													BgL_xz00_1820 = CAR(((obj_t) BgL_spz00_1817));
													{	/* Lalr/lalr.scm 647 */
														obj_t BgL_state1z00_1821;

														BgL_state1z00_1821 =
															VECTOR_REF(((obj_t) BgL_xz00_1820), ((long) 0));
														{	/* Lalr/lalr.scm 648 */

															{
																obj_t BgL_iz00_1824;

																{	/* Lalr/lalr.scm 649 */
																	obj_t BgL_arg1751z00_1823;

																	BgL_arg1751z00_1823 =
																		VECTOR_REF(
																		((obj_t) BgL_xz00_1820), ((long) 2));
																	BgL_iz00_1824 = BgL_arg1751z00_1823;
																BgL_zc3z04anonymousza31752ze3z87_1825:
																	if (NULLP(BgL_iz00_1824))
																		{	/* Lalr/lalr.scm 649 */
																			((bool_t) 0);
																		}
																	else
																		{	/* Lalr/lalr.scm 649 */
																			{	/* Lalr/lalr.scm 651 */
																				obj_t BgL_state2z00_1827;

																				BgL_state2z00_1827 =
																					CAR(((obj_t) BgL_iz00_1824));
																				{	/* Lalr/lalr.scm 651 */
																					obj_t BgL_symbolz00_1828;

																					BgL_symbolz00_1828 =
																						VECTOR_REF
																						(BGl_acceszd2symbolzd2zz__lalr_globalz00,
																						(long) CINT(BgL_state2z00_1827));
																					{	/* Lalr/lalr.scm 652 */

																						if (
																							((long) CINT(BgL_symbolz00_1828) <
																								(long)
																								CINT
																								(BGl_nvarsz00zz__lalr_globalz00)))
																							{	/* Lalr/lalr.scm 654 */
																								obj_t BgL_kz00_1830;

																								BgL_kz00_1830 =
																									VECTOR_REF
																									(BgL_tempzd2mapzd2_1777,
																									(long)
																									CINT(BgL_symbolz00_1828));
																								{	/* Lalr/lalr.scm 655 */
																									long BgL_arg1755z00_1831;

																									BgL_arg1755z00_1831 =
																										(
																										(long) CINT(BgL_kz00_1830) +
																										((long) 1));
																									VECTOR_SET
																										(BgL_tempzd2mapzd2_1777,
																										(long)
																										CINT(BgL_symbolz00_1828),
																										BINT(BgL_arg1755z00_1831));
																								}
																								VECTOR_SET
																									(BGl_fromzd2statezd2zz__lalr_globalz00,
																									(long) CINT(BgL_kz00_1830),
																									BgL_state1z00_1821);
																								VECTOR_SET
																									(BGl_tozd2statezd2zz__lalr_globalz00,
																									(long) CINT(BgL_kz00_1830),
																									BgL_state2z00_1827);
																							}
																						else
																							{	/* Lalr/lalr.scm 653 */
																								BFALSE;
																							}
																					}
																				}
																			}
																			{	/* Lalr/lalr.scm 649 */
																				obj_t BgL_arg1756z00_1832;

																				BgL_arg1756z00_1832 =
																					CDR(((obj_t) BgL_iz00_1824));
																				{
																					obj_t BgL_iz00_5785;

																					BgL_iz00_5785 = BgL_arg1756z00_1832;
																					BgL_iz00_1824 = BgL_iz00_5785;
																					goto
																						BgL_zc3z04anonymousza31752ze3z87_1825;
																				}
																			}
																		}
																}
															}
														}
													}
												}
												{	/* Lalr/lalr.scm 645 */
													obj_t BgL_arg1757z00_1834;

													BgL_arg1757z00_1834 = CDR(((obj_t) BgL_spz00_1817));
													{
														obj_t BgL_spz00_5788;

														BgL_spz00_5788 = BgL_arg1757z00_1834;
														BgL_spz00_1817 = BgL_spz00_5788;
														goto BgL_zc3z04anonymousza31749ze3z87_1818;
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



/* map-goto */
	long BGl_mapzd2gotozd2zz__lalr_expandz00(obj_t BgL_statez00_15,
		obj_t BgL_symbolz00_16)
	{
		{	/* Lalr/lalr.scm 660 */
			{	/* Lalr/lalr.scm 661 */
				obj_t BgL_g1150z00_1839;
				long BgL_g1151z00_1840;

				BgL_g1150z00_1839 =
					VECTOR_REF(BGl_gotozd2mapzd2zz__lalr_globalz00,
					(long) CINT(BgL_symbolz00_16));
				{	/* Lalr/lalr.scm 662 */
					obj_t BgL_arg1774z00_1860;

					BgL_arg1774z00_1860 =
						VECTOR_REF(BGl_gotozd2mapzd2zz__lalr_globalz00,
						((long) CINT(BgL_symbolz00_16) + ((long) 1)));
					BgL_g1151z00_1840 = ((long) CINT(BgL_arg1774z00_1860) - ((long) 1));
				}
				{
					obj_t BgL_lowz00_1842;
					long BgL_highz00_1843;

					BgL_lowz00_1842 = BgL_g1150z00_1839;
					BgL_highz00_1843 = BgL_g1151z00_1840;
				BgL_zc3z04anonymousza31760ze3z87_1844:
					if (((long) CINT(BgL_lowz00_1842) > BgL_highz00_1843))
						{	/* Lalr/lalr.scm 663 */
							{	/* Lalr/lalr.scm 665 */
								obj_t BgL_arg1762z00_1846;
								obj_t BgL_arg1763z00_1847;

								{	/* Lalr/lalr.scm 665 */
									obj_t BgL_list1764z00_1848;

									{	/* Lalr/lalr.scm 665 */
										obj_t BgL_arg1765z00_1849;

										{	/* Lalr/lalr.scm 665 */
											obj_t BgL_arg1766z00_1850;

											BgL_arg1766z00_1850 =
												MAKE_YOUNG_PAIR(BgL_symbolz00_16, BNIL);
											BgL_arg1765z00_1849 =
												MAKE_YOUNG_PAIR(BgL_statez00_15, BgL_arg1766z00_1850);
										}
										BgL_list1764z00_1848 =
											MAKE_YOUNG_PAIR(BGl_string2798z00zz__lalr_expandz00,
											BgL_arg1765z00_1849);
									}
									BgL_arg1762z00_1846 = BgL_list1764z00_1848;
								}
								{	/* Lalr/lalr.scm 665 */
									obj_t BgL_res2592z00_3789;

									{	/* Lalr/lalr.scm 665 */
										obj_t BgL_tmpz00_5802;

										BgL_tmpz00_5802 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2592z00_3789 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_5802);
									}
									BgL_arg1763z00_1847 = BgL_res2592z00_3789;
								}
								bgl_display_obj(BgL_arg1762z00_1846, BgL_arg1763z00_1847);
							}
							{	/* Lalr/lalr.scm 665 */
								obj_t BgL_arg1768z00_1851;

								{	/* Lalr/lalr.scm 665 */
									obj_t BgL_res2593z00_3791;

									{	/* Lalr/lalr.scm 665 */
										obj_t BgL_tmpz00_5806;

										BgL_tmpz00_5806 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2593z00_3791 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_5806);
									}
									BgL_arg1768z00_1851 = BgL_res2593z00_3791;
								}
								bgl_display_char(((unsigned char) 10), BgL_arg1768z00_1851);
							}
							return ((long) 0);
						}
					else
						{	/* Lalr/lalr.scm 667 */
							long BgL_middlez00_1852;

							{	/* Lalr/lalr.scm 667 */
								long BgL_arg1773z00_1858;

								BgL_arg1773z00_1858 =
									((long) CINT(BgL_lowz00_1842) + BgL_highz00_1843);
								{	/* Lalr/lalr.scm 667 */
									long BgL_res2595z00_3797;

									BgL_res2595z00_3797 = (BgL_arg1773z00_1858 / ((long) 2));
									BgL_middlez00_1852 = BgL_res2595z00_3797;
							}}
							{	/* Lalr/lalr.scm 667 */
								obj_t BgL_sz00_1853;

								BgL_sz00_1853 =
									VECTOR_REF(BGl_fromzd2statezd2zz__lalr_globalz00,
									BgL_middlez00_1852);
								{	/* Lalr/lalr.scm 668 */

									if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_sz00_1853,
											BgL_statez00_15))
										{	/* Lalr/lalr.scm 670 */
											return BgL_middlez00_1852;
										}
									else
										{	/* Lalr/lalr.scm 670 */
											if (
												((long) CINT(BgL_sz00_1853) <
													(long) CINT(BgL_statez00_15)))
												{	/* Lalr/lalr.scm 673 */
													long BgL_arg1771z00_1856;

													BgL_arg1771z00_1856 =
														(BgL_middlez00_1852 + ((long) 1));
													{
														obj_t BgL_lowz00_5821;

														BgL_lowz00_5821 = BINT(BgL_arg1771z00_1856);
														BgL_lowz00_1842 = BgL_lowz00_5821;
														goto BgL_zc3z04anonymousza31760ze3z87_1844;
													}
												}
											else
												{
													long BgL_highz00_5823;

													BgL_highz00_5823 = (BgL_middlez00_1852 - ((long) 1));
													BgL_highz00_1843 = BgL_highz00_5823;
													goto BgL_zc3z04anonymousza31760ze3z87_1844;
												}
										}
								}
							}
						}
				}
			}
		}

	}



/* initialize-F */
	bool_t BGl_initializa7ezd2Fz75zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 678 */
			BGl_Fz00zz__lalr_globalz00 =
				make_vector((long) CINT(BGl_ngotosz00zz__lalr_globalz00), BFALSE);
			{
				long BgL_iz00_3812;

				BgL_iz00_3812 = ((long) 0);
			BgL_dozd2loopzd2zd21152zd2_3811:
				if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_iz00_3812),
						BGl_ngotosz00zz__lalr_globalz00))
					{	/* Lalr/lalr.scm 680 */
						((bool_t) 0);
					}
				else
					{	/* Lalr/lalr.scm 680 */
						VECTOR_SET(BGl_Fz00zz__lalr_globalz00, BgL_iz00_3812,
							make_vector(
								(long) CINT(BGl_tokenzd2setzd2siza7eza7zz__lalr_globalz00),
								BINT(((long) 0))));
						{
							long BgL_iz00_5834;

							BgL_iz00_5834 = (BgL_iz00_3812 + ((long) 1));
							BgL_iz00_3812 = BgL_iz00_5834;
							goto BgL_dozd2loopzd2zd21152zd2_3811;
						}
					}
			}
			{	/* Lalr/lalr.scm 682 */
				obj_t BgL_readsz00_1869;

				BgL_readsz00_1869 =
					make_vector((long) CINT(BGl_ngotosz00zz__lalr_globalz00), BFALSE);
				{
					long BgL_iz00_1871;
					long BgL_rowpz00_1872;

					BgL_iz00_1871 = ((long) 0);
					BgL_rowpz00_1872 = ((long) 0);
				BgL_zc3z04anonymousza31780ze3z87_1873:
					if ((BgL_iz00_1871 < (long) CINT(BGl_ngotosz00zz__lalr_globalz00)))
						{	/* Lalr/lalr.scm 686 */
							obj_t BgL_rowfz00_1875;

							BgL_rowfz00_1875 =
								VECTOR_REF(BGl_Fz00zz__lalr_globalz00, BgL_rowpz00_1872);
							{	/* Lalr/lalr.scm 686 */
								obj_t BgL_statenoz00_1876;

								BgL_statenoz00_1876 =
									VECTOR_REF(BGl_tozd2statezd2zz__lalr_globalz00,
									BgL_iz00_1871);
								{	/* Lalr/lalr.scm 687 */
									obj_t BgL_spz00_1877;

									BgL_spz00_1877 =
										VECTOR_REF(BGl_shiftzd2tablezd2zz__lalr_globalz00,
										(long) CINT(BgL_statenoz00_1876));
									{	/* Lalr/lalr.scm 688 */

										if (CBOOL(BgL_spz00_1877))
											{	/* Lalr/lalr.scm 690 */
												obj_t BgL_g1153z00_1878;

												BgL_g1153z00_1878 =
													VECTOR_REF(((obj_t) BgL_spz00_1877), ((long) 2));
												{
													obj_t BgL_jz00_1881;
													obj_t BgL_edgesz00_1882;

													BgL_jz00_1881 = BgL_g1153z00_1878;
													BgL_edgesz00_1882 = BNIL;
												BgL_zc3z04anonymousza31782ze3z87_1883:
													if (PAIRP(BgL_jz00_1881))
														{	/* Lalr/lalr.scm 692 */
															obj_t BgL_symbolz00_1885;

															{	/* Lalr/lalr.scm 692 */
																obj_t BgL_arg1797z00_1900;

																BgL_arg1797z00_1900 = CAR(BgL_jz00_1881);
																BgL_symbolz00_1885 =
																	VECTOR_REF
																	(BGl_acceszd2symbolzd2zz__lalr_globalz00,
																	(long) CINT(BgL_arg1797z00_1900));
															}
															if (
																((long) CINT(BgL_symbolz00_1885) <
																	(long) CINT(BGl_nvarsz00zz__lalr_globalz00)))
																{	/* Lalr/lalr.scm 694 */
																	bool_t BgL_test2966z00_5858;

																	{	/* Lalr/lalr.scm 694 */
																		obj_t BgL_vectorz00_3837;
																		long BgL_kz00_3838;

																		BgL_vectorz00_3837 =
																			BGl_nullablez00zz__lalr_globalz00;
																		BgL_kz00_3838 =
																			(long) CINT(BgL_symbolz00_1885);
																		BgL_test2966z00_5858 =
																			CBOOL(VECTOR_REF(BgL_vectorz00_3837,
																				BgL_kz00_3838));
																	}
																	if (BgL_test2966z00_5858)
																		{	/* Lalr/lalr.scm 695 */
																			obj_t BgL_arg1786z00_1888;
																			obj_t BgL_arg1787z00_1889;

																			BgL_arg1786z00_1888 = CDR(BgL_jz00_1881);
																			{	/* Lalr/lalr.scm 695 */
																				long BgL_arg1788z00_1890;

																				BgL_arg1788z00_1890 =
																					BGl_mapzd2gotozd2zz__lalr_expandz00
																					(BgL_statenoz00_1876,
																					BgL_symbolz00_1885);
																				BgL_arg1787z00_1889 =
																					MAKE_YOUNG_PAIR(BINT
																					(BgL_arg1788z00_1890),
																					BgL_edgesz00_1882);
																			}
																			{
																				obj_t BgL_edgesz00_5867;
																				obj_t BgL_jz00_5866;

																				BgL_jz00_5866 = BgL_arg1786z00_1888;
																				BgL_edgesz00_5867 = BgL_arg1787z00_1889;
																				BgL_edgesz00_1882 = BgL_edgesz00_5867;
																				BgL_jz00_1881 = BgL_jz00_5866;
																				goto
																					BgL_zc3z04anonymousza31782ze3z87_1883;
																			}
																		}
																	else
																		{
																			obj_t BgL_jz00_5868;

																			BgL_jz00_5868 = CDR(BgL_jz00_1881);
																			BgL_jz00_1881 = BgL_jz00_5868;
																			goto
																				BgL_zc3z04anonymousza31782ze3z87_1883;
																		}
																}
															else
																{	/* Lalr/lalr.scm 693 */
																	{	/* Lalr/lalr.scm 699 */
																		obj_t BgL_xz00_1892;
																		obj_t BgL_yz00_1893;

																		{	/* Lalr/lalr.scm 699 */
																			long BgL_arg1792z00_1896;

																			BgL_arg1792z00_1896 =
																				(
																				(long) CINT(BgL_symbolz00_1885) -
																				(long)
																				CINT(BGl_nvarsz00zz__lalr_globalz00));
																			BgL_xz00_1892 =
																				BGl_quotientz00zz__r4_numbers_6_5_fixnumz00
																				(BINT(BgL_arg1792z00_1896),
																				BINT(((long) 28)));
																		}
																		{	/* Lalr/lalr.scm 699 */
																			obj_t BgL_arg1794z00_1897;

																			{	/* Lalr/lalr.scm 699 */
																				long BgL_arg1795z00_1898;

																				BgL_arg1795z00_1898 =
																					(
																					(long) CINT(BgL_symbolz00_1885) -
																					(long)
																					CINT(BGl_nvarsz00zz__lalr_globalz00));
																				BgL_arg1794z00_1897 =
																					BGl_remainderz00zz__r4_numbers_6_5_fixnumz00
																					(BINT(BgL_arg1795z00_1898),
																					BINT(((long) 28)));
																			}
																			BgL_yz00_1893 =
																				BGl_exptz00zz__r4_numbers_6_5z00(BINT((
																						(long) 2)), BgL_arg1794z00_1897);
																		}
																		{	/* Lalr/lalr.scm 699 */
																			long BgL_arg1790z00_1894;

																			{	/* Lalr/lalr.scm 699 */
																				obj_t BgL_arg1791z00_1895;

																				{	/* Lalr/lalr.scm 699 */
																					long BgL_kz00_3848;

																					BgL_kz00_3848 =
																						(long) CINT(BgL_xz00_1892);
																					BgL_arg1791z00_1895 =
																						VECTOR_REF(
																						((obj_t) BgL_rowfz00_1875),
																						BgL_kz00_3848);
																				}
																				BgL_arg1790z00_1894 =
																					(
																					(long) CINT(BgL_arg1791z00_1895) |
																					(long) CINT(BgL_yz00_1893));
																			}
																			{	/* Lalr/lalr.scm 699 */
																				long BgL_kz00_3853;

																				BgL_kz00_3853 =
																					(long) CINT(BgL_xz00_1892);
																				VECTOR_SET(
																					((obj_t) BgL_rowfz00_1875),
																					BgL_kz00_3853,
																					BINT(BgL_arg1790z00_1894));
																	}}}
																	{
																		obj_t BgL_jz00_5894;

																		BgL_jz00_5894 = CDR(BgL_jz00_1881);
																		BgL_jz00_1881 = BgL_jz00_5894;
																		goto BgL_zc3z04anonymousza31782ze3z87_1883;
																	}
																}
														}
													else
														{	/* Lalr/lalr.scm 691 */
															if (NULLP(BgL_edgesz00_1882))
																{	/* Lalr/lalr.scm 701 */
																	BFALSE;
																}
															else
																{	/* Lalr/lalr.scm 701 */
																	VECTOR_SET(BgL_readsz00_1869, BgL_iz00_1871,
																		bgl_reverse(BgL_edgesz00_1882));
																}
														}
												}
											}
										else
											{	/* Lalr/lalr.scm 689 */
												BFALSE;
											}
										{
											long BgL_rowpz00_5902;
											long BgL_iz00_5900;

											BgL_iz00_5900 = (BgL_iz00_1871 + ((long) 1));
											BgL_rowpz00_5902 = (BgL_rowpz00_1872 + ((long) 1));
											BgL_rowpz00_1872 = BgL_rowpz00_5902;
											BgL_iz00_1871 = BgL_iz00_5900;
											goto BgL_zc3z04anonymousza31780ze3z87_1873;
										}
									}
								}
							}
						}
					else
						{	/* Lalr/lalr.scm 685 */
							((bool_t) 0);
						}
				}
				return BGl_digraphz00zz__lalr_expandz00(BgL_readsz00_1869);
			}
		}

	}



/* add-lookback-edge */
	obj_t BGl_addzd2lookbackzd2edgez00zz__lalr_expandz00(obj_t BgL_statenoz00_17,
		obj_t BgL_rulenoz00_18, long BgL_gotonoz00_19)
	{
		{	/* Lalr/lalr.scm 706 */
			{	/* Lalr/lalr.scm 707 */
				obj_t BgL_kz00_1907;

				BgL_kz00_1907 =
					VECTOR_REF(BGl_lookaheadsz00zz__lalr_globalz00,
					((long) CINT(BgL_statenoz00_17) + ((long) 1)));
				{	/* Lalr/lalr.scm 708 */
					obj_t BgL_g1155z00_1908;

					BgL_g1155z00_1908 =
						VECTOR_REF(BGl_lookaheadsz00zz__lalr_globalz00,
						(long) CINT(BgL_statenoz00_17));
					{
						bool_t BgL_foundz00_1910;
						obj_t BgL_iz00_1911;

						BgL_foundz00_1910 = ((bool_t) 0);
						BgL_iz00_1911 = BgL_g1155z00_1908;
					BgL_zc3z04anonymousza31802ze3z87_1912:
						{	/* Lalr/lalr.scm 709 */
							bool_t BgL_test2968z00_5910;

							if (BgL_foundz00_1910)
								{	/* Lalr/lalr.scm 709 */
									BgL_test2968z00_5910 = ((bool_t) 0);
								}
							else
								{	/* Lalr/lalr.scm 709 */
									BgL_test2968z00_5910 =
										((long) CINT(BgL_iz00_1911) < (long) CINT(BgL_kz00_1907));
								}
							if (BgL_test2968z00_5910)
								{	/* Lalr/lalr.scm 709 */
									if (BGl_2zd3zd3zz__r4_numbers_6_5z00(VECTOR_REF
											(BGl_LArulenoz00zz__lalr_globalz00,
												(long) CINT(BgL_iz00_1911)), BgL_rulenoz00_18))
										{
											bool_t BgL_foundz00_5919;

											BgL_foundz00_5919 = ((bool_t) 1);
											BgL_foundz00_1910 = BgL_foundz00_5919;
											goto BgL_zc3z04anonymousza31802ze3z87_1912;
										}
									else
										{	/* Lalr/lalr.scm 712 */
											long BgL_arg1807z00_1916;

											BgL_arg1807z00_1916 =
												((long) CINT(BgL_iz00_1911) + ((long) 1));
											{
												obj_t BgL_iz00_5922;

												BgL_iz00_5922 = BINT(BgL_arg1807z00_1916);
												BgL_iz00_1911 = BgL_iz00_5922;
												goto BgL_zc3z04anonymousza31802ze3z87_1912;
											}
										}
								}
							else
								{	/* Lalr/lalr.scm 709 */
									if (BgL_foundz00_1910)
										{	/* Lalr/lalr.scm 718 */
											obj_t BgL_arg1809z00_1918;

											BgL_arg1809z00_1918 =
												MAKE_YOUNG_PAIR(BINT(BgL_gotonoz00_19),
												VECTOR_REF(BGl_lookbackz00zz__lalr_globalz00,
													(long) CINT(BgL_iz00_1911)));
											return
												VECTOR_SET(BGl_lookbackz00zz__lalr_globalz00,
												(long) CINT(BgL_iz00_1911), BgL_arg1809z00_1918);
										}
									else
										{	/* Lalr/lalr.scm 714 */
											{	/* Lalr/lalr.scm 715 */
												obj_t BgL_arg1811z00_1920;

												{	/* Lalr/lalr.scm 715 */
													obj_t BgL_res2612z00_3880;

													{	/* Lalr/lalr.scm 715 */
														obj_t BgL_tmpz00_5931;

														BgL_tmpz00_5931 = BGL_CURRENT_DYNAMIC_ENV();
														BgL_res2612z00_3880 =
															BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_5931);
													}
													BgL_arg1811z00_1920 = BgL_res2612z00_3880;
												}
												bgl_display_string(BGl_string2799z00zz__lalr_expandz00,
													BgL_arg1811z00_1920);
											}
											{	/* Lalr/lalr.scm 716 */
												obj_t BgL_arg1812z00_1921;
												obj_t BgL_arg1813z00_1922;

												{	/* Lalr/lalr.scm 716 */
													obj_t BgL_list1814z00_1923;

													{	/* Lalr/lalr.scm 716 */
														obj_t BgL_arg1815z00_1924;

														{	/* Lalr/lalr.scm 716 */
															obj_t BgL_arg1816z00_1925;

															BgL_arg1816z00_1925 =
																MAKE_YOUNG_PAIR(BINT(BgL_gotonoz00_19), BNIL);
															BgL_arg1815z00_1924 =
																MAKE_YOUNG_PAIR(BgL_rulenoz00_18,
																BgL_arg1816z00_1925);
														}
														BgL_list1814z00_1923 =
															MAKE_YOUNG_PAIR(BgL_statenoz00_17,
															BgL_arg1815z00_1924);
													}
													BgL_arg1812z00_1921 = BgL_list1814z00_1923;
												}
												{	/* Lalr/lalr.scm 716 */
													obj_t BgL_res2614z00_3885;

													{	/* Lalr/lalr.scm 716 */
														obj_t BgL_tmpz00_5939;

														BgL_tmpz00_5939 = BGL_CURRENT_DYNAMIC_ENV();
														BgL_res2614z00_3885 =
															BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_5939);
													}
													BgL_arg1813z00_1922 = BgL_res2614z00_3885;
												}
												bgl_display_obj(BgL_arg1812z00_1921,
													BgL_arg1813z00_1922);
											}
											{	/* Lalr/lalr.scm 716 */
												obj_t BgL_arg1817z00_1926;

												{	/* Lalr/lalr.scm 716 */
													obj_t BgL_res2615z00_3887;

													{	/* Lalr/lalr.scm 716 */
														obj_t BgL_tmpz00_5943;

														BgL_tmpz00_5943 = BGL_CURRENT_DYNAMIC_ENV();
														BgL_res2615z00_3887 =
															BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_5943);
													}
													BgL_arg1817z00_1926 = BgL_res2615z00_3887;
												}
												return
													bgl_display_char(((unsigned char) 10),
													BgL_arg1817z00_1926);
		}}}}}}}}

	}



/* transpose */
	obj_t BGl_transposez00zz__lalr_expandz00(obj_t BgL_rzd2argzd2_20,
		obj_t BgL_nz00_21)
	{
		{	/* Lalr/lalr.scm 721 */
			{	/* Lalr/lalr.scm 722 */
				obj_t BgL_newzd2endzd2_1929;
				obj_t BgL_newzd2rzd2_1930;

				BgL_newzd2endzd2_1929 = make_vector((long) CINT(BgL_nz00_21), BFALSE);
				BgL_newzd2rzd2_1930 = make_vector((long) CINT(BgL_nz00_21), BFALSE);
				{
					long BgL_iz00_1932;

					BgL_iz00_1932 = ((long) 0);
				BgL_zc3z04anonymousza31819ze3z87_1933:
					if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1932),
							BgL_nz00_21))
						{	/* Lalr/lalr.scm 724 */
							((bool_t) 0);
						}
					else
						{	/* Lalr/lalr.scm 724 */
							{	/* Lalr/lalr.scm 726 */
								obj_t BgL_xz00_1935;

								{	/* Lalr/lalr.scm 726 */
									obj_t BgL_list1821z00_1936;

									BgL_list1821z00_1936 =
										MAKE_YOUNG_PAIR(BGl_symbol2800z00zz__lalr_expandz00, BNIL);
									BgL_xz00_1935 = BgL_list1821z00_1936;
								}
								VECTOR_SET(BgL_newzd2rzd2_1930, BgL_iz00_1932, BgL_xz00_1935);
								VECTOR_SET(BgL_newzd2endzd2_1929, BgL_iz00_1932, BgL_xz00_1935);
							}
							{
								long BgL_iz00_5957;

								BgL_iz00_5957 = (BgL_iz00_1932 + ((long) 1));
								BgL_iz00_1932 = BgL_iz00_5957;
								goto BgL_zc3z04anonymousza31819ze3z87_1933;
							}
						}
				}
				{
					long BgL_iz00_1940;

					BgL_iz00_1940 = ((long) 0);
				BgL_zc3z04anonymousza31823ze3z87_1941:
					if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1940),
							BgL_nz00_21))
						{	/* Lalr/lalr.scm 729 */
							((bool_t) 0);
						}
					else
						{	/* Lalr/lalr.scm 729 */
							{	/* Lalr/lalr.scm 731 */
								obj_t BgL_spz00_1943;

								BgL_spz00_1943 =
									VECTOR_REF(((obj_t) BgL_rzd2argzd2_20), BgL_iz00_1940);
								if (PAIRP(BgL_spz00_1943))
									{
										obj_t BgL_sp2z00_1946;

										BgL_sp2z00_1946 = BgL_spz00_1943;
									BgL_zc3z04anonymousza31826ze3z87_1947:
										if (PAIRP(BgL_sp2z00_1946))
											{	/* Lalr/lalr.scm 735 */
												obj_t BgL_xz00_1949;

												BgL_xz00_1949 = CAR(BgL_sp2z00_1946);
												{	/* Lalr/lalr.scm 735 */
													obj_t BgL_yz00_1950;

													BgL_yz00_1950 =
														VECTOR_REF(BgL_newzd2endzd2_1929,
														(long) CINT(BgL_xz00_1949));
													{	/* Lalr/lalr.scm 736 */

														{	/* Lalr/lalr.scm 737 */
															obj_t BgL_arg1828z00_1951;

															{	/* Lalr/lalr.scm 737 */
																obj_t BgL_arg1829z00_1952;

																BgL_arg1829z00_1952 =
																	CDR(((obj_t) BgL_yz00_1950));
																BgL_arg1828z00_1951 =
																	MAKE_YOUNG_PAIR(BINT(BgL_iz00_1940),
																	BgL_arg1829z00_1952);
															}
															{	/* Lalr/lalr.scm 737 */
																obj_t BgL_tmpz00_5975;

																BgL_tmpz00_5975 = ((obj_t) BgL_yz00_1950);
																SET_CDR(BgL_tmpz00_5975, BgL_arg1828z00_1951);
														}}
														{	/* Lalr/lalr.scm 738 */
															obj_t BgL_arg1830z00_1953;

															BgL_arg1830z00_1953 =
																CDR(((obj_t) BgL_yz00_1950));
															VECTOR_SET(BgL_newzd2endzd2_1929,
																(long) CINT(BgL_xz00_1949),
																BgL_arg1830z00_1953);
														}
														{
															obj_t BgL_sp2z00_5982;

															BgL_sp2z00_5982 = CDR(BgL_sp2z00_1946);
															BgL_sp2z00_1946 = BgL_sp2z00_5982;
															goto BgL_zc3z04anonymousza31826ze3z87_1947;
														}
													}
												}
											}
										else
											{	/* Lalr/lalr.scm 734 */
												((bool_t) 0);
											}
									}
								else
									{	/* Lalr/lalr.scm 732 */
										((bool_t) 0);
									}
							}
							{
								long BgL_iz00_5984;

								BgL_iz00_5984 = (BgL_iz00_1940 + ((long) 1));
								BgL_iz00_1940 = BgL_iz00_5984;
								goto BgL_zc3z04anonymousza31823ze3z87_1941;
							}
						}
				}
				{
					long BgL_iz00_3919;

					BgL_iz00_3919 = ((long) 0);
				BgL_dozd2loopzd2zd21158zd2_3918:
					if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_iz00_3919),
							BgL_nz00_21))
						{	/* Lalr/lalr.scm 740 */
							((bool_t) 0);
						}
					else
						{	/* Lalr/lalr.scm 740 */
							{	/* Lalr/lalr.scm 742 */
								obj_t BgL_arg1835z00_3921;

								{	/* Lalr/lalr.scm 742 */
									obj_t BgL_arg1836z00_3922;

									BgL_arg1836z00_3922 =
										VECTOR_REF(BgL_newzd2rzd2_1930, BgL_iz00_3919);
									BgL_arg1835z00_3921 = CDR(((obj_t) BgL_arg1836z00_3922));
								}
								VECTOR_SET(BgL_newzd2rzd2_1930, BgL_iz00_3919,
									BgL_arg1835z00_3921);
							}
							{
								long BgL_iz00_5993;

								BgL_iz00_5993 = (BgL_iz00_3919 + ((long) 1));
								BgL_iz00_3919 = BgL_iz00_5993;
								goto BgL_dozd2loopzd2zd21158zd2_3918;
							}
						}
				}
				return BgL_newzd2rzd2_1930;
			}
		}

	}



/* build-relations */
	obj_t BGl_buildzd2relationszd2zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 748 */
			{
				obj_t BgL_statenoz00_2021;
				obj_t BgL_symbolz00_2022;

				BGl_includesz00zz__lalr_globalz00 =
					make_vector((long) CINT(BGl_ngotosz00zz__lalr_globalz00), BFALSE);
				{
					long BgL_iz00_1968;

					BgL_iz00_1968 = ((long) 0);
				BgL_zc3z04anonymousza31839ze3z87_1969:
					if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1968),
							BGl_ngotosz00zz__lalr_globalz00))
						{	/* Lalr/lalr.scm 761 */
							((bool_t) 0);
						}
					else
						{	/* Lalr/lalr.scm 761 */
							{	/* Lalr/lalr.scm 763 */
								obj_t BgL_state1z00_1971;
								obj_t BgL_symbol1z00_1972;

								BgL_state1z00_1971 =
									VECTOR_REF(BGl_fromzd2statezd2zz__lalr_globalz00,
									BgL_iz00_1968);
								{	/* Lalr/lalr.scm 764 */
									obj_t BgL_arg1861z00_2018;

									BgL_arg1861z00_2018 =
										VECTOR_REF(BGl_tozd2statezd2zz__lalr_globalz00,
										BgL_iz00_1968);
									BgL_symbol1z00_1972 =
										VECTOR_REF(BGl_acceszd2symbolzd2zz__lalr_globalz00,
										(long) CINT(BgL_arg1861z00_2018));
								}
								{	/* Lalr/lalr.scm 765 */
									obj_t BgL_g1161z00_1973;

									BgL_g1161z00_1973 =
										VECTOR_REF(BGl_derivesz00zz__lalr_globalz00,
										(long) CINT(BgL_symbol1z00_1972));
									{
										obj_t BgL_rulepz00_1976;
										obj_t BgL_edgesz00_1977;

										BgL_rulepz00_1976 = BgL_g1161z00_1973;
										BgL_edgesz00_1977 = BNIL;
									BgL_zc3z04anonymousza31841ze3z87_1978:
										if (PAIRP(BgL_rulepz00_1976))
											{	/* Lalr/lalr.scm 768 */
												obj_t BgL_za2rulepza2_1980;

												BgL_za2rulepza2_1980 = CAR(BgL_rulepz00_1976);
												{	/* Lalr/lalr.scm 769 */
													obj_t BgL_g1163z00_1981;
													obj_t BgL_g1164z00_1982;

													BgL_g1163z00_1981 =
														VECTOR_REF(BGl_rrhsz00zz__lalr_globalz00,
														(long) CINT(BgL_za2rulepza2_1980));
													{	/* Lalr/lalr.scm 771 */
														obj_t BgL_list1860z00_2016;

														BgL_list1860z00_2016 =
															MAKE_YOUNG_PAIR(BgL_state1z00_1971, BNIL);
														BgL_g1164z00_1982 = BgL_list1860z00_2016;
													}
													{
														obj_t BgL_rpz00_1984;
														obj_t BgL_statenoz00_1985;
														obj_t BgL_statesz00_1986;

														BgL_rpz00_1984 = BgL_g1163z00_1981;
														BgL_statenoz00_1985 = BgL_state1z00_1971;
														BgL_statesz00_1986 = BgL_g1164z00_1982;
													BgL_zc3z04anonymousza31843ze3z87_1987:
														{	/* Lalr/lalr.scm 772 */
															obj_t BgL_za2rpza2_1988;

															BgL_za2rpza2_1988 =
																VECTOR_REF(BGl_ritemz00zz__lalr_globalz00,
																(long) CINT(BgL_rpz00_1984));
															if (((long) CINT(BgL_za2rpza2_1988) > ((long) 0)))
																{	/* Lalr/lalr.scm 774 */
																	obj_t BgL_stz00_1990;

																	BgL_statenoz00_2021 = BgL_statenoz00_1985;
																	BgL_symbolz00_2022 = BgL_za2rpza2_1988;
																	{	/* Lalr/lalr.scm 751 */
																		obj_t BgL_g1159z00_2024;

																		{	/* Lalr/lalr.scm 751 */
																			obj_t BgL_arg1871z00_2036;

																			BgL_arg1871z00_2036 =
																				VECTOR_REF
																				(BGl_shiftzd2tablezd2zz__lalr_globalz00,
																				(long) CINT(BgL_statenoz00_2021));
																			BgL_g1159z00_2024 =
																				VECTOR_REF(((obj_t)
																					BgL_arg1871z00_2036), ((long) 2));
																		}
																		{
																			obj_t BgL_jz00_3955;
																			obj_t BgL_stnoz00_3956;

																			BgL_jz00_3955 = BgL_g1159z00_2024;
																			BgL_stnoz00_3956 = BgL_statenoz00_2021;
																		BgL_loopz00_3954:
																			if (NULLP(BgL_jz00_3955))
																				{	/* Lalr/lalr.scm 753 */
																					BgL_stz00_1990 = BgL_stnoz00_3956;
																				}
																			else
																				{	/* Lalr/lalr.scm 755 */
																					obj_t BgL_st2z00_3963;

																					BgL_st2z00_3963 =
																						CAR(((obj_t) BgL_jz00_3955));
																					if (BGl_2zd3zd3zz__r4_numbers_6_5z00
																						(VECTOR_REF
																							(BGl_acceszd2symbolzd2zz__lalr_globalz00,
																								(long) CINT(BgL_st2z00_3963)),
																							BgL_symbolz00_2022))
																						{	/* Lalr/lalr.scm 756 */
																							BgL_stz00_1990 = BgL_st2z00_3963;
																						}
																					else
																						{
																							obj_t BgL_stnoz00_6032;
																							obj_t BgL_jz00_6029;

																							BgL_jz00_6029 =
																								CDR(((obj_t) BgL_jz00_3955));
																							BgL_stnoz00_6032 =
																								BgL_st2z00_3963;
																							BgL_stnoz00_3956 =
																								BgL_stnoz00_6032;
																							BgL_jz00_3955 = BgL_jz00_6029;
																							goto BgL_loopz00_3954;
																						}
																				}
																		}
																	}
																	{	/* Lalr/lalr.scm 775 */
																		long BgL_arg1845z00_1991;
																		obj_t BgL_arg1846z00_1992;

																		BgL_arg1845z00_1991 =
																			(
																			(long) CINT(BgL_rpz00_1984) + ((long) 1));
																		BgL_arg1846z00_1992 =
																			MAKE_YOUNG_PAIR(BgL_stz00_1990,
																			BgL_statesz00_1986);
																		{
																			obj_t BgL_statesz00_6039;
																			obj_t BgL_statenoz00_6038;
																			obj_t BgL_rpz00_6036;

																			BgL_rpz00_6036 =
																				BINT(BgL_arg1845z00_1991);
																			BgL_statenoz00_6038 = BgL_stz00_1990;
																			BgL_statesz00_6039 = BgL_arg1846z00_1992;
																			BgL_statesz00_1986 = BgL_statesz00_6039;
																			BgL_statenoz00_1985 = BgL_statenoz00_6038;
																			BgL_rpz00_1984 = BgL_rpz00_6036;
																			goto
																				BgL_zc3z04anonymousza31843ze3z87_1987;
																		}
																	}
																}
															else
																{	/* Lalr/lalr.scm 773 */
																	{	/* Lalr/lalr.scm 778 */
																		bool_t BgL_test2982z00_6040;

																		{	/* Lalr/lalr.scm 778 */
																			obj_t BgL_vectorz00_3991;
																			long BgL_kz00_3992;

																			BgL_vectorz00_3991 =
																				BGl_consistentz00zz__lalr_globalz00;
																			BgL_kz00_3992 =
																				(long) CINT(BgL_statenoz00_1985);
																			BgL_test2982z00_6040 =
																				CBOOL(VECTOR_REF(BgL_vectorz00_3991,
																					BgL_kz00_3992));
																		}
																		if (BgL_test2982z00_6040)
																			{	/* Lalr/lalr.scm 778 */
																				BFALSE;
																			}
																		else
																			{	/* Lalr/lalr.scm 778 */
																				BGl_addzd2lookbackzd2edgez00zz__lalr_expandz00
																					(BgL_statenoz00_1985,
																					BgL_za2rulepza2_1980, BgL_iz00_1968);
																			}
																	}
																	{	/* Lalr/lalr.scm 781 */
																		obj_t BgL_g1165z00_1994;
																		long BgL_g1166z00_1995;

																		BgL_g1165z00_1994 =
																			CDR(((obj_t) BgL_statesz00_1986));
																		BgL_g1166z00_1995 =
																			(
																			(long) CINT(BgL_rpz00_1984) - ((long) 1));
																		{
																			bool_t BgL_donez00_1997;
																			obj_t BgL_stpz00_1998;
																			long BgL_rp2z00_1999;
																			obj_t BgL_edgpz00_2000;

																			BgL_donez00_1997 = ((bool_t) 0);
																			BgL_stpz00_1998 = BgL_g1165z00_1994;
																			BgL_rp2z00_1999 = BgL_g1166z00_1995;
																			BgL_edgpz00_2000 = BgL_edgesz00_1977;
																		BgL_zc3z04anonymousza31848ze3z87_2001:
																			if (BgL_donez00_1997)
																				{	/* Lalr/lalr.scm 794 */
																					obj_t BgL_arg1850z00_2002;

																					BgL_arg1850z00_2002 =
																						CDR(((obj_t) BgL_rulepz00_1976));
																					{
																						obj_t BgL_edgesz00_6053;
																						obj_t BgL_rulepz00_6052;

																						BgL_rulepz00_6052 =
																							BgL_arg1850z00_2002;
																						BgL_edgesz00_6053 =
																							BgL_edgpz00_2000;
																						BgL_edgesz00_1977 =
																							BgL_edgesz00_6053;
																						BgL_rulepz00_1976 =
																							BgL_rulepz00_6052;
																						goto
																							BgL_zc3z04anonymousza31841ze3z87_1978;
																					}
																				}
																			else
																				{	/* Lalr/lalr.scm 786 */
																					obj_t BgL_za2rpza2_2003;

																					BgL_za2rpza2_2003 =
																						VECTOR_REF
																						(BGl_ritemz00zz__lalr_globalz00,
																						BgL_rp2z00_1999);
																					{	/* Lalr/lalr.scm 787 */
																						bool_t BgL_test2984z00_6055;

																						if (BGl_2zc3zc3zz__r4_numbers_6_5z00
																							(BINT(((long) -1)),
																								BgL_za2rpza2_2003))
																							{	/* Lalr/lalr.scm 787 */
																								BgL_test2984z00_6055 =
																									BGl_2zc3zc3zz__r4_numbers_6_5z00
																									(BgL_za2rpza2_2003,
																									BGl_nvarsz00zz__lalr_globalz00);
																							}
																						else
																							{	/* Lalr/lalr.scm 787 */
																								BgL_test2984z00_6055 =
																									((bool_t) 0);
																							}
																						if (BgL_test2984z00_6055)
																							{	/* Lalr/lalr.scm 788 */
																								bool_t BgL_arg1852z00_2006;
																								obj_t BgL_arg1853z00_2007;
																								long BgL_arg1855z00_2008;
																								obj_t BgL_arg1856z00_2009;

																								{	/* Lalr/lalr.scm 788 */
																									bool_t BgL_test2986z00_6060;

																									{	/* Lalr/lalr.scm 788 */
																										obj_t BgL_vectorz00_3999;
																										long BgL_kz00_4000;

																										BgL_vectorz00_3999 =
																											BGl_nullablez00zz__lalr_globalz00;
																										BgL_kz00_4000 =
																											(long)
																											CINT(BgL_za2rpza2_2003);
																										BgL_test2986z00_6060 =
																											CBOOL(VECTOR_REF
																											(BgL_vectorz00_3999,
																												BgL_kz00_4000));
																									}
																									if (BgL_test2986z00_6060)
																										{	/* Lalr/lalr.scm 788 */
																											BgL_arg1852z00_2006 =
																												((bool_t) 0);
																										}
																									else
																										{	/* Lalr/lalr.scm 788 */
																											BgL_arg1852z00_2006 =
																												((bool_t) 1);
																										}
																								}
																								BgL_arg1853z00_2007 =
																									CDR(
																									((obj_t) BgL_stpz00_1998));
																								BgL_arg1855z00_2008 =
																									(BgL_rp2z00_1999 -
																									((long) 1));
																								{	/* Lalr/lalr.scm 791 */
																									long BgL_arg1858z00_2011;

																									{	/* Lalr/lalr.scm 791 */
																										obj_t BgL_arg1859z00_2012;

																										BgL_arg1859z00_2012 =
																											CAR(
																											((obj_t)
																												BgL_stpz00_1998));
																										BgL_arg1858z00_2011 =
																											BGl_mapzd2gotozd2zz__lalr_expandz00
																											(BgL_arg1859z00_2012,
																											BgL_za2rpza2_2003);
																									}
																									BgL_arg1856z00_2009 =
																										MAKE_YOUNG_PAIR(BINT
																										(BgL_arg1858z00_2011),
																										BgL_edgpz00_2000);
																								}
																								{
																									obj_t BgL_edgpz00_6075;
																									long BgL_rp2z00_6074;
																									obj_t BgL_stpz00_6073;
																									bool_t BgL_donez00_6072;

																									BgL_donez00_6072 =
																										BgL_arg1852z00_2006;
																									BgL_stpz00_6073 =
																										BgL_arg1853z00_2007;
																									BgL_rp2z00_6074 =
																										BgL_arg1855z00_2008;
																									BgL_edgpz00_6075 =
																										BgL_arg1856z00_2009;
																									BgL_edgpz00_2000 =
																										BgL_edgpz00_6075;
																									BgL_rp2z00_1999 =
																										BgL_rp2z00_6074;
																									BgL_stpz00_1998 =
																										BgL_stpz00_6073;
																									BgL_donez00_1997 =
																										BgL_donez00_6072;
																									goto
																										BgL_zc3z04anonymousza31848ze3z87_2001;
																								}
																							}
																						else
																							{
																								bool_t BgL_donez00_6076;

																								BgL_donez00_6076 = ((bool_t) 1);
																								BgL_donez00_1997 =
																									BgL_donez00_6076;
																								goto
																									BgL_zc3z04anonymousza31848ze3z87_2001;
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
											{	/* Lalr/lalr.scm 767 */
												VECTOR_SET(BGl_includesz00zz__lalr_globalz00,
													BgL_iz00_1968, BgL_edgesz00_1977);
											}
									}
								}
							}
							{
								long BgL_iz00_6078;

								BgL_iz00_6078 = (BgL_iz00_1968 + ((long) 1));
								BgL_iz00_1968 = BgL_iz00_6078;
								goto BgL_zc3z04anonymousza31839ze3z87_1969;
							}
						}
				}
				return (BGl_includesz00zz__lalr_globalz00 =
					BGl_transposez00zz__lalr_expandz00(BGl_includesz00zz__lalr_globalz00,
						BGl_ngotosz00zz__lalr_globalz00), BUNSPEC);
			}
		}

	}



/* compute-lookaheads */
	bool_t BGl_computezd2lookaheadszd2zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 800 */
			{	/* Lalr/lalr.scm 801 */
				obj_t BgL_nz00_2038;

				BgL_nz00_2038 =
					VECTOR_REF(BGl_lookaheadsz00zz__lalr_globalz00,
					(long) CINT(BGl_nstatesz00zz__lalr_globalz00));
				{
					long BgL_iz00_2040;

					BgL_iz00_2040 = ((long) 0);
				BgL_zc3z04anonymousza31872ze3z87_2041:
					if ((BgL_iz00_2040 < (long) CINT(BgL_nz00_2038)))
						{	/* Lalr/lalr.scm 804 */
							obj_t BgL_g1167z00_2043;

							BgL_g1167z00_2043 =
								VECTOR_REF(BGl_lookbackz00zz__lalr_globalz00, BgL_iz00_2040);
							{
								obj_t BgL_spz00_2045;

								BgL_spz00_2045 = BgL_g1167z00_2043;
							BgL_zc3z04anonymousza31874ze3z87_2046:
								if (PAIRP(BgL_spz00_2045))
									{	/* Lalr/lalr.scm 806 */
										obj_t BgL_lazd2izd2_2048;
										obj_t BgL_fzd2jzd2_2049;

										BgL_lazd2izd2_2048 =
											VECTOR_REF(BGl_LAz00zz__lalr_globalz00, BgL_iz00_2040);
										{	/* Lalr/lalr.scm 807 */
											obj_t BgL_arg1885z00_2061;

											BgL_arg1885z00_2061 = CAR(BgL_spz00_2045);
											BgL_fzd2jzd2_2049 =
												VECTOR_REF(BGl_Fz00zz__lalr_globalz00,
												(long) CINT(BgL_arg1885z00_2061));
										}
										{
											long BgL_iz00_2051;

											BgL_iz00_2051 = ((long) 0);
										BgL_zc3z04anonymousza31876ze3z87_2052:
											if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_iz00_2051),
													BGl_tokenzd2setzd2siza7eza7zz__lalr_globalz00))
												{	/* Lalr/lalr.scm 808 */
													((bool_t) 0);
												}
											else
												{	/* Lalr/lalr.scm 808 */
													{	/* Lalr/lalr.scm 808 */
														long BgL_arg1878z00_2054;

														{	/* Lalr/lalr.scm 808 */
															obj_t BgL_arg1879z00_2055;
															obj_t BgL_arg1881z00_2056;

															BgL_arg1879z00_2055 =
																VECTOR_REF(
																((obj_t) BgL_lazd2izd2_2048), BgL_iz00_2051);
															BgL_arg1881z00_2056 =
																VECTOR_REF(
																((obj_t) BgL_fzd2jzd2_2049), BgL_iz00_2051);
															BgL_arg1878z00_2054 =
																(
																(long) CINT(BgL_arg1879z00_2055) |
																(long) CINT(BgL_arg1881z00_2056));
														}
														VECTOR_SET(
															((obj_t) BgL_lazd2izd2_2048), BgL_iz00_2051,
															BINT(BgL_arg1878z00_2054));
													}
													{
														long BgL_iz00_6106;

														BgL_iz00_6106 = (BgL_iz00_2051 + ((long) 1));
														BgL_iz00_2051 = BgL_iz00_6106;
														goto BgL_zc3z04anonymousza31876ze3z87_2052;
													}
												}
										}
										{
											obj_t BgL_spz00_6108;

											BgL_spz00_6108 = CDR(BgL_spz00_2045);
											BgL_spz00_2045 = BgL_spz00_6108;
											goto BgL_zc3z04anonymousza31874ze3z87_2046;
										}
									}
								else
									{
										long BgL_iz00_6110;

										BgL_iz00_6110 = (BgL_iz00_2040 + ((long) 1));
										BgL_iz00_2040 = BgL_iz00_6110;
										goto BgL_zc3z04anonymousza31872ze3z87_2041;
									}
							}
						}
					else
						{	/* Lalr/lalr.scm 803 */
							return ((bool_t) 0);
						}
				}
			}
		}

	}



/* digraph */
	bool_t BGl_digraphz00zz__lalr_expandz00(obj_t BgL_relationz00_22)
	{
		{	/* Lalr/lalr.scm 814 */
			{	/* Lalr/lalr.scm 814 */
				struct bgl_cell BgL_box2990_4740z00;
				obj_t BgL_topz00_4740;

				BgL_topz00_4740 =
					MAKE_CELL_STACK(BINT(((long) 0)), BgL_box2990_4740z00);
				{	/* Lalr/lalr.scm 815 */
					long BgL_infinityz00_2066;

					BgL_infinityz00_2066 =
						((long) CINT(BGl_ngotosz00zz__lalr_globalz00) + ((long) 2));
					{	/* Lalr/lalr.scm 816 */
						obj_t BgL_indexz00_2067;

						BgL_indexz00_2067 =
							make_vector(
							((long) CINT(BGl_ngotosz00zz__lalr_globalz00) + ((long) 1)),
							BINT(((long) 0)));
						{	/* Lalr/lalr.scm 817 */
							obj_t BgL_verticesz00_2068;

							BgL_verticesz00_2068 =
								make_vector(
								((long) CINT(BGl_ngotosz00zz__lalr_globalz00) + ((long) 1)),
								BINT(((long) 0)));
							{
								long BgL_iz00_2072;

								BgL_iz00_2072 = ((long) 0);
							BgL_zc3z04anonymousza31887ze3z87_2073:
								if (
									(BgL_iz00_2072 <
										(long) CINT(BGl_ngotosz00zz__lalr_globalz00)))
									{	/* Lalr/lalr.scm 853 */
										{	/* Lalr/lalr.scm 855 */
											bool_t BgL_test2992z00_6126;

											{	/* Lalr/lalr.scm 855 */
												bool_t BgL_test2993z00_6127;

												{	/* Lalr/lalr.scm 855 */
													long BgL_arg1896z00_2082;

													BgL_arg1896z00_2082 =
														(long) CINT(VECTOR_REF(BgL_indexz00_2067,
															BgL_iz00_2072));
													BgL_test2993z00_6127 =
														BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(((long) 0)),
														BINT(BgL_arg1896z00_2082));
												}
												if (BgL_test2993z00_6127)
													{	/* Lalr/lalr.scm 856 */
														obj_t BgL_arg1895z00_2081;

														BgL_arg1895z00_2081 =
															VECTOR_REF(
															((obj_t) BgL_relationz00_22), BgL_iz00_2072);
														BgL_test2992z00_6126 = PAIRP(BgL_arg1895z00_2081);
													}
												else
													{	/* Lalr/lalr.scm 855 */
														BgL_test2992z00_6126 = ((bool_t) 0);
													}
											}
											if (BgL_test2992z00_6126)
												{	/* Lalr/lalr.scm 855 */
													BGl_traverseze70ze7zz__lalr_expandz00
														(BgL_infinityz00_2066, BgL_relationz00_22,
														BgL_indexz00_2067, BgL_verticesz00_2068,
														BgL_topz00_4740, BINT(BgL_iz00_2072));
												}
											else
												{	/* Lalr/lalr.scm 855 */
													((bool_t) 0);
												}
										}
										{
											long BgL_iz00_6138;

											BgL_iz00_6138 = (BgL_iz00_2072 + ((long) 1));
											BgL_iz00_2072 = BgL_iz00_6138;
											goto BgL_zc3z04anonymousza31887ze3z87_2073;
										}
									}
								else
									{	/* Lalr/lalr.scm 853 */
										return ((bool_t) 0);
									}
							}
						}
					}
				}
			}
		}

	}



/* traverse~0 */
	bool_t BGl_traverseze70ze7zz__lalr_expandz00(long BgL_infinityz00_4737,
		obj_t BgL_rz00_4736, obj_t BgL_indexz00_4735, obj_t BgL_verticesz00_4734,
		obj_t BgL_topz00_4733, obj_t BgL_iz00_2085)
	{
		{	/* Lalr/lalr.scm 822 */
			{	/* Lalr/lalr.scm 822 */
				obj_t BgL_auxz00_4738;

				BgL_auxz00_4738 = ADDFX(BINT(((long) 1)), CELL_REF(BgL_topz00_4733));
				CELL_SET(BgL_topz00_4733, BgL_auxz00_4738);
			}
			{	/* Lalr/lalr.scm 823 */
				long BgL_kz00_4046;

				BgL_kz00_4046 = (long) CINT(CELL_REF(BgL_topz00_4733));
				VECTOR_SET(BgL_verticesz00_4734, BgL_kz00_4046, BgL_iz00_2085);
			}
			{	/* Lalr/lalr.scm 824 */
				long BgL_heightz00_2087;

				BgL_heightz00_2087 = (long) CINT(CELL_REF(BgL_topz00_4733));
				VECTOR_SET(BgL_indexz00_4735,
					(long) CINT(BgL_iz00_2085), BINT(BgL_heightz00_2087));
				{	/* Lalr/lalr.scm 826 */
					obj_t BgL_rpz00_2088;

					{	/* Lalr/lalr.scm 826 */
						long BgL_kz00_4050;

						BgL_kz00_4050 = (long) CINT(BgL_iz00_2085);
						BgL_rpz00_2088 = VECTOR_REF(((obj_t) BgL_rz00_4736), BgL_kz00_4050);
					}
					if (PAIRP(BgL_rpz00_2088))
						{
							obj_t BgL_rp2z00_2091;

							BgL_rp2z00_2091 = BgL_rpz00_2088;
						BgL_zc3z04anonymousza31900ze3z87_2092:
							if (PAIRP(BgL_rp2z00_2091))
								{	/* Lalr/lalr.scm 830 */
									obj_t BgL_jz00_2094;

									BgL_jz00_2094 = CAR(BgL_rp2z00_2091);
									{	/* Lalr/lalr.scm 831 */
										bool_t BgL_test2996z00_6156;

										{	/* Lalr/lalr.scm 831 */
											long BgL_arg1904z00_2097;

											{	/* Lalr/lalr.scm 831 */
												long BgL_kz00_4055;

												BgL_kz00_4055 = (long) CINT(BgL_jz00_2094);
												BgL_arg1904z00_2097 =
													(long) CINT(VECTOR_REF(BgL_indexz00_4735,
														BgL_kz00_4055));
											}
											BgL_test2996z00_6156 =
												BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(((long) 0)),
												BINT(BgL_arg1904z00_2097));
										}
										if (BgL_test2996z00_6156)
											{	/* Lalr/lalr.scm 831 */
												BGl_traverseze70ze7zz__lalr_expandz00
													(BgL_infinityz00_4737, BgL_rz00_4736,
													BgL_indexz00_4735, BgL_verticesz00_4734,
													BgL_topz00_4733, BgL_jz00_2094);
											}
										else
											{	/* Lalr/lalr.scm 831 */
												((bool_t) 0);
											}
									}
									{	/* Lalr/lalr.scm 833 */
										bool_t BgL_test2997z00_6164;

										{	/* Lalr/lalr.scm 833 */
											long BgL_arg1909z00_2102;
											long BgL_arg1910z00_2103;

											{	/* Lalr/lalr.scm 833 */
												long BgL_kz00_4057;

												BgL_kz00_4057 = (long) CINT(BgL_iz00_2085);
												BgL_arg1909z00_2102 =
													(long) CINT(VECTOR_REF(BgL_indexz00_4735,
														BgL_kz00_4057));
											}
											{	/* Lalr/lalr.scm 834 */
												long BgL_kz00_4059;

												BgL_kz00_4059 = (long) CINT(BgL_jz00_2094);
												BgL_arg1910z00_2103 =
													(long) CINT(VECTOR_REF(BgL_indexz00_4735,
														BgL_kz00_4059));
											}
											BgL_test2997z00_6164 =
												(BgL_arg1909z00_2102 > BgL_arg1910z00_2103);
										}
										if (BgL_test2997z00_6164)
											{	/* Lalr/lalr.scm 835 */
												long BgL_arg1908z00_2101;

												{	/* Lalr/lalr.scm 835 */
													long BgL_kz00_4064;

													BgL_kz00_4064 = (long) CINT(BgL_jz00_2094);
													BgL_arg1908z00_2101 =
														(long) CINT(VECTOR_REF(BgL_indexz00_4735,
															BgL_kz00_4064));
												}
												VECTOR_SET(BgL_indexz00_4735,
													(long) CINT(BgL_iz00_2085),
													BINT(BgL_arg1908z00_2101));
											}
										else
											{	/* Lalr/lalr.scm 833 */
												BFALSE;
											}
									}
									{	/* Lalr/lalr.scm 836 */
										obj_t BgL_fzd2izd2_2104;
										obj_t BgL_fzd2jzd2_2105;

										BgL_fzd2izd2_2104 =
											VECTOR_REF(BGl_Fz00zz__lalr_globalz00,
											(long) CINT(BgL_iz00_2085));
										BgL_fzd2jzd2_2105 =
											VECTOR_REF(BGl_Fz00zz__lalr_globalz00,
											(long) CINT(BgL_jz00_2094));
										{
											long BgL_iz00_2107;

											BgL_iz00_2107 = ((long) 0);
										BgL_zc3z04anonymousza31911ze3z87_2108:
											if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_iz00_2107),
													BGl_tokenzd2setzd2siza7eza7zz__lalr_globalz00))
												{	/* Lalr/lalr.scm 838 */
													((bool_t) 0);
												}
											else
												{	/* Lalr/lalr.scm 838 */
													{	/* Lalr/lalr.scm 838 */
														long BgL_arg1913z00_2110;

														{	/* Lalr/lalr.scm 838 */
															obj_t BgL_arg1914z00_2111;
															obj_t BgL_arg1915z00_2112;

															BgL_arg1914z00_2111 =
																VECTOR_REF(
																((obj_t) BgL_fzd2izd2_2104), BgL_iz00_2107);
															BgL_arg1915z00_2112 =
																VECTOR_REF(
																((obj_t) BgL_fzd2jzd2_2105), BgL_iz00_2107);
															BgL_arg1913z00_2110 =
																(
																(long) CINT(BgL_arg1914z00_2111) |
																(long) CINT(BgL_arg1915z00_2112));
														}
														VECTOR_SET(
															((obj_t) BgL_fzd2izd2_2104), BgL_iz00_2107,
															BINT(BgL_arg1913z00_2110));
													}
													{
														long BgL_iz00_6195;

														BgL_iz00_6195 = (BgL_iz00_2107 + ((long) 1));
														BgL_iz00_2107 = BgL_iz00_6195;
														goto BgL_zc3z04anonymousza31911ze3z87_2108;
													}
												}
										}
									}
									{
										obj_t BgL_rp2z00_6197;

										BgL_rp2z00_6197 = CDR(BgL_rp2z00_2091);
										BgL_rp2z00_2091 = BgL_rp2z00_6197;
										goto BgL_zc3z04anonymousza31900ze3z87_2092;
									}
								}
							else
								{	/* Lalr/lalr.scm 829 */
									((bool_t) 0);
								}
						}
					else
						{	/* Lalr/lalr.scm 827 */
							((bool_t) 0);
						}
					{	/* Lalr/lalr.scm 840 */
						bool_t BgL_test2999z00_6199;

						{	/* Lalr/lalr.scm 840 */
							long BgL_arg1933z00_2138;

							{	/* Lalr/lalr.scm 840 */
								long BgL_kz00_4085;

								BgL_kz00_4085 = (long) CINT(BgL_iz00_2085);
								BgL_arg1933z00_2138 =
									(long) CINT(VECTOR_REF(BgL_indexz00_4735, BgL_kz00_4085));
							}
							BgL_test2999z00_6199 =
								BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_arg1933z00_2138),
								BINT(BgL_heightz00_2087));
						}
						if (BgL_test2999z00_6199)
							{

							BgL_zc3z04anonymousza31921ze3z87_2121:
								{	/* Lalr/lalr.scm 842 */
									obj_t BgL_jz00_2122;

									{	/* Lalr/lalr.scm 842 */
										long BgL_kz00_4087;

										BgL_kz00_4087 = (long) CINT(CELL_REF(BgL_topz00_4733));
										BgL_jz00_2122 =
											VECTOR_REF(BgL_verticesz00_4734, BgL_kz00_4087);
									}
									{	/* Lalr/lalr.scm 843 */
										obj_t BgL_auxz00_4739;

										BgL_auxz00_4739 =
											SUBFX(CELL_REF(BgL_topz00_4733), BINT(((long) 1)));
										CELL_SET(BgL_topz00_4733, BgL_auxz00_4739);
									}
									VECTOR_SET(BgL_indexz00_4735,
										(long) CINT(BgL_jz00_2122), BINT(BgL_infinityz00_4737));
									if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_iz00_2085,
											BgL_jz00_2122))
										{	/* Lalr/lalr.scm 845 */
											return ((bool_t) 0);
										}
									else
										{	/* Lalr/lalr.scm 845 */
											{
												long BgL_iz00_2125;

												BgL_iz00_2125 = ((long) 0);
											BgL_zc3z04anonymousza31923ze3z87_2126:
												if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT
														(BgL_iz00_2125),
														BGl_tokenzd2setzd2siza7eza7zz__lalr_globalz00))
													{	/* Lalr/lalr.scm 847 */
														((bool_t) 0);
													}
												else
													{	/* Lalr/lalr.scm 847 */
														{	/* Lalr/lalr.scm 847 */
															obj_t BgL_arg1925z00_2128;
															long BgL_arg1926z00_2129;

															BgL_arg1925z00_2128 =
																VECTOR_REF(BGl_Fz00zz__lalr_globalz00,
																BgL_iz00_2125);
															{	/* Lalr/lalr.scm 847 */
																obj_t BgL_arg1927z00_2130;
																obj_t BgL_arg1928z00_2131;

																{	/* Lalr/lalr.scm 847 */
																	obj_t BgL_arg1929z00_2132;

																	BgL_arg1929z00_2132 =
																		VECTOR_REF(BGl_Fz00zz__lalr_globalz00,
																		BgL_iz00_2125);
																	BgL_arg1927z00_2130 =
																		VECTOR_REF(((obj_t) BgL_arg1929z00_2132),
																		BgL_iz00_2125);
																}
																{	/* Lalr/lalr.scm 848 */
																	obj_t BgL_arg1930z00_2133;

																	BgL_arg1930z00_2133 =
																		VECTOR_REF(BGl_Fz00zz__lalr_globalz00,
																		(long) CINT(BgL_jz00_2122));
																	BgL_arg1928z00_2131 =
																		VECTOR_REF(
																		((obj_t) BgL_arg1930z00_2133),
																		BgL_iz00_2125);
																}
																BgL_arg1926z00_2129 =
																	(
																	(long) CINT(BgL_arg1927z00_2130) |
																	(long) CINT(BgL_arg1928z00_2131));
															}
															VECTOR_SET(
																((obj_t) BgL_arg1925z00_2128), BgL_iz00_2125,
																BINT(BgL_arg1926z00_2129));
														}
														{
															long BgL_iz00_6232;

															BgL_iz00_6232 = (BgL_iz00_2125 + ((long) 1));
															BgL_iz00_2125 = BgL_iz00_6232;
															goto BgL_zc3z04anonymousza31923ze3z87_2126;
														}
													}
											}
											goto BgL_zc3z04anonymousza31921ze3z87_2121;
										}
								}
							}
						else
							{	/* Lalr/lalr.scm 840 */
								return ((bool_t) 0);
							}
					}
				}
			}
		}

	}



/* build-rule */
	obj_t BGl_buildzd2rulezd2zz__lalr_expandz00(long BgL_nz00_23)
	{
		{	/* Lalr/lalr.scm 863 */
			{	/* Lalr/lalr.scm 865 */
				obj_t BgL_arg1936z00_2142;
				obj_t BgL_arg1937z00_2143;

				{	/* Lalr/lalr.scm 865 */
					obj_t BgL_arg1938z00_2144;

					BgL_arg1938z00_2144 =
						VECTOR_REF(BGl_rlhsz00zz__lalr_globalz00, BgL_nz00_23);
					BgL_arg1936z00_2142 =
						VECTOR_REF(BGl_za2symvza2z00zz__lalr_rewritez00,
						(long) CINT(BgL_arg1938z00_2144));
				}
				{	/* Lalr/lalr.scm 868 */
					obj_t BgL_arg1939z00_2145;

					BgL_arg1939z00_2145 =
						BGl_loopze70ze7zz__lalr_expandz00(VECTOR_REF
						(BGl_rrhsz00zz__lalr_globalz00, BgL_nz00_23));
					BgL_arg1937z00_2143 =
						MAKE_YOUNG_PAIR(BGl_symbol2802z00zz__lalr_expandz00,
						BgL_arg1939z00_2145);
				}
				return MAKE_YOUNG_PAIR(BgL_arg1936z00_2142, BgL_arg1937z00_2143);
			}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zz__lalr_expandz00(obj_t BgL_posz00_2148)
	{
		{	/* Lalr/lalr.scm 868 */
			{	/* Lalr/lalr.scm 869 */
				obj_t BgL_xz00_2150;

				BgL_xz00_2150 =
					VECTOR_REF(BGl_ritemz00zz__lalr_globalz00,
					(long) CINT(BgL_posz00_2148));
				if (((long) CINT(BgL_xz00_2150) < ((long) 0)))
					{	/* Lalr/lalr.scm 870 */
						return BNIL;
					}
				else
					{	/* Lalr/lalr.scm 872 */
						obj_t BgL_arg1942z00_2152;
						obj_t BgL_arg1943z00_2153;

						BgL_arg1942z00_2152 =
							VECTOR_REF(BGl_za2symvza2z00zz__lalr_rewritez00,
							(long) CINT(BgL_xz00_2150));
						{	/* Lalr/lalr.scm 873 */
							long BgL_arg1944z00_2154;

							BgL_arg1944z00_2154 = ((long) CINT(BgL_posz00_2148) + ((long) 1));
							BgL_arg1943z00_2153 =
								BGl_loopze70ze7zz__lalr_expandz00(BINT(BgL_arg1944z00_2154));
						}
						return MAKE_YOUNG_PAIR(BgL_arg1942z00_2152, BgL_arg1943z00_2153);
					}
			}
		}

	}



/* build-tables */
	obj_t BGl_buildzd2tableszd2zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 880 */
			{
				long BgL_statez00_2303;
				obj_t BgL_actionz00_2304;

				BGl_actionzd2tablezd2zz__lalr_globalz00 =
					make_vector((long) CINT(BGl_nstatesz00zz__lalr_globalz00), BNIL);
				{
					long BgL_iz00_2163;

					BgL_iz00_2163 = ((long) 0);
				BgL_zc3z04anonymousza31949ze3z87_2164:
					if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_iz00_2163),
							BGl_nstatesz00zz__lalr_globalz00))
						{	/* Lalr/lalr.scm 956 */
							((bool_t) 0);
						}
					else
						{	/* Lalr/lalr.scm 956 */
							{	/* Lalr/lalr.scm 958 */
								obj_t BgL_redz00_2166;

								BgL_redz00_2166 =
									VECTOR_REF(BGl_reductionzd2tablezd2zz__lalr_globalz00,
									BgL_iz00_2163);
								{	/* Lalr/lalr.scm 959 */
									bool_t BgL_test3004z00_6259;

									if (CBOOL(BgL_redz00_2166))
										{	/* Lalr/lalr.scm 959 */
											obj_t BgL_arg1981z00_2214;

											BgL_arg1981z00_2214 =
												VECTOR_REF(((obj_t) BgL_redz00_2166), ((long) 1));
											BgL_test3004z00_6259 =
												((long) CINT(BgL_arg1981z00_2214) >= ((long) 1));
										}
									else
										{	/* Lalr/lalr.scm 959 */
											BgL_test3004z00_6259 = ((bool_t) 0);
										}
									if (BgL_test3004z00_6259)
										{	/* Lalr/lalr.scm 960 */
											bool_t BgL_test3006z00_6266;

											{	/* Lalr/lalr.scm 960 */
												bool_t BgL_test3007z00_6267;

												{	/* Lalr/lalr.scm 960 */
													obj_t BgL_arg1980z00_2213;

													BgL_arg1980z00_2213 =
														VECTOR_REF(((obj_t) BgL_redz00_2166), ((long) 1));
													BgL_test3007z00_6267 =
														BGl_2zd3zd3zz__r4_numbers_6_5z00
														(BgL_arg1980z00_2213, BINT(((long) 1)));
												}
												if (BgL_test3007z00_6267)
													{	/* Lalr/lalr.scm 960 */
														obj_t BgL_vectorz00_4256;

														BgL_vectorz00_4256 =
															BGl_consistentz00zz__lalr_globalz00;
														BgL_test3006z00_6266 =
															CBOOL(VECTOR_REF(BgL_vectorz00_4256,
																BgL_iz00_2163));
													}
												else
													{	/* Lalr/lalr.scm 960 */
														BgL_test3006z00_6266 = ((bool_t) 0);
													}
											}
											if (BgL_test3006z00_6266)
												{	/* Lalr/lalr.scm 965 */
													obj_t BgL_arg1957z00_2173;

													{	/* Lalr/lalr.scm 965 */
														obj_t BgL_arg1958z00_2174;

														{	/* Lalr/lalr.scm 965 */
															obj_t BgL_arg1960z00_2176;

															BgL_arg1960z00_2176 =
																VECTOR_REF(
																((obj_t) BgL_redz00_2166), ((long) 2));
															BgL_arg1958z00_2174 =
																CAR(((obj_t) BgL_arg1960z00_2176));
														}
														BgL_arg1957z00_2173 =
															BGl_zd2zd2zz__r4_numbers_6_5z00
															(BgL_arg1958z00_2174, BNIL);
													}
													BgL_statez00_2303 = BgL_iz00_2163;
													BgL_actionz00_2304 = BgL_arg1957z00_2173;
													{
														long BgL_iz00_4243;

														BgL_iz00_4243 = ((long) 1);
													BgL_dozd2loopzd2zd21172zd2_4242:
														if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT
																(BgL_iz00_4243),
																BGl_ntermsz00zz__lalr_globalz00))
															{	/* Lalr/lalr.scm 950 */
																((bool_t) 0);
															}
														else
															{	/* Lalr/lalr.scm 950 */
																BGl_addzd2actionze70z35zz__lalr_expandz00(BINT
																	(BgL_statez00_2303), BgL_iz00_4243,
																	BgL_actionz00_2304);
																{
																	long BgL_iz00_6284;

																	BgL_iz00_6284 = (BgL_iz00_4243 + ((long) 1));
																	BgL_iz00_4243 = BgL_iz00_6284;
																	goto BgL_dozd2loopzd2zd21172zd2_4242;
																}
															}
													}
												}
											else
												{	/* Lalr/lalr.scm 966 */
													obj_t BgL_kz00_2177;

													BgL_kz00_2177 =
														VECTOR_REF(BGl_lookaheadsz00zz__lalr_globalz00,
														(BgL_iz00_2163 + ((long) 1)));
													{	/* Lalr/lalr.scm 967 */
														obj_t BgL_g1174z00_2178;

														BgL_g1174z00_2178 =
															VECTOR_REF(BGl_lookaheadsz00zz__lalr_globalz00,
															BgL_iz00_2163);
														{
															obj_t BgL_jz00_2180;

															BgL_jz00_2180 = BgL_g1174z00_2178;
														BgL_zc3z04anonymousza31961ze3z87_2181:
															if (
																((long) CINT(BgL_jz00_2180) <
																	(long) CINT(BgL_kz00_2177)))
																{	/* Lalr/lalr.scm 969 */
																	long BgL_rulez00_2183;
																	obj_t BgL_lavz00_2184;

																	{	/* Lalr/lalr.scm 969 */
																		obj_t BgL_arg1977z00_2209;

																		BgL_arg1977z00_2209 =
																			VECTOR_REF
																			(BGl_LArulenoz00zz__lalr_globalz00,
																			(long) CINT(BgL_jz00_2180));
																		BgL_rulez00_2183 =
																			NEG((long) CINT(BgL_arg1977z00_2209));
																	}
																	BgL_lavz00_2184 =
																		VECTOR_REF(BGl_LAz00zz__lalr_globalz00,
																		(long) CINT(BgL_jz00_2180));
																	{	/* Lalr/lalr.scm 971 */
																		obj_t BgL_g1175z00_2185;

																		BgL_g1175z00_2185 =
																			VECTOR_REF(
																			((obj_t) BgL_lavz00_2184), ((long) 0));
																		{
																			long BgL_tokenz00_2187;
																			obj_t BgL_xz00_2188;
																			long BgL_yz00_2189;
																			long BgL_za7za7_2190;

																			BgL_tokenz00_2187 = ((long) 0);
																			BgL_xz00_2188 = BgL_g1175z00_2185;
																			BgL_yz00_2189 = ((long) 1);
																			BgL_za7za7_2190 = ((long) 0);
																		BgL_zc3z04anonymousza31963ze3z87_2191:
																			if (
																				(BgL_tokenz00_2187 <
																					(long)
																					CINT
																					(BGl_ntermsz00zz__lalr_globalz00)))
																				{	/* Lalr/lalr.scm 972 */
																					{	/* Lalr/lalr.scm 974 */
																						long BgL_inzd2lazd2setzf3zf3_2193;

																						BgL_inzd2lazd2setzf3zf3_2193 =
																							BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00
																							((long) CINT(BgL_xz00_2188),
																							((long) 2));
																						if ((BgL_inzd2lazd2setzf3zf3_2193 ==
																								((long) 1)))
																							{	/* Lalr/lalr.scm 975 */
																								BGl_addzd2actionze70z35zz__lalr_expandz00
																									(BINT(BgL_iz00_2163),
																									BgL_tokenz00_2187,
																									BINT(BgL_rulez00_2183));
																							}
																						else
																							{	/* Lalr/lalr.scm 975 */
																								BFALSE;
																							}
																					}
																					if ((BgL_yz00_2189 == ((long) 28)))
																						{	/* Lalr/lalr.scm 978 */
																							long BgL_arg1969z00_2199;
																							obj_t BgL_arg1970z00_2200;
																							long BgL_arg1971z00_2201;

																							BgL_arg1969z00_2199 =
																								(BgL_tokenz00_2187 +
																								((long) 1));
																							{	/* Lalr/lalr.scm 979 */
																								long BgL_arg1972z00_2202;

																								BgL_arg1972z00_2202 =
																									(BgL_za7za7_2190 +
																									((long) 1));
																								BgL_arg1970z00_2200 =
																									VECTOR_REF(((obj_t)
																										BgL_lavz00_2184),
																									BgL_arg1972z00_2202);
																							}
																							BgL_arg1971z00_2201 =
																								(BgL_za7za7_2190 + ((long) 1));
																							{
																								long BgL_za7za7_6321;
																								long BgL_yz00_6320;
																								obj_t BgL_xz00_6319;
																								long BgL_tokenz00_6318;

																								BgL_tokenz00_6318 =
																									BgL_arg1969z00_2199;
																								BgL_xz00_6319 =
																									BgL_arg1970z00_2200;
																								BgL_yz00_6320 = ((long) 1);
																								BgL_za7za7_6321 =
																									BgL_arg1971z00_2201;
																								BgL_za7za7_2190 =
																									BgL_za7za7_6321;
																								BgL_yz00_2189 = BgL_yz00_6320;
																								BgL_xz00_2188 = BgL_xz00_6319;
																								BgL_tokenz00_2187 =
																									BgL_tokenz00_6318;
																								goto
																									BgL_zc3z04anonymousza31963ze3z87_2191;
																							}
																						}
																					else
																						{	/* Lalr/lalr.scm 982 */
																							long BgL_arg1973z00_2203;
																							long BgL_arg1974z00_2204;
																							long BgL_arg1975z00_2205;

																							BgL_arg1973z00_2203 =
																								(BgL_tokenz00_2187 +
																								((long) 1));
																							{	/* Lalr/lalr.scm 982 */
																								long BgL_res2694z00_4296;

																								{	/* Lalr/lalr.scm 982 */
																									long BgL_tmpz00_6323;

																									BgL_tmpz00_6323 =
																										(long) CINT(BgL_xz00_2188);
																									BgL_res2694z00_4296 =
																										(BgL_tmpz00_6323 /
																										((long) 2));
																								}
																								BgL_arg1974z00_2204 =
																									BgL_res2694z00_4296;
																							}
																							BgL_arg1975z00_2205 =
																								(BgL_yz00_2189 + ((long) 1));
																							{
																								long BgL_yz00_6330;
																								obj_t BgL_xz00_6328;
																								long BgL_tokenz00_6327;

																								BgL_tokenz00_6327 =
																									BgL_arg1973z00_2203;
																								BgL_xz00_6328 =
																									BINT(BgL_arg1974z00_2204);
																								BgL_yz00_6330 =
																									BgL_arg1975z00_2205;
																								BgL_yz00_2189 = BgL_yz00_6330;
																								BgL_xz00_2188 = BgL_xz00_6328;
																								BgL_tokenz00_2187 =
																									BgL_tokenz00_6327;
																								goto
																									BgL_zc3z04anonymousza31963ze3z87_2191;
																							}
																						}
																				}
																			else
																				{	/* Lalr/lalr.scm 972 */
																					((bool_t) 0);
																				}
																		}
																	}
																	{	/* Lalr/lalr.scm 983 */
																		long BgL_arg1976z00_2208;

																		BgL_arg1976z00_2208 =
																			((long) CINT(BgL_jz00_2180) + ((long) 1));
																		{
																			obj_t BgL_jz00_6333;

																			BgL_jz00_6333 = BINT(BgL_arg1976z00_2208);
																			BgL_jz00_2180 = BgL_jz00_6333;
																			goto
																				BgL_zc3z04anonymousza31961ze3z87_2181;
																		}
																	}
																}
															else
																{	/* Lalr/lalr.scm 968 */
																	((bool_t) 0);
																}
														}
													}
												}
										}
									else
										{	/* Lalr/lalr.scm 959 */
											((bool_t) 0);
										}
								}
							}
							{	/* Lalr/lalr.scm 985 */
								obj_t BgL_shiftpz00_2215;

								BgL_shiftpz00_2215 =
									VECTOR_REF(BGl_shiftzd2tablezd2zz__lalr_globalz00,
									BgL_iz00_2163);
								if (CBOOL(BgL_shiftpz00_2215))
									{	/* Lalr/lalr.scm 987 */
										obj_t BgL_g1176z00_2216;

										BgL_g1176z00_2216 =
											VECTOR_REF(((obj_t) BgL_shiftpz00_2215), ((long) 2));
										{
											obj_t BgL_kz00_2218;

											BgL_kz00_2218 = BgL_g1176z00_2216;
										BgL_zc3z04anonymousza31982ze3z87_2219:
											if (PAIRP(BgL_kz00_2218))
												{	/* Lalr/lalr.scm 989 */
													obj_t BgL_statez00_2221;

													BgL_statez00_2221 = CAR(BgL_kz00_2218);
													{	/* Lalr/lalr.scm 989 */
														obj_t BgL_symbolz00_2222;

														BgL_symbolz00_2222 =
															VECTOR_REF
															(BGl_acceszd2symbolzd2zz__lalr_globalz00,
															(long) CINT(BgL_statez00_2221));
														{	/* Lalr/lalr.scm 990 */

															if (
																((long) CINT(BgL_symbolz00_2222) >=
																	(long) CINT(BGl_nvarsz00zz__lalr_globalz00)))
																{	/* Lalr/lalr.scm 991 */
																	BGl_addzd2actionze70z35zz__lalr_expandz00(BINT
																		(BgL_iz00_2163),
																		((long) CINT(BgL_symbolz00_2222) -
																			(long)
																			CINT(BGl_nvarsz00zz__lalr_globalz00)),
																		BgL_statez00_2221);
																}
															else
																{	/* Lalr/lalr.scm 991 */
																	BFALSE;
																}
															{
																obj_t BgL_kz00_6354;

																BgL_kz00_6354 = CDR(BgL_kz00_2218);
																BgL_kz00_2218 = BgL_kz00_6354;
																goto BgL_zc3z04anonymousza31982ze3z87_2219;
															}
														}
													}
												}
											else
												{	/* Lalr/lalr.scm 988 */
													((bool_t) 0);
												}
										}
									}
								else
									{	/* Lalr/lalr.scm 986 */
										((bool_t) 0);
									}
							}
							{
								long BgL_iz00_6356;

								BgL_iz00_6356 = (BgL_iz00_2163 + ((long) 1));
								BgL_iz00_2163 = BgL_iz00_6356;
								goto BgL_zc3z04anonymousza31949ze3z87_2164;
							}
						}
				}
				return
					BGl_addzd2actionze70z35zz__lalr_expandz00
					(BGl_finalzd2statezd2zz__lalr_globalz00, ((long) 0),
					BGl_symbol2804z00zz__lalr_expandz00);
		}}

	}



/* add-action~0 */
	obj_t BGl_addzd2actionze70z35zz__lalr_expandz00(obj_t BgL_stz00_2229,
		long BgL_symz00_2230, obj_t BgL_actz00_2231)
	{
		{	/* Lalr/lalr.scm 947 */
			{	/* Lalr/lalr.scm 883 */
				obj_t BgL_xz00_2233;

				BgL_xz00_2233 =
					VECTOR_REF(BGl_actionzd2tablezd2zz__lalr_globalz00,
					(long) CINT(BgL_stz00_2229));
				{	/* Lalr/lalr.scm 883 */
					obj_t BgL_yz00_2234;

					BgL_yz00_2234 =
						BGl_assvz00zz__r4_pairs_and_lists_6_3z00(BINT(BgL_symz00_2230),
						BgL_xz00_2233);
					{	/* Lalr/lalr.scm 884 */

						if (CBOOL(BgL_yz00_2234))
							{	/* Lalr/lalr.scm 886 */
								obj_t BgL_curzd2preczd2_2235;
								obj_t BgL_newzd2preczd2_2236;

								{	/* Lalr/lalr.scm 886 */
									obj_t BgL_arg2050z00_2300;

									BgL_arg2050z00_2300 = CDR(((obj_t) BgL_yz00_2234));
									if (((long) CINT(BgL_arg2050z00_2300) <= ((long) 0)))
										{	/* Lalr/lalr.scm 876 */
											BgL_curzd2preczd2_2235 =
												VECTOR_REF(BGl_rprecz00zz__lalr_globalz00,
												NEG((long) CINT(BgL_arg2050z00_2300)));
										}
									else
										{	/* Lalr/lalr.scm 878 */
											obj_t BgL_arg1947z00_4154;

											BgL_arg1947z00_4154 =
												VECTOR_REF(BGl_za2symvza2z00zz__lalr_rewritez00,
												(BgL_symz00_2230 +
													(long) CINT(BGl_nvarsz00zz__lalr_globalz00)));
											BgL_curzd2preczd2_2235 =
												BGl_getpropz00zz__r4_symbols_6_4z00(BgL_arg1947z00_4154,
												BGl_symbol2782z00zz__lalr_expandz00);
								}}
								if (((long) CINT(BgL_actz00_2231) <= ((long) 0)))
									{	/* Lalr/lalr.scm 876 */
										BgL_newzd2preczd2_2236 =
											VECTOR_REF(BGl_rprecz00zz__lalr_globalz00,
											NEG((long) CINT(BgL_actz00_2231)));
									}
								else
									{	/* Lalr/lalr.scm 878 */
										obj_t BgL_arg1947z00_4169;

										BgL_arg1947z00_4169 =
											VECTOR_REF(BGl_za2symvza2z00zz__lalr_rewritez00,
											(BgL_symz00_2230 +
												(long) CINT(BGl_nvarsz00zz__lalr_globalz00)));
										BgL_newzd2preczd2_2236 =
											BGl_getpropz00zz__r4_symbols_6_4z00(BgL_arg1947z00_4169,
											BGl_symbol2782z00zz__lalr_expandz00);
									}
								if (
									((long) CINT(BgL_actz00_2231) ==
										(long) CINT(CDR(((obj_t) BgL_yz00_2234)))))
									{	/* Lalr/lalr.scm 889 */
										return BTRUE;
									}
								else
									{	/* Lalr/lalr.scm 891 */
										bool_t BgL_test3020z00_6393;

										if (
											((long) CINT(CDR(((obj_t) BgL_yz00_2234))) <= ((long) 0)))
											{	/* Lalr/lalr.scm 891 */
												BgL_test3020z00_6393 =
													((long) CINT(BgL_actz00_2231) <= ((long) 0));
											}
										else
											{	/* Lalr/lalr.scm 891 */
												BgL_test3020z00_6393 = ((bool_t) 0);
											}
										if (BgL_test3020z00_6393)
											{	/* Lalr/lalr.scm 891 */
												{	/* Lalr/lalr.scm 895 */
													obj_t BgL_arg1995z00_2243;
													obj_t BgL_arg1996z00_2244;
													obj_t BgL_arg1997z00_2245;

													BgL_arg1995z00_2243 =
														BGl_buildzd2rulezd2zz__lalr_expandz00(NEG(
															(long) CINT(BgL_actz00_2231)));
													{	/* Lalr/lalr.scm 896 */
														long BgL_arg2010z00_2256;

														BgL_arg2010z00_2256 =
															NEG((long) CINT(CDR(((obj_t) BgL_yz00_2234))));
														BgL_arg1996z00_2244 =
															BGl_buildzd2rulezd2zz__lalr_expandz00
															(BgL_arg2010z00_2256);
													}
													BgL_arg1997z00_2245 =
														VECTOR_REF(BGl_za2symvza2z00zz__lalr_rewritez00,
														((long) CINT(BGl_nvarsz00zz__lalr_globalz00) +
															BgL_symz00_2230));
													{	/* Lalr/lalr.scm 893 */
														obj_t BgL_list1998z00_2246;

														{	/* Lalr/lalr.scm 893 */
															obj_t BgL_arg1999z00_2247;

															{	/* Lalr/lalr.scm 893 */
																obj_t BgL_arg2000z00_2248;

																{	/* Lalr/lalr.scm 893 */
																	obj_t BgL_arg2001z00_2249;

																	{	/* Lalr/lalr.scm 893 */
																		obj_t BgL_arg2002z00_2250;

																		{	/* Lalr/lalr.scm 893 */
																			obj_t BgL_arg2003z00_2251;

																			{	/* Lalr/lalr.scm 893 */
																				obj_t BgL_arg2004z00_2252;

																				{	/* Lalr/lalr.scm 893 */
																					obj_t BgL_arg2005z00_2253;

																					{	/* Lalr/lalr.scm 893 */
																						obj_t BgL_arg2007z00_2254;

																						BgL_arg2007z00_2254 =
																							MAKE_YOUNG_PAIR
																							(BGl_string2806z00zz__lalr_expandz00,
																							BNIL);
																						BgL_arg2005z00_2253 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1997z00_2245,
																							BgL_arg2007z00_2254);
																					}
																					BgL_arg2004z00_2252 =
																						MAKE_YOUNG_PAIR
																						(BGl_string2807z00zz__lalr_expandz00,
																						BgL_arg2005z00_2253);
																				}
																				BgL_arg2003z00_2251 =
																					MAKE_YOUNG_PAIR(BgL_arg1996z00_2244,
																					BgL_arg2004z00_2252);
																			}
																			BgL_arg2002z00_2250 =
																				MAKE_YOUNG_PAIR
																				(BGl_string2808z00zz__lalr_expandz00,
																				BgL_arg2003z00_2251);
																		}
																		BgL_arg2001z00_2249 =
																			MAKE_YOUNG_PAIR(BgL_arg1995z00_2243,
																			BgL_arg2002z00_2250);
																	}
																	BgL_arg2000z00_2248 =
																		MAKE_YOUNG_PAIR
																		(BGl_string2808z00zz__lalr_expandz00,
																		BgL_arg2001z00_2249);
																}
																BgL_arg1999z00_2247 =
																	MAKE_YOUNG_PAIR
																	(BGl_string2809z00zz__lalr_expandz00,
																	BgL_arg2000z00_2248);
															}
															BgL_list1998z00_2246 =
																MAKE_YOUNG_PAIR
																(BGl_string2778z00zz__lalr_expandz00,
																BgL_arg1999z00_2247);
														}
														BGl_warningz00zz__errorz00(BgL_list1998z00_2246);
												}}
												{	/* Lalr/lalr.scm 899 */
													obj_t BgL_arg2013z00_2259;

													BgL_arg2013z00_2259 =
														BGl_2maxz00zz__r4_numbers_6_5z00(CDR(
															((obj_t) BgL_yz00_2234)), BgL_actz00_2231);
													{	/* Lalr/lalr.scm 899 */
														obj_t BgL_tmpz00_6425;

														BgL_tmpz00_6425 = ((obj_t) BgL_yz00_2234);
														return
															SET_CDR(BgL_tmpz00_6425, BgL_arg2013z00_2259);
													}
												}
											}
										else
											{	/* Lalr/lalr.scm 900 */
												bool_t BgL_test3022z00_6428;

												if (CBOOL(BgL_curzd2preczd2_2235))
													{	/* Lalr/lalr.scm 900 */
														BgL_test3022z00_6428 = ((bool_t) 1);
													}
												else
													{	/* Lalr/lalr.scm 900 */
														BgL_test3022z00_6428 =
															CBOOL(BgL_newzd2preczd2_2236);
													}
												if (BgL_test3022z00_6428)
													{	/* Lalr/lalr.scm 900 */
														if (CBOOL(BgL_newzd2preczd2_2236))
															{	/* Lalr/lalr.scm 902 */
																if (CBOOL(BgL_curzd2preczd2_2235))
																	{	/* Lalr/lalr.scm 904 */
																		if (
																			((long) CINT(CDR(
																						((obj_t) BgL_curzd2preczd2_2235)))
																				==
																				(long) CINT(CDR(((obj_t)
																							BgL_newzd2preczd2_2236)))))
																			{	/* Lalr/lalr.scm 908 */
																				obj_t BgL_shiftz00_2266;
																				obj_t BgL_reducez00_2267;

																				BgL_shiftz00_2266 =
																					BGl_2maxz00zz__r4_numbers_6_5z00(CDR(
																						((obj_t) BgL_yz00_2234)),
																					BgL_actz00_2231);
																				BgL_reducez00_2267 =
																					BGl_2minz00zz__r4_numbers_6_5z00(CDR((
																							(obj_t) BgL_yz00_2234)),
																					BgL_actz00_2231);
																				{	/* Lalr/lalr.scm 910 */
																					obj_t BgL_casezd2valuezd2_2268;

																					BgL_casezd2valuezd2_2268 =
																						CAR(
																						((obj_t) BgL_curzd2preczd2_2235));
																					if (
																						(BgL_casezd2valuezd2_2268 ==
																							BGl_keyword2787z00zz__lalr_expandz00))
																						{	/* Lalr/lalr.scm 912 */
																							obj_t BgL_tmpz00_6454;

																							BgL_tmpz00_6454 =
																								((obj_t) BgL_yz00_2234);
																							return
																								SET_CDR(BgL_tmpz00_6454,
																								BgL_reducez00_2267);
																						}
																					else
																						{	/* Lalr/lalr.scm 910 */
																							if (
																								(BgL_casezd2valuezd2_2268 ==
																									BGl_keyword2789z00zz__lalr_expandz00))
																								{	/* Lalr/lalr.scm 914 */
																									obj_t BgL_tmpz00_6459;

																									BgL_tmpz00_6459 =
																										((obj_t) BgL_yz00_2234);
																									return
																										SET_CDR(BgL_tmpz00_6459,
																										BgL_shiftz00_2266);
																								}
																							else
																								{	/* Lalr/lalr.scm 910 */
																									if (
																										(BgL_casezd2valuezd2_2268 ==
																											BGl_keyword2791z00zz__lalr_expandz00))
																										{	/* Lalr/lalr.scm 918 */
																											obj_t BgL_objz00_4220;

																											BgL_objz00_4220 =
																												BGl_symbol2810z00zz__lalr_expandz00;
																											{	/* Lalr/lalr.scm 918 */
																												obj_t BgL_tmpz00_6464;

																												BgL_tmpz00_6464 =
																													((obj_t)
																													BgL_yz00_2234);
																												return
																													SET_CDR
																													(BgL_tmpz00_6464,
																													BgL_objz00_4220);
																											}
																										}
																									else
																										{	/* Lalr/lalr.scm 910 */
																											return BUNSPEC;
																										}
																								}
																						}
																				}
																			}
																		else
																			{	/* Lalr/lalr.scm 906 */
																				if (
																					((long) CINT(CDR(
																								((obj_t)
																									BgL_curzd2preczd2_2235))) >
																						(long) CINT(CDR(((obj_t)
																									BgL_newzd2preczd2_2236)))))
																					{	/* Lalr/lalr.scm 935 */
																						obj_t BgL_tmpz00_6475;

																						BgL_tmpz00_6475 =
																							((obj_t) BgL_yz00_2234);
																						return
																							SET_CDR(BgL_tmpz00_6475,
																							BgL_actz00_2231);
																					}
																				else
																					{	/* Lalr/lalr.scm 933 */
																						return BTRUE;
																					}
																			}
																	}
																else
																	{	/* Lalr/lalr.scm 905 */
																		obj_t BgL_tmpz00_6478;

																		BgL_tmpz00_6478 = ((obj_t) BgL_yz00_2234);
																		return
																			SET_CDR(BgL_tmpz00_6478, BgL_actz00_2231);
																	}
															}
														else
															{	/* Lalr/lalr.scm 902 */
																return BTRUE;
															}
													}
												else
													{	/* Lalr/lalr.scm 900 */
														{	/* Lalr/lalr.scm 943 */
															obj_t BgL_arg2033z00_2283;
															obj_t BgL_arg2034z00_2284;

															{	/* Lalr/lalr.scm 943 */
																long BgL_arg2045z00_2294;

																BgL_arg2045z00_2294 =
																	NEG(
																	(long) CINT(CDR(((obj_t) BgL_yz00_2234))));
																BgL_arg2033z00_2283 =
																	BGl_buildzd2rulezd2zz__lalr_expandz00
																	(BgL_arg2045z00_2294);
															}
															BgL_arg2034z00_2284 =
																VECTOR_REF(BGl_za2symvza2z00zz__lalr_rewritez00,
																((long) CINT(BGl_nvarsz00zz__lalr_globalz00) +
																	BgL_symz00_2230));
															{	/* Lalr/lalr.scm 940 */
																obj_t BgL_list2035z00_2285;

																{	/* Lalr/lalr.scm 940 */
																	obj_t BgL_arg2036z00_2286;

																	{	/* Lalr/lalr.scm 940 */
																		obj_t BgL_arg2037z00_2287;

																		{	/* Lalr/lalr.scm 940 */
																			obj_t BgL_arg2038z00_2288;

																			{	/* Lalr/lalr.scm 940 */
																				obj_t BgL_arg2039z00_2289;

																				{	/* Lalr/lalr.scm 940 */
																					obj_t BgL_arg2040z00_2290;

																					{	/* Lalr/lalr.scm 940 */
																						obj_t BgL_arg2041z00_2291;

																						{	/* Lalr/lalr.scm 940 */
																							obj_t BgL_arg2043z00_2292;

																							{	/* Lalr/lalr.scm 940 */
																								obj_t BgL_arg2044z00_2293;

																								BgL_arg2044z00_2293 =
																									MAKE_YOUNG_PAIR
																									(BGl_string2806z00zz__lalr_expandz00,
																									BNIL);
																								BgL_arg2043z00_2292 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2034z00_2284,
																									BgL_arg2044z00_2293);
																							}
																							BgL_arg2041z00_2291 =
																								MAKE_YOUNG_PAIR
																								(BGl_string2807z00zz__lalr_expandz00,
																								BgL_arg2043z00_2292);
																						}
																						BgL_arg2040z00_2290 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg2033z00_2283,
																							BgL_arg2041z00_2291);
																					}
																					BgL_arg2039z00_2289 =
																						MAKE_YOUNG_PAIR
																						(BGl_string2812z00zz__lalr_expandz00,
																						BgL_arg2040z00_2290);
																				}
																				BgL_arg2038z00_2288 =
																					MAKE_YOUNG_PAIR(BgL_actz00_2231,
																					BgL_arg2039z00_2289);
																			}
																			BgL_arg2037z00_2287 =
																				MAKE_YOUNG_PAIR
																				(BGl_string2813z00zz__lalr_expandz00,
																				BgL_arg2038z00_2288);
																		}
																		BgL_arg2036z00_2286 =
																			MAKE_YOUNG_PAIR
																			(BGl_string2814z00zz__lalr_expandz00,
																			BgL_arg2037z00_2287);
																	}
																	BgL_list2035z00_2285 =
																		MAKE_YOUNG_PAIR
																		(BGl_string2778z00zz__lalr_expandz00,
																		BgL_arg2036z00_2286);
																}
																BGl_warningz00zz__errorz00
																	(BgL_list2035z00_2285);
														}}
														{	/* Lalr/lalr.scm 946 */
															obj_t BgL_tmpz00_6499;

															BgL_tmpz00_6499 = ((obj_t) BgL_yz00_2234);
															return SET_CDR(BgL_tmpz00_6499, BgL_actz00_2231);
														}
													}
											}
									}
							}
						else
							{	/* Lalr/lalr.scm 947 */
								obj_t BgL_arg2051z00_2301;

								{	/* Lalr/lalr.scm 947 */
									obj_t BgL_arg2053z00_2302;

									BgL_arg2053z00_2302 =
										MAKE_YOUNG_PAIR(BINT(BgL_symz00_2230), BgL_actz00_2231);
									BgL_arg2051z00_2301 =
										MAKE_YOUNG_PAIR(BgL_arg2053z00_2302, BgL_xz00_2233);
								}
								return
									VECTOR_SET(BGl_actionzd2tablezd2zz__lalr_globalz00,
									(long) CINT(BgL_stz00_2229), BgL_arg2051z00_2301);
		}}}}}

	}



/* compact-action-table */
	bool_t BGl_compactzd2actionzd2tablez00zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 997 */
			{
				obj_t BgL_actsz00_2352;

				{
					long BgL_iz00_2317;

					BgL_iz00_2317 = ((long) 0);
				BgL_zc3z04anonymousza32059ze3z87_2318:
					if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_iz00_2317),
							BGl_nstatesz00zz__lalr_globalz00))
						{	/* Lalr/lalr.scm 1018 */
							return ((bool_t) 0);
						}
					else
						{	/* Lalr/lalr.scm 1018 */
							{	/* Lalr/lalr.scm 1020 */
								obj_t BgL_actsz00_2320;

								BgL_actsz00_2320 =
									VECTOR_REF(BGl_actionzd2tablezd2zz__lalr_globalz00,
									BgL_iz00_2317);
								{	/* Lalr/lalr.scm 1021 */
									bool_t BgL_test3032z00_6511;

									{	/* Lalr/lalr.scm 1021 */
										obj_t BgL_tmpz00_6512;

										BgL_tmpz00_6512 =
											VECTOR_REF(BGl_reductionzd2tablezd2zz__lalr_globalz00,
											BgL_iz00_2317);
										BgL_test3032z00_6511 = VECTORP(BgL_tmpz00_6512);
									}
									if (BgL_test3032z00_6511)
										{	/* Lalr/lalr.scm 1022 */
											obj_t BgL_actz00_2323;

											BgL_actsz00_2352 = BgL_actsz00_2320;
											{	/* Lalr/lalr.scm 999 */
												obj_t BgL_accumsz00_2354;

												BgL_accumsz00_2354 = BNIL;
												{
													obj_t BgL_lz00_2356;

													BgL_lz00_2356 = BgL_actsz00_2352;
												BgL_zc3z04anonymousza32086ze3z87_2357:
													if (PAIRP(BgL_lz00_2356))
														{	/* Lalr/lalr.scm 1002 */
															obj_t BgL_xz00_2359;

															BgL_xz00_2359 = CDR(CAR(BgL_lz00_2356));
															{	/* Lalr/lalr.scm 1002 */
																obj_t BgL_yz00_2360;

																BgL_yz00_2360 =
																	BGl_assvz00zz__r4_pairs_and_lists_6_3z00
																	(BgL_xz00_2359, BgL_accumsz00_2354);
																{	/* Lalr/lalr.scm 1003 */

																	{	/* Lalr/lalr.scm 1004 */
																		bool_t BgL_test3034z00_6520;

																		if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
																			(BgL_xz00_2359))
																			{	/* Lalr/lalr.scm 1004 */
																				BgL_test3034z00_6520 =
																					(
																					(long) CINT(BgL_xz00_2359) <
																					((long) 0));
																			}
																		else
																			{	/* Lalr/lalr.scm 1004 */
																				BgL_test3034z00_6520 = ((bool_t) 0);
																			}
																		if (BgL_test3034z00_6520)
																			{	/* Lalr/lalr.scm 1004 */
																				if (CBOOL(BgL_yz00_2360))
																					{	/* Lalr/lalr.scm 1006 */
																						long BgL_arg2090z00_2363;

																						BgL_arg2090z00_2363 =
																							(((long) 1) +
																							(long) CINT(CDR(
																									((obj_t) BgL_yz00_2360))));
																						{	/* Lalr/lalr.scm 1006 */
																							obj_t BgL_auxz00_6533;
																							obj_t BgL_tmpz00_6531;

																							BgL_auxz00_6533 =
																								BINT(BgL_arg2090z00_2363);
																							BgL_tmpz00_6531 =
																								((obj_t) BgL_yz00_2360);
																							SET_CDR(BgL_tmpz00_6531,
																								BgL_auxz00_6533);
																					}}
																				else
																					{	/* Lalr/lalr.scm 1007 */
																						obj_t BgL_arg2092z00_2365;

																						BgL_arg2092z00_2365 =
																							MAKE_YOUNG_PAIR(BgL_xz00_2359,
																							BINT(((long) 1)));
																						BgL_accumsz00_2354 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg2092z00_2365,
																							BgL_accumsz00_2354);
																			}}
																		else
																			{	/* Lalr/lalr.scm 1004 */
																				BFALSE;
																			}
																	}
																	{
																		obj_t BgL_lz00_6539;

																		BgL_lz00_6539 = CDR(BgL_lz00_2356);
																		BgL_lz00_2356 = BgL_lz00_6539;
																		goto BgL_zc3z04anonymousza32086ze3z87_2357;
																	}
																}
															}
														}
													else
														{	/* Lalr/lalr.scm 1001 */
															((bool_t) 0);
														}
												}
												{
													obj_t BgL_lz00_4384;
													obj_t BgL_maxz00_4385;
													obj_t BgL_symz00_4386;

													BgL_lz00_4384 = BgL_accumsz00_2354;
													BgL_maxz00_4385 = BINT(((long) 0));
													BgL_symz00_4386 = BFALSE;
												BgL_loopz00_4383:
													if (NULLP(BgL_lz00_4384))
														{	/* Lalr/lalr.scm 1011 */
															BgL_actz00_2323 = BgL_symz00_4386;
														}
													else
														{	/* Lalr/lalr.scm 1013 */
															obj_t BgL_xz00_4396;

															BgL_xz00_4396 = CAR(((obj_t) BgL_lz00_4384));
															if (
																((long) CINT(CDR(
																			((obj_t) BgL_xz00_4396))) >
																	(long) CINT(BgL_maxz00_4385)))
																{
																	obj_t BgL_symz00_6557;
																	obj_t BgL_maxz00_6554;
																	obj_t BgL_lz00_6551;

																	BgL_lz00_6551 = CDR(((obj_t) BgL_lz00_4384));
																	BgL_maxz00_6554 =
																		CDR(((obj_t) BgL_xz00_4396));
																	BgL_symz00_6557 =
																		CAR(((obj_t) BgL_xz00_4396));
																	BgL_symz00_4386 = BgL_symz00_6557;
																	BgL_maxz00_4385 = BgL_maxz00_6554;
																	BgL_lz00_4384 = BgL_lz00_6551;
																	goto BgL_loopz00_4383;
																}
															else
																{
																	obj_t BgL_lz00_6560;

																	BgL_lz00_6560 = CDR(((obj_t) BgL_lz00_4384));
																	BgL_lz00_4384 = BgL_lz00_6560;
																	goto BgL_loopz00_4383;
																}
														}
												}
											}
											{	/* Lalr/lalr.scm 1024 */
												obj_t BgL_arg2063z00_2324;

												{	/* Lalr/lalr.scm 1024 */
													obj_t BgL_arg2065z00_2325;
													obj_t BgL_arg2066z00_2326;

													{	/* Lalr/lalr.scm 1024 */
														obj_t BgL_arg2068z00_2327;

														if (CBOOL(BgL_actz00_2323))
															{	/* Lalr/lalr.scm 1024 */
																BgL_arg2068z00_2327 = BgL_actz00_2323;
															}
														else
															{	/* Lalr/lalr.scm 1024 */
																BgL_arg2068z00_2327 =
																	BGl_symbol2815z00zz__lalr_expandz00;
															}
														BgL_arg2065z00_2325 =
															MAKE_YOUNG_PAIR
															(BGl_za2defaultza2z00zz__lalr_expandz00,
															BgL_arg2068z00_2327);
													}
													{	/* Lalr/lalr.scm 1025 */
														obj_t BgL_hook1241z00_2328;

														BgL_hook1241z00_2328 =
															MAKE_YOUNG_PAIR(BFALSE, BNIL);
														{
															obj_t BgL_l1238z00_2330;
															obj_t BgL_h1239z00_2331;

															BgL_l1238z00_2330 = BgL_actsz00_2320;
															BgL_h1239z00_2331 = BgL_hook1241z00_2328;
														BgL_zc3z04anonymousza32069ze3z87_2332:
															if (NULLP(BgL_l1238z00_2330))
																{	/* Lalr/lalr.scm 1025 */
																	BgL_arg2066z00_2326 =
																		CDR(BgL_hook1241z00_2328);
																}
															else
																{	/* Lalr/lalr.scm 1025 */
																	bool_t BgL_test3041z00_6571;

																	{	/* Lalr/lalr.scm 1026 */
																		bool_t BgL_test3042z00_6572;

																		{	/* Lalr/lalr.scm 1026 */
																			obj_t BgL_tmpz00_6573;

																			{	/* Lalr/lalr.scm 1026 */
																				obj_t BgL_pairz00_4421;

																				BgL_pairz00_4421 =
																					CAR(((obj_t) BgL_l1238z00_2330));
																				BgL_tmpz00_6573 = CDR(BgL_pairz00_4421);
																			}
																			BgL_test3042z00_6572 =
																				(BgL_tmpz00_6573 == BgL_actz00_2323);
																		}
																		if (BgL_test3042z00_6572)
																			{	/* Lalr/lalr.scm 1026 */
																				BgL_test3041z00_6571 = ((bool_t) 0);
																			}
																		else
																			{	/* Lalr/lalr.scm 1026 */
																				BgL_test3041z00_6571 = ((bool_t) 1);
																			}
																	}
																	if (BgL_test3041z00_6571)
																		{	/* Lalr/lalr.scm 1025 */
																			obj_t BgL_nh1240z00_2339;

																			{	/* Lalr/lalr.scm 1025 */
																				obj_t BgL_arg2078z00_2341;

																				BgL_arg2078z00_2341 =
																					CAR(((obj_t) BgL_l1238z00_2330));
																				{	/* Lalr/lalr.scm 1025 */
																					obj_t BgL_res2714z00_4423;

																					BgL_res2714z00_4423 =
																						MAKE_YOUNG_PAIR(BgL_arg2078z00_2341,
																						BNIL);
																					BgL_nh1240z00_2339 =
																						BgL_res2714z00_4423;
																				}
																			}
																			SET_CDR(BgL_h1239z00_2331,
																				BgL_nh1240z00_2339);
																			{	/* Lalr/lalr.scm 1025 */
																				obj_t BgL_arg2077z00_2340;

																				BgL_arg2077z00_2340 =
																					CDR(((obj_t) BgL_l1238z00_2330));
																				{
																					obj_t BgL_h1239z00_6585;
																					obj_t BgL_l1238z00_6584;

																					BgL_l1238z00_6584 =
																						BgL_arg2077z00_2340;
																					BgL_h1239z00_6585 =
																						BgL_nh1240z00_2339;
																					BgL_h1239z00_2331 = BgL_h1239z00_6585;
																					BgL_l1238z00_2330 = BgL_l1238z00_6584;
																					goto
																						BgL_zc3z04anonymousza32069ze3z87_2332;
																				}
																			}
																		}
																	else
																		{	/* Lalr/lalr.scm 1025 */
																			obj_t BgL_arg2079z00_2342;

																			BgL_arg2079z00_2342 =
																				CDR(((obj_t) BgL_l1238z00_2330));
																			{
																				obj_t BgL_l1238z00_6588;

																				BgL_l1238z00_6588 = BgL_arg2079z00_2342;
																				BgL_l1238z00_2330 = BgL_l1238z00_6588;
																				goto
																					BgL_zc3z04anonymousza32069ze3z87_2332;
																			}
																		}
																}
														}
													}
													BgL_arg2063z00_2324 =
														MAKE_YOUNG_PAIR(BgL_arg2065z00_2325,
														BgL_arg2066z00_2326);
												}
												VECTOR_SET(BGl_actionzd2tablezd2zz__lalr_globalz00,
													BgL_iz00_2317, BgL_arg2063z00_2324);
											}
										}
									else
										{	/* Lalr/lalr.scm 1029 */
											obj_t BgL_arg2081z00_2347;

											{	/* Lalr/lalr.scm 1029 */
												obj_t BgL_arg2082z00_2348;

												BgL_arg2082z00_2348 =
													MAKE_YOUNG_PAIR
													(BGl_za2defaultza2z00zz__lalr_expandz00,
													BGl_symbol2810z00zz__lalr_expandz00);
												BgL_arg2081z00_2347 =
													MAKE_YOUNG_PAIR(BgL_arg2082z00_2348,
													BgL_actsz00_2320);
											}
											VECTOR_SET(BGl_actionzd2tablezd2zz__lalr_globalz00,
												BgL_iz00_2317, BgL_arg2081z00_2347);
										}
								}
							}
							{
								long BgL_iz00_6594;

								BgL_iz00_6594 = (BgL_iz00_2317 + ((long) 1));
								BgL_iz00_2317 = BgL_iz00_6594;
								goto BgL_zc3z04anonymousza32059ze3z87_2318;
							}
						}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 11 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 11 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 11 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__lalr_expandz00()
	{
		{	/* Lalr/lalr.scm 11 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__lalr_utilz00(((long) 165614991),
				BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__lalr_genz00(((long) 181573587),
				BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__lalr_globalz00(((long) 39276813),
				BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__lalr_rewritez00(((long) 80638298),
				BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 121046386),
				BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__rgcz00(((long) 352596942),
				BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581), BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945), BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874), BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048), BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694), BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 323064336),
				BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845), BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 439352636),
				BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
			return BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 528345319),
				BSTRING_TO_STRING(BGl_string2817z00zz__lalr_expandz00));
		}

	}

#ifdef __cplusplus
}
#endif
