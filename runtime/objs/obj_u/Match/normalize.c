/*===========================================================================*/
/*   (Match/normalize.scm)                                                   */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Match/normalize.scm -indent -o objs/obj_u/Match/normalize.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31667ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2481z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2485z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2489z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_za2Matchzd2Structuresza2zd2zz__match_normaliza7eza7 =
		BUNSPEC;
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31579ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31498ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2493z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2496z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2498z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zz__match_normaliza7eza7 =
		BUNSPEC;
	static bool_t BGl_segmentzd2variablezf3z21zz__match_normaliza7eza7(obj_t);
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static obj_t
		BGl_standardiza7ezd2treezd2variableza7zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31687ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static bool_t BGl_coherentzd2environmentzf3z21zz__match_normaliza7eza7(obj_t,
		obj_t);
	static obj_t BGl_makezd2togglezd2zz__match_normaliza7eza7();
	static obj_t BGl_toplevelzd2initzd2zz__match_normaliza7eza7();
	static long BGl_patternzd2lengthzd2zz__match_normaliza7eza7(obj_t);
	extern obj_t BGl_jimzd2gensymzd2zz__match_s2cfunz00;
	static obj_t
		BGl_z62zc3z04anonymousza31302ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_standardiza7ezd2structz75zz__match_normaliza7eza7(obj_t);
	static obj_t BGl_genericzd2initzd2zz__match_normaliza7eza7();
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z62extendzd2rzd2macrozd2envzb0zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__match_normaliza7eza7();
	extern bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31240ze3ze5zz__match_normaliza7eza7(obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31797ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31428ze32385ze5zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31428ze32387ze5zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_standardiza7ezd2repetitionz75zz__match_normaliza7eza7(obj_t,
		obj_t);
	static obj_t
		BGl_standardiza7ezd2segmentzd2variableza7zz__match_normaliza7eza7(obj_t,
		obj_t);
	static bool_t BGl_treezd2variablezf3z21zz__match_normaliza7eza7(obj_t);
	static obj_t BGl_vectorifyze70ze7zz__match_normaliza7eza7(obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31242ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31307ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_standardiza7ezd2consz75zz__match_normaliza7eza7(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zz__match_normaliza7eza7();
	static obj_t BGl_z62normaliza7ezd2patternz17zz__match_normaliza7eza7(obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31527ze32386ze5zz__match_normaliza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31502ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31324ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31316ze3ze5zz__match_normaliza7eza7(obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31511ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static bool_t BGl_termzd2variablezf3z21zz__match_normaliza7eza7(obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31342ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31334ze3ze5zz__match_normaliza7eza7(obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31318ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7 = BUNSPEC;
	extern obj_t BGl_zb2zb2zz__r4_numbers_6_5z00(obj_t);
	extern obj_t string_append(obj_t, obj_t);
	static obj_t BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_matchzd2definezd2structurez12z12zz__match_normaliza7eza7(obj_t);
	static bool_t
		BGl_lispishzd2segmentzd2variablezf3zf3zz__match_normaliza7eza7(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31522ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31514ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31352ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31247ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31328ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31531ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62matchzd2definezd2recordzd2typez12za2zz__match_normaliza7eza7(obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31370ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31362ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31508ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_list2470z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_list2477z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_list2478z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t
		BGl_z62zc3z04anonymousza31630ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31282ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31274ze3ze5zz__match_normaliza7eza7(obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31347ze3ze5zz__match_normaliza7eza7(obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31428ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31339ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_s2cfunz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_list2483z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_list2484z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_list2487z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_list2488z00zz__match_normaliza7eza7 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_extendzd2rzd2macrozd2envzd2zz__match_normaliza7eza7(obj_t, obj_t);
	static obj_t BGl_list2491z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_list2492z00zz__match_normaliza7eza7 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_matchzd2definezd2recordzd2typez12zc0zz__match_normaliza7eza7(obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31527ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31519ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31276ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_standardiza7ezd2vectorz75zz__match_normaliza7eza7(obj_t);
	static obj_t BGl_unboundzd2patternzd2zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zz__match_normaliza7eza7();
	static obj_t
		BGl_z62zc3z04anonymousza31463ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31617ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31358ze3ze5zz__match_normaliza7eza7(obj_t, obj_t);
	static obj_t
		BGl_standardiza7ezd2lispishzd2anyza7zz__match_normaliza7eza7(obj_t);
	static obj_t BGl_oczd2countzd2zz__match_normaliza7eza7(obj_t, obj_t);
	static obj_t BGl_rzd2macrozd2patternzd2initzd2zz__match_normaliza7eza7 =
		BUNSPEC;
	static obj_t BGl_gczd2rootszd2initz00zz__match_normaliza7eza7();
	static obj_t BGl_importedzd2moduleszd2initz00zz__match_normaliza7eza7();
	static obj_t
		BGl_z62zc3z04anonymousza31634ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31537ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static bool_t BGl_holezd2variablezf3z21zz__match_normaliza7eza7(obj_t);
	static obj_t
		BGl_standardiza7ezd2holezd2variableza7zz__match_normaliza7eza7(obj_t);
	static obj_t BGl_standardiza7ezd2anyz75zz__match_normaliza7eza7(obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31481ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2401z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t
		BGl_z62zc3z04anonymousza31287ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2404z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2407z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2409z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t
		BGl_z62zc3z04anonymousza31571ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31490ze3ze5zz__match_normaliza7eza7(obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31466ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31296ze3ze5zz__match_normaliza7eza7(obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31369ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2412z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2415z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2418z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t
		BGl_standardiza7ezd2realzd2xconsza7zz__match_normaliza7eza7(obj_t, obj_t);
	static obj_t BGl_standardiza7ezd2realzd2consza7zz__match_normaliza7eza7(obj_t,
		obj_t);
	static obj_t BGl_symbol2501z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2421z00zz__match_normaliza7eza7 = BUNSPEC;
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_symbol2430z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t
		BGl_z62zc3z04anonymousza31298ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2432z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_standardiza7ezd2patternsz75zz__match_normaliza7eza7(obj_t);
	static obj_t BGl_symbol2435z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2437z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2439z00zz__match_normaliza7eza7 = BUNSPEC;
	extern obj_t BGl_atomzf3zf3zz__match_s2cfunz00(obj_t);
	static obj_t BGl_za2preferzd2xconsza2zd2zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t
		BGl_z62zc3z04anonymousza31566ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31469ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2443z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2445z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2448z00zz__match_normaliza7eza7 = BUNSPEC;
	extern obj_t BGl_structzd2ze3listz31zz__structurez00(obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31494ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2450z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2452z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2454z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2456z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2458z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t
		BGl_standardiza7ezd2lispishzd2segmentzd2variablez75zz__match_normaliza7eza7
		(obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31576ze3ze5zz__match_normaliza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_standardiza7ezd2termzd2variableza7zz__match_normaliza7eza7(obj_t);
	static obj_t BGl_symbol2460z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2462z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2464z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2466z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2468z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2389z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t
		BGl_z62matchzd2definezd2structurez12z70zz__match_normaliza7eza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_normaliza7ezd2patternz75zz__match_normaliza7eza7(obj_t);
	static obj_t BGl_symbol2471z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2392z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2475z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2395z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2479z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2398z00zz__match_normaliza7eza7 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_extendzd2rzd2macrozd2envzd2envz00zz__match_normaliza7eza7,
		BgL_bgl_za762extendza7d2rza7d22505za7,
		BGl_z62extendzd2rzd2macrozd2envzb0zz__match_normaliza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2402z00zz__match_normaliza7eza7,
		BgL_bgl_string2402za700za7za7_2506za7, "not", 3);
	      DEFINE_STRING(BGl_string2405z00zz__match_normaliza7eza7,
		BgL_bgl_string2405za700za7za7_2507za7, "?", 1);
	      DEFINE_STRING(BGl_string2408z00zz__match_normaliza7eza7,
		BgL_bgl_string2408za700za7za7_2508za7, "kwote", 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2400z00zz__match_normaliza7eza7,
		BgL_bgl_za762za7c3za704anonymo2509za7, va_generic_entry,
		BGl_z62zc3z04anonymousza31334ze3ze5zz__match_normaliza7eza7, BUNSPEC, -1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2403z00zz__match_normaliza7eza7,
		BgL_bgl_za762za7c3za704anonymo2510za7, va_generic_entry,
		BGl_z62zc3z04anonymousza31347ze3ze5zz__match_normaliza7eza7, BUNSPEC, -1);
	      DEFINE_STRING(BGl_string2410z00zz__match_normaliza7eza7,
		BgL_bgl_string2410za700za7za7_2511za7, "**Bad-Luck096561123523452**", 27);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2406z00zz__match_normaliza7eza7,
		BgL_bgl_za762za7c3za704anonymo2512za7, va_generic_entry,
		BGl_z62zc3z04anonymousza31358ze3ze5zz__match_normaliza7eza7, BUNSPEC, -1);
	      DEFINE_STRING(BGl_string2413z00zz__match_normaliza7eza7,
		BgL_bgl_string2413za700za7za7_2513za7, "struct-pat", 10);
	      DEFINE_STRING(BGl_string2416z00zz__match_normaliza7eza7,
		BgL_bgl_string2416za700za7za7_2514za7, "Pattern-Matching", 16);
	      DEFINE_STRING(BGl_string2417z00zz__match_normaliza7eza7,
		BgL_bgl_string2417za700za7za7_2515za7, "Illegal `kwote' form", 20);
	      DEFINE_STRING(BGl_string2419z00zz__match_normaliza7eza7,
		BgL_bgl_string2419za700za7za7_2516za7, "quote", 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2411z00zz__match_normaliza7eza7,
		BgL_bgl_za762za7c3za704anonymo2517za7, va_generic_entry,
		BGl_z62zc3z04anonymousza31369ze3ze5zz__match_normaliza7eza7, BUNSPEC, -3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2414z00zz__match_normaliza7eza7,
		BgL_bgl_za762za7c3za704anonymo2518za7,
		BGl_z62zc3z04anonymousza31428ze3ze5zz__match_normaliza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string2500z00zz__match_normaliza7eza7,
		BgL_bgl_string2500za700za7za7_2519za7, "No such structure: ", 19);
	      DEFINE_STRING(BGl_string2420z00zz__match_normaliza7eza7,
		BgL_bgl_string2420za700za7za7_2520za7, "Illegal `?' form", 16);
	      DEFINE_STRING(BGl_string2502z00zz__match_normaliza7eza7,
		BgL_bgl_string2502za700za7za7_2521za7, "match-case", 10);
	      DEFINE_STRING(BGl_string2503z00zz__match_normaliza7eza7,
		BgL_bgl_string2503za700za7za7_2522za7, "No such structure ", 18);
	      DEFINE_STRING(BGl_string2422z00zz__match_normaliza7eza7,
		BgL_bgl_string2422za700za7za7_2523za7, "check", 5);
	      DEFINE_STRING(BGl_string2504z00zz__match_normaliza7eza7,
		BgL_bgl_string2504za700za7za7_2524za7, "__match_normalize", 17);
	      DEFINE_STRING(BGl_string2423z00zz__match_normaliza7eza7,
		BgL_bgl_string2423za700za7za7_2525za7, "Illegal `not'", 13);
	      DEFINE_STRING(BGl_string2424z00zz__match_normaliza7eza7,
		BgL_bgl_string2424za700za7za7_2526za7, "Illegal `and' form", 18);
	      DEFINE_STRING(BGl_string2425z00zz__match_normaliza7eza7,
		BgL_bgl_string2425za700za7za7_2527za7, "Illegal `t-or' form", 19);
	      DEFINE_STRING(BGl_string2426z00zz__match_normaliza7eza7,
		BgL_bgl_string2426za700za7za7_2528za7, "Incompatible alternative", 24);
	      DEFINE_STRING(BGl_string2427z00zz__match_normaliza7eza7,
		BgL_bgl_string2427za700za7za7_2529za7, "Illegal `or' form", 17);
	      DEFINE_STRING(BGl_string2428z00zz__match_normaliza7eza7,
		BgL_bgl_string2428za700za7za7_2530za7, "Illegal `atom' form", 19);
	      DEFINE_STRING(BGl_string2429z00zz__match_normaliza7eza7,
		BgL_bgl_string2429za700za7za7_2531za7,
		"Too many patterns provided for atom", 35);
	      DEFINE_STRING(BGl_string2431z00zz__match_normaliza7eza7,
		BgL_bgl_string2431za700za7za7_2532za7, "any", 3);
	      DEFINE_STRING(BGl_string2433z00zz__match_normaliza7eza7,
		BgL_bgl_string2433za700za7za7_2533za7, "cons", 4);
	      DEFINE_STRING(BGl_string2436z00zz__match_normaliza7eza7,
		BgL_bgl_string2436za700za7za7_2534za7, "?-", 2);
	      DEFINE_STRING(BGl_string2438z00zz__match_normaliza7eza7,
		BgL_bgl_string2438za700za7za7_2535za7, "\077\077-", 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2434z00zz__match_normaliza7eza7,
		BgL_bgl_za762za7c3za704anonymo2536za7,
		BGl_z62zc3z04anonymousza31428ze32385ze5zz__match_normaliza7eza7, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2440z00zz__match_normaliza7eza7,
		BgL_bgl_string2440za700za7za7_2537za7, "\077\077?-", 4);
	      DEFINE_STRING(BGl_string2441z00zz__match_normaliza7eza7,
		BgL_bgl_string2441za700za7za7_2538za7, "g", 1);
	      DEFINE_STRING(BGl_string2442z00zz__match_normaliza7eza7,
		BgL_bgl_string2442za700za7za7_2539za7, "HOLE-", 5);
	      DEFINE_STRING(BGl_string2444z00zz__match_normaliza7eza7,
		BgL_bgl_string2444za700za7za7_2540za7, "hole", 4);
	      DEFINE_STRING(BGl_string2446z00zz__match_normaliza7eza7,
		BgL_bgl_string2446za700za7za7_2541za7, "times", 5);
	      DEFINE_STRING(BGl_string2449z00zz__match_normaliza7eza7,
		BgL_bgl_string2449za700za7za7_2542za7, "...", 3);
	      DEFINE_STRING(BGl_string2451z00zz__match_normaliza7eza7,
		BgL_bgl_string2451za700za7za7_2543za7, "value", 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2447z00zz__match_normaliza7eza7,
		BgL_bgl_za762za7c3za704anonymo2544za7,
		BGl_z62zc3z04anonymousza31481ze3ze5zz__match_normaliza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string2453z00zz__match_normaliza7eza7,
		BgL_bgl_string2453za700za7za7_2545za7, "on", 2);
	      DEFINE_STRING(BGl_string2455z00zz__match_normaliza7eza7,
		BgL_bgl_string2455za700za7za7_2546za7, "off", 3);
	      DEFINE_STRING(BGl_string2457z00zz__match_normaliza7eza7,
		BgL_bgl_string2457za700za7za7_2547za7, "xcons", 5);
	      DEFINE_STRING(BGl_string2459z00zz__match_normaliza7eza7,
		BgL_bgl_string2459za700za7za7_2548za7, "var", 3);
	      DEFINE_STRING(BGl_string2461z00zz__match_normaliza7eza7,
		BgL_bgl_string2461za700za7za7_2549za7, "segment", 7);
	      DEFINE_STRING(BGl_string2463z00zz__match_normaliza7eza7,
		BgL_bgl_string2463za700za7za7_2550za7, "end-ssetq", 9);
	      DEFINE_STRING(BGl_string2465z00zz__match_normaliza7eza7,
		BgL_bgl_string2465za700za7za7_2551za7, "tree", 4);
	      DEFINE_STRING(BGl_string2467z00zz__match_normaliza7eza7,
		BgL_bgl_string2467za700za7za7_2552za7, "ssetq-append", 12);
	      DEFINE_STRING(BGl_string2469z00zz__match_normaliza7eza7,
		BgL_bgl_string2469za700za7za7_2553za7, "eval-append", 11);
	      DEFINE_STRING(BGl_string2390z00zz__match_normaliza7eza7,
		BgL_bgl_string2390za700za7za7_2554za7, "atom", 4);
	      DEFINE_STRING(BGl_string2472z00zz__match_normaliza7eza7,
		BgL_bgl_string2472za700za7za7_2555za7, "tagged-or", 9);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2388z00zz__match_normaliza7eza7,
		BgL_bgl_za762za7c3za704anonymo2556za7, va_generic_entry,
		BGl_z62zc3z04anonymousza31240ze3ze5zz__match_normaliza7eza7, BUNSPEC, -1);
	      DEFINE_STRING(BGl_string2393z00zz__match_normaliza7eza7,
		BgL_bgl_string2393za700za7za7_2557za7, "or", 2);
	      DEFINE_STRING(BGl_string2476z00zz__match_normaliza7eza7,
		BgL_bgl_string2476za700za7za7_2558za7, "vector-begin", 12);
	      DEFINE_STRING(BGl_string2396z00zz__match_normaliza7eza7,
		BgL_bgl_string2396za700za7za7_2559za7, "t-or", 4);
	      DEFINE_STRING(BGl_string2399z00zz__match_normaliza7eza7,
		BgL_bgl_string2399za700za7za7_2560za7, "and", 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2391z00zz__match_normaliza7eza7,
		BgL_bgl_za762za7c3za704anonymo2561za7, va_generic_entry,
		BGl_z62zc3z04anonymousza31274ze3ze5zz__match_normaliza7eza7, BUNSPEC, -1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2473z00zz__match_normaliza7eza7,
		BgL_bgl_za762za7c3za704anonymo2562za7,
		BGl_z62zc3z04anonymousza31667ze3ze5zz__match_normaliza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2474z00zz__match_normaliza7eza7,
		BgL_bgl_za762za7c3za704anonymo2563za7,
		BGl_z62zc3z04anonymousza31428ze32387ze5zz__match_normaliza7eza7, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2394z00zz__match_normaliza7eza7,
		BgL_bgl_za762za7c3za704anonymo2564za7, va_generic_entry,
		BGl_z62zc3z04anonymousza31296ze3ze5zz__match_normaliza7eza7, BUNSPEC, -1);
	      DEFINE_STRING(BGl_string2480z00zz__match_normaliza7eza7,
		BgL_bgl_string2480za700za7za7_2565za7, "vector-any", 10);
	      DEFINE_STRING(BGl_string2482z00zz__match_normaliza7eza7,
		BgL_bgl_string2482za700za7za7_2566za7, "vector-cons", 11);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2397z00zz__match_normaliza7eza7,
		BgL_bgl_za762za7c3za704anonymo2567za7, va_generic_entry,
		BGl_z62zc3z04anonymousza31316ze3ze5zz__match_normaliza7eza7, BUNSPEC, -1);
	      DEFINE_STRING(BGl_string2486z00zz__match_normaliza7eza7,
		BgL_bgl_string2486za700za7za7_2568za7, "vector-end", 10);
	      DEFINE_STRING(BGl_string2490z00zz__match_normaliza7eza7,
		BgL_bgl_string2490za700za7za7_2569za7, "vector-times", 12);
	      DEFINE_STRING(BGl_string2494z00zz__match_normaliza7eza7,
		BgL_bgl_string2494za700za7za7_2570za7, "define-struct", 13);
	      DEFINE_STRING(BGl_string2495z00zz__match_normaliza7eza7,
		BgL_bgl_string2495za700za7za7_2571za7, "Incorrect declaration: ", 23);
	      DEFINE_STRING(BGl_string2497z00zz__match_normaliza7eza7,
		BgL_bgl_string2497za700za7za7_2572za7, "Aborted", 7);
	      DEFINE_STRING(BGl_string2499z00zz__match_normaliza7eza7,
		BgL_bgl_string2499za700za7za7_2573za7, "define-record-type", 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_normaliza7ezd2patternzd2envza7zz__match_normaliza7eza7,
		BgL_bgl_za762normaliza7a7eza7d2574za7,
		BGl_z62normaliza7ezd2patternz17zz__match_normaliza7eza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_matchzd2definezd2recordzd2typez12zd2envz12zz__match_normaliza7eza7,
		BgL_bgl_za762matchza7d2defin2575z00,
		BGl_z62matchzd2definezd2recordzd2typez12za2zz__match_normaliza7eza7, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_matchzd2definezd2structurez12zd2envzc0zz__match_normaliza7eza7,
		BgL_bgl_za762matchza7d2defin2576z00,
		BGl_z62matchzd2definezd2structurez12z70zz__match_normaliza7eza7, 0L,
		BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol2481z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2485z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2489z00zz__match_normaliza7eza7));
		   
			 ADD_ROOT((void
				*) (&BGl_za2Matchzd2Structuresza2zd2zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2493z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2496z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2498z00zz__match_normaliza7eza7));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__match_normaliza7eza7));
		     ADD_ROOT((void
				*) (&BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_list2470z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_list2477z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_list2478z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_list2483z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_list2484z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_list2487z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_list2488z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_list2491z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_list2492z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_unboundzd2patternzd2zz__match_normaliza7eza7));
		   
			 ADD_ROOT((void
				*) (&BGl_rzd2macrozd2patternzd2initzd2zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2401z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2404z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2407z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2409z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2412z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2415z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2418z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2501z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2421z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2430z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2432z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2435z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2437z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2439z00zz__match_normaliza7eza7));
		   
			 ADD_ROOT((void
				*) (&BGl_za2preferzd2xconsza2zd2zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2443z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2445z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2448z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2450z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2452z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2454z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2456z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2458z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2460z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2462z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2464z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2466z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2468z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2389z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2471z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2392z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2475z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2395z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2479z00zz__match_normaliza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2398z00zz__match_normaliza7eza7));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(long
		BgL_checksumz00_4098, char *BgL_fromz00_4099)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__match_normaliza7eza7))
				{
					BGl_requirezd2initializa7ationz75zz__match_normaliza7eza7 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__match_normaliza7eza7();
					BGl_cnstzd2initzd2zz__match_normaliza7eza7();
					BGl_importedzd2moduleszd2initz00zz__match_normaliza7eza7();
					return BGl_toplevelzd2initzd2zz__match_normaliza7eza7();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__match_normaliza7eza7()
	{
		{	/* Match/normalize.scm 2 */
			BGl_symbol2389z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2390z00zz__match_normaliza7eza7);
			BGl_symbol2392z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2393z00zz__match_normaliza7eza7);
			BGl_symbol2395z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2396z00zz__match_normaliza7eza7);
			BGl_symbol2398z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2399z00zz__match_normaliza7eza7);
			BGl_symbol2401z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2402z00zz__match_normaliza7eza7);
			BGl_symbol2404z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2405z00zz__match_normaliza7eza7);
			BGl_symbol2407z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2408z00zz__match_normaliza7eza7);
			BGl_symbol2409z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2410z00zz__match_normaliza7eza7);
			BGl_symbol2412z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2413z00zz__match_normaliza7eza7);
			BGl_symbol2415z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2416z00zz__match_normaliza7eza7);
			BGl_symbol2418z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2419z00zz__match_normaliza7eza7);
			BGl_symbol2421z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2422z00zz__match_normaliza7eza7);
			BGl_symbol2430z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2431z00zz__match_normaliza7eza7);
			BGl_symbol2432z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2433z00zz__match_normaliza7eza7);
			BGl_symbol2435z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2436z00zz__match_normaliza7eza7);
			BGl_symbol2437z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2438z00zz__match_normaliza7eza7);
			BGl_symbol2439z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2440z00zz__match_normaliza7eza7);
			BGl_symbol2443z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2444z00zz__match_normaliza7eza7);
			BGl_symbol2445z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2446z00zz__match_normaliza7eza7);
			BGl_symbol2448z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2449z00zz__match_normaliza7eza7);
			BGl_symbol2450z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2451z00zz__match_normaliza7eza7);
			BGl_symbol2452z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2453z00zz__match_normaliza7eza7);
			BGl_symbol2454z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2455z00zz__match_normaliza7eza7);
			BGl_symbol2456z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2457z00zz__match_normaliza7eza7);
			BGl_symbol2458z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2459z00zz__match_normaliza7eza7);
			BGl_symbol2460z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2461z00zz__match_normaliza7eza7);
			BGl_symbol2462z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2463z00zz__match_normaliza7eza7);
			BGl_symbol2464z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2465z00zz__match_normaliza7eza7);
			BGl_symbol2466z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2467z00zz__match_normaliza7eza7);
			BGl_symbol2468z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2469z00zz__match_normaliza7eza7);
			BGl_symbol2471z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2472z00zz__match_normaliza7eza7);
			BGl_list2470z00zz__match_normaliza7eza7 =
				MAKE_YOUNG_PAIR(BGl_symbol2392z00zz__match_normaliza7eza7,
				MAKE_YOUNG_PAIR(BGl_symbol2398z00zz__match_normaliza7eza7,
					MAKE_YOUNG_PAIR(BGl_symbol2395z00zz__match_normaliza7eza7,
						MAKE_YOUNG_PAIR(BGl_symbol2471z00zz__match_normaliza7eza7,
							MAKE_YOUNG_PAIR(BGl_symbol2432z00zz__match_normaliza7eza7,
								MAKE_YOUNG_PAIR(BGl_symbol2401z00zz__match_normaliza7eza7,
									BNIL))))));
			BGl_symbol2475z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2476z00zz__match_normaliza7eza7);
			BGl_list2477z00zz__match_normaliza7eza7 =
				MAKE_YOUNG_PAIR(BGl_symbol2430z00zz__match_normaliza7eza7, BNIL);
			BGl_symbol2479z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2480z00zz__match_normaliza7eza7);
			BGl_list2478z00zz__match_normaliza7eza7 =
				MAKE_YOUNG_PAIR(BGl_symbol2479z00zz__match_normaliza7eza7, BNIL);
			BGl_symbol2481z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2482z00zz__match_normaliza7eza7);
			BGl_list2483z00zz__match_normaliza7eza7 =
				MAKE_YOUNG_PAIR(BGl_symbol2418z00zz__match_normaliza7eza7,
				MAKE_YOUNG_PAIR(BNIL, BNIL));
			BGl_symbol2485z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2486z00zz__match_normaliza7eza7);
			BGl_list2484z00zz__match_normaliza7eza7 =
				MAKE_YOUNG_PAIR(BGl_symbol2485z00zz__match_normaliza7eza7, BNIL);
			BGl_list2487z00zz__match_normaliza7eza7 =
				MAKE_YOUNG_PAIR(BGl_symbol2398z00zz__match_normaliza7eza7,
				MAKE_YOUNG_PAIR(BGl_symbol2392z00zz__match_normaliza7eza7,
					MAKE_YOUNG_PAIR(BGl_symbol2401z00zz__match_normaliza7eza7, BNIL)));
			BGl_list2488z00zz__match_normaliza7eza7 =
				MAKE_YOUNG_PAIR(BGl_symbol2445z00zz__match_normaliza7eza7,
				MAKE_YOUNG_PAIR(BGl_symbol2464z00zz__match_normaliza7eza7, BNIL));
			BGl_symbol2489z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2490z00zz__match_normaliza7eza7);
			BGl_list2491z00zz__match_normaliza7eza7 =
				MAKE_YOUNG_PAIR(BGl_symbol2437z00zz__match_normaliza7eza7,
				MAKE_YOUNG_PAIR(BGl_symbol2439z00zz__match_normaliza7eza7, BNIL));
			BGl_list2492z00zz__match_normaliza7eza7 =
				MAKE_YOUNG_PAIR(BGl_symbol2392z00zz__match_normaliza7eza7,
				MAKE_YOUNG_PAIR(BGl_symbol2398z00zz__match_normaliza7eza7,
					MAKE_YOUNG_PAIR(BGl_symbol2395z00zz__match_normaliza7eza7,
						MAKE_YOUNG_PAIR(BGl_symbol2471z00zz__match_normaliza7eza7, BNIL))));
			BGl_symbol2493z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2494z00zz__match_normaliza7eza7);
			BGl_symbol2496z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2497z00zz__match_normaliza7eza7);
			BGl_symbol2498z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2499z00zz__match_normaliza7eza7);
			return (BGl_symbol2501z00zz__match_normaliza7eza7 =
				bstring_to_symbol(BGl_string2502z00zz__match_normaliza7eza7), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__match_normaliza7eza7()
	{
		{	/* Match/normalize.scm 2 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__match_normaliza7eza7()
	{
		{	/* Match/normalize.scm 2 */
			BGl_za2preferzd2xconsza2zd2zz__match_normaliza7eza7 =
				BGl_makezd2togglezd2zz__match_normaliza7eza7();
			BGl_rzd2macrozd2patternzd2initzd2zz__match_normaliza7eza7 = BNIL;
			BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7 = BNIL;
			{	/* Match/normalize.scm 360 */
				obj_t BgL_namez00_2381;

				BgL_namez00_2381 = BGl_symbol2389z00zz__match_normaliza7eza7;
				{	/* Match/normalize.scm 343 */
					obj_t BgL_fnz00_2382;

					BgL_fnz00_2382 = BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7;
					{	/* Match/normalize.scm 334 */
						obj_t BgL_arg1669z00_2383;

						BgL_arg1669z00_2383 =
							MAKE_YOUNG_PAIR(BgL_namez00_2381,
							BGl_proc2388z00zz__match_normaliza7eza7);
						BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7 =
							MAKE_YOUNG_PAIR(BgL_arg1669z00_2383, BgL_fnz00_2382);
					}
				}
			}
			BGl_symbol2389z00zz__match_normaliza7eza7;
			{	/* Match/normalize.scm 375 */
				obj_t BgL_namez00_2388;

				BgL_namez00_2388 = BGl_symbol2392z00zz__match_normaliza7eza7;
				{	/* Match/normalize.scm 343 */
					obj_t BgL_fnz00_2389;

					BgL_fnz00_2389 = BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7;
					{	/* Match/normalize.scm 334 */
						obj_t BgL_arg1669z00_2390;

						BgL_arg1669z00_2390 =
							MAKE_YOUNG_PAIR(BgL_namez00_2388,
							BGl_proc2391z00zz__match_normaliza7eza7);
						BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7 =
							MAKE_YOUNG_PAIR(BgL_arg1669z00_2390, BgL_fnz00_2389);
					}
				}
			}
			BGl_symbol2392z00zz__match_normaliza7eza7;
			{	/* Match/normalize.scm 409 */
				obj_t BgL_namez00_2395;

				BgL_namez00_2395 = BGl_symbol2395z00zz__match_normaliza7eza7;
				{	/* Match/normalize.scm 343 */
					obj_t BgL_fnz00_2396;

					BgL_fnz00_2396 = BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7;
					{	/* Match/normalize.scm 334 */
						obj_t BgL_arg1669z00_2397;

						BgL_arg1669z00_2397 =
							MAKE_YOUNG_PAIR(BgL_namez00_2395,
							BGl_proc2394z00zz__match_normaliza7eza7);
						BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7 =
							MAKE_YOUNG_PAIR(BgL_arg1669z00_2397, BgL_fnz00_2396);
					}
				}
			}
			BGl_symbol2395z00zz__match_normaliza7eza7;
			{	/* Match/normalize.scm 428 */
				obj_t BgL_namez00_2405;

				BgL_namez00_2405 = BGl_symbol2398z00zz__match_normaliza7eza7;
				{	/* Match/normalize.scm 343 */
					obj_t BgL_fnz00_2406;

					BgL_fnz00_2406 = BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7;
					{	/* Match/normalize.scm 334 */
						obj_t BgL_arg1669z00_2407;

						BgL_arg1669z00_2407 =
							MAKE_YOUNG_PAIR(BgL_namez00_2405,
							BGl_proc2397z00zz__match_normaliza7eza7);
						BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7 =
							MAKE_YOUNG_PAIR(BgL_arg1669z00_2407, BgL_fnz00_2406);
					}
				}
			}
			BGl_symbol2398z00zz__match_normaliza7eza7;
			{	/* Match/normalize.scm 444 */
				obj_t BgL_namez00_2420;

				BgL_namez00_2420 = BGl_symbol2401z00zz__match_normaliza7eza7;
				{	/* Match/normalize.scm 343 */
					obj_t BgL_fnz00_2421;

					BgL_fnz00_2421 = BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7;
					{	/* Match/normalize.scm 334 */
						obj_t BgL_arg1669z00_2422;

						BgL_arg1669z00_2422 =
							MAKE_YOUNG_PAIR(BgL_namez00_2420,
							BGl_proc2400z00zz__match_normaliza7eza7);
						BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7 =
							MAKE_YOUNG_PAIR(BgL_arg1669z00_2422, BgL_fnz00_2421);
					}
				}
			}
			BGl_symbol2401z00zz__match_normaliza7eza7;
			{	/* Match/normalize.scm 454 */
				obj_t BgL_namez00_2430;

				BgL_namez00_2430 = BGl_symbol2404z00zz__match_normaliza7eza7;
				{	/* Match/normalize.scm 343 */
					obj_t BgL_fnz00_2431;

					BgL_fnz00_2431 = BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7;
					{	/* Match/normalize.scm 334 */
						obj_t BgL_arg1669z00_2432;

						BgL_arg1669z00_2432 =
							MAKE_YOUNG_PAIR(BgL_namez00_2430,
							BGl_proc2403z00zz__match_normaliza7eza7);
						BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7 =
							MAKE_YOUNG_PAIR(BgL_arg1669z00_2432, BgL_fnz00_2431);
					}
				}
			}
			BGl_symbol2404z00zz__match_normaliza7eza7;
			{	/* Match/normalize.scm 460 */
				obj_t BgL_namez00_2440;

				BgL_namez00_2440 = BGl_symbol2407z00zz__match_normaliza7eza7;
				{	/* Match/normalize.scm 343 */
					obj_t BgL_fnz00_2441;

					BgL_fnz00_2441 = BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7;
					{	/* Match/normalize.scm 334 */
						obj_t BgL_arg1669z00_2442;

						BgL_arg1669z00_2442 =
							MAKE_YOUNG_PAIR(BgL_namez00_2440,
							BGl_proc2406z00zz__match_normaliza7eza7);
						BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7 =
							MAKE_YOUNG_PAIR(BgL_arg1669z00_2442, BgL_fnz00_2441);
					}
				}
			}
			BGl_symbol2407z00zz__match_normaliza7eza7;
			BGl_unboundzd2patternzd2zz__match_normaliza7eza7 =
				BGl_symbol2409z00zz__match_normaliza7eza7;
			BGl_za2Matchzd2Structuresza2zd2zz__match_normaliza7eza7 = BNIL;
			{	/* Match/normalize.scm 563 */
				obj_t BgL_namez00_2493;

				BgL_namez00_2493 = BGl_symbol2412z00zz__match_normaliza7eza7;
				{	/* Match/normalize.scm 343 */
					obj_t BgL_fnz00_2494;

					BgL_fnz00_2494 = BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7;
					{	/* Match/normalize.scm 334 */
						obj_t BgL_arg1669z00_2495;

						BgL_arg1669z00_2495 =
							MAKE_YOUNG_PAIR(BgL_namez00_2493,
							BGl_proc2411z00zz__match_normaliza7eza7);
						BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7 =
							MAKE_YOUNG_PAIR(BgL_arg1669z00_2495, BgL_fnz00_2494);
					}
				}
			}
			return BGl_symbol2412z00zz__match_normaliza7eza7;
		}

	}



/* &<@anonymous:1369> */
	obj_t BGl_z62zc3z04anonymousza31369ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3524, obj_t BgL_namez00_3525, obj_t BgL_predz00_3526,
		obj_t BgL_eza2za2_3527)
	{
		{	/* Match/normalize.scm 563 */
			{	/* Match/normalize.scm 564 */
				obj_t BgL_zc3z04anonymousza31370ze3z87_3804;

				BgL_zc3z04anonymousza31370ze3z87_3804 =
					MAKE_FX_PROCEDURE
					(BGl_z62zc3z04anonymousza31370ze3ze5zz__match_normaliza7eza7,
					(int) (((long) 2)), (int) (((long) 3)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31370ze3z87_3804, (int) (((long) 0)),
					BgL_eza2za2_3527);
				PROCEDURE_SET(BgL_zc3z04anonymousza31370ze3z87_3804, (int) (((long) 1)),
					BgL_predz00_3526);
				PROCEDURE_SET(BgL_zc3z04anonymousza31370ze3z87_3804, (int) (((long) 2)),
					BgL_namez00_3525);
				return BgL_zc3z04anonymousza31370ze3z87_3804;
			}
		}

	}



/* &<@anonymous:1370> */
	obj_t BGl_z62zc3z04anonymousza31370ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3528, obj_t BgL_rz00_3532, obj_t BgL_cz00_3533)
	{
		{	/* Match/normalize.scm 564 */
			{	/* Match/normalize.scm 565 */
				obj_t BgL_eza2za2_3529;
				obj_t BgL_predz00_3530;
				obj_t BgL_namez00_3531;

				BgL_eza2za2_3529 = PROCEDURE_REF(BgL_envz00_3528, (int) (((long) 0)));
				BgL_predz00_3530 = PROCEDURE_REF(BgL_envz00_3528, (int) (((long) 1)));
				BgL_namez00_3531 = PROCEDURE_REF(BgL_envz00_3528, (int) (((long) 2)));
				{	/* Match/normalize.scm 565 */
					obj_t BgL_arg1371z00_3805;

					{	/* Match/normalize.scm 565 */
						obj_t BgL_arg1372z00_3806;

						{	/* Match/normalize.scm 565 */
							obj_t BgL_arg1373z00_3807;

							{	/* Match/normalize.scm 565 */
								obj_t BgL_arg1374z00_3808;

								{	/* Match/normalize.scm 565 */
									obj_t BgL_arg1375z00_3809;

									if (NULLP(BgL_eza2za2_3529))
										{	/* Match/normalize.scm 565 */
											BgL_arg1375z00_3809 = BNIL;
										}
									else
										{	/* Match/normalize.scm 565 */
											obj_t BgL_head1121z00_3810;

											{	/* Match/normalize.scm 565 */
												obj_t BgL_arg1382z00_3811;

												{	/* Match/normalize.scm 565 */
													obj_t BgL_arg1383z00_3812;

													BgL_arg1383z00_3812 = CAR(((obj_t) BgL_eza2za2_3529));
													{	/* Match/normalize.scm 124 */
														obj_t BgL_fun1427z00_3813;

														BgL_fun1427z00_3813 =
															BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
															(BgL_arg1383z00_3812);
														BgL_arg1382z00_3811 =
															PROCEDURE_ENTRY(BgL_fun1427z00_3813)
															(BgL_fun1427z00_3813,
															BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7,
															BGl_proc2414z00zz__match_normaliza7eza7, BEOA);
													}
												}
												{	/* Match/normalize.scm 565 */
													obj_t BgL_res2175z00_3815;

													BgL_res2175z00_3815 =
														MAKE_YOUNG_PAIR(BgL_arg1382z00_3811, BNIL);
													BgL_head1121z00_3810 = BgL_res2175z00_3815;
												}
											}
											{	/* Match/normalize.scm 565 */
												obj_t BgL_g1124z00_3816;

												BgL_g1124z00_3816 = CDR(((obj_t) BgL_eza2za2_3529));
												{
													obj_t BgL_l1119z00_3818;
													obj_t BgL_tail1122z00_3819;

													BgL_l1119z00_3818 = BgL_g1124z00_3816;
													BgL_tail1122z00_3819 = BgL_head1121z00_3810;
												BgL_zc3z04anonymousza31377ze3z87_3817:
													if (NULLP(BgL_l1119z00_3818))
														{	/* Match/normalize.scm 565 */
															BgL_arg1375z00_3809 = BgL_head1121z00_3810;
														}
													else
														{	/* Match/normalize.scm 565 */
															obj_t BgL_newtail1123z00_3820;

															{	/* Match/normalize.scm 565 */
																obj_t BgL_arg1380z00_3821;

																{	/* Match/normalize.scm 565 */
																	obj_t BgL_arg1381z00_3822;

																	BgL_arg1381z00_3822 =
																		CAR(((obj_t) BgL_l1119z00_3818));
																	BgL_arg1380z00_3821 =
																		BGl_normaliza7ezd2patternz75zz__match_normaliza7eza7
																		(BgL_arg1381z00_3822);
																}
																{	/* Match/normalize.scm 565 */
																	obj_t BgL_res2181z00_3823;

																	BgL_res2181z00_3823 =
																		MAKE_YOUNG_PAIR(BgL_arg1380z00_3821, BNIL);
																	BgL_newtail1123z00_3820 = BgL_res2181z00_3823;
																}
															}
															SET_CDR(BgL_tail1122z00_3819,
																BgL_newtail1123z00_3820);
															{	/* Match/normalize.scm 565 */
																obj_t BgL_arg1379z00_3824;

																BgL_arg1379z00_3824 =
																	CDR(((obj_t) BgL_l1119z00_3818));
																{
																	obj_t BgL_tail1122z00_4225;
																	obj_t BgL_l1119z00_4224;

																	BgL_l1119z00_4224 = BgL_arg1379z00_3824;
																	BgL_tail1122z00_4225 =
																		BgL_newtail1123z00_3820;
																	BgL_tail1122z00_3819 = BgL_tail1122z00_4225;
																	BgL_l1119z00_3818 = BgL_l1119z00_4224;
																	goto BgL_zc3z04anonymousza31377ze3z87_3817;
																}
															}
														}
												}
											}
										}
									BgL_arg1374z00_3808 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg1375z00_3809, BNIL);
								}
								BgL_arg1373z00_3807 =
									MAKE_YOUNG_PAIR(BgL_predz00_3530, BgL_arg1374z00_3808);
							}
							BgL_arg1372z00_3806 =
								MAKE_YOUNG_PAIR(BgL_namez00_3531, BgL_arg1373z00_3807);
						}
						BgL_arg1371z00_3805 =
							MAKE_YOUNG_PAIR(BGl_symbol2412z00zz__match_normaliza7eza7,
							BgL_arg1372z00_3806);
					}
					return
						PROCEDURE_ENTRY(BgL_cz00_3533) (BgL_cz00_3533, BgL_arg1371z00_3805,
						BgL_rz00_3532, BEOA);
				}
			}
		}

	}



