/*===========================================================================*/
/*   (Eval/expddefine.scm)                                                   */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/expddefine.scm -indent -o objs/obj_u/Eval/expddefine.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_dssslzd2formalszd2ze3namesze3zz__expander_definez00(obj_t);
	extern obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	extern bool_t BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t);
	static obj_t BGl_symbol2560z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_mapzb2zb2zz__expander_definez00(obj_t, obj_t);
	static obj_t BGl_symbol2563z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2565z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2568z00zz__expander_definez00 = BUNSPEC;
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol2570z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2574z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2576z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2578z00zz__expander_definez00 = BUNSPEC;
	extern obj_t BGl_expandzd2errorzd2zz__expandz00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__expander_definez00 =
		BUNSPEC;
	static obj_t BGl_symbol2580z00zz__expander_definez00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62expandzd2evalzd2definezd2inlinezb0zz__expander_definez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62expandzd2evalzd2lambdaz62zz__expander_definez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62evalzd2beginzd2expanderz62zz__expander_definez00(obj_t,
		obj_t);
	extern obj_t bgl_reverse(obj_t);
	static obj_t BGl_genericzd2initzd2zz__expander_definez00();
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__expander_definez00();
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2evalzd2definezd2inlinezd2zz__expander_definez00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31789ze3ze5zz__expander_definez00(obj_t,
		obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_parsezd2formalzd2identz00zz__evutilsz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32035ze3ze5zz__expander_definez00(obj_t,
		obj_t);
	static obj_t BGl_appendzd221011zd2zz__expander_definez00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__expander_definez00();
	static obj_t BGl_z62zc3z04anonymousza31799ze3ze5zz__expander_definez00(obj_t,
		obj_t);
	static obj_t
		BGl_z62expandzd2evalzd2definezd2methodzb0zz__expander_definez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_evalzd2beginzd2expanderz00zz__expander_definez00(obj_t);
	static bool_t BGl_allzf3zf3zz__expander_definez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2evalzd2definezd2methodzd2zz__expander_definez00(obj_t, obj_t);
	static obj_t BGl_z62expandzd2evalzd2definez62zz__expander_definez00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_expandzd2evalzd2internalzd2definezd2zz__expander_definez00(obj_t,
		obj_t);
	static obj_t BGl_lambdazd2defineszd2zz__expander_definez00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31272ze3ze5zz__expander_definez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_pairzd2ze3listze70zd6zz__expander_definez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2evalzd2lambdaz00zz__expander_definez00(obj_t, obj_t);
	static obj_t BGl_z62newez62zz__expander_definez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_evepairifyz00zz__prognz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__expander_definez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_z62zc3z04anonymousza31632ze3ze5zz__expander_definez00(obj_t,
		obj_t);
	extern obj_t BGl_z52withzd2lexicalz80zz__expandz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00(obj_t,
		obj_t, obj_t, obj_t);
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__expander_definez00();
	static obj_t BGl_gczd2rootszd2initz00zz__expander_definez00();
	extern obj_t BGl_argszd2ze3listz31zz__evutilsz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__expander_definez00();
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2evalzd2definezd2genericzd2zz__expander_definez00(obj_t, obj_t);
	extern obj_t BGl_getzd2sourcezd2locationz00zz__readerz00(obj_t);
	static obj_t
		BGl_z62expandzd2evalzd2definezd2genericzb0zz__expander_definez00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_expandzd2evalzd2externalzd2definezd2zz__expander_definez00(obj_t,
		obj_t);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t
		BGl_dssslzd2formalszd2ze3schemezd2typedzd2formalsze3zz__dssslz00(obj_t,
		obj_t, bool_t);
	static obj_t BGl_loopze70ze7zz__expander_definez00(obj_t, obj_t);
	static obj_t BGl_symbol2527z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2532z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2535z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2537z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2539z00zz__expander_definez00 = BUNSPEC;
	extern obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2evalzd2definez00zz__expander_definez00(obj_t, obj_t);
	static obj_t BGl_symbol2544z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2547z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2549z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2551z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2553z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2555z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_getzd2argsze70z35zz__expander_definez00(obj_t, obj_t);
	static obj_t BGl_symbol2557z00zz__expander_definez00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evalzd2beginzd2expanderzd2envzd2zz__expander_definez00,
		BgL_bgl_za762evalza7d2beginza72586za7,
		BGl_z62evalzd2beginzd2expanderz62zz__expander_definez00, 0L, BUNSPEC, 1);
	extern obj_t BGl_symbolzf3zd2envz21zz__r4_symbols_6_4z00;
	   
		 
		DEFINE_STRING(BGl_string2522z00zz__expander_definez00,
		BgL_bgl_string2522za700za7za7_2587za7, "expand", 6);
	      DEFINE_STRING(BGl_string2523z00zz__expander_definez00,
		BgL_bgl_string2523za700za7za7_2588za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string2524z00zz__expander_definez00,
		BgL_bgl_string2524za700za7za7_2589za7,
		"/tmp/4.4a/runtime/Eval/expddefine.scm", 37);
	      DEFINE_STRING(BGl_string2525z00zz__expander_definez00,
		BgL_bgl_string2525za700za7za7_2590za7, "&eval-begin-expander", 20);
	      DEFINE_STRING(BGl_string2526z00zz__expander_definez00,
		BgL_bgl_string2526za700za7za7_2591za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2528z00zz__expander_definez00,
		BgL_bgl_string2528za700za7za7_2592za7, "begin", 5);
	      DEFINE_STRING(BGl_string2529z00zz__expander_definez00,
		BgL_bgl_string2529za700za7za7_2593za7, "Illegal `begin' form", 20);
	      DEFINE_STRING(BGl_string2530z00zz__expander_definez00,
		BgL_bgl_string2530za700za7za7_2594za7, "lambda", 6);
	      DEFINE_STRING(BGl_string2531z00zz__expander_definez00,
		BgL_bgl_string2531za700za7za7_2595za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string2533z00zz__expander_definez00,
		BgL_bgl_string2533za700za7za7_2596za7, "&expand-eval-lambda", 19);
	      DEFINE_STRING(BGl_string2534z00zz__expander_definez00,
		BgL_bgl_string2534za700za7za7_2597za7, "&expand-eval-define", 19);
	      DEFINE_STRING(BGl_string2536z00zz__expander_definez00,
		BgL_bgl_string2536za700za7za7_2598za7, "define", 6);
	      DEFINE_STRING(BGl_string2538z00zz__expander_definez00,
		BgL_bgl_string2538za700za7za7_2599za7, "set!", 4);
	      DEFINE_STRING(BGl_string2540z00zz__expander_definez00,
		BgL_bgl_string2540za700za7za7_2600za7, "let", 3);
	      DEFINE_STRING(BGl_string2541z00zz__expander_definez00,
		BgL_bgl_string2541za700za7za7_2601za7, "define-inline", 13);
	      DEFINE_STRING(BGl_string2542z00zz__expander_definez00,
		BgL_bgl_string2542za700za7za7_2602za7, "&expand-eval-define-inline", 26);
	      DEFINE_STRING(BGl_string2545z00zz__expander_definez00,
		BgL_bgl_string2545za700za7za7_2603za7, "generic-default", 15);
	      DEFINE_STRING(BGl_string2548z00zz__expander_definez00,
		BgL_bgl_string2548za700za7za7_2604za7, "apply", 5);
	      DEFINE_BGL_L_PROCEDURE(BGl_proc2543z00zz__expander_definez00,
		BgL_bgl_za762za7c3za704anonymo2605za7,
		BGl_z62zc3z04anonymousza31789ze3ze5zz__expander_definez00);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2definezd2inlinezd2envz00zz__expander_definez00,
		BgL_bgl_za762expandza7d2eval2606z00,
		BGl_z62expandzd2evalzd2definezd2inlinezb0zz__expander_definez00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2550z00zz__expander_definez00,
		BgL_bgl_string2550za700za7za7_2607za7, "object?", 7);
	      DEFINE_BGL_L_PROCEDURE(BGl_proc2546z00zz__expander_definez00,
		BgL_bgl_za762za7c3za704anonymo2608za7,
		BGl_z62zc3z04anonymousza31632ze3ze5zz__expander_definez00);
	      DEFINE_STRING(BGl_string2552z00zz__expander_definez00,
		BgL_bgl_string2552za700za7za7_2609za7, "find-method", 11);
	      DEFINE_STRING(BGl_string2554z00zz__expander_definez00,
		BgL_bgl_string2554za700za7za7_2610za7, "and", 3);
	      DEFINE_STRING(BGl_string2556z00zz__expander_definez00,
		BgL_bgl_string2556za700za7za7_2611za7, "procedure?", 10);
	      DEFINE_STRING(BGl_string2558z00zz__expander_definez00,
		BgL_bgl_string2558za700za7za7_2612za7, "if", 2);
	      DEFINE_STRING(BGl_string2559z00zz__expander_definez00,
		BgL_bgl_string2559za700za7za7_2613za7,
		"generics can only use one DSSSL keyword", 39);
	      DEFINE_STRING(BGl_string2561z00zz__expander_definez00,
		BgL_bgl_string2561za700za7za7_2614za7, "args", 4);
	      DEFINE_STRING(BGl_string2562z00zz__expander_definez00,
		BgL_bgl_string2562za700za7za7_2615za7,
		"Illegal formal arguments for generic function", 45);
	      DEFINE_STRING(BGl_string2564z00zz__expander_definez00,
		BgL_bgl_string2564za700za7za7_2616za7, "procedure->generic", 18);
	      DEFINE_STRING(BGl_string2566z00zz__expander_definez00,
		BgL_bgl_string2566za700za7za7_2617za7, "quote", 5);
	      DEFINE_STRING(BGl_string2567z00zz__expander_definez00,
		BgL_bgl_string2567za700za7za7_2618za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string2569z00zz__expander_definez00,
		BgL_bgl_string2569za700za7za7_2619za7, "error", 5);
	      DEFINE_STRING(BGl_string2571z00zz__expander_definez00,
		BgL_bgl_string2571za700za7za7_2620za7, "register-generic!", 17);
	      DEFINE_STRING(BGl_string2572z00zz__expander_definez00,
		BgL_bgl_string2572za700za7za7_2621za7, "define-generic", 14);
	      DEFINE_STRING(BGl_string2573z00zz__expander_definez00,
		BgL_bgl_string2573za700za7za7_2622za7, "&expand-eval-define-generic", 27);
	      DEFINE_STRING(BGl_string2575z00zz__expander_definez00,
		BgL_bgl_string2575za700za7za7_2623za7, "call-next-method", 16);
	      DEFINE_STRING(BGl_string2577z00zz__expander_definez00,
		BgL_bgl_string2577za700za7za7_2624za7, "find-super-class-method", 23);
	      DEFINE_STRING(BGl_string2579z00zz__expander_definez00,
		BgL_bgl_string2579za700za7za7_2625za7, "next", 4);
	      DEFINE_STRING(BGl_string2581z00zz__expander_definez00,
		BgL_bgl_string2581za700za7za7_2626za7, "generic-add-eval-method!", 24);
	      DEFINE_STRING(BGl_string2582z00zz__expander_definez00,
		BgL_bgl_string2582za700za7za7_2627za7, "define-method", 13);
	      DEFINE_STRING(BGl_string2583z00zz__expander_definez00,
		BgL_bgl_string2583za700za7za7_2628za7, "&expand-eval-define-method", 26);
	      DEFINE_STRING(BGl_string2585z00zz__expander_definez00,
		BgL_bgl_string2585za700za7za7_2629za7, "__expander_define", 17);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2584z00zz__expander_definez00,
		BgL_bgl_za762za7c3za704anonymo2630za7,
		BGl_z62zc3z04anonymousza32035ze3ze5zz__expander_definez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2definezd2envzd2zz__expander_definez00,
		BgL_bgl_za762expandza7d2eval2631z00,
		BGl_z62expandzd2evalzd2definez62zz__expander_definez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2definezd2genericzd2envz00zz__expander_definez00,
		BgL_bgl_za762expandza7d2eval2632z00,
		BGl_z62expandzd2evalzd2definezd2genericzb0zz__expander_definez00, 0L,
		BUNSPEC, 2);
	extern obj_t BGl_errorzd2envzd2zz__errorz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2definezd2methodzd2envz00zz__expander_definez00,
		BgL_bgl_za762expandza7d2eval2633z00,
		BGl_z62expandzd2evalzd2definezd2methodzb0zz__expander_definez00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2lambdazd2envzd2zz__expander_definez00,
		BgL_bgl_za762expandza7d2eval2634z00,
		BGl_z62expandzd2evalzd2lambdaz62zz__expander_definez00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol2560z00zz__expander_definez00));
		     ADD_ROOT((void *) (&BGl_symbol2563z00zz__expander_definez00));
		     ADD_ROOT((void *) (&BGl_symbol2565z00zz__expander_definez00));
		     ADD_ROOT((void *) (&BGl_symbol2568z00zz__expander_definez00));
		     ADD_ROOT((void *) (&BGl_symbol2570z00zz__expander_definez00));
		     ADD_ROOT((void *) (&BGl_symbol2574z00zz__expander_definez00));
		     ADD_ROOT((void *) (&BGl_symbol2576z00zz__expander_definez00));
		     ADD_ROOT((void *) (&BGl_symbol2578z00zz__expander_definez00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__expander_definez00));
		     ADD_ROOT((void *) (&BGl_symbol2580z00zz__expander_definez00));
		     ADD_ROOT((void *) (&BGl_symbol2527z00zz__expander_definez00));
		     ADD_ROOT((void *) (&BGl_symbol2532z00zz__expander_definez00));
		     ADD_ROOT((void *) (&BGl_symbol2535z00zz__expander_definez00));
		     ADD_ROOT((void *) (&BGl_symbol2537z00zz__expander_definez00));
		     ADD_ROOT((void *) (&BGl_symbol2539z00zz__expander_definez00));
		     ADD_ROOT((void *) (&BGl_symbol2544z00zz__expander_definez00));
		     ADD_ROOT((void *) (&BGl_symbol2547z00zz__expander_definez00));
		     ADD_ROOT((void *) (&BGl_symbol2549z00zz__expander_definez00));
		     ADD_ROOT((void *) (&BGl_symbol2551z00zz__expander_definez00));
		     ADD_ROOT((void *) (&BGl_symbol2553z00zz__expander_definez00));
		     ADD_ROOT((void *) (&BGl_symbol2555z00zz__expander_definez00));
		     ADD_ROOT((void *) (&BGl_symbol2557z00zz__expander_definez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__expander_definez00(long
		BgL_checksumz00_3325, char *BgL_fromz00_3326)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expander_definez00))
				{
					BGl_requirezd2initializa7ationz75zz__expander_definez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__expander_definez00();
					BGl_cnstzd2initzd2zz__expander_definez00();
					BGl_importedzd2moduleszd2initz00zz__expander_definez00();
					return BGl_methodzd2initzd2zz__expander_definez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__expander_definez00()
	{
		{	/* Eval/expddefine.scm 15 */
			BGl_symbol2527z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2528z00zz__expander_definez00);
			BGl_symbol2532z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2530z00zz__expander_definez00);
			BGl_symbol2535z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2536z00zz__expander_definez00);
			BGl_symbol2537z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2538z00zz__expander_definez00);
			BGl_symbol2539z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2540z00zz__expander_definez00);
			BGl_symbol2544z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2545z00zz__expander_definez00);
			BGl_symbol2547z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2548z00zz__expander_definez00);
			BGl_symbol2549z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2550z00zz__expander_definez00);
			BGl_symbol2551z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2552z00zz__expander_definez00);
			BGl_symbol2553z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2554z00zz__expander_definez00);
			BGl_symbol2555z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2556z00zz__expander_definez00);
			BGl_symbol2557z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2558z00zz__expander_definez00);
			BGl_symbol2560z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2561z00zz__expander_definez00);
			BGl_symbol2563z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2564z00zz__expander_definez00);
			BGl_symbol2565z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2566z00zz__expander_definez00);
			BGl_symbol2568z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2569z00zz__expander_definez00);
			BGl_symbol2570z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2571z00zz__expander_definez00);
			BGl_symbol2574z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2575z00zz__expander_definez00);
			BGl_symbol2576z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2577z00zz__expander_definez00);
			BGl_symbol2578z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2579z00zz__expander_definez00);
			return (BGl_symbol2580z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2581z00zz__expander_definez00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__expander_definez00()
	{
		{	/* Eval/expddefine.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zz__expander_definez00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1075;

				BgL_headz00_1075 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_2453;
					obj_t BgL_tailz00_2454;

					BgL_prevz00_2453 = BgL_headz00_1075;
					BgL_tailz00_2454 = BgL_l1z00_1;
				BgL_loopz00_2452:
					if (PAIRP(BgL_tailz00_2454))
						{
							obj_t BgL_newzd2prevzd2_2460;

							BgL_newzd2prevzd2_2460 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_2454), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_2453, BgL_newzd2prevzd2_2460);
							{
								obj_t BgL_tailz00_3363;
								obj_t BgL_prevz00_3362;

								BgL_prevz00_3362 = BgL_newzd2prevzd2_2460;
								BgL_tailz00_3363 = CDR(BgL_tailz00_2454);
								BgL_tailz00_2454 = BgL_tailz00_3363;
								BgL_prevz00_2453 = BgL_prevz00_3362;
								goto BgL_loopz00_2452;
							}
						}
					else
						{
							BNIL;
						}
				}
				return CDR(BgL_headz00_1075);
			}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zz__expander_definez00(obj_t BgL_ez00_3294,
		obj_t BgL_argsz00_1084)
	{
		{	/* Eval/expddefine.scm 64 */
			if (NULLP(BgL_argsz00_1084))
				{	/* Eval/expddefine.scm 66 */
					return BNIL;
				}
			else
				{	/* Eval/expddefine.scm 66 */
					if (SYMBOLP(BgL_argsz00_1084))
						{	/* Eval/expddefine.scm 68 */
							return BgL_argsz00_1084;
						}
					else
						{	/* Eval/expddefine.scm 68 */
							if (PAIRP(BgL_argsz00_1084))
								{	/* Eval/expddefine.scm 72 */
									bool_t BgL_test2640z00_3372;

									{	/* Eval/expddefine.scm 72 */
										bool_t BgL_test2641z00_3373;

										{	/* Eval/expddefine.scm 72 */
											obj_t BgL_tmpz00_3374;

											BgL_tmpz00_3374 = CAR(BgL_argsz00_1084);
											BgL_test2641z00_3373 = PAIRP(BgL_tmpz00_3374);
										}
										if (BgL_test2641z00_3373)
											{	/* Eval/expddefine.scm 73 */
												bool_t BgL_test2642z00_3377;

												{	/* Eval/expddefine.scm 73 */
													obj_t BgL_tmpz00_3378;

													BgL_tmpz00_3378 = CDR(CAR(BgL_argsz00_1084));
													BgL_test2642z00_3377 = PAIRP(BgL_tmpz00_3378);
												}
												if (BgL_test2642z00_3377)
													{	/* Eval/expddefine.scm 74 */
														obj_t BgL_tmpz00_3382;

														{	/* Eval/expddefine.scm 74 */
															obj_t BgL_pairz00_2477;

															BgL_pairz00_2477 = CAR(BgL_argsz00_1084);
															BgL_tmpz00_3382 = CDR(CDR(BgL_pairz00_2477));
														}
														BgL_test2640z00_3372 = NULLP(BgL_tmpz00_3382);
													}
												else
													{	/* Eval/expddefine.scm 73 */
														BgL_test2640z00_3372 = ((bool_t) 0);
													}
											}
										else
											{	/* Eval/expddefine.scm 72 */
												BgL_test2640z00_3372 = ((bool_t) 0);
											}
									}
									if (BgL_test2640z00_3372)
										{	/* Eval/expddefine.scm 77 */
											obj_t BgL_arg1232z00_1100;
											obj_t BgL_arg1239z00_1101;

											{	/* Eval/expddefine.scm 77 */
												obj_t BgL_arg1242z00_1102;
												obj_t BgL_arg1243z00_1103;

												BgL_arg1242z00_1102 = CAR(CAR(BgL_argsz00_1084));
												{	/* Eval/expddefine.scm 77 */
													obj_t BgL_arg1247z00_1107;

													{	/* Eval/expddefine.scm 77 */
														obj_t BgL_pairz00_2485;

														BgL_pairz00_2485 = CAR(BgL_argsz00_1084);
														BgL_arg1247z00_1107 = CAR(CDR(BgL_pairz00_2485));
													}
													BgL_arg1243z00_1103 =
														PROCEDURE_ENTRY(BgL_ez00_3294) (BgL_ez00_3294,
														BgL_arg1247z00_1107, BgL_ez00_3294, BEOA);
												}
												{	/* Eval/expddefine.scm 77 */
													obj_t BgL_list1244z00_1104;

													{	/* Eval/expddefine.scm 77 */
														obj_t BgL_arg1245z00_1105;

														BgL_arg1245z00_1105 =
															MAKE_YOUNG_PAIR(BgL_arg1243z00_1103, BNIL);
														BgL_list1244z00_1104 =
															MAKE_YOUNG_PAIR(BgL_arg1242z00_1102,
															BgL_arg1245z00_1105);
													}
													BgL_arg1232z00_1100 = BgL_list1244z00_1104;
												}
											}
											BgL_arg1239z00_1101 =
												BGl_loopze70ze7zz__expander_definez00(BgL_ez00_3294,
												CDR(BgL_argsz00_1084));
											return
												MAKE_YOUNG_PAIR(BgL_arg1232z00_1100,
												BgL_arg1239z00_1101);
										}
									else
										{	/* Eval/expddefine.scm 72 */
											return
												MAKE_YOUNG_PAIR(CAR(BgL_argsz00_1084),
												BGl_loopze70ze7zz__expander_definez00(BgL_ez00_3294,
													CDR(BgL_argsz00_1084)));
										}
								}
							else
								{	/* Eval/expddefine.scm 70 */
									return
										BGl_expandzd2errorzd2zz__expandz00
										(BGl_string2522z00zz__expander_definez00,
										BGl_string2523z00zz__expander_definez00, BgL_argsz00_1084);
								}
						}
				}
		}

	}



/* eval-begin-expander */
	BGL_EXPORTED_DEF obj_t
		BGl_evalzd2beginzd2expanderz00zz__expander_definez00(obj_t BgL_oldez00_5)
	{
		{	/* Eval/expddefine.scm 83 */
			{	/* Eval/expddefine.scm 84 */
				obj_t BgL_zc3z04anonymousza31272ze3z87_3248;

				BgL_zc3z04anonymousza31272ze3z87_3248 =
					MAKE_FX_PROCEDURE
					(BGl_z62zc3z04anonymousza31272ze3ze5zz__expander_definez00,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31272ze3z87_3248, (int) (((long) 0)),
					((obj_t) BgL_oldez00_5));
				return BgL_zc3z04anonymousza31272ze3z87_3248;
			}
		}

	}



/* &eval-begin-expander */
	obj_t BGl_z62evalzd2beginzd2expanderz62zz__expander_definez00(obj_t
		BgL_envz00_3249, obj_t BgL_oldez00_3250)
	{
		{	/* Eval/expddefine.scm 83 */
			{	/* Eval/expddefine.scm 84 */
				obj_t BgL_auxz00_3413;

				if (PROCEDUREP(BgL_oldez00_3250))
					{	/* Eval/expddefine.scm 84 */
						BgL_auxz00_3413 = BgL_oldez00_3250;
					}
				else
					{
						obj_t BgL_auxz00_3416;

						BgL_auxz00_3416 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2524z00zz__expander_definez00, BINT(((long) 2836)),
							BGl_string2525z00zz__expander_definez00,
							BGl_string2526z00zz__expander_definez00, BgL_oldez00_3250);
						FAILURE(BgL_auxz00_3416, BFALSE, BFALSE);
					}
				return
					BGl_evalzd2beginzd2expanderz00zz__expander_definez00(BgL_auxz00_3413);
			}
		}

	}



/* &<@anonymous:1272> */
	obj_t BGl_z62zc3z04anonymousza31272ze3ze5zz__expander_definez00(obj_t
		BgL_envz00_3251, obj_t BgL_xz00_3253, obj_t BgL_ez00_3254)
	{
		{	/* Eval/expddefine.scm 84 */
			{	/* Eval/expddefine.scm 85 */
				obj_t BgL_oldez00_3252;

				BgL_oldez00_3252 = PROCEDURE_REF(BgL_envz00_3251, (int) (((long) 0)));
				{	/* Eval/expddefine.scm 85 */
					obj_t BgL_resz00_3307;

					{
						obj_t BgL_restz00_3312;

						if (PAIRP(BgL_xz00_3253))
							{	/* Eval/expddefine.scm 85 */
								if (
									(CAR(BgL_xz00_3253) ==
										BGl_symbol2527z00zz__expander_definez00))
									{	/* Eval/expddefine.scm 85 */
										if (NULLP(CDR(BgL_xz00_3253)))
											{	/* Eval/expddefine.scm 85 */
												BgL_resz00_3307 = BUNSPEC;
											}
										else
											{	/* Eval/expddefine.scm 85 */
												BgL_restz00_3312 = CDR(BgL_xz00_3253);
												if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
													(BgL_restz00_3312))
													{	/* Eval/expddefine.scm 91 */
														obj_t BgL_arg1284z00_3313;

														if (NULLP(BgL_restz00_3312))
															{	/* Eval/expddefine.scm 91 */
																BgL_arg1284z00_3313 = BNIL;
															}
														else
															{	/* Eval/expddefine.scm 91 */
																obj_t BgL_head1089z00_3314;

																{	/* Eval/expddefine.scm 91 */
																	obj_t BgL_res2353z00_3315;

																	BgL_res2353z00_3315 =
																		MAKE_YOUNG_PAIR(BNIL, BNIL);
																	BgL_head1089z00_3314 = BgL_res2353z00_3315;
																}
																{
																	obj_t BgL_l1087z00_3317;
																	obj_t BgL_tail1090z00_3318;

																	BgL_l1087z00_3317 = BgL_restz00_3312;
																	BgL_tail1090z00_3318 = BgL_head1089z00_3314;
																BgL_zc3z04anonymousza31286ze3z87_3316:
																	if (NULLP(BgL_l1087z00_3317))
																		{	/* Eval/expddefine.scm 91 */
																			BgL_arg1284z00_3313 =
																				CDR(BgL_head1089z00_3314);
																		}
																	else
																		{	/* Eval/expddefine.scm 91 */
																			obj_t BgL_newtail1091z00_3319;

																			{	/* Eval/expddefine.scm 91 */
																				obj_t BgL_arg1289z00_3320;

																				{	/* Eval/expddefine.scm 91 */
																					obj_t BgL_xz00_3321;

																					BgL_xz00_3321 =
																						CAR(((obj_t) BgL_l1087z00_3317));
																					BgL_arg1289z00_3320 =
																						PROCEDURE_ENTRY(BgL_oldez00_3252)
																						(BgL_oldez00_3252, BgL_xz00_3321,
																						BgL_ez00_3254, BEOA);
																				}
																				{	/* Eval/expddefine.scm 91 */
																					obj_t BgL_res2359z00_3322;

																					BgL_res2359z00_3322 =
																						MAKE_YOUNG_PAIR(BgL_arg1289z00_3320,
																						BNIL);
																					BgL_newtail1091z00_3319 =
																						BgL_res2359z00_3322;
																				}
																			}
																			SET_CDR(BgL_tail1090z00_3318,
																				BgL_newtail1091z00_3319);
																			{	/* Eval/expddefine.scm 91 */
																				obj_t BgL_arg1288z00_3323;

																				BgL_arg1288z00_3323 =
																					CDR(((obj_t) BgL_l1087z00_3317));
																				{
																					obj_t BgL_tail1090z00_3451;
																					obj_t BgL_l1087z00_3450;

																					BgL_l1087z00_3450 =
																						BgL_arg1288z00_3323;
																					BgL_tail1090z00_3451 =
																						BgL_newtail1091z00_3319;
																					BgL_tail1090z00_3318 =
																						BgL_tail1090z00_3451;
																					BgL_l1087z00_3317 = BgL_l1087z00_3450;
																					goto
																						BgL_zc3z04anonymousza31286ze3z87_3316;
																				}
																			}
																		}
																}
															}
														BgL_resz00_3307 =
															BGl_lambdazd2defineszd2zz__expander_definez00
															(BgL_arg1284z00_3313);
													}
												else
													{	/* Eval/expddefine.scm 89 */
														BgL_resz00_3307 =
															BGl_expandzd2errorzd2zz__expandz00
															(BGl_string2528z00zz__expander_definez00,
															BGl_string2529z00zz__expander_definez00,
															BgL_xz00_3253);
													}
											}
									}
								else
									{	/* Eval/expddefine.scm 85 */
									BgL_tagzd2103zd2_3308:
										{	/* Eval/expddefine.scm 93 */
											obj_t BgL_nxz00_3310;

											BgL_nxz00_3310 =
												PROCEDURE_ENTRY(BgL_oldez00_3252) (BgL_oldez00_3252,
												BgL_xz00_3253, BgL_ez00_3254, BEOA);
											if (PAIRP(BgL_nxz00_3310))
												{	/* Eval/expddefine.scm 94 */
													if (
														(CAR(BgL_nxz00_3310) ==
															BGl_symbol2527z00zz__expander_definez00))
														{	/* Eval/expddefine.scm 94 */
															if (NULLP(CDR(BgL_nxz00_3310)))
																{	/* Eval/expddefine.scm 94 */
																	BgL_resz00_3307 = BUNSPEC;
																}
															else
																{	/* Eval/expddefine.scm 94 */
																	obj_t BgL_arg1297z00_3311;

																	BgL_arg1297z00_3311 = CDR(BgL_nxz00_3310);
																	if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_arg1297z00_3311))
																		{	/* Eval/expddefine.scm 98 */
																			BgL_resz00_3307 =
																				BGl_lambdazd2defineszd2zz__expander_definez00
																				(BgL_arg1297z00_3311);
																		}
																	else
																		{	/* Eval/expddefine.scm 98 */
																			BgL_resz00_3307 =
																				BGl_expandzd2errorzd2zz__expandz00
																				(BGl_string2528z00zz__expander_definez00,
																				BGl_string2529z00zz__expander_definez00,
																				BgL_xz00_3253);
																		}
																}
														}
													else
														{	/* Eval/expddefine.scm 94 */
															BgL_resz00_3307 = BgL_nxz00_3310;
														}
												}
											else
												{	/* Eval/expddefine.scm 94 */
													BgL_resz00_3307 = BgL_nxz00_3310;
												}
										}
									}
							}
						else
							{	/* Eval/expddefine.scm 85 */
								goto BgL_tagzd2103zd2_3308;
							}
					}
					return BGl_evepairifyz00zz__prognz00(BgL_resz00_3307, BgL_xz00_3253);
				}
			}
		}

	}



