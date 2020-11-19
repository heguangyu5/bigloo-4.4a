/*===========================================================================*/
/*   (Eval/expanders.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/expanders.scm -indent -o objs/obj_u/Eval/expanders.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	static obj_t BGl_z62expandzd2beginzb0zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2481z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2483z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2485z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2487z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2489z00zz__install_expandersz00 = BUNSPEC;
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_makezd2expandzd2withzd2tracezd2zz__expander_tracez00(obj_t);
	static obj_t BGl_symbol2491z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2493z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2495z00zz__install_expandersz00 = BUNSPEC;
	extern obj_t BGl_expandzd2matchzd2casez00zz__match_expandz00(obj_t);
	static obj_t BGl_symbol2497z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2499z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_expandzd2errorzd2zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__install_expandersz00 =
		BUNSPEC;
	static obj_t
		BGl_z62zc3z04anonymousza31499ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	static bool_t BGl_findzd2inzd2bodyze70ze7zz__install_expandersz00(obj_t,
		obj_t);
	extern obj_t BGl_expandzd2definezd2macroz00zz__evalz00(obj_t, obj_t);
	extern obj_t BGl_installzd2compilerzd2expanderz00zz__macroz00(obj_t, obj_t);
	extern obj_t BGl_expandzd2condzd2zz__expander_boolz00(obj_t);
	extern obj_t BGl_relativezd2filezd2namez00zz__osz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__install_expandersz00();
	static obj_t BGl_z62expandzd2andzd2letza2zc0zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__install_expandersz00();
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31311ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zz__install_expandersz00();
	static obj_t
		BGl_z62installzd2allzd2expandersz12z70zz__install_expandersz00(obj_t);
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_expandzd2dozd2zz__expander_doz00(obj_t, obj_t);
	static obj_t BGl_expandzd2testzd2zz__install_expandersz00(obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31410ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2tprintzb0zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2ifzb0zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_methodzd2initzd2zz__install_expandersz00();
	extern obj_t BGl_quasiquotationz00zz__expander_quotez00(obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31341ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31422ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00(int,
		obj_t);
	extern obj_t BGl_evepairifyzd2deepzd2zz__prognz00(obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31351ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31343ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31336ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_expandzd2matchzd2lambdaz00zz__match_expandz00(obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31361ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31353ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31345ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_list2542z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_z52installzd2allzd2expandersz12z40zz__install_expandersz00();
	static obj_t BGl_list2547z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_makezd2ifze70z35zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_evepairifyz00zz__prognz00(obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31290ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31355ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31517ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31347ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31339ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_installzd2expanderzd2zz__macroz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__install_expandersz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evobjectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evmodulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_expandz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__lalr_expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_tracez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_argsz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_srfi0z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_recordz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_structz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_tryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_doz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_definez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_casez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_boolz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_letz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_quotez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__macroz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_makezd2expandzd2tracezd2itemzd2zz__expander_tracez00(obj_t);
	extern obj_t BGl_makezd2expandzd2whenzd2tracezd2zz__expander_tracez00(obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31364ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31437ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_expandzd2tryzd2zz__expander_tryz00(obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31292ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31454ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31608ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__install_expandersz00();
	static obj_t
		BGl_z62zc3z04anonymousza31358ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__install_expandersz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__install_expandersz00();
	static obj_t
		BGl_z62zc3z04anonymousza31481ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2401z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2404z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2407z00zz__install_expandersz00 = BUNSPEC;
	extern obj_t BGl_pwdz00zz__osz00();
	static obj_t BGl_symbol2410z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2413z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2416z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2419z00zz__install_expandersz00 = BUNSPEC;
	static obj_t
		BGl_z62zc3z04anonymousza31653ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_expandzd2quotezd2zz__expander_quotez00(obj_t, obj_t);
	static obj_t BGl_symbol2501z00zz__install_expandersz00 = BUNSPEC;
	static obj_t
		BGl_z62zc3z04anonymousza31378ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2503z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2422z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2424z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2506z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2426z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2509z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2428z00zz__install_expandersz00 = BUNSPEC;
	extern obj_t BGl_expandzd2definezd2expanderz00zz__evalz00(obj_t, obj_t);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_installzd2evalzd2expanderz00zz__macroz00(obj_t, obj_t);
	static obj_t BGl_symbol2430z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2512z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2514z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2433z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2517z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2436z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2519z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2439z00zz__install_expandersz00 = BUNSPEC;
	static obj_t
		BGl_z62zc3z04anonymousza31396ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2521z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2523z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2442z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_z62ez62zz__install_expandersz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2444z00zz__install_expandersz00 = BUNSPEC;
	extern obj_t BGl_evmodulezd2staticzd2classz00zz__evmodulez00(obj_t);
	static obj_t BGl_symbol2526z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2446z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2528z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2448z00zz__install_expandersz00 = BUNSPEC;
	extern obj_t BGl_expandzd2definezd2patternz00zz__evalz00(obj_t);
	static obj_t BGl_symbol2530z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2450z00zz__install_expandersz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_installzd2allzd2expandersz12z12zz__install_expandersz00();
	static obj_t BGl_symbol2533z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2452z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2371z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2535z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2454z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2373z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2456z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2375z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2538z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2458z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2377z00zz__install_expandersz00 = BUNSPEC;
	extern obj_t BGl_za2nilza2z00zz__evalz00;
	static obj_t
		BGl_z62zc3z04anonymousza31649ze3ze5zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2540z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2460z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2380z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2543z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2462z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2464z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2383z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2548z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2467z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2386z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2389z00zz__install_expandersz00 = BUNSPEC;
	static bool_t BGl_za2expanderszd2installedzd2pza2z00zz__install_expandersz00;
	extern obj_t BGl_expandzd2definezd2hygienezd2macrozd2zz__evalz00(obj_t,
		obj_t);
	static obj_t BGl_symbol2550z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2470z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2552z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2473z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2392z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2476z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2395z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2479z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2398z00zz__install_expandersz00 = BUNSPEC;
	static obj_t *__cnst;


	extern obj_t
		BGl_expandzd2definezd2recordzd2typezd2envz00zz__expander_recordz00;
	extern obj_t BGl_expandzd2evalzd2casezd2envzd2zz__expander_casez00;
	   
		 
		DEFINE_STRING(BGl_string2402z00zz__install_expandersz00,
		BgL_bgl_string2402za700za7za7_2559za7, "define-expander", 15);
	      DEFINE_STRING(BGl_string2405z00zz__install_expandersz00,
		BgL_bgl_string2405za700za7za7_2560za7, "cond", 4);
	      DEFINE_STRING(BGl_string2408z00zz__install_expandersz00,
		BgL_bgl_string2408za700za7za7_2561za7, "do", 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2400z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2562za7,
		BGl_z62zc3z04anonymousza31345ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2403z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2563za7,
		BGl_z62zc3z04anonymousza31347ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2406z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2564za7,
		BGl_z62zc3z04anonymousza31351ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string2411z00zz__install_expandersz00,
		BgL_bgl_string2411za700za7za7_2565za7, "try", 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2409z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2566za7,
		BGl_z62zc3z04anonymousza31353ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string2414z00zz__install_expandersz00,
		BgL_bgl_string2414za700za7za7_2567za7, "match-case", 10);
	      DEFINE_STRING(BGl_string2417z00zz__install_expandersz00,
		BgL_bgl_string2417za700za7za7_2568za7, "match-lambda", 12);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2412z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2569za7,
		BGl_z62zc3z04anonymousza31355ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string2500z00zz__install_expandersz00,
		BgL_bgl_string2500za700za7za7_2570za7, "define-struct", 13);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2415z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2571za7,
		BGl_z62zc3z04anonymousza31358ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string2420z00zz__install_expandersz00,
		BgL_bgl_string2420za700za7za7_2572za7, "define-pattern", 14);
	      DEFINE_STRING(BGl_string2502z00zz__install_expandersz00,
		BgL_bgl_string2502za700za7za7_2573za7, "case", 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2418z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2574za7,
		BGl_z62zc3z04anonymousza31361ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string2504z00zz__install_expandersz00,
		BgL_bgl_string2504za700za7za7_2575za7, "cond-expand", 11);
	      DEFINE_STRING(BGl_string2423z00zz__install_expandersz00,
		BgL_bgl_string2423za700za7za7_2576za7, "delay", 5);
	      DEFINE_STRING(BGl_string2425z00zz__install_expandersz00,
		BgL_bgl_string2425za700za7za7_2577za7, "regular-grammar", 15);
	      DEFINE_STRING(BGl_string2507z00zz__install_expandersz00,
		BgL_bgl_string2507za700za7za7_2578za7, "profile", 7);
	      DEFINE_STRING(BGl_string2427z00zz__install_expandersz00,
		BgL_bgl_string2427za700za7za7_2579za7, "string-case", 11);
	      DEFINE_STRING(BGl_string2429z00zz__install_expandersz00,
		BgL_bgl_string2429za700za7za7_2580za7, "lalr-grammar", 12);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2421z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2581za7,
		BGl_z62zc3z04anonymousza31364ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2505z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2582za7,
		BGl_z62zc3z04anonymousza31608ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string2510z00zz__install_expandersz00,
		BgL_bgl_string2510za700za7za7_2583za7, "instantiate", 11);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2508z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2584za7,
		BGl_z62zc3z04anonymousza31649ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string2431z00zz__install_expandersz00,
		BgL_bgl_string2431za700za7za7_2585za7, "begin", 5);
	      DEFINE_STRING(BGl_string2513z00zz__install_expandersz00,
		BgL_bgl_string2513za700za7za7_2586za7, "with-access", 11);
	      DEFINE_STRING(BGl_string2515z00zz__install_expandersz00,
		BgL_bgl_string2515za700za7za7_2587za7, "co-instantiate", 14);
	      DEFINE_STRING(BGl_string2434z00zz__install_expandersz00,
		BgL_bgl_string2434za700za7za7_2588za7, "failure", 7);
	      DEFINE_STRING(BGl_string2518z00zz__install_expandersz00,
		BgL_bgl_string2518za700za7za7_2589za7, "define-class", 12);
	      DEFINE_STRING(BGl_string2437z00zz__install_expandersz00,
		BgL_bgl_string2437za700za7za7_2590za7, "receive", 7);
	extern obj_t BGl_expandzd2definezd2syntaxzd2envzd2zz__r5_macro_4_3_syntaxz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2511z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2591za7,
		BGl_z62zc3z04anonymousza31653ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2432z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2592za7,
		BGl_z62zc3z04anonymousza31378ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string2520z00zz__install_expandersz00,
		BgL_bgl_string2520za700za7za7_2593za7, "define-abstract-class", 21);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2516z00zz__install_expandersz00,
		BgL_bgl_za762eza762za7za7__insta2594z00,
		BGl_z62ez62zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2435z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2595za7,
		BGl_z62zc3z04anonymousza31396ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string2440z00zz__install_expandersz00,
		BgL_bgl_string2440za700za7za7_2596za7, "when", 4);
	      DEFINE_STRING(BGl_string2522z00zz__install_expandersz00,
		BgL_bgl_string2522za700za7za7_2597za7, "define-final-class", 18);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2438z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2598za7,
		BGl_z62zc3z04anonymousza31410ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string2524z00zz__install_expandersz00,
		BgL_bgl_string2524za700za7za7_2599za7, "eval", 4);
	      DEFINE_STRING(BGl_string2443z00zz__install_expandersz00,
		BgL_bgl_string2443za700za7za7_2600za7, "unless", 6);
	      DEFINE_STRING(BGl_string2525z00zz__install_expandersz00,
		BgL_bgl_string2525za700za7za7_2601za7, "Unknown class", 13);
	      DEFINE_STRING(BGl_string2445z00zz__install_expandersz00,
		BgL_bgl_string2445za700za7za7_2602za7, "define-record-type", 18);
	      DEFINE_STRING(BGl_string2527z00zz__install_expandersz00,
		BgL_bgl_string2527za700za7za7_2603za7, "value", 5);
	      DEFINE_STRING(BGl_string2447z00zz__install_expandersz00,
		BgL_bgl_string2447za700za7za7_2604za7, "args-parse", 10);
	      DEFINE_STRING(BGl_string2529z00zz__install_expandersz00,
		BgL_bgl_string2529za700za7za7_2605za7, "GC-profile-push", 15);
	      DEFINE_STRING(BGl_string2449z00zz__install_expandersz00,
		BgL_bgl_string2449za700za7za7_2606za7, "tprint", 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2441z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2607za7,
		BGl_z62zc3z04anonymousza31422ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string2531z00zz__install_expandersz00,
		BgL_bgl_string2531za700za7za7_2608za7, "GC-profile-pop", 14);
	      DEFINE_STRING(BGl_string2532z00zz__install_expandersz00,
		BgL_bgl_string2532za700za7za7_2609za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string2451z00zz__install_expandersz00,
		BgL_bgl_string2451za700za7za7_2610za7, "and-let*", 8);
	      DEFINE_STRING(BGl_string2534z00zz__install_expandersz00,
		BgL_bgl_string2534za700za7za7_2611za7, "set!", 4);
	      DEFINE_STRING(BGl_string2453z00zz__install_expandersz00,
		BgL_bgl_string2453za700za7za7_2612za7, "define-syntax", 13);
	      DEFINE_STRING(BGl_string2372z00zz__install_expandersz00,
		BgL_bgl_string2372za700za7za7_2613za7, "test-aux-for-nil", 16);
	      DEFINE_STRING(BGl_string2536z00zz__install_expandersz00,
		BgL_bgl_string2536za700za7za7_2614za7, "call-with-values", 16);
	      DEFINE_STRING(BGl_string2455z00zz__install_expandersz00,
		BgL_bgl_string2455za700za7za7_2615za7, "letrec-syntax", 13);
	      DEFINE_STRING(BGl_string2374z00zz__install_expandersz00,
		BgL_bgl_string2374za700za7za7_2616za7, "null?", 5);
	extern obj_t BGl_expandzd2letzd2syntaxzd2envzd2zz__r5_macro_4_3_syntaxz00;
	   
		 
		DEFINE_STRING(BGl_string2537z00zz__install_expandersz00,
		BgL_bgl_string2537za700za7za7_2617za7, "Illegal `failure' form", 22);
	      DEFINE_STRING(BGl_string2457z00zz__install_expandersz00,
		BgL_bgl_string2457za700za7za7_2618za7, "let-syntax", 10);
	      DEFINE_STRING(BGl_string2376z00zz__install_expandersz00,
		BgL_bgl_string2376za700za7za7_2619za7, "if", 2);
	      DEFINE_STRING(BGl_string2539z00zz__install_expandersz00,
		BgL_bgl_string2539za700za7za7_2620za7, "make-promise", 12);
	      DEFINE_STRING(BGl_string2459z00zz__install_expandersz00,
		BgL_bgl_string2459za700za7za7_2621za7, "compiler", 8);
	      DEFINE_STRING(BGl_string2378z00zz__install_expandersz00,
		BgL_bgl_string2378za700za7za7_2622za7, "lambda", 6);
	      DEFINE_STRING(BGl_string2541z00zz__install_expandersz00,
		BgL_bgl_string2541za700za7za7_2623za7, "not", 3);
	      DEFINE_STRING(BGl_string2461z00zz__install_expandersz00,
		BgL_bgl_string2461za700za7za7_2624za7, "when-trace", 10);
	      DEFINE_STRING(BGl_string2381z00zz__install_expandersz00,
		BgL_bgl_string2381za700za7za7_2625za7, "quote", 5);
	      DEFINE_STRING(BGl_string2544z00zz__install_expandersz00,
		BgL_bgl_string2544za700za7za7_2626za7, "__r4_output_6_10_3", 18);
	      DEFINE_STRING(BGl_string2463z00zz__install_expandersz00,
		BgL_bgl_string2463za700za7za7_2627za7, "with-trace", 10);
	      DEFINE_STRING(BGl_string2545z00zz__install_expandersz00,
		BgL_bgl_string2545za700za7za7_2628za7, ":", 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2379z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2629za7,
		BGl_z62zc3z04anonymousza31290ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string2546z00zz__install_expandersz00,
		BgL_bgl_string2546za700za7za7_2630za7, ",", 1);
	      DEFINE_STRING(BGl_string2465z00zz__install_expandersz00,
		BgL_bgl_string2465za700za7za7_2631za7, "trace-item", 10);
	      DEFINE_STRING(BGl_string2384z00zz__install_expandersz00,
		BgL_bgl_string2384za700za7za7_2632za7, "@", 1);
	      DEFINE_STRING(BGl_string2549z00zz__install_expandersz00,
		BgL_bgl_string2549za700za7za7_2633za7, "current-error-port", 18);
	      DEFINE_STRING(BGl_string2468z00zz__install_expandersz00,
		BgL_bgl_string2468za700za7za7_2634za7, "#meta", 5);
	      DEFINE_STRING(BGl_string2387z00zz__install_expandersz00,
		BgL_bgl_string2387za700za7za7_2635za7, "->", 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2382z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2636za7,
		BGl_z62zc3z04anonymousza31292ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	extern obj_t
		BGl_expandzd2evalzd2definezd2inlinezd2envz00zz__expander_definez00;
	extern obj_t BGl_expandzd2argszd2parsezd2envzd2zz__expander_argsz00;
	   
		 
		DEFINE_STRING(BGl_string2551z00zz__install_expandersz00,
		BgL_bgl_string2551za700za7za7_2637za7, "at", 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2466z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2638za7,
		BGl_z62zc3z04anonymousza31437ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2385z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2639za7,
		BGl_z62zc3z04anonymousza31311ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string2471z00zz__install_expandersz00,
		BgL_bgl_string2471za700za7za7_2640za7, "bind-exit", 9);
	      DEFINE_STRING(BGl_string2390z00zz__install_expandersz00,
		BgL_bgl_string2390za700za7za7_2641za7, "quasiquote", 10);
	      DEFINE_STRING(BGl_string2553z00zz__install_expandersz00,
		BgL_bgl_string2553za700za7za7_2642za7, "and", 3);
	      DEFINE_STRING(BGl_string2554z00zz__install_expandersz00,
		BgL_bgl_string2554za700za7za7_2643za7, "bindings must be a list", 23);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2469z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2644za7,
		BGl_z62zc3z04anonymousza31454ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2388z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2645za7,
		BGl_z62zc3z04anonymousza31336ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string2555z00zz__install_expandersz00,
		BgL_bgl_string2555za700za7za7_2646za7, "duplicate variable in the bindings",
		34);
	      DEFINE_STRING(BGl_string2474z00zz__install_expandersz00,
		BgL_bgl_string2474za700za7za7_2647za7, "unwind-protect", 14);
	      DEFINE_STRING(BGl_string2393z00zz__install_expandersz00,
		BgL_bgl_string2393za700za7za7_2648za7, "module", 6);
	      DEFINE_STRING(BGl_string2556z00zz__install_expandersz00,
		BgL_bgl_string2556za700za7za7_2649za7, "ill-formed binding", 18);
	      DEFINE_STRING(BGl_string2557z00zz__install_expandersz00,
		BgL_bgl_string2557za700za7za7_2650za7, "Illegal `and-let*' form", 23);
	      DEFINE_STRING(BGl_string2558z00zz__install_expandersz00,
		BgL_bgl_string2558za700za7za7_2651za7, "__install_expanders", 19);
	      DEFINE_STRING(BGl_string2477z00zz__install_expandersz00,
		BgL_bgl_string2477za700za7za7_2652za7, "with-handler", 12);
	      DEFINE_STRING(BGl_string2396z00zz__install_expandersz00,
		BgL_bgl_string2396za700za7za7_2653za7, "define-macro", 12);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_expandzd2tprintzd2envz00zz__install_expandersz00,
		BgL_bgl_za762expandza7d2tpri2654z00,
		BGl_z62expandzd2tprintzb0zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2399z00zz__install_expandersz00,
		BgL_bgl_string2399za700za7za7_2655za7, "define-hygiene-macro", 20);
	extern obj_t BGl_expandzd2evalzd2letrecza2zd2envz70zz__expander_letz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2472z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2656za7,
		BGl_z62zc3z04anonymousza31481ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2391z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2657za7,
		BGl_z62zc3z04anonymousza31339ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2475z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2658za7,
		BGl_z62zc3z04anonymousza31499ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2394z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2659za7,
		BGl_z62zc3z04anonymousza31341ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string2480z00zz__install_expandersz00,
		BgL_bgl_string2480za700za7za7_2660za7, "multiple-value-bind", 19);
	      DEFINE_STRING(BGl_string2482z00zz__install_expandersz00,
		BgL_bgl_string2482za700za7za7_2661za7, "let", 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2478z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2662za7,
		BGl_z62zc3z04anonymousza31517ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2397z00zz__install_expandersz00,
		BgL_bgl_za762za7c3za704anonymo2663za7,
		BGl_z62zc3z04anonymousza31343ze3ze5zz__install_expandersz00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string2484z00zz__install_expandersz00,
		BgL_bgl_string2484za700za7za7_2664za7, "let*", 4);
	      DEFINE_STRING(BGl_string2486z00zz__install_expandersz00,
		BgL_bgl_string2486za700za7za7_2665za7, "letrec", 6);
	      DEFINE_STRING(BGl_string2488z00zz__install_expandersz00,
		BgL_bgl_string2488za700za7za7_2666za7, "letrec*", 7);
	      DEFINE_STRING(BGl_string2490z00zz__install_expandersz00,
		BgL_bgl_string2490za700za7za7_2667za7, "labels", 6);
	      DEFINE_STRING(BGl_string2492z00zz__install_expandersz00,
		BgL_bgl_string2492za700za7za7_2668za7, "define", 6);
	extern obj_t
		BGl_expandzd2evalzd2definezd2structzd2envz00zz__expander_structz00;
	      DEFINE_STRING(BGl_string2494z00zz__install_expandersz00,
		BgL_bgl_string2494za700za7za7_2669za7, "define-inline", 13);
	      DEFINE_STRING(BGl_string2496z00zz__install_expandersz00,
		BgL_bgl_string2496za700za7za7_2670za7, "define-generic", 14);
	      DEFINE_STRING(BGl_string2498z00zz__install_expandersz00,
		BgL_bgl_string2498za700za7za7_2671za7, "define-method", 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_installzd2allzd2expandersz12zd2envzc0zz__install_expandersz00,
		BgL_bgl_za762installza7d2all2672z00,
		BGl_z62installzd2allzd2expandersz12z70zz__install_expandersz00, 0L, BUNSPEC,
		0);
	extern obj_t BGl_expandzd2evalzd2definezd2envzd2zz__expander_definez00;
	extern obj_t BGl_expandzd2regularzd2grammarzd2envzd2zz__rgc_expandz00;
	extern obj_t BGl_expandzd2evalzd2letza2zd2envz70zz__expander_letz00;
	extern obj_t BGl_expandzd2evalzd2labelszd2envzd2zz__expander_letz00;
	extern obj_t
		BGl_expandzd2evalzd2definezd2genericzd2envz00zz__expander_definez00;
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_expandzd2andzd2letza2zd2envz70zz__install_expandersz00,
		BgL_bgl_za762expandza7d2andza72673za7,
		BGl_z62expandzd2andzd2letza2zc0zz__install_expandersz00, 0L, BUNSPEC, 2);
	extern obj_t BGl_expandzd2lalrzd2grammarzd2envzd2zz__lalr_expandz00;
	extern obj_t BGl_evalzd2cozd2instantiatezd2expanderzd2envz00zz__evobjectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_expandzd2beginzd2envz00zz__install_expandersz00,
		BgL_bgl_za762expandza7d2begi2674z00,
		BGl_z62expandzd2beginzb0zz__install_expandersz00, 0L, BUNSPEC, 2);
	extern obj_t BGl_expandzd2evalzd2condzd2expandzd2envz00zz__expander_srfi0z00;
	extern obj_t
		BGl_expandzd2evalzd2definezd2methodzd2envz00zz__expander_definez00;
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_expandzd2ifzd2envz00zz__install_expandersz00,
		BgL_bgl_za762expandza7d2ifza7b2675za7,
		BGl_z62expandzd2ifzb0zz__install_expandersz00, 0L, BUNSPEC, 2);
	extern obj_t BGl_expandzd2evalzd2letreczd2envzd2zz__expander_letz00;
	extern obj_t BGl_expandzd2evalzd2lambdazd2envzd2zz__expander_definez00;
	extern obj_t BGl_expandzd2evalzd2letzd2envzd2zz__expander_letz00;
	extern obj_t BGl_expandzd2letreczd2syntaxzd2envzd2zz__r5_macro_4_3_syntaxz00;
	extern obj_t BGl_expandzd2stringzd2casezd2envzd2zz__rgc_expandz00;

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol2481z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2483z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2485z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2487z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2489z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2491z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2493z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2495z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2497z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2499z00zz__install_expandersz00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_list2542z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_list2547z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2401z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2404z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2407z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2410z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2413z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2416z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2419z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2501z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2503z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2422z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2424z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2506z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2426z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2509z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2428z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2430z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2512z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2514z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2433z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2517z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2436z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2519z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2439z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2521z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2523z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2442z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2444z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2526z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2446z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2528z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2448z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2530z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2450z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2533z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2452z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2371z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2535z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2454z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2373z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2456z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2375z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2538z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2458z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2377z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2540z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2460z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2380z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2543z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2462z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2464z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2383z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2548z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2467z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2386z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2389z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2550z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2470z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2552z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2473z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2392z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2476z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2395z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2479z00zz__install_expandersz00));
		     ADD_ROOT((void *) (&BGl_symbol2398z00zz__install_expandersz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__install_expandersz00(long
		BgL_checksumz00_4598, char *BgL_fromz00_4599)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__install_expandersz00))
				{
					BGl_requirezd2initializa7ationz75zz__install_expandersz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__install_expandersz00();
					BGl_cnstzd2initzd2zz__install_expandersz00();
					BGl_importedzd2moduleszd2initz00zz__install_expandersz00();
					return BGl_toplevelzd2initzd2zz__install_expandersz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__install_expandersz00()
	{
		{	/* Eval/expanders.scm 15 */
			BGl_symbol2371z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2372z00zz__install_expandersz00);
			BGl_symbol2373z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2374z00zz__install_expandersz00);
			BGl_symbol2375z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2376z00zz__install_expandersz00);
			BGl_symbol2377z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2378z00zz__install_expandersz00);
			BGl_symbol2380z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2381z00zz__install_expandersz00);
			BGl_symbol2383z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2384z00zz__install_expandersz00);
			BGl_symbol2386z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2387z00zz__install_expandersz00);
			BGl_symbol2389z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2390z00zz__install_expandersz00);
			BGl_symbol2392z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2393z00zz__install_expandersz00);
			BGl_symbol2395z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2396z00zz__install_expandersz00);
			BGl_symbol2398z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2399z00zz__install_expandersz00);
			BGl_symbol2401z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2402z00zz__install_expandersz00);
			BGl_symbol2404z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2405z00zz__install_expandersz00);
			BGl_symbol2407z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2408z00zz__install_expandersz00);
			BGl_symbol2410z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2411z00zz__install_expandersz00);
			BGl_symbol2413z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2414z00zz__install_expandersz00);
			BGl_symbol2416z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2417z00zz__install_expandersz00);
			BGl_symbol2419z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2420z00zz__install_expandersz00);
			BGl_symbol2422z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2423z00zz__install_expandersz00);
			BGl_symbol2424z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2425z00zz__install_expandersz00);
			BGl_symbol2426z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2427z00zz__install_expandersz00);
			BGl_symbol2428z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2429z00zz__install_expandersz00);
			BGl_symbol2430z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2431z00zz__install_expandersz00);
			BGl_symbol2433z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2434z00zz__install_expandersz00);
			BGl_symbol2436z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2437z00zz__install_expandersz00);
			BGl_symbol2439z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2440z00zz__install_expandersz00);
			BGl_symbol2442z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2443z00zz__install_expandersz00);
			BGl_symbol2444z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2445z00zz__install_expandersz00);
			BGl_symbol2446z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2447z00zz__install_expandersz00);
			BGl_symbol2448z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2449z00zz__install_expandersz00);
			BGl_symbol2450z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2451z00zz__install_expandersz00);
			BGl_symbol2452z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2453z00zz__install_expandersz00);
			BGl_symbol2454z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2455z00zz__install_expandersz00);
			BGl_symbol2456z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2457z00zz__install_expandersz00);
			BGl_symbol2458z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2459z00zz__install_expandersz00);
			BGl_symbol2460z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2461z00zz__install_expandersz00);
			BGl_symbol2462z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2463z00zz__install_expandersz00);
			BGl_symbol2464z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2465z00zz__install_expandersz00);
			BGl_symbol2467z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2468z00zz__install_expandersz00);
			BGl_symbol2470z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2471z00zz__install_expandersz00);
			BGl_symbol2473z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2474z00zz__install_expandersz00);
			BGl_symbol2476z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2477z00zz__install_expandersz00);
			BGl_symbol2479z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2480z00zz__install_expandersz00);
			BGl_symbol2481z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2482z00zz__install_expandersz00);
			BGl_symbol2483z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2484z00zz__install_expandersz00);
			BGl_symbol2485z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2486z00zz__install_expandersz00);
			BGl_symbol2487z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2488z00zz__install_expandersz00);
			BGl_symbol2489z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2490z00zz__install_expandersz00);
			BGl_symbol2491z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2492z00zz__install_expandersz00);
			BGl_symbol2493z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2494z00zz__install_expandersz00);
			BGl_symbol2495z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2496z00zz__install_expandersz00);
			BGl_symbol2497z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2498z00zz__install_expandersz00);
			BGl_symbol2499z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2500z00zz__install_expandersz00);
			BGl_symbol2501z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2502z00zz__install_expandersz00);
			BGl_symbol2503z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2504z00zz__install_expandersz00);
			BGl_symbol2506z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2507z00zz__install_expandersz00);
			BGl_symbol2509z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2510z00zz__install_expandersz00);
			BGl_symbol2512z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2513z00zz__install_expandersz00);
			BGl_symbol2514z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2515z00zz__install_expandersz00);
			BGl_symbol2517z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2518z00zz__install_expandersz00);
			BGl_symbol2519z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2520z00zz__install_expandersz00);
			BGl_symbol2521z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2522z00zz__install_expandersz00);
			BGl_symbol2523z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2524z00zz__install_expandersz00);
			BGl_symbol2526z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2527z00zz__install_expandersz00);
			BGl_symbol2528z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2529z00zz__install_expandersz00);
			BGl_symbol2530z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2531z00zz__install_expandersz00);
			BGl_symbol2533z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2534z00zz__install_expandersz00);
			BGl_symbol2535z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2536z00zz__install_expandersz00);
			BGl_symbol2538z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2539z00zz__install_expandersz00);
			BGl_symbol2540z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2541z00zz__install_expandersz00);
			BGl_symbol2543z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2544z00zz__install_expandersz00);
			BGl_list2542z00zz__install_expandersz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2383z00zz__install_expandersz00,
				MAKE_YOUNG_PAIR(BGl_symbol2448z00zz__install_expandersz00,
					MAKE_YOUNG_PAIR(BGl_symbol2543z00zz__install_expandersz00, BNIL)));
			BGl_symbol2548z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2549z00zz__install_expandersz00);
			BGl_list2547z00zz__install_expandersz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2548z00zz__install_expandersz00, BNIL);
			BGl_symbol2550z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2551z00zz__install_expandersz00);
			return (BGl_symbol2552z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2553z00zz__install_expandersz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__install_expandersz00()
	{
		{	/* Eval/expanders.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__install_expandersz00()
	{
		{	/* Eval/expanders.scm 15 */
			BGl_za2expanderszd2installedzd2pza2z00zz__install_expandersz00 =
				((bool_t) 0);
			if (BGl_za2expanderszd2installedzd2pza2z00zz__install_expandersz00)
				{	/* Eval/expanders.scm 109 */
					return BFALSE;
				}
			else
				{	/* Eval/expanders.scm 109 */
					BGl_za2expanderszd2installedzd2pza2z00zz__install_expandersz00 =
						((bool_t) 1);
					return
						BGl_z52installzd2allzd2expandersz12z40zz__install_expandersz00();
				}
		}

	}



/* expand-test */
	obj_t BGl_expandzd2testzd2zz__install_expandersz00(obj_t BgL_xz00_3,
		obj_t BgL_ez00_4)
	{
		{	/* Eval/expanders.scm 80 */
			if (CBOOL(BGl_za2nilza2z00zz__evalz00))
				{	/* Eval/expanders.scm 81 */
					return
						PROCEDURE_ENTRY(BgL_ez00_4) (BgL_ez00_4, BgL_xz00_3, BgL_ez00_4,
						BEOA);
				}
			else
				{	/* Eval/expanders.scm 83 */
					obj_t BgL_arg1245z00_1156;
					obj_t BgL_arg1246z00_1157;

					{	/* Eval/expanders.scm 83 */
						obj_t BgL_arg1247z00_1158;

						{	/* Eval/expanders.scm 83 */
							obj_t BgL_arg1250z00_1159;
							obj_t BgL_arg1252z00_1160;

							BgL_arg1250z00_1159 =
								MAKE_YOUNG_PAIR(BGl_symbol2371z00zz__install_expandersz00,
								BNIL);
							{	/* Eval/expanders.scm 85 */
								obj_t BgL_arg1253z00_1161;

								{	/* Eval/expanders.scm 85 */
									obj_t BgL_arg1254z00_1162;

									{	/* Eval/expanders.scm 85 */
										obj_t BgL_arg1256z00_1163;

										{	/* Eval/expanders.scm 85 */
											obj_t BgL_arg1258z00_1164;
											obj_t BgL_arg1263z00_1165;

											{	/* Eval/expanders.scm 85 */
												obj_t BgL_arg1268z00_1166;

												{	/* Eval/expanders.scm 85 */
													obj_t BgL_arg1270z00_1167;
													obj_t BgL_arg1271z00_1168;

													{	/* Eval/expanders.scm 85 */
														obj_t BgL_arg1273z00_1169;

														BgL_arg1273z00_1169 =
															MAKE_YOUNG_PAIR
															(BGl_symbol2371z00zz__install_expandersz00, BNIL);
														BgL_arg1270z00_1167 =
															MAKE_YOUNG_PAIR
															(BGl_symbol2373z00zz__install_expandersz00,
															BgL_arg1273z00_1169);
													}
													{	/* Eval/expanders.scm 85 */
														obj_t BgL_arg1274z00_1170;

														BgL_arg1274z00_1170 = MAKE_YOUNG_PAIR(BTRUE, BNIL);
														BgL_arg1271z00_1168 =
															MAKE_YOUNG_PAIR(BFALSE, BgL_arg1274z00_1170);
													}
													BgL_arg1268z00_1166 =
														MAKE_YOUNG_PAIR(BgL_arg1270z00_1167,
														BgL_arg1271z00_1168);
												}
												BgL_arg1258z00_1164 =
													MAKE_YOUNG_PAIR
													(BGl_symbol2375z00zz__install_expandersz00,
													BgL_arg1268z00_1166);
											}
											BgL_arg1263z00_1165 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
											BgL_arg1256z00_1163 =
												MAKE_YOUNG_PAIR(BgL_arg1258z00_1164,
												BgL_arg1263z00_1165);
										}
										BgL_arg1254z00_1162 =
											MAKE_YOUNG_PAIR(BGl_symbol2371z00zz__install_expandersz00,
											BgL_arg1256z00_1163);
									}
									BgL_arg1253z00_1161 =
										MAKE_YOUNG_PAIR(BGl_symbol2375z00zz__install_expandersz00,
										BgL_arg1254z00_1162);
								}
								BgL_arg1252z00_1160 =
									MAKE_YOUNG_PAIR(BgL_arg1253z00_1161, BNIL);
							}
							BgL_arg1247z00_1158 =
								MAKE_YOUNG_PAIR(BgL_arg1250z00_1159, BgL_arg1252z00_1160);
						}
						BgL_arg1245z00_1156 =
							MAKE_YOUNG_PAIR(BGl_symbol2377z00zz__install_expandersz00,
							BgL_arg1247z00_1158);
					}
					{	/* Eval/expanders.scm 89 */
						obj_t BgL_arg1275z00_1171;

						BgL_arg1275z00_1171 =
							PROCEDURE_ENTRY(BgL_ez00_4) (BgL_ez00_4, BgL_xz00_3, BgL_ez00_4,
							BEOA);
						BgL_arg1246z00_1157 = MAKE_YOUNG_PAIR(BgL_arg1275z00_1171, BNIL);
					}
					return MAKE_YOUNG_PAIR(BgL_arg1245z00_1156, BgL_arg1246z00_1157);
				}
		}

	}



/* expand-error */
	obj_t BGl_expandzd2errorzd2zz__install_expandersz00(obj_t BgL_pz00_5,
		obj_t BgL_mz00_6, obj_t BgL_xz00_7)
	{
		{	/* Eval/expanders.scm 94 */
			{	/* Eval/expanders.scm 95 */
				obj_t BgL_locz00_1172;

				{	/* Eval/expanders.scm 95 */
					bool_t BgL_test2679z00_4716;

					{	/* Eval/expanders.scm 95 */
						bool_t BgL_res2121z00_2414;

						BgL_res2121z00_2414 = EPAIRP(BgL_xz00_7);
						BgL_test2679z00_4716 = BgL_res2121z00_2414;
					}
					if (BgL_test2679z00_4716)
						{	/* Eval/expanders.scm 95 */
							BgL_locz00_1172 = CER(((obj_t) BgL_xz00_7));
						}
					else
						{	/* Eval/expanders.scm 95 */
							BgL_locz00_1172 = BFALSE;
						}
				}
				{	/* Eval/expanders.scm 96 */
					bool_t BgL_test2680z00_4720;

					if (PAIRP(BgL_locz00_1172))
						{	/* Eval/expanders.scm 96 */
							bool_t BgL_test2682z00_4723;

							{	/* Eval/expanders.scm 96 */
								obj_t BgL_tmpz00_4724;

								BgL_tmpz00_4724 = CDR(BgL_locz00_1172);
								BgL_test2682z00_4723 = PAIRP(BgL_tmpz00_4724);
							}
							if (BgL_test2682z00_4723)
								{	/* Eval/expanders.scm 96 */
									obj_t BgL_tmpz00_4727;

									BgL_tmpz00_4727 = CDR(CDR(BgL_locz00_1172));
									BgL_test2680z00_4720 = PAIRP(BgL_tmpz00_4727);
								}
							else
								{	/* Eval/expanders.scm 96 */
									BgL_test2680z00_4720 = ((bool_t) 0);
								}
						}
					else
						{	/* Eval/expanders.scm 96 */
							BgL_test2680z00_4720 = ((bool_t) 0);
						}
					if (BgL_test2680z00_4720)
						{	/* Eval/expanders.scm 96 */
							return
								BGl_errorzf2locationzf2zz__errorz00(BgL_pz00_5, BgL_mz00_6,
								BgL_xz00_7, CAR(CDR(BgL_locz00_1172)),
								CAR(CDR(CDR(BgL_locz00_1172))));
						}
					else
						{	/* Eval/expanders.scm 96 */
							return
								BGl_errorz00zz__errorz00(BgL_pz00_5, BgL_mz00_6, BgL_xz00_7);
						}
				}
			}
		}

	}



/* install-all-expanders! */
	BGL_EXPORTED_DEF obj_t
		BGl_installzd2allzd2expandersz12z12zz__install_expandersz00()
	{
		{	/* Eval/expanders.scm 108 */
			if (BGl_za2expanderszd2installedzd2pza2z00zz__install_expandersz00)
				{	/* Eval/expanders.scm 109 */
					return BFALSE;
				}
			else
				{	/* Eval/expanders.scm 109 */
					BGl_za2expanderszd2installedzd2pza2z00zz__install_expandersz00 =
						((bool_t) 1);
					return
						BGl_z52installzd2allzd2expandersz12z40zz__install_expandersz00();
				}
		}

	}



/* &install-all-expanders! */
	obj_t BGl_z62installzd2allzd2expandersz12z70zz__install_expandersz00(obj_t
		BgL_envz00_4042)
	{
		{	/* Eval/expanders.scm 108 */
			return BGl_installzd2allzd2expandersz12z12zz__install_expandersz00();
		}

	}



/* %install-all-expanders! */
	obj_t BGl_z52installzd2allzd2expandersz12z40zz__install_expandersz00()
	{
		{	/* Eval/expanders.scm 122 */
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2380z00zz__install_expandersz00,
				BGl_proc2379z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2383z00zz__install_expandersz00,
				BGl_proc2382z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2386z00zz__install_expandersz00,
				BGl_proc2385z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2389z00zz__install_expandersz00,
				BGl_proc2388z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2392z00zz__install_expandersz00,
				BGl_proc2391z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2395z00zz__install_expandersz00,
				BGl_proc2394z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2398z00zz__install_expandersz00,
				BGl_proc2397z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2401z00zz__install_expandersz00,
				BGl_proc2400z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2404z00zz__install_expandersz00,
				BGl_proc2403z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2407z00zz__install_expandersz00,
				BGl_proc2406z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2410z00zz__install_expandersz00,
				BGl_proc2409z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2413z00zz__install_expandersz00,
				BGl_proc2412z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2416z00zz__install_expandersz00,
				BGl_proc2415z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2419z00zz__install_expandersz00,
				BGl_proc2418z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2422z00zz__install_expandersz00,
				BGl_proc2421z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2424z00zz__install_expandersz00,
				BGl_expandzd2regularzd2grammarzd2envzd2zz__rgc_expandz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2426z00zz__install_expandersz00,
				BGl_expandzd2stringzd2casezd2envzd2zz__rgc_expandz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2428z00zz__install_expandersz00,
				BGl_expandzd2lalrzd2grammarzd2envzd2zz__lalr_expandz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2430z00zz__install_expandersz00,
				BGl_expandzd2beginzd2envz00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2433z00zz__install_expandersz00,
				BGl_proc2432z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2436z00zz__install_expandersz00,
				BGl_proc2435z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2439z00zz__install_expandersz00,
				BGl_proc2438z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2442z00zz__install_expandersz00,
				BGl_proc2441z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2444z00zz__install_expandersz00,
				BGl_expandzd2definezd2recordzd2typezd2envz00zz__expander_recordz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2446z00zz__install_expandersz00,
				BGl_expandzd2argszd2parsezd2envzd2zz__expander_argsz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2448z00zz__install_expandersz00,
				BGl_expandzd2tprintzd2envz00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2450z00zz__install_expandersz00,
				BGl_expandzd2andzd2letza2zd2envz70zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2452z00zz__install_expandersz00,
				BGl_expandzd2definezd2syntaxzd2envzd2zz__r5_macro_4_3_syntaxz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2454z00zz__install_expandersz00,
				BGl_expandzd2letreczd2syntaxzd2envzd2zz__r5_macro_4_3_syntaxz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2456z00zz__install_expandersz00,
				BGl_expandzd2letzd2syntaxzd2envzd2zz__r5_macro_4_3_syntaxz00);
			{	/* Eval/expanders.scm 276 */
				obj_t BgL_arg1433z00_1440;

				BgL_arg1433z00_1440 =
					BGl_makezd2expandzd2whenzd2tracezd2zz__expander_tracez00
					(BGl_symbol2458z00zz__install_expandersz00);
				BGl_installzd2compilerzd2expanderz00zz__macroz00
					(BGl_symbol2460z00zz__install_expandersz00, BgL_arg1433z00_1440);
			}
			{	/* Eval/expanders.scm 277 */
				obj_t BgL_arg1434z00_1441;

				BgL_arg1434z00_1441 =
					BGl_makezd2expandzd2withzd2tracezd2zz__expander_tracez00
					(BGl_symbol2458z00zz__install_expandersz00);
				BGl_installzd2compilerzd2expanderz00zz__macroz00
					(BGl_symbol2462z00zz__install_expandersz00, BgL_arg1434z00_1441);
			}
			{	/* Eval/expanders.scm 278 */
				obj_t BgL_arg1435z00_1442;

				BgL_arg1435z00_1442 =
					BGl_makezd2expandzd2tracezd2itemzd2zz__expander_tracez00
					(BGl_symbol2458z00zz__install_expandersz00);
				BGl_installzd2compilerzd2expanderz00zz__macroz00
					(BGl_symbol2464z00zz__install_expandersz00, BgL_arg1435z00_1442);
			}
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2467z00zz__install_expandersz00,
				BGl_proc2466z00zz__install_expandersz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2470z00zz__install_expandersz00,
				BGl_proc2469z00zz__install_expandersz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2473z00zz__install_expandersz00,
				BGl_proc2472z00zz__install_expandersz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2476z00zz__install_expandersz00,
				BGl_proc2475z00zz__install_expandersz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2479z00zz__install_expandersz00,
				BGl_proc2478z00zz__install_expandersz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2375z00zz__install_expandersz00,
				BGl_expandzd2ifzd2envz00zz__install_expandersz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2377z00zz__install_expandersz00,
				BGl_expandzd2evalzd2lambdazd2envzd2zz__expander_definez00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2481z00zz__install_expandersz00,
				BGl_expandzd2evalzd2letzd2envzd2zz__expander_letz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2483z00zz__install_expandersz00,
				BGl_expandzd2evalzd2letza2zd2envz70zz__expander_letz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2485z00zz__install_expandersz00,
				BGl_expandzd2evalzd2letreczd2envzd2zz__expander_letz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2487z00zz__install_expandersz00,
				BGl_expandzd2evalzd2letrecza2zd2envz70zz__expander_letz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2489z00zz__install_expandersz00,
				BGl_expandzd2evalzd2labelszd2envzd2zz__expander_letz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2491z00zz__install_expandersz00,
				BGl_expandzd2evalzd2definezd2envzd2zz__expander_definez00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2493z00zz__install_expandersz00,
				BGl_expandzd2evalzd2definezd2inlinezd2envz00zz__expander_definez00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2495z00zz__install_expandersz00,
				BGl_expandzd2evalzd2definezd2genericzd2envz00zz__expander_definez00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2497z00zz__install_expandersz00,
				BGl_expandzd2evalzd2definezd2methodzd2envz00zz__expander_definez00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2499z00zz__install_expandersz00,
				BGl_expandzd2evalzd2definezd2structzd2envz00zz__expander_structz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2501z00zz__install_expandersz00,
				BGl_expandzd2evalzd2casezd2envzd2zz__expander_casez00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2503z00zz__install_expandersz00,
				BGl_expandzd2evalzd2condzd2expandzd2envz00zz__expander_srfi0z00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2506z00zz__install_expandersz00,
				BGl_proc2505z00zz__install_expandersz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2509z00zz__install_expandersz00,
				BGl_proc2508z00zz__install_expandersz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2512z00zz__install_expandersz00,
				BGl_proc2511z00zz__install_expandersz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2514z00zz__install_expandersz00,
				BGl_evalzd2cozd2instantiatezd2expanderzd2envz00zz__evobjectz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2517z00zz__install_expandersz00,
				BGl_proc2516z00zz__install_expandersz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2519z00zz__install_expandersz00,
				BGl_proc2516z00zz__install_expandersz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2521z00zz__install_expandersz00,
				BGl_proc2516z00zz__install_expandersz00);
			{	/* Eval/expanders.scm 461 */
				obj_t BgL_arg1659z00_1809;

				BgL_arg1659z00_1809 =
					BGl_makezd2expandzd2whenzd2tracezd2zz__expander_tracez00
					(BGl_symbol2523z00zz__install_expandersz00);
				BGl_installzd2evalzd2expanderz00zz__macroz00
					(BGl_symbol2460z00zz__install_expandersz00, BgL_arg1659z00_1809);
			}
			{	/* Eval/expanders.scm 462 */
				obj_t BgL_arg1660z00_1810;

				BgL_arg1660z00_1810 =
					BGl_makezd2expandzd2withzd2tracezd2zz__expander_tracez00
					(BGl_symbol2523z00zz__install_expandersz00);
				BGl_installzd2evalzd2expanderz00zz__macroz00
					(BGl_symbol2462z00zz__install_expandersz00, BgL_arg1660z00_1810);
			}
			{	/* Eval/expanders.scm 463 */
				obj_t BgL_arg1661z00_1811;

				BgL_arg1661z00_1811 =
					BGl_makezd2expandzd2tracezd2itemzd2zz__expander_tracez00
					(BGl_symbol2523z00zz__install_expandersz00);
				return
					BGl_installzd2evalzd2expanderz00zz__macroz00
					(BGl_symbol2464z00zz__install_expandersz00, BgL_arg1661z00_1811);
			}
		}

	}