/* &<@anonymous:1428> */
	obj_t BGl_z62zc3z04anonymousza31428ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3534, obj_t BgL_patternz00_3535, obj_t BgL_rrz00_3536)
	{
		{	/* Match/normalize.scm 126 */
			return BgL_patternz00_3535;
		}

	}



/* &<@anonymous:1358> */
	obj_t BGl_z62zc3z04anonymousza31358ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3537, obj_t BgL_lz00_3538)
	{
		{	/* Match/normalize.scm 460 */
			{	/* Match/normalize.scm 461 */
				bool_t BgL_test2580z00_4235;

				if (NULLP(BgL_lz00_3538))
					{	/* Match/normalize.scm 461 */
						BgL_test2580z00_4235 = ((bool_t) 1);
					}
				else
					{	/* Match/normalize.scm 461 */
						obj_t BgL_tmpz00_4238;

						BgL_tmpz00_4238 = CDR(((obj_t) BgL_lz00_3538));
						BgL_test2580z00_4235 = PAIRP(BgL_tmpz00_4238);
					}
				if (BgL_test2580z00_4235)
					{	/* Match/normalize.scm 461 */
						return
							BGl_errorz00zz__errorz00
							(BGl_symbol2415z00zz__match_normaliza7eza7,
							BGl_string2417z00zz__match_normaliza7eza7, BgL_lz00_3538);
					}
				else
					{	/* Match/normalize.scm 463 */
						obj_t BgL_zc3z04anonymousza31362ze3z87_3825;

						BgL_zc3z04anonymousza31362ze3z87_3825 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31362ze3ze5zz__match_normaliza7eza7,
							(int) (((long) 2)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31362ze3z87_3825,
							(int) (((long) 0)), BgL_lz00_3538);
						return BgL_zc3z04anonymousza31362ze3z87_3825;
					}
			}
		}

	}



/* &<@anonymous:1362> */
	obj_t BGl_z62zc3z04anonymousza31362ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3539, obj_t BgL_rz00_3541, obj_t BgL_cz00_3542)
	{
		{	/* Match/normalize.scm 463 */
			{	/* Match/normalize.scm 464 */
				obj_t BgL_lz00_3540;

				BgL_lz00_3540 = PROCEDURE_REF(BgL_envz00_3539, (int) (((long) 0)));
				{	/* Match/normalize.scm 464 */
					obj_t BgL_arg1363z00_3826;

					{	/* Match/normalize.scm 464 */
						obj_t BgL_arg1364z00_3827;

						{	/* Match/normalize.scm 464 */
							obj_t BgL_arg1365z00_3828;

							BgL_arg1365z00_3828 = CAR(((obj_t) BgL_lz00_3540));
							BgL_arg1364z00_3827 = MAKE_YOUNG_PAIR(BgL_arg1365z00_3828, BNIL);
						}
						BgL_arg1363z00_3826 =
							MAKE_YOUNG_PAIR(BGl_symbol2418z00zz__match_normaliza7eza7,
							BgL_arg1364z00_3827);
					}
					return
						PROCEDURE_ENTRY(BgL_cz00_3542) (BgL_cz00_3542, BgL_arg1363z00_3826,
						BgL_rz00_3541, BEOA);
				}
			}
		}

	}



/* &<@anonymous:1347> */
	obj_t BGl_z62zc3z04anonymousza31347ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3543, obj_t BgL_lz00_3544)
	{
		{	/* Match/normalize.scm 454 */
			{	/* Match/normalize.scm 455 */
				bool_t BgL_test2582z00_4259;

				if (NULLP(BgL_lz00_3544))
					{	/* Match/normalize.scm 455 */
						BgL_test2582z00_4259 = ((bool_t) 1);
					}
				else
					{	/* Match/normalize.scm 455 */
						obj_t BgL_tmpz00_4262;

						BgL_tmpz00_4262 = CDR(((obj_t) BgL_lz00_3544));
						BgL_test2582z00_4259 = PAIRP(BgL_tmpz00_4262);
					}
				if (BgL_test2582z00_4259)
					{	/* Match/normalize.scm 455 */
						return
							BGl_errorz00zz__errorz00
							(BGl_symbol2415z00zz__match_normaliza7eza7,
							BGl_string2420z00zz__match_normaliza7eza7, BgL_lz00_3544);
					}
				else
					{	/* Match/normalize.scm 457 */
						obj_t BgL_zc3z04anonymousza31352ze3z87_3829;

						BgL_zc3z04anonymousza31352ze3z87_3829 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31352ze3ze5zz__match_normaliza7eza7,
							(int) (((long) 2)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31352ze3z87_3829,
							(int) (((long) 0)), BgL_lz00_3544);
						return BgL_zc3z04anonymousza31352ze3z87_3829;
					}
			}
		}

	}



/* &<@anonymous:1352> */
	obj_t BGl_z62zc3z04anonymousza31352ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3545, obj_t BgL_rz00_3547, obj_t BgL_cz00_3548)
	{
		{	/* Match/normalize.scm 457 */
			{	/* Match/normalize.scm 458 */
				obj_t BgL_lz00_3546;

				BgL_lz00_3546 = PROCEDURE_REF(BgL_envz00_3545, (int) (((long) 0)));
				{	/* Match/normalize.scm 458 */
					obj_t BgL_arg1353z00_3830;

					{	/* Match/normalize.scm 458 */
						obj_t BgL_arg1354z00_3831;

						{	/* Match/normalize.scm 458 */
							obj_t BgL_arg1355z00_3832;

							BgL_arg1355z00_3832 = CAR(((obj_t) BgL_lz00_3546));
							BgL_arg1354z00_3831 = MAKE_YOUNG_PAIR(BgL_arg1355z00_3832, BNIL);
						}
						BgL_arg1353z00_3830 =
							MAKE_YOUNG_PAIR(BGl_symbol2421z00zz__match_normaliza7eza7,
							BgL_arg1354z00_3831);
					}
					return
						PROCEDURE_ENTRY(BgL_cz00_3548) (BgL_cz00_3548, BgL_arg1353z00_3830,
						BgL_rz00_3547, BEOA);
				}
			}
		}

	}



/* &<@anonymous:1334> */
	obj_t BGl_z62zc3z04anonymousza31334ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3549, obj_t BgL_lz00_3550)
	{
		{	/* Match/normalize.scm 444 */
			{	/* Match/normalize.scm 445 */
				bool_t BgL_test2584z00_4283;

				if (NULLP(BgL_lz00_3550))
					{	/* Match/normalize.scm 445 */
						BgL_test2584z00_4283 = ((bool_t) 1);
					}
				else
					{	/* Match/normalize.scm 445 */
						obj_t BgL_tmpz00_4286;

						BgL_tmpz00_4286 = CDR(((obj_t) BgL_lz00_3550));
						BgL_test2584z00_4283 = PAIRP(BgL_tmpz00_4286);
					}
				if (BgL_test2584z00_4283)
					{	/* Match/normalize.scm 445 */
						return
							BGl_errorz00zz__errorz00
							(BGl_symbol2415z00zz__match_normaliza7eza7,
							BGl_string2423z00zz__match_normaliza7eza7, BgL_lz00_3550);
					}
				else
					{	/* Match/normalize.scm 447 */
						obj_t BgL_ez00_3833;

						BgL_ez00_3833 = CAR(((obj_t) BgL_lz00_3550));
						{	/* Match/normalize.scm 448 */
							obj_t BgL_zc3z04anonymousza31339ze3z87_3834;

							BgL_zc3z04anonymousza31339ze3z87_3834 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31339ze3ze5zz__match_normaliza7eza7,
								(int) (((long) 2)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31339ze3z87_3834,
								(int) (((long) 0)), BgL_ez00_3833);
							return BgL_zc3z04anonymousza31339ze3z87_3834;
						}
					}
			}
		}

	}



/* &<@anonymous:1339> */
	obj_t BGl_z62zc3z04anonymousza31339ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3551, obj_t BgL_rz00_3553, obj_t BgL_cz00_3554)
	{
		{	/* Match/normalize.scm 448 */
			{	/* Match/normalize.scm 449 */
				obj_t BgL_ez00_3552;

				BgL_ez00_3552 = PROCEDURE_REF(BgL_envz00_3551, (int) (((long) 0)));
				{	/* Match/normalize.scm 449 */
					obj_t BgL_fun1341z00_3835;

					BgL_fun1341z00_3835 =
						BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
						(BgL_ez00_3552);
					{	/* Match/normalize.scm 452 */
						obj_t BgL_zc3z04anonymousza31342ze3z87_3836;

						BgL_zc3z04anonymousza31342ze3z87_3836 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31342ze3ze5zz__match_normaliza7eza7,
							(int) (((long) 2)), (int) (((long) 2)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31342ze3z87_3836,
							(int) (((long) 0)), BgL_cz00_3554);
						PROCEDURE_SET(BgL_zc3z04anonymousza31342ze3z87_3836,
							(int) (((long) 1)), BgL_rz00_3553);
						return PROCEDURE_ENTRY(BgL_fun1341z00_3835) (BgL_fun1341z00_3835,
							BgL_rz00_3553, BgL_zc3z04anonymousza31342ze3z87_3836, BEOA);
					}
				}
			}
		}

	}



/* &<@anonymous:1342> */
	obj_t BGl_z62zc3z04anonymousza31342ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3555, obj_t BgL_patternz00_3558, obj_t BgL_rrz00_3559)
	{
		{	/* Match/normalize.scm 451 */
			{	/* Match/normalize.scm 452 */
				obj_t BgL_cz00_3556;
				obj_t BgL_rz00_3557;

				BgL_cz00_3556 = PROCEDURE_REF(BgL_envz00_3555, (int) (((long) 0)));
				BgL_rz00_3557 = PROCEDURE_REF(BgL_envz00_3555, (int) (((long) 1)));
				{	/* Match/normalize.scm 452 */
					obj_t BgL_arg1343z00_3837;

					{	/* Match/normalize.scm 452 */
						obj_t BgL_arg1344z00_3838;

						BgL_arg1344z00_3838 = MAKE_YOUNG_PAIR(BgL_patternz00_3558, BNIL);
						BgL_arg1343z00_3837 =
							MAKE_YOUNG_PAIR(BGl_symbol2401z00zz__match_normaliza7eza7,
							BgL_arg1344z00_3838);
					}
					return
						PROCEDURE_ENTRY(BgL_cz00_3556) (BgL_cz00_3556, BgL_arg1343z00_3837,
						BgL_rz00_3557, BEOA);
				}
			}
		}

	}



/* &<@anonymous:1316> */
	obj_t BGl_z62zc3z04anonymousza31316ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3560, obj_t BgL_lz00_3561)
	{
		{	/* Match/normalize.scm 428 */
			if (NULLP(BgL_lz00_3561))
				{	/* Match/normalize.scm 429 */
					return
						BGl_errorz00zz__errorz00(BGl_symbol2415z00zz__match_normaliza7eza7,
						BGl_string2424z00zz__match_normaliza7eza7, BgL_lz00_3561);
				}
			else
				{	/* Match/normalize.scm 431 */
					obj_t BgL_ez00_3839;
					obj_t BgL_eza2za2_3840;

					BgL_ez00_3839 = CAR(((obj_t) BgL_lz00_3561));
					BgL_eza2za2_3840 = CDR(((obj_t) BgL_lz00_3561));
					{	/* Match/normalize.scm 433 */
						obj_t BgL_zc3z04anonymousza31318ze3z87_3841;

						BgL_zc3z04anonymousza31318ze3z87_3841 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31318ze3ze5zz__match_normaliza7eza7,
							(int) (((long) 2)), (int) (((long) 2)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31318ze3z87_3841,
							(int) (((long) 0)), BgL_ez00_3839);
						PROCEDURE_SET(BgL_zc3z04anonymousza31318ze3z87_3841,
							(int) (((long) 1)), BgL_eza2za2_3840);
						return BgL_zc3z04anonymousza31318ze3z87_3841;
					}
				}
		}

	}



/* &<@anonymous:1318> */
	obj_t BGl_z62zc3z04anonymousza31318ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3562, obj_t BgL_rz00_3565, obj_t BgL_cz00_3566)
	{
		{	/* Match/normalize.scm 433 */
			{	/* Match/normalize.scm 434 */
				obj_t BgL_ez00_3563;
				obj_t BgL_eza2za2_3564;

				BgL_ez00_3563 = PROCEDURE_REF(BgL_envz00_3562, (int) (((long) 0)));
				BgL_eza2za2_3564 = PROCEDURE_REF(BgL_envz00_3562, (int) (((long) 1)));
				if (PAIRP(BgL_eza2za2_3564))
					{	/* Match/normalize.scm 435 */
						obj_t BgL_fun1323z00_3842;

						BgL_fun1323z00_3842 =
							BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
							(BgL_ez00_3563);
						{	/* Match/normalize.scm 438 */
							obj_t BgL_zc3z04anonymousza31324ze3z87_3843;

							BgL_zc3z04anonymousza31324ze3z87_3843 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31324ze3ze5zz__match_normaliza7eza7,
								(int) (((long) 2)), (int) (((long) 2)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31324ze3z87_3843,
								(int) (((long) 0)), BgL_eza2za2_3564);
							PROCEDURE_SET(BgL_zc3z04anonymousza31324ze3z87_3843,
								(int) (((long) 1)), BgL_cz00_3566);
							return PROCEDURE_ENTRY(BgL_fun1323z00_3842) (BgL_fun1323z00_3842,
								BgL_rz00_3565, BgL_zc3z04anonymousza31324ze3z87_3843, BEOA);
						}
					}
				else
					{	/* Match/normalize.scm 442 */
						obj_t BgL_fun1332z00_3844;

						BgL_fun1332z00_3844 =
							BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
							(BgL_ez00_3563);
						return PROCEDURE_ENTRY(BgL_fun1332z00_3844) (BgL_fun1332z00_3844,
							BgL_rz00_3565, BgL_cz00_3566, BEOA);
					}
			}
		}

	}



/* &<@anonymous:1324> */
	obj_t BGl_z62zc3z04anonymousza31324ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3567, obj_t BgL_pattern1z00_3570, obj_t BgL_rrz00_3571)
	{
		{	/* Match/normalize.scm 437 */
			{	/* Match/normalize.scm 438 */
				obj_t BgL_eza2za2_3568;
				obj_t BgL_cz00_3569;

				BgL_eza2za2_3568 = PROCEDURE_REF(BgL_envz00_3567, (int) (((long) 0)));
				BgL_cz00_3569 = PROCEDURE_REF(BgL_envz00_3567, (int) (((long) 1)));
				{	/* Match/normalize.scm 438 */
					obj_t BgL_fun1327z00_3845;

					{	/* Match/normalize.scm 438 */
						obj_t BgL_arg1325z00_3846;

						BgL_arg1325z00_3846 =
							MAKE_YOUNG_PAIR(BGl_symbol2398z00zz__match_normaliza7eza7,
							BgL_eza2za2_3568);
						BgL_fun1327z00_3845 =
							BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
							(BgL_arg1325z00_3846);
					}
					{	/* Match/normalize.scm 441 */
						obj_t BgL_zc3z04anonymousza31328ze3z87_3847;

						BgL_zc3z04anonymousza31328ze3z87_3847 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31328ze3ze5zz__match_normaliza7eza7,
							(int) (((long) 2)), (int) (((long) 2)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31328ze3z87_3847,
							(int) (((long) 0)), BgL_pattern1z00_3570);
						PROCEDURE_SET(BgL_zc3z04anonymousza31328ze3z87_3847,
							(int) (((long) 1)), BgL_cz00_3569);
						return PROCEDURE_ENTRY(BgL_fun1327z00_3845) (BgL_fun1327z00_3845,
							BgL_rrz00_3571, BgL_zc3z04anonymousza31328ze3z87_3847, BEOA);
					}
				}
			}
		}

	}