/* expand-eval-lambda */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2evalzd2lambdaz00zz__expander_definez00(obj_t BgL_xz00_6,
		obj_t BgL_ez00_7)
	{
		{	/* Eval/expddefine.scm 108 */
			{	/* Eval/expddefine.scm 109 */
				obj_t BgL_resz00_1168;

				if (PAIRP(BgL_xz00_6))
					{	/* Eval/expddefine.scm 109 */
						obj_t BgL_cdrzd2141zd2_1175;

						BgL_cdrzd2141zd2_1175 = CDR(BgL_xz00_6);
						if (PAIRP(BgL_cdrzd2141zd2_1175))
							{	/* Eval/expddefine.scm 109 */
								obj_t BgL_cdrzd2145zd2_1177;

								BgL_cdrzd2145zd2_1177 = CDR(BgL_cdrzd2141zd2_1175);
								if (NULLP(BgL_cdrzd2145zd2_1177))
									{	/* Eval/expddefine.scm 109 */
										BgL_resz00_1168 =
											BGl_expandzd2errorzd2zz__expandz00
											(BGl_string2530z00zz__expander_definez00,
											BGl_string2531z00zz__expander_definez00, BgL_xz00_6);
									}
								else
									{	/* Eval/expddefine.scm 109 */
										obj_t BgL_arg1304z00_1179;

										BgL_arg1304z00_1179 = CAR(BgL_cdrzd2141zd2_1175);
										{	/* Eval/expddefine.scm 111 */
											obj_t BgL_eargsz00_2561;

											BgL_eargsz00_2561 =
												BGl_loopze70ze7zz__expander_definez00(BgL_ez00_7,
												BgL_arg1304z00_1179);
											{	/* Eval/expddefine.scm 111 */
												obj_t BgL_ebodyz00_2562;

												BgL_ebodyz00_2562 =
													BGl_expandzd2prognzd2zz__prognz00
													(BgL_cdrzd2145zd2_1177);
												{	/* Eval/expddefine.scm 112 */
													obj_t BgL_nez00_2563;

													BgL_nez00_2563 =
														BGl_evalzd2beginzd2expanderz00zz__expander_definez00
														(BgL_ez00_7);
													{	/* Eval/expddefine.scm 113 */

														{	/* Eval/expddefine.scm 115 */
															obj_t BgL_arg1306z00_2564;

															{	/* Eval/expddefine.scm 115 */
																obj_t BgL_arg1307z00_2565;

																BgL_arg1307z00_2565 =
																	MAKE_YOUNG_PAIR
																	(BGl_z52withzd2lexicalz80zz__expandz00
																	(BGl_argszd2ze3listz31zz__evutilsz00
																		(BgL_eargsz00_2561), BgL_ebodyz00_2562,
																		BgL_nez00_2563, BFALSE), BNIL);
																BgL_arg1306z00_2564 =
																	MAKE_YOUNG_PAIR(BgL_eargsz00_2561,
																	BgL_arg1307z00_2565);
															}
															BgL_resz00_1168 =
																MAKE_YOUNG_PAIR
																(BGl_symbol2532z00zz__expander_definez00,
																BgL_arg1306z00_2564);
														}
													}
												}
											}
										}
									}
							}
						else
							{	/* Eval/expddefine.scm 109 */
								BgL_resz00_1168 =
									BGl_expandzd2errorzd2zz__expandz00
									(BGl_string2530z00zz__expander_definez00,
									BGl_string2531z00zz__expander_definez00, BgL_xz00_6);
							}
					}
				else
					{	/* Eval/expddefine.scm 109 */
						BgL_resz00_1168 =
							BGl_expandzd2errorzd2zz__expandz00
							(BGl_string2530z00zz__expander_definez00,
							BGl_string2531z00zz__expander_definez00, BgL_xz00_6);
					}
				return BGl_evepairifyz00zz__prognz00(BgL_resz00_1168, BgL_xz00_6);
			}
		}

	}



/* &expand-eval-lambda */
	obj_t BGl_z62expandzd2evalzd2lambdaz62zz__expander_definez00(obj_t
		BgL_envz00_3255, obj_t BgL_xz00_3256, obj_t BgL_ez00_3257)
	{
		{	/* Eval/expddefine.scm 108 */
			{	/* Eval/expddefine.scm 109 */
				obj_t BgL_auxz00_3495;

				if (PROCEDUREP(BgL_ez00_3257))
					{	/* Eval/expddefine.scm 109 */
						BgL_auxz00_3495 = BgL_ez00_3257;
					}
				else
					{
						obj_t BgL_auxz00_3498;

						BgL_auxz00_3498 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2524z00zz__expander_definez00, BINT(((long) 3621)),
							BGl_string2533z00zz__expander_definez00,
							BGl_string2526z00zz__expander_definez00, BgL_ez00_3257);
						FAILURE(BgL_auxz00_3498, BFALSE, BFALSE);
					}
				return
					BGl_expandzd2evalzd2lambdaz00zz__expander_definez00(BgL_xz00_3256,
					BgL_auxz00_3495);
			}
		}

	}



/* expand-eval-define */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2evalzd2definez00zz__expander_definez00(obj_t BgL_xz00_8,
		obj_t BgL_oldez00_9)
	{
		{	/* Eval/expddefine.scm 127 */
			{	/* Eval/expddefine.scm 128 */
				obj_t BgL_newez00_3258;

				BgL_newez00_3258 =
					MAKE_FX_PROCEDURE(BGl_z62newez62zz__expander_definez00,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_newez00_3258, (int) (((long) 0)), BgL_oldez00_9);
				return
					BGl_expandzd2evalzd2externalzd2definezd2zz__expander_definez00
					(BgL_xz00_8, BgL_newez00_3258);
			}
		}

	}



/* &expand-eval-define */
	obj_t BGl_z62expandzd2evalzd2definez62zz__expander_definez00(obj_t
		BgL_envz00_3259, obj_t BgL_xz00_3260, obj_t BgL_oldez00_3261)
	{
		{	/* Eval/expddefine.scm 127 */
			{	/* Eval/expddefine.scm 128 */
				obj_t BgL_auxz00_3509;

				if (PROCEDUREP(BgL_oldez00_3261))
					{	/* Eval/expddefine.scm 128 */
						BgL_auxz00_3509 = BgL_oldez00_3261;
					}
				else
					{
						obj_t BgL_auxz00_3512;

						BgL_auxz00_3512 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2524z00zz__expander_definez00, BINT(((long) 4526)),
							BGl_string2534z00zz__expander_definez00,
							BGl_string2526z00zz__expander_definez00, BgL_oldez00_3261);
						FAILURE(BgL_auxz00_3512, BFALSE, BFALSE);
					}
				return
					BGl_expandzd2evalzd2definez00zz__expander_definez00(BgL_xz00_3260,
					BgL_auxz00_3509);
			}
		}

	}



/* &newe */
	obj_t BGl_z62newez62zz__expander_definez00(obj_t BgL_envz00_3262,
		obj_t BgL_xz00_3264, obj_t BgL_ez00_3265)
	{
		{	/* Eval/expddefine.scm 128 */
			{	/* Eval/expddefine.scm 128 */
				obj_t BgL_oldez00_3263;

				BgL_oldez00_3263 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3262, (int) (((long) 0))));
				if (PAIRP(BgL_xz00_3264))
					{	/* Eval/expddefine.scm 128 */
						if ((CAR(BgL_xz00_3264) == BGl_symbol2535z00zz__expander_definez00))
							{	/* Eval/expddefine.scm 128 */
								return
									BGl_expandzd2evalzd2internalzd2definezd2zz__expander_definez00
									(BgL_xz00_3264, BgL_ez00_3265);
							}
						else
							{	/* Eval/expddefine.scm 128 */
								return
									PROCEDURE_ENTRY(BgL_oldez00_3263) (BgL_oldez00_3263,
									BgL_xz00_3264, BgL_ez00_3265, BEOA);
							}
					}
				else
					{	/* Eval/expddefine.scm 128 */
						return
							PROCEDURE_ENTRY(BgL_oldez00_3263) (BgL_oldez00_3263,
							BgL_xz00_3264, BgL_ez00_3265, BEOA);
					}
			}
		}

	}



/* expand-eval-external-define */
	obj_t BGl_expandzd2evalzd2externalzd2definezd2zz__expander_definez00(obj_t
		BgL_xz00_10, obj_t BgL_ez00_11)
	{
		{	/* Eval/expddefine.scm 139 */
			{	/* Eval/expddefine.scm 140 */
				obj_t BgL_ez00_1199;

				BgL_ez00_1199 =
					BGl_evalzd2beginzd2expanderz00zz__expander_definez00(BgL_ez00_11);
				{	/* Eval/expddefine.scm 141 */
					obj_t BgL_locz00_1201;

					BgL_locz00_1201 =
						BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_xz00_10);
					{	/* Eval/expddefine.scm 142 */
						obj_t BgL_resz00_1202;

						{	/* Eval/expddefine.scm 143 */
							bool_t BgL_test2661z00_3538;

							if (PAIRP(BgL_xz00_10))
								{	/* Eval/expddefine.scm 143 */
									bool_t BgL_test2663z00_3541;

									{	/* Eval/expddefine.scm 143 */
										obj_t BgL_tmpz00_3542;

										BgL_tmpz00_3542 = CDR(BgL_xz00_10);
										BgL_test2663z00_3541 = PAIRP(BgL_tmpz00_3542);
									}
									if (BgL_test2663z00_3541)
										{	/* Eval/expddefine.scm 143 */
											obj_t BgL_tmpz00_3545;

											BgL_tmpz00_3545 = CDR(CDR(BgL_xz00_10));
											BgL_test2661z00_3538 = PAIRP(BgL_tmpz00_3545);
										}
									else
										{	/* Eval/expddefine.scm 143 */
											BgL_test2661z00_3538 = ((bool_t) 0);
										}
								}
							else
								{	/* Eval/expddefine.scm 143 */
									BgL_test2661z00_3538 = ((bool_t) 0);
								}
							if (BgL_test2661z00_3538)
								{	/* Eval/expddefine.scm 144 */
									obj_t BgL_typez00_1209;

									BgL_typez00_1209 = CAR(CDR(BgL_xz00_10));
									{	/* Eval/expddefine.scm 146 */
										bool_t BgL_test2664z00_3551;

										if (PAIRP(BgL_typez00_1209))
											{	/* Eval/expddefine.scm 146 */
												obj_t BgL_tmpz00_3554;

												BgL_tmpz00_3554 = CAR(BgL_typez00_1209);
												BgL_test2664z00_3551 = SYMBOLP(BgL_tmpz00_3554);
											}
										else
											{	/* Eval/expddefine.scm 146 */
												BgL_test2664z00_3551 = ((bool_t) 0);
											}
										if (BgL_test2664z00_3551)
											{	/* Eval/expddefine.scm 147 */
												obj_t BgL_arg1324z00_1213;

												{	/* Eval/expddefine.scm 147 */
													obj_t BgL_arg1325z00_1214;
													obj_t BgL_arg1326z00_1215;

													{	/* Eval/expddefine.scm 147 */
														obj_t BgL_arg1327z00_1216;

														BgL_arg1327z00_1216 =
															BGl_parsezd2formalzd2identz00zz__evutilsz00(CAR
															(BgL_typez00_1209), BgL_locz00_1201);
														BgL_arg1325z00_1214 =
															CAR(((obj_t) BgL_arg1327z00_1216));
													}
													{	/* Eval/expddefine.scm 148 */
														obj_t BgL_arg1329z00_1218;

														{	/* Eval/expddefine.scm 148 */
															obj_t BgL_arg1330z00_1219;

															{	/* Eval/expddefine.scm 148 */
																obj_t BgL_arg1331z00_1220;
																obj_t BgL_arg1333z00_1221;

																BgL_arg1331z00_1220 =
																	BGl_loopze70ze7zz__expander_definez00
																	(BgL_ez00_1199, CDR(BgL_typez00_1209));
																{	/* Eval/expddefine.scm 149 */
																	obj_t BgL_arg1335z00_1223;

																	{	/* Eval/expddefine.scm 149 */
																		obj_t BgL_arg1337z00_1224;

																		BgL_arg1337z00_1224 =
																			BGl_expandzd2prognzd2zz__prognz00(CDR(CDR
																				(BgL_xz00_10)));
																		BgL_arg1335z00_1223 =
																			PROCEDURE_ENTRY(BgL_ez00_1199)
																			(BgL_ez00_1199, BgL_arg1337z00_1224,
																			BgL_ez00_1199, BEOA);
																	}
																	BgL_arg1333z00_1221 =
																		MAKE_YOUNG_PAIR(BgL_arg1335z00_1223, BNIL);
																}
																BgL_arg1330z00_1219 =
																	MAKE_YOUNG_PAIR(BgL_arg1331z00_1220,
																	BgL_arg1333z00_1221);
															}
															BgL_arg1329z00_1218 =
																MAKE_YOUNG_PAIR
																(BGl_symbol2532z00zz__expander_definez00,
																BgL_arg1330z00_1219);
														}
														BgL_arg1326z00_1215 =
															MAKE_YOUNG_PAIR(BgL_arg1329z00_1218, BNIL);
													}
													BgL_arg1324z00_1213 =
														MAKE_YOUNG_PAIR(BgL_arg1325z00_1214,
														BgL_arg1326z00_1215);
												}
												BgL_resz00_1202 =
													MAKE_YOUNG_PAIR
													(BGl_symbol2535z00zz__expander_definez00,
													BgL_arg1324z00_1213);
											}
										else
											{	/* Eval/expddefine.scm 146 */
												if (SYMBOLP(BgL_typez00_1209))
													{	/* Eval/expddefine.scm 151 */
														obj_t BgL_arg1340z00_1227;

														{	/* Eval/expddefine.scm 151 */
															obj_t BgL_arg1341z00_1228;
															obj_t BgL_arg1342z00_1229;

															{	/* Eval/expddefine.scm 151 */
																obj_t BgL_arg1343z00_1230;

																BgL_arg1343z00_1230 =
																	BGl_parsezd2formalzd2identz00zz__evutilsz00
																	(BgL_typez00_1209, BgL_locz00_1201);
																BgL_arg1341z00_1228 =
																	CAR(((obj_t) BgL_arg1343z00_1230));
															}
															{	/* Eval/expddefine.scm 152 */
																obj_t BgL_arg1344z00_1231;

																{	/* Eval/expddefine.scm 152 */
																	obj_t BgL_arg1345z00_1232;

																	BgL_arg1345z00_1232 =
																		BGl_expandzd2prognzd2zz__prognz00(CDR(CDR
																			(BgL_xz00_10)));
																	BgL_arg1344z00_1231 =
																		PROCEDURE_ENTRY(BgL_ez00_1199)
																		(BgL_ez00_1199, BgL_arg1345z00_1232,
																		BgL_ez00_1199, BEOA);
																}
																BgL_arg1342z00_1229 =
																	MAKE_YOUNG_PAIR(BgL_arg1344z00_1231, BNIL);
															}
															BgL_arg1340z00_1227 =
																MAKE_YOUNG_PAIR(BgL_arg1341z00_1228,
																BgL_arg1342z00_1229);
														}
														BgL_resz00_1202 =
															MAKE_YOUNG_PAIR
															(BGl_symbol2535z00zz__expander_definez00,
															BgL_arg1340z00_1227);
													}
												else
													{	/* Eval/expddefine.scm 150 */
														BgL_resz00_1202 =
															BGl_expandzd2errorzd2zz__expandz00
															(BGl_string2536z00zz__expander_definez00,
															BGl_string2531z00zz__expander_definez00,
															BgL_xz00_10);
													}
											}
									}
								}
							else
								{	/* Eval/expddefine.scm 143 */
									BgL_resz00_1202 =
										BGl_expandzd2errorzd2zz__expandz00
										(BGl_string2536z00zz__expander_definez00,
										BGl_string2531z00zz__expander_definez00, BgL_xz00_10);
								}
						}
						{	/* Eval/expddefine.scm 143 */

							return
								BGl_evepairifyz00zz__prognz00(BgL_resz00_1202, BgL_xz00_10);
						}
					}
				}
			}
		}

	}



