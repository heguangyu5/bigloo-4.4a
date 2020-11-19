/*===========================================================================*/
/*   (Eval/eval.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/eval.scm -indent -o objs/obj_u/Eval/eval.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_z62exceptionz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
	}                      *BgL_z62exceptionz62_bglt;

	typedef struct BgL_z62errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                  *BgL_z62errorz62_bglt;


	BGL_EXPORTED_DECL obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	extern obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	static obj_t BGl_z62schemezd2reportzd2environmentz62zz__evalz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31926ze3ze5zz__evalz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31756ze3ze5zz__evalz00(obj_t, obj_t);
	static obj_t BGl_symbol2802z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2804z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2806z00zz__evalz00 = BUNSPEC;
	extern obj_t BGl_appendzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2definezd2patternz62zz__evalz00(obj_t, obj_t);
	extern bool_t reset_eof(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31757ze3ze5zz__evalz00(obj_t);
	static obj_t BGl_symbol2810z00zz__evalz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_nativezd2replzd2printerz00zz__evalz00();
	static obj_t BGl_z62defaultzd2replzd2printerz62zz__evalz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2818z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_zc3z04exitza31921ze3ze70z60zz__evalz00(obj_t, obj_t);
	extern obj_t BGl_raisez00zz__errorz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__evalz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31936ze3ze5zz__evalz00(obj_t, obj_t);
	static obj_t BGl_symbol2901z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2903z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2905z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2824z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2907z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2827z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2828z00zz__evalz00 = BUNSPEC;
	extern obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_getzd2evalzd2readerz00zz__evalz00();
	static obj_t BGl_keyword2875z00zz__evalz00 = BUNSPEC;
	extern obj_t BGl_evalzd2modulezd2zz__evmodulez00();
	static obj_t BGl_za2transcriptza2z00zz__evalz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_expandzd2definezd2macroz00zz__evalz00(obj_t,
		obj_t);
	static obj_t BGl_symbol2910z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2913z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2915z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_zc3z04exitza31402ze3ze70z60zz__evalz00(obj_t, obj_t);
	static obj_t BGl_symbol2917z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2919z00zz__evalz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_schemezd2reportzd2environmentz00zz__evalz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2userzd2passza2zd2zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2921z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2923z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2925z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_z62bytezd2codezd2runz62zz__evalz00(obj_t, obj_t);
	static obj_t BGl_symbol2848z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_z62expandzd2definezd2expanderz62zz__evalz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__evalz00();
	static obj_t BGl_zc3z04exitza31627ze3ze70z60zz__evalz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evalz00zz__evalz00(obj_t, obj_t);
	static obj_t BGl_symbol2936z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2855z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2939z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2858z00zz__evalz00 = BUNSPEC;
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_notifyzd2interruptzd2zz__errorz00(int);
	static obj_t BGl_evalzd2exceptionzd2handlerz00zz__evalz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__evalz00();
	static obj_t BGl_internalzd2replzd2zz__evalz00();
	extern obj_t BGl_evmodulezd2checkzd2unboundz00zz__evmodulez00(obj_t, obj_t);
	extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_symbol2941z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2860z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2865z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2948z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2867z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_zc3z04exitza31752ze3ze70z60zz__evalz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3z04exitza31564ze3ze70z60zz__evalz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zz__evalz00();
	BGL_EXPORTED_DECL obj_t BGl_identifierzd2syntaxzd2zz__evalz00();
	extern obj_t string_to_obj(obj_t, obj_t, obj_t);
	static obj_t BGl_z62expandzd2definezd2hygienezd2macrozb0zz__evalz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2950z00zz__evalz00 = BUNSPEC;
	extern bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_symbol2953z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2872z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2955z00zz__evalz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2userzd2passzd2nameza2z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2957z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2877z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2799z00zz__evalz00 = BUNSPEC;
	extern obj_t BGl_z62exceptionz62zz__objectz00;
	static obj_t BGl_symbol2961z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2963z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2967z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2887z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2969z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2889z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_z62interactionzd2environmentzb0zz__evalz00(obj_t);
	extern obj_t BGl_errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62intrhdlz62zz__evalz00(obj_t, obj_t);
	static obj_t BGl__evalz00zz__evalz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_setzd2replzd2printerz12z12zz__evalz00(obj_t);
	static obj_t BGl_evalzd2initzd2zz__evalz00();
	extern obj_t reset_console(obj_t);
	static obj_t BGl_symbol2971z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2891z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2893z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2975z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2895z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2977z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2897z00zz__evalz00 = BUNSPEC;
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_symbol2899z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31403ze3ze5zz__evalz00(obj_t);
	extern bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_evmeaningz00zz__evmeaningz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_debug_repl(obj_t);
	extern obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
	extern char *BGl_datez00zz__osz00();
	static obj_t BGl_z62transcriptzd2offzb0zz__evalz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_identifierzd2syntaxzd2setz12z12zz__evalz00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__evalz00();
	static obj_t BGl_symbol2990z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_findzd2filezd2zz__evalz00(obj_t);
	static obj_t BGl_symbol2995z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol2998z00zz__evalz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_loadz00zz__evalz00(obj_t, obj_t);
	extern obj_t BGl_everrorz00zz__everrorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62getzd2prompterzb0zz__evalz00(obj_t);
	static obj_t BGl_evalzf2expanderzf2zz__evalz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31406ze3ze5zz__evalz00(obj_t, obj_t);
	static obj_t BGl_z62getzd2replzd2errorzd2notifierzb0zz__evalz00(obj_t);
	extern obj_t BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t obj_to_string(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_nullzd2environmentzd2zz__evalz00(obj_t);
	extern obj_t bgl_close_input_port(obj_t);
	static obj_t BGl_z62quitz62zz__evalz00(obj_t, obj_t);
	static obj_t BGl_z62evalzd2evaluatezd2setz12z70zz__evalz00(obj_t, obj_t);
	static obj_t BGl_za2replzd2quitza2zd2zz__evalz00 = BUNSPEC;
	extern obj_t BGl_signalz00zz__osz00(int, obj_t);
	static obj_t BGl_z62setzd2prompterz12za2zz__evalz00(obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62notifyzd2assertzd2failz62zz__evalz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t bgl_close_output_port(obj_t);
	static obj_t BGl__loadz00zz__evalz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_quitz00zz__evalz00();
	BGL_EXPORTED_DECL obj_t BGl_bytezd2codezd2runz00zz__evalz00(obj_t);
	static obj_t BGl_z62bytezd2codezd2evaluatez62zz__evalz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_transcriptzd2offzd2zz__evalz00();
	static obj_t BGl_z62transcriptzd2onzb0zz__evalz00(obj_t, obj_t);
	static obj_t BGl_z62setzd2replzd2errorzd2notifierz12za2zz__evalz00(obj_t,
		obj_t);
	extern obj_t BGl_bigloozd2loadzd2readerz00zz__paramz00();
	extern obj_t BGl_exitz00zz__errorz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31443ze3ze5zz__evalz00(obj_t);
	static obj_t BGl__bytezd2codezd2compilez00zz__evalz00(obj_t, obj_t);
	extern obj_t BGl_exceptionzd2notifyzd2zz__objectz00(obj_t);
	extern obj_t BGl_errorzd2notifyzd2zz__errorz00(obj_t);
	extern obj_t BGl_definezd2primopzd2refzf2locz12ze0zz__evenvz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_evepairifyz00zz__prognz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31630ze3ze5zz__evalz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31371ze3ze5zz__evalz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31517ze3ze5zz__evalz00(obj_t);
	static obj_t BGl_symbol3002z00zz__evalz00 = BUNSPEC;
	extern obj_t BGl_expandz00zz__expandz00(obj_t);
	extern obj_t BGl_installzd2expanderzd2zz__macroz00(obj_t, obj_t);
	extern obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evalz12z12zz__evalz00(obj_t, obj_t);
	static obj_t BGl_z62identifierzd2syntaxzb0zz__evalz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evmodulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evprimopz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__everrorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evaluatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evmeaningz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evcompilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__install_expandersz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__macroz00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__intextz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__pp_circlez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__typez00(long, char *);
	static obj_t BGl_z62nullzd2environmentzb0zz__evalz00(obj_t, obj_t);
	static obj_t BGl_zc3z04exitza31416ze3ze70z60zz__evalz00(obj_t);
	extern obj_t BGl_z62errorz62zz__objectz00;
	static obj_t BGl_defaultzd2evaluatezd2zz__evalz00 = BUNSPEC;
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	extern bool_t fexists(char *);
	static obj_t BGl_z62zc3z04anonymousza31631ze3ze5zz__evalz00(obj_t);
	extern obj_t BGl_evcompilez00zz__evcompilez00(obj_t, obj_t, obj_t, obj_t,
		bool_t, obj_t, bool_t, bool_t);
	static obj_t BGl_za2replzd2numza2zd2zz__evalz00 = BUNSPEC;
	extern obj_t BGl_extendzd2rzd2macrozd2envzd2zz__match_normaliza7eza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_loadqz00zz__evalz00(obj_t, obj_t);
	static obj_t BGl_loadvz00zz__evalz00(obj_t, obj_t, obj_t, obj_t);
	extern int bgl_debug();
	static obj_t BGl_z62identifierzd2syntaxzd2setz12z70zz__evalz00(obj_t, obj_t);
	static obj_t BGl_z62setzd2replzd2printerz12z70zz__evalz00(obj_t, obj_t);
	static obj_t BGl_list2909z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zz__evalz00();
	BGL_EXPORTED_DEF obj_t BGl_za2loadzd2verboseza2zd2zz__evalz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31439ze3ze5zz__evalz00(obj_t, obj_t);
	static obj_t BGl_za2replzd2printerza2zd2zz__evalz00 = BUNSPEC;
	static obj_t BGl__evalz12z12zz__evalz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__evalz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__evalz00();
	static obj_t BGl_z62zc3z04anonymousza31456ze3ze5zz__evalz00(obj_t);
	static obj_t BGl__loadqz00zz__evalz00(obj_t, obj_t);
	static obj_t BGl_z62replz62zz__evalz00(obj_t);
	static obj_t BGl_z62defaultzd2environmentzb0zz__evalz00(obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_displayzd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31554ze3ze5zz__evalz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31619ze3ze5zz__evalz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62czd2debugzd2replz62zz__evalz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_interactionzd2environmentzd2zz__evalz00();
	BGL_EXPORTED_DEF obj_t BGl_za2loadzd2pathza2zd2zz__evalz00 = BUNSPEC;
	static obj_t BGl_list2938z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31369ze3ze5zz__evalz00(obj_t, obj_t);
	extern obj_t BGl_getzd2signalzd2handlerz00zz__osz00(int);
	static obj_t BGl_za2czd2debugzd2replzd2valueza2zd2zz__evalz00 = BUNSPEC;
	extern bool_t BGl_evmodulezf3zf3zz__evmodulez00(obj_t);
	static obj_t BGl_z62nativezd2replzd2printerz62zz__evalz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_replz00zz__evalz00();
	extern obj_t BGl_getzd2sourcezd2locationz00zz__readerz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31459ze3ze5zz__evalz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2definezd2expanderz00zz__evalz00(obj_t,
		obj_t);
	static obj_t BGl_list2871z00zz__evalz00 = BUNSPEC;
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_setzd2prompterz12zc0zz__evalz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bytezd2codezd2compilez00zz__evalz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2replzd2errorzd2notifierz12zc0zz__evalz00(obj_t);
	static obj_t BGl_z62zc3z04za2promptza2za31341ze3ze5zz__evalz00(obj_t, obj_t);
	extern obj_t BGl_evcompilezd2errorzd2zz__evcompilez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2definezd2macroz62zz__evalz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04za2replzd2quitza2za31345ze3z37zz__evalz00(obj_t,
		obj_t);
	static obj_t BGl_list2960z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_zc3z04exitza31436ze3ze70z60zz__evalz00(obj_t, obj_t);
	extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	static obj_t BGl_loopze70ze7zz__evalz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evalzd2evaluatezd2setz12z12zz__evalz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2definezd2patternz00zz__evalz00(obj_t);
	static obj_t BGl_z62quit2500z62zz__evalz00(obj_t);
	static obj_t BGl_list2974z00zz__evalz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_getzd2replzd2errorzd2notifierzd2zz__evalz00();
	static obj_t BGl_errze70ze7zz__evalz00(obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_transcriptzd2onzd2zz__evalz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31745ze3ze5zz__evalz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31567ze3ze5zz__evalz00(obj_t, obj_t);
	extern obj_t BGl_installzd2allzd2expandersz12z12zz__install_expandersz00();
	extern obj_t bstring_to_keyword(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_notifyzd2assertzd2failz00zz__evalz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_withzd2exceptionzd2handlerz00zz__errorz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2nilza2z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31568ze3ze5zz__evalz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2prompterzd2zz__evalz00();
	static obj_t BGl_za2identifierzd2syntaxza2zd2zz__evalz00 = BUNSPEC;
	static obj_t BGl_za2promptza2z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31925ze3ze5zz__evalz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2definezd2hygienezd2macrozd2zz__evalz00(obj_t, obj_t);
	static obj_t BGl_zc3z04exitza31365ze3ze70z60zz__evalz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_nativezd2replzd2printerzd2envzd2zz__evalz00,
		BgL_bgl_za762nativeza7d2repl3013z00,
		BGl_z62nativezd2replzd2printerz62zz__evalz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_nullzd2environmentzd2envz00zz__evalz00,
		BgL_bgl_za762nullza7d2enviro3014z00,
		BGl_z62nullzd2environmentzb0zz__evalz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzd2replzd2printerz12zd2envzc0zz__evalz00,
		BgL_bgl_za762setza7d2replza7d23015za7,
		BGl_z62setzd2replzd2printerz12z70zz__evalz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_notifyzd2assertzd2failzd2envzd2zz__evalz00,
		BgL_bgl_za762notifyza7d2asse3016z00,
		BGl_z62notifyzd2assertzd2failz62zz__evalz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bytezd2codezd2compilezd2envzd2zz__evalz00,
		BgL_bgl__byteza7d2codeza7d2c3017z00, opt_generic_entry,
		BGl__bytezd2codezd2compilez00zz__evalz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_identifierzd2syntaxzd2envz00zz__evalz00,
		BgL_bgl_za762identifierza7d23018z00,
		BGl_z62identifierzd2syntaxzb0zz__evalz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_schemezd2reportzd2environmentzd2envzd2zz__evalz00,
		BgL_bgl_za762schemeza7d2repo3019z00,
		BGl_z62schemezd2reportzd2environmentz62zz__evalz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evalzd2envzd2zz__evalz00,
		BgL_bgl__evalza700za7za7__eval3020za7, opt_generic_entry,
		BGl__evalz00zz__evalz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_replzd2envzd2zz__evalz00,
		BgL_bgl_za762replza762za7za7__ev3021z00, BGl_z62replz62zz__evalz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_czd2debugzd2replzd2envzd2zz__evalz00,
		BgL_bgl_za762cza7d2debugza7d2r3022za7,
		BGl_z62czd2debugzd2replz62zz__evalz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzd2prompterz12zd2envz12zz__evalz00,
		BgL_bgl_za762setza7d2prompte3023z00, BGl_z62setzd2prompterz12za2zz__evalz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bytezd2codezd2runzd2envzd2zz__evalz00,
		BgL_bgl_za762byteza7d2codeza7d3024za7,
		BGl_z62bytezd2codezd2runz62zz__evalz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2definezd2patternzd2envzd2zz__evalz00,
		BgL_bgl_za762expandza7d2defi3025z00,
		BGl_z62expandzd2definezd2patternz62zz__evalz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2definezd2expanderzd2envzd2zz__evalz00,
		BgL_bgl_za762expandza7d2defi3026z00,
		BGl_z62expandzd2definezd2expanderz62zz__evalz00, 0L, BUNSPEC, 2);
	extern obj_t BGl_displayzd2circlezd2envz00zz__pp_circlez00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_loadzd2envzd2zz__evalz00,
		BgL_bgl__loadza700za7za7__eval3027za7, opt_generic_entry,
		BGl__loadz00zz__evalz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2replzd2errorzd2notifierzd2envz00zz__evalz00,
		BgL_bgl_za762getza7d2replza7d23028za7,
		BGl_z62getzd2replzd2errorzd2notifierzb0zz__evalz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_transcriptzd2onzd2envz00zz__evalz00,
		BgL_bgl_za762transcriptza7d23029z00, BGl_z62transcriptzd2onzb0zz__evalz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2800z00zz__evalz00,
		BgL_bgl_string2800za700za7za7_3030za7, "bigloo-r5rs", 11);
	      DEFINE_STRING(BGl_string2801z00zz__evalz00,
		BgL_bgl_string2801za700za7za7_3031za7, ":=> ", 4);
	      DEFINE_STRING(BGl_string2803z00zz__evalz00,
		BgL_bgl_string2803za700za7za7_3032za7, "_", 1);
	      DEFINE_STRING(BGl_string2805z00zz__evalz00,
		BgL_bgl_string2805za700za7za7_3033za7, "classic", 7);
	      DEFINE_STRING(BGl_string2807z00zz__evalz00,
		BgL_bgl_string2807za700za7za7_3034za7, "new", 3);
	      DEFINE_STRING(BGl_string2808z00zz__evalz00,
		BgL_bgl_string2808za700za7za7_3035za7, "eval-evaluate-set!", 18);
	      DEFINE_STRING(BGl_string2809z00zz__evalz00,
		BgL_bgl_string2809za700za7za7_3036za7, "Illegal compiler", 16);
	      DEFINE_STRING(BGl_string2811z00zz__evalz00,
		BgL_bgl_string2811za700za7za7_3037za7, "interaction-environment", 23);
	      DEFINE_STRING(BGl_string2812z00zz__evalz00,
		BgL_bgl_string2812za700za7za7_3038za7, "/tmp/4.4a/runtime/Eval/eval.scm",
		31);
	      DEFINE_STRING(BGl_string2813z00zz__evalz00,
		BgL_bgl_string2813za700za7za7_3039za7, "_eval", 5);
	      DEFINE_STRING(BGl_string2814z00zz__evalz00,
		BgL_bgl_string2814za700za7za7_3040za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2815z00zz__evalz00,
		BgL_bgl_string2815za700za7za7_3041za7, "eval", 4);
	      DEFINE_STRING(BGl_string2816z00zz__evalz00,
		BgL_bgl_string2816za700za7za7_3042za7, "_eval!", 6);
	      DEFINE_STRING(BGl_string2817z00zz__evalz00,
		BgL_bgl_string2817za700za7za7_3043za7, "eval!", 5);
	      DEFINE_STRING(BGl_string2819z00zz__evalz00,
		BgL_bgl_string2819za700za7za7_3044za7, "at", 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_identifierzd2syntaxzd2setz12zd2envzc0zz__evalz00,
		BgL_bgl_za762identifierza7d23045z00,
		BGl_z62identifierzd2syntaxzd2setz12z70zz__evalz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2900z00zz__evalz00,
		BgL_bgl_string2900za700za7za7_3046za7, "f", 1);
	      DEFINE_STRING(BGl_string2820z00zz__evalz00,
		BgL_bgl_string2820za700za7za7_3047za7, "&byte-code-run", 14);
	      DEFINE_STRING(BGl_string2902z00zz__evalz00,
		BgL_bgl_string2902za700za7za7_3048za7, "set!", 4);
	      DEFINE_STRING(BGl_string2821z00zz__evalz00,
		BgL_bgl_string2821za700za7za7_3049za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2822z00zz__evalz00,
		BgL_bgl_string2822za700za7za7_3050za7, "scheme-report-environment", 25);
	      DEFINE_STRING(BGl_string2904z00zz__evalz00,
		BgL_bgl_string2904za700za7za7_3051za7, "l", 1);
	      DEFINE_STRING(BGl_string2823z00zz__evalz00,
		BgL_bgl_string2823za700za7za7_3052za7, "bint", 4);
	      DEFINE_STRING(BGl_string2906z00zz__evalz00,
		BgL_bgl_string2906za700za7za7_3053za7, "match-case", 10);
	      DEFINE_STRING(BGl_string2825z00zz__evalz00,
		BgL_bgl_string2825za700za7za7_3054za7, "Version not supported", 21);
	      DEFINE_STRING(BGl_string2826z00zz__evalz00,
		BgL_bgl_string2826za700za7za7_3055za7, "null-environment", 16);
	      DEFINE_STRING(BGl_string2908z00zz__evalz00,
		BgL_bgl_string2908za700za7za7_3056za7, "when", 4);
	      DEFINE_STRING(BGl_string2829z00zz__evalz00,
		BgL_bgl_string2829za700za7za7_3057za7, "set-prompter!", 13);
	      DEFINE_STRING(BGl_string2911z00zz__evalz00,
		BgL_bgl_string2911za700za7za7_3058za7, "cdr", 3);
	      DEFINE_STRING(BGl_string2830z00zz__evalz00,
		BgL_bgl_string2830za700za7za7_3059za7,
		"argument has to be a procedure of 1 argument", 44);
	      DEFINE_STRING(BGl_string2912z00zz__evalz00,
		BgL_bgl_string2912za700za7za7_3060za7, "TAG-254", 7);
	      DEFINE_STRING(BGl_string2831z00zz__evalz00,
		BgL_bgl_string2831za700za7za7_3061za7, "&set-prompter!", 14);
	      DEFINE_STRING(BGl_string2832z00zz__evalz00,
		BgL_bgl_string2832za700za7za7_3062za7, "get-prompter", 12);
	      DEFINE_STRING(BGl_string2914z00zz__evalz00,
		BgL_bgl_string2914za700za7za7_3063za7, "let*", 4);
	      DEFINE_STRING(BGl_string2833z00zz__evalz00,
		BgL_bgl_string2833za700za7za7_3064za7, "<@exit:1402>~0", 14);
	      DEFINE_STRING(BGl_string2916z00zz__evalz00,
		BgL_bgl_string2916za700za7za7_3065za7, "n", 1);
	      DEFINE_STRING(BGl_string2835z00zz__evalz00,
		BgL_bgl_string2835za700za7za7_3066za7, "<@anonymous:1406>", 17);
	      DEFINE_STRING(BGl_string2836z00zz__evalz00,
		BgL_bgl_string2836za700za7za7_3067za7, "input-port", 10);
	      DEFINE_STRING(BGl_string2918z00zz__evalz00,
		BgL_bgl_string2918za700za7za7_3068za7, "ne", 2);
	      DEFINE_STRING(BGl_string2837z00zz__evalz00,
		BgL_bgl_string2837za700za7za7_3069za7, "set-repl-error-notifier!", 24);
	      DEFINE_STRING(BGl_string2838z00zz__evalz00,
		BgL_bgl_string2838za700za7za7_3070za7, "procedure of 1 argument expected",
		32);
	      DEFINE_STRING(BGl_string2839z00zz__evalz00,
		BgL_bgl_string2839za700za7za7_3071za7, "get-repl-error-notifier", 23);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2834z00zz__evalz00,
		BgL_bgl_za762za7c3za704anonymo3072za7,
		BGl_z62zc3z04anonymousza31406ze3ze5zz__evalz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2920z00zz__evalz00,
		BgL_bgl_string2920za700za7za7_3073za7, "evepairify*", 11);
	      DEFINE_STRING(BGl_string2840z00zz__evalz00,
		BgL_bgl_string2840za700za7za7_3074za7, "pair", 4);
	      DEFINE_STRING(BGl_string2922z00zz__evalz00,
		BgL_bgl_string2922za700za7za7_3075za7, "let", 3);
	      DEFINE_STRING(BGl_string2841z00zz__evalz00,
		BgL_bgl_string2841za700za7za7_3076za7, "liip", 4);
	      DEFINE_STRING(BGl_string2842z00zz__evalz00,
		BgL_bgl_string2842za700za7za7_3077za7, "output-port", 11);
	      DEFINE_STRING(BGl_string2924z00zz__evalz00,
		BgL_bgl_string2924za700za7za7_3078za7, "lambda", 6);
	      DEFINE_STRING(BGl_string2843z00zz__evalz00,
		BgL_bgl_string2843za700za7za7_3079za7, ";; ", 3);
	      DEFINE_STRING(BGl_string2844z00zz__evalz00,
		BgL_bgl_string2844za700za7za7_3080za7, "handler1072", 11);
	      DEFINE_STRING(BGl_string2926z00zz__evalz00,
		BgL_bgl_string2926za700za7za7_3081za7, "define-macro", 12);
	      DEFINE_STRING(BGl_string2845z00zz__evalz00,
		BgL_bgl_string2845za700za7za7_3082za7, "&error", 6);
	      DEFINE_STRING(BGl_string2927z00zz__evalz00,
		BgL_bgl_string2927za700za7za7_3083za7, "expand-define-macro", 19);
	      DEFINE_STRING(BGl_string2846z00zz__evalz00,
		BgL_bgl_string2846za700za7za7_3084za7, "intrhdl", 7);
	      DEFINE_STRING(BGl_string2928z00zz__evalz00,
		BgL_bgl_string2928za700za7za7_3085za7, "Illegal `define-macro' syntax", 29);
	      DEFINE_STRING(BGl_string2929z00zz__evalz00,
		BgL_bgl_string2929za700za7za7_3086za7, "TAG-312", 7);
	      DEFINE_STRING(BGl_string2849z00zz__evalz00,
		BgL_bgl_string2849za700za7za7_3087za7, "set-repl-printer!", 17);
	      DEFINE_STRING(BGl_string2930z00zz__evalz00,
		BgL_bgl_string2930za700za7za7_3088za7, "handler1116", 11);
	      DEFINE_STRING(BGl_string2931z00zz__evalz00,
		BgL_bgl_string2931za700za7za7_3089za7, "<@exit:1627>~0", 14);
	      DEFINE_STRING(BGl_string2850z00zz__evalz00,
		BgL_bgl_string2850za700za7za7_3090za7, "Illegal repl-printer (wrong arity)",
		34);
	      DEFINE_STRING(BGl_string2932z00zz__evalz00,
		BgL_bgl_string2932za700za7za7_3091za7, "TAG-330", 7);
	      DEFINE_STRING(BGl_string2851z00zz__evalz00,
		BgL_bgl_string2851za700za7za7_3092za7, "&set-repl-printer!", 18);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2847z00zz__evalz00,
		BgL_bgl_za762za7c3za704anonymo3093za7,
		BGl_z62zc3z04anonymousza31459ze3ze5zz__evalz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2933z00zz__evalz00,
		BgL_bgl_string2933za700za7za7_3094za7, "<@anonymous:1824>", 17);
	      DEFINE_STRING(BGl_string2852z00zz__evalz00,
		BgL_bgl_string2852za700za7za7_3095za7, "?* ", 3);
	      DEFINE_STRING(BGl_string2934z00zz__evalz00,
		BgL_bgl_string2934za700za7za7_3096za7, "map", 3);
	      DEFINE_STRING(BGl_string2853z00zz__evalz00,
		BgL_bgl_string2853za700za7za7_3097za7, "loop", 4);
	      DEFINE_STRING(BGl_string2935z00zz__evalz00,
		BgL_bgl_string2935za700za7za7_3098za7, "list", 4);
	      DEFINE_STRING(BGl_string2854z00zz__evalz00,
		BgL_bgl_string2854za700za7za7_3099za7, "quit", 4);
	      DEFINE_STRING(BGl_string2937z00zz__evalz00,
		BgL_bgl_string2937za700za7za7_3100za7, "x", 1);
	      DEFINE_STRING(BGl_string2856z00zz__evalz00,
		BgL_bgl_string2856za700za7za7_3101za7, "find-file", 9);
	      DEFINE_STRING(BGl_string2857z00zz__evalz00,
		BgL_bgl_string2857za700za7za7_3102za7, "Illegal file name", 17);
	      DEFINE_STRING(BGl_string2859z00zz__evalz00,
		BgL_bgl_string2859za700za7za7_3103za7, "load", 4);
	extern obj_t BGl_expandzd2envzd2zz__expandz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2definezd2hygienezd2macrozd2envz00zz__evalz00,
		BgL_bgl_za762expandza7d2defi3104z00,
		BGl_z62expandzd2definezd2hygienezd2macrozb0zz__evalz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2940z00zz__evalz00,
		BgL_bgl_string2940za700za7za7_3105za7, "quote", 5);
	      DEFINE_STRING(BGl_string2942z00zz__evalz00,
		BgL_bgl_string2942za700za7za7_3106za7, "define-hygiene-macro", 20);
	      DEFINE_STRING(BGl_string2861z00zz__evalz00,
		BgL_bgl_string2861za700za7za7_3107za7, "loadq", 5);
	      DEFINE_STRING(BGl_string2943z00zz__evalz00,
		BgL_bgl_string2943za700za7za7_3108za7, "expand-define-hygiene-macro", 27);
	      DEFINE_STRING(BGl_string2862z00zz__evalz00,
		BgL_bgl_string2862za700za7za7_3109za7, "/tmp/4.4a/runtime/Ieee/port.scm",
		31);
	      DEFINE_STRING(BGl_string2944z00zz__evalz00,
		BgL_bgl_string2944za700za7za7_3110za7,
		"Illegal `define-hygiene-macro' syntax", 37);
	      DEFINE_STRING(BGl_string2863z00zz__evalz00,
		BgL_bgl_string2863za700za7za7_3111za7, "loadv", 5);
	      DEFINE_STRING(BGl_string2945z00zz__evalz00,
		BgL_bgl_string2945za700za7za7_3112za7, "TAG-361", 7);
	      DEFINE_STRING(BGl_string2864z00zz__evalz00,
		BgL_bgl_string2864za700za7za7_3113za7, "epair", 5);
	      DEFINE_STRING(BGl_string2946z00zz__evalz00,
		BgL_bgl_string2946za700za7za7_3114za7, "handler1137", 11);
	      DEFINE_STRING(BGl_string2947z00zz__evalz00,
		BgL_bgl_string2947za700za7za7_3115za7, "<@exit:1752>~0", 14);
	      DEFINE_STRING(BGl_string2866z00zz__evalz00,
		BgL_bgl_string2866za700za7za7_3116za7, "module", 6);
	      DEFINE_STRING(BGl_string2949z00zz__evalz00,
		BgL_bgl_string2949za700za7za7_3117za7, "null?", 5);
	      DEFINE_STRING(BGl_string2868z00zz__evalz00,
		BgL_bgl_string2868za700za7za7_3118za7, "main", 4);
	      DEFINE_STRING(BGl_string2869z00zz__evalz00,
		BgL_bgl_string2869za700za7za7_3119za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string2951z00zz__evalz00,
		BgL_bgl_string2951za700za7za7_3120za7, "not", 3);
	      DEFINE_STRING(BGl_string2870z00zz__evalz00,
		BgL_bgl_string2870za700za7za7_3121za7, "Illegal main clause", 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evalzd2evaluatezd2setz12zd2envzc0zz__evalz00,
		BgL_bgl_za762evalza7d2evalua3122z00,
		BGl_z62evalzd2evaluatezd2setz12z70zz__evalz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2952z00zz__evalz00,
		BgL_bgl_string2952za700za7za7_3123za7, "Too many arguments provided", 27);
	      DEFINE_STRING(BGl_string2954z00zz__evalz00,
		BgL_bgl_string2954za700za7za7_3124za7, "if", 2);
	      DEFINE_STRING(BGl_string2873z00zz__evalz00,
		BgL_bgl_string2873za700za7za7_3125za7, "command-line", 12);
	      DEFINE_STRING(BGl_string2874z00zz__evalz00,
		BgL_bgl_string2874za700za7za7_3126za7, "Can't open file", 15);
	      DEFINE_STRING(BGl_string2956z00zz__evalz00,
		BgL_bgl_string2956za700za7za7_3127za7, "pair?", 5);
	      DEFINE_STRING(BGl_string2876z00zz__evalz00,
		BgL_bgl_string2876za700za7za7_3128za7, "expand-define-expander", 22);
	      DEFINE_STRING(BGl_string2958z00zz__evalz00,
		BgL_bgl_string2958za700za7za7_3129za7, "car", 3);
	      DEFINE_STRING(BGl_string2959z00zz__evalz00,
		BgL_bgl_string2959za700za7za7_3130za7, "Missing value for argument", 26);
	      DEFINE_STRING(BGl_string2878z00zz__evalz00,
		BgL_bgl_string2878za700za7za7_3131za7, "define-expander", 15);
	      DEFINE_STRING(BGl_string2879z00zz__evalz00,
		BgL_bgl_string2879za700za7za7_3132za7, "Illegal `define-expander' syntax",
		32);
	      DEFINE_STRING(BGl_string2798z00zz__evalz00,
		BgL_bgl_string2798za700za7za7_3133za7, "User", 4);
	      DEFINE_STRING(BGl_string2880z00zz__evalz00,
		BgL_bgl_string2880za700za7za7_3134za7, "TAG-118", 7);
	      DEFINE_STRING(BGl_string2962z00zz__evalz00,
		BgL_bgl_string2962za700za7za7_3135za7, "unquote", 7);
	      DEFINE_STRING(BGl_string2881z00zz__evalz00,
		BgL_bgl_string2881za700za7za7_3136za7, "&exception", 10);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2796z00zz__evalz00,
		BgL_bgl_za762za7c3za704za7a2prom3137z00,
		BGl_z62zc3z04za2promptza2za31341ze3ze5zz__evalz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2882z00zz__evalz00,
		BgL_bgl_string2882za700za7za7_3138za7, "handler1096", 11);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2797z00zz__evalz00,
		BgL_bgl_za762za7c3za704za7a2repl3139z00,
		BGl_z62zc3z04za2replzd2quitza2za31345ze3z37zz__evalz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2964z00zz__evalz00,
		BgL_bgl_string2964za700za7za7_3140za7, "id", 2);
	      DEFINE_STRING(BGl_string2883z00zz__evalz00,
		BgL_bgl_string2883za700za7za7_3141za7, "<@anonymous:1554>", 17);
	      DEFINE_STRING(BGl_string2965z00zz__evalz00,
		BgL_bgl_string2965za700za7za7_3142za7, "loop~0", 6);
	      DEFINE_STRING(BGl_string2884z00zz__evalz00,
		BgL_bgl_string2884za700za7za7_3143za7,
		"wrong number of argument for expand", 35);
	      DEFINE_STRING(BGl_string2966z00zz__evalz00,
		BgL_bgl_string2966za700za7za7_3144za7, "Illegal macro parameter", 23);
	      DEFINE_STRING(BGl_string2885z00zz__evalz00,
		BgL_bgl_string2885za700za7za7_3145za7, "illegal expander", 16);
	      DEFINE_STRING(BGl_string2886z00zz__evalz00,
		BgL_bgl_string2886za700za7za7_3146za7, "<@exit:1564>~0", 14);
	      DEFINE_STRING(BGl_string2968z00zz__evalz00,
		BgL_bgl_string2968za700za7za7_3147za7, "string?", 7);
	      DEFINE_STRING(BGl_string2888z00zz__evalz00,
		BgL_bgl_string2888za700za7za7_3148za7, "e", 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2prompterzd2envz00zz__evalz00,
		BgL_bgl_za762getza7d2prompte3149z00, BGl_z62getzd2prompterzb0zz__evalz00,
		0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2970z00zz__evalz00,
		BgL_bgl_string2970za700za7za7_3150za7, "error/location", 14);
	      DEFINE_STRING(BGl_string2890z00zz__evalz00,
		BgL_bgl_string2890za700za7za7_3151za7, "x1", 2);
	      DEFINE_STRING(BGl_string2972z00zz__evalz00,
		BgL_bgl_string2972za700za7za7_3152za7, "error", 5);
	      DEFINE_STRING(BGl_string2973z00zz__evalz00,
		BgL_bgl_string2973za700za7za7_3153za7, "expand-define-pattern", 21);
	      DEFINE_STRING(BGl_string2892z00zz__evalz00,
		BgL_bgl_string2892za700za7za7_3154za7, "epair?", 6);
	      DEFINE_STRING(BGl_string2894z00zz__evalz00,
		BgL_bgl_string2894za700za7za7_3155za7, "cer", 3);
	      DEFINE_STRING(BGl_string2976z00zz__evalz00,
		BgL_bgl_string2976za700za7za7_3156za7, "dummy", 5);
	      DEFINE_STRING(BGl_string2896z00zz__evalz00,
		BgL_bgl_string2896za700za7za7_3157za7, "?l", 2);
	      DEFINE_STRING(BGl_string2978z00zz__evalz00,
		BgL_bgl_string2978za700za7za7_3158za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string2979z00zz__evalz00,
		BgL_bgl_string2979za700za7za7_3159za7, "-----------------------", 23);
	      DEFINE_STRING(BGl_string2898z00zz__evalz00,
		BgL_bgl_string2898za700za7za7_3160za7, "?f", 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evalz12zd2envzc0zz__evalz00,
		BgL_bgl__evalza712za712za7za7__e3161z00, opt_generic_entry,
		BGl__evalz12z12zz__evalz00, BFALSE, -1);
	      DEFINE_STRING(BGl_string2980z00zz__evalz00,
		BgL_bgl_string2980za700za7za7_3162za7, "Variables' value are : ", 23);
	      DEFINE_STRING(BGl_string2981z00zz__evalz00,
		BgL_bgl_string2981za700za7za7_3163za7, "   ", 3);
	      DEFINE_STRING(BGl_string2982z00zz__evalz00,
		BgL_bgl_string2982za700za7za7_3164za7, " : ", 3);
	      DEFINE_STRING(BGl_string2983z00zz__evalz00,
		BgL_bgl_string2983za700za7za7_3165za7, "<@anonymous:1930>", 17);
	      DEFINE_STRING(BGl_string2984z00zz__evalz00,
		BgL_bgl_string2984za700za7za7_3166za7, "for-each", 8);
	      DEFINE_STRING(BGl_string2985z00zz__evalz00,
		BgL_bgl_string2985za700za7za7_3167za7, "notify-assert-fail", 18);
	      DEFINE_STRING(BGl_string2987z00zz__evalz00,
		BgL_bgl_string2987za700za7za7_3168za7, "*:=> ", 5);
	      DEFINE_STRING(BGl_string2988z00zz__evalz00,
		BgL_bgl_string2988za700za7za7_3169za7, "assert", 6);
	      DEFINE_STRING(BGl_string2989z00zz__evalz00,
		BgL_bgl_string2989za700za7za7_3170za7, "assertion failed", 16);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_loadqzd2envzd2zz__evalz00,
		BgL_bgl__loadqza700za7za7__eva3171za7, opt_generic_entry,
		BGl__loadqz00zz__evalz00, BFALSE, -1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2986z00zz__evalz00,
		BgL_bgl_za762za7c3za704anonymo3172za7,
		BGl_z62zc3z04anonymousza31936ze3ze5zz__evalz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2991z00zz__evalz00,
		BgL_bgl_string2991za700za7za7_3173za7, "&identifier-syntax-set!", 23);
	      DEFINE_STRING(BGl_string2992z00zz__evalz00,
		BgL_bgl_string2992za700za7za7_3174za7, "symbol", 6);
	      DEFINE_STRING(BGl_string2993z00zz__evalz00,
		BgL_bgl_string2993za700za7za7_3175za7, "transcript-on", 13);
	      DEFINE_STRING(BGl_string2994z00zz__evalz00,
		BgL_bgl_string2994za700za7za7_3176za7, ";; session started on ", 22);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_transcriptzd2offzd2envz00zz__evalz00,
		BgL_bgl_za762transcriptza7d23177z00, BGl_z62transcriptzd2offzb0zz__evalz00,
		0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2996z00zz__evalz00,
		BgL_bgl_string2996za700za7za7_3178za7, "A transcript is already in use",
		30);
	      DEFINE_STRING(BGl_string2997z00zz__evalz00,
		BgL_bgl_string2997za700za7za7_3179za7, "&transcript-on", 14);
	      DEFINE_STRING(BGl_string2999z00zz__evalz00,
		BgL_bgl_string2999za700za7za7_3180za7, "transcript-off", 14);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_defaultzd2replzd2printerzd2envzd2zz__evalz00,
		BgL_bgl_za762defaultza7d2rep3181z00, va_generic_entry,
		BGl_z62defaultzd2replzd2printerz62zz__evalz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_defaultzd2environmentzd2envz00zz__evalz00,
		BgL_bgl_za762defaultza7d2env3182z00,
		BGl_z62defaultzd2environmentzb0zz__evalz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_quitzd2envzd2zz__evalz00,
		BgL_bgl_za762quit2500za762za7za73183z00, BGl_z62quit2500z62zz__evalz00, 0L,
		BUNSPEC, 0);
	extern obj_t BGl_expandz12zd2envzc0zz__expandz00;
	extern obj_t BGl_evaluate2zd2envzd2zz__evaluatez00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_bytezd2codezd2evaluatezd2envzd2zz__evalz00,
		BgL_bgl_za762byteza7d2codeza7d3184za7,
		BGl_z62bytezd2codezd2evaluatez62zz__evalz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2replzd2errorzd2notifierz12zd2envz12zz__evalz00,
		BgL_bgl_za762setza7d2replza7d23185za7,
		BGl_z62setzd2replzd2errorzd2notifierz12za2zz__evalz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2definezd2macrozd2envzd2zz__evalz00,
		BgL_bgl_za762expandza7d2defi3186z00,
		BGl_z62expandzd2definezd2macroz62zz__evalz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3000z00zz__evalz00,
		BgL_bgl_string3000za700za7za7_3187za7, "No transcript is currently in use",
		33);
	      DEFINE_STRING(BGl_string3001z00zz__evalz00,
		BgL_bgl_string3001za700za7za7_3188za7, "__eval", 6);
	      DEFINE_STRING(BGl_string3003z00zz__evalz00,
		BgL_bgl_string3003za700za7za7_3189za7, "*c-debug-repl-value*", 20);
	      DEFINE_STRING(BGl_string3004z00zz__evalz00,
		BgL_bgl_string3004za700za7za7_3190za7, "Eval/eval.scm", 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_interactionzd2environmentzd2envz00zz__evalz00,
		BgL_bgl_za762interactionza7d3191z00,
		BGl_z62interactionzd2environmentzb0zz__evalz00, 0L, BUNSPEC, 0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol2802z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2804z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2806z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2810z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2818z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2901z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2903z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2905z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2824z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2907z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2827z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2828z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_keyword2875z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_za2transcriptza2z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2910z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2913z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2915z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2917z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2919z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_za2userzd2passza2zd2zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2921z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2923z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2925z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2848z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2936z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2855z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2939z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2858z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2941z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2860z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2865z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2948z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2867z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2950z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2953z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2872z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2955z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_za2userzd2passzd2nameza2z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2957z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2877z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2799z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2961z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2963z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2967z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2887z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2969z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2889z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2971z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2891z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2893z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2975z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2895z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2977z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2897z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2899z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2990z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2995z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol2998z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_za2replzd2quitza2zd2zz__evalz00));
		     ADD_ROOT((void *) (&BGl_symbol3002z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_defaultzd2evaluatezd2zz__evalz00));
		     ADD_ROOT((void *) (&BGl_za2replzd2numza2zd2zz__evalz00));
		     ADD_ROOT((void *) (&BGl_list2909z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_za2loadzd2verboseza2zd2zz__evalz00));
		     ADD_ROOT((void *) (&BGl_za2replzd2printerza2zd2zz__evalz00));
		     ADD_ROOT((void *) (&BGl_za2loadzd2pathza2zd2zz__evalz00));
		     ADD_ROOT((void *) (&BGl_list2938z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_za2czd2debugzd2replzd2valueza2zd2zz__evalz00));
		     ADD_ROOT((void *) (&BGl_list2871z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_list2960z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_list2974z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_za2nilza2z00zz__evalz00));
		     ADD_ROOT((void *) (&BGl_za2identifierzd2syntaxza2zd2zz__evalz00));
		     ADD_ROOT((void *) (&BGl_za2promptza2z00zz__evalz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long
		BgL_checksumz00_4279, char *BgL_fromz00_4280)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__evalz00))
				{
					BGl_requirezd2initializa7ationz75zz__evalz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__evalz00();
					BGl_cnstzd2initzd2zz__evalz00();
					BGl_importedzd2moduleszd2initz00zz__evalz00();
					BGl_evalzd2initzd2zz__evalz00();
					return BGl_toplevelzd2initzd2zz__evalz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__evalz00()
	{
		{	/* Eval/eval.scm 18 */
			BGl_symbol2799z00zz__evalz00 =
				bstring_to_symbol(BGl_string2800z00zz__evalz00);
			BGl_symbol2802z00zz__evalz00 =
				bstring_to_symbol(BGl_string2803z00zz__evalz00);
			BGl_symbol2804z00zz__evalz00 =
				bstring_to_symbol(BGl_string2805z00zz__evalz00);
			BGl_symbol2806z00zz__evalz00 =
				bstring_to_symbol(BGl_string2807z00zz__evalz00);
			BGl_symbol2810z00zz__evalz00 =
				bstring_to_symbol(BGl_string2811z00zz__evalz00);
			BGl_symbol2818z00zz__evalz00 =
				bstring_to_symbol(BGl_string2819z00zz__evalz00);
			BGl_symbol2824z00zz__evalz00 =
				bstring_to_symbol(BGl_string2822z00zz__evalz00);
			BGl_symbol2827z00zz__evalz00 =
				bstring_to_symbol(BGl_string2826z00zz__evalz00);
			BGl_symbol2828z00zz__evalz00 =
				bstring_to_symbol(BGl_string2829z00zz__evalz00);
			BGl_symbol2848z00zz__evalz00 =
				bstring_to_symbol(BGl_string2849z00zz__evalz00);
			BGl_symbol2855z00zz__evalz00 =
				bstring_to_symbol(BGl_string2856z00zz__evalz00);
			BGl_symbol2858z00zz__evalz00 =
				bstring_to_symbol(BGl_string2859z00zz__evalz00);
			BGl_symbol2860z00zz__evalz00 =
				bstring_to_symbol(BGl_string2861z00zz__evalz00);
			BGl_symbol2865z00zz__evalz00 =
				bstring_to_symbol(BGl_string2866z00zz__evalz00);
			BGl_symbol2867z00zz__evalz00 =
				bstring_to_symbol(BGl_string2868z00zz__evalz00);
			BGl_symbol2872z00zz__evalz00 =
				bstring_to_symbol(BGl_string2873z00zz__evalz00);
			BGl_list2871z00zz__evalz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2872z00zz__evalz00, BNIL);
			BGl_keyword2875z00zz__evalz00 =
				bstring_to_keyword(BGl_string2817z00zz__evalz00);
			BGl_symbol2877z00zz__evalz00 =
				bstring_to_symbol(BGl_string2878z00zz__evalz00);
			BGl_symbol2887z00zz__evalz00 =
				bstring_to_symbol(BGl_string2888z00zz__evalz00);
			BGl_symbol2889z00zz__evalz00 =
				bstring_to_symbol(BGl_string2890z00zz__evalz00);
			BGl_symbol2891z00zz__evalz00 =
				bstring_to_symbol(BGl_string2892z00zz__evalz00);
			BGl_symbol2893z00zz__evalz00 =
				bstring_to_symbol(BGl_string2894z00zz__evalz00);
			BGl_symbol2895z00zz__evalz00 =
				bstring_to_symbol(BGl_string2896z00zz__evalz00);
			BGl_symbol2897z00zz__evalz00 =
				bstring_to_symbol(BGl_string2898z00zz__evalz00);
			BGl_symbol2899z00zz__evalz00 =
				bstring_to_symbol(BGl_string2900z00zz__evalz00);
			BGl_symbol2901z00zz__evalz00 =
				bstring_to_symbol(BGl_string2902z00zz__evalz00);
			BGl_symbol2903z00zz__evalz00 =
				bstring_to_symbol(BGl_string2904z00zz__evalz00);
			BGl_symbol2905z00zz__evalz00 =
				bstring_to_symbol(BGl_string2906z00zz__evalz00);
			BGl_symbol2907z00zz__evalz00 =
				bstring_to_symbol(BGl_string2908z00zz__evalz00);
			BGl_symbol2910z00zz__evalz00 =
				bstring_to_symbol(BGl_string2911z00zz__evalz00);
			BGl_list2909z00zz__evalz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2910z00zz__evalz00,
				MAKE_YOUNG_PAIR(BGl_symbol2889z00zz__evalz00, BNIL));
			BGl_symbol2913z00zz__evalz00 =
				bstring_to_symbol(BGl_string2914z00zz__evalz00);
			BGl_symbol2915z00zz__evalz00 =
				bstring_to_symbol(BGl_string2916z00zz__evalz00);
			BGl_symbol2917z00zz__evalz00 =
				bstring_to_symbol(BGl_string2918z00zz__evalz00);
			BGl_symbol2919z00zz__evalz00 =
				bstring_to_symbol(BGl_string2920z00zz__evalz00);
			BGl_symbol2921z00zz__evalz00 =
				bstring_to_symbol(BGl_string2922z00zz__evalz00);
			BGl_symbol2923z00zz__evalz00 =
				bstring_to_symbol(BGl_string2924z00zz__evalz00);
			BGl_symbol2925z00zz__evalz00 =
				bstring_to_symbol(BGl_string2926z00zz__evalz00);
			BGl_symbol2936z00zz__evalz00 =
				bstring_to_symbol(BGl_string2937z00zz__evalz00);
			BGl_list2938z00zz__evalz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2910z00zz__evalz00,
				MAKE_YOUNG_PAIR(BGl_symbol2936z00zz__evalz00, BNIL));
			BGl_symbol2939z00zz__evalz00 =
				bstring_to_symbol(BGl_string2940z00zz__evalz00);
			BGl_symbol2941z00zz__evalz00 =
				bstring_to_symbol(BGl_string2942z00zz__evalz00);
			BGl_symbol2948z00zz__evalz00 =
				bstring_to_symbol(BGl_string2949z00zz__evalz00);
			BGl_symbol2950z00zz__evalz00 =
				bstring_to_symbol(BGl_string2951z00zz__evalz00);
			BGl_symbol2953z00zz__evalz00 =
				bstring_to_symbol(BGl_string2954z00zz__evalz00);
			BGl_symbol2955z00zz__evalz00 =
				bstring_to_symbol(BGl_string2956z00zz__evalz00);
			BGl_symbol2957z00zz__evalz00 =
				bstring_to_symbol(BGl_string2958z00zz__evalz00);
			BGl_symbol2961z00zz__evalz00 =
				bstring_to_symbol(BGl_string2962z00zz__evalz00);
			BGl_symbol2963z00zz__evalz00 =
				bstring_to_symbol(BGl_string2964z00zz__evalz00);
			BGl_list2960z00zz__evalz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2961z00zz__evalz00,
				MAKE_YOUNG_PAIR(BGl_symbol2963z00zz__evalz00, BNIL));
			BGl_symbol2967z00zz__evalz00 =
				bstring_to_symbol(BGl_string2968z00zz__evalz00);
			BGl_symbol2969z00zz__evalz00 =
				bstring_to_symbol(BGl_string2970z00zz__evalz00);
			BGl_symbol2971z00zz__evalz00 =
				bstring_to_symbol(BGl_string2972z00zz__evalz00);
			BGl_symbol2975z00zz__evalz00 =
				bstring_to_symbol(BGl_string2976z00zz__evalz00);
			BGl_list2974z00zz__evalz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2939z00zz__evalz00,
				MAKE_YOUNG_PAIR(BGl_symbol2975z00zz__evalz00, BNIL));
			BGl_symbol2977z00zz__evalz00 =
				bstring_to_symbol(BGl_string2973z00zz__evalz00);
			BGl_symbol2990z00zz__evalz00 =
				bstring_to_symbol(BGl_string2988z00zz__evalz00);
			BGl_symbol2995z00zz__evalz00 =
				bstring_to_symbol(BGl_string2993z00zz__evalz00);
			BGl_symbol2998z00zz__evalz00 =
				bstring_to_symbol(BGl_string2999z00zz__evalz00);
			return (BGl_symbol3002z00zz__evalz00 =
				bstring_to_symbol(BGl_string3003z00zz__evalz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__evalz00()
	{
		{	/* Eval/eval.scm 18 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__evalz00()
	{
		{	/* Eval/eval.scm 18 */
			BGl_defaultzd2evaluatezd2zz__evalz00 =
				BGl_evaluate2zd2envzd2zz__evaluatez00;
			BGl_installzd2allzd2expandersz12z12zz__install_expandersz00();
			BGl_za2promptza2z00zz__evalz00 = BGl_proc2796z00zz__evalz00;
			BGl_za2replzd2numza2zd2zz__evalz00 = BINT(((long) 0));
			BGl_za2replzd2quitza2zd2zz__evalz00 = BGl_proc2797z00zz__evalz00;
			BGl_za2replzd2printerza2zd2zz__evalz00 =
				BGl_defaultzd2replzd2printerzd2envzd2zz__evalz00;
			BGl_za2czd2debugzd2replzd2valueza2zd2zz__evalz00 = BUNSPEC;
			BGl_za2loadzd2pathza2zd2zz__evalz00 = BNIL;
			BGl_za2loadzd2verboseza2zd2zz__evalz00 = BTRUE;
			BGl_za2nilza2z00zz__evalz00 = BTRUE;
			BGl_za2userzd2passza2zd2zz__evalz00 = BUNSPEC;
			BGl_za2userzd2passzd2nameza2z00zz__evalz00 = BGl_string2798z00zz__evalz00;
			BGl_za2identifierzd2syntaxza2zd2zz__evalz00 =
				BGl_symbol2799z00zz__evalz00;
			{	/* Eval/eval.scm 791 */
				obj_t BgL_res2263z00_2641;

				{	/* Eval/eval.scm 791 */
					obj_t BgL_tmpz00_4357;

					BgL_tmpz00_4357 = BGL_CURRENT_DYNAMIC_ENV();
					BgL_res2263z00_2641 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4357);
				}
				return (BGl_za2transcriptza2z00zz__evalz00 =
					BgL_res2263z00_2641, BUNSPEC);
			}
		}

	}



/* &<@*repl-quit*:1345> */
	obj_t BGl_z62zc3z04za2replzd2quitza2za31345ze3z37zz__evalz00(obj_t
		BgL_envz00_3616, obj_t BgL_xz00_3617)
	{
		{	/* Eval/eval.scm 287 */
			return BIGLOO_EXIT(BgL_xz00_3617);
		}

	}



/* &<@*prompt*:1341> */
	obj_t BGl_z62zc3z04za2promptza2za31341ze3ze5zz__evalz00(obj_t BgL_envz00_3618,
		obj_t BgL_numz00_3619)
	{
		{	/* Eval/eval.scm 262 */
			{	/* Eval/eval.scm 263 */
				obj_t BgL_arg1342z00_4146;

				{	/* Eval/eval.scm 263 */
					obj_t BgL_res2259z00_4147;

					{	/* Eval/eval.scm 263 */
						obj_t BgL_tmpz00_4361;

						BgL_tmpz00_4361 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2259z00_4147 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4361);
					}
					BgL_arg1342z00_4146 = BgL_res2259z00_4147;
				}
				bgl_display_obj(BgL_numz00_3619, BgL_arg1342z00_4146);
			}
			{	/* Eval/eval.scm 264 */
				obj_t BgL_arg1343z00_4148;

				{	/* Eval/eval.scm 264 */
					obj_t BgL_res2260z00_4149;

					{	/* Eval/eval.scm 264 */
						obj_t BgL_tmpz00_4365;

						BgL_tmpz00_4365 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2260z00_4149 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4365);
					}
					BgL_arg1343z00_4148 = BgL_res2260z00_4149;
				}
				bgl_display_string(BGl_string2801z00zz__evalz00, BgL_arg1343z00_4148);
			}
			{	/* Eval/eval.scm 265 */
				obj_t BgL_arg1344z00_4150;

				{	/* Eval/eval.scm 265 */
					obj_t BgL_res2261z00_4151;

					{	/* Eval/eval.scm 265 */
						obj_t BgL_tmpz00_4369;

						BgL_tmpz00_4369 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2261z00_4151 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4369);
					}
					BgL_arg1344z00_4150 = BgL_res2261z00_4151;
				}
				return bgl_flush_output_port(BgL_arg1344z00_4150);
			}
		}

	}



/* &byte-code-evaluate */
	obj_t BGl_z62bytezd2codezd2evaluatez62zz__evalz00(obj_t BgL_envz00_3627,
		obj_t BgL_eexpz00_3628, obj_t BgL_envz00_3629, obj_t BgL_locz00_3630)
	{
		{	/* Eval/eval.scm 123 */
			{	/* Eval/eval.scm 124 */
				obj_t BgL_cexpz00_4152;
				obj_t BgL_denvz00_4153;

				BgL_cexpz00_4152 =
					BGl_evcompilez00zz__evcompilez00(BgL_eexpz00_3628, BNIL,
					BgL_envz00_3629, BGl_symbol2802z00zz__evalz00, ((bool_t) 0),
					BgL_locz00_3630, ((bool_t) 1), ((bool_t) 1));
				BgL_denvz00_4153 = BGL_CURRENT_DYNAMIC_ENV();
				{	/* Eval/eval.scm 126 */

					BGL_ENV_PUSH_TRACE(BgL_denvz00_4153, BUNSPEC, BUNSPEC);
					{	/* Eval/eval.scm 129 */
						obj_t BgL_tmpz00_4154;

						BgL_tmpz00_4154 =
							BGl_evmeaningz00zz__evmeaningz00(BgL_cexpz00_4152, BNIL,
							BgL_denvz00_4153);
						BGL_ENV_POP_TRACE(BgL_denvz00_4153);
						return BgL_tmpz00_4154;
					}
				}
			}
		}

	}



/* eval-evaluate-set! */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2evaluatezd2setz12z12zz__evalz00(obj_t
		BgL_compz00_6)
	{
		{	/* Eval/eval.scm 147 */
			if ((BgL_compz00_6 == BGl_symbol2804z00zz__evalz00))
				{	/* Eval/eval.scm 148 */
					return (BGl_defaultzd2evaluatezd2zz__evalz00 =
						BGl_bytezd2codezd2evaluatezd2envzd2zz__evalz00, BUNSPEC);
				}
			else
				{	/* Eval/eval.scm 148 */
					if ((BgL_compz00_6 == BGl_symbol2806z00zz__evalz00))
						{	/* Eval/eval.scm 148 */
							return (BGl_defaultzd2evaluatezd2zz__evalz00 =
								BGl_evaluate2zd2envzd2zz__evaluatez00, BUNSPEC);
						}
					else
						{	/* Eval/eval.scm 148 */
							if (PROCEDUREP(BgL_compz00_6))
								{	/* Eval/eval.scm 154 */
									return (BGl_defaultzd2evaluatezd2zz__evalz00 =
										BgL_compz00_6, BUNSPEC);
								}
							else
								{	/* Eval/eval.scm 154 */
									return
										BGl_errorz00zz__errorz00(BGl_string2808z00zz__evalz00,
										BGl_string2809z00zz__evalz00, BgL_compz00_6);
								}
						}
				}
		}

	}



/* &eval-evaluate-set! */
	obj_t BGl_z62evalzd2evaluatezd2setz12z70zz__evalz00(obj_t BgL_envz00_3631,
		obj_t BgL_compz00_3632)
	{
		{	/* Eval/eval.scm 147 */
			return BGl_evalzd2evaluatezd2setz12z12zz__evalz00(BgL_compz00_3632);
		}

	}



/* _eval */
	obj_t BGl__evalz00zz__evalz00(obj_t BgL_env1238z00_10, obj_t BgL_opt1237z00_9)
	{
		{	/* Eval/eval.scm 171 */
			{	/* Eval/eval.scm 171 */
				obj_t BgL_g1239z00_1218;

				BgL_g1239z00_1218 = VECTOR_REF(BgL_opt1237z00_9, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1237z00_9))
					{
					case ((long) 1):

						{	/* Eval/eval.scm 171 */
							obj_t BgL_envz00_1222;

							{	/* Eval/eval.scm 254 */
								obj_t BgL_mz00_2651;

								BgL_mz00_2651 = BGl_evalzd2modulezd2zz__evmodulez00();
								if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_mz00_2651))
									{	/* Eval/eval.scm 255 */
										BgL_envz00_1222 = BgL_mz00_2651;
									}
								else
									{	/* Eval/eval.scm 255 */
										BgL_envz00_1222 = BGl_symbol2810z00zz__evalz00;
									}
							}
							{	/* Eval/eval.scm 171 */

								{	/* Eval/eval.scm 172 */
									obj_t BgL_auxz00_4390;

									{	/* Eval/eval.scm 172 */
										obj_t BgL_aux2501z00_3825;

										BgL_aux2501z00_3825 = BGl_defaultzd2evaluatezd2zz__evalz00;
										if (PROCEDUREP(BgL_aux2501z00_3825))
											{	/* Eval/eval.scm 172 */
												BgL_auxz00_4390 = BgL_aux2501z00_3825;
											}
										else
											{
												obj_t BgL_auxz00_4393;

												BgL_auxz00_4393 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2812z00zz__evalz00, BINT(((long) 6523)),
													BGl_string2813z00zz__evalz00,
													BGl_string2814z00zz__evalz00, BgL_aux2501z00_3825);
												FAILURE(BgL_auxz00_4393, BFALSE, BFALSE);
									}}
									return
										BGl_evalzf2expanderzf2zz__evalz00(BgL_g1239z00_1218,
										BgL_envz00_1222, BGl_expandzd2envzd2zz__expandz00,
										BgL_auxz00_4390);
								}
							}
						}
						break;
					case ((long) 2):

						{	/* Eval/eval.scm 171 */
							obj_t BgL_envz00_1223;

							BgL_envz00_1223 = VECTOR_REF(BgL_opt1237z00_9, ((long) 1));
							{	/* Eval/eval.scm 171 */

								{	/* Eval/eval.scm 172 */
									obj_t BgL_auxz00_4399;

									{	/* Eval/eval.scm 172 */
										obj_t BgL_aux2503z00_3827;

										BgL_aux2503z00_3827 = BGl_defaultzd2evaluatezd2zz__evalz00;
										if (PROCEDUREP(BgL_aux2503z00_3827))
											{	/* Eval/eval.scm 172 */
												BgL_auxz00_4399 = BgL_aux2503z00_3827;
											}
										else
											{
												obj_t BgL_auxz00_4402;

												BgL_auxz00_4402 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2812z00zz__evalz00, BINT(((long) 6523)),
													BGl_string2813z00zz__evalz00,
													BGl_string2814z00zz__evalz00, BgL_aux2503z00_3827);
												FAILURE(BgL_auxz00_4402, BFALSE, BFALSE);
									}}
									return
										BGl_evalzf2expanderzf2zz__evalz00(BgL_g1239z00_1218,
										BgL_envz00_1223, BGl_expandzd2envzd2zz__expandz00,
										BgL_auxz00_4399);
								}
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* eval */
	BGL_EXPORTED_DEF obj_t BGl_evalz00zz__evalz00(obj_t BgL_expz00_7,
		obj_t BgL_envz00_8)
	{
		{	/* Eval/eval.scm 171 */
			{	/* Eval/eval.scm 172 */
				obj_t BgL_auxz00_4409;

				{	/* Eval/eval.scm 172 */
					obj_t BgL_aux2505z00_3829;

					BgL_aux2505z00_3829 = BGl_defaultzd2evaluatezd2zz__evalz00;
					if (PROCEDUREP(BgL_aux2505z00_3829))
						{	/* Eval/eval.scm 172 */
							BgL_auxz00_4409 = BgL_aux2505z00_3829;
						}
					else
						{
							obj_t BgL_auxz00_4412;

							BgL_auxz00_4412 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2812z00zz__evalz00,
								BINT(((long) 6523)), BGl_string2815z00zz__evalz00,
								BGl_string2814z00zz__evalz00, BgL_aux2505z00_3829);
							FAILURE(BgL_auxz00_4412, BFALSE, BFALSE);
				}}
				return
					BGl_evalzf2expanderzf2zz__evalz00(BgL_expz00_7, BgL_envz00_8,
					BGl_expandzd2envzd2zz__expandz00, BgL_auxz00_4409);
			}
		}

	}



/* _eval! */
	obj_t BGl__evalz12z12zz__evalz00(obj_t BgL_env1243z00_14,
		obj_t BgL_opt1242z00_13)
	{
		{	/* Eval/eval.scm 177 */
			{	/* Eval/eval.scm 177 */
				obj_t BgL_g1244z00_1224;

				BgL_g1244z00_1224 = VECTOR_REF(BgL_opt1242z00_13, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1242z00_13))
					{
					case ((long) 1):

						{	/* Eval/eval.scm 177 */
							obj_t BgL_envz00_1228;

							{	/* Eval/eval.scm 254 */
								obj_t BgL_mz00_2653;

								BgL_mz00_2653 = BGl_evalzd2modulezd2zz__evmodulez00();
								if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_mz00_2653))
									{	/* Eval/eval.scm 255 */
										BgL_envz00_1228 = BgL_mz00_2653;
									}
								else
									{	/* Eval/eval.scm 255 */
										BgL_envz00_1228 = BGl_symbol2810z00zz__evalz00;
									}
							}
							{	/* Eval/eval.scm 177 */

								{	/* Eval/eval.scm 178 */
									obj_t BgL_evaluatez00_2655;

									if (PROCEDUREP(BGl_defaultzd2evaluatezd2zz__evalz00))
										{	/* Eval/eval.scm 178 */
											BgL_evaluatez00_2655 =
												BGl_defaultzd2evaluatezd2zz__evalz00;
										}
									else
										{	/* Eval/eval.scm 178 */
											BgL_evaluatez00_2655 =
												BGl_bytezd2codezd2evaluatezd2envzd2zz__evalz00;
										}
									{	/* Eval/eval.scm 181 */
										obj_t BgL_auxz00_4423;

										if (PROCEDUREP(BgL_evaluatez00_2655))
											{	/* Eval/eval.scm 181 */
												BgL_auxz00_4423 = BgL_evaluatez00_2655;
											}
										else
											{
												obj_t BgL_auxz00_4426;

												BgL_auxz00_4426 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2812z00zz__evalz00, BINT(((long) 6972)),
													BGl_string2816z00zz__evalz00,
													BGl_string2814z00zz__evalz00, BgL_evaluatez00_2655);
												FAILURE(BgL_auxz00_4426, BFALSE, BFALSE);
											}
										return
											BGl_evalzf2expanderzf2zz__evalz00(BgL_g1244z00_1224,
											BgL_envz00_1228, BGl_expandz12zd2envzc0zz__expandz00,
											BgL_auxz00_4423);
									}
								}
							}
						}
						break;
					case ((long) 2):

						{	/* Eval/eval.scm 177 */
							obj_t BgL_envz00_1229;

							BgL_envz00_1229 = VECTOR_REF(BgL_opt1242z00_13, ((long) 1));
							{	/* Eval/eval.scm 177 */

								{	/* Eval/eval.scm 178 */
									obj_t BgL_evaluatez00_2659;

									if (PROCEDUREP(BGl_defaultzd2evaluatezd2zz__evalz00))
										{	/* Eval/eval.scm 178 */
											BgL_evaluatez00_2659 =
												BGl_defaultzd2evaluatezd2zz__evalz00;
										}
									else
										{	/* Eval/eval.scm 178 */
											BgL_evaluatez00_2659 =
												BGl_bytezd2codezd2evaluatezd2envzd2zz__evalz00;
										}
									{	/* Eval/eval.scm 181 */
										obj_t BgL_auxz00_4434;

										if (PROCEDUREP(BgL_evaluatez00_2659))
											{	/* Eval/eval.scm 181 */
												BgL_auxz00_4434 = BgL_evaluatez00_2659;
											}
										else
											{
												obj_t BgL_auxz00_4437;

												BgL_auxz00_4437 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2812z00zz__evalz00, BINT(((long) 6972)),
													BGl_string2816z00zz__evalz00,
													BGl_string2814z00zz__evalz00, BgL_evaluatez00_2659);
												FAILURE(BgL_auxz00_4437, BFALSE, BFALSE);
											}
										return
											BGl_evalzf2expanderzf2zz__evalz00(BgL_g1244z00_1224,
											BgL_envz00_1229, BGl_expandz12zd2envzc0zz__expandz00,
											BgL_auxz00_4434);
									}
								}
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* eval! */
	BGL_EXPORTED_DEF obj_t BGl_evalz12z12zz__evalz00(obj_t BgL_expz00_11,
		obj_t BgL_envz00_12)
	{
		{	/* Eval/eval.scm 177 */
			{	/* Eval/eval.scm 178 */
				obj_t BgL_evaluatez00_2663;

				if (PROCEDUREP(BGl_defaultzd2evaluatezd2zz__evalz00))
					{	/* Eval/eval.scm 178 */
						BgL_evaluatez00_2663 = BGl_defaultzd2evaluatezd2zz__evalz00;
					}
				else
					{	/* Eval/eval.scm 178 */
						BgL_evaluatez00_2663 =
							BGl_bytezd2codezd2evaluatezd2envzd2zz__evalz00;
					}
				{	/* Eval/eval.scm 181 */
					obj_t BgL_auxz00_4446;

					if (PROCEDUREP(BgL_evaluatez00_2663))
						{	/* Eval/eval.scm 181 */
							BgL_auxz00_4446 = BgL_evaluatez00_2663;
						}
					else
						{
							obj_t BgL_auxz00_4449;

							BgL_auxz00_4449 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2812z00zz__evalz00,
								BINT(((long) 6972)), BGl_string2817z00zz__evalz00,
								BGl_string2814z00zz__evalz00, BgL_evaluatez00_2663);
							FAILURE(BgL_auxz00_4449, BFALSE, BFALSE);
						}
					return
						BGl_evalzf2expanderzf2zz__evalz00(BgL_expz00_11, BgL_envz00_12,
						BGl_expandz12zd2envzc0zz__expandz00, BgL_auxz00_4446);
				}
			}
		}

	}



/* eval/expander */
	obj_t BGl_evalzf2expanderzf2zz__evalz00(obj_t BgL_expz00_15,
		obj_t BgL_envz00_16, obj_t BgL_expandz00_17, obj_t BgL_evaluatez00_18)
	{
		{	/* Eval/eval.scm 186 */
			{	/* Eval/eval.scm 187 */
				obj_t BgL_locz00_1232;
				obj_t BgL_sexpz00_1233;

				BgL_locz00_1232 =
					BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_expz00_15);
				if (PROCEDUREP(BGl_za2userzd2passza2zd2zz__evalz00))
					{	/* Eval/eval.scm 188 */
						BgL_sexpz00_1233 =
							PROCEDURE_ENTRY(BGl_za2userzd2passza2zd2zz__evalz00)
							(BGl_za2userzd2passza2zd2zz__evalz00, BgL_expz00_15, BEOA);
					}
				else
					{	/* Eval/eval.scm 188 */
						BgL_sexpz00_1233 = BgL_expz00_15;
					}
				{	/* Eval/eval.scm 189 */
					bool_t BgL_test3208z00_4461;

					if (CBOOL(BgL_locz00_1232))
						{	/* Eval/eval.scm 189 */
							int BgL_arg1374z00_1279;

							BgL_arg1374z00_1279 = bgl_debug();
							BgL_test3208z00_4461 =
								BGl_2ze3ze3zz__r4_numbers_6_5z00(BINT(BgL_arg1374z00_1279),
								BINT(((long) 0)));
						}
					else
						{	/* Eval/eval.scm 189 */
							BgL_test3208z00_4461 = ((bool_t) 0);
						}
					if (BgL_test3208z00_4461)
						{	/* Eval/eval.scm 190 */
							obj_t BgL_res1043z00_3646;

							BgL_res1043z00_3646 = MAKE_CELL(BUNSPEC);
							if (CBOOL(BGl_zc3z04exitza31365ze3ze70z60zz__evalz00
									(BgL_locz00_1232, BgL_envz00_16, BgL_evaluatez00_18,
										BgL_sexpz00_1233, BgL_expandz00_17, BgL_res1043z00_3646)))
								{	/* Eval/eval.scm 190 */
									obj_t BgL_ez00_2669;

									BgL_ez00_2669 = CELL_REF(BgL_res1043z00_3646);
									return
										BGl_evalzd2exceptionzd2handlerz00zz__evalz00(BgL_ez00_2669,
										BgL_locz00_1232);
								}
							else
								{	/* Eval/eval.scm 190 */
									return CELL_REF(BgL_res1043z00_3646);
								}
						}
					else
						{	/* Eval/eval.scm 194 */
							obj_t BgL_arg1373z00_1278;

							BgL_arg1373z00_1278 =
								PROCEDURE_ENTRY(BgL_expandz00_17) (BgL_expandz00_17,
								BgL_sexpz00_1233, BEOA);
							return PROCEDURE_ENTRY(BgL_evaluatez00_18) (BgL_evaluatez00_18,
								BgL_arg1373z00_1278, BgL_envz00_16, BgL_locz00_1232, BEOA);
						}
				}
			}
		}

	}



/* <@exit:1365>~0 */
	obj_t BGl_zc3z04exitza31365ze3ze70z60zz__evalz00(obj_t BgL_locz00_3823,
		obj_t BgL_envz00_3822, obj_t BgL_evaluatez00_3821, obj_t BgL_sexpz00_3820,
		obj_t BgL_expandz00_3819, obj_t BgL_res1043z00_3818)
	{
		{	/* Eval/eval.scm 190 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1049z00_1258;

			if (SET_EXIT(BgL_an_exit1049z00_1258))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1049z00_1258 = (void *) jmpbuf;
					{	/* Eval/eval.scm 190 */

						PUSH_EXIT(BgL_an_exit1049z00_1258, ((long) 1));
						{	/* Eval/eval.scm 190 */
							obj_t BgL_an_exitd1050z00_1259;

							BgL_an_exitd1050z00_1259 = ((obj_t) (&exitd));
							{	/* Eval/eval.scm 190 */
								bool_t BgL_res1052z00_1262;

								{	/* Eval/eval.scm 190 */
									obj_t BgL_ohs1041z00_1263;

									BgL_ohs1041z00_1263 = BGL_ERROR_HANDLER_GET();
									{	/* Eval/eval.scm 190 */
										obj_t BgL_exitd1046z00_1264;

										BgL_exitd1046z00_1264 = ((obj_t) (&exitd));
										{
											obj_t BgL_zc3z04anonymousza31371ze3z87_3638;

											BgL_zc3z04anonymousza31371ze3z87_3638 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31371ze3ze5zz__evalz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31371ze3z87_3638,
												(int) (((long) 0)), BgL_ohs1041z00_1263);
											BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
												(BgL_exitd1046z00_1264,
												BgL_zc3z04anonymousza31371ze3z87_3638);
											{	/* Eval/eval.scm 190 */
												bool_t BgL_tmp1048z00_1266;

												{	/* Eval/eval.scm 190 */
													obj_t BgL_arg1367z00_1267;

													{	/* Eval/eval.scm 190 */
														obj_t BgL_zc3z04anonymousza31369ze3z87_3637;

														BgL_zc3z04anonymousza31369ze3z87_3637 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31369ze3ze5zz__evalz00,
															(int) (((long) 1)), (int) (((long) 2)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31369ze3z87_3637,
															(int) (((long) 0)),
															((obj_t) BgL_res1043z00_3818));
														PROCEDURE_SET(BgL_zc3z04anonymousza31369ze3z87_3637,
															(int) (((long) 1)), BgL_an_exitd1050z00_1259);
														BgL_arg1367z00_1267 =
															MAKE_YOUNG_PAIR
															(BgL_zc3z04anonymousza31369ze3z87_3637,
															BgL_ohs1041z00_1263);
													}
													BGL_ERROR_HANDLER_SET(BgL_arg1367z00_1267);
													BUNSPEC;
												}
												{	/* Eval/eval.scm 190 */
													obj_t BgL_auxz00_3647;

													{	/* Eval/eval.scm 193 */
														obj_t BgL_arg1370z00_1272;

														BgL_arg1370z00_1272 =
															PROCEDURE_ENTRY(BgL_expandz00_3819)
															(BgL_expandz00_3819, BgL_sexpz00_3820, BEOA);
														BgL_auxz00_3647 =
															PROCEDURE_ENTRY(BgL_evaluatez00_3821)
															(BgL_evaluatez00_3821, BgL_arg1370z00_1272,
															BgL_envz00_3822, BgL_locz00_3823, BEOA);
													}
													CELL_SET(BgL_res1043z00_3818, BgL_auxz00_3647);
												}
												BgL_tmp1048z00_1266 = ((bool_t) 0);
												BGl_exitdzd2popzd2protectz12z12zz__bexitz00
													(BgL_exitd1046z00_1264);
												BGL_ERROR_HANDLER_SET(BgL_ohs1041z00_1263);
												BUNSPEC;
												BgL_res1052z00_1262 = BgL_tmp1048z00_1266;
								}}}}
								POP_EXIT();
								return BBOOL(BgL_res1052z00_1262);
							}
						}
					}
				}
		}

	}



/* &<@anonymous:1369> */
	obj_t BGl_z62zc3z04anonymousza31369ze3ze5zz__evalz00(obj_t BgL_envz00_3639,
		obj_t BgL_ez00_3642)
	{
		{	/* Eval/eval.scm 190 */
			{	/* Eval/eval.scm 190 */
				obj_t BgL_res1043z00_3640;
				obj_t BgL_an_exitd1050z00_3641;

				BgL_res1043z00_3640 =
					PROCEDURE_REF(BgL_envz00_3639, (int) (((long) 0)));
				BgL_an_exitd1050z00_3641 =
					PROCEDURE_REF(BgL_envz00_3639, (int) (((long) 1)));
				CELL_SET(BgL_res1043z00_3640, BgL_ez00_3642);
				return
					BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1050z00_3641, BTRUE);
			}
		}

	}



/* &<@anonymous:1371> */
	obj_t BGl_z62zc3z04anonymousza31371ze3ze5zz__evalz00(obj_t BgL_envz00_3644)
	{
		{	/* Eval/eval.scm 190 */
			{
				obj_t BgL_ohs1041z00_3645;

				BgL_ohs1041z00_3645 =
					PROCEDURE_REF(BgL_envz00_3644, (int) (((long) 0)));
				BGL_ERROR_HANDLER_SET(BgL_ohs1041z00_3645);
				return BUNSPEC;
			}
		}

	}



/* eval-exception-handler */
	obj_t BGl_evalzd2exceptionzd2handlerz00zz__evalz00(obj_t BgL_ez00_19,
		obj_t BgL_locz00_20)
	{
		{	/* Eval/eval.scm 199 */
			{	/* Eval/eval.scm 200 */
				bool_t BgL_test3211z00_4524;

				if (BGl_isazf3zf3zz__objectz00(BgL_ez00_19,
						BGl_z62exceptionz62zz__objectz00))
					{	/* Eval/eval.scm 200 */
						if (CBOOL(
								(((BgL_z62exceptionz62_bglt) COBJECT(
											((BgL_z62exceptionz62_bglt) BgL_ez00_19)))->
									BgL_fnamez00)))
							{	/* Eval/eval.scm 201 */
								BgL_test3211z00_4524 = ((bool_t) 0);
							}
						else
							{	/* Eval/eval.scm 201 */
								BgL_test3211z00_4524 = ((bool_t) 1);
							}
					}
				else
					{	/* Eval/eval.scm 200 */
						BgL_test3211z00_4524 = ((bool_t) 0);
					}
				if (BgL_test3211z00_4524)
					{	/* Eval/eval.scm 200 */
						if (PAIRP(BgL_locz00_20))
							{	/* Eval/eval.scm 202 */
								obj_t BgL_cdrzd2108zd2_1290;

								BgL_cdrzd2108zd2_1290 = CDR(BgL_locz00_20);
								if ((CAR(BgL_locz00_20) == BGl_symbol2818z00zz__evalz00))
									{	/* Eval/eval.scm 202 */
										if (PAIRP(BgL_cdrzd2108zd2_1290))
											{	/* Eval/eval.scm 202 */
												obj_t BgL_cdrzd2112zd2_1294;

												BgL_cdrzd2112zd2_1294 = CDR(BgL_cdrzd2108zd2_1290);
												if (PAIRP(BgL_cdrzd2112zd2_1294))
													{	/* Eval/eval.scm 202 */
														if (NULLP(CDR(BgL_cdrzd2112zd2_1294)))
															{	/* Eval/eval.scm 202 */
																obj_t BgL_arg1386z00_1298;
																obj_t BgL_arg1387z00_1299;

																BgL_arg1386z00_1298 =
																	CAR(BgL_cdrzd2108zd2_1290);
																BgL_arg1387z00_1299 =
																	CAR(BgL_cdrzd2112zd2_1294);
																((((BgL_z62exceptionz62_bglt) COBJECT(
																				((BgL_z62exceptionz62_bglt)
																					BgL_ez00_19)))->BgL_fnamez00) =
																	((obj_t) BgL_arg1386z00_1298), BUNSPEC);
																((((BgL_z62exceptionz62_bglt)
																			COBJECT(((BgL_z62exceptionz62_bglt)
																					BgL_ez00_19)))->BgL_locationz00) =
																	((obj_t) BgL_arg1387z00_1299), BUNSPEC);
															}
														else
															{	/* Eval/eval.scm 202 */
																BFALSE;
															}
													}
												else
													{	/* Eval/eval.scm 202 */
														BFALSE;
													}
											}
										else
											{	/* Eval/eval.scm 202 */
												BFALSE;
											}
									}
								else
									{	/* Eval/eval.scm 202 */
										BFALSE;
									}
							}
						else
							{	/* Eval/eval.scm 202 */
								BFALSE;
							}
					}
				else
					{	/* Eval/eval.scm 200 */
						BFALSE;
					}
			}
			return BGl_raisez00zz__errorz00(BgL_ez00_19);
		}

	}



/* _byte-code-compile */
	obj_t BGl__bytezd2codezd2compilez00zz__evalz00(obj_t BgL_env1248z00_24,
		obj_t BgL_opt1247z00_23)
	{
		{	/* Eval/eval.scm 212 */
			{	/* Eval/eval.scm 212 */
				obj_t BgL_g1249z00_1306;

				BgL_g1249z00_1306 = VECTOR_REF(BgL_opt1247z00_23, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1247z00_23))
					{
					case ((long) 1):

						{	/* Eval/eval.scm 212 */
							obj_t BgL_envz00_1310;

							{	/* Eval/eval.scm 254 */
								obj_t BgL_mz00_2682;

								BgL_mz00_2682 = BGl_evalzd2modulezd2zz__evmodulez00();
								if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_mz00_2682))
									{	/* Eval/eval.scm 255 */
										BgL_envz00_1310 = BgL_mz00_2682;
									}
								else
									{	/* Eval/eval.scm 255 */
										BgL_envz00_1310 = BGl_symbol2810z00zz__evalz00;
									}
							}
							{	/* Eval/eval.scm 212 */

								return
									BGl_bytezd2codezd2compilez00zz__evalz00(BgL_g1249z00_1306,
									BgL_envz00_1310);
							}
						}
						break;
					case ((long) 2):

						{	/* Eval/eval.scm 212 */
							obj_t BgL_envz00_1311;

							BgL_envz00_1311 = VECTOR_REF(BgL_opt1247z00_23, ((long) 1));
							{	/* Eval/eval.scm 212 */

								return
									BGl_bytezd2codezd2compilez00zz__evalz00(BgL_g1249z00_1306,
									BgL_envz00_1311);
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* byte-code-compile */
	BGL_EXPORTED_DEF obj_t BGl_bytezd2codezd2compilez00zz__evalz00(obj_t
		BgL_expz00_21, obj_t BgL_envz00_22)
	{
		{	/* Eval/eval.scm 212 */
			{	/* Eval/eval.scm 213 */
				obj_t BgL_locz00_1312;

				BgL_locz00_1312 =
					BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_expz00_21);
				{	/* Eval/eval.scm 213 */
					obj_t BgL_sexpz00_1313;

					if (PROCEDUREP(BGl_za2userzd2passza2zd2zz__evalz00))
						{	/* Eval/eval.scm 214 */
							BgL_sexpz00_1313 =
								PROCEDURE_ENTRY(BGl_za2userzd2passza2zd2zz__evalz00)
								(BGl_za2userzd2passza2zd2zz__evalz00, BgL_expz00_21, BEOA);
						}
					else
						{	/* Eval/eval.scm 214 */
							BgL_sexpz00_1313 = BgL_expz00_21;
						}
					{	/* Eval/eval.scm 214 */

						{	/* Eval/eval.scm 216 */
							obj_t BgL_arg1391z00_1314;

							{	/* Eval/eval.scm 216 */
								obj_t BgL_arg1393z00_1317;

								BgL_arg1393z00_1317 =
									BGl_expandz00zz__expandz00(BgL_sexpz00_1313);
								BgL_arg1391z00_1314 =
									BGl_evcompilez00zz__evcompilez00(BgL_arg1393z00_1317, BNIL,
									BgL_envz00_22, BGl_symbol2802z00zz__evalz00, ((bool_t) 1),
									BgL_locz00_1312, ((bool_t) 0), ((bool_t) 1));
							}
							{	/* Eval/eval.scm 215 */

								return obj_to_string(BgL_arg1391z00_1314, BFALSE);
							}
						}
					}
				}
			}
		}

	}



/* byte-code-run */
	BGL_EXPORTED_DEF obj_t BGl_bytezd2codezd2runz00zz__evalz00(obj_t
		BgL_bytezd2codezd2_25)
	{
		{	/* Eval/eval.scm 221 */
			{	/* Eval/eval.scm 222 */
				obj_t BgL_arg1395z00_2686;
				obj_t BgL_arg1396z00_2687;

				{	/* Eval/eval.scm 222 */

					BgL_arg1395z00_2686 =
						string_to_obj(BgL_bytezd2codezd2_25, BFALSE, BFALSE);
				}
				BgL_arg1396z00_2687 = BGL_CURRENT_DYNAMIC_ENV();
				return
					BGl_evmeaningz00zz__evmeaningz00(BgL_arg1395z00_2686, BNIL,
					BgL_arg1396z00_2687);
			}
		}

	}



/* &byte-code-run */
	obj_t BGl_z62bytezd2codezd2runz62zz__evalz00(obj_t BgL_envz00_3649,
		obj_t BgL_bytezd2codezd2_3650)
	{
		{	/* Eval/eval.scm 221 */
			{	/* Eval/eval.scm 222 */
				obj_t BgL_auxz00_4574;

				if (STRINGP(BgL_bytezd2codezd2_3650))
					{	/* Eval/eval.scm 222 */
						BgL_auxz00_4574 = BgL_bytezd2codezd2_3650;
					}
				else
					{
						obj_t BgL_auxz00_4577;

						BgL_auxz00_4577 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2812z00zz__evalz00,
							BINT(((long) 8854)), BGl_string2820z00zz__evalz00,
							BGl_string2821z00zz__evalz00, BgL_bytezd2codezd2_3650);
						FAILURE(BgL_auxz00_4577, BFALSE, BFALSE);
					}
				return BGl_bytezd2codezd2runz00zz__evalz00(BgL_auxz00_4574);
			}
		}

	}



/* scheme-report-environment */
	BGL_EXPORTED_DEF obj_t BGl_schemezd2reportzd2environmentz00zz__evalz00(obj_t
		BgL_versionz00_26)
	{
		{	/* Eval/eval.scm 227 */
			{	/* Eval/eval.scm 228 */
				bool_t BgL_test3222z00_4582;

				{	/* Eval/eval.scm 228 */
					long BgL_n1z00_2693;

					{	/* Eval/eval.scm 228 */
						obj_t BgL_tmpz00_4583;

						if (INTEGERP(BgL_versionz00_26))
							{	/* Eval/eval.scm 228 */
								BgL_tmpz00_4583 = BgL_versionz00_26;
							}
						else
							{
								obj_t BgL_auxz00_4586;

								BgL_auxz00_4586 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2812z00zz__evalz00,
									BINT(((long) 9172)), BGl_string2822z00zz__evalz00,
									BGl_string2823z00zz__evalz00, BgL_versionz00_26);
								FAILURE(BgL_auxz00_4586, BFALSE, BFALSE);
							}
						BgL_n1z00_2693 = (long) CINT(BgL_tmpz00_4583);
					}
					BgL_test3222z00_4582 = (BgL_n1z00_2693 == ((long) 5));
				}
				if (BgL_test3222z00_4582)
					{	/* Eval/eval.scm 228 */
						return BGl_symbol2824z00zz__evalz00;
					}
				else
					{	/* Eval/eval.scm 228 */
						return
							BGl_errorz00zz__errorz00(BGl_symbol2824z00zz__evalz00,
							BGl_string2825z00zz__evalz00, BgL_versionz00_26);
					}
			}
		}

	}



/* &scheme-report-environment */
	obj_t BGl_z62schemezd2reportzd2environmentz62zz__evalz00(obj_t
		BgL_envz00_3651, obj_t BgL_versionz00_3652)
	{
		{	/* Eval/eval.scm 227 */
			return
				BGl_schemezd2reportzd2environmentz00zz__evalz00(BgL_versionz00_3652);
		}

	}



/* null-environment */
	BGL_EXPORTED_DEF obj_t BGl_nullzd2environmentzd2zz__evalz00(obj_t
		BgL_versionz00_27)
	{
		{	/* Eval/eval.scm 237 */
			{	/* Eval/eval.scm 238 */
				bool_t BgL_test3224z00_4594;

				{	/* Eval/eval.scm 238 */
					long BgL_n1z00_2696;

					{	/* Eval/eval.scm 238 */
						obj_t BgL_tmpz00_4595;

						if (INTEGERP(BgL_versionz00_27))
							{	/* Eval/eval.scm 238 */
								BgL_tmpz00_4595 = BgL_versionz00_27;
							}
						else
							{
								obj_t BgL_auxz00_4598;

								BgL_auxz00_4598 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2812z00zz__evalz00,
									BINT(((long) 9580)), BGl_string2826z00zz__evalz00,
									BGl_string2823z00zz__evalz00, BgL_versionz00_27);
								FAILURE(BgL_auxz00_4598, BFALSE, BFALSE);
							}
						BgL_n1z00_2696 = (long) CINT(BgL_tmpz00_4595);
					}
					BgL_test3224z00_4594 = (BgL_n1z00_2696 == ((long) 5));
				}
				if (BgL_test3224z00_4594)
					{	/* Eval/eval.scm 238 */
						return BGl_symbol2827z00zz__evalz00;
					}
				else
					{	/* Eval/eval.scm 238 */
						return
							BGl_errorz00zz__errorz00(BGl_symbol2824z00zz__evalz00,
							BGl_string2825z00zz__evalz00, BgL_versionz00_27);
					}
			}
		}

	}



/* &null-environment */
	obj_t BGl_z62nullzd2environmentzb0zz__evalz00(obj_t BgL_envz00_3653,
		obj_t BgL_versionz00_3654)
	{
		{	/* Eval/eval.scm 237 */
			return BGl_nullzd2environmentzd2zz__evalz00(BgL_versionz00_3654);
		}

	}



/* interaction-environment */
	BGL_EXPORTED_DEF obj_t BGl_interactionzd2environmentzd2zz__evalz00()
	{
		{	/* Eval/eval.scm 247 */
			return BGl_symbol2810z00zz__evalz00;
		}

	}



/* &interaction-environment */
	obj_t BGl_z62interactionzd2environmentzb0zz__evalz00(obj_t BgL_envz00_3655)
	{
		{	/* Eval/eval.scm 247 */
			return BGl_interactionzd2environmentzd2zz__evalz00();
		}

	}



/* default-environment */
	BGL_EXPORTED_DEF obj_t BGl_defaultzd2environmentzd2zz__evalz00()
	{
		{	/* Eval/eval.scm 253 */
			{	/* Eval/eval.scm 254 */
				obj_t BgL_mz00_2698;

				BgL_mz00_2698 = BGl_evalzd2modulezd2zz__evmodulez00();
				if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_mz00_2698))
					{	/* Eval/eval.scm 255 */
						return BgL_mz00_2698;
					}
				else
					{	/* Eval/eval.scm 255 */
						return BGl_symbol2810z00zz__evalz00;
					}
			}
		}

	}



/* &default-environment */
	obj_t BGl_z62defaultzd2environmentzb0zz__evalz00(obj_t BgL_envz00_3656)
	{
		{	/* Eval/eval.scm 253 */
			return BGl_defaultzd2environmentzd2zz__evalz00();
		}

	}



/* set-prompter! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2prompterz12zc0zz__evalz00(obj_t
		BgL_procz00_28)
	{
		{	/* Eval/eval.scm 270 */
			if (PROCEDURE_CORRECT_ARITYP(BgL_procz00_28, (int) (((long) 1))))
				{	/* Eval/eval.scm 271 */
					return (BGl_za2promptza2z00zz__evalz00 = BgL_procz00_28, BUNSPEC);
				}
			else
				{	/* Eval/eval.scm 271 */
					return
						BGl_errorz00zz__errorz00(BGl_symbol2828z00zz__evalz00,
						BGl_string2830z00zz__evalz00, BgL_procz00_28);
				}
		}

	}



/* &set-prompter! */
	obj_t BGl_z62setzd2prompterz12za2zz__evalz00(obj_t BgL_envz00_3657,
		obj_t BgL_procz00_3658)
	{
		{	/* Eval/eval.scm 270 */
			{	/* Eval/eval.scm 271 */
				obj_t BgL_auxz00_4615;

				if (PROCEDUREP(BgL_procz00_3658))
					{	/* Eval/eval.scm 271 */
						BgL_auxz00_4615 = BgL_procz00_3658;
					}
				else
					{
						obj_t BgL_auxz00_4618;

						BgL_auxz00_4618 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2812z00zz__evalz00,
							BINT(((long) 10945)), BGl_string2831z00zz__evalz00,
							BGl_string2814z00zz__evalz00, BgL_procz00_3658);
						FAILURE(BgL_auxz00_4618, BFALSE, BFALSE);
					}
				return BGl_setzd2prompterz12zc0zz__evalz00(BgL_auxz00_4615);
			}
		}

	}



/* get-prompter */
	BGL_EXPORTED_DEF obj_t BGl_getzd2prompterzd2zz__evalz00()
	{
		{	/* Eval/eval.scm 280 */
			{	/* Eval/eval.scm 280 */
				obj_t BgL_aux2521z00_3845;

				BgL_aux2521z00_3845 = BGl_za2promptza2z00zz__evalz00;
				if (PROCEDUREP(BgL_aux2521z00_3845))
					{	/* Eval/eval.scm 280 */
						return BgL_aux2521z00_3845;
					}
				else
					{
						obj_t BgL_auxz00_4625;

						BgL_auxz00_4625 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2812z00zz__evalz00,
							BINT(((long) 11328)), BGl_string2832z00zz__evalz00,
							BGl_string2814z00zz__evalz00, BgL_aux2521z00_3845);
						FAILURE(BgL_auxz00_4625, BFALSE, BFALSE);
		}}}

	}



/* &get-prompter */
	obj_t BGl_z62getzd2prompterzb0zz__evalz00(obj_t BgL_envz00_3659)
	{
		{	/* Eval/eval.scm 280 */
			return BGl_getzd2prompterzd2zz__evalz00();
		}

	}



/* repl */
	BGL_EXPORTED_DEF obj_t BGl_replz00zz__evalz00()
	{
		{	/* Eval/eval.scm 292 */
			{	/* Eval/eval.scm 293 */
				obj_t BgL_replzd2quitzd2_1329;
				obj_t BgL_replzd2numzd2_1330;

				BgL_replzd2quitzd2_1329 = BGl_za2replzd2quitza2zd2zz__evalz00;
				BgL_replzd2numzd2_1330 = BGl_za2replzd2numza2zd2zz__evalz00;
				BGl_zc3z04exitza31402ze3ze70z60zz__evalz00(BgL_replzd2quitzd2_1329,
					BgL_replzd2numzd2_1330);
				{	/* Eval/eval.scm 303 */
					obj_t BgL_arg1404z00_1342;

					{	/* Eval/eval.scm 303 */
						obj_t BgL_res2281z00_2704;

						{	/* Eval/eval.scm 303 */
							obj_t BgL_tmpz00_4631;

							BgL_tmpz00_4631 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2281z00_2704 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4631);
						}
						BgL_arg1404z00_1342 = BgL_res2281z00_2704;
					}
					bgl_display_char(((unsigned char) 10), BgL_arg1404z00_1342);
				}
				{	/* Eval/eval.scm 304 */
					obj_t BgL_arg1405z00_1343;

					{	/* Eval/eval.scm 304 */
						obj_t BgL_res2282z00_2707;

						{	/* Eval/eval.scm 304 */
							obj_t BgL_tmpz00_4635;

							BgL_tmpz00_4635 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2282z00_2707 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4635);
						}
						BgL_arg1405z00_1343 = BgL_res2282z00_2707;
					}
					return bgl_flush_output_port(BgL_arg1405z00_1343);
				}
			}
		}

	}



/* <@exit:1402>~0 */
	obj_t BGl_zc3z04exitza31402ze3ze70z60zz__evalz00(obj_t
		BgL_replzd2quitzd2_3817, obj_t BgL_replzd2numzd2_3816)
	{
		{	/* Eval/eval.scm 295 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1059z00_1332;

			if (SET_EXIT(BgL_an_exit1059z00_1332))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1059z00_1332 = (void *) jmpbuf;
					{	/* Eval/eval.scm 295 */

						PUSH_EXIT(BgL_an_exit1059z00_1332, ((long) 1));
						{	/* Eval/eval.scm 295 */
							obj_t BgL_an_exitd1060z00_1333;

							BgL_an_exitd1060z00_1333 = ((obj_t) (&exitd));
							{	/* Eval/eval.scm 295 */
								obj_t BgL_quitz00_3661;

								BgL_quitz00_3661 =
									MAKE_FX_PROCEDURE(BGl_z62quitz62zz__evalz00,
									(int) (((long) 1)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_quitz00_3661,
									(int) (((long) 0)), BgL_an_exitd1060z00_1333);
								{	/* Eval/eval.scm 295 */
									obj_t BgL_res1062z00_1336;

									BGl_za2replzd2quitza2zd2zz__evalz00 = BgL_quitz00_3661;
									{
										obj_t BgL_tmpz00_4647;

										{	/* Eval/eval.scm 297 */
											obj_t BgL_aux2523z00_3847;

											BgL_aux2523z00_3847 = BGl_za2replzd2numza2zd2zz__evalz00;
											if (INTEGERP(BgL_aux2523z00_3847))
												{	/* Eval/eval.scm 297 */
													BgL_tmpz00_4647 = BgL_aux2523z00_3847;
												}
											else
												{
													obj_t BgL_auxz00_4651;

													BgL_auxz00_4651 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2812z00zz__evalz00, BINT(((long) 12037)),
														BGl_string2833z00zz__evalz00,
														BGl_string2823z00zz__evalz00, BgL_aux2523z00_3847);
													FAILURE(BgL_auxz00_4651, BFALSE, BFALSE);
										}}
										BGl_za2replzd2numza2zd2zz__evalz00 =
											ADDFX(BINT(((long) 1)), BgL_tmpz00_4647);
									}
									{	/* Eval/eval.scm 298 */
										obj_t BgL_exitd1056z00_1337;

										BgL_exitd1056z00_1337 = ((obj_t) (&exitd));
										{	/* Eval/eval.scm 301 */
											obj_t BgL_zc3z04anonymousza31403ze3z87_3660;

											BgL_zc3z04anonymousza31403ze3z87_3660 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31403ze3ze5zz__evalz00,
												(int) (((long) 0)), (int) (((long) 2)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31403ze3z87_3660,
												(int) (((long) 0)), BgL_replzd2numzd2_3816);
											PROCEDURE_SET(BgL_zc3z04anonymousza31403ze3z87_3660,
												(int) (((long) 1)), BgL_replzd2quitzd2_3817);
											BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
												(BgL_exitd1056z00_1337,
												BgL_zc3z04anonymousza31403ze3z87_3660);
											{	/* Eval/eval.scm 299 */
												obj_t BgL_tmp1058z00_1339;

												BgL_tmp1058z00_1339 =
													BGl_internalzd2replzd2zz__evalz00();
												BGl_exitdzd2popzd2protectz12z12zz__bexitz00
													(BgL_exitd1056z00_1337);
												BGl_za2replzd2numza2zd2zz__evalz00 =
													BgL_replzd2numzd2_3816;
												BGl_za2replzd2quitza2zd2zz__evalz00 =
													BgL_replzd2quitzd2_3817;
												BgL_res1062z00_1336 = BgL_tmp1058z00_1339;
									}}}
									POP_EXIT();
									return BgL_res1062z00_1336;
								}
							}
						}
					}
				}
		}

	}



/* &repl */
	obj_t BGl_z62replz62zz__evalz00(obj_t BgL_envz00_3662)
	{
		{	/* Eval/eval.scm 292 */
			return BGl_replz00zz__evalz00();
		}

	}



/* &<@anonymous:1403> */
	obj_t BGl_z62zc3z04anonymousza31403ze3ze5zz__evalz00(obj_t BgL_envz00_3663)
	{
		{	/* Eval/eval.scm 298 */
			{	/* Eval/eval.scm 301 */
				obj_t BgL_replzd2numzd2_3664;
				obj_t BgL_replzd2quitzd2_3665;

				BgL_replzd2numzd2_3664 =
					PROCEDURE_REF(BgL_envz00_3663, (int) (((long) 0)));
				BgL_replzd2quitzd2_3665 =
					PROCEDURE_REF(BgL_envz00_3663, (int) (((long) 1)));
				BGl_za2replzd2numza2zd2zz__evalz00 = BgL_replzd2numzd2_3664;
				return (BGl_za2replzd2quitza2zd2zz__evalz00 =
					BgL_replzd2quitzd2_3665, BUNSPEC);
			}
		}

	}



/* &quit */
	obj_t BGl_z62quitz62zz__evalz00(obj_t BgL_envz00_3666,
		obj_t BgL_val1061z00_3668)
	{
		{	/* Eval/eval.scm 295 */
			return
				BGl_unwindzd2untilz12zc0zz__bexitz00(PROCEDURE_REF(BgL_envz00_3666,
					(int) (((long) 0))), BgL_val1061z00_3668);
		}

	}



/* get-eval-reader */
	obj_t BGl_getzd2evalzd2readerz00zz__evalz00()
	{
		{	/* Eval/eval.scm 309 */
			{	/* Eval/eval.scm 310 */
				obj_t BgL__ortest_1063z00_1344;

				BgL__ortest_1063z00_1344 = BGl_bigloozd2loadzd2readerz00zz__paramz00();
				if (CBOOL(BgL__ortest_1063z00_1344))
					{	/* Eval/eval.scm 310 */
						return BgL__ortest_1063z00_1344;
					}
				else
					{	/* Eval/eval.scm 310 */
						return BGl_proc2834z00zz__evalz00;
					}
			}
		}

	}



/* &<@anonymous:1406> */
	obj_t BGl_z62zc3z04anonymousza31406ze3ze5zz__evalz00(obj_t BgL_envz00_3670,
		obj_t BgL_pz00_3671)
	{
		{	/* Eval/eval.scm 311 */
			{	/* Eval/eval.scm 311 */
				obj_t BgL_auxz00_4678;

				if (INPUT_PORTP(BgL_pz00_3671))
					{	/* Eval/eval.scm 311 */
						BgL_auxz00_4678 = BgL_pz00_3671;
					}
				else
					{
						obj_t BgL_auxz00_4681;

						BgL_auxz00_4681 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2812z00zz__evalz00,
							BINT(((long) 12538)), BGl_string2835z00zz__evalz00,
							BGl_string2836z00zz__evalz00, BgL_pz00_3671);
						FAILURE(BgL_auxz00_4681, BFALSE, BFALSE);
					}
				return BGl_readz00zz__readerz00(BgL_auxz00_4678, BTRUE);
			}
		}

	}



/* set-repl-error-notifier! */
	BGL_EXPORTED_DEF obj_t
		BGl_setzd2replzd2errorzd2notifierz12zc0zz__evalz00(obj_t BgL_procz00_29)
	{
		{	/* Eval/eval.scm 316 */
			{	/* Eval/eval.scm 317 */
				bool_t BgL_test3233z00_4686;

				{	/* Eval/eval.scm 317 */
					obj_t BgL_tmpz00_4687;

					if (PROCEDUREP(BgL_procz00_29))
						{	/* Eval/eval.scm 317 */
							BgL_tmpz00_4687 = BgL_procz00_29;
						}
					else
						{
							obj_t BgL_auxz00_4690;

							BgL_auxz00_4690 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2812z00zz__evalz00,
								BINT(((long) 12839)), BGl_string2837z00zz__evalz00,
								BGl_string2814z00zz__evalz00, BgL_procz00_29);
							FAILURE(BgL_auxz00_4690, BFALSE, BFALSE);
						}
					BgL_test3233z00_4686 =
						PROCEDURE_CORRECT_ARITYP(BgL_tmpz00_4687, (int) (((long) 1)));
				}
				if (BgL_test3233z00_4686)
					{	/* Eval/eval.scm 318 */
						obj_t BgL_arg1409z00_1348;

						{	/* Eval/eval.scm 318 */
							obj_t BgL_list1410z00_1349;

							BgL_list1410z00_1349 = MAKE_YOUNG_PAIR(BgL_procz00_29, BNIL);
							BgL_arg1409z00_1348 = BgL_list1410z00_1349;
						}
						return BGL_ERROR_NOTIFIERS_SET(BgL_arg1409z00_1348);
					}
				else
					{	/* Eval/eval.scm 317 */
						return
							BGl_errorz00zz__errorz00(BGl_string2837z00zz__evalz00,
							BGl_string2838z00zz__evalz00, BgL_procz00_29);
					}
			}
		}

	}



/* &set-repl-error-notifier! */
	obj_t BGl_z62setzd2replzd2errorzd2notifierz12za2zz__evalz00(obj_t
		BgL_envz00_3672, obj_t BgL_procz00_3673)
	{
		{	/* Eval/eval.scm 316 */
			return
				BGl_setzd2replzd2errorzd2notifierz12zc0zz__evalz00(BgL_procz00_3673);
		}

	}



/* get-repl-error-notifier */
	BGL_EXPORTED_DEF obj_t BGl_getzd2replzd2errorzd2notifierzd2zz__evalz00()
	{
		{	/* Eval/eval.scm 324 */
			{	/* Eval/eval.scm 325 */
				bool_t BgL_test3235z00_4700;

				{	/* Eval/eval.scm 325 */
					obj_t BgL_arg1414z00_1353;

					BgL_arg1414z00_1353 = BGL_ERROR_NOTIFIERS_GET();
					BgL_test3235z00_4700 = PAIRP(BgL_arg1414z00_1353);
				}
				if (BgL_test3235z00_4700)
					{	/* Eval/eval.scm 326 */
						obj_t BgL_arg1413z00_1352;

						BgL_arg1413z00_1352 = BGL_ERROR_NOTIFIERS_GET();
						{	/* Eval/eval.scm 326 */
							obj_t BgL_pairz00_2711;

							if (PAIRP(BgL_arg1413z00_1352))
								{	/* Eval/eval.scm 326 */
									BgL_pairz00_2711 = BgL_arg1413z00_1352;
								}
							else
								{
									obj_t BgL_auxz00_4706;

									BgL_auxz00_4706 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string2812z00zz__evalz00, BINT(((long) 13303)),
										BGl_string2839z00zz__evalz00, BGl_string2840z00zz__evalz00,
										BgL_arg1413z00_1352);
									FAILURE(BgL_auxz00_4706, BFALSE, BFALSE);
								}
							return CAR(BgL_pairz00_2711);
						}
					}
				else
					{	/* Eval/eval.scm 325 */
						return BFALSE;
					}
			}
		}

	}



/* &get-repl-error-notifier */
	obj_t BGl_z62getzd2replzd2errorzd2notifierzb0zz__evalz00(obj_t
		BgL_envz00_3674)
	{
		{	/* Eval/eval.scm 324 */
			return BGl_getzd2replzd2errorzd2notifierzd2zz__evalz00();
		}

	}



/* internal-repl */
	obj_t BGl_internalzd2replzd2zz__evalz00()
	{
		{	/* Eval/eval.scm 331 */
			{	/* Eval/eval.scm 332 */
				obj_t BgL_oldzd2intrhdlzd2_1354;

				BgL_oldzd2intrhdlzd2_1354 =
					BGl_getzd2signalzd2handlerz00zz__osz00(SIGINT);
				{	/* Eval/eval.scm 335 */
					obj_t BgL_exitd1064z00_1356;

					BgL_exitd1064z00_1356 = BGL_EXITD_TOP_AS_OBJ();
					{	/* Eval/eval.scm 376 */
						obj_t BgL_zc3z04anonymousza31456ze3z87_3679;

						BgL_zc3z04anonymousza31456ze3z87_3679 =
							MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31456ze3ze5zz__evalz00,
							(int) (((long) 0)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31456ze3z87_3679,
							(int) (((long) 0)), BgL_oldzd2intrhdlzd2_1354);
						BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1064z00_1356,
							BgL_zc3z04anonymousza31456ze3z87_3679);
						{	/* Eval/eval.scm 336 */
							obj_t BgL_tmp1066z00_1358;

							{	/* Eval/eval.scm 336 */
								obj_t BgL_g1067z00_1359;

								BgL_g1067z00_1359 = BGl_evalzd2modulezd2zz__evmodulez00();
								{
									obj_t BgL_modz00_1361;

									BgL_modz00_1361 = BgL_g1067z00_1359;
								BgL_zc3z04anonymousza31415ze3z87_1362:
									BGl_zc3z04exitza31416ze3ze70z60zz__evalz00(BgL_modz00_1361);
									{

										goto BgL_zc3z04anonymousza31415ze3z87_1362;
									}
								}
							}
							BGl_exitdzd2popzd2protectz12z12zz__bexitz00
								(BgL_exitd1064z00_1356);
							BGl_z62zc3z04anonymousza31456ze3ze5zz__evalz00
								(BgL_zc3z04anonymousza31456ze3z87_3679);
							return BgL_tmp1066z00_1358;
						}
					}
				}
			}
		}

	}



/* <@exit:1436>~0 */
	obj_t BGl_zc3z04exitza31436ze3ze70z60zz__evalz00(obj_t BgL_modz00_3814,
		obj_t BgL_res1070z00_3813)
	{
		{	/* Eval/eval.scm 350 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1078z00_1418;

			if (SET_EXIT(BgL_an_exit1078z00_1418))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1078z00_1418 = (void *) jmpbuf;
					{	/* Eval/eval.scm 350 */

						PUSH_EXIT(BgL_an_exit1078z00_1418, ((long) 1));
						{	/* Eval/eval.scm 350 */
							obj_t BgL_an_exitd1079z00_1419;

							BgL_an_exitd1079z00_1419 = ((obj_t) (&exitd));
							{	/* Eval/eval.scm 350 */
								bool_t BgL_res1081z00_1422;

								{	/* Eval/eval.scm 350 */
									obj_t BgL_ohs1068z00_1423;

									BgL_ohs1068z00_1423 = BGL_ERROR_HANDLER_GET();
									{	/* Eval/eval.scm 350 */
										obj_t BgL_exitd1074z00_1424;

										BgL_exitd1074z00_1424 = ((obj_t) (&exitd));
										{
											obj_t BgL_zc3z04anonymousza31443ze3z87_3676;

											BgL_zc3z04anonymousza31443ze3z87_3676 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31443ze3ze5zz__evalz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31443ze3z87_3676,
												(int) (((long) 0)), BgL_ohs1068z00_1423);
											BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
												(BgL_exitd1074z00_1424,
												BgL_zc3z04anonymousza31443ze3z87_3676);
											{	/* Eval/eval.scm 350 */
												bool_t BgL_tmp1076z00_1426;

												{	/* Eval/eval.scm 350 */
													obj_t BgL_arg1437z00_1427;

													{	/* Eval/eval.scm 350 */
														obj_t BgL_zc3z04anonymousza31439ze3z87_3675;

														BgL_zc3z04anonymousza31439ze3z87_3675 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31439ze3ze5zz__evalz00,
															(int) (((long) 1)), (int) (((long) 2)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31439ze3z87_3675,
															(int) (((long) 0)),
															((obj_t) BgL_res1070z00_3813));
														PROCEDURE_SET(BgL_zc3z04anonymousza31439ze3z87_3675,
															(int) (((long) 1)), BgL_an_exitd1079z00_1419);
														BgL_arg1437z00_1427 =
															MAKE_YOUNG_PAIR
															(BgL_zc3z04anonymousza31439ze3z87_3675,
															BgL_ohs1068z00_1423);
													}
													BGL_ERROR_HANDLER_SET(BgL_arg1437z00_1427);
													BUNSPEC;
												}
												{	/* Eval/eval.scm 350 */
													obj_t BgL_auxz00_3695;

													{
														obj_t BgL_modz00_1433;

														BgL_modz00_1433 = BgL_modz00_3814;
													BgL_zc3z04anonymousza31440ze3z87_1434:
														{	/* Eval/eval.scm 361 */
															obj_t BgL_tmpfunz00_4747;

															{	/* Eval/eval.scm 361 */
																obj_t BgL_aux2531z00_3855;

																BgL_aux2531z00_3855 =
																	BGl_za2promptza2z00zz__evalz00;
																{	/* Eval/eval.scm 361 */
																	bool_t BgL_test2532z00_3856;

																	BgL_test2532z00_3856 =
																		PROCEDUREP(BgL_aux2531z00_3855);
																	if (BgL_test2532z00_3856)
																		{	/* Eval/eval.scm 361 */
																			BgL_tmpfunz00_4747 = BgL_aux2531z00_3855;
																		}
																	else
																		{
																			obj_t BgL_auxz00_4750;

																			BgL_auxz00_4750 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string2812z00zz__evalz00,
																				BINT(((long) 14489)),
																				BGl_string2841z00zz__evalz00,
																				BGl_string2814z00zz__evalz00,
																				BgL_aux2531z00_3855);
																			FAILURE(BgL_auxz00_4750, BFALSE, BFALSE);
															}}}
															PROCEDURE_ENTRY(BgL_tmpfunz00_4747)
																(BGl_za2promptza2z00zz__evalz00,
																BGl_za2replzd2numza2zd2zz__evalz00, BEOA);
														}
														{	/* Eval/eval.scm 362 */
															obj_t BgL_expz00_1435;

															{	/* Eval/eval.scm 334 */
																obj_t BgL_fun1463z00_2731;

																BgL_fun1463z00_2731 =
																	BGl_getzd2evalzd2readerz00zz__evalz00();
																{	/* Eval/eval.scm 334 */
																	obj_t BgL_arg1462z00_2732;

																	{	/* Eval/eval.scm 334 */
																		obj_t BgL_res2293z00_2734;

																		{	/* Eval/eval.scm 334 */
																			obj_t BgL_tmpz00_4755;

																			BgL_tmpz00_4755 =
																				BGL_CURRENT_DYNAMIC_ENV();
																			BgL_res2293z00_2734 =
																				BGL_ENV_CURRENT_INPUT_PORT
																				(BgL_tmpz00_4755);
																		}
																		BgL_arg1462z00_2732 = BgL_res2293z00_2734;
																	}
																	{	/* Eval/eval.scm 334 */
																		obj_t BgL_tmpfunz00_4761;

																		{	/* Eval/eval.scm 334 */
																			bool_t BgL_test2534z00_3858;

																			BgL_test2534z00_3858 =
																				PROCEDUREP(BgL_fun1463z00_2731);
																			if (BgL_test2534z00_3858)
																				{	/* Eval/eval.scm 334 */
																					BgL_tmpfunz00_4761 =
																						BgL_fun1463z00_2731;
																				}
																			else
																				{
																					obj_t BgL_auxz00_4764;

																					BgL_auxz00_4764 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string2812z00zz__evalz00,
																						BINT(((long) 13633)),
																						BGl_string2841z00zz__evalz00,
																						BGl_string2814z00zz__evalz00,
																						BgL_fun1463z00_2731);
																					FAILURE(BgL_auxz00_4764, BFALSE,
																						BFALSE);
																		}}
																		BgL_expz00_1435 =
																			PROCEDURE_ENTRY(BgL_tmpfunz00_4761)
																			(BgL_fun1463z00_2731, BgL_arg1462z00_2732,
																			BEOA);
															}}}
															{	/* Eval/eval.scm 363 */
																bool_t BgL_test3239z00_4768;

																{	/* Eval/eval.scm 363 */
																	bool_t BgL_res2294z00_2735;

																	BgL_res2294z00_2735 =
																		EOF_OBJECTP(BgL_expz00_1435);
																	BgL_test3239z00_4768 = BgL_res2294z00_2735;
																}
																if (BgL_test3239z00_4768)
																	{	/* Eval/eval.scm 428 */
																		obj_t BgL_tmpfunz00_4774;

																		{	/* Eval/eval.scm 428 */
																			obj_t BgL_aux2535z00_3859;

																			BgL_aux2535z00_3859 =
																				BGl_za2replzd2quitza2zd2zz__evalz00;
																			{	/* Eval/eval.scm 428 */
																				bool_t BgL_test2536z00_3860;

																				BgL_test2536z00_3860 =
																					PROCEDUREP(BgL_aux2535z00_3859);
																				if (BgL_test2536z00_3860)
																					{	/* Eval/eval.scm 428 */
																						BgL_tmpfunz00_4774 =
																							BgL_aux2535z00_3859;
																					}
																				else
																					{
																						obj_t BgL_auxz00_4777;

																						BgL_auxz00_4777 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string2812z00zz__evalz00,
																							BINT(((long) 17333)),
																							BGl_string2841z00zz__evalz00,
																							BGl_string2814z00zz__evalz00,
																							BgL_aux2535z00_3859);
																						FAILURE(BgL_auxz00_4777, BFALSE,
																							BFALSE);
																		}}}
																		BgL_auxz00_3695 =
																			PROCEDURE_ENTRY(BgL_tmpfunz00_4774)
																			(BGl_za2replzd2quitza2zd2zz__evalz00,
																			BINT(((long) 0)), BEOA);
																	}
																else
																	{	/* Eval/eval.scm 365 */
																		obj_t BgL_vz00_1437;

																		{	/* Eval/eval.scm 83 */
																			obj_t BgL_envz00_1447;

																			{	/* Eval/eval.scm 254 */
																				obj_t BgL_mz00_2736;

																				BgL_mz00_2736 =
																					BGl_evalzd2modulezd2zz__evmodulez00();
																				if (BGl_evmodulezf3zf3zz__evmodulez00
																					(BgL_mz00_2736))
																					{	/* Eval/eval.scm 255 */
																						BgL_envz00_1447 = BgL_mz00_2736;
																					}
																				else
																					{	/* Eval/eval.scm 255 */
																						BgL_envz00_1447 =
																							BGl_symbol2810z00zz__evalz00;
																					}
																			}
																			{	/* Eval/eval.scm 83 */

																				{	/* Eval/eval.scm 172 */
																					obj_t BgL_auxz00_4784;

																					{	/* Eval/eval.scm 172 */
																						obj_t BgL_aux2537z00_3861;

																						BgL_aux2537z00_3861 =
																							BGl_defaultzd2evaluatezd2zz__evalz00;
																						if (PROCEDUREP(BgL_aux2537z00_3861))
																							{	/* Eval/eval.scm 172 */
																								BgL_auxz00_4784 =
																									BgL_aux2537z00_3861;
																							}
																						else
																							{
																								obj_t BgL_auxz00_4787;

																								BgL_auxz00_4787 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string2812z00zz__evalz00,
																									BINT(((long) 6523)),
																									BGl_string2841z00zz__evalz00,
																									BGl_string2814z00zz__evalz00,
																									BgL_aux2537z00_3861);
																								FAILURE(BgL_auxz00_4787, BFALSE,
																									BFALSE);
																					}}
																					BgL_vz00_1437 =
																						BGl_evalzf2expanderzf2zz__evalz00
																						(BgL_expz00_1435, BgL_envz00_1447,
																						BGl_expandzd2envzd2zz__expandz00,
																						BgL_auxz00_4784);
																		}}}
																		{	/* Eval/eval.scm 365 */
																			obj_t BgL_nmodz00_1438;

																			BgL_nmodz00_1438 =
																				BGl_evalzd2modulezd2zz__evmodulez00();
																			{	/* Eval/eval.scm 366 */

																				{	/* Eval/eval.scm 367 */
																					bool_t BgL_test3243z00_4793;

																					if (
																						(BgL_nmodz00_1438 ==
																							BgL_modz00_1433))
																						{	/* Eval/eval.scm 367 */
																							BgL_test3243z00_4793 =
																								((bool_t) 0);
																						}
																					else
																						{	/* Eval/eval.scm 367 */
																							BgL_test3243z00_4793 =
																								BGl_evmodulezf3zf3zz__evmodulez00
																								(BgL_modz00_1433);
																						}
																					if (BgL_test3243z00_4793)
																						{	/* Eval/eval.scm 367 */
																							BGl_evmodulezd2checkzd2unboundz00zz__evmodulez00
																								(BgL_modz00_1433, BFALSE);
																						}
																					else
																						{	/* Eval/eval.scm 367 */
																							BFALSE;
																						}
																				}
																				{	/* Eval/eval.scm 370 */
																					bool_t BgL_test3245z00_4798;

																					{	/* Eval/eval.scm 370 */
																						obj_t BgL_arg1441z00_1443;

																						{	/* Eval/eval.scm 370 */
																							obj_t BgL_res2295z00_2739;

																							{	/* Eval/eval.scm 370 */
																								obj_t BgL_tmpz00_4799;

																								BgL_tmpz00_4799 =
																									BGL_CURRENT_DYNAMIC_ENV();
																								BgL_res2295z00_2739 =
																									BGL_ENV_CURRENT_OUTPUT_PORT
																									(BgL_tmpz00_4799);
																							}
																							BgL_arg1441z00_1443 =
																								BgL_res2295z00_2739;
																						}
																						BgL_test3245z00_4798 =
																							(BGl_za2transcriptza2z00zz__evalz00
																							== BgL_arg1441z00_1443);
																					}
																					if (BgL_test3245z00_4798)
																						{	/* Eval/eval.scm 370 */
																							BFALSE;
																						}
																					else
																						{	/* Eval/eval.scm 371 */
																							obj_t BgL_port1205z00_1442;

																							BgL_port1205z00_1442 =
																								BGl_za2transcriptza2z00zz__evalz00;
																							{	/* Eval/eval.scm 371 */
																								obj_t BgL_portz00_2741;

																								if (OUTPUT_PORTP
																									(BgL_port1205z00_1442))
																									{	/* Eval/eval.scm 371 */
																										BgL_portz00_2741 =
																											BgL_port1205z00_1442;
																									}
																								else
																									{
																										obj_t BgL_auxz00_4805;

																										BgL_auxz00_4805 =
																											BGl_typezd2errorzd2zz__errorz00
																											(BGl_string2812z00zz__evalz00,
																											BINT(((long) 14819)),
																											BGl_string2841z00zz__evalz00,
																											BGl_string2842z00zz__evalz00,
																											BgL_port1205z00_1442);
																										FAILURE(BgL_auxz00_4805,
																											BFALSE, BFALSE);
																									}
																								bgl_display_string
																									(BGl_string2843z00zz__evalz00,
																									BgL_portz00_2741);
																							}
																							{	/* Eval/eval.scm 371 */
																								obj_t BgL_auxz00_4810;

																								if (OUTPUT_PORTP
																									(BgL_port1205z00_1442))
																									{	/* Eval/eval.scm 371 */
																										BgL_auxz00_4810 =
																											BgL_port1205z00_1442;
																									}
																								else
																									{
																										obj_t BgL_auxz00_4813;

																										BgL_auxz00_4813 =
																											BGl_typezd2errorzd2zz__errorz00
																											(BGl_string2812z00zz__evalz00,
																											BINT(((long) 14819)),
																											BGl_string2841z00zz__evalz00,
																											BGl_string2842z00zz__evalz00,
																											BgL_port1205z00_1442);
																										FAILURE(BgL_auxz00_4813,
																											BFALSE, BFALSE);
																									}
																								bgl_display_obj(BgL_expz00_1435,
																									BgL_auxz00_4810);
																							}
																							{	/* Eval/eval.scm 371 */
																								obj_t BgL_portz00_2742;

																								if (OUTPUT_PORTP
																									(BgL_port1205z00_1442))
																									{	/* Eval/eval.scm 371 */
																										BgL_portz00_2742 =
																											BgL_port1205z00_1442;
																									}
																								else
																									{
																										obj_t BgL_auxz00_4820;

																										BgL_auxz00_4820 =
																											BGl_typezd2errorzd2zz__errorz00
																											(BGl_string2812z00zz__evalz00,
																											BINT(((long) 14819)),
																											BGl_string2841z00zz__evalz00,
																											BGl_string2842z00zz__evalz00,
																											BgL_port1205z00_1442);
																										FAILURE(BgL_auxz00_4820,
																											BFALSE, BFALSE);
																									}
																								bgl_display_char(((unsigned
																											char) 10),
																									BgL_portz00_2742);
																				}}}
																				{	/* Eval/eval.scm 372 */
																					obj_t BgL_tmpfunz00_4829;

																					{	/* Eval/eval.scm 372 */
																						obj_t BgL_aux2545z00_3869;

																						BgL_aux2545z00_3869 =
																							BGl_za2replzd2printerza2zd2zz__evalz00;
																						{	/* Eval/eval.scm 372 */
																							bool_t BgL_test2546z00_3870;

																							BgL_test2546z00_3870 =
																								PROCEDUREP(BgL_aux2545z00_3869);
																							if (BgL_test2546z00_3870)
																								{	/* Eval/eval.scm 372 */
																									BgL_tmpfunz00_4829 =
																										BgL_aux2545z00_3869;
																								}
																							else
																								{
																									obj_t BgL_auxz00_4832;

																									BgL_auxz00_4832 =
																										BGl_typezd2errorzd2zz__errorz00
																										(BGl_string2812z00zz__evalz00,
																										BINT(((long) 14858)),
																										BGl_string2841z00zz__evalz00,
																										BGl_string2814z00zz__evalz00,
																										BgL_aux2545z00_3869);
																									FAILURE(BgL_auxz00_4832,
																										BFALSE, BFALSE);
																					}}}
																					PROCEDURE_ENTRY(BgL_tmpfunz00_4829)
																						(BGl_za2replzd2printerza2zd2zz__evalz00,
																						BgL_vz00_1437,
																						BGl_za2transcriptza2z00zz__evalz00,
																						BEOA);
																				}
																				{	/* Eval/eval.scm 373 */
																					obj_t BgL_portz00_2743;

																					{	/* Eval/eval.scm 373 */
																						obj_t BgL_aux2547z00_3871;

																						BgL_aux2547z00_3871 =
																							BGl_za2transcriptza2z00zz__evalz00;
																						if (OUTPUT_PORTP
																							(BgL_aux2547z00_3871))
																							{	/* Eval/eval.scm 373 */
																								BgL_portz00_2743 =
																									BgL_aux2547z00_3871;
																							}
																						else
																							{
																								obj_t BgL_auxz00_4838;

																								BgL_auxz00_4838 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string2812z00zz__evalz00,
																									BINT(((long) 14896)),
																									BGl_string2841z00zz__evalz00,
																									BGl_string2842z00zz__evalz00,
																									BgL_aux2547z00_3871);
																								FAILURE(BgL_auxz00_4838, BFALSE,
																									BFALSE);
																					}}
																					bgl_display_char(((unsigned char) 10),
																						BgL_portz00_2743);
																				}
																				{	/* Eval/eval.scm 374 */
																					obj_t BgL_arg1442z00_1444;

																					if (CBOOL(BgL_nmodz00_1438))
																						{	/* Eval/eval.scm 374 */
																							BgL_arg1442z00_1444 =
																								BgL_nmodz00_1438;
																						}
																					else
																						{	/* Eval/eval.scm 374 */
																							BgL_arg1442z00_1444 =
																								BgL_modz00_1433;
																						}
																					{
																						obj_t BgL_modz00_4845;

																						BgL_modz00_4845 =
																							BgL_arg1442z00_1444;
																						BgL_modz00_1433 = BgL_modz00_4845;
																						goto
																							BgL_zc3z04anonymousza31440ze3z87_1434;
																					}
																				}
																			}
																		}
																	}
															}
														}
													}
													CELL_SET(BgL_res1070z00_3813, BgL_auxz00_3695);
												}
												BgL_tmp1076z00_1426 = ((bool_t) 0);
												BGl_exitdzd2popzd2protectz12z12zz__bexitz00
													(BgL_exitd1074z00_1424);
												BGL_ERROR_HANDLER_SET(BgL_ohs1068z00_1423);
												BUNSPEC;
												BgL_res1081z00_1422 = BgL_tmp1076z00_1426;
											}
										}
									}
								}
								POP_EXIT();
								return BBOOL(BgL_res1081z00_1422);
							}
						}
					}
				}
		}

	}



/* <@exit:1416>~0 */
	obj_t BGl_zc3z04exitza31416ze3ze70z60zz__evalz00(obj_t BgL_modz00_3815)
	{
		{	/* Eval/eval.scm 337 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1082z00_1364;

			if (SET_EXIT(BgL_an_exit1082z00_1364))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1082z00_1364 = (void *) jmpbuf;
					{	/* Eval/eval.scm 337 */

						PUSH_EXIT(BgL_an_exit1082z00_1364, ((long) 1));
						{	/* Eval/eval.scm 337 */
							obj_t BgL_an_exitd1083z00_1365;

							BgL_an_exitd1083z00_1365 = ((obj_t) (&exitd));
							{	/* Eval/eval.scm 337 */
								obj_t BgL_res1085z00_1368;

								{	/* Eval/eval.scm 340 */
									obj_t BgL_intrhdlz00_3677;

									BgL_intrhdlz00_3677 =
										MAKE_FX_PROCEDURE(BGl_z62intrhdlz62zz__evalz00,
										(int) (((long) 1)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_intrhdlz00_3677,
										(int) (((long) 0)), BgL_an_exitd1083z00_1365);
									BGl_signalz00zz__osz00(SIGINT, BgL_intrhdlz00_3677);
								}
								{	/* Eval/eval.scm 348 */
									obj_t BgL_arg1419z00_1374;

									{	/* Eval/eval.scm 348 */
										obj_t BgL_res2288z00_2722;

										{	/* Eval/eval.scm 348 */
											obj_t BgL_tmpz00_4859;

											BgL_tmpz00_4859 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res2288z00_2722 =
												BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4859);
										}
										BgL_arg1419z00_1374 = BgL_res2288z00_2722;
									}
									bgl_display_char(((unsigned char) 10), BgL_arg1419z00_1374);
								}
								{
									obj_t BgL_modz00_1376;

									BgL_modz00_1376 = BgL_modz00_3815;
								BgL_zc3z04anonymousza31420ze3z87_1377:
									{	/* Eval/eval.scm 350 */
										obj_t BgL_res1070z00_3694;

										BgL_res1070z00_3694 = MAKE_CELL(BUNSPEC);
										{
											obj_t BgL_ez00_1451;

											if (CBOOL(BGl_zc3z04exitza31436ze3ze70z60zz__evalz00
													(BgL_modz00_1376, BgL_res1070z00_3694)))
												{	/* Eval/eval.scm 350 */
													BgL_ez00_1451 = CELL_REF(BgL_res1070z00_3694);
													{	/* Eval/eval.scm 352 */
														bool_t BgL_test3253z00_4866;

														{	/* Eval/eval.scm 352 */
															obj_t BgL_arg1451z00_1457;

															BgL_arg1451z00_1457 = BGL_ERROR_NOTIFIERS_GET();
															BgL_test3253z00_4866 = PAIRP(BgL_arg1451z00_1457);
														}
														if (BgL_test3253z00_4866)
															{	/* Eval/eval.scm 353 */
																obj_t BgL_fun1450z00_1456;

																{	/* Eval/eval.scm 353 */
																	obj_t BgL_arg1448z00_1455;

																	BgL_arg1448z00_1455 =
																		BGL_ERROR_NOTIFIERS_GET();
																	{	/* Eval/eval.scm 353 */
																		obj_t BgL_pairz00_2725;

																		if (PAIRP(BgL_arg1448z00_1455))
																			{	/* Eval/eval.scm 353 */
																				BgL_pairz00_2725 = BgL_arg1448z00_1455;
																			}
																		else
																			{
																				obj_t BgL_auxz00_4872;

																				BgL_auxz00_4872 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string2812z00zz__evalz00,
																					BINT(((long) 14287)),
																					BGl_string2844z00zz__evalz00,
																					BGl_string2840z00zz__evalz00,
																					BgL_arg1448z00_1455);
																				FAILURE(BgL_auxz00_4872, BFALSE,
																					BFALSE);
																			}
																		BgL_fun1450z00_1456 = CAR(BgL_pairz00_2725);
																}}
																{	/* Eval/eval.scm 353 */
																	obj_t BgL_tmpfunz00_4880;

																	{	/* Eval/eval.scm 353 */
																		bool_t BgL_test2552z00_3876;

																		BgL_test2552z00_3876 =
																			PROCEDUREP(BgL_fun1450z00_1456);
																		if (BgL_test2552z00_3876)
																			{	/* Eval/eval.scm 353 */
																				BgL_tmpfunz00_4880 =
																					BgL_fun1450z00_1456;
																			}
																		else
																			{
																				obj_t BgL_auxz00_4883;

																				BgL_auxz00_4883 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string2812z00zz__evalz00,
																					BINT(((long) 14260)),
																					BGl_string2844z00zz__evalz00,
																					BGl_string2814z00zz__evalz00,
																					BgL_fun1450z00_1456);
																				FAILURE(BgL_auxz00_4883, BFALSE,
																					BFALSE);
																	}}
																	PROCEDURE_ENTRY(BgL_tmpfunz00_4880)
																		(BgL_fun1450z00_1456, BgL_ez00_1451, BEOA);
															}}
														else
															{	/* Eval/eval.scm 352 */
																BGl_errorzd2notifyzd2zz__errorz00
																	(BgL_ez00_1451);
															}
													}
													{	/* Eval/eval.scm 355 */
														BgL_z62errorz62_bglt BgL_i1073z00_1458;

														if (BGl_isazf3zf3zz__objectz00(BgL_ez00_1451,
																BGl_z62errorz62zz__objectz00))
															{	/* Eval/eval.scm 356 */
																BgL_i1073z00_1458 =
																	((BgL_z62errorz62_bglt) BgL_ez00_1451);
															}
														else
															{
																obj_t BgL_auxz00_4891;

																BgL_auxz00_4891 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2812z00zz__evalz00,
																	BINT(((long) 14356)),
																	BGl_string2844z00zz__evalz00,
																	BGl_string2845z00zz__evalz00, BgL_ez00_1451);
																FAILURE(BgL_auxz00_4891, BFALSE, BFALSE);
															}
														{	/* Eval/eval.scm 356 */
															bool_t BgL_test3257z00_4895;

															{	/* Eval/eval.scm 356 */
																obj_t BgL_arg1455z00_1462;

																BgL_arg1455z00_1462 =
																	(((BgL_z62errorz62_bglt)
																		COBJECT(BgL_i1073z00_1458))->BgL_objz00);
																{	/* Eval/eval.scm 356 */
																	bool_t BgL_res2290z00_2726;

																	BgL_res2290z00_2726 =
																		EOF_OBJECTP(BgL_arg1455z00_1462);
																	BgL_test3257z00_4895 = BgL_res2290z00_2726;
															}}
															if (BgL_test3257z00_4895)
																{	/* Eval/eval.scm 357 */
																	obj_t BgL_arg1454z00_1461;

																	{	/* Eval/eval.scm 357 */
																		obj_t BgL_res2291z00_2728;

																		{	/* Eval/eval.scm 357 */
																			obj_t BgL_tmpz00_4898;

																			BgL_tmpz00_4898 =
																				BGL_CURRENT_DYNAMIC_ENV();
																			BgL_res2291z00_2728 =
																				BGL_ENV_CURRENT_INPUT_PORT
																				(BgL_tmpz00_4898);
																		}
																		BgL_arg1454z00_1461 = BgL_res2291z00_2728;
																	}
																	reset_eof(BgL_arg1454z00_1461);
																}
															else
																{	/* Eval/eval.scm 356 */
																	((bool_t) 0);
																}
														}
													}
													{	/* Eval/eval.scm 358 */
														int BgL_tmpz00_4902;

														BgL_tmpz00_4902 = (int) (((long) 0));
														BGL_SIGSETMASK(BgL_tmpz00_4902);
													}
													{

														goto BgL_zc3z04anonymousza31420ze3z87_1377;
													}
												}
											else
												{	/* Eval/eval.scm 350 */
													BgL_res1085z00_1368 = CELL_REF(BgL_res1070z00_3694);
												}
										}
									}
								}
								POP_EXIT();
								return BgL_res1085z00_1368;
							}
						}
					}
				}
		}

	}



/* &<@anonymous:1439> */
	obj_t BGl_z62zc3z04anonymousza31439ze3ze5zz__evalz00(obj_t BgL_envz00_3680,
		obj_t BgL_ez00_3683)
	{
		{	/* Eval/eval.scm 350 */
			{	/* Eval/eval.scm 350 */
				obj_t BgL_res1070z00_3681;
				obj_t BgL_an_exitd1079z00_3682;

				BgL_res1070z00_3681 =
					PROCEDURE_REF(BgL_envz00_3680, (int) (((long) 0)));
				BgL_an_exitd1079z00_3682 =
					PROCEDURE_REF(BgL_envz00_3680, (int) (((long) 1)));
				CELL_SET(BgL_res1070z00_3681, BgL_ez00_3683);
				return
					BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1079z00_3682, BTRUE);
			}
		}

	}



/* &<@anonymous:1443> */
	obj_t BGl_z62zc3z04anonymousza31443ze3ze5zz__evalz00(obj_t BgL_envz00_3685)
	{
		{	/* Eval/eval.scm 350 */
			{
				obj_t BgL_ohs1068z00_3686;

				BgL_ohs1068z00_3686 =
					PROCEDURE_REF(BgL_envz00_3685, (int) (((long) 0)));
				BGL_ERROR_HANDLER_SET(BgL_ohs1068z00_3686);
				return BUNSPEC;
			}
		}

	}



/* &intrhdl */
	obj_t BGl_z62intrhdlz62zz__evalz00(obj_t BgL_envz00_3687, obj_t BgL_nz00_3689)
	{
		{	/* Eval/eval.scm 339 */
			{	/* Eval/eval.scm 340 */
				obj_t BgL_an_exitd1083z00_3688;

				BgL_an_exitd1083z00_3688 =
					PROCEDURE_REF(BgL_envz00_3687, (int) (((long) 0)));
				{	/* Eval/eval.scm 340 */
					int BgL_auxz00_4916;

					{	/* Eval/eval.scm 340 */
						obj_t BgL_tmpz00_4917;

						if (INTEGERP(BgL_nz00_3689))
							{	/* Eval/eval.scm 340 */
								BgL_tmpz00_4917 = BgL_nz00_3689;
							}
						else
							{
								obj_t BgL_auxz00_4920;

								BgL_auxz00_4920 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2812z00zz__evalz00,
									BINT(((long) 13870)), BGl_string2846z00zz__evalz00,
									BGl_string2823z00zz__evalz00, BgL_nz00_3689);
								FAILURE(BgL_auxz00_4920, BFALSE, BFALSE);
							}
						BgL_auxz00_4916 = CINT(BgL_tmpz00_4917);
					}
					BGl_notifyzd2interruptzd2zz__errorz00(BgL_auxz00_4916);
				}
				{	/* Eval/eval.scm 342 */
					obj_t BgL_arg1418z00_4155;

					{	/* Eval/eval.scm 342 */
						obj_t BgL_res2287z00_4156;

						{	/* Eval/eval.scm 342 */
							obj_t BgL_tmpz00_4926;

							BgL_tmpz00_4926 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2287z00_4156 = BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_4926);
						}
						BgL_arg1418z00_4155 = BgL_res2287z00_4156;
					}
					reset_console(BgL_arg1418z00_4155);
				}
				{	/* Eval/eval.scm 344 */
					int BgL_tmpz00_4930;

					BgL_tmpz00_4930 = (int) (((long) 0));
					BGL_SIGSETMASK(BgL_tmpz00_4930);
				}
				return
					BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1083z00_3688,
					BUNSPEC);
			}
		}

	}



/* &<@anonymous:1456> */
	obj_t BGl_z62zc3z04anonymousza31456ze3ze5zz__evalz00(obj_t BgL_envz00_3690)
	{
		{	/* Eval/eval.scm 335 */
			{	/* Eval/eval.scm 376 */
				obj_t BgL_oldzd2intrhdlzd2_3691;

				BgL_oldzd2intrhdlzd2_3691 =
					PROCEDURE_REF(BgL_envz00_3690, (int) (((long) 0)));
				if (PROCEDUREP(BgL_oldzd2intrhdlzd2_3691))
					{	/* Eval/eval.scm 376 */
						return BGl_signalz00zz__osz00(SIGINT, BgL_oldzd2intrhdlzd2_3691);
					}
				else
					{	/* Eval/eval.scm 376 */
						return BGl_signalz00zz__osz00(SIGINT, BGl_proc2847z00zz__evalz00);
					}
			}
		}

	}



/* &<@anonymous:1459> */
	obj_t BGl_z62zc3z04anonymousza31459ze3ze5zz__evalz00(obj_t BgL_envz00_3692,
		obj_t BgL_nz00_3693)
	{
		{	/* Eval/eval.scm 378 */
			{	/* Eval/eval.scm 378 */
				obj_t BgL_list1460z00_4157;

				BgL_list1460z00_4157 = MAKE_YOUNG_PAIR(BINT(((long) 0)), BNIL);
				return BGl_exitz00zz__errorz00(BgL_list1460z00_4157);
			}
		}

	}



/* &default-repl-printer */
	obj_t BGl_z62defaultzd2replzd2printerz62zz__evalz00(obj_t BgL_envz00_3624,
		obj_t BgL_expz00_3625, obj_t BgL_portz00_3626)
	{
		{	/* Eval/eval.scm 383 */
			{	/* Eval/eval.scm 384 */
				obj_t BgL_auxz00_4943;

				{	/* Eval/eval.scm 384 */
					obj_t BgL_list1464z00_4158;

					BgL_list1464z00_4158 = MAKE_YOUNG_PAIR(BgL_portz00_3626, BNIL);
					BgL_auxz00_4943 =
						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_expz00_3625,
						BgL_list1464z00_4158);
				}
				return
					apply(BGl_displayzd2circlezd2envz00zz__pp_circlez00, BgL_auxz00_4943);
			}
		}

	}



/* set-repl-printer! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2replzd2printerz12z12zz__evalz00(obj_t
		BgL_dispz00_32)
	{
		{	/* Eval/eval.scm 394 */
			if (PROCEDURE_CORRECT_ARITYP(BgL_dispz00_32, (int) (((long) -2))))
				{	/* Eval/eval.scm 397 */
					obj_t BgL_oldz00_2746;

					BgL_oldz00_2746 = BGl_za2replzd2printerza2zd2zz__evalz00;
					BGl_za2replzd2printerza2zd2zz__evalz00 = BgL_dispz00_32;
					return BgL_oldz00_2746;
				}
			else
				{	/* Eval/eval.scm 395 */
					return
						BGl_errorz00zz__errorz00(BGl_symbol2848z00zz__evalz00,
						BGl_string2850z00zz__evalz00, BgL_dispz00_32);
				}
		}

	}



/* &set-repl-printer! */
	obj_t BGl_z62setzd2replzd2printerz12z70zz__evalz00(obj_t BgL_envz00_3700,
		obj_t BgL_dispz00_3701)
	{
		{	/* Eval/eval.scm 394 */
			{	/* Eval/eval.scm 395 */
				obj_t BgL_auxz00_4951;

				if (PROCEDUREP(BgL_dispz00_3701))
					{	/* Eval/eval.scm 395 */
						BgL_auxz00_4951 = BgL_dispz00_3701;
					}
				else
					{
						obj_t BgL_auxz00_4954;

						BgL_auxz00_4954 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2812z00zz__evalz00,
							BINT(((long) 15911)), BGl_string2851z00zz__evalz00,
							BGl_string2814z00zz__evalz00, BgL_dispz00_3701);
						FAILURE(BgL_auxz00_4954, BFALSE, BFALSE);
					}
				return BGl_setzd2replzd2printerz12z12zz__evalz00(BgL_auxz00_4951);
			}
		}

	}



/* native-repl-printer */
	BGL_EXPORTED_DEF obj_t BGl_nativezd2replzd2printerz00zz__evalz00()
	{
		{	/* Eval/eval.scm 404 */
			return BGl_defaultzd2replzd2printerzd2envzd2zz__evalz00;
		}

	}



/* &native-repl-printer */
	obj_t BGl_z62nativezd2replzd2printerz62zz__evalz00(obj_t BgL_envz00_3702)
	{
		{	/* Eval/eval.scm 404 */
			return BGl_nativezd2replzd2printerz00zz__evalz00();
		}

	}



/* c-debug-repl */
	BGL_EXPORTED_DEF obj_t bgl_debug_repl(obj_t BgL_valz00_33)
	{
		{	/* Eval/eval.scm 415 */
			BGl_za2czd2debugzd2replzd2valueza2zd2zz__evalz00 = BgL_valz00_33;
			{

				{	/* Eval/eval.scm 417 */
					bool_t BgL_tmpz00_4960;

				BgL_zc3z04anonymousza31466ze3z87_1482:
					{	/* Eval/eval.scm 418 */
						obj_t BgL_arg1467z00_1483;

						{	/* Eval/eval.scm 418 */
							obj_t BgL_res2296z00_2748;

							{	/* Eval/eval.scm 418 */
								obj_t BgL_tmpz00_4961;

								BgL_tmpz00_4961 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2296z00_2748 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4961);
							}
							BgL_arg1467z00_1483 = BgL_res2296z00_2748;
						}
						bgl_display_string(BGl_string2852z00zz__evalz00,
							BgL_arg1467z00_1483);
					}
					{	/* Eval/eval.scm 419 */
						obj_t BgL_expz00_1484;

						{	/* Eval/eval.scm 419 */
							obj_t BgL_fun1471z00_1490;

							BgL_fun1471z00_1490 = BGl_getzd2evalzd2readerz00zz__evalz00();
							{	/* Eval/eval.scm 419 */
								obj_t BgL_arg1470z00_1491;

								{	/* Eval/eval.scm 419 */
									obj_t BgL_res2297z00_2752;

									{	/* Eval/eval.scm 419 */
										obj_t BgL_tmpz00_4966;

										BgL_tmpz00_4966 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2297z00_2752 =
											BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_4966);
									}
									BgL_arg1470z00_1491 = BgL_res2297z00_2752;
								}
								{	/* Eval/eval.scm 419 */
									obj_t BgL_tmpfunz00_4972;

									{	/* Eval/eval.scm 419 */
										bool_t BgL_test2560z00_3886;

										BgL_test2560z00_3886 = PROCEDUREP(BgL_fun1471z00_1490);
										if (BgL_test2560z00_3886)
											{	/* Eval/eval.scm 419 */
												BgL_tmpfunz00_4972 = BgL_fun1471z00_1490;
											}
										else
											{
												obj_t BgL_auxz00_4975;

												BgL_auxz00_4975 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2812z00zz__evalz00, BINT(((long) 16981)),
													BGl_string2853z00zz__evalz00,
													BGl_string2814z00zz__evalz00, BgL_fun1471z00_1490);
												FAILURE(BgL_auxz00_4975, BFALSE, BFALSE);
									}}
									BgL_expz00_1484 =
										PROCEDURE_ENTRY(BgL_tmpfunz00_4972) (BgL_fun1471z00_1490,
										BgL_arg1470z00_1491, BEOA);
						}}}
						{	/* Eval/eval.scm 420 */
							bool_t BgL_test3263z00_4979;

							{	/* Eval/eval.scm 420 */
								bool_t BgL_res2298z00_2753;

								BgL_res2298z00_2753 = EOF_OBJECTP(BgL_expz00_1484);
								BgL_test3263z00_4979 = BgL_res2298z00_2753;
							}
							if (BgL_test3263z00_4979)
								{	/* Eval/eval.scm 420 */
									BgL_tmpz00_4960 = ((bool_t) 0);
								}
							else
								{	/* Eval/eval.scm 420 */
									{	/* Eval/eval.scm 421 */
										obj_t BgL_port1206z00_1486;

										{	/* Eval/eval.scm 421 */
											obj_t BgL_res2299z00_2755;

											{	/* Eval/eval.scm 421 */
												obj_t BgL_tmpz00_4981;

												BgL_tmpz00_4981 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res2299z00_2755 =
													BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4981);
											}
											BgL_port1206z00_1486 = BgL_res2299z00_2755;
										}
										{	/* Eval/eval.scm 421 */
											obj_t BgL_arg1469z00_1487;

											{	/* Eval/eval.scm 83 */
												obj_t BgL_envz00_1489;

												{	/* Eval/eval.scm 254 */
													obj_t BgL_mz00_2756;

													BgL_mz00_2756 = BGl_evalzd2modulezd2zz__evmodulez00();
													if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_mz00_2756))
														{	/* Eval/eval.scm 255 */
															BgL_envz00_1489 = BgL_mz00_2756;
														}
													else
														{	/* Eval/eval.scm 255 */
															BgL_envz00_1489 = BGl_symbol2810z00zz__evalz00;
														}
												}
												{	/* Eval/eval.scm 83 */

													{	/* Eval/eval.scm 172 */
														obj_t BgL_auxz00_4987;

														{	/* Eval/eval.scm 172 */
															obj_t BgL_aux2561z00_3887;

															BgL_aux2561z00_3887 =
																BGl_defaultzd2evaluatezd2zz__evalz00;
															if (PROCEDUREP(BgL_aux2561z00_3887))
																{	/* Eval/eval.scm 172 */
																	BgL_auxz00_4987 = BgL_aux2561z00_3887;
																}
															else
																{
																	obj_t BgL_auxz00_4990;

																	BgL_auxz00_4990 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2812z00zz__evalz00,
																		BINT(((long) 6523)),
																		BGl_string2853z00zz__evalz00,
																		BGl_string2814z00zz__evalz00,
																		BgL_aux2561z00_3887);
																	FAILURE(BgL_auxz00_4990, BFALSE, BFALSE);
														}}
														BgL_arg1469z00_1487 =
															BGl_evalzf2expanderzf2zz__evalz00(BgL_expz00_1484,
															BgL_envz00_1489, BGl_expandzd2envzd2zz__expandz00,
															BgL_auxz00_4987);
											}}}
											bgl_display_obj(BgL_arg1469z00_1487,
												BgL_port1206z00_1486);
										}
										bgl_display_char(((unsigned char) 10),
											BgL_port1206z00_1486);
									}
									goto BgL_zc3z04anonymousza31466ze3z87_1482;
								}
						}
					}
					return BBOOL(BgL_tmpz00_4960);
				}
			}
		}

	}



/* &c-debug-repl */
	obj_t BGl_z62czd2debugzd2replz62zz__evalz00(obj_t BgL_envz00_3703,
		obj_t BgL_valz00_3704)
	{
		{	/* Eval/eval.scm 415 */
			return bgl_debug_repl(BgL_valz00_3704);
		}

	}



/* quit */
	BGL_EXPORTED_DEF obj_t BGl_quitz00zz__evalz00()
	{
		{	/* Eval/eval.scm 427 */
			{	/* Eval/eval.scm 428 */
				obj_t BgL_tmpfunz00_5003;

				{	/* Eval/eval.scm 428 */
					obj_t BgL_aux2563z00_3889;

					BgL_aux2563z00_3889 = BGl_za2replzd2quitza2zd2zz__evalz00;
					{	/* Eval/eval.scm 428 */
						bool_t BgL_test2564z00_3890;

						BgL_test2564z00_3890 = PROCEDUREP(BgL_aux2563z00_3889);
						if (BgL_test2564z00_3890)
							{	/* Eval/eval.scm 428 */
								BgL_tmpfunz00_5003 = BgL_aux2563z00_3889;
							}
						else
							{
								obj_t BgL_auxz00_5006;

								BgL_auxz00_5006 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2812z00zz__evalz00,
									BINT(((long) 17333)), BGl_string2854z00zz__evalz00,
									BGl_string2814z00zz__evalz00, BgL_aux2563z00_3889);
								FAILURE(BgL_auxz00_5006, BFALSE, BFALSE);
				}}}
				return
					PROCEDURE_ENTRY(BgL_tmpfunz00_5003)
					(BGl_za2replzd2quitza2zd2zz__evalz00, BINT(((long) 0)), BEOA);
		}}

	}



/* &quit2500 */
	obj_t BGl_z62quit2500z62zz__evalz00(obj_t BgL_envz00_3705)
	{
		{	/* Eval/eval.scm 427 */
			return BGl_quitz00zz__evalz00();
		}

	}



/* find-file */
	obj_t BGl_findzd2filezd2zz__evalz00(obj_t BgL_namez00_34)
	{
		{	/* Eval/eval.scm 438 */
			if (STRINGP(BgL_namez00_34))
				{	/* Eval/eval.scm 439 */
					if (fexists(BSTRING_TO_STRING(BgL_namez00_34)))
						{	/* Eval/eval.scm 441 */
							return BgL_namez00_34;
						}
					else
						{
							obj_t BgL_pathz00_1496;

							BgL_pathz00_1496 = BGl_za2loadzd2pathza2zd2zz__evalz00;
						BgL_zc3z04anonymousza31474ze3z87_1497:
							if (NULLP(BgL_pathz00_1496))
								{	/* Eval/eval.scm 444 */
									return BgL_namez00_34;
								}
							else
								{	/* Eval/eval.scm 446 */
									obj_t BgL_fz00_1499;

									{	/* Eval/eval.scm 446 */
										obj_t BgL_arg1478z00_1502;

										{	/* Eval/eval.scm 446 */
											obj_t BgL_pairz00_2763;

											if (PAIRP(BgL_pathz00_1496))
												{	/* Eval/eval.scm 446 */
													BgL_pairz00_2763 = BgL_pathz00_1496;
												}
											else
												{
													obj_t BgL_auxz00_5020;

													BgL_auxz00_5020 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2812z00zz__evalz00, BINT(((long) 18067)),
														BGl_string2853z00zz__evalz00,
														BGl_string2840z00zz__evalz00, BgL_pathz00_1496);
													FAILURE(BgL_auxz00_5020, BFALSE, BFALSE);
												}
											BgL_arg1478z00_1502 = CAR(BgL_pairz00_2763);
										}
										{	/* Eval/eval.scm 446 */
											obj_t BgL_auxz00_5025;

											if (STRINGP(BgL_arg1478z00_1502))
												{	/* Eval/eval.scm 446 */
													BgL_auxz00_5025 = BgL_arg1478z00_1502;
												}
											else
												{
													obj_t BgL_auxz00_5028;

													BgL_auxz00_5028 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2812z00zz__evalz00, BINT(((long) 18071)),
														BGl_string2853z00zz__evalz00,
														BGl_string2821z00zz__evalz00, BgL_arg1478z00_1502);
													FAILURE(BgL_auxz00_5028, BFALSE, BFALSE);
												}
											BgL_fz00_1499 =
												BGl_makezd2filezd2namez00zz__osz00(BgL_auxz00_5025,
												BgL_namez00_34);
									}}
									if (fexists(BSTRING_TO_STRING(BgL_fz00_1499)))
										{	/* Eval/eval.scm 447 */
											return BgL_fz00_1499;
										}
									else
										{	/* Eval/eval.scm 449 */
											obj_t BgL_arg1477z00_1501;

											{	/* Eval/eval.scm 449 */
												obj_t BgL_pairz00_2766;

												if (PAIRP(BgL_pathz00_1496))
													{	/* Eval/eval.scm 449 */
														BgL_pairz00_2766 = BgL_pathz00_1496;
													}
												else
													{
														obj_t BgL_auxz00_5038;

														BgL_auxz00_5038 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2812z00zz__evalz00,
															BINT(((long) 18130)),
															BGl_string2853z00zz__evalz00,
															BGl_string2840z00zz__evalz00, BgL_pathz00_1496);
														FAILURE(BgL_auxz00_5038, BFALSE, BFALSE);
													}
												BgL_arg1477z00_1501 = CDR(BgL_pairz00_2766);
											}
											{
												obj_t BgL_pathz00_5043;

												BgL_pathz00_5043 = BgL_arg1477z00_1501;
												BgL_pathz00_1496 = BgL_pathz00_5043;
												goto BgL_zc3z04anonymousza31474ze3z87_1497;
											}
										}
								}
						}
				}
			else
				{	/* Eval/eval.scm 439 */
					return
						BGl_errorz00zz__errorz00(BGl_symbol2855z00zz__evalz00,
						BGl_string2857z00zz__evalz00, BgL_namez00_34);
				}
		}

	}



/* _load */
	obj_t BGl__loadz00zz__evalz00(obj_t BgL_env1253z00_38,
		obj_t BgL_opt1252z00_37)
	{
		{	/* Eval/eval.scm 459 */
			{	/* Eval/eval.scm 459 */
				obj_t BgL_zc3stringze3z20_1504;

				BgL_zc3stringze3z20_1504 = VECTOR_REF(BgL_opt1252z00_37, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1252z00_37))
					{
					case ((long) 1):

						{	/* Eval/eval.scm 459 */
							obj_t BgL_envz00_1508;

							{	/* Eval/eval.scm 254 */
								obj_t BgL_mz00_2767;

								BgL_mz00_2767 = BGl_evalzd2modulezd2zz__evmodulez00();
								if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_mz00_2767))
									{	/* Eval/eval.scm 255 */
										BgL_envz00_1508 = BgL_mz00_2767;
									}
								else
									{	/* Eval/eval.scm 255 */
										BgL_envz00_1508 = BGl_symbol2810z00zz__evalz00;
									}
							}
							{	/* Eval/eval.scm 459 */

								return
									BGl_loadvz00zz__evalz00(BgL_zc3stringze3z20_1504,
									BGl_za2loadzd2verboseza2zd2zz__evalz00, BgL_envz00_1508,
									BGl_symbol2858z00zz__evalz00);
							}
						}
						break;
					case ((long) 2):

						{	/* Eval/eval.scm 459 */
							obj_t BgL_envz00_1509;

							BgL_envz00_1509 = VECTOR_REF(BgL_opt1252z00_37, ((long) 1));
							{	/* Eval/eval.scm 459 */

								return
									BGl_loadvz00zz__evalz00(BgL_zc3stringze3z20_1504,
									BGl_za2loadzd2verboseza2zd2zz__evalz00, BgL_envz00_1509,
									BGl_symbol2858z00zz__evalz00);
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* load */
	BGL_EXPORTED_DEF obj_t BGl_loadz00zz__evalz00(obj_t BgL_filezd2namezd2_35,
		obj_t BgL_envz00_36)
	{
		{	/* Eval/eval.scm 459 */
			return
				BGl_loadvz00zz__evalz00(BgL_filezd2namezd2_35,
				BGl_za2loadzd2verboseza2zd2zz__evalz00, BgL_envz00_36,
				BGl_symbol2858z00zz__evalz00);
		}

	}



/* _loadq */
	obj_t BGl__loadqz00zz__evalz00(obj_t BgL_env1257z00_42,
		obj_t BgL_opt1256z00_41)
	{
		{	/* Eval/eval.scm 465 */
			{	/* Eval/eval.scm 465 */
				obj_t BgL_zc3stringze3z20_1510;

				BgL_zc3stringze3z20_1510 = VECTOR_REF(BgL_opt1256z00_41, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1256z00_41))
					{
					case ((long) 1):

						{	/* Eval/eval.scm 465 */
							obj_t BgL_envz00_1514;

							{	/* Eval/eval.scm 254 */
								obj_t BgL_mz00_2769;

								BgL_mz00_2769 = BGl_evalzd2modulezd2zz__evmodulez00();
								if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_mz00_2769))
									{	/* Eval/eval.scm 255 */
										BgL_envz00_1514 = BgL_mz00_2769;
									}
								else
									{	/* Eval/eval.scm 255 */
										BgL_envz00_1514 = BGl_symbol2810z00zz__evalz00;
									}
							}
							{	/* Eval/eval.scm 465 */

								return
									BGl_loadvz00zz__evalz00(BgL_zc3stringze3z20_1510, BFALSE,
									BgL_envz00_1514, BGl_symbol2860z00zz__evalz00);
							}
						}
						break;
					case ((long) 2):

						{	/* Eval/eval.scm 465 */
							obj_t BgL_envz00_1515;

							BgL_envz00_1515 = VECTOR_REF(BgL_opt1256z00_41, ((long) 1));
							{	/* Eval/eval.scm 465 */

								return
									BGl_loadvz00zz__evalz00(BgL_zc3stringze3z20_1510, BFALSE,
									BgL_envz00_1515, BGl_symbol2860z00zz__evalz00);
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* loadq */
	BGL_EXPORTED_DEF obj_t BGl_loadqz00zz__evalz00(obj_t BgL_filezd2namezd2_39,
		obj_t BgL_envz00_40)
	{
		{	/* Eval/eval.scm 465 */
			return
				BGl_loadvz00zz__evalz00(BgL_filezd2namezd2_39, BFALSE, BgL_envz00_40,
				BGl_symbol2860z00zz__evalz00);
		}

	}



/* loadv */
	obj_t BGl_loadvz00zz__evalz00(obj_t BgL_filenamez00_43, obj_t BgL_vzf3zf3_44,
		obj_t BgL_envz00_45, obj_t BgL_traceidz00_46)
	{
		{	/* Eval/eval.scm 474 */
			{	/* Eval/eval.scm 482 */
				obj_t BgL_pathz00_1517;

				BgL_pathz00_1517 = BGl_findzd2filezd2zz__evalz00(BgL_filenamez00_43);
				{	/* Eval/eval.scm 482 */
					obj_t BgL_portz00_1518;

					{	/* Ieee/port.scm 440 */

						{	/* Ieee/port.scm 440 */
							obj_t BgL_auxz00_5066;

							if (STRINGP(BgL_pathz00_1517))
								{	/* Ieee/port.scm 440 */
									BgL_auxz00_5066 = BgL_pathz00_1517;
								}
							else
								{
									obj_t BgL_auxz00_5069;

									BgL_auxz00_5069 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string2862z00zz__evalz00, BINT(((long) 19295)),
										BGl_string2863z00zz__evalz00, BGl_string2821z00zz__evalz00,
										BgL_pathz00_1517);
									FAILURE(BgL_auxz00_5069, BFALSE, BFALSE);
								}
							BgL_portz00_1518 =
								BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
								(BgL_auxz00_5066, BTRUE, BINT(((long) 5000000)));
					}}
					{	/* Eval/eval.scm 483 */
						obj_t BgL_evreadz00_1519;

						BgL_evreadz00_1519 = BGl_getzd2evalzd2readerz00zz__evalz00();
						{	/* Eval/eval.scm 484 */
							obj_t BgL_denvz00_1520;

							BgL_denvz00_1520 = BGL_CURRENT_DYNAMIC_ENV();
							{	/* Eval/eval.scm 485 */
								obj_t BgL_modz00_1521;

								BgL_modz00_1521 = BGL_MODULE();
								{	/* Eval/eval.scm 486 */

									if (INPUT_PORTP(BgL_portz00_1518))
										{	/* Eval/eval.scm 488 */
											obj_t BgL_exitd1088z00_1523;

											BgL_exitd1088z00_1523 = BGL_EXITD_TOP_AS_OBJ();
											{	/* Eval/eval.scm 536 */
												obj_t BgL_zc3z04anonymousza31517ze3z87_3706;

												BgL_zc3z04anonymousza31517ze3z87_3706 =
													MAKE_FX_PROCEDURE
													(BGl_z62zc3z04anonymousza31517ze3ze5zz__evalz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3z04anonymousza31517ze3z87_3706,
													(int) (((long) 0)), BgL_modz00_1521);
												BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
													(BgL_exitd1088z00_1523,
													BgL_zc3z04anonymousza31517ze3z87_3706);
												{	/* Eval/eval.scm 489 */
													obj_t BgL_tmp1090z00_1525;

													{	/* Eval/eval.scm 489 */

														BGL_ENV_PUSH_TRACE(BgL_denvz00_1520,
															BgL_traceidz00_46, BFALSE);
														{	/* Eval/eval.scm 491 */
															obj_t BgL_sexpz00_1526;
															obj_t BgL_locz00_1527;
															obj_t BgL_mainsymz00_1528;
															obj_t BgL_envz00_1529;

															{	/* Eval/eval.scm 491 */
																obj_t BgL_tmpfunz00_5091;

																{	/* Eval/eval.scm 491 */
																	bool_t BgL_test2576z00_3902;

																	BgL_test2576z00_3902 =
																		PROCEDUREP(BgL_evreadz00_1519);
																	if (BgL_test2576z00_3902)
																		{	/* Eval/eval.scm 491 */
																			BgL_tmpfunz00_5091 = BgL_evreadz00_1519;
																		}
																	else
																		{
																			obj_t BgL_auxz00_5094;

																			BgL_auxz00_5094 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string2812z00zz__evalz00,
																				BINT(((long) 19939)),
																				BGl_string2863z00zz__evalz00,
																				BGl_string2814z00zz__evalz00,
																				BgL_evreadz00_1519);
																			FAILURE(BgL_auxz00_5094, BFALSE, BFALSE);
																}}
																BgL_sexpz00_1526 =
																	PROCEDURE_ENTRY(BgL_tmpfunz00_5091)
																	(BgL_evreadz00_1519, BgL_portz00_1518, BEOA);
															}
															BgL_locz00_1527 = BFALSE;
															BgL_mainsymz00_1528 = BFALSE;
															BgL_envz00_1529 = BgL_envz00_45;
															{	/* Eval/eval.scm 495 */
																bool_t BgL_test3279z00_5098;

																{	/* Eval/eval.scm 495 */
																	bool_t BgL_res2308z00_2785;

																	BgL_res2308z00_2785 =
																		EPAIRP(BgL_sexpz00_1526);
																	BgL_test3279z00_5098 = BgL_res2308z00_2785;
																}
																if (BgL_test3279z00_5098)
																	{	/* Eval/eval.scm 496 */
																		obj_t BgL_arg1483z00_1531;

																		{	/* Eval/eval.scm 496 */
																			obj_t BgL_objz00_2786;

																			if (EPAIRP(BgL_sexpz00_1526))
																				{	/* Eval/eval.scm 496 */
																					BgL_objz00_2786 = BgL_sexpz00_1526;
																				}
																			else
																				{
																					obj_t BgL_auxz00_5102;

																					BgL_auxz00_5102 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string2812z00zz__evalz00,
																						BINT(((long) 20079)),
																						BGl_string2863z00zz__evalz00,
																						BGl_string2864z00zz__evalz00,
																						BgL_sexpz00_1526);
																					FAILURE(BgL_auxz00_5102, BFALSE,
																						BFALSE);
																				}
																			BgL_arg1483z00_1531 =
																				CER(BgL_objz00_2786);
																		}
																		BGL_ENV_SET_TRACE_LOCATION(BgL_denvz00_1520,
																			BgL_arg1483z00_1531);
																	}
																else
																	{	/* Eval/eval.scm 495 */
																		BFALSE;
																	}
															}
															{	/* Eval/eval.scm 498 */
																bool_t BgL_test3281z00_5108;

																if (PAIRP(BgL_sexpz00_1526))
																	{	/* Eval/eval.scm 498 */
																		BgL_test3281z00_5108 =
																			(CAR(BgL_sexpz00_1526) ==
																			BGl_symbol2865z00zz__evalz00);
																	}
																else
																	{	/* Eval/eval.scm 498 */
																		BgL_test3281z00_5108 = ((bool_t) 0);
																	}
																if (BgL_test3281z00_5108)
																	{	/* Eval/eval.scm 500 */
																		obj_t BgL_clausez00_1535;

																		{	/* Eval/eval.scm 500 */
																			obj_t BgL_auxz00_5113;

																			{	/* Eval/eval.scm 500 */
																				obj_t BgL_pairz00_2792;

																				{	/* Eval/eval.scm 500 */
																					obj_t BgL_aux2579z00_3905;

																					BgL_aux2579z00_3905 =
																						CDR(BgL_sexpz00_1526);
																					if (PAIRP(BgL_aux2579z00_3905))
																						{	/* Eval/eval.scm 500 */
																							BgL_pairz00_2792 =
																								BgL_aux2579z00_3905;
																						}
																					else
																						{
																							obj_t BgL_auxz00_5117;

																							BgL_auxz00_5117 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string2812z00zz__evalz00,
																								BINT(((long) 20275)),
																								BGl_string2863z00zz__evalz00,
																								BGl_string2840z00zz__evalz00,
																								BgL_aux2579z00_3905);
																							FAILURE(BgL_auxz00_5117, BFALSE,
																								BFALSE);
																				}}
																				{	/* Eval/eval.scm 500 */
																					obj_t BgL_aux2581z00_3907;

																					BgL_aux2581z00_3907 =
																						CDR(BgL_pairz00_2792);
																					{	/* Eval/eval.scm 500 */
																						bool_t BgL_test3284z00_5122;

																						if (PAIRP(BgL_aux2581z00_3907))
																							{	/* Eval/eval.scm 500 */
																								BgL_test3284z00_5122 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Eval/eval.scm 500 */
																								BgL_test3284z00_5122 =
																									NULLP(BgL_aux2581z00_3907);
																							}
																						if (BgL_test3284z00_5122)
																							{	/* Eval/eval.scm 500 */
																								BgL_auxz00_5113 =
																									BgL_aux2581z00_3907;
																							}
																						else
																							{
																								obj_t BgL_auxz00_5126;

																								BgL_auxz00_5126 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string2812z00zz__evalz00,
																									BINT(((long) 20275)),
																									BGl_string2863z00zz__evalz00,
																									BGl_string2869z00zz__evalz00,
																									BgL_aux2581z00_3907);
																								FAILURE(BgL_auxz00_5126, BFALSE,
																									BFALSE);
																			}}}}
																			BgL_clausez00_1535 =
																				BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																				(BGl_symbol2867z00zz__evalz00,
																				BgL_auxz00_5113);
																		}
																		BgL_locz00_1527 =
																			BGl_getzd2sourcezd2locationz00zz__readerz00
																			(BgL_sexpz00_1526);
																		if (PAIRP(BgL_clausez00_1535))
																			{	/* Eval/eval.scm 503 */
																				bool_t BgL_test3287z00_5134;

																				{	/* Eval/eval.scm 503 */
																					bool_t BgL_test3288z00_5135;

																					{	/* Eval/eval.scm 503 */
																						obj_t BgL_tmpz00_5136;

																						BgL_tmpz00_5136 =
																							CDR(BgL_clausez00_1535);
																						BgL_test3288z00_5135 =
																							PAIRP(BgL_tmpz00_5136);
																					}
																					if (BgL_test3288z00_5135)
																						{	/* Eval/eval.scm 504 */
																							bool_t BgL_test3289z00_5139;

																							{	/* Eval/eval.scm 504 */
																								obj_t BgL_tmpz00_5140;

																								{	/* Eval/eval.scm 504 */
																									obj_t BgL_pairz00_2799;

																									{	/* Eval/eval.scm 504 */
																										obj_t BgL_aux2583z00_3909;

																										BgL_aux2583z00_3909 =
																											CDR(BgL_clausez00_1535);
																										if (PAIRP
																											(BgL_aux2583z00_3909))
																											{	/* Eval/eval.scm 504 */
																												BgL_pairz00_2799 =
																													BgL_aux2583z00_3909;
																											}
																										else
																											{
																												obj_t BgL_auxz00_5144;

																												BgL_auxz00_5144 =
																													BGl_typezd2errorzd2zz__errorz00
																													(BGl_string2812z00zz__evalz00,
																													BINT(((long) 20414)),
																													BGl_string2863z00zz__evalz00,
																													BGl_string2840z00zz__evalz00,
																													BgL_aux2583z00_3909);
																												FAILURE(BgL_auxz00_5144,
																													BFALSE, BFALSE);
																									}}
																									BgL_tmpz00_5140 =
																										CDR(BgL_pairz00_2799);
																								}
																								BgL_test3289z00_5139 =
																									NULLP(BgL_tmpz00_5140);
																							}
																							if (BgL_test3289z00_5139)
																								{	/* Eval/eval.scm 505 */
																									obj_t BgL_tmpz00_5150;

																									{	/* Eval/eval.scm 505 */
																										obj_t BgL_pairz00_2804;

																										{	/* Eval/eval.scm 505 */
																											obj_t BgL_aux2585z00_3911;

																											BgL_aux2585z00_3911 =
																												CDR(BgL_clausez00_1535);
																											if (PAIRP
																												(BgL_aux2585z00_3911))
																												{	/* Eval/eval.scm 505 */
																													BgL_pairz00_2804 =
																														BgL_aux2585z00_3911;
																												}
																											else
																												{
																													obj_t BgL_auxz00_5154;

																													BgL_auxz00_5154 =
																														BGl_typezd2errorzd2zz__errorz00
																														(BGl_string2812z00zz__evalz00,
																														BINT(((long)
																																20449)),
																														BGl_string2863z00zz__evalz00,
																														BGl_string2840z00zz__evalz00,
																														BgL_aux2585z00_3911);
																													FAILURE
																														(BgL_auxz00_5154,
																														BFALSE, BFALSE);
																										}}
																										BgL_tmpz00_5150 =
																											CAR(BgL_pairz00_2804);
																									}
																									BgL_test3287z00_5134 =
																										SYMBOLP(BgL_tmpz00_5150);
																								}
																							else
																								{	/* Eval/eval.scm 504 */
																									BgL_test3287z00_5134 =
																										((bool_t) 0);
																								}
																						}
																					else
																						{	/* Eval/eval.scm 503 */
																							BgL_test3287z00_5134 =
																								((bool_t) 0);
																						}
																				}
																				if (BgL_test3287z00_5134)
																					{	/* Eval/eval.scm 506 */
																						obj_t BgL_pairz00_2809;

																						{	/* Eval/eval.scm 506 */
																							obj_t BgL_aux2587z00_3913;

																							BgL_aux2587z00_3913 =
																								CDR(BgL_clausez00_1535);
																							if (PAIRP(BgL_aux2587z00_3913))
																								{	/* Eval/eval.scm 506 */
																									BgL_pairz00_2809 =
																										BgL_aux2587z00_3913;
																								}
																							else
																								{
																									obj_t BgL_auxz00_5163;

																									BgL_auxz00_5163 =
																										BGl_typezd2errorzd2zz__errorz00
																										(BGl_string2812z00zz__evalz00,
																										BINT(((long) 20485)),
																										BGl_string2863z00zz__evalz00,
																										BGl_string2840z00zz__evalz00,
																										BgL_aux2587z00_3913);
																									FAILURE(BgL_auxz00_5163,
																										BFALSE, BFALSE);
																						}}
																						BgL_mainsymz00_1528 =
																							CAR(BgL_pairz00_2809);
																					}
																				else
																					{	/* Eval/eval.scm 503 */
																						BGl_evcompilezd2errorzd2zz__evcompilez00
																							(BGl_getzd2sourcezd2locationz00zz__readerz00
																							(BgL_sexpz00_1526),
																							BGl_string2859z00zz__evalz00,
																							BGl_string2870z00zz__evalz00,
																							BgL_clausez00_1535);
																					}
																			}
																		else
																			{	/* Eval/eval.scm 502 */
																				BFALSE;
																			}
																		{	/* Eval/eval.scm 512 */
																			obj_t BgL_envz00_2810;

																			BgL_envz00_2810 = BgL_envz00_1529;
																			{	/* Eval/eval.scm 477 */
																				obj_t BgL_vz00_2811;

																				{	/* Eval/eval.scm 178 */
																					obj_t BgL_evaluatez00_2815;

																					if (PROCEDUREP
																						(BGl_defaultzd2evaluatezd2zz__evalz00))
																						{	/* Eval/eval.scm 178 */
																							BgL_evaluatez00_2815 =
																								BGl_defaultzd2evaluatezd2zz__evalz00;
																						}
																					else
																						{	/* Eval/eval.scm 178 */
																							BgL_evaluatez00_2815 =
																								BGl_bytezd2codezd2evaluatezd2envzd2zz__evalz00;
																						}
																					{	/* Eval/eval.scm 181 */
																						obj_t BgL_auxz00_5172;

																						if (PROCEDUREP
																							(BgL_evaluatez00_2815))
																							{	/* Eval/eval.scm 181 */
																								BgL_auxz00_5172 =
																									BgL_evaluatez00_2815;
																							}
																						else
																							{
																								obj_t BgL_auxz00_5175;

																								BgL_auxz00_5175 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string2812z00zz__evalz00,
																									BINT(((long) 6972)),
																									BGl_string2863z00zz__evalz00,
																									BGl_string2814z00zz__evalz00,
																									BgL_evaluatez00_2815);
																								FAILURE(BgL_auxz00_5175, BFALSE,
																									BFALSE);
																							}
																						BgL_vz00_2811 =
																							BGl_evalzf2expanderzf2zz__evalz00
																							(BgL_sexpz00_1526,
																							BgL_envz00_2810,
																							BGl_expandz12zd2envzc0zz__expandz00,
																							BgL_auxz00_5172);
																				}}
																				if (CBOOL(BgL_vzf3zf3_44))
																					{	/* Eval/eval.scm 478 */
																						{	/* Eval/eval.scm 479 */
																							obj_t BgL_portz00_2813;

																							{	/* Eval/eval.scm 479 */
																								obj_t BgL_res2315z00_2820;

																								{	/* Eval/eval.scm 479 */
																									obj_t BgL_tmpz00_5182;

																									BgL_tmpz00_5182 =
																										BGL_CURRENT_DYNAMIC_ENV();
																									BgL_res2315z00_2820 =
																										BGL_ENV_CURRENT_OUTPUT_PORT
																										(BgL_tmpz00_5182);
																								}
																								BgL_portz00_2813 =
																									BgL_res2315z00_2820;
																							}
																							{	/* Eval/eval.scm 479 */

																								BGl_displayzd2circlezd2zz__pp_circlez00
																									(BgL_vz00_2811,
																									BgL_portz00_2813);
																							}
																						}
																						{	/* Eval/eval.scm 480 */
																							obj_t BgL_arg1521z00_2814;

																							{	/* Eval/eval.scm 480 */
																								obj_t BgL_res2316z00_2822;

																								{	/* Eval/eval.scm 480 */
																									obj_t BgL_tmpz00_5186;

																									BgL_tmpz00_5186 =
																										BGL_CURRENT_DYNAMIC_ENV();
																									BgL_res2316z00_2822 =
																										BGL_ENV_CURRENT_OUTPUT_PORT
																										(BgL_tmpz00_5186);
																								}
																								BgL_arg1521z00_2814 =
																									BgL_res2316z00_2822;
																							}
																							bgl_display_char(((unsigned char)
																									10), BgL_arg1521z00_2814);
																					}}
																				else
																					{	/* Eval/eval.scm 478 */
																						BFALSE;
																					}
																			}
																		}
																		BgL_envz00_1529 = BGL_MODULE();
																	}
																else
																	{	/* Eval/eval.scm 514 */
																		obj_t BgL_envz00_2824;

																		BgL_envz00_2824 = BgL_envz00_1529;
																		{	/* Eval/eval.scm 477 */
																			obj_t BgL_vz00_2825;

																			{	/* Eval/eval.scm 178 */
																				obj_t BgL_evaluatez00_2829;

																				if (PROCEDUREP
																					(BGl_defaultzd2evaluatezd2zz__evalz00))
																					{	/* Eval/eval.scm 178 */
																						BgL_evaluatez00_2829 =
																							BGl_defaultzd2evaluatezd2zz__evalz00;
																					}
																				else
																					{	/* Eval/eval.scm 178 */
																						BgL_evaluatez00_2829 =
																							BGl_bytezd2codezd2evaluatezd2envzd2zz__evalz00;
																					}
																				{	/* Eval/eval.scm 181 */
																					obj_t BgL_auxz00_5193;

																					if (PROCEDUREP(BgL_evaluatez00_2829))
																						{	/* Eval/eval.scm 181 */
																							BgL_auxz00_5193 =
																								BgL_evaluatez00_2829;
																						}
																					else
																						{
																							obj_t BgL_auxz00_5196;

																							BgL_auxz00_5196 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string2812z00zz__evalz00,
																								BINT(((long) 6972)),
																								BGl_string2863z00zz__evalz00,
																								BGl_string2814z00zz__evalz00,
																								BgL_evaluatez00_2829);
																							FAILURE(BgL_auxz00_5196, BFALSE,
																								BFALSE);
																						}
																					BgL_vz00_2825 =
																						BGl_evalzf2expanderzf2zz__evalz00
																						(BgL_sexpz00_1526, BgL_envz00_2824,
																						BGl_expandz12zd2envzc0zz__expandz00,
																						BgL_auxz00_5193);
																			}}
																			if (CBOOL(BgL_vzf3zf3_44))
																				{	/* Eval/eval.scm 478 */
																					{	/* Eval/eval.scm 479 */
																						obj_t BgL_portz00_2827;

																						{	/* Eval/eval.scm 479 */
																							obj_t BgL_res2318z00_2834;

																							{	/* Eval/eval.scm 479 */
																								obj_t BgL_tmpz00_5203;

																								BgL_tmpz00_5203 =
																									BGL_CURRENT_DYNAMIC_ENV();
																								BgL_res2318z00_2834 =
																									BGL_ENV_CURRENT_OUTPUT_PORT
																									(BgL_tmpz00_5203);
																							}
																							BgL_portz00_2827 =
																								BgL_res2318z00_2834;
																						}
																						{	/* Eval/eval.scm 479 */

																							BGl_displayzd2circlezd2zz__pp_circlez00
																								(BgL_vz00_2825,
																								BgL_portz00_2827);
																						}
																					}
																					{	/* Eval/eval.scm 480 */
																						obj_t BgL_arg1521z00_2828;

																						{	/* Eval/eval.scm 480 */
																							obj_t BgL_res2319z00_2836;

																							{	/* Eval/eval.scm 480 */
																								obj_t BgL_tmpz00_5207;

																								BgL_tmpz00_5207 =
																									BGL_CURRENT_DYNAMIC_ENV();
																								BgL_res2319z00_2836 =
																									BGL_ENV_CURRENT_OUTPUT_PORT
																									(BgL_tmpz00_5207);
																							}
																							BgL_arg1521z00_2828 =
																								BgL_res2319z00_2836;
																						}
																						bgl_display_char(((unsigned char)
																								10), BgL_arg1521z00_2828);
																				}}
																			else
																				{	/* Eval/eval.scm 478 */
																					BFALSE;
																				}
																		}
																	}
															}
															{	/* Eval/eval.scm 515 */
																obj_t BgL_g1091z00_1554;

																{	/* Eval/eval.scm 515 */
																	obj_t BgL_tmpfunz00_5214;

																	{	/* Eval/eval.scm 515 */
																		bool_t BgL_test2594z00_3920;

																		BgL_test2594z00_3920 =
																			PROCEDUREP(BgL_evreadz00_1519);
																		if (BgL_test2594z00_3920)
																			{	/* Eval/eval.scm 515 */
																				BgL_tmpfunz00_5214 = BgL_evreadz00_1519;
																			}
																		else
																			{
																				obj_t BgL_auxz00_5217;

																				BgL_auxz00_5217 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string2812z00zz__evalz00,
																					BINT(((long) 20753)),
																					BGl_string2863z00zz__evalz00,
																					BGl_string2814z00zz__evalz00,
																					BgL_evreadz00_1519);
																				FAILURE(BgL_auxz00_5217, BFALSE,
																					BFALSE);
																	}}
																	BgL_g1091z00_1554 =
																		PROCEDURE_ENTRY(BgL_tmpfunz00_5214)
																		(BgL_evreadz00_1519, BgL_portz00_1518,
																		BEOA);
																}
																{
																	obj_t BgL_sexpz00_1556;

																	BgL_sexpz00_1556 = BgL_g1091z00_1554;
																BgL_zc3z04anonymousza31507ze3z87_1557:
																	{	/* Eval/eval.scm 517 */
																		bool_t BgL_test3300z00_5221;

																		{	/* Eval/eval.scm 517 */
																			bool_t BgL_res2320z00_2838;

																			BgL_res2320z00_2838 =
																				EOF_OBJECTP(BgL_sexpz00_1556);
																			BgL_test3300z00_5221 =
																				BgL_res2320z00_2838;
																		}
																		if (BgL_test3300z00_5221)
																			{	/* Eval/eval.scm 517 */
																				bgl_close_input_port(
																					((obj_t) BgL_portz00_1518));
																				{	/* Eval/eval.scm 519 */
																					obj_t BgL_vz00_1559;

																					if (SYMBOLP(BgL_mainsymz00_1528))
																						{	/* Eval/eval.scm 520 */
																							obj_t BgL_iexpz00_1565;

																							{	/* Eval/eval.scm 521 */
																								obj_t BgL_arg1512z00_1566;

																								{	/* Eval/eval.scm 521 */
																									obj_t BgL_list1513z00_1567;

																									BgL_list1513z00_1567 =
																										MAKE_YOUNG_PAIR
																										(BGl_list2871z00zz__evalz00,
																										BNIL);
																									BgL_arg1512z00_1566 =
																										BgL_list1513z00_1567;
																								}
																								{	/* Eval/eval.scm 520 */
																									obj_t BgL_res2323z00_2845;

																									BgL_res2323z00_2845 =
																										MAKE_YOUNG_EPAIR
																										(BgL_mainsymz00_1528,
																										BgL_arg1512z00_1566,
																										BgL_locz00_1527);
																									BgL_iexpz00_1565 =
																										BgL_res2323z00_2845;
																								}
																							}
																							{	/* Eval/eval.scm 523 */
																								obj_t BgL_envz00_2846;

																								BgL_envz00_2846 =
																									BgL_envz00_1529;
																								{	/* Eval/eval.scm 178 */
																									obj_t BgL_evaluatez00_2847;

																									if (PROCEDUREP
																										(BGl_defaultzd2evaluatezd2zz__evalz00))
																										{	/* Eval/eval.scm 178 */
																											BgL_evaluatez00_2847 =
																												BGl_defaultzd2evaluatezd2zz__evalz00;
																										}
																									else
																										{	/* Eval/eval.scm 178 */
																											BgL_evaluatez00_2847 =
																												BGl_bytezd2codezd2evaluatezd2envzd2zz__evalz00;
																										}
																									{	/* Eval/eval.scm 181 */
																										obj_t BgL_auxz00_5231;

																										if (PROCEDUREP
																											(BgL_evaluatez00_2847))
																											{	/* Eval/eval.scm 181 */
																												BgL_auxz00_5231 =
																													BgL_evaluatez00_2847;
																											}
																										else
																											{
																												obj_t BgL_auxz00_5234;

																												BgL_auxz00_5234 =
																													BGl_typezd2errorzd2zz__errorz00
																													(BGl_string2812z00zz__evalz00,
																													BINT(((long) 6972)),
																													BGl_string2853z00zz__evalz00,
																													BGl_string2814z00zz__evalz00,
																													BgL_evaluatez00_2847);
																												FAILURE(BgL_auxz00_5234,
																													BFALSE, BFALSE);
																											}
																										BgL_vz00_1559 =
																											BGl_evalzf2expanderzf2zz__evalz00
																											(BgL_iexpz00_1565,
																											BgL_envz00_2846,
																											BGl_expandz12zd2envzc0zz__expandz00,
																											BgL_auxz00_5231);
																						}}}}
																					else
																						{	/* Eval/eval.scm 519 */
																							BgL_vz00_1559 = BINT(((long) 0));
																						}
																					{	/* Eval/eval.scm 519 */
																						obj_t BgL_nenvz00_1560;

																						BgL_nenvz00_1560 = BGL_MODULE();
																						{	/* Eval/eval.scm 525 */

																							{	/* Eval/eval.scm 526 */
																								bool_t BgL_test3304z00_5241;

																								if (
																									(BgL_envz00_1529 ==
																										BgL_nenvz00_1560))
																									{	/* Eval/eval.scm 526 */
																										BgL_test3304z00_5241 =
																											((bool_t) 0);
																									}
																								else
																									{	/* Eval/eval.scm 526 */
																										BgL_test3304z00_5241 =
																											BGl_evmodulezf3zf3zz__evmodulez00
																											(BgL_envz00_1529);
																									}
																								if (BgL_test3304z00_5241)
																									{	/* Eval/eval.scm 526 */
																										BGl_evmodulezd2checkzd2unboundz00zz__evmodulez00
																											(BgL_envz00_1529, BFALSE);
																										BgL_envz00_1529 =
																											BgL_nenvz00_1560;
																									}
																								else
																									{	/* Eval/eval.scm 526 */
																										BFALSE;
																									}
																							}
																							BGL_ENV_POP_TRACE
																								(BgL_denvz00_1520);
																							BgL_tmp1090z00_1525 =
																								BgL_pathz00_1517;
																						}
																					}
																				}
																			}
																		else
																			{	/* Eval/eval.scm 517 */
																				{	/* Eval/eval.scm 532 */
																					bool_t BgL_test3306z00_5247;

																					{	/* Eval/eval.scm 532 */
																						bool_t BgL_res2325z00_2851;

																						BgL_res2325z00_2851 =
																							EPAIRP(BgL_sexpz00_1556);
																						BgL_test3306z00_5247 =
																							BgL_res2325z00_2851;
																					}
																					if (BgL_test3306z00_5247)
																						{	/* Eval/eval.scm 533 */
																							obj_t BgL_arg1515z00_1569;

																							{	/* Eval/eval.scm 533 */
																								obj_t BgL_objz00_2852;

																								if (EPAIRP(BgL_sexpz00_1556))
																									{	/* Eval/eval.scm 533 */
																										BgL_objz00_2852 =
																											BgL_sexpz00_1556;
																									}
																								else
																									{
																										obj_t BgL_auxz00_5251;

																										BgL_auxz00_5251 =
																											BGl_typezd2errorzd2zz__errorz00
																											(BGl_string2812z00zz__evalz00,
																											BINT(((long) 21261)),
																											BGl_string2853z00zz__evalz00,
																											BGl_string2864z00zz__evalz00,
																											BgL_sexpz00_1556);
																										FAILURE(BgL_auxz00_5251,
																											BFALSE, BFALSE);
																									}
																								BgL_arg1515z00_1569 =
																									CER(BgL_objz00_2852);
																							}
																							BGL_ENV_SET_TRACE_LOCATION
																								(BgL_denvz00_1520,
																								BgL_arg1515z00_1569);
																						}
																					else
																						{	/* Eval/eval.scm 532 */
																							BFALSE;
																						}
																				}
																				{	/* Eval/eval.scm 534 */
																					obj_t BgL_envz00_2853;

																					BgL_envz00_2853 = BgL_envz00_1529;
																					{	/* Eval/eval.scm 477 */
																						obj_t BgL_vz00_2854;

																						{	/* Eval/eval.scm 178 */
																							obj_t BgL_evaluatez00_2858;

																							if (PROCEDUREP
																								(BGl_defaultzd2evaluatezd2zz__evalz00))
																								{	/* Eval/eval.scm 178 */
																									BgL_evaluatez00_2858 =
																										BGl_defaultzd2evaluatezd2zz__evalz00;
																								}
																							else
																								{	/* Eval/eval.scm 178 */
																									BgL_evaluatez00_2858 =
																										BGl_bytezd2codezd2evaluatezd2envzd2zz__evalz00;
																								}
																							{	/* Eval/eval.scm 181 */
																								obj_t BgL_auxz00_5259;

																								if (PROCEDUREP
																									(BgL_evaluatez00_2858))
																									{	/* Eval/eval.scm 181 */
																										BgL_auxz00_5259 =
																											BgL_evaluatez00_2858;
																									}
																								else
																									{
																										obj_t BgL_auxz00_5262;

																										BgL_auxz00_5262 =
																											BGl_typezd2errorzd2zz__errorz00
																											(BGl_string2812z00zz__evalz00,
																											BINT(((long) 6972)),
																											BGl_string2853z00zz__evalz00,
																											BGl_string2814z00zz__evalz00,
																											BgL_evaluatez00_2858);
																										FAILURE(BgL_auxz00_5262,
																											BFALSE, BFALSE);
																									}
																								BgL_vz00_2854 =
																									BGl_evalzf2expanderzf2zz__evalz00
																									(BgL_sexpz00_1556,
																									BgL_envz00_2853,
																									BGl_expandz12zd2envzc0zz__expandz00,
																									BgL_auxz00_5259);
																						}}
																						if (CBOOL(BgL_vzf3zf3_44))
																							{	/* Eval/eval.scm 478 */
																								{	/* Eval/eval.scm 479 */
																									obj_t BgL_portz00_2856;

																									{	/* Eval/eval.scm 479 */
																										obj_t BgL_res2327z00_2863;

																										{	/* Eval/eval.scm 479 */
																											obj_t BgL_tmpz00_5269;

																											BgL_tmpz00_5269 =
																												BGL_CURRENT_DYNAMIC_ENV
																												();
																											BgL_res2327z00_2863 =
																												BGL_ENV_CURRENT_OUTPUT_PORT
																												(BgL_tmpz00_5269);
																										}
																										BgL_portz00_2856 =
																											BgL_res2327z00_2863;
																									}
																									{	/* Eval/eval.scm 479 */

																										BGl_displayzd2circlezd2zz__pp_circlez00
																											(BgL_vz00_2854,
																											BgL_portz00_2856);
																									}
																								}
																								{	/* Eval/eval.scm 480 */
																									obj_t BgL_arg1521z00_2857;

																									{	/* Eval/eval.scm 480 */
																										obj_t BgL_res2328z00_2865;

																										{	/* Eval/eval.scm 480 */
																											obj_t BgL_tmpz00_5273;

																											BgL_tmpz00_5273 =
																												BGL_CURRENT_DYNAMIC_ENV
																												();
																											BgL_res2328z00_2865 =
																												BGL_ENV_CURRENT_OUTPUT_PORT
																												(BgL_tmpz00_5273);
																										}
																										BgL_arg1521z00_2857 =
																											BgL_res2328z00_2865;
																									}
																									bgl_display_char(((unsigned
																												char) 10),
																										BgL_arg1521z00_2857);
																							}}
																						else
																							{	/* Eval/eval.scm 478 */
																								BFALSE;
																							}
																					}
																				}
																				{	/* Eval/eval.scm 535 */
																					obj_t BgL_arg1516z00_1570;

																					{	/* Eval/eval.scm 535 */
																						obj_t BgL_tmpfunz00_5280;

																						{	/* Eval/eval.scm 535 */
																							bool_t BgL_test2604z00_3930;

																							BgL_test2604z00_3930 =
																								PROCEDUREP(BgL_evreadz00_1519);
																							if (BgL_test2604z00_3930)
																								{	/* Eval/eval.scm 535 */
																									BgL_tmpfunz00_5280 =
																										BgL_evreadz00_1519;
																								}
																							else
																								{
																									obj_t BgL_auxz00_5283;

																									BgL_auxz00_5283 =
																										BGl_typezd2errorzd2zz__errorz00
																										(BGl_string2812z00zz__evalz00,
																										BINT(((long) 21303)),
																										BGl_string2853z00zz__evalz00,
																										BGl_string2814z00zz__evalz00,
																										BgL_evreadz00_1519);
																									FAILURE(BgL_auxz00_5283,
																										BFALSE, BFALSE);
																						}}
																						BgL_arg1516z00_1570 =
																							PROCEDURE_ENTRY
																							(BgL_tmpfunz00_5280)
																							(BgL_evreadz00_1519,
																							BgL_portz00_1518, BEOA);
																					}
																					{
																						obj_t BgL_sexpz00_5287;

																						BgL_sexpz00_5287 =
																							BgL_arg1516z00_1570;
																						BgL_sexpz00_1556 = BgL_sexpz00_5287;
																						goto
																							BgL_zc3z04anonymousza31507ze3z87_1557;
																					}
																				}
																			}
																	}
																}
															}
														}
													}
													BGl_exitdzd2popzd2protectz12z12zz__bexitz00
														(BgL_exitd1088z00_1523);
													BGL_MODULE_SET(BgL_modz00_1521);
													return BgL_tmp1090z00_1525;
												}
											}
										}
									else
										{	/* Eval/eval.scm 487 */
											return
												BGl_errorz00zz__errorz00(BGl_string2859z00zz__evalz00,
												BGl_string2874z00zz__evalz00, BgL_filenamez00_43);
										}
								}
							}
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1517> */
	obj_t BGl_z62zc3z04anonymousza31517ze3ze5zz__evalz00(obj_t BgL_envz00_3707)
	{
		{	/* Eval/eval.scm 488 */
			{	/* Eval/eval.scm 536 */
				obj_t BgL_tmpz00_5291;

				BgL_tmpz00_5291 = PROCEDURE_REF(BgL_envz00_3707, (int) (((long) 0)));
				return BGL_MODULE_SET(BgL_tmpz00_5291);
			}
		}

	}



/* expand-define-expander */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2definezd2expanderz00zz__evalz00(obj_t
		BgL_xz00_50, obj_t BgL_ez00_51)
	{
		{	/* Eval/eval.scm 550 */
			{
				obj_t BgL_namez00_1642;
				obj_t BgL_expdzd2lamzd2_1643;
				obj_t BgL_expdzd2lamzf2locz20_1644;
				obj_t BgL_expdzd2evalzd2_1645;

				if (PAIRP(BgL_xz00_50))
					{	/* Eval/eval.scm 580 */
						obj_t BgL_cdrzd2145zd2_1597;

						BgL_cdrzd2145zd2_1597 = CDR(BgL_xz00_50);
						if (PAIRP(BgL_cdrzd2145zd2_1597))
							{	/* Eval/eval.scm 580 */
								obj_t BgL_carzd2148zd2_1599;
								obj_t BgL_cdrzd2149zd2_1600;

								BgL_carzd2148zd2_1599 = CAR(BgL_cdrzd2145zd2_1597);
								BgL_cdrzd2149zd2_1600 = CDR(BgL_cdrzd2145zd2_1597);
								if (SYMBOLP(BgL_carzd2148zd2_1599))
									{	/* Eval/eval.scm 580 */
										if (PAIRP(BgL_cdrzd2149zd2_1600))
											{	/* Eval/eval.scm 580 */
												obj_t BgL_cdrzd2155zd2_1603;

												BgL_cdrzd2155zd2_1603 = CDR(BgL_cdrzd2149zd2_1600);
												if (
													(CAR(BgL_cdrzd2149zd2_1600) ==
														BGl_keyword2875z00zz__evalz00))
													{	/* Eval/eval.scm 580 */
														if (PAIRP(BgL_cdrzd2155zd2_1603))
															{	/* Eval/eval.scm 580 */
																if (NULLP(CDR(BgL_cdrzd2155zd2_1603)))
																	{	/* Eval/eval.scm 580 */
																		obj_t BgL_arg1533z00_1609;

																		BgL_arg1533z00_1609 =
																			CAR(BgL_cdrzd2155zd2_1603);
																		{	/* Eval/eval.scm 582 */
																			obj_t BgL_expdzd2lamzf2locz20_2933;

																			BgL_expdzd2lamzf2locz20_2933 =
																				BGl_evepairifyz00zz__prognz00
																				(BgL_arg1533z00_1609, BgL_xz00_50);
																			{	/* Eval/eval.scm 583 */
																				obj_t BgL_expdzd2evalzd2_2934;

																				{	/* Eval/eval.scm 84 */
																					obj_t BgL_envz00_2936;

																					BgL_envz00_2936 =
																						BGl_defaultzd2environmentzd2zz__evalz00
																						();
																					{	/* Eval/eval.scm 84 */

																						{	/* Eval/eval.scm 178 */
																							obj_t BgL_evaluatez00_2937;

																							if (PROCEDUREP
																								(BGl_defaultzd2evaluatezd2zz__evalz00))
																								{	/* Eval/eval.scm 178 */
																									BgL_evaluatez00_2937 =
																										BGl_defaultzd2evaluatezd2zz__evalz00;
																								}
																							else
																								{	/* Eval/eval.scm 178 */
																									BgL_evaluatez00_2937 =
																										BGl_bytezd2codezd2evaluatezd2envzd2zz__evalz00;
																								}
																							{	/* Eval/eval.scm 181 */
																								obj_t BgL_auxz00_5320;

																								if (PROCEDUREP
																									(BgL_evaluatez00_2937))
																									{	/* Eval/eval.scm 181 */
																										BgL_auxz00_5320 =
																											BgL_evaluatez00_2937;
																									}
																								else
																									{
																										obj_t BgL_auxz00_5323;

																										BgL_auxz00_5323 =
																											BGl_typezd2errorzd2zz__errorz00
																											(BGl_string2812z00zz__evalz00,
																											BINT(((long) 6972)),
																											BGl_string2876z00zz__evalz00,
																											BGl_string2814z00zz__evalz00,
																											BgL_evaluatez00_2937);
																										FAILURE(BgL_auxz00_5323,
																											BFALSE, BFALSE);
																									}
																								BgL_expdzd2evalzd2_2934 =
																									BGl_evalzf2expanderzf2zz__evalz00
																									(BgL_expdzd2lamzf2locz20_2933,
																									BgL_envz00_2936,
																									BGl_expandz12zd2envzc0zz__expandz00,
																									BgL_auxz00_5320);
																				}}}}
																				{	/* Eval/eval.scm 584 */

																					BgL_namez00_1642 =
																						BgL_carzd2148zd2_1599;
																					BgL_expdzd2lamzd2_1643 =
																						BgL_arg1533z00_1609;
																					BgL_expdzd2lamzf2locz20_1644 =
																						BgL_expdzd2lamzf2locz20_2933;
																					BgL_expdzd2evalzd2_1645 =
																						BgL_expdzd2evalzd2_2934;
																				BgL_zc3z04anonymousza31552ze3z87_1646:
																					{	/* Eval/eval.scm 556 */
																						obj_t
																							BgL_zc3z04anonymousza31554ze3z87_3711;
																						BgL_zc3z04anonymousza31554ze3z87_3711
																							=
																							MAKE_FX_PROCEDURE
																							(BGl_z62zc3z04anonymousza31554ze3ze5zz__evalz00,
																							(int) (((long) 2)),
																							(int) (((long) 2)));
																						PROCEDURE_SET
																							(BgL_zc3z04anonymousza31554ze3z87_3711,
																							(int) (((long) 0)),
																							BgL_namez00_1642);
																						PROCEDURE_SET
																							(BgL_zc3z04anonymousza31554ze3z87_3711,
																							(int) (((long) 1)),
																							BgL_expdzd2evalzd2_1645);
																						BGl_installzd2expanderzd2zz__macroz00
																							(BgL_namez00_1642,
																							BgL_zc3z04anonymousza31554ze3z87_3711);
																					}
																					return BUNSPEC;
																				}
																			}
																		}
																	}
																else
																	{	/* Eval/eval.scm 580 */
																		obj_t BgL_carzd2170zd2_1611;

																		BgL_carzd2170zd2_1611 =
																			CAR(((obj_t) BgL_cdrzd2145zd2_1597));
																		if (SYMBOLP(BgL_carzd2170zd2_1611))
																			{	/* Eval/eval.scm 580 */
																				obj_t BgL_arg1535z00_1613;

																				BgL_arg1535z00_1613 =
																					CDR(((obj_t) BgL_cdrzd2145zd2_1597));
																				{	/* Eval/eval.scm 587 */
																					obj_t BgL_expdzd2lamzd2_2945;

																					{	/* Eval/eval.scm 587 */
																						obj_t BgL_auxz00_5342;

																						{	/* Eval/eval.scm 587 */
																							bool_t BgL_test3322z00_5343;

																							if (PAIRP(BgL_arg1535z00_1613))
																								{	/* Eval/eval.scm 587 */
																									BgL_test3322z00_5343 =
																										((bool_t) 1);
																								}
																							else
																								{	/* Eval/eval.scm 587 */
																									BgL_test3322z00_5343 =
																										NULLP(BgL_arg1535z00_1613);
																								}
																							if (BgL_test3322z00_5343)
																								{	/* Eval/eval.scm 587 */
																									BgL_auxz00_5342 =
																										BgL_arg1535z00_1613;
																								}
																							else
																								{
																									obj_t BgL_auxz00_5347;

																									BgL_auxz00_5347 =
																										BGl_typezd2errorzd2zz__errorz00
																										(BGl_string2812z00zz__evalz00,
																										BINT(((long) 23110)),
																										BGl_string2876z00zz__evalz00,
																										BGl_string2869z00zz__evalz00,
																										BgL_arg1535z00_1613);
																									FAILURE(BgL_auxz00_5347,
																										BFALSE, BFALSE);
																						}}
																						BgL_expdzd2lamzd2_2945 =
																							BGl_expandzd2prognzd2zz__prognz00
																							(BgL_auxz00_5342);
																					}
																					{	/* Eval/eval.scm 587 */
																						obj_t BgL_expdzd2lamzf2locz20_2946;

																						BgL_expdzd2lamzf2locz20_2946 =
																							BGl_evepairifyz00zz__prognz00
																							(BgL_expdzd2lamzd2_2945,
																							BgL_xz00_50);
																						{	/* Eval/eval.scm 588 */
																							obj_t BgL_expdzd2evalzd2_2947;

																							{	/* Eval/eval.scm 83 */
																								obj_t BgL_envz00_2949;

																								BgL_envz00_2949 =
																									BGl_defaultzd2environmentzd2zz__evalz00
																									();
																								{	/* Eval/eval.scm 83 */

																									{	/* Eval/eval.scm 172 */
																										obj_t BgL_auxz00_5354;

																										{	/* Eval/eval.scm 172 */
																											obj_t BgL_aux2613z00_3939;

																											BgL_aux2613z00_3939 =
																												BGl_defaultzd2evaluatezd2zz__evalz00;
																											if (PROCEDUREP
																												(BgL_aux2613z00_3939))
																												{	/* Eval/eval.scm 172 */
																													BgL_auxz00_5354 =
																														BgL_aux2613z00_3939;
																												}
																											else
																												{
																													obj_t BgL_auxz00_5357;

																													BgL_auxz00_5357 =
																														BGl_typezd2errorzd2zz__errorz00
																														(BGl_string2812z00zz__evalz00,
																														BINT(((long) 6523)),
																														BGl_string2876z00zz__evalz00,
																														BGl_string2814z00zz__evalz00,
																														BgL_aux2613z00_3939);
																													FAILURE
																														(BgL_auxz00_5357,
																														BFALSE, BFALSE);
																										}}
																										BgL_expdzd2evalzd2_2947 =
																											BGl_evalzf2expanderzf2zz__evalz00
																											(BgL_expdzd2lamzf2locz20_2946,
																											BgL_envz00_2949,
																											BGl_expandzd2envzd2zz__expandz00,
																											BgL_auxz00_5354);
																							}}}
																							{	/* Eval/eval.scm 589 */

																								{
																									obj_t BgL_expdzd2evalzd2_5365;
																									obj_t
																										BgL_expdzd2lamzf2locz20_5364;
																									obj_t BgL_expdzd2lamzd2_5363;
																									obj_t BgL_namez00_5362;

																									BgL_namez00_5362 =
																										BgL_carzd2170zd2_1611;
																									BgL_expdzd2lamzd2_5363 =
																										BgL_expdzd2lamzd2_2945;
																									BgL_expdzd2lamzf2locz20_5364 =
																										BgL_expdzd2lamzf2locz20_2946;
																									BgL_expdzd2evalzd2_5365 =
																										BgL_expdzd2evalzd2_2947;
																									BgL_expdzd2evalzd2_1645 =
																										BgL_expdzd2evalzd2_5365;
																									BgL_expdzd2lamzf2locz20_1644 =
																										BgL_expdzd2lamzf2locz20_5364;
																									BgL_expdzd2lamzd2_1643 =
																										BgL_expdzd2lamzd2_5363;
																									BgL_namez00_1642 =
																										BgL_namez00_5362;
																									goto
																										BgL_zc3z04anonymousza31552ze3z87_1646;
																								}
																							}
																						}
																					}
																				}
																			}
																		else
																			{	/* Eval/eval.scm 592 */
																				obj_t BgL_procz00_2950;

																				BgL_procz00_2950 =
																					BGl_symbol2877z00zz__evalz00;
																				{	/* Eval/eval.scm 543 */
																					bool_t BgL_test3325z00_5366;

																					{	/* Eval/eval.scm 543 */
																						bool_t BgL_res2349z00_2953;

																						BgL_res2349z00_2953 =
																							EPAIRP(BgL_xz00_50);
																						BgL_test3325z00_5366 =
																							BgL_res2349z00_2953;
																					}
																					if (BgL_test3325z00_5366)
																						{	/* Eval/eval.scm 544 */
																							obj_t BgL_arg1523z00_2952;

																							{	/* Eval/eval.scm 544 */
																								obj_t BgL_objz00_2954;

																								if (EPAIRP(BgL_xz00_50))
																									{	/* Eval/eval.scm 544 */
																										BgL_objz00_2954 =
																											BgL_xz00_50;
																									}
																								else
																									{
																										obj_t BgL_auxz00_5370;

																										BgL_auxz00_5370 =
																											BGl_typezd2errorzd2zz__errorz00
																											(BGl_string2812z00zz__evalz00,
																											BINT(((long) 21704)),
																											BGl_string2876z00zz__evalz00,
																											BGl_string2864z00zz__evalz00,
																											BgL_xz00_50);
																										FAILURE(BgL_auxz00_5370,
																											BFALSE, BFALSE);
																									}
																								BgL_arg1523z00_2952 =
																									CER(BgL_objz00_2954);
																							}
																							return
																								BGl_everrorz00zz__everrorz00
																								(BgL_arg1523z00_2952,
																								BgL_procz00_2950,
																								BGl_string2879z00zz__evalz00,
																								BgL_xz00_50);
																						}
																					else
																						{	/* Eval/eval.scm 543 */
																							return
																								BGl_errorz00zz__errorz00
																								(BgL_procz00_2950,
																								BGl_string2879z00zz__evalz00,
																								BgL_xz00_50);
																						}
																				}
																			}
																	}
															}
														else
															{	/* Eval/eval.scm 580 */
																obj_t BgL_carzd2188zd2_1616;

																BgL_carzd2188zd2_1616 =
																	CAR(((obj_t) BgL_cdrzd2145zd2_1597));
																if (SYMBOLP(BgL_carzd2188zd2_1616))
																	{	/* Eval/eval.scm 580 */
																		obj_t BgL_arg1540z00_1618;

																		BgL_arg1540z00_1618 =
																			CDR(((obj_t) BgL_cdrzd2145zd2_1597));
																		{	/* Eval/eval.scm 587 */
																			obj_t BgL_expdzd2lamzd2_2959;

																			{	/* Eval/eval.scm 587 */
																				obj_t BgL_auxz00_5383;

																				{	/* Eval/eval.scm 587 */
																					bool_t BgL_test3328z00_5384;

																					if (PAIRP(BgL_arg1540z00_1618))
																						{	/* Eval/eval.scm 587 */
																							BgL_test3328z00_5384 =
																								((bool_t) 1);
																						}
																					else
																						{	/* Eval/eval.scm 587 */
																							BgL_test3328z00_5384 =
																								NULLP(BgL_arg1540z00_1618);
																						}
																					if (BgL_test3328z00_5384)
																						{	/* Eval/eval.scm 587 */
																							BgL_auxz00_5383 =
																								BgL_arg1540z00_1618;
																						}
																					else
																						{
																							obj_t BgL_auxz00_5388;

																							BgL_auxz00_5388 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string2812z00zz__evalz00,
																								BINT(((long) 23110)),
																								BGl_string2876z00zz__evalz00,
																								BGl_string2869z00zz__evalz00,
																								BgL_arg1540z00_1618);
																							FAILURE(BgL_auxz00_5388, BFALSE,
																								BFALSE);
																				}}
																				BgL_expdzd2lamzd2_2959 =
																					BGl_expandzd2prognzd2zz__prognz00
																					(BgL_auxz00_5383);
																			}
																			{	/* Eval/eval.scm 587 */
																				obj_t BgL_expdzd2lamzf2locz20_2960;

																				BgL_expdzd2lamzf2locz20_2960 =
																					BGl_evepairifyz00zz__prognz00
																					(BgL_expdzd2lamzd2_2959, BgL_xz00_50);
																				{	/* Eval/eval.scm 588 */
																					obj_t BgL_expdzd2evalzd2_2961;

																					{	/* Eval/eval.scm 83 */
																						obj_t BgL_envz00_2963;

																						BgL_envz00_2963 =
																							BGl_defaultzd2environmentzd2zz__evalz00
																							();
																						{	/* Eval/eval.scm 83 */

																							{	/* Eval/eval.scm 172 */
																								obj_t BgL_auxz00_5395;

																								{	/* Eval/eval.scm 172 */
																									obj_t BgL_aux2623z00_3949;

																									BgL_aux2623z00_3949 =
																										BGl_defaultzd2evaluatezd2zz__evalz00;
																									if (PROCEDUREP
																										(BgL_aux2623z00_3949))
																										{	/* Eval/eval.scm 172 */
																											BgL_auxz00_5395 =
																												BgL_aux2623z00_3949;
																										}
																									else
																										{
																											obj_t BgL_auxz00_5398;

																											BgL_auxz00_5398 =
																												BGl_typezd2errorzd2zz__errorz00
																												(BGl_string2812z00zz__evalz00,
																												BINT(((long) 6523)),
																												BGl_string2876z00zz__evalz00,
																												BGl_string2814z00zz__evalz00,
																												BgL_aux2623z00_3949);
																											FAILURE(BgL_auxz00_5398,
																												BFALSE, BFALSE);
																								}}
																								BgL_expdzd2evalzd2_2961 =
																									BGl_evalzf2expanderzf2zz__evalz00
																									(BgL_expdzd2lamzf2locz20_2960,
																									BgL_envz00_2963,
																									BGl_expandzd2envzd2zz__expandz00,
																									BgL_auxz00_5395);
																					}}}
																					{	/* Eval/eval.scm 589 */

																						{
																							obj_t BgL_expdzd2evalzd2_5406;
																							obj_t
																								BgL_expdzd2lamzf2locz20_5405;
																							obj_t BgL_expdzd2lamzd2_5404;
																							obj_t BgL_namez00_5403;

																							BgL_namez00_5403 =
																								BgL_carzd2188zd2_1616;
																							BgL_expdzd2lamzd2_5404 =
																								BgL_expdzd2lamzd2_2959;
																							BgL_expdzd2lamzf2locz20_5405 =
																								BgL_expdzd2lamzf2locz20_2960;
																							BgL_expdzd2evalzd2_5406 =
																								BgL_expdzd2evalzd2_2961;
																							BgL_expdzd2evalzd2_1645 =
																								BgL_expdzd2evalzd2_5406;
																							BgL_expdzd2lamzf2locz20_1644 =
																								BgL_expdzd2lamzf2locz20_5405;
																							BgL_expdzd2lamzd2_1643 =
																								BgL_expdzd2lamzd2_5404;
																							BgL_namez00_1642 =
																								BgL_namez00_5403;
																							goto
																								BgL_zc3z04anonymousza31552ze3z87_1646;
																						}
																					}
																				}
																			}
																		}
																	}
																else
																	{	/* Eval/eval.scm 592 */
																		obj_t BgL_procz00_2964;

																		BgL_procz00_2964 =
																			BGl_symbol2877z00zz__evalz00;
																		{	/* Eval/eval.scm 543 */
																			bool_t BgL_test3331z00_5407;

																			{	/* Eval/eval.scm 543 */
																				bool_t BgL_res2351z00_2967;

																				BgL_res2351z00_2967 =
																					EPAIRP(BgL_xz00_50);
																				BgL_test3331z00_5407 =
																					BgL_res2351z00_2967;
																			}
																			if (BgL_test3331z00_5407)
																				{	/* Eval/eval.scm 544 */
																					obj_t BgL_arg1523z00_2966;

																					{	/* Eval/eval.scm 544 */
																						obj_t BgL_objz00_2968;

																						if (EPAIRP(BgL_xz00_50))
																							{	/* Eval/eval.scm 544 */
																								BgL_objz00_2968 = BgL_xz00_50;
																							}
																						else
																							{
																								obj_t BgL_auxz00_5411;

																								BgL_auxz00_5411 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string2812z00zz__evalz00,
																									BINT(((long) 21704)),
																									BGl_string2876z00zz__evalz00,
																									BGl_string2864z00zz__evalz00,
																									BgL_xz00_50);
																								FAILURE(BgL_auxz00_5411, BFALSE,
																									BFALSE);
																							}
																						BgL_arg1523z00_2966 =
																							CER(BgL_objz00_2968);
																					}
																					return
																						BGl_everrorz00zz__everrorz00
																						(BgL_arg1523z00_2966,
																						BgL_procz00_2964,
																						BGl_string2879z00zz__evalz00,
																						BgL_xz00_50);
																				}
																			else
																				{	/* Eval/eval.scm 543 */
																					return
																						BGl_errorz00zz__errorz00
																						(BgL_procz00_2964,
																						BGl_string2879z00zz__evalz00,
																						BgL_xz00_50);
																				}
																		}
																	}
															}
													}
												else
													{	/* Eval/eval.scm 580 */
														obj_t BgL_carzd2206zd2_1620;

														BgL_carzd2206zd2_1620 =
															CAR(((obj_t) BgL_cdrzd2145zd2_1597));
														if (SYMBOLP(BgL_carzd2206zd2_1620))
															{	/* Eval/eval.scm 580 */
																obj_t BgL_arg1542z00_1622;

																BgL_arg1542z00_1622 =
																	CDR(((obj_t) BgL_cdrzd2145zd2_1597));
																{	/* Eval/eval.scm 587 */
																	obj_t BgL_expdzd2lamzd2_2973;

																	{	/* Eval/eval.scm 587 */
																		obj_t BgL_auxz00_5424;

																		{	/* Eval/eval.scm 587 */
																			bool_t BgL_test3334z00_5425;

																			if (PAIRP(BgL_arg1542z00_1622))
																				{	/* Eval/eval.scm 587 */
																					BgL_test3334z00_5425 = ((bool_t) 1);
																				}
																			else
																				{	/* Eval/eval.scm 587 */
																					BgL_test3334z00_5425 =
																						NULLP(BgL_arg1542z00_1622);
																				}
																			if (BgL_test3334z00_5425)
																				{	/* Eval/eval.scm 587 */
																					BgL_auxz00_5424 = BgL_arg1542z00_1622;
																				}
																			else
																				{
																					obj_t BgL_auxz00_5429;

																					BgL_auxz00_5429 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string2812z00zz__evalz00,
																						BINT(((long) 23110)),
																						BGl_string2876z00zz__evalz00,
																						BGl_string2869z00zz__evalz00,
																						BgL_arg1542z00_1622);
																					FAILURE(BgL_auxz00_5429, BFALSE,
																						BFALSE);
																		}}
																		BgL_expdzd2lamzd2_2973 =
																			BGl_expandzd2prognzd2zz__prognz00
																			(BgL_auxz00_5424);
																	}
																	{	/* Eval/eval.scm 587 */
																		obj_t BgL_expdzd2lamzf2locz20_2974;

																		BgL_expdzd2lamzf2locz20_2974 =
																			BGl_evepairifyz00zz__prognz00
																			(BgL_expdzd2lamzd2_2973, BgL_xz00_50);
																		{	/* Eval/eval.scm 588 */
																			obj_t BgL_expdzd2evalzd2_2975;

																			{	/* Eval/eval.scm 83 */
																				obj_t BgL_envz00_2977;

																				BgL_envz00_2977 =
																					BGl_defaultzd2environmentzd2zz__evalz00
																					();
																				{	/* Eval/eval.scm 83 */

																					{	/* Eval/eval.scm 172 */
																						obj_t BgL_auxz00_5436;

																						{	/* Eval/eval.scm 172 */
																							obj_t BgL_aux2633z00_3959;

																							BgL_aux2633z00_3959 =
																								BGl_defaultzd2evaluatezd2zz__evalz00;
																							if (PROCEDUREP
																								(BgL_aux2633z00_3959))
																								{	/* Eval/eval.scm 172 */
																									BgL_auxz00_5436 =
																										BgL_aux2633z00_3959;
																								}
																							else
																								{
																									obj_t BgL_auxz00_5439;

																									BgL_auxz00_5439 =
																										BGl_typezd2errorzd2zz__errorz00
																										(BGl_string2812z00zz__evalz00,
																										BINT(((long) 6523)),
																										BGl_string2876z00zz__evalz00,
																										BGl_string2814z00zz__evalz00,
																										BgL_aux2633z00_3959);
																									FAILURE(BgL_auxz00_5439,
																										BFALSE, BFALSE);
																						}}
																						BgL_expdzd2evalzd2_2975 =
																							BGl_evalzf2expanderzf2zz__evalz00
																							(BgL_expdzd2lamzf2locz20_2974,
																							BgL_envz00_2977,
																							BGl_expandzd2envzd2zz__expandz00,
																							BgL_auxz00_5436);
																			}}}
																			{	/* Eval/eval.scm 589 */

																				{
																					obj_t BgL_expdzd2evalzd2_5447;
																					obj_t BgL_expdzd2lamzf2locz20_5446;
																					obj_t BgL_expdzd2lamzd2_5445;
																					obj_t BgL_namez00_5444;

																					BgL_namez00_5444 =
																						BgL_carzd2206zd2_1620;
																					BgL_expdzd2lamzd2_5445 =
																						BgL_expdzd2lamzd2_2973;
																					BgL_expdzd2lamzf2locz20_5446 =
																						BgL_expdzd2lamzf2locz20_2974;
																					BgL_expdzd2evalzd2_5447 =
																						BgL_expdzd2evalzd2_2975;
																					BgL_expdzd2evalzd2_1645 =
																						BgL_expdzd2evalzd2_5447;
																					BgL_expdzd2lamzf2locz20_1644 =
																						BgL_expdzd2lamzf2locz20_5446;
																					BgL_expdzd2lamzd2_1643 =
																						BgL_expdzd2lamzd2_5445;
																					BgL_namez00_1642 = BgL_namez00_5444;
																					goto
																						BgL_zc3z04anonymousza31552ze3z87_1646;
																				}
																			}
																		}
																	}
																}
															}
														else
															{	/* Eval/eval.scm 592 */
																obj_t BgL_procz00_2978;

																BgL_procz00_2978 = BGl_symbol2877z00zz__evalz00;
																{	/* Eval/eval.scm 543 */
																	bool_t BgL_test3337z00_5448;

																	{	/* Eval/eval.scm 543 */
																		bool_t BgL_res2353z00_2981;

																		BgL_res2353z00_2981 = EPAIRP(BgL_xz00_50);
																		BgL_test3337z00_5448 = BgL_res2353z00_2981;
																	}
																	if (BgL_test3337z00_5448)
																		{	/* Eval/eval.scm 544 */
																			obj_t BgL_arg1523z00_2980;

																			{	/* Eval/eval.scm 544 */
																				obj_t BgL_objz00_2982;

																				if (EPAIRP(BgL_xz00_50))
																					{	/* Eval/eval.scm 544 */
																						BgL_objz00_2982 = BgL_xz00_50;
																					}
																				else
																					{
																						obj_t BgL_auxz00_5452;

																						BgL_auxz00_5452 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string2812z00zz__evalz00,
																							BINT(((long) 21704)),
																							BGl_string2876z00zz__evalz00,
																							BGl_string2864z00zz__evalz00,
																							BgL_xz00_50);
																						FAILURE(BgL_auxz00_5452, BFALSE,
																							BFALSE);
																					}
																				BgL_arg1523z00_2980 =
																					CER(BgL_objz00_2982);
																			}
																			return
																				BGl_everrorz00zz__everrorz00
																				(BgL_arg1523z00_2980, BgL_procz00_2978,
																				BGl_string2879z00zz__evalz00,
																				BgL_xz00_50);
																		}
																	else
																		{	/* Eval/eval.scm 543 */
																			return
																				BGl_errorz00zz__errorz00
																				(BgL_procz00_2978,
																				BGl_string2879z00zz__evalz00,
																				BgL_xz00_50);
																		}
																}
															}
													}
											}
										else
											{	/* Eval/eval.scm 580 */
												obj_t BgL_carzd2224zd2_1625;

												BgL_carzd2224zd2_1625 =
													CAR(((obj_t) BgL_cdrzd2145zd2_1597));
												if (SYMBOLP(BgL_carzd2224zd2_1625))
													{	/* Eval/eval.scm 580 */
														obj_t BgL_arg1546z00_1627;

														BgL_arg1546z00_1627 =
															CDR(((obj_t) BgL_cdrzd2145zd2_1597));
														{	/* Eval/eval.scm 587 */
															obj_t BgL_expdzd2lamzd2_2987;

															{	/* Eval/eval.scm 587 */
																obj_t BgL_auxz00_5465;

																{	/* Eval/eval.scm 587 */
																	bool_t BgL_test3340z00_5466;

																	if (PAIRP(BgL_arg1546z00_1627))
																		{	/* Eval/eval.scm 587 */
																			BgL_test3340z00_5466 = ((bool_t) 1);
																		}
																	else
																		{	/* Eval/eval.scm 587 */
																			BgL_test3340z00_5466 =
																				NULLP(BgL_arg1546z00_1627);
																		}
																	if (BgL_test3340z00_5466)
																		{	/* Eval/eval.scm 587 */
																			BgL_auxz00_5465 = BgL_arg1546z00_1627;
																		}
																	else
																		{
																			obj_t BgL_auxz00_5470;

																			BgL_auxz00_5470 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string2812z00zz__evalz00,
																				BINT(((long) 23110)),
																				BGl_string2876z00zz__evalz00,
																				BGl_string2869z00zz__evalz00,
																				BgL_arg1546z00_1627);
																			FAILURE(BgL_auxz00_5470, BFALSE, BFALSE);
																}}
																BgL_expdzd2lamzd2_2987 =
																	BGl_expandzd2prognzd2zz__prognz00
																	(BgL_auxz00_5465);
															}
															{	/* Eval/eval.scm 587 */
																obj_t BgL_expdzd2lamzf2locz20_2988;

																BgL_expdzd2lamzf2locz20_2988 =
																	BGl_evepairifyz00zz__prognz00
																	(BgL_expdzd2lamzd2_2987, BgL_xz00_50);
																{	/* Eval/eval.scm 588 */
																	obj_t BgL_expdzd2evalzd2_2989;

																	{	/* Eval/eval.scm 83 */
																		obj_t BgL_envz00_2991;

																		BgL_envz00_2991 =
																			BGl_defaultzd2environmentzd2zz__evalz00();
																		{	/* Eval/eval.scm 83 */

																			{	/* Eval/eval.scm 172 */
																				obj_t BgL_auxz00_5477;

																				{	/* Eval/eval.scm 172 */
																					obj_t BgL_aux2643z00_3969;

																					BgL_aux2643z00_3969 =
																						BGl_defaultzd2evaluatezd2zz__evalz00;
																					if (PROCEDUREP(BgL_aux2643z00_3969))
																						{	/* Eval/eval.scm 172 */
																							BgL_auxz00_5477 =
																								BgL_aux2643z00_3969;
																						}
																					else
																						{
																							obj_t BgL_auxz00_5480;

																							BgL_auxz00_5480 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string2812z00zz__evalz00,
																								BINT(((long) 6523)),
																								BGl_string2876z00zz__evalz00,
																								BGl_string2814z00zz__evalz00,
																								BgL_aux2643z00_3969);
																							FAILURE(BgL_auxz00_5480, BFALSE,
																								BFALSE);
																				}}
																				BgL_expdzd2evalzd2_2989 =
																					BGl_evalzf2expanderzf2zz__evalz00
																					(BgL_expdzd2lamzf2locz20_2988,
																					BgL_envz00_2991,
																					BGl_expandzd2envzd2zz__expandz00,
																					BgL_auxz00_5477);
																	}}}
																	{	/* Eval/eval.scm 589 */

																		{
																			obj_t BgL_expdzd2evalzd2_5488;
																			obj_t BgL_expdzd2lamzf2locz20_5487;
																			obj_t BgL_expdzd2lamzd2_5486;
																			obj_t BgL_namez00_5485;

																			BgL_namez00_5485 = BgL_carzd2224zd2_1625;
																			BgL_expdzd2lamzd2_5486 =
																				BgL_expdzd2lamzd2_2987;
																			BgL_expdzd2lamzf2locz20_5487 =
																				BgL_expdzd2lamzf2locz20_2988;
																			BgL_expdzd2evalzd2_5488 =
																				BgL_expdzd2evalzd2_2989;
																			BgL_expdzd2evalzd2_1645 =
																				BgL_expdzd2evalzd2_5488;
																			BgL_expdzd2lamzf2locz20_1644 =
																				BgL_expdzd2lamzf2locz20_5487;
																			BgL_expdzd2lamzd2_1643 =
																				BgL_expdzd2lamzd2_5486;
																			BgL_namez00_1642 = BgL_namez00_5485;
																			goto
																				BgL_zc3z04anonymousza31552ze3z87_1646;
																		}
																	}
																}
															}
														}
													}
												else
													{	/* Eval/eval.scm 592 */
														obj_t BgL_procz00_2992;

														BgL_procz00_2992 = BGl_symbol2877z00zz__evalz00;
														{	/* Eval/eval.scm 543 */
															bool_t BgL_test3343z00_5489;

															{	/* Eval/eval.scm 543 */
																bool_t BgL_res2355z00_2995;

																BgL_res2355z00_2995 = EPAIRP(BgL_xz00_50);
																BgL_test3343z00_5489 = BgL_res2355z00_2995;
															}
															if (BgL_test3343z00_5489)
																{	/* Eval/eval.scm 544 */
																	obj_t BgL_arg1523z00_2994;

																	{	/* Eval/eval.scm 544 */
																		obj_t BgL_objz00_2996;

																		if (EPAIRP(BgL_xz00_50))
																			{	/* Eval/eval.scm 544 */
																				BgL_objz00_2996 = BgL_xz00_50;
																			}
																		else
																			{
																				obj_t BgL_auxz00_5493;

																				BgL_auxz00_5493 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string2812z00zz__evalz00,
																					BINT(((long) 21704)),
																					BGl_string2876z00zz__evalz00,
																					BGl_string2864z00zz__evalz00,
																					BgL_xz00_50);
																				FAILURE(BgL_auxz00_5493, BFALSE,
																					BFALSE);
																			}
																		BgL_arg1523z00_2994 = CER(BgL_objz00_2996);
																	}
																	return
																		BGl_everrorz00zz__everrorz00
																		(BgL_arg1523z00_2994, BgL_procz00_2992,
																		BGl_string2879z00zz__evalz00, BgL_xz00_50);
																}
															else
																{	/* Eval/eval.scm 543 */
																	return
																		BGl_errorz00zz__errorz00(BgL_procz00_2992,
																		BGl_string2879z00zz__evalz00, BgL_xz00_50);
																}
														}
													}
											}
									}
								else
									{	/* Eval/eval.scm 580 */
										obj_t BgL_carzd2240zd2_1629;

										BgL_carzd2240zd2_1629 =
											CAR(((obj_t) BgL_cdrzd2145zd2_1597));
										if (SYMBOLP(BgL_carzd2240zd2_1629))
											{	/* Eval/eval.scm 580 */
												obj_t BgL_arg1551z00_1631;

												BgL_arg1551z00_1631 =
													CDR(((obj_t) BgL_cdrzd2145zd2_1597));
												{	/* Eval/eval.scm 587 */
													obj_t BgL_expdzd2lamzd2_3001;

													{	/* Eval/eval.scm 587 */
														obj_t BgL_auxz00_5506;

														{	/* Eval/eval.scm 587 */
															bool_t BgL_test3346z00_5507;

															if (PAIRP(BgL_arg1551z00_1631))
																{	/* Eval/eval.scm 587 */
																	BgL_test3346z00_5507 = ((bool_t) 1);
																}
															else
																{	/* Eval/eval.scm 587 */
																	BgL_test3346z00_5507 =
																		NULLP(BgL_arg1551z00_1631);
																}
															if (BgL_test3346z00_5507)
																{	/* Eval/eval.scm 587 */
																	BgL_auxz00_5506 = BgL_arg1551z00_1631;
																}
															else
																{
																	obj_t BgL_auxz00_5511;

																	BgL_auxz00_5511 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2812z00zz__evalz00,
																		BINT(((long) 23110)),
																		BGl_string2876z00zz__evalz00,
																		BGl_string2869z00zz__evalz00,
																		BgL_arg1551z00_1631);
																	FAILURE(BgL_auxz00_5511, BFALSE, BFALSE);
														}}
														BgL_expdzd2lamzd2_3001 =
															BGl_expandzd2prognzd2zz__prognz00
															(BgL_auxz00_5506);
													}
													{	/* Eval/eval.scm 587 */
														obj_t BgL_expdzd2lamzf2locz20_3002;

														BgL_expdzd2lamzf2locz20_3002 =
															BGl_evepairifyz00zz__prognz00
															(BgL_expdzd2lamzd2_3001, BgL_xz00_50);
														{	/* Eval/eval.scm 588 */
															obj_t BgL_expdzd2evalzd2_3003;

															{	/* Eval/eval.scm 83 */
																obj_t BgL_envz00_3005;

																BgL_envz00_3005 =
																	BGl_defaultzd2environmentzd2zz__evalz00();
																{	/* Eval/eval.scm 83 */

																	{	/* Eval/eval.scm 172 */
																		obj_t BgL_auxz00_5518;

																		{	/* Eval/eval.scm 172 */
																			obj_t BgL_aux2653z00_3979;

																			BgL_aux2653z00_3979 =
																				BGl_defaultzd2evaluatezd2zz__evalz00;
																			if (PROCEDUREP(BgL_aux2653z00_3979))
																				{	/* Eval/eval.scm 172 */
																					BgL_auxz00_5518 = BgL_aux2653z00_3979;
																				}
																			else
																				{
																					obj_t BgL_auxz00_5521;

																					BgL_auxz00_5521 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string2812z00zz__evalz00,
																						BINT(((long) 6523)),
																						BGl_string2876z00zz__evalz00,
																						BGl_string2814z00zz__evalz00,
																						BgL_aux2653z00_3979);
																					FAILURE(BgL_auxz00_5521, BFALSE,
																						BFALSE);
																		}}
																		BgL_expdzd2evalzd2_3003 =
																			BGl_evalzf2expanderzf2zz__evalz00
																			(BgL_expdzd2lamzf2locz20_3002,
																			BgL_envz00_3005,
																			BGl_expandzd2envzd2zz__expandz00,
																			BgL_auxz00_5518);
															}}}
															{	/* Eval/eval.scm 589 */

																{
																	obj_t BgL_expdzd2evalzd2_5529;
																	obj_t BgL_expdzd2lamzf2locz20_5528;
																	obj_t BgL_expdzd2lamzd2_5527;
																	obj_t BgL_namez00_5526;

																	BgL_namez00_5526 = BgL_carzd2240zd2_1629;
																	BgL_expdzd2lamzd2_5527 =
																		BgL_expdzd2lamzd2_3001;
																	BgL_expdzd2lamzf2locz20_5528 =
																		BgL_expdzd2lamzf2locz20_3002;
																	BgL_expdzd2evalzd2_5529 =
																		BgL_expdzd2evalzd2_3003;
																	BgL_expdzd2evalzd2_1645 =
																		BgL_expdzd2evalzd2_5529;
																	BgL_expdzd2lamzf2locz20_1644 =
																		BgL_expdzd2lamzf2locz20_5528;
																	BgL_expdzd2lamzd2_1643 =
																		BgL_expdzd2lamzd2_5527;
																	BgL_namez00_1642 = BgL_namez00_5526;
																	goto BgL_zc3z04anonymousza31552ze3z87_1646;
																}
															}
														}
													}
												}
											}
										else
											{	/* Eval/eval.scm 592 */
												obj_t BgL_procz00_3006;

												BgL_procz00_3006 = BGl_symbol2877z00zz__evalz00;
												{	/* Eval/eval.scm 543 */
													bool_t BgL_test3349z00_5530;

													{	/* Eval/eval.scm 543 */
														bool_t BgL_res2357z00_3009;

														BgL_res2357z00_3009 = EPAIRP(BgL_xz00_50);
														BgL_test3349z00_5530 = BgL_res2357z00_3009;
													}
													if (BgL_test3349z00_5530)
														{	/* Eval/eval.scm 544 */
															obj_t BgL_arg1523z00_3008;

															{	/* Eval/eval.scm 544 */
																obj_t BgL_objz00_3010;

																if (EPAIRP(BgL_xz00_50))
																	{	/* Eval/eval.scm 544 */
																		BgL_objz00_3010 = BgL_xz00_50;
																	}
																else
																	{
																		obj_t BgL_auxz00_5534;

																		BgL_auxz00_5534 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string2812z00zz__evalz00,
																			BINT(((long) 21704)),
																			BGl_string2876z00zz__evalz00,
																			BGl_string2864z00zz__evalz00,
																			BgL_xz00_50);
																		FAILURE(BgL_auxz00_5534, BFALSE, BFALSE);
																	}
																BgL_arg1523z00_3008 = CER(BgL_objz00_3010);
															}
															return
																BGl_everrorz00zz__everrorz00
																(BgL_arg1523z00_3008, BgL_procz00_3006,
																BGl_string2879z00zz__evalz00, BgL_xz00_50);
														}
													else
														{	/* Eval/eval.scm 543 */
															return
																BGl_errorz00zz__errorz00(BgL_procz00_3006,
																BGl_string2879z00zz__evalz00, BgL_xz00_50);
														}
												}
											}
									}
							}
						else
							{	/* Eval/eval.scm 592 */
								obj_t BgL_procz00_3011;

								BgL_procz00_3011 = BGl_symbol2877z00zz__evalz00;
								{	/* Eval/eval.scm 543 */
									bool_t BgL_test3351z00_5541;

									{	/* Eval/eval.scm 543 */
										bool_t BgL_res2358z00_3014;

										BgL_res2358z00_3014 = EPAIRP(BgL_xz00_50);
										BgL_test3351z00_5541 = BgL_res2358z00_3014;
									}
									if (BgL_test3351z00_5541)
										{	/* Eval/eval.scm 544 */
											obj_t BgL_arg1523z00_3013;

											{	/* Eval/eval.scm 544 */
												obj_t BgL_objz00_3015;

												if (EPAIRP(BgL_xz00_50))
													{	/* Eval/eval.scm 544 */
														BgL_objz00_3015 = BgL_xz00_50;
													}
												else
													{
														obj_t BgL_auxz00_5545;

														BgL_auxz00_5545 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2812z00zz__evalz00,
															BINT(((long) 21704)),
															BGl_string2876z00zz__evalz00,
															BGl_string2864z00zz__evalz00, BgL_xz00_50);
														FAILURE(BgL_auxz00_5545, BFALSE, BFALSE);
													}
												BgL_arg1523z00_3013 = CER(BgL_objz00_3015);
											}
											return
												BGl_everrorz00zz__everrorz00(BgL_arg1523z00_3013,
												BgL_procz00_3011, BGl_string2879z00zz__evalz00,
												BgL_xz00_50);
										}
									else
										{	/* Eval/eval.scm 543 */
											return
												BGl_errorz00zz__errorz00(BgL_procz00_3011,
												BGl_string2879z00zz__evalz00, BgL_xz00_50);
										}
								}
							}
					}
				else
					{	/* Eval/eval.scm 592 */
						obj_t BgL_procz00_3016;

						BgL_procz00_3016 = BGl_symbol2877z00zz__evalz00;
						{	/* Eval/eval.scm 543 */
							bool_t BgL_test3353z00_5552;

							{	/* Eval/eval.scm 543 */
								bool_t BgL_res2359z00_3019;

								BgL_res2359z00_3019 = EPAIRP(BgL_xz00_50);
								BgL_test3353z00_5552 = BgL_res2359z00_3019;
							}
							if (BgL_test3353z00_5552)
								{	/* Eval/eval.scm 544 */
									obj_t BgL_arg1523z00_3018;

									{	/* Eval/eval.scm 544 */
										obj_t BgL_objz00_3020;

										if (EPAIRP(BgL_xz00_50))
											{	/* Eval/eval.scm 544 */
												BgL_objz00_3020 = BgL_xz00_50;
											}
										else
											{
												obj_t BgL_auxz00_5556;

												BgL_auxz00_5556 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2812z00zz__evalz00, BINT(((long) 21704)),
													BGl_string2876z00zz__evalz00,
													BGl_string2864z00zz__evalz00, BgL_xz00_50);
												FAILURE(BgL_auxz00_5556, BFALSE, BFALSE);
											}
										BgL_arg1523z00_3018 = CER(BgL_objz00_3020);
									}
									return
										BGl_everrorz00zz__everrorz00(BgL_arg1523z00_3018,
										BgL_procz00_3016, BGl_string2879z00zz__evalz00,
										BgL_xz00_50);
								}
							else
								{	/* Eval/eval.scm 543 */
									return
										BGl_errorz00zz__errorz00(BgL_procz00_3016,
										BGl_string2879z00zz__evalz00, BgL_xz00_50);
								}
						}
					}
			}
		}

	}



/* &expand-define-expander */
	obj_t BGl_z62expandzd2definezd2expanderz62zz__evalz00(obj_t BgL_envz00_3712,
		obj_t BgL_xz00_3713, obj_t BgL_ez00_3714)
	{
		{	/* Eval/eval.scm 550 */
			return
				BGl_expandzd2definezd2expanderz00zz__evalz00(BgL_xz00_3713,
				BgL_ez00_3714);
		}

	}



/* &<@anonymous:1554> */
	obj_t BGl_z62zc3z04anonymousza31554ze3ze5zz__evalz00(obj_t BgL_envz00_3715,
		obj_t BgL_xz00_3718, obj_t BgL_ez00_3719)
	{
		{	/* Eval/eval.scm 555 */
			{	/* Eval/eval.scm 556 */
				obj_t BgL_namez00_3716;
				obj_t BgL_expdzd2evalzd2_3717;

				BgL_namez00_3716 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3715, (int) (((long) 0))));
				BgL_expdzd2evalzd2_3717 =
					PROCEDURE_REF(BgL_envz00_3715, (int) (((long) 1)));
				if (PROCEDUREP(BgL_expdzd2evalzd2_3717))
					{	/* Eval/eval.scm 556 */
						if (PROCEDURE_CORRECT_ARITYP(BgL_expdzd2evalzd2_3717,
								(int) (((long) 2))))
							{	/* Eval/eval.scm 562 */
								obj_t BgL_res1094z00_4183;

								BgL_res1094z00_4183 = MAKE_CELL(BUNSPEC);
								{
									obj_t BgL_excz00_4185;

									if (CBOOL(BGl_zc3z04exitza31564ze3ze70z60zz__evalz00
											(BgL_ez00_3719, BgL_xz00_3718, BgL_expdzd2evalzd2_3717,
												BgL_res1094z00_4183)))
										{	/* Eval/eval.scm 562 */
											BgL_excz00_4185 = CELL_REF(BgL_res1094z00_4183);
											{	/* Eval/eval.scm 564 */
												obj_t BgL_nexcz00_4186;

												if (BGl_isazf3zf3zz__objectz00(BgL_excz00_4185,
														BGl_z62errorz62zz__objectz00))
													{	/* Eval/eval.scm 566 */
														bool_t BgL_test3359z00_5579;

														{	/* Eval/eval.scm 566 */
															obj_t BgL_arg1596z00_4187;

															BgL_arg1596z00_4187 =
																(((BgL_z62errorz62_bglt) COBJECT(
																		((BgL_z62errorz62_bglt) BgL_excz00_4185)))->
																BgL_objz00);
															{	/* Eval/eval.scm 566 */
																bool_t BgL_res2331z00_4188;

																BgL_res2331z00_4188 =
																	EPAIRP(BgL_arg1596z00_4187);
																BgL_test3359z00_5579 = BgL_res2331z00_4188;
															}
														}
														if (BgL_test3359z00_5579)
															{
																obj_t BgL_fnamez00_4190;
																obj_t BgL_locz00_4191;

																{	/* Eval/eval.scm 567 */
																	obj_t BgL_ezd2120zd2_4200;

																	{	/* Eval/eval.scm 567 */
																		obj_t BgL_objz00_4201;

																		{	/* Eval/eval.scm 567 */
																			obj_t BgL_aux2672z00_4202;

																			BgL_aux2672z00_4202 =
																				(((BgL_z62errorz62_bglt) COBJECT(
																						((BgL_z62errorz62_bglt)
																							BgL_excz00_4185)))->BgL_objz00);
																			if (EPAIRP(BgL_aux2672z00_4202))
																				{	/* Eval/eval.scm 567 */
																					BgL_objz00_4201 = BgL_aux2672z00_4202;
																				}
																			else
																				{
																					obj_t BgL_auxz00_5587;

																					BgL_auxz00_5587 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string2812z00zz__evalz00,
																						BINT(((long) 22519)),
																						BGl_string2882z00zz__evalz00,
																						BGl_string2864z00zz__evalz00,
																						BgL_aux2672z00_4202);
																					FAILURE(BgL_auxz00_5587, BFALSE,
																						BFALSE);
																		}}
																		BgL_ezd2120zd2_4200 = CER(BgL_objz00_4201);
																	}
																	if (PAIRP(BgL_ezd2120zd2_4200))
																		{	/* Eval/eval.scm 567 */
																			obj_t BgL_cdrzd2126zd2_4203;

																			BgL_cdrzd2126zd2_4203 =
																				CDR(BgL_ezd2120zd2_4200);
																			if (
																				(CAR(BgL_ezd2120zd2_4200) ==
																					BGl_symbol2818z00zz__evalz00))
																				{	/* Eval/eval.scm 567 */
																					if (PAIRP(BgL_cdrzd2126zd2_4203))
																						{	/* Eval/eval.scm 567 */
																							obj_t BgL_cdrzd2130zd2_4204;

																							BgL_cdrzd2130zd2_4204 =
																								CDR(BgL_cdrzd2126zd2_4203);
																							if (PAIRP(BgL_cdrzd2130zd2_4204))
																								{	/* Eval/eval.scm 567 */
																									if (NULLP(CDR
																											(BgL_cdrzd2130zd2_4204)))
																										{	/* Eval/eval.scm 567 */
																											obj_t BgL_arg1584z00_4205;
																											obj_t BgL_arg1587z00_4206;

																											BgL_arg1584z00_4205 =
																												CAR
																												(BgL_cdrzd2126zd2_4203);
																											BgL_arg1587z00_4206 =
																												CAR
																												(BgL_cdrzd2130zd2_4204);
																											{
																												BgL_z62errorz62_bglt
																													BgL_auxz00_5608;
																												BgL_fnamez00_4190 =
																													BgL_arg1584z00_4205;
																												BgL_locz00_4191 =
																													BgL_arg1587z00_4206;
																												{	/* Eval/eval.scm 569 */
																													BgL_z62exceptionz62_bglt
																														BgL_duplicated1100z00_4192;
																													BgL_z62errorz62_bglt
																														BgL_new1098z00_4193;
																													if (BGl_isazf3zf3zz__objectz00(BgL_excz00_4185, BGl_z62exceptionz62zz__objectz00))
																														{	/* Eval/eval.scm 570 */
																															BgL_duplicated1100z00_4192
																																=
																																(
																																(BgL_z62exceptionz62_bglt)
																																BgL_excz00_4185);
																														}
																													else
																														{
																															obj_t
																																BgL_auxz00_5612;
																															BgL_auxz00_5612 =
																																BGl_typezd2errorzd2zz__errorz00
																																(BGl_string2812z00zz__evalz00,
																																BINT(((long)
																																		22599)),
																																BGl_string2880z00zz__evalz00,
																																BGl_string2881z00zz__evalz00,
																																BgL_excz00_4185);
																															FAILURE
																																(BgL_auxz00_5612,
																																BFALSE, BFALSE);
																														}
																													{	/* Eval/eval.scm 570 */
																														BgL_z62errorz62_bglt
																															BgL_new1104z00_4194;
																														BgL_new1104z00_4194
																															=
																															(
																															(BgL_z62errorz62_bglt)
																															BOBJECT(GC_MALLOC
																																(sizeof(struct
																																		BgL_z62errorz62_bgl))));
																														{	/* Eval/eval.scm 570 */
																															long
																																BgL_arg1593z00_4195;
																															{	/* Eval/eval.scm 570 */
																																long
																																	BgL_res2332z00_4196;
																																BgL_res2332z00_4196
																																	=
																																	BGL_CLASS_INDEX
																																	(BGl_z62errorz62zz__objectz00);
																																BgL_arg1593z00_4195
																																	=
																																	BgL_res2332z00_4196;
																															}
																															BGL_OBJECT_CLASS_NUM_SET
																																(((BgL_objectz00_bglt) BgL_new1104z00_4194), BgL_arg1593z00_4195);
																														}
																														BgL_new1098z00_4193
																															=
																															BgL_new1104z00_4194;
																													}
																													((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1098z00_4193)))->BgL_fnamez00) = ((obj_t) BgL_fnamez00_4190), BUNSPEC);
																													((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1098z00_4193)))->BgL_locationz00) = ((obj_t) BgL_locz00_4191), BUNSPEC);
																													((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1098z00_4193)))->BgL_stackz00) = ((obj_t) (((BgL_z62exceptionz62_bglt) COBJECT(BgL_duplicated1100z00_4192))->BgL_stackz00)), BUNSPEC);
																													{
																														obj_t
																															BgL_auxz00_5627;
																														{	/* Eval/eval.scm 571 */
																															BgL_z62errorz62_bglt
																																BgL_tmp1101z00_4197;
																															if (BGl_isazf3zf3zz__objectz00(((obj_t) BgL_duplicated1100z00_4192), BGl_z62errorz62zz__objectz00))
																																{	/* Eval/eval.scm 571 */
																																	BgL_tmp1101z00_4197
																																		=
																																		(
																																		(BgL_z62errorz62_bglt)
																																		BgL_duplicated1100z00_4192);
																																}
																															else
																																{
																																	obj_t
																																		BgL_auxz00_5632;
																																	BgL_auxz00_5632
																																		=
																																		BGl_typezd2errorzd2zz__errorz00
																																		(BGl_string2812z00zz__evalz00,
																																		BINT(((long)
																																				22625)),
																																		BGl_string2880z00zz__evalz00,
																																		BGl_string2845z00zz__evalz00,
																																		((obj_t)
																																			BgL_duplicated1100z00_4192));
																																	FAILURE
																																		(BgL_auxz00_5632,
																																		BFALSE,
																																		BFALSE);
																																}
																															BgL_auxz00_5627 =
																																(((BgL_z62errorz62_bglt) COBJECT(BgL_tmp1101z00_4197))->BgL_procz00);
																														}
																														((((BgL_z62errorz62_bglt) COBJECT(BgL_new1098z00_4193))->BgL_procz00) = ((obj_t) BgL_auxz00_5627), BUNSPEC);
																													}
																													{
																														obj_t
																															BgL_auxz00_5639;
																														{	/* Eval/eval.scm 571 */
																															BgL_z62errorz62_bglt
																																BgL_tmp1102z00_4198;
																															if (BGl_isazf3zf3zz__objectz00(((obj_t) BgL_duplicated1100z00_4192), BGl_z62errorz62zz__objectz00))
																																{	/* Eval/eval.scm 571 */
																																	BgL_tmp1102z00_4198
																																		=
																																		(
																																		(BgL_z62errorz62_bglt)
																																		BgL_duplicated1100z00_4192);
																																}
																															else
																																{
																																	obj_t
																																		BgL_auxz00_5644;
																																	BgL_auxz00_5644
																																		=
																																		BGl_typezd2errorzd2zz__errorz00
																																		(BGl_string2812z00zz__evalz00,
																																		BINT(((long)
																																				22625)),
																																		BGl_string2880z00zz__evalz00,
																																		BGl_string2845z00zz__evalz00,
																																		((obj_t)
																																			BgL_duplicated1100z00_4192));
																																	FAILURE
																																		(BgL_auxz00_5644,
																																		BFALSE,
																																		BFALSE);
																																}
																															BgL_auxz00_5639 =
																																(((BgL_z62errorz62_bglt) COBJECT(BgL_tmp1102z00_4198))->BgL_msgz00);
																														}
																														((((BgL_z62errorz62_bglt) COBJECT(BgL_new1098z00_4193))->BgL_msgz00) = ((obj_t) BgL_auxz00_5639), BUNSPEC);
																													}
																													{
																														obj_t
																															BgL_auxz00_5651;
																														{	/* Eval/eval.scm 571 */
																															BgL_z62errorz62_bglt
																																BgL_tmp1103z00_4199;
																															if (BGl_isazf3zf3zz__objectz00(((obj_t) BgL_duplicated1100z00_4192), BGl_z62errorz62zz__objectz00))
																																{	/* Eval/eval.scm 571 */
																																	BgL_tmp1103z00_4199
																																		=
																																		(
																																		(BgL_z62errorz62_bglt)
																																		BgL_duplicated1100z00_4192);
																																}
																															else
																																{
																																	obj_t
																																		BgL_auxz00_5656;
																																	BgL_auxz00_5656
																																		=
																																		BGl_typezd2errorzd2zz__errorz00
																																		(BGl_string2812z00zz__evalz00,
																																		BINT(((long)
																																				22625)),
																																		BGl_string2880z00zz__evalz00,
																																		BGl_string2845z00zz__evalz00,
																																		((obj_t)
																																			BgL_duplicated1100z00_4192));
																																	FAILURE
																																		(BgL_auxz00_5656,
																																		BFALSE,
																																		BFALSE);
																																}
																															BgL_auxz00_5651 =
																																(((BgL_z62errorz62_bglt) COBJECT(BgL_tmp1103z00_4199))->BgL_objz00);
																														}
																														((((BgL_z62errorz62_bglt) COBJECT(BgL_new1098z00_4193))->BgL_objz00) = ((obj_t) BgL_auxz00_5651), BUNSPEC);
																													}
																													BgL_auxz00_5608 =
																														BgL_new1098z00_4193;
																												}
																												BgL_nexcz00_4186 =
																													((obj_t)
																													BgL_auxz00_5608);
																										}}
																									else
																										{	/* Eval/eval.scm 567 */
																											BgL_nexcz00_4186 =
																												BgL_excz00_4185;
																										}
																								}
																							else
																								{	/* Eval/eval.scm 567 */
																									BgL_nexcz00_4186 =
																										BgL_excz00_4185;
																								}
																						}
																					else
																						{	/* Eval/eval.scm 567 */
																							BgL_nexcz00_4186 =
																								BgL_excz00_4185;
																						}
																				}
																			else
																				{	/* Eval/eval.scm 567 */
																					BgL_nexcz00_4186 = BgL_excz00_4185;
																				}
																		}
																	else
																		{	/* Eval/eval.scm 567 */
																			BgL_nexcz00_4186 = BgL_excz00_4185;
																		}
																}
															}
														else
															{	/* Eval/eval.scm 566 */
																BgL_nexcz00_4186 = BgL_excz00_4185;
															}
													}
												else
													{	/* Eval/eval.scm 564 */
														BgL_nexcz00_4186 = BgL_excz00_4185;
													}
												return BGl_raisez00zz__errorz00(BgL_nexcz00_4186);
											}
										}
									else
										{	/* Eval/eval.scm 562 */
											return CELL_REF(BgL_res1094z00_4183);
										}
								}
							}
						else
							{	/* Eval/eval.scm 543 */
								bool_t BgL_test3370z00_5665;

								{	/* Eval/eval.scm 543 */
									bool_t BgL_res2337z00_4207;

									BgL_res2337z00_4207 = EPAIRP(BgL_xz00_3718);
									BgL_test3370z00_5665 = BgL_res2337z00_4207;
								}
								if (BgL_test3370z00_5665)
									{	/* Eval/eval.scm 544 */
										obj_t BgL_arg1523z00_4208;

										{	/* Eval/eval.scm 544 */
											obj_t BgL_objz00_4209;

											if (EPAIRP(BgL_xz00_3718))
												{	/* Eval/eval.scm 544 */
													BgL_objz00_4209 = BgL_xz00_3718;
												}
											else
												{
													obj_t BgL_auxz00_5669;

													BgL_auxz00_5669 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2812z00zz__evalz00, BINT(((long) 21704)),
														BGl_string2883z00zz__evalz00,
														BGl_string2864z00zz__evalz00, BgL_xz00_3718);
													FAILURE(BgL_auxz00_5669, BFALSE, BFALSE);
												}
											BgL_arg1523z00_4208 = CER(BgL_objz00_4209);
										}
										return
											BGl_everrorz00zz__everrorz00(BgL_arg1523z00_4208,
											BgL_namez00_3716, BGl_string2884z00zz__evalz00,
											BgL_xz00_3718);
									}
								else
									{	/* Eval/eval.scm 543 */
										return
											BGl_errorz00zz__errorz00(BgL_namez00_3716,
											BGl_string2884z00zz__evalz00, BgL_xz00_3718);
									}
							}
					}
				else
					{	/* Eval/eval.scm 543 */
						bool_t BgL_test3372z00_5676;

						{	/* Eval/eval.scm 543 */
							bool_t BgL_res2338z00_4210;

							BgL_res2338z00_4210 = EPAIRP(BgL_xz00_3718);
							BgL_test3372z00_5676 = BgL_res2338z00_4210;
						}
						if (BgL_test3372z00_5676)
							{	/* Eval/eval.scm 544 */
								obj_t BgL_arg1523z00_4211;

								{	/* Eval/eval.scm 544 */
									obj_t BgL_objz00_4212;

									if (EPAIRP(BgL_xz00_3718))
										{	/* Eval/eval.scm 544 */
											BgL_objz00_4212 = BgL_xz00_3718;
										}
									else
										{
											obj_t BgL_auxz00_5680;

											BgL_auxz00_5680 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2812z00zz__evalz00, BINT(((long) 21704)),
												BGl_string2883z00zz__evalz00,
												BGl_string2864z00zz__evalz00, BgL_xz00_3718);
											FAILURE(BgL_auxz00_5680, BFALSE, BFALSE);
										}
									BgL_arg1523z00_4211 = CER(BgL_objz00_4212);
								}
								return
									BGl_everrorz00zz__everrorz00(BgL_arg1523z00_4211,
									BgL_namez00_3716, BGl_string2885z00zz__evalz00,
									BgL_xz00_3718);
							}
						else
							{	/* Eval/eval.scm 543 */
								return
									BGl_errorz00zz__errorz00(BgL_namez00_3716,
									BGl_string2885z00zz__evalz00, BgL_xz00_3718);
							}
					}
			}
		}

	}



/* <@exit:1564>~0 */
	obj_t BGl_zc3z04exitza31564ze3ze70z60zz__evalz00(obj_t BgL_ez00_3812,
		obj_t BgL_xz00_3811, obj_t BgL_expdzd2evalzd2_3810,
		obj_t BgL_res1094z00_3809)
	{
		{	/* Eval/eval.scm 562 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1108z00_1674;

			if (SET_EXIT(BgL_an_exit1108z00_1674))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1108z00_1674 = (void *) jmpbuf;
					{	/* Eval/eval.scm 562 */

						PUSH_EXIT(BgL_an_exit1108z00_1674, ((long) 1));
						{	/* Eval/eval.scm 562 */
							obj_t BgL_an_exitd1109z00_1675;

							BgL_an_exitd1109z00_1675 = ((obj_t) (&exitd));
							{	/* Eval/eval.scm 562 */
								bool_t BgL_res1111z00_1678;

								{	/* Eval/eval.scm 562 */
									obj_t BgL_ohs1092z00_1679;

									BgL_ohs1092z00_1679 = BGL_ERROR_HANDLER_GET();
									{	/* Eval/eval.scm 562 */
										obj_t BgL_exitd1105z00_1680;

										BgL_exitd1105z00_1680 = ((obj_t) (&exitd));
										{
											obj_t BgL_zc3z04anonymousza31568ze3z87_3709;

											BgL_zc3z04anonymousza31568ze3z87_3709 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31568ze3ze5zz__evalz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31568ze3z87_3709,
												(int) (((long) 0)), BgL_ohs1092z00_1679);
											BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
												(BgL_exitd1105z00_1680,
												BgL_zc3z04anonymousza31568ze3z87_3709);
											{	/* Eval/eval.scm 562 */
												bool_t BgL_tmp1107z00_1682;

												{	/* Eval/eval.scm 562 */
													obj_t BgL_arg1565z00_1683;

													{	/* Eval/eval.scm 562 */
														obj_t BgL_zc3z04anonymousza31567ze3z87_3710;

														BgL_zc3z04anonymousza31567ze3z87_3710 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31567ze3ze5zz__evalz00,
															(int) (((long) 1)), (int) (((long) 2)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31567ze3z87_3710,
															(int) (((long) 0)),
															((obj_t) BgL_res1094z00_3809));
														PROCEDURE_SET(BgL_zc3z04anonymousza31567ze3z87_3710,
															(int) (((long) 1)), BgL_an_exitd1109z00_1675);
														BgL_arg1565z00_1683 =
															MAKE_YOUNG_PAIR
															(BgL_zc3z04anonymousza31567ze3z87_3710,
															BgL_ohs1092z00_1679);
													}
													BGL_ERROR_HANDLER_SET(BgL_arg1565z00_1683);
													BUNSPEC;
												}
												{	/* Eval/eval.scm 562 */
													obj_t BgL_auxz00_3721;

													{	/* Eval/eval.scm 577 */
														obj_t BgL_tmpfunz00_5711;

														{	/* Eval/eval.scm 577 */
															bool_t BgL_test2679z00_4013;

															BgL_test2679z00_4013 =
																PROCEDUREP(BgL_expdzd2evalzd2_3810);
															if (BgL_test2679z00_4013)
																{	/* Eval/eval.scm 577 */
																	BgL_tmpfunz00_5711 = BgL_expdzd2evalzd2_3810;
																}
															else
																{
																	obj_t BgL_auxz00_5714;

																	BgL_auxz00_5714 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2812z00zz__evalz00,
																		BINT(((long) 22729)),
																		BGl_string2886z00zz__evalz00,
																		BGl_string2814z00zz__evalz00,
																		BgL_expdzd2evalzd2_3810);
																	FAILURE(BgL_auxz00_5714, BFALSE, BFALSE);
														}}
														BgL_auxz00_3721 =
															PROCEDURE_ENTRY(BgL_tmpfunz00_5711)
															(BgL_expdzd2evalzd2_3810, BgL_xz00_3811,
															BgL_ez00_3812, BEOA);
													}
													CELL_SET(BgL_res1094z00_3809, BgL_auxz00_3721);
												}
												BgL_tmp1107z00_1682 = ((bool_t) 0);
												BGl_exitdzd2popzd2protectz12z12zz__bexitz00
													(BgL_exitd1105z00_1680);
												BGL_ERROR_HANDLER_SET(BgL_ohs1092z00_1679);
												BUNSPEC;
												BgL_res1111z00_1678 = BgL_tmp1107z00_1682;
								}}}}
								POP_EXIT();
								return BBOOL(BgL_res1111z00_1678);
							}
						}
					}
				}
		}

	}



/* &<@anonymous:1567> */
	obj_t BGl_z62zc3z04anonymousza31567ze3ze5zz__evalz00(obj_t BgL_envz00_3723,
		obj_t BgL_ez00_3726)
	{
		{	/* Eval/eval.scm 562 */
			{	/* Eval/eval.scm 562 */
				obj_t BgL_res1094z00_3724;
				obj_t BgL_an_exitd1109z00_3725;

				BgL_res1094z00_3724 =
					PROCEDURE_REF(BgL_envz00_3723, (int) (((long) 0)));
				BgL_an_exitd1109z00_3725 =
					PROCEDURE_REF(BgL_envz00_3723, (int) (((long) 1)));
				CELL_SET(BgL_res1094z00_3724, BgL_ez00_3726);
				return
					BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1109z00_3725, BTRUE);
			}
		}

	}



/* &<@anonymous:1568> */
	obj_t BGl_z62zc3z04anonymousza31568ze3ze5zz__evalz00(obj_t BgL_envz00_3728)
	{
		{	/* Eval/eval.scm 562 */
			{
				obj_t BgL_ohs1092z00_3729;

				BgL_ohs1092z00_3729 =
					PROCEDURE_REF(BgL_envz00_3728, (int) (((long) 0)));
				BGL_ERROR_HANDLER_SET(BgL_ohs1092z00_3729);
				return BUNSPEC;
			}
		}

	}



/* expand-define-macro */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2definezd2macroz00zz__evalz00(obj_t
		BgL_xz00_52, obj_t BgL_ez00_53)
	{
		{	/* Eval/eval.scm 599 */
			{
				obj_t BgL_namez00_1727;
				obj_t BgL_argsz00_1728;
				obj_t BgL_bodyz00_1729;

				if (PAIRP(BgL_xz00_52))
					{	/* Eval/eval.scm 600 */
						obj_t BgL_cdrzd2268zd2_1734;

						BgL_cdrzd2268zd2_1734 = CDR(BgL_xz00_52);
						if (PAIRP(BgL_cdrzd2268zd2_1734))
							{	/* Eval/eval.scm 600 */
								obj_t BgL_carzd2272zd2_1736;

								BgL_carzd2272zd2_1736 = CAR(BgL_cdrzd2268zd2_1734);
								if (PAIRP(BgL_carzd2272zd2_1736))
									{	/* Eval/eval.scm 600 */
										BgL_namez00_1727 = CAR(BgL_carzd2272zd2_1736);
										BgL_argsz00_1728 = CDR(BgL_carzd2272zd2_1736);
										BgL_bodyz00_1729 = CDR(BgL_cdrzd2268zd2_1734);
									BgL_tagzd2254zd2_1730:
										{	/* Eval/eval.scm 603 */
											obj_t BgL_fnamez00_1757;
											obj_t BgL_locz00_1758;

											{	/* Eval/eval.scm 603 */

												{	/* Eval/eval.scm 603 */

													BgL_fnamez00_1757 =
														BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
												}
											}
											{	/* Eval/eval.scm 604 */

												{	/* Eval/eval.scm 604 */

													BgL_locz00_1758 =
														BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
												}
											}
											{	/* Eval/eval.scm 607 */
												obj_t BgL_arg1618z00_1759;

												{	/* Eval/eval.scm 607 */
													obj_t BgL_evexpdz00_1760;

													{	/* Eval/eval.scm 607 */
														obj_t BgL_arg1652z00_1840;

														{	/* Eval/eval.scm 607 */
															obj_t BgL_arg1654z00_1841;
															obj_t BgL_arg1656z00_1842;

															{	/* Eval/eval.scm 607 */
																obj_t BgL_arg1657z00_1843;

																BgL_arg1657z00_1843 =
																	MAKE_YOUNG_PAIR(BGl_symbol2887z00zz__evalz00,
																	BNIL);
																BgL_arg1654z00_1841 =
																	MAKE_YOUNG_PAIR(BGl_symbol2889z00zz__evalz00,
																	BgL_arg1657z00_1843);
															}
															{	/* Eval/eval.scm 608 */
																obj_t BgL_arg1658z00_1844;

																{	/* Eval/eval.scm 608 */
																	obj_t BgL_arg1659z00_1845;

																	{	/* Eval/eval.scm 608 */
																		obj_t BgL_arg1660z00_1846;
																		obj_t BgL_arg1661z00_1847;

																		{	/* Eval/eval.scm 608 */
																			obj_t BgL_arg1662z00_1848;
																			obj_t BgL_arg1663z00_1849;

																			{	/* Eval/eval.scm 608 */
																				obj_t BgL_arg1664z00_1850;

																				BgL_arg1664z00_1850 =
																					MAKE_YOUNG_PAIR(BFALSE, BNIL);
																				BgL_arg1662z00_1848 =
																					MAKE_YOUNG_PAIR(BgL_fnamez00_1757,
																					BgL_arg1664z00_1850);
																			}
																			BgL_arg1663z00_1849 =
																				MAKE_YOUNG_PAIR(BgL_locz00_1758, BNIL);
																			BgL_arg1660z00_1846 =
																				MAKE_YOUNG_PAIR(BgL_arg1662z00_1848,
																				BgL_arg1663z00_1849);
																		}
																		{	/* Eval/eval.scm 609 */
																			obj_t BgL_arg1665z00_1851;
																			obj_t BgL_arg1667z00_1852;

																			{	/* Eval/eval.scm 609 */
																				obj_t BgL_arg1668z00_1853;

																				{	/* Eval/eval.scm 609 */
																					obj_t BgL_arg1669z00_1854;
																					obj_t BgL_arg1672z00_1855;

																					{	/* Eval/eval.scm 609 */
																						obj_t BgL_arg1675z00_1856;

																						BgL_arg1675z00_1856 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2889z00zz__evalz00,
																							BNIL);
																						BgL_arg1669z00_1854 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2891z00zz__evalz00,
																							BgL_arg1675z00_1856);
																					}
																					{	/* Eval/eval.scm 610 */
																						obj_t BgL_arg1683z00_1857;

																						{	/* Eval/eval.scm 610 */
																							obj_t BgL_arg1684z00_1858;

																							{	/* Eval/eval.scm 610 */
																								obj_t BgL_arg1685z00_1859;
																								obj_t BgL_arg1686z00_1860;

																								{	/* Eval/eval.scm 610 */
																									obj_t BgL_arg1687z00_1861;

																									BgL_arg1687z00_1861 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2889z00zz__evalz00,
																										BNIL);
																									BgL_arg1685z00_1859 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2893z00zz__evalz00,
																										BgL_arg1687z00_1861);
																								}
																								{	/* Eval/eval.scm 611 */
																									obj_t BgL_arg1688z00_1862;

																									{	/* Eval/eval.scm 611 */
																										obj_t BgL_arg1691z00_1863;
																										obj_t BgL_arg1692z00_1864;

																										{	/* Eval/eval.scm 611 */
																											obj_t BgL_arg1693z00_1865;

																											{	/* Eval/eval.scm 611 */
																												obj_t
																													BgL_arg1695z00_1866;
																												BgL_arg1695z00_1866 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2895z00zz__evalz00,
																													BNIL);
																												BgL_arg1693z00_1865 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2897z00zz__evalz00,
																													BgL_arg1695z00_1866);
																											}
																											BgL_arg1691z00_1863 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2818z00zz__evalz00,
																												BgL_arg1693z00_1865);
																										}
																										{	/* Eval/eval.scm 612 */
																											obj_t BgL_arg1696z00_1867;
																											obj_t BgL_arg1697z00_1868;

																											{	/* Eval/eval.scm 612 */
																												obj_t
																													BgL_arg1698z00_1869;
																												{	/* Eval/eval.scm 612 */
																													obj_t
																														BgL_arg1699z00_1870;
																													BgL_arg1699z00_1870 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol2899z00zz__evalz00,
																														BNIL);
																													BgL_arg1698z00_1869 =
																														MAKE_YOUNG_PAIR
																														(BgL_fnamez00_1757,
																														BgL_arg1699z00_1870);
																												}
																												BgL_arg1696z00_1867 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2901z00zz__evalz00,
																													BgL_arg1698z00_1869);
																											}
																											{	/* Eval/eval.scm 613 */
																												obj_t
																													BgL_arg1700z00_1871;
																												{	/* Eval/eval.scm 613 */
																													obj_t
																														BgL_arg1701z00_1872;
																													{	/* Eval/eval.scm 613 */
																														obj_t
																															BgL_arg1702z00_1873;
																														BgL_arg1702z00_1873
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2903z00zz__evalz00,
																															BNIL);
																														BgL_arg1701z00_1872
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_locz00_1758,
																															BgL_arg1702z00_1873);
																													}
																													BgL_arg1700z00_1871 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol2901z00zz__evalz00,
																														BgL_arg1701z00_1872);
																												}
																												BgL_arg1697z00_1868 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1700z00_1871,
																													BNIL);
																											}
																											BgL_arg1692z00_1864 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1696z00_1867,
																												BgL_arg1697z00_1868);
																										}
																										BgL_arg1688z00_1862 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1691z00_1863,
																											BgL_arg1692z00_1864);
																									}
																									BgL_arg1686z00_1860 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1688z00_1862, BNIL);
																								}
																								BgL_arg1684z00_1858 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1685z00_1859,
																									BgL_arg1686z00_1860);
																							}
																							BgL_arg1683z00_1857 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2905z00zz__evalz00,
																								BgL_arg1684z00_1858);
																						}
																						BgL_arg1672z00_1855 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1683z00_1857, BNIL);
																					}
																					BgL_arg1668z00_1853 =
																						MAKE_YOUNG_PAIR(BgL_arg1669z00_1854,
																						BgL_arg1672z00_1855);
																				}
																				BgL_arg1665z00_1851 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2907z00zz__evalz00,
																					BgL_arg1668z00_1853);
																			}
																			{	/* Eval/eval.scm 614 */
																				obj_t BgL_arg1704z00_1874;

																				{	/* Eval/eval.scm 614 */
																					obj_t BgL_arg1707z00_1875;

																					{	/* Eval/eval.scm 614 */
																						obj_t BgL_arg1708z00_1876;
																						obj_t BgL_arg1709z00_1877;

																						{	/* Eval/eval.scm 614 */
																							obj_t BgL_arg1710z00_1878;
																							obj_t BgL_arg1711z00_1879;

																							{	/* Eval/eval.scm 614 */
																								obj_t BgL_arg1712z00_1880;

																								{	/* Eval/eval.scm 614 */
																									obj_t BgL_arg1713z00_1881;

																									{	/* Eval/eval.scm 614 */
																										obj_t BgL_arg1716z00_1882;

																										{	/* Eval/eval.scm 614 */
																											obj_t BgL_arg1717z00_1883;
																											obj_t BgL_arg1719z00_1884;

																											BgL_arg1717z00_1883 =
																												BGl_loopze70ze7zz__evalz00
																												(BgL_locz00_1758,
																												BgL_namez00_1727,
																												BgL_fnamez00_1757,
																												BgL_argsz00_1728,
																												BGl_list2909z00zz__evalz00,
																												BNIL);
																											{	/* Eval/eval.scm 617 */
																												obj_t
																													BgL_arg1720z00_1885;
																												{	/* Eval/eval.scm 617 */
																													obj_t BgL_auxz00_5769;

																													{	/* Eval/eval.scm 617 */
																														bool_t
																															BgL_test3378z00_5770;
																														if (PAIRP
																															(BgL_bodyz00_1729))
																															{	/* Eval/eval.scm 617 */
																																BgL_test3378z00_5770
																																	=
																																	((bool_t) 1);
																															}
																														else
																															{	/* Eval/eval.scm 617 */
																																BgL_test3378z00_5770
																																	=
																																	NULLP
																																	(BgL_bodyz00_1729);
																															}
																														if (BgL_test3378z00_5770)
																															{	/* Eval/eval.scm 617 */
																																BgL_auxz00_5769
																																	=
																																	BgL_bodyz00_1729;
																															}
																														else
																															{
																																obj_t
																																	BgL_auxz00_5774;
																																BgL_auxz00_5774
																																	=
																																	BGl_typezd2errorzd2zz__errorz00
																																	(BGl_string2812z00zz__evalz00,
																																	BINT(((long)
																																			24118)),
																																	BGl_string2912z00zz__evalz00,
																																	BGl_string2869z00zz__evalz00,
																																	BgL_bodyz00_1729);
																																FAILURE
																																	(BgL_auxz00_5774,
																																	BFALSE,
																																	BFALSE);
																													}}
																													BgL_arg1720z00_1885 =
																														BGl_expandzd2prognzd2zz__prognz00
																														(BgL_auxz00_5769);
																												}
																												BgL_arg1719z00_1884 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1720z00_1885,
																													BNIL);
																											}
																											BgL_arg1716z00_1882 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1717z00_1883,
																												BgL_arg1719z00_1884);
																										}
																										BgL_arg1713z00_1881 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2913z00zz__evalz00,
																											BgL_arg1716z00_1882);
																									}
																									BgL_arg1712z00_1880 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1713z00_1881, BNIL);
																								}
																								BgL_arg1710z00_1878 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2915z00zz__evalz00,
																									BgL_arg1712z00_1880);
																							}
																							{	/* Eval/eval.scm 618 */
																								obj_t BgL_arg1721z00_1886;

																								{	/* Eval/eval.scm 618 */
																									obj_t BgL_arg1722z00_1887;

																									{	/* Eval/eval.scm 618 */
																										obj_t BgL_arg1723z00_1888;

																										{	/* Eval/eval.scm 618 */
																											obj_t BgL_arg1725z00_1889;

																											{	/* Eval/eval.scm 618 */
																												obj_t
																													BgL_arg1726z00_1890;
																												BgL_arg1726z00_1890 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2887z00zz__evalz00,
																													BNIL);
																												BgL_arg1725z00_1889 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2915z00zz__evalz00,
																													BgL_arg1726z00_1890);
																											}
																											BgL_arg1723z00_1888 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2887z00zz__evalz00,
																												BgL_arg1725z00_1889);
																										}
																										BgL_arg1722z00_1887 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1723z00_1888,
																											BNIL);
																									}
																									BgL_arg1721z00_1886 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2917z00zz__evalz00,
																										BgL_arg1722z00_1887);
																								}
																								BgL_arg1711z00_1879 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1721z00_1886, BNIL);
																							}
																							BgL_arg1708z00_1876 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1710z00_1878,
																								BgL_arg1711z00_1879);
																						}
																						{	/* Eval/eval.scm 619 */
																							obj_t BgL_arg1727z00_1891;

																							{	/* Eval/eval.scm 619 */
																								obj_t BgL_arg1728z00_1892;

																								{	/* Eval/eval.scm 619 */
																									obj_t BgL_arg1729z00_1893;

																									BgL_arg1729z00_1893 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2889z00zz__evalz00,
																										BNIL);
																									BgL_arg1728z00_1892 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2917z00zz__evalz00,
																										BgL_arg1729z00_1893);
																								}
																								BgL_arg1727z00_1891 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2919z00zz__evalz00,
																									BgL_arg1728z00_1892);
																							}
																							BgL_arg1709z00_1877 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1727z00_1891, BNIL);
																						}
																						BgL_arg1707z00_1875 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1708z00_1876,
																							BgL_arg1709z00_1877);
																					}
																					BgL_arg1704z00_1874 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol2913z00zz__evalz00,
																						BgL_arg1707z00_1875);
																				}
																				BgL_arg1667z00_1852 =
																					MAKE_YOUNG_PAIR(BgL_arg1704z00_1874,
																					BNIL);
																			}
																			BgL_arg1661z00_1847 =
																				MAKE_YOUNG_PAIR(BgL_arg1665z00_1851,
																				BgL_arg1667z00_1852);
																		}
																		BgL_arg1659z00_1845 =
																			MAKE_YOUNG_PAIR(BgL_arg1660z00_1846,
																			BgL_arg1661z00_1847);
																	}
																	BgL_arg1658z00_1844 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2921z00zz__evalz00,
																		BgL_arg1659z00_1845);
																}
																BgL_arg1656z00_1842 =
																	MAKE_YOUNG_PAIR(BgL_arg1658z00_1844, BNIL);
															}
															BgL_arg1652z00_1840 =
																MAKE_YOUNG_PAIR(BgL_arg1654z00_1841,
																BgL_arg1656z00_1842);
														}
														BgL_evexpdz00_1760 =
															MAKE_YOUNG_PAIR(BGl_symbol2923z00zz__evalz00,
															BgL_arg1652z00_1840);
													}
													{	/* Eval/eval.scm 607 */
														obj_t BgL_evexpdzf2loczf2_1761;

														BgL_evexpdzf2loczf2_1761 =
															BGl_evepairifyz00zz__prognz00(BgL_evexpdz00_1760,
															BgL_xz00_52);
														{	/* Eval/eval.scm 620 */
															obj_t BgL_expdzd2evalzd2_1762;

															{	/* Eval/eval.scm 84 */
																obj_t BgL_envz00_1839;

																{	/* Eval/eval.scm 254 */
																	obj_t BgL_mz00_3021;

																	BgL_mz00_3021 =
																		BGl_evalzd2modulezd2zz__evmodulez00();
																	if (BGl_evmodulezf3zf3zz__evmodulez00
																		(BgL_mz00_3021))
																		{	/* Eval/eval.scm 255 */
																			BgL_envz00_1839 = BgL_mz00_3021;
																		}
																	else
																		{	/* Eval/eval.scm 255 */
																			BgL_envz00_1839 =
																				BGl_symbol2810z00zz__evalz00;
																		}
																}
																{	/* Eval/eval.scm 84 */

																	{	/* Eval/eval.scm 178 */
																		obj_t BgL_evaluatez00_3023;

																		if (PROCEDUREP
																			(BGl_defaultzd2evaluatezd2zz__evalz00))
																			{	/* Eval/eval.scm 178 */
																				BgL_evaluatez00_3023 =
																					BGl_defaultzd2evaluatezd2zz__evalz00;
																			}
																		else
																			{	/* Eval/eval.scm 178 */
																				BgL_evaluatez00_3023 =
																					BGl_bytezd2codezd2evaluatezd2envzd2zz__evalz00;
																			}
																		{	/* Eval/eval.scm 181 */
																			obj_t BgL_auxz00_5810;

																			if (PROCEDUREP(BgL_evaluatez00_3023))
																				{	/* Eval/eval.scm 181 */
																					BgL_auxz00_5810 =
																						BgL_evaluatez00_3023;
																				}
																			else
																				{
																					obj_t BgL_auxz00_5813;

																					BgL_auxz00_5813 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string2812z00zz__evalz00,
																						BINT(((long) 6972)),
																						BGl_string2912z00zz__evalz00,
																						BGl_string2814z00zz__evalz00,
																						BgL_evaluatez00_3023);
																					FAILURE(BgL_auxz00_5813, BFALSE,
																						BFALSE);
																				}
																			BgL_expdzd2evalzd2_1762 =
																				BGl_evalzf2expanderzf2zz__evalz00
																				(BgL_evexpdzf2loczf2_1761,
																				BgL_envz00_1839,
																				BGl_expandz12zd2envzc0zz__expandz00,
																				BgL_auxz00_5810);
															}}}}
															{	/* Eval/eval.scm 621 */

																{	/* Eval/eval.scm 622 */
																	obj_t BgL_zc3z04anonymousza31619ze3z87_3732;

																	BgL_zc3z04anonymousza31619ze3z87_3732 =
																		MAKE_FX_PROCEDURE
																		(BGl_z62zc3z04anonymousza31619ze3ze5zz__evalz00,
																		(int) (((long) 2)), (int) (((long) 1)));
																	PROCEDURE_SET
																		(BgL_zc3z04anonymousza31619ze3z87_3732,
																		(int) (((long) 0)),
																		BgL_expdzd2evalzd2_1762);
																	BgL_arg1618z00_1759 =
																		BgL_zc3z04anonymousza31619ze3z87_3732;
												}}}}}
												BGl_installzd2expanderzd2zz__macroz00(BgL_namez00_1727,
													BgL_arg1618z00_1759);
										}}
										return BUNSPEC;
									}
								else
									{	/* Eval/eval.scm 600 */
										obj_t BgL_cdrzd2290zd2_1742;

										BgL_cdrzd2290zd2_1742 =
											CDR(((obj_t) BgL_cdrzd2268zd2_1734));
										if (PAIRP(BgL_cdrzd2290zd2_1742))
											{	/* Eval/eval.scm 600 */
												obj_t BgL_carzd2294zd2_1744;

												BgL_carzd2294zd2_1744 = CAR(BgL_cdrzd2290zd2_1742);
												if (PAIRP(BgL_carzd2294zd2_1744))
													{	/* Eval/eval.scm 600 */
														obj_t BgL_cdrzd2299zd2_1746;

														BgL_cdrzd2299zd2_1746 = CDR(BgL_carzd2294zd2_1744);
														if (
															(CAR(BgL_carzd2294zd2_1744) ==
																BGl_symbol2923z00zz__evalz00))
															{	/* Eval/eval.scm 600 */
																if (PAIRP(BgL_cdrzd2299zd2_1746))
																	{	/* Eval/eval.scm 600 */
																		if (NULLP(CDR(BgL_cdrzd2290zd2_1742)))
																			{	/* Eval/eval.scm 600 */
																				obj_t BgL_arg1613z00_1752;
																				obj_t BgL_arg1614z00_1753;
																				obj_t BgL_arg1615z00_1754;

																				BgL_arg1613z00_1752 =
																					CAR(((obj_t) BgL_cdrzd2268zd2_1734));
																				BgL_arg1614z00_1753 =
																					CAR(BgL_cdrzd2299zd2_1746);
																				BgL_arg1615z00_1754 =
																					CDR(BgL_cdrzd2299zd2_1746);
																				{
																					obj_t BgL_bodyz00_5849;
																					obj_t BgL_argsz00_5848;
																					obj_t BgL_namez00_5847;

																					BgL_namez00_5847 =
																						BgL_arg1613z00_1752;
																					BgL_argsz00_5848 =
																						BgL_arg1614z00_1753;
																					BgL_bodyz00_5849 =
																						BgL_arg1615z00_1754;
																					BgL_bodyz00_1729 = BgL_bodyz00_5849;
																					BgL_argsz00_1728 = BgL_argsz00_5848;
																					BgL_namez00_1727 = BgL_namez00_5847;
																					goto BgL_tagzd2254zd2_1730;
																				}
																			}
																		else
																			{	/* Eval/eval.scm 641 */
																				obj_t BgL_procz00_3069;

																				BgL_procz00_3069 =
																					BGl_symbol2925z00zz__evalz00;
																				{	/* Eval/eval.scm 543 */
																					bool_t BgL_test3388z00_5850;

																					{	/* Eval/eval.scm 543 */
																						bool_t BgL_res2375z00_3072;

																						BgL_res2375z00_3072 =
																							EPAIRP(BgL_xz00_52);
																						BgL_test3388z00_5850 =
																							BgL_res2375z00_3072;
																					}
																					if (BgL_test3388z00_5850)
																						{	/* Eval/eval.scm 544 */
																							obj_t BgL_arg1523z00_3071;

																							{	/* Eval/eval.scm 544 */
																								obj_t BgL_objz00_3073;

																								if (EPAIRP(BgL_xz00_52))
																									{	/* Eval/eval.scm 544 */
																										BgL_objz00_3073 =
																											BgL_xz00_52;
																									}
																								else
																									{
																										obj_t BgL_auxz00_5854;

																										BgL_auxz00_5854 =
																											BGl_typezd2errorzd2zz__errorz00
																											(BGl_string2812z00zz__evalz00,
																											BINT(((long) 21704)),
																											BGl_string2927z00zz__evalz00,
																											BGl_string2864z00zz__evalz00,
																											BgL_xz00_52);
																										FAILURE(BgL_auxz00_5854,
																											BFALSE, BFALSE);
																									}
																								BgL_arg1523z00_3071 =
																									CER(BgL_objz00_3073);
																							}
																							return
																								BGl_everrorz00zz__everrorz00
																								(BgL_arg1523z00_3071,
																								BgL_procz00_3069,
																								BGl_string2928z00zz__evalz00,
																								BgL_xz00_52);
																						}
																					else
																						{	/* Eval/eval.scm 543 */
																							return
																								BGl_errorz00zz__errorz00
																								(BgL_procz00_3069,
																								BGl_string2928z00zz__evalz00,
																								BgL_xz00_52);
																						}
																				}
																			}
																	}
																else
																	{	/* Eval/eval.scm 641 */
																		obj_t BgL_procz00_3074;

																		BgL_procz00_3074 =
																			BGl_symbol2925z00zz__evalz00;
																		{	/* Eval/eval.scm 543 */
																			bool_t BgL_test3390z00_5861;

																			{	/* Eval/eval.scm 543 */
																				bool_t BgL_res2376z00_3077;

																				BgL_res2376z00_3077 =
																					EPAIRP(BgL_xz00_52);
																				BgL_test3390z00_5861 =
																					BgL_res2376z00_3077;
																			}
																			if (BgL_test3390z00_5861)
																				{	/* Eval/eval.scm 544 */
																					obj_t BgL_arg1523z00_3076;

																					{	/* Eval/eval.scm 544 */
																						obj_t BgL_objz00_3078;

																						if (EPAIRP(BgL_xz00_52))
																							{	/* Eval/eval.scm 544 */
																								BgL_objz00_3078 = BgL_xz00_52;
																							}
																						else
																							{
																								obj_t BgL_auxz00_5865;

																								BgL_auxz00_5865 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string2812z00zz__evalz00,
																									BINT(((long) 21704)),
																									BGl_string2927z00zz__evalz00,
																									BGl_string2864z00zz__evalz00,
																									BgL_xz00_52);
																								FAILURE(BgL_auxz00_5865, BFALSE,
																									BFALSE);
																							}
																						BgL_arg1523z00_3076 =
																							CER(BgL_objz00_3078);
																					}
																					return
																						BGl_everrorz00zz__everrorz00
																						(BgL_arg1523z00_3076,
																						BgL_procz00_3074,
																						BGl_string2928z00zz__evalz00,
																						BgL_xz00_52);
																				}
																			else
																				{	/* Eval/eval.scm 543 */
																					return
																						BGl_errorz00zz__errorz00
																						(BgL_procz00_3074,
																						BGl_string2928z00zz__evalz00,
																						BgL_xz00_52);
																				}
																		}
																	}
															}
														else
															{	/* Eval/eval.scm 641 */
																obj_t BgL_procz00_3079;

																BgL_procz00_3079 = BGl_symbol2925z00zz__evalz00;
																{	/* Eval/eval.scm 543 */
																	bool_t BgL_test3392z00_5872;

																	{	/* Eval/eval.scm 543 */
																		bool_t BgL_res2377z00_3082;

																		BgL_res2377z00_3082 = EPAIRP(BgL_xz00_52);
																		BgL_test3392z00_5872 = BgL_res2377z00_3082;
																	}
																	if (BgL_test3392z00_5872)
																		{	/* Eval/eval.scm 544 */
																			obj_t BgL_arg1523z00_3081;

																			{	/* Eval/eval.scm 544 */
																				obj_t BgL_objz00_3083;

																				if (EPAIRP(BgL_xz00_52))
																					{	/* Eval/eval.scm 544 */
																						BgL_objz00_3083 = BgL_xz00_52;
																					}
																				else
																					{
																						obj_t BgL_auxz00_5876;

																						BgL_auxz00_5876 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string2812z00zz__evalz00,
																							BINT(((long) 21704)),
																							BGl_string2927z00zz__evalz00,
																							BGl_string2864z00zz__evalz00,
																							BgL_xz00_52);
																						FAILURE(BgL_auxz00_5876, BFALSE,
																							BFALSE);
																					}
																				BgL_arg1523z00_3081 =
																					CER(BgL_objz00_3083);
																			}
																			return
																				BGl_everrorz00zz__everrorz00
																				(BgL_arg1523z00_3081, BgL_procz00_3079,
																				BGl_string2928z00zz__evalz00,
																				BgL_xz00_52);
																		}
																	else
																		{	/* Eval/eval.scm 543 */
																			return
																				BGl_errorz00zz__errorz00
																				(BgL_procz00_3079,
																				BGl_string2928z00zz__evalz00,
																				BgL_xz00_52);
																		}
																}
															}
													}
												else
													{	/* Eval/eval.scm 641 */
														obj_t BgL_procz00_3084;

														BgL_procz00_3084 = BGl_symbol2925z00zz__evalz00;
														{	/* Eval/eval.scm 543 */
															bool_t BgL_test3394z00_5883;

															{	/* Eval/eval.scm 543 */
																bool_t BgL_res2378z00_3087;

																BgL_res2378z00_3087 = EPAIRP(BgL_xz00_52);
																BgL_test3394z00_5883 = BgL_res2378z00_3087;
															}
															if (BgL_test3394z00_5883)
																{	/* Eval/eval.scm 544 */
																	obj_t BgL_arg1523z00_3086;

																	{	/* Eval/eval.scm 544 */
																		obj_t BgL_objz00_3088;

																		if (EPAIRP(BgL_xz00_52))
																			{	/* Eval/eval.scm 544 */
																				BgL_objz00_3088 = BgL_xz00_52;
																			}
																		else
																			{
																				obj_t BgL_auxz00_5887;

																				BgL_auxz00_5887 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string2812z00zz__evalz00,
																					BINT(((long) 21704)),
																					BGl_string2927z00zz__evalz00,
																					BGl_string2864z00zz__evalz00,
																					BgL_xz00_52);
																				FAILURE(BgL_auxz00_5887, BFALSE,
																					BFALSE);
																			}
																		BgL_arg1523z00_3086 = CER(BgL_objz00_3088);
																	}
																	return
																		BGl_everrorz00zz__everrorz00
																		(BgL_arg1523z00_3086, BgL_procz00_3084,
																		BGl_string2928z00zz__evalz00, BgL_xz00_52);
																}
															else
																{	/* Eval/eval.scm 543 */
																	return
																		BGl_errorz00zz__errorz00(BgL_procz00_3084,
																		BGl_string2928z00zz__evalz00, BgL_xz00_52);
																}
														}
													}
											}
										else
											{	/* Eval/eval.scm 641 */
												obj_t BgL_procz00_3089;

												BgL_procz00_3089 = BGl_symbol2925z00zz__evalz00;
												{	/* Eval/eval.scm 543 */
													bool_t BgL_test3396z00_5894;

													{	/* Eval/eval.scm 543 */
														bool_t BgL_res2379z00_3092;

														BgL_res2379z00_3092 = EPAIRP(BgL_xz00_52);
														BgL_test3396z00_5894 = BgL_res2379z00_3092;
													}
													if (BgL_test3396z00_5894)
														{	/* Eval/eval.scm 544 */
															obj_t BgL_arg1523z00_3091;

															{	/* Eval/eval.scm 544 */
																obj_t BgL_objz00_3093;

																if (EPAIRP(BgL_xz00_52))
																	{	/* Eval/eval.scm 544 */
																		BgL_objz00_3093 = BgL_xz00_52;
																	}
																else
																	{
																		obj_t BgL_auxz00_5898;

																		BgL_auxz00_5898 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string2812z00zz__evalz00,
																			BINT(((long) 21704)),
																			BGl_string2927z00zz__evalz00,
																			BGl_string2864z00zz__evalz00,
																			BgL_xz00_52);
																		FAILURE(BgL_auxz00_5898, BFALSE, BFALSE);
																	}
																BgL_arg1523z00_3091 = CER(BgL_objz00_3093);
															}
															return
																BGl_everrorz00zz__everrorz00
																(BgL_arg1523z00_3091, BgL_procz00_3089,
																BGl_string2928z00zz__evalz00, BgL_xz00_52);
														}
													else
														{	/* Eval/eval.scm 543 */
															return
																BGl_errorz00zz__errorz00(BgL_procz00_3089,
																BGl_string2928z00zz__evalz00, BgL_xz00_52);
														}
												}
											}
									}
							}
						else
							{	/* Eval/eval.scm 641 */
								obj_t BgL_procz00_3094;

								BgL_procz00_3094 = BGl_symbol2925z00zz__evalz00;
								{	/* Eval/eval.scm 543 */
									bool_t BgL_test3398z00_5905;

									{	/* Eval/eval.scm 543 */
										bool_t BgL_res2380z00_3097;

										BgL_res2380z00_3097 = EPAIRP(BgL_xz00_52);
										BgL_test3398z00_5905 = BgL_res2380z00_3097;
									}
									if (BgL_test3398z00_5905)
										{	/* Eval/eval.scm 544 */
											obj_t BgL_arg1523z00_3096;

											{	/* Eval/eval.scm 544 */
												obj_t BgL_objz00_3098;

												if (EPAIRP(BgL_xz00_52))
													{	/* Eval/eval.scm 544 */
														BgL_objz00_3098 = BgL_xz00_52;
													}
												else
													{
														obj_t BgL_auxz00_5909;

														BgL_auxz00_5909 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2812z00zz__evalz00,
															BINT(((long) 21704)),
															BGl_string2927z00zz__evalz00,
															BGl_string2864z00zz__evalz00, BgL_xz00_52);
														FAILURE(BgL_auxz00_5909, BFALSE, BFALSE);
													}
												BgL_arg1523z00_3096 = CER(BgL_objz00_3098);
											}
											return
												BGl_everrorz00zz__everrorz00(BgL_arg1523z00_3096,
												BgL_procz00_3094, BGl_string2928z00zz__evalz00,
												BgL_xz00_52);
										}
									else
										{	/* Eval/eval.scm 543 */
											return
												BGl_errorz00zz__errorz00(BgL_procz00_3094,
												BGl_string2928z00zz__evalz00, BgL_xz00_52);
										}
								}
							}
					}
				else
					{	/* Eval/eval.scm 641 */
						obj_t BgL_procz00_3099;

						BgL_procz00_3099 = BGl_symbol2925z00zz__evalz00;
						{	/* Eval/eval.scm 543 */
							bool_t BgL_test3400z00_5916;

							{	/* Eval/eval.scm 543 */
								bool_t BgL_res2381z00_3102;

								BgL_res2381z00_3102 = EPAIRP(BgL_xz00_52);
								BgL_test3400z00_5916 = BgL_res2381z00_3102;
							}
							if (BgL_test3400z00_5916)
								{	/* Eval/eval.scm 544 */
									obj_t BgL_arg1523z00_3101;

									{	/* Eval/eval.scm 544 */
										obj_t BgL_objz00_3103;

										if (EPAIRP(BgL_xz00_52))
											{	/* Eval/eval.scm 544 */
												BgL_objz00_3103 = BgL_xz00_52;
											}
										else
											{
												obj_t BgL_auxz00_5920;

												BgL_auxz00_5920 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2812z00zz__evalz00, BINT(((long) 21704)),
													BGl_string2927z00zz__evalz00,
													BGl_string2864z00zz__evalz00, BgL_xz00_52);
												FAILURE(BgL_auxz00_5920, BFALSE, BFALSE);
											}
										BgL_arg1523z00_3101 = CER(BgL_objz00_3103);
									}
									return
										BGl_everrorz00zz__everrorz00(BgL_arg1523z00_3101,
										BgL_procz00_3099, BGl_string2928z00zz__evalz00,
										BgL_xz00_52);
								}
							else
								{	/* Eval/eval.scm 543 */
									return
										BGl_errorz00zz__errorz00(BgL_procz00_3099,
										BGl_string2928z00zz__evalz00, BgL_xz00_52);
								}
						}
					}
			}
		}

	}



/* &expand-define-macro */
	obj_t BGl_z62expandzd2definezd2macroz62zz__evalz00(obj_t BgL_envz00_3733,
		obj_t BgL_xz00_3734, obj_t BgL_ez00_3735)
	{
		{	/* Eval/eval.scm 599 */
			return
				BGl_expandzd2definezd2macroz00zz__evalz00(BgL_xz00_3734, BgL_ez00_3735);
		}

	}



/* &<@anonymous:1619> */
	obj_t BGl_z62zc3z04anonymousza31619ze3ze5zz__evalz00(obj_t BgL_envz00_3736,
		obj_t BgL_xz00_3738, obj_t BgL_ez00_3739)
	{
		{	/* Eval/eval.scm 622 */
			{	/* Eval/eval.scm 623 */
				obj_t BgL_expdzd2evalzd2_3737;

				BgL_expdzd2evalzd2_3737 =
					PROCEDURE_REF(BgL_envz00_3736, (int) (((long) 0)));
				{	/* Eval/eval.scm 623 */
					obj_t BgL_res1114z00_4221;

					BgL_res1114z00_4221 = MAKE_CELL(BUNSPEC);
					{
						obj_t BgL_ez00_4223;

						if (CBOOL(BGl_zc3z04exitza31627ze3ze70z60zz__evalz00(BgL_ez00_3739,
									BgL_xz00_3738, BgL_expdzd2evalzd2_3737, BgL_res1114z00_4221)))
							{	/* Eval/eval.scm 623 */
								BgL_ez00_4223 = CELL_REF(BgL_res1114z00_4221);
								{	/* Eval/eval.scm 625 */
									obj_t BgL_nez00_4224;

									if (BGl_isazf3zf3zz__objectz00(BgL_ez00_4223,
											BGl_z62errorz62zz__objectz00))
										{	/* Eval/eval.scm 627 */
											bool_t BgL_test3404z00_5935;

											{	/* Eval/eval.scm 627 */
												obj_t BgL_arg1651z00_4225;

												BgL_arg1651z00_4225 =
													(((BgL_z62errorz62_bglt) COBJECT(
															((BgL_z62errorz62_bglt) BgL_ez00_4223)))->
													BgL_objz00);
												{	/* Eval/eval.scm 627 */
													bool_t BgL_res2361z00_4226;

													BgL_res2361z00_4226 = EPAIRP(BgL_arg1651z00_4225);
													BgL_test3404z00_5935 = BgL_res2361z00_4226;
												}
											}
											if (BgL_test3404z00_5935)
												{
													obj_t BgL_fnamez00_4228;
													obj_t BgL_locz00_4229;

													{	/* Eval/eval.scm 628 */
														obj_t BgL_ezd2314zd2_4238;

														{	/* Eval/eval.scm 628 */
															obj_t BgL_objz00_4239;

															{	/* Eval/eval.scm 628 */
																obj_t BgL_aux2713z00_4240;

																BgL_aux2713z00_4240 =
																	(((BgL_z62errorz62_bglt) COBJECT(
																			((BgL_z62errorz62_bglt) BgL_ez00_4223)))->
																	BgL_objz00);
																if (EPAIRP(BgL_aux2713z00_4240))
																	{	/* Eval/eval.scm 628 */
																		BgL_objz00_4239 = BgL_aux2713z00_4240;
																	}
																else
																	{
																		obj_t BgL_auxz00_5943;

																		BgL_auxz00_5943 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string2812z00zz__evalz00,
																			BINT(((long) 24428)),
																			BGl_string2930z00zz__evalz00,
																			BGl_string2864z00zz__evalz00,
																			BgL_aux2713z00_4240);
																		FAILURE(BgL_auxz00_5943, BFALSE, BFALSE);
															}}
															BgL_ezd2314zd2_4238 = CER(BgL_objz00_4239);
														}
														if (PAIRP(BgL_ezd2314zd2_4238))
															{	/* Eval/eval.scm 628 */
																obj_t BgL_cdrzd2320zd2_4241;

																BgL_cdrzd2320zd2_4241 =
																	CDR(BgL_ezd2314zd2_4238);
																if (
																	(CAR(BgL_ezd2314zd2_4238) ==
																		BGl_symbol2818z00zz__evalz00))
																	{	/* Eval/eval.scm 628 */
																		if (PAIRP(BgL_cdrzd2320zd2_4241))
																			{	/* Eval/eval.scm 628 */
																				obj_t BgL_cdrzd2324zd2_4242;

																				BgL_cdrzd2324zd2_4242 =
																					CDR(BgL_cdrzd2320zd2_4241);
																				if (PAIRP(BgL_cdrzd2324zd2_4242))
																					{	/* Eval/eval.scm 628 */
																						if (NULLP(CDR
																								(BgL_cdrzd2324zd2_4242)))
																							{	/* Eval/eval.scm 628 */
																								obj_t BgL_arg1643z00_4243;
																								obj_t BgL_arg1644z00_4244;

																								BgL_arg1643z00_4243 =
																									CAR(BgL_cdrzd2320zd2_4241);
																								BgL_arg1644z00_4244 =
																									CAR(BgL_cdrzd2324zd2_4242);
																								{
																									BgL_z62errorz62_bglt
																										BgL_auxz00_5964;
																									BgL_fnamez00_4228 =
																										BgL_arg1643z00_4243;
																									BgL_locz00_4229 =
																										BgL_arg1644z00_4244;
																									{	/* Eval/eval.scm 630 */
																										BgL_z62exceptionz62_bglt
																											BgL_duplicated1120z00_4230;
																										BgL_z62errorz62_bglt
																											BgL_new1118z00_4231;
																										if (BGl_isazf3zf3zz__objectz00(BgL_ez00_4223, BGl_z62exceptionz62zz__objectz00))
																											{	/* Eval/eval.scm 631 */
																												BgL_duplicated1120z00_4230
																													=
																													(
																													(BgL_z62exceptionz62_bglt)
																													BgL_ez00_4223);
																											}
																										else
																											{
																												obj_t BgL_auxz00_5968;

																												BgL_auxz00_5968 =
																													BGl_typezd2errorzd2zz__errorz00
																													(BGl_string2812z00zz__evalz00,
																													BINT(((long) 24504)),
																													BGl_string2929z00zz__evalz00,
																													BGl_string2881z00zz__evalz00,
																													BgL_ez00_4223);
																												FAILURE(BgL_auxz00_5968,
																													BFALSE, BFALSE);
																											}
																										{	/* Eval/eval.scm 631 */
																											BgL_z62errorz62_bglt
																												BgL_new1125z00_4232;
																											BgL_new1125z00_4232 =
																												((BgL_z62errorz62_bglt)
																												BOBJECT(GC_MALLOC(sizeof
																														(struct
																															BgL_z62errorz62_bgl))));
																											{	/* Eval/eval.scm 631 */
																												long
																													BgL_arg1650z00_4233;
																												{	/* Eval/eval.scm 631 */
																													long
																														BgL_res2362z00_4234;
																													BgL_res2362z00_4234 =
																														BGL_CLASS_INDEX
																														(BGl_z62errorz62zz__objectz00);
																													BgL_arg1650z00_4233 =
																														BgL_res2362z00_4234;
																												}
																												BGL_OBJECT_CLASS_NUM_SET
																													(((BgL_objectz00_bglt)
																														BgL_new1125z00_4232),
																													BgL_arg1650z00_4233);
																											}
																											BgL_new1118z00_4231 =
																												BgL_new1125z00_4232;
																										}
																										((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1118z00_4231)))->BgL_fnamez00) = ((obj_t) BgL_fnamez00_4228), BUNSPEC);
																										((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1118z00_4231)))->BgL_locationz00) = ((obj_t) BgL_locz00_4229), BUNSPEC);
																										((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1118z00_4231)))->BgL_stackz00) = ((obj_t) (((BgL_z62exceptionz62_bglt) COBJECT(BgL_duplicated1120z00_4230))->BgL_stackz00)), BUNSPEC);
																										{
																											obj_t BgL_auxz00_5983;

																											{	/* Eval/eval.scm 632 */
																												BgL_z62errorz62_bglt
																													BgL_tmp1121z00_4235;
																												if (BGl_isazf3zf3zz__objectz00(((obj_t) BgL_duplicated1120z00_4230), BGl_z62errorz62zz__objectz00))
																													{	/* Eval/eval.scm 632 */
																														BgL_tmp1121z00_4235
																															=
																															(
																															(BgL_z62errorz62_bglt)
																															BgL_duplicated1120z00_4230);
																													}
																												else
																													{
																														obj_t
																															BgL_auxz00_5988;
																														BgL_auxz00_5988 =
																															BGl_typezd2errorzd2zz__errorz00
																															(BGl_string2812z00zz__evalz00,
																															BINT(((long)
																																	24527)),
																															BGl_string2929z00zz__evalz00,
																															BGl_string2845z00zz__evalz00,
																															((obj_t)
																																BgL_duplicated1120z00_4230));
																														FAILURE
																															(BgL_auxz00_5988,
																															BFALSE, BFALSE);
																													}
																												BgL_auxz00_5983 =
																													(((BgL_z62errorz62_bglt) COBJECT(BgL_tmp1121z00_4235))->BgL_procz00);
																											}
																											((((BgL_z62errorz62_bglt)
																														COBJECT
																														(BgL_new1118z00_4231))->
																													BgL_procz00) =
																												((obj_t)
																													BgL_auxz00_5983),
																												BUNSPEC);
																										}
																										{
																											obj_t BgL_auxz00_5995;

																											{	/* Eval/eval.scm 632 */
																												BgL_z62errorz62_bglt
																													BgL_tmp1122z00_4236;
																												if (BGl_isazf3zf3zz__objectz00(((obj_t) BgL_duplicated1120z00_4230), BGl_z62errorz62zz__objectz00))
																													{	/* Eval/eval.scm 632 */
																														BgL_tmp1122z00_4236
																															=
																															(
																															(BgL_z62errorz62_bglt)
																															BgL_duplicated1120z00_4230);
																													}
																												else
																													{
																														obj_t
																															BgL_auxz00_6000;
																														BgL_auxz00_6000 =
																															BGl_typezd2errorzd2zz__errorz00
																															(BGl_string2812z00zz__evalz00,
																															BINT(((long)
																																	24527)),
																															BGl_string2929z00zz__evalz00,
																															BGl_string2845z00zz__evalz00,
																															((obj_t)
																																BgL_duplicated1120z00_4230));
																														FAILURE
																															(BgL_auxz00_6000,
																															BFALSE, BFALSE);
																													}
																												BgL_auxz00_5995 =
																													(((BgL_z62errorz62_bglt) COBJECT(BgL_tmp1122z00_4236))->BgL_msgz00);
																											}
																											((((BgL_z62errorz62_bglt)
																														COBJECT
																														(BgL_new1118z00_4231))->
																													BgL_msgz00) =
																												((obj_t)
																													BgL_auxz00_5995),
																												BUNSPEC);
																										}
																										{
																											obj_t BgL_auxz00_6007;

																											{	/* Eval/eval.scm 632 */
																												BgL_z62errorz62_bglt
																													BgL_tmp1123z00_4237;
																												if (BGl_isazf3zf3zz__objectz00(((obj_t) BgL_duplicated1120z00_4230), BGl_z62errorz62zz__objectz00))
																													{	/* Eval/eval.scm 632 */
																														BgL_tmp1123z00_4237
																															=
																															(
																															(BgL_z62errorz62_bglt)
																															BgL_duplicated1120z00_4230);
																													}
																												else
																													{
																														obj_t
																															BgL_auxz00_6012;
																														BgL_auxz00_6012 =
																															BGl_typezd2errorzd2zz__errorz00
																															(BGl_string2812z00zz__evalz00,
																															BINT(((long)
																																	24527)),
																															BGl_string2929z00zz__evalz00,
																															BGl_string2845z00zz__evalz00,
																															((obj_t)
																																BgL_duplicated1120z00_4230));
																														FAILURE
																															(BgL_auxz00_6012,
																															BFALSE, BFALSE);
																													}
																												BgL_auxz00_6007 =
																													(((BgL_z62errorz62_bglt) COBJECT(BgL_tmp1123z00_4237))->BgL_objz00);
																											}
																											((((BgL_z62errorz62_bglt)
																														COBJECT
																														(BgL_new1118z00_4231))->
																													BgL_objz00) =
																												((obj_t)
																													BgL_auxz00_6007),
																												BUNSPEC);
																										}
																										BgL_auxz00_5964 =
																											BgL_new1118z00_4231;
																									}
																									BgL_nez00_4224 =
																										((obj_t) BgL_auxz00_5964);
																							}}
																						else
																							{	/* Eval/eval.scm 628 */
																								BgL_nez00_4224 = BgL_ez00_4223;
																							}
																					}
																				else
																					{	/* Eval/eval.scm 628 */
																						BgL_nez00_4224 = BgL_ez00_4223;
																					}
																			}
																		else
																			{	/* Eval/eval.scm 628 */
																				BgL_nez00_4224 = BgL_ez00_4223;
																			}
																	}
																else
																	{	/* Eval/eval.scm 628 */
																		BgL_nez00_4224 = BgL_ez00_4223;
																	}
															}
														else
															{	/* Eval/eval.scm 628 */
																BgL_nez00_4224 = BgL_ez00_4223;
															}
													}
												}
											else
												{	/* Eval/eval.scm 627 */
													BgL_nez00_4224 = BgL_ez00_4223;
												}
										}
									else
										{	/* Eval/eval.scm 625 */
											BgL_nez00_4224 = BgL_ez00_4223;
										}
									return BGl_raisez00zz__errorz00(BgL_ez00_4223);
								}
							}
						else
							{	/* Eval/eval.scm 623 */
								return CELL_REF(BgL_res1114z00_4221);
							}
					}
				}
			}
		}

	}



/* <@exit:1627>~0 */
	obj_t BGl_zc3z04exitza31627ze3ze70z60zz__evalz00(obj_t BgL_ez00_3808,
		obj_t BgL_xz00_3807, obj_t BgL_expdzd2evalzd2_3806,
		obj_t BgL_res1114z00_3805)
	{
		{	/* Eval/eval.scm 623 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1129z00_1787;

			if (SET_EXIT(BgL_an_exit1129z00_1787))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1129z00_1787 = (void *) jmpbuf;
					{	/* Eval/eval.scm 623 */

						PUSH_EXIT(BgL_an_exit1129z00_1787, ((long) 1));
						{	/* Eval/eval.scm 623 */
							obj_t BgL_an_exitd1130z00_1788;

							BgL_an_exitd1130z00_1788 = ((obj_t) (&exitd));
							{	/* Eval/eval.scm 623 */
								bool_t BgL_res1132z00_1791;

								{	/* Eval/eval.scm 623 */
									obj_t BgL_ohs1112z00_1792;

									BgL_ohs1112z00_1792 = BGL_ERROR_HANDLER_GET();
									{	/* Eval/eval.scm 623 */
										obj_t BgL_exitd1126z00_1793;

										BgL_exitd1126z00_1793 = ((obj_t) (&exitd));
										{
											obj_t BgL_zc3z04anonymousza31631ze3z87_3730;

											BgL_zc3z04anonymousza31631ze3z87_3730 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31631ze3ze5zz__evalz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31631ze3z87_3730,
												(int) (((long) 0)), BgL_ohs1112z00_1792);
											BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
												(BgL_exitd1126z00_1793,
												BgL_zc3z04anonymousza31631ze3z87_3730);
											{	/* Eval/eval.scm 623 */
												bool_t BgL_tmp1128z00_1795;

												{	/* Eval/eval.scm 623 */
													obj_t BgL_arg1628z00_1796;

													{	/* Eval/eval.scm 623 */
														obj_t BgL_zc3z04anonymousza31630ze3z87_3731;

														BgL_zc3z04anonymousza31630ze3z87_3731 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31630ze3ze5zz__evalz00,
															(int) (((long) 1)), (int) (((long) 2)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31630ze3z87_3731,
															(int) (((long) 0)),
															((obj_t) BgL_res1114z00_3805));
														PROCEDURE_SET(BgL_zc3z04anonymousza31630ze3z87_3731,
															(int) (((long) 1)), BgL_an_exitd1130z00_1788);
														BgL_arg1628z00_1796 =
															MAKE_YOUNG_PAIR
															(BgL_zc3z04anonymousza31630ze3z87_3731,
															BgL_ohs1112z00_1792);
													}
													BGL_ERROR_HANDLER_SET(BgL_arg1628z00_1796);
													BUNSPEC;
												}
												{	/* Eval/eval.scm 623 */
													obj_t BgL_auxz00_3741;

													{	/* Eval/eval.scm 638 */
														obj_t BgL_tmpfunz00_6045;

														{	/* Eval/eval.scm 638 */
															bool_t BgL_test2716z00_4058;

															BgL_test2716z00_4058 =
																PROCEDUREP(BgL_expdzd2evalzd2_3806);
															if (BgL_test2716z00_4058)
																{	/* Eval/eval.scm 638 */
																	BgL_tmpfunz00_6045 = BgL_expdzd2evalzd2_3806;
																}
															else
																{
																	obj_t BgL_auxz00_6048;

																	BgL_auxz00_6048 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2812z00zz__evalz00,
																		BINT(((long) 24622)),
																		BGl_string2931z00zz__evalz00,
																		BGl_string2814z00zz__evalz00,
																		BgL_expdzd2evalzd2_3806);
																	FAILURE(BgL_auxz00_6048, BFALSE, BFALSE);
														}}
														BgL_auxz00_3741 =
															PROCEDURE_ENTRY(BgL_tmpfunz00_6045)
															(BgL_expdzd2evalzd2_3806, BgL_xz00_3807,
															BgL_ez00_3808, BEOA);
													}
													CELL_SET(BgL_res1114z00_3805, BgL_auxz00_3741);
												}
												BgL_tmp1128z00_1795 = ((bool_t) 0);
												BGl_exitdzd2popzd2protectz12z12zz__bexitz00
													(BgL_exitd1126z00_1793);
												BGL_ERROR_HANDLER_SET(BgL_ohs1112z00_1792);
												BUNSPEC;
												BgL_res1132z00_1791 = BgL_tmp1128z00_1795;
								}}}}
								POP_EXIT();
								return BBOOL(BgL_res1132z00_1791);
							}
						}
					}
				}
		}

	}



/* &<@anonymous:1630> */
	obj_t BGl_z62zc3z04anonymousza31630ze3ze5zz__evalz00(obj_t BgL_envz00_3743,
		obj_t BgL_ez00_3746)
	{
		{	/* Eval/eval.scm 623 */
			{	/* Eval/eval.scm 623 */
				obj_t BgL_res1114z00_3744;
				obj_t BgL_an_exitd1130z00_3745;

				BgL_res1114z00_3744 =
					PROCEDURE_REF(BgL_envz00_3743, (int) (((long) 0)));
				BgL_an_exitd1130z00_3745 =
					PROCEDURE_REF(BgL_envz00_3743, (int) (((long) 1)));
				CELL_SET(BgL_res1114z00_3744, BgL_ez00_3746);
				return
					BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1130z00_3745, BTRUE);
			}
		}

	}



/* &<@anonymous:1631> */
	obj_t BGl_z62zc3z04anonymousza31631ze3ze5zz__evalz00(obj_t BgL_envz00_3748)
	{
		{	/* Eval/eval.scm 623 */
			{
				obj_t BgL_ohs1112z00_3749;

				BgL_ohs1112z00_3749 =
					PROCEDURE_REF(BgL_envz00_3748, (int) (((long) 0)));
				BGL_ERROR_HANDLER_SET(BgL_ohs1112z00_3749);
				return BUNSPEC;
			}
		}

	}



/* expand-define-hygiene-macro */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2definezd2hygienezd2macrozd2zz__evalz00(obj_t BgL_xz00_54,
		obj_t BgL_ez00_55)
	{
		{	/* Eval/eval.scm 646 */
			{
				obj_t BgL_namez00_1896;
				obj_t BgL_argsz00_1897;
				obj_t BgL_bodyz00_1898;

				if (PAIRP(BgL_xz00_54))
					{	/* Eval/eval.scm 647 */
						obj_t BgL_cdrzd2340zd2_1903;

						BgL_cdrzd2340zd2_1903 = CDR(BgL_xz00_54);
						if (PAIRP(BgL_cdrzd2340zd2_1903))
							{	/* Eval/eval.scm 647 */
								obj_t BgL_carzd2344zd2_1905;

								BgL_carzd2344zd2_1905 = CAR(BgL_cdrzd2340zd2_1903);
								if (PAIRP(BgL_carzd2344zd2_1905))
									{	/* Eval/eval.scm 647 */
										obj_t BgL_cdrzd2349zd2_1907;

										BgL_cdrzd2349zd2_1907 = CDR(BgL_carzd2344zd2_1905);
										if (
											(CAR(BgL_carzd2344zd2_1905) ==
												BGl_symbol2939z00zz__evalz00))
											{	/* Eval/eval.scm 647 */
												if (PAIRP(BgL_cdrzd2349zd2_1907))
													{	/* Eval/eval.scm 647 */
														obj_t BgL_carzd2352zd2_1911;

														BgL_carzd2352zd2_1911 = CAR(BgL_cdrzd2349zd2_1907);
														if (PAIRP(BgL_carzd2352zd2_1911))
															{	/* Eval/eval.scm 647 */
																if (NULLP(CDR(BgL_cdrzd2349zd2_1907)))
																	{	/* Eval/eval.scm 647 */
																		BgL_namez00_1896 =
																			CAR(BgL_carzd2352zd2_1911);
																		BgL_argsz00_1897 =
																			CDR(BgL_carzd2352zd2_1911);
																		BgL_bodyz00_1898 =
																			CDR(BgL_cdrzd2340zd2_1903);
																		{	/* Eval/eval.scm 649 */
																			obj_t BgL_bodyz00_1920;
																			obj_t BgL_fnamez00_1921;
																			obj_t BgL_locz00_1922;

																			if (NULLP(BgL_bodyz00_1898))
																				{	/* Eval/eval.scm 649 */
																					BgL_bodyz00_1920 = BNIL;
																				}
																			else
																				{	/* Eval/eval.scm 649 */
																					obj_t BgL_head1211z00_2048;

																					{	/* Eval/eval.scm 649 */
																						obj_t BgL_arg1830z00_2061;

																						{	/* Eval/eval.scm 649 */
																							obj_t BgL_pairz00_3106;

																							{	/* Eval/eval.scm 649 */
																								obj_t BgL_pairz00_3105;

																								if (PAIRP(BgL_bodyz00_1898))
																									{	/* Eval/eval.scm 649 */
																										BgL_pairz00_3105 =
																											BgL_bodyz00_1898;
																									}
																								else
																									{
																										obj_t BgL_auxz00_6088;

																										BgL_auxz00_6088 =
																											BGl_typezd2errorzd2zz__errorz00
																											(BGl_string2812z00zz__evalz00,
																											BINT(((long) 25096)),
																											BGl_string2932z00zz__evalz00,
																											BGl_string2840z00zz__evalz00,
																											BgL_bodyz00_1898);
																										FAILURE(BgL_auxz00_6088,
																											BFALSE, BFALSE);
																									}
																								{	/* Eval/eval.scm 649 */
																									obj_t BgL_aux2719z00_4061;

																									BgL_aux2719z00_4061 =
																										CAR(BgL_pairz00_3105);
																									if (PAIRP
																										(BgL_aux2719z00_4061))
																										{	/* Eval/eval.scm 649 */
																											BgL_pairz00_3106 =
																												BgL_aux2719z00_4061;
																										}
																									else
																										{
																											obj_t BgL_auxz00_6095;

																											BgL_auxz00_6095 =
																												BGl_typezd2errorzd2zz__errorz00
																												(BGl_string2812z00zz__evalz00,
																												BINT(((long) 25096)),
																												BGl_string2932z00zz__evalz00,
																												BGl_string2840z00zz__evalz00,
																												BgL_aux2719z00_4061);
																											FAILURE(BgL_auxz00_6095,
																												BFALSE, BFALSE);
																							}}}
																							{	/* Eval/eval.scm 649 */
																								obj_t BgL_pairz00_3109;

																								{	/* Eval/eval.scm 649 */
																									obj_t BgL_aux2721z00_4063;

																									BgL_aux2721z00_4063 =
																										CDR(BgL_pairz00_3106);
																									if (PAIRP
																										(BgL_aux2721z00_4063))
																										{	/* Eval/eval.scm 649 */
																											BgL_pairz00_3109 =
																												BgL_aux2721z00_4063;
																										}
																									else
																										{
																											obj_t BgL_auxz00_6102;

																											BgL_auxz00_6102 =
																												BGl_typezd2errorzd2zz__errorz00
																												(BGl_string2812z00zz__evalz00,
																												BINT(((long) 25096)),
																												BGl_string2932z00zz__evalz00,
																												BGl_string2840z00zz__evalz00,
																												BgL_aux2721z00_4063);
																											FAILURE(BgL_auxz00_6102,
																												BFALSE, BFALSE);
																								}}
																								BgL_arg1830z00_2061 =
																									CAR(BgL_pairz00_3109);
																						}}
																						{	/* Eval/eval.scm 649 */
																							obj_t BgL_res2383z00_3110;

																							BgL_res2383z00_3110 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1830z00_2061, BNIL);
																							BgL_head1211z00_2048 =
																								BgL_res2383z00_3110;
																					}}
																					{	/* Eval/eval.scm 649 */
																						obj_t BgL_g1214z00_2049;

																						{	/* Eval/eval.scm 649 */
																							obj_t BgL_pairz00_3111;

																							if (PAIRP(BgL_bodyz00_1898))
																								{	/* Eval/eval.scm 649 */
																									BgL_pairz00_3111 =
																										BgL_bodyz00_1898;
																								}
																							else
																								{
																									obj_t BgL_auxz00_6110;

																									BgL_auxz00_6110 =
																										BGl_typezd2errorzd2zz__errorz00
																										(BGl_string2812z00zz__evalz00,
																										BINT(((long) 25096)),
																										BGl_string2932z00zz__evalz00,
																										BGl_string2840z00zz__evalz00,
																										BgL_bodyz00_1898);
																									FAILURE(BgL_auxz00_6110,
																										BFALSE, BFALSE);
																								}
																							BgL_g1214z00_2049 =
																								CDR(BgL_pairz00_3111);
																						}
																						{
																							obj_t BgL_l1209z00_2051;
																							obj_t BgL_tail1212z00_2052;

																							BgL_l1209z00_2051 =
																								BgL_g1214z00_2049;
																							BgL_tail1212z00_2052 =
																								BgL_head1211z00_2048;
																						BgL_zc3z04anonymousza31824ze3z87_2053:
																							if (PAIRP
																								(BgL_l1209z00_2051))
																								{	/* Eval/eval.scm 649 */
																									obj_t BgL_newtail1213z00_2055;

																									{	/* Eval/eval.scm 649 */
																										obj_t BgL_arg1827z00_2057;

																										{	/* Eval/eval.scm 649 */
																											obj_t BgL_pairz00_3114;

																											{	/* Eval/eval.scm 649 */
																												obj_t
																													BgL_aux2725z00_4067;
																												BgL_aux2725z00_4067 =
																													CAR
																													(BgL_l1209z00_2051);
																												if (PAIRP
																													(BgL_aux2725z00_4067))
																													{	/* Eval/eval.scm 649 */
																														BgL_pairz00_3114 =
																															BgL_aux2725z00_4067;
																													}
																												else
																													{
																														obj_t
																															BgL_auxz00_6120;
																														BgL_auxz00_6120 =
																															BGl_typezd2errorzd2zz__errorz00
																															(BGl_string2812z00zz__evalz00,
																															BINT(((long)
																																	25096)),
																															BGl_string2933z00zz__evalz00,
																															BGl_string2840z00zz__evalz00,
																															BgL_aux2725z00_4067);
																														FAILURE
																															(BgL_auxz00_6120,
																															BFALSE, BFALSE);
																											}}
																											{	/* Eval/eval.scm 649 */
																												obj_t BgL_pairz00_3117;

																												{	/* Eval/eval.scm 649 */
																													obj_t
																														BgL_aux2727z00_4069;
																													BgL_aux2727z00_4069 =
																														CDR
																														(BgL_pairz00_3114);
																													if (PAIRP
																														(BgL_aux2727z00_4069))
																														{	/* Eval/eval.scm 649 */
																															BgL_pairz00_3117 =
																																BgL_aux2727z00_4069;
																														}
																													else
																														{
																															obj_t
																																BgL_auxz00_6127;
																															BgL_auxz00_6127 =
																																BGl_typezd2errorzd2zz__errorz00
																																(BGl_string2812z00zz__evalz00,
																																BINT(((long)
																																		25096)),
																																BGl_string2933z00zz__evalz00,
																																BGl_string2840z00zz__evalz00,
																																BgL_aux2727z00_4069);
																															FAILURE
																																(BgL_auxz00_6127,
																																BFALSE, BFALSE);
																												}}
																												BgL_arg1827z00_2057 =
																													CAR(BgL_pairz00_3117);
																										}}
																										{	/* Eval/eval.scm 649 */
																											obj_t BgL_res2385z00_3118;

																											BgL_res2385z00_3118 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1827z00_2057,
																												BNIL);
																											BgL_newtail1213z00_2055 =
																												BgL_res2385z00_3118;
																									}}
																									SET_CDR(BgL_tail1212z00_2052,
																										BgL_newtail1213z00_2055);
																									{
																										obj_t BgL_tail1212z00_6136;
																										obj_t BgL_l1209z00_6134;

																										BgL_l1209z00_6134 =
																											CDR(BgL_l1209z00_2051);
																										BgL_tail1212z00_6136 =
																											BgL_newtail1213z00_2055;
																										BgL_tail1212z00_2052 =
																											BgL_tail1212z00_6136;
																										BgL_l1209z00_2051 =
																											BgL_l1209z00_6134;
																										goto
																											BgL_zc3z04anonymousza31824ze3z87_2053;
																									}
																								}
																							else
																								{	/* Eval/eval.scm 649 */
																									if (NULLP(BgL_l1209z00_2051))
																										{	/* Eval/eval.scm 649 */
																											BgL_bodyz00_1920 =
																												BgL_head1211z00_2048;
																										}
																									else
																										{	/* Eval/eval.scm 649 */
																											BgL_bodyz00_1920 =
																												BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00
																												(BGl_string2934z00zz__evalz00,
																												BGl_string2935z00zz__evalz00,
																												BgL_l1209z00_2051,
																												BGl_string2812z00zz__evalz00,
																												BINT(((long) 25096)));
																				}}}}}
																			{	/* Eval/eval.scm 650 */

																				{	/* Eval/eval.scm 650 */

																					BgL_fnamez00_1921 =
																						BGl_gensymz00zz__r4_symbols_6_4z00
																						(BFALSE);
																			}}
																			{	/* Eval/eval.scm 651 */

																				{	/* Eval/eval.scm 651 */

																					BgL_locz00_1922 =
																						BGl_gensymz00zz__r4_symbols_6_4z00
																						(BFALSE);
																			}}
																			{	/* Eval/eval.scm 654 */
																				obj_t BgL_arg1744z00_1923;

																				{	/* Eval/eval.scm 654 */
																					obj_t BgL_expdzd2lamzd2_1924;

																					{	/* Eval/eval.scm 654 */
																						obj_t BgL_arg1777z00_2004;

																						{	/* Eval/eval.scm 654 */
																							obj_t BgL_arg1778z00_2005;
																							obj_t BgL_arg1779z00_2006;

																							{	/* Eval/eval.scm 654 */
																								obj_t BgL_arg1780z00_2007;

																								BgL_arg1780z00_2007 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2887z00zz__evalz00,
																									BNIL);
																								BgL_arg1778z00_2005 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2936z00zz__evalz00,
																									BgL_arg1780z00_2007);
																							}
																							{	/* Eval/eval.scm 655 */
																								obj_t BgL_arg1781z00_2008;

																								{	/* Eval/eval.scm 655 */
																									obj_t BgL_arg1782z00_2009;

																									{	/* Eval/eval.scm 655 */
																										obj_t BgL_arg1783z00_2010;
																										obj_t BgL_arg1784z00_2011;

																										{	/* Eval/eval.scm 655 */
																											obj_t BgL_arg1786z00_2012;
																											obj_t BgL_arg1787z00_2013;

																											{	/* Eval/eval.scm 655 */
																												obj_t
																													BgL_arg1788z00_2014;
																												BgL_arg1788z00_2014 =
																													MAKE_YOUNG_PAIR
																													(BFALSE, BNIL);
																												BgL_arg1786z00_2012 =
																													MAKE_YOUNG_PAIR
																													(BgL_fnamez00_1921,
																													BgL_arg1788z00_2014);
																											}
																											BgL_arg1787z00_2013 =
																												MAKE_YOUNG_PAIR
																												(BgL_locz00_1922, BNIL);
																											BgL_arg1783z00_2010 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1786z00_2012,
																												BgL_arg1787z00_2013);
																										}
																										{	/* Eval/eval.scm 656 */
																											obj_t BgL_arg1789z00_2015;
																											obj_t BgL_arg1790z00_2016;

																											{	/* Eval/eval.scm 656 */
																												obj_t
																													BgL_arg1791z00_2017;
																												{	/* Eval/eval.scm 656 */
																													obj_t
																														BgL_arg1792z00_2018;
																													obj_t
																														BgL_arg1794z00_2019;
																													{	/* Eval/eval.scm 656 */
																														obj_t
																															BgL_arg1795z00_2020;
																														BgL_arg1795z00_2020
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2936z00zz__evalz00,
																															BNIL);
																														BgL_arg1792z00_2018
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2891z00zz__evalz00,
																															BgL_arg1795z00_2020);
																													}
																													{	/* Eval/eval.scm 657 */
																														obj_t
																															BgL_arg1796z00_2021;
																														{	/* Eval/eval.scm 657 */
																															obj_t
																																BgL_arg1797z00_2022;
																															{	/* Eval/eval.scm 657 */
																																obj_t
																																	BgL_arg1798z00_2023;
																																obj_t
																																	BgL_arg1799z00_2024;
																																{	/* Eval/eval.scm 657 */
																																	obj_t
																																		BgL_arg1800z00_2025;
																																	BgL_arg1800z00_2025
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_symbol2936z00zz__evalz00,
																																		BNIL);
																																	BgL_arg1798z00_2023
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_symbol2893z00zz__evalz00,
																																		BgL_arg1800z00_2025);
																																}
																																{	/* Eval/eval.scm 658 */
																																	obj_t
																																		BgL_arg1801z00_2026;
																																	{	/* Eval/eval.scm 658 */
																																		obj_t
																																			BgL_arg1803z00_2027;
																																		obj_t
																																			BgL_arg1805z00_2028;
																																		{	/* Eval/eval.scm 658 */
																																			obj_t
																																				BgL_arg1806z00_2029;
																																			{	/* Eval/eval.scm 658 */
																																				obj_t
																																					BgL_arg1807z00_2030;
																																				BgL_arg1807z00_2030
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2895z00zz__evalz00,
																																					BNIL);
																																				BgL_arg1806z00_2029
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2897z00zz__evalz00,
																																					BgL_arg1807z00_2030);
																																			}
																																			BgL_arg1803z00_2027
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol2818z00zz__evalz00,
																																				BgL_arg1806z00_2029);
																																		}
																																		{	/* Eval/eval.scm 659 */
																																			obj_t
																																				BgL_arg1808z00_2031;
																																			obj_t
																																				BgL_arg1809z00_2032;
																																			{	/* Eval/eval.scm 659 */
																																				obj_t
																																					BgL_arg1810z00_2033;
																																				{	/* Eval/eval.scm 659 */
																																					obj_t
																																						BgL_arg1811z00_2034;
																																					BgL_arg1811z00_2034
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2899z00zz__evalz00,
																																						BNIL);
																																					BgL_arg1810z00_2033
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_fnamez00_1921,
																																						BgL_arg1811z00_2034);
																																				}
																																				BgL_arg1808z00_2031
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2901z00zz__evalz00,
																																					BgL_arg1810z00_2033);
																																			}
																																			{	/* Eval/eval.scm 660 */
																																				obj_t
																																					BgL_arg1812z00_2035;
																																				{	/* Eval/eval.scm 660 */
																																					obj_t
																																						BgL_arg1813z00_2036;
																																					{	/* Eval/eval.scm 660 */
																																						obj_t
																																							BgL_arg1814z00_2037;
																																						BgL_arg1814z00_2037
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol2903z00zz__evalz00,
																																							BNIL);
																																						BgL_arg1813z00_2036
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_locz00_1922,
																																							BgL_arg1814z00_2037);
																																					}
																																					BgL_arg1812z00_2035
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2901z00zz__evalz00,
																																						BgL_arg1813z00_2036);
																																				}
																																				BgL_arg1809z00_2032
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1812z00_2035,
																																					BNIL);
																																			}
																																			BgL_arg1805z00_2028
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1808z00_2031,
																																				BgL_arg1809z00_2032);
																																		}
																																		BgL_arg1801z00_2026
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1803z00_2027,
																																			BgL_arg1805z00_2028);
																																	}
																																	BgL_arg1799z00_2024
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1801z00_2026,
																																		BNIL);
																																}
																																BgL_arg1797z00_2022
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1798z00_2023,
																																	BgL_arg1799z00_2024);
																															}
																															BgL_arg1796z00_2021
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2905z00zz__evalz00,
																																BgL_arg1797z00_2022);
																														}
																														BgL_arg1794z00_2019
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1796z00_2021,
																															BNIL);
																													}
																													BgL_arg1791z00_2017 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1792z00_2018,
																														BgL_arg1794z00_2019);
																												}
																												BgL_arg1789z00_2015 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2907z00zz__evalz00,
																													BgL_arg1791z00_2017);
																											}
																											{	/* Eval/eval.scm 661 */
																												obj_t
																													BgL_arg1815z00_2038;
																												{	/* Eval/eval.scm 661 */
																													obj_t
																														BgL_arg1816z00_2039;
																													{	/* Eval/eval.scm 661 */
																														obj_t
																															BgL_arg1817z00_2040;
																														obj_t
																															BgL_arg1818z00_2041;
																														{	/* Eval/eval.scm 661 */
																															obj_t
																																BgL_arg1819z00_2042;
																															{	/* Eval/eval.scm 661 */
																																obj_t
																																	BgL_arg1820z00_2043;
																																obj_t
																																	BgL_arg1821z00_2044;
																																BgL_arg1820z00_2043
																																	=
																																	BGl_loopze70ze7zz__evalz00
																																	(BgL_locz00_1922,
																																	BgL_namez00_1896,
																																	BgL_fnamez00_1921,
																																	BgL_argsz00_1897,
																																	BGl_list2938z00zz__evalz00,
																																	BNIL);
																																{	/* Eval/eval.scm 664 */
																																	obj_t
																																		BgL_arg1822z00_2045;
																																	{	/* Eval/eval.scm 664 */
																																		obj_t
																																			BgL_auxz00_6172;
																																		{	/* Eval/eval.scm 664 */
																																			bool_t
																																				BgL_test3432z00_6173;
																																			if (PAIRP
																																				(BgL_bodyz00_1920))
																																				{	/* Eval/eval.scm 664 */
																																					BgL_test3432z00_6173
																																						=
																																						(
																																						(bool_t)
																																						1);
																																				}
																																			else
																																				{	/* Eval/eval.scm 664 */
																																					BgL_test3432z00_6173
																																						=
																																						NULLP
																																						(BgL_bodyz00_1920);
																																				}
																																			if (BgL_test3432z00_6173)
																																				{	/* Eval/eval.scm 664 */
																																					BgL_auxz00_6172
																																						=
																																						BgL_bodyz00_1920;
																																				}
																																			else
																																				{
																																					obj_t
																																						BgL_auxz00_6177;
																																					BgL_auxz00_6177
																																						=
																																						BGl_typezd2errorzd2zz__errorz00
																																						(BGl_string2812z00zz__evalz00,
																																						BINT
																																						(((long) 25478)), BGl_string2932z00zz__evalz00, BGl_string2869z00zz__evalz00, BgL_bodyz00_1920);
																																					FAILURE
																																						(BgL_auxz00_6177,
																																						BFALSE,
																																						BFALSE);
																																		}}
																																		BgL_arg1822z00_2045
																																			=
																																			BGl_expandzd2prognzd2zz__prognz00
																																			(BgL_auxz00_6172);
																																	}
																																	BgL_arg1821z00_2044
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1822z00_2045,
																																		BNIL);
																																}
																																BgL_arg1819z00_2042
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1820z00_2043,
																																	BgL_arg1821z00_2044);
																															}
																															BgL_arg1817z00_2040
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2913z00zz__evalz00,
																																BgL_arg1819z00_2042);
																														}
																														BgL_arg1818z00_2041
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol2887z00zz__evalz00,
																															BNIL);
																														BgL_arg1816z00_2039
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1817z00_2040,
																															BgL_arg1818z00_2041);
																													}
																													BgL_arg1815z00_2038 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol2887z00zz__evalz00,
																														BgL_arg1816z00_2039);
																												}
																												BgL_arg1790z00_2016 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1815z00_2038,
																													BNIL);
																											}
																											BgL_arg1784z00_2011 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1789z00_2015,
																												BgL_arg1790z00_2016);
																										}
																										BgL_arg1782z00_2009 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1783z00_2010,
																											BgL_arg1784z00_2011);
																									}
																									BgL_arg1781z00_2008 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2921z00zz__evalz00,
																										BgL_arg1782z00_2009);
																								}
																								BgL_arg1779z00_2006 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1781z00_2008, BNIL);
																							}
																							BgL_arg1777z00_2004 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1778z00_2005,
																								BgL_arg1779z00_2006);
																						}
																						BgL_expdzd2lamzd2_1924 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2923z00zz__evalz00,
																							BgL_arg1777z00_2004);
																					}
																					{	/* Eval/eval.scm 654 */
																						obj_t BgL_expdzd2lamzf2locz20_1925;

																						BgL_expdzd2lamzf2locz20_1925 =
																							BGl_evepairifyz00zz__prognz00
																							(BgL_expdzd2lamzd2_1924,
																							BgL_xz00_54);
																						{	/* Eval/eval.scm 666 */
																							obj_t BgL_expdzd2evalzd2_1926;

																							{	/* Eval/eval.scm 84 */
																								obj_t BgL_envz00_2003;

																								{	/* Eval/eval.scm 254 */
																									obj_t BgL_mz00_3122;

																									BgL_mz00_3122 =
																										BGl_evalzd2modulezd2zz__evmodulez00
																										();
																									if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_mz00_3122))
																										{	/* Eval/eval.scm 255 */
																											BgL_envz00_2003 =
																												BgL_mz00_3122;
																										}
																									else
																										{	/* Eval/eval.scm 255 */
																											BgL_envz00_2003 =
																												BGl_symbol2810z00zz__evalz00;
																										}
																								}
																								{	/* Eval/eval.scm 84 */

																									{	/* Eval/eval.scm 178 */
																										obj_t BgL_evaluatez00_3124;

																										if (PROCEDUREP
																											(BGl_defaultzd2evaluatezd2zz__evalz00))
																											{	/* Eval/eval.scm 178 */
																												BgL_evaluatez00_3124 =
																													BGl_defaultzd2evaluatezd2zz__evalz00;
																											}
																										else
																											{	/* Eval/eval.scm 178 */
																												BgL_evaluatez00_3124 =
																													BGl_bytezd2codezd2evaluatezd2envzd2zz__evalz00;
																											}
																										{	/* Eval/eval.scm 181 */
																											obj_t BgL_auxz00_6201;

																											if (PROCEDUREP
																												(BgL_evaluatez00_3124))
																												{	/* Eval/eval.scm 181 */
																													BgL_auxz00_6201 =
																														BgL_evaluatez00_3124;
																												}
																											else
																												{
																													obj_t BgL_auxz00_6204;

																													BgL_auxz00_6204 =
																														BGl_typezd2errorzd2zz__errorz00
																														(BGl_string2812z00zz__evalz00,
																														BINT(((long) 6972)),
																														BGl_string2932z00zz__evalz00,
																														BGl_string2814z00zz__evalz00,
																														BgL_evaluatez00_3124);
																													FAILURE
																														(BgL_auxz00_6204,
																														BFALSE, BFALSE);
																												}
																											BgL_expdzd2evalzd2_1926 =
																												BGl_evalzf2expanderzf2zz__evalz00
																												(BgL_expdzd2lamzf2locz20_1925,
																												BgL_envz00_2003,
																												BGl_expandz12zd2envzc0zz__expandz00,
																												BgL_auxz00_6201);
																							}}}}
																							{	/* Eval/eval.scm 667 */

																								{	/* Eval/eval.scm 668 */
																									obj_t
																										BgL_zc3z04anonymousza31745ze3z87_3752;
																									BgL_zc3z04anonymousza31745ze3z87_3752
																										=
																										MAKE_FX_PROCEDURE
																										(BGl_z62zc3z04anonymousza31745ze3ze5zz__evalz00,
																										(int) (((long) 2)),
																										(int) (((long) 1)));
																									PROCEDURE_SET
																										(BgL_zc3z04anonymousza31745ze3z87_3752,
																										(int) (((long) 0)),
																										BgL_expdzd2evalzd2_1926);
																									BgL_arg1744z00_1923 =
																										BgL_zc3z04anonymousza31745ze3z87_3752;
																				}}}}}
																				BGl_installzd2expanderzd2zz__macroz00
																					(BgL_namez00_1896,
																					BgL_arg1744z00_1923);
																			}
																			return BUNSPEC;
																		}
																	}
																else
																	{	/* Eval/eval.scm 688 */
																		obj_t BgL_procz00_3164;

																		BgL_procz00_3164 =
																			BGl_symbol2941z00zz__evalz00;
																		{	/* Eval/eval.scm 543 */
																			bool_t BgL_test3437z00_6218;

																			{	/* Eval/eval.scm 543 */
																				bool_t BgL_res2401z00_3167;

																				BgL_res2401z00_3167 =
																					EPAIRP(BgL_xz00_54);
																				BgL_test3437z00_6218 =
																					BgL_res2401z00_3167;
																			}
																			if (BgL_test3437z00_6218)
																				{	/* Eval/eval.scm 544 */
																					obj_t BgL_arg1523z00_3166;

																					{	/* Eval/eval.scm 544 */
																						obj_t BgL_objz00_3168;

																						if (EPAIRP(BgL_xz00_54))
																							{	/* Eval/eval.scm 544 */
																								BgL_objz00_3168 = BgL_xz00_54;
																							}
																						else
																							{
																								obj_t BgL_auxz00_6222;

																								BgL_auxz00_6222 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string2812z00zz__evalz00,
																									BINT(((long) 21704)),
																									BGl_string2943z00zz__evalz00,
																									BGl_string2864z00zz__evalz00,
																									BgL_xz00_54);
																								FAILURE(BgL_auxz00_6222, BFALSE,
																									BFALSE);
																							}
																						BgL_arg1523z00_3166 =
																							CER(BgL_objz00_3168);
																					}
																					return
																						BGl_everrorz00zz__everrorz00
																						(BgL_arg1523z00_3166,
																						BgL_procz00_3164,
																						BGl_string2944z00zz__evalz00,
																						BgL_xz00_54);
																				}
																			else
																				{	/* Eval/eval.scm 543 */
																					return
																						BGl_errorz00zz__errorz00
																						(BgL_procz00_3164,
																						BGl_string2944z00zz__evalz00,
																						BgL_xz00_54);
																				}
																		}
																	}
															}
														else
															{	/* Eval/eval.scm 688 */
																obj_t BgL_procz00_3169;

																BgL_procz00_3169 = BGl_symbol2941z00zz__evalz00;
																{	/* Eval/eval.scm 543 */
																	bool_t BgL_test3439z00_6229;

																	{	/* Eval/eval.scm 543 */
																		bool_t BgL_res2402z00_3172;

																		BgL_res2402z00_3172 = EPAIRP(BgL_xz00_54);
																		BgL_test3439z00_6229 = BgL_res2402z00_3172;
																	}
																	if (BgL_test3439z00_6229)
																		{	/* Eval/eval.scm 544 */
																			obj_t BgL_arg1523z00_3171;

																			{	/* Eval/eval.scm 544 */
																				obj_t BgL_objz00_3173;

																				if (EPAIRP(BgL_xz00_54))
																					{	/* Eval/eval.scm 544 */
																						BgL_objz00_3173 = BgL_xz00_54;
																					}
																				else
																					{
																						obj_t BgL_auxz00_6233;

																						BgL_auxz00_6233 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string2812z00zz__evalz00,
																							BINT(((long) 21704)),
																							BGl_string2943z00zz__evalz00,
																							BGl_string2864z00zz__evalz00,
																							BgL_xz00_54);
																						FAILURE(BgL_auxz00_6233, BFALSE,
																							BFALSE);
																					}
																				BgL_arg1523z00_3171 =
																					CER(BgL_objz00_3173);
																			}
																			return
																				BGl_everrorz00zz__everrorz00
																				(BgL_arg1523z00_3171, BgL_procz00_3169,
																				BGl_string2944z00zz__evalz00,
																				BgL_xz00_54);
																		}
																	else
																		{	/* Eval/eval.scm 543 */
																			return
																				BGl_errorz00zz__errorz00
																				(BgL_procz00_3169,
																				BGl_string2944z00zz__evalz00,
																				BgL_xz00_54);
																		}
																}
															}
													}
												else
													{	/* Eval/eval.scm 688 */
														obj_t BgL_procz00_3174;

														BgL_procz00_3174 = BGl_symbol2941z00zz__evalz00;
														{	/* Eval/eval.scm 543 */
															bool_t BgL_test3441z00_6240;

															{	/* Eval/eval.scm 543 */
																bool_t BgL_res2403z00_3177;

																BgL_res2403z00_3177 = EPAIRP(BgL_xz00_54);
																BgL_test3441z00_6240 = BgL_res2403z00_3177;
															}
															if (BgL_test3441z00_6240)
																{	/* Eval/eval.scm 544 */
																	obj_t BgL_arg1523z00_3176;

																	{	/* Eval/eval.scm 544 */
																		obj_t BgL_objz00_3178;

																		if (EPAIRP(BgL_xz00_54))
																			{	/* Eval/eval.scm 544 */
																				BgL_objz00_3178 = BgL_xz00_54;
																			}
																		else
																			{
																				obj_t BgL_auxz00_6244;

																				BgL_auxz00_6244 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string2812z00zz__evalz00,
																					BINT(((long) 21704)),
																					BGl_string2943z00zz__evalz00,
																					BGl_string2864z00zz__evalz00,
																					BgL_xz00_54);
																				FAILURE(BgL_auxz00_6244, BFALSE,
																					BFALSE);
																			}
																		BgL_arg1523z00_3176 = CER(BgL_objz00_3178);
																	}
																	return
																		BGl_everrorz00zz__everrorz00
																		(BgL_arg1523z00_3176, BgL_procz00_3174,
																		BGl_string2944z00zz__evalz00, BgL_xz00_54);
																}
															else
																{	/* Eval/eval.scm 543 */
																	return
																		BGl_errorz00zz__errorz00(BgL_procz00_3174,
																		BGl_string2944z00zz__evalz00, BgL_xz00_54);
																}
														}
													}
											}
										else
											{	/* Eval/eval.scm 688 */
												obj_t BgL_procz00_3179;

												BgL_procz00_3179 = BGl_symbol2941z00zz__evalz00;
												{	/* Eval/eval.scm 543 */
													bool_t BgL_test3443z00_6251;

													{	/* Eval/eval.scm 543 */
														bool_t BgL_res2404z00_3182;

														BgL_res2404z00_3182 = EPAIRP(BgL_xz00_54);
														BgL_test3443z00_6251 = BgL_res2404z00_3182;
													}
													if (BgL_test3443z00_6251)
														{	/* Eval/eval.scm 544 */
															obj_t BgL_arg1523z00_3181;

															{	/* Eval/eval.scm 544 */
																obj_t BgL_objz00_3183;

																if (EPAIRP(BgL_xz00_54))
																	{	/* Eval/eval.scm 544 */
																		BgL_objz00_3183 = BgL_xz00_54;
																	}
																else
																	{
																		obj_t BgL_auxz00_6255;

																		BgL_auxz00_6255 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string2812z00zz__evalz00,
																			BINT(((long) 21704)),
																			BGl_string2943z00zz__evalz00,
																			BGl_string2864z00zz__evalz00,
																			BgL_xz00_54);
																		FAILURE(BgL_auxz00_6255, BFALSE, BFALSE);
																	}
																BgL_arg1523z00_3181 = CER(BgL_objz00_3183);
															}
															return
																BGl_everrorz00zz__everrorz00
																(BgL_arg1523z00_3181, BgL_procz00_3179,
																BGl_string2944z00zz__evalz00, BgL_xz00_54);
														}
													else
														{	/* Eval/eval.scm 543 */
															return
																BGl_errorz00zz__errorz00(BgL_procz00_3179,
																BGl_string2944z00zz__evalz00, BgL_xz00_54);
														}
												}
											}
									}
								else
									{	/* Eval/eval.scm 688 */
										obj_t BgL_procz00_3184;

										BgL_procz00_3184 = BGl_symbol2941z00zz__evalz00;
										{	/* Eval/eval.scm 543 */
											bool_t BgL_test3445z00_6262;

											{	/* Eval/eval.scm 543 */
												bool_t BgL_res2405z00_3187;

												BgL_res2405z00_3187 = EPAIRP(BgL_xz00_54);
												BgL_test3445z00_6262 = BgL_res2405z00_3187;
											}
											if (BgL_test3445z00_6262)
												{	/* Eval/eval.scm 544 */
													obj_t BgL_arg1523z00_3186;

													{	/* Eval/eval.scm 544 */
														obj_t BgL_objz00_3188;

														if (EPAIRP(BgL_xz00_54))
															{	/* Eval/eval.scm 544 */
																BgL_objz00_3188 = BgL_xz00_54;
															}
														else
															{
																obj_t BgL_auxz00_6266;

																BgL_auxz00_6266 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2812z00zz__evalz00,
																	BINT(((long) 21704)),
																	BGl_string2943z00zz__evalz00,
																	BGl_string2864z00zz__evalz00, BgL_xz00_54);
																FAILURE(BgL_auxz00_6266, BFALSE, BFALSE);
															}
														BgL_arg1523z00_3186 = CER(BgL_objz00_3188);
													}
													return
														BGl_everrorz00zz__everrorz00(BgL_arg1523z00_3186,
														BgL_procz00_3184, BGl_string2944z00zz__evalz00,
														BgL_xz00_54);
												}
											else
												{	/* Eval/eval.scm 543 */
													return
														BGl_errorz00zz__errorz00(BgL_procz00_3184,
														BGl_string2944z00zz__evalz00, BgL_xz00_54);
												}
										}
									}
							}
						else
							{	/* Eval/eval.scm 688 */
								obj_t BgL_procz00_3189;

								BgL_procz00_3189 = BGl_symbol2941z00zz__evalz00;
								{	/* Eval/eval.scm 543 */
									bool_t BgL_test3447z00_6273;

									{	/* Eval/eval.scm 543 */
										bool_t BgL_res2406z00_3192;

										BgL_res2406z00_3192 = EPAIRP(BgL_xz00_54);
										BgL_test3447z00_6273 = BgL_res2406z00_3192;
									}
									if (BgL_test3447z00_6273)
										{	/* Eval/eval.scm 544 */
											obj_t BgL_arg1523z00_3191;

											{	/* Eval/eval.scm 544 */
												obj_t BgL_objz00_3193;

												if (EPAIRP(BgL_xz00_54))
													{	/* Eval/eval.scm 544 */
														BgL_objz00_3193 = BgL_xz00_54;
													}
												else
													{
														obj_t BgL_auxz00_6277;

														BgL_auxz00_6277 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2812z00zz__evalz00,
															BINT(((long) 21704)),
															BGl_string2943z00zz__evalz00,
															BGl_string2864z00zz__evalz00, BgL_xz00_54);
														FAILURE(BgL_auxz00_6277, BFALSE, BFALSE);
													}
												BgL_arg1523z00_3191 = CER(BgL_objz00_3193);
											}
											return
												BGl_everrorz00zz__everrorz00(BgL_arg1523z00_3191,
												BgL_procz00_3189, BGl_string2944z00zz__evalz00,
												BgL_xz00_54);
										}
									else
										{	/* Eval/eval.scm 543 */
											return
												BGl_errorz00zz__errorz00(BgL_procz00_3189,
												BGl_string2944z00zz__evalz00, BgL_xz00_54);
										}
								}
							}
					}
				else
					{	/* Eval/eval.scm 688 */
						obj_t BgL_procz00_3194;

						BgL_procz00_3194 = BGl_symbol2941z00zz__evalz00;
						{	/* Eval/eval.scm 543 */
							bool_t BgL_test3449z00_6284;

							{	/* Eval/eval.scm 543 */
								bool_t BgL_res2407z00_3197;

								BgL_res2407z00_3197 = EPAIRP(BgL_xz00_54);
								BgL_test3449z00_6284 = BgL_res2407z00_3197;
							}
							if (BgL_test3449z00_6284)
								{	/* Eval/eval.scm 544 */
									obj_t BgL_arg1523z00_3196;

									{	/* Eval/eval.scm 544 */
										obj_t BgL_objz00_3198;

										if (EPAIRP(BgL_xz00_54))
											{	/* Eval/eval.scm 544 */
												BgL_objz00_3198 = BgL_xz00_54;
											}
										else
											{
												obj_t BgL_auxz00_6288;

												BgL_auxz00_6288 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2812z00zz__evalz00, BINT(((long) 21704)),
													BGl_string2943z00zz__evalz00,
													BGl_string2864z00zz__evalz00, BgL_xz00_54);
												FAILURE(BgL_auxz00_6288, BFALSE, BFALSE);
											}
										BgL_arg1523z00_3196 = CER(BgL_objz00_3198);
									}
									return
										BGl_everrorz00zz__everrorz00(BgL_arg1523z00_3196,
										BgL_procz00_3194, BGl_string2944z00zz__evalz00,
										BgL_xz00_54);
								}
							else
								{	/* Eval/eval.scm 543 */
									return
										BGl_errorz00zz__errorz00(BgL_procz00_3194,
										BGl_string2944z00zz__evalz00, BgL_xz00_54);
								}
						}
					}
			}
		}

	}



/* &expand-define-hygiene-macro */
	obj_t BGl_z62expandzd2definezd2hygienezd2macrozb0zz__evalz00(obj_t
		BgL_envz00_3753, obj_t BgL_xz00_3754, obj_t BgL_ez00_3755)
	{
		{	/* Eval/eval.scm 646 */
			return
				BGl_expandzd2definezd2hygienezd2macrozd2zz__evalz00(BgL_xz00_3754,
				BgL_ez00_3755);
		}

	}



/* &<@anonymous:1745> */
	obj_t BGl_z62zc3z04anonymousza31745ze3ze5zz__evalz00(obj_t BgL_envz00_3756,
		obj_t BgL_xz00_3758, obj_t BgL_ez00_3759)
	{
		{	/* Eval/eval.scm 668 */
			{	/* Eval/eval.scm 669 */
				obj_t BgL_expdzd2evalzd2_3757;

				BgL_expdzd2evalzd2_3757 =
					PROCEDURE_REF(BgL_envz00_3756, (int) (((long) 0)));
				{	/* Eval/eval.scm 669 */
					obj_t BgL_res1135z00_4253;

					BgL_res1135z00_4253 = MAKE_CELL(BUNSPEC);
					{
						obj_t BgL_ez00_4255;

						if (CBOOL(BGl_zc3z04exitza31752ze3ze70z60zz__evalz00(BgL_ez00_3759,
									BgL_xz00_3758, BgL_expdzd2evalzd2_3757, BgL_res1135z00_4253)))
							{	/* Eval/eval.scm 669 */
								BgL_ez00_4255 = CELL_REF(BgL_res1135z00_4253);
								{	/* Eval/eval.scm 671 */
									obj_t BgL_nez00_4256;

									if (BGl_isazf3zf3zz__objectz00(BgL_ez00_4255,
											BGl_z62errorz62zz__objectz00))
										{	/* Eval/eval.scm 673 */
											bool_t BgL_test3453z00_6303;

											{	/* Eval/eval.scm 673 */
												obj_t BgL_arg1776z00_4257;

												BgL_arg1776z00_4257 =
													(((BgL_z62errorz62_bglt) COBJECT(
															((BgL_z62errorz62_bglt) BgL_ez00_4255)))->
													BgL_objz00);
												{	/* Eval/eval.scm 673 */
													bool_t BgL_res2388z00_4258;

													BgL_res2388z00_4258 = EPAIRP(BgL_arg1776z00_4257);
													BgL_test3453z00_6303 = BgL_res2388z00_4258;
												}
											}
											if (BgL_test3453z00_6303)
												{
													obj_t BgL_fnamez00_4260;
													obj_t BgL_locz00_4261;

													{	/* Eval/eval.scm 674 */
														obj_t BgL_ezd2363zd2_4270;

														{	/* Eval/eval.scm 674 */
															obj_t BgL_objz00_4271;

															{	/* Eval/eval.scm 674 */
																obj_t BgL_aux2758z00_4272;

																BgL_aux2758z00_4272 =
																	(((BgL_z62errorz62_bglt) COBJECT(
																			((BgL_z62errorz62_bglt) BgL_ez00_4255)))->
																	BgL_objz00);
																if (EPAIRP(BgL_aux2758z00_4272))
																	{	/* Eval/eval.scm 674 */
																		BgL_objz00_4271 = BgL_aux2758z00_4272;
																	}
																else
																	{
																		obj_t BgL_auxz00_6311;

																		BgL_auxz00_6311 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string2812z00zz__evalz00,
																			BINT(((long) 25758)),
																			BGl_string2946z00zz__evalz00,
																			BGl_string2864z00zz__evalz00,
																			BgL_aux2758z00_4272);
																		FAILURE(BgL_auxz00_6311, BFALSE, BFALSE);
															}}
															BgL_ezd2363zd2_4270 = CER(BgL_objz00_4271);
														}
														if (PAIRP(BgL_ezd2363zd2_4270))
															{	/* Eval/eval.scm 674 */
																obj_t BgL_cdrzd2369zd2_4273;

																BgL_cdrzd2369zd2_4273 =
																	CDR(BgL_ezd2363zd2_4270);
																if (
																	(CAR(BgL_ezd2363zd2_4270) ==
																		BGl_symbol2818z00zz__evalz00))
																	{	/* Eval/eval.scm 674 */
																		if (PAIRP(BgL_cdrzd2369zd2_4273))
																			{	/* Eval/eval.scm 674 */
																				obj_t BgL_cdrzd2373zd2_4274;

																				BgL_cdrzd2373zd2_4274 =
																					CDR(BgL_cdrzd2369zd2_4273);
																				if (PAIRP(BgL_cdrzd2373zd2_4274))
																					{	/* Eval/eval.scm 674 */
																						if (NULLP(CDR
																								(BgL_cdrzd2373zd2_4274)))
																							{	/* Eval/eval.scm 674 */
																								obj_t BgL_arg1770z00_4275;
																								obj_t BgL_arg1771z00_4276;

																								BgL_arg1770z00_4275 =
																									CAR(BgL_cdrzd2369zd2_4273);
																								BgL_arg1771z00_4276 =
																									CAR(BgL_cdrzd2373zd2_4274);
																								{
																									BgL_z62errorz62_bglt
																										BgL_auxz00_6332;
																									BgL_fnamez00_4260 =
																										BgL_arg1770z00_4275;
																									BgL_locz00_4261 =
																										BgL_arg1771z00_4276;
																									{	/* Eval/eval.scm 676 */
																										BgL_z62exceptionz62_bglt
																											BgL_duplicated1141z00_4262;
																										BgL_z62errorz62_bglt
																											BgL_new1139z00_4263;
																										if (BGl_isazf3zf3zz__objectz00(BgL_ez00_4255, BGl_z62exceptionz62zz__objectz00))
																											{	/* Eval/eval.scm 677 */
																												BgL_duplicated1141z00_4262
																													=
																													(
																													(BgL_z62exceptionz62_bglt)
																													BgL_ez00_4255);
																											}
																										else
																											{
																												obj_t BgL_auxz00_6336;

																												BgL_auxz00_6336 =
																													BGl_typezd2errorzd2zz__errorz00
																													(BGl_string2812z00zz__evalz00,
																													BINT(((long) 25834)),
																													BGl_string2945z00zz__evalz00,
																													BGl_string2881z00zz__evalz00,
																													BgL_ez00_4255);
																												FAILURE(BgL_auxz00_6336,
																													BFALSE, BFALSE);
																											}
																										{	/* Eval/eval.scm 677 */
																											BgL_z62errorz62_bglt
																												BgL_new1145z00_4264;
																											BgL_new1145z00_4264 =
																												((BgL_z62errorz62_bglt)
																												BOBJECT(GC_MALLOC(sizeof
																														(struct
																															BgL_z62errorz62_bgl))));
																											{	/* Eval/eval.scm 677 */
																												long
																													BgL_arg1775z00_4265;
																												{	/* Eval/eval.scm 677 */
																													long
																														BgL_res2389z00_4266;
																													BgL_res2389z00_4266 =
																														BGL_CLASS_INDEX
																														(BGl_z62errorz62zz__objectz00);
																													BgL_arg1775z00_4265 =
																														BgL_res2389z00_4266;
																												}
																												BGL_OBJECT_CLASS_NUM_SET
																													(((BgL_objectz00_bglt)
																														BgL_new1145z00_4264),
																													BgL_arg1775z00_4265);
																											}
																											BgL_new1139z00_4263 =
																												BgL_new1145z00_4264;
																										}
																										((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1139z00_4263)))->BgL_fnamez00) = ((obj_t) BgL_fnamez00_4260), BUNSPEC);
																										((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1139z00_4263)))->BgL_locationz00) = ((obj_t) BgL_locz00_4261), BUNSPEC);
																										((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1139z00_4263)))->BgL_stackz00) = ((obj_t) (((BgL_z62exceptionz62_bglt) COBJECT(BgL_duplicated1141z00_4262))->BgL_stackz00)), BUNSPEC);
																										{
																											obj_t BgL_auxz00_6351;

																											{	/* Eval/eval.scm 678 */
																												BgL_z62errorz62_bglt
																													BgL_tmp1142z00_4267;
																												if (BGl_isazf3zf3zz__objectz00(((obj_t) BgL_duplicated1141z00_4262), BGl_z62errorz62zz__objectz00))
																													{	/* Eval/eval.scm 678 */
																														BgL_tmp1142z00_4267
																															=
																															(
																															(BgL_z62errorz62_bglt)
																															BgL_duplicated1141z00_4262);
																													}
																												else
																													{
																														obj_t
																															BgL_auxz00_6356;
																														BgL_auxz00_6356 =
																															BGl_typezd2errorzd2zz__errorz00
																															(BGl_string2812z00zz__evalz00,
																															BINT(((long)
																																	25857)),
																															BGl_string2945z00zz__evalz00,
																															BGl_string2845z00zz__evalz00,
																															((obj_t)
																																BgL_duplicated1141z00_4262));
																														FAILURE
																															(BgL_auxz00_6356,
																															BFALSE, BFALSE);
																													}
																												BgL_auxz00_6351 =
																													(((BgL_z62errorz62_bglt) COBJECT(BgL_tmp1142z00_4267))->BgL_procz00);
																											}
																											((((BgL_z62errorz62_bglt)
																														COBJECT
																														(BgL_new1139z00_4263))->
																													BgL_procz00) =
																												((obj_t)
																													BgL_auxz00_6351),
																												BUNSPEC);
																										}
																										{
																											obj_t BgL_auxz00_6363;

																											{	/* Eval/eval.scm 678 */
																												BgL_z62errorz62_bglt
																													BgL_tmp1143z00_4268;
																												if (BGl_isazf3zf3zz__objectz00(((obj_t) BgL_duplicated1141z00_4262), BGl_z62errorz62zz__objectz00))
																													{	/* Eval/eval.scm 678 */
																														BgL_tmp1143z00_4268
																															=
																															(
																															(BgL_z62errorz62_bglt)
																															BgL_duplicated1141z00_4262);
																													}
																												else
																													{
																														obj_t
																															BgL_auxz00_6368;
																														BgL_auxz00_6368 =
																															BGl_typezd2errorzd2zz__errorz00
																															(BGl_string2812z00zz__evalz00,
																															BINT(((long)
																																	25857)),
																															BGl_string2945z00zz__evalz00,
																															BGl_string2845z00zz__evalz00,
																															((obj_t)
																																BgL_duplicated1141z00_4262));
																														FAILURE
																															(BgL_auxz00_6368,
																															BFALSE, BFALSE);
																													}
																												BgL_auxz00_6363 =
																													(((BgL_z62errorz62_bglt) COBJECT(BgL_tmp1143z00_4268))->BgL_msgz00);
																											}
																											((((BgL_z62errorz62_bglt)
																														COBJECT
																														(BgL_new1139z00_4263))->
																													BgL_msgz00) =
																												((obj_t)
																													BgL_auxz00_6363),
																												BUNSPEC);
																										}
																										{
																											obj_t BgL_auxz00_6375;

																											{	/* Eval/eval.scm 678 */
																												BgL_z62errorz62_bglt
																													BgL_tmp1144z00_4269;
																												if (BGl_isazf3zf3zz__objectz00(((obj_t) BgL_duplicated1141z00_4262), BGl_z62errorz62zz__objectz00))
																													{	/* Eval/eval.scm 678 */
																														BgL_tmp1144z00_4269
																															=
																															(
																															(BgL_z62errorz62_bglt)
																															BgL_duplicated1141z00_4262);
																													}
																												else
																													{
																														obj_t
																															BgL_auxz00_6380;
																														BgL_auxz00_6380 =
																															BGl_typezd2errorzd2zz__errorz00
																															(BGl_string2812z00zz__evalz00,
																															BINT(((long)
																																	25857)),
																															BGl_string2945z00zz__evalz00,
																															BGl_string2845z00zz__evalz00,
																															((obj_t)
																																BgL_duplicated1141z00_4262));
																														FAILURE
																															(BgL_auxz00_6380,
																															BFALSE, BFALSE);
																													}
																												BgL_auxz00_6375 =
																													(((BgL_z62errorz62_bglt) COBJECT(BgL_tmp1144z00_4269))->BgL_objz00);
																											}
																											((((BgL_z62errorz62_bglt)
																														COBJECT
																														(BgL_new1139z00_4263))->
																													BgL_objz00) =
																												((obj_t)
																													BgL_auxz00_6375),
																												BUNSPEC);
																										}
																										BgL_auxz00_6332 =
																											BgL_new1139z00_4263;
																									}
																									BgL_nez00_4256 =
																										((obj_t) BgL_auxz00_6332);
																							}}
																						else
																							{	/* Eval/eval.scm 674 */
																								BgL_nez00_4256 = BgL_ez00_4255;
																							}
																					}
																				else
																					{	/* Eval/eval.scm 674 */
																						BgL_nez00_4256 = BgL_ez00_4255;
																					}
																			}
																		else
																			{	/* Eval/eval.scm 674 */
																				BgL_nez00_4256 = BgL_ez00_4255;
																			}
																	}
																else
																	{	/* Eval/eval.scm 674 */
																		BgL_nez00_4256 = BgL_ez00_4255;
																	}
															}
														else
															{	/* Eval/eval.scm 674 */
																BgL_nez00_4256 = BgL_ez00_4255;
															}
													}
												}
											else
												{	/* Eval/eval.scm 673 */
													BgL_nez00_4256 = BgL_ez00_4255;
												}
										}
									else
										{	/* Eval/eval.scm 671 */
											BgL_nez00_4256 = BgL_ez00_4255;
										}
									BGl_exceptionzd2notifyzd2zz__objectz00(BgL_nez00_4256);
									return BGl_raisez00zz__errorz00(BgL_nez00_4256);
								}
							}
						else
							{	/* Eval/eval.scm 669 */
								return CELL_REF(BgL_res1135z00_4253);
							}
					}
				}
			}
		}

	}



/* <@exit:1752>~0 */
	obj_t BGl_zc3z04exitza31752ze3ze70z60zz__evalz00(obj_t BgL_ez00_3804,
		obj_t BgL_xz00_3803, obj_t BgL_expdzd2evalzd2_3802,
		obj_t BgL_res1135z00_3801)
	{
		{	/* Eval/eval.scm 669 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1149z00_1951;

			if (SET_EXIT(BgL_an_exit1149z00_1951))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1149z00_1951 = (void *) jmpbuf;
					{	/* Eval/eval.scm 669 */

						PUSH_EXIT(BgL_an_exit1149z00_1951, ((long) 1));
						{	/* Eval/eval.scm 669 */
							obj_t BgL_an_exitd1150z00_1952;

							BgL_an_exitd1150z00_1952 = ((obj_t) (&exitd));
							{	/* Eval/eval.scm 669 */
								bool_t BgL_res1152z00_1955;

								{	/* Eval/eval.scm 669 */
									obj_t BgL_ohs1133z00_1956;

									BgL_ohs1133z00_1956 = BGL_ERROR_HANDLER_GET();
									{	/* Eval/eval.scm 669 */
										obj_t BgL_exitd1146z00_1957;

										BgL_exitd1146z00_1957 = ((obj_t) (&exitd));
										{
											obj_t BgL_zc3z04anonymousza31757ze3z87_3750;

											BgL_zc3z04anonymousza31757ze3z87_3750 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31757ze3ze5zz__evalz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31757ze3z87_3750,
												(int) (((long) 0)), BgL_ohs1133z00_1956);
											BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
												(BgL_exitd1146z00_1957,
												BgL_zc3z04anonymousza31757ze3z87_3750);
											{	/* Eval/eval.scm 669 */
												bool_t BgL_tmp1148z00_1959;

												{	/* Eval/eval.scm 669 */
													obj_t BgL_arg1754z00_1960;

													{	/* Eval/eval.scm 669 */
														obj_t BgL_zc3z04anonymousza31756ze3z87_3751;

														BgL_zc3z04anonymousza31756ze3z87_3751 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31756ze3ze5zz__evalz00,
															(int) (((long) 1)), (int) (((long) 2)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31756ze3z87_3751,
															(int) (((long) 0)),
															((obj_t) BgL_res1135z00_3801));
														PROCEDURE_SET(BgL_zc3z04anonymousza31756ze3z87_3751,
															(int) (((long) 1)), BgL_an_exitd1150z00_1952);
														BgL_arg1754z00_1960 =
															MAKE_YOUNG_PAIR
															(BgL_zc3z04anonymousza31756ze3z87_3751,
															BgL_ohs1133z00_1956);
													}
													BGL_ERROR_HANDLER_SET(BgL_arg1754z00_1960);
													BUNSPEC;
												}
												{	/* Eval/eval.scm 669 */
													obj_t BgL_auxz00_3761;

													{	/* Eval/eval.scm 685 */
														obj_t BgL_tmpfunz00_6414;

														{	/* Eval/eval.scm 685 */
															bool_t BgL_test2761z00_4111;

															BgL_test2761z00_4111 =
																PROCEDUREP(BgL_expdzd2evalzd2_3802);
															if (BgL_test2761z00_4111)
																{	/* Eval/eval.scm 685 */
																	BgL_tmpfunz00_6414 = BgL_expdzd2evalzd2_3802;
																}
															else
																{
																	obj_t BgL_auxz00_6417;

																	BgL_auxz00_6417 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2812z00zz__evalz00,
																		BINT(((long) 25980)),
																		BGl_string2947z00zz__evalz00,
																		BGl_string2814z00zz__evalz00,
																		BgL_expdzd2evalzd2_3802);
																	FAILURE(BgL_auxz00_6417, BFALSE, BFALSE);
														}}
														BgL_auxz00_3761 =
															PROCEDURE_ENTRY(BgL_tmpfunz00_6414)
															(BgL_expdzd2evalzd2_3802, BgL_xz00_3803,
															BgL_ez00_3804, BEOA);
													}
													CELL_SET(BgL_res1135z00_3801, BgL_auxz00_3761);
												}
												BgL_tmp1148z00_1959 = ((bool_t) 0);
												BGl_exitdzd2popzd2protectz12z12zz__bexitz00
													(BgL_exitd1146z00_1957);
												BGL_ERROR_HANDLER_SET(BgL_ohs1133z00_1956);
												BUNSPEC;
												BgL_res1152z00_1955 = BgL_tmp1148z00_1959;
								}}}}
								POP_EXIT();
								return BBOOL(BgL_res1152z00_1955);
							}
						}
					}
				}
		}

	}



/* &<@anonymous:1756> */
	obj_t BGl_z62zc3z04anonymousza31756ze3ze5zz__evalz00(obj_t BgL_envz00_3763,
		obj_t BgL_ez00_3766)
	{
		{	/* Eval/eval.scm 669 */
			{	/* Eval/eval.scm 669 */
				obj_t BgL_res1135z00_3764;
				obj_t BgL_an_exitd1150z00_3765;

				BgL_res1135z00_3764 =
					PROCEDURE_REF(BgL_envz00_3763, (int) (((long) 0)));
				BgL_an_exitd1150z00_3765 =
					PROCEDURE_REF(BgL_envz00_3763, (int) (((long) 1)));
				CELL_SET(BgL_res1135z00_3764, BgL_ez00_3766);
				return
					BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1150z00_3765, BTRUE);
			}
		}

	}



/* &<@anonymous:1757> */
	obj_t BGl_z62zc3z04anonymousza31757ze3ze5zz__evalz00(obj_t BgL_envz00_3768)
	{
		{	/* Eval/eval.scm 669 */
			{
				obj_t BgL_ohs1133z00_3769;

				BgL_ohs1133z00_3769 =
					PROCEDURE_REF(BgL_envz00_3768, (int) (((long) 0)));
				BGL_ERROR_HANDLER_SET(BgL_ohs1133z00_3769);
				return BUNSPEC;
			}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zz__evalz00(obj_t BgL_locz00_3797, obj_t BgL_idz00_3796,
		obj_t BgL_fnamez00_3795, obj_t BgL_patz00_2067, obj_t BgL_argz00_2068,
		obj_t BgL_bindingsz00_2069)
	{
		{	/* Eval/eval.scm 700 */
		BGl_loopze70ze7zz__evalz00:
			if (NULLP(BgL_patz00_2067))
				{	/* Eval/eval.scm 705 */
					obj_t BgL_arg1835z00_2072;

					{	/* Eval/eval.scm 705 */
						obj_t BgL_arg1836z00_2073;
						obj_t BgL_arg1838z00_2074;

						{	/* Eval/eval.scm 705 */

							{	/* Eval/eval.scm 705 */

								BgL_arg1836z00_2073 =
									BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
							}
						}
						{	/* Eval/eval.scm 706 */
							obj_t BgL_arg1840z00_2076;

							{	/* Eval/eval.scm 706 */
								obj_t BgL_arg1841z00_2077;

								{	/* Eval/eval.scm 706 */
									obj_t BgL_arg1842z00_2078;
									obj_t BgL_arg1845z00_2079;

									{	/* Eval/eval.scm 706 */
										obj_t BgL_arg1846z00_2080;

										{	/* Eval/eval.scm 706 */
											obj_t BgL_arg1847z00_2081;

											{	/* Eval/eval.scm 706 */
												obj_t BgL_arg1848z00_2082;

												BgL_arg1848z00_2082 =
													MAKE_YOUNG_PAIR(BgL_argz00_2068, BNIL);
												BgL_arg1847z00_2081 =
													MAKE_YOUNG_PAIR(BGl_symbol2948z00zz__evalz00,
													BgL_arg1848z00_2082);
											}
											BgL_arg1846z00_2080 =
												MAKE_YOUNG_PAIR(BgL_arg1847z00_2081, BNIL);
										}
										BgL_arg1842z00_2078 =
											MAKE_YOUNG_PAIR(BGl_symbol2950z00zz__evalz00,
											BgL_arg1846z00_2080);
									}
									{	/* Eval/eval.scm 707 */
										obj_t BgL_arg1850z00_2083;
										obj_t BgL_arg1851z00_2084;

										BgL_arg1850z00_2083 =
											BGl_errze70ze7zz__evalz00(BgL_locz00_3797, BgL_idz00_3796,
											BgL_fnamez00_3795, BGl_string2952z00zz__evalz00,
											BgL_argz00_2068);
										{	/* Eval/eval.scm 708 */
											obj_t BgL_arg1852z00_2085;

											{	/* Eval/eval.scm 708 */
												obj_t BgL_arg1853z00_2086;

												BgL_arg1853z00_2086 = MAKE_YOUNG_PAIR(BNIL, BNIL);
												BgL_arg1852z00_2085 =
													MAKE_YOUNG_PAIR(BGl_symbol2939z00zz__evalz00,
													BgL_arg1853z00_2086);
											}
											BgL_arg1851z00_2084 =
												MAKE_YOUNG_PAIR(BgL_arg1852z00_2085, BNIL);
										}
										BgL_arg1845z00_2079 =
											MAKE_YOUNG_PAIR(BgL_arg1850z00_2083, BgL_arg1851z00_2084);
									}
									BgL_arg1841z00_2077 =
										MAKE_YOUNG_PAIR(BgL_arg1842z00_2078, BgL_arg1845z00_2079);
								}
								BgL_arg1840z00_2076 =
									MAKE_YOUNG_PAIR(BGl_symbol2953z00zz__evalz00,
									BgL_arg1841z00_2077);
							}
							BgL_arg1838z00_2074 = MAKE_YOUNG_PAIR(BgL_arg1840z00_2076, BNIL);
						}
						BgL_arg1835z00_2072 =
							MAKE_YOUNG_PAIR(BgL_arg1836z00_2073, BgL_arg1838z00_2074);
					}
					return MAKE_YOUNG_PAIR(BgL_arg1835z00_2072, BgL_bindingsz00_2069);
				}
			else
				{	/* Eval/eval.scm 704 */
					if (SYMBOLP(BgL_patz00_2067))
						{	/* Eval/eval.scm 711 */
							obj_t BgL_arg1855z00_2088;

							{	/* Eval/eval.scm 711 */
								obj_t BgL_arg1856z00_2089;

								BgL_arg1856z00_2089 = MAKE_YOUNG_PAIR(BgL_argz00_2068, BNIL);
								BgL_arg1855z00_2088 =
									MAKE_YOUNG_PAIR(BgL_patz00_2067, BgL_arg1856z00_2089);
							}
							return MAKE_YOUNG_PAIR(BgL_arg1855z00_2088, BgL_bindingsz00_2069);
						}
					else
						{	/* Eval/eval.scm 710 */
							if (PAIRP(BgL_patz00_2067))
								{	/* Eval/eval.scm 713 */
									obj_t BgL_arg1858z00_2091;
									obj_t BgL_arg1859z00_2092;
									obj_t BgL_arg1861z00_2093;

									BgL_arg1858z00_2091 = CAR(BgL_patz00_2067);
									{	/* Eval/eval.scm 714 */
										obj_t BgL_arg1862z00_2094;

										{	/* Eval/eval.scm 714 */
											obj_t BgL_arg1863z00_2095;
											obj_t BgL_arg1865z00_2096;

											{	/* Eval/eval.scm 714 */
												obj_t BgL_arg1866z00_2097;

												BgL_arg1866z00_2097 =
													MAKE_YOUNG_PAIR(BgL_argz00_2068, BNIL);
												BgL_arg1863z00_2095 =
													MAKE_YOUNG_PAIR(BGl_symbol2955z00zz__evalz00,
													BgL_arg1866z00_2097);
											}
											{	/* Eval/eval.scm 715 */
												obj_t BgL_arg1868z00_2098;
												obj_t BgL_arg1870z00_2099;

												{	/* Eval/eval.scm 715 */
													obj_t BgL_arg1871z00_2100;

													BgL_arg1871z00_2100 =
														MAKE_YOUNG_PAIR(BgL_argz00_2068, BNIL);
													BgL_arg1868z00_2098 =
														MAKE_YOUNG_PAIR(BGl_symbol2957z00zz__evalz00,
														BgL_arg1871z00_2100);
												}
												BgL_arg1870z00_2099 =
													MAKE_YOUNG_PAIR(BGl_errze70ze7zz__evalz00
													(BgL_locz00_3797, BgL_idz00_3796, BgL_fnamez00_3795,
														BGl_string2959z00zz__evalz00, CAR(BgL_patz00_2067)),
													BNIL);
												BgL_arg1865z00_2096 =
													MAKE_YOUNG_PAIR(BgL_arg1868z00_2098,
													BgL_arg1870z00_2099);
											}
											BgL_arg1862z00_2094 =
												MAKE_YOUNG_PAIR(BgL_arg1863z00_2095,
												BgL_arg1865z00_2096);
										}
										BgL_arg1859z00_2092 =
											MAKE_YOUNG_PAIR(BGl_symbol2953z00zz__evalz00,
											BgL_arg1862z00_2094);
									}
									{	/* Eval/eval.scm 717 */
										obj_t BgL_arg1874z00_2103;
										obj_t BgL_arg1876z00_2104;

										BgL_arg1874z00_2103 = CDR(BgL_patz00_2067);
										{	/* Eval/eval.scm 717 */
											obj_t BgL_arg1877z00_2105;

											BgL_arg1877z00_2105 =
												MAKE_YOUNG_PAIR(BgL_argz00_2068, BNIL);
											BgL_arg1876z00_2104 =
												MAKE_YOUNG_PAIR(BGl_symbol2910z00zz__evalz00,
												BgL_arg1877z00_2105);
										}
										BgL_arg1861z00_2093 =
											BGl_loopze70ze7zz__evalz00(BgL_locz00_3797,
											BgL_idz00_3796, BgL_fnamez00_3795, BgL_arg1874z00_2103,
											BgL_arg1876z00_2104, BgL_bindingsz00_2069);
									}
									{
										obj_t BgL_bindingsz00_6474;
										obj_t BgL_argz00_6473;
										obj_t BgL_patz00_6472;

										BgL_patz00_6472 = BgL_arg1858z00_2091;
										BgL_argz00_6473 = BgL_arg1859z00_2092;
										BgL_bindingsz00_6474 = BgL_arg1861z00_2093;
										BgL_bindingsz00_2069 = BgL_bindingsz00_6474;
										BgL_argz00_2068 = BgL_argz00_6473;
										BgL_patz00_2067 = BgL_patz00_6472;
										goto BGl_loopze70ze7zz__evalz00;
									}
								}
							else
								{	/* Eval/eval.scm 719 */
									obj_t BgL_procz00_3205;

									BgL_procz00_3205 = BGl_list2960z00zz__evalz00;
									{	/* Eval/eval.scm 543 */
										bool_t BgL_test3468z00_6475;

										{	/* Eval/eval.scm 543 */
											bool_t BgL_res2411z00_3208;

											BgL_res2411z00_3208 = EPAIRP(BgL_patz00_2067);
											BgL_test3468z00_6475 = BgL_res2411z00_3208;
										}
										if (BgL_test3468z00_6475)
											{	/* Eval/eval.scm 544 */
												obj_t BgL_arg1523z00_3207;

												{	/* Eval/eval.scm 544 */
													obj_t BgL_objz00_3209;

													if (EPAIRP(BgL_patz00_2067))
														{	/* Eval/eval.scm 544 */
															BgL_objz00_3209 = BgL_patz00_2067;
														}
													else
														{
															obj_t BgL_auxz00_6479;

															BgL_auxz00_6479 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2812z00zz__evalz00,
																BINT(((long) 21704)),
																BGl_string2965z00zz__evalz00,
																BGl_string2864z00zz__evalz00, BgL_patz00_2067);
															FAILURE(BgL_auxz00_6479, BFALSE, BFALSE);
														}
													BgL_arg1523z00_3207 = CER(BgL_objz00_3209);
												}
												return
													BGl_everrorz00zz__everrorz00(BgL_arg1523z00_3207,
													BgL_procz00_3205, BGl_string2966z00zz__evalz00,
													BgL_patz00_2067);
											}
										else
											{	/* Eval/eval.scm 543 */
												return
													BGl_errorz00zz__errorz00(BgL_procz00_3205,
													BGl_string2966z00zz__evalz00, BgL_patz00_2067);
											}
									}
								}
						}
				}
		}

	}



/* err~0 */
	obj_t BGl_errze70ze7zz__evalz00(obj_t BgL_locz00_3800, obj_t BgL_idz00_3799,
		obj_t BgL_fnamez00_3798, obj_t BgL_msgz00_2107, obj_t BgL_objz00_2108)
	{
		{	/* Eval/eval.scm 699 */
			{	/* Eval/eval.scm 697 */
				obj_t BgL_arg1879z00_2110;

				{	/* Eval/eval.scm 697 */
					obj_t BgL_arg1881z00_2111;
					obj_t BgL_arg1882z00_2112;

					{	/* Eval/eval.scm 697 */
						obj_t BgL_arg1883z00_2113;

						BgL_arg1883z00_2113 = MAKE_YOUNG_PAIR(BgL_fnamez00_3798, BNIL);
						BgL_arg1881z00_2111 =
							MAKE_YOUNG_PAIR(BGl_symbol2967z00zz__evalz00,
							BgL_arg1883z00_2113);
					}
					{	/* Eval/eval.scm 698 */
						obj_t BgL_arg1884z00_2114;
						obj_t BgL_arg1885z00_2115;

						{	/* Eval/eval.scm 698 */
							obj_t BgL_arg1886z00_2116;

							{	/* Eval/eval.scm 698 */
								obj_t BgL_arg1887z00_2117;
								obj_t BgL_arg1888z00_2118;

								{	/* Eval/eval.scm 698 */
									obj_t BgL_arg1889z00_2119;

									BgL_arg1889z00_2119 = MAKE_YOUNG_PAIR(BgL_idz00_3799, BNIL);
									BgL_arg1887z00_2117 =
										MAKE_YOUNG_PAIR(BGl_symbol2939z00zz__evalz00,
										BgL_arg1889z00_2119);
								}
								{	/* Eval/eval.scm 698 */
									obj_t BgL_arg1891z00_2120;

									{	/* Eval/eval.scm 698 */
										obj_t BgL_arg1892z00_2121;
										obj_t BgL_arg1893z00_2122;

										{	/* Eval/eval.scm 698 */
											obj_t BgL_arg1895z00_2123;

											BgL_arg1895z00_2123 =
												MAKE_YOUNG_PAIR(BgL_objz00_2108, BNIL);
											BgL_arg1892z00_2121 =
												MAKE_YOUNG_PAIR(BGl_symbol2939z00zz__evalz00,
												BgL_arg1895z00_2123);
										}
										{	/* Eval/eval.scm 698 */
											obj_t BgL_arg1896z00_2124;

											BgL_arg1896z00_2124 =
												MAKE_YOUNG_PAIR(BgL_locz00_3800, BNIL);
											BgL_arg1893z00_2122 =
												MAKE_YOUNG_PAIR(BgL_fnamez00_3798, BgL_arg1896z00_2124);
										}
										BgL_arg1891z00_2120 =
											MAKE_YOUNG_PAIR(BgL_arg1892z00_2121, BgL_arg1893z00_2122);
									}
									BgL_arg1888z00_2118 =
										MAKE_YOUNG_PAIR(BgL_msgz00_2107, BgL_arg1891z00_2120);
								}
								BgL_arg1886z00_2116 =
									MAKE_YOUNG_PAIR(BgL_arg1887z00_2117, BgL_arg1888z00_2118);
							}
							BgL_arg1884z00_2114 =
								MAKE_YOUNG_PAIR(BGl_symbol2969z00zz__evalz00,
								BgL_arg1886z00_2116);
						}
						{	/* Eval/eval.scm 699 */
							obj_t BgL_arg1897z00_2125;

							{	/* Eval/eval.scm 699 */
								obj_t BgL_arg1898z00_2126;

								{	/* Eval/eval.scm 699 */
									obj_t BgL_arg1901z00_2127;
									obj_t BgL_arg1902z00_2128;

									{	/* Eval/eval.scm 699 */
										obj_t BgL_arg1903z00_2129;

										BgL_arg1903z00_2129 = MAKE_YOUNG_PAIR(BgL_idz00_3799, BNIL);
										BgL_arg1901z00_2127 =
											MAKE_YOUNG_PAIR(BGl_symbol2939z00zz__evalz00,
											BgL_arg1903z00_2129);
									}
									{	/* Eval/eval.scm 699 */
										obj_t BgL_arg1904z00_2130;

										{	/* Eval/eval.scm 699 */
											obj_t BgL_arg1905z00_2131;

											{	/* Eval/eval.scm 699 */
												obj_t BgL_arg1906z00_2132;

												BgL_arg1906z00_2132 =
													MAKE_YOUNG_PAIR(BgL_objz00_2108, BNIL);
												BgL_arg1905z00_2131 =
													MAKE_YOUNG_PAIR(BGl_symbol2939z00zz__evalz00,
													BgL_arg1906z00_2132);
											}
											BgL_arg1904z00_2130 =
												MAKE_YOUNG_PAIR(BgL_arg1905z00_2131, BNIL);
										}
										BgL_arg1902z00_2128 =
											MAKE_YOUNG_PAIR(BgL_msgz00_2107, BgL_arg1904z00_2130);
									}
									BgL_arg1898z00_2126 =
										MAKE_YOUNG_PAIR(BgL_arg1901z00_2127, BgL_arg1902z00_2128);
								}
								BgL_arg1897z00_2125 =
									MAKE_YOUNG_PAIR(BGl_symbol2971z00zz__evalz00,
									BgL_arg1898z00_2126);
							}
							BgL_arg1885z00_2115 = MAKE_YOUNG_PAIR(BgL_arg1897z00_2125, BNIL);
						}
						BgL_arg1882z00_2112 =
							MAKE_YOUNG_PAIR(BgL_arg1884z00_2114, BgL_arg1885z00_2115);
					}
					BgL_arg1879z00_2110 =
						MAKE_YOUNG_PAIR(BgL_arg1881z00_2111, BgL_arg1882z00_2112);
				}
				return
					MAKE_YOUNG_PAIR(BGl_symbol2953z00zz__evalz00, BgL_arg1879z00_2110);
			}
		}

	}



/* expand-define-pattern */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2definezd2patternz00zz__evalz00(obj_t
		BgL_xz00_62)
	{
		{	/* Eval/eval.scm 724 */
			if (PAIRP(BgL_xz00_62))
				{	/* Eval/eval.scm 725 */
					obj_t BgL_cdrzd2389zd2_2141;

					BgL_cdrzd2389zd2_2141 = CDR(BgL_xz00_62);
					if (PAIRP(BgL_cdrzd2389zd2_2141))
						{	/* Eval/eval.scm 725 */
							obj_t BgL_cdrzd2394zd2_2143;

							BgL_cdrzd2394zd2_2143 = CDR(BgL_cdrzd2389zd2_2141);
							if (PAIRP(BgL_cdrzd2394zd2_2143))
								{	/* Eval/eval.scm 725 */
									obj_t BgL_cdrzd2399zd2_2145;

									BgL_cdrzd2399zd2_2145 = CDR(BgL_cdrzd2394zd2_2143);
									if (PAIRP(BgL_cdrzd2399zd2_2145))
										{	/* Eval/eval.scm 725 */
											if (NULLP(CDR(BgL_cdrzd2399zd2_2145)))
												{	/* Eval/eval.scm 725 */
													obj_t BgL_arg1913z00_2149;
													obj_t BgL_arg1914z00_2150;
													obj_t BgL_arg1915z00_2151;

													BgL_arg1913z00_2149 = CAR(BgL_cdrzd2389zd2_2141);
													BgL_arg1914z00_2150 = CAR(BgL_cdrzd2394zd2_2143);
													BgL_arg1915z00_2151 = CAR(BgL_cdrzd2399zd2_2145);
													{	/* Eval/eval.scm 727 */
														obj_t BgL_arg1917z00_3239;

														{	/* Eval/eval.scm 727 */
															obj_t BgL_arg1918z00_3240;

															{	/* Eval/eval.scm 727 */
																obj_t BgL_arg1919z00_3241;

																{	/* Eval/eval.scm 727 */
																	obj_t BgL_arg1920z00_3242;

																	BgL_arg1920z00_3242 =
																		MAKE_YOUNG_PAIR(BgL_arg1915z00_2151, BNIL);
																	BgL_arg1919z00_3241 =
																		MAKE_YOUNG_PAIR(BgL_arg1914z00_2150,
																		BgL_arg1920z00_3242);
																}
																BgL_arg1918z00_3240 =
																	MAKE_YOUNG_PAIR(BGl_symbol2923z00zz__evalz00,
																	BgL_arg1919z00_3241);
															}
															{	/* Eval/eval.scm 84 */
																obj_t BgL_envz00_3244;

																BgL_envz00_3244 =
																	BGl_defaultzd2environmentzd2zz__evalz00();
																{	/* Eval/eval.scm 84 */

																	{	/* Eval/eval.scm 178 */
																		obj_t BgL_evaluatez00_3245;

																		if (PROCEDUREP
																			(BGl_defaultzd2evaluatezd2zz__evalz00))
																			{	/* Eval/eval.scm 178 */
																				BgL_evaluatez00_3245 =
																					BGl_defaultzd2evaluatezd2zz__evalz00;
																			}
																		else
																			{	/* Eval/eval.scm 178 */
																				BgL_evaluatez00_3245 =
																					BGl_bytezd2codezd2evaluatezd2envzd2zz__evalz00;
																			}
																		{	/* Eval/eval.scm 181 */
																			obj_t BgL_auxz00_6533;

																			if (PROCEDUREP(BgL_evaluatez00_3245))
																				{	/* Eval/eval.scm 181 */
																					BgL_auxz00_6533 =
																						BgL_evaluatez00_3245;
																				}
																			else
																				{
																					obj_t BgL_auxz00_6536;

																					BgL_auxz00_6536 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string2812z00zz__evalz00,
																						BINT(((long) 6972)),
																						BGl_string2973z00zz__evalz00,
																						BGl_string2814z00zz__evalz00,
																						BgL_evaluatez00_3245);
																					FAILURE(BgL_auxz00_6536, BFALSE,
																						BFALSE);
																				}
																			BgL_arg1917z00_3239 =
																				BGl_evalzf2expanderzf2zz__evalz00
																				(BgL_arg1918z00_3240, BgL_envz00_3244,
																				BGl_expandz12zd2envzc0zz__expandz00,
																				BgL_auxz00_6533);
														}}}}}
														BGl_extendzd2rzd2macrozd2envzd2zz__match_normaliza7eza7
															(BgL_arg1913z00_2149, BgL_arg1917z00_3239);
													}
													return BGl_list2974z00zz__evalz00;
												}
											else
												{	/* Eval/eval.scm 730 */
													obj_t BgL_procz00_3249;

													BgL_procz00_3249 = BGl_symbol2977z00zz__evalz00;
													{	/* Eval/eval.scm 543 */
														bool_t BgL_test3477z00_6542;

														{	/* Eval/eval.scm 543 */
															bool_t BgL_res2420z00_3252;

															BgL_res2420z00_3252 = EPAIRP(BgL_xz00_62);
															BgL_test3477z00_6542 = BgL_res2420z00_3252;
														}
														if (BgL_test3477z00_6542)
															{	/* Eval/eval.scm 544 */
																obj_t BgL_arg1523z00_3251;

																{	/* Eval/eval.scm 544 */
																	obj_t BgL_objz00_3253;

																	if (EPAIRP(BgL_xz00_62))
																		{	/* Eval/eval.scm 544 */
																			BgL_objz00_3253 = BgL_xz00_62;
																		}
																	else
																		{
																			obj_t BgL_auxz00_6546;

																			BgL_auxz00_6546 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string2812z00zz__evalz00,
																				BINT(((long) 21704)),
																				BGl_string2973z00zz__evalz00,
																				BGl_string2864z00zz__evalz00,
																				BgL_xz00_62);
																			FAILURE(BgL_auxz00_6546, BFALSE, BFALSE);
																		}
																	BgL_arg1523z00_3251 = CER(BgL_objz00_3253);
																}
																return
																	BGl_everrorz00zz__everrorz00
																	(BgL_arg1523z00_3251, BgL_procz00_3249,
																	BGl_string2978z00zz__evalz00, BgL_xz00_62);
															}
														else
															{	/* Eval/eval.scm 543 */
																return
																	BGl_errorz00zz__errorz00(BgL_procz00_3249,
																	BGl_string2978z00zz__evalz00, BgL_xz00_62);
															}
													}
												}
										}
									else
										{	/* Eval/eval.scm 730 */
											obj_t BgL_procz00_3254;

											BgL_procz00_3254 = BGl_symbol2977z00zz__evalz00;
											{	/* Eval/eval.scm 543 */
												bool_t BgL_test3479z00_6553;

												{	/* Eval/eval.scm 543 */
													bool_t BgL_res2421z00_3257;

													BgL_res2421z00_3257 = EPAIRP(BgL_xz00_62);
													BgL_test3479z00_6553 = BgL_res2421z00_3257;
												}
												if (BgL_test3479z00_6553)
													{	/* Eval/eval.scm 544 */
														obj_t BgL_arg1523z00_3256;

														{	/* Eval/eval.scm 544 */
															obj_t BgL_objz00_3258;

															if (EPAIRP(BgL_xz00_62))
																{	/* Eval/eval.scm 544 */
																	BgL_objz00_3258 = BgL_xz00_62;
																}
															else
																{
																	obj_t BgL_auxz00_6557;

																	BgL_auxz00_6557 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2812z00zz__evalz00,
																		BINT(((long) 21704)),
																		BGl_string2973z00zz__evalz00,
																		BGl_string2864z00zz__evalz00, BgL_xz00_62);
																	FAILURE(BgL_auxz00_6557, BFALSE, BFALSE);
																}
															BgL_arg1523z00_3256 = CER(BgL_objz00_3258);
														}
														return
															BGl_everrorz00zz__everrorz00(BgL_arg1523z00_3256,
															BgL_procz00_3254, BGl_string2978z00zz__evalz00,
															BgL_xz00_62);
													}
												else
													{	/* Eval/eval.scm 543 */
														return
															BGl_errorz00zz__errorz00(BgL_procz00_3254,
															BGl_string2978z00zz__evalz00, BgL_xz00_62);
													}
											}
										}
								}
							else
								{	/* Eval/eval.scm 730 */
									obj_t BgL_procz00_3259;

									BgL_procz00_3259 = BGl_symbol2977z00zz__evalz00;
									{	/* Eval/eval.scm 543 */
										bool_t BgL_test3481z00_6564;

										{	/* Eval/eval.scm 543 */
											bool_t BgL_res2422z00_3262;

											BgL_res2422z00_3262 = EPAIRP(BgL_xz00_62);
											BgL_test3481z00_6564 = BgL_res2422z00_3262;
										}
										if (BgL_test3481z00_6564)
											{	/* Eval/eval.scm 544 */
												obj_t BgL_arg1523z00_3261;

												{	/* Eval/eval.scm 544 */
													obj_t BgL_objz00_3263;

													if (EPAIRP(BgL_xz00_62))
														{	/* Eval/eval.scm 544 */
															BgL_objz00_3263 = BgL_xz00_62;
														}
													else
														{
															obj_t BgL_auxz00_6568;

															BgL_auxz00_6568 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2812z00zz__evalz00,
																BINT(((long) 21704)),
																BGl_string2973z00zz__evalz00,
																BGl_string2864z00zz__evalz00, BgL_xz00_62);
															FAILURE(BgL_auxz00_6568, BFALSE, BFALSE);
														}
													BgL_arg1523z00_3261 = CER(BgL_objz00_3263);
												}
												return
													BGl_everrorz00zz__everrorz00(BgL_arg1523z00_3261,
													BgL_procz00_3259, BGl_string2978z00zz__evalz00,
													BgL_xz00_62);
											}
										else
											{	/* Eval/eval.scm 543 */
												return
													BGl_errorz00zz__errorz00(BgL_procz00_3259,
													BGl_string2978z00zz__evalz00, BgL_xz00_62);
											}
									}
								}
						}
					else
						{	/* Eval/eval.scm 730 */
							obj_t BgL_procz00_3264;

							BgL_procz00_3264 = BGl_symbol2977z00zz__evalz00;
							{	/* Eval/eval.scm 543 */
								bool_t BgL_test3483z00_6575;

								{	/* Eval/eval.scm 543 */
									bool_t BgL_res2423z00_3267;

									BgL_res2423z00_3267 = EPAIRP(BgL_xz00_62);
									BgL_test3483z00_6575 = BgL_res2423z00_3267;
								}
								if (BgL_test3483z00_6575)
									{	/* Eval/eval.scm 544 */
										obj_t BgL_arg1523z00_3266;

										{	/* Eval/eval.scm 544 */
											obj_t BgL_objz00_3268;

											if (EPAIRP(BgL_xz00_62))
												{	/* Eval/eval.scm 544 */
													BgL_objz00_3268 = BgL_xz00_62;
												}
											else
												{
													obj_t BgL_auxz00_6579;

													BgL_auxz00_6579 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2812z00zz__evalz00, BINT(((long) 21704)),
														BGl_string2973z00zz__evalz00,
														BGl_string2864z00zz__evalz00, BgL_xz00_62);
													FAILURE(BgL_auxz00_6579, BFALSE, BFALSE);
												}
											BgL_arg1523z00_3266 = CER(BgL_objz00_3268);
										}
										return
											BGl_everrorz00zz__everrorz00(BgL_arg1523z00_3266,
											BgL_procz00_3264, BGl_string2978z00zz__evalz00,
											BgL_xz00_62);
									}
								else
									{	/* Eval/eval.scm 543 */
										return
											BGl_errorz00zz__errorz00(BgL_procz00_3264,
											BGl_string2978z00zz__evalz00, BgL_xz00_62);
									}
							}
						}
				}
			else
				{	/* Eval/eval.scm 730 */
					obj_t BgL_procz00_3269;

					BgL_procz00_3269 = BGl_symbol2977z00zz__evalz00;
					{	/* Eval/eval.scm 543 */
						bool_t BgL_test3485z00_6586;

						{	/* Eval/eval.scm 543 */
							bool_t BgL_res2424z00_3272;

							BgL_res2424z00_3272 = EPAIRP(BgL_xz00_62);
							BgL_test3485z00_6586 = BgL_res2424z00_3272;
						}
						if (BgL_test3485z00_6586)
							{	/* Eval/eval.scm 544 */
								obj_t BgL_arg1523z00_3271;

								{	/* Eval/eval.scm 544 */
									obj_t BgL_objz00_3273;

									if (EPAIRP(BgL_xz00_62))
										{	/* Eval/eval.scm 544 */
											BgL_objz00_3273 = BgL_xz00_62;
										}
									else
										{
											obj_t BgL_auxz00_6590;

											BgL_auxz00_6590 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2812z00zz__evalz00, BINT(((long) 21704)),
												BGl_string2973z00zz__evalz00,
												BGl_string2864z00zz__evalz00, BgL_xz00_62);
											FAILURE(BgL_auxz00_6590, BFALSE, BFALSE);
										}
									BgL_arg1523z00_3271 = CER(BgL_objz00_3273);
								}
								return
									BGl_everrorz00zz__everrorz00(BgL_arg1523z00_3271,
									BgL_procz00_3269, BGl_string2978z00zz__evalz00, BgL_xz00_62);
							}
						else
							{	/* Eval/eval.scm 543 */
								return
									BGl_errorz00zz__errorz00(BgL_procz00_3269,
									BGl_string2978z00zz__evalz00, BgL_xz00_62);
							}
					}
				}
		}

	}



/* &expand-define-pattern */
	obj_t BGl_z62expandzd2definezd2patternz62zz__evalz00(obj_t BgL_envz00_3770,
		obj_t BgL_xz00_3771)
	{
		{	/* Eval/eval.scm 724 */
			return BGl_expandzd2definezd2patternz00zz__evalz00(BgL_xz00_3771);
		}

	}



/* notify-assert-fail */
	BGL_EXPORTED_DEF obj_t BGl_notifyzd2assertzd2failz00zz__evalz00(obj_t
		BgL_varsz00_63, obj_t BgL_failzd2bodyzd2_64, obj_t BgL_locz00_65)
	{
		{	/* Eval/eval.scm 735 */
			{	/* Eval/eval.scm 736 */
				obj_t BgL_portz00_2159;

				{	/* Eval/eval.scm 736 */
					obj_t BgL_res2425z00_3275;

					{	/* Eval/eval.scm 736 */
						obj_t BgL_tmpz00_6598;

						BgL_tmpz00_6598 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2425z00_3275 = BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6598);
					}
					BgL_portz00_2159 = BgL_res2425z00_3275;
				}
				BGl_zc3z04exitza31921ze3ze70z60zz__evalz00(BgL_locz00_65,
					BgL_failzd2bodyzd2_64);
				bgl_display_string(BGl_string2979z00zz__evalz00, BgL_portz00_2159);
				bgl_display_char(((unsigned char) 10), BgL_portz00_2159);
				bgl_display_string(BGl_string2980z00zz__evalz00, BgL_portz00_2159);
				bgl_display_char(((unsigned char) 10), BgL_portz00_2159);
				{
					obj_t BgL_l1217z00_2179;

					BgL_l1217z00_2179 = BgL_varsz00_63;
				BgL_zc3z04anonymousza31930ze3z87_2180:
					if (PAIRP(BgL_l1217z00_2179))
						{	/* Eval/eval.scm 752 */
							{	/* Eval/eval.scm 753 */
								obj_t BgL_fz00_2182;

								BgL_fz00_2182 = CAR(BgL_l1217z00_2179);
								bgl_display_string(BGl_string2981z00zz__evalz00,
									BgL_portz00_2159);
								bgl_display_obj(BgL_fz00_2182, BgL_portz00_2159);
								bgl_display_string(BGl_string2982z00zz__evalz00,
									BgL_portz00_2159);
								{	/* Eval/eval.scm 756 */
									obj_t BgL_arg1932z00_2183;

									{	/* Eval/eval.scm 83 */
										obj_t BgL_envz00_2185;

										{	/* Eval/eval.scm 254 */
											obj_t BgL_mz00_3291;

											BgL_mz00_3291 = BGl_evalzd2modulezd2zz__evmodulez00();
											if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_mz00_3291))
												{	/* Eval/eval.scm 255 */
													BgL_envz00_2185 = BgL_mz00_3291;
												}
											else
												{	/* Eval/eval.scm 255 */
													BgL_envz00_2185 = BGl_symbol2810z00zz__evalz00;
												}
										}
										{	/* Eval/eval.scm 83 */

											{	/* Eval/eval.scm 172 */
												obj_t BgL_auxz00_6615;

												{	/* Eval/eval.scm 172 */
													obj_t BgL_aux2776z00_4126;

													BgL_aux2776z00_4126 =
														BGl_defaultzd2evaluatezd2zz__evalz00;
													if (PROCEDUREP(BgL_aux2776z00_4126))
														{	/* Eval/eval.scm 172 */
															BgL_auxz00_6615 = BgL_aux2776z00_4126;
														}
													else
														{
															obj_t BgL_auxz00_6618;

															BgL_auxz00_6618 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2812z00zz__evalz00,
																BINT(((long) 6523)),
																BGl_string2983z00zz__evalz00,
																BGl_string2814z00zz__evalz00,
																BgL_aux2776z00_4126);
															FAILURE(BgL_auxz00_6618, BFALSE, BFALSE);
												}}
												BgL_arg1932z00_2183 =
													BGl_evalzf2expanderzf2zz__evalz00(BgL_fz00_2182,
													BgL_envz00_2185, BGl_expandzd2envzd2zz__expandz00,
													BgL_auxz00_6615);
									}}}
									{	/* Eval/eval.scm 756 */
										obj_t BgL_tmpfunz00_6627;

										{	/* Eval/eval.scm 756 */
											obj_t BgL_aux2778z00_4128;

											BgL_aux2778z00_4128 =
												BGl_za2replzd2printerza2zd2zz__evalz00;
											{	/* Eval/eval.scm 756 */
												bool_t BgL_test2779z00_4129;

												BgL_test2779z00_4129 = PROCEDUREP(BgL_aux2778z00_4128);
												if (BgL_test2779z00_4129)
													{	/* Eval/eval.scm 756 */
														BgL_tmpfunz00_6627 = BgL_aux2778z00_4128;
													}
												else
													{
														obj_t BgL_auxz00_6630;

														BgL_auxz00_6630 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2812z00zz__evalz00,
															BINT(((long) 28340)),
															BGl_string2983z00zz__evalz00,
															BGl_string2814z00zz__evalz00,
															BgL_aux2778z00_4128);
														FAILURE(BgL_auxz00_6630, BFALSE, BFALSE);
										}}}
										PROCEDURE_ENTRY(BgL_tmpfunz00_6627)
											(BGl_za2replzd2printerza2zd2zz__evalz00,
											BgL_arg1932z00_2183, BgL_portz00_2159, BEOA);
								}}
								bgl_display_char(((unsigned char) 10), BgL_portz00_2159);
							}
							{
								obj_t BgL_l1217z00_6635;

								BgL_l1217z00_6635 = CDR(BgL_l1217z00_2179);
								BgL_l1217z00_2179 = BgL_l1217z00_6635;
								goto BgL_zc3z04anonymousza31930ze3z87_2180;
							}
						}
					else
						{	/* Eval/eval.scm 752 */
							if (NULLP(BgL_l1217z00_2179))
								{	/* Eval/eval.scm 752 */
									BTRUE;
								}
							else
								{	/* Eval/eval.scm 752 */
									BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00
										(BGl_string2984z00zz__evalz00, BGl_string2935z00zz__evalz00,
										BgL_l1217z00_2179, BGl_string2812z00zz__evalz00,
										BINT(((long) 28239)));
				}}}
				bgl_display_string(BGl_string2979z00zz__evalz00, BgL_portz00_2159);
				bgl_display_char(((unsigned char) 10), BgL_portz00_2159);
				{	/* Eval/eval.scm 760 */
					obj_t BgL_oldzd2prompterzd2_2190;

					{	/* Eval/eval.scm 760 */
						obj_t BgL_res2429z00_3299;

						{	/* Eval/eval.scm 280 */
							obj_t BgL_aux2780z00_4130;

							BgL_aux2780z00_4130 = BGl_za2promptza2z00zz__evalz00;
							if (PROCEDUREP(BgL_aux2780z00_4130))
								{	/* Eval/eval.scm 280 */
									BgL_res2429z00_3299 = BgL_aux2780z00_4130;
								}
							else
								{
									obj_t BgL_auxz00_6645;

									BgL_auxz00_6645 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string2812z00zz__evalz00, BINT(((long) 11328)),
										BGl_string2985z00zz__evalz00, BGl_string2814z00zz__evalz00,
										BgL_aux2780z00_4130);
									FAILURE(BgL_auxz00_6645, BFALSE, BFALSE);
						}}
						BgL_oldzd2prompterzd2_2190 = BgL_res2429z00_3299;
					}
					if (PROCEDURE_CORRECT_ARITYP(BGl_proc2986z00zz__evalz00,
							(int) (((long) 1))))
						{	/* Eval/eval.scm 271 */
							BGl_za2promptza2z00zz__evalz00 = BGl_proc2986z00zz__evalz00;
						}
					else
						{	/* Eval/eval.scm 271 */
							BGl_errorz00zz__errorz00(BGl_symbol2828z00zz__evalz00,
								BGl_string2830z00zz__evalz00, BGl_proc2986z00zz__evalz00);
						}
					BGl_replz00zz__evalz00();
					{	/* Eval/eval.scm 763 */
						obj_t BgL_procz00_3306;

						if (PROCEDUREP(BgL_oldzd2prompterzd2_2190))
							{	/* Eval/eval.scm 763 */
								BgL_procz00_3306 = BgL_oldzd2prompterzd2_2190;
							}
						else
							{
								obj_t BgL_auxz00_6656;

								BgL_auxz00_6656 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2812z00zz__evalz00,
									BINT(((long) 28566)), BGl_string2985z00zz__evalz00,
									BGl_string2814z00zz__evalz00, BgL_oldzd2prompterzd2_2190);
								FAILURE(BgL_auxz00_6656, BFALSE, BFALSE);
							}
						if (PROCEDURE_CORRECT_ARITYP(BgL_procz00_3306, (int) (((long) 1))))
							{	/* Eval/eval.scm 271 */
								return (BGl_za2promptza2z00zz__evalz00 =
									BgL_procz00_3306, BUNSPEC);
							}
						else
							{	/* Eval/eval.scm 271 */
								return
									BGl_errorz00zz__errorz00(BGl_symbol2828z00zz__evalz00,
									BGl_string2830z00zz__evalz00, BgL_procz00_3306);
							}
					}
				}
			}
		}

	}



/* <@exit:1921>~0 */
	obj_t BGl_zc3z04exitza31921ze3ze70z60zz__evalz00(obj_t BgL_locz00_3794,
		obj_t BgL_failzd2bodyzd2_3793)
	{
		{	/* Eval/eval.scm 737 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1153z00_2161;

			if (SET_EXIT(BgL_an_exit1153z00_2161))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1153z00_2161 = (void *) jmpbuf;
					{	/* Eval/eval.scm 737 */

						PUSH_EXIT(BgL_an_exit1153z00_2161, ((long) 1));
						{	/* Eval/eval.scm 737 */
							obj_t BgL_an_exitd1154z00_2162;

							BgL_an_exitd1154z00_2162 = ((obj_t) (&exitd));
							{	/* Eval/eval.scm 737 */
								obj_t BgL_res1156z00_2165;

								{	/* Eval/eval.scm 740 */
									obj_t BgL_zc3z04anonymousza31926ze3z87_3773;
									obj_t BgL_zc3z04anonymousza31925ze3z87_3774;

									BgL_zc3z04anonymousza31926ze3z87_3773 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31926ze3ze5zz__evalz00,
										(int) (((long) 0)), (int) (((long) 2)));
									BgL_zc3z04anonymousza31925ze3z87_3774 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31925ze3ze5zz__evalz00,
										(int) (((long) 1)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3z04anonymousza31926ze3z87_3773,
										(int) (((long) 0)), BgL_failzd2bodyzd2_3793);
									PROCEDURE_SET(BgL_zc3z04anonymousza31926ze3z87_3773,
										(int) (((long) 1)), BgL_locz00_3794);
									PROCEDURE_SET(BgL_zc3z04anonymousza31925ze3z87_3774,
										(int) (((long) 0)), BgL_an_exitd1154z00_2162);
									BgL_res1156z00_2165 =
										BGl_withzd2exceptionzd2handlerz00zz__errorz00
										(BgL_zc3z04anonymousza31925ze3z87_3774,
										BgL_zc3z04anonymousza31926ze3z87_3773);
								}
								POP_EXIT();
								return BgL_res1156z00_2165;
							}
						}
					}
				}
		}

	}



/* &notify-assert-fail */
	obj_t BGl_z62notifyzd2assertzd2failz62zz__evalz00(obj_t BgL_envz00_3775,
		obj_t BgL_varsz00_3776, obj_t BgL_failzd2bodyzd2_3777,
		obj_t BgL_locz00_3778)
	{
		{	/* Eval/eval.scm 735 */
			return
				BGl_notifyzd2assertzd2failz00zz__evalz00(BgL_varsz00_3776,
				BgL_failzd2bodyzd2_3777, BgL_locz00_3778);
		}

	}



/* &<@anonymous:1936> */
	obj_t BGl_z62zc3z04anonymousza31936ze3ze5zz__evalz00(obj_t BgL_envz00_3779,
		obj_t BgL_numz00_3780)
	{
		{	/* Eval/eval.scm 761 */
			{	/* Eval/eval.scm 761 */
				obj_t BgL_arg1937z00_4277;

				{	/* Eval/eval.scm 761 */
					obj_t BgL_res2430z00_4278;

					{	/* Eval/eval.scm 761 */
						obj_t BgL_tmpz00_6682;

						BgL_tmpz00_6682 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2430z00_4278 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6682);
					}
					BgL_arg1937z00_4277 = BgL_res2430z00_4278;
				}
				return
					bgl_display_string(BGl_string2987z00zz__evalz00, BgL_arg1937z00_4277);
			}
		}

	}



/* &<@anonymous:1926> */
	obj_t BGl_z62zc3z04anonymousza31926ze3ze5zz__evalz00(obj_t BgL_envz00_3781)
	{
		{	/* Eval/eval.scm 742 */
			{	/* Eval/eval.scm 743 */
				obj_t BgL_failzd2bodyzd2_3782;
				obj_t BgL_locz00_3783;

				BgL_failzd2bodyzd2_3782 =
					PROCEDURE_REF(BgL_envz00_3781, (int) (((long) 0)));
				BgL_locz00_3783 = PROCEDURE_REF(BgL_envz00_3781, (int) (((long) 1)));
				if (PAIRP(BgL_locz00_3783))
					{	/* Eval/eval.scm 743 */
						return
							BGl_errorzf2locationzf2zz__errorz00(BGl_string2988z00zz__evalz00,
							BGl_string2989z00zz__evalz00, BgL_failzd2bodyzd2_3782,
							CAR(BgL_locz00_3783), CDR(BgL_locz00_3783));
					}
				else
					{	/* Eval/eval.scm 743 */
						return
							BGl_errorz00zz__errorz00(BGl_symbol2990z00zz__evalz00,
							BGl_string2989z00zz__evalz00, BgL_failzd2bodyzd2_3782);
					}
			}
		}

	}



/* &<@anonymous:1925> */
	obj_t BGl_z62zc3z04anonymousza31925ze3ze5zz__evalz00(obj_t BgL_envz00_3784,
		obj_t BgL_ez00_3786)
	{
		{	/* Eval/eval.scm 739 */
			{	/* Eval/eval.scm 740 */
				obj_t BgL_an_exitd1154z00_3785;

				BgL_an_exitd1154z00_3785 =
					PROCEDURE_REF(BgL_envz00_3784, (int) (((long) 0)));
				BGl_errorzd2notifyzd2zz__errorz00(BgL_ez00_3786);
				return
					BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1154z00_3785,
					BUNSPEC);
			}
		}

	}



/* identifier-syntax */
	BGL_EXPORTED_DEF obj_t BGl_identifierzd2syntaxzd2zz__evalz00()
	{
		{	/* Eval/eval.scm 785 */
			return BGl_za2identifierzd2syntaxza2zd2zz__evalz00;
		}

	}



/* &identifier-syntax */
	obj_t BGl_z62identifierzd2syntaxzb0zz__evalz00(obj_t BgL_envz00_3787)
	{
		{	/* Eval/eval.scm 785 */
			return BGl_identifierzd2syntaxzd2zz__evalz00();
		}

	}



/* identifier-syntax-set! */
	BGL_EXPORTED_DEF obj_t BGl_identifierzd2syntaxzd2setz12z12zz__evalz00(obj_t
		BgL_vz00_66)
	{
		{	/* Eval/eval.scm 786 */
			return (BGl_za2identifierzd2syntaxza2zd2zz__evalz00 =
				BgL_vz00_66, BUNSPEC);
		}

	}



/* &identifier-syntax-set! */
	obj_t BGl_z62identifierzd2syntaxzd2setz12z70zz__evalz00(obj_t BgL_envz00_3788,
		obj_t BgL_vz00_3789)
	{
		{	/* Eval/eval.scm 786 */
			{	/* Eval/eval.scm 786 */
				obj_t BgL_auxz00_6701;

				if (SYMBOLP(BgL_vz00_3789))
					{	/* Eval/eval.scm 786 */
						BgL_auxz00_6701 = BgL_vz00_3789;
					}
				else
					{
						obj_t BgL_auxz00_6704;

						BgL_auxz00_6704 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2812z00zz__evalz00,
							BINT(((long) 29828)), BGl_string2991z00zz__evalz00,
							BGl_string2992z00zz__evalz00, BgL_vz00_3789);
						FAILURE(BgL_auxz00_6704, BFALSE, BFALSE);
					}
				return BGl_identifierzd2syntaxzd2setz12z12zz__evalz00(BgL_auxz00_6701);
			}
		}

	}



/* transcript-on */
	BGL_EXPORTED_DEF obj_t BGl_transcriptzd2onzd2zz__evalz00(obj_t BgL_filez00_67)
	{
		{	/* Eval/eval.scm 796 */
			{	/* Eval/eval.scm 797 */
				bool_t BgL_test3498z00_6709;

				{	/* Eval/eval.scm 797 */
					obj_t BgL_arg1942z00_2202;

					{	/* Eval/eval.scm 797 */
						obj_t BgL_res2431z00_3309;

						{	/* Eval/eval.scm 797 */
							obj_t BgL_tmpz00_6710;

							BgL_tmpz00_6710 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2431z00_3309 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6710);
						}
						BgL_arg1942z00_2202 = BgL_res2431z00_3309;
					}
					BgL_test3498z00_6709 =
						(BGl_za2transcriptza2z00zz__evalz00 == BgL_arg1942z00_2202);
				}
				if (BgL_test3498z00_6709)
					{	/* Eval/eval.scm 797 */
						{	/* Ieee/port.scm 452 */

							BGl_za2transcriptza2z00zz__evalz00 =
								BGl_appendzd2outputzd2filez00zz__r4_ports_6_10_1z00
								(BgL_filez00_67, BTRUE);
						}
						{	/* Eval/eval.scm 801 */
							obj_t BgL_port1220z00_2200;

							BgL_port1220z00_2200 = BGl_za2transcriptza2z00zz__evalz00;
							{	/* Eval/eval.scm 801 */
								obj_t BgL_portz00_3311;

								if (OUTPUT_PORTP(BgL_port1220z00_2200))
									{	/* Eval/eval.scm 801 */
										BgL_portz00_3311 = BgL_port1220z00_2200;
									}
								else
									{
										obj_t BgL_auxz00_6717;

										BgL_auxz00_6717 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2812z00zz__evalz00, BINT(((long) 30582)),
											BGl_string2993z00zz__evalz00,
											BGl_string2842z00zz__evalz00, BgL_port1220z00_2200);
										FAILURE(BgL_auxz00_6717, BFALSE, BFALSE);
									}
								bgl_display_string(BGl_string2994z00zz__evalz00,
									BgL_portz00_3311);
							}
							{	/* Eval/eval.scm 801 */
								char *BgL_arg1941z00_2201;

								BgL_arg1941z00_2201 = BGl_datez00zz__osz00();
								{	/* Eval/eval.scm 801 */
									obj_t BgL_auxz00_6723;

									if (OUTPUT_PORTP(BgL_port1220z00_2200))
										{	/* Eval/eval.scm 801 */
											BgL_auxz00_6723 = BgL_port1220z00_2200;
										}
									else
										{
											obj_t BgL_auxz00_6727;

											BgL_auxz00_6727 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2812z00zz__evalz00, BINT(((long) 30582)),
												BGl_string2993z00zz__evalz00,
												BGl_string2842z00zz__evalz00, BgL_port1220z00_2200);
											FAILURE(BgL_auxz00_6727, BFALSE, BFALSE);
										}
									bgl_display_obj(string_to_bstring(BgL_arg1941z00_2201),
										BgL_auxz00_6723);
							}}
							{	/* Eval/eval.scm 801 */
								obj_t BgL_portz00_3312;

								if (OUTPUT_PORTP(BgL_port1220z00_2200))
									{	/* Eval/eval.scm 801 */
										BgL_portz00_3312 = BgL_port1220z00_2200;
									}
								else
									{
										obj_t BgL_auxz00_6734;

										BgL_auxz00_6734 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2812z00zz__evalz00, BINT(((long) 30582)),
											BGl_string2993z00zz__evalz00,
											BGl_string2842z00zz__evalz00, BgL_port1220z00_2200);
										FAILURE(BgL_auxz00_6734, BFALSE, BFALSE);
									}
								bgl_display_char(((unsigned char) 10), BgL_portz00_3312);
						}}
						return BUNSPEC;
					}
				else
					{	/* Eval/eval.scm 797 */
						return
							BGl_errorz00zz__errorz00(BGl_symbol2995z00zz__evalz00,
							BGl_string2996z00zz__evalz00, BGl_za2transcriptza2z00zz__evalz00);
					}
			}
		}

	}



/* &transcript-on */
	obj_t BGl_z62transcriptzd2onzb0zz__evalz00(obj_t BgL_envz00_3790,
		obj_t BgL_filez00_3791)
	{
		{	/* Eval/eval.scm 796 */
			{	/* Eval/eval.scm 797 */
				obj_t BgL_auxz00_6740;

				if (STRINGP(BgL_filez00_3791))
					{	/* Eval/eval.scm 797 */
						BgL_auxz00_6740 = BgL_filez00_3791;
					}
				else
					{
						obj_t BgL_auxz00_6743;

						BgL_auxz00_6743 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2812z00zz__evalz00,
							BINT(((long) 30389)), BGl_string2997z00zz__evalz00,
							BGl_string2821z00zz__evalz00, BgL_filez00_3791);
						FAILURE(BgL_auxz00_6743, BFALSE, BFALSE);
					}
				return BGl_transcriptzd2onzd2zz__evalz00(BgL_auxz00_6740);
			}
		}

	}



/* transcript-off */
	BGL_EXPORTED_DEF obj_t BGl_transcriptzd2offzd2zz__evalz00()
	{
		{	/* Eval/eval.scm 807 */
			{	/* Eval/eval.scm 808 */
				bool_t BgL_test3503z00_6748;

				{	/* Eval/eval.scm 808 */
					obj_t BgL_arg1945z00_2205;

					{	/* Eval/eval.scm 808 */
						obj_t BgL_res2432z00_3314;

						{	/* Eval/eval.scm 808 */
							obj_t BgL_tmpz00_6749;

							BgL_tmpz00_6749 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2432z00_3314 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6749);
						}
						BgL_arg1945z00_2205 = BgL_res2432z00_3314;
					}
					BgL_test3503z00_6748 =
						(BGl_za2transcriptza2z00zz__evalz00 == BgL_arg1945z00_2205);
				}
				if (BgL_test3503z00_6748)
					{	/* Eval/eval.scm 808 */
						BGl_errorz00zz__errorz00(BGl_symbol2998z00zz__evalz00,
							BGl_string3000z00zz__evalz00, BGl_za2transcriptza2z00zz__evalz00);
					}
				else
					{	/* Eval/eval.scm 808 */
						{	/* Eval/eval.scm 813 */
							obj_t BgL_portz00_3315;

							{	/* Eval/eval.scm 813 */
								obj_t BgL_aux2794z00_4144;

								BgL_aux2794z00_4144 = BGl_za2transcriptza2z00zz__evalz00;
								if (OUTPUT_PORTP(BgL_aux2794z00_4144))
									{	/* Eval/eval.scm 813 */
										BgL_portz00_3315 = BgL_aux2794z00_4144;
									}
								else
									{
										obj_t BgL_auxz00_6756;

										BgL_auxz00_6756 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2812z00zz__evalz00, BINT(((long) 31081)),
											BGl_string2999z00zz__evalz00,
											BGl_string2842z00zz__evalz00, BgL_aux2794z00_4144);
										FAILURE(BgL_auxz00_6756, BFALSE, BFALSE);
							}}
							bgl_close_output_port(BgL_portz00_3315);
						}
						{	/* Eval/eval.scm 814 */
							obj_t BgL_res2433z00_3317;

							{	/* Eval/eval.scm 814 */
								obj_t BgL_tmpz00_6761;

								BgL_tmpz00_6761 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2433z00_3317 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6761);
							}
							BGl_za2transcriptza2z00zz__evalz00 = BgL_res2433z00_3317;
			}}}
			return BUNSPEC;
		}

	}



/* &transcript-off */
	obj_t BGl_z62transcriptzd2offzb0zz__evalz00(obj_t BgL_envz00_3792)
	{
		{	/* Eval/eval.scm 807 */
			return BGl_transcriptzd2offzd2zz__evalz00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__evalz00()
	{
		{	/* Eval/eval.scm 18 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__evalz00()
	{
		{	/* Eval/eval.scm 18 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__evalz00()
	{
		{	/* Eval/eval.scm 18 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__evalz00()
	{
		{	/* Eval/eval.scm 18 */
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 121046386),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 251315035),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 439352636),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__pp_circlez00(((long) 122355535),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 220647683),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__intextz00(((long) 6305416),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__rgcz00(((long) 352596942),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581), BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945), BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874), BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048), BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694), BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 323064336),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845), BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__macroz00(((long) 261395457),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__install_expandersz00(((long)
					305094832), BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 177147628),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__expandz00(((long) 414007030),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__evcompilez00(((long) 492753248),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__evmeaningz00(((long) 72314635),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__evaluatez00(((long) 398581706),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__everrorz00(((long) 375872251),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__evprimopz00(((long) 245680575),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 528345319),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__evmodulez00(((long) 505900559),
				BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
			return BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(((long)
					515155831), BSTRING_TO_STRING(BGl_string3001z00zz__evalz00));
		}

	}



/* eval-init */
	obj_t BGl_evalzd2initzd2zz__evalz00()
	{
		{	/* Eval/eval.scm 18 */
			BGl_definezd2primopzd2refzf2locz12ze0zz__evenvz00
				(BGl_symbol3002z00zz__evalz00,
				__EVMEANING_ADDRESS((BGl_za2czd2debugzd2replzd2valueza2zd2zz__evalz00)),
				BGl_string3004z00zz__evalz00, BINT(((long) 16598)));
			return BUNSPEC;
		}

	}

#ifdef __cplusplus
}
#endif