/* &<@anonymous:1328> */
	obj_t BGl_z62zc3z04anonymousza31328ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3572, obj_t BgL_pattern2z00_3575, obj_t BgL_rrrz00_3576)
	{
		{	/* Match/normalize.scm 440 */
			{	/* Match/normalize.scm 441 */
				obj_t BgL_pattern1z00_3573;
				obj_t BgL_cz00_3574;

				BgL_pattern1z00_3573 =
					PROCEDURE_REF(BgL_envz00_3572, (int) (((long) 0)));
				BgL_cz00_3574 = PROCEDURE_REF(BgL_envz00_3572, (int) (((long) 1)));
				{	/* Match/normalize.scm 441 */
					obj_t BgL_arg1329z00_3848;

					{	/* Match/normalize.scm 441 */
						obj_t BgL_arg1330z00_3849;

						{	/* Match/normalize.scm 441 */
							obj_t BgL_arg1331z00_3850;

							BgL_arg1331z00_3850 = MAKE_YOUNG_PAIR(BgL_pattern2z00_3575, BNIL);
							BgL_arg1330z00_3849 =
								MAKE_YOUNG_PAIR(BgL_pattern1z00_3573, BgL_arg1331z00_3850);
						}
						BgL_arg1329z00_3848 =
							MAKE_YOUNG_PAIR(BGl_symbol2398z00zz__match_normaliza7eza7,
							BgL_arg1330z00_3849);
					}
					return
						PROCEDURE_ENTRY(BgL_cz00_3574) (BgL_cz00_3574, BgL_arg1329z00_3848,
						BgL_rrrz00_3576, BEOA);
				}
			}
		}

	}



/* &<@anonymous:1296> */
	obj_t BGl_z62zc3z04anonymousza31296ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3577, obj_t BgL_lz00_3578)
	{
		{	/* Match/normalize.scm 409 */
			if (NULLP(BgL_lz00_3578))
				{	/* Match/normalize.scm 410 */
					return
						BGl_errorz00zz__errorz00(BGl_symbol2415z00zz__match_normaliza7eza7,
						BGl_string2425z00zz__match_normaliza7eza7, BgL_lz00_3578);
				}
			else
				{	/* Match/normalize.scm 412 */
					obj_t BgL_ez00_3851;
					obj_t BgL_eza2za2_3852;

					BgL_ez00_3851 = CAR(((obj_t) BgL_lz00_3578));
					BgL_eza2za2_3852 = CDR(((obj_t) BgL_lz00_3578));
					{	/* Match/normalize.scm 414 */
						obj_t BgL_zc3z04anonymousza31298ze3z87_3853;

						BgL_zc3z04anonymousza31298ze3z87_3853 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31298ze3ze5zz__match_normaliza7eza7,
							(int) (((long) 2)), (int) (((long) 3)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31298ze3z87_3853,
							(int) (((long) 0)), BgL_ez00_3851);
						PROCEDURE_SET(BgL_zc3z04anonymousza31298ze3z87_3853,
							(int) (((long) 1)), BgL_eza2za2_3852);
						PROCEDURE_SET(BgL_zc3z04anonymousza31298ze3z87_3853,
							(int) (((long) 2)), BgL_lz00_3578);
						return BgL_zc3z04anonymousza31298ze3z87_3853;
					}
				}
		}

	}



/* &<@anonymous:1298> */
	obj_t BGl_z62zc3z04anonymousza31298ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3579, obj_t BgL_rz00_3583, obj_t BgL_cz00_3584)
	{
		{	/* Match/normalize.scm 414 */
			{	/* Match/normalize.scm 415 */
				obj_t BgL_ez00_3580;
				obj_t BgL_eza2za2_3581;
				obj_t BgL_lz00_3582;

				BgL_ez00_3580 = PROCEDURE_REF(BgL_envz00_3579, (int) (((long) 0)));
				BgL_eza2za2_3581 = PROCEDURE_REF(BgL_envz00_3579, (int) (((long) 1)));
				BgL_lz00_3582 = PROCEDURE_REF(BgL_envz00_3579, (int) (((long) 2)));
				if (PAIRP(BgL_eza2za2_3581))
					{	/* Match/normalize.scm 416 */
						obj_t BgL_fun1301z00_3854;

						BgL_fun1301z00_3854 =
							BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
							(BgL_ez00_3580);
						{	/* Match/normalize.scm 419 */
							obj_t BgL_zc3z04anonymousza31302ze3z87_3855;

							BgL_zc3z04anonymousza31302ze3z87_3855 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31302ze3ze5zz__match_normaliza7eza7,
								(int) (((long) 2)), (int) (((long) 4)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31302ze3z87_3855,
								(int) (((long) 0)), BgL_eza2za2_3581);
							PROCEDURE_SET(BgL_zc3z04anonymousza31302ze3z87_3855,
								(int) (((long) 1)), BgL_lz00_3582);
							PROCEDURE_SET(BgL_zc3z04anonymousza31302ze3z87_3855,
								(int) (((long) 2)), BgL_cz00_3584);
							PROCEDURE_SET(BgL_zc3z04anonymousza31302ze3z87_3855,
								(int) (((long) 3)), BgL_rz00_3583);
							return PROCEDURE_ENTRY(BgL_fun1301z00_3854) (BgL_fun1301z00_3854,
								BgL_rz00_3583, BgL_zc3z04anonymousza31302ze3z87_3855, BEOA);
						}
					}
				else
					{	/* Match/normalize.scm 426 */
						obj_t BgL_fun1314z00_3856;

						BgL_fun1314z00_3856 =
							BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
							(BgL_ez00_3580);
						return PROCEDURE_ENTRY(BgL_fun1314z00_3856) (BgL_fun1314z00_3856,
							BgL_rz00_3583, BgL_cz00_3584, BEOA);
					}
			}
		}

	}



/* &<@anonymous:1302> */
	obj_t BGl_z62zc3z04anonymousza31302ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3585, obj_t BgL_pattern1z00_3590, obj_t BgL_rrz00_3591)
	{
		{	/* Match/normalize.scm 418 */
			{	/* Match/normalize.scm 419 */
				obj_t BgL_eza2za2_3586;
				obj_t BgL_lz00_3587;
				obj_t BgL_cz00_3588;
				obj_t BgL_rz00_3589;

				BgL_eza2za2_3586 = PROCEDURE_REF(BgL_envz00_3585, (int) (((long) 0)));
				BgL_lz00_3587 = PROCEDURE_REF(BgL_envz00_3585, (int) (((long) 1)));
				BgL_cz00_3588 = PROCEDURE_REF(BgL_envz00_3585, (int) (((long) 2)));
				BgL_rz00_3589 = PROCEDURE_REF(BgL_envz00_3585, (int) (((long) 3)));
				{	/* Match/normalize.scm 419 */
					obj_t BgL_fun1306z00_3857;

					{	/* Match/normalize.scm 419 */
						obj_t BgL_arg1303z00_3858;

						BgL_arg1303z00_3858 =
							MAKE_YOUNG_PAIR(BGl_symbol2395z00zz__match_normaliza7eza7,
							BgL_eza2za2_3586);
						BgL_fun1306z00_3857 =
							BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
							(BgL_arg1303z00_3858);
					}
					{	/* Match/normalize.scm 422 */
						obj_t BgL_zc3z04anonymousza31307ze3z87_3859;

						BgL_zc3z04anonymousza31307ze3z87_3859 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31307ze3ze5zz__match_normaliza7eza7,
							(int) (((long) 2)), (int) (((long) 4)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31307ze3z87_3859,
							(int) (((long) 0)), BgL_lz00_3587);
						PROCEDURE_SET(BgL_zc3z04anonymousza31307ze3z87_3859,
							(int) (((long) 1)), BgL_pattern1z00_3590);
						PROCEDURE_SET(BgL_zc3z04anonymousza31307ze3z87_3859,
							(int) (((long) 2)), BgL_cz00_3588);
						PROCEDURE_SET(BgL_zc3z04anonymousza31307ze3z87_3859,
							(int) (((long) 3)), BgL_rrz00_3591);
						return PROCEDURE_ENTRY(BgL_fun1306z00_3857) (BgL_fun1306z00_3857,
							BgL_rz00_3589, BgL_zc3z04anonymousza31307ze3z87_3859, BEOA);
					}
				}
			}
		}

	}



/* &<@anonymous:1307> */
	obj_t BGl_z62zc3z04anonymousza31307ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3592, obj_t BgL_pattern2z00_3597, obj_t BgL_rrrz00_3598)
	{
		{	/* Match/normalize.scm 421 */
			{	/* Match/normalize.scm 422 */
				obj_t BgL_lz00_3593;
				obj_t BgL_pattern1z00_3594;
				obj_t BgL_cz00_3595;
				obj_t BgL_rrz00_3596;

				BgL_lz00_3593 = PROCEDURE_REF(BgL_envz00_3592, (int) (((long) 0)));
				BgL_pattern1z00_3594 =
					PROCEDURE_REF(BgL_envz00_3592, (int) (((long) 1)));
				BgL_cz00_3595 = PROCEDURE_REF(BgL_envz00_3592, (int) (((long) 2)));
				BgL_rrz00_3596 = PROCEDURE_REF(BgL_envz00_3592, (int) (((long) 3)));
				{	/* Match/normalize.scm 422 */
					bool_t BgL_test2590z00_4474;

					if (BGl_coherentzd2environmentzf3z21zz__match_normaliza7eza7
						(BgL_rrz00_3596, BgL_rrrz00_3598))
						{	/* Match/normalize.scm 422 */
							BgL_test2590z00_4474 =
								BGl_coherentzd2environmentzf3z21zz__match_normaliza7eza7
								(BgL_rrrz00_3598, BgL_rrz00_3596);
						}
					else
						{	/* Match/normalize.scm 422 */
							BgL_test2590z00_4474 = ((bool_t) 0);
						}
					if (BgL_test2590z00_4474)
						{	/* Match/normalize.scm 424 */
							obj_t BgL_arg1310z00_3860;

							{	/* Match/normalize.scm 424 */
								obj_t BgL_arg1311z00_3861;

								{	/* Match/normalize.scm 424 */
									obj_t BgL_arg1312z00_3862;

									BgL_arg1312z00_3862 =
										MAKE_YOUNG_PAIR(BgL_pattern2z00_3597, BNIL);
									BgL_arg1311z00_3861 =
										MAKE_YOUNG_PAIR(BgL_pattern1z00_3594, BgL_arg1312z00_3862);
								}
								BgL_arg1310z00_3860 =
									MAKE_YOUNG_PAIR(BGl_symbol2395z00zz__match_normaliza7eza7,
									BgL_arg1311z00_3861);
							}
							return
								PROCEDURE_ENTRY(BgL_cz00_3595) (BgL_cz00_3595,
								BgL_arg1310z00_3860, BgL_rrrz00_3598, BEOA);
						}
					else
						{	/* Match/normalize.scm 422 */
							return
								BGl_errorz00zz__errorz00
								(BGl_symbol2415z00zz__match_normaliza7eza7,
								BGl_string2426z00zz__match_normaliza7eza7, BgL_lz00_3593);
						}
				}
			}
		}

	}



/* &<@anonymous:1274> */
	obj_t BGl_z62zc3z04anonymousza31274ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3599, obj_t BgL_lz00_3600)
	{
		{	/* Match/normalize.scm 375 */
			if (NULLP(BgL_lz00_3600))
				{	/* Match/normalize.scm 376 */
					return
						BGl_errorz00zz__errorz00(BGl_symbol2415z00zz__match_normaliza7eza7,
						BGl_string2427z00zz__match_normaliza7eza7, BgL_lz00_3600);
				}
			else
				{	/* Match/normalize.scm 378 */
					obj_t BgL_ez00_3863;
					obj_t BgL_eza2za2_3864;

					BgL_ez00_3863 = CAR(((obj_t) BgL_lz00_3600));
					BgL_eza2za2_3864 = CDR(((obj_t) BgL_lz00_3600));
					{	/* Match/normalize.scm 380 */
						obj_t BgL_zc3z04anonymousza31276ze3z87_3865;

						BgL_zc3z04anonymousza31276ze3z87_3865 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31276ze3ze5zz__match_normaliza7eza7,
							(int) (((long) 2)), (int) (((long) 3)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31276ze3z87_3865,
							(int) (((long) 0)), BgL_ez00_3863);
						PROCEDURE_SET(BgL_zc3z04anonymousza31276ze3z87_3865,
							(int) (((long) 1)), BgL_eza2za2_3864);
						PROCEDURE_SET(BgL_zc3z04anonymousza31276ze3z87_3865,
							(int) (((long) 2)), BgL_lz00_3600);
						return BgL_zc3z04anonymousza31276ze3z87_3865;
					}
				}
		}

	}



/* &<@anonymous:1276> */
	obj_t BGl_z62zc3z04anonymousza31276ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3601, obj_t BgL_rz00_3605, obj_t BgL_cz00_3606)
	{
		{	/* Match/normalize.scm 380 */
			{	/* Match/normalize.scm 381 */
				obj_t BgL_ez00_3602;
				obj_t BgL_eza2za2_3603;
				obj_t BgL_lz00_3604;

				BgL_ez00_3602 = PROCEDURE_REF(BgL_envz00_3601, (int) (((long) 0)));
				BgL_eza2za2_3603 = PROCEDURE_REF(BgL_envz00_3601, (int) (((long) 1)));
				BgL_lz00_3604 = PROCEDURE_REF(BgL_envz00_3601, (int) (((long) 2)));
				if (PAIRP(BgL_eza2za2_3603))
					{	/* Match/normalize.scm 382 */
						obj_t BgL_fun1281z00_3866;

						BgL_fun1281z00_3866 =
							BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
							(BgL_ez00_3602);
						{	/* Match/normalize.scm 385 */
							obj_t BgL_zc3z04anonymousza31282ze3z87_3867;

							BgL_zc3z04anonymousza31282ze3z87_3867 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31282ze3ze5zz__match_normaliza7eza7,
								(int) (((long) 2)), (int) (((long) 4)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31282ze3z87_3867,
								(int) (((long) 0)), BgL_eza2za2_3603);
							PROCEDURE_SET(BgL_zc3z04anonymousza31282ze3z87_3867,
								(int) (((long) 1)), BgL_lz00_3604);
							PROCEDURE_SET(BgL_zc3z04anonymousza31282ze3z87_3867,
								(int) (((long) 2)), BgL_cz00_3606);
							PROCEDURE_SET(BgL_zc3z04anonymousza31282ze3z87_3867,
								(int) (((long) 3)), BgL_rz00_3605);
							return PROCEDURE_ENTRY(BgL_fun1281z00_3866) (BgL_fun1281z00_3866,
								BgL_rz00_3605, BgL_zc3z04anonymousza31282ze3z87_3867, BEOA);
						}
					}
				else
					{	/* Match/normalize.scm 392 */
						obj_t BgL_fun1294z00_3868;

						BgL_fun1294z00_3868 =
							BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
							(BgL_ez00_3602);
						return PROCEDURE_ENTRY(BgL_fun1294z00_3868) (BgL_fun1294z00_3868,
							BgL_rz00_3605, BgL_cz00_3606, BEOA);
					}
			}
		}

	}



/* &<@anonymous:1282> */
	obj_t BGl_z62zc3z04anonymousza31282ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3607, obj_t BgL_pattern1z00_3612, obj_t BgL_rrz00_3613)
	{
		{	/* Match/normalize.scm 384 */
			{	/* Match/normalize.scm 385 */
				obj_t BgL_eza2za2_3608;
				obj_t BgL_lz00_3609;
				obj_t BgL_cz00_3610;
				obj_t BgL_rz00_3611;

				BgL_eza2za2_3608 = PROCEDURE_REF(BgL_envz00_3607, (int) (((long) 0)));
				BgL_lz00_3609 = PROCEDURE_REF(BgL_envz00_3607, (int) (((long) 1)));
				BgL_cz00_3610 = PROCEDURE_REF(BgL_envz00_3607, (int) (((long) 2)));
				BgL_rz00_3611 = PROCEDURE_REF(BgL_envz00_3607, (int) (((long) 3)));
				{	/* Match/normalize.scm 385 */
					obj_t BgL_fun1286z00_3869;

					{	/* Match/normalize.scm 385 */
						obj_t BgL_arg1284z00_3870;

						BgL_arg1284z00_3870 =
							MAKE_YOUNG_PAIR(BGl_symbol2392z00zz__match_normaliza7eza7,
							BgL_eza2za2_3608);
						BgL_fun1286z00_3869 =
							BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
							(BgL_arg1284z00_3870);
					}
					{	/* Match/normalize.scm 388 */
						obj_t BgL_zc3z04anonymousza31287ze3z87_3871;

						BgL_zc3z04anonymousza31287ze3z87_3871 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31287ze3ze5zz__match_normaliza7eza7,
							(int) (((long) 2)), (int) (((long) 4)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31287ze3z87_3871,
							(int) (((long) 0)), BgL_lz00_3609);
						PROCEDURE_SET(BgL_zc3z04anonymousza31287ze3z87_3871,
							(int) (((long) 1)), BgL_pattern1z00_3612);
						PROCEDURE_SET(BgL_zc3z04anonymousza31287ze3z87_3871,
							(int) (((long) 2)), BgL_cz00_3610);
						PROCEDURE_SET(BgL_zc3z04anonymousza31287ze3z87_3871,
							(int) (((long) 3)), BgL_rrz00_3613);
						return PROCEDURE_ENTRY(BgL_fun1286z00_3869) (BgL_fun1286z00_3869,
							BgL_rz00_3611, BgL_zc3z04anonymousza31287ze3z87_3871, BEOA);
					}
				}
			}
		}

	}



/* &<@anonymous:1287> */
	obj_t BGl_z62zc3z04anonymousza31287ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3614, obj_t BgL_pattern2z00_3619, obj_t BgL_rrrz00_3620)
	{
		{	/* Match/normalize.scm 387 */
			{	/* Match/normalize.scm 388 */
				obj_t BgL_lz00_3615;
				obj_t BgL_pattern1z00_3616;
				obj_t BgL_cz00_3617;
				obj_t BgL_rrz00_3618;

				BgL_lz00_3615 = PROCEDURE_REF(BgL_envz00_3614, (int) (((long) 0)));
				BgL_pattern1z00_3616 =
					PROCEDURE_REF(BgL_envz00_3614, (int) (((long) 1)));
				BgL_cz00_3617 = PROCEDURE_REF(BgL_envz00_3614, (int) (((long) 2)));
				BgL_rrz00_3618 = PROCEDURE_REF(BgL_envz00_3614, (int) (((long) 3)));
				{	/* Match/normalize.scm 388 */
					bool_t BgL_test2594z00_4568;

					if (BGl_coherentzd2environmentzf3z21zz__match_normaliza7eza7
						(BgL_rrz00_3618, BgL_rrrz00_3620))
						{	/* Match/normalize.scm 388 */
							BgL_test2594z00_4568 =
								BGl_coherentzd2environmentzf3z21zz__match_normaliza7eza7
								(BgL_rrrz00_3620, BgL_rrz00_3618);
						}
					else
						{	/* Match/normalize.scm 388 */
							BgL_test2594z00_4568 = ((bool_t) 0);
						}
					if (BgL_test2594z00_4568)
						{	/* Match/normalize.scm 390 */
							obj_t BgL_arg1290z00_3872;

							{	/* Match/normalize.scm 390 */
								obj_t BgL_arg1291z00_3873;

								{	/* Match/normalize.scm 390 */
									obj_t BgL_arg1292z00_3874;

									BgL_arg1292z00_3874 =
										MAKE_YOUNG_PAIR(BgL_pattern2z00_3619, BNIL);
									BgL_arg1291z00_3873 =
										MAKE_YOUNG_PAIR(BgL_pattern1z00_3616, BgL_arg1292z00_3874);
								}
								BgL_arg1290z00_3872 =
									MAKE_YOUNG_PAIR(BGl_symbol2392z00zz__match_normaliza7eza7,
									BgL_arg1291z00_3873);
							}
							return
								PROCEDURE_ENTRY(BgL_cz00_3617) (BgL_cz00_3617,
								BgL_arg1290z00_3872, BgL_rrrz00_3620, BEOA);
						}
					else
						{	/* Match/normalize.scm 388 */
							return
								BGl_errorz00zz__errorz00
								(BGl_symbol2415z00zz__match_normaliza7eza7,
								BGl_string2426z00zz__match_normaliza7eza7, BgL_lz00_3615);
						}
				}
			}
		}

	}



/* &<@anonymous:1240> */
	obj_t BGl_z62zc3z04anonymousza31240ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3621, obj_t BgL_lz00_3622)
	{
		{	/* Match/normalize.scm 360 */
			if (NULLP(BgL_lz00_3622))
				{	/* Match/normalize.scm 361 */
					return
						BGl_errorz00zz__errorz00(BGl_symbol2415z00zz__match_normaliza7eza7,
						BGl_string2428z00zz__match_normaliza7eza7, BgL_lz00_3622);
				}
			else
				{	/* Match/normalize.scm 363 */
					obj_t BgL_ez00_3875;
					obj_t BgL_eza2za2_3876;

					BgL_ez00_3875 = CAR(((obj_t) BgL_lz00_3622));
					BgL_eza2za2_3876 = CDR(((obj_t) BgL_lz00_3622));
					{	/* Match/normalize.scm 365 */
						obj_t BgL_zc3z04anonymousza31242ze3z87_3877;

						BgL_zc3z04anonymousza31242ze3z87_3877 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31242ze3ze5zz__match_normaliza7eza7,
							(int) (((long) 2)), (int) (((long) 2)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31242ze3z87_3877,
							(int) (((long) 0)), BgL_ez00_3875);
						PROCEDURE_SET(BgL_zc3z04anonymousza31242ze3z87_3877,
							(int) (((long) 1)), BgL_eza2za2_3876);
						return BgL_zc3z04anonymousza31242ze3z87_3877;
					}
				}
		}

	}



/* &<@anonymous:1242> */
	obj_t BGl_z62zc3z04anonymousza31242ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3623, obj_t BgL_rz00_3626, obj_t BgL_cz00_3627)
	{
		{	/* Match/normalize.scm 365 */
			{	/* Match/normalize.scm 366 */
				obj_t BgL_ez00_3624;
				obj_t BgL_eza2za2_3625;

				BgL_ez00_3624 = PROCEDURE_REF(BgL_envz00_3623, (int) (((long) 0)));
				BgL_eza2za2_3625 = PROCEDURE_REF(BgL_envz00_3623, (int) (((long) 1)));
				if (PAIRP(BgL_eza2za2_3625))
					{	/* Match/normalize.scm 366 */
						return
							BGl_errorz00zz__errorz00
							(BGl_symbol2415z00zz__match_normaliza7eza7,
							BGl_string2429z00zz__match_normaliza7eza7, BgL_eza2za2_3625);
					}
				else
					{	/* Match/normalize.scm 368 */
						obj_t BgL_fun1246z00_3878;

						BgL_fun1246z00_3878 =
							BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
							(BgL_ez00_3624);
						{	/* Match/normalize.scm 371 */
							obj_t BgL_zc3z04anonymousza31247ze3z87_3879;

							BgL_zc3z04anonymousza31247ze3z87_3879 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31247ze3ze5zz__match_normaliza7eza7,
								(int) (((long) 2)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31247ze3z87_3879,
								(int) (((long) 0)), BgL_cz00_3627);
							return PROCEDURE_ENTRY(BgL_fun1246z00_3878) (BgL_fun1246z00_3878,
								BgL_rz00_3626, BgL_zc3z04anonymousza31247ze3z87_3879, BEOA);
						}
					}
			}
		}

	}



/* &<@anonymous:1247> */
	obj_t BGl_z62zc3z04anonymousza31247ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3628, obj_t BgL_patternz00_3630, obj_t BgL_rrz00_3631)
	{
		{	/* Match/normalize.scm 370 */
			{	/* Match/normalize.scm 371 */
				obj_t BgL_cz00_3629;

				BgL_cz00_3629 = PROCEDURE_REF(BgL_envz00_3628, (int) (((long) 0)));
				{	/* Match/normalize.scm 371 */
					obj_t BgL_arg1250z00_3880;

					{	/* Match/normalize.scm 371 */
						obj_t BgL_arg1252z00_3881;

						{	/* Match/normalize.scm 371 */
							obj_t BgL_arg1253z00_3882;
							obj_t BgL_arg1254z00_3883;

							{	/* Match/normalize.scm 371 */
								obj_t BgL_arg1256z00_3884;

								{	/* Match/normalize.scm 371 */
									obj_t BgL_arg1258z00_3885;

									{	/* Match/normalize.scm 371 */
										obj_t BgL_arg1263z00_3886;

										{	/* Match/normalize.scm 371 */
											obj_t BgL_arg1268z00_3887;
											obj_t BgL_arg1270z00_3888;

											BgL_arg1268z00_3887 =
												MAKE_YOUNG_PAIR
												(BGl_symbol2430z00zz__match_normaliza7eza7, BNIL);
											{	/* Match/normalize.scm 371 */
												obj_t BgL_arg1271z00_3889;

												BgL_arg1271z00_3889 =
													MAKE_YOUNG_PAIR
													(BGl_symbol2430z00zz__match_normaliza7eza7, BNIL);
												BgL_arg1270z00_3888 =
													MAKE_YOUNG_PAIR(BgL_arg1271z00_3889, BNIL);
											}
											BgL_arg1263z00_3886 =
												MAKE_YOUNG_PAIR(BgL_arg1268z00_3887,
												BgL_arg1270z00_3888);
										}
										BgL_arg1258z00_3885 =
											MAKE_YOUNG_PAIR(BGl_symbol2432z00zz__match_normaliza7eza7,
											BgL_arg1263z00_3886);
									}
									BgL_arg1256z00_3884 =
										MAKE_YOUNG_PAIR(BgL_arg1258z00_3885, BNIL);
								}
								BgL_arg1253z00_3882 =
									MAKE_YOUNG_PAIR(BGl_symbol2401z00zz__match_normaliza7eza7,
									BgL_arg1256z00_3884);
							}
							BgL_arg1254z00_3883 = MAKE_YOUNG_PAIR(BgL_patternz00_3630, BNIL);
							BgL_arg1252z00_3881 =
								MAKE_YOUNG_PAIR(BgL_arg1253z00_3882, BgL_arg1254z00_3883);
						}
						BgL_arg1250z00_3880 =
							MAKE_YOUNG_PAIR(BGl_symbol2398z00zz__match_normaliza7eza7,
							BgL_arg1252z00_3881);
					}
					return
						PROCEDURE_ENTRY(BgL_cz00_3629) (BgL_cz00_3629, BgL_arg1250z00_3880,
						BgL_rrz00_3631, BEOA);
				}
			}
		}

	}



/* term-variable? */
	bool_t BGl_termzd2variablezf3z21zz__match_normaliza7eza7(obj_t BgL_ez00_3)
	{
		{	/* Match/normalize.scm 72 */
			if (SYMBOLP(BgL_ez00_3))
				{	/* Match/normalize.scm 74 */
					bool_t BgL_test2599z00_4632;

					{	/* Match/normalize.scm 74 */
						long BgL_arg1389z00_1389;

						{	/* Match/normalize.scm 74 */
							obj_t BgL_arg1390z00_1390;

							{	/* Match/normalize.scm 74 */
								obj_t BgL_res2183z00_2498;

								BgL_res2183z00_2498 = SYMBOL_TO_STRING(BgL_ez00_3);
								BgL_arg1390z00_1390 = BgL_res2183z00_2498;
							}
							BgL_arg1389z00_1389 = STRING_LENGTH(BgL_arg1390z00_1390);
						}
						BgL_test2599z00_4632 =
							BGl_2ze3ze3zz__r4_numbers_6_5z00(BINT(BgL_arg1389z00_1389),
							BINT(((long) 1)));
					}
					if (BgL_test2599z00_4632)
						{	/* Match/normalize.scm 75 */
							unsigned char BgL_arg1387z00_1387;

							{	/* Match/normalize.scm 75 */
								obj_t BgL_arg1388z00_1388;

								{	/* Match/normalize.scm 75 */
									obj_t BgL_res2185z00_2502;

									BgL_res2185z00_2502 = SYMBOL_TO_STRING(BgL_ez00_3);
									BgL_arg1388z00_1388 = BgL_res2185z00_2502;
								}
								BgL_arg1387z00_1387 =
									STRING_REF(BgL_arg1388z00_1388, ((long) 0));
							}
							return (BgL_arg1387z00_1387 == ((unsigned char) '?'));
						}
					else
						{	/* Match/normalize.scm 74 */
							return ((bool_t) 0);
						}
				}
			else
				{	/* Match/normalize.scm 73 */
					return ((bool_t) 0);
				}
		}

	}



