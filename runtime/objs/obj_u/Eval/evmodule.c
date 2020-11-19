/*===========================================================================*/
/*   (Eval/evmodule.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/evmodule.scm -indent -o objs/obj_u/Eval/evmodule.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	BGL_EXPORTED_DECL obj_t
		BGl_callzd2withzd2evalzd2modulezd2zz__evmodulez00(obj_t, obj_t);
	extern obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	static obj_t BGl_symbol3373z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3375z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3377z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_z62evmodulezd2staticzd2classz62zz__evmodulez00(obj_t, obj_t);
	static obj_t BGl_evmodulezd2importzd2zz__evmodulez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62evalzd2findzd2modulez62zz__evmodulez00(obj_t, obj_t);
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62evalzd2modulezd2setz12z70zz__evmodulez00(obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza31970ze3ze70z60zz__evmodulez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2moduleszd2mutexza2zd2zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_evmodulezd2staticzd2zz__evmodulez00(obj_t, obj_t, obj_t,
		bool_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_zc3z04anonymousza31953ze3ze70z60zz__evmodulez00(obj_t,
		obj_t);
	static obj_t BGl_za2loadqzd2mutexza2zd2zz__evmodulez00 = BUNSPEC;
	static obj_t
		BGl_evmodulezd2condzd2expandzd2clauseze70z35zz__evmodulez00(obj_t, obj_t);
	static obj_t BGl_makezd2evmodulezd2zz__evmodulez00(obj_t, obj_t, obj_t);
	extern obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_findzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62evmodulezd2bindzd2globalz12z70zz__evmodulez00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evalzd2modulezd2zz__evmodulez00();
	static obj_t BGl_z62evmodulezd2compz12za2zz__evmodulez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62callzd2withzd2evalzd2modulezb0zz__evmodulez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_locationzd2dirzd2zz__evmodulez00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__evmodulez00();
	extern obj_t BGl_evalz00zz__evalz00(obj_t, obj_t);
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_z62evmodulezd2loadqzb0zz__evmodulez00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__evmodulez00();
	BGL_EXPORTED_DECL obj_t
		BGl_evmodulezd2checkzd2unboundz00zz__evmodulez00(obj_t, obj_t);
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	extern obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_objectzd2initzd2zz__evmodulez00();
	static obj_t BGl_z62evmodulez62zz__evmodulez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_evalzd2expandzd2duplicatez00zz__evobjectz00(obj_t);
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_evmodulezd2optionzd2zz__evmodulez00(obj_t, obj_t);
	static obj_t BGl_z62evmodulezd2extensionzb0zz__evmodulez00(obj_t, obj_t);
	extern obj_t BGl_dirnamez00zz__osz00(obj_t);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32018ze3ze5zz__evmodulez00(obj_t);
	static obj_t BGl_evmodulezd2step1zd2zz__evmodulez00(obj_t, obj_t, obj_t);
	static obj_t BGl_evmodulezd2step2zd2zz__evmodulez00(obj_t, obj_t, obj_t);
	static obj_t BGl_evmodulezd2step3zd2zz__evmodulez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evmodulezd2compz12zc0zz__evmodulez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62evmodulezd2macrozd2tablez62zz__evmodulez00(obj_t, obj_t);
	extern bool_t BGl_hashtablezf3zf3zz__hashz00(obj_t);
	extern obj_t BGl_filezd2namezd2unixzd2canonicaliza7ez75zz__osz00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern int BGl_bigloozd2debugzd2modulez00zz__paramz00();
	BGL_EXPORTED_DECL obj_t BGl_evmodulezd2namezd2zz__evmodulez00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31331ze3ze5zz__evmodulez00(obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zz__evmodulez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evmodulezd2macrozd2tablez00zz__evmodulez00(obj_t);
	static obj_t BGl_z62evalzd2modulezb0zz__evmodulez00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__evmodulez00();
	extern obj_t BGl_evalzd2classzd2zz__evobjectz00(obj_t, bool_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_markzd2globalz12zc0zz__evmodulez00(obj_t, obj_t, long,
		obj_t);
	static obj_t BGl_z62evmodulezd2staticzd2clausez62zz__evmodulez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31994ze3ze5zz__evmodulez00(obj_t);
	static obj_t BGl_z62evmodulezd2pathzb0zz__evmodulez00(obj_t, obj_t);
	extern obj_t BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62evmodulezd2extensionzd2setz12z70zz__evmodulez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3z04exitza31639ze3ze70z60zz__evmodulez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_evmodulezd2includezd2zz__evmodulez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_warningzf2loczf2zz__errorz00(obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_evmodulezd2importz12zc0zz__evmodulez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62evmodulezd2checkzd2unboundz62zz__evmodulez00(obj_t, obj_t,
		obj_t);
	extern obj_t bgl_append2(obj_t, obj_t);
	extern obj_t BGl_z52withzd2tracez80zz__tracez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evmodulez00zz__evmodulez00(obj_t, obj_t);
	static obj_t BGl_untypezd2identzd2zz__evmodulez00(obj_t);
	extern obj_t bgl_remq_bang(obj_t, obj_t);
	static obj_t BGl_z62globalzd2checkzd2unboundz62zz__evmodulez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evaliaszd2modulezd2zz__evmodulez00(obj_t);
	extern obj_t BGl_evcompilezd2loczd2filenamez00zz__evcompilez00(obj_t);
	extern obj_t BGl_errorzd2notifyzd2zz__errorz00(obj_t);
	extern obj_t BGl_evepairifyz00zz__prognz00(obj_t, obj_t);
	static obj_t BGl_z62importzd2modulezb0zz__evmodulez00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_bigloozd2modulezd2resolverz00zz__modulez00();
	extern obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	extern obj_t BGl_expandz00zz__expandz00(obj_t);
	extern obj_t BGl_bigloozd2loadzd2modulez00zz__paramz00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__evmodulez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evobjectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evcompilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__everrorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__typez00(long, char *);
	extern bool_t BGl_classzf3zf3zz__objectz00(obj_t);
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	extern obj_t BGl_evalzd2expandzd2instantiatez00zz__evobjectz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31712ze3ze5zz__evmodulez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_loadqz00zz__evalz00(obj_t, obj_t);
	extern obj_t BGl_evalzd2lookupzd2zz__evenvz00(obj_t);
	static obj_t BGl_evmodulezd2loadzd2zz__evmodulez00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_tprintz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_z62evmodulezf3z91zz__evmodulez00(obj_t, obj_t);
	extern obj_t create_struct(obj_t, int);
	BGL_EXPORTED_DECL obj_t BGl_evmodulezd2extensionzd2zz__evmodulez00(obj_t);
	static bool_t BGl_forzd2eachzf2locz20zz__evmodulez00(obj_t, obj_t, obj_t);
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__evmodulez00();
	static obj_t BGl_z62makezd2z52evmoduleze2zz__evmodulez00(obj_t, obj_t);
	static obj_t BGl_z62evmodulezd2findzd2globalz62zz__evmodulez00(obj_t, obj_t,
		obj_t);
	extern long bgl_list_length(obj_t);
	static obj_t BGl_za2loadingzd2listza2zd2zz__evmodulez00 = BUNSPEC;
	extern obj_t BGl_evwarningz00zz__everrorz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__evmodulez00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__evmodulez00();
	static obj_t BGl_z62zc3z04anonymousza31642ze3ze5zz__evmodulez00(obj_t, obj_t);
	extern obj_t BGl_bindzd2evalzd2globalz12z12zz__evenvz00(obj_t, obj_t);
	static obj_t BGl_evmodulezd2fromzd2zz__evmodulez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_hashtablezd2forzd2eachz00zz__hashz00(obj_t, obj_t);
	extern obj_t BGl_hashtablezd2keyzd2listz00zz__hashz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evmodulezd2findzd2globalz00zz__evmodulez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31643ze3ze5zz__evmodulez00(obj_t);
	extern obj_t BGl_bigloozd2modulezd2extensionzd2handlerzd2zz__paramz00();
	BGL_EXPORTED_DECL obj_t BGl_evmodulezd2pathzd2zz__evmodulez00(obj_t);
	static obj_t BGl_evmodulezd2importzd2bindingz12z12zz__evmodulez00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_getzd2evalzd2expanderz00zz__macroz00(obj_t);
	extern obj_t BGl_pwdz00zz__osz00();
	static obj_t BGl_za2moduleszd2tableza2zd2zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_z62evmodulezd2exportzd2clausez62zz__evmodulez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2loadzd2pathza2zd2zz__evalz00;
	extern obj_t BGl_interactionzd2environmentzd2zz__evalz00();
	static obj_t BGl_evmodulezd2exportzd2zz__evmodulez00(obj_t, obj_t, obj_t,
		bool_t);
	static obj_t BGl_z62zc3z04anonymousza31717ze3ze5zz__evmodulez00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31393ze3ze5zz__evmodulez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol3301z00zz__evmodulez00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_evmodulezf3zf3zz__evmodulez00(obj_t);
	static obj_t BGl_symbol3226z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3228z00zz__evmodulez00 = BUNSPEC;
	extern obj_t BGl_portzd2ze3listz31zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_getzd2sourcezd2locationz00zz__readerz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31734ze3ze5zz__evmodulez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31726ze3ze5zz__evmodulez00(obj_t);
	static obj_t BGl_z62loadzd2modulezb0zz__evmodulez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol3310z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3232z00zz__evmodulez00 = BUNSPEC;
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_symbol3239z00zz__evmodulez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_evalzd2findzd2modulez00zz__evmodulez00(obj_t);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t make_struct(obj_t, int, obj_t);
	extern obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evalzd2modulezd2setz12z12zz__evmodulez00(obj_t);
	extern obj_t BGl_evcompilezd2errorzd2zz__evcompilez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol3243z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3247z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3249z00zz__evmodulez00 = BUNSPEC;
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	static obj_t BGl_fromzd2moduleze70z35zz__evmodulez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31841ze3ze5zz__evmodulez00(obj_t);
	extern obj_t BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_symbol3251z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3333z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_loopze70ze7zz__evmodulez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_evmodulezd2staticzd2classz00zz__evmodulez00(obj_t);
	static obj_t BGl_symbol3255z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3338z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3257z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_evmodulezd2libraryzd2zz__evmodulez00(obj_t, obj_t);
	extern obj_t BGl_evalzd2expandzd2withzd2accesszd2zz__evobjectz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_evmodulezd2uninitializa7edz75zz__evmodulez00 =
		BUNSPEC;
	static obj_t BGl_symbol3341z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3343z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3345z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3184z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3347z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3186z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3268z00zz__evmodulez00 = BUNSPEC;
	extern obj_t BGl_modulezd2loadzd2accesszd2filezd2zz__modulez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_evmodulezd2extensionzd2setz12z12zz__evmodulez00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31916ze3ze5zz__evmodulez00(obj_t, obj_t);
	static obj_t BGl_symbol3350z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3270z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3352z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3272z00zz__evmodulez00 = BUNSPEC;
	extern obj_t BGl_hashtablezd2updatez12zc0zz__hashz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol3354z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3356z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3195z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3359z00zz__evmodulez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62evmodulezd2namezb0zz__evmodulez00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31747ze3ze5zz__evmodulez00(obj_t);
	static obj_t BGl_symbol3361z00zz__evmodulez00 = BUNSPEC;
	static bool_t BGl_aliaszd2pairzf3z21zz__evmodulez00(obj_t);
	static obj_t BGl_symbol3282z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_evmodulezd2fromz12zc0zz__evmodulez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_evmodulezd2compz12zd2envz12zz__evmodulez00,
		BgL_bgl_za762evmoduleza7d2co3404z00, va_generic_entry,
		BGl_z62evmodulezd2compz12za2zz__evmodulez00, BUNSPEC, -4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evmodulezd2extensionzd2envz00zz__evmodulez00,
		BgL_bgl_za762evmoduleza7d2ex3405z00,
		BGl_z62evmodulezd2extensionzb0zz__evmodulez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evmodulezd2pathzd2envz00zz__evmodulez00,
		BgL_bgl_za762evmoduleza7d2pa3406z00,
		BGl_z62evmodulezd2pathzb0zz__evmodulez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3200z00zz__evmodulez00,
		BgL_bgl_string3200za700za7za7_3407za7, "evmodule-extension-set!", 23);
	      DEFINE_STRING(BGl_string3201z00zz__evmodulez00,
		BgL_bgl_string3201za700za7za7_3408za7, "make-evmodule", 13);
	      DEFINE_STRING(BGl_string3202z00zz__evmodulez00,
		BgL_bgl_string3202za700za7za7_3409za7, "bstring", 7);
	      DEFINE_STRING(BGl_string3203z00zz__evmodulez00,
		BgL_bgl_string3203za700za7za7_3410za7, "\"", 1);
	      DEFINE_STRING(BGl_string3204z00zz__evmodulez00,
		BgL_bgl_string3204za700za7za7_3411za7, "\", new (ignored) \"", 18);
	      DEFINE_STRING(BGl_string3205z00zz__evmodulez00,
		BgL_bgl_string3205za700za7za7_3412za7, "'. Previous \"", 13);
	      DEFINE_STRING(BGl_string3206z00zz__evmodulez00,
		BgL_bgl_string3206za700za7za7_3413za7, "Module redefinition `", 21);
	      DEFINE_STRING(BGl_string3207z00zz__evmodulez00,
		BgL_bgl_string3207za700za7za7_3414za7, "eval-module-set!", 16);
	      DEFINE_STRING(BGl_string3208z00zz__evmodulez00,
		BgL_bgl_string3208za700za7za7_3415za7, "Illegal module", 14);
	      DEFINE_STRING(BGl_string3209z00zz__evmodulez00,
		BgL_bgl_string3209za700za7za7_3416za7, "eval-find-module", 16);
	      DEFINE_STRING(BGl_string3210z00zz__evmodulez00,
		BgL_bgl_string3210za700za7za7_3417za7, "&eval-find-module", 17);
	      DEFINE_STRING(BGl_string3211z00zz__evmodulez00,
		BgL_bgl_string3211za700za7za7_3418za7, "evalias-module", 14);
	      DEFINE_STRING(BGl_string3212z00zz__evmodulez00,
		BgL_bgl_string3212za700za7za7_3419za7, "vector", 6);
	      DEFINE_STRING(BGl_string3213z00zz__evmodulez00,
		BgL_bgl_string3213za700za7za7_3420za7, "evmodule-find-global", 20);
	      DEFINE_STRING(BGl_string3214z00zz__evmodulez00,
		BgL_bgl_string3214za700za7za7_3421za7, "bint", 4);
	      DEFINE_STRING(BGl_string3215z00zz__evmodulez00,
		BgL_bgl_string3215za700za7za7_3422za7, "&evmodule-find-global", 21);
	      DEFINE_STRING(BGl_string3216z00zz__evmodulez00,
		BgL_bgl_string3216za700za7za7_3423za7, "Variable `", 10);
	      DEFINE_STRING(BGl_string3217z00zz__evmodulez00,
		BgL_bgl_string3217za700za7za7_3424za7, "' hidden by an expander.", 24);
	      DEFINE_STRING(BGl_string3218z00zz__evmodulez00,
		BgL_bgl_string3218za700za7za7_3425za7, "evmodule-bind-global!", 21);
	      DEFINE_STRING(BGl_string3219z00zz__evmodulez00,
		BgL_bgl_string3219za700za7za7_3426za7, "&evmodule-bind-global!", 22);
	      DEFINE_STRING(BGl_string3300z00zz__evmodulez00,
		BgL_bgl_string3300za700za7za7_3427za7, "evmodule-loadq", 14);
	      DEFINE_STRING(BGl_string3220z00zz__evmodulez00,
		BgL_bgl_string3220za700za7za7_3428za7, "every", 5);
	      DEFINE_STRING(BGl_string3302z00zz__evmodulez00,
		BgL_bgl_string3302za700za7za7_3429za7, "/tmp/4.4a/runtime/Llib/thread.scm",
		33);
	      DEFINE_STRING(BGl_string3221z00zz__evmodulez00,
		BgL_bgl_string3221za700za7za7_3430za7, "list", 4);
	      DEFINE_STRING(BGl_string3303z00zz__evmodulez00,
		BgL_bgl_string3303za700za7za7_3431za7, "loop", 4);
	      DEFINE_STRING(BGl_string3222z00zz__evmodulez00,
		BgL_bgl_string3222za700za7za7_3432za7, "evmodule-library", 16);
	      DEFINE_STRING(BGl_string3304z00zz__evmodulez00,
		BgL_bgl_string3304za700za7za7_3433za7, "condvar", 7);
	      DEFINE_STRING(BGl_string3305z00zz__evmodulez00,
		BgL_bgl_string3305za700za7za7_3434za7, "evmodule-import!", 16);
	      DEFINE_STRING(BGl_string3224z00zz__evmodulez00,
		BgL_bgl_string3224za700za7za7_3435za7, "eval", 4);
	      DEFINE_STRING(BGl_string3306z00zz__evmodulez00,
		BgL_bgl_string3306za700za7za7_3436za7,
		"Cannot find imported module in base \"~a\"", 40);
	      DEFINE_STRING(BGl_string3225z00zz__evmodulez00,
		BgL_bgl_string3225za700za7za7_3437za7, "Illegal `library' clause", 24);
	      DEFINE_STRING(BGl_string3307z00zz__evmodulez00,
		BgL_bgl_string3307za700za7za7_3438za7, "&import-module", 14);
	      DEFINE_STRING(BGl_string3308z00zz__evmodulez00,
		BgL_bgl_string3308za700za7za7_3439za7, "<@anonymous:1735>", 17);
	      DEFINE_STRING(BGl_string3227z00zz__evmodulez00,
		BgL_bgl_string3227za700za7za7_3440za7, "quote", 5);
	      DEFINE_STRING(BGl_string3309z00zz__evmodulez00,
		BgL_bgl_string3309za700za7za7_3441za7, "<@anonymous:1734>", 17);
	      DEFINE_STRING(BGl_string3229z00zz__evmodulez00,
		BgL_bgl_string3229za700za7za7_3442za7, "library-load", 12);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evmodulezd2namezd2envz00zz__evmodulez00,
		BgL_bgl_za762evmoduleza7d2na3443z00,
		BGl_z62evmodulezd2namezb0zz__evmodulez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evmodulezd2bindzd2globalz12zd2envzc0zz__evmodulez00,
		BgL_bgl_za762evmoduleza7d2bi3444z00,
		BGl_z62evmodulezd2bindzd2globalz12z70zz__evmodulez00, 0L, BUNSPEC, 4);
	      DEFINE_BGL_L_PROCEDURE(BGl_proc3223z00zz__evmodulez00,
		BgL_bgl_za762za7c3za704anonymo3445za7,
		BGl_z62zc3z04anonymousza31393ze3ze5zz__evmodulez00);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_evmodulezd2loadqzd2envz00zz__evmodulez00,
		BgL_bgl_za762evmoduleza7d2lo3446z00,
		BGl_z62evmodulezd2loadqzb0zz__evmodulez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3311z00zz__evmodulez00,
		BgL_bgl_string3311za700za7za7_3447za7, "at", 2);
	      DEFINE_STRING(BGl_string3230z00zz__evmodulez00,
		BgL_bgl_string3230za700za7za7_3448za7, "<@anonymous:1406>", 17);
	      DEFINE_STRING(BGl_string3312z00zz__evmodulez00,
		BgL_bgl_string3312za700za7za7_3449za7, "location-dir", 12);
	      DEFINE_STRING(BGl_string3231z00zz__evmodulez00,
		BgL_bgl_string3231za700za7za7_3450za7, "for-each", 8);
	      DEFINE_STRING(BGl_string3313z00zz__evmodulez00,
		BgL_bgl_string3313za700za7za7_3451za7, "find-module-files", 17);
	      DEFINE_STRING(BGl_string3314z00zz__evmodulez00,
		BgL_bgl_string3314za700za7za7_3452za7, "find-module-imports", 19);
	      DEFINE_STRING(BGl_string3233z00zz__evmodulez00,
		BgL_bgl_string3233za700za7za7_3453za7, "option", 6);
	      DEFINE_STRING(BGl_string3315z00zz__evmodulez00,
		BgL_bgl_string3315za700za7za7_3454za7, "find-module-aliases", 19);
	      DEFINE_STRING(BGl_string3234z00zz__evmodulez00,
		BgL_bgl_string3234za700za7za7_3455za7, "Illegal `option' clause", 23);
	      DEFINE_STRING(BGl_string3316z00zz__evmodulez00,
		BgL_bgl_string3316za700za7za7_3456za7, "Illegal `import' clause", 23);
	      DEFINE_STRING(BGl_string3235z00zz__evmodulez00,
		BgL_bgl_string3235za700za7za7_3457za7, "mark-global!", 12);
	      DEFINE_STRING(BGl_string3317z00zz__evmodulez00,
		BgL_bgl_string3317za700za7za7_3458za7, "<@anonymous:1807>", 17);
	      DEFINE_STRING(BGl_string3236z00zz__evmodulez00,
		BgL_bgl_string3236za700za7za7_3459za7, "variable unbound", 16);
	      DEFINE_STRING(BGl_string3318z00zz__evmodulez00,
		BgL_bgl_string3318za700za7za7_3460za7, "evmodule-import", 15);
	      DEFINE_STRING(BGl_string3237z00zz__evmodulez00,
		BgL_bgl_string3237za700za7za7_3461za7, "evmodule-static", 15);
	      DEFINE_STRING(BGl_string3319z00zz__evmodulez00,
		BgL_bgl_string3319za700za7za7_3462za7, "evmodule-from!", 14);
	      DEFINE_STRING(BGl_string3238z00zz__evmodulez00,
		BgL_bgl_string3238za700za7za7_3463za7, "Illegal `static' clause", 23);
	      DEFINE_STRING(BGl_string3320z00zz__evmodulez00,
		BgL_bgl_string3320za700za7za7_3464za7, "*** loading module `", 20);
	      DEFINE_STRING(BGl_string3321z00zz__evmodulez00,
		BgL_bgl_string3321za700za7za7_3465za7, "' [", 3);
	      DEFINE_STRING(BGl_string3240z00zz__evmodulez00,
		BgL_bgl_string3240za700za7za7_3466za7, "define", 6);
	      DEFINE_STRING(BGl_string3322z00zz__evmodulez00,
		BgL_bgl_string3322za700za7za7_3467za7, "]...", 4);
	      DEFINE_STRING(BGl_string3241z00zz__evmodulez00,
		BgL_bgl_string3241za700za7za7_3468za7, "TAG-114", 7);
	      DEFINE_STRING(BGl_string3323z00zz__evmodulez00,
		BgL_bgl_string3323za700za7za7_3469za7, "Cannot find module", 18);
	      DEFINE_STRING(BGl_string3242z00zz__evmodulez00,
		BgL_bgl_string3242za700za7za7_3470za7, "TAG-109", 7);
	      DEFINE_STRING(BGl_string3324z00zz__evmodulez00,
		BgL_bgl_string3324za700za7za7_3471za7, "from-module~0", 13);
	      DEFINE_STRING(BGl_string3325z00zz__evmodulez00,
		BgL_bgl_string3325za700za7za7_3472za7, "<@anonymous:1844>", 17);
	      DEFINE_STRING(BGl_string3244z00zz__evmodulez00,
		BgL_bgl_string3244za700za7za7_3473za7, "class", 5);
	      DEFINE_STRING(BGl_string3326z00zz__evmodulez00,
		BgL_bgl_string3326za700za7za7_3474za7, "Illegal `from' clause", 21);
	      DEFINE_STRING(BGl_string3245z00zz__evmodulez00,
		BgL_bgl_string3245za700za7za7_3475za7, "evmodule-static-clause", 22);
	      DEFINE_STRING(BGl_string3327z00zz__evmodulez00,
		BgL_bgl_string3327za700za7za7_3476za7, "from-clause", 11);
	      DEFINE_STRING(BGl_string3246z00zz__evmodulez00,
		BgL_bgl_string3246za700za7za7_3477za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string3328z00zz__evmodulez00,
		BgL_bgl_string3328za700za7za7_3478za7, "evmodule-from", 13);
	      DEFINE_STRING(BGl_string3329z00zz__evmodulez00,
		BgL_bgl_string3329za700za7za7_3479za7, "evmodule-include-file!", 22);
	      DEFINE_STRING(BGl_string3248z00zz__evmodulez00,
		BgL_bgl_string3248za700za7za7_3480za7, "final-class", 11);
	extern obj_t BGl_symbolzf3zd2envz21zz__r4_symbols_6_4z00;
	   
		 
		DEFINE_STRING(BGl_string3331z00zz__evmodulez00,
		BgL_bgl_string3331za700za7za7_3481za7, "Cannot find include file ~s", 27);
	      DEFINE_STRING(BGl_string3250z00zz__evmodulez00,
		BgL_bgl_string3250za700za7za7_3482za7, "abstract-class", 14);
	      DEFINE_STRING(BGl_string3332z00zz__evmodulez00,
		BgL_bgl_string3332za700za7za7_3483za7, "evmodule-include", 16);
	      DEFINE_STRING(BGl_string3252z00zz__evmodulez00,
		BgL_bgl_string3252za700za7za7_3484za7, "wide-class", 10);
	      DEFINE_STRING(BGl_string3334z00zz__evmodulez00,
		BgL_bgl_string3334za700za7za7_3485za7, "include", 7);
	      DEFINE_STRING(BGl_string3253z00zz__evmodulez00,
		BgL_bgl_string3253za700za7za7_3486za7,
		"Wide classes are not supported within eval", 42);
	      DEFINE_STRING(BGl_string3335z00zz__evmodulez00,
		BgL_bgl_string3335za700za7za7_3487za7, "Illegal module clause", 21);
	      DEFINE_STRING(BGl_string3254z00zz__evmodulez00,
		BgL_bgl_string3254za700za7za7_3488za7, "KAP-393", 7);
	      DEFINE_STRING(BGl_string3336z00zz__evmodulez00,
		BgL_bgl_string3336za700za7za7_3489za7, "<@anonymous:1916>", 17);
	      DEFINE_STRING(BGl_string3337z00zz__evmodulez00,
		BgL_bgl_string3337za700za7za7_3490za7, "input-port", 10);
	      DEFINE_STRING(BGl_string3256z00zz__evmodulez00,
		BgL_bgl_string3256za700za7za7_3491za7, "inline", 6);
	      DEFINE_STRING(BGl_string3339z00zz__evmodulez00,
		BgL_bgl_string3339za700za7za7_3492za7, "directives", 10);
	      DEFINE_STRING(BGl_string3258z00zz__evmodulez00,
		BgL_bgl_string3258za700za7za7_3493za7, "generic", 7);
	      DEFINE_STRING(BGl_string3259z00zz__evmodulez00,
		BgL_bgl_string3259za700za7za7_3494za7, "_eval/loc", 9);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3330z00zz__evmodulez00,
		BgL_bgl_za762za7c3za704anonymo3495za7,
		BGl_z62zc3z04anonymousza31916ze3ze5zz__evmodulez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3340z00zz__evmodulez00,
		BgL_bgl_string3340za700za7za7_3496za7, "<@anonymous:1932>", 17);
	      DEFINE_STRING(BGl_string3260z00zz__evmodulez00,
		BgL_bgl_string3260za700za7za7_3497za7, "evmodule-export", 15);
	      DEFINE_STRING(BGl_string3342z00zz__evmodulez00,
		BgL_bgl_string3342za700za7za7_3498za7, "library", 7);
	      DEFINE_STRING(BGl_string3261z00zz__evmodulez00,
		BgL_bgl_string3261za700za7za7_3499za7, "Illegal `export' clause", 23);
	      DEFINE_STRING(BGl_string3262z00zz__evmodulez00,
		BgL_bgl_string3262za700za7za7_3500za7, "TAG-449", 7);
	      DEFINE_STRING(BGl_string3344z00zz__evmodulez00,
		BgL_bgl_string3344za700za7za7_3501za7, "static", 6);
	      DEFINE_STRING(BGl_string3263z00zz__evmodulez00,
		BgL_bgl_string3263za700za7za7_3502za7, "TAG-445", 7);
	      DEFINE_STRING(BGl_string3182z00zz__evmodulez00,
		BgL_bgl_string3182za700za7za7_3503za7, "modules", 7);
	      DEFINE_STRING(BGl_string3264z00zz__evmodulez00,
		BgL_bgl_string3264za700za7za7_3504za7, "TAG-443", 7);
	      DEFINE_STRING(BGl_string3183z00zz__evmodulez00,
		BgL_bgl_string3183za700za7za7_3505za7, "loadq", 5);
	      DEFINE_STRING(BGl_string3346z00zz__evmodulez00,
		BgL_bgl_string3346za700za7za7_3506za7, "export", 6);
	      DEFINE_STRING(BGl_string3265z00zz__evmodulez00,
		BgL_bgl_string3265za700za7za7_3507za7, "TAG-442", 7);
	      DEFINE_STRING(BGl_string3266z00zz__evmodulez00,
		BgL_bgl_string3266za700za7za7_3508za7, "TAG-441", 7);
	      DEFINE_STRING(BGl_string3185z00zz__evmodulez00,
		BgL_bgl_string3185za700za7za7_3509za7, "#uninitialized", 14);
	      DEFINE_STRING(BGl_string3348z00zz__evmodulez00,
		BgL_bgl_string3348za700za7za7_3510za7, "load", 4);
	      DEFINE_STRING(BGl_string3267z00zz__evmodulez00,
		BgL_bgl_string3267za700za7za7_3511za7, "TAG-440", 7);
	      DEFINE_STRING(BGl_string3349z00zz__evmodulez00,
		BgL_bgl_string3349za700za7za7_3512za7, "<@anonymous:1941>", 17);
	      DEFINE_STRING(BGl_string3187z00zz__evmodulez00,
		BgL_bgl_string3187za700za7za7_3513za7, "%evmodule", 9);
	      DEFINE_STRING(BGl_string3269z00zz__evmodulez00,
		BgL_bgl_string3269za700za7za7_3514za7, "macro", 5);
	      DEFINE_STRING(BGl_string3188z00zz__evmodulez00,
		BgL_bgl_string3188za700za7za7_3515za7,
		"/tmp/4.4a/runtime/Eval/evmodule.scm", 35);
	      DEFINE_STRING(BGl_string3189z00zz__evmodulez00,
		BgL_bgl_string3189za700za7za7_3516za7, "make-%evmodule", 14);
	      DEFINE_STRING(BGl_string3351z00zz__evmodulez00,
		BgL_bgl_string3351za700za7za7_3517za7, "import", 6);
	      DEFINE_STRING(BGl_string3271z00zz__evmodulez00,
		BgL_bgl_string3271za700za7za7_3518za7, "syntax", 6);
	      DEFINE_STRING(BGl_string3190z00zz__evmodulez00,
		BgL_bgl_string3190za700za7za7_3519za7, "pair", 4);
	      DEFINE_STRING(BGl_string3353z00zz__evmodulez00,
		BgL_bgl_string3353za700za7za7_3520za7, "use", 3);
	      DEFINE_STRING(BGl_string3191z00zz__evmodulez00,
		BgL_bgl_string3191za700za7za7_3521za7, "evmodule?", 9);
	      DEFINE_STRING(BGl_string3273z00zz__evmodulez00,
		BgL_bgl_string3273za700za7za7_3522za7, "expander", 8);
	      DEFINE_STRING(BGl_string3192z00zz__evmodulez00,
		BgL_bgl_string3192za700za7za7_3523za7, "symbol", 6);
	      DEFINE_STRING(BGl_string3355z00zz__evmodulez00,
		BgL_bgl_string3355za700za7za7_3524za7, "with", 4);
	      DEFINE_STRING(BGl_string3274z00zz__evmodulez00,
		BgL_bgl_string3274za700za7za7_3525za7, "KAP-763", 7);
	      DEFINE_STRING(BGl_string3193z00zz__evmodulez00,
		BgL_bgl_string3193za700za7za7_3526za7, "evmodule-name", 13);
	      DEFINE_STRING(BGl_string3275z00zz__evmodulez00,
		BgL_bgl_string3275za700za7za7_3527za7, "evmodule-import-binding!", 24);
	      DEFINE_STRING(BGl_string3194z00zz__evmodulez00,
		BgL_bgl_string3194za700za7za7_3528za7, "struct", 6);
	      DEFINE_STRING(BGl_string3357z00zz__evmodulez00,
		BgL_bgl_string3357za700za7za7_3529za7, "from", 4);
	      DEFINE_STRING(BGl_string3276z00zz__evmodulez00,
		BgL_bgl_string3276za700za7za7_3530za7, "ERROR: ", 7);
	      DEFINE_STRING(BGl_string3358z00zz__evmodulez00,
		BgL_bgl_string3358za700za7za7_3531za7, "<@anonymous:1947>", 17);
	      DEFINE_STRING(BGl_string3277z00zz__evmodulez00,
		BgL_bgl_string3277za700za7za7_3532za7, ":", 1);
	      DEFINE_STRING(BGl_string3196z00zz__evmodulez00,
		BgL_bgl_string3196za700za7za7_3533za7, "module", 6);
	      DEFINE_STRING(BGl_string3278z00zz__evmodulez00,
		BgL_bgl_string3278za700za7za7_3534za7, ",", 1);
	      DEFINE_STRING(BGl_string3197z00zz__evmodulez00,
		BgL_bgl_string3197za700za7za7_3535za7, "evmodule-path", 13);
	      DEFINE_STRING(BGl_string3279z00zz__evmodulez00,
		BgL_bgl_string3279za700za7za7_3536za7, "Eval/evmodule.scm", 17);
	      DEFINE_STRING(BGl_string3198z00zz__evmodulez00,
		BgL_bgl_string3198za700za7za7_3537za7, "evmodule-macro-table", 20);
	      DEFINE_STRING(BGl_string3199z00zz__evmodulez00,
		BgL_bgl_string3199za700za7za7_3538za7, "evmodule-extension", 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evmodulezd2findzd2globalzd2envzd2zz__evmodulez00,
		BgL_bgl_za762evmoduleza7d2fi3539z00,
		BGl_z62evmodulezd2findzd2globalz62zz__evmodulez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3360z00zz__evmodulez00,
		BgL_bgl_string3360za700za7za7_3540za7, "cond-expand", 11);
	      DEFINE_STRING(BGl_string3280z00zz__evmodulez00,
		BgL_bgl_string3280za700za7za7_3541za7,
		"Cannot find imported variable from module `", 43);
	      DEFINE_STRING(BGl_string3362z00zz__evmodulez00,
		BgL_bgl_string3362za700za7za7_3542za7, "begin", 5);
	      DEFINE_STRING(BGl_string3281z00zz__evmodulez00,
		BgL_bgl_string3281za700za7za7_3543za7, "'", 1);
	      DEFINE_STRING(BGl_string3363z00zz__evmodulez00,
		BgL_bgl_string3363za700za7za7_3544za7, "<@anonymous:1970>~0", 19);
	      DEFINE_STRING(BGl_string3364z00zz__evmodulez00,
		BgL_bgl_string3364za700za7za7_3545za7, "<@anonymous:1953>~0", 19);
	      DEFINE_STRING(BGl_string3283z00zz__evmodulez00,
		BgL_bgl_string3283za700za7za7_3546za7, "@", 1);
	      DEFINE_STRING(BGl_string3365z00zz__evmodulez00,
		BgL_bgl_string3365za700za7za7_3547za7, ".", 1);
	      DEFINE_STRING(BGl_string3284z00zz__evmodulez00,
		BgL_bgl_string3284za700za7za7_3548za7, "evmodule-check-unbound", 22);
	      DEFINE_STRING(BGl_string3366z00zz__evmodulez00,
		BgL_bgl_string3366za700za7za7_3549za7, "TAG-881", 7);
	      DEFINE_STRING(BGl_string3285z00zz__evmodulez00,
		BgL_bgl_string3285za700za7za7_3550za7, "s", 1);
	      DEFINE_STRING(BGl_string3367z00zz__evmodulez00,
		BgL_bgl_string3367za700za7za7_3551za7, "Illegal module clauses", 22);
	      DEFINE_STRING(BGl_string3286z00zz__evmodulez00,
		BgL_bgl_string3286za700za7za7_3552za7, "", 0);
	      DEFINE_STRING(BGl_string3368z00zz__evmodulez00,
		BgL_bgl_string3368za700za7za7_3553za7, "Illegal module expression", 25);
	      DEFINE_STRING(BGl_string3287z00zz__evmodulez00,
		BgL_bgl_string3287za700za7za7_3554za7, "~a unbound variable~a", 21);
	      DEFINE_STRING(BGl_string3369z00zz__evmodulez00,
		BgL_bgl_string3369za700za7za7_3555za7, "&evmodule", 9);
	      DEFINE_STRING(BGl_string3288z00zz__evmodulez00,
		BgL_bgl_string3288za700za7za7_3556za7, "<@anonymous:1662>", 17);
	      DEFINE_STRING(BGl_string3289z00zz__evmodulez00,
		BgL_bgl_string3289za700za7za7_3557za7, "map", 3);
	      DEFINE_STRING(BGl_string3370z00zz__evmodulez00,
		BgL_bgl_string3370za700za7za7_3558za7, "<@anonymous:1995>", 17);
	      DEFINE_STRING(BGl_string3371z00zz__evmodulez00,
		BgL_bgl_string3371za700za7za7_3559za7, "&evmodule-comp!", 15);
	      DEFINE_STRING(BGl_string3290z00zz__evmodulez00,
		BgL_bgl_string3290za700za7za7_3560za7, "~l", 2);
	      DEFINE_STRING(BGl_string3372z00zz__evmodulez00,
		BgL_bgl_string3372za700za7za7_3561za7, "evmodule-static-class", 21);
	      DEFINE_STRING(BGl_string3291z00zz__evmodulez00,
		BgL_bgl_string3291za700za7za7_3562za7, "<@exit:1639>~0", 14);
	      DEFINE_STRING(BGl_string3292z00zz__evmodulez00,
		BgL_bgl_string3292za700za7za7_3563za7, "Unbound variable", 16);
	      DEFINE_STRING(BGl_string3374z00zz__evmodulez00,
		BgL_bgl_string3374za700za7za7_3564za7, "define-class", 12);
	      DEFINE_STRING(BGl_string3293z00zz__evmodulez00,
		BgL_bgl_string3293za700za7za7_3565za7, "global-check-unbound", 20);
	      DEFINE_STRING(BGl_string3294z00zz__evmodulez00,
		BgL_bgl_string3294za700za7za7_3566za7, "evmodule-load", 13);
	      DEFINE_STRING(BGl_string3376z00zz__evmodulez00,
		BgL_bgl_string3376za700za7za7_3567za7, "define-final-class", 18);
	      DEFINE_STRING(BGl_string3295z00zz__evmodulez00,
		BgL_bgl_string3295za700za7za7_3568za7, "incorect user module loader", 27);
	      DEFINE_STRING(BGl_string3296z00zz__evmodulez00,
		BgL_bgl_string3296za700za7za7_3569za7, "<@anonymous:1692>", 17);
	      DEFINE_STRING(BGl_string3378z00zz__evmodulez00,
		BgL_bgl_string3378za700za7za7_3570za7, "define-abstract-class", 21);
	      DEFINE_STRING(BGl_string3297z00zz__evmodulez00,
		BgL_bgl_string3297za700za7za7_3571za7, "procedure", 9);
	      DEFINE_STRING(BGl_string3379z00zz__evmodulez00,
		BgL_bgl_string3379za700za7za7_3572za7, "&evmodule-static-class", 22);
	      DEFINE_STRING(BGl_string3298z00zz__evmodulez00,
		BgL_bgl_string3298za700za7za7_3573za7, "~a:cannot find module \"~a\"", 26);
	      DEFINE_STRING(BGl_string3299z00zz__evmodulez00,
		BgL_bgl_string3299za700za7za7_3574za7, "<@anonymous:1712>", 17);
	      DEFINE_STRING(BGl_string3380z00zz__evmodulez00,
		BgL_bgl_string3380za700za7za7_3575za7, "&call-with-eval-module", 22);
	      DEFINE_STRING(BGl_string3381z00zz__evmodulez00,
		BgL_bgl_string3381za700za7za7_3576za7, "__evmodule", 10);
	extern obj_t BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evalzd2modulezd2setz12zd2envzc0zz__evmodulez00,
		BgL_bgl_za762evalza7d2module3577z00,
		BGl_z62evalzd2modulezd2setz12z70zz__evmodulez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evalzd2modulezd2envz00zz__evmodulez00,
		BgL_bgl_za762evalza7d2module3578z00, BGl_z62evalzd2modulezb0zz__evmodulez00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evmodulezd2extensionzd2setz12zd2envzc0zz__evmodulez00,
		BgL_bgl_za762evmoduleza7d2ex3579z00,
		BGl_z62evmodulezd2extensionzd2setz12z70zz__evmodulez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_callzd2withzd2evalzd2modulezd2envz00zz__evmodulez00,
		BgL_bgl_za762callza7d2withza7d3580za7,
		BGl_z62callzd2withzd2evalzd2modulezb0zz__evmodulez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evmodulezd2envzd2zz__evmodulez00,
		BgL_bgl_za762evmoduleza762za7za73581z00, BGl_z62evmodulez62zz__evmodulez00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evmodulezd2checkzd2unboundzd2envzd2zz__evmodulez00,
		BgL_bgl_za762evmoduleza7d2ch3582z00,
		BGl_z62evmodulezd2checkzd2unboundz62zz__evmodulez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evmodulezf3zd2envz21zz__evmodulez00,
		BgL_bgl_za762evmoduleza7f3za793583za7, BGl_z62evmodulezf3z91zz__evmodulez00,
		0L, BUNSPEC, 1);
	extern obj_t BGl_readzd2envzd2zz__readerz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evalzd2findzd2modulezd2envzd2zz__evmodulez00,
		BgL_bgl_za762evalza7d2findza7d3584za7,
		BGl_z62evalzd2findzd2modulez62zz__evmodulez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evmodulezd2macrozd2tablezd2envzd2zz__evmodulez00,
		BgL_bgl_za762evmoduleza7d2ma3585z00,
		BGl_z62evmodulezd2macrozd2tablez62zz__evmodulez00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_makezd2z52evmodulezd2envz52zz__evmodulez00,
		BgL_bgl_za762makeza7d2za752evm3586za7, va_generic_entry,
		BGl_z62makezd2z52evmoduleze2zz__evmodulez00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evmodulezd2staticzd2classzd2envzd2zz__evmodulez00,
		BgL_bgl_za762evmoduleza7d2st3587z00,
		BGl_z62evmodulezd2staticzd2classz62zz__evmodulez00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol3373z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3375z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3377z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_za2moduleszd2mutexza2zd2zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_za2loadqzd2mutexza2zd2zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_za2loadingzd2listza2zd2zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_za2moduleszd2tableza2zd2zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3301z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3226z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3228z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3310z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3232z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3239z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3243z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3247z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3249z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3251z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3333z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3255z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3338z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3257z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_evmodulezd2uninitializa7edz75zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3341z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3343z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3345z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3184z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3347z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3186z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3268z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3350z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3270z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3352z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3272z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3354z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3356z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3195z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3359z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3361z00zz__evmodulez00));
		     ADD_ROOT((void *) (&BGl_symbol3282z00zz__evmodulez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__evmodulez00(long
		BgL_checksumz00_5497, char *BgL_fromz00_5498)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__evmodulez00))
				{
					BGl_requirezd2initializa7ationz75zz__evmodulez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__evmodulez00();
					BGl_cnstzd2initzd2zz__evmodulez00();
					BGl_importedzd2moduleszd2initz00zz__evmodulez00();
					return BGl_toplevelzd2initzd2zz__evmodulez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__evmodulez00()
	{
		{	/* Eval/evmodule.scm 15 */
			BGl_symbol3184z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3185z00zz__evmodulez00);
			BGl_symbol3186z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3187z00zz__evmodulez00);
			BGl_symbol3195z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3196z00zz__evmodulez00);
			BGl_symbol3226z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3227z00zz__evmodulez00);
			BGl_symbol3228z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3229z00zz__evmodulez00);
			BGl_symbol3232z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3233z00zz__evmodulez00);
			BGl_symbol3239z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3240z00zz__evmodulez00);
			BGl_symbol3243z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3244z00zz__evmodulez00);
			BGl_symbol3247z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3248z00zz__evmodulez00);
			BGl_symbol3249z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3250z00zz__evmodulez00);
			BGl_symbol3251z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3252z00zz__evmodulez00);
			BGl_symbol3255z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3256z00zz__evmodulez00);
			BGl_symbol3257z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3258z00zz__evmodulez00);
			BGl_symbol3268z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3269z00zz__evmodulez00);
			BGl_symbol3270z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3271z00zz__evmodulez00);
			BGl_symbol3272z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3273z00zz__evmodulez00);
			BGl_symbol3282z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3283z00zz__evmodulez00);
			BGl_symbol3301z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3183z00zz__evmodulez00);
			BGl_symbol3310z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3311z00zz__evmodulez00);
			BGl_symbol3333z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3334z00zz__evmodulez00);
			BGl_symbol3338z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3339z00zz__evmodulez00);
			BGl_symbol3341z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3342z00zz__evmodulez00);
			BGl_symbol3343z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3344z00zz__evmodulez00);
			BGl_symbol3345z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3346z00zz__evmodulez00);
			BGl_symbol3347z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3348z00zz__evmodulez00);
			BGl_symbol3350z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3351z00zz__evmodulez00);
			BGl_symbol3352z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3353z00zz__evmodulez00);
			BGl_symbol3354z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3355z00zz__evmodulez00);
			BGl_symbol3356z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3357z00zz__evmodulez00);
			BGl_symbol3359z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3360z00zz__evmodulez00);
			BGl_symbol3361z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3362z00zz__evmodulez00);
			BGl_symbol3373z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3374z00zz__evmodulez00);
			BGl_symbol3375z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3376z00zz__evmodulez00);
			return (BGl_symbol3377z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3378z00zz__evmodulez00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__evmodulez00()
	{
		{	/* Eval/evmodule.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__evmodulez00()
	{
		{	/* Eval/evmodule.scm 15 */
			{	/* Eval/evmodule.scm 93 */
				obj_t BgL_res2324z00_2847;

				BgL_res2324z00_2847 = bgl_make_mutex(BGl_string3182z00zz__evmodulez00);
				BGl_za2moduleszd2mutexza2zd2zz__evmodulez00 = BgL_res2324z00_2847;
			}
			{	/* Eval/evmodule.scm 94 */
				obj_t BgL_res2325z00_2848;

				BgL_res2325z00_2848 = bgl_make_mutex(BGl_string3183z00zz__evmodulez00);
				BGl_za2loadqzd2mutexza2zd2zz__evmodulez00 = BgL_res2325z00_2848;
			}
			BGl_evmodulezd2uninitializa7edz75zz__evmodulez00 =
				BGl_symbol3184z00zz__evmodulez00;
			BGl_za2moduleszd2tableza2zd2zz__evmodulez00 = BNIL;
			return (BGl_za2loadingzd2listza2zd2zz__evmodulez00 = BNIL, BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zz__evmodulez00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1218;

				BgL_headz00_1218 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_2867;
					obj_t BgL_tailz00_2868;

					BgL_prevz00_2867 = BgL_headz00_1218;
					BgL_tailz00_2868 = BgL_l1z00_1;
				BgL_loopz00_2866:
					if (PAIRP(BgL_tailz00_2868))
						{
							obj_t BgL_newzd2prevzd2_2874;

							BgL_newzd2prevzd2_2874 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_2868), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_2867, BgL_newzd2prevzd2_2874);
							{
								obj_t BgL_tailz00_5550;
								obj_t BgL_prevz00_5549;

								BgL_prevz00_5549 = BgL_newzd2prevzd2_2874;
								BgL_tailz00_5550 = CDR(BgL_tailz00_2868);
								BgL_tailz00_2868 = BgL_tailz00_5550;
								BgL_prevz00_2867 = BgL_prevz00_5549;
								goto BgL_loopz00_2866;
							}
						}
					else
						{
							BNIL;
						}
				}
				return CDR(BgL_headz00_1218);
			}
		}

	}



/* untype-ident */
	obj_t BGl_untypezd2identzd2zz__evmodulez00(obj_t BgL_idz00_3)
	{
		{	/* Eval/evmodule.scm 105 */
			if (SYMBOLP(BgL_idz00_3))
				{	/* Eval/evmodule.scm 108 */
					obj_t BgL_stringz00_1227;

					{	/* Eval/evmodule.scm 108 */
						obj_t BgL_res2331z00_2885;

						{	/* Eval/evmodule.scm 108 */
							obj_t BgL_arg2175z00_2884;

							BgL_arg2175z00_2884 = SYMBOL_TO_STRING(BgL_idz00_3);
							BgL_res2331z00_2885 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2175z00_2884);
						}
						BgL_stringz00_1227 = BgL_res2331z00_2885;
					}
					{	/* Eval/evmodule.scm 108 */
						long BgL_lenz00_1228;

						BgL_lenz00_1228 = STRING_LENGTH(BgL_stringz00_1227);
						{	/* Eval/evmodule.scm 109 */

							{
								long BgL_walkerz00_1230;

								BgL_walkerz00_1230 = ((long) 0);
							BgL_zc3z04anonymousza31287ze3z87_1231:
								if ((BgL_walkerz00_1230 == BgL_lenz00_1228))
									{	/* Eval/evmodule.scm 112 */
										return BgL_idz00_3;
									}
								else
									{	/* Eval/evmodule.scm 114 */
										bool_t BgL_test3592z00_5560;

										if (
											(STRING_REF(BgL_stringz00_1227,
													BgL_walkerz00_1230) == ((unsigned char) ':')))
											{	/* Eval/evmodule.scm 114 */
												if (
													(BgL_walkerz00_1230 < (BgL_lenz00_1228 - ((long) 1))))
													{	/* Eval/evmodule.scm 115 */
														BgL_test3592z00_5560 =
															(STRING_REF(BgL_stringz00_1227,
																(BgL_walkerz00_1230 + ((long) 1))) ==
															((unsigned char) ':'));
													}
												else
													{	/* Eval/evmodule.scm 115 */
														BgL_test3592z00_5560 = ((bool_t) 0);
													}
											}
										else
											{	/* Eval/evmodule.scm 114 */
												BgL_test3592z00_5560 = ((bool_t) 0);
											}
										if (BgL_test3592z00_5560)
											{	/* Eval/evmodule.scm 114 */
												return
													bstring_to_symbol(c_substring(BgL_stringz00_1227,
														((long) 0), BgL_walkerz00_1230));
											}
										else
											{
												long BgL_walkerz00_5572;

												BgL_walkerz00_5572 = (BgL_walkerz00_1230 + ((long) 1));
												BgL_walkerz00_1230 = BgL_walkerz00_5572;
												goto BgL_zc3z04anonymousza31287ze3z87_1231;
											}
									}
							}
						}
					}
				}
			else
				{	/* Eval/evmodule.scm 106 */
					return BgL_idz00_3;
				}
		}

	}



/* &make-%evmodule */
	obj_t BGl_z62makezd2z52evmoduleze2zz__evmodulez00(obj_t BgL_envz00_4402,
		obj_t BgL_initz00_4403)
	{
		{	/* Eval/evmodule.scm 129 */
			if (PAIRP(BgL_initz00_4403))
				{	/* Eval/evmodule.scm 129 */
					if (NULLP(CDR(BgL_initz00_4403)))
						{	/* Eval/evmodule.scm 129 */
							obj_t BgL_arg1310z00_5117;

							BgL_arg1310z00_5117 = CAR(BgL_initz00_4403);
							return
								make_struct(BGl_symbol3186z00zz__evmodulez00,
								(int) (((long) 7)), BgL_arg1310z00_5117);
						}
					else
						{	/* Eval/evmodule.scm 129 */
							obj_t BgL_runner1318z00_5120;

							BgL_runner1318z00_5120 = BgL_initz00_4403;
							{	/* Eval/evmodule.scm 129 */
								obj_t BgL_aux1311z00_5121;

								{	/* Eval/evmodule.scm 129 */
									obj_t BgL_pairz00_5122;

									{	/* Eval/evmodule.scm 129 */
										obj_t BgL_aux2666z00_5123;

										BgL_aux2666z00_5123 = BgL_runner1318z00_5120;
										if (PAIRP(BgL_aux2666z00_5123))
											{	/* Eval/evmodule.scm 129 */
												BgL_pairz00_5122 = BgL_aux2666z00_5123;
											}
										else
											{
												obj_t BgL_auxz00_5584;

												BgL_auxz00_5584 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3188z00zz__evmodulez00,
													BINT(((long) 4439)), BGl_string3189z00zz__evmodulez00,
													BGl_string3190z00zz__evmodulez00,
													BgL_aux2666z00_5123);
												FAILURE(BgL_auxz00_5584, BFALSE, BFALSE);
									}}
									BgL_aux1311z00_5121 = CAR(BgL_pairz00_5122);
								}
								{	/* Eval/evmodule.scm 129 */
									obj_t BgL_pairz00_5124;

									{	/* Eval/evmodule.scm 129 */
										obj_t BgL_aux2668z00_5125;

										BgL_aux2668z00_5125 = BgL_runner1318z00_5120;
										if (PAIRP(BgL_aux2668z00_5125))
											{	/* Eval/evmodule.scm 129 */
												BgL_pairz00_5124 = BgL_aux2668z00_5125;
											}
										else
											{
												obj_t BgL_auxz00_5591;

												BgL_auxz00_5591 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3188z00zz__evmodulez00,
													BINT(((long) 4439)), BGl_string3189z00zz__evmodulez00,
													BGl_string3190z00zz__evmodulez00,
													BgL_aux2668z00_5125);
												FAILURE(BgL_auxz00_5591, BFALSE, BFALSE);
									}}
									BgL_runner1318z00_5120 = CDR(BgL_pairz00_5124);
								}
								{	/* Eval/evmodule.scm 129 */
									obj_t BgL_aux1312z00_5126;

									{	/* Eval/evmodule.scm 129 */
										obj_t BgL_pairz00_5127;

										{	/* Eval/evmodule.scm 129 */
											obj_t BgL_aux2670z00_5128;

											BgL_aux2670z00_5128 = BgL_runner1318z00_5120;
											if (PAIRP(BgL_aux2670z00_5128))
												{	/* Eval/evmodule.scm 129 */
													BgL_pairz00_5127 = BgL_aux2670z00_5128;
												}
											else
												{
													obj_t BgL_auxz00_5598;

													BgL_auxz00_5598 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3188z00zz__evmodulez00,
														BINT(((long) 4439)),
														BGl_string3189z00zz__evmodulez00,
														BGl_string3190z00zz__evmodulez00,
														BgL_aux2670z00_5128);
													FAILURE(BgL_auxz00_5598, BFALSE, BFALSE);
										}}
										BgL_aux1312z00_5126 = CAR(BgL_pairz00_5127);
									}
									{	/* Eval/evmodule.scm 129 */
										obj_t BgL_pairz00_5129;

										{	/* Eval/evmodule.scm 129 */
											obj_t BgL_aux2672z00_5130;

											BgL_aux2672z00_5130 = BgL_runner1318z00_5120;
											if (PAIRP(BgL_aux2672z00_5130))
												{	/* Eval/evmodule.scm 129 */
													BgL_pairz00_5129 = BgL_aux2672z00_5130;
												}
											else
												{
													obj_t BgL_auxz00_5605;

													BgL_auxz00_5605 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3188z00zz__evmodulez00,
														BINT(((long) 4439)),
														BGl_string3189z00zz__evmodulez00,
														BGl_string3190z00zz__evmodulez00,
														BgL_aux2672z00_5130);
													FAILURE(BgL_auxz00_5605, BFALSE, BFALSE);
										}}
										BgL_runner1318z00_5120 = CDR(BgL_pairz00_5129);
									}
									{	/* Eval/evmodule.scm 129 */
										obj_t BgL_aux1313z00_5131;

										{	/* Eval/evmodule.scm 129 */
											obj_t BgL_pairz00_5132;

											{	/* Eval/evmodule.scm 129 */
												obj_t BgL_aux2674z00_5133;

												BgL_aux2674z00_5133 = BgL_runner1318z00_5120;
												if (PAIRP(BgL_aux2674z00_5133))
													{	/* Eval/evmodule.scm 129 */
														BgL_pairz00_5132 = BgL_aux2674z00_5133;
													}
												else
													{
														obj_t BgL_auxz00_5612;

														BgL_auxz00_5612 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3188z00zz__evmodulez00,
															BINT(((long) 4439)),
															BGl_string3189z00zz__evmodulez00,
															BGl_string3190z00zz__evmodulez00,
															BgL_aux2674z00_5133);
														FAILURE(BgL_auxz00_5612, BFALSE, BFALSE);
											}}
											BgL_aux1313z00_5131 = CAR(BgL_pairz00_5132);
										}
										{	/* Eval/evmodule.scm 129 */
											obj_t BgL_pairz00_5134;

											{	/* Eval/evmodule.scm 129 */
												obj_t BgL_aux2676z00_5135;

												BgL_aux2676z00_5135 = BgL_runner1318z00_5120;
												if (PAIRP(BgL_aux2676z00_5135))
													{	/* Eval/evmodule.scm 129 */
														BgL_pairz00_5134 = BgL_aux2676z00_5135;
													}
												else
													{
														obj_t BgL_auxz00_5619;

														BgL_auxz00_5619 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3188z00zz__evmodulez00,
															BINT(((long) 4439)),
															BGl_string3189z00zz__evmodulez00,
															BGl_string3190z00zz__evmodulez00,
															BgL_aux2676z00_5135);
														FAILURE(BgL_auxz00_5619, BFALSE, BFALSE);
											}}
											BgL_runner1318z00_5120 = CDR(BgL_pairz00_5134);
										}
										{	/* Eval/evmodule.scm 129 */
											obj_t BgL_aux1314z00_5136;

											{	/* Eval/evmodule.scm 129 */
												obj_t BgL_pairz00_5137;

												{	/* Eval/evmodule.scm 129 */
													obj_t BgL_aux2678z00_5138;

													BgL_aux2678z00_5138 = BgL_runner1318z00_5120;
													if (PAIRP(BgL_aux2678z00_5138))
														{	/* Eval/evmodule.scm 129 */
															BgL_pairz00_5137 = BgL_aux2678z00_5138;
														}
													else
														{
															obj_t BgL_auxz00_5626;

															BgL_auxz00_5626 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3188z00zz__evmodulez00,
																BINT(((long) 4439)),
																BGl_string3189z00zz__evmodulez00,
																BGl_string3190z00zz__evmodulez00,
																BgL_aux2678z00_5138);
															FAILURE(BgL_auxz00_5626, BFALSE, BFALSE);
												}}
												BgL_aux1314z00_5136 = CAR(BgL_pairz00_5137);
											}
											{	/* Eval/evmodule.scm 129 */
												obj_t BgL_pairz00_5139;

												{	/* Eval/evmodule.scm 129 */
													obj_t BgL_aux2680z00_5140;

													BgL_aux2680z00_5140 = BgL_runner1318z00_5120;
													if (PAIRP(BgL_aux2680z00_5140))
														{	/* Eval/evmodule.scm 129 */
															BgL_pairz00_5139 = BgL_aux2680z00_5140;
														}
													else
														{
															obj_t BgL_auxz00_5633;

															BgL_auxz00_5633 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3188z00zz__evmodulez00,
																BINT(((long) 4439)),
																BGl_string3189z00zz__evmodulez00,
																BGl_string3190z00zz__evmodulez00,
																BgL_aux2680z00_5140);
															FAILURE(BgL_auxz00_5633, BFALSE, BFALSE);
												}}
												BgL_runner1318z00_5120 = CDR(BgL_pairz00_5139);
											}
											{	/* Eval/evmodule.scm 129 */
												obj_t BgL_aux1315z00_5141;

												{	/* Eval/evmodule.scm 129 */
													obj_t BgL_pairz00_5142;

													{	/* Eval/evmodule.scm 129 */
														obj_t BgL_aux2682z00_5143;

														BgL_aux2682z00_5143 = BgL_runner1318z00_5120;
														if (PAIRP(BgL_aux2682z00_5143))
															{	/* Eval/evmodule.scm 129 */
																BgL_pairz00_5142 = BgL_aux2682z00_5143;
															}
														else
															{
																obj_t BgL_auxz00_5640;

																BgL_auxz00_5640 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3188z00zz__evmodulez00,
																	BINT(((long) 4439)),
																	BGl_string3189z00zz__evmodulez00,
																	BGl_string3190z00zz__evmodulez00,
																	BgL_aux2682z00_5143);
																FAILURE(BgL_auxz00_5640, BFALSE, BFALSE);
													}}
													BgL_aux1315z00_5141 = CAR(BgL_pairz00_5142);
												}
												{	/* Eval/evmodule.scm 129 */
													obj_t BgL_pairz00_5144;

													{	/* Eval/evmodule.scm 129 */
														obj_t BgL_aux2684z00_5145;

														BgL_aux2684z00_5145 = BgL_runner1318z00_5120;
														if (PAIRP(BgL_aux2684z00_5145))
															{	/* Eval/evmodule.scm 129 */
																BgL_pairz00_5144 = BgL_aux2684z00_5145;
															}
														else
															{
																obj_t BgL_auxz00_5647;

																BgL_auxz00_5647 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3188z00zz__evmodulez00,
																	BINT(((long) 4439)),
																	BGl_string3189z00zz__evmodulez00,
																	BGl_string3190z00zz__evmodulez00,
																	BgL_aux2684z00_5145);
																FAILURE(BgL_auxz00_5647, BFALSE, BFALSE);
													}}
													BgL_runner1318z00_5120 = CDR(BgL_pairz00_5144);
												}
												{	/* Eval/evmodule.scm 129 */
													obj_t BgL_aux1316z00_5146;

													{	/* Eval/evmodule.scm 129 */
														obj_t BgL_pairz00_5147;

														{	/* Eval/evmodule.scm 129 */
															obj_t BgL_aux2686z00_5148;

															BgL_aux2686z00_5148 = BgL_runner1318z00_5120;
															if (PAIRP(BgL_aux2686z00_5148))
																{	/* Eval/evmodule.scm 129 */
																	BgL_pairz00_5147 = BgL_aux2686z00_5148;
																}
															else
																{
																	obj_t BgL_auxz00_5654;

																	BgL_auxz00_5654 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string3188z00zz__evmodulez00,
																		BINT(((long) 4439)),
																		BGl_string3189z00zz__evmodulez00,
																		BGl_string3190z00zz__evmodulez00,
																		BgL_aux2686z00_5148);
																	FAILURE(BgL_auxz00_5654, BFALSE, BFALSE);
														}}
														BgL_aux1316z00_5146 = CAR(BgL_pairz00_5147);
													}
													{	/* Eval/evmodule.scm 129 */
														obj_t BgL_pairz00_5149;

														{	/* Eval/evmodule.scm 129 */
															obj_t BgL_aux2688z00_5150;

															BgL_aux2688z00_5150 = BgL_runner1318z00_5120;
															if (PAIRP(BgL_aux2688z00_5150))
																{	/* Eval/evmodule.scm 129 */
																	BgL_pairz00_5149 = BgL_aux2688z00_5150;
																}
															else
																{
																	obj_t BgL_auxz00_5661;

																	BgL_auxz00_5661 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string3188z00zz__evmodulez00,
																		BINT(((long) 4439)),
																		BGl_string3189z00zz__evmodulez00,
																		BGl_string3190z00zz__evmodulez00,
																		BgL_aux2688z00_5150);
																	FAILURE(BgL_auxz00_5661, BFALSE, BFALSE);
														}}
														BgL_runner1318z00_5120 = CDR(BgL_pairz00_5149);
													}
													{	/* Eval/evmodule.scm 129 */
														obj_t BgL_aux1317z00_5151;

														{	/* Eval/evmodule.scm 129 */
															obj_t BgL_pairz00_5152;

															{	/* Eval/evmodule.scm 129 */
																obj_t BgL_aux2690z00_5153;

																BgL_aux2690z00_5153 = BgL_runner1318z00_5120;
																if (PAIRP(BgL_aux2690z00_5153))
																	{	/* Eval/evmodule.scm 129 */
																		BgL_pairz00_5152 = BgL_aux2690z00_5153;
																	}
																else
																	{
																		obj_t BgL_auxz00_5668;

																		BgL_auxz00_5668 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string3188z00zz__evmodulez00,
																			BINT(((long) 4439)),
																			BGl_string3189z00zz__evmodulez00,
																			BGl_string3190z00zz__evmodulez00,
																			BgL_aux2690z00_5153);
																		FAILURE(BgL_auxz00_5668, BFALSE, BFALSE);
															}}
															BgL_aux1317z00_5151 = CAR(BgL_pairz00_5152);
														}
														{	/* Eval/evmodule.scm 129 */
															obj_t BgL_newz00_5154;

															BgL_newz00_5154 =
																create_struct(BGl_symbol3186z00zz__evmodulez00,
																(int) (((long) 7)));
															{	/* Eval/evmodule.scm 129 */
																int BgL_tmpz00_5675;

																BgL_tmpz00_5675 = (int) (((long) 6));
																STRUCT_SET(BgL_newz00_5154, BgL_tmpz00_5675,
																	BgL_aux1317z00_5151);
															}
															{	/* Eval/evmodule.scm 129 */
																int BgL_tmpz00_5678;

																BgL_tmpz00_5678 = (int) (((long) 5));
																STRUCT_SET(BgL_newz00_5154, BgL_tmpz00_5678,
																	BgL_aux1316z00_5146);
															}
															{	/* Eval/evmodule.scm 129 */
																int BgL_tmpz00_5681;

																BgL_tmpz00_5681 = (int) (((long) 4));
																STRUCT_SET(BgL_newz00_5154, BgL_tmpz00_5681,
																	BgL_aux1315z00_5141);
															}
															{	/* Eval/evmodule.scm 129 */
																int BgL_tmpz00_5684;

																BgL_tmpz00_5684 = (int) (((long) 3));
																STRUCT_SET(BgL_newz00_5154, BgL_tmpz00_5684,
																	BgL_aux1314z00_5136);
															}
															{	/* Eval/evmodule.scm 129 */
																int BgL_tmpz00_5687;

																BgL_tmpz00_5687 = (int) (((long) 2));
																STRUCT_SET(BgL_newz00_5154, BgL_tmpz00_5687,
																	BgL_aux1313z00_5131);
															}
															{	/* Eval/evmodule.scm 129 */
																int BgL_tmpz00_5690;

																BgL_tmpz00_5690 = (int) (((long) 1));
																STRUCT_SET(BgL_newz00_5154, BgL_tmpz00_5690,
																	BgL_aux1312z00_5126);
															}
															{	/* Eval/evmodule.scm 129 */
																int BgL_tmpz00_5693;

																BgL_tmpz00_5693 = (int) (((long) 0));
																STRUCT_SET(BgL_newz00_5154, BgL_tmpz00_5693,
																	BgL_aux1311z00_5121);
															}
															return BgL_newz00_5154;
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
				{	/* Eval/evmodule.scm 129 */
					return
						make_struct(BGl_symbol3186z00zz__evmodulez00,
						(int) (((long) 7)), BNIL);
		}}

	}



/* evmodule? */
	BGL_EXPORTED_DEF bool_t BGl_evmodulezf3zf3zz__evmodulez00(obj_t BgL_objz00_34)
	{
		{	/* Eval/evmodule.scm 134 */
			{	/* Eval/evmodule.scm 135 */
				bool_t BgL_test3610z00_5698;

				if (STRUCTP(BgL_objz00_34))
					{	/* Eval/evmodule.scm 129 */
						obj_t BgL_tmpz00_5701;

						{	/* Eval/evmodule.scm 129 */
							obj_t BgL_res2351z00_2991;

							{	/* Eval/evmodule.scm 129 */
								obj_t BgL_aux2692z00_4586;

								BgL_aux2692z00_4586 = STRUCT_KEY(BgL_objz00_34);
								if (SYMBOLP(BgL_aux2692z00_4586))
									{	/* Eval/evmodule.scm 129 */
										BgL_res2351z00_2991 = BgL_aux2692z00_4586;
									}
								else
									{
										obj_t BgL_auxz00_5705;

										BgL_auxz00_5705 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3188z00zz__evmodulez00, BINT(((long) 4439)),
											BGl_string3191z00zz__evmodulez00,
											BGl_string3192z00zz__evmodulez00, BgL_aux2692z00_4586);
										FAILURE(BgL_auxz00_5705, BFALSE, BFALSE);
							}}
							BgL_tmpz00_5701 = BgL_res2351z00_2991;
						}
						BgL_test3610z00_5698 =
							(BgL_tmpz00_5701 == BGl_symbol3186z00zz__evmodulez00);
					}
				else
					{	/* Eval/evmodule.scm 129 */
						BgL_test3610z00_5698 = ((bool_t) 0);
					}
				if (BgL_test3610z00_5698)
					{	/* Eval/evmodule.scm 135 */
						return
							(STRUCT_REF(BgL_objz00_34,
								(int) (((long) 0))) ==
							BGl_makezd2z52evmodulezd2envz52zz__evmodulez00);
					}
				else
					{	/* Eval/evmodule.scm 135 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* &evmodule? */
	obj_t BGl_z62evmodulezf3z91zz__evmodulez00(obj_t BgL_envz00_4404,
		obj_t BgL_objz00_4405)
	{
		{	/* Eval/evmodule.scm 134 */
			return BBOOL(BGl_evmodulezf3zf3zz__evmodulez00(BgL_objz00_4405));
		}

	}



/* evmodule-name */
	BGL_EXPORTED_DEF obj_t BGl_evmodulezd2namezd2zz__evmodulez00(obj_t
		BgL_modz00_35)
	{
		{	/* Eval/evmodule.scm 140 */
			{	/* Eval/evmodule.scm 141 */
				bool_t BgL_test3613z00_5715;

				{	/* Eval/evmodule.scm 135 */
					bool_t BgL_test3614z00_5716;

					if (STRUCTP(BgL_modz00_35))
						{	/* Eval/evmodule.scm 129 */
							obj_t BgL_tmpz00_5719;

							{	/* Eval/evmodule.scm 129 */
								obj_t BgL_res2353z00_3000;

								{	/* Eval/evmodule.scm 129 */
									obj_t BgL_aux2694z00_4588;

									BgL_aux2694z00_4588 = STRUCT_KEY(BgL_modz00_35);
									if (SYMBOLP(BgL_aux2694z00_4588))
										{	/* Eval/evmodule.scm 129 */
											BgL_res2353z00_3000 = BgL_aux2694z00_4588;
										}
									else
										{
											obj_t BgL_auxz00_5723;

											BgL_auxz00_5723 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3188z00zz__evmodulez00, BINT(((long) 4439)),
												BGl_string3193z00zz__evmodulez00,
												BGl_string3192z00zz__evmodulez00, BgL_aux2694z00_4588);
											FAILURE(BgL_auxz00_5723, BFALSE, BFALSE);
								}}
								BgL_tmpz00_5719 = BgL_res2353z00_3000;
							}
							BgL_test3614z00_5716 =
								(BgL_tmpz00_5719 == BGl_symbol3186z00zz__evmodulez00);
						}
					else
						{	/* Eval/evmodule.scm 129 */
							BgL_test3614z00_5716 = ((bool_t) 0);
						}
					if (BgL_test3614z00_5716)
						{	/* Eval/evmodule.scm 135 */
							BgL_test3613z00_5715 =
								(STRUCT_REF(BgL_modz00_35,
									(int) (((long) 0))) ==
								BGl_makezd2z52evmodulezd2envz52zz__evmodulez00);
						}
					else
						{	/* Eval/evmodule.scm 135 */
							BgL_test3613z00_5715 = ((bool_t) 0);
						}
				}
				if (BgL_test3613z00_5715)
					{	/* Eval/evmodule.scm 129 */
						obj_t BgL_sz00_3003;

						{	/* Eval/evmodule.scm 129 */
							obj_t BgL_aux2696z00_4590;

							BgL_aux2696z00_4590 = BgL_modz00_35;
							if (STRUCTP(BgL_aux2696z00_4590))
								{	/* Eval/evmodule.scm 129 */
									BgL_sz00_3003 = BgL_aux2696z00_4590;
								}
							else
								{
									obj_t BgL_auxz00_5733;

									BgL_auxz00_5733 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3188z00zz__evmodulez00, BINT(((long) 4439)),
										BGl_string3193z00zz__evmodulez00,
										BGl_string3194z00zz__evmodulez00, BgL_aux2696z00_4590);
									FAILURE(BgL_auxz00_5733, BFALSE, BFALSE);
						}}
						{	/* Eval/evmodule.scm 129 */
							obj_t BgL_aux2698z00_4592;

							BgL_aux2698z00_4592 =
								STRUCT_REF(BgL_sz00_3003, (int) (((long) 1)));
							if (SYMBOLP(BgL_aux2698z00_4592))
								{	/* Eval/evmodule.scm 129 */
									return BgL_aux2698z00_4592;
								}
							else
								{
									obj_t BgL_auxz00_5741;

									BgL_auxz00_5741 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3188z00zz__evmodulez00, BINT(((long) 4439)),
										BGl_string3193z00zz__evmodulez00,
										BGl_string3192z00zz__evmodulez00, BgL_aux2698z00_4592);
									FAILURE(BgL_auxz00_5741, BFALSE, BFALSE);
					}}}
				else
					{	/* Eval/evmodule.scm 143 */
						obj_t BgL_aux2700z00_4594;

						BgL_aux2700z00_4594 =
							BGl_bigloozd2typezd2errorz00zz__errorz00
							(BGl_string3193z00zz__evmodulez00,
							BGl_symbol3195z00zz__evmodulez00, BgL_modz00_35);
						if (SYMBOLP(BgL_aux2700z00_4594))
							{	/* Eval/evmodule.scm 143 */
								return BgL_aux2700z00_4594;
							}
						else
							{
								obj_t BgL_auxz00_5748;

								BgL_auxz00_5748 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3188z00zz__evmodulez00, BINT(((long) 5128)),
									BGl_string3193z00zz__evmodulez00,
									BGl_string3192z00zz__evmodulez00, BgL_aux2700z00_4594);
								FAILURE(BgL_auxz00_5748, BFALSE, BFALSE);
		}}}}

	}



/* &evmodule-name */
	obj_t BGl_z62evmodulezd2namezb0zz__evmodulez00(obj_t BgL_envz00_4406,
		obj_t BgL_modz00_4407)
	{
		{	/* Eval/evmodule.scm 140 */
			return BGl_evmodulezd2namezd2zz__evmodulez00(BgL_modz00_4407);
		}

	}



/* evmodule-path */
	BGL_EXPORTED_DEF obj_t BGl_evmodulezd2pathzd2zz__evmodulez00(obj_t
		BgL_modz00_36)
	{
		{	/* Eval/evmodule.scm 148 */
			{	/* Eval/evmodule.scm 149 */
				bool_t BgL_test3620z00_5753;

				{	/* Eval/evmodule.scm 135 */
					bool_t BgL_test3621z00_5754;

					if (STRUCTP(BgL_modz00_36))
						{	/* Eval/evmodule.scm 129 */
							obj_t BgL_tmpz00_5757;

							{	/* Eval/evmodule.scm 129 */
								obj_t BgL_res2356z00_3011;

								{	/* Eval/evmodule.scm 129 */
									obj_t BgL_aux2702z00_4596;

									BgL_aux2702z00_4596 = STRUCT_KEY(BgL_modz00_36);
									if (SYMBOLP(BgL_aux2702z00_4596))
										{	/* Eval/evmodule.scm 129 */
											BgL_res2356z00_3011 = BgL_aux2702z00_4596;
										}
									else
										{
											obj_t BgL_auxz00_5761;

											BgL_auxz00_5761 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3188z00zz__evmodulez00, BINT(((long) 4439)),
												BGl_string3197z00zz__evmodulez00,
												BGl_string3192z00zz__evmodulez00, BgL_aux2702z00_4596);
											FAILURE(BgL_auxz00_5761, BFALSE, BFALSE);
								}}
								BgL_tmpz00_5757 = BgL_res2356z00_3011;
							}
							BgL_test3621z00_5754 =
								(BgL_tmpz00_5757 == BGl_symbol3186z00zz__evmodulez00);
						}
					else
						{	/* Eval/evmodule.scm 129 */
							BgL_test3621z00_5754 = ((bool_t) 0);
						}
					if (BgL_test3621z00_5754)
						{	/* Eval/evmodule.scm 135 */
							BgL_test3620z00_5753 =
								(STRUCT_REF(BgL_modz00_36,
									(int) (((long) 0))) ==
								BGl_makezd2z52evmodulezd2envz52zz__evmodulez00);
						}
					else
						{	/* Eval/evmodule.scm 135 */
							BgL_test3620z00_5753 = ((bool_t) 0);
						}
				}
				if (BgL_test3620z00_5753)
					{	/* Eval/evmodule.scm 129 */
						obj_t BgL_sz00_3014;

						{	/* Eval/evmodule.scm 129 */
							obj_t BgL_aux2704z00_4598;

							BgL_aux2704z00_4598 = BgL_modz00_36;
							if (STRUCTP(BgL_aux2704z00_4598))
								{	/* Eval/evmodule.scm 129 */
									BgL_sz00_3014 = BgL_aux2704z00_4598;
								}
							else
								{
									obj_t BgL_auxz00_5771;

									BgL_auxz00_5771 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3188z00zz__evmodulez00, BINT(((long) 4439)),
										BGl_string3197z00zz__evmodulez00,
										BGl_string3194z00zz__evmodulez00, BgL_aux2704z00_4598);
									FAILURE(BgL_auxz00_5771, BFALSE, BFALSE);
						}}
						return STRUCT_REF(BgL_sz00_3014, (int) (((long) 2)));
					}
				else
					{	/* Eval/evmodule.scm 149 */
						return
							BGl_bigloozd2typezd2errorz00zz__errorz00
							(BGl_string3197z00zz__evmodulez00,
							BGl_symbol3195z00zz__evmodulez00, BgL_modz00_36);
					}
			}
		}

	}



/* &evmodule-path */
	obj_t BGl_z62evmodulezd2pathzb0zz__evmodulez00(obj_t BgL_envz00_4408,
		obj_t BgL_modz00_4409)
	{
		{	/* Eval/evmodule.scm 148 */
			return BGl_evmodulezd2pathzd2zz__evmodulez00(BgL_modz00_4409);
		}

	}



/* evmodule-macro-table */
	BGL_EXPORTED_DEF obj_t BGl_evmodulezd2macrozd2tablez00zz__evmodulez00(obj_t
		BgL_modz00_37)
	{
		{	/* Eval/evmodule.scm 156 */
			{	/* Eval/evmodule.scm 157 */
				bool_t BgL_test3625z00_5779;

				{	/* Eval/evmodule.scm 135 */
					bool_t BgL_test3626z00_5780;

					if (STRUCTP(BgL_modz00_37))
						{	/* Eval/evmodule.scm 129 */
							obj_t BgL_tmpz00_5783;

							{	/* Eval/evmodule.scm 129 */
								obj_t BgL_res2359z00_3022;

								{	/* Eval/evmodule.scm 129 */
									obj_t BgL_aux2706z00_4600;

									BgL_aux2706z00_4600 = STRUCT_KEY(BgL_modz00_37);
									if (SYMBOLP(BgL_aux2706z00_4600))
										{	/* Eval/evmodule.scm 129 */
											BgL_res2359z00_3022 = BgL_aux2706z00_4600;
										}
									else
										{
											obj_t BgL_auxz00_5787;

											BgL_auxz00_5787 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3188z00zz__evmodulez00, BINT(((long) 4439)),
												BGl_string3198z00zz__evmodulez00,
												BGl_string3192z00zz__evmodulez00, BgL_aux2706z00_4600);
											FAILURE(BgL_auxz00_5787, BFALSE, BFALSE);
								}}
								BgL_tmpz00_5783 = BgL_res2359z00_3022;
							}
							BgL_test3626z00_5780 =
								(BgL_tmpz00_5783 == BGl_symbol3186z00zz__evmodulez00);
						}
					else
						{	/* Eval/evmodule.scm 129 */
							BgL_test3626z00_5780 = ((bool_t) 0);
						}
					if (BgL_test3626z00_5780)
						{	/* Eval/evmodule.scm 135 */
							BgL_test3625z00_5779 =
								(STRUCT_REF(BgL_modz00_37,
									(int) (((long) 0))) ==
								BGl_makezd2z52evmodulezd2envz52zz__evmodulez00);
						}
					else
						{	/* Eval/evmodule.scm 135 */
							BgL_test3625z00_5779 = ((bool_t) 0);
						}
				}
				if (BgL_test3625z00_5779)
					{	/* Eval/evmodule.scm 129 */
						obj_t BgL_sz00_3025;

						{	/* Eval/evmodule.scm 129 */
							obj_t BgL_aux2708z00_4602;

							BgL_aux2708z00_4602 = BgL_modz00_37;
							if (STRUCTP(BgL_aux2708z00_4602))
								{	/* Eval/evmodule.scm 129 */
									BgL_sz00_3025 = BgL_aux2708z00_4602;
								}
							else
								{
									obj_t BgL_auxz00_5797;

									BgL_auxz00_5797 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3188z00zz__evmodulez00, BINT(((long) 4439)),
										BGl_string3198z00zz__evmodulez00,
										BGl_string3194z00zz__evmodulez00, BgL_aux2708z00_4602);
									FAILURE(BgL_auxz00_5797, BFALSE, BFALSE);
						}}
						return STRUCT_REF(BgL_sz00_3025, (int) (((long) 5)));
					}
				else
					{	/* Eval/evmodule.scm 157 */
						return
							BGl_bigloozd2typezd2errorz00zz__errorz00
							(BGl_string3198z00zz__evmodulez00,
							BGl_symbol3195z00zz__evmodulez00, BgL_modz00_37);
					}
			}
		}

	}



/* &evmodule-macro-table */
	obj_t BGl_z62evmodulezd2macrozd2tablez62zz__evmodulez00(obj_t BgL_envz00_4410,
		obj_t BgL_modz00_4411)
	{
		{	/* Eval/evmodule.scm 156 */
			return BGl_evmodulezd2macrozd2tablez00zz__evmodulez00(BgL_modz00_4411);
		}

	}



/* evmodule-extension */
	BGL_EXPORTED_DEF obj_t BGl_evmodulezd2extensionzd2zz__evmodulez00(obj_t
		BgL_modz00_38)
	{
		{	/* Eval/evmodule.scm 164 */
			{	/* Eval/evmodule.scm 165 */
				bool_t BgL_test3630z00_5805;

				{	/* Eval/evmodule.scm 135 */
					bool_t BgL_test3631z00_5806;

					if (STRUCTP(BgL_modz00_38))
						{	/* Eval/evmodule.scm 129 */
							obj_t BgL_tmpz00_5809;

							{	/* Eval/evmodule.scm 129 */
								obj_t BgL_res2362z00_3033;

								{	/* Eval/evmodule.scm 129 */
									obj_t BgL_aux2710z00_4604;

									BgL_aux2710z00_4604 = STRUCT_KEY(BgL_modz00_38);
									if (SYMBOLP(BgL_aux2710z00_4604))
										{	/* Eval/evmodule.scm 129 */
											BgL_res2362z00_3033 = BgL_aux2710z00_4604;
										}
									else
										{
											obj_t BgL_auxz00_5813;

											BgL_auxz00_5813 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3188z00zz__evmodulez00, BINT(((long) 4439)),
												BGl_string3199z00zz__evmodulez00,
												BGl_string3192z00zz__evmodulez00, BgL_aux2710z00_4604);
											FAILURE(BgL_auxz00_5813, BFALSE, BFALSE);
								}}
								BgL_tmpz00_5809 = BgL_res2362z00_3033;
							}
							BgL_test3631z00_5806 =
								(BgL_tmpz00_5809 == BGl_symbol3186z00zz__evmodulez00);
						}
					else
						{	/* Eval/evmodule.scm 129 */
							BgL_test3631z00_5806 = ((bool_t) 0);
						}
					if (BgL_test3631z00_5806)
						{	/* Eval/evmodule.scm 135 */
							BgL_test3630z00_5805 =
								(STRUCT_REF(BgL_modz00_38,
									(int) (((long) 0))) ==
								BGl_makezd2z52evmodulezd2envz52zz__evmodulez00);
						}
					else
						{	/* Eval/evmodule.scm 135 */
							BgL_test3630z00_5805 = ((bool_t) 0);
						}
				}
				if (BgL_test3630z00_5805)
					{	/* Eval/evmodule.scm 129 */
						obj_t BgL_sz00_3036;

						{	/* Eval/evmodule.scm 129 */
							obj_t BgL_aux2712z00_4606;

							BgL_aux2712z00_4606 = BgL_modz00_38;
							if (STRUCTP(BgL_aux2712z00_4606))
								{	/* Eval/evmodule.scm 129 */
									BgL_sz00_3036 = BgL_aux2712z00_4606;
								}
							else
								{
									obj_t BgL_auxz00_5823;

									BgL_auxz00_5823 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3188z00zz__evmodulez00, BINT(((long) 4439)),
										BGl_string3199z00zz__evmodulez00,
										BGl_string3194z00zz__evmodulez00, BgL_aux2712z00_4606);
									FAILURE(BgL_auxz00_5823, BFALSE, BFALSE);
						}}
						return STRUCT_REF(BgL_sz00_3036, (int) (((long) 6)));
					}
				else
					{	/* Eval/evmodule.scm 165 */
						return
							BGl_bigloozd2typezd2errorz00zz__errorz00
							(BGl_string3199z00zz__evmodulez00,
							BGl_symbol3195z00zz__evmodulez00, BgL_modz00_38);
					}
			}
		}

	}



/* &evmodule-extension */
	obj_t BGl_z62evmodulezd2extensionzb0zz__evmodulez00(obj_t BgL_envz00_4412,
		obj_t BgL_modz00_4413)
	{
		{	/* Eval/evmodule.scm 164 */
			return BGl_evmodulezd2extensionzd2zz__evmodulez00(BgL_modz00_4413);
		}

	}



/* evmodule-extension-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_evmodulezd2extensionzd2setz12z12zz__evmodulez00(obj_t BgL_modz00_39,
		obj_t BgL_extz00_40)
	{
		{	/* Eval/evmodule.scm 172 */
			{	/* Eval/evmodule.scm 129 */
				obj_t BgL_sz00_3037;

				if (STRUCTP(BgL_modz00_39))
					{	/* Eval/evmodule.scm 129 */
						BgL_sz00_3037 = BgL_modz00_39;
					}
				else
					{
						obj_t BgL_auxz00_5833;

						BgL_auxz00_5833 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__evmodulez00,
							BINT(((long) 4439)), BGl_string3200z00zz__evmodulez00,
							BGl_string3194z00zz__evmodulez00, BgL_modz00_39);
						FAILURE(BgL_auxz00_5833, BFALSE, BFALSE);
					}
				{	/* Eval/evmodule.scm 129 */
					int BgL_tmpz00_5837;

					BgL_tmpz00_5837 = (int) (((long) 6));
					return STRUCT_SET(BgL_sz00_3037, BgL_tmpz00_5837, BgL_extz00_40);
				}
			}
		}

	}



/* &evmodule-extension-set! */
	obj_t BGl_z62evmodulezd2extensionzd2setz12z70zz__evmodulez00(obj_t
		BgL_envz00_4414, obj_t BgL_modz00_4415, obj_t BgL_extz00_4416)
	{
		{	/* Eval/evmodule.scm 172 */
			return
				BGl_evmodulezd2extensionzd2setz12z12zz__evmodulez00(BgL_modz00_4415,
				BgL_extz00_4416);
		}

	}



/* make-evmodule */
	obj_t BGl_makezd2evmodulezd2zz__evmodulez00(obj_t BgL_idz00_41,
		obj_t BgL_pathz00_42, obj_t BgL_locz00_43)
	{
		{	/* Eval/evmodule.scm 178 */
			{	/* Eval/evmodule.scm 179 */
				obj_t BgL_top3637z00_5842;

				BgL_top3637z00_5842 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_za2moduleszd2mutexza2zd2zz__evmodulez00);
				BGL_EXITD_PUSH_PROTECT(BgL_top3637z00_5842,
					BGl_za2moduleszd2mutexza2zd2zz__evmodulez00);
				BUNSPEC;
				{	/* Eval/evmodule.scm 179 */
					obj_t BgL_tmp3636z00_5841;

					{	/* Eval/evmodule.scm 180 */
						obj_t BgL_envz00_1273;

						{	/* Eval/evmodule.scm 180 */
							obj_t BgL_list1349z00_1298;

							{	/* Eval/evmodule.scm 180 */
								obj_t BgL_arg1350z00_1299;

								{	/* Eval/evmodule.scm 180 */
									obj_t BgL_arg1351z00_1300;

									BgL_arg1351z00_1300 =
										MAKE_YOUNG_PAIR(BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00,
										BNIL);
									BgL_arg1350z00_1299 =
										MAKE_YOUNG_PAIR(BUNSPEC, BgL_arg1351z00_1300);
								}
								BgL_list1349z00_1298 =
									MAKE_YOUNG_PAIR(BINT(((long) 100)), BgL_arg1350z00_1299);
							}
							BgL_envz00_1273 =
								BGl_makezd2hashtablezd2zz__hashz00(BgL_list1349z00_1298);
						}
						{	/* Eval/evmodule.scm 180 */
							obj_t BgL_mactablez00_1274;

							{	/* Eval/evmodule.scm 181 */
								obj_t BgL_list1348z00_1297;

								BgL_list1348z00_1297 = MAKE_YOUNG_PAIR(BINT(((long) 64)), BNIL);
								BgL_mactablez00_1274 =
									BGl_makezd2hashtablezd2zz__hashz00(BgL_list1348z00_1297);
							}
							{	/* Eval/evmodule.scm 181 */
								obj_t BgL_modz00_1275;

								{	/* Eval/evmodule.scm 129 */
									obj_t BgL_newz00_3038;

									BgL_newz00_3038 =
										create_struct(BGl_symbol3186z00zz__evmodulez00,
										(int) (((long) 7)));
									{	/* Eval/evmodule.scm 129 */
										int BgL_tmpz00_5856;

										BgL_tmpz00_5856 = (int) (((long) 6));
										STRUCT_SET(BgL_newz00_3038, BgL_tmpz00_5856, BNIL);
									}
									{	/* Eval/evmodule.scm 129 */
										int BgL_tmpz00_5859;

										BgL_tmpz00_5859 = (int) (((long) 5));
										STRUCT_SET(BgL_newz00_3038, BgL_tmpz00_5859,
											BgL_mactablez00_1274);
									}
									{	/* Eval/evmodule.scm 129 */
										int BgL_tmpz00_5862;

										BgL_tmpz00_5862 = (int) (((long) 4));
										STRUCT_SET(BgL_newz00_3038, BgL_tmpz00_5862, BNIL);
									}
									{	/* Eval/evmodule.scm 129 */
										int BgL_tmpz00_5865;

										BgL_tmpz00_5865 = (int) (((long) 3));
										STRUCT_SET(BgL_newz00_3038, BgL_tmpz00_5865,
											BgL_envz00_1273);
									}
									{	/* Eval/evmodule.scm 129 */
										int BgL_tmpz00_5868;

										BgL_tmpz00_5868 = (int) (((long) 2));
										STRUCT_SET(BgL_newz00_3038, BgL_tmpz00_5868,
											BgL_pathz00_42);
									}
									{	/* Eval/evmodule.scm 129 */
										int BgL_tmpz00_5871;

										BgL_tmpz00_5871 = (int) (((long) 1));
										STRUCT_SET(BgL_newz00_3038, BgL_tmpz00_5871, BgL_idz00_41);
									}
									{	/* Eval/evmodule.scm 129 */
										int BgL_tmpz00_5874;

										BgL_tmpz00_5874 = (int) (((long) 0));
										STRUCT_SET(BgL_newz00_3038, BgL_tmpz00_5874,
											BGl_makezd2z52evmodulezd2envz52zz__evmodulez00);
									}
									BgL_modz00_1275 = BgL_newz00_3038;
								}
								{	/* Eval/evmodule.scm 182 */

									if (BGl_hashtablezf3zf3zz__hashz00
										(BGl_za2moduleszd2tableza2zd2zz__evmodulez00))
										{	/* Eval/evmodule.scm 187 */
											obj_t BgL_oldz00_1277;

											{	/* Eval/evmodule.scm 187 */
												obj_t BgL_auxz00_5879;

												{	/* Eval/evmodule.scm 187 */
													obj_t BgL_aux2716z00_4610;

													BgL_aux2716z00_4610 =
														BGl_za2moduleszd2tableza2zd2zz__evmodulez00;
													if (STRUCTP(BgL_aux2716z00_4610))
														{	/* Eval/evmodule.scm 187 */
															BgL_auxz00_5879 = BgL_aux2716z00_4610;
														}
													else
														{
															obj_t BgL_auxz00_5882;

															BgL_auxz00_5882 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3188z00zz__evmodulez00,
																BINT(((long) 7219)),
																BGl_string3201z00zz__evmodulez00,
																BGl_string3194z00zz__evmodulez00,
																BgL_aux2716z00_4610);
															FAILURE(BgL_auxz00_5882, BFALSE, BFALSE);
												}}
												BgL_oldz00_1277 =
													BGl_hashtablezd2getzd2zz__hashz00(BgL_auxz00_5879,
													BgL_idz00_41);
											}
											if (CBOOL(BgL_oldz00_1277))
												{	/* Eval/evmodule.scm 188 */
													{	/* Eval/evmodule.scm 191 */
														obj_t BgL_zc3z04anonymousza31331ze3z87_4417;

														BgL_zc3z04anonymousza31331ze3z87_4417 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31331ze3ze5zz__evmodulez00,
															(int) (((long) 1)), (int) (((long) 1)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31331ze3z87_4417,
															(int) (((long) 0)), BgL_modz00_1275);
														{	/* Eval/evmodule.scm 190 */
															obj_t BgL_auxz00_5894;

															{	/* Eval/evmodule.scm 190 */
																obj_t BgL_aux2718z00_4612;

																BgL_aux2718z00_4612 =
																	BGl_za2moduleszd2tableza2zd2zz__evmodulez00;
																if (STRUCTP(BgL_aux2718z00_4612))
																	{	/* Eval/evmodule.scm 190 */
																		BgL_auxz00_5894 = BgL_aux2718z00_4612;
																	}
																else
																	{
																		obj_t BgL_auxz00_5897;

																		BgL_auxz00_5897 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string3188z00zz__evmodulez00,
																			BINT(((long) 7292)),
																			BGl_string3201z00zz__evmodulez00,
																			BGl_string3194z00zz__evmodulez00,
																			BgL_aux2718z00_4612);
																		FAILURE(BgL_auxz00_5897, BFALSE, BFALSE);
															}}
															BGl_hashtablezd2updatez12zc0zz__hashz00
																(BgL_auxz00_5894, BgL_idz00_41,
																BgL_zc3z04anonymousza31331ze3z87_4417,
																BgL_modz00_1275);
													}}
													{	/* Eval/evmodule.scm 192 */
														bool_t BgL_test3642z00_5902;

														{	/* Eval/evmodule.scm 192 */
															obj_t BgL_arg1346z00_1295;

															{	/* Eval/evmodule.scm 129 */
																obj_t BgL_sz00_3046;

																if (STRUCTP(BgL_oldz00_1277))
																	{	/* Eval/evmodule.scm 129 */
																		BgL_sz00_3046 = BgL_oldz00_1277;
																	}
																else
																	{
																		obj_t BgL_auxz00_5905;

																		BgL_auxz00_5905 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string3188z00zz__evmodulez00,
																			BINT(((long) 4439)),
																			BGl_string3201z00zz__evmodulez00,
																			BGl_string3194z00zz__evmodulez00,
																			BgL_oldz00_1277);
																		FAILURE(BgL_auxz00_5905, BFALSE, BFALSE);
																	}
																BgL_arg1346z00_1295 =
																	STRUCT_REF(BgL_sz00_3046, (int) (((long) 2)));
															}
															{	/* Eval/evmodule.scm 192 */
																bool_t BgL_res2368z00_3062;

																{	/* Eval/evmodule.scm 192 */
																	obj_t BgL_string1z00_3047;
																	obj_t BgL_string2z00_3048;

																	if (STRINGP(BgL_arg1346z00_1295))
																		{	/* Eval/evmodule.scm 192 */
																			BgL_string1z00_3047 = BgL_arg1346z00_1295;
																		}
																	else
																		{
																			obj_t BgL_auxz00_5913;

																			BgL_auxz00_5913 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string3188z00zz__evmodulez00,
																				BINT(((long) 7384)),
																				BGl_string3201z00zz__evmodulez00,
																				BGl_string3202z00zz__evmodulez00,
																				BgL_arg1346z00_1295);
																			FAILURE(BgL_auxz00_5913, BFALSE, BFALSE);
																		}
																	if (STRINGP(BgL_pathz00_42))
																		{	/* Eval/evmodule.scm 192 */
																			BgL_string2z00_3048 = BgL_pathz00_42;
																		}
																	else
																		{
																			obj_t BgL_auxz00_5919;

																			BgL_auxz00_5919 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string3188z00zz__evmodulez00,
																				BINT(((long) 7386)),
																				BGl_string3201z00zz__evmodulez00,
																				BGl_string3202z00zz__evmodulez00,
																				BgL_pathz00_42);
																			FAILURE(BgL_auxz00_5919, BFALSE, BFALSE);
																		}
																	{	/* Eval/evmodule.scm 192 */
																		long BgL_l1z00_3049;

																		BgL_l1z00_3049 =
																			STRING_LENGTH(BgL_string1z00_3047);
																		if (
																			(BgL_l1z00_3049 ==
																				STRING_LENGTH(BgL_string2z00_3048)))
																			{	/* Eval/evmodule.scm 192 */
																				int BgL_arg2167z00_3052;

																				{	/* Eval/evmodule.scm 192 */
																					char *BgL_auxz00_5929;
																					char *BgL_tmpz00_5927;

																					BgL_auxz00_5929 =
																						BSTRING_TO_STRING
																						(BgL_string2z00_3048);
																					BgL_tmpz00_5927 =
																						BSTRING_TO_STRING
																						(BgL_string1z00_3047);
																					BgL_arg2167z00_3052 =
																						memcmp(BgL_tmpz00_5927,
																						BgL_auxz00_5929, BgL_l1z00_3049);
																				}
																				BgL_res2368z00_3062 =
																					(
																					(long) (BgL_arg2167z00_3052) ==
																					((long) 0));
																			}
																		else
																			{	/* Eval/evmodule.scm 192 */
																				BgL_res2368z00_3062 = ((bool_t) 0);
																			}
																	}
																}
																BgL_test3642z00_5902 = BgL_res2368z00_3062;
															}
														}
														if (BgL_test3642z00_5902)
															{	/* Eval/evmodule.scm 192 */
																BFALSE;
															}
														else
															{	/* Eval/evmodule.scm 193 */
																obj_t BgL_msgz00_1284;

																{	/* Eval/evmodule.scm 194 */
																	obj_t BgL_arg1337z00_1286;
																	obj_t BgL_arg1338z00_1287;

																	{	/* Eval/evmodule.scm 194 */
																		obj_t BgL_res2369z00_3065;

																		{	/* Eval/evmodule.scm 194 */
																			obj_t BgL_arg2175z00_3064;

																			BgL_arg2175z00_3064 =
																				SYMBOL_TO_STRING(BgL_idz00_41);
																			BgL_res2369z00_3065 =
																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																				(BgL_arg2175z00_3064);
																		}
																		BgL_arg1337z00_1286 = BgL_res2369z00_3065;
																	}
																	{	/* Eval/evmodule.scm 129 */
																		obj_t BgL_sz00_3066;

																		if (STRUCTP(BgL_oldz00_1277))
																			{	/* Eval/evmodule.scm 129 */
																				BgL_sz00_3066 = BgL_oldz00_1277;
																			}
																		else
																			{
																				obj_t BgL_auxz00_5938;

																				BgL_auxz00_5938 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string3188z00zz__evmodulez00,
																					BINT(((long) 4439)),
																					BGl_string3201z00zz__evmodulez00,
																					BGl_string3194z00zz__evmodulez00,
																					BgL_oldz00_1277);
																				FAILURE(BgL_auxz00_5938, BFALSE,
																					BFALSE);
																			}
																		BgL_arg1338z00_1287 =
																			STRUCT_REF(BgL_sz00_3066,
																			(int) (((long) 2)));
																	}
																	{	/* Eval/evmodule.scm 193 */
																		obj_t BgL_list1339z00_1288;

																		{	/* Eval/evmodule.scm 193 */
																			obj_t BgL_arg1340z00_1289;

																			{	/* Eval/evmodule.scm 193 */
																				obj_t BgL_arg1341z00_1290;

																				{	/* Eval/evmodule.scm 193 */
																					obj_t BgL_arg1342z00_1291;

																					{	/* Eval/evmodule.scm 193 */
																						obj_t BgL_arg1343z00_1292;

																						{	/* Eval/evmodule.scm 193 */
																							obj_t BgL_arg1344z00_1293;

																							{	/* Eval/evmodule.scm 193 */
																								obj_t BgL_arg1345z00_1294;

																								BgL_arg1345z00_1294 =
																									MAKE_YOUNG_PAIR
																									(BGl_string3203z00zz__evmodulez00,
																									BNIL);
																								BgL_arg1344z00_1293 =
																									MAKE_YOUNG_PAIR
																									(BgL_pathz00_42,
																									BgL_arg1345z00_1294);
																							}
																							BgL_arg1343z00_1292 =
																								MAKE_YOUNG_PAIR
																								(BGl_string3204z00zz__evmodulez00,
																								BgL_arg1344z00_1293);
																						}
																						BgL_arg1342z00_1291 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1338z00_1287,
																							BgL_arg1343z00_1292);
																					}
																					BgL_arg1341z00_1290 =
																						MAKE_YOUNG_PAIR
																						(BGl_string3205z00zz__evmodulez00,
																						BgL_arg1342z00_1291);
																				}
																				BgL_arg1340z00_1289 =
																					MAKE_YOUNG_PAIR(BgL_arg1337z00_1286,
																					BgL_arg1341z00_1290);
																			}
																			BgL_list1339z00_1288 =
																				MAKE_YOUNG_PAIR
																				(BGl_string3206z00zz__evmodulez00,
																				BgL_arg1340z00_1289);
																		}
																		BgL_msgz00_1284 =
																			BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																			(BgL_list1339z00_1288);
																}}
																{	/* Eval/evmodule.scm 199 */
																	obj_t BgL_list1335z00_1285;

																	BgL_list1335z00_1285 =
																		MAKE_YOUNG_PAIR(BgL_msgz00_1284, BNIL);
																	BGl_warningzf2loczf2zz__errorz00
																		(BgL_locz00_43, BgL_list1335z00_1285);
												}}}}
											else
												{	/* Eval/evmodule.scm 200 */
													obj_t BgL_auxz00_5954;

													{	/* Eval/evmodule.scm 200 */
														obj_t BgL_aux2728z00_4622;

														BgL_aux2728z00_4622 =
															BGl_za2moduleszd2tableza2zd2zz__evmodulez00;
														if (STRUCTP(BgL_aux2728z00_4622))
															{	/* Eval/evmodule.scm 200 */
																BgL_auxz00_5954 = BgL_aux2728z00_4622;
															}
														else
															{
																obj_t BgL_auxz00_5957;

																BgL_auxz00_5957 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3188z00zz__evmodulez00,
																	BINT(((long) 7621)),
																	BGl_string3201z00zz__evmodulez00,
																	BGl_string3194z00zz__evmodulez00,
																	BgL_aux2728z00_4622);
																FAILURE(BgL_auxz00_5957, BFALSE, BFALSE);
													}}
													BGl_hashtablezd2putz12zc0zz__hashz00(BgL_auxz00_5954,
														BgL_idz00_41, BgL_modz00_1275);
										}}
									else
										{	/* Eval/evmodule.scm 183 */
											{	/* Eval/evmodule.scm 185 */
												obj_t BgL_list1347z00_1296;

												BgL_list1347z00_1296 =
													MAKE_YOUNG_PAIR(BINT(((long) 256)), BNIL);
												BGl_za2moduleszd2tableza2zd2zz__evmodulez00 =
													BGl_makezd2hashtablezd2zz__hashz00
													(BgL_list1347z00_1296);
											}
											{	/* Eval/evmodule.scm 186 */
												obj_t BgL_auxz00_5965;

												{	/* Eval/evmodule.scm 186 */
													obj_t BgL_aux2730z00_4624;

													BgL_aux2730z00_4624 =
														BGl_za2moduleszd2tableza2zd2zz__evmodulez00;
													if (STRUCTP(BgL_aux2730z00_4624))
														{	/* Eval/evmodule.scm 186 */
															BgL_auxz00_5965 = BgL_aux2730z00_4624;
														}
													else
														{
															obj_t BgL_auxz00_5968;

															BgL_auxz00_5968 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3188z00zz__evmodulez00,
																BINT(((long) 7162)),
																BGl_string3201z00zz__evmodulez00,
																BGl_string3194z00zz__evmodulez00,
																BgL_aux2730z00_4624);
															FAILURE(BgL_auxz00_5968, BFALSE, BFALSE);
												}}
												BGl_hashtablezd2putz12zc0zz__hashz00(BgL_auxz00_5965,
													BgL_idz00_41, BgL_modz00_1275);
										}}
									BgL_tmp3636z00_5841 = BgL_modz00_1275;
					}}}}
					BGL_EXITD_POP_PROTECT(BgL_top3637z00_5842);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_za2moduleszd2mutexza2zd2zz__evmodulez00);
					return BgL_tmp3636z00_5841;
				}
			}
		}

	}



/* &<@anonymous:1331> */
	obj_t BGl_z62zc3z04anonymousza31331ze3ze5zz__evmodulez00(obj_t
		BgL_envz00_4418, obj_t BgL_vz00_4420)
	{
		{	/* Eval/evmodule.scm 191 */
			return ((obj_t) PROCEDURE_REF(BgL_envz00_4418, (int) (((long) 0))));
		}

	}



/* eval-module */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2modulezd2zz__evmodulez00()
	{
		{	/* Eval/evmodule.scm 206 */
			return BGL_MODULE();
		}

	}



/* &eval-module */
	obj_t BGl_z62evalzd2modulezb0zz__evmodulez00(obj_t BgL_envz00_4424)
	{
		{	/* Eval/evmodule.scm 206 */
			return BGl_evalzd2modulezd2zz__evmodulez00();
		}

	}



/* eval-module-set! */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2modulezd2setz12z12zz__evmodulez00(obj_t
		BgL_modz00_44)
	{
		{	/* Eval/evmodule.scm 212 */
			{	/* Eval/evmodule.scm 213 */
				bool_t BgL_test3650z00_5980;

				{	/* Eval/evmodule.scm 213 */
					bool_t BgL_test3651z00_5981;

					{	/* Eval/evmodule.scm 135 */
						bool_t BgL_test3652z00_5982;

						if (STRUCTP(BgL_modz00_44))
							{	/* Eval/evmodule.scm 129 */
								obj_t BgL_tmpz00_5985;

								{	/* Eval/evmodule.scm 129 */
									obj_t BgL_res2371z00_3073;

									{	/* Eval/evmodule.scm 129 */
										obj_t BgL_aux2732z00_4626;

										BgL_aux2732z00_4626 = STRUCT_KEY(BgL_modz00_44);
										if (SYMBOLP(BgL_aux2732z00_4626))
											{	/* Eval/evmodule.scm 129 */
												BgL_res2371z00_3073 = BgL_aux2732z00_4626;
											}
										else
											{
												obj_t BgL_auxz00_5989;

												BgL_auxz00_5989 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3188z00zz__evmodulez00,
													BINT(((long) 4439)), BGl_string3207z00zz__evmodulez00,
													BGl_string3192z00zz__evmodulez00,
													BgL_aux2732z00_4626);
												FAILURE(BgL_auxz00_5989, BFALSE, BFALSE);
									}}
									BgL_tmpz00_5985 = BgL_res2371z00_3073;
								}
								BgL_test3652z00_5982 =
									(BgL_tmpz00_5985 == BGl_symbol3186z00zz__evmodulez00);
							}
						else
							{	/* Eval/evmodule.scm 129 */
								BgL_test3652z00_5982 = ((bool_t) 0);
							}
						if (BgL_test3652z00_5982)
							{	/* Eval/evmodule.scm 135 */
								BgL_test3651z00_5981 =
									(STRUCT_REF(BgL_modz00_44,
										(int) (((long) 0))) ==
									BGl_makezd2z52evmodulezd2envz52zz__evmodulez00);
							}
						else
							{	/* Eval/evmodule.scm 135 */
								BgL_test3651z00_5981 = ((bool_t) 0);
							}
					}
					if (BgL_test3651z00_5981)
						{	/* Eval/evmodule.scm 213 */
							BgL_test3650z00_5980 = ((bool_t) 1);
						}
					else
						{	/* Eval/evmodule.scm 213 */
							if (
								(BgL_modz00_44 ==
									BGl_interactionzd2environmentzd2zz__evalz00()))
								{	/* Eval/evmodule.scm 214 */
									BgL_test3650z00_5980 = ((bool_t) 1);
								}
							else
								{	/* Eval/evmodule.scm 214 */
									BgL_test3650z00_5980 = (BgL_modz00_44 == BUNSPEC);
								}
						}
				}
				if (BgL_test3650z00_5980)
					{	/* Eval/evmodule.scm 213 */
						return BGL_MODULE_SET(BgL_modz00_44);
					}
				else
					{	/* Eval/evmodule.scm 213 */
						return
							BGl_errorz00zz__errorz00(BGl_string3207z00zz__evmodulez00,
							BGl_string3208z00zz__evmodulez00, BgL_modz00_44);
					}
			}
		}

	}



/* &eval-module-set! */
	obj_t BGl_z62evalzd2modulezd2setz12z70zz__evmodulez00(obj_t BgL_envz00_4425,
		obj_t BgL_modz00_4426)
	{
		{	/* Eval/evmodule.scm 212 */
			return BGl_evalzd2modulezd2setz12z12zz__evmodulez00(BgL_modz00_4426);
		}

	}



/* eval-find-module */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2findzd2modulez00zz__evmodulez00(obj_t
		BgL_idz00_45)
	{
		{	/* Eval/evmodule.scm 222 */
			if (BGl_hashtablezf3zf3zz__hashz00
				(BGl_za2moduleszd2tableza2zd2zz__evmodulez00))
				{	/* Eval/evmodule.scm 224 */
					obj_t BgL_auxz00_6006;

					{	/* Eval/evmodule.scm 224 */
						obj_t BgL_aux2734z00_4628;

						BgL_aux2734z00_4628 = BGl_za2moduleszd2tableza2zd2zz__evmodulez00;
						if (STRUCTP(BgL_aux2734z00_4628))
							{	/* Eval/evmodule.scm 224 */
								BgL_auxz00_6006 = BgL_aux2734z00_4628;
							}
						else
							{
								obj_t BgL_auxz00_6009;

								BgL_auxz00_6009 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3188z00zz__evmodulez00, BINT(((long) 8670)),
									BGl_string3209z00zz__evmodulez00,
									BGl_string3194z00zz__evmodulez00, BgL_aux2734z00_4628);
								FAILURE(BgL_auxz00_6009, BFALSE, BFALSE);
					}}
					return
						BGl_hashtablezd2getzd2zz__hashz00(BgL_auxz00_6006, BgL_idz00_45);
				}
			else
				{	/* Eval/evmodule.scm 223 */
					return BFALSE;
				}
		}

	}



/* &eval-find-module */
	obj_t BGl_z62evalzd2findzd2modulez62zz__evmodulez00(obj_t BgL_envz00_4427,
		obj_t BgL_idz00_4428)
	{
		{	/* Eval/evmodule.scm 222 */
			{	/* Eval/evmodule.scm 223 */
				obj_t BgL_auxz00_6014;

				if (SYMBOLP(BgL_idz00_4428))
					{	/* Eval/evmodule.scm 223 */
						BgL_auxz00_6014 = BgL_idz00_4428;
					}
				else
					{
						obj_t BgL_auxz00_6017;

						BgL_auxz00_6017 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__evmodulez00,
							BINT(((long) 8614)), BGl_string3210z00zz__evmodulez00,
							BGl_string3192z00zz__evmodulez00, BgL_idz00_4428);
						FAILURE(BgL_auxz00_6017, BFALSE, BFALSE);
					}
				return BGl_evalzd2findzd2modulez00zz__evmodulez00(BgL_auxz00_6014);
			}
		}

	}



/* evalias-module */
	obj_t BGl_evaliaszd2modulezd2zz__evmodulez00(obj_t BgL_vz00_47)
	{
		{	/* Eval/evmodule.scm 235 */
			{	/* Eval/evmodule.scm 237 */
				bool_t BgL_test3659z00_6022;

				{	/* Eval/evmodule.scm 237 */
					obj_t BgL_arg1367z00_1319;

					{	/* Eval/evmodule.scm 237 */
						obj_t BgL_vectorz00_3090;

						if (VECTORP(BgL_vz00_47))
							{	/* Eval/evmodule.scm 237 */
								BgL_vectorz00_3090 = BgL_vz00_47;
							}
						else
							{
								obj_t BgL_auxz00_6025;

								BgL_auxz00_6025 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3188z00zz__evmodulez00, BINT(((long) 9268)),
									BGl_string3211z00zz__evmodulez00,
									BGl_string3212z00zz__evmodulez00, BgL_vz00_47);
								FAILURE(BgL_auxz00_6025, BFALSE, BFALSE);
							}
						BgL_arg1367z00_1319 = VECTOR_REF(BgL_vectorz00_3090, ((long) 3));
					}
					{	/* Eval/evmodule.scm 135 */
						bool_t BgL_test3661z00_6030;

						if (STRUCTP(BgL_arg1367z00_1319))
							{	/* Eval/evmodule.scm 129 */
								obj_t BgL_tmpz00_6033;

								{	/* Eval/evmodule.scm 129 */
									obj_t BgL_res2378z00_3097;

									{	/* Eval/evmodule.scm 129 */
										obj_t BgL_aux2740z00_4634;

										BgL_aux2740z00_4634 = STRUCT_KEY(BgL_arg1367z00_1319);
										if (SYMBOLP(BgL_aux2740z00_4634))
											{	/* Eval/evmodule.scm 129 */
												BgL_res2378z00_3097 = BgL_aux2740z00_4634;
											}
										else
											{
												obj_t BgL_auxz00_6037;

												BgL_auxz00_6037 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3188z00zz__evmodulez00,
													BINT(((long) 4439)), BGl_string3211z00zz__evmodulez00,
													BGl_string3192z00zz__evmodulez00,
													BgL_aux2740z00_4634);
												FAILURE(BgL_auxz00_6037, BFALSE, BFALSE);
									}}
									BgL_tmpz00_6033 = BgL_res2378z00_3097;
								}
								BgL_test3661z00_6030 =
									(BgL_tmpz00_6033 == BGl_symbol3186z00zz__evmodulez00);
							}
						else
							{	/* Eval/evmodule.scm 129 */
								BgL_test3661z00_6030 = ((bool_t) 0);
							}
						if (BgL_test3661z00_6030)
							{	/* Eval/evmodule.scm 135 */
								BgL_test3659z00_6022 =
									(STRUCT_REF(BgL_arg1367z00_1319,
										(int) (((long) 0))) ==
									BGl_makezd2z52evmodulezd2envz52zz__evmodulez00);
							}
						else
							{	/* Eval/evmodule.scm 135 */
								BgL_test3659z00_6022 = ((bool_t) 0);
							}
					}
				}
				if (BgL_test3659z00_6022)
					{	/* Eval/evmodule.scm 238 */
						obj_t BgL_vectorz00_3100;

						if (VECTORP(BgL_vz00_47))
							{	/* Eval/evmodule.scm 238 */
								BgL_vectorz00_3100 = BgL_vz00_47;
							}
						else
							{
								obj_t BgL_auxz00_6047;

								BgL_auxz00_6047 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3188z00zz__evmodulez00, BINT(((long) 9299)),
									BGl_string3211z00zz__evmodulez00,
									BGl_string3212z00zz__evmodulez00, BgL_vz00_47);
								FAILURE(BgL_auxz00_6047, BFALSE, BFALSE);
							}
						return VECTOR_REF(BgL_vectorz00_3100, ((long) 3));
					}
				else
					{	/* Eval/evmodule.scm 239 */
						bool_t BgL_test3665z00_6052;

						{	/* Eval/evmodule.scm 239 */
							obj_t BgL_arg1365z00_1318;

							{	/* Eval/evmodule.scm 239 */
								obj_t BgL_vectorz00_3101;

								if (VECTORP(BgL_vz00_47))
									{	/* Eval/evmodule.scm 239 */
										BgL_vectorz00_3101 = BgL_vz00_47;
									}
								else
									{
										obj_t BgL_auxz00_6055;

										BgL_auxz00_6055 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3188z00zz__evmodulez00, BINT(((long) 9339)),
											BGl_string3211z00zz__evmodulez00,
											BGl_string3212z00zz__evmodulez00, BgL_vz00_47);
										FAILURE(BgL_auxz00_6055, BFALSE, BFALSE);
									}
								BgL_arg1365z00_1318 =
									VECTOR_REF(BgL_vectorz00_3101, ((long) 3));
							}
							BgL_test3665z00_6052 = SYMBOLP(BgL_arg1365z00_1318);
						}
						if (BgL_test3665z00_6052)
							{	/* Eval/evmodule.scm 240 */
								obj_t BgL_mz00_1316;

								{	/* Eval/evmodule.scm 240 */
									obj_t BgL_arg1364z00_1317;

									{	/* Eval/evmodule.scm 240 */
										obj_t BgL_vectorz00_3103;

										if (VECTORP(BgL_vz00_47))
											{	/* Eval/evmodule.scm 240 */
												BgL_vectorz00_3103 = BgL_vz00_47;
											}
										else
											{
												obj_t BgL_auxz00_6063;

												BgL_auxz00_6063 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3188z00zz__evmodulez00,
													BINT(((long) 9397)), BGl_string3211z00zz__evmodulez00,
													BGl_string3212z00zz__evmodulez00, BgL_vz00_47);
												FAILURE(BgL_auxz00_6063, BFALSE, BFALSE);
											}
										BgL_arg1364z00_1317 =
											VECTOR_REF(BgL_vectorz00_3103, ((long) 3));
									}
									{	/* Eval/evmodule.scm 240 */
										obj_t BgL_idz00_3104;

										if (SYMBOLP(BgL_arg1364z00_1317))
											{	/* Eval/evmodule.scm 240 */
												BgL_idz00_3104 = BgL_arg1364z00_1317;
											}
										else
											{
												obj_t BgL_auxz00_6070;

												BgL_auxz00_6070 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3188z00zz__evmodulez00,
													BINT(((long) 9418)), BGl_string3211z00zz__evmodulez00,
													BGl_string3192z00zz__evmodulez00,
													BgL_arg1364z00_1317);
												FAILURE(BgL_auxz00_6070, BFALSE, BFALSE);
											}
										if (BGl_hashtablezf3zf3zz__hashz00
											(BGl_za2moduleszd2tableza2zd2zz__evmodulez00))
											{	/* Eval/evmodule.scm 224 */
												obj_t BgL_auxz00_6076;

												{	/* Eval/evmodule.scm 224 */
													obj_t BgL_aux2750z00_4644;

													BgL_aux2750z00_4644 =
														BGl_za2moduleszd2tableza2zd2zz__evmodulez00;
													if (STRUCTP(BgL_aux2750z00_4644))
														{	/* Eval/evmodule.scm 224 */
															BgL_auxz00_6076 = BgL_aux2750z00_4644;
														}
													else
														{
															obj_t BgL_auxz00_6079;

															BgL_auxz00_6079 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3188z00zz__evmodulez00,
																BINT(((long) 8670)),
																BGl_string3211z00zz__evmodulez00,
																BGl_string3194z00zz__evmodulez00,
																BgL_aux2750z00_4644);
															FAILURE(BgL_auxz00_6079, BFALSE, BFALSE);
												}}
												BgL_mz00_1316 =
													BGl_hashtablezd2getzd2zz__hashz00(BgL_auxz00_6076,
													BgL_idz00_3104);
											}
										else
											{	/* Eval/evmodule.scm 223 */
												BgL_mz00_1316 = BFALSE;
											}
									}
								}
								{	/* Eval/evmodule.scm 241 */
									obj_t BgL_evalzd2globalzd2_3106;

									if (VECTORP(BgL_vz00_47))
										{	/* Eval/evmodule.scm 241 */
											BgL_evalzd2globalzd2_3106 = BgL_vz00_47;
										}
									else
										{
											obj_t BgL_auxz00_6086;

											BgL_auxz00_6086 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3188z00zz__evmodulez00, BINT(((long) 9451)),
												BGl_string3211z00zz__evmodulez00,
												BGl_string3212z00zz__evmodulez00, BgL_vz00_47);
											FAILURE(BgL_auxz00_6086, BFALSE, BFALSE);
										}
									VECTOR_SET(BgL_evalzd2globalzd2_3106, ((long) 3),
										BgL_mz00_1316);
								}
								return BgL_mz00_1316;
							}
						else
							{	/* Eval/evmodule.scm 239 */
								return BFALSE;
							}
					}
			}
		}

	}



/* evmodule-find-global */
	BGL_EXPORTED_DEF obj_t BGl_evmodulezd2findzd2globalz00zz__evmodulez00(obj_t
		BgL_modz00_48, obj_t BgL_idz00_49)
	{
		{	/* Eval/evmodule.scm 249 */
		BGl_evmodulezd2findzd2globalz00zz__evmodulez00:
			{	/* Eval/evmodule.scm 250 */
				bool_t BgL_test3672z00_6091;

				{	/* Eval/evmodule.scm 135 */
					bool_t BgL_test3673z00_6092;

					if (STRUCTP(BgL_modz00_48))
						{	/* Eval/evmodule.scm 129 */
							obj_t BgL_tmpz00_6095;

							{	/* Eval/evmodule.scm 129 */
								obj_t BgL_res2382z00_3114;

								{	/* Eval/evmodule.scm 129 */
									obj_t BgL_aux2754z00_4648;

									BgL_aux2754z00_4648 = STRUCT_KEY(BgL_modz00_48);
									if (SYMBOLP(BgL_aux2754z00_4648))
										{	/* Eval/evmodule.scm 129 */
											BgL_res2382z00_3114 = BgL_aux2754z00_4648;
										}
									else
										{
											obj_t BgL_auxz00_6099;

											BgL_auxz00_6099 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3188z00zz__evmodulez00, BINT(((long) 4439)),
												BGl_string3213z00zz__evmodulez00,
												BGl_string3192z00zz__evmodulez00, BgL_aux2754z00_4648);
											FAILURE(BgL_auxz00_6099, BFALSE, BFALSE);
								}}
								BgL_tmpz00_6095 = BgL_res2382z00_3114;
							}
							BgL_test3673z00_6092 =
								(BgL_tmpz00_6095 == BGl_symbol3186z00zz__evmodulez00);
						}
					else
						{	/* Eval/evmodule.scm 129 */
							BgL_test3673z00_6092 = ((bool_t) 0);
						}
					if (BgL_test3673z00_6092)
						{	/* Eval/evmodule.scm 135 */
							BgL_test3672z00_6091 =
								(STRUCT_REF(BgL_modz00_48,
									(int) (((long) 0))) ==
								BGl_makezd2z52evmodulezd2envz52zz__evmodulez00);
						}
					else
						{	/* Eval/evmodule.scm 135 */
							BgL_test3672z00_6091 = ((bool_t) 0);
						}
				}
				if (BgL_test3672z00_6091)
					{	/* Eval/evmodule.scm 251 */
						obj_t BgL_vz00_1321;

						{	/* Eval/evmodule.scm 251 */
							obj_t BgL_auxz00_6107;

							{	/* Eval/evmodule.scm 129 */
								obj_t BgL_sz00_3117;

								{	/* Eval/evmodule.scm 129 */
									obj_t BgL_aux2756z00_4650;

									BgL_aux2756z00_4650 = BgL_modz00_48;
									if (STRUCTP(BgL_aux2756z00_4650))
										{	/* Eval/evmodule.scm 129 */
											BgL_sz00_3117 = BgL_aux2756z00_4650;
										}
									else
										{
											obj_t BgL_auxz00_6110;

											BgL_auxz00_6110 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3188z00zz__evmodulez00, BINT(((long) 4439)),
												BGl_string3213z00zz__evmodulez00,
												BGl_string3194z00zz__evmodulez00, BgL_aux2756z00_4650);
											FAILURE(BgL_auxz00_6110, BFALSE, BFALSE);
								}}
								{	/* Eval/evmodule.scm 129 */
									obj_t BgL_aux2758z00_4652;

									BgL_aux2758z00_4652 =
										STRUCT_REF(BgL_sz00_3117, (int) (((long) 3)));
									if (STRUCTP(BgL_aux2758z00_4652))
										{	/* Eval/evmodule.scm 129 */
											BgL_auxz00_6107 = BgL_aux2758z00_4652;
										}
									else
										{
											obj_t BgL_auxz00_6118;

											BgL_auxz00_6118 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3188z00zz__evmodulez00, BINT(((long) 4439)),
												BGl_string3213z00zz__evmodulez00,
												BGl_string3194z00zz__evmodulez00, BgL_aux2758z00_4652);
											FAILURE(BgL_auxz00_6118, BFALSE, BFALSE);
							}}}
							BgL_vz00_1321 =
								BGl_hashtablezd2getzd2zz__hashz00(BgL_auxz00_6107,
								BgL_idz00_49);
						}
						{	/* Eval/evmodule.scm 252 */
							bool_t BgL_test3678z00_6123;

							{	/* Eval/evmodule.scm 230 */
								bool_t BgL_test3679z00_6124;

								if (VECTORP(BgL_vz00_1321))
									{	/* Eval/evmodule.scm 230 */
										BgL_test3679z00_6124 =
											(VECTOR_LENGTH(BgL_vz00_1321) == ((long) 5));
									}
								else
									{	/* Eval/evmodule.scm 230 */
										BgL_test3679z00_6124 = ((bool_t) 0);
									}
								if (BgL_test3679z00_6124)
									{	/* Eval/evmodule.scm 230 */
										int BgL_arg1359z00_3119;

										{	/* Eval/evmodule.scm 230 */
											int BgL_res2386z00_3128;

											{	/* Eval/evmodule.scm 230 */
												obj_t BgL_tmpz00_6129;

												{	/* Eval/evmodule.scm 230 */
													obj_t BgL_aux2760z00_4654;

													BgL_aux2760z00_4654 =
														VECTOR_REF(BgL_vz00_1321, ((long) 0));
													if (INTEGERP(BgL_aux2760z00_4654))
														{	/* Eval/evmodule.scm 230 */
															BgL_tmpz00_6129 = BgL_aux2760z00_4654;
														}
													else
														{
															obj_t BgL_auxz00_6133;

															BgL_auxz00_6133 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3188z00zz__evmodulez00,
																BINT(((long) 8966)),
																BGl_string3213z00zz__evmodulez00,
																BGl_string3214z00zz__evmodulez00,
																BgL_aux2760z00_4654);
															FAILURE(BgL_auxz00_6133, BFALSE, BFALSE);
												}}
												BgL_res2386z00_3128 = CINT(BgL_tmpz00_6129);
											}
											BgL_arg1359z00_3119 = BgL_res2386z00_3128;
										}
										BgL_test3678z00_6123 =
											((long) (BgL_arg1359z00_3119) == ((long) 6));
									}
								else
									{	/* Eval/evmodule.scm 230 */
										BgL_test3678z00_6123 = ((bool_t) 0);
									}
							}
							if (BgL_test3678z00_6123)
								{	/* Eval/evmodule.scm 253 */
									obj_t BgL_arg1370z00_1323;
									obj_t BgL_arg1371z00_1324;

									BgL_arg1370z00_1323 =
										BGl_evaliaszd2modulezd2zz__evmodulez00(BgL_vz00_1321);
									{	/* Eval/evmodule.scm 253 */
										obj_t BgL_evalzd2globalzd2_3131;

										{	/* Eval/evmodule.scm 253 */
											obj_t BgL_aux2762z00_4656;

											BgL_aux2762z00_4656 = BgL_vz00_1321;
											if (VECTORP(BgL_aux2762z00_4656))
												{	/* Eval/evmodule.scm 253 */
													BgL_evalzd2globalzd2_3131 = BgL_aux2762z00_4656;
												}
											else
												{
													obj_t BgL_auxz00_6143;

													BgL_auxz00_6143 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3188z00zz__evmodulez00,
														BINT(((long) 9916)),
														BGl_string3213z00zz__evmodulez00,
														BGl_string3212z00zz__evmodulez00,
														BgL_aux2762z00_4656);
													FAILURE(BgL_auxz00_6143, BFALSE, BFALSE);
										}}
										BgL_arg1371z00_1324 =
											VECTOR_REF(BgL_evalzd2globalzd2_3131, ((long) 2));
									}
									{
										obj_t BgL_idz00_6149;
										obj_t BgL_modz00_6148;

										BgL_modz00_6148 = BgL_arg1370z00_1323;
										if (SYMBOLP(BgL_arg1371z00_1324))
											{	/* Eval/evmodule.scm 253 */
												BgL_idz00_6149 = BgL_arg1371z00_1324;
											}
										else
											{
												obj_t BgL_auxz00_6152;

												BgL_auxz00_6152 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3188z00zz__evmodulez00,
													BINT(((long) 9917)), BGl_string3213z00zz__evmodulez00,
													BGl_string3192z00zz__evmodulez00,
													BgL_arg1371z00_1324);
												FAILURE(BgL_auxz00_6152, BFALSE, BFALSE);
											}
										BgL_idz00_49 = BgL_idz00_6149;
										BgL_modz00_48 = BgL_modz00_6148;
										goto BGl_evmodulezd2findzd2globalz00zz__evmodulez00;
									}
								}
							else
								{	/* Eval/evmodule.scm 252 */
									if (CBOOL(BgL_vz00_1321))
										{	/* Eval/evmodule.scm 254 */
											return BgL_vz00_1321;
										}
									else
										{	/* Eval/evmodule.scm 254 */
											return BGl_evalzd2lookupzd2zz__evenvz00(BgL_idz00_49);
										}
								}
						}
					}
				else
					{	/* Eval/evmodule.scm 250 */
						return BGl_evalzd2lookupzd2zz__evenvz00(BgL_idz00_49);
					}
			}
		}

	}



/* &evmodule-find-global */
	obj_t BGl_z62evmodulezd2findzd2globalz62zz__evmodulez00(obj_t BgL_envz00_4429,
		obj_t BgL_modz00_4430, obj_t BgL_idz00_4431)
	{
		{	/* Eval/evmodule.scm 249 */
			{	/* Eval/evmodule.scm 250 */
				obj_t BgL_auxz00_6160;

				if (SYMBOLP(BgL_idz00_4431))
					{	/* Eval/evmodule.scm 250 */
						BgL_auxz00_6160 = BgL_idz00_4431;
					}
				else
					{
						obj_t BgL_auxz00_6163;

						BgL_auxz00_6163 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__evmodulez00,
							BINT(((long) 9752)), BGl_string3215z00zz__evmodulez00,
							BGl_string3192z00zz__evmodulez00, BgL_idz00_4431);
						FAILURE(BgL_auxz00_6163, BFALSE, BFALSE);
					}
				return
					BGl_evmodulezd2findzd2globalz00zz__evmodulez00(BgL_modz00_4430,
					BgL_auxz00_6160);
			}
		}

	}



/* evmodule-bind-global! */
	BGL_EXPORTED_DEF obj_t BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00(obj_t
		BgL_modz00_50, obj_t BgL_idz00_51, obj_t BgL_varz00_52, obj_t BgL_locz00_53)
	{
		{	/* Eval/evmodule.scm 260 */
			if (CBOOL(BGl_getzd2evalzd2expanderz00zz__macroz00(BgL_idz00_51)))
				{	/* Eval/evmodule.scm 262 */
					obj_t BgL_msgz00_3134;

					{	/* Eval/evmodule.scm 262 */
						obj_t BgL_arg1375z00_3135;

						{	/* Eval/evmodule.scm 262 */
							obj_t BgL_res2388z00_3141;

							{	/* Eval/evmodule.scm 262 */
								obj_t BgL_arg2175z00_3140;

								BgL_arg2175z00_3140 = SYMBOL_TO_STRING(BgL_idz00_51);
								BgL_res2388z00_3141 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2175z00_3140);
							}
							BgL_arg1375z00_3135 = BgL_res2388z00_3141;
						}
						BgL_msgz00_3134 =
							string_append_3(BGl_string3216z00zz__evmodulez00,
							BgL_arg1375z00_3135, BGl_string3217z00zz__evmodulez00);
					}
					{	/* Eval/evmodule.scm 264 */
						obj_t BgL_list1374z00_3136;

						BgL_list1374z00_3136 = MAKE_YOUNG_PAIR(BgL_msgz00_3134, BNIL);
						BGl_evwarningz00zz__everrorz00(BgL_locz00_53, BgL_list1374z00_3136);
					}
				}
			else
				{	/* Eval/evmodule.scm 261 */
					BFALSE;
				}
			{	/* Eval/evmodule.scm 265 */
				bool_t BgL_test3687z00_6176;

				{	/* Eval/evmodule.scm 135 */
					bool_t BgL_test3688z00_6177;

					if (STRUCTP(BgL_modz00_50))
						{	/* Eval/evmodule.scm 129 */
							obj_t BgL_tmpz00_6180;

							{	/* Eval/evmodule.scm 129 */
								obj_t BgL_res2390z00_3148;

								{	/* Eval/evmodule.scm 129 */
									obj_t BgL_aux2768z00_4662;

									BgL_aux2768z00_4662 = STRUCT_KEY(BgL_modz00_50);
									if (SYMBOLP(BgL_aux2768z00_4662))
										{	/* Eval/evmodule.scm 129 */
											BgL_res2390z00_3148 = BgL_aux2768z00_4662;
										}
									else
										{
											obj_t BgL_auxz00_6184;

											BgL_auxz00_6184 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3188z00zz__evmodulez00, BINT(((long) 4439)),
												BGl_string3218z00zz__evmodulez00,
												BGl_string3192z00zz__evmodulez00, BgL_aux2768z00_4662);
											FAILURE(BgL_auxz00_6184, BFALSE, BFALSE);
								}}
								BgL_tmpz00_6180 = BgL_res2390z00_3148;
							}
							BgL_test3688z00_6177 =
								(BgL_tmpz00_6180 == BGl_symbol3186z00zz__evmodulez00);
						}
					else
						{	/* Eval/evmodule.scm 129 */
							BgL_test3688z00_6177 = ((bool_t) 0);
						}
					if (BgL_test3688z00_6177)
						{	/* Eval/evmodule.scm 135 */
							BgL_test3687z00_6176 =
								(STRUCT_REF(BgL_modz00_50,
									(int) (((long) 0))) ==
								BGl_makezd2z52evmodulezd2envz52zz__evmodulez00);
						}
					else
						{	/* Eval/evmodule.scm 135 */
							BgL_test3687z00_6176 = ((bool_t) 0);
						}
				}
				if (BgL_test3687z00_6176)
					{	/* Eval/evmodule.scm 266 */
						obj_t BgL_arg1377z00_3138;

						{	/* Eval/evmodule.scm 129 */
							obj_t BgL_sz00_3151;

							{	/* Eval/evmodule.scm 129 */
								obj_t BgL_aux2770z00_4664;

								BgL_aux2770z00_4664 = BgL_modz00_50;
								if (STRUCTP(BgL_aux2770z00_4664))
									{	/* Eval/evmodule.scm 129 */
										BgL_sz00_3151 = BgL_aux2770z00_4664;
									}
								else
									{
										obj_t BgL_auxz00_6194;

										BgL_auxz00_6194 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3188z00zz__evmodulez00, BINT(((long) 4439)),
											BGl_string3218z00zz__evmodulez00,
											BGl_string3194z00zz__evmodulez00, BgL_aux2770z00_4664);
										FAILURE(BgL_auxz00_6194, BFALSE, BFALSE);
							}}
							BgL_arg1377z00_3138 =
								STRUCT_REF(BgL_sz00_3151, (int) (((long) 3)));
						}
						{	/* Eval/evmodule.scm 266 */
							obj_t BgL_auxz00_6200;

							if (STRUCTP(BgL_arg1377z00_3138))
								{	/* Eval/evmodule.scm 266 */
									BgL_auxz00_6200 = BgL_arg1377z00_3138;
								}
							else
								{
									obj_t BgL_auxz00_6203;

									BgL_auxz00_6203 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3188z00zz__evmodulez00, BINT(((long) 10468)),
										BGl_string3218z00zz__evmodulez00,
										BGl_string3194z00zz__evmodulez00, BgL_arg1377z00_3138);
									FAILURE(BgL_auxz00_6203, BFALSE, BFALSE);
								}
							return
								BGl_hashtablezd2putz12zc0zz__hashz00(BgL_auxz00_6200,
								BgL_idz00_51, BgL_varz00_52);
						}
					}
				else
					{	/* Eval/evmodule.scm 267 */
						obj_t BgL_auxz00_6208;

						if (VECTORP(BgL_varz00_52))
							{	/* Eval/evmodule.scm 267 */
								BgL_auxz00_6208 = BgL_varz00_52;
							}
						else
							{
								obj_t BgL_auxz00_6211;

								BgL_auxz00_6211 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3188z00zz__evmodulez00, BINT(((long) 10507)),
									BGl_string3218z00zz__evmodulez00,
									BGl_string3212z00zz__evmodulez00, BgL_varz00_52);
								FAILURE(BgL_auxz00_6211, BFALSE, BFALSE);
							}
						return
							BGl_bindzd2evalzd2globalz12z12zz__evenvz00(BgL_idz00_51,
							BgL_auxz00_6208);
					}
			}
		}

	}



/* &evmodule-bind-global! */
	obj_t BGl_z62evmodulezd2bindzd2globalz12z70zz__evmodulez00(obj_t
		BgL_envz00_4432, obj_t BgL_modz00_4433, obj_t BgL_idz00_4434,
		obj_t BgL_varz00_4435, obj_t BgL_locz00_4436)
	{
		{	/* Eval/evmodule.scm 260 */
			{	/* Eval/evmodule.scm 264 */
				obj_t BgL_auxz00_6216;

				if (SYMBOLP(BgL_idz00_4434))
					{	/* Eval/evmodule.scm 264 */
						BgL_auxz00_6216 = BgL_idz00_4434;
					}
				else
					{
						obj_t BgL_auxz00_6219;

						BgL_auxz00_6219 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__evmodulez00,
							BINT(((long) 10402)), BGl_string3219z00zz__evmodulez00,
							BGl_string3192z00zz__evmodulez00, BgL_idz00_4434);
						FAILURE(BgL_auxz00_6219, BFALSE, BFALSE);
					}
				return
					BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00(BgL_modz00_4433,
					BgL_auxz00_6216, BgL_varz00_4435, BgL_locz00_4436);
			}
		}

	}



/* for-each/loc */
	bool_t BGl_forzd2eachzf2locz20zz__evmodulez00(obj_t BgL_locz00_54,
		obj_t BgL_procz00_55, obj_t BgL_lz00_56)
	{
		{	/* Eval/evmodule.scm 272 */
			{	/* Eval/evmodule.scm 273 */
				obj_t BgL_g1043z00_1333;

				{	/* Eval/evmodule.scm 274 */
					obj_t BgL__ortest_1042z00_1345;

					BgL__ortest_1042z00_1345 =
						BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_lz00_56);
					if (CBOOL(BgL__ortest_1042z00_1345))
						{	/* Eval/evmodule.scm 274 */
							BgL_g1043z00_1333 = BgL__ortest_1042z00_1345;
						}
					else
						{	/* Eval/evmodule.scm 274 */
							BgL_g1043z00_1333 = BgL_locz00_54;
						}
				}
				{
					obj_t BgL_lz00_1335;
					obj_t BgL_locz00_1336;

					BgL_lz00_1335 = BgL_lz00_56;
					BgL_locz00_1336 = BgL_g1043z00_1333;
				BgL_zc3z04anonymousza31378ze3z87_1337:
					if (PAIRP(BgL_lz00_1335))
						{	/* Eval/evmodule.scm 275 */
							{	/* Eval/evmodule.scm 276 */
								obj_t BgL_arg1380z00_1339;

								BgL_arg1380z00_1339 = CAR(BgL_lz00_1335);
								PROCEDURE_L_ENTRY(BgL_procz00_55) (BgL_procz00_55,
									BgL_locz00_1336, BgL_arg1380z00_1339);
							}
							{	/* Eval/evmodule.scm 277 */
								obj_t BgL_arg1381z00_1340;
								obj_t BgL_arg1382z00_1341;

								BgL_arg1381z00_1340 = CDR(BgL_lz00_1335);
								{	/* Eval/evmodule.scm 277 */
									obj_t BgL__ortest_1044z00_1342;

									BgL__ortest_1044z00_1342 =
										BGl_getzd2sourcezd2locationz00zz__readerz00(CDR
										(BgL_lz00_1335));
									if (CBOOL(BgL__ortest_1044z00_1342))
										{	/* Eval/evmodule.scm 277 */
											BgL_arg1382z00_1341 = BgL__ortest_1044z00_1342;
										}
									else
										{	/* Eval/evmodule.scm 277 */
											BgL_arg1382z00_1341 = BgL_locz00_1336;
										}
								}
								{
									obj_t BgL_locz00_6241;
									obj_t BgL_lz00_6240;

									BgL_lz00_6240 = BgL_arg1381z00_1340;
									BgL_locz00_6241 = BgL_arg1382z00_1341;
									BgL_locz00_1336 = BgL_locz00_6241;
									BgL_lz00_1335 = BgL_lz00_6240;
									goto BgL_zc3z04anonymousza31378ze3z87_1337;
								}
							}
						}
					else
						{	/* Eval/evmodule.scm 275 */
							return ((bool_t) 0);
						}
				}
			}
		}

	}



/* evmodule-library */
	obj_t BGl_evmodulezd2libraryzd2zz__evmodulez00(obj_t BgL_clausez00_57,
		obj_t BgL_locz00_58)
	{
		{	/* Eval/evmodule.scm 282 */
			{	/* Eval/evmodule.scm 283 */
				bool_t BgL_test3698z00_6242;

				if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_clausez00_57))
					{
						obj_t BgL_l1134z00_1373;

						{	/* Eval/evmodule.scm 283 */
							obj_t BgL_tmpz00_6245;

							BgL_l1134z00_1373 = BgL_clausez00_57;
						BgL_zc3z04anonymousza31398ze3z87_1374:
							if (NULLP(BgL_l1134z00_1373))
								{	/* Eval/evmodule.scm 283 */
									BgL_tmpz00_6245 = BTRUE;
								}
							else
								{	/* Eval/evmodule.scm 283 */
									if (PAIRP(BgL_l1134z00_1373))
										{	/* Eval/evmodule.scm 283 */
											bool_t BgL_test3702z00_6250;

											{	/* Eval/evmodule.scm 283 */
												obj_t BgL_tmpz00_6251;

												BgL_tmpz00_6251 = CAR(BgL_l1134z00_1373);
												BgL_test3702z00_6250 = SYMBOLP(BgL_tmpz00_6251);
											}
											if (BgL_test3702z00_6250)
												{
													obj_t BgL_l1134z00_6254;

													BgL_l1134z00_6254 = CDR(BgL_l1134z00_1373);
													BgL_l1134z00_1373 = BgL_l1134z00_6254;
													goto BgL_zc3z04anonymousza31398ze3z87_1374;
												}
											else
												{	/* Eval/evmodule.scm 283 */
													BgL_tmpz00_6245 = BFALSE;
												}
										}
									else
										{	/* Eval/evmodule.scm 283 */
											BgL_tmpz00_6245 =
												BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00
												(BGl_string3220z00zz__evmodulez00,
												BGl_string3221z00zz__evmodulez00, BgL_l1134z00_1373,
												BGl_string3188z00zz__evmodulez00, BINT(((long) 11236)));
								}}
							BgL_test3698z00_6242 = CBOOL(BgL_tmpz00_6245);
					}}
				else
					{	/* Eval/evmodule.scm 283 */
						BgL_test3698z00_6242 = ((bool_t) 0);
					}
				if (BgL_test3698z00_6242)
					{	/* Eval/evmodule.scm 286 */
						obj_t BgL_arg1392z00_1359;

						{	/* Eval/evmodule.scm 288 */
							obj_t BgL_pairz00_3161;

							if (PAIRP(BgL_clausez00_57))
								{	/* Eval/evmodule.scm 288 */
									BgL_pairz00_3161 = BgL_clausez00_57;
								}
							else
								{
									obj_t BgL_auxz00_6261;

									BgL_auxz00_6261 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3188z00zz__evmodulez00, BINT(((long) 11430)),
										BGl_string3222z00zz__evmodulez00,
										BGl_string3190z00zz__evmodulez00, BgL_clausez00_57);
									FAILURE(BgL_auxz00_6261, BFALSE, BFALSE);
								}
							BgL_arg1392z00_1359 = CDR(BgL_pairz00_3161);
						}
						return
							BBOOL(BGl_forzd2eachzf2locz20zz__evmodulez00(BgL_locz00_58,
								BGl_proc3223z00zz__evmodulez00, BgL_arg1392z00_1359));
					}
				else
					{	/* Eval/evmodule.scm 283 */
						return
							BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_58,
							BGl_string3224z00zz__evmodulez00,
							BGl_string3225z00zz__evmodulez00, BgL_clausez00_57);
					}
			}
		}

	}



/* &<@anonymous:1393> */
	obj_t BGl_z62zc3z04anonymousza31393ze3ze5zz__evmodulez00(obj_t
		BgL_envz00_4438, obj_t BgL_locz00_4439, obj_t BgL_sz00_4440)
	{
		{	/* Eval/evmodule.scm 286 */
			{	/* Eval/evmodule.scm 287 */
				obj_t BgL_arg1394z00_5157;

				{	/* Eval/evmodule.scm 287 */
					obj_t BgL_arg1395z00_5158;

					{	/* Eval/evmodule.scm 287 */
						obj_t BgL_arg1396z00_5159;

						{	/* Eval/evmodule.scm 287 */
							obj_t BgL_arg1397z00_5160;

							BgL_arg1397z00_5160 = MAKE_YOUNG_PAIR(BgL_sz00_4440, BNIL);
							BgL_arg1396z00_5159 =
								MAKE_YOUNG_PAIR(BGl_symbol3226z00zz__evmodulez00,
								BgL_arg1397z00_5160);
						}
						BgL_arg1395z00_5158 = MAKE_YOUNG_PAIR(BgL_arg1396z00_5159, BNIL);
					}
					BgL_arg1394z00_5157 =
						MAKE_YOUNG_PAIR(BGl_symbol3228z00zz__evmodulez00,
						BgL_arg1395z00_5158);
				}
				{	/* Eval/evmodule.scm 287 */

					{	/* Eval/evmodule.scm 387 */
						obj_t BgL_expz00_5161;

						if (CBOOL(BgL_locz00_4439))
							{	/* Eval/evmodule.scm 388 */
								obj_t BgL_arg1478z00_5162;
								obj_t BgL_arg1479z00_5163;

								BgL_arg1478z00_5162 = CAR(BgL_arg1394z00_5157);
								BgL_arg1479z00_5163 = CDR(BgL_arg1394z00_5157);
								{	/* Eval/evmodule.scm 388 */
									obj_t BgL_res2396z00_5164;

									BgL_res2396z00_5164 =
										MAKE_YOUNG_EPAIR(BgL_arg1478z00_5162, BgL_arg1479z00_5163,
										BgL_locz00_4439);
									BgL_expz00_5161 = BgL_res2396z00_5164;
								}
							}
						else
							{	/* Eval/evmodule.scm 387 */
								BgL_expz00_5161 = BgL_arg1394z00_5157;
							}
						return BGl_evalz00zz__evalz00(BgL_expz00_5161, BFALSE);
					}
				}
			}
		}

	}



/* evmodule-option */
	obj_t BGl_evmodulezd2optionzd2zz__evmodulez00(obj_t BgL_clausez00_59,
		obj_t BgL_locz00_60)
	{
		{	/* Eval/evmodule.scm 293 */
			{
				obj_t BgL_expz00_1382;

				if (PAIRP(BgL_clausez00_59))
					{	/* Eval/evmodule.scm 294 */
						if ((CAR(BgL_clausez00_59) == BGl_symbol3232z00zz__evmodulez00))
							{	/* Eval/evmodule.scm 294 */
								BgL_expz00_1382 = CDR(BgL_clausez00_59);
								{	/* Eval/evmodule.scm 296 */
									obj_t BgL_locz00_1391;

									{	/* Eval/evmodule.scm 296 */
										obj_t BgL__ortest_1045z00_1403;

										BgL__ortest_1045z00_1403 =
											BGl_getzd2sourcezd2locationz00zz__readerz00
											(BgL_clausez00_59);
										if (CBOOL(BgL__ortest_1045z00_1403))
											{	/* Eval/evmodule.scm 296 */
												BgL_locz00_1391 = BgL__ortest_1045z00_1403;
											}
										else
											{	/* Eval/evmodule.scm 296 */
												BgL_locz00_1391 = BgL_locz00_60;
											}
									}
									{
										obj_t BgL_l1137z00_1393;

										BgL_l1137z00_1393 = BgL_expz00_1382;
									BgL_zc3z04anonymousza31406ze3z87_1394:
										if (PAIRP(BgL_l1137z00_1393))
											{	/* Eval/evmodule.scm 297 */
												{	/* Eval/evmodule.scm 297 */
													obj_t BgL_ez00_1396;

													BgL_ez00_1396 = CAR(BgL_l1137z00_1393);
													{	/* Eval/evmodule.scm 297 */

														{	/* Eval/evmodule.scm 387 */
															obj_t BgL_expz00_3177;

															if (CBOOL(BgL_locz00_1391))
																{	/* Eval/evmodule.scm 388 */
																	obj_t BgL_arg1478z00_3178;
																	obj_t BgL_arg1479z00_3179;

																	{	/* Eval/evmodule.scm 388 */
																		obj_t BgL_pairz00_3180;

																		if (PAIRP(BgL_ez00_1396))
																			{	/* Eval/evmodule.scm 388 */
																				BgL_pairz00_3180 = BgL_ez00_1396;
																			}
																		else
																			{
																				obj_t BgL_auxz00_6294;

																				BgL_auxz00_6294 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string3188z00zz__evmodulez00,
																					BINT(((long) 15560)),
																					BGl_string3230z00zz__evmodulez00,
																					BGl_string3190z00zz__evmodulez00,
																					BgL_ez00_1396);
																				FAILURE(BgL_auxz00_6294, BFALSE,
																					BFALSE);
																			}
																		BgL_arg1478z00_3178 = CAR(BgL_pairz00_3180);
																	}
																	{	/* Eval/evmodule.scm 388 */
																		obj_t BgL_pairz00_3181;

																		if (PAIRP(BgL_ez00_1396))
																			{	/* Eval/evmodule.scm 388 */
																				BgL_pairz00_3181 = BgL_ez00_1396;
																			}
																		else
																			{
																				obj_t BgL_auxz00_6301;

																				BgL_auxz00_6301 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string3188z00zz__evmodulez00,
																					BINT(((long) 15570)),
																					BGl_string3230z00zz__evmodulez00,
																					BGl_string3190z00zz__evmodulez00,
																					BgL_ez00_1396);
																				FAILURE(BgL_auxz00_6301, BFALSE,
																					BFALSE);
																			}
																		BgL_arg1479z00_3179 = CDR(BgL_pairz00_3181);
																	}
																	{	/* Eval/evmodule.scm 388 */
																		obj_t BgL_res2398z00_3182;

																		BgL_res2398z00_3182 =
																			MAKE_YOUNG_EPAIR(BgL_arg1478z00_3178,
																			BgL_arg1479z00_3179, BgL_locz00_1391);
																		BgL_expz00_3177 = BgL_res2398z00_3182;
																}}
															else
																{	/* Eval/evmodule.scm 387 */
																	BgL_expz00_3177 = BgL_ez00_1396;
																}
															BGl_evalz00zz__evalz00(BgL_expz00_3177, BFALSE);
														}
													}
												}
												{
													obj_t BgL_l1137z00_6308;

													BgL_l1137z00_6308 = CDR(BgL_l1137z00_1393);
													BgL_l1137z00_1393 = BgL_l1137z00_6308;
													goto BgL_zc3z04anonymousza31406ze3z87_1394;
												}
											}
										else
											{	/* Eval/evmodule.scm 297 */
												if (NULLP(BgL_l1137z00_1393))
													{	/* Eval/evmodule.scm 297 */
														return BTRUE;
													}
												else
													{	/* Eval/evmodule.scm 297 */
														return
															BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00
															(BGl_string3231z00zz__evmodulez00,
															BGl_string3221z00zz__evmodulez00,
															BgL_l1137z00_1393,
															BGl_string3188z00zz__evmodulez00,
															BINT(((long) 11807)));
							}}}}}
						else
							{	/* Eval/evmodule.scm 294 */
								return
									BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_60,
									BGl_string3224z00zz__evmodulez00,
									BGl_string3234z00zz__evmodulez00, BgL_clausez00_59);
							}
					}
				else
					{	/* Eval/evmodule.scm 294 */
						return
							BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_60,
							BGl_string3224z00zz__evmodulez00,
							BGl_string3234z00zz__evmodulez00, BgL_clausez00_59);
					}
			}
		}

	}



/* mark-global! */
	obj_t BGl_markzd2globalz12zc0zz__evmodulez00(obj_t BgL_idz00_61,
		obj_t BgL_modz00_62, long BgL_tagz00_63, obj_t BgL_locz00_64)
	{
		{	/* Eval/evmodule.scm 304 */
			{	/* Eval/evmodule.scm 305 */
				obj_t BgL_vz00_3188;

				{	/* Eval/evmodule.scm 305 */
					obj_t BgL_auxz00_6317;

					if (SYMBOLP(BgL_idz00_61))
						{	/* Eval/evmodule.scm 305 */
							BgL_auxz00_6317 = BgL_idz00_61;
						}
					else
						{
							obj_t BgL_auxz00_6320;

							BgL_auxz00_6320 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3188z00zz__evmodulez00, BINT(((long) 12237)),
								BGl_string3235z00zz__evmodulez00,
								BGl_string3192z00zz__evmodulez00, BgL_idz00_61);
							FAILURE(BgL_auxz00_6320, BFALSE, BFALSE);
						}
					BgL_vz00_3188 =
						BGl_evmodulezd2findzd2globalz00zz__evmodulez00(BgL_modz00_62,
						BgL_auxz00_6317);
				}
				{	/* Eval/evmodule.scm 306 */
					bool_t BgL_test3714z00_6325;

					if (VECTORP(BgL_vz00_3188))
						{	/* Eval/evmodule.scm 306 */
							BgL_test3714z00_6325 =
								(VECTOR_LENGTH(BgL_vz00_3188) == ((long) 5));
						}
					else
						{	/* Eval/evmodule.scm 306 */
							BgL_test3714z00_6325 = ((bool_t) 0);
						}
					if (BgL_test3714z00_6325)
						{	/* Eval/evmodule.scm 306 */
							{	/* Eval/evmodule.scm 308 */
								int BgL_tagz00_3197;

								BgL_tagz00_3197 = (int) (BgL_tagz00_63);
								VECTOR_SET(BgL_vz00_3188, ((long) 0), BINT(BgL_tagz00_3197));
							}
							return BgL_idz00_61;
						}
					else
						{	/* Eval/evmodule.scm 306 */
							return
								BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_64,
								BGl_string3224z00zz__evmodulez00,
								BGl_string3236z00zz__evmodulez00, BgL_idz00_61);
						}
				}
			}
		}

	}



/* evmodule-static */
	obj_t BGl_evmodulezd2staticzd2zz__evmodulez00(obj_t BgL_modz00_74,
		obj_t BgL_clausez00_75, obj_t BgL_locz00_76, bool_t BgL_classpz00_77)
	{
		{	/* Eval/evmodule.scm 335 */
			{	/* Eval/evmodule.scm 372 */
				obj_t BgL_evmodulezd2staticzd2clausez00_4441;

				{
					int BgL_tmpz00_6334;

					BgL_tmpz00_6334 = (int) (((long) 3));
					BgL_evmodulezd2staticzd2clausez00_4441 =
						MAKE_L_PROCEDURE
						(BGl_z62evmodulezd2staticzd2clausez62zz__evmodulez00,
						BgL_tmpz00_6334);
				}
				PROCEDURE_L_SET(BgL_evmodulezd2staticzd2clausez00_4441,
					(int) (((long) 0)), BgL_modz00_74);
				PROCEDURE_L_SET(BgL_evmodulezd2staticzd2clausez00_4441,
					(int) (((long) 1)), BBOOL(BgL_classpz00_77));
				PROCEDURE_L_SET(BgL_evmodulezd2staticzd2clausez00_4441,
					(int) (((long) 2)), BgL_clausez00_75);
				if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_clausez00_75))
					{	/* Eval/evmodule.scm 375 */
						obj_t BgL_arg1413z00_1409;

						{	/* Eval/evmodule.scm 375 */
							obj_t BgL_pairz00_3443;

							if (PAIRP(BgL_clausez00_75))
								{	/* Eval/evmodule.scm 375 */
									BgL_pairz00_3443 = BgL_clausez00_75;
								}
							else
								{
									obj_t BgL_auxz00_6348;

									BgL_auxz00_6348 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3188z00zz__evmodulez00, BINT(((long) 14911)),
										BGl_string3237z00zz__evmodulez00,
										BGl_string3190z00zz__evmodulez00, BgL_clausez00_75);
									FAILURE(BgL_auxz00_6348, BFALSE, BFALSE);
								}
							BgL_arg1413z00_1409 = CDR(BgL_pairz00_3443);
						}
						return
							BBOOL(BGl_forzd2eachzf2locz20zz__evmodulez00(BgL_locz00_76,
								BgL_evmodulezd2staticzd2clausez00_4441, BgL_arg1413z00_1409));
					}
				else
					{	/* Eval/evmodule.scm 373 */
						return
							BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_76,
							BGl_string3224z00zz__evmodulez00,
							BGl_string3238z00zz__evmodulez00, BgL_clausez00_75);
					}
			}
		}

	}



/* &evmodule-static-clause */
	obj_t BGl_z62evmodulezd2staticzd2clausez62zz__evmodulez00(obj_t
		BgL_envz00_4442, obj_t BgL_locz00_4446, obj_t BgL_sz00_4447)
	{
		{	/* Eval/evmodule.scm 372 */
			{	/* Eval/evmodule.scm 372 */
				obj_t BgL_modz00_4443;
				bool_t BgL_classpz00_4444;
				obj_t BgL_clausez00_4445;

				BgL_modz00_4443 = PROCEDURE_L_REF(BgL_envz00_4442, (int) (((long) 0)));
				BgL_classpz00_4444 =
					CBOOL(PROCEDURE_L_REF(BgL_envz00_4442, (int) (((long) 1))));
				BgL_clausez00_4445 =
					PROCEDURE_L_REF(BgL_envz00_4442, (int) (((long) 2)));
				{
					obj_t BgL_sz00_5179;

					if (SYMBOLP(BgL_sz00_4447))
						{	/* Eval/evmodule.scm 372 */
							if (BgL_classpz00_4444)
								{	/* Eval/evmodule.scm 339 */
									return BFALSE;
								}
							else
								{	/* Eval/evmodule.scm 340 */
									obj_t BgL_idz00_5191;

									BgL_idz00_5191 =
										BGl_untypezd2identzd2zz__evmodulez00(BgL_sz00_4447);
									{	/* Eval/evmodule.scm 328 */
										obj_t BgL_gz00_5192;

										{	/* Eval/evmodule.scm 328 */
											obj_t BgL_idz00_5193;

											if (SYMBOLP(BgL_idz00_5191))
												{	/* Eval/evmodule.scm 328 */
													BgL_idz00_5193 = BgL_idz00_5191;
												}
											else
												{
													obj_t BgL_auxz00_6369;

													BgL_auxz00_6369 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3188z00zz__evmodulez00,
														BINT(((long) 13270)),
														BGl_string3242z00zz__evmodulez00,
														BGl_string3192z00zz__evmodulez00, BgL_idz00_5191);
													FAILURE(BgL_auxz00_6369, BFALSE, BFALSE);
												}
											{	/* Eval/evmodule.scm 328 */
												obj_t BgL_v1199z00_5194;

												BgL_v1199z00_5194 = create_vector(((long) 5));
												VECTOR_SET(BgL_v1199z00_5194, ((long) 0),
													BINT(((long) 2)));
												VECTOR_SET(BgL_v1199z00_5194, ((long) 1),
													BgL_idz00_5193);
												VECTOR_SET(BgL_v1199z00_5194, ((long) 2), BUNSPEC);
												VECTOR_SET(BgL_v1199z00_5194, ((long) 3),
													BgL_modz00_4443);
												VECTOR_SET(BgL_v1199z00_5194, ((long) 4),
													BgL_locz00_4446);
												BgL_gz00_5192 = BgL_v1199z00_5194;
										}}
										{	/* Eval/evmodule.scm 329 */
											obj_t BgL_auxz00_6380;

											if (SYMBOLP(BgL_idz00_5191))
												{	/* Eval/evmodule.scm 329 */
													BgL_auxz00_6380 = BgL_idz00_5191;
												}
											else
												{
													obj_t BgL_auxz00_6383;

													BgL_auxz00_6383 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3188z00zz__evmodulez00,
														BINT(((long) 13317)),
														BGl_string3242z00zz__evmodulez00,
														BGl_string3192z00zz__evmodulez00, BgL_idz00_5191);
													FAILURE(BgL_auxz00_6383, BFALSE, BFALSE);
												}
											BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00
												(BgL_modz00_4443, BgL_auxz00_6380, BgL_gz00_5192,
												BgL_locz00_4446);
										} BgL_gz00_5192;
									}
									{	/* Eval/evmodule.scm 305 */
										obj_t BgL_vz00_5195;

										{	/* Eval/evmodule.scm 305 */
											obj_t BgL_auxz00_6388;

											if (SYMBOLP(BgL_idz00_5191))
												{	/* Eval/evmodule.scm 305 */
													BgL_auxz00_6388 = BgL_idz00_5191;
												}
											else
												{
													obj_t BgL_auxz00_6391;

													BgL_auxz00_6391 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3188z00zz__evmodulez00,
														BINT(((long) 12237)),
														BGl_string3242z00zz__evmodulez00,
														BGl_string3192z00zz__evmodulez00, BgL_idz00_5191);
													FAILURE(BgL_auxz00_6391, BFALSE, BFALSE);
												}
											BgL_vz00_5195 =
												BGl_evmodulezd2findzd2globalz00zz__evmodulez00
												(BgL_modz00_4443, BgL_auxz00_6388);
										}
										{	/* Eval/evmodule.scm 306 */
											bool_t BgL_test3723z00_6396;

											if (VECTORP(BgL_vz00_5195))
												{	/* Eval/evmodule.scm 306 */
													BgL_test3723z00_6396 =
														(VECTOR_LENGTH(BgL_vz00_5195) == ((long) 5));
												}
											else
												{	/* Eval/evmodule.scm 306 */
													BgL_test3723z00_6396 = ((bool_t) 0);
												}
											if (BgL_test3723z00_6396)
												{	/* Eval/evmodule.scm 306 */
													VECTOR_SET(BgL_vz00_5195, ((long) 0),
														BINT(((long) 3)));
													return BgL_idz00_5191;
												}
											else
												{	/* Eval/evmodule.scm 306 */
													return
														BGl_evcompilezd2errorzd2zz__evcompilez00
														(BgL_locz00_4446, BGl_string3224z00zz__evmodulez00,
														BGl_string3236z00zz__evmodulez00, BgL_idz00_5191);
												}
										}
									}
								}
						}
					else
						{	/* Eval/evmodule.scm 372 */
							if (PAIRP(BgL_sz00_4447))
								{	/* Eval/evmodule.scm 372 */
									obj_t BgL_cdrzd2127zd2_5196;

									BgL_cdrzd2127zd2_5196 = CDR(BgL_sz00_4447);
									if ((CAR(BgL_sz00_4447) == BGl_symbol3243z00zz__evmodulez00))
										{	/* Eval/evmodule.scm 372 */
											if (PAIRP(BgL_cdrzd2127zd2_5196))
												{	/* Eval/evmodule.scm 372 */
													obj_t BgL_carzd2130zd2_5197;

													BgL_carzd2130zd2_5197 = CAR(BgL_cdrzd2127zd2_5196);
													if (SYMBOLP(BgL_carzd2130zd2_5197))
														{	/* Eval/evmodule.scm 372 */
															obj_t BgL_arg1421z00_5198;

															BgL_arg1421z00_5198 = CDR(BgL_cdrzd2127zd2_5196);
															if (BgL_classpz00_4444)
																{	/* Eval/evmodule.scm 345 */
																	obj_t BgL_auxz00_6417;

																	{	/* Eval/evmodule.scm 345 */
																		bool_t BgL_test3730z00_6418;

																		if (PAIRP(BgL_arg1421z00_5198))
																			{	/* Eval/evmodule.scm 345 */
																				BgL_test3730z00_6418 = ((bool_t) 1);
																			}
																		else
																			{	/* Eval/evmodule.scm 345 */
																				BgL_test3730z00_6418 =
																					NULLP(BgL_arg1421z00_5198);
																			}
																		if (BgL_test3730z00_6418)
																			{	/* Eval/evmodule.scm 345 */
																				BgL_auxz00_6417 = BgL_arg1421z00_5198;
																			}
																		else
																			{
																				obj_t BgL_auxz00_6422;

																				BgL_auxz00_6422 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string3188z00zz__evmodulez00,
																					BINT(((long) 13900)),
																					BGl_string3245z00zz__evmodulez00,
																					BGl_string3246z00zz__evmodulez00,
																					BgL_arg1421z00_5198);
																				FAILURE(BgL_auxz00_6422, BFALSE,
																					BFALSE);
																	}}
																	return
																		BGl_evalzd2classzd2zz__evobjectz00
																		(BgL_carzd2130zd2_5197, ((bool_t) 0),
																		BgL_auxz00_6417, BgL_sz00_4447,
																		BgL_modz00_4443);
																}
															else
																{	/* Eval/evmodule.scm 344 */
																	return BFALSE;
																}
														}
													else
														{	/* Eval/evmodule.scm 372 */
															obj_t BgL_carzd2174zd2_5203;

															BgL_carzd2174zd2_5203 = CAR(BgL_sz00_4447);
															if (SYMBOLP(BgL_carzd2174zd2_5203))
																{	/* Eval/evmodule.scm 372 */
																	if (BgL_classpz00_4444)
																		{	/* Eval/evmodule.scm 365 */
																			return BFALSE;
																		}
																	else
																		{	/* Eval/evmodule.scm 366 */
																			obj_t BgL_idz00_5204;

																			BgL_idz00_5204 =
																				BGl_untypezd2identzd2zz__evmodulez00
																				(BgL_carzd2174zd2_5203);
																			{	/* Eval/evmodule.scm 328 */
																				obj_t BgL_gz00_5205;

																				{	/* Eval/evmodule.scm 328 */
																					obj_t BgL_idz00_5206;

																					if (SYMBOLP(BgL_idz00_5204))
																						{	/* Eval/evmodule.scm 328 */
																							BgL_idz00_5206 = BgL_idz00_5204;
																						}
																					else
																						{
																							obj_t BgL_auxz00_6434;

																							BgL_auxz00_6434 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string3188z00zz__evmodulez00,
																								BINT(((long) 13270)),
																								BGl_string3245z00zz__evmodulez00,
																								BGl_string3192z00zz__evmodulez00,
																								BgL_idz00_5204);
																							FAILURE(BgL_auxz00_6434, BFALSE,
																								BFALSE);
																						}
																					{	/* Eval/evmodule.scm 328 */
																						obj_t BgL_v1199z00_5207;

																						BgL_v1199z00_5207 =
																							create_vector(((long) 5));
																						VECTOR_SET(BgL_v1199z00_5207,
																							((long) 0), BINT(((long) 2)));
																						VECTOR_SET(BgL_v1199z00_5207,
																							((long) 1), BgL_idz00_5206);
																						VECTOR_SET(BgL_v1199z00_5207,
																							((long) 2), BUNSPEC);
																						VECTOR_SET(BgL_v1199z00_5207,
																							((long) 3), BgL_modz00_4443);
																						VECTOR_SET(BgL_v1199z00_5207,
																							((long) 4), BgL_locz00_4446);
																						BgL_gz00_5205 = BgL_v1199z00_5207;
																				}}
																				{	/* Eval/evmodule.scm 329 */
																					obj_t BgL_auxz00_6445;

																					if (SYMBOLP(BgL_idz00_5204))
																						{	/* Eval/evmodule.scm 329 */
																							BgL_auxz00_6445 = BgL_idz00_5204;
																						}
																					else
																						{
																							obj_t BgL_auxz00_6448;

																							BgL_auxz00_6448 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string3188z00zz__evmodulez00,
																								BINT(((long) 13317)),
																								BGl_string3245z00zz__evmodulez00,
																								BGl_string3192z00zz__evmodulez00,
																								BgL_idz00_5204);
																							FAILURE(BgL_auxz00_6448, BFALSE,
																								BFALSE);
																						}
																					BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00
																						(BgL_modz00_4443, BgL_auxz00_6445,
																						BgL_gz00_5205, BgL_locz00_4446);
																				} BgL_gz00_5205;
																			}
																			return
																				BGl_markzd2globalz12zc0zz__evmodulez00
																				(BgL_idz00_5204, BgL_modz00_4443,
																				((long) 4), BgL_locz00_4446);
																}}
															else
																{	/* Eval/evmodule.scm 372 */
																	return
																		BGl_evcompilezd2errorzd2zz__evcompilez00
																		(BgL_locz00_4446,
																		BGl_string3224z00zz__evmodulez00,
																		BGl_string3238z00zz__evmodulez00,
																		BgL_clausez00_4445);
																}
														}
												}
											else
												{	/* Eval/evmodule.scm 372 */
													obj_t BgL_carzd2198zd2_5208;

													BgL_carzd2198zd2_5208 = CAR(BgL_sz00_4447);
													if (SYMBOLP(BgL_carzd2198zd2_5208))
														{	/* Eval/evmodule.scm 372 */
															if (BgL_classpz00_4444)
																{	/* Eval/evmodule.scm 365 */
																	return BFALSE;
																}
															else
																{	/* Eval/evmodule.scm 366 */
																	obj_t BgL_idz00_5209;

																	BgL_idz00_5209 =
																		BGl_untypezd2identzd2zz__evmodulez00
																		(BgL_carzd2198zd2_5208);
																	{	/* Eval/evmodule.scm 328 */
																		obj_t BgL_gz00_5210;

																		{	/* Eval/evmodule.scm 328 */
																			obj_t BgL_idz00_5211;

																			if (SYMBOLP(BgL_idz00_5209))
																				{	/* Eval/evmodule.scm 328 */
																					BgL_idz00_5211 = BgL_idz00_5209;
																				}
																			else
																				{
																					obj_t BgL_auxz00_6462;

																					BgL_auxz00_6462 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string3188z00zz__evmodulez00,
																						BINT(((long) 13270)),
																						BGl_string3245z00zz__evmodulez00,
																						BGl_string3192z00zz__evmodulez00,
																						BgL_idz00_5209);
																					FAILURE(BgL_auxz00_6462, BFALSE,
																						BFALSE);
																				}
																			{	/* Eval/evmodule.scm 328 */
																				obj_t BgL_v1199z00_5212;

																				BgL_v1199z00_5212 =
																					create_vector(((long) 5));
																				VECTOR_SET(BgL_v1199z00_5212,
																					((long) 0), BINT(((long) 2)));
																				VECTOR_SET(BgL_v1199z00_5212,
																					((long) 1), BgL_idz00_5211);
																				VECTOR_SET(BgL_v1199z00_5212,
																					((long) 2), BUNSPEC);
																				VECTOR_SET(BgL_v1199z00_5212,
																					((long) 3), BgL_modz00_4443);
																				VECTOR_SET(BgL_v1199z00_5212,
																					((long) 4), BgL_locz00_4446);
																				BgL_gz00_5210 = BgL_v1199z00_5212;
																		}}
																		{	/* Eval/evmodule.scm 329 */
																			obj_t BgL_auxz00_6473;

																			if (SYMBOLP(BgL_idz00_5209))
																				{	/* Eval/evmodule.scm 329 */
																					BgL_auxz00_6473 = BgL_idz00_5209;
																				}
																			else
																				{
																					obj_t BgL_auxz00_6476;

																					BgL_auxz00_6476 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string3188z00zz__evmodulez00,
																						BINT(((long) 13317)),
																						BGl_string3245z00zz__evmodulez00,
																						BGl_string3192z00zz__evmodulez00,
																						BgL_idz00_5209);
																					FAILURE(BgL_auxz00_6476, BFALSE,
																						BFALSE);
																				}
																			BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00
																				(BgL_modz00_4443, BgL_auxz00_6473,
																				BgL_gz00_5210, BgL_locz00_4446);
																		} BgL_gz00_5210;
																	}
																	return
																		BGl_markzd2globalz12zc0zz__evmodulez00
																		(BgL_idz00_5209, BgL_modz00_4443,
																		((long) 4), BgL_locz00_4446);
														}}
													else
														{	/* Eval/evmodule.scm 372 */
															return
																BGl_evcompilezd2errorzd2zz__evcompilez00
																(BgL_locz00_4446,
																BGl_string3224z00zz__evmodulez00,
																BGl_string3238z00zz__evmodulez00,
																BgL_clausez00_4445);
														}
												}
										}
									else
										{	/* Eval/evmodule.scm 372 */
											if (
												(CAR(BgL_sz00_4447) ==
													BGl_symbol3247z00zz__evmodulez00))
												{	/* Eval/evmodule.scm 372 */
													if (PAIRP(BgL_cdrzd2127zd2_5196))
														{	/* Eval/evmodule.scm 372 */
															obj_t BgL_carzd2212zd2_5213;

															BgL_carzd2212zd2_5213 =
																CAR(BgL_cdrzd2127zd2_5196);
															if (SYMBOLP(BgL_carzd2212zd2_5213))
																{	/* Eval/evmodule.scm 372 */
																	obj_t BgL_arg1431z00_5214;

																	BgL_arg1431z00_5214 =
																		CDR(BgL_cdrzd2127zd2_5196);
																	if (BgL_classpz00_4444)
																		{	/* Eval/evmodule.scm 348 */
																			obj_t BgL_auxz00_6493;

																			{	/* Eval/evmodule.scm 348 */
																				bool_t BgL_test3744z00_6494;

																				if (PAIRP(BgL_arg1431z00_5214))
																					{	/* Eval/evmodule.scm 348 */
																						BgL_test3744z00_6494 = ((bool_t) 1);
																					}
																				else
																					{	/* Eval/evmodule.scm 348 */
																						BgL_test3744z00_6494 =
																							NULLP(BgL_arg1431z00_5214);
																					}
																				if (BgL_test3744z00_6494)
																					{	/* Eval/evmodule.scm 348 */
																						BgL_auxz00_6493 =
																							BgL_arg1431z00_5214;
																					}
																				else
																					{
																						obj_t BgL_auxz00_6498;

																						BgL_auxz00_6498 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string3188z00zz__evmodulez00,
																							BINT(((long) 14009)),
																							BGl_string3245z00zz__evmodulez00,
																							BGl_string3246z00zz__evmodulez00,
																							BgL_arg1431z00_5214);
																						FAILURE(BgL_auxz00_6498, BFALSE,
																							BFALSE);
																			}}
																			return
																				BGl_evalzd2classzd2zz__evobjectz00
																				(BgL_carzd2212zd2_5213, ((bool_t) 0),
																				BgL_auxz00_6493, BgL_sz00_4447,
																				BgL_modz00_4443);
																		}
																	else
																		{	/* Eval/evmodule.scm 347 */
																			return BFALSE;
																		}
																}
															else
																{	/* Eval/evmodule.scm 372 */
																	obj_t BgL_carzd2251zd2_5219;

																	BgL_carzd2251zd2_5219 = CAR(BgL_sz00_4447);
																	if (SYMBOLP(BgL_carzd2251zd2_5219))
																		{	/* Eval/evmodule.scm 372 */
																			if (BgL_classpz00_4444)
																				{	/* Eval/evmodule.scm 365 */
																					return BFALSE;
																				}
																			else
																				{	/* Eval/evmodule.scm 366 */
																					obj_t BgL_idz00_5220;

																					BgL_idz00_5220 =
																						BGl_untypezd2identzd2zz__evmodulez00
																						(BgL_carzd2251zd2_5219);
																					{	/* Eval/evmodule.scm 328 */
																						obj_t BgL_gz00_5221;

																						{	/* Eval/evmodule.scm 328 */
																							obj_t BgL_idz00_5222;

																							if (SYMBOLP(BgL_idz00_5220))
																								{	/* Eval/evmodule.scm 328 */
																									BgL_idz00_5222 =
																										BgL_idz00_5220;
																								}
																							else
																								{
																									obj_t BgL_auxz00_6510;

																									BgL_auxz00_6510 =
																										BGl_typezd2errorzd2zz__errorz00
																										(BGl_string3188z00zz__evmodulez00,
																										BINT(((long) 13270)),
																										BGl_string3245z00zz__evmodulez00,
																										BGl_string3192z00zz__evmodulez00,
																										BgL_idz00_5220);
																									FAILURE(BgL_auxz00_6510,
																										BFALSE, BFALSE);
																								}
																							{	/* Eval/evmodule.scm 328 */
																								obj_t BgL_v1199z00_5223;

																								BgL_v1199z00_5223 =
																									create_vector(((long) 5));
																								VECTOR_SET(BgL_v1199z00_5223,
																									((long) 0), BINT(((long) 2)));
																								VECTOR_SET(BgL_v1199z00_5223,
																									((long) 1), BgL_idz00_5222);
																								VECTOR_SET(BgL_v1199z00_5223,
																									((long) 2), BUNSPEC);
																								VECTOR_SET(BgL_v1199z00_5223,
																									((long) 3), BgL_modz00_4443);
																								VECTOR_SET(BgL_v1199z00_5223,
																									((long) 4), BgL_locz00_4446);
																								BgL_gz00_5221 =
																									BgL_v1199z00_5223;
																						}}
																						{	/* Eval/evmodule.scm 329 */
																							obj_t BgL_auxz00_6521;

																							if (SYMBOLP(BgL_idz00_5220))
																								{	/* Eval/evmodule.scm 329 */
																									BgL_auxz00_6521 =
																										BgL_idz00_5220;
																								}
																							else
																								{
																									obj_t BgL_auxz00_6524;

																									BgL_auxz00_6524 =
																										BGl_typezd2errorzd2zz__errorz00
																										(BGl_string3188z00zz__evmodulez00,
																										BINT(((long) 13317)),
																										BGl_string3245z00zz__evmodulez00,
																										BGl_string3192z00zz__evmodulez00,
																										BgL_idz00_5220);
																									FAILURE(BgL_auxz00_6524,
																										BFALSE, BFALSE);
																								}
																							BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00
																								(BgL_modz00_4443,
																								BgL_auxz00_6521, BgL_gz00_5221,
																								BgL_locz00_4446);
																						} BgL_gz00_5221;
																					}
																					return
																						BGl_markzd2globalz12zc0zz__evmodulez00
																						(BgL_idz00_5220, BgL_modz00_4443,
																						((long) 4), BgL_locz00_4446);
																		}}
																	else
																		{	/* Eval/evmodule.scm 372 */
																			return
																				BGl_evcompilezd2errorzd2zz__evcompilez00
																				(BgL_locz00_4446,
																				BGl_string3224z00zz__evmodulez00,
																				BGl_string3238z00zz__evmodulez00,
																				BgL_clausez00_4445);
																		}
																}
														}
													else
														{	/* Eval/evmodule.scm 372 */
															obj_t BgL_carzd2270zd2_5224;

															BgL_carzd2270zd2_5224 = CAR(BgL_sz00_4447);
															if (SYMBOLP(BgL_carzd2270zd2_5224))
																{	/* Eval/evmodule.scm 372 */
																	if (BgL_classpz00_4444)
																		{	/* Eval/evmodule.scm 365 */
																			return BFALSE;
																		}
																	else
																		{	/* Eval/evmodule.scm 366 */
																			obj_t BgL_idz00_5225;

																			BgL_idz00_5225 =
																				BGl_untypezd2identzd2zz__evmodulez00
																				(BgL_carzd2270zd2_5224);
																			{	/* Eval/evmodule.scm 328 */
																				obj_t BgL_gz00_5226;

																				{	/* Eval/evmodule.scm 328 */
																					obj_t BgL_idz00_5227;

																					if (SYMBOLP(BgL_idz00_5225))
																						{	/* Eval/evmodule.scm 328 */
																							BgL_idz00_5227 = BgL_idz00_5225;
																						}
																					else
																						{
																							obj_t BgL_auxz00_6538;

																							BgL_auxz00_6538 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string3188z00zz__evmodulez00,
																								BINT(((long) 13270)),
																								BGl_string3245z00zz__evmodulez00,
																								BGl_string3192z00zz__evmodulez00,
																								BgL_idz00_5225);
																							FAILURE(BgL_auxz00_6538, BFALSE,
																								BFALSE);
																						}
																					{	/* Eval/evmodule.scm 328 */
																						obj_t BgL_v1199z00_5228;

																						BgL_v1199z00_5228 =
																							create_vector(((long) 5));
																						VECTOR_SET(BgL_v1199z00_5228,
																							((long) 0), BINT(((long) 2)));
																						VECTOR_SET(BgL_v1199z00_5228,
																							((long) 1), BgL_idz00_5227);
																						VECTOR_SET(BgL_v1199z00_5228,
																							((long) 2), BUNSPEC);
																						VECTOR_SET(BgL_v1199z00_5228,
																							((long) 3), BgL_modz00_4443);
																						VECTOR_SET(BgL_v1199z00_5228,
																							((long) 4), BgL_locz00_4446);
																						BgL_gz00_5226 = BgL_v1199z00_5228;
																				}}
																				{	/* Eval/evmodule.scm 329 */
																					obj_t BgL_auxz00_6549;

																					if (SYMBOLP(BgL_idz00_5225))
																						{	/* Eval/evmodule.scm 329 */
																							BgL_auxz00_6549 = BgL_idz00_5225;
																						}
																					else
																						{
																							obj_t BgL_auxz00_6552;

																							BgL_auxz00_6552 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string3188z00zz__evmodulez00,
																								BINT(((long) 13317)),
																								BGl_string3245z00zz__evmodulez00,
																								BGl_string3192z00zz__evmodulez00,
																								BgL_idz00_5225);
																							FAILURE(BgL_auxz00_6552, BFALSE,
																								BFALSE);
																						}
																					BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00
																						(BgL_modz00_4443, BgL_auxz00_6549,
																						BgL_gz00_5226, BgL_locz00_4446);
																				} BgL_gz00_5226;
																			}
																			return
																				BGl_markzd2globalz12zc0zz__evmodulez00
																				(BgL_idz00_5225, BgL_modz00_4443,
																				((long) 4), BgL_locz00_4446);
																}}
															else
																{	/* Eval/evmodule.scm 372 */
																	return
																		BGl_evcompilezd2errorzd2zz__evcompilez00
																		(BgL_locz00_4446,
																		BGl_string3224z00zz__evmodulez00,
																		BGl_string3238z00zz__evmodulez00,
																		BgL_clausez00_4445);
																}
														}
												}
											else
												{	/* Eval/evmodule.scm 372 */
													obj_t BgL_cdrzd2281zd2_5229;

													BgL_cdrzd2281zd2_5229 = CDR(BgL_sz00_4447);
													if (
														(CAR(BgL_sz00_4447) ==
															BGl_symbol3249z00zz__evmodulez00))
														{	/* Eval/evmodule.scm 372 */
															if (PAIRP(BgL_cdrzd2281zd2_5229))
																{	/* Eval/evmodule.scm 372 */
																	obj_t BgL_carzd2284zd2_5230;

																	BgL_carzd2284zd2_5230 =
																		CAR(BgL_cdrzd2281zd2_5229);
																	if (SYMBOLP(BgL_carzd2284zd2_5230))
																		{	/* Eval/evmodule.scm 372 */
																			obj_t BgL_arg1441z00_5231;

																			BgL_arg1441z00_5231 =
																				CDR(BgL_cdrzd2281zd2_5229);
																			if (BgL_classpz00_4444)
																				{	/* Eval/evmodule.scm 351 */
																					obj_t BgL_auxz00_6570;

																					{	/* Eval/evmodule.scm 351 */
																						bool_t BgL_test3758z00_6571;

																						if (PAIRP(BgL_arg1441z00_5231))
																							{	/* Eval/evmodule.scm 351 */
																								BgL_test3758z00_6571 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Eval/evmodule.scm 351 */
																								BgL_test3758z00_6571 =
																									NULLP(BgL_arg1441z00_5231);
																							}
																						if (BgL_test3758z00_6571)
																							{	/* Eval/evmodule.scm 351 */
																								BgL_auxz00_6570 =
																									BgL_arg1441z00_5231;
																							}
																						else
																							{
																								obj_t BgL_auxz00_6575;

																								BgL_auxz00_6575 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string3188z00zz__evmodulez00,
																									BINT(((long) 14121)),
																									BGl_string3245z00zz__evmodulez00,
																									BGl_string3246z00zz__evmodulez00,
																									BgL_arg1441z00_5231);
																								FAILURE(BgL_auxz00_6575, BFALSE,
																									BFALSE);
																					}}
																					return
																						BGl_evalzd2classzd2zz__evobjectz00
																						(BgL_carzd2284zd2_5230,
																						((bool_t) 1), BgL_auxz00_6570,
																						BgL_sz00_4447, BgL_modz00_4443);
																				}
																			else
																				{	/* Eval/evmodule.scm 350 */
																					return BFALSE;
																				}
																		}
																	else
																		{	/* Eval/evmodule.scm 372 */
																			obj_t BgL_carzd2318zd2_5236;

																			BgL_carzd2318zd2_5236 =
																				CAR(BgL_sz00_4447);
																			if (SYMBOLP(BgL_carzd2318zd2_5236))
																				{	/* Eval/evmodule.scm 372 */
																					if (BgL_classpz00_4444)
																						{	/* Eval/evmodule.scm 365 */
																							return BFALSE;
																						}
																					else
																						{	/* Eval/evmodule.scm 366 */
																							obj_t BgL_idz00_5237;

																							BgL_idz00_5237 =
																								BGl_untypezd2identzd2zz__evmodulez00
																								(BgL_carzd2318zd2_5236);
																							{	/* Eval/evmodule.scm 328 */
																								obj_t BgL_gz00_5238;

																								{	/* Eval/evmodule.scm 328 */
																									obj_t BgL_idz00_5239;

																									if (SYMBOLP(BgL_idz00_5237))
																										{	/* Eval/evmodule.scm 328 */
																											BgL_idz00_5239 =
																												BgL_idz00_5237;
																										}
																									else
																										{
																											obj_t BgL_auxz00_6587;

																											BgL_auxz00_6587 =
																												BGl_typezd2errorzd2zz__errorz00
																												(BGl_string3188z00zz__evmodulez00,
																												BINT(((long) 13270)),
																												BGl_string3245z00zz__evmodulez00,
																												BGl_string3192z00zz__evmodulez00,
																												BgL_idz00_5237);
																											FAILURE(BgL_auxz00_6587,
																												BFALSE, BFALSE);
																										}
																									{	/* Eval/evmodule.scm 328 */
																										obj_t BgL_v1199z00_5240;

																										BgL_v1199z00_5240 =
																											create_vector(((long) 5));
																										VECTOR_SET
																											(BgL_v1199z00_5240,
																											((long) 0),
																											BINT(((long) 2)));
																										VECTOR_SET
																											(BgL_v1199z00_5240,
																											((long) 1),
																											BgL_idz00_5239);
																										VECTOR_SET
																											(BgL_v1199z00_5240,
																											((long) 2), BUNSPEC);
																										VECTOR_SET
																											(BgL_v1199z00_5240,
																											((long) 3),
																											BgL_modz00_4443);
																										VECTOR_SET
																											(BgL_v1199z00_5240,
																											((long) 4),
																											BgL_locz00_4446);
																										BgL_gz00_5238 =
																											BgL_v1199z00_5240;
																								}}
																								{	/* Eval/evmodule.scm 329 */
																									obj_t BgL_auxz00_6598;

																									if (SYMBOLP(BgL_idz00_5237))
																										{	/* Eval/evmodule.scm 329 */
																											BgL_auxz00_6598 =
																												BgL_idz00_5237;
																										}
																									else
																										{
																											obj_t BgL_auxz00_6601;

																											BgL_auxz00_6601 =
																												BGl_typezd2errorzd2zz__errorz00
																												(BGl_string3188z00zz__evmodulez00,
																												BINT(((long) 13317)),
																												BGl_string3245z00zz__evmodulez00,
																												BGl_string3192z00zz__evmodulez00,
																												BgL_idz00_5237);
																											FAILURE(BgL_auxz00_6601,
																												BFALSE, BFALSE);
																										}
																									BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00
																										(BgL_modz00_4443,
																										BgL_auxz00_6598,
																										BgL_gz00_5238,
																										BgL_locz00_4446);
																								} BgL_gz00_5238;
																							}
																							return
																								BGl_markzd2globalz12zc0zz__evmodulez00
																								(BgL_idz00_5237,
																								BgL_modz00_4443, ((long) 4),
																								BgL_locz00_4446);
																				}}
																			else
																				{	/* Eval/evmodule.scm 372 */
																					return
																						BGl_evcompilezd2errorzd2zz__evcompilez00
																						(BgL_locz00_4446,
																						BGl_string3224z00zz__evmodulez00,
																						BGl_string3238z00zz__evmodulez00,
																						BgL_clausez00_4445);
																				}
																		}
																}
															else
																{	/* Eval/evmodule.scm 372 */
																	obj_t BgL_carzd2332zd2_5241;

																	BgL_carzd2332zd2_5241 = CAR(BgL_sz00_4447);
																	if (SYMBOLP(BgL_carzd2332zd2_5241))
																		{	/* Eval/evmodule.scm 372 */
																			if (BgL_classpz00_4444)
																				{	/* Eval/evmodule.scm 365 */
																					return BFALSE;
																				}
																			else
																				{	/* Eval/evmodule.scm 366 */
																					obj_t BgL_idz00_5242;

																					BgL_idz00_5242 =
																						BGl_untypezd2identzd2zz__evmodulez00
																						(BgL_carzd2332zd2_5241);
																					{	/* Eval/evmodule.scm 328 */
																						obj_t BgL_gz00_5243;

																						{	/* Eval/evmodule.scm 328 */
																							obj_t BgL_idz00_5244;

																							if (SYMBOLP(BgL_idz00_5242))
																								{	/* Eval/evmodule.scm 328 */
																									BgL_idz00_5244 =
																										BgL_idz00_5242;
																								}
																							else
																								{
																									obj_t BgL_auxz00_6615;

																									BgL_auxz00_6615 =
																										BGl_typezd2errorzd2zz__errorz00
																										(BGl_string3188z00zz__evmodulez00,
																										BINT(((long) 13270)),
																										BGl_string3245z00zz__evmodulez00,
																										BGl_string3192z00zz__evmodulez00,
																										BgL_idz00_5242);
																									FAILURE(BgL_auxz00_6615,
																										BFALSE, BFALSE);
																								}
																							{	/* Eval/evmodule.scm 328 */
																								obj_t BgL_v1199z00_5245;

																								BgL_v1199z00_5245 =
																									create_vector(((long) 5));
																								VECTOR_SET(BgL_v1199z00_5245,
																									((long) 0), BINT(((long) 2)));
																								VECTOR_SET(BgL_v1199z00_5245,
																									((long) 1), BgL_idz00_5244);
																								VECTOR_SET(BgL_v1199z00_5245,
																									((long) 2), BUNSPEC);
																								VECTOR_SET(BgL_v1199z00_5245,
																									((long) 3), BgL_modz00_4443);
																								VECTOR_SET(BgL_v1199z00_5245,
																									((long) 4), BgL_locz00_4446);
																								BgL_gz00_5243 =
																									BgL_v1199z00_5245;
																						}}
																						{	/* Eval/evmodule.scm 329 */
																							obj_t BgL_auxz00_6626;

																							if (SYMBOLP(BgL_idz00_5242))
																								{	/* Eval/evmodule.scm 329 */
																									BgL_auxz00_6626 =
																										BgL_idz00_5242;
																								}
																							else
																								{
																									obj_t BgL_auxz00_6629;

																									BgL_auxz00_6629 =
																										BGl_typezd2errorzd2zz__errorz00
																										(BGl_string3188z00zz__evmodulez00,
																										BINT(((long) 13317)),
																										BGl_string3245z00zz__evmodulez00,
																										BGl_string3192z00zz__evmodulez00,
																										BgL_idz00_5242);
																									FAILURE(BgL_auxz00_6629,
																										BFALSE, BFALSE);
																								}
																							BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00
																								(BgL_modz00_4443,
																								BgL_auxz00_6626, BgL_gz00_5243,
																								BgL_locz00_4446);
																						} BgL_gz00_5243;
																					}
																					return
																						BGl_markzd2globalz12zc0zz__evmodulez00
																						(BgL_idz00_5242, BgL_modz00_4443,
																						((long) 4), BgL_locz00_4446);
																		}}
																	else
																		{	/* Eval/evmodule.scm 372 */
																			return
																				BGl_evcompilezd2errorzd2zz__evcompilez00
																				(BgL_locz00_4446,
																				BGl_string3224z00zz__evmodulez00,
																				BGl_string3238z00zz__evmodulez00,
																				BgL_clausez00_4445);
																		}
																}
														}
													else
														{	/* Eval/evmodule.scm 372 */
															if (
																(CAR(BgL_sz00_4447) ==
																	BGl_symbol3251z00zz__evmodulez00))
																{	/* Eval/evmodule.scm 372 */
																	if (PAIRP(BgL_cdrzd2281zd2_5229))
																		{	/* Eval/evmodule.scm 372 */
																			obj_t BgL_carzd2346zd2_5246;

																			BgL_carzd2346zd2_5246 =
																				CAR(BgL_cdrzd2281zd2_5229);
																			if (SYMBOLP(BgL_carzd2346zd2_5246))
																				{	/* Eval/evmodule.scm 372 */
																					if (BgL_classpz00_4444)
																						{	/* Eval/evmodule.scm 353 */
																							return
																								BGl_evcompilezd2errorzd2zz__evcompilez00
																								(BgL_locz00_4446,
																								BGl_string3224z00zz__evmodulez00,
																								BGl_string3253z00zz__evmodulez00,
																								BgL_clausez00_4445);
																						}
																					else
																						{	/* Eval/evmodule.scm 353 */
																							return BFALSE;
																						}
																				}
																			else
																				{	/* Eval/evmodule.scm 372 */
																					obj_t BgL_carzd2375zd2_5247;

																					BgL_carzd2375zd2_5247 =
																						CAR(BgL_sz00_4447);
																					if (SYMBOLP(BgL_carzd2375zd2_5247))
																						{	/* Eval/evmodule.scm 372 */
																							if (BgL_classpz00_4444)
																								{	/* Eval/evmodule.scm 365 */
																									return BFALSE;
																								}
																							else
																								{	/* Eval/evmodule.scm 366 */
																									obj_t BgL_idz00_5248;

																									BgL_idz00_5248 =
																										BGl_untypezd2identzd2zz__evmodulez00
																										(BgL_carzd2375zd2_5247);
																									{	/* Eval/evmodule.scm 328 */
																										obj_t BgL_gz00_5249;

																										{	/* Eval/evmodule.scm 328 */
																											obj_t BgL_idz00_5250;

																											if (SYMBOLP
																												(BgL_idz00_5248))
																												{	/* Eval/evmodule.scm 328 */
																													BgL_idz00_5250 =
																														BgL_idz00_5248;
																												}
																											else
																												{
																													obj_t BgL_auxz00_6653;

																													BgL_auxz00_6653 =
																														BGl_typezd2errorzd2zz__errorz00
																														(BGl_string3188z00zz__evmodulez00,
																														BINT(((long)
																																13270)),
																														BGl_string3245z00zz__evmodulez00,
																														BGl_string3192z00zz__evmodulez00,
																														BgL_idz00_5248);
																													FAILURE
																														(BgL_auxz00_6653,
																														BFALSE, BFALSE);
																												}
																											{	/* Eval/evmodule.scm 328 */
																												obj_t BgL_v1199z00_5251;

																												BgL_v1199z00_5251 =
																													create_vector(((long)
																														5));
																												VECTOR_SET
																													(BgL_v1199z00_5251,
																													((long) 0),
																													BINT(((long) 2)));
																												VECTOR_SET
																													(BgL_v1199z00_5251,
																													((long) 1),
																													BgL_idz00_5250);
																												VECTOR_SET
																													(BgL_v1199z00_5251,
																													((long) 2), BUNSPEC);
																												VECTOR_SET
																													(BgL_v1199z00_5251,
																													((long) 3),
																													BgL_modz00_4443);
																												VECTOR_SET
																													(BgL_v1199z00_5251,
																													((long) 4),
																													BgL_locz00_4446);
																												BgL_gz00_5249 =
																													BgL_v1199z00_5251;
																										}}
																										{	/* Eval/evmodule.scm 329 */
																											obj_t BgL_auxz00_6664;

																											if (SYMBOLP
																												(BgL_idz00_5248))
																												{	/* Eval/evmodule.scm 329 */
																													BgL_auxz00_6664 =
																														BgL_idz00_5248;
																												}
																											else
																												{
																													obj_t BgL_auxz00_6667;

																													BgL_auxz00_6667 =
																														BGl_typezd2errorzd2zz__errorz00
																														(BGl_string3188z00zz__evmodulez00,
																														BINT(((long)
																																13317)),
																														BGl_string3245z00zz__evmodulez00,
																														BGl_string3192z00zz__evmodulez00,
																														BgL_idz00_5248);
																													FAILURE
																														(BgL_auxz00_6667,
																														BFALSE, BFALSE);
																												}
																											BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00
																												(BgL_modz00_4443,
																												BgL_auxz00_6664,
																												BgL_gz00_5249,
																												BgL_locz00_4446);
																										} BgL_gz00_5249;
																									}
																									return
																										BGl_markzd2globalz12zc0zz__evmodulez00
																										(BgL_idz00_5248,
																										BgL_modz00_4443, ((long) 4),
																										BgL_locz00_4446);
																						}}
																					else
																						{	/* Eval/evmodule.scm 372 */
																							return
																								BGl_evcompilezd2errorzd2zz__evcompilez00
																								(BgL_locz00_4446,
																								BGl_string3224z00zz__evmodulez00,
																								BGl_string3238z00zz__evmodulez00,
																								BgL_clausez00_4445);
																						}
																				}
																		}
																	else
																		{	/* Eval/evmodule.scm 372 */
																			obj_t BgL_carzd2384zd2_5252;

																			BgL_carzd2384zd2_5252 =
																				CAR(BgL_sz00_4447);
																			if (SYMBOLP(BgL_carzd2384zd2_5252))
																				{	/* Eval/evmodule.scm 372 */
																					if (BgL_classpz00_4444)
																						{	/* Eval/evmodule.scm 365 */
																							return BFALSE;
																						}
																					else
																						{	/* Eval/evmodule.scm 366 */
																							obj_t BgL_idz00_5253;

																							BgL_idz00_5253 =
																								BGl_untypezd2identzd2zz__evmodulez00
																								(BgL_carzd2384zd2_5252);
																							{	/* Eval/evmodule.scm 328 */
																								obj_t BgL_gz00_5254;

																								{	/* Eval/evmodule.scm 328 */
																									obj_t BgL_idz00_5255;

																									if (SYMBOLP(BgL_idz00_5253))
																										{	/* Eval/evmodule.scm 328 */
																											BgL_idz00_5255 =
																												BgL_idz00_5253;
																										}
																									else
																										{
																											obj_t BgL_auxz00_6681;

																											BgL_auxz00_6681 =
																												BGl_typezd2errorzd2zz__errorz00
																												(BGl_string3188z00zz__evmodulez00,
																												BINT(((long) 13270)),
																												BGl_string3245z00zz__evmodulez00,
																												BGl_string3192z00zz__evmodulez00,
																												BgL_idz00_5253);
																											FAILURE(BgL_auxz00_6681,
																												BFALSE, BFALSE);
																										}
																									{	/* Eval/evmodule.scm 328 */
																										obj_t BgL_v1199z00_5256;

																										BgL_v1199z00_5256 =
																											create_vector(((long) 5));
																										VECTOR_SET
																											(BgL_v1199z00_5256,
																											((long) 0),
																											BINT(((long) 2)));
																										VECTOR_SET
																											(BgL_v1199z00_5256,
																											((long) 1),
																											BgL_idz00_5255);
																										VECTOR_SET
																											(BgL_v1199z00_5256,
																											((long) 2), BUNSPEC);
																										VECTOR_SET
																											(BgL_v1199z00_5256,
																											((long) 3),
																											BgL_modz00_4443);
																										VECTOR_SET
																											(BgL_v1199z00_5256,
																											((long) 4),
																											BgL_locz00_4446);
																										BgL_gz00_5254 =
																											BgL_v1199z00_5256;
																								}}
																								{	/* Eval/evmodule.scm 329 */
																									obj_t BgL_auxz00_6692;

																									if (SYMBOLP(BgL_idz00_5253))
																										{	/* Eval/evmodule.scm 329 */
																											BgL_auxz00_6692 =
																												BgL_idz00_5253;
																										}
																									else
																										{
																											obj_t BgL_auxz00_6695;

																											BgL_auxz00_6695 =
																												BGl_typezd2errorzd2zz__errorz00
																												(BGl_string3188z00zz__evmodulez00,
																												BINT(((long) 13317)),
																												BGl_string3245z00zz__evmodulez00,
																												BGl_string3192z00zz__evmodulez00,
																												BgL_idz00_5253);
																											FAILURE(BgL_auxz00_6695,
																												BFALSE, BFALSE);
																										}
																									BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00
																										(BgL_modz00_4443,
																										BgL_auxz00_6692,
																										BgL_gz00_5254,
																										BgL_locz00_4446);
																								} BgL_gz00_5254;
																							}
																							return
																								BGl_markzd2globalz12zc0zz__evmodulez00
																								(BgL_idz00_5253,
																								BgL_modz00_4443, ((long) 4),
																								BgL_locz00_4446);
																				}}
																			else
																				{	/* Eval/evmodule.scm 372 */
																					return
																						BGl_evcompilezd2errorzd2zz__evcompilez00
																						(BgL_locz00_4446,
																						BGl_string3224z00zz__evmodulez00,
																						BGl_string3238z00zz__evmodulez00,
																						BgL_clausez00_4445);
																				}
																		}
																}
															else
																{	/* Eval/evmodule.scm 372 */
																	obj_t BgL_carzd2391zd2_5257;
																	obj_t BgL_cdrzd2392zd2_5258;

																	BgL_carzd2391zd2_5257 = CAR(BgL_sz00_4447);
																	BgL_cdrzd2392zd2_5258 = CDR(BgL_sz00_4447);
																	{

																		if (
																			(BgL_carzd2391zd2_5257 ==
																				BGl_symbol3255z00zz__evmodulez00))
																			{	/* Eval/evmodule.scm 372 */
																			BgL_kapzd2393zd2_5259:
																				if (PAIRP(BgL_cdrzd2392zd2_5258))
																					{	/* Eval/evmodule.scm 372 */
																						obj_t BgL_carzd2395zd2_5260;

																						BgL_carzd2395zd2_5260 =
																							CAR(BgL_cdrzd2392zd2_5258);
																						if (SYMBOLP(BgL_carzd2395zd2_5260))
																							{	/* Eval/evmodule.scm 372 */
																								BgL_sz00_5179 =
																									BgL_carzd2395zd2_5260;
																								if (BgL_classpz00_4444)
																									{	/* Eval/evmodule.scm 360 */
																										return BFALSE;
																									}
																								else
																									{	/* Eval/evmodule.scm 361 */
																										obj_t BgL_idz00_5180;

																										BgL_idz00_5180 =
																											BGl_untypezd2identzd2zz__evmodulez00
																											(BgL_sz00_5179);
																										{	/* Eval/evmodule.scm 362 */
																											obj_t BgL_arg1469z00_5181;

																											{	/* Eval/evmodule.scm 362 */
																												obj_t
																													BgL_arg1470z00_5182;
																												{	/* Eval/evmodule.scm 362 */
																													obj_t
																														BgL_arg1471z00_5183;
																													{	/* Eval/evmodule.scm 362 */
																														obj_t
																															BgL_arg1472z00_5184;
																														{	/* Eval/evmodule.scm 362 */
																															obj_t
																																BgL_arg1473z00_5185;
																															BgL_arg1473z00_5185
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_evmodulezd2uninitializa7edz75zz__evmodulez00,
																																BNIL);
																															BgL_arg1472z00_5184
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol3226z00zz__evmodulez00,
																																BgL_arg1473z00_5185);
																														}
																														BgL_arg1471z00_5183
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1472z00_5184,
																															BNIL);
																													}
																													BgL_arg1470z00_5182 =
																														MAKE_YOUNG_PAIR
																														(BgL_idz00_5180,
																														BgL_arg1471z00_5183);
																												}
																												BgL_arg1469z00_5181 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol3239z00zz__evmodulez00,
																													BgL_arg1470z00_5182);
																											}
																											{	/* Eval/evmodule.scm 387 */
																												obj_t BgL_expz00_5186;

																												if (CBOOL
																													(BgL_locz00_4446))
																													{	/* Eval/evmodule.scm 388 */
																														obj_t
																															BgL_arg1478z00_5187;
																														obj_t
																															BgL_arg1479z00_5188;
																														BgL_arg1478z00_5187
																															=
																															CAR
																															(BgL_arg1469z00_5181);
																														BgL_arg1479z00_5188
																															=
																															CDR
																															(BgL_arg1469z00_5181);
																														{	/* Eval/evmodule.scm 388 */
																															obj_t
																																BgL_res2410z00_5189;
																															BgL_res2410z00_5189
																																=
																																MAKE_YOUNG_EPAIR
																																(BgL_arg1478z00_5187,
																																BgL_arg1479z00_5188,
																																BgL_locz00_4446);
																															BgL_expz00_5186 =
																																BgL_res2410z00_5189;
																														}
																													}
																												else
																													{	/* Eval/evmodule.scm 387 */
																														BgL_expz00_5186 =
																															BgL_arg1469z00_5181;
																													}
																												BGl_evalz00zz__evalz00
																													(BgL_expz00_5186,
																													BgL_modz00_4443);
																											}
																										}
																										{	/* Eval/evmodule.scm 305 */
																											obj_t BgL_vz00_5190;

																											{	/* Eval/evmodule.scm 305 */
																												obj_t BgL_auxz00_6724;

																												if (SYMBOLP
																													(BgL_idz00_5180))
																													{	/* Eval/evmodule.scm 305 */
																														BgL_auxz00_6724 =
																															BgL_idz00_5180;
																													}
																												else
																													{
																														obj_t
																															BgL_auxz00_6727;
																														BgL_auxz00_6727 =
																															BGl_typezd2errorzd2zz__errorz00
																															(BGl_string3188z00zz__evmodulez00,
																															BINT(((long)
																																	12237)),
																															BGl_string3241z00zz__evmodulez00,
																															BGl_string3192z00zz__evmodulez00,
																															BgL_idz00_5180);
																														FAILURE
																															(BgL_auxz00_6727,
																															BFALSE, BFALSE);
																													}
																												BgL_vz00_5190 =
																													BGl_evmodulezd2findzd2globalz00zz__evmodulez00
																													(BgL_modz00_4443,
																													BgL_auxz00_6724);
																											}
																											{	/* Eval/evmodule.scm 306 */
																												bool_t
																													BgL_test3786z00_6732;
																												if (VECTORP
																													(BgL_vz00_5190))
																													{	/* Eval/evmodule.scm 306 */
																														BgL_test3786z00_6732
																															=
																															(VECTOR_LENGTH
																															(BgL_vz00_5190) ==
																															((long) 5));
																													}
																												else
																													{	/* Eval/evmodule.scm 306 */
																														BgL_test3786z00_6732
																															= ((bool_t) 0);
																													}
																												if (BgL_test3786z00_6732)
																													{	/* Eval/evmodule.scm 306 */
																														VECTOR_SET
																															(BgL_vz00_5190,
																															((long) 0),
																															BINT(((long) 4)));
																														return
																															BgL_idz00_5180;
																													}
																												else
																													{	/* Eval/evmodule.scm 306 */
																														return
																															BGl_evcompilezd2errorzd2zz__evcompilez00
																															(BgL_locz00_4446,
																															BGl_string3224z00zz__evmodulez00,
																															BGl_string3236z00zz__evmodulez00,
																															BgL_idz00_5180);
																													}
																											}
																										}
																									}
																							}
																						else
																							{	/* Eval/evmodule.scm 372 */
																								obj_t BgL_carzd2402zd2_5261;

																								BgL_carzd2402zd2_5261 =
																									CAR(((obj_t) BgL_sz00_4447));
																								if (SYMBOLP
																									(BgL_carzd2402zd2_5261))
																									{	/* Eval/evmodule.scm 372 */
																										if (BgL_classpz00_4444)
																											{	/* Eval/evmodule.scm 365 */
																												return BFALSE;
																											}
																										else
																											{	/* Eval/evmodule.scm 366 */
																												obj_t BgL_idz00_5263;

																												BgL_idz00_5263 =
																													BGl_untypezd2identzd2zz__evmodulez00
																													(BgL_carzd2402zd2_5261);
																												{	/* Eval/evmodule.scm 328 */
																													obj_t BgL_gz00_5264;

																													{	/* Eval/evmodule.scm 328 */
																														obj_t
																															BgL_idz00_5265;
																														if (SYMBOLP
																															(BgL_idz00_5263))
																															{	/* Eval/evmodule.scm 328 */
																																BgL_idz00_5265 =
																																	BgL_idz00_5263;
																															}
																														else
																															{
																																obj_t
																																	BgL_auxz00_6748;
																																BgL_auxz00_6748
																																	=
																																	BGl_typezd2errorzd2zz__errorz00
																																	(BGl_string3188z00zz__evmodulez00,
																																	BINT(((long)
																																			13270)),
																																	BGl_string3254z00zz__evmodulez00,
																																	BGl_string3192z00zz__evmodulez00,
																																	BgL_idz00_5263);
																																FAILURE
																																	(BgL_auxz00_6748,
																																	BFALSE,
																																	BFALSE);
																															}
																														{	/* Eval/evmodule.scm 328 */
																															obj_t
																																BgL_v1199z00_5266;
																															BgL_v1199z00_5266
																																=
																																create_vector((
																																	(long) 5));
																															VECTOR_SET
																																(BgL_v1199z00_5266,
																																((long) 0),
																																BINT(((long)
																																		2)));
																															VECTOR_SET
																																(BgL_v1199z00_5266,
																																((long) 1),
																																BgL_idz00_5265);
																															VECTOR_SET
																																(BgL_v1199z00_5266,
																																((long) 2),
																																BUNSPEC);
																															VECTOR_SET
																																(BgL_v1199z00_5266,
																																((long) 3),
																																BgL_modz00_4443);
																															VECTOR_SET
																																(BgL_v1199z00_5266,
																																((long) 4),
																																BgL_locz00_4446);
																															BgL_gz00_5264 =
																																BgL_v1199z00_5266;
																													}}
																													{	/* Eval/evmodule.scm 329 */
																														obj_t
																															BgL_auxz00_6759;
																														if (SYMBOLP
																															(BgL_idz00_5263))
																															{	/* Eval/evmodule.scm 329 */
																																BgL_auxz00_6759
																																	=
																																	BgL_idz00_5263;
																															}
																														else
																															{
																																obj_t
																																	BgL_auxz00_6762;
																																BgL_auxz00_6762
																																	=
																																	BGl_typezd2errorzd2zz__errorz00
																																	(BGl_string3188z00zz__evmodulez00,
																																	BINT(((long)
																																			13317)),
																																	BGl_string3254z00zz__evmodulez00,
																																	BGl_string3192z00zz__evmodulez00,
																																	BgL_idz00_5263);
																																FAILURE
																																	(BgL_auxz00_6762,
																																	BFALSE,
																																	BFALSE);
																															}
																														BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00
																															(BgL_modz00_4443,
																															BgL_auxz00_6759,
																															BgL_gz00_5264,
																															BgL_locz00_4446);
																													} BgL_gz00_5264;
																												}
																												return
																													BGl_markzd2globalz12zc0zz__evmodulez00
																													(BgL_idz00_5263,
																													BgL_modz00_4443,
																													((long) 4),
																													BgL_locz00_4446);
																									}}
																								else
																									{	/* Eval/evmodule.scm 372 */
																										return
																											BGl_evcompilezd2errorzd2zz__evcompilez00
																											(BgL_locz00_4446,
																											BGl_string3224z00zz__evmodulez00,
																											BGl_string3238z00zz__evmodulez00,
																											BgL_clausez00_4445);
																									}
																							}
																					}
																				else
																					{	/* Eval/evmodule.scm 372 */
																						obj_t BgL_carzd2409zd2_5267;

																						BgL_carzd2409zd2_5267 =
																							CAR(((obj_t) BgL_sz00_4447));
																						if (SYMBOLP(BgL_carzd2409zd2_5267))
																							{	/* Eval/evmodule.scm 372 */
																								if (BgL_classpz00_4444)
																									{	/* Eval/evmodule.scm 365 */
																										return BFALSE;
																									}
																								else
																									{	/* Eval/evmodule.scm 366 */
																										obj_t BgL_idz00_5269;

																										BgL_idz00_5269 =
																											BGl_untypezd2identzd2zz__evmodulez00
																											(BgL_carzd2409zd2_5267);
																										{	/* Eval/evmodule.scm 328 */
																											obj_t BgL_gz00_5270;

																											{	/* Eval/evmodule.scm 328 */
																												obj_t BgL_idz00_5271;

																												if (SYMBOLP
																													(BgL_idz00_5269))
																													{	/* Eval/evmodule.scm 328 */
																														BgL_idz00_5271 =
																															BgL_idz00_5269;
																													}
																												else
																													{
																														obj_t
																															BgL_auxz00_6777;
																														BgL_auxz00_6777 =
																															BGl_typezd2errorzd2zz__errorz00
																															(BGl_string3188z00zz__evmodulez00,
																															BINT(((long)
																																	13270)),
																															BGl_string3254z00zz__evmodulez00,
																															BGl_string3192z00zz__evmodulez00,
																															BgL_idz00_5269);
																														FAILURE
																															(BgL_auxz00_6777,
																															BFALSE, BFALSE);
																													}
																												{	/* Eval/evmodule.scm 328 */
																													obj_t
																														BgL_v1199z00_5272;
																													BgL_v1199z00_5272 =
																														create_vector((
																															(long) 5));
																													VECTOR_SET
																														(BgL_v1199z00_5272,
																														((long) 0),
																														BINT(((long) 2)));
																													VECTOR_SET
																														(BgL_v1199z00_5272,
																														((long) 1),
																														BgL_idz00_5271);
																													VECTOR_SET
																														(BgL_v1199z00_5272,
																														((long) 2),
																														BUNSPEC);
																													VECTOR_SET
																														(BgL_v1199z00_5272,
																														((long) 3),
																														BgL_modz00_4443);
																													VECTOR_SET
																														(BgL_v1199z00_5272,
																														((long) 4),
																														BgL_locz00_4446);
																													BgL_gz00_5270 =
																														BgL_v1199z00_5272;
																											}}
																											{	/* Eval/evmodule.scm 329 */
																												obj_t BgL_auxz00_6788;

																												if (SYMBOLP
																													(BgL_idz00_5269))
																													{	/* Eval/evmodule.scm 329 */
																														BgL_auxz00_6788 =
																															BgL_idz00_5269;
																													}
																												else
																													{
																														obj_t
																															BgL_auxz00_6791;
																														BgL_auxz00_6791 =
																															BGl_typezd2errorzd2zz__errorz00
																															(BGl_string3188z00zz__evmodulez00,
																															BINT(((long)
																																	13317)),
																															BGl_string3254z00zz__evmodulez00,
																															BGl_string3192z00zz__evmodulez00,
																															BgL_idz00_5269);
																														FAILURE
																															(BgL_auxz00_6791,
																															BFALSE, BFALSE);
																													}
																												BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00
																													(BgL_modz00_4443,
																													BgL_auxz00_6788,
																													BgL_gz00_5270,
																													BgL_locz00_4446);
																											} BgL_gz00_5270;
																										}
																										return
																											BGl_markzd2globalz12zc0zz__evmodulez00
																											(BgL_idz00_5269,
																											BgL_modz00_4443,
																											((long) 4),
																											BgL_locz00_4446);
																							}}
																						else
																							{	/* Eval/evmodule.scm 372 */
																								return
																									BGl_evcompilezd2errorzd2zz__evcompilez00
																									(BgL_locz00_4446,
																									BGl_string3224z00zz__evmodulez00,
																									BGl_string3238z00zz__evmodulez00,
																									BgL_clausez00_4445);
																							}
																					}
																			}
																		else
																			{	/* Eval/evmodule.scm 372 */
																				if (
																					(BgL_carzd2391zd2_5257 ==
																						BGl_symbol3257z00zz__evmodulez00))
																					{	/* Eval/evmodule.scm 372 */
																						goto BgL_kapzd2393zd2_5259;
																					}
																				else
																					{	/* Eval/evmodule.scm 372 */
																						if (SYMBOLP(BgL_carzd2391zd2_5257))
																							{	/* Eval/evmodule.scm 372 */
																								if (BgL_classpz00_4444)
																									{	/* Eval/evmodule.scm 365 */
																										return BFALSE;
																									}
																								else
																									{	/* Eval/evmodule.scm 366 */
																										obj_t BgL_idz00_5273;

																										BgL_idz00_5273 =
																											BGl_untypezd2identzd2zz__evmodulez00
																											(BgL_carzd2391zd2_5257);
																										{	/* Eval/evmodule.scm 328 */
																											obj_t BgL_gz00_5274;

																											{	/* Eval/evmodule.scm 328 */
																												obj_t BgL_idz00_5275;

																												if (SYMBOLP
																													(BgL_idz00_5273))
																													{	/* Eval/evmodule.scm 328 */
																														BgL_idz00_5275 =
																															BgL_idz00_5273;
																													}
																												else
																													{
																														obj_t
																															BgL_auxz00_6806;
																														BgL_auxz00_6806 =
																															BGl_typezd2errorzd2zz__errorz00
																															(BGl_string3188z00zz__evmodulez00,
																															BINT(((long)
																																	13270)),
																															BGl_string3245z00zz__evmodulez00,
																															BGl_string3192z00zz__evmodulez00,
																															BgL_idz00_5273);
																														FAILURE
																															(BgL_auxz00_6806,
																															BFALSE, BFALSE);
																													}
																												{	/* Eval/evmodule.scm 328 */
																													obj_t
																														BgL_v1199z00_5276;
																													BgL_v1199z00_5276 =
																														create_vector((
																															(long) 5));
																													VECTOR_SET
																														(BgL_v1199z00_5276,
																														((long) 0),
																														BINT(((long) 2)));
																													VECTOR_SET
																														(BgL_v1199z00_5276,
																														((long) 1),
																														BgL_idz00_5275);
																													VECTOR_SET
																														(BgL_v1199z00_5276,
																														((long) 2),
																														BUNSPEC);
																													VECTOR_SET
																														(BgL_v1199z00_5276,
																														((long) 3),
																														BgL_modz00_4443);
																													VECTOR_SET
																														(BgL_v1199z00_5276,
																														((long) 4),
																														BgL_locz00_4446);
																													BgL_gz00_5274 =
																														BgL_v1199z00_5276;
																											}}
																											{	/* Eval/evmodule.scm 329 */
																												obj_t BgL_auxz00_6817;

																												if (SYMBOLP
																													(BgL_idz00_5273))
																													{	/* Eval/evmodule.scm 329 */
																														BgL_auxz00_6817 =
																															BgL_idz00_5273;
																													}
																												else
																													{
																														obj_t
																															BgL_auxz00_6820;
																														BgL_auxz00_6820 =
																															BGl_typezd2errorzd2zz__errorz00
																															(BGl_string3188z00zz__evmodulez00,
																															BINT(((long)
																																	13317)),
																															BGl_string3245z00zz__evmodulez00,
																															BGl_string3192z00zz__evmodulez00,
																															BgL_idz00_5273);
																														FAILURE
																															(BgL_auxz00_6820,
																															BFALSE, BFALSE);
																													}
																												BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00
																													(BgL_modz00_4443,
																													BgL_auxz00_6817,
																													BgL_gz00_5274,
																													BgL_locz00_4446);
																											} BgL_gz00_5274;
																										}
																										return
																											BGl_markzd2globalz12zc0zz__evmodulez00
																											(BgL_idz00_5273,
																											BgL_modz00_4443,
																											((long) 4),
																											BgL_locz00_4446);
																							}}
																						else
																							{	/* Eval/evmodule.scm 372 */
																								return
																									BGl_evcompilezd2errorzd2zz__evcompilez00
																									(BgL_locz00_4446,
																									BGl_string3224z00zz__evmodulez00,
																									BGl_string3238z00zz__evmodulez00,
																									BgL_clausez00_4445);
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
								{	/* Eval/evmodule.scm 372 */
									return
										BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_4446,
										BGl_string3224z00zz__evmodulez00,
										BGl_string3238z00zz__evmodulez00, BgL_clausez00_4445);
								}
						}
				}
			}
		}

	}



/* evmodule-export */
	obj_t BGl_evmodulezd2exportzd2zz__evmodulez00(obj_t BgL_modz00_86,
		obj_t BgL_clausez00_87, obj_t BgL_locz00_88, bool_t BgL_classpz00_89)
	{
		{	/* Eval/evmodule.scm 395 */
			{	/* Eval/evmodule.scm 444 */
				obj_t BgL_evmodulezd2exportzd2clausez00_4448;

				{
					int BgL_tmpz00_6828;

					BgL_tmpz00_6828 = (int) (((long) 3));
					BgL_evmodulezd2exportzd2clausez00_4448 =
						MAKE_L_PROCEDURE
						(BGl_z62evmodulezd2exportzd2clausez62zz__evmodulez00,
						BgL_tmpz00_6828);
				}
				PROCEDURE_L_SET(BgL_evmodulezd2exportzd2clausez00_4448,
					(int) (((long) 0)), BgL_modz00_86);
				PROCEDURE_L_SET(BgL_evmodulezd2exportzd2clausez00_4448,
					(int) (((long) 1)), BBOOL(BgL_classpz00_89));
				PROCEDURE_L_SET(BgL_evmodulezd2exportzd2clausez00_4448,
					(int) (((long) 2)), BgL_clausez00_87);
				if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_clausez00_87))
					{	/* Eval/evmodule.scm 447 */
						obj_t BgL_arg1483z00_1544;

						{	/* Eval/evmodule.scm 447 */
							obj_t BgL_pairz00_3635;

							if (PAIRP(BgL_clausez00_87))
								{	/* Eval/evmodule.scm 447 */
									BgL_pairz00_3635 = BgL_clausez00_87;
								}
							else
								{
									obj_t BgL_auxz00_6842;

									BgL_auxz00_6842 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3188z00zz__evmodulez00, BINT(((long) 17619)),
										BGl_string3260z00zz__evmodulez00,
										BGl_string3190z00zz__evmodulez00, BgL_clausez00_87);
									FAILURE(BgL_auxz00_6842, BFALSE, BFALSE);
								}
							BgL_arg1483z00_1544 = CDR(BgL_pairz00_3635);
						}
						return
							BBOOL(BGl_forzd2eachzf2locz20zz__evmodulez00(BgL_locz00_88,
								BgL_evmodulezd2exportzd2clausez00_4448, BgL_arg1483z00_1544));
					}
				else
					{	/* Eval/evmodule.scm 445 */
						return
							BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_88,
							BGl_string3224z00zz__evmodulez00,
							BGl_string3261z00zz__evmodulez00, BgL_clausez00_87);
					}
			}
		}

	}



/* &evmodule-export-clause */
	obj_t BGl_z62evmodulezd2exportzd2clausez62zz__evmodulez00(obj_t
		BgL_envz00_4449, obj_t BgL_locz00_4453, obj_t BgL_sz00_4454)
	{
		{	/* Eval/evmodule.scm 444 */
			{	/* Eval/evmodule.scm 444 */
				obj_t BgL_modz00_4450;
				bool_t BgL_classpz00_4451;
				obj_t BgL_clausez00_4452;

				BgL_modz00_4450 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_4449, (int) (((long) 0))));
				BgL_classpz00_4451 =
					CBOOL(PROCEDURE_L_REF(BgL_envz00_4449, (int) (((long) 1))));
				BgL_clausez00_4452 =
					PROCEDURE_L_REF(BgL_envz00_4449, (int) (((long) 2)));
				{
					obj_t BgL_claz00_5345;
					obj_t BgL_clausesz00_5346;
					obj_t BgL_claz00_5332;
					obj_t BgL_clausesz00_5333;
					obj_t BgL_claz00_5319;
					obj_t BgL_clausesz00_5320;
					obj_t BgL_sz00_5304;
					obj_t BgL_sz00_5295;

					if (SYMBOLP(BgL_sz00_4454))
						{	/* Eval/evmodule.scm 444 */
							if (BgL_classpz00_4451)
								{	/* Eval/evmodule.scm 399 */
									return BFALSE;
								}
							else
								{	/* Eval/evmodule.scm 400 */
									obj_t BgL_idz00_5358;

									BgL_idz00_5358 =
										BGl_untypezd2identzd2zz__evmodulez00(BgL_sz00_4454);
									{	/* Eval/evmodule.scm 328 */
										obj_t BgL_gz00_5359;

										{	/* Eval/evmodule.scm 328 */
											obj_t BgL_idz00_5360;

											if (SYMBOLP(BgL_idz00_5358))
												{	/* Eval/evmodule.scm 328 */
													BgL_idz00_5360 = BgL_idz00_5358;
												}
											else
												{
													obj_t BgL_auxz00_6864;

													BgL_auxz00_6864 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3188z00zz__evmodulez00,
														BINT(((long) 13270)),
														BGl_string3267z00zz__evmodulez00,
														BGl_string3192z00zz__evmodulez00, BgL_idz00_5358);
													FAILURE(BgL_auxz00_6864, BFALSE, BFALSE);
												}
											{	/* Eval/evmodule.scm 328 */
												obj_t BgL_v1199z00_5361;

												BgL_v1199z00_5361 = create_vector(((long) 5));
												VECTOR_SET(BgL_v1199z00_5361, ((long) 0),
													BINT(((long) 2)));
												VECTOR_SET(BgL_v1199z00_5361, ((long) 1),
													BgL_idz00_5360);
												VECTOR_SET(BgL_v1199z00_5361, ((long) 2), BUNSPEC);
												VECTOR_SET(BgL_v1199z00_5361, ((long) 3),
													BgL_modz00_4450);
												VECTOR_SET(BgL_v1199z00_5361, ((long) 4),
													BgL_locz00_4453);
												BgL_gz00_5359 = BgL_v1199z00_5361;
										}}
										{	/* Eval/evmodule.scm 329 */
											obj_t BgL_auxz00_6875;

											if (SYMBOLP(BgL_idz00_5358))
												{	/* Eval/evmodule.scm 329 */
													BgL_auxz00_6875 = BgL_idz00_5358;
												}
											else
												{
													obj_t BgL_auxz00_6878;

													BgL_auxz00_6878 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3188z00zz__evmodulez00,
														BINT(((long) 13317)),
														BGl_string3267z00zz__evmodulez00,
														BGl_string3192z00zz__evmodulez00, BgL_idz00_5358);
													FAILURE(BgL_auxz00_6878, BFALSE, BFALSE);
												}
											BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00
												(BgL_modz00_4450, BgL_auxz00_6875, BgL_gz00_5359,
												BgL_locz00_4453);
										} BgL_gz00_5359;
									}
									{	/* Eval/evmodule.scm 381 */
										obj_t BgL_arg1474z00_5362;

										{	/* Eval/evmodule.scm 381 */
											obj_t BgL_arg1475z00_5363;
											obj_t BgL_arg1476z00_5364;

											BgL_arg1475z00_5363 =
												MAKE_YOUNG_PAIR(BgL_idz00_5358, BgL_modz00_4450);
											BgL_arg1476z00_5364 =
												STRUCT_REF(BgL_modz00_4450, (int) (((long) 4)));
											BgL_arg1474z00_5362 =
												MAKE_YOUNG_PAIR(BgL_arg1475z00_5363,
												BgL_arg1476z00_5364);
										}
										{	/* Eval/evmodule.scm 129 */
											int BgL_tmpz00_6887;

											BgL_tmpz00_6887 = (int) (((long) 4));
											STRUCT_SET(BgL_modz00_4450, BgL_tmpz00_6887,
												BgL_arg1474z00_5362);
									}}
									{	/* Eval/evmodule.scm 305 */
										obj_t BgL_vz00_5365;

										{	/* Eval/evmodule.scm 305 */
											obj_t BgL_auxz00_6890;

											if (SYMBOLP(BgL_idz00_5358))
												{	/* Eval/evmodule.scm 305 */
													BgL_auxz00_6890 = BgL_idz00_5358;
												}
											else
												{
													obj_t BgL_auxz00_6893;

													BgL_auxz00_6893 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3188z00zz__evmodulez00,
														BINT(((long) 12237)),
														BGl_string3267z00zz__evmodulez00,
														BGl_string3192z00zz__evmodulez00, BgL_idz00_5358);
													FAILURE(BgL_auxz00_6893, BFALSE, BFALSE);
												}
											BgL_vz00_5365 =
												BGl_evmodulezd2findzd2globalz00zz__evmodulez00
												(BgL_modz00_4450, BgL_auxz00_6890);
										}
										{	/* Eval/evmodule.scm 306 */
											bool_t BgL_test3808z00_6898;

											if (VECTORP(BgL_vz00_5365))
												{	/* Eval/evmodule.scm 306 */
													BgL_test3808z00_6898 =
														(VECTOR_LENGTH(BgL_vz00_5365) == ((long) 5));
												}
											else
												{	/* Eval/evmodule.scm 306 */
													BgL_test3808z00_6898 = ((bool_t) 0);
												}
											if (BgL_test3808z00_6898)
												{	/* Eval/evmodule.scm 306 */
													VECTOR_SET(BgL_vz00_5365, ((long) 0),
														BINT(((long) 3)));
													return BgL_idz00_5358;
												}
											else
												{	/* Eval/evmodule.scm 306 */
													return
														BGl_evcompilezd2errorzd2zz__evcompilez00
														(BgL_locz00_4453, BGl_string3224z00zz__evmodulez00,
														BGl_string3236z00zz__evmodulez00, BgL_idz00_5358);
												}
										}
									}
								}
						}
					else
						{	/* Eval/evmodule.scm 444 */
							if (PAIRP(BgL_sz00_4454))
								{	/* Eval/evmodule.scm 444 */
									obj_t BgL_cdrzd2461zd2_5366;

									BgL_cdrzd2461zd2_5366 = CDR(BgL_sz00_4454);
									if ((CAR(BgL_sz00_4454) == BGl_symbol3243z00zz__evmodulez00))
										{	/* Eval/evmodule.scm 444 */
											if (PAIRP(BgL_cdrzd2461zd2_5366))
												{	/* Eval/evmodule.scm 444 */
													obj_t BgL_carzd2464zd2_5367;

													BgL_carzd2464zd2_5367 = CAR(BgL_cdrzd2461zd2_5366);
													if (SYMBOLP(BgL_carzd2464zd2_5367))
														{	/* Eval/evmodule.scm 444 */
															BgL_claz00_5345 = BgL_carzd2464zd2_5367;
															BgL_clausesz00_5346 = CDR(BgL_cdrzd2461zd2_5366);
															if (BgL_classpz00_4451)
																{	/* Eval/evmodule.scm 406 */
																	obj_t BgL_identsz00_5347;

																	{	/* Eval/evmodule.scm 406 */
																		obj_t BgL_auxz00_6927;
																		obj_t BgL_auxz00_6918;

																		if (PAIRP(BgL_sz00_4454))
																			{	/* Eval/evmodule.scm 406 */
																				BgL_auxz00_6927 = BgL_sz00_4454;
																			}
																		else
																			{
																				obj_t BgL_auxz00_6930;

																				BgL_auxz00_6930 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string3188z00zz__evmodulez00,
																					BINT(((long) 16228)),
																					BGl_string3266z00zz__evmodulez00,
																					BGl_string3190z00zz__evmodulez00,
																					BgL_sz00_4454);
																				FAILURE(BgL_auxz00_6930, BFALSE,
																					BFALSE);
																			}
																		{	/* Eval/evmodule.scm 406 */
																			bool_t BgL_test3815z00_6919;

																			if (PAIRP(BgL_clausesz00_5346))
																				{	/* Eval/evmodule.scm 406 */
																					BgL_test3815z00_6919 = ((bool_t) 1);
																				}
																			else
																				{	/* Eval/evmodule.scm 406 */
																					BgL_test3815z00_6919 =
																						NULLP(BgL_clausesz00_5346);
																				}
																			if (BgL_test3815z00_6919)
																				{	/* Eval/evmodule.scm 406 */
																					BgL_auxz00_6918 = BgL_clausesz00_5346;
																				}
																			else
																				{
																					obj_t BgL_auxz00_6923;

																					BgL_auxz00_6923 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string3188z00zz__evmodulez00,
																						BINT(((long) 16220)),
																						BGl_string3266z00zz__evmodulez00,
																						BGl_string3246z00zz__evmodulez00,
																						BgL_clausesz00_5346);
																					FAILURE(BgL_auxz00_6923, BFALSE,
																						BFALSE);
																		}}
																		BgL_identsz00_5347 =
																			BGl_evalzd2classzd2zz__evobjectz00
																			(BgL_claz00_5345, ((bool_t) 0),
																			BgL_auxz00_6918, BgL_auxz00_6927,
																			BgL_modz00_4450);
																	}
																	{
																		obj_t BgL_l1140z00_5353;

																		BgL_l1140z00_5353 = BgL_identsz00_5347;
																	BgL_zc3z04anonymousza31589ze3z87_5352:
																		if (PAIRP(BgL_l1140z00_5353))
																			{	/* Eval/evmodule.scm 407 */
																				{	/* Eval/evmodule.scm 407 */
																					obj_t BgL_iz00_5354;

																					BgL_iz00_5354 =
																						CAR(BgL_l1140z00_5353);
																					{	/* Eval/evmodule.scm 381 */
																						obj_t BgL_arg1474z00_5355;

																						{	/* Eval/evmodule.scm 381 */
																							obj_t BgL_arg1475z00_5356;
																							obj_t BgL_arg1476z00_5357;

																							BgL_arg1475z00_5356 =
																								MAKE_YOUNG_PAIR(BgL_iz00_5354,
																								BgL_modz00_4450);
																							BgL_arg1476z00_5357 =
																								STRUCT_REF(BgL_modz00_4450,
																								(int) (((long) 4)));
																							BgL_arg1474z00_5355 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1475z00_5356,
																								BgL_arg1476z00_5357);
																						}
																						{	/* Eval/evmodule.scm 129 */
																							int BgL_tmpz00_6942;

																							BgL_tmpz00_6942 =
																								(int) (((long) 4));
																							STRUCT_SET(BgL_modz00_4450,
																								BgL_tmpz00_6942,
																								BgL_arg1474z00_5355);
																				}}}
																				{
																					obj_t BgL_l1140z00_6945;

																					BgL_l1140z00_6945 =
																						CDR(BgL_l1140z00_5353);
																					BgL_l1140z00_5353 = BgL_l1140z00_6945;
																					goto
																						BgL_zc3z04anonymousza31589ze3z87_5352;
																				}
																			}
																		else
																			{	/* Eval/evmodule.scm 407 */
																				if (NULLP(BgL_l1140z00_5353))
																					{	/* Eval/evmodule.scm 407 */
																						return BTRUE;
																					}
																				else
																					{	/* Eval/evmodule.scm 407 */
																						return
																							BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00
																							(BGl_string3231z00zz__evmodulez00,
																							BGl_string3221z00zz__evmodulez00,
																							BgL_l1140z00_5353,
																							BGl_string3188z00zz__evmodulez00,
																							BINT(((long) 16239)));
																}}}}
															else
																{	/* Eval/evmodule.scm 405 */
																	return BFALSE;
																}
														}
													else
														{	/* Eval/evmodule.scm 444 */
															obj_t BgL_carzd2514zd2_5368;

															BgL_carzd2514zd2_5368 = CAR(BgL_sz00_4454);
															if (SYMBOLP(BgL_carzd2514zd2_5368))
																{	/* Eval/evmodule.scm 444 */
																	BgL_sz00_5295 = BgL_carzd2514zd2_5368;
																BgL_tagzd2449zd2_5289:
																	if (BgL_classpz00_4451)
																		{	/* Eval/evmodule.scm 436 */
																			return BFALSE;
																		}
																	else
																		{	/* Eval/evmodule.scm 437 */
																			obj_t BgL_idz00_5296;

																			BgL_idz00_5296 =
																				BGl_untypezd2identzd2zz__evmodulez00
																				(BgL_sz00_5295);
																			{	/* Eval/evmodule.scm 328 */
																				obj_t BgL_gz00_5297;

																				{	/* Eval/evmodule.scm 328 */
																					obj_t BgL_idz00_5298;

																					if (SYMBOLP(BgL_idz00_5296))
																						{	/* Eval/evmodule.scm 328 */
																							BgL_idz00_5298 = BgL_idz00_5296;
																						}
																					else
																						{
																							obj_t BgL_auxz00_6959;

																							BgL_auxz00_6959 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string3188z00zz__evmodulez00,
																								BINT(((long) 13270)),
																								BGl_string3262z00zz__evmodulez00,
																								BGl_string3192z00zz__evmodulez00,
																								BgL_idz00_5296);
																							FAILURE(BgL_auxz00_6959, BFALSE,
																								BFALSE);
																						}
																					{	/* Eval/evmodule.scm 328 */
																						obj_t BgL_v1199z00_5299;

																						BgL_v1199z00_5299 =
																							create_vector(((long) 5));
																						VECTOR_SET(BgL_v1199z00_5299,
																							((long) 0), BINT(((long) 2)));
																						VECTOR_SET(BgL_v1199z00_5299,
																							((long) 1), BgL_idz00_5298);
																						VECTOR_SET(BgL_v1199z00_5299,
																							((long) 2), BUNSPEC);
																						VECTOR_SET(BgL_v1199z00_5299,
																							((long) 3), BgL_modz00_4450);
																						VECTOR_SET(BgL_v1199z00_5299,
																							((long) 4), BgL_locz00_4453);
																						BgL_gz00_5297 = BgL_v1199z00_5299;
																				}}
																				{	/* Eval/evmodule.scm 329 */
																					obj_t BgL_auxz00_6970;

																					if (SYMBOLP(BgL_idz00_5296))
																						{	/* Eval/evmodule.scm 329 */
																							BgL_auxz00_6970 = BgL_idz00_5296;
																						}
																					else
																						{
																							obj_t BgL_auxz00_6973;

																							BgL_auxz00_6973 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string3188z00zz__evmodulez00,
																								BINT(((long) 13317)),
																								BGl_string3262z00zz__evmodulez00,
																								BGl_string3192z00zz__evmodulez00,
																								BgL_idz00_5296);
																							FAILURE(BgL_auxz00_6973, BFALSE,
																								BFALSE);
																						}
																					BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00
																						(BgL_modz00_4450, BgL_auxz00_6970,
																						BgL_gz00_5297, BgL_locz00_4453);
																				} BgL_gz00_5297;
																			}
																			{	/* Eval/evmodule.scm 381 */
																				obj_t BgL_arg1474z00_5300;

																				{	/* Eval/evmodule.scm 381 */
																					obj_t BgL_arg1475z00_5301;
																					obj_t BgL_arg1476z00_5302;

																					BgL_arg1475z00_5301 =
																						MAKE_YOUNG_PAIR(BgL_idz00_5296,
																						BgL_modz00_4450);
																					BgL_arg1476z00_5302 =
																						STRUCT_REF(BgL_modz00_4450,
																						(int) (((long) 4)));
																					BgL_arg1474z00_5300 =
																						MAKE_YOUNG_PAIR(BgL_arg1475z00_5301,
																						BgL_arg1476z00_5302);
																				}
																				{	/* Eval/evmodule.scm 129 */
																					int BgL_tmpz00_6982;

																					BgL_tmpz00_6982 = (int) (((long) 4));
																					STRUCT_SET(BgL_modz00_4450,
																						BgL_tmpz00_6982,
																						BgL_arg1474z00_5300);
																			}}
																			{	/* Eval/evmodule.scm 305 */
																				obj_t BgL_vz00_5303;

																				{	/* Eval/evmodule.scm 305 */
																					obj_t BgL_auxz00_6985;

																					if (SYMBOLP(BgL_idz00_5296))
																						{	/* Eval/evmodule.scm 305 */
																							BgL_auxz00_6985 = BgL_idz00_5296;
																						}
																					else
																						{
																							obj_t BgL_auxz00_6988;

																							BgL_auxz00_6988 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string3188z00zz__evmodulez00,
																								BINT(((long) 12237)),
																								BGl_string3262z00zz__evmodulez00,
																								BGl_string3192z00zz__evmodulez00,
																								BgL_idz00_5296);
																							FAILURE(BgL_auxz00_6988, BFALSE,
																								BFALSE);
																						}
																					BgL_vz00_5303 =
																						BGl_evmodulezd2findzd2globalz00zz__evmodulez00
																						(BgL_modz00_4450, BgL_auxz00_6985);
																				}
																				{	/* Eval/evmodule.scm 306 */
																					bool_t BgL_test3825z00_6993;

																					if (VECTORP(BgL_vz00_5303))
																						{	/* Eval/evmodule.scm 306 */
																							BgL_test3825z00_6993 =
																								(VECTOR_LENGTH(BgL_vz00_5303) ==
																								((long) 5));
																						}
																					else
																						{	/* Eval/evmodule.scm 306 */
																							BgL_test3825z00_6993 =
																								((bool_t) 0);
																						}
																					if (BgL_test3825z00_6993)
																						{	/* Eval/evmodule.scm 306 */
																							VECTOR_SET(BgL_vz00_5303,
																								((long) 0), BINT(((long) 4)));
																							return BgL_idz00_5296;
																						}
																					else
																						{	/* Eval/evmodule.scm 306 */
																							return
																								BGl_evcompilezd2errorzd2zz__evcompilez00
																								(BgL_locz00_4453,
																								BGl_string3224z00zz__evmodulez00,
																								BGl_string3236z00zz__evmodulez00,
																								BgL_idz00_5296);
																						}
																				}
																			}
																		}
																}
															else
																{	/* Eval/evmodule.scm 444 */
																	return
																		BGl_evcompilezd2errorzd2zz__evcompilez00
																		(BgL_locz00_4453,
																		BGl_string3224z00zz__evmodulez00,
																		BGl_string3261z00zz__evmodulez00,
																		BgL_clausez00_4452);
																}
														}
												}
											else
												{	/* Eval/evmodule.scm 444 */
													obj_t BgL_carzd2541zd2_5369;

													BgL_carzd2541zd2_5369 = CAR(BgL_sz00_4454);
													if (SYMBOLP(BgL_carzd2541zd2_5369))
														{
															obj_t BgL_sz00_7005;

															BgL_sz00_7005 = BgL_carzd2541zd2_5369;
															BgL_sz00_5295 = BgL_sz00_7005;
															goto BgL_tagzd2449zd2_5289;
														}
													else
														{	/* Eval/evmodule.scm 444 */
															return
																BGl_evcompilezd2errorzd2zz__evcompilez00
																(BgL_locz00_4453,
																BGl_string3224z00zz__evmodulez00,
																BGl_string3261z00zz__evmodulez00,
																BgL_clausez00_4452);
														}
												}
										}
									else
										{	/* Eval/evmodule.scm 444 */
											if (
												(CAR(BgL_sz00_4454) ==
													BGl_symbol3247z00zz__evmodulez00))
												{	/* Eval/evmodule.scm 444 */
													if (PAIRP(BgL_cdrzd2461zd2_5366))
														{	/* Eval/evmodule.scm 444 */
															obj_t BgL_carzd2555zd2_5370;

															BgL_carzd2555zd2_5370 =
																CAR(BgL_cdrzd2461zd2_5366);
															if (SYMBOLP(BgL_carzd2555zd2_5370))
																{	/* Eval/evmodule.scm 444 */
																	BgL_claz00_5332 = BgL_carzd2555zd2_5370;
																	BgL_clausesz00_5333 =
																		CDR(BgL_cdrzd2461zd2_5366);
																	if (BgL_classpz00_4451)
																		{	/* Eval/evmodule.scm 410 */
																			obj_t BgL_identsz00_5334;

																			{	/* Eval/evmodule.scm 410 */
																				obj_t BgL_auxz00_7025;
																				obj_t BgL_auxz00_7016;

																				if (PAIRP(BgL_sz00_4454))
																					{	/* Eval/evmodule.scm 410 */
																						BgL_auxz00_7025 = BgL_sz00_4454;
																					}
																				else
																					{
																						obj_t BgL_auxz00_7028;

																						BgL_auxz00_7028 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string3188z00zz__evmodulez00,
																							BINT(((long) 16416)),
																							BGl_string3265z00zz__evmodulez00,
																							BGl_string3190z00zz__evmodulez00,
																							BgL_sz00_4454);
																						FAILURE(BgL_auxz00_7028, BFALSE,
																							BFALSE);
																					}
																				{	/* Eval/evmodule.scm 410 */
																					bool_t BgL_test3832z00_7017;

																					if (PAIRP(BgL_clausesz00_5333))
																						{	/* Eval/evmodule.scm 410 */
																							BgL_test3832z00_7017 =
																								((bool_t) 1);
																						}
																					else
																						{	/* Eval/evmodule.scm 410 */
																							BgL_test3832z00_7017 =
																								NULLP(BgL_clausesz00_5333);
																						}
																					if (BgL_test3832z00_7017)
																						{	/* Eval/evmodule.scm 410 */
																							BgL_auxz00_7016 =
																								BgL_clausesz00_5333;
																						}
																					else
																						{
																							obj_t BgL_auxz00_7021;

																							BgL_auxz00_7021 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string3188z00zz__evmodulez00,
																								BINT(((long) 16408)),
																								BGl_string3265z00zz__evmodulez00,
																								BGl_string3246z00zz__evmodulez00,
																								BgL_clausesz00_5333);
																							FAILURE(BgL_auxz00_7021, BFALSE,
																								BFALSE);
																				}}
																				BgL_identsz00_5334 =
																					BGl_evalzd2classzd2zz__evobjectz00
																					(BgL_claz00_5332, ((bool_t) 0),
																					BgL_auxz00_7016, BgL_auxz00_7025,
																					BgL_modz00_4450);
																			}
																			{
																				obj_t BgL_l1142z00_5340;

																				BgL_l1142z00_5340 = BgL_identsz00_5334;
																			BgL_zc3z04anonymousza31594ze3z87_5339:
																				if (PAIRP(BgL_l1142z00_5340))
																					{	/* Eval/evmodule.scm 411 */
																						{	/* Eval/evmodule.scm 411 */
																							obj_t BgL_iz00_5341;

																							BgL_iz00_5341 =
																								CAR(BgL_l1142z00_5340);
																							{	/* Eval/evmodule.scm 381 */
																								obj_t BgL_arg1474z00_5342;

																								{	/* Eval/evmodule.scm 381 */
																									obj_t BgL_arg1475z00_5343;
																									obj_t BgL_arg1476z00_5344;

																									BgL_arg1475z00_5343 =
																										MAKE_YOUNG_PAIR
																										(BgL_iz00_5341,
																										BgL_modz00_4450);
																									BgL_arg1476z00_5344 =
																										STRUCT_REF(BgL_modz00_4450,
																										(int) (((long) 4)));
																									BgL_arg1474z00_5342 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1475z00_5343,
																										BgL_arg1476z00_5344);
																								}
																								{	/* Eval/evmodule.scm 129 */
																									int BgL_tmpz00_7040;

																									BgL_tmpz00_7040 =
																										(int) (((long) 4));
																									STRUCT_SET(BgL_modz00_4450,
																										BgL_tmpz00_7040,
																										BgL_arg1474z00_5342);
																						}}}
																						{
																							obj_t BgL_l1142z00_7043;

																							BgL_l1142z00_7043 =
																								CDR(BgL_l1142z00_5340);
																							BgL_l1142z00_5340 =
																								BgL_l1142z00_7043;
																							goto
																								BgL_zc3z04anonymousza31594ze3z87_5339;
																						}
																					}
																				else
																					{	/* Eval/evmodule.scm 411 */
																						if (NULLP(BgL_l1142z00_5340))
																							{	/* Eval/evmodule.scm 411 */
																								return BTRUE;
																							}
																						else
																							{	/* Eval/evmodule.scm 411 */
																								return
																									BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00
																									(BGl_string3231z00zz__evmodulez00,
																									BGl_string3221z00zz__evmodulez00,
																									BgL_l1142z00_5340,
																									BGl_string3188z00zz__evmodulez00,
																									BINT(((long) 16427)));
																		}}}}
																	else
																		{	/* Eval/evmodule.scm 409 */
																			return BFALSE;
																		}
																}
															else
																{	/* Eval/evmodule.scm 444 */
																	obj_t BgL_carzd2600zd2_5371;

																	BgL_carzd2600zd2_5371 = CAR(BgL_sz00_4454);
																	if (SYMBOLP(BgL_carzd2600zd2_5371))
																		{
																			obj_t BgL_sz00_7053;

																			BgL_sz00_7053 = BgL_carzd2600zd2_5371;
																			BgL_sz00_5295 = BgL_sz00_7053;
																			goto BgL_tagzd2449zd2_5289;
																		}
																	else
																		{	/* Eval/evmodule.scm 444 */
																			return
																				BGl_evcompilezd2errorzd2zz__evcompilez00
																				(BgL_locz00_4453,
																				BGl_string3224z00zz__evmodulez00,
																				BGl_string3261z00zz__evmodulez00,
																				BgL_clausez00_4452);
																		}
																}
														}
													else
														{	/* Eval/evmodule.scm 444 */
															obj_t BgL_carzd2622zd2_5372;

															BgL_carzd2622zd2_5372 = CAR(BgL_sz00_4454);
															if (SYMBOLP(BgL_carzd2622zd2_5372))
																{
																	obj_t BgL_sz00_7058;

																	BgL_sz00_7058 = BgL_carzd2622zd2_5372;
																	BgL_sz00_5295 = BgL_sz00_7058;
																	goto BgL_tagzd2449zd2_5289;
																}
															else
																{	/* Eval/evmodule.scm 444 */
																	return
																		BGl_evcompilezd2errorzd2zz__evcompilez00
																		(BgL_locz00_4453,
																		BGl_string3224z00zz__evmodulez00,
																		BGl_string3261z00zz__evmodulez00,
																		BgL_clausez00_4452);
																}
														}
												}
											else
												{	/* Eval/evmodule.scm 444 */
													obj_t BgL_cdrzd2633zd2_5373;

													BgL_cdrzd2633zd2_5373 = CDR(BgL_sz00_4454);
													if (
														(CAR(BgL_sz00_4454) ==
															BGl_symbol3249z00zz__evmodulez00))
														{	/* Eval/evmodule.scm 444 */
															if (PAIRP(BgL_cdrzd2633zd2_5373))
																{	/* Eval/evmodule.scm 444 */
																	obj_t BgL_carzd2636zd2_5374;

																	BgL_carzd2636zd2_5374 =
																		CAR(BgL_cdrzd2633zd2_5373);
																	if (SYMBOLP(BgL_carzd2636zd2_5374))
																		{	/* Eval/evmodule.scm 444 */
																			BgL_claz00_5319 = BgL_carzd2636zd2_5374;
																			BgL_clausesz00_5320 =
																				CDR(BgL_cdrzd2633zd2_5373);
																			if (BgL_classpz00_4451)
																				{	/* Eval/evmodule.scm 414 */
																					obj_t BgL_identsz00_5321;

																					{	/* Eval/evmodule.scm 414 */
																						obj_t BgL_auxz00_7079;
																						obj_t BgL_auxz00_7070;

																						if (PAIRP(BgL_sz00_4454))
																							{	/* Eval/evmodule.scm 414 */
																								BgL_auxz00_7079 = BgL_sz00_4454;
																							}
																						else
																							{
																								obj_t BgL_auxz00_7082;

																								BgL_auxz00_7082 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string3188z00zz__evmodulez00,
																									BINT(((long) 16607)),
																									BGl_string3264z00zz__evmodulez00,
																									BGl_string3190z00zz__evmodulez00,
																									BgL_sz00_4454);
																								FAILURE(BgL_auxz00_7082, BFALSE,
																									BFALSE);
																							}
																						{	/* Eval/evmodule.scm 414 */
																							bool_t BgL_test3843z00_7071;

																							if (PAIRP(BgL_clausesz00_5320))
																								{	/* Eval/evmodule.scm 414 */
																									BgL_test3843z00_7071 =
																										((bool_t) 1);
																								}
																							else
																								{	/* Eval/evmodule.scm 414 */
																									BgL_test3843z00_7071 =
																										NULLP(BgL_clausesz00_5320);
																								}
																							if (BgL_test3843z00_7071)
																								{	/* Eval/evmodule.scm 414 */
																									BgL_auxz00_7070 =
																										BgL_clausesz00_5320;
																								}
																							else
																								{
																									obj_t BgL_auxz00_7075;

																									BgL_auxz00_7075 =
																										BGl_typezd2errorzd2zz__errorz00
																										(BGl_string3188z00zz__evmodulez00,
																										BINT(((long) 16599)),
																										BGl_string3264z00zz__evmodulez00,
																										BGl_string3246z00zz__evmodulez00,
																										BgL_clausesz00_5320);
																									FAILURE(BgL_auxz00_7075,
																										BFALSE, BFALSE);
																						}}
																						BgL_identsz00_5321 =
																							BGl_evalzd2classzd2zz__evobjectz00
																							(BgL_claz00_5319, ((bool_t) 1),
																							BgL_auxz00_7070, BgL_auxz00_7079,
																							BgL_modz00_4450);
																					}
																					{
																						obj_t BgL_l1144z00_5327;

																						BgL_l1144z00_5327 =
																							BgL_identsz00_5321;
																					BgL_zc3z04anonymousza31598ze3z87_5326:
																						if (PAIRP
																							(BgL_l1144z00_5327))
																							{	/* Eval/evmodule.scm 415 */
																								{	/* Eval/evmodule.scm 415 */
																									obj_t BgL_iz00_5328;

																									BgL_iz00_5328 =
																										CAR(BgL_l1144z00_5327);
																									{	/* Eval/evmodule.scm 381 */
																										obj_t BgL_arg1474z00_5329;

																										{	/* Eval/evmodule.scm 381 */
																											obj_t BgL_arg1475z00_5330;
																											obj_t BgL_arg1476z00_5331;

																											BgL_arg1475z00_5330 =
																												MAKE_YOUNG_PAIR
																												(BgL_iz00_5328,
																												BgL_modz00_4450);
																											BgL_arg1476z00_5331 =
																												STRUCT_REF
																												(BgL_modz00_4450,
																												(int) (((long) 4)));
																											BgL_arg1474z00_5329 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1475z00_5330,
																												BgL_arg1476z00_5331);
																										}
																										{	/* Eval/evmodule.scm 129 */
																											int BgL_tmpz00_7094;

																											BgL_tmpz00_7094 =
																												(int) (((long) 4));
																											STRUCT_SET
																												(BgL_modz00_4450,
																												BgL_tmpz00_7094,
																												BgL_arg1474z00_5329);
																								}}}
																								{
																									obj_t BgL_l1144z00_7097;

																									BgL_l1144z00_7097 =
																										CDR(BgL_l1144z00_5327);
																									BgL_l1144z00_5327 =
																										BgL_l1144z00_7097;
																									goto
																										BgL_zc3z04anonymousza31598ze3z87_5326;
																								}
																							}
																						else
																							{	/* Eval/evmodule.scm 415 */
																								if (NULLP(BgL_l1144z00_5327))
																									{	/* Eval/evmodule.scm 415 */
																										return BTRUE;
																									}
																								else
																									{	/* Eval/evmodule.scm 415 */
																										return
																											BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00
																											(BGl_string3231z00zz__evmodulez00,
																											BGl_string3221z00zz__evmodulez00,
																											BgL_l1144z00_5327,
																											BGl_string3188z00zz__evmodulez00,
																											BINT(((long) 16618)));
																				}}}}
																			else
																				{	/* Eval/evmodule.scm 413 */
																					return BFALSE;
																				}
																		}
																	else
																		{	/* Eval/evmodule.scm 444 */
																			obj_t BgL_carzd2676zd2_5375;

																			BgL_carzd2676zd2_5375 =
																				CAR(BgL_sz00_4454);
																			if (SYMBOLP(BgL_carzd2676zd2_5375))
																				{
																					obj_t BgL_sz00_7107;

																					BgL_sz00_7107 = BgL_carzd2676zd2_5375;
																					BgL_sz00_5295 = BgL_sz00_7107;
																					goto BgL_tagzd2449zd2_5289;
																				}
																			else
																				{	/* Eval/evmodule.scm 444 */
																					return
																						BGl_evcompilezd2errorzd2zz__evcompilez00
																						(BgL_locz00_4453,
																						BGl_string3224z00zz__evmodulez00,
																						BGl_string3261z00zz__evmodulez00,
																						BgL_clausez00_4452);
																				}
																		}
																}
															else
																{	/* Eval/evmodule.scm 444 */
																	obj_t BgL_carzd2693zd2_5376;

																	BgL_carzd2693zd2_5376 = CAR(BgL_sz00_4454);
																	if (SYMBOLP(BgL_carzd2693zd2_5376))
																		{
																			obj_t BgL_sz00_7112;

																			BgL_sz00_7112 = BgL_carzd2693zd2_5376;
																			BgL_sz00_5295 = BgL_sz00_7112;
																			goto BgL_tagzd2449zd2_5289;
																		}
																	else
																		{	/* Eval/evmodule.scm 444 */
																			return
																				BGl_evcompilezd2errorzd2zz__evcompilez00
																				(BgL_locz00_4453,
																				BGl_string3224z00zz__evmodulez00,
																				BGl_string3261z00zz__evmodulez00,
																				BgL_clausez00_4452);
																		}
																}
														}
													else
														{	/* Eval/evmodule.scm 444 */
															if (
																(CAR(BgL_sz00_4454) ==
																	BGl_symbol3251z00zz__evmodulez00))
																{	/* Eval/evmodule.scm 444 */
																	if (PAIRP(BgL_cdrzd2633zd2_5373))
																		{	/* Eval/evmodule.scm 444 */
																			obj_t BgL_carzd2707zd2_5377;

																			BgL_carzd2707zd2_5377 =
																				CAR(BgL_cdrzd2633zd2_5373);
																			if (SYMBOLP(BgL_carzd2707zd2_5377))
																				{	/* Eval/evmodule.scm 444 */
																					if (BgL_classpz00_4451)
																						{	/* Eval/evmodule.scm 417 */
																							return
																								BGl_evcompilezd2errorzd2zz__evcompilez00
																								(BgL_locz00_4453,
																								BGl_string3224z00zz__evmodulez00,
																								BGl_string3253z00zz__evmodulez00,
																								BgL_clausez00_4452);
																						}
																					else
																						{	/* Eval/evmodule.scm 417 */
																							return BFALSE;
																						}
																				}
																			else
																				{	/* Eval/evmodule.scm 444 */
																					obj_t BgL_carzd2742zd2_5378;

																					BgL_carzd2742zd2_5378 =
																						CAR(BgL_sz00_4454);
																					if (SYMBOLP(BgL_carzd2742zd2_5378))
																						{
																							obj_t BgL_sz00_7127;

																							BgL_sz00_7127 =
																								BgL_carzd2742zd2_5378;
																							BgL_sz00_5295 = BgL_sz00_7127;
																							goto BgL_tagzd2449zd2_5289;
																						}
																					else
																						{	/* Eval/evmodule.scm 444 */
																							return
																								BGl_evcompilezd2errorzd2zz__evcompilez00
																								(BgL_locz00_4453,
																								BGl_string3224z00zz__evmodulez00,
																								BGl_string3261z00zz__evmodulez00,
																								BgL_clausez00_4452);
																						}
																				}
																		}
																	else
																		{	/* Eval/evmodule.scm 444 */
																			obj_t BgL_carzd2754zd2_5379;

																			BgL_carzd2754zd2_5379 =
																				CAR(BgL_sz00_4454);
																			if (SYMBOLP(BgL_carzd2754zd2_5379))
																				{
																					obj_t BgL_sz00_7132;

																					BgL_sz00_7132 = BgL_carzd2754zd2_5379;
																					BgL_sz00_5295 = BgL_sz00_7132;
																					goto BgL_tagzd2449zd2_5289;
																				}
																			else
																				{	/* Eval/evmodule.scm 444 */
																					return
																						BGl_evcompilezd2errorzd2zz__evcompilez00
																						(BgL_locz00_4453,
																						BGl_string3224z00zz__evmodulez00,
																						BGl_string3261z00zz__evmodulez00,
																						BgL_clausez00_4452);
																				}
																		}
																}
															else
																{	/* Eval/evmodule.scm 444 */
																	obj_t BgL_carzd2761zd2_5380;
																	obj_t BgL_cdrzd2762zd2_5381;

																	BgL_carzd2761zd2_5380 = CAR(BgL_sz00_4454);
																	BgL_cdrzd2762zd2_5381 = CDR(BgL_sz00_4454);
																	{

																		if (
																			(BgL_carzd2761zd2_5380 ==
																				BGl_symbol3255z00zz__evmodulez00))
																			{	/* Eval/evmodule.scm 444 */
																			BgL_kapzd2763zd2_5382:
																				if (PAIRP(BgL_cdrzd2762zd2_5381))
																					{	/* Eval/evmodule.scm 444 */
																						obj_t BgL_carzd2765zd2_5383;

																						BgL_carzd2765zd2_5383 =
																							CAR(BgL_cdrzd2762zd2_5381);
																						if (SYMBOLP(BgL_carzd2765zd2_5383))
																							{	/* Eval/evmodule.scm 444 */
																								BgL_sz00_5304 =
																									BgL_carzd2765zd2_5383;
																								if (BgL_classpz00_4451)
																									{	/* Eval/evmodule.scm 424 */
																										return BFALSE;
																									}
																								else
																									{	/* Eval/evmodule.scm 425 */
																										obj_t BgL_idz00_5305;

																										BgL_idz00_5305 =
																											BGl_untypezd2identzd2zz__evmodulez00
																											(BgL_sz00_5304);
																										{	/* Eval/evmodule.scm 381 */
																											obj_t BgL_arg1474z00_5306;

																											{	/* Eval/evmodule.scm 381 */
																												obj_t
																													BgL_arg1475z00_5307;
																												obj_t
																													BgL_arg1476z00_5308;
																												BgL_arg1475z00_5307 =
																													MAKE_YOUNG_PAIR
																													(BgL_idz00_5305,
																													BgL_modz00_4450);
																												BgL_arg1476z00_5308 =
																													STRUCT_REF
																													(BgL_modz00_4450,
																													(int) (((long) 4)));
																												BgL_arg1474z00_5306 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1475z00_5307,
																													BgL_arg1476z00_5308);
																											}
																											{	/* Eval/evmodule.scm 129 */
																												int BgL_tmpz00_7149;

																												BgL_tmpz00_7149 =
																													(int) (((long) 4));
																												STRUCT_SET
																													(BgL_modz00_4450,
																													BgL_tmpz00_7149,
																													BgL_arg1474z00_5306);
																										}}
																										{	/* Eval/evmodule.scm 427 */
																											obj_t BgL_arg1604z00_5309;

																											{	/* Eval/evmodule.scm 427 */
																												obj_t
																													BgL_arg1605z00_5310;
																												{	/* Eval/evmodule.scm 427 */
																													obj_t
																														BgL_arg1606z00_5311;
																													{	/* Eval/evmodule.scm 427 */
																														obj_t
																															BgL_arg1607z00_5312;
																														{	/* Eval/evmodule.scm 427 */
																															obj_t
																																BgL_arg1608z00_5313;
																															BgL_arg1608z00_5313
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_evmodulezd2uninitializa7edz75zz__evmodulez00,
																																BNIL);
																															BgL_arg1607z00_5312
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol3226z00zz__evmodulez00,
																																BgL_arg1608z00_5313);
																														}
																														BgL_arg1606z00_5311
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1607z00_5312,
																															BNIL);
																													}
																													BgL_arg1605z00_5310 =
																														MAKE_YOUNG_PAIR
																														(BgL_idz00_5305,
																														BgL_arg1606z00_5311);
																												}
																												BgL_arg1604z00_5309 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol3239z00zz__evmodulez00,
																													BgL_arg1605z00_5310);
																											}
																											{	/* Eval/evmodule.scm 387 */
																												obj_t BgL_expz00_5314;

																												if (CBOOL
																													(BgL_locz00_4453))
																													{	/* Eval/evmodule.scm 388 */
																														obj_t
																															BgL_arg1478z00_5315;
																														obj_t
																															BgL_arg1479z00_5316;
																														BgL_arg1478z00_5315
																															=
																															CAR
																															(BgL_arg1604z00_5309);
																														BgL_arg1479z00_5316
																															=
																															CDR
																															(BgL_arg1604z00_5309);
																														{	/* Eval/evmodule.scm 388 */
																															obj_t
																																BgL_res2449z00_5317;
																															BgL_res2449z00_5317
																																=
																																MAKE_YOUNG_EPAIR
																																(BgL_arg1478z00_5315,
																																BgL_arg1479z00_5316,
																																BgL_locz00_4453);
																															BgL_expz00_5314 =
																																BgL_res2449z00_5317;
																														}
																													}
																												else
																													{	/* Eval/evmodule.scm 387 */
																														BgL_expz00_5314 =
																															BgL_arg1604z00_5309;
																													}
																												BGl_evalz00zz__evalz00
																													(BgL_expz00_5314,
																													BgL_modz00_4450);
																											}
																										}
																										{	/* Eval/evmodule.scm 305 */
																											obj_t BgL_vz00_5318;

																											{	/* Eval/evmodule.scm 305 */
																												obj_t BgL_auxz00_7163;

																												if (SYMBOLP
																													(BgL_idz00_5305))
																													{	/* Eval/evmodule.scm 305 */
																														BgL_auxz00_7163 =
																															BgL_idz00_5305;
																													}
																												else
																													{
																														obj_t
																															BgL_auxz00_7166;
																														BgL_auxz00_7166 =
																															BGl_typezd2errorzd2zz__errorz00
																															(BGl_string3188z00zz__evmodulez00,
																															BINT(((long)
																																	12237)),
																															BGl_string3263z00zz__evmodulez00,
																															BGl_string3192z00zz__evmodulez00,
																															BgL_idz00_5305);
																														FAILURE
																															(BgL_auxz00_7166,
																															BFALSE, BFALSE);
																													}
																												BgL_vz00_5318 =
																													BGl_evmodulezd2findzd2globalz00zz__evmodulez00
																													(BgL_modz00_4450,
																													BgL_auxz00_7163);
																											}
																											{	/* Eval/evmodule.scm 306 */
																												bool_t
																													BgL_test3862z00_7171;
																												if (VECTORP
																													(BgL_vz00_5318))
																													{	/* Eval/evmodule.scm 306 */
																														BgL_test3862z00_7171
																															=
																															(VECTOR_LENGTH
																															(BgL_vz00_5318) ==
																															((long) 5));
																													}
																												else
																													{	/* Eval/evmodule.scm 306 */
																														BgL_test3862z00_7171
																															= ((bool_t) 0);
																													}
																												if (BgL_test3862z00_7171)
																													{	/* Eval/evmodule.scm 306 */
																														VECTOR_SET
																															(BgL_vz00_5318,
																															((long) 0),
																															BINT(((long) 4)));
																														return
																															BgL_idz00_5305;
																													}
																												else
																													{	/* Eval/evmodule.scm 306 */
																														return
																															BGl_evcompilezd2errorzd2zz__evcompilez00
																															(BgL_locz00_4453,
																															BGl_string3224z00zz__evmodulez00,
																															BGl_string3236z00zz__evmodulez00,
																															BgL_idz00_5305);
																													}
																											}
																										}
																									}
																							}
																						else
																							{	/* Eval/evmodule.scm 444 */
																								if (
																									(CAR(
																											((obj_t) BgL_sz00_4454))
																										==
																										BGl_symbol3268z00zz__evmodulez00))
																									{	/* Eval/evmodule.scm 444 */
																										return BUNSPEC;
																									}
																								else
																									{	/* Eval/evmodule.scm 444 */
																										if (
																											(CAR(
																													((obj_t)
																														BgL_sz00_4454)) ==
																												BGl_symbol3270z00zz__evmodulez00))
																											{	/* Eval/evmodule.scm 444 */
																												return BUNSPEC;
																											}
																										else
																											{	/* Eval/evmodule.scm 444 */
																												if (
																													(CAR(
																															((obj_t)
																																BgL_sz00_4454))
																														==
																														BGl_symbol3272z00zz__evmodulez00))
																													{	/* Eval/evmodule.scm 444 */
																														bool_t
																															BgL_test3867z00_7191;
																														{	/* Eval/evmodule.scm 444 */
																															obj_t
																																BgL_tmpz00_7192;
																															{	/* Eval/evmodule.scm 444 */
																																obj_t
																																	BgL_pairz00_5387;
																																{	/* Eval/evmodule.scm 444 */
																																	obj_t
																																		BgL_aux2900z00_5389;
																																	BgL_aux2900z00_5389
																																		=
																																		CDR(((obj_t)
																																			BgL_sz00_4454));
																																	if (PAIRP
																																		(BgL_aux2900z00_5389))
																																		{	/* Eval/evmodule.scm 444 */
																																			BgL_pairz00_5387
																																				=
																																				BgL_aux2900z00_5389;
																																		}
																																	else
																																		{
																																			obj_t
																																				BgL_auxz00_7197;
																																			BgL_auxz00_7197
																																				=
																																				BGl_typezd2errorzd2zz__errorz00
																																				(BGl_string3188z00zz__evmodulez00,
																																				BINT((
																																						(long)
																																						17466)),
																																				BGl_string3274z00zz__evmodulez00,
																																				BGl_string3190z00zz__evmodulez00,
																																				BgL_aux2900z00_5389);
																																			FAILURE
																																				(BgL_auxz00_7197,
																																				BFALSE,
																																				BFALSE);
																																}}
																																BgL_tmpz00_7192
																																	=
																																	CDR
																																	(BgL_pairz00_5387);
																															}
																															BgL_test3867z00_7191
																																=
																																NULLP
																																(BgL_tmpz00_7192);
																														}
																														if (BgL_test3867z00_7191)
																															{	/* Eval/evmodule.scm 444 */
																																return BUNSPEC;
																															}
																														else
																															{	/* Eval/evmodule.scm 444 */
																																obj_t
																																	BgL_carzd2783zd2_5390;
																																BgL_carzd2783zd2_5390
																																	=
																																	CAR(((obj_t)
																																		BgL_sz00_4454));
																																if (SYMBOLP
																																	(BgL_carzd2783zd2_5390))
																																	{
																																		obj_t
																																			BgL_sz00_7207;
																																		BgL_sz00_7207
																																			=
																																			BgL_carzd2783zd2_5390;
																																		BgL_sz00_5295
																																			=
																																			BgL_sz00_7207;
																																		goto
																																			BgL_tagzd2449zd2_5289;
																																	}
																																else
																																	{	/* Eval/evmodule.scm 444 */
																																		return
																																			BGl_evcompilezd2errorzd2zz__evcompilez00
																																			(BgL_locz00_4453,
																																			BGl_string3224z00zz__evmodulez00,
																																			BGl_string3261z00zz__evmodulez00,
																																			BgL_clausez00_4452);
																																	}
																															}
																													}
																												else
																													{	/* Eval/evmodule.scm 444 */
																														obj_t
																															BgL_carzd2790zd2_5392;
																														BgL_carzd2790zd2_5392
																															=
																															CAR(((obj_t)
																																BgL_sz00_4454));
																														if (SYMBOLP
																															(BgL_carzd2790zd2_5392))
																															{
																																obj_t
																																	BgL_sz00_7213;
																																BgL_sz00_7213 =
																																	BgL_carzd2790zd2_5392;
																																BgL_sz00_5295 =
																																	BgL_sz00_7213;
																																goto
																																	BgL_tagzd2449zd2_5289;
																															}
																														else
																															{	/* Eval/evmodule.scm 444 */
																																return
																																	BGl_evcompilezd2errorzd2zz__evcompilez00
																																	(BgL_locz00_4453,
																																	BGl_string3224z00zz__evmodulez00,
																																	BGl_string3261z00zz__evmodulez00,
																																	BgL_clausez00_4452);
																															}
																													}
																											}
																									}
																							}
																					}
																				else
																					{	/* Eval/evmodule.scm 444 */
																						if (
																							(CAR(
																									((obj_t) BgL_sz00_4454)) ==
																								BGl_symbol3268z00zz__evmodulez00))
																							{	/* Eval/evmodule.scm 444 */
																								return BUNSPEC;
																							}
																						else
																							{	/* Eval/evmodule.scm 444 */
																								if (
																									(CAR(
																											((obj_t) BgL_sz00_4454))
																										==
																										BGl_symbol3270z00zz__evmodulez00))
																									{	/* Eval/evmodule.scm 444 */
																										return BUNSPEC;
																									}
																								else
																									{	/* Eval/evmodule.scm 444 */
																										obj_t BgL_carzd2804zd2_5396;

																										BgL_carzd2804zd2_5396 =
																											CAR(
																											((obj_t) BgL_sz00_4454));
																										if (SYMBOLP
																											(BgL_carzd2804zd2_5396))
																											{
																												obj_t BgL_sz00_7227;

																												BgL_sz00_7227 =
																													BgL_carzd2804zd2_5396;
																												BgL_sz00_5295 =
																													BgL_sz00_7227;
																												goto
																													BgL_tagzd2449zd2_5289;
																											}
																										else
																											{	/* Eval/evmodule.scm 444 */
																												return
																													BGl_evcompilezd2errorzd2zz__evcompilez00
																													(BgL_locz00_4453,
																													BGl_string3224z00zz__evmodulez00,
																													BGl_string3261z00zz__evmodulez00,
																													BgL_clausez00_4452);
																											}
																									}
																							}
																					}
																			}
																		else
																			{	/* Eval/evmodule.scm 444 */
																				if (
																					(BgL_carzd2761zd2_5380 ==
																						BGl_symbol3257z00zz__evmodulez00))
																					{	/* Eval/evmodule.scm 444 */
																						goto BgL_kapzd2763zd2_5382;
																					}
																				else
																					{	/* Eval/evmodule.scm 444 */
																						if (
																							(BgL_carzd2761zd2_5380 ==
																								BGl_symbol3268z00zz__evmodulez00))
																							{	/* Eval/evmodule.scm 444 */
																								return BUNSPEC;
																							}
																						else
																							{	/* Eval/evmodule.scm 444 */
																								if (
																									(CAR(BgL_sz00_4454) ==
																										BGl_symbol3270z00zz__evmodulez00))
																									{	/* Eval/evmodule.scm 444 */
																										return BUNSPEC;
																									}
																								else
																									{	/* Eval/evmodule.scm 444 */
																										obj_t BgL_cdrzd2817zd2_5398;

																										BgL_cdrzd2817zd2_5398 =
																											CDR(BgL_sz00_4454);
																										if (
																											(CAR(BgL_sz00_4454) ==
																												BGl_symbol3272z00zz__evmodulez00))
																											{	/* Eval/evmodule.scm 444 */
																												if (PAIRP
																													(BgL_cdrzd2817zd2_5398))
																													{	/* Eval/evmodule.scm 444 */
																														if (NULLP(CDR
																																(BgL_cdrzd2817zd2_5398)))
																															{	/* Eval/evmodule.scm 444 */
																																return BUNSPEC;
																															}
																														else
																															{	/* Eval/evmodule.scm 444 */
																																obj_t
																																	BgL_carzd2822zd2_5399;
																																BgL_carzd2822zd2_5399
																																	=
																																	CAR
																																	(BgL_sz00_4454);
																																if (SYMBOLP
																																	(BgL_carzd2822zd2_5399))
																																	{
																																		obj_t
																																			BgL_sz00_7248;
																																		BgL_sz00_7248
																																			=
																																			BgL_carzd2822zd2_5399;
																																		BgL_sz00_5295
																																			=
																																			BgL_sz00_7248;
																																		goto
																																			BgL_tagzd2449zd2_5289;
																																	}
																																else
																																	{	/* Eval/evmodule.scm 444 */
																																		return
																																			BGl_evcompilezd2errorzd2zz__evcompilez00
																																			(BgL_locz00_4453,
																																			BGl_string3224z00zz__evmodulez00,
																																			BGl_string3261z00zz__evmodulez00,
																																			BgL_clausez00_4452);
																																	}
																															}
																													}
																												else
																													{	/* Eval/evmodule.scm 444 */
																														obj_t
																															BgL_carzd2829zd2_5400;
																														BgL_carzd2829zd2_5400
																															=
																															CAR
																															(BgL_sz00_4454);
																														if (SYMBOLP
																															(BgL_carzd2829zd2_5400))
																															{
																																obj_t
																																	BgL_sz00_7253;
																																BgL_sz00_7253 =
																																	BgL_carzd2829zd2_5400;
																																BgL_sz00_5295 =
																																	BgL_sz00_7253;
																																goto
																																	BgL_tagzd2449zd2_5289;
																															}
																														else
																															{	/* Eval/evmodule.scm 444 */
																																return
																																	BGl_evcompilezd2errorzd2zz__evcompilez00
																																	(BgL_locz00_4453,
																																	BGl_string3224z00zz__evmodulez00,
																																	BGl_string3261z00zz__evmodulez00,
																																	BgL_clausez00_4452);
																															}
																													}
																											}
																										else
																											{	/* Eval/evmodule.scm 444 */
																												obj_t
																													BgL_carzd2836zd2_5401;
																												BgL_carzd2836zd2_5401 =
																													CAR(BgL_sz00_4454);
																												if (SYMBOLP
																													(BgL_carzd2836zd2_5401))
																													{
																														obj_t BgL_sz00_7258;

																														BgL_sz00_7258 =
																															BgL_carzd2836zd2_5401;
																														BgL_sz00_5295 =
																															BgL_sz00_7258;
																														goto
																															BgL_tagzd2449zd2_5289;
																													}
																												else
																													{	/* Eval/evmodule.scm 444 */
																														return
																															BGl_evcompilezd2errorzd2zz__evcompilez00
																															(BgL_locz00_4453,
																															BGl_string3224z00zz__evmodulez00,
																															BGl_string3261z00zz__evmodulez00,
																															BgL_clausez00_4452);
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
								{	/* Eval/evmodule.scm 444 */
									return
										BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_4453,
										BGl_string3224z00zz__evmodulez00,
										BGl_string3261z00zz__evmodulez00, BgL_clausez00_4452);
								}
						}
				}
			}
		}

	}



/* evmodule-import-binding! */
	obj_t BGl_evmodulezd2importzd2bindingz12z12zz__evmodulez00(obj_t
		BgL_tozd2modzd2_90, obj_t BgL_tozd2identzd2_91, obj_t BgL_fromzd2modzd2_92,
		obj_t BgL_fromzd2identzd2_93, obj_t BgL_locz00_94)
	{
		{	/* Eval/evmodule.scm 452 */
			{	/* Eval/evmodule.scm 453 */
				obj_t BgL_varz00_1734;

				{	/* Eval/evmodule.scm 453 */
					obj_t BgL_auxz00_7261;

					if (SYMBOLP(BgL_fromzd2identzd2_93))
						{	/* Eval/evmodule.scm 453 */
							BgL_auxz00_7261 = BgL_fromzd2identzd2_93;
						}
					else
						{
							obj_t BgL_auxz00_7264;

							BgL_auxz00_7264 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3188z00zz__evmodulez00, BINT(((long) 17973)),
								BGl_string3275z00zz__evmodulez00,
								BGl_string3192z00zz__evmodulez00, BgL_fromzd2identzd2_93);
							FAILURE(BgL_auxz00_7264, BFALSE, BFALSE);
						}
					BgL_varz00_1734 =
						BGl_evmodulezd2findzd2globalz00zz__evmodulez00(BgL_fromzd2modzd2_92,
						BgL_auxz00_7261);
				}
				if (CBOOL(BgL_varz00_1734))
					{	/* Eval/evmodule.scm 463 */
						obj_t BgL_idz00_3636;

						if (SYMBOLP(BgL_tozd2identzd2_91))
							{	/* Eval/evmodule.scm 463 */
								BgL_idz00_3636 = BgL_tozd2identzd2_91;
							}
						else
							{
								obj_t BgL_auxz00_7273;

								BgL_auxz00_7273 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3188z00zz__evmodulez00, BINT(((long) 18325)),
									BGl_string3275z00zz__evmodulez00,
									BGl_string3192z00zz__evmodulez00, BgL_tozd2identzd2_91);
								FAILURE(BgL_auxz00_7273, BFALSE, BFALSE);
							}
						if (CBOOL(BGl_getzd2evalzd2expanderz00zz__macroz00(BgL_idz00_3636)))
							{	/* Eval/evmodule.scm 262 */
								obj_t BgL_msgz00_3638;

								{	/* Eval/evmodule.scm 262 */
									obj_t BgL_arg1375z00_3639;

									{	/* Eval/evmodule.scm 262 */
										obj_t BgL_res2483z00_3645;

										{	/* Eval/evmodule.scm 262 */
											obj_t BgL_arg2175z00_3644;

											BgL_arg2175z00_3644 = SYMBOL_TO_STRING(BgL_idz00_3636);
											BgL_res2483z00_3645 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2175z00_3644);
										}
										BgL_arg1375z00_3639 = BgL_res2483z00_3645;
									}
									BgL_msgz00_3638 =
										string_append_3(BGl_string3216z00zz__evmodulez00,
										BgL_arg1375z00_3639, BGl_string3217z00zz__evmodulez00);
								}
								{	/* Eval/evmodule.scm 264 */
									obj_t BgL_list1374z00_3640;

									BgL_list1374z00_3640 = MAKE_YOUNG_PAIR(BgL_msgz00_3638, BNIL);
									BGl_evwarningz00zz__everrorz00(BgL_locz00_94,
										BgL_list1374z00_3640);
								}
							}
						else
							{	/* Eval/evmodule.scm 261 */
								BFALSE;
							}
						if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_tozd2modzd2_90))
							{	/* Eval/evmodule.scm 266 */
								obj_t BgL_arg1377z00_3642;

								{	/* Eval/evmodule.scm 129 */
									obj_t BgL_sz00_3646;

									if (STRUCTP(BgL_tozd2modzd2_90))
										{	/* Eval/evmodule.scm 129 */
											BgL_sz00_3646 = BgL_tozd2modzd2_90;
										}
									else
										{
											obj_t BgL_auxz00_7289;

											BgL_auxz00_7289 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3188z00zz__evmodulez00, BINT(((long) 4439)),
												BGl_string3275z00zz__evmodulez00,
												BGl_string3194z00zz__evmodulez00, BgL_tozd2modzd2_90);
											FAILURE(BgL_auxz00_7289, BFALSE, BFALSE);
										}
									BgL_arg1377z00_3642 =
										STRUCT_REF(BgL_sz00_3646, (int) (((long) 3)));
								}
								{	/* Eval/evmodule.scm 266 */
									obj_t BgL_auxz00_7295;

									if (STRUCTP(BgL_arg1377z00_3642))
										{	/* Eval/evmodule.scm 266 */
											BgL_auxz00_7295 = BgL_arg1377z00_3642;
										}
									else
										{
											obj_t BgL_auxz00_7298;

											BgL_auxz00_7298 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3188z00zz__evmodulez00, BINT(((long) 10468)),
												BGl_string3275z00zz__evmodulez00,
												BGl_string3194z00zz__evmodulez00, BgL_arg1377z00_3642);
											FAILURE(BgL_auxz00_7298, BFALSE, BFALSE);
										}
									return
										BGl_hashtablezd2putz12zc0zz__hashz00(BgL_auxz00_7295,
										BgL_idz00_3636, BgL_varz00_1734);
								}
							}
						else
							{	/* Eval/evmodule.scm 267 */
								obj_t BgL_auxz00_7303;

								if (VECTORP(BgL_varz00_1734))
									{	/* Eval/evmodule.scm 267 */
										BgL_auxz00_7303 = BgL_varz00_1734;
									}
								else
									{
										obj_t BgL_auxz00_7306;

										BgL_auxz00_7306 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3188z00zz__evmodulez00, BINT(((long) 10507)),
											BGl_string3275z00zz__evmodulez00,
											BGl_string3212z00zz__evmodulez00, BgL_varz00_1734);
										FAILURE(BgL_auxz00_7306, BFALSE, BFALSE);
									}
								return
									BGl_bindzd2evalzd2globalz12z12zz__evenvz00(BgL_idz00_3636,
									BgL_auxz00_7303);
							}
					}
				else
					{	/* Eval/evmodule.scm 454 */
						{	/* Eval/evmodule.scm 456 */
							obj_t BgL_arg1611z00_1735;
							obj_t BgL_arg1612z00_1736;

							{	/* Eval/evmodule.scm 456 */
								obj_t BgL_res2484z00_3648;

								{	/* Eval/evmodule.scm 456 */
									obj_t BgL_tmpz00_7311;

									BgL_tmpz00_7311 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res2484z00_3648 =
										BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_7311);
								}
								BgL_arg1611z00_1735 = BgL_res2484z00_3648;
							}
							{	/* Eval/evmodule.scm 456 */
								obj_t BgL_arg1619z00_1743;

								{	/* Eval/evmodule.scm 129 */
									obj_t BgL_sz00_3649;

									if (STRUCTP(BgL_fromzd2modzd2_92))
										{	/* Eval/evmodule.scm 129 */
											BgL_sz00_3649 = BgL_fromzd2modzd2_92;
										}
									else
										{
											obj_t BgL_auxz00_7316;

											BgL_auxz00_7316 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3188z00zz__evmodulez00, BINT(((long) 4439)),
												BGl_string3275z00zz__evmodulez00,
												BGl_string3194z00zz__evmodulez00, BgL_fromzd2modzd2_92);
											FAILURE(BgL_auxz00_7316, BFALSE, BFALSE);
										}
									BgL_arg1619z00_1743 =
										STRUCT_REF(BgL_sz00_3649, (int) (((long) 3)));
								}
								{	/* Eval/evmodule.scm 456 */
									obj_t BgL_auxz00_7322;

									if (STRUCTP(BgL_arg1619z00_1743))
										{	/* Eval/evmodule.scm 456 */
											BgL_auxz00_7322 = BgL_arg1619z00_1743;
										}
									else
										{
											obj_t BgL_auxz00_7325;

											BgL_auxz00_7325 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3188z00zz__evmodulez00, BINT(((long) 18084)),
												BGl_string3275z00zz__evmodulez00,
												BGl_string3194z00zz__evmodulez00, BgL_arg1619z00_1743);
											FAILURE(BgL_auxz00_7325, BFALSE, BFALSE);
										}
									BgL_arg1612z00_1736 =
										BGl_hashtablezd2keyzd2listz00zz__hashz00(BgL_auxz00_7322);
							}}
							{	/* Eval/evmodule.scm 456 */
								obj_t BgL_list1613z00_1737;

								{	/* Eval/evmodule.scm 456 */
									obj_t BgL_arg1614z00_1738;

									{	/* Eval/evmodule.scm 456 */
										obj_t BgL_arg1615z00_1739;

										{	/* Eval/evmodule.scm 456 */
											obj_t BgL_arg1616z00_1740;

											{	/* Eval/evmodule.scm 456 */
												obj_t BgL_arg1617z00_1741;

												{	/* Eval/evmodule.scm 456 */
													obj_t BgL_arg1618z00_1742;

													BgL_arg1618z00_1742 =
														MAKE_YOUNG_PAIR(BgL_arg1612z00_1736, BNIL);
													BgL_arg1617z00_1741 =
														MAKE_YOUNG_PAIR(BGl_string3276z00zz__evmodulez00,
														BgL_arg1618z00_1742);
												}
												BgL_arg1616z00_1740 =
													MAKE_YOUNG_PAIR(BGl_string3277z00zz__evmodulez00,
													BgL_arg1617z00_1741);
											}
											BgL_arg1615z00_1739 =
												MAKE_YOUNG_PAIR(BINT(((long) 456)),
												BgL_arg1616z00_1740);
										}
										BgL_arg1614z00_1738 =
											MAKE_YOUNG_PAIR(BGl_string3278z00zz__evmodulez00,
											BgL_arg1615z00_1739);
									}
									BgL_list1613z00_1737 =
										MAKE_YOUNG_PAIR(BGl_string3279z00zz__evmodulez00,
										BgL_arg1614z00_1738);
								}
								BGl_tprintz00zz__r4_output_6_10_3z00(BgL_arg1611z00_1735,
									BgL_list1613z00_1737);
						}}
						{	/* Eval/evmodule.scm 460 */
							obj_t BgL_arg1620z00_1744;
							obj_t BgL_arg1621z00_1745;

							{	/* Eval/evmodule.scm 460 */
								obj_t BgL_arg1623z00_1746;

								{	/* Eval/evmodule.scm 460 */
									obj_t BgL_arg1624z00_1747;

									{	/* Eval/evmodule.scm 460 */
										obj_t BgL_res2485z00_3652;

										if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_tozd2modzd2_90))
											{	/* Eval/evmodule.scm 129 */
												obj_t BgL_sz00_3651;

												if (STRUCTP(BgL_tozd2modzd2_90))
													{	/* Eval/evmodule.scm 129 */
														BgL_sz00_3651 = BgL_tozd2modzd2_90;
													}
												else
													{
														obj_t BgL_auxz00_7342;

														BgL_auxz00_7342 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3188z00zz__evmodulez00,
															BINT(((long) 4439)),
															BGl_string3275z00zz__evmodulez00,
															BGl_string3194z00zz__evmodulez00,
															BgL_tozd2modzd2_90);
														FAILURE(BgL_auxz00_7342, BFALSE, BFALSE);
													}
												{	/* Eval/evmodule.scm 129 */
													obj_t BgL_aux2928z00_4822;

													BgL_aux2928z00_4822 =
														STRUCT_REF(BgL_sz00_3651, (int) (((long) 1)));
													if (SYMBOLP(BgL_aux2928z00_4822))
														{	/* Eval/evmodule.scm 129 */
															BgL_res2485z00_3652 = BgL_aux2928z00_4822;
														}
													else
														{
															obj_t BgL_auxz00_7350;

															BgL_auxz00_7350 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3188z00zz__evmodulez00,
																BINT(((long) 4439)),
																BGl_string3275z00zz__evmodulez00,
																BGl_string3192z00zz__evmodulez00,
																BgL_aux2928z00_4822);
															FAILURE(BgL_auxz00_7350, BFALSE, BFALSE);
											}}}
										else
											{	/* Eval/evmodule.scm 143 */
												obj_t BgL_aux2930z00_4824;

												BgL_aux2930z00_4824 =
													BGl_bigloozd2typezd2errorz00zz__errorz00
													(BGl_string3193z00zz__evmodulez00,
													BGl_symbol3195z00zz__evmodulez00, BgL_tozd2modzd2_90);
												if (SYMBOLP(BgL_aux2930z00_4824))
													{	/* Eval/evmodule.scm 143 */
														BgL_res2485z00_3652 = BgL_aux2930z00_4824;
													}
												else
													{
														obj_t BgL_auxz00_7357;

														BgL_auxz00_7357 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3188z00zz__evmodulez00,
															BINT(((long) 5128)),
															BGl_string3275z00zz__evmodulez00,
															BGl_string3192z00zz__evmodulez00,
															BgL_aux2930z00_4824);
														FAILURE(BgL_auxz00_7357, BFALSE, BFALSE);
											}}
										BgL_arg1624z00_1747 = BgL_res2485z00_3652;
									}
									{	/* Eval/evmodule.scm 460 */
										obj_t BgL_res2486z00_3655;

										{	/* Eval/evmodule.scm 460 */
											obj_t BgL_arg2175z00_3654;

											BgL_arg2175z00_3654 =
												SYMBOL_TO_STRING(BgL_arg1624z00_1747);
											BgL_res2486z00_3655 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2175z00_3654);
										}
										BgL_arg1623z00_1746 = BgL_res2486z00_3655;
								}}
								BgL_arg1620z00_1744 =
									string_append_3(BGl_string3280z00zz__evmodulez00,
									BgL_arg1623z00_1746, BGl_string3281z00zz__evmodulez00);
							}
							{	/* Eval/evmodule.scm 462 */
								obj_t BgL_arg1626z00_1748;

								{	/* Eval/evmodule.scm 462 */
									obj_t BgL_arg1627z00_1749;

									{	/* Eval/evmodule.scm 462 */
										obj_t BgL_arg1628z00_1750;

										{	/* Eval/evmodule.scm 462 */
											obj_t BgL_res2487z00_3658;

											if (BGl_evmodulezf3zf3zz__evmodulez00
												(BgL_fromzd2modzd2_92))
												{	/* Eval/evmodule.scm 129 */
													obj_t BgL_sz00_3657;

													if (STRUCTP(BgL_fromzd2modzd2_92))
														{	/* Eval/evmodule.scm 129 */
															BgL_sz00_3657 = BgL_fromzd2modzd2_92;
														}
													else
														{
															obj_t BgL_auxz00_7368;

															BgL_auxz00_7368 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3188z00zz__evmodulez00,
																BINT(((long) 4439)),
																BGl_string3275z00zz__evmodulez00,
																BGl_string3194z00zz__evmodulez00,
																BgL_fromzd2modzd2_92);
															FAILURE(BgL_auxz00_7368, BFALSE, BFALSE);
														}
													{	/* Eval/evmodule.scm 129 */
														obj_t BgL_aux2934z00_4828;

														BgL_aux2934z00_4828 =
															STRUCT_REF(BgL_sz00_3657, (int) (((long) 1)));
														if (SYMBOLP(BgL_aux2934z00_4828))
															{	/* Eval/evmodule.scm 129 */
																BgL_res2487z00_3658 = BgL_aux2934z00_4828;
															}
														else
															{
																obj_t BgL_auxz00_7376;

																BgL_auxz00_7376 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3188z00zz__evmodulez00,
																	BINT(((long) 4439)),
																	BGl_string3275z00zz__evmodulez00,
																	BGl_string3192z00zz__evmodulez00,
																	BgL_aux2934z00_4828);
																FAILURE(BgL_auxz00_7376, BFALSE, BFALSE);
												}}}
											else
												{	/* Eval/evmodule.scm 143 */
													obj_t BgL_aux2936z00_4830;

													BgL_aux2936z00_4830 =
														BGl_bigloozd2typezd2errorz00zz__errorz00
														(BGl_string3193z00zz__evmodulez00,
														BGl_symbol3195z00zz__evmodulez00,
														BgL_fromzd2modzd2_92);
													if (SYMBOLP(BgL_aux2936z00_4830))
														{	/* Eval/evmodule.scm 143 */
															BgL_res2487z00_3658 = BgL_aux2936z00_4830;
														}
													else
														{
															obj_t BgL_auxz00_7383;

															BgL_auxz00_7383 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3188z00zz__evmodulez00,
																BINT(((long) 5128)),
																BGl_string3275z00zz__evmodulez00,
																BGl_string3192z00zz__evmodulez00,
																BgL_aux2936z00_4830);
															FAILURE(BgL_auxz00_7383, BFALSE, BFALSE);
												}}
											BgL_arg1628z00_1750 = BgL_res2487z00_3658;
										}
										BgL_arg1627z00_1749 =
											MAKE_YOUNG_PAIR(BgL_arg1628z00_1750, BNIL);
									}
									BgL_arg1626z00_1748 =
										MAKE_YOUNG_PAIR(BgL_fromzd2identzd2_93,
										BgL_arg1627z00_1749);
								}
								BgL_arg1621z00_1745 =
									MAKE_YOUNG_PAIR(BGl_symbol3282z00zz__evmodulez00,
									BgL_arg1626z00_1748);
							}
							return
								BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_94,
								BGl_string3224z00zz__evmodulez00, BgL_arg1620z00_1744,
								BgL_arg1621z00_1745);
						}
					}
			}
		}

	}



/* evmodule-check-unbound */
	BGL_EXPORTED_DEF obj_t BGl_evmodulezd2checkzd2unboundz00zz__evmodulez00(obj_t
		BgL_modz00_95, obj_t BgL_locz00_96)
	{
		{	/* Eval/evmodule.scm 470 */
			{	/* Eval/evmodule.scm 477 */
				obj_t BgL_lz00_4474;

				BgL_lz00_4474 = MAKE_CELL(BNIL);
				{	/* Eval/evmodule.scm 480 */
					obj_t BgL_globalzd2checkzd2unboundz00_4457;

					BgL_globalzd2checkzd2unboundz00_4457 =
						MAKE_FX_PROCEDURE(BGl_z62globalzd2checkzd2unboundz62zz__evmodulez00,
						(int) (((long) 2)), (int) (((long) 2)));
					PROCEDURE_SET(BgL_globalzd2checkzd2unboundz00_4457,
						(int) (((long) 0)), ((obj_t) BgL_lz00_4474));
					PROCEDURE_SET(BgL_globalzd2checkzd2unboundz00_4457,
						(int) (((long) 1)), BgL_modz00_95);
					{	/* Eval/evmodule.scm 486 */
						obj_t BgL_arg1629z00_1754;

						{	/* Eval/evmodule.scm 129 */
							obj_t BgL_sz00_3690;

							if (STRUCTP(BgL_modz00_95))
								{	/* Eval/evmodule.scm 129 */
									BgL_sz00_3690 = BgL_modz00_95;
								}
							else
								{
									obj_t BgL_auxz00_7401;

									BgL_auxz00_7401 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3188z00zz__evmodulez00, BINT(((long) 4439)),
										BGl_string3284z00zz__evmodulez00,
										BGl_string3194z00zz__evmodulez00, BgL_modz00_95);
									FAILURE(BgL_auxz00_7401, BFALSE, BFALSE);
								}
							BgL_arg1629z00_1754 =
								STRUCT_REF(BgL_sz00_3690, (int) (((long) 3)));
						}
						{	/* Eval/evmodule.scm 486 */
							obj_t BgL_auxz00_7407;

							if (STRUCTP(BgL_arg1629z00_1754))
								{	/* Eval/evmodule.scm 486 */
									BgL_auxz00_7407 = BgL_arg1629z00_1754;
								}
							else
								{
									obj_t BgL_auxz00_7410;

									BgL_auxz00_7410 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3188z00zz__evmodulez00, BINT(((long) 19206)),
										BGl_string3284z00zz__evmodulez00,
										BGl_string3194z00zz__evmodulez00, BgL_arg1629z00_1754);
									FAILURE(BgL_auxz00_7410, BFALSE, BFALSE);
								}
							BGl_hashtablezd2forzd2eachz00zz__hashz00(BgL_auxz00_7407,
								BgL_globalzd2checkzd2unboundz00_4457);
					}}
					{	/* Eval/evmodule.scm 487 */
						bool_t BgL_test3903z00_7415;

						{	/* Eval/evmodule.scm 487 */
							obj_t BgL_objz00_3691;

							BgL_objz00_3691 = CELL_REF(BgL_lz00_4474);
							BgL_test3903z00_7415 = PAIRP(BgL_objz00_3691);
						}
						if (BgL_test3903z00_7415)
							{	/* Eval/evmodule.scm 487 */
								{
									obj_t BgL_l1146z00_1757;

									BgL_l1146z00_1757 = CELL_REF(BgL_lz00_4474);
								BgL_zc3z04anonymousza31631ze3z87_1758:
									if (PAIRP(BgL_l1146z00_1757))
										{	/* Eval/evmodule.scm 488 */
											{	/* Eval/evmodule.scm 489 */
												obj_t BgL_vz00_1760;

												BgL_vz00_1760 = CAR(BgL_l1146z00_1757);
												{	/* Eval/evmodule.scm 489 */
													obj_t BgL_res1051z00_4475;

													BgL_res1051z00_4475 = MAKE_CELL(BUNSPEC);
													if (CBOOL
														(BGl_zc3z04exitza31639ze3ze70z60zz__evmodulez00
															(BgL_modz00_95, BgL_locz00_96, BgL_vz00_1760,
																BgL_res1051z00_4475)))
														{	/* Eval/evmodule.scm 489 */
															obj_t BgL_ez00_3706;

															BgL_ez00_3706 = CELL_REF(BgL_res1051z00_4475);
															BGl_errorzd2notifyzd2zz__errorz00(BgL_ez00_3706);
															{	/* Eval/evmodule.scm 492 */
																obj_t BgL_arg1645z00_3707;

																{	/* Eval/evmodule.scm 492 */
																	obj_t BgL_res2499z00_3709;

																	{	/* Eval/evmodule.scm 492 */
																		obj_t BgL_tmpz00_7424;

																		BgL_tmpz00_7424 = BGL_CURRENT_DYNAMIC_ENV();
																		BgL_res2499z00_3709 =
																			BGL_ENV_CURRENT_ERROR_PORT
																			(BgL_tmpz00_7424);
																	}
																	BgL_arg1645z00_3707 = BgL_res2499z00_3709;
																}
																bgl_display_char(((unsigned char) 10),
																	BgL_arg1645z00_3707);
															} BFALSE;
														}
													else
														{	/* Eval/evmodule.scm 489 */
															CELL_REF(BgL_res1051z00_4475);
														}
												}
											}
											{
												obj_t BgL_l1146z00_7428;

												BgL_l1146z00_7428 = CDR(BgL_l1146z00_1757);
												BgL_l1146z00_1757 = BgL_l1146z00_7428;
												goto BgL_zc3z04anonymousza31631ze3z87_1758;
											}
										}
									else
										{	/* Eval/evmodule.scm 488 */
											if (NULLP(BgL_l1146z00_1757))
												{	/* Eval/evmodule.scm 488 */
													BTRUE;
												}
											else
												{	/* Eval/evmodule.scm 488 */
													BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00
														(BGl_string3231z00zz__evmodulez00,
														BGl_string3221z00zz__evmodulez00, BgL_l1146z00_1757,
														BGl_string3188z00zz__evmodulez00,
														BINT(((long) 19254)));
								}}}
								{	/* Eval/evmodule.scm 496 */
									long BgL_lenz00_1805;

									{	/* Eval/evmodule.scm 496 */
										obj_t BgL_auxz00_7434;

										{	/* Eval/evmodule.scm 496 */
											obj_t BgL_aux2942z00_4836;

											BgL_aux2942z00_4836 = CELL_REF(BgL_lz00_4474);
											{	/* Eval/evmodule.scm 496 */
												bool_t BgL_test3907z00_7435;

												if (PAIRP(BgL_aux2942z00_4836))
													{	/* Eval/evmodule.scm 496 */
														BgL_test3907z00_7435 = ((bool_t) 1);
													}
												else
													{	/* Eval/evmodule.scm 496 */
														BgL_test3907z00_7435 = NULLP(BgL_aux2942z00_4836);
													}
												if (BgL_test3907z00_7435)
													{	/* Eval/evmodule.scm 496 */
														BgL_auxz00_7434 = BgL_aux2942z00_4836;
													}
												else
													{
														obj_t BgL_auxz00_7439;

														BgL_auxz00_7439 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3188z00zz__evmodulez00,
															BINT(((long) 19440)),
															BGl_string3284z00zz__evmodulez00,
															BGl_string3246z00zz__evmodulez00,
															BgL_aux2942z00_4836);
														FAILURE(BgL_auxz00_7439, BFALSE, BFALSE);
										}}}
										BgL_lenz00_1805 = bgl_list_length(BgL_auxz00_7434);
									}
									{	/* Eval/evmodule.scm 498 */
										obj_t BgL_arg1650z00_1806;
										obj_t BgL_arg1651z00_1807;
										obj_t BgL_arg1652z00_1808;

										{	/* Eval/evmodule.scm 498 */
											obj_t BgL_res2501z00_3715;

											if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_modz00_95))
												{	/* Eval/evmodule.scm 129 */
													obj_t BgL_sz00_3714;

													if (STRUCTP(BgL_modz00_95))
														{	/* Eval/evmodule.scm 129 */
															BgL_sz00_3714 = BgL_modz00_95;
														}
													else
														{
															obj_t BgL_auxz00_7448;

															BgL_auxz00_7448 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3188z00zz__evmodulez00,
																BINT(((long) 4439)),
																BGl_string3284z00zz__evmodulez00,
																BGl_string3194z00zz__evmodulez00,
																BgL_modz00_95);
															FAILURE(BgL_auxz00_7448, BFALSE, BFALSE);
														}
													{	/* Eval/evmodule.scm 129 */
														obj_t BgL_aux2946z00_4840;

														BgL_aux2946z00_4840 =
															STRUCT_REF(BgL_sz00_3714, (int) (((long) 1)));
														if (SYMBOLP(BgL_aux2946z00_4840))
															{	/* Eval/evmodule.scm 129 */
																BgL_res2501z00_3715 = BgL_aux2946z00_4840;
															}
														else
															{
																obj_t BgL_auxz00_7456;

																BgL_auxz00_7456 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3188z00zz__evmodulez00,
																	BINT(((long) 4439)),
																	BGl_string3284z00zz__evmodulez00,
																	BGl_string3192z00zz__evmodulez00,
																	BgL_aux2946z00_4840);
																FAILURE(BgL_auxz00_7456, BFALSE, BFALSE);
												}}}
											else
												{	/* Eval/evmodule.scm 143 */
													obj_t BgL_aux2948z00_4842;

													BgL_aux2948z00_4842 =
														BGl_bigloozd2typezd2errorz00zz__errorz00
														(BGl_string3193z00zz__evmodulez00,
														BGl_symbol3195z00zz__evmodulez00, BgL_modz00_95);
													if (SYMBOLP(BgL_aux2948z00_4842))
														{	/* Eval/evmodule.scm 143 */
															BgL_res2501z00_3715 = BgL_aux2948z00_4842;
														}
													else
														{
															obj_t BgL_auxz00_7463;

															BgL_auxz00_7463 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3188z00zz__evmodulez00,
																BINT(((long) 5128)),
																BGl_string3284z00zz__evmodulez00,
																BGl_string3192z00zz__evmodulez00,
																BgL_aux2948z00_4842);
															FAILURE(BgL_auxz00_7463, BFALSE, BFALSE);
												}}
											BgL_arg1650z00_1806 = BgL_res2501z00_3715;
										}
										{	/* Eval/evmodule.scm 499 */
											obj_t BgL_arg1654z00_1809;

											if ((BgL_lenz00_1805 > ((long) 1)))
												{	/* Eval/evmodule.scm 499 */
													BgL_arg1654z00_1809 =
														BGl_string3285z00zz__evmodulez00;
												}
											else
												{	/* Eval/evmodule.scm 499 */
													BgL_arg1654z00_1809 =
														BGl_string3286z00zz__evmodulez00;
												}
											{	/* Eval/evmodule.scm 499 */
												obj_t BgL_list1655z00_1810;

												{	/* Eval/evmodule.scm 499 */
													obj_t BgL_arg1656z00_1811;

													BgL_arg1656z00_1811 =
														MAKE_YOUNG_PAIR(BgL_arg1654z00_1809, BNIL);
													BgL_list1655z00_1810 =
														MAKE_YOUNG_PAIR(BINT(BgL_lenz00_1805),
														BgL_arg1656z00_1811);
												}
												BgL_arg1651z00_1807 =
													BGl_formatz00zz__r4_output_6_10_3z00
													(BGl_string3287z00zz__evmodulez00,
													BgL_list1655z00_1810);
											}
										}
										{	/* Eval/evmodule.scm 500 */
											obj_t BgL_arg1659z00_1815;

											{	/* Eval/evmodule.scm 500 */
												obj_t BgL_l1148z00_1817;

												BgL_l1148z00_1817 = CELL_REF(BgL_lz00_4474);
												if (NULLP(BgL_l1148z00_1817))
													{	/* Eval/evmodule.scm 500 */
														BgL_arg1659z00_1815 = BNIL;
													}
												else
													{	/* Eval/evmodule.scm 500 */
														obj_t BgL_head1150z00_1819;

														{	/* Eval/evmodule.scm 500 */
															obj_t BgL_arg1669z00_1832;

															{	/* Eval/evmodule.scm 500 */
																obj_t BgL_arg1672z00_1833;

																{	/* Eval/evmodule.scm 500 */
																	obj_t BgL_pairz00_3720;

																	if (PAIRP(BgL_l1148z00_1817))
																		{	/* Eval/evmodule.scm 500 */
																			BgL_pairz00_3720 = BgL_l1148z00_1817;
																		}
																	else
																		{
																			obj_t BgL_auxz00_7477;

																			BgL_auxz00_7477 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string3188z00zz__evmodulez00,
																				BINT(((long) 19586)),
																				BGl_string3284z00zz__evmodulez00,
																				BGl_string3190z00zz__evmodulez00,
																				BgL_l1148z00_1817);
																			FAILURE(BgL_auxz00_7477, BFALSE, BFALSE);
																		}
																	BgL_arg1672z00_1833 = CAR(BgL_pairz00_3720);
																}
																{	/* Eval/evmodule.scm 500 */
																	obj_t BgL_evalzd2globalzd2_3721;

																	if (VECTORP(BgL_arg1672z00_1833))
																		{	/* Eval/evmodule.scm 500 */
																			BgL_evalzd2globalzd2_3721 =
																				BgL_arg1672z00_1833;
																		}
																	else
																		{
																			obj_t BgL_auxz00_7484;

																			BgL_auxz00_7484 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string3188z00zz__evmodulez00,
																				BINT(((long) 19586)),
																				BGl_string3284z00zz__evmodulez00,
																				BGl_string3212z00zz__evmodulez00,
																				BgL_arg1672z00_1833);
																			FAILURE(BgL_auxz00_7484, BFALSE, BFALSE);
																		}
																	BgL_arg1669z00_1832 =
																		VECTOR_REF(BgL_evalzd2globalzd2_3721,
																		((long) 1));
															}}
															{	/* Eval/evmodule.scm 500 */
																obj_t BgL_res2505z00_3723;

																BgL_res2505z00_3723 =
																	MAKE_YOUNG_PAIR(BgL_arg1669z00_1832, BNIL);
																BgL_head1150z00_1819 = BgL_res2505z00_3723;
														}}
														{	/* Eval/evmodule.scm 500 */
															obj_t BgL_g1153z00_1820;

															{	/* Eval/evmodule.scm 500 */
																obj_t BgL_pairz00_3724;

																if (PAIRP(BgL_l1148z00_1817))
																	{	/* Eval/evmodule.scm 500 */
																		BgL_pairz00_3724 = BgL_l1148z00_1817;
																	}
																else
																	{
																		obj_t BgL_auxz00_7492;

																		BgL_auxz00_7492 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string3188z00zz__evmodulez00,
																			BINT(((long) 19586)),
																			BGl_string3284z00zz__evmodulez00,
																			BGl_string3190z00zz__evmodulez00,
																			BgL_l1148z00_1817);
																		FAILURE(BgL_auxz00_7492, BFALSE, BFALSE);
																	}
																BgL_g1153z00_1820 = CDR(BgL_pairz00_3724);
															}
															{
																obj_t BgL_l1148z00_1822;
																obj_t BgL_tail1151z00_1823;

																BgL_l1148z00_1822 = BgL_g1153z00_1820;
																BgL_tail1151z00_1823 = BgL_head1150z00_1819;
															BgL_zc3z04anonymousza31662ze3z87_1824:
																if (PAIRP(BgL_l1148z00_1822))
																	{	/* Eval/evmodule.scm 500 */
																		obj_t BgL_newtail1152z00_1826;

																		{	/* Eval/evmodule.scm 500 */
																			obj_t BgL_arg1665z00_1828;

																			{	/* Eval/evmodule.scm 500 */
																				obj_t BgL_arg1667z00_1829;

																				BgL_arg1667z00_1829 =
																					CAR(BgL_l1148z00_1822);
																				{	/* Eval/evmodule.scm 500 */
																					obj_t BgL_evalzd2globalzd2_3727;

																					if (VECTORP(BgL_arg1667z00_1829))
																						{	/* Eval/evmodule.scm 500 */
																							BgL_evalzd2globalzd2_3727 =
																								BgL_arg1667z00_1829;
																						}
																					else
																						{
																							obj_t BgL_auxz00_7502;

																							BgL_auxz00_7502 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string3188z00zz__evmodulez00,
																								BINT(((long) 19586)),
																								BGl_string3288z00zz__evmodulez00,
																								BGl_string3212z00zz__evmodulez00,
																								BgL_arg1667z00_1829);
																							FAILURE(BgL_auxz00_7502, BFALSE,
																								BFALSE);
																						}
																					BgL_arg1665z00_1828 =
																						VECTOR_REF
																						(BgL_evalzd2globalzd2_3727,
																						((long) 1));
																			}}
																			{	/* Eval/evmodule.scm 500 */
																				obj_t BgL_res2507z00_3729;

																				BgL_res2507z00_3729 =
																					MAKE_YOUNG_PAIR(BgL_arg1665z00_1828,
																					BNIL);
																				BgL_newtail1152z00_1826 =
																					BgL_res2507z00_3729;
																		}}
																		SET_CDR(BgL_tail1151z00_1823,
																			BgL_newtail1152z00_1826);
																		{
																			obj_t BgL_tail1151z00_7511;
																			obj_t BgL_l1148z00_7509;

																			BgL_l1148z00_7509 =
																				CDR(BgL_l1148z00_1822);
																			BgL_tail1151z00_7511 =
																				BgL_newtail1152z00_1826;
																			BgL_tail1151z00_1823 =
																				BgL_tail1151z00_7511;
																			BgL_l1148z00_1822 = BgL_l1148z00_7509;
																			goto
																				BgL_zc3z04anonymousza31662ze3z87_1824;
																		}
																	}
																else
																	{	/* Eval/evmodule.scm 500 */
																		if (NULLP(BgL_l1148z00_1822))
																			{	/* Eval/evmodule.scm 500 */
																				BgL_arg1659z00_1815 =
																					BgL_head1150z00_1819;
																			}
																		else
																			{	/* Eval/evmodule.scm 500 */
																				BgL_arg1659z00_1815 =
																					BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00
																					(BGl_string3289z00zz__evmodulez00,
																					BGl_string3221z00zz__evmodulez00,
																					BgL_l1148z00_1822,
																					BGl_string3188z00zz__evmodulez00,
																					BINT(((long) 19586)));
											}}}}}}
											{	/* Eval/evmodule.scm 500 */
												obj_t BgL_list1660z00_1816;

												BgL_list1660z00_1816 =
													MAKE_YOUNG_PAIR(BgL_arg1659z00_1815, BNIL);
												BgL_arg1652z00_1808 =
													BGl_formatz00zz__r4_output_6_10_3z00
													(BGl_string3290z00zz__evmodulez00,
													BgL_list1660z00_1816);
										}}
										return
											BGl_evcompilezd2errorzd2zz__evcompilez00(BFALSE,
											BgL_arg1650z00_1806, BgL_arg1651z00_1807,
											BgL_arg1652z00_1808);
									}
								}
							}
						else
							{	/* Eval/evmodule.scm 487 */
								return BFALSE;
							}
					}
				}
			}
		}

	}



/* <@exit:1639>~0 */
	obj_t BGl_zc3z04exitza31639ze3ze70z60zz__evmodulez00(obj_t BgL_modz00_4558,
		obj_t BgL_locz00_4557, obj_t BgL_vz00_4556, obj_t BgL_res1051z00_4555)
	{
		{	/* Eval/evmodule.scm 489 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1057z00_1782;

			if (SET_EXIT(BgL_an_exit1057z00_1782))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1057z00_1782 = (void *) jmpbuf;
					{	/* Eval/evmodule.scm 489 */

						PUSH_EXIT(BgL_an_exit1057z00_1782, ((long) 1));
						{	/* Eval/evmodule.scm 489 */
							obj_t BgL_an_exitd1058z00_1783;

							BgL_an_exitd1058z00_1783 = ((obj_t) (&exitd));
							{	/* Eval/evmodule.scm 489 */
								bool_t BgL_res1060z00_1786;

								{	/* Eval/evmodule.scm 489 */
									obj_t BgL_ohs1049z00_1787;

									BgL_ohs1049z00_1787 = BGL_ERROR_HANDLER_GET();
									{	/* Eval/evmodule.scm 489 */
										obj_t BgL_exitd1054z00_1788;

										BgL_exitd1054z00_1788 = ((obj_t) (&exitd));
										{
											obj_t BgL_zc3z04anonymousza31643ze3z87_4456;

											BgL_zc3z04anonymousza31643ze3z87_4456 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31643ze3ze5zz__evmodulez00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31643ze3z87_4456,
												(int) (((long) 0)), BgL_ohs1049z00_1787);
											BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
												(BgL_exitd1054z00_1788,
												BgL_zc3z04anonymousza31643ze3z87_4456);
											{	/* Eval/evmodule.scm 489 */
												bool_t BgL_tmp1056z00_1790;

												{	/* Eval/evmodule.scm 489 */
													obj_t BgL_arg1640z00_1791;

													{	/* Eval/evmodule.scm 489 */
														obj_t BgL_zc3z04anonymousza31642ze3z87_4455;

														BgL_zc3z04anonymousza31642ze3z87_4455 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31642ze3ze5zz__evmodulez00,
															(int) (((long) 1)), (int) (((long) 2)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31642ze3z87_4455,
															(int) (((long) 0)),
															((obj_t) BgL_res1051z00_4555));
														PROCEDURE_SET(BgL_zc3z04anonymousza31642ze3z87_4455,
															(int) (((long) 1)), BgL_an_exitd1058z00_1783);
														BgL_arg1640z00_1791 =
															MAKE_YOUNG_PAIR
															(BgL_zc3z04anonymousza31642ze3z87_4455,
															BgL_ohs1049z00_1787);
													}
													BGL_ERROR_HANDLER_SET(BgL_arg1640z00_1791);
													BUNSPEC;
												}
												{	/* Eval/evmodule.scm 489 */
													obj_t BgL_auxz00_4476;

													{	/* Eval/evmodule.scm 473 */
														obj_t BgL_arg1687z00_3699;
														obj_t BgL_arg1688z00_3700;
														obj_t BgL_arg1691z00_3701;

														{	/* Eval/evmodule.scm 473 */
															obj_t BgL__ortest_1047z00_3702;

															{	/* Eval/evmodule.scm 473 */
																obj_t BgL_vectorz00_3703;

																if (VECTORP(BgL_vz00_4556))
																	{	/* Eval/evmodule.scm 473 */
																		BgL_vectorz00_3703 = BgL_vz00_4556;
																	}
																else
																	{
																		obj_t BgL_auxz00_7541;

																		BgL_auxz00_7541 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string3188z00zz__evmodulez00,
																			BINT(((long) 18818)),
																			BGl_string3291z00zz__evmodulez00,
																			BGl_string3212z00zz__evmodulez00,
																			BgL_vz00_4556);
																		FAILURE(BgL_auxz00_7541, BFALSE, BFALSE);
																	}
																BgL__ortest_1047z00_3702 =
																	VECTOR_REF(BgL_vectorz00_3703, ((long) 4));
															}
															if (CBOOL(BgL__ortest_1047z00_3702))
																{	/* Eval/evmodule.scm 473 */
																	BgL_arg1687z00_3699 =
																		BgL__ortest_1047z00_3702;
																}
															else
																{	/* Eval/evmodule.scm 473 */
																	BgL_arg1687z00_3699 = BgL_locz00_4557;
																}
														}
														BgL_arg1688z00_3700 =
															BGl_evmodulezd2namezd2zz__evmodulez00
															(BgL_modz00_4558);
														{	/* Eval/evmodule.scm 475 */
															obj_t BgL_evalzd2globalzd2_3704;

															if (VECTORP(BgL_vz00_4556))
																{	/* Eval/evmodule.scm 475 */
																	BgL_evalzd2globalzd2_3704 = BgL_vz00_4556;
																}
															else
																{
																	obj_t BgL_auxz00_7551;

																	BgL_auxz00_7551 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string3188z00zz__evmodulez00,
																		BINT(((long) 18904)),
																		BGl_string3291z00zz__evmodulez00,
																		BGl_string3212z00zz__evmodulez00,
																		BgL_vz00_4556);
																	FAILURE(BgL_auxz00_7551, BFALSE, BFALSE);
																}
															BgL_arg1691z00_3701 =
																VECTOR_REF(BgL_evalzd2globalzd2_3704,
																((long) 1));
														}
														BgL_auxz00_4476 =
															BGl_evcompilezd2errorzd2zz__evcompilez00
															(BgL_arg1687z00_3699, BgL_arg1688z00_3700,
															BGl_string3292z00zz__evmodulez00,
															BgL_arg1691z00_3701);
													}
													CELL_SET(BgL_res1051z00_4555, BgL_auxz00_4476);
												}
												BgL_tmp1056z00_1790 = ((bool_t) 0);
												BGl_exitdzd2popzd2protectz12z12zz__bexitz00
													(BgL_exitd1054z00_1788);
												BGL_ERROR_HANDLER_SET(BgL_ohs1049z00_1787);
												BUNSPEC;
												BgL_res1060z00_1786 = BgL_tmp1056z00_1790;
								}}}}
								POP_EXIT();
								return BBOOL(BgL_res1060z00_1786);
							}
						}
					}
				}
		}

	}



/* &evmodule-check-unbound */
	obj_t BGl_z62evmodulezd2checkzd2unboundz62zz__evmodulez00(obj_t
		BgL_envz00_4458, obj_t BgL_modz00_4459, obj_t BgL_locz00_4460)
	{
		{	/* Eval/evmodule.scm 470 */
			return
				BGl_evmodulezd2checkzd2unboundz00zz__evmodulez00(BgL_modz00_4459,
				BgL_locz00_4460);
		}

	}



/* &<@anonymous:1642> */
	obj_t BGl_z62zc3z04anonymousza31642ze3ze5zz__evmodulez00(obj_t
		BgL_envz00_4461, obj_t BgL_ez00_4464)
	{
		{	/* Eval/evmodule.scm 489 */
			{	/* Eval/evmodule.scm 489 */
				obj_t BgL_res1051z00_4462;
				obj_t BgL_an_exitd1058z00_4463;

				BgL_res1051z00_4462 =
					PROCEDURE_REF(BgL_envz00_4461, (int) (((long) 0)));
				BgL_an_exitd1058z00_4463 =
					PROCEDURE_REF(BgL_envz00_4461, (int) (((long) 1)));
				CELL_SET(BgL_res1051z00_4462, BgL_ez00_4464);
				return
					BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1058z00_4463, BTRUE);
			}
		}

	}



/* &<@anonymous:1643> */
	obj_t BGl_z62zc3z04anonymousza31643ze3ze5zz__evmodulez00(obj_t
		BgL_envz00_4466)
	{
		{	/* Eval/evmodule.scm 489 */
			{
				obj_t BgL_ohs1049z00_4467;

				BgL_ohs1049z00_4467 =
					PROCEDURE_REF(BgL_envz00_4466, (int) (((long) 0)));
				BGL_ERROR_HANDLER_SET(BgL_ohs1049z00_4467);
				return BUNSPEC;
			}
		}

	}



/* &global-check-unbound */
	obj_t BGl_z62globalzd2checkzd2unboundz62zz__evmodulez00(obj_t BgL_envz00_4468,
		obj_t BgL_kz00_4471, obj_t BgL_gz00_4472)
	{
		{	/* Eval/evmodule.scm 484 */
			{	/* Eval/evmodule.scm 480 */
				obj_t BgL_lz00_4469;
				obj_t BgL_modz00_4470;

				BgL_lz00_4469 = PROCEDURE_REF(BgL_envz00_4468, (int) (((long) 0)));
				BgL_modz00_4470 = PROCEDURE_REF(BgL_envz00_4468, (int) (((long) 1)));
				{	/* Eval/evmodule.scm 480 */
					bool_t BgL_test3924z00_7574;

					{	/* Eval/evmodule.scm 230 */
						bool_t BgL_test3925z00_7575;

						if (VECTORP(BgL_gz00_4472))
							{	/* Eval/evmodule.scm 230 */
								BgL_test3925z00_7575 =
									(VECTOR_LENGTH(BgL_gz00_4472) == ((long) 5));
							}
						else
							{	/* Eval/evmodule.scm 230 */
								BgL_test3925z00_7575 = ((bool_t) 0);
							}
						if (BgL_test3925z00_7575)
							{	/* Eval/evmodule.scm 230 */
								int BgL_arg1359z00_5406;

								{	/* Eval/evmodule.scm 230 */
									int BgL_res2491z00_5407;

									{	/* Eval/evmodule.scm 230 */
										obj_t BgL_tmpz00_7580;

										{	/* Eval/evmodule.scm 230 */
											obj_t BgL_aux2962z00_5408;

											BgL_aux2962z00_5408 =
												VECTOR_REF(BgL_gz00_4472, ((long) 0));
											if (INTEGERP(BgL_aux2962z00_5408))
												{	/* Eval/evmodule.scm 230 */
													BgL_tmpz00_7580 = BgL_aux2962z00_5408;
												}
											else
												{
													obj_t BgL_auxz00_7584;

													BgL_auxz00_7584 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3188z00zz__evmodulez00,
														BINT(((long) 8966)),
														BGl_string3293z00zz__evmodulez00,
														BGl_string3214z00zz__evmodulez00,
														BgL_aux2962z00_5408);
													FAILURE(BgL_auxz00_7584, BFALSE, BFALSE);
										}}
										BgL_res2491z00_5407 = CINT(BgL_tmpz00_7580);
									}
									BgL_arg1359z00_5406 = BgL_res2491z00_5407;
								}
								BgL_test3924z00_7574 =
									((long) (BgL_arg1359z00_5406) == ((long) 6));
							}
						else
							{	/* Eval/evmodule.scm 230 */
								BgL_test3924z00_7574 = ((bool_t) 0);
							}
					}
					if (BgL_test3924z00_7574)
						{	/* Eval/evmodule.scm 480 */
							return BFALSE;
						}
					else
						{	/* Eval/evmodule.scm 481 */
							int BgL_tagz00_5409;

							{	/* Eval/evmodule.scm 481 */
								int BgL_res2493z00_5410;

								{	/* Eval/evmodule.scm 481 */
									obj_t BgL_evalzd2globalzd2_5411;

									if (VECTORP(BgL_gz00_4472))
										{	/* Eval/evmodule.scm 481 */
											BgL_evalzd2globalzd2_5411 = BgL_gz00_4472;
										}
									else
										{
											obj_t BgL_auxz00_7593;

											BgL_auxz00_7593 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3188z00zz__evmodulez00, BINT(((long) 19035)),
												BGl_string3293z00zz__evmodulez00,
												BGl_string3212z00zz__evmodulez00, BgL_gz00_4472);
											FAILURE(BgL_auxz00_7593, BFALSE, BFALSE);
										}
									{	/* Eval/evmodule.scm 481 */
										obj_t BgL_tmpz00_7597;

										{	/* Eval/evmodule.scm 481 */
											obj_t BgL_aux2966z00_5412;

											BgL_aux2966z00_5412 =
												VECTOR_REF(BgL_evalzd2globalzd2_5411, ((long) 0));
											if (INTEGERP(BgL_aux2966z00_5412))
												{	/* Eval/evmodule.scm 481 */
													BgL_tmpz00_7597 = BgL_aux2966z00_5412;
												}
											else
												{
													obj_t BgL_auxz00_7601;

													BgL_auxz00_7601 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3188z00zz__evmodulez00,
														BINT(((long) 19018)),
														BGl_string3293z00zz__evmodulez00,
														BGl_string3214z00zz__evmodulez00,
														BgL_aux2966z00_5412);
													FAILURE(BgL_auxz00_7601, BFALSE, BFALSE);
										}}
										BgL_res2493z00_5410 = CINT(BgL_tmpz00_7597);
								}}
								BgL_tagz00_5409 = BgL_res2493z00_5410;
							}
							{	/* Eval/evmodule.scm 482 */
								bool_t BgL_test3930z00_7606;

								{	/* Eval/evmodule.scm 482 */
									bool_t BgL_test3931z00_7607;

									{	/* Eval/evmodule.scm 482 */
										obj_t BgL_arg1685z00_5413;

										{	/* Eval/evmodule.scm 482 */
											obj_t BgL_vectorz00_5414;

											if (VECTORP(BgL_gz00_4472))
												{	/* Eval/evmodule.scm 482 */
													BgL_vectorz00_5414 = BgL_gz00_4472;
												}
											else
												{
													obj_t BgL_auxz00_7610;

													BgL_auxz00_7610 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3188z00zz__evmodulez00,
														BINT(((long) 19064)),
														BGl_string3293z00zz__evmodulez00,
														BGl_string3212z00zz__evmodulez00, BgL_gz00_4472);
													FAILURE(BgL_auxz00_7610, BFALSE, BFALSE);
												}
											BgL_arg1685z00_5413 =
												VECTOR_REF(BgL_vectorz00_5414, ((long) 3));
										}
										BgL_test3931z00_7607 =
											(BgL_arg1685z00_5413 == BgL_modz00_4470);
									}
									if (BgL_test3931z00_7607)
										{	/* Eval/evmodule.scm 483 */
											bool_t BgL__ortest_1048z00_5415;

											BgL__ortest_1048z00_5415 =
												((long) (BgL_tagz00_5409) == ((long) 3));
											if (BgL__ortest_1048z00_5415)
												{	/* Eval/evmodule.scm 483 */
													BgL_test3930z00_7606 = BgL__ortest_1048z00_5415;
												}
											else
												{	/* Eval/evmodule.scm 483 */
													BgL_test3930z00_7606 =
														((long) (BgL_tagz00_5409) == ((long) 4));
										}}
									else
										{	/* Eval/evmodule.scm 482 */
											BgL_test3930z00_7606 = ((bool_t) 0);
										}
								}
								if (BgL_test3930z00_7606)
									{	/* Eval/evmodule.scm 484 */
										obj_t BgL_auxz00_5416;

										BgL_auxz00_5416 =
											MAKE_YOUNG_PAIR(BgL_gz00_4472, CELL_REF(BgL_lz00_4469));
										return CELL_SET(BgL_lz00_4469, BgL_auxz00_5416);
									}
								else
									{	/* Eval/evmodule.scm 482 */
										return BFALSE;
									}
							}
						}
				}
			}
		}

	}



/* evmodule-load */
	obj_t BGl_evmodulezd2loadzd2zz__evmodulez00(obj_t BgL_modz00_97,
		obj_t BgL_identz00_98, obj_t BgL_pathsz00_99, obj_t BgL_locz00_100)
	{
		{	/* Eval/evmodule.scm 505 */
			{

				{	/* Eval/evmodule.scm 519 */
					obj_t BgL_loadz00_1856;

					{	/* Eval/evmodule.scm 519 */
						obj_t BgL__ortest_1061z00_1865;

						{	/* Eval/evmodule.scm 508 */
							obj_t BgL_procz00_1877;

							BgL_procz00_1877 = BGl_bigloozd2loadzd2modulez00zz__paramz00();
							if (PROCEDUREP(BgL_procz00_1877))
								{	/* Eval/evmodule.scm 509 */
									if (PROCEDURE_CORRECT_ARITYP(BgL_procz00_1877,
											(int) (((long) 2))))
										{	/* Eval/evmodule.scm 511 */
											BgL__ortest_1061z00_1865 = BgL_procz00_1877;
										}
									else
										{	/* Eval/evmodule.scm 511 */
											if (PROCEDURE_CORRECT_ARITYP(BgL_procz00_1877,
													(int) (((long) 1))))
												{	/* Eval/evmodule.scm 514 */
													obj_t BgL_zc3z04anonymousza31712ze3z87_4479;

													BgL_zc3z04anonymousza31712ze3z87_4479 =
														MAKE_FX_PROCEDURE
														(BGl_z62zc3z04anonymousza31712ze3ze5zz__evmodulez00,
														(int) (((long) 2)), (int) (((long) 1)));
													PROCEDURE_SET(BgL_zc3z04anonymousza31712ze3z87_4479,
														(int) (((long) 0)), BgL_procz00_1877);
													BgL__ortest_1061z00_1865 =
														BgL_zc3z04anonymousza31712ze3z87_4479;
												}
											else
												{	/* Eval/evmodule.scm 513 */
													BgL__ortest_1061z00_1865 =
														BGl_errorz00zz__errorz00
														(BGl_string3294z00zz__evmodulez00,
														BGl_string3295z00zz__evmodulez00, BgL_procz00_1877);
												}
										}
								}
							else
								{	/* Eval/evmodule.scm 509 */
									BgL__ortest_1061z00_1865 = BFALSE;
								}
						}
						if (CBOOL(BgL__ortest_1061z00_1865))
							{	/* Eval/evmodule.scm 519 */
								BgL_loadz00_1856 = BgL__ortest_1061z00_1865;
							}
						else
							{	/* Eval/evmodule.scm 519 */
								BgL_loadz00_1856 = BGl_evmodulezd2loadqzd2envz00zz__evmodulez00;
							}
					}
					{
						obj_t BgL_l1154z00_1858;

						BgL_l1154z00_1858 = BgL_pathsz00_99;
					BgL_zc3z04anonymousza31692ze3z87_1859:
						if (PAIRP(BgL_l1154z00_1858))
							{	/* Eval/evmodule.scm 520 */
								{	/* Eval/evmodule.scm 520 */
									obj_t BgL_pz00_1861;

									BgL_pz00_1861 = CAR(BgL_l1154z00_1858);
									{	/* Eval/evmodule.scm 520 */
										obj_t BgL_tmpfunz00_7646;

										{	/* Eval/evmodule.scm 520 */
											bool_t BgL_test2971z00_4865;

											BgL_test2971z00_4865 = PROCEDUREP(BgL_loadz00_1856);
											if (BgL_test2971z00_4865)
												{	/* Eval/evmodule.scm 520 */
													BgL_tmpfunz00_7646 = BgL_loadz00_1856;
												}
											else
												{
													obj_t BgL_auxz00_7649;

													BgL_auxz00_7649 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3188z00zz__evmodulez00,
														BINT(((long) 20276)),
														BGl_string3296z00zz__evmodulez00,
														BGl_string3297z00zz__evmodulez00, BgL_loadz00_1856);
													FAILURE(BgL_auxz00_7649, BFALSE, BFALSE);
										}}
										PROCEDURE_ENTRY(BgL_tmpfunz00_7646) (BgL_loadz00_1856,
											BgL_pz00_1861, BgL_modz00_97, BEOA);
								}}
								{
									obj_t BgL_l1154z00_7653;

									BgL_l1154z00_7653 = CDR(BgL_l1154z00_1858);
									BgL_l1154z00_1858 = BgL_l1154z00_7653;
									goto BgL_zc3z04anonymousza31692ze3z87_1859;
								}
							}
						else
							{	/* Eval/evmodule.scm 520 */
								if (NULLP(BgL_l1154z00_1858))
									{	/* Eval/evmodule.scm 520 */
										BTRUE;
									}
								else
									{	/* Eval/evmodule.scm 520 */
										BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00
											(BGl_string3231z00zz__evmodulez00,
											BGl_string3221z00zz__evmodulez00, BgL_l1154z00_1858,
											BGl_string3188z00zz__evmodulez00, BINT(((long) 20254)));
				}}}}
				{	/* Eval/evmodule.scm 522 */
					obj_t BgL_mz00_1866;

					{	/* Eval/evmodule.scm 522 */
						obj_t BgL_idz00_3738;

						if (SYMBOLP(BgL_identz00_98))
							{	/* Eval/evmodule.scm 522 */
								BgL_idz00_3738 = BgL_identz00_98;
							}
						else
							{
								obj_t BgL_auxz00_7661;

								BgL_auxz00_7661 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3188z00zz__evmodulez00, BINT(((long) 20332)),
									BGl_string3294z00zz__evmodulez00,
									BGl_string3192z00zz__evmodulez00, BgL_identz00_98);
								FAILURE(BgL_auxz00_7661, BFALSE, BFALSE);
							}
						if (BGl_hashtablezf3zf3zz__hashz00
							(BGl_za2moduleszd2tableza2zd2zz__evmodulez00))
							{	/* Eval/evmodule.scm 224 */
								obj_t BgL_auxz00_7667;

								{	/* Eval/evmodule.scm 224 */
									obj_t BgL_aux2974z00_4868;

									BgL_aux2974z00_4868 =
										BGl_za2moduleszd2tableza2zd2zz__evmodulez00;
									if (STRUCTP(BgL_aux2974z00_4868))
										{	/* Eval/evmodule.scm 224 */
											BgL_auxz00_7667 = BgL_aux2974z00_4868;
										}
									else
										{
											obj_t BgL_auxz00_7670;

											BgL_auxz00_7670 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3188z00zz__evmodulez00, BINT(((long) 8670)),
												BGl_string3294z00zz__evmodulez00,
												BGl_string3194z00zz__evmodulez00, BgL_aux2974z00_4868);
											FAILURE(BgL_auxz00_7670, BFALSE, BFALSE);
								}}
								BgL_mz00_1866 =
									BGl_hashtablezd2getzd2zz__hashz00(BgL_auxz00_7667,
									BgL_idz00_3738);
							}
						else
							{	/* Eval/evmodule.scm 223 */
								BgL_mz00_1866 = BFALSE;
							}
					}
					{	/* Eval/evmodule.scm 523 */
						bool_t BgL_test3944z00_7675;

						{	/* Eval/evmodule.scm 135 */
							bool_t BgL_test3945z00_7676;

							if (STRUCTP(BgL_mz00_1866))
								{	/* Eval/evmodule.scm 129 */
									obj_t BgL_tmpz00_7679;

									{	/* Eval/evmodule.scm 129 */
										obj_t BgL_res2513z00_3746;

										{	/* Eval/evmodule.scm 129 */
											obj_t BgL_aux2976z00_4870;

											BgL_aux2976z00_4870 = STRUCT_KEY(BgL_mz00_1866);
											if (SYMBOLP(BgL_aux2976z00_4870))
												{	/* Eval/evmodule.scm 129 */
													BgL_res2513z00_3746 = BgL_aux2976z00_4870;
												}
											else
												{
													obj_t BgL_auxz00_7683;

													BgL_auxz00_7683 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3188z00zz__evmodulez00,
														BINT(((long) 4439)),
														BGl_string3294z00zz__evmodulez00,
														BGl_string3192z00zz__evmodulez00,
														BgL_aux2976z00_4870);
													FAILURE(BgL_auxz00_7683, BFALSE, BFALSE);
										}}
										BgL_tmpz00_7679 = BgL_res2513z00_3746;
									}
									BgL_test3945z00_7676 =
										(BgL_tmpz00_7679 == BGl_symbol3186z00zz__evmodulez00);
								}
							else
								{	/* Eval/evmodule.scm 129 */
									BgL_test3945z00_7676 = ((bool_t) 0);
								}
							if (BgL_test3945z00_7676)
								{	/* Eval/evmodule.scm 135 */
									BgL_test3944z00_7675 =
										(STRUCT_REF(BgL_mz00_1866,
											(int) (((long) 0))) ==
										BGl_makezd2z52evmodulezd2envz52zz__evmodulez00);
								}
							else
								{	/* Eval/evmodule.scm 135 */
									BgL_test3944z00_7675 = ((bool_t) 0);
								}
						}
						if (BgL_test3944z00_7675)
							{	/* Eval/evmodule.scm 523 */
								BGl_evmodulezd2checkzd2unboundz00zz__evmodulez00(BgL_mz00_1866,
									BgL_locz00_100);
								return BgL_mz00_1866;
							}
						else
							{	/* Eval/evmodule.scm 528 */
								obj_t BgL_arg1698z00_1868;
								obj_t BgL_arg1699z00_1869;

								{	/* Eval/evmodule.scm 528 */
									obj_t BgL_arg1700z00_1870;

									{	/* Eval/evmodule.scm 528 */
										obj_t BgL_res2515z00_3751;

										if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_modz00_97))
											{	/* Eval/evmodule.scm 129 */
												obj_t BgL_sz00_3750;

												if (STRUCTP(BgL_modz00_97))
													{	/* Eval/evmodule.scm 129 */
														BgL_sz00_3750 = BgL_modz00_97;
													}
												else
													{
														obj_t BgL_auxz00_7696;

														BgL_auxz00_7696 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3188z00zz__evmodulez00,
															BINT(((long) 4439)),
															BGl_string3294z00zz__evmodulez00,
															BGl_string3194z00zz__evmodulez00, BgL_modz00_97);
														FAILURE(BgL_auxz00_7696, BFALSE, BFALSE);
													}
												{	/* Eval/evmodule.scm 129 */
													obj_t BgL_aux2980z00_4874;

													BgL_aux2980z00_4874 =
														STRUCT_REF(BgL_sz00_3750, (int) (((long) 1)));
													if (SYMBOLP(BgL_aux2980z00_4874))
														{	/* Eval/evmodule.scm 129 */
															BgL_res2515z00_3751 = BgL_aux2980z00_4874;
														}
													else
														{
															obj_t BgL_auxz00_7704;

															BgL_auxz00_7704 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3188z00zz__evmodulez00,
																BINT(((long) 4439)),
																BGl_string3294z00zz__evmodulez00,
																BGl_string3192z00zz__evmodulez00,
																BgL_aux2980z00_4874);
															FAILURE(BgL_auxz00_7704, BFALSE, BFALSE);
											}}}
										else
											{	/* Eval/evmodule.scm 143 */
												obj_t BgL_aux2982z00_4876;

												BgL_aux2982z00_4876 =
													BGl_bigloozd2typezd2errorz00zz__errorz00
													(BGl_string3193z00zz__evmodulez00,
													BGl_symbol3195z00zz__evmodulez00, BgL_modz00_97);
												if (SYMBOLP(BgL_aux2982z00_4876))
													{	/* Eval/evmodule.scm 143 */
														BgL_res2515z00_3751 = BgL_aux2982z00_4876;
													}
												else
													{
														obj_t BgL_auxz00_7711;

														BgL_auxz00_7711 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3188z00zz__evmodulez00,
															BINT(((long) 5128)),
															BGl_string3294z00zz__evmodulez00,
															BGl_string3192z00zz__evmodulez00,
															BgL_aux2982z00_4876);
														FAILURE(BgL_auxz00_7711, BFALSE, BFALSE);
											}}
										BgL_arg1700z00_1870 = BgL_res2515z00_3751;
									}
									{	/* Eval/evmodule.scm 528 */
										obj_t BgL_list1701z00_1871;

										{	/* Eval/evmodule.scm 528 */
											obj_t BgL_arg1702z00_1872;

											BgL_arg1702z00_1872 =
												MAKE_YOUNG_PAIR(BgL_identz00_98, BNIL);
											BgL_list1701z00_1871 =
												MAKE_YOUNG_PAIR(BgL_arg1700z00_1870,
												BgL_arg1702z00_1872);
										}
										BgL_arg1698z00_1868 =
											BGl_formatz00zz__r4_output_6_10_3z00
											(BGl_string3298z00zz__evmodulez00, BgL_list1701z00_1871);
								}}
								{	/* Eval/evmodule.scm 529 */
									bool_t BgL_test3952z00_7718;

									{	/* Eval/evmodule.scm 529 */
										obj_t BgL_tmpz00_7719;

										{	/* Eval/evmodule.scm 529 */
											obj_t BgL_pairz00_3752;

											if (PAIRP(BgL_pathsz00_99))
												{	/* Eval/evmodule.scm 529 */
													BgL_pairz00_3752 = BgL_pathsz00_99;
												}
											else
												{
													obj_t BgL_auxz00_7722;

													BgL_auxz00_7722 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3188z00zz__evmodulez00,
														BINT(((long) 20546)),
														BGl_string3294z00zz__evmodulez00,
														BGl_string3190z00zz__evmodulez00, BgL_pathsz00_99);
													FAILURE(BgL_auxz00_7722, BFALSE, BFALSE);
												}
											BgL_tmpz00_7719 = CDR(BgL_pairz00_3752);
										}
										BgL_test3952z00_7718 = PAIRP(BgL_tmpz00_7719);
									}
									if (BgL_test3952z00_7718)
										{	/* Eval/evmodule.scm 529 */
											BgL_arg1699z00_1869 = BgL_pathsz00_99;
										}
									else
										{	/* Eval/evmodule.scm 531 */
											obj_t BgL_pairz00_3754;

											if (PAIRP(BgL_pathsz00_99))
												{	/* Eval/evmodule.scm 531 */
													BgL_pairz00_3754 = BgL_pathsz00_99;
												}
											else
												{
													obj_t BgL_auxz00_7730;

													BgL_auxz00_7730 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3188z00zz__evmodulez00,
														BINT(((long) 20571)),
														BGl_string3294z00zz__evmodulez00,
														BGl_string3190z00zz__evmodulez00, BgL_pathsz00_99);
													FAILURE(BgL_auxz00_7730, BFALSE, BFALSE);
												}
											BgL_arg1699z00_1869 = CAR(BgL_pairz00_3754);
								}}
								return
									BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_100,
									BGl_string3224z00zz__evmodulez00, BgL_arg1698z00_1868,
									BgL_arg1699z00_1869);
							}
					}
				}
			}
		}

	}



/* &<@anonymous:1712> */
	obj_t BGl_z62zc3z04anonymousza31712ze3ze5zz__evmodulez00(obj_t
		BgL_envz00_4480, obj_t BgL_pathz00_4482, obj_t BgL__z00_4483)
	{
		{	/* Eval/evmodule.scm 514 */
			{	/* Eval/evmodule.scm 514 */
				obj_t BgL_procz00_4481;

				BgL_procz00_4481 = PROCEDURE_REF(BgL_envz00_4480, (int) (((long) 0)));
				{	/* Eval/evmodule.scm 514 */
					obj_t BgL_tmpfunz00_7741;

					{	/* Eval/evmodule.scm 514 */
						bool_t BgL_test2989z00_5417;

						BgL_test2989z00_5417 = PROCEDUREP(BgL_procz00_4481);
						if (BgL_test2989z00_5417)
							{	/* Eval/evmodule.scm 514 */
								BgL_tmpfunz00_7741 = BgL_procz00_4481;
							}
						else
							{
								obj_t BgL_auxz00_7744;

								BgL_auxz00_7744 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3188z00zz__evmodulez00, BINT(((long) 20092)),
									BGl_string3299z00zz__evmodulez00,
									BGl_string3297z00zz__evmodulez00, BgL_procz00_4481);
								FAILURE(BgL_auxz00_7744, BFALSE, BFALSE);
					}}
					return
						PROCEDURE_ENTRY(BgL_tmpfunz00_7741) (BgL_procz00_4481,
						BgL_pathz00_4482, BEOA);
				}
			}
		}

	}



/* &evmodule-loadq */
	obj_t BGl_z62evmodulezd2loadqzb0zz__evmodulez00(obj_t BgL_envz00_4484,
		obj_t BgL_filez00_4485, obj_t BgL_modz00_4486)
	{
		{	/* Eval/evmodule.scm 541 */
			{	/* Eval/evmodule.scm 542 */
				obj_t BgL_pathz00_5418;

				{	/* Eval/evmodule.scm 542 */
					obj_t BgL_auxz00_7748;

					if (STRINGP(BgL_filez00_4485))
						{	/* Eval/evmodule.scm 542 */
							BgL_auxz00_7748 = BgL_filez00_4485;
						}
					else
						{
							obj_t BgL_auxz00_7751;

							BgL_auxz00_7751 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3188z00zz__evmodulez00, BINT(((long) 21136)),
								BGl_string3300z00zz__evmodulez00,
								BGl_string3202z00zz__evmodulez00, BgL_filez00_4485);
							FAILURE(BgL_auxz00_7751, BFALSE, BFALSE);
						}
					BgL_pathz00_5418 =
						BGl_filezd2namezd2unixzd2canonicaliza7ez75zz__osz00
						(BgL_auxz00_7748);
				}
				{	/* Eval/evmodule.scm 542 */
					obj_t BgL_cvz00_5419;

					{	/* Eval/evmodule.scm 543 */
						obj_t BgL_arg1719z00_5420;

						BgL_arg1719z00_5420 =
							BGl_gensymz00zz__r4_symbols_6_4z00
							(BGl_symbol3301z00zz__evmodulez00);
						{	/* Eval/evmodule.scm 543 */
							obj_t BgL_res2517z00_5421;

							BgL_res2517z00_5421 = bgl_make_condvar(BgL_arg1719z00_5420);
							BgL_cvz00_5419 = BgL_res2517z00_5421;
					}}
					{	/* Eval/evmodule.scm 543 */
						obj_t BgL_cellz00_5422;

						BgL_cellz00_5422 =
							MAKE_YOUNG_PAIR(BgL_pathz00_5418, BgL_cvz00_5419);
						{	/* Eval/evmodule.scm 544 */

							{

							BgL_loopz00_5423:
								{	/* Eval/evmodule.scm 546 */
									obj_t BgL_top3958z00_7760;

									BgL_top3958z00_7760 = BGL_EXITD_TOP_AS_OBJ();
									BGL_MUTEX_LOCK(BGl_za2loadqzd2mutexza2zd2zz__evmodulez00);
									BGL_EXITD_PUSH_PROTECT(BgL_top3958z00_7760,
										BGl_za2loadqzd2mutexza2zd2zz__evmodulez00);
									BUNSPEC;
									{	/* Eval/evmodule.scm 546 */
										obj_t BgL_tmp3957z00_7759;

										{	/* Eval/evmodule.scm 547 */
											obj_t BgL_cz00_5424;

											BgL_cz00_5424 =
												BGl_assocz00zz__r4_pairs_and_lists_6_3z00
												(BgL_pathz00_5418,
												BGl_za2loadingzd2listza2zd2zz__evmodulez00);
											if (PAIRP(BgL_cz00_5424))
												{	/* Eval/evmodule.scm 549 */
													{	/* Eval/evmodule.scm 553 */
														obj_t BgL_arg1716z00_5425;

														BgL_arg1716z00_5425 = CDR(BgL_cz00_5424);
														{	/* Eval/evmodule.scm 553 */
															obj_t BgL_g1219z00_5426;

															BgL_g1219z00_5426 =
																BGl_za2loadqzd2mutexza2zd2zz__evmodulez00;
															{	/* Eval/evmodule.scm 553 */

																{	/* Eval/evmodule.scm 553 */
																	bool_t BgL_res2520z00_5427;

																	{	/* Eval/evmodule.scm 553 */
																		obj_t BgL_cz00_5428;

																		if (BGL_CONDVARP(BgL_arg1716z00_5425))
																			{	/* Eval/evmodule.scm 553 */
																				BgL_cz00_5428 = BgL_arg1716z00_5425;
																			}
																		else
																			{
																				obj_t BgL_auxz00_7770;

																				BgL_auxz00_7770 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string3302z00zz__evmodulez00,
																					BINT(((long) 8543)),
																					BGl_string3303z00zz__evmodulez00,
																					BGl_string3304z00zz__evmodulez00,
																					BgL_arg1716z00_5425);
																				FAILURE(BgL_auxz00_7770, BFALSE,
																					BFALSE);
																			}
																		BgL_res2520z00_5427 =
																			BGL_CONDVAR_WAIT(BgL_cz00_5428,
																			BgL_g1219z00_5426);
																	} BgL_res2520z00_5427;
													}}}}
													goto BgL_loopz00_5423;
												}
											else
												{	/* Eval/evmodule.scm 549 */
													BgL_tmp3957z00_7759 =
														(BGl_za2loadingzd2listza2zd2zz__evmodulez00 =
														MAKE_YOUNG_PAIR(BgL_cellz00_5422,
															BGl_za2loadingzd2listza2zd2zz__evmodulez00),
														BUNSPEC);
												}
										}
										BGL_EXITD_POP_PROTECT(BgL_top3958z00_7760);
										BUNSPEC;
										BGL_MUTEX_UNLOCK(BGl_za2loadqzd2mutexza2zd2zz__evmodulez00);
										BgL_tmp3957z00_7759;
									}
								}
							}
							{	/* Eval/evmodule.scm 557 */
								obj_t BgL_exitd1062z00_5429;

								BgL_exitd1062z00_5429 = BGL_EXITD_TOP_AS_OBJ();
								{	/* Eval/evmodule.scm 559 */
									obj_t BgL_zc3z04anonymousza31717ze3z87_5430;

									BgL_zc3z04anonymousza31717ze3z87_5430 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31717ze3ze5zz__evmodulez00,
										(int) (((long) 0)), (int) (((long) 2)));
									PROCEDURE_SET(BgL_zc3z04anonymousza31717ze3z87_5430,
										(int) (((long) 0)), BgL_cellz00_5422);
									PROCEDURE_SET(BgL_zc3z04anonymousza31717ze3z87_5430,
										(int) (((long) 1)), BgL_cvz00_5419);
									BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
										(BgL_exitd1062z00_5429,
										BgL_zc3z04anonymousza31717ze3z87_5430);
									{	/* Eval/evmodule.scm 558 */
										obj_t BgL_tmp1064z00_5431;

										{	/* Eval/evmodule.scm 559 */
											obj_t BgL_envz00_5432;

											BgL_envz00_5432 =
												BGl_defaultzd2environmentzd2zz__evalz00();
											{	/* Eval/evmodule.scm 559 */

												BgL_tmp1064z00_5431 =
													BGl_loadqz00zz__evalz00(BgL_pathz00_5418,
													BgL_envz00_5432);
										}}
										BGl_exitdzd2popzd2protectz12z12zz__bexitz00
											(BgL_exitd1062z00_5429);
										BGl_z62zc3z04anonymousza31717ze3ze5zz__evmodulez00
											(BgL_zc3z04anonymousza31717ze3z87_5430);
										return BgL_tmp1064z00_5431;
									}
								}
							}
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1717> */
	obj_t BGl_z62zc3z04anonymousza31717ze3ze5zz__evmodulez00(obj_t
		BgL_envz00_4488)
	{
		{	/* Eval/evmodule.scm 557 */
			{	/* Eval/evmodule.scm 559 */
				obj_t BgL_cellz00_4489;
				obj_t BgL_cvz00_4490;

				BgL_cellz00_4489 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4488, (int) (((long) 0))));
				BgL_cvz00_4490 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4488, (int) (((long) 1))));
				{	/* Eval/evmodule.scm 559 */
					bool_t BgL_tmpz00_7797;

					{	/* Eval/evmodule.scm 559 */
						obj_t BgL_top3962z00_7799;

						BgL_top3962z00_7799 = BGL_EXITD_TOP_AS_OBJ();
						BGL_MUTEX_LOCK(BGl_za2loadqzd2mutexza2zd2zz__evmodulez00);
						BGL_EXITD_PUSH_PROTECT(BgL_top3962z00_7799,
							BGl_za2loadqzd2mutexza2zd2zz__evmodulez00);
						BUNSPEC;
						{	/* Eval/evmodule.scm 559 */
							bool_t BgL_tmp3961z00_7798;

							BGl_za2loadingzd2listza2zd2zz__evmodulez00 =
								bgl_remq_bang(BgL_cellz00_4489,
								BGl_za2loadingzd2listza2zd2zz__evmodulez00);
							{	/* Eval/evmodule.scm 561 */
								bool_t BgL_res2521z00_5433;

								BgL_res2521z00_5433 = BGL_CONDVAR_SIGNAL(BgL_cvz00_4490);
								BgL_tmp3961z00_7798 = BgL_res2521z00_5433;
							}
							BGL_EXITD_POP_PROTECT(BgL_top3962z00_7799);
							BUNSPEC;
							BGL_MUTEX_UNLOCK(BGl_za2loadqzd2mutexza2zd2zz__evmodulez00);
							BgL_tmpz00_7797 = BgL_tmp3961z00_7798;
					}}
					return BBOOL(BgL_tmpz00_7797);
				}
			}
		}

	}



/* evmodule-import! */
	obj_t BGl_evmodulezd2importz12zc0zz__evmodulez00(obj_t BgL_modz00_103,
		obj_t BgL_identz00_104, obj_t BgL_pathz00_105, obj_t BgL_setz00_106,
		obj_t BgL_abasez00_107, obj_t BgL_locz00_108)
	{
		{	/* Eval/evmodule.scm 566 */
			{	/* Eval/evmodule.scm 588 */
				obj_t BgL_mod2z00_1908;

				{	/* Eval/evmodule.scm 588 */
					obj_t BgL_idz00_3778;

					if (SYMBOLP(BgL_identz00_104))
						{	/* Eval/evmodule.scm 588 */
							BgL_idz00_3778 = BgL_identz00_104;
						}
					else
						{
							obj_t BgL_auxz00_7810;

							BgL_auxz00_7810 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3188z00zz__evmodulez00, BINT(((long) 22694)),
								BGl_string3305z00zz__evmodulez00,
								BGl_string3192z00zz__evmodulez00, BgL_identz00_104);
							FAILURE(BgL_auxz00_7810, BFALSE, BFALSE);
						}
					if (BGl_hashtablezf3zf3zz__hashz00
						(BGl_za2moduleszd2tableza2zd2zz__evmodulez00))
						{	/* Eval/evmodule.scm 224 */
							obj_t BgL_auxz00_7816;

							{	/* Eval/evmodule.scm 224 */
								obj_t BgL_aux2996z00_4890;

								BgL_aux2996z00_4890 =
									BGl_za2moduleszd2tableza2zd2zz__evmodulez00;
								if (STRUCTP(BgL_aux2996z00_4890))
									{	/* Eval/evmodule.scm 224 */
										BgL_auxz00_7816 = BgL_aux2996z00_4890;
									}
								else
									{
										obj_t BgL_auxz00_7819;

										BgL_auxz00_7819 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3188z00zz__evmodulez00, BINT(((long) 8670)),
											BGl_string3305z00zz__evmodulez00,
											BGl_string3194z00zz__evmodulez00, BgL_aux2996z00_4890);
										FAILURE(BgL_auxz00_7819, BFALSE, BFALSE);
							}}
							BgL_mod2z00_1908 =
								BGl_hashtablezd2getzd2zz__hashz00(BgL_auxz00_7816,
								BgL_idz00_3778);
						}
					else
						{	/* Eval/evmodule.scm 223 */
							BgL_mod2z00_1908 = BFALSE;
						}
				}
				{	/* Eval/evmodule.scm 590 */
					bool_t BgL_test3966z00_7824;

					{	/* Eval/evmodule.scm 135 */
						bool_t BgL_test3967z00_7825;

						if (STRUCTP(BgL_mod2z00_1908))
							{	/* Eval/evmodule.scm 129 */
								obj_t BgL_tmpz00_7828;

								{	/* Eval/evmodule.scm 129 */
									obj_t BgL_res2526z00_3786;

									{	/* Eval/evmodule.scm 129 */
										obj_t BgL_aux2998z00_4892;

										BgL_aux2998z00_4892 = STRUCT_KEY(BgL_mod2z00_1908);
										if (SYMBOLP(BgL_aux2998z00_4892))
											{	/* Eval/evmodule.scm 129 */
												BgL_res2526z00_3786 = BgL_aux2998z00_4892;
											}
										else
											{
												obj_t BgL_auxz00_7832;

												BgL_auxz00_7832 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3188z00zz__evmodulez00,
													BINT(((long) 4439)), BGl_string3305z00zz__evmodulez00,
													BGl_string3192z00zz__evmodulez00,
													BgL_aux2998z00_4892);
												FAILURE(BgL_auxz00_7832, BFALSE, BFALSE);
									}}
									BgL_tmpz00_7828 = BgL_res2526z00_3786;
								}
								BgL_test3967z00_7825 =
									(BgL_tmpz00_7828 == BGl_symbol3186z00zz__evmodulez00);
							}
						else
							{	/* Eval/evmodule.scm 129 */
								BgL_test3967z00_7825 = ((bool_t) 0);
							}
						if (BgL_test3967z00_7825)
							{	/* Eval/evmodule.scm 135 */
								BgL_test3966z00_7824 =
									(STRUCT_REF(BgL_mod2z00_1908,
										(int) (((long) 0))) ==
									BGl_makezd2z52evmodulezd2envz52zz__evmodulez00);
							}
						else
							{	/* Eval/evmodule.scm 135 */
								BgL_test3966z00_7824 = ((bool_t) 0);
							}
					}
					if (BgL_test3966z00_7824)
						{	/* Eval/evmodule.scm 590 */
							return
								BGl_z62importzd2modulezb0zz__evmodulez00(BgL_setz00_106,
								BgL_locz00_108, BgL_modz00_103, BgL_mod2z00_1908);
						}
					else
						{	/* Eval/evmodule.scm 590 */
							if (PAIRP(BgL_pathz00_105))
								{	/* Eval/evmodule.scm 597 */
									bool_t BgL_test3971z00_7843;

									{	/* Eval/evmodule.scm 597 */
										int BgL_arg1727z00_1916;

										BgL_arg1727z00_1916 =
											BGl_bigloozd2debugzd2modulez00zz__paramz00();
										BgL_test3971z00_7843 =
											((long) (BgL_arg1727z00_1916) > ((long) 0));
									}
									if (BgL_test3971z00_7843)
										{	/* Eval/evmodule.scm 601 */
											obj_t BgL_zc3z04anonymousza31726ze3z87_4495;

											BgL_zc3z04anonymousza31726ze3z87_4495 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31726ze3ze5zz__evmodulez00,
												(int) (((long) 0)), (int) (((long) 5)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31726ze3z87_4495,
												(int) (((long) 0)), BgL_setz00_106);
											PROCEDURE_SET(BgL_zc3z04anonymousza31726ze3z87_4495,
												(int) (((long) 1)), BgL_modz00_103);
											PROCEDURE_SET(BgL_zc3z04anonymousza31726ze3z87_4495,
												(int) (((long) 2)), BgL_identz00_104);
											PROCEDURE_SET(BgL_zc3z04anonymousza31726ze3z87_4495,
												(int) (((long) 3)), BgL_pathz00_105);
											PROCEDURE_SET(BgL_zc3z04anonymousza31726ze3z87_4495,
												(int) (((long) 4)), BgL_locz00_108);
											return
												BGl_z52withzd2tracez80zz__tracez00
												(BGl_symbol3195z00zz__evmodulez00, BgL_identz00_104,
												BgL_zc3z04anonymousza31726ze3z87_4495);
										}
									else
										{	/* Eval/evmodule.scm 597 */
											return
												BGl_z62loadzd2modulezb0zz__evmodulez00(BgL_locz00_108,
												BgL_pathz00_105, BgL_identz00_104, BgL_modz00_103,
												BgL_setz00_106);
										}
								}
							else
								{	/* Eval/evmodule.scm 594 */
									obj_t BgL_arg1728z00_1917;

									{	/* Eval/evmodule.scm 594 */
										obj_t BgL_list1729z00_1918;

										BgL_list1729z00_1918 =
											MAKE_YOUNG_PAIR(BgL_abasez00_107, BNIL);
										BgL_arg1728z00_1917 =
											BGl_formatz00zz__r4_output_6_10_3z00
											(BGl_string3306z00zz__evmodulez00, BgL_list1729z00_1918);
									}
									return
										BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_108,
										BGl_string3224z00zz__evmodulez00, BgL_arg1728z00_1917,
										BgL_identz00_104);
								}
						}
				}
			}
		}

	}



/* &load-module */
	obj_t BGl_z62loadzd2modulezb0zz__evmodulez00(obj_t BgL_locz00_4500,
		obj_t BgL_pathz00_4499, obj_t BgL_identz00_4498, obj_t BgL_modz00_4497,
		obj_t BgL_setz00_4496)
	{
		{	/* Eval/evmodule.scm 586 */
			{	/* Eval/evmodule.scm 584 */
				obj_t BgL_exitd1065z00_1948;

				BgL_exitd1065z00_1948 = BGL_EXITD_TOP_AS_OBJ();
				{	/* Eval/evmodule.scm 586 */
					obj_t BgL_zc3z04anonymousza31747ze3z87_4493;

					BgL_zc3z04anonymousza31747ze3z87_4493 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31747ze3ze5zz__evmodulez00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31747ze3z87_4493,
						(int) (((long) 0)), BgL_modz00_4497);
					BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1065z00_1948,
						BgL_zc3z04anonymousza31747ze3z87_4493);
					{	/* Eval/evmodule.scm 585 */
						obj_t BgL_tmp1067z00_1950;

						BgL_tmp1067z00_1950 =
							BGl_z62importzd2modulezb0zz__evmodulez00(BgL_setz00_4496,
							BgL_locz00_4500, BgL_modz00_4497,
							BGl_evmodulezd2loadzd2zz__evmodulez00(BgL_modz00_4497,
								BgL_identz00_4498, BgL_pathz00_4499, BgL_locz00_4500));
						BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1065z00_1948);
						BGL_MODULE_SET(BgL_modz00_4497);
						return BgL_tmp1067z00_1950;
					}
				}
			}
		}

	}



/* &import-module */
	obj_t BGl_z62importzd2modulezb0zz__evmodulez00(obj_t BgL_setz00_4503,
		obj_t BgL_locz00_4502, obj_t BgL_modz00_4501, obj_t BgL_mod2z00_1922)
	{
		{	/* Eval/evmodule.scm 576 */
			{	/* Eval/evmodule.scm 573 */
				obj_t BgL_tz00_1924;

				BgL_tz00_1924 = STRUCT_REF(BgL_modz00_4501, (int) (((long) 5)));
				{	/* Eval/evmodule.scm 574 */
					obj_t BgL_arg1732z00_1925;

					{	/* Eval/evmodule.scm 129 */
						obj_t BgL_sz00_3768;

						if (STRUCTP(BgL_mod2z00_1922))
							{	/* Eval/evmodule.scm 129 */
								BgL_sz00_3768 = BgL_mod2z00_1922;
							}
						else
							{
								obj_t BgL_auxz00_7880;

								BgL_auxz00_7880 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3188z00zz__evmodulez00, BINT(((long) 4439)),
									BGl_string3307z00zz__evmodulez00,
									BGl_string3194z00zz__evmodulez00, BgL_mod2z00_1922);
								FAILURE(BgL_auxz00_7880, BFALSE, BFALSE);
							}
						BgL_arg1732z00_1925 = STRUCT_REF(BgL_sz00_3768, (int) (((long) 5)));
					}
					{	/* Eval/evmodule.scm 576 */
						obj_t BgL_zc3z04anonymousza31734ze3z87_4491;

						BgL_zc3z04anonymousza31734ze3z87_4491 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31734ze3ze5zz__evmodulez00,
							(int) (((long) 2)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31734ze3z87_4491,
							(int) (((long) 0)), BgL_tz00_1924);
						{	/* Eval/evmodule.scm 574 */
							obj_t BgL_auxz00_7891;

							if (STRUCTP(BgL_arg1732z00_1925))
								{	/* Eval/evmodule.scm 574 */
									BgL_auxz00_7891 = BgL_arg1732z00_1925;
								}
							else
								{
									obj_t BgL_auxz00_7894;

									BgL_auxz00_7894 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3188z00zz__evmodulez00, BINT(((long) 22280)),
										BGl_string3307z00zz__evmodulez00,
										BGl_string3194z00zz__evmodulez00, BgL_arg1732z00_1925);
									FAILURE(BgL_auxz00_7894, BFALSE, BFALSE);
								}
							BGl_hashtablezd2forzd2eachz00zz__hashz00(BgL_auxz00_7891,
								BgL_zc3z04anonymousza31734ze3z87_4491);
			}}}}
			{	/* Eval/evmodule.scm 578 */
				obj_t BgL_g1158z00_1931;

				{	/* Eval/evmodule.scm 129 */
					obj_t BgL_sz00_3769;

					if (STRUCTP(BgL_mod2z00_1922))
						{	/* Eval/evmodule.scm 129 */
							BgL_sz00_3769 = BgL_mod2z00_1922;
						}
					else
						{
							obj_t BgL_auxz00_7901;

							BgL_auxz00_7901 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3188z00zz__evmodulez00, BINT(((long) 4439)),
								BGl_string3307z00zz__evmodulez00,
								BGl_string3194z00zz__evmodulez00, BgL_mod2z00_1922);
							FAILURE(BgL_auxz00_7901, BFALSE, BFALSE);
						}
					BgL_g1158z00_1931 = STRUCT_REF(BgL_sz00_3769, (int) (((long) 4)));
				}
				{
					obj_t BgL_l1156z00_1933;

					BgL_l1156z00_1933 = BgL_g1158z00_1931;
				BgL_zc3z04anonymousza31735ze3z87_1934:
					if (PAIRP(BgL_l1156z00_1933))
						{	/* Eval/evmodule.scm 581 */
							{	/* Eval/evmodule.scm 579 */
								obj_t BgL_bz00_1936;

								BgL_bz00_1936 = CAR(BgL_l1156z00_1933);
								{	/* Eval/evmodule.scm 579 */
									bool_t BgL_test3976z00_7910;

									if (NULLP(BgL_setz00_4503))
										{	/* Eval/evmodule.scm 579 */
											BgL_test3976z00_7910 = ((bool_t) 1);
										}
									else
										{	/* Eval/evmodule.scm 579 */
											obj_t BgL_tmpz00_7913;

											{	/* Eval/evmodule.scm 579 */
												obj_t BgL_auxz00_7914;

												{	/* Eval/evmodule.scm 579 */
													obj_t BgL_pairz00_3773;

													if (PAIRP(BgL_bz00_1936))
														{	/* Eval/evmodule.scm 579 */
															BgL_pairz00_3773 = BgL_bz00_1936;
														}
													else
														{
															obj_t BgL_auxz00_7917;

															BgL_auxz00_7917 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3188z00zz__evmodulez00,
																BINT(((long) 22424)),
																BGl_string3308z00zz__evmodulez00,
																BGl_string3190z00zz__evmodulez00,
																BgL_bz00_1936);
															FAILURE(BgL_auxz00_7917, BFALSE, BFALSE);
														}
													BgL_auxz00_7914 = CAR(BgL_pairz00_3773);
												}
												BgL_tmpz00_7913 =
													BGl_memqz00zz__r4_pairs_and_lists_6_3z00
													(BgL_auxz00_7914, BgL_setz00_4503);
											}
											BgL_test3976z00_7910 = CBOOL(BgL_tmpz00_7913);
										}
									if (BgL_test3976z00_7910)
										{	/* Eval/evmodule.scm 580 */
											obj_t BgL_arg1740z00_1940;
											obj_t BgL_arg1741z00_1941;

											{	/* Eval/evmodule.scm 580 */
												obj_t BgL_pairz00_3774;

												if (PAIRP(BgL_bz00_1936))
													{	/* Eval/evmodule.scm 580 */
														BgL_pairz00_3774 = BgL_bz00_1936;
													}
												else
													{
														obj_t BgL_auxz00_7926;

														BgL_auxz00_7926 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3188z00zz__evmodulez00,
															BINT(((long) 22476)),
															BGl_string3308z00zz__evmodulez00,
															BGl_string3190z00zz__evmodulez00, BgL_bz00_1936);
														FAILURE(BgL_auxz00_7926, BFALSE, BFALSE);
													}
												BgL_arg1740z00_1940 = CAR(BgL_pairz00_3774);
											}
											{	/* Eval/evmodule.scm 580 */
												obj_t BgL_pairz00_3775;

												if (PAIRP(BgL_bz00_1936))
													{	/* Eval/evmodule.scm 580 */
														BgL_pairz00_3775 = BgL_bz00_1936;
													}
												else
													{
														obj_t BgL_auxz00_7933;

														BgL_auxz00_7933 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3188z00zz__evmodulez00,
															BINT(((long) 22489)),
															BGl_string3308z00zz__evmodulez00,
															BGl_string3190z00zz__evmodulez00, BgL_bz00_1936);
														FAILURE(BgL_auxz00_7933, BFALSE, BFALSE);
													}
												BgL_arg1741z00_1941 = CAR(BgL_pairz00_3775);
											}
											BGl_evmodulezd2importzd2bindingz12z12zz__evmodulez00
												(BgL_modz00_4501, BgL_arg1740z00_1940, BgL_mod2z00_1922,
												BgL_arg1741z00_1941, BgL_locz00_4502);
										}
									else
										{	/* Eval/evmodule.scm 579 */
											BFALSE;
										}
								}
							}
							{
								obj_t BgL_l1156z00_7939;

								BgL_l1156z00_7939 = CDR(BgL_l1156z00_1933);
								BgL_l1156z00_1933 = BgL_l1156z00_7939;
								goto BgL_zc3z04anonymousza31735ze3z87_1934;
							}
						}
					else
						{	/* Eval/evmodule.scm 581 */
							if (NULLP(BgL_l1156z00_1933))
								{	/* Eval/evmodule.scm 581 */
									return BTRUE;
								}
							else
								{	/* Eval/evmodule.scm 581 */
									return
										BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00
										(BGl_string3231z00zz__evmodulez00,
										BGl_string3221z00zz__evmodulez00, BgL_l1156z00_1933,
										BGl_string3188z00zz__evmodulez00, BINT(((long) 22364)));
		}}}}}

	}



/* &<@anonymous:1726> */
	obj_t BGl_z62zc3z04anonymousza31726ze3ze5zz__evmodulez00(obj_t
		BgL_envz00_4504)
	{
		{	/* Eval/evmodule.scm 599 */
			{	/* Eval/evmodule.scm 601 */
				obj_t BgL_setz00_4505;
				obj_t BgL_modz00_4506;
				obj_t BgL_identz00_4507;
				obj_t BgL_pathz00_4508;
				obj_t BgL_locz00_4509;

				BgL_setz00_4505 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4504, (int) (((long) 0))));
				BgL_modz00_4506 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4504, (int) (((long) 1))));
				BgL_identz00_4507 = PROCEDURE_REF(BgL_envz00_4504, (int) (((long) 2)));
				BgL_pathz00_4508 = PROCEDURE_REF(BgL_envz00_4504, (int) (((long) 3)));
				BgL_locz00_4509 = PROCEDURE_REF(BgL_envz00_4504, (int) (((long) 4)));
				return
					BGl_z62loadzd2modulezb0zz__evmodulez00(BgL_locz00_4509,
					BgL_pathz00_4508, BgL_identz00_4507, BgL_modz00_4506,
					BgL_setz00_4505);
			}
		}

	}



/* &<@anonymous:1747> */
	obj_t BGl_z62zc3z04anonymousza31747ze3ze5zz__evmodulez00(obj_t
		BgL_envz00_4510)
	{
		{	/* Eval/evmodule.scm 584 */
			{	/* Eval/evmodule.scm 586 */
				obj_t BgL_modz00_4511;

				BgL_modz00_4511 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4510, (int) (((long) 0))));
				return BGL_MODULE_SET(BgL_modz00_4511);
			}
		}

	}



/* &<@anonymous:1734> */
	obj_t BGl_z62zc3z04anonymousza31734ze3ze5zz__evmodulez00(obj_t
		BgL_envz00_4512, obj_t BgL_kz00_4514, obj_t BgL_vz00_4515)
	{
		{	/* Eval/evmodule.scm 575 */
			{	/* Eval/evmodule.scm 576 */
				obj_t BgL_tz00_4513;

				BgL_tz00_4513 = PROCEDURE_REF(BgL_envz00_4512, (int) (((long) 0)));
				{	/* Eval/evmodule.scm 576 */
					obj_t BgL_auxz00_7964;

					if (STRUCTP(BgL_tz00_4513))
						{	/* Eval/evmodule.scm 576 */
							BgL_auxz00_7964 = BgL_tz00_4513;
						}
					else
						{
							obj_t BgL_auxz00_7967;

							BgL_auxz00_7967 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3188z00zz__evmodulez00, BINT(((long) 22324)),
								BGl_string3309z00zz__evmodulez00,
								BGl_string3194z00zz__evmodulez00, BgL_tz00_4513);
							FAILURE(BgL_auxz00_7967, BFALSE, BFALSE);
						}
					return
						BGl_hashtablezd2putz12zc0zz__hashz00(BgL_auxz00_7964, BgL_kz00_4514,
						BgL_vz00_4515);
				}
			}
		}

	}



/* location-dir */
	obj_t BGl_locationzd2dirzd2zz__evmodulez00(obj_t BgL_locz00_109)
	{
		{	/* Eval/evmodule.scm 607 */
			if (PAIRP(BgL_locz00_109))
				{	/* Eval/evmodule.scm 608 */
					obj_t BgL_cdrzd2869zd2_1962;

					BgL_cdrzd2869zd2_1962 = CDR(BgL_locz00_109);
					if ((CAR(BgL_locz00_109) == BGl_symbol3310z00zz__evmodulez00))
						{	/* Eval/evmodule.scm 608 */
							if (PAIRP(BgL_cdrzd2869zd2_1962))
								{	/* Eval/evmodule.scm 608 */
									obj_t BgL_arg1754z00_1966;

									BgL_arg1754z00_1966 = CAR(BgL_cdrzd2869zd2_1962);
									{	/* Eval/evmodule.scm 609 */
										obj_t BgL_auxz00_7981;

										if (STRINGP(BgL_arg1754z00_1966))
											{	/* Eval/evmodule.scm 609 */
												BgL_auxz00_7981 = BgL_arg1754z00_1966;
											}
										else
											{
												obj_t BgL_auxz00_7984;

												BgL_auxz00_7984 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3188z00zz__evmodulez00,
													BINT(((long) 23350)),
													BGl_string3312z00zz__evmodulez00,
													BGl_string3202z00zz__evmodulez00,
													BgL_arg1754z00_1966);
												FAILURE(BgL_auxz00_7984, BFALSE, BFALSE);
											}
										return BGl_dirnamez00zz__osz00(BgL_auxz00_7981);
									}
								}
							else
								{	/* Eval/evmodule.scm 608 */
									return BFALSE;
								}
						}
					else
						{	/* Eval/evmodule.scm 608 */
							return BFALSE;
						}
				}
			else
				{	/* Eval/evmodule.scm 608 */
					return BFALSE;
				}
		}

	}



/* evmodule-import */
	obj_t BGl_evmodulezd2importzd2zz__evmodulez00(obj_t BgL_modz00_110,
		obj_t BgL_clausez00_111, obj_t BgL_locz00_112)
	{
		{	/* Eval/evmodule.scm 615 */
			{
				obj_t BgL_sz00_2029;
				obj_t BgL_clausez00_2012;
				obj_t BgL_clausez00_1992;
				obj_t BgL_clausez00_1985;

				if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_clausez00_111))
					{	/* Eval/evmodule.scm 674 */
						obj_t BgL_g1165z00_1974;

						{	/* Eval/evmodule.scm 674 */
							obj_t BgL_pairz00_3845;

							if (PAIRP(BgL_clausez00_111))
								{	/* Eval/evmodule.scm 674 */
									BgL_pairz00_3845 = BgL_clausez00_111;
								}
							else
								{
									obj_t BgL_auxz00_7993;

									BgL_auxz00_7993 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3188z00zz__evmodulez00, BINT(((long) 25378)),
										BGl_string3318z00zz__evmodulez00,
										BGl_string3190z00zz__evmodulez00, BgL_clausez00_111);
									FAILURE(BgL_auxz00_7993, BFALSE, BFALSE);
								}
							BgL_g1165z00_1974 = CDR(BgL_pairz00_3845);
						}
						{
							obj_t BgL_l1163z00_1976;

							BgL_l1163z00_1976 = BgL_g1165z00_1974;
						BgL_zc3z04anonymousza31757ze3z87_1977:
							if (PAIRP(BgL_l1163z00_1976))
								{	/* Eval/evmodule.scm 674 */
									BgL_sz00_2029 = CAR(BgL_l1163z00_1976);
									{	/* Eval/evmodule.scm 647 */
										obj_t BgL_locz00_2031;
										obj_t BgL_abasez00_2032;

										{	/* Eval/evmodule.scm 647 */
											obj_t BgL__ortest_1070z00_2082;

											BgL__ortest_1070z00_2082 =
												BGl_getzd2sourcezd2locationz00zz__readerz00
												(BgL_sz00_2029);
											if (CBOOL(BgL__ortest_1070z00_2082))
												{	/* Eval/evmodule.scm 647 */
													BgL_locz00_2031 = BgL__ortest_1070z00_2082;
												}
											else
												{	/* Eval/evmodule.scm 647 */
													BgL_locz00_2031 = BgL_locz00_112;
												}
										}
										BgL_abasez00_2032 =
											BGl_locationzd2dirzd2zz__evmodulez00(BgL_locz00_112);
										if (SYMBOLP(BgL_sz00_2029))
											{	/* Eval/evmodule.scm 651 */
												obj_t BgL_pathz00_2034;

												{	/* Eval/evmodule.scm 651 */
													obj_t BgL_fun1795z00_2035;

													BgL_fun1795z00_2035 =
														BGl_bigloozd2modulezd2resolverz00zz__modulez00();
													BgL_pathz00_2034 =
														PROCEDURE_ENTRY(BgL_fun1795z00_2035)
														(BgL_fun1795z00_2035, BgL_sz00_2029, BNIL,
														BgL_abasez00_2032, BEOA);
												}
												BGl_evmodulezd2importz12zc0zz__evmodulez00
													(BgL_modz00_110, BgL_sz00_2029, BgL_pathz00_2034,
													BNIL, BgL_abasez00_2032, BgL_locz00_2031);
											}
										else
											{	/* Eval/evmodule.scm 653 */
												bool_t BgL_test3992z00_8014;

												if (PAIRP(BgL_sz00_2029))
													{	/* Eval/evmodule.scm 653 */
														if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
															(BgL_sz00_2029))
															{	/* Eval/evmodule.scm 655 */
																bool_t BgL_test3995z00_8019;

																{	/* Eval/evmodule.scm 655 */
																	bool_t BgL_test3996z00_8020;

																	{	/* Eval/evmodule.scm 655 */
																		obj_t BgL_tmpz00_8021;

																		BgL_tmpz00_8021 = CAR(BgL_sz00_2029);
																		BgL_test3996z00_8020 =
																			SYMBOLP(BgL_tmpz00_8021);
																	}
																	if (BgL_test3996z00_8020)
																		{	/* Eval/evmodule.scm 655 */
																			BgL_test3995z00_8019 = ((bool_t) 1);
																		}
																	else
																		{	/* Eval/evmodule.scm 655 */
																			BgL_test3995z00_8019 =
																				BGl_aliaszd2pairzf3z21zz__evmodulez00
																				(CAR(BgL_sz00_2029));
																		}
																}
																if (BgL_test3995z00_8019)
																	{	/* Eval/evmodule.scm 655 */
																		BgL_test3992z00_8014 = ((bool_t) 0);
																	}
																else
																	{	/* Eval/evmodule.scm 655 */
																		BgL_test3992z00_8014 = ((bool_t) 1);
																	}
															}
														else
															{	/* Eval/evmodule.scm 654 */
																BgL_test3992z00_8014 = ((bool_t) 1);
															}
													}
												else
													{	/* Eval/evmodule.scm 653 */
														BgL_test3992z00_8014 = ((bool_t) 1);
													}
												if (BgL_test3992z00_8014)
													{	/* Eval/evmodule.scm 653 */
														BGl_evcompilezd2errorzd2zz__evcompilez00
															(BgL_locz00_112, BGl_string3224z00zz__evmodulez00,
															BGl_string3316z00zz__evmodulez00, BgL_sz00_2029);
													}
												else
													{	/* Eval/evmodule.scm 658 */
														obj_t BgL_filesz00_2047;
														obj_t BgL_imodz00_2048;
														obj_t BgL_importsz00_2049;
														obj_t BgL_aliasesz00_2050;
														obj_t BgL_dirz00_2051;

														BgL_clausez00_1985 = BgL_sz00_2029;
													BgL_zc3z04anonymousza31763ze3z87_1986:
														if (NULLP(BgL_clausez00_1985))
															{	/* Eval/evmodule.scm 622 */
																BgL_filesz00_2047 = BNIL;
															}
														else
															{	/* Eval/evmodule.scm 623 */
																bool_t BgL_test3998z00_8029;

																{	/* Eval/evmodule.scm 623 */
																	obj_t BgL_tmpz00_8030;

																	{	/* Eval/evmodule.scm 623 */
																		obj_t BgL_pairz00_3798;

																		if (PAIRP(BgL_clausez00_1985))
																			{	/* Eval/evmodule.scm 623 */
																				BgL_pairz00_3798 = BgL_clausez00_1985;
																			}
																		else
																			{
																				obj_t BgL_auxz00_8033;

																				BgL_auxz00_8033 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string3188z00zz__evmodulez00,
																					BINT(((long) 23834)),
																					BGl_string3313z00zz__evmodulez00,
																					BGl_string3190z00zz__evmodulez00,
																					BgL_clausez00_1985);
																				FAILURE(BgL_auxz00_8033, BFALSE,
																					BFALSE);
																			}
																		BgL_tmpz00_8030 = CAR(BgL_pairz00_3798);
																	}
																	BgL_test3998z00_8029 =
																		STRINGP(BgL_tmpz00_8030);
																}
																if (BgL_test3998z00_8029)
																	{	/* Eval/evmodule.scm 623 */
																		BgL_filesz00_2047 = BgL_clausez00_1985;
																	}
																else
																	{
																		obj_t BgL_clausez00_8039;

																		{	/* Eval/evmodule.scm 624 */
																			obj_t BgL_pairz00_3800;

																			if (PAIRP(BgL_clausez00_1985))
																				{	/* Eval/evmodule.scm 624 */
																					BgL_pairz00_3800 = BgL_clausez00_1985;
																				}
																			else
																				{
																					obj_t BgL_auxz00_8042;

																					BgL_auxz00_8042 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string3188z00zz__evmodulez00,
																						BINT(((long) 23883)),
																						BGl_string3313z00zz__evmodulez00,
																						BGl_string3190z00zz__evmodulez00,
																						BgL_clausez00_1985);
																					FAILURE(BgL_auxz00_8042, BFALSE,
																						BFALSE);
																				}
																			BgL_clausez00_8039 =
																				CDR(BgL_pairz00_3800);
																		}
																		BgL_clausez00_1985 = BgL_clausez00_8039;
																		goto BgL_zc3z04anonymousza31763ze3z87_1986;
																	}
															}
														{
															obj_t BgL_list1160z00_2067;

															BgL_list1160z00_2067 = BgL_sz00_2029;
														BgL_zc3z04anonymousza31815ze3z87_2068:
															if (PAIRP(BgL_list1160z00_2067))
																{	/* Eval/evmodule.scm 659 */
																	bool_t BgL_test4002z00_8049;

																	{	/* Eval/evmodule.scm 659 */
																		obj_t BgL_tmpz00_8050;

																		BgL_tmpz00_8050 = CAR(BgL_list1160z00_2067);
																		BgL_test4002z00_8049 =
																			SYMBOLP(BgL_tmpz00_8050);
																	}
																	if (BgL_test4002z00_8049)
																		{	/* Eval/evmodule.scm 659 */
																			BgL_imodz00_2048 =
																				CAR(BgL_list1160z00_2067);
																		}
																	else
																		{
																			obj_t BgL_list1160z00_8054;

																			BgL_list1160z00_8054 =
																				CDR(BgL_list1160z00_2067);
																			BgL_list1160z00_2067 =
																				BgL_list1160z00_8054;
																			goto
																				BgL_zc3z04anonymousza31815ze3z87_2068;
																		}
																}
															else
																{	/* Eval/evmodule.scm 659 */
																	BgL_imodz00_2048 = BFALSE;
																}
														}
														BgL_clausez00_1992 = BgL_sz00_2029;
														{	/* Eval/evmodule.scm 627 */
															obj_t BgL_lz00_1994;

															{	/* Eval/evmodule.scm 627 */
																obj_t BgL_auxz00_8056;

																{	/* Eval/evmodule.scm 627 */
																	bool_t BgL_test4003z00_8057;

																	if (PAIRP(BgL_clausez00_1992))
																		{	/* Eval/evmodule.scm 627 */
																			BgL_test4003z00_8057 = ((bool_t) 1);
																		}
																	else
																		{	/* Eval/evmodule.scm 627 */
																			BgL_test4003z00_8057 =
																				NULLP(BgL_clausez00_1992);
																		}
																	if (BgL_test4003z00_8057)
																		{	/* Eval/evmodule.scm 627 */
																			BgL_auxz00_8056 = BgL_clausez00_1992;
																		}
																	else
																		{
																			obj_t BgL_auxz00_8061;

																			BgL_auxz00_8061 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string3188z00zz__evmodulez00,
																				BINT(((long) 23970)),
																				BGl_string3314z00zz__evmodulez00,
																				BGl_string3246z00zz__evmodulez00,
																				BgL_clausez00_1992);
																			FAILURE(BgL_auxz00_8061, BFALSE, BFALSE);
																}}
																BgL_lz00_1994 =
																	BGl_findzd2tailzd2zz__r4_pairs_and_lists_6_3z00
																	(BGl_symbolzf3zd2envz21zz__r4_symbols_6_4z00,
																	BgL_auxz00_8056);
															}
															{
																obj_t BgL_lstz00_1997;
																obj_t BgL_resz00_1998;

																BgL_lstz00_1997 = BgL_clausez00_1992;
																BgL_resz00_1998 = BNIL;
															BgL_zc3z04anonymousza31771ze3z87_1999:
																if ((BgL_lstz00_1997 == BgL_lz00_1994))
																	{	/* Eval/evmodule.scm 630 */
																		BgL_importsz00_2049 = BgL_resz00_1998;
																	}
																else
																	{	/* Eval/evmodule.scm 632 */
																		bool_t BgL_test4006z00_8068;

																		{	/* Eval/evmodule.scm 632 */
																			obj_t BgL_auxz00_8069;

																			{	/* Eval/evmodule.scm 632 */
																				obj_t BgL_pairz00_3801;

																				if (PAIRP(BgL_lstz00_1997))
																					{	/* Eval/evmodule.scm 632 */
																						BgL_pairz00_3801 = BgL_lstz00_1997;
																					}
																				else
																					{
																						obj_t BgL_auxz00_8072;

																						BgL_auxz00_8072 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string3188z00zz__evmodulez00,
																							BINT(((long) 24074)),
																							BGl_string3303z00zz__evmodulez00,
																							BGl_string3190z00zz__evmodulez00,
																							BgL_lstz00_1997);
																						FAILURE(BgL_auxz00_8072, BFALSE,
																							BFALSE);
																					}
																				BgL_auxz00_8069 = CAR(BgL_pairz00_3801);
																			}
																			BgL_test4006z00_8068 =
																				BGl_aliaszd2pairzf3z21zz__evmodulez00
																				(BgL_auxz00_8069);
																		}
																		if (BgL_test4006z00_8068)
																			{	/* Eval/evmodule.scm 633 */
																				obj_t BgL_arg1775z00_2003;
																				obj_t BgL_arg1776z00_2004;

																				{	/* Eval/evmodule.scm 633 */
																					obj_t BgL_pairz00_3802;

																					if (PAIRP(BgL_lstz00_1997))
																						{	/* Eval/evmodule.scm 633 */
																							BgL_pairz00_3802 =
																								BgL_lstz00_1997;
																						}
																					else
																						{
																							obj_t BgL_auxz00_8080;

																							BgL_auxz00_8080 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string3188z00zz__evmodulez00,
																								BINT(((long) 24097)),
																								BGl_string3303z00zz__evmodulez00,
																								BGl_string3190z00zz__evmodulez00,
																								BgL_lstz00_1997);
																							FAILURE(BgL_auxz00_8080, BFALSE,
																								BFALSE);
																						}
																					BgL_arg1775z00_2003 =
																						CDR(BgL_pairz00_3802);
																				}
																				{	/* Eval/evmodule.scm 633 */
																					obj_t BgL_arg1777z00_2005;

																					{	/* Eval/evmodule.scm 633 */
																						obj_t BgL_pairz00_3804;

																						{	/* Eval/evmodule.scm 633 */
																							obj_t BgL_pairz00_3803;

																							if (PAIRP(BgL_lstz00_1997))
																								{	/* Eval/evmodule.scm 633 */
																									BgL_pairz00_3803 =
																										BgL_lstz00_1997;
																								}
																							else
																								{
																									obj_t BgL_auxz00_8087;

																									BgL_auxz00_8087 =
																										BGl_typezd2errorzd2zz__errorz00
																										(BGl_string3188z00zz__evmodulez00,
																										BINT(((long) 24119)),
																										BGl_string3303z00zz__evmodulez00,
																										BGl_string3190z00zz__evmodulez00,
																										BgL_lstz00_1997);
																									FAILURE(BgL_auxz00_8087,
																										BFALSE, BFALSE);
																								}
																							{	/* Eval/evmodule.scm 633 */
																								obj_t BgL_aux3028z00_4922;

																								BgL_aux3028z00_4922 =
																									CAR(BgL_pairz00_3803);
																								if (PAIRP(BgL_aux3028z00_4922))
																									{	/* Eval/evmodule.scm 633 */
																										BgL_pairz00_3804 =
																											BgL_aux3028z00_4922;
																									}
																								else
																									{
																										obj_t BgL_auxz00_8094;

																										BgL_auxz00_8094 =
																											BGl_typezd2errorzd2zz__errorz00
																											(BGl_string3188z00zz__evmodulez00,
																											BINT(((long) 24114)),
																											BGl_string3303z00zz__evmodulez00,
																											BGl_string3190z00zz__evmodulez00,
																											BgL_aux3028z00_4922);
																										FAILURE(BgL_auxz00_8094,
																											BFALSE, BFALSE);
																						}}}
																						{	/* Eval/evmodule.scm 633 */
																							obj_t BgL_pairz00_3807;

																							{	/* Eval/evmodule.scm 633 */
																								obj_t BgL_aux3030z00_4924;

																								BgL_aux3030z00_4924 =
																									CDR(BgL_pairz00_3804);
																								if (PAIRP(BgL_aux3030z00_4924))
																									{	/* Eval/evmodule.scm 633 */
																										BgL_pairz00_3807 =
																											BgL_aux3030z00_4924;
																									}
																								else
																									{
																										obj_t BgL_auxz00_8101;

																										BgL_auxz00_8101 =
																											BGl_typezd2errorzd2zz__errorz00
																											(BGl_string3188z00zz__evmodulez00,
																											BINT(((long) 24108)),
																											BGl_string3303z00zz__evmodulez00,
																											BGl_string3190z00zz__evmodulez00,
																											BgL_aux3030z00_4924);
																										FAILURE(BgL_auxz00_8101,
																											BFALSE, BFALSE);
																							}}
																							BgL_arg1777z00_2005 =
																								CAR(BgL_pairz00_3807);
																					}}
																					BgL_arg1776z00_2004 =
																						MAKE_YOUNG_PAIR(BgL_arg1777z00_2005,
																						BgL_resz00_1998);
																				}
																				{
																					obj_t BgL_resz00_8108;
																					obj_t BgL_lstz00_8107;

																					BgL_lstz00_8107 = BgL_arg1775z00_2003;
																					BgL_resz00_8108 = BgL_arg1776z00_2004;
																					BgL_resz00_1998 = BgL_resz00_8108;
																					BgL_lstz00_1997 = BgL_lstz00_8107;
																					goto
																						BgL_zc3z04anonymousza31771ze3z87_1999;
																				}
																			}
																		else
																			{	/* Eval/evmodule.scm 634 */
																				obj_t BgL_arg1779z00_2007;
																				obj_t BgL_arg1780z00_2008;

																				{	/* Eval/evmodule.scm 634 */
																					obj_t BgL_pairz00_3808;

																					if (PAIRP(BgL_lstz00_1997))
																						{	/* Eval/evmodule.scm 634 */
																							BgL_pairz00_3808 =
																								BgL_lstz00_1997;
																						}
																					else
																						{
																							obj_t BgL_auxz00_8111;

																							BgL_auxz00_8111 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string3188z00zz__evmodulez00,
																								BINT(((long) 24148)),
																								BGl_string3303z00zz__evmodulez00,
																								BGl_string3190z00zz__evmodulez00,
																								BgL_lstz00_1997);
																							FAILURE(BgL_auxz00_8111, BFALSE,
																								BFALSE);
																						}
																					BgL_arg1779z00_2007 =
																						CDR(BgL_pairz00_3808);
																				}
																				{	/* Eval/evmodule.scm 634 */
																					obj_t BgL_arg1781z00_2009;

																					{	/* Eval/evmodule.scm 634 */
																						obj_t BgL_pairz00_3809;

																						if (PAIRP(BgL_lstz00_1997))
																							{	/* Eval/evmodule.scm 634 */
																								BgL_pairz00_3809 =
																									BgL_lstz00_1997;
																							}
																						else
																							{
																								obj_t BgL_auxz00_8118;

																								BgL_auxz00_8118 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string3188z00zz__evmodulez00,
																									BINT(((long) 24164)),
																									BGl_string3303z00zz__evmodulez00,
																									BGl_string3190z00zz__evmodulez00,
																									BgL_lstz00_1997);
																								FAILURE(BgL_auxz00_8118, BFALSE,
																									BFALSE);
																							}
																						BgL_arg1781z00_2009 =
																							CAR(BgL_pairz00_3809);
																					}
																					BgL_arg1780z00_2008 =
																						MAKE_YOUNG_PAIR(BgL_arg1781z00_2009,
																						BgL_resz00_1998);
																				}
																				{
																					obj_t BgL_resz00_8125;
																					obj_t BgL_lstz00_8124;

																					BgL_lstz00_8124 = BgL_arg1779z00_2007;
																					BgL_resz00_8125 = BgL_arg1780z00_2008;
																					BgL_resz00_1998 = BgL_resz00_8125;
																					BgL_lstz00_1997 = BgL_lstz00_8124;
																					goto
																						BgL_zc3z04anonymousza31771ze3z87_1999;
																				}
																			}
																	}
															}
														}
														BgL_clausez00_2012 = BgL_sz00_2029;
														{	/* Eval/evmodule.scm 637 */
															obj_t BgL_lz00_2014;

															{	/* Eval/evmodule.scm 637 */
																obj_t BgL_auxz00_8126;

																{	/* Eval/evmodule.scm 637 */
																	bool_t BgL_test4014z00_8127;

																	if (PAIRP(BgL_clausez00_2012))
																		{	/* Eval/evmodule.scm 637 */
																			BgL_test4014z00_8127 = ((bool_t) 1);
																		}
																	else
																		{	/* Eval/evmodule.scm 637 */
																			BgL_test4014z00_8127 =
																				NULLP(BgL_clausez00_2012);
																		}
																	if (BgL_test4014z00_8127)
																		{	/* Eval/evmodule.scm 637 */
																			BgL_auxz00_8126 = BgL_clausez00_2012;
																		}
																	else
																		{
																			obj_t BgL_auxz00_8131;

																			BgL_auxz00_8131 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string3188z00zz__evmodulez00,
																				BINT(((long) 24255)),
																				BGl_string3315z00zz__evmodulez00,
																				BGl_string3246z00zz__evmodulez00,
																				BgL_clausez00_2012);
																			FAILURE(BgL_auxz00_8131, BFALSE, BFALSE);
																}}
																BgL_lz00_2014 =
																	BGl_findzd2tailzd2zz__r4_pairs_and_lists_6_3z00
																	(BGl_symbolzf3zd2envz21zz__r4_symbols_6_4z00,
																	BgL_auxz00_8126);
															}
															{
																obj_t BgL_lstz00_2017;
																obj_t BgL_resz00_2018;

																BgL_lstz00_2017 = BgL_clausez00_2012;
																BgL_resz00_2018 = BNIL;
															BgL_zc3z04anonymousza31784ze3z87_2019:
																if ((BgL_lstz00_2017 == BgL_lz00_2014))
																	{	/* Eval/evmodule.scm 640 */
																		BgL_aliasesz00_2050 = BgL_resz00_2018;
																	}
																else
																	{	/* Eval/evmodule.scm 642 */
																		bool_t BgL_test4017z00_8138;

																		{	/* Eval/evmodule.scm 642 */
																			obj_t BgL_auxz00_8139;

																			{	/* Eval/evmodule.scm 642 */
																				obj_t BgL_pairz00_3810;

																				if (PAIRP(BgL_lstz00_2017))
																					{	/* Eval/evmodule.scm 642 */
																						BgL_pairz00_3810 = BgL_lstz00_2017;
																					}
																				else
																					{
																						obj_t BgL_auxz00_8142;

																						BgL_auxz00_8142 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string3188z00zz__evmodulez00,
																							BINT(((long) 24359)),
																							BGl_string3303z00zz__evmodulez00,
																							BGl_string3190z00zz__evmodulez00,
																							BgL_lstz00_2017);
																						FAILURE(BgL_auxz00_8142, BFALSE,
																							BFALSE);
																					}
																				BgL_auxz00_8139 = CAR(BgL_pairz00_3810);
																			}
																			BgL_test4017z00_8138 =
																				BGl_aliaszd2pairzf3z21zz__evmodulez00
																				(BgL_auxz00_8139);
																		}
																		if (BgL_test4017z00_8138)
																			{	/* Eval/evmodule.scm 643 */
																				obj_t BgL_arg1788z00_2023;
																				obj_t BgL_arg1789z00_2024;

																				{	/* Eval/evmodule.scm 643 */
																					obj_t BgL_pairz00_3811;

																					if (PAIRP(BgL_lstz00_2017))
																						{	/* Eval/evmodule.scm 643 */
																							BgL_pairz00_3811 =
																								BgL_lstz00_2017;
																						}
																					else
																						{
																							obj_t BgL_auxz00_8150;

																							BgL_auxz00_8150 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string3188z00zz__evmodulez00,
																								BINT(((long) 24382)),
																								BGl_string3303z00zz__evmodulez00,
																								BGl_string3190z00zz__evmodulez00,
																								BgL_lstz00_2017);
																							FAILURE(BgL_auxz00_8150, BFALSE,
																								BFALSE);
																						}
																					BgL_arg1788z00_2023 =
																						CDR(BgL_pairz00_3811);
																				}
																				{	/* Eval/evmodule.scm 643 */
																					obj_t BgL_arg1790z00_2025;

																					{	/* Eval/evmodule.scm 643 */
																						obj_t BgL_pairz00_3812;

																						if (PAIRP(BgL_lstz00_2017))
																							{	/* Eval/evmodule.scm 643 */
																								BgL_pairz00_3812 =
																									BgL_lstz00_2017;
																							}
																						else
																							{
																								obj_t BgL_auxz00_8157;

																								BgL_auxz00_8157 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string3188z00zz__evmodulez00,
																									BINT(((long) 24398)),
																									BGl_string3303z00zz__evmodulez00,
																									BGl_string3190z00zz__evmodulez00,
																									BgL_lstz00_2017);
																								FAILURE(BgL_auxz00_8157, BFALSE,
																									BFALSE);
																							}
																						BgL_arg1790z00_2025 =
																							CAR(BgL_pairz00_3812);
																					}
																					BgL_arg1789z00_2024 =
																						MAKE_YOUNG_PAIR(BgL_arg1790z00_2025,
																						BgL_resz00_2018);
																				}
																				{
																					obj_t BgL_resz00_8164;
																					obj_t BgL_lstz00_8163;

																					BgL_lstz00_8163 = BgL_arg1788z00_2023;
																					BgL_resz00_8164 = BgL_arg1789z00_2024;
																					BgL_resz00_2018 = BgL_resz00_8164;
																					BgL_lstz00_2017 = BgL_lstz00_8163;
																					goto
																						BgL_zc3z04anonymousza31784ze3z87_2019;
																				}
																			}
																		else
																			{	/* Eval/evmodule.scm 644 */
																				obj_t BgL_arg1791z00_2026;

																				{	/* Eval/evmodule.scm 644 */
																					obj_t BgL_pairz00_3813;

																					if (PAIRP(BgL_lstz00_2017))
																						{	/* Eval/evmodule.scm 644 */
																							BgL_pairz00_3813 =
																								BgL_lstz00_2017;
																						}
																					else
																						{
																							obj_t BgL_auxz00_8167;

																							BgL_auxz00_8167 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string3188z00zz__evmodulez00,
																								BINT(((long) 24426)),
																								BGl_string3303z00zz__evmodulez00,
																								BGl_string3190z00zz__evmodulez00,
																								BgL_lstz00_2017);
																							FAILURE(BgL_auxz00_8167, BFALSE,
																								BFALSE);
																						}
																					BgL_arg1791z00_2026 =
																						CDR(BgL_pairz00_3813);
																				}
																				{
																					obj_t BgL_lstz00_8172;

																					BgL_lstz00_8172 = BgL_arg1791z00_2026;
																					BgL_lstz00_2017 = BgL_lstz00_8172;
																					goto
																						BgL_zc3z04anonymousza31784ze3z87_2019;
																				}
																			}
																	}
															}
														}
														{	/* Eval/evmodule.scm 662 */
															obj_t BgL__ortest_1071z00_2075;

															BgL__ortest_1071z00_2075 =
																BGl_locationzd2dirzd2zz__evmodulez00
																(BgL_locz00_2031);
															if (CBOOL(BgL__ortest_1071z00_2075))
																{	/* Eval/evmodule.scm 662 */
																	BgL_dirz00_2051 = BgL__ortest_1071z00_2075;
																}
															else
																{	/* Eval/evmodule.scm 662 */
																	BgL_dirz00_2051 = BGl_pwdz00zz__osz00();
																}
														}
														{	/* Eval/evmodule.scm 663 */
															obj_t BgL_pathz00_2052;

															{	/* Eval/evmodule.scm 663 */
																obj_t BgL_fun1814z00_2065;

																BgL_fun1814z00_2065 =
																	BGl_bigloozd2modulezd2resolverz00zz__modulez00
																	();
																BgL_pathz00_2052 =
																	PROCEDURE_ENTRY(BgL_fun1814z00_2065)
																	(BgL_fun1814z00_2065, BgL_imodz00_2048,
																	BgL_filesz00_2047, BgL_dirz00_2051, BEOA);
															}
															{
																obj_t BgL_l1161z00_2054;

																BgL_l1161z00_2054 = BgL_aliasesz00_2050;
															BgL_zc3z04anonymousza31807ze3z87_2055:
																if (PAIRP(BgL_l1161z00_2054))
																	{	/* Eval/evmodule.scm 664 */
																		{	/* Eval/evmodule.scm 665 */
																			obj_t BgL_apz00_2057;

																			BgL_apz00_2057 = CAR(BgL_l1161z00_2054);
																			{	/* Eval/evmodule.scm 666 */
																				obj_t BgL_arg1809z00_2058;
																				obj_t BgL_arg1810z00_2059;
																				obj_t BgL_arg1811z00_2060;

																				{	/* Eval/evmodule.scm 666 */
																					obj_t BgL_pairz00_3826;

																					if (PAIRP(BgL_apz00_2057))
																						{	/* Eval/evmodule.scm 666 */
																							BgL_pairz00_3826 = BgL_apz00_2057;
																						}
																					else
																						{
																							obj_t BgL_auxz00_8189;

																							BgL_auxz00_8189 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string3188z00zz__evmodulez00,
																								BINT(((long) 25138)),
																								BGl_string3317z00zz__evmodulez00,
																								BGl_string3190z00zz__evmodulez00,
																								BgL_apz00_2057);
																							FAILURE(BgL_auxz00_8189, BFALSE,
																								BFALSE);
																						}
																					BgL_arg1809z00_2058 =
																						CAR(BgL_pairz00_3826);
																				}
																				{	/* Eval/evmodule.scm 667 */
																					obj_t BgL_pairz00_3827;

																					if (PAIRP(BgL_apz00_2057))
																						{	/* Eval/evmodule.scm 667 */
																							BgL_pairz00_3827 = BgL_apz00_2057;
																						}
																					else
																						{
																							obj_t BgL_auxz00_8196;

																							BgL_auxz00_8196 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string3188z00zz__evmodulez00,
																								BINT(((long) 25155)),
																								BGl_string3317z00zz__evmodulez00,
																								BGl_string3190z00zz__evmodulez00,
																								BgL_apz00_2057);
																							FAILURE(BgL_auxz00_8196, BFALSE,
																								BFALSE);
																						}
																					{	/* Eval/evmodule.scm 667 */
																						obj_t BgL_pairz00_3830;

																						{	/* Eval/evmodule.scm 667 */
																							obj_t BgL_aux3050z00_4944;

																							BgL_aux3050z00_4944 =
																								CDR(BgL_pairz00_3827);
																							if (PAIRP(BgL_aux3050z00_4944))
																								{	/* Eval/evmodule.scm 667 */
																									BgL_pairz00_3830 =
																										BgL_aux3050z00_4944;
																								}
																							else
																								{
																									obj_t BgL_auxz00_8203;

																									BgL_auxz00_8203 =
																										BGl_typezd2errorzd2zz__errorz00
																										(BGl_string3188z00zz__evmodulez00,
																										BINT(((long) 25149)),
																										BGl_string3317z00zz__evmodulez00,
																										BGl_string3190z00zz__evmodulez00,
																										BgL_aux3050z00_4944);
																									FAILURE(BgL_auxz00_8203,
																										BFALSE, BFALSE);
																						}}
																						BgL_arg1810z00_2059 =
																							CAR(BgL_pairz00_3830);
																				}}
																				{	/* Eval/evmodule.scm 668 */
																					obj_t BgL__ortest_1072z00_2061;

																					BgL__ortest_1072z00_2061 =
																						BGl_getzd2sourcezd2locationz00zz__readerz00
																						(BgL_apz00_2057);
																					if (CBOOL(BgL__ortest_1072z00_2061))
																						{	/* Eval/evmodule.scm 668 */
																							BgL_arg1811z00_2060 =
																								BgL__ortest_1072z00_2061;
																						}
																					else
																						{	/* Eval/evmodule.scm 668 */
																							BgL_arg1811z00_2060 =
																								BgL_locz00_2031;
																						}
																				}
																				{	/* Eval/evmodule.scm 680 */
																					obj_t BgL_az00_3831;

																					{	/* Eval/evmodule.scm 680 */
																						obj_t BgL_idz00_3832;

																						if (SYMBOLP(BgL_arg1809z00_2058))
																							{	/* Eval/evmodule.scm 680 */
																								BgL_idz00_3832 =
																									BgL_arg1809z00_2058;
																							}
																						else
																							{
																								obj_t BgL_auxz00_8213;

																								BgL_auxz00_8213 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string3188z00zz__evmodulez00,
																									BINT(((long) 25692)),
																									BGl_string3317z00zz__evmodulez00,
																									BGl_string3192z00zz__evmodulez00,
																									BgL_arg1809z00_2058);
																								FAILURE(BgL_auxz00_8213, BFALSE,
																									BFALSE);
																							}
																						{	/* Eval/evmodule.scm 680 */
																							obj_t BgL_v1199z00_3833;

																							BgL_v1199z00_3833 =
																								create_vector(((long) 5));
																							VECTOR_SET(BgL_v1199z00_3833,
																								((long) 0), BINT(((long) 2)));
																							VECTOR_SET(BgL_v1199z00_3833,
																								((long) 1), BgL_idz00_3832);
																							VECTOR_SET(BgL_v1199z00_3833,
																								((long) 2), BUNSPEC);
																							VECTOR_SET(BgL_v1199z00_3833,
																								((long) 3), BgL_imodz00_2048);
																							VECTOR_SET(BgL_v1199z00_3833,
																								((long) 4),
																								BgL_arg1811z00_2060);
																							BgL_az00_3831 = BgL_v1199z00_3833;
																					}}
																					VECTOR_SET(BgL_az00_3831, ((long) 0),
																						BINT(((long) 6)));
																					VECTOR_SET(BgL_az00_3831, ((long) 2),
																						BgL_arg1810z00_2059);
																					{	/* Eval/evmodule.scm 683 */
																						obj_t BgL_auxz00_8227;

																						if (SYMBOLP(BgL_arg1809z00_2058))
																							{	/* Eval/evmodule.scm 683 */
																								BgL_auxz00_8227 =
																									BgL_arg1809z00_2058;
																							}
																						else
																							{
																								obj_t BgL_auxz00_8230;

																								BgL_auxz00_8230 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string3188z00zz__evmodulez00,
																									BINT(((long) 25818)),
																									BGl_string3317z00zz__evmodulez00,
																									BGl_string3192z00zz__evmodulez00,
																									BgL_arg1809z00_2058);
																								FAILURE(BgL_auxz00_8230, BFALSE,
																									BFALSE);
																							}
																						BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00
																							(BgL_modz00_110, BgL_auxz00_8227,
																							BgL_az00_3831,
																							BgL_arg1811z00_2060);
																		}}}}
																		{
																			obj_t BgL_l1161z00_8235;

																			BgL_l1161z00_8235 =
																				CDR(BgL_l1161z00_2054);
																			BgL_l1161z00_2054 = BgL_l1161z00_8235;
																			goto
																				BgL_zc3z04anonymousza31807ze3z87_2055;
																		}
																	}
																else
																	{	/* Eval/evmodule.scm 664 */
																		if (NULLP(BgL_l1161z00_2054))
																			{	/* Eval/evmodule.scm 664 */
																				BTRUE;
																			}
																		else
																			{	/* Eval/evmodule.scm 664 */
																				BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00
																					(BGl_string3231z00zz__evmodulez00,
																					BGl_string3221z00zz__evmodulez00,
																					BgL_l1161z00_2054,
																					BGl_string3188z00zz__evmodulez00,
																					BINT(((long) 25077)));
															}}}
															BGl_evmodulezd2importz12zc0zz__evmodulez00
																(BgL_modz00_110, BgL_imodz00_2048,
																BgL_pathz00_2052, BgL_importsz00_2049,
																BgL_abasez00_2032, BgL_locz00_2031);
									}}}}
									{
										obj_t BgL_l1163z00_8243;

										BgL_l1163z00_8243 = CDR(BgL_l1163z00_1976);
										BgL_l1163z00_1976 = BgL_l1163z00_8243;
										goto BgL_zc3z04anonymousza31757ze3z87_1977;
									}
								}
							else
								{	/* Eval/evmodule.scm 674 */
									if (NULLP(BgL_l1163z00_1976))
										{	/* Eval/evmodule.scm 674 */
											return BTRUE;
										}
									else
										{	/* Eval/evmodule.scm 674 */
											return
												BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00
												(BGl_string3231z00zz__evmodulez00,
												BGl_string3221z00zz__evmodulez00, BgL_l1163z00_1976,
												BGl_string3188z00zz__evmodulez00, BINT(((long) 25349)));
					}}}}
				else
					{	/* Eval/evmodule.scm 672 */
						return
							BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_112,
							BGl_string3224z00zz__evmodulez00,
							BGl_string3316z00zz__evmodulez00, BgL_clausez00_111);
					}
			}
		}

	}



/* alias-pair? */
	bool_t BGl_aliaszd2pairzf3z21zz__evmodulez00(obj_t BgL_vz00_118)
	{
		{	/* Eval/evmodule.scm 688 */
			if (PAIRP(BgL_vz00_118))
				{	/* Eval/evmodule.scm 689 */
					obj_t BgL_cdrzd2878zd2_2093;

					BgL_cdrzd2878zd2_2093 = CDR(BgL_vz00_118);
					{	/* Eval/evmodule.scm 689 */
						bool_t BgL_test4033z00_8253;

						{	/* Eval/evmodule.scm 689 */
							obj_t BgL_tmpz00_8254;

							BgL_tmpz00_8254 = CAR(BgL_vz00_118);
							BgL_test4033z00_8253 = SYMBOLP(BgL_tmpz00_8254);
						}
						if (BgL_test4033z00_8253)
							{	/* Eval/evmodule.scm 689 */
								if (PAIRP(BgL_cdrzd2878zd2_2093))
									{	/* Eval/evmodule.scm 689 */
										bool_t BgL_test4035z00_8259;

										{	/* Eval/evmodule.scm 689 */
											obj_t BgL_tmpz00_8260;

											BgL_tmpz00_8260 = CAR(BgL_cdrzd2878zd2_2093);
											BgL_test4035z00_8259 = SYMBOLP(BgL_tmpz00_8260);
										}
										if (BgL_test4035z00_8259)
											{	/* Eval/evmodule.scm 689 */
												return NULLP(CDR(BgL_cdrzd2878zd2_2093));
											}
										else
											{	/* Eval/evmodule.scm 689 */
												return ((bool_t) 0);
											}
									}
								else
									{	/* Eval/evmodule.scm 689 */
										return ((bool_t) 0);
									}
							}
						else
							{	/* Eval/evmodule.scm 689 */
								return ((bool_t) 0);
							}
					}
				}
			else
				{	/* Eval/evmodule.scm 689 */
					return ((bool_t) 0);
				}
		}

	}



/* evmodule-from! */
	obj_t BGl_evmodulezd2fromz12zc0zz__evmodulez00(obj_t BgL_modz00_119,
		obj_t BgL_identz00_120, obj_t BgL_pathz00_121, obj_t BgL_setz00_122,
		obj_t BgL_locz00_123)
	{
		{	/* Eval/evmodule.scm 696 */
			{	/* Eval/evmodule.scm 709 */
				obj_t BgL_mod2z00_2106;

				{	/* Eval/evmodule.scm 709 */
					obj_t BgL_idz00_3914;

					if (SYMBOLP(BgL_identz00_120))
						{	/* Eval/evmodule.scm 709 */
							BgL_idz00_3914 = BgL_identz00_120;
						}
					else
						{
							obj_t BgL_auxz00_8267;

							BgL_auxz00_8267 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3188z00zz__evmodulez00, BINT(((long) 26877)),
								BGl_string3319z00zz__evmodulez00,
								BGl_string3192z00zz__evmodulez00, BgL_identz00_120);
							FAILURE(BgL_auxz00_8267, BFALSE, BFALSE);
						}
					if (BGl_hashtablezf3zf3zz__hashz00
						(BGl_za2moduleszd2tableza2zd2zz__evmodulez00))
						{	/* Eval/evmodule.scm 224 */
							obj_t BgL_auxz00_8273;

							{	/* Eval/evmodule.scm 224 */
								obj_t BgL_aux3060z00_4954;

								BgL_aux3060z00_4954 =
									BGl_za2moduleszd2tableza2zd2zz__evmodulez00;
								if (STRUCTP(BgL_aux3060z00_4954))
									{	/* Eval/evmodule.scm 224 */
										BgL_auxz00_8273 = BgL_aux3060z00_4954;
									}
								else
									{
										obj_t BgL_auxz00_8276;

										BgL_auxz00_8276 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3188z00zz__evmodulez00, BINT(((long) 8670)),
											BGl_string3319z00zz__evmodulez00,
											BGl_string3194z00zz__evmodulez00, BgL_aux3060z00_4954);
										FAILURE(BgL_auxz00_8276, BFALSE, BFALSE);
							}}
							BgL_mod2z00_2106 =
								BGl_hashtablezd2getzd2zz__hashz00(BgL_auxz00_8273,
								BgL_idz00_3914);
						}
					else
						{	/* Eval/evmodule.scm 223 */
							BgL_mod2z00_2106 = BFALSE;
						}
				}
				{	/* Eval/evmodule.scm 711 */
					bool_t BgL_test4039z00_8281;

					{	/* Eval/evmodule.scm 135 */
						bool_t BgL_test4040z00_8282;

						if (STRUCTP(BgL_mod2z00_2106))
							{	/* Eval/evmodule.scm 129 */
								obj_t BgL_tmpz00_8285;

								{	/* Eval/evmodule.scm 129 */
									obj_t BgL_res2555z00_3922;

									{	/* Eval/evmodule.scm 129 */
										obj_t BgL_aux3062z00_4956;

										BgL_aux3062z00_4956 = STRUCT_KEY(BgL_mod2z00_2106);
										if (SYMBOLP(BgL_aux3062z00_4956))
											{	/* Eval/evmodule.scm 129 */
												BgL_res2555z00_3922 = BgL_aux3062z00_4956;
											}
										else
											{
												obj_t BgL_auxz00_8289;

												BgL_auxz00_8289 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3188z00zz__evmodulez00,
													BINT(((long) 4439)), BGl_string3319z00zz__evmodulez00,
													BGl_string3192z00zz__evmodulez00,
													BgL_aux3062z00_4956);
												FAILURE(BgL_auxz00_8289, BFALSE, BFALSE);
									}}
									BgL_tmpz00_8285 = BgL_res2555z00_3922;
								}
								BgL_test4040z00_8282 =
									(BgL_tmpz00_8285 == BGl_symbol3186z00zz__evmodulez00);
							}
						else
							{	/* Eval/evmodule.scm 129 */
								BgL_test4040z00_8282 = ((bool_t) 0);
							}
						if (BgL_test4040z00_8282)
							{	/* Eval/evmodule.scm 135 */
								BgL_test4039z00_8281 =
									(STRUCT_REF(BgL_mod2z00_2106,
										(int) (((long) 0))) ==
									BGl_makezd2z52evmodulezd2envz52zz__evmodulez00);
							}
						else
							{	/* Eval/evmodule.scm 135 */
								BgL_test4039z00_8281 = ((bool_t) 0);
							}
					}
					if (BgL_test4039z00_8281)
						{	/* Eval/evmodule.scm 711 */
							return
								BGl_fromzd2moduleze70z35zz__evmodulez00(BgL_locz00_123,
								BgL_modz00_119, BgL_setz00_122, BgL_mod2z00_2106);
						}
					else
						{	/* Eval/evmodule.scm 711 */
							if (PAIRP(BgL_pathz00_121))
								{	/* Eval/evmodule.scm 713 */
									{	/* Eval/evmodule.scm 716 */
										bool_t BgL_test4044z00_8300;

										{	/* Eval/evmodule.scm 716 */
											int BgL_arg1838z00_2112;

											BgL_arg1838z00_2112 =
												BGl_bigloozd2debugzd2modulez00zz__paramz00();
											BgL_test4044z00_8300 =
												((long) (BgL_arg1838z00_2112) > ((long) 0));
										}
										if (BgL_test4044z00_8300)
											{	/* Eval/evmodule.scm 717 */
												obj_t BgL_port1174z00_2111;

												{	/* Eval/evmodule.scm 717 */
													obj_t BgL_res2559z00_3929;

													{	/* Eval/evmodule.scm 717 */
														obj_t BgL_tmpz00_8304;

														BgL_tmpz00_8304 = BGL_CURRENT_DYNAMIC_ENV();
														BgL_res2559z00_3929 =
															BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_8304);
													}
													BgL_port1174z00_2111 = BgL_res2559z00_3929;
												}
												bgl_display_string(BGl_string3320z00zz__evmodulez00,
													BgL_port1174z00_2111);
												bgl_display_obj(BgL_identz00_120, BgL_port1174z00_2111);
												bgl_display_string(BGl_string3321z00zz__evmodulez00,
													BgL_port1174z00_2111);
												bgl_display_obj(BgL_pathz00_121, BgL_port1174z00_2111);
												bgl_display_string(BGl_string3322z00zz__evmodulez00,
													BgL_port1174z00_2111);
												bgl_display_char(((unsigned char) 10),
													BgL_port1174z00_2111);
											}
										else
											{	/* Eval/evmodule.scm 716 */
												BFALSE;
											}
									}
									{	/* Eval/evmodule.scm 719 */
										obj_t BgL_exitd1073z00_2113;

										BgL_exitd1073z00_2113 = BGL_EXITD_TOP_AS_OBJ();
										{	/* Eval/evmodule.scm 721 */
											obj_t BgL_zc3z04anonymousza31841ze3z87_4518;

											BgL_zc3z04anonymousza31841ze3z87_4518 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31841ze3ze5zz__evmodulez00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31841ze3z87_4518,
												(int) (((long) 0)), BgL_modz00_119);
											BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
												(BgL_exitd1073z00_2113,
												BgL_zc3z04anonymousza31841ze3z87_4518);
											{	/* Eval/evmodule.scm 720 */
												obj_t BgL_tmp1075z00_2115;

												BgL_tmp1075z00_2115 =
													BGl_fromzd2moduleze70z35zz__evmodulez00
													(BgL_locz00_123, BgL_modz00_119, BgL_setz00_122,
													BGl_evmodulezd2loadzd2zz__evmodulez00(BgL_modz00_119,
														BgL_identz00_120, BgL_pathz00_121, BgL_locz00_123));
												BGl_exitdzd2popzd2protectz12z12zz__bexitz00
													(BgL_exitd1073z00_2113);
												BGL_MODULE_SET(BgL_modz00_119);
												return BgL_tmp1075z00_2115;
											}
										}
									}
								}
							else
								{	/* Eval/evmodule.scm 713 */
									return
										BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_123,
										BGl_string3224z00zz__evmodulez00,
										BGl_string3323z00zz__evmodulez00, BgL_identz00_120);
								}
						}
				}
			}
		}

	}



/* from-module~0 */
	obj_t BGl_fromzd2moduleze70z35zz__evmodulez00(obj_t BgL_locz00_4554,
		obj_t BgL_modz00_4553, obj_t BgL_setz00_4552, obj_t BgL_mod2z00_2122)
	{
		{	/* Eval/evmodule.scm 708 */
			{	/* Eval/evmodule.scm 700 */
				obj_t BgL_exz00_2124;

				{	/* Eval/evmodule.scm 129 */
					obj_t BgL_sz00_3893;

					if (STRUCTP(BgL_mod2z00_2122))
						{	/* Eval/evmodule.scm 129 */
							BgL_sz00_3893 = BgL_mod2z00_2122;
						}
					else
						{
							obj_t BgL_auxz00_8327;

							BgL_auxz00_8327 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3188z00zz__evmodulez00, BINT(((long) 4439)),
								BGl_string3324z00zz__evmodulez00,
								BGl_string3194z00zz__evmodulez00, BgL_mod2z00_2122);
							FAILURE(BgL_auxz00_8327, BFALSE, BFALSE);
						}
					BgL_exz00_2124 = STRUCT_REF(BgL_sz00_3893, (int) (((long) 4)));
				}
				{	/* Eval/evmodule.scm 700 */
					obj_t BgL_nxz00_2125;

					{	/* Eval/evmodule.scm 704 */
						obj_t BgL_arg1850z00_2136;

						BgL_arg1850z00_2136 =
							STRUCT_REF(BgL_modz00_4553, (int) (((long) 4)));
						{	/* Eval/evmodule.scm 704 */
							obj_t BgL_auxz00_8335;

							{	/* Eval/evmodule.scm 704 */
								bool_t BgL_test4046z00_8336;

								if (PAIRP(BgL_exz00_2124))
									{	/* Eval/evmodule.scm 704 */
										BgL_test4046z00_8336 = ((bool_t) 1);
									}
								else
									{	/* Eval/evmodule.scm 704 */
										BgL_test4046z00_8336 = NULLP(BgL_exz00_2124);
									}
								if (BgL_test4046z00_8336)
									{	/* Eval/evmodule.scm 704 */
										BgL_auxz00_8335 = BgL_exz00_2124;
									}
								else
									{
										obj_t BgL_auxz00_8340;

										BgL_auxz00_8340 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3188z00zz__evmodulez00, BINT(((long) 26685)),
											BGl_string3324z00zz__evmodulez00,
											BGl_string3246z00zz__evmodulez00, BgL_exz00_2124);
										FAILURE(BgL_auxz00_8340, BFALSE, BFALSE);
							}}
							BgL_nxz00_2125 =
								BGl_appendzd221011zd2zz__evmodulez00(BgL_auxz00_8335,
								BgL_arg1850z00_2136);
					}}
					{	/* Eval/evmodule.scm 704 */

						{
							obj_t BgL_l1172z00_2127;

							BgL_l1172z00_2127 = BgL_exz00_2124;
						BgL_zc3z04anonymousza31844ze3z87_2128:
							if (PAIRP(BgL_l1172z00_2127))
								{	/* Eval/evmodule.scm 705 */
									{	/* Eval/evmodule.scm 706 */
										obj_t BgL_bz00_2130;

										BgL_bz00_2130 = CAR(BgL_l1172z00_2127);
										{	/* Eval/evmodule.scm 706 */
											obj_t BgL_arg1846z00_2131;
											obj_t BgL_arg1847z00_2132;

											{	/* Eval/evmodule.scm 706 */
												obj_t BgL_pairz00_3897;

												if (PAIRP(BgL_bz00_2130))
													{	/* Eval/evmodule.scm 706 */
														BgL_pairz00_3897 = BgL_bz00_2130;
													}
												else
													{
														obj_t BgL_auxz00_8350;

														BgL_auxz00_8350 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3188z00zz__evmodulez00,
															BINT(((long) 26782)),
															BGl_string3325z00zz__evmodulez00,
															BGl_string3190z00zz__evmodulez00, BgL_bz00_2130);
														FAILURE(BgL_auxz00_8350, BFALSE, BFALSE);
													}
												BgL_arg1846z00_2131 = CAR(BgL_pairz00_3897);
											}
											{	/* Eval/evmodule.scm 706 */
												obj_t BgL_pairz00_3898;

												if (PAIRP(BgL_bz00_2130))
													{	/* Eval/evmodule.scm 706 */
														BgL_pairz00_3898 = BgL_bz00_2130;
													}
												else
													{
														obj_t BgL_auxz00_8357;

														BgL_auxz00_8357 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3188z00zz__evmodulez00,
															BINT(((long) 26790)),
															BGl_string3325z00zz__evmodulez00,
															BGl_string3190z00zz__evmodulez00, BgL_bz00_2130);
														FAILURE(BgL_auxz00_8357, BFALSE, BFALSE);
													}
												BgL_arg1847z00_2132 = CAR(BgL_pairz00_3898);
											}
											{	/* Eval/evmodule.scm 680 */
												obj_t BgL_az00_3899;

												{	/* Eval/evmodule.scm 680 */
													obj_t BgL_idz00_3900;

													if (SYMBOLP(BgL_arg1846z00_2131))
														{	/* Eval/evmodule.scm 680 */
															BgL_idz00_3900 = BgL_arg1846z00_2131;
														}
													else
														{
															obj_t BgL_auxz00_8364;

															BgL_auxz00_8364 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3188z00zz__evmodulez00,
																BINT(((long) 25692)),
																BGl_string3325z00zz__evmodulez00,
																BGl_string3192z00zz__evmodulez00,
																BgL_arg1846z00_2131);
															FAILURE(BgL_auxz00_8364, BFALSE, BFALSE);
														}
													{	/* Eval/evmodule.scm 680 */
														obj_t BgL_v1199z00_3901;

														BgL_v1199z00_3901 = create_vector(((long) 5));
														VECTOR_SET(BgL_v1199z00_3901, ((long) 0),
															BINT(((long) 2)));
														VECTOR_SET(BgL_v1199z00_3901, ((long) 1),
															BgL_idz00_3900);
														VECTOR_SET(BgL_v1199z00_3901, ((long) 2), BUNSPEC);
														VECTOR_SET(BgL_v1199z00_3901, ((long) 3),
															BgL_mod2z00_2122);
														VECTOR_SET(BgL_v1199z00_3901, ((long) 4),
															BgL_locz00_4554);
														BgL_az00_3899 = BgL_v1199z00_3901;
												}}
												VECTOR_SET(BgL_az00_3899, ((long) 0), BINT(((long) 6)));
												VECTOR_SET(BgL_az00_3899, ((long) 2),
													BgL_arg1847z00_2132);
												{	/* Eval/evmodule.scm 683 */
													obj_t BgL_auxz00_8378;

													if (SYMBOLP(BgL_arg1846z00_2131))
														{	/* Eval/evmodule.scm 683 */
															BgL_auxz00_8378 = BgL_arg1846z00_2131;
														}
													else
														{
															obj_t BgL_auxz00_8381;

															BgL_auxz00_8381 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3188z00zz__evmodulez00,
																BINT(((long) 25818)),
																BGl_string3325z00zz__evmodulez00,
																BGl_string3192z00zz__evmodulez00,
																BgL_arg1846z00_2131);
															FAILURE(BgL_auxz00_8381, BFALSE, BFALSE);
														}
													BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00
														(BgL_modz00_4553, BgL_auxz00_8378, BgL_az00_3899,
														BgL_locz00_4554);
									}}}}
									{
										obj_t BgL_l1172z00_8386;

										BgL_l1172z00_8386 = CDR(BgL_l1172z00_2127);
										BgL_l1172z00_2127 = BgL_l1172z00_8386;
										goto BgL_zc3z04anonymousza31844ze3z87_2128;
									}
								}
							else
								{	/* Eval/evmodule.scm 705 */
									if (NULLP(BgL_l1172z00_2127))
										{	/* Eval/evmodule.scm 705 */
											BTRUE;
										}
									else
										{	/* Eval/evmodule.scm 705 */
											BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00
												(BGl_string3231z00zz__evmodulez00,
												BGl_string3221z00zz__evmodulez00, BgL_l1172z00_2127,
												BGl_string3188z00zz__evmodulez00, BINT(((long) 26725)));
						}}}
						{	/* Eval/evmodule.scm 129 */
							obj_t BgL_xz00_4970;

							{	/* Eval/evmodule.scm 129 */
								int BgL_tmpz00_8392;

								BgL_tmpz00_8392 = (int) (((long) 4));
								BgL_xz00_4970 =
									STRUCT_SET(BgL_modz00_4553, BgL_tmpz00_8392, BgL_nxz00_2125);
							}
							return BUNSPEC;
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1841> */
	obj_t BGl_z62zc3z04anonymousza31841ze3ze5zz__evmodulez00(obj_t
		BgL_envz00_4519)
	{
		{	/* Eval/evmodule.scm 719 */
			{	/* Eval/evmodule.scm 721 */
				obj_t BgL_modz00_4520;

				BgL_modz00_4520 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4519, (int) (((long) 0))));
				return BGL_MODULE_SET(BgL_modz00_4520);
			}
		}

	}



/* evmodule-from */
	obj_t BGl_evmodulezd2fromzd2zz__evmodulez00(obj_t BgL_modz00_124,
		obj_t BgL_clausez00_125, obj_t BgL_locz00_126)
	{
		{	/* Eval/evmodule.scm 726 */
			{
				obj_t BgL_sz00_2171;

				if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_clausez00_125))
					{	/* Eval/evmodule.scm 746 */
						obj_t BgL_g1177z00_2160;

						{	/* Eval/evmodule.scm 746 */
							obj_t BgL_pairz00_3944;

							if (PAIRP(BgL_clausez00_125))
								{	/* Eval/evmodule.scm 746 */
									BgL_pairz00_3944 = BgL_clausez00_125;
								}
							else
								{
									obj_t BgL_auxz00_8403;

									BgL_auxz00_8403 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3188z00zz__evmodulez00, BINT(((long) 28163)),
										BGl_string3328z00zz__evmodulez00,
										BGl_string3190z00zz__evmodulez00, BgL_clausez00_125);
									FAILURE(BgL_auxz00_8403, BFALSE, BFALSE);
								}
							BgL_g1177z00_2160 = CDR(BgL_pairz00_3944);
						}
						{
							obj_t BgL_l1175z00_2162;

							BgL_l1175z00_2162 = BgL_g1177z00_2160;
						BgL_zc3z04anonymousza31863ze3z87_2163:
							if (PAIRP(BgL_l1175z00_2162))
								{	/* Eval/evmodule.scm 746 */
									BgL_sz00_2171 = CAR(BgL_l1175z00_2162);
									{	/* Eval/evmodule.scm 732 */
										obj_t BgL_locz00_2173;
										obj_t BgL_abasez00_2174;

										{	/* Eval/evmodule.scm 732 */
											obj_t BgL__ortest_1076z00_2194;

											BgL__ortest_1076z00_2194 =
												BGl_getzd2sourcezd2locationz00zz__readerz00
												(BgL_sz00_2171);
											if (CBOOL(BgL__ortest_1076z00_2194))
												{	/* Eval/evmodule.scm 732 */
													BgL_locz00_2173 = BgL__ortest_1076z00_2194;
												}
											else
												{	/* Eval/evmodule.scm 732 */
													BgL_locz00_2173 = BgL_locz00_126;
												}
										}
										BgL_abasez00_2174 =
											BGl_locationzd2dirzd2zz__evmodulez00(BgL_locz00_126);
										if (SYMBOLP(BgL_sz00_2171))
											{	/* Eval/evmodule.scm 736 */
												obj_t BgL_pathz00_2176;

												{	/* Eval/evmodule.scm 736 */
													obj_t BgL_fun1871z00_2177;

													BgL_fun1871z00_2177 =
														BGl_bigloozd2modulezd2resolverz00zz__modulez00();
													BgL_pathz00_2176 =
														PROCEDURE_ENTRY(BgL_fun1871z00_2177)
														(BgL_fun1871z00_2177, BgL_sz00_2171, BNIL,
														BgL_abasez00_2174, BEOA);
												}
												BGl_evmodulezd2fromz12zc0zz__evmodulez00(BgL_modz00_124,
													BgL_sz00_2171, BgL_pathz00_2176, BNIL,
													BgL_locz00_2173);
											}
										else
											{	/* Eval/evmodule.scm 738 */
												bool_t BgL_test4059z00_8424;

												if (PAIRP(BgL_sz00_2171))
													{	/* Eval/evmodule.scm 738 */
														if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
															(BgL_sz00_2171))
															{	/* Eval/evmodule.scm 738 */
																bool_t BgL_test4062z00_8429;

																{	/* Eval/evmodule.scm 738 */
																	obj_t BgL_tmpz00_8430;

																	BgL_tmpz00_8430 = CAR(BgL_sz00_2171);
																	BgL_test4062z00_8429 =
																		SYMBOLP(BgL_tmpz00_8430);
																}
																if (BgL_test4062z00_8429)
																	{	/* Eval/evmodule.scm 738 */
																		BgL_test4059z00_8424 = ((bool_t) 0);
																	}
																else
																	{	/* Eval/evmodule.scm 738 */
																		BgL_test4059z00_8424 = ((bool_t) 1);
																	}
															}
														else
															{	/* Eval/evmodule.scm 738 */
																BgL_test4059z00_8424 = ((bool_t) 1);
															}
													}
												else
													{	/* Eval/evmodule.scm 738 */
														BgL_test4059z00_8424 = ((bool_t) 1);
													}
												if (BgL_test4059z00_8424)
													{	/* Eval/evmodule.scm 738 */
														BGl_evcompilezd2errorzd2zz__evcompilez00
															(BgL_locz00_126, BGl_string3224z00zz__evmodulez00,
															BGl_string3326z00zz__evmodulez00, BgL_sz00_2171);
													}
												else
													{	/* Eval/evmodule.scm 741 */
														obj_t BgL_pathz00_2184;

														{	/* Eval/evmodule.scm 741 */
															obj_t BgL_fun1883z00_2186;

															BgL_fun1883z00_2186 =
																BGl_bigloozd2modulezd2resolverz00zz__modulez00
																();
															{	/* Eval/evmodule.scm 741 */
																obj_t BgL_arg1879z00_2187;
																obj_t BgL_arg1881z00_2188;
																obj_t BgL_arg1882z00_2189;

																{	/* Eval/evmodule.scm 741 */
																	obj_t BgL_pairz00_3941;

																	if (PAIRP(BgL_sz00_2171))
																		{	/* Eval/evmodule.scm 741 */
																			BgL_pairz00_3941 = BgL_sz00_2171;
																		}
																	else
																		{
																			obj_t BgL_auxz00_8437;

																			BgL_auxz00_8437 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string3188z00zz__evmodulez00,
																				BINT(((long) 28001)),
																				BGl_string3327z00zz__evmodulez00,
																				BGl_string3190z00zz__evmodulez00,
																				BgL_sz00_2171);
																			FAILURE(BgL_auxz00_8437, BFALSE, BFALSE);
																		}
																	BgL_arg1879z00_2187 = CAR(BgL_pairz00_3941);
																}
																{	/* Eval/evmodule.scm 741 */
																	obj_t BgL_pairz00_3942;

																	if (PAIRP(BgL_sz00_2171))
																		{	/* Eval/evmodule.scm 741 */
																			BgL_pairz00_3942 = BgL_sz00_2171;
																		}
																	else
																		{
																			obj_t BgL_auxz00_8444;

																			BgL_auxz00_8444 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string3188z00zz__evmodulez00,
																				BINT(((long) 28009)),
																				BGl_string3327z00zz__evmodulez00,
																				BGl_string3190z00zz__evmodulez00,
																				BgL_sz00_2171);
																			FAILURE(BgL_auxz00_8444, BFALSE, BFALSE);
																		}
																	BgL_arg1881z00_2188 = CDR(BgL_pairz00_3942);
																}
																BgL_arg1882z00_2189 = BGl_pwdz00zz__osz00();
																BgL_pathz00_2184 =
																	PROCEDURE_ENTRY(BgL_fun1883z00_2186)
																	(BgL_fun1883z00_2186, BgL_arg1879z00_2187,
																	BgL_arg1881z00_2188, BgL_arg1882z00_2189,
																	BEOA);
														}}
														{	/* Eval/evmodule.scm 742 */
															obj_t BgL_arg1878z00_2185;

															{	/* Eval/evmodule.scm 742 */
																obj_t BgL_pairz00_3943;

																if (PAIRP(BgL_sz00_2171))
																	{	/* Eval/evmodule.scm 742 */
																		BgL_pairz00_3943 = BgL_sz00_2171;
																	}
																else
																	{
																		obj_t BgL_auxz00_8458;

																		BgL_auxz00_8458 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string3188z00zz__evmodulez00,
																			BINT(((long) 28048)),
																			BGl_string3327z00zz__evmodulez00,
																			BGl_string3190z00zz__evmodulez00,
																			BgL_sz00_2171);
																		FAILURE(BgL_auxz00_8458, BFALSE, BFALSE);
																	}
																BgL_arg1878z00_2185 = CAR(BgL_pairz00_3943);
															}
															BGl_evmodulezd2fromz12zc0zz__evmodulez00
																(BgL_modz00_124, BgL_arg1878z00_2185,
																BgL_pathz00_2184, BNIL, BgL_locz00_2173);
									}}}}
									{
										obj_t BgL_l1175z00_8465;

										BgL_l1175z00_8465 = CDR(BgL_l1175z00_2162);
										BgL_l1175z00_2162 = BgL_l1175z00_8465;
										goto BgL_zc3z04anonymousza31863ze3z87_2163;
									}
								}
							else
								{	/* Eval/evmodule.scm 746 */
									if (NULLP(BgL_l1175z00_2162))
										{	/* Eval/evmodule.scm 746 */
											return BTRUE;
										}
									else
										{	/* Eval/evmodule.scm 746 */
											return
												BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00
												(BGl_string3231z00zz__evmodulez00,
												BGl_string3221z00zz__evmodulez00, BgL_l1175z00_2162,
												BGl_string3188z00zz__evmodulez00, BINT(((long) 28136)));
					}}}}
				else
					{	/* Eval/evmodule.scm 744 */
						return
							BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_126,
							BGl_string3224z00zz__evmodulez00,
							BGl_string3326z00zz__evmodulez00, BgL_clausez00_125);
					}
			}
		}

	}



/* evmodule-include */
	obj_t BGl_evmodulezd2includezd2zz__evmodulez00(obj_t BgL_modz00_127,
		obj_t BgL_clausesz00_128, obj_t BgL_locz00_129)
	{
		{	/* Eval/evmodule.scm 751 */
			{
				obj_t BgL_filesz00_2263;
				obj_t BgL_pathz00_2264;
				obj_t BgL_filez00_2239;
				obj_t BgL_pathz00_2240;

				{	/* Eval/evmodule.scm 776 */
					obj_t BgL_pathz00_2199;

					{	/* Eval/evmodule.scm 776 */
						bool_t BgL_test4067z00_8472;

						{	/* Eval/evmodule.scm 776 */
							obj_t BgL_tmpz00_8473;

							BgL_tmpz00_8473 = STRUCT_REF(BgL_modz00_127, (int) (((long) 2)));
							BgL_test4067z00_8472 = STRINGP(BgL_tmpz00_8473);
						}
						if (BgL_test4067z00_8472)
							{	/* Eval/evmodule.scm 777 */
								obj_t BgL_arg1910z00_2236;

								{	/* Eval/evmodule.scm 777 */
									obj_t BgL_arg1911z00_2237;

									BgL_arg1911z00_2237 =
										STRUCT_REF(BgL_modz00_127, (int) (((long) 2)));
									{	/* Eval/evmodule.scm 777 */
										obj_t BgL_auxz00_8479;

										if (STRINGP(BgL_arg1911z00_2237))
											{	/* Eval/evmodule.scm 777 */
												BgL_auxz00_8479 = BgL_arg1911z00_2237;
											}
										else
											{
												obj_t BgL_auxz00_8482;

												BgL_auxz00_8482 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3188z00zz__evmodulez00,
													BINT(((long) 29293)),
													BGl_string3332z00zz__evmodulez00,
													BGl_string3202z00zz__evmodulez00,
													BgL_arg1911z00_2237);
												FAILURE(BgL_auxz00_8482, BFALSE, BFALSE);
											}
										BgL_arg1910z00_2236 =
											BGl_dirnamez00zz__osz00(BgL_auxz00_8479);
								}}
								BgL_pathz00_2199 =
									MAKE_YOUNG_PAIR(BgL_arg1910z00_2236,
									BGl_za2loadzd2pathza2zd2zz__evalz00);
							}
						else
							{	/* Eval/evmodule.scm 776 */
								BgL_pathz00_2199 = BGl_za2loadzd2pathza2zd2zz__evalz00;
							}
					}
					{
						obj_t BgL_clausesz00_2203;
						obj_t BgL_iclausesz00_2204;
						obj_t BgL_iexprsz00_2205;

						BgL_clausesz00_2203 = BgL_clausesz00_128;
						BgL_iclausesz00_2204 = BNIL;
						BgL_iexprsz00_2205 = BNIL;
					BgL_zc3z04anonymousza31885ze3z87_2206:
						if (NULLP(BgL_clausesz00_2203))
							{	/* Eval/evmodule.scm 783 */
								{	/* Eval/evmodule.scm 784 */
									int BgL_res2577z00_4011;

									{	/* Eval/evmodule.scm 784 */
										int BgL_tmpz00_8490;

										BgL_tmpz00_8490 = (int) (((long) 2));
										BgL_res2577z00_4011 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_8490);
									} BgL_res2577z00_4011;
								}
								{	/* Eval/evmodule.scm 784 */
									int BgL_tmpz00_8493;

									BgL_tmpz00_8493 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_8493, BgL_iexprsz00_2205);
								}
								return BgL_iclausesz00_2204;
							}
						else
							{	/* Eval/evmodule.scm 785 */
								bool_t BgL_test4070z00_8496;

								{	/* Eval/evmodule.scm 785 */
									obj_t BgL_tmpz00_8497;

									{	/* Eval/evmodule.scm 785 */
										obj_t BgL_pairz00_4012;

										if (PAIRP(BgL_clausesz00_2203))
											{	/* Eval/evmodule.scm 785 */
												BgL_pairz00_4012 = BgL_clausesz00_2203;
											}
										else
											{
												obj_t BgL_auxz00_8500;

												BgL_auxz00_8500 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3188z00zz__evmodulez00,
													BINT(((long) 29484)),
													BGl_string3303z00zz__evmodulez00,
													BGl_string3190z00zz__evmodulez00,
													BgL_clausesz00_2203);
												FAILURE(BgL_auxz00_8500, BFALSE, BFALSE);
											}
										BgL_tmpz00_8497 = CAR(BgL_pairz00_4012);
									}
									BgL_test4070z00_8496 = PAIRP(BgL_tmpz00_8497);
								}
								if (BgL_test4070z00_8496)
									{	/* Eval/evmodule.scm 787 */
										bool_t BgL_test4072z00_8506;

										{	/* Eval/evmodule.scm 787 */
											obj_t BgL_tmpz00_8507;

											{	/* Eval/evmodule.scm 787 */
												obj_t BgL_pairz00_4014;

												if (PAIRP(BgL_clausesz00_2203))
													{	/* Eval/evmodule.scm 787 */
														BgL_pairz00_4014 = BgL_clausesz00_2203;
													}
												else
													{
														obj_t BgL_auxz00_8510;

														BgL_auxz00_8510 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3188z00zz__evmodulez00,
															BINT(((long) 29586)),
															BGl_string3303z00zz__evmodulez00,
															BGl_string3190z00zz__evmodulez00,
															BgL_clausesz00_2203);
														FAILURE(BgL_auxz00_8510, BFALSE, BFALSE);
													}
												{	/* Eval/evmodule.scm 787 */
													obj_t BgL_pairz00_4017;

													{	/* Eval/evmodule.scm 787 */
														obj_t BgL_aux3100z00_4995;

														BgL_aux3100z00_4995 = CAR(BgL_pairz00_4014);
														if (PAIRP(BgL_aux3100z00_4995))
															{	/* Eval/evmodule.scm 787 */
																BgL_pairz00_4017 = BgL_aux3100z00_4995;
															}
														else
															{
																obj_t BgL_auxz00_8517;

																BgL_auxz00_8517 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3188z00zz__evmodulez00,
																	BINT(((long) 29580)),
																	BGl_string3303z00zz__evmodulez00,
																	BGl_string3190z00zz__evmodulez00,
																	BgL_aux3100z00_4995);
																FAILURE(BgL_auxz00_8517, BFALSE, BFALSE);
													}}
													BgL_tmpz00_8507 = CAR(BgL_pairz00_4017);
											}}
											BgL_test4072z00_8506 =
												(BgL_tmpz00_8507 == BGl_symbol3333z00zz__evmodulez00);
										}
										if (BgL_test4072z00_8506)
											{	/* Eval/evmodule.scm 788 */
												obj_t BgL_icz00_2214;

												{	/* Eval/evmodule.scm 789 */
													obj_t BgL_arg1897z00_2224;

													{	/* Eval/evmodule.scm 789 */
														obj_t BgL_pairz00_4018;

														if (PAIRP(BgL_clausesz00_2203))
															{	/* Eval/evmodule.scm 789 */
																BgL_pairz00_4018 = BgL_clausesz00_2203;
															}
														else
															{
																obj_t BgL_auxz00_8525;

																BgL_auxz00_8525 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3188z00zz__evmodulez00,
																	BINT(((long) 29673)),
																	BGl_string3303z00zz__evmodulez00,
																	BGl_string3190z00zz__evmodulez00,
																	BgL_clausesz00_2203);
																FAILURE(BgL_auxz00_8525, BFALSE, BFALSE);
															}
														{	/* Eval/evmodule.scm 789 */
															obj_t BgL_pairz00_4021;

															{	/* Eval/evmodule.scm 789 */
																obj_t BgL_aux3104z00_4999;

																BgL_aux3104z00_4999 = CAR(BgL_pairz00_4018);
																if (PAIRP(BgL_aux3104z00_4999))
																	{	/* Eval/evmodule.scm 789 */
																		BgL_pairz00_4021 = BgL_aux3104z00_4999;
																	}
																else
																	{
																		obj_t BgL_auxz00_8532;

																		BgL_auxz00_8532 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string3188z00zz__evmodulez00,
																			BINT(((long) 29667)),
																			BGl_string3303z00zz__evmodulez00,
																			BGl_string3190z00zz__evmodulez00,
																			BgL_aux3104z00_4999);
																		FAILURE(BgL_auxz00_8532, BFALSE, BFALSE);
															}}
															BgL_arg1897z00_2224 = CDR(BgL_pairz00_4021);
													}}
													BgL_filesz00_2263 = BgL_arg1897z00_2224;
													BgL_pathz00_2264 = BgL_pathz00_2199;
													{
														obj_t BgL_filesz00_3982;
														obj_t BgL_iclausesz00_3983;
														obj_t BgL_iexprsz00_3984;

														BgL_filesz00_3982 = BgL_filesz00_2263;
														BgL_iclausesz00_3983 = BNIL;
														BgL_iexprsz00_3984 = BNIL;
													BgL_loopz00_3981:
														if (NULLP(BgL_filesz00_3982))
															{	/* Eval/evmodule.scm 770 */
																{	/* Eval/evmodule.scm 771 */
																	int BgL_res2574z00_4004;

																	{	/* Eval/evmodule.scm 771 */
																		int BgL_tmpz00_8539;

																		BgL_tmpz00_8539 = (int) (((long) 2));
																		BgL_res2574z00_4004 =
																			BGL_MVALUES_NUMBER_SET(BgL_tmpz00_8539);
																	} BgL_res2574z00_4004;
																}
																{	/* Eval/evmodule.scm 771 */
																	int BgL_tmpz00_8542;

																	BgL_tmpz00_8542 = (int) (((long) 1));
																	BGL_MVALUES_VAL_SET(BgL_tmpz00_8542,
																		BgL_iexprsz00_3984);
																}
																BgL_icz00_2214 = BgL_iclausesz00_3983;
															}
														else
															{	/* Eval/evmodule.scm 772 */
																obj_t BgL_icz00_3997;

																{	/* Eval/evmodule.scm 773 */
																	obj_t BgL_arg1931z00_3998;

																	{	/* Eval/evmodule.scm 773 */
																		obj_t BgL_pairz00_4005;

																		if (PAIRP(BgL_filesz00_3982))
																			{	/* Eval/evmodule.scm 773 */
																				BgL_pairz00_4005 = BgL_filesz00_3982;
																			}
																		else
																			{
																				obj_t BgL_auxz00_8547;

																				BgL_auxz00_8547 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string3188z00zz__evmodulez00,
																					BINT(((long) 29122)),
																					BGl_string3303z00zz__evmodulez00,
																					BGl_string3190z00zz__evmodulez00,
																					BgL_filesz00_3982);
																				FAILURE(BgL_auxz00_8547, BFALSE,
																					BFALSE);
																			}
																		BgL_arg1931z00_3998 = CAR(BgL_pairz00_4005);
																	}
																	BgL_filez00_2239 = BgL_arg1931z00_3998;
																	BgL_pathz00_2240 = BgL_pathz00_2264;
																	{	/* Eval/evmodule.scm 754 */
																		obj_t BgL_ffilez00_2242;

																		{	/* Eval/evmodule.scm 754 */
																			obj_t BgL_auxz00_8552;

																			if (STRINGP(BgL_filez00_2239))
																				{	/* Eval/evmodule.scm 754 */
																					BgL_auxz00_8552 = BgL_filez00_2239;
																				}
																			else
																				{
																					obj_t BgL_auxz00_8555;

																					BgL_auxz00_8555 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string3188z00zz__evmodulez00,
																						BINT(((long) 28522)),
																						BGl_string3329z00zz__evmodulez00,
																						BGl_string3202z00zz__evmodulez00,
																						BgL_filez00_2239);
																					FAILURE(BgL_auxz00_8555, BFALSE,
																						BFALSE);
																				}
																			BgL_ffilez00_2242 =
																				BGl_findzd2filezf2pathz20zz__osz00
																				(BgL_auxz00_8552, BgL_pathz00_2240);
																		}
																		if (STRINGP(BgL_ffilez00_2242))
																			{	/* Eval/evmodule.scm 755 */
																				BgL_icz00_3997 =
																					BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00
																					(BgL_ffilez00_2242,
																					BGl_proc3330z00zz__evmodulez00);
																			}
																		else
																			{	/* Eval/evmodule.scm 763 */
																				obj_t BgL_arg1923z00_2261;

																				{	/* Eval/evmodule.scm 763 */
																					obj_t BgL_list1924z00_2262;

																					BgL_list1924z00_2262 =
																						MAKE_YOUNG_PAIR(BgL_filez00_2239,
																						BNIL);
																					BgL_arg1923z00_2261 =
																						BGl_formatz00zz__r4_output_6_10_3z00
																						(BGl_string3331z00zz__evmodulez00,
																						BgL_list1924z00_2262);
																				}
																				BgL_icz00_3997 =
																					BGl_evcompilezd2errorzd2zz__evcompilez00
																					(BgL_locz00_129,
																					BGl_string3224z00zz__evmodulez00,
																					BgL_arg1923z00_2261,
																					BgL_pathz00_2240);
																			}
																	}
																}
																{	/* Eval/evmodule.scm 773 */
																	obj_t BgL_iez00_3999;

																	{	/* Eval/evmodule.scm 774 */
																		int BgL_tmpz00_8566;

																		BgL_tmpz00_8566 = (int) (((long) 1));
																		BgL_iez00_3999 =
																			BGL_MVALUES_VAL(BgL_tmpz00_8566);
																	}
																	{	/* Eval/evmodule.scm 774 */
																		obj_t BgL_arg1928z00_4000;
																		obj_t BgL_arg1929z00_4001;
																		obj_t BgL_arg1930z00_4002;

																		{	/* Eval/evmodule.scm 774 */
																			obj_t BgL_pairz00_4006;

																			if (PAIRP(BgL_filesz00_3982))
																				{	/* Eval/evmodule.scm 774 */
																					BgL_pairz00_4006 = BgL_filesz00_3982;
																				}
																			else
																				{
																					obj_t BgL_auxz00_8571;

																					BgL_auxz00_8571 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string3188z00zz__evmodulez00,
																						BINT(((long) 29148)),
																						BGl_string3303z00zz__evmodulez00,
																						BGl_string3190z00zz__evmodulez00,
																						BgL_filesz00_3982);
																					FAILURE(BgL_auxz00_8571, BFALSE,
																						BFALSE);
																				}
																			BgL_arg1928z00_4000 =
																				CDR(BgL_pairz00_4006);
																		}
																		{	/* Eval/evmodule.scm 774 */
																			obj_t BgL_auxz00_8576;

																			{	/* Eval/evmodule.scm 774 */
																				bool_t BgL_test4082z00_8577;

																				if (PAIRP(BgL_iclausesz00_3983))
																					{	/* Eval/evmodule.scm 774 */
																						BgL_test4082z00_8577 = ((bool_t) 1);
																					}
																				else
																					{	/* Eval/evmodule.scm 774 */
																						BgL_test4082z00_8577 =
																							NULLP(BgL_iclausesz00_3983);
																					}
																				if (BgL_test4082z00_8577)
																					{	/* Eval/evmodule.scm 774 */
																						BgL_auxz00_8576 =
																							BgL_iclausesz00_3983;
																					}
																				else
																					{
																						obj_t BgL_auxz00_8581;

																						BgL_auxz00_8581 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string3188z00zz__evmodulez00,
																							BINT(((long) 29155)),
																							BGl_string3303z00zz__evmodulez00,
																							BGl_string3246z00zz__evmodulez00,
																							BgL_iclausesz00_3983);
																						FAILURE(BgL_auxz00_8581, BFALSE,
																							BFALSE);
																			}}
																			BgL_arg1929z00_4001 =
																				BGl_appendzd221011zd2zz__evmodulez00
																				(BgL_auxz00_8576, BgL_icz00_3997);
																		}
																		{	/* Eval/evmodule.scm 774 */
																			obj_t BgL_auxz00_8586;

																			{	/* Eval/evmodule.scm 774 */
																				bool_t BgL_test4084z00_8587;

																				if (PAIRP(BgL_iexprsz00_3984))
																					{	/* Eval/evmodule.scm 774 */
																						BgL_test4084z00_8587 = ((bool_t) 1);
																					}
																				else
																					{	/* Eval/evmodule.scm 774 */
																						BgL_test4084z00_8587 =
																							NULLP(BgL_iexprsz00_3984);
																					}
																				if (BgL_test4084z00_8587)
																					{	/* Eval/evmodule.scm 774 */
																						BgL_auxz00_8586 =
																							BgL_iexprsz00_3984;
																					}
																				else
																					{
																						obj_t BgL_auxz00_8591;

																						BgL_auxz00_8591 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string3188z00zz__evmodulez00,
																							BINT(((long) 29176)),
																							BGl_string3303z00zz__evmodulez00,
																							BGl_string3246z00zz__evmodulez00,
																							BgL_iexprsz00_3984);
																						FAILURE(BgL_auxz00_8591, BFALSE,
																							BFALSE);
																			}}
																			BgL_arg1930z00_4002 =
																				BGl_appendzd221011zd2zz__evmodulez00
																				(BgL_auxz00_8586, BgL_iez00_3999);
																		}
																		{
																			obj_t BgL_iexprsz00_8598;
																			obj_t BgL_iclausesz00_8597;
																			obj_t BgL_filesz00_8596;

																			BgL_filesz00_8596 = BgL_arg1928z00_4000;
																			BgL_iclausesz00_8597 =
																				BgL_arg1929z00_4001;
																			BgL_iexprsz00_8598 = BgL_arg1930z00_4002;
																			BgL_iexprsz00_3984 = BgL_iexprsz00_8598;
																			BgL_iclausesz00_3983 =
																				BgL_iclausesz00_8597;
																			BgL_filesz00_3982 = BgL_filesz00_8596;
																			goto BgL_loopz00_3981;
																		}
																	}
																}
															}
													}
												}
												{	/* Eval/evmodule.scm 789 */
													obj_t BgL_iez00_2215;

													{	/* Eval/evmodule.scm 790 */
														int BgL_tmpz00_8599;

														BgL_tmpz00_8599 = (int) (((long) 1));
														BgL_iez00_2215 = BGL_MVALUES_VAL(BgL_tmpz00_8599);
													}
													{	/* Eval/evmodule.scm 790 */
														obj_t BgL_ic2z00_2216;

														BgL_ic2z00_2216 =
															BGl_evmodulezd2includezd2zz__evmodulez00
															(BgL_modz00_127, BgL_icz00_2214, BgL_locz00_129);
														{	/* Eval/evmodule.scm 791 */
															obj_t BgL_ie2z00_2217;

															{	/* Eval/evmodule.scm 792 */
																int BgL_tmpz00_8603;

																BgL_tmpz00_8603 = (int) (((long) 1));
																BgL_ie2z00_2217 =
																	BGL_MVALUES_VAL(BgL_tmpz00_8603);
															}
															{	/* Eval/evmodule.scm 792 */
																obj_t BgL_arg1891z00_2218;
																obj_t BgL_arg1892z00_2219;
																obj_t BgL_arg1893z00_2220;

																{	/* Eval/evmodule.scm 792 */
																	obj_t BgL_pairz00_4022;

																	if (PAIRP(BgL_clausesz00_2203))
																		{	/* Eval/evmodule.scm 792 */
																			BgL_pairz00_4022 = BgL_clausesz00_2203;
																		}
																	else
																		{
																			obj_t BgL_auxz00_8608;

																			BgL_auxz00_8608 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string3188z00zz__evmodulez00,
																				BINT(((long) 29772)),
																				BGl_string3303z00zz__evmodulez00,
																				BGl_string3190z00zz__evmodulez00,
																				BgL_clausesz00_2203);
																			FAILURE(BgL_auxz00_8608, BFALSE, BFALSE);
																		}
																	BgL_arg1891z00_2218 = CDR(BgL_pairz00_4022);
																}
																{	/* Eval/evmodule.scm 793 */
																	obj_t BgL_auxz00_8613;

																	{	/* Eval/evmodule.scm 793 */
																		bool_t BgL_test4087z00_8614;

																		if (PAIRP(BgL_iclausesz00_2204))
																			{	/* Eval/evmodule.scm 793 */
																				BgL_test4087z00_8614 = ((bool_t) 1);
																			}
																		else
																			{	/* Eval/evmodule.scm 793 */
																				BgL_test4087z00_8614 =
																					NULLP(BgL_iclausesz00_2204);
																			}
																		if (BgL_test4087z00_8614)
																			{	/* Eval/evmodule.scm 793 */
																				BgL_auxz00_8613 = BgL_iclausesz00_2204;
																			}
																		else
																			{
																				obj_t BgL_auxz00_8618;

																				BgL_auxz00_8618 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string3188z00zz__evmodulez00,
																					BINT(((long) 29785)),
																					BGl_string3303z00zz__evmodulez00,
																					BGl_string3246z00zz__evmodulez00,
																					BgL_iclausesz00_2204);
																				FAILURE(BgL_auxz00_8618, BFALSE,
																					BFALSE);
																	}}
																	BgL_arg1892z00_2219 =
																		BGl_appendzd221011zd2zz__evmodulez00
																		(BgL_auxz00_8613, BgL_ic2z00_2216);
																}
																{	/* Eval/evmodule.scm 794 */
																	obj_t BgL_list1894z00_2221;

																	{	/* Eval/evmodule.scm 794 */
																		obj_t BgL_arg1895z00_2222;

																		{	/* Eval/evmodule.scm 794 */
																			obj_t BgL_arg1896z00_2223;

																			BgL_arg1896z00_2223 =
																				MAKE_YOUNG_PAIR(BgL_iez00_2215, BNIL);
																			BgL_arg1895z00_2222 =
																				MAKE_YOUNG_PAIR(BgL_ie2z00_2217,
																				BgL_arg1896z00_2223);
																		}
																		BgL_list1894z00_2221 =
																			MAKE_YOUNG_PAIR(BgL_iexprsz00_2205,
																			BgL_arg1895z00_2222);
																	}
																	BgL_arg1893z00_2220 =
																		BGl_appendz00zz__r4_pairs_and_lists_6_3z00
																		(BgL_list1894z00_2221);
																}
																{
																	obj_t BgL_iexprsz00_8629;
																	obj_t BgL_iclausesz00_8628;
																	obj_t BgL_clausesz00_8627;

																	BgL_clausesz00_8627 = BgL_arg1891z00_2218;
																	BgL_iclausesz00_8628 = BgL_arg1892z00_2219;
																	BgL_iexprsz00_8629 = BgL_arg1893z00_2220;
																	BgL_iexprsz00_2205 = BgL_iexprsz00_8629;
																	BgL_iclausesz00_2204 = BgL_iclausesz00_8628;
																	BgL_clausesz00_2203 = BgL_clausesz00_8627;
																	goto BgL_zc3z04anonymousza31885ze3z87_2206;
																}
															}
														}
													}
												}
											}
										else
											{	/* Eval/evmodule.scm 796 */
												obj_t BgL_arg1898z00_2225;
												obj_t BgL_arg1901z00_2226;

												{	/* Eval/evmodule.scm 796 */
													obj_t BgL_pairz00_4023;

													if (PAIRP(BgL_clausesz00_2203))
														{	/* Eval/evmodule.scm 796 */
															BgL_pairz00_4023 = BgL_clausesz00_2203;
														}
													else
														{
															obj_t BgL_auxz00_8632;

															BgL_auxz00_8632 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3188z00zz__evmodulez00,
																BINT(((long) 29866)),
																BGl_string3303z00zz__evmodulez00,
																BGl_string3190z00zz__evmodulez00,
																BgL_clausesz00_2203);
															FAILURE(BgL_auxz00_8632, BFALSE, BFALSE);
														}
													BgL_arg1898z00_2225 = CDR(BgL_pairz00_4023);
												}
												{	/* Eval/evmodule.scm 797 */
													obj_t BgL_arg1902z00_2227;

													{	/* Eval/evmodule.scm 797 */
														obj_t BgL_arg1903z00_2228;

														{	/* Eval/evmodule.scm 797 */
															obj_t BgL_pairz00_4024;

															if (PAIRP(BgL_clausesz00_2203))
																{	/* Eval/evmodule.scm 797 */
																	BgL_pairz00_4024 = BgL_clausesz00_2203;
																}
															else
																{
																	obj_t BgL_auxz00_8639;

																	BgL_auxz00_8639 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string3188z00zz__evmodulez00,
																		BINT(((long) 29908)),
																		BGl_string3303z00zz__evmodulez00,
																		BGl_string3190z00zz__evmodulez00,
																		BgL_clausesz00_2203);
																	FAILURE(BgL_auxz00_8639, BFALSE, BFALSE);
																}
															BgL_arg1903z00_2228 = CAR(BgL_pairz00_4024);
														}
														{	/* Eval/evmodule.scm 797 */
															obj_t BgL_list1904z00_2229;

															BgL_list1904z00_2229 =
																MAKE_YOUNG_PAIR(BgL_arg1903z00_2228, BNIL);
															BgL_arg1902z00_2227 = BgL_list1904z00_2229;
													}}
													{	/* Eval/evmodule.scm 797 */
														obj_t BgL_auxz00_8645;

														{	/* Eval/evmodule.scm 797 */
															bool_t BgL_test4091z00_8646;

															if (PAIRP(BgL_iclausesz00_2204))
																{	/* Eval/evmodule.scm 797 */
																	BgL_test4091z00_8646 = ((bool_t) 1);
																}
															else
																{	/* Eval/evmodule.scm 797 */
																	BgL_test4091z00_8646 =
																		NULLP(BgL_iclausesz00_2204);
																}
															if (BgL_test4091z00_8646)
																{	/* Eval/evmodule.scm 797 */
																	BgL_auxz00_8645 = BgL_iclausesz00_2204;
																}
															else
																{
																	obj_t BgL_auxz00_8650;

																	BgL_auxz00_8650 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string3188z00zz__evmodulez00,
																		BINT(((long) 29880)),
																		BGl_string3303z00zz__evmodulez00,
																		BGl_string3246z00zz__evmodulez00,
																		BgL_iclausesz00_2204);
																	FAILURE(BgL_auxz00_8650, BFALSE, BFALSE);
														}}
														BgL_arg1901z00_2226 =
															BGl_appendzd221011zd2zz__evmodulez00
															(BgL_auxz00_8645, BgL_arg1902z00_2227);
												}}
												{
													obj_t BgL_iclausesz00_8656;
													obj_t BgL_clausesz00_8655;

													BgL_clausesz00_8655 = BgL_arg1898z00_2225;
													BgL_iclausesz00_8656 = BgL_arg1901z00_2226;
													BgL_iclausesz00_2204 = BgL_iclausesz00_8656;
													BgL_clausesz00_2203 = BgL_clausesz00_8655;
													goto BgL_zc3z04anonymousza31885ze3z87_2206;
												}
											}
									}
								else
									{	/* Eval/evmodule.scm 786 */
										obj_t BgL_arg1906z00_2231;

										{	/* Eval/evmodule.scm 786 */
											obj_t BgL_pairz00_4026;

											if (PAIRP(BgL_clausesz00_2203))
												{	/* Eval/evmodule.scm 786 */
													BgL_pairz00_4026 = BgL_clausesz00_2203;
												}
											else
												{
													obj_t BgL_auxz00_8659;

													BgL_auxz00_8659 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3188z00zz__evmodulez00,
														BINT(((long) 29558)),
														BGl_string3303z00zz__evmodulez00,
														BGl_string3190z00zz__evmodulez00,
														BgL_clausesz00_2203);
													FAILURE(BgL_auxz00_8659, BFALSE, BFALSE);
												}
											BgL_arg1906z00_2231 = CAR(BgL_pairz00_4026);
										}
										return
											BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_129,
											BGl_string3224z00zz__evmodulez00,
											BGl_string3335z00zz__evmodulez00, BgL_arg1906z00_2231);
									}
							}
					}
				}
			}
		}

	}



/* &<@anonymous:1916> */
	obj_t BGl_z62zc3z04anonymousza31916ze3ze5zz__evmodulez00(obj_t
		BgL_envz00_4525, obj_t BgL_pz00_4526)
	{
		{	/* Eval/evmodule.scm 757 */
			{	/* Eval/evmodule.scm 758 */
				obj_t BgL_e0z00_5462;

				{	/* Eval/evmodule.scm 758 */

					{	/* Eval/evmodule.scm 758 */
						obj_t BgL_iportz00_5463;

						if (INPUT_PORTP(BgL_pz00_4526))
							{	/* Eval/evmodule.scm 758 */
								BgL_iportz00_5463 = BgL_pz00_4526;
							}
						else
							{
								obj_t BgL_auxz00_8667;

								BgL_auxz00_8667 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3188z00zz__evmodulez00, BINT(((long) 28620)),
									BGl_string3336z00zz__evmodulez00,
									BGl_string3337z00zz__evmodulez00, BgL_pz00_4526);
								FAILURE(BgL_auxz00_8667, BFALSE, BFALSE);
							}
						{	/* Eval/evmodule.scm 758 */

							BgL_e0z00_5462 =
								BGl_readz00zz__readerz00(BgL_iportz00_5463, BFALSE);
				}}}
				{	/* Eval/evmodule.scm 759 */
					bool_t BgL_test4095z00_8672;

					if (PAIRP(BgL_e0z00_5462))
						{	/* Eval/evmodule.scm 759 */
							BgL_test4095z00_8672 =
								(CAR(BgL_e0z00_5462) == BGl_symbol3338z00zz__evmodulez00);
						}
					else
						{	/* Eval/evmodule.scm 759 */
							BgL_test4095z00_8672 = ((bool_t) 0);
						}
					if (BgL_test4095z00_8672)
						{	/* Eval/evmodule.scm 760 */
							obj_t BgL_val0_1178z00_5464;
							obj_t BgL_val1_1179z00_5465;

							BgL_val0_1178z00_5464 = CDR(BgL_e0z00_5462);
							{	/* Eval/evmodule.scm 760 */
								obj_t BgL_auxz00_8678;

								if (INPUT_PORTP(BgL_pz00_4526))
									{	/* Eval/evmodule.scm 760 */
										BgL_auxz00_8678 = BgL_pz00_4526;
									}
								else
									{
										obj_t BgL_auxz00_8681;

										BgL_auxz00_8681 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3188z00zz__evmodulez00, BINT(((long) 28726)),
											BGl_string3336z00zz__evmodulez00,
											BGl_string3337z00zz__evmodulez00, BgL_pz00_4526);
										FAILURE(BgL_auxz00_8681, BFALSE, BFALSE);
									}
								BgL_val1_1179z00_5465 =
									BGl_portzd2ze3listz31zz__readerz00
									(BGl_readzd2envzd2zz__readerz00, BgL_auxz00_8678);
							}
							{	/* Eval/evmodule.scm 760 */
								int BgL_res2567z00_5466;

								{	/* Eval/evmodule.scm 760 */
									int BgL_tmpz00_8686;

									BgL_tmpz00_8686 = (int) (((long) 2));
									BgL_res2567z00_5466 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_8686);
								} BgL_res2567z00_5466;
							}
							{	/* Eval/evmodule.scm 760 */
								int BgL_tmpz00_8689;

								BgL_tmpz00_8689 = (int) (((long) 1));
								BGL_MVALUES_VAL_SET(BgL_tmpz00_8689, BgL_val1_1179z00_5465);
							}
							return BgL_val0_1178z00_5464;
						}
					else
						{	/* Eval/evmodule.scm 761 */
							obj_t BgL_val1_1181z00_5467;

							{	/* Eval/evmodule.scm 761 */
								obj_t BgL_arg1920z00_5468;

								{	/* Eval/evmodule.scm 761 */
									obj_t BgL_auxz00_8692;

									if (INPUT_PORTP(BgL_pz00_4526))
										{	/* Eval/evmodule.scm 761 */
											BgL_auxz00_8692 = BgL_pz00_4526;
										}
									else
										{
											obj_t BgL_auxz00_8695;

											BgL_auxz00_8695 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3188z00zz__evmodulez00, BINT(((long) 28773)),
												BGl_string3336z00zz__evmodulez00,
												BGl_string3337z00zz__evmodulez00, BgL_pz00_4526);
											FAILURE(BgL_auxz00_8695, BFALSE, BFALSE);
										}
									BgL_arg1920z00_5468 =
										BGl_portzd2ze3listz31zz__readerz00
										(BGl_readzd2envzd2zz__readerz00, BgL_auxz00_8692);
								}
								BgL_val1_1181z00_5467 =
									MAKE_YOUNG_PAIR(BgL_e0z00_5462, BgL_arg1920z00_5468);
							}
							{	/* Eval/evmodule.scm 761 */
								int BgL_res2568z00_5469;

								{	/* Eval/evmodule.scm 761 */
									int BgL_tmpz00_8701;

									BgL_tmpz00_8701 = (int) (((long) 2));
									BgL_res2568z00_5469 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_8701);
								} BgL_res2568z00_5469;
							}
							{	/* Eval/evmodule.scm 761 */
								int BgL_tmpz00_8704;

								BgL_tmpz00_8704 = (int) (((long) 1));
								BGL_MVALUES_VAL_SET(BgL_tmpz00_8704, BgL_val1_1181z00_5467);
							}
							return BNIL;
						}
				}
			}
		}

	}



/* evmodule-step1 */
	obj_t BGl_evmodulezd2step1zd2zz__evmodulez00(obj_t BgL_modz00_130,
		obj_t BgL_clausesz00_131, obj_t BgL_locz00_132)
	{
		{	/* Eval/evmodule.scm 803 */
			{
				obj_t BgL_l1186z00_2286;

				BgL_l1186z00_2286 = BgL_clausesz00_131;
			BgL_zc3z04anonymousza31932ze3z87_2287:
				if (PAIRP(BgL_l1186z00_2286))
					{	/* Eval/evmodule.scm 804 */
						{	/* Eval/evmodule.scm 805 */
							obj_t BgL_clausez00_2289;

							BgL_clausez00_2289 = CAR(BgL_l1186z00_2286);
							BGL_MODULE_SET(BgL_modz00_130);
							{	/* Eval/evmodule.scm 806 */
								obj_t BgL_locz00_2290;

								{	/* Eval/evmodule.scm 806 */
									obj_t BgL__ortest_1081z00_2298;

									BgL__ortest_1081z00_2298 =
										BGl_getzd2sourcezd2locationz00zz__readerz00
										(BgL_clausez00_2289);
									if (CBOOL(BgL__ortest_1081z00_2298))
										{	/* Eval/evmodule.scm 806 */
											BgL_locz00_2290 = BgL__ortest_1081z00_2298;
										}
									else
										{	/* Eval/evmodule.scm 806 */
											BgL_locz00_2290 = BgL_locz00_132;
										}
								}
								{	/* Eval/evmodule.scm 807 */
									obj_t BgL_casezd2valuezd2_2291;

									{	/* Eval/evmodule.scm 807 */
										obj_t BgL_pairz00_4029;

										if (PAIRP(BgL_clausez00_2289))
											{	/* Eval/evmodule.scm 807 */
												BgL_pairz00_4029 = BgL_clausez00_2289;
											}
										else
											{
												obj_t BgL_auxz00_8716;

												BgL_auxz00_8716 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3188z00zz__evmodulez00,
													BINT(((long) 30326)),
													BGl_string3340z00zz__evmodulez00,
													BGl_string3190z00zz__evmodulez00, BgL_clausez00_2289);
												FAILURE(BgL_auxz00_8716, BFALSE, BFALSE);
											}
										BgL_casezd2valuezd2_2291 = CAR(BgL_pairz00_4029);
									}
									if (
										(BgL_casezd2valuezd2_2291 ==
											BGl_symbol3341z00zz__evmodulez00))
										{	/* Eval/evmodule.scm 807 */
											BGl_evmodulezd2libraryzd2zz__evmodulez00
												(BgL_clausez00_2289, BgL_locz00_2290);
										}
									else
										{	/* Eval/evmodule.scm 807 */
											if (
												(BgL_casezd2valuezd2_2291 ==
													BGl_symbol3343z00zz__evmodulez00))
												{	/* Eval/evmodule.scm 807 */
													BGl_evmodulezd2staticzd2zz__evmodulez00
														(BgL_modz00_130, BgL_clausez00_2289,
														BgL_locz00_2290, ((bool_t) 0));
												}
											else
												{	/* Eval/evmodule.scm 807 */
													if (
														(BgL_casezd2valuezd2_2291 ==
															BGl_symbol3345z00zz__evmodulez00))
														{	/* Eval/evmodule.scm 807 */
															BGl_evmodulezd2exportzd2zz__evmodulez00
																(BgL_modz00_130, BgL_clausez00_2289,
																BgL_locz00_2290, ((bool_t) 0));
														}
													else
														{	/* Eval/evmodule.scm 807 */
															if (
																(BgL_casezd2valuezd2_2291 ==
																	BGl_symbol3347z00zz__evmodulez00))
																{	/* Eval/evmodule.scm 807 */
																	BGl_evmodulezd2importzd2zz__evmodulez00
																		(BgL_modz00_130, BgL_clausez00_2289,
																		BgL_locz00_2290);
																}
															else
																{	/* Eval/evmodule.scm 807 */
																	if (
																		(BgL_casezd2valuezd2_2291 ==
																			BGl_symbol3232z00zz__evmodulez00))
																		{	/* Eval/evmodule.scm 807 */
																			BGl_evmodulezd2optionzd2zz__evmodulez00
																				(BgL_clausez00_2289, BgL_locz00_2290);
																		}
																	else
																		{	/* Eval/evmodule.scm 807 */
																			BUNSPEC;
																		}
																}
														}
												}
										}
								}
							}
						}
						{
							obj_t BgL_l1186z00_8736;

							BgL_l1186z00_8736 = CDR(BgL_l1186z00_2286);
							BgL_l1186z00_2286 = BgL_l1186z00_8736;
							goto BgL_zc3z04anonymousza31932ze3z87_2287;
						}
					}
				else
					{	/* Eval/evmodule.scm 804 */
						if (NULLP(BgL_l1186z00_2286))
							{	/* Eval/evmodule.scm 804 */
								return BTRUE;
							}
						else
							{	/* Eval/evmodule.scm 804 */
								return
									BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00
									(BGl_string3231z00zz__evmodulez00,
									BGl_string3221z00zz__evmodulez00, BgL_l1186z00_2286,
									BGl_string3188z00zz__evmodulez00, BINT(((long) 30204)));
		}}}}

	}



/* evmodule-step2 */
	obj_t BGl_evmodulezd2step2zd2zz__evmodulez00(obj_t BgL_modz00_133,
		obj_t BgL_clausesz00_134, obj_t BgL_locz00_135)
	{
		{	/* Eval/evmodule.scm 823 */
			{
				obj_t BgL_l1188z00_2303;

				BgL_l1188z00_2303 = BgL_clausesz00_134;
			BgL_zc3z04anonymousza31941ze3z87_2304:
				if (PAIRP(BgL_l1188z00_2303))
					{	/* Eval/evmodule.scm 824 */
						{	/* Eval/evmodule.scm 825 */
							obj_t BgL_clausez00_2306;

							BgL_clausez00_2306 = CAR(BgL_l1188z00_2303);
							BGL_MODULE_SET(BgL_modz00_133);
							{	/* Eval/evmodule.scm 826 */
								obj_t BgL_locz00_2307;

								{	/* Eval/evmodule.scm 826 */
									obj_t BgL__ortest_1082z00_2315;

									BgL__ortest_1082z00_2315 =
										BGl_getzd2sourcezd2locationz00zz__readerz00
										(BgL_clausez00_2306);
									if (CBOOL(BgL__ortest_1082z00_2315))
										{	/* Eval/evmodule.scm 826 */
											BgL_locz00_2307 = BgL__ortest_1082z00_2315;
										}
									else
										{	/* Eval/evmodule.scm 826 */
											BgL_locz00_2307 = BgL_locz00_135;
										}
								}
								{	/* Eval/evmodule.scm 827 */
									obj_t BgL_casezd2valuezd2_2308;

									{	/* Eval/evmodule.scm 827 */
										obj_t BgL_pairz00_4044;

										if (PAIRP(BgL_clausez00_2306))
											{	/* Eval/evmodule.scm 827 */
												BgL_pairz00_4044 = BgL_clausez00_2306;
											}
										else
											{
												obj_t BgL_auxz00_8751;

												BgL_auxz00_8751 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3188z00zz__evmodulez00,
													BINT(((long) 31045)),
													BGl_string3349z00zz__evmodulez00,
													BGl_string3190z00zz__evmodulez00, BgL_clausez00_2306);
												FAILURE(BgL_auxz00_8751, BFALSE, BFALSE);
											}
										BgL_casezd2valuezd2_2308 = CAR(BgL_pairz00_4044);
									}
									{	/* Eval/evmodule.scm 827 */
										bool_t BgL_test4111z00_8756;

										{	/* Eval/evmodule.scm 827 */
											bool_t BgL__ortest_1083z00_2313;

											BgL__ortest_1083z00_2313 =
												(BgL_casezd2valuezd2_2308 ==
												BGl_symbol3350z00zz__evmodulez00);
											if (BgL__ortest_1083z00_2313)
												{	/* Eval/evmodule.scm 827 */
													BgL_test4111z00_8756 = BgL__ortest_1083z00_2313;
												}
											else
												{	/* Eval/evmodule.scm 827 */
													bool_t BgL__ortest_1084z00_2314;

													BgL__ortest_1084z00_2314 =
														(BgL_casezd2valuezd2_2308 ==
														BGl_symbol3352z00zz__evmodulez00);
													if (BgL__ortest_1084z00_2314)
														{	/* Eval/evmodule.scm 827 */
															BgL_test4111z00_8756 = BgL__ortest_1084z00_2314;
														}
													else
														{	/* Eval/evmodule.scm 827 */
															BgL_test4111z00_8756 =
																(BgL_casezd2valuezd2_2308 ==
																BGl_symbol3354z00zz__evmodulez00);
														}
												}
										}
										if (BgL_test4111z00_8756)
											{	/* Eval/evmodule.scm 827 */
												BGl_evmodulezd2importzd2zz__evmodulez00(BgL_modz00_133,
													BgL_clausez00_2306, BgL_locz00_2307);
											}
										else
											{	/* Eval/evmodule.scm 827 */
												if (
													(BgL_casezd2valuezd2_2308 ==
														BGl_symbol3356z00zz__evmodulez00))
													{	/* Eval/evmodule.scm 827 */
														BGl_evmodulezd2fromzd2zz__evmodulez00
															(BgL_modz00_133, BgL_clausez00_2306,
															BgL_locz00_2307);
													}
												else
													{	/* Eval/evmodule.scm 827 */
														BUNSPEC;
													}
											}
									}
								}
							}
						}
						{
							obj_t BgL_l1188z00_8766;

							BgL_l1188z00_8766 = CDR(BgL_l1188z00_2303);
							BgL_l1188z00_2303 = BgL_l1188z00_8766;
							goto BgL_zc3z04anonymousza31941ze3z87_2304;
						}
					}
				else
					{	/* Eval/evmodule.scm 824 */
						if (NULLP(BgL_l1188z00_2303))
							{	/* Eval/evmodule.scm 824 */
								return BTRUE;
							}
						else
							{	/* Eval/evmodule.scm 824 */
								return
									BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00
									(BGl_string3231z00zz__evmodulez00,
									BGl_string3221z00zz__evmodulez00, BgL_l1188z00_2303,
									BGl_string3188z00zz__evmodulez00, BINT(((long) 30923)));
		}}}}

	}



/* evmodule-step3 */
	obj_t BGl_evmodulezd2step3zd2zz__evmodulez00(obj_t BgL_modz00_136,
		obj_t BgL_clausesz00_137, obj_t BgL_locz00_138)
	{
		{	/* Eval/evmodule.scm 837 */
			{
				obj_t BgL_l1190z00_2320;

				BgL_l1190z00_2320 = BgL_clausesz00_137;
			BgL_zc3z04anonymousza31947ze3z87_2321:
				if (PAIRP(BgL_l1190z00_2320))
					{	/* Eval/evmodule.scm 838 */
						{	/* Eval/evmodule.scm 839 */
							obj_t BgL_clausez00_2323;

							BgL_clausez00_2323 = CAR(BgL_l1190z00_2320);
							BGL_MODULE_SET(BgL_modz00_136);
							{	/* Eval/evmodule.scm 840 */
								obj_t BgL_locz00_2324;

								{	/* Eval/evmodule.scm 840 */
									obj_t BgL__ortest_1085z00_2328;

									BgL__ortest_1085z00_2328 =
										BGl_getzd2sourcezd2locationz00zz__readerz00
										(BgL_clausez00_2323);
									if (CBOOL(BgL__ortest_1085z00_2328))
										{	/* Eval/evmodule.scm 840 */
											BgL_locz00_2324 = BgL__ortest_1085z00_2328;
										}
									else
										{	/* Eval/evmodule.scm 840 */
											BgL_locz00_2324 = BgL_locz00_138;
										}
								}
								{	/* Eval/evmodule.scm 841 */
									obj_t BgL_casezd2valuezd2_2325;

									{	/* Eval/evmodule.scm 841 */
										obj_t BgL_pairz00_4049;

										if (PAIRP(BgL_clausez00_2323))
											{	/* Eval/evmodule.scm 841 */
												BgL_pairz00_4049 = BgL_clausez00_2323;
											}
										else
											{
												obj_t BgL_auxz00_8781;

												BgL_auxz00_8781 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3188z00zz__evmodulez00,
													BINT(((long) 31588)),
													BGl_string3358z00zz__evmodulez00,
													BGl_string3190z00zz__evmodulez00, BgL_clausez00_2323);
												FAILURE(BgL_auxz00_8781, BFALSE, BFALSE);
											}
										BgL_casezd2valuezd2_2325 = CAR(BgL_pairz00_4049);
									}
									if (
										(BgL_casezd2valuezd2_2325 ==
											BGl_symbol3343z00zz__evmodulez00))
										{	/* Eval/evmodule.scm 841 */
											BGl_evmodulezd2staticzd2zz__evmodulez00(BgL_modz00_136,
												BgL_clausez00_2323, BgL_locz00_2324, ((bool_t) 1));
										}
									else
										{	/* Eval/evmodule.scm 841 */
											if (
												(BgL_casezd2valuezd2_2325 ==
													BGl_symbol3345z00zz__evmodulez00))
												{	/* Eval/evmodule.scm 841 */
													BGl_evmodulezd2exportzd2zz__evmodulez00
														(BgL_modz00_136, BgL_clausez00_2323,
														BgL_locz00_2324, ((bool_t) 1));
												}
											else
												{	/* Eval/evmodule.scm 841 */
													BUNSPEC;
												}
										}
								}
							}
						}
						{
							obj_t BgL_l1190z00_8792;

							BgL_l1190z00_8792 = CDR(BgL_l1190z00_2320);
							BgL_l1190z00_2320 = BgL_l1190z00_8792;
							goto BgL_zc3z04anonymousza31947ze3z87_2321;
						}
					}
				else
					{	/* Eval/evmodule.scm 838 */
						if (NULLP(BgL_l1190z00_2320))
							{	/* Eval/evmodule.scm 838 */
								return BTRUE;
							}
						else
							{	/* Eval/evmodule.scm 838 */
								return
									BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00
									(BGl_string3231z00zz__evmodulez00,
									BGl_string3221z00zz__evmodulez00, BgL_l1190z00_2320,
									BGl_string3188z00zz__evmodulez00, BINT(((long) 31466)));
		}}}}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zz__evmodulez00(obj_t BgL_c0z00_4547,
		obj_t BgL_locz00_4546, obj_t BgL_cz00_2345)
	{
		{	/* Eval/evmodule.scm 854 */
		BGl_loopze70ze7zz__evmodulez00:
			{	/* Eval/evmodule.scm 856 */
				bool_t BgL_test4122z00_8798;

				if (PAIRP(BgL_cz00_2345))
					{	/* Eval/evmodule.scm 856 */
						if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_cz00_2345))
							{	/* Eval/evmodule.scm 856 */
								obj_t BgL_tmpz00_8803;

								BgL_tmpz00_8803 = CAR(BgL_cz00_2345);
								BgL_test4122z00_8798 = SYMBOLP(BgL_tmpz00_8803);
							}
						else
							{	/* Eval/evmodule.scm 856 */
								BgL_test4122z00_8798 = ((bool_t) 0);
							}
					}
				else
					{	/* Eval/evmodule.scm 856 */
						BgL_test4122z00_8798 = ((bool_t) 0);
					}
				if (BgL_test4122z00_8798)
					{	/* Eval/evmodule.scm 856 */
						if ((CAR(BgL_cz00_2345) == BGl_symbol3359z00zz__evmodulez00))
							{	/* Eval/evmodule.scm 860 */
								obj_t BgL_ncz00_2353;

								BgL_ncz00_2353 = BGl_expandz00zz__expandz00(BgL_cz00_2345);
								if (PAIRP(BgL_ncz00_2353))
									{	/* Eval/evmodule.scm 862 */
										if (
											(CAR(BgL_ncz00_2353) == BGl_symbol3361z00zz__evmodulez00))
											{	/* Eval/evmodule.scm 863 */
												return
													BGl_zc3z04anonymousza31970ze3ze70z60zz__evmodulez00
													(BgL_c0z00_4547, BgL_locz00_4546,
													CDR(BgL_ncz00_2353));
											}
										else
											{
												obj_t BgL_cz00_8817;

												BgL_cz00_8817 = BgL_ncz00_2353;
												BgL_cz00_2345 = BgL_cz00_8817;
												goto BGl_loopze70ze7zz__evmodulez00;
											}
									}
								else
									{	/* Eval/evmodule.scm 862 */
										if ((BgL_ncz00_2353 == BUNSPEC))
											{	/* Eval/evmodule.scm 866 */
												return BNIL;
											}
										else
											{	/* Eval/evmodule.scm 869 */
												obj_t BgL_list1978z00_2369;

												BgL_list1978z00_2369 =
													MAKE_YOUNG_PAIR(BgL_ncz00_2353, BNIL);
												return BgL_list1978z00_2369;
											}
									}
							}
						else
							{	/* Eval/evmodule.scm 871 */
								obj_t BgL_list1979z00_2370;

								BgL_list1979z00_2370 = MAKE_YOUNG_PAIR(BgL_cz00_2345, BNIL);
								return BgL_list1979z00_2370;
							}
					}
				else
					{	/* Eval/evmodule.scm 857 */
						obj_t BgL_locz00_2372;

						{	/* Eval/evmodule.scm 857 */
							obj_t BgL__ortest_1086z00_2373;

							BgL__ortest_1086z00_2373 =
								BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_cz00_2345);
							if (CBOOL(BgL__ortest_1086z00_2373))
								{	/* Eval/evmodule.scm 857 */
									BgL_locz00_2372 = BgL__ortest_1086z00_2373;
								}
							else
								{	/* Eval/evmodule.scm 857 */
									BgL_locz00_2372 = BgL_locz00_4546;
								}
						}
						return
							BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_2372,
							BGl_string3224z00zz__evmodulez00,
							BGl_string3335z00zz__evmodulez00, BgL_c0z00_4547);
					}
			}
		}

	}



/* <@anonymous:1970>~0 */
	obj_t BGl_zc3z04anonymousza31970ze3ze70z60zz__evmodulez00(obj_t
		BgL_c0z00_4549, obj_t BgL_locz00_4548, obj_t BgL_l1193z00_2359)
	{
		{	/* Eval/evmodule.scm 864 */
			if (NULLP(BgL_l1193z00_2359))
				{	/* Eval/evmodule.scm 864 */
					return BNIL;
				}
			else
				{	/* Eval/evmodule.scm 864 */
					obj_t BgL_arg1972z00_2362;
					obj_t BgL_arg1973z00_2363;

					{	/* Eval/evmodule.scm 864 */
						obj_t BgL_arg1974z00_2364;

						{	/* Eval/evmodule.scm 864 */
							obj_t BgL_pairz00_4060;

							if (PAIRP(BgL_l1193z00_2359))
								{	/* Eval/evmodule.scm 864 */
									BgL_pairz00_4060 = BgL_l1193z00_2359;
								}
							else
								{
									obj_t BgL_auxz00_8830;

									BgL_auxz00_8830 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3188z00zz__evmodulez00, BINT(((long) 32401)),
										BGl_string3363z00zz__evmodulez00,
										BGl_string3190z00zz__evmodulez00, BgL_l1193z00_2359);
									FAILURE(BgL_auxz00_8830, BFALSE, BFALSE);
								}
							BgL_arg1974z00_2364 = CAR(BgL_pairz00_4060);
						}
						BgL_arg1972z00_2362 =
							BGl_loopze70ze7zz__evmodulez00(BgL_c0z00_4549, BgL_locz00_4548,
							BgL_arg1974z00_2364);
					}
					{	/* Eval/evmodule.scm 864 */
						obj_t BgL_arg1975z00_2365;

						{	/* Eval/evmodule.scm 864 */
							obj_t BgL_pairz00_4061;

							if (PAIRP(BgL_l1193z00_2359))
								{	/* Eval/evmodule.scm 864 */
									BgL_pairz00_4061 = BgL_l1193z00_2359;
								}
							else
								{
									obj_t BgL_auxz00_8838;

									BgL_auxz00_8838 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3188z00zz__evmodulez00, BINT(((long) 32401)),
										BGl_string3363z00zz__evmodulez00,
										BGl_string3190z00zz__evmodulez00, BgL_l1193z00_2359);
									FAILURE(BgL_auxz00_8838, BFALSE, BFALSE);
								}
							BgL_arg1975z00_2365 = CDR(BgL_pairz00_4061);
						}
						BgL_arg1973z00_2363 =
							BGl_zc3z04anonymousza31970ze3ze70z60zz__evmodulez00
							(BgL_c0z00_4549, BgL_locz00_4548, BgL_arg1975z00_2365);
					}
					{	/* Eval/evmodule.scm 864 */
						obj_t BgL_auxz00_8844;

						{	/* Eval/evmodule.scm 864 */
							bool_t BgL_test4133z00_8845;

							if (PAIRP(BgL_arg1972z00_2362))
								{	/* Eval/evmodule.scm 864 */
									BgL_test4133z00_8845 = ((bool_t) 1);
								}
							else
								{	/* Eval/evmodule.scm 864 */
									BgL_test4133z00_8845 = NULLP(BgL_arg1972z00_2362);
								}
							if (BgL_test4133z00_8845)
								{	/* Eval/evmodule.scm 864 */
									BgL_auxz00_8844 = BgL_arg1972z00_2362;
								}
							else
								{
									obj_t BgL_auxz00_8849;

									BgL_auxz00_8849 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3188z00zz__evmodulez00, BINT(((long) 32401)),
										BGl_string3363z00zz__evmodulez00,
										BGl_string3246z00zz__evmodulez00, BgL_arg1972z00_2362);
									FAILURE(BgL_auxz00_8849, BFALSE, BFALSE);
						}}
						return bgl_append2(BgL_auxz00_8844, BgL_arg1973z00_2363);
					}
				}
		}

	}



/* evmodule-cond-expand-clause~0 */
	obj_t BGl_evmodulezd2condzd2expandzd2clauseze70z35zz__evmodulez00(obj_t
		BgL_locz00_4550, obj_t BgL_c0z00_2342)
	{
		{	/* Eval/evmodule.scm 871 */
			return
				BGl_loopze70ze7zz__evmodulez00(BgL_c0z00_2342, BgL_locz00_4550,
				BgL_c0z00_2342);
		}

	}



/* <@anonymous:1953>~0 */
	obj_t BGl_zc3z04anonymousza31953ze3ze70z60zz__evmodulez00(obj_t
		BgL_locz00_4551, obj_t BgL_l1196z00_2334)
	{
		{	/* Eval/evmodule.scm 873 */
			if (NULLP(BgL_l1196z00_2334))
				{	/* Eval/evmodule.scm 873 */
					return BNIL;
				}
			else
				{	/* Eval/evmodule.scm 873 */
					obj_t BgL_arg1955z00_2337;
					obj_t BgL_arg1956z00_2338;

					{	/* Eval/evmodule.scm 873 */
						obj_t BgL_arg1957z00_2339;

						{	/* Eval/evmodule.scm 873 */
							obj_t BgL_pairz00_4065;

							if (PAIRP(BgL_l1196z00_2334))
								{	/* Eval/evmodule.scm 873 */
									BgL_pairz00_4065 = BgL_l1196z00_2334;
								}
							else
								{
									obj_t BgL_auxz00_8859;

									BgL_auxz00_8859 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3188z00zz__evmodulez00, BINT(((long) 32533)),
										BGl_string3364z00zz__evmodulez00,
										BGl_string3190z00zz__evmodulez00, BgL_l1196z00_2334);
									FAILURE(BgL_auxz00_8859, BFALSE, BFALSE);
								}
							BgL_arg1957z00_2339 = CAR(BgL_pairz00_4065);
						}
						BgL_arg1955z00_2337 =
							BGl_evmodulezd2condzd2expandzd2clauseze70z35zz__evmodulez00
							(BgL_locz00_4551, BgL_arg1957z00_2339);
					}
					{	/* Eval/evmodule.scm 873 */
						obj_t BgL_arg1958z00_2340;

						{	/* Eval/evmodule.scm 873 */
							obj_t BgL_pairz00_4066;

							if (PAIRP(BgL_l1196z00_2334))
								{	/* Eval/evmodule.scm 873 */
									BgL_pairz00_4066 = BgL_l1196z00_2334;
								}
							else
								{
									obj_t BgL_auxz00_8867;

									BgL_auxz00_8867 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3188z00zz__evmodulez00, BINT(((long) 32533)),
										BGl_string3364z00zz__evmodulez00,
										BGl_string3190z00zz__evmodulez00, BgL_l1196z00_2334);
									FAILURE(BgL_auxz00_8867, BFALSE, BFALSE);
								}
							BgL_arg1958z00_2340 = CDR(BgL_pairz00_4066);
						}
						BgL_arg1956z00_2338 =
							BGl_zc3z04anonymousza31953ze3ze70z60zz__evmodulez00
							(BgL_locz00_4551, BgL_arg1958z00_2340);
					}
					{	/* Eval/evmodule.scm 873 */
						obj_t BgL_auxz00_8873;

						{	/* Eval/evmodule.scm 873 */
							bool_t BgL_test4138z00_8874;

							if (PAIRP(BgL_arg1955z00_2337))
								{	/* Eval/evmodule.scm 873 */
									BgL_test4138z00_8874 = ((bool_t) 1);
								}
							else
								{	/* Eval/evmodule.scm 873 */
									BgL_test4138z00_8874 = NULLP(BgL_arg1955z00_2337);
								}
							if (BgL_test4138z00_8874)
								{	/* Eval/evmodule.scm 873 */
									BgL_auxz00_8873 = BgL_arg1955z00_2337;
								}
							else
								{
									obj_t BgL_auxz00_8878;

									BgL_auxz00_8878 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3188z00zz__evmodulez00, BINT(((long) 32533)),
										BGl_string3364z00zz__evmodulez00,
										BGl_string3246z00zz__evmodulez00, BgL_arg1955z00_2337);
									FAILURE(BgL_auxz00_8878, BFALSE, BFALSE);
						}}
						return bgl_append2(BgL_auxz00_8873, BgL_arg1956z00_2338);
					}
				}
		}

	}



/* evmodule */
	BGL_EXPORTED_DEF obj_t BGl_evmodulez00zz__evmodulez00(obj_t BgL_expz00_145,
		obj_t BgL_locz00_146)
	{
		{	/* Eval/evmodule.scm 899 */
			{	/* Eval/evmodule.scm 900 */
				obj_t BgL_locz00_2383;

				{	/* Eval/evmodule.scm 900 */
					obj_t BgL__ortest_1087z00_2411;

					BgL__ortest_1087z00_2411 =
						BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_expz00_145);
					if (CBOOL(BgL__ortest_1087z00_2411))
						{	/* Eval/evmodule.scm 900 */
							BgL_locz00_2383 = BgL__ortest_1087z00_2411;
						}
					else
						{	/* Eval/evmodule.scm 900 */
							BgL_locz00_2383 = BgL_locz00_146;
						}
				}
				{	/* Eval/evmodule.scm 900 */
					obj_t BgL_hdlz00_2384;

					BgL_hdlz00_2384 =
						BGl_bigloozd2modulezd2extensionzd2handlerzd2zz__paramz00();
					{	/* Eval/evmodule.scm 901 */

						{
							obj_t BgL_namez00_2385;
							obj_t BgL_clausesz00_2386;

							if (NULLP(BgL_expz00_145))
								{	/* Eval/evmodule.scm 902 */
									return
										BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_2383,
										BGl_string3224z00zz__evmodulez00,
										BGl_string3368z00zz__evmodulez00, BgL_expz00_145);
								}
							else
								{	/* Eval/evmodule.scm 902 */
									obj_t BgL_cdrzd2889zd2_2391;

									BgL_cdrzd2889zd2_2391 = CDR(BgL_expz00_145);
									if ((CAR(BgL_expz00_145) == BGl_symbol3195z00zz__evmodulez00))
										{	/* Eval/evmodule.scm 902 */
											if (PAIRP(BgL_cdrzd2889zd2_2391))
												{	/* Eval/evmodule.scm 902 */
													obj_t BgL_carzd2892zd2_2395;

													BgL_carzd2892zd2_2395 = CAR(BgL_cdrzd2889zd2_2391);
													if (SYMBOLP(BgL_carzd2892zd2_2395))
														{	/* Eval/evmodule.scm 902 */
															BgL_namez00_2385 = BgL_carzd2892zd2_2395;
															BgL_clausesz00_2386 = CDR(BgL_cdrzd2889zd2_2391);
															if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
																(BgL_clausesz00_2386))
																{	/* Eval/evmodule.scm 906 */
																	obj_t BgL_pathz00_2400;

																	{	/* Eval/evmodule.scm 906 */
																		obj_t BgL__ortest_1088z00_2410;

																		BgL__ortest_1088z00_2410 =
																			BGl_evcompilezd2loczd2filenamez00zz__evcompilez00
																			(BgL_locz00_2383);
																		if (CBOOL(BgL__ortest_1088z00_2410))
																			{	/* Eval/evmodule.scm 906 */
																				BgL_pathz00_2400 =
																					BgL__ortest_1088z00_2410;
																			}
																		else
																			{	/* Eval/evmodule.scm 906 */
																				BgL_pathz00_2400 =
																					BGl_string3365z00zz__evmodulez00;
																			}
																	}
																	{	/* Eval/evmodule.scm 906 */
																		obj_t BgL_modz00_2401;

																		BgL_modz00_2401 =
																			BGl_makezd2evmodulezd2zz__evmodulez00
																			(BgL_namez00_2385, BgL_pathz00_2400,
																			BgL_locz00_2383);
																		{	/* Eval/evmodule.scm 907 */

																			{	/* Eval/evmodule.scm 908 */
																				obj_t BgL_arg1991z00_2402;

																				{	/* Eval/evmodule.scm 908 */
																					obj_t BgL_auxz00_8905;

																					if (STRINGP(BgL_pathz00_2400))
																						{	/* Eval/evmodule.scm 908 */
																							BgL_auxz00_8905 =
																								BgL_pathz00_2400;
																						}
																					else
																						{
																							obj_t BgL_auxz00_8908;

																							BgL_auxz00_8908 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string3188z00zz__evmodulez00,
																								BINT(((long) 34296)),
																								BGl_string3366z00zz__evmodulez00,
																								BGl_string3202z00zz__evmodulez00,
																								BgL_pathz00_2400);
																							FAILURE(BgL_auxz00_8908, BFALSE,
																								BFALSE);
																						}
																					BgL_arg1991z00_2402 =
																						BGl_dirnamez00zz__osz00
																						(BgL_auxz00_8905);
																				}
																				BGl_modulezd2loadzd2accesszd2filezd2zz__modulez00
																					(BgL_arg1991z00_2402);
																			}
																			if (PROCEDUREP(BgL_hdlz00_2384))
																				{	/* Eval/evmodule.scm 910 */
																					obj_t BgL_arg1993z00_2404;

																					BgL_arg1993z00_2404 =
																						PROCEDURE_ENTRY(BgL_hdlz00_2384)
																						(BgL_hdlz00_2384, BgL_expz00_145,
																						BEOA);
																					{	/* Eval/evmodule.scm 129 */
																						int BgL_tmpz00_8920;

																						BgL_tmpz00_8920 =
																							(int) (((long) 6));
																						STRUCT_SET(BgL_modz00_2401,
																							BgL_tmpz00_8920,
																							BgL_arg1993z00_2404);
																				}}
																			else
																				{	/* Eval/evmodule.scm 909 */
																					BFALSE;
																				}
																			{	/* Eval/evmodule.scm 911 */
																				obj_t BgL_exitd1089z00_2405;

																				BgL_exitd1089z00_2405 =
																					BGL_EXITD_TOP_AS_OBJ();
																				{	/* Eval/evmodule.scm 913 */
																					obj_t
																						BgL_zc3z04anonymousza31994ze3z87_4527;
																					BgL_zc3z04anonymousza31994ze3z87_4527
																						=
																						MAKE_FX_PROCEDURE
																						(BGl_z62zc3z04anonymousza31994ze3ze5zz__evmodulez00,
																						(int) (((long) 0)),
																						(int) (((long) 1)));
																					PROCEDURE_SET
																						(BgL_zc3z04anonymousza31994ze3z87_4527,
																						(int) (((long) 0)),
																						BgL_modz00_2401);
																					BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
																						(BgL_exitd1089z00_2405,
																						BgL_zc3z04anonymousza31994ze3z87_4527);
																					{	/* Eval/evmodule.scm 912 */
																						obj_t BgL_tmp1091z00_2407;

																						{	/* Eval/evmodule.scm 880 */
																							obj_t BgL_mclausesz00_4073;

																							BgL_mclausesz00_4073 =
																								BGl_zc3z04anonymousza31953ze3ze70z60zz__evmodulez00
																								(BgL_locz00_2383,
																								BgL_clausesz00_2386);
																							{	/* Eval/evmodule.scm 881 */
																								obj_t BgL_iclausesz00_4074;

																								BgL_iclausesz00_4074 =
																									BGl_evmodulezd2includezd2zz__evmodulez00
																									(BgL_modz00_2401,
																									BgL_mclausesz00_4073,
																									BgL_locz00_2383);
																								{	/* Eval/evmodule.scm 882 */
																									obj_t BgL_iexprsz00_4075;

																									{	/* Eval/evmodule.scm 886 */
																										int BgL_tmpz00_8932;

																										BgL_tmpz00_8932 =
																											(int) (((long) 1));
																										BgL_iexprsz00_4075 =
																											BGL_MVALUES_VAL
																											(BgL_tmpz00_8932);
																									}
																									BGl_evmodulezd2step1zd2zz__evmodulez00
																										(BgL_modz00_2401,
																										BgL_iclausesz00_4074,
																										BgL_locz00_2383);
																									BGl_evmodulezd2step2zd2zz__evmodulez00
																										(BgL_modz00_2401,
																										BgL_iclausesz00_4074,
																										BgL_locz00_2383);
																									BGl_evmodulezd2step3zd2zz__evmodulez00
																										(BgL_modz00_2401,
																										BgL_iclausesz00_4074,
																										BgL_locz00_2383);
																									{	/* Eval/evmodule.scm 892 */
																										obj_t BgL_arg1982z00_4076;

																										{	/* Eval/evmodule.scm 892 */
																											obj_t BgL_auxz00_8938;

																											{	/* Eval/evmodule.scm 892 */
																												bool_t
																													BgL_test4149z00_8939;
																												if (PAIRP
																													(BgL_iexprsz00_4075))
																													{	/* Eval/evmodule.scm 892 */
																														BgL_test4149z00_8939
																															= ((bool_t) 1);
																													}
																												else
																													{	/* Eval/evmodule.scm 892 */
																														BgL_test4149z00_8939
																															=
																															NULLP
																															(BgL_iexprsz00_4075);
																													}
																												if (BgL_test4149z00_8939)
																													{	/* Eval/evmodule.scm 892 */
																														BgL_auxz00_8938 =
																															BgL_iexprsz00_4075;
																													}
																												else
																													{
																														obj_t
																															BgL_auxz00_8943;
																														BgL_auxz00_8943 =
																															BGl_typezd2errorzd2zz__errorz00
																															(BGl_string3188z00zz__evmodulez00,
																															BINT(((long)
																																	33476)),
																															BGl_string3366z00zz__evmodulez00,
																															BGl_string3246z00zz__evmodulez00,
																															BgL_iexprsz00_4075);
																														FAILURE
																															(BgL_auxz00_8943,
																															BFALSE, BFALSE);
																											}}
																											BgL_arg1982z00_4076 =
																												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																												(BgL_auxz00_8938, BNIL);
																										}
																										BgL_tmp1091z00_2407 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol3361z00zz__evmodulez00,
																											BgL_arg1982z00_4076);
																						}}}}
																						BGl_exitdzd2popzd2protectz12z12zz__bexitz00
																							(BgL_exitd1089z00_2405);
																						BGL_MODULE_SET(BgL_modz00_2401);
																						return BgL_tmp1091z00_2407;
																					}
																				}
																			}
																		}
																	}
																}
															else
																{	/* Eval/evmodule.scm 904 */
																	return
																		BGl_evcompilezd2errorzd2zz__evcompilez00
																		(BgL_locz00_2383,
																		BGl_string3224z00zz__evmodulez00,
																		BGl_string3367z00zz__evmodulez00,
																		BgL_clausesz00_2386);
																}
														}
													else
														{	/* Eval/evmodule.scm 902 */
															return
																BGl_evcompilezd2errorzd2zz__evcompilez00
																(BgL_locz00_2383,
																BGl_string3224z00zz__evmodulez00,
																BGl_string3368z00zz__evmodulez00,
																BgL_expz00_145);
														}
												}
											else
												{	/* Eval/evmodule.scm 902 */
													return
														BGl_evcompilezd2errorzd2zz__evcompilez00
														(BgL_locz00_2383, BGl_string3224z00zz__evmodulez00,
														BGl_string3368z00zz__evmodulez00, BgL_expz00_145);
												}
										}
									else
										{	/* Eval/evmodule.scm 902 */
											return
												BGl_evcompilezd2errorzd2zz__evcompilez00
												(BgL_locz00_2383, BGl_string3224z00zz__evmodulez00,
												BGl_string3368z00zz__evmodulez00, BgL_expz00_145);
										}
								}
						}
					}
				}
			}
		}

	}



/* &evmodule */
	obj_t BGl_z62evmodulez62zz__evmodulez00(obj_t BgL_envz00_4528,
		obj_t BgL_expz00_4529, obj_t BgL_locz00_4530)
	{
		{	/* Eval/evmodule.scm 899 */
			{	/* Eval/evmodule.scm 900 */
				obj_t BgL_auxz00_8956;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_expz00_4529))
					{	/* Eval/evmodule.scm 900 */
						BgL_auxz00_8956 = BgL_expz00_4529;
					}
				else
					{
						obj_t BgL_auxz00_8959;

						BgL_auxz00_8959 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__evmodulez00,
							BINT(((long) 33897)), BGl_string3369z00zz__evmodulez00,
							BGl_string3246z00zz__evmodulez00, BgL_expz00_4529);
						FAILURE(BgL_auxz00_8959, BFALSE, BFALSE);
					}
				return BGl_evmodulez00zz__evmodulez00(BgL_auxz00_8956, BgL_locz00_4530);
			}
		}

	}



/* &<@anonymous:1994> */
	obj_t BGl_z62zc3z04anonymousza31994ze3ze5zz__evmodulez00(obj_t
		BgL_envz00_4531)
	{
		{	/* Eval/evmodule.scm 911 */
			{	/* Eval/evmodule.scm 913 */
				obj_t BgL_modz00_4532;

				BgL_modz00_4532 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4531, (int) (((long) 0))));
				return BGL_MODULE_SET(BgL_modz00_4532);
			}
		}

	}



/* evmodule-comp! */
	BGL_EXPORTED_DEF obj_t BGl_evmodulezd2compz12zc0zz__evmodulez00(obj_t
		BgL_idz00_147, obj_t BgL_pathz00_148, obj_t BgL_locz00_149,
		obj_t BgL_exportsz00_150)
	{
		{	/* Eval/evmodule.scm 920 */
			{	/* Eval/evmodule.scm 921 */
				obj_t BgL_modz00_2412;

				BgL_modz00_2412 =
					BGl_makezd2evmodulezd2zz__evmodulez00(BgL_idz00_147, BgL_pathz00_148,
					BgL_locz00_149);
				{
					obj_t BgL_l1197z00_2414;

					BgL_l1197z00_2414 = BgL_exportsz00_150;
				BgL_zc3z04anonymousza31995ze3z87_2415:
					if (PAIRP(BgL_l1197z00_2414))
						{	/* Eval/evmodule.scm 922 */
							{	/* Eval/evmodule.scm 923 */
								obj_t BgL_gz00_2417;

								BgL_gz00_2417 = CAR(BgL_l1197z00_2414);
								{	/* Eval/evmodule.scm 923 */
									obj_t BgL_idz00_2418;
									obj_t BgL_valz00_2419;

									{	/* Eval/evmodule.scm 923 */
										obj_t BgL_evalzd2globalzd2_4086;

										if (VECTORP(BgL_gz00_2417))
											{	/* Eval/evmodule.scm 923 */
												BgL_evalzd2globalzd2_4086 = BgL_gz00_2417;
											}
										else
											{
												obj_t BgL_auxz00_8974;

												BgL_auxz00_8974 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3188z00zz__evmodulez00,
													BINT(((long) 34920)),
													BGl_string3370z00zz__evmodulez00,
													BGl_string3212z00zz__evmodulez00, BgL_gz00_2417);
												FAILURE(BgL_auxz00_8974, BFALSE, BFALSE);
											}
										BgL_idz00_2418 =
											VECTOR_REF(BgL_evalzd2globalzd2_4086, ((long) 1));
									}
									{	/* Eval/evmodule.scm 924 */
										obj_t BgL_evalzd2globalzd2_4088;

										if (VECTORP(BgL_gz00_2417))
											{	/* Eval/evmodule.scm 924 */
												BgL_evalzd2globalzd2_4088 = BgL_gz00_2417;
											}
										else
											{
												obj_t BgL_auxz00_8981;

												BgL_auxz00_8981 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3188z00zz__evmodulez00,
													BINT(((long) 34952)),
													BGl_string3370z00zz__evmodulez00,
													BGl_string3212z00zz__evmodulez00, BgL_gz00_2417);
												FAILURE(BgL_auxz00_8981, BFALSE, BFALSE);
											}
										BgL_valz00_2419 =
											VECTOR_REF(BgL_evalzd2globalzd2_4088, ((long) 2));
									}
									if (BGl_classzf3zf3zz__objectz00(BgL_valz00_2419))
										{	/* Eval/evmodule.scm 925 */
											{	/* Eval/evmodule.scm 926 */
												obj_t BgL_auxz00_8988;

												if (BGl_classzf3zf3zz__objectz00(BgL_valz00_2419))
													{	/* Eval/evmodule.scm 926 */
														BgL_auxz00_8988 = BgL_valz00_2419;
													}
												else
													{
														obj_t BgL_auxz00_8991;

														BgL_auxz00_8991 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3188z00zz__evmodulez00,
															BINT(((long) 35013)),
															BGl_string3370z00zz__evmodulez00,
															BGl_string3244z00zz__evmodulez00,
															BgL_valz00_2419);
														FAILURE(BgL_auxz00_8991, BFALSE, BFALSE);
													}
												BGl_evalzd2expandzd2instantiatez00zz__evobjectz00
													(BgL_auxz00_8988);
											}
											{	/* Eval/evmodule.scm 927 */
												obj_t BgL_auxz00_8996;

												if (BGl_classzf3zf3zz__objectz00(BgL_valz00_2419))
													{	/* Eval/evmodule.scm 927 */
														BgL_auxz00_8996 = BgL_valz00_2419;
													}
												else
													{
														obj_t BgL_auxz00_8999;

														BgL_auxz00_8999 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3188z00zz__evmodulez00,
															BINT(((long) 35045)),
															BGl_string3370z00zz__evmodulez00,
															BGl_string3244z00zz__evmodulez00,
															BgL_valz00_2419);
														FAILURE(BgL_auxz00_8999, BFALSE, BFALSE);
													}
												BGl_evalzd2expandzd2duplicatez00zz__evobjectz00
													(BgL_auxz00_8996);
											}
											{	/* Eval/evmodule.scm 928 */
												obj_t BgL_auxz00_9004;

												if (BGl_classzf3zf3zz__objectz00(BgL_valz00_2419))
													{	/* Eval/evmodule.scm 928 */
														BgL_auxz00_9004 = BgL_valz00_2419;
													}
												else
													{
														obj_t BgL_auxz00_9007;

														BgL_auxz00_9007 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3188z00zz__evmodulez00,
															BINT(((long) 35079)),
															BGl_string3370z00zz__evmodulez00,
															BGl_string3244z00zz__evmodulez00,
															BgL_valz00_2419);
														FAILURE(BgL_auxz00_9007, BFALSE, BFALSE);
													}
												BGl_evalzd2expandzd2withzd2accesszd2zz__evobjectz00
													(BgL_auxz00_9004);
										}}
									else
										{	/* Eval/evmodule.scm 925 */
											BFALSE;
										}
									{	/* Eval/evmodule.scm 381 */
										obj_t BgL_arg1474z00_4090;

										{	/* Eval/evmodule.scm 381 */
											obj_t BgL_arg1475z00_4091;
											obj_t BgL_arg1476z00_4092;

											BgL_arg1475z00_4091 =
												MAKE_YOUNG_PAIR(BgL_idz00_2418, BgL_gz00_2417);
											BgL_arg1476z00_4092 =
												STRUCT_REF(BgL_modz00_2412, (int) (((long) 4)));
											BgL_arg1474z00_4090 =
												MAKE_YOUNG_PAIR(BgL_arg1475z00_4091,
												BgL_arg1476z00_4092);
										}
										{	/* Eval/evmodule.scm 129 */
											int BgL_tmpz00_9016;

											BgL_tmpz00_9016 = (int) (((long) 4));
											STRUCT_SET(BgL_modz00_2412, BgL_tmpz00_9016,
												BgL_arg1474z00_4090);
									}}
									{	/* Eval/evmodule.scm 930 */
										obj_t BgL_idz00_4095;

										if (SYMBOLP(BgL_idz00_2418))
											{	/* Eval/evmodule.scm 930 */
												BgL_idz00_4095 = BgL_idz00_2418;
											}
										else
											{
												obj_t BgL_auxz00_9021;

												BgL_auxz00_9021 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3188z00zz__evmodulez00,
													BINT(((long) 35156)),
													BGl_string3370z00zz__evmodulez00,
													BGl_string3192z00zz__evmodulez00, BgL_idz00_2418);
												FAILURE(BgL_auxz00_9021, BFALSE, BFALSE);
											}
										if (CBOOL(BGl_getzd2evalzd2expanderz00zz__macroz00
												(BgL_idz00_4095)))
											{	/* Eval/evmodule.scm 262 */
												obj_t BgL_msgz00_4097;

												{	/* Eval/evmodule.scm 262 */
													obj_t BgL_arg1375z00_4098;

													{	/* Eval/evmodule.scm 262 */
														obj_t BgL_res2603z00_4104;

														{	/* Eval/evmodule.scm 262 */
															obj_t BgL_arg2175z00_4103;

															BgL_arg2175z00_4103 =
																SYMBOL_TO_STRING(BgL_idz00_4095);
															BgL_res2603z00_4104 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2175z00_4103);
														}
														BgL_arg1375z00_4098 = BgL_res2603z00_4104;
													}
													BgL_msgz00_4097 =
														string_append_3(BGl_string3216z00zz__evmodulez00,
														BgL_arg1375z00_4098,
														BGl_string3217z00zz__evmodulez00);
												}
												{	/* Eval/evmodule.scm 264 */
													obj_t BgL_list1374z00_4099;

													BgL_list1374z00_4099 =
														MAKE_YOUNG_PAIR(BgL_msgz00_4097, BNIL);
													BGl_evwarningz00zz__everrorz00(BgL_locz00_149,
														BgL_list1374z00_4099);
												}
											}
										else
											{	/* Eval/evmodule.scm 261 */
												BFALSE;
											}
										if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_modz00_2412))
											{	/* Eval/evmodule.scm 266 */
												obj_t BgL_arg1377z00_4101;

												BgL_arg1377z00_4101 =
													STRUCT_REF(BgL_modz00_2412, (int) (((long) 3)));
												{	/* Eval/evmodule.scm 266 */
													obj_t BgL_auxz00_9037;

													if (STRUCTP(BgL_arg1377z00_4101))
														{	/* Eval/evmodule.scm 266 */
															BgL_auxz00_9037 = BgL_arg1377z00_4101;
														}
													else
														{
															obj_t BgL_auxz00_9040;

															BgL_auxz00_9040 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3188z00zz__evmodulez00,
																BINT(((long) 10468)),
																BGl_string3370z00zz__evmodulez00,
																BGl_string3194z00zz__evmodulez00,
																BgL_arg1377z00_4101);
															FAILURE(BgL_auxz00_9040, BFALSE, BFALSE);
														}
													BGl_hashtablezd2putz12zc0zz__hashz00(BgL_auxz00_9037,
														BgL_idz00_4095, BgL_gz00_2417);
											}}
										else
											{	/* Eval/evmodule.scm 267 */
												obj_t BgL_auxz00_9045;

												if (VECTORP(BgL_gz00_2417))
													{	/* Eval/evmodule.scm 267 */
														BgL_auxz00_9045 = BgL_gz00_2417;
													}
												else
													{
														obj_t BgL_auxz00_9048;

														BgL_auxz00_9048 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3188z00zz__evmodulez00,
															BINT(((long) 10507)),
															BGl_string3370z00zz__evmodulez00,
															BGl_string3212z00zz__evmodulez00, BgL_gz00_2417);
														FAILURE(BgL_auxz00_9048, BFALSE, BFALSE);
													}
												BGl_bindzd2evalzd2globalz12z12zz__evenvz00
													(BgL_idz00_4095, BgL_auxz00_9045);
							}}}}
							{
								obj_t BgL_l1197z00_9053;

								BgL_l1197z00_9053 = CDR(BgL_l1197z00_2414);
								BgL_l1197z00_2414 = BgL_l1197z00_9053;
								goto BgL_zc3z04anonymousza31995ze3z87_2415;
							}
						}
					else
						{	/* Eval/evmodule.scm 922 */
							if (NULLP(BgL_l1197z00_2414))
								{	/* Eval/evmodule.scm 922 */
									BTRUE;
								}
							else
								{	/* Eval/evmodule.scm 922 */
									BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00
										(BGl_string3231z00zz__evmodulez00,
										BGl_string3221z00zz__evmodulez00, BgL_l1197z00_2414,
										BGl_string3188z00zz__evmodulez00, BINT(((long) 34865)));
				}}}
				return BFALSE;
			}
		}

	}



/* &evmodule-comp! */
	obj_t BGl_z62evmodulezd2compz12za2zz__evmodulez00(obj_t BgL_envz00_4533,
		obj_t BgL_idz00_4534, obj_t BgL_pathz00_4535, obj_t BgL_locz00_4536,
		obj_t BgL_exportsz00_4537)
	{
		{	/* Eval/evmodule.scm 920 */
			{	/* Eval/evmodule.scm 921 */
				obj_t BgL_auxz00_9066;
				obj_t BgL_auxz00_9059;

				if (PAIRP(BgL_pathz00_4535))
					{	/* Eval/evmodule.scm 921 */
						BgL_auxz00_9066 = BgL_pathz00_4535;
					}
				else
					{
						obj_t BgL_auxz00_9069;

						BgL_auxz00_9069 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__evmodulez00,
							BINT(((long) 34818)), BGl_string3371z00zz__evmodulez00,
							BGl_string3190z00zz__evmodulez00, BgL_pathz00_4535);
						FAILURE(BgL_auxz00_9069, BFALSE, BFALSE);
					}
				if (SYMBOLP(BgL_idz00_4534))
					{	/* Eval/evmodule.scm 921 */
						BgL_auxz00_9059 = BgL_idz00_4534;
					}
				else
					{
						obj_t BgL_auxz00_9062;

						BgL_auxz00_9062 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__evmodulez00,
							BINT(((long) 34818)), BGl_string3371z00zz__evmodulez00,
							BGl_string3192z00zz__evmodulez00, BgL_idz00_4534);
						FAILURE(BgL_auxz00_9062, BFALSE, BFALSE);
					}
				return
					BGl_evmodulezd2compz12zc0zz__evmodulez00(BgL_auxz00_9059,
					BgL_auxz00_9066, BgL_locz00_4536, BgL_exportsz00_4537);
			}
		}

	}



/* evmodule-static-class */
	BGL_EXPORTED_DEF obj_t BGl_evmodulezd2staticzd2classz00zz__evmodulez00(obj_t
		BgL_xz00_151)
	{
		{	/* Eval/evmodule.scm 937 */
			{	/* Eval/evmodule.scm 938 */
				obj_t BgL_modz00_2424;

				BgL_modz00_2424 = BGL_MODULE();
				{	/* Eval/evmodule.scm 938 */
					obj_t BgL_restz00_2425;

					{	/* Eval/evmodule.scm 939 */
						obj_t BgL_pairz00_4108;

						if (PAIRP(BgL_xz00_151))
							{	/* Eval/evmodule.scm 939 */
								BgL_pairz00_4108 = BgL_xz00_151;
							}
						else
							{
								obj_t BgL_auxz00_9077;

								BgL_auxz00_9077 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3188z00zz__evmodulez00, BINT(((long) 35491)),
									BGl_string3372z00zz__evmodulez00,
									BGl_string3190z00zz__evmodulez00, BgL_xz00_151);
								FAILURE(BgL_auxz00_9077, BFALSE, BFALSE);
							}
						BgL_restz00_2425 = CDR(BgL_pairz00_4108);
					}
					{	/* Eval/evmodule.scm 939 */
						obj_t BgL_clausez00_2426;

						{	/* Eval/evmodule.scm 940 */
							obj_t BgL_casezd2valuezd2_2428;

							{	/* Eval/evmodule.scm 940 */
								obj_t BgL_pairz00_4109;

								if (PAIRP(BgL_xz00_151))
									{	/* Eval/evmodule.scm 940 */
										BgL_pairz00_4109 = BgL_xz00_151;
									}
								else
									{
										obj_t BgL_auxz00_9084;

										BgL_auxz00_9084 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3188z00zz__evmodulez00, BINT(((long) 35517)),
											BGl_string3372z00zz__evmodulez00,
											BGl_string3190z00zz__evmodulez00, BgL_xz00_151);
										FAILURE(BgL_auxz00_9084, BFALSE, BFALSE);
									}
								BgL_casezd2valuezd2_2428 = CAR(BgL_pairz00_4109);
							}
							if (
								(BgL_casezd2valuezd2_2428 == BGl_symbol3373z00zz__evmodulez00))
								{	/* Eval/evmodule.scm 942 */
									obj_t BgL_arg2002z00_2430;

									{	/* Eval/evmodule.scm 942 */
										obj_t BgL_arg2003z00_2431;

										{	/* Eval/evmodule.scm 942 */
											obj_t BgL_arg2004z00_2432;

											{	/* Eval/evmodule.scm 942 */
												obj_t BgL_arg2005z00_2433;

												{	/* Eval/evmodule.scm 942 */
													obj_t BgL_auxz00_9091;

													{	/* Eval/evmodule.scm 942 */
														bool_t BgL_test4170z00_9092;

														if (PAIRP(BgL_restz00_2425))
															{	/* Eval/evmodule.scm 942 */
																BgL_test4170z00_9092 = ((bool_t) 1);
															}
														else
															{	/* Eval/evmodule.scm 942 */
																BgL_test4170z00_9092 = NULLP(BgL_restz00_2425);
															}
														if (BgL_test4170z00_9092)
															{	/* Eval/evmodule.scm 942 */
																BgL_auxz00_9091 = BgL_restz00_2425;
															}
														else
															{
																obj_t BgL_auxz00_9096;

																BgL_auxz00_9096 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3188z00zz__evmodulez00,
																	BINT(((long) 35572)),
																	BGl_string3372z00zz__evmodulez00,
																	BGl_string3246z00zz__evmodulez00,
																	BgL_restz00_2425);
																FAILURE(BgL_auxz00_9096, BFALSE, BFALSE);
													}}
													BgL_arg2005z00_2433 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_auxz00_9091, BNIL);
												}
												BgL_arg2004z00_2432 =
													MAKE_YOUNG_PAIR(BGl_symbol3243z00zz__evmodulez00,
													BgL_arg2005z00_2433);
											}
											BgL_arg2003z00_2431 =
												MAKE_YOUNG_PAIR(BgL_arg2004z00_2432, BNIL);
										}
										BgL_arg2002z00_2430 =
											MAKE_YOUNG_PAIR(BGl_symbol3343z00zz__evmodulez00,
											BgL_arg2003z00_2431);
									}
									BgL_clausez00_2426 =
										BGl_evepairifyz00zz__prognz00(BgL_arg2002z00_2430,
										BgL_xz00_151);
								}
							else
								{	/* Eval/evmodule.scm 940 */
									if (
										(BgL_casezd2valuezd2_2428 ==
											BGl_symbol3375z00zz__evmodulez00))
										{	/* Eval/evmodule.scm 944 */
											obj_t BgL_arg2007z00_2435;

											{	/* Eval/evmodule.scm 944 */
												obj_t BgL_arg2008z00_2436;

												{	/* Eval/evmodule.scm 944 */
													obj_t BgL_arg2010z00_2437;

													{	/* Eval/evmodule.scm 944 */
														obj_t BgL_arg2011z00_2438;

														{	/* Eval/evmodule.scm 944 */
															obj_t BgL_auxz00_9107;

															{	/* Eval/evmodule.scm 944 */
																bool_t BgL_test4173z00_9108;

																if (PAIRP(BgL_restz00_2425))
																	{	/* Eval/evmodule.scm 944 */
																		BgL_test4173z00_9108 = ((bool_t) 1);
																	}
																else
																	{	/* Eval/evmodule.scm 944 */
																		BgL_test4173z00_9108 =
																			NULLP(BgL_restz00_2425);
																	}
																if (BgL_test4173z00_9108)
																	{	/* Eval/evmodule.scm 944 */
																		BgL_auxz00_9107 = BgL_restz00_2425;
																	}
																else
																	{
																		obj_t BgL_auxz00_9112;

																		BgL_auxz00_9112 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string3188z00zz__evmodulez00,
																			BINT(((long) 35650)),
																			BGl_string3372z00zz__evmodulez00,
																			BGl_string3246z00zz__evmodulez00,
																			BgL_restz00_2425);
																		FAILURE(BgL_auxz00_9112, BFALSE, BFALSE);
															}}
															BgL_arg2011z00_2438 =
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_auxz00_9107, BNIL);
														}
														BgL_arg2010z00_2437 =
															MAKE_YOUNG_PAIR(BGl_symbol3247z00zz__evmodulez00,
															BgL_arg2011z00_2438);
													}
													BgL_arg2008z00_2436 =
														MAKE_YOUNG_PAIR(BgL_arg2010z00_2437, BNIL);
												}
												BgL_arg2007z00_2435 =
													MAKE_YOUNG_PAIR(BGl_symbol3343z00zz__evmodulez00,
													BgL_arg2008z00_2436);
											}
											BgL_clausez00_2426 =
												BGl_evepairifyz00zz__prognz00(BgL_arg2007z00_2435,
												BgL_xz00_151);
										}
									else
										{	/* Eval/evmodule.scm 940 */
											if (
												(BgL_casezd2valuezd2_2428 ==
													BGl_symbol3377z00zz__evmodulez00))
												{	/* Eval/evmodule.scm 946 */
													obj_t BgL_arg2013z00_2440;

													{	/* Eval/evmodule.scm 946 */
														obj_t BgL_arg2014z00_2441;

														{	/* Eval/evmodule.scm 946 */
															obj_t BgL_arg2016z00_2442;

															{	/* Eval/evmodule.scm 946 */
																obj_t BgL_arg2017z00_2443;

																{	/* Eval/evmodule.scm 946 */
																	obj_t BgL_auxz00_9123;

																	{	/* Eval/evmodule.scm 946 */
																		bool_t BgL_test4176z00_9124;

																		if (PAIRP(BgL_restz00_2425))
																			{	/* Eval/evmodule.scm 946 */
																				BgL_test4176z00_9124 = ((bool_t) 1);
																			}
																		else
																			{	/* Eval/evmodule.scm 946 */
																				BgL_test4176z00_9124 =
																					NULLP(BgL_restz00_2425);
																			}
																		if (BgL_test4176z00_9124)
																			{	/* Eval/evmodule.scm 946 */
																				BgL_auxz00_9123 = BgL_restz00_2425;
																			}
																		else
																			{
																				obj_t BgL_auxz00_9128;

																				BgL_auxz00_9128 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string3188z00zz__evmodulez00,
																					BINT(((long) 35737)),
																					BGl_string3372z00zz__evmodulez00,
																					BGl_string3246z00zz__evmodulez00,
																					BgL_restz00_2425);
																				FAILURE(BgL_auxz00_9128, BFALSE,
																					BFALSE);
																	}}
																	BgL_arg2017z00_2443 =
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_auxz00_9123, BNIL);
																}
																BgL_arg2016z00_2442 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol3249z00zz__evmodulez00,
																	BgL_arg2017z00_2443);
															}
															BgL_arg2014z00_2441 =
																MAKE_YOUNG_PAIR(BgL_arg2016z00_2442, BNIL);
														}
														BgL_arg2013z00_2440 =
															MAKE_YOUNG_PAIR(BGl_symbol3343z00zz__evmodulez00,
															BgL_arg2014z00_2441);
													}
													BgL_clausez00_2426 =
														BGl_evepairifyz00zz__prognz00(BgL_arg2013z00_2440,
														BgL_xz00_151);
												}
											else
												{	/* Eval/evmodule.scm 940 */
													BgL_clausez00_2426 = BUNSPEC;
												}
										}
								}
						}
						{	/* Eval/evmodule.scm 940 */

							return
								BGl_evmodulezd2staticzd2zz__evmodulez00(BgL_modz00_2424,
								BgL_clausez00_2426,
								BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_xz00_151),
								((bool_t) 1));
						}
					}
				}
			}
		}

	}



/* &evmodule-static-class */
	obj_t BGl_z62evmodulezd2staticzd2classz62zz__evmodulez00(obj_t
		BgL_envz00_4538, obj_t BgL_xz00_4539)
	{
		{	/* Eval/evmodule.scm 937 */
			{	/* Eval/evmodule.scm 938 */
				obj_t BgL_auxz00_9139;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_xz00_4539))
					{	/* Eval/evmodule.scm 938 */
						BgL_auxz00_9139 = BgL_xz00_4539;
					}
				else
					{
						obj_t BgL_auxz00_9142;

						BgL_auxz00_9142 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__evmodulez00,
							BINT(((long) 35450)), BGl_string3379z00zz__evmodulez00,
							BGl_string3246z00zz__evmodulez00, BgL_xz00_4539);
						FAILURE(BgL_auxz00_9142, BFALSE, BFALSE);
					}
				return BGl_evmodulezd2staticzd2classz00zz__evmodulez00(BgL_auxz00_9139);
			}
		}

	}



/* call-with-eval-module */
	BGL_EXPORTED_DEF obj_t BGl_callzd2withzd2evalzd2modulezd2zz__evmodulez00(obj_t
		BgL_newmz00_152, obj_t BgL_procz00_153)
	{
		{	/* Eval/evmodule.scm 952 */
			{	/* Eval/evmodule.scm 953 */
				obj_t BgL_oldmz00_4116;

				BgL_oldmz00_4116 = BGL_MODULE();
				BGl_evalzd2modulezd2setz12z12zz__evmodulez00(BgL_newmz00_152);
				{	/* Eval/evmodule.scm 955 */
					obj_t BgL_exitd1092z00_4117;

					BgL_exitd1092z00_4117 = BGL_EXITD_TOP_AS_OBJ();
					{	/* Eval/evmodule.scm 957 */
						obj_t BgL_zc3z04anonymousza32018ze3z87_4540;

						BgL_zc3z04anonymousza32018ze3z87_4540 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza32018ze3ze5zz__evmodulez00,
							(int) (((long) 0)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza32018ze3z87_4540,
							(int) (((long) 0)), BgL_oldmz00_4116);
						BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1092z00_4117,
							BgL_zc3z04anonymousza32018ze3z87_4540);
						{	/* Eval/evmodule.scm 956 */
							obj_t BgL_tmp1094z00_4119;

							BgL_tmp1094z00_4119 =
								PROCEDURE_ENTRY(BgL_procz00_153) (BgL_procz00_153, BEOA);
							BGl_exitdzd2popzd2protectz12z12zz__bexitz00
								(BgL_exitd1092z00_4117);
							BGl_evalzd2modulezd2setz12z12zz__evmodulez00(BgL_oldmz00_4116);
							return BgL_tmp1094z00_4119;
						}
					}
				}
			}
		}

	}



/* &call-with-eval-module */
	obj_t BGl_z62callzd2withzd2evalzd2modulezb0zz__evmodulez00(obj_t
		BgL_envz00_4541, obj_t BgL_newmz00_4542, obj_t BgL_procz00_4543)
	{
		{	/* Eval/evmodule.scm 952 */
			{	/* Eval/evmodule.scm 953 */
				obj_t BgL_auxz00_9161;

				if (PROCEDUREP(BgL_procz00_4543))
					{	/* Eval/evmodule.scm 953 */
						BgL_auxz00_9161 = BgL_procz00_4543;
					}
				else
					{
						obj_t BgL_auxz00_9164;

						BgL_auxz00_9164 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__evmodulez00,
							BINT(((long) 36101)), BGl_string3380z00zz__evmodulez00,
							BGl_string3297z00zz__evmodulez00, BgL_procz00_4543);
						FAILURE(BgL_auxz00_9164, BFALSE, BFALSE);
					}
				return
					BGl_callzd2withzd2evalzd2modulezd2zz__evmodulez00(BgL_newmz00_4542,
					BgL_auxz00_9161);
			}
		}

	}



/* &<@anonymous:2018> */
	obj_t BGl_z62zc3z04anonymousza32018ze3ze5zz__evmodulez00(obj_t
		BgL_envz00_4544)
	{
		{	/* Eval/evmodule.scm 955 */
			return
				BGl_evalzd2modulezd2setz12z12zz__evmodulez00(PROCEDURE_REF
				(BgL_envz00_4544, (int) (((long) 0))));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__evmodulez00()
	{
		{	/* Eval/evmodule.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__evmodulez00()
	{
		{	/* Eval/evmodule.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__evmodulez00()
	{
		{	/* Eval/evmodule.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__evmodulez00()
	{
		{	/* Eval/evmodule.scm 15 */
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 121046386),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__modulez00(((long) 416350379),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 251315035),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 439352636),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 214649622),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 220647683),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__expandz00(((long) 414007030),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__tracez00(((long) 81989421),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581), BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945), BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874), BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048), BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694), BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845), BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long)
					228151379), BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 177147628),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 500027153),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 528345319),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__everrorz00(((long) 375872251),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__evcompilez00(((long) 492753248),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
			return BGl_modulezd2initializa7ationz75zz__evobjectz00(((long) 481718239),
				BSTRING_TO_STRING(BGl_string3381z00zz__evmodulez00));
		}

	}

#ifdef __cplusplus
}
#endif
