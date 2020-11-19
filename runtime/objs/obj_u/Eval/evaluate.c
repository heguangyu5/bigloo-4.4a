/*===========================================================================*/
/*   (Eval/evaluate.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/evaluate.scm -indent -o objs/obj_u/Eval/evaluate.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_ev_exprz00_bgl
	{
		header_t header;
		obj_t widening;
	}                 *BgL_ev_exprz00_bglt;

	typedef struct BgL_ev_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_namez00;
		obj_t BgL_effz00;
		obj_t BgL_typez00;
	}                *BgL_ev_varz00_bglt;

	typedef struct BgL_ev_globalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		obj_t BgL_modz00;
	}                   *BgL_ev_globalz00_bglt;

	typedef struct BgL_ev_littz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_valuez00;
	}                 *BgL_ev_littz00_bglt;

	typedef struct BgL_ev_ifz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_ev_exprz00_bgl *BgL_pz00;
		struct BgL_ev_exprz00_bgl *BgL_tz00;
		struct BgL_ev_exprz00_bgl *BgL_ez00;
	}               *BgL_ev_ifz00_bglt;

	typedef struct BgL_ev_listz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_argsz00;
	}                 *BgL_ev_listz00_bglt;

	typedef struct BgL_ev_orz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_argsz00;
	}               *BgL_ev_orz00_bglt;

	typedef struct BgL_ev_andz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_argsz00;
	}                *BgL_ev_andz00_bglt;

	typedef struct BgL_ev_prog2z00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_ev_exprz00_bgl *BgL_e1z00;
		struct BgL_ev_exprz00_bgl *BgL_e2z00;
	}                  *BgL_ev_prog2z00_bglt;

	typedef struct BgL_ev_hookz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_ev_exprz00_bgl *BgL_ez00;
	}                 *BgL_ev_hookz00_bglt;

	typedef struct BgL_ev_trapz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_ev_exprz00_bgl *BgL_ez00;
	}                 *BgL_ev_trapz00_bglt;

	typedef struct BgL_ev_setlocalz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_ev_exprz00_bgl *BgL_ez00;
		struct BgL_ev_varz00_bgl *BgL_vz00;
	}                     *BgL_ev_setlocalz00_bglt;

	typedef struct BgL_ev_setglobalz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_ev_exprz00_bgl *BgL_ez00;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		obj_t BgL_modz00;
	}                      *BgL_ev_setglobalz00_bglt;

	typedef struct BgL_ev_defglobalz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_ev_exprz00_bgl *BgL_ez00;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		obj_t BgL_modz00;
	}                      *BgL_ev_defglobalz00_bglt;

	typedef struct BgL_ev_bindzd2exitzd2_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_ev_varz00_bgl *BgL_varz00;
		struct BgL_ev_exprz00_bgl *BgL_bodyz00;
	}                        *BgL_ev_bindzd2exitzd2_bglt;

	typedef struct BgL_ev_unwindzd2protectzd2_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_ev_exprz00_bgl *BgL_ez00;
		struct BgL_ev_exprz00_bgl *BgL_bodyz00;
	}                             *BgL_ev_unwindzd2protectzd2_bglt;

	typedef struct BgL_ev_withzd2handlerzd2_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_ev_exprz00_bgl *BgL_handlerz00;
		struct BgL_ev_exprz00_bgl *BgL_bodyz00;
	}                           *BgL_ev_withzd2handlerzd2_bglt;

	typedef struct BgL_ev_synchroniza7eza7_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_ev_exprz00_bgl *BgL_mutexz00;
		struct BgL_ev_exprz00_bgl *BgL_prelockz00;
		struct BgL_ev_exprz00_bgl *BgL_bodyz00;
	}                          *BgL_ev_synchroniza7eza7_bglt;

	typedef struct BgL_ev_binderz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_varsz00;
		obj_t BgL_valsz00;
		struct BgL_ev_exprz00_bgl *BgL_bodyz00;
	}                   *BgL_ev_binderz00_bglt;

	typedef struct BgL_ev_letz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_varsz00;
		obj_t BgL_valsz00;
		struct BgL_ev_exprz00_bgl *BgL_bodyz00;
		obj_t BgL_boxesz00;
	}                *BgL_ev_letz00_bglt;

	typedef struct BgL_ev_letza2za2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_varsz00;
		obj_t BgL_valsz00;
		struct BgL_ev_exprz00_bgl *BgL_bodyz00;
		obj_t BgL_boxesz00;
	}                   *BgL_ev_letza2za2_bglt;

	typedef struct BgL_ev_letrecz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_varsz00;
		obj_t BgL_valsz00;
		struct BgL_ev_exprz00_bgl *BgL_bodyz00;
	}                   *BgL_ev_letrecz00_bglt;

	typedef struct BgL_ev_appz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_ev_exprz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
		obj_t BgL_tailzf3zf3;
	}                *BgL_ev_appz00_bglt;

	typedef struct BgL_ev_absz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_wherez00;
		obj_t BgL_arityz00;
		obj_t BgL_varsz00;
		struct BgL_ev_exprz00_bgl *BgL_bodyz00;
		int BgL_siza7eza7;
		obj_t BgL_bindz00;
		obj_t BgL_freez00;
		obj_t BgL_innerz00;
		obj_t BgL_boxesz00;
	}                *BgL_ev_absz00_bglt;


	static obj_t BGl_symbol3291z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3293z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3295z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3297z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3299z00zz__evaluatez00 = BUNSPEC;
	extern obj_t BGl_ev_defglobalz00zz__evaluate_typesz00;
	extern obj_t BGl_compilez00zz__evaluate_compz00(BgL_ev_exprz00_bglt);
	static obj_t BGl_convzd2beginzd2zz__evaluatez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, bool_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__evaluatez00 = BUNSPEC;
	extern bool_t BGl_classzd2fieldzf3z21zz__objectz00(obj_t);
	static BgL_ev_absz00_bglt BGl_convzd2lambdaze70z35zz__evaluatez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern BgL_ev_exprz00_bglt
		BGl_extractzd2loopszd2zz__evaluate_fsiza7eza7(BgL_ev_exprz00_bglt);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_getzd2locationzd2zz__evaluatez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2evaluationzd2contextz12z12zz__evaluatez00(obj_t);
	extern obj_t BGl_ev_letrecz00zz__evaluate_typesz00;
	extern obj_t BGl_ev_letz00zz__evaluate_typesz00;
	extern obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t bgl_reverse(obj_t);
	static obj_t BGl_genericzd2initzd2zz__evaluatez00();
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_ev_prog2z00zz__evaluate_typesz00;
	extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	extern obj_t BGl_classzd2existszd2zz__objectz00(obj_t);
	extern int BGl_framezd2siza7ez75zz__evaluate_fsiza7eza7(BgL_ev_exprz00_bglt);
	static obj_t BGl_objectzd2initzd2zz__evaluatez00();
	extern obj_t BGl_ev_bindzd2exitzd2zz__evaluate_typesz00;
	extern bool_t BGl_classzd2fieldzd2mutablezf3zf3zz__objectz00(obj_t);
	static obj_t BGl_convzd2fieldzd2refz00zz__evaluatez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, bool_t);
	extern obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_z62getzd2evaluationzd2contextz62zz__evaluatez00(obj_t);
	extern obj_t BGl_findzd2classzd2fieldz00zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_ev_unwindzd2protectzd2zz__evaluate_typesz00;
	extern obj_t bstring_to_symbol(obj_t);
	extern bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_convzd2fieldzd2setz00zz__evaluatez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, bool_t);
	extern obj_t make_vector(long, obj_t);
	extern obj_t BGl_ev_letza2za2zz__evaluate_typesz00;
	extern obj_t BGl_classzd2fieldzd2mutatorz00zz__objectz00(obj_t);
	static obj_t BGl_convzd2varzd2zz__evaluatez00(obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zz__evaluatez00(obj_t, obj_t);
	static obj_t BGl_z62evaluate2zd2restorezd2statez12z70zz__evaluatez00(obj_t,
		obj_t);
	static obj_t BGl_typezd2checkszd2zz__evaluatez00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zz__evaluatez00();
	extern obj_t BGl_ev_absz00zz__evaluate_typesz00;
	extern obj_t BGl_ev_trapz00zz__evaluate_typesz00;
	extern obj_t BGl_ev_setglobalz00zz__evaluate_typesz00;
	extern obj_t BGl_ev_ifz00zz__evaluate_typesz00;
	extern obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_classzd2fieldzd2accessorz00zz__objectz00(obj_t);
	extern obj_t BGl_analysezd2varszd2zz__evaluate_avarz00(BgL_ev_exprz00_bglt);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
	extern obj_t BGl_findzd2statezd2zz__evaluate_compz00();
	extern obj_t BGl_evmodulez00zz__evmodulez00(obj_t, obj_t);
	static obj_t BGl_untypezd2identzd2zz__evaluatez00(obj_t);
	extern obj_t BGl_classzd2fieldzd2typez00zz__objectz00(obj_t);
	extern obj_t BGl_expandz00zz__expandz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__evaluatez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evaluate_compz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evaluate_uncompz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evaluate_fsiza7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evaluate_avarz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evaluate_typesz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evmodulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__everrorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evcompilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__ppz00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__typez00(long, char *);
	extern obj_t BGl_ev_globalz00zz__evaluate_typesz00;
	extern bool_t BGl_classzf3zf3zz__objectz00(obj_t);
	static obj_t BGl_z62setzd2evaluationzd2contextz12z70zz__evaluatez00(obj_t,
		obj_t);
	extern int bgl_debug();
	extern obj_t BGl_ev_littz00zz__evaluate_typesz00;
	extern obj_t BGl_ev_orz00zz__evaluate_typesz00;
	BGL_EXPORTED_DECL obj_t
		BGl_evaluate2zd2restorezd2statez12z12zz__evaluatez00(obj_t);
	extern obj_t BGl_ev_varz00zz__evaluate_typesz00;
	static obj_t BGl_typezd2checkzd2zz__evaluatez00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62evaluate2z62zz__evaluatez00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__evaluatez00();
	static obj_t BGl_gczd2rootszd2initz00zz__evaluatez00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__evaluatez00();
	extern obj_t BGl_ev_withzd2handlerzd2zz__evaluate_typesz00;
	extern obj_t BGl_ev_andz00zz__evaluate_typesz00;
	static obj_t BGl_keyword3338z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31368ze3ze5zz__evaluatez00(obj_t);
	static obj_t BGl_uconvzf2locze70z15zz__evaluatez00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_convzd2valsze70z35zz__evaluatez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol3301z00zz__evaluatez00 = BUNSPEC;
	extern bool_t BGl_evmodulezf3zf3zz__evmodulez00(obj_t);
	static obj_t BGl_symbol3305z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3307z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3227z00zz__evaluatez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_evaluate2z00zz__evaluatez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_getzd2sourcezd2locationz00zz__readerz00(obj_t);
	extern obj_t BGl_ev_appz00zz__evaluate_typesz00;
	static obj_t BGl_symbol3310z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3312z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3314z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3316z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3235z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3318z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3237z00zz__evaluatez00 = BUNSPEC;
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_symbol3239z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_typezd2resultzd2zz__evaluatez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_evalzd2findzd2modulez00zz__evmodulez00(obj_t);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t
		BGl_dssslzd2formalszd2ze3schemezd2typedzd2formalsze3zz__dssslz00(obj_t,
		obj_t, bool_t);
	static obj_t BGl_symbol3320z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3240z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3322z00zz__evaluatez00 = BUNSPEC;
	extern obj_t BGl_evcompilezd2errorzd2zz__evcompilez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol3242z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3324z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3244z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3326z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3246z00zz__evaluatez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_evaluate2zd2restorezd2bpz12z12zz__evaluatez00(int);
	static obj_t BGl_symbol3328z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3248z00zz__evaluatez00 = BUNSPEC;
	extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	extern obj_t BGl_ev_synchroniza7eza7zz__evaluate_typesz00;
	static obj_t BGl_symbol3330z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3250z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3332z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3252z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3334z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3253z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_loopze70ze7zz__evaluatez00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol3336z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3255z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_loopze71ze7zz__evaluatez00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol3257z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3259z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3340z00zz__evaluatez00 = BUNSPEC;
	extern obj_t bstring_to_keyword(obj_t);
	static obj_t BGl_symbol3342z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3261z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3263z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3265z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3267z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3269z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3271z00zz__evaluatez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_getzd2evaluationzd2contextz00zz__evaluatez00();
	static obj_t BGl_symbol3273z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3275z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3277z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3279z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_convz00zz__evaluatez00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, bool_t);
	extern obj_t BGl_ev_setlocalz00zz__evaluate_typesz00;
	static obj_t BGl_symbol3281z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3283z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3285z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3287z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_symbol3289z00zz__evaluatez00 = BUNSPEC;
	static obj_t BGl_z62evaluate2zd2restorezd2bpz12z70zz__evaluatez00(obj_t,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evaluate2zd2restorezd2bpz12zd2envzc0zz__evaluatez00,
		BgL_bgl_za762evaluate2za7d2r3347z00,
		BGl_z62evaluate2zd2restorezd2bpz12z70zz__evaluatez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3300z00zz__evaluatez00,
		BgL_bgl_string3300za700za7za7_3348za7, "at", 2);
	      DEFINE_STRING(BGl_string3302z00zz__evaluatez00,
		BgL_bgl_string3302za700za7za7_3349za7, "tmp", 3);
	      DEFINE_STRING(BGl_string3221z00zz__evaluatez00,
		BgL_bgl_string3221za700za7za7_3350za7, "", 0);
	      DEFINE_STRING(BGl_string3303z00zz__evaluatez00,
		BgL_bgl_string3303za700za7za7_3351za7, "~a::~a", 6);
	      DEFINE_STRING(BGl_string3222z00zz__evaluatez00,
		BgL_bgl_string3222za700za7za7_3352za7,
		"/tmp/4.4a/runtime/Eval/evaluate.scm", 35);
	      DEFINE_STRING(BGl_string3304z00zz__evaluatez00,
		BgL_bgl_string3304za700za7za7_3353za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string3223z00zz__evaluatez00,
		BgL_bgl_string3223za700za7za7_3354za7, "&evaluate2-restore-bp!", 22);
	      DEFINE_STRING(BGl_string3224z00zz__evaluatez00,
		BgL_bgl_string3224za700za7za7_3355za7, "bint", 4);
	      DEFINE_STRING(BGl_string3306z00zz__evaluatez00,
		BgL_bgl_string3306za700za7za7_3356za7, "begin", 5);
	      DEFINE_STRING(BGl_string3225z00zz__evaluatez00,
		BgL_bgl_string3225za700za7za7_3357za7, "&evaluate2-restore-state!", 25);
	      DEFINE_STRING(BGl_string3226z00zz__evaluatez00,
		BgL_bgl_string3226za700za7za7_3358za7, "vector", 6);
	      DEFINE_STRING(BGl_string3308z00zz__evaluatez00,
		BgL_bgl_string3308za700za7za7_3359za7, " ", 1);
	      DEFINE_STRING(BGl_string3309z00zz__evaluatez00,
		BgL_bgl_string3309za700za7za7_3360za7,
		"Illegal non toplevel module declaration", 39);
	      DEFINE_STRING(BGl_string3228z00zz__evaluatez00,
		BgL_bgl_string3228za700za7za7_3361za7, "toplevel", 8);
	      DEFINE_STRING(BGl_string3229z00zz__evaluatez00,
		BgL_bgl_string3229za700za7za7_3362za7, "eval", 4);
	      DEFINE_STRING(BGl_string3311z00zz__evaluatez00,
		BgL_bgl_string3311za700za7za7_3363za7, "module", 6);
	      DEFINE_STRING(BGl_string3230z00zz__evaluatez00,
		BgL_bgl_string3230za700za7za7_3364za7, "Bad syntax", 10);
	      DEFINE_STRING(BGl_string3231z00zz__evaluatez00,
		BgL_bgl_string3231za700za7za7_3365za7, "Class \"~a\" has no field \"~a\"",
		28);
	      DEFINE_STRING(BGl_string3313z00zz__evaluatez00,
		BgL_bgl_string3313za700za7za7_3366za7, "@", 1);
	      DEFINE_STRING(BGl_string3232z00zz__evaluatez00,
		BgL_bgl_string3232za700za7za7_3367za7, "Static type not a class", 23);
	      DEFINE_STRING(BGl_string3233z00zz__evaluatez00,
		BgL_bgl_string3233za700za7za7_3368za7, "Variable unbound", 16);
	      DEFINE_STRING(BGl_string3315z00zz__evaluatez00,
		BgL_bgl_string3315za700za7za7_3369za7, "->", 2);
	      DEFINE_STRING(BGl_string3234z00zz__evaluatez00,
		BgL_bgl_string3234za700za7za7_3370za7, "Field read-only", 15);
	      DEFINE_STRING(BGl_string3317z00zz__evaluatez00,
		BgL_bgl_string3317za700za7za7_3371za7, "trap", 4);
	      DEFINE_STRING(BGl_string3236z00zz__evaluatez00,
		BgL_bgl_string3236za700za7za7_3372za7, "pair", 4);
	      DEFINE_STRING(BGl_string3319z00zz__evaluatez00,
		BgL_bgl_string3319za700za7za7_3373za7, "or", 2);
	      DEFINE_STRING(BGl_string3238z00zz__evaluatez00,
		BgL_bgl_string3238za700za7za7_3374za7, "pair?", 5);
	      DEFINE_STRING(BGl_string3321z00zz__evaluatez00,
		BgL_bgl_string3321za700za7za7_3375za7, "and", 3);
	      DEFINE_STRING(BGl_string3241z00zz__evaluatez00,
		BgL_bgl_string3241za700za7za7_3376za7, "vector?", 7);
	      DEFINE_STRING(BGl_string3323z00zz__evaluatez00,
		BgL_bgl_string3323za700za7za7_3377za7, "let*", 4);
	      DEFINE_STRING(BGl_string3243z00zz__evaluatez00,
		BgL_bgl_string3243za700za7za7_3378za7, "symbol", 6);
	      DEFINE_STRING(BGl_string3325z00zz__evaluatez00,
		BgL_bgl_string3325za700za7za7_3379za7, "letrec", 6);
	      DEFINE_STRING(BGl_string3245z00zz__evaluatez00,
		BgL_bgl_string3245za700za7za7_3380za7, "symbol?", 7);
	      DEFINE_STRING(BGl_string3327z00zz__evaluatez00,
		BgL_bgl_string3327za700za7za7_3381za7, "set!", 4);
	      DEFINE_STRING(BGl_string3247z00zz__evaluatez00,
		BgL_bgl_string3247za700za7za7_3382za7, "char", 4);
	      DEFINE_STRING(BGl_string3329z00zz__evaluatez00,
		BgL_bgl_string3329za700za7za7_3383za7, "define", 6);
	      DEFINE_STRING(BGl_string3249z00zz__evaluatez00,
		BgL_bgl_string3249za700za7za7_3384za7, "char?", 5);
	      DEFINE_STRING(BGl_string3331z00zz__evaluatez00,
		BgL_bgl_string3331za700za7za7_3385za7, "bind-exit", 9);
	      DEFINE_STRING(BGl_string3251z00zz__evaluatez00,
		BgL_bgl_string3251za700za7za7_3386za7, "int", 3);
	      DEFINE_STRING(BGl_string3333z00zz__evaluatez00,
		BgL_bgl_string3333za700za7za7_3387za7, "unwind-protect", 14);
	      DEFINE_STRING(BGl_string3335z00zz__evaluatez00,
		BgL_bgl_string3335za700za7za7_3388za7, "with-handler", 12);
	      DEFINE_STRING(BGl_string3254z00zz__evaluatez00,
		BgL_bgl_string3254za700za7za7_3389za7, "integer?", 8);
	      DEFINE_STRING(BGl_string3337z00zz__evaluatez00,
		BgL_bgl_string3337za700za7za7_3390za7, "synchronize", 11);
	      DEFINE_STRING(BGl_string3256z00zz__evaluatez00,
		BgL_bgl_string3256za700za7za7_3391za7, "real", 4);
	      DEFINE_STRING(BGl_string3339z00zz__evaluatez00,
		BgL_bgl_string3339za700za7za7_3392za7, "prelock", 7);
	      DEFINE_STRING(BGl_string3258z00zz__evaluatez00,
		BgL_bgl_string3258za700za7za7_3393za7, "breal", 5);
	      DEFINE_STRING(BGl_string3341z00zz__evaluatez00,
		BgL_bgl_string3341za700za7za7_3394za7, "\\@", 2);
	      DEFINE_STRING(BGl_string3260z00zz__evaluatez00,
		BgL_bgl_string3260za700za7za7_3395za7, "real?", 5);
	      DEFINE_STRING(BGl_string3343z00zz__evaluatez00,
		BgL_bgl_string3343za700za7za7_3396za7, "free-pragma::obj", 16);
	      DEFINE_STRING(BGl_string3262z00zz__evaluatez00,
		BgL_bgl_string3262za700za7za7_3397za7, "bool", 4);
	      DEFINE_STRING(BGl_string3344z00zz__evaluatez00,
		BgL_bgl_string3344za700za7za7_3398za7, "free-pragma", 11);
	      DEFINE_STRING(BGl_string3345z00zz__evaluatez00,
		BgL_bgl_string3345za700za7za7_3399za7, "not supported in eval", 21);
	      DEFINE_STRING(BGl_string3264z00zz__evaluatez00,
		BgL_bgl_string3264za700za7za7_3400za7, "boolean?", 8);
	      DEFINE_STRING(BGl_string3346z00zz__evaluatez00,
		BgL_bgl_string3346za700za7za7_3401za7, "__evaluate", 10);
	      DEFINE_STRING(BGl_string3266z00zz__evaluatez00,
		BgL_bgl_string3266za700za7za7_3402za7, "struct", 6);
	      DEFINE_STRING(BGl_string3268z00zz__evaluatez00,
		BgL_bgl_string3268za700za7za7_3403za7, "struct?", 7);
	      DEFINE_STRING(BGl_string3270z00zz__evaluatez00,
		BgL_bgl_string3270za700za7za7_3404za7, "class", 5);
	      DEFINE_STRING(BGl_string3272z00zz__evaluatez00,
		BgL_bgl_string3272za700za7za7_3405za7, "class?", 6);
	      DEFINE_STRING(BGl_string3274z00zz__evaluatez00,
		BgL_bgl_string3274za700za7za7_3406za7, "string", 6);
	      DEFINE_STRING(BGl_string3276z00zz__evaluatez00,
		BgL_bgl_string3276za700za7za7_3407za7, "bstring", 7);
	      DEFINE_STRING(BGl_string3278z00zz__evaluatez00,
		BgL_bgl_string3278za700za7za7_3408za7, "string?", 7);
	      DEFINE_STRING(BGl_string3280z00zz__evaluatez00,
		BgL_bgl_string3280za700za7za7_3409za7, "o", 1);
	      DEFINE_STRING(BGl_string3282z00zz__evaluatez00,
		BgL_bgl_string3282za700za7za7_3410za7, "quote", 5);
	      DEFINE_STRING(BGl_string3284z00zz__evaluatez00,
		BgL_bgl_string3284za700za7za7_3411za7, "class-exists", 12);
	      DEFINE_STRING(BGl_string3286z00zz__evaluatez00,
		BgL_bgl_string3286za700za7za7_3412za7, "c", 1);
	      DEFINE_STRING(BGl_string3288z00zz__evaluatez00,
		BgL_bgl_string3288za700za7za7_3413za7, "isa?", 4);
	      DEFINE_STRING(BGl_string3290z00zz__evaluatez00,
		BgL_bgl_string3290za700za7za7_3414za7, "if", 2);
	      DEFINE_STRING(BGl_string3292z00zz__evaluatez00,
		BgL_bgl_string3292za700za7za7_3415za7, "let", 3);
	      DEFINE_STRING(BGl_string3294z00zz__evaluatez00,
		BgL_bgl_string3294za700za7za7_3416za7, "lambda", 6);
	      DEFINE_STRING(BGl_string3296z00zz__evaluatez00,
		BgL_bgl_string3296za700za7za7_3417za7, "bigloo-type-error/location", 26);
	      DEFINE_STRING(BGl_string3298z00zz__evaluatez00,
		BgL_bgl_string3298za700za7za7_3418za7, "bigloo-type-error", 17);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2evaluationzd2contextz12zd2envzc0zz__evaluatez00,
		BgL_bgl_za762setza7d2evaluat3419z00,
		BGl_z62setzd2evaluationzd2contextz12z70zz__evaluatez00, 0L, BUNSPEC, 1);
	extern obj_t BGl_errorzd2envzd2zz__errorz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evaluate2zd2restorezd2statez12zd2envzc0zz__evaluatez00,
		BgL_bgl_za762evaluate2za7d2r3420z00,
		BGl_z62evaluate2zd2restorezd2statez12z70zz__evaluatez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2evaluationzd2contextzd2envzd2zz__evaluatez00,
		BgL_bgl_za762getza7d2evaluat3421z00,
		BGl_z62getzd2evaluationzd2contextz62zz__evaluatez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evaluate2zd2envzd2zz__evaluatez00,
		BgL_bgl_za762evaluate2za762za73422za7, BGl_z62evaluate2z62zz__evaluatez00,
		0L, BUNSPEC, 3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol3291z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3293z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3295z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3297z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3299z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_keyword3338z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3301z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3305z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3307z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3227z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3310z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3312z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3314z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3316z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3235z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3318z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3237z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3239z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3320z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3240z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3322z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3242z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3324z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3244z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3326z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3246z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3328z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3248z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3330z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3250z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3332z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3252z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3334z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3253z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3336z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3255z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3257z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3259z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3340z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3342z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3261z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3263z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3265z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3267z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3269z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3271z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3273z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3275z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3277z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3279z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3281z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3283z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3285z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3287z00zz__evaluatez00));
		     ADD_ROOT((void *) (&BGl_symbol3289z00zz__evaluatez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__evaluatez00(long
		BgL_checksumz00_4970, char *BgL_fromz00_4971)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__evaluatez00))
				{
					BGl_requirezd2initializa7ationz75zz__evaluatez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__evaluatez00();
					BGl_cnstzd2initzd2zz__evaluatez00();
					BGl_importedzd2moduleszd2initz00zz__evaluatez00();
					return BGl_methodzd2initzd2zz__evaluatez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__evaluatez00()
	{
		{	/* Eval/evaluate.scm 15 */
			BGl_symbol3227z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3228z00zz__evaluatez00);
			BGl_symbol3235z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3236z00zz__evaluatez00);
			BGl_symbol3237z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3238z00zz__evaluatez00);
			BGl_symbol3239z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3226z00zz__evaluatez00);
			BGl_symbol3240z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3241z00zz__evaluatez00);
			BGl_symbol3242z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3243z00zz__evaluatez00);
			BGl_symbol3244z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3245z00zz__evaluatez00);
			BGl_symbol3246z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3247z00zz__evaluatez00);
			BGl_symbol3248z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3249z00zz__evaluatez00);
			BGl_symbol3250z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3251z00zz__evaluatez00);
			BGl_symbol3252z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3224z00zz__evaluatez00);
			BGl_symbol3253z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3254z00zz__evaluatez00);
			BGl_symbol3255z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3256z00zz__evaluatez00);
			BGl_symbol3257z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3258z00zz__evaluatez00);
			BGl_symbol3259z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3260z00zz__evaluatez00);
			BGl_symbol3261z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3262z00zz__evaluatez00);
			BGl_symbol3263z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3264z00zz__evaluatez00);
			BGl_symbol3265z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3266z00zz__evaluatez00);
			BGl_symbol3267z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3268z00zz__evaluatez00);
			BGl_symbol3269z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3270z00zz__evaluatez00);
			BGl_symbol3271z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3272z00zz__evaluatez00);
			BGl_symbol3273z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3274z00zz__evaluatez00);
			BGl_symbol3275z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3276z00zz__evaluatez00);
			BGl_symbol3277z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3278z00zz__evaluatez00);
			BGl_symbol3279z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3280z00zz__evaluatez00);
			BGl_symbol3281z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3282z00zz__evaluatez00);
			BGl_symbol3283z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3284z00zz__evaluatez00);
			BGl_symbol3285z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3286z00zz__evaluatez00);
			BGl_symbol3287z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3288z00zz__evaluatez00);
			BGl_symbol3289z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3290z00zz__evaluatez00);
			BGl_symbol3291z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3292z00zz__evaluatez00);
			BGl_symbol3293z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3294z00zz__evaluatez00);
			BGl_symbol3295z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3296z00zz__evaluatez00);
			BGl_symbol3297z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3298z00zz__evaluatez00);
			BGl_symbol3299z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3300z00zz__evaluatez00);
			BGl_symbol3301z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3302z00zz__evaluatez00);
			BGl_symbol3305z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3306z00zz__evaluatez00);
			BGl_symbol3307z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3308z00zz__evaluatez00);
			BGl_symbol3310z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3311z00zz__evaluatez00);
			BGl_symbol3312z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3313z00zz__evaluatez00);
			BGl_symbol3314z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3315z00zz__evaluatez00);
			BGl_symbol3316z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3317z00zz__evaluatez00);
			BGl_symbol3318z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3319z00zz__evaluatez00);
			BGl_symbol3320z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3321z00zz__evaluatez00);
			BGl_symbol3322z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3323z00zz__evaluatez00);
			BGl_symbol3324z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3325z00zz__evaluatez00);
			BGl_symbol3326z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3327z00zz__evaluatez00);
			BGl_symbol3328z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3329z00zz__evaluatez00);
			BGl_symbol3330z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3331z00zz__evaluatez00);
			BGl_symbol3332z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3333z00zz__evaluatez00);
			BGl_symbol3334z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3335z00zz__evaluatez00);
			BGl_symbol3336z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3337z00zz__evaluatez00);
			BGl_keyword3338z00zz__evaluatez00 =
				bstring_to_keyword(BGl_string3339z00zz__evaluatez00);
			BGl_symbol3340z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3341z00zz__evaluatez00);
			return (BGl_symbol3342z00zz__evaluatez00 =
				bstring_to_symbol(BGl_string3343z00zz__evaluatez00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__evaluatez00()
	{
		{	/* Eval/evaluate.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zz__evaluatez00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1137;

				BgL_headz00_1137 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_3141;
					obj_t BgL_tailz00_3142;

					BgL_prevz00_3141 = BgL_headz00_1137;
					BgL_tailz00_3142 = BgL_l1z00_1;
				BgL_loopz00_3140:
					if (PAIRP(BgL_tailz00_3142))
						{
							obj_t BgL_newzd2prevzd2_3148;

							BgL_newzd2prevzd2_3148 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_3142), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_3141, BgL_newzd2prevzd2_3148);
							{
								obj_t BgL_tailz00_5042;
								obj_t BgL_prevz00_5041;

								BgL_prevz00_5041 = BgL_newzd2prevzd2_3148;
								BgL_tailz00_5042 = CDR(BgL_tailz00_3142);
								BgL_tailz00_3142 = BgL_tailz00_5042;
								BgL_prevz00_3141 = BgL_prevz00_5041;
								goto BgL_loopz00_3140;
							}
						}
					else
						{
							BNIL;
						}
				}
				return CDR(BgL_headz00_1137);
			}
		}

	}



/* untype-ident */
	obj_t BGl_untypezd2identzd2zz__evaluatez00(obj_t BgL_idz00_3)
	{
		{	/* Eval/evaluate.scm 73 */
			{	/* Eval/evaluate.scm 74 */
				obj_t BgL_stringz00_1145;

				{	/* Eval/evaluate.scm 74 */
					obj_t BgL_res2843z00_3158;

					{	/* Eval/evaluate.scm 74 */
						obj_t BgL_arg2636z00_3157;

						BgL_arg2636z00_3157 = SYMBOL_TO_STRING(BgL_idz00_3);
						BgL_res2843z00_3158 =
							BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2636z00_3157);
					}
					BgL_stringz00_1145 = BgL_res2843z00_3158;
				}
				{	/* Eval/evaluate.scm 74 */
					long BgL_lenz00_1146;

					BgL_lenz00_1146 = STRING_LENGTH(BgL_stringz00_1145);
					{	/* Eval/evaluate.scm 75 */

						{
							long BgL_walkerz00_1148;

							BgL_walkerz00_1148 = ((long) 0);
						BgL_zc3z04anonymousza31335ze3z87_1149:
							if ((BgL_walkerz00_1148 == BgL_lenz00_1146))
								{	/* Eval/evaluate.scm 78 */
									return MAKE_YOUNG_PAIR(BgL_idz00_3, BFALSE);
								}
							else
								{	/* Eval/evaluate.scm 80 */
									bool_t BgL_test3426z00_5051;

									if (
										(STRING_REF(BgL_stringz00_1145,
												BgL_walkerz00_1148) == ((unsigned char) ':')))
										{	/* Eval/evaluate.scm 80 */
											if ((BgL_walkerz00_1148 < (BgL_lenz00_1146 - ((long) 1))))
												{	/* Eval/evaluate.scm 81 */
													BgL_test3426z00_5051 =
														(STRING_REF(BgL_stringz00_1145,
															(BgL_walkerz00_1148 + ((long) 1))) ==
														((unsigned char) ':'));
												}
											else
												{	/* Eval/evaluate.scm 81 */
													BgL_test3426z00_5051 = ((bool_t) 0);
												}
										}
									else
										{	/* Eval/evaluate.scm 80 */
											BgL_test3426z00_5051 = ((bool_t) 0);
										}
									if (BgL_test3426z00_5051)
										{	/* Eval/evaluate.scm 83 */
											obj_t BgL_arg1346z00_1160;
											obj_t BgL_arg1347z00_1161;

											BgL_arg1346z00_1160 =
												bstring_to_symbol(c_substring(BgL_stringz00_1145,
													((long) 0), BgL_walkerz00_1148));
											{	/* Eval/evaluate.scm 84 */
												obj_t BgL_arg1350z00_1163;

												{	/* Eval/evaluate.scm 84 */
													long BgL_arg1351z00_1164;

													BgL_arg1351z00_1164 =
														(BgL_walkerz00_1148 + ((long) 2));
													{	/* Ieee/string.scm 190 */
														long BgL_endz00_1167;

														BgL_endz00_1167 = STRING_LENGTH(BgL_stringz00_1145);
														{	/* Ieee/string.scm 190 */

															BgL_arg1350z00_1163 =
																BGl_substringz00zz__r4_strings_6_7z00
																(BgL_stringz00_1145, BgL_arg1351z00_1164,
																BgL_endz00_1167);
												}}}
												BgL_arg1347z00_1161 =
													bstring_to_symbol(BgL_arg1350z00_1163);
											}
											return
												MAKE_YOUNG_PAIR(BgL_arg1346z00_1160,
												BgL_arg1347z00_1161);
										}
									else
										{
											long BgL_walkerz00_5068;

											BgL_walkerz00_5068 = (BgL_walkerz00_1148 + ((long) 1));
											BgL_walkerz00_1148 = BgL_walkerz00_5068;
											goto BgL_zc3z04anonymousza31335ze3z87_1149;
										}
								}
						}
					}
				}
			}
		}

	}



/* get-evaluation-context */
	BGL_EXPORTED_DEF obj_t BGl_getzd2evaluationzd2contextz00zz__evaluatez00()
	{
		{	/* Eval/evaluate.scm 91 */
			{	/* Eval/evaluate.scm 92 */
				obj_t BgL_sz00_1176;

				BgL_sz00_1176 = BGl_findzd2statezd2zz__evaluate_compz00();
				{	/* Eval/evaluate.scm 93 */
					obj_t BgL_bpz00_1177;

					BgL_bpz00_1177 = VECTOR_REF(((obj_t) BgL_sz00_1176), ((long) 0));
					{	/* Eval/evaluate.scm 94 */
						obj_t BgL_rz00_1178;

						BgL_rz00_1178 =
							make_vector(
							(long) CINT(BgL_bpz00_1177), BGl_string3221z00zz__evaluatez00);
						{
							long BgL_iz00_3207;

							BgL_iz00_3207 = ((long) 0);
						BgL_recz00_3206:
							if ((BgL_iz00_3207 < (long) CINT(BgL_bpz00_1177)))
								{	/* Eval/evaluate.scm 96 */
									{	/* Eval/evaluate.scm 97 */
										obj_t BgL_arg1360z00_3212;

										BgL_arg1360z00_3212 =
											VECTOR_REF(((obj_t) BgL_sz00_1176), BgL_iz00_3207);
										VECTOR_SET(BgL_rz00_1178, BgL_iz00_3207,
											BgL_arg1360z00_3212);
									}
									{
										long BgL_iz00_5081;

										BgL_iz00_5081 = (BgL_iz00_3207 + ((long) 1));
										BgL_iz00_3207 = BgL_iz00_5081;
										goto BgL_recz00_3206;
									}
								}
							else
								{	/* Eval/evaluate.scm 96 */
									((bool_t) 0);
								}
						}
						return BgL_rz00_1178;
					}
				}
			}
		}

	}



/* &get-evaluation-context */
	obj_t BGl_z62getzd2evaluationzd2contextz62zz__evaluatez00(obj_t
		BgL_envz00_4927)
	{
		{	/* Eval/evaluate.scm 91 */
			return BGl_getzd2evaluationzd2contextz00zz__evaluatez00();
		}

	}



/* set-evaluation-context! */
	BGL_EXPORTED_DEF obj_t
		BGl_setzd2evaluationzd2contextz12z12zz__evaluatez00(obj_t BgL_vz00_4)
	{
		{	/* Eval/evaluate.scm 104 */
			{	/* Eval/evaluate.scm 105 */
				obj_t BgL_sz00_1186;

				BgL_sz00_1186 = BGl_findzd2statezd2zz__evaluate_compz00();
				{	/* Eval/evaluate.scm 106 */
					obj_t BgL_bpz00_1187;

					BgL_bpz00_1187 = VECTOR_REF(((obj_t) BgL_vz00_4), ((long) 0));
					{
						long BgL_iz00_3231;

						{	/* Eval/evaluate.scm 107 */
							bool_t BgL_tmpz00_5087;

							BgL_iz00_3231 = ((long) 0);
						BgL_recz00_3230:
							if ((BgL_iz00_3231 < (long) CINT(BgL_bpz00_1187)))
								{	/* Eval/evaluate.scm 108 */
									{	/* Eval/evaluate.scm 109 */
										obj_t BgL_arg1364z00_3236;

										BgL_arg1364z00_3236 =
											VECTOR_REF(((obj_t) BgL_vz00_4), BgL_iz00_3231);
										VECTOR_SET(
											((obj_t) BgL_sz00_1186), BgL_iz00_3231,
											BgL_arg1364z00_3236);
									}
									{
										long BgL_iz00_5095;

										BgL_iz00_5095 = (BgL_iz00_3231 + ((long) 1));
										BgL_iz00_3231 = BgL_iz00_5095;
										goto BgL_recz00_3230;
									}
								}
							else
								{	/* Eval/evaluate.scm 108 */
									BgL_tmpz00_5087 = ((bool_t) 0);
								}
							return BBOOL(BgL_tmpz00_5087);
						}
					}
				}
			}
		}

	}



/* &set-evaluation-context! */
	obj_t BGl_z62setzd2evaluationzd2contextz12z70zz__evaluatez00(obj_t
		BgL_envz00_4928, obj_t BgL_vz00_4929)
	{
		{	/* Eval/evaluate.scm 104 */
			return BGl_setzd2evaluationzd2contextz12z12zz__evaluatez00(BgL_vz00_4929);
		}

	}



/* evaluate2-restore-bp! */
	BGL_EXPORTED_DEF obj_t BGl_evaluate2zd2restorezd2bpz12z12zz__evaluatez00(int
		BgL_bpz00_5)
	{
		{	/* Eval/evaluate.scm 115 */
			{	/* Eval/evaluate.scm 116 */
				obj_t BgL_sz00_3244;

				{	/* Eval/evaluate.scm 116 */
					obj_t BgL_tmpz00_5099;

					BgL_tmpz00_5099 = BGL_CURRENT_DYNAMIC_ENV();
					BgL_sz00_3244 = BGL_ENV_EVSTATE(BgL_tmpz00_5099);
				}
				return
					VECTOR_SET(((obj_t) BgL_sz00_3244), ((long) 0), BINT(BgL_bpz00_5));
		}}

	}



/* &evaluate2-restore-bp! */
	obj_t BGl_z62evaluate2zd2restorezd2bpz12z70zz__evaluatez00(obj_t
		BgL_envz00_4930, obj_t BgL_bpz00_4931)
	{
		{	/* Eval/evaluate.scm 115 */
			{	/* Eval/evaluate.scm 116 */
				int BgL_auxz00_5105;

				{	/* Eval/evaluate.scm 116 */
					obj_t BgL_tmpz00_5106;

					if (INTEGERP(BgL_bpz00_4931))
						{	/* Eval/evaluate.scm 116 */
							BgL_tmpz00_5106 = BgL_bpz00_4931;
						}
					else
						{
							obj_t BgL_auxz00_5109;

							BgL_auxz00_5109 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3222z00zz__evaluatez00, BINT(((long) 3890)),
								BGl_string3223z00zz__evaluatez00,
								BGl_string3224z00zz__evaluatez00, BgL_bpz00_4931);
							FAILURE(BgL_auxz00_5109, BFALSE, BFALSE);
						}
					BgL_auxz00_5105 = CINT(BgL_tmpz00_5106);
				}
				return
					BGl_evaluate2zd2restorezd2bpz12z12zz__evaluatez00(BgL_auxz00_5105);
			}
		}

	}



/* evaluate2-restore-state! */
	BGL_EXPORTED_DEF obj_t
		BGl_evaluate2zd2restorezd2statez12z12zz__evaluatez00(obj_t BgL_statez00_6)
	{
		{	/* Eval/evaluate.scm 122 */
			{	/* Eval/evaluate.scm 124 */
				obj_t BgL_tmpz00_5115;

				BgL_tmpz00_5115 = BGL_CURRENT_DYNAMIC_ENV();
				return BGL_ENV_EVSTATE_SET(BgL_tmpz00_5115, BgL_statez00_6);
			}
		}

	}



/* &evaluate2-restore-state! */
	obj_t BGl_z62evaluate2zd2restorezd2statez12z70zz__evaluatez00(obj_t
		BgL_envz00_4932, obj_t BgL_statez00_4933)
	{
		{	/* Eval/evaluate.scm 122 */
			{	/* Eval/evaluate.scm 123 */
				obj_t BgL_auxz00_5118;

				if (VECTORP(BgL_statez00_4933))
					{	/* Eval/evaluate.scm 123 */
						BgL_auxz00_5118 = BgL_statez00_4933;
					}
				else
					{
						obj_t BgL_auxz00_5121;

						BgL_auxz00_5121 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3222z00zz__evaluatez00,
							BINT(((long) 4240)), BGl_string3225z00zz__evaluatez00,
							BGl_string3226z00zz__evaluatez00, BgL_statez00_4933);
						FAILURE(BgL_auxz00_5121, BFALSE, BFALSE);
					}
				return
					BGl_evaluate2zd2restorezd2statez12z12zz__evaluatez00(BgL_auxz00_5118);
			}
		}

	}



/* evaluate2 */
	BGL_EXPORTED_DEF obj_t BGl_evaluate2z00zz__evaluatez00(obj_t BgL_sexpz00_7,
		obj_t BgL_envz00_8, obj_t BgL_locz00_9)
	{
		{	/* Eval/evaluate.scm 129 */
			{	/* Eval/evaluate.scm 130 */
				BgL_ev_exprz00_bglt BgL_astz00_1198;

				{	/* Eval/evaluate.scm 130 */
					obj_t BgL_arg1370z00_1208;

					BgL_arg1370z00_1208 =
						BGl_convz00zz__evaluatez00(BgL_sexpz00_7, BNIL, BgL_envz00_8,
						BFALSE, BGl_symbol3227z00zz__evaluatez00, BgL_locz00_9,
						((bool_t) 1));
					BgL_astz00_1198 =
						BGl_extractzd2loopszd2zz__evaluate_fsiza7eza7(((BgL_ev_exprz00_bglt)
							BgL_arg1370z00_1208));
				}
				BGl_analysezd2varszd2zz__evaluate_avarz00(BgL_astz00_1198);
				{	/* Eval/evaluate.scm 132 */
					int BgL_nz00_1199;

					BgL_nz00_1199 =
						BGl_framezd2siza7ez75zz__evaluate_fsiza7eza7(BgL_astz00_1198);
					{	/* Eval/evaluate.scm 133 */
						obj_t BgL_fz00_1200;

						BgL_fz00_1200 = BGl_compilez00zz__evaluate_compz00(BgL_astz00_1198);
						{	/* Eval/evaluate.scm 134 */
							obj_t BgL_sz00_1201;

							BgL_sz00_1201 = BGl_findzd2statezd2zz__evaluate_compz00();
							{	/* Eval/evaluate.scm 135 */
								obj_t BgL_bpz00_1202;

								BgL_bpz00_1202 =
									VECTOR_REF(((obj_t) BgL_sz00_1201), ((long) 0));
								{	/* Eval/evaluate.scm 136 */
									obj_t BgL_exitd1065z00_1203;

									BgL_exitd1065z00_1203 = BGL_EXITD_TOP_AS_OBJ();
									{	/* Eval/evaluate.scm 138 */
										obj_t BgL_zc3z04anonymousza31368ze3z87_4934;

										BgL_zc3z04anonymousza31368ze3z87_4934 =
											MAKE_FX_PROCEDURE
											(BGl_z62zc3z04anonymousza31368ze3ze5zz__evaluatez00,
											(int) (((long) 0)), (int) (((long) 2)));
										PROCEDURE_SET(BgL_zc3z04anonymousza31368ze3z87_4934,
											(int) (((long) 0)), BgL_sz00_1201);
										PROCEDURE_SET(BgL_zc3z04anonymousza31368ze3z87_4934,
											(int) (((long) 1)), BgL_bpz00_1202);
										BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
											(BgL_exitd1065z00_1203,
											BgL_zc3z04anonymousza31368ze3z87_4934);
										{	/* Eval/evaluate.scm 137 */
											obj_t BgL_tmp1067z00_1205;

											BgL_tmp1067z00_1205 =
												PROCEDURE_ENTRY(BgL_fz00_1200) (BgL_fz00_1200,
												BgL_sz00_1201, BEOA);
											BGl_exitdzd2popzd2protectz12z12zz__bexitz00
												(BgL_exitd1065z00_1203);
											VECTOR_SET(((obj_t) BgL_sz00_1201), ((long) 0),
												BgL_bpz00_1202);
											return BgL_tmp1067z00_1205;
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



/* &evaluate2 */
	obj_t BGl_z62evaluate2z62zz__evaluatez00(obj_t BgL_envz00_4935,
		obj_t BgL_sexpz00_4936, obj_t BgL_envz00_4937, obj_t BgL_locz00_4938)
	{
		{	/* Eval/evaluate.scm 129 */
			return
				BGl_evaluate2z00zz__evaluatez00(BgL_sexpz00_4936, BgL_envz00_4937,
				BgL_locz00_4938);
		}

	}



/* &<@anonymous:1368> */
	obj_t BGl_z62zc3z04anonymousza31368ze3ze5zz__evaluatez00(obj_t
		BgL_envz00_4939)
	{
		{	/* Eval/evaluate.scm 136 */
			{	/* Eval/evaluate.scm 138 */
				obj_t BgL_sz00_4940;
				obj_t BgL_bpz00_4941;

				BgL_sz00_4940 = PROCEDURE_REF(BgL_envz00_4939, (int) (((long) 0)));
				BgL_bpz00_4941 = PROCEDURE_REF(BgL_envz00_4939, (int) (((long) 1)));
				return VECTOR_SET(((obj_t) BgL_sz00_4940), ((long) 0), BgL_bpz00_4941);
		}}

	}



/* get-location */
	obj_t BGl_getzd2locationzd2zz__evaluatez00(obj_t BgL_expz00_10,
		obj_t BgL_locz00_11)
	{
		{	/* Eval/evaluate.scm 143 */
			{	/* Eval/evaluate.scm 144 */
				obj_t BgL__ortest_1068z00_3253;

				BgL__ortest_1068z00_3253 =
					BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_expz00_10);
				if (CBOOL(BgL__ortest_1068z00_3253))
					{	/* Eval/evaluate.scm 144 */
						return BgL__ortest_1068z00_3253;
					}
				else
					{	/* Eval/evaluate.scm 144 */
						return BgL_locz00_11;
					}
			}
		}

	}



/* conv-var */
	obj_t BGl_convzd2varzd2zz__evaluatez00(obj_t BgL_vz00_18,
		obj_t BgL_localsz00_19)
	{
		{	/* Eval/evaluate.scm 163 */
			{
				obj_t BgL_lz00_1213;

				BgL_lz00_1213 = BgL_localsz00_19;
			BgL_zc3z04anonymousza31371ze3z87_1214:
				if (NULLP(BgL_lz00_1213))
					{	/* Eval/evaluate.scm 165 */
						return BFALSE;
					}
				else
					{	/* Eval/evaluate.scm 167 */
						obj_t BgL_rvz00_1216;

						BgL_rvz00_1216 = CAR(((obj_t) BgL_lz00_1213));
						if (
							(BgL_vz00_18 ==
								(((BgL_ev_varz00_bglt) COBJECT(
											((BgL_ev_varz00_bglt) BgL_rvz00_1216)))->BgL_namez00)))
							{	/* Eval/evaluate.scm 169 */
								return BgL_rvz00_1216;
							}
						else
							{
								obj_t BgL_lz00_5169;

								BgL_lz00_5169 = CDR(((obj_t) BgL_lz00_1213));
								BgL_lz00_1213 = BgL_lz00_5169;
								goto BgL_zc3z04anonymousza31371ze3z87_1214;
							}
					}
			}
		}

	}



/* conv-begin */
	obj_t BGl_convzd2beginzd2zz__evaluatez00(obj_t BgL_lz00_20,
		obj_t BgL_localsz00_21, obj_t BgL_globalsz00_22, obj_t BgL_tailzf3zf3_23,
		obj_t BgL_wherez00_24, obj_t BgL_locz00_25, bool_t BgL_topzf3zf3_26)
	{
		{	/* Eval/evaluate.scm 176 */
			{	/* Eval/evaluate.scm 177 */
				obj_t BgL_locz00_1223;

				{	/* Eval/evaluate.scm 144 */
					obj_t BgL__ortest_1068z00_3259;

					BgL__ortest_1068z00_3259 =
						BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_lz00_20);
					if (CBOOL(BgL__ortest_1068z00_3259))
						{	/* Eval/evaluate.scm 144 */
							BgL_locz00_1223 = BgL__ortest_1068z00_3259;
						}
					else
						{	/* Eval/evaluate.scm 144 */
							BgL_locz00_1223 = BgL_locz00_25;
						}
				}
				{
					obj_t BgL_e1z00_1227;
					obj_t BgL_rz00_1228;

					if (NULLP(BgL_lz00_20))
						{
							BgL_ev_littz00_bglt BgL_auxz00_5177;

							{	/* Eval/evaluate.scm 180 */
								BgL_ev_littz00_bglt BgL_new1073z00_1240;

								{	/* Eval/evaluate.scm 181 */
									BgL_ev_littz00_bglt BgL_new1072z00_1241;

									BgL_new1072z00_1241 =
										((BgL_ev_littz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_ev_littz00_bgl))));
									{	/* Eval/evaluate.scm 181 */
										long BgL_arg1385z00_1242;

										{	/* Eval/evaluate.scm 181 */
											long BgL_res2866z00_3261;

											BgL_res2866z00_3261 =
												BGL_CLASS_INDEX(BGl_ev_littz00zz__evaluate_typesz00);
											BgL_arg1385z00_1242 = BgL_res2866z00_3261;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1072z00_1241),
											BgL_arg1385z00_1242);
									}
									BgL_new1073z00_1240 = BgL_new1072z00_1241;
								}
								((((BgL_ev_littz00_bglt) COBJECT(BgL_new1073z00_1240))->
										BgL_valuez00) = ((obj_t) BUNSPEC), BUNSPEC);
								BgL_auxz00_5177 = BgL_new1073z00_1240;
							}
							return ((obj_t) BgL_auxz00_5177);
						}
					else
						{	/* Eval/evaluate.scm 178 */
							if (PAIRP(BgL_lz00_20))
								{	/* Eval/evaluate.scm 178 */
									if (NULLP(CDR(BgL_lz00_20)))
										{	/* Eval/evaluate.scm 178 */
											obj_t BgL_arg1381z00_1236;

											BgL_arg1381z00_1236 = CAR(BgL_lz00_20);
											{	/* Eval/evaluate.scm 183 */
												obj_t BgL_arg1386z00_3276;

												{	/* Eval/evaluate.scm 144 */
													obj_t BgL__ortest_1068z00_3277;

													BgL__ortest_1068z00_3277 =
														BGl_getzd2sourcezd2locationz00zz__readerz00
														(BgL_arg1381z00_1236);
													if (CBOOL(BgL__ortest_1068z00_3277))
														{	/* Eval/evaluate.scm 144 */
															BgL_arg1386z00_3276 = BgL__ortest_1068z00_3277;
														}
													else
														{	/* Eval/evaluate.scm 144 */
															BgL_arg1386z00_3276 = BgL_locz00_1223;
														}
												}
												return
													BGl_convz00zz__evaluatez00(BgL_arg1381z00_1236,
													BgL_localsz00_21, BgL_globalsz00_22,
													BgL_tailzf3zf3_23, BgL_wherez00_24,
													BgL_arg1386z00_3276, BgL_topzf3zf3_26);
											}
										}
									else
										{	/* Eval/evaluate.scm 178 */
											obj_t BgL_arg1382z00_1237;
											obj_t BgL_arg1383z00_1238;

											BgL_arg1382z00_1237 = CAR(BgL_lz00_20);
											BgL_arg1383z00_1238 = CDR(BgL_lz00_20);
											{
												BgL_ev_prog2z00_bglt BgL_auxz00_5196;

												BgL_e1z00_1227 = BgL_arg1382z00_1237;
												BgL_rz00_1228 = BgL_arg1383z00_1238;
												{	/* Eval/evaluate.scm 185 */
													BgL_ev_prog2z00_bglt BgL_new1075z00_1244;

													{	/* Eval/evaluate.scm 186 */
														BgL_ev_prog2z00_bglt BgL_new1074z00_1246;

														BgL_new1074z00_1246 =
															((BgL_ev_prog2z00_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_ev_prog2z00_bgl))));
														{	/* Eval/evaluate.scm 186 */
															long BgL_arg1388z00_1247;

															{	/* Eval/evaluate.scm 186 */
																long BgL_res2867z00_3267;

																BgL_res2867z00_3267 =
																	BGL_CLASS_INDEX
																	(BGl_ev_prog2z00zz__evaluate_typesz00);
																BgL_arg1388z00_1247 = BgL_res2867z00_3267;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1074z00_1246),
																BgL_arg1388z00_1247);
														}
														BgL_new1075z00_1244 = BgL_new1074z00_1246;
													}
													{
														BgL_ev_exprz00_bglt BgL_auxz00_5201;

														{	/* Eval/evaluate.scm 186 */
															obj_t BgL_arg1387z00_1245;

															{	/* Eval/evaluate.scm 144 */
																obj_t BgL__ortest_1068z00_3270;

																BgL__ortest_1068z00_3270 =
																	BGl_getzd2sourcezd2locationz00zz__readerz00
																	(BgL_e1z00_1227);
																if (CBOOL(BgL__ortest_1068z00_3270))
																	{	/* Eval/evaluate.scm 144 */
																		BgL_arg1387z00_1245 =
																			BgL__ortest_1068z00_3270;
																	}
																else
																	{	/* Eval/evaluate.scm 144 */
																		BgL_arg1387z00_1245 = BgL_locz00_1223;
																	}
															}
															BgL_auxz00_5201 =
																((BgL_ev_exprz00_bglt)
																BGl_convz00zz__evaluatez00(BgL_e1z00_1227,
																	BgL_localsz00_21, BgL_globalsz00_22, BFALSE,
																	BgL_wherez00_24, BgL_arg1387z00_1245,
																	BgL_topzf3zf3_26));
														}
														((((BgL_ev_prog2z00_bglt)
																	COBJECT(BgL_new1075z00_1244))->BgL_e1z00) =
															((BgL_ev_exprz00_bglt) BgL_auxz00_5201), BUNSPEC);
													}
													((((BgL_ev_prog2z00_bglt)
																COBJECT(BgL_new1075z00_1244))->BgL_e2z00) =
														((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt)
																BGl_convzd2beginzd2zz__evaluatez00
																(BgL_rz00_1228, BgL_localsz00_21,
																	BgL_globalsz00_22, BgL_tailzf3zf3_23,
																	BgL_wherez00_24, BgL_locz00_1223,
																	BgL_topzf3zf3_26))), BUNSPEC);
													BgL_auxz00_5196 = BgL_new1075z00_1244;
												}
												return ((obj_t) BgL_auxz00_5196);
											}
										}
								}
							else
								{	/* Eval/evaluate.scm 178 */
									return
										BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_1223,
										BGl_string3229z00zz__evaluatez00,
										BGl_string3230z00zz__evaluatez00, BgL_lz00_20);
								}
						}
				}
			}
		}

	}



/* conv-field-ref */
	obj_t BGl_convzd2fieldzd2refz00zz__evaluatez00(obj_t BgL_ez00_30,
		obj_t BgL_localsz00_31, obj_t BgL_globalsz00_32, obj_t BgL_tailzf3zf3_33,
		obj_t BgL_wherez00_34, obj_t BgL_locz00_35, bool_t BgL_topzf3zf3_36)
	{
		{	/* Eval/evaluate.scm 203 */
			{	/* Eval/evaluate.scm 204 */
				obj_t BgL_lz00_1252;

				BgL_lz00_1252 = CDR(((obj_t) BgL_ez00_30));
				{	/* Eval/evaluate.scm 204 */
					obj_t BgL_vz00_1253;

					BgL_vz00_1253 =
						BGl_convzd2varzd2zz__evaluatez00(CAR(
							((obj_t) BgL_lz00_1252)), BgL_localsz00_31);
					{	/* Eval/evaluate.scm 205 */

						if (BGl_isazf3zf3zz__objectz00(BgL_vz00_1253,
								BGl_ev_varz00zz__evaluate_typesz00))
							{	/* Eval/evaluate.scm 208 */
								obj_t BgL_g1079z00_1256;
								obj_t BgL_g1080z00_1257;

								{	/* Eval/evaluate.scm 209 */
									obj_t BgL_arg1407z00_1280;

									BgL_arg1407z00_1280 =
										(((BgL_ev_varz00_bglt) COBJECT(
												((BgL_ev_varz00_bglt) BgL_vz00_1253)))->BgL_typez00);
									BgL_g1079z00_1256 =
										BGl_classzd2existszd2zz__objectz00(BgL_arg1407z00_1280);
								}
								BgL_g1080z00_1257 = CDR(((obj_t) BgL_lz00_1252));
								{
									BgL_ev_exprz00_bglt BgL_nodez00_1259;
									obj_t BgL_klassz00_1260;
									obj_t BgL_fieldsz00_1261;

									BgL_nodez00_1259 =
										((BgL_ev_exprz00_bglt)
										((BgL_ev_varz00_bglt) BgL_vz00_1253));
									BgL_klassz00_1260 = BgL_g1079z00_1256;
									BgL_fieldsz00_1261 = BgL_g1080z00_1257;
								BgL_zc3z04anonymousza31392ze3z87_1262:
									if (NULLP(BgL_fieldsz00_1261))
										{	/* Eval/evaluate.scm 212 */
											return ((obj_t) BgL_nodez00_1259);
										}
									else
										{	/* Eval/evaluate.scm 212 */
											if (BGl_classzf3zf3zz__objectz00(BgL_klassz00_1260))
												{	/* Eval/evaluate.scm 215 */
													obj_t BgL_fieldz00_1265;

													{	/* Eval/evaluate.scm 215 */
														obj_t BgL_arg1405z00_1276;

														BgL_arg1405z00_1276 =
															CAR(((obj_t) BgL_fieldsz00_1261));
														BgL_fieldz00_1265 =
															BGl_findzd2classzd2fieldz00zz__objectz00
															(BgL_klassz00_1260, BgL_arg1405z00_1276);
													}
													if (BGl_classzd2fieldzf3z21zz__objectz00
														(BgL_fieldz00_1265))
														{	/* Eval/evaluate.scm 217 */
															BgL_ev_appz00_bglt BgL_nodez00_1267;

															{	/* Eval/evaluate.scm 271 */
																obj_t BgL_getz00_3293;

																BgL_getz00_3293 =
																	BGl_classzd2fieldzd2accessorz00zz__objectz00
																	(BgL_fieldz00_1265);
																{	/* Eval/evaluate.scm 272 */
																	BgL_ev_appz00_bglt BgL_new1087z00_3294;

																	{	/* Eval/evaluate.scm 273 */
																		BgL_ev_appz00_bglt BgL_new1086z00_3295;

																		BgL_new1086z00_3295 =
																			((BgL_ev_appz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_ev_appz00_bgl))));
																		{	/* Eval/evaluate.scm 273 */
																			long BgL_arg1440z00_3296;

																			{	/* Eval/evaluate.scm 273 */
																				long BgL_res2873z00_3302;

																				BgL_res2873z00_3302 =
																					BGL_CLASS_INDEX
																					(BGl_ev_appz00zz__evaluate_typesz00);
																				BgL_arg1440z00_3296 =
																					BgL_res2873z00_3302;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1086z00_3295),
																				BgL_arg1440z00_3296);
																		}
																		BgL_new1087z00_3294 = BgL_new1086z00_3295;
																	}
																	((((BgL_ev_appz00_bglt)
																				COBJECT(BgL_new1087z00_3294))->
																			BgL_locz00) =
																		((obj_t) BgL_locz00_35), BUNSPEC);
																	{
																		BgL_ev_exprz00_bglt BgL_auxz00_5241;

																		{	/* Eval/evaluate.scm 274 */
																			BgL_ev_littz00_bglt BgL_new1089z00_3297;

																			{	/* Eval/evaluate.scm 274 */
																				BgL_ev_littz00_bglt BgL_new1088z00_3298;

																				BgL_new1088z00_3298 =
																					((BgL_ev_littz00_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_ev_littz00_bgl))));
																				{	/* Eval/evaluate.scm 274 */
																					long BgL_arg1438z00_3299;

																					{	/* Eval/evaluate.scm 274 */
																						long BgL_res2874z00_3306;

																						{	/* Eval/evaluate.scm 274 */
																							obj_t BgL_classz00_3305;

																							BgL_classz00_3305 =
																								BGl_ev_littz00zz__evaluate_typesz00;
																							BgL_res2874z00_3306 =
																								BGL_CLASS_INDEX
																								(BgL_classz00_3305);
																						}
																						BgL_arg1438z00_3299 =
																							BgL_res2874z00_3306;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							BgL_new1088z00_3298),
																						BgL_arg1438z00_3299);
																				}
																				BgL_new1089z00_3297 =
																					BgL_new1088z00_3298;
																			}
																			((((BgL_ev_littz00_bglt)
																						COBJECT(BgL_new1089z00_3297))->
																					BgL_valuez00) =
																				((obj_t) BgL_getz00_3293), BUNSPEC);
																			BgL_auxz00_5241 =
																				((BgL_ev_exprz00_bglt)
																				BgL_new1089z00_3297);
																		}
																		((((BgL_ev_appz00_bglt)
																					COBJECT(BgL_new1087z00_3294))->
																				BgL_funz00) =
																			((BgL_ev_exprz00_bglt) BgL_auxz00_5241),
																			BUNSPEC);
																	}
																	{
																		obj_t BgL_auxz00_5249;

																		{	/* Eval/evaluate.scm 275 */
																			obj_t BgL_list1439z00_3300;

																			BgL_list1439z00_3300 =
																				MAKE_YOUNG_PAIR(
																				((obj_t) BgL_nodez00_1259), BNIL);
																			BgL_auxz00_5249 = BgL_list1439z00_3300;
																		}
																		((((BgL_ev_appz00_bglt)
																					COBJECT(BgL_new1087z00_3294))->
																				BgL_argsz00) =
																			((obj_t) BgL_auxz00_5249), BUNSPEC);
																	}
																	((((BgL_ev_appz00_bglt)
																				COBJECT(BgL_new1087z00_3294))->
																			BgL_tailzf3zf3) =
																		((obj_t) BgL_tailzf3zf3_33), BUNSPEC);
																	BgL_nodez00_1267 = BgL_new1087z00_3294;
															}}
															{	/* Eval/evaluate.scm 220 */
																obj_t BgL_arg1396z00_1268;
																obj_t BgL_arg1397z00_1269;

																BgL_arg1396z00_1268 =
																	BGl_classzd2fieldzd2typez00zz__objectz00
																	(BgL_fieldz00_1265);
																BgL_arg1397z00_1269 =
																	CDR(((obj_t) BgL_fieldsz00_1261));
																{
																	obj_t BgL_fieldsz00_5260;
																	obj_t BgL_klassz00_5259;
																	BgL_ev_exprz00_bglt BgL_nodez00_5257;

																	BgL_nodez00_5257 =
																		((BgL_ev_exprz00_bglt) BgL_nodez00_1267);
																	BgL_klassz00_5259 = BgL_arg1396z00_1268;
																	BgL_fieldsz00_5260 = BgL_arg1397z00_1269;
																	BgL_fieldsz00_1261 = BgL_fieldsz00_5260;
																	BgL_klassz00_1260 = BgL_klassz00_5259;
																	BgL_nodez00_1259 = BgL_nodez00_5257;
																	goto BgL_zc3z04anonymousza31392ze3z87_1262;
																}
															}
														}
													else
														{	/* Eval/evaluate.scm 222 */
															obj_t BgL_arg1398z00_1270;
															obj_t BgL_arg1399z00_1271;

															BgL_arg1398z00_1270 =
																(((BgL_ev_varz00_bglt) COBJECT(
																		((BgL_ev_varz00_bglt) BgL_vz00_1253)))->
																BgL_typez00);
															{	/* Eval/evaluate.scm 223 */
																obj_t BgL_arg1400z00_1272;
																obj_t BgL_arg1401z00_1273;

																BgL_arg1400z00_1272 =
																	(((BgL_ev_varz00_bglt) COBJECT(
																			((BgL_ev_varz00_bglt) BgL_vz00_1253)))->
																	BgL_typez00);
																BgL_arg1401z00_1273 =
																	CAR(((obj_t) BgL_fieldsz00_1261));
																{	/* Eval/evaluate.scm 223 */
																	obj_t BgL_list1402z00_1274;

																	{	/* Eval/evaluate.scm 223 */
																		obj_t BgL_arg1404z00_1275;

																		BgL_arg1404z00_1275 =
																			MAKE_YOUNG_PAIR(BgL_arg1401z00_1273,
																			BNIL);
																		BgL_list1402z00_1274 =
																			MAKE_YOUNG_PAIR(BgL_arg1400z00_1272,
																			BgL_arg1404z00_1275);
																	}
																	BgL_arg1399z00_1271 =
																		BGl_formatz00zz__r4_output_6_10_3z00
																		(BGl_string3231z00zz__evaluatez00,
																		BgL_list1402z00_1274);
																}
															}
															return
																BGl_evcompilezd2errorzd2zz__evcompilez00
																(BgL_locz00_35, BgL_arg1398z00_1270,
																BgL_arg1399z00_1271, BgL_ez00_30);
														}
												}
											else
												{	/* Eval/evaluate.scm 226 */
													obj_t BgL_arg1406z00_1277;

													{	/* Eval/evaluate.scm 226 */
														obj_t BgL__ortest_1081z00_1278;

														BgL__ortest_1081z00_1278 =
															(((BgL_ev_varz00_bglt) COBJECT(
																	((BgL_ev_varz00_bglt) BgL_vz00_1253)))->
															BgL_typez00);
														if (CBOOL(BgL__ortest_1081z00_1278))
															{	/* Eval/evaluate.scm 226 */
																BgL_arg1406z00_1277 = BgL__ortest_1081z00_1278;
															}
														else
															{	/* Eval/evaluate.scm 226 */
																BgL_arg1406z00_1277 =
																	(((BgL_ev_varz00_bglt) COBJECT(
																			((BgL_ev_varz00_bglt) BgL_vz00_1253)))->
																	BgL_namez00);
															}
													}
													return
														BGl_evcompilezd2errorzd2zz__evcompilez00
														(BgL_locz00_35, BgL_arg1406z00_1277,
														BGl_string3232z00zz__evaluatez00, BgL_ez00_30);
												}
										}
								}
							}
						else
							{	/* Eval/evaluate.scm 228 */
								obj_t BgL_arg1409z00_1281;

								{	/* Eval/evaluate.scm 228 */
									obj_t BgL_pairz00_3315;

									BgL_pairz00_3315 = CDR(((obj_t) BgL_ez00_30));
									BgL_arg1409z00_1281 = CAR(BgL_pairz00_3315);
								}
								return
									BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_35,
									BgL_arg1409z00_1281, BGl_string3233z00zz__evaluatez00,
									BgL_ez00_30);
							}
					}
				}
			}
		}

	}



/* conv-field-set */
	obj_t BGl_convzd2fieldzd2setz00zz__evaluatez00(obj_t BgL_lz00_37,
		obj_t BgL_e2z00_38, obj_t BgL_ez00_39, obj_t BgL_localsz00_40,
		obj_t BgL_globalsz00_41, obj_t BgL_tailzf3zf3_42, obj_t BgL_wherez00_43,
		obj_t BgL_locz00_44, bool_t BgL_topzf3zf3_45)
	{
		{	/* Eval/evaluate.scm 233 */
			{	/* Eval/evaluate.scm 234 */
				obj_t BgL_vz00_1283;

				BgL_vz00_1283 =
					BGl_convzd2varzd2zz__evaluatez00(CAR(BgL_lz00_37), BgL_localsz00_40);
				{	/* Eval/evaluate.scm 234 */
					obj_t BgL_e2z00_1284;

					BgL_e2z00_1284 =
						BGl_convz00zz__evaluatez00(BgL_e2z00_38, BgL_localsz00_40,
						BgL_globalsz00_41, BFALSE, BgL_wherez00_43, BgL_locz00_44,
						((bool_t) 0));
					{	/* Eval/evaluate.scm 235 */

						if (BGl_isazf3zf3zz__objectz00(BgL_vz00_1283,
								BGl_ev_varz00zz__evaluate_typesz00))
							{	/* Eval/evaluate.scm 238 */
								obj_t BgL_g1083z00_1287;
								obj_t BgL_g1084z00_1288;

								{	/* Eval/evaluate.scm 239 */
									obj_t BgL_arg1435z00_1319;

									BgL_arg1435z00_1319 =
										(((BgL_ev_varz00_bglt) COBJECT(
												((BgL_ev_varz00_bglt) BgL_vz00_1283)))->BgL_typez00);
									BgL_g1083z00_1287 =
										BGl_classzd2existszd2zz__objectz00(BgL_arg1435z00_1319);
								}
								BgL_g1084z00_1288 = CDR(BgL_lz00_37);
								{
									BgL_ev_exprz00_bglt BgL_nodez00_1290;
									obj_t BgL_klassz00_1291;
									obj_t BgL_fieldsz00_1292;

									BgL_nodez00_1290 =
										((BgL_ev_exprz00_bglt)
										((BgL_ev_varz00_bglt) BgL_vz00_1283));
									BgL_klassz00_1291 = BgL_g1083z00_1287;
									BgL_fieldsz00_1292 = BgL_g1084z00_1288;
								BgL_zc3z04anonymousza31412ze3z87_1293:
									if (NULLP(BgL_fieldsz00_1292))
										{	/* Eval/evaluate.scm 242 */
											return ((obj_t) BgL_nodez00_1290);
										}
									else
										{	/* Eval/evaluate.scm 242 */
											if (BGl_classzf3zf3zz__objectz00(BgL_klassz00_1291))
												{	/* Eval/evaluate.scm 245 */
													obj_t BgL_fieldz00_1296;

													{	/* Eval/evaluate.scm 245 */
														obj_t BgL_arg1433z00_1315;

														BgL_arg1433z00_1315 =
															CAR(((obj_t) BgL_fieldsz00_1292));
														BgL_fieldz00_1296 =
															BGl_findzd2classzd2fieldz00zz__objectz00
															(BgL_klassz00_1291, BgL_arg1433z00_1315);
													}
													if (BGl_classzd2fieldzf3z21zz__objectz00
														(BgL_fieldz00_1296))
														{	/* Eval/evaluate.scm 246 */
															if (NULLP(CDR(((obj_t) BgL_fieldsz00_1292))))
																{	/* Eval/evaluate.scm 247 */
																	if (BGl_classzd2fieldzd2mutablezf3zf3zz__objectz00(BgL_fieldz00_1296))
																		{	/* Eval/evaluate.scm 250 */
																			obj_t BgL_arg1419z00_1301;

																			{	/* Eval/evaluate.scm 250 */
																				obj_t BgL_list1420z00_1302;

																				{	/* Eval/evaluate.scm 250 */
																					obj_t BgL_arg1421z00_1303;

																					BgL_arg1421z00_1303 =
																						MAKE_YOUNG_PAIR(BgL_e2z00_1284,
																						BNIL);
																					BgL_list1420z00_1302 =
																						MAKE_YOUNG_PAIR(((obj_t)
																							BgL_nodez00_1290),
																						BgL_arg1421z00_1303);
																				}
																				BgL_arg1419z00_1301 =
																					BgL_list1420z00_1302;
																			}
																			{	/* Eval/evaluate.scm 282 */
																				obj_t BgL_setz00_3323;

																				BgL_setz00_3323 =
																					BGl_classzd2fieldzd2mutatorz00zz__objectz00
																					(BgL_fieldz00_1296);
																				{	/* Eval/evaluate.scm 283 */
																					BgL_ev_appz00_bglt
																						BgL_new1091z00_3324;
																					{	/* Eval/evaluate.scm 284 */
																						BgL_ev_appz00_bglt
																							BgL_new1090z00_3325;
																						BgL_new1090z00_3325 =
																							((BgL_ev_appz00_bglt)
																							BOBJECT(GC_MALLOC(sizeof(struct
																										BgL_ev_appz00_bgl))));
																						{	/* Eval/evaluate.scm 284 */
																							long BgL_arg1442z00_3326;

																							{	/* Eval/evaluate.scm 284 */
																								long BgL_res2879z00_3331;

																								BgL_res2879z00_3331 =
																									BGL_CLASS_INDEX
																									(BGl_ev_appz00zz__evaluate_typesz00);
																								BgL_arg1442z00_3326 =
																									BgL_res2879z00_3331;
																							}
																							BGL_OBJECT_CLASS_NUM_SET(
																								((BgL_objectz00_bglt)
																									BgL_new1090z00_3325),
																								BgL_arg1442z00_3326);
																						}
																						BgL_new1091z00_3324 =
																							BgL_new1090z00_3325;
																					}
																					((((BgL_ev_appz00_bglt)
																								COBJECT(BgL_new1091z00_3324))->
																							BgL_locz00) =
																						((obj_t) BgL_locz00_44), BUNSPEC);
																					{
																						BgL_ev_exprz00_bglt BgL_auxz00_5318;

																						{	/* Eval/evaluate.scm 285 */
																							BgL_ev_littz00_bglt
																								BgL_new1093z00_3327;
																							{	/* Eval/evaluate.scm 285 */
																								BgL_ev_littz00_bglt
																									BgL_new1092z00_3328;
																								BgL_new1092z00_3328 =
																									((BgL_ev_littz00_bglt)
																									BOBJECT(GC_MALLOC(sizeof
																											(struct
																												BgL_ev_littz00_bgl))));
																								{	/* Eval/evaluate.scm 285 */
																									long BgL_arg1441z00_3329;

																									{	/* Eval/evaluate.scm 285 */
																										long BgL_res2880z00_3335;

																										{	/* Eval/evaluate.scm 285 */
																											obj_t BgL_classz00_3334;

																											BgL_classz00_3334 =
																												BGl_ev_littz00zz__evaluate_typesz00;
																											BgL_res2880z00_3335 =
																												BGL_CLASS_INDEX
																												(BgL_classz00_3334);
																										}
																										BgL_arg1441z00_3329 =
																											BgL_res2880z00_3335;
																									}
																									BGL_OBJECT_CLASS_NUM_SET(
																										((BgL_objectz00_bglt)
																											BgL_new1092z00_3328),
																										BgL_arg1441z00_3329);
																								}
																								BgL_new1093z00_3327 =
																									BgL_new1092z00_3328;
																							}
																							((((BgL_ev_littz00_bglt)
																										COBJECT
																										(BgL_new1093z00_3327))->
																									BgL_valuez00) =
																								((obj_t) BgL_setz00_3323),
																								BUNSPEC);
																							BgL_auxz00_5318 =
																								((BgL_ev_exprz00_bglt)
																								BgL_new1093z00_3327);
																						}
																						((((BgL_ev_appz00_bglt)
																									COBJECT
																									(BgL_new1091z00_3324))->
																								BgL_funz00) =
																							((BgL_ev_exprz00_bglt)
																								BgL_auxz00_5318), BUNSPEC);
																					}
																					((((BgL_ev_appz00_bglt)
																								COBJECT(BgL_new1091z00_3324))->
																							BgL_argsz00) =
																						((obj_t) BgL_arg1419z00_1301),
																						BUNSPEC);
																					((((BgL_ev_appz00_bglt)
																								COBJECT(BgL_new1091z00_3324))->
																							BgL_tailzf3zf3) =
																						((obj_t) BgL_tailzf3zf3_42),
																						BUNSPEC);
																					return ((obj_t) BgL_new1091z00_3324);
																				}
																			}
																		}
																	else
																		{	/* Eval/evaluate.scm 251 */
																			obj_t BgL_arg1422z00_1304;

																			BgL_arg1422z00_1304 =
																				CAR(((obj_t) BgL_fieldsz00_1292));
																			return
																				BGl_evcompilezd2errorzd2zz__evcompilez00
																				(BgL_locz00_44, BgL_arg1422z00_1304,
																				BGl_string3234z00zz__evaluatez00,
																				BgL_ez00_39);
																		}
																}
															else
																{	/* Eval/evaluate.scm 254 */
																	BgL_ev_appz00_bglt BgL_nodez00_1305;

																	{	/* Eval/evaluate.scm 271 */
																		obj_t BgL_getz00_3339;

																		BgL_getz00_3339 =
																			BGl_classzd2fieldzd2accessorz00zz__objectz00
																			(BgL_fieldz00_1296);
																		{	/* Eval/evaluate.scm 272 */
																			BgL_ev_appz00_bglt BgL_new1087z00_3340;

																			{	/* Eval/evaluate.scm 273 */
																				BgL_ev_appz00_bglt BgL_new1086z00_3341;

																				BgL_new1086z00_3341 =
																					((BgL_ev_appz00_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_ev_appz00_bgl))));
																				{	/* Eval/evaluate.scm 273 */
																					long BgL_arg1440z00_3342;

																					{	/* Eval/evaluate.scm 273 */
																						long BgL_res2881z00_3348;

																						BgL_res2881z00_3348 =
																							BGL_CLASS_INDEX
																							(BGl_ev_appz00zz__evaluate_typesz00);
																						BgL_arg1440z00_3342 =
																							BgL_res2881z00_3348;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							BgL_new1086z00_3341),
																						BgL_arg1440z00_3342);
																				}
																				BgL_new1087z00_3340 =
																					BgL_new1086z00_3341;
																			}
																			((((BgL_ev_appz00_bglt)
																						COBJECT(BgL_new1087z00_3340))->
																					BgL_locz00) =
																				((obj_t) BgL_locz00_44), BUNSPEC);
																			{
																				BgL_ev_exprz00_bglt BgL_auxz00_5338;

																				{	/* Eval/evaluate.scm 274 */
																					BgL_ev_littz00_bglt
																						BgL_new1089z00_3343;
																					{	/* Eval/evaluate.scm 274 */
																						BgL_ev_littz00_bglt
																							BgL_new1088z00_3344;
																						BgL_new1088z00_3344 =
																							((BgL_ev_littz00_bglt)
																							BOBJECT(GC_MALLOC(sizeof(struct
																										BgL_ev_littz00_bgl))));
																						{	/* Eval/evaluate.scm 274 */
																							long BgL_arg1438z00_3345;

																							{	/* Eval/evaluate.scm 274 */
																								long BgL_res2882z00_3352;

																								{	/* Eval/evaluate.scm 274 */
																									obj_t BgL_classz00_3351;

																									BgL_classz00_3351 =
																										BGl_ev_littz00zz__evaluate_typesz00;
																									BgL_res2882z00_3352 =
																										BGL_CLASS_INDEX
																										(BgL_classz00_3351);
																								}
																								BgL_arg1438z00_3345 =
																									BgL_res2882z00_3352;
																							}
																							BGL_OBJECT_CLASS_NUM_SET(
																								((BgL_objectz00_bglt)
																									BgL_new1088z00_3344),
																								BgL_arg1438z00_3345);
																						}
																						BgL_new1089z00_3343 =
																							BgL_new1088z00_3344;
																					}
																					((((BgL_ev_littz00_bglt)
																								COBJECT(BgL_new1089z00_3343))->
																							BgL_valuez00) =
																						((obj_t) BgL_getz00_3339), BUNSPEC);
																					BgL_auxz00_5338 =
																						((BgL_ev_exprz00_bglt)
																						BgL_new1089z00_3343);
																				}
																				((((BgL_ev_appz00_bglt)
																							COBJECT(BgL_new1087z00_3340))->
																						BgL_funz00) =
																					((BgL_ev_exprz00_bglt)
																						BgL_auxz00_5338), BUNSPEC);
																			}
																			{
																				obj_t BgL_auxz00_5346;

																				{	/* Eval/evaluate.scm 275 */
																					obj_t BgL_list1439z00_3346;

																					BgL_list1439z00_3346 =
																						MAKE_YOUNG_PAIR(
																						((obj_t) BgL_nodez00_1290), BNIL);
																					BgL_auxz00_5346 =
																						BgL_list1439z00_3346;
																				}
																				((((BgL_ev_appz00_bglt)
																							COBJECT(BgL_new1087z00_3340))->
																						BgL_argsz00) =
																					((obj_t) BgL_auxz00_5346), BUNSPEC);
																			}
																			((((BgL_ev_appz00_bglt)
																						COBJECT(BgL_new1087z00_3340))->
																					BgL_tailzf3zf3) =
																				((obj_t) BgL_tailzf3zf3_42), BUNSPEC);
																			BgL_nodez00_1305 = BgL_new1087z00_3340;
																	}}
																	{	/* Eval/evaluate.scm 257 */
																		obj_t BgL_arg1424z00_1306;
																		obj_t BgL_arg1425z00_1307;

																		BgL_arg1424z00_1306 =
																			BGl_classzd2fieldzd2typez00zz__objectz00
																			(BgL_fieldz00_1296);
																		BgL_arg1425z00_1307 =
																			CDR(((obj_t) BgL_fieldsz00_1292));
																		{
																			obj_t BgL_fieldsz00_5357;
																			obj_t BgL_klassz00_5356;
																			BgL_ev_exprz00_bglt BgL_nodez00_5354;

																			BgL_nodez00_5354 =
																				((BgL_ev_exprz00_bglt)
																				BgL_nodez00_1305);
																			BgL_klassz00_5356 = BgL_arg1424z00_1306;
																			BgL_fieldsz00_5357 = BgL_arg1425z00_1307;
																			BgL_fieldsz00_1292 = BgL_fieldsz00_5357;
																			BgL_klassz00_1291 = BgL_klassz00_5356;
																			BgL_nodez00_1290 = BgL_nodez00_5354;
																			goto
																				BgL_zc3z04anonymousza31412ze3z87_1293;
																		}
																	}
																}
														}
													else
														{	/* Eval/evaluate.scm 259 */
															obj_t BgL_arg1427z00_1309;
															obj_t BgL_arg1428z00_1310;

															BgL_arg1427z00_1309 =
																(((BgL_ev_varz00_bglt) COBJECT(
																		((BgL_ev_varz00_bglt) BgL_vz00_1283)))->
																BgL_typez00);
															{	/* Eval/evaluate.scm 260 */
																obj_t BgL_arg1429z00_1311;
																obj_t BgL_arg1430z00_1312;

																BgL_arg1429z00_1311 =
																	(((BgL_ev_varz00_bglt) COBJECT(
																			((BgL_ev_varz00_bglt) BgL_vz00_1283)))->
																	BgL_typez00);
																BgL_arg1430z00_1312 =
																	CAR(((obj_t) BgL_fieldsz00_1292));
																{	/* Eval/evaluate.scm 260 */
																	obj_t BgL_list1431z00_1313;

																	{	/* Eval/evaluate.scm 260 */
																		obj_t BgL_arg1432z00_1314;

																		BgL_arg1432z00_1314 =
																			MAKE_YOUNG_PAIR(BgL_arg1430z00_1312,
																			BNIL);
																		BgL_list1431z00_1313 =
																			MAKE_YOUNG_PAIR(BgL_arg1429z00_1311,
																			BgL_arg1432z00_1314);
																	}
																	BgL_arg1428z00_1310 =
																		BGl_formatz00zz__r4_output_6_10_3z00
																		(BGl_string3231z00zz__evaluatez00,
																		BgL_list1431z00_1313);
																}
															}
															return
																BGl_evcompilezd2errorzd2zz__evcompilez00
																(BgL_locz00_44, BgL_arg1427z00_1309,
																BgL_arg1428z00_1310, BgL_ez00_39);
														}
												}
											else
												{	/* Eval/evaluate.scm 264 */
													obj_t BgL_arg1434z00_1316;

													{	/* Eval/evaluate.scm 264 */
														obj_t BgL__ortest_1085z00_1317;

														BgL__ortest_1085z00_1317 =
															(((BgL_ev_varz00_bglt) COBJECT(
																	((BgL_ev_varz00_bglt) BgL_vz00_1283)))->
															BgL_typez00);
														if (CBOOL(BgL__ortest_1085z00_1317))
															{	/* Eval/evaluate.scm 264 */
																BgL_arg1434z00_1316 = BgL__ortest_1085z00_1317;
															}
														else
															{	/* Eval/evaluate.scm 264 */
																BgL_arg1434z00_1316 =
																	(((BgL_ev_varz00_bglt) COBJECT(
																			((BgL_ev_varz00_bglt) BgL_vz00_1283)))->
																	BgL_namez00);
															}
													}
													return
														BGl_evcompilezd2errorzd2zz__evcompilez00
														(BgL_locz00_44, BgL_arg1434z00_1316,
														BGl_string3232z00zz__evaluatez00, BgL_ez00_39);
												}
										}
								}
							}
						else
							{	/* Eval/evaluate.scm 236 */
								return
									BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_44,
									CAR(BgL_lz00_37), BGl_string3233z00zz__evaluatez00,
									BgL_ez00_39);
							}
					}
				}
			}
		}

	}



/* type-check */
	obj_t BGl_typezd2checkzd2zz__evaluatez00(obj_t BgL_varz00_56,
		obj_t BgL_tnamez00_57, obj_t BgL_locz00_58, obj_t BgL_procnamez00_59,
		obj_t BgL_bodyz00_60)
	{
		{	/* Eval/evaluate.scm 298 */
			if (SYMBOLP(BgL_tnamez00_57))
				{	/* Eval/evaluate.scm 301 */
					obj_t BgL_predz00_1340;

					if ((BgL_tnamez00_57 == BGl_symbol3235z00zz__evaluatez00))
						{	/* Eval/evaluate.scm 301 */
							BgL_predz00_1340 = BGl_symbol3237z00zz__evaluatez00;
						}
					else
						{	/* Eval/evaluate.scm 301 */
							if ((BgL_tnamez00_57 == BGl_symbol3239z00zz__evaluatez00))
								{	/* Eval/evaluate.scm 301 */
									BgL_predz00_1340 = BGl_symbol3240z00zz__evaluatez00;
								}
							else
								{	/* Eval/evaluate.scm 301 */
									if ((BgL_tnamez00_57 == BGl_symbol3242z00zz__evaluatez00))
										{	/* Eval/evaluate.scm 301 */
											BgL_predz00_1340 = BGl_symbol3244z00zz__evaluatez00;
										}
									else
										{	/* Eval/evaluate.scm 301 */
											if ((BgL_tnamez00_57 == BGl_symbol3246z00zz__evaluatez00))
												{	/* Eval/evaluate.scm 301 */
													BgL_predz00_1340 = BGl_symbol3248z00zz__evaluatez00;
												}
											else
												{	/* Eval/evaluate.scm 301 */
													bool_t BgL_test3459z00_5389;

													{	/* Eval/evaluate.scm 301 */
														bool_t BgL__ortest_1094z00_1416;

														BgL__ortest_1094z00_1416 =
															(BgL_tnamez00_57 ==
															BGl_symbol3250z00zz__evaluatez00);
														if (BgL__ortest_1094z00_1416)
															{	/* Eval/evaluate.scm 301 */
																BgL_test3459z00_5389 = BgL__ortest_1094z00_1416;
															}
														else
															{	/* Eval/evaluate.scm 301 */
																BgL_test3459z00_5389 =
																	(BgL_tnamez00_57 ==
																	BGl_symbol3252z00zz__evaluatez00);
															}
													}
													if (BgL_test3459z00_5389)
														{	/* Eval/evaluate.scm 301 */
															BgL_predz00_1340 =
																BGl_symbol3253z00zz__evaluatez00;
														}
													else
														{	/* Eval/evaluate.scm 301 */
															bool_t BgL_test3461z00_5393;

															{	/* Eval/evaluate.scm 301 */
																bool_t BgL__ortest_1095z00_1415;

																BgL__ortest_1095z00_1415 =
																	(BgL_tnamez00_57 ==
																	BGl_symbol3255z00zz__evaluatez00);
																if (BgL__ortest_1095z00_1415)
																	{	/* Eval/evaluate.scm 301 */
																		BgL_test3461z00_5393 =
																			BgL__ortest_1095z00_1415;
																	}
																else
																	{	/* Eval/evaluate.scm 301 */
																		BgL_test3461z00_5393 =
																			(BgL_tnamez00_57 ==
																			BGl_symbol3257z00zz__evaluatez00);
																	}
															}
															if (BgL_test3461z00_5393)
																{	/* Eval/evaluate.scm 301 */
																	BgL_predz00_1340 =
																		BGl_symbol3259z00zz__evaluatez00;
																}
															else
																{	/* Eval/evaluate.scm 301 */
																	if (
																		(BgL_tnamez00_57 ==
																			BGl_symbol3261z00zz__evaluatez00))
																		{	/* Eval/evaluate.scm 301 */
																			BgL_predz00_1340 =
																				BGl_symbol3263z00zz__evaluatez00;
																		}
																	else
																		{	/* Eval/evaluate.scm 301 */
																			if (
																				(BgL_tnamez00_57 ==
																					BGl_symbol3265z00zz__evaluatez00))
																				{	/* Eval/evaluate.scm 301 */
																					BgL_predz00_1340 =
																						BGl_symbol3267z00zz__evaluatez00;
																				}
																			else
																				{	/* Eval/evaluate.scm 301 */
																					if (
																						(BgL_tnamez00_57 ==
																							BGl_symbol3269z00zz__evaluatez00))
																						{	/* Eval/evaluate.scm 301 */
																							BgL_predz00_1340 =
																								BGl_symbol3271z00zz__evaluatez00;
																						}
																					else
																						{	/* Eval/evaluate.scm 301 */
																							bool_t BgL_test3466z00_5403;

																							{	/* Eval/evaluate.scm 301 */
																								bool_t BgL__ortest_1096z00_1414;

																								BgL__ortest_1096z00_1414 =
																									(BgL_tnamez00_57 ==
																									BGl_symbol3273z00zz__evaluatez00);
																								if (BgL__ortest_1096z00_1414)
																									{	/* Eval/evaluate.scm 301 */
																										BgL_test3466z00_5403 =
																											BgL__ortest_1096z00_1414;
																									}
																								else
																									{	/* Eval/evaluate.scm 301 */
																										BgL_test3466z00_5403 =
																											(BgL_tnamez00_57 ==
																											BGl_symbol3275z00zz__evaluatez00);
																									}
																							}
																							if (BgL_test3466z00_5403)
																								{	/* Eval/evaluate.scm 301 */
																									BgL_predz00_1340 =
																										BGl_symbol3277z00zz__evaluatez00;
																								}
																							else
																								{	/* Eval/evaluate.scm 312 */
																									obj_t BgL_arg1491z00_1394;

																									{	/* Eval/evaluate.scm 312 */
																										obj_t BgL_arg1492z00_1395;
																										obj_t BgL_arg1493z00_1396;

																										BgL_arg1492z00_1395 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol3279z00zz__evaluatez00,
																											BNIL);
																										{	/* Eval/evaluate.scm 313 */
																											obj_t BgL_arg1494z00_1397;

																											{	/* Eval/evaluate.scm 313 */
																												obj_t
																													BgL_arg1495z00_1398;
																												{	/* Eval/evaluate.scm 313 */
																													obj_t
																														BgL_arg1496z00_1399;
																													obj_t
																														BgL_arg1497z00_1400;
																													{	/* Eval/evaluate.scm 313 */
																														obj_t
																															BgL_arg1498z00_1401;
																														{	/* Eval/evaluate.scm 313 */
																															obj_t
																																BgL_arg1500z00_1402;
																															{	/* Eval/evaluate.scm 313 */
																																obj_t
																																	BgL_arg1502z00_1403;
																																{	/* Eval/evaluate.scm 313 */
																																	obj_t
																																		BgL_arg1505z00_1404;
																																	{	/* Eval/evaluate.scm 313 */
																																		obj_t
																																			BgL_arg1506z00_1405;
																																		{	/* Eval/evaluate.scm 313 */
																																			obj_t
																																				BgL_arg1507z00_1406;
																																			BgL_arg1507z00_1406
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_tnamez00_57,
																																				BNIL);
																																			BgL_arg1506z00_1405
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol3281z00zz__evaluatez00,
																																				BgL_arg1507z00_1406);
																																		}
																																		BgL_arg1505z00_1404
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1506z00_1405,
																																			BNIL);
																																	}
																																	BgL_arg1502z00_1403
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_symbol3283z00zz__evaluatez00,
																																		BgL_arg1505z00_1404);
																																}
																																BgL_arg1500z00_1402
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1502z00_1403,
																																	BNIL);
																															}
																															BgL_arg1498z00_1401
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol3285z00zz__evaluatez00,
																																BgL_arg1500z00_1402);
																														}
																														BgL_arg1496z00_1399
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1498z00_1401,
																															BNIL);
																													}
																													{	/* Eval/evaluate.scm 314 */
																														obj_t
																															BgL_arg1508z00_1407;
																														{	/* Eval/evaluate.scm 314 */
																															obj_t
																																BgL_arg1509z00_1408;
																															{	/* Eval/evaluate.scm 314 */
																																obj_t
																																	BgL_arg1510z00_1409;
																																{	/* Eval/evaluate.scm 314 */
																																	obj_t
																																		BgL_arg1511z00_1410;
																																	obj_t
																																		BgL_arg1512z00_1411;
																																	{	/* Eval/evaluate.scm 314 */
																																		obj_t
																																			BgL_arg1513z00_1412;
																																		{	/* Eval/evaluate.scm 314 */
																																			obj_t
																																				BgL_arg1514z00_1413;
																																			BgL_arg1514z00_1413
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol3285z00zz__evaluatez00,
																																				BNIL);
																																			BgL_arg1513z00_1412
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol3279z00zz__evaluatez00,
																																				BgL_arg1514z00_1413);
																																		}
																																		BgL_arg1511z00_1410
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_symbol3287z00zz__evaluatez00,
																																			BgL_arg1513z00_1412);
																																	}
																																	BgL_arg1512z00_1411
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BTRUE,
																																		BNIL);
																																	BgL_arg1510z00_1409
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1511z00_1410,
																																		BgL_arg1512z00_1411);
																																}
																																BgL_arg1509z00_1408
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_symbol3285z00zz__evaluatez00,
																																	BgL_arg1510z00_1409);
																															}
																															BgL_arg1508z00_1407
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol3289z00zz__evaluatez00,
																																BgL_arg1509z00_1408);
																														}
																														BgL_arg1497z00_1400
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1508z00_1407,
																															BNIL);
																													}
																													BgL_arg1495z00_1398 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1496z00_1399,
																														BgL_arg1497z00_1400);
																												}
																												BgL_arg1494z00_1397 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol3291z00zz__evaluatez00,
																													BgL_arg1495z00_1398);
																											}
																											BgL_arg1493z00_1396 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1494z00_1397,
																												BNIL);
																										}
																										BgL_arg1491z00_1394 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1492z00_1395,
																											BgL_arg1493z00_1396);
																									}
																									BgL_predz00_1340 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol3293z00zz__evaluatez00,
																										BgL_arg1491z00_1394);
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
					{	/* Eval/evaluate.scm 316 */
						obj_t BgL_arg1446z00_1341;

						{	/* Eval/evaluate.scm 316 */
							obj_t BgL_arg1448z00_1342;

							{	/* Eval/evaluate.scm 316 */
								obj_t BgL_arg1449z00_1343;
								obj_t BgL_arg1451z00_1344;

								{	/* Eval/evaluate.scm 316 */
									obj_t BgL_arg1452z00_1345;

									BgL_arg1452z00_1345 = MAKE_YOUNG_PAIR(BgL_varz00_56, BNIL);
									BgL_arg1449z00_1343 =
										MAKE_YOUNG_PAIR(BgL_predz00_1340, BgL_arg1452z00_1345);
								}
								{	/* Eval/evaluate.scm 316 */
									obj_t BgL_arg1453z00_1346;

									{	/* Eval/evaluate.scm 316 */
										obj_t BgL_arg1454z00_1347;

										{
											obj_t BgL_fnamez00_1348;
											obj_t BgL_posz00_1349;

											if (PAIRP(BgL_locz00_58))
												{	/* Eval/evaluate.scm 316 */
													obj_t BgL_cdrzd2138zd2_1354;

													BgL_cdrzd2138zd2_1354 = CDR(BgL_locz00_58);
													if (
														(CAR(BgL_locz00_58) ==
															BGl_symbol3299z00zz__evaluatez00))
														{	/* Eval/evaluate.scm 316 */
															if (PAIRP(BgL_cdrzd2138zd2_1354))
																{	/* Eval/evaluate.scm 316 */
																	obj_t BgL_cdrzd2142zd2_1358;

																	BgL_cdrzd2142zd2_1358 =
																		CDR(BgL_cdrzd2138zd2_1354);
																	if (PAIRP(BgL_cdrzd2142zd2_1358))
																		{	/* Eval/evaluate.scm 316 */
																			if (NULLP(CDR(BgL_cdrzd2142zd2_1358)))
																				{	/* Eval/evaluate.scm 316 */
																					BgL_fnamez00_1348 =
																						CAR(BgL_cdrzd2138zd2_1354);
																					BgL_posz00_1349 =
																						CAR(BgL_cdrzd2142zd2_1358);
																					{	/* Eval/evaluate.scm 321 */
																						obj_t BgL_arg1466z00_1366;

																						{	/* Eval/evaluate.scm 321 */
																							obj_t BgL_arg1467z00_1367;
																							obj_t BgL_arg1468z00_1368;

																							if (SYMBOLP(BgL_procnamez00_59))
																								{	/* Eval/evaluate.scm 321 */
																									obj_t BgL_res2899z00_3414;

																									{	/* Eval/evaluate.scm 321 */
																										obj_t BgL_arg2636z00_3413;

																										BgL_arg2636z00_3413 =
																											SYMBOL_TO_STRING
																											(BgL_procnamez00_59);
																										BgL_res2899z00_3414 =
																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																											(BgL_arg2636z00_3413);
																									}
																									BgL_arg1467z00_1367 =
																										BgL_res2899z00_3414;
																								}
																							else
																								{	/* Eval/evaluate.scm 321 */
																									BgL_arg1467z00_1367 = BFALSE;
																								}
																							{	/* Eval/evaluate.scm 322 */
																								obj_t BgL_arg1470z00_1370;
																								obj_t BgL_arg1471z00_1371;

																								{	/* Eval/evaluate.scm 322 */
																									obj_t BgL_res2900z00_3417;

																									{	/* Eval/evaluate.scm 322 */
																										obj_t BgL_arg2636z00_3416;

																										BgL_arg2636z00_3416 =
																											SYMBOL_TO_STRING(
																											((obj_t)
																												BgL_tnamez00_57));
																										BgL_res2900z00_3417 =
																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																											(BgL_arg2636z00_3416);
																									}
																									BgL_arg1470z00_1370 =
																										BgL_res2900z00_3417;
																								}
																								{	/* Eval/evaluate.scm 320 */
																									obj_t BgL_arg1472z00_1372;

																									{	/* Eval/evaluate.scm 320 */
																										obj_t BgL_arg1473z00_1373;

																										BgL_arg1473z00_1373 =
																											MAKE_YOUNG_PAIR
																											(BgL_posz00_1349, BNIL);
																										BgL_arg1472z00_1372 =
																											MAKE_YOUNG_PAIR
																											(BgL_fnamez00_1348,
																											BgL_arg1473z00_1373);
																									}
																									BgL_arg1471z00_1371 =
																										MAKE_YOUNG_PAIR
																										(BgL_varz00_56,
																										BgL_arg1472z00_1372);
																								}
																								BgL_arg1468z00_1368 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1470z00_1370,
																									BgL_arg1471z00_1371);
																							}
																							BgL_arg1466z00_1366 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1467z00_1367,
																								BgL_arg1468z00_1368);
																						}
																						BgL_arg1454z00_1347 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol3295z00zz__evaluatez00,
																							BgL_arg1466z00_1366);
																					}
																				}
																			else
																				{	/* Eval/evaluate.scm 316 */
																				BgL_tagzd2131zd2_1351:
																					{	/* Eval/evaluate.scm 326 */
																						obj_t BgL_arg1474z00_1374;

																						{	/* Eval/evaluate.scm 326 */
																							obj_t BgL_arg1475z00_1375;
																							obj_t BgL_arg1476z00_1376;

																							if (SYMBOLP(BgL_procnamez00_59))
																								{	/* Eval/evaluate.scm 326 */
																									obj_t BgL_res2902z00_3421;

																									{	/* Eval/evaluate.scm 326 */
																										obj_t BgL_arg2636z00_3420;

																										BgL_arg2636z00_3420 =
																											SYMBOL_TO_STRING
																											(BgL_procnamez00_59);
																										BgL_res2902z00_3421 =
																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																											(BgL_arg2636z00_3420);
																									}
																									BgL_arg1475z00_1375 =
																										BgL_res2902z00_3421;
																								}
																							else
																								{	/* Eval/evaluate.scm 326 */
																									BgL_arg1475z00_1375 = BFALSE;
																								}
																							{	/* Eval/evaluate.scm 327 */
																								obj_t BgL_arg1478z00_1378;
																								obj_t BgL_arg1479z00_1379;

																								{	/* Eval/evaluate.scm 327 */
																									obj_t BgL_res2903z00_3424;

																									{	/* Eval/evaluate.scm 327 */
																										obj_t BgL_arg2636z00_3423;

																										BgL_arg2636z00_3423 =
																											SYMBOL_TO_STRING(
																											((obj_t)
																												BgL_tnamez00_57));
																										BgL_res2903z00_3424 =
																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																											(BgL_arg2636z00_3423);
																									}
																									BgL_arg1478z00_1378 =
																										BgL_res2903z00_3424;
																								}
																								BgL_arg1479z00_1379 =
																									MAKE_YOUNG_PAIR(BgL_varz00_56,
																									BNIL);
																								BgL_arg1476z00_1376 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1478z00_1378,
																									BgL_arg1479z00_1379);
																							}
																							BgL_arg1474z00_1374 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1475z00_1375,
																								BgL_arg1476z00_1376);
																						}
																						BgL_arg1454z00_1347 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol3297z00zz__evaluatez00,
																							BgL_arg1474z00_1374);
																					}
																				}
																		}
																	else
																		{	/* Eval/evaluate.scm 316 */
																			goto BgL_tagzd2131zd2_1351;
																		}
																}
															else
																{	/* Eval/evaluate.scm 316 */
																	goto BgL_tagzd2131zd2_1351;
																}
														}
													else
														{	/* Eval/evaluate.scm 316 */
															goto BgL_tagzd2131zd2_1351;
														}
												}
											else
												{	/* Eval/evaluate.scm 316 */
													goto BgL_tagzd2131zd2_1351;
												}
										}
										BgL_arg1453z00_1346 =
											MAKE_YOUNG_PAIR(BgL_arg1454z00_1347, BNIL);
									}
									BgL_arg1451z00_1344 =
										MAKE_YOUNG_PAIR(BgL_bodyz00_60, BgL_arg1453z00_1346);
								}
								BgL_arg1448z00_1342 =
									MAKE_YOUNG_PAIR(BgL_arg1449z00_1343, BgL_arg1451z00_1344);
							}
							BgL_arg1446z00_1341 =
								MAKE_YOUNG_PAIR(BGl_symbol3289z00zz__evaluatez00,
								BgL_arg1448z00_1342);
						}
						{	/* Eval/evaluate.scm 293 */
							obj_t BgL_arg1443z00_3435;
							obj_t BgL_arg1444z00_3436;

							BgL_arg1443z00_3435 = CAR(BgL_arg1446z00_1341);
							BgL_arg1444z00_3436 = CDR(BgL_arg1446z00_1341);
							{	/* Eval/evaluate.scm 293 */
								obj_t BgL_res2908z00_3439;

								BgL_res2908z00_3439 =
									MAKE_YOUNG_EPAIR(BgL_arg1443z00_3435, BgL_arg1444z00_3436,
									BgL_locz00_58);
								return BgL_res2908z00_3439;
							}
						}
					}
				}
			else
				{	/* Eval/evaluate.scm 300 */
					return BgL_bodyz00_60;
				}
		}

	}



/* type-checks */
	obj_t BGl_typezd2checkszd2zz__evaluatez00(obj_t BgL_varsz00_61,
		obj_t BgL_srcsz00_62, obj_t BgL_bodyz00_63, obj_t BgL_locz00_64,
		obj_t BgL_procnamez00_65)
	{
		{	/* Eval/evaluate.scm 334 */
			{	/* Eval/evaluate.scm 335 */
				bool_t BgL_test3475z00_5477;

				{	/* Eval/evaluate.scm 335 */
					int BgL_arg1526z00_1435;

					BgL_arg1526z00_1435 = bgl_debug();
					BgL_test3475z00_5477 = ((long) (BgL_arg1526z00_1435) <= ((long) 0));
				}
				if (BgL_test3475z00_5477)
					{	/* Eval/evaluate.scm 335 */
						return BgL_bodyz00_63;
					}
				else
					{	/* Eval/evaluate.scm 335 */
						return
							BGl_loopze71ze7zz__evaluatez00(BgL_bodyz00_63, BgL_procnamez00_65,
							BgL_locz00_64, BgL_varsz00_61, BgL_srcsz00_62);
					}
			}
		}

	}



/* loop~1 */
	obj_t BGl_loopze71ze7zz__evaluatez00(obj_t BgL_bodyz00_4965,
		obj_t BgL_procnamez00_4964, obj_t BgL_locz00_4963, obj_t BgL_varsz00_1420,
		obj_t BgL_srcsz00_1421)
	{
		{	/* Eval/evaluate.scm 337 */
		BGl_loopze71ze7zz__evaluatez00:
			if (NULLP(BgL_varsz00_1420))
				{	/* Eval/evaluate.scm 339 */
					return BgL_bodyz00_4965;
				}
			else
				{	/* Eval/evaluate.scm 341 */
					obj_t BgL_vz00_1424;

					BgL_vz00_1424 = CAR(((obj_t) BgL_varsz00_1420));
					{	/* Eval/evaluate.scm 341 */
						obj_t BgL_idz00_1425;

						BgL_idz00_1425 = CAR(((obj_t) BgL_vz00_1424));
						{	/* Eval/evaluate.scm 342 */
							obj_t BgL_tnamez00_1426;

							BgL_tnamez00_1426 = CDR(((obj_t) BgL_vz00_1424));
							{	/* Eval/evaluate.scm 343 */

								if (CBOOL(BgL_tnamez00_1426))
									{	/* Eval/evaluate.scm 345 */
										obj_t BgL_locz00_1427;

										{	/* Eval/evaluate.scm 345 */
											obj_t BgL_arg1523z00_1431;

											BgL_arg1523z00_1431 = CAR(((obj_t) BgL_srcsz00_1421));
											{	/* Eval/evaluate.scm 150 */
												obj_t BgL__ortest_1069z00_3447;

												BgL__ortest_1069z00_3447 =
													BGl_getzd2sourcezd2locationz00zz__readerz00
													(BgL_arg1523z00_1431);
												if (CBOOL(BgL__ortest_1069z00_3447))
													{	/* Eval/evaluate.scm 150 */
														BgL_locz00_1427 = BgL__ortest_1069z00_3447;
													}
												else
													{	/* Eval/evaluate.scm 151 */
														obj_t BgL__ortest_1070z00_3448;

														BgL__ortest_1070z00_3448 =
															BGl_getzd2sourcezd2locationz00zz__readerz00
															(BgL_srcsz00_1421);
														if (CBOOL(BgL__ortest_1070z00_3448))
															{	/* Eval/evaluate.scm 151 */
																BgL_locz00_1427 = BgL__ortest_1070z00_3448;
															}
														else
															{	/* Eval/evaluate.scm 151 */
																BgL_locz00_1427 = BgL_locz00_4963;
															}
													}
											}
										}
										{	/* Eval/evaluate.scm 347 */
											obj_t BgL_arg1519z00_1428;

											{	/* Eval/evaluate.scm 347 */
												obj_t BgL_arg1520z00_1429;
												obj_t BgL_arg1521z00_1430;

												BgL_arg1520z00_1429 = CDR(((obj_t) BgL_varsz00_1420));
												BgL_arg1521z00_1430 = CDR(((obj_t) BgL_srcsz00_1421));
												BgL_arg1519z00_1428 =
													BGl_loopze71ze7zz__evaluatez00(BgL_bodyz00_4965,
													BgL_procnamez00_4964, BgL_locz00_4963,
													BgL_arg1520z00_1429, BgL_arg1521z00_1430);
											}
											return
												BGl_typezd2checkzd2zz__evaluatez00(BgL_idz00_1425,
												BgL_tnamez00_1426, BgL_locz00_1427,
												BgL_procnamez00_4964, BgL_arg1519z00_1428);
										}
									}
								else
									{	/* Eval/evaluate.scm 348 */
										obj_t BgL_arg1524z00_1432;
										obj_t BgL_arg1525z00_1433;

										BgL_arg1524z00_1432 = CDR(((obj_t) BgL_varsz00_1420));
										BgL_arg1525z00_1433 = CDR(((obj_t) BgL_srcsz00_1421));
										{
											obj_t BgL_srcsz00_5511;
											obj_t BgL_varsz00_5510;

											BgL_varsz00_5510 = BgL_arg1524z00_1432;
											BgL_srcsz00_5511 = BgL_arg1525z00_1433;
											BgL_srcsz00_1421 = BgL_srcsz00_5511;
											BgL_varsz00_1420 = BgL_varsz00_5510;
											goto BGl_loopze71ze7zz__evaluatez00;
										}
									}
							}
						}
					}
				}
		}

	}



/* type-result */
	obj_t BGl_typezd2resultzd2zz__evaluatez00(obj_t BgL_typez00_66,
		obj_t BgL_bodyz00_67, obj_t BgL_locz00_68)
	{
		{	/* Eval/evaluate.scm 353 */
			{	/* Eval/evaluate.scm 354 */
				bool_t BgL_test3480z00_5512;

				if (CBOOL(BgL_typez00_66))
					{	/* Eval/evaluate.scm 354 */
						int BgL_arg1544z00_1450;

						BgL_arg1544z00_1450 = bgl_debug();
						BgL_test3480z00_5512 = ((long) (BgL_arg1544z00_1450) >= ((long) 1));
					}
				else
					{	/* Eval/evaluate.scm 354 */
						BgL_test3480z00_5512 = ((bool_t) 0);
					}
				if (BgL_test3480z00_5512)
					{	/* Eval/evaluate.scm 355 */
						obj_t BgL_tmpz00_1438;

						BgL_tmpz00_1438 =
							BGl_gensymz00zz__r4_symbols_6_4z00
							(BGl_symbol3301z00zz__evaluatez00);
						{	/* Eval/evaluate.scm 357 */
							obj_t BgL_arg1530z00_1439;
							obj_t BgL_arg1531z00_1440;

							{	/* Eval/evaluate.scm 357 */
								obj_t BgL_arg1532z00_1441;

								{	/* Eval/evaluate.scm 357 */
									obj_t BgL_arg1533z00_1442;
									obj_t BgL_arg1534z00_1443;

									{	/* Eval/evaluate.scm 357 */
										obj_t BgL_arg1535z00_1444;

										{	/* Eval/evaluate.scm 357 */
											obj_t BgL_arg1536z00_1445;
											obj_t BgL_arg1537z00_1446;

											{	/* Eval/evaluate.scm 357 */
												obj_t BgL_arg1540z00_1447;

												{	/* Eval/evaluate.scm 357 */
													obj_t BgL_list1541z00_1448;

													{	/* Eval/evaluate.scm 357 */
														obj_t BgL_arg1542z00_1449;

														BgL_arg1542z00_1449 =
															MAKE_YOUNG_PAIR(BgL_typez00_66, BNIL);
														BgL_list1541z00_1448 =
															MAKE_YOUNG_PAIR(BgL_tmpz00_1438,
															BgL_arg1542z00_1449);
													}
													BgL_arg1540z00_1447 =
														BGl_formatz00zz__r4_output_6_10_3z00
														(BGl_string3303z00zz__evaluatez00,
														BgL_list1541z00_1448);
												}
												BgL_arg1536z00_1445 =
													bstring_to_symbol(BgL_arg1540z00_1447);
											}
											BgL_arg1537z00_1446 =
												MAKE_YOUNG_PAIR(BgL_bodyz00_67, BNIL);
											BgL_arg1535z00_1444 =
												MAKE_YOUNG_PAIR(BgL_arg1536z00_1445,
												BgL_arg1537z00_1446);
										}
										BgL_arg1533z00_1442 =
											MAKE_YOUNG_PAIR(BgL_arg1535z00_1444, BNIL);
									}
									BgL_arg1534z00_1443 = MAKE_YOUNG_PAIR(BgL_tmpz00_1438, BNIL);
									BgL_arg1532z00_1441 =
										MAKE_YOUNG_PAIR(BgL_arg1533z00_1442, BgL_arg1534z00_1443);
								}
								BgL_arg1530z00_1439 =
									MAKE_YOUNG_PAIR(BGl_symbol3291z00zz__evaluatez00,
									BgL_arg1532z00_1441);
							}
							{	/* Eval/evaluate.scm 144 */
								obj_t BgL__ortest_1068z00_3457;

								BgL__ortest_1068z00_3457 =
									BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_bodyz00_67);
								if (CBOOL(BgL__ortest_1068z00_3457))
									{	/* Eval/evaluate.scm 144 */
										BgL_arg1531z00_1440 = BgL__ortest_1068z00_3457;
									}
								else
									{	/* Eval/evaluate.scm 144 */
										BgL_arg1531z00_1440 = BgL_locz00_68;
									}
							}
							{	/* Eval/evaluate.scm 293 */
								obj_t BgL_arg1443z00_3458;
								obj_t BgL_arg1444z00_3459;

								BgL_arg1443z00_3458 = CAR(BgL_arg1530z00_1439);
								BgL_arg1444z00_3459 = CDR(BgL_arg1530z00_1439);
								{	/* Eval/evaluate.scm 293 */
									obj_t BgL_res2913z00_3462;

									BgL_res2913z00_3462 =
										MAKE_YOUNG_EPAIR(BgL_arg1443z00_3458, BgL_arg1444z00_3459,
										BgL_arg1531z00_1440);
									return BgL_res2913z00_3462;
								}
							}
						}
					}
				else
					{	/* Eval/evaluate.scm 354 */
						return BgL_bodyz00_67;
					}
			}
		}

	}



/* conv */
	obj_t BGl_convz00zz__evaluatez00(obj_t BgL_ez00_69, obj_t BgL_localsz00_70,
		obj_t BgL_globalsz00_71, obj_t BgL_tailzf3zf3_72, obj_t BgL_wherez00_73,
		obj_t BgL_locz00_74, bool_t BgL_topzf3zf3_75)
	{
		{	/* Eval/evaluate.scm 365 */
		BGl_convz00zz__evaluatez00:
			{
				obj_t BgL_xz00_1459;
				obj_t BgL_bahz00_1461;
				obj_t BgL_lz00_1466;
				obj_t BgL_funz00_1468;
				obj_t BgL_argsz00_1469;
				obj_t BgL_pz00_1475;
				obj_t BgL_tz00_1476;
				obj_t BgL_oz00_1477;
				obj_t BgL_pz00_1479;
				obj_t BgL_tz00_1480;
				obj_t BgL_bindsz00_1488;
				obj_t BgL_bodyz00_1489;
				obj_t BgL_bindsz00_1491;
				obj_t BgL_bodyz00_1492;
				obj_t BgL_bindsz00_1494;
				obj_t BgL_bodyz00_1495;
				obj_t BgL_lz00_1501;
				obj_t BgL_e2z00_1502;
				obj_t BgL_vz00_1504;
				obj_t BgL_ez00_1505;
				obj_t BgL_gvz00_1508;
				obj_t BgL_formalsz00_1509;
				obj_t BgL_bodyz00_1510;
				obj_t BgL_gvz00_1512;
				obj_t BgL_gez00_1513;
				obj_t BgL_vz00_1515;
				obj_t BgL_bodyz00_1516;
				obj_t BgL_mz00_1528;
				obj_t BgL_bodyz00_1529;
				obj_t BgL_fz00_1535;
				obj_t BgL_argsz00_1536;

				if (PAIRP(BgL_ez00_69))
					{	/* Eval/evaluate.scm 424 */
						if ((CAR(BgL_ez00_69) == BGl_symbol3310z00zz__evaluatez00))
							{	/* Eval/evaluate.scm 424 */
								BgL_bahz00_1461 = CDR(BgL_ez00_69);
								if (BgL_topzf3zf3_75)
									{	/* Eval/evaluate.scm 432 */
										obj_t BgL_formsz00_2326;

										{	/* Eval/evaluate.scm 432 */
											obj_t BgL_arg2273z00_2329;

											{	/* Eval/evaluate.scm 144 */
												obj_t BgL__ortest_1068z00_3514;

												BgL__ortest_1068z00_3514 =
													BGl_getzd2sourcezd2locationz00zz__readerz00
													(BgL_ez00_69);
												if (CBOOL(BgL__ortest_1068z00_3514))
													{	/* Eval/evaluate.scm 144 */
														BgL_arg2273z00_2329 = BgL__ortest_1068z00_3514;
													}
												else
													{	/* Eval/evaluate.scm 144 */
														BgL_arg2273z00_2329 = BgL_locz00_74;
													}
											}
											BgL_formsz00_2326 =
												BGl_evmodulez00zz__evmodulez00(BgL_ez00_69,
												BgL_arg2273z00_2329);
										}
										{	/* Eval/evaluate.scm 433 */
											obj_t BgL_arg2270z00_2327;
											obj_t BgL_arg2272z00_2328;

											BgL_arg2270z00_2327 =
												BGl_expandz00zz__expandz00(BgL_formsz00_2326);
											BgL_arg2272z00_2328 = BGL_MODULE();
											{
												bool_t BgL_topzf3zf3_5551;
												obj_t BgL_wherez00_5550;
												obj_t BgL_tailzf3zf3_5549;
												obj_t BgL_globalsz00_5548;
												obj_t BgL_ez00_5547;

												BgL_ez00_5547 = BgL_arg2270z00_2327;
												BgL_globalsz00_5548 = BgL_arg2272z00_2328;
												BgL_tailzf3zf3_5549 = BgL_wherez00_73;
												BgL_wherez00_5550 = BFALSE;
												BgL_topzf3zf3_5551 = ((bool_t) 1);
												BgL_topzf3zf3_75 = BgL_topzf3zf3_5551;
												BgL_wherez00_73 = BgL_wherez00_5550;
												BgL_tailzf3zf3_72 = BgL_tailzf3zf3_5549;
												BgL_globalsz00_71 = BgL_globalsz00_5548;
												BgL_ez00_69 = BgL_ez00_5547;
												goto BGl_convz00zz__evaluatez00;
											}
										}
									}
								else
									{	/* Eval/evaluate.scm 431 */
										return
											BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_74,
											BGl_string3229z00zz__evaluatez00,
											BGl_string3309z00zz__evaluatez00, BgL_ez00_69);
									}
							}
						else
							{	/* Eval/evaluate.scm 424 */
								obj_t BgL_cdrzd2250zd2_1544;

								BgL_cdrzd2250zd2_1544 = CDR(BgL_ez00_69);
								if ((CAR(BgL_ez00_69) == BGl_symbol3312z00zz__evaluatez00))
									{	/* Eval/evaluate.scm 424 */
										if (PAIRP(BgL_cdrzd2250zd2_1544))
											{	/* Eval/evaluate.scm 424 */
												obj_t BgL_carzd2253zd2_1548;
												obj_t BgL_cdrzd2254zd2_1549;

												BgL_carzd2253zd2_1548 = CAR(BgL_cdrzd2250zd2_1544);
												BgL_cdrzd2254zd2_1549 = CDR(BgL_cdrzd2250zd2_1544);
												if (SYMBOLP(BgL_carzd2253zd2_1548))
													{	/* Eval/evaluate.scm 424 */
														if (PAIRP(BgL_cdrzd2254zd2_1549))
															{	/* Eval/evaluate.scm 424 */
																obj_t BgL_carzd2258zd2_1552;

																BgL_carzd2258zd2_1552 =
																	CAR(BgL_cdrzd2254zd2_1549);
																if (SYMBOLP(BgL_carzd2258zd2_1552))
																	{	/* Eval/evaluate.scm 424 */
																		if (NULLP(CDR(BgL_cdrzd2254zd2_1549)))
																			{	/* Eval/evaluate.scm 437 */
																				BgL_ev_globalz00_bglt
																					BgL_new1107z00_3913;
																				{	/* Eval/evaluate.scm 438 */
																					BgL_ev_globalz00_bglt
																						BgL_new1106z00_3914;
																					BgL_new1106z00_3914 =
																						((BgL_ev_globalz00_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_ev_globalz00_bgl))));
																					{	/* Eval/evaluate.scm 438 */
																						long BgL_arg2275z00_3915;

																						{	/* Eval/evaluate.scm 438 */
																							long BgL_res3014z00_3917;

																							BgL_res3014z00_3917 =
																								BGL_CLASS_INDEX
																								(BGl_ev_globalz00zz__evaluate_typesz00);
																							BgL_arg2275z00_3915 =
																								BgL_res3014z00_3917;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								BgL_new1106z00_3914),
																							BgL_arg2275z00_3915);
																					}
																					BgL_new1107z00_3913 =
																						BgL_new1106z00_3914;
																				}
																				((((BgL_ev_globalz00_bglt)
																							COBJECT(BgL_new1107z00_3913))->
																						BgL_locz00) =
																					((obj_t) BgL_locz00_74), BUNSPEC);
																				((((BgL_ev_globalz00_bglt)
																							COBJECT(BgL_new1107z00_3913))->
																						BgL_namez00) =
																					((obj_t) BgL_carzd2253zd2_1548),
																					BUNSPEC);
																				((((BgL_ev_globalz00_bglt)
																							COBJECT(BgL_new1107z00_3913))->
																						BgL_modz00) =
																					((obj_t)
																						BGl_evalzd2findzd2modulez00zz__evmodulez00
																						(BgL_carzd2258zd2_1552)), BUNSPEC);
																				return ((obj_t) BgL_new1107z00_3913);
																			}
																		else
																			{	/* Eval/evaluate.scm 424 */
																				obj_t BgL_carzd2303zd2_1556;

																				BgL_carzd2303zd2_1556 =
																					CAR(BgL_ez00_69);
																				if (SYMBOLP(BgL_carzd2303zd2_1556))
																					{	/* Eval/evaluate.scm 424 */
																						if (CBOOL
																							(BGl_convzd2varzd2zz__evaluatez00
																								(BgL_carzd2303zd2_1556,
																									BgL_localsz00_70)))
																							{
																								BgL_ev_appz00_bglt
																									BgL_auxz00_5587;
																								BgL_funz00_1468 =
																									BgL_carzd2303zd2_1556;
																								BgL_argsz00_1469 =
																									BgL_cdrzd2250zd2_1544;
																							BgL_tagzd2152zd2_1470:
																								{	/* Eval/evaluate.scm 449 */
																									obj_t BgL_funz00_2359;
																									obj_t BgL_argsz00_2360;

																									{	/* Eval/evaluate.scm 380 */
																										obj_t BgL_arg2431z00_3529;

																										{	/* Eval/evaluate.scm 144 */
																											obj_t
																												BgL__ortest_1068z00_3530;
																											BgL__ortest_1068z00_3530 =
																												BGl_getzd2sourcezd2locationz00zz__readerz00
																												(BgL_funz00_1468);
																											if (CBOOL
																												(BgL__ortest_1068z00_3530))
																												{	/* Eval/evaluate.scm 144 */
																													BgL_arg2431z00_3529 =
																														BgL__ortest_1068z00_3530;
																												}
																											else
																												{	/* Eval/evaluate.scm 144 */
																													BgL_arg2431z00_3529 =
																														BgL_locz00_74;
																												}
																										}
																										BgL_funz00_2359 =
																											BGl_convz00zz__evaluatez00
																											(BgL_funz00_1468,
																											BgL_localsz00_70,
																											BgL_globalsz00_71, BFALSE,
																											BgL_wherez00_73,
																											BgL_arg2431z00_3529,
																											((bool_t) 0));
																									}
																									BgL_argsz00_2360 =
																										BGl_loopze70ze7zz__evaluatez00
																										(BgL_wherez00_73,
																										BgL_globalsz00_71,
																										BgL_localsz00_70,
																										BgL_locz00_74,
																										BgL_argsz00_1469);
																									{	/* Eval/evaluate.scm 450 */
																										BgL_ev_appz00_bglt
																											BgL_new1109z00_2361;
																										{	/* Eval/evaluate.scm 451 */
																											BgL_ev_appz00_bglt
																												BgL_new1108z00_2362;
																											BgL_new1108z00_2362 =
																												((BgL_ev_appz00_bglt)
																												BOBJECT(GC_MALLOC(sizeof
																														(struct
																															BgL_ev_appz00_bgl))));
																											{	/* Eval/evaluate.scm 451 */
																												long
																													BgL_arg2289z00_2363;
																												{	/* Eval/evaluate.scm 451 */
																													long
																														BgL_res2935z00_3532;
																													BgL_res2935z00_3532 =
																														BGL_CLASS_INDEX
																														(BGl_ev_appz00zz__evaluate_typesz00);
																													BgL_arg2289z00_2363 =
																														BgL_res2935z00_3532;
																												}
																												BGL_OBJECT_CLASS_NUM_SET
																													(((BgL_objectz00_bglt)
																														BgL_new1108z00_2362),
																													BgL_arg2289z00_2363);
																											}
																											BgL_new1109z00_2361 =
																												BgL_new1108z00_2362;
																										}
																										((((BgL_ev_appz00_bglt)
																													COBJECT
																													(BgL_new1109z00_2361))->
																												BgL_locz00) =
																											((obj_t) BgL_locz00_74),
																											BUNSPEC);
																										((((BgL_ev_appz00_bglt)
																													COBJECT
																													(BgL_new1109z00_2361))->
																												BgL_funz00) =
																											((BgL_ev_exprz00_bglt) (
																													(BgL_ev_exprz00_bglt)
																													BgL_funz00_2359)),
																											BUNSPEC);
																										((((BgL_ev_appz00_bglt)
																													COBJECT
																													(BgL_new1109z00_2361))->
																												BgL_argsz00) =
																											((obj_t)
																												BgL_argsz00_2360),
																											BUNSPEC);
																										((((BgL_ev_appz00_bglt)
																													COBJECT
																													(BgL_new1109z00_2361))->
																												BgL_tailzf3zf3) =
																											((obj_t)
																												BgL_tailzf3zf3_72),
																											BUNSPEC);
																										BgL_auxz00_5587 =
																											BgL_new1109z00_2361;
																								}}
																								return
																									((obj_t) BgL_auxz00_5587);
																							}
																						else
																							{
																								BgL_ev_appz00_bglt
																									BgL_auxz00_5603;
																								BgL_fz00_1535 =
																									BgL_carzd2303zd2_1556;
																								BgL_argsz00_1536 =
																									BgL_cdrzd2250zd2_1544;
																							BgL_tagzd2176zd2_1537:
																								{	/* Eval/evaluate.scm 599 */
																									obj_t BgL_funz00_2625;
																									obj_t BgL_argsz00_2626;

																									{	/* Eval/evaluate.scm 380 */
																										obj_t BgL_arg2431z00_3893;

																										{	/* Eval/evaluate.scm 144 */
																											obj_t
																												BgL__ortest_1068z00_3894;
																											BgL__ortest_1068z00_3894 =
																												BGl_getzd2sourcezd2locationz00zz__readerz00
																												(BgL_fz00_1535);
																											if (CBOOL
																												(BgL__ortest_1068z00_3894))
																												{	/* Eval/evaluate.scm 144 */
																													BgL_arg2431z00_3893 =
																														BgL__ortest_1068z00_3894;
																												}
																											else
																												{	/* Eval/evaluate.scm 144 */
																													BgL_arg2431z00_3893 =
																														BgL_locz00_74;
																												}
																										}
																										BgL_funz00_2625 =
																											BGl_convz00zz__evaluatez00
																											(BgL_fz00_1535,
																											BgL_localsz00_70,
																											BgL_globalsz00_71, BFALSE,
																											BgL_wherez00_73,
																											BgL_arg2431z00_3893,
																											((bool_t) 0));
																									}
																									BgL_argsz00_2626 =
																										BGl_loopze70ze7zz__evaluatez00
																										(BgL_wherez00_73,
																										BgL_globalsz00_71,
																										BgL_localsz00_70,
																										BgL_locz00_74,
																										BgL_argsz00_1536);
																									{	/* Eval/evaluate.scm 600 */
																										BgL_ev_appz00_bglt
																											BgL_new1163z00_2627;
																										{	/* Eval/evaluate.scm 601 */
																											BgL_ev_appz00_bglt
																												BgL_new1162z00_2628;
																											BgL_new1162z00_2628 =
																												((BgL_ev_appz00_bglt)
																												BOBJECT(GC_MALLOC(sizeof
																														(struct
																															BgL_ev_appz00_bgl))));
																											{	/* Eval/evaluate.scm 601 */
																												long
																													BgL_arg2424z00_2629;
																												{	/* Eval/evaluate.scm 601 */
																													long
																														BgL_res3007z00_3896;
																													BgL_res3007z00_3896 =
																														BGL_CLASS_INDEX
																														(BGl_ev_appz00zz__evaluate_typesz00);
																													BgL_arg2424z00_2629 =
																														BgL_res3007z00_3896;
																												}
																												BGL_OBJECT_CLASS_NUM_SET
																													(((BgL_objectz00_bglt)
																														BgL_new1162z00_2628),
																													BgL_arg2424z00_2629);
																											}
																											BgL_new1163z00_2627 =
																												BgL_new1162z00_2628;
																										}
																										((((BgL_ev_appz00_bglt)
																													COBJECT
																													(BgL_new1163z00_2627))->
																												BgL_locz00) =
																											((obj_t) BgL_locz00_74),
																											BUNSPEC);
																										((((BgL_ev_appz00_bglt)
																													COBJECT
																													(BgL_new1163z00_2627))->
																												BgL_funz00) =
																											((BgL_ev_exprz00_bglt) (
																													(BgL_ev_exprz00_bglt)
																													BgL_funz00_2625)),
																											BUNSPEC);
																										((((BgL_ev_appz00_bglt)
																													COBJECT
																													(BgL_new1163z00_2627))->
																												BgL_argsz00) =
																											((obj_t)
																												BgL_argsz00_2626),
																											BUNSPEC);
																										((((BgL_ev_appz00_bglt)
																													COBJECT
																													(BgL_new1163z00_2627))->
																												BgL_tailzf3zf3) =
																											((obj_t)
																												BgL_tailzf3zf3_72),
																											BUNSPEC);
																										BgL_auxz00_5603 =
																											BgL_new1163z00_2627;
																								}}
																								return
																									((obj_t) BgL_auxz00_5603);
																							}
																					}
																				else
																					{
																						BgL_ev_appz00_bglt BgL_auxz00_5619;

																						{
																							obj_t BgL_argsz00_5621;
																							obj_t BgL_fz00_5620;

																							BgL_fz00_5620 =
																								BgL_carzd2303zd2_1556;
																							BgL_argsz00_5621 =
																								BgL_cdrzd2250zd2_1544;
																							BgL_argsz00_1536 =
																								BgL_argsz00_5621;
																							BgL_fz00_1535 = BgL_fz00_5620;
																							goto BgL_tagzd2176zd2_1537;
																						}
																						return ((obj_t) BgL_auxz00_5619);
																					}
																			}
																	}
																else
																	{	/* Eval/evaluate.scm 424 */
																		obj_t BgL_carzd21010zd2_1567;

																		BgL_carzd21010zd2_1567 = CAR(BgL_ez00_69);
																		if (SYMBOLP(BgL_carzd21010zd2_1567))
																			{	/* Eval/evaluate.scm 424 */
																				if (CBOOL
																					(BGl_convzd2varzd2zz__evaluatez00
																						(BgL_carzd21010zd2_1567,
																							BgL_localsz00_70)))
																					{
																						BgL_ev_appz00_bglt BgL_auxz00_5629;

																						{
																							obj_t BgL_argsz00_5631;
																							obj_t BgL_funz00_5630;

																							BgL_funz00_5630 =
																								BgL_carzd21010zd2_1567;
																							BgL_argsz00_5631 =
																								BgL_cdrzd2250zd2_1544;
																							BgL_argsz00_1469 =
																								BgL_argsz00_5631;
																							BgL_funz00_1468 = BgL_funz00_5630;
																							goto BgL_tagzd2152zd2_1470;
																						}
																						return ((obj_t) BgL_auxz00_5629);
																					}
																				else
																					{
																						BgL_ev_appz00_bglt BgL_auxz00_5633;

																						{
																							obj_t BgL_argsz00_5635;
																							obj_t BgL_fz00_5634;

																							BgL_fz00_5634 =
																								BgL_carzd21010zd2_1567;
																							BgL_argsz00_5635 =
																								BgL_cdrzd2250zd2_1544;
																							BgL_argsz00_1536 =
																								BgL_argsz00_5635;
																							BgL_fz00_1535 = BgL_fz00_5634;
																							goto BgL_tagzd2176zd2_1537;
																						}
																						return ((obj_t) BgL_auxz00_5633);
																					}
																			}
																		else
																			{
																				BgL_ev_appz00_bglt BgL_auxz00_5637;

																				{
																					obj_t BgL_argsz00_5639;
																					obj_t BgL_fz00_5638;

																					BgL_fz00_5638 =
																						BgL_carzd21010zd2_1567;
																					BgL_argsz00_5639 =
																						BgL_cdrzd2250zd2_1544;
																					BgL_argsz00_1536 = BgL_argsz00_5639;
																					BgL_fz00_1535 = BgL_fz00_5638;
																					goto BgL_tagzd2176zd2_1537;
																				}
																				return ((obj_t) BgL_auxz00_5637);
																			}
																	}
															}
														else
															{	/* Eval/evaluate.scm 424 */
																obj_t BgL_carzd21717zd2_1577;

																BgL_carzd21717zd2_1577 = CAR(BgL_ez00_69);
																if (SYMBOLP(BgL_carzd21717zd2_1577))
																	{	/* Eval/evaluate.scm 424 */
																		if (CBOOL(BGl_convzd2varzd2zz__evaluatez00
																				(BgL_carzd21717zd2_1577,
																					BgL_localsz00_70)))
																			{
																				BgL_ev_appz00_bglt BgL_auxz00_5647;

																				{
																					obj_t BgL_argsz00_5649;
																					obj_t BgL_funz00_5648;

																					BgL_funz00_5648 =
																						BgL_carzd21717zd2_1577;
																					BgL_argsz00_5649 =
																						BgL_cdrzd2250zd2_1544;
																					BgL_argsz00_1469 = BgL_argsz00_5649;
																					BgL_funz00_1468 = BgL_funz00_5648;
																					goto BgL_tagzd2152zd2_1470;
																				}
																				return ((obj_t) BgL_auxz00_5647);
																			}
																		else
																			{
																				BgL_ev_appz00_bglt BgL_auxz00_5651;

																				{
																					obj_t BgL_argsz00_5653;
																					obj_t BgL_fz00_5652;

																					BgL_fz00_5652 =
																						BgL_carzd21717zd2_1577;
																					BgL_argsz00_5653 =
																						BgL_cdrzd2250zd2_1544;
																					BgL_argsz00_1536 = BgL_argsz00_5653;
																					BgL_fz00_1535 = BgL_fz00_5652;
																					goto BgL_tagzd2176zd2_1537;
																				}
																				return ((obj_t) BgL_auxz00_5651);
																			}
																	}
																else
																	{
																		BgL_ev_appz00_bglt BgL_auxz00_5655;

																		{
																			obj_t BgL_argsz00_5657;
																			obj_t BgL_fz00_5656;

																			BgL_fz00_5656 = BgL_carzd21717zd2_1577;
																			BgL_argsz00_5657 = BgL_cdrzd2250zd2_1544;
																			BgL_argsz00_1536 = BgL_argsz00_5657;
																			BgL_fz00_1535 = BgL_fz00_5656;
																			goto BgL_tagzd2176zd2_1537;
																		}
																		return ((obj_t) BgL_auxz00_5655);
																	}
															}
													}
												else
													{	/* Eval/evaluate.scm 424 */
														obj_t BgL_carzd22424zd2_1587;

														BgL_carzd22424zd2_1587 = CAR(BgL_ez00_69);
														if (SYMBOLP(BgL_carzd22424zd2_1587))
															{	/* Eval/evaluate.scm 424 */
																if (CBOOL(BGl_convzd2varzd2zz__evaluatez00
																		(BgL_carzd22424zd2_1587, BgL_localsz00_70)))
																	{
																		BgL_ev_appz00_bglt BgL_auxz00_5665;

																		{
																			obj_t BgL_argsz00_5667;
																			obj_t BgL_funz00_5666;

																			BgL_funz00_5666 = BgL_carzd22424zd2_1587;
																			BgL_argsz00_5667 = BgL_cdrzd2250zd2_1544;
																			BgL_argsz00_1469 = BgL_argsz00_5667;
																			BgL_funz00_1468 = BgL_funz00_5666;
																			goto BgL_tagzd2152zd2_1470;
																		}
																		return ((obj_t) BgL_auxz00_5665);
																	}
																else
																	{
																		BgL_ev_appz00_bglt BgL_auxz00_5669;

																		{
																			obj_t BgL_argsz00_5671;
																			obj_t BgL_fz00_5670;

																			BgL_fz00_5670 = BgL_carzd22424zd2_1587;
																			BgL_argsz00_5671 = BgL_cdrzd2250zd2_1544;
																			BgL_argsz00_1536 = BgL_argsz00_5671;
																			BgL_fz00_1535 = BgL_fz00_5670;
																			goto BgL_tagzd2176zd2_1537;
																		}
																		return ((obj_t) BgL_auxz00_5669);
																	}
															}
														else
															{
																BgL_ev_appz00_bglt BgL_auxz00_5673;

																{
																	obj_t BgL_argsz00_5675;
																	obj_t BgL_fz00_5674;

																	BgL_fz00_5674 = BgL_carzd22424zd2_1587;
																	BgL_argsz00_5675 = BgL_cdrzd2250zd2_1544;
																	BgL_argsz00_1536 = BgL_argsz00_5675;
																	BgL_fz00_1535 = BgL_fz00_5674;
																	goto BgL_tagzd2176zd2_1537;
																}
																return ((obj_t) BgL_auxz00_5673);
															}
													}
											}
										else
											{	/* Eval/evaluate.scm 424 */
												obj_t BgL_carzd23131zd2_1597;

												BgL_carzd23131zd2_1597 = CAR(BgL_ez00_69);
												if (SYMBOLP(BgL_carzd23131zd2_1597))
													{	/* Eval/evaluate.scm 424 */
														if (CBOOL(BGl_convzd2varzd2zz__evaluatez00
																(BgL_carzd23131zd2_1597, BgL_localsz00_70)))
															{
																BgL_ev_appz00_bglt BgL_auxz00_5683;

																{
																	obj_t BgL_argsz00_5685;
																	obj_t BgL_funz00_5684;

																	BgL_funz00_5684 = BgL_carzd23131zd2_1597;
																	BgL_argsz00_5685 = BgL_cdrzd2250zd2_1544;
																	BgL_argsz00_1469 = BgL_argsz00_5685;
																	BgL_funz00_1468 = BgL_funz00_5684;
																	goto BgL_tagzd2152zd2_1470;
																}
																return ((obj_t) BgL_auxz00_5683);
															}
														else
															{
																BgL_ev_appz00_bglt BgL_auxz00_5687;

																{
																	obj_t BgL_argsz00_5689;
																	obj_t BgL_fz00_5688;

																	BgL_fz00_5688 = BgL_carzd23131zd2_1597;
																	BgL_argsz00_5689 = BgL_cdrzd2250zd2_1544;
																	BgL_argsz00_1536 = BgL_argsz00_5689;
																	BgL_fz00_1535 = BgL_fz00_5688;
																	goto BgL_tagzd2176zd2_1537;
																}
																return ((obj_t) BgL_auxz00_5687);
															}
													}
												else
													{
														BgL_ev_appz00_bglt BgL_auxz00_5691;

														{
															obj_t BgL_argsz00_5693;
															obj_t BgL_fz00_5692;

															BgL_fz00_5692 = BgL_carzd23131zd2_1597;
															BgL_argsz00_5693 = BgL_cdrzd2250zd2_1544;
															BgL_argsz00_1536 = BgL_argsz00_5693;
															BgL_fz00_1535 = BgL_fz00_5692;
															goto BgL_tagzd2176zd2_1537;
														}
														return ((obj_t) BgL_auxz00_5691);
													}
											}
									}
								else
									{	/* Eval/evaluate.scm 424 */
										if ((CAR(BgL_ez00_69) == BGl_symbol3314z00zz__evaluatez00))
											{	/* Eval/evaluate.scm 424 */
												BgL_lz00_1466 = BgL_cdrzd2250zd2_1544;
												{	/* Eval/evaluate.scm 442 */
													bool_t BgL_test3506z00_5698;

													if (PAIRP(BgL_lz00_1466))
														{	/* Eval/evaluate.scm 442 */
															bool_t BgL_test3508z00_5701;

															{	/* Eval/evaluate.scm 442 */
																obj_t BgL_tmpz00_5702;

																BgL_tmpz00_5702 = CDR(BgL_lz00_1466);
																BgL_test3508z00_5701 = PAIRP(BgL_tmpz00_5702);
															}
															if (BgL_test3508z00_5701)
																{
																	obj_t BgL_l1212z00_2350;

																	BgL_l1212z00_2350 = BgL_lz00_1466;
																BgL_zc3z04anonymousza32285ze3z87_2351:
																	if (NULLP(BgL_l1212z00_2350))
																		{	/* Eval/evaluate.scm 442 */
																			BgL_test3506z00_5698 = ((bool_t) 1);
																		}
																	else
																		{	/* Eval/evaluate.scm 442 */
																			bool_t BgL_test3510z00_5707;

																			{	/* Eval/evaluate.scm 442 */
																				obj_t BgL_tmpz00_5708;

																				BgL_tmpz00_5708 =
																					CAR(((obj_t) BgL_l1212z00_2350));
																				BgL_test3510z00_5707 =
																					SYMBOLP(BgL_tmpz00_5708);
																			}
																			if (BgL_test3510z00_5707)
																				{
																					obj_t BgL_l1212z00_5712;

																					BgL_l1212z00_5712 =
																						CDR(((obj_t) BgL_l1212z00_2350));
																					BgL_l1212z00_2350 = BgL_l1212z00_5712;
																					goto
																						BgL_zc3z04anonymousza32285ze3z87_2351;
																				}
																			else
																				{	/* Eval/evaluate.scm 442 */
																					BgL_test3506z00_5698 = ((bool_t) 0);
																				}
																		}
																}
															else
																{	/* Eval/evaluate.scm 442 */
																	BgL_test3506z00_5698 = ((bool_t) 0);
																}
														}
													else
														{	/* Eval/evaluate.scm 442 */
															BgL_test3506z00_5698 = ((bool_t) 0);
														}
													if (BgL_test3506z00_5698)
														{	/* Eval/evaluate.scm 442 */
															return
																BGl_convzd2fieldzd2refz00zz__evaluatez00
																(BgL_ez00_69, BgL_localsz00_70,
																BgL_globalsz00_71, BgL_tailzf3zf3_72,
																BgL_wherez00_73, BgL_locz00_74,
																BgL_topzf3zf3_75);
														}
													else
														{	/* Eval/evaluate.scm 442 */
															return
																BGl_evcompilezd2errorzd2zz__evcompilez00
																(BgL_locz00_74,
																BGl_string3229z00zz__evaluatez00,
																BGl_string3304z00zz__evaluatez00, BgL_ez00_69);
														}
												}
											}
										else
											{	/* Eval/evaluate.scm 424 */
												obj_t BgL_carzd23841zd2_1610;

												BgL_carzd23841zd2_1610 = CAR(BgL_ez00_69);
												if (SYMBOLP(BgL_carzd23841zd2_1610))
													{	/* Eval/evaluate.scm 424 */
														if (CBOOL(BGl_convzd2varzd2zz__evaluatez00
																(BgL_carzd23841zd2_1610, BgL_localsz00_70)))
															{
																BgL_ev_appz00_bglt BgL_auxz00_5723;

																{
																	obj_t BgL_argsz00_5725;
																	obj_t BgL_funz00_5724;

																	BgL_funz00_5724 = BgL_carzd23841zd2_1610;
																	BgL_argsz00_5725 = BgL_cdrzd2250zd2_1544;
																	BgL_argsz00_1469 = BgL_argsz00_5725;
																	BgL_funz00_1468 = BgL_funz00_5724;
																	goto BgL_tagzd2152zd2_1470;
																}
																return ((obj_t) BgL_auxz00_5723);
															}
														else
															{	/* Eval/evaluate.scm 424 */
																if (
																	(BgL_carzd23841zd2_1610 ==
																		BGl_symbol3316z00zz__evaluatez00))
																	{	/* Eval/evaluate.scm 424 */
																		if (PAIRP(BgL_cdrzd2250zd2_1544))
																			{	/* Eval/evaluate.scm 424 */
																				if (NULLP(CDR(BgL_cdrzd2250zd2_1544)))
																					{	/* Eval/evaluate.scm 424 */
																						obj_t BgL_arg1620z00_1621;

																						BgL_arg1620z00_1621 =
																							CAR(BgL_cdrzd2250zd2_1544);
																						{	/* Eval/evaluate.scm 456 */
																							BgL_ev_trapz00_bglt
																								BgL_new1111z00_3966;
																							{	/* Eval/evaluate.scm 457 */
																								BgL_ev_trapz00_bglt
																									BgL_new1110z00_3967;
																								BgL_new1110z00_3967 =
																									((BgL_ev_trapz00_bglt)
																									BOBJECT(GC_MALLOC(sizeof
																											(struct
																												BgL_ev_trapz00_bgl))));
																								{	/* Eval/evaluate.scm 457 */
																									long BgL_arg2290z00_3968;

																									{	/* Eval/evaluate.scm 457 */
																										long BgL_res3023z00_3970;

																										BgL_res3023z00_3970 =
																											BGL_CLASS_INDEX
																											(BGl_ev_trapz00zz__evaluate_typesz00);
																										BgL_arg2290z00_3968 =
																											BgL_res3023z00_3970;
																									}
																									BGL_OBJECT_CLASS_NUM_SET(
																										((BgL_objectz00_bglt)
																											BgL_new1110z00_3967),
																										BgL_arg2290z00_3968);
																								}
																								BgL_new1111z00_3966 =
																									BgL_new1110z00_3967;
																							}
																							{
																								BgL_ev_exprz00_bglt
																									BgL_auxz00_5739;
																								{	/* Eval/evaluate.scm 380 */
																									obj_t BgL_arg2431z00_3973;

																									BgL_arg2431z00_3973 =
																										BGl_getzd2locationzd2zz__evaluatez00
																										(BgL_arg1620z00_1621,
																										BgL_locz00_74);
																									BgL_auxz00_5739 =
																										((BgL_ev_exprz00_bglt)
																										BGl_uconvzf2locze70z15zz__evaluatez00
																										(BgL_wherez00_73,
																											BgL_globalsz00_71,
																											BgL_localsz00_70,
																											BgL_arg1620z00_1621,
																											BgL_arg2431z00_3973));
																								}
																								((((BgL_ev_hookz00_bglt)
																											COBJECT((
																													(BgL_ev_hookz00_bglt)
																													BgL_new1111z00_3966)))->
																										BgL_ez00) =
																									((BgL_ev_exprz00_bglt)
																										BgL_auxz00_5739), BUNSPEC);
																							}
																							return
																								((obj_t) BgL_new1111z00_3966);
																						}
																					}
																				else
																					{	/* Eval/evaluate.scm 424 */
																						obj_t BgL_arg1621z00_1622;
																						obj_t BgL_arg1623z00_1623;

																						BgL_arg1621z00_1622 =
																							CAR(BgL_ez00_69);
																						BgL_arg1623z00_1623 =
																							CDR(BgL_ez00_69);
																						{
																							BgL_ev_appz00_bglt
																								BgL_auxz00_5748;
																							{
																								obj_t BgL_argsz00_5750;
																								obj_t BgL_fz00_5749;

																								BgL_fz00_5749 =
																									BgL_arg1621z00_1622;
																								BgL_argsz00_5750 =
																									BgL_arg1623z00_1623;
																								BgL_argsz00_1536 =
																									BgL_argsz00_5750;
																								BgL_fz00_1535 = BgL_fz00_5749;
																								goto BgL_tagzd2176zd2_1537;
																							}
																							return ((obj_t) BgL_auxz00_5748);
																						}
																					}
																			}
																		else
																			{	/* Eval/evaluate.scm 424 */
																				obj_t BgL_arg1626z00_1625;
																				obj_t BgL_arg1627z00_1626;

																				BgL_arg1626z00_1625 = CAR(BgL_ez00_69);
																				BgL_arg1627z00_1626 = CDR(BgL_ez00_69);
																				{
																					BgL_ev_appz00_bglt BgL_auxz00_5754;

																					{
																						obj_t BgL_argsz00_5756;
																						obj_t BgL_fz00_5755;

																						BgL_fz00_5755 = BgL_arg1626z00_1625;
																						BgL_argsz00_5756 =
																							BgL_arg1627z00_1626;
																						BgL_argsz00_1536 = BgL_argsz00_5756;
																						BgL_fz00_1535 = BgL_fz00_5755;
																						goto BgL_tagzd2176zd2_1537;
																					}
																					return ((obj_t) BgL_auxz00_5754);
																				}
																			}
																	}
																else
																	{	/* Eval/evaluate.scm 424 */
																		obj_t BgL_cdrzd24514zd2_1627;

																		BgL_cdrzd24514zd2_1627 = CDR(BgL_ez00_69);
																		if (
																			(CAR(BgL_ez00_69) ==
																				BGl_symbol3281z00zz__evaluatez00))
																			{	/* Eval/evaluate.scm 424 */
																				if (PAIRP(BgL_cdrzd24514zd2_1627))
																					{	/* Eval/evaluate.scm 424 */
																						if (NULLP(CDR
																								(BgL_cdrzd24514zd2_1627)))
																							{	/* Eval/evaluate.scm 424 */
																								obj_t BgL_arg1633z00_1633;

																								BgL_arg1633z00_1633 =
																									CAR(BgL_cdrzd24514zd2_1627);
																								{	/* Eval/evaluate.scm 459 */
																									BgL_ev_littz00_bglt
																										BgL_new1113z00_3984;
																									{	/* Eval/evaluate.scm 460 */
																										BgL_ev_littz00_bglt
																											BgL_new1112z00_3985;
																										BgL_new1112z00_3985 =
																											((BgL_ev_littz00_bglt)
																											BOBJECT(GC_MALLOC(sizeof
																													(struct
																														BgL_ev_littz00_bgl))));
																										{	/* Eval/evaluate.scm 460 */
																											long BgL_arg2291z00_3986;

																											{	/* Eval/evaluate.scm 460 */
																												long
																													BgL_res3026z00_3988;
																												BgL_res3026z00_3988 =
																													BGL_CLASS_INDEX
																													(BGl_ev_littz00zz__evaluate_typesz00);
																												BgL_arg2291z00_3986 =
																													BgL_res3026z00_3988;
																											}
																											BGL_OBJECT_CLASS_NUM_SET(
																												((BgL_objectz00_bglt)
																													BgL_new1112z00_3985),
																												BgL_arg2291z00_3986);
																										}
																										BgL_new1113z00_3984 =
																											BgL_new1112z00_3985;
																									}
																									((((BgL_ev_littz00_bglt)
																												COBJECT
																												(BgL_new1113z00_3984))->
																											BgL_valuez00) =
																										((obj_t)
																											BgL_arg1633z00_1633),
																										BUNSPEC);
																									return ((obj_t)
																										BgL_new1113z00_3984);
																								}
																							}
																						else
																							{	/* Eval/evaluate.scm 424 */
																								obj_t BgL_arg1634z00_1634;

																								BgL_arg1634z00_1634 =
																									CAR(BgL_ez00_69);
																								{
																									BgL_ev_appz00_bglt
																										BgL_auxz00_5775;
																									{
																										obj_t BgL_argsz00_5777;
																										obj_t BgL_fz00_5776;

																										BgL_fz00_5776 =
																											BgL_arg1634z00_1634;
																										BgL_argsz00_5777 =
																											BgL_cdrzd24514zd2_1627;
																										BgL_argsz00_1536 =
																											BgL_argsz00_5777;
																										BgL_fz00_1535 =
																											BgL_fz00_5776;
																										goto BgL_tagzd2176zd2_1537;
																									}
																									return
																										((obj_t) BgL_auxz00_5775);
																								}
																							}
																					}
																				else
																					{	/* Eval/evaluate.scm 424 */
																						obj_t BgL_arg1639z00_1637;

																						BgL_arg1639z00_1637 =
																							CAR(BgL_ez00_69);
																						{
																							BgL_ev_appz00_bglt
																								BgL_auxz00_5780;
																							{
																								obj_t BgL_argsz00_5782;
																								obj_t BgL_fz00_5781;

																								BgL_fz00_5781 =
																									BgL_arg1639z00_1637;
																								BgL_argsz00_5782 =
																									BgL_cdrzd24514zd2_1627;
																								BgL_argsz00_1536 =
																									BgL_argsz00_5782;
																								BgL_fz00_1535 = BgL_fz00_5781;
																								goto BgL_tagzd2176zd2_1537;
																							}
																							return ((obj_t) BgL_auxz00_5780);
																						}
																					}
																			}
																		else
																			{	/* Eval/evaluate.scm 424 */
																				if (
																					(CAR(BgL_ez00_69) ==
																						BGl_symbol3289z00zz__evaluatez00))
																					{	/* Eval/evaluate.scm 424 */
																						if (PAIRP(BgL_cdrzd24514zd2_1627))
																							{	/* Eval/evaluate.scm 424 */
																								obj_t BgL_cdrzd25128zd2_1643;

																								BgL_cdrzd25128zd2_1643 =
																									CDR(BgL_cdrzd24514zd2_1627);
																								if (PAIRP
																									(BgL_cdrzd25128zd2_1643))
																									{	/* Eval/evaluate.scm 424 */
																										obj_t
																											BgL_cdrzd25133zd2_1645;
																										BgL_cdrzd25133zd2_1645 =
																											CDR
																											(BgL_cdrzd25128zd2_1643);
																										if (PAIRP
																											(BgL_cdrzd25133zd2_1645))
																											{	/* Eval/evaluate.scm 424 */
																												if (NULLP(CDR
																														(BgL_cdrzd25133zd2_1645)))
																													{	/* Eval/evaluate.scm 424 */
																														obj_t
																															BgL_arg1650z00_1649;
																														obj_t
																															BgL_arg1651z00_1650;
																														obj_t
																															BgL_arg1652z00_1651;
																														BgL_arg1650z00_1649
																															=
																															CAR
																															(BgL_cdrzd24514zd2_1627);
																														BgL_arg1651z00_1650
																															=
																															CAR
																															(BgL_cdrzd25128zd2_1643);
																														BgL_arg1652z00_1651
																															=
																															CAR
																															(BgL_cdrzd25133zd2_1645);
																														{
																															BgL_ev_ifz00_bglt
																																BgL_auxz00_5801;
																															BgL_pz00_1475 =
																																BgL_arg1650z00_1649;
																															BgL_tz00_1476 =
																																BgL_arg1651z00_1650;
																															BgL_oz00_1477 =
																																BgL_arg1652z00_1651;
																														BgL_tagzd2155zd2_1478:
																															{	/* Eval/evaluate.scm 462 */
																																BgL_ev_ifz00_bglt
																																	BgL_new1116z00_2370;
																																{	/* Eval/evaluate.scm 463 */
																																	BgL_ev_ifz00_bglt
																																		BgL_new1114z00_2374;
																																	BgL_new1114z00_2374
																																		=
																																		(
																																		(BgL_ev_ifz00_bglt)
																																		BOBJECT
																																		(GC_MALLOC
																																			(sizeof
																																				(struct
																																					BgL_ev_ifz00_bgl))));
																																	{	/* Eval/evaluate.scm 463 */
																																		long
																																			BgL_arg2296z00_2375;
																																		{	/* Eval/evaluate.scm 463 */
																																			long
																																				BgL_res2938z00_3552;
																																			BgL_res2938z00_3552
																																				=
																																				BGL_CLASS_INDEX
																																				(BGl_ev_ifz00zz__evaluate_typesz00);
																																			BgL_arg2296z00_2375
																																				=
																																				BgL_res2938z00_3552;
																																		}
																																		BGL_OBJECT_CLASS_NUM_SET
																																			(((BgL_objectz00_bglt) BgL_new1114z00_2374), BgL_arg2296z00_2375);
																																	}
																																	BgL_new1116z00_2370
																																		=
																																		BgL_new1114z00_2374;
																																}
																																{
																																	BgL_ev_exprz00_bglt
																																		BgL_auxz00_5806;
																																	{	/* Eval/evaluate.scm 463 */
																																		obj_t
																																			BgL_arg2292z00_2371;
																																		{	/* Eval/evaluate.scm 144 */
																																			obj_t
																																				BgL__ortest_1068z00_3555;
																																			BgL__ortest_1068z00_3555
																																				=
																																				BGl_getzd2sourcezd2locationz00zz__readerz00
																																				(BgL_pz00_1475);
																																			if (CBOOL
																																				(BgL__ortest_1068z00_3555))
																																				{	/* Eval/evaluate.scm 144 */
																																					BgL_arg2292z00_2371
																																						=
																																						BgL__ortest_1068z00_3555;
																																				}
																																			else
																																				{	/* Eval/evaluate.scm 144 */
																																					BgL_arg2292z00_2371
																																						=
																																						BgL_locz00_74;
																																				}
																																		}
																																		BgL_auxz00_5806
																																			=
																																			(
																																			(BgL_ev_exprz00_bglt)
																																			BGl_convz00zz__evaluatez00
																																			(BgL_pz00_1475,
																																				BgL_localsz00_70,
																																				BgL_globalsz00_71,
																																				BFALSE,
																																				BgL_wherez00_73,
																																				BgL_arg2292z00_2371,
																																				((bool_t) 0)));
																																	}
																																	((((BgL_ev_ifz00_bglt) COBJECT(BgL_new1116z00_2370))->BgL_pz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5806), BUNSPEC);
																																}
																																{
																																	BgL_ev_exprz00_bglt
																																		BgL_auxz00_5813;
																																	{	/* Eval/evaluate.scm 464 */
																																		obj_t
																																			BgL_arg2294z00_2372;
																																		{	/* Eval/evaluate.scm 144 */
																																			obj_t
																																				BgL__ortest_1068z00_3556;
																																			BgL__ortest_1068z00_3556
																																				=
																																				BGl_getzd2sourcezd2locationz00zz__readerz00
																																				(BgL_tz00_1476);
																																			if (CBOOL
																																				(BgL__ortest_1068z00_3556))
																																				{	/* Eval/evaluate.scm 144 */
																																					BgL_arg2294z00_2372
																																						=
																																						BgL__ortest_1068z00_3556;
																																				}
																																			else
																																				{	/* Eval/evaluate.scm 144 */
																																					BgL_arg2294z00_2372
																																						=
																																						BgL_locz00_74;
																																				}
																																		}
																																		BgL_auxz00_5813
																																			=
																																			(
																																			(BgL_ev_exprz00_bglt)
																																			BGl_convz00zz__evaluatez00
																																			(BgL_tz00_1476,
																																				BgL_localsz00_70,
																																				BgL_globalsz00_71,
																																				BgL_tailzf3zf3_72,
																																				BgL_wherez00_73,
																																				BgL_arg2294z00_2372,
																																				((bool_t) 0)));
																																	}
																																	((((BgL_ev_ifz00_bglt) COBJECT(BgL_new1116z00_2370))->BgL_tz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5813), BUNSPEC);
																																}
																																{
																																	BgL_ev_exprz00_bglt
																																		BgL_auxz00_5820;
																																	{	/* Eval/evaluate.scm 465 */
																																		obj_t
																																			BgL_arg2295z00_2373;
																																		{	/* Eval/evaluate.scm 144 */
																																			obj_t
																																				BgL__ortest_1068z00_3557;
																																			BgL__ortest_1068z00_3557
																																				=
																																				BGl_getzd2sourcezd2locationz00zz__readerz00
																																				(BgL_oz00_1477);
																																			if (CBOOL
																																				(BgL__ortest_1068z00_3557))
																																				{	/* Eval/evaluate.scm 144 */
																																					BgL_arg2295z00_2373
																																						=
																																						BgL__ortest_1068z00_3557;
																																				}
																																			else
																																				{	/* Eval/evaluate.scm 144 */
																																					BgL_arg2295z00_2373
																																						=
																																						BgL_locz00_74;
																																				}
																																		}
																																		BgL_auxz00_5820
																																			=
																																			(
																																			(BgL_ev_exprz00_bglt)
																																			BGl_convz00zz__evaluatez00
																																			(BgL_oz00_1477,
																																				BgL_localsz00_70,
																																				BgL_globalsz00_71,
																																				BgL_tailzf3zf3_72,
																																				BgL_wherez00_73,
																																				BgL_arg2295z00_2373,
																																				((bool_t) 0)));
																																	}
																																	((((BgL_ev_ifz00_bglt) COBJECT(BgL_new1116z00_2370))->BgL_ez00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5820), BUNSPEC);
																																}
																																BgL_auxz00_5801
																																	=
																																	BgL_new1116z00_2370;
																															}
																															return
																																((obj_t)
																																BgL_auxz00_5801);
																														}
																													}
																												else
																													{	/* Eval/evaluate.scm 424 */
																														obj_t
																															BgL_arg1654z00_1652;
																														obj_t
																															BgL_arg1656z00_1653;
																														BgL_arg1654z00_1652
																															=
																															CAR(BgL_ez00_69);
																														BgL_arg1656z00_1653
																															=
																															CDR(BgL_ez00_69);
																														{
																															BgL_ev_appz00_bglt
																																BgL_auxz00_5830;
																															{
																																obj_t
																																	BgL_argsz00_5832;
																																obj_t
																																	BgL_fz00_5831;
																																BgL_fz00_5831 =
																																	BgL_arg1654z00_1652;
																																BgL_argsz00_5832
																																	=
																																	BgL_arg1656z00_1653;
																																BgL_argsz00_1536
																																	=
																																	BgL_argsz00_5832;
																																BgL_fz00_1535 =
																																	BgL_fz00_5831;
																																goto
																																	BgL_tagzd2176zd2_1537;
																															}
																															return
																																((obj_t)
																																BgL_auxz00_5830);
																														}
																													}
																											}
																										else
																											{	/* Eval/evaluate.scm 424 */
																												obj_t
																													BgL_cdrzd25433zd2_1655;
																												BgL_cdrzd25433zd2_1655 =
																													CDR(BgL_ez00_69);
																												{	/* Eval/evaluate.scm 424 */
																													obj_t
																														BgL_cdrzd25439zd2_1656;
																													BgL_cdrzd25439zd2_1656
																														=
																														CDR(((obj_t)
																															BgL_cdrzd25433zd2_1655));
																													if (NULLP(CDR(((obj_t)
																																	BgL_cdrzd25439zd2_1656))))
																														{	/* Eval/evaluate.scm 424 */
																															obj_t
																																BgL_arg1660z00_1659;
																															obj_t
																																BgL_arg1661z00_1660;
																															BgL_arg1660z00_1659
																																=
																																CAR(((obj_t)
																																	BgL_cdrzd25433zd2_1655));
																															BgL_arg1661z00_1660
																																=
																																CAR(((obj_t)
																																	BgL_cdrzd25439zd2_1656));
																															{
																																BgL_ev_ifz00_bglt
																																	BgL_auxz00_5845;
																																BgL_pz00_1479 =
																																	BgL_arg1660z00_1659;
																																BgL_tz00_1480 =
																																	BgL_arg1661z00_1660;
																															BgL_tagzd2156zd2_1481:
																																{	/* Eval/evaluate.scm 467 */
																																	BgL_ev_ifz00_bglt
																																		BgL_new1118z00_2376;
																																	{	/* Eval/evaluate.scm 468 */
																																		BgL_ev_ifz00_bglt
																																			BgL_new1117z00_2380;
																																		BgL_new1117z00_2380
																																			=
																																			(
																																			(BgL_ev_ifz00_bglt)
																																			BOBJECT
																																			(GC_MALLOC
																																				(sizeof
																																					(struct
																																						BgL_ev_ifz00_bgl))));
																																		{	/* Eval/evaluate.scm 468 */
																																			long
																																				BgL_arg2300z00_2381;
																																			{	/* Eval/evaluate.scm 468 */
																																				long
																																					BgL_res2939z00_3559;
																																				BgL_res2939z00_3559
																																					=
																																					BGL_CLASS_INDEX
																																					(BGl_ev_ifz00zz__evaluate_typesz00);
																																				BgL_arg2300z00_2381
																																					=
																																					BgL_res2939z00_3559;
																																			}
																																			BGL_OBJECT_CLASS_NUM_SET
																																				(((BgL_objectz00_bglt) BgL_new1117z00_2380), BgL_arg2300z00_2381);
																																		}
																																		BgL_new1118z00_2376
																																			=
																																			BgL_new1117z00_2380;
																																	}
																																	{
																																		BgL_ev_exprz00_bglt
																																			BgL_auxz00_5850;
																																		{	/* Eval/evaluate.scm 468 */
																																			obj_t
																																				BgL_arg2297z00_2377;
																																			{	/* Eval/evaluate.scm 144 */
																																				obj_t
																																					BgL__ortest_1068z00_3562;
																																				BgL__ortest_1068z00_3562
																																					=
																																					BGl_getzd2sourcezd2locationz00zz__readerz00
																																					(BgL_pz00_1479);
																																				if (CBOOL(BgL__ortest_1068z00_3562))
																																					{	/* Eval/evaluate.scm 144 */
																																						BgL_arg2297z00_2377
																																							=
																																							BgL__ortest_1068z00_3562;
																																					}
																																				else
																																					{	/* Eval/evaluate.scm 144 */
																																						BgL_arg2297z00_2377
																																							=
																																							BgL_locz00_74;
																																					}
																																			}
																																			BgL_auxz00_5850
																																				=
																																				(
																																				(BgL_ev_exprz00_bglt)
																																				BGl_convz00zz__evaluatez00
																																				(BgL_pz00_1479,
																																					BgL_localsz00_70,
																																					BgL_globalsz00_71,
																																					BFALSE,
																																					BgL_wherez00_73,
																																					BgL_arg2297z00_2377,
																																					((bool_t) 0)));
																																		}
																																		((((BgL_ev_ifz00_bglt) COBJECT(BgL_new1118z00_2376))->BgL_pz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5850), BUNSPEC);
																																	}
																																	{
																																		BgL_ev_exprz00_bglt
																																			BgL_auxz00_5857;
																																		{	/* Eval/evaluate.scm 469 */
																																			obj_t
																																				BgL_arg2298z00_2378;
																																			{	/* Eval/evaluate.scm 144 */
																																				obj_t
																																					BgL__ortest_1068z00_3563;
																																				BgL__ortest_1068z00_3563
																																					=
																																					BGl_getzd2sourcezd2locationz00zz__readerz00
																																					(BgL_tz00_1480);
																																				if (CBOOL(BgL__ortest_1068z00_3563))
																																					{	/* Eval/evaluate.scm 144 */
																																						BgL_arg2298z00_2378
																																							=
																																							BgL__ortest_1068z00_3563;
																																					}
																																				else
																																					{	/* Eval/evaluate.scm 144 */
																																						BgL_arg2298z00_2378
																																							=
																																							BgL_locz00_74;
																																					}
																																			}
																																			BgL_auxz00_5857
																																				=
																																				(
																																				(BgL_ev_exprz00_bglt)
																																				BGl_convz00zz__evaluatez00
																																				(BgL_tz00_1480,
																																					BgL_localsz00_70,
																																					BgL_globalsz00_71,
																																					BgL_tailzf3zf3_72,
																																					BgL_wherez00_73,
																																					BgL_arg2298z00_2378,
																																					((bool_t) 0)));
																																		}
																																		((((BgL_ev_ifz00_bglt) COBJECT(BgL_new1118z00_2376))->BgL_tz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5857), BUNSPEC);
																																	}
																																	{
																																		BgL_ev_exprz00_bglt
																																			BgL_auxz00_5864;
																																		{	/* Eval/evaluate.scm 470 */
																																			obj_t
																																				BgL_arg2299z00_2379;
																																			{	/* Eval/evaluate.scm 144 */
																																				obj_t
																																					BgL__ortest_1068z00_3564;
																																				BgL__ortest_1068z00_3564
																																					=
																																					BGl_getzd2sourcezd2locationz00zz__readerz00
																																					(BFALSE);
																																				if (CBOOL(BgL__ortest_1068z00_3564))
																																					{	/* Eval/evaluate.scm 144 */
																																						BgL_arg2299z00_2379
																																							=
																																							BgL__ortest_1068z00_3564;
																																					}
																																				else
																																					{	/* Eval/evaluate.scm 144 */
																																						BgL_arg2299z00_2379
																																							=
																																							BgL_locz00_74;
																																					}
																																			}
																																			BgL_auxz00_5864
																																				=
																																				(
																																				(BgL_ev_exprz00_bglt)
																																				BGl_convz00zz__evaluatez00
																																				(BgL_ez00_69,
																																					BgL_localsz00_70,
																																					BgL_globalsz00_71,
																																					BgL_tailzf3zf3_72,
																																					BgL_wherez00_73,
																																					BgL_arg2299z00_2379,
																																					((bool_t) 0)));
																																		}
																																		((((BgL_ev_ifz00_bglt) COBJECT(BgL_new1118z00_2376))->BgL_ez00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5864), BUNSPEC);
																																	}
																																	BgL_auxz00_5845
																																		=
																																		BgL_new1118z00_2376;
																																}
																																return
																																	((obj_t)
																																	BgL_auxz00_5845);
																															}
																														}
																													else
																														{	/* Eval/evaluate.scm 424 */
																															obj_t
																																BgL_arg1662z00_1661;
																															BgL_arg1662z00_1661
																																=
																																CAR
																																(BgL_ez00_69);
																															{
																																BgL_ev_appz00_bglt
																																	BgL_auxz00_5873;
																																{
																																	obj_t
																																		BgL_argsz00_5875;
																																	obj_t
																																		BgL_fz00_5874;
																																	BgL_fz00_5874
																																		=
																																		BgL_arg1662z00_1661;
																																	BgL_argsz00_5875
																																		=
																																		BgL_cdrzd25433zd2_1655;
																																	BgL_argsz00_1536
																																		=
																																		BgL_argsz00_5875;
																																	BgL_fz00_1535
																																		=
																																		BgL_fz00_5874;
																																	goto
																																		BgL_tagzd2176zd2_1537;
																																}
																																return
																																	((obj_t)
																																	BgL_auxz00_5873);
																															}
																														}
																												}
																											}
																									}
																								else
																									{	/* Eval/evaluate.scm 424 */
																										obj_t BgL_arg1665z00_1664;
																										obj_t BgL_arg1667z00_1665;

																										BgL_arg1665z00_1664 =
																											CAR(BgL_ez00_69);
																										BgL_arg1667z00_1665 =
																											CDR(BgL_ez00_69);
																										{
																											BgL_ev_appz00_bglt
																												BgL_auxz00_5879;
																											{
																												obj_t BgL_argsz00_5881;
																												obj_t BgL_fz00_5880;

																												BgL_fz00_5880 =
																													BgL_arg1665z00_1664;
																												BgL_argsz00_5881 =
																													BgL_arg1667z00_1665;
																												BgL_argsz00_1536 =
																													BgL_argsz00_5881;
																												BgL_fz00_1535 =
																													BgL_fz00_5880;
																												goto
																													BgL_tagzd2176zd2_1537;
																											}
																											return
																												((obj_t)
																												BgL_auxz00_5879);
																										}
																									}
																							}
																						else
																							{	/* Eval/evaluate.scm 424 */
																								obj_t BgL_arg1668z00_1666;
																								obj_t BgL_arg1669z00_1667;

																								BgL_arg1668z00_1666 =
																									CAR(BgL_ez00_69);
																								BgL_arg1669z00_1667 =
																									CDR(BgL_ez00_69);
																								{
																									BgL_ev_appz00_bglt
																										BgL_auxz00_5885;
																									{
																										obj_t BgL_argsz00_5887;
																										obj_t BgL_fz00_5886;

																										BgL_fz00_5886 =
																											BgL_arg1668z00_1666;
																										BgL_argsz00_5887 =
																											BgL_arg1669z00_1667;
																										BgL_argsz00_1536 =
																											BgL_argsz00_5887;
																										BgL_fz00_1535 =
																											BgL_fz00_5886;
																										goto BgL_tagzd2176zd2_1537;
																									}
																									return
																										((obj_t) BgL_auxz00_5885);
																								}
																							}
																					}
																				else
																					{	/* Eval/evaluate.scm 424 */
																						if (
																							(CAR(BgL_ez00_69) ==
																								BGl_symbol3318z00zz__evaluatez00))
																							{	/* Eval/evaluate.scm 424 */
																								obj_t BgL_arg1675z00_1670;

																								BgL_arg1675z00_1670 =
																									CDR(BgL_ez00_69);
																								{	/* Eval/evaluate.scm 472 */
																									BgL_ev_orz00_bglt
																										BgL_new1120z00_4023;
																									{	/* Eval/evaluate.scm 473 */
																										BgL_ev_orz00_bglt
																											BgL_new1119z00_4024;
																										BgL_new1119z00_4024 =
																											((BgL_ev_orz00_bglt)
																											BOBJECT(GC_MALLOC(sizeof
																													(struct
																														BgL_ev_orz00_bgl))));
																										{	/* Eval/evaluate.scm 473 */
																											long BgL_arg2302z00_4025;

																											{	/* Eval/evaluate.scm 473 */
																												long
																													BgL_res3032z00_4027;
																												BgL_res3032z00_4027 =
																													BGL_CLASS_INDEX
																													(BGl_ev_orz00zz__evaluate_typesz00);
																												BgL_arg2302z00_4025 =
																													BgL_res3032z00_4027;
																											}
																											BGL_OBJECT_CLASS_NUM_SET(
																												((BgL_objectz00_bglt)
																													BgL_new1119z00_4024),
																												BgL_arg2302z00_4025);
																										}
																										BgL_new1120z00_4023 =
																											BgL_new1119z00_4024;
																									}
																									((((BgL_ev_listz00_bglt)
																												COBJECT((
																														(BgL_ev_listz00_bglt)
																														BgL_new1120z00_4023)))->
																											BgL_argsz00) =
																										((obj_t)
																											BGl_loopze70ze7zz__evaluatez00
																											(BgL_wherez00_73,
																												BgL_globalsz00_71,
																												BgL_localsz00_70,
																												BgL_locz00_74,
																												BgL_arg1675z00_1670)),
																										BUNSPEC);
																									return ((obj_t)
																										BgL_new1120z00_4023);
																								}
																							}
																						else
																							{	/* Eval/evaluate.scm 424 */
																								if (
																									(CAR(BgL_ez00_69) ==
																										BGl_symbol3320z00zz__evaluatez00))
																									{	/* Eval/evaluate.scm 424 */
																										obj_t BgL_arg1685z00_1673;

																										BgL_arg1685z00_1673 =
																											CDR(BgL_ez00_69);
																										{	/* Eval/evaluate.scm 475 */
																											BgL_ev_andz00_bglt
																												BgL_new1122z00_4032;
																											{	/* Eval/evaluate.scm 476 */
																												BgL_ev_andz00_bglt
																													BgL_new1121z00_4033;
																												BgL_new1121z00_4033 =
																													((BgL_ev_andz00_bglt)
																													BOBJECT(GC_MALLOC
																														(sizeof(struct
																																BgL_ev_andz00_bgl))));
																												{	/* Eval/evaluate.scm 476 */
																													long
																														BgL_arg2303z00_4034;
																													{	/* Eval/evaluate.scm 476 */
																														long
																															BgL_res3033z00_4036;
																														BgL_res3033z00_4036
																															=
																															BGL_CLASS_INDEX
																															(BGl_ev_andz00zz__evaluate_typesz00);
																														BgL_arg2303z00_4034
																															=
																															BgL_res3033z00_4036;
																													}
																													BGL_OBJECT_CLASS_NUM_SET
																														(((BgL_objectz00_bglt) BgL_new1121z00_4033), BgL_arg2303z00_4034);
																												}
																												BgL_new1122z00_4032 =
																													BgL_new1121z00_4033;
																											}
																											((((BgL_ev_listz00_bglt)
																														COBJECT((
																																(BgL_ev_listz00_bglt)
																																BgL_new1122z00_4032)))->
																													BgL_argsz00) =
																												((obj_t)
																													BGl_loopze70ze7zz__evaluatez00
																													(BgL_wherez00_73,
																														BgL_globalsz00_71,
																														BgL_localsz00_70,
																														BgL_locz00_74,
																														BgL_arg1685z00_1673)),
																												BUNSPEC);
																											return ((obj_t)
																												BgL_new1122z00_4032);
																										}
																									}
																								else
																									{	/* Eval/evaluate.scm 424 */
																										if (
																											(CAR(BgL_ez00_69) ==
																												BGl_symbol3305z00zz__evaluatez00))
																											{	/* Eval/evaluate.scm 424 */
																												return
																													BGl_convzd2beginzd2zz__evaluatez00
																													(CDR(BgL_ez00_69),
																													BgL_localsz00_70,
																													BgL_globalsz00_71,
																													BgL_tailzf3zf3_72,
																													BgL_wherez00_73,
																													BgL_locz00_74,
																													BgL_topzf3zf3_75);
																											}
																										else
																											{	/* Eval/evaluate.scm 424 */
																												obj_t
																													BgL_cdrzd26338zd2_1677;
																												BgL_cdrzd26338zd2_1677 =
																													CDR(BgL_ez00_69);
																												if ((CAR(BgL_ez00_69) ==
																														BGl_symbol3291z00zz__evaluatez00))
																													{	/* Eval/evaluate.scm 424 */
																														if (PAIRP
																															(BgL_cdrzd26338zd2_1677))
																															{	/* Eval/evaluate.scm 424 */
																																obj_t
																																	BgL_arg1695z00_1681;
																																obj_t
																																	BgL_arg1696z00_1682;
																																BgL_arg1695z00_1681
																																	=
																																	CAR
																																	(BgL_cdrzd26338zd2_1677);
																																BgL_arg1696z00_1682
																																	=
																																	CDR
																																	(BgL_cdrzd26338zd2_1677);
																																{
																																	BgL_ev_letz00_bglt
																																		BgL_auxz00_5926;
																																	BgL_bindsz00_1488
																																		=
																																		BgL_arg1695z00_1681;
																																	BgL_bodyz00_1489
																																		=
																																		BgL_arg1696z00_1682;
																																BgL_tagzd2160zd2_1490:
																																	{	/* Eval/evaluate.scm 480 */
																																		obj_t
																																			BgL_ubindsz00_2388;
																																		if (NULLP
																																			(BgL_bindsz00_1488))
																																			{	/* Eval/evaluate.scm 480 */
																																				BgL_ubindsz00_2388
																																					=
																																					BNIL;
																																			}
																																		else
																																			{	/* Eval/evaluate.scm 480 */
																																				obj_t
																																					BgL_head1217z00_2433;
																																				{	/* Eval/evaluate.scm 480 */
																																					obj_t
																																						BgL_res2943z00_3580;
																																					BgL_res2943z00_3580
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BNIL,
																																						BNIL);
																																					BgL_head1217z00_2433
																																						=
																																						BgL_res2943z00_3580;
																																				}
																																				{
																																					obj_t
																																						BgL_l1215z00_3608;
																																					obj_t
																																						BgL_tail1218z00_3609;
																																					BgL_l1215z00_3608
																																						=
																																						BgL_bindsz00_1488;
																																					BgL_tail1218z00_3609
																																						=
																																						BgL_head1217z00_2433;
																																				BgL_zc3z04anonymousza32322ze3z87_3607:
																																					if (NULLP(BgL_l1215z00_3608))
																																						{	/* Eval/evaluate.scm 480 */
																																							BgL_ubindsz00_2388
																																								=
																																								CDR
																																								(BgL_head1217z00_2433);
																																						}
																																					else
																																						{	/* Eval/evaluate.scm 480 */
																																							obj_t
																																								BgL_newtail1219z00_3617;
																																							{	/* Eval/evaluate.scm 480 */
																																								obj_t
																																									BgL_arg2325z00_3618;
																																								{	/* Eval/evaluate.scm 480 */
																																									obj_t
																																										BgL_bz00_3619;
																																									BgL_bz00_3619
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_l1215z00_3608));
																																									{	/* Eval/evaluate.scm 480 */
																																										obj_t
																																											BgL_arg2326z00_3620;
																																										BgL_arg2326z00_3620
																																											=
																																											CAR
																																											(
																																											((obj_t) BgL_bz00_3619));
																																										BgL_arg2325z00_3618
																																											=
																																											BGl_untypezd2identzd2zz__evaluatez00
																																											(BgL_arg2326z00_3620);
																																									}
																																								}
																																								{	/* Eval/evaluate.scm 480 */
																																									obj_t
																																										BgL_res2949z00_3626;
																																									BgL_res2949z00_3626
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_arg2325z00_3618,
																																										BNIL);
																																									BgL_newtail1219z00_3617
																																										=
																																										BgL_res2949z00_3626;
																																								}
																																							}
																																							SET_CDR
																																								(BgL_tail1218z00_3609,
																																								BgL_newtail1219z00_3617);
																																							{	/* Eval/evaluate.scm 480 */
																																								obj_t
																																									BgL_arg2324z00_3621;
																																								BgL_arg2324z00_3621
																																									=
																																									CDR
																																									(
																																									((obj_t) BgL_l1215z00_3608));
																																								{
																																									obj_t
																																										BgL_tail1218z00_5943;
																																									obj_t
																																										BgL_l1215z00_5942;
																																									BgL_l1215z00_5942
																																										=
																																										BgL_arg2324z00_3621;
																																									BgL_tail1218z00_5943
																																										=
																																										BgL_newtail1219z00_3617;
																																									BgL_tail1218z00_3609
																																										=
																																										BgL_tail1218z00_5943;
																																									BgL_l1215z00_3608
																																										=
																																										BgL_l1215z00_5942;
																																									goto
																																										BgL_zc3z04anonymousza32322ze3z87_3607;
																																								}
																																							}
																																						}
																																				}
																																			}
																																		{	/* Eval/evaluate.scm 480 */
																																			obj_t
																																				BgL_varsz00_2389;
																																			if (NULLP
																																				(BgL_ubindsz00_2388))
																																				{	/* Eval/evaluate.scm 481 */
																																					BgL_varsz00_2389
																																						=
																																						BNIL;
																																				}
																																			else
																																				{	/* Eval/evaluate.scm 481 */
																																					obj_t
																																						BgL_head1222z00_2417;
																																					{	/* Eval/evaluate.scm 481 */
																																						obj_t
																																							BgL_res2951z00_3630;
																																						BgL_res2951z00_3630
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BNIL,
																																							BNIL);
																																						BgL_head1222z00_2417
																																							=
																																							BgL_res2951z00_3630;
																																					}
																																					{
																																						obj_t
																																							BgL_l1220z00_2419;
																																						obj_t
																																							BgL_tail1223z00_2420;
																																						BgL_l1220z00_2419
																																							=
																																							BgL_ubindsz00_2388;
																																						BgL_tail1223z00_2420
																																							=
																																							BgL_head1222z00_2417;
																																					BgL_zc3z04anonymousza32316ze3z87_2421:
																																						if (NULLP(BgL_l1220z00_2419))
																																							{	/* Eval/evaluate.scm 481 */
																																								BgL_varsz00_2389
																																									=
																																									CDR
																																									(BgL_head1222z00_2417);
																																							}
																																						else
																																							{	/* Eval/evaluate.scm 481 */
																																								obj_t
																																									BgL_newtail1224z00_2423;
																																								{	/* Eval/evaluate.scm 481 */
																																									BgL_ev_varz00_bglt
																																										BgL_arg2319z00_2425;
																																									{	/* Eval/evaluate.scm 481 */
																																										obj_t
																																											BgL_iz00_2426;
																																										BgL_iz00_2426
																																											=
																																											CAR
																																											(
																																											((obj_t) BgL_l1220z00_2419));
																																										{	/* Eval/evaluate.scm 482 */
																																											BgL_ev_varz00_bglt
																																												BgL_new1125z00_2427;
																																											{	/* Eval/evaluate.scm 484 */
																																												BgL_ev_varz00_bglt
																																													BgL_new1123z00_2428;
																																												BgL_new1123z00_2428
																																													=
																																													(
																																													(BgL_ev_varz00_bglt)
																																													BOBJECT
																																													(GC_MALLOC
																																														(sizeof
																																															(struct
																																																BgL_ev_varz00_bgl))));
																																												{	/* Eval/evaluate.scm 484 */
																																													long
																																														BgL_arg2320z00_2429;
																																													{	/* Eval/evaluate.scm 484 */
																																														long
																																															BgL_res2953z00_3635;
																																														BgL_res2953z00_3635
																																															=
																																															BGL_CLASS_INDEX
																																															(BGl_ev_varz00zz__evaluate_typesz00);
																																														BgL_arg2320z00_2429
																																															=
																																															BgL_res2953z00_3635;
																																													}
																																													BGL_OBJECT_CLASS_NUM_SET
																																														(
																																														((BgL_objectz00_bglt) BgL_new1123z00_2428), BgL_arg2320z00_2429);
																																												}
																																												BgL_new1125z00_2427
																																													=
																																													BgL_new1123z00_2428;
																																											}
																																											((((BgL_ev_varz00_bglt) COBJECT(BgL_new1125z00_2427))->BgL_namez00) = ((obj_t) CAR(((obj_t) BgL_iz00_2426))), BUNSPEC);
																																											((((BgL_ev_varz00_bglt) COBJECT(BgL_new1125z00_2427))->BgL_effz00) = ((obj_t) BFALSE), BUNSPEC);
																																											((((BgL_ev_varz00_bglt) COBJECT(BgL_new1125z00_2427))->BgL_typez00) = ((obj_t) CDR(((obj_t) BgL_iz00_2426))), BUNSPEC);
																																											BgL_arg2319z00_2425
																																												=
																																												BgL_new1125z00_2427;
																																									}}
																																									{	/* Eval/evaluate.scm 481 */
																																										obj_t
																																											BgL_res2954z00_3640;
																																										BgL_res2954z00_3640
																																											=
																																											MAKE_YOUNG_PAIR
																																											(
																																											((obj_t) BgL_arg2319z00_2425), BNIL);
																																										BgL_newtail1224z00_2423
																																											=
																																											BgL_res2954z00_3640;
																																								}}
																																								SET_CDR
																																									(BgL_tail1223z00_2420,
																																									BgL_newtail1224z00_2423);
																																								{	/* Eval/evaluate.scm 481 */
																																									obj_t
																																										BgL_arg2318z00_2424;
																																									BgL_arg2318z00_2424
																																										=
																																										CDR
																																										(
																																										((obj_t) BgL_l1220z00_2419));
																																									{
																																										obj_t
																																											BgL_tail1223z00_5969;
																																										obj_t
																																											BgL_l1220z00_5968;
																																										BgL_l1220z00_5968
																																											=
																																											BgL_arg2318z00_2424;
																																										BgL_tail1223z00_5969
																																											=
																																											BgL_newtail1224z00_2423;
																																										BgL_tail1223z00_2420
																																											=
																																											BgL_tail1223z00_5969;
																																										BgL_l1220z00_2419
																																											=
																																											BgL_l1220z00_5968;
																																										goto
																																											BgL_zc3z04anonymousza32316ze3z87_2421;
																																									}
																																								}
																																							}
																																					}
																																				}
																																			{	/* Eval/evaluate.scm 481 */
																																				obj_t
																																					BgL_bodyz00_2390;
																																				{	/* Eval/evaluate.scm 486 */
																																					bool_t
																																						BgL_test3540z00_5970;
																																					{	/* Eval/evaluate.scm 486 */
																																						obj_t
																																							BgL_tmpz00_5971;
																																						BgL_tmpz00_5971
																																							=
																																							CDR
																																							(((obj_t) BgL_bodyz00_1489));
																																						BgL_test3540z00_5970
																																							=
																																							PAIRP
																																							(BgL_tmpz00_5971);
																																					}
																																					if (BgL_test3540z00_5970)
																																						{	/* Eval/evaluate.scm 486 */
																																							obj_t
																																								BgL_res2956z00_3646;
																																							BgL_res2956z00_3646
																																								=
																																								MAKE_YOUNG_EPAIR
																																								(BGl_symbol3305z00zz__evaluatez00,
																																								BgL_bodyz00_1489,
																																								BgL_locz00_74);
																																							BgL_bodyz00_2390
																																								=
																																								BgL_res2956z00_3646;
																																						}
																																					else
																																						{	/* Eval/evaluate.scm 486 */
																																							BgL_bodyz00_2390
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_bodyz00_1489));
																																						}
																																				}
																																				{	/* Eval/evaluate.scm 486 */
																																					obj_t
																																						BgL_tbodyz00_2391;
																																					BgL_tbodyz00_2391
																																						=
																																						BGl_typezd2checkszd2zz__evaluatez00
																																						(BgL_ubindsz00_2388,
																																						BgL_bindsz00_1488,
																																						BgL_bodyz00_2390,
																																						BgL_locz00_74,
																																						BgL_wherez00_73);
																																					{	/* Eval/evaluate.scm 487 */

																																						{	/* Eval/evaluate.scm 488 */
																																							obj_t
																																								BgL_blocz00_2392;
																																							{	/* Eval/evaluate.scm 144 */
																																								obj_t
																																									BgL__ortest_1068z00_3648;
																																								BgL__ortest_1068z00_3648
																																									=
																																									BGl_getzd2sourcezd2locationz00zz__readerz00
																																									(BgL_bindsz00_1488);
																																								if (CBOOL(BgL__ortest_1068z00_3648))
																																									{	/* Eval/evaluate.scm 144 */
																																										BgL_blocz00_2392
																																											=
																																											BgL__ortest_1068z00_3648;
																																									}
																																								else
																																									{	/* Eval/evaluate.scm 144 */
																																										BgL_blocz00_2392
																																											=
																																											BgL_locz00_74;
																																									}
																																							}
																																							{	/* Eval/evaluate.scm 489 */
																																								BgL_ev_letz00_bglt
																																									BgL_new1128z00_2393;
																																								{	/* Eval/evaluate.scm 490 */
																																									BgL_ev_letz00_bglt
																																										BgL_new1126z00_2410;
																																									BgL_new1126z00_2410
																																										=
																																										(
																																										(BgL_ev_letz00_bglt)
																																										BOBJECT
																																										(GC_MALLOC
																																											(sizeof
																																												(struct
																																													BgL_ev_letz00_bgl))));
																																									{	/* Eval/evaluate.scm 490 */
																																										long
																																											BgL_arg2311z00_2411;
																																										{	/* Eval/evaluate.scm 490 */
																																											long
																																												BgL_res2957z00_3650;
																																											BgL_res2957z00_3650
																																												=
																																												BGL_CLASS_INDEX
																																												(BGl_ev_letz00zz__evaluate_typesz00);
																																											BgL_arg2311z00_2411
																																												=
																																												BgL_res2957z00_3650;
																																										}
																																										BGL_OBJECT_CLASS_NUM_SET
																																											(
																																											((BgL_objectz00_bglt) BgL_new1126z00_2410), BgL_arg2311z00_2411);
																																									}
																																									BgL_new1128z00_2393
																																										=
																																										BgL_new1126z00_2410;
																																								}
																																								((((BgL_ev_binderz00_bglt) COBJECT(((BgL_ev_binderz00_bglt) BgL_new1128z00_2393)))->BgL_varsz00) = ((obj_t) BgL_varsz00_2389), BUNSPEC);
																																								{
																																									obj_t
																																										BgL_auxz00_5988;
																																									if (NULLP(BgL_bindsz00_1488))
																																										{	/* Eval/evaluate.scm 491 */
																																											BgL_auxz00_5988
																																												=
																																												BNIL;
																																										}
																																									else
																																										{	/* Eval/evaluate.scm 491 */
																																											obj_t
																																												BgL_head1227z00_2396;
																																											{	/* Eval/evaluate.scm 491 */
																																												obj_t
																																													BgL_res2959z00_3654;
																																												BgL_res2959z00_3654
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BNIL,
																																													BNIL);
																																												BgL_head1227z00_2396
																																													=
																																													BgL_res2959z00_3654;
																																											}
																																											{
																																												obj_t
																																													BgL_l1225z00_2398;
																																												obj_t
																																													BgL_tail1228z00_2399;
																																												BgL_l1225z00_2398
																																													=
																																													BgL_bindsz00_1488;
																																												BgL_tail1228z00_2399
																																													=
																																													BgL_head1227z00_2396;
																																											BgL_zc3z04anonymousza32305ze3z87_2400:
																																												if (NULLP(BgL_l1225z00_2398))
																																													{	/* Eval/evaluate.scm 491 */
																																														BgL_auxz00_5988
																																															=
																																															CDR
																																															(BgL_head1227z00_2396);
																																													}
																																												else
																																													{	/* Eval/evaluate.scm 491 */
																																														obj_t
																																															BgL_newtail1229z00_2402;
																																														{	/* Eval/evaluate.scm 491 */
																																															obj_t
																																																BgL_arg2308z00_2404;
																																															{	/* Eval/evaluate.scm 491 */
																																																obj_t
																																																	BgL_bz00_2405;
																																																BgL_bz00_2405
																																																	=
																																																	CAR
																																																	(
																																																	((obj_t) BgL_l1225z00_2398));
																																																{	/* Eval/evaluate.scm 492 */
																																																	obj_t
																																																		BgL_locz00_2406;
																																																	{	/* Eval/evaluate.scm 144 */
																																																		obj_t
																																																			BgL__ortest_1068z00_3658;
																																																		BgL__ortest_1068z00_3658
																																																			=
																																																			BGl_getzd2sourcezd2locationz00zz__readerz00
																																																			(BgL_bz00_2405);
																																																		if (CBOOL(BgL__ortest_1068z00_3658))
																																																			{	/* Eval/evaluate.scm 144 */
																																																				BgL_locz00_2406
																																																					=
																																																					BgL__ortest_1068z00_3658;
																																																			}
																																																		else
																																																			{	/* Eval/evaluate.scm 144 */
																																																				BgL_locz00_2406
																																																					=
																																																					BgL_blocz00_2392;
																																																			}
																																																	}
																																																	{	/* Eval/evaluate.scm 493 */
																																																		obj_t
																																																			BgL_arg2309z00_2407;
																																																		{	/* Eval/evaluate.scm 493 */
																																																			obj_t
																																																				BgL_pairz00_3662;
																																																			BgL_pairz00_3662
																																																				=
																																																				CDR
																																																				(
																																																				((obj_t) BgL_bz00_2405));
																																																			BgL_arg2309z00_2407
																																																				=
																																																				CAR
																																																				(BgL_pairz00_3662);
																																																		}
																																																		BgL_arg2308z00_2404
																																																			=
																																																			BGl_convz00zz__evaluatez00
																																																			(BgL_arg2309z00_2407,
																																																			BgL_localsz00_70,
																																																			BgL_globalsz00_71,
																																																			BFALSE,
																																																			BgL_wherez00_73,
																																																			BgL_locz00_2406,
																																																			((bool_t) 0));
																																																	}
																																																}
																																															}
																																															{	/* Eval/evaluate.scm 491 */
																																																obj_t
																																																	BgL_res2961z00_3663;
																																																BgL_res2961z00_3663
																																																	=
																																																	MAKE_YOUNG_PAIR
																																																	(BgL_arg2308z00_2404,
																																																	BNIL);
																																																BgL_newtail1229z00_2402
																																																	=
																																																	BgL_res2961z00_3663;
																																															}
																																														}
																																														SET_CDR
																																															(BgL_tail1228z00_2399,
																																															BgL_newtail1229z00_2402);
																																														{	/* Eval/evaluate.scm 491 */
																																															obj_t
																																																BgL_arg2307z00_2403;
																																															BgL_arg2307z00_2403
																																																=
																																																CDR
																																																(
																																																((obj_t) BgL_l1225z00_2398));
																																															{
																																																obj_t
																																																	BgL_tail1228z00_6010;
																																																obj_t
																																																	BgL_l1225z00_6009;
																																																BgL_l1225z00_6009
																																																	=
																																																	BgL_arg2307z00_2403;
																																																BgL_tail1228z00_6010
																																																	=
																																																	BgL_newtail1229z00_2402;
																																																BgL_tail1228z00_2399
																																																	=
																																																	BgL_tail1228z00_6010;
																																																BgL_l1225z00_2398
																																																	=
																																																	BgL_l1225z00_6009;
																																																goto
																																																	BgL_zc3z04anonymousza32305ze3z87_2400;
																																															}
																																														}
																																													}
																																											}
																																										}
																																									((((BgL_ev_binderz00_bglt) COBJECT(((BgL_ev_binderz00_bglt) BgL_new1128z00_2393)))->BgL_valsz00) = ((obj_t) BgL_auxz00_5988), BUNSPEC);
																																								}
																																								{
																																									BgL_ev_exprz00_bglt
																																										BgL_auxz00_6012;
																																									{	/* Eval/evaluate.scm 495 */
																																										obj_t
																																											BgL_arg2310z00_2409;
																																										BgL_arg2310z00_2409
																																											=
																																											BGl_appendzd221011zd2zz__evaluatez00
																																											(BgL_varsz00_2389,
																																											BgL_localsz00_70);
																																										BgL_auxz00_6012
																																											=
																																											(
																																											(BgL_ev_exprz00_bglt)
																																											BGl_convz00zz__evaluatez00
																																											(BgL_tbodyz00_2391,
																																												BgL_arg2310z00_2409,
																																												BgL_globalsz00_71,
																																												BgL_tailzf3zf3_72,
																																												BgL_wherez00_73,
																																												BgL_locz00_74,
																																												((bool_t) 0)));
																																									}
																																									((((BgL_ev_binderz00_bglt) COBJECT(((BgL_ev_binderz00_bglt) BgL_new1128z00_2393)))->BgL_bodyz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_6012), BUNSPEC);
																																								}
																																								((((BgL_ev_letz00_bglt) COBJECT(BgL_new1128z00_2393))->BgL_boxesz00) = ((obj_t) BNIL), BUNSPEC);
																																								BgL_auxz00_5926
																																									=
																																									BgL_new1128z00_2393;
																																							}
																																						}
																																					}
																																				}
																																			}
																																		}
																																	}
																																	return
																																		((obj_t)
																																		BgL_auxz00_5926);
																																}
																															}
																														else
																															{	/* Eval/evaluate.scm 424 */
																																obj_t
																																	BgL_arg1697z00_1683;
																																BgL_arg1697z00_1683
																																	=
																																	CAR
																																	(BgL_ez00_69);
																																{
																																	BgL_ev_appz00_bglt
																																		BgL_auxz00_6021;
																																	{
																																		obj_t
																																			BgL_argsz00_6023;
																																		obj_t
																																			BgL_fz00_6022;
																																		BgL_fz00_6022
																																			=
																																			BgL_arg1697z00_1683;
																																		BgL_argsz00_6023
																																			=
																																			BgL_cdrzd26338zd2_1677;
																																		BgL_argsz00_1536
																																			=
																																			BgL_argsz00_6023;
																																		BgL_fz00_1535
																																			=
																																			BgL_fz00_6022;
																																		goto
																																			BgL_tagzd2176zd2_1537;
																																	}
																																	return
																																		((obj_t)
																																		BgL_auxz00_6021);
																																}
																															}
																													}
																												else
																													{	/* Eval/evaluate.scm 424 */
																														if (
																															(CAR(BgL_ez00_69)
																																==
																																BGl_symbol3322z00zz__evaluatez00))
																															{	/* Eval/evaluate.scm 424 */
																																if (PAIRP
																																	(BgL_cdrzd26338zd2_1677))
																																	{	/* Eval/evaluate.scm 424 */
																																		obj_t
																																			BgL_arg1702z00_1689;
																																		obj_t
																																			BgL_arg1704z00_1690;
																																		BgL_arg1702z00_1689
																																			=
																																			CAR
																																			(BgL_cdrzd26338zd2_1677);
																																		BgL_arg1704z00_1690
																																			=
																																			CDR
																																			(BgL_cdrzd26338zd2_1677);
																																		{
																																			BgL_ev_letza2za2_bglt
																																				BgL_auxz00_6032;
																																			BgL_bindsz00_1491
																																				=
																																				BgL_arg1702z00_1689;
																																			BgL_bodyz00_1492
																																				=
																																				BgL_arg1704z00_1690;
																																		BgL_tagzd2161zd2_1493:
																																			{	/* Eval/evaluate.scm 503 */
																																				obj_t
																																					BgL_varsz00_2446;
																																				obj_t
																																					BgL_blocz00_2447;
																																				if (NULLP(BgL_bindsz00_1491))
																																					{	/* Eval/evaluate.scm 503 */
																																						BgL_varsz00_2446
																																							=
																																							BNIL;
																																					}
																																				else
																																					{	/* Eval/evaluate.scm 503 */
																																						obj_t
																																							BgL_head1232z00_2455;
																																						{	/* Eval/evaluate.scm 503 */
																																							obj_t
																																								BgL_res2964z00_3689;
																																							BgL_res2964z00_3689
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BNIL,
																																								BNIL);
																																							BgL_head1232z00_2455
																																								=
																																								BgL_res2964z00_3689;
																																						}
																																						{
																																							obj_t
																																								BgL_l1230z00_2457;
																																							obj_t
																																								BgL_tail1233z00_2458;
																																							BgL_l1230z00_2457
																																								=
																																								BgL_bindsz00_1491;
																																							BgL_tail1233z00_2458
																																								=
																																								BgL_head1232z00_2455;
																																						BgL_zc3z04anonymousza32331ze3z87_2459:
																																							if (NULLP(BgL_l1230z00_2457))
																																								{	/* Eval/evaluate.scm 503 */
																																									BgL_varsz00_2446
																																										=
																																										CDR
																																										(BgL_head1232z00_2455);
																																								}
																																							else
																																								{	/* Eval/evaluate.scm 503 */
																																									obj_t
																																										BgL_newtail1234z00_2461;
																																									{	/* Eval/evaluate.scm 503 */
																																										BgL_ev_varz00_bglt
																																											BgL_arg2335z00_2463;
																																										{	/* Eval/evaluate.scm 503 */
																																											obj_t
																																												BgL_bz00_2464;
																																											BgL_bz00_2464
																																												=
																																												CAR
																																												(
																																												((obj_t) BgL_l1230z00_2457));
																																											{	/* Eval/evaluate.scm 504 */
																																												obj_t
																																													BgL_iz00_2465;
																																												{	/* Eval/evaluate.scm 504 */
																																													obj_t
																																														BgL_arg2337z00_2469;
																																													BgL_arg2337z00_2469
																																														=
																																														CAR
																																														(
																																														((obj_t) BgL_bz00_2464));
																																													BgL_iz00_2465
																																														=
																																														BGl_untypezd2identzd2zz__evaluatez00
																																														(BgL_arg2337z00_2469);
																																												}
																																												{	/* Eval/evaluate.scm 505 */
																																													BgL_ev_varz00_bglt
																																														BgL_new1131z00_2466;
																																													{	/* Eval/evaluate.scm 507 */
																																														BgL_ev_varz00_bglt
																																															BgL_new1130z00_2467;
																																														BgL_new1130z00_2467
																																															=
																																															(
																																															(BgL_ev_varz00_bglt)
																																															BOBJECT
																																															(GC_MALLOC
																																																(sizeof
																																																	(struct
																																																		BgL_ev_varz00_bgl))));
																																														{	/* Eval/evaluate.scm 507 */
																																															long
																																																BgL_arg2336z00_2468;
																																															{	/* Eval/evaluate.scm 507 */
																																																long
																																																	BgL_res2966z00_3695;
																																																BgL_res2966z00_3695
																																																	=
																																																	BGL_CLASS_INDEX
																																																	(BGl_ev_varz00zz__evaluate_typesz00);
																																																BgL_arg2336z00_2468
																																																	=
																																																	BgL_res2966z00_3695;
																																															}
																																															BGL_OBJECT_CLASS_NUM_SET
																																																(
																																																((BgL_objectz00_bglt) BgL_new1130z00_2467), BgL_arg2336z00_2468);
																																														}
																																														BgL_new1131z00_2466
																																															=
																																															BgL_new1130z00_2467;
																																													}
																																													((((BgL_ev_varz00_bglt) COBJECT(BgL_new1131z00_2466))->BgL_namez00) = ((obj_t) CAR(BgL_iz00_2465)), BUNSPEC);
																																													((((BgL_ev_varz00_bglt) COBJECT(BgL_new1131z00_2466))->BgL_effz00) = ((obj_t) BFALSE), BUNSPEC);
																																													((((BgL_ev_varz00_bglt) COBJECT(BgL_new1131z00_2466))->BgL_typez00) = ((obj_t) CDR(BgL_iz00_2465)), BUNSPEC);
																																													BgL_arg2335z00_2463
																																														=
																																														BgL_new1131z00_2466;
																																										}}}
																																										{	/* Eval/evaluate.scm 503 */
																																											obj_t
																																												BgL_res2967z00_3700;
																																											BgL_res2967z00_3700
																																												=
																																												MAKE_YOUNG_PAIR
																																												(
																																												((obj_t) BgL_arg2335z00_2463), BNIL);
																																											BgL_newtail1234z00_2461
																																												=
																																												BgL_res2967z00_3700;
																																									}}
																																									SET_CDR
																																										(BgL_tail1233z00_2458,
																																										BgL_newtail1234z00_2461);
																																									{	/* Eval/evaluate.scm 503 */
																																										obj_t
																																											BgL_arg2334z00_2462;
																																										BgL_arg2334z00_2462
																																											=
																																											CDR
																																											(
																																											((obj_t) BgL_l1230z00_2457));
																																										{
																																											obj_t
																																												BgL_tail1233z00_6059;
																																											obj_t
																																												BgL_l1230z00_6058;
																																											BgL_l1230z00_6058
																																												=
																																												BgL_arg2334z00_2462;
																																											BgL_tail1233z00_6059
																																												=
																																												BgL_newtail1234z00_2461;
																																											BgL_tail1233z00_2458
																																												=
																																												BgL_tail1233z00_6059;
																																											BgL_l1230z00_2457
																																												=
																																												BgL_l1230z00_6058;
																																											goto
																																												BgL_zc3z04anonymousza32331ze3z87_2459;
																																										}
																																									}
																																								}
																																						}
																																					}
																																				{	/* Eval/evaluate.scm 144 */
																																					obj_t
																																						BgL__ortest_1068z00_3703;
																																					BgL__ortest_1068z00_3703
																																						=
																																						BGl_getzd2sourcezd2locationz00zz__readerz00
																																						(BgL_bindsz00_1491);
																																					if (CBOOL(BgL__ortest_1068z00_3703))
																																						{	/* Eval/evaluate.scm 144 */
																																							BgL_blocz00_2447
																																								=
																																								BgL__ortest_1068z00_3703;
																																						}
																																					else
																																						{	/* Eval/evaluate.scm 144 */
																																							BgL_blocz00_2447
																																								=
																																								BgL_locz00_74;
																																						}
																																				}
																																				{	/* Eval/evaluate.scm 510 */
																																					BgL_ev_letza2za2_bglt
																																						BgL_new1134z00_2448;
																																					{	/* Eval/evaluate.scm 511 */
																																						BgL_ev_letza2za2_bglt
																																							BgL_new1133z00_2451;
																																						BgL_new1133z00_2451
																																							=
																																							(
																																							(BgL_ev_letza2za2_bglt)
																																							BOBJECT
																																							(GC_MALLOC
																																								(sizeof
																																									(struct
																																										BgL_ev_letza2za2_bgl))));
																																						{	/* Eval/evaluate.scm 511 */
																																							long
																																								BgL_arg2329z00_2452;
																																							{	/* Eval/evaluate.scm 511 */
																																								long
																																									BgL_res2968z00_3705;
																																								BgL_res2968z00_3705
																																									=
																																									BGL_CLASS_INDEX
																																									(BGl_ev_letza2za2zz__evaluate_typesz00);
																																								BgL_arg2329z00_2452
																																									=
																																									BgL_res2968z00_3705;
																																							}
																																							BGL_OBJECT_CLASS_NUM_SET
																																								(
																																								((BgL_objectz00_bglt) BgL_new1133z00_2451), BgL_arg2329z00_2452);
																																						}
																																						BgL_new1134z00_2448
																																							=
																																							BgL_new1133z00_2451;
																																					}
																																					((((BgL_ev_binderz00_bglt) COBJECT(((BgL_ev_binderz00_bglt) BgL_new1134z00_2448)))->BgL_varsz00) = ((obj_t) BgL_varsz00_2446), BUNSPEC);
																																					((((BgL_ev_binderz00_bglt) COBJECT(((BgL_ev_binderz00_bglt) BgL_new1134z00_2448)))->BgL_valsz00) = ((obj_t) BGl_convzd2valsze70z35zz__evaluatez00(BgL_wherez00_73, BgL_globalsz00_71, BgL_bindsz00_1491, BgL_varsz00_2446, BgL_localsz00_70, BgL_blocz00_2447)), BUNSPEC);
																																					{
																																						BgL_ev_exprz00_bglt
																																							BgL_auxz00_6072;
																																						{	/* Eval/evaluate.scm 513 */
																																							obj_t
																																								BgL_arg2327z00_2449;
																																							{	/* Eval/evaluate.scm 513 */
																																								obj_t
																																									BgL_arg2328z00_2450;
																																								BgL_arg2328z00_2450
																																									=
																																									bgl_reverse
																																									(BgL_varsz00_2446);
																																								BgL_arg2327z00_2449
																																									=
																																									BGl_appendzd221011zd2zz__evaluatez00
																																									(BgL_arg2328z00_2450,
																																									BgL_localsz00_70);
																																							}
																																							BgL_auxz00_6072
																																								=
																																								(
																																								(BgL_ev_exprz00_bglt)
																																								BGl_convzd2beginzd2zz__evaluatez00
																																								(BgL_bodyz00_1492,
																																									BgL_arg2327z00_2449,
																																									BgL_globalsz00_71,
																																									BgL_tailzf3zf3_72,
																																									BgL_wherez00_73,
																																									BgL_locz00_74,
																																									((bool_t) 0)));
																																						}
																																						((((BgL_ev_binderz00_bglt) COBJECT(((BgL_ev_binderz00_bglt) BgL_new1134z00_2448)))->BgL_bodyz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_6072), BUNSPEC);
																																					}
																																					((((BgL_ev_letza2za2_bglt) COBJECT(BgL_new1134z00_2448))->BgL_boxesz00) = ((obj_t) BNIL), BUNSPEC);
																																					BgL_auxz00_6032
																																						=
																																						BgL_new1134z00_2448;
																																			}}
																																			return
																																				((obj_t)
																																				BgL_auxz00_6032);
																																		}
																																	}
																																else
																																	{	/* Eval/evaluate.scm 424 */
																																		obj_t
																																			BgL_arg1707z00_1691;
																																		obj_t
																																			BgL_arg1708z00_1692;
																																		BgL_arg1707z00_1691
																																			=
																																			CAR
																																			(BgL_ez00_69);
																																		BgL_arg1708z00_1692
																																			=
																																			CDR
																																			(BgL_ez00_69);
																																		{
																																			BgL_ev_appz00_bglt
																																				BgL_auxz00_6083;
																																			{
																																				obj_t
																																					BgL_argsz00_6085;
																																				obj_t
																																					BgL_fz00_6084;
																																				BgL_fz00_6084
																																					=
																																					BgL_arg1707z00_1691;
																																				BgL_argsz00_6085
																																					=
																																					BgL_arg1708z00_1692;
																																				BgL_argsz00_1536
																																					=
																																					BgL_argsz00_6085;
																																				BgL_fz00_1535
																																					=
																																					BgL_fz00_6084;
																																				goto
																																					BgL_tagzd2176zd2_1537;
																																			}
																																			return
																																				((obj_t)
																																				BgL_auxz00_6083);
																																		}
																																	}
																															}
																														else
																															{	/* Eval/evaluate.scm 424 */
																																obj_t
																																	BgL_cdrzd26736zd2_1693;
																																BgL_cdrzd26736zd2_1693
																																	=
																																	CDR
																																	(BgL_ez00_69);
																																if ((CAR
																																		(BgL_ez00_69)
																																		==
																																		BGl_symbol3324z00zz__evaluatez00))
																																	{	/* Eval/evaluate.scm 424 */
																																		if (PAIRP
																																			(BgL_cdrzd26736zd2_1693))
																																			{	/* Eval/evaluate.scm 424 */
																																				obj_t
																																					BgL_arg1712z00_1697;
																																				obj_t
																																					BgL_arg1713z00_1698;
																																				BgL_arg1712z00_1697
																																					=
																																					CAR
																																					(BgL_cdrzd26736zd2_1693);
																																				BgL_arg1713z00_1698
																																					=
																																					CDR
																																					(BgL_cdrzd26736zd2_1693);
																																				{
																																					BgL_ev_letrecz00_bglt
																																						BgL_auxz00_6095;
																																					BgL_bindsz00_1494
																																						=
																																						BgL_arg1712z00_1697;
																																					BgL_bodyz00_1495
																																						=
																																						BgL_arg1713z00_1698;
																																				BgL_tagzd2162zd2_1496:
																																					{	/* Eval/evaluate.scm 515 */
																																						obj_t
																																							BgL_ubindsz00_2487;
																																						if (NULLP(BgL_bindsz00_1494))
																																							{	/* Eval/evaluate.scm 515 */
																																								BgL_ubindsz00_2487
																																									=
																																									BNIL;
																																							}
																																						else
																																							{	/* Eval/evaluate.scm 515 */
																																								obj_t
																																									BgL_head1237z00_2537;
																																								{	/* Eval/evaluate.scm 515 */
																																									obj_t
																																										BgL_res2970z00_3709;
																																									BgL_res2970z00_3709
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BNIL,
																																										BNIL);
																																									BgL_head1237z00_2537
																																										=
																																										BgL_res2970z00_3709;
																																								}
																																								{
																																									obj_t
																																										BgL_l1235z00_3737;
																																									obj_t
																																										BgL_tail1238z00_3738;
																																									BgL_l1235z00_3737
																																										=
																																										BgL_bindsz00_1494;
																																									BgL_tail1238z00_3738
																																										=
																																										BgL_head1237z00_2537;
																																								BgL_zc3z04anonymousza32373ze3z87_3736:
																																									if (NULLP(BgL_l1235z00_3737))
																																										{	/* Eval/evaluate.scm 515 */
																																											BgL_ubindsz00_2487
																																												=
																																												CDR
																																												(BgL_head1237z00_2537);
																																										}
																																									else
																																										{	/* Eval/evaluate.scm 515 */
																																											obj_t
																																												BgL_newtail1239z00_3746;
																																											{	/* Eval/evaluate.scm 515 */
																																												obj_t
																																													BgL_arg2377z00_3747;
																																												{	/* Eval/evaluate.scm 515 */
																																													obj_t
																																														BgL_bz00_3748;
																																													BgL_bz00_3748
																																														=
																																														CAR
																																														(
																																														((obj_t) BgL_l1235z00_3737));
																																													{	/* Eval/evaluate.scm 515 */
																																														obj_t
																																															BgL_arg2379z00_3749;
																																														BgL_arg2379z00_3749
																																															=
																																															CAR
																																															(
																																															((obj_t) BgL_bz00_3748));
																																														BgL_arg2377z00_3747
																																															=
																																															BGl_untypezd2identzd2zz__evaluatez00
																																															(BgL_arg2379z00_3749);
																																													}
																																												}
																																												{	/* Eval/evaluate.scm 515 */
																																													obj_t
																																														BgL_res2976z00_3755;
																																													BgL_res2976z00_3755
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BgL_arg2377z00_3747,
																																														BNIL);
																																													BgL_newtail1239z00_3746
																																														=
																																														BgL_res2976z00_3755;
																																												}
																																											}
																																											SET_CDR
																																												(BgL_tail1238z00_3738,
																																												BgL_newtail1239z00_3746);
																																											{	/* Eval/evaluate.scm 515 */
																																												obj_t
																																													BgL_arg2376z00_3750;
																																												BgL_arg2376z00_3750
																																													=
																																													CDR
																																													(
																																													((obj_t) BgL_l1235z00_3737));
																																												{
																																													obj_t
																																														BgL_tail1238z00_6112;
																																													obj_t
																																														BgL_l1235z00_6111;
																																													BgL_l1235z00_6111
																																														=
																																														BgL_arg2376z00_3750;
																																													BgL_tail1238z00_6112
																																														=
																																														BgL_newtail1239z00_3746;
																																													BgL_tail1238z00_3738
																																														=
																																														BgL_tail1238z00_6112;
																																													BgL_l1235z00_3737
																																														=
																																														BgL_l1235z00_6111;
																																													goto
																																														BgL_zc3z04anonymousza32373ze3z87_3736;
																																												}
																																											}
																																										}
																																								}
																																							}
																																						{	/* Eval/evaluate.scm 515 */
																																							obj_t
																																								BgL_varsz00_2488;
																																							if (NULLP(BgL_ubindsz00_2487))
																																								{	/* Eval/evaluate.scm 516 */
																																									BgL_varsz00_2488
																																										=
																																										BNIL;
																																								}
																																							else
																																								{	/* Eval/evaluate.scm 516 */
																																									obj_t
																																										BgL_head1242z00_2521;
																																									{	/* Eval/evaluate.scm 516 */
																																										obj_t
																																											BgL_res2978z00_3759;
																																										BgL_res2978z00_3759
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BNIL,
																																											BNIL);
																																										BgL_head1242z00_2521
																																											=
																																											BgL_res2978z00_3759;
																																									}
																																									{
																																										obj_t
																																											BgL_l1240z00_2523;
																																										obj_t
																																											BgL_tail1243z00_2524;
																																										BgL_l1240z00_2523
																																											=
																																											BgL_ubindsz00_2487;
																																										BgL_tail1243z00_2524
																																											=
																																											BgL_head1242z00_2521;
																																									BgL_zc3z04anonymousza32367ze3z87_2525:
																																										if (NULLP(BgL_l1240z00_2523))
																																											{	/* Eval/evaluate.scm 516 */
																																												BgL_varsz00_2488
																																													=
																																													CDR
																																													(BgL_head1242z00_2521);
																																											}
																																										else
																																											{	/* Eval/evaluate.scm 516 */
																																												obj_t
																																													BgL_newtail1244z00_2527;
																																												{	/* Eval/evaluate.scm 516 */
																																													BgL_ev_varz00_bglt
																																														BgL_arg2370z00_2529;
																																													{	/* Eval/evaluate.scm 516 */
																																														obj_t
																																															BgL_iz00_2530;
																																														BgL_iz00_2530
																																															=
																																															CAR
																																															(
																																															((obj_t) BgL_l1240z00_2523));
																																														{	/* Eval/evaluate.scm 517 */
																																															BgL_ev_varz00_bglt
																																																BgL_new1136z00_2531;
																																															{	/* Eval/evaluate.scm 519 */
																																																BgL_ev_varz00_bglt
																																																	BgL_new1135z00_2532;
																																																BgL_new1135z00_2532
																																																	=
																																																	(
																																																	(BgL_ev_varz00_bglt)
																																																	BOBJECT
																																																	(GC_MALLOC
																																																		(sizeof
																																																			(struct
																																																				BgL_ev_varz00_bgl))));
																																																{	/* Eval/evaluate.scm 519 */
																																																	long
																																																		BgL_arg2371z00_2533;
																																																	{	/* Eval/evaluate.scm 519 */
																																																		long
																																																			BgL_res2980z00_3764;
																																																		BgL_res2980z00_3764
																																																			=
																																																			BGL_CLASS_INDEX
																																																			(BGl_ev_varz00zz__evaluate_typesz00);
																																																		BgL_arg2371z00_2533
																																																			=
																																																			BgL_res2980z00_3764;
																																																	}
																																																	BGL_OBJECT_CLASS_NUM_SET
																																																		(
																																																		((BgL_objectz00_bglt) BgL_new1135z00_2532), BgL_arg2371z00_2533);
																																																}
																																																BgL_new1136z00_2531
																																																	=
																																																	BgL_new1135z00_2532;
																																															}
																																															((((BgL_ev_varz00_bglt) COBJECT(BgL_new1136z00_2531))->BgL_namez00) = ((obj_t) CAR(((obj_t) BgL_iz00_2530))), BUNSPEC);
																																															((((BgL_ev_varz00_bglt) COBJECT(BgL_new1136z00_2531))->BgL_effz00) = ((obj_t) BFALSE), BUNSPEC);
																																															((((BgL_ev_varz00_bglt) COBJECT(BgL_new1136z00_2531))->BgL_typez00) = ((obj_t) CDR(((obj_t) BgL_iz00_2530))), BUNSPEC);
																																															BgL_arg2370z00_2529
																																																=
																																																BgL_new1136z00_2531;
																																													}}
																																													{	/* Eval/evaluate.scm 516 */
																																														obj_t
																																															BgL_res2981z00_3769;
																																														BgL_res2981z00_3769
																																															=
																																															MAKE_YOUNG_PAIR
																																															(
																																															((obj_t) BgL_arg2370z00_2529), BNIL);
																																														BgL_newtail1244z00_2527
																																															=
																																															BgL_res2981z00_3769;
																																												}}
																																												SET_CDR
																																													(BgL_tail1243z00_2524,
																																													BgL_newtail1244z00_2527);
																																												{	/* Eval/evaluate.scm 516 */
																																													obj_t
																																														BgL_arg2369z00_2528;
																																													BgL_arg2369z00_2528
																																														=
																																														CDR
																																														(
																																														((obj_t) BgL_l1240z00_2523));
																																													{
																																														obj_t
																																															BgL_tail1243z00_6138;
																																														obj_t
																																															BgL_l1240z00_6137;
																																														BgL_l1240z00_6137
																																															=
																																															BgL_arg2369z00_2528;
																																														BgL_tail1243z00_6138
																																															=
																																															BgL_newtail1244z00_2527;
																																														BgL_tail1243z00_2524
																																															=
																																															BgL_tail1243z00_6138;
																																														BgL_l1240z00_2523
																																															=
																																															BgL_l1240z00_6137;
																																														goto
																																															BgL_zc3z04anonymousza32367ze3z87_2525;
																																													}
																																												}
																																											}
																																									}
																																								}
																																							{	/* Eval/evaluate.scm 516 */
																																								obj_t
																																									BgL_localsz00_2489;
																																								BgL_localsz00_2489
																																									=
																																									BGl_appendzd221011zd2zz__evaluatez00
																																									(BgL_varsz00_2488,
																																									BgL_localsz00_70);
																																								{	/* Eval/evaluate.scm 521 */
																																									obj_t
																																										BgL_bodyz00_2490;
																																									{	/* Eval/evaluate.scm 522 */
																																										bool_t
																																											BgL_test3556z00_6140;
																																										{	/* Eval/evaluate.scm 522 */
																																											obj_t
																																												BgL_tmpz00_6141;
																																											BgL_tmpz00_6141
																																												=
																																												CDR
																																												(
																																												((obj_t) BgL_bodyz00_1495));
																																											BgL_test3556z00_6140
																																												=
																																												PAIRP
																																												(BgL_tmpz00_6141);
																																										}
																																										if (BgL_test3556z00_6140)
																																											{	/* Eval/evaluate.scm 522 */
																																												obj_t
																																													BgL_res2983z00_3775;
																																												BgL_res2983z00_3775
																																													=
																																													MAKE_YOUNG_EPAIR
																																													(BGl_symbol3305z00zz__evaluatez00,
																																													BgL_bodyz00_1495,
																																													BgL_locz00_74);
																																												BgL_bodyz00_2490
																																													=
																																													BgL_res2983z00_3775;
																																											}
																																										else
																																											{	/* Eval/evaluate.scm 522 */
																																												BgL_bodyz00_2490
																																													=
																																													CAR
																																													(
																																													((obj_t) BgL_bodyz00_1495));
																																											}
																																									}
																																									{	/* Eval/evaluate.scm 522 */
																																										obj_t
																																											BgL_tbodyz00_2491;
																																										BgL_tbodyz00_2491
																																											=
																																											BGl_typezd2checkszd2zz__evaluatez00
																																											(BgL_ubindsz00_2487,
																																											BgL_bindsz00_1494,
																																											BgL_bodyz00_2490,
																																											BgL_locz00_74,
																																											BgL_wherez00_73);
																																										{	/* Eval/evaluate.scm 523 */
																																											obj_t
																																												BgL_blocz00_2492;
																																											{	/* Eval/evaluate.scm 144 */
																																												obj_t
																																													BgL__ortest_1068z00_3777;
																																												BgL__ortest_1068z00_3777
																																													=
																																													BGl_getzd2sourcezd2locationz00zz__readerz00
																																													(BgL_bindsz00_1494);
																																												if (CBOOL(BgL__ortest_1068z00_3777))
																																													{	/* Eval/evaluate.scm 144 */
																																														BgL_blocz00_2492
																																															=
																																															BgL__ortest_1068z00_3777;
																																													}
																																												else
																																													{	/* Eval/evaluate.scm 144 */
																																														BgL_blocz00_2492
																																															=
																																															BgL_locz00_74;
																																													}
																																											}
																																											{	/* Eval/evaluate.scm 524 */

																																												{	/* Eval/evaluate.scm 525 */
																																													BgL_ev_letrecz00_bglt
																																														BgL_new1138z00_2493;
																																													{	/* Eval/evaluate.scm 526 */
																																														BgL_ev_letrecz00_bglt
																																															BgL_new1137z00_2514;
																																														BgL_new1137z00_2514
																																															=
																																															(
																																															(BgL_ev_letrecz00_bglt)
																																															BOBJECT
																																															(GC_MALLOC
																																																(sizeof
																																																	(struct
																																																		BgL_ev_letrecz00_bgl))));
																																														{	/* Eval/evaluate.scm 526 */
																																															long
																																																BgL_arg2362z00_2515;
																																															{	/* Eval/evaluate.scm 526 */
																																																long
																																																	BgL_res2984z00_3779;
																																																BgL_res2984z00_3779
																																																	=
																																																	BGL_CLASS_INDEX
																																																	(BGl_ev_letrecz00zz__evaluate_typesz00);
																																																BgL_arg2362z00_2515
																																																	=
																																																	BgL_res2984z00_3779;
																																															}
																																															BGL_OBJECT_CLASS_NUM_SET
																																																(
																																																((BgL_objectz00_bglt) BgL_new1137z00_2514), BgL_arg2362z00_2515);
																																														}
																																														BgL_new1138z00_2493
																																															=
																																															BgL_new1137z00_2514;
																																													}
																																													((((BgL_ev_binderz00_bglt) COBJECT(((BgL_ev_binderz00_bglt) BgL_new1138z00_2493)))->BgL_varsz00) = ((obj_t) BgL_varsz00_2488), BUNSPEC);
																																													{
																																														obj_t
																																															BgL_auxz00_6158;
																																														if (NULLP(BgL_bindsz00_1494))
																																															{	/* Eval/evaluate.scm 527 */
																																																BgL_auxz00_6158
																																																	=
																																																	BNIL;
																																															}
																																														else
																																															{	/* Eval/evaluate.scm 527 */
																																																obj_t
																																																	BgL_head1247z00_2496;
																																																{	/* Eval/evaluate.scm 527 */
																																																	obj_t
																																																		BgL_res2986z00_3783;
																																																	BgL_res2986z00_3783
																																																		=
																																																		MAKE_YOUNG_PAIR
																																																		(BNIL,
																																																		BNIL);
																																																	BgL_head1247z00_2496
																																																		=
																																																		BgL_res2986z00_3783;
																																																}
																																																{
																																																	obj_t
																																																		BgL_l1245z00_2498;
																																																	obj_t
																																																		BgL_tail1248z00_2499;
																																																	BgL_l1245z00_2498
																																																		=
																																																		BgL_bindsz00_1494;
																																																	BgL_tail1248z00_2499
																																																		=
																																																		BgL_head1247z00_2496;
																																																BgL_zc3z04anonymousza32351ze3z87_2500:
																																																	if (NULLP(BgL_l1245z00_2498))
																																																		{	/* Eval/evaluate.scm 527 */
																																																			BgL_auxz00_6158
																																																				=
																																																				CDR
																																																				(BgL_head1247z00_2496);
																																																		}
																																																	else
																																																		{	/* Eval/evaluate.scm 527 */
																																																			obj_t
																																																				BgL_newtail1249z00_2502;
																																																			{	/* Eval/evaluate.scm 527 */
																																																				obj_t
																																																					BgL_arg2354z00_2504;
																																																				{	/* Eval/evaluate.scm 527 */
																																																					obj_t
																																																						BgL_bz00_2505;
																																																					BgL_bz00_2505
																																																						=
																																																						CAR
																																																						(
																																																						((obj_t) BgL_l1245z00_2498));
																																																					{	/* Eval/evaluate.scm 528 */
																																																						obj_t
																																																							BgL_arg2355z00_2506;
																																																						obj_t
																																																							BgL_arg2356z00_2507;
																																																						obj_t
																																																							BgL_arg2357z00_2508;
																																																						{	/* Eval/evaluate.scm 528 */
																																																							obj_t
																																																								BgL_pairz00_3790;
																																																							BgL_pairz00_3790
																																																								=
																																																								CDR
																																																								(
																																																								((obj_t) BgL_bz00_2505));
																																																							BgL_arg2355z00_2506
																																																								=
																																																								CAR
																																																								(BgL_pairz00_3790);
																																																						}
																																																						{	/* Eval/evaluate.scm 528 */
																																																							obj_t
																																																								BgL_arg2358z00_2509;
																																																							BgL_arg2358z00_2509
																																																								=
																																																								CAR
																																																								(
																																																								((obj_t) BgL_bz00_2505));
																																																							{	/* Eval/evaluate.scm 528 */
																																																								obj_t
																																																									BgL_list2359z00_2510;
																																																								{	/* Eval/evaluate.scm 528 */
																																																									obj_t
																																																										BgL_arg2360z00_2511;
																																																									{	/* Eval/evaluate.scm 528 */
																																																										obj_t
																																																											BgL_arg2361z00_2512;
																																																										BgL_arg2361z00_2512
																																																											=
																																																											MAKE_YOUNG_PAIR
																																																											(BgL_wherez00_73,
																																																											BNIL);
																																																										BgL_arg2360z00_2511
																																																											=
																																																											MAKE_YOUNG_PAIR
																																																											(BGl_symbol3307z00zz__evaluatez00,
																																																											BgL_arg2361z00_2512);
																																																									}
																																																									BgL_list2359z00_2510
																																																										=
																																																										MAKE_YOUNG_PAIR
																																																										(BgL_arg2358z00_2509,
																																																										BgL_arg2360z00_2511);
																																																								}
																																																								BgL_arg2356z00_2507
																																																									=
																																																									BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																																																									(BgL_list2359z00_2510);
																																																							}
																																																						}
																																																						{	/* Eval/evaluate.scm 144 */
																																																							obj_t
																																																								BgL__ortest_1068z00_3792;
																																																							BgL__ortest_1068z00_3792
																																																								=
																																																								BGl_getzd2sourcezd2locationz00zz__readerz00
																																																								(BgL_bz00_2505);
																																																							if (CBOOL(BgL__ortest_1068z00_3792))
																																																								{	/* Eval/evaluate.scm 144 */
																																																									BgL_arg2357z00_2508
																																																										=
																																																										BgL__ortest_1068z00_3792;
																																																								}
																																																							else
																																																								{	/* Eval/evaluate.scm 144 */
																																																									BgL_arg2357z00_2508
																																																										=
																																																										BgL_blocz00_2492;
																																																								}
																																																						}
																																																						BgL_arg2354z00_2504
																																																							=
																																																							BGl_convz00zz__evaluatez00
																																																							(BgL_arg2355z00_2506,
																																																							BgL_localsz00_2489,
																																																							BgL_globalsz00_71,
																																																							BFALSE,
																																																							BgL_arg2356z00_2507,
																																																							BgL_arg2357z00_2508,
																																																							((bool_t) 0));
																																																					}
																																																				}
																																																				{	/* Eval/evaluate.scm 527 */
																																																					obj_t
																																																						BgL_res2988z00_3793;
																																																					BgL_res2988z00_3793
																																																						=
																																																						MAKE_YOUNG_PAIR
																																																						(BgL_arg2354z00_2504,
																																																						BNIL);
																																																					BgL_newtail1249z00_2502
																																																						=
																																																						BgL_res2988z00_3793;
																																																				}
																																																			}
																																																			SET_CDR
																																																				(BgL_tail1248z00_2499,
																																																				BgL_newtail1249z00_2502);
																																																			{	/* Eval/evaluate.scm 527 */
																																																				obj_t
																																																					BgL_arg2353z00_2503;
																																																				BgL_arg2353z00_2503
																																																					=
																																																					CDR
																																																					(
																																																					((obj_t) BgL_l1245z00_2498));
																																																				{
																																																					obj_t
																																																						BgL_tail1248z00_6186;
																																																					obj_t
																																																						BgL_l1245z00_6185;
																																																					BgL_l1245z00_6185
																																																						=
																																																						BgL_arg2353z00_2503;
																																																					BgL_tail1248z00_6186
																																																						=
																																																						BgL_newtail1249z00_2502;
																																																					BgL_tail1248z00_2499
																																																						=
																																																						BgL_tail1248z00_6186;
																																																					BgL_l1245z00_2498
																																																						=
																																																						BgL_l1245z00_6185;
																																																					goto
																																																						BgL_zc3z04anonymousza32351ze3z87_2500;
																																																				}
																																																			}
																																																		}
																																																}
																																															}
																																														((((BgL_ev_binderz00_bglt) COBJECT(((BgL_ev_binderz00_bglt) BgL_new1138z00_2493)))->BgL_valsz00) = ((obj_t) BgL_auxz00_6158), BUNSPEC);
																																													}
																																													((((BgL_ev_binderz00_bglt) COBJECT(((BgL_ev_binderz00_bglt) BgL_new1138z00_2493)))->BgL_bodyz00) = ((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BGl_convz00zz__evaluatez00(BgL_tbodyz00_2491, BgL_localsz00_2489, BgL_globalsz00_71, BgL_tailzf3zf3_72, BgL_wherez00_73, BgL_locz00_74, ((bool_t) 0)))), BUNSPEC);
																																													BgL_auxz00_6095
																																														=
																																														BgL_new1138z00_2493;
																																												}
																																											}
																																										}
																																									}
																																								}
																																							}
																																						}
																																					}
																																					return
																																						(
																																						(obj_t)
																																						BgL_auxz00_6095);
																																				}
																																			}
																																		else
																																			{	/* Eval/evaluate.scm 424 */
																																				obj_t
																																					BgL_arg1716z00_1699;
																																				BgL_arg1716z00_1699
																																					=
																																					CAR
																																					(BgL_ez00_69);
																																				{
																																					BgL_ev_appz00_bglt
																																						BgL_auxz00_6194;
																																					{
																																						obj_t
																																							BgL_argsz00_6196;
																																						obj_t
																																							BgL_fz00_6195;
																																						BgL_fz00_6195
																																							=
																																							BgL_arg1716z00_1699;
																																						BgL_argsz00_6196
																																							=
																																							BgL_cdrzd26736zd2_1693;
																																						BgL_argsz00_1536
																																							=
																																							BgL_argsz00_6196;
																																						BgL_fz00_1535
																																							=
																																							BgL_fz00_6195;
																																						goto
																																							BgL_tagzd2176zd2_1537;
																																					}
																																					return
																																						(
																																						(obj_t)
																																						BgL_auxz00_6194);
																																				}
																																			}
																																	}
																																else
																																	{	/* Eval/evaluate.scm 424 */
																																		if (
																																			(CAR
																																				(BgL_ez00_69)
																																				==
																																				BGl_symbol3326z00zz__evaluatez00))
																																			{	/* Eval/evaluate.scm 424 */
																																				if (PAIRP(BgL_cdrzd26736zd2_1693))
																																					{	/* Eval/evaluate.scm 424 */
																																						obj_t
																																							BgL_carzd26912zd2_1705;
																																						obj_t
																																							BgL_cdrzd26913zd2_1706;
																																						BgL_carzd26912zd2_1705
																																							=
																																							CAR
																																							(BgL_cdrzd26736zd2_1693);
																																						BgL_cdrzd26913zd2_1706
																																							=
																																							CDR
																																							(BgL_cdrzd26736zd2_1693);
																																						if (PAIRP(BgL_carzd26912zd2_1705))
																																							{	/* Eval/evaluate.scm 424 */
																																								obj_t
																																									BgL_cdrzd26917zd2_1708;
																																								BgL_cdrzd26917zd2_1708
																																									=
																																									CDR
																																									(BgL_carzd26912zd2_1705);
																																								if ((CAR(BgL_carzd26912zd2_1705) == BGl_symbol3312z00zz__evaluatez00))
																																									{	/* Eval/evaluate.scm 424 */
																																										if (PAIRP(BgL_cdrzd26917zd2_1708))
																																											{	/* Eval/evaluate.scm 424 */
																																												obj_t
																																													BgL_carzd26920zd2_1712;
																																												obj_t
																																													BgL_cdrzd26921zd2_1713;
																																												BgL_carzd26920zd2_1712
																																													=
																																													CAR
																																													(BgL_cdrzd26917zd2_1708);
																																												BgL_cdrzd26921zd2_1713
																																													=
																																													CDR
																																													(BgL_cdrzd26917zd2_1708);
																																												if (SYMBOLP(BgL_carzd26920zd2_1712))
																																													{	/* Eval/evaluate.scm 424 */
																																														if (PAIRP(BgL_cdrzd26921zd2_1713))
																																															{	/* Eval/evaluate.scm 424 */
																																																obj_t
																																																	BgL_carzd26925zd2_1716;
																																																BgL_carzd26925zd2_1716
																																																	=
																																																	CAR
																																																	(BgL_cdrzd26921zd2_1713);
																																																if (SYMBOLP(BgL_carzd26925zd2_1716))
																																																	{	/* Eval/evaluate.scm 424 */
																																																		if (NULLP(CDR(BgL_cdrzd26921zd2_1713)))
																																																			{	/* Eval/evaluate.scm 424 */
																																																				if (PAIRP(BgL_cdrzd26913zd2_1706))
																																																					{	/* Eval/evaluate.scm 424 */
																																																						if (NULLP(CDR(BgL_cdrzd26913zd2_1706)))
																																																							{	/* Eval/evaluate.scm 424 */
																																																								obj_t
																																																									BgL_arg1736z00_1723;
																																																								BgL_arg1736z00_1723
																																																									=
																																																									CAR
																																																									(BgL_cdrzd26913zd2_1706);
																																																								{	/* Eval/evaluate.scm 531 */
																																																									BgL_ev_setglobalz00_bglt
																																																										BgL_new1140z00_4083;
																																																									{	/* Eval/evaluate.scm 535 */
																																																										BgL_ev_setglobalz00_bglt
																																																											BgL_new1139z00_4084;
																																																										BgL_new1139z00_4084
																																																											=
																																																											(
																																																											(BgL_ev_setglobalz00_bglt)
																																																											BOBJECT
																																																											(GC_MALLOC
																																																												(sizeof
																																																													(struct
																																																														BgL_ev_setglobalz00_bgl))));
																																																										{	/* Eval/evaluate.scm 535 */
																																																											long
																																																												BgL_arg2380z00_4085;
																																																											{	/* Eval/evaluate.scm 535 */
																																																												long
																																																													BgL_res3046z00_4087;
																																																												BgL_res3046z00_4087
																																																													=
																																																													BGL_CLASS_INDEX
																																																													(BGl_ev_setglobalz00zz__evaluate_typesz00);
																																																												BgL_arg2380z00_4085
																																																													=
																																																													BgL_res3046z00_4087;
																																																											}
																																																											BGL_OBJECT_CLASS_NUM_SET
																																																												(
																																																												((BgL_objectz00_bglt) BgL_new1139z00_4084), BgL_arg2380z00_4085);
																																																										}
																																																										BgL_new1140z00_4083
																																																											=
																																																											BgL_new1139z00_4084;
																																																									}
																																																									{
																																																										BgL_ev_exprz00_bglt
																																																											BgL_auxz00_6235;
																																																										{	/* Eval/evaluate.scm 380 */
																																																											obj_t
																																																												BgL_arg2431z00_4090;
																																																											BgL_arg2431z00_4090
																																																												=
																																																												BGl_getzd2locationzd2zz__evaluatez00
																																																												(BgL_arg1736z00_1723,
																																																												BgL_locz00_74);
																																																											BgL_auxz00_6235
																																																												=
																																																												(
																																																												(BgL_ev_exprz00_bglt)
																																																												BGl_uconvzf2locze70z15zz__evaluatez00
																																																												(BgL_wherez00_73,
																																																													BgL_globalsz00_71,
																																																													BgL_localsz00_70,
																																																													BgL_arg1736z00_1723,
																																																													BgL_arg2431z00_4090));
																																																										}
																																																										((((BgL_ev_hookz00_bglt) COBJECT(((BgL_ev_hookz00_bglt) BgL_new1140z00_4083)))->BgL_ez00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_6235), BUNSPEC);
																																																									}
																																																									((((BgL_ev_setglobalz00_bglt) COBJECT(BgL_new1140z00_4083))->BgL_locz00) = ((obj_t) BgL_locz00_74), BUNSPEC);
																																																									((((BgL_ev_setglobalz00_bglt) COBJECT(BgL_new1140z00_4083))->BgL_namez00) = ((obj_t) BgL_carzd26920zd2_1712), BUNSPEC);
																																																									((((BgL_ev_setglobalz00_bglt) COBJECT(BgL_new1140z00_4083))->BgL_modz00) = ((obj_t) BGl_evalzd2findzd2modulez00zz__evmodulez00(BgL_carzd26925zd2_1716)), BUNSPEC);
																																																									return
																																																										(
																																																										(obj_t)
																																																										BgL_new1140z00_4083);
																																																								}
																																																							}
																																																						else
																																																							{	/* Eval/evaluate.scm 424 */
																																																								return
																																																									BGl_evcompilezd2errorzd2zz__evcompilez00
																																																									(BgL_locz00_74,
																																																									BGl_string3229z00zz__evaluatez00,
																																																									BGl_string3304z00zz__evaluatez00,
																																																									BgL_ez00_69);
																																																							}
																																																					}
																																																				else
																																																					{	/* Eval/evaluate.scm 424 */
																																																						return
																																																							BGl_evcompilezd2errorzd2zz__evcompilez00
																																																							(BgL_locz00_74,
																																																							BGl_string3229z00zz__evaluatez00,
																																																							BGl_string3304z00zz__evaluatez00,
																																																							BgL_ez00_69);
																																																					}
																																																			}
																																																		else
																																																			{	/* Eval/evaluate.scm 424 */
																																																				obj_t
																																																					BgL_cdrzd27041zd2_1725;
																																																				BgL_cdrzd27041zd2_1725
																																																					=
																																																					CDR
																																																					(BgL_ez00_69);
																																																				{	/* Eval/evaluate.scm 424 */
																																																					obj_t
																																																						BgL_cdrzd27045zd2_1726;
																																																					BgL_cdrzd27045zd2_1726
																																																						=
																																																						CDR
																																																						(
																																																						((obj_t) BgL_cdrzd27041zd2_1725));
																																																					if (PAIRP(BgL_cdrzd27045zd2_1726))
																																																						{	/* Eval/evaluate.scm 424 */
																																																							if (NULLP(CDR(BgL_cdrzd27045zd2_1726)))
																																																								{	/* Eval/evaluate.scm 424 */
																																																									obj_t
																																																										BgL_arg1741z00_1730;
																																																									obj_t
																																																										BgL_arg1742z00_1731;
																																																									BgL_arg1741z00_1730
																																																										=
																																																										CAR
																																																										(
																																																										((obj_t) BgL_cdrzd27041zd2_1725));
																																																									BgL_arg1742z00_1731
																																																										=
																																																										CAR
																																																										(BgL_cdrzd27045zd2_1726);
																																																									{
																																																										BgL_ev_hookz00_bglt
																																																											BgL_auxz00_6259;
																																																										BgL_vz00_1504
																																																											=
																																																											BgL_arg1741z00_1730;
																																																										BgL_ez00_1505
																																																											=
																																																											BgL_arg1742z00_1731;
																																																									BgL_tagzd2165zd2_1506:
																																																										{	/* Eval/evaluate.scm 541 */
																																																											obj_t
																																																												BgL_cvz00_2578;
																																																											obj_t
																																																												BgL_ez00_2579;
																																																											BgL_cvz00_2578
																																																												=
																																																												BGl_convzd2varzd2zz__evaluatez00
																																																												(BgL_vz00_1504,
																																																												BgL_localsz00_70);
																																																											{	/* Eval/evaluate.scm 380 */
																																																												obj_t
																																																													BgL_arg2431z00_3812;
																																																												{	/* Eval/evaluate.scm 144 */
																																																													obj_t
																																																														BgL__ortest_1068z00_3813;
																																																													BgL__ortest_1068z00_3813
																																																														=
																																																														BGl_getzd2sourcezd2locationz00zz__readerz00
																																																														(BgL_ez00_1505);
																																																													if (CBOOL(BgL__ortest_1068z00_3813))
																																																														{	/* Eval/evaluate.scm 144 */
																																																															BgL_arg2431z00_3812
																																																																=
																																																																BgL__ortest_1068z00_3813;
																																																														}
																																																													else
																																																														{	/* Eval/evaluate.scm 144 */
																																																															BgL_arg2431z00_3812
																																																																=
																																																																BgL_locz00_74;
																																																														}
																																																												}
																																																												BgL_ez00_2579
																																																													=
																																																													BGl_convz00zz__evaluatez00
																																																													(BgL_ez00_1505,
																																																													BgL_localsz00_70,
																																																													BgL_globalsz00_71,
																																																													BFALSE,
																																																													BgL_wherez00_73,
																																																													BgL_arg2431z00_3812,
																																																													((bool_t) 0));
																																																											}
																																																											if (CBOOL(BgL_cvz00_2578))
																																																												{	/* Eval/evaluate.scm 543 */
																																																													BgL_ev_setlocalz00_bglt
																																																														BgL_new1142z00_2580;
																																																													{	/* Eval/evaluate.scm 545 */
																																																														BgL_ev_setlocalz00_bglt
																																																															BgL_new1141z00_2581;
																																																														BgL_new1141z00_2581
																																																															=
																																																															(
																																																															(BgL_ev_setlocalz00_bglt)
																																																															BOBJECT
																																																															(GC_MALLOC
																																																																(sizeof
																																																																	(struct
																																																																		BgL_ev_setlocalz00_bgl))));
																																																														{	/* Eval/evaluate.scm 545 */
																																																															long
																																																																BgL_arg2397z00_2582;
																																																															{	/* Eval/evaluate.scm 545 */
																																																																long
																																																																	BgL_res2994z00_3815;
																																																																BgL_res2994z00_3815
																																																																	=
																																																																	BGL_CLASS_INDEX
																																																																	(BGl_ev_setlocalz00zz__evaluate_typesz00);
																																																																BgL_arg2397z00_2582
																																																																	=
																																																																	BgL_res2994z00_3815;
																																																															}
																																																															BGL_OBJECT_CLASS_NUM_SET
																																																																(
																																																																((BgL_objectz00_bglt) BgL_new1141z00_2581), BgL_arg2397z00_2582);
																																																														}
																																																														BgL_new1142z00_2580
																																																															=
																																																															BgL_new1141z00_2581;
																																																													}
																																																													((((BgL_ev_hookz00_bglt) COBJECT(((BgL_ev_hookz00_bglt) BgL_new1142z00_2580)))->BgL_ez00) = ((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_ez00_2579)), BUNSPEC);
																																																													((((BgL_ev_setlocalz00_bglt) COBJECT(BgL_new1142z00_2580))->BgL_vz00) = ((BgL_ev_varz00_bglt) ((BgL_ev_varz00_bglt) BgL_cvz00_2578)), BUNSPEC);
																																																													BgL_auxz00_6259
																																																														=
																																																														(
																																																														(BgL_ev_hookz00_bglt)
																																																														BgL_new1142z00_2580);
																																																												}
																																																											else
																																																												{	/* Eval/evaluate.scm 546 */
																																																													BgL_ev_setglobalz00_bglt
																																																														BgL_new1144z00_2583;
																																																													{	/* Eval/evaluate.scm 550 */
																																																														BgL_ev_setglobalz00_bglt
																																																															BgL_new1143z00_2585;
																																																														BgL_new1143z00_2585
																																																															=
																																																															(
																																																															(BgL_ev_setglobalz00_bglt)
																																																															BOBJECT
																																																															(GC_MALLOC
																																																																(sizeof
																																																																	(struct
																																																																		BgL_ev_setglobalz00_bgl))));
																																																														{	/* Eval/evaluate.scm 550 */
																																																															long
																																																																BgL_arg2399z00_2586;
																																																															{	/* Eval/evaluate.scm 550 */
																																																																long
																																																																	BgL_res2995z00_3819;
																																																																BgL_res2995z00_3819
																																																																	=
																																																																	BGL_CLASS_INDEX
																																																																	(BGl_ev_setglobalz00zz__evaluate_typesz00);
																																																																BgL_arg2399z00_2586
																																																																	=
																																																																	BgL_res2995z00_3819;
																																																															}
																																																															BGL_OBJECT_CLASS_NUM_SET
																																																																(
																																																																((BgL_objectz00_bglt) BgL_new1143z00_2585), BgL_arg2399z00_2586);
																																																														}
																																																														BgL_new1144z00_2583
																																																															=
																																																															BgL_new1143z00_2585;
																																																													}
																																																													((((BgL_ev_hookz00_bglt) COBJECT(((BgL_ev_hookz00_bglt) BgL_new1144z00_2583)))->BgL_ez00) = ((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_ez00_2579)), BUNSPEC);
																																																													((((BgL_ev_setglobalz00_bglt) COBJECT(BgL_new1144z00_2583))->BgL_locz00) = ((obj_t) BgL_locz00_74), BUNSPEC);
																																																													((((BgL_ev_setglobalz00_bglt) COBJECT(BgL_new1144z00_2583))->BgL_namez00) = ((obj_t) BgL_vz00_1504), BUNSPEC);
																																																													{
																																																														obj_t
																																																															BgL_auxz00_6286;
																																																														if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_globalsz00_71))
																																																															{	/* Eval/evaluate.scm 549 */
																																																																BgL_auxz00_6286
																																																																	=
																																																																	BgL_globalsz00_71;
																																																															}
																																																														else
																																																															{	/* Eval/evaluate.scm 549 */
																																																																BgL_auxz00_6286
																																																																	=
																																																																	BGL_MODULE
																																																																	();
																																																															}
																																																														((((BgL_ev_setglobalz00_bglt) COBJECT(BgL_new1144z00_2583))->BgL_modz00) = ((obj_t) BgL_auxz00_6286), BUNSPEC);
																																																													}
																																																													BgL_auxz00_6259
																																																														=
																																																														(
																																																														(BgL_ev_hookz00_bglt)
																																																														BgL_new1144z00_2583);
																																																												}
																																																										}
																																																										return
																																																											(
																																																											(obj_t)
																																																											BgL_auxz00_6259);
																																																									}
																																																								}
																																																							else
																																																								{	/* Eval/evaluate.scm 424 */
																																																									return
																																																										BGl_evcompilezd2errorzd2zz__evcompilez00
																																																										(BgL_locz00_74,
																																																										BGl_string3229z00zz__evaluatez00,
																																																										BGl_string3304z00zz__evaluatez00,
																																																										BgL_ez00_69);
																																																								}
																																																						}
																																																					else
																																																						{	/* Eval/evaluate.scm 424 */
																																																							return
																																																								BGl_evcompilezd2errorzd2zz__evcompilez00
																																																								(BgL_locz00_74,
																																																								BGl_string3229z00zz__evaluatez00,
																																																								BGl_string3304z00zz__evaluatez00,
																																																								BgL_ez00_69);
																																																						}
																																																				}
																																																			}
																																																	}
																																																else
																																																	{	/* Eval/evaluate.scm 424 */
																																																		obj_t
																																																			BgL_cdrzd27102zd2_1734;
																																																		BgL_cdrzd27102zd2_1734
																																																			=
																																																			CDR
																																																			(BgL_ez00_69);
																																																		{	/* Eval/evaluate.scm 424 */
																																																			obj_t
																																																				BgL_cdrzd27106zd2_1735;
																																																			BgL_cdrzd27106zd2_1735
																																																				=
																																																				CDR
																																																				(
																																																				((obj_t) BgL_cdrzd27102zd2_1734));
																																																			if (PAIRP(BgL_cdrzd27106zd2_1735))
																																																				{	/* Eval/evaluate.scm 424 */
																																																					if (NULLP(CDR(BgL_cdrzd27106zd2_1735)))
																																																						{	/* Eval/evaluate.scm 424 */
																																																							obj_t
																																																								BgL_arg1748z00_1739;
																																																							obj_t
																																																								BgL_arg1750z00_1740;
																																																							BgL_arg1748z00_1739
																																																								=
																																																								CAR
																																																								(
																																																								((obj_t) BgL_cdrzd27102zd2_1734));
																																																							BgL_arg1750z00_1740
																																																								=
																																																								CAR
																																																								(BgL_cdrzd27106zd2_1735);
																																																							{
																																																								BgL_ev_hookz00_bglt
																																																									BgL_auxz00_6306;
																																																								{
																																																									obj_t
																																																										BgL_ez00_6308;
																																																									obj_t
																																																										BgL_vz00_6307;
																																																									BgL_vz00_6307
																																																										=
																																																										BgL_arg1748z00_1739;
																																																									BgL_ez00_6308
																																																										=
																																																										BgL_arg1750z00_1740;
																																																									BgL_ez00_1505
																																																										=
																																																										BgL_ez00_6308;
																																																									BgL_vz00_1504
																																																										=
																																																										BgL_vz00_6307;
																																																									goto
																																																										BgL_tagzd2165zd2_1506;
																																																								}
																																																								return
																																																									(
																																																									(obj_t)
																																																									BgL_auxz00_6306);
																																																							}
																																																						}
																																																					else
																																																						{	/* Eval/evaluate.scm 424 */
																																																							return
																																																								BGl_evcompilezd2errorzd2zz__evcompilez00
																																																								(BgL_locz00_74,
																																																								BGl_string3229z00zz__evaluatez00,
																																																								BGl_string3304z00zz__evaluatez00,
																																																								BgL_ez00_69);
																																																						}
																																																				}
																																																			else
																																																				{	/* Eval/evaluate.scm 424 */
																																																					return
																																																						BGl_evcompilezd2errorzd2zz__evcompilez00
																																																						(BgL_locz00_74,
																																																						BGl_string3229z00zz__evaluatez00,
																																																						BGl_string3304z00zz__evaluatez00,
																																																						BgL_ez00_69);
																																																				}
																																																		}
																																																	}
																																															}
																																														else
																																															{	/* Eval/evaluate.scm 424 */
																																																obj_t
																																																	BgL_cdrzd27163zd2_1742;
																																																BgL_cdrzd27163zd2_1742
																																																	=
																																																	CDR
																																																	(BgL_ez00_69);
																																																{	/* Eval/evaluate.scm 424 */
																																																	obj_t
																																																		BgL_cdrzd27167zd2_1743;
																																																	BgL_cdrzd27167zd2_1743
																																																		=
																																																		CDR
																																																		(
																																																		((obj_t) BgL_cdrzd27163zd2_1742));
																																																	if (PAIRP(BgL_cdrzd27167zd2_1743))
																																																		{	/* Eval/evaluate.scm 424 */
																																																			if (NULLP(CDR(BgL_cdrzd27167zd2_1743)))
																																																				{	/* Eval/evaluate.scm 424 */
																																																					obj_t
																																																						BgL_arg1756z00_1747;
																																																					obj_t
																																																						BgL_arg1757z00_1748;
																																																					BgL_arg1756z00_1747
																																																						=
																																																						CAR
																																																						(
																																																						((obj_t) BgL_cdrzd27163zd2_1742));
																																																					BgL_arg1757z00_1748
																																																						=
																																																						CAR
																																																						(BgL_cdrzd27167zd2_1743);
																																																					{
																																																						BgL_ev_hookz00_bglt
																																																							BgL_auxz00_6323;
																																																						{
																																																							obj_t
																																																								BgL_ez00_6325;
																																																							obj_t
																																																								BgL_vz00_6324;
																																																							BgL_vz00_6324
																																																								=
																																																								BgL_arg1756z00_1747;
																																																							BgL_ez00_6325
																																																								=
																																																								BgL_arg1757z00_1748;
																																																							BgL_ez00_1505
																																																								=
																																																								BgL_ez00_6325;
																																																							BgL_vz00_1504
																																																								=
																																																								BgL_vz00_6324;
																																																							goto
																																																								BgL_tagzd2165zd2_1506;
																																																						}
																																																						return
																																																							(
																																																							(obj_t)
																																																							BgL_auxz00_6323);
																																																					}
																																																				}
																																																			else
																																																				{	/* Eval/evaluate.scm 424 */
																																																					return
																																																						BGl_evcompilezd2errorzd2zz__evcompilez00
																																																						(BgL_locz00_74,
																																																						BGl_string3229z00zz__evaluatez00,
																																																						BGl_string3304z00zz__evaluatez00,
																																																						BgL_ez00_69);
																																																				}
																																																		}
																																																	else
																																																		{	/* Eval/evaluate.scm 424 */
																																																			return
																																																				BGl_evcompilezd2errorzd2zz__evcompilez00
																																																				(BgL_locz00_74,
																																																				BGl_string3229z00zz__evaluatez00,
																																																				BGl_string3304z00zz__evaluatez00,
																																																				BgL_ez00_69);
																																																		}
																																																}
																																															}
																																													}
																																												else
																																													{	/* Eval/evaluate.scm 424 */
																																														obj_t
																																															BgL_cdrzd27224zd2_1750;
																																														BgL_cdrzd27224zd2_1750
																																															=
																																															CDR
																																															(BgL_ez00_69);
																																														{	/* Eval/evaluate.scm 424 */
																																															obj_t
																																																BgL_cdrzd27228zd2_1751;
																																															BgL_cdrzd27228zd2_1751
																																																=
																																																CDR
																																																(
																																																((obj_t) BgL_cdrzd27224zd2_1750));
																																															if (PAIRP(BgL_cdrzd27228zd2_1751))
																																																{	/* Eval/evaluate.scm 424 */
																																																	if (NULLP(CDR(BgL_cdrzd27228zd2_1751)))
																																																		{	/* Eval/evaluate.scm 424 */
																																																			obj_t
																																																				BgL_arg1763z00_1755;
																																																			obj_t
																																																				BgL_arg1764z00_1756;
																																																			BgL_arg1763z00_1755
																																																				=
																																																				CAR
																																																				(
																																																				((obj_t) BgL_cdrzd27224zd2_1750));
																																																			BgL_arg1764z00_1756
																																																				=
																																																				CAR
																																																				(BgL_cdrzd27228zd2_1751);
																																																			{
																																																				BgL_ev_hookz00_bglt
																																																					BgL_auxz00_6340;
																																																				{
																																																					obj_t
																																																						BgL_ez00_6342;
																																																					obj_t
																																																						BgL_vz00_6341;
																																																					BgL_vz00_6341
																																																						=
																																																						BgL_arg1763z00_1755;
																																																					BgL_ez00_6342
																																																						=
																																																						BgL_arg1764z00_1756;
																																																					BgL_ez00_1505
																																																						=
																																																						BgL_ez00_6342;
																																																					BgL_vz00_1504
																																																						=
																																																						BgL_vz00_6341;
																																																					goto
																																																						BgL_tagzd2165zd2_1506;
																																																				}
																																																				return
																																																					(
																																																					(obj_t)
																																																					BgL_auxz00_6340);
																																																			}
																																																		}
																																																	else
																																																		{	/* Eval/evaluate.scm 424 */
																																																			return
																																																				BGl_evcompilezd2errorzd2zz__evcompilez00
																																																				(BgL_locz00_74,
																																																				BGl_string3229z00zz__evaluatez00,
																																																				BGl_string3304z00zz__evaluatez00,
																																																				BgL_ez00_69);
																																																		}
																																																}
																																															else
																																																{	/* Eval/evaluate.scm 424 */
																																																	return
																																																		BGl_evcompilezd2errorzd2zz__evcompilez00
																																																		(BgL_locz00_74,
																																																		BGl_string3229z00zz__evaluatez00,
																																																		BGl_string3304z00zz__evaluatez00,
																																																		BgL_ez00_69);
																																																}
																																														}
																																													}
																																											}
																																										else
																																											{	/* Eval/evaluate.scm 424 */
																																												obj_t
																																													BgL_cdrzd27285zd2_1758;
																																												BgL_cdrzd27285zd2_1758
																																													=
																																													CDR
																																													(BgL_ez00_69);
																																												{	/* Eval/evaluate.scm 424 */
																																													obj_t
																																														BgL_cdrzd27289zd2_1759;
																																													BgL_cdrzd27289zd2_1759
																																														=
																																														CDR
																																														(
																																														((obj_t) BgL_cdrzd27285zd2_1758));
																																													if (PAIRP(BgL_cdrzd27289zd2_1759))
																																														{	/* Eval/evaluate.scm 424 */
																																															if (NULLP(CDR(BgL_cdrzd27289zd2_1759)))
																																																{	/* Eval/evaluate.scm 424 */
																																																	obj_t
																																																		BgL_arg1770z00_1763;
																																																	obj_t
																																																		BgL_arg1771z00_1764;
																																																	BgL_arg1770z00_1763
																																																		=
																																																		CAR
																																																		(
																																																		((obj_t) BgL_cdrzd27285zd2_1758));
																																																	BgL_arg1771z00_1764
																																																		=
																																																		CAR
																																																		(BgL_cdrzd27289zd2_1759);
																																																	{
																																																		BgL_ev_hookz00_bglt
																																																			BgL_auxz00_6357;
																																																		{
																																																			obj_t
																																																				BgL_ez00_6359;
																																																			obj_t
																																																				BgL_vz00_6358;
																																																			BgL_vz00_6358
																																																				=
																																																				BgL_arg1770z00_1763;
																																																			BgL_ez00_6359
																																																				=
																																																				BgL_arg1771z00_1764;
																																																			BgL_ez00_1505
																																																				=
																																																				BgL_ez00_6359;
																																																			BgL_vz00_1504
																																																				=
																																																				BgL_vz00_6358;
																																																			goto
																																																				BgL_tagzd2165zd2_1506;
																																																		}
																																																		return
																																																			(
																																																			(obj_t)
																																																			BgL_auxz00_6357);
																																																	}
																																																}
																																															else
																																																{	/* Eval/evaluate.scm 424 */
																																																	return
																																																		BGl_evcompilezd2errorzd2zz__evcompilez00
																																																		(BgL_locz00_74,
																																																		BGl_string3229z00zz__evaluatez00,
																																																		BGl_string3304z00zz__evaluatez00,
																																																		BgL_ez00_69);
																																																}
																																														}
																																													else
																																														{	/* Eval/evaluate.scm 424 */
																																															return
																																																BGl_evcompilezd2errorzd2zz__evcompilez00
																																																(BgL_locz00_74,
																																																BGl_string3229z00zz__evaluatez00,
																																																BGl_string3304z00zz__evaluatez00,
																																																BgL_ez00_69);
																																														}
																																												}
																																											}
																																									}
																																								else
																																									{	/* Eval/evaluate.scm 424 */
																																										obj_t
																																											BgL_cdrzd27333zd2_1766;
																																										BgL_cdrzd27333zd2_1766
																																											=
																																											CDR
																																											(BgL_ez00_69);
																																										{	/* Eval/evaluate.scm 424 */
																																											obj_t
																																												BgL_carzd27336zd2_1767;
																																											obj_t
																																												BgL_cdrzd27337zd2_1768;
																																											BgL_carzd27336zd2_1767
																																												=
																																												CAR
																																												(
																																												((obj_t) BgL_cdrzd27333zd2_1766));
																																											BgL_cdrzd27337zd2_1768
																																												=
																																												CDR
																																												(
																																												((obj_t) BgL_cdrzd27333zd2_1766));
																																											if ((CAR(((obj_t) BgL_carzd27336zd2_1767)) == BGl_symbol3314z00zz__evaluatez00))
																																												{	/* Eval/evaluate.scm 424 */
																																													if (PAIRP(BgL_cdrzd27337zd2_1768))
																																														{	/* Eval/evaluate.scm 424 */
																																															if (NULLP(CDR(BgL_cdrzd27337zd2_1768)))
																																																{	/* Eval/evaluate.scm 424 */
																																																	obj_t
																																																		BgL_arg1778z00_1774;
																																																	obj_t
																																																		BgL_arg1779z00_1775;
																																																	BgL_arg1778z00_1774
																																																		=
																																																		CDR
																																																		(
																																																		((obj_t) BgL_carzd27336zd2_1767));
																																																	BgL_arg1779z00_1775
																																																		=
																																																		CAR
																																																		(BgL_cdrzd27337zd2_1768);
																																																	BgL_lz00_1501
																																																		=
																																																		BgL_arg1778z00_1774;
																																																	BgL_e2z00_1502
																																																		=
																																																		BgL_arg1779z00_1775;
																																																BgL_tagzd2164zd2_1503:
																																																	{	/* Eval/evaluate.scm 537 */
																																																		bool_t
																																																			BgL_test3588z00_6380;
																																																		if (PAIRP(BgL_lz00_1501))
																																																			{	/* Eval/evaluate.scm 537 */
																																																				bool_t
																																																					BgL_test3590z00_6383;
																																																				{	/* Eval/evaluate.scm 537 */
																																																					obj_t
																																																						BgL_tmpz00_6384;
																																																					BgL_tmpz00_6384
																																																						=
																																																						CDR
																																																						(BgL_lz00_1501);
																																																					BgL_test3590z00_6383
																																																						=
																																																						PAIRP
																																																						(BgL_tmpz00_6384);
																																																				}
																																																				if (BgL_test3590z00_6383)
																																																					{
																																																						obj_t
																																																							BgL_l1250z00_2569;
																																																						BgL_l1250z00_2569
																																																							=
																																																							BgL_lz00_1501;
																																																					BgL_zc3z04anonymousza32392ze3z87_2570:
																																																						if (NULLP(BgL_l1250z00_2569))
																																																							{	/* Eval/evaluate.scm 537 */
																																																								BgL_test3588z00_6380
																																																									=
																																																									(
																																																									(bool_t)
																																																									1);
																																																							}
																																																						else
																																																							{	/* Eval/evaluate.scm 537 */
																																																								bool_t
																																																									BgL_test3592z00_6389;
																																																								{	/* Eval/evaluate.scm 537 */
																																																									obj_t
																																																										BgL_tmpz00_6390;
																																																									BgL_tmpz00_6390
																																																										=
																																																										CAR
																																																										(
																																																										((obj_t) BgL_l1250z00_2569));
																																																									BgL_test3592z00_6389
																																																										=
																																																										SYMBOLP
																																																										(BgL_tmpz00_6390);
																																																								}
																																																								if (BgL_test3592z00_6389)
																																																									{
																																																										obj_t
																																																											BgL_l1250z00_6394;
																																																										BgL_l1250z00_6394
																																																											=
																																																											CDR
																																																											(
																																																											((obj_t) BgL_l1250z00_2569));
																																																										BgL_l1250z00_2569
																																																											=
																																																											BgL_l1250z00_6394;
																																																										goto
																																																											BgL_zc3z04anonymousza32392ze3z87_2570;
																																																									}
																																																								else
																																																									{	/* Eval/evaluate.scm 537 */
																																																										BgL_test3588z00_6380
																																																											=
																																																											(
																																																											(bool_t)
																																																											0);
																																																									}
																																																							}
																																																					}
																																																				else
																																																					{	/* Eval/evaluate.scm 537 */
																																																						BgL_test3588z00_6380
																																																							=
																																																							(
																																																							(bool_t)
																																																							0);
																																																					}
																																																			}
																																																		else
																																																			{	/* Eval/evaluate.scm 537 */
																																																				BgL_test3588z00_6380
																																																					=
																																																					(
																																																					(bool_t)
																																																					0);
																																																			}
																																																		if (BgL_test3588z00_6380)
																																																			{	/* Eval/evaluate.scm 537 */
																																																				return
																																																					BGl_convzd2fieldzd2setz00zz__evaluatez00
																																																					(BgL_lz00_1501,
																																																					BgL_e2z00_1502,
																																																					BgL_ez00_69,
																																																					BgL_localsz00_70,
																																																					BgL_globalsz00_71,
																																																					BgL_tailzf3zf3_72,
																																																					BgL_wherez00_73,
																																																					BgL_locz00_74,
																																																					BgL_topzf3zf3_75);
																																																			}
																																																		else
																																																			{	/* Eval/evaluate.scm 537 */
																																																				return
																																																					BGl_evcompilezd2errorzd2zz__evcompilez00
																																																					(BgL_locz00_74,
																																																					BGl_string3229z00zz__evaluatez00,
																																																					BGl_string3304z00zz__evaluatez00,
																																																					BgL_ez00_69);
																																																			}
																																																	}
																																																}
																																															else
																																																{	/* Eval/evaluate.scm 424 */
																																																	return
																																																		BGl_evcompilezd2errorzd2zz__evcompilez00
																																																		(BgL_locz00_74,
																																																		BGl_string3229z00zz__evaluatez00,
																																																		BGl_string3304z00zz__evaluatez00,
																																																		BgL_ez00_69);
																																																}
																																														}
																																													else
																																														{	/* Eval/evaluate.scm 424 */
																																															return
																																																BGl_evcompilezd2errorzd2zz__evcompilez00
																																																(BgL_locz00_74,
																																																BGl_string3229z00zz__evaluatez00,
																																																BGl_string3304z00zz__evaluatez00,
																																																BgL_ez00_69);
																																														}
																																												}
																																											else
																																												{	/* Eval/evaluate.scm 424 */
																																													obj_t
																																														BgL_cdrzd27413zd2_1778;
																																													BgL_cdrzd27413zd2_1778
																																														=
																																														CDR
																																														(
																																														((obj_t) BgL_cdrzd27333zd2_1766));
																																													if (PAIRP(BgL_cdrzd27413zd2_1778))
																																														{	/* Eval/evaluate.scm 424 */
																																															if (NULLP(CDR(BgL_cdrzd27413zd2_1778)))
																																																{	/* Eval/evaluate.scm 424 */
																																																	obj_t
																																																		BgL_arg1784z00_1782;
																																																	obj_t
																																																		BgL_arg1786z00_1783;
																																																	BgL_arg1784z00_1782
																																																		=
																																																		CAR
																																																		(
																																																		((obj_t) BgL_cdrzd27333zd2_1766));
																																																	BgL_arg1786z00_1783
																																																		=
																																																		CAR
																																																		(BgL_cdrzd27413zd2_1778);
																																																	{
																																																		BgL_ev_hookz00_bglt
																																																			BgL_auxz00_6411;
																																																		{
																																																			obj_t
																																																				BgL_ez00_6413;
																																																			obj_t
																																																				BgL_vz00_6412;
																																																			BgL_vz00_6412
																																																				=
																																																				BgL_arg1784z00_1782;
																																																			BgL_ez00_6413
																																																				=
																																																				BgL_arg1786z00_1783;
																																																			BgL_ez00_1505
																																																				=
																																																				BgL_ez00_6413;
																																																			BgL_vz00_1504
																																																				=
																																																				BgL_vz00_6412;
																																																			goto
																																																				BgL_tagzd2165zd2_1506;
																																																		}
																																																		return
																																																			(
																																																			(obj_t)
																																																			BgL_auxz00_6411);
																																																	}
																																																}
																																															else
																																																{	/* Eval/evaluate.scm 424 */
																																																	return
																																																		BGl_evcompilezd2errorzd2zz__evcompilez00
																																																		(BgL_locz00_74,
																																																		BGl_string3229z00zz__evaluatez00,
																																																		BGl_string3304z00zz__evaluatez00,
																																																		BgL_ez00_69);
																																																}
																																														}
																																													else
																																														{	/* Eval/evaluate.scm 424 */
																																															return
																																																BGl_evcompilezd2errorzd2zz__evcompilez00
																																																(BgL_locz00_74,
																																																BGl_string3229z00zz__evaluatez00,
																																																BGl_string3304z00zz__evaluatez00,
																																																BgL_ez00_69);
																																														}
																																												}
																																										}
																																									}
																																							}
																																						else
																																							{	/* Eval/evaluate.scm 424 */
																																								obj_t
																																									BgL_cdrzd27470zd2_1787;
																																								BgL_cdrzd27470zd2_1787
																																									=
																																									CDR
																																									(BgL_ez00_69);
																																								{	/* Eval/evaluate.scm 424 */
																																									obj_t
																																										BgL_cdrzd27474zd2_1788;
																																									BgL_cdrzd27474zd2_1788
																																										=
																																										CDR
																																										(
																																										((obj_t) BgL_cdrzd27470zd2_1787));
																																									if (PAIRP(BgL_cdrzd27474zd2_1788))
																																										{	/* Eval/evaluate.scm 424 */
																																											if (NULLP(CDR(BgL_cdrzd27474zd2_1788)))
																																												{	/* Eval/evaluate.scm 424 */
																																													obj_t
																																														BgL_arg1794z00_1792;
																																													obj_t
																																														BgL_arg1795z00_1793;
																																													BgL_arg1794z00_1792
																																														=
																																														CAR
																																														(
																																														((obj_t) BgL_cdrzd27470zd2_1787));
																																													BgL_arg1795z00_1793
																																														=
																																														CAR
																																														(BgL_cdrzd27474zd2_1788);
																																													{
																																														BgL_ev_hookz00_bglt
																																															BgL_auxz00_6428;
																																														{
																																															obj_t
																																																BgL_ez00_6430;
																																															obj_t
																																																BgL_vz00_6429;
																																															BgL_vz00_6429
																																																=
																																																BgL_arg1794z00_1792;
																																															BgL_ez00_6430
																																																=
																																																BgL_arg1795z00_1793;
																																															BgL_ez00_1505
																																																=
																																																BgL_ez00_6430;
																																															BgL_vz00_1504
																																																=
																																																BgL_vz00_6429;
																																															goto
																																																BgL_tagzd2165zd2_1506;
																																														}
																																														return
																																															(
																																															(obj_t)
																																															BgL_auxz00_6428);
																																													}
																																												}
																																											else
																																												{	/* Eval/evaluate.scm 424 */
																																													return
																																														BGl_evcompilezd2errorzd2zz__evcompilez00
																																														(BgL_locz00_74,
																																														BGl_string3229z00zz__evaluatez00,
																																														BGl_string3304z00zz__evaluatez00,
																																														BgL_ez00_69);
																																												}
																																										}
																																									else
																																										{	/* Eval/evaluate.scm 424 */
																																											return
																																												BGl_evcompilezd2errorzd2zz__evcompilez00
																																												(BgL_locz00_74,
																																												BGl_string3229z00zz__evaluatez00,
																																												BGl_string3304z00zz__evaluatez00,
																																												BgL_ez00_69);
																																										}
																																								}
																																							}
																																					}
																																				else
																																					{	/* Eval/evaluate.scm 424 */
																																						return
																																							BGl_evcompilezd2errorzd2zz__evcompilez00
																																							(BgL_locz00_74,
																																							BGl_string3229z00zz__evaluatez00,
																																							BGl_string3304z00zz__evaluatez00,
																																							BgL_ez00_69);
																																					}
																																			}
																																		else
																																			{	/* Eval/evaluate.scm 424 */
																																				obj_t
																																					BgL_cdrzd27595zd2_1795;
																																				BgL_cdrzd27595zd2_1795
																																					=
																																					CDR
																																					(BgL_ez00_69);
																																				if ((CAR
																																						(BgL_ez00_69)
																																						==
																																						BGl_symbol3328z00zz__evaluatez00))
																																					{	/* Eval/evaluate.scm 424 */
																																						if (PAIRP(BgL_cdrzd27595zd2_1795))
																																							{	/* Eval/evaluate.scm 424 */
																																								obj_t
																																									BgL_cdrzd27600zd2_1799;
																																								BgL_cdrzd27600zd2_1799
																																									=
																																									CDR
																																									(BgL_cdrzd27595zd2_1795);
																																								if (PAIRP(BgL_cdrzd27600zd2_1799))
																																									{	/* Eval/evaluate.scm 424 */
																																										obj_t
																																											BgL_carzd27604zd2_1801;
																																										BgL_carzd27604zd2_1801
																																											=
																																											CAR
																																											(BgL_cdrzd27600zd2_1799);
																																										if (PAIRP(BgL_carzd27604zd2_1801))
																																											{	/* Eval/evaluate.scm 424 */
																																												obj_t
																																													BgL_cdrzd27609zd2_1803;
																																												BgL_cdrzd27609zd2_1803
																																													=
																																													CDR
																																													(BgL_carzd27604zd2_1801);
																																												if ((CAR(BgL_carzd27604zd2_1801) == BGl_symbol3293z00zz__evaluatez00))
																																													{	/* Eval/evaluate.scm 424 */
																																														if (PAIRP(BgL_cdrzd27609zd2_1803))
																																															{	/* Eval/evaluate.scm 424 */
																																																obj_t
																																																	BgL_cdrzd27613zd2_1807;
																																																BgL_cdrzd27613zd2_1807
																																																	=
																																																	CDR
																																																	(BgL_cdrzd27609zd2_1803);
																																																if (PAIRP(BgL_cdrzd27613zd2_1807))
																																																	{	/* Eval/evaluate.scm 424 */
																																																		if (NULLP(CDR(BgL_cdrzd27613zd2_1807)))
																																																			{	/* Eval/evaluate.scm 424 */
																																																				if (NULLP(CDR(BgL_cdrzd27600zd2_1799)))
																																																					{	/* Eval/evaluate.scm 424 */
																																																						obj_t
																																																							BgL_arg1811z00_1813;
																																																						obj_t
																																																							BgL_arg1812z00_1814;
																																																						obj_t
																																																							BgL_arg1813z00_1815;
																																																						BgL_arg1811z00_1813
																																																							=
																																																							CAR
																																																							(BgL_cdrzd27595zd2_1795);
																																																						BgL_arg1812z00_1814
																																																							=
																																																							CAR
																																																							(BgL_cdrzd27609zd2_1803);
																																																						BgL_arg1813z00_1815
																																																							=
																																																							CAR
																																																							(BgL_cdrzd27613zd2_1807);
																																																						{
																																																							BgL_ev_defglobalz00_bglt
																																																								BgL_auxz00_6465;
																																																							BgL_gvz00_1508
																																																								=
																																																								BgL_arg1811z00_1813;
																																																							BgL_formalsz00_1509
																																																								=
																																																								BgL_arg1812z00_1814;
																																																							BgL_bodyz00_1510
																																																								=
																																																								BgL_arg1813z00_1815;
																																																						BgL_tagzd2167zd2_1511:
																																																							{	/* Eval/evaluate.scm 554 */
																																																								obj_t
																																																									BgL_tidz00_2587;
																																																								BgL_tidz00_2587
																																																									=
																																																									BGl_untypezd2identzd2zz__evaluatez00
																																																									(BgL_gvz00_1508);
																																																								{	/* Eval/evaluate.scm 555 */
																																																									BgL_ev_defglobalz00_bglt
																																																										BgL_new1146z00_2588;
																																																									{	/* Eval/evaluate.scm 559 */
																																																										BgL_ev_defglobalz00_bglt
																																																											BgL_new1145z00_2591;
																																																										BgL_new1145z00_2591
																																																											=
																																																											(
																																																											(BgL_ev_defglobalz00_bglt)
																																																											BOBJECT
																																																											(GC_MALLOC
																																																												(sizeof
																																																													(struct
																																																														BgL_ev_defglobalz00_bgl))));
																																																										{	/* Eval/evaluate.scm 559 */
																																																											long
																																																												BgL_arg2404z00_2592;
																																																											{	/* Eval/evaluate.scm 559 */
																																																												long
																																																													BgL_res2996z00_3823;
																																																												BgL_res2996z00_3823
																																																													=
																																																													BGL_CLASS_INDEX
																																																													(BGl_ev_defglobalz00zz__evaluate_typesz00);
																																																												BgL_arg2404z00_2592
																																																													=
																																																													BgL_res2996z00_3823;
																																																											}
																																																											BGL_OBJECT_CLASS_NUM_SET
																																																												(
																																																												((BgL_objectz00_bglt) BgL_new1145z00_2591), BgL_arg2404z00_2592);
																																																										}
																																																										BgL_new1146z00_2588
																																																											=
																																																											BgL_new1145z00_2591;
																																																									}
																																																									{
																																																										BgL_ev_exprz00_bglt
																																																											BgL_auxz00_6471;
																																																										{	/* Eval/evaluate.scm 559 */
																																																											obj_t
																																																												BgL_arg2402z00_2589;
																																																											BgL_arg2402z00_2589
																																																												=
																																																												CDR
																																																												(BgL_tidz00_2587);
																																																											BgL_auxz00_6471
																																																												=
																																																												(
																																																												(BgL_ev_exprz00_bglt)
																																																												BGl_convzd2lambdaze70z35zz__evaluatez00
																																																												(BgL_globalsz00_71,
																																																													BgL_localsz00_70,
																																																													BgL_ez00_69,
																																																													BgL_locz00_74,
																																																													BgL_formalsz00_1509,
																																																													BgL_bodyz00_1510,
																																																													BgL_gvz00_1508,
																																																													BgL_arg2402z00_2589));
																																																										}
																																																										((((BgL_ev_hookz00_bglt) COBJECT(((BgL_ev_hookz00_bglt) BgL_new1146z00_2588)))->BgL_ez00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_6471), BUNSPEC);
																																																									}
																																																									((((BgL_ev_setglobalz00_bglt) COBJECT(((BgL_ev_setglobalz00_bglt) BgL_new1146z00_2588)))->BgL_locz00) = ((obj_t) BgL_locz00_74), BUNSPEC);
																																																									((((BgL_ev_setglobalz00_bglt) COBJECT(((BgL_ev_setglobalz00_bglt) BgL_new1146z00_2588)))->BgL_namez00) = ((obj_t) CAR(BgL_tidz00_2587)), BUNSPEC);
																																																									{
																																																										obj_t
																																																											BgL_auxz00_6482;
																																																										if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_globalsz00_71))
																																																											{	/* Eval/evaluate.scm 558 */
																																																												BgL_auxz00_6482
																																																													=
																																																													BgL_globalsz00_71;
																																																											}
																																																										else
																																																											{	/* Eval/evaluate.scm 558 */
																																																												BgL_auxz00_6482
																																																													=
																																																													BGL_MODULE
																																																													();
																																																											}
																																																										((((BgL_ev_setglobalz00_bglt) COBJECT(((BgL_ev_setglobalz00_bglt) BgL_new1146z00_2588)))->BgL_modz00) = ((obj_t) BgL_auxz00_6482), BUNSPEC);
																																																									}
																																																									BgL_auxz00_6465
																																																										=
																																																										BgL_new1146z00_2588;
																																																								}
																																																							}
																																																							return
																																																								(
																																																								(obj_t)
																																																								BgL_auxz00_6465);
																																																						}
																																																					}
																																																				else
																																																					{	/* Eval/evaluate.scm 424 */
																																																						obj_t
																																																							BgL_arg1814z00_1816;
																																																						BgL_arg1814z00_1816
																																																							=
																																																							CAR
																																																							(BgL_ez00_69);
																																																						{
																																																							BgL_ev_appz00_bglt
																																																								BgL_auxz00_6490;
																																																							{
																																																								obj_t
																																																									BgL_argsz00_6492;
																																																								obj_t
																																																									BgL_fz00_6491;
																																																								BgL_fz00_6491
																																																									=
																																																									BgL_arg1814z00_1816;
																																																								BgL_argsz00_6492
																																																									=
																																																									BgL_cdrzd27595zd2_1795;
																																																								BgL_argsz00_1536
																																																									=
																																																									BgL_argsz00_6492;
																																																								BgL_fz00_1535
																																																									=
																																																									BgL_fz00_6491;
																																																								goto
																																																									BgL_tagzd2176zd2_1537;
																																																							}
																																																							return
																																																								(
																																																								(obj_t)
																																																								BgL_auxz00_6490);
																																																						}
																																																					}
																																																			}
																																																		else
																																																			{	/* Eval/evaluate.scm 424 */
																																																				obj_t
																																																					BgL_cdrzd27715zd2_1820;
																																																				BgL_cdrzd27715zd2_1820
																																																					=
																																																					CDR
																																																					(
																																																					((obj_t) BgL_cdrzd27595zd2_1795));
																																																				if (NULLP(CDR(((obj_t) BgL_cdrzd27715zd2_1820))))
																																																					{	/* Eval/evaluate.scm 424 */
																																																						obj_t
																																																							BgL_arg1819z00_1823;
																																																						obj_t
																																																							BgL_arg1820z00_1824;
																																																						BgL_arg1819z00_1823
																																																							=
																																																							CAR
																																																							(
																																																							((obj_t) BgL_cdrzd27595zd2_1795));
																																																						BgL_arg1820z00_1824
																																																							=
																																																							CAR
																																																							(
																																																							((obj_t) BgL_cdrzd27715zd2_1820));
																																																						{
																																																							BgL_ev_defglobalz00_bglt
																																																								BgL_auxz00_6504;
																																																							BgL_gvz00_1512
																																																								=
																																																								BgL_arg1819z00_1823;
																																																							BgL_gez00_1513
																																																								=
																																																								BgL_arg1820z00_1824;
																																																						BgL_tagzd2168zd2_1514:
																																																							{	/* Eval/evaluate.scm 561 */
																																																								obj_t
																																																									BgL_tidz00_2593;
																																																								BgL_tidz00_2593
																																																									=
																																																									BGl_untypezd2identzd2zz__evaluatez00
																																																									(BgL_gvz00_1512);
																																																								{	/* Eval/evaluate.scm 562 */
																																																									BgL_ev_defglobalz00_bglt
																																																										BgL_new1148z00_2594;
																																																									{	/* Eval/evaluate.scm 566 */
																																																										BgL_ev_defglobalz00_bglt
																																																											BgL_new1147z00_2599;
																																																										BgL_new1147z00_2599
																																																											=
																																																											(
																																																											(BgL_ev_defglobalz00_bglt)
																																																											BOBJECT
																																																											(GC_MALLOC
																																																												(sizeof
																																																													(struct
																																																														BgL_ev_defglobalz00_bgl))));
																																																										{	/* Eval/evaluate.scm 566 */
																																																											long
																																																												BgL_arg2409z00_2600;
																																																											{	/* Eval/evaluate.scm 566 */
																																																												long
																																																													BgL_res2997z00_3829;
																																																												BgL_res2997z00_3829
																																																													=
																																																													BGL_CLASS_INDEX
																																																													(BGl_ev_defglobalz00zz__evaluate_typesz00);
																																																												BgL_arg2409z00_2600
																																																													=
																																																													BgL_res2997z00_3829;
																																																											}
																																																											BGL_OBJECT_CLASS_NUM_SET
																																																												(
																																																												((BgL_objectz00_bglt) BgL_new1147z00_2599), BgL_arg2409z00_2600);
																																																										}
																																																										BgL_new1148z00_2594
																																																											=
																																																											BgL_new1147z00_2599;
																																																									}
																																																									{
																																																										BgL_ev_exprz00_bglt
																																																											BgL_auxz00_6510;
																																																										{	/* Eval/evaluate.scm 567 */
																																																											obj_t
																																																												BgL_arg2405z00_2595;
																																																											{	/* Eval/evaluate.scm 567 */
																																																												obj_t
																																																													BgL_arg2407z00_2597;
																																																												BgL_arg2407z00_2597
																																																													=
																																																													CDR
																																																													(BgL_tidz00_2593);
																																																												BgL_arg2405z00_2595
																																																													=
																																																													BGl_typezd2resultzd2zz__evaluatez00
																																																													(BgL_arg2407z00_2597,
																																																													BgL_gez00_1513,
																																																													BgL_locz00_74);
																																																											}
																																																											{	/* Eval/evaluate.scm 383 */
																																																												obj_t
																																																													BgL_arg2433z00_3833;
																																																												{	/* Eval/evaluate.scm 144 */
																																																													obj_t
																																																														BgL__ortest_1068z00_3834;
																																																													BgL__ortest_1068z00_3834
																																																														=
																																																														BGl_getzd2sourcezd2locationz00zz__readerz00
																																																														(BgL_arg2405z00_2595);
																																																													if (CBOOL(BgL__ortest_1068z00_3834))
																																																														{	/* Eval/evaluate.scm 144 */
																																																															BgL_arg2433z00_3833
																																																																=
																																																																BgL__ortest_1068z00_3834;
																																																														}
																																																													else
																																																														{	/* Eval/evaluate.scm 144 */
																																																															BgL_arg2433z00_3833
																																																																=
																																																																BgL_locz00_74;
																																																														}
																																																												}
																																																												{
																																																													obj_t
																																																														BgL_auxz00_6517;
																																																													{	/* Eval/evaluate.scm 374 */
																																																														obj_t
																																																															BgL_auxz00_6518;
																																																														if (BgL_topzf3zf3_75)
																																																															{	/* Eval/evaluate.scm 568 */
																																																																BgL_auxz00_6518
																																																																	=
																																																																	BgL_gvz00_1512;
																																																															}
																																																														else
																																																															{	/* Eval/evaluate.scm 568 */
																																																																BgL_auxz00_6518
																																																																	=
																																																																	BgL_wherez00_73;
																																																															}
																																																														BgL_auxz00_6517
																																																															=
																																																															BGl_convz00zz__evaluatez00
																																																															(BgL_arg2405z00_2595,
																																																															BgL_localsz00_70,
																																																															BgL_globalsz00_71,
																																																															BFALSE,
																																																															BgL_auxz00_6518,
																																																															BgL_arg2433z00_3833,
																																																															((bool_t) 0));
																																																													}
																																																													BgL_auxz00_6510
																																																														=
																																																														(
																																																														(BgL_ev_exprz00_bglt)
																																																														BgL_auxz00_6517);
																																																												}
																																																											}
																																																										}
																																																										((((BgL_ev_hookz00_bglt) COBJECT(((BgL_ev_hookz00_bglt) BgL_new1148z00_2594)))->BgL_ez00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_6510), BUNSPEC);
																																																									}
																																																									((((BgL_ev_setglobalz00_bglt) COBJECT(((BgL_ev_setglobalz00_bglt) BgL_new1148z00_2594)))->BgL_locz00) = ((obj_t) BgL_locz00_74), BUNSPEC);
																																																									((((BgL_ev_setglobalz00_bglt) COBJECT(((BgL_ev_setglobalz00_bglt) BgL_new1148z00_2594)))->BgL_namez00) = ((obj_t) CAR(BgL_tidz00_2593)), BUNSPEC);
																																																									{
																																																										obj_t
																																																											BgL_auxz00_6528;
																																																										if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_globalsz00_71))
																																																											{	/* Eval/evaluate.scm 565 */
																																																												BgL_auxz00_6528
																																																													=
																																																													BgL_globalsz00_71;
																																																											}
																																																										else
																																																											{	/* Eval/evaluate.scm 565 */
																																																												BgL_auxz00_6528
																																																													=
																																																													BGL_MODULE
																																																													();
																																																											}
																																																										((((BgL_ev_setglobalz00_bglt) COBJECT(((BgL_ev_setglobalz00_bglt) BgL_new1148z00_2594)))->BgL_modz00) = ((obj_t) BgL_auxz00_6528), BUNSPEC);
																																																									}
																																																									BgL_auxz00_6504
																																																										=
																																																										BgL_new1148z00_2594;
																																																								}
																																																							}
																																																							return
																																																								(
																																																								(obj_t)
																																																								BgL_auxz00_6504);
																																																						}
																																																					}
																																																				else
																																																					{	/* Eval/evaluate.scm 424 */
																																																						obj_t
																																																							BgL_arg1821z00_1825;
																																																						obj_t
																																																							BgL_arg1822z00_1826;
																																																						BgL_arg1821z00_1825
																																																							=
																																																							CAR
																																																							(BgL_ez00_69);
																																																						BgL_arg1822z00_1826
																																																							=
																																																							CDR
																																																							(BgL_ez00_69);
																																																						{
																																																							BgL_ev_appz00_bglt
																																																								BgL_auxz00_6537;
																																																							{
																																																								obj_t
																																																									BgL_argsz00_6539;
																																																								obj_t
																																																									BgL_fz00_6538;
																																																								BgL_fz00_6538
																																																									=
																																																									BgL_arg1821z00_1825;
																																																								BgL_argsz00_6539
																																																									=
																																																									BgL_arg1822z00_1826;
																																																								BgL_argsz00_1536
																																																									=
																																																									BgL_argsz00_6539;
																																																								BgL_fz00_1535
																																																									=
																																																									BgL_fz00_6538;
																																																								goto
																																																									BgL_tagzd2176zd2_1537;
																																																							}
																																																							return
																																																								(
																																																								(obj_t)
																																																								BgL_auxz00_6537);
																																																						}
																																																					}
																																																			}
																																																	}
																																																else
																																																	{	/* Eval/evaluate.scm 424 */
																																																		obj_t
																																																			BgL_cdrzd27804zd2_1830;
																																																		BgL_cdrzd27804zd2_1830
																																																			=
																																																			CDR
																																																			(
																																																			((obj_t) BgL_cdrzd27595zd2_1795));
																																																		if (NULLP(CDR(((obj_t) BgL_cdrzd27804zd2_1830))))
																																																			{	/* Eval/evaluate.scm 424 */
																																																				obj_t
																																																					BgL_arg1827z00_1833;
																																																				obj_t
																																																					BgL_arg1828z00_1834;
																																																				BgL_arg1827z00_1833
																																																					=
																																																					CAR
																																																					(
																																																					((obj_t) BgL_cdrzd27595zd2_1795));
																																																				BgL_arg1828z00_1834
																																																					=
																																																					CAR
																																																					(
																																																					((obj_t) BgL_cdrzd27804zd2_1830));
																																																				{
																																																					BgL_ev_defglobalz00_bglt
																																																						BgL_auxz00_6551;
																																																					{
																																																						obj_t
																																																							BgL_gez00_6553;
																																																						obj_t
																																																							BgL_gvz00_6552;
																																																						BgL_gvz00_6552
																																																							=
																																																							BgL_arg1827z00_1833;
																																																						BgL_gez00_6553
																																																							=
																																																							BgL_arg1828z00_1834;
																																																						BgL_gez00_1513
																																																							=
																																																							BgL_gez00_6553;
																																																						BgL_gvz00_1512
																																																							=
																																																							BgL_gvz00_6552;
																																																						goto
																																																							BgL_tagzd2168zd2_1514;
																																																					}
																																																					return
																																																						(
																																																						(obj_t)
																																																						BgL_auxz00_6551);
																																																				}
																																																			}
																																																		else
																																																			{	/* Eval/evaluate.scm 424 */
																																																				obj_t
																																																					BgL_arg1829z00_1835;
																																																				obj_t
																																																					BgL_arg1830z00_1836;
																																																				BgL_arg1829z00_1835
																																																					=
																																																					CAR
																																																					(BgL_ez00_69);
																																																				BgL_arg1830z00_1836
																																																					=
																																																					CDR
																																																					(BgL_ez00_69);
																																																				{
																																																					BgL_ev_appz00_bglt
																																																						BgL_auxz00_6557;
																																																					{
																																																						obj_t
																																																							BgL_argsz00_6559;
																																																						obj_t
																																																							BgL_fz00_6558;
																																																						BgL_fz00_6558
																																																							=
																																																							BgL_arg1829z00_1835;
																																																						BgL_argsz00_6559
																																																							=
																																																							BgL_arg1830z00_1836;
																																																						BgL_argsz00_1536
																																																							=
																																																							BgL_argsz00_6559;
																																																						BgL_fz00_1535
																																																							=
																																																							BgL_fz00_6558;
																																																						goto
																																																							BgL_tagzd2176zd2_1537;
																																																					}
																																																					return
																																																						(
																																																						(obj_t)
																																																						BgL_auxz00_6557);
																																																				}
																																																			}
																																																	}
																																															}
																																														else
																																															{	/* Eval/evaluate.scm 424 */
																																																obj_t
																																																	BgL_cdrzd27893zd2_1839;
																																																BgL_cdrzd27893zd2_1839
																																																	=
																																																	CDR
																																																	(
																																																	((obj_t) BgL_cdrzd27595zd2_1795));
																																																if (NULLP(CDR(((obj_t) BgL_cdrzd27893zd2_1839))))
																																																	{	/* Eval/evaluate.scm 424 */
																																																		obj_t
																																																			BgL_arg1835z00_1842;
																																																		obj_t
																																																			BgL_arg1836z00_1843;
																																																		BgL_arg1835z00_1842
																																																			=
																																																			CAR
																																																			(
																																																			((obj_t) BgL_cdrzd27595zd2_1795));
																																																		BgL_arg1836z00_1843
																																																			=
																																																			CAR
																																																			(
																																																			((obj_t) BgL_cdrzd27893zd2_1839));
																																																		{
																																																			BgL_ev_defglobalz00_bglt
																																																				BgL_auxz00_6571;
																																																			{
																																																				obj_t
																																																					BgL_gez00_6573;
																																																				obj_t
																																																					BgL_gvz00_6572;
																																																				BgL_gvz00_6572
																																																					=
																																																					BgL_arg1835z00_1842;
																																																				BgL_gez00_6573
																																																					=
																																																					BgL_arg1836z00_1843;
																																																				BgL_gez00_1513
																																																					=
																																																					BgL_gez00_6573;
																																																				BgL_gvz00_1512
																																																					=
																																																					BgL_gvz00_6572;
																																																				goto
																																																					BgL_tagzd2168zd2_1514;
																																																			}
																																																			return
																																																				(
																																																				(obj_t)
																																																				BgL_auxz00_6571);
																																																		}
																																																	}
																																																else
																																																	{	/* Eval/evaluate.scm 424 */
																																																		obj_t
																																																			BgL_arg1838z00_1844;
																																																		obj_t
																																																			BgL_arg1840z00_1845;
																																																		BgL_arg1838z00_1844
																																																			=
																																																			CAR
																																																			(BgL_ez00_69);
																																																		BgL_arg1840z00_1845
																																																			=
																																																			CDR
																																																			(BgL_ez00_69);
																																																		{
																																																			BgL_ev_appz00_bglt
																																																				BgL_auxz00_6577;
																																																			{
																																																				obj_t
																																																					BgL_argsz00_6579;
																																																				obj_t
																																																					BgL_fz00_6578;
																																																				BgL_fz00_6578
																																																					=
																																																					BgL_arg1838z00_1844;
																																																				BgL_argsz00_6579
																																																					=
																																																					BgL_arg1840z00_1845;
																																																				BgL_argsz00_1536
																																																					=
																																																					BgL_argsz00_6579;
																																																				BgL_fz00_1535
																																																					=
																																																					BgL_fz00_6578;
																																																				goto
																																																					BgL_tagzd2176zd2_1537;
																																																			}
																																																			return
																																																				(
																																																				(obj_t)
																																																				BgL_auxz00_6577);
																																																		}
																																																	}
																																															}
																																													}
																																												else
																																													{	/* Eval/evaluate.scm 424 */
																																														obj_t
																																															BgL_cdrzd27982zd2_1848;
																																														BgL_cdrzd27982zd2_1848
																																															=
																																															CDR
																																															(
																																															((obj_t) BgL_cdrzd27595zd2_1795));
																																														if (NULLP(CDR(((obj_t) BgL_cdrzd27982zd2_1848))))
																																															{	/* Eval/evaluate.scm 424 */
																																																obj_t
																																																	BgL_arg1845z00_1851;
																																																obj_t
																																																	BgL_arg1846z00_1852;
																																																BgL_arg1845z00_1851
																																																	=
																																																	CAR
																																																	(
																																																	((obj_t) BgL_cdrzd27595zd2_1795));
																																																BgL_arg1846z00_1852
																																																	=
																																																	CAR
																																																	(
																																																	((obj_t) BgL_cdrzd27982zd2_1848));
																																																{
																																																	BgL_ev_defglobalz00_bglt
																																																		BgL_auxz00_6591;
																																																	{
																																																		obj_t
																																																			BgL_gez00_6593;
																																																		obj_t
																																																			BgL_gvz00_6592;
																																																		BgL_gvz00_6592
																																																			=
																																																			BgL_arg1845z00_1851;
																																																		BgL_gez00_6593
																																																			=
																																																			BgL_arg1846z00_1852;
																																																		BgL_gez00_1513
																																																			=
																																																			BgL_gez00_6593;
																																																		BgL_gvz00_1512
																																																			=
																																																			BgL_gvz00_6592;
																																																		goto
																																																			BgL_tagzd2168zd2_1514;
																																																	}
																																																	return
																																																		(
																																																		(obj_t)
																																																		BgL_auxz00_6591);
																																																}
																																															}
																																														else
																																															{	/* Eval/evaluate.scm 424 */
																																																obj_t
																																																	BgL_arg1847z00_1853;
																																																obj_t
																																																	BgL_arg1848z00_1854;
																																																BgL_arg1847z00_1853
																																																	=
																																																	CAR
																																																	(BgL_ez00_69);
																																																BgL_arg1848z00_1854
																																																	=
																																																	CDR
																																																	(BgL_ez00_69);
																																																{
																																																	BgL_ev_appz00_bglt
																																																		BgL_auxz00_6597;
																																																	{
																																																		obj_t
																																																			BgL_argsz00_6599;
																																																		obj_t
																																																			BgL_fz00_6598;
																																																		BgL_fz00_6598
																																																			=
																																																			BgL_arg1847z00_1853;
																																																		BgL_argsz00_6599
																																																			=
																																																			BgL_arg1848z00_1854;
																																																		BgL_argsz00_1536
																																																			=
																																																			BgL_argsz00_6599;
																																																		BgL_fz00_1535
																																																			=
																																																			BgL_fz00_6598;
																																																		goto
																																																			BgL_tagzd2176zd2_1537;
																																																	}
																																																	return
																																																		(
																																																		(obj_t)
																																																		BgL_auxz00_6597);
																																																}
																																															}
																																													}
																																											}
																																										else
																																											{	/* Eval/evaluate.scm 424 */
																																												obj_t
																																													BgL_cdrzd28071zd2_1858;
																																												BgL_cdrzd28071zd2_1858
																																													=
																																													CDR
																																													(
																																													((obj_t) BgL_cdrzd27595zd2_1795));
																																												if (NULLP(CDR(((obj_t) BgL_cdrzd28071zd2_1858))))
																																													{	/* Eval/evaluate.scm 424 */
																																														obj_t
																																															BgL_arg1855z00_1861;
																																														obj_t
																																															BgL_arg1856z00_1862;
																																														BgL_arg1855z00_1861
																																															=
																																															CAR
																																															(
																																															((obj_t) BgL_cdrzd27595zd2_1795));
																																														BgL_arg1856z00_1862
																																															=
																																															CAR
																																															(
																																															((obj_t) BgL_cdrzd28071zd2_1858));
																																														{
																																															BgL_ev_defglobalz00_bglt
																																																BgL_auxz00_6611;
																																															{
																																																obj_t
																																																	BgL_gez00_6613;
																																																obj_t
																																																	BgL_gvz00_6612;
																																																BgL_gvz00_6612
																																																	=
																																																	BgL_arg1855z00_1861;
																																																BgL_gez00_6613
																																																	=
																																																	BgL_arg1856z00_1862;
																																																BgL_gez00_1513
																																																	=
																																																	BgL_gez00_6613;
																																																BgL_gvz00_1512
																																																	=
																																																	BgL_gvz00_6612;
																																																goto
																																																	BgL_tagzd2168zd2_1514;
																																															}
																																															return
																																																(
																																																(obj_t)
																																																BgL_auxz00_6611);
																																														}
																																													}
																																												else
																																													{	/* Eval/evaluate.scm 424 */
																																														obj_t
																																															BgL_arg1857z00_1863;
																																														obj_t
																																															BgL_arg1858z00_1864;
																																														BgL_arg1857z00_1863
																																															=
																																															CAR
																																															(BgL_ez00_69);
																																														BgL_arg1858z00_1864
																																															=
																																															CDR
																																															(BgL_ez00_69);
																																														{
																																															BgL_ev_appz00_bglt
																																																BgL_auxz00_6617;
																																															{
																																																obj_t
																																																	BgL_argsz00_6619;
																																																obj_t
																																																	BgL_fz00_6618;
																																																BgL_fz00_6618
																																																	=
																																																	BgL_arg1857z00_1863;
																																																BgL_argsz00_6619
																																																	=
																																																	BgL_arg1858z00_1864;
																																																BgL_argsz00_1536
																																																	=
																																																	BgL_argsz00_6619;
																																																BgL_fz00_1535
																																																	=
																																																	BgL_fz00_6618;
																																																goto
																																																	BgL_tagzd2176zd2_1537;
																																															}
																																															return
																																																(
																																																(obj_t)
																																																BgL_auxz00_6617);
																																														}
																																													}
																																											}
																																									}
																																								else
																																									{	/* Eval/evaluate.scm 424 */
																																										obj_t
																																											BgL_arg1861z00_1866;
																																										BgL_arg1861z00_1866
																																											=
																																											CAR
																																											(BgL_ez00_69);
																																										{
																																											BgL_ev_appz00_bglt
																																												BgL_auxz00_6622;
																																											{
																																												obj_t
																																													BgL_argsz00_6624;
																																												obj_t
																																													BgL_fz00_6623;
																																												BgL_fz00_6623
																																													=
																																													BgL_arg1861z00_1866;
																																												BgL_argsz00_6624
																																													=
																																													BgL_cdrzd27595zd2_1795;
																																												BgL_argsz00_1536
																																													=
																																													BgL_argsz00_6624;
																																												BgL_fz00_1535
																																													=
																																													BgL_fz00_6623;
																																												goto
																																													BgL_tagzd2176zd2_1537;
																																											}
																																											return
																																												(
																																												(obj_t)
																																												BgL_auxz00_6622);
																																										}
																																									}
																																							}
																																						else
																																							{	/* Eval/evaluate.scm 424 */
																																								obj_t
																																									BgL_arg1863z00_1868;
																																								BgL_arg1863z00_1868
																																									=
																																									CAR
																																									(BgL_ez00_69);
																																								{
																																									BgL_ev_appz00_bglt
																																										BgL_auxz00_6627;
																																									{
																																										obj_t
																																											BgL_argsz00_6629;
																																										obj_t
																																											BgL_fz00_6628;
																																										BgL_fz00_6628
																																											=
																																											BgL_arg1863z00_1868;
																																										BgL_argsz00_6629
																																											=
																																											BgL_cdrzd27595zd2_1795;
																																										BgL_argsz00_1536
																																											=
																																											BgL_argsz00_6629;
																																										BgL_fz00_1535
																																											=
																																											BgL_fz00_6628;
																																										goto
																																											BgL_tagzd2176zd2_1537;
																																									}
																																									return
																																										(
																																										(obj_t)
																																										BgL_auxz00_6627);
																																								}
																																							}
																																					}
																																				else
																																					{	/* Eval/evaluate.scm 424 */
																																						if (
																																							(CAR
																																								(BgL_ez00_69)
																																								==
																																								BGl_symbol3330z00zz__evaluatez00))
																																							{	/* Eval/evaluate.scm 424 */
																																								if (PAIRP(BgL_cdrzd27595zd2_1795))
																																									{	/* Eval/evaluate.scm 424 */
																																										obj_t
																																											BgL_carzd28319zd2_1874;
																																										BgL_carzd28319zd2_1874
																																											=
																																											CAR
																																											(BgL_cdrzd27595zd2_1795);
																																										if (PAIRP(BgL_carzd28319zd2_1874))
																																											{	/* Eval/evaluate.scm 424 */
																																												if (NULLP(CDR(BgL_carzd28319zd2_1874)))
																																													{	/* Eval/evaluate.scm 424 */
																																														obj_t
																																															BgL_arg1872z00_1878;
																																														obj_t
																																															BgL_arg1873z00_1879;
																																														BgL_arg1872z00_1878
																																															=
																																															CAR
																																															(BgL_carzd28319zd2_1874);
																																														BgL_arg1873z00_1879
																																															=
																																															CDR
																																															(BgL_cdrzd27595zd2_1795);
																																														{
																																															BgL_ev_bindzd2exitzd2_bglt
																																																BgL_auxz00_6644;
																																															BgL_vz00_1515
																																																=
																																																BgL_arg1872z00_1878;
																																															BgL_bodyz00_1516
																																																=
																																																BgL_arg1873z00_1879;
																																														BgL_tagzd2169zd2_1517:
																																															{	/* Eval/evaluate.scm 570 */
																																																BgL_ev_varz00_bglt
																																																	BgL_varz00_2601;
																																																{	/* Eval/evaluate.scm 570 */
																																																	BgL_ev_varz00_bglt
																																																		BgL_new1150z00_2606;
																																																	{	/* Eval/evaluate.scm 570 */
																																																		BgL_ev_varz00_bglt
																																																			BgL_new1149z00_2607;
																																																		BgL_new1149z00_2607
																																																			=
																																																			(
																																																			(BgL_ev_varz00_bglt)
																																																			BOBJECT
																																																			(GC_MALLOC
																																																				(sizeof
																																																					(struct
																																																						BgL_ev_varz00_bgl))));
																																																		{	/* Eval/evaluate.scm 570 */
																																																			long
																																																				BgL_arg2413z00_2608;
																																																			{	/* Eval/evaluate.scm 570 */
																																																				long
																																																					BgL_res2998z00_3837;
																																																				BgL_res2998z00_3837
																																																					=
																																																					BGL_CLASS_INDEX
																																																					(BGl_ev_varz00zz__evaluate_typesz00);
																																																				BgL_arg2413z00_2608
																																																					=
																																																					BgL_res2998z00_3837;
																																																			}
																																																			BGL_OBJECT_CLASS_NUM_SET
																																																				(
																																																				((BgL_objectz00_bglt) BgL_new1149z00_2607), BgL_arg2413z00_2608);
																																																		}
																																																		BgL_new1150z00_2606
																																																			=
																																																			BgL_new1149z00_2607;
																																																	}
																																																	((((BgL_ev_varz00_bglt) COBJECT(BgL_new1150z00_2606))->BgL_namez00) = ((obj_t) BgL_vz00_1515), BUNSPEC);
																																																	((((BgL_ev_varz00_bglt) COBJECT(BgL_new1150z00_2606))->BgL_effz00) = ((obj_t) BFALSE), BUNSPEC);
																																																	((((BgL_ev_varz00_bglt) COBJECT(BgL_new1150z00_2606))->BgL_typez00) = ((obj_t) BFALSE), BUNSPEC);
																																																	BgL_varz00_2601
																																																		=
																																																		BgL_new1150z00_2606;
																																																}
																																																{	/* Eval/evaluate.scm 571 */
																																																	BgL_ev_bindzd2exitzd2_bglt
																																																		BgL_new1152z00_2602;
																																																	{	/* Eval/evaluate.scm 572 */
																																																		BgL_ev_bindzd2exitzd2_bglt
																																																			BgL_new1151z00_2604;
																																																		BgL_new1151z00_2604
																																																			=
																																																			(
																																																			(BgL_ev_bindzd2exitzd2_bglt)
																																																			BOBJECT
																																																			(GC_MALLOC
																																																				(sizeof
																																																					(struct
																																																						BgL_ev_bindzd2exitzd2_bgl))));
																																																		{	/* Eval/evaluate.scm 572 */
																																																			long
																																																				BgL_arg2412z00_2605;
																																																			{	/* Eval/evaluate.scm 572 */
																																																				long
																																																					BgL_res2999z00_3841;
																																																				BgL_res2999z00_3841
																																																					=
																																																					BGL_CLASS_INDEX
																																																					(BGl_ev_bindzd2exitzd2zz__evaluate_typesz00);
																																																				BgL_arg2412z00_2605
																																																					=
																																																					BgL_res2999z00_3841;
																																																			}
																																																			BGL_OBJECT_CLASS_NUM_SET
																																																				(
																																																				((BgL_objectz00_bglt) BgL_new1151z00_2604), BgL_arg2412z00_2605);
																																																		}
																																																		BgL_new1152z00_2602
																																																			=
																																																			BgL_new1151z00_2604;
																																																	}
																																																	((((BgL_ev_bindzd2exitzd2_bglt) COBJECT(BgL_new1152z00_2602))->BgL_varz00) = ((BgL_ev_varz00_bglt) BgL_varz00_2601), BUNSPEC);
																																																	{
																																																		BgL_ev_exprz00_bglt
																																																			BgL_auxz00_6657;
																																																		{	/* Eval/evaluate.scm 573 */
																																																			obj_t
																																																				BgL_arg2411z00_2603;
																																																			BgL_arg2411z00_2603
																																																				=
																																																				MAKE_YOUNG_PAIR
																																																				(
																																																				((obj_t) BgL_varz00_2601), BgL_localsz00_70);
																																																			BgL_auxz00_6657
																																																				=
																																																				(
																																																				(BgL_ev_exprz00_bglt)
																																																				BGl_convzd2beginzd2zz__evaluatez00
																																																				(BgL_bodyz00_1516,
																																																					BgL_arg2411z00_2603,
																																																					BgL_globalsz00_71,
																																																					BFALSE,
																																																					BgL_wherez00_73,
																																																					BgL_locz00_74,
																																																					((bool_t) 0)));
																																																		}
																																																		((((BgL_ev_bindzd2exitzd2_bglt) COBJECT(BgL_new1152z00_2602))->BgL_bodyz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_6657), BUNSPEC);
																																																	}
																																																	BgL_auxz00_6644
																																																		=
																																																		BgL_new1152z00_2602;
																																															}}
																																															return
																																																(
																																																(obj_t)
																																																BgL_auxz00_6644);
																																														}
																																													}
																																												else
																																													{	/* Eval/evaluate.scm 424 */
																																														obj_t
																																															BgL_arg1874z00_1880;
																																														obj_t
																																															BgL_arg1876z00_1881;
																																														BgL_arg1874z00_1880
																																															=
																																															CAR
																																															(BgL_ez00_69);
																																														BgL_arg1876z00_1881
																																															=
																																															CDR
																																															(BgL_ez00_69);
																																														{
																																															BgL_ev_appz00_bglt
																																																BgL_auxz00_6666;
																																															{
																																																obj_t
																																																	BgL_argsz00_6668;
																																																obj_t
																																																	BgL_fz00_6667;
																																																BgL_fz00_6667
																																																	=
																																																	BgL_arg1874z00_1880;
																																																BgL_argsz00_6668
																																																	=
																																																	BgL_arg1876z00_1881;
																																																BgL_argsz00_1536
																																																	=
																																																	BgL_argsz00_6668;
																																																BgL_fz00_1535
																																																	=
																																																	BgL_fz00_6667;
																																																goto
																																																	BgL_tagzd2176zd2_1537;
																																															}
																																															return
																																																(
																																																(obj_t)
																																																BgL_auxz00_6666);
																																														}
																																													}
																																											}
																																										else
																																											{	/* Eval/evaluate.scm 424 */
																																												obj_t
																																													BgL_arg1878z00_1883;
																																												obj_t
																																													BgL_arg1879z00_1884;
																																												BgL_arg1878z00_1883
																																													=
																																													CAR
																																													(BgL_ez00_69);
																																												BgL_arg1879z00_1884
																																													=
																																													CDR
																																													(BgL_ez00_69);
																																												{
																																													BgL_ev_appz00_bglt
																																														BgL_auxz00_6672;
																																													{
																																														obj_t
																																															BgL_argsz00_6674;
																																														obj_t
																																															BgL_fz00_6673;
																																														BgL_fz00_6673
																																															=
																																															BgL_arg1878z00_1883;
																																														BgL_argsz00_6674
																																															=
																																															BgL_arg1879z00_1884;
																																														BgL_argsz00_1536
																																															=
																																															BgL_argsz00_6674;
																																														BgL_fz00_1535
																																															=
																																															BgL_fz00_6673;
																																														goto
																																															BgL_tagzd2176zd2_1537;
																																													}
																																													return
																																														(
																																														(obj_t)
																																														BgL_auxz00_6672);
																																												}
																																											}
																																									}
																																								else
																																									{	/* Eval/evaluate.scm 424 */
																																										obj_t
																																											BgL_arg1881z00_1885;
																																										obj_t
																																											BgL_arg1882z00_1886;
																																										BgL_arg1881z00_1885
																																											=
																																											CAR
																																											(BgL_ez00_69);
																																										BgL_arg1882z00_1886
																																											=
																																											CDR
																																											(BgL_ez00_69);
																																										{
																																											BgL_ev_appz00_bglt
																																												BgL_auxz00_6678;
																																											{
																																												obj_t
																																													BgL_argsz00_6680;
																																												obj_t
																																													BgL_fz00_6679;
																																												BgL_fz00_6679
																																													=
																																													BgL_arg1881z00_1885;
																																												BgL_argsz00_6680
																																													=
																																													BgL_arg1882z00_1886;
																																												BgL_argsz00_1536
																																													=
																																													BgL_argsz00_6680;
																																												BgL_fz00_1535
																																													=
																																													BgL_fz00_6679;
																																												goto
																																													BgL_tagzd2176zd2_1537;
																																											}
																																											return
																																												(
																																												(obj_t)
																																												BgL_auxz00_6678);
																																										}
																																									}
																																							}
																																						else
																																							{	/* Eval/evaluate.scm 424 */
																																								obj_t
																																									BgL_cdrzd28490zd2_1887;
																																								BgL_cdrzd28490zd2_1887
																																									=
																																									CDR
																																									(BgL_ez00_69);
																																								if ((CAR(BgL_ez00_69) == BGl_symbol3332z00zz__evaluatez00))
																																									{	/* Eval/evaluate.scm 424 */
																																										if (PAIRP(BgL_cdrzd28490zd2_1887))
																																											{	/* Eval/evaluate.scm 424 */
																																												obj_t
																																													BgL_arg1886z00_1891;
																																												obj_t
																																													BgL_arg1887z00_1892;
																																												BgL_arg1886z00_1891
																																													=
																																													CAR
																																													(BgL_cdrzd28490zd2_1887);
																																												BgL_arg1887z00_1892
																																													=
																																													CDR
																																													(BgL_cdrzd28490zd2_1887);
																																												{	/* Eval/evaluate.scm 575 */
																																													BgL_ev_unwindzd2protectzd2_bglt
																																														BgL_new1154z00_4234;
																																													{	/* Eval/evaluate.scm 576 */
																																														BgL_ev_unwindzd2protectzd2_bglt
																																															BgL_new1153z00_4235;
																																														BgL_new1153z00_4235
																																															=
																																															(
																																															(BgL_ev_unwindzd2protectzd2_bglt)
																																															BOBJECT
																																															(GC_MALLOC
																																																(sizeof
																																																	(struct
																																																		BgL_ev_unwindzd2protectzd2_bgl))));
																																														{	/* Eval/evaluate.scm 576 */
																																															long
																																																BgL_arg2414z00_4236;
																																															{	/* Eval/evaluate.scm 576 */
																																																long
																																																	BgL_res3079z00_4238;
																																																BgL_res3079z00_4238
																																																	=
																																																	BGL_CLASS_INDEX
																																																	(BGl_ev_unwindzd2protectzd2zz__evaluate_typesz00);
																																																BgL_arg2414z00_4236
																																																	=
																																																	BgL_res3079z00_4238;
																																															}
																																															BGL_OBJECT_CLASS_NUM_SET
																																																(
																																																((BgL_objectz00_bglt) BgL_new1153z00_4235), BgL_arg2414z00_4236);
																																														}
																																														BgL_new1154z00_4234
																																															=
																																															BgL_new1153z00_4235;
																																													}
																																													{
																																														BgL_ev_exprz00_bglt
																																															BgL_auxz00_6694;
																																														{	/* Eval/evaluate.scm 380 */
																																															obj_t
																																																BgL_arg2431z00_4241;
																																															BgL_arg2431z00_4241
																																																=
																																																BGl_getzd2locationzd2zz__evaluatez00
																																																(BgL_arg1886z00_1891,
																																																BgL_locz00_74);
																																															BgL_auxz00_6694
																																																=
																																																(
																																																(BgL_ev_exprz00_bglt)
																																																BGl_uconvzf2locze70z15zz__evaluatez00
																																																(BgL_wherez00_73,
																																																	BgL_globalsz00_71,
																																																	BgL_localsz00_70,
																																																	BgL_arg1886z00_1891,
																																																	BgL_arg2431z00_4241));
																																														}
																																														((((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(BgL_new1154z00_4234))->BgL_ez00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_6694), BUNSPEC);
																																													}
																																													((((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(BgL_new1154z00_4234))->BgL_bodyz00) = ((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BGl_convzd2beginzd2zz__evaluatez00(BgL_arg1887z00_1892, BgL_localsz00_70, BgL_globalsz00_71, BFALSE, BgL_wherez00_73, BgL_locz00_74, ((bool_t) 0)))), BUNSPEC);
																																													return
																																														(
																																														(obj_t)
																																														BgL_new1154z00_4234);
																																												}
																																											}
																																										else
																																											{	/* Eval/evaluate.scm 424 */
																																												obj_t
																																													BgL_arg1888z00_1893;
																																												BgL_arg1888z00_1893
																																													=
																																													CAR
																																													(BgL_ez00_69);
																																												{
																																													BgL_ev_appz00_bglt
																																														BgL_auxz00_6704;
																																													{
																																														obj_t
																																															BgL_argsz00_6706;
																																														obj_t
																																															BgL_fz00_6705;
																																														BgL_fz00_6705
																																															=
																																															BgL_arg1888z00_1893;
																																														BgL_argsz00_6706
																																															=
																																															BgL_cdrzd28490zd2_1887;
																																														BgL_argsz00_1536
																																															=
																																															BgL_argsz00_6706;
																																														BgL_fz00_1535
																																															=
																																															BgL_fz00_6705;
																																														goto
																																															BgL_tagzd2176zd2_1537;
																																													}
																																													return
																																														(
																																														(obj_t)
																																														BgL_auxz00_6704);
																																												}
																																											}
																																									}
																																								else
																																									{	/* Eval/evaluate.scm 424 */
																																										if ((CAR(BgL_ez00_69) == BGl_symbol3334z00zz__evaluatez00))
																																											{	/* Eval/evaluate.scm 424 */
																																												if (PAIRP(BgL_cdrzd28490zd2_1887))
																																													{	/* Eval/evaluate.scm 424 */
																																														obj_t
																																															BgL_arg1895z00_1899;
																																														obj_t
																																															BgL_arg1896z00_1900;
																																														BgL_arg1895z00_1899
																																															=
																																															CAR
																																															(BgL_cdrzd28490zd2_1887);
																																														BgL_arg1896z00_1900
																																															=
																																															CDR
																																															(BgL_cdrzd28490zd2_1887);
																																														{	/* Eval/evaluate.scm 579 */
																																															BgL_ev_withzd2handlerzd2_bglt
																																																BgL_new1157z00_4249;
																																															{	/* Eval/evaluate.scm 580 */
																																																BgL_ev_withzd2handlerzd2_bglt
																																																	BgL_new1156z00_4250;
																																																BgL_new1156z00_4250
																																																	=
																																																	(
																																																	(BgL_ev_withzd2handlerzd2_bglt)
																																																	BOBJECT
																																																	(GC_MALLOC
																																																		(sizeof
																																																			(struct
																																																				BgL_ev_withzd2handlerzd2_bgl))));
																																																{	/* Eval/evaluate.scm 580 */
																																																	long
																																																		BgL_arg2415z00_4251;
																																																	{	/* Eval/evaluate.scm 580 */
																																																		long
																																																			BgL_res3081z00_4253;
																																																		BgL_res3081z00_4253
																																																			=
																																																			BGL_CLASS_INDEX
																																																			(BGl_ev_withzd2handlerzd2zz__evaluate_typesz00);
																																																		BgL_arg2415z00_4251
																																																			=
																																																			BgL_res3081z00_4253;
																																																	}
																																																	BGL_OBJECT_CLASS_NUM_SET
																																																		(
																																																		((BgL_objectz00_bglt) BgL_new1156z00_4250), BgL_arg2415z00_4251);
																																																}
																																																BgL_new1157z00_4249
																																																	=
																																																	BgL_new1156z00_4250;
																																															}
																																															{
																																																BgL_ev_exprz00_bglt
																																																	BgL_auxz00_6719;
																																																{	/* Eval/evaluate.scm 380 */
																																																	obj_t
																																																		BgL_arg2431z00_4256;
																																																	BgL_arg2431z00_4256
																																																		=
																																																		BGl_getzd2locationzd2zz__evaluatez00
																																																		(BgL_arg1895z00_1899,
																																																		BgL_locz00_74);
																																																	BgL_auxz00_6719
																																																		=
																																																		(
																																																		(BgL_ev_exprz00_bglt)
																																																		BGl_uconvzf2locze70z15zz__evaluatez00
																																																		(BgL_wherez00_73,
																																																			BgL_globalsz00_71,
																																																			BgL_localsz00_70,
																																																			BgL_arg1895z00_1899,
																																																			BgL_arg2431z00_4256));
																																																}
																																																((((BgL_ev_withzd2handlerzd2_bglt) COBJECT(BgL_new1157z00_4249))->BgL_handlerz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_6719), BUNSPEC);
																																															}
																																															((((BgL_ev_withzd2handlerzd2_bglt) COBJECT(BgL_new1157z00_4249))->BgL_bodyz00) = ((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BGl_convzd2beginzd2zz__evaluatez00(BgL_arg1896z00_1900, BgL_localsz00_70, BgL_globalsz00_71, BFALSE, BgL_wherez00_73, BgL_locz00_74, ((bool_t) 0)))), BUNSPEC);
																																															return
																																																(
																																																(obj_t)
																																																BgL_new1157z00_4249);
																																														}
																																													}
																																												else
																																													{	/* Eval/evaluate.scm 424 */
																																														obj_t
																																															BgL_arg1897z00_1901;
																																														obj_t
																																															BgL_arg1898z00_1902;
																																														BgL_arg1897z00_1901
																																															=
																																															CAR
																																															(BgL_ez00_69);
																																														BgL_arg1898z00_1902
																																															=
																																															CDR
																																															(BgL_ez00_69);
																																														{
																																															BgL_ev_appz00_bglt
																																																BgL_auxz00_6730;
																																															{
																																																obj_t
																																																	BgL_argsz00_6732;
																																																obj_t
																																																	BgL_fz00_6731;
																																																BgL_fz00_6731
																																																	=
																																																	BgL_arg1897z00_1901;
																																																BgL_argsz00_6732
																																																	=
																																																	BgL_arg1898z00_1902;
																																																BgL_argsz00_1536
																																																	=
																																																	BgL_argsz00_6732;
																																																BgL_fz00_1535
																																																	=
																																																	BgL_fz00_6731;
																																																goto
																																																	BgL_tagzd2176zd2_1537;
																																															}
																																															return
																																																(
																																																(obj_t)
																																																BgL_auxz00_6730);
																																														}
																																													}
																																											}
																																										else
																																											{	/* Eval/evaluate.scm 424 */
																																												obj_t
																																													BgL_cdrzd28597zd2_1903;
																																												BgL_cdrzd28597zd2_1903
																																													=
																																													CDR
																																													(BgL_ez00_69);
																																												if ((CAR(BgL_ez00_69) == BGl_symbol3336z00zz__evaluatez00))
																																													{	/* Eval/evaluate.scm 424 */
																																														if (PAIRP(BgL_cdrzd28597zd2_1903))
																																															{	/* Eval/evaluate.scm 424 */
																																																obj_t
																																																	BgL_cdrzd28602zd2_1907;
																																																BgL_cdrzd28602zd2_1907
																																																	=
																																																	CDR
																																																	(BgL_cdrzd28597zd2_1903);
																																																if (PAIRP(BgL_cdrzd28602zd2_1907))
																																																	{	/* Eval/evaluate.scm 424 */
																																																		obj_t
																																																			BgL_cdrzd28607zd2_1909;
																																																		BgL_cdrzd28607zd2_1909
																																																			=
																																																			CDR
																																																			(BgL_cdrzd28602zd2_1907);
																																																		if ((CAR(BgL_cdrzd28602zd2_1907) == BGl_keyword3338z00zz__evaluatez00))
																																																			{	/* Eval/evaluate.scm 424 */
																																																				if (PAIRP(BgL_cdrzd28607zd2_1909))
																																																					{	/* Eval/evaluate.scm 424 */
																																																						obj_t
																																																							BgL_arg1908z00_1913;
																																																						obj_t
																																																							BgL_arg1909z00_1914;
																																																						obj_t
																																																							BgL_arg1910z00_1915;
																																																						BgL_arg1908z00_1913
																																																							=
																																																							CAR
																																																							(BgL_cdrzd28597zd2_1903);
																																																						BgL_arg1909z00_1914
																																																							=
																																																							CAR
																																																							(BgL_cdrzd28607zd2_1909);
																																																						BgL_arg1910z00_1915
																																																							=
																																																							CDR
																																																							(BgL_cdrzd28607zd2_1909);
																																																						{	/* Eval/evaluate.scm 583 */
																																																							BgL_ev_synchroniza7eza7_bglt
																																																								BgL_new1159z00_4270;
																																																							{	/* Eval/evaluate.scm 584 */
																																																								BgL_ev_synchroniza7eza7_bglt
																																																									BgL_new1158z00_4271;
																																																								BgL_new1158z00_4271
																																																									=
																																																									(
																																																									(BgL_ev_synchroniza7eza7_bglt)
																																																									BOBJECT
																																																									(GC_MALLOC
																																																										(sizeof
																																																											(struct
																																																												BgL_ev_synchroniza7eza7_bgl))));
																																																								{	/* Eval/evaluate.scm 584 */
																																																									long
																																																										BgL_arg2416z00_4272;
																																																									{	/* Eval/evaluate.scm 584 */
																																																										long
																																																											BgL_res3085z00_4274;
																																																										BgL_res3085z00_4274
																																																											=
																																																											BGL_CLASS_INDEX
																																																											(BGl_ev_synchroniza7eza7zz__evaluate_typesz00);
																																																										BgL_arg2416z00_4272
																																																											=
																																																											BgL_res3085z00_4274;
																																																									}
																																																									BGL_OBJECT_CLASS_NUM_SET
																																																										(
																																																										((BgL_objectz00_bglt) BgL_new1158z00_4271), BgL_arg2416z00_4272);
																																																								}
																																																								BgL_new1159z00_4270
																																																									=
																																																									BgL_new1158z00_4271;
																																																							}
																																																							((((BgL_ev_synchroniza7eza7_bglt) COBJECT(BgL_new1159z00_4270))->BgL_locz00) = ((obj_t) BgL_locz00_74), BUNSPEC);
																																																							{
																																																								BgL_ev_exprz00_bglt
																																																									BgL_auxz00_6757;
																																																								{	/* Eval/evaluate.scm 380 */
																																																									obj_t
																																																										BgL_arg2431z00_4277;
																																																									BgL_arg2431z00_4277
																																																										=
																																																										BGl_getzd2locationzd2zz__evaluatez00
																																																										(BgL_arg1908z00_1913,
																																																										BgL_locz00_74);
																																																									BgL_auxz00_6757
																																																										=
																																																										(
																																																										(BgL_ev_exprz00_bglt)
																																																										BGl_uconvzf2locze70z15zz__evaluatez00
																																																										(BgL_wherez00_73,
																																																											BgL_globalsz00_71,
																																																											BgL_localsz00_70,
																																																											BgL_arg1908z00_1913,
																																																											BgL_arg2431z00_4277));
																																																								}
																																																								((((BgL_ev_synchroniza7eza7_bglt) COBJECT(BgL_new1159z00_4270))->BgL_mutexz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_6757), BUNSPEC);
																																																							}
																																																							{
																																																								BgL_ev_exprz00_bglt
																																																									BgL_auxz00_6762;
																																																								{	/* Eval/evaluate.scm 380 */
																																																									obj_t
																																																										BgL_arg2431z00_4278;
																																																									BgL_arg2431z00_4278
																																																										=
																																																										BGl_getzd2locationzd2zz__evaluatez00
																																																										(BgL_arg1909z00_1914,
																																																										BgL_locz00_74);
																																																									BgL_auxz00_6762
																																																										=
																																																										(
																																																										(BgL_ev_exprz00_bglt)
																																																										BGl_uconvzf2locze70z15zz__evaluatez00
																																																										(BgL_wherez00_73,
																																																											BgL_globalsz00_71,
																																																											BgL_localsz00_70,
																																																											BgL_arg1909z00_1914,
																																																											BgL_arg2431z00_4278));
																																																								}
																																																								((((BgL_ev_synchroniza7eza7_bglt) COBJECT(BgL_new1159z00_4270))->BgL_prelockz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_6762), BUNSPEC);
																																																							}
																																																							((((BgL_ev_synchroniza7eza7_bglt) COBJECT(BgL_new1159z00_4270))->BgL_bodyz00) = ((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BGl_convzd2beginzd2zz__evaluatez00(BgL_arg1910z00_1915, BgL_localsz00_70, BgL_globalsz00_71, BFALSE, BgL_wherez00_73, BgL_locz00_74, ((bool_t) 0)))), BUNSPEC);
																																																							return
																																																								(
																																																								(obj_t)
																																																								BgL_new1159z00_4270);
																																																						}
																																																					}
																																																				else
																																																					{	/* Eval/evaluate.scm 424 */
																																																						obj_t
																																																							BgL_arg1911z00_1917;
																																																						obj_t
																																																							BgL_arg1912z00_1918;
																																																						BgL_arg1911z00_1917
																																																							=
																																																							CAR
																																																							(
																																																							((obj_t) BgL_cdrzd28597zd2_1903));
																																																						BgL_arg1912z00_1918
																																																							=
																																																							CDR
																																																							(
																																																							((obj_t) BgL_cdrzd28597zd2_1903));
																																																						{
																																																							BgL_ev_synchroniza7eza7_bglt
																																																								BgL_auxz00_6775;
																																																							BgL_mz00_1528
																																																								=
																																																								BgL_arg1911z00_1917;
																																																							BgL_bodyz00_1529
																																																								=
																																																								BgL_arg1912z00_1918;
																																																						BgL_tagzd2173zd2_1530:
																																																							{	/* Eval/evaluate.scm 589 */
																																																								BgL_ev_synchroniza7eza7_bglt
																																																									BgL_new1161z00_2618;
																																																								{	/* Eval/evaluate.scm 590 */
																																																									BgL_ev_synchroniza7eza7_bglt
																																																										BgL_new1160z00_2619;
																																																									BgL_new1160z00_2619
																																																										=
																																																										(
																																																										(BgL_ev_synchroniza7eza7_bglt)
																																																										BOBJECT
																																																										(GC_MALLOC
																																																											(sizeof
																																																												(struct
																																																													BgL_ev_synchroniza7eza7_bgl))));
																																																									{	/* Eval/evaluate.scm 590 */
																																																										long
																																																											BgL_arg2418z00_2620;
																																																										{	/* Eval/evaluate.scm 590 */
																																																											long
																																																												BgL_res3003z00_3874;
																																																											BgL_res3003z00_3874
																																																												=
																																																												BGL_CLASS_INDEX
																																																												(BGl_ev_synchroniza7eza7zz__evaluate_typesz00);
																																																											BgL_arg2418z00_2620
																																																												=
																																																												BgL_res3003z00_3874;
																																																										}
																																																										BGL_OBJECT_CLASS_NUM_SET
																																																											(
																																																											((BgL_objectz00_bglt) BgL_new1160z00_2619), BgL_arg2418z00_2620);
																																																									}
																																																									BgL_new1161z00_2618
																																																										=
																																																										BgL_new1160z00_2619;
																																																								}
																																																								((((BgL_ev_synchroniza7eza7_bglt) COBJECT(BgL_new1161z00_2618))->BgL_locz00) = ((obj_t) BgL_locz00_74), BUNSPEC);
																																																								{
																																																									BgL_ev_exprz00_bglt
																																																										BgL_auxz00_6781;
																																																									{	/* Eval/evaluate.scm 380 */
																																																										obj_t
																																																											BgL_arg2431z00_3877;
																																																										{	/* Eval/evaluate.scm 144 */
																																																											obj_t
																																																												BgL__ortest_1068z00_3878;
																																																											BgL__ortest_1068z00_3878
																																																												=
																																																												BGl_getzd2sourcezd2locationz00zz__readerz00
																																																												(BgL_mz00_1528);
																																																											if (CBOOL(BgL__ortest_1068z00_3878))
																																																												{	/* Eval/evaluate.scm 144 */
																																																													BgL_arg2431z00_3877
																																																														=
																																																														BgL__ortest_1068z00_3878;
																																																												}
																																																											else
																																																												{	/* Eval/evaluate.scm 144 */
																																																													BgL_arg2431z00_3877
																																																														=
																																																														BgL_locz00_74;
																																																												}
																																																										}
																																																										BgL_auxz00_6781
																																																											=
																																																											(
																																																											(BgL_ev_exprz00_bglt)
																																																											BGl_convz00zz__evaluatez00
																																																											(BgL_mz00_1528,
																																																												BgL_localsz00_70,
																																																												BgL_globalsz00_71,
																																																												BFALSE,
																																																												BgL_wherez00_73,
																																																												BgL_arg2431z00_3877,
																																																												((bool_t) 0)));
																																																									}
																																																									((((BgL_ev_synchroniza7eza7_bglt) COBJECT(BgL_new1161z00_2618))->BgL_mutexz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_6781), BUNSPEC);
																																																								}
																																																								{
																																																									BgL_ev_exprz00_bglt
																																																										BgL_auxz00_6788;
																																																									{	/* Eval/evaluate.scm 380 */
																																																										obj_t
																																																											BgL_arg2431z00_3879;
																																																										{	/* Eval/evaluate.scm 144 */
																																																											obj_t
																																																												BgL__ortest_1068z00_3880;
																																																											BgL__ortest_1068z00_3880
																																																												=
																																																												BGl_getzd2sourcezd2locationz00zz__readerz00
																																																												(BNIL);
																																																											if (CBOOL(BgL__ortest_1068z00_3880))
																																																												{	/* Eval/evaluate.scm 144 */
																																																													BgL_arg2431z00_3879
																																																														=
																																																														BgL__ortest_1068z00_3880;
																																																												}
																																																											else
																																																												{	/* Eval/evaluate.scm 144 */
																																																													BgL_arg2431z00_3879
																																																														=
																																																														BgL_locz00_74;
																																																												}
																																																										}
																																																										BgL_auxz00_6788
																																																											=
																																																											(
																																																											(BgL_ev_exprz00_bglt)
																																																											BGl_convz00zz__evaluatez00
																																																											(BNIL,
																																																												BgL_localsz00_70,
																																																												BgL_globalsz00_71,
																																																												BFALSE,
																																																												BgL_wherez00_73,
																																																												BgL_arg2431z00_3879,
																																																												((bool_t) 0)));
																																																									}
																																																									((((BgL_ev_synchroniza7eza7_bglt) COBJECT(BgL_new1161z00_2618))->BgL_prelockz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_6788), BUNSPEC);
																																																								}
																																																								((((BgL_ev_synchroniza7eza7_bglt) COBJECT(BgL_new1161z00_2618))->BgL_bodyz00) = ((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BGl_convzd2beginzd2zz__evaluatez00(BgL_bodyz00_1529, BgL_localsz00_70, BgL_globalsz00_71, BFALSE, BgL_wherez00_73, BgL_locz00_74, ((bool_t) 0)))), BUNSPEC);
																																																								BgL_auxz00_6775
																																																									=
																																																									BgL_new1161z00_2618;
																																																							}
																																																							return
																																																								(
																																																								(obj_t)
																																																								BgL_auxz00_6775);
																																																						}
																																																					}
																																																			}
																																																		else
																																																			{	/* Eval/evaluate.scm 424 */
																																																				obj_t
																																																					BgL_arg1913z00_1920;
																																																				obj_t
																																																					BgL_arg1914z00_1921;
																																																				BgL_arg1913z00_1920
																																																					=
																																																					CAR
																																																					(
																																																					((obj_t) BgL_cdrzd28597zd2_1903));
																																																				BgL_arg1914z00_1921
																																																					=
																																																					CDR
																																																					(
																																																					((obj_t) BgL_cdrzd28597zd2_1903));
																																																				{
																																																					BgL_ev_synchroniza7eza7_bglt
																																																						BgL_auxz00_6803;
																																																					{
																																																						obj_t
																																																							BgL_bodyz00_6805;
																																																						obj_t
																																																							BgL_mz00_6804;
																																																						BgL_mz00_6804
																																																							=
																																																							BgL_arg1913z00_1920;
																																																						BgL_bodyz00_6805
																																																							=
																																																							BgL_arg1914z00_1921;
																																																						BgL_bodyz00_1529
																																																							=
																																																							BgL_bodyz00_6805;
																																																						BgL_mz00_1528
																																																							=
																																																							BgL_mz00_6804;
																																																						goto
																																																							BgL_tagzd2173zd2_1530;
																																																					}
																																																					return
																																																						(
																																																						(obj_t)
																																																						BgL_auxz00_6803);
																																																				}
																																																			}
																																																	}
																																																else
																																																	{	/* Eval/evaluate.scm 424 */
																																																		obj_t
																																																			BgL_arg1916z00_1924;
																																																		obj_t
																																																			BgL_arg1917z00_1925;
																																																		BgL_arg1916z00_1924
																																																			=
																																																			CAR
																																																			(
																																																			((obj_t) BgL_cdrzd28597zd2_1903));
																																																		BgL_arg1917z00_1925
																																																			=
																																																			CDR
																																																			(
																																																			((obj_t) BgL_cdrzd28597zd2_1903));
																																																		{
																																																			BgL_ev_synchroniza7eza7_bglt
																																																				BgL_auxz00_6811;
																																																			{
																																																				obj_t
																																																					BgL_bodyz00_6813;
																																																				obj_t
																																																					BgL_mz00_6812;
																																																				BgL_mz00_6812
																																																					=
																																																					BgL_arg1916z00_1924;
																																																				BgL_bodyz00_6813
																																																					=
																																																					BgL_arg1917z00_1925;
																																																				BgL_bodyz00_1529
																																																					=
																																																					BgL_bodyz00_6813;
																																																				BgL_mz00_1528
																																																					=
																																																					BgL_mz00_6812;
																																																				goto
																																																					BgL_tagzd2173zd2_1530;
																																																			}
																																																			return
																																																				(
																																																				(obj_t)
																																																				BgL_auxz00_6811);
																																																		}
																																																	}
																																															}
																																														else
																																															{	/* Eval/evaluate.scm 424 */
																																																obj_t
																																																	BgL_arg1918z00_1926;
																																																BgL_arg1918z00_1926
																																																	=
																																																	CAR
																																																	(BgL_ez00_69);
																																																{
																																																	BgL_ev_appz00_bglt
																																																		BgL_auxz00_6816;
																																																	{
																																																		obj_t
																																																			BgL_argsz00_6818;
																																																		obj_t
																																																			BgL_fz00_6817;
																																																		BgL_fz00_6817
																																																			=
																																																			BgL_arg1918z00_1926;
																																																		BgL_argsz00_6818
																																																			=
																																																			BgL_cdrzd28597zd2_1903;
																																																		BgL_argsz00_1536
																																																			=
																																																			BgL_argsz00_6818;
																																																		BgL_fz00_1535
																																																			=
																																																			BgL_fz00_6817;
																																																		goto
																																																			BgL_tagzd2176zd2_1537;
																																																	}
																																																	return
																																																		(
																																																		(obj_t)
																																																		BgL_auxz00_6816);
																																																}
																																															}
																																													}
																																												else
																																													{	/* Eval/evaluate.scm 424 */
																																														if ((CAR(BgL_ez00_69) == BGl_symbol3293z00zz__evaluatez00))
																																															{	/* Eval/evaluate.scm 424 */
																																																if (PAIRP(BgL_cdrzd28597zd2_1903))
																																																	{	/* Eval/evaluate.scm 424 */
																																																		obj_t
																																																			BgL_cdrzd28709zd2_1932;
																																																		BgL_cdrzd28709zd2_1932
																																																			=
																																																			CDR
																																																			(BgL_cdrzd28597zd2_1903);
																																																		if (PAIRP(BgL_cdrzd28709zd2_1932))
																																																			{	/* Eval/evaluate.scm 424 */
																																																				if (NULLP(CDR(BgL_cdrzd28709zd2_1932)))
																																																					{	/* Eval/evaluate.scm 424 */
																																																						obj_t
																																																							BgL_arg1926z00_1936;
																																																						obj_t
																																																							BgL_arg1927z00_1937;
																																																						BgL_arg1926z00_1936
																																																							=
																																																							CAR
																																																							(BgL_cdrzd28597zd2_1903);
																																																						BgL_arg1927z00_1937
																																																							=
																																																							CAR
																																																							(BgL_cdrzd28709zd2_1932);
																																																						{	/* Eval/evaluate.scm 595 */
																																																							obj_t
																																																								BgL_arg2419z00_4299;
																																																							{	/* Eval/evaluate.scm 595 */
																																																								obj_t
																																																									BgL_arg2420z00_4300;
																																																								{	/* Eval/evaluate.scm 595 */
																																																									obj_t
																																																										BgL_arg2421z00_4301;
																																																									obj_t
																																																										BgL_arg2422z00_4302;
																																																									{	/* Eval/evaluate.scm 595 */
																																																										obj_t
																																																											BgL_res3089z00_4305;
																																																										{	/* Eval/evaluate.scm 595 */
																																																											obj_t
																																																												BgL_symbolz00_4303;
																																																											BgL_symbolz00_4303
																																																												=
																																																												BGl_symbol3340z00zz__evaluatez00;
																																																											{	/* Eval/evaluate.scm 595 */
																																																												obj_t
																																																													BgL_arg2636z00_4304;
																																																												BgL_arg2636z00_4304
																																																													=
																																																													SYMBOL_TO_STRING
																																																													(BgL_symbolz00_4303);
																																																												BgL_res3089z00_4305
																																																													=
																																																													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																																													(BgL_arg2636z00_4304);
																																																											}
																																																										}
																																																										BgL_arg2421z00_4301
																																																											=
																																																											BgL_res3089z00_4305;
																																																									}
																																																									{	/* Eval/evaluate.scm 595 */
																																																										obj_t
																																																											BgL_res3090z00_4308;
																																																										{	/* Eval/evaluate.scm 595 */
																																																											obj_t
																																																												BgL_arg2636z00_4307;
																																																											BgL_arg2636z00_4307
																																																												=
																																																												SYMBOL_TO_STRING
																																																												(
																																																												((obj_t) BgL_wherez00_73));
																																																											BgL_res3090z00_4308
																																																												=
																																																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																																												(BgL_arg2636z00_4307);
																																																										}
																																																										BgL_arg2422z00_4302
																																																											=
																																																											BgL_res3090z00_4308;
																																																									}
																																																									BgL_arg2420z00_4300
																																																										=
																																																										string_append
																																																										(BgL_arg2421z00_4301,
																																																										BgL_arg2422z00_4302);
																																																								}
																																																								BgL_arg2419z00_4299
																																																									=
																																																									bstring_to_symbol
																																																									(BgL_arg2420z00_4300);
																																																							}
																																																							return
																																																								(
																																																								(obj_t)
																																																								BGl_convzd2lambdaze70z35zz__evaluatez00
																																																								(BgL_globalsz00_71,
																																																									BgL_localsz00_70,
																																																									BgL_ez00_69,
																																																									BgL_locz00_74,
																																																									BgL_arg1926z00_1936,
																																																									BgL_arg1927z00_1937,
																																																									BgL_arg2419z00_4299,
																																																									BFALSE));
																																																						}
																																																					}
																																																				else
																																																					{	/* Eval/evaluate.scm 424 */
																																																						obj_t
																																																							BgL_arg1928z00_1938;
																																																						obj_t
																																																							BgL_arg1929z00_1939;
																																																						BgL_arg1928z00_1938
																																																							=
																																																							CAR
																																																							(BgL_ez00_69);
																																																						BgL_arg1929z00_1939
																																																							=
																																																							CDR
																																																							(BgL_ez00_69);
																																																						{
																																																							BgL_ev_appz00_bglt
																																																								BgL_auxz00_6844;
																																																							{
																																																								obj_t
																																																									BgL_argsz00_6846;
																																																								obj_t
																																																									BgL_fz00_6845;
																																																								BgL_fz00_6845
																																																									=
																																																									BgL_arg1928z00_1938;
																																																								BgL_argsz00_6846
																																																									=
																																																									BgL_arg1929z00_1939;
																																																								BgL_argsz00_1536
																																																									=
																																																									BgL_argsz00_6846;
																																																								BgL_fz00_1535
																																																									=
																																																									BgL_fz00_6845;
																																																								goto
																																																									BgL_tagzd2176zd2_1537;
																																																							}
																																																							return
																																																								(
																																																								(obj_t)
																																																								BgL_auxz00_6844);
																																																						}
																																																					}
																																																			}
																																																		else
																																																			{	/* Eval/evaluate.scm 424 */
																																																				obj_t
																																																					BgL_arg1931z00_1941;
																																																				obj_t
																																																					BgL_arg1932z00_1942;
																																																				BgL_arg1931z00_1941
																																																					=
																																																					CAR
																																																					(BgL_ez00_69);
																																																				BgL_arg1932z00_1942
																																																					=
																																																					CDR
																																																					(BgL_ez00_69);
																																																				{
																																																					BgL_ev_appz00_bglt
																																																						BgL_auxz00_6850;
																																																					{
																																																						obj_t
																																																							BgL_argsz00_6852;
																																																						obj_t
																																																							BgL_fz00_6851;
																																																						BgL_fz00_6851
																																																							=
																																																							BgL_arg1931z00_1941;
																																																						BgL_argsz00_6852
																																																							=
																																																							BgL_arg1932z00_1942;
																																																						BgL_argsz00_1536
																																																							=
																																																							BgL_argsz00_6852;
																																																						BgL_fz00_1535
																																																							=
																																																							BgL_fz00_6851;
																																																						goto
																																																							BgL_tagzd2176zd2_1537;
																																																					}
																																																					return
																																																						(
																																																						(obj_t)
																																																						BgL_auxz00_6850);
																																																				}
																																																			}
																																																	}
																																																else
																																																	{	/* Eval/evaluate.scm 424 */
																																																		obj_t
																																																			BgL_arg1933z00_1943;
																																																		obj_t
																																																			BgL_arg1934z00_1944;
																																																		BgL_arg1933z00_1943
																																																			=
																																																			CAR
																																																			(BgL_ez00_69);
																																																		BgL_arg1934z00_1944
																																																			=
																																																			CDR
																																																			(BgL_ez00_69);
																																																		{
																																																			BgL_ev_appz00_bglt
																																																				BgL_auxz00_6856;
																																																			{
																																																				obj_t
																																																					BgL_argsz00_6858;
																																																				obj_t
																																																					BgL_fz00_6857;
																																																				BgL_fz00_6857
																																																					=
																																																					BgL_arg1933z00_1943;
																																																				BgL_argsz00_6858
																																																					=
																																																					BgL_arg1934z00_1944;
																																																				BgL_argsz00_1536
																																																					=
																																																					BgL_argsz00_6858;
																																																				BgL_fz00_1535
																																																					=
																																																					BgL_fz00_6857;
																																																				goto
																																																					BgL_tagzd2176zd2_1537;
																																																			}
																																																			return
																																																				(
																																																				(obj_t)
																																																				BgL_auxz00_6856);
																																																		}
																																																	}
																																															}
																																														else
																																															{	/* Eval/evaluate.scm 424 */
																																																if ((CAR(BgL_ez00_69) == BGl_symbol3342z00zz__evaluatez00))
																																																	{	/* Eval/evaluate.scm 424 */
																																																		return
																																																			BGl_errorz00zz__errorz00
																																																			(BGl_string3344z00zz__evaluatez00,
																																																			BGl_string3345z00zz__evaluatez00,
																																																			BgL_ez00_69);
																																																	}
																																																else
																																																	{	/* Eval/evaluate.scm 424 */
																																																		obj_t
																																																			BgL_arg1937z00_1947;
																																																		obj_t
																																																			BgL_arg1938z00_1948;
																																																		BgL_arg1937z00_1947
																																																			=
																																																			CAR
																																																			(BgL_ez00_69);
																																																		BgL_arg1938z00_1948
																																																			=
																																																			CDR
																																																			(BgL_ez00_69);
																																																		{
																																																			BgL_ev_appz00_bglt
																																																				BgL_auxz00_6866;
																																																			{
																																																				obj_t
																																																					BgL_argsz00_6868;
																																																				obj_t
																																																					BgL_fz00_6867;
																																																				BgL_fz00_6867
																																																					=
																																																					BgL_arg1937z00_1947;
																																																				BgL_argsz00_6868
																																																					=
																																																					BgL_arg1938z00_1948;
																																																				BgL_argsz00_1536
																																																					=
																																																					BgL_argsz00_6868;
																																																				BgL_fz00_1535
																																																					=
																																																					BgL_fz00_6867;
																																																				goto
																																																					BgL_tagzd2176zd2_1537;
																																																			}
																																																			return
																																																				(
																																																				(obj_t)
																																																				BgL_auxz00_6866);
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
													}
												else
													{	/* Eval/evaluate.scm 424 */
														if (
															(BgL_carzd23841zd2_1610 ==
																BGl_symbol3316z00zz__evaluatez00))
															{	/* Eval/evaluate.scm 424 */
																if (PAIRP(BgL_cdrzd2250zd2_1544))
																	{	/* Eval/evaluate.scm 424 */
																		if (NULLP(CDR(BgL_cdrzd2250zd2_1544)))
																			{	/* Eval/evaluate.scm 424 */
																				obj_t BgL_arg1962z00_1973;

																				BgL_arg1962z00_1973 =
																					CAR(BgL_cdrzd2250zd2_1544);
																				{	/* Eval/evaluate.scm 456 */
																					BgL_ev_trapz00_bglt
																						BgL_new1111z00_4326;
																					{	/* Eval/evaluate.scm 457 */
																						BgL_ev_trapz00_bglt
																							BgL_new1110z00_4327;
																						BgL_new1110z00_4327 =
																							((BgL_ev_trapz00_bglt)
																							BOBJECT(GC_MALLOC(sizeof(struct
																										BgL_ev_trapz00_bgl))));
																						{	/* Eval/evaluate.scm 457 */
																							long BgL_arg2290z00_4328;

																							{	/* Eval/evaluate.scm 457 */
																								long BgL_res3094z00_4330;

																								BgL_res3094z00_4330 =
																									BGL_CLASS_INDEX
																									(BGl_ev_trapz00zz__evaluate_typesz00);
																								BgL_arg2290z00_4328 =
																									BgL_res3094z00_4330;
																							}
																							BGL_OBJECT_CLASS_NUM_SET(
																								((BgL_objectz00_bglt)
																									BgL_new1110z00_4327),
																								BgL_arg2290z00_4328);
																						}
																						BgL_new1111z00_4326 =
																							BgL_new1110z00_4327;
																					}
																					{
																						BgL_ev_exprz00_bglt BgL_auxz00_6882;

																						{	/* Eval/evaluate.scm 380 */
																							obj_t BgL_arg2431z00_4333;

																							BgL_arg2431z00_4333 =
																								BGl_getzd2locationzd2zz__evaluatez00
																								(BgL_arg1962z00_1973,
																								BgL_locz00_74);
																							BgL_auxz00_6882 =
																								((BgL_ev_exprz00_bglt)
																								BGl_uconvzf2locze70z15zz__evaluatez00
																								(BgL_wherez00_73,
																									BgL_globalsz00_71,
																									BgL_localsz00_70,
																									BgL_arg1962z00_1973,
																									BgL_arg2431z00_4333));
																						}
																						((((BgL_ev_hookz00_bglt) COBJECT(
																										((BgL_ev_hookz00_bglt)
																											BgL_new1111z00_4326)))->
																								BgL_ez00) =
																							((BgL_ev_exprz00_bglt)
																								BgL_auxz00_6882), BUNSPEC);
																					}
																					return ((obj_t) BgL_new1111z00_4326);
																				}
																			}
																		else
																			{	/* Eval/evaluate.scm 424 */
																				obj_t BgL_arg1963z00_1974;
																				obj_t BgL_arg1964z00_1975;

																				BgL_arg1963z00_1974 = CAR(BgL_ez00_69);
																				BgL_arg1964z00_1975 = CDR(BgL_ez00_69);
																				{
																					BgL_ev_appz00_bglt BgL_auxz00_6891;

																					{
																						obj_t BgL_argsz00_6893;
																						obj_t BgL_fz00_6892;

																						BgL_fz00_6892 = BgL_arg1963z00_1974;
																						BgL_argsz00_6893 =
																							BgL_arg1964z00_1975;
																						BgL_argsz00_1536 = BgL_argsz00_6893;
																						BgL_fz00_1535 = BgL_fz00_6892;
																						goto BgL_tagzd2176zd2_1537;
																					}
																					return ((obj_t) BgL_auxz00_6891);
																				}
																			}
																	}
																else
																	{	/* Eval/evaluate.scm 424 */
																		obj_t BgL_arg1966z00_1977;
																		obj_t BgL_arg1967z00_1978;

																		BgL_arg1966z00_1977 = CAR(BgL_ez00_69);
																		BgL_arg1967z00_1978 = CDR(BgL_ez00_69);
																		{
																			BgL_ev_appz00_bglt BgL_auxz00_6897;

																			{
																				obj_t BgL_argsz00_6899;
																				obj_t BgL_fz00_6898;

																				BgL_fz00_6898 = BgL_arg1966z00_1977;
																				BgL_argsz00_6899 = BgL_arg1967z00_1978;
																				BgL_argsz00_1536 = BgL_argsz00_6899;
																				BgL_fz00_1535 = BgL_fz00_6898;
																				goto BgL_tagzd2176zd2_1537;
																			}
																			return ((obj_t) BgL_auxz00_6897);
																		}
																	}
															}
														else
															{	/* Eval/evaluate.scm 424 */
																obj_t BgL_cdrzd29422zd2_1979;

																BgL_cdrzd29422zd2_1979 = CDR(BgL_ez00_69);
																if (
																	(CAR(BgL_ez00_69) ==
																		BGl_symbol3281z00zz__evaluatez00))
																	{	/* Eval/evaluate.scm 424 */
																		if (PAIRP(BgL_cdrzd29422zd2_1979))
																			{	/* Eval/evaluate.scm 424 */
																				if (NULLP(CDR(BgL_cdrzd29422zd2_1979)))
																					{	/* Eval/evaluate.scm 424 */
																						obj_t BgL_arg1973z00_1985;

																						BgL_arg1973z00_1985 =
																							CAR(BgL_cdrzd29422zd2_1979);
																						{	/* Eval/evaluate.scm 459 */
																							BgL_ev_littz00_bglt
																								BgL_new1113z00_4344;
																							{	/* Eval/evaluate.scm 460 */
																								BgL_ev_littz00_bglt
																									BgL_new1112z00_4345;
																								BgL_new1112z00_4345 =
																									((BgL_ev_littz00_bglt)
																									BOBJECT(GC_MALLOC(sizeof
																											(struct
																												BgL_ev_littz00_bgl))));
																								{	/* Eval/evaluate.scm 460 */
																									long BgL_arg2291z00_4346;

																									{	/* Eval/evaluate.scm 460 */
																										long BgL_res3097z00_4348;

																										BgL_res3097z00_4348 =
																											BGL_CLASS_INDEX
																											(BGl_ev_littz00zz__evaluate_typesz00);
																										BgL_arg2291z00_4346 =
																											BgL_res3097z00_4348;
																									}
																									BGL_OBJECT_CLASS_NUM_SET(
																										((BgL_objectz00_bglt)
																											BgL_new1112z00_4345),
																										BgL_arg2291z00_4346);
																								}
																								BgL_new1113z00_4344 =
																									BgL_new1112z00_4345;
																							}
																							((((BgL_ev_littz00_bglt)
																										COBJECT
																										(BgL_new1113z00_4344))->
																									BgL_valuez00) =
																								((obj_t) BgL_arg1973z00_1985),
																								BUNSPEC);
																							return ((obj_t)
																								BgL_new1113z00_4344);
																						}
																					}
																				else
																					{	/* Eval/evaluate.scm 424 */
																						obj_t BgL_arg1974z00_1986;

																						BgL_arg1974z00_1986 =
																							CAR(BgL_ez00_69);
																						{
																							BgL_ev_appz00_bglt
																								BgL_auxz00_6918;
																							{
																								obj_t BgL_argsz00_6920;
																								obj_t BgL_fz00_6919;

																								BgL_fz00_6919 =
																									BgL_arg1974z00_1986;
																								BgL_argsz00_6920 =
																									BgL_cdrzd29422zd2_1979;
																								BgL_argsz00_1536 =
																									BgL_argsz00_6920;
																								BgL_fz00_1535 = BgL_fz00_6919;
																								goto BgL_tagzd2176zd2_1537;
																							}
																							return ((obj_t) BgL_auxz00_6918);
																						}
																					}
																			}
																		else
																			{	/* Eval/evaluate.scm 424 */
																				obj_t BgL_arg1977z00_1989;

																				BgL_arg1977z00_1989 = CAR(BgL_ez00_69);
																				{
																					BgL_ev_appz00_bglt BgL_auxz00_6923;

																					{
																						obj_t BgL_argsz00_6925;
																						obj_t BgL_fz00_6924;

																						BgL_fz00_6924 = BgL_arg1977z00_1989;
																						BgL_argsz00_6925 =
																							BgL_cdrzd29422zd2_1979;
																						BgL_argsz00_1536 = BgL_argsz00_6925;
																						BgL_fz00_1535 = BgL_fz00_6924;
																						goto BgL_tagzd2176zd2_1537;
																					}
																					return ((obj_t) BgL_auxz00_6923);
																				}
																			}
																	}
																else
																	{	/* Eval/evaluate.scm 424 */
																		if (
																			(CAR(BgL_ez00_69) ==
																				BGl_symbol3289z00zz__evaluatez00))
																			{	/* Eval/evaluate.scm 424 */
																				if (PAIRP(BgL_cdrzd29422zd2_1979))
																					{	/* Eval/evaluate.scm 424 */
																						obj_t BgL_cdrzd210036zd2_1995;

																						BgL_cdrzd210036zd2_1995 =
																							CDR(BgL_cdrzd29422zd2_1979);
																						if (PAIRP(BgL_cdrzd210036zd2_1995))
																							{	/* Eval/evaluate.scm 424 */
																								obj_t BgL_cdrzd210041zd2_1997;

																								BgL_cdrzd210041zd2_1997 =
																									CDR(BgL_cdrzd210036zd2_1995);
																								if (PAIRP
																									(BgL_cdrzd210041zd2_1997))
																									{	/* Eval/evaluate.scm 424 */
																										if (NULLP(CDR
																												(BgL_cdrzd210041zd2_1997)))
																											{	/* Eval/evaluate.scm 424 */
																												obj_t
																													BgL_arg1987z00_2001;
																												obj_t
																													BgL_arg1988z00_2002;
																												obj_t
																													BgL_arg1989z00_2003;
																												BgL_arg1987z00_2001 =
																													CAR
																													(BgL_cdrzd29422zd2_1979);
																												BgL_arg1988z00_2002 =
																													CAR
																													(BgL_cdrzd210036zd2_1995);
																												BgL_arg1989z00_2003 =
																													CAR
																													(BgL_cdrzd210041zd2_1997);
																												{
																													BgL_ev_ifz00_bglt
																														BgL_auxz00_6944;
																													{
																														obj_t BgL_oz00_6947;
																														obj_t BgL_tz00_6946;
																														obj_t BgL_pz00_6945;

																														BgL_pz00_6945 =
																															BgL_arg1987z00_2001;
																														BgL_tz00_6946 =
																															BgL_arg1988z00_2002;
																														BgL_oz00_6947 =
																															BgL_arg1989z00_2003;
																														BgL_oz00_1477 =
																															BgL_oz00_6947;
																														BgL_tz00_1476 =
																															BgL_tz00_6946;
																														BgL_pz00_1475 =
																															BgL_pz00_6945;
																														goto
																															BgL_tagzd2155zd2_1478;
																													}
																													return
																														((obj_t)
																														BgL_auxz00_6944);
																												}
																											}
																										else
																											{	/* Eval/evaluate.scm 424 */
																												obj_t
																													BgL_arg1990z00_2004;
																												obj_t
																													BgL_arg1991z00_2005;
																												BgL_arg1990z00_2004 =
																													CAR(BgL_ez00_69);
																												BgL_arg1991z00_2005 =
																													CDR(BgL_ez00_69);
																												{
																													BgL_ev_appz00_bglt
																														BgL_auxz00_6951;
																													{
																														obj_t
																															BgL_argsz00_6953;
																														obj_t BgL_fz00_6952;

																														BgL_fz00_6952 =
																															BgL_arg1990z00_2004;
																														BgL_argsz00_6953 =
																															BgL_arg1991z00_2005;
																														BgL_argsz00_1536 =
																															BgL_argsz00_6953;
																														BgL_fz00_1535 =
																															BgL_fz00_6952;
																														goto
																															BgL_tagzd2176zd2_1537;
																													}
																													return
																														((obj_t)
																														BgL_auxz00_6951);
																												}
																											}
																									}
																								else
																									{	/* Eval/evaluate.scm 424 */
																										obj_t
																											BgL_cdrzd210341zd2_2007;
																										BgL_cdrzd210341zd2_2007 =
																											CDR(BgL_ez00_69);
																										{	/* Eval/evaluate.scm 424 */
																											obj_t
																												BgL_cdrzd210347zd2_2008;
																											BgL_cdrzd210347zd2_2008 =
																												CDR(((obj_t)
																													BgL_cdrzd210341zd2_2007));
																											if (NULLP(CDR(((obj_t)
																															BgL_cdrzd210347zd2_2008))))
																												{	/* Eval/evaluate.scm 424 */
																													obj_t
																														BgL_arg1995z00_2011;
																													obj_t
																														BgL_arg1996z00_2012;
																													BgL_arg1995z00_2011 =
																														CAR(((obj_t)
																															BgL_cdrzd210341zd2_2007));
																													BgL_arg1996z00_2012 =
																														CAR(((obj_t)
																															BgL_cdrzd210347zd2_2008));
																													{
																														BgL_ev_ifz00_bglt
																															BgL_auxz00_6966;
																														{
																															obj_t
																																BgL_tz00_6968;
																															obj_t
																																BgL_pz00_6967;
																															BgL_pz00_6967 =
																																BgL_arg1995z00_2011;
																															BgL_tz00_6968 =
																																BgL_arg1996z00_2012;
																															BgL_tz00_1480 =
																																BgL_tz00_6968;
																															BgL_pz00_1479 =
																																BgL_pz00_6967;
																															goto
																																BgL_tagzd2156zd2_1481;
																														}
																														return
																															((obj_t)
																															BgL_auxz00_6966);
																													}
																												}
																											else
																												{	/* Eval/evaluate.scm 424 */
																													obj_t
																														BgL_arg1997z00_2013;
																													BgL_arg1997z00_2013 =
																														CAR(BgL_ez00_69);
																													{
																														BgL_ev_appz00_bglt
																															BgL_auxz00_6971;
																														{
																															obj_t
																																BgL_argsz00_6973;
																															obj_t
																																BgL_fz00_6972;
																															BgL_fz00_6972 =
																																BgL_arg1997z00_2013;
																															BgL_argsz00_6973 =
																																BgL_cdrzd210341zd2_2007;
																															BgL_argsz00_1536 =
																																BgL_argsz00_6973;
																															BgL_fz00_1535 =
																																BgL_fz00_6972;
																															goto
																																BgL_tagzd2176zd2_1537;
																														}
																														return
																															((obj_t)
																															BgL_auxz00_6971);
																													}
																												}
																										}
																									}
																							}
																						else
																							{	/* Eval/evaluate.scm 424 */
																								obj_t BgL_arg2000z00_2016;
																								obj_t BgL_arg2001z00_2017;

																								BgL_arg2000z00_2016 =
																									CAR(BgL_ez00_69);
																								BgL_arg2001z00_2017 =
																									CDR(BgL_ez00_69);
																								{
																									BgL_ev_appz00_bglt
																										BgL_auxz00_6977;
																									{
																										obj_t BgL_argsz00_6979;
																										obj_t BgL_fz00_6978;

																										BgL_fz00_6978 =
																											BgL_arg2000z00_2016;
																										BgL_argsz00_6979 =
																											BgL_arg2001z00_2017;
																										BgL_argsz00_1536 =
																											BgL_argsz00_6979;
																										BgL_fz00_1535 =
																											BgL_fz00_6978;
																										goto BgL_tagzd2176zd2_1537;
																									}
																									return
																										((obj_t) BgL_auxz00_6977);
																								}
																							}
																					}
																				else
																					{	/* Eval/evaluate.scm 424 */
																						obj_t BgL_arg2002z00_2018;
																						obj_t BgL_arg2003z00_2019;

																						BgL_arg2002z00_2018 =
																							CAR(BgL_ez00_69);
																						BgL_arg2003z00_2019 =
																							CDR(BgL_ez00_69);
																						{
																							BgL_ev_appz00_bglt
																								BgL_auxz00_6983;
																							{
																								obj_t BgL_argsz00_6985;
																								obj_t BgL_fz00_6984;

																								BgL_fz00_6984 =
																									BgL_arg2002z00_2018;
																								BgL_argsz00_6985 =
																									BgL_arg2003z00_2019;
																								BgL_argsz00_1536 =
																									BgL_argsz00_6985;
																								BgL_fz00_1535 = BgL_fz00_6984;
																								goto BgL_tagzd2176zd2_1537;
																							}
																							return ((obj_t) BgL_auxz00_6983);
																						}
																					}
																			}
																		else
																			{	/* Eval/evaluate.scm 424 */
																				if (
																					(CAR(BgL_ez00_69) ==
																						BGl_symbol3318z00zz__evaluatez00))
																					{	/* Eval/evaluate.scm 424 */
																						obj_t BgL_arg2007z00_2022;

																						BgL_arg2007z00_2022 =
																							CDR(BgL_ez00_69);
																						{	/* Eval/evaluate.scm 472 */
																							BgL_ev_orz00_bglt
																								BgL_new1120z00_4383;
																							{	/* Eval/evaluate.scm 473 */
																								BgL_ev_orz00_bglt
																									BgL_new1119z00_4384;
																								BgL_new1119z00_4384 =
																									((BgL_ev_orz00_bglt)
																									BOBJECT(GC_MALLOC(sizeof
																											(struct
																												BgL_ev_orz00_bgl))));
																								{	/* Eval/evaluate.scm 473 */
																									long BgL_arg2302z00_4385;

																									{	/* Eval/evaluate.scm 473 */
																										long BgL_res3103z00_4387;

																										BgL_res3103z00_4387 =
																											BGL_CLASS_INDEX
																											(BGl_ev_orz00zz__evaluate_typesz00);
																										BgL_arg2302z00_4385 =
																											BgL_res3103z00_4387;
																									}
																									BGL_OBJECT_CLASS_NUM_SET(
																										((BgL_objectz00_bglt)
																											BgL_new1119z00_4384),
																										BgL_arg2302z00_4385);
																								}
																								BgL_new1120z00_4383 =
																									BgL_new1119z00_4384;
																							}
																							((((BgL_ev_listz00_bglt) COBJECT(
																											((BgL_ev_listz00_bglt)
																												BgL_new1120z00_4383)))->
																									BgL_argsz00) =
																								((obj_t)
																									BGl_loopze70ze7zz__evaluatez00
																									(BgL_wherez00_73,
																										BgL_globalsz00_71,
																										BgL_localsz00_70,
																										BgL_locz00_74,
																										BgL_arg2007z00_2022)),
																								BUNSPEC);
																							return ((obj_t)
																								BgL_new1120z00_4383);
																						}
																					}
																				else
																					{	/* Eval/evaluate.scm 424 */
																						if (
																							(CAR(BgL_ez00_69) ==
																								BGl_symbol3320z00zz__evaluatez00))
																							{	/* Eval/evaluate.scm 424 */
																								obj_t BgL_arg2010z00_2025;

																								BgL_arg2010z00_2025 =
																									CDR(BgL_ez00_69);
																								{	/* Eval/evaluate.scm 475 */
																									BgL_ev_andz00_bglt
																										BgL_new1122z00_4392;
																									{	/* Eval/evaluate.scm 476 */
																										BgL_ev_andz00_bglt
																											BgL_new1121z00_4393;
																										BgL_new1121z00_4393 =
																											((BgL_ev_andz00_bglt)
																											BOBJECT(GC_MALLOC(sizeof
																													(struct
																														BgL_ev_andz00_bgl))));
																										{	/* Eval/evaluate.scm 476 */
																											long BgL_arg2303z00_4394;

																											{	/* Eval/evaluate.scm 476 */
																												long
																													BgL_res3104z00_4396;
																												BgL_res3104z00_4396 =
																													BGL_CLASS_INDEX
																													(BGl_ev_andz00zz__evaluate_typesz00);
																												BgL_arg2303z00_4394 =
																													BgL_res3104z00_4396;
																											}
																											BGL_OBJECT_CLASS_NUM_SET(
																												((BgL_objectz00_bglt)
																													BgL_new1121z00_4393),
																												BgL_arg2303z00_4394);
																										}
																										BgL_new1122z00_4392 =
																											BgL_new1121z00_4393;
																									}
																									((((BgL_ev_listz00_bglt)
																												COBJECT((
																														(BgL_ev_listz00_bglt)
																														BgL_new1122z00_4392)))->
																											BgL_argsz00) =
																										((obj_t)
																											BGl_loopze70ze7zz__evaluatez00
																											(BgL_wherez00_73,
																												BgL_globalsz00_71,
																												BgL_localsz00_70,
																												BgL_locz00_74,
																												BgL_arg2010z00_2025)),
																										BUNSPEC);
																									return ((obj_t)
																										BgL_new1122z00_4392);
																								}
																							}
																						else
																							{	/* Eval/evaluate.scm 424 */
																								if (
																									(CAR(BgL_ez00_69) ==
																										BGl_symbol3305z00zz__evaluatez00))
																									{	/* Eval/evaluate.scm 424 */
																										return
																											BGl_convzd2beginzd2zz__evaluatez00
																											(CDR(BgL_ez00_69),
																											BgL_localsz00_70,
																											BgL_globalsz00_71,
																											BgL_tailzf3zf3_72,
																											BgL_wherez00_73,
																											BgL_locz00_74,
																											BgL_topzf3zf3_75);
																									}
																								else
																									{	/* Eval/evaluate.scm 424 */
																										obj_t
																											BgL_cdrzd211246zd2_2029;
																										BgL_cdrzd211246zd2_2029 =
																											CDR(BgL_ez00_69);
																										if ((CAR(BgL_ez00_69) ==
																												BGl_symbol3291z00zz__evaluatez00))
																											{	/* Eval/evaluate.scm 424 */
																												if (PAIRP
																													(BgL_cdrzd211246zd2_2029))
																													{	/* Eval/evaluate.scm 424 */
																														obj_t
																															BgL_arg2017z00_2033;
																														obj_t
																															BgL_arg2018z00_2034;
																														BgL_arg2017z00_2033
																															=
																															CAR
																															(BgL_cdrzd211246zd2_2029);
																														BgL_arg2018z00_2034
																															=
																															CDR
																															(BgL_cdrzd211246zd2_2029);
																														{
																															BgL_ev_letz00_bglt
																																BgL_auxz00_7024;
																															{
																																obj_t
																																	BgL_bodyz00_7026;
																																obj_t
																																	BgL_bindsz00_7025;
																																BgL_bindsz00_7025
																																	=
																																	BgL_arg2017z00_2033;
																																BgL_bodyz00_7026
																																	=
																																	BgL_arg2018z00_2034;
																																BgL_bodyz00_1489
																																	=
																																	BgL_bodyz00_7026;
																																BgL_bindsz00_1488
																																	=
																																	BgL_bindsz00_7025;
																																goto
																																	BgL_tagzd2160zd2_1490;
																															}
																															return
																																((obj_t)
																																BgL_auxz00_7024);
																														}
																													}
																												else
																													{	/* Eval/evaluate.scm 424 */
																														obj_t
																															BgL_arg2020z00_2035;
																														BgL_arg2020z00_2035
																															=
																															CAR(BgL_ez00_69);
																														{
																															BgL_ev_appz00_bglt
																																BgL_auxz00_7029;
																															{
																																obj_t
																																	BgL_argsz00_7031;
																																obj_t
																																	BgL_fz00_7030;
																																BgL_fz00_7030 =
																																	BgL_arg2020z00_2035;
																																BgL_argsz00_7031
																																	=
																																	BgL_cdrzd211246zd2_2029;
																																BgL_argsz00_1536
																																	=
																																	BgL_argsz00_7031;
																																BgL_fz00_1535 =
																																	BgL_fz00_7030;
																																goto
																																	BgL_tagzd2176zd2_1537;
																															}
																															return
																																((obj_t)
																																BgL_auxz00_7029);
																														}
																													}
																											}
																										else
																											{	/* Eval/evaluate.scm 424 */
																												if (
																													(CAR(BgL_ez00_69) ==
																														BGl_symbol3322z00zz__evaluatez00))
																													{	/* Eval/evaluate.scm 424 */
																														if (PAIRP
																															(BgL_cdrzd211246zd2_2029))
																															{	/* Eval/evaluate.scm 424 */
																																obj_t
																																	BgL_arg2026z00_2041;
																																obj_t
																																	BgL_arg2028z00_2042;
																																BgL_arg2026z00_2041
																																	=
																																	CAR
																																	(BgL_cdrzd211246zd2_2029);
																																BgL_arg2028z00_2042
																																	=
																																	CDR
																																	(BgL_cdrzd211246zd2_2029);
																																{
																																	BgL_ev_letza2za2_bglt
																																		BgL_auxz00_7040;
																																	{
																																		obj_t
																																			BgL_bodyz00_7042;
																																		obj_t
																																			BgL_bindsz00_7041;
																																		BgL_bindsz00_7041
																																			=
																																			BgL_arg2026z00_2041;
																																		BgL_bodyz00_7042
																																			=
																																			BgL_arg2028z00_2042;
																																		BgL_bodyz00_1492
																																			=
																																			BgL_bodyz00_7042;
																																		BgL_bindsz00_1491
																																			=
																																			BgL_bindsz00_7041;
																																		goto
																																			BgL_tagzd2161zd2_1493;
																																	}
																																	return
																																		((obj_t)
																																		BgL_auxz00_7040);
																																}
																															}
																														else
																															{	/* Eval/evaluate.scm 424 */
																																obj_t
																																	BgL_arg2029z00_2043;
																																obj_t
																																	BgL_arg2031z00_2044;
																																BgL_arg2029z00_2043
																																	=
																																	CAR
																																	(BgL_ez00_69);
																																BgL_arg2031z00_2044
																																	=
																																	CDR
																																	(BgL_ez00_69);
																																{
																																	BgL_ev_appz00_bglt
																																		BgL_auxz00_7046;
																																	{
																																		obj_t
																																			BgL_argsz00_7048;
																																		obj_t
																																			BgL_fz00_7047;
																																		BgL_fz00_7047
																																			=
																																			BgL_arg2029z00_2043;
																																		BgL_argsz00_7048
																																			=
																																			BgL_arg2031z00_2044;
																																		BgL_argsz00_1536
																																			=
																																			BgL_argsz00_7048;
																																		BgL_fz00_1535
																																			=
																																			BgL_fz00_7047;
																																		goto
																																			BgL_tagzd2176zd2_1537;
																																	}
																																	return
																																		((obj_t)
																																		BgL_auxz00_7046);
																																}
																															}
																													}
																												else
																													{	/* Eval/evaluate.scm 424 */
																														obj_t
																															BgL_cdrzd211644zd2_2045;
																														BgL_cdrzd211644zd2_2045
																															=
																															CDR(BgL_ez00_69);
																														if ((CAR
																																(BgL_ez00_69) ==
																																BGl_symbol3324z00zz__evaluatez00))
																															{	/* Eval/evaluate.scm 424 */
																																if (PAIRP
																																	(BgL_cdrzd211644zd2_2045))
																																	{	/* Eval/evaluate.scm 424 */
																																		obj_t
																																			BgL_arg2036z00_2049;
																																		obj_t
																																			BgL_arg2037z00_2050;
																																		BgL_arg2036z00_2049
																																			=
																																			CAR
																																			(BgL_cdrzd211644zd2_2045);
																																		BgL_arg2037z00_2050
																																			=
																																			CDR
																																			(BgL_cdrzd211644zd2_2045);
																																		{
																																			BgL_ev_letrecz00_bglt
																																				BgL_auxz00_7058;
																																			{
																																				obj_t
																																					BgL_bodyz00_7060;
																																				obj_t
																																					BgL_bindsz00_7059;
																																				BgL_bindsz00_7059
																																					=
																																					BgL_arg2036z00_2049;
																																				BgL_bodyz00_7060
																																					=
																																					BgL_arg2037z00_2050;
																																				BgL_bodyz00_1495
																																					=
																																					BgL_bodyz00_7060;
																																				BgL_bindsz00_1494
																																					=
																																					BgL_bindsz00_7059;
																																				goto
																																					BgL_tagzd2162zd2_1496;
																																			}
																																			return
																																				((obj_t)
																																				BgL_auxz00_7058);
																																		}
																																	}
																																else
																																	{	/* Eval/evaluate.scm 424 */
																																		obj_t
																																			BgL_arg2038z00_2051;
																																		BgL_arg2038z00_2051
																																			=
																																			CAR
																																			(BgL_ez00_69);
																																		{
																																			BgL_ev_appz00_bglt
																																				BgL_auxz00_7063;
																																			{
																																				obj_t
																																					BgL_argsz00_7065;
																																				obj_t
																																					BgL_fz00_7064;
																																				BgL_fz00_7064
																																					=
																																					BgL_arg2038z00_2051;
																																				BgL_argsz00_7065
																																					=
																																					BgL_cdrzd211644zd2_2045;
																																				BgL_argsz00_1536
																																					=
																																					BgL_argsz00_7065;
																																				BgL_fz00_1535
																																					=
																																					BgL_fz00_7064;
																																				goto
																																					BgL_tagzd2176zd2_1537;
																																			}
																																			return
																																				((obj_t)
																																				BgL_auxz00_7063);
																																		}
																																	}
																															}
																														else
																															{	/* Eval/evaluate.scm 424 */
																																if (
																																	(CAR
																																		(BgL_ez00_69)
																																		==
																																		BGl_symbol3326z00zz__evaluatez00))
																																	{	/* Eval/evaluate.scm 424 */
																																		if (PAIRP
																																			(BgL_cdrzd211644zd2_2045))
																																			{	/* Eval/evaluate.scm 424 */
																																				obj_t
																																					BgL_carzd211820zd2_2057;
																																				obj_t
																																					BgL_cdrzd211821zd2_2058;
																																				BgL_carzd211820zd2_2057
																																					=
																																					CAR
																																					(BgL_cdrzd211644zd2_2045);
																																				BgL_cdrzd211821zd2_2058
																																					=
																																					CDR
																																					(BgL_cdrzd211644zd2_2045);
																																				if (PAIRP(BgL_carzd211820zd2_2057))
																																					{	/* Eval/evaluate.scm 424 */
																																						obj_t
																																							BgL_cdrzd211825zd2_2060;
																																						BgL_cdrzd211825zd2_2060
																																							=
																																							CDR
																																							(BgL_carzd211820zd2_2057);
																																						if (
																																							(CAR
																																								(BgL_carzd211820zd2_2057)
																																								==
																																								BGl_symbol3312z00zz__evaluatez00))
																																							{	/* Eval/evaluate.scm 424 */
																																								if (PAIRP(BgL_cdrzd211825zd2_2060))
																																									{	/* Eval/evaluate.scm 424 */
																																										obj_t
																																											BgL_carzd211828zd2_2064;
																																										obj_t
																																											BgL_cdrzd211829zd2_2065;
																																										BgL_carzd211828zd2_2064
																																											=
																																											CAR
																																											(BgL_cdrzd211825zd2_2060);
																																										BgL_cdrzd211829zd2_2065
																																											=
																																											CDR
																																											(BgL_cdrzd211825zd2_2060);
																																										if (SYMBOLP(BgL_carzd211828zd2_2064))
																																											{	/* Eval/evaluate.scm 424 */
																																												if (PAIRP(BgL_cdrzd211829zd2_2065))
																																													{	/* Eval/evaluate.scm 424 */
																																														obj_t
																																															BgL_carzd211833zd2_2068;
																																														BgL_carzd211833zd2_2068
																																															=
																																															CAR
																																															(BgL_cdrzd211829zd2_2065);
																																														if (SYMBOLP(BgL_carzd211833zd2_2068))
																																															{	/* Eval/evaluate.scm 424 */
																																																if (NULLP(CDR(BgL_cdrzd211829zd2_2065)))
																																																	{	/* Eval/evaluate.scm 424 */
																																																		if (PAIRP(BgL_cdrzd211821zd2_2058))
																																																			{	/* Eval/evaluate.scm 424 */
																																																				if (NULLP(CDR(BgL_cdrzd211821zd2_2058)))
																																																					{	/* Eval/evaluate.scm 424 */
																																																						obj_t
																																																							BgL_arg2055z00_2075;
																																																						BgL_arg2055z00_2075
																																																							=
																																																							CAR
																																																							(BgL_cdrzd211821zd2_2058);
																																																						{	/* Eval/evaluate.scm 531 */
																																																							BgL_ev_setglobalz00_bglt
																																																								BgL_new1140z00_4443;
																																																							{	/* Eval/evaluate.scm 535 */
																																																								BgL_ev_setglobalz00_bglt
																																																									BgL_new1139z00_4444;
																																																								BgL_new1139z00_4444
																																																									=
																																																									(
																																																									(BgL_ev_setglobalz00_bglt)
																																																									BOBJECT
																																																									(GC_MALLOC
																																																										(sizeof
																																																											(struct
																																																												BgL_ev_setglobalz00_bgl))));
																																																								{	/* Eval/evaluate.scm 535 */
																																																									long
																																																										BgL_arg2380z00_4445;
																																																									{	/* Eval/evaluate.scm 535 */
																																																										long
																																																											BgL_res3117z00_4447;
																																																										BgL_res3117z00_4447
																																																											=
																																																											BGL_CLASS_INDEX
																																																											(BGl_ev_setglobalz00zz__evaluate_typesz00);
																																																										BgL_arg2380z00_4445
																																																											=
																																																											BgL_res3117z00_4447;
																																																									}
																																																									BGL_OBJECT_CLASS_NUM_SET
																																																										(
																																																										((BgL_objectz00_bglt) BgL_new1139z00_4444), BgL_arg2380z00_4445);
																																																								}
																																																								BgL_new1140z00_4443
																																																									=
																																																									BgL_new1139z00_4444;
																																																							}
																																																							{
																																																								BgL_ev_exprz00_bglt
																																																									BgL_auxz00_7104;
																																																								{	/* Eval/evaluate.scm 380 */
																																																									obj_t
																																																										BgL_arg2431z00_4450;
																																																									BgL_arg2431z00_4450
																																																										=
																																																										BGl_getzd2locationzd2zz__evaluatez00
																																																										(BgL_arg2055z00_2075,
																																																										BgL_locz00_74);
																																																									BgL_auxz00_7104
																																																										=
																																																										(
																																																										(BgL_ev_exprz00_bglt)
																																																										BGl_uconvzf2locze70z15zz__evaluatez00
																																																										(BgL_wherez00_73,
																																																											BgL_globalsz00_71,
																																																											BgL_localsz00_70,
																																																											BgL_arg2055z00_2075,
																																																											BgL_arg2431z00_4450));
																																																								}
																																																								((((BgL_ev_hookz00_bglt) COBJECT(((BgL_ev_hookz00_bglt) BgL_new1140z00_4443)))->BgL_ez00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_7104), BUNSPEC);
																																																							}
																																																							((((BgL_ev_setglobalz00_bglt) COBJECT(BgL_new1140z00_4443))->BgL_locz00) = ((obj_t) BgL_locz00_74), BUNSPEC);
																																																							((((BgL_ev_setglobalz00_bglt) COBJECT(BgL_new1140z00_4443))->BgL_namez00) = ((obj_t) BgL_carzd211828zd2_2064), BUNSPEC);
																																																							((((BgL_ev_setglobalz00_bglt) COBJECT(BgL_new1140z00_4443))->BgL_modz00) = ((obj_t) BGl_evalzd2findzd2modulez00zz__evmodulez00(BgL_carzd211833zd2_2068)), BUNSPEC);
																																																							return
																																																								(
																																																								(obj_t)
																																																								BgL_new1140z00_4443);
																																																						}
																																																					}
																																																				else
																																																					{	/* Eval/evaluate.scm 424 */
																																																						return
																																																							BGl_evcompilezd2errorzd2zz__evcompilez00
																																																							(BgL_locz00_74,
																																																							BGl_string3229z00zz__evaluatez00,
																																																							BGl_string3304z00zz__evaluatez00,
																																																							BgL_ez00_69);
																																																					}
																																																			}
																																																		else
																																																			{	/* Eval/evaluate.scm 424 */
																																																				return
																																																					BGl_evcompilezd2errorzd2zz__evcompilez00
																																																					(BgL_locz00_74,
																																																					BGl_string3229z00zz__evaluatez00,
																																																					BGl_string3304z00zz__evaluatez00,
																																																					BgL_ez00_69);
																																																			}
																																																	}
																																																else
																																																	{	/* Eval/evaluate.scm 424 */
																																																		obj_t
																																																			BgL_cdrzd211949zd2_2077;
																																																		BgL_cdrzd211949zd2_2077
																																																			=
																																																			CDR
																																																			(BgL_ez00_69);
																																																		{	/* Eval/evaluate.scm 424 */
																																																			obj_t
																																																				BgL_cdrzd211953zd2_2078;
																																																			BgL_cdrzd211953zd2_2078
																																																				=
																																																				CDR
																																																				(
																																																				((obj_t) BgL_cdrzd211949zd2_2077));
																																																			if (PAIRP(BgL_cdrzd211953zd2_2078))
																																																				{	/* Eval/evaluate.scm 424 */
																																																					if (NULLP(CDR(BgL_cdrzd211953zd2_2078)))
																																																						{	/* Eval/evaluate.scm 424 */
																																																							obj_t
																																																								BgL_arg2061z00_2082;
																																																							obj_t
																																																								BgL_arg2062z00_2083;
																																																							BgL_arg2061z00_2082
																																																								=
																																																								CAR
																																																								(
																																																								((obj_t) BgL_cdrzd211949zd2_2077));
																																																							BgL_arg2062z00_2083
																																																								=
																																																								CAR
																																																								(BgL_cdrzd211953zd2_2078);
																																																							{
																																																								BgL_ev_hookz00_bglt
																																																									BgL_auxz00_7128;
																																																								{
																																																									obj_t
																																																										BgL_ez00_7130;
																																																									obj_t
																																																										BgL_vz00_7129;
																																																									BgL_vz00_7129
																																																										=
																																																										BgL_arg2061z00_2082;
																																																									BgL_ez00_7130
																																																										=
																																																										BgL_arg2062z00_2083;
																																																									BgL_ez00_1505
																																																										=
																																																										BgL_ez00_7130;
																																																									BgL_vz00_1504
																																																										=
																																																										BgL_vz00_7129;
																																																									goto
																																																										BgL_tagzd2165zd2_1506;
																																																								}
																																																								return
																																																									(
																																																									(obj_t)
																																																									BgL_auxz00_7128);
																																																							}
																																																						}
																																																					else
																																																						{	/* Eval/evaluate.scm 424 */
																																																							return
																																																								BGl_evcompilezd2errorzd2zz__evcompilez00
																																																								(BgL_locz00_74,
																																																								BGl_string3229z00zz__evaluatez00,
																																																								BGl_string3304z00zz__evaluatez00,
																																																								BgL_ez00_69);
																																																						}
																																																				}
																																																			else
																																																				{	/* Eval/evaluate.scm 424 */
																																																					return
																																																						BGl_evcompilezd2errorzd2zz__evcompilez00
																																																						(BgL_locz00_74,
																																																						BGl_string3229z00zz__evaluatez00,
																																																						BGl_string3304z00zz__evaluatez00,
																																																						BgL_ez00_69);
																																																				}
																																																		}
																																																	}
																																															}
																																														else
																																															{	/* Eval/evaluate.scm 424 */
																																																obj_t
																																																	BgL_cdrzd212010zd2_2086;
																																																BgL_cdrzd212010zd2_2086
																																																	=
																																																	CDR
																																																	(BgL_ez00_69);
																																																{	/* Eval/evaluate.scm 424 */
																																																	obj_t
																																																		BgL_cdrzd212014zd2_2087;
																																																	BgL_cdrzd212014zd2_2087
																																																		=
																																																		CDR
																																																		(
																																																		((obj_t) BgL_cdrzd212010zd2_2086));
																																																	if (PAIRP(BgL_cdrzd212014zd2_2087))
																																																		{	/* Eval/evaluate.scm 424 */
																																																			if (NULLP(CDR(BgL_cdrzd212014zd2_2087)))
																																																				{	/* Eval/evaluate.scm 424 */
																																																					obj_t
																																																						BgL_arg2070z00_2091;
																																																					obj_t
																																																						BgL_arg2071z00_2092;
																																																					BgL_arg2070z00_2091
																																																						=
																																																						CAR
																																																						(
																																																						((obj_t) BgL_cdrzd212010zd2_2086));
																																																					BgL_arg2071z00_2092
																																																						=
																																																						CAR
																																																						(BgL_cdrzd212014zd2_2087);
																																																					{
																																																						BgL_ev_hookz00_bglt
																																																							BgL_auxz00_7145;
																																																						{
																																																							obj_t
																																																								BgL_ez00_7147;
																																																							obj_t
																																																								BgL_vz00_7146;
																																																							BgL_vz00_7146
																																																								=
																																																								BgL_arg2070z00_2091;
																																																							BgL_ez00_7147
																																																								=
																																																								BgL_arg2071z00_2092;
																																																							BgL_ez00_1505
																																																								=
																																																								BgL_ez00_7147;
																																																							BgL_vz00_1504
																																																								=
																																																								BgL_vz00_7146;
																																																							goto
																																																								BgL_tagzd2165zd2_1506;
																																																						}
																																																						return
																																																							(
																																																							(obj_t)
																																																							BgL_auxz00_7145);
																																																					}
																																																				}
																																																			else
																																																				{	/* Eval/evaluate.scm 424 */
																																																					return
																																																						BGl_evcompilezd2errorzd2zz__evcompilez00
																																																						(BgL_locz00_74,
																																																						BGl_string3229z00zz__evaluatez00,
																																																						BGl_string3304z00zz__evaluatez00,
																																																						BgL_ez00_69);
																																																				}
																																																		}
																																																	else
																																																		{	/* Eval/evaluate.scm 424 */
																																																			return
																																																				BGl_evcompilezd2errorzd2zz__evcompilez00
																																																				(BgL_locz00_74,
																																																				BGl_string3229z00zz__evaluatez00,
																																																				BGl_string3304z00zz__evaluatez00,
																																																				BgL_ez00_69);
																																																		}
																																																}
																																															}
																																													}
																																												else
																																													{	/* Eval/evaluate.scm 424 */
																																														obj_t
																																															BgL_cdrzd212071zd2_2094;
																																														BgL_cdrzd212071zd2_2094
																																															=
																																															CDR
																																															(BgL_ez00_69);
																																														{	/* Eval/evaluate.scm 424 */
																																															obj_t
																																																BgL_cdrzd212075zd2_2095;
																																															BgL_cdrzd212075zd2_2095
																																																=
																																																CDR
																																																(
																																																((obj_t) BgL_cdrzd212071zd2_2094));
																																															if (PAIRP(BgL_cdrzd212075zd2_2095))
																																																{	/* Eval/evaluate.scm 424 */
																																																	if (NULLP(CDR(BgL_cdrzd212075zd2_2095)))
																																																		{	/* Eval/evaluate.scm 424 */
																																																			obj_t
																																																				BgL_arg2077z00_2099;
																																																			obj_t
																																																				BgL_arg2078z00_2100;
																																																			BgL_arg2077z00_2099
																																																				=
																																																				CAR
																																																				(
																																																				((obj_t) BgL_cdrzd212071zd2_2094));
																																																			BgL_arg2078z00_2100
																																																				=
																																																				CAR
																																																				(BgL_cdrzd212075zd2_2095);
																																																			{
																																																				BgL_ev_hookz00_bglt
																																																					BgL_auxz00_7162;
																																																				{
																																																					obj_t
																																																						BgL_ez00_7164;
																																																					obj_t
																																																						BgL_vz00_7163;
																																																					BgL_vz00_7163
																																																						=
																																																						BgL_arg2077z00_2099;
																																																					BgL_ez00_7164
																																																						=
																																																						BgL_arg2078z00_2100;
																																																					BgL_ez00_1505
																																																						=
																																																						BgL_ez00_7164;
																																																					BgL_vz00_1504
																																																						=
																																																						BgL_vz00_7163;
																																																					goto
																																																						BgL_tagzd2165zd2_1506;
																																																				}
																																																				return
																																																					(
																																																					(obj_t)
																																																					BgL_auxz00_7162);
																																																			}
																																																		}
																																																	else
																																																		{	/* Eval/evaluate.scm 424 */
																																																			return
																																																				BGl_evcompilezd2errorzd2zz__evcompilez00
																																																				(BgL_locz00_74,
																																																				BGl_string3229z00zz__evaluatez00,
																																																				BGl_string3304z00zz__evaluatez00,
																																																				BgL_ez00_69);
																																																		}
																																																}
																																															else
																																																{	/* Eval/evaluate.scm 424 */
																																																	return
																																																		BGl_evcompilezd2errorzd2zz__evcompilez00
																																																		(BgL_locz00_74,
																																																		BGl_string3229z00zz__evaluatez00,
																																																		BGl_string3304z00zz__evaluatez00,
																																																		BgL_ez00_69);
																																																}
																																														}
																																													}
																																											}
																																										else
																																											{	/* Eval/evaluate.scm 424 */
																																												obj_t
																																													BgL_cdrzd212132zd2_2102;
																																												BgL_cdrzd212132zd2_2102
																																													=
																																													CDR
																																													(BgL_ez00_69);
																																												{	/* Eval/evaluate.scm 424 */
																																													obj_t
																																														BgL_cdrzd212136zd2_2103;
																																													BgL_cdrzd212136zd2_2103
																																														=
																																														CDR
																																														(
																																														((obj_t) BgL_cdrzd212132zd2_2102));
																																													if (PAIRP(BgL_cdrzd212136zd2_2103))
																																														{	/* Eval/evaluate.scm 424 */
																																															if (NULLP(CDR(BgL_cdrzd212136zd2_2103)))
																																																{	/* Eval/evaluate.scm 424 */
																																																	obj_t
																																																		BgL_arg2083z00_2107;
																																																	obj_t
																																																		BgL_arg2084z00_2108;
																																																	BgL_arg2083z00_2107
																																																		=
																																																		CAR
																																																		(
																																																		((obj_t) BgL_cdrzd212132zd2_2102));
																																																	BgL_arg2084z00_2108
																																																		=
																																																		CAR
																																																		(BgL_cdrzd212136zd2_2103);
																																																	{
																																																		BgL_ev_hookz00_bglt
																																																			BgL_auxz00_7179;
																																																		{
																																																			obj_t
																																																				BgL_ez00_7181;
																																																			obj_t
																																																				BgL_vz00_7180;
																																																			BgL_vz00_7180
																																																				=
																																																				BgL_arg2083z00_2107;
																																																			BgL_ez00_7181
																																																				=
																																																				BgL_arg2084z00_2108;
																																																			BgL_ez00_1505
																																																				=
																																																				BgL_ez00_7181;
																																																			BgL_vz00_1504
																																																				=
																																																				BgL_vz00_7180;
																																																			goto
																																																				BgL_tagzd2165zd2_1506;
																																																		}
																																																		return
																																																			(
																																																			(obj_t)
																																																			BgL_auxz00_7179);
																																																	}
																																																}
																																															else
																																																{	/* Eval/evaluate.scm 424 */
																																																	return
																																																		BGl_evcompilezd2errorzd2zz__evcompilez00
																																																		(BgL_locz00_74,
																																																		BGl_string3229z00zz__evaluatez00,
																																																		BGl_string3304z00zz__evaluatez00,
																																																		BgL_ez00_69);
																																																}
																																														}
																																													else
																																														{	/* Eval/evaluate.scm 424 */
																																															return
																																																BGl_evcompilezd2errorzd2zz__evcompilez00
																																																(BgL_locz00_74,
																																																BGl_string3229z00zz__evaluatez00,
																																																BGl_string3304z00zz__evaluatez00,
																																																BgL_ez00_69);
																																														}
																																												}
																																											}
																																									}
																																								else
																																									{	/* Eval/evaluate.scm 424 */
																																										obj_t
																																											BgL_cdrzd212193zd2_2110;
																																										BgL_cdrzd212193zd2_2110
																																											=
																																											CDR
																																											(BgL_ez00_69);
																																										{	/* Eval/evaluate.scm 424 */
																																											obj_t
																																												BgL_cdrzd212197zd2_2111;
																																											BgL_cdrzd212197zd2_2111
																																												=
																																												CDR
																																												(
																																												((obj_t) BgL_cdrzd212193zd2_2110));
																																											if (PAIRP(BgL_cdrzd212197zd2_2111))
																																												{	/* Eval/evaluate.scm 424 */
																																													if (NULLP(CDR(BgL_cdrzd212197zd2_2111)))
																																														{	/* Eval/evaluate.scm 424 */
																																															obj_t
																																																BgL_arg2089z00_2115;
																																															obj_t
																																																BgL_arg2090z00_2116;
																																															BgL_arg2089z00_2115
																																																=
																																																CAR
																																																(
																																																((obj_t) BgL_cdrzd212193zd2_2110));
																																															BgL_arg2090z00_2116
																																																=
																																																CAR
																																																(BgL_cdrzd212197zd2_2111);
																																															{
																																																BgL_ev_hookz00_bglt
																																																	BgL_auxz00_7196;
																																																{
																																																	obj_t
																																																		BgL_ez00_7198;
																																																	obj_t
																																																		BgL_vz00_7197;
																																																	BgL_vz00_7197
																																																		=
																																																		BgL_arg2089z00_2115;
																																																	BgL_ez00_7198
																																																		=
																																																		BgL_arg2090z00_2116;
																																																	BgL_ez00_1505
																																																		=
																																																		BgL_ez00_7198;
																																																	BgL_vz00_1504
																																																		=
																																																		BgL_vz00_7197;
																																																	goto
																																																		BgL_tagzd2165zd2_1506;
																																																}
																																																return
																																																	(
																																																	(obj_t)
																																																	BgL_auxz00_7196);
																																															}
																																														}
																																													else
																																														{	/* Eval/evaluate.scm 424 */
																																															return
																																																BGl_evcompilezd2errorzd2zz__evcompilez00
																																																(BgL_locz00_74,
																																																BGl_string3229z00zz__evaluatez00,
																																																BGl_string3304z00zz__evaluatez00,
																																																BgL_ez00_69);
																																														}
																																												}
																																											else
																																												{	/* Eval/evaluate.scm 424 */
																																													return
																																														BGl_evcompilezd2errorzd2zz__evcompilez00
																																														(BgL_locz00_74,
																																														BGl_string3229z00zz__evaluatez00,
																																														BGl_string3304z00zz__evaluatez00,
																																														BgL_ez00_69);
																																												}
																																										}
																																									}
																																							}
																																						else
																																							{	/* Eval/evaluate.scm 424 */
																																								obj_t
																																									BgL_cdrzd212241zd2_2118;
																																								BgL_cdrzd212241zd2_2118
																																									=
																																									CDR
																																									(BgL_ez00_69);
																																								{	/* Eval/evaluate.scm 424 */
																																									obj_t
																																										BgL_carzd212244zd2_2119;
																																									obj_t
																																										BgL_cdrzd212245zd2_2120;
																																									BgL_carzd212244zd2_2119
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_cdrzd212241zd2_2118));
																																									BgL_cdrzd212245zd2_2120
																																										=
																																										CDR
																																										(
																																										((obj_t) BgL_cdrzd212241zd2_2118));
																																									if ((CAR(((obj_t) BgL_carzd212244zd2_2119)) == BGl_symbol3314z00zz__evaluatez00))
																																										{	/* Eval/evaluate.scm 424 */
																																											if (PAIRP(BgL_cdrzd212245zd2_2120))
																																												{	/* Eval/evaluate.scm 424 */
																																													if (NULLP(CDR(BgL_cdrzd212245zd2_2120)))
																																														{	/* Eval/evaluate.scm 424 */
																																															obj_t
																																																BgL_arg2097z00_2126;
																																															obj_t
																																																BgL_arg2098z00_2127;
																																															BgL_arg2097z00_2126
																																																=
																																																CDR
																																																(
																																																((obj_t) BgL_carzd212244zd2_2119));
																																															BgL_arg2098z00_2127
																																																=
																																																CAR
																																																(BgL_cdrzd212245zd2_2120);
																																															{
																																																obj_t
																																																	BgL_e2z00_7220;
																																																obj_t
																																																	BgL_lz00_7219;
																																																BgL_lz00_7219
																																																	=
																																																	BgL_arg2097z00_2126;
																																																BgL_e2z00_7220
																																																	=
																																																	BgL_arg2098z00_2127;
																																																BgL_e2z00_1502
																																																	=
																																																	BgL_e2z00_7220;
																																																BgL_lz00_1501
																																																	=
																																																	BgL_lz00_7219;
																																																goto
																																																	BgL_tagzd2164zd2_1503;
																																															}
																																														}
																																													else
																																														{	/* Eval/evaluate.scm 424 */
																																															return
																																																BGl_evcompilezd2errorzd2zz__evcompilez00
																																																(BgL_locz00_74,
																																																BGl_string3229z00zz__evaluatez00,
																																																BGl_string3304z00zz__evaluatez00,
																																																BgL_ez00_69);
																																														}
																																												}
																																											else
																																												{	/* Eval/evaluate.scm 424 */
																																													return
																																														BGl_evcompilezd2errorzd2zz__evcompilez00
																																														(BgL_locz00_74,
																																														BGl_string3229z00zz__evaluatez00,
																																														BGl_string3304z00zz__evaluatez00,
																																														BgL_ez00_69);
																																												}
																																										}
																																									else
																																										{	/* Eval/evaluate.scm 424 */
																																											obj_t
																																												BgL_cdrzd212321zd2_2130;
																																											BgL_cdrzd212321zd2_2130
																																												=
																																												CDR
																																												(
																																												((obj_t) BgL_cdrzd212241zd2_2118));
																																											if (PAIRP(BgL_cdrzd212321zd2_2130))
																																												{	/* Eval/evaluate.scm 424 */
																																													if (NULLP(CDR(BgL_cdrzd212321zd2_2130)))
																																														{	/* Eval/evaluate.scm 424 */
																																															obj_t
																																																BgL_arg2104z00_2134;
																																															obj_t
																																																BgL_arg2105z00_2135;
																																															BgL_arg2104z00_2134
																																																=
																																																CAR
																																																(
																																																((obj_t) BgL_cdrzd212241zd2_2118));
																																															BgL_arg2105z00_2135
																																																=
																																																CAR
																																																(BgL_cdrzd212321zd2_2130);
																																															{
																																																BgL_ev_hookz00_bglt
																																																	BgL_auxz00_7233;
																																																{
																																																	obj_t
																																																		BgL_ez00_7235;
																																																	obj_t
																																																		BgL_vz00_7234;
																																																	BgL_vz00_7234
																																																		=
																																																		BgL_arg2104z00_2134;
																																																	BgL_ez00_7235
																																																		=
																																																		BgL_arg2105z00_2135;
																																																	BgL_ez00_1505
																																																		=
																																																		BgL_ez00_7235;
																																																	BgL_vz00_1504
																																																		=
																																																		BgL_vz00_7234;
																																																	goto
																																																		BgL_tagzd2165zd2_1506;
																																																}
																																																return
																																																	(
																																																	(obj_t)
																																																	BgL_auxz00_7233);
																																															}
																																														}
																																													else
																																														{	/* Eval/evaluate.scm 424 */
																																															return
																																																BGl_evcompilezd2errorzd2zz__evcompilez00
																																																(BgL_locz00_74,
																																																BGl_string3229z00zz__evaluatez00,
																																																BGl_string3304z00zz__evaluatez00,
																																																BgL_ez00_69);
																																														}
																																												}
																																											else
																																												{	/* Eval/evaluate.scm 424 */
																																													return
																																														BGl_evcompilezd2errorzd2zz__evcompilez00
																																														(BgL_locz00_74,
																																														BGl_string3229z00zz__evaluatez00,
																																														BGl_string3304z00zz__evaluatez00,
																																														BgL_ez00_69);
																																												}
																																										}
																																								}
																																							}
																																					}
																																				else
																																					{	/* Eval/evaluate.scm 424 */
																																						obj_t
																																							BgL_cdrzd212378zd2_2139;
																																						BgL_cdrzd212378zd2_2139
																																							=
																																							CDR
																																							(BgL_ez00_69);
																																						{	/* Eval/evaluate.scm 424 */
																																							obj_t
																																								BgL_cdrzd212382zd2_2140;
																																							BgL_cdrzd212382zd2_2140
																																								=
																																								CDR
																																								(
																																								((obj_t) BgL_cdrzd212378zd2_2139));
																																							if (PAIRP(BgL_cdrzd212382zd2_2140))
																																								{	/* Eval/evaluate.scm 424 */
																																									if (NULLP(CDR(BgL_cdrzd212382zd2_2140)))
																																										{	/* Eval/evaluate.scm 424 */
																																											obj_t
																																												BgL_arg2112z00_2144;
																																											obj_t
																																												BgL_arg2114z00_2145;
																																											BgL_arg2112z00_2144
																																												=
																																												CAR
																																												(
																																												((obj_t) BgL_cdrzd212378zd2_2139));
																																											BgL_arg2114z00_2145
																																												=
																																												CAR
																																												(BgL_cdrzd212382zd2_2140);
																																											{
																																												BgL_ev_hookz00_bglt
																																													BgL_auxz00_7250;
																																												{
																																													obj_t
																																														BgL_ez00_7252;
																																													obj_t
																																														BgL_vz00_7251;
																																													BgL_vz00_7251
																																														=
																																														BgL_arg2112z00_2144;
																																													BgL_ez00_7252
																																														=
																																														BgL_arg2114z00_2145;
																																													BgL_ez00_1505
																																														=
																																														BgL_ez00_7252;
																																													BgL_vz00_1504
																																														=
																																														BgL_vz00_7251;
																																													goto
																																														BgL_tagzd2165zd2_1506;
																																												}
																																												return
																																													(
																																													(obj_t)
																																													BgL_auxz00_7250);
																																											}
																																										}
																																									else
																																										{	/* Eval/evaluate.scm 424 */
																																											return
																																												BGl_evcompilezd2errorzd2zz__evcompilez00
																																												(BgL_locz00_74,
																																												BGl_string3229z00zz__evaluatez00,
																																												BGl_string3304z00zz__evaluatez00,
																																												BgL_ez00_69);
																																										}
																																								}
																																							else
																																								{	/* Eval/evaluate.scm 424 */
																																									return
																																										BGl_evcompilezd2errorzd2zz__evcompilez00
																																										(BgL_locz00_74,
																																										BGl_string3229z00zz__evaluatez00,
																																										BGl_string3304z00zz__evaluatez00,
																																										BgL_ez00_69);
																																								}
																																						}
																																					}
																																			}
																																		else
																																			{	/* Eval/evaluate.scm 424 */
																																				return
																																					BGl_evcompilezd2errorzd2zz__evcompilez00
																																					(BgL_locz00_74,
																																					BGl_string3229z00zz__evaluatez00,
																																					BGl_string3304z00zz__evaluatez00,
																																					BgL_ez00_69);
																																			}
																																	}
																																else
																																	{	/* Eval/evaluate.scm 424 */
																																		obj_t
																																			BgL_cdrzd212503zd2_2147;
																																		BgL_cdrzd212503zd2_2147
																																			=
																																			CDR
																																			(BgL_ez00_69);
																																		if ((CAR
																																				(BgL_ez00_69)
																																				==
																																				BGl_symbol3328z00zz__evaluatez00))
																																			{	/* Eval/evaluate.scm 424 */
																																				if (PAIRP(BgL_cdrzd212503zd2_2147))
																																					{	/* Eval/evaluate.scm 424 */
																																						obj_t
																																							BgL_cdrzd212508zd2_2151;
																																						BgL_cdrzd212508zd2_2151
																																							=
																																							CDR
																																							(BgL_cdrzd212503zd2_2147);
																																						if (PAIRP(BgL_cdrzd212508zd2_2151))
																																							{	/* Eval/evaluate.scm 424 */
																																								obj_t
																																									BgL_carzd212512zd2_2153;
																																								BgL_carzd212512zd2_2153
																																									=
																																									CAR
																																									(BgL_cdrzd212508zd2_2151);
																																								if (PAIRP(BgL_carzd212512zd2_2153))
																																									{	/* Eval/evaluate.scm 424 */
																																										obj_t
																																											BgL_cdrzd212517zd2_2155;
																																										BgL_cdrzd212517zd2_2155
																																											=
																																											CDR
																																											(BgL_carzd212512zd2_2153);
																																										if ((CAR(BgL_carzd212512zd2_2153) == BGl_symbol3293z00zz__evaluatez00))
																																											{	/* Eval/evaluate.scm 424 */
																																												if (PAIRP(BgL_cdrzd212517zd2_2155))
																																													{	/* Eval/evaluate.scm 424 */
																																														obj_t
																																															BgL_cdrzd212521zd2_2159;
																																														BgL_cdrzd212521zd2_2159
																																															=
																																															CDR
																																															(BgL_cdrzd212517zd2_2155);
																																														if (PAIRP(BgL_cdrzd212521zd2_2159))
																																															{	/* Eval/evaluate.scm 424 */
																																																if (NULLP(CDR(BgL_cdrzd212521zd2_2159)))
																																																	{	/* Eval/evaluate.scm 424 */
																																																		if (NULLP(CDR(BgL_cdrzd212508zd2_2151)))
																																																			{	/* Eval/evaluate.scm 424 */
																																																				obj_t
																																																					BgL_arg2129z00_2165;
																																																				obj_t
																																																					BgL_arg2130z00_2166;
																																																				obj_t
																																																					BgL_arg2131z00_2167;
																																																				BgL_arg2129z00_2165
																																																					=
																																																					CAR
																																																					(BgL_cdrzd212503zd2_2147);
																																																				BgL_arg2130z00_2166
																																																					=
																																																					CAR
																																																					(BgL_cdrzd212517zd2_2155);
																																																				BgL_arg2131z00_2167
																																																					=
																																																					CAR
																																																					(BgL_cdrzd212521zd2_2159);
																																																				{
																																																					BgL_ev_defglobalz00_bglt
																																																						BgL_auxz00_7287;
																																																					{
																																																						obj_t
																																																							BgL_bodyz00_7290;
																																																						obj_t
																																																							BgL_formalsz00_7289;
																																																						obj_t
																																																							BgL_gvz00_7288;
																																																						BgL_gvz00_7288
																																																							=
																																																							BgL_arg2129z00_2165;
																																																						BgL_formalsz00_7289
																																																							=
																																																							BgL_arg2130z00_2166;
																																																						BgL_bodyz00_7290
																																																							=
																																																							BgL_arg2131z00_2167;
																																																						BgL_bodyz00_1510
																																																							=
																																																							BgL_bodyz00_7290;
																																																						BgL_formalsz00_1509
																																																							=
																																																							BgL_formalsz00_7289;
																																																						BgL_gvz00_1508
																																																							=
																																																							BgL_gvz00_7288;
																																																						goto
																																																							BgL_tagzd2167zd2_1511;
																																																					}
																																																					return
																																																						(
																																																						(obj_t)
																																																						BgL_auxz00_7287);
																																																				}
																																																			}
																																																		else
																																																			{	/* Eval/evaluate.scm 424 */
																																																				obj_t
																																																					BgL_arg2132z00_2168;
																																																				BgL_arg2132z00_2168
																																																					=
																																																					CAR
																																																					(BgL_ez00_69);
																																																				{
																																																					BgL_ev_appz00_bglt
																																																						BgL_auxz00_7293;
																																																					{
																																																						obj_t
																																																							BgL_argsz00_7295;
																																																						obj_t
																																																							BgL_fz00_7294;
																																																						BgL_fz00_7294
																																																							=
																																																							BgL_arg2132z00_2168;
																																																						BgL_argsz00_7295
																																																							=
																																																							BgL_cdrzd212503zd2_2147;
																																																						BgL_argsz00_1536
																																																							=
																																																							BgL_argsz00_7295;
																																																						BgL_fz00_1535
																																																							=
																																																							BgL_fz00_7294;
																																																						goto
																																																							BgL_tagzd2176zd2_1537;
																																																					}
																																																					return
																																																						(
																																																						(obj_t)
																																																						BgL_auxz00_7293);
																																																				}
																																																			}
																																																	}
																																																else
																																																	{	/* Eval/evaluate.scm 424 */
																																																		obj_t
																																																			BgL_cdrzd212623zd2_2172;
																																																		BgL_cdrzd212623zd2_2172
																																																			=
																																																			CDR
																																																			(
																																																			((obj_t) BgL_cdrzd212503zd2_2147));
																																																		if (NULLP(CDR(((obj_t) BgL_cdrzd212623zd2_2172))))
																																																			{	/* Eval/evaluate.scm 424 */
																																																				obj_t
																																																					BgL_arg2137z00_2175;
																																																				obj_t
																																																					BgL_arg2138z00_2176;
																																																				BgL_arg2137z00_2175
																																																					=
																																																					CAR
																																																					(
																																																					((obj_t) BgL_cdrzd212503zd2_2147));
																																																				BgL_arg2138z00_2176
																																																					=
																																																					CAR
																																																					(
																																																					((obj_t) BgL_cdrzd212623zd2_2172));
																																																				{
																																																					BgL_ev_defglobalz00_bglt
																																																						BgL_auxz00_7307;
																																																					{
																																																						obj_t
																																																							BgL_gez00_7309;
																																																						obj_t
																																																							BgL_gvz00_7308;
																																																						BgL_gvz00_7308
																																																							=
																																																							BgL_arg2137z00_2175;
																																																						BgL_gez00_7309
																																																							=
																																																							BgL_arg2138z00_2176;
																																																						BgL_gez00_1513
																																																							=
																																																							BgL_gez00_7309;
																																																						BgL_gvz00_1512
																																																							=
																																																							BgL_gvz00_7308;
																																																						goto
																																																							BgL_tagzd2168zd2_1514;
																																																					}
																																																					return
																																																						(
																																																						(obj_t)
																																																						BgL_auxz00_7307);
																																																				}
																																																			}
																																																		else
																																																			{	/* Eval/evaluate.scm 424 */
																																																				obj_t
																																																					BgL_arg2140z00_2177;
																																																				obj_t
																																																					BgL_arg2141z00_2178;
																																																				BgL_arg2140z00_2177
																																																					=
																																																					CAR
																																																					(BgL_ez00_69);
																																																				BgL_arg2141z00_2178
																																																					=
																																																					CDR
																																																					(BgL_ez00_69);
																																																				{
																																																					BgL_ev_appz00_bglt
																																																						BgL_auxz00_7313;
																																																					{
																																																						obj_t
																																																							BgL_argsz00_7315;
																																																						obj_t
																																																							BgL_fz00_7314;
																																																						BgL_fz00_7314
																																																							=
																																																							BgL_arg2140z00_2177;
																																																						BgL_argsz00_7315
																																																							=
																																																							BgL_arg2141z00_2178;
																																																						BgL_argsz00_1536
																																																							=
																																																							BgL_argsz00_7315;
																																																						BgL_fz00_1535
																																																							=
																																																							BgL_fz00_7314;
																																																						goto
																																																							BgL_tagzd2176zd2_1537;
																																																					}
																																																					return
																																																						(
																																																						(obj_t)
																																																						BgL_auxz00_7313);
																																																				}
																																																			}
																																																	}
																																															}
																																														else
																																															{	/* Eval/evaluate.scm 424 */
																																																obj_t
																																																	BgL_cdrzd212712zd2_2182;
																																																BgL_cdrzd212712zd2_2182
																																																	=
																																																	CDR
																																																	(
																																																	((obj_t) BgL_cdrzd212503zd2_2147));
																																																if (NULLP(CDR(((obj_t) BgL_cdrzd212712zd2_2182))))
																																																	{	/* Eval/evaluate.scm 424 */
																																																		obj_t
																																																			BgL_arg2146z00_2185;
																																																		obj_t
																																																			BgL_arg2147z00_2186;
																																																		BgL_arg2146z00_2185
																																																			=
																																																			CAR
																																																			(
																																																			((obj_t) BgL_cdrzd212503zd2_2147));
																																																		BgL_arg2147z00_2186
																																																			=
																																																			CAR
																																																			(
																																																			((obj_t) BgL_cdrzd212712zd2_2182));
																																																		{
																																																			BgL_ev_defglobalz00_bglt
																																																				BgL_auxz00_7327;
																																																			{
																																																				obj_t
																																																					BgL_gez00_7329;
																																																				obj_t
																																																					BgL_gvz00_7328;
																																																				BgL_gvz00_7328
																																																					=
																																																					BgL_arg2146z00_2185;
																																																				BgL_gez00_7329
																																																					=
																																																					BgL_arg2147z00_2186;
																																																				BgL_gez00_1513
																																																					=
																																																					BgL_gez00_7329;
																																																				BgL_gvz00_1512
																																																					=
																																																					BgL_gvz00_7328;
																																																				goto
																																																					BgL_tagzd2168zd2_1514;
																																																			}
																																																			return
																																																				(
																																																				(obj_t)
																																																				BgL_auxz00_7327);
																																																		}
																																																	}
																																																else
																																																	{	/* Eval/evaluate.scm 424 */
																																																		obj_t
																																																			BgL_arg2148z00_2187;
																																																		obj_t
																																																			BgL_arg2149z00_2188;
																																																		BgL_arg2148z00_2187
																																																			=
																																																			CAR
																																																			(BgL_ez00_69);
																																																		BgL_arg2149z00_2188
																																																			=
																																																			CDR
																																																			(BgL_ez00_69);
																																																		{
																																																			BgL_ev_appz00_bglt
																																																				BgL_auxz00_7333;
																																																			{
																																																				obj_t
																																																					BgL_argsz00_7335;
																																																				obj_t
																																																					BgL_fz00_7334;
																																																				BgL_fz00_7334
																																																					=
																																																					BgL_arg2148z00_2187;
																																																				BgL_argsz00_7335
																																																					=
																																																					BgL_arg2149z00_2188;
																																																				BgL_argsz00_1536
																																																					=
																																																					BgL_argsz00_7335;
																																																				BgL_fz00_1535
																																																					=
																																																					BgL_fz00_7334;
																																																				goto
																																																					BgL_tagzd2176zd2_1537;
																																																			}
																																																			return
																																																				(
																																																				(obj_t)
																																																				BgL_auxz00_7333);
																																																		}
																																																	}
																																															}
																																													}
																																												else
																																													{	/* Eval/evaluate.scm 424 */
																																														obj_t
																																															BgL_cdrzd212801zd2_2191;
																																														BgL_cdrzd212801zd2_2191
																																															=
																																															CDR
																																															(
																																															((obj_t) BgL_cdrzd212503zd2_2147));
																																														if (NULLP(CDR(((obj_t) BgL_cdrzd212801zd2_2191))))
																																															{	/* Eval/evaluate.scm 424 */
																																																obj_t
																																																	BgL_arg2154z00_2194;
																																																obj_t
																																																	BgL_arg2155z00_2195;
																																																BgL_arg2154z00_2194
																																																	=
																																																	CAR
																																																	(
																																																	((obj_t) BgL_cdrzd212503zd2_2147));
																																																BgL_arg2155z00_2195
																																																	=
																																																	CAR
																																																	(
																																																	((obj_t) BgL_cdrzd212801zd2_2191));
																																																{
																																																	BgL_ev_defglobalz00_bglt
																																																		BgL_auxz00_7347;
																																																	{
																																																		obj_t
																																																			BgL_gez00_7349;
																																																		obj_t
																																																			BgL_gvz00_7348;
																																																		BgL_gvz00_7348
																																																			=
																																																			BgL_arg2154z00_2194;
																																																		BgL_gez00_7349
																																																			=
																																																			BgL_arg2155z00_2195;
																																																		BgL_gez00_1513
																																																			=
																																																			BgL_gez00_7349;
																																																		BgL_gvz00_1512
																																																			=
																																																			BgL_gvz00_7348;
																																																		goto
																																																			BgL_tagzd2168zd2_1514;
																																																	}
																																																	return
																																																		(
																																																		(obj_t)
																																																		BgL_auxz00_7347);
																																																}
																																															}
																																														else
																																															{	/* Eval/evaluate.scm 424 */
																																																obj_t
																																																	BgL_arg2156z00_2196;
																																																obj_t
																																																	BgL_arg2157z00_2197;
																																																BgL_arg2156z00_2196
																																																	=
																																																	CAR
																																																	(BgL_ez00_69);
																																																BgL_arg2157z00_2197
																																																	=
																																																	CDR
																																																	(BgL_ez00_69);
																																																{
																																																	BgL_ev_appz00_bglt
																																																		BgL_auxz00_7353;
																																																	{
																																																		obj_t
																																																			BgL_argsz00_7355;
																																																		obj_t
																																																			BgL_fz00_7354;
																																																		BgL_fz00_7354
																																																			=
																																																			BgL_arg2156z00_2196;
																																																		BgL_argsz00_7355
																																																			=
																																																			BgL_arg2157z00_2197;
																																																		BgL_argsz00_1536
																																																			=
																																																			BgL_argsz00_7355;
																																																		BgL_fz00_1535
																																																			=
																																																			BgL_fz00_7354;
																																																		goto
																																																			BgL_tagzd2176zd2_1537;
																																																	}
																																																	return
																																																		(
																																																		(obj_t)
																																																		BgL_auxz00_7353);
																																																}
																																															}
																																													}
																																											}
																																										else
																																											{	/* Eval/evaluate.scm 424 */
																																												obj_t
																																													BgL_cdrzd212890zd2_2200;
																																												BgL_cdrzd212890zd2_2200
																																													=
																																													CDR
																																													(
																																													((obj_t) BgL_cdrzd212503zd2_2147));
																																												if (NULLP(CDR(((obj_t) BgL_cdrzd212890zd2_2200))))
																																													{	/* Eval/evaluate.scm 424 */
																																														obj_t
																																															BgL_arg2161z00_2203;
																																														obj_t
																																															BgL_arg2162z00_2204;
																																														BgL_arg2161z00_2203
																																															=
																																															CAR
																																															(
																																															((obj_t) BgL_cdrzd212503zd2_2147));
																																														BgL_arg2162z00_2204
																																															=
																																															CAR
																																															(
																																															((obj_t) BgL_cdrzd212890zd2_2200));
																																														{
																																															BgL_ev_defglobalz00_bglt
																																																BgL_auxz00_7367;
																																															{
																																																obj_t
																																																	BgL_gez00_7369;
																																																obj_t
																																																	BgL_gvz00_7368;
																																																BgL_gvz00_7368
																																																	=
																																																	BgL_arg2161z00_2203;
																																																BgL_gez00_7369
																																																	=
																																																	BgL_arg2162z00_2204;
																																																BgL_gez00_1513
																																																	=
																																																	BgL_gez00_7369;
																																																BgL_gvz00_1512
																																																	=
																																																	BgL_gvz00_7368;
																																																goto
																																																	BgL_tagzd2168zd2_1514;
																																															}
																																															return
																																																(
																																																(obj_t)
																																																BgL_auxz00_7367);
																																														}
																																													}
																																												else
																																													{	/* Eval/evaluate.scm 424 */
																																														obj_t
																																															BgL_arg2163z00_2205;
																																														obj_t
																																															BgL_arg2164z00_2206;
																																														BgL_arg2163z00_2205
																																															=
																																															CAR
																																															(BgL_ez00_69);
																																														BgL_arg2164z00_2206
																																															=
																																															CDR
																																															(BgL_ez00_69);
																																														{
																																															BgL_ev_appz00_bglt
																																																BgL_auxz00_7373;
																																															{
																																																obj_t
																																																	BgL_argsz00_7375;
																																																obj_t
																																																	BgL_fz00_7374;
																																																BgL_fz00_7374
																																																	=
																																																	BgL_arg2163z00_2205;
																																																BgL_argsz00_7375
																																																	=
																																																	BgL_arg2164z00_2206;
																																																BgL_argsz00_1536
																																																	=
																																																	BgL_argsz00_7375;
																																																BgL_fz00_1535
																																																	=
																																																	BgL_fz00_7374;
																																																goto
																																																	BgL_tagzd2176zd2_1537;
																																															}
																																															return
																																																(
																																																(obj_t)
																																																BgL_auxz00_7373);
																																														}
																																													}
																																											}
																																									}
																																								else
																																									{	/* Eval/evaluate.scm 424 */
																																										obj_t
																																											BgL_cdrzd212979zd2_2210;
																																										BgL_cdrzd212979zd2_2210
																																											=
																																											CDR
																																											(
																																											((obj_t) BgL_cdrzd212503zd2_2147));
																																										if (NULLP(CDR(((obj_t) BgL_cdrzd212979zd2_2210))))
																																											{	/* Eval/evaluate.scm 424 */
																																												obj_t
																																													BgL_arg2169z00_2213;
																																												obj_t
																																													BgL_arg2170z00_2214;
																																												BgL_arg2169z00_2213
																																													=
																																													CAR
																																													(
																																													((obj_t) BgL_cdrzd212503zd2_2147));
																																												BgL_arg2170z00_2214
																																													=
																																													CAR
																																													(
																																													((obj_t) BgL_cdrzd212979zd2_2210));
																																												{
																																													BgL_ev_defglobalz00_bglt
																																														BgL_auxz00_7387;
																																													{
																																														obj_t
																																															BgL_gez00_7389;
																																														obj_t
																																															BgL_gvz00_7388;
																																														BgL_gvz00_7388
																																															=
																																															BgL_arg2169z00_2213;
																																														BgL_gez00_7389
																																															=
																																															BgL_arg2170z00_2214;
																																														BgL_gez00_1513
																																															=
																																															BgL_gez00_7389;
																																														BgL_gvz00_1512
																																															=
																																															BgL_gvz00_7388;
																																														goto
																																															BgL_tagzd2168zd2_1514;
																																													}
																																													return
																																														(
																																														(obj_t)
																																														BgL_auxz00_7387);
																																												}
																																											}
																																										else
																																											{	/* Eval/evaluate.scm 424 */
																																												obj_t
																																													BgL_arg2172z00_2215;
																																												obj_t
																																													BgL_arg2173z00_2216;
																																												BgL_arg2172z00_2215
																																													=
																																													CAR
																																													(BgL_ez00_69);
																																												BgL_arg2173z00_2216
																																													=
																																													CDR
																																													(BgL_ez00_69);
																																												{
																																													BgL_ev_appz00_bglt
																																														BgL_auxz00_7393;
																																													{
																																														obj_t
																																															BgL_argsz00_7395;
																																														obj_t
																																															BgL_fz00_7394;
																																														BgL_fz00_7394
																																															=
																																															BgL_arg2172z00_2215;
																																														BgL_argsz00_7395
																																															=
																																															BgL_arg2173z00_2216;
																																														BgL_argsz00_1536
																																															=
																																															BgL_argsz00_7395;
																																														BgL_fz00_1535
																																															=
																																															BgL_fz00_7394;
																																														goto
																																															BgL_tagzd2176zd2_1537;
																																													}
																																													return
																																														(
																																														(obj_t)
																																														BgL_auxz00_7393);
																																												}
																																											}
																																									}
																																							}
																																						else
																																							{	/* Eval/evaluate.scm 424 */
																																								obj_t
																																									BgL_arg2175z00_2218;
																																								BgL_arg2175z00_2218
																																									=
																																									CAR
																																									(BgL_ez00_69);
																																								{
																																									BgL_ev_appz00_bglt
																																										BgL_auxz00_7398;
																																									{
																																										obj_t
																																											BgL_argsz00_7400;
																																										obj_t
																																											BgL_fz00_7399;
																																										BgL_fz00_7399
																																											=
																																											BgL_arg2175z00_2218;
																																										BgL_argsz00_7400
																																											=
																																											BgL_cdrzd212503zd2_2147;
																																										BgL_argsz00_1536
																																											=
																																											BgL_argsz00_7400;
																																										BgL_fz00_1535
																																											=
																																											BgL_fz00_7399;
																																										goto
																																											BgL_tagzd2176zd2_1537;
																																									}
																																									return
																																										(
																																										(obj_t)
																																										BgL_auxz00_7398);
																																								}
																																							}
																																					}
																																				else
																																					{	/* Eval/evaluate.scm 424 */
																																						obj_t
																																							BgL_arg2177z00_2220;
																																						BgL_arg2177z00_2220
																																							=
																																							CAR
																																							(BgL_ez00_69);
																																						{
																																							BgL_ev_appz00_bglt
																																								BgL_auxz00_7403;
																																							{
																																								obj_t
																																									BgL_argsz00_7405;
																																								obj_t
																																									BgL_fz00_7404;
																																								BgL_fz00_7404
																																									=
																																									BgL_arg2177z00_2220;
																																								BgL_argsz00_7405
																																									=
																																									BgL_cdrzd212503zd2_2147;
																																								BgL_argsz00_1536
																																									=
																																									BgL_argsz00_7405;
																																								BgL_fz00_1535
																																									=
																																									BgL_fz00_7404;
																																								goto
																																									BgL_tagzd2176zd2_1537;
																																							}
																																							return
																																								(
																																								(obj_t)
																																								BgL_auxz00_7403);
																																						}
																																					}
																																			}
																																		else
																																			{	/* Eval/evaluate.scm 424 */
																																				if (
																																					(CAR
																																						(BgL_ez00_69)
																																						==
																																						BGl_symbol3330z00zz__evaluatez00))
																																					{	/* Eval/evaluate.scm 424 */
																																						if (PAIRP(BgL_cdrzd212503zd2_2147))
																																							{	/* Eval/evaluate.scm 424 */
																																								obj_t
																																									BgL_carzd213227zd2_2226;
																																								BgL_carzd213227zd2_2226
																																									=
																																									CAR
																																									(BgL_cdrzd212503zd2_2147);
																																								if (PAIRP(BgL_carzd213227zd2_2226))
																																									{	/* Eval/evaluate.scm 424 */
																																										if (NULLP(CDR(BgL_carzd213227zd2_2226)))
																																											{	/* Eval/evaluate.scm 424 */
																																												obj_t
																																													BgL_arg2185z00_2230;
																																												obj_t
																																													BgL_arg2186z00_2231;
																																												BgL_arg2185z00_2230
																																													=
																																													CAR
																																													(BgL_carzd213227zd2_2226);
																																												BgL_arg2186z00_2231
																																													=
																																													CDR
																																													(BgL_cdrzd212503zd2_2147);
																																												{
																																													BgL_ev_bindzd2exitzd2_bglt
																																														BgL_auxz00_7420;
																																													{
																																														obj_t
																																															BgL_bodyz00_7422;
																																														obj_t
																																															BgL_vz00_7421;
																																														BgL_vz00_7421
																																															=
																																															BgL_arg2185z00_2230;
																																														BgL_bodyz00_7422
																																															=
																																															BgL_arg2186z00_2231;
																																														BgL_bodyz00_1516
																																															=
																																															BgL_bodyz00_7422;
																																														BgL_vz00_1515
																																															=
																																															BgL_vz00_7421;
																																														goto
																																															BgL_tagzd2169zd2_1517;
																																													}
																																													return
																																														(
																																														(obj_t)
																																														BgL_auxz00_7420);
																																												}
																																											}
																																										else
																																											{	/* Eval/evaluate.scm 424 */
																																												obj_t
																																													BgL_arg2187z00_2232;
																																												obj_t
																																													BgL_arg2188z00_2233;
																																												BgL_arg2187z00_2232
																																													=
																																													CAR
																																													(BgL_ez00_69);
																																												BgL_arg2188z00_2233
																																													=
																																													CDR
																																													(BgL_ez00_69);
																																												{
																																													BgL_ev_appz00_bglt
																																														BgL_auxz00_7426;
																																													{
																																														obj_t
																																															BgL_argsz00_7428;
																																														obj_t
																																															BgL_fz00_7427;
																																														BgL_fz00_7427
																																															=
																																															BgL_arg2187z00_2232;
																																														BgL_argsz00_7428
																																															=
																																															BgL_arg2188z00_2233;
																																														BgL_argsz00_1536
																																															=
																																															BgL_argsz00_7428;
																																														BgL_fz00_1535
																																															=
																																															BgL_fz00_7427;
																																														goto
																																															BgL_tagzd2176zd2_1537;
																																													}
																																													return
																																														(
																																														(obj_t)
																																														BgL_auxz00_7426);
																																												}
																																											}
																																									}
																																								else
																																									{	/* Eval/evaluate.scm 424 */
																																										obj_t
																																											BgL_arg2190z00_2235;
																																										obj_t
																																											BgL_arg2191z00_2236;
																																										BgL_arg2190z00_2235
																																											=
																																											CAR
																																											(BgL_ez00_69);
																																										BgL_arg2191z00_2236
																																											=
																																											CDR
																																											(BgL_ez00_69);
																																										{
																																											BgL_ev_appz00_bglt
																																												BgL_auxz00_7432;
																																											{
																																												obj_t
																																													BgL_argsz00_7434;
																																												obj_t
																																													BgL_fz00_7433;
																																												BgL_fz00_7433
																																													=
																																													BgL_arg2190z00_2235;
																																												BgL_argsz00_7434
																																													=
																																													BgL_arg2191z00_2236;
																																												BgL_argsz00_1536
																																													=
																																													BgL_argsz00_7434;
																																												BgL_fz00_1535
																																													=
																																													BgL_fz00_7433;
																																												goto
																																													BgL_tagzd2176zd2_1537;
																																											}
																																											return
																																												(
																																												(obj_t)
																																												BgL_auxz00_7432);
																																										}
																																									}
																																							}
																																						else
																																							{	/* Eval/evaluate.scm 424 */
																																								obj_t
																																									BgL_arg2192z00_2237;
																																								obj_t
																																									BgL_arg2193z00_2238;
																																								BgL_arg2192z00_2237
																																									=
																																									CAR
																																									(BgL_ez00_69);
																																								BgL_arg2193z00_2238
																																									=
																																									CDR
																																									(BgL_ez00_69);
																																								{
																																									BgL_ev_appz00_bglt
																																										BgL_auxz00_7438;
																																									{
																																										obj_t
																																											BgL_argsz00_7440;
																																										obj_t
																																											BgL_fz00_7439;
																																										BgL_fz00_7439
																																											=
																																											BgL_arg2192z00_2237;
																																										BgL_argsz00_7440
																																											=
																																											BgL_arg2193z00_2238;
																																										BgL_argsz00_1536
																																											=
																																											BgL_argsz00_7440;
																																										BgL_fz00_1535
																																											=
																																											BgL_fz00_7439;
																																										goto
																																											BgL_tagzd2176zd2_1537;
																																									}
																																									return
																																										(
																																										(obj_t)
																																										BgL_auxz00_7438);
																																								}
																																							}
																																					}
																																				else
																																					{	/* Eval/evaluate.scm 424 */
																																						obj_t
																																							BgL_cdrzd213398zd2_2239;
																																						BgL_cdrzd213398zd2_2239
																																							=
																																							CDR
																																							(BgL_ez00_69);
																																						if (
																																							(CAR
																																								(BgL_ez00_69)
																																								==
																																								BGl_symbol3332z00zz__evaluatez00))
																																							{	/* Eval/evaluate.scm 424 */
																																								if (PAIRP(BgL_cdrzd213398zd2_2239))
																																									{	/* Eval/evaluate.scm 424 */
																																										obj_t
																																											BgL_arg2197z00_2243;
																																										obj_t
																																											BgL_arg2198z00_2244;
																																										BgL_arg2197z00_2243
																																											=
																																											CAR
																																											(BgL_cdrzd213398zd2_2239);
																																										BgL_arg2198z00_2244
																																											=
																																											CDR
																																											(BgL_cdrzd213398zd2_2239);
																																										{	/* Eval/evaluate.scm 575 */
																																											BgL_ev_unwindzd2protectzd2_bglt
																																												BgL_new1154z00_4594;
																																											{	/* Eval/evaluate.scm 576 */
																																												BgL_ev_unwindzd2protectzd2_bglt
																																													BgL_new1153z00_4595;
																																												BgL_new1153z00_4595
																																													=
																																													(
																																													(BgL_ev_unwindzd2protectzd2_bglt)
																																													BOBJECT
																																													(GC_MALLOC
																																														(sizeof
																																															(struct
																																																BgL_ev_unwindzd2protectzd2_bgl))));
																																												{	/* Eval/evaluate.scm 576 */
																																													long
																																														BgL_arg2414z00_4596;
																																													{	/* Eval/evaluate.scm 576 */
																																														long
																																															BgL_res3150z00_4598;
																																														BgL_res3150z00_4598
																																															=
																																															BGL_CLASS_INDEX
																																															(BGl_ev_unwindzd2protectzd2zz__evaluate_typesz00);
																																														BgL_arg2414z00_4596
																																															=
																																															BgL_res3150z00_4598;
																																													}
																																													BGL_OBJECT_CLASS_NUM_SET
																																														(
																																														((BgL_objectz00_bglt) BgL_new1153z00_4595), BgL_arg2414z00_4596);
																																												}
																																												BgL_new1154z00_4594
																																													=
																																													BgL_new1153z00_4595;
																																											}
																																											{
																																												BgL_ev_exprz00_bglt
																																													BgL_auxz00_7454;
																																												{	/* Eval/evaluate.scm 380 */
																																													obj_t
																																														BgL_arg2431z00_4601;
																																													BgL_arg2431z00_4601
																																														=
																																														BGl_getzd2locationzd2zz__evaluatez00
																																														(BgL_arg2197z00_2243,
																																														BgL_locz00_74);
																																													BgL_auxz00_7454
																																														=
																																														(
																																														(BgL_ev_exprz00_bglt)
																																														BGl_uconvzf2locze70z15zz__evaluatez00
																																														(BgL_wherez00_73,
																																															BgL_globalsz00_71,
																																															BgL_localsz00_70,
																																															BgL_arg2197z00_2243,
																																															BgL_arg2431z00_4601));
																																												}
																																												((((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(BgL_new1154z00_4594))->BgL_ez00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_7454), BUNSPEC);
																																											}
																																											((((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(BgL_new1154z00_4594))->BgL_bodyz00) = ((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BGl_convzd2beginzd2zz__evaluatez00(BgL_arg2198z00_2244, BgL_localsz00_70, BgL_globalsz00_71, BFALSE, BgL_wherez00_73, BgL_locz00_74, ((bool_t) 0)))), BUNSPEC);
																																											return
																																												(
																																												(obj_t)
																																												BgL_new1154z00_4594);
																																										}
																																									}
																																								else
																																									{	/* Eval/evaluate.scm 424 */
																																										obj_t
																																											BgL_arg2199z00_2245;
																																										BgL_arg2199z00_2245
																																											=
																																											CAR
																																											(BgL_ez00_69);
																																										{
																																											BgL_ev_appz00_bglt
																																												BgL_auxz00_7464;
																																											{
																																												obj_t
																																													BgL_argsz00_7466;
																																												obj_t
																																													BgL_fz00_7465;
																																												BgL_fz00_7465
																																													=
																																													BgL_arg2199z00_2245;
																																												BgL_argsz00_7466
																																													=
																																													BgL_cdrzd213398zd2_2239;
																																												BgL_argsz00_1536
																																													=
																																													BgL_argsz00_7466;
																																												BgL_fz00_1535
																																													=
																																													BgL_fz00_7465;
																																												goto
																																													BgL_tagzd2176zd2_1537;
																																											}
																																											return
																																												(
																																												(obj_t)
																																												BgL_auxz00_7464);
																																										}
																																									}
																																							}
																																						else
																																							{	/* Eval/evaluate.scm 424 */
																																								if ((CAR(BgL_ez00_69) == BGl_symbol3334z00zz__evaluatez00))
																																									{	/* Eval/evaluate.scm 424 */
																																										if (PAIRP(BgL_cdrzd213398zd2_2239))
																																											{	/* Eval/evaluate.scm 424 */
																																												obj_t
																																													BgL_arg2204z00_2251;
																																												obj_t
																																													BgL_arg2205z00_2252;
																																												BgL_arg2204z00_2251
																																													=
																																													CAR
																																													(BgL_cdrzd213398zd2_2239);
																																												BgL_arg2205z00_2252
																																													=
																																													CDR
																																													(BgL_cdrzd213398zd2_2239);
																																												{	/* Eval/evaluate.scm 579 */
																																													BgL_ev_withzd2handlerzd2_bglt
																																														BgL_new1157z00_4609;
																																													{	/* Eval/evaluate.scm 580 */
																																														BgL_ev_withzd2handlerzd2_bglt
																																															BgL_new1156z00_4610;
																																														BgL_new1156z00_4610
																																															=
																																															(
																																															(BgL_ev_withzd2handlerzd2_bglt)
																																															BOBJECT
																																															(GC_MALLOC
																																																(sizeof
																																																	(struct
																																																		BgL_ev_withzd2handlerzd2_bgl))));
																																														{	/* Eval/evaluate.scm 580 */
																																															long
																																																BgL_arg2415z00_4611;
																																															{	/* Eval/evaluate.scm 580 */
																																																long
																																																	BgL_res3152z00_4613;
																																																BgL_res3152z00_4613
																																																	=
																																																	BGL_CLASS_INDEX
																																																	(BGl_ev_withzd2handlerzd2zz__evaluate_typesz00);
																																																BgL_arg2415z00_4611
																																																	=
																																																	BgL_res3152z00_4613;
																																															}
																																															BGL_OBJECT_CLASS_NUM_SET
																																																(
																																																((BgL_objectz00_bglt) BgL_new1156z00_4610), BgL_arg2415z00_4611);
																																														}
																																														BgL_new1157z00_4609
																																															=
																																															BgL_new1156z00_4610;
																																													}
																																													{
																																														BgL_ev_exprz00_bglt
																																															BgL_auxz00_7479;
																																														{	/* Eval/evaluate.scm 380 */
																																															obj_t
																																																BgL_arg2431z00_4616;
																																															BgL_arg2431z00_4616
																																																=
																																																BGl_getzd2locationzd2zz__evaluatez00
																																																(BgL_arg2204z00_2251,
																																																BgL_locz00_74);
																																															BgL_auxz00_7479
																																																=
																																																(
																																																(BgL_ev_exprz00_bglt)
																																																BGl_uconvzf2locze70z15zz__evaluatez00
																																																(BgL_wherez00_73,
																																																	BgL_globalsz00_71,
																																																	BgL_localsz00_70,
																																																	BgL_arg2204z00_2251,
																																																	BgL_arg2431z00_4616));
																																														}
																																														((((BgL_ev_withzd2handlerzd2_bglt) COBJECT(BgL_new1157z00_4609))->BgL_handlerz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_7479), BUNSPEC);
																																													}
																																													((((BgL_ev_withzd2handlerzd2_bglt) COBJECT(BgL_new1157z00_4609))->BgL_bodyz00) = ((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BGl_convzd2beginzd2zz__evaluatez00(BgL_arg2205z00_2252, BgL_localsz00_70, BgL_globalsz00_71, BFALSE, BgL_wherez00_73, BgL_locz00_74, ((bool_t) 0)))), BUNSPEC);
																																													return
																																														(
																																														(obj_t)
																																														BgL_new1157z00_4609);
																																												}
																																											}
																																										else
																																											{	/* Eval/evaluate.scm 424 */
																																												obj_t
																																													BgL_arg2206z00_2253;
																																												obj_t
																																													BgL_arg2207z00_2254;
																																												BgL_arg2206z00_2253
																																													=
																																													CAR
																																													(BgL_ez00_69);
																																												BgL_arg2207z00_2254
																																													=
																																													CDR
																																													(BgL_ez00_69);
																																												{
																																													BgL_ev_appz00_bglt
																																														BgL_auxz00_7490;
																																													{
																																														obj_t
																																															BgL_argsz00_7492;
																																														obj_t
																																															BgL_fz00_7491;
																																														BgL_fz00_7491
																																															=
																																															BgL_arg2206z00_2253;
																																														BgL_argsz00_7492
																																															=
																																															BgL_arg2207z00_2254;
																																														BgL_argsz00_1536
																																															=
																																															BgL_argsz00_7492;
																																														BgL_fz00_1535
																																															=
																																															BgL_fz00_7491;
																																														goto
																																															BgL_tagzd2176zd2_1537;
																																													}
																																													return
																																														(
																																														(obj_t)
																																														BgL_auxz00_7490);
																																												}
																																											}
																																									}
																																								else
																																									{	/* Eval/evaluate.scm 424 */
																																										obj_t
																																											BgL_cdrzd213505zd2_2255;
																																										BgL_cdrzd213505zd2_2255
																																											=
																																											CDR
																																											(BgL_ez00_69);
																																										if ((CAR(BgL_ez00_69) == BGl_symbol3336z00zz__evaluatez00))
																																											{	/* Eval/evaluate.scm 424 */
																																												if (PAIRP(BgL_cdrzd213505zd2_2255))
																																													{	/* Eval/evaluate.scm 424 */
																																														obj_t
																																															BgL_cdrzd213510zd2_2259;
																																														BgL_cdrzd213510zd2_2259
																																															=
																																															CDR
																																															(BgL_cdrzd213505zd2_2255);
																																														if (PAIRP(BgL_cdrzd213510zd2_2259))
																																															{	/* Eval/evaluate.scm 424 */
																																																obj_t
																																																	BgL_cdrzd213515zd2_2261;
																																																BgL_cdrzd213515zd2_2261
																																																	=
																																																	CDR
																																																	(BgL_cdrzd213510zd2_2259);
																																																if ((CAR(BgL_cdrzd213510zd2_2259) == BGl_keyword3338z00zz__evaluatez00))
																																																	{	/* Eval/evaluate.scm 424 */
																																																		if (PAIRP(BgL_cdrzd213515zd2_2261))
																																																			{	/* Eval/evaluate.scm 424 */
																																																				obj_t
																																																					BgL_arg2215z00_2265;
																																																				obj_t
																																																					BgL_arg2216z00_2266;
																																																				obj_t
																																																					BgL_arg2217z00_2267;
																																																				BgL_arg2215z00_2265
																																																					=
																																																					CAR
																																																					(BgL_cdrzd213505zd2_2255);
																																																				BgL_arg2216z00_2266
																																																					=
																																																					CAR
																																																					(BgL_cdrzd213515zd2_2261);
																																																				BgL_arg2217z00_2267
																																																					=
																																																					CDR
																																																					(BgL_cdrzd213515zd2_2261);
																																																				{	/* Eval/evaluate.scm 583 */
																																																					BgL_ev_synchroniza7eza7_bglt
																																																						BgL_new1159z00_4630;
																																																					{	/* Eval/evaluate.scm 584 */
																																																						BgL_ev_synchroniza7eza7_bglt
																																																							BgL_new1158z00_4631;
																																																						BgL_new1158z00_4631
																																																							=
																																																							(
																																																							(BgL_ev_synchroniza7eza7_bglt)
																																																							BOBJECT
																																																							(GC_MALLOC
																																																								(sizeof
																																																									(struct
																																																										BgL_ev_synchroniza7eza7_bgl))));
																																																						{	/* Eval/evaluate.scm 584 */
																																																							long
																																																								BgL_arg2416z00_4632;
																																																							{	/* Eval/evaluate.scm 584 */
																																																								long
																																																									BgL_res3156z00_4634;
																																																								BgL_res3156z00_4634
																																																									=
																																																									BGL_CLASS_INDEX
																																																									(BGl_ev_synchroniza7eza7zz__evaluate_typesz00);
																																																								BgL_arg2416z00_4632
																																																									=
																																																									BgL_res3156z00_4634;
																																																							}
																																																							BGL_OBJECT_CLASS_NUM_SET
																																																								(
																																																								((BgL_objectz00_bglt) BgL_new1158z00_4631), BgL_arg2416z00_4632);
																																																						}
																																																						BgL_new1159z00_4630
																																																							=
																																																							BgL_new1158z00_4631;
																																																					}
																																																					((((BgL_ev_synchroniza7eza7_bglt) COBJECT(BgL_new1159z00_4630))->BgL_locz00) = ((obj_t) BgL_locz00_74), BUNSPEC);
																																																					{
																																																						BgL_ev_exprz00_bglt
																																																							BgL_auxz00_7517;
																																																						{	/* Eval/evaluate.scm 380 */
																																																							obj_t
																																																								BgL_arg2431z00_4637;
																																																							BgL_arg2431z00_4637
																																																								=
																																																								BGl_getzd2locationzd2zz__evaluatez00
																																																								(BgL_arg2215z00_2265,
																																																								BgL_locz00_74);
																																																							BgL_auxz00_7517
																																																								=
																																																								(
																																																								(BgL_ev_exprz00_bglt)
																																																								BGl_uconvzf2locze70z15zz__evaluatez00
																																																								(BgL_wherez00_73,
																																																									BgL_globalsz00_71,
																																																									BgL_localsz00_70,
																																																									BgL_arg2215z00_2265,
																																																									BgL_arg2431z00_4637));
																																																						}
																																																						((((BgL_ev_synchroniza7eza7_bglt) COBJECT(BgL_new1159z00_4630))->BgL_mutexz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_7517), BUNSPEC);
																																																					}
																																																					{
																																																						BgL_ev_exprz00_bglt
																																																							BgL_auxz00_7522;
																																																						{	/* Eval/evaluate.scm 380 */
																																																							obj_t
																																																								BgL_arg2431z00_4638;
																																																							BgL_arg2431z00_4638
																																																								=
																																																								BGl_getzd2locationzd2zz__evaluatez00
																																																								(BgL_arg2216z00_2266,
																																																								BgL_locz00_74);
																																																							BgL_auxz00_7522
																																																								=
																																																								(
																																																								(BgL_ev_exprz00_bglt)
																																																								BGl_uconvzf2locze70z15zz__evaluatez00
																																																								(BgL_wherez00_73,
																																																									BgL_globalsz00_71,
																																																									BgL_localsz00_70,
																																																									BgL_arg2216z00_2266,
																																																									BgL_arg2431z00_4638));
																																																						}
																																																						((((BgL_ev_synchroniza7eza7_bglt) COBJECT(BgL_new1159z00_4630))->BgL_prelockz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_7522), BUNSPEC);
																																																					}
																																																					((((BgL_ev_synchroniza7eza7_bglt) COBJECT(BgL_new1159z00_4630))->BgL_bodyz00) = ((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BGl_convzd2beginzd2zz__evaluatez00(BgL_arg2217z00_2267, BgL_localsz00_70, BgL_globalsz00_71, BFALSE, BgL_wherez00_73, BgL_locz00_74, ((bool_t) 0)))), BUNSPEC);
																																																					return
																																																						(
																																																						(obj_t)
																																																						BgL_new1159z00_4630);
																																																				}
																																																			}
																																																		else
																																																			{	/* Eval/evaluate.scm 424 */
																																																				obj_t
																																																					BgL_arg2218z00_2269;
																																																				obj_t
																																																					BgL_arg2219z00_2270;
																																																				BgL_arg2218z00_2269
																																																					=
																																																					CAR
																																																					(
																																																					((obj_t) BgL_cdrzd213505zd2_2255));
																																																				BgL_arg2219z00_2270
																																																					=
																																																					CDR
																																																					(
																																																					((obj_t) BgL_cdrzd213505zd2_2255));
																																																				{
																																																					BgL_ev_synchroniza7eza7_bglt
																																																						BgL_auxz00_7535;
																																																					{
																																																						obj_t
																																																							BgL_bodyz00_7537;
																																																						obj_t
																																																							BgL_mz00_7536;
																																																						BgL_mz00_7536
																																																							=
																																																							BgL_arg2218z00_2269;
																																																						BgL_bodyz00_7537
																																																							=
																																																							BgL_arg2219z00_2270;
																																																						BgL_bodyz00_1529
																																																							=
																																																							BgL_bodyz00_7537;
																																																						BgL_mz00_1528
																																																							=
																																																							BgL_mz00_7536;
																																																						goto
																																																							BgL_tagzd2173zd2_1530;
																																																					}
																																																					return
																																																						(
																																																						(obj_t)
																																																						BgL_auxz00_7535);
																																																				}
																																																			}
																																																	}
																																																else
																																																	{	/* Eval/evaluate.scm 424 */
																																																		obj_t
																																																			BgL_arg2220z00_2272;
																																																		obj_t
																																																			BgL_arg2221z00_2273;
																																																		BgL_arg2220z00_2272
																																																			=
																																																			CAR
																																																			(
																																																			((obj_t) BgL_cdrzd213505zd2_2255));
																																																		BgL_arg2221z00_2273
																																																			=
																																																			CDR
																																																			(
																																																			((obj_t) BgL_cdrzd213505zd2_2255));
																																																		{
																																																			BgL_ev_synchroniza7eza7_bglt
																																																				BgL_auxz00_7543;
																																																			{
																																																				obj_t
																																																					BgL_bodyz00_7545;
																																																				obj_t
																																																					BgL_mz00_7544;
																																																				BgL_mz00_7544
																																																					=
																																																					BgL_arg2220z00_2272;
																																																				BgL_bodyz00_7545
																																																					=
																																																					BgL_arg2221z00_2273;
																																																				BgL_bodyz00_1529
																																																					=
																																																					BgL_bodyz00_7545;
																																																				BgL_mz00_1528
																																																					=
																																																					BgL_mz00_7544;
																																																				goto
																																																					BgL_tagzd2173zd2_1530;
																																																			}
																																																			return
																																																				(
																																																				(obj_t)
																																																				BgL_auxz00_7543);
																																																		}
																																																	}
																																															}
																																														else
																																															{	/* Eval/evaluate.scm 424 */
																																																obj_t
																																																	BgL_arg2223z00_2276;
																																																obj_t
																																																	BgL_arg2224z00_2277;
																																																BgL_arg2223z00_2276
																																																	=
																																																	CAR
																																																	(
																																																	((obj_t) BgL_cdrzd213505zd2_2255));
																																																BgL_arg2224z00_2277
																																																	=
																																																	CDR
																																																	(
																																																	((obj_t) BgL_cdrzd213505zd2_2255));
																																																{
																																																	BgL_ev_synchroniza7eza7_bglt
																																																		BgL_auxz00_7551;
																																																	{
																																																		obj_t
																																																			BgL_bodyz00_7553;
																																																		obj_t
																																																			BgL_mz00_7552;
																																																		BgL_mz00_7552
																																																			=
																																																			BgL_arg2223z00_2276;
																																																		BgL_bodyz00_7553
																																																			=
																																																			BgL_arg2224z00_2277;
																																																		BgL_bodyz00_1529
																																																			=
																																																			BgL_bodyz00_7553;
																																																		BgL_mz00_1528
																																																			=
																																																			BgL_mz00_7552;
																																																		goto
																																																			BgL_tagzd2173zd2_1530;
																																																	}
																																																	return
																																																		(
																																																		(obj_t)
																																																		BgL_auxz00_7551);
																																																}
																																															}
																																													}
																																												else
																																													{	/* Eval/evaluate.scm 424 */
																																														obj_t
																																															BgL_arg2225z00_2278;
																																														BgL_arg2225z00_2278
																																															=
																																															CAR
																																															(BgL_ez00_69);
																																														{
																																															BgL_ev_appz00_bglt
																																																BgL_auxz00_7556;
																																															{
																																																obj_t
																																																	BgL_argsz00_7558;
																																																obj_t
																																																	BgL_fz00_7557;
																																																BgL_fz00_7557
																																																	=
																																																	BgL_arg2225z00_2278;
																																																BgL_argsz00_7558
																																																	=
																																																	BgL_cdrzd213505zd2_2255;
																																																BgL_argsz00_1536
																																																	=
																																																	BgL_argsz00_7558;
																																																BgL_fz00_1535
																																																	=
																																																	BgL_fz00_7557;
																																																goto
																																																	BgL_tagzd2176zd2_1537;
																																															}
																																															return
																																																(
																																																(obj_t)
																																																BgL_auxz00_7556);
																																														}
																																													}
																																											}
																																										else
																																											{	/* Eval/evaluate.scm 424 */
																																												if ((CAR(BgL_ez00_69) == BGl_symbol3293z00zz__evaluatez00))
																																													{	/* Eval/evaluate.scm 424 */
																																														if (PAIRP(BgL_cdrzd213505zd2_2255))
																																															{	/* Eval/evaluate.scm 424 */
																																																obj_t
																																																	BgL_cdrzd213617zd2_2284;
																																																BgL_cdrzd213617zd2_2284
																																																	=
																																																	CDR
																																																	(BgL_cdrzd213505zd2_2255);
																																																if (PAIRP(BgL_cdrzd213617zd2_2284))
																																																	{	/* Eval/evaluate.scm 424 */
																																																		if (NULLP(CDR(BgL_cdrzd213617zd2_2284)))
																																																			{	/* Eval/evaluate.scm 424 */
																																																				obj_t
																																																					BgL_arg2233z00_2288;
																																																				obj_t
																																																					BgL_arg2234z00_2289;
																																																				BgL_arg2233z00_2288
																																																					=
																																																					CAR
																																																					(BgL_cdrzd213505zd2_2255);
																																																				BgL_arg2234z00_2289
																																																					=
																																																					CAR
																																																					(BgL_cdrzd213617zd2_2284);
																																																				{	/* Eval/evaluate.scm 595 */
																																																					obj_t
																																																						BgL_arg2419z00_4659;
																																																					{	/* Eval/evaluate.scm 595 */
																																																						obj_t
																																																							BgL_arg2420z00_4660;
																																																						{	/* Eval/evaluate.scm 595 */
																																																							obj_t
																																																								BgL_arg2421z00_4661;
																																																							obj_t
																																																								BgL_arg2422z00_4662;
																																																							{	/* Eval/evaluate.scm 595 */
																																																								obj_t
																																																									BgL_res3160z00_4665;
																																																								{	/* Eval/evaluate.scm 595 */
																																																									obj_t
																																																										BgL_symbolz00_4663;
																																																									BgL_symbolz00_4663
																																																										=
																																																										BGl_symbol3340z00zz__evaluatez00;
																																																									{	/* Eval/evaluate.scm 595 */
																																																										obj_t
																																																											BgL_arg2636z00_4664;
																																																										BgL_arg2636z00_4664
																																																											=
																																																											SYMBOL_TO_STRING
																																																											(BgL_symbolz00_4663);
																																																										BgL_res3160z00_4665
																																																											=
																																																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																																											(BgL_arg2636z00_4664);
																																																									}
																																																								}
																																																								BgL_arg2421z00_4661
																																																									=
																																																									BgL_res3160z00_4665;
																																																							}
																																																							{	/* Eval/evaluate.scm 595 */
																																																								obj_t
																																																									BgL_res3161z00_4668;
																																																								{	/* Eval/evaluate.scm 595 */
																																																									obj_t
																																																										BgL_arg2636z00_4667;
																																																									BgL_arg2636z00_4667
																																																										=
																																																										SYMBOL_TO_STRING
																																																										(
																																																										((obj_t) BgL_wherez00_73));
																																																									BgL_res3161z00_4668
																																																										=
																																																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																																										(BgL_arg2636z00_4667);
																																																								}
																																																								BgL_arg2422z00_4662
																																																									=
																																																									BgL_res3161z00_4668;
																																																							}
																																																							BgL_arg2420z00_4660
																																																								=
																																																								string_append
																																																								(BgL_arg2421z00_4661,
																																																								BgL_arg2422z00_4662);
																																																						}
																																																						BgL_arg2419z00_4659
																																																							=
																																																							bstring_to_symbol
																																																							(BgL_arg2420z00_4660);
																																																					}
																																																					return
																																																						(
																																																						(obj_t)
																																																						BGl_convzd2lambdaze70z35zz__evaluatez00
																																																						(BgL_globalsz00_71,
																																																							BgL_localsz00_70,
																																																							BgL_ez00_69,
																																																							BgL_locz00_74,
																																																							BgL_arg2233z00_2288,
																																																							BgL_arg2234z00_2289,
																																																							BgL_arg2419z00_4659,
																																																							BFALSE));
																																																				}
																																																			}
																																																		else
																																																			{	/* Eval/evaluate.scm 424 */
																																																				obj_t
																																																					BgL_arg2235z00_2290;
																																																				obj_t
																																																					BgL_arg2236z00_2291;
																																																				BgL_arg2235z00_2290
																																																					=
																																																					CAR
																																																					(BgL_ez00_69);
																																																				BgL_arg2236z00_2291
																																																					=
																																																					CDR
																																																					(BgL_ez00_69);
																																																				{
																																																					BgL_ev_appz00_bglt
																																																						BgL_auxz00_7584;
																																																					{
																																																						obj_t
																																																							BgL_argsz00_7586;
																																																						obj_t
																																																							BgL_fz00_7585;
																																																						BgL_fz00_7585
																																																							=
																																																							BgL_arg2235z00_2290;
																																																						BgL_argsz00_7586
																																																							=
																																																							BgL_arg2236z00_2291;
																																																						BgL_argsz00_1536
																																																							=
																																																							BgL_argsz00_7586;
																																																						BgL_fz00_1535
																																																							=
																																																							BgL_fz00_7585;
																																																						goto
																																																							BgL_tagzd2176zd2_1537;
																																																					}
																																																					return
																																																						(
																																																						(obj_t)
																																																						BgL_auxz00_7584);
																																																				}
																																																			}
																																																	}
																																																else
																																																	{	/* Eval/evaluate.scm 424 */
																																																		obj_t
																																																			BgL_arg2238z00_2293;
																																																		obj_t
																																																			BgL_arg2239z00_2294;
																																																		BgL_arg2238z00_2293
																																																			=
																																																			CAR
																																																			(BgL_ez00_69);
																																																		BgL_arg2239z00_2294
																																																			=
																																																			CDR
																																																			(BgL_ez00_69);
																																																		{
																																																			BgL_ev_appz00_bglt
																																																				BgL_auxz00_7590;
																																																			{
																																																				obj_t
																																																					BgL_argsz00_7592;
																																																				obj_t
																																																					BgL_fz00_7591;
																																																				BgL_fz00_7591
																																																					=
																																																					BgL_arg2238z00_2293;
																																																				BgL_argsz00_7592
																																																					=
																																																					BgL_arg2239z00_2294;
																																																				BgL_argsz00_1536
																																																					=
																																																					BgL_argsz00_7592;
																																																				BgL_fz00_1535
																																																					=
																																																					BgL_fz00_7591;
																																																				goto
																																																					BgL_tagzd2176zd2_1537;
																																																			}
																																																			return
																																																				(
																																																				(obj_t)
																																																				BgL_auxz00_7590);
																																																		}
																																																	}
																																															}
																																														else
																																															{	/* Eval/evaluate.scm 424 */
																																																obj_t
																																																	BgL_arg2240z00_2295;
																																																obj_t
																																																	BgL_arg2241z00_2296;
																																																BgL_arg2240z00_2295
																																																	=
																																																	CAR
																																																	(BgL_ez00_69);
																																																BgL_arg2241z00_2296
																																																	=
																																																	CDR
																																																	(BgL_ez00_69);
																																																{
																																																	BgL_ev_appz00_bglt
																																																		BgL_auxz00_7596;
																																																	{
																																																		obj_t
																																																			BgL_argsz00_7598;
																																																		obj_t
																																																			BgL_fz00_7597;
																																																		BgL_fz00_7597
																																																			=
																																																			BgL_arg2240z00_2295;
																																																		BgL_argsz00_7598
																																																			=
																																																			BgL_arg2241z00_2296;
																																																		BgL_argsz00_1536
																																																			=
																																																			BgL_argsz00_7598;
																																																		BgL_fz00_1535
																																																			=
																																																			BgL_fz00_7597;
																																																		goto
																																																			BgL_tagzd2176zd2_1537;
																																																	}
																																																	return
																																																		(
																																																		(obj_t)
																																																		BgL_auxz00_7596);
																																																}
																																															}
																																													}
																																												else
																																													{	/* Eval/evaluate.scm 424 */
																																														if ((CAR(BgL_ez00_69) == BGl_symbol3342z00zz__evaluatez00))
																																															{	/* Eval/evaluate.scm 424 */
																																																return
																																																	BGl_errorz00zz__errorz00
																																																	(BGl_string3344z00zz__evaluatez00,
																																																	BGl_string3345z00zz__evaluatez00,
																																																	BgL_ez00_69);
																																															}
																																														else
																																															{	/* Eval/evaluate.scm 424 */
																																																obj_t
																																																	BgL_arg2244z00_2299;
																																																obj_t
																																																	BgL_arg2245z00_2300;
																																																BgL_arg2244z00_2299
																																																	=
																																																	CAR
																																																	(BgL_ez00_69);
																																																BgL_arg2245z00_2300
																																																	=
																																																	CDR
																																																	(BgL_ez00_69);
																																																{
																																																	BgL_ev_appz00_bglt
																																																		BgL_auxz00_7606;
																																																	{
																																																		obj_t
																																																			BgL_argsz00_7608;
																																																		obj_t
																																																			BgL_fz00_7607;
																																																		BgL_fz00_7607
																																																			=
																																																			BgL_arg2244z00_2299;
																																																		BgL_argsz00_7608
																																																			=
																																																			BgL_arg2245z00_2300;
																																																		BgL_argsz00_1536
																																																			=
																																																			BgL_argsz00_7608;
																																																		BgL_fz00_1535
																																																			=
																																																			BgL_fz00_7607;
																																																		goto
																																																			BgL_tagzd2176zd2_1537;
																																																	}
																																																	return
																																																		(
																																																		(obj_t)
																																																		BgL_auxz00_7606);
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
											}
									}
							}
					}
				else
					{	/* Eval/evaluate.scm 424 */
						BgL_xz00_1459 = BgL_ez00_69;
						if (SYMBOLP(BgL_xz00_1459))
							{	/* Eval/evaluate.scm 427 */
								obj_t BgL__ortest_1103z00_2322;

								BgL__ortest_1103z00_2322 =
									BGl_convzd2varzd2zz__evaluatez00(BgL_xz00_1459,
									BgL_localsz00_70);
								if (CBOOL(BgL__ortest_1103z00_2322))
									{	/* Eval/evaluate.scm 427 */
										return BgL__ortest_1103z00_2322;
									}
								else
									{	/* Eval/evaluate.scm 195 */
										BgL_ev_globalz00_bglt BgL_new1077z00_3502;

										{	/* Eval/evaluate.scm 196 */
											BgL_ev_globalz00_bglt BgL_new1076z00_3503;

											BgL_new1076z00_3503 =
												((BgL_ev_globalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_ev_globalz00_bgl))));
											{	/* Eval/evaluate.scm 196 */
												long BgL_arg1390z00_3504;

												{	/* Eval/evaluate.scm 196 */
													long BgL_res2928z00_3507;

													BgL_res2928z00_3507 =
														BGL_CLASS_INDEX
														(BGl_ev_globalz00zz__evaluate_typesz00);
													BgL_arg1390z00_3504 = BgL_res2928z00_3507;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1076z00_3503),
													BgL_arg1390z00_3504);
											}
											BgL_new1077z00_3502 = BgL_new1076z00_3503;
										}
										((((BgL_ev_globalz00_bglt) COBJECT(BgL_new1077z00_3502))->
												BgL_locz00) = ((obj_t) BgL_locz00_74), BUNSPEC);
										((((BgL_ev_globalz00_bglt) COBJECT(BgL_new1077z00_3502))->
												BgL_namez00) = ((obj_t) BgL_xz00_1459), BUNSPEC);
										{
											obj_t BgL_auxz00_7621;

											if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_globalsz00_71))
												{	/* Eval/evaluate.scm 198 */
													BgL_auxz00_7621 = BgL_globalsz00_71;
												}
											else
												{	/* Eval/evaluate.scm 198 */
													BgL_auxz00_7621 = BGL_MODULE();
												}
											((((BgL_ev_globalz00_bglt) COBJECT(BgL_new1077z00_3502))->
													BgL_modz00) = ((obj_t) BgL_auxz00_7621), BUNSPEC);
										}
										return ((obj_t) BgL_new1077z00_3502);
									}
							}
						else
							{	/* Eval/evaluate.scm 428 */
								BgL_ev_littz00_bglt BgL_new1105z00_2323;

								{	/* Eval/evaluate.scm 429 */
									BgL_ev_littz00_bglt BgL_new1104z00_2324;

									BgL_new1104z00_2324 =
										((BgL_ev_littz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_ev_littz00_bgl))));
									{	/* Eval/evaluate.scm 429 */
										long BgL_arg2269z00_2325;

										{	/* Eval/evaluate.scm 429 */
											long BgL_res2929z00_3511;

											BgL_res2929z00_3511 =
												BGL_CLASS_INDEX(BGl_ev_littz00zz__evaluate_typesz00);
											BgL_arg2269z00_2325 = BgL_res2929z00_3511;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1104z00_2324),
											BgL_arg2269z00_2325);
									}
									BgL_new1105z00_2323 = BgL_new1104z00_2324;
								}
								((((BgL_ev_littz00_bglt) COBJECT(BgL_new1105z00_2323))->
										BgL_valuez00) = ((obj_t) BgL_xz00_1459), BUNSPEC);
								return ((obj_t) BgL_new1105z00_2323);
							}
					}
			}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zz__evaluatez00(obj_t BgL_wherez00_4949,
		obj_t BgL_globalsz00_4948, obj_t BgL_localsz00_4947, obj_t BgL_locz00_4946,
		obj_t BgL_esz00_2653)
	{
		{	/* Eval/evaluate.scm 386 */
			if (NULLP(BgL_esz00_2653))
				{	/* Eval/evaluate.scm 387 */
					return BNIL;
				}
			else
				{	/* Eval/evaluate.scm 389 */
					obj_t BgL_ez00_2656;

					BgL_ez00_2656 = CAR(((obj_t) BgL_esz00_2653));
					{	/* Eval/evaluate.scm 390 */
						obj_t BgL_arg2437z00_2657;
						obj_t BgL_arg2438z00_2658;

						{	/* Eval/evaluate.scm 390 */
							obj_t BgL_arg2439z00_2659;

							{	/* Eval/evaluate.scm 150 */
								obj_t BgL__ortest_1069z00_3469;

								BgL__ortest_1069z00_3469 =
									BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_ez00_2656);
								if (CBOOL(BgL__ortest_1069z00_3469))
									{	/* Eval/evaluate.scm 150 */
										BgL_arg2439z00_2659 = BgL__ortest_1069z00_3469;
									}
								else
									{	/* Eval/evaluate.scm 151 */
										obj_t BgL__ortest_1070z00_3470;

										BgL__ortest_1070z00_3470 =
											BGl_getzd2sourcezd2locationz00zz__readerz00
											(BgL_esz00_2653);
										if (CBOOL(BgL__ortest_1070z00_3470))
											{	/* Eval/evaluate.scm 151 */
												BgL_arg2439z00_2659 = BgL__ortest_1070z00_3470;
											}
										else
											{	/* Eval/evaluate.scm 151 */
												BgL_arg2439z00_2659 = BgL_locz00_4946;
											}
									}
							}
							BgL_arg2437z00_2657 =
								BGl_convz00zz__evaluatez00(BgL_ez00_2656, BgL_localsz00_4947,
								BgL_globalsz00_4948, BFALSE, BgL_wherez00_4949,
								BgL_arg2439z00_2659, ((bool_t) 0));
						}
						{	/* Eval/evaluate.scm 391 */
							obj_t BgL_arg2441z00_2660;

							BgL_arg2441z00_2660 = CDR(((obj_t) BgL_esz00_2653));
							BgL_arg2438z00_2658 =
								BGl_loopze70ze7zz__evaluatez00(BgL_wherez00_4949,
								BgL_globalsz00_4948, BgL_localsz00_4947, BgL_locz00_4946,
								BgL_arg2441z00_2660);
						}
						return MAKE_YOUNG_PAIR(BgL_arg2437z00_2657, BgL_arg2438z00_2658);
					}
				}
		}

	}



/* conv-vals~0 */
	obj_t BGl_convzd2valsze70z35zz__evaluatez00(obj_t BgL_wherez00_4951,
		obj_t BgL_globalsz00_4950, obj_t BgL_lz00_2471, obj_t BgL_varsz00_2472,
		obj_t BgL_localsz00_2473, obj_t BgL_locz00_2474)
	{
		{	/* Eval/evaluate.scm 502 */
			if (NULLP(BgL_lz00_2471))
				{	/* Eval/evaluate.scm 498 */
					return BNIL;
				}
			else
				{	/* Eval/evaluate.scm 500 */
					obj_t BgL_locz00_3667;

					{	/* Eval/evaluate.scm 500 */
						obj_t BgL_arg2349z00_3668;

						BgL_arg2349z00_3668 = CAR(((obj_t) BgL_lz00_2471));
						{	/* Eval/evaluate.scm 144 */
							obj_t BgL__ortest_1068z00_3678;

							BgL__ortest_1068z00_3678 =
								BGl_getzd2sourcezd2locationz00zz__readerz00
								(BgL_arg2349z00_3668);
							if (CBOOL(BgL__ortest_1068z00_3678))
								{	/* Eval/evaluate.scm 144 */
									BgL_locz00_3667 = BgL__ortest_1068z00_3678;
								}
							else
								{	/* Eval/evaluate.scm 144 */
									BgL_locz00_3667 = BgL_locz00_2474;
								}
						}
					}
					{	/* Eval/evaluate.scm 501 */
						obj_t BgL_arg2340z00_3669;
						obj_t BgL_arg2341z00_3670;

						{	/* Eval/evaluate.scm 501 */
							obj_t BgL_arg2342z00_3671;

							{	/* Eval/evaluate.scm 501 */
								obj_t BgL_pairz00_3684;

								{	/* Eval/evaluate.scm 501 */
									obj_t BgL_pairz00_3683;

									BgL_pairz00_3683 = CAR(((obj_t) BgL_lz00_2471));
									BgL_pairz00_3684 = CDR(BgL_pairz00_3683);
								}
								BgL_arg2342z00_3671 = CAR(BgL_pairz00_3684);
							}
							BgL_arg2340z00_3669 =
								BGl_convz00zz__evaluatez00(BgL_arg2342z00_3671,
								BgL_localsz00_2473, BgL_globalsz00_4950, BFALSE,
								BgL_wherez00_4951, BgL_locz00_3667, ((bool_t) 0));
						}
						{	/* Eval/evaluate.scm 502 */
							obj_t BgL_arg2343z00_3672;
							obj_t BgL_arg2345z00_3673;
							obj_t BgL_arg2346z00_3674;

							BgL_arg2343z00_3672 = CDR(((obj_t) BgL_lz00_2471));
							BgL_arg2345z00_3673 = CDR(((obj_t) BgL_varsz00_2472));
							{	/* Eval/evaluate.scm 502 */
								obj_t BgL_arg2347z00_3675;

								BgL_arg2347z00_3675 = CAR(((obj_t) BgL_varsz00_2472));
								BgL_arg2346z00_3674 =
									MAKE_YOUNG_PAIR(BgL_arg2347z00_3675, BgL_localsz00_2473);
							}
							BgL_arg2341z00_3670 =
								BGl_convzd2valsze70z35zz__evaluatez00(BgL_wherez00_4951,
								BgL_globalsz00_4950, BgL_arg2343z00_3672, BgL_arg2345z00_3673,
								BgL_arg2346z00_3674, BgL_locz00_3667);
						}
						return MAKE_YOUNG_PAIR(BgL_arg2340z00_3669, BgL_arg2341z00_3670);
					}
				}
		}

	}



/* conv-lambda~0 */
	BgL_ev_absz00_bglt BGl_convzd2lambdaze70z35zz__evaluatez00(obj_t
		BgL_globalsz00_4955, obj_t BgL_localsz00_4954, obj_t BgL_ez00_4953,
		obj_t BgL_locz00_4952, obj_t BgL_formalsz00_2662, obj_t BgL_bodyz00_2663,
		obj_t BgL_wherez00_2664, obj_t BgL_typez00_2665)
	{
		{	/* Eval/evaluate.scm 404 */
			{
				obj_t BgL_lz00_2696;

				{	/* Eval/evaluate.scm 406 */
					obj_t BgL_argsz00_2668;

					BgL_lz00_2696 =
						BGl_dssslzd2formalszd2ze3schemezd2typedzd2formalsze3zz__dssslz00
						(BgL_formalsz00_2662, BGl_errorzd2envzd2zz__errorz00, ((bool_t) 1));
					{
						obj_t BgL_rz00_2700;
						obj_t BgL_flatz00_2701;
						long BgL_arityz00_2702;

						BgL_rz00_2700 = BgL_lz00_2696;
						BgL_flatz00_2701 = BNIL;
						BgL_arityz00_2702 = ((long) 0);
					BgL_zc3z04anonymousza32455ze3z87_2703:
						if (NULLP(BgL_rz00_2700))
							{	/* Eval/evaluate.scm 399 */
								obj_t BgL_val0_1203z00_2705;

								BgL_val0_1203z00_2705 = bgl_reverse_bang(BgL_flatz00_2701);
								{	/* Eval/evaluate.scm 399 */
									int BgL_res2916z00_3473;

									{	/* Eval/evaluate.scm 399 */
										int BgL_tmpz00_7672;

										BgL_tmpz00_7672 = (int) (((long) 2));
										BgL_res2916z00_3473 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_7672);
									} BgL_res2916z00_3473;
								}
								{	/* Eval/evaluate.scm 399 */
									obj_t BgL_auxz00_7677;
									int BgL_tmpz00_7675;

									BgL_auxz00_7677 = BINT(BgL_arityz00_2702);
									BgL_tmpz00_7675 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_7675, BgL_auxz00_7677);
								}
								BgL_argsz00_2668 = BgL_val0_1203z00_2705;
							}
						else
							{	/* Eval/evaluate.scm 398 */
								if (PAIRP(BgL_rz00_2700))
									{	/* Eval/evaluate.scm 403 */
										obj_t BgL_arg2458z00_2708;
										obj_t BgL_arg2460z00_2709;
										long BgL_arg2461z00_2710;

										BgL_arg2458z00_2708 = CDR(BgL_rz00_2700);
										BgL_arg2460z00_2709 =
											MAKE_YOUNG_PAIR(BGl_untypezd2identzd2zz__evaluatez00(CAR
												(BgL_rz00_2700)), BgL_flatz00_2701);
										BgL_arg2461z00_2710 = (BgL_arityz00_2702 + ((long) 1));
										{
											long BgL_arityz00_7689;
											obj_t BgL_flatz00_7688;
											obj_t BgL_rz00_7687;

											BgL_rz00_7687 = BgL_arg2458z00_2708;
											BgL_flatz00_7688 = BgL_arg2460z00_2709;
											BgL_arityz00_7689 = BgL_arg2461z00_2710;
											BgL_arityz00_2702 = BgL_arityz00_7689;
											BgL_flatz00_2701 = BgL_flatz00_7688;
											BgL_rz00_2700 = BgL_rz00_7687;
											goto BgL_zc3z04anonymousza32455ze3z87_2703;
										}
									}
								else
									{	/* Eval/evaluate.scm 401 */
										obj_t BgL_val0_1205z00_2713;
										long BgL_val1_1206z00_2714;

										{	/* Eval/evaluate.scm 401 */
											obj_t BgL_arg2464z00_2715;

											BgL_arg2464z00_2715 =
												MAKE_YOUNG_PAIR(BGl_untypezd2identzd2zz__evaluatez00
												(BgL_rz00_2700), BgL_flatz00_2701);
											BgL_val0_1205z00_2713 =
												bgl_reverse_bang(BgL_arg2464z00_2715);
										}
										BgL_val1_1206z00_2714 = (((long) -1) - BgL_arityz00_2702);
										{	/* Eval/evaluate.scm 401 */
											int BgL_res2920z00_3481;

											{	/* Eval/evaluate.scm 401 */
												int BgL_tmpz00_7694;

												BgL_tmpz00_7694 = (int) (((long) 2));
												BgL_res2920z00_3481 =
													BGL_MVALUES_NUMBER_SET(BgL_tmpz00_7694);
											} BgL_res2920z00_3481;
										}
										{	/* Eval/evaluate.scm 401 */
											obj_t BgL_auxz00_7699;
											int BgL_tmpz00_7697;

											BgL_auxz00_7699 = BINT(BgL_val1_1206z00_2714);
											BgL_tmpz00_7697 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_tmpz00_7697, BgL_auxz00_7699);
										}
										BgL_argsz00_2668 = BgL_val0_1205z00_2713;
					}}}
					{	/* Eval/evaluate.scm 407 */
						obj_t BgL_arityz00_2669;

						{	/* Eval/evaluate.scm 408 */
							int BgL_tmpz00_7703;

							BgL_tmpz00_7703 = (int) (((long) 1));
							BgL_arityz00_2669 = BGL_MVALUES_VAL(BgL_tmpz00_7703);
						}
						{	/* Eval/evaluate.scm 408 */
							obj_t BgL_varsz00_2670;
							obj_t BgL_bodyz00_2671;
							obj_t BgL_nlocz00_2672;

							if (NULLP(BgL_argsz00_2668))
								{	/* Eval/evaluate.scm 408 */
									BgL_varsz00_2670 = BNIL;
								}
							else
								{	/* Eval/evaluate.scm 408 */
									obj_t BgL_head1209z00_2679;

									{	/* Eval/evaluate.scm 408 */
										obj_t BgL_res2922z00_3483;

										BgL_res2922z00_3483 = MAKE_YOUNG_PAIR(BNIL, BNIL);
										BgL_head1209z00_2679 = BgL_res2922z00_3483;
									}
									{
										obj_t BgL_l1207z00_2681;
										obj_t BgL_tail1210z00_2682;

										BgL_l1207z00_2681 = BgL_argsz00_2668;
										BgL_tail1210z00_2682 = BgL_head1209z00_2679;
									BgL_zc3z04anonymousza32446ze3z87_2683:
										if (NULLP(BgL_l1207z00_2681))
											{	/* Eval/evaluate.scm 408 */
												BgL_varsz00_2670 = CDR(BgL_head1209z00_2679);
											}
										else
											{	/* Eval/evaluate.scm 408 */
												obj_t BgL_newtail1211z00_2685;

												{	/* Eval/evaluate.scm 408 */
													BgL_ev_varz00_bglt BgL_arg2449z00_2687;

													{	/* Eval/evaluate.scm 408 */
														obj_t BgL_vz00_2688;

														BgL_vz00_2688 = CAR(((obj_t) BgL_l1207z00_2681));
														{	/* Eval/evaluate.scm 409 */
															BgL_ev_varz00_bglt BgL_new1099z00_2689;

															{	/* Eval/evaluate.scm 411 */
																BgL_ev_varz00_bglt BgL_new1098z00_2690;

																BgL_new1098z00_2690 =
																	((BgL_ev_varz00_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_ev_varz00_bgl))));
																{	/* Eval/evaluate.scm 411 */
																	long BgL_arg2450z00_2691;

																	{	/* Eval/evaluate.scm 411 */
																		long BgL_res2924z00_3488;

																		BgL_res2924z00_3488 =
																			BGL_CLASS_INDEX
																			(BGl_ev_varz00zz__evaluate_typesz00);
																		BgL_arg2450z00_2691 = BgL_res2924z00_3488;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1098z00_2690),
																		BgL_arg2450z00_2691);
																}
																BgL_new1099z00_2689 = BgL_new1098z00_2690;
															}
															((((BgL_ev_varz00_bglt)
																		COBJECT(BgL_new1099z00_2689))->
																	BgL_namez00) =
																((obj_t) CAR(((obj_t) BgL_vz00_2688))),
																BUNSPEC);
															((((BgL_ev_varz00_bglt)
																		COBJECT(BgL_new1099z00_2689))->BgL_effz00) =
																((obj_t) BFALSE), BUNSPEC);
															((((BgL_ev_varz00_bglt)
																		COBJECT(BgL_new1099z00_2689))->
																	BgL_typez00) =
																((obj_t) CDR(((obj_t) BgL_vz00_2688))),
																BUNSPEC);
															BgL_arg2449z00_2687 = BgL_new1099z00_2689;
													}}
													{	/* Eval/evaluate.scm 408 */
														obj_t BgL_res2925z00_3493;

														BgL_res2925z00_3493 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_arg2449z00_2687), BNIL);
														BgL_newtail1211z00_2685 = BgL_res2925z00_3493;
												}}
												SET_CDR(BgL_tail1210z00_2682, BgL_newtail1211z00_2685);
												{	/* Eval/evaluate.scm 408 */
													obj_t BgL_arg2448z00_2686;

													BgL_arg2448z00_2686 =
														CDR(((obj_t) BgL_l1207z00_2681));
													{
														obj_t BgL_tail1210z00_7731;
														obj_t BgL_l1207z00_7730;

														BgL_l1207z00_7730 = BgL_arg2448z00_2686;
														BgL_tail1210z00_7731 = BgL_newtail1211z00_2685;
														BgL_tail1210z00_2682 = BgL_tail1210z00_7731;
														BgL_l1207z00_2681 = BgL_l1207z00_7730;
														goto BgL_zc3z04anonymousza32446ze3z87_2683;
													}
												}
											}
									}
								}
							BgL_bodyz00_2671 =
								BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00
								(BgL_ez00_4953, BgL_formalsz00_2662,
								BGl_typezd2checkszd2zz__evaluatez00(BgL_argsz00_2668,
									BgL_argsz00_2668,
									BGl_typezd2resultzd2zz__evaluatez00(BgL_typez00_2665,
										BgL_bodyz00_2663, BgL_locz00_4952), BgL_locz00_4952,
									BgL_wherez00_2664), BGl_errorzd2envzd2zz__errorz00);
							{	/* Eval/evaluate.scm 144 */
								obj_t BgL__ortest_1068z00_3496;

								BgL__ortest_1068z00_3496 =
									BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_bodyz00_2663);
								if (CBOOL(BgL__ortest_1068z00_3496))
									{	/* Eval/evaluate.scm 144 */
										BgL_nlocz00_2672 = BgL__ortest_1068z00_3496;
									}
								else
									{	/* Eval/evaluate.scm 144 */
										BgL_nlocz00_2672 = BgL_locz00_4952;
									}
							}
							{	/* Eval/evaluate.scm 417 */
								BgL_ev_absz00_bglt BgL_new1102z00_2673;

								{	/* Eval/evaluate.scm 418 */
									BgL_ev_absz00_bglt BgL_new1100z00_2675;

									BgL_new1100z00_2675 =
										((BgL_ev_absz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_ev_absz00_bgl))));
									{	/* Eval/evaluate.scm 418 */
										long BgL_arg2444z00_2676;

										{	/* Eval/evaluate.scm 418 */
											long BgL_res2926z00_3498;

											BgL_res2926z00_3498 =
												BGL_CLASS_INDEX(BGl_ev_absz00zz__evaluate_typesz00);
											BgL_arg2444z00_2676 = BgL_res2926z00_3498;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1100z00_2675),
											BgL_arg2444z00_2676);
									}
									BgL_new1102z00_2673 = BgL_new1100z00_2675;
								}
								((((BgL_ev_absz00_bglt) COBJECT(BgL_new1102z00_2673))->
										BgL_locz00) = ((obj_t) BgL_locz00_4952), BUNSPEC);
								((((BgL_ev_absz00_bglt) COBJECT(BgL_new1102z00_2673))->
										BgL_wherez00) = ((obj_t) BgL_wherez00_2664), BUNSPEC);
								((((BgL_ev_absz00_bglt) COBJECT(BgL_new1102z00_2673))->
										BgL_arityz00) = ((obj_t) BgL_arityz00_2669), BUNSPEC);
								((((BgL_ev_absz00_bglt) COBJECT(BgL_new1102z00_2673))->
										BgL_varsz00) = ((obj_t) BgL_varsz00_2670), BUNSPEC);
								{
									BgL_ev_exprz00_bglt BgL_auxz00_7746;

									{	/* Eval/evaluate.scm 422 */
										obj_t BgL_arg2443z00_2674;

										BgL_arg2443z00_2674 =
											BGl_appendzd221011zd2zz__evaluatez00(BgL_varsz00_2670,
											BgL_localsz00_4954);
										BgL_auxz00_7746 =
											((BgL_ev_exprz00_bglt)
											BGl_convz00zz__evaluatez00(BgL_bodyz00_2671,
												BgL_arg2443z00_2674, BgL_globalsz00_4955, BTRUE,
												BgL_wherez00_2664, BgL_nlocz00_2672, ((bool_t) 0)));
									}
									((((BgL_ev_absz00_bglt) COBJECT(BgL_new1102z00_2673))->
											BgL_bodyz00) =
										((BgL_ev_exprz00_bglt) BgL_auxz00_7746), BUNSPEC);
								}
								((((BgL_ev_absz00_bglt) COBJECT(BgL_new1102z00_2673))->
										BgL_siza7eza7) = ((int) (int) (((long) 0))), BUNSPEC);
								((((BgL_ev_absz00_bglt) COBJECT(BgL_new1102z00_2673))->
										BgL_bindz00) = ((obj_t) BNIL), BUNSPEC);
								((((BgL_ev_absz00_bglt) COBJECT(BgL_new1102z00_2673))->
										BgL_freez00) = ((obj_t) BNIL), BUNSPEC);
								((((BgL_ev_absz00_bglt) COBJECT(BgL_new1102z00_2673))->
										BgL_innerz00) = ((obj_t) BNIL), BUNSPEC);
								((((BgL_ev_absz00_bglt) COBJECT(BgL_new1102z00_2673))->
										BgL_boxesz00) = ((obj_t) BNIL), BUNSPEC);
								return BgL_new1102z00_2673;
							}
						}
					}
				}
			}
		}

	}



/* uconv/loc~0 */
	obj_t BGl_uconvzf2locze70z15zz__evaluatez00(obj_t BgL_wherez00_4962,
		obj_t BgL_globalsz00_4961, obj_t BgL_localsz00_4960, obj_t BgL_ez00_2640,
		obj_t BgL_locz00_2641)
	{
		{	/* Eval/evaluate.scm 377 */
			return
				BGl_convz00zz__evaluatez00(BgL_ez00_2640, BgL_localsz00_4960,
				BgL_globalsz00_4961, BFALSE, BgL_wherez00_4962, BgL_locz00_2641,
				((bool_t) 0));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__evaluatez00()
	{
		{	/* Eval/evaluate.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__evaluatez00()
	{
		{	/* Eval/evaluate.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__evaluatez00()
	{
		{	/* Eval/evaluate.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__evaluatez00()
	{
		{	/* Eval/evaluate.scm 15 */
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 121046386),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 251315035),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 443936798),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 439352636),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581), BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945), BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874), BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048), BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694), BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845), BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long)
					228151379), BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__ppz00(((long) 233942106),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 220647683),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 177147628),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__expandz00(((long) 414007030),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 528345319),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__evcompilez00(((long) 492753248),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__everrorz00(((long) 375872251),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__evmodulez00(((long) 505900559),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__evaluate_typesz00(((long) 0),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__evaluate_avarz00(((long) 483789088),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__evaluate_fsiza7eza7(((long)
					121298808), BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			BGl_modulezd2initializa7ationz75zz__evaluate_uncompz00(((long) 193509655),
				BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
			return BGl_modulezd2initializa7ationz75zz__evaluate_compz00(((long)
					444000681), BSTRING_TO_STRING(BGl_string3346z00zz__evaluatez00));
		}

	}

#ifdef __cplusplus
}
#endif