/* segment-variable? */
	bool_t BGl_segmentzd2variablezf3z21zz__match_normaliza7eza7(obj_t BgL_ez00_4)
	{
		{	/* Match/normalize.scm 77 */
			if (SYMBOLP(BgL_ez00_4))
				{	/* Match/normalize.scm 79 */
					bool_t BgL_test2601z00_4643;

					{	/* Match/normalize.scm 79 */
						long BgL_arg1395z00_1398;

						{	/* Match/normalize.scm 79 */
							obj_t BgL_arg1396z00_1399;

							{	/* Match/normalize.scm 79 */
								obj_t BgL_res2189z00_2510;

								BgL_res2189z00_2510 = SYMBOL_TO_STRING(BgL_ez00_4);
								BgL_arg1396z00_1399 = BgL_res2189z00_2510;
							}
							BgL_arg1395z00_1398 = STRING_LENGTH(BgL_arg1396z00_1399);
						}
						BgL_test2601z00_4643 =
							BGl_2ze3ze3zz__r4_numbers_6_5z00(BINT(BgL_arg1395z00_1398),
							BINT(((long) 2)));
					}
					if (BgL_test2601z00_4643)
						{	/* Match/normalize.scm 80 */
							bool_t BgL_test2602z00_4649;

							{	/* Match/normalize.scm 80 */
								unsigned char BgL_arg1393z00_1396;

								{	/* Match/normalize.scm 80 */
									obj_t BgL_arg1394z00_1397;

									{	/* Match/normalize.scm 80 */
										obj_t BgL_res2191z00_2514;

										BgL_res2191z00_2514 = SYMBOL_TO_STRING(BgL_ez00_4);
										BgL_arg1394z00_1397 = BgL_res2191z00_2514;
									}
									BgL_arg1393z00_1396 =
										STRING_REF(BgL_arg1394z00_1397, ((long) 0));
								}
								BgL_test2602z00_4649 =
									(BgL_arg1393z00_1396 == ((unsigned char) '?'));
							}
							if (BgL_test2602z00_4649)
								{	/* Match/normalize.scm 81 */
									unsigned char BgL_arg1391z00_1394;

									{	/* Match/normalize.scm 81 */
										obj_t BgL_arg1392z00_1395;

										{	/* Match/normalize.scm 81 */
											obj_t BgL_res2194z00_2521;

											BgL_res2194z00_2521 = SYMBOL_TO_STRING(BgL_ez00_4);
											BgL_arg1392z00_1395 = BgL_res2194z00_2521;
										}
										BgL_arg1391z00_1394 =
											STRING_REF(BgL_arg1392z00_1395, ((long) 1));
									}
									return (BgL_arg1391z00_1394 == ((unsigned char) '?'));
								}
							else
								{	/* Match/normalize.scm 80 */
									return ((bool_t) 0);
								}
						}
					else
						{	/* Match/normalize.scm 79 */
							return ((bool_t) 0);
						}
				}
			else
				{	/* Match/normalize.scm 78 */
					return ((bool_t) 0);
				}
		}

	}



/* lispish-segment-variable? */
	bool_t BGl_lispishzd2segmentzd2variablezf3zf3zz__match_normaliza7eza7(obj_t
		BgL_ez00_5)
	{
		{	/* Match/normalize.scm 83 */
			if (SYMBOLP(BgL_ez00_5))
				{	/* Match/normalize.scm 85 */
					bool_t BgL_test2604z00_4658;

					{	/* Match/normalize.scm 85 */
						long BgL_arg1404z00_1410;

						{	/* Match/normalize.scm 85 */
							obj_t BgL_arg1405z00_1411;

							{	/* Match/normalize.scm 85 */
								obj_t BgL_res2198z00_2529;

								BgL_res2198z00_2529 = SYMBOL_TO_STRING(BgL_ez00_5);
								BgL_arg1405z00_1411 = BgL_res2198z00_2529;
							}
							BgL_arg1404z00_1410 = STRING_LENGTH(BgL_arg1405z00_1411);
						}
						BgL_test2604z00_4658 =
							BGl_2ze3ze3zz__r4_numbers_6_5z00(BINT(BgL_arg1404z00_1410),
							BINT(((long) 3)));
					}
					if (BgL_test2604z00_4658)
						{	/* Match/normalize.scm 86 */
							bool_t BgL_test2605z00_4664;

							{	/* Match/normalize.scm 86 */
								unsigned char BgL_arg1401z00_1408;

								{	/* Match/normalize.scm 86 */
									obj_t BgL_arg1402z00_1409;

									{	/* Match/normalize.scm 86 */
										obj_t BgL_res2200z00_2533;

										BgL_res2200z00_2533 = SYMBOL_TO_STRING(BgL_ez00_5);
										BgL_arg1402z00_1409 = BgL_res2200z00_2533;
									}
									BgL_arg1401z00_1408 =
										STRING_REF(BgL_arg1402z00_1409, ((long) 0));
								}
								BgL_test2605z00_4664 =
									(BgL_arg1401z00_1408 == ((unsigned char) '?'));
							}
							if (BgL_test2605z00_4664)
								{	/* Match/normalize.scm 87 */
									bool_t BgL_test2606z00_4668;

									{	/* Match/normalize.scm 87 */
										unsigned char BgL_arg1399z00_1406;

										{	/* Match/normalize.scm 87 */
											obj_t BgL_arg1400z00_1407;

											{	/* Match/normalize.scm 87 */
												obj_t BgL_res2203z00_2540;

												BgL_res2203z00_2540 = SYMBOL_TO_STRING(BgL_ez00_5);
												BgL_arg1400z00_1407 = BgL_res2203z00_2540;
											}
											BgL_arg1399z00_1406 =
												STRING_REF(BgL_arg1400z00_1407, ((long) 1));
										}
										BgL_test2606z00_4668 =
											(BgL_arg1399z00_1406 == ((unsigned char) '?'));
									}
									if (BgL_test2606z00_4668)
										{	/* Match/normalize.scm 88 */
											unsigned char BgL_arg1397z00_1404;

											{	/* Match/normalize.scm 88 */
												obj_t BgL_arg1398z00_1405;

												{	/* Match/normalize.scm 88 */
													obj_t BgL_res2206z00_2547;

													BgL_res2206z00_2547 = SYMBOL_TO_STRING(BgL_ez00_5);
													BgL_arg1398z00_1405 = BgL_res2206z00_2547;
												}
												BgL_arg1397z00_1404 =
													STRING_REF(BgL_arg1398z00_1405, ((long) 2));
											}
											return (BgL_arg1397z00_1404 == ((unsigned char) '?'));
										}
									else
										{	/* Match/normalize.scm 87 */
											return ((bool_t) 0);
										}
								}
							else
								{	/* Match/normalize.scm 86 */
									return ((bool_t) 0);
								}
						}
					else
						{	/* Match/normalize.scm 85 */
							return ((bool_t) 0);
						}
				}
			else
				{	/* Match/normalize.scm 84 */
					return ((bool_t) 0);
				}
		}

	}



/* tree-variable? */
	bool_t BGl_treezd2variablezf3z21zz__match_normaliza7eza7(obj_t BgL_ez00_6)
	{
		{	/* Match/normalize.scm 90 */
			if (SYMBOLP(BgL_ez00_6))
				{	/* Match/normalize.scm 92 */
					bool_t BgL_test2608z00_4677;

					{	/* Match/normalize.scm 92 */
						long BgL_arg1409z00_1416;

						{	/* Match/normalize.scm 92 */
							obj_t BgL_arg1410z00_1417;

							{	/* Match/normalize.scm 92 */
								obj_t BgL_res2210z00_2555;

								BgL_res2210z00_2555 = SYMBOL_TO_STRING(BgL_ez00_6);
								BgL_arg1410z00_1417 = BgL_res2210z00_2555;
							}
							BgL_arg1409z00_1416 = STRING_LENGTH(BgL_arg1410z00_1417);
						}
						BgL_test2608z00_4677 =
							BGl_2ze3ze3zz__r4_numbers_6_5z00(BINT(BgL_arg1409z00_1416),
							BINT(((long) 1)));
					}
					if (BgL_test2608z00_4677)
						{	/* Match/normalize.scm 93 */
							unsigned char BgL_arg1406z00_1414;

							{	/* Match/normalize.scm 93 */
								obj_t BgL_arg1407z00_1415;

								{	/* Match/normalize.scm 93 */
									obj_t BgL_res2212z00_2559;

									BgL_res2212z00_2559 = SYMBOL_TO_STRING(BgL_ez00_6);
									BgL_arg1407z00_1415 = BgL_res2212z00_2559;
								}
								BgL_arg1406z00_1414 =
									STRING_REF(BgL_arg1407z00_1415, ((long) 0));
							}
							return (BgL_arg1406z00_1414 == ((unsigned char) '!'));
						}
					else
						{	/* Match/normalize.scm 92 */
							return ((bool_t) 0);
						}
				}
			else
				{	/* Match/normalize.scm 91 */
					return ((bool_t) 0);
				}
		}

	}



/* hole-variable? */
	bool_t BGl_holezd2variablezf3z21zz__match_normaliza7eza7(obj_t BgL_ez00_7)
	{
		{	/* Match/normalize.scm 95 */
			if (SYMBOLP(BgL_ez00_7))
				{	/* Match/normalize.scm 97 */
					bool_t BgL_test2610z00_4688;

					{	/* Match/normalize.scm 97 */
						long BgL_arg1413z00_1422;

						{	/* Match/normalize.scm 97 */
							obj_t BgL_arg1414z00_1423;

							{	/* Match/normalize.scm 97 */
								obj_t BgL_res2216z00_2567;

								BgL_res2216z00_2567 = SYMBOL_TO_STRING(BgL_ez00_7);
								BgL_arg1414z00_1423 = BgL_res2216z00_2567;
							}
							BgL_arg1413z00_1422 = STRING_LENGTH(BgL_arg1414z00_1423);
						}
						BgL_test2610z00_4688 =
							BGl_2ze3ze3zz__r4_numbers_6_5z00(BINT(BgL_arg1413z00_1422),
							BINT(((long) 1)));
					}
					if (BgL_test2610z00_4688)
						{	/* Match/normalize.scm 98 */
							unsigned char BgL_arg1411z00_1420;

							{	/* Match/normalize.scm 98 */
								obj_t BgL_arg1412z00_1421;

								{	/* Match/normalize.scm 98 */
									obj_t BgL_res2218z00_2571;

									BgL_res2218z00_2571 = SYMBOL_TO_STRING(BgL_ez00_7);
									BgL_arg1412z00_1421 = BgL_res2218z00_2571;
								}
								BgL_arg1411z00_1420 =
									STRING_REF(BgL_arg1412z00_1421, ((long) 0));
							}
							return (BgL_arg1411z00_1420 == ((unsigned char) '^'));
						}
					else
						{	/* Match/normalize.scm 97 */
							return ((bool_t) 0);
						}
				}
			else
				{	/* Match/normalize.scm 96 */
					return ((bool_t) 0);
				}
		}

	}



/* normalize-pattern */
	BGL_EXPORTED_DEF obj_t
		BGl_normaliza7ezd2patternz75zz__match_normaliza7eza7(obj_t BgL_ez00_13)
	{
		{	/* Match/normalize.scm 123 */
			{	/* Match/normalize.scm 124 */
				obj_t BgL_fun1427z00_2637;

				BgL_fun1427z00_2637 =
					BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7(BgL_ez00_13);
				return
					PROCEDURE_ENTRY(BgL_fun1427z00_2637) (BgL_fun1427z00_2637,
					BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7,
					BGl_proc2434z00zz__match_normaliza7eza7, BEOA);
			}
		}

	}



/* &normalize-pattern */
	obj_t BGl_z62normaliza7ezd2patternz17zz__match_normaliza7eza7(obj_t
		BgL_envz00_3633, obj_t BgL_ez00_3634)
	{
		{	/* Match/normalize.scm 123 */
			return
				BGl_normaliza7ezd2patternz75zz__match_normaliza7eza7(BgL_ez00_3634);
		}

	}



/* &<@anonymous:1428>2385 */
	obj_t BGl_z62zc3z04anonymousza31428ze32385ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3635, obj_t BgL_patternz00_3636, obj_t BgL_rrz00_3637)
	{
		{	/* Match/normalize.scm 126 */
			return BgL_patternz00_3636;
		}

	}