/* &e */
	obj_t BGl_z62ez62zz__install_expandersz00(obj_t BgL_envz00_4071,
		obj_t BgL_xz00_4072, obj_t BgL_ez00_4073)
	{
		{	/* Eval/expanders.scm 455 */
			{	/* Eval/expanders.scm 455 */
				obj_t BgL_arg1658z00_4233;

				BgL_arg1658z00_4233 =
					BGl_evmodulezd2staticzd2classz00zz__evmodulez00(BgL_xz00_4072);
				return
					PROCEDURE_ENTRY(BgL_ez00_4073) (BgL_ez00_4073, BgL_arg1658z00_4233,
					BgL_ez00_4073, BEOA);
			}
		}

	}



/* &<@anonymous:1653> */
	obj_t BGl_z62zc3z04anonymousza31653ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4074, obj_t BgL_xz00_4075, obj_t BgL_ez00_4076)
	{
		{	/* Eval/expanders.scm 446 */
			if (PAIRP(BgL_xz00_4075))
				{	/* Eval/expanders.scm 446 */
					return
						BGl_expandzd2errorzd2zz__install_expandersz00(CAR(BgL_xz00_4075),
						BGl_string2525z00zz__install_expandersz00, BgL_xz00_4075);
				}
			else
				{	/* Eval/expanders.scm 446 */
					return BFALSE;
				}
		}

	}



