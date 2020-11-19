/*===========================================================================*/
/*   (Eval/evobject.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/evobject.scm -indent -o objs/obj_u/Eval/evobject.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */

	extern obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	extern obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	extern obj_t BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl_symbol2641z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2643z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2646z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2728z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2649z00zz__evobjectz00 = BUNSPEC;
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol2731z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2651z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2655z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_makezd2classzd2fieldsz00zz__evobjectz00(obj_t, obj_t, obj_t,
		long, obj_t);
	extern obj_t BGl_listzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t, long);
	static long BGl_getzd2classzd2hashz00zz__evobjectz00(obj_t);
	static obj_t BGl_expandzd2errorzd2zz__evobjectz00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2660z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2662z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2664z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2668z00zz__evobjectz00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2670z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_zc3z04anonymousza31962ze3ze70z60zz__evobjectz00(obj_t,
		obj_t);
	static obj_t BGl_symbol2672z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2674z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2679z00zz__evobjectz00 = BUNSPEC;
	extern bool_t BGl_classzd2fieldzd2defaultzd2valuezf3z21zz__objectz00(obj_t);
	static obj_t BGl_z62evalzd2expandzd2instantiatez62zz__evobjectz00(obj_t,
		obj_t);
	extern obj_t BGl_classzd2fieldszd2zz__objectz00(obj_t);
	extern obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl_symbol2682z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2685z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2687z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zz__evobjectz00();
	extern obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_symbol2692z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2694z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2696z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2698z00zz__evobjectz00 = BUNSPEC;
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__evobjectz00();
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static bool_t BGl_patchzd2fieldzd2defaultzd2valuesz12zc0zz__evobjectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_classzd2existszd2zz__objectz00(obj_t);
	extern obj_t BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t, obj_t);
	static bool_t BGl_patchzd2vfieldzd2accessorsz12z12zz__evobjectz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__evobjectz00();
	static obj_t BGl_duplicatezd2expanderzd2zz__evobjectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern bool_t BGl_classzd2fieldzd2mutablezf3zf3zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_evalzd2expandzd2duplicatez00zz__evobjectz00(obj_t);
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_evalzd2cozd2instantiatezd2expanderzd2zz__evobjectz00(obj_t, obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_evalzd2withzd2accesszd2expanderzd2zz__evobjectz00(obj_t);
	extern obj_t BGl_errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern bool_t BGl_classzd2abstractzf3z21zz__objectz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31797ze3ze5zz__evobjectz00(obj_t, obj_t,
		obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_classzd2evdatazd2zz__objectz00(obj_t);
	extern obj_t make_vector(long, obj_t);
	extern obj_t BGl_classzd2fieldzd2mutatorz00zz__objectz00(obj_t);
	extern obj_t BGl_evmodulezd2namezd2zz__evmodulez00(obj_t);
	static obj_t BGl_appendzd221011zd2zz__evobjectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__evobjectz00();
	extern bool_t BGl_classzd2fieldzd2virtualzf3zf3zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evalzd2classzd2zz__evobjectz00(obj_t, bool_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62evalzd2expandzd2duplicatez62zz__evobjectz00(obj_t, obj_t);
	extern obj_t BGl_classzd2fieldzd2namez00zz__objectz00(obj_t);
	static obj_t BGl_z62evalzd2expandzd2withzd2accesszb0zz__evobjectz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31422ze3ze5zz__evobjectz00(obj_t, obj_t);
	static obj_t BGl_instantiatezd2fillzd2zz__evobjectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_evalzd2duplicatezd2expanderz00zz__evobjectz00(obj_t);
	extern obj_t BGl_evalzd2beginzd2expanderz00zz__expander_definez00(obj_t);
	static obj_t BGl_z62evalzd2classzb0zz__evobjectz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_classzd2allocatorzd2zz__objectz00(obj_t);
	extern obj_t BGl_classzd2fieldzd2accessorz00zz__objectz00(obj_t);
	static obj_t BGl_cozd2instantiatezd2ze3letze3zz__evobjectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern long BGl_getzd2hashnumberzd2persistentz00zz__hashz00(obj_t);
	extern bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_evalzd2instantiatezd2expanderz00zz__evobjectz00(obj_t);
	extern obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31515ze3ze5zz__evobjectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31345ze3ze5zz__evobjectz00(obj_t, obj_t);
	extern obj_t BGl_classzd2constructorzd2zz__objectz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31605ze3ze5zz__evobjectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31362ze3ze5zz__evobjectz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31427ze3ze5zz__evobjectz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_takez00zz__r4_pairs_and_lists_6_3z00(obj_t, long);
	extern obj_t BGl_z52objectzd2wideningz80zz__objectz00(BgL_objectz00_bglt);
	static obj_t BGl_makezd2classzd2virtualzd2fieldszd2zz__evobjectz00(obj_t);
	static obj_t BGl_zc3z04anonymousza31967ze3ze70z60zz__evobjectz00(obj_t,
		obj_t);
	static obj_t BGl_list2638z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_evalzd2parsezd2classzd2slotzd2zz__evobjectz00(obj_t, obj_t);
	extern obj_t BGl_classzd2evdatazd2setz12z12zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_installzd2expanderzd2zz__macroz00(obj_t, obj_t);
	extern obj_t BGl_evalz12z12zz__evalz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__evobjectz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__macroz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_definez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evmodulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evcompilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__everrorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__typez00(long, char *);
	static obj_t BGl_list2645z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_list2648z00zz__evobjectz00 = BUNSPEC;
	extern bool_t BGl_classzf3zf3zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_evalzd2expandzd2instantiatez00zz__evobjectz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31534ze3ze5zz__evobjectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31453ze3ze5zz__evobjectz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31632ze3ze5zz__evobjectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_vectorzd2filterzd2mapz00zz__evobjectz00(obj_t, obj_t, obj_t);
	extern obj_t create_struct(obj_t, int);
	extern obj_t BGl_z52withzd2lexicalz80zz__expandz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62evalzd2cozd2instantiatezd2expanderzb0zz__evobjectz00(obj_t, obj_t,
		obj_t);
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__evobjectz00();
	static obj_t BGl_z62zc3z04anonymousza31714ze3ze5zz__evobjectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31358ze3ze5zz__evobjectz00(obj_t);
	extern long bgl_list_length(obj_t);
	extern obj_t BGl_iotaz00zz__r4_pairs_and_lists_6_3z00(int, obj_t);
	extern obj_t BGl_z52lexicalzd2stackz80zz__expandz00();
	extern obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__evobjectz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__evobjectz00();
	static obj_t BGl_evalzd2parsezd2classz00zz__evobjectz00(obj_t, obj_t);
	static obj_t BGl_classgenzd2slotzd2anonymousz00zz__evobjectz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_findzd2classzd2zz__objectz00(obj_t);
	extern obj_t BGl_objectz00zz__objectz00;
	static obj_t BGl_vector2637z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_withzd2accesszd2expanderz00zz__evobjectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern bool_t BGl_evmodulezf3zf3zz__evmodulez00(obj_t);
	extern obj_t
		BGl_z52objectzd2wideningzd2setz12z40zz__objectz00(BgL_objectz00_bglt,
		obj_t);
	extern obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	extern obj_t BGl_getzd2sourcezd2locationz00zz__readerz00(obj_t);
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_evalzd2registerzd2classz00zz__evobjectz00(obj_t, obj_t,
		obj_t, bool_t, obj_t, long, obj_t);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31492ze3ze5zz__evobjectz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_evcompilezd2errorzd2zz__evcompilez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3z04anonymousza31942ze3ze70z60zz__evobjectz00(obj_t,
		obj_t);
	static obj_t BGl_decomposezd2identzd2zz__evobjectz00(obj_t);
	static obj_t BGl_evalzd2creatorzd2zz__evobjectz00(obj_t, obj_t, long, obj_t);
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_localiza7eza7zz__evobjectz00(obj_t, obj_t);
	extern obj_t BGl_classzd2evfieldszd2setz12z12zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31477ze3ze5zz__evobjectz00(obj_t, obj_t);
	static obj_t BGl_loopze70ze7zz__evobjectz00(obj_t, obj_t);
	static long BGl_loopze71ze7zz__evobjectz00(obj_t, long);
	BGL_EXPORTED_DECL obj_t
		BGl_evalzd2expandzd2withzd2accesszd2zz__evobjectz00(obj_t);
	extern obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	extern obj_t BGl_classzd2creatorzd2zz__objectz00(obj_t);
	extern bool_t BGl_evalzd2classzf3z21zz__objectz00(obj_t);
	static obj_t BGl_symbol2700z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31649ze3ze5zz__evobjectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2704z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2706z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2708z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2710z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2714z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2633z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2635z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2717z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2719z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_symbol2639z00zz__evobjectz00 = BUNSPEC;
	static obj_t BGl_findzd2fieldzd2offsetz00zz__evobjectz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2701z00zz__evobjectz00,
		BgL_bgl_string2701za700za7za7_2738za7, "read-only", 9);
	      DEFINE_STRING(BGl_string2702z00zz__evobjectz00,
		BgL_bgl_string2702za700za7za7_2739za7, "eval", 4);
	      DEFINE_STRING(BGl_string2703z00zz__evobjectz00,
		BgL_bgl_string2703za700za7za7_2740za7, "Illegal slot declaration", 24);
	      DEFINE_STRING(BGl_string2705z00zz__evobjectz00,
		BgL_bgl_string2705za700za7za7_2741za7, "info", 4);
	      DEFINE_STRING(BGl_string2707z00zz__evobjectz00,
		BgL_bgl_string2707za700za7za7_2742za7, "get", 3);
	      DEFINE_STRING(BGl_string2709z00zz__evobjectz00,
		BgL_bgl_string2709za700za7za7_2743za7, "set", 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evalzd2expandzd2instantiatezd2envzd2zz__evobjectz00,
		BgL_bgl_za762evalza7d2expand2744z00,
		BGl_z62evalzd2expandzd2instantiatez62zz__evobjectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2711z00zz__evobjectz00,
		BgL_bgl_string2711za700za7za7_2745za7, "default", 7);
	      DEFINE_STRING(BGl_string2712z00zz__evobjectz00,
		BgL_bgl_string2712za700za7za7_2746za7, "Missing virtual set", 19);
	      DEFINE_STRING(BGl_string2713z00zz__evobjectz00,
		BgL_bgl_string2713za700za7za7_2747za7, "Missing virtual get", 19);
	      DEFINE_STRING(BGl_string2632z00zz__evobjectz00,
		BgL_bgl_string2632za700za7za7_2748za7,
		"Wrong number of arguments for constructor (expecting ~a)", 56);
	      DEFINE_STRING(BGl_string2715z00zz__evobjectz00,
		BgL_bgl_string2715za700za7za7_2749za7, "o", 1);
	      DEFINE_STRING(BGl_string2634z00zz__evobjectz00,
		BgL_bgl_string2634za700za7za7_2750za7, "lambda", 6);
	      DEFINE_STRING(BGl_string2716z00zz__evobjectz00,
		BgL_bgl_string2716za700za7za7_2751za7, "Illegal class declaration", 25);
	      DEFINE_STRING(BGl_string2636z00zz__evobjectz00,
		BgL_bgl_string2636za700za7za7_2752za7, "", 0);
	      DEFINE_STRING(BGl_string2718z00zz__evobjectz00,
		BgL_bgl_string2718za700za7za7_2753za7, "object", 6);
	      DEFINE_STRING(BGl_string2720z00zz__evobjectz00,
		BgL_bgl_string2720za700za7za7_2754za7, "define", 6);
	      DEFINE_STRING(BGl_string2721z00zz__evobjectz00,
		BgL_bgl_string2721za700za7za7_2755za7, "Cannot find super class", 23);
	      DEFINE_STRING(BGl_string2640z00zz__evobjectz00,
		BgL_bgl_string2640za700za7za7_2756za7, "patch-field-default-values!", 27);
	      DEFINE_STRING(BGl_string2722z00zz__evobjectz00,
		BgL_bgl_string2722za700za7za7_2757za7, "&eval-class", 11);
	      DEFINE_STRING(BGl_string2723z00zz__evobjectz00,
		BgL_bgl_string2723za700za7za7_2758za7, "symbol", 6);
	      DEFINE_STRING(BGl_string2642z00zz__evobjectz00,
		BgL_bgl_string2642za700za7za7_2759za7, "slots", 5);
	      DEFINE_STRING(BGl_string2724z00zz__evobjectz00,
		BgL_bgl_string2724za700za7za7_2760za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string2725z00zz__evobjectz00,
		BgL_bgl_string2725za700za7za7_2761za7, "pair", 4);
	      DEFINE_STRING(BGl_string2644z00zz__evobjectz00,
		BgL_bgl_string2644za700za7za7_2762za7, "fields", 6);
	      DEFINE_STRING(BGl_string2726z00zz__evobjectz00,
		BgL_bgl_string2726za700za7za7_2763za7, "co-instantiate", 14);
	      DEFINE_STRING(BGl_string2727z00zz__evobjectz00,
		BgL_bgl_string2727za700za7za7_2764za7, "Illegal `co-instantiate' form", 29);
	      DEFINE_STRING(BGl_string2647z00zz__evobjectz00,
		BgL_bgl_string2647za700za7za7_2765za7, "patch-vfield-accessors!", 23);
	      DEFINE_STRING(BGl_string2729z00zz__evobjectz00,
		BgL_bgl_string2729za700za7za7_2766za7, "&eval-co-instantiate-expander", 29);
	      DEFINE_STRING(BGl_string2730z00zz__evobjectz00,
		BgL_bgl_string2730za700za7za7_2767za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2650z00zz__evobjectz00,
		BgL_bgl_string2650za700za7za7_2768za7, "class-virtual", 13);
	      DEFINE_STRING(BGl_string2732z00zz__evobjectz00,
		BgL_bgl_string2732za700za7za7_2769za7, "instantiate", 11);
	      DEFINE_STRING(BGl_string2733z00zz__evobjectz00,
		BgL_bgl_string2733za700za7za7_2770za7,
		"Abstract classes can't be instantiated", 38);
	      DEFINE_STRING(BGl_string2652z00zz__evobjectz00,
		BgL_bgl_string2652za700za7za7_2771za7, "clazz", 5);
	      DEFINE_STRING(BGl_string2734z00zz__evobjectz00,
		BgL_bgl_string2734za700za7za7_2772za7, "Illegal class", 13);
	      DEFINE_STRING(BGl_string2735z00zz__evobjectz00,
		BgL_bgl_string2735za700za7za7_2773za7, "Illegal binding", 15);
	      DEFINE_STRING(BGl_string2736z00zz__evobjectz00,
		BgL_bgl_string2736za700za7za7_2774za7, "Illegal variable type", 21);
	      DEFINE_STRING(BGl_string2737z00zz__evobjectz00,
		BgL_bgl_string2737za700za7za7_2775za7, "__evobject", 10);
	      DEFINE_STRING(BGl_string2656z00zz__evobjectz00,
		BgL_bgl_string2656za700za7za7_2776za7, "instantiate::", 13);
	      DEFINE_STRING(BGl_string2657z00zz__evobjectz00,
		BgL_bgl_string2657za700za7za7_2777za7,
		"/tmp/4.4a/runtime/Eval/evobject.scm", 35);
	      DEFINE_STRING(BGl_string2658z00zz__evobjectz00,
		BgL_bgl_string2658za700za7za7_2778za7, "&eval-expand-instantiate", 24);
	      DEFINE_STRING(BGl_string2659z00zz__evobjectz00,
		BgL_bgl_string2659za700za7za7_2779za7, "class", 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2653z00zz__evobjectz00,
		BgL_bgl_za762za7c3za704anonymo2780za7,
		BGl_z62zc3z04anonymousza31453ze3ze5zz__evobjectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2654z00zz__evobjectz00,
		BgL_bgl_za762za7c3za704anonymo2781za7,
		BGl_z62zc3z04anonymousza31477ze3ze5zz__evobjectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2661z00zz__evobjectz00,
		BgL_bgl_string2661za700za7za7_2782za7, "__object", 8);
	      DEFINE_STRING(BGl_string2663z00zz__evobjectz00,
		BgL_bgl_string2663za700za7za7_2783za7, "class-field-default-value", 25);
	      DEFINE_STRING(BGl_string2665z00zz__evobjectz00,
		BgL_bgl_string2665za700za7za7_2784za7, "@", 1);
	      DEFINE_STRING(BGl_string2666z00zz__evobjectz00,
		BgL_bgl_string2666za700za7za7_2785za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string2667z00zz__evobjectz00,
		BgL_bgl_string2667za700za7za7_2786za7, "Missing value for field \"~a\"",
		28);
	      DEFINE_STRING(BGl_string2669z00zz__evobjectz00,
		BgL_bgl_string2669za700za7za7_2787za7, "new", 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evalzd2expandzd2withzd2accesszd2envz00zz__evobjectz00,
		BgL_bgl_za762evalza7d2expand2788z00,
		BGl_z62evalzd2expandzd2withzd2accesszb0zz__evobjectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2671z00zz__evobjectz00,
		BgL_bgl_string2671za700za7za7_2789za7, "begin", 5);
	      DEFINE_STRING(BGl_string2673z00zz__evobjectz00,
		BgL_bgl_string2673za700za7za7_2790za7, "let", 3);
	      DEFINE_STRING(BGl_string2675z00zz__evobjectz00,
		BgL_bgl_string2675za700za7za7_2791za7, "duplicate::", 11);
	      DEFINE_STRING(BGl_string2676z00zz__evobjectz00,
		BgL_bgl_string2676za700za7za7_2792za7, "&eval-expand-duplicate", 22);
	      DEFINE_STRING(BGl_string2677z00zz__evobjectz00,
		BgL_bgl_string2677za700za7za7_2793za7, "duplicate", 9);
	      DEFINE_STRING(BGl_string2678z00zz__evobjectz00,
		BgL_bgl_string2678za700za7za7_2794za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string2680z00zz__evobjectz00,
		BgL_bgl_string2680za700za7za7_2795za7, "duplicated", 10);
	      DEFINE_STRING(BGl_string2681z00zz__evobjectz00,
		BgL_bgl_string2681za700za7za7_2796za7, "Illegal ~a, field unknown \"~a\"",
		30);
	      DEFINE_STRING(BGl_string2683z00zz__evobjectz00,
		BgL_bgl_string2683za700za7za7_2797za7, "with-access::", 13);
	      DEFINE_STRING(BGl_string2684z00zz__evobjectz00,
		BgL_bgl_string2684za700za7za7_2798za7, "&eval-expand-with-access", 24);
	      DEFINE_STRING(BGl_string2686z00zz__evobjectz00,
		BgL_bgl_string2686za700za7za7_2799za7, "i", 1);
	      DEFINE_STRING(BGl_string2688z00zz__evobjectz00,
		BgL_bgl_string2688za700za7za7_2800za7, "::", 2);
	      DEFINE_STRING(BGl_string2689z00zz__evobjectz00,
		BgL_bgl_string2689za700za7za7_2801za7, "Illegal field", 13);
	      DEFINE_STRING(BGl_string2690z00zz__evobjectz00,
		BgL_bgl_string2690za700za7za7_2802za7, "with-access", 11);
	      DEFINE_STRING(BGl_string2691z00zz__evobjectz00,
		BgL_bgl_string2691za700za7za7_2803za7, "Illegal with-access", 19);
	      DEFINE_STRING(BGl_string2693z00zz__evobjectz00,
		BgL_bgl_string2693za700za7za7_2804za7, "->", 2);
	      DEFINE_STRING(BGl_string2695z00zz__evobjectz00,
		BgL_bgl_string2695za700za7za7_2805za7, "set!", 4);
	      DEFINE_STRING(BGl_string2697z00zz__evobjectz00,
		BgL_bgl_string2697za700za7za7_2806za7, "obj", 3);
	      DEFINE_STRING(BGl_string2699z00zz__evobjectz00,
		BgL_bgl_string2699za700za7za7_2807za7, "slot", 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evalzd2classzd2envz00zz__evobjectz00,
		BgL_bgl_za762evalza7d2classza72808za7,
		BGl_z62evalzd2classzb0zz__evobjectz00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evalzd2cozd2instantiatezd2expanderzd2envz00zz__evobjectz00,
		BgL_bgl_za762evalza7d2coza7d2i2809za7,
		BGl_z62evalzd2cozd2instantiatezd2expanderzb0zz__evobjectz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evalzd2expandzd2duplicatezd2envzd2zz__evobjectz00,
		BgL_bgl_za762evalza7d2expand2810z00,
		BGl_z62evalzd2expandzd2duplicatez62zz__evobjectz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol2641z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2643z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2646z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2728z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2649z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2731z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2651z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2655z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2660z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2662z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2664z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2668z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2670z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2672z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2674z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2679z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2682z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2685z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2687z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2692z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2694z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2696z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2698z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_list2638z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_list2645z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_list2648z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_vector2637z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2700z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2704z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2706z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2708z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2710z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2714z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2633z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2635z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2717z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2719z00zz__evobjectz00));
		     ADD_ROOT((void *) (&BGl_symbol2639z00zz__evobjectz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__evobjectz00(long
		BgL_checksumz00_4639, char *BgL_fromz00_4640)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__evobjectz00))
				{
					BGl_requirezd2initializa7ationz75zz__evobjectz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__evobjectz00();
					BGl_cnstzd2initzd2zz__evobjectz00();
					BGl_importedzd2moduleszd2initz00zz__evobjectz00();
					return BGl_toplevelzd2initzd2zz__evobjectz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__evobjectz00()
	{
		{	/* Eval/evobject.scm 15 */
			BGl_symbol2633z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2634z00zz__evobjectz00);
			BGl_symbol2635z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2636z00zz__evobjectz00);
			BGl_vector2637z00zz__evobjectz00 =
				BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BNIL);
			BGl_symbol2639z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2640z00zz__evobjectz00);
			BGl_symbol2641z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2642z00zz__evobjectz00);
			BGl_symbol2643z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2644z00zz__evobjectz00);
			BGl_list2638z00zz__evobjectz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2639z00zz__evobjectz00,
				MAKE_YOUNG_PAIR(BGl_symbol2641z00zz__evobjectz00,
					MAKE_YOUNG_PAIR(BGl_symbol2643z00zz__evobjectz00, BNIL)));
			BGl_symbol2646z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2647z00zz__evobjectz00);
			BGl_symbol2649z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2650z00zz__evobjectz00);
			BGl_symbol2651z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2652z00zz__evobjectz00);
			BGl_list2648z00zz__evobjectz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2649z00zz__evobjectz00,
				MAKE_YOUNG_PAIR(BGl_symbol2651z00zz__evobjectz00, BNIL));
			BGl_list2645z00zz__evobjectz00 =
				MAKE_YOUNG_PAIR(BGl_symbol2646z00zz__evobjectz00,
				MAKE_YOUNG_PAIR(BGl_symbol2641z00zz__evobjectz00,
					MAKE_YOUNG_PAIR(BGl_symbol2643z00zz__evobjectz00,
						MAKE_YOUNG_PAIR(BGl_list2648z00zz__evobjectz00, BNIL))));
			BGl_symbol2655z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2656z00zz__evobjectz00);
			BGl_symbol2660z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2661z00zz__evobjectz00);
			BGl_symbol2662z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2663z00zz__evobjectz00);
			BGl_symbol2664z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2665z00zz__evobjectz00);
			BGl_symbol2668z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2669z00zz__evobjectz00);
			BGl_symbol2670z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2671z00zz__evobjectz00);
			BGl_symbol2672z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2673z00zz__evobjectz00);
			BGl_symbol2674z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2675z00zz__evobjectz00);
			BGl_symbol2679z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2680z00zz__evobjectz00);
			BGl_symbol2682z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2683z00zz__evobjectz00);
			BGl_symbol2685z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2686z00zz__evobjectz00);
			BGl_symbol2687z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2688z00zz__evobjectz00);
			BGl_symbol2692z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2693z00zz__evobjectz00);
			BGl_symbol2694z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2695z00zz__evobjectz00);
			BGl_symbol2696z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2697z00zz__evobjectz00);
			BGl_symbol2698z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2699z00zz__evobjectz00);
			BGl_symbol2700z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2701z00zz__evobjectz00);
			BGl_symbol2704z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2705z00zz__evobjectz00);
			BGl_symbol2706z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2707z00zz__evobjectz00);
			BGl_symbol2708z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2709z00zz__evobjectz00);
			BGl_symbol2710z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2711z00zz__evobjectz00);
			BGl_symbol2714z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2715z00zz__evobjectz00);
			BGl_symbol2717z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2718z00zz__evobjectz00);
			BGl_symbol2719z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2720z00zz__evobjectz00);
			BGl_symbol2728z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2726z00zz__evobjectz00);
			return (BGl_symbol2731z00zz__evobjectz00 =
				bstring_to_symbol(BGl_string2732z00zz__evobjectz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__evobjectz00()
	{
		{	/* Eval/evobject.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__evobjectz00()
	{
		{	/* Eval/evobject.scm 15 */
			return BUNSPEC;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zz__evobjectz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1188;

				BgL_headz00_1188 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_2786;
					obj_t BgL_tailz00_2787;

					BgL_prevz00_2786 = BgL_headz00_1188;
					BgL_tailz00_2787 = BgL_l1z00_1;
				BgL_loopz00_2785:
					if (PAIRP(BgL_tailz00_2787))
						{
							obj_t BgL_newzd2prevzd2_2793;

							BgL_newzd2prevzd2_2793 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_2787), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_2786, BgL_newzd2prevzd2_2793);
							{
								obj_t BgL_tailz00_4700;
								obj_t BgL_prevz00_4699;

								BgL_prevz00_4699 = BgL_newzd2prevzd2_2793;
								BgL_tailz00_4700 = CDR(BgL_tailz00_2787);
								BgL_tailz00_2787 = BgL_tailz00_4700;
								BgL_prevz00_2786 = BgL_prevz00_4699;
								goto BgL_loopz00_2785;
							}
						}
					else
						{
							BNIL;
						}
				}
				return CDR(BgL_headz00_1188);
			}
		}

	}



/* get-class-hash */
	long BGl_getzd2classzd2hashz00zz__evobjectz00(obj_t BgL_defz00_3)
	{
		{	/* Llib/object.sch 19 */
			return BGl_loopze71ze7zz__evobjectz00(BgL_defz00_3, ((long) 1705));
		}

	}



/* loop~1 */
	long BGl_loopze71ze7zz__evobjectz00(obj_t BgL_defz00_1198,
		long BgL_hashz00_1199)
	{
		{	/* Llib/object.sch 24 */
		BGl_loopze71ze7zz__evobjectz00:
			if (NULLP(BgL_defz00_1198))
				{	/* Llib/object.sch 27 */
					return BgL_hashz00_1199;
				}
			else
				{	/* Llib/object.sch 27 */
					if (PAIRP(BgL_defz00_1198))
						{
							long BgL_hashz00_4710;
							obj_t BgL_defz00_4708;

							BgL_defz00_4708 = CDR(BgL_defz00_1198);
							BgL_hashz00_4710 =
								BGl_loopze71ze7zz__evobjectz00(CAR(BgL_defz00_1198),
								(((long) 1966) ^ BgL_hashz00_1199));
							BgL_hashz00_1199 = BgL_hashz00_4710;
							BgL_defz00_1198 = BgL_defz00_4708;
							goto BGl_loopze71ze7zz__evobjectz00;
						}
					else
						{	/* Llib/object.sch 29 */
							return
								(
								(BGl_getzd2hashnumberzd2persistentz00zz__hashz00
									(BgL_defz00_1198) & ((long) 65535)) ^ BgL_hashz00_1199);
		}}}

	}



/* expand-error */
	obj_t BGl_expandzd2errorzd2zz__evobjectz00(obj_t BgL_pz00_4, obj_t BgL_mz00_5,
		obj_t BgL_xz00_6)
	{
		{	/* Eval/evobject.scm 71 */
			{	/* Eval/evobject.scm 72 */
				obj_t BgL_locz00_1213;

				{	/* Eval/evobject.scm 72 */
					bool_t BgL_test2815z00_4717;

					{	/* Eval/evobject.scm 72 */
						bool_t BgL_res2380z00_2816;

						BgL_res2380z00_2816 = EPAIRP(BgL_xz00_6);
						BgL_test2815z00_4717 = BgL_res2380z00_2816;
					}
					if (BgL_test2815z00_4717)
						{	/* Eval/evobject.scm 72 */
							BgL_locz00_1213 = CER(((obj_t) BgL_xz00_6));
						}
					else
						{	/* Eval/evobject.scm 72 */
							BgL_locz00_1213 = BFALSE;
						}
				}
				{	/* Eval/evobject.scm 73 */
					bool_t BgL_test2816z00_4721;

					if (PAIRP(BgL_locz00_1213))
						{	/* Eval/evobject.scm 73 */
							bool_t BgL_test2818z00_4724;

							{	/* Eval/evobject.scm 73 */
								obj_t BgL_tmpz00_4725;

								BgL_tmpz00_4725 = CDR(BgL_locz00_1213);
								BgL_test2818z00_4724 = PAIRP(BgL_tmpz00_4725);
							}
							if (BgL_test2818z00_4724)
								{	/* Eval/evobject.scm 73 */
									obj_t BgL_tmpz00_4728;

									BgL_tmpz00_4728 = CDR(CDR(BgL_locz00_1213));
									BgL_test2816z00_4721 = PAIRP(BgL_tmpz00_4728);
								}
							else
								{	/* Eval/evobject.scm 73 */
									BgL_test2816z00_4721 = ((bool_t) 0);
								}
						}
					else
						{	/* Eval/evobject.scm 73 */
							BgL_test2816z00_4721 = ((bool_t) 0);
						}
					if (BgL_test2816z00_4721)
						{	/* Eval/evobject.scm 73 */
							return
								BGl_errorzf2locationzf2zz__errorz00(BgL_pz00_4, BgL_mz00_5,
								BgL_xz00_6, CAR(CDR(BgL_locz00_1213)),
								CAR(CDR(CDR(BgL_locz00_1213))));
						}
					else
						{	/* Eval/evobject.scm 73 */
							return
								BGl_errorz00zz__errorz00(BgL_pz00_4, BgL_mz00_5, BgL_xz00_6);
						}
				}
			}
		}

	}



/* decompose-ident */
	obj_t BGl_decomposezd2identzd2zz__evobjectz00(obj_t BgL_idz00_42)
	{
		{	/* Eval/evobject.scm 92 */
			{	/* Eval/evobject.scm 93 */
				obj_t BgL_stringz00_1244;

				{	/* Eval/evobject.scm 93 */
					obj_t BgL_res2384z00_2863;

					BgL_res2384z00_2863 = SYMBOL_TO_STRING(BgL_idz00_42);
					BgL_stringz00_1244 = BgL_res2384z00_2863;
				}
				{	/* Eval/evobject.scm 93 */
					long BgL_lenz00_1245;

					BgL_lenz00_1245 = STRING_LENGTH(BgL_stringz00_1244);
					{	/* Eval/evobject.scm 94 */

						{
							long BgL_walkerz00_1247;

							BgL_walkerz00_1247 = ((long) 0);
						BgL_zc3z04anonymousza31302ze3z87_1248:
							if ((BgL_walkerz00_1247 == BgL_lenz00_1245))
								{	/* Eval/evobject.scm 97 */
									{	/* Eval/evobject.scm 98 */
										int BgL_res2387z00_2869;

										{	/* Eval/evobject.scm 98 */
											int BgL_tmpz00_4743;

											BgL_tmpz00_4743 = (int) (((long) 2));
											BgL_res2387z00_2869 =
												BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4743);
										} BgL_res2387z00_2869;
									}
									{	/* Eval/evobject.scm 98 */
										int BgL_tmpz00_4746;

										BgL_tmpz00_4746 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_4746, BFALSE);
									}
									return BgL_idz00_42;
								}
							else
								{	/* Eval/evobject.scm 99 */
									bool_t BgL_test2820z00_4749;

									if (
										(STRING_REF(BgL_stringz00_1244,
												BgL_walkerz00_1247) == ((unsigned char) ':')))
										{	/* Eval/evobject.scm 99 */
											if ((BgL_walkerz00_1247 < (BgL_lenz00_1245 - ((long) 1))))
												{	/* Eval/evobject.scm 100 */
													BgL_test2820z00_4749 =
														(STRING_REF(BgL_stringz00_1244,
															(BgL_walkerz00_1247 + ((long) 1))) ==
														((unsigned char) ':'));
												}
											else
												{	/* Eval/evobject.scm 100 */
													BgL_test2820z00_4749 = ((bool_t) 0);
												}
										}
									else
										{	/* Eval/evobject.scm 99 */
											BgL_test2820z00_4749 = ((bool_t) 0);
										}
									if (BgL_test2820z00_4749)
										{	/* Eval/evobject.scm 102 */
											obj_t BgL_val0_1095z00_1261;
											obj_t BgL_val1_1096z00_1262;

											BgL_val0_1095z00_1261 =
												bstring_to_symbol(c_substring(BgL_stringz00_1244,
													((long) 0), BgL_walkerz00_1247));
											BgL_val1_1096z00_1262 =
												bstring_to_symbol(c_substring(BgL_stringz00_1244,
													(BgL_walkerz00_1247 + ((long) 2)), BgL_lenz00_1245));
											{	/* Eval/evobject.scm 102 */
												int BgL_res2400z00_2902;

												{	/* Eval/evobject.scm 102 */
													int BgL_tmpz00_4764;

													BgL_tmpz00_4764 = (int) (((long) 2));
													BgL_res2400z00_2902 =
														BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4764);
												} BgL_res2400z00_2902;
											}
											{	/* Eval/evobject.scm 102 */
												int BgL_tmpz00_4767;

												BgL_tmpz00_4767 = (int) (((long) 1));
												BGL_MVALUES_VAL_SET(BgL_tmpz00_4767,
													BgL_val1_1096z00_1262);
											}
											return BgL_val0_1095z00_1261;
										}
									else
										{
											long BgL_walkerz00_4770;

											BgL_walkerz00_4770 = (BgL_walkerz00_1247 + ((long) 1));
											BgL_walkerz00_1247 = BgL_walkerz00_4770;
											goto BgL_zc3z04anonymousza31302ze3z87_1248;
										}
								}
						}
					}
				}
			}
		}

	}