/* expand-eval-internal-define */
	obj_t BGl_expandzd2evalzd2internalzd2definezd2zz__expander_definez00(obj_t
		BgL_xz00_12, obj_t BgL_ez00_13)
	{
		{	/* Eval/expddefine.scm 161 */
			{
				obj_t BgL_namez00_1242;
				obj_t BgL_argsz00_1243;
				obj_t BgL_bodyz00_1244;

				if (PAIRP(BgL_xz00_12))
					{	/* Eval/expddefine.scm 162 */
						obj_t BgL_cdrzd2170zd2_1252;

						BgL_cdrzd2170zd2_1252 = CDR(BgL_xz00_12);
						if (PAIRP(BgL_cdrzd2170zd2_1252))
							{	/* Eval/expddefine.scm 162 */
								obj_t BgL_carzd2174zd2_1254;
								obj_t BgL_cdrzd2175zd2_1255;

								BgL_carzd2174zd2_1254 = CAR(BgL_cdrzd2170zd2_1252);
								BgL_cdrzd2175zd2_1255 = CDR(BgL_cdrzd2170zd2_1252);
								if (PAIRP(BgL_carzd2174zd2_1254))
									{	/* Eval/expddefine.scm 162 */
										if (NULLP(BgL_cdrzd2175zd2_1255))
											{	/* Eval/expddefine.scm 162 */
												obj_t BgL_cdrzd2193zd2_1259;

												BgL_cdrzd2193zd2_1259 =
													CDR(((obj_t) BgL_cdrzd2170zd2_1252));
												if (PAIRP(BgL_cdrzd2193zd2_1259))
													{	/* Eval/expddefine.scm 162 */
														obj_t BgL_carzd2197zd2_1261;

														BgL_carzd2197zd2_1261 = CAR(BgL_cdrzd2193zd2_1259);
														if (PAIRP(BgL_carzd2197zd2_1261))
															{	/* Eval/expddefine.scm 162 */
																obj_t BgL_cdrzd2202zd2_1263;

																BgL_cdrzd2202zd2_1263 =
																	CDR(BgL_carzd2197zd2_1261);
																if (
																	(CAR(BgL_carzd2197zd2_1261) ==
																		BGl_symbol2532z00zz__expander_definez00))
																	{	/* Eval/expddefine.scm 162 */
																		if (PAIRP(BgL_cdrzd2202zd2_1263))
																			{	/* Eval/expddefine.scm 162 */
																				obj_t BgL_cdrzd2206zd2_1267;

																				BgL_cdrzd2206zd2_1267 =
																					CDR(BgL_cdrzd2202zd2_1263);
																				if (NULLP(BgL_cdrzd2206zd2_1267))
																					{	/* Eval/expddefine.scm 162 */
																						obj_t BgL_cdrzd2215zd2_1269;

																						BgL_cdrzd2215zd2_1269 =
																							CDR(BgL_xz00_12);
																						{	/* Eval/expddefine.scm 162 */
																							obj_t BgL_cdrzd2219zd2_1270;

																							BgL_cdrzd2219zd2_1270 =
																								CDR(
																								((obj_t)
																									BgL_cdrzd2215zd2_1269));
																							if (NULLP(CDR(((obj_t)
																											BgL_cdrzd2219zd2_1270))))
																								{	/* Eval/expddefine.scm 162 */
																									obj_t BgL_arg1365z00_1273;
																									obj_t BgL_arg1367z00_1274;

																									BgL_arg1365z00_1273 =
																										CAR(
																										((obj_t)
																											BgL_cdrzd2215zd2_1269));
																									BgL_arg1367z00_1274 =
																										CAR(((obj_t)
																											BgL_cdrzd2219zd2_1270));
																									{	/* Eval/expddefine.scm 175 */
																										obj_t BgL_locz00_2630;

																										BgL_locz00_2630 =
																											BGl_getzd2sourcezd2locationz00zz__readerz00
																											(BgL_xz00_12);
																										{	/* Eval/expddefine.scm 175 */
																											obj_t BgL_resz00_2631;

																											{	/* Eval/expddefine.scm 176 */
																												obj_t
																													BgL_arg1443z00_2632;
																												{	/* Eval/expddefine.scm 176 */
																													obj_t
																														BgL_arg1444z00_2633;
																													obj_t
																														BgL_arg1445z00_2634;
																													{	/* Eval/expddefine.scm 176 */
																														obj_t
																															BgL_arg1446z00_2635;
																														BgL_arg1446z00_2635
																															=
																															BGl_parsezd2formalzd2identz00zz__evutilsz00
																															(BgL_arg1365z00_1273,
																															BgL_locz00_2630);
																														BgL_arg1444z00_2633
																															=
																															CAR(((obj_t)
																																BgL_arg1446z00_2635));
																													}
																													{	/* Eval/expddefine.scm 176 */
																														obj_t
																															BgL_arg1448z00_2636;
																														BgL_arg1448z00_2636
																															=
																															PROCEDURE_ENTRY
																															(BgL_ez00_13)
																															(BgL_ez00_13,
																															BgL_arg1367z00_1274,
																															BgL_ez00_13,
																															BEOA);
																														BgL_arg1445z00_2634
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1448z00_2636,
																															BNIL);
																													}
																													BgL_arg1443z00_2632 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1444z00_2633,
																														BgL_arg1445z00_2634);
																												}
																												BgL_resz00_2631 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2535z00zz__expander_definez00,
																													BgL_arg1443z00_2632);
																											}
																											{	/* Eval/expddefine.scm 176 */

																												return
																													BGl_evepairifyz00zz__prognz00
																													(BgL_resz00_2631,
																													BgL_xz00_12);
																											}
																										}
																									}
																								}
																							else
																								{	/* Eval/expddefine.scm 162 */
																									return
																										BGl_expandzd2errorzd2zz__expandz00
																										(BGl_string2536z00zz__expander_definez00,
																										BGl_string2531z00zz__expander_definez00,
																										BgL_xz00_12);
																								}
																						}
																					}
																				else
																					{	/* Eval/expddefine.scm 162 */
																						if (NULLP(CDR
																								(BgL_cdrzd2193zd2_1259)))
																							{	/* Eval/expddefine.scm 162 */
																								obj_t BgL_arg1372z00_1278;
																								obj_t BgL_arg1373z00_1279;

																								BgL_arg1372z00_1278 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd2170zd2_1252));
																								BgL_arg1373z00_1279 =
																									CAR(BgL_cdrzd2202zd2_1263);
																								BgL_namez00_1242 =
																									BgL_arg1372z00_1278;
																								BgL_argsz00_1243 =
																									BgL_arg1373z00_1279;
																								BgL_bodyz00_1244 =
																									BgL_cdrzd2206zd2_1267;
																							BgL_tagzd2154zd2_1245:
																								{	/* Eval/expddefine.scm 166 */
																									obj_t BgL_locz00_1358;

																									BgL_locz00_1358 =
																										BGl_getzd2sourcezd2locationz00zz__readerz00
																										(BgL_xz00_12);
																									{	/* Eval/expddefine.scm 166 */
																										obj_t BgL_eargsz00_1359;

																										BgL_eargsz00_1359 =
																											BGl_loopze70ze7zz__expander_definez00
																											(BgL_ez00_13,
																											BgL_argsz00_1243);
																										{	/* Eval/expddefine.scm 167 */
																											obj_t BgL_resz00_1360;

																											{	/* Eval/expddefine.scm 168 */
																												obj_t
																													BgL_arg1433z00_1361;
																												{	/* Eval/expddefine.scm 168 */
																													obj_t
																														BgL_arg1434z00_1362;
																													obj_t
																														BgL_arg1435z00_1363;
																													{	/* Eval/expddefine.scm 168 */
																														obj_t
																															BgL_arg1436z00_1364;
																														BgL_arg1436z00_1364
																															=
																															BGl_parsezd2formalzd2identz00zz__evutilsz00
																															(BgL_namez00_1242,
																															BgL_locz00_1358);
																														BgL_arg1434z00_1362
																															=
																															CAR(((obj_t)
																																BgL_arg1436z00_1364));
																													}
																													{	/* Eval/expddefine.scm 171 */
																														obj_t
																															BgL_arg1437z00_1365;
																														{	/* Eval/expddefine.scm 171 */
																															obj_t
																																BgL_arg1438z00_1366;
																															{	/* Eval/expddefine.scm 171 */
																																obj_t
																																	BgL_arg1439z00_1367;
																																BgL_arg1439z00_1367
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_z52withzd2lexicalz80zz__expandz00
																																	(BGl_argszd2ze3listz31zz__evutilsz00
																																		(BgL_eargsz00_1359),
																																		BGl_expandzd2prognzd2zz__prognz00
																																		(BgL_bodyz00_1244),
																																		BgL_ez00_13,
																																		BFALSE),
																																	BNIL);
																																BgL_arg1438z00_1366
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_eargsz00_1359,
																																	BgL_arg1439z00_1367);
																															}
																															BgL_arg1437z00_1365
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2532z00zz__expander_definez00,
																																BgL_arg1438z00_1366);
																														}
																														BgL_arg1435z00_1363
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1437z00_1365,
																															BNIL);
																													}
																													BgL_arg1433z00_1361 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1434z00_1362,
																														BgL_arg1435z00_1363);
																												}
																												BgL_resz00_1360 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2535z00zz__expander_definez00,
																													BgL_arg1433z00_1361);
																											}
																											{	/* Eval/expddefine.scm 168 */

																												return
																													BGl_evepairifyz00zz__prognz00
																													(BgL_resz00_1360,
																													BgL_xz00_12);
																											}
																										}
																									}
																								}
																							}
																						else
																							{	/* Eval/expddefine.scm 162 */
																								return
																									BGl_expandzd2errorzd2zz__expandz00
																									(BGl_string2536z00zz__expander_definez00,
																									BGl_string2531z00zz__expander_definez00,
																									BgL_xz00_12);
																							}
																					}
																			}
																		else
																			{	/* Eval/expddefine.scm 162 */
																				obj_t BgL_cdrzd2234zd2_1281;

																				BgL_cdrzd2234zd2_1281 =
																					CDR(BgL_xz00_12);
																				{	/* Eval/expddefine.scm 162 */
																					obj_t BgL_cdrzd2238zd2_1282;

																					BgL_cdrzd2238zd2_1282 =
																						CDR(
																						((obj_t) BgL_cdrzd2234zd2_1281));
																					if (NULLP(CDR(
																								((obj_t)
																									BgL_cdrzd2238zd2_1282))))
																						{	/* Eval/expddefine.scm 162 */
																							obj_t BgL_arg1377z00_1285;
																							obj_t BgL_arg1378z00_1286;

																							BgL_arg1377z00_1285 =
																								CAR(
																								((obj_t)
																									BgL_cdrzd2234zd2_1281));
																							BgL_arg1378z00_1286 =
																								CAR(((obj_t)
																									BgL_cdrzd2238zd2_1282));
																							{	/* Eval/expddefine.scm 175 */
																								obj_t BgL_locz00_2648;

																								BgL_locz00_2648 =
																									BGl_getzd2sourcezd2locationz00zz__readerz00
																									(BgL_xz00_12);
																								{	/* Eval/expddefine.scm 175 */
																									obj_t BgL_resz00_2649;

																									{	/* Eval/expddefine.scm 176 */
																										obj_t BgL_arg1443z00_2650;

																										{	/* Eval/expddefine.scm 176 */
																											obj_t BgL_arg1444z00_2651;
																											obj_t BgL_arg1445z00_2652;

																											{	/* Eval/expddefine.scm 176 */
																												obj_t
																													BgL_arg1446z00_2653;
																												BgL_arg1446z00_2653 =
																													BGl_parsezd2formalzd2identz00zz__evutilsz00
																													(BgL_arg1377z00_1285,
																													BgL_locz00_2648);
																												BgL_arg1444z00_2651 =
																													CAR(((obj_t)
																														BgL_arg1446z00_2653));
																											}
																											{	/* Eval/expddefine.scm 176 */
																												obj_t
																													BgL_arg1448z00_2654;
																												BgL_arg1448z00_2654 =
																													PROCEDURE_ENTRY
																													(BgL_ez00_13)
																													(BgL_ez00_13,
																													BgL_arg1378z00_1286,
																													BgL_ez00_13, BEOA);
																												BgL_arg1445z00_2652 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1448z00_2654,
																													BNIL);
																											}
																											BgL_arg1443z00_2650 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1444z00_2651,
																												BgL_arg1445z00_2652);
																										}
																										BgL_resz00_2649 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2535z00zz__expander_definez00,
																											BgL_arg1443z00_2650);
																									}
																									{	/* Eval/expddefine.scm 176 */

																										return
																											BGl_evepairifyz00zz__prognz00
																											(BgL_resz00_2649,
																											BgL_xz00_12);
																									}
																								}
																							}
																						}
																					else
																						{	/* Eval/expddefine.scm 162 */
																							return
																								BGl_expandzd2errorzd2zz__expandz00
																								(BGl_string2536z00zz__expander_definez00,
																								BGl_string2531z00zz__expander_definez00,
																								BgL_xz00_12);
																						}
																				}
																			}
																	}
																else
																	{	/* Eval/expddefine.scm 162 */
																		obj_t BgL_cdrzd2249zd2_1288;

																		BgL_cdrzd2249zd2_1288 = CDR(BgL_xz00_12);
																		{	/* Eval/expddefine.scm 162 */
																			obj_t BgL_cdrzd2253zd2_1289;

																			BgL_cdrzd2253zd2_1289 =
																				CDR(((obj_t) BgL_cdrzd2249zd2_1288));
																			if (NULLP(CDR(
																						((obj_t) BgL_cdrzd2253zd2_1289))))
																				{	/* Eval/expddefine.scm 162 */
																					obj_t BgL_arg1382z00_1292;
																					obj_t BgL_arg1383z00_1293;

																					BgL_arg1382z00_1292 =
																						CAR(
																						((obj_t) BgL_cdrzd2249zd2_1288));
																					BgL_arg1383z00_1293 =
																						CAR(
																						((obj_t) BgL_cdrzd2253zd2_1289));
																					{	/* Eval/expddefine.scm 175 */
																						obj_t BgL_locz00_2662;

																						BgL_locz00_2662 =
																							BGl_getzd2sourcezd2locationz00zz__readerz00
																							(BgL_xz00_12);
																						{	/* Eval/expddefine.scm 175 */
																							obj_t BgL_resz00_2663;

																							{	/* Eval/expddefine.scm 176 */
																								obj_t BgL_arg1443z00_2664;

																								{	/* Eval/expddefine.scm 176 */
																									obj_t BgL_arg1444z00_2665;
																									obj_t BgL_arg1445z00_2666;

																									{	/* Eval/expddefine.scm 176 */
																										obj_t BgL_arg1446z00_2667;

																										BgL_arg1446z00_2667 =
																											BGl_parsezd2formalzd2identz00zz__evutilsz00
																											(BgL_arg1382z00_1292,
																											BgL_locz00_2662);
																										BgL_arg1444z00_2665 =
																											CAR(((obj_t)
																												BgL_arg1446z00_2667));
																									}
																									{	/* Eval/expddefine.scm 176 */
																										obj_t BgL_arg1448z00_2668;

																										BgL_arg1448z00_2668 =
																											PROCEDURE_ENTRY
																											(BgL_ez00_13)
																											(BgL_ez00_13,
																											BgL_arg1383z00_1293,
																											BgL_ez00_13, BEOA);
																										BgL_arg1445z00_2666 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1448z00_2668,
																											BNIL);
																									}
																									BgL_arg1443z00_2664 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1444z00_2665,
																										BgL_arg1445z00_2666);
																								}
																								BgL_resz00_2663 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2535z00zz__expander_definez00,
																									BgL_arg1443z00_2664);
																							}
																							{	/* Eval/expddefine.scm 176 */

																								return
																									BGl_evepairifyz00zz__prognz00
																									(BgL_resz00_2663,
																									BgL_xz00_12);
																							}
																						}
																					}
																				}
																			else
																				{	/* Eval/expddefine.scm 162 */
																					return
																						BGl_expandzd2errorzd2zz__expandz00
																						(BGl_string2536z00zz__expander_definez00,
																						BGl_string2531z00zz__expander_definez00,
																						BgL_xz00_12);
																				}
																		}
																	}
															}
														else
															{	/* Eval/expddefine.scm 162 */
																obj_t BgL_cdrzd2268zd2_1297;

																BgL_cdrzd2268zd2_1297 =
																	CDR(((obj_t) BgL_cdrzd2170zd2_1252));
																if (NULLP(CDR(((obj_t) BgL_cdrzd2268zd2_1297))))
																	{	/* Eval/expddefine.scm 162 */
																		obj_t BgL_arg1388z00_1300;
																		obj_t BgL_arg1389z00_1301;

																		BgL_arg1388z00_1300 =
																			CAR(((obj_t) BgL_cdrzd2170zd2_1252));
																		BgL_arg1389z00_1301 =
																			CAR(((obj_t) BgL_cdrzd2268zd2_1297));
																		{	/* Eval/expddefine.scm 175 */
																			obj_t BgL_locz00_2676;

																			BgL_locz00_2676 =
																				BGl_getzd2sourcezd2locationz00zz__readerz00
																				(BgL_xz00_12);
																			{	/* Eval/expddefine.scm 175 */
																				obj_t BgL_resz00_2677;

																				{	/* Eval/expddefine.scm 176 */
																					obj_t BgL_arg1443z00_2678;

																					{	/* Eval/expddefine.scm 176 */
																						obj_t BgL_arg1444z00_2679;
																						obj_t BgL_arg1445z00_2680;

																						{	/* Eval/expddefine.scm 176 */
																							obj_t BgL_arg1446z00_2681;

																							BgL_arg1446z00_2681 =
																								BGl_parsezd2formalzd2identz00zz__evutilsz00
																								(BgL_arg1388z00_1300,
																								BgL_locz00_2676);
																							BgL_arg1444z00_2679 =
																								CAR(((obj_t)
																									BgL_arg1446z00_2681));
																						}
																						{	/* Eval/expddefine.scm 176 */
																							obj_t BgL_arg1448z00_2682;

																							BgL_arg1448z00_2682 =
																								PROCEDURE_ENTRY(BgL_ez00_13)
																								(BgL_ez00_13,
																								BgL_arg1389z00_1301,
																								BgL_ez00_13, BEOA);
																							BgL_arg1445z00_2680 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1448z00_2682, BNIL);
																						}
																						BgL_arg1443z00_2678 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1444z00_2679,
																							BgL_arg1445z00_2680);
																					}
																					BgL_resz00_2677 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol2535z00zz__expander_definez00,
																						BgL_arg1443z00_2678);
																				}
																				{	/* Eval/expddefine.scm 176 */

																					return
																						BGl_evepairifyz00zz__prognz00
																						(BgL_resz00_2677, BgL_xz00_12);
																				}
																			}
																		}
																	}
																else
																	{	/* Eval/expddefine.scm 162 */
																		return
																			BGl_expandzd2errorzd2zz__expandz00
																			(BGl_string2536z00zz__expander_definez00,
																			BGl_string2531z00zz__expander_definez00,
																			BgL_xz00_12);
																	}
															}
													}
												else
													{	/* Eval/expddefine.scm 162 */
														obj_t BgL_cdrzd2283zd2_1304;

														BgL_cdrzd2283zd2_1304 =
															CDR(((obj_t) BgL_cdrzd2170zd2_1252));
														if (PAIRP(BgL_cdrzd2283zd2_1304))
															{	/* Eval/expddefine.scm 162 */
																if (NULLP(CDR(BgL_cdrzd2283zd2_1304)))
																	{	/* Eval/expddefine.scm 162 */
																		obj_t BgL_arg1394z00_1308;
																		obj_t BgL_arg1395z00_1309;

																		BgL_arg1394z00_1308 =
																			CAR(((obj_t) BgL_cdrzd2170zd2_1252));
																		BgL_arg1395z00_1309 =
																			CAR(BgL_cdrzd2283zd2_1304);
																		{	/* Eval/expddefine.scm 175 */
																			obj_t BgL_locz00_2691;

																			BgL_locz00_2691 =
																				BGl_getzd2sourcezd2locationz00zz__readerz00
																				(BgL_xz00_12);
																			{	/* Eval/expddefine.scm 175 */
																				obj_t BgL_resz00_2692;

																				{	/* Eval/expddefine.scm 176 */
																					obj_t BgL_arg1443z00_2693;

																					{	/* Eval/expddefine.scm 176 */
																						obj_t BgL_arg1444z00_2694;
																						obj_t BgL_arg1445z00_2695;

																						{	/* Eval/expddefine.scm 176 */
																							obj_t BgL_arg1446z00_2696;

																							BgL_arg1446z00_2696 =
																								BGl_parsezd2formalzd2identz00zz__evutilsz00
																								(BgL_arg1394z00_1308,
																								BgL_locz00_2691);
																							BgL_arg1444z00_2694 =
																								CAR(((obj_t)
																									BgL_arg1446z00_2696));
																						}
																						{	/* Eval/expddefine.scm 176 */
																							obj_t BgL_arg1448z00_2697;

																							BgL_arg1448z00_2697 =
																								PROCEDURE_ENTRY(BgL_ez00_13)
																								(BgL_ez00_13,
																								BgL_arg1395z00_1309,
																								BgL_ez00_13, BEOA);
																							BgL_arg1445z00_2695 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1448z00_2697, BNIL);
																						}
																						BgL_arg1443z00_2693 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1444z00_2694,
																							BgL_arg1445z00_2695);
																					}
																					BgL_resz00_2692 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol2535z00zz__expander_definez00,
																						BgL_arg1443z00_2693);
																				}
																				{	/* Eval/expddefine.scm 176 */

																					return
																						BGl_evepairifyz00zz__prognz00
																						(BgL_resz00_2692, BgL_xz00_12);
																				}
																			}
																		}
																	}
																else
																	{	/* Eval/expddefine.scm 162 */
																		return
																			BGl_expandzd2errorzd2zz__expandz00
																			(BGl_string2536z00zz__expander_definez00,
																			BGl_string2531z00zz__expander_definez00,
																			BgL_xz00_12);
																	}
															}
														else
															{	/* Eval/expddefine.scm 162 */
																return
																	BGl_expandzd2errorzd2zz__expandz00
																	(BGl_string2536z00zz__expander_definez00,
																	BGl_string2531z00zz__expander_definez00,
																	BgL_xz00_12);
															}
													}
											}
										else
											{
												obj_t BgL_bodyz00_3773;
												obj_t BgL_argsz00_3771;
												obj_t BgL_namez00_3769;

												BgL_namez00_3769 = CAR(BgL_carzd2174zd2_1254);
												BgL_argsz00_3771 = CDR(BgL_carzd2174zd2_1254);
												BgL_bodyz00_3773 = BgL_cdrzd2175zd2_1255;
												BgL_bodyz00_1244 = BgL_bodyz00_3773;
												BgL_argsz00_1243 = BgL_argsz00_3771;
												BgL_namez00_1242 = BgL_namez00_3769;
												goto BgL_tagzd2154zd2_1245;
											}
									}
								else
									{	/* Eval/expddefine.scm 162 */
										obj_t BgL_cdrzd2298zd2_1314;

										BgL_cdrzd2298zd2_1314 =
											CDR(((obj_t) BgL_cdrzd2170zd2_1252));
										if (PAIRP(BgL_cdrzd2298zd2_1314))
											{	/* Eval/expddefine.scm 162 */
												obj_t BgL_carzd2302zd2_1316;

												BgL_carzd2302zd2_1316 = CAR(BgL_cdrzd2298zd2_1314);
												if (PAIRP(BgL_carzd2302zd2_1316))
													{	/* Eval/expddefine.scm 162 */
														obj_t BgL_cdrzd2307zd2_1318;

														BgL_cdrzd2307zd2_1318 = CDR(BgL_carzd2302zd2_1316);
														if (
															(CAR(BgL_carzd2302zd2_1316) ==
																BGl_symbol2532z00zz__expander_definez00))
															{	/* Eval/expddefine.scm 162 */
																if (PAIRP(BgL_cdrzd2307zd2_1318))
																	{	/* Eval/expddefine.scm 162 */
																		obj_t BgL_cdrzd2311zd2_1322;

																		BgL_cdrzd2311zd2_1322 =
																			CDR(BgL_cdrzd2307zd2_1318);
																		if (NULLP(BgL_cdrzd2311zd2_1322))
																			{	/* Eval/expddefine.scm 162 */
																				obj_t BgL_cdrzd2321zd2_1324;

																				BgL_cdrzd2321zd2_1324 =
																					CDR(BgL_xz00_12);
																				{	/* Eval/expddefine.scm 162 */
																					obj_t BgL_cdrzd2326zd2_1325;

																					BgL_cdrzd2326zd2_1325 =
																						CDR(
																						((obj_t) BgL_cdrzd2321zd2_1324));
																					if (NULLP(CDR(
																								((obj_t)
																									BgL_cdrzd2326zd2_1325))))
																						{	/* Eval/expddefine.scm 162 */
																							obj_t BgL_arg1407z00_1328;
																							obj_t BgL_arg1409z00_1329;

																							BgL_arg1407z00_1328 =
																								CAR(
																								((obj_t)
																									BgL_cdrzd2321zd2_1324));
																							BgL_arg1409z00_1329 =
																								CAR(((obj_t)
																									BgL_cdrzd2326zd2_1325));
																							{	/* Eval/expddefine.scm 175 */
																								obj_t BgL_locz00_2717;

																								BgL_locz00_2717 =
																									BGl_getzd2sourcezd2locationz00zz__readerz00
																									(BgL_xz00_12);
																								{	/* Eval/expddefine.scm 175 */
																									obj_t BgL_resz00_2718;

																									{	/* Eval/expddefine.scm 176 */
																										obj_t BgL_arg1443z00_2719;

																										{	/* Eval/expddefine.scm 176 */
																											obj_t BgL_arg1444z00_2720;
																											obj_t BgL_arg1445z00_2721;

																											{	/* Eval/expddefine.scm 176 */
																												obj_t
																													BgL_arg1446z00_2722;
																												BgL_arg1446z00_2722 =
																													BGl_parsezd2formalzd2identz00zz__evutilsz00
																													(BgL_arg1407z00_1328,
																													BgL_locz00_2717);
																												BgL_arg1444z00_2720 =
																													CAR(((obj_t)
																														BgL_arg1446z00_2722));
																											}
																											{	/* Eval/expddefine.scm 176 */
																												obj_t
																													BgL_arg1448z00_2723;
																												BgL_arg1448z00_2723 =
																													PROCEDURE_ENTRY
																													(BgL_ez00_13)
																													(BgL_ez00_13,
																													BgL_arg1409z00_1329,
																													BgL_ez00_13, BEOA);
																												BgL_arg1445z00_2721 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1448z00_2723,
																													BNIL);
																											}
																											BgL_arg1443z00_2719 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1444z00_2720,
																												BgL_arg1445z00_2721);
																										}
																										BgL_resz00_2718 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2535z00zz__expander_definez00,
																											BgL_arg1443z00_2719);
																									}
																									{	/* Eval/expddefine.scm 176 */

																										return
																											BGl_evepairifyz00zz__prognz00
																											(BgL_resz00_2718,
																											BgL_xz00_12);
																									}
																								}
																							}
																						}
																					else
																						{	/* Eval/expddefine.scm 162 */
																							return
																								BGl_expandzd2errorzd2zz__expandz00
																								(BGl_string2536z00zz__expander_definez00,
																								BGl_string2531z00zz__expander_definez00,
																								BgL_xz00_12);
																						}
																				}
																			}
																		else
																			{	/* Eval/expddefine.scm 162 */
																				if (NULLP(CDR(BgL_cdrzd2298zd2_1314)))
																					{	/* Eval/expddefine.scm 162 */
																						obj_t BgL_arg1413z00_1333;
																						obj_t BgL_arg1414z00_1334;

																						BgL_arg1413z00_1333 =
																							CAR(
																							((obj_t) BgL_cdrzd2170zd2_1252));
																						BgL_arg1414z00_1334 =
																							CAR(BgL_cdrzd2307zd2_1318);
																						{
																							obj_t BgL_bodyz00_3823;
																							obj_t BgL_argsz00_3822;
																							obj_t BgL_namez00_3821;

																							BgL_namez00_3821 =
																								BgL_arg1413z00_1333;
																							BgL_argsz00_3822 =
																								BgL_arg1414z00_1334;
																							BgL_bodyz00_3823 =
																								BgL_cdrzd2311zd2_1322;
																							BgL_bodyz00_1244 =
																								BgL_bodyz00_3823;
																							BgL_argsz00_1243 =
																								BgL_argsz00_3822;
																							BgL_namez00_1242 =
																								BgL_namez00_3821;
																							goto BgL_tagzd2154zd2_1245;
																						}
																					}
																				else
																					{	/* Eval/expddefine.scm 162 */
																						return
																							BGl_expandzd2errorzd2zz__expandz00
																							(BGl_string2536z00zz__expander_definez00,
																							BGl_string2531z00zz__expander_definez00,
																							BgL_xz00_12);
																					}
																			}
																	}
																else
																	{	/* Eval/expddefine.scm 162 */
																		obj_t BgL_cdrzd2344zd2_1336;

																		BgL_cdrzd2344zd2_1336 = CDR(BgL_xz00_12);
																		{	/* Eval/expddefine.scm 162 */
																			obj_t BgL_cdrzd2349zd2_1337;

																			BgL_cdrzd2349zd2_1337 =
																				CDR(((obj_t) BgL_cdrzd2344zd2_1336));
																			if (NULLP(CDR(
																						((obj_t) BgL_cdrzd2349zd2_1337))))
																				{	/* Eval/expddefine.scm 162 */
																					obj_t BgL_arg1418z00_1340;
																					obj_t BgL_arg1419z00_1341;

																					BgL_arg1418z00_1340 =
																						CAR(
																						((obj_t) BgL_cdrzd2344zd2_1336));
																					BgL_arg1419z00_1341 =
																						CAR(
																						((obj_t) BgL_cdrzd2349zd2_1337));
																					{	/* Eval/expddefine.scm 175 */
																						obj_t BgL_locz00_2735;

																						BgL_locz00_2735 =
																							BGl_getzd2sourcezd2locationz00zz__readerz00
																							(BgL_xz00_12);
																						{	/* Eval/expddefine.scm 175 */
																							obj_t BgL_resz00_2736;

																							{	/* Eval/expddefine.scm 176 */
																								obj_t BgL_arg1443z00_2737;

																								{	/* Eval/expddefine.scm 176 */
																									obj_t BgL_arg1444z00_2738;
																									obj_t BgL_arg1445z00_2739;

																									{	/* Eval/expddefine.scm 176 */
																										obj_t BgL_arg1446z00_2740;

																										BgL_arg1446z00_2740 =
																											BGl_parsezd2formalzd2identz00zz__evutilsz00
																											(BgL_arg1418z00_1340,
																											BgL_locz00_2735);
																										BgL_arg1444z00_2738 =
																											CAR(((obj_t)
																												BgL_arg1446z00_2740));
																									}
																									{	/* Eval/expddefine.scm 176 */
																										obj_t BgL_arg1448z00_2741;

																										BgL_arg1448z00_2741 =
																											PROCEDURE_ENTRY
																											(BgL_ez00_13)
																											(BgL_ez00_13,
																											BgL_arg1419z00_1341,
																											BgL_ez00_13, BEOA);
																										BgL_arg1445z00_2739 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1448z00_2741,
																											BNIL);
																									}
																									BgL_arg1443z00_2737 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1444z00_2738,
																										BgL_arg1445z00_2739);
																								}
																								BgL_resz00_2736 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2535z00zz__expander_definez00,
																									BgL_arg1443z00_2737);
																							}
																							{	/* Eval/expddefine.scm 176 */

																								return
																									BGl_evepairifyz00zz__prognz00
																									(BgL_resz00_2736,
																									BgL_xz00_12);
																							}
																						}
																					}
																				}
																			else
																				{	/* Eval/expddefine.scm 162 */
																					return
																						BGl_expandzd2errorzd2zz__expandz00
																						(BGl_string2536z00zz__expander_definez00,
																						BGl_string2531z00zz__expander_definez00,
																						BgL_xz00_12);
																				}
																		}
																	}
															}
														else
															{	/* Eval/expddefine.scm 162 */
																obj_t BgL_cdrzd2362zd2_1343;

																BgL_cdrzd2362zd2_1343 = CDR(BgL_xz00_12);
																{	/* Eval/expddefine.scm 162 */
																	obj_t BgL_cdrzd2367zd2_1344;

																	BgL_cdrzd2367zd2_1344 =
																		CDR(((obj_t) BgL_cdrzd2362zd2_1343));
																	if (NULLP(CDR(
																				((obj_t) BgL_cdrzd2367zd2_1344))))
																		{	/* Eval/expddefine.scm 162 */
																			obj_t BgL_arg1424z00_1347;
																			obj_t BgL_arg1425z00_1348;

																			BgL_arg1424z00_1347 =
																				CAR(((obj_t) BgL_cdrzd2362zd2_1343));
																			BgL_arg1425z00_1348 =
																				CAR(((obj_t) BgL_cdrzd2367zd2_1344));
																			{	/* Eval/expddefine.scm 175 */
																				obj_t BgL_locz00_2749;

																				BgL_locz00_2749 =
																					BGl_getzd2sourcezd2locationz00zz__readerz00
																					(BgL_xz00_12);
																				{	/* Eval/expddefine.scm 175 */
																					obj_t BgL_resz00_2750;

																					{	/* Eval/expddefine.scm 176 */
																						obj_t BgL_arg1443z00_2751;

																						{	/* Eval/expddefine.scm 176 */
																							obj_t BgL_arg1444z00_2752;
																							obj_t BgL_arg1445z00_2753;

																							{	/* Eval/expddefine.scm 176 */
																								obj_t BgL_arg1446z00_2754;

																								BgL_arg1446z00_2754 =
																									BGl_parsezd2formalzd2identz00zz__evutilsz00
																									(BgL_arg1424z00_1347,
																									BgL_locz00_2749);
																								BgL_arg1444z00_2752 =
																									CAR(((obj_t)
																										BgL_arg1446z00_2754));
																							}
																							{	/* Eval/expddefine.scm 176 */
																								obj_t BgL_arg1448z00_2755;

																								BgL_arg1448z00_2755 =
																									PROCEDURE_ENTRY(BgL_ez00_13)
																									(BgL_ez00_13,
																									BgL_arg1425z00_1348,
																									BgL_ez00_13, BEOA);
																								BgL_arg1445z00_2753 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1448z00_2755, BNIL);
																							}
																							BgL_arg1443z00_2751 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1444z00_2752,
																								BgL_arg1445z00_2753);
																						}
																						BgL_resz00_2750 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2535z00zz__expander_definez00,
																							BgL_arg1443z00_2751);
																					}
																					{	/* Eval/expddefine.scm 176 */

																						return
																							BGl_evepairifyz00zz__prognz00
																							(BgL_resz00_2750, BgL_xz00_12);
																					}
																				}
																			}
																		}
																	else
																		{	/* Eval/expddefine.scm 162 */
																			return
																				BGl_expandzd2errorzd2zz__expandz00
																				(BGl_string2536z00zz__expander_definez00,
																				BGl_string2531z00zz__expander_definez00,
																				BgL_xz00_12);
																		}
																}
															}
													}
												else
													{	/* Eval/expddefine.scm 162 */
														obj_t BgL_cdrzd2385zd2_1352;

														BgL_cdrzd2385zd2_1352 =
															CDR(((obj_t) BgL_cdrzd2170zd2_1252));
														if (NULLP(CDR(((obj_t) BgL_cdrzd2385zd2_1352))))
															{	/* Eval/expddefine.scm 162 */
																obj_t BgL_arg1430z00_1355;
																obj_t BgL_arg1431z00_1356;

																BgL_arg1430z00_1355 =
																	CAR(((obj_t) BgL_cdrzd2170zd2_1252));
																BgL_arg1431z00_1356 =
																	CAR(((obj_t) BgL_cdrzd2385zd2_1352));
																{	/* Eval/expddefine.scm 175 */
																	obj_t BgL_locz00_2763;

																	BgL_locz00_2763 =
																		BGl_getzd2sourcezd2locationz00zz__readerz00
																		(BgL_xz00_12);
																	{	/* Eval/expddefine.scm 175 */
																		obj_t BgL_resz00_2764;

																		{	/* Eval/expddefine.scm 176 */
																			obj_t BgL_arg1443z00_2765;

																			{	/* Eval/expddefine.scm 176 */
																				obj_t BgL_arg1444z00_2766;
																				obj_t BgL_arg1445z00_2767;

																				{	/* Eval/expddefine.scm 176 */
																					obj_t BgL_arg1446z00_2768;

																					BgL_arg1446z00_2768 =
																						BGl_parsezd2formalzd2identz00zz__evutilsz00
																						(BgL_arg1430z00_1355,
																						BgL_locz00_2763);
																					BgL_arg1444z00_2766 =
																						CAR(((obj_t) BgL_arg1446z00_2768));
																				}
																				{	/* Eval/expddefine.scm 176 */
																					obj_t BgL_arg1448z00_2769;

																					BgL_arg1448z00_2769 =
																						PROCEDURE_ENTRY(BgL_ez00_13)
																						(BgL_ez00_13, BgL_arg1431z00_1356,
																						BgL_ez00_13, BEOA);
																					BgL_arg1445z00_2767 =
																						MAKE_YOUNG_PAIR(BgL_arg1448z00_2769,
																						BNIL);
																				}
																				BgL_arg1443z00_2765 =
																					MAKE_YOUNG_PAIR(BgL_arg1444z00_2766,
																					BgL_arg1445z00_2767);
																			}
																			BgL_resz00_2764 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol2535z00zz__expander_definez00,
																				BgL_arg1443z00_2765);
																		}
																		{	/* Eval/expddefine.scm 176 */

																			return
																				BGl_evepairifyz00zz__prognz00
																				(BgL_resz00_2764, BgL_xz00_12);
																		}
																	}
																}
															}
														else
															{	/* Eval/expddefine.scm 162 */
																return
																	BGl_expandzd2errorzd2zz__expandz00
																	(BGl_string2536z00zz__expander_definez00,
																	BGl_string2531z00zz__expander_definez00,
																	BgL_xz00_12);
															}
													}
											}
										else
											{	/* Eval/expddefine.scm 162 */
												return
													BGl_expandzd2errorzd2zz__expandz00
													(BGl_string2536z00zz__expander_definez00,
													BGl_string2531z00zz__expander_definez00, BgL_xz00_12);
											}
									}
							}
						else
							{	/* Eval/expddefine.scm 162 */
								return
									BGl_expandzd2errorzd2zz__expandz00
									(BGl_string2536z00zz__expander_definez00,
									BGl_string2531z00zz__expander_definez00, BgL_xz00_12);
							}
					}
				else
					{	/* Eval/expddefine.scm 162 */
						return
							BGl_expandzd2errorzd2zz__expandz00
							(BGl_string2536z00zz__expander_definez00,
							BGl_string2531z00zz__expander_definez00, BgL_xz00_12);
					}
			}
		}

	}