/* &<@anonymous:1649> */
	obj_t BGl_z62zc3z04anonymousza31649ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4077, obj_t BgL_xz00_4078, obj_t BgL_ez00_4079)
	{
		{	/* Eval/expanders.scm 439 */
			if (PAIRP(BgL_xz00_4078))
				{	/* Eval/expanders.scm 439 */
					return
						BGl_expandzd2errorzd2zz__install_expandersz00(CAR(BgL_xz00_4078),
						BGl_string2525z00zz__install_expandersz00, BgL_xz00_4078);
				}
			else
				{	/* Eval/expanders.scm 439 */
					return BFALSE;
				}
		}

	}



/* &<@anonymous:1608> */
	obj_t BGl_z62zc3z04anonymousza31608ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4080, obj_t BgL_xz00_4081, obj_t BgL_ez00_4082)
	{
		{	/* Eval/expanders.scm 410 */
			{
				obj_t BgL_lblz00_4235;
				obj_t BgL_exprsz00_4236;

				if (PAIRP(BgL_xz00_4081))
					{	/* Eval/expanders.scm 410 */
						obj_t BgL_cdrzd2326zd2_4274;

						BgL_cdrzd2326zd2_4274 = CDR(BgL_xz00_4081);
						if (PAIRP(BgL_cdrzd2326zd2_4274))
							{	/* Eval/expanders.scm 410 */
								obj_t BgL_carzd2329zd2_4275;

								BgL_carzd2329zd2_4275 = CAR(BgL_cdrzd2326zd2_4274);
								if (SYMBOLP(BgL_carzd2329zd2_4275))
									{	/* Eval/expanders.scm 410 */
										BgL_lblz00_4235 = BgL_carzd2329zd2_4275;
										BgL_exprsz00_4236 = CDR(BgL_cdrzd2326zd2_4274);
										{	/* Eval/expanders.scm 413 */
											obj_t BgL_laz00_4237;

											{	/* Eval/expanders.scm 413 */
												obj_t BgL_arg1644z00_4238;

												BgL_arg1644z00_4238 =
													MAKE_YOUNG_PAIR(BNIL,
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_exprsz00_4236, BNIL));
												BgL_laz00_4237 =
													MAKE_YOUNG_PAIR
													(BGl_symbol2377z00zz__install_expandersz00,
													BgL_arg1644z00_4238);
											}
											{	/* Eval/expanders.scm 413 */
												obj_t BgL_lamz00_4239;

												{	/* Eval/expanders.scm 414 */
													bool_t BgL_test2689z00_4834;

													{	/* Eval/expanders.scm 414 */
														bool_t BgL_res2224z00_4240;

														BgL_res2224z00_4240 = EPAIRP(BgL_xz00_4081);
														BgL_test2689z00_4834 = BgL_res2224z00_4240;
													}
													if (BgL_test2689z00_4834)
														{	/* Eval/expanders.scm 415 */
															obj_t BgL_arg1641z00_4241;
															obj_t BgL_arg1642z00_4242;
															obj_t BgL_arg1643z00_4243;

															BgL_arg1641z00_4241 = CAR(BgL_laz00_4237);
															BgL_arg1642z00_4242 = CDR(BgL_laz00_4237);
															BgL_arg1643z00_4243 =
																CER(((obj_t) BgL_xz00_4081));
															{	/* Eval/expanders.scm 415 */
																obj_t BgL_res2225z00_4244;

																BgL_res2225z00_4244 =
																	MAKE_YOUNG_EPAIR(BgL_arg1641z00_4241,
																	BgL_arg1642z00_4242, BgL_arg1643z00_4243);
																BgL_lamz00_4239 = BgL_res2225z00_4244;
															}
														}
													else
														{	/* Eval/expanders.scm 414 */
															BgL_lamz00_4239 = BgL_laz00_4237;
														}
												}
												{	/* Eval/expanders.scm 414 */
													obj_t BgL_valz00_4245;

													BgL_valz00_4245 =
														BGl_gensymz00zz__r4_symbols_6_4z00
														(BGl_symbol2526z00zz__install_expandersz00);
													{	/* Eval/expanders.scm 419 */
														obj_t BgL_auxz00_4246;

														{	/* Eval/expanders.scm 421 */
															obj_t BgL_arg1617z00_4247;

															{	/* Eval/expanders.scm 421 */
																obj_t BgL_arg1618z00_4248;
																obj_t BgL_arg1619z00_4249;

																{	/* Eval/expanders.scm 421 */
																	obj_t BgL_arg1620z00_4250;

																	{	/* Eval/expanders.scm 421 */
																		obj_t BgL_arg1621z00_4251;

																		BgL_arg1621z00_4251 =
																			MAKE_YOUNG_PAIR(BgL_lamz00_4239, BNIL);
																		BgL_arg1620z00_4250 =
																			MAKE_YOUNG_PAIR(BgL_lblz00_4235,
																			BgL_arg1621z00_4251);
																	}
																	BgL_arg1618z00_4248 =
																		MAKE_YOUNG_PAIR(BgL_arg1620z00_4250, BNIL);
																}
																{	/* Eval/expanders.scm 423 */
																	obj_t BgL_arg1623z00_4252;
																	obj_t BgL_arg1624z00_4253;

																	{	/* Eval/expanders.scm 423 */
																		obj_t BgL_arg1626z00_4254;

																		{	/* Eval/expanders.scm 423 */
																			obj_t BgL_arg1627z00_4255;
																			obj_t BgL_arg1628z00_4256;

																			{	/* Eval/expanders.scm 423 */
																				obj_t BgL_res2226z00_4257;

																				{	/* Eval/expanders.scm 423 */
																					obj_t BgL_arg1948z00_4258;

																					BgL_arg1948z00_4258 =
																						SYMBOL_TO_STRING(BgL_lblz00_4235);
																					BgL_res2226z00_4257 =
																						BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																						(BgL_arg1948z00_4258);
																				}
																				BgL_arg1627z00_4255 =
																					BgL_res2226z00_4257;
																			}
																			BgL_arg1628z00_4256 =
																				MAKE_YOUNG_PAIR(BgL_lblz00_4235, BNIL);
																			BgL_arg1626z00_4254 =
																				MAKE_YOUNG_PAIR(BgL_arg1627z00_4255,
																				BgL_arg1628z00_4256);
																		}
																		BgL_arg1623z00_4252 =
																			MAKE_YOUNG_PAIR
																			(BGl_symbol2528z00zz__install_expandersz00,
																			BgL_arg1626z00_4254);
																	}
																	{	/* Eval/expanders.scm 425 */
																		obj_t BgL_arg1629z00_4259;

																		{	/* Eval/expanders.scm 425 */
																			obj_t BgL_arg1630z00_4260;

																			{	/* Eval/expanders.scm 425 */
																				obj_t BgL_arg1631z00_4261;
																				obj_t BgL_arg1632z00_4262;

																				{	/* Eval/expanders.scm 425 */
																					obj_t BgL_arg1633z00_4263;

																					{	/* Eval/expanders.scm 425 */
																						obj_t BgL_arg1634z00_4264;

																						{	/* Eval/expanders.scm 425 */
																							obj_t BgL_arg1635z00_4265;

																							BgL_arg1635z00_4265 =
																								MAKE_YOUNG_PAIR(BgL_lblz00_4235,
																								BNIL);
																							BgL_arg1634z00_4264 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1635z00_4265, BNIL);
																						}
																						BgL_arg1633z00_4263 =
																							MAKE_YOUNG_PAIR(BgL_valz00_4245,
																							BgL_arg1634z00_4264);
																					}
																					BgL_arg1631z00_4261 =
																						MAKE_YOUNG_PAIR(BgL_arg1633z00_4263,
																						BNIL);
																				}
																				{	/* Eval/expanders.scm 426 */
																					obj_t BgL_arg1637z00_4266;
																					obj_t BgL_arg1639z00_4267;

																					BgL_arg1637z00_4266 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol2530z00zz__install_expandersz00,
																						BNIL);
																					BgL_arg1639z00_4267 =
																						MAKE_YOUNG_PAIR(BgL_valz00_4245,
																						BNIL);
																					BgL_arg1632z00_4262 =
																						MAKE_YOUNG_PAIR(BgL_arg1637z00_4266,
																						BgL_arg1639z00_4267);
																				}
																				BgL_arg1630z00_4260 =
																					MAKE_YOUNG_PAIR(BgL_arg1631z00_4261,
																					BgL_arg1632z00_4262);
																			}
																			BgL_arg1629z00_4259 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol2481z00zz__install_expandersz00,
																				BgL_arg1630z00_4260);
																		}
																		BgL_arg1624z00_4253 =
																			MAKE_YOUNG_PAIR(BgL_arg1629z00_4259,
																			BNIL);
																	}
																	BgL_arg1619z00_4249 =
																		MAKE_YOUNG_PAIR(BgL_arg1623z00_4252,
																		BgL_arg1624z00_4253);
																}
																BgL_arg1617z00_4247 =
																	MAKE_YOUNG_PAIR(BgL_arg1618z00_4248,
																	BgL_arg1619z00_4249);
															}
															BgL_auxz00_4246 =
																MAKE_YOUNG_PAIR
																(BGl_symbol2481z00zz__install_expandersz00,
																BgL_arg1617z00_4247);
														}
														{	/* Eval/expanders.scm 421 */
															obj_t BgL_resz00_4268;

															{	/* Eval/expanders.scm 428 */
																bool_t BgL_test2690z00_4863;

																{	/* Eval/expanders.scm 428 */
																	bool_t BgL_res2227z00_4269;

																	BgL_res2227z00_4269 = EPAIRP(BgL_xz00_4081);
																	BgL_test2690z00_4863 = BgL_res2227z00_4269;
																}
																if (BgL_test2690z00_4863)
																	{	/* Eval/expanders.scm 429 */
																		obj_t BgL_arg1614z00_4270;
																		obj_t BgL_arg1615z00_4271;
																		obj_t BgL_arg1616z00_4272;

																		BgL_arg1614z00_4270 = CAR(BgL_auxz00_4246);
																		BgL_arg1615z00_4271 = CDR(BgL_auxz00_4246);
																		BgL_arg1616z00_4272 =
																			CER(((obj_t) BgL_xz00_4081));
																		{	/* Eval/expanders.scm 429 */
																			obj_t BgL_res2228z00_4273;

																			BgL_res2228z00_4273 =
																				MAKE_YOUNG_EPAIR(BgL_arg1614z00_4270,
																				BgL_arg1615z00_4271,
																				BgL_arg1616z00_4272);
																			BgL_resz00_4268 = BgL_res2228z00_4273;
																		}
																	}
																else
																	{	/* Eval/expanders.scm 428 */
																		BgL_resz00_4268 = BgL_auxz00_4246;
																	}
															}
															{	/* Eval/expanders.scm 428 */

																return
																	PROCEDURE_ENTRY(BgL_ez00_4082) (BgL_ez00_4082,
																	BgL_auxz00_4246, BgL_ez00_4082, BEOA);
															}
														}
													}
												}
											}
										}
									}
								else
									{	/* Eval/expanders.scm 410 */
										return
											BGl_expandzd2errorzd2zz__install_expandersz00
											(BGl_string2507z00zz__install_expandersz00,
											BGl_string2532z00zz__install_expandersz00, BgL_xz00_4081);
									}
							}
						else
							{	/* Eval/expanders.scm 410 */
								return
									BGl_expandzd2errorzd2zz__install_expandersz00
									(BGl_string2507z00zz__install_expandersz00,
									BGl_string2532z00zz__install_expandersz00, BgL_xz00_4081);
							}
					}
				else
					{	/* Eval/expanders.scm 410 */
						return
							BGl_expandzd2errorzd2zz__install_expandersz00
							(BGl_string2507z00zz__install_expandersz00,
							BGl_string2532z00zz__install_expandersz00, BgL_xz00_4081);
					}
			}
		}

	}