/* localize */
	obj_t BGl_localiza7eza7zz__evobjectz00(obj_t BgL_locz00_43, obj_t BgL_pz00_44)
	{
		{	/* Eval/evobject.scm 110 */
			{	/* Eval/evobject.scm 111 */
				bool_t BgL_test2823z00_4772;

				if (CBOOL(BgL_locz00_43))
					{	/* Eval/evobject.scm 111 */
						bool_t BgL_test2825z00_4775;

						{	/* Eval/evobject.scm 111 */
							bool_t BgL_res2402z00_2905;

							BgL_res2402z00_2905 = EPAIRP(BgL_locz00_43);
							BgL_test2825z00_4775 = BgL_res2402z00_2905;
						}
						if (BgL_test2825z00_4775)
							{	/* Eval/evobject.scm 111 */
								BgL_test2823z00_4772 = ((bool_t) 0);
							}
						else
							{	/* Eval/evobject.scm 111 */
								BgL_test2823z00_4772 = ((bool_t) 1);
							}
					}
				else
					{	/* Eval/evobject.scm 111 */
						BgL_test2823z00_4772 = ((bool_t) 1);
					}
				if (BgL_test2823z00_4772)
					{	/* Eval/evobject.scm 111 */
						return BgL_pz00_44;
					}
				else
					{	/* Eval/evobject.scm 111 */
						return BGl_loopze70ze7zz__evobjectz00(BgL_locz00_43, BgL_pz00_44);
					}
			}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zz__evobjectz00(obj_t BgL_locz00_4463,
		obj_t BgL_pz00_1277)
	{
		{	/* Eval/evobject.scm 113 */
			{	/* Eval/evobject.scm 114 */
				bool_t BgL_test2826z00_4778;

				{	/* Eval/evobject.scm 114 */
					bool_t BgL_test2827z00_4779;

					{	/* Eval/evobject.scm 114 */
						bool_t BgL_res2403z00_2906;

						BgL_res2403z00_2906 = EPAIRP(BgL_pz00_1277);
						BgL_test2827z00_4779 = BgL_res2403z00_2906;
					}
					if (BgL_test2827z00_4779)
						{	/* Eval/evobject.scm 114 */
							BgL_test2826z00_4778 = ((bool_t) 1);
						}
					else
						{	/* Eval/evobject.scm 114 */
							if (PAIRP(BgL_pz00_1277))
								{	/* Eval/evobject.scm 114 */
									BgL_test2826z00_4778 = ((bool_t) 0);
								}
							else
								{	/* Eval/evobject.scm 114 */
									BgL_test2826z00_4778 = ((bool_t) 1);
								}
						}
				}
				if (BgL_test2826z00_4778)
					{	/* Eval/evobject.scm 114 */
						return BgL_pz00_1277;
					}
				else
					{	/* Eval/evobject.scm 116 */
						obj_t BgL_arg1329z00_1282;
						obj_t BgL_arg1330z00_1283;
						obj_t BgL_arg1331z00_1284;

						{	/* Eval/evobject.scm 116 */
							obj_t BgL_arg1333z00_1285;

							BgL_arg1333z00_1285 = CAR(((obj_t) BgL_pz00_1277));
							BgL_arg1329z00_1282 =
								BGl_loopze70ze7zz__evobjectz00(BgL_locz00_4463,
								BgL_arg1333z00_1285);
						}
						{	/* Eval/evobject.scm 116 */
							obj_t BgL_arg1334z00_1286;

							BgL_arg1334z00_1286 = CDR(((obj_t) BgL_pz00_1277));
							BgL_arg1330z00_1283 =
								BGl_loopze70ze7zz__evobjectz00(BgL_locz00_4463,
								BgL_arg1334z00_1286);
						}
						BgL_arg1331z00_1284 = CER(((obj_t) BgL_locz00_4463));
						{	/* Eval/evobject.scm 116 */
							obj_t BgL_res2405z00_2911;

							BgL_res2405z00_2911 =
								MAKE_YOUNG_EPAIR(BgL_arg1329z00_1282, BgL_arg1330z00_1283,
								BgL_arg1331z00_1284);
							return BgL_res2405z00_2911;
						}
					}
			}
		}

	}



/* eval-creator */
	obj_t BGl_evalzd2creatorzd2zz__evobjectz00(obj_t BgL_idz00_45,
		obj_t BgL_nativez00_46, long BgL_lenz00_47, obj_t BgL_classnumz00_48)
	{
		{	/* Eval/evobject.scm 121 */
			{
				long BgL_nz00_1307;

				{	/* Eval/evobject.scm 137 */
					obj_t BgL_fieldsz00_1292;

					{	/* Eval/evobject.scm 137 */
						obj_t BgL_res2409z00_2925;

						{	/* Eval/evobject.scm 137 */
							obj_t BgL_tmpz00_4792;

							BgL_tmpz00_4792 = ((obj_t) BgL_nativez00_46);
							BgL_res2409z00_2925 = BGL_CLASS_ALL_FIELDS(BgL_tmpz00_4792);
						}
						BgL_fieldsz00_1292 = BgL_res2409z00_2925;
					}
					{	/* Eval/evobject.scm 138 */
						long BgL_g1039z00_1293;

						BgL_g1039z00_1293 =
							(VECTOR_LENGTH(BgL_fieldsz00_1292) - ((long) 1));
						{
							long BgL_iz00_2940;
							long BgL_nz00_2941;

							BgL_iz00_2940 = BgL_g1039z00_1293;
							BgL_nz00_2941 = ((long) 0);
						BgL_loopz00_2939:
							if ((BgL_iz00_2940 == ((long) -1)))
								{	/* Eval/evobject.scm 141 */
									BgL_nz00_1307 = BgL_nz00_2941;
									{	/* Eval/evobject.scm 124 */
										obj_t BgL_creatorz00_1309;

										BgL_creatorz00_1309 =
											BGl_classzd2creatorzd2zz__objectz00(BgL_nativez00_46);
										{	/* Eval/evobject.scm 125 */
											obj_t BgL_zc3z04anonymousza31345ze3z87_4360;

											BgL_zc3z04anonymousza31345ze3z87_4360 =
												MAKE_VA_PROCEDURE
												(BGl_z62zc3z04anonymousza31345ze3ze5zz__evobjectz00,
												(int) (((long) -1)), (int) (((long) 5)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31345ze3z87_4360,
												(int) (((long) 0)), BINT(BgL_nz00_1307));
											PROCEDURE_SET(BgL_zc3z04anonymousza31345ze3z87_4360,
												(int) (((long) 1)), BINT(BgL_lenz00_47));
											PROCEDURE_SET(BgL_zc3z04anonymousza31345ze3z87_4360,
												(int) (((long) 2)), BgL_idz00_45);
											PROCEDURE_SET(BgL_zc3z04anonymousza31345ze3z87_4360,
												(int) (((long) 3)), BgL_creatorz00_1309);
											PROCEDURE_SET(BgL_zc3z04anonymousza31345ze3z87_4360,
												(int) (((long) 4)), BgL_classnumz00_48);
											return BgL_zc3z04anonymousza31345ze3z87_4360;
										}
									}
								}
							else
								{	/* Eval/evobject.scm 141 */
									if (BGl_classzd2fieldzd2virtualzf3zf3zz__objectz00(VECTOR_REF
											(BgL_fieldsz00_1292, BgL_iz00_2940)))
										{
											long BgL_iz00_4818;

											BgL_iz00_4818 = (BgL_iz00_2940 - ((long) 1));
											BgL_iz00_2940 = BgL_iz00_4818;
											goto BgL_loopz00_2939;
										}
									else
										{
											long BgL_nz00_4822;
											long BgL_iz00_4820;

											BgL_iz00_4820 = (BgL_iz00_2940 - ((long) 1));
											BgL_nz00_4822 = (BgL_nz00_2941 + ((long) 1));
											BgL_nz00_2941 = BgL_nz00_4822;
											BgL_iz00_2940 = BgL_iz00_4820;
											goto BgL_loopz00_2939;
										}
								}
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1345> */
	obj_t BGl_z62zc3z04anonymousza31345ze3ze5zz__evobjectz00(obj_t
		BgL_envz00_4361, obj_t BgL_lz00_4367)
	{
		{	/* Eval/evobject.scm 125 */
			{	/* Eval/evobject.scm 126 */
				long BgL_nz00_4362;
				long BgL_lenz00_4363;
				obj_t BgL_idz00_4364;
				obj_t BgL_creatorz00_4365;
				obj_t BgL_classnumz00_4366;

				BgL_nz00_4362 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_4361, (int) (((long) 0))));
				BgL_lenz00_4363 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_4361, (int) (((long) 1))));
				BgL_idz00_4364 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4361, (int) (((long) 2))));
				BgL_creatorz00_4365 =
					PROCEDURE_REF(BgL_envz00_4361, (int) (((long) 3)));
				BgL_classnumz00_4366 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4361, (int) (((long) 4))));
				if (
					(bgl_list_length(BgL_lz00_4367) == (BgL_nz00_4362 + BgL_lenz00_4363)))
					{	/* Eval/evobject.scm 127 */
						obj_t BgL_oz00_4485;

						BgL_oz00_4485 =
							apply(BgL_creatorz00_4365,
							BGl_takez00zz__r4_pairs_and_lists_6_3z00(BgL_lz00_4367,
								BgL_nz00_4362));
						{	/* Eval/evobject.scm 128 */
							obj_t BgL_arg1350z00_4486;

							BgL_arg1350z00_4486 = CELL_REF(BgL_classnumz00_4366);
							{	/* Eval/evobject.scm 128 */
								long BgL_numz00_4487;

								BgL_numz00_4487 = (long) CINT(BgL_arg1350z00_4486);
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_oz00_4485), BgL_numz00_4487);
						}}
						{	/* Eval/evobject.scm 129 */
							obj_t BgL_arg1351z00_4488;

							BgL_arg1351z00_4488 =
								BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
								(BGl_listzd2tailzd2zz__r4_pairs_and_lists_6_3z00(BgL_lz00_4367,
									BgL_nz00_4362));
							BGl_z52objectzd2wideningzd2setz12z40zz__objectz00((
									(BgL_objectz00_bglt) BgL_oz00_4485), BgL_arg1351z00_4488);
						}
						return BgL_oz00_4485;
					}
				else
					{	/* Eval/evobject.scm 134 */
						obj_t BgL_arg1353z00_4489;

						{	/* Eval/evobject.scm 134 */
							long BgL_arg1354z00_4490;

							BgL_arg1354z00_4490 = (BgL_nz00_4362 + BgL_lenz00_4363);
							{	/* Eval/evobject.scm 132 */
								obj_t BgL_list1355z00_4491;

								BgL_list1355z00_4491 =
									MAKE_YOUNG_PAIR(BINT(BgL_arg1354z00_4490), BNIL);
								BgL_arg1353z00_4489 =
									BGl_formatz00zz__r4_output_6_10_3z00
									(BGl_string2632z00zz__evobjectz00, BgL_list1355z00_4491);
						}}
						return
							BGl_expandzd2errorzd2zz__evobjectz00(BgL_idz00_4364,
							BgL_arg1353z00_4489, BgL_lz00_4367);
					}
			}
		}

	}



/* patch-field-default-values! */
	bool_t BGl_patchzd2fieldzd2defaultzd2valuesz12zc0zz__evobjectz00(obj_t
		BgL_slotsz00_55, obj_t BgL_fieldsz00_56, obj_t BgL_modulez00_57)
	{
		{	/* Eval/evobject.scm 171 */
			{	/* Eval/evobject.scm 174 */
				obj_t BgL_g1100z00_1335;

				BgL_g1100z00_1335 =
					BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(BgL_fieldsz00_56);
				{
					obj_t BgL_ll1097z00_1337;
					obj_t BgL_ll1098z00_1338;

					BgL_ll1097z00_1337 = BgL_g1100z00_1335;
					BgL_ll1098z00_1338 = BgL_slotsz00_55;
				BgL_zc3z04anonymousza31365ze3z87_1339:
					if (NULLP(BgL_ll1097z00_1337))
						{	/* Eval/evobject.scm 181 */
							return ((bool_t) 1);
						}
					else
						{	/* Eval/evobject.scm 181 */
							{	/* Eval/evobject.scm 177 */
								obj_t BgL_fieldz00_1341;
								obj_t BgL_slotz00_1342;

								BgL_fieldz00_1341 = CAR(((obj_t) BgL_ll1097z00_1337));
								BgL_slotz00_1342 = CAR(((obj_t) BgL_ll1098z00_1338));
								{	/* Eval/evobject.scm 179 */
									obj_t BgL_arg1367z00_1343;

									{	/* Eval/evobject.scm 179 */
										obj_t BgL_arg1368z00_1344;

										{	/* Eval/evobject.scm 179 */
											obj_t BgL_arg1370z00_1345;

											{	/* Eval/evobject.scm 179 */
												obj_t BgL_arg1371z00_1346;

												{	/* Eval/evobject.scm 179 */
													obj_t BgL_arg1372z00_1347;

													BgL_arg1372z00_1347 =
														STRUCT_REF(
														((obj_t) BgL_slotz00_1342), (int) (((long) 3)));
													BgL_arg1371z00_1346 =
														MAKE_YOUNG_PAIR(BgL_arg1372z00_1347, BNIL);
												}
												BgL_arg1370z00_1345 =
													MAKE_YOUNG_PAIR(BNIL, BgL_arg1371z00_1346);
											}
											BgL_arg1368z00_1344 =
												MAKE_YOUNG_PAIR(BGl_symbol2633z00zz__evobjectz00,
												BgL_arg1370z00_1345);
										}
										BgL_arg1367z00_1343 =
											BGl_evalz12z12zz__evalz00(BgL_arg1368z00_1344,
											BgL_modulez00_57);
									}
									VECTOR_SET(
										((obj_t) BgL_fieldz00_1341), ((long) 6),
										BgL_arg1367z00_1343);
							}}
							{	/* Eval/evobject.scm 181 */
								obj_t BgL_arg1373z00_1348;
								obj_t BgL_arg1374z00_1349;

								BgL_arg1373z00_1348 = CDR(((obj_t) BgL_ll1097z00_1337));
								BgL_arg1374z00_1349 = CDR(((obj_t) BgL_ll1098z00_1338));
								{
									obj_t BgL_ll1098z00_4879;
									obj_t BgL_ll1097z00_4878;

									BgL_ll1097z00_4878 = BgL_arg1373z00_1348;
									BgL_ll1098z00_4879 = BgL_arg1374z00_1349;
									BgL_ll1098z00_1338 = BgL_ll1098z00_4879;
									BgL_ll1097z00_1337 = BgL_ll1097z00_4878;
									goto BgL_zc3z04anonymousza31365ze3z87_1339;
								}
							}
						}
				}
			}
		}

	}



/* patch-vfield-accessors! */
	bool_t BGl_patchzd2vfieldzd2accessorsz12z12zz__evobjectz00(obj_t
		BgL_slotsz00_58, obj_t BgL_fieldsz00_59, obj_t BgL_virtualsz00_60,
		obj_t BgL_modulez00_61)
	{
		{	/* Eval/evobject.scm 186 */
			{	/* Eval/evobject.scm 189 */
				obj_t BgL_g1105z00_1351;

				BgL_g1105z00_1351 =
					BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(BgL_fieldsz00_59);
				{
					obj_t BgL_l1103z00_1353;

					BgL_l1103z00_1353 = BgL_g1105z00_1351;
				BgL_zc3z04anonymousza31375ze3z87_1354:
					if (PAIRP(BgL_l1103z00_1353))
						{	/* Eval/evobject.scm 203 */
							{	/* Eval/evobject.scm 190 */
								obj_t BgL_fieldz00_1356;

								BgL_fieldz00_1356 = CAR(BgL_l1103z00_1353);
								{	/* Eval/evobject.scm 190 */
									obj_t BgL_idz00_1357;

									BgL_idz00_1357 =
										BGl_classzd2fieldzd2namez00zz__objectz00(BgL_fieldz00_1356);
									{	/* Eval/evobject.scm 190 */
										obj_t BgL_slotz00_1358;

										{
											obj_t BgL_list1102z00_1371;

											BgL_list1102z00_1371 = BgL_slotsz00_58;
										BgL_zc3z04anonymousza31386ze3z87_1372:
											if (PAIRP(BgL_list1102z00_1371))
												{	/* Eval/evobject.scm 191 */
													if (
														(STRUCT_REF(CAR(BgL_list1102z00_1371),
																(int) (((long) 0))) == BgL_idz00_1357))
														{	/* Eval/evobject.scm 191 */
															BgL_slotz00_1358 = CAR(BgL_list1102z00_1371);
														}
													else
														{
															obj_t BgL_list1102z00_4893;

															BgL_list1102z00_4893 = CDR(BgL_list1102z00_1371);
															BgL_list1102z00_1371 = BgL_list1102z00_4893;
															goto BgL_zc3z04anonymousza31386ze3z87_1372;
														}
												}
											else
												{	/* Eval/evobject.scm 191 */
													BgL_slotz00_1358 = BFALSE;
												}
										}
										{	/* Eval/evobject.scm 191 */

											if (CBOOL(STRUCT_REF(
														((obj_t) BgL_slotz00_1358), (int) (((long) 5)))))
												{	/* Eval/evobject.scm 194 */
													{	/* Eval/evobject.scm 195 */
														obj_t BgL_arg1378z00_1360;

														{	/* Eval/evobject.scm 195 */
															obj_t BgL_arg1379z00_1361;

															BgL_arg1379z00_1361 =
																STRUCT_REF(
																((obj_t) BgL_slotz00_1358), (int) (((long) 5)));
															BgL_arg1378z00_1360 =
																BGl_evalz12z12zz__evalz00(BgL_arg1379z00_1361,
																BgL_modulez00_61);
														}
														{	/* Eval/evobject.scm 80 */
															int BgL_auxz00_4906;
															obj_t BgL_tmpz00_4904;

															BgL_auxz00_4906 = (int) (((long) 5));
															BgL_tmpz00_4904 = ((obj_t) BgL_slotz00_1358);
															STRUCT_SET(BgL_tmpz00_4904, BgL_auxz00_4906,
																BgL_arg1378z00_1360);
													}}
													{	/* Eval/evobject.scm 196 */
														obj_t BgL_arg1380z00_1362;

														{	/* Eval/evobject.scm 196 */
															obj_t BgL_arg1381z00_1363;

															BgL_arg1381z00_1363 =
																STRUCT_REF(
																((obj_t) BgL_slotz00_1358), (int) (((long) 6)));
															BgL_arg1380z00_1362 =
																BGl_evalz12z12zz__evalz00(BgL_arg1381z00_1363,
																BgL_modulez00_61);
														}
														{	/* Eval/evobject.scm 80 */
															int BgL_auxz00_4915;
															obj_t BgL_tmpz00_4913;

															BgL_auxz00_4915 = (int) (((long) 6));
															BgL_tmpz00_4913 = ((obj_t) BgL_slotz00_1358);
															STRUCT_SET(BgL_tmpz00_4913, BgL_auxz00_4915,
																BgL_arg1380z00_1362);
													}}
													{	/* Eval/evobject.scm 197 */
														obj_t BgL_arg1382z00_1364;

														BgL_arg1382z00_1364 =
															STRUCT_REF(
															((obj_t) BgL_slotz00_1358), (int) (((long) 5)));
														VECTOR_SET(
															((obj_t) BgL_fieldz00_1356), ((long) 1),
															BgL_arg1382z00_1364);
													}
													{	/* Eval/evobject.scm 198 */
														obj_t BgL_arg1383z00_1365;

														BgL_arg1383z00_1365 =
															STRUCT_REF(
															((obj_t) BgL_slotz00_1358), (int) (((long) 6)));
														VECTOR_SET(
															((obj_t) BgL_fieldz00_1356), ((long) 2),
															BgL_arg1383z00_1365);
													}
													{	/* Eval/evobject.scm 199 */
														obj_t BgL_numz00_1366;

														BgL_numz00_1366 =
															STRUCT_REF(
															((obj_t) BgL_slotz00_1358), (int) (((long) 4)));
														{	/* Eval/evobject.scm 199 */
															obj_t BgL_vfieldz00_1367;

															BgL_vfieldz00_1367 =
																VECTOR_REF(BgL_virtualsz00_60,
																(long) CINT(BgL_numz00_1366));
															{	/* Eval/evobject.scm 200 */

																{	/* Eval/evobject.scm 201 */
																	obj_t BgL_arg1384z00_1368;

																	BgL_arg1384z00_1368 =
																		STRUCT_REF(
																		((obj_t) BgL_slotz00_1358),
																		(int) (((long) 5)));
																	{	/* Eval/evobject.scm 201 */
																		obj_t BgL_tmpz00_4936;

																		BgL_tmpz00_4936 =
																			((obj_t) BgL_vfieldz00_1367);
																		SET_CAR(BgL_tmpz00_4936,
																			BgL_arg1384z00_1368);
																}}
																{	/* Eval/evobject.scm 202 */
																	obj_t BgL_arg1385z00_1369;

																	BgL_arg1385z00_1369 =
																		STRUCT_REF(
																		((obj_t) BgL_slotz00_1358),
																		(int) (((long) 6)));
																	{	/* Eval/evobject.scm 202 */
																		obj_t BgL_tmpz00_4942;

																		BgL_tmpz00_4942 =
																			((obj_t) BgL_vfieldz00_1367);
																		SET_CDR(BgL_tmpz00_4942,
																			BgL_arg1385z00_1369);
												}}}}}}
											else
												{	/* Eval/evobject.scm 194 */
													BFALSE;
												}
										}
									}
								}
							}
							{
								obj_t BgL_l1103z00_4945;

								BgL_l1103z00_4945 = CDR(BgL_l1103z00_1353);
								BgL_l1103z00_1353 = BgL_l1103z00_4945;
								goto BgL_zc3z04anonymousza31375ze3z87_1354;
							}
						}
					else
						{	/* Eval/evobject.scm 203 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* eval-register-class */
	obj_t BGl_evalzd2registerzd2classz00zz__evobjectz00(obj_t BgL_idz00_62,
		obj_t BgL_modulez00_63, obj_t BgL_superz00_64, bool_t BgL_abstractz00_65,
		obj_t BgL_slotsz00_66, long BgL_hashz00_67, obj_t BgL_constrz00_68)
	{
		{	/* Eval/evobject.scm 208 */
			{	/* Eval/evobject.scm 209 */
				long BgL_siza7eza7_1383;

				{	/* Eval/evobject.scm 209 */
					obj_t BgL_arg1409z00_1409;

					{	/* Eval/evobject.scm 209 */
						obj_t BgL_hook1110z00_1410;

						BgL_hook1110z00_1410 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
						{
							obj_t BgL_l1107z00_1412;
							obj_t BgL_h1108z00_1413;

							BgL_l1107z00_1412 = BgL_slotsz00_66;
							BgL_h1108z00_1413 = BgL_hook1110z00_1410;
						BgL_zc3z04anonymousza31410ze3z87_1414:
							if (NULLP(BgL_l1107z00_1412))
								{	/* Eval/evobject.scm 209 */
									BgL_arg1409z00_1409 = CDR(BgL_hook1110z00_1410);
								}
							else
								{	/* Eval/evobject.scm 209 */
									bool_t BgL_test2838z00_4951;

									{	/* Eval/evobject.scm 209 */
										bool_t BgL_test2839z00_4952;

										{	/* Eval/evobject.scm 80 */
											obj_t BgL_sz00_3011;

											BgL_sz00_3011 = CAR(((obj_t) BgL_l1107z00_1412));
											BgL_test2839z00_4952 =
												CBOOL(STRUCT_REF(BgL_sz00_3011, (int) (((long) 5))));
										}
										if (BgL_test2839z00_4952)
											{	/* Eval/evobject.scm 209 */
												BgL_test2838z00_4951 = ((bool_t) 0);
											}
										else
											{	/* Eval/evobject.scm 209 */
												BgL_test2838z00_4951 = ((bool_t) 1);
											}
									}
									if (BgL_test2838z00_4951)
										{	/* Eval/evobject.scm 209 */
											obj_t BgL_nh1109z00_1419;

											{	/* Eval/evobject.scm 209 */
												obj_t BgL_arg1415z00_1421;

												BgL_arg1415z00_1421 = CAR(((obj_t) BgL_l1107z00_1412));
												{	/* Eval/evobject.scm 209 */
													obj_t BgL_res2420z00_3013;

													BgL_res2420z00_3013 =
														MAKE_YOUNG_PAIR(BgL_arg1415z00_1421, BNIL);
													BgL_nh1109z00_1419 = BgL_res2420z00_3013;
												}
											}
											SET_CDR(BgL_h1108z00_1413, BgL_nh1109z00_1419);
											{	/* Eval/evobject.scm 209 */
												obj_t BgL_arg1414z00_1420;

												BgL_arg1414z00_1420 = CDR(((obj_t) BgL_l1107z00_1412));
												{
													obj_t BgL_h1108z00_4965;
													obj_t BgL_l1107z00_4964;

													BgL_l1107z00_4964 = BgL_arg1414z00_1420;
													BgL_h1108z00_4965 = BgL_nh1109z00_1419;
													BgL_h1108z00_1413 = BgL_h1108z00_4965;
													BgL_l1107z00_1412 = BgL_l1107z00_4964;
													goto BgL_zc3z04anonymousza31410ze3z87_1414;
												}
											}
										}
									else
										{	/* Eval/evobject.scm 209 */
											obj_t BgL_arg1416z00_1422;

											BgL_arg1416z00_1422 = CDR(((obj_t) BgL_l1107z00_1412));
											{
												obj_t BgL_l1107z00_4968;

												BgL_l1107z00_4968 = BgL_arg1416z00_1422;
												BgL_l1107z00_1412 = BgL_l1107z00_4968;
												goto BgL_zc3z04anonymousza31410ze3z87_1414;
											}
										}
								}
						}
					}
					BgL_siza7eza7_1383 = bgl_list_length(BgL_arg1409z00_1409);
				}
				{	/* Eval/evobject.scm 209 */
					obj_t BgL_offsetz00_1384;

					if (BGl_evalzd2classzf3z21zz__objectz00(BgL_superz00_64))
						{	/* Eval/evobject.scm 210 */
							BgL_offsetz00_1384 =
								BGl_classzd2evdatazd2zz__objectz00(BgL_superz00_64);
						}
					else
						{	/* Eval/evobject.scm 210 */
							BgL_offsetz00_1384 = BINT(((long) 0));
						}
					{	/* Eval/evobject.scm 210 */
						obj_t BgL_nativez00_1385;

						{
							obj_t BgL_superz00_1400;

							BgL_superz00_1400 = BgL_superz00_64;
						BgL_zc3z04anonymousza31401ze3z87_1401:
							if (BGl_evalzd2classzf3z21zz__objectz00(BgL_superz00_1400))
								{
									obj_t BgL_superz00_4976;

									BgL_superz00_4976 =
										BGl_classzd2superzd2zz__objectz00(BgL_superz00_1400);
									BgL_superz00_1400 = BgL_superz00_4976;
									goto BgL_zc3z04anonymousza31401ze3z87_1401;
								}
							else
								{	/* Eval/evobject.scm 213 */
									if ((BgL_superz00_1400 == BGl_objectz00zz__objectz00))
										{	/* Eval/evobject.scm 214 */
											BgL_nativez00_1385 = BGl_objectz00zz__objectz00;
										}
									else
										{	/* Eval/evobject.scm 214 */
											if (BGl_classzd2abstractzf3z21zz__objectz00
												(BgL_superz00_1400))
												{
													obj_t BgL_superz00_4982;

													BgL_superz00_4982 =
														BGl_classzd2superzd2zz__objectz00
														(BgL_superz00_1400);
													BgL_superz00_1400 = BgL_superz00_4982;
													goto BgL_zc3z04anonymousza31401ze3z87_1401;
												}
											else
												{	/* Eval/evobject.scm 215 */
													BgL_nativez00_1385 = BgL_superz00_1400;
												}
										}
								}
						}
						{	/* Eval/evobject.scm 211 */
							long BgL_lengthz00_1386;

							BgL_lengthz00_1386 =
								((long) CINT(BgL_offsetz00_1384) + BgL_siza7eza7_1383);
							{	/* Eval/evobject.scm 217 */
								obj_t BgL_classnumz00_1387;

								{	/* Eval/evobject.scm 218 */
									obj_t BgL_res2422z00_3020;

									{	/* Eval/evobject.scm 218 */
										obj_t BgL_tmpz00_4986;

										BgL_tmpz00_4986 = BINT(((long) -1));
										BgL_res2422z00_3020 = MAKE_YOUNG_CELL(BgL_tmpz00_4986);
									}
									BgL_classnumz00_1387 = BgL_res2422z00_3020;
								}
								{	/* Eval/evobject.scm 218 */
									obj_t BgL_claza7za7z00_1388;

									{	/* Eval/evobject.scm 223 */
										obj_t BgL_arg1394z00_1391;
										obj_t BgL_arg1395z00_1392;
										obj_t BgL_arg1396z00_1393;
										obj_t BgL_arg1397z00_1394;
										obj_t BgL_arg1398z00_1395;
										obj_t BgL_arg1399z00_1396;

										if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_modulez00_63))
											{	/* Eval/evobject.scm 223 */
												BgL_arg1394z00_1391 =
													BGl_evmodulezd2namezd2zz__evmodulez00
													(BgL_modulez00_63);
											}
										else
											{	/* Eval/evobject.scm 223 */
												BgL_arg1394z00_1391 = BGl_symbol2635z00zz__evobjectz00;
											}
										BgL_arg1395z00_1392 =
											BGl_evalzd2creatorzd2zz__evobjectz00(BgL_idz00_62,
											BgL_nativez00_1385, BgL_lengthz00_1386,
											BgL_classnumz00_1387);
										{	/* Eval/evobject.scm 152 */
											obj_t BgL_allocz00_3021;

											BgL_allocz00_3021 =
												BGl_classzd2allocatorzd2zz__objectz00
												(BgL_nativez00_1385);
											{	/* Eval/evobject.scm 153 */
												obj_t BgL_zc3z04anonymousza31358ze3z87_4369;

												BgL_zc3z04anonymousza31358ze3z87_4369 =
													MAKE_FX_PROCEDURE
													(BGl_z62zc3z04anonymousza31358ze3ze5zz__evobjectz00,
													(int) (((long) 0)), (int) (((long) 3)));
												PROCEDURE_SET(BgL_zc3z04anonymousza31358ze3z87_4369,
													(int) (((long) 0)), BgL_allocz00_3021);
												PROCEDURE_SET(BgL_zc3z04anonymousza31358ze3z87_4369,
													(int) (((long) 1)), BgL_classnumz00_1387);
												PROCEDURE_SET(BgL_zc3z04anonymousza31358ze3z87_4369,
													(int) (((long) 2)), BINT(BgL_lengthz00_1386));
												BgL_arg1396z00_1393 =
													BgL_zc3z04anonymousza31358ze3z87_4369;
										}}
										if (CBOOL(BgL_constrz00_68))
											{	/* Eval/evobject.scm 235 */
												BgL_arg1397z00_1394 = BgL_constrz00_68;
											}
										else
											{
												obj_t BgL_cz00_3032;

												BgL_cz00_3032 = BgL_superz00_64;
											BgL_findzd2classzd2constructorz00_3031:
												{	/* Eval/evobject.scm 259 */
													obj_t BgL_constz00_3036;

													BgL_constz00_3036 =
														BGl_classzd2constructorzd2zz__objectz00
														(BgL_cz00_3032);
													if (CBOOL(BgL_constz00_3036))
														{	/* Eval/evobject.scm 260 */
															BgL_arg1397z00_1394 = BgL_constz00_3036;
														}
													else
														{	/* Eval/evobject.scm 262 */
															obj_t BgL_sz00_3037;

															BgL_sz00_3037 =
																BGl_classzd2superzd2zz__objectz00
																(BgL_cz00_3032);
															if (BGl_classzf3zf3zz__objectz00(BgL_sz00_3037))
																{
																	obj_t BgL_cz00_5012;

																	BgL_cz00_5012 = BgL_sz00_3037;
																	BgL_cz00_3032 = BgL_cz00_5012;
																	goto BgL_findzd2classzd2constructorz00_3031;
																}
															else
																{	/* Eval/evobject.scm 263 */
																	BgL_arg1397z00_1394 = BFALSE;
																}
														}
												}
											}
										{	/* Eval/evobject.scm 163 */
											obj_t BgL_zc3z04anonymousza31362ze3z87_4368;

											BgL_zc3z04anonymousza31362ze3z87_4368 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31362ze3ze5zz__evobjectz00,
												(int) (((long) 1)), (int) (((long) 2)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31362ze3z87_4368,
												(int) (((long) 0)), BgL_classnumz00_1387);
											PROCEDURE_SET(BgL_zc3z04anonymousza31362ze3z87_4368,
												(int) (((long) 1)), BINT(BgL_lengthz00_1386));
											BgL_arg1398z00_1395 =
												BgL_zc3z04anonymousza31362ze3z87_4368;
										}
										BgL_arg1399z00_1396 =
											BGl_makezd2classzd2virtualzd2fieldszd2zz__evobjectz00
											(BgL_slotsz00_66);
										BgL_claza7za7z00_1388 =
											BGl_registerzd2classz12zc0zz__objectz00(BgL_idz00_62,
											BgL_arg1394z00_1391, BgL_superz00_64, BgL_hashz00_67,
											BgL_arg1395z00_1392, BgL_arg1396z00_1393,
											BgL_arg1397z00_1394, BgL_arg1398z00_1395, BFALSE,
											BGl_vector2637z00zz__evobjectz00, BgL_arg1399z00_1396);
									}
									{	/* Eval/evobject.scm 219 */

										{	/* Eval/evobject.scm 244 */
											long BgL_arg1393z00_1389;

											{	/* Eval/evobject.scm 244 */
												long BgL_res2424z00_3049;

												BgL_res2424z00_3049 =
													BGL_CLASS_INDEX(BgL_claza7za7z00_1388);
												BgL_arg1393z00_1389 = BgL_res2424z00_3049;
											}
											CELL_SET(BgL_classnumz00_1387, BINT(BgL_arg1393z00_1389));
										}
										BGl_classzd2evdatazd2setz12z12zz__objectz00
											(BgL_claza7za7z00_1388, BINT(BgL_lengthz00_1386));
										{	/* Eval/evobject.scm 247 */
											obj_t BgL_fieldsz00_1390;

											BgL_fieldsz00_1390 =
												BGl_makezd2classzd2fieldsz00zz__evobjectz00
												(BgL_idz00_62, BgL_claza7za7z00_1388, BgL_slotsz00_66,
												BgL_siza7eza7_1383, BgL_offsetz00_1384);
											BGl_classzd2evfieldszd2setz12z12zz__objectz00
												(BgL_claza7za7z00_1388, BgL_fieldsz00_1390);
											BGl_list2638z00zz__evobjectz00;
											BGl_list2645z00zz__evobjectz00;
										}
										return BgL_claza7za7z00_1388;
									}
								}
							}
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1362> */
	obj_t BGl_z62zc3z04anonymousza31362ze3ze5zz__evobjectz00(obj_t
		BgL_envz00_4370, obj_t BgL_oz00_4373)
	{
		{	/* Eval/evobject.scm 163 */
			{	/* Eval/evobject.scm 164 */
				obj_t BgL_classnumz00_4371;
				long BgL_lengthz00_4372;

				BgL_classnumz00_4371 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4370, (int) (((long) 0))));
				BgL_lengthz00_4372 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_4370, (int) (((long) 1))));
				{	/* Eval/evobject.scm 164 */
					obj_t BgL_arg1363z00_4492;

					BgL_arg1363z00_4492 = CELL_REF(BgL_classnumz00_4371);
					{	/* Eval/evobject.scm 164 */
						long BgL_numz00_4493;

						BgL_numz00_4493 = (long) CINT(BgL_arg1363z00_4492);
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_oz00_4373), BgL_numz00_4493);
				}}
				{	/* Eval/evobject.scm 165 */
					obj_t BgL_arg1364z00_4494;

					BgL_arg1364z00_4494 = make_vector(BgL_lengthz00_4372, BFALSE);
					BGl_z52objectzd2wideningzd2setz12z40zz__objectz00(
						((BgL_objectz00_bglt) BgL_oz00_4373), BgL_arg1364z00_4494);
				}
				return BgL_oz00_4373;
			}
		}

	}



/* &<@anonymous:1358> */
	obj_t BGl_z62zc3z04anonymousza31358ze3ze5zz__evobjectz00(obj_t
		BgL_envz00_4374)
	{
		{	/* Eval/evobject.scm 153 */
			{	/* Eval/evobject.scm 154 */
				obj_t BgL_allocz00_4375;
				obj_t BgL_classnumz00_4376;
				long BgL_lengthz00_4377;

				BgL_allocz00_4375 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4374, (int) (((long) 0))));
				BgL_classnumz00_4376 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4374, (int) (((long) 1))));
				BgL_lengthz00_4377 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_4374, (int) (((long) 2))));
				{	/* Eval/evobject.scm 154 */
					obj_t BgL_oz00_4495;

					BgL_oz00_4495 =
						PROCEDURE_ENTRY(BgL_allocz00_4375) (BgL_allocz00_4375, BEOA);
					{	/* Eval/evobject.scm 155 */
						obj_t BgL_arg1359z00_4496;

						BgL_arg1359z00_4496 = CELL_REF(BgL_classnumz00_4376);
						{	/* Eval/evobject.scm 155 */
							long BgL_numz00_4497;

							BgL_numz00_4497 = (long) CINT(BgL_arg1359z00_4496);
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_oz00_4495), BgL_numz00_4497);
					}}
					{	/* Eval/evobject.scm 156 */
						obj_t BgL_arg1360z00_4498;

						BgL_arg1360z00_4498 = make_vector(BgL_lengthz00_4377, BUNSPEC);
						BGl_z52objectzd2wideningzd2setz12z40zz__objectz00(
							((BgL_objectz00_bglt) BgL_oz00_4495), BgL_arg1360z00_4498);
					}
					return BgL_oz00_4495;
				}
			}
		}

	}