/* standardize-pattern */
	obj_t BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7(obj_t
		BgL_ez00_14)
	{
		{	/* Match/normalize.scm 136 */
			{	/* Match/normalize.scm 137 */
				obj_t BgL_g1052z00_1445;

				if (PAIRP(BgL_ez00_14))
					{	/* Match/normalize.scm 358 */
						obj_t BgL_arg1675z00_2642;

						BgL_arg1675z00_2642 = CAR(BgL_ez00_14);
						{	/* Match/normalize.scm 358 */
							obj_t BgL_rz00_2645;

							BgL_rz00_2645 =
								BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7;
							if (CBOOL(BGl_assqz00zz__r4_pairs_and_lists_6_3z00
									(BgL_arg1675z00_2642, BgL_rz00_2645)))
								{	/* Match/normalize.scm 337 */
									BgL_g1052z00_1445 =
										CDR(BGl_assqz00zz__r4_pairs_and_lists_6_3z00
										(BgL_arg1675z00_2642, BgL_rz00_2645));
								}
							else
								{	/* Match/normalize.scm 337 */
									BgL_g1052z00_1445 = BFALSE;
								}
						}
					}
				else
					{	/* Match/normalize.scm 357 */
						BgL_g1052z00_1445 = BFALSE;
					}
				if (CBOOL(BgL_g1052z00_1445))
					{	/* Match/normalize.scm 137 */
						return apply(BgL_g1052z00_1445, CDR(((obj_t) BgL_ez00_14)));
					}
				else
					{	/* Match/normalize.scm 137 */
						if ((BgL_ez00_14 == BGl_symbol2435z00zz__match_normaliza7eza7))
							{	/* Match/normalize.scm 138 */
								return BGl_proc2447z00zz__match_normaliza7eza7;
							}
						else
							{	/* Match/normalize.scm 138 */
								if (BGl_termzd2variablezf3z21zz__match_normaliza7eza7
									(BgL_ez00_14))
									{	/* Match/normalize.scm 139 */
										return
											BGl_standardiza7ezd2termzd2variableza7zz__match_normaliza7eza7
											(BgL_ez00_14);
									}
								else
									{	/* Match/normalize.scm 139 */
										if (BGl_holezd2variablezf3z21zz__match_normaliza7eza7
											(BgL_ez00_14))
											{	/* Match/normalize.scm 140 */
												return
													BGl_standardiza7ezd2holezd2variableza7zz__match_normaliza7eza7
													(BgL_ez00_14);
											}
										else
											{	/* Match/normalize.scm 140 */
												if (VECTORP(BgL_ez00_14))
													{	/* Match/normalize.scm 141 */
														return
															BGl_standardiza7ezd2vectorz75zz__match_normaliza7eza7
															(BgL_ez00_14);
													}
												else
													{	/* Match/normalize.scm 141 */
														if (STRUCTP(BgL_ez00_14))
															{	/* Match/normalize.scm 142 */
																return
																	BGl_standardiza7ezd2structz75zz__match_normaliza7eza7
																	(BgL_ez00_14);
															}
														else
															{	/* Match/normalize.scm 142 */
																if (CBOOL(BGl_atomzf3zf3zz__match_s2cfunz00
																		(BgL_ez00_14)))
																	{	/* Match/normalize.scm 243 */
																		obj_t BgL_zc3z04anonymousza31527ze3z87_3638;

																		BgL_zc3z04anonymousza31527ze3z87_3638 =
																			MAKE_FX_PROCEDURE
																			(BGl_z62zc3z04anonymousza31527ze3ze5zz__match_normaliza7eza7,
																			(int) (((long) 2)), (int) (((long) 1)));
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31527ze3z87_3638,
																			(int) (((long) 0)), BgL_ez00_14);
																		return
																			BgL_zc3z04anonymousza31527ze3z87_3638;
																	}
																else
																	{	/* Match/normalize.scm 143 */
																		return
																			BGl_standardiza7ezd2patternsz75zz__match_normaliza7eza7
																			(BgL_ez00_14);
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



/* &<@anonymous:1527> */
	obj_t BGl_z62zc3z04anonymousza31527ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3639, obj_t BgL_rz00_3641, obj_t BgL_cz00_3642)
	{
		{	/* Match/normalize.scm 243 */
			{	/* Match/normalize.scm 244 */
				obj_t BgL_ez00_3640;

				BgL_ez00_3640 = PROCEDURE_REF(BgL_envz00_3639, (int) (((long) 0)));
				{	/* Match/normalize.scm 244 */
					obj_t BgL_arg1528z00_3890;

					{	/* Match/normalize.scm 244 */
						obj_t BgL_arg1530z00_3891;

						BgL_arg1530z00_3891 = MAKE_YOUNG_PAIR(BgL_ez00_3640, BNIL);
						BgL_arg1528z00_3890 =
							MAKE_YOUNG_PAIR(BGl_symbol2418z00zz__match_normaliza7eza7,
							BgL_arg1530z00_3891);
					}
					return
						PROCEDURE_ENTRY(BgL_cz00_3642) (BgL_cz00_3642, BgL_arg1528z00_3890,
						BgL_rz00_3641, BEOA);
				}
			}
		}

	}



/* standardize-patterns */
	obj_t BGl_standardiza7ezd2patternsz75zz__match_normaliza7eza7(obj_t
		BgL_eza2za2_15)
	{
		{	/* Match/normalize.scm 154 */
			if (PAIRP(BgL_eza2za2_15))
				{	/* Match/normalize.scm 156 */
					obj_t BgL_g1054z00_1455;

					{	/* Match/normalize.scm 358 */
						obj_t BgL_arg1675z00_2661;

						BgL_arg1675z00_2661 = CAR(BgL_eza2za2_15);
						{	/* Match/normalize.scm 358 */
							obj_t BgL_rz00_2664;

							BgL_rz00_2664 =
								BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7;
							if (CBOOL(BGl_assqz00zz__r4_pairs_and_lists_6_3z00
									(BgL_arg1675z00_2661, BgL_rz00_2664)))
								{	/* Match/normalize.scm 337 */
									BgL_g1054z00_1455 =
										CDR(BGl_assqz00zz__r4_pairs_and_lists_6_3z00
										(BgL_arg1675z00_2661, BgL_rz00_2664));
								}
							else
								{	/* Match/normalize.scm 337 */
									BgL_g1054z00_1455 = BFALSE;
								}
						}
					}
					if (CBOOL(BgL_g1054z00_1455))
						{	/* Match/normalize.scm 156 */
							return apply(BgL_g1054z00_1455, CDR(BgL_eza2za2_15));
						}
					else
						{	/* Match/normalize.scm 156 */
							if (
								(CAR(BgL_eza2za2_15) ==
									BGl_symbol2437z00zz__match_normaliza7eza7))
								{	/* Match/normalize.scm 157 */
									return
										BGl_standardiza7ezd2anyz75zz__match_normaliza7eza7(CDR
										(BgL_eza2za2_15));
								}
							else
								{	/* Match/normalize.scm 157 */
									if (
										(CAR(BgL_eza2za2_15) ==
											BGl_symbol2439z00zz__match_normaliza7eza7))
										{	/* Match/normalize.scm 158 */
											return
												BGl_standardiza7ezd2lispishzd2anyza7zz__match_normaliza7eza7
												(CDR(BgL_eza2za2_15));
										}
									else
										{	/* Match/normalize.scm 158 */
											if (BGl_lispishzd2segmentzd2variablezf3zf3zz__match_normaliza7eza7(CAR(BgL_eza2za2_15)))
												{	/* Match/normalize.scm 159 */
													return
														BGl_standardiza7ezd2lispishzd2segmentzd2variablez75zz__match_normaliza7eza7
														(CAR(BgL_eza2za2_15), CDR(BgL_eza2za2_15));
												}
											else
												{	/* Match/normalize.scm 159 */
													if (BGl_segmentzd2variablezf3z21zz__match_normaliza7eza7(CAR(BgL_eza2za2_15)))
														{	/* Match/normalize.scm 161 */
															return
																BGl_standardiza7ezd2segmentzd2variableza7zz__match_normaliza7eza7
																(CAR(BgL_eza2za2_15), CDR(BgL_eza2za2_15));
														}
													else
														{	/* Match/normalize.scm 161 */
															if (BGl_treezd2variablezf3z21zz__match_normaliza7eza7(CAR(BgL_eza2za2_15)))
																{	/* Match/normalize.scm 163 */
																	return
																		BGl_standardiza7ezd2treezd2variableza7zz__match_normaliza7eza7
																		(CAR(BgL_eza2za2_15),
																		CAR(CDR(BgL_eza2za2_15)),
																		CAR(CDR(CDR(BgL_eza2za2_15))));
																}
															else
																{	/* Match/normalize.scm 163 */
																	return
																		BGl_standardiza7ezd2consz75zz__match_normaliza7eza7
																		(CAR(BgL_eza2za2_15), CDR(BgL_eza2za2_15));
																}
														}
												}
										}
								}
						}
				}
			else
				{	/* Match/normalize.scm 243 */
					obj_t BgL_zc3z04anonymousza31527ze3z87_3643;

					BgL_zc3z04anonymousza31527ze3z87_3643 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31527ze32386ze5zz__match_normaliza7eza7,
						(int) (((long) 2)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31527ze3z87_3643,
						(int) (((long) 0)), BgL_eza2za2_15);
					return BgL_zc3z04anonymousza31527ze3z87_3643;
				}
		}

	}



/* &<@anonymous:1527>2386 */
	obj_t BGl_z62zc3z04anonymousza31527ze32386ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3644, obj_t BgL_rz00_3646, obj_t BgL_cz00_3647)
	{
		{	/* Match/normalize.scm 243 */
			{	/* Match/normalize.scm 244 */
				obj_t BgL_eza2za2_3645;

				BgL_eza2za2_3645 = PROCEDURE_REF(BgL_envz00_3644, (int) (((long) 0)));
				{	/* Match/normalize.scm 244 */
					obj_t BgL_arg1528z00_3892;

					{	/* Match/normalize.scm 244 */
						obj_t BgL_arg1530z00_3893;

						BgL_arg1530z00_3893 = MAKE_YOUNG_PAIR(BgL_eza2za2_3645, BNIL);
						BgL_arg1528z00_3892 =
							MAKE_YOUNG_PAIR(BGl_symbol2418z00zz__match_normaliza7eza7,
							BgL_arg1530z00_3893);
					}
					return
						PROCEDURE_ENTRY(BgL_cz00_3647) (BgL_cz00_3647, BgL_arg1528z00_3892,
						BgL_rz00_3646, BEOA);
				}
			}
		}

	}



/* standardize-repetition */
	obj_t BGl_standardiza7ezd2repetitionz75zz__match_normaliza7eza7(obj_t
		BgL_ez00_16, obj_t BgL_eza2za2_17)
	{
		{	/* Match/normalize.scm 168 */
			{	/* Match/normalize.scm 169 */
				obj_t BgL_zc3z04anonymousza31463ze3z87_3650;

				BgL_zc3z04anonymousza31463ze3z87_3650 =
					MAKE_FX_PROCEDURE
					(BGl_z62zc3z04anonymousza31463ze3ze5zz__match_normaliza7eza7,
					(int) (((long) 2)), (int) (((long) 2)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31463ze3z87_3650, (int) (((long) 0)),
					BgL_ez00_16);
				PROCEDURE_SET(BgL_zc3z04anonymousza31463ze3z87_3650, (int) (((long) 1)),
					BgL_eza2za2_17);
				return BgL_zc3z04anonymousza31463ze3z87_3650;
			}
		}

	}



/* &<@anonymous:1463> */
	obj_t BGl_z62zc3z04anonymousza31463ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3651, obj_t BgL_rz00_3654, obj_t BgL_cz00_3655)
	{
		{	/* Match/normalize.scm 169 */
			{	/* Match/normalize.scm 170 */
				obj_t BgL_ez00_3652;
				obj_t BgL_eza2za2_3653;

				BgL_ez00_3652 = PROCEDURE_REF(BgL_envz00_3651, (int) (((long) 0)));
				BgL_eza2za2_3653 = PROCEDURE_REF(BgL_envz00_3651, (int) (((long) 1)));
				{	/* Match/normalize.scm 170 */
					obj_t BgL_fun1465z00_3894;

					BgL_fun1465z00_3894 =
						BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
						(BgL_ez00_3652);
					{	/* Match/normalize.scm 173 */
						obj_t BgL_zc3z04anonymousza31466ze3z87_3895;

						BgL_zc3z04anonymousza31466ze3z87_3895 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31466ze3ze5zz__match_normaliza7eza7,
							(int) (((long) 2)), (int) (((long) 2)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31466ze3z87_3895,
							(int) (((long) 0)), BgL_eza2za2_3653);
						PROCEDURE_SET(BgL_zc3z04anonymousza31466ze3z87_3895,
							(int) (((long) 1)), BgL_cz00_3655);
						return PROCEDURE_ENTRY(BgL_fun1465z00_3894) (BgL_fun1465z00_3894,
							BgL_rz00_3654, BgL_zc3z04anonymousza31466ze3z87_3895, BEOA);
					}
				}
			}
		}

	}



/* &<@anonymous:1466> */
	obj_t BGl_z62zc3z04anonymousza31466ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3656, obj_t BgL_fz00_3659, obj_t BgL_rrz00_3660)
	{
		{	/* Match/normalize.scm 172 */
			{	/* Match/normalize.scm 173 */
				obj_t BgL_eza2za2_3657;
				obj_t BgL_cz00_3658;

				BgL_eza2za2_3657 = PROCEDURE_REF(BgL_envz00_3656, (int) (((long) 0)));
				BgL_cz00_3658 = PROCEDURE_REF(BgL_envz00_3656, (int) (((long) 1)));
				{	/* Match/normalize.scm 173 */
					obj_t BgL_fun1468z00_3896;

					BgL_fun1468z00_3896 =
						BGl_standardiza7ezd2patternsz75zz__match_normaliza7eza7
						(BgL_eza2za2_3657);
					{	/* Match/normalize.scm 176 */
						obj_t BgL_zc3z04anonymousza31469ze3z87_3897;

						BgL_zc3z04anonymousza31469ze3z87_3897 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31469ze3ze5zz__match_normaliza7eza7,
							(int) (((long) 2)), (int) (((long) 2)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31469ze3z87_3897,
							(int) (((long) 0)), BgL_fz00_3659);
						PROCEDURE_SET(BgL_zc3z04anonymousza31469ze3z87_3897,
							(int) (((long) 1)), BgL_cz00_3658);
						return PROCEDURE_ENTRY(BgL_fun1468z00_3896) (BgL_fun1468z00_3896,
							BgL_rrz00_3660, BgL_zc3z04anonymousza31469ze3z87_3897, BEOA);
					}
				}
			}
		}

	}



/* &<@anonymous:1469> */
	obj_t BGl_z62zc3z04anonymousza31469ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3661, obj_t BgL_fza2za2_3664, obj_t BgL_rrrz00_3665)
	{
		{	/* Match/normalize.scm 175 */
			{	/* Match/normalize.scm 176 */
				obj_t BgL_fz00_3662;
				obj_t BgL_cz00_3663;

				BgL_fz00_3662 = PROCEDURE_REF(BgL_envz00_3661, (int) (((long) 0)));
				BgL_cz00_3663 = PROCEDURE_REF(BgL_envz00_3661, (int) (((long) 1)));
				{	/* Match/normalize.scm 176 */
					obj_t BgL_labelz00_3898;

					BgL_labelz00_3898 =
						PROCEDURE_ENTRY(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
						(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
						BGl_string2441z00zz__match_normaliza7eza7, BEOA);
					{	/* Match/normalize.scm 178 */
						obj_t BgL_arg1470z00_3899;

						{	/* Match/normalize.scm 178 */
							obj_t BgL_arg1471z00_3900;

							{	/* Match/normalize.scm 178 */
								obj_t BgL_arg1472z00_3901;

								{	/* Match/normalize.scm 178 */
									obj_t BgL_arg1473z00_3902;
									obj_t BgL_arg1474z00_3903;

									{	/* Match/normalize.scm 178 */
										obj_t BgL_arg1475z00_3904;

										{	/* Match/normalize.scm 178 */
											obj_t BgL_arg1476z00_3905;

											{	/* Match/normalize.scm 178 */
												obj_t BgL_arg1477z00_3906;

												{	/* Match/normalize.scm 178 */
													obj_t BgL_arg1478z00_3907;

													{	/* Match/normalize.scm 178 */
														obj_t BgL_arg1479z00_3908;

														{	/* Match/normalize.scm 178 */
															obj_t BgL_arg1480z00_3909;

															BgL_arg1480z00_3909 =
																PROCEDURE_ENTRY
																(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
																(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
																BGl_string2442z00zz__match_normaliza7eza7,
																BEOA);
															BgL_arg1479z00_3908 =
																MAKE_YOUNG_PAIR(BgL_arg1480z00_3909, BNIL);
														}
														BgL_arg1478z00_3907 =
															MAKE_YOUNG_PAIR(BgL_labelz00_3898,
															BgL_arg1479z00_3908);
													}
													BgL_arg1477z00_3906 =
														MAKE_YOUNG_PAIR
														(BGl_symbol2443z00zz__match_normaliza7eza7,
														BgL_arg1478z00_3907);
												}
												BgL_arg1476z00_3905 =
													MAKE_YOUNG_PAIR(BgL_arg1477z00_3906, BNIL);
											}
											BgL_arg1475z00_3904 =
												MAKE_YOUNG_PAIR(BgL_fz00_3662, BgL_arg1476z00_3905);
										}
										BgL_arg1473z00_3902 =
											MAKE_YOUNG_PAIR(BGl_symbol2432z00zz__match_normaliza7eza7,
											BgL_arg1475z00_3904);
									}
									BgL_arg1474z00_3903 = MAKE_YOUNG_PAIR(BgL_fza2za2_3664, BNIL);
									BgL_arg1472z00_3901 =
										MAKE_YOUNG_PAIR(BgL_arg1473z00_3902, BgL_arg1474z00_3903);
								}
								BgL_arg1471z00_3900 =
									MAKE_YOUNG_PAIR(BgL_labelz00_3898, BgL_arg1472z00_3901);
							}
							BgL_arg1470z00_3899 =
								MAKE_YOUNG_PAIR(BGl_symbol2445z00zz__match_normaliza7eza7,
								BgL_arg1471z00_3900);
						}
						return
							PROCEDURE_ENTRY(BgL_cz00_3663) (BgL_cz00_3663,
							BgL_arg1470z00_3899, BgL_rrrz00_3665, BEOA);
					}
				}
			}
		}

	}



/* &<@anonymous:1481> */
	obj_t BGl_z62zc3z04anonymousza31481ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3667, obj_t BgL_rz00_3668, obj_t BgL_cz00_3669)
	{
		{	/* Match/normalize.scm 183 */
			{	/* Match/normalize.scm 184 */
				obj_t BgL_arg1483z00_3910;

				BgL_arg1483z00_3910 =
					MAKE_YOUNG_PAIR(BGl_symbol2430z00zz__match_normaliza7eza7, BNIL);
				return
					PROCEDURE_ENTRY(BgL_cz00_3669) (BgL_cz00_3669, BgL_arg1483z00_3910,
					BgL_rz00_3668, BEOA);
			}
		}

	}



/* standardize-cons */
	obj_t BGl_standardiza7ezd2consz75zz__match_normaliza7eza7(obj_t BgL_fz00_18,
		obj_t BgL_fza2za2_19)
	{
		{	/* Match/normalize.scm 186 */
			{	/* Match/normalize.scm 187 */
				bool_t BgL_test2628z00_4886;

				if (PAIRP(BgL_fza2za2_19))
					{	/* Match/normalize.scm 187 */
						BgL_test2628z00_4886 =
							(CAR(BgL_fza2za2_19) ==
							BGl_symbol2448z00zz__match_normaliza7eza7);
					}
				else
					{	/* Match/normalize.scm 187 */
						BgL_test2628z00_4886 = ((bool_t) 0);
					}
				if (BgL_test2628z00_4886)
					{	/* Match/normalize.scm 187 */
						return
							BGl_standardiza7ezd2repetitionz75zz__match_normaliza7eza7
							(BgL_fz00_18, CDR(BgL_fza2za2_19));
					}
				else
					{	/* Match/normalize.scm 187 */
						if (CBOOL
							(BGl_z62zc3z04anonymousza31490ze3ze5zz__match_normaliza7eza7
								(BGl_za2preferzd2xconsza2zd2zz__match_normaliza7eza7,
									BGl_symbol2450z00zz__match_normaliza7eza7)))
							{	/* Match/normalize.scm 189 */
								return
									BGl_standardiza7ezd2realzd2xconsza7zz__match_normaliza7eza7
									(BgL_fz00_18, BgL_fza2za2_19);
							}
						else
							{	/* Match/normalize.scm 189 */
								return
									BGl_standardiza7ezd2realzd2consza7zz__match_normaliza7eza7
									(BgL_fz00_18, BgL_fza2za2_19);
							}
					}
			}
		}

	}



/* make-toggle */
	obj_t BGl_makezd2togglezd2zz__match_normaliza7eza7()
	{
		{	/* Match/normalize.scm 193 */
			{	/* Match/normalize.scm 194 */
				obj_t BgL_valuez00_3676;

				BgL_valuez00_3676 = MAKE_CELL(BFALSE);
				{	/* Match/normalize.scm 195 */
					obj_t BgL_zc3z04anonymousza31490ze3z87_3670;

					{
						int BgL_tmpz00_4901;

						BgL_tmpz00_4901 = (int) (((long) 1));
						BgL_zc3z04anonymousza31490ze3z87_3670 =
							MAKE_EL_PROCEDURE(BgL_tmpz00_4901);
					}
					PROCEDURE_EL_SET(BgL_zc3z04anonymousza31490ze3z87_3670,
						(int) (((long) 0)), ((obj_t) BgL_valuez00_3676));
					return BgL_zc3z04anonymousza31490ze3z87_3670;
				}
			}
		}

	}



/* &<@anonymous:1490> */
	obj_t BGl_z62zc3z04anonymousza31490ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3671, obj_t BgL_msgz00_3673)
	{
		{	/* Match/normalize.scm 195 */
			{	/* Match/normalize.scm 196 */
				obj_t BgL_valuez00_3672;

				BgL_valuez00_3672 =
					PROCEDURE_EL_REF(BgL_envz00_3671, (int) (((long) 0)));
				if ((BgL_msgz00_3673 == BGl_symbol2450z00zz__match_normaliza7eza7))
					{	/* Match/normalize.scm 196 */
						return CELL_REF(BgL_valuez00_3672);
					}
				else
					{	/* Match/normalize.scm 196 */
						if ((BgL_msgz00_3673 == BGl_symbol2452z00zz__match_normaliza7eza7))
							{	/* Match/normalize.scm 198 */
								obj_t BgL_auxz00_3912;

								BgL_auxz00_3912 = BTRUE;
								return CELL_SET(BgL_valuez00_3672, BgL_auxz00_3912);
							}
						else
							{	/* Match/normalize.scm 196 */
								if (
									(BgL_msgz00_3673 ==
										BGl_symbol2454z00zz__match_normaliza7eza7))
									{	/* Match/normalize.scm 199 */
										obj_t BgL_auxz00_3913;

										BgL_auxz00_3913 = BFALSE;
										return CELL_SET(BgL_valuez00_3672, BgL_auxz00_3913);
									}
								else
									{	/* Match/normalize.scm 196 */
										return BUNSPEC;
									}
							}
					}
			}
		}

	}



/* standardize-real-cons */
	obj_t BGl_standardiza7ezd2realzd2consza7zz__match_normaliza7eza7(obj_t
		BgL_fz00_20, obj_t BgL_fza2za2_21)
	{
		{	/* Match/normalize.scm 203 */
			{	/* Match/normalize.scm 204 */
				obj_t BgL_zc3z04anonymousza31494ze3z87_3680;

				BgL_zc3z04anonymousza31494ze3z87_3680 =
					MAKE_FX_PROCEDURE
					(BGl_z62zc3z04anonymousza31494ze3ze5zz__match_normaliza7eza7,
					(int) (((long) 2)), (int) (((long) 2)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31494ze3z87_3680, (int) (((long) 0)),
					BgL_fz00_20);
				PROCEDURE_SET(BgL_zc3z04anonymousza31494ze3z87_3680, (int) (((long) 1)),
					BgL_fza2za2_21);
				return BgL_zc3z04anonymousza31494ze3z87_3680;
			}
		}

	}



/* &<@anonymous:1494> */
	obj_t BGl_z62zc3z04anonymousza31494ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3681, obj_t BgL_rz00_3684, obj_t BgL_cz00_3685)
	{
		{	/* Match/normalize.scm 204 */
			{	/* Match/normalize.scm 205 */
				obj_t BgL_fz00_3682;
				obj_t BgL_fza2za2_3683;

				BgL_fz00_3682 = PROCEDURE_REF(BgL_envz00_3681, (int) (((long) 0)));
				BgL_fza2za2_3683 = PROCEDURE_REF(BgL_envz00_3681, (int) (((long) 1)));
				{	/* Match/normalize.scm 205 */
					obj_t BgL_fun1497z00_3914;

					BgL_fun1497z00_3914 =
						BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
						(BgL_fz00_3682);
					{	/* Match/normalize.scm 209 */
						obj_t BgL_zc3z04anonymousza31498ze3z87_3915;

						BgL_zc3z04anonymousza31498ze3z87_3915 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31498ze3ze5zz__match_normaliza7eza7,
							(int) (((long) 2)), (int) (((long) 2)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31498ze3z87_3915,
							(int) (((long) 0)), BgL_fza2za2_3683);
						PROCEDURE_SET(BgL_zc3z04anonymousza31498ze3z87_3915,
							(int) (((long) 1)), BgL_cz00_3685);
						return PROCEDURE_ENTRY(BgL_fun1497z00_3914) (BgL_fun1497z00_3914,
							BgL_rz00_3684, BgL_zc3z04anonymousza31498ze3z87_3915, BEOA);
					}
				}
			}
		}

	}



/* &<@anonymous:1498> */
	obj_t BGl_z62zc3z04anonymousza31498ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3686, obj_t BgL_pattern1z00_3689, obj_t BgL_rrz00_3690)
	{
		{	/* Match/normalize.scm 207 */
			{	/* Match/normalize.scm 209 */
				obj_t BgL_fza2za2_3687;
				obj_t BgL_cz00_3688;

				BgL_fza2za2_3687 = PROCEDURE_REF(BgL_envz00_3686, (int) (((long) 0)));
				BgL_cz00_3688 = PROCEDURE_REF(BgL_envz00_3686, (int) (((long) 1)));
				{	/* Match/normalize.scm 209 */
					obj_t BgL_fun1501z00_3916;

					BgL_fun1501z00_3916 =
						BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
						(BgL_fza2za2_3687);
					{	/* Match/normalize.scm 212 */
						obj_t BgL_zc3z04anonymousza31502ze3z87_3917;

						BgL_zc3z04anonymousza31502ze3z87_3917 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31502ze3ze5zz__match_normaliza7eza7,
							(int) (((long) 2)), (int) (((long) 2)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31502ze3z87_3917,
							(int) (((long) 0)), BgL_pattern1z00_3689);
						PROCEDURE_SET(BgL_zc3z04anonymousza31502ze3z87_3917,
							(int) (((long) 1)), BgL_cz00_3688);
						return PROCEDURE_ENTRY(BgL_fun1501z00_3916) (BgL_fun1501z00_3916,
							BgL_rrz00_3690, BgL_zc3z04anonymousza31502ze3z87_3917, BEOA);
					}
				}
			}
		}

	}



/* &<@anonymous:1502> */
	obj_t BGl_z62zc3z04anonymousza31502ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3691, obj_t BgL_pattern2z00_3694, obj_t BgL_rrrz00_3695)
	{
		{	/* Match/normalize.scm 211 */
			{	/* Match/normalize.scm 212 */
				obj_t BgL_pattern1z00_3692;
				obj_t BgL_cz00_3693;

				BgL_pattern1z00_3692 =
					PROCEDURE_REF(BgL_envz00_3691, (int) (((long) 0)));
				BgL_cz00_3693 = PROCEDURE_REF(BgL_envz00_3691, (int) (((long) 1)));
				{	/* Match/normalize.scm 212 */
					obj_t BgL_arg1505z00_3918;

					{	/* Match/normalize.scm 212 */
						obj_t BgL_arg1506z00_3919;

						{	/* Match/normalize.scm 212 */
							obj_t BgL_arg1507z00_3920;

							BgL_arg1507z00_3920 = MAKE_YOUNG_PAIR(BgL_pattern2z00_3694, BNIL);
							BgL_arg1506z00_3919 =
								MAKE_YOUNG_PAIR(BgL_pattern1z00_3692, BgL_arg1507z00_3920);
						}
						BgL_arg1505z00_3918 =
							MAKE_YOUNG_PAIR(BGl_symbol2432z00zz__match_normaliza7eza7,
							BgL_arg1506z00_3919);
					}
					return
						PROCEDURE_ENTRY(BgL_cz00_3693) (BgL_cz00_3693, BgL_arg1505z00_3918,
						BgL_rrrz00_3695, BEOA);
				}
			}
		}

	}



/* standardize-real-xcons */
	obj_t BGl_standardiza7ezd2realzd2xconsza7zz__match_normaliza7eza7(obj_t
		BgL_fz00_22, obj_t BgL_fza2za2_23)
	{
		{	/* Match/normalize.scm 214 */
			{	/* Match/normalize.scm 215 */
				obj_t BgL_zc3z04anonymousza31508ze3z87_3698;

				BgL_zc3z04anonymousza31508ze3z87_3698 =
					MAKE_FX_PROCEDURE
					(BGl_z62zc3z04anonymousza31508ze3ze5zz__match_normaliza7eza7,
					(int) (((long) 2)), (int) (((long) 2)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31508ze3z87_3698, (int) (((long) 0)),
					BgL_fza2za2_23);
				PROCEDURE_SET(BgL_zc3z04anonymousza31508ze3z87_3698, (int) (((long) 1)),
					BgL_fz00_22);
				return BgL_zc3z04anonymousza31508ze3z87_3698;
			}
		}

	}



/* &<@anonymous:1508> */
	obj_t BGl_z62zc3z04anonymousza31508ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3699, obj_t BgL_rz00_3702, obj_t BgL_cz00_3703)
	{
		{	/* Match/normalize.scm 215 */
			{	/* Match/normalize.scm 216 */
				obj_t BgL_fza2za2_3700;
				obj_t BgL_fz00_3701;

				BgL_fza2za2_3700 = PROCEDURE_REF(BgL_envz00_3699, (int) (((long) 0)));
				BgL_fz00_3701 = PROCEDURE_REF(BgL_envz00_3699, (int) (((long) 1)));
				{	/* Match/normalize.scm 216 */
					obj_t BgL_fun1510z00_3921;

					BgL_fun1510z00_3921 =
						BGl_standardiza7ezd2patternsz75zz__match_normaliza7eza7
						(BgL_fza2za2_3700);
					{	/* Match/normalize.scm 219 */
						obj_t BgL_zc3z04anonymousza31511ze3z87_3922;

						BgL_zc3z04anonymousza31511ze3z87_3922 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31511ze3ze5zz__match_normaliza7eza7,
							(int) (((long) 2)), (int) (((long) 2)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31511ze3z87_3922,
							(int) (((long) 0)), BgL_fz00_3701);
						PROCEDURE_SET(BgL_zc3z04anonymousza31511ze3z87_3922,
							(int) (((long) 1)), BgL_cz00_3703);
						return PROCEDURE_ENTRY(BgL_fun1510z00_3921) (BgL_fun1510z00_3921,
							BgL_rz00_3702, BgL_zc3z04anonymousza31511ze3z87_3922, BEOA);
					}
				}
			}
		}

	}



/* &<@anonymous:1511> */
	obj_t BGl_z62zc3z04anonymousza31511ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3704, obj_t BgL_pattern1z00_3707, obj_t BgL_rrz00_3708)
	{
		{	/* Match/normalize.scm 218 */
			{	/* Match/normalize.scm 219 */
				obj_t BgL_fz00_3705;
				obj_t BgL_cz00_3706;

				BgL_fz00_3705 = PROCEDURE_REF(BgL_envz00_3704, (int) (((long) 0)));
				BgL_cz00_3706 = PROCEDURE_REF(BgL_envz00_3704, (int) (((long) 1)));
				{	/* Match/normalize.scm 219 */
					obj_t BgL_fun1513z00_3923;

					BgL_fun1513z00_3923 =
						BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
						(BgL_fz00_3705);
					{	/* Match/normalize.scm 222 */
						obj_t BgL_zc3z04anonymousza31514ze3z87_3924;

						BgL_zc3z04anonymousza31514ze3z87_3924 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31514ze3ze5zz__match_normaliza7eza7,
							(int) (((long) 2)), (int) (((long) 2)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31514ze3z87_3924,
							(int) (((long) 0)), BgL_pattern1z00_3707);
						PROCEDURE_SET(BgL_zc3z04anonymousza31514ze3z87_3924,
							(int) (((long) 1)), BgL_cz00_3706);
						return PROCEDURE_ENTRY(BgL_fun1513z00_3923) (BgL_fun1513z00_3923,
							BgL_rrz00_3708, BgL_zc3z04anonymousza31514ze3z87_3924, BEOA);
					}
				}
			}
		}

	}



/* &<@anonymous:1514> */
	obj_t BGl_z62zc3z04anonymousza31514ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3709, obj_t BgL_pattern2z00_3712, obj_t BgL_rrrz00_3713)
	{
		{	/* Match/normalize.scm 221 */
			{	/* Match/normalize.scm 222 */
				obj_t BgL_pattern1z00_3710;
				obj_t BgL_cz00_3711;

				BgL_pattern1z00_3710 =
					PROCEDURE_REF(BgL_envz00_3709, (int) (((long) 0)));
				BgL_cz00_3711 = PROCEDURE_REF(BgL_envz00_3709, (int) (((long) 1)));
				{	/* Match/normalize.scm 222 */
					obj_t BgL_arg1515z00_3925;

					{	/* Match/normalize.scm 222 */
						obj_t BgL_arg1516z00_3926;

						{	/* Match/normalize.scm 222 */
							obj_t BgL_arg1518z00_3927;

							BgL_arg1518z00_3927 = MAKE_YOUNG_PAIR(BgL_pattern1z00_3710, BNIL);
							BgL_arg1516z00_3926 =
								MAKE_YOUNG_PAIR(BgL_pattern2z00_3712, BgL_arg1518z00_3927);
						}
						BgL_arg1515z00_3925 =
							MAKE_YOUNG_PAIR(BGl_symbol2456z00zz__match_normaliza7eza7,
							BgL_arg1516z00_3926);
					}
					return
						PROCEDURE_ENTRY(BgL_cz00_3711) (BgL_cz00_3711, BgL_arg1515z00_3925,
						BgL_rrrz00_3713, BEOA);
				}
			}
		}

	}



/* standardize-term-variable */
	obj_t BGl_standardiza7ezd2termzd2variableza7zz__match_normaliza7eza7(obj_t
		BgL_ez00_24)
	{
		{	/* Match/normalize.scm 224 */
			{	/* Match/normalize.scm 225 */
				obj_t BgL_zc3z04anonymousza31519ze3z87_3714;

				BgL_zc3z04anonymousza31519ze3z87_3714 =
					MAKE_FX_PROCEDURE
					(BGl_z62zc3z04anonymousza31519ze3ze5zz__match_normaliza7eza7,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31519ze3z87_3714, (int) (((long) 0)),
					BgL_ez00_24);
				return BgL_zc3z04anonymousza31519ze3z87_3714;
			}
		}

	}



/* &<@anonymous:1519> */
	obj_t BGl_z62zc3z04anonymousza31519ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3715, obj_t BgL_rz00_3717, obj_t BgL_cz00_3718)
	{
		{	/* Match/normalize.scm 225 */
			{	/* Match/normalize.scm 226 */
				obj_t BgL_ez00_3716;

				BgL_ez00_3716 = PROCEDURE_REF(BgL_envz00_3715, (int) (((long) 0)));
				{	/* Match/normalize.scm 226 */
					obj_t BgL_namez00_3928;

					{	/* Match/normalize.scm 101 */
						obj_t BgL_sz00_3929;

						{	/* Match/normalize.scm 101 */
							obj_t BgL_res2250z00_3930;

							BgL_res2250z00_3930 = SYMBOL_TO_STRING(((obj_t) BgL_ez00_3716));
							BgL_sz00_3929 = BgL_res2250z00_3930;
						}
						BgL_namez00_3928 =
							bstring_to_symbol(c_substring(BgL_sz00_3929, ((long) 1),
								STRING_LENGTH(BgL_sz00_3929)));
					}
					{	/* Match/normalize.scm 227 */
						obj_t BgL_arg1520z00_3933;

						{	/* Match/normalize.scm 227 */
							obj_t BgL_arg1521z00_3934;

							BgL_arg1521z00_3934 = MAKE_YOUNG_PAIR(BgL_namez00_3928, BNIL);
							BgL_arg1520z00_3933 =
								MAKE_YOUNG_PAIR(BGl_symbol2458z00zz__match_normaliza7eza7,
								BgL_arg1521z00_3934);
						}
						return
							PROCEDURE_ENTRY(BgL_cz00_3718) (BgL_cz00_3718,
							BgL_arg1520z00_3933, BgL_rz00_3717, BEOA);
					}
				}
			}
		}

	}



/* standardize-hole-variable */
	obj_t BGl_standardiza7ezd2holezd2variableza7zz__match_normaliza7eza7(obj_t
		BgL_ez00_25)
	{
		{	/* Match/normalize.scm 237 */
			{	/* Match/normalize.scm 238 */
				obj_t BgL_zc3z04anonymousza31522ze3z87_3719;

				BgL_zc3z04anonymousza31522ze3z87_3719 =
					MAKE_FX_PROCEDURE
					(BGl_z62zc3z04anonymousza31522ze3ze5zz__match_normaliza7eza7,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31522ze3z87_3719, (int) (((long) 0)),
					BgL_ez00_25);
				return BgL_zc3z04anonymousza31522ze3z87_3719;
			}
		}

	}



/* &<@anonymous:1522> */
	obj_t BGl_z62zc3z04anonymousza31522ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3720, obj_t BgL_rz00_3722, obj_t BgL_cz00_3723)
	{
		{	/* Match/normalize.scm 238 */
			{	/* Match/normalize.scm 239 */
				obj_t BgL_ez00_3721;

				BgL_ez00_3721 = PROCEDURE_REF(BgL_envz00_3720, (int) (((long) 0)));
				{	/* Match/normalize.scm 239 */
					obj_t BgL_namez00_3935;

					{	/* Match/normalize.scm 113 */
						obj_t BgL_sz00_3936;

						{	/* Match/normalize.scm 113 */
							obj_t BgL_res2254z00_3937;

							BgL_res2254z00_3937 = SYMBOL_TO_STRING(((obj_t) BgL_ez00_3721));
							BgL_sz00_3936 = BgL_res2254z00_3937;
						}
						BgL_namez00_3935 =
							bstring_to_symbol(c_substring(BgL_sz00_3936, ((long) 1),
								STRING_LENGTH(BgL_sz00_3936)));
					}
					{	/* Match/normalize.scm 240 */
						obj_t BgL_arg1523z00_3940;

						{	/* Match/normalize.scm 240 */
							obj_t BgL_arg1524z00_3941;

							{	/* Match/normalize.scm 240 */
								obj_t BgL_arg1525z00_3942;

								{	/* Match/normalize.scm 240 */
									obj_t BgL_arg1526z00_3943;

									BgL_arg1526z00_3943 =
										PROCEDURE_ENTRY(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
										(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
										BGl_string2442z00zz__match_normaliza7eza7, BEOA);
									BgL_arg1525z00_3942 =
										MAKE_YOUNG_PAIR(BgL_arg1526z00_3943, BNIL);
								}
								BgL_arg1524z00_3941 =
									MAKE_YOUNG_PAIR(BgL_namez00_3935, BgL_arg1525z00_3942);
							}
							BgL_arg1523z00_3940 =
								MAKE_YOUNG_PAIR(BGl_symbol2443z00zz__match_normaliza7eza7,
								BgL_arg1524z00_3941);
						}
						return
							PROCEDURE_ENTRY(BgL_cz00_3723) (BgL_cz00_3723,
							BgL_arg1523z00_3940, BgL_rz00_3722, BEOA);
					}
				}
			}
		}

	}



/* standardize-segment-variable */
	obj_t BGl_standardiza7ezd2segmentzd2variableza7zz__match_normaliza7eza7(obj_t
		BgL_ez00_27, obj_t BgL_fza2za2_28)
	{
		{	/* Match/normalize.scm 246 */
			{	/* Match/normalize.scm 247 */
				obj_t BgL_zc3z04anonymousza31531ze3z87_3726;

				BgL_zc3z04anonymousza31531ze3z87_3726 =
					MAKE_FX_PROCEDURE
					(BGl_z62zc3z04anonymousza31531ze3ze5zz__match_normaliza7eza7,
					(int) (((long) 2)), (int) (((long) 2)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31531ze3z87_3726, (int) (((long) 0)),
					BgL_ez00_27);
				PROCEDURE_SET(BgL_zc3z04anonymousza31531ze3z87_3726, (int) (((long) 1)),
					BgL_fza2za2_28);
				return BgL_zc3z04anonymousza31531ze3z87_3726;
			}
		}

	}



/* &<@anonymous:1531> */
	obj_t BGl_z62zc3z04anonymousza31531ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3727, obj_t BgL_rz00_3730, obj_t BgL_cz00_3731)
	{
		{	/* Match/normalize.scm 247 */
			{	/* Match/normalize.scm 248 */
				obj_t BgL_ez00_3728;
				obj_t BgL_fza2za2_3729;

				BgL_ez00_3728 = PROCEDURE_REF(BgL_envz00_3727, (int) (((long) 0)));
				BgL_fza2za2_3729 = PROCEDURE_REF(BgL_envz00_3727, (int) (((long) 1)));
				{	/* Match/normalize.scm 248 */
					obj_t BgL_namez00_3944;

					{	/* Match/normalize.scm 105 */
						obj_t BgL_sz00_3945;

						{	/* Match/normalize.scm 105 */
							obj_t BgL_res2258z00_3946;

							BgL_res2258z00_3946 = SYMBOL_TO_STRING(((obj_t) BgL_ez00_3728));
							BgL_sz00_3945 = BgL_res2258z00_3946;
						}
						BgL_namez00_3944 =
							bstring_to_symbol(c_substring(BgL_sz00_3945, ((long) 2),
								STRING_LENGTH(BgL_sz00_3945)));
					}
					{	/* Match/normalize.scm 249 */
						bool_t BgL_test2634z00_5080;

						{	/* Match/normalize.scm 249 */
							obj_t BgL_arg1570z00_3949;

							if (CBOOL(BGl_assqz00zz__r4_pairs_and_lists_6_3z00
									(BgL_namez00_3944, BgL_rz00_3730)))
								{	/* Match/normalize.scm 337 */
									BgL_arg1570z00_3949 =
										CDR(BGl_assqz00zz__r4_pairs_and_lists_6_3z00
										(BgL_namez00_3944, BgL_rz00_3730));
								}
							else
								{	/* Match/normalize.scm 337 */
									BgL_arg1570z00_3949 = BFALSE;
								}
							BgL_test2634z00_5080 =
								(BgL_arg1570z00_3949 ==
								BGl_unboundzd2patternzd2zz__match_normaliza7eza7);
						}
						if (BgL_test2634z00_5080)
							{	/* Match/normalize.scm 250 */
								obj_t BgL_fun1536z00_3950;

								BgL_fun1536z00_3950 =
									BGl_standardiza7ezd2patternsz75zz__match_normaliza7eza7
									(BgL_fza2za2_3729);
								{	/* Match/normalize.scm 251 */
									obj_t BgL_arg1534z00_3951;

									{	/* Match/normalize.scm 251 */
										obj_t BgL_imz00_3952;

										BgL_imz00_3952 = BGl_symbol2460z00zz__match_normaliza7eza7;
										{	/* Match/normalize.scm 334 */
											obj_t BgL_arg1669z00_3953;

											BgL_arg1669z00_3953 =
												MAKE_YOUNG_PAIR(BgL_namez00_3944, BgL_imz00_3952);
											BgL_arg1534z00_3951 =
												MAKE_YOUNG_PAIR(BgL_arg1669z00_3953, BgL_rz00_3730);
										}
									}
									{	/* Match/normalize.scm 253 */
										obj_t BgL_zc3z04anonymousza31537ze3z87_3954;

										BgL_zc3z04anonymousza31537ze3z87_3954 =
											MAKE_FX_PROCEDURE
											(BGl_z62zc3z04anonymousza31537ze3ze5zz__match_normaliza7eza7,
											(int) (((long) 2)), (int) (((long) 2)));
										PROCEDURE_SET(BgL_zc3z04anonymousza31537ze3z87_3954,
											(int) (((long) 0)), BgL_namez00_3944);
										PROCEDURE_SET(BgL_zc3z04anonymousza31537ze3z87_3954,
											(int) (((long) 1)), BgL_cz00_3731);
										return
											PROCEDURE_ENTRY(BgL_fun1536z00_3950) (BgL_fun1536z00_3950,
											BgL_arg1534z00_3951,
											BgL_zc3z04anonymousza31537ze3z87_3954, BEOA);
									}
								}
							}
						else
							{	/* Match/normalize.scm 261 */
								obj_t BgL_fun1565z00_3955;

								BgL_fun1565z00_3955 =
									BGl_standardiza7ezd2patternsz75zz__match_normaliza7eza7
									(BgL_fza2za2_3729);
								{	/* Match/normalize.scm 264 */
									obj_t BgL_zc3z04anonymousza31566ze3z87_3956;

									BgL_zc3z04anonymousza31566ze3z87_3956 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31566ze3ze5zz__match_normaliza7eza7,
										(int) (((long) 2)), (int) (((long) 2)));
									PROCEDURE_SET(BgL_zc3z04anonymousza31566ze3z87_3956,
										(int) (((long) 0)), BgL_namez00_3944);
									PROCEDURE_SET(BgL_zc3z04anonymousza31566ze3z87_3956,
										(int) (((long) 1)), BgL_cz00_3731);
									return
										PROCEDURE_ENTRY(BgL_fun1565z00_3955) (BgL_fun1565z00_3955,
										BgL_rz00_3730, BgL_zc3z04anonymousza31566ze3z87_3956, BEOA);
								}
							}
					}
				}
			}
		}

	}