/* &<@anonymous:1517> */
	obj_t BGl_z62zc3z04anonymousza31517ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4083, obj_t BgL_xz00_4084, obj_t BgL_ez00_4085)
	{
		{	/* Eval/expanders.scm 348 */
			{
				obj_t BgL_zf3zd2z21_4277;
				obj_t BgL_varsz00_4278;
				obj_t BgL_producerz00_4279;
				obj_t BgL_exprsz00_4280;

				if (PAIRP(BgL_xz00_4084))
					{	/* Eval/expanders.scm 348 */
						obj_t BgL_cdrzd2295zd2_4371;

						BgL_cdrzd2295zd2_4371 = CDR(BgL_xz00_4084);
						if (PAIRP(BgL_cdrzd2295zd2_4371))
							{	/* Eval/expanders.scm 348 */
								obj_t BgL_carzd2300zd2_4372;
								obj_t BgL_cdrzd2301zd2_4373;

								BgL_carzd2300zd2_4372 = CAR(BgL_cdrzd2295zd2_4371);
								BgL_cdrzd2301zd2_4373 = CDR(BgL_cdrzd2295zd2_4371);
								{	/* Eval/expanders.scm 348 */
									bool_t BgL_test2693z00_4886;

									{
										obj_t BgL_l1132z00_4375;

										BgL_l1132z00_4375 = BgL_carzd2300zd2_4372;
									BgL_zc3z04anonymousza31531ze3z87_4374:
										if (NULLP(BgL_l1132z00_4375))
											{	/* Eval/expanders.scm 348 */
												BgL_test2693z00_4886 = ((bool_t) 1);
											}
										else
											{	/* Eval/expanders.scm 348 */
												bool_t BgL_test2695z00_4889;

												{	/* Eval/expanders.scm 348 */
													obj_t BgL_tmpz00_4890;

													BgL_tmpz00_4890 = CAR(((obj_t) BgL_l1132z00_4375));
													BgL_test2695z00_4889 = SYMBOLP(BgL_tmpz00_4890);
												}
												if (BgL_test2695z00_4889)
													{
														obj_t BgL_l1132z00_4894;

														BgL_l1132z00_4894 =
															CDR(((obj_t) BgL_l1132z00_4375));
														BgL_l1132z00_4375 = BgL_l1132z00_4894;
														goto BgL_zc3z04anonymousza31531ze3z87_4374;
													}
												else
													{	/* Eval/expanders.scm 348 */
														BgL_test2693z00_4886 = ((bool_t) 0);
													}
											}
									}
									if (BgL_test2693z00_4886)
										{	/* Eval/expanders.scm 348 */
											if (PAIRP(BgL_cdrzd2301zd2_4373))
												{	/* Eval/expanders.scm 348 */
													BgL_zf3zd2z21_4277 = BgL_carzd2300zd2_4372;
													BgL_varsz00_4278 = BgL_carzd2300zd2_4372;
													BgL_producerz00_4279 = CAR(BgL_cdrzd2301zd2_4373);
													BgL_exprsz00_4280 = CDR(BgL_cdrzd2301zd2_4373);
													{	/* Eval/expanders.scm 352 */
														obj_t BgL_tmpsz00_4281;

														if (NULLP(BgL_varsz00_4278))
															{	/* Eval/expanders.scm 352 */
																BgL_tmpsz00_4281 = BNIL;
															}
														else
															{	/* Eval/expanders.scm 352 */
																obj_t BgL_head1105z00_4282;

																{	/* Eval/expanders.scm 352 */
																	obj_t BgL_arg1605z00_4283;

																	{	/* Eval/expanders.scm 352 */
																		obj_t BgL_arg1606z00_4284;

																		BgL_arg1606z00_4284 =
																			CAR(((obj_t) BgL_varsz00_4278));
																		BgL_arg1605z00_4283 =
																			BGl_gensymz00zz__r4_symbols_6_4z00
																			(BgL_arg1606z00_4284);
																	}
																	{	/* Eval/expanders.scm 352 */
																		obj_t BgL_res2188z00_4285;

																		BgL_res2188z00_4285 =
																			MAKE_YOUNG_PAIR(BgL_arg1605z00_4283,
																			BNIL);
																		BgL_head1105z00_4282 = BgL_res2188z00_4285;
																	}
																}
																{	/* Eval/expanders.scm 352 */
																	obj_t BgL_g1108z00_4286;

																	BgL_g1108z00_4286 =
																		CDR(((obj_t) BgL_varsz00_4278));
																	{
																		obj_t BgL_l1103z00_4288;
																		obj_t BgL_tail1106z00_4289;

																		BgL_l1103z00_4288 = BgL_g1108z00_4286;
																		BgL_tail1106z00_4289 = BgL_head1105z00_4282;
																	BgL_zc3z04anonymousza31600ze3z87_4287:
																		if (NULLP(BgL_l1103z00_4288))
																			{	/* Eval/expanders.scm 352 */
																				BgL_tmpsz00_4281 = BgL_head1105z00_4282;
																			}
																		else
																			{	/* Eval/expanders.scm 352 */
																				obj_t BgL_newtail1107z00_4290;

																				{	/* Eval/expanders.scm 352 */
																					obj_t BgL_arg1603z00_4291;

																					{	/* Eval/expanders.scm 352 */
																						obj_t BgL_arg1604z00_4292;

																						BgL_arg1604z00_4292 =
																							CAR(((obj_t) BgL_l1103z00_4288));
																						BgL_arg1603z00_4291 =
																							BGl_gensymz00zz__r4_symbols_6_4z00
																							(BgL_arg1604z00_4292);
																					}
																					{	/* Eval/expanders.scm 352 */
																						obj_t BgL_res2194z00_4293;

																						BgL_res2194z00_4293 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1603z00_4291, BNIL);
																						BgL_newtail1107z00_4290 =
																							BgL_res2194z00_4293;
																					}
																				}
																				SET_CDR(BgL_tail1106z00_4289,
																					BgL_newtail1107z00_4290);
																				{	/* Eval/expanders.scm 352 */
																					obj_t BgL_arg1602z00_4294;

																					BgL_arg1602z00_4294 =
																						CDR(((obj_t) BgL_l1103z00_4288));
																					{
																						obj_t BgL_tail1106z00_4917;
																						obj_t BgL_l1103z00_4916;

																						BgL_l1103z00_4916 =
																							BgL_arg1602z00_4294;
																						BgL_tail1106z00_4917 =
																							BgL_newtail1107z00_4290;
																						BgL_tail1106z00_4289 =
																							BgL_tail1106z00_4917;
																						BgL_l1103z00_4288 =
																							BgL_l1103z00_4916;
																						goto
																							BgL_zc3z04anonymousza31600ze3z87_4287;
																					}
																				}
																			}
																	}
																}
															}
														{	/* Eval/expanders.scm 352 */
															obj_t BgL_tmps2z00_4295;

															if (NULLP(BgL_varsz00_4278))
																{	/* Eval/expanders.scm 353 */
																	BgL_tmps2z00_4295 = BNIL;
																}
															else
																{	/* Eval/expanders.scm 353 */
																	obj_t BgL_head1111z00_4296;

																	{	/* Eval/expanders.scm 353 */
																		obj_t BgL_arg1597z00_4297;

																		{	/* Eval/expanders.scm 353 */
																			obj_t BgL_arg1598z00_4298;

																			BgL_arg1598z00_4298 =
																				CAR(((obj_t) BgL_varsz00_4278));
																			BgL_arg1597z00_4297 =
																				BGl_gensymz00zz__r4_symbols_6_4z00
																				(BgL_arg1598z00_4298);
																		}
																		{	/* Eval/expanders.scm 353 */
																			obj_t BgL_res2196z00_4299;

																			BgL_res2196z00_4299 =
																				MAKE_YOUNG_PAIR(BgL_arg1597z00_4297,
																				BNIL);
																			BgL_head1111z00_4296 =
																				BgL_res2196z00_4299;
																		}
																	}
																	{	/* Eval/expanders.scm 353 */
																		obj_t BgL_g1114z00_4300;

																		BgL_g1114z00_4300 =
																			CDR(((obj_t) BgL_varsz00_4278));
																		{
																			obj_t BgL_l1109z00_4302;
																			obj_t BgL_tail1112z00_4303;

																			BgL_l1109z00_4302 = BgL_g1114z00_4300;
																			BgL_tail1112z00_4303 =
																				BgL_head1111z00_4296;
																		BgL_zc3z04anonymousza31589ze3z87_4301:
																			if (NULLP(BgL_l1109z00_4302))
																				{	/* Eval/expanders.scm 353 */
																					BgL_tmps2z00_4295 =
																						BgL_head1111z00_4296;
																				}
																			else
																				{	/* Eval/expanders.scm 353 */
																					obj_t BgL_newtail1113z00_4304;

																					{	/* Eval/expanders.scm 353 */
																						obj_t BgL_arg1593z00_4305;

																						{	/* Eval/expanders.scm 353 */
																							obj_t BgL_arg1596z00_4306;

																							BgL_arg1596z00_4306 =
																								CAR(
																								((obj_t) BgL_l1109z00_4302));
																							BgL_arg1593z00_4305 =
																								BGl_gensymz00zz__r4_symbols_6_4z00
																								(BgL_arg1596z00_4306);
																						}
																						{	/* Eval/expanders.scm 353 */
																							obj_t BgL_res2202z00_4307;

																							BgL_res2202z00_4307 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1593z00_4305, BNIL);
																							BgL_newtail1113z00_4304 =
																								BgL_res2202z00_4307;
																						}
																					}
																					SET_CDR(BgL_tail1112z00_4303,
																						BgL_newtail1113z00_4304);
																					{	/* Eval/expanders.scm 353 */
																						obj_t BgL_arg1592z00_4308;

																						BgL_arg1592z00_4308 =
																							CDR(((obj_t) BgL_l1109z00_4302));
																						{
																							obj_t BgL_tail1112z00_4936;
																							obj_t BgL_l1109z00_4935;

																							BgL_l1109z00_4935 =
																								BgL_arg1592z00_4308;
																							BgL_tail1112z00_4936 =
																								BgL_newtail1113z00_4304;
																							BgL_tail1112z00_4303 =
																								BgL_tail1112z00_4936;
																							BgL_l1109z00_4302 =
																								BgL_l1109z00_4935;
																							goto
																								BgL_zc3z04anonymousza31589ze3z87_4301;
																						}
																					}
																				}
																		}
																	}
																}
															{	/* Eval/expanders.scm 353 */
																obj_t BgL_nxz00_4309;

																{	/* Eval/expanders.scm 354 */
																	obj_t BgL_arg1535z00_4310;

																	{	/* Eval/expanders.scm 354 */
																		obj_t BgL_arg1536z00_4311;
																		obj_t BgL_arg1537z00_4312;

																		{	/* Eval/expanders.scm 354 */
																			obj_t BgL_arg1540z00_4313;

																			if (NULLP(BgL_tmpsz00_4281))
																				{	/* Eval/expanders.scm 354 */
																					BgL_arg1540z00_4313 = BNIL;
																				}
																			else
																				{	/* Eval/expanders.scm 354 */
																					obj_t BgL_head1117z00_4314;

																					{	/* Eval/expanders.scm 354 */
																						obj_t BgL_res2204z00_4315;

																						BgL_res2204z00_4315 =
																							MAKE_YOUNG_PAIR(BNIL, BNIL);
																						BgL_head1117z00_4314 =
																							BgL_res2204z00_4315;
																					}
																					{
																						obj_t BgL_l1115z00_4317;
																						obj_t BgL_tail1118z00_4318;

																						BgL_l1115z00_4317 =
																							BgL_tmpsz00_4281;
																						BgL_tail1118z00_4318 =
																							BgL_head1117z00_4314;
																					BgL_zc3z04anonymousza31542ze3z87_4316:
																						if (NULLP
																							(BgL_l1115z00_4317))
																							{	/* Eval/expanders.scm 354 */
																								BgL_arg1540z00_4313 =
																									CDR(BgL_head1117z00_4314);
																							}
																						else
																							{	/* Eval/expanders.scm 354 */
																								obj_t BgL_newtail1119z00_4319;

																								{	/* Eval/expanders.scm 354 */
																									obj_t BgL_arg1545z00_4320;

																									{	/* Eval/expanders.scm 354 */
																										obj_t BgL_vz00_4321;

																										BgL_vz00_4321 =
																											CAR(
																											((obj_t)
																												BgL_l1115z00_4317));
																										{	/* Eval/expanders.scm 354 */
																											obj_t BgL_arg1546z00_4322;

																											BgL_arg1546z00_4322 =
																												MAKE_YOUNG_PAIR(BUNSPEC,
																												BNIL);
																											BgL_arg1545z00_4320 =
																												MAKE_YOUNG_PAIR
																												(BgL_vz00_4321,
																												BgL_arg1546z00_4322);
																										}
																									}
																									{	/* Eval/expanders.scm 354 */
																										obj_t BgL_res2206z00_4323;

																										BgL_res2206z00_4323 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1545z00_4320,
																											BNIL);
																										BgL_newtail1119z00_4319 =
																											BgL_res2206z00_4323;
																									}
																								}
																								SET_CDR(BgL_tail1118z00_4318,
																									BgL_newtail1119z00_4319);
																								{	/* Eval/expanders.scm 354 */
																									obj_t BgL_arg1544z00_4324;

																									BgL_arg1544z00_4324 =
																										CDR(
																										((obj_t)
																											BgL_l1115z00_4317));
																									{
																										obj_t BgL_tail1118z00_4952;
																										obj_t BgL_l1115z00_4951;

																										BgL_l1115z00_4951 =
																											BgL_arg1544z00_4324;
																										BgL_tail1118z00_4952 =
																											BgL_newtail1119z00_4319;
																										BgL_tail1118z00_4318 =
																											BgL_tail1118z00_4952;
																										BgL_l1115z00_4317 =
																											BgL_l1115z00_4951;
																										goto
																											BgL_zc3z04anonymousza31542ze3z87_4316;
																									}
																								}
																							}
																					}
																				}
																			BgL_arg1536z00_4311 =
																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg1540z00_4313, BNIL);
																		}
																		{	/* Eval/expanders.scm 356 */
																			obj_t BgL_arg1547z00_4325;
																			obj_t BgL_arg1551z00_4326;

																			{	/* Eval/expanders.scm 356 */
																				obj_t BgL_arg1552z00_4327;

																				{	/* Eval/expanders.scm 356 */
																					obj_t BgL_arg1553z00_4328;
																					obj_t BgL_arg1554z00_4329;

																					{	/* Eval/expanders.scm 356 */
																						obj_t BgL_arg1556z00_4330;

																						{	/* Eval/expanders.scm 356 */
																							obj_t BgL_arg1557z00_4331;

																							BgL_arg1557z00_4331 =
																								MAKE_YOUNG_PAIR
																								(BgL_producerz00_4279, BNIL);
																							BgL_arg1556z00_4330 =
																								MAKE_YOUNG_PAIR(BNIL,
																								BgL_arg1557z00_4331);
																						}
																						BgL_arg1553z00_4328 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2377z00zz__install_expandersz00,
																							BgL_arg1556z00_4330);
																					}
																					{	/* Eval/expanders.scm 358 */
																						obj_t BgL_arg1558z00_4332;

																						{	/* Eval/expanders.scm 358 */
																							obj_t BgL_arg1560z00_4333;

																							{	/* Eval/expanders.scm 358 */
																								obj_t BgL_arg1561z00_4334;

																								{	/* Eval/expanders.scm 358 */
																									obj_t BgL_arg1562z00_4335;

																									if (NULLP(BgL_tmpsz00_4281))
																										{	/* Eval/expanders.scm 358 */
																											BgL_arg1562z00_4335 =
																												BNIL;
																										}
																									else
																										{	/* Eval/expanders.scm 358 */
																											obj_t
																												BgL_head1122z00_4336;
																											{	/* Eval/expanders.scm 358 */
																												obj_t
																													BgL_res2208z00_4337;
																												BgL_res2208z00_4337 =
																													MAKE_YOUNG_PAIR(BNIL,
																													BNIL);
																												BgL_head1122z00_4336 =
																													BgL_res2208z00_4337;
																											}
																											{
																												obj_t
																													BgL_ll1120z00_4339;
																												obj_t
																													BgL_ll1121z00_4340;
																												obj_t
																													BgL_tail1123z00_4341;
																												BgL_ll1120z00_4339 =
																													BgL_tmpsz00_4281;
																												BgL_ll1121z00_4340 =
																													BgL_tmps2z00_4295;
																												BgL_tail1123z00_4341 =
																													BgL_head1122z00_4336;
																											BgL_zc3z04anonymousza31564ze3z87_4338:
																												if (NULLP
																													(BgL_ll1120z00_4339))
																													{	/* Eval/expanders.scm 358 */
																														BgL_arg1562z00_4335
																															=
																															CDR
																															(BgL_head1122z00_4336);
																													}
																												else
																													{	/* Eval/expanders.scm 358 */
																														obj_t
																															BgL_newtail1124z00_4342;
																														{	/* Eval/expanders.scm 358 */
																															obj_t
																																BgL_arg1568z00_4343;
																															{	/* Eval/expanders.scm 358 */
																																obj_t
																																	BgL_vz00_4344;
																																obj_t
																																	BgL_tz00_4345;
																																BgL_vz00_4344 =
																																	CAR(((obj_t)
																																		BgL_ll1120z00_4339));
																																BgL_tz00_4345 =
																																	CAR(((obj_t)
																																		BgL_ll1121z00_4340));
																																{	/* Eval/expanders.scm 358 */
																																	obj_t
																																		BgL_arg1569z00_4346;
																																	{	/* Eval/expanders.scm 358 */
																																		obj_t
																																			BgL_arg1570z00_4347;
																																		BgL_arg1570z00_4347
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_tz00_4345,
																																			BNIL);
																																		BgL_arg1569z00_4346
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_vz00_4344,
																																			BgL_arg1570z00_4347);
																																	}
																																	BgL_arg1568z00_4343
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_symbol2533z00zz__install_expandersz00,
																																		BgL_arg1569z00_4346);
																																}
																															}
																															{	/* Eval/expanders.scm 358 */
																																obj_t
																																	BgL_res2210z00_4348;
																																BgL_res2210z00_4348
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1568z00_4343,
																																	BNIL);
																																BgL_newtail1124z00_4342
																																	=
																																	BgL_res2210z00_4348;
																															}
																														}
																														SET_CDR
																															(BgL_tail1123z00_4341,
																															BgL_newtail1124z00_4342);
																														{	/* Eval/expanders.scm 358 */
																															obj_t
																																BgL_arg1566z00_4349;
																															obj_t
																																BgL_arg1567z00_4350;
																															BgL_arg1566z00_4349
																																=
																																CDR(((obj_t)
																																	BgL_ll1120z00_4339));
																															BgL_arg1567z00_4350
																																=
																																CDR(((obj_t)
																																	BgL_ll1121z00_4340));
																															{
																																obj_t
																																	BgL_tail1123z00_4978;
																																obj_t
																																	BgL_ll1121z00_4977;
																																obj_t
																																	BgL_ll1120z00_4976;
																																BgL_ll1120z00_4976
																																	=
																																	BgL_arg1566z00_4349;
																																BgL_ll1121z00_4977
																																	=
																																	BgL_arg1567z00_4350;
																																BgL_tail1123z00_4978
																																	=
																																	BgL_newtail1124z00_4342;
																																BgL_tail1123z00_4341
																																	=
																																	BgL_tail1123z00_4978;
																																BgL_ll1121z00_4340
																																	=
																																	BgL_ll1121z00_4977;
																																BgL_ll1120z00_4339
																																	=
																																	BgL_ll1120z00_4976;
																																goto
																																	BgL_zc3z04anonymousza31564ze3z87_4338;
																															}
																														}
																													}
																											}
																										}
																									BgL_arg1561z00_4334 =
																										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg1562z00_4335, BNIL);
																								}
																								BgL_arg1560z00_4333 =
																									MAKE_YOUNG_PAIR
																									(BgL_tmps2z00_4295,
																									BgL_arg1561z00_4334);
																							}
																							BgL_arg1558z00_4332 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2377z00zz__install_expandersz00,
																								BgL_arg1560z00_4333);
																						}
																						BgL_arg1554z00_4329 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1558z00_4332, BNIL);
																					}
																					BgL_arg1552z00_4327 =
																						MAKE_YOUNG_PAIR(BgL_arg1553z00_4328,
																						BgL_arg1554z00_4329);
																				}
																				BgL_arg1547z00_4325 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2535z00zz__install_expandersz00,
																					BgL_arg1552z00_4327);
																			}
																			{	/* Eval/expanders.scm 360 */
																				obj_t BgL_arg1573z00_4351;

																				{	/* Eval/expanders.scm 360 */
																					obj_t BgL_arg1574z00_4352;

																					{	/* Eval/expanders.scm 360 */
																						obj_t BgL_arg1575z00_4353;
																						obj_t BgL_arg1577z00_4354;

																						{	/* Eval/expanders.scm 360 */
																							obj_t BgL_arg1578z00_4355;

																							if (NULLP(BgL_varsz00_4278))
																								{	/* Eval/expanders.scm 360 */
																									BgL_arg1578z00_4355 = BNIL;
																								}
																							else
																								{	/* Eval/expanders.scm 360 */
																									obj_t BgL_head1128z00_4356;

																									{	/* Eval/expanders.scm 360 */
																										obj_t BgL_res2212z00_4357;

																										BgL_res2212z00_4357 =
																											MAKE_YOUNG_PAIR(BNIL,
																											BNIL);
																										BgL_head1128z00_4356 =
																											BgL_res2212z00_4357;
																									}
																									{
																										obj_t BgL_ll1126z00_4359;
																										obj_t BgL_ll1127z00_4360;
																										obj_t BgL_tail1129z00_4361;

																										BgL_ll1126z00_4359 =
																											BgL_varsz00_4278;
																										BgL_ll1127z00_4360 =
																											BgL_tmpsz00_4281;
																										BgL_tail1129z00_4361 =
																											BgL_head1128z00_4356;
																									BgL_zc3z04anonymousza31580ze3z87_4358:
																										if (NULLP
																											(BgL_ll1126z00_4359))
																											{	/* Eval/expanders.scm 360 */
																												BgL_arg1578z00_4355 =
																													CDR
																													(BgL_head1128z00_4356);
																											}
																										else
																											{	/* Eval/expanders.scm 360 */
																												obj_t
																													BgL_newtail1130z00_4362;
																												{	/* Eval/expanders.scm 360 */
																													obj_t
																														BgL_arg1584z00_4363;
																													{	/* Eval/expanders.scm 360 */
																														obj_t BgL_vz00_4364;
																														obj_t BgL_tz00_4365;

																														BgL_vz00_4364 =
																															CAR(
																															((obj_t)
																																BgL_ll1126z00_4359));
																														BgL_tz00_4365 =
																															CAR(((obj_t)
																																BgL_ll1127z00_4360));
																														{	/* Eval/expanders.scm 360 */
																															obj_t
																																BgL_arg1587z00_4366;
																															BgL_arg1587z00_4366
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_tz00_4365,
																																BNIL);
																															BgL_arg1584z00_4363
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_vz00_4364,
																																BgL_arg1587z00_4366);
																														}
																													}
																													{	/* Eval/expanders.scm 360 */
																														obj_t
																															BgL_res2218z00_4367;
																														BgL_res2218z00_4367
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1584z00_4363,
																															BNIL);
																														BgL_newtail1130z00_4362
																															=
																															BgL_res2218z00_4367;
																													}
																												}
																												SET_CDR
																													(BgL_tail1129z00_4361,
																													BgL_newtail1130z00_4362);
																												{	/* Eval/expanders.scm 360 */
																													obj_t
																														BgL_arg1582z00_4368;
																													obj_t
																														BgL_arg1583z00_4369;
																													BgL_arg1582z00_4368 =
																														CDR(((obj_t)
																															BgL_ll1126z00_4359));
																													BgL_arg1583z00_4369 =
																														CDR(((obj_t)
																															BgL_ll1127z00_4360));
																													{
																														obj_t
																															BgL_tail1129z00_5005;
																														obj_t
																															BgL_ll1127z00_5004;
																														obj_t
																															BgL_ll1126z00_5003;
																														BgL_ll1126z00_5003 =
																															BgL_arg1582z00_4368;
																														BgL_ll1127z00_5004 =
																															BgL_arg1583z00_4369;
																														BgL_tail1129z00_5005
																															=
																															BgL_newtail1130z00_4362;
																														BgL_tail1129z00_4361
																															=
																															BgL_tail1129z00_5005;
																														BgL_ll1127z00_4360 =
																															BgL_ll1127z00_5004;
																														BgL_ll1126z00_4359 =
																															BgL_ll1126z00_5003;
																														goto
																															BgL_zc3z04anonymousza31580ze3z87_4358;
																													}
																												}
																											}
																									}
																								}
																							BgL_arg1575z00_4353 =
																								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg1578z00_4355, BNIL);
																						}
																						BgL_arg1577z00_4354 =
																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																							(BgL_exprsz00_4280, BNIL);
																						BgL_arg1574z00_4352 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1575z00_4353,
																							BgL_arg1577z00_4354);
																					}
																					BgL_arg1573z00_4351 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol2481z00zz__install_expandersz00,
																						BgL_arg1574z00_4352);
																				}
																				BgL_arg1551z00_4326 =
																					MAKE_YOUNG_PAIR(BgL_arg1573z00_4351,
																					BNIL);
																			}
																			BgL_arg1537z00_4312 =
																				MAKE_YOUNG_PAIR(BgL_arg1547z00_4325,
																				BgL_arg1551z00_4326);
																		}
																		BgL_arg1535z00_4310 =
																			MAKE_YOUNG_PAIR(BgL_arg1536z00_4311,
																			BgL_arg1537z00_4312);
																	}
																	BgL_nxz00_4309 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2481z00zz__install_expandersz00,
																		BgL_arg1535z00_4310);
																}
																{	/* Eval/expanders.scm 354 */

																	{	/* Eval/expanders.scm 363 */
																		obj_t BgL_arg1534z00_4370;

																		BgL_arg1534z00_4370 =
																			PROCEDURE_ENTRY(BgL_ez00_4085)
																			(BgL_ez00_4085, BgL_nxz00_4309,
																			BgL_ez00_4085, BEOA);
																		return
																			BGl_evepairifyz00zz__prognz00
																			(BgL_arg1534z00_4370, BgL_xz00_4084);
																	}
																}
															}
														}
													}
												}
											else
												{	/* Eval/expanders.scm 348 */
													return
														BGl_expandzd2errorzd2zz__install_expandersz00
														(BGl_string2480z00zz__install_expandersz00,
														BGl_string2532z00zz__install_expandersz00,
														BgL_xz00_4084);
												}
										}
									else
										{	/* Eval/expanders.scm 348 */
											return
												BGl_expandzd2errorzd2zz__install_expandersz00
												(BGl_string2480z00zz__install_expandersz00,
												BGl_string2532z00zz__install_expandersz00,
												BgL_xz00_4084);
										}
								}
							}
						else
							{	/* Eval/expanders.scm 348 */
								return
									BGl_expandzd2errorzd2zz__install_expandersz00
									(BGl_string2480z00zz__install_expandersz00,
									BGl_string2532z00zz__install_expandersz00, BgL_xz00_4084);
							}
					}
				else
					{	/* Eval/expanders.scm 348 */
						return
							BGl_expandzd2errorzd2zz__install_expandersz00
							(BGl_string2480z00zz__install_expandersz00,
							BGl_string2532z00zz__install_expandersz00, BgL_xz00_4084);
					}
			}
		}

	}



/* &<@anonymous:1499> */
	obj_t BGl_z62zc3z04anonymousza31499ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4086, obj_t BgL_xz00_4087, obj_t BgL_ez00_4088)
	{
		{	/* Eval/expanders.scm 334 */
			{
				obj_t BgL_handlerz00_4377;
				obj_t BgL_bodyz00_4378;

				if (PAIRP(BgL_xz00_4087))
					{	/* Eval/expanders.scm 334 */
						obj_t BgL_cdrzd2276zd2_4394;

						BgL_cdrzd2276zd2_4394 = CDR(BgL_xz00_4087);
						if (PAIRP(BgL_cdrzd2276zd2_4394))
							{	/* Eval/expanders.scm 334 */
								BgL_handlerz00_4377 = CAR(BgL_cdrzd2276zd2_4394);
								BgL_bodyz00_4378 = CDR(BgL_cdrzd2276zd2_4394);
								{	/* Eval/expanders.scm 339 */
									obj_t BgL_arg1506z00_4379;

									{	/* Eval/expanders.scm 339 */
										obj_t BgL_arg1507z00_4380;

										{	/* Eval/expanders.scm 339 */
											obj_t BgL_arg1508z00_4381;
											obj_t BgL_arg1509z00_4382;

											BgL_arg1508z00_4381 =
												PROCEDURE_ENTRY(BgL_ez00_4088) (BgL_ez00_4088,
												BgL_handlerz00_4377, BgL_ez00_4088, BEOA);
											{	/* Eval/expanders.scm 340 */
												obj_t BgL_arg1510z00_4383;

												if (NULLP(BgL_bodyz00_4378))
													{	/* Eval/expanders.scm 340 */
														BgL_arg1510z00_4383 = BNIL;
													}
												else
													{	/* Eval/expanders.scm 340 */
														obj_t BgL_head1100z00_4384;

														{	/* Eval/expanders.scm 340 */
															obj_t BgL_res2178z00_4385;

															BgL_res2178z00_4385 = MAKE_YOUNG_PAIR(BNIL, BNIL);
															BgL_head1100z00_4384 = BgL_res2178z00_4385;
														}
														{
															obj_t BgL_l1098z00_4387;
															obj_t BgL_tail1101z00_4388;

															BgL_l1098z00_4387 = BgL_bodyz00_4378;
															BgL_tail1101z00_4388 = BgL_head1100z00_4384;
														BgL_zc3z04anonymousza31512ze3z87_4386:
															if (NULLP(BgL_l1098z00_4387))
																{	/* Eval/expanders.scm 340 */
																	BgL_arg1510z00_4383 =
																		CDR(BgL_head1100z00_4384);
																}
															else
																{	/* Eval/expanders.scm 340 */
																	obj_t BgL_newtail1102z00_4389;

																	{	/* Eval/expanders.scm 340 */
																		obj_t BgL_arg1515z00_4390;

																		{	/* Eval/expanders.scm 340 */
																			obj_t BgL_xz00_4391;

																			BgL_xz00_4391 =
																				CAR(((obj_t) BgL_l1098z00_4387));
																			BgL_arg1515z00_4390 =
																				PROCEDURE_ENTRY(BgL_ez00_4088)
																				(BgL_ez00_4088, BgL_xz00_4391,
																				BgL_ez00_4088, BEOA);
																		}
																		{	/* Eval/expanders.scm 340 */
																			obj_t BgL_res2184z00_4392;

																			BgL_res2184z00_4392 =
																				MAKE_YOUNG_PAIR(BgL_arg1515z00_4390,
																				BNIL);
																			BgL_newtail1102z00_4389 =
																				BgL_res2184z00_4392;
																		}
																	}
																	SET_CDR(BgL_tail1101z00_4388,
																		BgL_newtail1102z00_4389);
																	{	/* Eval/expanders.scm 340 */
																		obj_t BgL_arg1514z00_4393;

																		BgL_arg1514z00_4393 =
																			CDR(((obj_t) BgL_l1098z00_4387));
																		{
																			obj_t BgL_tail1101z00_5054;
																			obj_t BgL_l1098z00_5053;

																			BgL_l1098z00_5053 = BgL_arg1514z00_4393;
																			BgL_tail1101z00_5054 =
																				BgL_newtail1102z00_4389;
																			BgL_tail1101z00_4388 =
																				BgL_tail1101z00_5054;
																			BgL_l1098z00_4387 = BgL_l1098z00_5053;
																			goto
																				BgL_zc3z04anonymousza31512ze3z87_4386;
																		}
																	}
																}
														}
													}
												BgL_arg1509z00_4382 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1510z00_4383, BNIL);
											}
											BgL_arg1507z00_4380 =
												MAKE_YOUNG_PAIR(BgL_arg1508z00_4381,
												BgL_arg1509z00_4382);
										}
										BgL_arg1506z00_4379 =
											MAKE_YOUNG_PAIR(BGl_symbol2476z00zz__install_expandersz00,
											BgL_arg1507z00_4380);
									}
									return
										BGl_evepairifyz00zz__prognz00(BgL_arg1506z00_4379,
										BgL_xz00_4087);
								}
							}
						else
							{	/* Eval/expanders.scm 334 */
								return
									BGl_expandzd2errorzd2zz__install_expandersz00
									(BGl_string2477z00zz__install_expandersz00,
									BGl_string2532z00zz__install_expandersz00, BgL_xz00_4087);
							}
					}
				else
					{	/* Eval/expanders.scm 334 */
						return
							BGl_expandzd2errorzd2zz__install_expandersz00
							(BGl_string2477z00zz__install_expandersz00,
							BGl_string2532z00zz__install_expandersz00, BgL_xz00_4087);
					}
			}
		}

	}