/* lambda-defines */
	obj_t BGl_lambdazd2defineszd2zz__expander_definez00(obj_t BgL_bodyz00_14)
	{
		{	/* Eval/expddefine.scm 185 */
			{
				obj_t BgL_oldformsz00_1382;
				obj_t BgL_newformsz00_1383;
				obj_t BgL_varsz00_1384;
				obj_t BgL_setsz00_1385;

				BgL_oldformsz00_1382 = BgL_bodyz00_14;
				BgL_newformsz00_1383 = BNIL;
				BgL_varsz00_1384 = BNIL;
				BgL_setsz00_1385 = BNIL;
			BgL_zc3z04anonymousza31449ze3z87_1386:
				if (PAIRP(BgL_oldformsz00_1382))
					{	/* Eval/expddefine.scm 191 */
						obj_t BgL_formz00_1388;

						BgL_formz00_1388 = CAR(BgL_oldformsz00_1382);
						{	/* Eval/expddefine.scm 191 */
							obj_t BgL_locz00_1389;

							{	/* Eval/expddefine.scm 192 */
								obj_t BgL__ortest_1042z00_1411;

								BgL__ortest_1042z00_1411 =
									BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_formz00_1388);
								if (CBOOL(BgL__ortest_1042z00_1411))
									{	/* Eval/expddefine.scm 192 */
										BgL_locz00_1389 = BgL__ortest_1042z00_1411;
									}
								else
									{	/* Eval/expddefine.scm 192 */
										BgL_locz00_1389 =
											BGl_getzd2sourcezd2locationz00zz__readerz00
											(BgL_oldformsz00_1382);
									}
							}
							{	/* Eval/expddefine.scm 192 */

								{	/* Eval/expddefine.scm 194 */
									bool_t BgL_test2695z00_3909;

									if (PAIRP(BgL_formz00_1388))
										{	/* Eval/expddefine.scm 194 */
											if (
												(CAR(BgL_formz00_1388) ==
													BGl_symbol2535z00zz__expander_definez00))
												{	/* Eval/expddefine.scm 195 */
													BgL_test2695z00_3909 = ((bool_t) 0);
												}
											else
												{	/* Eval/expddefine.scm 195 */
													BgL_test2695z00_3909 = ((bool_t) 1);
												}
										}
									else
										{	/* Eval/expddefine.scm 194 */
											BgL_test2695z00_3909 = ((bool_t) 1);
										}
									if (BgL_test2695z00_3909)
										{	/* Eval/expddefine.scm 196 */
											obj_t BgL_arg1456z00_1395;
											obj_t BgL_arg1457z00_1396;

											BgL_arg1456z00_1395 = CDR(BgL_oldformsz00_1382);
											BgL_arg1457z00_1396 =
												MAKE_YOUNG_PAIR(BgL_formz00_1388, BgL_newformsz00_1383);
											{
												obj_t BgL_newformsz00_3918;
												obj_t BgL_oldformsz00_3917;

												BgL_oldformsz00_3917 = BgL_arg1456z00_1395;
												BgL_newformsz00_3918 = BgL_arg1457z00_1396;
												BgL_newformsz00_1383 = BgL_newformsz00_3918;
												BgL_oldformsz00_1382 = BgL_oldformsz00_3917;
												goto BgL_zc3z04anonymousza31449ze3z87_1386;
											}
										}
									else
										{	/* Eval/expddefine.scm 200 */
											obj_t BgL_arg1458z00_1397;
											obj_t BgL_arg1459z00_1398;
											obj_t BgL_arg1460z00_1399;

											BgL_arg1458z00_1397 = CDR(BgL_oldformsz00_1382);
											{	/* Eval/expddefine.scm 201 */
												obj_t BgL_arg1461z00_1400;

												{	/* Eval/expddefine.scm 201 */
													obj_t BgL_pairz00_2780;

													BgL_pairz00_2780 = CDR(((obj_t) BgL_formz00_1388));
													BgL_arg1461z00_1400 = CAR(BgL_pairz00_2780);
												}
												BgL_arg1459z00_1398 =
													MAKE_YOUNG_PAIR(BgL_arg1461z00_1400,
													BgL_varsz00_1384);
											}
											{	/* Eval/expddefine.scm 202 */
												obj_t BgL_arg1462z00_1401;

												{	/* Eval/expddefine.scm 202 */
													obj_t BgL_arg1463z00_1402;

													{	/* Eval/expddefine.scm 202 */
														obj_t BgL_arg1464z00_1403;
														obj_t BgL_arg1465z00_1404;

														{	/* Eval/expddefine.scm 202 */
															obj_t BgL_arg1466z00_1405;

															{	/* Eval/expddefine.scm 202 */
																obj_t BgL_arg1467z00_1406;

																{	/* Eval/expddefine.scm 202 */
																	obj_t BgL_pairz00_2784;

																	BgL_pairz00_2784 =
																		CDR(((obj_t) BgL_formz00_1388));
																	BgL_arg1467z00_1406 = CAR(BgL_pairz00_2784);
																}
																BgL_arg1466z00_1405 =
																	BGl_parsezd2formalzd2identz00zz__evutilsz00
																	(BgL_arg1467z00_1406, BgL_locz00_1389);
															}
															BgL_arg1464z00_1403 =
																CAR(((obj_t) BgL_arg1466z00_1405));
														}
														{	/* Eval/expddefine.scm 203 */
															obj_t BgL_arg1468z00_1407;

															{	/* Eval/expddefine.scm 203 */
																obj_t BgL_pairz00_2791;

																{	/* Eval/expddefine.scm 203 */
																	obj_t BgL_pairz00_2790;

																	BgL_pairz00_2790 =
																		CDR(((obj_t) BgL_formz00_1388));
																	BgL_pairz00_2791 = CDR(BgL_pairz00_2790);
																}
																BgL_arg1468z00_1407 = CAR(BgL_pairz00_2791);
															}
															BgL_arg1465z00_1404 =
																MAKE_YOUNG_PAIR(BgL_arg1468z00_1407, BNIL);
														}
														BgL_arg1463z00_1402 =
															MAKE_YOUNG_PAIR(BgL_arg1464z00_1403,
															BgL_arg1465z00_1404);
													}
													BgL_arg1462z00_1401 =
														MAKE_YOUNG_PAIR
														(BGl_symbol2537z00zz__expander_definez00,
														BgL_arg1463z00_1402);
												}
												BgL_arg1460z00_1399 =
													MAKE_YOUNG_PAIR(BgL_arg1462z00_1401,
													BgL_setsz00_1385);
											}
											{
												obj_t BgL_setsz00_3940;
												obj_t BgL_varsz00_3939;
												obj_t BgL_oldformsz00_3938;

												BgL_oldformsz00_3938 = BgL_arg1458z00_1397;
												BgL_varsz00_3939 = BgL_arg1459z00_1398;
												BgL_setsz00_3940 = BgL_arg1460z00_1399;
												BgL_setsz00_1385 = BgL_setsz00_3940;
												BgL_varsz00_1384 = BgL_varsz00_3939;
												BgL_oldformsz00_1382 = BgL_oldformsz00_3938;
												goto BgL_zc3z04anonymousza31449ze3z87_1386;
											}
										}
								}
							}
						}
					}
				else
					{	/* Eval/expddefine.scm 190 */
						if (NULLP(BgL_varsz00_1384))
							{	/* Eval/expddefine.scm 205 */
								return BGl_expandzd2prognzd2zz__prognz00(BgL_bodyz00_14);
							}
						else
							{	/* Eval/expddefine.scm 206 */
								obj_t BgL_arg1471z00_1413;

								{	/* Eval/expddefine.scm 206 */
									obj_t BgL_arg1472z00_1414;
									obj_t BgL_arg1473z00_1415;

									{	/* Eval/expddefine.scm 206 */
										obj_t BgL_l1092z00_1416;

										BgL_l1092z00_1416 = BgL_varsz00_1384;
										if (NULLP(BgL_l1092z00_1416))
											{	/* Eval/expddefine.scm 206 */
												BgL_arg1472z00_1414 = BNIL;
											}
										else
											{	/* Eval/expddefine.scm 206 */
												obj_t BgL_head1094z00_1418;

												{	/* Eval/expddefine.scm 206 */
													obj_t BgL_res2402z00_2794;

													BgL_res2402z00_2794 = MAKE_YOUNG_PAIR(BNIL, BNIL);
													BgL_head1094z00_1418 = BgL_res2402z00_2794;
												}
												{
													obj_t BgL_l1092z00_1420;
													obj_t BgL_tail1095z00_1421;

													BgL_l1092z00_1420 = BgL_l1092z00_1416;
													BgL_tail1095z00_1421 = BgL_head1094z00_1418;
												BgL_zc3z04anonymousza31475ze3z87_1422:
													if (NULLP(BgL_l1092z00_1420))
														{	/* Eval/expddefine.scm 206 */
															BgL_arg1472z00_1414 = CDR(BgL_head1094z00_1418);
														}
													else
														{	/* Eval/expddefine.scm 206 */
															obj_t BgL_newtail1096z00_1424;

															{	/* Eval/expddefine.scm 206 */
																obj_t BgL_arg1478z00_1426;

																{	/* Eval/expddefine.scm 206 */
																	obj_t BgL_vz00_1427;

																	BgL_vz00_1427 =
																		CAR(((obj_t) BgL_l1092z00_1420));
																	{	/* Eval/expddefine.scm 206 */
																		obj_t BgL_list1479z00_1428;

																		{	/* Eval/expddefine.scm 206 */
																			obj_t BgL_arg1480z00_1429;

																			BgL_arg1480z00_1429 =
																				MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
																			BgL_list1479z00_1428 =
																				MAKE_YOUNG_PAIR(BgL_vz00_1427,
																				BgL_arg1480z00_1429);
																		}
																		BgL_arg1478z00_1426 = BgL_list1479z00_1428;
																	}
																}
																{	/* Eval/expddefine.scm 206 */
																	obj_t BgL_res2405z00_2799;

																	BgL_res2405z00_2799 =
																		MAKE_YOUNG_PAIR(BgL_arg1478z00_1426, BNIL);
																	BgL_newtail1096z00_1424 = BgL_res2405z00_2799;
																}
															}
															SET_CDR(BgL_tail1095z00_1421,
																BgL_newtail1096z00_1424);
															{	/* Eval/expddefine.scm 206 */
																obj_t BgL_arg1477z00_1425;

																BgL_arg1477z00_1425 =
																	CDR(((obj_t) BgL_l1092z00_1420));
																{
																	obj_t BgL_tail1095z00_3959;
																	obj_t BgL_l1092z00_3958;

																	BgL_l1092z00_3958 = BgL_arg1477z00_1425;
																	BgL_tail1095z00_3959 =
																		BgL_newtail1096z00_1424;
																	BgL_tail1095z00_1421 = BgL_tail1095z00_3959;
																	BgL_l1092z00_1420 = BgL_l1092z00_3958;
																	goto BgL_zc3z04anonymousza31475ze3z87_1422;
																}
															}
														}
												}
											}
									}
									BgL_arg1473z00_1415 =
										MAKE_YOUNG_PAIR(BGl_expandzd2prognzd2zz__prognz00
										(BGl_appendzd221011zd2zz__expander_definez00(bgl_reverse
												(BgL_setsz00_1385), bgl_reverse(BgL_newformsz00_1383))),
										BNIL);
									BgL_arg1471z00_1413 =
										MAKE_YOUNG_PAIR(BgL_arg1472z00_1414, BgL_arg1473z00_1415);
								}
								return
									MAKE_YOUNG_PAIR(BGl_symbol2539z00zz__expander_definez00,
									BgL_arg1471z00_1413);
							}
					}
			}
		}

	}



/* expand-eval-define-inline */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2evalzd2definezd2inlinezd2zz__expander_definez00(obj_t
		BgL_xz00_15, obj_t BgL_ez00_16)
	{
		{	/* Eval/expddefine.scm 213 */
			{
				obj_t BgL_funz00_1436;
				obj_t BgL_formalsz00_1437;
				obj_t BgL_bodyz00_1438;

				if (PAIRP(BgL_xz00_15))
					{	/* Eval/expddefine.scm 214 */
						obj_t BgL_cdrzd2421zd2_1443;

						BgL_cdrzd2421zd2_1443 = CDR(BgL_xz00_15);
						if (PAIRP(BgL_cdrzd2421zd2_1443))
							{	/* Eval/expddefine.scm 214 */
								obj_t BgL_carzd2425zd2_1445;
								obj_t BgL_cdrzd2426zd2_1446;

								BgL_carzd2425zd2_1445 = CAR(BgL_cdrzd2421zd2_1443);
								BgL_cdrzd2426zd2_1446 = CDR(BgL_cdrzd2421zd2_1443);
								if (PAIRP(BgL_carzd2425zd2_1445))
									{	/* Eval/expddefine.scm 214 */
										if (NULLP(BgL_cdrzd2426zd2_1446))
											{	/* Eval/expddefine.scm 214 */
												return
													BGl_expandzd2errorzd2zz__expandz00
													(BGl_string2541z00zz__expander_definez00,
													BGl_string2531z00zz__expander_definez00, BgL_xz00_15);
											}
										else
											{	/* Eval/expddefine.scm 214 */
												BgL_funz00_1436 = CAR(BgL_carzd2425zd2_1445);
												BgL_formalsz00_1437 = CDR(BgL_carzd2425zd2_1445);
												BgL_bodyz00_1438 = BgL_cdrzd2426zd2_1446;
												{	/* Eval/expddefine.scm 216 */
													obj_t BgL_locz00_1451;

													BgL_locz00_1451 =
														BGl_getzd2sourcezd2locationz00zz__readerz00
														(BgL_xz00_15);
													{	/* Eval/expddefine.scm 216 */
														obj_t BgL_resz00_1452;

														{	/* Eval/expddefine.scm 217 */
															obj_t BgL_arg1493z00_1453;

															{	/* Eval/expddefine.scm 217 */
																obj_t BgL_arg1494z00_1454;
																obj_t BgL_arg1495z00_1455;

																{	/* Eval/expddefine.scm 217 */
																	obj_t BgL_arg1496z00_1456;

																	BgL_arg1496z00_1456 =
																		BGl_parsezd2formalzd2identz00zz__evutilsz00
																		(BgL_funz00_1436, BgL_locz00_1451);
																	BgL_arg1494z00_1454 =
																		CAR(((obj_t) BgL_arg1496z00_1456));
																}
																{	/* Eval/expddefine.scm 218 */
																	obj_t BgL_arg1497z00_1457;

																	{	/* Eval/expddefine.scm 218 */
																		obj_t BgL_arg1498z00_1458;

																		{	/* Eval/expddefine.scm 218 */
																			obj_t BgL_arg1500z00_1459;

																			{	/* Eval/expddefine.scm 218 */
																				obj_t BgL_arg1502z00_1460;
																				obj_t BgL_arg1505z00_1461;

																				BgL_arg1502z00_1460 =
																					BGl_loopze70ze7zz__expander_definez00
																					(BgL_ez00_16, BgL_formalsz00_1437);
																				BgL_arg1505z00_1461 =
																					MAKE_YOUNG_PAIR
																					(BGl_expandzd2prognzd2zz__prognz00
																					(BgL_bodyz00_1438), BNIL);
																				BgL_arg1500z00_1459 =
																					MAKE_YOUNG_PAIR(BgL_arg1502z00_1460,
																					BgL_arg1505z00_1461);
																			}
																			BgL_arg1498z00_1458 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol2532z00zz__expander_definez00,
																				BgL_arg1500z00_1459);
																		}
																		BgL_arg1497z00_1457 =
																			PROCEDURE_ENTRY(BgL_ez00_16) (BgL_ez00_16,
																			BgL_arg1498z00_1458, BgL_ez00_16, BEOA);
																	}
																	BgL_arg1495z00_1455 =
																		MAKE_YOUNG_PAIR(BgL_arg1497z00_1457, BNIL);
																}
																BgL_arg1493z00_1453 =
																	MAKE_YOUNG_PAIR(BgL_arg1494z00_1454,
																	BgL_arg1495z00_1455);
															}
															BgL_resz00_1452 =
																MAKE_YOUNG_PAIR
																(BGl_symbol2535z00zz__expander_definez00,
																BgL_arg1493z00_1453);
														}
														{	/* Eval/expddefine.scm 217 */

															return
																BGl_evepairifyz00zz__prognz00(BgL_resz00_1452,
																BgL_xz00_15);
														}
													}
												}
											}
									}
								else
									{	/* Eval/expddefine.scm 214 */
										return
											BGl_expandzd2errorzd2zz__expandz00
											(BGl_string2541z00zz__expander_definez00,
											BGl_string2531z00zz__expander_definez00, BgL_xz00_15);
									}
							}
						else
							{	/* Eval/expddefine.scm 214 */
								return
									BGl_expandzd2errorzd2zz__expandz00
									(BGl_string2541z00zz__expander_definez00,
									BGl_string2531z00zz__expander_definez00, BgL_xz00_15);
							}
					}
				else
					{	/* Eval/expddefine.scm 214 */
						return
							BGl_expandzd2errorzd2zz__expandz00
							(BGl_string2541z00zz__expander_definez00,
							BGl_string2531z00zz__expander_definez00, BgL_xz00_15);
					}
			}
		}

	}



/* &expand-eval-define-inline */
	obj_t BGl_z62expandzd2evalzd2definezd2inlinezb0zz__expander_definez00(obj_t
		BgL_envz00_3266, obj_t BgL_xz00_3267, obj_t BgL_ez00_3268)
	{
		{	/* Eval/expddefine.scm 213 */
			{	/* Eval/expddefine.scm 214 */
				obj_t BgL_auxz00_4002;

				if (PROCEDUREP(BgL_ez00_3268))
					{	/* Eval/expddefine.scm 214 */
						BgL_auxz00_4002 = BgL_ez00_3268;
					}
				else
					{
						obj_t BgL_auxz00_4005;

						BgL_auxz00_4005 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2524z00zz__expander_definez00, BINT(((long) 7844)),
							BGl_string2542z00zz__expander_definez00,
							BGl_string2526z00zz__expander_definez00, BgL_ez00_3268);
						FAILURE(BgL_auxz00_4005, BFALSE, BFALSE);
					}
				return
					BGl_expandzd2evalzd2definezd2inlinezd2zz__expander_definez00
					(BgL_xz00_3267, BgL_auxz00_4002);
			}
		}

	}



/* map+ */
	obj_t BGl_mapzb2zb2zz__expander_definez00(obj_t BgL_fz00_17,
		obj_t BgL_lstz00_18)
	{
		{	/* Eval/expddefine.scm 227 */
			if (NULLP(BgL_lstz00_18))
				{	/* Eval/expddefine.scm 229 */
					return BNIL;
				}
			else
				{	/* Eval/expddefine.scm 229 */
					if (PAIRP(BgL_lstz00_18))
						{	/* Eval/expddefine.scm 234 */
							obj_t BgL_arg1509z00_1465;
							obj_t BgL_arg1510z00_1466;

							{	/* Eval/expddefine.scm 234 */
								obj_t BgL_arg1511z00_1467;

								BgL_arg1511z00_1467 = CAR(BgL_lstz00_18);
								BgL_arg1509z00_1465 =
									PROCEDURE_L_ENTRY(BgL_fz00_17) (BgL_fz00_17,
									BgL_arg1511z00_1467);
							}
							BgL_arg1510z00_1466 =
								BGl_mapzb2zb2zz__expander_definez00(BgL_fz00_17,
								CDR(BgL_lstz00_18));
							return MAKE_YOUNG_PAIR(BgL_arg1509z00_1465, BgL_arg1510z00_1466);
						}
					else
						{	/* Eval/expddefine.scm 231 */
							return
								PROCEDURE_L_ENTRY(BgL_fz00_17) (BgL_fz00_17, BgL_lstz00_18);
						}
				}
		}

	}



/* all? */
	bool_t BGl_allzf3zf3zz__expander_definez00(obj_t BgL_predz00_19,
		obj_t BgL_pz00_20)
	{
		{	/* Eval/expddefine.scm 239 */
			{
				obj_t BgL_pz00_1470;

				BgL_pz00_1470 = BgL_pz00_20;
			BgL_zc3z04anonymousza31513ze3z87_1471:
				if (NULLP(BgL_pz00_1470))
					{	/* Eval/expddefine.scm 242 */
						return ((bool_t) 1);
					}
				else
					{	/* Eval/expddefine.scm 242 */
						if (PAIRP(BgL_pz00_1470))
							{	/* Eval/expddefine.scm 243 */
								bool_t BgL_test2710z00_4030;

								{	/* Eval/expddefine.scm 243 */
									obj_t BgL_arg1519z00_1477;

									BgL_arg1519z00_1477 = CAR(BgL_pz00_1470);
									BgL_test2710z00_4030 =
										CBOOL(PROCEDURE_ENTRY(BgL_predz00_19) (BgL_predz00_19,
											BgL_arg1519z00_1477, BEOA));
								}
								if (BgL_test2710z00_4030)
									{
										obj_t BgL_pz00_4037;

										BgL_pz00_4037 = CDR(BgL_pz00_1470);
										BgL_pz00_1470 = BgL_pz00_4037;
										goto BgL_zc3z04anonymousza31513ze3z87_1471;
									}
								else
									{	/* Eval/expddefine.scm 243 */
										return ((bool_t) 0);
									}
							}
						else
							{	/* Eval/expddefine.scm 243 */
								return
									CBOOL(PROCEDURE_ENTRY(BgL_predz00_19) (BgL_predz00_19,
										BgL_pz00_1470, BEOA));
							}
					}
			}
		}

	}