/* classgen-slot-anonymous */
	obj_t BGl_classgenzd2slotzd2anonymousz00zz__evobjectz00(obj_t BgL_indexz00_70,
		obj_t BgL_sz00_71, obj_t BgL_classz00_72)
	{
		{	/* Eval/evobject.scm 273 */
			{	/* Eval/evobject.scm 276 */
				obj_t BgL_zc3z04anonymousza31427ze3z87_4379;
				obj_t BgL_zc3z04anonymousza31422ze3z87_4378;

				BgL_zc3z04anonymousza31427ze3z87_4379 =
					MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31427ze3ze5zz__evobjectz00,
					(int) (((long) 2)), (int) (((long) 3)));
				BgL_zc3z04anonymousza31422ze3z87_4378 =
					MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31422ze3ze5zz__evobjectz00,
					(int) (((long) 1)), (int) (((long) 3)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31427ze3z87_4379,
					(int) (((long) 0)), BgL_sz00_71);
				PROCEDURE_SET(BgL_zc3z04anonymousza31427ze3z87_4379,
					(int) (((long) 1)), BgL_classz00_72);
				PROCEDURE_SET(BgL_zc3z04anonymousza31427ze3z87_4379,
					(int) (((long) 2)), BgL_indexz00_70);
				PROCEDURE_SET(BgL_zc3z04anonymousza31422ze3z87_4378,
					(int) (((long) 0)), BgL_sz00_71);
				PROCEDURE_SET(BgL_zc3z04anonymousza31422ze3z87_4378,
					(int) (((long) 1)), BgL_classz00_72);
				PROCEDURE_SET(BgL_zc3z04anonymousza31422ze3z87_4378,
					(int) (((long) 2)), BgL_indexz00_70);
				{	/* Eval/evobject.scm 274 */
					obj_t BgL_list1420z00_1431;

					{	/* Eval/evobject.scm 274 */
						obj_t BgL_arg1421z00_1432;

						BgL_arg1421z00_1432 =
							MAKE_YOUNG_PAIR(BgL_zc3z04anonymousza31427ze3z87_4379, BNIL);
						BgL_list1420z00_1431 =
							MAKE_YOUNG_PAIR(BgL_zc3z04anonymousza31422ze3z87_4378,
							BgL_arg1421z00_1432);
					}
					return BgL_list1420z00_1431;
				}
			}
		}

	}



/* &<@anonymous:1422> */
	obj_t BGl_z62zc3z04anonymousza31422ze3ze5zz__evobjectz00(obj_t
		BgL_envz00_4380, obj_t BgL_oz00_4384)
	{
		{	/* Eval/evobject.scm 275 */
			{	/* Eval/evobject.scm 276 */
				obj_t BgL_sz00_4381;
				obj_t BgL_classz00_4382;
				obj_t BgL_indexz00_4383;

				BgL_sz00_4381 = PROCEDURE_REF(BgL_envz00_4380, (int) (((long) 0)));
				BgL_classz00_4382 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4380, (int) (((long) 1))));
				BgL_indexz00_4383 = PROCEDURE_REF(BgL_envz00_4380, (int) (((long) 2)));
				if (BGl_isazf3zf3zz__objectz00(BgL_oz00_4384, BgL_classz00_4382))
					{	/* Eval/evobject.scm 277 */
						obj_t BgL_arg1424z00_4499;

						BgL_arg1424z00_4499 =
							BGl_z52objectzd2wideningz80zz__objectz00(
							((BgL_objectz00_bglt) BgL_oz00_4384));
						{	/* Eval/evobject.scm 277 */
							long BgL_kz00_4500;

							BgL_kz00_4500 = (long) CINT(BgL_indexz00_4383);
							return VECTOR_REF(((obj_t) BgL_arg1424z00_4499), BgL_kz00_4500);
						}
					}
				else
					{	/* Eval/evobject.scm 278 */
						obj_t BgL_arg1425z00_4501;
						obj_t BgL_arg1426z00_4502;

						BgL_arg1425z00_4501 =
							STRUCT_REF(((obj_t) BgL_sz00_4381), (int) (((long) 0)));
						BgL_arg1426z00_4502 =
							BGl_classzd2namezd2zz__objectz00(BgL_classz00_4382);
						return
							BGl_bigloozd2typezd2errorz00zz__errorz00(BgL_arg1425z00_4501,
							BgL_arg1426z00_4502, BgL_oz00_4384);
					}
			}
		}

	}



/* &<@anonymous:1427> */
	obj_t BGl_z62zc3z04anonymousza31427ze3ze5zz__evobjectz00(obj_t
		BgL_envz00_4385, obj_t BgL_oz00_4389, obj_t BgL_vz00_4390)
	{
		{	/* Eval/evobject.scm 279 */
			{	/* Eval/evobject.scm 280 */
				obj_t BgL_sz00_4386;
				obj_t BgL_classz00_4387;
				obj_t BgL_indexz00_4388;

				BgL_sz00_4386 = PROCEDURE_REF(BgL_envz00_4385, (int) (((long) 0)));
				BgL_classz00_4387 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4385, (int) (((long) 1))));
				BgL_indexz00_4388 = PROCEDURE_REF(BgL_envz00_4385, (int) (((long) 2)));
				if (BGl_isazf3zf3zz__objectz00(BgL_oz00_4389, BgL_classz00_4387))
					{	/* Eval/evobject.scm 281 */
						obj_t BgL_arg1429z00_4503;

						BgL_arg1429z00_4503 =
							BGl_z52objectzd2wideningz80zz__objectz00(
							((BgL_objectz00_bglt) BgL_oz00_4389));
						{	/* Eval/evobject.scm 281 */
							long BgL_kz00_4504;

							BgL_kz00_4504 = (long) CINT(BgL_indexz00_4388);
							return
								VECTOR_SET(
								((obj_t) BgL_arg1429z00_4503), BgL_kz00_4504, BgL_vz00_4390);
						}
					}
				else
					{	/* Eval/evobject.scm 282 */
						obj_t BgL_arg1430z00_4505;
						obj_t BgL_arg1431z00_4506;

						BgL_arg1430z00_4505 =
							STRUCT_REF(((obj_t) BgL_sz00_4386), (int) (((long) 0)));
						BgL_arg1431z00_4506 =
							BGl_classzd2namezd2zz__objectz00(BgL_classz00_4387);
						return
							BGl_bigloozd2typezd2errorz00zz__errorz00(BgL_arg1430z00_4505,
							BgL_arg1431z00_4506, BgL_oz00_4389);
					}
			}
		}

	}



/* make-class-fields */
	obj_t BGl_makezd2classzd2fieldsz00zz__evobjectz00(obj_t BgL_idz00_73,
		obj_t BgL_classz00_74, obj_t BgL_slotsz00_75, long BgL_siza7eza7_76,
		obj_t BgL_offsetz00_77)
	{
		{	/* Eval/evobject.scm 287 */
			{
				obj_t BgL_sz00_1505;
				obj_t BgL_iz00_1506;
				obj_t BgL_classz00_1507;

				{	/* Eval/evobject.scm 312 */
					obj_t BgL_arg1432z00_1450;

					{	/* Eval/evobject.scm 312 */
						obj_t BgL_arg1433z00_1451;
						obj_t BgL_arg1434z00_1452;

						{	/* Eval/evobject.scm 312 */
							obj_t BgL_ll1116z00_1453;
							obj_t BgL_ll1117z00_1454;

							{	/* Eval/evobject.scm 314 */
								obj_t BgL_hook1115z00_1470;

								BgL_hook1115z00_1470 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
								{
									obj_t BgL_l1112z00_1472;
									obj_t BgL_h1113z00_1473;

									BgL_l1112z00_1472 = BgL_slotsz00_75;
									BgL_h1113z00_1473 = BgL_hook1115z00_1470;
								BgL_zc3z04anonymousza31441ze3z87_1474:
									if (NULLP(BgL_l1112z00_1472))
										{	/* Eval/evobject.scm 314 */
											BgL_ll1116z00_1453 = CDR(BgL_hook1115z00_1470);
										}
									else
										{	/* Eval/evobject.scm 314 */
											bool_t BgL_test2851z00_5124;

											{	/* Eval/evobject.scm 314 */
												bool_t BgL_test2852z00_5125;

												{	/* Eval/evobject.scm 80 */
													obj_t BgL_sz00_3088;

													BgL_sz00_3088 = CAR(((obj_t) BgL_l1112z00_1472));
													BgL_test2852z00_5125 =
														CBOOL(STRUCT_REF(BgL_sz00_3088,
															(int) (((long) 5))));
												}
												if (BgL_test2852z00_5125)
													{	/* Eval/evobject.scm 314 */
														BgL_test2851z00_5124 = ((bool_t) 0);
													}
												else
													{	/* Eval/evobject.scm 314 */
														BgL_test2851z00_5124 = ((bool_t) 1);
													}
											}
											if (BgL_test2851z00_5124)
												{	/* Eval/evobject.scm 314 */
													obj_t BgL_nh1114z00_1479;

													{	/* Eval/evobject.scm 314 */
														obj_t BgL_arg1446z00_1481;

														BgL_arg1446z00_1481 =
															CAR(((obj_t) BgL_l1112z00_1472));
														{	/* Eval/evobject.scm 314 */
															obj_t BgL_res2427z00_3090;

															BgL_res2427z00_3090 =
																MAKE_YOUNG_PAIR(BgL_arg1446z00_1481, BNIL);
															BgL_nh1114z00_1479 = BgL_res2427z00_3090;
														}
													}
													SET_CDR(BgL_h1113z00_1473, BgL_nh1114z00_1479);
													{	/* Eval/evobject.scm 314 */
														obj_t BgL_arg1445z00_1480;

														BgL_arg1445z00_1480 =
															CDR(((obj_t) BgL_l1112z00_1472));
														{
															obj_t BgL_h1113z00_5138;
															obj_t BgL_l1112z00_5137;

															BgL_l1112z00_5137 = BgL_arg1445z00_1480;
															BgL_h1113z00_5138 = BgL_nh1114z00_1479;
															BgL_h1113z00_1473 = BgL_h1113z00_5138;
															BgL_l1112z00_1472 = BgL_l1112z00_5137;
															goto BgL_zc3z04anonymousza31441ze3z87_1474;
														}
													}
												}
											else
												{	/* Eval/evobject.scm 314 */
													obj_t BgL_arg1448z00_1482;

													BgL_arg1448z00_1482 =
														CDR(((obj_t) BgL_l1112z00_1472));
													{
														obj_t BgL_l1112z00_5141;

														BgL_l1112z00_5141 = BgL_arg1448z00_1482;
														BgL_l1112z00_1472 = BgL_l1112z00_5141;
														goto BgL_zc3z04anonymousza31441ze3z87_1474;
													}
												}
										}
								}
							}
							{	/* Eval/evobject.scm 315 */
								obj_t BgL_list1449z00_1486;

								BgL_list1449z00_1486 = MAKE_YOUNG_PAIR(BgL_offsetz00_77, BNIL);
								BgL_ll1117z00_1454 =
									BGl_iotaz00zz__r4_pairs_and_lists_6_3z00(
									(int) (BgL_siza7eza7_76), BgL_list1449z00_1486);
							}
							if (NULLP(BgL_ll1116z00_1453))
								{	/* Eval/evobject.scm 312 */
									BgL_arg1433z00_1451 = BNIL;
								}
							else
								{	/* Eval/evobject.scm 312 */
									obj_t BgL_head1118z00_1456;

									{	/* Eval/evobject.scm 312 */
										obj_t BgL_res2429z00_3095;

										BgL_res2429z00_3095 = MAKE_YOUNG_PAIR(BNIL, BNIL);
										BgL_head1118z00_1456 = BgL_res2429z00_3095;
									}
									{
										obj_t BgL_ll1116z00_3127;
										obj_t BgL_ll1117z00_3128;
										obj_t BgL_tail1119z00_3129;

										BgL_ll1116z00_3127 = BgL_ll1116z00_1453;
										BgL_ll1117z00_3128 = BgL_ll1117z00_1454;
										BgL_tail1119z00_3129 = BgL_head1118z00_1456;
									BgL_zc3z04anonymousza31436ze3z87_3126:
										if (NULLP(BgL_ll1116z00_3127))
											{	/* Eval/evobject.scm 312 */
												BgL_arg1433z00_1451 = CDR(BgL_head1118z00_1456);
											}
										else
											{	/* Eval/evobject.scm 312 */
												obj_t BgL_newtail1120z00_3138;

												{	/* Eval/evobject.scm 312 */
													obj_t BgL_arg1440z00_3139;

													{	/* Eval/evobject.scm 312 */
														obj_t BgL_slotz00_3140;
														obj_t BgL_indexz00_3141;

														BgL_slotz00_3140 =
															CAR(((obj_t) BgL_ll1116z00_3127));
														BgL_indexz00_3141 =
															CAR(((obj_t) BgL_ll1117z00_3128));
														BgL_sz00_1505 = BgL_slotz00_3140;
														BgL_iz00_1506 = BgL_indexz00_3141;
														BgL_classz00_1507 = BgL_classz00_74;
														{	/* Eval/evobject.scm 299 */
															obj_t BgL_defsz00_1509;

															BgL_defsz00_1509 =
																BGl_classgenzd2slotzd2anonymousz00zz__evobjectz00
																(BgL_iz00_1506, BgL_sz00_1505,
																BgL_classz00_1507);
															{	/* Eval/evobject.scm 301 */
																obj_t BgL_arg1466z00_1510;
																obj_t BgL_arg1467z00_1511;
																obj_t BgL_arg1468z00_1512;
																obj_t BgL_arg1469z00_1513;
																obj_t BgL_arg1470z00_1514;
																obj_t BgL_arg1471z00_1515;
																obj_t BgL_arg1472z00_1516;

																BgL_arg1466z00_1510 =
																	STRUCT_REF(
																	((obj_t) BgL_sz00_1505), (int) (((long) 0)));
																BgL_arg1467z00_1511 =
																	CAR(((obj_t) BgL_defsz00_1509));
																{	/* Eval/evobject.scm 302 */
																	obj_t BgL_pairz00_3080;

																	BgL_pairz00_3080 =
																		CDR(((obj_t) BgL_defsz00_1509));
																	BgL_arg1468z00_1512 = CAR(BgL_pairz00_3080);
																}
																BgL_arg1469z00_1513 =
																	STRUCT_REF(
																	((obj_t) BgL_sz00_1505), (int) (((long) 2)));
																{	/* Eval/evobject.scm 304 */
																	obj_t BgL_arg1473z00_1517;

																	BgL_arg1473z00_1517 =
																		STRUCT_REF(
																		((obj_t) BgL_sz00_1505),
																		(int) (((long) 7)));
																	{	/* Eval/eval.scm 84 */
																		obj_t BgL_envz00_1519;

																		BgL_envz00_1519 =
																			BGl_defaultzd2environmentzd2zz__evalz00();
																		{	/* Eval/eval.scm 84 */

																			BgL_arg1470z00_1514 =
																				BGl_evalz12z12zz__evalz00
																				(BgL_arg1473z00_1517, BgL_envz00_1519);
																}}}
																BgL_arg1471z00_1515 =
																	STRUCT_REF(
																	((obj_t) BgL_sz00_1505), (int) (((long) 3)));
																BgL_arg1472z00_1516 =
																	STRUCT_REF(
																	((obj_t) BgL_sz00_1505), (int) (((long) 1)));
																BgL_arg1440z00_3139 =
																	BGl_makezd2classzd2fieldz00zz__objectz00
																	(BgL_arg1466z00_1510, BgL_arg1467z00_1511,
																	BgL_arg1468z00_1512,
																	CBOOL(BgL_arg1469z00_1513), ((bool_t) 0),
																	BgL_arg1470z00_1514, BgL_arg1471z00_1515,
																	BgL_arg1472z00_1516);
													}}}
													{	/* Eval/evobject.scm 312 */
														obj_t BgL_res2435z00_3148;

														BgL_res2435z00_3148 =
															MAKE_YOUNG_PAIR(BgL_arg1440z00_3139, BNIL);
														BgL_newtail1120z00_3138 = BgL_res2435z00_3148;
												}}
												SET_CDR(BgL_tail1119z00_3129, BgL_newtail1120z00_3138);
												{	/* Eval/evobject.scm 312 */
													obj_t BgL_arg1438z00_3142;
													obj_t BgL_arg1439z00_3143;

													BgL_arg1438z00_3142 =
														CDR(((obj_t) BgL_ll1116z00_3127));
													BgL_arg1439z00_3143 =
														CDR(((obj_t) BgL_ll1117z00_3128));
													{
														obj_t BgL_tail1119z00_5188;
														obj_t BgL_ll1117z00_5187;
														obj_t BgL_ll1116z00_5186;

														BgL_ll1116z00_5186 = BgL_arg1438z00_3142;
														BgL_ll1117z00_5187 = BgL_arg1439z00_3143;
														BgL_tail1119z00_5188 = BgL_newtail1120z00_3138;
														BgL_tail1119z00_3129 = BgL_tail1119z00_5188;
														BgL_ll1117z00_3128 = BgL_ll1117z00_5187;
														BgL_ll1116z00_3127 = BgL_ll1116z00_5186;
														goto BgL_zc3z04anonymousza31436ze3z87_3126;
													}
												}
											}
									}
								}
						}
						{	/* Eval/evobject.scm 316 */
							obj_t BgL_list1452z00_1488;

							BgL_list1452z00_1488 = MAKE_YOUNG_PAIR(BgL_slotsz00_75, BNIL);
							BgL_arg1434z00_1452 =
								BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
								(BGl_proc2653z00zz__evobjectz00, BgL_list1452z00_1488);
						}
						BgL_arg1432z00_1450 =
							BGl_appendzd221011zd2zz__evobjectz00(BgL_arg1433z00_1451,
							BgL_arg1434z00_1452);
					}
					return
						BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BgL_arg1432z00_1450);
				}
			}
		}

	}



/* &<@anonymous:1453> */
	obj_t BGl_z62zc3z04anonymousza31453ze3ze5zz__evobjectz00(obj_t
		BgL_envz00_4392, obj_t BgL_slotz00_4393)
	{
		{	/* Eval/evobject.scm 316 */
			{
				obj_t BgL_sz00_4508;

				if (CBOOL(STRUCT_REF(((obj_t) BgL_slotz00_4393), (int) (((long) 5)))))
					{	/* Eval/evobject.scm 317 */
						BgL_sz00_4508 = BgL_slotz00_4393;
						{	/* Eval/evobject.scm 291 */
							obj_t BgL_arg1456z00_4509;
							obj_t BgL_arg1457z00_4510;
							obj_t BgL_arg1458z00_4511;
							obj_t BgL_arg1459z00_4512;
							obj_t BgL_arg1460z00_4513;
							obj_t BgL_arg1461z00_4514;
							obj_t BgL_arg1462z00_4515;

							BgL_arg1456z00_4509 =
								STRUCT_REF(((obj_t) BgL_sz00_4508), (int) (((long) 0)));
							BgL_arg1457z00_4510 =
								STRUCT_REF(((obj_t) BgL_sz00_4508), (int) (((long) 5)));
							BgL_arg1458z00_4511 =
								STRUCT_REF(((obj_t) BgL_sz00_4508), (int) (((long) 6)));
							BgL_arg1459z00_4512 =
								STRUCT_REF(((obj_t) BgL_sz00_4508), (int) (((long) 2)));
							{	/* Eval/evobject.scm 294 */
								obj_t BgL_arg1463z00_4516;

								BgL_arg1463z00_4516 =
									STRUCT_REF(((obj_t) BgL_sz00_4508), (int) (((long) 7)));
								{	/* Eval/evobject.scm 294 */
									obj_t BgL_envz00_4517;

									BgL_envz00_4517 = BGl_defaultzd2environmentzd2zz__evalz00();
									{	/* Eval/evobject.scm 294 */

										BgL_arg1460z00_4513 =
											BGl_evalz12z12zz__evalz00(BgL_arg1463z00_4516,
											BgL_envz00_4517);
							}}}
							BgL_arg1461z00_4514 =
								STRUCT_REF(((obj_t) BgL_sz00_4508), (int) (((long) 3)));
							BgL_arg1462z00_4515 =
								STRUCT_REF(((obj_t) BgL_sz00_4508), (int) (((long) 1)));
							return
								BGl_makezd2classzd2fieldz00zz__objectz00(BgL_arg1456z00_4509,
								BgL_arg1457z00_4510, BgL_arg1458z00_4511,
								CBOOL(BgL_arg1459z00_4512), ((bool_t) 1), BgL_arg1460z00_4513,
								BgL_arg1461z00_4514, BgL_arg1462z00_4515);
						}
					}
				else
					{	/* Eval/evobject.scm 317 */
						return BFALSE;
					}
			}
		}

	}



/* make-class-virtual-fields */
	obj_t BGl_makezd2classzd2virtualzd2fieldszd2zz__evobjectz00(obj_t
		BgL_slotsz00_78)
	{
		{	/* Eval/evobject.scm 324 */
			{	/* Eval/evobject.scm 327 */
				obj_t BgL_arg1474z00_1522;

				{	/* Eval/evobject.scm 326 */
					obj_t BgL_list1476z00_1524;

					BgL_list1476z00_1524 = MAKE_YOUNG_PAIR(BgL_slotsz00_78, BNIL);
					BgL_arg1474z00_1522 =
						BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
						(BGl_proc2654z00zz__evobjectz00, BgL_list1476z00_1524);
				}
				return
					BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BgL_arg1474z00_1522);
			}
		}

	}



/* &<@anonymous:1477> */
	obj_t BGl_z62zc3z04anonymousza31477ze3ze5zz__evobjectz00(obj_t
		BgL_envz00_4395, obj_t BgL_slotz00_4396)
	{
		{	/* Eval/evobject.scm 326 */
			if (CBOOL(STRUCT_REF(((obj_t) BgL_slotz00_4396), (int) (((long) 5)))))
				{	/* Eval/evobject.scm 328 */
					obj_t BgL_arg1479z00_4518;
					obj_t BgL_arg1480z00_4519;

					BgL_arg1479z00_4518 =
						STRUCT_REF(((obj_t) BgL_slotz00_4396), (int) (((long) 4)));
					{	/* Eval/evobject.scm 329 */
						obj_t BgL_arg1483z00_4520;
						obj_t BgL_arg1484z00_4521;

						BgL_arg1483z00_4520 =
							STRUCT_REF(((obj_t) BgL_slotz00_4396), (int) (((long) 5)));
						BgL_arg1484z00_4521 =
							STRUCT_REF(((obj_t) BgL_slotz00_4396), (int) (((long) 6)));
						BgL_arg1480z00_4519 =
							MAKE_YOUNG_PAIR(BgL_arg1483z00_4520, BgL_arg1484z00_4521);
					}
					return MAKE_YOUNG_PAIR(BgL_arg1479z00_4518, BgL_arg1480z00_4519);
				}
			else
				{	/* Eval/evobject.scm 327 */
					return BFALSE;
				}
		}

	}



/* eval-expand-instantiate */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2expandzd2instantiatez00zz__evobjectz00(obj_t
		BgL_classz00_79)
	{
		{	/* Eval/evobject.scm 335 */
			{	/* Eval/evobject.scm 336 */
				obj_t BgL_widz00_1533;

				{	/* Eval/evobject.scm 336 */
					obj_t BgL_arg1486z00_1535;

					{	/* Eval/evobject.scm 336 */
						obj_t BgL_arg1487z00_1536;
						obj_t BgL_arg1489z00_1537;

						{	/* Eval/evobject.scm 336 */
							obj_t BgL_res2436z00_3160;

							{	/* Eval/evobject.scm 336 */
								obj_t BgL_symbolz00_3158;

								BgL_symbolz00_3158 = BGl_symbol2655z00zz__evobjectz00;
								{	/* Eval/evobject.scm 336 */
									obj_t BgL_arg2205z00_3159;

									BgL_arg2205z00_3159 = SYMBOL_TO_STRING(BgL_symbolz00_3158);
									BgL_res2436z00_3160 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2205z00_3159);
								}
							}
							BgL_arg1487z00_1536 = BgL_res2436z00_3160;
						}
						{	/* Eval/evobject.scm 336 */
							obj_t BgL_arg1491z00_1538;

							BgL_arg1491z00_1538 =
								BGl_classzd2namezd2zz__objectz00(BgL_classz00_79);
							{	/* Eval/evobject.scm 336 */
								obj_t BgL_res2437z00_3163;

								{	/* Eval/evobject.scm 336 */
									obj_t BgL_arg2205z00_3162;

									BgL_arg2205z00_3162 = SYMBOL_TO_STRING(BgL_arg1491z00_1538);
									BgL_res2437z00_3163 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2205z00_3162);
								}
								BgL_arg1489z00_1537 = BgL_res2437z00_3163;
							}
						}
						BgL_arg1486z00_1535 =
							string_append(BgL_arg1487z00_1536, BgL_arg1489z00_1537);
					}
					BgL_widz00_1533 = bstring_to_symbol(BgL_arg1486z00_1535);
				}
				return
					BGl_installzd2expanderzd2zz__macroz00(BgL_widz00_1533,
					BGl_evalzd2instantiatezd2expanderz00zz__evobjectz00(BgL_classz00_79));
			}
		}

	}



/* &eval-expand-instantiate */
	obj_t BGl_z62evalzd2expandzd2instantiatez62zz__evobjectz00(obj_t
		BgL_envz00_4397, obj_t BgL_classz00_4398)
	{
		{	/* Eval/evobject.scm 335 */
			{	/* Eval/evobject.scm 336 */
				obj_t BgL_auxz00_5251;

				if (BGl_classzf3zf3zz__objectz00(BgL_classz00_4398))
					{	/* Eval/evobject.scm 336 */
						BgL_auxz00_5251 = BgL_classz00_4398;
					}
				else
					{
						obj_t BgL_auxz00_5254;

						BgL_auxz00_5254 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__evobjectz00,
							BINT(((long) 12797)), BGl_string2658z00zz__evobjectz00,
							BGl_string2659z00zz__evobjectz00, BgL_classz00_4398);
						FAILURE(BgL_auxz00_5254, BFALSE, BFALSE);
					}
				return
					BGl_evalzd2expandzd2instantiatez00zz__evobjectz00(BgL_auxz00_5251);
			}
		}

	}



/* eval-instantiate-expander */
	obj_t BGl_evalzd2instantiatezd2expanderz00zz__evobjectz00(obj_t
		BgL_classz00_80)
	{
		{	/* Eval/evobject.scm 343 */
			{	/* Eval/evobject.scm 344 */
				obj_t BgL_zc3z04anonymousza31492ze3z87_4399;

				BgL_zc3z04anonymousza31492ze3z87_4399 =
					MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31492ze3ze5zz__evobjectz00,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31492ze3z87_4399,
					(int) (((long) 0)), BgL_classz00_80);
				return BgL_zc3z04anonymousza31492ze3z87_4399;
			}
		}

	}



/* &<@anonymous:1492> */
	obj_t BGl_z62zc3z04anonymousza31492ze3ze5zz__evobjectz00(obj_t
		BgL_envz00_4400, obj_t BgL_xz00_4402, obj_t BgL_ez00_4403)
	{
		{	/* Eval/evobject.scm 344 */
			{	/* Eval/evobject.scm 345 */
				obj_t BgL_classz00_4401;

				BgL_classz00_4401 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4400, (int) (((long) 0))));
				{	/* Eval/evobject.scm 345 */
					obj_t BgL_arg1493z00_4522;
					obj_t BgL_arg1494z00_4523;
					obj_t BgL_arg1495z00_4524;
					obj_t BgL_arg1496z00_4525;

					BgL_arg1493z00_4522 = CAR(((obj_t) BgL_xz00_4402));
					BgL_arg1494z00_4523 = CDR(((obj_t) BgL_xz00_4402));
					{	/* Eval/evobject.scm 346 */
						obj_t BgL_res2439z00_4526;

						BgL_res2439z00_4526 = BGL_CLASS_ALL_FIELDS(BgL_classz00_4401);
						BgL_arg1495z00_4524 = BgL_res2439z00_4526;
					}
					{	/* Eval/evobject.scm 347 */
						obj_t BgL_arg1497z00_4527;

						BgL_arg1497z00_4527 =
							MAKE_YOUNG_PAIR(BGl_classzd2allocatorzd2zz__objectz00
							(BgL_classz00_4401), BNIL);
						BgL_arg1496z00_4525 =
							BGl_localiza7eza7zz__evobjectz00(BgL_xz00_4402,
							BgL_arg1497z00_4527);
					}
					return
						BGl_instantiatezd2fillzd2zz__evobjectz00(BgL_arg1493z00_4522,
						BgL_arg1494z00_4523, BgL_classz00_4401, BgL_arg1495z00_4524,
						BgL_arg1496z00_4525, BgL_xz00_4402, BgL_ez00_4403);
				}
			}
		}

	}