/* &<@anonymous:1481> */
	obj_t BGl_z62zc3z04anonymousza31481ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4089, obj_t BgL_xz00_4090, obj_t BgL_ez00_4091)
	{
		{	/* Eval/expanders.scm 321 */
			{
				obj_t BgL_bodyz00_4396;
				obj_t BgL_expz00_4397;

				if (PAIRP(BgL_xz00_4090))
					{	/* Eval/expanders.scm 321 */
						obj_t BgL_cdrzd2261zd2_4413;

						BgL_cdrzd2261zd2_4413 = CDR(BgL_xz00_4090);
						if (PAIRP(BgL_cdrzd2261zd2_4413))
							{	/* Eval/expanders.scm 321 */
								BgL_bodyz00_4396 = CAR(BgL_cdrzd2261zd2_4413);
								BgL_expz00_4397 = CDR(BgL_cdrzd2261zd2_4413);
								{	/* Eval/expanders.scm 326 */
									obj_t BgL_arg1486z00_4398;

									{	/* Eval/expanders.scm 326 */
										obj_t BgL_arg1487z00_4399;

										{	/* Eval/expanders.scm 326 */
											obj_t BgL_arg1489z00_4400;
											obj_t BgL_arg1491z00_4401;

											BgL_arg1489z00_4400 =
												PROCEDURE_ENTRY(BgL_ez00_4091) (BgL_ez00_4091,
												BgL_bodyz00_4396, BgL_ez00_4091, BEOA);
											{	/* Eval/expanders.scm 327 */
												obj_t BgL_arg1492z00_4402;

												if (NULLP(BgL_expz00_4397))
													{	/* Eval/expanders.scm 327 */
														BgL_arg1492z00_4402 = BNIL;
													}
												else
													{	/* Eval/expanders.scm 327 */
														obj_t BgL_head1095z00_4403;

														{	/* Eval/expanders.scm 327 */
															obj_t BgL_res2168z00_4404;

															BgL_res2168z00_4404 = MAKE_YOUNG_PAIR(BNIL, BNIL);
															BgL_head1095z00_4403 = BgL_res2168z00_4404;
														}
														{
															obj_t BgL_l1093z00_4406;
															obj_t BgL_tail1096z00_4407;

															BgL_l1093z00_4406 = BgL_expz00_4397;
															BgL_tail1096z00_4407 = BgL_head1095z00_4403;
														BgL_zc3z04anonymousza31494ze3z87_4405:
															if (NULLP(BgL_l1093z00_4406))
																{	/* Eval/expanders.scm 327 */
																	BgL_arg1492z00_4402 =
																		CDR(BgL_head1095z00_4403);
																}
															else
																{	/* Eval/expanders.scm 327 */
																	obj_t BgL_newtail1097z00_4408;

																	{	/* Eval/expanders.scm 327 */
																		obj_t BgL_arg1497z00_4409;

																		{	/* Eval/expanders.scm 327 */
																			obj_t BgL_xz00_4410;

																			BgL_xz00_4410 =
																				CAR(((obj_t) BgL_l1093z00_4406));
																			BgL_arg1497z00_4409 =
																				PROCEDURE_ENTRY(BgL_ez00_4091)
																				(BgL_ez00_4091, BgL_xz00_4410,
																				BgL_ez00_4091, BEOA);
																		}
																		{	/* Eval/expanders.scm 327 */
																			obj_t BgL_res2174z00_4411;

																			BgL_res2174z00_4411 =
																				MAKE_YOUNG_PAIR(BgL_arg1497z00_4409,
																				BNIL);
																			BgL_newtail1097z00_4408 =
																				BgL_res2174z00_4411;
																		}
																	}
																	SET_CDR(BgL_tail1096z00_4407,
																		BgL_newtail1097z00_4408);
																	{	/* Eval/expanders.scm 327 */
																		obj_t BgL_arg1496z00_4412;

																		BgL_arg1496z00_4412 =
																			CDR(((obj_t) BgL_l1093z00_4406));
																		{
																			obj_t BgL_tail1096z00_5091;
																			obj_t BgL_l1093z00_5090;

																			BgL_l1093z00_5090 = BgL_arg1496z00_4412;
																			BgL_tail1096z00_5091 =
																				BgL_newtail1097z00_4408;
																			BgL_tail1096z00_4407 =
																				BgL_tail1096z00_5091;
																			BgL_l1093z00_4406 = BgL_l1093z00_5090;
																			goto
																				BgL_zc3z04anonymousza31494ze3z87_4405;
																		}
																	}
																}
														}
													}
												BgL_arg1491z00_4401 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1492z00_4402, BNIL);
											}
											BgL_arg1487z00_4399 =
												MAKE_YOUNG_PAIR(BgL_arg1489z00_4400,
												BgL_arg1491z00_4401);
										}
										BgL_arg1486z00_4398 =
											MAKE_YOUNG_PAIR(BGl_symbol2473z00zz__install_expandersz00,
											BgL_arg1487z00_4399);
									}
									return
										BGl_evepairifyz00zz__prognz00(BgL_arg1486z00_4398,
										BgL_xz00_4090);
								}
							}
						else
							{	/* Eval/expanders.scm 321 */
								return
									BGl_expandzd2errorzd2zz__install_expandersz00
									(BGl_string2474z00zz__install_expandersz00,
									BGl_string2532z00zz__install_expandersz00, BgL_xz00_4090);
							}
					}
				else
					{	/* Eval/expanders.scm 321 */
						return
							BGl_expandzd2errorzd2zz__install_expandersz00
							(BGl_string2474z00zz__install_expandersz00,
							BGl_string2532z00zz__install_expandersz00, BgL_xz00_4090);
					}
			}
		}

	}



/* &<@anonymous:1454> */
	obj_t BGl_z62zc3z04anonymousza31454ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4092, obj_t BgL_xz00_4093, obj_t BgL_ez00_4094)
	{
		{	/* Eval/expanders.scm 296 */
			{
				obj_t BgL_exitz00_4415;
				obj_t BgL_bodyz00_4416;

				if (PAIRP(BgL_xz00_4093))
					{	/* Eval/expanders.scm 308 */
						obj_t BgL_cdrzd2242zd2_4425;

						BgL_cdrzd2242zd2_4425 = CDR(BgL_xz00_4093);
						if (PAIRP(BgL_cdrzd2242zd2_4425))
							{	/* Eval/expanders.scm 308 */
								obj_t BgL_carzd2245zd2_4426;
								obj_t BgL_cdrzd2246zd2_4427;

								BgL_carzd2245zd2_4426 = CAR(BgL_cdrzd2242zd2_4425);
								BgL_cdrzd2246zd2_4427 = CDR(BgL_cdrzd2242zd2_4425);
								if (PAIRP(BgL_carzd2245zd2_4426))
									{	/* Eval/expanders.scm 308 */
										if (NULLP(CDR(BgL_carzd2245zd2_4426)))
											{	/* Eval/expanders.scm 308 */
												if (NULLP(BgL_cdrzd2246zd2_4427))
													{	/* Eval/expanders.scm 308 */
														return
															BGl_expandzd2errorzd2zz__install_expandersz00
															(BGl_string2471z00zz__install_expandersz00,
															BGl_string2532z00zz__install_expandersz00,
															BgL_xz00_4093);
													}
												else
													{	/* Eval/expanders.scm 308 */
														BgL_exitz00_4415 = CAR(BgL_carzd2245zd2_4426);
														BgL_bodyz00_4416 = BgL_cdrzd2246zd2_4427;
														{	/* Eval/expanders.scm 311 */
															obj_t BgL_arg1463z00_4417;

															if (BGl_findzd2inzd2bodyze70ze7zz__install_expandersz00(BgL_exitz00_4415, BgL_bodyz00_4416))
																{	/* Eval/expanders.scm 312 */
																	obj_t BgL_arg1465z00_4418;

																	{	/* Eval/expanders.scm 312 */
																		obj_t BgL_arg1466z00_4419;
																		obj_t BgL_arg1467z00_4420;

																		BgL_arg1466z00_4419 =
																			MAKE_YOUNG_PAIR(BgL_exitz00_4415, BNIL);
																		{	/* Eval/expanders.scm 313 */
																			obj_t BgL_arg1468z00_4421;

																			{	/* Eval/expanders.scm 313 */
																				obj_t BgL_arg1469z00_4422;

																				BgL_arg1469z00_4422 =
																					BGl_expandzd2prognzd2zz__prognz00
																					(BgL_bodyz00_4416);
																				BgL_arg1468z00_4421 =
																					PROCEDURE_ENTRY(BgL_ez00_4094)
																					(BgL_ez00_4094, BgL_arg1469z00_4422,
																					BgL_ez00_4094, BEOA);
																			}
																			BgL_arg1467z00_4420 =
																				MAKE_YOUNG_PAIR(BgL_arg1468z00_4421,
																				BNIL);
																		}
																		BgL_arg1465z00_4418 =
																			MAKE_YOUNG_PAIR(BgL_arg1466z00_4419,
																			BgL_arg1467z00_4420);
																	}
																	BgL_arg1463z00_4417 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2470z00zz__install_expandersz00,
																		BgL_arg1465z00_4418);
																}
															else
																{	/* Eval/expanders.scm 314 */
																	obj_t BgL_arg1470z00_4423;

																	{	/* Eval/expanders.scm 314 */
																		obj_t BgL_arg1471z00_4424;

																		BgL_arg1471z00_4424 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_bodyz00_4416, BNIL);
																		BgL_arg1470z00_4423 =
																			MAKE_YOUNG_PAIR
																			(BGl_symbol2430z00zz__install_expandersz00,
																			BgL_arg1471z00_4424);
																	}
																	BgL_arg1463z00_4417 =
																		PROCEDURE_ENTRY(BgL_ez00_4094)
																		(BgL_ez00_4094, BgL_arg1470z00_4423,
																		BgL_ez00_4094, BEOA);
																}
															return
																BGl_evepairifyz00zz__prognz00
																(BgL_arg1463z00_4417, BgL_xz00_4093);
														}
													}
											}
										else
											{	/* Eval/expanders.scm 308 */
												return
													BGl_expandzd2errorzd2zz__install_expandersz00
													(BGl_string2471z00zz__install_expandersz00,
													BGl_string2532z00zz__install_expandersz00,
													BgL_xz00_4093);
											}
									}
								else
									{	/* Eval/expanders.scm 308 */
										return
											BGl_expandzd2errorzd2zz__install_expandersz00
											(BGl_string2471z00zz__install_expandersz00,
											BGl_string2532z00zz__install_expandersz00, BgL_xz00_4093);
									}
							}
						else
							{	/* Eval/expanders.scm 308 */
								return
									BGl_expandzd2errorzd2zz__install_expandersz00
									(BGl_string2471z00zz__install_expandersz00,
									BGl_string2532z00zz__install_expandersz00, BgL_xz00_4093);
							}
					}
				else
					{	/* Eval/expanders.scm 308 */
						return
							BGl_expandzd2errorzd2zz__install_expandersz00
							(BGl_string2471z00zz__install_expandersz00,
							BGl_string2532z00zz__install_expandersz00, BgL_xz00_4093);
					}
			}
		}

	}



/* find-in-body~0 */
	bool_t BGl_findzd2inzd2bodyze70ze7zz__install_expandersz00(obj_t
		BgL_kz00_1505, obj_t BgL_bodyz00_1506)
	{
		{	/* Eval/expanders.scm 306 */
		BGl_findzd2inzd2bodyze70ze7zz__install_expandersz00:
			if ((BgL_bodyz00_1506 == BgL_kz00_1505))
				{	/* Eval/expanders.scm 300 */
					return ((bool_t) 1);
				}
			else
				{	/* Eval/expanders.scm 300 */
					if (PAIRP(BgL_bodyz00_1506))
						{	/* Eval/expanders.scm 302 */
							if (
								(CAR(BgL_bodyz00_1506) ==
									BGl_symbol2380z00zz__install_expandersz00))
								{	/* Eval/expanders.scm 303 */
									return ((bool_t) 0);
								}
							else
								{	/* Eval/expanders.scm 304 */
									bool_t BgL__ortest_1039z00_1512;

									BgL__ortest_1039z00_1512 =
										BGl_findzd2inzd2bodyze70ze7zz__install_expandersz00
										(BgL_kz00_1505, CAR(BgL_bodyz00_1506));
									if (BgL__ortest_1039z00_1512)
										{	/* Eval/expanders.scm 304 */
											return BgL__ortest_1039z00_1512;
										}
									else
										{
											obj_t BgL_bodyz00_5150;

											BgL_bodyz00_5150 = CDR(BgL_bodyz00_1506);
											BgL_bodyz00_1506 = BgL_bodyz00_5150;
											goto BGl_findzd2inzd2bodyze70ze7zz__install_expandersz00;
										}
								}
						}
					else
						{	/* Eval/expanders.scm 302 */
							return ((bool_t) 0);
						}
				}
		}

	}



/* &<@anonymous:1437> */
	obj_t BGl_z62zc3z04anonymousza31437ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4095, obj_t BgL_xz00_4096, obj_t BgL_ez00_4097)
	{
		{	/* Eval/expanders.scm 285 */
			{
				obj_t BgL_bodyz00_4429;

				if (PAIRP(BgL_xz00_4096))
					{	/* Eval/expanders.scm 285 */
						obj_t BgL_cdrzd2229zd2_4443;

						BgL_cdrzd2229zd2_4443 = CDR(BgL_xz00_4096);
						if (PAIRP(BgL_cdrzd2229zd2_4443))
							{	/* Eval/expanders.scm 285 */
								if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(CAR
										(BgL_cdrzd2229zd2_4443)))
									{	/* Eval/expanders.scm 285 */
										BgL_bodyz00_4429 = CDR(BgL_cdrzd2229zd2_4443);
										{	/* Eval/expanders.scm 289 */
											obj_t BgL_arg1444z00_4430;

											{	/* Eval/expanders.scm 289 */
												obj_t BgL_arg1445z00_4431;

												{	/* Eval/expanders.scm 289 */
													obj_t BgL_arg1446z00_4432;

													if (NULLP(BgL_bodyz00_4429))
														{	/* Eval/expanders.scm 289 */
															BgL_arg1446z00_4432 = BNIL;
														}
													else
														{	/* Eval/expanders.scm 289 */
															obj_t BgL_head1090z00_4433;

															{	/* Eval/expanders.scm 289 */
																obj_t BgL_res2152z00_4434;

																BgL_res2152z00_4434 =
																	MAKE_YOUNG_PAIR(BNIL, BNIL);
																BgL_head1090z00_4433 = BgL_res2152z00_4434;
															}
															{
																obj_t BgL_l1088z00_4436;
																obj_t BgL_tail1091z00_4437;

																BgL_l1088z00_4436 = BgL_bodyz00_4429;
																BgL_tail1091z00_4437 = BgL_head1090z00_4433;
															BgL_zc3z04anonymousza31448ze3z87_4435:
																if (NULLP(BgL_l1088z00_4436))
																	{	/* Eval/expanders.scm 289 */
																		BgL_arg1446z00_4432 =
																			CDR(BgL_head1090z00_4433);
																	}
																else
																	{	/* Eval/expanders.scm 289 */
																		obj_t BgL_newtail1092z00_4438;

																		{	/* Eval/expanders.scm 289 */
																			obj_t BgL_arg1452z00_4439;

																			{	/* Eval/expanders.scm 289 */
																				obj_t BgL_xz00_4440;

																				BgL_xz00_4440 =
																					CAR(((obj_t) BgL_l1088z00_4436));
																				BgL_arg1452z00_4439 =
																					PROCEDURE_ENTRY(BgL_ez00_4097)
																					(BgL_ez00_4097, BgL_xz00_4440,
																					BgL_ez00_4097, BEOA);
																			}
																			{	/* Eval/expanders.scm 289 */
																				obj_t BgL_res2158z00_4441;

																				BgL_res2158z00_4441 =
																					MAKE_YOUNG_PAIR(BgL_arg1452z00_4439,
																					BNIL);
																				BgL_newtail1092z00_4438 =
																					BgL_res2158z00_4441;
																			}
																		}
																		SET_CDR(BgL_tail1091z00_4437,
																			BgL_newtail1092z00_4438);
																		{	/* Eval/expanders.scm 289 */
																			obj_t BgL_arg1451z00_4442;

																			BgL_arg1451z00_4442 =
																				CDR(((obj_t) BgL_l1088z00_4436));
																			{
																				obj_t BgL_tail1091z00_5178;
																				obj_t BgL_l1088z00_5177;

																				BgL_l1088z00_5177 = BgL_arg1451z00_4442;
																				BgL_tail1091z00_5178 =
																					BgL_newtail1092z00_4438;
																				BgL_tail1091z00_4437 =
																					BgL_tail1091z00_5178;
																				BgL_l1088z00_4436 = BgL_l1088z00_5177;
																				goto
																					BgL_zc3z04anonymousza31448ze3z87_4435;
																			}
																		}
																	}
															}
														}
													BgL_arg1445z00_4431 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg1446z00_4432, BNIL);
												}
												BgL_arg1444z00_4430 =
													MAKE_YOUNG_PAIR
													(BGl_symbol2430z00zz__install_expandersz00,
													BgL_arg1445z00_4431);
											}
											return
												BGl_evepairifyz00zz__prognz00(BgL_arg1444z00_4430,
												BgL_xz00_4096);
										}
									}
								else
									{	/* Eval/expanders.scm 285 */
										return
											BGl_expandzd2errorzd2zz__install_expandersz00
											(BGl_string2468z00zz__install_expandersz00,
											BGl_string2532z00zz__install_expandersz00, BgL_xz00_4096);
									}
							}
						else
							{	/* Eval/expanders.scm 285 */
								return
									BGl_expandzd2errorzd2zz__install_expandersz00
									(BGl_string2468z00zz__install_expandersz00,
									BGl_string2532z00zz__install_expandersz00, BgL_xz00_4096);
							}
					}
				else
					{	/* Eval/expanders.scm 285 */
						return
							BGl_expandzd2errorzd2zz__install_expandersz00
							(BGl_string2468z00zz__install_expandersz00,
							BGl_string2532z00zz__install_expandersz00, BgL_xz00_4096);
					}
			}
		}

	}



/* &<@anonymous:1422> */
	obj_t BGl_z62zc3z04anonymousza31422ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4098, obj_t BgL_xz00_4099, obj_t BgL_ez00_4100)
	{
		{	/* Eval/expanders.scm 246 */
			if (PAIRP(BgL_xz00_4099))
				{	/* Eval/expanders.scm 246 */
					obj_t BgL_cdrzd2216zd2_4444;

					BgL_cdrzd2216zd2_4444 = CDR(BgL_xz00_4099);
					if (PAIRP(BgL_cdrzd2216zd2_4444))
						{	/* Eval/expanders.scm 246 */
							obj_t BgL_arg1425z00_4445;
							obj_t BgL_arg1426z00_4446;

							BgL_arg1425z00_4445 = CAR(BgL_cdrzd2216zd2_4444);
							BgL_arg1426z00_4446 = CDR(BgL_cdrzd2216zd2_4444);
							{	/* Eval/expanders.scm 251 */
								obj_t BgL_arg1427z00_4447;

								{	/* Eval/expanders.scm 251 */
									obj_t BgL_arg1428z00_4448;

									{	/* Eval/expanders.scm 251 */
										obj_t BgL_arg1429z00_4449;

										{	/* Eval/expanders.scm 251 */
											obj_t BgL_arg1430z00_4450;

											{	/* Eval/expanders.scm 251 */
												obj_t BgL_arg1431z00_4451;

												{	/* Eval/expanders.scm 251 */
													obj_t BgL_arg1432z00_4452;

													BgL_arg1432z00_4452 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg1426z00_4446, BNIL);
													BgL_arg1431z00_4451 =
														MAKE_YOUNG_PAIR
														(BGl_symbol2430z00zz__install_expandersz00,
														BgL_arg1432z00_4452);
												}
												BgL_arg1430z00_4450 =
													MAKE_YOUNG_PAIR(BgL_arg1431z00_4451, BNIL);
											}
											BgL_arg1429z00_4449 =
												MAKE_YOUNG_PAIR(BFALSE, BgL_arg1430z00_4450);
										}
										BgL_arg1428z00_4448 =
											MAKE_YOUNG_PAIR(BgL_arg1425z00_4445, BgL_arg1429z00_4449);
									}
									BgL_arg1427z00_4447 =
										MAKE_YOUNG_PAIR(BGl_symbol2375z00zz__install_expandersz00,
										BgL_arg1428z00_4448);
								}
								return
									PROCEDURE_ENTRY(BgL_ez00_4100) (BgL_ez00_4100,
									BgL_arg1427z00_4447, BgL_ez00_4100, BEOA);
							}
						}
					else
						{	/* Eval/expanders.scm 246 */
							return
								BGl_expandzd2errorzd2zz__install_expandersz00
								(BGl_string2443z00zz__install_expandersz00,
								BGl_string2532z00zz__install_expandersz00, BgL_xz00_4099);
						}
				}
			else
				{	/* Eval/expanders.scm 246 */
					return
						BGl_expandzd2errorzd2zz__install_expandersz00
						(BGl_string2443z00zz__install_expandersz00,
						BGl_string2532z00zz__install_expandersz00, BgL_xz00_4099);
				}
		}

	}



/* &<@anonymous:1410> */
	obj_t BGl_z62zc3z04anonymousza31410ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4101, obj_t BgL_xz00_4102, obj_t BgL_ez00_4103)
	{
		{	/* Eval/expanders.scm 234 */
			if (PAIRP(BgL_xz00_4102))
				{	/* Eval/expanders.scm 234 */
					obj_t BgL_cdrzd2201zd2_4453;

					BgL_cdrzd2201zd2_4453 = CDR(BgL_xz00_4102);
					if (PAIRP(BgL_cdrzd2201zd2_4453))
						{	/* Eval/expanders.scm 234 */
							obj_t BgL_arg1413z00_4454;
							obj_t BgL_arg1414z00_4455;

							BgL_arg1413z00_4454 = CAR(BgL_cdrzd2201zd2_4453);
							BgL_arg1414z00_4455 = CDR(BgL_cdrzd2201zd2_4453);
							{	/* Eval/expanders.scm 238 */
								obj_t BgL_arg1415z00_4456;

								{	/* Eval/expanders.scm 238 */
									obj_t BgL_arg1416z00_4457;

									{	/* Eval/expanders.scm 238 */
										obj_t BgL_arg1417z00_4458;

										{	/* Eval/expanders.scm 238 */
											obj_t BgL_arg1418z00_4459;
											obj_t BgL_arg1419z00_4460;

											{	/* Eval/expanders.scm 238 */
												obj_t BgL_arg1420z00_4461;

												BgL_arg1420z00_4461 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1414z00_4455, BNIL);
												BgL_arg1418z00_4459 =
													MAKE_YOUNG_PAIR
													(BGl_symbol2430z00zz__install_expandersz00,
													BgL_arg1420z00_4461);
											}
											BgL_arg1419z00_4460 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
											BgL_arg1417z00_4458 =
												MAKE_YOUNG_PAIR(BgL_arg1418z00_4459,
												BgL_arg1419z00_4460);
										}
										BgL_arg1416z00_4457 =
											MAKE_YOUNG_PAIR(BgL_arg1413z00_4454, BgL_arg1417z00_4458);
									}
									BgL_arg1415z00_4456 =
										MAKE_YOUNG_PAIR(BGl_symbol2375z00zz__install_expandersz00,
										BgL_arg1416z00_4457);
								}
								return
									PROCEDURE_ENTRY(BgL_ez00_4103) (BgL_ez00_4103,
									BgL_arg1415z00_4456, BgL_ez00_4103, BEOA);
							}
						}
					else
						{	/* Eval/expanders.scm 234 */
							return
								BGl_expandzd2errorzd2zz__install_expandersz00
								(BGl_string2440z00zz__install_expandersz00,
								BGl_string2532z00zz__install_expandersz00, BgL_xz00_4102);
						}
				}
			else
				{	/* Eval/expanders.scm 234 */
					return
						BGl_expandzd2errorzd2zz__install_expandersz00
						(BGl_string2440z00zz__install_expandersz00,
						BGl_string2532z00zz__install_expandersz00, BgL_xz00_4102);
				}
		}

	}