/* expand-eval-define-generic */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2evalzd2definezd2genericzd2zz__expander_definez00(obj_t
		BgL_xz00_21, obj_t BgL_ez00_22)
	{
		{	/* Eval/expddefine.scm 250 */
			{
				obj_t BgL_funz00_1480;
				obj_t BgL_f0z00_1481;
				obj_t BgL_formalsz00_1482;
				obj_t BgL_bodyz00_1483;

				if (PAIRP(BgL_xz00_21))
					{	/* Eval/expddefine.scm 251 */
						obj_t BgL_cdrzd2447zd2_1488;

						BgL_cdrzd2447zd2_1488 = CDR(BgL_xz00_21);
						if (PAIRP(BgL_cdrzd2447zd2_1488))
							{	/* Eval/expddefine.scm 251 */
								obj_t BgL_carzd2452zd2_1490;

								BgL_carzd2452zd2_1490 = CAR(BgL_cdrzd2447zd2_1488);
								if (PAIRP(BgL_carzd2452zd2_1490))
									{	/* Eval/expddefine.scm 251 */
										obj_t BgL_cdrzd2458zd2_1492;

										BgL_cdrzd2458zd2_1492 = CDR(BgL_carzd2452zd2_1490);
										if (PAIRP(BgL_cdrzd2458zd2_1492))
											{	/* Eval/expddefine.scm 251 */
												BgL_funz00_1480 = CAR(BgL_carzd2452zd2_1490);
												BgL_f0z00_1481 = CAR(BgL_cdrzd2458zd2_1492);
												BgL_formalsz00_1482 = CDR(BgL_cdrzd2458zd2_1492);
												BgL_bodyz00_1483 = CDR(BgL_cdrzd2447zd2_1488);
												{	/* Eval/expddefine.scm 253 */
													obj_t BgL_locz00_1498;

													BgL_locz00_1498 =
														BGl_getzd2sourcezd2locationz00zz__readerz00
														(BgL_xz00_21);
													{	/* Eval/expddefine.scm 253 */
														obj_t BgL_pfz00_1499;

														BgL_pfz00_1499 =
															BGl_parsezd2formalzd2identz00zz__evutilsz00
															(BgL_funz00_1480, BgL_locz00_1498);
														{	/* Eval/expddefine.scm 254 */
															obj_t BgL_idz00_1500;

															BgL_idz00_1500 = CAR(((obj_t) BgL_pfz00_1499));
															{	/* Eval/expddefine.scm 255 */
																obj_t BgL_paz00_1501;

																{	/* Eval/expddefine.scm 256 */
																	obj_t BgL_arg1798z00_1764;

																	BgL_arg1798z00_1764 =
																		MAKE_YOUNG_PAIR(BgL_f0z00_1481,
																		BgL_formalsz00_1482);
																	{	/* Eval/expddefine.scm 256 */
																		obj_t BgL_zc3z04anonymousza31799ze3z87_3271;

																		{
																			int BgL_tmpz00_4060;

																			BgL_tmpz00_4060 = (int) (((long) 1));
																			BgL_zc3z04anonymousza31799ze3z87_3271 =
																				MAKE_L_PROCEDURE
																				(BGl_z62zc3z04anonymousza31799ze3ze5zz__expander_definez00,
																				BgL_tmpz00_4060);
																		}
																		PROCEDURE_L_SET
																			(BgL_zc3z04anonymousza31799ze3z87_3271,
																			(int) (((long) 0)), BgL_locz00_1498);
																		BgL_paz00_1501 =
																			BGl_mapzb2zb2zz__expander_definez00
																			(BgL_zc3z04anonymousza31799ze3z87_3271,
																			BgL_arg1798z00_1764);
																}}
																{	/* Eval/expddefine.scm 256 */
																	obj_t BgL_defz00_1502;

																	BgL_defz00_1502 =
																		BGl_gensymz00zz__r4_symbols_6_4z00
																		(BgL_idz00_1500);
																	{	/* Eval/expddefine.scm 258 */
																		obj_t BgL_epaz00_1503;

																		BgL_epaz00_1503 =
																			BGl_loopze70ze7zz__expander_definez00
																			(BgL_ez00_22, BgL_paz00_1501);
																		{	/* Eval/expddefine.scm 259 */
																			bool_t BgL_vaz00_1504;

																			if (NULLP(BgL_formalsz00_1482))
																				{	/* Eval/expddefine.scm 260 */
																					BgL_vaz00_1504 = ((bool_t) 0);
																				}
																			else
																				{	/* Eval/expddefine.scm 261 */
																					bool_t BgL__ortest_1044z00_1756;

																					if (PAIRP(BgL_formalsz00_1482))
																						{	/* Eval/expddefine.scm 261 */
																							BgL__ortest_1044z00_1756 =
																								((bool_t) 0);
																						}
																					else
																						{	/* Eval/expddefine.scm 261 */
																							BgL__ortest_1044z00_1756 =
																								((bool_t) 1);
																						}
																					if (BgL__ortest_1044z00_1756)
																						{	/* Eval/expddefine.scm 261 */
																							BgL_vaz00_1504 =
																								BgL__ortest_1044z00_1756;
																						}
																					else
																						{	/* Eval/expddefine.scm 261 */
																							if (NULLP(CDR
																									(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
																										(BgL_formalsz00_1482))))
																								{	/* Eval/expddefine.scm 262 */
																									BgL_vaz00_1504 = ((bool_t) 0);
																								}
																							else
																								{	/* Eval/expddefine.scm 262 */
																									BgL_vaz00_1504 = ((bool_t) 1);
																								}
																						}
																				}
																			{	/* Eval/expddefine.scm 260 */
																				obj_t BgL_metz00_1505;

																				BgL_metz00_1505 =
																					BGl_gensymz00zz__r4_symbols_6_4z00
																					(BgL_idz00_1500);
																				{	/* Eval/expddefine.scm 263 */
																					obj_t BgL_metzd2bodyzd2_1506;

																					BgL_metzd2bodyzd2_1506 =
																						MAKE_YOUNG_PAIR(BgL_metz00_1505,
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BGl_mapzb2zb2zz__expander_definez00
																							(BGl_proc2543z00zz__expander_definez00,
																								BgL_epaz00_1503), BNIL));
																					{	/* Eval/expddefine.scm 264 */
																						obj_t BgL_procz00_1507;

																						{	/* Eval/expddefine.scm 268 */
																							bool_t BgL_test2719z00_4081;

																							{	/* Eval/expddefine.scm 268 */
																								obj_t BgL_arg1783z00_1746;

																								{	/* Eval/expddefine.scm 268 */
																									obj_t BgL_pairz00_2832;

																									{	/* Eval/expddefine.scm 268 */
																										obj_t BgL_pairz00_2831;

																										BgL_pairz00_2831 =
																											CDR(
																											((obj_t) BgL_xz00_21));
																										BgL_pairz00_2832 =
																											CAR(BgL_pairz00_2831);
																									}
																									BgL_arg1783z00_1746 =
																										CDR(BgL_pairz00_2832);
																								}
																								BgL_test2719z00_4081 =
																									BGl_allzf3zf3zz__expander_definez00
																									(BGl_symbolzf3zd2envz21zz__r4_symbols_6_4z00,
																									BgL_arg1783z00_1746);
																							}
																							if (BgL_test2719z00_4081)
																								{	/* Eval/expddefine.scm 269 */
																									obj_t BgL_defzd2bodyzd2_1543;

																									{	/* Eval/expddefine.scm 269 */
																										obj_t BgL_arg1627z00_1581;
																										obj_t BgL_arg1628z00_1582;

																										{	/* Eval/expddefine.scm 269 */
																											obj_t BgL_arg1629z00_1583;

																											BgL_arg1629z00_1583 =
																												MAKE_YOUNG_PAIR
																												(BgL_idz00_1500, BNIL);
																											BgL_arg1627z00_1581 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2544z00zz__expander_definez00,
																												BgL_arg1629z00_1583);
																										}
																										BgL_arg1628z00_1582 =
																											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																											(BGl_mapzb2zb2zz__expander_definez00
																											(BGl_proc2546z00zz__expander_definez00,
																												BgL_epaz00_1503), BNIL);
																										BgL_defzd2bodyzd2_1543 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1627z00_1581,
																											BgL_arg1628z00_1582);
																									}
																									{	/* Eval/expddefine.scm 273 */
																										obj_t BgL_arg1577z00_1544;

																										{	/* Eval/expddefine.scm 273 */
																											obj_t BgL_arg1578z00_1545;
																											obj_t BgL_arg1579z00_1546;

																											BgL_arg1578z00_1545 =
																												MAKE_YOUNG_PAIR
																												(BgL_f0z00_1481,
																												BgL_formalsz00_1482);
																											{	/* Eval/expddefine.scm 275 */
																												obj_t
																													BgL_arg1580z00_1547;
																												{	/* Eval/expddefine.scm 275 */
																													obj_t
																														BgL_arg1582z00_1548;
																													{	/* Eval/expddefine.scm 275 */
																														obj_t
																															BgL_arg1583z00_1549;
																														obj_t
																															BgL_arg1584z00_1550;
																														{	/* Eval/expddefine.scm 275 */
																															obj_t
																																BgL_arg1587z00_1551;
																															{	/* Eval/expddefine.scm 275 */
																																obj_t
																																	BgL_arg1588z00_1552;
																																{	/* Eval/expddefine.scm 275 */
																																	obj_t
																																		BgL_arg1589z00_1553;
																																	{	/* Eval/expddefine.scm 275 */
																																		obj_t
																																			BgL_arg1592z00_1554;
																																		{	/* Eval/expddefine.scm 275 */
																																			obj_t
																																				BgL_arg1593z00_1555;
																																			{	/* Eval/expddefine.scm 275 */
																																				obj_t
																																					BgL_arg1596z00_1556;
																																				if (BgL_vaz00_1504)
																																					{	/* Eval/expddefine.scm 275 */
																																						BgL_arg1596z00_1556
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol2547z00zz__expander_definez00,
																																							BgL_defzd2bodyzd2_1543);
																																					}
																																				else
																																					{	/* Eval/expddefine.scm 275 */
																																						BgL_arg1596z00_1556
																																							=
																																							BgL_defzd2bodyzd2_1543;
																																					}
																																				BgL_arg1593z00_1555
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1596z00_1556,
																																					BNIL);
																																			}
																																			BgL_arg1592z00_1554
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BNIL,
																																				BgL_arg1593z00_1555);
																																		}
																																		BgL_arg1589z00_1553
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_symbol2532z00zz__expander_definez00,
																																			BgL_arg1592z00_1554);
																																	}
																																	BgL_arg1588z00_1552
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1589z00_1553,
																																		BNIL);
																																}
																																BgL_arg1587z00_1551
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_defz00_1502,
																																	BgL_arg1588z00_1552);
																															}
																															BgL_arg1583z00_1549
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1587z00_1551,
																																BNIL);
																														}
																														{	/* Eval/expddefine.scm 278 */
																															obj_t
																																BgL_arg1597z00_1557;
																															{	/* Eval/expddefine.scm 278 */
																																obj_t
																																	BgL_arg1598z00_1558;
																																{	/* Eval/expddefine.scm 278 */
																																	obj_t
																																		BgL_arg1599z00_1559;
																																	obj_t
																																		BgL_arg1602z00_1560;
																																	{	/* Eval/expddefine.scm 278 */
																																		obj_t
																																			BgL_arg1603z00_1561;
																																		{	/* Eval/expddefine.scm 278 */
																																			obj_t
																																				BgL_arg1604z00_1562;
																																			{	/* Eval/expddefine.scm 278 */
																																				obj_t
																																					BgL_arg1605z00_1563;
																																				{	/* Eval/expddefine.scm 278 */
																																					obj_t
																																						BgL_arg1606z00_1564;
																																					{	/* Eval/expddefine.scm 278 */
																																						obj_t
																																							BgL_arg1607z00_1565;
																																						obj_t
																																							BgL_arg1608z00_1566;
																																						{	/* Eval/expddefine.scm 278 */
																																							obj_t
																																								BgL_arg1611z00_1567;
																																							{	/* Eval/expddefine.scm 278 */
																																								obj_t
																																									BgL_arg1612z00_1568;
																																								{	/* Eval/expddefine.scm 278 */
																																									obj_t
																																										BgL_pairz00_2839;
																																									BgL_pairz00_2839
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_paz00_1501));
																																									BgL_arg1612z00_1568
																																										=
																																										CAR
																																										(BgL_pairz00_2839);
																																								}
																																								BgL_arg1611z00_1567
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg1612z00_1568,
																																									BNIL);
																																							}
																																							BgL_arg1607z00_1565
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2549z00zz__expander_definez00,
																																								BgL_arg1611z00_1567);
																																						}
																																						{	/* Eval/expddefine.scm 279 */
																																							obj_t
																																								BgL_arg1613z00_1569;
																																							{	/* Eval/expddefine.scm 279 */
																																								obj_t
																																									BgL_arg1614z00_1570;
																																								{	/* Eval/expddefine.scm 279 */
																																									obj_t
																																										BgL_arg1615z00_1571;
																																									obj_t
																																										BgL_arg1616z00_1572;
																																									{	/* Eval/expddefine.scm 279 */
																																										obj_t
																																											BgL_pairz00_2843;
																																										BgL_pairz00_2843
																																											=
																																											CAR
																																											(
																																											((obj_t) BgL_paz00_1501));
																																										BgL_arg1615z00_1571
																																											=
																																											CAR
																																											(BgL_pairz00_2843);
																																									}
																																									BgL_arg1616z00_1572
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_idz00_1500,
																																										BNIL);
																																									BgL_arg1614z00_1570
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_arg1615z00_1571,
																																										BgL_arg1616z00_1572);
																																								}
																																								BgL_arg1613z00_1569
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2551z00zz__expander_definez00,
																																									BgL_arg1614z00_1570);
																																							}
																																							BgL_arg1608z00_1566
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_arg1613z00_1569,
																																								BNIL);
																																						}
																																						BgL_arg1606z00_1564
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1607z00_1565,
																																							BgL_arg1608z00_1566);
																																					}
																																					BgL_arg1605z00_1563
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2553z00zz__expander_definez00,
																																						BgL_arg1606z00_1564);
																																				}
																																				BgL_arg1604z00_1562
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1605z00_1563,
																																					BNIL);
																																			}
																																			BgL_arg1603z00_1561
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_metz00_1505,
																																				BgL_arg1604z00_1562);
																																		}
																																		BgL_arg1599z00_1559
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1603z00_1561,
																																			BNIL);
																																	}
																																	{	/* Eval/expddefine.scm 280 */
																																		obj_t
																																			BgL_arg1617z00_1573;
																																		{	/* Eval/expddefine.scm 280 */
																																			obj_t
																																				BgL_arg1618z00_1574;
																																			{	/* Eval/expddefine.scm 280 */
																																				obj_t
																																					BgL_arg1619z00_1575;
																																				obj_t
																																					BgL_arg1620z00_1576;
																																				{	/* Eval/expddefine.scm 280 */
																																					obj_t
																																						BgL_arg1621z00_1577;
																																					BgL_arg1621z00_1577
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_metz00_1505,
																																						BNIL);
																																					BgL_arg1619z00_1575
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2555z00zz__expander_definez00,
																																						BgL_arg1621z00_1577);
																																				}
																																				{	/* Eval/expddefine.scm 281 */
																																					obj_t
																																						BgL_arg1623z00_1578;
																																					obj_t
																																						BgL_arg1624z00_1579;
																																					if (BgL_vaz00_1504)
																																						{	/* Eval/expddefine.scm 281 */
																																							BgL_arg1623z00_1578
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2547z00zz__expander_definez00,
																																								BgL_metzd2bodyzd2_1506);
																																						}
																																					else
																																						{	/* Eval/expddefine.scm 281 */
																																							BgL_arg1623z00_1578
																																								=
																																								BgL_metzd2bodyzd2_1506;
																																						}
																																					{	/* Eval/expddefine.scm 282 */
																																						obj_t
																																							BgL_arg1626z00_1580;
																																						BgL_arg1626z00_1580
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_defz00_1502,
																																							BNIL);
																																						BgL_arg1624z00_1579
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1626z00_1580,
																																							BNIL);
																																					}
																																					BgL_arg1620z00_1576
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg1623z00_1578,
																																						BgL_arg1624z00_1579);
																																				}
																																				BgL_arg1618z00_1574
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1619z00_1575,
																																					BgL_arg1620z00_1576);
																																			}
																																			BgL_arg1617z00_1573
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol2557z00zz__expander_definez00,
																																				BgL_arg1618z00_1574);
																																		}
																																		BgL_arg1602z00_1560
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1617z00_1573,
																																			BNIL);
																																	}
																																	BgL_arg1598z00_1558
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1599z00_1559,
																																		BgL_arg1602z00_1560);
																																}
																																BgL_arg1597z00_1557
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_symbol2539z00zz__expander_definez00,
																																	BgL_arg1598z00_1558);
																															}
																															BgL_arg1584z00_1550
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1597z00_1557,
																																BNIL);
																														}
																														BgL_arg1582z00_1548
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1583z00_1549,
																															BgL_arg1584z00_1550);
																													}
																													BgL_arg1580z00_1547 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol2539z00zz__expander_definez00,
																														BgL_arg1582z00_1548);
																												}
																												BgL_arg1579z00_1546 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1580z00_1547,
																													BNIL);
																											}
																											BgL_arg1577z00_1544 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1578z00_1545,
																												BgL_arg1579z00_1546);
																										}
																										BgL_procz00_1507 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2532z00zz__expander_definez00,
																											BgL_arg1577z00_1544);
																									}
																								}
																							else
																								{	/* Eval/expddefine.scm 283 */
																									bool_t BgL_test2722z00_4136;

																									if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_formalsz00_1482))
																										{	/* Eval/expddefine.scm 283 */
																											BgL_test2722z00_4136 =
																												CBOOL
																												(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																												((BOPTIONAL),
																													BgL_formalsz00_1482));
																										}
																									else
																										{	/* Eval/expddefine.scm 283 */
																											BgL_test2722z00_4136 =
																												((bool_t) 0);
																										}
																									if (BgL_test2722z00_4136)
																										{	/* Eval/expddefine.scm 284 */
																											bool_t
																												BgL_test2724z00_4141;
																											{	/* Eval/expddefine.scm 284 */
																												obj_t
																													BgL_arg1711z00_1663;
																												{	/* Eval/expddefine.scm 284 */
																													obj_t
																														BgL_arg1712z00_1664;
																													{	/* Eval/expddefine.scm 284 */
																														obj_t
																															BgL_hook1101z00_1665;
																														BgL_hook1101z00_1665
																															=
																															MAKE_YOUNG_PAIR
																															(BFALSE, BNIL);
																														{
																															obj_t
																																BgL_l1098z00_1667;
																															obj_t
																																BgL_h1099z00_1668;
																															BgL_l1098z00_1667
																																=
																																BgL_formalsz00_1482;
																															BgL_h1099z00_1668
																																=
																																BgL_hook1101z00_1665;
																														BgL_zc3z04anonymousza31713ze3z87_1669:
																															if (NULLP
																																(BgL_l1098z00_1667))
																																{	/* Eval/expddefine.scm 284 */
																																	BgL_arg1712z00_1664
																																		=
																																		CDR
																																		(BgL_hook1101z00_1665);
																																}
																															else
																																{	/* Eval/expddefine.scm 284 */
																																	bool_t
																																		BgL_test2726z00_4146;
																																	{	/* Eval/expddefine.scm 284 */
																																		obj_t
																																			BgL_arg1720z00_1676;
																																		BgL_arg1720z00_1676
																																			=
																																			CAR((
																																				(obj_t)
																																				BgL_l1098z00_1667));
																																		BgL_test2726z00_4146
																																			=
																																			BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00
																																			(BgL_arg1720z00_1676);
																																	}
																																	if (BgL_test2726z00_4146)
																																		{	/* Eval/expddefine.scm 284 */
																																			obj_t
																																				BgL_nh1100z00_1672;
																																			{	/* Eval/expddefine.scm 284 */
																																				obj_t
																																					BgL_arg1717z00_1674;
																																				BgL_arg1717z00_1674
																																					=
																																					CAR((
																																						(obj_t)
																																						BgL_l1098z00_1667));
																																				{	/* Eval/expddefine.scm 284 */
																																					obj_t
																																						BgL_res2420z00_2848;
																																					BgL_res2420z00_2848
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg1717z00_1674,
																																						BNIL);
																																					BgL_nh1100z00_1672
																																						=
																																						BgL_res2420z00_2848;
																																				}
																																			}
																																			SET_CDR
																																				(BgL_h1099z00_1668,
																																				BgL_nh1100z00_1672);
																																			{	/* Eval/expddefine.scm 284 */
																																				obj_t
																																					BgL_arg1716z00_1673;
																																				BgL_arg1716z00_1673
																																					=
																																					CDR((
																																						(obj_t)
																																						BgL_l1098z00_1667));
																																				{
																																					obj_t
																																						BgL_h1099z00_4157;
																																					obj_t
																																						BgL_l1098z00_4156;
																																					BgL_l1098z00_4156
																																						=
																																						BgL_arg1716z00_1673;
																																					BgL_h1099z00_4157
																																						=
																																						BgL_nh1100z00_1672;
																																					BgL_h1099z00_1668
																																						=
																																						BgL_h1099z00_4157;
																																					BgL_l1098z00_1667
																																						=
																																						BgL_l1098z00_4156;
																																					goto
																																						BgL_zc3z04anonymousza31713ze3z87_1669;
																																				}
																																			}
																																		}
																																	else
																																		{	/* Eval/expddefine.scm 284 */
																																			obj_t
																																				BgL_arg1719z00_1675;
																																			BgL_arg1719z00_1675
																																				=
																																				CDR((
																																					(obj_t)
																																					BgL_l1098z00_1667));
																																			{
																																				obj_t
																																					BgL_l1098z00_4160;
																																				BgL_l1098z00_4160
																																					=
																																					BgL_arg1719z00_1675;
																																				BgL_l1098z00_1667
																																					=
																																					BgL_l1098z00_4160;
																																				goto
																																					BgL_zc3z04anonymousza31713ze3z87_1669;
																																			}
																																		}
																																}
																														}
																													}
																													BgL_arg1711z00_1663 =
																														CDR(
																														((obj_t)
																															BgL_arg1712z00_1664));
																												}
																												BgL_test2724z00_4141 =
																													PAIRP
																													(BgL_arg1711z00_1663);
																											}
																											if (BgL_test2724z00_4141)
																												{	/* Eval/expddefine.scm 284 */
																													BgL_procz00_1507 =
																														BGl_expandzd2errorzd2zz__expandz00
																														(BgL_funz00_1480,
																														BGl_string2559z00zz__expander_definez00,
																														BgL_xz00_21);
																												}
																											else
																												{	/* Eval/expddefine.scm 288 */
																													obj_t BgL_locz00_1609;

																													BgL_locz00_1609 =
																														BGl_getzd2sourcezd2locationz00zz__readerz00
																														(BgL_xz00_21);
																													{	/* Eval/expddefine.scm 288 */
																														obj_t
																															BgL_argsz00_1610;
																														BgL_argsz00_1610 =
																															BGl_gensymz00zz__r4_symbols_6_4z00
																															(BGl_symbol2560z00zz__expander_definez00);
																														{	/* Eval/expddefine.scm 289 */
																															obj_t
																																BgL_namesz00_1611;
																															BgL_namesz00_1611
																																=
																																BGl_dssslzd2formalszd2ze3namesze3zz__expander_definez00
																																(BgL_formalsz00_1482);
																															{	/* Eval/expddefine.scm 290 */
																																obj_t
																																	BgL_unamesz00_1612;
																																if (NULLP
																																	(BgL_namesz00_1611))
																																	{	/* Eval/expddefine.scm 291 */
																																		BgL_unamesz00_1612
																																			= BNIL;
																																	}
																																else
																																	{	/* Eval/expddefine.scm 291 */
																																		obj_t
																																			BgL_head1104z00_1651;
																																		{	/* Eval/expddefine.scm 291 */
																																			obj_t
																																				BgL_res2423z00_2855;
																																			BgL_res2423z00_2855
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_head1104z00_1651
																																				=
																																				BgL_res2423z00_2855;
																																		}
																																		{
																																			obj_t
																																				BgL_l1102z00_1653;
																																			obj_t
																																				BgL_tail1105z00_1654;
																																			BgL_l1102z00_1653
																																				=
																																				BgL_namesz00_1611;
																																			BgL_tail1105z00_1654
																																				=
																																				BgL_head1104z00_1651;
																																		BgL_zc3z04anonymousza31706ze3z87_1655:
																																			if (NULLP
																																				(BgL_l1102z00_1653))
																																				{	/* Eval/expddefine.scm 291 */
																																					BgL_unamesz00_1612
																																						=
																																						CDR
																																						(BgL_head1104z00_1651);
																																				}
																																			else
																																				{	/* Eval/expddefine.scm 291 */
																																					obj_t
																																						BgL_newtail1106z00_1657;
																																					{	/* Eval/expddefine.scm 291 */
																																						obj_t
																																							BgL_arg1709z00_1659;
																																						{	/* Eval/expddefine.scm 291 */
																																							obj_t
																																								BgL_fz00_1660;
																																							BgL_fz00_1660
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_l1102z00_1653));
																																							{	/* Eval/expddefine.scm 291 */
																																								obj_t
																																									BgL_arg1710z00_1661;
																																								BgL_arg1710z00_1661
																																									=
																																									BGl_parsezd2formalzd2identz00zz__evutilsz00
																																									(BgL_fz00_1660,
																																									BgL_locz00_1609);
																																								BgL_arg1709z00_1659
																																									=
																																									CAR
																																									(
																																									((obj_t) BgL_arg1710z00_1661));
																																							}
																																						}
																																						{	/* Eval/expddefine.scm 291 */
																																							obj_t
																																								BgL_res2425z00_2860;
																																							BgL_res2425z00_2860
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_arg1709z00_1659,
																																								BNIL);
																																							BgL_newtail1106z00_1657
																																								=
																																								BgL_res2425z00_2860;
																																						}
																																					}
																																					SET_CDR
																																						(BgL_tail1105z00_1654,
																																						BgL_newtail1106z00_1657);
																																					{	/* Eval/expddefine.scm 291 */
																																						obj_t
																																							BgL_arg1708z00_1658;
																																						BgL_arg1708z00_1658
																																							=
																																							CDR
																																							(((obj_t) BgL_l1102z00_1653));
																																						{
																																							obj_t
																																								BgL_tail1105z00_4184;
																																							obj_t
																																								BgL_l1102z00_4183;
																																							BgL_l1102z00_4183
																																								=
																																								BgL_arg1708z00_1658;
																																							BgL_tail1105z00_4184
																																								=
																																								BgL_newtail1106z00_1657;
																																							BgL_tail1105z00_1654
																																								=
																																								BgL_tail1105z00_4184;
																																							BgL_l1102z00_1653
																																								=
																																								BgL_l1102z00_4183;
																																							goto
																																								BgL_zc3z04anonymousza31706ze3z87_1655;
																																						}
																																					}
																																				}
																																		}
																																	}
																																{	/* Eval/expddefine.scm 291 */

																																	{	/* Eval/expddefine.scm 292 */
																																		obj_t
																																			BgL_arg1651z00_1613;
																																		{	/* Eval/expddefine.scm 292 */
																																			obj_t
																																				BgL_arg1652z00_1614;
																																			obj_t
																																				BgL_arg1654z00_1615;
																																			BgL_arg1652z00_1614
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_f0z00_1481,
																																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																				(BgL_formalsz00_1482,
																																					BNIL));
																																			{	/* Eval/expddefine.scm 293 */
																																				obj_t
																																					BgL_arg1657z00_1617;
																																				{	/* Eval/expddefine.scm 293 */
																																					obj_t
																																						BgL_arg1658z00_1618;
																																					{	/* Eval/expddefine.scm 293 */
																																						obj_t
																																							BgL_arg1659z00_1619;
																																						obj_t
																																							BgL_arg1660z00_1620;
																																						{	/* Eval/expddefine.scm 293 */
																																							obj_t
																																								BgL_arg1661z00_1621;
																																							{	/* Eval/expddefine.scm 293 */
																																								obj_t
																																									BgL_arg1662z00_1622;
																																								{	/* Eval/expddefine.scm 293 */
																																									obj_t
																																										BgL_arg1663z00_1623;
																																									{	/* Eval/expddefine.scm 293 */
																																										obj_t
																																											BgL_arg1664z00_1624;
																																										{	/* Eval/expddefine.scm 293 */
																																											obj_t
																																												BgL_arg1665z00_1625;
																																											obj_t
																																												BgL_arg1667z00_1626;
																																											{	/* Eval/expddefine.scm 293 */
																																												obj_t
																																													BgL_arg1668z00_1627;
																																												{	/* Eval/expddefine.scm 293 */
																																													obj_t
																																														BgL_arg1669z00_1628;
																																													{	/* Eval/expddefine.scm 293 */
																																														obj_t
																																															BgL_pairz00_2866;
																																														BgL_pairz00_2866
																																															=
																																															CAR
																																															(
																																															((obj_t) BgL_paz00_1501));
																																														BgL_arg1669z00_1628
																																															=
																																															CAR
																																															(BgL_pairz00_2866);
																																													}
																																													BgL_arg1668z00_1627
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BgL_arg1669z00_1628,
																																														BNIL);
																																												}
																																												BgL_arg1665z00_1625
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BGl_symbol2549z00zz__expander_definez00,
																																													BgL_arg1668z00_1627);
																																											}
																																											{	/* Eval/expddefine.scm 294 */
																																												obj_t
																																													BgL_arg1672z00_1629;
																																												{	/* Eval/expddefine.scm 294 */
																																													obj_t
																																														BgL_arg1675z00_1630;
																																													{	/* Eval/expddefine.scm 294 */
																																														obj_t
																																															BgL_arg1683z00_1631;
																																														obj_t
																																															BgL_arg1684z00_1632;
																																														{	/* Eval/expddefine.scm 294 */
																																															obj_t
																																																BgL_pairz00_2870;
																																															BgL_pairz00_2870
																																																=
																																																CAR
																																																(
																																																((obj_t) BgL_paz00_1501));
																																															BgL_arg1683z00_1631
																																																=
																																																CAR
																																																(BgL_pairz00_2870);
																																														}
																																														BgL_arg1684z00_1632
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BgL_idz00_1500,
																																															BNIL);
																																														BgL_arg1675z00_1630
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BgL_arg1683z00_1631,
																																															BgL_arg1684z00_1632);
																																													}
																																													BgL_arg1672z00_1629
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BGl_symbol2551z00zz__expander_definez00,
																																														BgL_arg1675z00_1630);
																																												}
																																												BgL_arg1667z00_1626
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BgL_arg1672z00_1629,
																																													BNIL);
																																											}
																																											BgL_arg1664z00_1624
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_arg1665z00_1625,
																																												BgL_arg1667z00_1626);
																																										}
																																										BgL_arg1663z00_1623
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BGl_symbol2553z00zz__expander_definez00,
																																											BgL_arg1664z00_1624);
																																									}
																																									BgL_arg1662z00_1622
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_arg1663z00_1623,
																																										BNIL);
																																								}
																																								BgL_arg1661z00_1621
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_metz00_1505,
																																									BgL_arg1662z00_1622);
																																							}
																																							BgL_arg1659z00_1619
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_arg1661z00_1621,
																																								BNIL);
																																						}
																																						{	/* Eval/expddefine.scm 295 */
																																							obj_t
																																								BgL_arg1685z00_1633;
																																							{	/* Eval/expddefine.scm 295 */
																																								obj_t
																																									BgL_arg1686z00_1634;
																																								{	/* Eval/expddefine.scm 295 */
																																									obj_t
																																										BgL_arg1687z00_1635;
																																									obj_t
																																										BgL_arg1688z00_1636;
																																									{	/* Eval/expddefine.scm 295 */
																																										obj_t
																																											BgL_arg1691z00_1637;
																																										BgL_arg1691z00_1637
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_metz00_1505,
																																											BNIL);
																																										BgL_arg1687z00_1635
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BGl_symbol2555z00zz__expander_definez00,
																																											BgL_arg1691z00_1637);
																																									}
																																									{	/* Eval/expddefine.scm 296 */
																																										obj_t
																																											BgL_arg1692z00_1638;
																																										obj_t
																																											BgL_arg1693z00_1639;
																																										{	/* Eval/expddefine.scm 296 */
																																											obj_t
																																												BgL_arg1695z00_1640;
																																											{	/* Eval/expddefine.scm 296 */
																																												obj_t
																																													BgL_arg1696z00_1641;
																																												obj_t
																																													BgL_arg1697z00_1642;
																																												{	/* Eval/expddefine.scm 296 */
																																													obj_t
																																														BgL_pairz00_2874;
																																													BgL_pairz00_2874
																																														=
																																														CAR
																																														(
																																														((obj_t) BgL_paz00_1501));
																																													BgL_arg1696z00_1641
																																														=
																																														CAR
																																														(BgL_pairz00_2874);
																																												}
																																												BgL_arg1697z00_1642
																																													=
																																													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																													(BgL_unamesz00_1612,
																																													BNIL);
																																												BgL_arg1695z00_1640
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BgL_arg1696z00_1641,
																																													BgL_arg1697z00_1642);
																																											}
																																											BgL_arg1692z00_1638
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_metz00_1505,
																																												BgL_arg1695z00_1640);
																																										}
																																										{	/* Eval/expddefine.scm 297 */
																																											obj_t
																																												BgL_arg1698z00_1643;
																																											{	/* Eval/expddefine.scm 297 */
																																												obj_t
																																													BgL_arg1699z00_1644;
																																												obj_t
																																													BgL_arg1700z00_1645;
																																												{	/* Eval/expddefine.scm 297 */
																																													obj_t
																																														BgL_arg1701z00_1646;
																																													BgL_arg1701z00_1646
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BgL_idz00_1500,
																																														BNIL);
																																													BgL_arg1699z00_1644
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BGl_symbol2544z00zz__expander_definez00,
																																														BgL_arg1701z00_1646);
																																												}
																																												{	/* Eval/expddefine.scm 297 */
																																													obj_t
																																														BgL_arg1702z00_1647;
																																													obj_t
																																														BgL_arg1704z00_1648;
																																													{	/* Eval/expddefine.scm 297 */
																																														obj_t
																																															BgL_pairz00_2878;
																																														BgL_pairz00_2878
																																															=
																																															CAR
																																															(
																																															((obj_t) BgL_paz00_1501));
																																														BgL_arg1702z00_1647
																																															=
																																															CAR
																																															(BgL_pairz00_2878);
																																													}
																																													BgL_arg1704z00_1648
																																														=
																																														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																														(BgL_unamesz00_1612,
																																														BNIL);
																																													BgL_arg1700z00_1645
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BgL_arg1702z00_1647,
																																														BgL_arg1704z00_1648);
																																												}
																																												BgL_arg1698z00_1643
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BgL_arg1699z00_1644,
																																													BgL_arg1700z00_1645);
																																											}
																																											BgL_arg1693z00_1639
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_arg1698z00_1643,
																																												BNIL);
																																										}
																																										BgL_arg1688z00_1636
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_arg1692z00_1638,
																																											BgL_arg1693z00_1639);
																																									}
																																									BgL_arg1686z00_1634
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_arg1687z00_1635,
																																										BgL_arg1688z00_1636);
																																								}
																																								BgL_arg1685z00_1633
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2557z00zz__expander_definez00,
																																									BgL_arg1686z00_1634);
																																							}
																																							BgL_arg1660z00_1620
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_arg1685z00_1633,
																																								BNIL);
																																						}
																																						BgL_arg1658z00_1618
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1659z00_1619,
																																							BgL_arg1660z00_1620);
																																					}
																																					BgL_arg1657z00_1617
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2539z00zz__expander_definez00,
																																						BgL_arg1658z00_1618);
																																				}
																																				BgL_arg1654z00_1615
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1657z00_1617,
																																					BNIL);
																																			}
																																			BgL_arg1651z00_1613
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1652z00_1614,
																																				BgL_arg1654z00_1615);
																																		}
																																		BgL_procz00_1507
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_symbol2532z00zz__expander_definez00,
																																			BgL_arg1651z00_1613);
																																	}
																																}
																															}
																														}
																													}
																												}
																										}
																									else
																										{	/* Eval/expddefine.scm 298 */
																											bool_t
																												BgL_test2729z00_4230;
																											if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_formalsz00_1482))
																												{
																													obj_t
																														BgL_l1107z00_1738;
																													BgL_l1107z00_1738 =
																														BgL_formalsz00_1482;
																												BgL_zc3z04anonymousza31780ze3z87_1739:
																													if (NULLP
																														(BgL_l1107z00_1738))
																														{	/* Eval/expddefine.scm 298 */
																															BgL_test2729z00_4230
																																= ((bool_t) 0);
																														}
																													else
																														{	/* Eval/expddefine.scm 298 */
																															bool_t
																																BgL__ortest_1109z00_1741;
																															{	/* Eval/expddefine.scm 298 */
																																obj_t
																																	BgL_arg1782z00_1743;
																																BgL_arg1782z00_1743
																																	=
																																	CAR(((obj_t)
																																		BgL_l1107z00_1738));
																																BgL__ortest_1109z00_1741
																																	=
																																	BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00
																																	(BgL_arg1782z00_1743);
																															}
																															if (BgL__ortest_1109z00_1741)
																																{	/* Eval/expddefine.scm 298 */
																																	BgL_test2729z00_4230
																																		=
																																		BgL__ortest_1109z00_1741;
																																}
																															else
																																{	/* Eval/expddefine.scm 298 */
																																	obj_t
																																		BgL_arg1781z00_1742;
																																	BgL_arg1781z00_1742
																																		=
																																		CDR(((obj_t)
																																			BgL_l1107z00_1738));
																																	{
																																		obj_t
																																			BgL_l1107z00_4241;
																																		BgL_l1107z00_4241
																																			=
																																			BgL_arg1781z00_1742;
																																		BgL_l1107z00_1738
																																			=
																																			BgL_l1107z00_4241;
																																		goto
																																			BgL_zc3z04anonymousza31780ze3z87_1739;
																																	}
																																}
																														}
																												}
																											else
																												{	/* Eval/expddefine.scm 298 */
																													BgL_test2729z00_4230 =
																														((bool_t) 0);
																												}
																											if (BgL_test2729z00_4230)
																												{	/* Eval/expddefine.scm 299 */
																													obj_t
																														BgL_argsz00_1688;
																													BgL_argsz00_1688 =
																														BGl_gensymz00zz__r4_symbols_6_4z00
																														(BGl_symbol2560z00zz__expander_definez00);
																													{	/* Eval/expddefine.scm 300 */
																														obj_t
																															BgL_arg1728z00_1689;
																														{	/* Eval/expddefine.scm 300 */
																															obj_t
																																BgL_arg1729z00_1690;
																															obj_t
																																BgL_arg1730z00_1691;
																															BgL_arg1729z00_1690
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_f0z00_1481,
																																BgL_argsz00_1688);
																															{	/* Eval/expddefine.scm 302 */
																																obj_t
																																	BgL_arg1731z00_1692;
																																{	/* Eval/expddefine.scm 302 */
																																	obj_t
																																		BgL_arg1732z00_1693;
																																	{	/* Eval/expddefine.scm 302 */
																																		obj_t
																																			BgL_arg1733z00_1694;
																																		obj_t
																																			BgL_arg1734z00_1695;
																																		{	/* Eval/expddefine.scm 302 */
																																			obj_t
																																				BgL_arg1736z00_1696;
																																			{	/* Eval/expddefine.scm 302 */
																																				obj_t
																																					BgL_arg1737z00_1697;
																																				{	/* Eval/expddefine.scm 302 */
																																					obj_t
																																						BgL_arg1738z00_1698;
																																					{	/* Eval/expddefine.scm 302 */
																																						obj_t
																																							BgL_arg1739z00_1699;
																																						{	/* Eval/expddefine.scm 302 */
																																							obj_t
																																								BgL_arg1740z00_1700;
																																							{	/* Eval/expddefine.scm 302 */
																																								obj_t
																																									BgL_arg1741z00_1701;
																																								{	/* Eval/expddefine.scm 302 */
																																									obj_t
																																										BgL_arg1742z00_1702;
																																									{	/* Eval/expddefine.scm 302 */
																																										obj_t
																																											BgL_arg1743z00_1703;
																																										obj_t
																																											BgL_arg1744z00_1704;
																																										{	/* Eval/expddefine.scm 302 */
																																											obj_t
																																												BgL_arg1745z00_1705;
																																											BgL_arg1745z00_1705
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_idz00_1500,
																																												BNIL);
																																											BgL_arg1743z00_1703
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BGl_symbol2544z00zz__expander_definez00,
																																												BgL_arg1745z00_1705);
																																										}
																																										{	/* Eval/expddefine.scm 302 */
																																											obj_t
																																												BgL_arg1746z00_1706;
																																											obj_t
																																												BgL_arg1747z00_1707;
																																											{	/* Eval/expddefine.scm 302 */
																																												obj_t
																																													BgL_pairz00_2885;
																																												BgL_pairz00_2885
																																													=
																																													CAR
																																													(
																																													((obj_t) BgL_paz00_1501));
																																												BgL_arg1746z00_1706
																																													=
																																													CAR
																																													(BgL_pairz00_2885);
																																											}
																																											BgL_arg1747z00_1707
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_argsz00_1688,
																																												BNIL);
																																											BgL_arg1744z00_1704
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_arg1746z00_1706,
																																												BgL_arg1747z00_1707);
																																										}
																																										BgL_arg1742z00_1702
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_arg1743z00_1703,
																																											BgL_arg1744z00_1704);
																																									}
																																									BgL_arg1741z00_1701
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BGl_symbol2547z00zz__expander_definez00,
																																										BgL_arg1742z00_1702);
																																								}
																																								BgL_arg1740z00_1700
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg1741z00_1701,
																																									BNIL);
																																							}
																																							BgL_arg1739z00_1699
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BNIL,
																																								BgL_arg1740z00_1700);
																																						}
																																						BgL_arg1738z00_1698
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol2532z00zz__expander_definez00,
																																							BgL_arg1739z00_1699);
																																					}
																																					BgL_arg1737z00_1697
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg1738z00_1698,
																																						BNIL);
																																				}
																																				BgL_arg1736z00_1696
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_defz00_1502,
																																					BgL_arg1737z00_1697);
																																			}
																																			BgL_arg1733z00_1694
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1736z00_1696,
																																				BNIL);
																																		}
																																		{	/* Eval/expddefine.scm 303 */
																																			obj_t
																																				BgL_arg1748z00_1708;
																																			{	/* Eval/expddefine.scm 303 */
																																				obj_t
																																					BgL_arg1750z00_1709;
																																				{	/* Eval/expddefine.scm 303 */
																																					obj_t
																																						BgL_arg1751z00_1710;
																																					obj_t
																																						BgL_arg1752z00_1711;
																																					{	/* Eval/expddefine.scm 303 */
																																						obj_t
																																							BgL_arg1754z00_1712;
																																						{	/* Eval/expddefine.scm 303 */
																																							obj_t
																																								BgL_arg1755z00_1713;
																																							{	/* Eval/expddefine.scm 303 */
																																								obj_t
																																									BgL_arg1756z00_1714;
																																								{	/* Eval/expddefine.scm 303 */
																																									obj_t
																																										BgL_arg1757z00_1715;
																																									{	/* Eval/expddefine.scm 303 */
																																										obj_t
																																											BgL_arg1759z00_1716;
																																										obj_t
																																											BgL_arg1760z00_1717;
																																										{	/* Eval/expddefine.scm 303 */
																																											obj_t
																																												BgL_arg1761z00_1718;
																																											{	/* Eval/expddefine.scm 303 */
																																												obj_t
																																													BgL_arg1762z00_1719;
																																												{	/* Eval/expddefine.scm 303 */
																																													obj_t
																																														BgL_pairz00_2889;
																																													BgL_pairz00_2889
																																														=
																																														CAR
																																														(
																																														((obj_t) BgL_paz00_1501));
																																													BgL_arg1762z00_1719
																																														=
																																														CAR
																																														(BgL_pairz00_2889);
																																												}
																																												BgL_arg1761z00_1718
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BgL_arg1762z00_1719,
																																													BNIL);
																																											}
																																											BgL_arg1759z00_1716
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BGl_symbol2549z00zz__expander_definez00,
																																												BgL_arg1761z00_1718);
																																										}
																																										{	/* Eval/expddefine.scm 304 */
																																											obj_t
																																												BgL_arg1763z00_1720;
																																											{	/* Eval/expddefine.scm 304 */
																																												obj_t
																																													BgL_arg1764z00_1721;
																																												{	/* Eval/expddefine.scm 304 */
																																													obj_t
																																														BgL_arg1765z00_1722;
																																													obj_t
																																														BgL_arg1766z00_1723;
																																													{	/* Eval/expddefine.scm 304 */
																																														obj_t
																																															BgL_pairz00_2893;
																																														BgL_pairz00_2893
																																															=
																																															CAR
																																															(
																																															((obj_t) BgL_paz00_1501));
																																														BgL_arg1765z00_1722
																																															=
																																															CAR
																																															(BgL_pairz00_2893);
																																													}
																																													BgL_arg1766z00_1723
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BgL_idz00_1500,
																																														BNIL);
																																													BgL_arg1764z00_1721
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BgL_arg1765z00_1722,
																																														BgL_arg1766z00_1723);
																																												}
																																												BgL_arg1763z00_1720
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BGl_symbol2551z00zz__expander_definez00,
																																													BgL_arg1764z00_1721);
																																											}
																																											BgL_arg1760z00_1717
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_arg1763z00_1720,
																																												BNIL);
																																										}
																																										BgL_arg1757z00_1715
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_arg1759z00_1716,
																																											BgL_arg1760z00_1717);
																																									}
																																									BgL_arg1756z00_1714
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BGl_symbol2553z00zz__expander_definez00,
																																										BgL_arg1757z00_1715);
																																								}
																																								BgL_arg1755z00_1713
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg1756z00_1714,
																																									BNIL);
																																							}
																																							BgL_arg1754z00_1712
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_metz00_1505,
																																								BgL_arg1755z00_1713);
																																						}
																																						BgL_arg1751z00_1710
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1754z00_1712,
																																							BNIL);
																																					}
																																					{	/* Eval/expddefine.scm 305 */
																																						obj_t
																																							BgL_arg1768z00_1724;
																																						{	/* Eval/expddefine.scm 305 */
																																							obj_t
																																								BgL_arg1769z00_1725;
																																							{	/* Eval/expddefine.scm 305 */
																																								obj_t
																																									BgL_arg1770z00_1726;
																																								obj_t
																																									BgL_arg1771z00_1727;
																																								{	/* Eval/expddefine.scm 305 */
																																									obj_t
																																										BgL_arg1772z00_1728;
																																									BgL_arg1772z00_1728
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_metz00_1505,
																																										BNIL);
																																									BgL_arg1770z00_1726
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BGl_symbol2555z00zz__expander_definez00,
																																										BgL_arg1772z00_1728);
																																								}
																																								{	/* Eval/expddefine.scm 306 */
																																									obj_t
																																										BgL_arg1773z00_1729;
																																									obj_t
																																										BgL_arg1774z00_1730;
																																									{	/* Eval/expddefine.scm 306 */
																																										obj_t
																																											BgL_arg1775z00_1731;
																																										{	/* Eval/expddefine.scm 306 */
																																											obj_t
																																												BgL_arg1776z00_1732;
																																											{	/* Eval/expddefine.scm 306 */
																																												obj_t
																																													BgL_arg1777z00_1733;
																																												obj_t
																																													BgL_arg1778z00_1734;
																																												{	/* Eval/expddefine.scm 306 */
																																													obj_t
																																														BgL_pairz00_2897;
																																													BgL_pairz00_2897
																																														=
																																														CAR
																																														(
																																														((obj_t) BgL_paz00_1501));
																																													BgL_arg1777z00_1733
																																														=
																																														CAR
																																														(BgL_pairz00_2897);
																																												}
																																												BgL_arg1778z00_1734
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BgL_argsz00_1688,
																																													BNIL);
																																												BgL_arg1776z00_1732
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BgL_arg1777z00_1733,
																																													BgL_arg1778z00_1734);
																																											}
																																											BgL_arg1775z00_1731
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_metz00_1505,
																																												BgL_arg1776z00_1732);
																																										}
																																										BgL_arg1773z00_1729
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BGl_symbol2547z00zz__expander_definez00,
																																											BgL_arg1775z00_1731);
																																									}
																																									{	/* Eval/expddefine.scm 307 */
																																										obj_t
																																											BgL_arg1779z00_1735;
																																										BgL_arg1779z00_1735
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_defz00_1502,
																																											BNIL);
																																										BgL_arg1774z00_1730
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_arg1779z00_1735,
																																											BNIL);
																																									}
																																									BgL_arg1771z00_1727
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_arg1773z00_1729,
																																										BgL_arg1774z00_1730);
																																								}
																																								BgL_arg1769z00_1725
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg1770z00_1726,
																																									BgL_arg1771z00_1727);
																																							}
																																							BgL_arg1768z00_1724
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2557z00zz__expander_definez00,
																																								BgL_arg1769z00_1725);
																																						}
																																						BgL_arg1752z00_1711
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1768z00_1724,
																																							BNIL);
																																					}
																																					BgL_arg1750z00_1709
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg1751z00_1710,
																																						BgL_arg1752z00_1711);
																																				}
																																				BgL_arg1748z00_1708
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2539z00zz__expander_definez00,
																																					BgL_arg1750z00_1709);
																																			}
																																			BgL_arg1734z00_1695
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1748z00_1708,
																																				BNIL);
																																		}
																																		BgL_arg1732z00_1693
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1733z00_1694,
																																			BgL_arg1734z00_1695);
																																	}
																																	BgL_arg1731z00_1692
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_symbol2539z00zz__expander_definez00,
																																		BgL_arg1732z00_1693);
																																}
																																BgL_arg1730z00_1691
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1731z00_1692,
																																	BNIL);
																															}
																															BgL_arg1728z00_1689
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1729z00_1690,
																																BgL_arg1730z00_1691);
																														}
																														BgL_procz00_1507 =
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2532z00zz__expander_definez00,
																															BgL_arg1728z00_1689);
																													}
																												}
																											else
																												{	/* Eval/expddefine.scm 298 */
																													BgL_procz00_1507 =
																														BGl_expandzd2errorzd2zz__expandz00
																														(BgL_funz00_1480,
																														BGl_string2562z00zz__expander_definez00,
																														BgL_xz00_21);
																												}
																										}
																								}
																						}
																						{	/* Eval/expddefine.scm 267 */

																							{	/* Eval/expddefine.scm 313 */
																								obj_t BgL_arg1531z00_1508;

																								{	/* Eval/expddefine.scm 313 */
																									obj_t BgL_arg1532z00_1509;

																									{	/* Eval/expddefine.scm 313 */
																										obj_t BgL_arg1533z00_1510;
																										obj_t BgL_arg1534z00_1511;

																										{	/* Eval/expddefine.scm 313 */
																											obj_t BgL_arg1535z00_1512;

																											{	/* Eval/expddefine.scm 313 */
																												obj_t
																													BgL_arg1536z00_1513;
																												{	/* Eval/expddefine.scm 313 */
																													obj_t
																														BgL_arg1537z00_1514;
																													{	/* Eval/expddefine.scm 313 */
																														obj_t
																															BgL_arg1540z00_1515;
																														BgL_arg1540z00_1515
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_procz00_1507,
																															BNIL);
																														BgL_arg1537z00_1514
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2563z00zz__expander_definez00,
																															BgL_arg1540z00_1515);
																													}
																													BgL_arg1536z00_1513 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1537z00_1514,
																														BNIL);
																												}
																												BgL_arg1535z00_1512 =
																													MAKE_YOUNG_PAIR
																													(BgL_funz00_1480,
																													BgL_arg1536z00_1513);
																											}
																											BgL_arg1533z00_1510 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2535z00zz__expander_definez00,
																												BgL_arg1535z00_1512);
																										}
																										{	/* Eval/expddefine.scm 316 */
																											obj_t BgL_arg1541z00_1516;

																											{	/* Eval/expddefine.scm 316 */
																												obj_t
																													BgL_arg1542z00_1517;
																												{	/* Eval/expddefine.scm 316 */
																													obj_t
																														BgL_arg1544z00_1518;
																													{	/* Eval/expddefine.scm 316 */
																														obj_t
																															BgL_arg1545z00_1519;
																														obj_t
																															BgL_arg1546z00_1520;
																														{	/* Eval/expddefine.scm 316 */
																															obj_t
																																BgL_arg1547z00_1521;
																															{	/* Eval/expddefine.scm 316 */
																																obj_t
																																	BgL_arg1551z00_1522;
																																obj_t
																																	BgL_arg1552z00_1523;
																																{	/* Eval/expddefine.scm 316 */
																																	obj_t
																																		BgL_arg1553z00_1524;
																																	if (CBOOL
																																		(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																																			((BOPTIONAL), BgL_formalsz00_1482)))
																																		{	/* Eval/expddefine.scm 316 */
																																			BgL_arg1553z00_1524
																																				=
																																				BGl_dssslzd2formalszd2ze3namesze3zz__expander_definez00
																																				(BgL_formalsz00_1482);
																																		}
																																	else
																																		{	/* Eval/expddefine.scm 316 */
																																			BgL_arg1553z00_1524
																																				=
																																				BgL_formalsz00_1482;
																																		}
																																	BgL_arg1551z00_1522
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_f0z00_1481,
																																		BgL_arg1553z00_1524);
																																}
																																{	/* Eval/expddefine.scm 319 */
																																	obj_t
																																		BgL_arg1556z00_1526;
																																	if (PAIRP
																																		(BgL_bodyz00_1483))
																																		{	/* Eval/expddefine.scm 320 */
																																			obj_t
																																				BgL_arg1558z00_1528;
																																			BgL_arg1558z00_1528
																																				=
																																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																				(BgL_bodyz00_1483,
																																				BNIL);
																																			BgL_arg1556z00_1526
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol2527z00zz__expander_definez00,
																																				BgL_arg1558z00_1528);
																																		}
																																	else
																																		{	/* Eval/expddefine.scm 321 */
																																			obj_t
																																				BgL_arg1560z00_1529;
																																			{	/* Eval/expddefine.scm 321 */
																																				obj_t
																																					BgL_arg1561z00_1530;
																																				obj_t
																																					BgL_arg1562z00_1531;
																																				{	/* Eval/expddefine.scm 321 */
																																					obj_t
																																						BgL_arg1563z00_1532;
																																					BgL_arg1563z00_1532
																																						=
																																						CAR(
																																						((obj_t) BgL_pfz00_1499));
																																					{	/* Eval/expddefine.scm 321 */
																																						obj_t
																																							BgL_res2428z00_2902;
																																						{	/* Eval/expddefine.scm 321 */
																																							obj_t
																																								BgL_arg2181z00_2901;
																																							BgL_arg2181z00_2901
																																								=
																																								SYMBOL_TO_STRING
																																								(
																																								((obj_t) BgL_arg1563z00_1532));
																																							BgL_res2428z00_2902
																																								=
																																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																								(BgL_arg2181z00_2901);
																																						}
																																						BgL_arg1561z00_1530
																																							=
																																							BgL_res2428z00_2902;
																																					}
																																				}
																																				{	/* Eval/expddefine.scm 323 */
																																					obj_t
																																						BgL_arg1564z00_1533;
																																					{	/* Eval/expddefine.scm 323 */
																																						obj_t
																																							BgL_arg1565z00_1534;
																																						{	/* Eval/expddefine.scm 323 */
																																							obj_t
																																								BgL_arg1566z00_1535;
																																							{	/* Eval/expddefine.scm 323 */
																																								obj_t
																																									BgL_arg1567z00_1536;
																																								{	/* Eval/expddefine.scm 323 */
																																									obj_t
																																										BgL_pairz00_2904;
																																									BgL_pairz00_2904
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_paz00_1501));
																																									BgL_arg1567z00_1536
																																										=
																																										CAR
																																										(BgL_pairz00_2904);
																																								}
																																								BgL_arg1566z00_1535
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg1567z00_1536,
																																									BNIL);
																																							}
																																							BgL_arg1565z00_1534
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2565z00zz__expander_definez00,
																																								BgL_arg1566z00_1535);
																																						}
																																						BgL_arg1564z00_1533
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1565z00_1534,
																																							BNIL);
																																					}
																																					BgL_arg1562z00_1531
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_string2567z00zz__expander_definez00,
																																						BgL_arg1564z00_1533);
																																				}
																																				BgL_arg1560z00_1529
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1561z00_1530,
																																					BgL_arg1562z00_1531);
																																			}
																																			BgL_arg1556z00_1526
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol2568z00zz__expander_definez00,
																																				BgL_arg1560z00_1529);
																																		}
																																	BgL_arg1552z00_1523
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1556z00_1526,
																																		BNIL);
																																}
																																BgL_arg1547z00_1521
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1551z00_1522,
																																	BgL_arg1552z00_1523);
																															}
																															BgL_arg1545z00_1519
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2532z00zz__expander_definez00,
																																BgL_arg1547z00_1521);
																														}
																														{	/* Eval/expddefine.scm 325 */
																															obj_t
																																BgL_arg1569z00_1538;
																															{	/* Eval/expddefine.scm 325 */
																																obj_t
																																	BgL_arg1570z00_1539;
																																{	/* Eval/expddefine.scm 325 */
																																	obj_t
																																		BgL_res2429z00_2907;
																																	{	/* Eval/expddefine.scm 325 */
																																		obj_t
																																			BgL_arg2181z00_2906;
																																		BgL_arg2181z00_2906
																																			=
																																			SYMBOL_TO_STRING
																																			(((obj_t)
																																				BgL_idz00_1500));
																																		BgL_res2429z00_2907
																																			=
																																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																			(BgL_arg2181z00_2906);
																																	}
																																	BgL_arg1570z00_1539
																																		=
																																		BgL_res2429z00_2907;
																																}
																																BgL_arg1569z00_1538
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1570z00_1539,
																																	BNIL);
																															}
																															BgL_arg1546z00_1520
																																=
																																MAKE_YOUNG_PAIR
																																(BFALSE,
																																BgL_arg1569z00_1538);
																														}
																														BgL_arg1544z00_1518
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1545z00_1519,
																															BgL_arg1546z00_1520);
																													}
																													BgL_arg1542z00_1517 =
																														MAKE_YOUNG_PAIR
																														(BgL_idz00_1500,
																														BgL_arg1544z00_1518);
																												}
																												BgL_arg1541z00_1516 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2570z00zz__expander_definez00,
																													BgL_arg1542z00_1517);
																											}
																											BgL_arg1534z00_1511 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1541z00_1516,
																												BNIL);
																										}
																										BgL_arg1532z00_1509 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1533z00_1510,
																											BgL_arg1534z00_1511);
																									}
																									BgL_arg1531z00_1508 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2527z00zz__expander_definez00,
																										BgL_arg1532z00_1509);
																								}
																								return
																									PROCEDURE_ENTRY(BgL_ez00_22)
																									(BgL_ez00_22,
																									BgL_arg1531z00_1508,
																									BgL_ez00_22, BEOA);
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
											{	/* Eval/expddefine.scm 251 */
												return
													BGl_expandzd2errorzd2zz__expandz00
													(BGl_string2572z00zz__expander_definez00,
													BGl_string2531z00zz__expander_definez00, BgL_xz00_21);
											}
									}
								else
									{	/* Eval/expddefine.scm 251 */
										return
											BGl_expandzd2errorzd2zz__expandz00
											(BGl_string2572z00zz__expander_definez00,
											BGl_string2531z00zz__expander_definez00, BgL_xz00_21);
									}
							}
						else
							{	/* Eval/expddefine.scm 251 */
								return
									BGl_expandzd2errorzd2zz__expandz00
									(BGl_string2572z00zz__expander_definez00,
									BGl_string2531z00zz__expander_definez00, BgL_xz00_21);
							}
					}
				else
					{	/* Eval/expddefine.scm 251 */
						return
							BGl_expandzd2errorzd2zz__expandz00
							(BGl_string2572z00zz__expander_definez00,
							BGl_string2531z00zz__expander_definez00, BgL_xz00_21);
					}
			}
		}

	}