/* instantiate-fill */
	obj_t BGl_instantiatezd2fillzd2zz__evobjectz00(obj_t BgL_opz00_81,
		obj_t BgL_providedz00_82, obj_t BgL_classz00_83, obj_t BgL_fieldsz00_84,
		obj_t BgL_initz00_85, obj_t BgL_xz00_86, obj_t BgL_ez00_87)
	{
		{	/* Eval/evobject.scm 352 */
			{
				obj_t BgL_argsz00_1643;
				obj_t BgL_fieldsz00_1644;
				obj_t BgL_fieldsz00_1599;

				{	/* Eval/evobject.scm 403 */
					obj_t BgL_newz00_1550;

					BgL_newz00_1550 =
						BGl_gensymz00zz__r4_symbols_6_4z00
						(BGl_symbol2668z00zz__evobjectz00);
					{	/* Eval/evobject.scm 403 */
						obj_t BgL_argsz00_1551;

						BgL_fieldsz00_1599 = BgL_fieldsz00_84;
						{	/* Eval/evobject.scm 355 */
							obj_t BgL_vargsz00_1602;

							BgL_vargsz00_1602 =
								make_vector(VECTOR_LENGTH(BgL_fieldsz00_1599), BUNSPEC);
							{	/* Eval/evobject.scm 356 */

								{
									long BgL_iz00_1604;

									BgL_iz00_1604 = ((long) 0);
								BgL_zc3z04anonymousza31547ze3z87_1605:
									if ((BgL_iz00_1604 < VECTOR_LENGTH(BgL_fieldsz00_1599)))
										{	/* Eval/evobject.scm 360 */
											obj_t BgL_sz00_1607;

											BgL_sz00_1607 =
												VECTOR_REF(BgL_fieldsz00_1599, BgL_iz00_1604);
											if (BGl_classzd2fieldzd2defaultzd2valuezf3z21zz__objectz00
												(BgL_sz00_1607))
												{	/* Eval/evobject.scm 365 */
													obj_t BgL_arg1551z00_1609;

													{	/* Eval/evobject.scm 365 */
														obj_t BgL_arg1552z00_1610;

														{	/* Eval/evobject.scm 365 */
															obj_t BgL_arg1553z00_1611;
															obj_t BgL_arg1554z00_1612;

															{	/* Eval/evobject.scm 365 */
																obj_t BgL_arg1556z00_1613;

																{	/* Eval/evobject.scm 365 */
																	obj_t BgL_arg1557z00_1614;

																	BgL_arg1557z00_1614 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2660z00zz__evobjectz00, BNIL);
																	BgL_arg1556z00_1613 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2662z00zz__evobjectz00,
																		BgL_arg1557z00_1614);
																}
																BgL_arg1553z00_1611 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol2664z00zz__evobjectz00,
																	BgL_arg1556z00_1613);
															}
															BgL_arg1554z00_1612 =
																MAKE_YOUNG_PAIR(BgL_sz00_1607, BNIL);
															BgL_arg1552z00_1610 =
																MAKE_YOUNG_PAIR(BgL_arg1553z00_1611,
																BgL_arg1554z00_1612);
														}
														BgL_arg1551z00_1609 =
															MAKE_YOUNG_PAIR(BTRUE, BgL_arg1552z00_1610);
													}
													VECTOR_SET(BgL_vargsz00_1602, BgL_iz00_1604,
														BgL_arg1551z00_1609);
												}
											else
												{	/* Eval/evobject.scm 368 */
													obj_t BgL_arg1558z00_1615;

													BgL_arg1558z00_1615 =
														MAKE_YOUNG_PAIR(BFALSE, BUNSPEC);
													VECTOR_SET(BgL_vargsz00_1602, BgL_iz00_1604,
														BgL_arg1558z00_1615);
												}
											{
												long BgL_iz00_5294;

												BgL_iz00_5294 = (BgL_iz00_1604 + ((long) 1));
												BgL_iz00_1604 = BgL_iz00_5294;
												goto BgL_zc3z04anonymousza31547ze3z87_1605;
											}
										}
									else
										{	/* Eval/evobject.scm 359 */
											((bool_t) 0);
										}
								}
								{
									obj_t BgL_providedz00_1619;

									BgL_providedz00_1619 = BgL_providedz00_82;
								BgL_zc3z04anonymousza31561ze3z87_1620:
									if (PAIRP(BgL_providedz00_1619))
										{	/* Eval/evobject.scm 373 */
											obj_t BgL_pz00_1622;

											BgL_pz00_1622 = CAR(BgL_providedz00_1619);
											if (PAIRP(BgL_pz00_1622))
												{	/* Eval/evobject.scm 374 */
													obj_t BgL_carzd2108zd2_1629;
													obj_t BgL_cdrzd2109zd2_1630;

													BgL_carzd2108zd2_1629 = CAR(BgL_pz00_1622);
													BgL_cdrzd2109zd2_1630 = CDR(BgL_pz00_1622);
													if (SYMBOLP(BgL_carzd2108zd2_1629))
														{	/* Eval/evobject.scm 374 */
															if (PAIRP(BgL_cdrzd2109zd2_1630))
																{	/* Eval/evobject.scm 374 */
																	if (NULLP(CDR(BgL_cdrzd2109zd2_1630)))
																		{	/* Eval/evobject.scm 374 */
																			obj_t BgL_arg1568z00_1635;

																			BgL_arg1568z00_1635 =
																				CAR(BgL_cdrzd2109zd2_1630);
																			{	/* Eval/evobject.scm 377 */
																				obj_t BgL_pvalz00_3235;

																				{	/* Eval/evobject.scm 379 */
																					obj_t BgL_arg1573z00_3236;

																					BgL_arg1573z00_3236 =
																						BGl_findzd2fieldzd2offsetz00zz__evobjectz00
																						(BgL_fieldsz00_1599,
																						BgL_carzd2108zd2_1629, BgL_opz00_81,
																						BgL_pz00_1622);
																					BgL_pvalz00_3235 =
																						VECTOR_REF(BgL_vargsz00_1602,
																						(long) CINT(BgL_arg1573z00_3236));
																				}
																				{	/* Eval/evobject.scm 380 */
																					obj_t BgL_tmpz00_5314;

																					BgL_tmpz00_5314 =
																						((obj_t) BgL_pvalz00_3235);
																					SET_CAR(BgL_tmpz00_5314, BTRUE);
																				}
																				{	/* Eval/evobject.scm 381 */
																					obj_t BgL_arg1570z00_3237;

																					BgL_arg1570z00_3237 =
																						BGl_localiza7eza7zz__evobjectz00
																						(BgL_pz00_1622,
																						BgL_arg1568z00_1635);
																					{	/* Eval/evobject.scm 381 */
																						obj_t BgL_tmpz00_5318;

																						BgL_tmpz00_5318 =
																							((obj_t) BgL_pvalz00_3235);
																						SET_CDR(BgL_tmpz00_5318,
																							BgL_arg1570z00_3237);
																		}}}}
																	else
																		{	/* Eval/evobject.scm 374 */
																			BGl_expandzd2errorzd2zz__evobjectz00
																				(BgL_opz00_81,
																				BGl_string2666z00zz__evobjectz00,
																				BgL_pz00_1622);
																		}
																}
															else
																{	/* Eval/evobject.scm 374 */
																	BGl_expandzd2errorzd2zz__evobjectz00
																		(BgL_opz00_81,
																		BGl_string2666z00zz__evobjectz00,
																		BgL_pz00_1622);
																}
														}
													else
														{	/* Eval/evobject.scm 374 */
															BGl_expandzd2errorzd2zz__evobjectz00(BgL_opz00_81,
																BGl_string2666z00zz__evobjectz00,
																BgL_pz00_1622);
														}
												}
											else
												{	/* Eval/evobject.scm 374 */
													BGl_expandzd2errorzd2zz__evobjectz00(BgL_opz00_81,
														BGl_string2666z00zz__evobjectz00, BgL_pz00_1622);
												}
											{
												obj_t BgL_providedz00_5325;

												BgL_providedz00_5325 = CDR(BgL_providedz00_1619);
												BgL_providedz00_1619 = BgL_providedz00_5325;
												goto BgL_zc3z04anonymousza31561ze3z87_1620;
											}
										}
									else
										{	/* Eval/evobject.scm 372 */
											((bool_t) 0);
										}
								}
								BgL_argsz00_1551 = BgL_vargsz00_1602;
							}
						}
						{	/* Eval/evobject.scm 404 */

							BgL_argsz00_1643 = BgL_argsz00_1551;
							BgL_fieldsz00_1644 = BgL_fieldsz00_84;
							{
								long BgL_iz00_1648;

								BgL_iz00_1648 = ((long) 0);
							BgL_zc3z04anonymousza31577ze3z87_1649:
								if ((BgL_iz00_1648 < VECTOR_LENGTH(BgL_fieldsz00_1644)))
									{	/* Eval/evobject.scm 391 */
										{	/* Eval/evobject.scm 392 */
											obj_t BgL_az00_1651;
											obj_t BgL_sz00_1652;

											BgL_az00_1651 =
												VECTOR_REF(BgL_argsz00_1643, BgL_iz00_1648);
											BgL_sz00_1652 =
												VECTOR_REF(BgL_fieldsz00_1644, BgL_iz00_1648);
											if (CBOOL(CAR(((obj_t) BgL_az00_1651))))
												{	/* Eval/evobject.scm 394 */
													BFALSE;
												}
											else
												{	/* Eval/evobject.scm 394 */
													if (BGl_classzd2fieldzd2virtualzf3zf3zz__objectz00
														(BgL_sz00_1652))
														{	/* Eval/evobject.scm 395 */
															BFALSE;
														}
													else
														{	/* Eval/evobject.scm 399 */
															obj_t BgL_arg1582z00_1655;

															{	/* Eval/evobject.scm 399 */
																obj_t BgL_arg1583z00_1656;

																BgL_arg1583z00_1656 =
																	BGl_classzd2fieldzd2namez00zz__objectz00
																	(BgL_sz00_1652);
																{	/* Eval/evobject.scm 398 */
																	obj_t BgL_list1584z00_1657;

																	BgL_list1584z00_1657 =
																		MAKE_YOUNG_PAIR(BgL_arg1583z00_1656, BNIL);
																	BgL_arg1582z00_1655 =
																		BGl_formatz00zz__r4_output_6_10_3z00
																		(BGl_string2667z00zz__evobjectz00,
																		BgL_list1584z00_1657);
																}
															}
															BGl_expandzd2errorzd2zz__evobjectz00(BgL_opz00_81,
																BgL_arg1582z00_1655, BgL_xz00_86);
														}
												}
										}
										{
											long BgL_iz00_5342;

											BgL_iz00_5342 = (BgL_iz00_1648 + ((long) 1));
											BgL_iz00_1648 = BgL_iz00_5342;
											goto BgL_zc3z04anonymousza31577ze3z87_1649;
										}
									}
								else
									{	/* Eval/evobject.scm 391 */
										((bool_t) 0);
									}
							}
							{	/* Eval/evobject.scm 410 */
								obj_t BgL_arg1500z00_1552;

								{	/* Eval/evobject.scm 410 */
									obj_t BgL_arg1502z00_1553;

									{	/* Eval/evobject.scm 410 */
										obj_t BgL_arg1505z00_1554;
										obj_t BgL_arg1506z00_1555;

										{	/* Eval/evobject.scm 410 */
											obj_t BgL_arg1507z00_1556;

											{	/* Eval/evobject.scm 410 */
												obj_t BgL_arg1508z00_1557;

												{	/* Eval/evobject.scm 410 */
													obj_t BgL_arg1509z00_1558;

													BgL_arg1509z00_1558 =
														PROCEDURE_ENTRY(BgL_ez00_87) (BgL_ez00_87,
														BgL_initz00_85, BgL_ez00_87, BEOA);
													BgL_arg1508z00_1557 =
														MAKE_YOUNG_PAIR(BgL_arg1509z00_1558, BNIL);
												}
												BgL_arg1507z00_1556 =
													MAKE_YOUNG_PAIR(BgL_newz00_1550, BgL_arg1508z00_1557);
											}
											BgL_arg1505z00_1554 =
												MAKE_YOUNG_PAIR(BgL_arg1507z00_1556, BNIL);
										}
										{	/* Eval/evobject.scm 415 */
											obj_t BgL_arg1510z00_1559;

											{	/* Eval/evobject.scm 415 */
												obj_t BgL_arg1511z00_1560;

												{	/* Eval/evobject.scm 415 */
													obj_t BgL_arg1512z00_1561;
													obj_t BgL_arg1513z00_1562;

													{	/* Eval/evobject.scm 415 */
														obj_t BgL_zc3z04anonymousza31515ze3z87_4405;

														{
															int BgL_tmpz00_5352;

															BgL_tmpz00_5352 = (int) (((long) 2));
															BgL_zc3z04anonymousza31515ze3z87_4405 =
																MAKE_L_PROCEDURE
																(BGl_z62zc3z04anonymousza31515ze3ze5zz__evobjectz00,
																BgL_tmpz00_5352);
														}
														PROCEDURE_L_SET
															(BgL_zc3z04anonymousza31515ze3z87_4405,
															(int) (((long) 0)), BgL_ez00_87);
														PROCEDURE_L_SET
															(BgL_zc3z04anonymousza31515ze3z87_4405,
															(int) (((long) 1)), BgL_newz00_1550);
														BgL_arg1512z00_1561 =
															BGl_vectorzd2filterzd2mapz00zz__evobjectz00
															(BgL_zc3z04anonymousza31515ze3z87_4405,
															BgL_fieldsz00_84, BgL_argsz00_1551);
													}
													{	/* Eval/evobject.scm 421 */
														obj_t BgL_arg1524z00_1575;
														obj_t BgL_arg1525z00_1576;

														{	/* Eval/evobject.scm 421 */
															obj_t BgL_constrz00_1577;

															{
																obj_t BgL_cz00_3256;

																BgL_cz00_3256 = BgL_classz00_83;
															BgL_findzd2classzd2constructorz00_3255:
																{	/* Eval/evobject.scm 259 */
																	obj_t BgL_constz00_3260;

																	BgL_constz00_3260 =
																		BGl_classzd2constructorzd2zz__objectz00
																		(BgL_cz00_3256);
																	if (CBOOL(BgL_constz00_3260))
																		{	/* Eval/evobject.scm 260 */
																			BgL_constrz00_1577 = BgL_constz00_3260;
																		}
																	else
																		{	/* Eval/evobject.scm 262 */
																			obj_t BgL_sz00_3261;

																			BgL_sz00_3261 =
																				BGl_classzd2superzd2zz__objectz00
																				(BgL_cz00_3256);
																			if (BGl_classzf3zf3zz__objectz00
																				(BgL_sz00_3261))
																				{
																					obj_t BgL_cz00_5366;

																					BgL_cz00_5366 = BgL_sz00_3261;
																					BgL_cz00_3256 = BgL_cz00_5366;
																					goto
																						BgL_findzd2classzd2constructorz00_3255;
																				}
																			else
																				{	/* Eval/evobject.scm 263 */
																					BgL_constrz00_1577 = BFALSE;
																				}
																		}
																}
															}
															if (CBOOL(BgL_constrz00_1577))
																{	/* Eval/evobject.scm 423 */
																	obj_t BgL_arg1526z00_1578;

																	{	/* Eval/evobject.scm 423 */
																		obj_t BgL_arg1528z00_1579;

																		{	/* Eval/evobject.scm 423 */
																			obj_t BgL_arg1530z00_1580;

																			BgL_arg1530z00_1580 =
																				MAKE_YOUNG_PAIR(BgL_newz00_1550, BNIL);
																			BgL_arg1528z00_1579 =
																				MAKE_YOUNG_PAIR(BgL_constrz00_1577,
																				BgL_arg1530z00_1580);
																		}
																		BgL_arg1526z00_1578 =
																			BGl_localiza7eza7zz__evobjectz00
																			(BgL_xz00_86, BgL_arg1528z00_1579);
																	}
																	BgL_arg1524z00_1575 =
																		PROCEDURE_ENTRY(BgL_ez00_87) (BgL_ez00_87,
																		BgL_arg1526z00_1578, BgL_ez00_87, BEOA);
																}
															else
																{	/* Eval/evobject.scm 422 */
																	BgL_arg1524z00_1575 = BFALSE;
																}
														}
														{	/* Eval/evobject.scm 427 */
															obj_t BgL_arg1531z00_1581;
															obj_t BgL_arg1532z00_1582;

															{	/* Eval/evobject.scm 427 */
																obj_t BgL_zc3z04anonymousza31534ze3z87_4404;

																{
																	int BgL_tmpz00_5377;

																	BgL_tmpz00_5377 = (int) (((long) 2));
																	BgL_zc3z04anonymousza31534ze3z87_4404 =
																		MAKE_L_PROCEDURE
																		(BGl_z62zc3z04anonymousza31534ze3ze5zz__evobjectz00,
																		BgL_tmpz00_5377);
																}
																PROCEDURE_L_SET
																	(BgL_zc3z04anonymousza31534ze3z87_4404,
																	(int) (((long) 0)), BgL_ez00_87);
																PROCEDURE_L_SET
																	(BgL_zc3z04anonymousza31534ze3z87_4404,
																	(int) (((long) 1)), BgL_newz00_1550);
																BgL_arg1531z00_1581 =
																	BGl_vectorzd2filterzd2mapz00zz__evobjectz00
																	(BgL_zc3z04anonymousza31534ze3z87_4404,
																	BgL_fieldsz00_84, BgL_argsz00_1551);
															}
															BgL_arg1532z00_1582 =
																MAKE_YOUNG_PAIR(BgL_newz00_1550, BNIL);
															BgL_arg1525z00_1576 =
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg1531z00_1581, BgL_arg1532z00_1582);
														}
														BgL_arg1513z00_1562 =
															MAKE_YOUNG_PAIR(BgL_arg1524z00_1575,
															BgL_arg1525z00_1576);
													}
													BgL_arg1511z00_1560 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg1512z00_1561, BgL_arg1513z00_1562);
												}
												BgL_arg1510z00_1559 =
													MAKE_YOUNG_PAIR(BGl_symbol2670z00zz__evobjectz00,
													BgL_arg1511z00_1560);
											}
											BgL_arg1506z00_1555 =
												MAKE_YOUNG_PAIR(BgL_arg1510z00_1559, BNIL);
										}
										BgL_arg1502z00_1553 =
											MAKE_YOUNG_PAIR(BgL_arg1505z00_1554, BgL_arg1506z00_1555);
									}
									BgL_arg1500z00_1552 =
										MAKE_YOUNG_PAIR(BGl_symbol2672z00zz__evobjectz00,
										BgL_arg1502z00_1553);
								}
								return
									BGl_localiza7eza7zz__evobjectz00(BgL_xz00_86,
									BgL_arg1500z00_1552);
							}
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1534> */
	obj_t BGl_z62zc3z04anonymousza31534ze3ze5zz__evobjectz00(obj_t
		BgL_envz00_4406, obj_t BgL_fieldz00_4409, obj_t BgL_valz00_4410)
	{
		{	/* Eval/evobject.scm 426 */
			{	/* Eval/evobject.scm 427 */
				obj_t BgL_ez00_4407;
				obj_t BgL_newz00_4408;

				BgL_ez00_4407 = PROCEDURE_L_REF(BgL_envz00_4406, (int) (((long) 0)));
				BgL_newz00_4408 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_4406, (int) (((long) 1))));
				{	/* Eval/evobject.scm 427 */
					bool_t BgL_test2871z00_5399;

					if (BGl_classzd2fieldzd2virtualzf3zf3zz__objectz00(BgL_fieldz00_4409))
						{	/* Eval/evobject.scm 427 */
							if (BGl_classzd2fieldzd2mutablezf3zf3zz__objectz00
								(BgL_fieldz00_4409))
								{	/* Eval/evobject.scm 428 */
									BgL_test2871z00_5399 = CBOOL(CAR(((obj_t) BgL_valz00_4410)));
								}
							else
								{	/* Eval/evobject.scm 428 */
									BgL_test2871z00_5399 = ((bool_t) 0);
								}
						}
					else
						{	/* Eval/evobject.scm 427 */
							BgL_test2871z00_5399 = ((bool_t) 0);
						}
					if (BgL_test2871z00_5399)
						{	/* Eval/evobject.scm 430 */
							obj_t BgL_vz00_4528;

							{	/* Eval/evobject.scm 430 */
								obj_t BgL_arg1545z00_4529;

								BgL_arg1545z00_4529 = CDR(((obj_t) BgL_valz00_4410));
								BgL_vz00_4528 =
									PROCEDURE_ENTRY(BgL_ez00_4407) (BgL_ez00_4407,
									BgL_arg1545z00_4529, BgL_ez00_4407, BEOA);
							}
							{	/* Eval/evobject.scm 432 */
								obj_t BgL_arg1540z00_4530;

								{	/* Eval/evobject.scm 432 */
									obj_t BgL_arg1541z00_4531;
									obj_t BgL_arg1542z00_4532;

									BgL_arg1541z00_4531 =
										BGl_classzd2fieldzd2mutatorz00zz__objectz00
										(BgL_fieldz00_4409);
									{	/* Eval/evobject.scm 432 */
										obj_t BgL_arg1544z00_4533;

										BgL_arg1544z00_4533 = MAKE_YOUNG_PAIR(BgL_vz00_4528, BNIL);
										BgL_arg1542z00_4532 =
											MAKE_YOUNG_PAIR(BgL_newz00_4408, BgL_arg1544z00_4533);
									}
									BgL_arg1540z00_4530 =
										MAKE_YOUNG_PAIR(BgL_arg1541z00_4531, BgL_arg1542z00_4532);
								}
								return
									BGl_localiza7eza7zz__evobjectz00(BgL_valz00_4410,
									BgL_arg1540z00_4530);
							}
						}
					else
						{	/* Eval/evobject.scm 427 */
							return BFALSE;
						}
				}
			}
		}

	}



/* &<@anonymous:1515> */
	obj_t BGl_z62zc3z04anonymousza31515ze3ze5zz__evobjectz00(obj_t
		BgL_envz00_4411, obj_t BgL_fieldz00_4414, obj_t BgL_valz00_4415)
	{
		{	/* Eval/evobject.scm 414 */
			{	/* Eval/evobject.scm 415 */
				obj_t BgL_ez00_4412;
				obj_t BgL_newz00_4413;

				BgL_ez00_4412 = PROCEDURE_L_REF(BgL_envz00_4411, (int) (((long) 0)));
				BgL_newz00_4413 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_4411, (int) (((long) 1))));
				if (BGl_classzd2fieldzd2virtualzf3zf3zz__objectz00(BgL_fieldz00_4414))
					{	/* Eval/evobject.scm 415 */
						return BFALSE;
					}
				else
					{	/* Eval/evobject.scm 416 */
						obj_t BgL_vz00_4534;

						{	/* Eval/evobject.scm 416 */
							obj_t BgL_arg1523z00_4535;

							BgL_arg1523z00_4535 = CDR(((obj_t) BgL_valz00_4415));
							BgL_vz00_4534 =
								PROCEDURE_ENTRY(BgL_ez00_4412) (BgL_ez00_4412,
								BgL_arg1523z00_4535, BgL_ez00_4412, BEOA);
						}
						{	/* Eval/evobject.scm 418 */
							obj_t BgL_arg1518z00_4536;

							{	/* Eval/evobject.scm 418 */
								obj_t BgL_arg1519z00_4537;
								obj_t BgL_arg1520z00_4538;

								BgL_arg1519z00_4537 =
									BGl_classzd2fieldzd2mutatorz00zz__objectz00
									(BgL_fieldz00_4414);
								{	/* Eval/evobject.scm 418 */
									obj_t BgL_arg1521z00_4539;

									BgL_arg1521z00_4539 = MAKE_YOUNG_PAIR(BgL_vz00_4534, BNIL);
									BgL_arg1520z00_4538 =
										MAKE_YOUNG_PAIR(BgL_newz00_4413, BgL_arg1521z00_4539);
								}
								BgL_arg1518z00_4536 =
									MAKE_YOUNG_PAIR(BgL_arg1519z00_4537, BgL_arg1520z00_4538);
							}
							return
								BGl_localiza7eza7zz__evobjectz00(BgL_valz00_4415,
								BgL_arg1518z00_4536);
						}
					}
			}
		}

	}



/* vector-filter-map */
	obj_t BGl_vectorzd2filterzd2mapz00zz__evobjectz00(obj_t BgL_fz00_88,
		obj_t BgL_v1z00_89, obj_t BgL_v2z00_90)
	{
		{	/* Eval/evobject.scm 440 */
			{
				long BgL_iz00_3276;
				obj_t BgL_accz00_3277;

				BgL_iz00_3276 = ((long) 0);
				BgL_accz00_3277 = BNIL;
			BgL_loopz00_3275:
				if ((BgL_iz00_3276 == VECTOR_LENGTH(BgL_v1z00_89)))
					{	/* Eval/evobject.scm 444 */
						return bgl_reverse_bang(BgL_accz00_3277);
					}
				else
					{	/* Eval/evobject.scm 446 */
						obj_t BgL_vz00_3282;

						{	/* Eval/evobject.scm 446 */
							obj_t BgL_arg1596z00_3283;
							obj_t BgL_arg1597z00_3284;

							BgL_arg1596z00_3283 = VECTOR_REF(BgL_v1z00_89, BgL_iz00_3276);
							BgL_arg1597z00_3284 = VECTOR_REF(BgL_v2z00_90, BgL_iz00_3276);
							BgL_vz00_3282 =
								PROCEDURE_L_ENTRY(BgL_fz00_88) (BgL_fz00_88,
								BgL_arg1596z00_3283, BgL_arg1597z00_3284);
						}
						{	/* Eval/evobject.scm 447 */
							long BgL_arg1592z00_3289;
							obj_t BgL_arg1593z00_3290;

							BgL_arg1592z00_3289 = (BgL_iz00_3276 + ((long) 1));
							if (CBOOL(BgL_vz00_3282))
								{	/* Eval/evobject.scm 447 */
									BgL_arg1593z00_3290 =
										MAKE_YOUNG_PAIR(BgL_vz00_3282, BgL_accz00_3277);
								}
							else
								{	/* Eval/evobject.scm 447 */
									BgL_arg1593z00_3290 = BgL_accz00_3277;
								}
							{
								obj_t BgL_accz00_5454;
								long BgL_iz00_5453;

								BgL_iz00_5453 = BgL_arg1592z00_3289;
								BgL_accz00_5454 = BgL_arg1593z00_3290;
								BgL_accz00_3277 = BgL_accz00_5454;
								BgL_iz00_3276 = BgL_iz00_5453;
								goto BgL_loopz00_3275;
							}
						}
					}
			}
		}

	}



/* eval-expand-duplicate */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2expandzd2duplicatez00zz__evobjectz00(obj_t
		BgL_classz00_91)
	{
		{	/* Eval/evobject.scm 452 */
			{	/* Eval/evobject.scm 453 */
				obj_t BgL_didz00_1675;

				{	/* Eval/evobject.scm 453 */
					obj_t BgL_arg1599z00_1677;

					{	/* Eval/evobject.scm 453 */
						obj_t BgL_arg1602z00_1678;
						obj_t BgL_arg1603z00_1679;

						{	/* Eval/evobject.scm 453 */
							obj_t BgL_res2452z00_3295;

							{	/* Eval/evobject.scm 453 */
								obj_t BgL_symbolz00_3293;

								BgL_symbolz00_3293 = BGl_symbol2674z00zz__evobjectz00;
								{	/* Eval/evobject.scm 453 */
									obj_t BgL_arg2205z00_3294;

									BgL_arg2205z00_3294 = SYMBOL_TO_STRING(BgL_symbolz00_3293);
									BgL_res2452z00_3295 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2205z00_3294);
								}
							}
							BgL_arg1602z00_1678 = BgL_res2452z00_3295;
						}
						{	/* Eval/evobject.scm 453 */
							obj_t BgL_arg1604z00_1680;

							BgL_arg1604z00_1680 =
								BGl_classzd2namezd2zz__objectz00(BgL_classz00_91);
							{	/* Eval/evobject.scm 453 */
								obj_t BgL_res2453z00_3298;

								{	/* Eval/evobject.scm 453 */
									obj_t BgL_arg2205z00_3297;

									BgL_arg2205z00_3297 = SYMBOL_TO_STRING(BgL_arg1604z00_1680);
									BgL_res2453z00_3298 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2205z00_3297);
								}
								BgL_arg1603z00_1679 = BgL_res2453z00_3298;
							}
						}
						BgL_arg1599z00_1677 =
							string_append(BgL_arg1602z00_1678, BgL_arg1603z00_1679);
					}
					BgL_didz00_1675 = bstring_to_symbol(BgL_arg1599z00_1677);
				}
				return
					BGl_installzd2expanderzd2zz__macroz00(BgL_didz00_1675,
					BGl_evalzd2duplicatezd2expanderz00zz__evobjectz00(BgL_classz00_91));
			}
		}

	}



/* &eval-expand-duplicate */
	obj_t BGl_z62evalzd2expandzd2duplicatez62zz__evobjectz00(obj_t
		BgL_envz00_4416, obj_t BgL_classz00_4417)
	{
		{	/* Eval/evobject.scm 452 */
			{	/* Eval/evobject.scm 453 */
				obj_t BgL_auxz00_5464;

				if (BGl_classzf3zf3zz__objectz00(BgL_classz00_4417))
					{	/* Eval/evobject.scm 453 */
						BgL_auxz00_5464 = BgL_classz00_4417;
					}
				else
					{
						obj_t BgL_auxz00_5467;

						BgL_auxz00_5467 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__evobjectz00,
							BINT(((long) 16779)), BGl_string2676z00zz__evobjectz00,
							BGl_string2659z00zz__evobjectz00, BgL_classz00_4417);
						FAILURE(BgL_auxz00_5467, BFALSE, BFALSE);
					}
				return BGl_evalzd2expandzd2duplicatez00zz__evobjectz00(BgL_auxz00_5464);
			}
		}

	}



/* eval-duplicate-expander */
	obj_t BGl_evalzd2duplicatezd2expanderz00zz__evobjectz00(obj_t BgL_classz00_92)
	{
		{	/* Eval/evobject.scm 460 */
			{	/* Eval/evobject.scm 461 */
				obj_t BgL_zc3z04anonymousza31605ze3z87_4418;

				BgL_zc3z04anonymousza31605ze3z87_4418 =
					MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31605ze3ze5zz__evobjectz00,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31605ze3z87_4418,
					(int) (((long) 0)), BgL_classz00_92);
				return BgL_zc3z04anonymousza31605ze3z87_4418;
			}
		}

	}



/* &<@anonymous:1605> */
	obj_t BGl_z62zc3z04anonymousza31605ze3ze5zz__evobjectz00(obj_t
		BgL_envz00_4419, obj_t BgL_xz00_4421, obj_t BgL_ez00_4422)
	{
		{	/* Eval/evobject.scm 461 */
			{	/* Eval/evobject.scm 461 */
				obj_t BgL_classz00_4420;

				BgL_classz00_4420 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4419, (int) (((long) 0))));
				if (PAIRP(BgL_xz00_4421))
					{	/* Eval/evobject.scm 461 */
						obj_t BgL_cdrzd2127zd2_4540;

						BgL_cdrzd2127zd2_4540 = CDR(BgL_xz00_4421);
						if (PAIRP(BgL_cdrzd2127zd2_4540))
							{	/* Eval/evobject.scm 461 */
								return
									BGl_duplicatezd2expanderzd2zz__evobjectz00(BgL_classz00_4420,
									CAR(BgL_cdrzd2127zd2_4540),
									CDR(BgL_cdrzd2127zd2_4540), BgL_xz00_4421, BgL_ez00_4422);
							}
						else
							{	/* Eval/evobject.scm 461 */
								return
									BGl_expandzd2errorzd2zz__evobjectz00
									(BGl_string2677z00zz__evobjectz00,
									BGl_string2678z00zz__evobjectz00, BgL_xz00_4421);
							}
					}
				else
					{	/* Eval/evobject.scm 461 */
						return
							BGl_expandzd2errorzd2zz__evobjectz00
							(BGl_string2677z00zz__evobjectz00,
							BGl_string2678z00zz__evobjectz00, BgL_xz00_4421);
					}
			}
		}

	}



/* duplicate-expander */
	obj_t BGl_duplicatezd2expanderzd2zz__evobjectz00(obj_t BgL_classz00_93,
		obj_t BgL_duplicatedz00_94, obj_t BgL_providedz00_95, obj_t BgL_xz00_96,
		obj_t BgL_ez00_97)
	{
		{	/* Eval/evobject.scm 471 */
			{
				obj_t BgL_fieldsz00_1748;
				obj_t BgL_dupvarz00_1749;

				{	/* Eval/evobject.scm 505 */
					obj_t BgL_fieldsz00_1697;

					{	/* Eval/evobject.scm 505 */
						obj_t BgL_res2468z00_3432;

						{	/* Eval/evobject.scm 505 */
							obj_t BgL_tmpz00_5490;

							BgL_tmpz00_5490 = ((obj_t) BgL_classz00_93);
							BgL_res2468z00_3432 = BGL_CLASS_ALL_FIELDS(BgL_tmpz00_5490);
						}
						BgL_fieldsz00_1697 = BgL_res2468z00_3432;
					}
					{	/* Eval/evobject.scm 505 */
						obj_t BgL_newz00_1698;

						BgL_newz00_1698 =
							BGl_gensymz00zz__r4_symbols_6_4z00
							(BGl_symbol2668z00zz__evobjectz00);
						{	/* Eval/evobject.scm 506 */
							obj_t BgL_dupvarz00_1699;

							BgL_dupvarz00_1699 =
								BGl_gensymz00zz__r4_symbols_6_4z00
								(BGl_symbol2679z00zz__evobjectz00);
							{	/* Eval/evobject.scm 507 */
								obj_t BgL_argsz00_1700;

								BgL_fieldsz00_1748 = BgL_fieldsz00_1697;
								BgL_dupvarz00_1749 = BgL_dupvarz00_1699;
								{	/* Eval/evobject.scm 474 */
									obj_t BgL_vargsz00_1752;

									BgL_vargsz00_1752 =
										make_vector(VECTOR_LENGTH(BgL_fieldsz00_1748), BUNSPEC);
									{	/* Eval/evobject.scm 475 */

										{
											obj_t BgL_providedz00_1754;

											BgL_providedz00_1754 = BgL_providedz00_95;
										BgL_zc3z04anonymousza31659ze3z87_1755:
											if (PAIRP(BgL_providedz00_1754))
												{	/* Eval/evobject.scm 479 */
													obj_t BgL_pz00_1757;

													BgL_pz00_1757 = CAR(BgL_providedz00_1754);
													if (PAIRP(BgL_pz00_1757))
														{	/* Eval/evobject.scm 480 */
															obj_t BgL_carzd2142zd2_1764;
															obj_t BgL_cdrzd2143zd2_1765;

															BgL_carzd2142zd2_1764 = CAR(BgL_pz00_1757);
															BgL_cdrzd2143zd2_1765 = CDR(BgL_pz00_1757);
															if (SYMBOLP(BgL_carzd2142zd2_1764))
																{	/* Eval/evobject.scm 480 */
																	if (PAIRP(BgL_cdrzd2143zd2_1765))
																		{	/* Eval/evobject.scm 480 */
																			if (NULLP(CDR(BgL_cdrzd2143zd2_1765)))
																				{	/* Eval/evobject.scm 480 */
																					obj_t BgL_arg1667z00_1770;

																					BgL_arg1667z00_1770 =
																						CAR(BgL_cdrzd2143zd2_1765);
																					{	/* Eval/evobject.scm 483 */
																						obj_t BgL_iz00_3405;

																						BgL_iz00_3405 =
																							BGl_findzd2fieldzd2offsetz00zz__evobjectz00
																							(BgL_fieldsz00_1748,
																							BgL_carzd2142zd2_1764,
																							BGl_string2677z00zz__evobjectz00,
																							BgL_pz00_1757);
																						{	/* Eval/evobject.scm 486 */
																							obj_t BgL_arg1669z00_3406;

																							BgL_arg1669z00_3406 =
																								MAKE_YOUNG_PAIR(BTRUE,
																								BGl_localiza7eza7zz__evobjectz00
																								(BgL_pz00_1757,
																									BgL_arg1667z00_1770));
																							VECTOR_SET(BgL_vargsz00_1752,
																								(long) CINT(BgL_iz00_3405),
																								BgL_arg1669z00_3406);
																				}}}
																			else
																				{	/* Eval/evobject.scm 488 */
																					obj_t BgL_arg1675z00_3410;

																					BgL_arg1675z00_3410 =
																						CAR(((obj_t) BgL_xz00_96));
																					BGl_expandzd2errorzd2zz__evobjectz00
																						(BgL_arg1675z00_3410,
																						BGl_string2678z00zz__evobjectz00,
																						BgL_xz00_96);
																				}
																		}
																	else
																		{	/* Eval/evobject.scm 488 */
																			obj_t BgL_arg1675z00_3412;

																			BgL_arg1675z00_3412 =
																				CAR(((obj_t) BgL_xz00_96));
																			BGl_expandzd2errorzd2zz__evobjectz00
																				(BgL_arg1675z00_3412,
																				BGl_string2678z00zz__evobjectz00,
																				BgL_xz00_96);
																		}
																}
															else
																{	/* Eval/evobject.scm 488 */
																	obj_t BgL_arg1675z00_3414;

																	BgL_arg1675z00_3414 =
																		CAR(((obj_t) BgL_xz00_96));
																	BGl_expandzd2errorzd2zz__evobjectz00
																		(BgL_arg1675z00_3414,
																		BGl_string2678z00zz__evobjectz00,
																		BgL_xz00_96);
																}
														}
													else
														{	/* Eval/evobject.scm 488 */
															obj_t BgL_arg1675z00_3416;

															BgL_arg1675z00_3416 = CAR(((obj_t) BgL_xz00_96));
															BGl_expandzd2errorzd2zz__evobjectz00
																(BgL_arg1675z00_3416,
																BGl_string2678z00zz__evobjectz00, BgL_xz00_96);
														}
													{
														obj_t BgL_providedz00_5529;

														BgL_providedz00_5529 = CDR(BgL_providedz00_1754);
														BgL_providedz00_1754 = BgL_providedz00_5529;
														goto BgL_zc3z04anonymousza31659ze3z87_1755;
													}
												}
											else
												{	/* Eval/evobject.scm 478 */
													((bool_t) 0);
												}
										}
										{
											long BgL_iz00_1779;

											BgL_iz00_1779 = ((long) 0);
										BgL_zc3z04anonymousza31684ze3z87_1780:
											if ((BgL_iz00_1779 < VECTOR_LENGTH(BgL_fieldsz00_1748)))
												{	/* Eval/evobject.scm 493 */
													obj_t BgL_valuez00_1782;

													BgL_valuez00_1782 =
														VECTOR_REF(BgL_vargsz00_1752, BgL_iz00_1779);
													if (PAIRP(BgL_valuez00_1782))
														{	/* Eval/evobject.scm 494 */
															BFALSE;
														}
													else
														{	/* Eval/evobject.scm 495 */
															obj_t BgL_fieldz00_1784;

															BgL_fieldz00_1784 =
																VECTOR_REF(BgL_fieldsz00_1748, BgL_iz00_1779);
															{	/* Eval/evobject.scm 500 */
																obj_t BgL_arg1687z00_1785;

																{	/* Eval/evobject.scm 500 */
																	obj_t BgL_arg1688z00_1786;

																	{	/* Eval/evobject.scm 500 */
																		obj_t BgL_arg1691z00_1787;
																		obj_t BgL_arg1692z00_1788;

																		BgL_arg1691z00_1787 =
																			BGl_classzd2fieldzd2accessorz00zz__objectz00
																			(BgL_fieldz00_1784);
																		BgL_arg1692z00_1788 =
																			MAKE_YOUNG_PAIR(BgL_dupvarz00_1749, BNIL);
																		BgL_arg1688z00_1786 =
																			MAKE_YOUNG_PAIR(BgL_arg1691z00_1787,
																			BgL_arg1692z00_1788);
																	}
																	BgL_arg1687z00_1785 =
																		MAKE_YOUNG_PAIR(BTRUE, BgL_arg1688z00_1786);
																}
																VECTOR_SET(BgL_vargsz00_1752, BgL_iz00_1779,
																	BgL_arg1687z00_1785);
															}
														}
													{
														long BgL_iz00_5543;

														BgL_iz00_5543 = (BgL_iz00_1779 + ((long) 1));
														BgL_iz00_1779 = BgL_iz00_5543;
														goto BgL_zc3z04anonymousza31684ze3z87_1780;
													}
												}
											else
												{	/* Eval/evobject.scm 492 */
													((bool_t) 0);
												}
										}
										BgL_argsz00_1700 = BgL_vargsz00_1752;
									}
								}
								{	/* Eval/evobject.scm 508 */

									{	/* Eval/evobject.scm 511 */
										obj_t BgL_arg1613z00_1701;

										{	/* Eval/evobject.scm 511 */
											obj_t BgL_arg1614z00_1702;
											obj_t BgL_arg1615z00_1703;

											{	/* Eval/evobject.scm 511 */
												obj_t BgL_arg1616z00_1704;
												obj_t BgL_arg1617z00_1705;

												{	/* Eval/evobject.scm 511 */
													obj_t BgL_arg1618z00_1706;

													{	/* Eval/evobject.scm 511 */
														obj_t BgL_arg1619z00_1707;

														BgL_arg1619z00_1707 =
															PROCEDURE_ENTRY(BgL_ez00_97) (BgL_ez00_97,
															BgL_duplicatedz00_94, BgL_ez00_97, BEOA);
														BgL_arg1618z00_1706 =
															MAKE_YOUNG_PAIR(BgL_arg1619z00_1707, BNIL);
													}
													BgL_arg1616z00_1704 =
														MAKE_YOUNG_PAIR(BgL_dupvarz00_1699,
														BgL_arg1618z00_1706);
												}
												{	/* Eval/evobject.scm 512 */
													obj_t BgL_arg1620z00_1708;

													{	/* Eval/evobject.scm 512 */
														obj_t BgL_arg1621z00_1709;

														{	/* Eval/evobject.scm 512 */
															obj_t BgL_arg1623z00_1710;

															{	/* Eval/evobject.scm 512 */
																obj_t BgL_arg1624z00_1711;

																BgL_arg1624z00_1711 =
																	MAKE_YOUNG_PAIR
																	(BGl_classzd2allocatorzd2zz__objectz00
																	(BgL_classz00_93), BNIL);
																BgL_arg1623z00_1710 =
																	PROCEDURE_ENTRY(BgL_ez00_97) (BgL_ez00_97,
																	BgL_arg1624z00_1711, BgL_ez00_97, BEOA);
															}
															BgL_arg1621z00_1709 =
																MAKE_YOUNG_PAIR(BgL_arg1623z00_1710, BNIL);
														}
														BgL_arg1620z00_1708 =
															MAKE_YOUNG_PAIR(BgL_newz00_1698,
															BgL_arg1621z00_1709);
													}
													BgL_arg1617z00_1705 =
														MAKE_YOUNG_PAIR(BgL_arg1620z00_1708, BNIL);
												}
												BgL_arg1614z00_1702 =
													MAKE_YOUNG_PAIR(BgL_arg1616z00_1704,
													BgL_arg1617z00_1705);
											}
											{	/* Eval/evobject.scm 517 */
												obj_t BgL_arg1627z00_1713;

												{	/* Eval/evobject.scm 517 */
													obj_t BgL_arg1628z00_1714;

													{	/* Eval/evobject.scm 517 */
														obj_t BgL_arg1629z00_1715;
														obj_t BgL_arg1630z00_1716;

														{	/* Eval/evobject.scm 517 */
															obj_t BgL_zc3z04anonymousza31632ze3z87_4424;

															{
																int BgL_tmpz00_5563;

																BgL_tmpz00_5563 = (int) (((long) 2));
																BgL_zc3z04anonymousza31632ze3z87_4424 =
																	MAKE_L_PROCEDURE
																	(BGl_z62zc3z04anonymousza31632ze3ze5zz__evobjectz00,
																	BgL_tmpz00_5563);
															}
															PROCEDURE_L_SET
																(BgL_zc3z04anonymousza31632ze3z87_4424,
																(int) (((long) 0)), BgL_ez00_97);
															PROCEDURE_L_SET
																(BgL_zc3z04anonymousza31632ze3z87_4424,
																(int) (((long) 1)), BgL_newz00_1698);
															BgL_arg1629z00_1715 =
																BGl_vectorzd2filterzd2mapz00zz__evobjectz00
																(BgL_zc3z04anonymousza31632ze3z87_4424,
																BgL_fieldsz00_1697, BgL_argsz00_1700);
														}
														{	/* Eval/evobject.scm 522 */
															obj_t BgL_arg1640z00_1728;
															obj_t BgL_arg1641z00_1729;

															{	/* Eval/evobject.scm 522 */
																obj_t BgL_constrz00_1730;

																{
																	obj_t BgL_cz00_3441;

																	BgL_cz00_3441 = BgL_classz00_93;
																BgL_findzd2classzd2constructorz00_3440:
																	{	/* Eval/evobject.scm 259 */
																		obj_t BgL_constz00_3445;

																		BgL_constz00_3445 =
																			BGl_classzd2constructorzd2zz__objectz00
																			(BgL_cz00_3441);
																		if (CBOOL(BgL_constz00_3445))
																			{	/* Eval/evobject.scm 260 */
																				BgL_constrz00_1730 = BgL_constz00_3445;
																			}
																		else
																			{	/* Eval/evobject.scm 262 */
																				obj_t BgL_sz00_3446;

																				BgL_sz00_3446 =
																					BGl_classzd2superzd2zz__objectz00
																					(BgL_cz00_3441);
																				if (BGl_classzf3zf3zz__objectz00
																					(BgL_sz00_3446))
																					{
																						obj_t BgL_cz00_5577;

																						BgL_cz00_5577 = BgL_sz00_3446;
																						BgL_cz00_3441 = BgL_cz00_5577;
																						goto
																							BgL_findzd2classzd2constructorz00_3440;
																					}
																				else
																					{	/* Eval/evobject.scm 263 */
																						BgL_constrz00_1730 = BFALSE;
																					}
																			}
																	}
																}
																if (CBOOL(BgL_constrz00_1730))
																	{	/* Eval/evobject.scm 524 */
																		obj_t BgL_arg1642z00_1731;

																		{	/* Eval/evobject.scm 524 */
																			obj_t BgL_arg1643z00_1732;

																			BgL_arg1643z00_1732 =
																				MAKE_YOUNG_PAIR(BgL_newz00_1698, BNIL);
																			BgL_arg1642z00_1731 =
																				MAKE_YOUNG_PAIR(BgL_constrz00_1730,
																				BgL_arg1643z00_1732);
																		}
																		BgL_arg1640z00_1728 =
																			PROCEDURE_ENTRY(BgL_ez00_97) (BgL_ez00_97,
																			BgL_arg1642z00_1731, BgL_ez00_97, BEOA);
																	}
																else
																	{	/* Eval/evobject.scm 523 */
																		BgL_arg1640z00_1728 = BFALSE;
																	}
															}
															{	/* Eval/evobject.scm 528 */
																obj_t BgL_arg1644z00_1733;
																obj_t BgL_arg1645z00_1734;

																{	/* Eval/evobject.scm 528 */
																	obj_t BgL_zc3z04anonymousza31649ze3z87_4423;

																	{
																		int BgL_tmpz00_5587;

																		BgL_tmpz00_5587 = (int) (((long) 2));
																		BgL_zc3z04anonymousza31649ze3z87_4423 =
																			MAKE_L_PROCEDURE
																			(BGl_z62zc3z04anonymousza31649ze3ze5zz__evobjectz00,
																			BgL_tmpz00_5587);
																	}
																	PROCEDURE_L_SET
																		(BgL_zc3z04anonymousza31649ze3z87_4423,
																		(int) (((long) 0)), BgL_ez00_97);
																	PROCEDURE_L_SET
																		(BgL_zc3z04anonymousza31649ze3z87_4423,
																		(int) (((long) 1)), BgL_newz00_1698);
																	BgL_arg1644z00_1733 =
																		BGl_vectorzd2filterzd2mapz00zz__evobjectz00
																		(BgL_zc3z04anonymousza31649ze3z87_4423,
																		BgL_fieldsz00_1697, BgL_argsz00_1700);
																}
																BgL_arg1645z00_1734 =
																	MAKE_YOUNG_PAIR(BgL_newz00_1698, BNIL);
																BgL_arg1641z00_1729 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg1644z00_1733, BgL_arg1645z00_1734);
															}
															BgL_arg1630z00_1716 =
																MAKE_YOUNG_PAIR(BgL_arg1640z00_1728,
																BgL_arg1641z00_1729);
														}
														BgL_arg1628z00_1714 =
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg1629z00_1715, BgL_arg1630z00_1716);
													}
													BgL_arg1627z00_1713 =
														MAKE_YOUNG_PAIR(BGl_symbol2670z00zz__evobjectz00,
														BgL_arg1628z00_1714);
												}
												BgL_arg1615z00_1703 =
													MAKE_YOUNG_PAIR(BgL_arg1627z00_1713, BNIL);
											}
											BgL_arg1613z00_1701 =
												MAKE_YOUNG_PAIR(BgL_arg1614z00_1702,
												BgL_arg1615z00_1703);
										}
										return
											MAKE_YOUNG_PAIR(BGl_symbol2672z00zz__evobjectz00,
											BgL_arg1613z00_1701);
									}
								}
							}
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1649> */
	obj_t BGl_z62zc3z04anonymousza31649ze3ze5zz__evobjectz00(obj_t
		BgL_envz00_4425, obj_t BgL_fieldz00_4428, obj_t BgL_valz00_4429)
	{
		{	/* Eval/evobject.scm 527 */
			{	/* Eval/evobject.scm 528 */
				obj_t BgL_ez00_4426;
				obj_t BgL_newz00_4427;

				BgL_ez00_4426 = PROCEDURE_L_REF(BgL_envz00_4425, (int) (((long) 0)));
				BgL_newz00_4427 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_4425, (int) (((long) 1))));
				{	/* Eval/evobject.scm 528 */
					bool_t BgL_test2890z00_5608;

					if (BGl_classzd2fieldzd2virtualzf3zf3zz__objectz00(BgL_fieldz00_4428))
						{	/* Eval/evobject.scm 528 */
							BgL_test2890z00_5608 =
								BGl_classzd2fieldzd2mutablezf3zf3zz__objectz00
								(BgL_fieldz00_4428);
						}
					else
						{	/* Eval/evobject.scm 528 */
							BgL_test2890z00_5608 = ((bool_t) 0);
						}
					if (BgL_test2890z00_5608)
						{	/* Eval/evobject.scm 530 */
							obj_t BgL_vz00_4541;

							{	/* Eval/evobject.scm 530 */
								obj_t BgL_arg1657z00_4542;

								BgL_arg1657z00_4542 = CDR(((obj_t) BgL_valz00_4429));
								BgL_vz00_4541 =
									PROCEDURE_ENTRY(BgL_ez00_4426) (BgL_ez00_4426,
									BgL_arg1657z00_4542, BgL_ez00_4426, BEOA);
							}
							{	/* Eval/evobject.scm 531 */
								obj_t BgL_arg1652z00_4543;
								obj_t BgL_arg1654z00_4544;

								BgL_arg1652z00_4543 =
									BGl_classzd2fieldzd2mutatorz00zz__objectz00
									(BgL_fieldz00_4428);
								{	/* Eval/evobject.scm 531 */
									obj_t BgL_arg1656z00_4545;

									BgL_arg1656z00_4545 = MAKE_YOUNG_PAIR(BgL_vz00_4541, BNIL);
									BgL_arg1654z00_4544 =
										MAKE_YOUNG_PAIR(BgL_newz00_4427, BgL_arg1656z00_4545);
								}
								return
									MAKE_YOUNG_PAIR(BgL_arg1652z00_4543, BgL_arg1654z00_4544);
							}
						}
					else
						{	/* Eval/evobject.scm 528 */
							return BFALSE;
						}
				}
			}
		}

	}



/* &<@anonymous:1632> */
	obj_t BGl_z62zc3z04anonymousza31632ze3ze5zz__evobjectz00(obj_t
		BgL_envz00_4430, obj_t BgL_fieldz00_4433, obj_t BgL_valz00_4434)
	{
		{	/* Eval/evobject.scm 516 */
			{	/* Eval/evobject.scm 517 */
				obj_t BgL_ez00_4431;
				obj_t BgL_newz00_4432;

				BgL_ez00_4431 = PROCEDURE_L_REF(BgL_envz00_4430, (int) (((long) 0)));
				BgL_newz00_4432 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_4430, (int) (((long) 1))));
				if (BGl_classzd2fieldzd2virtualzf3zf3zz__objectz00(BgL_fieldz00_4433))
					{	/* Eval/evobject.scm 517 */
						return BFALSE;
					}
				else
					{	/* Eval/evobject.scm 518 */
						obj_t BgL_vz00_4546;

						{	/* Eval/evobject.scm 518 */
							obj_t BgL_arg1639z00_4547;

							BgL_arg1639z00_4547 = CDR(((obj_t) BgL_valz00_4434));
							BgL_vz00_4546 =
								PROCEDURE_ENTRY(BgL_ez00_4431) (BgL_ez00_4431,
								BgL_arg1639z00_4547, BgL_ez00_4431, BEOA);
						}
						{	/* Eval/evobject.scm 519 */
							obj_t BgL_arg1634z00_4548;
							obj_t BgL_arg1635z00_4549;

							BgL_arg1634z00_4548 =
								BGl_classzd2fieldzd2mutatorz00zz__objectz00(BgL_fieldz00_4433);
							{	/* Eval/evobject.scm 519 */
								obj_t BgL_arg1637z00_4550;

								BgL_arg1637z00_4550 = MAKE_YOUNG_PAIR(BgL_vz00_4546, BNIL);
								BgL_arg1635z00_4549 =
									MAKE_YOUNG_PAIR(BgL_newz00_4432, BgL_arg1637z00_4550);
							}
							return MAKE_YOUNG_PAIR(BgL_arg1634z00_4548, BgL_arg1635z00_4549);
						}
					}
			}
		}

	}