/* &<@anonymous:1396> */
	obj_t BGl_z62zc3z04anonymousza31396ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4104, obj_t BgL_xz00_4105, obj_t BgL_ez00_4106)
	{
		{	/* Eval/expanders.scm 223 */
			if (PAIRP(BgL_xz00_4105))
				{	/* Eval/expanders.scm 223 */
					obj_t BgL_cdrzd2180zd2_4462;

					BgL_cdrzd2180zd2_4462 = CDR(BgL_xz00_4105);
					if (PAIRP(BgL_cdrzd2180zd2_4462))
						{	/* Eval/expanders.scm 223 */
							obj_t BgL_cdrzd2185zd2_4463;

							BgL_cdrzd2185zd2_4463 = CDR(BgL_cdrzd2180zd2_4462);
							if (PAIRP(BgL_cdrzd2185zd2_4463))
								{	/* Eval/expanders.scm 223 */
									obj_t BgL_arg1400z00_4464;
									obj_t BgL_arg1401z00_4465;
									obj_t BgL_arg1402z00_4466;

									BgL_arg1400z00_4464 = CAR(BgL_cdrzd2180zd2_4462);
									BgL_arg1401z00_4465 = CAR(BgL_cdrzd2185zd2_4463);
									BgL_arg1402z00_4466 = CDR(BgL_cdrzd2185zd2_4463);
									{	/* Eval/expanders.scm 226 */
										obj_t BgL_arg1404z00_4467;

										{	/* Eval/expanders.scm 226 */
											obj_t BgL_arg1405z00_4468;

											{	/* Eval/expanders.scm 226 */
												obj_t BgL_arg1406z00_4469;

												BgL_arg1406z00_4469 =
													MAKE_YOUNG_PAIR(BgL_arg1401z00_4465,
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1402z00_4466, BNIL));
												BgL_arg1405z00_4468 =
													MAKE_YOUNG_PAIR(BgL_arg1400z00_4464,
													BgL_arg1406z00_4469);
											}
											BgL_arg1404z00_4467 =
												MAKE_YOUNG_PAIR
												(BGl_symbol2479z00zz__install_expandersz00,
												BgL_arg1405z00_4468);
										}
										return
											PROCEDURE_ENTRY(BgL_ez00_4106) (BgL_ez00_4106,
											BgL_arg1404z00_4467, BgL_ez00_4106, BEOA);
									}
								}
							else
								{	/* Eval/expanders.scm 223 */
									return
										BGl_expandzd2errorzd2zz__install_expandersz00
										(BGl_string2437z00zz__install_expandersz00,
										BGl_string2532z00zz__install_expandersz00, BgL_xz00_4105);
								}
						}
					else
						{	/* Eval/expanders.scm 223 */
							return
								BGl_expandzd2errorzd2zz__install_expandersz00
								(BGl_string2437z00zz__install_expandersz00,
								BGl_string2532z00zz__install_expandersz00, BgL_xz00_4105);
						}
				}
			else
				{	/* Eval/expanders.scm 223 */
					return
						BGl_expandzd2errorzd2zz__install_expandersz00
						(BGl_string2437z00zz__install_expandersz00,
						BGl_string2532z00zz__install_expandersz00, BgL_xz00_4105);
				}
		}

	}



/* &<@anonymous:1378> */
	obj_t BGl_z62zc3z04anonymousza31378ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4107, obj_t BgL_xz00_4108, obj_t BgL_ez00_4109)
	{
		{	/* Eval/expanders.scm 210 */
			if (PAIRP(BgL_xz00_4108))
				{	/* Eval/expanders.scm 210 */
					obj_t BgL_cdrzd2154zd2_4470;

					BgL_cdrzd2154zd2_4470 = CDR(BgL_xz00_4108);
					if (PAIRP(BgL_cdrzd2154zd2_4470))
						{	/* Eval/expanders.scm 210 */
							obj_t BgL_cdrzd2159zd2_4471;

							BgL_cdrzd2159zd2_4471 = CDR(BgL_cdrzd2154zd2_4470);
							if (PAIRP(BgL_cdrzd2159zd2_4471))
								{	/* Eval/expanders.scm 210 */
									obj_t BgL_cdrzd2164zd2_4472;

									BgL_cdrzd2164zd2_4472 = CDR(BgL_cdrzd2159zd2_4471);
									if (PAIRP(BgL_cdrzd2164zd2_4472))
										{	/* Eval/expanders.scm 210 */
											if (NULLP(CDR(BgL_cdrzd2164zd2_4472)))
												{	/* Eval/expanders.scm 210 */
													obj_t BgL_arg1385z00_4473;
													obj_t BgL_arg1386z00_4474;
													obj_t BgL_arg1387z00_4475;

													BgL_arg1385z00_4473 = CAR(BgL_cdrzd2154zd2_4470);
													BgL_arg1386z00_4474 = CAR(BgL_cdrzd2159zd2_4471);
													BgL_arg1387z00_4475 = CAR(BgL_cdrzd2164zd2_4472);
													{	/* Eval/expanders.scm 213 */
														obj_t BgL_arg1389z00_4476;

														{	/* Eval/expanders.scm 213 */
															obj_t BgL_arg1390z00_4477;
															obj_t BgL_arg1391z00_4478;

															BgL_arg1390z00_4477 =
																PROCEDURE_ENTRY(BgL_ez00_4109) (BgL_ez00_4109,
																BgL_arg1385z00_4473, BgL_ez00_4109, BEOA);
															{	/* Eval/expanders.scm 214 */
																obj_t BgL_arg1392z00_4479;
																obj_t BgL_arg1393z00_4480;

																BgL_arg1392z00_4479 =
																	PROCEDURE_ENTRY(BgL_ez00_4109) (BgL_ez00_4109,
																	BgL_arg1386z00_4474, BgL_ez00_4109, BEOA);
																{	/* Eval/expanders.scm 215 */
																	obj_t BgL_arg1394z00_4481;

																	BgL_arg1394z00_4481 =
																		PROCEDURE_ENTRY(BgL_ez00_4109)
																		(BgL_ez00_4109, BgL_arg1387z00_4475,
																		BgL_ez00_4109, BEOA);
																	BgL_arg1393z00_4480 =
																		MAKE_YOUNG_PAIR(BgL_arg1394z00_4481, BNIL);
																}
																BgL_arg1391z00_4478 =
																	MAKE_YOUNG_PAIR(BgL_arg1392z00_4479,
																	BgL_arg1393z00_4480);
															}
															BgL_arg1389z00_4476 =
																MAKE_YOUNG_PAIR(BgL_arg1390z00_4477,
																BgL_arg1391z00_4478);
														}
														return
															MAKE_YOUNG_PAIR
															(BGl_symbol2433z00zz__install_expandersz00,
															BgL_arg1389z00_4476);
													}
												}
											else
												{	/* Eval/expanders.scm 210 */
													return
														BGl_expandzd2errorzd2zz__install_expandersz00
														(BGl_string2434z00zz__install_expandersz00,
														BGl_string2537z00zz__install_expandersz00,
														BgL_xz00_4108);
												}
										}
									else
										{	/* Eval/expanders.scm 210 */
											return
												BGl_expandzd2errorzd2zz__install_expandersz00
												(BGl_string2434z00zz__install_expandersz00,
												BGl_string2537z00zz__install_expandersz00,
												BgL_xz00_4108);
										}
								}
							else
								{	/* Eval/expanders.scm 210 */
									return
										BGl_expandzd2errorzd2zz__install_expandersz00
										(BGl_string2434z00zz__install_expandersz00,
										BGl_string2537z00zz__install_expandersz00, BgL_xz00_4108);
								}
						}
					else
						{	/* Eval/expanders.scm 210 */
							return
								BGl_expandzd2errorzd2zz__install_expandersz00
								(BGl_string2434z00zz__install_expandersz00,
								BGl_string2537z00zz__install_expandersz00, BgL_xz00_4108);
						}
				}
			else
				{	/* Eval/expanders.scm 210 */
					return
						BGl_expandzd2errorzd2zz__install_expandersz00
						(BGl_string2434z00zz__install_expandersz00,
						BGl_string2537z00zz__install_expandersz00, BgL_xz00_4108);
				}
		}

	}



/* &<@anonymous:1364> */
	obj_t BGl_z62zc3z04anonymousza31364ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4110, obj_t BgL_xz00_4111, obj_t BgL_ez00_4112)
	{
		{	/* Eval/expanders.scm 191 */
			{
				obj_t BgL_expz00_4483;

				if (PAIRP(BgL_xz00_4111))
					{	/* Eval/expanders.scm 191 */
						obj_t BgL_cdrzd2139zd2_4489;

						BgL_cdrzd2139zd2_4489 = CDR(BgL_xz00_4111);
						if (PAIRP(BgL_cdrzd2139zd2_4489))
							{	/* Eval/expanders.scm 191 */
								if (NULLP(CDR(BgL_cdrzd2139zd2_4489)))
									{	/* Eval/expanders.scm 191 */
										BgL_expz00_4483 = CAR(BgL_cdrzd2139zd2_4489);
										{	/* Eval/expanders.scm 194 */
											obj_t BgL_arg1372z00_4484;

											{	/* Eval/expanders.scm 194 */
												obj_t BgL_arg1373z00_4485;

												{	/* Eval/expanders.scm 194 */
													obj_t BgL_arg1374z00_4486;

													{	/* Eval/expanders.scm 194 */
														obj_t BgL_arg1375z00_4487;

														{	/* Eval/expanders.scm 194 */
															obj_t BgL_arg1376z00_4488;

															BgL_arg1376z00_4488 =
																PROCEDURE_ENTRY(BgL_ez00_4112) (BgL_ez00_4112,
																BgL_expz00_4483, BgL_ez00_4112, BEOA);
															BgL_arg1375z00_4487 =
																MAKE_YOUNG_PAIR(BgL_arg1376z00_4488, BNIL);
														}
														BgL_arg1374z00_4486 =
															MAKE_YOUNG_PAIR(BNIL, BgL_arg1375z00_4487);
													}
													BgL_arg1373z00_4485 =
														MAKE_YOUNG_PAIR
														(BGl_symbol2377z00zz__install_expandersz00,
														BgL_arg1374z00_4486);
												}
												BgL_arg1372z00_4484 =
													MAKE_YOUNG_PAIR(BgL_arg1373z00_4485, BNIL);
											}
											return
												MAKE_YOUNG_PAIR
												(BGl_symbol2538z00zz__install_expandersz00,
												BgL_arg1372z00_4484);
										}
									}
								else
									{	/* Eval/expanders.scm 191 */
										return
											BGl_expandzd2errorzd2zz__install_expandersz00
											(BGl_string2423z00zz__install_expandersz00,
											BGl_string2532z00zz__install_expandersz00, BgL_xz00_4111);
									}
							}
						else
							{	/* Eval/expanders.scm 191 */
								return
									BGl_expandzd2errorzd2zz__install_expandersz00
									(BGl_string2423z00zz__install_expandersz00,
									BGl_string2532z00zz__install_expandersz00, BgL_xz00_4111);
							}
					}
				else
					{	/* Eval/expanders.scm 191 */
						return
							BGl_expandzd2errorzd2zz__install_expandersz00
							(BGl_string2423z00zz__install_expandersz00,
							BGl_string2532z00zz__install_expandersz00, BgL_xz00_4111);
					}
			}
		}

	}



/* &<@anonymous:1361> */
	obj_t BGl_z62zc3z04anonymousza31361ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4113, obj_t BgL_xz00_4114, obj_t BgL_ez00_4115)
	{
		{	/* Eval/expanders.scm 187 */
			{	/* Eval/expanders.scm 188 */
				obj_t BgL_arg1362z00_4490;

				BgL_arg1362z00_4490 =
					BGl_expandzd2definezd2patternz00zz__evalz00(BgL_xz00_4114);
				return
					PROCEDURE_ENTRY(BgL_ez00_4115) (BgL_ez00_4115, BgL_arg1362z00_4490,
					BgL_ez00_4115, BEOA);
			}
		}

	}



/* &<@anonymous:1358> */
	obj_t BGl_z62zc3z04anonymousza31358ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4116, obj_t BgL_xz00_4117, obj_t BgL_ez00_4118)
	{
		{	/* Eval/expanders.scm 183 */
			{	/* Eval/expanders.scm 184 */
				obj_t BgL_arg1359z00_4491;

				BgL_arg1359z00_4491 =
					BGl_expandzd2matchzd2lambdaz00zz__match_expandz00(BgL_xz00_4117);
				return
					PROCEDURE_ENTRY(BgL_ez00_4118) (BgL_ez00_4118, BgL_arg1359z00_4491,
					BgL_ez00_4118, BEOA);
			}
		}

	}



/* &<@anonymous:1355> */
	obj_t BGl_z62zc3z04anonymousza31355ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4119, obj_t BgL_xz00_4120, obj_t BgL_ez00_4121)
	{
		{	/* Eval/expanders.scm 180 */
			{	/* Eval/expanders.scm 180 */
				obj_t BgL_arg1356z00_4492;

				BgL_arg1356z00_4492 =
					BGl_expandzd2matchzd2casez00zz__match_expandz00(BgL_xz00_4120);
				return
					PROCEDURE_ENTRY(BgL_ez00_4121) (BgL_ez00_4121, BgL_arg1356z00_4492,
					BgL_ez00_4121, BEOA);
			}
		}

	}



/* &<@anonymous:1353> */
	obj_t BGl_z62zc3z04anonymousza31353ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4122, obj_t BgL_xz00_4123, obj_t BgL_ez00_4124)
	{
		{	/* Eval/expanders.scm 177 */
			return
				BGl_expandzd2tryzd2zz__expander_tryz00(BgL_xz00_4123, BgL_ez00_4124);
		}

	}



/* &<@anonymous:1351> */
	obj_t BGl_z62zc3z04anonymousza31351ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4125, obj_t BgL_xz00_4126, obj_t BgL_ez00_4127)
	{
		{	/* Eval/expanders.scm 174 */
			return BGl_expandzd2dozd2zz__expander_doz00(BgL_xz00_4126, BgL_ez00_4127);
		}

	}



/* &<@anonymous:1347> */
	obj_t BGl_z62zc3z04anonymousza31347ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4128, obj_t BgL_xz00_4129, obj_t BgL_ez00_4130)
	{
		{	/* Eval/expanders.scm 171 */
			{	/* Eval/expanders.scm 171 */
				obj_t BgL_arg1348z00_4493;

				BgL_arg1348z00_4493 =
					BGl_expandzd2condzd2zz__expander_boolz00(BgL_xz00_4129);
				return
					PROCEDURE_ENTRY(BgL_ez00_4130) (BgL_ez00_4130, BgL_arg1348z00_4493,
					BgL_ez00_4130, BEOA);
			}
		}

	}



/* &<@anonymous:1345> */
	obj_t BGl_z62zc3z04anonymousza31345ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4131, obj_t BgL_xz00_4132, obj_t BgL_ez00_4133)
	{
		{	/* Eval/expanders.scm 167 */
			return
				BGl_expandzd2definezd2expanderz00zz__evalz00(BgL_xz00_4132,
				BgL_ez00_4133);
		}

	}



/* &<@anonymous:1343> */
	obj_t BGl_z62zc3z04anonymousza31343ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4134, obj_t BgL_xz00_4135, obj_t BgL_ez00_4136)
	{
		{	/* Eval/expanders.scm 163 */
			return
				BGl_expandzd2definezd2hygienezd2macrozd2zz__evalz00(BgL_xz00_4135,
				BgL_ez00_4136);
		}

	}



/* &<@anonymous:1341> */
	obj_t BGl_z62zc3z04anonymousza31341ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4137, obj_t BgL_xz00_4138, obj_t BgL_ez00_4139)
	{
		{	/* Eval/expanders.scm 159 */
			return
				BGl_expandzd2definezd2macroz00zz__evalz00(BgL_xz00_4138, BgL_ez00_4139);
		}

	}



/* &<@anonymous:1339> */
	obj_t BGl_z62zc3z04anonymousza31339ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4140, obj_t BgL_xz00_4141, obj_t BgL_ez00_4142)
	{
		{	/* Eval/expanders.scm 156 */
			return BgL_xz00_4141;
		}

	}



/* &<@anonymous:1336> */
	obj_t BGl_z62zc3z04anonymousza31336ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4143, obj_t BgL_xz00_4144, obj_t BgL_ez00_4145)
	{
		{	/* Eval/expanders.scm 153 */
			{	/* Eval/expanders.scm 153 */
				obj_t BgL_arg1337z00_4494;

				BgL_arg1337z00_4494 =
					BGl_quasiquotationz00zz__expander_quotez00(BINT(((long) 1)),
					BgL_xz00_4144);
				return PROCEDURE_ENTRY(BgL_ez00_4145) (BgL_ez00_4145,
					BgL_arg1337z00_4494, BgL_ez00_4145, BEOA);
			}
		}

	}



/* &<@anonymous:1311> */
	obj_t BGl_z62zc3z04anonymousza31311ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4146, obj_t BgL_xz00_4147, obj_t BgL_ez00_4148)
	{
		{	/* Eval/expanders.scm 138 */
			{	/* Eval/expanders.scm 139 */
				bool_t BgL_test2745z00_5348;

				{
					obj_t BgL_l1085z00_4496;

					BgL_l1085z00_4496 = BgL_xz00_4147;
				BgL_zc3z04anonymousza31332ze3z87_4495:
					if (NULLP(BgL_l1085z00_4496))
						{	/* Eval/expanders.scm 139 */
							BgL_test2745z00_5348 = ((bool_t) 1);
						}
					else
						{	/* Eval/expanders.scm 139 */
							bool_t BgL_test2747z00_5351;

							{	/* Eval/expanders.scm 139 */
								obj_t BgL_tmpz00_5352;

								BgL_tmpz00_5352 = CAR(((obj_t) BgL_l1085z00_4496));
								BgL_test2747z00_5351 = SYMBOLP(BgL_tmpz00_5352);
							}
							if (BgL_test2747z00_5351)
								{
									obj_t BgL_l1085z00_5356;

									BgL_l1085z00_5356 = CDR(((obj_t) BgL_l1085z00_4496));
									BgL_l1085z00_4496 = BgL_l1085z00_5356;
									goto BgL_zc3z04anonymousza31332ze3z87_4495;
								}
							else
								{	/* Eval/expanders.scm 139 */
									BgL_test2745z00_5348 = ((bool_t) 0);
								}
						}
				}
				if (BgL_test2745z00_5348)
					{
						obj_t BgL_vz00_4498;
						obj_t BgL_restz00_4499;

						if (PAIRP(BgL_xz00_4147))
							{	/* Eval/expanders.scm 140 */
								obj_t BgL_cdrzd2118zd2_4506;

								BgL_cdrzd2118zd2_4506 = CDR(BgL_xz00_4147);
								if (PAIRP(BgL_cdrzd2118zd2_4506))
									{	/* Eval/expanders.scm 140 */
										BgL_vz00_4498 = CAR(BgL_cdrzd2118zd2_4506);
										BgL_restz00_4499 = CDR(BgL_cdrzd2118zd2_4506);
										{	/* Eval/expanders.scm 142 */
											obj_t BgL_nvz00_4500;

											BgL_nvz00_4500 =
												PROCEDURE_ENTRY(BgL_ez00_4148) (BgL_ez00_4148,
												BgL_vz00_4498, BgL_ez00_4148, BEOA);
											if (PAIRP(BgL_nvz00_4500))
												{	/* Eval/expanders.scm 143 */
													if (
														(CAR(BgL_nvz00_4500) ==
															BGl_symbol2386z00zz__install_expandersz00))
														{	/* Eval/expanders.scm 143 */
															obj_t BgL_arg1326z00_4501;

															BgL_arg1326z00_4501 = CDR(BgL_nvz00_4500);
															{	/* Eval/expanders.scm 145 */
																obj_t BgL_arg1328z00_4502;

																{	/* Eval/expanders.scm 145 */
																	obj_t BgL_arg1329z00_4503;

																	BgL_arg1329z00_4503 =
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg1326z00_4501,
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_restz00_4499, BNIL));
																	BgL_arg1328z00_4502 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2386z00zz__install_expandersz00,
																		BgL_arg1329z00_4503);
																}
																return
																	BGl_evepairifyz00zz__prognz00
																	(BgL_arg1328z00_4502, BgL_xz00_4147);
															}
														}
													else
														{	/* Eval/expanders.scm 143 */
															{	/* Eval/expanders.scm 147 */
																obj_t BgL_arg1331z00_4504;

																BgL_arg1331z00_4504 =
																	CDR(((obj_t) BgL_xz00_4147));
																{	/* Eval/expanders.scm 147 */
																	obj_t BgL_tmpz00_5381;

																	BgL_tmpz00_5381 =
																		((obj_t) BgL_arg1331z00_4504);
																	SET_CAR(BgL_tmpz00_5381, BgL_nvz00_4500);
																}
															}
															return BgL_xz00_4147;
														}
												}
											else
												{	/* Eval/expanders.scm 143 */
													{	/* Eval/expanders.scm 147 */
														obj_t BgL_arg1331z00_4505;

														BgL_arg1331z00_4505 = CDR(((obj_t) BgL_xz00_4147));
														{	/* Eval/expanders.scm 147 */
															obj_t BgL_tmpz00_5386;

															BgL_tmpz00_5386 = ((obj_t) BgL_arg1331z00_4505);
															SET_CAR(BgL_tmpz00_5386, BgL_nvz00_4500);
														}
													}
													return BgL_xz00_4147;
												}
										}
									}
								else
									{	/* Eval/expanders.scm 140 */
										return
											BGl_expandzd2errorzd2zz__install_expandersz00
											(BGl_string2387z00zz__install_expandersz00,
											BGl_string2532z00zz__install_expandersz00, BgL_xz00_4147);
									}
							}
						else
							{	/* Eval/expanders.scm 140 */
								return
									BGl_expandzd2errorzd2zz__install_expandersz00
									(BGl_string2387z00zz__install_expandersz00,
									BGl_string2532z00zz__install_expandersz00, BgL_xz00_4147);
							}
					}
				else
					{	/* Eval/expanders.scm 95 */
						obj_t BgL_locz00_4507;

						{	/* Eval/expanders.scm 95 */
							bool_t BgL_test2752z00_5393;

							{	/* Eval/expanders.scm 95 */
								bool_t BgL_res2121z00_4508;

								BgL_res2121z00_4508 = EPAIRP(BgL_xz00_4147);
								BgL_test2752z00_5393 = BgL_res2121z00_4508;
							}
							if (BgL_test2752z00_5393)
								{	/* Eval/expanders.scm 95 */
									BgL_locz00_4507 = CER(((obj_t) BgL_xz00_4147));
								}
							else
								{	/* Eval/expanders.scm 95 */
									BgL_locz00_4507 = BFALSE;
								}
						}
						{	/* Eval/expanders.scm 96 */
							bool_t BgL_test2753z00_5397;

							if (PAIRP(BgL_locz00_4507))
								{	/* Eval/expanders.scm 96 */
									bool_t BgL_test2755z00_5400;

									{	/* Eval/expanders.scm 96 */
										obj_t BgL_tmpz00_5401;

										BgL_tmpz00_5401 = CDR(BgL_locz00_4507);
										BgL_test2755z00_5400 = PAIRP(BgL_tmpz00_5401);
									}
									if (BgL_test2755z00_5400)
										{	/* Eval/expanders.scm 96 */
											obj_t BgL_tmpz00_5404;

											BgL_tmpz00_5404 = CDR(CDR(BgL_locz00_4507));
											BgL_test2753z00_5397 = PAIRP(BgL_tmpz00_5404);
										}
									else
										{	/* Eval/expanders.scm 96 */
											BgL_test2753z00_5397 = ((bool_t) 0);
										}
								}
							else
								{	/* Eval/expanders.scm 96 */
									BgL_test2753z00_5397 = ((bool_t) 0);
								}
							if (BgL_test2753z00_5397)
								{	/* Eval/expanders.scm 96 */
									return
										BGl_errorzf2locationzf2zz__errorz00
										(BGl_string2387z00zz__install_expandersz00,
										BGl_string2532z00zz__install_expandersz00, BgL_xz00_4147,
										CAR(CDR(BgL_locz00_4507)), CAR(CDR(CDR(BgL_locz00_4507))));
								}
							else
								{	/* Eval/expanders.scm 96 */
									return
										BGl_errorz00zz__errorz00
										(BGl_string2387z00zz__install_expandersz00,
										BGl_string2532z00zz__install_expandersz00, BgL_xz00_4147);
								}
						}
					}
			}
		}

	}