/* &expand-eval-define-generic */
	obj_t BGl_z62expandzd2evalzd2definezd2genericzb0zz__expander_definez00(obj_t
		BgL_envz00_3272, obj_t BgL_xz00_3273, obj_t BgL_ez00_3274)
	{
		{	/* Eval/expddefine.scm 250 */
			{	/* Eval/expddefine.scm 251 */
				obj_t BgL_auxz00_4355;

				if (PROCEDUREP(BgL_ez00_3274))
					{	/* Eval/expddefine.scm 251 */
						BgL_auxz00_4355 = BgL_ez00_3274;
					}
				else
					{
						obj_t BgL_auxz00_4358;

						BgL_auxz00_4358 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2524z00zz__expander_definez00, BINT(((long) 9224)),
							BGl_string2573z00zz__expander_definez00,
							BGl_string2526z00zz__expander_definez00, BgL_ez00_3274);
						FAILURE(BgL_auxz00_4358, BFALSE, BFALSE);
					}
				return
					BGl_expandzd2evalzd2definezd2genericzd2zz__expander_definez00
					(BgL_xz00_3273, BgL_auxz00_4355);
			}
		}

	}



/* &<@anonymous:1632> */
	obj_t BGl_z62zc3z04anonymousza31632ze3ze5zz__expander_definez00(obj_t
		BgL_envz00_3275, obj_t BgL_az00_3276)
	{
		{	/* Eval/expddefine.scm 270 */
			if (PAIRP(BgL_az00_3276))
				{	/* Eval/expddefine.scm 271 */
					return CAR(BgL_az00_3276);
				}
			else
				{	/* Eval/expddefine.scm 271 */
					return BgL_az00_3276;
				}
		}

	}