/* find-field-offset */
	obj_t BGl_findzd2fieldzd2offsetz00zz__evobjectz00(obj_t BgL_fieldsz00_98,
		obj_t BgL_namez00_99, obj_t BgL_formz00_100, obj_t BgL_sexpz00_101)
	{
		{	/* Eval/evobject.scm 539 */
			{
				long BgL_iz00_1795;

				BgL_iz00_1795 = ((long) 0);
			BgL_zc3z04anonymousza31696ze3z87_1796:
				if ((BgL_iz00_1795 == VECTOR_LENGTH(BgL_fieldsz00_98)))
					{	/* Eval/evobject.scm 545 */
						obj_t BgL_arg1698z00_1798;

						{	/* Eval/evobject.scm 545 */
							obj_t BgL_list1699z00_1799;

							{	/* Eval/evobject.scm 545 */
								obj_t BgL_arg1700z00_1800;

								BgL_arg1700z00_1800 = MAKE_YOUNG_PAIR(BgL_namez00_99, BNIL);
								BgL_list1699z00_1799 =
									MAKE_YOUNG_PAIR(BgL_formz00_100, BgL_arg1700z00_1800);
							}
							BgL_arg1698z00_1798 =
								BGl_formatz00zz__r4_output_6_10_3z00
								(BGl_string2681z00zz__evobjectz00, BgL_list1699z00_1799);
						}
						return
							BGl_expandzd2errorzd2zz__evobjectz00(BgL_namez00_99,
							BgL_arg1698z00_1798, BgL_sexpz00_101);
					}
				else
					{	/* Eval/evobject.scm 543 */
						if (
							(BGl_classzd2fieldzd2namez00zz__objectz00(VECTOR_REF
									(BgL_fieldsz00_98, BgL_iz00_1795)) == BgL_namez00_99))
							{	/* Eval/evobject.scm 547 */
								return BINT(BgL_iz00_1795);
							}
						else
							{
								long BgL_iz00_5653;

								BgL_iz00_5653 = (BgL_iz00_1795 + ((long) 1));
								BgL_iz00_1795 = BgL_iz00_5653;
								goto BgL_zc3z04anonymousza31696ze3z87_1796;
							}
					}
			}
		}

	}



/* eval-expand-with-access */
	BGL_EXPORTED_DEF obj_t
		BGl_evalzd2expandzd2withzd2accesszd2zz__evobjectz00(obj_t BgL_classz00_102)
	{
		{	/* Eval/evobject.scm 555 */
			{	/* Eval/evobject.scm 556 */
				obj_t BgL_widz00_1808;

				{	/* Eval/evobject.scm 556 */
					obj_t BgL_arg1710z00_1810;

					{	/* Eval/evobject.scm 556 */
						obj_t BgL_arg1711z00_1811;
						obj_t BgL_arg1712z00_1812;

						{	/* Eval/evobject.scm 556 */
							obj_t BgL_res2471z00_3459;

							{	/* Eval/evobject.scm 556 */
								obj_t BgL_symbolz00_3457;

								BgL_symbolz00_3457 = BGl_symbol2682z00zz__evobjectz00;
								{	/* Eval/evobject.scm 556 */
									obj_t BgL_arg2205z00_3458;

									BgL_arg2205z00_3458 = SYMBOL_TO_STRING(BgL_symbolz00_3457);
									BgL_res2471z00_3459 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2205z00_3458);
								}
							}
							BgL_arg1711z00_1811 = BgL_res2471z00_3459;
						}
						{	/* Eval/evobject.scm 556 */
							obj_t BgL_arg1713z00_1813;

							BgL_arg1713z00_1813 =
								BGl_classzd2namezd2zz__objectz00(BgL_classz00_102);
							{	/* Eval/evobject.scm 556 */
								obj_t BgL_res2472z00_3462;

								{	/* Eval/evobject.scm 556 */
									obj_t BgL_arg2205z00_3461;

									BgL_arg2205z00_3461 = SYMBOL_TO_STRING(BgL_arg1713z00_1813);
									BgL_res2472z00_3462 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2205z00_3461);
								}
								BgL_arg1712z00_1812 = BgL_res2472z00_3462;
							}
						}
						BgL_arg1710z00_1810 =
							string_append(BgL_arg1711z00_1811, BgL_arg1712z00_1812);
					}
					BgL_widz00_1808 = bstring_to_symbol(BgL_arg1710z00_1810);
				}
				return
					BGl_installzd2expanderzd2zz__macroz00(BgL_widz00_1808,
					BGl_evalzd2withzd2accesszd2expanderzd2zz__evobjectz00
					(BgL_classz00_102));
			}
		}

	}



/* &eval-expand-with-access */
	obj_t BGl_z62evalzd2expandzd2withzd2accesszb0zz__evobjectz00(obj_t
		BgL_envz00_4435, obj_t BgL_classz00_4436)
	{
		{	/* Eval/evobject.scm 555 */
			{	/* Eval/evobject.scm 556 */
				obj_t BgL_auxz00_5664;

				if (BGl_classzf3zf3zz__objectz00(BgL_classz00_4436))
					{	/* Eval/evobject.scm 556 */
						BgL_auxz00_5664 = BgL_classz00_4436;
					}
				else
					{
						obj_t BgL_auxz00_5667;

						BgL_auxz00_5667 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__evobjectz00,
							BINT(((long) 20459)), BGl_string2684z00zz__evobjectz00,
							BGl_string2659z00zz__evobjectz00, BgL_classz00_4436);
						FAILURE(BgL_auxz00_5667, BFALSE, BFALSE);
					}
				return
					BGl_evalzd2expandzd2withzd2accesszd2zz__evobjectz00(BgL_auxz00_5664);
			}
		}

	}



/* eval-with-access-expander */
	obj_t BGl_evalzd2withzd2accesszd2expanderzd2zz__evobjectz00(obj_t
		BgL_classz00_103)
	{
		{	/* Eval/evobject.scm 562 */
			{	/* Eval/evobject.scm 564 */
				obj_t BgL_zc3z04anonymousza31714ze3z87_4437;

				BgL_zc3z04anonymousza31714ze3z87_4437 =
					MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31714ze3ze5zz__evobjectz00,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31714ze3z87_4437,
					(int) (((long) 0)), BgL_classz00_103);
				return BgL_zc3z04anonymousza31714ze3z87_4437;
			}
		}

	}



/* &<@anonymous:1714> */
	obj_t BGl_z62zc3z04anonymousza31714ze3ze5zz__evobjectz00(obj_t
		BgL_envz00_4438, obj_t BgL_xz00_4440, obj_t BgL_ez00_4441)
	{
		{	/* Eval/evobject.scm 564 */
			{	/* Eval/evobject.scm 564 */
				obj_t BgL_classz00_4439;

				BgL_classz00_4439 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4438, (int) (((long) 0))));
				{
					obj_t BgL_waccessz00_4552;
					obj_t BgL_instancez00_4553;
					obj_t BgL_fieldsz00_4554;
					obj_t BgL_bodyz00_4555;

					if (PAIRP(BgL_xz00_4440))
						{	/* Eval/evobject.scm 564 */
							obj_t BgL_cdrzd2163zd2_4604;

							BgL_cdrzd2163zd2_4604 = CDR(BgL_xz00_4440);
							if (PAIRP(BgL_cdrzd2163zd2_4604))
								{	/* Eval/evobject.scm 564 */
									obj_t BgL_cdrzd2169zd2_4605;

									BgL_cdrzd2169zd2_4605 = CDR(BgL_cdrzd2163zd2_4604);
									if (PAIRP(BgL_cdrzd2169zd2_4605))
										{	/* Eval/evobject.scm 564 */
											obj_t BgL_carzd2173zd2_4606;
											obj_t BgL_cdrzd2174zd2_4607;

											BgL_carzd2173zd2_4606 = CAR(BgL_cdrzd2169zd2_4605);
											BgL_cdrzd2174zd2_4607 = CDR(BgL_cdrzd2169zd2_4605);
											if (PAIRP(BgL_carzd2173zd2_4606))
												{	/* Eval/evobject.scm 564 */
													if (PAIRP(BgL_cdrzd2174zd2_4607))
														{	/* Eval/evobject.scm 564 */
															BgL_waccessz00_4552 = CAR(BgL_xz00_4440);
															BgL_instancez00_4553 = CAR(BgL_cdrzd2163zd2_4604);
															BgL_fieldsz00_4554 = BgL_carzd2173zd2_4606;
															BgL_bodyz00_4555 = BgL_cdrzd2174zd2_4607;
															{
																obj_t BgL_sz00_4557;
																obj_t BgL_nfieldsz00_4558;

																BgL_sz00_4557 = BgL_fieldsz00_4554;
																BgL_nfieldsz00_4558 = BNIL;
															BgL_loopz00_4556:
																if (NULLP(BgL_sz00_4557))
																	{	/* Eval/evobject.scm 571 */
																		obj_t BgL_instancez00_4559;

																		BgL_instancez00_4559 =
																			PROCEDURE_ENTRY(BgL_ez00_4441)
																			(BgL_ez00_4441, BgL_instancez00_4553,
																			BgL_ez00_4441, BEOA);
																		{	/* Eval/evobject.scm 571 */
																			obj_t BgL_auxz00_4560;

																			BgL_auxz00_4560 =
																				BGl_gensymz00zz__r4_symbols_6_4z00
																				(BGl_symbol2685z00zz__evobjectz00);
																			{	/* Eval/evobject.scm 572 */
																				obj_t BgL_tauxz00_4561;

																				{	/* Eval/evobject.scm 573 */
																					obj_t BgL_arg1744z00_4562;

																					BgL_arg1744z00_4562 =
																						BGl_classzd2namezd2zz__objectz00
																						(BgL_classz00_4439);
																					{	/* Eval/evobject.scm 573 */
																						obj_t BgL_list1745z00_4563;

																						{	/* Eval/evobject.scm 573 */
																							obj_t BgL_arg1746z00_4564;

																							{	/* Eval/evobject.scm 573 */
																								obj_t BgL_arg1747z00_4565;

																								BgL_arg1747z00_4565 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1744z00_4562, BNIL);
																								BgL_arg1746z00_4564 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2687z00zz__evobjectz00,
																									BgL_arg1747z00_4565);
																							}
																							BgL_list1745z00_4563 =
																								MAKE_YOUNG_PAIR(BgL_auxz00_4560,
																								BgL_arg1746z00_4564);
																						}
																						BgL_tauxz00_4561 =
																							BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																							(BgL_list1745z00_4563);
																					}
																				}
																				{	/* Eval/evobject.scm 573 */

																					{	/* Eval/evobject.scm 576 */
																						obj_t BgL_arg1725z00_4566;

																						{	/* Eval/evobject.scm 576 */
																							obj_t BgL_arg1726z00_4567;

																							{	/* Eval/evobject.scm 576 */
																								obj_t BgL_arg1727z00_4568;
																								obj_t BgL_arg1728z00_4569;

																								{	/* Eval/evobject.scm 576 */
																									obj_t BgL_arg1729z00_4570;

																									{	/* Eval/evobject.scm 576 */
																										obj_t BgL_arg1730z00_4571;

																										BgL_arg1730z00_4571 =
																											MAKE_YOUNG_PAIR
																											(BgL_instancez00_4559,
																											BNIL);
																										BgL_arg1729z00_4570 =
																											MAKE_YOUNG_PAIR
																											(BgL_tauxz00_4561,
																											BgL_arg1730z00_4571);
																									}
																									BgL_arg1727z00_4568 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1729z00_4570, BNIL);
																								}
																								{	/* Eval/evobject.scm 578 */
																									obj_t BgL_arg1731z00_4572;

																									{	/* Eval/evobject.scm 578 */
																										obj_t BgL_arg1732z00_4573;
																										obj_t BgL_arg1733z00_4574;
																										obj_t BgL_arg1734z00_4575;

																										if (NULLP
																											(BgL_nfieldsz00_4558))
																											{	/* Eval/evobject.scm 578 */
																												BgL_arg1732z00_4573 =
																													BNIL;
																											}
																										else
																											{	/* Eval/evobject.scm 578 */
																												obj_t
																													BgL_head1124z00_4576;
																												{	/* Eval/evobject.scm 578 */
																													obj_t
																														BgL_arg1741z00_4577;
																													BgL_arg1741z00_4577 =
																														CAR(CAR
																														(BgL_nfieldsz00_4558));
																													{	/* Eval/evobject.scm 578 */
																														obj_t
																															BgL_res2476z00_4578;
																														BgL_res2476z00_4578
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1741z00_4577,
																															BNIL);
																														BgL_head1124z00_4576
																															=
																															BgL_res2476z00_4578;
																													}
																												}
																												{	/* Eval/evobject.scm 578 */
																													obj_t
																														BgL_g1127z00_4579;
																													BgL_g1127z00_4579 =
																														CDR
																														(BgL_nfieldsz00_4558);
																													{
																														obj_t
																															BgL_l1122z00_4581;
																														obj_t
																															BgL_tail1125z00_4582;
																														BgL_l1122z00_4581 =
																															BgL_g1127z00_4579;
																														BgL_tail1125z00_4582
																															=
																															BgL_head1124z00_4576;
																													BgL_zc3z04anonymousza31736ze3z87_4580:
																														if (NULLP
																															(BgL_l1122z00_4581))
																															{	/* Eval/evobject.scm 578 */
																																BgL_arg1732z00_4573
																																	=
																																	BgL_head1124z00_4576;
																															}
																														else
																															{	/* Eval/evobject.scm 578 */
																																obj_t
																																	BgL_newtail1126z00_4583;
																																{	/* Eval/evobject.scm 578 */
																																	obj_t
																																		BgL_arg1739z00_4584;
																																	{	/* Eval/evobject.scm 578 */
																																		obj_t
																																			BgL_pairz00_4585;
																																		BgL_pairz00_4585
																																			=
																																			CAR((
																																				(obj_t)
																																				BgL_l1122z00_4581));
																																		BgL_arg1739z00_4584
																																			=
																																			CAR
																																			(BgL_pairz00_4585);
																																	}
																																	{	/* Eval/evobject.scm 578 */
																																		obj_t
																																			BgL_res2482z00_4586;
																																		BgL_res2482z00_4586
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1739z00_4584,
																																			BNIL);
																																		BgL_newtail1126z00_4583
																																			=
																																			BgL_res2482z00_4586;
																																	}
																																}
																																SET_CDR
																																	(BgL_tail1125z00_4582,
																																	BgL_newtail1126z00_4583);
																																{	/* Eval/evobject.scm 578 */
																																	obj_t
																																		BgL_arg1738z00_4587;
																																	BgL_arg1738z00_4587
																																		=
																																		CDR(((obj_t)
																																			BgL_l1122z00_4581));
																																	{
																																		obj_t
																																			BgL_tail1125z00_5726;
																																		obj_t
																																			BgL_l1122z00_5725;
																																		BgL_l1122z00_5725
																																			=
																																			BgL_arg1738z00_4587;
																																		BgL_tail1125z00_5726
																																			=
																																			BgL_newtail1126z00_4583;
																																		BgL_tail1125z00_4582
																																			=
																																			BgL_tail1125z00_5726;
																																		BgL_l1122z00_4581
																																			=
																																			BgL_l1122z00_5725;
																																		goto
																																			BgL_zc3z04anonymousza31736ze3z87_4580;
																																	}
																																}
																															}
																													}
																												}
																											}
																										BgL_arg1733z00_4574 =
																											BGl_expandzd2prognzd2zz__prognz00
																											(BgL_bodyz00_4555);
																										BgL_arg1734z00_4575 =
																											BGl_evalzd2beginzd2expanderz00zz__expander_definez00
																											(BGl_withzd2accesszd2expanderz00zz__evobjectz00
																											(BgL_ez00_4441,
																												BgL_auxz00_4560,
																												BgL_nfieldsz00_4558,
																												BgL_xz00_4440));
																										BgL_arg1731z00_4572 =
																											BGl_z52withzd2lexicalz80zz__expandz00
																											(BgL_arg1732z00_4573,
																											BgL_arg1733z00_4574,
																											BgL_arg1734z00_4575,
																											BgL_auxz00_4560);
																									}
																									BgL_arg1728z00_4569 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1731z00_4572, BNIL);
																								}
																								BgL_arg1726z00_4567 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1727z00_4568,
																									BgL_arg1728z00_4569);
																							}
																							BgL_arg1725z00_4566 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2672z00zz__evobjectz00,
																								BgL_arg1726z00_4567);
																						}
																						return
																							BGl_localiza7eza7zz__evobjectz00
																							(BgL_xz00_4440,
																							BgL_arg1725z00_4566);
																					}
																				}
																			}
																		}
																	}
																else
																	{	/* Eval/evobject.scm 570 */
																		if (PAIRP(BgL_sz00_4557))
																			{	/* Eval/evobject.scm 586 */
																				bool_t BgL_test2905z00_5737;

																				{	/* Eval/evobject.scm 586 */
																					obj_t BgL_tmpz00_5738;

																					BgL_tmpz00_5738 = CAR(BgL_sz00_4557);
																					BgL_test2905z00_5737 =
																						SYMBOLP(BgL_tmpz00_5738);
																				}
																				if (BgL_test2905z00_5737)
																					{	/* Eval/evobject.scm 587 */
																						obj_t BgL_arg1752z00_4588;
																						obj_t BgL_arg1754z00_4589;

																						BgL_arg1752z00_4588 =
																							CDR(BgL_sz00_4557);
																						{	/* Eval/evobject.scm 587 */
																							obj_t BgL_arg1755z00_4590;

																							{	/* Eval/evobject.scm 587 */
																								obj_t BgL_arg1756z00_4591;
																								obj_t BgL_arg1757z00_4592;

																								BgL_arg1756z00_4591 =
																									CAR(BgL_sz00_4557);
																								BgL_arg1757z00_4592 =
																									CAR(BgL_sz00_4557);
																								{	/* Eval/evobject.scm 587 */
																									obj_t BgL_list1758z00_4593;

																									{	/* Eval/evobject.scm 587 */
																										obj_t BgL_arg1759z00_4594;

																										BgL_arg1759z00_4594 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1757z00_4592,
																											BNIL);
																										BgL_list1758z00_4593 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1756z00_4591,
																											BgL_arg1759z00_4594);
																									}
																									BgL_arg1755z00_4590 =
																										BgL_list1758z00_4593;
																								}
																							}
																							BgL_arg1754z00_4589 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1755z00_4590,
																								BgL_nfieldsz00_4558);
																						}
																						{
																							obj_t BgL_nfieldsz00_5748;
																							obj_t BgL_sz00_5747;

																							BgL_sz00_5747 =
																								BgL_arg1752z00_4588;
																							BgL_nfieldsz00_5748 =
																								BgL_arg1754z00_4589;
																							BgL_nfieldsz00_4558 =
																								BgL_nfieldsz00_5748;
																							BgL_sz00_4557 = BgL_sz00_5747;
																							goto BgL_loopz00_4556;
																						}
																					}
																				else
																					{	/* Eval/evobject.scm 588 */
																						bool_t BgL_test2906z00_5749;

																						{	/* Eval/evobject.scm 588 */
																							bool_t BgL_test2907z00_5750;

																							{	/* Eval/evobject.scm 588 */
																								obj_t BgL_tmpz00_5751;

																								BgL_tmpz00_5751 =
																									CAR(BgL_sz00_4557);
																								BgL_test2907z00_5750 =
																									PAIRP(BgL_tmpz00_5751);
																							}
																							if (BgL_test2907z00_5750)
																								{	/* Eval/evobject.scm 589 */
																									bool_t BgL_test2908z00_5754;

																									{	/* Eval/evobject.scm 589 */
																										obj_t BgL_tmpz00_5755;

																										BgL_tmpz00_5755 =
																											CAR(CAR(BgL_sz00_4557));
																										BgL_test2908z00_5754 =
																											SYMBOLP(BgL_tmpz00_5755);
																									}
																									if (BgL_test2908z00_5754)
																										{	/* Eval/evobject.scm 590 */
																											bool_t
																												BgL_test2909z00_5759;
																											{	/* Eval/evobject.scm 590 */
																												obj_t BgL_tmpz00_5760;

																												BgL_tmpz00_5760 =
																													CDR(CAR
																													(BgL_sz00_4557));
																												BgL_test2909z00_5759 =
																													PAIRP
																													(BgL_tmpz00_5760);
																											}
																											if (BgL_test2909z00_5759)
																												{	/* Eval/evobject.scm 591 */
																													bool_t
																														BgL_test2910z00_5764;
																													{	/* Eval/evobject.scm 591 */
																														obj_t
																															BgL_tmpz00_5765;
																														{	/* Eval/evobject.scm 591 */
																															obj_t
																																BgL_pairz00_4595;
																															BgL_pairz00_4595 =
																																CAR
																																(BgL_sz00_4557);
																															BgL_tmpz00_5765 =
																																CAR(CDR
																																(BgL_pairz00_4595));
																														}
																														BgL_test2910z00_5764
																															=
																															SYMBOLP
																															(BgL_tmpz00_5765);
																													}
																													if (BgL_test2910z00_5764)
																														{	/* Eval/evobject.scm 592 */
																															obj_t
																																BgL_tmpz00_5770;
																															{	/* Eval/evobject.scm 592 */
																																obj_t
																																	BgL_pairz00_4596;
																																BgL_pairz00_4596
																																	=
																																	CAR
																																	(BgL_sz00_4557);
																																BgL_tmpz00_5770
																																	=
																																	CDR(CDR
																																	(BgL_pairz00_4596));
																															}
																															BgL_test2906z00_5749
																																=
																																NULLP
																																(BgL_tmpz00_5770);
																														}
																													else
																														{	/* Eval/evobject.scm 591 */
																															BgL_test2906z00_5749
																																= ((bool_t) 0);
																														}
																												}
																											else
																												{	/* Eval/evobject.scm 590 */
																													BgL_test2906z00_5749 =
																														((bool_t) 0);
																												}
																										}
																									else
																										{	/* Eval/evobject.scm 589 */
																											BgL_test2906z00_5749 =
																												((bool_t) 0);
																										}
																								}
																							else
																								{	/* Eval/evobject.scm 588 */
																									BgL_test2906z00_5749 =
																										((bool_t) 0);
																								}
																						}
																						if (BgL_test2906z00_5749)
																							{	/* Eval/evobject.scm 593 */
																								obj_t BgL_arg1781z00_4597;
																								obj_t BgL_arg1782z00_4598;

																								BgL_arg1781z00_4597 =
																									CDR(BgL_sz00_4557);
																								BgL_arg1782z00_4598 =
																									MAKE_YOUNG_PAIR(CAR
																									(BgL_sz00_4557),
																									BgL_nfieldsz00_4558);
																								{
																									obj_t BgL_nfieldsz00_5779;
																									obj_t BgL_sz00_5778;

																									BgL_sz00_5778 =
																										BgL_arg1781z00_4597;
																									BgL_nfieldsz00_5779 =
																										BgL_arg1782z00_4598;
																									BgL_nfieldsz00_4558 =
																										BgL_nfieldsz00_5779;
																									BgL_sz00_4557 = BgL_sz00_5778;
																									goto BgL_loopz00_4556;
																								}
																							}
																						else
																							{	/* Eval/evobject.scm 595 */
																								obj_t BgL_arg1784z00_4599;

																								BgL_arg1784z00_4599 =
																									CAR(BgL_sz00_4557);
																								{	/* Eval/evobject.scm 72 */
																									obj_t BgL_locz00_4600;

																									{	/* Eval/evobject.scm 72 */
																										bool_t BgL_test2911z00_5781;

																										{	/* Eval/evobject.scm 72 */
																											bool_t
																												BgL_res2380z00_4601;
																											BgL_res2380z00_4601 =
																												EPAIRP(BgL_xz00_4440);
																											BgL_test2911z00_5781 =
																												BgL_res2380z00_4601;
																										}
																										if (BgL_test2911z00_5781)
																											{	/* Eval/evobject.scm 72 */
																												BgL_locz00_4600 =
																													CER(
																													((obj_t)
																														BgL_xz00_4440));
																											}
																										else
																											{	/* Eval/evobject.scm 72 */
																												BgL_locz00_4600 =
																													BFALSE;
																											}
																									}
																									{	/* Eval/evobject.scm 73 */
																										bool_t BgL_test2912z00_5785;

																										if (PAIRP(BgL_locz00_4600))
																											{	/* Eval/evobject.scm 73 */
																												bool_t
																													BgL_test2914z00_5788;
																												{	/* Eval/evobject.scm 73 */
																													obj_t BgL_tmpz00_5789;

																													BgL_tmpz00_5789 =
																														CDR
																														(BgL_locz00_4600);
																													BgL_test2914z00_5788 =
																														PAIRP
																														(BgL_tmpz00_5789);
																												}
																												if (BgL_test2914z00_5788)
																													{	/* Eval/evobject.scm 73 */
																														obj_t
																															BgL_tmpz00_5792;
																														BgL_tmpz00_5792 =
																															CDR(CDR
																															(BgL_locz00_4600));
																														BgL_test2912z00_5785
																															=
																															PAIRP
																															(BgL_tmpz00_5792);
																													}
																												else
																													{	/* Eval/evobject.scm 73 */
																														BgL_test2912z00_5785
																															= ((bool_t) 0);
																													}
																											}
																										else
																											{	/* Eval/evobject.scm 73 */
																												BgL_test2912z00_5785 =
																													((bool_t) 0);
																											}
																										if (BgL_test2912z00_5785)
																											{	/* Eval/evobject.scm 73 */
																												return
																													BGl_errorzf2locationzf2zz__errorz00
																													(BgL_arg1784z00_4599,
																													BGl_string2678z00zz__evobjectz00,
																													BgL_xz00_4440,
																													CAR(CDR
																														(BgL_locz00_4600)),
																													CAR(CDR(CDR
																															(BgL_locz00_4600))));
																											}
																										else
																											{	/* Eval/evobject.scm 73 */
																												return
																													BGl_errorz00zz__errorz00
																													(BgL_arg1784z00_4599,
																													BGl_string2678z00zz__evobjectz00,
																													BgL_xz00_4440);
																											}
																									}
																								}
																							}
																					}
																			}
																		else
																			{	/* Eval/evobject.scm 72 */
																				obj_t BgL_locz00_4602;

																				{	/* Eval/evobject.scm 72 */
																					bool_t BgL_test2915z00_5803;

																					{	/* Eval/evobject.scm 72 */
																						bool_t BgL_res2380z00_4603;

																						BgL_res2380z00_4603 =
																							EPAIRP(BgL_xz00_4440);
																						BgL_test2915z00_5803 =
																							BgL_res2380z00_4603;
																					}
																					if (BgL_test2915z00_5803)
																						{	/* Eval/evobject.scm 72 */
																							BgL_locz00_4602 =
																								CER(((obj_t) BgL_xz00_4440));
																						}
																					else
																						{	/* Eval/evobject.scm 72 */
																							BgL_locz00_4602 = BFALSE;
																						}
																				}
																				{	/* Eval/evobject.scm 73 */
																					bool_t BgL_test2916z00_5807;

																					if (PAIRP(BgL_locz00_4602))
																						{	/* Eval/evobject.scm 73 */
																							bool_t BgL_test2918z00_5810;

																							{	/* Eval/evobject.scm 73 */
																								obj_t BgL_tmpz00_5811;

																								BgL_tmpz00_5811 =
																									CDR(BgL_locz00_4602);
																								BgL_test2918z00_5810 =
																									PAIRP(BgL_tmpz00_5811);
																							}
																							if (BgL_test2918z00_5810)
																								{	/* Eval/evobject.scm 73 */
																									obj_t BgL_tmpz00_5814;

																									BgL_tmpz00_5814 =
																										CDR(CDR(BgL_locz00_4602));
																									BgL_test2916z00_5807 =
																										PAIRP(BgL_tmpz00_5814);
																								}
																							else
																								{	/* Eval/evobject.scm 73 */
																									BgL_test2916z00_5807 =
																										((bool_t) 0);
																								}
																						}
																					else
																						{	/* Eval/evobject.scm 73 */
																							BgL_test2916z00_5807 =
																								((bool_t) 0);
																						}
																					if (BgL_test2916z00_5807)
																						{	/* Eval/evobject.scm 73 */
																							return
																								BGl_errorzf2locationzf2zz__errorz00
																								(BgL_sz00_4557,
																								BGl_string2689z00zz__evobjectz00,
																								BgL_xz00_4440,
																								CAR(CDR(BgL_locz00_4602)),
																								CAR(CDR(CDR(BgL_locz00_4602))));
																						}
																					else
																						{	/* Eval/evobject.scm 73 */
																							return
																								BGl_errorz00zz__errorz00
																								(BgL_sz00_4557,
																								BGl_string2689z00zz__evobjectz00,
																								BgL_xz00_4440);
																						}
																				}
																			}
																	}
															}
														}
													else
														{	/* Eval/evobject.scm 564 */
															return
																BGl_expandzd2errorzd2zz__evobjectz00
																(BGl_string2690z00zz__evobjectz00,
																BGl_string2691z00zz__evobjectz00,
																BgL_xz00_4440);
														}
												}
											else
												{	/* Eval/evobject.scm 564 */
													return
														BGl_expandzd2errorzd2zz__evobjectz00
														(BGl_string2690z00zz__evobjectz00,
														BGl_string2691z00zz__evobjectz00, BgL_xz00_4440);
												}
										}
									else
										{	/* Eval/evobject.scm 564 */
											return
												BGl_expandzd2errorzd2zz__evobjectz00
												(BGl_string2690z00zz__evobjectz00,
												BGl_string2691z00zz__evobjectz00, BgL_xz00_4440);
										}
								}
							else
								{	/* Eval/evobject.scm 564 */
									return
										BGl_expandzd2errorzd2zz__evobjectz00
										(BGl_string2690z00zz__evobjectz00,
										BGl_string2691z00zz__evobjectz00, BgL_xz00_4440);
								}
						}
					else
						{	/* Eval/evobject.scm 564 */
							return
								BGl_expandzd2errorzd2zz__evobjectz00
								(BGl_string2690z00zz__evobjectz00,
								BGl_string2691z00zz__evobjectz00, BgL_xz00_4440);
						}
				}
			}
		}

	}