/* &<@anonymous:1292> */
	obj_t BGl_z62zc3z04anonymousza31292ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4149, obj_t BgL_xz00_4150, obj_t BgL_ez00_4151)
	{
		{	/* Eval/expanders.scm 131 */
			if (PAIRP(BgL_xz00_4150))
				{	/* Eval/expanders.scm 131 */
					obj_t BgL_cdrzd2105zd2_4509;

					BgL_cdrzd2105zd2_4509 = CDR(BgL_xz00_4150);
					if ((CAR(BgL_xz00_4150) == BGl_symbol2383z00zz__install_expandersz00))
						{	/* Eval/expanders.scm 131 */
							if (PAIRP(BgL_cdrzd2105zd2_4509))
								{	/* Eval/expanders.scm 131 */
									obj_t BgL_cdrzd2107zd2_4510;

									BgL_cdrzd2107zd2_4510 = CDR(BgL_cdrzd2105zd2_4509);
									{	/* Eval/expanders.scm 131 */
										bool_t BgL_test2759z00_5424;

										{	/* Eval/expanders.scm 131 */
											obj_t BgL_tmpz00_5425;

											BgL_tmpz00_5425 = CAR(BgL_cdrzd2105zd2_4509);
											BgL_test2759z00_5424 = SYMBOLP(BgL_tmpz00_5425);
										}
										if (BgL_test2759z00_5424)
											{	/* Eval/expanders.scm 131 */
												if (PAIRP(BgL_cdrzd2107zd2_4510))
													{	/* Eval/expanders.scm 131 */
														bool_t BgL_test2761z00_5430;

														{	/* Eval/expanders.scm 131 */
															obj_t BgL_tmpz00_5431;

															BgL_tmpz00_5431 = CAR(BgL_cdrzd2107zd2_4510);
															BgL_test2761z00_5430 = SYMBOLP(BgL_tmpz00_5431);
														}
														if (BgL_test2761z00_5430)
															{	/* Eval/expanders.scm 131 */
																if (NULLP(CDR(BgL_cdrzd2107zd2_4510)))
																	{	/* Eval/expanders.scm 131 */
																		return BgL_xz00_4150;
																	}
																else
																	{	/* Eval/expanders.scm 131 */
																		return
																			BGl_expandzd2errorzd2zz__install_expandersz00
																			(BGl_string2384z00zz__install_expandersz00,
																			BGl_string2532z00zz__install_expandersz00,
																			BgL_xz00_4150);
																	}
															}
														else
															{	/* Eval/expanders.scm 131 */
																return
																	BGl_expandzd2errorzd2zz__install_expandersz00
																	(BGl_string2384z00zz__install_expandersz00,
																	BGl_string2532z00zz__install_expandersz00,
																	BgL_xz00_4150);
															}
													}
												else
													{	/* Eval/expanders.scm 131 */
														return
															BGl_expandzd2errorzd2zz__install_expandersz00
															(BGl_string2384z00zz__install_expandersz00,
															BGl_string2532z00zz__install_expandersz00,
															BgL_xz00_4150);
													}
											}
										else
											{	/* Eval/expanders.scm 131 */
												return
													BGl_expandzd2errorzd2zz__install_expandersz00
													(BGl_string2384z00zz__install_expandersz00,
													BGl_string2532z00zz__install_expandersz00,
													BgL_xz00_4150);
											}
									}
								}
							else
								{	/* Eval/expanders.scm 131 */
									return
										BGl_expandzd2errorzd2zz__install_expandersz00
										(BGl_string2384z00zz__install_expandersz00,
										BGl_string2532z00zz__install_expandersz00, BgL_xz00_4150);
								}
						}
					else
						{	/* Eval/expanders.scm 131 */
							return
								BGl_expandzd2errorzd2zz__install_expandersz00
								(BGl_string2384z00zz__install_expandersz00,
								BGl_string2532z00zz__install_expandersz00, BgL_xz00_4150);
						}
				}
			else
				{	/* Eval/expanders.scm 131 */
					return
						BGl_expandzd2errorzd2zz__install_expandersz00
						(BGl_string2384z00zz__install_expandersz00,
						BGl_string2532z00zz__install_expandersz00, BgL_xz00_4150);
				}
		}

	}



/* &<@anonymous:1290> */
	obj_t BGl_z62zc3z04anonymousza31290ze3ze5zz__install_expandersz00(obj_t
		BgL_envz00_4152, obj_t BgL_xz00_4153, obj_t BgL_ez00_4154)
	{
		{	/* Eval/expanders.scm 128 */
			return
				BGl_expandzd2quotezd2zz__expander_quotez00(BgL_xz00_4153,
				BgL_ez00_4154);
		}

	}



/* make-if~0 */
	obj_t BGl_makezd2ifze70z35zz__install_expandersz00(obj_t BgL_testz00_1852,
		obj_t BgL_thenz00_1853, obj_t BgL_elsez00_1854)
	{
		{	/* Eval/expanders.scm 475 */
			{

				if (PAIRP(BgL_testz00_1852))
					{	/* Eval/expanders.scm 475 */
						obj_t BgL_cdrzd2355zd2_1861;

						BgL_cdrzd2355zd2_1861 = CDR(BgL_testz00_1852);
						if (
							(CAR(BgL_testz00_1852) ==
								BGl_symbol2540z00zz__install_expandersz00))
							{	/* Eval/expanders.scm 475 */
								if (PAIRP(BgL_cdrzd2355zd2_1861))
									{	/* Eval/expanders.scm 475 */
										if (NULLP(CDR(BgL_cdrzd2355zd2_1861)))
											{	/* Eval/expanders.scm 475 */
												obj_t BgL_arg1707z00_1867;

												BgL_arg1707z00_1867 = CAR(BgL_cdrzd2355zd2_1861);
												{	/* Eval/expanders.scm 473 */
													obj_t BgL_arg1710z00_3400;

													{	/* Eval/expanders.scm 473 */
														obj_t BgL_arg1711z00_3401;

														{	/* Eval/expanders.scm 473 */
															obj_t BgL_arg1712z00_3402;

															BgL_arg1712z00_3402 =
																MAKE_YOUNG_PAIR(BgL_thenz00_1853, BNIL);
															BgL_arg1711z00_3401 =
																MAKE_YOUNG_PAIR(BgL_elsez00_1854,
																BgL_arg1712z00_3402);
														}
														BgL_arg1710z00_3400 =
															MAKE_YOUNG_PAIR(BgL_arg1707z00_1867,
															BgL_arg1711z00_3401);
													}
													return
														MAKE_YOUNG_PAIR
														(BGl_symbol2375z00zz__install_expandersz00,
														BgL_arg1710z00_3400);
												}
											}
										else
											{	/* Eval/expanders.scm 475 */
											BgL_tagzd2350zd2_1858:
												{	/* Eval/expanders.scm 475 */
													obj_t BgL_arg1713z00_1873;

													{	/* Eval/expanders.scm 475 */
														obj_t BgL_arg1716z00_1874;

														{	/* Eval/expanders.scm 475 */
															obj_t BgL_arg1717z00_1875;

															BgL_arg1717z00_1875 =
																MAKE_YOUNG_PAIR(BgL_elsez00_1854, BNIL);
															BgL_arg1716z00_1874 =
																MAKE_YOUNG_PAIR(BgL_thenz00_1853,
																BgL_arg1717z00_1875);
														}
														BgL_arg1713z00_1873 =
															MAKE_YOUNG_PAIR(BgL_testz00_1852,
															BgL_arg1716z00_1874);
													}
													return
														MAKE_YOUNG_PAIR
														(BGl_symbol2375z00zz__install_expandersz00,
														BgL_arg1713z00_1873);
												}
											}
									}
								else
									{	/* Eval/expanders.scm 475 */
										goto BgL_tagzd2350zd2_1858;
									}
							}
						else
							{	/* Eval/expanders.scm 475 */
								goto BgL_tagzd2350zd2_1858;
							}
					}
				else
					{	/* Eval/expanders.scm 475 */
						goto BgL_tagzd2350zd2_1858;
					}
			}
		}

	}



/* &expand-if */
	obj_t BGl_z62expandzd2ifzb0zz__install_expandersz00(obj_t BgL_envz00_4188,
		obj_t BgL_xz00_4189, obj_t BgL_ez00_4190)
	{
		{	/* Eval/expanders.scm 468 */
			if (PAIRP(BgL_xz00_4189))
				{	/* Eval/expanders.scm 477 */
					obj_t BgL_cdrzd2371zd2_4511;

					BgL_cdrzd2371zd2_4511 = CDR(BgL_xz00_4189);
					if ((CAR(BgL_xz00_4189) == BGl_symbol2375z00zz__install_expandersz00))
						{	/* Eval/expanders.scm 477 */
							if (PAIRP(BgL_cdrzd2371zd2_4511))
								{	/* Eval/expanders.scm 477 */
									obj_t BgL_cdrzd2376zd2_4512;

									BgL_cdrzd2376zd2_4512 = CDR(BgL_cdrzd2371zd2_4511);
									if (PAIRP(BgL_cdrzd2376zd2_4512))
										{	/* Eval/expanders.scm 477 */
											obj_t BgL_cdrzd2381zd2_4513;

											BgL_cdrzd2381zd2_4513 = CDR(BgL_cdrzd2376zd2_4512);
											if (PAIRP(BgL_cdrzd2381zd2_4513))
												{	/* Eval/expanders.scm 477 */
													if (NULLP(CDR(BgL_cdrzd2381zd2_4513)))
														{	/* Eval/expanders.scm 477 */
															obj_t BgL_arg1672z00_4514;
															obj_t BgL_arg1675z00_4515;
															obj_t BgL_arg1683z00_4516;

															BgL_arg1672z00_4514 = CAR(BgL_cdrzd2371zd2_4511);
															BgL_arg1675z00_4515 = CAR(BgL_cdrzd2376zd2_4512);
															BgL_arg1683z00_4516 = CAR(BgL_cdrzd2381zd2_4513);
															{	/* Eval/expanders.scm 479 */
																obj_t BgL_nxz00_4517;

																{	/* Eval/expanders.scm 479 */
																	obj_t BgL_arg1693z00_4518;
																	obj_t BgL_arg1695z00_4519;
																	obj_t BgL_arg1696z00_4520;

																	BgL_arg1693z00_4518 =
																		BGl_expandzd2testzd2zz__install_expandersz00
																		(BgL_arg1672z00_4514, BgL_ez00_4190);
																	BgL_arg1695z00_4519 =
																		PROCEDURE_ENTRY(BgL_ez00_4190)
																		(BgL_ez00_4190, BgL_arg1675z00_4515,
																		BgL_ez00_4190, BEOA);
																	BgL_arg1696z00_4520 =
																		PROCEDURE_ENTRY(BgL_ez00_4190)
																		(BgL_ez00_4190, BgL_arg1683z00_4516,
																		BgL_ez00_4190, BEOA);
																	BgL_nxz00_4517 =
																		BGl_makezd2ifze70z35zz__install_expandersz00
																		(BgL_arg1693z00_4518, BgL_arg1695z00_4519,
																		BgL_arg1696z00_4520);
																}
																return
																	BGl_evepairifyzd2deepzd2zz__prognz00
																	(BgL_nxz00_4517, BgL_xz00_4189);
															}
														}
													else
														{	/* Eval/expanders.scm 477 */
															return
																BGl_expandzd2errorzd2zz__install_expandersz00
																(BGl_string2376z00zz__install_expandersz00,
																BGl_string2532z00zz__install_expandersz00,
																BgL_xz00_4189);
														}
												}
											else
												{	/* Eval/expanders.scm 477 */
													obj_t BgL_cdrzd2406zd2_4521;

													BgL_cdrzd2406zd2_4521 =
														CDR(((obj_t) BgL_cdrzd2371zd2_4511));
													if (NULLP(CDR(((obj_t) BgL_cdrzd2406zd2_4521))))
														{	/* Eval/expanders.scm 477 */
															obj_t BgL_arg1687z00_4522;
															obj_t BgL_arg1688z00_4523;

															BgL_arg1687z00_4522 =
																CAR(((obj_t) BgL_cdrzd2371zd2_4511));
															BgL_arg1688z00_4523 =
																CAR(((obj_t) BgL_cdrzd2406zd2_4521));
															{	/* Eval/expanders.scm 482 */
																obj_t BgL_nxz00_4524;

																{	/* Eval/expanders.scm 482 */
																	obj_t BgL_arg1697z00_4525;
																	obj_t BgL_arg1698z00_4526;

																	BgL_arg1697z00_4525 =
																		BGl_expandzd2testzd2zz__install_expandersz00
																		(BgL_arg1687z00_4522, BgL_ez00_4190);
																	BgL_arg1698z00_4526 =
																		PROCEDURE_ENTRY(BgL_ez00_4190)
																		(BgL_ez00_4190, BgL_arg1688z00_4523,
																		BgL_ez00_4190, BEOA);
																	BgL_nxz00_4524 =
																		BGl_makezd2ifze70z35zz__install_expandersz00
																		(BgL_arg1697z00_4525, BgL_arg1698z00_4526,
																		BFALSE);
																}
																return
																	BGl_evepairifyzd2deepzd2zz__prognz00
																	(BgL_nxz00_4524, BgL_xz00_4189);
															}
														}
													else
														{	/* Eval/expanders.scm 477 */
															return
																BGl_expandzd2errorzd2zz__install_expandersz00
																(BGl_string2376z00zz__install_expandersz00,
																BGl_string2532z00zz__install_expandersz00,
																BgL_xz00_4189);
														}
												}
										}
									else
										{	/* Eval/expanders.scm 477 */
											return
												BGl_expandzd2errorzd2zz__install_expandersz00
												(BGl_string2376z00zz__install_expandersz00,
												BGl_string2532z00zz__install_expandersz00,
												BgL_xz00_4189);
										}
								}
							else
								{	/* Eval/expanders.scm 477 */
									return
										BGl_expandzd2errorzd2zz__install_expandersz00
										(BGl_string2376z00zz__install_expandersz00,
										BGl_string2532z00zz__install_expandersz00, BgL_xz00_4189);
								}
						}
					else
						{	/* Eval/expanders.scm 477 */
							return
								BGl_expandzd2errorzd2zz__install_expandersz00
								(BGl_string2376z00zz__install_expandersz00,
								BGl_string2532z00zz__install_expandersz00, BgL_xz00_4189);
						}
				}
			else
				{	/* Eval/expanders.scm 477 */
					return
						BGl_expandzd2errorzd2zz__install_expandersz00
						(BGl_string2376z00zz__install_expandersz00,
						BGl_string2532z00zz__install_expandersz00, BgL_xz00_4189);
				}
		}

	}



/* &expand-tprint */
	obj_t BGl_z62expandzd2tprintzb0zz__install_expandersz00(obj_t BgL_envz00_4173,
		obj_t BgL_xz00_4174, obj_t BgL_ez00_4175)
	{
		{	/* Eval/expanders.scm 490 */
			{	/* Eval/expanders.scm 491 */
				obj_t BgL_objz00_4527;

				BgL_objz00_4527 = BGl_list2542z00zz__install_expandersz00;
				{	/* Eval/expanders.scm 491 */
					obj_t BgL_tmpz00_5522;

					BgL_tmpz00_5522 = ((obj_t) BgL_xz00_4174);
					SET_CAR(BgL_tmpz00_5522, BgL_objz00_4527);
				}
			}
			{	/* Eval/expanders.scm 492 */
				obj_t BgL_arg1719z00_4528;

				{	/* Eval/expanders.scm 492 */
					bool_t BgL_test2774z00_5525;

					{	/* Eval/expanders.scm 492 */
						bool_t BgL_res2243z00_4529;

						BgL_res2243z00_4529 = EPAIRP(BgL_xz00_4174);
						BgL_test2774z00_5525 = BgL_res2243z00_4529;
					}
					if (BgL_test2774z00_5525)
						{
							obj_t BgL_namez00_4532;
							obj_t BgL_posz00_4533;

							{	/* Eval/expanders.scm 493 */
								obj_t BgL_ezd2434zd2_4544;

								BgL_ezd2434zd2_4544 = CER(((obj_t) BgL_xz00_4174));
								if (PAIRP(BgL_ezd2434zd2_4544))
									{	/* Eval/expanders.scm 493 */
										obj_t BgL_cdrzd2440zd2_4545;

										BgL_cdrzd2440zd2_4545 = CDR(BgL_ezd2434zd2_4544);
										if (
											(CAR(BgL_ezd2434zd2_4544) ==
												BGl_symbol2550z00zz__install_expandersz00))
											{	/* Eval/expanders.scm 493 */
												if (PAIRP(BgL_cdrzd2440zd2_4545))
													{	/* Eval/expanders.scm 493 */
														obj_t BgL_cdrzd2444zd2_4546;

														BgL_cdrzd2444zd2_4546 = CDR(BgL_cdrzd2440zd2_4545);
														if (PAIRP(BgL_cdrzd2444zd2_4546))
															{	/* Eval/expanders.scm 493 */
																if (NULLP(CDR(BgL_cdrzd2444zd2_4546)))
																	{	/* Eval/expanders.scm 493 */
																		BgL_namez00_4532 =
																			CAR(BgL_cdrzd2440zd2_4545);
																		BgL_posz00_4533 =
																			CAR(BgL_cdrzd2444zd2_4546);
																		{	/* Eval/expanders.scm 497 */
																			obj_t BgL_arg1733z00_4534;

																			{	/* Eval/expanders.scm 497 */
																				obj_t BgL_arg1734z00_4535;

																				{	/* Eval/expanders.scm 497 */
																					obj_t BgL_arg1736z00_4536;
																					obj_t BgL_arg1737z00_4537;

																					BgL_arg1736z00_4536 =
																						BGl_relativezd2filezd2namez00zz__osz00
																						(BgL_namez00_4532,
																						BGl_pwdz00zz__osz00());
																					{	/* Eval/expanders.scm 499 */
																						obj_t BgL_arg1739z00_4538;

																						{	/* Eval/expanders.scm 499 */
																							obj_t BgL_arg1740z00_4539;
																							obj_t BgL_arg1741z00_4540;

																							BgL_arg1740z00_4539 =
																								BGl_filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00
																								(CINT(BgL_posz00_4533),
																								BgL_namez00_4532);
																							{	/* Eval/expanders.scm 501 */
																								obj_t BgL_arg1742z00_4541;

																								BgL_arg1742z00_4541 =
																									CDR(((obj_t) BgL_xz00_4174));
																								BgL_arg1741z00_4540 =
																									MAKE_YOUNG_PAIR
																									(BGl_string2545z00zz__install_expandersz00,
																									BgL_arg1742z00_4541);
																							}
																							BgL_arg1739z00_4538 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1740z00_4539,
																								BgL_arg1741z00_4540);
																						}
																						BgL_arg1737z00_4537 =
																							MAKE_YOUNG_PAIR
																							(BGl_string2546z00zz__install_expandersz00,
																							BgL_arg1739z00_4538);
																					}
																					BgL_arg1734z00_4535 =
																						MAKE_YOUNG_PAIR(BgL_arg1736z00_4536,
																						BgL_arg1737z00_4537);
																				}
																				BgL_arg1733z00_4534 =
																					MAKE_YOUNG_PAIR
																					(BGl_list2547z00zz__install_expandersz00,
																					BgL_arg1734z00_4535);
																			}
																			{	/* Eval/expanders.scm 495 */
																				obj_t BgL_tmpz00_5554;

																				BgL_tmpz00_5554 =
																					((obj_t) BgL_xz00_4174);
																				SET_CDR(BgL_tmpz00_5554,
																					BgL_arg1733z00_4534);
																			}
																		}
																		BgL_arg1719z00_4528 = BgL_xz00_4174;
																	}
																else
																	{	/* Eval/expanders.scm 493 */
																	BgL_tagzd2433zd2_4531:
																		{	/* Eval/expanders.scm 504 */
																			obj_t BgL_arg1743z00_4542;

																			{	/* Eval/expanders.scm 504 */
																				obj_t BgL_arg1744z00_4543;

																				BgL_arg1744z00_4543 =
																					CDR(((obj_t) BgL_xz00_4174));
																				BgL_arg1743z00_4542 =
																					MAKE_YOUNG_PAIR
																					(BGl_list2547z00zz__install_expandersz00,
																					BgL_arg1744z00_4543);
																			}
																			{	/* Eval/expanders.scm 504 */
																				obj_t BgL_tmpz00_5562;

																				BgL_tmpz00_5562 =
																					((obj_t) BgL_xz00_4174);
																				SET_CDR(BgL_tmpz00_5562,
																					BgL_arg1743z00_4542);
																			}
																		}
																		BgL_arg1719z00_4528 = BgL_xz00_4174;
																	}
															}
														else
															{	/* Eval/expanders.scm 493 */
																goto BgL_tagzd2433zd2_4531;
															}
													}
												else
													{	/* Eval/expanders.scm 493 */
														goto BgL_tagzd2433zd2_4531;
													}
											}
										else
											{	/* Eval/expanders.scm 493 */
												goto BgL_tagzd2433zd2_4531;
											}
									}
								else
									{	/* Eval/expanders.scm 493 */
										goto BgL_tagzd2433zd2_4531;
									}
							}
						}
					else
						{	/* Eval/expanders.scm 492 */
							{	/* Eval/expanders.scm 507 */
								obj_t BgL_arg1745z00_4547;

								{	/* Eval/expanders.scm 507 */
									obj_t BgL_arg1746z00_4548;

									BgL_arg1746z00_4548 = CDR(((obj_t) BgL_xz00_4174));
									BgL_arg1745z00_4547 =
										MAKE_YOUNG_PAIR(BGl_list2547z00zz__install_expandersz00,
										BgL_arg1746z00_4548);
								}
								{	/* Eval/expanders.scm 507 */
									obj_t BgL_tmpz00_5568;

									BgL_tmpz00_5568 = ((obj_t) BgL_xz00_4174);
									SET_CDR(BgL_tmpz00_5568, BgL_arg1745z00_4547);
								}
							}
							BgL_arg1719z00_4528 = BgL_xz00_4174;
						}
				}
				return
					PROCEDURE_ENTRY(BgL_ez00_4175) (BgL_ez00_4175, BgL_arg1719z00_4528,
					BgL_ez00_4175, BEOA);
			}
		}

	}