/* &<@anonymous:1789> */
	obj_t BGl_z62zc3z04anonymousza31789ze3ze5zz__expander_definez00(obj_t
		BgL_envz00_3277, obj_t BgL_az00_3278)
	{
		{	/* Eval/expddefine.scm 264 */
			if (PAIRP(BgL_az00_3278))
				{	/* Eval/expddefine.scm 265 */
					return CAR(BgL_az00_3278);
				}
			else
				{	/* Eval/expddefine.scm 265 */
					return BgL_az00_3278;
				}
		}

	}



/* &<@anonymous:1799> */
	obj_t BGl_z62zc3z04anonymousza31799ze3ze5zz__expander_definez00(obj_t
		BgL_envz00_3279, obj_t BgL_iz00_3281)
	{
		{	/* Eval/expddefine.scm 256 */
			return
				BGl_parsezd2formalzd2identz00zz__evutilsz00(BgL_iz00_3281,
				PROCEDURE_L_REF(BgL_envz00_3279, (int) (((long) 0))));
		}

	}



/* expand-eval-define-method */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2evalzd2definezd2methodzd2zz__expander_definez00(obj_t
		BgL_xz00_23, obj_t BgL_ez00_24)
	{
		{	/* Eval/expddefine.scm 333 */
			{
				obj_t BgL_funz00_1771;
				obj_t BgL_f0z00_1772;
				obj_t BgL_formalsz00_1773;
				obj_t BgL_bodyz00_1774;

				if (PAIRP(BgL_xz00_23))
					{	/* Eval/expddefine.scm 357 */
						obj_t BgL_cdrzd2479zd2_1779;

						BgL_cdrzd2479zd2_1779 = CDR(BgL_xz00_23);
						if (PAIRP(BgL_cdrzd2479zd2_1779))
							{	/* Eval/expddefine.scm 357 */
								obj_t BgL_carzd2484zd2_1781;
								obj_t BgL_cdrzd2485zd2_1782;

								BgL_carzd2484zd2_1781 = CAR(BgL_cdrzd2479zd2_1779);
								BgL_cdrzd2485zd2_1782 = CDR(BgL_cdrzd2479zd2_1779);
								if (PAIRP(BgL_carzd2484zd2_1781))
									{	/* Eval/expddefine.scm 357 */
										obj_t BgL_cdrzd2490zd2_1784;

										BgL_cdrzd2490zd2_1784 = CDR(BgL_carzd2484zd2_1781);
										if (PAIRP(BgL_cdrzd2490zd2_1784))
											{	/* Eval/expddefine.scm 357 */
												if (NULLP(BgL_cdrzd2485zd2_1782))
													{	/* Eval/expddefine.scm 357 */
														return
															BGl_expandzd2errorzd2zz__expandz00
															(BGl_string2582z00zz__expander_definez00,
															BGl_string2531z00zz__expander_definez00,
															BgL_xz00_23);
													}
												else
													{	/* Eval/expddefine.scm 357 */
														BgL_funz00_1771 = CAR(BgL_carzd2484zd2_1781);
														BgL_f0z00_1772 = CAR(BgL_cdrzd2490zd2_1784);
														BgL_formalsz00_1773 = CDR(BgL_cdrzd2490zd2_1784);
														BgL_bodyz00_1774 = BgL_cdrzd2485zd2_1782;
														{	/* Eval/expddefine.scm 359 */
															obj_t BgL_locz00_1790;

															BgL_locz00_1790 =
																BGl_getzd2sourcezd2locationz00zz__readerz00
																(BgL_xz00_23);
															{	/* Eval/expddefine.scm 359 */
																obj_t BgL_pfz00_1791;

																BgL_pfz00_1791 =
																	BGl_parsezd2formalzd2identz00zz__evutilsz00
																	(BgL_funz00_1771, BgL_locz00_1790);
																{	/* Eval/expddefine.scm 360 */
																	obj_t BgL_p0z00_1792;

																	BgL_p0z00_1792 =
																		BGl_parsezd2formalzd2identz00zz__evutilsz00
																		(BgL_f0z00_1772, BgL_locz00_1790);
																	{	/* Eval/expddefine.scm 361 */
																		obj_t BgL_restz00_1793;

																		BgL_restz00_1793 =
																			BGl_getzd2argsze70z35zz__expander_definez00
																			(BgL_formalsz00_1773, BgL_locz00_1790);
																		{	/* Eval/expddefine.scm 362 */
																			bool_t BgL_vaz00_1794;

																			if (NULLP(BgL_formalsz00_1773))
																				{	/* Eval/expddefine.scm 363 */
																					BgL_vaz00_1794 = ((bool_t) 0);
																				}
																			else
																				{	/* Eval/expddefine.scm 364 */
																					bool_t BgL__ortest_1047z00_1997;

																					if (PAIRP(BgL_formalsz00_1773))
																						{	/* Eval/expddefine.scm 364 */
																							BgL__ortest_1047z00_1997 =
																								((bool_t) 0);
																						}
																					else
																						{	/* Eval/expddefine.scm 364 */
																							BgL__ortest_1047z00_1997 =
																								((bool_t) 1);
																						}
																					if (BgL__ortest_1047z00_1997)
																						{	/* Eval/expddefine.scm 364 */
																							BgL_vaz00_1794 =
																								BgL__ortest_1047z00_1997;
																						}
																					else
																						{	/* Eval/expddefine.scm 364 */
																							if (NULLP(CDR
																									(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
																										(BgL_formalsz00_1773))))
																								{	/* Eval/expddefine.scm 365 */
																									BgL_vaz00_1794 = ((bool_t) 0);
																								}
																							else
																								{	/* Eval/expddefine.scm 365 */
																									BgL_vaz00_1794 = ((bool_t) 1);
																								}
																						}
																				}
																			{	/* Eval/expddefine.scm 363 */

																				{	/* Eval/expddefine.scm 366 */
																					bool_t BgL_test2747z00_4400;

																					if (PAIRP(BgL_p0z00_1792))
																						{	/* Eval/expddefine.scm 366 */
																							obj_t BgL_tmpz00_4403;

																							BgL_tmpz00_4403 =
																								CDR(BgL_p0z00_1792);
																							BgL_test2747z00_4400 =
																								SYMBOLP(BgL_tmpz00_4403);
																						}
																					else
																						{	/* Eval/expddefine.scm 366 */
																							BgL_test2747z00_4400 =
																								((bool_t) 0);
																						}
																					if (BgL_test2747z00_4400)
																						{	/* Eval/expddefine.scm 368 */
																							bool_t BgL_test2749z00_4406;

																							if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_formalsz00_1773))
																								{	/* Eval/expddefine.scm 368 */
																									bool_t BgL_test2751z00_4409;

																									{
																										obj_t BgL_l1110z00_1987;

																										BgL_l1110z00_1987 =
																											BgL_formalsz00_1773;
																									BgL_zc3z04anonymousza32000ze3z87_1988:
																										if (NULLP
																											(BgL_l1110z00_1987))
																											{	/* Eval/expddefine.scm 368 */
																												BgL_test2751z00_4409 =
																													((bool_t) 0);
																											}
																										else
																											{	/* Eval/expddefine.scm 368 */
																												bool_t
																													BgL__ortest_1112z00_1990;
																												{	/* Eval/expddefine.scm 368 */
																													obj_t
																														BgL_arg2002z00_1992;
																													BgL_arg2002z00_1992 =
																														CAR(((obj_t)
																															BgL_l1110z00_1987));
																													BgL__ortest_1112z00_1990
																														=
																														BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00
																														(BgL_arg2002z00_1992);
																												}
																												if (BgL__ortest_1112z00_1990)
																													{	/* Eval/expddefine.scm 368 */
																														BgL_test2751z00_4409
																															=
																															BgL__ortest_1112z00_1990;
																													}
																												else
																													{	/* Eval/expddefine.scm 368 */
																														obj_t
																															BgL_arg2001z00_1991;
																														BgL_arg2001z00_1991
																															=
																															CDR(((obj_t)
																																BgL_l1110z00_1987));
																														{
																															obj_t
																																BgL_l1110z00_4418;
																															BgL_l1110z00_4418
																																=
																																BgL_arg2001z00_1991;
																															BgL_l1110z00_1987
																																=
																																BgL_l1110z00_4418;
																															goto
																																BgL_zc3z04anonymousza32000ze3z87_1988;
																														}
																													}
																											}
																									}
																									if (BgL_test2751z00_4409)
																										{	/* Eval/expddefine.scm 368 */
																											BgL_test2749z00_4406 =
																												((bool_t) 0);
																										}
																									else
																										{	/* Eval/expddefine.scm 368 */
																											BgL_test2749z00_4406 =
																												((bool_t) 1);
																										}
																								}
																							else
																								{	/* Eval/expddefine.scm 368 */
																									BgL_test2749z00_4406 =
																										((bool_t) 1);
																								}
																							if (BgL_test2749z00_4406)
																								{	/* Eval/expddefine.scm 369 */
																									obj_t BgL_resz00_1817;

																									{	/* Eval/expddefine.scm 370 */
																										obj_t BgL_arg1821z00_1818;

																										{	/* Eval/expddefine.scm 370 */
																											obj_t BgL_arg1822z00_1819;
																											obj_t BgL_arg1823z00_1820;

																											BgL_arg1822z00_1819 =
																												CAR(
																												((obj_t)
																													BgL_pfz00_1791));
																											{	/* Eval/expddefine.scm 371 */
																												obj_t
																													BgL_arg1824z00_1821;
																												obj_t
																													BgL_arg1825z00_1822;
																												BgL_arg1824z00_1821 =
																													CDR(BgL_p0z00_1792);
																												{	/* Eval/expddefine.scm 372 */
																													obj_t
																														BgL_arg1826z00_1823;
																													obj_t
																														BgL_arg1827z00_1824;
																													{	/* Eval/expddefine.scm 372 */
																														obj_t
																															BgL_arg1828z00_1825;
																														{	/* Eval/expddefine.scm 372 */
																															obj_t
																																BgL_arg1829z00_1826;
																															{	/* Eval/expddefine.scm 372 */
																																obj_t
																																	BgL_arg1830z00_1827;
																																obj_t
																																	BgL_arg1831z00_1828;
																																{	/* Eval/expddefine.scm 372 */
																																	obj_t
																																		BgL_arg1832z00_1829;
																																	BgL_arg1832z00_1829
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_f0z00_1772,
																																		BgL_formalsz00_1773);
																																	BgL_arg1830z00_1827
																																		=
																																		BGl_loopze70ze7zz__expander_definez00
																																		(BgL_ez00_24,
																																		BgL_arg1832z00_1829);
																																}
																																{	/* Eval/expddefine.scm 373 */
																																	obj_t
																																		BgL_arg1833z00_1830;
																																	obj_t
																																		BgL_arg1835z00_1831;
																																	{	/* Eval/expddefine.scm 373 */
																																		obj_t
																																			BgL_arg1836z00_1832;
																																		{	/* Eval/expddefine.scm 373 */
																																			obj_t
																																				BgL_arg1838z00_1833;
																																			obj_t
																																				BgL_arg1840z00_1834;
																																			BgL_arg1838z00_1833
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol2574z00zz__expander_definez00,
																																				BNIL);
																																			{	/* Eval/expddefine.scm 375 */
																																				obj_t
																																					BgL_arg1841z00_1835;
																																				{	/* Eval/expddefine.scm 375 */
																																					obj_t
																																						BgL_arg1842z00_1836;
																																					{	/* Eval/expddefine.scm 375 */
																																						obj_t
																																							BgL_arg1845z00_1837;
																																						obj_t
																																							BgL_arg1846z00_1838;
																																						{	/* Eval/expddefine.scm 375 */
																																							obj_t
																																								BgL_arg1847z00_1839;
																																							{	/* Eval/expddefine.scm 375 */
																																								obj_t
																																									BgL_arg1848z00_1840;
																																								{	/* Eval/expddefine.scm 375 */
																																									obj_t
																																										BgL_arg1850z00_1841;
																																									{	/* Eval/expddefine.scm 375 */
																																										obj_t
																																											BgL_arg1851z00_1842;
																																										{	/* Eval/expddefine.scm 375 */
																																											obj_t
																																												BgL_arg1852z00_1843;
																																											obj_t
																																												BgL_arg1853z00_1844;
																																											BgL_arg1852z00_1843
																																												=
																																												CAR
																																												(BgL_p0z00_1792);
																																											{	/* Eval/expddefine.scm 376 */
																																												obj_t
																																													BgL_arg1855z00_1845;
																																												obj_t
																																													BgL_arg1856z00_1846;
																																												BgL_arg1855z00_1845
																																													=
																																													CAR
																																													(
																																													((obj_t) BgL_pfz00_1791));
																																												BgL_arg1856z00_1846
																																													=
																																													MAKE_YOUNG_PAIR
																																													(CDR
																																													(BgL_p0z00_1792),
																																													BNIL);
																																												BgL_arg1853z00_1844
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BgL_arg1855z00_1845,
																																													BgL_arg1856z00_1846);
																																											}
																																											BgL_arg1851z00_1842
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_arg1852z00_1843,
																																												BgL_arg1853z00_1844);
																																										}
																																										BgL_arg1850z00_1841
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BGl_symbol2576z00zz__expander_definez00,
																																											BgL_arg1851z00_1842);
																																									}
																																									BgL_arg1848z00_1840
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_arg1850z00_1841,
																																										BNIL);
																																								}
																																								BgL_arg1847z00_1839
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2578z00zz__expander_definez00,
																																									BgL_arg1848z00_1840);
																																							}
																																							BgL_arg1845z00_1837
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_arg1847z00_1839,
																																								BNIL);
																																						}
																																						{	/* Eval/expddefine.scm 378 */
																																							obj_t
																																								BgL_arg1858z00_1848;
																																							{	/* Eval/expddefine.scm 378 */
																																								obj_t
																																									BgL_arg1859z00_1849;
																																								{	/* Eval/expddefine.scm 378 */
																																									obj_t
																																										BgL_arg1861z00_1850;
																																									obj_t
																																										BgL_arg1862z00_1851;
																																									{	/* Eval/expddefine.scm 378 */
																																										obj_t
																																											BgL_arg1863z00_1852;
																																										BgL_arg1863z00_1852
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BGl_symbol2578z00zz__expander_definez00,
																																											BNIL);
																																										BgL_arg1861z00_1850
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BGl_symbol2555z00zz__expander_definez00,
																																											BgL_arg1863z00_1852);
																																									}
																																									{	/* Eval/expddefine.scm 379 */
																																										obj_t
																																											BgL_arg1865z00_1853;
																																										obj_t
																																											BgL_arg1866z00_1854;
																																										if (BgL_vaz00_1794)
																																											{	/* Eval/expddefine.scm 380 */
																																												obj_t
																																													BgL_arg1868z00_1855;
																																												{	/* Eval/expddefine.scm 380 */
																																													obj_t
																																														BgL_arg1870z00_1856;
																																													BgL_arg1870z00_1856
																																														=
																																														MAKE_YOUNG_PAIR
																																														(CAR
																																														(BgL_p0z00_1792),
																																														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																														(BgL_restz00_1793,
																																															BNIL));
																																													BgL_arg1868z00_1855
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BGl_symbol2578z00zz__expander_definez00,
																																														BgL_arg1870z00_1856);
																																												}
																																												BgL_arg1865z00_1853
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BGl_symbol2547z00zz__expander_definez00,
																																													BgL_arg1868z00_1855);
																																											}
																																										else
																																											{	/* Eval/expddefine.scm 381 */
																																												obj_t
																																													BgL_arg1873z00_1859;
																																												BgL_arg1873z00_1859
																																													=
																																													MAKE_YOUNG_PAIR
																																													(CAR
																																													(BgL_p0z00_1792),
																																													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																													(BgL_restz00_1793,
																																														BNIL));
																																												BgL_arg1865z00_1853
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BGl_symbol2578z00zz__expander_definez00,
																																													BgL_arg1873z00_1859);
																																											}
																																										{	/* Eval/expddefine.scm 382 */
																																											obj_t
																																												BgL_arg1877z00_1862;
																																											if (BgL_vaz00_1794)
																																												{	/* Eval/expddefine.scm 383 */
																																													obj_t
																																														BgL_arg1878z00_1863;
																																													{	/* Eval/expddefine.scm 383 */
																																														obj_t
																																															BgL_arg1879z00_1864;
																																														obj_t
																																															BgL_arg1881z00_1865;
																																														BgL_arg1879z00_1864
																																															=
																																															CAR
																																															(
																																															((obj_t) BgL_pfz00_1791));
																																														BgL_arg1881z00_1865
																																															=
																																															MAKE_YOUNG_PAIR
																																															(CAR
																																															(BgL_p0z00_1792),
																																															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																															(BgL_restz00_1793,
																																																BNIL));
																																														BgL_arg1878z00_1863
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BgL_arg1879z00_1864,
																																															BgL_arg1881z00_1865);
																																													}
																																													BgL_arg1877z00_1862
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BGl_symbol2547z00zz__expander_definez00,
																																														BgL_arg1878z00_1863);
																																												}
																																											else
																																												{	/* Eval/expddefine.scm 384 */
																																													obj_t
																																														BgL_arg1884z00_1868;
																																													obj_t
																																														BgL_arg1885z00_1869;
																																													BgL_arg1884z00_1868
																																														=
																																														CAR
																																														(
																																														((obj_t) BgL_pfz00_1791));
																																													BgL_arg1885z00_1869
																																														=
																																														MAKE_YOUNG_PAIR
																																														(CAR
																																														(BgL_p0z00_1792),
																																														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																														(BgL_restz00_1793,
																																															BNIL));
																																													BgL_arg1877z00_1862
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BgL_arg1884z00_1868,
																																														BgL_arg1885z00_1869);
																																												}
																																											BgL_arg1866z00_1854
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_arg1877z00_1862,
																																												BNIL);
																																										}
																																										BgL_arg1862z00_1851
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_arg1865z00_1853,
																																											BgL_arg1866z00_1854);
																																									}
																																									BgL_arg1859z00_1849
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_arg1861z00_1850,
																																										BgL_arg1862z00_1851);
																																								}
																																								BgL_arg1858z00_1848
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2557z00zz__expander_definez00,
																																									BgL_arg1859z00_1849);
																																							}
																																							BgL_arg1846z00_1838
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_arg1858z00_1848,
																																								BNIL);
																																						}
																																						BgL_arg1842z00_1836
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1845z00_1837,
																																							BgL_arg1846z00_1838);
																																					}
																																					BgL_arg1841z00_1835
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2539z00zz__expander_definez00,
																																						BgL_arg1842z00_1836);
																																				}
																																				BgL_arg1840z00_1834
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1841z00_1835,
																																					BNIL);
																																			}
																																			BgL_arg1836z00_1832
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1838z00_1833,
																																				BgL_arg1840z00_1834);
																																		}
																																		BgL_arg1833z00_1830
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_symbol2535z00zz__expander_definez00,
																																			BgL_arg1836z00_1832);
																																	}
																																	BgL_arg1835z00_1831
																																		=
																																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_bodyz00_1774,
																																		BNIL);
																																	BgL_arg1831z00_1828
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1833z00_1830,
																																		BgL_arg1835z00_1831);
																																}
																																BgL_arg1829z00_1826
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1830z00_1827,
																																	BgL_arg1831z00_1828);
																															}
																															BgL_arg1828z00_1825
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2532z00zz__expander_definez00,
																																BgL_arg1829z00_1826);
																														}
																														BgL_arg1826z00_1823
																															=
																															PROCEDURE_ENTRY
																															(BgL_ez00_24)
																															(BgL_ez00_24,
																															BgL_arg1828z00_1825,
																															BgL_ez00_24,
																															BEOA);
																													}
																													{	/* Eval/expddefine.scm 386 */
																														obj_t
																															BgL_arg1888z00_1872;
																														{	/* Eval/expddefine.scm 386 */
																															obj_t
																																BgL_arg1889z00_1873;
																															BgL_arg1889z00_1873
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_f0z00_1772,
																																BNIL);
																															BgL_arg1888z00_1872
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2565z00zz__expander_definez00,
																																BgL_arg1889z00_1873);
																														}
																														BgL_arg1827z00_1824
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1888z00_1872,
																															BNIL);
																													}
																													BgL_arg1825z00_1822 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1826z00_1823,
																														BgL_arg1827z00_1824);
																												}
																												BgL_arg1823z00_1820 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1824z00_1821,
																													BgL_arg1825z00_1822);
																											}
																											BgL_arg1821z00_1818 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1822z00_1819,
																												BgL_arg1823z00_1820);
																										}
																										BgL_resz00_1817 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2580z00zz__expander_definez00,
																											BgL_arg1821z00_1818);
																									}
																									{	/* Eval/expddefine.scm 369 */

																										return
																											BGl_evepairifyz00zz__prognz00
																											(BgL_resz00_1817,
																											BgL_xz00_23);
																									}
																								}
																							else
																								{	/* Eval/expddefine.scm 368 */
																									if (CBOOL
																										(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																											((BOPTIONAL),
																												BgL_formalsz00_1773)))
																										{	/* Eval/expddefine.scm 389 */
																											obj_t
																												BgL_tformalsz00_1875;
																											BgL_tformalsz00_1875 =
																												BGl_dssslzd2formalszd2ze3schemezd2typedzd2formalsze3zz__dssslz00
																												(BgL_formalsz00_1773,
																												BGl_errorzd2envzd2zz__errorz00,
																												((bool_t) 1));
																											{	/* Eval/expddefine.scm 389 */
																												obj_t
																													BgL_uformalsz00_1876;
																												BgL_uformalsz00_1876 =
																													BGl_dssslzd2formalszd2ze3schemezd2typedzd2formalsze3zz__dssslz00
																													(BgL_formalsz00_1773,
																													BGl_errorzd2envzd2zz__errorz00,
																													((bool_t) 0));
																												{	/* Eval/expddefine.scm 390 */
																													obj_t
																														BgL_namesz00_1877;
																													BgL_namesz00_1877 =
																														BGl_dssslzd2formalszd2ze3namesze3zz__expander_definez00
																														(BgL_formalsz00_1773);
																													{	/* Eval/expddefine.scm 391 */
																														obj_t
																															BgL_resz00_1878;
																														{	/* Eval/expddefine.scm 393 */
																															obj_t
																																BgL_arg1891z00_1879;
																															{	/* Eval/expddefine.scm 393 */
																																obj_t
																																	BgL_arg1892z00_1880;
																																obj_t
																																	BgL_arg1893z00_1881;
																																BgL_arg1892z00_1880
																																	=
																																	CAR(((obj_t)
																																		BgL_pfz00_1791));
																																{	/* Eval/expddefine.scm 394 */
																																	obj_t
																																		BgL_arg1895z00_1882;
																																	obj_t
																																		BgL_arg1896z00_1883;
																																	BgL_arg1895z00_1882
																																		=
																																		CDR
																																		(BgL_p0z00_1792);
																																	{	/* Eval/expddefine.scm 395 */
																																		obj_t
																																			BgL_arg1897z00_1884;
																																		obj_t
																																			BgL_arg1898z00_1885;
																																		{	/* Eval/expddefine.scm 395 */
																																			obj_t
																																				BgL_arg1901z00_1886;
																																			{	/* Eval/expddefine.scm 395 */
																																				obj_t
																																					BgL_arg1902z00_1887;
																																				{	/* Eval/expddefine.scm 395 */
																																					obj_t
																																						BgL_arg1903z00_1888;
																																					obj_t
																																						BgL_arg1904z00_1889;
																																					{	/* Eval/expddefine.scm 395 */
																																						obj_t
																																							BgL_arg1905z00_1890;
																																						BgL_arg1905z00_1890
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_f0z00_1772,
																																							BgL_namesz00_1877);
																																						BgL_arg1903z00_1888
																																							=
																																							BGl_loopze70ze7zz__expander_definez00
																																							(BgL_ez00_24,
																																							BgL_arg1905z00_1890);
																																					}
																																					{	/* Eval/expddefine.scm 396 */
																																						obj_t
																																							BgL_arg1906z00_1891;
																																						obj_t
																																							BgL_arg1907z00_1892;
																																						{	/* Eval/expddefine.scm 396 */
																																							obj_t
																																								BgL_arg1908z00_1893;
																																							{	/* Eval/expddefine.scm 396 */
																																								obj_t
																																									BgL_arg1909z00_1894;
																																								obj_t
																																									BgL_arg1910z00_1895;
																																								BgL_arg1909z00_1894
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2574z00zz__expander_definez00,
																																									BNIL);
																																								{	/* Eval/expddefine.scm 397 */
																																									obj_t
																																										BgL_arg1911z00_1896;
																																									{	/* Eval/expddefine.scm 397 */
																																										obj_t
																																											BgL_arg1912z00_1897;
																																										{	/* Eval/expddefine.scm 397 */
																																											obj_t
																																												BgL_arg1913z00_1898;
																																											obj_t
																																												BgL_arg1914z00_1899;
																																											{	/* Eval/expddefine.scm 397 */
																																												obj_t
																																													BgL_arg1915z00_1900;
																																												{	/* Eval/expddefine.scm 397 */
																																													obj_t
																																														BgL_arg1916z00_1901;
																																													{	/* Eval/expddefine.scm 397 */
																																														obj_t
																																															BgL_arg1917z00_1902;
																																														{	/* Eval/expddefine.scm 397 */
																																															obj_t
																																																BgL_arg1918z00_1903;
																																															{	/* Eval/expddefine.scm 397 */
																																																obj_t
																																																	BgL_arg1919z00_1904;
																																																obj_t
																																																	BgL_arg1920z00_1905;
																																																BgL_arg1919z00_1904
																																																	=
																																																	CAR
																																																	(BgL_p0z00_1792);
																																																{	/* Eval/expddefine.scm 398 */
																																																	obj_t
																																																		BgL_arg1921z00_1906;
																																																	obj_t
																																																		BgL_arg1923z00_1907;
																																																	BgL_arg1921z00_1906
																																																		=
																																																		CAR
																																																		(
																																																		((obj_t) BgL_pfz00_1791));
																																																	BgL_arg1923z00_1907
																																																		=
																																																		MAKE_YOUNG_PAIR
																																																		(CDR
																																																		(BgL_p0z00_1792),
																																																		BNIL);
																																																	BgL_arg1920z00_1905
																																																		=
																																																		MAKE_YOUNG_PAIR
																																																		(BgL_arg1921z00_1906,
																																																		BgL_arg1923z00_1907);
																																																}
																																																BgL_arg1918z00_1903
																																																	=
																																																	MAKE_YOUNG_PAIR
																																																	(BgL_arg1919z00_1904,
																																																	BgL_arg1920z00_1905);
																																															}
																																															BgL_arg1917z00_1902
																																																=
																																																MAKE_YOUNG_PAIR
																																																(BGl_symbol2576z00zz__expander_definez00,
																																																BgL_arg1918z00_1903);
																																														}
																																														BgL_arg1916z00_1901
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BgL_arg1917z00_1902,
																																															BNIL);
																																													}
																																													BgL_arg1915z00_1900
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BGl_symbol2578z00zz__expander_definez00,
																																														BgL_arg1916z00_1901);
																																												}
																																												BgL_arg1913z00_1898
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BgL_arg1915z00_1900,
																																													BNIL);
																																											}
																																											{	/* Eval/expddefine.scm 400 */
																																												obj_t
																																													BgL_arg1925z00_1909;
																																												{	/* Eval/expddefine.scm 400 */
																																													obj_t
																																														BgL_arg1926z00_1910;
																																													{	/* Eval/expddefine.scm 400 */
																																														obj_t
																																															BgL_arg1927z00_1911;
																																														obj_t
																																															BgL_arg1928z00_1912;
																																														{	/* Eval/expddefine.scm 400 */
																																															obj_t
																																																BgL_arg1929z00_1913;
																																															BgL_arg1929z00_1913
																																																=
																																																MAKE_YOUNG_PAIR
																																																(BGl_symbol2578z00zz__expander_definez00,
																																																BNIL);
																																															BgL_arg1927z00_1911
																																																=
																																																MAKE_YOUNG_PAIR
																																																(BGl_symbol2555z00zz__expander_definez00,
																																																BgL_arg1929z00_1913);
																																														}
																																														{	/* Eval/expddefine.scm 401 */
																																															obj_t
																																																BgL_arg1930z00_1914;
																																															obj_t
																																																BgL_arg1931z00_1915;
																																															{	/* Eval/expddefine.scm 401 */
																																																obj_t
																																																	BgL_arg1932z00_1916;
																																																BgL_arg1932z00_1916
																																																	=
																																																	MAKE_YOUNG_PAIR
																																																	(CAR
																																																	(BgL_p0z00_1792),
																																																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																																	(BgL_namesz00_1877,
																																																		BNIL));
																																																BgL_arg1930z00_1914
																																																	=
																																																	MAKE_YOUNG_PAIR
																																																	(BGl_symbol2578z00zz__expander_definez00,
																																																	BgL_arg1932z00_1916);
																																															}
																																															{	/* Eval/expddefine.scm 402 */
																																																obj_t
																																																	BgL_arg1935z00_1919;
																																																{	/* Eval/expddefine.scm 402 */
																																																	obj_t
																																																		BgL_arg1936z00_1920;
																																																	{	/* Eval/expddefine.scm 402 */
																																																		obj_t
																																																			BgL_arg1937z00_1921;
																																																		obj_t
																																																			BgL_arg1938z00_1922;
																																																		BgL_arg1937z00_1921
																																																			=
																																																			CAR
																																																			(
																																																			((obj_t) BgL_pfz00_1791));
																																																		BgL_arg1938z00_1922
																																																			=
																																																			MAKE_YOUNG_PAIR
																																																			(CAR
																																																			(BgL_p0z00_1792),
																																																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																																			(BgL_namesz00_1877,
																																																				BNIL));
																																																		BgL_arg1936z00_1920
																																																			=
																																																			MAKE_YOUNG_PAIR
																																																			(BgL_arg1937z00_1921,
																																																			BgL_arg1938z00_1922);
																																																	}
																																																	BgL_arg1935z00_1919
																																																		=
																																																		MAKE_YOUNG_PAIR
																																																		(BGl_symbol2547z00zz__expander_definez00,
																																																		BgL_arg1936z00_1920);
																																																}
																																																BgL_arg1931z00_1915
																																																	=
																																																	MAKE_YOUNG_PAIR
																																																	(BgL_arg1935z00_1919,
																																																	BNIL);
																																															}
																																															BgL_arg1928z00_1912
																																																=
																																																MAKE_YOUNG_PAIR
																																																(BgL_arg1930z00_1914,
																																																BgL_arg1931z00_1915);
																																														}
																																														BgL_arg1926z00_1910
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BgL_arg1927z00_1911,
																																															BgL_arg1928z00_1912);
																																													}
																																													BgL_arg1925z00_1909
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BGl_symbol2557z00zz__expander_definez00,
																																														BgL_arg1926z00_1910);
																																												}
																																												BgL_arg1914z00_1899
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BgL_arg1925z00_1909,
																																													BNIL);
																																											}
																																											BgL_arg1912z00_1897
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_arg1913z00_1898,
																																												BgL_arg1914z00_1899);
																																										}
																																										BgL_arg1911z00_1896
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BGl_symbol2539z00zz__expander_definez00,
																																											BgL_arg1912z00_1897);
																																									}
																																									BgL_arg1910z00_1895
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_arg1911z00_1896,
																																										BNIL);
																																								}
																																								BgL_arg1908z00_1893
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg1909z00_1894,
																																									BgL_arg1910z00_1895);
																																							}
																																							BgL_arg1906z00_1891
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2535z00zz__expander_definez00,
																																								BgL_arg1908z00_1893);
																																						}
																																						BgL_arg1907z00_1892
																																							=
																																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																							(BgL_bodyz00_1774,
																																							BNIL);
																																						BgL_arg1904z00_1889
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1906z00_1891,
																																							BgL_arg1907z00_1892);
																																					}
																																					BgL_arg1902z00_1887
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg1903z00_1888,
																																						BgL_arg1904z00_1889);
																																				}
																																				BgL_arg1901z00_1886
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2532z00zz__expander_definez00,
																																					BgL_arg1902z00_1887);
																																			}
																																			BgL_arg1897z00_1884
																																				=
																																				PROCEDURE_ENTRY
																																				(BgL_ez00_24)
																																				(BgL_ez00_24,
																																				BgL_arg1901z00_1886,
																																				BgL_ez00_24,
																																				BEOA);
																																		}
																																		{	/* Eval/expddefine.scm 405 */
																																			obj_t
																																				BgL_arg1941z00_1925;
																																			{	/* Eval/expddefine.scm 405 */
																																				obj_t
																																					BgL_arg1942z00_1926;
																																				BgL_arg1942z00_1926
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_f0z00_1772,
																																					BNIL);
																																				BgL_arg1941z00_1925
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2565z00zz__expander_definez00,
																																					BgL_arg1942z00_1926);
																																			}
																																			BgL_arg1898z00_1885
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1941z00_1925,
																																				BNIL);
																																		}
																																		BgL_arg1896z00_1883
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1897z00_1884,
																																			BgL_arg1898z00_1885);
																																	}
																																	BgL_arg1893z00_1881
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1895z00_1882,
																																		BgL_arg1896z00_1883);
																																}
																																BgL_arg1891z00_1879
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1892z00_1880,
																																	BgL_arg1893z00_1881);
																															}
																															BgL_resz00_1878 =
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2580z00zz__expander_definez00,
																																BgL_arg1891z00_1879);
																														}
																														{	/* Eval/expddefine.scm 392 */

																															return
																																BGl_evepairifyz00zz__prognz00
																																(BgL_resz00_1878,
																																BgL_xz00_23);
																														}
																													}
																												}
																											}
																										}
																									else
																										{	/* Eval/expddefine.scm 409 */
																											obj_t
																												BgL_tformalsz00_1927;
																											BgL_tformalsz00_1927 =
																												BGl_dssslzd2formalszd2ze3schemezd2typedzd2formalsze3zz__dssslz00
																												(BgL_formalsz00_1773,
																												BGl_errorzd2envzd2zz__errorz00,
																												((bool_t) 1));
																											{	/* Eval/expddefine.scm 409 */
																												obj_t
																													BgL_uformalsz00_1928;
																												BgL_uformalsz00_1928 =
																													BGl_dssslzd2formalszd2ze3schemezd2typedzd2formalsze3zz__dssslz00
																													(BgL_formalsz00_1773,
																													BGl_errorzd2envzd2zz__errorz00,
																													((bool_t) 0));
																												{	/* Eval/expddefine.scm 410 */
																													obj_t BgL_resz00_1929;

																													{	/* Eval/expddefine.scm 412 */
																														obj_t
																															BgL_arg1943z00_1930;
																														{	/* Eval/expddefine.scm 412 */
																															obj_t
																																BgL_arg1944z00_1931;
																															obj_t
																																BgL_arg1945z00_1932;
																															BgL_arg1944z00_1931
																																=
																																CAR(((obj_t)
																																	BgL_pfz00_1791));
																															{	/* Eval/expddefine.scm 413 */
																																obj_t
																																	BgL_arg1946z00_1933;
																																obj_t
																																	BgL_arg1947z00_1934;
																																BgL_arg1946z00_1933
																																	=
																																	CDR
																																	(BgL_p0z00_1792);
																																{	/* Eval/expddefine.scm 414 */
																																	obj_t
																																		BgL_arg1948z00_1935;
																																	obj_t
																																		BgL_arg1949z00_1936;
																																	{	/* Eval/expddefine.scm 414 */
																																		obj_t
																																			BgL_arg1951z00_1937;
																																		{	/* Eval/expddefine.scm 414 */
																																			obj_t
																																				BgL_arg1952z00_1938;
																																			{	/* Eval/expddefine.scm 414 */
																																				obj_t
																																					BgL_arg1953z00_1939;
																																				obj_t
																																					BgL_arg1954z00_1940;
																																				{	/* Eval/expddefine.scm 414 */
																																					obj_t
																																						BgL_arg1955z00_1941;
																																					BgL_arg1955z00_1941
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_f0z00_1772,
																																						BgL_tformalsz00_1927);
																																					BgL_arg1953z00_1939
																																						=
																																						BGl_loopze70ze7zz__expander_definez00
																																						(BgL_ez00_24,
																																						BgL_arg1955z00_1941);
																																				}
																																				{	/* Eval/expddefine.scm 415 */
																																					obj_t
																																						BgL_arg1956z00_1942;
																																					obj_t
																																						BgL_arg1957z00_1943;
																																					{	/* Eval/expddefine.scm 415 */
																																						obj_t
																																							BgL_arg1958z00_1944;
																																						{	/* Eval/expddefine.scm 415 */
																																							obj_t
																																								BgL_arg1959z00_1945;
																																							obj_t
																																								BgL_arg1960z00_1946;
																																							BgL_arg1959z00_1945
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_symbol2574z00zz__expander_definez00,
																																								BNIL);
																																							{	/* Eval/expddefine.scm 416 */
																																								obj_t
																																									BgL_arg1961z00_1947;
																																								{	/* Eval/expddefine.scm 416 */
																																									obj_t
																																										BgL_arg1962z00_1948;
																																									{	/* Eval/expddefine.scm 416 */
																																										obj_t
																																											BgL_arg1963z00_1949;
																																										obj_t
																																											BgL_arg1964z00_1950;
																																										{	/* Eval/expddefine.scm 416 */
																																											obj_t
																																												BgL_arg1965z00_1951;
																																											{	/* Eval/expddefine.scm 416 */
																																												obj_t
																																													BgL_arg1966z00_1952;
																																												{	/* Eval/expddefine.scm 416 */
																																													obj_t
																																														BgL_arg1967z00_1953;
																																													{	/* Eval/expddefine.scm 416 */
																																														obj_t
																																															BgL_arg1968z00_1954;
																																														{	/* Eval/expddefine.scm 416 */
																																															obj_t
																																																BgL_arg1969z00_1955;
																																															obj_t
																																																BgL_arg1970z00_1956;
																																															BgL_arg1969z00_1955
																																																=
																																																CAR
																																																(BgL_p0z00_1792);
																																															{	/* Eval/expddefine.scm 417 */
																																																obj_t
																																																	BgL_arg1971z00_1957;
																																																obj_t
																																																	BgL_arg1972z00_1958;
																																																BgL_arg1971z00_1957
																																																	=
																																																	CAR
																																																	(
																																																	((obj_t) BgL_pfz00_1791));
																																																BgL_arg1972z00_1958
																																																	=
																																																	MAKE_YOUNG_PAIR
																																																	(CDR
																																																	(BgL_p0z00_1792),
																																																	BNIL);
																																																BgL_arg1970z00_1956
																																																	=
																																																	MAKE_YOUNG_PAIR
																																																	(BgL_arg1971z00_1957,
																																																	BgL_arg1972z00_1958);
																																															}
																																															BgL_arg1968z00_1954
																																																=
																																																MAKE_YOUNG_PAIR
																																																(BgL_arg1969z00_1955,
																																																BgL_arg1970z00_1956);
																																														}
																																														BgL_arg1967z00_1953
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BGl_symbol2576z00zz__expander_definez00,
																																															BgL_arg1968z00_1954);
																																													}
																																													BgL_arg1966z00_1952
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BgL_arg1967z00_1953,
																																														BNIL);
																																												}
																																												BgL_arg1965z00_1951
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BGl_symbol2578z00zz__expander_definez00,
																																													BgL_arg1966z00_1952);
																																											}
																																											BgL_arg1963z00_1949
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_arg1965z00_1951,
																																												BNIL);
																																										}
																																										{	/* Eval/expddefine.scm 419 */
																																											obj_t
																																												BgL_arg1974z00_1960;
																																											{	/* Eval/expddefine.scm 419 */
																																												obj_t
																																													BgL_arg1975z00_1961;
																																												{	/* Eval/expddefine.scm 419 */
																																													obj_t
																																														BgL_arg1976z00_1962;
																																													obj_t
																																														BgL_arg1977z00_1963;
																																													{	/* Eval/expddefine.scm 419 */
																																														obj_t
																																															BgL_arg1979z00_1964;
																																														BgL_arg1979z00_1964
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BGl_symbol2578z00zz__expander_definez00,
																																															BNIL);
																																														BgL_arg1976z00_1962
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BGl_symbol2555z00zz__expander_definez00,
																																															BgL_arg1979z00_1964);
																																													}
																																													{	/* Eval/expddefine.scm 420 */
																																														obj_t
																																															BgL_arg1980z00_1965;
																																														obj_t
																																															BgL_arg1981z00_1966;
																																														{	/* Eval/expddefine.scm 420 */
																																															obj_t
																																																BgL_arg1982z00_1967;
																																															{	/* Eval/expddefine.scm 420 */
																																																obj_t
																																																	BgL_arg1983z00_1968;
																																																BgL_arg1983z00_1968
																																																	=
																																																	MAKE_YOUNG_PAIR
																																																	(CAR
																																																	(BgL_p0z00_1792),
																																																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																																	(BGl_pairzd2ze3listze70zd6zz__expander_definez00
																																																		(BgL_uformalsz00_1928),
																																																		BNIL));
																																																BgL_arg1982z00_1967
																																																	=
																																																	MAKE_YOUNG_PAIR
																																																	(BGl_symbol2578z00zz__expander_definez00,
																																																	BgL_arg1983z00_1968);
																																															}
																																															BgL_arg1980z00_1965
																																																=
																																																MAKE_YOUNG_PAIR
																																																(BGl_symbol2547z00zz__expander_definez00,
																																																BgL_arg1982z00_1967);
																																														}
																																														{	/* Eval/expddefine.scm 422 */
																																															obj_t
																																																BgL_arg1987z00_1972;
																																															{	/* Eval/expddefine.scm 422 */
																																																obj_t
																																																	BgL_arg1988z00_1973;
																																																{	/* Eval/expddefine.scm 422 */
																																																	obj_t
																																																		BgL_arg1989z00_1974;
																																																	obj_t
																																																		BgL_arg1990z00_1975;
																																																	BgL_arg1989z00_1974
																																																		=
																																																		CAR
																																																		(
																																																		((obj_t) BgL_pfz00_1791));
																																																	BgL_arg1990z00_1975
																																																		=
																																																		MAKE_YOUNG_PAIR
																																																		(CAR
																																																		(BgL_p0z00_1792),
																																																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																																		(BGl_pairzd2ze3listze70zd6zz__expander_definez00
																																																			(BgL_uformalsz00_1928),
																																																			BNIL));
																																																	BgL_arg1988z00_1973
																																																		=
																																																		MAKE_YOUNG_PAIR
																																																		(BgL_arg1989z00_1974,
																																																		BgL_arg1990z00_1975);
																																																}
																																																BgL_arg1987z00_1972
																																																	=
																																																	MAKE_YOUNG_PAIR
																																																	(BGl_symbol2547z00zz__expander_definez00,
																																																	BgL_arg1988z00_1973);
																																															}
																																															BgL_arg1981z00_1966
																																																=
																																																MAKE_YOUNG_PAIR
																																																(BgL_arg1987z00_1972,
																																																BNIL);
																																														}
																																														BgL_arg1977z00_1963
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BgL_arg1980z00_1965,
																																															BgL_arg1981z00_1966);
																																													}
																																													BgL_arg1975z00_1961
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BgL_arg1976z00_1962,
																																														BgL_arg1977z00_1963);
																																												}
																																												BgL_arg1974z00_1960
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BGl_symbol2557z00zz__expander_definez00,
																																													BgL_arg1975z00_1961);
																																											}
																																											BgL_arg1964z00_1950
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_arg1974z00_1960,
																																												BNIL);
																																										}
																																										BgL_arg1962z00_1948
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_arg1963z00_1949,
																																											BgL_arg1964z00_1950);
																																									}
																																									BgL_arg1961z00_1947
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BGl_symbol2539z00zz__expander_definez00,
																																										BgL_arg1962z00_1948);
																																								}
																																								BgL_arg1960z00_1946
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg1961z00_1947,
																																									BNIL);
																																							}
																																							BgL_arg1958z00_1944
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_arg1959z00_1945,
																																								BgL_arg1960z00_1946);
																																						}
																																						BgL_arg1956z00_1942
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol2535z00zz__expander_definez00,
																																							BgL_arg1958z00_1944);
																																					}
																																					{	/* Eval/expddefine.scm 425 */
																																						obj_t
																																							BgL_arg1995z00_1979;
																																						{	/* Eval/expddefine.scm 425 */
																																							obj_t
																																								BgL_arg1996z00_1980;
																																							{	/* Eval/expddefine.scm 425 */
																																								obj_t
																																									BgL_arg1997z00_1981;
																																								BgL_arg1997z00_1981
																																									=
																																									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																									(BgL_bodyz00_1774,
																																									BNIL);
																																								BgL_arg1996z00_1980
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2527z00zz__expander_definez00,
																																									BgL_arg1997z00_1981);
																																							}
																																							BgL_arg1995z00_1979
																																								=
																																								BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00
																																								(BgL_funz00_1771,
																																								BgL_formalsz00_1773,
																																								BgL_arg1996z00_1980,
																																								BGl_errorzd2envzd2zz__errorz00);
																																						}
																																						BgL_arg1957z00_1943
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1995z00_1979,
																																							BNIL);
																																					}
																																					BgL_arg1954z00_1940
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg1956z00_1942,
																																						BgL_arg1957z00_1943);
																																				}
																																				BgL_arg1952z00_1938
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1953z00_1939,
																																					BgL_arg1954z00_1940);
																																			}
																																			BgL_arg1951z00_1937
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol2532z00zz__expander_definez00,
																																				BgL_arg1952z00_1938);
																																		}
																																		BgL_arg1948z00_1935
																																			=
																																			PROCEDURE_ENTRY
																																			(BgL_ez00_24)
																																			(BgL_ez00_24,
																																			BgL_arg1951z00_1937,
																																			BgL_ez00_24,
																																			BEOA);
																																	}
																																	{	/* Eval/expddefine.scm 427 */
																																		obj_t
																																			BgL_arg1998z00_1982;
																																		{	/* Eval/expddefine.scm 427 */
																																			obj_t
																																				BgL_arg1999z00_1983;
																																			BgL_arg1999z00_1983
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_f0z00_1772,
																																				BNIL);
																																			BgL_arg1998z00_1982
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol2565z00zz__expander_definez00,
																																				BgL_arg1999z00_1983);
																																		}
																																		BgL_arg1949z00_1936
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1998z00_1982,
																																			BNIL);
																																	}
																																	BgL_arg1947z00_1934
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1948z00_1935,
																																		BgL_arg1949z00_1936);
																																}
																																BgL_arg1945z00_1932
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1946z00_1933,
																																	BgL_arg1947z00_1934);
																															}
																															BgL_arg1943z00_1930
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1944z00_1931,
																																BgL_arg1945z00_1932);
																														}
																														BgL_resz00_1929 =
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2580z00zz__expander_definez00,
																															BgL_arg1943z00_1930);
																													}
																													{	/* Eval/expddefine.scm 411 */

																														return
																															BGl_evepairifyz00zz__prognz00
																															(BgL_resz00_1929,
																															BgL_xz00_23);
																													}
																												}
																											}
																										}
																								}
																						}
																					else
																						{	/* Eval/expddefine.scm 366 */
																							return
																								BGl_expandzd2errorzd2zz__expandz00
																								(BGl_string2582z00zz__expander_definez00,
																								BGl_string2531z00zz__expander_definez00,
																								BgL_xz00_23);
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
											{	/* Eval/expddefine.scm 357 */
												return
													BGl_expandzd2errorzd2zz__expandz00
													(BGl_string2582z00zz__expander_definez00,
													BGl_string2531z00zz__expander_definez00, BgL_xz00_23);
											}
									}
								else
									{	/* Eval/expddefine.scm 357 */
										return
											BGl_expandzd2errorzd2zz__expandz00
											(BGl_string2582z00zz__expander_definez00,
											BGl_string2531z00zz__expander_definez00, BgL_xz00_23);
									}
							}
						else
							{	/* Eval/expddefine.scm 357 */
								return
									BGl_expandzd2errorzd2zz__expandz00
									(BGl_string2582z00zz__expander_definez00,
									BGl_string2531z00zz__expander_definez00, BgL_xz00_23);
							}
					}
				else
					{	/* Eval/expddefine.scm 357 */
						return
							BGl_expandzd2errorzd2zz__expandz00
							(BGl_string2582z00zz__expander_definez00,
							BGl_string2531z00zz__expander_definez00, BgL_xz00_23);
					}
			}
		}

	}