/* with-access-expander */
	obj_t BGl_withzd2accesszd2expanderz00zz__evobjectz00(obj_t BgL_oldez00_104,
		obj_t BgL_iz00_105, obj_t BgL_fieldsz00_106, obj_t BgL_formz00_107)
	{
		{	/* Eval/evobject.scm 602 */
			{	/* Eval/evobject.scm 606 */
				obj_t BgL_idsz00_1926;

				if (NULLP(BgL_fieldsz00_106))
					{	/* Eval/evobject.scm 606 */
						BgL_idsz00_1926 = BNIL;
					}
				else
					{	/* Eval/evobject.scm 606 */
						obj_t BgL_head1130z00_1994;

						{	/* Eval/evobject.scm 606 */
							obj_t BgL_arg1848z00_2006;

							BgL_arg1848z00_2006 = CAR(CAR(BgL_fieldsz00_106));
							{	/* Eval/evobject.scm 606 */
								obj_t BgL_res2497z00_3648;

								BgL_res2497z00_3648 =
									MAKE_YOUNG_PAIR(BgL_arg1848z00_2006, BNIL);
								BgL_head1130z00_1994 = BgL_res2497z00_3648;
							}
						}
						{	/* Eval/evobject.scm 606 */
							obj_t BgL_g1133z00_1995;

							BgL_g1133z00_1995 = CDR(BgL_fieldsz00_106);
							{
								obj_t BgL_l1128z00_3673;
								obj_t BgL_tail1131z00_3674;

								BgL_l1128z00_3673 = BgL_g1133z00_1995;
								BgL_tail1131z00_3674 = BgL_head1130z00_1994;
							BgL_zc3z04anonymousza31843ze3z87_3672:
								if (NULLP(BgL_l1128z00_3673))
									{	/* Eval/evobject.scm 606 */
										BgL_idsz00_1926 = BgL_head1130z00_1994;
									}
								else
									{	/* Eval/evobject.scm 606 */
										obj_t BgL_newtail1132z00_3681;

										{	/* Eval/evobject.scm 606 */
											obj_t BgL_arg1846z00_3682;

											{	/* Eval/evobject.scm 606 */
												obj_t BgL_pairz00_3687;

												BgL_pairz00_3687 = CAR(((obj_t) BgL_l1128z00_3673));
												BgL_arg1846z00_3682 = CAR(BgL_pairz00_3687);
											}
											{	/* Eval/evobject.scm 606 */
												obj_t BgL_res2503z00_3688;

												BgL_res2503z00_3688 =
													MAKE_YOUNG_PAIR(BgL_arg1846z00_3682, BNIL);
												BgL_newtail1132z00_3681 = BgL_res2503z00_3688;
											}
										}
										SET_CDR(BgL_tail1131z00_3674, BgL_newtail1132z00_3681);
										{	/* Eval/evobject.scm 606 */
											obj_t BgL_arg1845z00_3684;

											BgL_arg1845z00_3684 = CDR(((obj_t) BgL_l1128z00_3673));
											{
												obj_t BgL_tail1131z00_5848;
												obj_t BgL_l1128z00_5847;

												BgL_l1128z00_5847 = BgL_arg1845z00_3684;
												BgL_tail1131z00_5848 = BgL_newtail1132z00_3681;
												BgL_tail1131z00_3674 = BgL_tail1131z00_5848;
												BgL_l1128z00_3673 = BgL_l1128z00_5847;
												goto BgL_zc3z04anonymousza31843ze3z87_3672;
											}
										}
									}
							}
						}
					}
				{	/* Eval/evobject.scm 607 */
					obj_t BgL_zc3z04anonymousza31797ze3z87_4442;

					BgL_zc3z04anonymousza31797ze3z87_4442 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31797ze3ze5zz__evobjectz00,
						(int) (((long) 2)), (int) (((long) 4)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31797ze3z87_4442,
						(int) (((long) 0)), BgL_oldez00_104);
					PROCEDURE_SET(BgL_zc3z04anonymousza31797ze3z87_4442,
						(int) (((long) 1)), BgL_iz00_105);
					PROCEDURE_SET(BgL_zc3z04anonymousza31797ze3z87_4442,
						(int) (((long) 2)), BgL_fieldsz00_106);
					PROCEDURE_SET(BgL_zc3z04anonymousza31797ze3z87_4442,
						(int) (((long) 3)), BgL_idsz00_1926);
					return BgL_zc3z04anonymousza31797ze3z87_4442;
				}
			}
		}

	}



/* &<@anonymous:1797> */
	obj_t BGl_z62zc3z04anonymousza31797ze3ze5zz__evobjectz00(obj_t
		BgL_envz00_4443, obj_t BgL_xz00_4448, obj_t BgL_ez00_4449)
	{
		{	/* Eval/evobject.scm 607 */
			{	/* Eval/evobject.scm 607 */
				obj_t BgL_oldez00_4444;
				obj_t BgL_iz00_4445;
				obj_t BgL_fieldsz00_4446;
				obj_t BgL_idsz00_4447;

				BgL_oldez00_4444 = PROCEDURE_REF(BgL_envz00_4443, (int) (((long) 0)));
				BgL_iz00_4445 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4443, (int) (((long) 1))));
				BgL_fieldsz00_4446 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4443, (int) (((long) 2))));
				BgL_idsz00_4447 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4443, (int) (((long) 3))));
				{
					obj_t BgL_varz00_4629;
					obj_t BgL_varz00_4610;
					obj_t BgL_valz00_4611;

					if (SYMBOLP(BgL_xz00_4448))
						{	/* Eval/evobject.scm 607 */
							BgL_varz00_4629 = BgL_xz00_4448;
							{	/* Eval/evobject.scm 610 */
								bool_t BgL_test2922z00_5873;

								if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
										(BgL_varz00_4629, BgL_idsz00_4447)))
									{	/* Eval/evobject.scm 611 */
										obj_t BgL_cellz00_4630;

										BgL_cellz00_4630 =
											BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_varz00_4629,
											BGl_z52lexicalzd2stackz80zz__expandz00());
										if (PAIRP(BgL_cellz00_4630))
											{	/* Eval/evobject.scm 612 */
												BgL_test2922z00_5873 =
													(CDR(BgL_cellz00_4630) == BgL_iz00_4445);
											}
										else
											{	/* Eval/evobject.scm 612 */
												BgL_test2922z00_5873 = ((bool_t) 0);
											}
									}
								else
									{	/* Eval/evobject.scm 610 */
										BgL_test2922z00_5873 = ((bool_t) 0);
									}
								if (BgL_test2922z00_5873)
									{	/* Eval/evobject.scm 613 */
										obj_t BgL_arg1814z00_4631;

										{	/* Eval/evobject.scm 613 */
											obj_t BgL_arg1815z00_4632;
											obj_t BgL_arg1816z00_4633;

											BgL_arg1815z00_4632 =
												PROCEDURE_ENTRY(BgL_oldez00_4444) (BgL_oldez00_4444,
												BgL_iz00_4445, BgL_oldez00_4444, BEOA);
											{	/* Eval/evobject.scm 613 */
												obj_t BgL_arg1817z00_4634;

												{	/* Eval/evobject.scm 604 */
													obj_t BgL_pairz00_4635;

													BgL_pairz00_4635 =
														BGl_assqz00zz__r4_pairs_and_lists_6_3z00
														(BgL_varz00_4629, BgL_fieldsz00_4446);
													BgL_arg1817z00_4634 = CAR(CDR(BgL_pairz00_4635));
												}
												BgL_arg1816z00_4633 =
													MAKE_YOUNG_PAIR(BgL_arg1817z00_4634, BNIL);
											}
											BgL_arg1814z00_4631 =
												MAKE_YOUNG_PAIR(BgL_arg1815z00_4632,
												BgL_arg1816z00_4633);
										}
										return
											MAKE_YOUNG_PAIR(BGl_symbol2692z00zz__evobjectz00,
											BgL_arg1814z00_4631);
									}
								else
									{	/* Eval/evobject.scm 610 */
										return
											PROCEDURE_ENTRY(BgL_oldez00_4444) (BgL_oldez00_4444,
											BgL_varz00_4629, BgL_oldez00_4444, BEOA);
									}
							}
						}
					else
						{	/* Eval/evobject.scm 607 */
							if (PAIRP(BgL_xz00_4448))
								{	/* Eval/evobject.scm 607 */
									obj_t BgL_cdrzd2194zd2_4636;

									BgL_cdrzd2194zd2_4636 = CDR(BgL_xz00_4448);
									if ((CAR(BgL_xz00_4448) == BGl_symbol2694z00zz__evobjectz00))
										{	/* Eval/evobject.scm 607 */
											if (PAIRP(BgL_cdrzd2194zd2_4636))
												{	/* Eval/evobject.scm 607 */
													obj_t BgL_carzd2197zd2_4637;
													obj_t BgL_cdrzd2198zd2_4638;

													BgL_carzd2197zd2_4637 = CAR(BgL_cdrzd2194zd2_4636);
													BgL_cdrzd2198zd2_4638 = CDR(BgL_cdrzd2194zd2_4636);
													if (SYMBOLP(BgL_carzd2197zd2_4637))
														{	/* Eval/evobject.scm 607 */
															if (PAIRP(BgL_cdrzd2198zd2_4638))
																{	/* Eval/evobject.scm 607 */
																	if (NULLP(CDR(BgL_cdrzd2198zd2_4638)))
																		{	/* Eval/evobject.scm 607 */
																			BgL_varz00_4610 = BgL_carzd2197zd2_4637;
																			BgL_valz00_4611 =
																				CAR(BgL_cdrzd2198zd2_4638);
																			{	/* Eval/evobject.scm 616 */
																				obj_t BgL_valz00_4612;

																				BgL_valz00_4612 =
																					PROCEDURE_ENTRY(BgL_ez00_4449)
																					(BgL_ez00_4449, BgL_valz00_4611,
																					BgL_ez00_4449, BEOA);
																				{	/* Eval/evobject.scm 617 */
																					bool_t BgL_test2931z00_5921;

																					if (CBOOL
																						(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																							(BgL_varz00_4610,
																								BgL_idsz00_4447)))
																						{	/* Eval/evobject.scm 618 */
																							obj_t BgL_cellz00_4613;

																							BgL_cellz00_4613 =
																								BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																								(BgL_varz00_4610,
																								BGl_z52lexicalzd2stackz80zz__expandz00
																								());
																							if (PAIRP(BgL_cellz00_4613))
																								{	/* Eval/evobject.scm 619 */
																									BgL_test2931z00_5921 =
																										(CDR(BgL_cellz00_4613) ==
																										BgL_iz00_4445);
																								}
																							else
																								{	/* Eval/evobject.scm 619 */
																									BgL_test2931z00_5921 =
																										((bool_t) 0);
																								}
																						}
																					else
																						{	/* Eval/evobject.scm 617 */
																							BgL_test2931z00_5921 =
																								((bool_t) 0);
																						}
																					if (BgL_test2931z00_5921)
																						{	/* Eval/evobject.scm 620 */
																							obj_t BgL_arg1824z00_4614;

																							{	/* Eval/evobject.scm 620 */
																								obj_t BgL_arg1825z00_4615;
																								obj_t BgL_arg1826z00_4616;

																								{	/* Eval/evobject.scm 620 */
																									obj_t BgL_arg1827z00_4617;

																									{	/* Eval/evobject.scm 620 */
																										obj_t BgL_arg1828z00_4618;
																										obj_t BgL_arg1829z00_4619;

																										BgL_arg1828z00_4618 =
																											PROCEDURE_ENTRY
																											(BgL_oldez00_4444)
																											(BgL_oldez00_4444,
																											BgL_iz00_4445,
																											BgL_oldez00_4444, BEOA);
																										{	/* Eval/evobject.scm 620 */
																											obj_t BgL_arg1830z00_4620;

																											{	/* Eval/evobject.scm 604 */
																												obj_t BgL_pairz00_4621;

																												BgL_pairz00_4621 =
																													BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																													(BgL_varz00_4610,
																													BgL_fieldsz00_4446);
																												BgL_arg1830z00_4620 =
																													CAR(CDR
																													(BgL_pairz00_4621));
																											}
																											BgL_arg1829z00_4619 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1830z00_4620,
																												BNIL);
																										}
																										BgL_arg1827z00_4617 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1828z00_4618,
																											BgL_arg1829z00_4619);
																									}
																									BgL_arg1825z00_4615 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2692z00zz__evobjectz00,
																										BgL_arg1827z00_4617);
																								}
																								{	/* Eval/evobject.scm 620 */
																									obj_t BgL_arg1831z00_4622;

																									BgL_arg1831z00_4622 =
																										PROCEDURE_ENTRY
																										(BgL_oldez00_4444)
																										(BgL_oldez00_4444,
																										BgL_valz00_4612,
																										BgL_oldez00_4444, BEOA);
																									BgL_arg1826z00_4616 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1831z00_4622, BNIL);
																								}
																								BgL_arg1824z00_4614 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1825z00_4615,
																									BgL_arg1826z00_4616);
																							}
																							return
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2694z00zz__evobjectz00,
																								BgL_arg1824z00_4614);
																						}
																					else
																						{	/* Eval/evobject.scm 621 */
																							obj_t BgL_arg1832z00_4623;

																							{	/* Eval/evobject.scm 621 */
																								obj_t BgL_arg1833z00_4624;

																								{	/* Eval/evobject.scm 621 */
																									obj_t BgL_arg1835z00_4625;

																									{	/* Eval/evobject.scm 621 */
																										obj_t BgL_arg1836z00_4626;
																										obj_t BgL_arg1838z00_4627;

																										{	/* Eval/evobject.scm 621 */
																											obj_t BgL_pairz00_4628;

																											BgL_pairz00_4628 =
																												CDR(
																												((obj_t)
																													BgL_xz00_4448));
																											BgL_arg1836z00_4626 =
																												CAR(BgL_pairz00_4628);
																										}
																										BgL_arg1838z00_4627 =
																											MAKE_YOUNG_PAIR
																											(BgL_valz00_4612, BNIL);
																										BgL_arg1835z00_4625 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1836z00_4626,
																											BgL_arg1838z00_4627);
																									}
																									BgL_arg1833z00_4624 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2694z00zz__evobjectz00,
																										BgL_arg1835z00_4625);
																								}
																								BgL_arg1832z00_4623 =
																									PROCEDURE_ENTRY
																									(BgL_oldez00_4444)
																									(BgL_oldez00_4444,
																									BgL_arg1833z00_4624,
																									BgL_oldez00_4444, BEOA);
																							}
																							return
																								BGl_localiza7eza7zz__evobjectz00
																								(BgL_xz00_4448,
																								BgL_arg1832z00_4623);
																						}
																				}
																			}
																		}
																	else
																		{	/* Eval/evobject.scm 607 */
																			return
																				PROCEDURE_ENTRY(BgL_oldez00_4444)
																				(BgL_oldez00_4444, BgL_xz00_4448,
																				BgL_ez00_4449, BEOA);
																		}
																}
															else
																{	/* Eval/evobject.scm 607 */
																	return
																		PROCEDURE_ENTRY(BgL_oldez00_4444)
																		(BgL_oldez00_4444, BgL_xz00_4448,
																		BgL_ez00_4449, BEOA);
																}
														}
													else
														{	/* Eval/evobject.scm 607 */
															return
																PROCEDURE_ENTRY(BgL_oldez00_4444)
																(BgL_oldez00_4444, BgL_xz00_4448, BgL_ez00_4449,
																BEOA);
														}
												}
											else
												{	/* Eval/evobject.scm 607 */
													return
														PROCEDURE_ENTRY(BgL_oldez00_4444) (BgL_oldez00_4444,
														BgL_xz00_4448, BgL_ez00_4449, BEOA);
												}
										}
									else
										{	/* Eval/evobject.scm 607 */
											return
												PROCEDURE_ENTRY(BgL_oldez00_4444) (BgL_oldez00_4444,
												BgL_xz00_4448, BgL_ez00_4449, BEOA);
										}
								}
							else
								{	/* Eval/evobject.scm 607 */
									return
										PROCEDURE_ENTRY(BgL_oldez00_4444) (BgL_oldez00_4444,
										BgL_xz00_4448, BgL_ez00_4449, BEOA);
								}
						}
				}
			}
		}

	}



/* eval-parse-class-slot */
	obj_t BGl_evalzd2parsezd2classzd2slotzd2zz__evobjectz00(obj_t BgL_locz00_108,
		obj_t BgL_fz00_109)
	{
		{	/* Eval/evobject.scm 628 */
			if (SYMBOLP(BgL_fz00_109))
				{	/* Eval/evobject.scm 631 */
					obj_t BgL_idz00_2013;

					BgL_idz00_2013 =
						BGl_decomposezd2identzd2zz__evobjectz00(BgL_fz00_109);
					{	/* Eval/evobject.scm 632 */
						obj_t BgL_typez00_2014;

						{	/* Eval/evobject.scm 633 */
							int BgL_tmpz00_5996;

							BgL_tmpz00_5996 = (int) (((long) 1));
							BgL_typez00_2014 = BGL_MVALUES_VAL(BgL_tmpz00_5996);
						}
						{	/* Eval/evobject.scm 633 */
							obj_t BgL_arg1855z00_2015;

							{	/* Eval/evobject.scm 633 */
								obj_t BgL_arg1857z00_2017;

								if (CBOOL(BgL_typez00_2014))
									{	/* Eval/evobject.scm 633 */
										obj_t BgL__ortest_1045z00_2018;

										BgL__ortest_1045z00_2018 =
											BGl_classzd2existszd2zz__objectz00(BgL_typez00_2014);
										if (CBOOL(BgL__ortest_1045z00_2018))
											{	/* Eval/evobject.scm 633 */
												BgL_arg1857z00_2017 = BgL__ortest_1045z00_2018;
											}
										else
											{	/* Eval/evobject.scm 633 */
												BgL_arg1857z00_2017 = BgL_typez00_2014;
											}
									}
								else
									{	/* Eval/evobject.scm 633 */
										BgL_arg1857z00_2017 = BGl_symbol2696z00zz__evobjectz00;
									}
								{	/* Eval/evobject.scm 80 */
									obj_t BgL_newz00_3722;

									BgL_newz00_3722 =
										create_struct(BGl_symbol2698z00zz__evobjectz00,
										(int) (((long) 8)));
									{	/* Eval/evobject.scm 80 */
										int BgL_tmpz00_6006;

										BgL_tmpz00_6006 = (int) (((long) 7));
										STRUCT_SET(BgL_newz00_3722, BgL_tmpz00_6006, BFALSE);
									}
									{	/* Eval/evobject.scm 80 */
										int BgL_tmpz00_6009;

										BgL_tmpz00_6009 = (int) (((long) 6));
										STRUCT_SET(BgL_newz00_3722, BgL_tmpz00_6009, BFALSE);
									}
									{	/* Eval/evobject.scm 80 */
										int BgL_tmpz00_6012;

										BgL_tmpz00_6012 = (int) (((long) 5));
										STRUCT_SET(BgL_newz00_3722, BgL_tmpz00_6012, BFALSE);
									}
									{	/* Eval/evobject.scm 80 */
										obj_t BgL_auxz00_6017;
										int BgL_tmpz00_6015;

										BgL_auxz00_6017 = BINT(((long) 0));
										BgL_tmpz00_6015 = (int) (((long) 4));
										STRUCT_SET(BgL_newz00_3722, BgL_tmpz00_6015,
											BgL_auxz00_6017);
									}
									{	/* Eval/evobject.scm 80 */
										int BgL_tmpz00_6020;

										BgL_tmpz00_6020 = (int) (((long) 3));
										STRUCT_SET(BgL_newz00_3722, BgL_tmpz00_6020, BFALSE);
									}
									{	/* Eval/evobject.scm 80 */
										int BgL_tmpz00_6023;

										BgL_tmpz00_6023 = (int) (((long) 2));
										STRUCT_SET(BgL_newz00_3722, BgL_tmpz00_6023, BFALSE);
									}
									{	/* Eval/evobject.scm 80 */
										int BgL_tmpz00_6026;

										BgL_tmpz00_6026 = (int) (((long) 1));
										STRUCT_SET(BgL_newz00_3722, BgL_tmpz00_6026,
											BgL_arg1857z00_2017);
									}
									{	/* Eval/evobject.scm 80 */
										int BgL_tmpz00_6029;

										BgL_tmpz00_6029 = (int) (((long) 0));
										STRUCT_SET(BgL_newz00_3722, BgL_tmpz00_6029,
											BgL_idz00_2013);
									}
									BgL_arg1855z00_2015 = BgL_newz00_3722;
							}}
							{	/* Eval/evobject.scm 633 */
								obj_t BgL_list1856z00_2016;

								BgL_list1856z00_2016 =
									MAKE_YOUNG_PAIR(BgL_arg1855z00_2015, BNIL);
								return BgL_list1856z00_2016;
							}
						}
					}
				}
			else
				{	/* Eval/evobject.scm 635 */
					bool_t BgL_test2937z00_6033;

					if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_fz00_109))
						{	/* Eval/evobject.scm 635 */
							obj_t BgL_tmpz00_6036;

							BgL_tmpz00_6036 = CAR(((obj_t) BgL_fz00_109));
							BgL_test2937z00_6033 = SYMBOLP(BgL_tmpz00_6036);
						}
					else
						{	/* Eval/evobject.scm 635 */
							BgL_test2937z00_6033 = ((bool_t) 0);
						}
					if (BgL_test2937z00_6033)
						{	/* Eval/evobject.scm 639 */
							obj_t BgL_idz00_2022;
							obj_t BgL_attrsz00_2023;

							BgL_idz00_2022 = CAR(((obj_t) BgL_fz00_109));
							BgL_attrsz00_2023 = CDR(((obj_t) BgL_fz00_109));
							{	/* Eval/evobject.scm 641 */
								obj_t BgL_idz00_2024;

								BgL_idz00_2024 =
									BGl_decomposezd2identzd2zz__evobjectz00(BgL_idz00_2022);
								{	/* Eval/evobject.scm 642 */
									obj_t BgL_typez00_2025;

									{	/* Eval/evobject.scm 643 */
										int BgL_tmpz00_6045;

										BgL_tmpz00_6045 = (int) (((long) 1));
										BgL_typez00_2025 = BGL_MVALUES_VAL(BgL_tmpz00_6045);
									}
									{	/* Eval/evobject.scm 643 */
										obj_t BgL_defz00_2026;
										obj_t BgL_getz00_2027;
										obj_t BgL_setz00_2028;
										obj_t BgL_infoz00_2029;
										bool_t BgL_ronlyz00_2030;

										BgL_defz00_2026 = BFALSE;
										BgL_getz00_2027 = BFALSE;
										BgL_setz00_2028 = BFALSE;
										BgL_infoz00_2029 = BFALSE;
										BgL_ronlyz00_2030 = ((bool_t) 0);
										{
											obj_t BgL_l1134z00_2032;

											BgL_l1134z00_2032 = BgL_attrsz00_2023;
										BgL_zc3z04anonymousza31861ze3z87_2033:
											if (PAIRP(BgL_l1134z00_2032))
												{	/* Eval/evobject.scm 648 */
													{	/* Eval/evobject.scm 650 */
														obj_t BgL_attrz00_2035;

														BgL_attrz00_2035 = CAR(BgL_l1134z00_2032);
														if (
															(BgL_attrz00_2035 ==
																BGl_symbol2700z00zz__evobjectz00))
															{	/* Eval/evobject.scm 650 */
																BgL_ronlyz00_2030 = ((bool_t) 1);
															}
														else
															{
																obj_t BgL_exprz00_2041;
																obj_t BgL_exprz00_2039;

																if (PAIRP(BgL_attrz00_2035))
																	{	/* Eval/evobject.scm 653 */
																		obj_t BgL_cdrzd2216zd2_2048;

																		BgL_cdrzd2216zd2_2048 =
																			CDR(BgL_attrz00_2035);
																		if (
																			(CAR(BgL_attrz00_2035) ==
																				BGl_symbol2704z00zz__evobjectz00))
																			{	/* Eval/evobject.scm 653 */
																				if (PAIRP(BgL_cdrzd2216zd2_2048))
																					{	/* Eval/evobject.scm 653 */
																						if (NULLP(CDR
																								(BgL_cdrzd2216zd2_2048)))
																							{	/* Eval/evobject.scm 653 */
																								obj_t BgL_arg1870z00_2054;

																								BgL_arg1870z00_2054 =
																									CAR(BgL_cdrzd2216zd2_2048);
																								BgL_infoz00_2029 =
																									BgL_arg1870z00_2054;
																							}
																						else
																							{	/* Eval/evobject.scm 653 */
																							BgL_tagzd2210zd2_2045:
																								{	/* Eval/evobject.scm 673 */
																									obj_t BgL_arg1916z00_2104;

																									{	/* Eval/evobject.scm 673 */
																										obj_t
																											BgL__ortest_1047z00_2105;
																										BgL__ortest_1047z00_2105 =
																											BGl_getzd2sourcezd2locationz00zz__readerz00
																											(BgL_fz00_109);
																										if (CBOOL
																											(BgL__ortest_1047z00_2105))
																											{	/* Eval/evobject.scm 673 */
																												BgL_arg1916z00_2104 =
																													BgL__ortest_1047z00_2105;
																											}
																										else
																											{	/* Eval/evobject.scm 673 */
																												BgL_arg1916z00_2104 =
																													BgL_locz00_108;
																											}
																									}
																									BGl_evcompilezd2errorzd2zz__evcompilez00
																										(BgL_arg1916z00_2104,
																										BGl_string2702z00zz__evobjectz00,
																										BGl_string2703z00zz__evobjectz00,
																										BgL_fz00_109);
																								}
																							}
																					}
																				else
																					{	/* Eval/evobject.scm 653 */
																						goto BgL_tagzd2210zd2_2045;
																					}
																			}
																		else
																			{	/* Eval/evobject.scm 653 */
																				if (
																					(CAR(BgL_attrz00_2035) ==
																						BGl_symbol2706z00zz__evobjectz00))
																					{	/* Eval/evobject.scm 653 */
																						if (PAIRP(BgL_cdrzd2216zd2_2048))
																							{	/* Eval/evobject.scm 653 */
																								if (NULLP(CDR
																										(BgL_cdrzd2216zd2_2048)))
																									{	/* Eval/evobject.scm 653 */
																										BgL_exprz00_2039 =
																											CAR
																											(BgL_cdrzd2216zd2_2048);
																										if (SYMBOLP
																											(BgL_exprz00_2039))
																											{	/* Eval/evobject.scm 658 */
																												obj_t BgL_oz00_2085;

																												{	/* Eval/evobject.scm 658 */

																													{	/* Eval/evobject.scm 658 */

																														BgL_oz00_2085 =
																															BGl_gensymz00zz__r4_symbols_6_4z00
																															(BFALSE);
																													}
																												}
																												{	/* Eval/evobject.scm 659 */
																													obj_t
																														BgL_arg1903z00_2086;
																													{	/* Eval/evobject.scm 659 */
																														obj_t
																															BgL_arg1904z00_2087;
																														obj_t
																															BgL_arg1905z00_2088;
																														BgL_arg1904z00_2087
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_oz00_2085,
																															BNIL);
																														{	/* Eval/evobject.scm 660 */
																															obj_t
																																BgL_arg1906z00_2089;
																															{	/* Eval/evobject.scm 660 */
																																obj_t
																																	BgL_arg1907z00_2090;
																																BgL_arg1907z00_2090
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_oz00_2085,
																																	BNIL);
																																BgL_arg1906z00_2089
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_exprz00_2039,
																																	BgL_arg1907z00_2090);
																															}
																															BgL_arg1905z00_2088
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1906z00_2089,
																																BNIL);
																														}
																														BgL_arg1903z00_2086
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1904z00_2087,
																															BgL_arg1905z00_2088);
																													}
																													BgL_getz00_2027 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol2633z00zz__evobjectz00,
																														BgL_arg1903z00_2086);
																												}
																											}
																										else
																											{	/* Eval/evobject.scm 657 */
																												BgL_getz00_2027 =
																													BgL_exprz00_2039;
																											}
																									}
																								else
																									{	/* Eval/evobject.scm 653 */
																										goto BgL_tagzd2210zd2_2045;
																									}
																							}
																						else
																							{	/* Eval/evobject.scm 653 */
																								goto BgL_tagzd2210zd2_2045;
																							}
																					}
																				else
																					{	/* Eval/evobject.scm 653 */
																						obj_t BgL_cdrzd2252zd2_2064;

																						BgL_cdrzd2252zd2_2064 =
																							CDR(BgL_attrz00_2035);
																						if (
																							(CAR(BgL_attrz00_2035) ==
																								BGl_symbol2708z00zz__evobjectz00))
																							{	/* Eval/evobject.scm 653 */
																								if (PAIRP
																									(BgL_cdrzd2252zd2_2064))
																									{	/* Eval/evobject.scm 653 */
																										if (NULLP(CDR
																												(BgL_cdrzd2252zd2_2064)))
																											{	/* Eval/evobject.scm 653 */
																												BgL_exprz00_2041 =
																													CAR
																													(BgL_cdrzd2252zd2_2064);
																												if (SYMBOLP
																													(BgL_exprz00_2041))
																													{	/* Eval/evobject.scm 664 */
																														obj_t BgL_oz00_2093;
																														obj_t BgL_vz00_2094;

																														{	/* Eval/evobject.scm 664 */

																															{	/* Eval/evobject.scm 664 */

																																BgL_oz00_2093 =
																																	BGl_gensymz00zz__r4_symbols_6_4z00
																																	(BFALSE);
																															}
																														}
																														{	/* Eval/evobject.scm 665 */

																															{	/* Eval/evobject.scm 665 */

																																BgL_vz00_2094 =
																																	BGl_gensymz00zz__r4_symbols_6_4z00
																																	(BFALSE);
																															}
																														}
																														{	/* Eval/evobject.scm 666 */
																															obj_t
																																BgL_arg1909z00_2095;
																															{	/* Eval/evobject.scm 666 */
																																obj_t
																																	BgL_arg1910z00_2096;
																																obj_t
																																	BgL_arg1911z00_2097;
																																{	/* Eval/evobject.scm 666 */
																																	obj_t
																																		BgL_arg1912z00_2098;
																																	BgL_arg1912z00_2098
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_vz00_2094,
																																		BNIL);
																																	BgL_arg1910z00_2096
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_oz00_2093,
																																		BgL_arg1912z00_2098);
																																}
																																{	/* Eval/evobject.scm 667 */
																																	obj_t
																																		BgL_arg1913z00_2099;
																																	{	/* Eval/evobject.scm 667 */
																																		obj_t
																																			BgL_arg1914z00_2100;
																																		{	/* Eval/evobject.scm 667 */
																																			obj_t
																																				BgL_arg1915z00_2101;
																																			BgL_arg1915z00_2101
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_vz00_2094,
																																				BNIL);
																																			BgL_arg1914z00_2100
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_oz00_2093,
																																				BgL_arg1915z00_2101);
																																		}
																																		BgL_arg1913z00_2099
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_exprz00_2041,
																																			BgL_arg1914z00_2100);
																																	}
																																	BgL_arg1911z00_2097
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1913z00_2099,
																																		BNIL);
																																}
																																BgL_arg1909z00_2095
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1910z00_2096,
																																	BgL_arg1911z00_2097);
																															}
																															BgL_setz00_2028 =
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2633z00zz__evobjectz00,
																																BgL_arg1909z00_2095);
																														}
																													}
																												else
																													{	/* Eval/evobject.scm 663 */
																														BgL_setz00_2028 =
																															BgL_exprz00_2041;
																													}
																											}
																										else
																											{	/* Eval/evobject.scm 653 */
																												goto
																													BgL_tagzd2210zd2_2045;
																											}
																									}
																								else
																									{	/* Eval/evobject.scm 653 */
																										goto BgL_tagzd2210zd2_2045;
																									}
																							}
																						else
																							{	/* Eval/evobject.scm 653 */
																								if (
																									(CAR(BgL_attrz00_2035) ==
																										BGl_symbol2710z00zz__evobjectz00))
																									{	/* Eval/evobject.scm 653 */
																										if (PAIRP
																											(BgL_cdrzd2252zd2_2064))
																											{	/* Eval/evobject.scm 653 */
																												if (NULLP(CDR
																														(BgL_cdrzd2252zd2_2064)))
																													{	/* Eval/evobject.scm 653 */
																														obj_t
																															BgL_arg1893z00_2078;
																														BgL_arg1893z00_2078
																															=
																															CAR
																															(BgL_cdrzd2252zd2_2064);
																														BgL_defz00_2026 =
																															BgL_arg1893z00_2078;
																													}
																												else
																													{	/* Eval/evobject.scm 653 */
																														goto
																															BgL_tagzd2210zd2_2045;
																													}
																											}
																										else
																											{	/* Eval/evobject.scm 653 */
																												goto
																													BgL_tagzd2210zd2_2045;
																											}
																									}
																								else
																									{	/* Eval/evobject.scm 653 */
																										goto BgL_tagzd2210zd2_2045;
																									}
																							}
																					}
																			}
																	}
																else
																	{	/* Eval/evobject.scm 653 */
																		goto BgL_tagzd2210zd2_2045;
																	}
															}
													}
													{
														obj_t BgL_l1134z00_6118;

														BgL_l1134z00_6118 = CDR(BgL_l1134z00_2032);
														BgL_l1134z00_2032 = BgL_l1134z00_6118;
														goto BgL_zc3z04anonymousza31861ze3z87_2033;
													}
												}
											else
												{	/* Eval/evobject.scm 648 */
													((bool_t) 1);
												}
										}
										{	/* Eval/evobject.scm 677 */
											bool_t BgL_test2957z00_6120;

											if (CBOOL(BgL_getz00_2027))
												{	/* Eval/evobject.scm 677 */
													if (BgL_ronlyz00_2030)
														{	/* Eval/evobject.scm 677 */
															BgL_test2957z00_6120 = ((bool_t) 0);
														}
													else
														{	/* Eval/evobject.scm 677 */
															if (CBOOL(BgL_setz00_2028))
																{	/* Eval/evobject.scm 677 */
																	BgL_test2957z00_6120 = ((bool_t) 0);
																}
															else
																{	/* Eval/evobject.scm 677 */
																	BgL_test2957z00_6120 = ((bool_t) 1);
																}
														}
												}
											else
												{	/* Eval/evobject.scm 677 */
													BgL_test2957z00_6120 = ((bool_t) 0);
												}
											if (BgL_test2957z00_6120)
												{	/* Eval/evobject.scm 679 */
													obj_t BgL_arg1919z00_2109;

													{	/* Eval/evobject.scm 679 */
														obj_t BgL__ortest_1048z00_2110;

														BgL__ortest_1048z00_2110 =
															BGl_getzd2sourcezd2locationz00zz__readerz00
															(BgL_fz00_109);
														if (CBOOL(BgL__ortest_1048z00_2110))
															{	/* Eval/evobject.scm 679 */
																BgL_arg1919z00_2109 = BgL__ortest_1048z00_2110;
															}
														else
															{	/* Eval/evobject.scm 679 */
																BgL_arg1919z00_2109 = BgL_locz00_108;
															}
													}
													return
														BGl_evcompilezd2errorzd2zz__evcompilez00
														(BgL_arg1919z00_2109,
														BGl_string2702z00zz__evobjectz00,
														BGl_string2712z00zz__evobjectz00, BgL_fz00_109);
												}
											else
												{	/* Eval/evobject.scm 681 */
													bool_t BgL_test2962z00_6130;

													if (CBOOL(BgL_setz00_2028))
														{	/* Eval/evobject.scm 681 */
															if (CBOOL(BgL_getz00_2027))
																{	/* Eval/evobject.scm 681 */
																	BgL_test2962z00_6130 = ((bool_t) 0);
																}
															else
																{	/* Eval/evobject.scm 681 */
																	BgL_test2962z00_6130 = ((bool_t) 1);
																}
														}
													else
														{	/* Eval/evobject.scm 681 */
															BgL_test2962z00_6130 = ((bool_t) 0);
														}
													if (BgL_test2962z00_6130)
														{	/* Eval/evobject.scm 683 */
															obj_t BgL_arg1921z00_2112;

															{	/* Eval/evobject.scm 683 */
																obj_t BgL__ortest_1049z00_2113;

																BgL__ortest_1049z00_2113 =
																	BGl_getzd2sourcezd2locationz00zz__readerz00
																	(BgL_fz00_109);
																if (CBOOL(BgL__ortest_1049z00_2113))
																	{	/* Eval/evobject.scm 683 */
																		BgL_arg1921z00_2112 =
																			BgL__ortest_1049z00_2113;
																	}
																else
																	{	/* Eval/evobject.scm 683 */
																		BgL_arg1921z00_2112 = BgL_locz00_108;
																	}
															}
															return
																BGl_evcompilezd2errorzd2zz__evcompilez00
																(BgL_arg1921z00_2112,
																BGl_string2702z00zz__evobjectz00,
																BGl_string2713z00zz__evobjectz00, BgL_fz00_109);
														}
													else
														{	/* Eval/evobject.scm 686 */
															obj_t BgL_sz00_2114;

															{	/* Eval/evobject.scm 687 */
																obj_t BgL_arg1923z00_2116;

																if (CBOOL(BgL_typez00_2025))
																	{	/* Eval/evobject.scm 687 */
																		obj_t BgL__ortest_1050z00_2117;

																		BgL__ortest_1050z00_2117 =
																			BGl_classzd2existszd2zz__objectz00
																			(BgL_typez00_2025);
																		if (CBOOL(BgL__ortest_1050z00_2117))
																			{	/* Eval/evobject.scm 687 */
																				BgL_arg1923z00_2116 =
																					BgL__ortest_1050z00_2117;
																			}
																		else
																			{	/* Eval/evobject.scm 687 */
																				BgL_arg1923z00_2116 = BgL_typez00_2025;
																			}
																	}
																else
																	{	/* Eval/evobject.scm 687 */
																		BgL_arg1923z00_2116 =
																			BGl_symbol2696z00zz__evobjectz00;
																	}
																{	/* Eval/evobject.scm 686 */
																	bool_t BgL_readzd2onlyzf3z21_3766;
																	obj_t BgL_defaultzd2valuezd2_3767;
																	obj_t BgL_getterz00_3768;
																	obj_t BgL_setterz00_3769;
																	obj_t BgL_userzd2infozd2_3770;

																	BgL_readzd2onlyzf3z21_3766 =
																		BgL_ronlyz00_2030;
																	BgL_defaultzd2valuezd2_3767 = BgL_defz00_2026;
																	BgL_getterz00_3768 = BgL_getz00_2027;
																	BgL_setterz00_3769 = BgL_setz00_2028;
																	BgL_userzd2infozd2_3770 = BgL_infoz00_2029;
																	{	/* Eval/evobject.scm 80 */
																		obj_t BgL_newz00_3771;

																		BgL_newz00_3771 =
																			create_struct
																			(BGl_symbol2698z00zz__evobjectz00,
																			(int) (((long) 8)));
																		{	/* Eval/evobject.scm 80 */
																			int BgL_tmpz00_6146;

																			BgL_tmpz00_6146 = (int) (((long) 7));
																			STRUCT_SET(BgL_newz00_3771,
																				BgL_tmpz00_6146,
																				BgL_userzd2infozd2_3770);
																		}
																		{	/* Eval/evobject.scm 80 */
																			int BgL_tmpz00_6149;

																			BgL_tmpz00_6149 = (int) (((long) 6));
																			STRUCT_SET(BgL_newz00_3771,
																				BgL_tmpz00_6149, BgL_setterz00_3769);
																		}
																		{	/* Eval/evobject.scm 80 */
																			int BgL_tmpz00_6152;

																			BgL_tmpz00_6152 = (int) (((long) 5));
																			STRUCT_SET(BgL_newz00_3771,
																				BgL_tmpz00_6152, BgL_getterz00_3768);
																		}
																		{	/* Eval/evobject.scm 80 */
																			obj_t BgL_auxz00_6157;
																			int BgL_tmpz00_6155;

																			BgL_auxz00_6157 = BINT(((long) 0));
																			BgL_tmpz00_6155 = (int) (((long) 4));
																			STRUCT_SET(BgL_newz00_3771,
																				BgL_tmpz00_6155, BgL_auxz00_6157);
																		}
																		{	/* Eval/evobject.scm 80 */
																			int BgL_tmpz00_6160;

																			BgL_tmpz00_6160 = (int) (((long) 3));
																			STRUCT_SET(BgL_newz00_3771,
																				BgL_tmpz00_6160,
																				BgL_defaultzd2valuezd2_3767);
																		}
																		{	/* Eval/evobject.scm 80 */
																			obj_t BgL_auxz00_6165;
																			int BgL_tmpz00_6163;

																			BgL_auxz00_6165 =
																				BBOOL(BgL_readzd2onlyzf3z21_3766);
																			BgL_tmpz00_6163 = (int) (((long) 2));
																			STRUCT_SET(BgL_newz00_3771,
																				BgL_tmpz00_6163, BgL_auxz00_6165);
																		}
																		{	/* Eval/evobject.scm 80 */
																			int BgL_tmpz00_6168;

																			BgL_tmpz00_6168 = (int) (((long) 1));
																			STRUCT_SET(BgL_newz00_3771,
																				BgL_tmpz00_6168, BgL_arg1923z00_2116);
																		}
																		{	/* Eval/evobject.scm 80 */
																			int BgL_tmpz00_6171;

																			BgL_tmpz00_6171 = (int) (((long) 0));
																			STRUCT_SET(BgL_newz00_3771,
																				BgL_tmpz00_6171, BgL_idz00_2024);
																		}
																		BgL_sz00_2114 = BgL_newz00_3771;
															}}}
															{	/* Eval/evobject.scm 689 */
																obj_t BgL_list1922z00_2115;

																BgL_list1922z00_2115 =
																	MAKE_YOUNG_PAIR(BgL_sz00_2114, BNIL);
																return BgL_list1922z00_2115;
															}
														}
												}
										}
									}
								}
							}
						}
					else
						{	/* Eval/evobject.scm 636 */
							obj_t BgL_arg1924z00_2118;

							{	/* Eval/evobject.scm 636 */
								obj_t BgL__ortest_1046z00_2119;

								BgL__ortest_1046z00_2119 =
									BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_fz00_109);
								if (CBOOL(BgL__ortest_1046z00_2119))
									{	/* Eval/evobject.scm 636 */
										BgL_arg1924z00_2118 = BgL__ortest_1046z00_2119;
									}
								else
									{	/* Eval/evobject.scm 636 */
										BgL_arg1924z00_2118 = BgL_locz00_108;
									}
							}
							return
								BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_arg1924z00_2118,
								BGl_string2702z00zz__evobjectz00,
								BGl_string2703z00zz__evobjectz00, BgL_fz00_109);
						}
				}
		}

	}