/* &<@anonymous:1537> */
	obj_t BGl_z62zc3z04anonymousza31537ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3732, obj_t BgL_patternz00_3735, obj_t BgL_rrz00_3736)
	{
		{	/* Match/normalize.scm 252 */
			{	/* Match/normalize.scm 253 */
				obj_t BgL_namez00_3733;
				obj_t BgL_cz00_3734;

				BgL_namez00_3733 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3732, (int) (((long) 0))));
				BgL_cz00_3734 = PROCEDURE_REF(BgL_envz00_3732, (int) (((long) 1)));
				{	/* Match/normalize.scm 253 */
					obj_t BgL_labelz00_3957;

					BgL_labelz00_3957 =
						PROCEDURE_ENTRY(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
						(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
						BGl_string2441z00zz__match_normaliza7eza7, BEOA);
					{	/* Match/normalize.scm 257 */
						obj_t BgL_arg1540z00_3958;

						{	/* Match/normalize.scm 257 */
							obj_t BgL_arg1541z00_3959;

							{	/* Match/normalize.scm 257 */
								obj_t BgL_arg1542z00_3960;

								{	/* Match/normalize.scm 257 */
									obj_t BgL_arg1544z00_3961;
									obj_t BgL_arg1545z00_3962;

									{	/* Match/normalize.scm 257 */
										obj_t BgL_arg1546z00_3963;

										{	/* Match/normalize.scm 257 */
											obj_t BgL_arg1547z00_3964;

											{	/* Match/normalize.scm 257 */
												obj_t BgL_arg1551z00_3965;
												obj_t BgL_arg1552z00_3966;

												{	/* Match/normalize.scm 257 */
													obj_t BgL_arg1553z00_3967;

													{	/* Match/normalize.scm 257 */
														obj_t BgL_arg1554z00_3968;
														obj_t BgL_arg1556z00_3969;

														BgL_arg1554z00_3968 =
															MAKE_YOUNG_PAIR
															(BGl_symbol2430z00zz__match_normaliza7eza7, BNIL);
														{	/* Match/normalize.scm 257 */
															obj_t BgL_arg1557z00_3970;

															{	/* Match/normalize.scm 257 */
																obj_t BgL_arg1558z00_3971;

																{	/* Match/normalize.scm 257 */
																	obj_t BgL_arg1560z00_3972;

																	{	/* Match/normalize.scm 257 */
																		obj_t BgL_arg1561z00_3973;

																		BgL_arg1561z00_3973 =
																			PROCEDURE_ENTRY
																			(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
																			(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
																			BGl_string2442z00zz__match_normaliza7eza7,
																			BEOA);
																		BgL_arg1560z00_3972 =
																			MAKE_YOUNG_PAIR(BgL_arg1561z00_3973,
																			BNIL);
																	}
																	BgL_arg1558z00_3971 =
																		MAKE_YOUNG_PAIR(BgL_labelz00_3957,
																		BgL_arg1560z00_3972);
																}
																BgL_arg1557z00_3970 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol2443z00zz__match_normaliza7eza7,
																	BgL_arg1558z00_3971);
															}
															BgL_arg1556z00_3969 =
																MAKE_YOUNG_PAIR(BgL_arg1557z00_3970, BNIL);
														}
														BgL_arg1553z00_3967 =
															MAKE_YOUNG_PAIR(BgL_arg1554z00_3968,
															BgL_arg1556z00_3969);
													}
													BgL_arg1551z00_3965 =
														MAKE_YOUNG_PAIR
														(BGl_symbol2432z00zz__match_normaliza7eza7,
														BgL_arg1553z00_3967);
												}
												{	/* Match/normalize.scm 258 */
													obj_t BgL_arg1562z00_3974;

													{	/* Match/normalize.scm 258 */
														obj_t BgL_arg1563z00_3975;

														BgL_arg1563z00_3975 =
															MAKE_YOUNG_PAIR(BgL_namez00_3733, BNIL);
														BgL_arg1562z00_3974 =
															MAKE_YOUNG_PAIR
															(BGl_symbol2462z00zz__match_normaliza7eza7,
															BgL_arg1563z00_3975);
													}
													BgL_arg1552z00_3966 =
														MAKE_YOUNG_PAIR(BgL_arg1562z00_3974, BNIL);
												}
												BgL_arg1547z00_3964 =
													MAKE_YOUNG_PAIR(BgL_arg1551z00_3965,
													BgL_arg1552z00_3966);
											}
											BgL_arg1546z00_3963 =
												MAKE_YOUNG_PAIR(BgL_labelz00_3957, BgL_arg1547z00_3964);
										}
										BgL_arg1544z00_3961 =
											MAKE_YOUNG_PAIR(BGl_symbol2464z00zz__match_normaliza7eza7,
											BgL_arg1546z00_3963);
									}
									BgL_arg1545z00_3962 =
										MAKE_YOUNG_PAIR(BgL_patternz00_3735, BNIL);
									BgL_arg1542z00_3960 =
										MAKE_YOUNG_PAIR(BgL_arg1544z00_3961, BgL_arg1545z00_3962);
								}
								BgL_arg1541z00_3959 =
									MAKE_YOUNG_PAIR(BgL_namez00_3733, BgL_arg1542z00_3960);
							}
							BgL_arg1540z00_3958 =
								MAKE_YOUNG_PAIR(BGl_symbol2466z00zz__match_normaliza7eza7,
								BgL_arg1541z00_3959);
						}
						return
							PROCEDURE_ENTRY(BgL_cz00_3734) (BgL_cz00_3734,
							BgL_arg1540z00_3958, BgL_rrz00_3736, BEOA);
					}
				}
			}
		}

	}



/* &<@anonymous:1566> */
	obj_t BGl_z62zc3z04anonymousza31566ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3737, obj_t BgL_patternz00_3740, obj_t BgL_rrz00_3741)
	{
		{	/* Match/normalize.scm 263 */
			{	/* Match/normalize.scm 264 */
				obj_t BgL_namez00_3738;
				obj_t BgL_cz00_3739;

				BgL_namez00_3738 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3737, (int) (((long) 0))));
				BgL_cz00_3739 = PROCEDURE_REF(BgL_envz00_3737, (int) (((long) 1)));
				{	/* Match/normalize.scm 264 */
					obj_t BgL_arg1567z00_3976;

					{	/* Match/normalize.scm 264 */
						obj_t BgL_arg1568z00_3977;

						{	/* Match/normalize.scm 264 */
							obj_t BgL_arg1569z00_3978;

							BgL_arg1569z00_3978 = MAKE_YOUNG_PAIR(BgL_patternz00_3740, BNIL);
							BgL_arg1568z00_3977 =
								MAKE_YOUNG_PAIR(BgL_namez00_3738, BgL_arg1569z00_3978);
						}
						BgL_arg1567z00_3976 =
							MAKE_YOUNG_PAIR(BGl_symbol2468z00zz__match_normaliza7eza7,
							BgL_arg1568z00_3977);
					}
					return
						PROCEDURE_ENTRY(BgL_cz00_3739) (BgL_cz00_3739, BgL_arg1567z00_3976,
						BgL_rrz00_3741, BEOA);
				}
			}
		}

	}



/* standardize-tree-variable */
	obj_t BGl_standardiza7ezd2treezd2variableza7zz__match_normaliza7eza7(obj_t
		BgL_ez00_29, obj_t BgL_f1z00_30, obj_t BgL_f2z00_31)
	{
		{	/* Match/normalize.scm 266 */
			{	/* Match/normalize.scm 267 */
				obj_t BgL_zc3z04anonymousza31571ze3z87_3744;

				BgL_zc3z04anonymousza31571ze3z87_3744 =
					MAKE_FX_PROCEDURE
					(BGl_z62zc3z04anonymousza31571ze3ze5zz__match_normaliza7eza7,
					(int) (((long) 2)), (int) (((long) 3)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31571ze3z87_3744, (int) (((long) 0)),
					BgL_ez00_29);
				PROCEDURE_SET(BgL_zc3z04anonymousza31571ze3z87_3744, (int) (((long) 1)),
					BgL_f1z00_30);
				PROCEDURE_SET(BgL_zc3z04anonymousza31571ze3z87_3744, (int) (((long) 2)),
					BgL_f2z00_31);
				return BgL_zc3z04anonymousza31571ze3z87_3744;
			}
		}

	}



/* &<@anonymous:1571> */
	obj_t BGl_z62zc3z04anonymousza31571ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3745, obj_t BgL_rz00_3749, obj_t BgL_cz00_3750)
	{
		{	/* Match/normalize.scm 267 */
			{	/* Match/normalize.scm 268 */
				obj_t BgL_ez00_3746;
				obj_t BgL_f1z00_3747;
				obj_t BgL_f2z00_3748;

				BgL_ez00_3746 = PROCEDURE_REF(BgL_envz00_3745, (int) (((long) 0)));
				BgL_f1z00_3747 = PROCEDURE_REF(BgL_envz00_3745, (int) (((long) 1)));
				BgL_f2z00_3748 = PROCEDURE_REF(BgL_envz00_3745, (int) (((long) 2)));
				{	/* Match/normalize.scm 268 */
					obj_t BgL_namez00_3979;

					{	/* Match/normalize.scm 109 */
						obj_t BgL_sz00_3980;

						{	/* Match/normalize.scm 109 */
							obj_t BgL_res2262z00_3981;

							BgL_res2262z00_3981 = SYMBOL_TO_STRING(((obj_t) BgL_ez00_3746));
							BgL_sz00_3980 = BgL_res2262z00_3981;
						}
						BgL_namez00_3979 =
							bstring_to_symbol(c_substring(BgL_sz00_3980, ((long) 1),
								STRING_LENGTH(BgL_sz00_3980)));
					}
					{	/* Match/normalize.scm 269 */
						obj_t BgL_fun1575z00_3984;

						BgL_fun1575z00_3984 =
							BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
							(BgL_f1z00_3747);
						{	/* Match/normalize.scm 270 */
							obj_t BgL_arg1573z00_3985;

							{	/* Match/normalize.scm 270 */
								obj_t BgL_imz00_3986;

								BgL_imz00_3986 = BGl_symbol2464z00zz__match_normaliza7eza7;
								{	/* Match/normalize.scm 334 */
									obj_t BgL_arg1669z00_3987;

									BgL_arg1669z00_3987 =
										MAKE_YOUNG_PAIR(BgL_namez00_3979, BgL_imz00_3986);
									BgL_arg1573z00_3985 =
										MAKE_YOUNG_PAIR(BgL_arg1669z00_3987, BgL_rz00_3749);
							}}
							{	/* Match/normalize.scm 272 */
								obj_t BgL_zc3z04anonymousza31576ze3z87_3988;

								BgL_zc3z04anonymousza31576ze3z87_3988 =
									MAKE_FX_PROCEDURE
									(BGl_z62zc3z04anonymousza31576ze3ze5zz__match_normaliza7eza7,
									(int) (((long) 2)), (int) (((long) 3)));
								PROCEDURE_SET(BgL_zc3z04anonymousza31576ze3z87_3988,
									(int) (((long) 0)), BgL_f2z00_3748);
								PROCEDURE_SET(BgL_zc3z04anonymousza31576ze3z87_3988,
									(int) (((long) 1)), BgL_namez00_3979);
								PROCEDURE_SET(BgL_zc3z04anonymousza31576ze3z87_3988,
									(int) (((long) 2)), BgL_cz00_3750);
								return
									PROCEDURE_ENTRY(BgL_fun1575z00_3984) (BgL_fun1575z00_3984,
									BgL_arg1573z00_3985, BgL_zc3z04anonymousza31576ze3z87_3988,
									BEOA);
							}
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1576> */
	obj_t BGl_z62zc3z04anonymousza31576ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3751, obj_t BgL_holezd2patternzd2_3755, obj_t BgL_rrz00_3756)
	{
		{	/* Match/normalize.scm 271 */
			{	/* Match/normalize.scm 272 */
				obj_t BgL_f2z00_3752;
				obj_t BgL_namez00_3753;
				obj_t BgL_cz00_3754;

				BgL_f2z00_3752 = PROCEDURE_REF(BgL_envz00_3751, (int) (((long) 0)));
				BgL_namez00_3753 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3751, (int) (((long) 1))));
				BgL_cz00_3754 = PROCEDURE_REF(BgL_envz00_3751, (int) (((long) 2)));
				{	/* Match/normalize.scm 272 */
					obj_t BgL_fun1578z00_3989;

					BgL_fun1578z00_3989 =
						BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
						(BgL_f2z00_3752);
					{	/* Match/normalize.scm 275 */
						obj_t BgL_zc3z04anonymousza31579ze3z87_3990;

						BgL_zc3z04anonymousza31579ze3z87_3990 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31579ze3ze5zz__match_normaliza7eza7,
							(int) (((long) 2)), (int) (((long) 3)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31579ze3z87_3990,
							(int) (((long) 0)), BgL_holezd2patternzd2_3755);
						PROCEDURE_SET(BgL_zc3z04anonymousza31579ze3z87_3990,
							(int) (((long) 1)), BgL_namez00_3753);
						PROCEDURE_SET(BgL_zc3z04anonymousza31579ze3z87_3990,
							(int) (((long) 2)), BgL_cz00_3754);
						return PROCEDURE_ENTRY(BgL_fun1578z00_3989) (BgL_fun1578z00_3989,
							BgL_rrz00_3756, BgL_zc3z04anonymousza31579ze3z87_3990, BEOA);
					}
				}
			}
		}

	}



/* &<@anonymous:1579> */
	obj_t BGl_z62zc3z04anonymousza31579ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3757, obj_t BgL_patternsz00_3761, obj_t BgL_rrrz00_3762)
	{
		{	/* Match/normalize.scm 274 */
			{	/* Match/normalize.scm 275 */
				obj_t BgL_holezd2patternzd2_3758;
				obj_t BgL_namez00_3759;
				obj_t BgL_cz00_3760;

				BgL_holezd2patternzd2_3758 =
					PROCEDURE_REF(BgL_envz00_3757, (int) (((long) 0)));
				BgL_namez00_3759 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3757, (int) (((long) 1))));
				BgL_cz00_3760 = PROCEDURE_REF(BgL_envz00_3757, (int) (((long) 2)));
				if (BGl_2ze3ze3zz__r4_numbers_6_5z00
					(BGl_oczd2countzd2zz__match_normaliza7eza7(BgL_namez00_3759,
							BgL_patternsz00_3761), BINT(((long) 1))))
					{	/* Match/normalize.scm 276 */
						obj_t BgL_arg1582z00_3991;

						{	/* Match/normalize.scm 276 */
							obj_t BgL_arg1583z00_3992;

							{	/* Match/normalize.scm 276 */
								obj_t BgL_arg1584z00_3993;

								{	/* Match/normalize.scm 276 */
									obj_t BgL_arg1587z00_3994;

									BgL_arg1587z00_3994 =
										MAKE_YOUNG_PAIR(BgL_holezd2patternzd2_3758, BNIL);
									BgL_arg1584z00_3993 =
										MAKE_YOUNG_PAIR(BgL_patternsz00_3761, BgL_arg1587z00_3994);
								}
								BgL_arg1583z00_3992 =
									MAKE_YOUNG_PAIR(BgL_namez00_3759, BgL_arg1584z00_3993);
							}
							BgL_arg1582z00_3991 =
								MAKE_YOUNG_PAIR(BGl_symbol2464z00zz__match_normaliza7eza7,
								BgL_arg1583z00_3992);
						}
						return
							PROCEDURE_ENTRY(BgL_cz00_3760) (BgL_cz00_3760,
							BgL_arg1582z00_3991, BgL_rrrz00_3762, BEOA);
					}
				else
					{	/* Match/normalize.scm 277 */
						obj_t BgL_arg1588z00_3995;

						{	/* Match/normalize.scm 277 */
							obj_t BgL_arg1589z00_3996;

							{	/* Match/normalize.scm 277 */
								obj_t BgL_arg1592z00_3997;

								{	/* Match/normalize.scm 277 */
									obj_t BgL_arg1593z00_3998;

									BgL_arg1593z00_3998 =
										MAKE_YOUNG_PAIR(BgL_holezd2patternzd2_3758, BNIL);
									BgL_arg1592z00_3997 =
										MAKE_YOUNG_PAIR(BgL_patternsz00_3761, BgL_arg1593z00_3998);
								}
								BgL_arg1589z00_3996 =
									MAKE_YOUNG_PAIR(BgL_namez00_3759, BgL_arg1592z00_3997);
							}
							BgL_arg1588z00_3995 =
								MAKE_YOUNG_PAIR(BGl_symbol2445z00zz__match_normaliza7eza7,
								BgL_arg1589z00_3996);
						}
						return
							PROCEDURE_ENTRY(BgL_cz00_3760) (BgL_cz00_3760,
							BgL_arg1588z00_3995, BgL_rrrz00_3762, BEOA);
					}
			}
		}

	}



/* oc-count */
	obj_t BGl_oczd2countzd2zz__match_normaliza7eza7(obj_t BgL_namez00_32,
		obj_t BgL_patternz00_33)
	{
		{	/* Match/normalize.scm 279 */
			if (NULLP(BgL_patternz00_33))
				{	/* Match/normalize.scm 281 */
					return BINT(((long) 0));
				}
			else
				{	/* Match/normalize.scm 281 */
					if (
						(CAR(
								((obj_t) BgL_patternz00_33)) ==
							BGl_symbol2443z00zz__match_normaliza7eza7))
						{	/* Match/normalize.scm 283 */
							bool_t BgL_test2639z00_5258;

							{	/* Match/normalize.scm 283 */
								obj_t BgL_tmpz00_5259;

								{	/* Match/normalize.scm 283 */
									obj_t BgL_pairz00_2814;

									BgL_pairz00_2814 = CDR(((obj_t) BgL_patternz00_33));
									BgL_tmpz00_5259 = CAR(BgL_pairz00_2814);
								}
								BgL_test2639z00_5258 = (BgL_tmpz00_5259 == BgL_namez00_32);
							}
							if (BgL_test2639z00_5258)
								{	/* Match/normalize.scm 283 */
									return BINT(((long) 1));
								}
							else
								{	/* Match/normalize.scm 283 */
									return BINT(((long) 0));
						}}
					else
						{	/* Match/normalize.scm 282 */
							if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR(
											((obj_t) BgL_patternz00_33)),
										BGl_list2470z00zz__match_normaliza7eza7)))
								{	/* Match/normalize.scm 287 */
									obj_t BgL_runner1613z00_1675;

									{	/* Match/normalize.scm 287 */
										obj_t BgL_l1108z00_1662;

										BgL_l1108z00_1662 = CDR(((obj_t) BgL_patternz00_33));
										if (NULLP(BgL_l1108z00_1662))
											{	/* Match/normalize.scm 287 */
												BgL_runner1613z00_1675 = BNIL;
											}
										else
											{	/* Match/normalize.scm 287 */
												obj_t BgL_head1110z00_1664;

												{	/* Match/normalize.scm 287 */
													obj_t BgL_res2268z00_2818;

													BgL_res2268z00_2818 = MAKE_YOUNG_PAIR(BNIL, BNIL);
													BgL_head1110z00_1664 = BgL_res2268z00_2818;
												}
												{
													obj_t BgL_l1108z00_2842;
													obj_t BgL_tail1111z00_2843;

													BgL_l1108z00_2842 = BgL_l1108z00_1662;
													BgL_tail1111z00_2843 = BgL_head1110z00_1664;
												BgL_zc3z04anonymousza31608ze3z87_2841:
													if (NULLP(BgL_l1108z00_2842))
														{	/* Match/normalize.scm 287 */
															BgL_runner1613z00_1675 =
																CDR(BgL_head1110z00_1664);
														}
													else
														{	/* Match/normalize.scm 287 */
															obj_t BgL_newtail1112z00_2850;

															{	/* Match/normalize.scm 287 */
																obj_t BgL_arg1612z00_2851;

																{	/* Match/normalize.scm 287 */
																	obj_t BgL_patz00_2852;

																	BgL_patz00_2852 =
																		CAR(((obj_t) BgL_l1108z00_2842));
																	BgL_arg1612z00_2851 =
																		BGl_oczd2countzd2zz__match_normaliza7eza7
																		(BgL_namez00_32, BgL_patz00_2852);
																}
																{	/* Match/normalize.scm 287 */
																	obj_t BgL_res2274z00_2857;

																	BgL_res2274z00_2857 =
																		MAKE_YOUNG_PAIR(BgL_arg1612z00_2851, BNIL);
																	BgL_newtail1112z00_2850 = BgL_res2274z00_2857;
																}
															}
															SET_CDR(BgL_tail1111z00_2843,
																BgL_newtail1112z00_2850);
															{	/* Match/normalize.scm 287 */
																obj_t BgL_arg1611z00_2853;

																BgL_arg1611z00_2853 =
																	CDR(((obj_t) BgL_l1108z00_2842));
																{
																	obj_t BgL_tail1111z00_5287;
																	obj_t BgL_l1108z00_5286;

																	BgL_l1108z00_5286 = BgL_arg1611z00_2853;
																	BgL_tail1111z00_5287 =
																		BgL_newtail1112z00_2850;
																	BgL_tail1111z00_2843 = BgL_tail1111z00_5287;
																	BgL_l1108z00_2842 = BgL_l1108z00_5286;
																	goto BgL_zc3z04anonymousza31608ze3z87_2841;
																}
															}
														}
												}
											}
									}
									return
										BGl_zb2zb2zz__r4_numbers_6_5z00(BgL_runner1613z00_1675);
								}
							else
								{	/* Match/normalize.scm 286 */
									return BINT(((long) 0));
		}}}}

	}



/* standardize-lispish-segment-variable */
	obj_t
		BGl_standardiza7ezd2lispishzd2segmentzd2variablez75zz__match_normaliza7eza7
		(obj_t BgL_ez00_34, obj_t BgL_fza2za2_35)
	{
		{	/* Match/normalize.scm 290 */
			if (NULLP(BgL_fza2za2_35))
				{	/* Match/normalize.scm 292 */
					obj_t BgL_zc3z04anonymousza31617ze3z87_3763;

					BgL_zc3z04anonymousza31617ze3z87_3763 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31617ze3ze5zz__match_normaliza7eza7,
						(int) (((long) 2)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31617ze3z87_3763,
						(int) (((long) 0)), BgL_ez00_34);
					return BgL_zc3z04anonymousza31617ze3z87_3763;
				}
			else
				{	/* Match/normalize.scm 291 */
					return
						BGl_standardiza7ezd2segmentzd2variableza7zz__match_normaliza7eza7
						(BgL_ez00_34, BgL_fza2za2_35);
				}
		}

	}



/* &<@anonymous:1617> */
	obj_t BGl_z62zc3z04anonymousza31617ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3764, obj_t BgL_rz00_3766, obj_t BgL_cz00_3767)
	{
		{	/* Match/normalize.scm 292 */
			{	/* Match/normalize.scm 293 */
				obj_t BgL_ez00_3765;

				BgL_ez00_3765 = PROCEDURE_REF(BgL_envz00_3764, (int) (((long) 0)));
				{	/* Match/normalize.scm 293 */
					obj_t BgL_namez00_3999;

					{	/* Match/normalize.scm 117 */
						obj_t BgL_sz00_4000;

						{	/* Match/normalize.scm 117 */
							obj_t BgL_res2276z00_4001;

							BgL_res2276z00_4001 = SYMBOL_TO_STRING(((obj_t) BgL_ez00_3765));
							BgL_sz00_4000 = BgL_res2276z00_4001;
						}
						BgL_namez00_3999 =
							bstring_to_symbol(c_substring(BgL_sz00_4000, ((long) 3),
								STRING_LENGTH(BgL_sz00_4000)));
					}
					{	/* Match/normalize.scm 294 */
						bool_t BgL_test2644z00_5305;

						{	/* Match/normalize.scm 294 */
							obj_t BgL_arg1629z00_4004;

							if (CBOOL(BGl_assqz00zz__r4_pairs_and_lists_6_3z00
									(BgL_namez00_3999, BgL_rz00_3766)))
								{	/* Match/normalize.scm 337 */
									BgL_arg1629z00_4004 =
										CDR(BGl_assqz00zz__r4_pairs_and_lists_6_3z00
										(BgL_namez00_3999, BgL_rz00_3766));
								}
							else
								{	/* Match/normalize.scm 337 */
									BgL_arg1629z00_4004 = BFALSE;
								}
							BgL_test2644z00_5305 =
								(BgL_arg1629z00_4004 ==
								BGl_unboundzd2patternzd2zz__match_normaliza7eza7);
						}
						if (BgL_test2644z00_5305)
							{	/* Match/normalize.scm 295 */
								obj_t BgL_arg1620z00_4005;
								obj_t BgL_arg1621z00_4006;

								{	/* Match/normalize.scm 295 */
									obj_t BgL_arg1623z00_4007;

									{	/* Match/normalize.scm 295 */
										obj_t BgL_arg1624z00_4008;

										{	/* Match/normalize.scm 295 */
											obj_t BgL_arg1626z00_4009;

											BgL_arg1626z00_4009 =
												MAKE_YOUNG_PAIR
												(BGl_symbol2430z00zz__match_normaliza7eza7, BNIL);
											BgL_arg1624z00_4008 =
												MAKE_YOUNG_PAIR(BgL_arg1626z00_4009, BNIL);
										}
										BgL_arg1623z00_4007 =
											MAKE_YOUNG_PAIR(BgL_namez00_3999, BgL_arg1624z00_4008);
									}
									BgL_arg1620z00_4005 =
										MAKE_YOUNG_PAIR(BGl_symbol2458z00zz__match_normaliza7eza7,
										BgL_arg1623z00_4007);
								}
								{	/* Match/normalize.scm 296 */
									obj_t BgL_imz00_4010;

									BgL_imz00_4010 = BGl_symbol2460z00zz__match_normaliza7eza7;
									{	/* Match/normalize.scm 334 */
										obj_t BgL_arg1669z00_4011;

										BgL_arg1669z00_4011 =
											MAKE_YOUNG_PAIR(BgL_namez00_3999, BgL_imz00_4010);
										BgL_arg1621z00_4006 =
											MAKE_YOUNG_PAIR(BgL_arg1669z00_4011, BgL_rz00_3766);
									}
								}
								return
									PROCEDURE_ENTRY(BgL_cz00_3767) (BgL_cz00_3767,
									BgL_arg1620z00_4005, BgL_arg1621z00_4006, BEOA);
							}
						else
							{	/* Match/normalize.scm 297 */
								obj_t BgL_arg1627z00_4012;

								{	/* Match/normalize.scm 297 */
									obj_t BgL_arg1628z00_4013;

									BgL_arg1628z00_4013 = MAKE_YOUNG_PAIR(BgL_namez00_3999, BNIL);
									BgL_arg1627z00_4012 =
										MAKE_YOUNG_PAIR(BGl_symbol2458z00zz__match_normaliza7eza7,
										BgL_arg1628z00_4013);
								}
								return
									PROCEDURE_ENTRY(BgL_cz00_3767) (BgL_cz00_3767,
									BgL_arg1627z00_4012, BgL_rz00_3766, BEOA);
							}
					}
				}
			}
		}

	}



/* standardize-any */
	obj_t BGl_standardiza7ezd2anyz75zz__match_normaliza7eza7(obj_t BgL_fza2za2_36)
	{
		{	/* Match/normalize.scm 300 */
			{	/* Match/normalize.scm 301 */
				obj_t BgL_zc3z04anonymousza31630ze3z87_3769;

				BgL_zc3z04anonymousza31630ze3z87_3769 =
					MAKE_FX_PROCEDURE
					(BGl_z62zc3z04anonymousza31630ze3ze5zz__match_normaliza7eza7,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31630ze3z87_3769, (int) (((long) 0)),
					BgL_fza2za2_36);
				return BgL_zc3z04anonymousza31630ze3z87_3769;
			}
		}

	}



/* &<@anonymous:1630> */
	obj_t BGl_z62zc3z04anonymousza31630ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3770, obj_t BgL_rz00_3772, obj_t BgL_cz00_3773)
	{
		{	/* Match/normalize.scm 301 */
			{	/* Match/normalize.scm 302 */
				obj_t BgL_fza2za2_3771;

				BgL_fza2za2_3771 = PROCEDURE_REF(BgL_envz00_3770, (int) (((long) 0)));
				{	/* Match/normalize.scm 302 */
					obj_t BgL_fun1633z00_4014;

					BgL_fun1633z00_4014 =
						BGl_standardiza7ezd2patternsz75zz__match_normaliza7eza7
						(BgL_fza2za2_3771);
					{	/* Match/normalize.scm 305 */
						obj_t BgL_zc3z04anonymousza31634ze3z87_4015;

						BgL_zc3z04anonymousza31634ze3z87_4015 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31634ze3ze5zz__match_normaliza7eza7,
							(int) (((long) 2)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31634ze3z87_4015,
							(int) (((long) 0)), BgL_cz00_3773);
						return PROCEDURE_ENTRY(BgL_fun1633z00_4014) (BgL_fun1633z00_4014,
							BgL_rz00_3772, BgL_zc3z04anonymousza31634ze3z87_4015, BEOA);
					}
				}
			}
		}

	}