/* get-args~0 */
	obj_t BGl_getzd2argsze70z35zz__expander_definez00(obj_t BgL_argsz00_2009,
		obj_t BgL_locz00_2010)
	{
		{	/* Eval/expddefine.scm 349 */
			if (NULLP(BgL_argsz00_2009))
				{	/* Eval/expddefine.scm 343 */
					return BNIL;
				}
			else
				{	/* Eval/expddefine.scm 343 */
					if (PAIRP(BgL_argsz00_2009))
						{	/* Eval/expddefine.scm 346 */
							obj_t BgL_arg2016z00_2014;
							obj_t BgL_arg2017z00_2015;

							{	/* Eval/expddefine.scm 346 */
								obj_t BgL_arg2018z00_2016;
								obj_t BgL_arg2020z00_2017;

								BgL_arg2018z00_2016 = CAR(BgL_argsz00_2009);
								{	/* Eval/expddefine.scm 346 */
									obj_t BgL__ortest_1045z00_2018;

									BgL__ortest_1045z00_2018 =
										BGl_getzd2sourcezd2locationz00zz__readerz00
										(BgL_argsz00_2009);
									if (CBOOL(BgL__ortest_1045z00_2018))
										{	/* Eval/expddefine.scm 346 */
											BgL_arg2020z00_2017 = BgL__ortest_1045z00_2018;
										}
									else
										{	/* Eval/expddefine.scm 346 */
											BgL_arg2020z00_2017 = BgL_locz00_2010;
										}
								}
								{	/* Eval/expddefine.scm 336 */
									obj_t BgL_rz00_2926;

									BgL_rz00_2926 =
										BGl_parsezd2formalzd2identz00zz__evutilsz00
										(BgL_arg2018z00_2016, BgL_arg2020z00_2017);
									if (PAIRP(BgL_rz00_2926))
										{	/* Eval/expddefine.scm 337 */
											BgL_arg2016z00_2014 = CAR(BgL_rz00_2926);
										}
									else
										{	/* Eval/expddefine.scm 337 */
											BgL_arg2016z00_2014 = BgL_rz00_2926;
										}
								}
							}
							BgL_arg2017z00_2015 =
								BGl_getzd2argsze70z35zz__expander_definez00(CDR
								(BgL_argsz00_2009), BgL_locz00_2010);
							return MAKE_YOUNG_PAIR(BgL_arg2016z00_2014, BgL_arg2017z00_2015);
						}
					else
						{	/* Eval/expddefine.scm 349 */
							obj_t BgL_arg2022z00_2020;

							{	/* Eval/expddefine.scm 336 */
								obj_t BgL_rz00_2931;

								BgL_rz00_2931 =
									BGl_parsezd2formalzd2identz00zz__evutilsz00(BgL_argsz00_2009,
									BgL_locz00_2010);
								if (PAIRP(BgL_rz00_2931))
									{	/* Eval/expddefine.scm 337 */
										BgL_arg2022z00_2020 = CAR(BgL_rz00_2931);
									}
								else
									{	/* Eval/expddefine.scm 337 */
										BgL_arg2022z00_2020 = BgL_rz00_2931;
									}
							}
							{	/* Eval/expddefine.scm 349 */
								obj_t BgL_list2023z00_2021;

								BgL_list2023z00_2021 =
									MAKE_YOUNG_PAIR(BgL_arg2022z00_2020, BNIL);
								return BgL_list2023z00_2021;
							}
						}
				}
		}

	}



/* pair->list~0 */
	obj_t BGl_pairzd2ze3listze70zd6zz__expander_definez00(obj_t BgL_pz00_2022)
	{
		{	/* Eval/expddefine.scm 355 */
			if (PAIRP(BgL_pz00_2022))
				{	/* Eval/expddefine.scm 353 */
					return
						MAKE_YOUNG_PAIR(CAR(BgL_pz00_2022),
						BGl_pairzd2ze3listze70zd6zz__expander_definez00(CDR
							(BgL_pz00_2022)));
				}
			else
				{	/* Eval/expddefine.scm 353 */
					if (NULLP(BgL_pz00_2022))
						{	/* Eval/expddefine.scm 354 */
							return BNIL;
						}
					else
						{	/* Eval/expddefine.scm 355 */
							obj_t BgL_list2031z00_2029;

							BgL_list2031z00_2029 = MAKE_YOUNG_PAIR(BgL_pz00_2022, BNIL);
							return BgL_list2031z00_2029;
						}
				}
		}

	}



/* &expand-eval-define-method */
	obj_t BGl_z62expandzd2evalzd2definezd2methodzb0zz__expander_definez00(obj_t
		BgL_envz00_3284, obj_t BgL_xz00_3285, obj_t BgL_ez00_3286)
	{
		{	/* Eval/expddefine.scm 333 */
			{	/* Eval/expddefine.scm 336 */
				obj_t BgL_auxz00_4654;

				if (PROCEDUREP(BgL_ez00_3286))
					{	/* Eval/expddefine.scm 336 */
						BgL_auxz00_4654 = BgL_ez00_3286;
					}
				else
					{
						obj_t BgL_auxz00_4657;

						BgL_auxz00_4657 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2524z00zz__expander_definez00, BINT(((long) 12172)),
							BGl_string2583z00zz__expander_definez00,
							BGl_string2526z00zz__expander_definez00, BgL_ez00_3286);
						FAILURE(BgL_auxz00_4657, BFALSE, BFALSE);
					}
				return
					BGl_expandzd2evalzd2definezd2methodzd2zz__expander_definez00
					(BgL_xz00_3285, BgL_auxz00_4654);
			}
		}

	}



/* dsssl-formals->names */
	obj_t BGl_dssslzd2formalszd2ze3namesze3zz__expander_definez00(obj_t
		BgL_formalsz00_25)
	{
		{	/* Eval/expddefine.scm 438 */
			{	/* Eval/expddefine.scm 439 */
				obj_t BgL_list2034z00_2034;

				BgL_list2034z00_2034 = MAKE_YOUNG_PAIR(BgL_formalsz00_25, BNIL);
				return
					BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
					(BGl_proc2584z00zz__expander_definez00, BgL_list2034z00_2034);
			}
		}

	}



/* &<@anonymous:2035> */
	obj_t BGl_z62zc3z04anonymousza32035ze3ze5zz__expander_definez00(obj_t
		BgL_envz00_3292, obj_t BgL_pz00_3293)
	{
		{	/* Eval/expddefine.scm 439 */
			if (SYMBOLP(BgL_pz00_3293))
				{	/* Eval/expddefine.scm 441 */
					return BgL_pz00_3293;
				}
			else
				{	/* Eval/expddefine.scm 441 */
					if (PAIRP(BgL_pz00_3293))
						{	/* Eval/expddefine.scm 442 */
							return CAR(BgL_pz00_3293);
						}
					else
						{	/* Eval/expddefine.scm 442 */
							return BFALSE;
						}
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__expander_definez00()
	{
		{	/* Eval/expddefine.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expander_definez00()
	{
		{	/* Eval/expddefine.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expander_definez00()
	{
		{	/* Eval/expddefine.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expander_definez00()
	{
		{	/* Eval/expddefine.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 220647683),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 443936798),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 177147628),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
			return BGl_modulezd2initializa7ationz75zz__expandz00(((long) 414007030),
				BSTRING_TO_STRING(BGl_string2585z00zz__expander_definez00));
		}

	}

#ifdef __cplusplus
}
#endif