/* &expand-begin */
	obj_t BGl_z62expandzd2beginzb0zz__install_expandersz00(obj_t BgL_envz00_4164,
		obj_t BgL_xz00_4165, obj_t BgL_ez00_4166)
	{
		{	/* Eval/expanders.scm 514 */
			{
				obj_t BgL_bodyz00_4550;

				if (PAIRP(BgL_xz00_4165))
					{	/* Eval/expanders.scm 515 */
						BgL_bodyz00_4550 = CDR(BgL_xz00_4165);
						if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_bodyz00_4550))
							{	/* Eval/expanders.scm 519 */
								obj_t BgL_arg1750z00_4551;

								if (NULLP(BgL_bodyz00_4550))
									{	/* Eval/expanders.scm 519 */
										BgL_arg1750z00_4551 = BNIL;
									}
								else
									{	/* Eval/expanders.scm 519 */
										obj_t BgL_head1137z00_4552;

										{	/* Eval/expanders.scm 519 */
											obj_t BgL_res2249z00_4553;

											BgL_res2249z00_4553 = MAKE_YOUNG_PAIR(BNIL, BNIL);
											BgL_head1137z00_4552 = BgL_res2249z00_4553;
										}
										{
											obj_t BgL_l1135z00_4555;
											obj_t BgL_tail1138z00_4556;

											BgL_l1135z00_4555 = BgL_bodyz00_4550;
											BgL_tail1138z00_4556 = BgL_head1137z00_4552;
										BgL_zc3z04anonymousza31752ze3z87_4554:
											if (NULLP(BgL_l1135z00_4555))
												{	/* Eval/expanders.scm 519 */
													BgL_arg1750z00_4551 = CDR(BgL_head1137z00_4552);
												}
											else
												{	/* Eval/expanders.scm 519 */
													obj_t BgL_newtail1139z00_4557;

													{	/* Eval/expanders.scm 519 */
														obj_t BgL_arg1755z00_4558;

														{	/* Eval/expanders.scm 519 */
															obj_t BgL_xz00_4559;

															BgL_xz00_4559 = CAR(((obj_t) BgL_l1135z00_4555));
															BgL_arg1755z00_4558 =
																PROCEDURE_ENTRY(BgL_ez00_4166) (BgL_ez00_4166,
																BgL_xz00_4559, BgL_ez00_4166, BEOA);
														}
														{	/* Eval/expanders.scm 519 */
															obj_t BgL_res2255z00_4560;

															BgL_res2255z00_4560 =
																MAKE_YOUNG_PAIR(BgL_arg1755z00_4558, BNIL);
															BgL_newtail1139z00_4557 = BgL_res2255z00_4560;
														}
													}
													SET_CDR(BgL_tail1138z00_4556,
														BgL_newtail1139z00_4557);
													{	/* Eval/expanders.scm 519 */
														obj_t BgL_arg1754z00_4561;

														BgL_arg1754z00_4561 =
															CDR(((obj_t) BgL_l1135z00_4555));
														{
															obj_t BgL_tail1138z00_5598;
															obj_t BgL_l1135z00_5597;

															BgL_l1135z00_5597 = BgL_arg1754z00_4561;
															BgL_tail1138z00_5598 = BgL_newtail1139z00_4557;
															BgL_tail1138z00_4556 = BgL_tail1138z00_5598;
															BgL_l1135z00_4555 = BgL_l1135z00_5597;
															goto BgL_zc3z04anonymousza31752ze3z87_4554;
														}
													}
												}
										}
									}
								return BGl_expandzd2prognzd2zz__prognz00(BgL_arg1750z00_4551);
							}
						else
							{	/* Eval/expanders.scm 95 */
								obj_t BgL_locz00_4562;

								{	/* Eval/expanders.scm 95 */
									bool_t BgL_test2784z00_5600;

									{	/* Eval/expanders.scm 95 */
										bool_t BgL_res2121z00_4563;

										BgL_res2121z00_4563 = EPAIRP(BgL_xz00_4165);
										BgL_test2784z00_5600 = BgL_res2121z00_4563;
									}
									if (BgL_test2784z00_5600)
										{	/* Eval/expanders.scm 95 */
											BgL_locz00_4562 = CER(((obj_t) BgL_xz00_4165));
										}
									else
										{	/* Eval/expanders.scm 95 */
											BgL_locz00_4562 = BFALSE;
										}
								}
								{	/* Eval/expanders.scm 96 */
									bool_t BgL_test2785z00_5604;

									if (PAIRP(BgL_locz00_4562))
										{	/* Eval/expanders.scm 96 */
											bool_t BgL_test2787z00_5607;

											{	/* Eval/expanders.scm 96 */
												obj_t BgL_tmpz00_5608;

												BgL_tmpz00_5608 = CDR(BgL_locz00_4562);
												BgL_test2787z00_5607 = PAIRP(BgL_tmpz00_5608);
											}
											if (BgL_test2787z00_5607)
												{	/* Eval/expanders.scm 96 */
													obj_t BgL_tmpz00_5611;

													BgL_tmpz00_5611 = CDR(CDR(BgL_locz00_4562));
													BgL_test2785z00_5604 = PAIRP(BgL_tmpz00_5611);
												}
											else
												{	/* Eval/expanders.scm 96 */
													BgL_test2785z00_5604 = ((bool_t) 0);
												}
										}
									else
										{	/* Eval/expanders.scm 96 */
											BgL_test2785z00_5604 = ((bool_t) 0);
										}
									if (BgL_test2785z00_5604)
										{	/* Eval/expanders.scm 96 */
											return
												BGl_errorzf2locationzf2zz__errorz00
												(BGl_string2431z00zz__install_expandersz00,
												BGl_string2532z00zz__install_expandersz00,
												BgL_xz00_4165, CAR(CDR(BgL_locz00_4562)),
												CAR(CDR(CDR(BgL_locz00_4562))));
										}
									else
										{	/* Eval/expanders.scm 96 */
											return
												BGl_errorz00zz__errorz00
												(BGl_string2431z00zz__install_expandersz00,
												BGl_string2532z00zz__install_expandersz00,
												BgL_xz00_4165);
										}
								}
							}
					}
				else
					{	/* Eval/expanders.scm 515 */
						return
							BGl_expandzd2errorzd2zz__install_expandersz00
							(BGl_string2431z00zz__install_expandersz00,
							BGl_string2532z00zz__install_expandersz00, BgL_xz00_4165);
					}
			}
		}

	}



/* &expand-and-let* */
	obj_t BGl_z62expandzd2andzd2letza2zc0zz__install_expandersz00(obj_t
		BgL_envz00_4176, obj_t BgL_xz00_4177, obj_t BgL_ez00_4178)
	{
		{	/* Eval/expanders.scm 526 */
			{
				obj_t BgL_clawsz00_4565;
				obj_t BgL_bodyz00_4566;

				if (PAIRP(BgL_xz00_4177))
					{	/* Eval/expanders.scm 527 */
						obj_t BgL_cdrzd2466zd2_4597;

						BgL_cdrzd2466zd2_4597 = CDR(BgL_xz00_4177);
						if (PAIRP(BgL_cdrzd2466zd2_4597))
							{	/* Eval/expanders.scm 527 */
								BgL_clawsz00_4565 = CAR(BgL_cdrzd2466zd2_4597);
								BgL_bodyz00_4566 = CDR(BgL_cdrzd2466zd2_4597);
								{	/* Eval/expanders.scm 529 */
									obj_t BgL_newzd2varszd2_4567;

									BgL_newzd2varszd2_4567 = BNIL;
									{	/* Eval/expanders.scm 529 */
										obj_t BgL_resultz00_4568;

										BgL_resultz00_4568 =
											MAKE_YOUNG_PAIR(BGl_symbol2552z00zz__install_expandersz00,
											BNIL);
										{	/* Eval/expanders.scm 529 */
											obj_t BgL_growthzd2pointzd2_4569;

											BgL_growthzd2pointzd2_4569 = BgL_resultz00_4568;
											{	/* Eval/expanders.scm 529 */

												if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
													(BgL_clawsz00_4565))
													{	/* Eval/expanders.scm 534 */
														BFALSE;
													}
												else
													{	/* Eval/expanders.scm 95 */
														obj_t BgL_locz00_4570;

														{	/* Eval/expanders.scm 95 */
															bool_t BgL_test2791z00_5632;

															{	/* Eval/expanders.scm 95 */
																bool_t BgL_res2121z00_4571;

																BgL_res2121z00_4571 = EPAIRP(BgL_clawsz00_4565);
																BgL_test2791z00_5632 = BgL_res2121z00_4571;
															}
															if (BgL_test2791z00_5632)
																{	/* Eval/expanders.scm 95 */
																	BgL_locz00_4570 =
																		CER(((obj_t) BgL_clawsz00_4565));
																}
															else
																{	/* Eval/expanders.scm 95 */
																	BgL_locz00_4570 = BFALSE;
																}
														}
														{	/* Eval/expanders.scm 96 */
															bool_t BgL_test2792z00_5636;

															if (PAIRP(BgL_locz00_4570))
																{	/* Eval/expanders.scm 96 */
																	bool_t BgL_test2794z00_5639;

																	{	/* Eval/expanders.scm 96 */
																		obj_t BgL_tmpz00_5640;

																		BgL_tmpz00_5640 = CDR(BgL_locz00_4570);
																		BgL_test2794z00_5639 =
																			PAIRP(BgL_tmpz00_5640);
																	}
																	if (BgL_test2794z00_5639)
																		{	/* Eval/expanders.scm 96 */
																			obj_t BgL_tmpz00_5643;

																			BgL_tmpz00_5643 =
																				CDR(CDR(BgL_locz00_4570));
																			BgL_test2792z00_5636 =
																				PAIRP(BgL_tmpz00_5643);
																		}
																	else
																		{	/* Eval/expanders.scm 96 */
																			BgL_test2792z00_5636 = ((bool_t) 0);
																		}
																}
															else
																{	/* Eval/expanders.scm 96 */
																	BgL_test2792z00_5636 = ((bool_t) 0);
																}
															if (BgL_test2792z00_5636)
																{	/* Eval/expanders.scm 96 */
																	BGl_errorzf2locationzf2zz__errorz00(BFALSE,
																		BGl_string2554z00zz__install_expandersz00,
																		BgL_clawsz00_4565,
																		CAR(CDR(BgL_locz00_4570)),
																		CAR(CDR(CDR(BgL_locz00_4570))));
																}
															else
																{	/* Eval/expanders.scm 96 */
																	BGl_errorz00zz__errorz00(BFALSE,
																		BGl_string2554z00zz__install_expandersz00,
																		BgL_clawsz00_4565);
																}
														}
													}
												{
													obj_t BgL_l1140z00_4573;

													BgL_l1140z00_4573 = BgL_clawsz00_4565;
												BgL_zc3z04anonymousza31762ze3z87_4572:
													if (PAIRP(BgL_l1140z00_4573))
														{	/* Eval/expanders.scm 536 */
															{	/* Eval/expanders.scm 539 */
																obj_t BgL_clawz00_4574;

																BgL_clawz00_4574 = CAR(BgL_l1140z00_4573);
																if (SYMBOLP(BgL_clawz00_4574))
																	{	/* Eval/expanders.scm 531 */
																		obj_t BgL_prevzd2pointzd2_4575;
																		obj_t BgL_clausezd2cellzd2_4576;

																		BgL_prevzd2pointzd2_4575 =
																			BgL_growthzd2pointzd2_4569;
																		BgL_clausezd2cellzd2_4576 =
																			MAKE_YOUNG_PAIR(BgL_clawz00_4574, BNIL);
																		SET_CDR(BgL_growthzd2pointzd2_4569,
																			BgL_clausezd2cellzd2_4576);
																		BgL_growthzd2pointzd2_4569 =
																			BgL_clausezd2cellzd2_4576;
																	}
																else
																	{	/* Eval/expanders.scm 542 */
																		bool_t BgL_test2797z00_5661;

																		if (PAIRP(BgL_clawz00_4574))
																			{	/* Eval/expanders.scm 542 */
																				BgL_test2797z00_5661 =
																					NULLP(CDR(BgL_clawz00_4574));
																			}
																		else
																			{	/* Eval/expanders.scm 542 */
																				BgL_test2797z00_5661 = ((bool_t) 0);
																			}
																		if (BgL_test2797z00_5661)
																			{	/* Eval/expanders.scm 544 */
																				obj_t BgL_arg1768z00_4577;

																				BgL_arg1768z00_4577 =
																					CAR(BgL_clawz00_4574);
																				{	/* Eval/expanders.scm 531 */
																					obj_t BgL_prevzd2pointzd2_4578;
																					obj_t BgL_clausezd2cellzd2_4579;

																					BgL_prevzd2pointzd2_4578 =
																						BgL_growthzd2pointzd2_4569;
																					BgL_clausezd2cellzd2_4579 =
																						MAKE_YOUNG_PAIR(BgL_arg1768z00_4577,
																						BNIL);
																					SET_CDR(BgL_growthzd2pointzd2_4569,
																						BgL_clausezd2cellzd2_4579);
																					BgL_growthzd2pointzd2_4569 =
																						BgL_clausezd2cellzd2_4579;
																				}
																			}
																		else
																			{	/* Eval/expanders.scm 546 */
																				bool_t BgL_test2799z00_5669;

																				if (PAIRP(BgL_clawz00_4574))
																					{	/* Eval/expanders.scm 546 */
																						bool_t BgL_test2801z00_5672;

																						{	/* Eval/expanders.scm 546 */
																							obj_t BgL_tmpz00_5673;

																							BgL_tmpz00_5673 =
																								CAR(BgL_clawz00_4574);
																							BgL_test2801z00_5672 =
																								SYMBOLP(BgL_tmpz00_5673);
																						}
																						if (BgL_test2801z00_5672)
																							{	/* Eval/expanders.scm 547 */
																								bool_t BgL_test2802z00_5676;

																								{	/* Eval/expanders.scm 547 */
																									obj_t BgL_tmpz00_5677;

																									BgL_tmpz00_5677 =
																										CDR(BgL_clawz00_4574);
																									BgL_test2802z00_5676 =
																										PAIRP(BgL_tmpz00_5677);
																								}
																								if (BgL_test2802z00_5676)
																									{	/* Eval/expanders.scm 547 */
																										BgL_test2799z00_5669 =
																											NULLP(CDR(CDR
																												(BgL_clawz00_4574)));
																									}
																								else
																									{	/* Eval/expanders.scm 547 */
																										BgL_test2799z00_5669 =
																											((bool_t) 0);
																									}
																							}
																						else
																							{	/* Eval/expanders.scm 546 */
																								BgL_test2799z00_5669 =
																									((bool_t) 0);
																							}
																					}
																				else
																					{	/* Eval/expanders.scm 546 */
																						BgL_test2799z00_5669 = ((bool_t) 0);
																					}
																				if (BgL_test2799z00_5669)
																					{	/* Eval/expanders.scm 548 */
																						obj_t BgL_varz00_4580;

																						BgL_varz00_4580 =
																							CAR(BgL_clawz00_4574);
																						{	/* Eval/expanders.scm 548 */
																							obj_t BgL_varzd2cellzd2_4581;

																							BgL_varzd2cellzd2_4581 =
																								MAKE_YOUNG_PAIR(BgL_varz00_4580,
																								BNIL);
																							{	/* Eval/expanders.scm 548 */

																								if (CBOOL
																									(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																										(BgL_varz00_4580,
																											BgL_newzd2varszd2_4567)))
																									{	/* Eval/expanders.scm 95 */
																										obj_t BgL_locz00_4582;

																										{	/* Eval/expanders.scm 95 */
																											bool_t
																												BgL_test2804z00_5688;
																											{	/* Eval/expanders.scm 95 */
																												bool_t
																													BgL_res2121z00_4583;
																												BgL_res2121z00_4583 =
																													EPAIRP
																													(BgL_varz00_4580);
																												BgL_test2804z00_5688 =
																													BgL_res2121z00_4583;
																											}
																											if (BgL_test2804z00_5688)
																												{	/* Eval/expanders.scm 95 */
																													BgL_locz00_4582 =
																														CER(
																														((obj_t)
																															BgL_varz00_4580));
																												}
																											else
																												{	/* Eval/expanders.scm 95 */
																													BgL_locz00_4582 =
																														BFALSE;
																												}
																										}
																										{	/* Eval/expanders.scm 96 */
																											bool_t
																												BgL_test2805z00_5692;
																											if (PAIRP
																												(BgL_locz00_4582))
																												{	/* Eval/expanders.scm 96 */
																													bool_t
																														BgL_test2807z00_5695;
																													{	/* Eval/expanders.scm 96 */
																														obj_t
																															BgL_tmpz00_5696;
																														BgL_tmpz00_5696 =
																															CDR
																															(BgL_locz00_4582);
																														BgL_test2807z00_5695
																															=
																															PAIRP
																															(BgL_tmpz00_5696);
																													}
																													if (BgL_test2807z00_5695)
																														{	/* Eval/expanders.scm 96 */
																															obj_t
																																BgL_tmpz00_5699;
																															BgL_tmpz00_5699 =
																																CDR(CDR
																																(BgL_locz00_4582));
																															BgL_test2805z00_5692
																																=
																																PAIRP
																																(BgL_tmpz00_5699);
																														}
																													else
																														{	/* Eval/expanders.scm 96 */
																															BgL_test2805z00_5692
																																= ((bool_t) 0);
																														}
																												}
																											else
																												{	/* Eval/expanders.scm 96 */
																													BgL_test2805z00_5692 =
																														((bool_t) 0);
																												}
																											if (BgL_test2805z00_5692)
																												{	/* Eval/expanders.scm 96 */
																													BGl_errorzf2locationzf2zz__errorz00
																														(BGl_string2482z00zz__install_expandersz00,
																														BGl_string2555z00zz__install_expandersz00,
																														BgL_varz00_4580,
																														CAR(CDR
																															(BgL_locz00_4582)),
																														CAR(CDR(CDR
																																(BgL_locz00_4582))));
																												}
																											else
																												{	/* Eval/expanders.scm 96 */
																													BGl_errorz00zz__errorz00
																														(BGl_string2482z00zz__install_expandersz00,
																														BGl_string2555z00zz__install_expandersz00,
																														BgL_varz00_4580);
																												}
																										}
																									}
																								else
																									{	/* Eval/expanders.scm 549 */
																										BFALSE;
																									}
																								BgL_newzd2varszd2_4567 =
																									MAKE_YOUNG_PAIR
																									(BgL_varz00_4580,
																									BgL_newzd2varszd2_4567);
																								{	/* Eval/expanders.scm 554 */
																									obj_t BgL_arg1779z00_4584;

																									{	/* Eval/expanders.scm 554 */
																										obj_t BgL_arg1780z00_4585;

																										{	/* Eval/expanders.scm 554 */
																											obj_t BgL_arg1781z00_4586;

																											{	/* Eval/expanders.scm 554 */
																												obj_t
																													BgL_arg1782z00_4587;
																												obj_t
																													BgL_arg1783z00_4588;
																												BgL_arg1782z00_4587 =
																													MAKE_YOUNG_PAIR
																													(BgL_clawz00_4574,
																													BNIL);
																												{	/* Eval/expanders.scm 554 */
																													obj_t
																														BgL_arg1784z00_4589;
																													BgL_arg1784z00_4589 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol2552z00zz__install_expandersz00,
																														BgL_varzd2cellzd2_4581);
																													BgL_arg1783z00_4588 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1784z00_4589,
																														BNIL);
																												}
																												BgL_arg1781z00_4586 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1782z00_4587,
																													BgL_arg1783z00_4588);
																											}
																											BgL_arg1780z00_4585 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2481z00zz__install_expandersz00,
																												BgL_arg1781z00_4586);
																										}
																										BgL_arg1779z00_4584 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1780z00_4585,
																											BNIL);
																									}
																									SET_CDR
																										(BgL_growthzd2pointzd2_4569,
																										BgL_arg1779z00_4584);
																								}
																								BgL_growthzd2pointzd2_4569 =
																									BgL_varzd2cellzd2_4581;
																							}
																						}
																					}
																				else
																					{	/* Eval/expanders.scm 95 */
																						obj_t BgL_locz00_4590;

																						{	/* Eval/expanders.scm 95 */
																							bool_t BgL_test2808z00_5718;

																							{	/* Eval/expanders.scm 95 */
																								bool_t BgL_res2121z00_4591;

																								BgL_res2121z00_4591 =
																									EPAIRP(BgL_clawz00_4574);
																								BgL_test2808z00_5718 =
																									BgL_res2121z00_4591;
																							}
																							if (BgL_test2808z00_5718)
																								{	/* Eval/expanders.scm 95 */
																									BgL_locz00_4590 =
																										CER(
																										((obj_t) BgL_clawz00_4574));
																								}
																							else
																								{	/* Eval/expanders.scm 95 */
																									BgL_locz00_4590 = BFALSE;
																								}
																						}
																						{	/* Eval/expanders.scm 96 */
																							bool_t BgL_test2809z00_5722;

																							if (PAIRP(BgL_locz00_4590))
																								{	/* Eval/expanders.scm 96 */
																									bool_t BgL_test2811z00_5725;

																									{	/* Eval/expanders.scm 96 */
																										obj_t BgL_tmpz00_5726;

																										BgL_tmpz00_5726 =
																											CDR(BgL_locz00_4590);
																										BgL_test2811z00_5725 =
																											PAIRP(BgL_tmpz00_5726);
																									}
																									if (BgL_test2811z00_5725)
																										{	/* Eval/expanders.scm 96 */
																											obj_t BgL_tmpz00_5729;

																											BgL_tmpz00_5729 =
																												CDR(CDR
																												(BgL_locz00_4590));
																											BgL_test2809z00_5722 =
																												PAIRP(BgL_tmpz00_5729);
																										}
																									else
																										{	/* Eval/expanders.scm 96 */
																											BgL_test2809z00_5722 =
																												((bool_t) 0);
																										}
																								}
																							else
																								{	/* Eval/expanders.scm 96 */
																									BgL_test2809z00_5722 =
																										((bool_t) 0);
																								}
																							if (BgL_test2809z00_5722)
																								{	/* Eval/expanders.scm 96 */
																									BGl_errorzf2locationzf2zz__errorz00
																										(BGl_string2482z00zz__install_expandersz00,
																										BGl_string2556z00zz__install_expandersz00,
																										BgL_clawz00_4574,
																										CAR(CDR(BgL_locz00_4590)),
																										CAR(CDR(CDR
																												(BgL_locz00_4590))));
																								}
																							else
																								{	/* Eval/expanders.scm 96 */
																									BGl_errorz00zz__errorz00
																										(BGl_string2482z00zz__install_expandersz00,
																										BGl_string2556z00zz__install_expandersz00,
																										BgL_clawz00_4574);
																								}
																						}
																					}
																			}
																	}
															}
															{
																obj_t BgL_l1140z00_5740;

																BgL_l1140z00_5740 = CDR(BgL_l1140z00_4573);
																BgL_l1140z00_4573 = BgL_l1140z00_5740;
																goto BgL_zc3z04anonymousza31762ze3z87_4572;
															}
														}
													else
														{	/* Eval/expanders.scm 536 */
															((bool_t) 1);
														}
												}
												if (NULLP(BgL_bodyz00_4566))
													{	/* Eval/expanders.scm 559 */
														BFALSE;
													}
												else
													{	/* Eval/expanders.scm 559 */
														obj_t BgL_arg1792z00_4592;

														{	/* Eval/expanders.scm 559 */
															obj_t BgL_arg1794z00_4593;

															BgL_arg1794z00_4593 =
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_bodyz00_4566, BNIL);
															BgL_arg1792z00_4592 =
																MAKE_YOUNG_PAIR
																(BGl_symbol2430z00zz__install_expandersz00,
																BgL_arg1794z00_4593);
														}
														{	/* Eval/expanders.scm 531 */
															obj_t BgL_prevzd2pointzd2_4594;
															obj_t BgL_clausezd2cellzd2_4595;

															BgL_prevzd2pointzd2_4594 =
																BgL_growthzd2pointzd2_4569;
															BgL_clausezd2cellzd2_4595 =
																MAKE_YOUNG_PAIR(BgL_arg1792z00_4592, BNIL);
															SET_CDR(BgL_growthzd2pointzd2_4569,
																BgL_clausezd2cellzd2_4595);
															BgL_growthzd2pointzd2_4569 =
																BgL_clausezd2cellzd2_4595;
														}
													}
												{	/* Eval/expanders.scm 560 */
													obj_t BgL_arg1795z00_4596;

													BgL_arg1795z00_4596 =
														PROCEDURE_ENTRY(BgL_ez00_4178) (BgL_ez00_4178,
														BgL_resultz00_4568, BgL_ez00_4178, BEOA);
													return
														BGl_evepairifyz00zz__prognz00(BgL_arg1795z00_4596,
														BgL_xz00_4177);
												}
											}
										}
									}
								}
							}
						else
							{	/* Eval/expanders.scm 527 */
								return
									BGl_expandzd2errorzd2zz__install_expandersz00
									(BGl_string2482z00zz__install_expandersz00,
									BGl_string2557z00zz__install_expandersz00, BgL_xz00_4177);
							}
					}
				else
					{	/* Eval/expanders.scm 527 */
						return
							BGl_expandzd2errorzd2zz__install_expandersz00
							(BGl_string2482z00zz__install_expandersz00,
							BGl_string2557z00zz__install_expandersz00, BgL_xz00_4177);
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__install_expandersz00()
	{
		{	/* Eval/expanders.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__install_expandersz00()
	{
		{	/* Eval/expanders.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__install_expandersz00()
	{
		{	/* Eval/expanders.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__install_expandersz00()
	{
		{	/* Eval/expanders.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__macroz00(((long) 261395457),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expander_quotez00(((long) 289720095),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expander_letz00(((long) 134702579),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expander_boolz00(((long) 229205842),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expander_casez00(((long) 73646698),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expander_definez00(((long) 380411332),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expander_doz00(((long) 285051706),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expander_tryz00(((long) 364756784),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expander_structz00(((long) 90470057),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expander_recordz00(((long) 231150939),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expander_srfi0z00(((long) 498124363),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expander_argsz00(((long) 506328507),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expander_tracez00(((long) 358612802),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 500027153),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 177147628),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__lalr_expandz00(((long) 481153205),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__rgc_expandz00(((long) 402413652),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__match_expandz00(((long) 390935588),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expandz00(((long) 414007030),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__evmodulez00(((long) 505900559),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__evobjectz00(((long) 481718239),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
			return
				BGl_modulezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00(((long)
					72617527),
				BSTRING_TO_STRING(BGl_string2558z00zz__install_expandersz00));
		}

	}

#ifdef __cplusplus
}
#endif