/* &<@anonymous:1634> */
	obj_t BGl_z62zc3z04anonymousza31634ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3774, obj_t BgL_patternz00_3776, obj_t BgL_rrz00_3777)
	{
		{	/* Match/normalize.scm 304 */
			{	/* Match/normalize.scm 305 */
				obj_t BgL_cz00_3775;

				BgL_cz00_3775 = PROCEDURE_REF(BgL_envz00_3774, (int) (((long) 0)));
				{	/* Match/normalize.scm 305 */
					obj_t BgL_labelz00_4016;

					BgL_labelz00_4016 =
						PROCEDURE_ENTRY(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
						(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
						BGl_string2441z00zz__match_normaliza7eza7, BEOA);
					if (CBOOL(BGl_z62zc3z04anonymousza31490ze3ze5zz__match_normaliza7eza7
							(BGl_za2preferzd2xconsza2zd2zz__match_normaliza7eza7,
								BGl_symbol2450z00zz__match_normaliza7eza7)))
						{	/* Match/normalize.scm 308 */
							obj_t BgL_arg1637z00_4017;

							{	/* Match/normalize.scm 308 */
								obj_t BgL_arg1639z00_4018;

								{	/* Match/normalize.scm 308 */
									obj_t BgL_arg1640z00_4019;

									{	/* Match/normalize.scm 308 */
										obj_t BgL_arg1641z00_4020;
										obj_t BgL_arg1642z00_4021;

										{	/* Match/normalize.scm 308 */
											obj_t BgL_arg1643z00_4022;

											{	/* Match/normalize.scm 308 */
												obj_t BgL_arg1644z00_4023;
												obj_t BgL_arg1645z00_4024;

												BgL_arg1644z00_4023 =
													MAKE_YOUNG_PAIR
													(BGl_symbol2430z00zz__match_normaliza7eza7, BNIL);
												{	/* Match/normalize.scm 308 */
													obj_t BgL_arg1648z00_4025;

													{	/* Match/normalize.scm 308 */
														obj_t BgL_arg1649z00_4026;

														{	/* Match/normalize.scm 308 */
															obj_t BgL_arg1650z00_4027;

															{	/* Match/normalize.scm 308 */
																obj_t BgL_arg1651z00_4028;

																BgL_arg1651z00_4028 =
																	PROCEDURE_ENTRY
																	(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
																	(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
																	BGl_string2442z00zz__match_normaliza7eza7,
																	BEOA);
																BgL_arg1650z00_4027 =
																	MAKE_YOUNG_PAIR(BgL_arg1651z00_4028, BNIL);
															}
															BgL_arg1649z00_4026 =
																MAKE_YOUNG_PAIR(BgL_labelz00_4016,
																BgL_arg1650z00_4027);
														}
														BgL_arg1648z00_4025 =
															MAKE_YOUNG_PAIR
															(BGl_symbol2443z00zz__match_normaliza7eza7,
															BgL_arg1649z00_4026);
													}
													BgL_arg1645z00_4024 =
														MAKE_YOUNG_PAIR(BgL_arg1648z00_4025, BNIL);
												}
												BgL_arg1643z00_4022 =
													MAKE_YOUNG_PAIR(BgL_arg1644z00_4023,
													BgL_arg1645z00_4024);
											}
											BgL_arg1641z00_4020 =
												MAKE_YOUNG_PAIR
												(BGl_symbol2456z00zz__match_normaliza7eza7,
												BgL_arg1643z00_4022);
										}
										BgL_arg1642z00_4021 =
											MAKE_YOUNG_PAIR(BgL_patternz00_3776, BNIL);
										BgL_arg1640z00_4019 =
											MAKE_YOUNG_PAIR(BgL_arg1641z00_4020, BgL_arg1642z00_4021);
									}
									BgL_arg1639z00_4018 =
										MAKE_YOUNG_PAIR(BgL_labelz00_4016, BgL_arg1640z00_4019);
								}
								BgL_arg1637z00_4017 =
									MAKE_YOUNG_PAIR(BGl_symbol2445z00zz__match_normaliza7eza7,
									BgL_arg1639z00_4018);
							}
							return
								PROCEDURE_ENTRY(BgL_cz00_3775) (BgL_cz00_3775,
								BgL_arg1637z00_4017, BgL_rrz00_3777, BEOA);
						}
					else
						{	/* Match/normalize.scm 312 */
							obj_t BgL_arg1652z00_4029;

							{	/* Match/normalize.scm 312 */
								obj_t BgL_arg1654z00_4030;

								{	/* Match/normalize.scm 312 */
									obj_t BgL_arg1656z00_4031;

									{	/* Match/normalize.scm 312 */
										obj_t BgL_arg1657z00_4032;
										obj_t BgL_arg1658z00_4033;

										{	/* Match/normalize.scm 312 */
											obj_t BgL_arg1659z00_4034;

											{	/* Match/normalize.scm 312 */
												obj_t BgL_arg1660z00_4035;
												obj_t BgL_arg1661z00_4036;

												BgL_arg1660z00_4035 =
													MAKE_YOUNG_PAIR
													(BGl_symbol2430z00zz__match_normaliza7eza7, BNIL);
												{	/* Match/normalize.scm 312 */
													obj_t BgL_arg1662z00_4037;

													{	/* Match/normalize.scm 312 */
														obj_t BgL_arg1663z00_4038;

														{	/* Match/normalize.scm 312 */
															obj_t BgL_arg1664z00_4039;

															{	/* Match/normalize.scm 312 */
																obj_t BgL_arg1665z00_4040;

																BgL_arg1665z00_4040 =
																	PROCEDURE_ENTRY
																	(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
																	(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
																	BGl_string2442z00zz__match_normaliza7eza7,
																	BEOA);
																BgL_arg1664z00_4039 =
																	MAKE_YOUNG_PAIR(BgL_arg1665z00_4040, BNIL);
															}
															BgL_arg1663z00_4038 =
																MAKE_YOUNG_PAIR(BgL_labelz00_4016,
																BgL_arg1664z00_4039);
														}
														BgL_arg1662z00_4037 =
															MAKE_YOUNG_PAIR
															(BGl_symbol2443z00zz__match_normaliza7eza7,
															BgL_arg1663z00_4038);
													}
													BgL_arg1661z00_4036 =
														MAKE_YOUNG_PAIR(BgL_arg1662z00_4037, BNIL);
												}
												BgL_arg1659z00_4034 =
													MAKE_YOUNG_PAIR(BgL_arg1660z00_4035,
													BgL_arg1661z00_4036);
											}
											BgL_arg1657z00_4032 =
												MAKE_YOUNG_PAIR
												(BGl_symbol2432z00zz__match_normaliza7eza7,
												BgL_arg1659z00_4034);
										}
										BgL_arg1658z00_4033 =
											MAKE_YOUNG_PAIR(BgL_patternz00_3776, BNIL);
										BgL_arg1656z00_4031 =
											MAKE_YOUNG_PAIR(BgL_arg1657z00_4032, BgL_arg1658z00_4033);
									}
									BgL_arg1654z00_4030 =
										MAKE_YOUNG_PAIR(BgL_labelz00_4016, BgL_arg1656z00_4031);
								}
								BgL_arg1652z00_4029 =
									MAKE_YOUNG_PAIR(BGl_symbol2445z00zz__match_normaliza7eza7,
									BgL_arg1654z00_4030);
							}
							return
								PROCEDURE_ENTRY(BgL_cz00_3775) (BgL_cz00_3775,
								BgL_arg1652z00_4029, BgL_rrz00_3777, BEOA);
						}
				}
			}
		}

	}



/* standardize-lispish-any */
	obj_t BGl_standardiza7ezd2lispishzd2anyza7zz__match_normaliza7eza7(obj_t
		BgL_fza2za2_37)
	{
		{	/* Match/normalize.scm 316 */
			if (NULLP(BgL_fza2za2_37))
				{	/* Match/normalize.scm 317 */
					return BGl_proc2473z00zz__match_normaliza7eza7;
				}
			else
				{	/* Match/normalize.scm 317 */
					return
						BGl_standardiza7ezd2anyz75zz__match_normaliza7eza7(BgL_fza2za2_37);
				}
		}

	}



/* &<@anonymous:1667> */
	obj_t BGl_z62zc3z04anonymousza31667ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3779, obj_t BgL_rz00_3780, obj_t BgL_cz00_3781)
	{
		{	/* Match/normalize.scm 318 */
			{	/* Match/normalize.scm 318 */
				obj_t BgL_arg1668z00_4041;

				BgL_arg1668z00_4041 =
					MAKE_YOUNG_PAIR(BGl_symbol2430z00zz__match_normaliza7eza7, BNIL);
				return
					PROCEDURE_ENTRY(BgL_cz00_3781) (BgL_cz00_3781, BgL_arg1668z00_4041,
					BgL_rz00_3780, BEOA);
			}
		}

	}



/* extend-r-macro-env */
	BGL_EXPORTED_DEF obj_t
		BGl_extendzd2rzd2macrozd2envzd2zz__match_normaliza7eza7(obj_t
		BgL_namez00_45, obj_t BgL_funz00_46)
	{
		{	/* Match/normalize.scm 341 */
			{	/* Match/normalize.scm 343 */
				obj_t BgL_fnz00_2885;

				BgL_fnz00_2885 = BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7;
				{	/* Match/normalize.scm 334 */
					obj_t BgL_arg1669z00_2886;

					BgL_arg1669z00_2886 = MAKE_YOUNG_PAIR(BgL_namez00_45, BgL_funz00_46);
					return (BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7 =
						MAKE_YOUNG_PAIR(BgL_arg1669z00_2886, BgL_fnz00_2885), BUNSPEC);
				}
			}
		}

	}



/* &extend-r-macro-env */
	obj_t BGl_z62extendzd2rzd2macrozd2envzb0zz__match_normaliza7eza7(obj_t
		BgL_envz00_3782, obj_t BgL_namez00_3783, obj_t BgL_funz00_3784)
	{
		{	/* Match/normalize.scm 341 */
			return
				BGl_extendzd2rzd2macrozd2envzd2zz__match_normaliza7eza7
				(BgL_namez00_3783, BgL_funz00_3784);
		}

	}



/* coherent-environment? */
	bool_t BGl_coherentzd2environmentzf3z21zz__match_normaliza7eza7(obj_t
		BgL_rz00_48, obj_t BgL_rrz00_49)
	{
		{	/* Match/normalize.scm 469 */
		BGl_coherentzd2environmentzf3z21zz__match_normaliza7eza7:
			if (PAIRP(BgL_rz00_48))
				{	/* Match/normalize.scm 475 */
					bool_t BgL_test2649z00_5414;

					{	/* Match/normalize.scm 475 */
						obj_t BgL_arg1684z00_1744;

						BgL_arg1684z00_1744 = CAR(CAR(BgL_rz00_48));
						{
							obj_t BgL_rz00_2921;

							BgL_rz00_2921 = BgL_rrz00_49;
						BgL_lookz00_2920:
							if (PAIRP(BgL_rz00_2921))
								{	/* Match/normalize.scm 472 */
									bool_t BgL__ortest_1061z00_2923;

									BgL__ortest_1061z00_2923 =
										(CAR(CAR(BgL_rz00_2921)) == BgL_arg1684z00_1744);
									if (BgL__ortest_1061z00_2923)
										{	/* Match/normalize.scm 472 */
											BgL_test2649z00_5414 = BgL__ortest_1061z00_2923;
										}
									else
										{
											obj_t BgL_rz00_5423;

											BgL_rz00_5423 = CDR(BgL_rz00_2921);
											BgL_rz00_2921 = BgL_rz00_5423;
											goto BgL_lookz00_2920;
										}
								}
							else
								{	/* Match/normalize.scm 471 */
									BgL_test2649z00_5414 = ((bool_t) 0);
								}
						}
					}
					if (BgL_test2649z00_5414)
						{
							obj_t BgL_rz00_5425;

							BgL_rz00_5425 = CDR(BgL_rz00_48);
							BgL_rz00_48 = BgL_rz00_5425;
							goto BGl_coherentzd2environmentzf3z21zz__match_normaliza7eza7;
						}
					else
						{	/* Match/normalize.scm 475 */
							return ((bool_t) 0);
						}
				}
			else
				{	/* Match/normalize.scm 474 */
					return ((bool_t) 1);
				}
		}

	}



/* standardize-vector */
	obj_t BGl_standardiza7ezd2vectorz75zz__match_normaliza7eza7(obj_t BgL_ez00_54)
	{
		{	/* Match/normalize.scm 496 */
			{	/* Match/normalize.scm 498 */
				obj_t BgL_tmpz00_1749;

				{	/* Match/normalize.scm 498 */
					obj_t BgL_arg1738z00_1796;

					BgL_arg1738z00_1796 =
						BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(BgL_ez00_54);
					{	/* Match/normalize.scm 124 */
						obj_t BgL_fun1427z00_2933;

						BgL_fun1427z00_2933 =
							BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
							(BgL_arg1738z00_1796);
						BgL_tmpz00_1749 =
							PROCEDURE_ENTRY(BgL_fun1427z00_2933) (BgL_fun1427z00_2933,
							BGl_rzd2macrozd2patternz00zz__match_normaliza7eza7,
							BGl_proc2474z00zz__match_normaliza7eza7, BEOA);
					}
				}
				{	/* Match/normalize.scm 518 */
					obj_t BgL_zc3z04anonymousza31687ze3z87_3785;

					BgL_zc3z04anonymousza31687ze3z87_3785 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31687ze3ze5zz__match_normaliza7eza7,
						(int) (((long) 2)), (int) (((long) 2)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31687ze3z87_3785,
						(int) (((long) 0)), BgL_ez00_54);
					PROCEDURE_SET(BgL_zc3z04anonymousza31687ze3z87_3785,
						(int) (((long) 1)), BgL_tmpz00_1749);
					return BgL_zc3z04anonymousza31687ze3z87_3785;
				}
			}
		}

	}



/* &<@anonymous:1687> */
	obj_t BGl_z62zc3z04anonymousza31687ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3787, obj_t BgL_rz00_3790, obj_t BgL_cz00_3791)
	{
		{	/* Match/normalize.scm 518 */
			{	/* Match/normalize.scm 519 */
				obj_t BgL_ez00_3788;
				obj_t BgL_tmpz00_3789;

				BgL_ez00_3788 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3787, (int) (((long) 0))));
				BgL_tmpz00_3789 = PROCEDURE_REF(BgL_envz00_3787, (int) (((long) 1)));
				{	/* Match/normalize.scm 519 */
					obj_t BgL_arg1688z00_4042;

					{	/* Match/normalize.scm 519 */
						obj_t BgL_arg1691z00_4043;

						{	/* Match/normalize.scm 519 */
							long BgL_arg1692z00_4044;
							obj_t BgL_arg1693z00_4045;

							BgL_arg1692z00_4044 =
								BGl_patternzd2lengthzd2zz__match_normaliza7eza7
								(BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(BgL_ez00_3788));
							BgL_arg1693z00_4045 =
								MAKE_YOUNG_PAIR(BGl_vectorifyze70ze7zz__match_normaliza7eza7
								(BgL_tmpz00_3789), BNIL);
							BgL_arg1691z00_4043 =
								MAKE_YOUNG_PAIR(BINT(BgL_arg1692z00_4044), BgL_arg1693z00_4045);
						}
						BgL_arg1688z00_4042 =
							MAKE_YOUNG_PAIR(BGl_symbol2475z00zz__match_normaliza7eza7,
							BgL_arg1691z00_4043);
					}
					return
						PROCEDURE_ENTRY(BgL_cz00_3791) (BgL_cz00_3791, BgL_arg1688z00_4042,
						BgL_rz00_3790, BEOA);
				}
			}
		}

	}



/* vectorify~0 */
	obj_t BGl_vectorifyze70ze7zz__match_normaliza7eza7(obj_t BgL_pz00_1750)
	{
		{	/* Match/normalize.scm 499 */
			if (
				(CAR(
						((obj_t) BgL_pz00_1750)) ==
					BGl_symbol2432z00zz__match_normaliza7eza7))
				{	/* Match/normalize.scm 503 */
					obj_t BgL_arg1699z00_1763;

					{	/* Match/normalize.scm 503 */
						obj_t BgL_arg1700z00_1764;
						obj_t BgL_arg1701z00_1765;

						{	/* Match/normalize.scm 503 */
							obj_t BgL_pairz00_2941;

							BgL_pairz00_2941 = CDR(((obj_t) BgL_pz00_1750));
							BgL_arg1700z00_1764 = CAR(BgL_pairz00_2941);
						}
						{	/* Match/normalize.scm 504 */
							obj_t BgL_arg1702z00_1766;

							{	/* Match/normalize.scm 504 */
								bool_t BgL_test2653z00_5465;

								{	/* Match/normalize.scm 504 */
									obj_t BgL_auxz00_5466;

									{	/* Match/normalize.scm 504 */
										obj_t BgL_pairz00_2947;

										{	/* Match/normalize.scm 504 */
											obj_t BgL_pairz00_2946;

											BgL_pairz00_2946 = CDR(((obj_t) BgL_pz00_1750));
											BgL_pairz00_2947 = CDR(BgL_pairz00_2946);
										}
										BgL_auxz00_5466 = CAR(BgL_pairz00_2947);
									}
									BgL_test2653z00_5465 =
										BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_auxz00_5466,
										BGl_list2477z00zz__match_normaliza7eza7);
								}
								if (BgL_test2653z00_5465)
									{	/* Match/normalize.scm 504 */
										BgL_arg1702z00_1766 =
											BGl_list2478z00zz__match_normaliza7eza7;
									}
								else
									{	/* Match/normalize.scm 506 */
										obj_t BgL_arg1707z00_1769;

										{	/* Match/normalize.scm 506 */
											obj_t BgL_pairz00_2953;

											{	/* Match/normalize.scm 506 */
												obj_t BgL_pairz00_2952;

												BgL_pairz00_2952 = CDR(((obj_t) BgL_pz00_1750));
												BgL_pairz00_2953 = CDR(BgL_pairz00_2952);
											}
											BgL_arg1707z00_1769 = CAR(BgL_pairz00_2953);
										}
										BgL_arg1702z00_1766 =
											BGl_vectorifyze70ze7zz__match_normaliza7eza7
											(BgL_arg1707z00_1769);
									}
							}
							BgL_arg1701z00_1765 = MAKE_YOUNG_PAIR(BgL_arg1702z00_1766, BNIL);
						}
						BgL_arg1699z00_1763 =
							MAKE_YOUNG_PAIR(BgL_arg1700z00_1764, BgL_arg1701z00_1765);
					}
					return
						MAKE_YOUNG_PAIR(BGl_symbol2481z00zz__match_normaliza7eza7,
						BgL_arg1699z00_1763);
				}
			else
				{	/* Match/normalize.scm 502 */
					if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_pz00_1750,
							BGl_list2483z00zz__match_normaliza7eza7))
						{	/* Match/normalize.scm 507 */
							return BGl_list2484z00zz__match_normaliza7eza7;
						}
					else
						{	/* Match/normalize.scm 507 */
							if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR(
											((obj_t) BgL_pz00_1750)),
										BGl_list2487z00zz__match_normaliza7eza7)))
								{	/* Match/normalize.scm 510 */
									obj_t BgL_arg1712z00_1774;
									obj_t BgL_arg1713z00_1775;
									obj_t BgL_arg1716z00_1776;

									BgL_arg1712z00_1774 = CAR(((obj_t) BgL_pz00_1750));
									{	/* Match/normalize.scm 511 */
										obj_t BgL_arg1721z00_1780;

										{	/* Match/normalize.scm 511 */
											obj_t BgL_pairz00_2959;

											BgL_pairz00_2959 = CDR(((obj_t) BgL_pz00_1750));
											BgL_arg1721z00_1780 = CAR(BgL_pairz00_2959);
										}
										BgL_arg1713z00_1775 =
											BGl_vectorifyze70ze7zz__match_normaliza7eza7
											(BgL_arg1721z00_1780);
									}
									{	/* Match/normalize.scm 512 */
										obj_t BgL_arg1722z00_1781;

										{	/* Match/normalize.scm 512 */
											obj_t BgL_pairz00_2965;

											{	/* Match/normalize.scm 512 */
												obj_t BgL_pairz00_2964;

												BgL_pairz00_2964 = CDR(((obj_t) BgL_pz00_1750));
												BgL_pairz00_2965 = CDR(BgL_pairz00_2964);
											}
											BgL_arg1722z00_1781 = CAR(BgL_pairz00_2965);
										}
										BgL_arg1716z00_1776 =
											BGl_vectorifyze70ze7zz__match_normaliza7eza7
											(BgL_arg1722z00_1781);
									}
									{	/* Match/normalize.scm 510 */
										obj_t BgL_list1717z00_1777;

										{	/* Match/normalize.scm 510 */
											obj_t BgL_arg1719z00_1778;

											{	/* Match/normalize.scm 510 */
												obj_t BgL_arg1720z00_1779;

												BgL_arg1720z00_1779 =
													MAKE_YOUNG_PAIR(BgL_arg1716z00_1776, BNIL);
												BgL_arg1719z00_1778 =
													MAKE_YOUNG_PAIR(BgL_arg1713z00_1775,
													BgL_arg1720z00_1779);
											}
											BgL_list1717z00_1777 =
												MAKE_YOUNG_PAIR(BgL_arg1712z00_1774,
												BgL_arg1719z00_1778);
										}
										return BgL_list1717z00_1777;
									}
								}
							else
								{	/* Match/normalize.scm 509 */
									if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR(
													((obj_t) BgL_pz00_1750)),
												BGl_list2488z00zz__match_normaliza7eza7)))
										{	/* Match/normalize.scm 514 */
											obj_t BgL_arg1725z00_1784;
											obj_t BgL_arg1726z00_1785;
											obj_t BgL_arg1727z00_1786;

											{	/* Match/normalize.scm 514 */
												obj_t BgL_pairz00_2971;

												BgL_pairz00_2971 = CDR(((obj_t) BgL_pz00_1750));
												BgL_arg1725z00_1784 = CAR(BgL_pairz00_2971);
											}
											{	/* Match/normalize.scm 515 */
												obj_t BgL_arg1732z00_1791;

												{	/* Match/normalize.scm 515 */
													obj_t BgL_pairz00_2977;

													{	/* Match/normalize.scm 515 */
														obj_t BgL_pairz00_2976;

														BgL_pairz00_2976 = CDR(((obj_t) BgL_pz00_1750));
														BgL_pairz00_2977 = CDR(BgL_pairz00_2976);
													}
													BgL_arg1732z00_1791 = CAR(BgL_pairz00_2977);
												}
												BgL_arg1726z00_1785 =
													BGl_vectorifyze70ze7zz__match_normaliza7eza7
													(BgL_arg1732z00_1791);
											}
											{	/* Match/normalize.scm 516 */
												obj_t BgL_arg1733z00_1792;

												{	/* Match/normalize.scm 516 */
													obj_t BgL_pairz00_2985;

													{	/* Match/normalize.scm 516 */
														obj_t BgL_pairz00_2984;

														{	/* Match/normalize.scm 516 */
															obj_t BgL_pairz00_2983;

															BgL_pairz00_2983 = CDR(((obj_t) BgL_pz00_1750));
															BgL_pairz00_2984 = CDR(BgL_pairz00_2983);
														}
														BgL_pairz00_2985 = CDR(BgL_pairz00_2984);
													}
													BgL_arg1733z00_1792 = CAR(BgL_pairz00_2985);
												}
												BgL_arg1727z00_1786 =
													BGl_vectorifyze70ze7zz__match_normaliza7eza7
													(BgL_arg1733z00_1792);
											}
											{	/* Match/normalize.scm 514 */
												obj_t BgL_list1728z00_1787;

												{	/* Match/normalize.scm 514 */
													obj_t BgL_arg1729z00_1788;

													{	/* Match/normalize.scm 514 */
														obj_t BgL_arg1730z00_1789;

														{	/* Match/normalize.scm 514 */
															obj_t BgL_arg1731z00_1790;

															BgL_arg1731z00_1790 =
																MAKE_YOUNG_PAIR(BgL_arg1727z00_1786, BNIL);
															BgL_arg1730z00_1789 =
																MAKE_YOUNG_PAIR(BgL_arg1726z00_1785,
																BgL_arg1731z00_1790);
														}
														BgL_arg1729z00_1788 =
															MAKE_YOUNG_PAIR(BgL_arg1725z00_1784,
															BgL_arg1730z00_1789);
													}
													BgL_list1728z00_1787 =
														MAKE_YOUNG_PAIR
														(BGl_symbol2489z00zz__match_normaliza7eza7,
														BgL_arg1729z00_1788);
												}
												return BgL_list1728z00_1787;
											}
										}
									else
										{	/* Match/normalize.scm 513 */
											return BgL_pz00_1750;
										}
								}
						}
				}
		}

	}



/* &<@anonymous:1428>2387 */
	obj_t BGl_z62zc3z04anonymousza31428ze32387ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3792, obj_t BgL_patternz00_3793, obj_t BgL_rrz00_3794)
	{
		{	/* Match/normalize.scm 126 */
			return BgL_patternz00_3793;
		}

	}



/* pattern-length */
	long BGl_patternzd2lengthzd2zz__match_normaliza7eza7(obj_t BgL_pz00_55)
	{
		{	/* Match/normalize.scm 522 */
		BGl_patternzd2lengthzd2zz__match_normaliza7eza7:
			if (CBOOL(BGl_atomzf3zf3zz__match_s2cfunz00(BgL_pz00_55)))
				{	/* Match/normalize.scm 524 */
					return ((long) 0);
				}
			else
				{	/* Match/normalize.scm 524 */
					if (NULLP(BgL_pz00_55))
						{	/* Match/normalize.scm 525 */
							return ((long) 0);
						}
					else
						{	/* Match/normalize.scm 525 */
							if (
								(CAR(
										((obj_t) BgL_pz00_55)) ==
									BGl_symbol2401z00zz__match_normaliza7eza7))
								{	/* Match/normalize.scm 526 */
									return ((long) 1);
								}
							else
								{	/* Match/normalize.scm 527 */
									bool_t BgL_test2660z00_5533;

									{	/* Match/normalize.scm 527 */
										obj_t BgL_arg1756z00_1812;

										BgL_arg1756z00_1812 = CAR(((obj_t) BgL_pz00_55));
										BgL_test2660z00_5533 =
											BGl_treezd2variablezf3z21zz__match_normaliza7eza7
											(BgL_arg1756z00_1812);
									}
									if (BgL_test2660z00_5533)
										{	/* Match/normalize.scm 527 */
											return ((long) 0);
										}
									else
										{	/* Match/normalize.scm 527 */
											if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR(
															((obj_t) BgL_pz00_55)),
														BGl_list2491z00zz__match_normaliza7eza7)))
												{	/* Match/normalize.scm 528 */
													return ((long) 0);
												}
											else
												{	/* Match/normalize.scm 528 */
													if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
																(((obj_t) BgL_pz00_55)),
																BGl_list2492z00zz__match_normaliza7eza7)))
														{	/* Match/normalize.scm 529 */
															obj_t BgL_arg1750z00_1807;

															{	/* Match/normalize.scm 529 */
																obj_t BgL_pairz00_3001;

																BgL_pairz00_3001 = CDR(((obj_t) BgL_pz00_55));
																BgL_arg1750z00_1807 = CAR(BgL_pairz00_3001);
															}
															{
																obj_t BgL_pz00_5550;

																BgL_pz00_5550 = BgL_arg1750z00_1807;
																BgL_pz00_55 = BgL_pz00_5550;
																goto
																	BGl_patternzd2lengthzd2zz__match_normaliza7eza7;
															}
														}
													else
														{	/* Match/normalize.scm 530 */
															long BgL_arg1751z00_1808;

															{	/* Match/normalize.scm 530 */
																obj_t BgL_arg1752z00_1809;

																BgL_arg1752z00_1809 =
																	CDR(((obj_t) BgL_pz00_55));
																BgL_arg1751z00_1808 =
																	BGl_patternzd2lengthzd2zz__match_normaliza7eza7
																	(BgL_arg1752z00_1809);
															}
															return
																(long)
																CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT((
																			(long) 1)), BINT(BgL_arg1751z00_1808)));
		}}}}}}}

	}