/* eval-parse-class */
	obj_t BGl_evalzd2parsezd2classz00zz__evobjectz00(obj_t BgL_locz00_110,
		obj_t BgL_clausesz00_111)
	{
		{	/* Eval/evobject.scm 697 */
			{	/* Eval/evobject.scm 698 */
				obj_t BgL_locz00_2122;

				{	/* Eval/evobject.scm 698 */
					obj_t BgL__ortest_1051z00_2218;

					BgL__ortest_1051z00_2218 =
						BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_clausesz00_111);
					if (CBOOL(BgL__ortest_1051z00_2218))
						{	/* Eval/evobject.scm 698 */
							BgL_locz00_2122 = BgL__ortest_1051z00_2218;
						}
					else
						{	/* Eval/evobject.scm 698 */
							BgL_locz00_2122 = BgL_locz00_110;
						}
				}
				if (NULLP(BgL_clausesz00_111))
					{	/* Eval/evobject.scm 700 */
						{	/* Eval/evobject.scm 701 */
							int BgL_res2529z00_3782;

							{	/* Eval/evobject.scm 701 */
								int BgL_tmpz00_6184;

								BgL_tmpz00_6184 = (int) (((long) 2));
								BgL_res2529z00_3782 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_6184);
							} BgL_res2529z00_3782;
						}
						{	/* Eval/evobject.scm 701 */
							int BgL_tmpz00_6187;

							BgL_tmpz00_6187 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_tmpz00_6187, BNIL);
						}
						return BFALSE;
					}
				else
					{	/* Eval/evobject.scm 700 */
						if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_clausesz00_111))
							{	/* Eval/evobject.scm 705 */
								bool_t BgL_test2972z00_6192;

								{	/* Eval/evobject.scm 705 */
									obj_t BgL_ezd2277zd2_2210;

									BgL_ezd2277zd2_2210 = CAR(BgL_clausesz00_111);
									if (PAIRP(BgL_ezd2277zd2_2210))
										{	/* Eval/evobject.scm 705 */
											bool_t BgL_test2974z00_6196;

											{	/* Eval/evobject.scm 705 */
												obj_t BgL_tmpz00_6197;

												BgL_tmpz00_6197 = CAR(BgL_ezd2277zd2_2210);
												BgL_test2974z00_6196 = SYMBOLP(BgL_tmpz00_6197);
											}
											if (BgL_test2974z00_6196)
												{	/* Eval/evobject.scm 705 */
													BgL_test2972z00_6192 =
														NULLP(CDR(BgL_ezd2277zd2_2210));
												}
											else
												{	/* Eval/evobject.scm 705 */
													BgL_test2972z00_6192 = ((bool_t) 0);
												}
										}
									else
										{	/* Eval/evobject.scm 705 */
											BgL_test2972z00_6192 = ((bool_t) 0);
										}
								}
								if (BgL_test2972z00_6192)
									{	/* Eval/evobject.scm 708 */
										obj_t BgL_val0_1141z00_2138;
										obj_t BgL_val1_1142z00_2139;

										{	/* Eval/evobject.scm 708 */
											obj_t BgL_arg1936z00_2140;

											{	/* Eval/evobject.scm 708 */
												obj_t BgL_arg1937z00_2141;
												obj_t BgL_arg1938z00_2142;

												BgL_arg1937z00_2141 =
													MAKE_YOUNG_PAIR(BGl_symbol2714z00zz__evobjectz00,
													BNIL);
												{	/* Eval/evobject.scm 708 */
													obj_t BgL_arg1939z00_2143;

													{	/* Eval/evobject.scm 708 */
														obj_t BgL_arg1940z00_2144;
														obj_t BgL_arg1941z00_2145;

														BgL_arg1940z00_2144 = CAR(CAR(BgL_clausesz00_111));
														BgL_arg1941z00_2145 =
															MAKE_YOUNG_PAIR(BGl_symbol2714z00zz__evobjectz00,
															BNIL);
														BgL_arg1939z00_2143 =
															MAKE_YOUNG_PAIR(BgL_arg1940z00_2144,
															BgL_arg1941z00_2145);
													}
													BgL_arg1938z00_2142 =
														MAKE_YOUNG_PAIR(BgL_arg1939z00_2143, BNIL);
												}
												BgL_arg1936z00_2140 =
													MAKE_YOUNG_PAIR(BgL_arg1937z00_2141,
													BgL_arg1938z00_2142);
											}
											BgL_val0_1141z00_2138 =
												MAKE_YOUNG_PAIR(BGl_symbol2633z00zz__evobjectz00,
												BgL_arg1936z00_2140);
										}
										BgL_val1_1142z00_2139 =
											BGl_zc3z04anonymousza31942ze3ze70z60zz__evobjectz00
											(BgL_locz00_2122, CDR(BgL_clausesz00_111));
										{	/* Eval/evobject.scm 708 */
											int BgL_res2534z00_3797;

											{	/* Eval/evobject.scm 708 */
												int BgL_tmpz00_6212;

												BgL_tmpz00_6212 = (int) (((long) 2));
												BgL_res2534z00_3797 =
													BGL_MVALUES_NUMBER_SET(BgL_tmpz00_6212);
											} BgL_res2534z00_3797;
										}
										{	/* Eval/evobject.scm 708 */
											int BgL_tmpz00_6215;

											BgL_tmpz00_6215 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_tmpz00_6215,
												BgL_val1_1142z00_2139);
										}
										return BgL_val0_1141z00_2138;
									}
								else
									{	/* Eval/evobject.scm 712 */
										bool_t BgL_test2975z00_6218;

										{	/* Eval/evobject.scm 712 */
											obj_t BgL_ezd2282zd2_2200;

											BgL_ezd2282zd2_2200 = CAR(BgL_clausesz00_111);
											if (PAIRP(BgL_ezd2282zd2_2200))
												{	/* Eval/evobject.scm 712 */
													obj_t BgL_carzd2283zd2_2202;

													BgL_carzd2283zd2_2202 = CAR(BgL_ezd2282zd2_2200);
													if (PAIRP(BgL_carzd2283zd2_2202))
														{	/* Eval/evobject.scm 712 */
															if (
																(CAR(BgL_carzd2283zd2_2202) ==
																	BGl_symbol2633z00zz__evobjectz00))
																{	/* Eval/evobject.scm 712 */
																	BgL_test2975z00_6218 =
																		NULLP(CDR(BgL_ezd2282zd2_2200));
																}
															else
																{	/* Eval/evobject.scm 712 */
																	BgL_test2975z00_6218 = ((bool_t) 0);
																}
														}
													else
														{	/* Eval/evobject.scm 712 */
															BgL_test2975z00_6218 = ((bool_t) 0);
														}
												}
											else
												{	/* Eval/evobject.scm 712 */
													BgL_test2975z00_6218 = ((bool_t) 0);
												}
										}
										if (BgL_test2975z00_6218)
											{	/* Eval/evobject.scm 715 */
												obj_t BgL_val0_1146z00_2169;
												obj_t BgL_val1_1147z00_2170;

												{	/* Eval/evobject.scm 715 */
													obj_t BgL_arg1956z00_2171;

													{	/* Eval/evobject.scm 715 */
														obj_t BgL_arg1957z00_2172;
														obj_t BgL_arg1958z00_2173;

														BgL_arg1957z00_2172 =
															MAKE_YOUNG_PAIR(BGl_symbol2714z00zz__evobjectz00,
															BNIL);
														{	/* Eval/evobject.scm 715 */
															obj_t BgL_arg1959z00_2174;

															{	/* Eval/evobject.scm 715 */
																obj_t BgL_arg1960z00_2175;
																obj_t BgL_arg1961z00_2176;

																BgL_arg1960z00_2175 =
																	CAR(CAR(BgL_clausesz00_111));
																BgL_arg1961z00_2176 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol2714z00zz__evobjectz00, BNIL);
																BgL_arg1959z00_2174 =
																	MAKE_YOUNG_PAIR(BgL_arg1960z00_2175,
																	BgL_arg1961z00_2176);
															}
															BgL_arg1958z00_2173 =
																MAKE_YOUNG_PAIR(BgL_arg1959z00_2174, BNIL);
														}
														BgL_arg1956z00_2171 =
															MAKE_YOUNG_PAIR(BgL_arg1957z00_2172,
															BgL_arg1958z00_2173);
													}
													BgL_val0_1146z00_2169 =
														MAKE_YOUNG_PAIR(BGl_symbol2633z00zz__evobjectz00,
														BgL_arg1956z00_2171);
												}
												BgL_val1_1147z00_2170 =
													BGl_zc3z04anonymousza31962ze3ze70z60zz__evobjectz00
													(BgL_locz00_2122, CDR(BgL_clausesz00_111));
												{	/* Eval/evobject.scm 715 */
													int BgL_res2539z00_3813;

													{	/* Eval/evobject.scm 715 */
														int BgL_tmpz00_6240;

														BgL_tmpz00_6240 = (int) (((long) 2));
														BgL_res2539z00_3813 =
															BGL_MVALUES_NUMBER_SET(BgL_tmpz00_6240);
													} BgL_res2539z00_3813;
												}
												{	/* Eval/evobject.scm 715 */
													int BgL_tmpz00_6243;

													BgL_tmpz00_6243 = (int) (((long) 1));
													BGL_MVALUES_VAL_SET(BgL_tmpz00_6243,
														BgL_val1_1147z00_2170);
												}
												return BgL_val0_1146z00_2169;
											}
										else
											{	/* Eval/evobject.scm 720 */
												obj_t BgL_val1_1151z00_2188;

												BgL_val1_1151z00_2188 =
													BGl_zc3z04anonymousza31967ze3ze70z60zz__evobjectz00
													(BgL_locz00_2122, BgL_clausesz00_111);
												{	/* Eval/evobject.scm 720 */
													int BgL_res2541z00_3817;

													{	/* Eval/evobject.scm 720 */
														int BgL_tmpz00_6247;

														BgL_tmpz00_6247 = (int) (((long) 2));
														BgL_res2541z00_3817 =
															BGL_MVALUES_NUMBER_SET(BgL_tmpz00_6247);
													} BgL_res2541z00_3817;
												}
												{	/* Eval/evobject.scm 720 */
													int BgL_tmpz00_6250;

													BgL_tmpz00_6250 = (int) (((long) 1));
													BGL_MVALUES_VAL_SET(BgL_tmpz00_6250,
														BgL_val1_1151z00_2188);
												}
												return BFALSE;
											}
									}
							}
						else
							{	/* Eval/evobject.scm 703 */
								obj_t BgL_arg1976z00_2216;

								{	/* Eval/evobject.scm 703 */
									obj_t BgL__ortest_1052z00_2217;

									BgL__ortest_1052z00_2217 =
										BGl_getzd2sourcezd2locationz00zz__readerz00
										(BgL_clausesz00_111);
									if (CBOOL(BgL__ortest_1052z00_2217))
										{	/* Eval/evobject.scm 703 */
											BgL_arg1976z00_2216 = BgL__ortest_1052z00_2217;
										}
									else
										{	/* Eval/evobject.scm 703 */
											BgL_arg1976z00_2216 = BgL_locz00_2122;
										}
								}
								return
									BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_arg1976z00_2216,
									BGl_string2702z00zz__evobjectz00,
									BGl_string2716z00zz__evobjectz00, BgL_clausesz00_111);
							}
					}
			}
		}

	}



/* <@anonymous:1967>~0 */
	obj_t BGl_zc3z04anonymousza31967ze3ze70z60zz__evobjectz00(obj_t
		BgL_locz00_4460, obj_t BgL_l1149z00_2190)
	{
		{	/* Eval/evobject.scm 721 */
			if (NULLP(BgL_l1149z00_2190))
				{	/* Eval/evobject.scm 721 */
					return BNIL;
				}
			else
				{	/* Eval/evobject.scm 722 */
					obj_t BgL_arg1969z00_2193;
					obj_t BgL_arg1970z00_2194;

					{	/* Eval/evobject.scm 722 */
						obj_t BgL_fz00_2195;

						BgL_fz00_2195 = CAR(((obj_t) BgL_l1149z00_2190));
						BgL_arg1969z00_2193 =
							BGl_evalzd2parsezd2classzd2slotzd2zz__evobjectz00(BgL_locz00_4460,
							BgL_fz00_2195);
					}
					{	/* Eval/evobject.scm 721 */
						obj_t BgL_arg1971z00_2196;

						BgL_arg1971z00_2196 = CDR(((obj_t) BgL_l1149z00_2190));
						BgL_arg1970z00_2194 =
							BGl_zc3z04anonymousza31967ze3ze70z60zz__evobjectz00
							(BgL_locz00_4460, BgL_arg1971z00_2196);
					}
					return bgl_append2(BgL_arg1969z00_2193, BgL_arg1970z00_2194);
				}
		}

	}



/* <@anonymous:1962>~0 */
	obj_t BGl_zc3z04anonymousza31962ze3ze70z60zz__evobjectz00(obj_t
		BgL_locz00_4461, obj_t BgL_l1144z00_2179)
	{
		{	/* Eval/evobject.scm 718 */
			if (NULLP(BgL_l1144z00_2179))
				{	/* Eval/evobject.scm 718 */
					return BNIL;
				}
			else
				{	/* Eval/evobject.scm 717 */
					obj_t BgL_arg1964z00_2182;
					obj_t BgL_arg1965z00_2183;

					{	/* Eval/evobject.scm 717 */
						obj_t BgL_fz00_2184;

						BgL_fz00_2184 = CAR(((obj_t) BgL_l1144z00_2179));
						BgL_arg1964z00_2182 =
							BGl_evalzd2parsezd2classzd2slotzd2zz__evobjectz00(BgL_locz00_4461,
							BgL_fz00_2184);
					}
					{	/* Eval/evobject.scm 718 */
						obj_t BgL_arg1966z00_2185;

						BgL_arg1966z00_2185 = CDR(((obj_t) BgL_l1144z00_2179));
						BgL_arg1965z00_2183 =
							BGl_zc3z04anonymousza31962ze3ze70z60zz__evobjectz00
							(BgL_locz00_4461, BgL_arg1966z00_2185);
					}
					return bgl_append2(BgL_arg1964z00_2182, BgL_arg1965z00_2183);
				}
		}

	}



/* <@anonymous:1942>~0 */
	obj_t BGl_zc3z04anonymousza31942ze3ze70z60zz__evobjectz00(obj_t
		BgL_locz00_4462, obj_t BgL_l1139z00_2148)
	{
		{	/* Eval/evobject.scm 711 */
			if (NULLP(BgL_l1139z00_2148))
				{	/* Eval/evobject.scm 711 */
					return BNIL;
				}
			else
				{	/* Eval/evobject.scm 710 */
					obj_t BgL_arg1944z00_2151;
					obj_t BgL_arg1945z00_2152;

					{	/* Eval/evobject.scm 710 */
						obj_t BgL_fz00_2153;

						BgL_fz00_2153 = CAR(((obj_t) BgL_l1139z00_2148));
						BgL_arg1944z00_2151 =
							BGl_evalzd2parsezd2classzd2slotzd2zz__evobjectz00(BgL_locz00_4462,
							BgL_fz00_2153);
					}
					{	/* Eval/evobject.scm 711 */
						obj_t BgL_arg1946z00_2154;

						BgL_arg1946z00_2154 = CDR(((obj_t) BgL_l1139z00_2148));
						BgL_arg1945z00_2152 =
							BGl_zc3z04anonymousza31942ze3ze70z60zz__evobjectz00
							(BgL_locz00_4462, BgL_arg1946z00_2154);
					}
					return bgl_append2(BgL_arg1944z00_2151, BgL_arg1945z00_2152);
				}
		}

	}



/* eval-class */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2classzd2zz__evobjectz00(obj_t BgL_idz00_112,
		bool_t BgL_abstractz00_113, obj_t BgL_clausesz00_114, obj_t BgL_srcz00_115,
		obj_t BgL_modz00_116)
	{
		{	/* Eval/evobject.scm 728 */
			{	/* Eval/evobject.scm 729 */
				obj_t BgL_cidz00_2219;

				BgL_cidz00_2219 =
					BGl_decomposezd2identzd2zz__evobjectz00(BgL_idz00_112);
				{	/* Eval/evobject.scm 730 */
					obj_t BgL_sidz00_2220;

					{	/* Eval/evobject.scm 731 */
						int BgL_tmpz00_6285;

						BgL_tmpz00_6285 = (int) (((long) 1));
						BgL_sidz00_2220 = BGL_MVALUES_VAL(BgL_tmpz00_6285);
					}
					{	/* Eval/evobject.scm 731 */
						obj_t BgL_locz00_2221;

						BgL_locz00_2221 =
							BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_srcz00_115);
						{	/* Eval/evobject.scm 731 */
							obj_t BgL_sidz00_2222;

							if (CBOOL(BgL_sidz00_2220))
								{	/* Eval/evobject.scm 732 */
									BgL_sidz00_2222 = BgL_sidz00_2220;
								}
							else
								{	/* Eval/evobject.scm 732 */
									BgL_sidz00_2222 = BGl_symbol2717z00zz__evobjectz00;
								}
							{	/* Eval/evobject.scm 732 */
								obj_t BgL_superz00_2223;

								BgL_superz00_2223 =
									BGl_findzd2classzd2zz__objectz00(BgL_sidz00_2222);
								{	/* Eval/evobject.scm 733 */

									if (BGl_classzf3zf3zz__objectz00(BgL_superz00_2223))
										{	/* Eval/evobject.scm 736 */
											obj_t BgL_constructorz00_2225;

											BgL_constructorz00_2225 =
												BGl_evalzd2parsezd2classz00zz__evobjectz00
												(BgL_locz00_2221, BgL_clausesz00_114);
											{	/* Eval/evobject.scm 737 */
												obj_t BgL_slotsz00_2226;

												{	/* Eval/evobject.scm 739 */
													int BgL_tmpz00_6295;

													BgL_tmpz00_6295 = (int) (((long) 1));
													BgL_slotsz00_2226 = BGL_MVALUES_VAL(BgL_tmpz00_6295);
												}
												{	/* Eval/evobject.scm 739 */
													obj_t BgL_claza7za7z00_2227;

													BgL_claza7za7z00_2227 =
														BGl_evalzd2registerzd2classz00zz__evobjectz00
														(BgL_cidz00_2219, BgL_modz00_116, BgL_superz00_2223,
														BgL_abstractz00_113, BgL_slotsz00_2226,
														BGl_getzd2classzd2hashz00zz__evobjectz00
														(BgL_srcz00_115),
														BGl_evalz12z12zz__evalz00(BgL_constructorz00_2225,
															BgL_modz00_116));
													{	/* Eval/evobject.scm 739 */

														{	/* Eval/evobject.scm 744 */
															obj_t BgL_arg1979z00_2228;

															{	/* Eval/evobject.scm 744 */
																obj_t BgL_arg1980z00_2231;

																{	/* Eval/evobject.scm 744 */
																	obj_t BgL_arg1981z00_2232;

																	BgL_arg1981z00_2232 =
																		MAKE_YOUNG_PAIR(BgL_claza7za7z00_2227,
																		BNIL);
																	BgL_arg1980z00_2231 =
																		MAKE_YOUNG_PAIR(BgL_cidz00_2219,
																		BgL_arg1981z00_2232);
																}
																BgL_arg1979z00_2228 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol2719z00zz__evobjectz00,
																	BgL_arg1980z00_2231);
															}
															{	/* Eval/eval.scm 84 */
																obj_t BgL_envz00_2230;

																BgL_envz00_2230 =
																	BGl_defaultzd2environmentzd2zz__evalz00();
																{	/* Eval/eval.scm 84 */

																	BGl_evalz12z12zz__evalz00(BgL_arg1979z00_2228,
																		BgL_envz00_2230);
														}}}
														BGl_evalzd2expandzd2withzd2accesszd2zz__evobjectz00
															(BgL_claza7za7z00_2227);
														{	/* Eval/evobject.scm 749 */
															obj_t BgL_fieldsz00_2233;

															BgL_fieldsz00_2233 =
																BGl_classzd2fieldszd2zz__objectz00
																(BgL_claza7za7z00_2227);
															BGl_patchzd2fieldzd2defaultzd2valuesz12zc0zz__evobjectz00
																(BgL_slotsz00_2226, BgL_fieldsz00_2233,
																BgL_modz00_116);
															{	/* Eval/evobject.scm 753 */
																obj_t BgL_arg1982z00_2234;

																{	/* Eval/evobject.scm 753 */
																	obj_t BgL_res2542z00_3819;

																	BgL_res2542z00_3819 =
																		BGL_CLASS_VIRTUAL_FIELDS
																		(BgL_claza7za7z00_2227);
																	BgL_arg1982z00_2234 = BgL_res2542z00_3819;
																}
																BGl_patchzd2vfieldzd2accessorsz12z12zz__evobjectz00
																	(BgL_slotsz00_2226, BgL_fieldsz00_2233,
																	BgL_arg1982z00_2234, BgL_modz00_116);
														}}
														if (BgL_abstractz00_113)
															{	/* Eval/evobject.scm 755 */
																BFALSE;
															}
														else
															{	/* Eval/evobject.scm 755 */
																BGl_evalzd2expandzd2instantiatez00zz__evobjectz00
																	(BgL_claza7za7z00_2227);
																BGl_evalzd2expandzd2duplicatez00zz__evobjectz00
																	(BgL_claza7za7z00_2227);
															}
														{	/* Eval/evobject.scm 758 */
															obj_t BgL_list1983z00_2235;

															BgL_list1983z00_2235 =
																MAKE_YOUNG_PAIR(BgL_cidz00_2219, BNIL);
															return BgL_list1983z00_2235;
														}
													}
												}
											}
										}
									else
										{	/* Eval/evobject.scm 734 */
											return
												BGl_evcompilezd2errorzd2zz__evcompilez00
												(BgL_locz00_2221, BGl_string2702z00zz__evobjectz00,
												BGl_string2721z00zz__evobjectz00, BgL_sidz00_2222);
										}
								}
							}
						}
					}
				}
			}
		}

	}



/* &eval-class */
	obj_t BGl_z62evalzd2classzb0zz__evobjectz00(obj_t BgL_envz00_4450,
		obj_t BgL_idz00_4451, obj_t BgL_abstractz00_4452, obj_t BgL_clausesz00_4453,
		obj_t BgL_srcz00_4454, obj_t BgL_modz00_4455)
	{
		{	/* Eval/evobject.scm 728 */
			{	/* Eval/evobject.scm 729 */
				obj_t BgL_auxz00_6331;
				obj_t BgL_auxz00_6323;
				obj_t BgL_auxz00_6316;

				if (PAIRP(BgL_srcz00_4454))
					{	/* Eval/evobject.scm 729 */
						BgL_auxz00_6331 = BgL_srcz00_4454;
					}
				else
					{
						obj_t BgL_auxz00_6334;

						BgL_auxz00_6334 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__evobjectz00,
							BINT(((long) 26399)), BGl_string2722z00zz__evobjectz00,
							BGl_string2725z00zz__evobjectz00, BgL_srcz00_4454);
						FAILURE(BgL_auxz00_6334, BFALSE, BFALSE);
					}
				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_clausesz00_4453))
					{	/* Eval/evobject.scm 729 */
						BgL_auxz00_6323 = BgL_clausesz00_4453;
					}
				else
					{
						obj_t BgL_auxz00_6327;

						BgL_auxz00_6327 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__evobjectz00,
							BINT(((long) 26399)), BGl_string2722z00zz__evobjectz00,
							BGl_string2724z00zz__evobjectz00, BgL_clausesz00_4453);
						FAILURE(BgL_auxz00_6327, BFALSE, BFALSE);
					}
				if (SYMBOLP(BgL_idz00_4451))
					{	/* Eval/evobject.scm 729 */
						BgL_auxz00_6316 = BgL_idz00_4451;
					}
				else
					{
						obj_t BgL_auxz00_6319;

						BgL_auxz00_6319 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__evobjectz00,
							BINT(((long) 26399)), BGl_string2722z00zz__evobjectz00,
							BGl_string2723z00zz__evobjectz00, BgL_idz00_4451);
						FAILURE(BgL_auxz00_6319, BFALSE, BFALSE);
					}
				return
					BGl_evalzd2classzd2zz__evobjectz00(BgL_auxz00_6316,
					CBOOL(BgL_abstractz00_4452), BgL_auxz00_6323, BgL_auxz00_6331,
					BgL_modz00_4455);
			}
		}

	}



/* eval-co-instantiate-expander */
	BGL_EXPORTED_DEF obj_t
		BGl_evalzd2cozd2instantiatezd2expanderzd2zz__evobjectz00(obj_t BgL_xz00_117,
		obj_t BgL_ez00_118)
	{
		{	/* Eval/evobject.scm 763 */
			if (NULLP(BgL_xz00_117))
				{	/* Eval/evobject.scm 764 */
					return
						BGl_expandzd2errorzd2zz__evobjectz00
						(BGl_string2726z00zz__evobjectz00, BGl_string2727z00zz__evobjectz00,
						BgL_xz00_117);
				}
			else
				{	/* Eval/evobject.scm 764 */
					obj_t BgL_cdrzd2295zd2_2245;

					BgL_cdrzd2295zd2_2245 = CDR(BgL_xz00_117);
					if ((CAR(BgL_xz00_117) == BGl_symbol2728z00zz__evobjectz00))
						{	/* Eval/evobject.scm 764 */
							if (PAIRP(BgL_cdrzd2295zd2_2245))
								{	/* Eval/evobject.scm 764 */
									return
										BGl_cozd2instantiatezd2ze3letze3zz__evobjectz00(CAR
										(BgL_cdrzd2295zd2_2245), CDR(BgL_cdrzd2295zd2_2245),
										BgL_xz00_117, BgL_ez00_118);
								}
							else
								{	/* Eval/evobject.scm 764 */
									return
										BGl_expandzd2errorzd2zz__evobjectz00
										(BGl_string2726z00zz__evobjectz00,
										BGl_string2727z00zz__evobjectz00, BgL_xz00_117);
								}
						}
					else
						{	/* Eval/evobject.scm 764 */
							return
								BGl_expandzd2errorzd2zz__evobjectz00
								(BGl_string2726z00zz__evobjectz00,
								BGl_string2727z00zz__evobjectz00, BgL_xz00_117);
						}
				}
		}

	}



/* &eval-co-instantiate-expander */
	obj_t BGl_z62evalzd2cozd2instantiatezd2expanderzb0zz__evobjectz00(obj_t
		BgL_envz00_4456, obj_t BgL_xz00_4457, obj_t BgL_ez00_4458)
	{
		{	/* Eval/evobject.scm 763 */
			{	/* Eval/evobject.scm 764 */
				obj_t BgL_auxz00_6360;
				obj_t BgL_auxz00_6353;

				if (PROCEDUREP(BgL_ez00_4458))
					{	/* Eval/evobject.scm 764 */
						BgL_auxz00_6360 = BgL_ez00_4458;
					}
				else
					{
						obj_t BgL_auxz00_6363;

						BgL_auxz00_6363 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__evobjectz00,
							BINT(((long) 27757)), BGl_string2729z00zz__evobjectz00,
							BGl_string2730z00zz__evobjectz00, BgL_ez00_4458);
						FAILURE(BgL_auxz00_6363, BFALSE, BFALSE);
					}
				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_xz00_4457))
					{	/* Eval/evobject.scm 764 */
						BgL_auxz00_6353 = BgL_xz00_4457;
					}
				else
					{
						obj_t BgL_auxz00_6356;

						BgL_auxz00_6356 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__evobjectz00,
							BINT(((long) 27757)), BGl_string2729z00zz__evobjectz00,
							BGl_string2724z00zz__evobjectz00, BgL_xz00_4457);
						FAILURE(BgL_auxz00_6356, BFALSE, BFALSE);
					}
				return
					BGl_evalzd2cozd2instantiatezd2expanderzd2zz__evobjectz00
					(BgL_auxz00_6353, BgL_auxz00_6360);
			}
		}

	}



