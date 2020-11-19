/*===========================================================================*/
/*   (Llib/hash.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/hash.scm -indent -o objs/obj_u/Llib/hash.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */

	static obj_t BGl__createzd2hashtablezd2zz__hashz00(obj_t, obj_t);
	extern int BGl_objectzd2hashnumberzd2zz__objectz00(BgL_objectz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	extern obj_t BGl_weakzd2hashtablezd2clearz12z12zz__weakhashz00(obj_t);
	extern obj_t BGl_weakzd2hashtablezd2addz12z12zz__weakhashz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_plainzd2hashtablezd2getz00zz__hashz00(obj_t, obj_t);
	extern obj_t BGl_weakzd2hashtablezd2putz12z12zz__weakhashz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2653z00zz__hashz00 = BUNSPEC;
	static bool_t BGl_plainzd2hashtablezd2containszf3zf3zz__hashz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__hashz00 = BUNSPEC;
	static long BGl_defaultzd2maxzd2bucketzd2lengthzd2zz__hashz00;
	static obj_t BGl_symbol2660z00zz__hashz00 = BUNSPEC;
	static obj_t BGl_symbol2662z00zz__hashz00 = BUNSPEC;
	static obj_t BGl_symbol2664z00zz__hashz00 = BUNSPEC;
	static obj_t BGl_symbol2666z00zz__hashz00 = BUNSPEC;
	static obj_t BGl_plainzd2hashtablezd2updatez12z12zz__hashz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_weakzd2hashtablezd2updatez12z12zz__weakhashz00(obj_t, obj_t,
		obj_t, obj_t);
	extern long bgl_keyword_hash_number(obj_t);
	extern long bgl_string_hash_number(char *);
	static obj_t BGl_toplevelzd2initzd2zz__hashz00();
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_symbol2693z00zz__hashz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31302ze3ze5zz__hashz00(obj_t, obj_t);
	static obj_t BGl_z62getzd2pointerzd2hashnumberz62zz__hashz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zz__hashz00();
	extern obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__hashz00();
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_hashtablezd2removez12zc0zz__hashz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hashtablezd2ze3vectorz31zz__hashz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_createzd2hashtablezd2zz__hashz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hashtablezd2mapzd2zz__hashz00(obj_t, obj_t);
	static obj_t BGl_plainzd2hashtablezd2mapz00zz__hashz00(obj_t, obj_t);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_stringzd2hashtablezd2getz00zz__hashz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hashtablezd2filterz12zc0zz__hashz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_hashtablezf3zf3zz__hashz00(obj_t);
	static obj_t BGl_z62hashtablezd2forzd2eachz62zz__hashz00(obj_t, obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_z62hashtablezd2keyzd2listz62zz__hashz00(obj_t, obj_t);
	extern long bgl_foreign_hash_number(obj_t);
	extern bool_t BGl_weakzd2hashtablezd2containszf3zf3zz__weakhashz00(obj_t,
		obj_t);
	extern obj_t make_vector(long, obj_t);
	static obj_t BGl_z62hashtablezd2updatez12za2zz__hashz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_weakzd2hashtablezd2ze3listze3zz__weakhashz00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__hashz00();
	static obj_t BGl_z62getzd2hashnumberzd2persistentz62zz__hashz00(obj_t, obj_t);
	static obj_t BGl_z62hashtablezf3z91zz__hashz00(obj_t, obj_t);
	static bool_t BGl_plainzd2hashtablezd2removez12z12zz__hashz00(obj_t, obj_t);
	static obj_t BGl_plainzd2hashtablezd2ze3vectorze3zz__hashz00(obj_t);
	extern obj_t BGl_weakzd2hashtablezd2removez12z12zz__weakhashz00(obj_t, obj_t);
	extern obj_t BGl_weakzd2hashtablezd2ze3vectorze3zz__weakhashz00(obj_t);
	extern obj_t obj_to_string(obj_t, obj_t);
	static obj_t BGl_z62makezd2hashtablezb0zz__hashz00(obj_t, obj_t);
	static obj_t BGl_plainzd2hashtablezd2expandz12z12zz__hashz00(obj_t);
	static obj_t BGl_plainzd2hashtablezd2filterz12z12zz__hashz00(obj_t, obj_t);
	extern long bgl_string_hash(char *, int, int);
	static obj_t BGl_z62hashtablezd2weakzd2datazf3z91zz__hashz00(obj_t, obj_t);
	static obj_t BGl_z62hashtablezd2siza7ez17zz__hashz00(obj_t, obj_t);
	extern obj_t BGl_weakzd2hashtablezd2filterz12z12zz__weakhashz00(obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_getzd2hashnumberzd2persistentz00zz__hashz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hashtablezd2ze3listz31zz__hashz00(obj_t);
	static obj_t BGl_z62hashtablezd2ze3listz53zz__hashz00(obj_t, obj_t);
	extern long bgl_symbol_hash_number(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hashtablezd2clearz12zc0zz__hashz00(obj_t);
	extern long bgl_pointer_hashnumber(obj_t, long);
	extern obj_t BGl_weakzd2hashtablezd2getz00zz__weakhashz00(obj_t, obj_t);
	extern obj_t BGl_weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00(obj_t,
		obj_t);
	extern obj_t BGl_weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00(obj_t);
	static obj_t BGl_plainzd2hashtablezd2ze3listze3zz__hashz00(obj_t);
	static obj_t BGl_list2638z00zz__hashz00 = BUNSPEC;
	static obj_t BGl_z62hashtablezd2weakzd2keyszf3z91zz__hashz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__weakhashz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_z62hashtablezd2containszf3z43zz__hashz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_plainzd2hashtablezd2clearz12z12zz__hashz00(obj_t);
	static obj_t BGl_z62hashtablezd2removez12za2zz__hashz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62hashtablezd2ze3vectorz53zz__hashz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_hashtablezd2siza7ez75zz__hashz00(obj_t);
	static obj_t BGl_z62hashtablezd2getzb0zz__hashz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62hashtablezd2addz12za2zz__hashz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00(obj_t);
	extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl_z62hashtablezd2putz12za2zz__hashz00(obj_t, obj_t, obj_t,
		obj_t);
	extern long bgl_obj_hash_number(obj_t);
	static obj_t BGl_z62hashtablezd2filterz12za2zz__hashz00(obj_t, obj_t, obj_t);
	extern obj_t create_struct(obj_t, int);
	static obj_t BGl_cnstzd2initzd2zz__hashz00();
	static long BGl_objzd2hashze70z35zz__hashz00(obj_t);
	extern long bgl_list_length(obj_t);
	static obj_t BGl_z62hashtablezd2clearz12za2zz__hashz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__hashz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__hashz00();
	BGL_EXPORTED_DECL obj_t BGl_hashtablezd2forzd2eachz00zz__hashz00(obj_t,
		obj_t);
	extern obj_t BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hashtablezd2keyzd2listz00zz__hashz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31392ze3ze5zz__hashz00(obj_t, obj_t);
	static obj_t BGl__stringzd2hashzd2zz__hashz00(obj_t, obj_t);
	extern obj_t BGl_weakzd2hashtablezd2mapz00zz__weakhashz00(obj_t, obj_t);
	extern obj_t BGl_filterz12z12zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl_z62getzd2hashnumberzb0zz__hashz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hashtablezd2addz12zc0zz__hashz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_keyword2639z00zz__hashz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_hashtablezd2containszf3z21zz__hashz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL long BGl_stringzd2hashzd2zz__hashz00(obj_t, obj_t, obj_t);
	static obj_t BGl_plainzd2hashtablezd2addz12z12zz__hashz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_keyword2641z00zz__hashz00 = BUNSPEC;
	BGL_EXPORTED_DECL long BGl_getzd2pointerzd2hashnumberz00zz__hashz00(obj_t,
		long);
	static obj_t BGl_keyword2643z00zz__hashz00 = BUNSPEC;
	static obj_t BGl_keyword2645z00zz__hashz00 = BUNSPEC;
	static obj_t BGl_keyword2647z00zz__hashz00 = BUNSPEC;
	static obj_t BGl_keyword2649z00zz__hashz00 = BUNSPEC;
	static obj_t BGl_plainzd2hashtablezd2putz12z12zz__hashz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62hashtablezd2mapzb0zz__hashz00(obj_t, obj_t, obj_t);
	static bool_t BGl_plainzd2hashtablezd2forzd2eachzd2zz__hashz00(obj_t, obj_t);
	static long BGl_defaultzd2hashtablezd2bucketzd2lengthzd2zz__hashz00;
	static obj_t BGl_keyword2651z00zz__hashz00 = BUNSPEC;
	extern long bgl_date_to_seconds(obj_t);
	static obj_t BGl_plainzd2hashtablezd2keyzd2listzd2zz__hashz00(obj_t);
	extern obj_t bstring_to_keyword(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hashtablezd2updatez12zc0zz__hashz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_getzd2hashnumberzd2zz__hashz00(obj_t);
	static obj_t BGl_symbol2633z00zz__hashz00 = BUNSPEC;
	static obj_t BGl_symbol2636z00zz__hashz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2keyzd2listzd2envzd2zz__hashz00,
		BgL_bgl_za762hashtableza7d2k2699z00,
		BGl_z62hashtablezd2keyzd2listz62zz__hashz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2siza7ezd2envza7zz__hashz00,
		BgL_bgl_za762hashtableza7d2s2700z00,
		BGl_z62hashtablezd2siza7ez17zz__hashz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2mapzd2envz00zz__hashz00,
		BgL_bgl_za762hashtableza7d2m2701z00, BGl_z62hashtablezd2mapzb0zz__hashz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2getzd2envz00zz__hashz00,
		BgL_bgl_za762hashtableza7d2g2702z00, BGl_z62hashtablezd2getzb0zz__hashz00,
		0L, BUNSPEC, 2);
	extern obj_t BGl_stringzd3zf3zd2envzf2zz__r4_strings_6_7z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2addz12zd2envz12zz__hashz00,
		BgL_bgl_za762hashtableza7d2a2703z00,
		BGl_z62hashtablezd2addz12za2zz__hashz00, 0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2putz12zd2envz12zz__hashz00,
		BgL_bgl_za762hashtableza7d2p2704z00,
		BGl_z62hashtablezd2putz12za2zz__hashz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2hashnumberzd2envz00zz__hashz00,
		BgL_bgl_za762getza7d2hashnum2705z00, BGl_z62getzd2hashnumberzb0zz__hashz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2removez12zd2envz12zz__hashz00,
		BgL_bgl_za762hashtableza7d2r2706z00,
		BGl_z62hashtablezd2removez12za2zz__hashz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2filterz12zd2envz12zz__hashz00,
		BgL_bgl_za762hashtableza7d2f2707z00,
		BGl_z62hashtablezd2filterz12za2zz__hashz00, 0L, BUNSPEC, 2);
	      DEFINE_REAL(BGl_real2635z00zz__hashz00,
		BgL_bgl_real2635za700za7za7__h2708za7, 1.2);
	      DEFINE_STRING(BGl_string2628z00zz__hashz00,
		BgL_bgl_string2628za700za7za7_2709za7, "make-hashtable", 14);
	      DEFINE_STRING(BGl_string2629z00zz__hashz00,
		BgL_bgl_string2629za700za7za7_2710za7, "Illegal default bucket length", 29);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_hashtablezd2weakzd2datazf3zd2envz21zz__hashz00,
		BgL_bgl_za762hashtableza7d2w2711z00,
		BGl_z62hashtablezd2weakzd2datazf3z91zz__hashz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2630z00zz__hashz00,
		BgL_bgl_string2630za700za7za7_2712za7, "Illegal max bucket length", 25);
	      DEFINE_STRING(BGl_string2631z00zz__hashz00,
		BgL_bgl_string2631za700za7za7_2713za7, "Illegal equality test", 21);
	      DEFINE_STRING(BGl_string2632z00zz__hashz00,
		BgL_bgl_string2632za700za7za7_2714za7, "Illegal hashnumber function", 27);
	      DEFINE_STRING(BGl_string2634z00zz__hashz00,
		BgL_bgl_string2634za700za7za7_2715za7, "%hashtable", 10);
	      DEFINE_STRING(BGl_string2637z00zz__hashz00,
		BgL_bgl_string2637za700za7za7_2716za7, "none", 4);
	      DEFINE_STRING(BGl_string2640z00zz__hashz00,
		BgL_bgl_string2640za700za7za7_2717za7, "bucket-expansion", 16);
	      DEFINE_STRING(BGl_string2642z00zz__hashz00,
		BgL_bgl_string2642za700za7za7_2718za7, "eqtest", 6);
	      DEFINE_STRING(BGl_string2644z00zz__hashz00,
		BgL_bgl_string2644za700za7za7_2719za7, "hash", 4);
	      DEFINE_STRING(BGl_string2646z00zz__hashz00,
		BgL_bgl_string2646za700za7za7_2720za7, "max-bucket-length", 17);
	      DEFINE_STRING(BGl_string2648z00zz__hashz00,
		BgL_bgl_string2648za700za7za7_2721za7, "max-length", 10);
	      DEFINE_STRING(BGl_string2650z00zz__hashz00,
		BgL_bgl_string2650za700za7za7_2722za7, "size", 4);
	      DEFINE_STRING(BGl_string2652z00zz__hashz00,
		BgL_bgl_string2652za700za7za7_2723za7, "weak", 4);
	      DEFINE_STRING(BGl_string2654z00zz__hashz00,
		BgL_bgl_string2654za700za7za7_2724za7, "create-hashtable", 16);
	      DEFINE_STRING(BGl_string2655z00zz__hashz00,
		BgL_bgl_string2655za700za7za7_2725za7, "Illegal keyword argument", 24);
	      DEFINE_STRING(BGl_string2656z00zz__hashz00,
		BgL_bgl_string2656za700za7za7_2726za7,
		"wrong number of arguments: [0..7] expected, provided", 52);
	      DEFINE_STRING(BGl_string2657z00zz__hashz00,
		BgL_bgl_string2657za700za7za7_2727za7, "/tmp/4.4a/runtime/Llib/hash.scm",
		31);
	      DEFINE_STRING(BGl_string2658z00zz__hashz00,
		BgL_bgl_string2658za700za7za7_2728za7, "_create-hashtable", 17);
	      DEFINE_STRING(BGl_string2659z00zz__hashz00,
		BgL_bgl_string2659za700za7za7_2729za7, "bint", 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2hashtablezd2envz00zz__hashz00,
		BgL_bgl_za762makeza7d2hashta2730z00, va_generic_entry,
		BGl_z62makezd2hashtablezb0zz__hashz00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2forzd2eachzd2envzd2zz__hashz00,
		BgL_bgl_za762hashtableza7d2f2731z00,
		BGl_z62hashtablezd2forzd2eachz62zz__hashz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2hashnumberzd2persistentzd2envzd2zz__hashz00,
		BgL_bgl_za762getza7d2hashnum2732z00,
		BGl_z62getzd2hashnumberzd2persistentz62zz__hashz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2661z00zz__hashz00,
		BgL_bgl_string2661za700za7za7_2733za7, "keys", 4);
	      DEFINE_STRING(BGl_string2663z00zz__hashz00,
		BgL_bgl_string2663za700za7za7_2734za7, "data", 4);
	      DEFINE_STRING(BGl_string2665z00zz__hashz00,
		BgL_bgl_string2665za700za7za7_2735za7, "both", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2ze3vectorzd2envze3zz__hashz00,
		BgL_bgl_za762hashtableza7d2za72736za7,
		BGl_z62hashtablezd2ze3vectorz53zz__hashz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2667z00zz__hashz00,
		BgL_bgl_string2667za700za7za7_2737za7, "string", 6);
	      DEFINE_STRING(BGl_string2668z00zz__hashz00,
		BgL_bgl_string2668za700za7za7_2738za7,
		"Cannot provide eqtest for string hashtable", 42);
	      DEFINE_STRING(BGl_string2669z00zz__hashz00,
		BgL_bgl_string2669za700za7za7_2739za7,
		"Cannot provide hash for string hashtable", 40);
	      DEFINE_STRING(BGl_string2671z00zz__hashz00,
		BgL_bgl_string2671za700za7za7_2740za7, "&hashtable-weak-keys?", 21);
	      DEFINE_STRING(BGl_string2672z00zz__hashz00,
		BgL_bgl_string2672za700za7za7_2741za7, "struct", 6);
	      DEFINE_STRING(BGl_string2673z00zz__hashz00,
		BgL_bgl_string2673za700za7za7_2742za7, "&hashtable-weak-data?", 21);
	      DEFINE_STRING(BGl_string2674z00zz__hashz00,
		BgL_bgl_string2674za700za7za7_2743za7, "&hashtable-size", 15);
	      DEFINE_STRING(BGl_string2675z00zz__hashz00,
		BgL_bgl_string2675za700za7za7_2744za7, "&hashtable->vector", 18);
	      DEFINE_STRING(BGl_string2676z00zz__hashz00,
		BgL_bgl_string2676za700za7za7_2745za7, "&hashtable->list", 16);
	      DEFINE_STRING(BGl_string2677z00zz__hashz00,
		BgL_bgl_string2677za700za7za7_2746za7, "&hashtable-key-list", 19);
	      DEFINE_STRING(BGl_string2678z00zz__hashz00,
		BgL_bgl_string2678za700za7za7_2747za7, "&hashtable-map", 14);
	      DEFINE_STRING(BGl_string2679z00zz__hashz00,
		BgL_bgl_string2679za700za7za7_2748za7, "procedure", 9);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2670z00zz__hashz00,
		BgL_bgl_za762za7c3za704anonymo2749za7,
		BGl_z62zc3z04anonymousza31302ze3ze5zz__hashz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2680z00zz__hashz00,
		BgL_bgl_string2680za700za7za7_2750za7, "&hashtable-for-each", 19);
	      DEFINE_STRING(BGl_string2681z00zz__hashz00,
		BgL_bgl_string2681za700za7za7_2751za7, "&hashtable-filter!", 18);
	      DEFINE_STRING(BGl_string2682z00zz__hashz00,
		BgL_bgl_string2682za700za7za7_2752za7, "&hashtable-clear!", 17);
	      DEFINE_STRING(BGl_string2683z00zz__hashz00,
		BgL_bgl_string2683za700za7za7_2753za7, "&hashtable-contains?", 20);
	      DEFINE_STRING(BGl_string2684z00zz__hashz00,
		BgL_bgl_string2684za700za7za7_2754za7, "&hashtable-get", 14);
	      DEFINE_STRING(BGl_string2685z00zz__hashz00,
		BgL_bgl_string2685za700za7za7_2755za7, "&hashtable-put!", 15);
	      DEFINE_STRING(BGl_string2686z00zz__hashz00,
		BgL_bgl_string2686za700za7za7_2756za7, "&hashtable-update!", 18);
	      DEFINE_STRING(BGl_string2687z00zz__hashz00,
		BgL_bgl_string2687za700za7za7_2757za7, "&hashtable-add!", 15);
	      DEFINE_STRING(BGl_string2688z00zz__hashz00,
		BgL_bgl_string2688za700za7za7_2758za7, "&hashtable-remove!", 18);
	      DEFINE_STRING(BGl_string2689z00zz__hashz00,
		BgL_bgl_string2689za700za7za7_2759za7,
		"Hashtable too large (new-len=~a/~a, size=~a)", 44);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2updatez12zd2envz12zz__hashz00,
		BgL_bgl_za762hashtableza7d2u2760z00,
		BGl_z62hashtablezd2updatez12za2zz__hashz00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string2690z00zz__hashz00,
		BgL_bgl_string2690za700za7za7_2761za7, "hashtable-put!", 14);
	      DEFINE_STRING(BGl_string2691z00zz__hashz00,
		BgL_bgl_string2691za700za7za7_2762za7, "index out of range [0..", 23);
	      DEFINE_STRING(BGl_string2692z00zz__hashz00,
		BgL_bgl_string2692za700za7za7_2763za7, "]", 1);
	      DEFINE_STRING(BGl_string2694z00zz__hashz00,
		BgL_bgl_string2694za700za7za7_2764za7, "ucs2-string-ref", 15);
	      DEFINE_STRING(BGl_string2695z00zz__hashz00,
		BgL_bgl_string2695za700za7za7_2765za7, "&get-pointer-hashnumber", 23);
	      DEFINE_STRING(BGl_string2696z00zz__hashz00,
		BgL_bgl_string2696za700za7za7_2766za7, "_string-hash", 12);
	      DEFINE_STRING(BGl_string2697z00zz__hashz00,
		BgL_bgl_string2697za700za7za7_2767za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2698z00zz__hashz00,
		BgL_bgl_string2698za700za7za7_2768za7, "__hash", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2clearz12zd2envz12zz__hashz00,
		BgL_bgl_za762hashtableza7d2c2769z00,
		BGl_z62hashtablezd2clearz12za2zz__hashz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezf3zd2envz21zz__hashz00,
		BgL_bgl_za762hashtableza7f3za72770za7, BGl_z62hashtablezf3z91zz__hashz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2containszf3zd2envzf3zz__hashz00,
		BgL_bgl_za762hashtableza7d2c2771z00,
		BGl_z62hashtablezd2containszf3z43zz__hashz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_hashtablezd2weakzd2keyszf3zd2envz21zz__hashz00,
		BgL_bgl_za762hashtableza7d2w2772z00,
		BGl_z62hashtablezd2weakzd2keyszf3z91zz__hashz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzd2hashzd2envz00zz__hashz00,
		BgL_bgl__stringza7d2hashza7d2773z00, opt_generic_entry,
		BGl__stringzd2hashzd2zz__hashz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_createzd2hashtablezd2envz00zz__hashz00,
		BgL_bgl__createza7d2hashta2774za7, opt_generic_entry,
		BGl__createzd2hashtablezd2zz__hashz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2pointerzd2hashnumberzd2envzd2zz__hashz00,
		BgL_bgl_za762getza7d2pointer2775z00,
		BGl_z62getzd2pointerzd2hashnumberz62zz__hashz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2ze3listzd2envze3zz__hashz00,
		BgL_bgl_za762hashtableza7d2za72776za7,
		BGl_z62hashtablezd2ze3listz53zz__hashz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol2653z00zz__hashz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__hashz00));
		     ADD_ROOT((void *) (&BGl_symbol2660z00zz__hashz00));
		     ADD_ROOT((void *) (&BGl_symbol2662z00zz__hashz00));
		     ADD_ROOT((void *) (&BGl_symbol2664z00zz__hashz00));
		     ADD_ROOT((void *) (&BGl_symbol2666z00zz__hashz00));
		     ADD_ROOT((void *) (&BGl_symbol2693z00zz__hashz00));
		     ADD_ROOT((void *) (&BGl_list2638z00zz__hashz00));
		     ADD_ROOT((void *) (&BGl_keyword2639z00zz__hashz00));
		     ADD_ROOT((void *) (&BGl_keyword2641z00zz__hashz00));
		     ADD_ROOT((void *) (&BGl_keyword2643z00zz__hashz00));
		     ADD_ROOT((void *) (&BGl_keyword2645z00zz__hashz00));
		     ADD_ROOT((void *) (&BGl_keyword2647z00zz__hashz00));
		     ADD_ROOT((void *) (&BGl_keyword2649z00zz__hashz00));
		     ADD_ROOT((void *) (&BGl_keyword2651z00zz__hashz00));
		     ADD_ROOT((void *) (&BGl_symbol2633z00zz__hashz00));
		     ADD_ROOT((void *) (&BGl_symbol2636z00zz__hashz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long
		BgL_checksumz00_4695, char *BgL_fromz00_4696)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__hashz00))
				{
					BGl_requirezd2initializa7ationz75zz__hashz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__hashz00();
					BGl_cnstzd2initzd2zz__hashz00();
					BGl_importedzd2moduleszd2initz00zz__hashz00();
					return BGl_toplevelzd2initzd2zz__hashz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__hashz00()
	{
		{	/* Llib/hash.scm 18 */
			BGl_symbol2633z00zz__hashz00 =
				bstring_to_symbol(BGl_string2634z00zz__hashz00);
			BGl_symbol2636z00zz__hashz00 =
				bstring_to_symbol(BGl_string2637z00zz__hashz00);
			BGl_keyword2639z00zz__hashz00 =
				bstring_to_keyword(BGl_string2640z00zz__hashz00);
			BGl_keyword2641z00zz__hashz00 =
				bstring_to_keyword(BGl_string2642z00zz__hashz00);
			BGl_keyword2643z00zz__hashz00 =
				bstring_to_keyword(BGl_string2644z00zz__hashz00);
			BGl_keyword2645z00zz__hashz00 =
				bstring_to_keyword(BGl_string2646z00zz__hashz00);
			BGl_keyword2647z00zz__hashz00 =
				bstring_to_keyword(BGl_string2648z00zz__hashz00);
			BGl_keyword2649z00zz__hashz00 =
				bstring_to_keyword(BGl_string2650z00zz__hashz00);
			BGl_keyword2651z00zz__hashz00 =
				bstring_to_keyword(BGl_string2652z00zz__hashz00);
			BGl_list2638z00zz__hashz00 =
				MAKE_YOUNG_PAIR(BGl_keyword2639z00zz__hashz00,
				MAKE_YOUNG_PAIR(BGl_keyword2641z00zz__hashz00,
					MAKE_YOUNG_PAIR(BGl_keyword2643z00zz__hashz00,
						MAKE_YOUNG_PAIR(BGl_keyword2645z00zz__hashz00,
							MAKE_YOUNG_PAIR(BGl_keyword2647z00zz__hashz00,
								MAKE_YOUNG_PAIR(BGl_keyword2649z00zz__hashz00,
									MAKE_YOUNG_PAIR(BGl_keyword2651z00zz__hashz00, BNIL)))))));
			BGl_symbol2653z00zz__hashz00 =
				bstring_to_symbol(BGl_string2654z00zz__hashz00);
			BGl_symbol2660z00zz__hashz00 =
				bstring_to_symbol(BGl_string2661z00zz__hashz00);
			BGl_symbol2662z00zz__hashz00 =
				bstring_to_symbol(BGl_string2663z00zz__hashz00);
			BGl_symbol2664z00zz__hashz00 =
				bstring_to_symbol(BGl_string2665z00zz__hashz00);
			BGl_symbol2666z00zz__hashz00 =
				bstring_to_symbol(BGl_string2667z00zz__hashz00);
			return (BGl_symbol2693z00zz__hashz00 =
				bstring_to_symbol(BGl_string2694z00zz__hashz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__hashz00()
	{
		{	/* Llib/hash.scm 18 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__hashz00()
	{
		{	/* Llib/hash.scm 18 */
			BGl_defaultzd2hashtablezd2bucketzd2lengthzd2zz__hashz00 = ((long) 128);
			return (BGl_defaultzd2maxzd2bucketzd2lengthzd2zz__hashz00 =
				((long) 10), BUNSPEC);
		}

	}



/* make-hashtable */
	BGL_EXPORTED_DEF obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t
		BgL_argsz00_42)
	{
		{	/* Llib/hash.scm 136 */
			{	/* Llib/hash.scm 137 */
				obj_t BgL_siza7eza7_1415;

				if (PAIRP(BgL_argsz00_42))
					{	/* Llib/hash.scm 138 */
						obj_t BgL_siza7eza7_1452;

						BgL_siza7eza7_1452 = CAR(BgL_argsz00_42);
						BgL_argsz00_42 = CDR(BgL_argsz00_42);
						{	/* Llib/hash.scm 141 */
							bool_t BgL_test2779z00_4731;

							if (INTEGERP(BgL_siza7eza7_1452))
								{	/* Llib/hash.scm 141 */
									BgL_test2779z00_4731 =
										((long) CINT(BgL_siza7eza7_1452) >= ((long) 1));
								}
							else
								{	/* Llib/hash.scm 141 */
									BgL_test2779z00_4731 = ((bool_t) 0);
								}
							if (BgL_test2779z00_4731)
								{	/* Llib/hash.scm 141 */
									BgL_siza7eza7_1415 = BgL_siza7eza7_1452;
								}
							else
								{	/* Llib/hash.scm 141 */
									if ((BgL_siza7eza7_1452 == BUNSPEC))
										{	/* Llib/hash.scm 143 */
											BgL_siza7eza7_1415 = BINT(((long) 128));
										}
									else
										{	/* Llib/hash.scm 143 */
											BgL_siza7eza7_1415 =
												BGl_errorz00zz__errorz00(BGl_string2628z00zz__hashz00,
												BGl_string2629z00zz__hashz00, BgL_siza7eza7_1452);
										}
								}
						}
					}
				else
					{	/* Llib/hash.scm 137 */
						BgL_siza7eza7_1415 = BINT(((long) 128));
					}
				{	/* Llib/hash.scm 137 */
					obj_t BgL_mblenz00_1416;

					if (PAIRP(BgL_argsz00_42))
						{	/* Llib/hash.scm 151 */
							obj_t BgL_mblenz00_1446;

							BgL_mblenz00_1446 = CAR(BgL_argsz00_42);
							BgL_argsz00_42 = CDR(BgL_argsz00_42);
							{	/* Llib/hash.scm 154 */
								bool_t BgL_test2783z00_4745;

								if (INTEGERP(BgL_mblenz00_1446))
									{	/* Llib/hash.scm 154 */
										BgL_test2783z00_4745 =
											((long) CINT(BgL_mblenz00_1446) >= ((long) 1));
									}
								else
									{	/* Llib/hash.scm 154 */
										BgL_test2783z00_4745 = ((bool_t) 0);
									}
								if (BgL_test2783z00_4745)
									{	/* Llib/hash.scm 154 */
										BgL_mblenz00_1416 = BgL_mblenz00_1446;
									}
								else
									{	/* Llib/hash.scm 154 */
										if ((BgL_mblenz00_1446 == BUNSPEC))
											{	/* Llib/hash.scm 156 */
												BgL_mblenz00_1416 = BINT(((long) 10));
											}
										else
											{	/* Llib/hash.scm 156 */
												BgL_mblenz00_1416 =
													BGl_errorz00zz__errorz00(BGl_string2628z00zz__hashz00,
													BGl_string2630z00zz__hashz00, BgL_mblenz00_1446);
											}
									}
							}
						}
					else
						{	/* Llib/hash.scm 150 */
							BgL_mblenz00_1416 = BINT(((long) 10));
						}
					{	/* Llib/hash.scm 150 */
						obj_t BgL_eqtestz00_1417;

						if (PAIRP(BgL_argsz00_42))
							{	/* Llib/hash.scm 164 */
								obj_t BgL_eqtestz00_1440;

								BgL_eqtestz00_1440 = CAR(BgL_argsz00_42);
								BgL_argsz00_42 = CDR(BgL_argsz00_42);
								{	/* Llib/hash.scm 167 */
									bool_t BgL_test2787z00_4759;

									if (PROCEDUREP(BgL_eqtestz00_1440))
										{	/* Llib/hash.scm 167 */
											BgL_test2787z00_4759 =
												PROCEDURE_CORRECT_ARITYP(BgL_eqtestz00_1440,
												(int) (((long) 2)));
										}
									else
										{	/* Llib/hash.scm 167 */
											BgL_test2787z00_4759 = ((bool_t) 0);
										}
									if (BgL_test2787z00_4759)
										{	/* Llib/hash.scm 167 */
											BgL_eqtestz00_1417 = BgL_eqtestz00_1440;
										}
									else
										{	/* Llib/hash.scm 167 */
											if ((BgL_eqtestz00_1440 == BUNSPEC))
												{	/* Llib/hash.scm 169 */
													BgL_eqtestz00_1417 = BFALSE;
												}
											else
												{	/* Llib/hash.scm 169 */
													BgL_eqtestz00_1417 =
														BGl_errorz00zz__errorz00
														(BGl_string2628z00zz__hashz00,
														BGl_string2631z00zz__hashz00, BgL_eqtestz00_1440);
												}
										}
								}
							}
						else
							{	/* Llib/hash.scm 163 */
								BgL_eqtestz00_1417 = BFALSE;
							}
						{	/* Llib/hash.scm 163 */
							obj_t BgL_hashnz00_1418;

							if (PAIRP(BgL_argsz00_42))
								{	/* Llib/hash.scm 177 */
									obj_t BgL_hnz00_1434;

									BgL_hnz00_1434 = CAR(BgL_argsz00_42);
									BgL_argsz00_42 = CDR(BgL_argsz00_42);
									{	/* Llib/hash.scm 180 */
										bool_t BgL_test2791z00_4771;

										if (PROCEDUREP(BgL_hnz00_1434))
											{	/* Llib/hash.scm 180 */
												BgL_test2791z00_4771 =
													PROCEDURE_CORRECT_ARITYP(BgL_hnz00_1434,
													(int) (((long) 1)));
											}
										else
											{	/* Llib/hash.scm 180 */
												BgL_test2791z00_4771 = ((bool_t) 0);
											}
										if (BgL_test2791z00_4771)
											{	/* Llib/hash.scm 180 */
												BgL_hashnz00_1418 = BgL_hnz00_1434;
											}
										else
											{	/* Llib/hash.scm 180 */
												if ((BgL_hnz00_1434 == BUNSPEC))
													{	/* Llib/hash.scm 182 */
														BgL_hashnz00_1418 = BFALSE;
													}
												else
													{	/* Llib/hash.scm 182 */
														BgL_hashnz00_1418 =
															BGl_errorz00zz__errorz00
															(BGl_string2628z00zz__hashz00,
															BGl_string2632z00zz__hashz00, BgL_hnz00_1434);
													}
											}
									}
								}
							else
								{	/* Llib/hash.scm 176 */
									BgL_hashnz00_1418 = BFALSE;
								}
							{	/* Llib/hash.scm 176 */
								long BgL_wkkz00_1419;

								if (PAIRP(BgL_argsz00_42))
									{	/* Llib/hash.scm 190 */
										obj_t BgL_wkkz00_1429;

										BgL_wkkz00_1429 = CAR(BgL_argsz00_42);
										BgL_argsz00_42 = CDR(BgL_argsz00_42);
										{	/* Llib/hash.scm 192 */
											bool_t BgL_test2795z00_4783;

											if ((BgL_wkkz00_1429 == BUNSPEC))
												{	/* Llib/hash.scm 192 */
													BgL_test2795z00_4783 = ((bool_t) 0);
												}
											else
												{	/* Llib/hash.scm 192 */
													BgL_test2795z00_4783 = CBOOL(BgL_wkkz00_1429);
												}
											if (BgL_test2795z00_4783)
												{	/* Llib/hash.scm 192 */
													BgL_wkkz00_1419 = ((long) 1);
												}
											else
												{	/* Llib/hash.scm 192 */
													BgL_wkkz00_1419 = ((long) 0);
									}}}
								else
									{	/* Llib/hash.scm 189 */
										BgL_wkkz00_1419 = ((long) 0);
									}
								{	/* Llib/hash.scm 189 */
									long BgL_wkdz00_1420;

									if (PAIRP(BgL_argsz00_42))
										{	/* Llib/hash.scm 197 */
											obj_t BgL_wkdz00_1424;

											BgL_wkdz00_1424 = CAR(BgL_argsz00_42);
											{	/* Llib/hash.scm 198 */
												bool_t BgL_test2798z00_4790;

												if ((BgL_wkdz00_1424 == BUNSPEC))
													{	/* Llib/hash.scm 198 */
														BgL_test2798z00_4790 = ((bool_t) 0);
													}
												else
													{	/* Llib/hash.scm 198 */
														BgL_test2798z00_4790 = CBOOL(BgL_wkdz00_1424);
													}
												if (BgL_test2798z00_4790)
													{	/* Llib/hash.scm 198 */
														BgL_wkdz00_1420 = ((long) 2);
													}
												else
													{	/* Llib/hash.scm 198 */
														BgL_wkdz00_1420 = ((long) 0);
										}}}
									else
										{	/* Llib/hash.scm 196 */
											BgL_wkdz00_1420 = ((long) 0);
										}
									{	/* Llib/hash.scm 196 */
										long BgL_wkz00_1421;

										BgL_wkz00_1421 = (BgL_wkkz00_1419 | BgL_wkdz00_1420);
										{	/* Llib/hash.scm 202 */

											{	/* Llib/hash.scm 203 */
												obj_t BgL_arg1252z00_1422;

												BgL_arg1252z00_1422 =
													make_vector((long) CINT(BgL_siza7eza7_1415), BNIL);
												{	/* Llib/hash.scm 203 */
													obj_t BgL_newz00_2587;

													BgL_newz00_2587 =
														create_struct(BGl_symbol2633z00zz__hashz00,
														(int) (((long) 8)));
													{	/* Llib/hash.scm 203 */
														obj_t BgL_auxz00_4801;
														int BgL_tmpz00_4799;

														BgL_auxz00_4801 = BINT(((long) 1));
														BgL_tmpz00_4799 = (int) (((long) 7));
														STRUCT_SET(BgL_newz00_2587, BgL_tmpz00_4799,
															BgL_auxz00_4801);
													}
													{	/* Llib/hash.scm 203 */
														obj_t BgL_auxz00_4806;
														int BgL_tmpz00_4804;

														BgL_auxz00_4806 = BINT(((long) -1));
														BgL_tmpz00_4804 = (int) (((long) 6));
														STRUCT_SET(BgL_newz00_2587, BgL_tmpz00_4804,
															BgL_auxz00_4806);
													}
													{	/* Llib/hash.scm 203 */
														obj_t BgL_auxz00_4811;
														int BgL_tmpz00_4809;

														BgL_auxz00_4811 = BINT(BgL_wkz00_1421);
														BgL_tmpz00_4809 = (int) (((long) 5));
														STRUCT_SET(BgL_newz00_2587, BgL_tmpz00_4809,
															BgL_auxz00_4811);
													}
													{	/* Llib/hash.scm 203 */
														int BgL_tmpz00_4814;

														BgL_tmpz00_4814 = (int) (((long) 4));
														STRUCT_SET(BgL_newz00_2587, BgL_tmpz00_4814,
															BgL_hashnz00_1418);
													}
													{	/* Llib/hash.scm 203 */
														int BgL_tmpz00_4817;

														BgL_tmpz00_4817 = (int) (((long) 3));
														STRUCT_SET(BgL_newz00_2587, BgL_tmpz00_4817,
															BgL_eqtestz00_1417);
													}
													{	/* Llib/hash.scm 203 */
														int BgL_tmpz00_4820;

														BgL_tmpz00_4820 = (int) (((long) 2));
														STRUCT_SET(BgL_newz00_2587, BgL_tmpz00_4820,
															BgL_arg1252z00_1422);
													}
													{	/* Llib/hash.scm 203 */
														int BgL_tmpz00_4823;

														BgL_tmpz00_4823 = (int) (((long) 1));
														STRUCT_SET(BgL_newz00_2587, BgL_tmpz00_4823,
															BgL_mblenz00_1416);
													}
													{	/* Llib/hash.scm 203 */
														obj_t BgL_auxz00_4828;
														int BgL_tmpz00_4826;

														BgL_auxz00_4828 = BINT(((long) 0));
														BgL_tmpz00_4826 = (int) (((long) 0));
														STRUCT_SET(BgL_newz00_2587, BgL_tmpz00_4826,
															BgL_auxz00_4828);
													}
													return BgL_newz00_2587;
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



/* &make-hashtable */
	obj_t BGl_z62makezd2hashtablezb0zz__hashz00(obj_t BgL_envz00_4530,
		obj_t BgL_argsz00_4531)
	{
		{	/* Llib/hash.scm 136 */
			return BGl_makezd2hashtablezd2zz__hashz00(BgL_argsz00_4531);
		}

	}



/* _create-hashtable */
	obj_t BGl__createzd2hashtablezd2zz__hashz00(obj_t BgL_env1135z00_51,
		obj_t BgL_opt1134z00_50)
	{
		{	/* Llib/hash.scm 208 */
			{	/* Llib/hash.scm 208 */

				{	/* Llib/hash.scm 208 */
					obj_t BgL_bucketzd2expansionzd2_1461;

					BgL_bucketzd2expansionzd2_1461 =
						BGL_REAL_CNST(BGl_real2635z00zz__hashz00);
					{	/* Llib/hash.scm 208 */
						obj_t BgL_eqtestz00_1462;

						BgL_eqtestz00_1462 = BFALSE;
						{	/* Llib/hash.scm 208 */
							obj_t BgL_hashz00_1463;

							BgL_hashz00_1463 = BFALSE;
							{	/* Llib/hash.scm 208 */
								obj_t BgL_maxzd2bucketzd2lengthz00_1464;

								BgL_maxzd2bucketzd2lengthz00_1464 = BINT(((long) 10));
								{	/* Llib/hash.scm 208 */
									obj_t BgL_maxzd2lengthzd2_1465;

									BgL_maxzd2lengthzd2_1465 = BINT(((long) 16384));
									{	/* Llib/hash.scm 208 */
										obj_t BgL_siza7eza7_1466;

										BgL_siza7eza7_1466 = BINT(((long) 128));
										{	/* Llib/hash.scm 213 */
											obj_t BgL_weakz00_1467;

											BgL_weakz00_1467 = BGl_symbol2636z00zz__hashz00;
											{	/* Llib/hash.scm 208 */

												{
													long BgL_iz00_1468;

													BgL_iz00_1468 = ((long) 0);
												BgL_check1138z00_1469:
													if (
														(BgL_iz00_1468 == VECTOR_LENGTH(BgL_opt1134z00_50)))
														{	/* Llib/hash.scm 208 */
															BNIL;
														}
													else
														{	/* Llib/hash.scm 208 */
															bool_t BgL_test2801z00_4838;

															{	/* Llib/hash.scm 208 */
																obj_t BgL_arg1282z00_1475;

																BgL_arg1282z00_1475 =
																	VECTOR_REF(BgL_opt1134z00_50, BgL_iz00_1468);
																BgL_test2801z00_4838 =
																	CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg1282z00_1475,
																		BGl_list2638z00zz__hashz00));
															}
															if (BgL_test2801z00_4838)
																{
																	long BgL_iz00_4842;

																	BgL_iz00_4842 = (BgL_iz00_1468 + ((long) 2));
																	BgL_iz00_1468 = BgL_iz00_4842;
																	goto BgL_check1138z00_1469;
																}
															else
																{	/* Llib/hash.scm 208 */
																	obj_t BgL_arg1281z00_1474;

																	BgL_arg1281z00_1474 =
																		VECTOR_REF(BgL_opt1134z00_50,
																		BgL_iz00_1468);
																	BGl_errorz00zz__errorz00
																		(BGl_symbol2653z00zz__hashz00,
																		BGl_string2655z00zz__hashz00,
																		BgL_arg1281z00_1474);
																}
														}
												}
												{	/* Llib/hash.scm 208 */
													obj_t BgL_index1140z00_1476;

													{
														long BgL_iz00_2619;

														BgL_iz00_2619 = ((long) 0);
													BgL_search1137z00_2618:
														if (
															(BgL_iz00_2619 ==
																VECTOR_LENGTH(BgL_opt1134z00_50)))
															{	/* Llib/hash.scm 208 */
																BgL_index1140z00_1476 = BINT(((long) -1));
															}
														else
															{	/* Llib/hash.scm 208 */
																if (
																	(BgL_iz00_2619 ==
																		(VECTOR_LENGTH(BgL_opt1134z00_50) -
																			((long) 1))))
																	{	/* Llib/hash.scm 208 */
																		BgL_index1140z00_1476 =
																			BGl_errorz00zz__errorz00
																			(BGl_symbol2653z00zz__hashz00,
																			BGl_string2656z00zz__hashz00,
																			BINT(VECTOR_LENGTH(BgL_opt1134z00_50)));
																	}
																else
																	{	/* Llib/hash.scm 208 */
																		obj_t BgL_vz00_2632;

																		BgL_vz00_2632 =
																			VECTOR_REF(BgL_opt1134z00_50,
																			BgL_iz00_2619);
																		if ((BgL_vz00_2632 ==
																				BGl_keyword2639z00zz__hashz00))
																			{	/* Llib/hash.scm 208 */
																				BgL_index1140z00_1476 =
																					BINT((BgL_iz00_2619 + ((long) 1)));
																			}
																		else
																			{
																				long BgL_iz00_4862;

																				BgL_iz00_4862 =
																					(BgL_iz00_2619 + ((long) 2));
																				BgL_iz00_2619 = BgL_iz00_4862;
																				goto BgL_search1137z00_2618;
																			}
																	}
															}
													}
													{	/* Llib/hash.scm 208 */
														bool_t BgL_test2805z00_4864;

														{	/* Llib/hash.scm 208 */
															long BgL_n1z00_2639;

															{	/* Llib/hash.scm 208 */
																obj_t BgL_tmpz00_4865;

																if (INTEGERP(BgL_index1140z00_1476))
																	{	/* Llib/hash.scm 208 */
																		BgL_tmpz00_4865 = BgL_index1140z00_1476;
																	}
																else
																	{
																		obj_t BgL_auxz00_4868;

																		BgL_auxz00_4868 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string2657z00zz__hashz00,
																			BINT(((long) 7287)),
																			BGl_string2658z00zz__hashz00,
																			BGl_string2659z00zz__hashz00,
																			BgL_index1140z00_1476);
																		FAILURE(BgL_auxz00_4868, BFALSE, BFALSE);
																	}
																BgL_n1z00_2639 = (long) CINT(BgL_tmpz00_4865);
															}
															BgL_test2805z00_4864 =
																(BgL_n1z00_2639 >= ((long) 0));
														}
														if (BgL_test2805z00_4864)
															{
																long BgL_auxz00_4874;

																{	/* Llib/hash.scm 208 */
																	obj_t BgL_tmpz00_4875;

																	if (INTEGERP(BgL_index1140z00_1476))
																		{	/* Llib/hash.scm 208 */
																			BgL_tmpz00_4875 = BgL_index1140z00_1476;
																		}
																	else
																		{
																			obj_t BgL_auxz00_4878;

																			BgL_auxz00_4878 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string2657z00zz__hashz00,
																				BINT(((long) 7287)),
																				BGl_string2658z00zz__hashz00,
																				BGl_string2659z00zz__hashz00,
																				BgL_index1140z00_1476);
																			FAILURE(BgL_auxz00_4878, BFALSE, BFALSE);
																		}
																	BgL_auxz00_4874 =
																		(long) CINT(BgL_tmpz00_4875);
																}
																BgL_bucketzd2expansionzd2_1461 =
																	VECTOR_REF(BgL_opt1134z00_50,
																	BgL_auxz00_4874);
															}
														else
															{	/* Llib/hash.scm 208 */
																BFALSE;
															}
													}
												}
												{	/* Llib/hash.scm 208 */
													obj_t BgL_index1141z00_1478;

													{
														long BgL_iz00_2642;

														BgL_iz00_2642 = ((long) 0);
													BgL_search1137z00_2641:
														if (
															(BgL_iz00_2642 ==
																VECTOR_LENGTH(BgL_opt1134z00_50)))
															{	/* Llib/hash.scm 208 */
																BgL_index1141z00_1478 = BINT(((long) -1));
															}
														else
															{	/* Llib/hash.scm 208 */
																if (
																	(BgL_iz00_2642 ==
																		(VECTOR_LENGTH(BgL_opt1134z00_50) -
																			((long) 1))))
																	{	/* Llib/hash.scm 208 */
																		BgL_index1141z00_1478 =
																			BGl_errorz00zz__errorz00
																			(BGl_symbol2653z00zz__hashz00,
																			BGl_string2656z00zz__hashz00,
																			BINT(VECTOR_LENGTH(BgL_opt1134z00_50)));
																	}
																else
																	{	/* Llib/hash.scm 208 */
																		obj_t BgL_vz00_2655;

																		BgL_vz00_2655 =
																			VECTOR_REF(BgL_opt1134z00_50,
																			BgL_iz00_2642);
																		if ((BgL_vz00_2655 ==
																				BGl_keyword2641z00zz__hashz00))
																			{	/* Llib/hash.scm 208 */
																				BgL_index1141z00_1478 =
																					BINT((BgL_iz00_2642 + ((long) 1)));
																			}
																		else
																			{
																				long BgL_iz00_4900;

																				BgL_iz00_4900 =
																					(BgL_iz00_2642 + ((long) 2));
																				BgL_iz00_2642 = BgL_iz00_4900;
																				goto BgL_search1137z00_2641;
																			}
																	}
															}
													}
													{	/* Llib/hash.scm 208 */
														bool_t BgL_test2811z00_4902;

														{	/* Llib/hash.scm 208 */
															long BgL_n1z00_2662;

															{	/* Llib/hash.scm 208 */
																obj_t BgL_tmpz00_4903;

																if (INTEGERP(BgL_index1141z00_1478))
																	{	/* Llib/hash.scm 208 */
																		BgL_tmpz00_4903 = BgL_index1141z00_1478;
																	}
																else
																	{
																		obj_t BgL_auxz00_4906;

																		BgL_auxz00_4906 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string2657z00zz__hashz00,
																			BINT(((long) 7287)),
																			BGl_string2658z00zz__hashz00,
																			BGl_string2659z00zz__hashz00,
																			BgL_index1141z00_1478);
																		FAILURE(BgL_auxz00_4906, BFALSE, BFALSE);
																	}
																BgL_n1z00_2662 = (long) CINT(BgL_tmpz00_4903);
															}
															BgL_test2811z00_4902 =
																(BgL_n1z00_2662 >= ((long) 0));
														}
														if (BgL_test2811z00_4902)
															{
																long BgL_auxz00_4912;

																{	/* Llib/hash.scm 208 */
																	obj_t BgL_tmpz00_4913;

																	if (INTEGERP(BgL_index1141z00_1478))
																		{	/* Llib/hash.scm 208 */
																			BgL_tmpz00_4913 = BgL_index1141z00_1478;
																		}
																	else
																		{
																			obj_t BgL_auxz00_4916;

																			BgL_auxz00_4916 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string2657z00zz__hashz00,
																				BINT(((long) 7287)),
																				BGl_string2658z00zz__hashz00,
																				BGl_string2659z00zz__hashz00,
																				BgL_index1141z00_1478);
																			FAILURE(BgL_auxz00_4916, BFALSE, BFALSE);
																		}
																	BgL_auxz00_4912 =
																		(long) CINT(BgL_tmpz00_4913);
																}
																BgL_eqtestz00_1462 =
																	VECTOR_REF(BgL_opt1134z00_50,
																	BgL_auxz00_4912);
															}
														else
															{	/* Llib/hash.scm 208 */
																BFALSE;
															}
													}
												}
												{	/* Llib/hash.scm 208 */
													obj_t BgL_index1142z00_1480;

													{
														long BgL_iz00_2665;

														BgL_iz00_2665 = ((long) 0);
													BgL_search1137z00_2664:
														if (
															(BgL_iz00_2665 ==
																VECTOR_LENGTH(BgL_opt1134z00_50)))
															{	/* Llib/hash.scm 208 */
																BgL_index1142z00_1480 = BINT(((long) -1));
															}
														else
															{	/* Llib/hash.scm 208 */
																if (
																	(BgL_iz00_2665 ==
																		(VECTOR_LENGTH(BgL_opt1134z00_50) -
																			((long) 1))))
																	{	/* Llib/hash.scm 208 */
																		BgL_index1142z00_1480 =
																			BGl_errorz00zz__errorz00
																			(BGl_symbol2653z00zz__hashz00,
																			BGl_string2656z00zz__hashz00,
																			BINT(VECTOR_LENGTH(BgL_opt1134z00_50)));
																	}
																else
																	{	/* Llib/hash.scm 208 */
																		obj_t BgL_vz00_2678;

																		BgL_vz00_2678 =
																			VECTOR_REF(BgL_opt1134z00_50,
																			BgL_iz00_2665);
																		if ((BgL_vz00_2678 ==
																				BGl_keyword2643z00zz__hashz00))
																			{	/* Llib/hash.scm 208 */
																				BgL_index1142z00_1480 =
																					BINT((BgL_iz00_2665 + ((long) 1)));
																			}
																		else
																			{
																				long BgL_iz00_4938;

																				BgL_iz00_4938 =
																					(BgL_iz00_2665 + ((long) 2));
																				BgL_iz00_2665 = BgL_iz00_4938;
																				goto BgL_search1137z00_2664;
																			}
																	}
															}
													}
													{	/* Llib/hash.scm 208 */
														bool_t BgL_test2817z00_4940;

														{	/* Llib/hash.scm 208 */
															long BgL_n1z00_2685;

															{	/* Llib/hash.scm 208 */
																obj_t BgL_tmpz00_4941;

																if (INTEGERP(BgL_index1142z00_1480))
																	{	/* Llib/hash.scm 208 */
																		BgL_tmpz00_4941 = BgL_index1142z00_1480;
																	}
																else
																	{
																		obj_t BgL_auxz00_4944;

																		BgL_auxz00_4944 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string2657z00zz__hashz00,
																			BINT(((long) 7287)),
																			BGl_string2658z00zz__hashz00,
																			BGl_string2659z00zz__hashz00,
																			BgL_index1142z00_1480);
																		FAILURE(BgL_auxz00_4944, BFALSE, BFALSE);
																	}
																BgL_n1z00_2685 = (long) CINT(BgL_tmpz00_4941);
															}
															BgL_test2817z00_4940 =
																(BgL_n1z00_2685 >= ((long) 0));
														}
														if (BgL_test2817z00_4940)
															{
																long BgL_auxz00_4950;

																{	/* Llib/hash.scm 208 */
																	obj_t BgL_tmpz00_4951;

																	if (INTEGERP(BgL_index1142z00_1480))
																		{	/* Llib/hash.scm 208 */
																			BgL_tmpz00_4951 = BgL_index1142z00_1480;
																		}
																	else
																		{
																			obj_t BgL_auxz00_4954;

																			BgL_auxz00_4954 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string2657z00zz__hashz00,
																				BINT(((long) 7287)),
																				BGl_string2658z00zz__hashz00,
																				BGl_string2659z00zz__hashz00,
																				BgL_index1142z00_1480);
																			FAILURE(BgL_auxz00_4954, BFALSE, BFALSE);
																		}
																	BgL_auxz00_4950 =
																		(long) CINT(BgL_tmpz00_4951);
																}
																BgL_hashz00_1463 =
																	VECTOR_REF(BgL_opt1134z00_50,
																	BgL_auxz00_4950);
															}
														else
															{	/* Llib/hash.scm 208 */
																BFALSE;
															}
													}
												}
												{	/* Llib/hash.scm 208 */
													obj_t BgL_index1143z00_1482;

													{
														long BgL_iz00_2688;

														BgL_iz00_2688 = ((long) 0);
													BgL_search1137z00_2687:
														if (
															(BgL_iz00_2688 ==
																VECTOR_LENGTH(BgL_opt1134z00_50)))
															{	/* Llib/hash.scm 208 */
																BgL_index1143z00_1482 = BINT(((long) -1));
															}
														else
															{	/* Llib/hash.scm 208 */
																if (
																	(BgL_iz00_2688 ==
																		(VECTOR_LENGTH(BgL_opt1134z00_50) -
																			((long) 1))))
																	{	/* Llib/hash.scm 208 */
																		BgL_index1143z00_1482 =
																			BGl_errorz00zz__errorz00
																			(BGl_symbol2653z00zz__hashz00,
																			BGl_string2656z00zz__hashz00,
																			BINT(VECTOR_LENGTH(BgL_opt1134z00_50)));
																	}
																else
																	{	/* Llib/hash.scm 208 */
																		obj_t BgL_vz00_2701;

																		BgL_vz00_2701 =
																			VECTOR_REF(BgL_opt1134z00_50,
																			BgL_iz00_2688);
																		if ((BgL_vz00_2701 ==
																				BGl_keyword2645z00zz__hashz00))
																			{	/* Llib/hash.scm 208 */
																				BgL_index1143z00_1482 =
																					BINT((BgL_iz00_2688 + ((long) 1)));
																			}
																		else
																			{
																				long BgL_iz00_4976;

																				BgL_iz00_4976 =
																					(BgL_iz00_2688 + ((long) 2));
																				BgL_iz00_2688 = BgL_iz00_4976;
																				goto BgL_search1137z00_2687;
																			}
																	}
															}
													}
													{	/* Llib/hash.scm 208 */
														bool_t BgL_test2823z00_4978;

														{	/* Llib/hash.scm 208 */
															long BgL_n1z00_2708;

															{	/* Llib/hash.scm 208 */
																obj_t BgL_tmpz00_4979;

																if (INTEGERP(BgL_index1143z00_1482))
																	{	/* Llib/hash.scm 208 */
																		BgL_tmpz00_4979 = BgL_index1143z00_1482;
																	}
																else
																	{
																		obj_t BgL_auxz00_4982;

																		BgL_auxz00_4982 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string2657z00zz__hashz00,
																			BINT(((long) 7287)),
																			BGl_string2658z00zz__hashz00,
																			BGl_string2659z00zz__hashz00,
																			BgL_index1143z00_1482);
																		FAILURE(BgL_auxz00_4982, BFALSE, BFALSE);
																	}
																BgL_n1z00_2708 = (long) CINT(BgL_tmpz00_4979);
															}
															BgL_test2823z00_4978 =
																(BgL_n1z00_2708 >= ((long) 0));
														}
														if (BgL_test2823z00_4978)
															{
																long BgL_auxz00_4988;

																{	/* Llib/hash.scm 208 */
																	obj_t BgL_tmpz00_4989;

																	if (INTEGERP(BgL_index1143z00_1482))
																		{	/* Llib/hash.scm 208 */
																			BgL_tmpz00_4989 = BgL_index1143z00_1482;
																		}
																	else
																		{
																			obj_t BgL_auxz00_4992;

																			BgL_auxz00_4992 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string2657z00zz__hashz00,
																				BINT(((long) 7287)),
																				BGl_string2658z00zz__hashz00,
																				BGl_string2659z00zz__hashz00,
																				BgL_index1143z00_1482);
																			FAILURE(BgL_auxz00_4992, BFALSE, BFALSE);
																		}
																	BgL_auxz00_4988 =
																		(long) CINT(BgL_tmpz00_4989);
																}
																BgL_maxzd2bucketzd2lengthz00_1464 =
																	VECTOR_REF(BgL_opt1134z00_50,
																	BgL_auxz00_4988);
															}
														else
															{	/* Llib/hash.scm 208 */
																BFALSE;
															}
													}
												}
												{	/* Llib/hash.scm 208 */
													obj_t BgL_index1144z00_1484;

													{
														long BgL_iz00_2711;

														BgL_iz00_2711 = ((long) 0);
													BgL_search1137z00_2710:
														if (
															(BgL_iz00_2711 ==
																VECTOR_LENGTH(BgL_opt1134z00_50)))
															{	/* Llib/hash.scm 208 */
																BgL_index1144z00_1484 = BINT(((long) -1));
															}
														else
															{	/* Llib/hash.scm 208 */
																if (
																	(BgL_iz00_2711 ==
																		(VECTOR_LENGTH(BgL_opt1134z00_50) -
																			((long) 1))))
																	{	/* Llib/hash.scm 208 */
																		BgL_index1144z00_1484 =
																			BGl_errorz00zz__errorz00
																			(BGl_symbol2653z00zz__hashz00,
																			BGl_string2656z00zz__hashz00,
																			BINT(VECTOR_LENGTH(BgL_opt1134z00_50)));
																	}
																else
																	{	/* Llib/hash.scm 208 */
																		obj_t BgL_vz00_2724;

																		BgL_vz00_2724 =
																			VECTOR_REF(BgL_opt1134z00_50,
																			BgL_iz00_2711);
																		if ((BgL_vz00_2724 ==
																				BGl_keyword2647z00zz__hashz00))
																			{	/* Llib/hash.scm 208 */
																				BgL_index1144z00_1484 =
																					BINT((BgL_iz00_2711 + ((long) 1)));
																			}
																		else
																			{
																				long BgL_iz00_5014;

																				BgL_iz00_5014 =
																					(BgL_iz00_2711 + ((long) 2));
																				BgL_iz00_2711 = BgL_iz00_5014;
																				goto BgL_search1137z00_2710;
																			}
																	}
															}
													}
													{	/* Llib/hash.scm 208 */
														bool_t BgL_test2829z00_5016;

														{	/* Llib/hash.scm 208 */
															long BgL_n1z00_2731;

															{	/* Llib/hash.scm 208 */
																obj_t BgL_tmpz00_5017;

																if (INTEGERP(BgL_index1144z00_1484))
																	{	/* Llib/hash.scm 208 */
																		BgL_tmpz00_5017 = BgL_index1144z00_1484;
																	}
																else
																	{
																		obj_t BgL_auxz00_5020;

																		BgL_auxz00_5020 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string2657z00zz__hashz00,
																			BINT(((long) 7287)),
																			BGl_string2658z00zz__hashz00,
																			BGl_string2659z00zz__hashz00,
																			BgL_index1144z00_1484);
																		FAILURE(BgL_auxz00_5020, BFALSE, BFALSE);
																	}
																BgL_n1z00_2731 = (long) CINT(BgL_tmpz00_5017);
															}
															BgL_test2829z00_5016 =
																(BgL_n1z00_2731 >= ((long) 0));
														}
														if (BgL_test2829z00_5016)
															{
																long BgL_auxz00_5026;

																{	/* Llib/hash.scm 208 */
																	obj_t BgL_tmpz00_5027;

																	if (INTEGERP(BgL_index1144z00_1484))
																		{	/* Llib/hash.scm 208 */
																			BgL_tmpz00_5027 = BgL_index1144z00_1484;
																		}
																	else
																		{
																			obj_t BgL_auxz00_5030;

																			BgL_auxz00_5030 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string2657z00zz__hashz00,
																				BINT(((long) 7287)),
																				BGl_string2658z00zz__hashz00,
																				BGl_string2659z00zz__hashz00,
																				BgL_index1144z00_1484);
																			FAILURE(BgL_auxz00_5030, BFALSE, BFALSE);
																		}
																	BgL_auxz00_5026 =
																		(long) CINT(BgL_tmpz00_5027);
																}
																BgL_maxzd2lengthzd2_1465 =
																	VECTOR_REF(BgL_opt1134z00_50,
																	BgL_auxz00_5026);
															}
														else
															{	/* Llib/hash.scm 208 */
																BFALSE;
															}
													}
												}
												{	/* Llib/hash.scm 208 */
													obj_t BgL_index1145z00_1486;

													{
														long BgL_iz00_2734;

														BgL_iz00_2734 = ((long) 0);
													BgL_search1137z00_2733:
														if (
															(BgL_iz00_2734 ==
																VECTOR_LENGTH(BgL_opt1134z00_50)))
															{	/* Llib/hash.scm 208 */
																BgL_index1145z00_1486 = BINT(((long) -1));
															}
														else
															{	/* Llib/hash.scm 208 */
																if (
																	(BgL_iz00_2734 ==
																		(VECTOR_LENGTH(BgL_opt1134z00_50) -
																			((long) 1))))
																	{	/* Llib/hash.scm 208 */
																		BgL_index1145z00_1486 =
																			BGl_errorz00zz__errorz00
																			(BGl_symbol2653z00zz__hashz00,
																			BGl_string2656z00zz__hashz00,
																			BINT(VECTOR_LENGTH(BgL_opt1134z00_50)));
																	}
																else
																	{	/* Llib/hash.scm 208 */
																		obj_t BgL_vz00_2747;

																		BgL_vz00_2747 =
																			VECTOR_REF(BgL_opt1134z00_50,
																			BgL_iz00_2734);
																		if ((BgL_vz00_2747 ==
																				BGl_keyword2649z00zz__hashz00))
																			{	/* Llib/hash.scm 208 */
																				BgL_index1145z00_1486 =
																					BINT((BgL_iz00_2734 + ((long) 1)));
																			}
																		else
																			{
																				long BgL_iz00_5052;

																				BgL_iz00_5052 =
																					(BgL_iz00_2734 + ((long) 2));
																				BgL_iz00_2734 = BgL_iz00_5052;
																				goto BgL_search1137z00_2733;
																			}
																	}
															}
													}
													{	/* Llib/hash.scm 208 */
														bool_t BgL_test2835z00_5054;

														{	/* Llib/hash.scm 208 */
															long BgL_n1z00_2754;

															{	/* Llib/hash.scm 208 */
																obj_t BgL_tmpz00_5055;

																if (INTEGERP(BgL_index1145z00_1486))
																	{	/* Llib/hash.scm 208 */
																		BgL_tmpz00_5055 = BgL_index1145z00_1486;
																	}
																else
																	{
																		obj_t BgL_auxz00_5058;

																		BgL_auxz00_5058 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string2657z00zz__hashz00,
																			BINT(((long) 7287)),
																			BGl_string2658z00zz__hashz00,
																			BGl_string2659z00zz__hashz00,
																			BgL_index1145z00_1486);
																		FAILURE(BgL_auxz00_5058, BFALSE, BFALSE);
																	}
																BgL_n1z00_2754 = (long) CINT(BgL_tmpz00_5055);
															}
															BgL_test2835z00_5054 =
																(BgL_n1z00_2754 >= ((long) 0));
														}
														if (BgL_test2835z00_5054)
															{
																long BgL_auxz00_5064;

																{	/* Llib/hash.scm 208 */
																	obj_t BgL_tmpz00_5065;

																	if (INTEGERP(BgL_index1145z00_1486))
																		{	/* Llib/hash.scm 208 */
																			BgL_tmpz00_5065 = BgL_index1145z00_1486;
																		}
																	else
																		{
																			obj_t BgL_auxz00_5068;

																			BgL_auxz00_5068 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string2657z00zz__hashz00,
																				BINT(((long) 7287)),
																				BGl_string2658z00zz__hashz00,
																				BGl_string2659z00zz__hashz00,
																				BgL_index1145z00_1486);
																			FAILURE(BgL_auxz00_5068, BFALSE, BFALSE);
																		}
																	BgL_auxz00_5064 =
																		(long) CINT(BgL_tmpz00_5065);
																}
																BgL_siza7eza7_1466 =
																	VECTOR_REF(BgL_opt1134z00_50,
																	BgL_auxz00_5064);
															}
														else
															{	/* Llib/hash.scm 208 */
																BFALSE;
															}
													}
												}
												{	/* Llib/hash.scm 208 */
													obj_t BgL_index1146z00_1488;

													{
														long BgL_iz00_2757;

														BgL_iz00_2757 = ((long) 0);
													BgL_search1137z00_2756:
														if (
															(BgL_iz00_2757 ==
																VECTOR_LENGTH(BgL_opt1134z00_50)))
															{	/* Llib/hash.scm 208 */
																BgL_index1146z00_1488 = BINT(((long) -1));
															}
														else
															{	/* Llib/hash.scm 208 */
																if (
																	(BgL_iz00_2757 ==
																		(VECTOR_LENGTH(BgL_opt1134z00_50) -
																			((long) 1))))
																	{	/* Llib/hash.scm 208 */
																		BgL_index1146z00_1488 =
																			BGl_errorz00zz__errorz00
																			(BGl_symbol2653z00zz__hashz00,
																			BGl_string2656z00zz__hashz00,
																			BINT(VECTOR_LENGTH(BgL_opt1134z00_50)));
																	}
																else
																	{	/* Llib/hash.scm 208 */
																		obj_t BgL_vz00_2770;

																		BgL_vz00_2770 =
																			VECTOR_REF(BgL_opt1134z00_50,
																			BgL_iz00_2757);
																		if ((BgL_vz00_2770 ==
																				BGl_keyword2651z00zz__hashz00))
																			{	/* Llib/hash.scm 208 */
																				BgL_index1146z00_1488 =
																					BINT((BgL_iz00_2757 + ((long) 1)));
																			}
																		else
																			{
																				long BgL_iz00_5090;

																				BgL_iz00_5090 =
																					(BgL_iz00_2757 + ((long) 2));
																				BgL_iz00_2757 = BgL_iz00_5090;
																				goto BgL_search1137z00_2756;
																			}
																	}
															}
													}
													{	/* Llib/hash.scm 208 */
														bool_t BgL_test2841z00_5092;

														{	/* Llib/hash.scm 208 */
															long BgL_n1z00_2777;

															{	/* Llib/hash.scm 208 */
																obj_t BgL_tmpz00_5093;

																if (INTEGERP(BgL_index1146z00_1488))
																	{	/* Llib/hash.scm 208 */
																		BgL_tmpz00_5093 = BgL_index1146z00_1488;
																	}
																else
																	{
																		obj_t BgL_auxz00_5096;

																		BgL_auxz00_5096 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string2657z00zz__hashz00,
																			BINT(((long) 7287)),
																			BGl_string2658z00zz__hashz00,
																			BGl_string2659z00zz__hashz00,
																			BgL_index1146z00_1488);
																		FAILURE(BgL_auxz00_5096, BFALSE, BFALSE);
																	}
																BgL_n1z00_2777 = (long) CINT(BgL_tmpz00_5093);
															}
															BgL_test2841z00_5092 =
																(BgL_n1z00_2777 >= ((long) 0));
														}
														if (BgL_test2841z00_5092)
															{
																long BgL_auxz00_5102;

																{	/* Llib/hash.scm 208 */
																	obj_t BgL_tmpz00_5103;

																	if (INTEGERP(BgL_index1146z00_1488))
																		{	/* Llib/hash.scm 208 */
																			BgL_tmpz00_5103 = BgL_index1146z00_1488;
																		}
																	else
																		{
																			obj_t BgL_auxz00_5106;

																			BgL_auxz00_5106 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string2657z00zz__hashz00,
																				BINT(((long) 7287)),
																				BGl_string2658z00zz__hashz00,
																				BGl_string2659z00zz__hashz00,
																				BgL_index1146z00_1488);
																			FAILURE(BgL_auxz00_5106, BFALSE, BFALSE);
																		}
																	BgL_auxz00_5102 =
																		(long) CINT(BgL_tmpz00_5103);
																}
																BgL_weakz00_1467 =
																	VECTOR_REF(BgL_opt1134z00_50,
																	BgL_auxz00_5102);
															}
														else
															{	/* Llib/hash.scm 208 */
																BFALSE;
															}
													}
												}
												{	/* Llib/hash.scm 208 */
													obj_t BgL_bucketzd2expansionzd2_1490;

													BgL_bucketzd2expansionzd2_1490 =
														BgL_bucketzd2expansionzd2_1461;
													{	/* Llib/hash.scm 208 */
														obj_t BgL_eqtestz00_1491;

														BgL_eqtestz00_1491 = BgL_eqtestz00_1462;
														{	/* Llib/hash.scm 208 */
															obj_t BgL_hashz00_1492;

															BgL_hashz00_1492 = BgL_hashz00_1463;
															{	/* Llib/hash.scm 208 */
																obj_t BgL_maxzd2bucketzd2lengthz00_1493;

																BgL_maxzd2bucketzd2lengthz00_1493 =
																	BgL_maxzd2bucketzd2lengthz00_1464;
																{	/* Llib/hash.scm 208 */
																	obj_t BgL_maxzd2lengthzd2_1494;

																	BgL_maxzd2lengthzd2_1494 =
																		BgL_maxzd2lengthzd2_1465;
																	{	/* Llib/hash.scm 208 */
																		obj_t BgL_siza7eza7_1495;

																		BgL_siza7eza7_1495 = BgL_siza7eza7_1466;
																		return
																			BGl_createzd2hashtablezd2zz__hashz00
																			(BgL_bucketzd2expansionzd2_1490,
																			BgL_eqtestz00_1491, BgL_hashz00_1492,
																			BgL_maxzd2bucketzd2lengthz00_1493,
																			BgL_maxzd2lengthzd2_1494,
																			BgL_siza7eza7_1495, BgL_weakz00_1467);
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



/* create-hashtable */
	BGL_EXPORTED_DEF obj_t BGl_createzd2hashtablezd2zz__hashz00(obj_t
		BgL_bucketzd2expansionzd2_43, obj_t BgL_eqtestz00_44, obj_t BgL_hashz00_45,
		obj_t BgL_maxzd2bucketzd2lengthz00_46, obj_t BgL_maxzd2lengthzd2_47,
		obj_t BgL_siza7eza7_48, obj_t BgL_weakz00_49)
	{
		{	/* Llib/hash.scm 208 */
			{	/* Llib/hash.scm 216 */
				long BgL_weakz00_1505;

				if ((BgL_weakz00_49 == BGl_symbol2660z00zz__hashz00))
					{	/* Llib/hash.scm 216 */
						BgL_weakz00_1505 = ((long) 1);
					}
				else
					{	/* Llib/hash.scm 216 */
						if ((BgL_weakz00_49 == BGl_symbol2662z00zz__hashz00))
							{	/* Llib/hash.scm 216 */
								BgL_weakz00_1505 = ((long) 2);
							}
						else
							{	/* Llib/hash.scm 216 */
								if ((BgL_weakz00_49 == BGl_symbol2664z00zz__hashz00))
									{	/* Llib/hash.scm 216 */
										BgL_weakz00_1505 = ((long) 3);
									}
								else
									{	/* Llib/hash.scm 216 */
										if ((BgL_weakz00_49 == BGl_symbol2636z00zz__hashz00))
											{	/* Llib/hash.scm 216 */
												BgL_weakz00_1505 = ((long) 0);
											}
										else
											{	/* Llib/hash.scm 216 */
												if ((BgL_weakz00_49 == BGl_symbol2666z00zz__hashz00))
													{	/* Llib/hash.scm 216 */
														BgL_weakz00_1505 = ((long) 4);
													}
												else
													{	/* Llib/hash.scm 216 */
														if (CBOOL(BgL_weakz00_49))
															{	/* Llib/hash.scm 222 */
																BgL_weakz00_1505 = ((long) 2);
															}
														else
															{	/* Llib/hash.scm 222 */
																BgL_weakz00_1505 = ((long) 0);
					}}}}}}
				if ((BINT(BgL_weakz00_1505) == BINT(((long) 4))))
					{	/* Llib/hash.scm 223 */
						if (CBOOL(BgL_eqtestz00_44))
							{	/* Llib/hash.scm 225 */
								return
									BGl_errorz00zz__errorz00(BGl_string2654z00zz__hashz00,
									BGl_string2668z00zz__hashz00, BgL_eqtestz00_44);
							}
						else
							{	/* Llib/hash.scm 225 */
								if (CBOOL(BgL_hashz00_45))
									{	/* Llib/hash.scm 228 */
										return
											BGl_errorz00zz__errorz00(BGl_string2654z00zz__hashz00,
											BGl_string2669z00zz__hashz00, BgL_hashz00_45);
									}
								else
									{	/* Llib/hash.scm 232 */
										obj_t BgL_arg1300z00_1507;

										BgL_arg1300z00_1507 =
											make_vector((long) CINT(BgL_siza7eza7_48), BNIL);
										{	/* Llib/hash.scm 232 */
											obj_t BgL_newz00_2792;

											BgL_newz00_2792 =
												create_struct(BGl_symbol2633z00zz__hashz00,
												(int) (((long) 8)));
											{	/* Llib/hash.scm 232 */
												int BgL_tmpz00_5139;

												BgL_tmpz00_5139 = (int) (((long) 7));
												STRUCT_SET(BgL_newz00_2792, BgL_tmpz00_5139,
													BgL_bucketzd2expansionzd2_43);
											}
											{	/* Llib/hash.scm 232 */
												int BgL_tmpz00_5142;

												BgL_tmpz00_5142 = (int) (((long) 6));
												STRUCT_SET(BgL_newz00_2792, BgL_tmpz00_5142,
													BgL_maxzd2lengthzd2_47);
											}
											{	/* Llib/hash.scm 232 */
												obj_t BgL_auxz00_5147;
												int BgL_tmpz00_5145;

												BgL_auxz00_5147 = BINT(BgL_weakz00_1505);
												BgL_tmpz00_5145 = (int) (((long) 5));
												STRUCT_SET(BgL_newz00_2792, BgL_tmpz00_5145,
													BgL_auxz00_5147);
											}
											{	/* Llib/hash.scm 232 */
												int BgL_tmpz00_5150;

												BgL_tmpz00_5150 = (int) (((long) 4));
												STRUCT_SET(BgL_newz00_2792, BgL_tmpz00_5150,
													BGl_proc2670z00zz__hashz00);
											}
											{	/* Llib/hash.scm 232 */
												int BgL_tmpz00_5153;

												BgL_tmpz00_5153 = (int) (((long) 3));
												STRUCT_SET(BgL_newz00_2792, BgL_tmpz00_5153,
													BGl_stringzd3zf3zd2envzf2zz__r4_strings_6_7z00);
											}
											{	/* Llib/hash.scm 232 */
												int BgL_tmpz00_5156;

												BgL_tmpz00_5156 = (int) (((long) 2));
												STRUCT_SET(BgL_newz00_2792, BgL_tmpz00_5156,
													BgL_arg1300z00_1507);
											}
											{	/* Llib/hash.scm 232 */
												int BgL_tmpz00_5159;

												BgL_tmpz00_5159 = (int) (((long) 1));
												STRUCT_SET(BgL_newz00_2792, BgL_tmpz00_5159,
													BgL_maxzd2bucketzd2lengthz00_46);
											}
											{	/* Llib/hash.scm 232 */
												obj_t BgL_auxz00_5164;
												int BgL_tmpz00_5162;

												BgL_auxz00_5164 = BINT(((long) 0));
												BgL_tmpz00_5162 = (int) (((long) 0));
												STRUCT_SET(BgL_newz00_2792, BgL_tmpz00_5162,
													BgL_auxz00_5164);
											}
											return BgL_newz00_2792;
										}
									}
							}
					}
				else
					{	/* Llib/hash.scm 236 */
						obj_t BgL_arg1304z00_1513;

						BgL_arg1304z00_1513 =
							make_vector((long) CINT(BgL_siza7eza7_48), BNIL);
						{	/* Llib/hash.scm 236 */
							obj_t BgL_newz00_2801;

							BgL_newz00_2801 =
								create_struct(BGl_symbol2633z00zz__hashz00, (int) (((long) 8)));
							{	/* Llib/hash.scm 236 */
								int BgL_tmpz00_5171;

								BgL_tmpz00_5171 = (int) (((long) 7));
								STRUCT_SET(BgL_newz00_2801, BgL_tmpz00_5171,
									BgL_bucketzd2expansionzd2_43);
							}
							{	/* Llib/hash.scm 236 */
								int BgL_tmpz00_5174;

								BgL_tmpz00_5174 = (int) (((long) 6));
								STRUCT_SET(BgL_newz00_2801, BgL_tmpz00_5174,
									BgL_maxzd2lengthzd2_47);
							}
							{	/* Llib/hash.scm 236 */
								obj_t BgL_auxz00_5179;
								int BgL_tmpz00_5177;

								BgL_auxz00_5179 = BINT(BgL_weakz00_1505);
								BgL_tmpz00_5177 = (int) (((long) 5));
								STRUCT_SET(BgL_newz00_2801, BgL_tmpz00_5177, BgL_auxz00_5179);
							}
							{	/* Llib/hash.scm 236 */
								int BgL_tmpz00_5182;

								BgL_tmpz00_5182 = (int) (((long) 4));
								STRUCT_SET(BgL_newz00_2801, BgL_tmpz00_5182, BgL_hashz00_45);
							}
							{	/* Llib/hash.scm 236 */
								int BgL_tmpz00_5185;

								BgL_tmpz00_5185 = (int) (((long) 3));
								STRUCT_SET(BgL_newz00_2801, BgL_tmpz00_5185, BgL_eqtestz00_44);
							}
							{	/* Llib/hash.scm 236 */
								int BgL_tmpz00_5188;

								BgL_tmpz00_5188 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_2801, BgL_tmpz00_5188,
									BgL_arg1304z00_1513);
							}
							{	/* Llib/hash.scm 236 */
								int BgL_tmpz00_5191;

								BgL_tmpz00_5191 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_2801, BgL_tmpz00_5191,
									BgL_maxzd2bucketzd2lengthz00_46);
							}
							{	/* Llib/hash.scm 236 */
								obj_t BgL_auxz00_5196;
								int BgL_tmpz00_5194;

								BgL_auxz00_5196 = BINT(((long) 0));
								BgL_tmpz00_5194 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_2801, BgL_tmpz00_5194, BgL_auxz00_5196);
							}
							return BgL_newz00_2801;
						}
					}
			}
		}

	}



/* &<@anonymous:1302> */
	obj_t BGl_z62zc3z04anonymousza31302ze3ze5zz__hashz00(obj_t BgL_envz00_4533,
		obj_t BgL_sz00_4534)
	{
		{	/* Llib/hash.scm 234 */
			{	/* Llib/hash.scm 234 */
				long BgL_tmpz00_5199;

				{	/* Llib/hash.scm 234 */
					long BgL_arg1303z00_4692;

					BgL_arg1303z00_4692 = STRING_LENGTH(((obj_t) BgL_sz00_4534));
					BgL_tmpz00_5199 =
						bgl_string_hash(BSTRING_TO_STRING(BgL_sz00_4534),
						(int) (((long) 0)), (int) (BgL_arg1303z00_4692));
				}
				return BINT(BgL_tmpz00_5199);
			}
		}

	}



/* hashtable? */
	BGL_EXPORTED_DEF bool_t BGl_hashtablezf3zf3zz__hashz00(obj_t BgL_objz00_52)
	{
		{	/* Llib/hash.scm 243 */
			if (STRUCTP(BgL_objz00_52))
				{	/* Llib/hash.scm 244 */
					return (STRUCT_KEY(BgL_objz00_52) == BGl_symbol2633z00zz__hashz00);
				}
			else
				{	/* Llib/hash.scm 244 */
					return ((bool_t) 0);
				}
		}

	}



/* &hashtable? */
	obj_t BGl_z62hashtablezf3z91zz__hashz00(obj_t BgL_envz00_4538,
		obj_t BgL_objz00_4539)
	{
		{	/* Llib/hash.scm 243 */
			return BBOOL(BGl_hashtablezf3zf3zz__hashz00(BgL_objz00_4539));
		}

	}



/* hashtable-weak-keys? */
	BGL_EXPORTED_DEF bool_t BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00(obj_t
		BgL_tablez00_55)
	{
		{	/* Llib/hash.scm 261 */
			if (
				(((long) 0) ==
					(((long) 1) &
						(long) CINT(STRUCT_REF(BgL_tablez00_55, (int) (((long) 5)))))))
				{	/* Llib/hash.scm 262 */
					return ((bool_t) 0);
				}
			else
				{	/* Llib/hash.scm 262 */
					return ((bool_t) 1);
				}
		}

	}



/* &hashtable-weak-keys? */
	obj_t BGl_z62hashtablezd2weakzd2keyszf3z91zz__hashz00(obj_t BgL_envz00_4540,
		obj_t BgL_tablez00_4541)
	{
		{	/* Llib/hash.scm 261 */
			{	/* Llib/hash.scm 262 */
				bool_t BgL_tmpz00_5219;

				{	/* Llib/hash.scm 262 */
					obj_t BgL_auxz00_5220;

					if (STRUCTP(BgL_tablez00_4541))
						{	/* Llib/hash.scm 262 */
							BgL_auxz00_5220 = BgL_tablez00_4541;
						}
					else
						{
							obj_t BgL_auxz00_5223;

							BgL_auxz00_5223 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__hashz00,
								BINT(((long) 9405)), BGl_string2671z00zz__hashz00,
								BGl_string2672z00zz__hashz00, BgL_tablez00_4541);
							FAILURE(BgL_auxz00_5223, BFALSE, BFALSE);
						}
					BgL_tmpz00_5219 =
						BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00(BgL_auxz00_5220);
				}
				return BBOOL(BgL_tmpz00_5219);
			}
		}

	}



/* hashtable-weak-data? */
	BGL_EXPORTED_DEF bool_t BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(obj_t
		BgL_tablez00_56)
	{
		{	/* Llib/hash.scm 267 */
			if (
				(((long) 0) ==
					(((long) 2) &
						(long) CINT(STRUCT_REF(BgL_tablez00_56, (int) (((long) 5)))))))
				{	/* Llib/hash.scm 268 */
					return ((bool_t) 0);
				}
			else
				{	/* Llib/hash.scm 268 */
					return ((bool_t) 1);
				}
		}

	}



/* &hashtable-weak-data? */
	obj_t BGl_z62hashtablezd2weakzd2datazf3z91zz__hashz00(obj_t BgL_envz00_4542,
		obj_t BgL_tablez00_4543)
	{
		{	/* Llib/hash.scm 267 */
			{	/* Llib/hash.scm 268 */
				bool_t BgL_tmpz00_5235;

				{	/* Llib/hash.scm 268 */
					obj_t BgL_auxz00_5236;

					if (STRUCTP(BgL_tablez00_4543))
						{	/* Llib/hash.scm 268 */
							BgL_auxz00_5236 = BgL_tablez00_4543;
						}
					else
						{
							obj_t BgL_auxz00_5239;

							BgL_auxz00_5239 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__hashz00,
								BINT(((long) 9743)), BGl_string2673z00zz__hashz00,
								BGl_string2672z00zz__hashz00, BgL_tablez00_4543);
							FAILURE(BgL_auxz00_5239, BFALSE, BFALSE);
						}
					BgL_tmpz00_5235 =
						BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(BgL_auxz00_5236);
				}
				return BBOOL(BgL_tmpz00_5235);
			}
		}

	}



/* hashtable-size */
	BGL_EXPORTED_DEF long BGl_hashtablezd2siza7ez75zz__hashz00(obj_t
		BgL_tablez00_57)
	{
		{	/* Llib/hash.scm 273 */
			return (long) CINT(STRUCT_REF(BgL_tablez00_57, (int) (((long) 0))));
		}

	}



/* &hashtable-size */
	obj_t BGl_z62hashtablezd2siza7ez17zz__hashz00(obj_t BgL_envz00_4544,
		obj_t BgL_tablez00_4545)
	{
		{	/* Llib/hash.scm 273 */
			{	/* Llib/hash.scm 274 */
				long BgL_tmpz00_5248;

				{	/* Llib/hash.scm 274 */
					obj_t BgL_auxz00_5249;

					if (STRUCTP(BgL_tablez00_4545))
						{	/* Llib/hash.scm 274 */
							BgL_auxz00_5249 = BgL_tablez00_4545;
						}
					else
						{
							obj_t BgL_auxz00_5252;

							BgL_auxz00_5252 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__hashz00,
								BINT(((long) 10075)), BGl_string2674z00zz__hashz00,
								BGl_string2672z00zz__hashz00, BgL_tablez00_4545);
							FAILURE(BgL_auxz00_5252, BFALSE, BFALSE);
						}
					BgL_tmpz00_5248 =
						BGl_hashtablezd2siza7ez75zz__hashz00(BgL_auxz00_5249);
				}
				return BINT(BgL_tmpz00_5248);
			}
		}

	}



/* hashtable->vector */
	BGL_EXPORTED_DEF obj_t BGl_hashtablezd2ze3vectorz31zz__hashz00(obj_t
		BgL_tablez00_58)
	{
		{	/* Llib/hash.scm 279 */
			{	/* Llib/hash.scm 280 */
				bool_t BgL_test2859z00_5258;

				if (
					(((long) 0) ==
						((long) CINT(STRUCT_REF(BgL_tablez00_58,
									(int) (((long) 5)))) & ((long) 3))))
					{	/* Llib/hash.scm 250 */
						BgL_test2859z00_5258 = ((bool_t) 0);
					}
				else
					{	/* Llib/hash.scm 250 */
						BgL_test2859z00_5258 = ((bool_t) 1);
					}
				if (BgL_test2859z00_5258)
					{	/* Llib/hash.scm 280 */
						return
							BGl_weakzd2hashtablezd2ze3vectorze3zz__weakhashz00
							(BgL_tablez00_58);
					}
				else
					{	/* Llib/hash.scm 280 */
						return
							BGl_plainzd2hashtablezd2ze3vectorze3zz__hashz00(BgL_tablez00_58);
					}
			}
		}

	}



/* &hashtable->vector */
	obj_t BGl_z62hashtablezd2ze3vectorz53zz__hashz00(obj_t BgL_envz00_4546,
		obj_t BgL_tablez00_4547)
	{
		{	/* Llib/hash.scm 279 */
			{	/* Llib/hash.scm 280 */
				obj_t BgL_auxz00_5267;

				if (STRUCTP(BgL_tablez00_4547))
					{	/* Llib/hash.scm 280 */
						BgL_auxz00_5267 = BgL_tablez00_4547;
					}
				else
					{
						obj_t BgL_auxz00_5270;

						BgL_auxz00_5270 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__hashz00,
							BINT(((long) 10368)), BGl_string2675z00zz__hashz00,
							BGl_string2672z00zz__hashz00, BgL_tablez00_4547);
						FAILURE(BgL_auxz00_5270, BFALSE, BFALSE);
					}
				return BGl_hashtablezd2ze3vectorz31zz__hashz00(BgL_auxz00_5267);
			}
		}

	}



/* plain-hashtable->vector */
	obj_t BGl_plainzd2hashtablezd2ze3vectorze3zz__hashz00(obj_t BgL_tablez00_59)
	{
		{	/* Llib/hash.scm 287 */
			{	/* Llib/hash.scm 288 */
				obj_t BgL_vecz00_1537;

				BgL_vecz00_1537 =
					make_vector(
					(long) CINT(STRUCT_REF(BgL_tablez00_59,
							(int) (((long) 0)))), BUNSPEC);
				{	/* Llib/hash.scm 288 */
					obj_t BgL_bucketsz00_1538;

					BgL_bucketsz00_1538 = STRUCT_REF(BgL_tablez00_59, (int) (((long) 2)));
					{	/* Llib/hash.scm 290 */

						{
							long BgL_iz00_2879;
							long BgL_wz00_2880;

							BgL_iz00_2879 = ((long) 0);
							BgL_wz00_2880 = ((long) 0);
						BgL_loopz00_2878:
							if (
								(BgL_iz00_2879 == VECTOR_LENGTH(((obj_t) BgL_bucketsz00_1538))))
								{	/* Llib/hash.scm 293 */
									return BgL_vecz00_1537;
								}
							else
								{	/* Llib/hash.scm 295 */
									obj_t BgL_g1055z00_2885;

									BgL_g1055z00_2885 =
										VECTOR_REF(((obj_t) BgL_bucketsz00_1538), BgL_iz00_2879);
									{
										obj_t BgL_bucketz00_2889;
										long BgL_wz00_2890;

										BgL_bucketz00_2889 = BgL_g1055z00_2885;
										BgL_wz00_2890 = BgL_wz00_2880;
									BgL_liipz00_2888:
										if (NULLP(BgL_bucketz00_2889))
											{
												long BgL_wz00_5291;
												long BgL_iz00_5289;

												BgL_iz00_5289 = (BgL_iz00_2879 + ((long) 1));
												BgL_wz00_5291 = BgL_wz00_2890;
												BgL_wz00_2880 = BgL_wz00_5291;
												BgL_iz00_2879 = BgL_iz00_5289;
												goto BgL_loopz00_2878;
											}
										else
											{	/* Llib/hash.scm 297 */
												{	/* Llib/hash.scm 300 */
													obj_t BgL_arg1335z00_2896;

													{	/* Llib/hash.scm 300 */
														obj_t BgL_pairz00_2900;

														BgL_pairz00_2900 =
															CAR(((obj_t) BgL_bucketz00_2889));
														BgL_arg1335z00_2896 = CDR(BgL_pairz00_2900);
													}
													VECTOR_SET(BgL_vecz00_1537, BgL_wz00_2890,
														BgL_arg1335z00_2896);
												}
												{	/* Llib/hash.scm 301 */
													obj_t BgL_arg1337z00_2903;
													long BgL_arg1338z00_2904;

													BgL_arg1337z00_2903 =
														CDR(((obj_t) BgL_bucketz00_2889));
													BgL_arg1338z00_2904 = (BgL_wz00_2890 + ((long) 1));
													{
														long BgL_wz00_5300;
														obj_t BgL_bucketz00_5299;

														BgL_bucketz00_5299 = BgL_arg1337z00_2903;
														BgL_wz00_5300 = BgL_arg1338z00_2904;
														BgL_wz00_2890 = BgL_wz00_5300;
														BgL_bucketz00_2889 = BgL_bucketz00_5299;
														goto BgL_liipz00_2888;
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



/* hashtable->list */
	BGL_EXPORTED_DEF obj_t BGl_hashtablezd2ze3listz31zz__hashz00(obj_t
		BgL_tablez00_60)
	{
		{	/* Llib/hash.scm 306 */
			{	/* Llib/hash.scm 307 */
				bool_t BgL_test2864z00_5301;

				if (
					(((long) 0) ==
						((long) CINT(STRUCT_REF(BgL_tablez00_60,
									(int) (((long) 5)))) & ((long) 3))))
					{	/* Llib/hash.scm 250 */
						BgL_test2864z00_5301 = ((bool_t) 0);
					}
				else
					{	/* Llib/hash.scm 250 */
						BgL_test2864z00_5301 = ((bool_t) 1);
					}
				if (BgL_test2864z00_5301)
					{	/* Llib/hash.scm 307 */
						return
							BGl_weakzd2hashtablezd2ze3listze3zz__weakhashz00(BgL_tablez00_60);
					}
				else
					{	/* Llib/hash.scm 307 */
						return
							BGl_plainzd2hashtablezd2ze3listze3zz__hashz00(BgL_tablez00_60);
					}
			}
		}

	}



/* &hashtable->list */
	obj_t BGl_z62hashtablezd2ze3listz53zz__hashz00(obj_t BgL_envz00_4548,
		obj_t BgL_tablez00_4549)
	{
		{	/* Llib/hash.scm 306 */
			{	/* Llib/hash.scm 307 */
				obj_t BgL_auxz00_5310;

				if (STRUCTP(BgL_tablez00_4549))
					{	/* Llib/hash.scm 307 */
						BgL_auxz00_5310 = BgL_tablez00_4549;
					}
				else
					{
						obj_t BgL_auxz00_5313;

						BgL_auxz00_5313 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__hashz00,
							BINT(((long) 11429)), BGl_string2676z00zz__hashz00,
							BGl_string2672z00zz__hashz00, BgL_tablez00_4549);
						FAILURE(BgL_auxz00_5313, BFALSE, BFALSE);
					}
				return BGl_hashtablezd2ze3listz31zz__hashz00(BgL_auxz00_5310);
			}
		}

	}



/* plain-hashtable->list */
	obj_t BGl_plainzd2hashtablezd2ze3listze3zz__hashz00(obj_t BgL_tablez00_61)
	{
		{	/* Llib/hash.scm 314 */
			{	/* Llib/hash.scm 315 */
				obj_t BgL_vecz00_1560;

				BgL_vecz00_1560 =
					make_vector(
					(long) CINT(STRUCT_REF(BgL_tablez00_61,
							(int) (((long) 0)))), BUNSPEC);
				{	/* Llib/hash.scm 315 */
					obj_t BgL_bucketsz00_1561;

					BgL_bucketsz00_1561 = STRUCT_REF(BgL_tablez00_61, (int) (((long) 2)));
					{	/* Llib/hash.scm 317 */

						{
							long BgL_iz00_1565;
							obj_t BgL_resz00_1566;

							BgL_iz00_1565 = ((long) 0);
							BgL_resz00_1566 = BNIL;
						BgL_zc3z04anonymousza31342ze3z87_1567:
							if (
								(BgL_iz00_1565 == VECTOR_LENGTH(((obj_t) BgL_bucketsz00_1561))))
								{	/* Llib/hash.scm 320 */
									return BgL_resz00_1566;
								}
							else
								{	/* Llib/hash.scm 322 */
									obj_t BgL_g1057z00_1569;

									BgL_g1057z00_1569 =
										VECTOR_REF(((obj_t) BgL_bucketsz00_1561), BgL_iz00_1565);
									{
										obj_t BgL_bucketz00_2957;
										obj_t BgL_resz00_2958;

										BgL_bucketz00_2957 = BgL_g1057z00_1569;
										BgL_resz00_2958 = BgL_resz00_1566;
									BgL_liipz00_2956:
										if (NULLP(BgL_bucketz00_2957))
											{
												obj_t BgL_resz00_5334;
												long BgL_iz00_5332;

												BgL_iz00_5332 = (BgL_iz00_1565 + ((long) 1));
												BgL_resz00_5334 = BgL_resz00_2958;
												BgL_resz00_1566 = BgL_resz00_5334;
												BgL_iz00_1565 = BgL_iz00_5332;
												goto BgL_zc3z04anonymousza31342ze3z87_1567;
											}
										else
											{	/* Llib/hash.scm 326 */
												obj_t BgL_arg1347z00_2966;
												obj_t BgL_arg1348z00_2967;

												BgL_arg1347z00_2966 = CDR(((obj_t) BgL_bucketz00_2957));
												{	/* Llib/hash.scm 326 */
													obj_t BgL_arg1350z00_2968;

													{	/* Llib/hash.scm 326 */
														obj_t BgL_pairz00_2976;

														BgL_pairz00_2976 =
															CAR(((obj_t) BgL_bucketz00_2957));
														BgL_arg1350z00_2968 = CDR(BgL_pairz00_2976);
													}
													BgL_arg1348z00_2967 =
														MAKE_YOUNG_PAIR(BgL_arg1350z00_2968,
														BgL_resz00_2958);
												}
												{
													obj_t BgL_resz00_5342;
													obj_t BgL_bucketz00_5341;

													BgL_bucketz00_5341 = BgL_arg1347z00_2966;
													BgL_resz00_5342 = BgL_arg1348z00_2967;
													BgL_resz00_2958 = BgL_resz00_5342;
													BgL_bucketz00_2957 = BgL_bucketz00_5341;
													goto BgL_liipz00_2956;
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



/* hashtable-key-list */
	BGL_EXPORTED_DEF obj_t BGl_hashtablezd2keyzd2listz00zz__hashz00(obj_t
		BgL_tablez00_62)
	{
		{	/* Llib/hash.scm 331 */
			{	/* Llib/hash.scm 332 */
				bool_t BgL_test2869z00_5343;

				if (
					(((long) 0) ==
						((long) CINT(STRUCT_REF(BgL_tablez00_62,
									(int) (((long) 5)))) & ((long) 3))))
					{	/* Llib/hash.scm 250 */
						BgL_test2869z00_5343 = ((bool_t) 0);
					}
				else
					{	/* Llib/hash.scm 250 */
						BgL_test2869z00_5343 = ((bool_t) 1);
					}
				if (BgL_test2869z00_5343)
					{	/* Llib/hash.scm 332 */
						return
							BGl_weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00
							(BgL_tablez00_62);
					}
				else
					{	/* Llib/hash.scm 332 */
						return
							BGl_plainzd2hashtablezd2keyzd2listzd2zz__hashz00(BgL_tablez00_62);
					}
			}
		}

	}



/* &hashtable-key-list */
	obj_t BGl_z62hashtablezd2keyzd2listz62zz__hashz00(obj_t BgL_envz00_4550,
		obj_t BgL_tablez00_4551)
	{
		{	/* Llib/hash.scm 331 */
			{	/* Llib/hash.scm 332 */
				obj_t BgL_auxz00_5352;

				if (STRUCTP(BgL_tablez00_4551))
					{	/* Llib/hash.scm 332 */
						BgL_auxz00_5352 = BgL_tablez00_4551;
					}
				else
					{
						obj_t BgL_auxz00_5355;

						BgL_auxz00_5355 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__hashz00,
							BINT(((long) 12449)), BGl_string2677z00zz__hashz00,
							BGl_string2672z00zz__hashz00, BgL_tablez00_4551);
						FAILURE(BgL_auxz00_5355, BFALSE, BFALSE);
					}
				return BGl_hashtablezd2keyzd2listz00zz__hashz00(BgL_auxz00_5352);
			}
		}

	}



/* plain-hashtable-key-list */
	obj_t BGl_plainzd2hashtablezd2keyzd2listzd2zz__hashz00(obj_t BgL_tablez00_63)
	{
		{	/* Llib/hash.scm 339 */
			{	/* Llib/hash.scm 340 */
				obj_t BgL_vecz00_1584;

				BgL_vecz00_1584 =
					make_vector(
					(long) CINT(STRUCT_REF(BgL_tablez00_63,
							(int) (((long) 0)))), BUNSPEC);
				{	/* Llib/hash.scm 340 */
					obj_t BgL_bucketsz00_1585;

					BgL_bucketsz00_1585 = STRUCT_REF(BgL_tablez00_63, (int) (((long) 2)));
					{	/* Llib/hash.scm 342 */

						{
							long BgL_iz00_1589;
							obj_t BgL_resz00_1590;

							BgL_iz00_1589 = ((long) 0);
							BgL_resz00_1590 = BNIL;
						BgL_zc3z04anonymousza31354ze3z87_1591:
							if (
								(BgL_iz00_1589 == VECTOR_LENGTH(((obj_t) BgL_bucketsz00_1585))))
								{	/* Llib/hash.scm 345 */
									return BgL_resz00_1590;
								}
							else
								{	/* Llib/hash.scm 347 */
									obj_t BgL_g1059z00_1593;

									BgL_g1059z00_1593 =
										VECTOR_REF(((obj_t) BgL_bucketsz00_1585), BgL_iz00_1589);
									{
										obj_t BgL_bucketz00_3026;
										obj_t BgL_resz00_3027;

										BgL_bucketz00_3026 = BgL_g1059z00_1593;
										BgL_resz00_3027 = BgL_resz00_1590;
									BgL_liipz00_3025:
										if (NULLP(BgL_bucketz00_3026))
											{
												obj_t BgL_resz00_5376;
												long BgL_iz00_5374;

												BgL_iz00_5374 = (BgL_iz00_1589 + ((long) 1));
												BgL_resz00_5376 = BgL_resz00_3027;
												BgL_resz00_1590 = BgL_resz00_5376;
												BgL_iz00_1589 = BgL_iz00_5374;
												goto BgL_zc3z04anonymousza31354ze3z87_1591;
											}
										else
											{	/* Llib/hash.scm 351 */
												obj_t BgL_arg1360z00_3035;
												obj_t BgL_arg1361z00_3036;

												BgL_arg1360z00_3035 = CDR(((obj_t) BgL_bucketz00_3026));
												{	/* Llib/hash.scm 351 */
													obj_t BgL_arg1362z00_3037;

													{	/* Llib/hash.scm 351 */
														obj_t BgL_pairz00_3045;

														BgL_pairz00_3045 =
															CAR(((obj_t) BgL_bucketz00_3026));
														BgL_arg1362z00_3037 = CAR(BgL_pairz00_3045);
													}
													BgL_arg1361z00_3036 =
														MAKE_YOUNG_PAIR(BgL_arg1362z00_3037,
														BgL_resz00_3027);
												}
												{
													obj_t BgL_resz00_5384;
													obj_t BgL_bucketz00_5383;

													BgL_bucketz00_5383 = BgL_arg1360z00_3035;
													BgL_resz00_5384 = BgL_arg1361z00_3036;
													BgL_resz00_3027 = BgL_resz00_5384;
													BgL_bucketz00_3026 = BgL_bucketz00_5383;
													goto BgL_liipz00_3025;
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



/* hashtable-map */
	BGL_EXPORTED_DEF obj_t BGl_hashtablezd2mapzd2zz__hashz00(obj_t
		BgL_tablez00_64, obj_t BgL_funz00_65)
	{
		{	/* Llib/hash.scm 356 */
			{	/* Llib/hash.scm 357 */
				bool_t BgL_test2874z00_5385;

				if (
					(((long) 0) ==
						((long) CINT(STRUCT_REF(BgL_tablez00_64,
									(int) (((long) 5)))) & ((long) 3))))
					{	/* Llib/hash.scm 250 */
						BgL_test2874z00_5385 = ((bool_t) 0);
					}
				else
					{	/* Llib/hash.scm 250 */
						BgL_test2874z00_5385 = ((bool_t) 1);
					}
				if (BgL_test2874z00_5385)
					{	/* Llib/hash.scm 357 */
						return
							BGl_weakzd2hashtablezd2mapz00zz__weakhashz00(BgL_tablez00_64,
							BgL_funz00_65);
					}
				else
					{	/* Llib/hash.scm 357 */
						return
							BGl_plainzd2hashtablezd2mapz00zz__hashz00(BgL_tablez00_64,
							BgL_funz00_65);
					}
			}
		}

	}



/* &hashtable-map */
	obj_t BGl_z62hashtablezd2mapzb0zz__hashz00(obj_t BgL_envz00_4552,
		obj_t BgL_tablez00_4553, obj_t BgL_funz00_4554)
	{
		{	/* Llib/hash.scm 356 */
			{	/* Llib/hash.scm 357 */
				obj_t BgL_auxz00_5401;
				obj_t BgL_auxz00_5394;

				if (PROCEDUREP(BgL_funz00_4554))
					{	/* Llib/hash.scm 357 */
						BgL_auxz00_5401 = BgL_funz00_4554;
					}
				else
					{
						obj_t BgL_auxz00_5404;

						BgL_auxz00_5404 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__hashz00,
							BINT(((long) 13488)), BGl_string2678z00zz__hashz00,
							BGl_string2679z00zz__hashz00, BgL_funz00_4554);
						FAILURE(BgL_auxz00_5404, BFALSE, BFALSE);
					}
				if (STRUCTP(BgL_tablez00_4553))
					{	/* Llib/hash.scm 357 */
						BgL_auxz00_5394 = BgL_tablez00_4553;
					}
				else
					{
						obj_t BgL_auxz00_5397;

						BgL_auxz00_5397 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__hashz00,
							BINT(((long) 13488)), BGl_string2678z00zz__hashz00,
							BGl_string2672z00zz__hashz00, BgL_tablez00_4553);
						FAILURE(BgL_auxz00_5397, BFALSE, BFALSE);
					}
				return
					BGl_hashtablezd2mapzd2zz__hashz00(BgL_auxz00_5394, BgL_auxz00_5401);
			}
		}

	}



/* plain-hashtable-map */
	obj_t BGl_plainzd2hashtablezd2mapz00zz__hashz00(obj_t BgL_tablez00_66,
		obj_t BgL_funz00_67)
	{
		{	/* Llib/hash.scm 364 */
			{	/* Llib/hash.scm 365 */
				obj_t BgL_bucketsz00_1608;

				BgL_bucketsz00_1608 = STRUCT_REF(BgL_tablez00_66, (int) (((long) 2)));
				{	/* Llib/hash.scm 366 */

					{
						long BgL_iz00_1612;
						obj_t BgL_resz00_1613;

						BgL_iz00_1612 = ((long) 0);
						BgL_resz00_1613 = BNIL;
					BgL_zc3z04anonymousza31366ze3z87_1614:
						if ((BgL_iz00_1612 < VECTOR_LENGTH(((obj_t) BgL_bucketsz00_1608))))
							{	/* Llib/hash.scm 370 */
								obj_t BgL_g1061z00_1616;

								BgL_g1061z00_1616 =
									VECTOR_REF(((obj_t) BgL_bucketsz00_1608), BgL_iz00_1612);
								{
									obj_t BgL_lstz00_1618;
									obj_t BgL_resz00_1619;

									BgL_lstz00_1618 = BgL_g1061z00_1616;
									BgL_resz00_1619 = BgL_resz00_1613;
								BgL_zc3z04anonymousza31368ze3z87_1620:
									if (NULLP(BgL_lstz00_1618))
										{
											obj_t BgL_resz00_5421;
											long BgL_iz00_5419;

											BgL_iz00_5419 = (BgL_iz00_1612 + ((long) 1));
											BgL_resz00_5421 = BgL_resz00_1619;
											BgL_resz00_1613 = BgL_resz00_5421;
											BgL_iz00_1612 = BgL_iz00_5419;
											goto BgL_zc3z04anonymousza31366ze3z87_1614;
										}
									else
										{	/* Llib/hash.scm 374 */
											obj_t BgL_cellz00_1623;

											BgL_cellz00_1623 = CAR(((obj_t) BgL_lstz00_1618));
											{	/* Llib/hash.scm 375 */
												obj_t BgL_arg1371z00_1624;
												obj_t BgL_arg1372z00_1625;

												BgL_arg1371z00_1624 = CDR(((obj_t) BgL_lstz00_1618));
												{	/* Llib/hash.scm 376 */
													obj_t BgL_arg1373z00_1626;

													{	/* Llib/hash.scm 376 */
														obj_t BgL_arg1374z00_1627;
														obj_t BgL_arg1375z00_1628;

														BgL_arg1374z00_1627 =
															CAR(((obj_t) BgL_cellz00_1623));
														BgL_arg1375z00_1628 =
															CDR(((obj_t) BgL_cellz00_1623));
														BgL_arg1373z00_1626 =
															PROCEDURE_ENTRY(BgL_funz00_67) (BgL_funz00_67,
															BgL_arg1374z00_1627, BgL_arg1375z00_1628, BEOA);
													}
													BgL_arg1372z00_1625 =
														MAKE_YOUNG_PAIR(BgL_arg1373z00_1626,
														BgL_resz00_1619);
												}
												{
													obj_t BgL_resz00_5437;
													obj_t BgL_lstz00_5436;

													BgL_lstz00_5436 = BgL_arg1371z00_1624;
													BgL_resz00_5437 = BgL_arg1372z00_1625;
													BgL_resz00_1619 = BgL_resz00_5437;
													BgL_lstz00_1618 = BgL_lstz00_5436;
													goto BgL_zc3z04anonymousza31368ze3z87_1620;
												}
											}
										}
								}
							}
						else
							{	/* Llib/hash.scm 369 */
								return BgL_resz00_1613;
							}
					}
				}
			}
		}

	}



/* hashtable-for-each */
	BGL_EXPORTED_DEF obj_t BGl_hashtablezd2forzd2eachz00zz__hashz00(obj_t
		BgL_tablez00_68, obj_t BgL_funz00_69)
	{
		{	/* Llib/hash.scm 382 */
			{	/* Llib/hash.scm 383 */
				bool_t BgL_test2880z00_5438;

				if (
					(((long) 0) ==
						((long) CINT(STRUCT_REF(BgL_tablez00_68,
									(int) (((long) 5)))) & ((long) 3))))
					{	/* Llib/hash.scm 250 */
						BgL_test2880z00_5438 = ((bool_t) 0);
					}
				else
					{	/* Llib/hash.scm 250 */
						BgL_test2880z00_5438 = ((bool_t) 1);
					}
				if (BgL_test2880z00_5438)
					{	/* Llib/hash.scm 383 */
						return
							BGl_weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00
							(BgL_tablez00_68, BgL_funz00_69);
					}
				else
					{	/* Llib/hash.scm 383 */
						return
							BBOOL(BGl_plainzd2hashtablezd2forzd2eachzd2zz__hashz00
							(BgL_tablez00_68, BgL_funz00_69));
					}
			}
		}

	}



/* &hashtable-for-each */
	obj_t BGl_z62hashtablezd2forzd2eachz62zz__hashz00(obj_t BgL_envz00_4555,
		obj_t BgL_tablez00_4556, obj_t BgL_funz00_4557)
	{
		{	/* Llib/hash.scm 382 */
			{	/* Llib/hash.scm 383 */
				obj_t BgL_auxz00_5455;
				obj_t BgL_auxz00_5448;

				if (PROCEDUREP(BgL_funz00_4557))
					{	/* Llib/hash.scm 383 */
						BgL_auxz00_5455 = BgL_funz00_4557;
					}
				else
					{
						obj_t BgL_auxz00_5458;

						BgL_auxz00_5458 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__hashz00,
							BINT(((long) 14541)), BGl_string2680z00zz__hashz00,
							BGl_string2679z00zz__hashz00, BgL_funz00_4557);
						FAILURE(BgL_auxz00_5458, BFALSE, BFALSE);
					}
				if (STRUCTP(BgL_tablez00_4556))
					{	/* Llib/hash.scm 383 */
						BgL_auxz00_5448 = BgL_tablez00_4556;
					}
				else
					{
						obj_t BgL_auxz00_5451;

						BgL_auxz00_5451 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__hashz00,
							BINT(((long) 14541)), BGl_string2680z00zz__hashz00,
							BGl_string2672z00zz__hashz00, BgL_tablez00_4556);
						FAILURE(BgL_auxz00_5451, BFALSE, BFALSE);
					}
				return
					BGl_hashtablezd2forzd2eachz00zz__hashz00(BgL_auxz00_5448,
					BgL_auxz00_5455);
			}
		}

	}



/* plain-hashtable-for-each */
	bool_t BGl_plainzd2hashtablezd2forzd2eachzd2zz__hashz00(obj_t BgL_tablez00_70,
		obj_t BgL_funz00_71)
	{
		{	/* Llib/hash.scm 390 */
			{	/* Llib/hash.scm 391 */
				obj_t BgL_bucketsz00_1632;

				BgL_bucketsz00_1632 = STRUCT_REF(BgL_tablez00_70, (int) (((long) 2)));
				{	/* Llib/hash.scm 392 */

					{
						long BgL_iz00_1635;

						BgL_iz00_1635 = ((long) 0);
					BgL_zc3z04anonymousza31377ze3z87_1636:
						if ((BgL_iz00_1635 < VECTOR_LENGTH(((obj_t) BgL_bucketsz00_1632))))
							{	/* Llib/hash.scm 394 */
								{	/* Llib/hash.scm 396 */
									obj_t BgL_g1115z00_1638;

									BgL_g1115z00_1638 =
										VECTOR_REF(((obj_t) BgL_bucketsz00_1632), BgL_iz00_1635);
									{
										obj_t BgL_l1113z00_1640;

										BgL_l1113z00_1640 = BgL_g1115z00_1638;
									BgL_zc3z04anonymousza31379ze3z87_1641:
										if (PAIRP(BgL_l1113z00_1640))
											{	/* Llib/hash.scm 398 */
												{	/* Llib/hash.scm 397 */
													obj_t BgL_cellz00_1643;

													BgL_cellz00_1643 = CAR(BgL_l1113z00_1640);
													{	/* Llib/hash.scm 397 */
														obj_t BgL_arg1381z00_1644;
														obj_t BgL_arg1382z00_1645;

														BgL_arg1381z00_1644 =
															CAR(((obj_t) BgL_cellz00_1643));
														BgL_arg1382z00_1645 =
															CDR(((obj_t) BgL_cellz00_1643));
														PROCEDURE_ENTRY(BgL_funz00_71) (BgL_funz00_71,
															BgL_arg1381z00_1644, BgL_arg1382z00_1645, BEOA);
													}
												}
												{
													obj_t BgL_l1113z00_5483;

													BgL_l1113z00_5483 = CDR(BgL_l1113z00_1640);
													BgL_l1113z00_1640 = BgL_l1113z00_5483;
													goto BgL_zc3z04anonymousza31379ze3z87_1641;
												}
											}
										else
											{	/* Llib/hash.scm 398 */
												((bool_t) 1);
											}
									}
								}
								{
									long BgL_iz00_5485;

									BgL_iz00_5485 = (BgL_iz00_1635 + ((long) 1));
									BgL_iz00_1635 = BgL_iz00_5485;
									goto BgL_zc3z04anonymousza31377ze3z87_1636;
								}
							}
						else
							{	/* Llib/hash.scm 394 */
								return ((bool_t) 0);
							}
					}
				}
			}
		}

	}



/* hashtable-filter! */
	BGL_EXPORTED_DEF obj_t BGl_hashtablezd2filterz12zc0zz__hashz00(obj_t
		BgL_tablez00_72, obj_t BgL_funz00_73)
	{
		{	/* Llib/hash.scm 404 */
			{	/* Llib/hash.scm 405 */
				bool_t BgL_test2886z00_5487;

				if (
					(((long) 0) ==
						((long) CINT(STRUCT_REF(BgL_tablez00_72,
									(int) (((long) 5)))) & ((long) 3))))
					{	/* Llib/hash.scm 250 */
						BgL_test2886z00_5487 = ((bool_t) 0);
					}
				else
					{	/* Llib/hash.scm 250 */
						BgL_test2886z00_5487 = ((bool_t) 1);
					}
				if (BgL_test2886z00_5487)
					{	/* Llib/hash.scm 405 */
						return
							BGl_weakzd2hashtablezd2filterz12z12zz__weakhashz00
							(BgL_tablez00_72, BgL_funz00_73);
					}
				else
					{	/* Llib/hash.scm 405 */
						return
							BGl_plainzd2hashtablezd2filterz12z12zz__hashz00(BgL_tablez00_72,
							BgL_funz00_73);
					}
			}
		}

	}



/* &hashtable-filter! */
	obj_t BGl_z62hashtablezd2filterz12za2zz__hashz00(obj_t BgL_envz00_4558,
		obj_t BgL_tablez00_4559, obj_t BgL_funz00_4560)
	{
		{	/* Llib/hash.scm 404 */
			{	/* Llib/hash.scm 405 */
				obj_t BgL_auxz00_5503;
				obj_t BgL_auxz00_5496;

				if (PROCEDUREP(BgL_funz00_4560))
					{	/* Llib/hash.scm 405 */
						BgL_auxz00_5503 = BgL_funz00_4560;
					}
				else
					{
						obj_t BgL_auxz00_5506;

						BgL_auxz00_5506 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__hashz00,
							BINT(((long) 15500)), BGl_string2681z00zz__hashz00,
							BGl_string2679z00zz__hashz00, BgL_funz00_4560);
						FAILURE(BgL_auxz00_5506, BFALSE, BFALSE);
					}
				if (STRUCTP(BgL_tablez00_4559))
					{	/* Llib/hash.scm 405 */
						BgL_auxz00_5496 = BgL_tablez00_4559;
					}
				else
					{
						obj_t BgL_auxz00_5499;

						BgL_auxz00_5499 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__hashz00,
							BINT(((long) 15500)), BGl_string2681z00zz__hashz00,
							BGl_string2672z00zz__hashz00, BgL_tablez00_4559);
						FAILURE(BgL_auxz00_5499, BFALSE, BFALSE);
					}
				return
					BGl_hashtablezd2filterz12zc0zz__hashz00(BgL_auxz00_5496,
					BgL_auxz00_5503);
			}
		}

	}



/* plain-hashtable-filter! */
	obj_t BGl_plainzd2hashtablezd2filterz12z12zz__hashz00(obj_t BgL_tablez00_74,
		obj_t BgL_funz00_75)
	{
		{	/* Llib/hash.scm 412 */
			{	/* Llib/hash.scm 413 */
				obj_t BgL_bucketsz00_1651;

				BgL_bucketsz00_1651 = STRUCT_REF(BgL_tablez00_74, (int) (((long) 2)));
				{	/* Llib/hash.scm 414 */

					{
						long BgL_iz00_1654;
						long BgL_deltaz00_1655;

						BgL_iz00_1654 = ((long) 0);
						BgL_deltaz00_1655 = ((long) 0);
					BgL_zc3z04anonymousza31386ze3z87_1656:
						if ((BgL_iz00_1654 < VECTOR_LENGTH(((obj_t) BgL_bucketsz00_1651))))
							{	/* Llib/hash.scm 417 */
								obj_t BgL_lz00_1658;

								BgL_lz00_1658 =
									VECTOR_REF(((obj_t) BgL_bucketsz00_1651), BgL_iz00_1654);
								{	/* Llib/hash.scm 417 */
									long BgL_oldzd2lenzd2_1659;

									BgL_oldzd2lenzd2_1659 = bgl_list_length(BgL_lz00_1658);
									{	/* Llib/hash.scm 418 */
										obj_t BgL_newlz00_1660;

										{	/* Llib/hash.scm 420 */
											obj_t BgL_zc3z04anonymousza31392ze3z87_4561;

											BgL_zc3z04anonymousza31392ze3z87_4561 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31392ze3ze5zz__hashz00,
												(int) (((long) 1)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31392ze3z87_4561,
												(int) (((long) 0)), BgL_funz00_75);
											BgL_newlz00_1660 =
												BGl_filterz12z12zz__r4_control_features_6_9z00
												(BgL_zc3z04anonymousza31392ze3z87_4561, BgL_lz00_1658);
										}
										{	/* Llib/hash.scm 419 */
											long BgL_newzd2lenzd2_1661;

											BgL_newzd2lenzd2_1661 = bgl_list_length(BgL_newlz00_1660);
											{	/* Llib/hash.scm 422 */

												VECTOR_SET(
													((obj_t) BgL_bucketsz00_1651), BgL_iz00_1654,
													BgL_newlz00_1660);
												{
													long BgL_deltaz00_5531;
													long BgL_iz00_5529;

													BgL_iz00_5529 = (BgL_iz00_1654 + ((long) 1));
													BgL_deltaz00_5531 =
														(BgL_deltaz00_1655 +
														(BgL_newzd2lenzd2_1661 - BgL_oldzd2lenzd2_1659));
													BgL_deltaz00_1655 = BgL_deltaz00_5531;
													BgL_iz00_1654 = BgL_iz00_5529;
													goto BgL_zc3z04anonymousza31386ze3z87_1656;
												}
											}
										}
									}
								}
							}
						else
							{	/* Llib/hash.scm 426 */
								long BgL_arg1395z00_1671;

								BgL_arg1395z00_1671 =
									(BgL_deltaz00_1655 +
									(long) CINT(STRUCT_REF(BgL_tablez00_74, (int) (((long) 0)))));
								{	/* Llib/hash.scm 425 */
									obj_t BgL_xz00_4654;

									{	/* Llib/hash.scm 425 */
										obj_t BgL_auxz00_5540;
										int BgL_tmpz00_5538;

										BgL_auxz00_5540 = BINT(BgL_arg1395z00_1671);
										BgL_tmpz00_5538 = (int) (((long) 0));
										BgL_xz00_4654 =
											STRUCT_SET(BgL_tablez00_74, BgL_tmpz00_5538,
											BgL_auxz00_5540);
									}
									return BUNSPEC;
								}
							}
					}
				}
			}
		}

	}



/* &<@anonymous:1392> */
	obj_t BGl_z62zc3z04anonymousza31392ze3ze5zz__hashz00(obj_t BgL_envz00_4562,
		obj_t BgL_cellz00_4564)
	{
		{	/* Llib/hash.scm 419 */
			{	/* Llib/hash.scm 420 */
				obj_t BgL_funz00_4563;

				BgL_funz00_4563 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4562, (int) (((long) 0))));
				{	/* Llib/hash.scm 420 */
					obj_t BgL_arg1393z00_4693;
					obj_t BgL_arg1394z00_4694;

					BgL_arg1393z00_4693 = CAR(((obj_t) BgL_cellz00_4564));
					BgL_arg1394z00_4694 = CDR(((obj_t) BgL_cellz00_4564));
					return
						PROCEDURE_ENTRY(BgL_funz00_4563) (BgL_funz00_4563,
						BgL_arg1393z00_4693, BgL_arg1394z00_4694, BEOA);
				}
			}
		}

	}



/* hashtable-clear! */
	BGL_EXPORTED_DEF obj_t BGl_hashtablezd2clearz12zc0zz__hashz00(obj_t
		BgL_tablez00_76)
	{
		{	/* Llib/hash.scm 431 */
			{	/* Llib/hash.scm 432 */
				bool_t BgL_test2891z00_5555;

				if (
					(((long) 0) ==
						((long) CINT(STRUCT_REF(BgL_tablez00_76,
									(int) (((long) 5)))) & ((long) 3))))
					{	/* Llib/hash.scm 250 */
						BgL_test2891z00_5555 = ((bool_t) 0);
					}
				else
					{	/* Llib/hash.scm 250 */
						BgL_test2891z00_5555 = ((bool_t) 1);
					}
				if (BgL_test2891z00_5555)
					{	/* Llib/hash.scm 432 */
						return
							BGl_weakzd2hashtablezd2clearz12z12zz__weakhashz00
							(BgL_tablez00_76);
					}
				else
					{	/* Llib/hash.scm 432 */
						return
							BGl_plainzd2hashtablezd2clearz12z12zz__hashz00(BgL_tablez00_76);
					}
			}
		}

	}



/* &hashtable-clear! */
	obj_t BGl_z62hashtablezd2clearz12za2zz__hashz00(obj_t BgL_envz00_4565,
		obj_t BgL_tablez00_4566)
	{
		{	/* Llib/hash.scm 431 */
			{	/* Llib/hash.scm 432 */
				obj_t BgL_auxz00_5564;

				if (STRUCTP(BgL_tablez00_4566))
					{	/* Llib/hash.scm 432 */
						BgL_auxz00_5564 = BgL_tablez00_4566;
					}
				else
					{
						obj_t BgL_auxz00_5567;

						BgL_auxz00_5567 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__hashz00,
							BINT(((long) 16719)), BGl_string2682z00zz__hashz00,
							BGl_string2672z00zz__hashz00, BgL_tablez00_4566);
						FAILURE(BgL_auxz00_5567, BFALSE, BFALSE);
					}
				return BGl_hashtablezd2clearz12zc0zz__hashz00(BgL_auxz00_5564);
			}
		}

	}



/* plain-hashtable-clear! */
	obj_t BGl_plainzd2hashtablezd2clearz12z12zz__hashz00(obj_t BgL_tablez00_77)
	{
		{	/* Llib/hash.scm 439 */
			{	/* Llib/hash.scm 440 */
				obj_t BgL_bucketsz00_1675;

				BgL_bucketsz00_1675 = STRUCT_REF(BgL_tablez00_77, (int) (((long) 2)));
				{	/* Llib/hash.scm 441 */

					{
						long BgL_iz00_3155;

						BgL_iz00_3155 = ((long) 0);
					BgL_loopz00_3154:
						if ((BgL_iz00_3155 < VECTOR_LENGTH(((obj_t) BgL_bucketsz00_1675))))
							{	/* Llib/hash.scm 443 */
								VECTOR_SET(((obj_t) BgL_bucketsz00_1675), BgL_iz00_3155, BNIL);
								{
									long BgL_iz00_5580;

									BgL_iz00_5580 = (BgL_iz00_3155 + ((long) 1));
									BgL_iz00_3155 = BgL_iz00_5580;
									goto BgL_loopz00_3154;
								}
							}
						else
							{	/* Llib/hash.scm 447 */
								obj_t BgL_xz00_4657;

								{	/* Llib/hash.scm 447 */
									obj_t BgL_auxz00_5584;
									int BgL_tmpz00_5582;

									BgL_auxz00_5584 = BINT(((long) 0));
									BgL_tmpz00_5582 = (int) (((long) 0));
									BgL_xz00_4657 =
										STRUCT_SET(BgL_tablez00_77, BgL_tmpz00_5582,
										BgL_auxz00_5584);
								}
								return BUNSPEC;
							}
					}
				}
			}
		}

	}



/* hashtable-contains? */
	BGL_EXPORTED_DEF bool_t BGl_hashtablezd2containszf3z21zz__hashz00(obj_t
		BgL_tablez00_78, obj_t BgL_keyz00_79)
	{
		{	/* Llib/hash.scm 452 */
			{	/* Llib/hash.scm 453 */
				bool_t BgL_test2895z00_5587;

				if (
					(((long) 0) ==
						((long) CINT(STRUCT_REF(BgL_tablez00_78,
									(int) (((long) 5)))) & ((long) 3))))
					{	/* Llib/hash.scm 250 */
						BgL_test2895z00_5587 = ((bool_t) 0);
					}
				else
					{	/* Llib/hash.scm 250 */
						BgL_test2895z00_5587 = ((bool_t) 1);
					}
				if (BgL_test2895z00_5587)
					{	/* Llib/hash.scm 453 */
						return
							BGl_weakzd2hashtablezd2containszf3zf3zz__weakhashz00
							(BgL_tablez00_78, BgL_keyz00_79);
					}
				else
					{	/* Llib/hash.scm 453 */
						return
							BGl_plainzd2hashtablezd2containszf3zf3zz__hashz00(BgL_tablez00_78,
							BgL_keyz00_79);
					}
			}
		}

	}



/* &hashtable-contains? */
	obj_t BGl_z62hashtablezd2containszf3z43zz__hashz00(obj_t BgL_envz00_4567,
		obj_t BgL_tablez00_4568, obj_t BgL_keyz00_4569)
	{
		{	/* Llib/hash.scm 452 */
			{	/* Llib/hash.scm 453 */
				bool_t BgL_tmpz00_5596;

				{	/* Llib/hash.scm 453 */
					obj_t BgL_auxz00_5597;

					if (STRUCTP(BgL_tablez00_4568))
						{	/* Llib/hash.scm 453 */
							BgL_auxz00_5597 = BgL_tablez00_4568;
						}
					else
						{
							obj_t BgL_auxz00_5600;

							BgL_auxz00_5600 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__hashz00,
								BINT(((long) 17626)), BGl_string2683z00zz__hashz00,
								BGl_string2672z00zz__hashz00, BgL_tablez00_4568);
							FAILURE(BgL_auxz00_5600, BFALSE, BFALSE);
						}
					BgL_tmpz00_5596 =
						BGl_hashtablezd2containszf3z21zz__hashz00(BgL_auxz00_5597,
						BgL_keyz00_4569);
				}
				return BBOOL(BgL_tmpz00_5596);
			}
		}

	}



/* plain-hashtable-contains? */
	bool_t BGl_plainzd2hashtablezd2containszf3zf3zz__hashz00(obj_t
		BgL_tablez00_80, obj_t BgL_keyz00_81)
	{
		{	/* Llib/hash.scm 460 */
			{	/* Llib/hash.scm 461 */
				obj_t BgL_bucketsz00_1684;

				BgL_bucketsz00_1684 = STRUCT_REF(BgL_tablez00_80, (int) (((long) 2)));
				{	/* Llib/hash.scm 462 */
					long BgL_bucketzd2numzd2_1686;

					{	/* Llib/hash.scm 463 */
						long BgL_arg1409z00_1697;

						{	/* Llib/hash.scm 463 */
							long BgL_res2154z00_3191;

							{	/* Llib/hash.scm 463 */
								obj_t BgL_hashnz00_3179;

								BgL_hashnz00_3179 =
									STRUCT_REF(BgL_tablez00_80, (int) (((long) 4)));
								if (PROCEDUREP(BgL_hashnz00_3179))
									{	/* Llib/hash.scm 463 */
										obj_t BgL_arg1247z00_3181;

										BgL_arg1247z00_3181 =
											PROCEDURE_ENTRY(BgL_hashnz00_3179) (BgL_hashnz00_3179,
											BgL_keyz00_81, BEOA);
										{	/* Llib/hash.scm 463 */
											long BgL_nz00_3184;

											BgL_nz00_3184 = (long) CINT(BgL_arg1247z00_3181);
											if ((BgL_nz00_3184 < ((long) 0)))
												{	/* Llib/hash.scm 463 */
													BgL_res2154z00_3191 = NEG(BgL_nz00_3184);
												}
											else
												{	/* Llib/hash.scm 463 */
													BgL_res2154z00_3191 = BgL_nz00_3184;
												}
										}
									}
								else
									{	/* Llib/hash.scm 463 */
										BgL_res2154z00_3191 =
											BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_81);
									}
							}
							BgL_arg1409z00_1697 = BgL_res2154z00_3191;
						}
						{	/* Llib/hash.scm 463 */
							long BgL_res2160z00_3210;

							{	/* Llib/hash.scm 463 */
								long BgL_n1z00_3192;
								long BgL_n2z00_3193;

								BgL_n1z00_3192 = BgL_arg1409z00_1697;
								BgL_n2z00_3193 = VECTOR_LENGTH(((obj_t) BgL_bucketsz00_1684));
								{	/* Llib/hash.scm 463 */
									bool_t BgL_test2900z00_5623;

									{	/* Llib/hash.scm 463 */
										long BgL_arg1818z00_3195;

										BgL_arg1818z00_3195 =
											(((BgL_n1z00_3192) | (BgL_n2z00_3193)) & -2147483648);
										BgL_test2900z00_5623 = (BgL_arg1818z00_3195 == ((long) 0));
									}
									if (BgL_test2900z00_5623)
										{	/* Llib/hash.scm 463 */
											int32_t BgL_arg1815z00_3196;

											{	/* Llib/hash.scm 463 */
												int32_t BgL_arg1816z00_3197;
												int32_t BgL_arg1817z00_3198;

												{	/* Llib/hash.scm 463 */
													int32_t BgL_res2156z00_3202;

													BgL_res2156z00_3202 = (int32_t) (BgL_n1z00_3192);
													BgL_arg1816z00_3197 = BgL_res2156z00_3202;
												}
												{	/* Llib/hash.scm 463 */
													int32_t BgL_res2157z00_3204;

													BgL_res2157z00_3204 = (int32_t) (BgL_n2z00_3193);
													BgL_arg1817z00_3198 = BgL_res2157z00_3204;
												}
												BgL_arg1815z00_3196 =
													(BgL_arg1816z00_3197 % BgL_arg1817z00_3198);
											}
											{	/* Llib/hash.scm 463 */
												long BgL_res2159z00_3209;

												{	/* Llib/hash.scm 463 */
													long BgL_arg1925z00_3206;

													BgL_arg1925z00_3206 = (long) (BgL_arg1815z00_3196);
													{	/* Llib/hash.scm 463 */
														long BgL_res2158z00_3208;

														BgL_res2158z00_3208 = (long) (BgL_arg1925z00_3206);
														BgL_res2159z00_3209 = BgL_res2158z00_3208;
												}}
												BgL_res2160z00_3210 = BgL_res2159z00_3209;
										}}
									else
										{	/* Llib/hash.scm 463 */
											BgL_res2160z00_3210 = (BgL_n1z00_3192 % BgL_n2z00_3193);
										}
								}
							}
							BgL_bucketzd2numzd2_1686 = BgL_res2160z00_3210;
						}
					}
					{	/* Llib/hash.scm 463 */
						obj_t BgL_bucketz00_1687;

						BgL_bucketz00_1687 =
							VECTOR_REF(
							((obj_t) BgL_bucketsz00_1684), BgL_bucketzd2numzd2_1686);
						{	/* Llib/hash.scm 464 */

							{
								obj_t BgL_bucketz00_1689;

								BgL_bucketz00_1689 = BgL_bucketz00_1687;
							BgL_zc3z04anonymousza31402ze3z87_1690:
								if (NULLP(BgL_bucketz00_1689))
									{	/* Llib/hash.scm 467 */
										return ((bool_t) 0);
									}
								else
									{	/* Llib/hash.scm 469 */
										bool_t BgL_test2902z00_5636;

										{	/* Llib/hash.scm 469 */
											obj_t BgL_arg1407z00_1695;

											{	/* Llib/hash.scm 469 */
												obj_t BgL_pairz00_3217;

												BgL_pairz00_3217 = CAR(((obj_t) BgL_bucketz00_1689));
												BgL_arg1407z00_1695 = CAR(BgL_pairz00_3217);
											}
											{	/* Llib/hash.scm 469 */
												obj_t BgL_eqtz00_3218;

												BgL_eqtz00_3218 =
													STRUCT_REF(BgL_tablez00_80, (int) (((long) 3)));
												if (PROCEDUREP(BgL_eqtz00_3218))
													{	/* Llib/hash.scm 469 */
														BgL_test2902z00_5636 =
															CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_3218)
															(BgL_eqtz00_3218, BgL_arg1407z00_1695,
																BgL_keyz00_81, BEOA));
													}
												else
													{	/* Llib/hash.scm 469 */
														if ((BgL_arg1407z00_1695 == BgL_keyz00_81))
															{	/* Llib/hash.scm 469 */
																BgL_test2902z00_5636 = ((bool_t) 1);
															}
														else
															{	/* Llib/hash.scm 469 */
																if (STRINGP(BgL_arg1407z00_1695))
																	{	/* Llib/hash.scm 469 */
																		if (STRINGP(BgL_keyz00_81))
																			{	/* Llib/hash.scm 469 */
																				bool_t BgL_res2169z00_3242;

																				{	/* Llib/hash.scm 469 */
																					long BgL_l1z00_3229;

																					BgL_l1z00_3229 =
																						STRING_LENGTH(BgL_arg1407z00_1695);
																					if (
																						(BgL_l1z00_3229 ==
																							STRING_LENGTH(BgL_keyz00_81)))
																						{	/* Llib/hash.scm 469 */
																							int BgL_arg1700z00_3232;

																							{	/* Llib/hash.scm 469 */
																								char *BgL_auxz00_5662;
																								char *BgL_tmpz00_5660;

																								BgL_auxz00_5662 =
																									BSTRING_TO_STRING
																									(BgL_keyz00_81);
																								BgL_tmpz00_5660 =
																									BSTRING_TO_STRING
																									(BgL_arg1407z00_1695);
																								BgL_arg1700z00_3232 =
																									memcmp(BgL_tmpz00_5660,
																									BgL_auxz00_5662,
																									BgL_l1z00_3229);
																							}
																							BgL_res2169z00_3242 =
																								(
																								(long) (BgL_arg1700z00_3232) ==
																								((long) 0));
																						}
																					else
																						{	/* Llib/hash.scm 469 */
																							BgL_res2169z00_3242 =
																								((bool_t) 0);
																						}
																				}
																				BgL_test2902z00_5636 =
																					BgL_res2169z00_3242;
																			}
																		else
																			{	/* Llib/hash.scm 469 */
																				BgL_test2902z00_5636 = ((bool_t) 0);
																			}
																	}
																else
																	{	/* Llib/hash.scm 469 */
																		BgL_test2902z00_5636 = ((bool_t) 0);
																	}
															}
													}
											}
										}
										if (BgL_test2902z00_5636)
											{	/* Llib/hash.scm 469 */
												return ((bool_t) 1);
											}
										else
											{	/* Llib/hash.scm 472 */
												obj_t BgL_arg1406z00_1694;

												BgL_arg1406z00_1694 = CDR(((obj_t) BgL_bucketz00_1689));
												{
													obj_t BgL_bucketz00_5669;

													BgL_bucketz00_5669 = BgL_arg1406z00_1694;
													BgL_bucketz00_1689 = BgL_bucketz00_5669;
													goto BgL_zc3z04anonymousza31402ze3z87_1690;
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



/* hashtable-get */
	BGL_EXPORTED_DEF obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t
		BgL_tablez00_82, obj_t BgL_keyz00_83)
	{
		{	/* Llib/hash.scm 477 */
			{	/* Llib/hash.scm 479 */
				bool_t BgL_test2908z00_5670;

				if (
					(((long) 0) ==
						((long) CINT(STRUCT_REF(BgL_tablez00_82,
									(int) (((long) 5)))) & ((long) 3))))
					{	/* Llib/hash.scm 250 */
						BgL_test2908z00_5670 = ((bool_t) 0);
					}
				else
					{	/* Llib/hash.scm 250 */
						BgL_test2908z00_5670 = ((bool_t) 1);
					}
				if (BgL_test2908z00_5670)
					{	/* Llib/hash.scm 479 */
						return
							BGl_weakzd2hashtablezd2getz00zz__weakhashz00(BgL_tablez00_82,
							BgL_keyz00_83);
					}
				else
					{	/* Llib/hash.scm 479 */
						if (
							((long) CINT(STRUCT_REF(BgL_tablez00_82,
										(int) (((long) 5)))) == ((long) 4)))
							{	/* Llib/hash.scm 480 */
								return
									BGl_stringzd2hashtablezd2getz00zz__hashz00(BgL_tablez00_82,
									BgL_keyz00_83);
							}
						else
							{	/* Llib/hash.scm 480 */
								return
									BGl_plainzd2hashtablezd2getz00zz__hashz00(BgL_tablez00_82,
									BgL_keyz00_83);
							}
					}
			}
		}

	}



/* &hashtable-get */
	obj_t BGl_z62hashtablezd2getzb0zz__hashz00(obj_t BgL_envz00_4570,
		obj_t BgL_tablez00_4571, obj_t BgL_keyz00_4572)
	{
		{	/* Llib/hash.scm 477 */
			{	/* Llib/hash.scm 479 */
				obj_t BgL_auxz00_5685;

				if (STRUCTP(BgL_tablez00_4571))
					{	/* Llib/hash.scm 479 */
						BgL_auxz00_5685 = BgL_tablez00_4571;
					}
				else
					{
						obj_t BgL_auxz00_5688;

						BgL_auxz00_5688 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__hashz00,
							BINT(((long) 18695)), BGl_string2684z00zz__hashz00,
							BGl_string2672z00zz__hashz00, BgL_tablez00_4571);
						FAILURE(BgL_auxz00_5688, BFALSE, BFALSE);
					}
				return
					BGl_hashtablezd2getzd2zz__hashz00(BgL_auxz00_5685, BgL_keyz00_4572);
			}
		}

	}



/* plain-hashtable-get */
	obj_t BGl_plainzd2hashtablezd2getz00zz__hashz00(obj_t BgL_tablez00_84,
		obj_t BgL_keyz00_85)
	{
		{	/* Llib/hash.scm 486 */
			{	/* Llib/hash.scm 487 */
				obj_t BgL_bucketsz00_1700;

				BgL_bucketsz00_1700 = STRUCT_REF(BgL_tablez00_84, (int) (((long) 2)));
				{	/* Llib/hash.scm 488 */
					long BgL_bucketzd2numzd2_1702;

					{	/* Llib/hash.scm 489 */
						long BgL_arg1418z00_1713;

						{	/* Llib/hash.scm 489 */
							long BgL_res2179z00_3276;

							{	/* Llib/hash.scm 489 */
								obj_t BgL_hashnz00_3264;

								BgL_hashnz00_3264 =
									STRUCT_REF(BgL_tablez00_84, (int) (((long) 4)));
								if (PROCEDUREP(BgL_hashnz00_3264))
									{	/* Llib/hash.scm 489 */
										obj_t BgL_arg1247z00_3266;

										BgL_arg1247z00_3266 =
											PROCEDURE_ENTRY(BgL_hashnz00_3264) (BgL_hashnz00_3264,
											BgL_keyz00_85, BEOA);
										{	/* Llib/hash.scm 489 */
											long BgL_nz00_3269;

											BgL_nz00_3269 = (long) CINT(BgL_arg1247z00_3266);
											if ((BgL_nz00_3269 < ((long) 0)))
												{	/* Llib/hash.scm 489 */
													BgL_res2179z00_3276 = NEG(BgL_nz00_3269);
												}
											else
												{	/* Llib/hash.scm 489 */
													BgL_res2179z00_3276 = BgL_nz00_3269;
												}
										}
									}
								else
									{	/* Llib/hash.scm 489 */
										BgL_res2179z00_3276 =
											BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_85);
									}
							}
							BgL_arg1418z00_1713 = BgL_res2179z00_3276;
						}
						{	/* Llib/hash.scm 489 */
							long BgL_res2185z00_3295;

							{	/* Llib/hash.scm 489 */
								long BgL_n1z00_3277;
								long BgL_n2z00_3278;

								BgL_n1z00_3277 = BgL_arg1418z00_1713;
								BgL_n2z00_3278 = VECTOR_LENGTH(((obj_t) BgL_bucketsz00_1700));
								{	/* Llib/hash.scm 489 */
									bool_t BgL_test2914z00_5710;

									{	/* Llib/hash.scm 489 */
										long BgL_arg1818z00_3280;

										BgL_arg1818z00_3280 =
											(((BgL_n1z00_3277) | (BgL_n2z00_3278)) & -2147483648);
										BgL_test2914z00_5710 = (BgL_arg1818z00_3280 == ((long) 0));
									}
									if (BgL_test2914z00_5710)
										{	/* Llib/hash.scm 489 */
											int32_t BgL_arg1815z00_3281;

											{	/* Llib/hash.scm 489 */
												int32_t BgL_arg1816z00_3282;
												int32_t BgL_arg1817z00_3283;

												{	/* Llib/hash.scm 489 */
													int32_t BgL_res2181z00_3287;

													BgL_res2181z00_3287 = (int32_t) (BgL_n1z00_3277);
													BgL_arg1816z00_3282 = BgL_res2181z00_3287;
												}
												{	/* Llib/hash.scm 489 */
													int32_t BgL_res2182z00_3289;

													BgL_res2182z00_3289 = (int32_t) (BgL_n2z00_3278);
													BgL_arg1817z00_3283 = BgL_res2182z00_3289;
												}
												BgL_arg1815z00_3281 =
													(BgL_arg1816z00_3282 % BgL_arg1817z00_3283);
											}
											{	/* Llib/hash.scm 489 */
												long BgL_res2184z00_3294;

												{	/* Llib/hash.scm 489 */
													long BgL_arg1925z00_3291;

													BgL_arg1925z00_3291 = (long) (BgL_arg1815z00_3281);
													{	/* Llib/hash.scm 489 */
														long BgL_res2183z00_3293;

														BgL_res2183z00_3293 = (long) (BgL_arg1925z00_3291);
														BgL_res2184z00_3294 = BgL_res2183z00_3293;
												}}
												BgL_res2185z00_3295 = BgL_res2184z00_3294;
										}}
									else
										{	/* Llib/hash.scm 489 */
											BgL_res2185z00_3295 = (BgL_n1z00_3277 % BgL_n2z00_3278);
										}
								}
							}
							BgL_bucketzd2numzd2_1702 = BgL_res2185z00_3295;
						}
					}
					{	/* Llib/hash.scm 489 */
						obj_t BgL_bucketz00_1703;

						BgL_bucketz00_1703 =
							VECTOR_REF(
							((obj_t) BgL_bucketsz00_1700), BgL_bucketzd2numzd2_1702);
						{	/* Llib/hash.scm 490 */

							{
								obj_t BgL_bucketz00_1705;

								BgL_bucketz00_1705 = BgL_bucketz00_1703;
							BgL_zc3z04anonymousza31412ze3z87_1706:
								if (NULLP(BgL_bucketz00_1705))
									{	/* Llib/hash.scm 493 */
										return BFALSE;
									}
								else
									{	/* Llib/hash.scm 495 */
										bool_t BgL_test2916z00_5723;

										{	/* Llib/hash.scm 495 */
											obj_t BgL_arg1417z00_1711;

											{	/* Llib/hash.scm 495 */
												obj_t BgL_pairz00_3302;

												BgL_pairz00_3302 = CAR(((obj_t) BgL_bucketz00_1705));
												BgL_arg1417z00_1711 = CAR(BgL_pairz00_3302);
											}
											{	/* Llib/hash.scm 495 */
												obj_t BgL_eqtz00_3303;

												BgL_eqtz00_3303 =
													STRUCT_REF(BgL_tablez00_84, (int) (((long) 3)));
												if (PROCEDUREP(BgL_eqtz00_3303))
													{	/* Llib/hash.scm 495 */
														BgL_test2916z00_5723 =
															CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_3303)
															(BgL_eqtz00_3303, BgL_arg1417z00_1711,
																BgL_keyz00_85, BEOA));
													}
												else
													{	/* Llib/hash.scm 495 */
														if ((BgL_arg1417z00_1711 == BgL_keyz00_85))
															{	/* Llib/hash.scm 495 */
																BgL_test2916z00_5723 = ((bool_t) 1);
															}
														else
															{	/* Llib/hash.scm 495 */
																if (STRINGP(BgL_arg1417z00_1711))
																	{	/* Llib/hash.scm 495 */
																		if (STRINGP(BgL_keyz00_85))
																			{	/* Llib/hash.scm 495 */
																				bool_t BgL_res2194z00_3327;

																				{	/* Llib/hash.scm 495 */
																					long BgL_l1z00_3314;

																					BgL_l1z00_3314 =
																						STRING_LENGTH(BgL_arg1417z00_1711);
																					if (
																						(BgL_l1z00_3314 ==
																							STRING_LENGTH(BgL_keyz00_85)))
																						{	/* Llib/hash.scm 495 */
																							int BgL_arg1700z00_3317;

																							{	/* Llib/hash.scm 495 */
																								char *BgL_auxz00_5749;
																								char *BgL_tmpz00_5747;

																								BgL_auxz00_5749 =
																									BSTRING_TO_STRING
																									(BgL_keyz00_85);
																								BgL_tmpz00_5747 =
																									BSTRING_TO_STRING
																									(BgL_arg1417z00_1711);
																								BgL_arg1700z00_3317 =
																									memcmp(BgL_tmpz00_5747,
																									BgL_auxz00_5749,
																									BgL_l1z00_3314);
																							}
																							BgL_res2194z00_3327 =
																								(
																								(long) (BgL_arg1700z00_3317) ==
																								((long) 0));
																						}
																					else
																						{	/* Llib/hash.scm 495 */
																							BgL_res2194z00_3327 =
																								((bool_t) 0);
																						}
																				}
																				BgL_test2916z00_5723 =
																					BgL_res2194z00_3327;
																			}
																		else
																			{	/* Llib/hash.scm 495 */
																				BgL_test2916z00_5723 = ((bool_t) 0);
																			}
																	}
																else
																	{	/* Llib/hash.scm 495 */
																		BgL_test2916z00_5723 = ((bool_t) 0);
																	}
															}
													}
											}
										}
										if (BgL_test2916z00_5723)
											{	/* Llib/hash.scm 496 */
												obj_t BgL_pairz00_3331;

												BgL_pairz00_3331 = CAR(((obj_t) BgL_bucketz00_1705));
												return CDR(BgL_pairz00_3331);
											}
										else
											{	/* Llib/hash.scm 498 */
												obj_t BgL_arg1416z00_1710;

												BgL_arg1416z00_1710 = CDR(((obj_t) BgL_bucketz00_1705));
												{
													obj_t BgL_bucketz00_5759;

													BgL_bucketz00_5759 = BgL_arg1416z00_1710;
													BgL_bucketz00_1705 = BgL_bucketz00_5759;
													goto BgL_zc3z04anonymousza31412ze3z87_1706;
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



/* string-hashtable-get */
	obj_t BGl_stringzd2hashtablezd2getz00zz__hashz00(obj_t BgL_tablez00_86,
		obj_t BgL_keyz00_87)
	{
		{	/* Llib/hash.scm 503 */
			{	/* Llib/hash.scm 504 */
				obj_t BgL_bucketsz00_1714;

				BgL_bucketsz00_1714 = STRUCT_REF(BgL_tablez00_86, (int) (((long) 2)));
				{	/* Llib/hash.scm 505 */
					long BgL_bucketzd2numzd2_1716;

					{	/* Llib/hash.scm 506 */
						long BgL_arg1426z00_1727;

						{	/* Llib/hash.scm 506 */
							long BgL_arg1427z00_1728;

							BgL_arg1427z00_1728 = STRING_LENGTH(((obj_t) BgL_keyz00_87));
							BgL_arg1426z00_1727 =
								bgl_string_hash(BSTRING_TO_STRING(BgL_keyz00_87),
								(int) (((long) 0)), (int) (BgL_arg1427z00_1728));
						}
						{	/* Llib/hash.scm 506 */
							long BgL_res2201z00_3355;

							{	/* Llib/hash.scm 506 */
								long BgL_n1z00_3337;
								long BgL_n2z00_3338;

								BgL_n1z00_3337 = BgL_arg1426z00_1727;
								BgL_n2z00_3338 = VECTOR_LENGTH(((obj_t) BgL_bucketsz00_1714));
								{	/* Llib/hash.scm 506 */
									bool_t BgL_test2922z00_5770;

									{	/* Llib/hash.scm 506 */
										long BgL_arg1818z00_3340;

										BgL_arg1818z00_3340 =
											(((BgL_n1z00_3337) | (BgL_n2z00_3338)) & -2147483648);
										BgL_test2922z00_5770 = (BgL_arg1818z00_3340 == ((long) 0));
									}
									if (BgL_test2922z00_5770)
										{	/* Llib/hash.scm 506 */
											int32_t BgL_arg1815z00_3341;

											{	/* Llib/hash.scm 506 */
												int32_t BgL_arg1816z00_3342;
												int32_t BgL_arg1817z00_3343;

												{	/* Llib/hash.scm 506 */
													int32_t BgL_res2197z00_3347;

													BgL_res2197z00_3347 = (int32_t) (BgL_n1z00_3337);
													BgL_arg1816z00_3342 = BgL_res2197z00_3347;
												}
												{	/* Llib/hash.scm 506 */
													int32_t BgL_res2198z00_3349;

													BgL_res2198z00_3349 = (int32_t) (BgL_n2z00_3338);
													BgL_arg1817z00_3343 = BgL_res2198z00_3349;
												}
												BgL_arg1815z00_3341 =
													(BgL_arg1816z00_3342 % BgL_arg1817z00_3343);
											}
											{	/* Llib/hash.scm 506 */
												long BgL_res2200z00_3354;

												{	/* Llib/hash.scm 506 */
													long BgL_arg1925z00_3351;

													BgL_arg1925z00_3351 = (long) (BgL_arg1815z00_3341);
													{	/* Llib/hash.scm 506 */
														long BgL_res2199z00_3353;

														BgL_res2199z00_3353 = (long) (BgL_arg1925z00_3351);
														BgL_res2200z00_3354 = BgL_res2199z00_3353;
												}}
												BgL_res2201z00_3355 = BgL_res2200z00_3354;
										}}
									else
										{	/* Llib/hash.scm 506 */
											BgL_res2201z00_3355 = (BgL_n1z00_3337 % BgL_n2z00_3338);
										}
								}
							}
							BgL_bucketzd2numzd2_1716 = BgL_res2201z00_3355;
						}
					}
					{	/* Llib/hash.scm 506 */
						obj_t BgL_bucketz00_1717;

						BgL_bucketz00_1717 =
							VECTOR_REF(
							((obj_t) BgL_bucketsz00_1714), BgL_bucketzd2numzd2_1716);
						{	/* Llib/hash.scm 507 */

							{
								obj_t BgL_bucketz00_1719;

								BgL_bucketz00_1719 = BgL_bucketz00_1717;
							BgL_zc3z04anonymousza31419ze3z87_1720:
								if (NULLP(BgL_bucketz00_1719))
									{	/* Llib/hash.scm 510 */
										return BFALSE;
									}
								else
									{	/* Llib/hash.scm 512 */
										bool_t BgL_test2924z00_5783;

										{	/* Llib/hash.scm 512 */
											obj_t BgL_arg1425z00_1725;

											{	/* Llib/hash.scm 512 */
												obj_t BgL_pairz00_3362;

												BgL_pairz00_3362 = CAR(((obj_t) BgL_bucketz00_1719));
												BgL_arg1425z00_1725 = CAR(BgL_pairz00_3362);
											}
											{	/* Llib/hash.scm 512 */
												bool_t BgL_res2207z00_3378;

												{	/* Llib/hash.scm 512 */
													long BgL_l1z00_3365;

													BgL_l1z00_3365 =
														STRING_LENGTH(((obj_t) BgL_arg1425z00_1725));
													if (
														(BgL_l1z00_3365 ==
															STRING_LENGTH(((obj_t) BgL_keyz00_87))))
														{	/* Llib/hash.scm 512 */
															int BgL_arg1700z00_3368;

															{	/* Llib/hash.scm 512 */
																char *BgL_auxz00_5796;
																char *BgL_tmpz00_5793;

																BgL_auxz00_5796 =
																	BSTRING_TO_STRING(((obj_t) BgL_keyz00_87));
																BgL_tmpz00_5793 =
																	BSTRING_TO_STRING(
																	((obj_t) BgL_arg1425z00_1725));
																BgL_arg1700z00_3368 =
																	memcmp(BgL_tmpz00_5793, BgL_auxz00_5796,
																	BgL_l1z00_3365);
															}
															BgL_res2207z00_3378 =
																((long) (BgL_arg1700z00_3368) == ((long) 0));
														}
													else
														{	/* Llib/hash.scm 512 */
															BgL_res2207z00_3378 = ((bool_t) 0);
														}
												}
												BgL_test2924z00_5783 = BgL_res2207z00_3378;
											}
										}
										if (BgL_test2924z00_5783)
											{	/* Llib/hash.scm 513 */
												obj_t BgL_pairz00_3382;

												BgL_pairz00_3382 = CAR(((obj_t) BgL_bucketz00_1719));
												return CDR(BgL_pairz00_3382);
											}
										else
											{	/* Llib/hash.scm 515 */
												obj_t BgL_arg1424z00_1724;

												BgL_arg1424z00_1724 = CDR(((obj_t) BgL_bucketz00_1719));
												{
													obj_t BgL_bucketz00_5807;

													BgL_bucketz00_5807 = BgL_arg1424z00_1724;
													BgL_bucketz00_1719 = BgL_bucketz00_5807;
													goto BgL_zc3z04anonymousza31419ze3z87_1720;
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



/* hashtable-put! */
	BGL_EXPORTED_DEF obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t
		BgL_tablez00_88, obj_t BgL_keyz00_89, obj_t BgL_objz00_90)
	{
		{	/* Llib/hash.scm 520 */
			{	/* Llib/hash.scm 521 */
				bool_t BgL_test2926z00_5808;

				if (
					(((long) 0) ==
						((long) CINT(STRUCT_REF(BgL_tablez00_88,
									(int) (((long) 5)))) & ((long) 3))))
					{	/* Llib/hash.scm 250 */
						BgL_test2926z00_5808 = ((bool_t) 0);
					}
				else
					{	/* Llib/hash.scm 250 */
						BgL_test2926z00_5808 = ((bool_t) 1);
					}
				if (BgL_test2926z00_5808)
					{	/* Llib/hash.scm 521 */
						return
							BGl_weakzd2hashtablezd2putz12z12zz__weakhashz00(BgL_tablez00_88,
							BgL_keyz00_89, BgL_objz00_90);
					}
				else
					{	/* Llib/hash.scm 521 */
						return
							BGl_plainzd2hashtablezd2putz12z12zz__hashz00(BgL_tablez00_88,
							BgL_keyz00_89, BgL_objz00_90);
					}
			}
		}

	}



/* &hashtable-put! */
	obj_t BGl_z62hashtablezd2putz12za2zz__hashz00(obj_t BgL_envz00_4573,
		obj_t BgL_tablez00_4574, obj_t BgL_keyz00_4575, obj_t BgL_objz00_4576)
	{
		{	/* Llib/hash.scm 520 */
			{	/* Llib/hash.scm 521 */
				obj_t BgL_auxz00_5817;

				if (STRUCTP(BgL_tablez00_4574))
					{	/* Llib/hash.scm 521 */
						BgL_auxz00_5817 = BgL_tablez00_4574;
					}
				else
					{
						obj_t BgL_auxz00_5820;

						BgL_auxz00_5820 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__hashz00,
							BINT(((long) 20484)), BGl_string2685z00zz__hashz00,
							BGl_string2672z00zz__hashz00, BgL_tablez00_4574);
						FAILURE(BgL_auxz00_5820, BFALSE, BFALSE);
					}
				return
					BGl_hashtablezd2putz12zc0zz__hashz00(BgL_auxz00_5817, BgL_keyz00_4575,
					BgL_objz00_4576);
			}
		}

	}



/* plain-hashtable-put! */
	obj_t BGl_plainzd2hashtablezd2putz12z12zz__hashz00(obj_t BgL_tablez00_91,
		obj_t BgL_keyz00_92, obj_t BgL_objz00_93)
	{
		{	/* Llib/hash.scm 528 */
			{	/* Llib/hash.scm 529 */
				obj_t BgL_bucketsz00_1730;

				BgL_bucketsz00_1730 = STRUCT_REF(BgL_tablez00_91, (int) (((long) 2)));
				{	/* Llib/hash.scm 530 */
					long BgL_bucketzd2numzd2_1732;

					{	/* Llib/hash.scm 531 */
						long BgL_arg1449z00_1759;

						{	/* Llib/hash.scm 531 */
							long BgL_res2215z00_3409;

							{	/* Llib/hash.scm 531 */
								obj_t BgL_hashnz00_3397;

								BgL_hashnz00_3397 =
									STRUCT_REF(BgL_tablez00_91, (int) (((long) 4)));
								if (PROCEDUREP(BgL_hashnz00_3397))
									{	/* Llib/hash.scm 531 */
										obj_t BgL_arg1247z00_3399;

										BgL_arg1247z00_3399 =
											PROCEDURE_ENTRY(BgL_hashnz00_3397) (BgL_hashnz00_3397,
											BgL_keyz00_92, BEOA);
										{	/* Llib/hash.scm 531 */
											long BgL_nz00_3402;

											BgL_nz00_3402 = (long) CINT(BgL_arg1247z00_3399);
											if ((BgL_nz00_3402 < ((long) 0)))
												{	/* Llib/hash.scm 531 */
													BgL_res2215z00_3409 = NEG(BgL_nz00_3402);
												}
											else
												{	/* Llib/hash.scm 531 */
													BgL_res2215z00_3409 = BgL_nz00_3402;
												}
										}
									}
								else
									{	/* Llib/hash.scm 531 */
										BgL_res2215z00_3409 =
											BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_92);
									}
							}
							BgL_arg1449z00_1759 = BgL_res2215z00_3409;
						}
						{	/* Llib/hash.scm 531 */
							long BgL_res2221z00_3428;

							{	/* Llib/hash.scm 531 */
								long BgL_n1z00_3410;
								long BgL_n2z00_3411;

								BgL_n1z00_3410 = BgL_arg1449z00_1759;
								BgL_n2z00_3411 = VECTOR_LENGTH(((obj_t) BgL_bucketsz00_1730));
								{	/* Llib/hash.scm 531 */
									bool_t BgL_test2931z00_5842;

									{	/* Llib/hash.scm 531 */
										long BgL_arg1818z00_3413;

										BgL_arg1818z00_3413 =
											(((BgL_n1z00_3410) | (BgL_n2z00_3411)) & -2147483648);
										BgL_test2931z00_5842 = (BgL_arg1818z00_3413 == ((long) 0));
									}
									if (BgL_test2931z00_5842)
										{	/* Llib/hash.scm 531 */
											int32_t BgL_arg1815z00_3414;

											{	/* Llib/hash.scm 531 */
												int32_t BgL_arg1816z00_3415;
												int32_t BgL_arg1817z00_3416;

												{	/* Llib/hash.scm 531 */
													int32_t BgL_res2217z00_3420;

													BgL_res2217z00_3420 = (int32_t) (BgL_n1z00_3410);
													BgL_arg1816z00_3415 = BgL_res2217z00_3420;
												}
												{	/* Llib/hash.scm 531 */
													int32_t BgL_res2218z00_3422;

													BgL_res2218z00_3422 = (int32_t) (BgL_n2z00_3411);
													BgL_arg1817z00_3416 = BgL_res2218z00_3422;
												}
												BgL_arg1815z00_3414 =
													(BgL_arg1816z00_3415 % BgL_arg1817z00_3416);
											}
											{	/* Llib/hash.scm 531 */
												long BgL_res2220z00_3427;

												{	/* Llib/hash.scm 531 */
													long BgL_arg1925z00_3424;

													BgL_arg1925z00_3424 = (long) (BgL_arg1815z00_3414);
													{	/* Llib/hash.scm 531 */
														long BgL_res2219z00_3426;

														BgL_res2219z00_3426 = (long) (BgL_arg1925z00_3424);
														BgL_res2220z00_3427 = BgL_res2219z00_3426;
												}}
												BgL_res2221z00_3428 = BgL_res2220z00_3427;
										}}
									else
										{	/* Llib/hash.scm 531 */
											BgL_res2221z00_3428 = (BgL_n1z00_3410 % BgL_n2z00_3411);
										}
								}
							}
							BgL_bucketzd2numzd2_1732 = BgL_res2221z00_3428;
						}
					}
					{	/* Llib/hash.scm 531 */
						obj_t BgL_bucketz00_1733;

						BgL_bucketz00_1733 =
							VECTOR_REF(
							((obj_t) BgL_bucketsz00_1730), BgL_bucketzd2numzd2_1732);
						{	/* Llib/hash.scm 532 */
							obj_t BgL_maxzd2bucketzd2lenz00_1734;

							BgL_maxzd2bucketzd2lenz00_1734 =
								STRUCT_REF(BgL_tablez00_91, (int) (((long) 1)));
							{	/* Llib/hash.scm 533 */

								if (NULLP(BgL_bucketz00_1733))
									{	/* Llib/hash.scm 540 */
										{	/* Llib/hash.scm 542 */
											long BgL_arg1430z00_1736;

											BgL_arg1430z00_1736 =
												(
												(long) CINT(STRUCT_REF(BgL_tablez00_91,
														(int) (((long) 0)))) + ((long) 1));
											{	/* Llib/hash.scm 542 */
												obj_t BgL_auxz00_5863;
												int BgL_tmpz00_5861;

												BgL_auxz00_5863 = BINT(BgL_arg1430z00_1736);
												BgL_tmpz00_5861 = (int) (((long) 0));
												STRUCT_SET(BgL_tablez00_91, BgL_tmpz00_5861,
													BgL_auxz00_5863);
										}}
										{	/* Llib/hash.scm 543 */
											obj_t BgL_arg1432z00_1738;

											{	/* Llib/hash.scm 543 */
												obj_t BgL_arg1433z00_1739;

												BgL_arg1433z00_1739 =
													MAKE_YOUNG_PAIR(BgL_keyz00_92, BgL_objz00_93);
												{	/* Llib/hash.scm 543 */
													obj_t BgL_list1434z00_1740;

													BgL_list1434z00_1740 =
														MAKE_YOUNG_PAIR(BgL_arg1433z00_1739, BNIL);
													BgL_arg1432z00_1738 = BgL_list1434z00_1740;
											}}
											VECTOR_SET(
												((obj_t) BgL_bucketsz00_1730), BgL_bucketzd2numzd2_1732,
												BgL_arg1432z00_1738);
										}
										return BgL_objz00_93;
									}
								else
									{
										obj_t BgL_buckz00_1742;
										long BgL_countz00_1743;

										BgL_buckz00_1742 = BgL_bucketz00_1733;
										BgL_countz00_1743 = ((long) 0);
									BgL_zc3z04anonymousza31435ze3z87_1744:
										if (NULLP(BgL_buckz00_1742))
											{	/* Llib/hash.scm 548 */
												{	/* Llib/hash.scm 549 */
													long BgL_arg1437z00_1746;

													BgL_arg1437z00_1746 =
														(
														(long) CINT(STRUCT_REF(BgL_tablez00_91,
																(int) (((long) 0)))) + ((long) 1));
													{	/* Llib/hash.scm 549 */
														obj_t BgL_auxz00_5878;
														int BgL_tmpz00_5876;

														BgL_auxz00_5878 = BINT(BgL_arg1437z00_1746);
														BgL_tmpz00_5876 = (int) (((long) 0));
														STRUCT_SET(BgL_tablez00_91, BgL_tmpz00_5876,
															BgL_auxz00_5878);
												}}
												{	/* Llib/hash.scm 550 */
													obj_t BgL_arg1439z00_1748;

													{	/* Llib/hash.scm 550 */
														obj_t BgL_arg1440z00_1749;

														BgL_arg1440z00_1749 =
															MAKE_YOUNG_PAIR(BgL_keyz00_92, BgL_objz00_93);
														BgL_arg1439z00_1748 =
															MAKE_YOUNG_PAIR(BgL_arg1440z00_1749,
															BgL_bucketz00_1733);
													}
													VECTOR_SET(
														((obj_t) BgL_bucketsz00_1730),
														BgL_bucketzd2numzd2_1732, BgL_arg1439z00_1748);
												}
												if (
													(BgL_countz00_1743 >
														(long) CINT(BgL_maxzd2bucketzd2lenz00_1734)))
													{	/* Llib/hash.scm 551 */
														BGl_plainzd2hashtablezd2expandz12z12zz__hashz00
															(BgL_tablez00_91);
													}
												else
													{	/* Llib/hash.scm 551 */
														BFALSE;
													}
												return BgL_objz00_93;
											}
										else
											{	/* Llib/hash.scm 554 */
												bool_t BgL_test2935z00_5889;

												{	/* Llib/hash.scm 554 */
													obj_t BgL_arg1448z00_1757;

													{	/* Llib/hash.scm 554 */
														obj_t BgL_pairz00_3453;

														BgL_pairz00_3453 = CAR(((obj_t) BgL_buckz00_1742));
														BgL_arg1448z00_1757 = CAR(BgL_pairz00_3453);
													}
													{	/* Llib/hash.scm 554 */
														obj_t BgL_eqtz00_3454;

														BgL_eqtz00_3454 =
															STRUCT_REF(BgL_tablez00_91, (int) (((long) 3)));
														if (PROCEDUREP(BgL_eqtz00_3454))
															{	/* Llib/hash.scm 554 */
																BgL_test2935z00_5889 =
																	CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_3454)
																	(BgL_eqtz00_3454, BgL_arg1448z00_1757,
																		BgL_keyz00_92, BEOA));
															}
														else
															{	/* Llib/hash.scm 554 */
																if ((BgL_arg1448z00_1757 == BgL_keyz00_92))
																	{	/* Llib/hash.scm 554 */
																		BgL_test2935z00_5889 = ((bool_t) 1);
																	}
																else
																	{	/* Llib/hash.scm 554 */
																		if (STRINGP(BgL_arg1448z00_1757))
																			{	/* Llib/hash.scm 554 */
																				if (STRINGP(BgL_keyz00_92))
																					{	/* Llib/hash.scm 554 */
																						bool_t BgL_res2235z00_3478;

																						{	/* Llib/hash.scm 554 */
																							long BgL_l1z00_3465;

																							BgL_l1z00_3465 =
																								STRING_LENGTH
																								(BgL_arg1448z00_1757);
																							if ((BgL_l1z00_3465 ==
																									STRING_LENGTH(BgL_keyz00_92)))
																								{	/* Llib/hash.scm 554 */
																									int BgL_arg1700z00_3468;

																									{	/* Llib/hash.scm 554 */
																										char *BgL_auxz00_5915;
																										char *BgL_tmpz00_5913;

																										BgL_auxz00_5915 =
																											BSTRING_TO_STRING
																											(BgL_keyz00_92);
																										BgL_tmpz00_5913 =
																											BSTRING_TO_STRING
																											(BgL_arg1448z00_1757);
																										BgL_arg1700z00_3468 =
																											memcmp(BgL_tmpz00_5913,
																											BgL_auxz00_5915,
																											BgL_l1z00_3465);
																									}
																									BgL_res2235z00_3478 =
																										(
																										(long) (BgL_arg1700z00_3468)
																										== ((long) 0));
																								}
																							else
																								{	/* Llib/hash.scm 554 */
																									BgL_res2235z00_3478 =
																										((bool_t) 0);
																								}
																						}
																						BgL_test2935z00_5889 =
																							BgL_res2235z00_3478;
																					}
																				else
																					{	/* Llib/hash.scm 554 */
																						BgL_test2935z00_5889 = ((bool_t) 0);
																					}
																			}
																		else
																			{	/* Llib/hash.scm 554 */
																				BgL_test2935z00_5889 = ((bool_t) 0);
																			}
																	}
															}
													}
												}
												if (BgL_test2935z00_5889)
													{	/* Llib/hash.scm 555 */
														obj_t BgL_oldzd2objzd2_1753;

														{	/* Llib/hash.scm 555 */
															obj_t BgL_pairz00_3482;

															BgL_pairz00_3482 =
																CAR(((obj_t) BgL_buckz00_1742));
															BgL_oldzd2objzd2_1753 = CDR(BgL_pairz00_3482);
														}
														{	/* Llib/hash.scm 556 */
															obj_t BgL_arg1444z00_1754;

															BgL_arg1444z00_1754 =
																CAR(((obj_t) BgL_buckz00_1742));
															{	/* Llib/hash.scm 556 */
																obj_t BgL_tmpz00_5925;

																BgL_tmpz00_5925 = ((obj_t) BgL_arg1444z00_1754);
																SET_CDR(BgL_tmpz00_5925, BgL_objz00_93);
															}
														}
														return BgL_oldzd2objzd2_1753;
													}
												else
													{	/* Llib/hash.scm 559 */
														obj_t BgL_arg1445z00_1755;
														long BgL_arg1446z00_1756;

														BgL_arg1445z00_1755 =
															CDR(((obj_t) BgL_buckz00_1742));
														BgL_arg1446z00_1756 =
															(BgL_countz00_1743 + ((long) 1));
														{
															long BgL_countz00_5932;
															obj_t BgL_buckz00_5931;

															BgL_buckz00_5931 = BgL_arg1445z00_1755;
															BgL_countz00_5932 = BgL_arg1446z00_1756;
															BgL_countz00_1743 = BgL_countz00_5932;
															BgL_buckz00_1742 = BgL_buckz00_5931;
															goto BgL_zc3z04anonymousza31435ze3z87_1744;
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



/* hashtable-update! */
	BGL_EXPORTED_DEF obj_t BGl_hashtablezd2updatez12zc0zz__hashz00(obj_t
		BgL_tablez00_94, obj_t BgL_keyz00_95, obj_t BgL_procz00_96,
		obj_t BgL_objz00_97)
	{
		{	/* Llib/hash.scm 564 */
			{	/* Llib/hash.scm 565 */
				bool_t BgL_test2941z00_5933;

				if (
					(((long) 0) ==
						((long) CINT(STRUCT_REF(BgL_tablez00_94,
									(int) (((long) 5)))) & ((long) 3))))
					{	/* Llib/hash.scm 250 */
						BgL_test2941z00_5933 = ((bool_t) 0);
					}
				else
					{	/* Llib/hash.scm 250 */
						BgL_test2941z00_5933 = ((bool_t) 1);
					}
				if (BgL_test2941z00_5933)
					{	/* Llib/hash.scm 565 */
						return
							BGl_weakzd2hashtablezd2updatez12z12zz__weakhashz00
							(BgL_tablez00_94, BgL_keyz00_95, BgL_procz00_96, BgL_objz00_97);
					}
				else
					{	/* Llib/hash.scm 565 */
						return
							BGl_plainzd2hashtablezd2updatez12z12zz__hashz00(BgL_tablez00_94,
							BgL_keyz00_95, BgL_procz00_96, BgL_objz00_97);
					}
			}
		}

	}



/* &hashtable-update! */
	obj_t BGl_z62hashtablezd2updatez12za2zz__hashz00(obj_t BgL_envz00_4577,
		obj_t BgL_tablez00_4578, obj_t BgL_keyz00_4579, obj_t BgL_procz00_4580,
		obj_t BgL_objz00_4581)
	{
		{	/* Llib/hash.scm 564 */
			{	/* Llib/hash.scm 565 */
				obj_t BgL_auxz00_5949;
				obj_t BgL_auxz00_5942;

				if (PROCEDUREP(BgL_procz00_4580))
					{	/* Llib/hash.scm 565 */
						BgL_auxz00_5949 = BgL_procz00_4580;
					}
				else
					{
						obj_t BgL_auxz00_5952;

						BgL_auxz00_5952 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__hashz00,
							BINT(((long) 22263)), BGl_string2686z00zz__hashz00,
							BGl_string2679z00zz__hashz00, BgL_procz00_4580);
						FAILURE(BgL_auxz00_5952, BFALSE, BFALSE);
					}
				if (STRUCTP(BgL_tablez00_4578))
					{	/* Llib/hash.scm 565 */
						BgL_auxz00_5942 = BgL_tablez00_4578;
					}
				else
					{
						obj_t BgL_auxz00_5945;

						BgL_auxz00_5945 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__hashz00,
							BINT(((long) 22263)), BGl_string2686z00zz__hashz00,
							BGl_string2672z00zz__hashz00, BgL_tablez00_4578);
						FAILURE(BgL_auxz00_5945, BFALSE, BFALSE);
					}
				return
					BGl_hashtablezd2updatez12zc0zz__hashz00(BgL_auxz00_5942,
					BgL_keyz00_4579, BgL_auxz00_5949, BgL_objz00_4581);
			}
		}

	}



/* plain-hashtable-update! */
	obj_t BGl_plainzd2hashtablezd2updatez12z12zz__hashz00(obj_t BgL_tablez00_98,
		obj_t BgL_keyz00_99, obj_t BgL_procz00_100, obj_t BgL_objz00_101)
	{
		{	/* Llib/hash.scm 572 */
			{	/* Llib/hash.scm 573 */
				obj_t BgL_bucketsz00_1761;

				BgL_bucketsz00_1761 = STRUCT_REF(BgL_tablez00_98, (int) (((long) 2)));
				{	/* Llib/hash.scm 574 */
					long BgL_bucketzd2numzd2_1763;

					{	/* Llib/hash.scm 575 */
						long BgL_arg1471z00_1791;

						{	/* Llib/hash.scm 575 */
							long BgL_res2244z00_3513;

							{	/* Llib/hash.scm 575 */
								obj_t BgL_hashnz00_3501;

								BgL_hashnz00_3501 =
									STRUCT_REF(BgL_tablez00_98, (int) (((long) 4)));
								if (PROCEDUREP(BgL_hashnz00_3501))
									{	/* Llib/hash.scm 575 */
										obj_t BgL_arg1247z00_3503;

										BgL_arg1247z00_3503 =
											PROCEDURE_ENTRY(BgL_hashnz00_3501) (BgL_hashnz00_3501,
											BgL_keyz00_99, BEOA);
										{	/* Llib/hash.scm 575 */
											long BgL_nz00_3506;

											BgL_nz00_3506 = (long) CINT(BgL_arg1247z00_3503);
											if ((BgL_nz00_3506 < ((long) 0)))
												{	/* Llib/hash.scm 575 */
													BgL_res2244z00_3513 = NEG(BgL_nz00_3506);
												}
											else
												{	/* Llib/hash.scm 575 */
													BgL_res2244z00_3513 = BgL_nz00_3506;
												}
										}
									}
								else
									{	/* Llib/hash.scm 575 */
										BgL_res2244z00_3513 =
											BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_99);
									}
							}
							BgL_arg1471z00_1791 = BgL_res2244z00_3513;
						}
						{	/* Llib/hash.scm 575 */
							long BgL_res2250z00_3532;

							{	/* Llib/hash.scm 575 */
								long BgL_n1z00_3514;
								long BgL_n2z00_3515;

								BgL_n1z00_3514 = BgL_arg1471z00_1791;
								BgL_n2z00_3515 = VECTOR_LENGTH(((obj_t) BgL_bucketsz00_1761));
								{	/* Llib/hash.scm 575 */
									bool_t BgL_test2947z00_5974;

									{	/* Llib/hash.scm 575 */
										long BgL_arg1818z00_3517;

										BgL_arg1818z00_3517 =
											(((BgL_n1z00_3514) | (BgL_n2z00_3515)) & -2147483648);
										BgL_test2947z00_5974 = (BgL_arg1818z00_3517 == ((long) 0));
									}
									if (BgL_test2947z00_5974)
										{	/* Llib/hash.scm 575 */
											int32_t BgL_arg1815z00_3518;

											{	/* Llib/hash.scm 575 */
												int32_t BgL_arg1816z00_3519;
												int32_t BgL_arg1817z00_3520;

												{	/* Llib/hash.scm 575 */
													int32_t BgL_res2246z00_3524;

													BgL_res2246z00_3524 = (int32_t) (BgL_n1z00_3514);
													BgL_arg1816z00_3519 = BgL_res2246z00_3524;
												}
												{	/* Llib/hash.scm 575 */
													int32_t BgL_res2247z00_3526;

													BgL_res2247z00_3526 = (int32_t) (BgL_n2z00_3515);
													BgL_arg1817z00_3520 = BgL_res2247z00_3526;
												}
												BgL_arg1815z00_3518 =
													(BgL_arg1816z00_3519 % BgL_arg1817z00_3520);
											}
											{	/* Llib/hash.scm 575 */
												long BgL_res2249z00_3531;

												{	/* Llib/hash.scm 575 */
													long BgL_arg1925z00_3528;

													BgL_arg1925z00_3528 = (long) (BgL_arg1815z00_3518);
													{	/* Llib/hash.scm 575 */
														long BgL_res2248z00_3530;

														BgL_res2248z00_3530 = (long) (BgL_arg1925z00_3528);
														BgL_res2249z00_3531 = BgL_res2248z00_3530;
												}}
												BgL_res2250z00_3532 = BgL_res2249z00_3531;
										}}
									else
										{	/* Llib/hash.scm 575 */
											BgL_res2250z00_3532 = (BgL_n1z00_3514 % BgL_n2z00_3515);
										}
								}
							}
							BgL_bucketzd2numzd2_1763 = BgL_res2250z00_3532;
						}
					}
					{	/* Llib/hash.scm 575 */
						obj_t BgL_bucketz00_1764;

						BgL_bucketz00_1764 =
							VECTOR_REF(
							((obj_t) BgL_bucketsz00_1761), BgL_bucketzd2numzd2_1763);
						{	/* Llib/hash.scm 576 */
							obj_t BgL_maxzd2bucketzd2lenz00_1765;

							BgL_maxzd2bucketzd2lenz00_1765 =
								STRUCT_REF(BgL_tablez00_98, (int) (((long) 1)));
							{	/* Llib/hash.scm 577 */

								if (NULLP(BgL_bucketz00_1764))
									{	/* Llib/hash.scm 578 */
										{	/* Llib/hash.scm 580 */
											long BgL_arg1452z00_1767;

											BgL_arg1452z00_1767 =
												(
												(long) CINT(STRUCT_REF(BgL_tablez00_98,
														(int) (((long) 0)))) + ((long) 1));
											{	/* Llib/hash.scm 580 */
												obj_t BgL_auxz00_5995;
												int BgL_tmpz00_5993;

												BgL_auxz00_5995 = BINT(BgL_arg1452z00_1767);
												BgL_tmpz00_5993 = (int) (((long) 0));
												STRUCT_SET(BgL_tablez00_98, BgL_tmpz00_5993,
													BgL_auxz00_5995);
										}}
										{	/* Llib/hash.scm 581 */
											obj_t BgL_arg1454z00_1769;

											{	/* Llib/hash.scm 581 */
												obj_t BgL_arg1455z00_1770;

												BgL_arg1455z00_1770 =
													MAKE_YOUNG_PAIR(BgL_keyz00_99, BgL_objz00_101);
												{	/* Llib/hash.scm 581 */
													obj_t BgL_list1456z00_1771;

													BgL_list1456z00_1771 =
														MAKE_YOUNG_PAIR(BgL_arg1455z00_1770, BNIL);
													BgL_arg1454z00_1769 = BgL_list1456z00_1771;
											}}
											VECTOR_SET(
												((obj_t) BgL_bucketsz00_1761), BgL_bucketzd2numzd2_1763,
												BgL_arg1454z00_1769);
										}
										return BgL_objz00_101;
									}
								else
									{
										obj_t BgL_buckz00_1773;
										long BgL_countz00_1774;

										BgL_buckz00_1773 = BgL_bucketz00_1764;
										BgL_countz00_1774 = ((long) 0);
									BgL_zc3z04anonymousza31457ze3z87_1775:
										if (NULLP(BgL_buckz00_1773))
											{	/* Llib/hash.scm 586 */
												{	/* Llib/hash.scm 587 */
													long BgL_arg1459z00_1777;

													BgL_arg1459z00_1777 =
														(
														(long) CINT(STRUCT_REF(BgL_tablez00_98,
																(int) (((long) 0)))) + ((long) 1));
													{	/* Llib/hash.scm 587 */
														obj_t BgL_auxz00_6010;
														int BgL_tmpz00_6008;

														BgL_auxz00_6010 = BINT(BgL_arg1459z00_1777);
														BgL_tmpz00_6008 = (int) (((long) 0));
														STRUCT_SET(BgL_tablez00_98, BgL_tmpz00_6008,
															BgL_auxz00_6010);
												}}
												{	/* Llib/hash.scm 588 */
													obj_t BgL_arg1461z00_1779;

													{	/* Llib/hash.scm 588 */
														obj_t BgL_arg1462z00_1780;

														BgL_arg1462z00_1780 =
															MAKE_YOUNG_PAIR(BgL_keyz00_99, BgL_objz00_101);
														BgL_arg1461z00_1779 =
															MAKE_YOUNG_PAIR(BgL_arg1462z00_1780,
															BgL_bucketz00_1764);
													}
													VECTOR_SET(
														((obj_t) BgL_bucketsz00_1761),
														BgL_bucketzd2numzd2_1763, BgL_arg1461z00_1779);
												}
												if (
													(BgL_countz00_1774 >
														(long) CINT(BgL_maxzd2bucketzd2lenz00_1765)))
													{	/* Llib/hash.scm 589 */
														BGl_plainzd2hashtablezd2expandz12z12zz__hashz00
															(BgL_tablez00_98);
													}
												else
													{	/* Llib/hash.scm 589 */
														BFALSE;
													}
												return BgL_objz00_101;
											}
										else
											{	/* Llib/hash.scm 592 */
												bool_t BgL_test2951z00_6021;

												{	/* Llib/hash.scm 592 */
													obj_t BgL_arg1470z00_1789;

													{	/* Llib/hash.scm 592 */
														obj_t BgL_pairz00_3557;

														BgL_pairz00_3557 = CAR(((obj_t) BgL_buckz00_1773));
														BgL_arg1470z00_1789 = CAR(BgL_pairz00_3557);
													}
													{	/* Llib/hash.scm 592 */
														obj_t BgL_eqtz00_3558;

														BgL_eqtz00_3558 =
															STRUCT_REF(BgL_tablez00_98, (int) (((long) 3)));
														if (PROCEDUREP(BgL_eqtz00_3558))
															{	/* Llib/hash.scm 592 */
																BgL_test2951z00_6021 =
																	CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_3558)
																	(BgL_eqtz00_3558, BgL_arg1470z00_1789,
																		BgL_keyz00_99, BEOA));
															}
														else
															{	/* Llib/hash.scm 592 */
																if ((BgL_arg1470z00_1789 == BgL_keyz00_99))
																	{	/* Llib/hash.scm 592 */
																		BgL_test2951z00_6021 = ((bool_t) 1);
																	}
																else
																	{	/* Llib/hash.scm 592 */
																		if (STRINGP(BgL_arg1470z00_1789))
																			{	/* Llib/hash.scm 592 */
																				if (STRINGP(BgL_keyz00_99))
																					{	/* Llib/hash.scm 592 */
																						bool_t BgL_res2264z00_3582;

																						{	/* Llib/hash.scm 592 */
																							long BgL_l1z00_3569;

																							BgL_l1z00_3569 =
																								STRING_LENGTH
																								(BgL_arg1470z00_1789);
																							if ((BgL_l1z00_3569 ==
																									STRING_LENGTH(BgL_keyz00_99)))
																								{	/* Llib/hash.scm 592 */
																									int BgL_arg1700z00_3572;

																									{	/* Llib/hash.scm 592 */
																										char *BgL_auxz00_6047;
																										char *BgL_tmpz00_6045;

																										BgL_auxz00_6047 =
																											BSTRING_TO_STRING
																											(BgL_keyz00_99);
																										BgL_tmpz00_6045 =
																											BSTRING_TO_STRING
																											(BgL_arg1470z00_1789);
																										BgL_arg1700z00_3572 =
																											memcmp(BgL_tmpz00_6045,
																											BgL_auxz00_6047,
																											BgL_l1z00_3569);
																									}
																									BgL_res2264z00_3582 =
																										(
																										(long) (BgL_arg1700z00_3572)
																										== ((long) 0));
																								}
																							else
																								{	/* Llib/hash.scm 592 */
																									BgL_res2264z00_3582 =
																										((bool_t) 0);
																								}
																						}
																						BgL_test2951z00_6021 =
																							BgL_res2264z00_3582;
																					}
																				else
																					{	/* Llib/hash.scm 592 */
																						BgL_test2951z00_6021 = ((bool_t) 0);
																					}
																			}
																		else
																			{	/* Llib/hash.scm 592 */
																				BgL_test2951z00_6021 = ((bool_t) 0);
																			}
																	}
															}
													}
												}
												if (BgL_test2951z00_6021)
													{	/* Llib/hash.scm 593 */
														obj_t BgL_resz00_1784;

														{	/* Llib/hash.scm 593 */
															obj_t BgL_arg1467z00_1786;

															{	/* Llib/hash.scm 593 */
																obj_t BgL_pairz00_3586;

																BgL_pairz00_3586 =
																	CAR(((obj_t) BgL_buckz00_1773));
																BgL_arg1467z00_1786 = CDR(BgL_pairz00_3586);
															}
															BgL_resz00_1784 =
																PROCEDURE_ENTRY(BgL_procz00_100)
																(BgL_procz00_100, BgL_arg1467z00_1786, BEOA);
														}
														{	/* Llib/hash.scm 594 */
															obj_t BgL_arg1466z00_1785;

															BgL_arg1466z00_1785 =
																CAR(((obj_t) BgL_buckz00_1773));
															{	/* Llib/hash.scm 594 */
																obj_t BgL_tmpz00_6061;

																BgL_tmpz00_6061 = ((obj_t) BgL_arg1466z00_1785);
																SET_CDR(BgL_tmpz00_6061, BgL_resz00_1784);
															}
														}
														return BgL_resz00_1784;
													}
												else
													{	/* Llib/hash.scm 597 */
														obj_t BgL_arg1468z00_1787;
														long BgL_arg1469z00_1788;

														BgL_arg1468z00_1787 =
															CDR(((obj_t) BgL_buckz00_1773));
														BgL_arg1469z00_1788 =
															(BgL_countz00_1774 + ((long) 1));
														{
															long BgL_countz00_6068;
															obj_t BgL_buckz00_6067;

															BgL_buckz00_6067 = BgL_arg1468z00_1787;
															BgL_countz00_6068 = BgL_arg1469z00_1788;
															BgL_countz00_1774 = BgL_countz00_6068;
															BgL_buckz00_1773 = BgL_buckz00_6067;
															goto BgL_zc3z04anonymousza31457ze3z87_1775;
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



/* hashtable-add! */
	BGL_EXPORTED_DEF obj_t BGl_hashtablezd2addz12zc0zz__hashz00(obj_t
		BgL_tablez00_102, obj_t BgL_keyz00_103, obj_t BgL_p2z00_104,
		obj_t BgL_objz00_105, obj_t BgL_initz00_106)
	{
		{	/* Llib/hash.scm 602 */
			{	/* Llib/hash.scm 603 */
				bool_t BgL_test2957z00_6069;

				if (
					(((long) 0) ==
						((long) CINT(STRUCT_REF(BgL_tablez00_102,
									(int) (((long) 5)))) & ((long) 3))))
					{	/* Llib/hash.scm 250 */
						BgL_test2957z00_6069 = ((bool_t) 0);
					}
				else
					{	/* Llib/hash.scm 250 */
						BgL_test2957z00_6069 = ((bool_t) 1);
					}
				if (BgL_test2957z00_6069)
					{	/* Llib/hash.scm 603 */
						return
							BGl_weakzd2hashtablezd2addz12z12zz__weakhashz00(BgL_tablez00_102,
							BgL_keyz00_103, BgL_p2z00_104, BgL_objz00_105, BgL_initz00_106);
					}
				else
					{	/* Llib/hash.scm 603 */
						return
							BGl_plainzd2hashtablezd2addz12z12zz__hashz00(BgL_tablez00_102,
							BgL_keyz00_103, BgL_p2z00_104, BgL_objz00_105, BgL_initz00_106);
					}
			}
		}

	}



/* &hashtable-add! */
	obj_t BGl_z62hashtablezd2addz12za2zz__hashz00(obj_t BgL_envz00_4582,
		obj_t BgL_tablez00_4583, obj_t BgL_keyz00_4584, obj_t BgL_p2z00_4585,
		obj_t BgL_objz00_4586, obj_t BgL_initz00_4587)
	{
		{	/* Llib/hash.scm 602 */
			{	/* Llib/hash.scm 603 */
				obj_t BgL_auxz00_6085;
				obj_t BgL_auxz00_6078;

				if (PROCEDUREP(BgL_p2z00_4585))
					{	/* Llib/hash.scm 603 */
						BgL_auxz00_6085 = BgL_p2z00_4585;
					}
				else
					{
						obj_t BgL_auxz00_6088;

						BgL_auxz00_6088 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__hashz00,
							BINT(((long) 23897)), BGl_string2687z00zz__hashz00,
							BGl_string2679z00zz__hashz00, BgL_p2z00_4585);
						FAILURE(BgL_auxz00_6088, BFALSE, BFALSE);
					}
				if (STRUCTP(BgL_tablez00_4583))
					{	/* Llib/hash.scm 603 */
						BgL_auxz00_6078 = BgL_tablez00_4583;
					}
				else
					{
						obj_t BgL_auxz00_6081;

						BgL_auxz00_6081 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__hashz00,
							BINT(((long) 23897)), BGl_string2687z00zz__hashz00,
							BGl_string2672z00zz__hashz00, BgL_tablez00_4583);
						FAILURE(BgL_auxz00_6081, BFALSE, BFALSE);
					}
				return
					BGl_hashtablezd2addz12zc0zz__hashz00(BgL_auxz00_6078, BgL_keyz00_4584,
					BgL_auxz00_6085, BgL_objz00_4586, BgL_initz00_4587);
			}
		}

	}



/* plain-hashtable-add! */
	obj_t BGl_plainzd2hashtablezd2addz12z12zz__hashz00(obj_t BgL_tablez00_107,
		obj_t BgL_keyz00_108, obj_t BgL_procz00_109, obj_t BgL_objz00_110,
		obj_t BgL_initz00_111)
	{
		{	/* Llib/hash.scm 610 */
			{	/* Llib/hash.scm 611 */
				obj_t BgL_bucketsz00_1793;

				BgL_bucketsz00_1793 = STRUCT_REF(BgL_tablez00_107, (int) (((long) 2)));
				{	/* Llib/hash.scm 612 */
					long BgL_bucketzd2numzd2_1795;

					{	/* Llib/hash.scm 613 */
						long BgL_arg1496z00_1825;

						{	/* Llib/hash.scm 613 */
							long BgL_res2273z00_3617;

							{	/* Llib/hash.scm 613 */
								obj_t BgL_hashnz00_3605;

								BgL_hashnz00_3605 =
									STRUCT_REF(BgL_tablez00_107, (int) (((long) 4)));
								if (PROCEDUREP(BgL_hashnz00_3605))
									{	/* Llib/hash.scm 613 */
										obj_t BgL_arg1247z00_3607;

										BgL_arg1247z00_3607 =
											PROCEDURE_ENTRY(BgL_hashnz00_3605) (BgL_hashnz00_3605,
											BgL_keyz00_108, BEOA);
										{	/* Llib/hash.scm 613 */
											long BgL_nz00_3610;

											BgL_nz00_3610 = (long) CINT(BgL_arg1247z00_3607);
											if ((BgL_nz00_3610 < ((long) 0)))
												{	/* Llib/hash.scm 613 */
													BgL_res2273z00_3617 = NEG(BgL_nz00_3610);
												}
											else
												{	/* Llib/hash.scm 613 */
													BgL_res2273z00_3617 = BgL_nz00_3610;
												}
										}
									}
								else
									{	/* Llib/hash.scm 613 */
										BgL_res2273z00_3617 =
											BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_108);
									}
							}
							BgL_arg1496z00_1825 = BgL_res2273z00_3617;
						}
						{	/* Llib/hash.scm 613 */
							long BgL_res2279z00_3636;

							{	/* Llib/hash.scm 613 */
								long BgL_n1z00_3618;
								long BgL_n2z00_3619;

								BgL_n1z00_3618 = BgL_arg1496z00_1825;
								BgL_n2z00_3619 = VECTOR_LENGTH(((obj_t) BgL_bucketsz00_1793));
								{	/* Llib/hash.scm 613 */
									bool_t BgL_test2963z00_6110;

									{	/* Llib/hash.scm 613 */
										long BgL_arg1818z00_3621;

										BgL_arg1818z00_3621 =
											(((BgL_n1z00_3618) | (BgL_n2z00_3619)) & -2147483648);
										BgL_test2963z00_6110 = (BgL_arg1818z00_3621 == ((long) 0));
									}
									if (BgL_test2963z00_6110)
										{	/* Llib/hash.scm 613 */
											int32_t BgL_arg1815z00_3622;

											{	/* Llib/hash.scm 613 */
												int32_t BgL_arg1816z00_3623;
												int32_t BgL_arg1817z00_3624;

												{	/* Llib/hash.scm 613 */
													int32_t BgL_res2275z00_3628;

													BgL_res2275z00_3628 = (int32_t) (BgL_n1z00_3618);
													BgL_arg1816z00_3623 = BgL_res2275z00_3628;
												}
												{	/* Llib/hash.scm 613 */
													int32_t BgL_res2276z00_3630;

													BgL_res2276z00_3630 = (int32_t) (BgL_n2z00_3619);
													BgL_arg1817z00_3624 = BgL_res2276z00_3630;
												}
												BgL_arg1815z00_3622 =
													(BgL_arg1816z00_3623 % BgL_arg1817z00_3624);
											}
											{	/* Llib/hash.scm 613 */
												long BgL_res2278z00_3635;

												{	/* Llib/hash.scm 613 */
													long BgL_arg1925z00_3632;

													BgL_arg1925z00_3632 = (long) (BgL_arg1815z00_3622);
													{	/* Llib/hash.scm 613 */
														long BgL_res2277z00_3634;

														BgL_res2277z00_3634 = (long) (BgL_arg1925z00_3632);
														BgL_res2278z00_3635 = BgL_res2277z00_3634;
												}}
												BgL_res2279z00_3636 = BgL_res2278z00_3635;
										}}
									else
										{	/* Llib/hash.scm 613 */
											BgL_res2279z00_3636 = (BgL_n1z00_3618 % BgL_n2z00_3619);
										}
								}
							}
							BgL_bucketzd2numzd2_1795 = BgL_res2279z00_3636;
						}
					}
					{	/* Llib/hash.scm 613 */
						obj_t BgL_bucketz00_1796;

						BgL_bucketz00_1796 =
							VECTOR_REF(
							((obj_t) BgL_bucketsz00_1793), BgL_bucketzd2numzd2_1795);
						{	/* Llib/hash.scm 614 */
							obj_t BgL_maxzd2bucketzd2lenz00_1797;

							BgL_maxzd2bucketzd2lenz00_1797 =
								STRUCT_REF(BgL_tablez00_107, (int) (((long) 1)));
							{	/* Llib/hash.scm 615 */

								if (NULLP(BgL_bucketz00_1796))
									{	/* Llib/hash.scm 617 */
										obj_t BgL_vz00_1799;

										BgL_vz00_1799 =
											PROCEDURE_ENTRY(BgL_procz00_109) (BgL_procz00_109,
											BgL_objz00_110, BgL_initz00_111, BEOA);
										{	/* Llib/hash.scm 618 */
											long BgL_arg1474z00_1800;

											BgL_arg1474z00_1800 =
												(
												(long) CINT(STRUCT_REF(BgL_tablez00_107,
														(int) (((long) 0)))) + ((long) 1));
											{	/* Llib/hash.scm 618 */
												obj_t BgL_auxz00_6136;
												int BgL_tmpz00_6134;

												BgL_auxz00_6136 = BINT(BgL_arg1474z00_1800);
												BgL_tmpz00_6134 = (int) (((long) 0));
												STRUCT_SET(BgL_tablez00_107, BgL_tmpz00_6134,
													BgL_auxz00_6136);
										}}
										{	/* Llib/hash.scm 619 */
											obj_t BgL_arg1476z00_1802;

											{	/* Llib/hash.scm 619 */
												obj_t BgL_arg1477z00_1803;

												BgL_arg1477z00_1803 =
													MAKE_YOUNG_PAIR(BgL_keyz00_108, BgL_vz00_1799);
												{	/* Llib/hash.scm 619 */
													obj_t BgL_list1478z00_1804;

													BgL_list1478z00_1804 =
														MAKE_YOUNG_PAIR(BgL_arg1477z00_1803, BNIL);
													BgL_arg1476z00_1802 = BgL_list1478z00_1804;
											}}
											VECTOR_SET(
												((obj_t) BgL_bucketsz00_1793), BgL_bucketzd2numzd2_1795,
												BgL_arg1476z00_1802);
										}
										return BgL_vz00_1799;
									}
								else
									{
										obj_t BgL_buckz00_1806;
										long BgL_countz00_1807;

										BgL_buckz00_1806 = BgL_bucketz00_1796;
										BgL_countz00_1807 = ((long) 0);
									BgL_zc3z04anonymousza31479ze3z87_1808:
										if (NULLP(BgL_buckz00_1806))
											{	/* Llib/hash.scm 625 */
												obj_t BgL_vz00_1810;

												BgL_vz00_1810 =
													PROCEDURE_ENTRY(BgL_procz00_109) (BgL_procz00_109,
													BgL_objz00_110, BgL_initz00_111, BEOA);
												{	/* Llib/hash.scm 626 */
													long BgL_arg1483z00_1811;

													BgL_arg1483z00_1811 =
														(
														(long) CINT(STRUCT_REF(BgL_tablez00_107,
																(int) (((long) 0)))) + ((long) 1));
													{	/* Llib/hash.scm 626 */
														obj_t BgL_auxz00_6156;
														int BgL_tmpz00_6154;

														BgL_auxz00_6156 = BINT(BgL_arg1483z00_1811);
														BgL_tmpz00_6154 = (int) (((long) 0));
														STRUCT_SET(BgL_tablez00_107, BgL_tmpz00_6154,
															BgL_auxz00_6156);
												}}
												{	/* Llib/hash.scm 627 */
													obj_t BgL_arg1485z00_1813;

													{	/* Llib/hash.scm 627 */
														obj_t BgL_arg1486z00_1814;

														BgL_arg1486z00_1814 =
															MAKE_YOUNG_PAIR(BgL_keyz00_108, BgL_vz00_1810);
														BgL_arg1485z00_1813 =
															MAKE_YOUNG_PAIR(BgL_arg1486z00_1814,
															BgL_bucketz00_1796);
													}
													VECTOR_SET(
														((obj_t) BgL_bucketsz00_1793),
														BgL_bucketzd2numzd2_1795, BgL_arg1485z00_1813);
												}
												if (
													(BgL_countz00_1807 >
														(long) CINT(BgL_maxzd2bucketzd2lenz00_1797)))
													{	/* Llib/hash.scm 628 */
														BGl_plainzd2hashtablezd2expandz12z12zz__hashz00
															(BgL_tablez00_107);
													}
												else
													{	/* Llib/hash.scm 628 */
														BFALSE;
													}
												return BgL_vz00_1810;
											}
										else
											{	/* Llib/hash.scm 631 */
												bool_t BgL_test2967z00_6167;

												{	/* Llib/hash.scm 631 */
													obj_t BgL_arg1495z00_1823;

													{	/* Llib/hash.scm 631 */
														obj_t BgL_pairz00_3661;

														BgL_pairz00_3661 = CAR(((obj_t) BgL_buckz00_1806));
														BgL_arg1495z00_1823 = CAR(BgL_pairz00_3661);
													}
													{	/* Llib/hash.scm 631 */
														obj_t BgL_eqtz00_3662;

														BgL_eqtz00_3662 =
															STRUCT_REF(BgL_tablez00_107, (int) (((long) 3)));
														if (PROCEDUREP(BgL_eqtz00_3662))
															{	/* Llib/hash.scm 631 */
																BgL_test2967z00_6167 =
																	CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_3662)
																	(BgL_eqtz00_3662, BgL_arg1495z00_1823,
																		BgL_keyz00_108, BEOA));
															}
														else
															{	/* Llib/hash.scm 631 */
																if ((BgL_arg1495z00_1823 == BgL_keyz00_108))
																	{	/* Llib/hash.scm 631 */
																		BgL_test2967z00_6167 = ((bool_t) 1);
																	}
																else
																	{	/* Llib/hash.scm 631 */
																		if (STRINGP(BgL_arg1495z00_1823))
																			{	/* Llib/hash.scm 631 */
																				if (STRINGP(BgL_keyz00_108))
																					{	/* Llib/hash.scm 631 */
																						bool_t BgL_res2293z00_3686;

																						{	/* Llib/hash.scm 631 */
																							long BgL_l1z00_3673;

																							BgL_l1z00_3673 =
																								STRING_LENGTH
																								(BgL_arg1495z00_1823);
																							if ((BgL_l1z00_3673 ==
																									STRING_LENGTH
																									(BgL_keyz00_108)))
																								{	/* Llib/hash.scm 631 */
																									int BgL_arg1700z00_3676;

																									{	/* Llib/hash.scm 631 */
																										char *BgL_auxz00_6193;
																										char *BgL_tmpz00_6191;

																										BgL_auxz00_6193 =
																											BSTRING_TO_STRING
																											(BgL_keyz00_108);
																										BgL_tmpz00_6191 =
																											BSTRING_TO_STRING
																											(BgL_arg1495z00_1823);
																										BgL_arg1700z00_3676 =
																											memcmp(BgL_tmpz00_6191,
																											BgL_auxz00_6193,
																											BgL_l1z00_3673);
																									}
																									BgL_res2293z00_3686 =
																										(
																										(long) (BgL_arg1700z00_3676)
																										== ((long) 0));
																								}
																							else
																								{	/* Llib/hash.scm 631 */
																									BgL_res2293z00_3686 =
																										((bool_t) 0);
																								}
																						}
																						BgL_test2967z00_6167 =
																							BgL_res2293z00_3686;
																					}
																				else
																					{	/* Llib/hash.scm 631 */
																						BgL_test2967z00_6167 = ((bool_t) 0);
																					}
																			}
																		else
																			{	/* Llib/hash.scm 631 */
																				BgL_test2967z00_6167 = ((bool_t) 0);
																			}
																	}
															}
													}
												}
												if (BgL_test2967z00_6167)
													{	/* Llib/hash.scm 632 */
														obj_t BgL_resz00_1818;

														{	/* Llib/hash.scm 632 */
															obj_t BgL_arg1492z00_1820;

															{	/* Llib/hash.scm 632 */
																obj_t BgL_pairz00_3690;

																BgL_pairz00_3690 =
																	CAR(((obj_t) BgL_buckz00_1806));
																BgL_arg1492z00_1820 = CDR(BgL_pairz00_3690);
															}
															BgL_resz00_1818 =
																PROCEDURE_ENTRY(BgL_procz00_109)
																(BgL_procz00_109, BgL_objz00_110,
																BgL_arg1492z00_1820, BEOA);
														}
														{	/* Llib/hash.scm 633 */
															obj_t BgL_arg1491z00_1819;

															BgL_arg1491z00_1819 =
																CAR(((obj_t) BgL_buckz00_1806));
															{	/* Llib/hash.scm 633 */
																obj_t BgL_tmpz00_6208;

																BgL_tmpz00_6208 = ((obj_t) BgL_arg1491z00_1819);
																SET_CDR(BgL_tmpz00_6208, BgL_resz00_1818);
															}
														}
														return BgL_resz00_1818;
													}
												else
													{	/* Llib/hash.scm 636 */
														obj_t BgL_arg1493z00_1821;
														long BgL_arg1494z00_1822;

														BgL_arg1493z00_1821 =
															CDR(((obj_t) BgL_buckz00_1806));
														BgL_arg1494z00_1822 =
															(BgL_countz00_1807 + ((long) 1));
														{
															long BgL_countz00_6215;
															obj_t BgL_buckz00_6214;

															BgL_buckz00_6214 = BgL_arg1493z00_1821;
															BgL_countz00_6215 = BgL_arg1494z00_1822;
															BgL_countz00_1807 = BgL_countz00_6215;
															BgL_buckz00_1806 = BgL_buckz00_6214;
															goto BgL_zc3z04anonymousza31479ze3z87_1808;
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



/* hashtable-remove! */
	BGL_EXPORTED_DEF bool_t BGl_hashtablezd2removez12zc0zz__hashz00(obj_t
		BgL_tablez00_112, obj_t BgL_keyz00_113)
	{
		{	/* Llib/hash.scm 641 */
			{	/* Llib/hash.scm 642 */
				bool_t BgL_test2973z00_6216;

				if (
					(((long) 0) ==
						((long) CINT(STRUCT_REF(BgL_tablez00_112,
									(int) (((long) 5)))) & ((long) 3))))
					{	/* Llib/hash.scm 250 */
						BgL_test2973z00_6216 = ((bool_t) 0);
					}
				else
					{	/* Llib/hash.scm 250 */
						BgL_test2973z00_6216 = ((bool_t) 1);
					}
				if (BgL_test2973z00_6216)
					{	/* Llib/hash.scm 642 */
						return
							CBOOL(BGl_weakzd2hashtablezd2removez12z12zz__weakhashz00
							(BgL_tablez00_112, BgL_keyz00_113));
					}
				else
					{	/* Llib/hash.scm 642 */
						return
							BGl_plainzd2hashtablezd2removez12z12zz__hashz00(BgL_tablez00_112,
							BgL_keyz00_113);
					}
			}
		}

	}



/* &hashtable-remove! */
	obj_t BGl_z62hashtablezd2removez12za2zz__hashz00(obj_t BgL_envz00_4588,
		obj_t BgL_tablez00_4589, obj_t BgL_keyz00_4590)
	{
		{	/* Llib/hash.scm 641 */
			{	/* Llib/hash.scm 642 */
				bool_t BgL_tmpz00_6226;

				{	/* Llib/hash.scm 642 */
					obj_t BgL_auxz00_6227;

					if (STRUCTP(BgL_tablez00_4589))
						{	/* Llib/hash.scm 642 */
							BgL_auxz00_6227 = BgL_tablez00_4589;
						}
					else
						{
							obj_t BgL_auxz00_6230;

							BgL_auxz00_6230 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__hashz00,
								BINT(((long) 25575)), BGl_string2688z00zz__hashz00,
								BGl_string2672z00zz__hashz00, BgL_tablez00_4589);
							FAILURE(BgL_auxz00_6230, BFALSE, BFALSE);
						}
					BgL_tmpz00_6226 =
						BGl_hashtablezd2removez12zc0zz__hashz00(BgL_auxz00_6227,
						BgL_keyz00_4590);
				}
				return BBOOL(BgL_tmpz00_6226);
			}
		}

	}



/* plain-hashtable-remove! */
	bool_t BGl_plainzd2hashtablezd2removez12z12zz__hashz00(obj_t BgL_tablez00_114,
		obj_t BgL_keyz00_115)
	{
		{	/* Llib/hash.scm 649 */
			{	/* Llib/hash.scm 650 */
				obj_t BgL_bucketsz00_1827;

				BgL_bucketsz00_1827 = STRUCT_REF(BgL_tablez00_114, (int) (((long) 2)));
				{	/* Llib/hash.scm 651 */
					long BgL_bucketzd2numzd2_1829;

					{	/* Llib/hash.scm 652 */
						long BgL_arg1518z00_1852;

						{	/* Llib/hash.scm 652 */
							long BgL_res2302z00_3721;

							{	/* Llib/hash.scm 652 */
								obj_t BgL_hashnz00_3709;

								BgL_hashnz00_3709 =
									STRUCT_REF(BgL_tablez00_114, (int) (((long) 4)));
								if (PROCEDUREP(BgL_hashnz00_3709))
									{	/* Llib/hash.scm 652 */
										obj_t BgL_arg1247z00_3711;

										BgL_arg1247z00_3711 =
											PROCEDURE_ENTRY(BgL_hashnz00_3709) (BgL_hashnz00_3709,
											BgL_keyz00_115, BEOA);
										{	/* Llib/hash.scm 652 */
											long BgL_nz00_3714;

											BgL_nz00_3714 = (long) CINT(BgL_arg1247z00_3711);
											if ((BgL_nz00_3714 < ((long) 0)))
												{	/* Llib/hash.scm 652 */
													BgL_res2302z00_3721 = NEG(BgL_nz00_3714);
												}
											else
												{	/* Llib/hash.scm 652 */
													BgL_res2302z00_3721 = BgL_nz00_3714;
												}
										}
									}
								else
									{	/* Llib/hash.scm 652 */
										BgL_res2302z00_3721 =
											BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_115);
									}
							}
							BgL_arg1518z00_1852 = BgL_res2302z00_3721;
						}
						{	/* Llib/hash.scm 652 */
							long BgL_res2308z00_3740;

							{	/* Llib/hash.scm 652 */
								long BgL_n1z00_3722;
								long BgL_n2z00_3723;

								BgL_n1z00_3722 = BgL_arg1518z00_1852;
								BgL_n2z00_3723 = VECTOR_LENGTH(((obj_t) BgL_bucketsz00_1827));
								{	/* Llib/hash.scm 652 */
									bool_t BgL_test2978z00_6253;

									{	/* Llib/hash.scm 652 */
										long BgL_arg1818z00_3725;

										BgL_arg1818z00_3725 =
											(((BgL_n1z00_3722) | (BgL_n2z00_3723)) & -2147483648);
										BgL_test2978z00_6253 = (BgL_arg1818z00_3725 == ((long) 0));
									}
									if (BgL_test2978z00_6253)
										{	/* Llib/hash.scm 652 */
											int32_t BgL_arg1815z00_3726;

											{	/* Llib/hash.scm 652 */
												int32_t BgL_arg1816z00_3727;
												int32_t BgL_arg1817z00_3728;

												{	/* Llib/hash.scm 652 */
													int32_t BgL_res2304z00_3732;

													BgL_res2304z00_3732 = (int32_t) (BgL_n1z00_3722);
													BgL_arg1816z00_3727 = BgL_res2304z00_3732;
												}
												{	/* Llib/hash.scm 652 */
													int32_t BgL_res2305z00_3734;

													BgL_res2305z00_3734 = (int32_t) (BgL_n2z00_3723);
													BgL_arg1817z00_3728 = BgL_res2305z00_3734;
												}
												BgL_arg1815z00_3726 =
													(BgL_arg1816z00_3727 % BgL_arg1817z00_3728);
											}
											{	/* Llib/hash.scm 652 */
												long BgL_res2307z00_3739;

												{	/* Llib/hash.scm 652 */
													long BgL_arg1925z00_3736;

													BgL_arg1925z00_3736 = (long) (BgL_arg1815z00_3726);
													{	/* Llib/hash.scm 652 */
														long BgL_res2306z00_3738;

														BgL_res2306z00_3738 = (long) (BgL_arg1925z00_3736);
														BgL_res2307z00_3739 = BgL_res2306z00_3738;
												}}
												BgL_res2308z00_3740 = BgL_res2307z00_3739;
										}}
									else
										{	/* Llib/hash.scm 652 */
											BgL_res2308z00_3740 = (BgL_n1z00_3722 % BgL_n2z00_3723);
										}
								}
							}
							BgL_bucketzd2numzd2_1829 = BgL_res2308z00_3740;
						}
					}
					{	/* Llib/hash.scm 652 */
						obj_t BgL_bucketz00_1830;

						BgL_bucketz00_1830 =
							VECTOR_REF(
							((obj_t) BgL_bucketsz00_1827), BgL_bucketzd2numzd2_1829);
						{	/* Llib/hash.scm 653 */

							if (NULLP(BgL_bucketz00_1830))
								{	/* Llib/hash.scm 655 */
									return ((bool_t) 0);
								}
							else
								{	/* Llib/hash.scm 657 */
									bool_t BgL_test2980z00_6266;

									{	/* Llib/hash.scm 657 */
										obj_t BgL_arg1516z00_1851;

										{	/* Llib/hash.scm 657 */
											obj_t BgL_pairz00_3747;

											BgL_pairz00_3747 = CAR(((obj_t) BgL_bucketz00_1830));
											BgL_arg1516z00_1851 = CAR(BgL_pairz00_3747);
										}
										{	/* Llib/hash.scm 657 */
											obj_t BgL_eqtz00_3748;

											BgL_eqtz00_3748 =
												STRUCT_REF(BgL_tablez00_114, (int) (((long) 3)));
											if (PROCEDUREP(BgL_eqtz00_3748))
												{	/* Llib/hash.scm 657 */
													BgL_test2980z00_6266 =
														CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_3748)
														(BgL_eqtz00_3748, BgL_arg1516z00_1851,
															BgL_keyz00_115, BEOA));
												}
											else
												{	/* Llib/hash.scm 657 */
													if ((BgL_arg1516z00_1851 == BgL_keyz00_115))
														{	/* Llib/hash.scm 657 */
															BgL_test2980z00_6266 = ((bool_t) 1);
														}
													else
														{	/* Llib/hash.scm 657 */
															if (STRINGP(BgL_arg1516z00_1851))
																{	/* Llib/hash.scm 657 */
																	if (STRINGP(BgL_keyz00_115))
																		{	/* Llib/hash.scm 657 */
																			bool_t BgL_res2317z00_3772;

																			{	/* Llib/hash.scm 657 */
																				long BgL_l1z00_3759;

																				BgL_l1z00_3759 =
																					STRING_LENGTH(BgL_arg1516z00_1851);
																				if (
																					(BgL_l1z00_3759 ==
																						STRING_LENGTH(BgL_keyz00_115)))
																					{	/* Llib/hash.scm 657 */
																						int BgL_arg1700z00_3762;

																						{	/* Llib/hash.scm 657 */
																							char *BgL_auxz00_6292;
																							char *BgL_tmpz00_6290;

																							BgL_auxz00_6292 =
																								BSTRING_TO_STRING
																								(BgL_keyz00_115);
																							BgL_tmpz00_6290 =
																								BSTRING_TO_STRING
																								(BgL_arg1516z00_1851);
																							BgL_arg1700z00_3762 =
																								memcmp(BgL_tmpz00_6290,
																								BgL_auxz00_6292,
																								BgL_l1z00_3759);
																						}
																						BgL_res2317z00_3772 =
																							(
																							(long) (BgL_arg1700z00_3762) ==
																							((long) 0));
																					}
																				else
																					{	/* Llib/hash.scm 657 */
																						BgL_res2317z00_3772 = ((bool_t) 0);
																					}
																			}
																			BgL_test2980z00_6266 =
																				BgL_res2317z00_3772;
																		}
																	else
																		{	/* Llib/hash.scm 657 */
																			BgL_test2980z00_6266 = ((bool_t) 0);
																		}
																}
															else
																{	/* Llib/hash.scm 657 */
																	BgL_test2980z00_6266 = ((bool_t) 0);
																}
														}
												}
										}
									}
									if (BgL_test2980z00_6266)
										{	/* Llib/hash.scm 657 */
											{	/* Llib/hash.scm 658 */
												obj_t BgL_arg1502z00_1834;

												BgL_arg1502z00_1834 = CDR(((obj_t) BgL_bucketz00_1830));
												VECTOR_SET(
													((obj_t) BgL_bucketsz00_1827),
													BgL_bucketzd2numzd2_1829, BgL_arg1502z00_1834);
											}
											{	/* Llib/hash.scm 659 */
												long BgL_arg1505z00_1835;

												BgL_arg1505z00_1835 =
													(
													(long) CINT(STRUCT_REF(BgL_tablez00_114,
															(int) (((long) 0)))) - ((long) 1));
												{	/* Llib/hash.scm 659 */
													obj_t BgL_auxz00_6307;
													int BgL_tmpz00_6305;

													BgL_auxz00_6307 = BINT(BgL_arg1505z00_1835);
													BgL_tmpz00_6305 = (int) (((long) 0));
													STRUCT_SET(BgL_tablez00_114, BgL_tmpz00_6305,
														BgL_auxz00_6307);
											}}
											return ((bool_t) 1);
										}
									else
										{	/* Llib/hash.scm 662 */
											obj_t BgL_g1062z00_1837;

											BgL_g1062z00_1837 = CDR(((obj_t) BgL_bucketz00_1830));
											{
												obj_t BgL_bucketz00_1839;
												obj_t BgL_prevz00_1840;

												BgL_bucketz00_1839 = BgL_g1062z00_1837;
												BgL_prevz00_1840 = BgL_bucketz00_1830;
											BgL_zc3z04anonymousza31507ze3z87_1841:
												if (PAIRP(BgL_bucketz00_1839))
													{	/* Llib/hash.scm 665 */
														bool_t BgL_test2987z00_6314;

														{	/* Llib/hash.scm 665 */
															obj_t BgL_arg1515z00_1849;

															BgL_arg1515z00_1849 =
																CAR(CAR(BgL_bucketz00_1839));
															{	/* Llib/hash.scm 665 */
																obj_t BgL_eqtz00_3786;

																BgL_eqtz00_3786 =
																	STRUCT_REF(BgL_tablez00_114,
																	(int) (((long) 3)));
																if (PROCEDUREP(BgL_eqtz00_3786))
																	{	/* Llib/hash.scm 665 */
																		BgL_test2987z00_6314 =
																			CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_3786)
																			(BgL_eqtz00_3786, BgL_arg1515z00_1849,
																				BgL_keyz00_115, BEOA));
																	}
																else
																	{	/* Llib/hash.scm 665 */
																		if ((BgL_arg1515z00_1849 == BgL_keyz00_115))
																			{	/* Llib/hash.scm 665 */
																				BgL_test2987z00_6314 = ((bool_t) 1);
																			}
																		else
																			{	/* Llib/hash.scm 665 */
																				if (STRINGP(BgL_arg1515z00_1849))
																					{	/* Llib/hash.scm 665 */
																						if (STRINGP(BgL_keyz00_115))
																							{	/* Llib/hash.scm 665 */
																								bool_t BgL_res2327z00_3810;

																								{	/* Llib/hash.scm 665 */
																									long BgL_l1z00_3797;

																									BgL_l1z00_3797 =
																										STRING_LENGTH
																										(BgL_arg1515z00_1849);
																									if ((BgL_l1z00_3797 ==
																											STRING_LENGTH
																											(BgL_keyz00_115)))
																										{	/* Llib/hash.scm 665 */
																											int BgL_arg1700z00_3800;

																											{	/* Llib/hash.scm 665 */
																												char *BgL_auxz00_6339;
																												char *BgL_tmpz00_6337;

																												BgL_auxz00_6339 =
																													BSTRING_TO_STRING
																													(BgL_keyz00_115);
																												BgL_tmpz00_6337 =
																													BSTRING_TO_STRING
																													(BgL_arg1515z00_1849);
																												BgL_arg1700z00_3800 =
																													memcmp
																													(BgL_tmpz00_6337,
																													BgL_auxz00_6339,
																													BgL_l1z00_3797);
																											}
																											BgL_res2327z00_3810 =
																												(
																												(long)
																												(BgL_arg1700z00_3800) ==
																												((long) 0));
																										}
																									else
																										{	/* Llib/hash.scm 665 */
																											BgL_res2327z00_3810 =
																												((bool_t) 0);
																										}
																								}
																								BgL_test2987z00_6314 =
																									BgL_res2327z00_3810;
																							}
																						else
																							{	/* Llib/hash.scm 665 */
																								BgL_test2987z00_6314 =
																									((bool_t) 0);
																							}
																					}
																				else
																					{	/* Llib/hash.scm 665 */
																						BgL_test2987z00_6314 = ((bool_t) 0);
																					}
																			}
																	}
															}
														}
														if (BgL_test2987z00_6314)
															{	/* Llib/hash.scm 665 */
																{	/* Llib/hash.scm 667 */
																	obj_t BgL_arg1511z00_1845;

																	BgL_arg1511z00_1845 = CDR(BgL_bucketz00_1839);
																	{	/* Llib/hash.scm 667 */
																		obj_t BgL_tmpz00_6345;

																		BgL_tmpz00_6345 =
																			((obj_t) BgL_prevz00_1840);
																		SET_CDR(BgL_tmpz00_6345,
																			BgL_arg1511z00_1845);
																	}
																}
																{	/* Llib/hash.scm 669 */
																	long BgL_arg1512z00_1846;

																	BgL_arg1512z00_1846 =
																		(
																		(long) CINT(STRUCT_REF(BgL_tablez00_114,
																				(int) (((long) 0)))) - ((long) 1));
																	{	/* Llib/hash.scm 668 */
																		obj_t BgL_auxz00_6354;
																		int BgL_tmpz00_6352;

																		BgL_auxz00_6354 = BINT(BgL_arg1512z00_1846);
																		BgL_tmpz00_6352 = (int) (((long) 0));
																		STRUCT_SET(BgL_tablez00_114,
																			BgL_tmpz00_6352, BgL_auxz00_6354);
																}}
																return ((bool_t) 1);
															}
														else
															{
																obj_t BgL_prevz00_6359;
																obj_t BgL_bucketz00_6357;

																BgL_bucketz00_6357 = CDR(BgL_bucketz00_1839);
																BgL_prevz00_6359 = BgL_bucketz00_1839;
																BgL_prevz00_1840 = BgL_prevz00_6359;
																BgL_bucketz00_1839 = BgL_bucketz00_6357;
																goto BgL_zc3z04anonymousza31507ze3z87_1841;
															}
													}
												else
													{	/* Llib/hash.scm 664 */
														return ((bool_t) 0);
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



/* plain-hashtable-expand! */
	obj_t BGl_plainzd2hashtablezd2expandz12z12zz__hashz00(obj_t BgL_tablez00_117)
	{
		{	/* Llib/hash.scm 686 */
			{	/* Llib/hash.scm 687 */
				obj_t BgL_oldzd2buckszd2_1854;

				BgL_oldzd2buckszd2_1854 =
					STRUCT_REF(BgL_tablez00_117, (int) (((long) 2)));
				{	/* Llib/hash.scm 688 */
					long BgL_newzd2lenzd2_1856;

					BgL_newzd2lenzd2_1856 =
						(((long) 2) * VECTOR_LENGTH(((obj_t) BgL_oldzd2buckszd2_1854)));
					{	/* Llib/hash.scm 689 */
						obj_t BgL_maxzd2lenzd2_1857;

						BgL_maxzd2lenzd2_1857 =
							STRUCT_REF(BgL_tablez00_117, (int) (((long) 6)));
						{	/* Llib/hash.scm 690 */

							{	/* Llib/hash.scm 692 */
								obj_t BgL_nmaxz00_1858;

								BgL_nmaxz00_1858 =
									BGl_2za2za2zz__r4_numbers_6_5z00(STRUCT_REF(BgL_tablez00_117,
										(int) (((long) 1))),
									STRUCT_REF(BgL_tablez00_117, (int) (((long) 7))));
								{	/* Llib/hash.scm 695 */
									obj_t BgL_arg1520z00_1859;

									if (REALP(BgL_nmaxz00_1858))
										{	/* Llib/hash.scm 695 */
											BgL_arg1520z00_1859 =
												BINT((long) (REAL_TO_DOUBLE(BgL_nmaxz00_1858)));
										}
									else
										{	/* Llib/hash.scm 695 */
											BgL_arg1520z00_1859 = BgL_nmaxz00_1858;
										}
									{	/* Llib/hash.scm 694 */
										int BgL_tmpz00_6377;

										BgL_tmpz00_6377 = (int) (((long) 1));
										STRUCT_SET(BgL_tablez00_117, BgL_tmpz00_6377,
											BgL_arg1520z00_1859);
							}}}
							{	/* Llib/hash.scm 697 */
								bool_t BgL_test2994z00_6380;

								if (((long) CINT(BgL_maxzd2lenzd2_1857) < ((long) 0)))
									{	/* Llib/hash.scm 697 */
										BgL_test2994z00_6380 = ((bool_t) 1);
									}
								else
									{	/* Llib/hash.scm 697 */
										BgL_test2994z00_6380 =
											(BgL_newzd2lenzd2_1856 <=
											(long) CINT(BgL_maxzd2lenzd2_1857));
									}
								if (BgL_test2994z00_6380)
									{	/* Llib/hash.scm 698 */
										obj_t BgL_newzd2buckszd2_1865;

										BgL_newzd2buckszd2_1865 =
											make_vector(BgL_newzd2lenzd2_1856, BNIL);
										{	/* Llib/hash.scm 699 */
											int BgL_tmpz00_6387;

											BgL_tmpz00_6387 = (int) (((long) 2));
											STRUCT_SET(BgL_tablez00_117, BgL_tmpz00_6387,
												BgL_newzd2buckszd2_1865);
										}
										{
											long BgL_iz00_1867;

											{	/* Llib/hash.scm 700 */
												bool_t BgL_tmpz00_6390;

												BgL_iz00_1867 = ((long) 0);
											BgL_zc3z04anonymousza31527ze3z87_1868:
												if (
													(BgL_iz00_1867 <
														VECTOR_LENGTH(((obj_t) BgL_oldzd2buckszd2_1854))))
													{	/* Llib/hash.scm 701 */
														{	/* Llib/hash.scm 702 */
															obj_t BgL_g1118z00_1870;

															BgL_g1118z00_1870 =
																VECTOR_REF(
																((obj_t) BgL_oldzd2buckszd2_1854),
																BgL_iz00_1867);
															{
																obj_t BgL_l1116z00_1872;

																BgL_l1116z00_1872 = BgL_g1118z00_1870;
															BgL_zc3z04anonymousza31529ze3z87_1873:
																if (PAIRP(BgL_l1116z00_1872))
																	{	/* Llib/hash.scm 708 */
																		{	/* Llib/hash.scm 703 */
																			obj_t BgL_cellz00_1875;

																			BgL_cellz00_1875 = CAR(BgL_l1116z00_1872);
																			{	/* Llib/hash.scm 703 */
																				obj_t BgL_keyz00_1876;

																				BgL_keyz00_1876 =
																					CAR(((obj_t) BgL_cellz00_1875));
																				{	/* Llib/hash.scm 703 */
																					long BgL_nz00_1877;

																					{	/* Llib/hash.scm 704 */
																						long BgL_res2340z00_3855;

																						{	/* Llib/hash.scm 704 */
																							obj_t BgL_hashnz00_3843;

																							BgL_hashnz00_3843 =
																								STRUCT_REF(BgL_tablez00_117,
																								(int) (((long) 4)));
																							if (PROCEDUREP(BgL_hashnz00_3843))
																								{	/* Llib/hash.scm 704 */
																									obj_t BgL_arg1247z00_3845;

																									BgL_arg1247z00_3845 =
																										PROCEDURE_ENTRY
																										(BgL_hashnz00_3843)
																										(BgL_hashnz00_3843,
																										BgL_keyz00_1876, BEOA);
																									{	/* Llib/hash.scm 704 */
																										long BgL_nz00_3848;

																										BgL_nz00_3848 =
																											(long)
																											CINT(BgL_arg1247z00_3845);
																										if ((BgL_nz00_3848 <
																												((long) 0)))
																											{	/* Llib/hash.scm 704 */
																												BgL_res2340z00_3855 =
																													NEG(BgL_nz00_3848);
																											}
																										else
																											{	/* Llib/hash.scm 704 */
																												BgL_res2340z00_3855 =
																													BgL_nz00_3848;
																											}
																									}
																								}
																							else
																								{	/* Llib/hash.scm 704 */
																									BgL_res2340z00_3855 =
																										BGl_getzd2hashnumberzd2zz__hashz00
																										(BgL_keyz00_1876);
																								}
																						}
																						BgL_nz00_1877 = BgL_res2340z00_3855;
																					}
																					{	/* Llib/hash.scm 704 */
																						long BgL_hz00_1878;

																						{	/* Llib/hash.scm 705 */
																							long BgL_res2346z00_3874;

																							{	/* Llib/hash.scm 705 */
																								long BgL_n1z00_3856;
																								long BgL_n2z00_3857;

																								BgL_n1z00_3856 = BgL_nz00_1877;
																								BgL_n2z00_3857 =
																									BgL_newzd2lenzd2_1856;
																								{	/* Llib/hash.scm 705 */
																									bool_t BgL_test3000z00_6415;

																									{	/* Llib/hash.scm 705 */
																										long BgL_arg1818z00_3859;

																										BgL_arg1818z00_3859 =
																											(((BgL_n1z00_3856) |
																												(BgL_n2z00_3857)) &
																											-2147483648);
																										BgL_test3000z00_6415 =
																											(BgL_arg1818z00_3859 ==
																											((long) 0));
																									}
																									if (BgL_test3000z00_6415)
																										{	/* Llib/hash.scm 705 */
																											int32_t
																												BgL_arg1815z00_3860;
																											{	/* Llib/hash.scm 705 */
																												int32_t
																													BgL_arg1816z00_3861;
																												int32_t
																													BgL_arg1817z00_3862;
																												{	/* Llib/hash.scm 705 */
																													int32_t
																														BgL_res2342z00_3866;
																													BgL_res2342z00_3866 =
																														(int32_t)
																														(BgL_n1z00_3856);
																													BgL_arg1816z00_3861 =
																														BgL_res2342z00_3866;
																												}
																												{	/* Llib/hash.scm 705 */
																													int32_t
																														BgL_res2343z00_3868;
																													BgL_res2343z00_3868 =
																														(int32_t)
																														(BgL_n2z00_3857);
																													BgL_arg1817z00_3862 =
																														BgL_res2343z00_3868;
																												}
																												BgL_arg1815z00_3860 =
																													(BgL_arg1816z00_3861 %
																													BgL_arg1817z00_3862);
																											}
																											{	/* Llib/hash.scm 705 */
																												long
																													BgL_res2345z00_3873;
																												{	/* Llib/hash.scm 705 */
																													long
																														BgL_arg1925z00_3870;
																													BgL_arg1925z00_3870 =
																														(long)
																														(BgL_arg1815z00_3860);
																													{	/* Llib/hash.scm 705 */
																														long
																															BgL_res2344z00_3872;
																														BgL_res2344z00_3872
																															=
																															(long)
																															(BgL_arg1925z00_3870);
																														BgL_res2345z00_3873
																															=
																															BgL_res2344z00_3872;
																												}}
																												BgL_res2346z00_3874 =
																													BgL_res2345z00_3873;
																										}}
																									else
																										{	/* Llib/hash.scm 705 */
																											BgL_res2346z00_3874 =
																												(BgL_n1z00_3856 %
																												BgL_n2z00_3857);
																										}
																								}
																							}
																							BgL_hz00_1878 =
																								BgL_res2346z00_3874;
																						}
																						{	/* Llib/hash.scm 705 */

																							{	/* Llib/hash.scm 707 */
																								obj_t BgL_arg1531z00_1879;

																								BgL_arg1531z00_1879 =
																									MAKE_YOUNG_PAIR
																									(BgL_cellz00_1875,
																									VECTOR_REF
																									(BgL_newzd2buckszd2_1865,
																										BgL_hz00_1878));
																								VECTOR_SET
																									(BgL_newzd2buckszd2_1865,
																									BgL_hz00_1878,
																									BgL_arg1531z00_1879);
																							}
																						}
																					}
																				}
																			}
																		}
																		{
																			obj_t BgL_l1116z00_6427;

																			BgL_l1116z00_6427 =
																				CDR(BgL_l1116z00_1872);
																			BgL_l1116z00_1872 = BgL_l1116z00_6427;
																			goto
																				BgL_zc3z04anonymousza31529ze3z87_1873;
																		}
																	}
																else
																	{	/* Llib/hash.scm 708 */
																		((bool_t) 1);
																	}
															}
														}
														{
															long BgL_iz00_6429;

															BgL_iz00_6429 = (BgL_iz00_1867 + ((long) 1));
															BgL_iz00_1867 = BgL_iz00_6429;
															goto BgL_zc3z04anonymousza31527ze3z87_1868;
														}
													}
												else
													{	/* Llib/hash.scm 701 */
														BgL_tmpz00_6390 = ((bool_t) 0);
													}
												return BBOOL(BgL_tmpz00_6390);
											}
										}
									}
								else
									{	/* Llib/hash.scm 713 */
										obj_t BgL_arg1535z00_1885;

										{	/* Llib/hash.scm 713 */
											long BgL_arg1536z00_1886;

											BgL_arg1536z00_1886 =
												(long) CINT(STRUCT_REF(BgL_tablez00_117,
													(int) (((long) 0))));
											{	/* Llib/hash.scm 711 */
												obj_t BgL_list1537z00_1887;

												{	/* Llib/hash.scm 711 */
													obj_t BgL_arg1540z00_1888;

													{	/* Llib/hash.scm 711 */
														obj_t BgL_arg1541z00_1889;

														BgL_arg1541z00_1889 =
															MAKE_YOUNG_PAIR(BINT(BgL_arg1536z00_1886), BNIL);
														BgL_arg1540z00_1888 =
															MAKE_YOUNG_PAIR(BgL_maxzd2lenzd2_1857,
															BgL_arg1541z00_1889);
													}
													BgL_list1537z00_1887 =
														MAKE_YOUNG_PAIR(BINT(BgL_newzd2lenzd2_1856),
														BgL_arg1540z00_1888);
												}
												BgL_arg1535z00_1885 =
													BGl_formatz00zz__r4_output_6_10_3z00
													(BGl_string2689z00zz__hashz00, BgL_list1537z00_1887);
										}}
										return
											BGl_errorz00zz__errorz00(BGl_string2690z00zz__hashz00,
											BgL_arg1535z00_1885, BgL_tablez00_117);
									}
							}
						}
					}
				}
			}
		}

	}



/* get-hashnumber */
	BGL_EXPORTED_DEF long BGl_getzd2hashnumberzd2zz__hashz00(obj_t BgL_keyz00_118)
	{
		{	/* Llib/hash.scm 719 */
		BGl_getzd2hashnumberzd2zz__hashz00:
			if (STRINGP(BgL_keyz00_118))
				{	/* Llib/hash.scm 722 */
					long BgL_arg1544z00_1892;

					BgL_arg1544z00_1892 =
						bgl_string_hash_number(BSTRING_TO_STRING(BgL_keyz00_118));
					if ((BgL_arg1544z00_1892 < ((long) 0)))
						{	/* Llib/hash.scm 722 */
							return NEG(BgL_arg1544z00_1892);
						}
					else
						{	/* Llib/hash.scm 722 */
							return BgL_arg1544z00_1892;
						}
				}
			else
				{	/* Llib/hash.scm 721 */
					if (SYMBOLP(BgL_keyz00_118))
						{	/* Llib/hash.scm 724 */
							long BgL_arg1546z00_1894;

							BgL_arg1546z00_1894 = bgl_symbol_hash_number(BgL_keyz00_118);
							if ((BgL_arg1546z00_1894 < ((long) 0)))
								{	/* Llib/hash.scm 724 */
									return NEG(BgL_arg1546z00_1894);
								}
							else
								{	/* Llib/hash.scm 724 */
									return BgL_arg1546z00_1894;
								}
						}
					else
						{	/* Llib/hash.scm 723 */
							if (KEYWORDP(BgL_keyz00_118))
								{	/* Llib/hash.scm 726 */
									long BgL_arg1551z00_1896;

									BgL_arg1551z00_1896 = bgl_keyword_hash_number(BgL_keyz00_118);
									if ((BgL_arg1551z00_1896 < ((long) 0)))
										{	/* Llib/hash.scm 726 */
											return NEG(BgL_arg1551z00_1896);
										}
									else
										{	/* Llib/hash.scm 726 */
											return BgL_arg1551z00_1896;
										}
								}
							else
								{	/* Llib/hash.scm 725 */
									if (INTEGERP(BgL_keyz00_118))
										{	/* Llib/hash.scm 728 */
											long BgL_nz00_3910;

											BgL_nz00_3910 = (long) CINT(BgL_keyz00_118);
											if ((BgL_nz00_3910 < ((long) 0)))
												{	/* Llib/hash.scm 728 */
													return NEG(BgL_nz00_3910);
												}
											else
												{	/* Llib/hash.scm 728 */
													return BgL_nz00_3910;
												}
										}
									else
										{	/* Llib/hash.scm 727 */
											if (ELONGP(BgL_keyz00_118))
												{	/* Llib/hash.scm 730 */
													long BgL_arg1554z00_1899;

													{	/* Llib/hash.scm 730 */
														long BgL_tmpz00_6469;

														BgL_tmpz00_6469 = BELONG_TO_LONG(BgL_keyz00_118);
														BgL_arg1554z00_1899 = (long) (BgL_tmpz00_6469);
													}
													if ((BgL_arg1554z00_1899 < ((long) 0)))
														{	/* Llib/hash.scm 730 */
															return NEG(BgL_arg1554z00_1899);
														}
													else
														{	/* Llib/hash.scm 730 */
															return BgL_arg1554z00_1899;
														}
												}
											else
												{	/* Llib/hash.scm 729 */
													if (LLONGP(BgL_keyz00_118))
														{	/* Llib/hash.scm 732 */
															long BgL_arg1556z00_1901;

															{	/* Llib/hash.scm 732 */
																BGL_LONGLONG_T BgL_tmpz00_6477;

																BgL_tmpz00_6477 =
																	BLLONG_TO_LLONG(BgL_keyz00_118);
																BgL_arg1556z00_1901 = (long) (BgL_tmpz00_6477);
															}
															if ((BgL_arg1556z00_1901 < ((long) 0)))
																{	/* Llib/hash.scm 732 */
																	return NEG(BgL_arg1556z00_1901);
																}
															else
																{	/* Llib/hash.scm 732 */
																	return BgL_arg1556z00_1901;
																}
														}
													else
														{	/* Llib/hash.scm 731 */
															if (BGL_OBJECTP(BgL_keyz00_118))
																{	/* Llib/hash.scm 734 */
																	int BgL_arg1558z00_1903;

																	BgL_arg1558z00_1903 =
																		BGl_objectzd2hashnumberzd2zz__objectz00(
																		((BgL_objectz00_bglt) BgL_keyz00_118));
																	{	/* Llib/hash.scm 734 */
																		long BgL_nz00_3934;

																		BgL_nz00_3934 =
																			(long) (BgL_arg1558z00_1903);
																		if ((BgL_nz00_3934 < ((long) 0)))
																			{	/* Llib/hash.scm 734 */
																				return NEG(BgL_nz00_3934);
																			}
																		else
																			{	/* Llib/hash.scm 734 */
																				return BgL_nz00_3934;
																			}
																	}
																}
															else
																{	/* Llib/hash.scm 733 */
																	if (FOREIGNP(BgL_keyz00_118))
																		{	/* Llib/hash.scm 736 */
																			long BgL_arg1560z00_1905;

																			BgL_arg1560z00_1905 =
																				bgl_foreign_hash_number(BgL_keyz00_118);
																			if ((BgL_arg1560z00_1905 < ((long) 0)))
																				{	/* Llib/hash.scm 736 */
																					return NEG(BgL_arg1560z00_1905);
																				}
																			else
																				{	/* Llib/hash.scm 736 */
																					return BgL_arg1560z00_1905;
																				}
																		}
																	else
																		{	/* Llib/hash.scm 737 */
																			bool_t BgL_test3017z00_6497;

																			if (INTEGERP(BgL_keyz00_118))
																				{	/* Llib/hash.scm 737 */
																					BgL_test3017z00_6497 = ((bool_t) 1);
																				}
																			else
																				{	/* Llib/hash.scm 737 */
																					BgL_test3017z00_6497 =
																						REALP(BgL_keyz00_118);
																				}
																			if (BgL_test3017z00_6497)
																				{	/* Llib/hash.scm 738 */
																					long BgL_arg1562z00_1907;

																					BgL_arg1562z00_1907 =
																						(long) (REAL_TO_DOUBLE
																						(BgL_keyz00_118));
																					{
																						obj_t BgL_keyz00_6503;

																						BgL_keyz00_6503 =
																							BINT(BgL_arg1562z00_1907);
																						BgL_keyz00_118 = BgL_keyz00_6503;
																						goto
																							BGl_getzd2hashnumberzd2zz__hashz00;
																					}
																				}
																			else
																				{	/* Llib/hash.scm 740 */
																					long BgL_arg1563z00_1908;

																					BgL_arg1563z00_1908 =
																						bgl_obj_hash_number(BgL_keyz00_118);
																					if (
																						(BgL_arg1563z00_1908 < ((long) 0)))
																						{	/* Llib/hash.scm 740 */
																							return NEG(BgL_arg1563z00_1908);
																						}
																					else
																						{	/* Llib/hash.scm 740 */
																							return BgL_arg1563z00_1908;
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



/* &get-hashnumber */
	obj_t BGl_z62getzd2hashnumberzb0zz__hashz00(obj_t BgL_envz00_4591,
		obj_t BgL_keyz00_4592)
	{
		{	/* Llib/hash.scm 719 */
			return BINT(BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_4592));
		}

	}



/* get-hashnumber-persistent */
	BGL_EXPORTED_DEF long BGl_getzd2hashnumberzd2persistentz00zz__hashz00(obj_t
		BgL_keyz00_119)
	{
		{	/* Llib/hash.scm 747 */
			return BGl_objzd2hashze70z35zz__hashz00(BgL_keyz00_119);
		}

	}



/* obj-hash~0 */
	long BGl_objzd2hashze70z35zz__hashz00(obj_t BgL_keyz00_1957)
	{
		{	/* Llib/hash.scm 809 */
		BGl_objzd2hashze70z35zz__hashz00:
			{
				obj_t BgL_keyz00_1915;
				obj_t BgL_keyz00_1940;

				if (CNSTP(BgL_keyz00_1957))
					{	/* Llib/hash.scm 777 */
						if ((BgL_keyz00_1957 == BTRUE))
							{	/* Llib/hash.scm 779 */
								return ((long) 12);
							}
						else
							{	/* Llib/hash.scm 779 */
								if ((BgL_keyz00_1957 == BFALSE))
									{	/* Llib/hash.scm 780 */
										return ((long) 445);
									}
								else
									{	/* Llib/hash.scm 780 */
										if ((BgL_keyz00_1957 == BUNSPEC))
											{	/* Llib/hash.scm 781 */
												return ((long) 3199);
											}
										else
											{	/* Llib/hash.scm 781 */
												if ((BgL_keyz00_1957 == BNIL))
													{	/* Llib/hash.scm 782 */
														return ((long) 453343);
													}
												else
													{	/* Llib/hash.scm 782 */
														return ((long) 21354);
					}}}}}
				else
					{	/* Llib/hash.scm 777 */
						if (STRINGP(BgL_keyz00_1957))
							{	/* Llib/hash.scm 784 */
								return
									(((long) 134217727) &
									bgl_string_hash_number(BSTRING_TO_STRING(BgL_keyz00_1957)));
							}
						else
							{	/* Llib/hash.scm 784 */
								if (SYMBOLP(BgL_keyz00_1957))
									{	/* Llib/hash.scm 786 */
										return
											(((long) 134217727) &
											bgl_symbol_hash_number(BgL_keyz00_1957));
									}
								else
									{	/* Llib/hash.scm 786 */
										if (KEYWORDP(BgL_keyz00_1957))
											{	/* Llib/hash.scm 788 */
												return
													(((long) 134217727) &
													bgl_keyword_hash_number(BgL_keyz00_1957));
											}
										else
											{	/* Llib/hash.scm 788 */
												if (CHARP(BgL_keyz00_1957))
													{	/* Llib/hash.scm 790 */
														return
															(((long) 134217727) & (CCHAR(BgL_keyz00_1957)));
													}
												else
													{	/* Llib/hash.scm 790 */
														if (INTEGERP(BgL_keyz00_1957))
															{	/* Llib/hash.scm 792 */
																return
																	(((long) 134217727) &
																	(long) CINT(BgL_keyz00_1957));
															}
														else
															{	/* Llib/hash.scm 792 */
																if (ELONGP(BgL_keyz00_1957))
																	{	/* Llib/hash.scm 795 */
																		long BgL_arg1607z00_1974;

																		{	/* Llib/hash.scm 795 */
																			long BgL_tmpz00_6546;

																			BgL_tmpz00_6546 =
																				BELONG_TO_LONG(BgL_keyz00_1957);
																			BgL_arg1607z00_1974 =
																				(long) (BgL_tmpz00_6546);
																		}
																		return
																			(((long) 134217727) &
																			BgL_arg1607z00_1974);
																	}
																else
																	{	/* Llib/hash.scm 794 */
																		if (LLONGP(BgL_keyz00_1957))
																			{	/* Llib/hash.scm 797 */
																				long BgL_arg1611z00_1976;

																				{	/* Llib/hash.scm 797 */
																					BGL_LONGLONG_T BgL_tmpz00_6552;

																					BgL_tmpz00_6552 =
																						BLLONG_TO_LLONG(BgL_keyz00_1957);
																					BgL_arg1611z00_1976 =
																						(long) (BgL_tmpz00_6552);
																				}
																				return
																					(((long) 134217727) &
																					BgL_arg1611z00_1976);
																			}
																		else
																			{	/* Llib/hash.scm 796 */
																				if (UCS2P(BgL_keyz00_1957))
																					{	/* Llib/hash.scm 799 */
																						long BgL_arg1613z00_1978;

																						{	/* Llib/hash.scm 799 */
																							int BgL_arg1614z00_1979;

																							{	/* Llib/hash.scm 799 */
																								int BgL_res2449z00_4166;

																								{	/* Llib/hash.scm 799 */
																									ucs2_t BgL_ucs2z00_4165;

																									BgL_ucs2z00_4165 =
																										CUCS2(BgL_keyz00_1957);
																									{	/* Llib/hash.scm 799 */
																										obj_t BgL_tmpz00_6559;

																										BgL_tmpz00_6559 =
																											BUCS2(BgL_ucs2z00_4165);
																										BgL_res2449z00_4166 =
																											CUCS2(BgL_tmpz00_6559);
																								}}
																								BgL_arg1614z00_1979 =
																									BgL_res2449z00_4166;
																							}
																							BgL_arg1613z00_1978 =
																								(((long) 39434) ^
																								(long) (BgL_arg1614z00_1979));
																						}
																						return
																							(((long) 134217727) &
																							BgL_arg1613z00_1978);
																					}
																				else
																					{	/* Llib/hash.scm 798 */
																						if (BGL_DATEP(BgL_keyz00_1957))
																							{	/* Llib/hash.scm 801 */
																								long BgL_arg1616z00_1981;

																								{	/* Llib/hash.scm 801 */
																									long BgL_arg1617z00_1982;

																									{	/* Llib/hash.scm 801 */
																										long BgL_arg1618z00_1983;

																										BgL_arg1618z00_1983 =
																											bgl_date_to_seconds
																											(BgL_keyz00_1957);
																										BgL_arg1617z00_1982 =
																											BGl_objzd2hashze70z35zz__hashz00
																											(make_belong
																											(BgL_arg1618z00_1983));
																									}
																									BgL_arg1616z00_1981 =
																										(((long) 908) ^
																										BgL_arg1617z00_1982);
																								}
																								return
																									(((long) 134217727) &
																									BgL_arg1616z00_1981);
																							}
																						else
																							{	/* Llib/hash.scm 802 */
																								bool_t BgL_test3034z00_6572;

																								if (INTEGERP(BgL_keyz00_1957))
																									{	/* Llib/hash.scm 802 */
																										BgL_test3034z00_6572 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Llib/hash.scm 802 */
																										BgL_test3034z00_6572 =
																											REALP(BgL_keyz00_1957);
																									}
																								if (BgL_test3034z00_6572)
																									{	/* Llib/hash.scm 803 */
																										long BgL_arg1620z00_1985;

																										BgL_arg1620z00_1985 =
																											(long) (
																											(REAL_TO_DOUBLE
																												(BgL_keyz00_1957) *
																												((double) 1000.0)));
																										{
																											obj_t BgL_keyz00_6579;

																											BgL_keyz00_6579 =
																												BINT
																												(BgL_arg1620z00_1985);
																											BgL_keyz00_1957 =
																												BgL_keyz00_6579;
																											goto
																												BGl_objzd2hashze70z35zz__hashz00;
																										}
																									}
																								else
																									{	/* Llib/hash.scm 802 */
																										if (UCS2_STRINGP
																											(BgL_keyz00_1957))
																											{	/* Llib/hash.scm 750 */
																												long BgL_tmpz00_6583;

																												BgL_keyz00_1940 =
																													BgL_keyz00_1957;
																												{	/* Llib/hash.scm 765 */
																													int BgL_lenz00_1942;

																													BgL_lenz00_1942 =
																														UCS2_STRING_LENGTH
																														(BgL_keyz00_1940);
																													{	/* Llib/hash.scm 766 */
																														long
																															BgL_g1065z00_1943;
																														long
																															BgL_g1066z00_1944;
																														BgL_g1065z00_1943 =
																															((long)
																															(BgL_lenz00_1942)
																															- ((long) 1));
																														BgL_g1066z00_1944 =
																															(((long)
																																134217727) &
																															(((long) 235643) ^
																																(long)
																																(BgL_lenz00_1942)));
																														{
																															long
																																BgL_iz00_4100;
																															long
																																BgL_accz00_4101;
																															BgL_iz00_4100 =
																																BgL_g1065z00_1943;
																															BgL_accz00_4101 =
																																BgL_g1066z00_1944;
																														BgL_loopz00_4099:
																															if (
																																(BgL_iz00_4100
																																	==
																																	((long) -1)))
																																{	/* Llib/hash.scm 768 */
																																	BgL_tmpz00_6583
																																		=
																																		BgL_accz00_4101;
																																}
																															else
																																{	/* Llib/hash.scm 770 */
																																	long
																																		BgL_arg1582z00_4109;
																																	long
																																		BgL_arg1583z00_4110;
																																	BgL_arg1582z00_4109
																																		=
																																		(BgL_iz00_4100
																																		-
																																		((long) 1));
																																	{	/* Llib/hash.scm 773 */
																																		long
																																			BgL_arg1584z00_4111;
																																		{	/* Llib/hash.scm 773 */
																																			long
																																				BgL_arg1587z00_4112;
																																			{	/* Llib/hash.scm 773 */
																																				ucs2_t
																																					BgL_arg1588z00_4113;
																																				{	/* Llib/hash.scm 773 */
																																					ucs2_t
																																						BgL_res2429z00_4134;
																																					{	/* Llib/hash.scm 773 */
																																						int
																																							BgL_kz00_4119;
																																						BgL_kz00_4119
																																							=
																																							(int)
																																							(BgL_iz00_4100);
																																						{	/* Llib/hash.scm 773 */
																																							bool_t
																																								BgL_test3038z00_6594;
																																							{	/* Llib/hash.scm 773 */
																																								long
																																									BgL_auxz00_6597;
																																								long
																																									BgL_tmpz00_6595;
																																								BgL_auxz00_6597
																																									=
																																									(long)
																																									(UCS2_STRING_LENGTH
																																									(BgL_keyz00_1940));
																																								BgL_tmpz00_6595
																																									=
																																									(long)
																																									(BgL_kz00_4119);
																																								BgL_test3038z00_6594
																																									=
																																									BOUND_CHECK
																																									(BgL_tmpz00_6595,
																																									BgL_auxz00_6597);
																																							}
																																							if (BgL_test3038z00_6594)
																																								{	/* Llib/hash.scm 773 */
																																									BgL_res2429z00_4134
																																										=
																																										UCS2_STRING_REF
																																										(BgL_keyz00_1940,
																																										BgL_kz00_4119);
																																								}
																																							else
																																								{	/* Llib/hash.scm 773 */
																																									obj_t
																																										BgL_arg1971z00_4122;
																																									{	/* Llib/hash.scm 773 */
																																										obj_t
																																											BgL_arg1972z00_4123;
																																										{	/* Llib/hash.scm 773 */

																																											BgL_arg1972z00_4123
																																												=
																																												BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																																												(
																																												((long) (UCS2_STRING_LENGTH(BgL_keyz00_1940)) - ((long) 1)), ((long) 10));
																																										}
																																										BgL_arg1971z00_4122
																																											=
																																											string_append_3
																																											(BGl_string2691z00zz__hashz00,
																																											BgL_arg1972z00_4123,
																																											BGl_string2692z00zz__hashz00);
																																									}
																																									BgL_res2429z00_4134
																																										=
																																										CUCS2
																																										(BGl_errorz00zz__errorz00
																																										(BGl_symbol2693z00zz__hashz00,
																																											BgL_arg1971z00_4122,
																																											BINT
																																											(BgL_kz00_4119)));
																																					}}}
																																					BgL_arg1588z00_4113
																																						=
																																						BgL_res2429z00_4134;
																																				}
																																				BgL_arg1587z00_4112
																																					=
																																					BGl_objzd2hashze70z35zz__hashz00
																																					(BUCS2
																																					(BgL_arg1588z00_4113));
																																			}
																																			BgL_arg1584z00_4111
																																				=
																																				(BgL_arg1587z00_4112
																																				^
																																				BgL_accz00_4101);
																																		}
																																		BgL_arg1583z00_4110
																																			=
																																			(((long)
																																				134217727)
																																			&
																																			BgL_arg1584z00_4111);
																																	}
																																	{
																																		long
																																			BgL_accz00_6615;
																																		long
																																			BgL_iz00_6614;
																																		BgL_iz00_6614
																																			=
																																			BgL_arg1582z00_4109;
																																		BgL_accz00_6615
																																			=
																																			BgL_arg1583z00_4110;
																																		BgL_accz00_4101
																																			=
																																			BgL_accz00_6615;
																																		BgL_iz00_4100
																																			=
																																			BgL_iz00_6614;
																																		goto
																																			BgL_loopz00_4099;
																																	}
																																}
																														}
																													}
																												}
																												return
																													(((long) 134217727) &
																													BgL_tmpz00_6583);
																											}
																										else
																											{	/* Llib/hash.scm 804 */
																												if (BGL_HVECTORP
																													(BgL_keyz00_1957))
																													{	/* Llib/hash.scm 806 */
																														BgL_keyz00_1915 =
																															BgL_keyz00_1957;
																														{	/* Llib/hash.scm 753 */
																															long
																																BgL_lenz00_1917;
																															BgL_lenz00_1917 =
																																BGL_HVECTOR_LENGTH
																																(BgL_keyz00_1915);
																															{	/* Llib/hash.scm 754 */
																																obj_t
																																	BgL_tagz00_1918;
																																BgL_tagz00_1918
																																	=
																																	BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00
																																	(BgL_keyz00_1915);
																																{	/* Llib/hash.scm 755 */
																																	obj_t
																																		BgL__z00_1919;
																																	obj_t
																																		BgL_getz00_1920;
																																	obj_t
																																		BgL__z00_1921;
																																	obj_t
																																		BgL__z00_1922;
																																	{	/* Llib/hash.scm 756 */
																																		int
																																			BgL_tmpz00_6621;
																																		BgL_tmpz00_6621
																																			=
																																			(int) ((
																																				(long)
																																				1));
																																		BgL__z00_1919
																																			=
																																			BGL_MVALUES_VAL
																																			(BgL_tmpz00_6621);
																																	}
																																	{	/* Llib/hash.scm 756 */
																																		int
																																			BgL_tmpz00_6624;
																																		BgL_tmpz00_6624
																																			=
																																			(int) ((
																																				(long)
																																				2));
																																		BgL_getz00_1920
																																			=
																																			BGL_MVALUES_VAL
																																			(BgL_tmpz00_6624);
																																	}
																																	{	/* Llib/hash.scm 756 */
																																		int
																																			BgL_tmpz00_6627;
																																		BgL_tmpz00_6627
																																			=
																																			(int) ((
																																				(long)
																																				3));
																																		BgL__z00_1921
																																			=
																																			BGL_MVALUES_VAL
																																			(BgL_tmpz00_6627);
																																	}
																																	{	/* Llib/hash.scm 756 */
																																		int
																																			BgL_tmpz00_6630;
																																		BgL_tmpz00_6630
																																			=
																																			(int) ((
																																				(long)
																																				4));
																																		BgL__z00_1922
																																			=
																																			BGL_MVALUES_VAL
																																			(BgL_tmpz00_6630);
																																	}
																																	{	/* Llib/hash.scm 756 */
																																		long
																																			BgL_g1063z00_1923;
																																		long
																																			BgL_g1064z00_1924;
																																		BgL_g1063z00_1923
																																			=
																																			(BgL_lenz00_1917
																																			-
																																			((long)
																																				1));
																																		BgL_g1064z00_1924
																																			=
																																			(((long)
																																				134217727)
																																			& (((long)
																																					98723)
																																				^
																																				(((long)
																																						134217727)
																																					&
																																					(BgL_lenz00_1917
																																						^
																																						BGl_objzd2hashze70z35zz__hashz00
																																						(BgL_tagz00_1918)))));
																																		{
																																			long
																																				BgL_iz00_4004;
																																			long
																																				BgL_accz00_4005;
																																			BgL_iz00_4004
																																				=
																																				BgL_g1063z00_1923;
																																			BgL_accz00_4005
																																				=
																																				BgL_g1064z00_1924;
																																		BgL_loopz00_4003:
																																			if (
																																				(BgL_iz00_4004
																																					==
																																					((long) -1)))
																																				{	/* Llib/hash.scm 759 */
																																					return
																																						BgL_accz00_4005;
																																				}
																																			else
																																				{	/* Llib/hash.scm 761 */
																																					obj_t
																																						BgL_oz00_4013;
																																					BgL_oz00_4013
																																						=
																																						PROCEDURE_ENTRY
																																						(BgL_getz00_1920)
																																						(BgL_getz00_1920,
																																						BgL_keyz00_1915,
																																						BINT
																																						(BgL_iz00_4004),
																																						BEOA);
																																					{
																																						long
																																							BgL_accz00_6649;
																																						long
																																							BgL_iz00_6647;
																																						BgL_iz00_6647
																																							=
																																							(BgL_iz00_4004
																																							-
																																							((long) 1));
																																						BgL_accz00_6649
																																							=
																																							(((long) 134217727) & (BgL_accz00_4005 ^ BGl_objzd2hashze70z35zz__hashz00(BgL_oz00_4013)));
																																						BgL_accz00_4005
																																							=
																																							BgL_accz00_6649;
																																						BgL_iz00_4004
																																							=
																																							BgL_iz00_6647;
																																						goto
																																							BgL_loopz00_4003;
																																					}
																																				}
																																		}
																																	}
																																}
																															}
																														}
																													}
																												else
																													{	/* Llib/hash.scm 809 */
																														obj_t
																															BgL_arg1626z00_1990;
																														{	/* Llib/hash.scm 809 */

																															BgL_arg1626z00_1990
																																=
																																obj_to_string
																																(BgL_keyz00_1957,
																																BFALSE);
																														}
																														{
																															obj_t
																																BgL_keyz00_6654;
																															BgL_keyz00_6654 =
																																BgL_arg1626z00_1990;
																															BgL_keyz00_1957 =
																																BgL_keyz00_6654;
																															goto
																																BGl_objzd2hashze70z35zz__hashz00;
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



/* &get-hashnumber-persistent */
	obj_t BGl_z62getzd2hashnumberzd2persistentz62zz__hashz00(obj_t
		BgL_envz00_4593, obj_t BgL_keyz00_4594)
	{
		{	/* Llib/hash.scm 747 */
			return
				BINT(BGl_getzd2hashnumberzd2persistentz00zz__hashz00(BgL_keyz00_4594));
		}

	}



/* get-pointer-hashnumber */
	BGL_EXPORTED_DEF long BGl_getzd2pointerzd2hashnumberz00zz__hashz00(obj_t
		BgL_ptrz00_120, long BgL_powerz00_121)
	{
		{	/* Llib/hash.scm 816 */
			return bgl_pointer_hashnumber(BgL_ptrz00_120, BgL_powerz00_121);
		}

	}



/* &get-pointer-hashnumber */
	obj_t BGl_z62getzd2pointerzd2hashnumberz62zz__hashz00(obj_t BgL_envz00_4595,
		obj_t BgL_ptrz00_4596, obj_t BgL_powerz00_4597)
	{
		{	/* Llib/hash.scm 816 */
			{	/* Llib/hash.scm 817 */
				long BgL_tmpz00_6658;

				{	/* Llib/hash.scm 817 */
					long BgL_auxz00_6659;

					{	/* Llib/hash.scm 817 */
						obj_t BgL_tmpz00_6660;

						if (INTEGERP(BgL_powerz00_4597))
							{	/* Llib/hash.scm 817 */
								BgL_tmpz00_6660 = BgL_powerz00_4597;
							}
						else
							{
								obj_t BgL_auxz00_6663;

								BgL_auxz00_6663 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2657z00zz__hashz00,
									BINT(((long) 31630)), BGl_string2695z00zz__hashz00,
									BGl_string2659z00zz__hashz00, BgL_powerz00_4597);
								FAILURE(BgL_auxz00_6663, BFALSE, BFALSE);
							}
						BgL_auxz00_6659 = (long) CINT(BgL_tmpz00_6660);
					}
					BgL_tmpz00_6658 =
						BGl_getzd2pointerzd2hashnumberz00zz__hashz00(BgL_ptrz00_4596,
						BgL_auxz00_6659);
				}
				return BINT(BgL_tmpz00_6658);
			}
		}

	}



/* _string-hash */
	obj_t BGl__stringzd2hashzd2zz__hashz00(obj_t BgL_env1148z00_126,
		obj_t BgL_opt1147z00_125)
	{
		{	/* Llib/hash.scm 822 */
			{	/* Llib/hash.scm 822 */
				obj_t BgL_g1149z00_1997;

				BgL_g1149z00_1997 = VECTOR_REF(BgL_opt1147z00_125, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1147z00_125))
					{
					case ((long) 1):

						{	/* Llib/hash.scm 822 */

							{	/* Llib/hash.scm 822 */
								long BgL_res2462z00_4193;

								{	/* Llib/hash.scm 822 */
									obj_t BgL_stringz00_4188;

									if (STRINGP(BgL_g1149z00_1997))
										{	/* Llib/hash.scm 822 */
											BgL_stringz00_4188 = BgL_g1149z00_1997;
										}
									else
										{
											obj_t BgL_auxz00_6673;

											BgL_auxz00_6673 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2657z00zz__hashz00, BINT(((long) 31887)),
												BGl_string2696z00zz__hashz00,
												BGl_string2697z00zz__hashz00, BgL_g1149z00_1997);
											FAILURE(BgL_auxz00_6673, BFALSE, BFALSE);
										}
									{	/* Llib/hash.scm 823 */
										obj_t BgL_arg1629z00_4189;

										BgL_arg1629z00_4189 =
											BINT(STRING_LENGTH(BgL_stringz00_4188));
										{	/* Llib/hash.scm 823 */
											int BgL_tmpz00_6679;

											{	/* Llib/hash.scm 823 */
												obj_t BgL_tmpz00_6682;

												if (INTEGERP(BgL_arg1629z00_4189))
													{	/* Llib/hash.scm 823 */
														BgL_tmpz00_6682 = BgL_arg1629z00_4189;
													}
												else
													{
														obj_t BgL_auxz00_6685;

														BgL_auxz00_6685 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2657z00zz__hashz00,
															BINT(((long) 32001)),
															BGl_string2696z00zz__hashz00,
															BGl_string2659z00zz__hashz00,
															BgL_arg1629z00_4189);
														FAILURE(BgL_auxz00_6685, BFALSE, BFALSE);
													}
												BgL_tmpz00_6679 = CINT(BgL_tmpz00_6682);
											}
											BgL_res2462z00_4193 =
												bgl_string_hash(BSTRING_TO_STRING(BgL_stringz00_4188),
												(int) (((long) 0)), BgL_tmpz00_6679);
								}}}
								return BINT(BgL_res2462z00_4193);
							}
						}
						break;
					case ((long) 2):

						{	/* Llib/hash.scm 822 */
							obj_t BgL_startz00_2003;

							BgL_startz00_2003 = VECTOR_REF(BgL_opt1147z00_125, ((long) 1));
							{	/* Llib/hash.scm 822 */

								{	/* Llib/hash.scm 822 */
									long BgL_res2464z00_4199;

									{	/* Llib/hash.scm 822 */
										obj_t BgL_stringz00_4194;

										if (STRINGP(BgL_g1149z00_1997))
											{	/* Llib/hash.scm 822 */
												BgL_stringz00_4194 = BgL_g1149z00_1997;
											}
										else
											{
												obj_t BgL_auxz00_6695;

												BgL_auxz00_6695 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2657z00zz__hashz00, BINT(((long) 31887)),
													BGl_string2696z00zz__hashz00,
													BGl_string2697z00zz__hashz00, BgL_g1149z00_1997);
												FAILURE(BgL_auxz00_6695, BFALSE, BFALSE);
											}
										{	/* Llib/hash.scm 823 */
											obj_t BgL_arg1629z00_4195;

											BgL_arg1629z00_4195 =
												BINT(STRING_LENGTH(BgL_stringz00_4194));
											{	/* Llib/hash.scm 823 */
												int BgL_auxz00_6711;
												int BgL_tmpz00_6701;

												{	/* Llib/hash.scm 823 */
													obj_t BgL_tmpz00_6712;

													if (INTEGERP(BgL_arg1629z00_4195))
														{	/* Llib/hash.scm 823 */
															BgL_tmpz00_6712 = BgL_arg1629z00_4195;
														}
													else
														{
															obj_t BgL_auxz00_6715;

															BgL_auxz00_6715 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2657z00zz__hashz00,
																BINT(((long) 32001)),
																BGl_string2696z00zz__hashz00,
																BGl_string2659z00zz__hashz00,
																BgL_arg1629z00_4195);
															FAILURE(BgL_auxz00_6715, BFALSE, BFALSE);
														}
													BgL_auxz00_6711 = CINT(BgL_tmpz00_6712);
												}
												{	/* Llib/hash.scm 823 */
													obj_t BgL_tmpz00_6703;

													if (INTEGERP(BgL_startz00_2003))
														{	/* Llib/hash.scm 823 */
															BgL_tmpz00_6703 = BgL_startz00_2003;
														}
													else
														{
															obj_t BgL_auxz00_6706;

															BgL_auxz00_6706 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2657z00zz__hashz00,
																BINT(((long) 31965)),
																BGl_string2696z00zz__hashz00,
																BGl_string2659z00zz__hashz00,
																BgL_startz00_2003);
															FAILURE(BgL_auxz00_6706, BFALSE, BFALSE);
														}
													BgL_tmpz00_6701 = CINT(BgL_tmpz00_6703);
												}
												BgL_res2464z00_4199 =
													bgl_string_hash(BSTRING_TO_STRING(BgL_stringz00_4194),
													BgL_tmpz00_6701, BgL_auxz00_6711);
									}}}
									return BINT(BgL_res2464z00_4199);
								}
							}
						}
						break;
					case ((long) 3):

						{	/* Llib/hash.scm 822 */
							obj_t BgL_startz00_2005;

							BgL_startz00_2005 = VECTOR_REF(BgL_opt1147z00_125, ((long) 1));
							{	/* Llib/hash.scm 822 */
								obj_t BgL_lenz00_2006;

								BgL_lenz00_2006 = VECTOR_REF(BgL_opt1147z00_125, ((long) 2));
								{	/* Llib/hash.scm 822 */

									{	/* Llib/hash.scm 822 */
										long BgL_res2466z00_4205;

										{	/* Llib/hash.scm 822 */
											obj_t BgL_stringz00_4200;

											if (STRINGP(BgL_g1149z00_1997))
												{	/* Llib/hash.scm 822 */
													BgL_stringz00_4200 = BgL_g1149z00_1997;
												}
											else
												{
													obj_t BgL_auxz00_6726;

													BgL_auxz00_6726 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2657z00zz__hashz00, BINT(((long) 31887)),
														BGl_string2696z00zz__hashz00,
														BGl_string2697z00zz__hashz00, BgL_g1149z00_1997);
													FAILURE(BgL_auxz00_6726, BFALSE, BFALSE);
												}
											{	/* Llib/hash.scm 823 */
												obj_t BgL_arg1629z00_4201;

												if (CBOOL(BgL_lenz00_2006))
													{	/* Llib/hash.scm 823 */
														BgL_arg1629z00_4201 = BgL_lenz00_2006;
													}
												else
													{	/* Llib/hash.scm 823 */
														BgL_arg1629z00_4201 =
															BINT(STRING_LENGTH(BgL_stringz00_4200));
													}
												{	/* Llib/hash.scm 823 */
													int BgL_auxz00_6744;
													int BgL_tmpz00_6734;

													{	/* Llib/hash.scm 823 */
														obj_t BgL_tmpz00_6745;

														if (INTEGERP(BgL_arg1629z00_4201))
															{	/* Llib/hash.scm 823 */
																BgL_tmpz00_6745 = BgL_arg1629z00_4201;
															}
														else
															{
																obj_t BgL_auxz00_6748;

																BgL_auxz00_6748 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2657z00zz__hashz00,
																	BINT(((long) 32001)),
																	BGl_string2696z00zz__hashz00,
																	BGl_string2659z00zz__hashz00,
																	BgL_arg1629z00_4201);
																FAILURE(BgL_auxz00_6748, BFALSE, BFALSE);
															}
														BgL_auxz00_6744 = CINT(BgL_tmpz00_6745);
													}
													{	/* Llib/hash.scm 823 */
														obj_t BgL_tmpz00_6736;

														if (INTEGERP(BgL_startz00_2005))
															{	/* Llib/hash.scm 823 */
																BgL_tmpz00_6736 = BgL_startz00_2005;
															}
														else
															{
																obj_t BgL_auxz00_6739;

																BgL_auxz00_6739 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2657z00zz__hashz00,
																	BINT(((long) 31965)),
																	BGl_string2696z00zz__hashz00,
																	BGl_string2659z00zz__hashz00,
																	BgL_startz00_2005);
																FAILURE(BgL_auxz00_6739, BFALSE, BFALSE);
															}
														BgL_tmpz00_6734 = CINT(BgL_tmpz00_6736);
													}
													BgL_res2466z00_4205 =
														bgl_string_hash(BSTRING_TO_STRING
														(BgL_stringz00_4200), BgL_tmpz00_6734,
														BgL_auxz00_6744);
										}}}
										return BINT(BgL_res2466z00_4205);
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



/* string-hash */
	BGL_EXPORTED_DEF long BGl_stringzd2hashzd2zz__hashz00(obj_t BgL_stringz00_122,
		obj_t BgL_startz00_123, obj_t BgL_lenz00_124)
	{
		{	/* Llib/hash.scm 822 */
			{	/* Llib/hash.scm 823 */
				obj_t BgL_arg1629z00_4206;

				if (CBOOL(BgL_lenz00_124))
					{	/* Llib/hash.scm 823 */
						BgL_arg1629z00_4206 = BgL_lenz00_124;
					}
				else
					{	/* Llib/hash.scm 823 */
						BgL_arg1629z00_4206 = BINT(STRING_LENGTH(BgL_stringz00_122));
					}
				return
					bgl_string_hash(BSTRING_TO_STRING(BgL_stringz00_122),
					CINT(BgL_startz00_123), CINT(BgL_arg1629z00_4206));
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__hashz00()
	{
		{	/* Llib/hash.scm 18 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__hashz00()
	{
		{	/* Llib/hash.scm 18 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__hashz00()
	{
		{	/* Llib/hash.scm 18 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__hashz00()
	{
		{	/* Llib/hash.scm 18 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2698z00zz__hashz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string2698z00zz__hashz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2698z00zz__hashz00));
			return
				BGl_modulezd2initializa7ationz75zz__weakhashz00(((long) 56552663),
				BSTRING_TO_STRING(BGl_string2698z00zz__hashz00));
		}

	}

#ifdef __cplusplus
}
#endif