/* match-define-structure! */
	BGL_EXPORTED_DEF obj_t
		BGl_matchzd2definezd2structurez12z12zz__match_normaliza7eza7(obj_t
		BgL_expz00_56)
	{
		{	/* Match/normalize.scm 546 */
			if (PAIRP(BgL_expz00_56))
				{	/* Match/normalize.scm 547 */
					obj_t BgL_cdrzd2126zd2_1820;

					BgL_cdrzd2126zd2_1820 = CDR(BgL_expz00_56);
					if ((CAR(BgL_expz00_56) == BGl_symbol2493z00zz__match_normaliza7eza7))
						{	/* Match/normalize.scm 547 */
							if (PAIRP(BgL_cdrzd2126zd2_1820))
								{	/* Match/normalize.scm 547 */
									obj_t BgL_arg1762z00_1824;
									obj_t BgL_arg1763z00_1825;

									BgL_arg1762z00_1824 = CAR(BgL_cdrzd2126zd2_1820);
									BgL_arg1763z00_1825 = CDR(BgL_cdrzd2126zd2_1820);
									{	/* Match/normalize.scm 550 */
										obj_t BgL_arg1765z00_3024;

										{	/* Match/normalize.scm 550 */
											obj_t BgL_arg1766z00_3025;

											{	/* Match/normalize.scm 550 */
												obj_t BgL_arg1768z00_3026;
												obj_t BgL_arg1769z00_3027;

												{	/* Match/normalize.scm 550 */
													obj_t BgL_arg1770z00_3028;

													{	/* Match/normalize.scm 550 */
														obj_t BgL_arg1771z00_3029;
														obj_t BgL_arg1772z00_3030;

														{	/* Match/normalize.scm 550 */
															obj_t BgL_res2294z00_3033;

															{	/* Match/normalize.scm 550 */
																obj_t BgL_arg1990z00_3032;

																BgL_arg1990z00_3032 =
																	SYMBOL_TO_STRING(
																	((obj_t) BgL_arg1762z00_1824));
																BgL_res2294z00_3033 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg1990z00_3032);
															}
															BgL_arg1771z00_3029 = BgL_res2294z00_3033;
														}
														{	/* Match/normalize.scm 550 */
															obj_t BgL_res2295z00_3036;

															{	/* Match/normalize.scm 550 */
																obj_t BgL_symbolz00_3034;

																BgL_symbolz00_3034 =
																	BGl_symbol2404z00zz__match_normaliza7eza7;
																{	/* Match/normalize.scm 550 */
																	obj_t BgL_arg1990z00_3035;

																	BgL_arg1990z00_3035 =
																		SYMBOL_TO_STRING(BgL_symbolz00_3034);
																	BgL_res2295z00_3036 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg1990z00_3035);
																}
															}
															BgL_arg1772z00_3030 = BgL_res2295z00_3036;
														}
														BgL_arg1770z00_3028 =
															string_append(BgL_arg1771z00_3029,
															BgL_arg1772z00_3030);
													}
													BgL_arg1768z00_3026 =
														bstring_to_symbol(BgL_arg1770z00_3028);
												}
												BgL_arg1769z00_3027 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1763z00_1825, BNIL);
												BgL_arg1766z00_3025 =
													MAKE_YOUNG_PAIR(BgL_arg1768z00_3026,
													BgL_arg1769z00_3027);
											}
											BgL_arg1765z00_3024 =
												MAKE_YOUNG_PAIR(BgL_arg1762z00_1824,
												BgL_arg1766z00_3025);
										}
										return
											(BGl_za2Matchzd2Structuresza2zd2zz__match_normaliza7eza7 =
											MAKE_YOUNG_PAIR(BgL_arg1765z00_3024,
												BGl_za2Matchzd2Structuresza2zd2zz__match_normaliza7eza7),
											BUNSPEC);
									}
								}
							else
								{	/* Match/normalize.scm 547 */
									return
										BGl_errorz00zz__errorz00
										(BGl_string2495z00zz__match_normaliza7eza7, BgL_expz00_56,
										BGl_symbol2496z00zz__match_normaliza7eza7);
								}
						}
					else
						{	/* Match/normalize.scm 547 */
							return
								BGl_errorz00zz__errorz00
								(BGl_string2495z00zz__match_normaliza7eza7, BgL_expz00_56,
								BGl_symbol2496z00zz__match_normaliza7eza7);
						}
				}
			else
				{	/* Match/normalize.scm 547 */
					return
						BGl_errorz00zz__errorz00(BGl_string2495z00zz__match_normaliza7eza7,
						BgL_expz00_56, BGl_symbol2496z00zz__match_normaliza7eza7);
				}
		}

	}



/* &match-define-structure! */
	obj_t BGl_z62matchzd2definezd2structurez12z70zz__match_normaliza7eza7(obj_t
		BgL_envz00_3795, obj_t BgL_expz00_3796)
	{
		{	/* Match/normalize.scm 546 */
			return
				BGl_matchzd2definezd2structurez12z12zz__match_normaliza7eza7
				(BgL_expz00_3796);
		}

	}



/* match-define-record-type! */
	BGL_EXPORTED_DEF obj_t
		BGl_matchzd2definezd2recordzd2typez12zc0zz__match_normaliza7eza7(obj_t
		BgL_expz00_57)
	{
		{	/* Match/normalize.scm 554 */
			{
				obj_t BgL_namez00_1834;
				obj_t BgL_constrz00_1835;
				obj_t BgL_predz00_1836;
				obj_t BgL_fieldsz00_1837;

				if (PAIRP(BgL_expz00_57))
					{	/* Match/normalize.scm 555 */
						obj_t BgL_cdrzd2145zd2_1842;

						BgL_cdrzd2145zd2_1842 = CDR(BgL_expz00_57);
						if (
							(CAR(BgL_expz00_57) == BGl_symbol2498z00zz__match_normaliza7eza7))
							{	/* Match/normalize.scm 555 */
								if (PAIRP(BgL_cdrzd2145zd2_1842))
									{	/* Match/normalize.scm 555 */
										obj_t BgL_cdrzd2151zd2_1846;

										BgL_cdrzd2151zd2_1846 = CDR(BgL_cdrzd2145zd2_1842);
										if (PAIRP(BgL_cdrzd2151zd2_1846))
											{	/* Match/normalize.scm 555 */
												obj_t BgL_cdrzd2157zd2_1848;

												BgL_cdrzd2157zd2_1848 = CDR(BgL_cdrzd2151zd2_1846);
												if (PAIRP(BgL_cdrzd2157zd2_1848))
													{	/* Match/normalize.scm 555 */
														BgL_namez00_1834 = CAR(BgL_cdrzd2145zd2_1842);
														BgL_constrz00_1835 = CAR(BgL_cdrzd2151zd2_1846);
														BgL_predz00_1836 = CAR(BgL_cdrzd2157zd2_1848);
														BgL_fieldsz00_1837 = CDR(BgL_cdrzd2157zd2_1848);
														{	/* Match/normalize.scm 557 */
															obj_t BgL_reallyzd2fieldszd2_1855;

															if (NULLP(BgL_fieldsz00_1837))
																{	/* Match/normalize.scm 557 */
																	BgL_reallyzd2fieldszd2_1855 = BNIL;
																}
															else
																{	/* Match/normalize.scm 557 */
																	obj_t BgL_head1115z00_1861;

																	{	/* Match/normalize.scm 557 */
																		obj_t BgL_arg1795z00_1873;

																		{	/* Match/normalize.scm 557 */
																			obj_t BgL_pairz00_3041;

																			BgL_pairz00_3041 =
																				CAR(((obj_t) BgL_fieldsz00_1837));
																			BgL_arg1795z00_1873 =
																				CAR(BgL_pairz00_3041);
																		}
																		{	/* Match/normalize.scm 557 */
																			obj_t BgL_res2298z00_3042;

																			BgL_res2298z00_3042 =
																				MAKE_YOUNG_PAIR(BgL_arg1795z00_1873,
																				BNIL);
																			BgL_head1115z00_1861 =
																				BgL_res2298z00_3042;
																		}
																	}
																	{	/* Match/normalize.scm 557 */
																		obj_t BgL_g1118z00_1862;

																		BgL_g1118z00_1862 =
																			CDR(((obj_t) BgL_fieldsz00_1837));
																		{
																			obj_t BgL_l1113z00_3067;
																			obj_t BgL_tail1116z00_3068;

																			BgL_l1113z00_3067 = BgL_g1118z00_1862;
																			BgL_tail1116z00_3068 =
																				BgL_head1115z00_1861;
																		BgL_zc3z04anonymousza31789ze3z87_3066:
																			if (NULLP(BgL_l1113z00_3067))
																				{	/* Match/normalize.scm 557 */
																					BgL_reallyzd2fieldszd2_1855 =
																						BgL_head1115z00_1861;
																				}
																			else
																				{	/* Match/normalize.scm 557 */
																					obj_t BgL_newtail1117z00_3075;

																					{	/* Match/normalize.scm 557 */
																						obj_t BgL_arg1792z00_3076;

																						{	/* Match/normalize.scm 557 */
																							obj_t BgL_pairz00_3081;

																							BgL_pairz00_3081 =
																								CAR(
																								((obj_t) BgL_l1113z00_3067));
																							BgL_arg1792z00_3076 =
																								CAR(BgL_pairz00_3081);
																						}
																						{	/* Match/normalize.scm 557 */
																							obj_t BgL_res2304z00_3082;

																							BgL_res2304z00_3082 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1792z00_3076, BNIL);
																							BgL_newtail1117z00_3075 =
																								BgL_res2304z00_3082;
																						}
																					}
																					SET_CDR(BgL_tail1116z00_3068,
																						BgL_newtail1117z00_3075);
																					{	/* Match/normalize.scm 557 */
																						obj_t BgL_arg1791z00_3078;

																						BgL_arg1791z00_3078 =
																							CDR(((obj_t) BgL_l1113z00_3067));
																						{
																							obj_t BgL_tail1116z00_5615;
																							obj_t BgL_l1113z00_5614;

																							BgL_l1113z00_5614 =
																								BgL_arg1791z00_3078;
																							BgL_tail1116z00_5615 =
																								BgL_newtail1117z00_3075;
																							BgL_tail1116z00_3068 =
																								BgL_tail1116z00_5615;
																							BgL_l1113z00_3067 =
																								BgL_l1113z00_5614;
																							goto
																								BgL_zc3z04anonymousza31789ze3z87_3066;
																						}
																					}
																				}
																		}
																	}
																}
															{	/* Match/normalize.scm 559 */
																obj_t BgL_arg1784z00_1856;

																{	/* Match/normalize.scm 559 */
																	obj_t BgL_arg1786z00_1857;

																	BgL_arg1786z00_1857 =
																		MAKE_YOUNG_PAIR(BgL_predz00_1836,
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_fieldsz00_1837, BNIL));
																	BgL_arg1784z00_1856 =
																		MAKE_YOUNG_PAIR(BgL_namez00_1834,
																		BgL_arg1786z00_1857);
																}
																return
																	(BGl_za2Matchzd2Structuresza2zd2zz__match_normaliza7eza7
																	=
																	MAKE_YOUNG_PAIR(BgL_arg1784z00_1856,
																		BGl_za2Matchzd2Structuresza2zd2zz__match_normaliza7eza7),
																	BUNSPEC);
															}
														}
													}
												else
													{	/* Match/normalize.scm 555 */
														return
															BGl_errorz00zz__errorz00
															(BGl_string2495z00zz__match_normaliza7eza7,
															BgL_expz00_57,
															BGl_symbol2496z00zz__match_normaliza7eza7);
													}
											}
										else
											{	/* Match/normalize.scm 555 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string2495z00zz__match_normaliza7eza7,
													BgL_expz00_57,
													BGl_symbol2496z00zz__match_normaliza7eza7);
											}
									}
								else
									{	/* Match/normalize.scm 555 */
										return
											BGl_errorz00zz__errorz00
											(BGl_string2495z00zz__match_normaliza7eza7, BgL_expz00_57,
											BGl_symbol2496z00zz__match_normaliza7eza7);
									}
							}
						else
							{	/* Match/normalize.scm 555 */
								return
									BGl_errorz00zz__errorz00
									(BGl_string2495z00zz__match_normaliza7eza7, BgL_expz00_57,
									BGl_symbol2496z00zz__match_normaliza7eza7);
							}
					}
				else
					{	/* Match/normalize.scm 555 */
						return
							BGl_errorz00zz__errorz00
							(BGl_string2495z00zz__match_normaliza7eza7, BgL_expz00_57,
							BGl_symbol2496z00zz__match_normaliza7eza7);
					}
			}
		}

	}



/* &match-define-record-type! */
	obj_t
		BGl_z62matchzd2definezd2recordzd2typez12za2zz__match_normaliza7eza7(obj_t
		BgL_envz00_3797, obj_t BgL_expz00_3798)
	{
		{	/* Match/normalize.scm 554 */
			return
				BGl_matchzd2definezd2recordzd2typez12zc0zz__match_normaliza7eza7
				(BgL_expz00_3798);
		}

	}



/* standardize-struct */
	obj_t BGl_standardiza7ezd2structz75zz__match_normaliza7eza7(obj_t BgL_ez00_58)
	{
		{	/* Match/normalize.scm 567 */
			{	/* Match/normalize.scm 568 */
				obj_t BgL_zc3z04anonymousza31797ze3z87_3799;

				BgL_zc3z04anonymousza31797ze3z87_3799 =
					MAKE_FX_PROCEDURE
					(BGl_z62zc3z04anonymousza31797ze3ze5zz__match_normaliza7eza7,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31797ze3z87_3799, (int) (((long) 0)),
					BgL_ez00_58);
				return BgL_zc3z04anonymousza31797ze3z87_3799;
			}
		}

	}



/* &<@anonymous:1797> */
	obj_t BGl_z62zc3z04anonymousza31797ze3ze5zz__match_normaliza7eza7(obj_t
		BgL_envz00_3800, obj_t BgL_rz00_3802, obj_t BgL_cz00_3803)
	{
		{	/* Match/normalize.scm 568 */
			{	/* Match/normalize.scm 572 */
				obj_t BgL_ez00_3801;

				BgL_ez00_3801 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3800, (int) (((long) 0))));
				{
					obj_t BgL_providedzd2fieldszd2_4047;

					{	/* Match/normalize.scm 579 */
						obj_t BgL_fz00_4055;

						BgL_fz00_4055 =
							BGl_structzd2ze3listz31zz__structurez00(BgL_ez00_3801);
						{	/* Match/normalize.scm 581 */
							obj_t BgL_structurez00_4056;

							{	/* Match/normalize.scm 582 */
								bool_t BgL_test2673z00_5639;

								{	/* Match/normalize.scm 582 */
									obj_t BgL_tmpz00_5640;

									BgL_tmpz00_5640 = CAR(BgL_fz00_4055);
									BgL_test2673z00_5639 = PAIRP(BgL_tmpz00_5640);
								}
								if (BgL_test2673z00_5639)
									{	/* Match/normalize.scm 583 */
										obj_t BgL_arg1820z00_4057;

										{	/* Match/normalize.scm 583 */
											obj_t BgL_l1125z00_4058;

											BgL_l1125z00_4058 = CDR(BgL_fz00_4055);
											if (NULLP(BgL_l1125z00_4058))
												{	/* Match/normalize.scm 583 */
													BgL_arg1820z00_4057 = BNIL;
												}
											else
												{	/* Match/normalize.scm 583 */
													obj_t BgL_head1127z00_4059;

													{	/* Match/normalize.scm 583 */
														obj_t BgL_arg1827z00_4060;

														{	/* Match/normalize.scm 583 */
															obj_t BgL_pairz00_4061;

															BgL_pairz00_4061 =
																CAR(((obj_t) BgL_l1125z00_4058));
															BgL_arg1827z00_4060 = CAR(BgL_pairz00_4061);
														}
														{	/* Match/normalize.scm 583 */
															obj_t BgL_res2313z00_4062;

															BgL_res2313z00_4062 =
																MAKE_YOUNG_PAIR(BgL_arg1827z00_4060, BNIL);
															BgL_head1127z00_4059 = BgL_res2313z00_4062;
														}
													}
													{	/* Match/normalize.scm 583 */
														obj_t BgL_g1130z00_4063;

														BgL_g1130z00_4063 =
															CDR(((obj_t) BgL_l1125z00_4058));
														{
															obj_t BgL_l1125z00_4065;
															obj_t BgL_tail1128z00_4066;

															BgL_l1125z00_4065 = BgL_g1130z00_4063;
															BgL_tail1128z00_4066 = BgL_head1127z00_4059;
														BgL_zc3z04anonymousza31822ze3z87_4064:
															if (NULLP(BgL_l1125z00_4065))
																{	/* Match/normalize.scm 583 */
																	BgL_arg1820z00_4057 = BgL_head1127z00_4059;
																}
															else
																{	/* Match/normalize.scm 583 */
																	obj_t BgL_newtail1129z00_4067;

																	{	/* Match/normalize.scm 583 */
																		obj_t BgL_arg1825z00_4068;

																		{	/* Match/normalize.scm 583 */
																			obj_t BgL_pairz00_4069;

																			BgL_pairz00_4069 =
																				CAR(((obj_t) BgL_l1125z00_4065));
																			BgL_arg1825z00_4068 =
																				CAR(BgL_pairz00_4069);
																		}
																		{	/* Match/normalize.scm 583 */
																			obj_t BgL_res2319z00_4070;

																			BgL_res2319z00_4070 =
																				MAKE_YOUNG_PAIR(BgL_arg1825z00_4068,
																				BNIL);
																			BgL_newtail1129z00_4067 =
																				BgL_res2319z00_4070;
																		}
																	}
																	SET_CDR(BgL_tail1128z00_4066,
																		BgL_newtail1129z00_4067);
																	{	/* Match/normalize.scm 583 */
																		obj_t BgL_arg1824z00_4071;

																		BgL_arg1824z00_4071 =
																			CDR(((obj_t) BgL_l1125z00_4065));
																		{
																			obj_t BgL_tail1128z00_5662;
																			obj_t BgL_l1125z00_5661;

																			BgL_l1125z00_5661 = BgL_arg1824z00_4071;
																			BgL_tail1128z00_5662 =
																				BgL_newtail1129z00_4067;
																			BgL_tail1128z00_4066 =
																				BgL_tail1128z00_5662;
																			BgL_l1125z00_4065 = BgL_l1125z00_5661;
																			goto
																				BgL_zc3z04anonymousza31822ze3z87_4064;
																		}
																	}
																}
														}
													}
												}
										}
										BgL_providedzd2fieldszd2_4047 = BgL_arg1820z00_4057;
										{
											obj_t BgL_sz00_4049;

											BgL_sz00_4049 =
												BGl_za2Matchzd2Structuresza2zd2zz__match_normaliza7eza7;
										BgL_loop1z00_4048:
											{
												obj_t BgL_pzd2fzd2_4051;

												BgL_pzd2fzd2_4051 = BgL_providedzd2fieldszd2_4047;
											BgL_loop2z00_4050:
												if (NULLP(BgL_sz00_4049))
													{	/* Match/normalize.scm 572 */
														BgL_structurez00_4056 =
															BGl_errorz00zz__errorz00
															(BGl_string2500z00zz__match_normaliza7eza7,
															BgL_providedzd2fieldszd2_4047, BNIL);
													}
												else
													{	/* Match/normalize.scm 572 */
														if (NULLP(BgL_pzd2fzd2_4051))
															{	/* Match/normalize.scm 574 */
																BgL_structurez00_4056 =
																	CAR(((obj_t) BgL_sz00_4049));
															}
														else
															{	/* Match/normalize.scm 576 */
																bool_t BgL_test2678z00_5670;

																{	/* Match/normalize.scm 576 */
																	obj_t BgL_tmpz00_5671;

																	{	/* Match/normalize.scm 576 */
																		obj_t BgL_auxz00_5672;

																		{	/* Match/normalize.scm 576 */
																			obj_t BgL_pairz00_4052;

																			BgL_pairz00_4052 =
																				CAR(((obj_t) BgL_sz00_4049));
																			BgL_auxz00_5672 = CDR(BgL_pairz00_4052);
																		}
																		BgL_tmpz00_5671 =
																			BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																			(CAR(((obj_t) BgL_pzd2fzd2_4051)),
																			BgL_auxz00_5672);
																	}
																	BgL_test2678z00_5670 = CBOOL(BgL_tmpz00_5671);
																}
																if (BgL_test2678z00_5670)
																	{	/* Match/normalize.scm 577 */
																		obj_t BgL_arg1845z00_4053;

																		BgL_arg1845z00_4053 =
																			CDR(((obj_t) BgL_pzd2fzd2_4051));
																		{
																			obj_t BgL_pzd2fzd2_5682;

																			BgL_pzd2fzd2_5682 = BgL_arg1845z00_4053;
																			BgL_pzd2fzd2_4051 = BgL_pzd2fzd2_5682;
																			goto BgL_loop2z00_4050;
																		}
																	}
																else
																	{	/* Match/normalize.scm 578 */
																		obj_t BgL_arg1846z00_4054;

																		BgL_arg1846z00_4054 =
																			CDR(((obj_t) BgL_sz00_4049));
																		{
																			obj_t BgL_sz00_5685;

																			BgL_sz00_5685 = BgL_arg1846z00_4054;
																			BgL_sz00_4049 = BgL_sz00_5685;
																			goto BgL_loop1z00_4048;
																		}
																	}
															}
													}
											}
										}
									}
								else
									{	/* Match/normalize.scm 584 */
										bool_t BgL_test2679z00_5686;

										{	/* Match/normalize.scm 584 */
											obj_t BgL_arg1833z00_4072;

											BgL_arg1833z00_4072 = CAR(BgL_fz00_4055);
											BgL_test2679z00_5686 =
												CBOOL(BGl_assocz00zz__r4_pairs_and_lists_6_3z00
												(BgL_arg1833z00_4072,
													BGl_za2Matchzd2Structuresza2zd2zz__match_normaliza7eza7));
										}
										if (BgL_test2679z00_5686)
											{	/* Match/normalize.scm 585 */
												obj_t BgL_arg1831z00_4073;

												BgL_arg1831z00_4073 = CAR(BgL_fz00_4055);
												BgL_structurez00_4056 =
													BGl_assocz00zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1831z00_4073,
													BGl_za2Matchzd2Structuresza2zd2zz__match_normaliza7eza7);
											}
										else
											{	/* Match/normalize.scm 588 */
												obj_t BgL_arg1832z00_4074;

												BgL_arg1832z00_4074 = CAR(BgL_fz00_4055);
												BgL_structurez00_4056 =
													BGl_errorz00zz__errorz00
													(BGl_symbol2501z00zz__match_normaliza7eza7,
													BGl_string2503z00zz__match_normaliza7eza7,
													BgL_arg1832z00_4074);
											}
									}
							}
							{	/* Match/normalize.scm 582 */
								obj_t BgL_namez00_4075;

								BgL_namez00_4075 = CAR(((obj_t) BgL_structurez00_4056));
								{	/* Match/normalize.scm 589 */
									obj_t BgL_predz00_4076;

									{	/* Match/normalize.scm 590 */
										obj_t BgL_pairz00_4077;

										BgL_pairz00_4077 = CDR(((obj_t) BgL_structurez00_4056));
										BgL_predz00_4076 = CAR(BgL_pairz00_4077);
									}
									{	/* Match/normalize.scm 590 */
										obj_t BgL_fieldsz00_4078;

										{	/* Match/normalize.scm 591 */
											obj_t BgL_pairz00_4079;

											BgL_pairz00_4079 = CDR(((obj_t) BgL_structurez00_4056));
											BgL_fieldsz00_4078 = CDR(BgL_pairz00_4079);
										}
										{	/* Match/normalize.scm 591 */
											obj_t BgL_providedzd2fieldszd2_4080;

											{	/* Match/normalize.scm 592 */
												bool_t BgL_test2680z00_5702;

												{	/* Match/normalize.scm 592 */
													obj_t BgL_tmpz00_5703;

													BgL_tmpz00_5703 = CAR(BgL_fz00_4055);
													BgL_test2680z00_5702 = PAIRP(BgL_tmpz00_5703);
												}
												if (BgL_test2680z00_5702)
													{	/* Match/normalize.scm 592 */
														BgL_providedzd2fieldszd2_4080 = BgL_fz00_4055;
													}
												else
													{	/* Match/normalize.scm 592 */
														BgL_providedzd2fieldszd2_4080 = CDR(BgL_fz00_4055);
													}
											}
											{	/* Match/normalize.scm 592 */
												obj_t BgL_patternz00_4081;

												{	/* Match/normalize.scm 604 */
													obj_t BgL_arg1799z00_4082;

													{	/* Match/normalize.scm 604 */
														obj_t BgL_arg1800z00_4083;

														{	/* Match/normalize.scm 604 */
															obj_t BgL_arg1801z00_4084;

															{	/* Match/normalize.scm 604 */
																obj_t BgL_arg1803z00_4085;

																{	/* Match/normalize.scm 604 */
																	bool_t BgL_test2681z00_5707;

																	{	/* Match/normalize.scm 604 */
																		obj_t BgL_tmpz00_5708;

																		BgL_tmpz00_5708 = CAR(BgL_fz00_4055);
																		BgL_test2681z00_5707 =
																			PAIRP(BgL_tmpz00_5708);
																	}
																	if (BgL_test2681z00_5707)
																		{	/* Match/normalize.scm 604 */
																			if (NULLP(BgL_fieldsz00_4078))
																				{	/* Match/normalize.scm 605 */
																					BgL_arg1803z00_4085 = BNIL;
																				}
																			else
																				{	/* Match/normalize.scm 605 */
																					obj_t BgL_head1133z00_4086;

																					{	/* Match/normalize.scm 605 */
																						obj_t BgL_res2323z00_4087;

																						BgL_res2323z00_4087 =
																							MAKE_YOUNG_PAIR(BNIL, BNIL);
																						BgL_head1133z00_4086 =
																							BgL_res2323z00_4087;
																					}
																					{
																						obj_t BgL_l1131z00_4089;
																						obj_t BgL_tail1134z00_4090;

																						BgL_l1131z00_4089 =
																							BgL_fieldsz00_4078;
																						BgL_tail1134z00_4090 =
																							BgL_head1133z00_4086;
																					BgL_zc3z04anonymousza31808ze3z87_4088:
																						if (NULLP
																							(BgL_l1131z00_4089))
																							{	/* Match/normalize.scm 605 */
																								BgL_arg1803z00_4085 =
																									CDR(BgL_head1133z00_4086);
																							}
																						else
																							{	/* Match/normalize.scm 605 */
																								obj_t BgL_newtail1135z00_4091;

																								{	/* Match/normalize.scm 605 */
																									obj_t BgL_arg1811z00_4092;

																									{	/* Match/normalize.scm 605 */
																										obj_t BgL_fieldz00_4093;

																										BgL_fieldz00_4093 =
																											CAR(
																											((obj_t)
																												BgL_l1131z00_4089));
																										if (CBOOL
																											(BGl_assocz00zz__r4_pairs_and_lists_6_3z00
																												(BgL_fieldz00_4093,
																													BgL_providedzd2fieldszd2_4080)))
																											{	/* Match/normalize.scm 607 */
																												obj_t BgL_pairz00_4094;

																												BgL_pairz00_4094 =
																													BGl_assocz00zz__r4_pairs_and_lists_6_3z00
																													(BgL_fieldz00_4093,
																													BgL_providedzd2fieldszd2_4080);
																												BgL_arg1811z00_4092 =
																													CAR(CDR
																													(BgL_pairz00_4094));
																											}
																										else
																											{	/* Match/normalize.scm 606 */
																												BgL_arg1811z00_4092 =
																													BGl_symbol2435z00zz__match_normaliza7eza7;
																											}
																									}
																									{	/* Match/normalize.scm 605 */
																										obj_t BgL_res2325z00_4095;

																										BgL_res2325z00_4095 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1811z00_4092,
																											BNIL);
																										BgL_newtail1135z00_4091 =
																											BgL_res2325z00_4095;
																									}
																								}
																								SET_CDR(BgL_tail1134z00_4090,
																									BgL_newtail1135z00_4091);
																								{	/* Match/normalize.scm 605 */
																									obj_t BgL_arg1810z00_4096;

																									BgL_arg1810z00_4096 =
																										CDR(
																										((obj_t)
																											BgL_l1131z00_4089));
																									{
																										obj_t BgL_tail1134z00_5730;
																										obj_t BgL_l1131z00_5729;

																										BgL_l1131z00_5729 =
																											BgL_arg1810z00_4096;
																										BgL_tail1134z00_5730 =
																											BgL_newtail1135z00_4091;
																										BgL_tail1134z00_4090 =
																											BgL_tail1134z00_5730;
																										BgL_l1131z00_4089 =
																											BgL_l1131z00_5729;
																										goto
																											BgL_zc3z04anonymousza31808ze3z87_4088;
																									}
																								}
																							}
																					}
																				}
																		}
																	else
																		{	/* Match/normalize.scm 604 */
																			BgL_arg1803z00_4085 = CDR(BgL_fz00_4055);
																		}
																}
																BgL_arg1801z00_4084 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg1803z00_4085, BNIL);
															}
															BgL_arg1800z00_4083 =
																MAKE_YOUNG_PAIR(BgL_predz00_4076,
																BgL_arg1801z00_4084);
														}
														BgL_arg1799z00_4082 =
															MAKE_YOUNG_PAIR(BgL_namez00_4075,
															BgL_arg1800z00_4083);
													}
													BgL_patternz00_4081 =
														MAKE_YOUNG_PAIR
														(BGl_symbol2412z00zz__match_normaliza7eza7,
														BgL_arg1799z00_4082);
												}
												{	/* Match/normalize.scm 600 */

													{	/* Match/normalize.scm 611 */
														obj_t BgL_fun1798z00_4097;

														BgL_fun1798z00_4097 =
															BGl_standardiza7ezd2patternz75zz__match_normaliza7eza7
															(BgL_patternz00_4081);
														return
															PROCEDURE_ENTRY(BgL_fun1798z00_4097)
															(BgL_fun1798z00_4097, BgL_rz00_3802,
															BgL_cz00_3803, BEOA);
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



/* object-init */
	obj_t BGl_objectzd2initzd2zz__match_normaliza7eza7()
	{
		{	/* Match/normalize.scm 2 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__match_normaliza7eza7()
	{
		{	/* Match/normalize.scm 2 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__match_normaliza7eza7()
	{
		{	/* Match/normalize.scm 2 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__match_normaliza7eza7()
	{
		{	/* Match/normalize.scm 2 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2504z00zz__match_normaliza7eza7));
			BGl_modulezd2initializa7ationz75zz__match_s2cfunz00(((long) 509060642),
				BSTRING_TO_STRING(BGl_string2504z00zz__match_normaliza7eza7));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2504z00zz__match_normaliza7eza7));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string2504z00zz__match_normaliza7eza7));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string2504z00zz__match_normaliza7eza7));
			return
				BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string2504z00zz__match_normaliza7eza7));
		}

	}

#ifdef __cplusplus
}
#endif