/* co-instantiate->let */
	obj_t BGl_cozd2instantiatezd2ze3letze3zz__evobjectz00(obj_t
		BgL_bindingsz00_121, obj_t BgL_bodyz00_122, obj_t BgL_xz00_123,
		obj_t BgL_ez00_124)
	{
		{	/* Eval/evobject.scm 779 */
			{
				obj_t BgL_exprz00_2350;
				obj_t BgL_bdgz00_2351;

				{	/* Eval/evobject.scm 805 */
					obj_t BgL_varsz00_2254;

					if (NULLP(BgL_bindingsz00_121))
						{	/* Eval/evobject.scm 805 */
							BgL_varsz00_2254 = BNIL;
						}
					else
						{	/* Eval/evobject.scm 805 */
							obj_t BgL_head1154z00_2309;

							{	/* Eval/evobject.scm 805 */
								obj_t BgL_res2548z00_3982;

								BgL_res2548z00_3982 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								BgL_head1154z00_2309 = BgL_res2548z00_3982;
							}
							{
								obj_t BgL_l1152z00_2311;
								obj_t BgL_tail1155z00_2312;

								BgL_l1152z00_2311 = BgL_bindingsz00_121;
								BgL_tail1155z00_2312 = BgL_head1154z00_2309;
							BgL_zc3z04anonymousza32033ze3z87_2313:
								if (NULLP(BgL_l1152z00_2311))
									{	/* Eval/evobject.scm 805 */
										BgL_varsz00_2254 = CDR(BgL_head1154z00_2309);
									}
								else
									{	/* Eval/evobject.scm 805 */
										obj_t BgL_newtail1156z00_2315;

										{	/* Eval/evobject.scm 805 */
											obj_t BgL_arg2036z00_2317;

											{	/* Eval/evobject.scm 805 */
												obj_t BgL_bdgz00_2318;

												BgL_bdgz00_2318 = CAR(((obj_t) BgL_l1152z00_2311));
												{
													obj_t BgL_varz00_2319;
													obj_t BgL_exprz00_2320;

													if (PAIRP(BgL_bdgz00_2318))
														{	/* Eval/evobject.scm 806 */
															obj_t BgL_carzd2320zd2_2325;
															obj_t BgL_cdrzd2321zd2_2326;

															BgL_carzd2320zd2_2325 = CAR(BgL_bdgz00_2318);
															BgL_cdrzd2321zd2_2326 = CDR(BgL_bdgz00_2318);
															if (SYMBOLP(BgL_carzd2320zd2_2325))
																{	/* Eval/evobject.scm 806 */
																	if (PAIRP(BgL_cdrzd2321zd2_2326))
																		{	/* Eval/evobject.scm 806 */
																			if (NULLP(CDR(BgL_cdrzd2321zd2_2326)))
																				{	/* Eval/evobject.scm 806 */
																					BgL_varz00_2319 =
																						BgL_carzd2320zd2_2325;
																					BgL_exprz00_2320 =
																						CAR(BgL_cdrzd2321zd2_2326);
																					{	/* Eval/evobject.scm 808 */
																						obj_t BgL_idzd2typezd2_2333;

																						{	/* Eval/evobject.scm 782 */
																							obj_t BgL_idz00_3986;

																							BgL_idz00_3986 =
																								BGl_decomposezd2identzd2zz__evobjectz00
																								(BgL_varz00_2319);
																							{	/* Eval/evobject.scm 783 */
																								obj_t BgL_typez00_3987;

																								{	/* Eval/evobject.scm 784 */
																									int BgL_tmpz00_6388;

																									BgL_tmpz00_6388 =
																										(int) (((long) 1));
																									BgL_typez00_3987 =
																										BGL_MVALUES_VAL
																										(BgL_tmpz00_6388);
																								}
																								BgL_idzd2typezd2_2333 =
																									MAKE_YOUNG_PAIR
																									(BgL_idz00_3986,
																									BgL_typez00_3987);
																						}}
																						{	/* Eval/evobject.scm 808 */
																							obj_t BgL_idz00_2334;

																							BgL_idz00_2334 =
																								CAR(BgL_idzd2typezd2_2333);
																							{	/* Eval/evobject.scm 809 */
																								obj_t BgL_tz00_2335;

																								BgL_tz00_2335 =
																									CDR(BgL_idzd2typezd2_2333);
																								{	/* Eval/evobject.scm 810 */
																									obj_t BgL_klassz00_2336;

																									BgL_exprz00_2350 =
																										BgL_exprz00_2320;
																									BgL_bdgz00_2351 =
																										BgL_bdgz00_2318;
																									{
																										obj_t
																											BgL_instantiatez00_2353;
																										obj_t BgL_bodyz00_2354;

																										if (PAIRP(BgL_exprz00_2350))
																											{	/* Eval/evobject.scm 803 */
																												BgL_instantiatez00_2353
																													=
																													CAR(BgL_exprz00_2350);
																												BgL_bodyz00_2354 =
																													CDR(BgL_exprz00_2350);
																												{	/* Eval/evobject.scm 789 */
																													obj_t
																														BgL_idzd2typezd2_2361;
																													{	/* Eval/evobject.scm 782 */
																														obj_t
																															BgL_idz00_3858;
																														BgL_idz00_3858 =
																															BGl_decomposezd2identzd2zz__evobjectz00
																															(BgL_instantiatez00_2353);
																														{	/* Eval/evobject.scm 783 */
																															obj_t
																																BgL_typez00_3859;
																															{	/* Eval/evobject.scm 784 */
																																int
																																	BgL_tmpz00_6397;
																																BgL_tmpz00_6397
																																	=
																																	(int) (((long)
																																		1));
																																BgL_typez00_3859
																																	=
																																	BGL_MVALUES_VAL
																																	(BgL_tmpz00_6397);
																															}
																															BgL_idzd2typezd2_2361
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_idz00_3858,
																																BgL_typez00_3859);
																													}}
																													{	/* Eval/evobject.scm 789 */
																														obj_t
																															BgL_kclassz00_2362;
																														BgL_kclassz00_2362 =
																															BGl_findzd2classzd2zz__objectz00
																															(CDR
																															(BgL_idzd2typezd2_2361));
																														{	/* Eval/evobject.scm 790 */

																															if (
																																(CAR
																																	(BgL_idzd2typezd2_2361)
																																	==
																																	BGl_symbol2731z00zz__evobjectz00))
																																{	/* Eval/evobject.scm 792 */
																																	if (BGl_classzf3zf3zz__objectz00(BgL_kclassz00_2362))
																																		{	/* Eval/evobject.scm 794 */
																																			if (BGl_classzd2abstractzf3z21zz__objectz00(BgL_kclassz00_2362))
																																				{	/* Eval/evobject.scm 72 */
																																					obj_t
																																						BgL_locz00_3862;
																																					{	/* Eval/evobject.scm 72 */
																																						bool_t
																																							BgL_test3004z00_6410;
																																						{	/* Eval/evobject.scm 72 */
																																							bool_t
																																								BgL_res2380z00_3864;
																																							BgL_res2380z00_3864
																																								=
																																								EPAIRP
																																								(BgL_bdgz00_2351);
																																							BgL_test3004z00_6410
																																								=
																																								BgL_res2380z00_3864;
																																						}
																																						if (BgL_test3004z00_6410)
																																							{	/* Eval/evobject.scm 72 */
																																								BgL_locz00_3862
																																									=
																																									CER
																																									(
																																									((obj_t) BgL_bdgz00_2351));
																																							}
																																						else
																																							{	/* Eval/evobject.scm 72 */
																																								BgL_locz00_3862
																																									=
																																									BFALSE;
																																							}
																																					}
																																					{	/* Eval/evobject.scm 73 */
																																						bool_t
																																							BgL_test3005z00_6414;
																																						if (PAIRP(BgL_locz00_3862))
																																							{	/* Eval/evobject.scm 73 */
																																								bool_t
																																									BgL_test3007z00_6417;
																																								{	/* Eval/evobject.scm 73 */
																																									obj_t
																																										BgL_tmpz00_6418;
																																									BgL_tmpz00_6418
																																										=
																																										CDR
																																										(BgL_locz00_3862);
																																									BgL_test3007z00_6417
																																										=
																																										PAIRP
																																										(BgL_tmpz00_6418);
																																								}
																																								if (BgL_test3007z00_6417)
																																									{	/* Eval/evobject.scm 73 */
																																										obj_t
																																											BgL_tmpz00_6421;
																																										BgL_tmpz00_6421
																																											=
																																											CDR
																																											(CDR
																																											(BgL_locz00_3862));
																																										BgL_test3005z00_6414
																																											=
																																											PAIRP
																																											(BgL_tmpz00_6421);
																																									}
																																								else
																																									{	/* Eval/evobject.scm 73 */
																																										BgL_test3005z00_6414
																																											=
																																											(
																																											(bool_t)
																																											0);
																																									}
																																							}
																																						else
																																							{	/* Eval/evobject.scm 73 */
																																								BgL_test3005z00_6414
																																									=
																																									(
																																									(bool_t)
																																									0);
																																							}
																																						if (BgL_test3005z00_6414)
																																							{	/* Eval/evobject.scm 73 */
																																								BgL_klassz00_2336
																																									=
																																									BGl_errorzf2locationzf2zz__errorz00
																																									(BgL_instantiatez00_2353,
																																									BGl_string2733z00zz__evobjectz00,
																																									BgL_bdgz00_2351,
																																									CAR
																																									(CDR
																																										(BgL_locz00_3862)),
																																									CAR
																																									(CDR
																																										(CDR
																																											(BgL_locz00_3862))));
																																							}
																																						else
																																							{	/* Eval/evobject.scm 73 */
																																								BgL_klassz00_2336
																																									=
																																									BGl_errorz00zz__errorz00
																																									(BgL_instantiatez00_2353,
																																									BGl_string2733z00zz__evobjectz00,
																																									BgL_bdgz00_2351);
																																							}
																																					}
																																				}
																																			else
																																				{	/* Eval/evobject.scm 796 */
																																					BgL_klassz00_2336
																																						=
																																						BgL_kclassz00_2362;
																																				}
																																		}
																																	else
																																		{	/* Eval/evobject.scm 72 */
																																			obj_t
																																				BgL_locz00_3891;
																																			{	/* Eval/evobject.scm 72 */
																																				bool_t
																																					BgL_test3008z00_6432;
																																				{	/* Eval/evobject.scm 72 */
																																					bool_t
																																						BgL_res2380z00_3893;
																																					BgL_res2380z00_3893
																																						=
																																						EPAIRP
																																						(BgL_bdgz00_2351);
																																					BgL_test3008z00_6432
																																						=
																																						BgL_res2380z00_3893;
																																				}
																																				if (BgL_test3008z00_6432)
																																					{	/* Eval/evobject.scm 72 */
																																						BgL_locz00_3891
																																							=
																																							CER
																																							(((obj_t) BgL_bdgz00_2351));
																																					}
																																				else
																																					{	/* Eval/evobject.scm 72 */
																																						BgL_locz00_3891
																																							=
																																							BFALSE;
																																					}
																																			}
																																			{	/* Eval/evobject.scm 73 */
																																				bool_t
																																					BgL_test3009z00_6436;
																																				if (PAIRP(BgL_locz00_3891))
																																					{	/* Eval/evobject.scm 73 */
																																						bool_t
																																							BgL_test3011z00_6439;
																																						{	/* Eval/evobject.scm 73 */
																																							obj_t
																																								BgL_tmpz00_6440;
																																							BgL_tmpz00_6440
																																								=
																																								CDR
																																								(BgL_locz00_3891);
																																							BgL_test3011z00_6439
																																								=
																																								PAIRP
																																								(BgL_tmpz00_6440);
																																						}
																																						if (BgL_test3011z00_6439)
																																							{	/* Eval/evobject.scm 73 */
																																								obj_t
																																									BgL_tmpz00_6443;
																																								BgL_tmpz00_6443
																																									=
																																									CDR
																																									(CDR
																																									(BgL_locz00_3891));
																																								BgL_test3009z00_6436
																																									=
																																									PAIRP
																																									(BgL_tmpz00_6443);
																																							}
																																						else
																																							{	/* Eval/evobject.scm 73 */
																																								BgL_test3009z00_6436
																																									=
																																									(
																																									(bool_t)
																																									0);
																																							}
																																					}
																																				else
																																					{	/* Eval/evobject.scm 73 */
																																						BgL_test3009z00_6436
																																							=
																																							(
																																							(bool_t)
																																							0);
																																					}
																																				if (BgL_test3009z00_6436)
																																					{	/* Eval/evobject.scm 73 */
																																						BgL_klassz00_2336
																																							=
																																							BGl_errorzf2locationzf2zz__errorz00
																																							(BgL_instantiatez00_2353,
																																							BGl_string2734z00zz__evobjectz00,
																																							BgL_bdgz00_2351,
																																							CAR
																																							(CDR
																																								(BgL_locz00_3891)),
																																							CAR
																																							(CDR
																																								(CDR
																																									(BgL_locz00_3891))));
																																					}
																																				else
																																					{	/* Eval/evobject.scm 73 */
																																						BgL_klassz00_2336
																																							=
																																							BGl_errorz00zz__errorz00
																																							(BgL_instantiatez00_2353,
																																							BGl_string2734z00zz__evobjectz00,
																																							BgL_bdgz00_2351);
																																					}
																																			}
																																		}
																																}
																															else
																																{	/* Eval/evobject.scm 72 */
																																	obj_t
																																		BgL_locz00_3920;
																																	{	/* Eval/evobject.scm 72 */
																																		bool_t
																																			BgL_test3012z00_6454;
																																		{	/* Eval/evobject.scm 72 */
																																			bool_t
																																				BgL_res2380z00_3922;
																																			BgL_res2380z00_3922
																																				=
																																				EPAIRP
																																				(BgL_bdgz00_2351);
																																			BgL_test3012z00_6454
																																				=
																																				BgL_res2380z00_3922;
																																		}
																																		if (BgL_test3012z00_6454)
																																			{	/* Eval/evobject.scm 72 */
																																				BgL_locz00_3920
																																					=
																																					CER((
																																						(obj_t)
																																						BgL_bdgz00_2351));
																																			}
																																		else
																																			{	/* Eval/evobject.scm 72 */
																																				BgL_locz00_3920
																																					=
																																					BFALSE;
																																			}
																																	}
																																	{	/* Eval/evobject.scm 73 */
																																		bool_t
																																			BgL_test3013z00_6458;
																																		if (PAIRP
																																			(BgL_locz00_3920))
																																			{	/* Eval/evobject.scm 73 */
																																				bool_t
																																					BgL_test3015z00_6461;
																																				{	/* Eval/evobject.scm 73 */
																																					obj_t
																																						BgL_tmpz00_6462;
																																					BgL_tmpz00_6462
																																						=
																																						CDR
																																						(BgL_locz00_3920);
																																					BgL_test3015z00_6461
																																						=
																																						PAIRP
																																						(BgL_tmpz00_6462);
																																				}
																																				if (BgL_test3015z00_6461)
																																					{	/* Eval/evobject.scm 73 */
																																						obj_t
																																							BgL_tmpz00_6465;
																																						BgL_tmpz00_6465
																																							=
																																							CDR
																																							(CDR
																																							(BgL_locz00_3920));
																																						BgL_test3013z00_6458
																																							=
																																							PAIRP
																																							(BgL_tmpz00_6465);
																																					}
																																				else
																																					{	/* Eval/evobject.scm 73 */
																																						BgL_test3013z00_6458
																																							=
																																							(
																																							(bool_t)
																																							0);
																																					}
																																			}
																																		else
																																			{	/* Eval/evobject.scm 73 */
																																				BgL_test3013z00_6458
																																					=
																																					(
																																					(bool_t)
																																					0);
																																			}
																																		if (BgL_test3013z00_6458)
																																			{	/* Eval/evobject.scm 73 */
																																				BgL_klassz00_2336
																																					=
																																					BGl_errorzf2locationzf2zz__errorz00
																																					(BgL_instantiatez00_2353,
																																					BGl_string2735z00zz__evobjectz00,
																																					BgL_bdgz00_2351,
																																					CAR
																																					(CDR
																																						(BgL_locz00_3920)),
																																					CAR
																																					(CDR
																																						(CDR
																																							(BgL_locz00_3920))));
																																			}
																																		else
																																			{	/* Eval/evobject.scm 73 */
																																				BgL_klassz00_2336
																																					=
																																					BGl_errorz00zz__errorz00
																																					(BgL_instantiatez00_2353,
																																					BGl_string2735z00zz__evobjectz00,
																																					BgL_bdgz00_2351);
																																			}
																																	}
																																}
																														}
																													}
																												}
																											}
																										else
																											{	/* Eval/evobject.scm 803 */
																												BgL_klassz00_2336 =
																													BGl_expandzd2errorzd2zz__evobjectz00
																													(BGl_string2726z00zz__evobjectz00,
																													BGl_string2735z00zz__evobjectz00,
																													BgL_bdgz00_2351);
																											}
																									}
																									{	/* Eval/evobject.scm 811 */

																										{	/* Eval/evobject.scm 812 */
																											bool_t
																												BgL_test3016z00_6479;
																											if (CBOOL(BgL_tz00_2335))
																												{	/* Eval/evobject.scm 812 */
																													BgL_test3016z00_6479 =
																														(BgL_tz00_2335 ==
																														BGl_classzd2namezd2zz__objectz00
																														(BgL_klassz00_2336));
																												}
																											else
																												{	/* Eval/evobject.scm 812 */
																													BgL_test3016z00_6479 =
																														((bool_t) 1);
																												}
																											if (BgL_test3016z00_6479)
																												{	/* Eval/evobject.scm 813 */
																													obj_t
																														BgL_list2047z00_2339;
																													{	/* Eval/evobject.scm 813 */
																														obj_t
																															BgL_arg2048z00_2340;
																														{	/* Eval/evobject.scm 813 */
																															obj_t
																																BgL_arg2049z00_2341;
																															BgL_arg2049z00_2341
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_exprz00_2320,
																																BNIL);
																															BgL_arg2048z00_2340
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_klassz00_2336,
																																BgL_arg2049z00_2341);
																														}
																														BgL_list2047z00_2339
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_idz00_2334,
																															BgL_arg2048z00_2340);
																													}
																													BgL_arg2036z00_2317 =
																														BgL_list2047z00_2339;
																												}
																											else
																												{	/* Eval/evobject.scm 814 */
																													obj_t
																														BgL_arg2050z00_2342;
																													BgL_arg2050z00_2342 =
																														CAR(((obj_t)
																															BgL_xz00_123));
																													{	/* Eval/evobject.scm 72 */
																														obj_t
																															BgL_locz00_3992;
																														{	/* Eval/evobject.scm 72 */
																															bool_t
																																BgL_test3018z00_6489;
																															{	/* Eval/evobject.scm 72 */
																																bool_t
																																	BgL_res2380z00_3994;
																																BgL_res2380z00_3994
																																	=
																																	EPAIRP
																																	(BgL_bdgz00_2318);
																																BgL_test3018z00_6489
																																	=
																																	BgL_res2380z00_3994;
																															}
																															if (BgL_test3018z00_6489)
																																{	/* Eval/evobject.scm 72 */
																																	BgL_locz00_3992
																																		=
																																		CER(((obj_t)
																																			BgL_bdgz00_2318));
																																}
																															else
																																{	/* Eval/evobject.scm 72 */
																																	BgL_locz00_3992
																																		= BFALSE;
																																}
																														}
																														{	/* Eval/evobject.scm 73 */
																															bool_t
																																BgL_test3019z00_6493;
																															if (PAIRP
																																(BgL_locz00_3992))
																																{	/* Eval/evobject.scm 73 */
																																	bool_t
																																		BgL_test3021z00_6496;
																																	{	/* Eval/evobject.scm 73 */
																																		obj_t
																																			BgL_tmpz00_6497;
																																		BgL_tmpz00_6497
																																			=
																																			CDR
																																			(BgL_locz00_3992);
																																		BgL_test3021z00_6496
																																			=
																																			PAIRP
																																			(BgL_tmpz00_6497);
																																	}
																																	if (BgL_test3021z00_6496)
																																		{	/* Eval/evobject.scm 73 */
																																			obj_t
																																				BgL_tmpz00_6500;
																																			BgL_tmpz00_6500
																																				=
																																				CDR(CDR
																																				(BgL_locz00_3992));
																																			BgL_test3019z00_6493
																																				=
																																				PAIRP
																																				(BgL_tmpz00_6500);
																																		}
																																	else
																																		{	/* Eval/evobject.scm 73 */
																																			BgL_test3019z00_6493
																																				=
																																				(
																																				(bool_t)
																																				0);
																																		}
																																}
																															else
																																{	/* Eval/evobject.scm 73 */
																																	BgL_test3019z00_6493
																																		=
																																		((bool_t)
																																		0);
																																}
																															if (BgL_test3019z00_6493)
																																{	/* Eval/evobject.scm 73 */
																																	BgL_arg2036z00_2317
																																		=
																																		BGl_errorzf2locationzf2zz__errorz00
																																		(BgL_arg2050z00_2342,
																																		BGl_string2736z00zz__evobjectz00,
																																		BgL_bdgz00_2318,
																																		CAR(CDR
																																			(BgL_locz00_3992)),
																																		CAR(CDR(CDR
																																				(BgL_locz00_3992))));
																																}
																															else
																																{	/* Eval/evobject.scm 73 */
																																	BgL_arg2036z00_2317
																																		=
																																		BGl_errorz00zz__errorz00
																																		(BgL_arg2050z00_2342,
																																		BGl_string2736z00zz__evobjectz00,
																																		BgL_bdgz00_2318);
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
																				{	/* Eval/evobject.scm 817 */
																					obj_t BgL_arg2053z00_4060;

																					BgL_arg2053z00_4060 =
																						CAR(((obj_t) BgL_xz00_123));
																					BgL_arg2036z00_2317 =
																						BGl_expandzd2errorzd2zz__evobjectz00
																						(BgL_arg2053z00_4060,
																						BGl_string2735z00zz__evobjectz00,
																						BgL_bdgz00_2318);
																				}
																		}
																	else
																		{	/* Eval/evobject.scm 817 */
																			obj_t BgL_arg2053z00_4062;

																			BgL_arg2053z00_4062 =
																				CAR(((obj_t) BgL_xz00_123));
																			BgL_arg2036z00_2317 =
																				BGl_expandzd2errorzd2zz__evobjectz00
																				(BgL_arg2053z00_4062,
																				BGl_string2735z00zz__evobjectz00,
																				BgL_bdgz00_2318);
																		}
																}
															else
																{	/* Eval/evobject.scm 817 */
																	obj_t BgL_arg2053z00_4064;

																	BgL_arg2053z00_4064 =
																		CAR(((obj_t) BgL_xz00_123));
																	BgL_arg2036z00_2317 =
																		BGl_expandzd2errorzd2zz__evobjectz00
																		(BgL_arg2053z00_4064,
																		BGl_string2735z00zz__evobjectz00,
																		BgL_bdgz00_2318);
																}
														}
													else
														{	/* Eval/evobject.scm 817 */
															obj_t BgL_arg2053z00_4066;

															BgL_arg2053z00_4066 = CAR(((obj_t) BgL_xz00_123));
															BgL_arg2036z00_2317 =
																BGl_expandzd2errorzd2zz__evobjectz00
																(BgL_arg2053z00_4066,
																BGl_string2735z00zz__evobjectz00,
																BgL_bdgz00_2318);
														}
												}
											}
											{	/* Eval/evobject.scm 805 */
												obj_t BgL_res2555z00_4068;

												BgL_res2555z00_4068 =
													MAKE_YOUNG_PAIR(BgL_arg2036z00_2317, BNIL);
												BgL_newtail1156z00_2315 = BgL_res2555z00_4068;
											}
										}
										SET_CDR(BgL_tail1155z00_2312, BgL_newtail1156z00_2315);
										{	/* Eval/evobject.scm 805 */
											obj_t BgL_arg2035z00_2316;

											BgL_arg2035z00_2316 = CDR(((obj_t) BgL_l1152z00_2311));
											{
												obj_t BgL_tail1155z00_6529;
												obj_t BgL_l1152z00_6528;

												BgL_l1152z00_6528 = BgL_arg2035z00_2316;
												BgL_tail1155z00_6529 = BgL_newtail1156z00_2315;
												BgL_tail1155z00_2312 = BgL_tail1155z00_6529;
												BgL_l1152z00_2311 = BgL_l1152z00_6528;
												goto BgL_zc3z04anonymousza32033ze3z87_2313;
											}
										}
									}
							}
						}
					{	/* Eval/evobject.scm 819 */
						obj_t BgL_arg1993z00_2255;

						{	/* Eval/evobject.scm 819 */
							obj_t BgL_arg1995z00_2256;
							obj_t BgL_arg1996z00_2257;

							if (NULLP(BgL_varsz00_2254))
								{	/* Eval/evobject.scm 819 */
									BgL_arg1995z00_2256 = BNIL;
								}
							else
								{	/* Eval/evobject.scm 819 */
									obj_t BgL_head1159z00_2260;

									{	/* Eval/evobject.scm 819 */
										obj_t BgL_res2557z00_4072;

										BgL_res2557z00_4072 = MAKE_YOUNG_PAIR(BNIL, BNIL);
										BgL_head1159z00_2260 = BgL_res2557z00_4072;
									}
									{
										obj_t BgL_l1157z00_2262;
										obj_t BgL_tail1160z00_2263;

										BgL_l1157z00_2262 = BgL_varsz00_2254;
										BgL_tail1160z00_2263 = BgL_head1159z00_2260;
									BgL_zc3z04anonymousza31998ze3z87_2264:
										if (NULLP(BgL_l1157z00_2262))
											{	/* Eval/evobject.scm 819 */
												BgL_arg1995z00_2256 = CDR(BgL_head1159z00_2260);
											}
										else
											{	/* Eval/evobject.scm 819 */
												obj_t BgL_newtail1161z00_2266;

												{	/* Eval/evobject.scm 819 */
													obj_t BgL_arg2001z00_2268;

													{	/* Eval/evobject.scm 819 */
														obj_t BgL_varz00_2269;

														BgL_varz00_2269 = CAR(((obj_t) BgL_l1157z00_2262));
														{	/* Eval/evobject.scm 820 */
															obj_t BgL_idz00_2270;
															obj_t BgL_klassz00_2271;

															BgL_idz00_2270 = CAR(((obj_t) BgL_varz00_2269));
															{	/* Eval/evobject.scm 821 */
																obj_t BgL_pairz00_4080;

																BgL_pairz00_4080 =
																	CDR(((obj_t) BgL_varz00_2269));
																BgL_klassz00_2271 = CAR(BgL_pairz00_4080);
															}
															{	/* Eval/evobject.scm 822 */
																obj_t BgL_arg2002z00_2272;
																obj_t BgL_arg2003z00_2273;

																{	/* Eval/evobject.scm 822 */
																	obj_t BgL_arg2004z00_2274;

																	BgL_arg2004z00_2274 =
																		BGl_classzd2namezd2zz__objectz00
																		(BgL_klassz00_2271);
																	{	/* Eval/evobject.scm 822 */
																		obj_t BgL_list2005z00_2275;

																		{	/* Eval/evobject.scm 822 */
																			obj_t BgL_arg2007z00_2276;

																			{	/* Eval/evobject.scm 822 */
																				obj_t BgL_arg2008z00_2277;

																				BgL_arg2008z00_2277 =
																					MAKE_YOUNG_PAIR(BgL_arg2004z00_2274,
																					BNIL);
																				BgL_arg2007z00_2276 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2687z00zz__evobjectz00,
																					BgL_arg2008z00_2277);
																			}
																			BgL_list2005z00_2275 =
																				MAKE_YOUNG_PAIR(BgL_idz00_2270,
																				BgL_arg2007z00_2276);
																		}
																		BgL_arg2002z00_2272 =
																			BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																			(BgL_list2005z00_2275);
																	}
																}
																{	/* Eval/evobject.scm 823 */
																	obj_t BgL_arg2010z00_2278;

																	BgL_arg2010z00_2278 =
																		MAKE_YOUNG_PAIR
																		(BGl_classzd2allocatorzd2zz__objectz00
																		(BgL_klassz00_2271), BNIL);
																	BgL_arg2003z00_2273 =
																		MAKE_YOUNG_PAIR(BgL_arg2010z00_2278, BNIL);
																}
																BgL_arg2001z00_2268 =
																	MAKE_YOUNG_PAIR(BgL_arg2002z00_2272,
																	BgL_arg2003z00_2273);
															}
														}
													}
													{	/* Eval/evobject.scm 819 */
														obj_t BgL_res2559z00_4081;

														BgL_res2559z00_4081 =
															MAKE_YOUNG_PAIR(BgL_arg2001z00_2268, BNIL);
														BgL_newtail1161z00_2266 = BgL_res2559z00_4081;
													}
												}
												SET_CDR(BgL_tail1160z00_2263, BgL_newtail1161z00_2266);
												{	/* Eval/evobject.scm 819 */
													obj_t BgL_arg2000z00_2267;

													BgL_arg2000z00_2267 =
														CDR(((obj_t) BgL_l1157z00_2262));
													{
														obj_t BgL_tail1160z00_6557;
														obj_t BgL_l1157z00_6556;

														BgL_l1157z00_6556 = BgL_arg2000z00_2267;
														BgL_tail1160z00_6557 = BgL_newtail1161z00_2266;
														BgL_tail1160z00_2263 = BgL_tail1160z00_6557;
														BgL_l1157z00_2262 = BgL_l1157z00_6556;
														goto BgL_zc3z04anonymousza31998ze3z87_2264;
													}
												}
											}
									}
								}
							{	/* Eval/evobject.scm 826 */
								obj_t BgL_arg2012z00_2281;

								{	/* Eval/evobject.scm 826 */
									obj_t BgL_arg2013z00_2282;

									{	/* Eval/evobject.scm 826 */
										obj_t BgL_arg2014z00_2283;
										obj_t BgL_arg2016z00_2284;

										if (NULLP(BgL_varsz00_2254))
											{	/* Eval/evobject.scm 826 */
												BgL_arg2014z00_2283 = BNIL;
											}
										else
											{	/* Eval/evobject.scm 826 */
												obj_t BgL_head1164z00_2287;

												{	/* Eval/evobject.scm 826 */
													obj_t BgL_res2561z00_4085;

													BgL_res2561z00_4085 = MAKE_YOUNG_PAIR(BNIL, BNIL);
													BgL_head1164z00_2287 = BgL_res2561z00_4085;
												}
												{
													obj_t BgL_l1162z00_2289;
													obj_t BgL_tail1165z00_2290;

													BgL_l1162z00_2289 = BgL_varsz00_2254;
													BgL_tail1165z00_2290 = BgL_head1164z00_2287;
												BgL_zc3z04anonymousza32018ze3z87_2291:
													if (NULLP(BgL_l1162z00_2289))
														{	/* Eval/evobject.scm 826 */
															BgL_arg2014z00_2283 = CDR(BgL_head1164z00_2287);
														}
													else
														{	/* Eval/evobject.scm 826 */
															obj_t BgL_newtail1166z00_2293;

															{	/* Eval/evobject.scm 826 */
																obj_t BgL_arg2021z00_2295;

																{	/* Eval/evobject.scm 826 */
																	obj_t BgL_varz00_2296;

																	BgL_varz00_2296 =
																		CAR(((obj_t) BgL_l1162z00_2289));
																	{	/* Eval/evobject.scm 827 */
																		obj_t BgL_idz00_2297;
																		obj_t BgL_klassz00_2298;
																		obj_t BgL_exprz00_2299;

																		BgL_idz00_2297 =
																			CAR(((obj_t) BgL_varz00_2296));
																		{	/* Eval/evobject.scm 828 */
																			obj_t BgL_pairz00_4093;

																			BgL_pairz00_4093 =
																				CDR(((obj_t) BgL_varz00_2296));
																			BgL_klassz00_2298 = CAR(BgL_pairz00_4093);
																		}
																		{	/* Eval/evobject.scm 829 */
																			obj_t BgL_pairz00_4099;

																			{	/* Eval/evobject.scm 829 */
																				obj_t BgL_pairz00_4098;

																				BgL_pairz00_4098 =
																					CDR(((obj_t) BgL_varz00_2296));
																				BgL_pairz00_4099 =
																					CDR(BgL_pairz00_4098);
																			}
																			BgL_exprz00_2299 = CAR(BgL_pairz00_4099);
																		}
																		{	/* Eval/evobject.scm 830 */
																			obj_t BgL_arg2022z00_2300;
																			obj_t BgL_arg2023z00_2301;
																			obj_t BgL_arg2026z00_2302;

																			BgL_arg2022z00_2300 =
																				CAR(((obj_t) BgL_exprz00_2299));
																			BgL_arg2023z00_2301 =
																				CDR(((obj_t) BgL_exprz00_2299));
																			{	/* Eval/evobject.scm 831 */
																				obj_t BgL_res2563z00_4103;

																				{	/* Eval/evobject.scm 831 */
																					obj_t BgL_tmpz00_6579;

																					BgL_tmpz00_6579 =
																						((obj_t) BgL_klassz00_2298);
																					BgL_res2563z00_4103 =
																						BGL_CLASS_ALL_FIELDS
																						(BgL_tmpz00_6579);
																				}
																				BgL_arg2026z00_2302 =
																					BgL_res2563z00_4103;
																			}
																			BgL_arg2021z00_2295 =
																				BGl_instantiatezd2fillzd2zz__evobjectz00
																				(BgL_arg2022z00_2300,
																				BgL_arg2023z00_2301, BgL_klassz00_2298,
																				BgL_arg2026z00_2302, BgL_idz00_2297,
																				BgL_exprz00_2299, BgL_ez00_124);
																		}
																	}
																}
																{	/* Eval/evobject.scm 826 */
																	obj_t BgL_res2564z00_4104;

																	BgL_res2564z00_4104 =
																		MAKE_YOUNG_PAIR(BgL_arg2021z00_2295, BNIL);
																	BgL_newtail1166z00_2293 = BgL_res2564z00_4104;
																}
															}
															SET_CDR(BgL_tail1165z00_2290,
																BgL_newtail1166z00_2293);
															{	/* Eval/evobject.scm 826 */
																obj_t BgL_arg2020z00_2294;

																BgL_arg2020z00_2294 =
																	CDR(((obj_t) BgL_l1162z00_2289));
																{
																	obj_t BgL_tail1165z00_6588;
																	obj_t BgL_l1162z00_6587;

																	BgL_l1162z00_6587 = BgL_arg2020z00_2294;
																	BgL_tail1165z00_6588 =
																		BgL_newtail1166z00_2293;
																	BgL_tail1165z00_2290 = BgL_tail1165z00_6588;
																	BgL_l1162z00_2289 = BgL_l1162z00_6587;
																	goto BgL_zc3z04anonymousza32018ze3z87_2291;
																}
															}
														}
												}
											}
										{	/* Eval/evobject.scm 833 */
											obj_t BgL_arg2028z00_2304;

											{	/* Eval/evobject.scm 833 */
												obj_t BgL_arg2029z00_2305;

												{	/* Eval/evobject.scm 833 */
													obj_t BgL_arg2031z00_2306;

													BgL_arg2031z00_2306 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_bodyz00_122, BNIL);
													BgL_arg2029z00_2305 =
														MAKE_YOUNG_PAIR(BGl_symbol2670z00zz__evobjectz00,
														BgL_arg2031z00_2306);
												}
												BgL_arg2028z00_2304 =
													PROCEDURE_ENTRY(BgL_ez00_124) (BgL_ez00_124,
													BgL_arg2029z00_2305, BgL_ez00_124, BEOA);
											}
											BgL_arg2016z00_2284 =
												MAKE_YOUNG_PAIR(BgL_arg2028z00_2304, BNIL);
										}
										BgL_arg2013z00_2282 =
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg2014z00_2283, BgL_arg2016z00_2284);
									}
									BgL_arg2012z00_2281 =
										MAKE_YOUNG_PAIR(BGl_symbol2670z00zz__evobjectz00,
										BgL_arg2013z00_2282);
								}
								BgL_arg1996z00_2257 =
									MAKE_YOUNG_PAIR(BgL_arg2012z00_2281, BNIL);
							}
							BgL_arg1993z00_2255 =
								MAKE_YOUNG_PAIR(BgL_arg1995z00_2256, BgL_arg1996z00_2257);
						}
						return
							MAKE_YOUNG_PAIR(BGl_symbol2672z00zz__evobjectz00,
							BgL_arg1993z00_2255);
					}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__evobjectz00()
	{
		{	/* Eval/evobject.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__evobjectz00()
	{
		{	/* Eval/evobject.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__evobjectz00()
	{
		{	/* Eval/evobject.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__evobjectz00()
	{
		{	/* Eval/evobject.scm 15 */
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 121046386),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 251315035),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 439352636),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 214649622),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 220647683),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581), BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945), BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874), BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048), BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694), BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845), BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long)
					228151379), BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 177147628),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 528345319),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__everrorz00(((long) 375872251),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__evcompilez00(((long) 492753248),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 500027153),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__evmodulez00(((long) 505900559),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__expander_definez00(((long) 380411332),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			BGl_modulezd2initializa7ationz75zz__expandz00(((long) 414007030),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
			return BGl_modulezd2initializa7ationz75zz__macroz00(((long) 261395457),
				BSTRING_TO_STRING(BGl_string2737z00zz__evobjectz00));
		}

	}

#ifdef __cplusplus
}
#endif
