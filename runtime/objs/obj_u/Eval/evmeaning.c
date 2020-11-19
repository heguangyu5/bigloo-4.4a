/*===========================================================================*/
/*   (Eval/evmeaning.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/evmeaning.scm -indent -o objs/obj_u/Eval/evmeaning.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_symbol2486z00zz__evmeaningz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31684ze3ze5zz__evmeaningz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31676ze3ze5zz__evmeaningz00(obj_t);
	static obj_t BGl_symbol2490z00zz__evmeaningz00 = BUNSPEC;
	static obj_t BGl_symbol2492z00zz__evmeaningz00 = BUNSPEC;
	static obj_t BGl_symbol2494z00zz__evmeaningz00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zz__evmeaningz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31669ze3ze5zz__evmeaningz00(obj_t,
		obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_evalzd2modulezd2zz__evmodulez00();
	static obj_t BGl_evmeaningzd2funcallzd20z00zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_evmeaningzd2funcallzd21z00zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_evmeaningzd2funcallzd22z00zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_evmeaningzd2funcallzd23z00zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_evmeaningzd2funcallzd24z00zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_evmeaningzd2makezd24procedurez00zz__evmeaningz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__evmeaningz00();
	static obj_t BGl_zc3z04exitza31546ze3ze70z60zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_evmeaningzd2tailcallzd22zd2stackzd2zz__evmeaningz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_z62evmeaningz62zz__evmeaningz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__evmeaningz00();
	extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	extern obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_evtypezd2errorzd2zz__everrorz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__evmeaningz00();
	extern obj_t BGl_2zf2zf2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t
		BGl_evmeaningzd2makezd2tracedzd24procedurezd2zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	extern bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_evmeaningzd2unboundzd2zz__evmeaningz00(obj_t, obj_t, obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evmeaningz00zz__evmeaningz00(obj_t, obj_t, obj_t);
	static obj_t BGl_evmeaningzd2bouncezd27z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd29z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_evmodulezd2namezd2zz__evmodulez00(obj_t);
	static obj_t BGl_appendzd221011zd2zz__evmeaningz00(obj_t, obj_t);
	static obj_t BGl_evmeaningzd2tailcallzd23zd2stackzd2zz__evmeaningz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__evmeaningz00();
	static obj_t BGl_zc3z04exitza31719ze3ze70z60zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_everrorz00zz__everrorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62__dummy__z62zz__evmeaningz00(obj_t, obj_t);
	static obj_t BGl_evmeaningzd2pushzd2vaargsz00zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31603ze3ze5zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t);
	extern bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern obj_t BGl_initzd2thezd2globalzd2environmentz12zc0zz__evenvz00();
	static obj_t BGl_evmeaningzd2bouncezd2175z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd2176z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2tailcallzd24zd2stackzd2zz__evmeaningz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_evmeaningzd2bouncezd214z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd217z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd218z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd225z00zz__evmeaningz00(obj_t);
	static obj_t BGl_evmeaningzd2bouncezd226z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd227z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd228z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd229z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__evmeaningz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evmodulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__everrorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evcompilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__typez00(long, char *);
	static obj_t BGl_evmeaningzd2uninitializa7edz75zz__evmeaningz00(obj_t, obj_t);
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31631ze3ze5zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31615ze3ze5zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd230z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd236z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd237z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd238z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd239z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	extern bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31624ze3ze5zz__evmeaningz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31608ze3ze5zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_evmeaningzd2bouncezd240z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd241z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd242z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd243z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd244z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd245z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd246z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd247z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd248z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd249z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	extern obj_t eval_funcall_0(obj_t);
	extern obj_t eval_funcall_1(obj_t, obj_t);
	extern obj_t eval_funcall_2(obj_t, obj_t, obj_t);
	extern obj_t eval_funcall_3(obj_t, obj_t, obj_t, obj_t);
	extern obj_t eval_funcall_4(obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t create_struct(obj_t, int);
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__evmeaningz00();
	static obj_t BGl_z62zc3z04anonymousza31552ze3ze5zz__evmeaningz00(obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd250z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_evarityzd2errorzd2zz__everrorz00(obj_t, obj_t, int, int);
	extern long bgl_list_length(obj_t);
	static obj_t BGl_evmeaningzd2bouncezd251z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd252z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd253z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd254z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_evwarningz00zz__everrorz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__evmeaningz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__evmeaningz00();
	static obj_t BGl_z62zc3z04anonymousza31553ze3ze5zz__evmeaningz00(obj_t);
	static obj_t BGl_evmeaningzd2bouncezd264z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd267z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd268z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_evmodulezd2findzd2globalz00zz__evmodulez00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31651ze3ze5zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31619ze3ze5zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd270z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd271z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(int, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31644ze3ze5zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31628ze3ze5zz__evmeaningz00(obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2tailcallzd20zd2stackzd2zz__evmeaningz00(obj_t,
		obj_t, obj_t, obj_t);
	extern bool_t BGl_evmodulezf3zf3zz__evmodulez00(obj_t);
	static obj_t BGl_evmeaningzd2pushzd2fxargsz00zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31913ze3ze5zz__evmeaningz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31662ze3ze5zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31581ze3ze5zz__evmeaningz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31638ze3ze5zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_updatezd2evalzd2globalz12z12zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31922ze3ze5zz__evmeaningz00(obj_t,
		obj_t);
	extern bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31915ze3ze5zz__evmeaningz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31583ze3ze5zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__loop_ze70ze7zz__evmeaningz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__loop_ze71ze7zz__evmeaningz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31924ze3ze5zz__evmeaningz00(obj_t,
		obj_t);
	extern bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31593ze3ze5zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31666ze3ze5zz__evmeaningz00(obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2tailcallzd21zd2stackzd2zz__evmeaningz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31658ze3ze5zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	extern obj_t eval_apply(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2500z00zz__evmeaningz00,
		BgL_bgl_string2500za700za7za7_2510za7, "synchronize", 11);
	      DEFINE_STRING(BGl_string2501z00zz__evmeaningz00,
		BgL_bgl_string2501za700za7za7_2511za7, "mutex", 5);
	      DEFINE_STRING(BGl_string2502z00zz__evmeaningz00,
		BgL_bgl_string2502za700za7za7_2512za7, "with-handler", 12);
	      DEFINE_STRING(BGl_string2503z00zz__evmeaningz00,
		BgL_bgl_string2503za700za7za7_2513za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2504z00zz__evmeaningz00,
		BgL_bgl_string2504za700za7za7_2514za7,
		"Read-only variable cannot be redefined", 38);
	      DEFINE_STRING(BGl_string2505z00zz__evmeaningz00,
		BgL_bgl_string2505za700za7za7_2515za7,
		"Compiled read-only variable cannot be redefined", 47);
	      DEFINE_STRING(BGl_string2506z00zz__evmeaningz00,
		BgL_bgl_string2506za700za7za7_2516za7,
		"\nRedefinition of compiled variable -- ", 38);
	      DEFINE_STRING(BGl_string2507z00zz__evmeaningz00,
		BgL_bgl_string2507za700za7za7_2517za7, "set!", 4);
	      DEFINE_STRING(BGl_string2508z00zz__evmeaningz00,
		BgL_bgl_string2508za700za7za7_2518za7, "read-only variable", 18);
	      DEFINE_STRING(BGl_string2509z00zz__evmeaningz00,
		BgL_bgl_string2509za700za7za7_2519za7, "__evmeaning", 11);
	      DEFINE_STRING(BGl_string2481z00zz__evmeaningz00,
		BgL_bgl_string2481za700za7za7_2520za7,
		"Unbound variable (from module `~a')", 35);
	      DEFINE_STRING(BGl_string2482z00zz__evmeaningz00,
		BgL_bgl_string2482za700za7za7_2521za7, "Unbound variable (from top-level)",
		33);
	      DEFINE_STRING(BGl_string2483z00zz__evmeaningz00,
		BgL_bgl_string2483za700za7za7_2522za7, "eval", 4);
	      DEFINE_STRING(BGl_string2484z00zz__evmeaningz00,
		BgL_bgl_string2484za700za7za7_2523za7, "Uninitialized variable", 22);
	      DEFINE_STRING(BGl_string2485z00zz__evmeaningz00,
		BgL_bgl_string2485za700za7za7_2524za7, "unknown byte-code", 17);
	      DEFINE_STRING(BGl_string2487z00zz__evmeaningz00,
		BgL_bgl_string2487za700za7za7_2525za7, "evprocedure", 11);
	      DEFINE_STRING(BGl_string2488z00zz__evmeaningz00,
		BgL_bgl_string2488za700za7za7_2526za7, "apply", 5);
	      DEFINE_STRING(BGl_string2489z00zz__evmeaningz00,
		BgL_bgl_string2489za700za7za7_2527za7, "Not a procedure", 15);
	      DEFINE_STRING(BGl_string2491z00zz__evmeaningz00,
		BgL_bgl_string2491za700za7za7_2528za7, "number", 6);
	      DEFINE_STRING(BGl_string2493z00zz__evmeaningz00,
		BgL_bgl_string2493za700za7za7_2529za7, "fixnum", 6);
	      DEFINE_STRING(BGl_string2495z00zz__evmeaningz00,
		BgL_bgl_string2495za700za7za7_2530za7, "pair", 4);
	      DEFINE_STRING(BGl_string2496z00zz__evmeaningz00,
		BgL_bgl_string2496za700za7za7_2531za7,
		"/tmp/4.4a/runtime/Eval/evmeaning.scm", 36);
	      DEFINE_STRING(BGl_string2497z00zz__evmeaningz00,
		BgL_bgl_string2497za700za7za7_2532za7, "&evmeaning", 10);
	      DEFINE_STRING(BGl_string2498z00zz__evmeaningz00,
		BgL_bgl_string2498za700za7za7_2533za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string2499z00zz__evmeaningz00,
		BgL_bgl_string2499za700za7za7_2534za7, "dynamic-env", 11);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evmeaningzd2envzd2zz__evmeaningz00,
		BgL_bgl_za762evmeaningza762za72535za7, BGl_z62evmeaningz62zz__evmeaningz00,
		0L, BUNSPEC, 3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol2486z00zz__evmeaningz00));
		     ADD_ROOT((void *) (&BGl_symbol2490z00zz__evmeaningz00));
		     ADD_ROOT((void *) (&BGl_symbol2492z00zz__evmeaningz00));
		     ADD_ROOT((void *) (&BGl_symbol2494z00zz__evmeaningz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__evmeaningz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__evmeaningz00(long
		BgL_checksumz00_4356, char *BgL_fromz00_4357)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__evmeaningz00))
				{
					BGl_requirezd2initializa7ationz75zz__evmeaningz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__evmeaningz00();
					BGl_cnstzd2initzd2zz__evmeaningz00();
					BGl_importedzd2moduleszd2initz00zz__evmeaningz00();
					return BGl_toplevelzd2initzd2zz__evmeaningz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__evmeaningz00()
	{
		{	/* Eval/evmeaning.scm 14 */
			BGl_symbol2486z00zz__evmeaningz00 =
				bstring_to_symbol(BGl_string2487z00zz__evmeaningz00);
			BGl_symbol2490z00zz__evmeaningz00 =
				bstring_to_symbol(BGl_string2491z00zz__evmeaningz00);
			BGl_symbol2492z00zz__evmeaningz00 =
				bstring_to_symbol(BGl_string2493z00zz__evmeaningz00);
			return (BGl_symbol2494z00zz__evmeaningz00 =
				bstring_to_symbol(BGl_string2495z00zz__evmeaningz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__evmeaningz00()
	{
		{	/* Eval/evmeaning.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__evmeaningz00()
	{
		{	/* Eval/evmeaning.scm 14 */
			return BGl_initzd2thezd2globalzd2environmentz12zc0zz__evenvz00();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zz__evmeaningz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1334;

				BgL_headz00_1334 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1335;
					obj_t BgL_tailz00_1336;

					BgL_prevz00_1335 = BgL_headz00_1334;
					BgL_tailz00_1336 = BgL_l1z00_1;
				BgL_loopz00_1337:
					if (PAIRP(BgL_tailz00_1336))
						{
							obj_t BgL_newzd2prevzd2_1339;

							BgL_newzd2prevzd2_1339 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1336), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1335, BgL_newzd2prevzd2_1339);
							{
								obj_t BgL_tailz00_4378;
								obj_t BgL_prevz00_4377;

								BgL_prevz00_4377 = BgL_newzd2prevzd2_1339;
								BgL_tailz00_4378 = CDR(BgL_tailz00_1336);
								BgL_tailz00_1336 = BgL_tailz00_4378;
								BgL_prevz00_1335 = BgL_prevz00_4377;
								goto BgL_loopz00_1337;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1334);
				}
			}
		}

	}



/* evmeaning-unbound */
	obj_t BGl_evmeaningzd2unboundzd2zz__evmeaningz00(obj_t BgL_locz00_3,
		obj_t BgL_namez00_4, obj_t BgL_modz00_5)
	{
		{	/* Eval/evmeaning.scm 165 */
			{	/* Eval/evmeaning.scm 168 */
				obj_t BgL_arg1275z00_1342;

				if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_modz00_5))
					{	/* Eval/evmeaning.scm 170 */
						obj_t BgL_arg1277z00_1344;

						BgL_arg1277z00_1344 =
							BGl_evmodulezd2namezd2zz__evmodulez00(BgL_modz00_5);
						{	/* Eval/evmeaning.scm 169 */
							obj_t BgL_list1278z00_1345;

							BgL_list1278z00_1345 = MAKE_YOUNG_PAIR(BgL_arg1277z00_1344, BNIL);
							BgL_arg1275z00_1342 =
								BGl_formatz00zz__r4_output_6_10_3z00
								(BGl_string2481z00zz__evmeaningz00, BgL_list1278z00_1345);
						}
					}
				else
					{	/* Eval/evmeaning.scm 168 */
						BgL_arg1275z00_1342 = BGl_string2482z00zz__evmeaningz00;
					}
				return
					BGl_everrorz00zz__everrorz00(BgL_locz00_3,
					BGl_string2483z00zz__evmeaningz00, BgL_arg1275z00_1342,
					BgL_namez00_4);
			}
		}

	}



/* evmeaning-uninitialized */
	obj_t BGl_evmeaningzd2uninitializa7edz75zz__evmeaningz00(obj_t BgL_locz00_6,
		obj_t BgL_namez00_7)
	{
		{	/* Eval/evmeaning.scm 177 */
			return
				BGl_everrorz00zz__everrorz00(BgL_locz00_6,
				BGl_string2483z00zz__evmeaningz00, BGl_string2484z00zz__evmeaningz00,
				BgL_namez00_7);
		}

	}



/* evmeaning */
	BGL_EXPORTED_DEF obj_t BGl_evmeaningz00zz__evmeaningz00(obj_t BgL_codez00_8,
		obj_t BgL_stackz00_9, obj_t BgL_denvz00_10)
	{
		{	/* Eval/evmeaning.scm 183 */
		BGl_evmeaningz00zz__evmeaningz00:
			if (VECTORP(BgL_codez00_8))
				{

					{	/* Eval/evmeaning.scm 186 */
						obj_t BgL_aux1079z00_1350;

						BgL_aux1079z00_1350 = VECTOR_REF(BgL_codez00_8, ((long) 0));
						if (INTEGERP(BgL_aux1079z00_1350))
							{	/* Eval/evmeaning.scm 186 */
								switch ((long) CINT(BgL_aux1079z00_1350))
									{
									case ((long) -2):

										{	/* Eval/evmeaning.scm 189 */
											obj_t BgL_runner1288z00_1359;

											{	/* Eval/evmeaning.scm 189 */
												obj_t BgL_arg1281z00_1352;
												obj_t BgL_arg1282z00_1353;

												BgL_arg1281z00_1352 =
													VECTOR_REF(BgL_codez00_8, ((long) 1));
												BgL_arg1282z00_1353 =
													VECTOR_REF(BgL_codez00_8, ((long) 2));
												{	/* Eval/evmeaning.scm 189 */
													obj_t BgL_list1283z00_1354;

													BgL_list1283z00_1354 =
														MAKE_YOUNG_PAIR(BgL_arg1282z00_1353, BNIL);
													BgL_runner1288z00_1359 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg1281z00_1352, BgL_list1283z00_1354);
											}}
											{	/* Eval/evmeaning.scm 189 */
												obj_t BgL_aux1284z00_1355;

												BgL_aux1284z00_1355 = CAR(BgL_runner1288z00_1359);
												BgL_runner1288z00_1359 = CDR(BgL_runner1288z00_1359);
												{	/* Eval/evmeaning.scm 189 */
													obj_t BgL_aux1285z00_1356;

													BgL_aux1285z00_1356 = CAR(BgL_runner1288z00_1359);
													BgL_runner1288z00_1359 = CDR(BgL_runner1288z00_1359);
													{	/* Eval/evmeaning.scm 189 */
														obj_t BgL_aux1286z00_1357;

														BgL_aux1286z00_1357 = CAR(BgL_runner1288z00_1359);
														BgL_runner1288z00_1359 =
															CDR(BgL_runner1288z00_1359);
														return
															BGl_everrorz00zz__everrorz00(BgL_aux1284z00_1355,
															BgL_aux1285z00_1356, BgL_aux1286z00_1357,
															CAR(BgL_runner1288z00_1359));
													}
												}
											}
										}
										break;
									case ((long) -1):

										return VECTOR_REF(BgL_codez00_8, ((long) 2));
										break;
									case ((long) 0):

										return CAR(((obj_t) BgL_stackz00_9));
										break;
									case ((long) 1):

										{	/* Eval/evmeaning.scm 198 */
											obj_t BgL_pairz00_2842;

											BgL_pairz00_2842 = CDR(((obj_t) BgL_stackz00_9));
											return CAR(BgL_pairz00_2842);
										}
										break;
									case ((long) 2):

										{	/* Eval/evmeaning.scm 201 */
											obj_t BgL_pairz00_2848;

											{	/* Eval/evmeaning.scm 201 */
												obj_t BgL_pairz00_2847;

												BgL_pairz00_2847 = CDR(((obj_t) BgL_stackz00_9));
												BgL_pairz00_2848 = CDR(BgL_pairz00_2847);
											}
											return CAR(BgL_pairz00_2848);
										}
										break;
									case ((long) 3):

										{	/* Eval/evmeaning.scm 204 */
											obj_t BgL_pairz00_2856;

											{	/* Eval/evmeaning.scm 204 */
												obj_t BgL_pairz00_2855;

												{	/* Eval/evmeaning.scm 204 */
													obj_t BgL_pairz00_2854;

													BgL_pairz00_2854 = CDR(((obj_t) BgL_stackz00_9));
													BgL_pairz00_2855 = CDR(BgL_pairz00_2854);
												}
												BgL_pairz00_2856 = CDR(BgL_pairz00_2855);
											}
											return CAR(BgL_pairz00_2856);
										}
										break;
									case ((long) 4):

										{	/* Eval/evmeaning.scm 207 */
											obj_t BgL_offsetz00_1360;

											BgL_offsetz00_1360 =
												VECTOR_REF(BgL_codez00_8, ((long) 2));
											{
												long BgL_iz00_1363;
												obj_t BgL_envz00_1364;

												BgL_iz00_1363 = ((long) 4);
												{	/* Eval/evmeaning.scm 209 */
													obj_t BgL_pairz00_2872;

													{	/* Eval/evmeaning.scm 209 */
														obj_t BgL_pairz00_2871;

														{	/* Eval/evmeaning.scm 209 */
															obj_t BgL_pairz00_2870;

															BgL_pairz00_2870 = CDR(((obj_t) BgL_stackz00_9));
															BgL_pairz00_2871 = CDR(BgL_pairz00_2870);
														}
														BgL_pairz00_2872 = CDR(BgL_pairz00_2871);
													}
													BgL_envz00_1364 = CDR(BgL_pairz00_2872);
												}
											BgL_zc3z04anonymousza31290ze3z87_1365:
												if ((BgL_iz00_1363 == (long) CINT(BgL_offsetz00_1360)))
													{	/* Eval/evmeaning.scm 208 */
														return CAR(((obj_t) BgL_envz00_1364));
													}
												else
													{
														obj_t BgL_envz00_4428;
														long BgL_iz00_4426;

														BgL_iz00_4426 = (BgL_iz00_1363 + ((long) 1));
														BgL_envz00_4428 = CDR(((obj_t) BgL_envz00_1364));
														BgL_envz00_1364 = BgL_envz00_4428;
														BgL_iz00_1363 = BgL_iz00_4426;
														goto BgL_zc3z04anonymousza31290ze3z87_1365;
													}
											}
										}
										break;
									case ((long) 5):

										{	/* Eval/evmeaning.scm 214 */
											obj_t BgL_arg1296z00_1370;

											{	/* Eval/evmeaning.scm 214 */
												obj_t BgL_arg1297z00_1371;

												BgL_arg1297z00_1371 =
													VECTOR_REF(BgL_codez00_8, ((long) 2));
												BgL_arg1296z00_1370 =
													VECTOR_REF(((obj_t) BgL_arg1297z00_1371), ((long) 2));
											}
											return __EVMEANING_ADDRESS_REF(BgL_arg1296z00_1370);
										}
										break;
									case ((long) 6):

										{	/* Eval/evmeaning.scm 217 */
											obj_t BgL_gz00_1372;

											BgL_gz00_1372 = VECTOR_REF(BgL_codez00_8, ((long) 2));
											{	/* Eval/evmeaning.scm 217 */
												obj_t BgL_valz00_1373;

												BgL_valz00_1373 =
													VECTOR_REF(((obj_t) BgL_gz00_1372), ((long) 2));
												{	/* Eval/evmeaning.scm 218 */

													if ((BgL_valz00_1373 == BUNSPEC))
														{	/* Eval/evmeaning.scm 220 */
															int BgL_tagz00_1375;

															{	/* Eval/evmeaning.scm 220 */
																int BgL_res2267z00_2881;

																BgL_res2267z00_2881 =
																	CINT(VECTOR_REF(
																		((obj_t) BgL_gz00_1372), ((long) 0)));
																BgL_tagz00_1375 = BgL_res2267z00_2881;
															}
															{	/* Eval/evmeaning.scm 221 */
																bool_t BgL_test2543z00_4448;

																if (((long) (BgL_tagz00_1375) == ((long) 3)))
																	{	/* Eval/evmeaning.scm 221 */
																		BgL_test2543z00_4448 = ((bool_t) 1);
																	}
																else
																	{	/* Eval/evmeaning.scm 221 */
																		BgL_test2543z00_4448 =
																			((long) (BgL_tagz00_1375) == ((long) 4));
																	}
																if (BgL_test2543z00_4448)
																	{	/* Eval/evmeaning.scm 223 */
																		obj_t BgL_arg1301z00_1378;
																		obj_t BgL_arg1302z00_1379;

																		BgL_arg1301z00_1378 =
																			VECTOR_REF(BgL_codez00_8, ((long) 1));
																		BgL_arg1302z00_1379 =
																			VECTOR_REF(
																			((obj_t) BgL_gz00_1372), ((long) 1));
																		return
																			BGl_evmeaningzd2uninitializa7edz75zz__evmeaningz00
																			(BgL_arg1301z00_1378,
																			BgL_arg1302z00_1379);
																	}
																else
																	{	/* Eval/evmeaning.scm 221 */
																		return BgL_valz00_1373;
																	}
															}
														}
													else
														{	/* Eval/evmeaning.scm 219 */
															return BgL_valz00_1373;
														}
												}
											}
										}
										break;
									case ((long) 7):

										return
											BGl_evmeaningzd2bouncezd27z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 8):

										{	/* Eval/evmeaning.scm 241 */
											obj_t BgL_varz00_1381;
											obj_t BgL_valz00_1382;

											BgL_varz00_1381 = VECTOR_REF(BgL_codez00_8, ((long) 2));
											BgL_valz00_1382 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 3)), BgL_stackz00_9,
												BgL_denvz00_10);
											BGl_updatezd2evalzd2globalz12z12zz__evmeaningz00
												(BgL_codez00_8, BgL_varz00_1381, BgL_valz00_1382);
											return BUNSPEC;
										}
										break;
									case ((long) 9):

										return
											BGl_evmeaningzd2bouncezd29z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 10):

										{	/* Eval/evmeaning.scm 260 */
											obj_t BgL_arg1304z00_1384;

											BgL_arg1304z00_1384 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 2)), BgL_stackz00_9,
												BgL_denvz00_10);
											{	/* Eval/evmeaning.scm 260 */
												obj_t BgL_tmpz00_4466;

												BgL_tmpz00_4466 = ((obj_t) BgL_stackz00_9);
												SET_CAR(BgL_tmpz00_4466, BgL_arg1304z00_1384);
										}}
										return BUNSPEC;
										break;
									case ((long) 11):

										{	/* Eval/evmeaning.scm 264 */
											obj_t BgL_arg1307z00_1386;
											obj_t BgL_arg1308z00_1387;

											BgL_arg1307z00_1386 = CDR(((obj_t) BgL_stackz00_9));
											BgL_arg1308z00_1387 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 2)), BgL_stackz00_9,
												BgL_denvz00_10);
											{	/* Eval/evmeaning.scm 264 */
												obj_t BgL_tmpz00_4473;

												BgL_tmpz00_4473 = ((obj_t) BgL_arg1307z00_1386);
												SET_CAR(BgL_tmpz00_4473, BgL_arg1308z00_1387);
										}}
										return BUNSPEC;
										break;
									case ((long) 12):

										{	/* Eval/evmeaning.scm 268 */
											obj_t BgL_arg1310z00_1389;
											obj_t BgL_arg1311z00_1390;

											{	/* Eval/evmeaning.scm 268 */
												obj_t BgL_pairz00_2902;

												BgL_pairz00_2902 = CDR(((obj_t) BgL_stackz00_9));
												BgL_arg1310z00_1389 = CDR(BgL_pairz00_2902);
											}
											BgL_arg1311z00_1390 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 2)), BgL_stackz00_9,
												BgL_denvz00_10);
											{	/* Eval/evmeaning.scm 268 */
												obj_t BgL_tmpz00_4481;

												BgL_tmpz00_4481 = ((obj_t) BgL_arg1310z00_1389);
												SET_CAR(BgL_tmpz00_4481, BgL_arg1311z00_1390);
										}}
										return BUNSPEC;
										break;
									case ((long) 13):

										{	/* Eval/evmeaning.scm 272 */
											obj_t BgL_arg1313z00_1392;
											obj_t BgL_arg1314z00_1393;

											{	/* Eval/evmeaning.scm 272 */
												obj_t BgL_pairz00_2911;

												{	/* Eval/evmeaning.scm 272 */
													obj_t BgL_pairz00_2910;

													BgL_pairz00_2910 = CDR(((obj_t) BgL_stackz00_9));
													BgL_pairz00_2911 = CDR(BgL_pairz00_2910);
												}
												BgL_arg1313z00_1392 = CDR(BgL_pairz00_2911);
											}
											BgL_arg1314z00_1393 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 2)), BgL_stackz00_9,
												BgL_denvz00_10);
											{	/* Eval/evmeaning.scm 272 */
												obj_t BgL_tmpz00_4490;

												BgL_tmpz00_4490 = ((obj_t) BgL_arg1313z00_1392);
												SET_CAR(BgL_tmpz00_4490, BgL_arg1314z00_1393);
										}}
										return BUNSPEC;
										break;
									case ((long) 14):

										return
											BGl_evmeaningzd2bouncezd214z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 15):

										{	/* Eval/evmeaning.scm 284 */
											bool_t BgL_test2545z00_4494;

											{	/* Eval/evmeaning.scm 284 */
												obj_t BgL_arg1322z00_1399;

												BgL_arg1322z00_1399 =
													VECTOR_REF(BgL_codez00_8, ((long) 2));
												BgL_test2545z00_4494 =
													CBOOL(BGl_evmeaningz00zz__evmeaningz00
													(BgL_arg1322z00_1399, BgL_stackz00_9,
														BgL_denvz00_10));
											}
											if (BgL_test2545z00_4494)
												{
													obj_t BgL_codez00_4498;

													BgL_codez00_4498 =
														VECTOR_REF(BgL_codez00_8, ((long) 3));
													BgL_codez00_8 = BgL_codez00_4498;
													goto BGl_evmeaningz00zz__evmeaningz00;
												}
											else
												{
													obj_t BgL_codez00_4500;

													BgL_codez00_4500 =
														VECTOR_REF(BgL_codez00_8, ((long) 4));
													BgL_codez00_8 = BgL_codez00_4500;
													goto BGl_evmeaningz00zz__evmeaningz00;
												}
										}
										break;
									case ((long) 16):

										{	/* Eval/evmeaning.scm 289 */
											long BgL_lenz00_1400;

											BgL_lenz00_1400 =
												(
												(VECTOR_LENGTH(BgL_codez00_8) - ((long) 2)) -
												((long) 1));
											{
												long BgL_iz00_1402;

												BgL_iz00_1402 = ((long) 0);
											BgL_zc3z04anonymousza31323ze3z87_1403:
												if ((BgL_iz00_1402 == BgL_lenz00_1400))
													{	/* Eval/evmeaning.scm 292 */
														obj_t BgL_arg1325z00_1405;

														{	/* Eval/evmeaning.scm 292 */
															long BgL_arg1326z00_1406;

															BgL_arg1326z00_1406 =
																(BgL_iz00_1402 + ((long) 2));
															BgL_arg1325z00_1405 =
																VECTOR_REF(
																((obj_t) BgL_codez00_8), BgL_arg1326z00_1406);
														}
														{
															obj_t BgL_codez00_4510;

															BgL_codez00_4510 = BgL_arg1325z00_1405;
															BgL_codez00_8 = BgL_codez00_4510;
															goto BGl_evmeaningz00zz__evmeaningz00;
														}
													}
												else
													{	/* Eval/evmeaning.scm 291 */
														{	/* Eval/evmeaning.scm 294 */
															obj_t BgL_arg1327z00_1407;

															{	/* Eval/evmeaning.scm 294 */
																long BgL_arg1328z00_1408;

																BgL_arg1328z00_1408 =
																	(BgL_iz00_1402 + ((long) 2));
																BgL_arg1327z00_1407 =
																	VECTOR_REF(
																	((obj_t) BgL_codez00_8), BgL_arg1328z00_1408);
															}
															BGl_evmeaningz00zz__evmeaningz00
																(BgL_arg1327z00_1407, BgL_stackz00_9,
																BgL_denvz00_10);
														}
														{
															long BgL_iz00_4515;

															BgL_iz00_4515 = (BgL_iz00_1402 + ((long) 1));
															BgL_iz00_1402 = BgL_iz00_4515;
															goto BgL_zc3z04anonymousza31323ze3z87_1403;
														}
													}
											}
										}
										break;
									case ((long) 17):

										return
											BGl_evmeaningzd2bouncezd217z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 18):

										return
											BGl_evmeaningzd2bouncezd218z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 25):

										return
											BGl_evmeaningzd2bouncezd225z00zz__evmeaningz00
											(BgL_codez00_8);
										break;
									case ((long) 26):

										return
											BGl_evmeaningzd2bouncezd226z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 27):

										return
											BGl_evmeaningzd2bouncezd227z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 28):

										return
											BGl_evmeaningzd2bouncezd228z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 29):

										return
											BGl_evmeaningzd2bouncezd229z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 30):

										return
											BGl_evmeaningzd2bouncezd230z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 31):

										return
											BGl_evmeaningzd2funcallzd20z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10,
											BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_8,
													((long) 3)), BgL_stackz00_9, BgL_denvz00_10));
										break;
									case ((long) 32):

										return
											BGl_evmeaningzd2funcallzd21z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10,
											BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_8,
													((long) 3)), BgL_stackz00_9, BgL_denvz00_10));
										break;
									case ((long) 33):

										return
											BGl_evmeaningzd2funcallzd22z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10,
											BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_8,
													((long) 3)), BgL_stackz00_9, BgL_denvz00_10));
										break;
									case ((long) 34):

										return
											BGl_evmeaningzd2funcallzd23z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10,
											BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_8,
													((long) 3)), BgL_stackz00_9, BgL_denvz00_10));
										break;
									case ((long) 35):

										return
											BGl_evmeaningzd2funcallzd24z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10,
											BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_8,
													((long) 3)), BgL_stackz00_9, BgL_denvz00_10));
										break;
									case ((long) 36):

										return
											BGl_evmeaningzd2bouncezd236z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 37):

										return
											BGl_evmeaningzd2bouncezd237z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 42):

										return
											BGl_evmeaningzd2bouncezd242z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 38):

										return
											BGl_evmeaningzd2bouncezd238z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 43):

										return
											BGl_evmeaningzd2bouncezd243z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 39):

										return
											BGl_evmeaningzd2bouncezd239z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 44):

										return
											BGl_evmeaningzd2bouncezd244z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 40):

										return
											BGl_evmeaningzd2bouncezd240z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 45):

										return
											BGl_evmeaningzd2bouncezd245z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 41):

										return
											BGl_evmeaningzd2bouncezd241z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 46):

										return
											BGl_evmeaningzd2bouncezd246z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 47):

										return
											BGl_evmeaningzd2bouncezd247z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 51):

										return
											BGl_evmeaningzd2bouncezd251z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 48):

										return
											BGl_evmeaningzd2bouncezd248z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 52):

										return
											BGl_evmeaningzd2bouncezd252z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 49):

										return
											BGl_evmeaningzd2bouncezd249z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 53):

										return
											BGl_evmeaningzd2bouncezd253z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 50):

										return
											BGl_evmeaningzd2bouncezd250z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 54):

										return
											BGl_evmeaningzd2bouncezd254z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 55):

										return
											BGl_evmeaningzd2makezd2tracedzd24procedurezd2zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 56):

										return
											BGl_evmeaningzd2makezd24procedurez00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 64):

										return
											BGl_evmeaningzd2bouncezd264z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 65):

										{	/* Eval/evmeaning.scm 706 */
											obj_t BgL_g1081z00_1423;

											BgL_g1081z00_1423 = VECTOR_REF(BgL_codez00_8, ((long) 3));
											{
												obj_t BgL_valsz00_1425;
												obj_t BgL_envz00_1426;

												BgL_valsz00_1425 = BgL_g1081z00_1423;
												BgL_envz00_1426 = BgL_stackz00_9;
											BgL_zc3z04anonymousza31339ze3z87_1427:
												if (NULLP(BgL_valsz00_1425))
													{	/* Eval/evmeaning.scm 709 */
														obj_t BgL_arg1341z00_1429;

														BgL_arg1341z00_1429 =
															VECTOR_REF(((obj_t) BgL_codez00_8), ((long) 2));
														{
															obj_t BgL_stackz00_4568;
															obj_t BgL_codez00_4567;

															BgL_codez00_4567 = BgL_arg1341z00_1429;
															BgL_stackz00_4568 = BgL_envz00_1426;
															BgL_stackz00_9 = BgL_stackz00_4568;
															BgL_codez00_8 = BgL_codez00_4567;
															goto BGl_evmeaningz00zz__evmeaningz00;
														}
													}
												else
													{	/* Eval/evmeaning.scm 710 */
														obj_t BgL_vz00_1430;

														{	/* Eval/evmeaning.scm 710 */
															obj_t BgL_arg1344z00_1433;

															BgL_arg1344z00_1433 =
																CAR(((obj_t) BgL_valsz00_1425));
															BgL_vz00_1430 =
																BGl_evmeaningz00zz__evmeaningz00
																(BgL_arg1344z00_1433, BgL_stackz00_9,
																BgL_denvz00_10);
														}
														{	/* Eval/evmeaning.scm 711 */
															obj_t BgL_arg1342z00_1431;
															obj_t BgL_arg1343z00_1432;

															BgL_arg1342z00_1431 =
																CDR(((obj_t) BgL_valsz00_1425));
															BgL_arg1343z00_1432 =
																MAKE_YOUNG_PAIR(BgL_vz00_1430, BgL_envz00_1426);
															{
																obj_t BgL_envz00_4576;
																obj_t BgL_valsz00_4575;

																BgL_valsz00_4575 = BgL_arg1342z00_1431;
																BgL_envz00_4576 = BgL_arg1343z00_1432;
																BgL_envz00_1426 = BgL_envz00_4576;
																BgL_valsz00_1425 = BgL_valsz00_4575;
																goto BgL_zc3z04anonymousza31339ze3z87_1427;
															}
														}
													}
											}
										}
										break;
									case ((long) 66):

										{	/* Eval/evmeaning.scm 714 */
											obj_t BgL_g1082z00_1435;

											BgL_g1082z00_1435 = VECTOR_REF(BgL_codez00_8, ((long) 3));
											{
												obj_t BgL_valsz00_1437;
												obj_t BgL_stackz00_1438;

												BgL_valsz00_1437 = BgL_g1082z00_1435;
												BgL_stackz00_1438 = BgL_stackz00_9;
											BgL_zc3z04anonymousza31345ze3z87_1439:
												if (NULLP(BgL_valsz00_1437))
													{	/* Eval/evmeaning.scm 717 */
														obj_t BgL_arg1347z00_1441;

														BgL_arg1347z00_1441 =
															VECTOR_REF(((obj_t) BgL_codez00_8), ((long) 2));
														{
															obj_t BgL_stackz00_4583;
															obj_t BgL_codez00_4582;

															BgL_codez00_4582 = BgL_arg1347z00_1441;
															BgL_stackz00_4583 = BgL_stackz00_1438;
															BgL_stackz00_9 = BgL_stackz00_4583;
															BgL_codez00_8 = BgL_codez00_4582;
															goto BGl_evmeaningz00zz__evmeaningz00;
														}
													}
												else
													{	/* Eval/evmeaning.scm 718 */
														obj_t BgL_arg1348z00_1442;
														obj_t BgL_arg1350z00_1443;

														BgL_arg1348z00_1442 =
															CDR(((obj_t) BgL_valsz00_1437));
														{	/* Eval/evmeaning.scm 719 */
															obj_t BgL_arg1351z00_1444;

															{	/* Eval/evmeaning.scm 719 */
																obj_t BgL_arg1352z00_1445;

																BgL_arg1352z00_1445 =
																	CAR(((obj_t) BgL_valsz00_1437));
																BgL_arg1351z00_1444 =
																	BGl_evmeaningz00zz__evmeaningz00
																	(BgL_arg1352z00_1445, BgL_stackz00_1438,
																	BgL_denvz00_10);
															}
															BgL_arg1350z00_1443 =
																MAKE_YOUNG_PAIR(BgL_arg1351z00_1444,
																BgL_stackz00_1438);
														}
														{
															obj_t BgL_stackz00_4591;
															obj_t BgL_valsz00_4590;

															BgL_valsz00_4590 = BgL_arg1348z00_1442;
															BgL_stackz00_4591 = BgL_arg1350z00_1443;
															BgL_stackz00_1438 = BgL_stackz00_4591;
															BgL_valsz00_1437 = BgL_valsz00_4590;
															goto BgL_zc3z04anonymousza31345ze3z87_1439;
														}
													}
											}
										}
										break;
									case ((long) 67):

										return
											BGl_evmeaningzd2bouncezd267z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 68):

										return
											BGl_evmeaningzd2bouncezd268z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 70):

										return
											BGl_evmeaningzd2bouncezd270z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 71):

										return
											BGl_evmeaningzd2bouncezd271z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 175):

										return
											BGl_evmeaningzd2bouncezd2175z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 176):

										return
											BGl_evmeaningzd2bouncezd2176z00zz__evmeaningz00
											(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10);
										break;
									case ((long) 131):

										{	/* Eval/evmeaning.scm 783 */
											obj_t BgL_funz00_1447;

											BgL_funz00_1447 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 3)), BgL_stackz00_9,
												BgL_denvz00_10);
											{	/* Eval/evmeaning.scm 784 */
												bool_t BgL_test2549z00_4600;

												if (PROCEDUREP(BgL_funz00_1447))
													{	/* Eval/evmeaning.scm 933 */
														obj_t BgL_arg1759z00_2953;

														BgL_arg1759z00_2953 =
															PROCEDURE_ATTR(BgL_funz00_1447);
														if (STRUCTP(BgL_arg1759z00_2953))
															{	/* Eval/evmeaning.scm 927 */
																BgL_test2549z00_4600 =
																	(STRUCT_KEY(BgL_arg1759z00_2953) ==
																	BGl_symbol2486z00zz__evmeaningz00);
															}
														else
															{	/* Eval/evmeaning.scm 927 */
																BgL_test2549z00_4600 = ((bool_t) 0);
															}
													}
												else
													{	/* Eval/evmeaning.scm 933 */
														BgL_test2549z00_4600 = ((bool_t) 0);
													}
												if (BgL_test2549z00_4600)
													{	/* Eval/evmeaning.scm 785 */
														obj_t BgL_arg1354z00_1449;
														obj_t BgL_arg1355z00_1450;

														{	/* Eval/evmeaning.scm 946 */
															obj_t BgL_arg1761z00_2961;

															BgL_arg1761z00_2961 =
																PROCEDURE_ATTR(BgL_funz00_1447);
															BgL_arg1354z00_1449 =
																STRUCT_REF(
																((obj_t) BgL_arg1761z00_2961),
																(int) (((long) 1)));
														}
														BgL_arg1355z00_1450 =
															BGl_evmeaningzd2tailcallzd20zd2stackzd2zz__evmeaningz00
															(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10,
															BgL_funz00_1447);
														{
															obj_t BgL_stackz00_4614;
															obj_t BgL_codez00_4613;

															BgL_codez00_4613 = BgL_arg1354z00_1449;
															BgL_stackz00_4614 = BgL_arg1355z00_1450;
															BgL_stackz00_9 = BgL_stackz00_4614;
															BgL_codez00_8 = BgL_codez00_4613;
															goto BGl_evmeaningz00zz__evmeaningz00;
														}
													}
												else
													{	/* Eval/evmeaning.scm 784 */
														return
															BGl_evmeaningzd2funcallzd20z00zz__evmeaningz00
															(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10,
															BgL_funz00_1447);
													}
											}
										}
										break;
									case ((long) 132):

										{	/* Eval/evmeaning.scm 791 */
											obj_t BgL_funz00_1452;

											BgL_funz00_1452 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 3)), BgL_stackz00_9,
												BgL_denvz00_10);
											{	/* Eval/evmeaning.scm 792 */
												bool_t BgL_test2552z00_4618;

												if (PROCEDUREP(BgL_funz00_1452))
													{	/* Eval/evmeaning.scm 933 */
														obj_t BgL_arg1759z00_2966;

														BgL_arg1759z00_2966 =
															PROCEDURE_ATTR(BgL_funz00_1452);
														if (STRUCTP(BgL_arg1759z00_2966))
															{	/* Eval/evmeaning.scm 927 */
																BgL_test2552z00_4618 =
																	(STRUCT_KEY(BgL_arg1759z00_2966) ==
																	BGl_symbol2486z00zz__evmeaningz00);
															}
														else
															{	/* Eval/evmeaning.scm 927 */
																BgL_test2552z00_4618 = ((bool_t) 0);
															}
													}
												else
													{	/* Eval/evmeaning.scm 933 */
														BgL_test2552z00_4618 = ((bool_t) 0);
													}
												if (BgL_test2552z00_4618)
													{	/* Eval/evmeaning.scm 793 */
														obj_t BgL_arg1359z00_1454;
														obj_t BgL_arg1360z00_1455;

														{	/* Eval/evmeaning.scm 946 */
															obj_t BgL_arg1761z00_2974;

															BgL_arg1761z00_2974 =
																PROCEDURE_ATTR(BgL_funz00_1452);
															BgL_arg1359z00_1454 =
																STRUCT_REF(
																((obj_t) BgL_arg1761z00_2974),
																(int) (((long) 1)));
														}
														BgL_arg1360z00_1455 =
															BGl_evmeaningzd2tailcallzd21zd2stackzd2zz__evmeaningz00
															(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10,
															BgL_funz00_1452);
														{
															obj_t BgL_stackz00_4632;
															obj_t BgL_codez00_4631;

															BgL_codez00_4631 = BgL_arg1359z00_1454;
															BgL_stackz00_4632 = BgL_arg1360z00_1455;
															BgL_stackz00_9 = BgL_stackz00_4632;
															BgL_codez00_8 = BgL_codez00_4631;
															goto BGl_evmeaningz00zz__evmeaningz00;
														}
													}
												else
													{	/* Eval/evmeaning.scm 792 */
														return
															BGl_evmeaningzd2funcallzd21z00zz__evmeaningz00
															(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10,
															BgL_funz00_1452);
													}
											}
										}
										break;
									case ((long) 133):

										{	/* Eval/evmeaning.scm 799 */
											obj_t BgL_funz00_1457;

											BgL_funz00_1457 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 3)), BgL_stackz00_9,
												BgL_denvz00_10);
											{	/* Eval/evmeaning.scm 800 */
												bool_t BgL_test2555z00_4636;

												if (PROCEDUREP(BgL_funz00_1457))
													{	/* Eval/evmeaning.scm 933 */
														obj_t BgL_arg1759z00_2979;

														BgL_arg1759z00_2979 =
															PROCEDURE_ATTR(BgL_funz00_1457);
														if (STRUCTP(BgL_arg1759z00_2979))
															{	/* Eval/evmeaning.scm 927 */
																BgL_test2555z00_4636 =
																	(STRUCT_KEY(BgL_arg1759z00_2979) ==
																	BGl_symbol2486z00zz__evmeaningz00);
															}
														else
															{	/* Eval/evmeaning.scm 927 */
																BgL_test2555z00_4636 = ((bool_t) 0);
															}
													}
												else
													{	/* Eval/evmeaning.scm 933 */
														BgL_test2555z00_4636 = ((bool_t) 0);
													}
												if (BgL_test2555z00_4636)
													{	/* Eval/evmeaning.scm 801 */
														obj_t BgL_arg1363z00_1459;
														obj_t BgL_arg1364z00_1460;

														{	/* Eval/evmeaning.scm 946 */
															obj_t BgL_arg1761z00_2987;

															BgL_arg1761z00_2987 =
																PROCEDURE_ATTR(BgL_funz00_1457);
															BgL_arg1363z00_1459 =
																STRUCT_REF(
																((obj_t) BgL_arg1761z00_2987),
																(int) (((long) 1)));
														}
														BgL_arg1364z00_1460 =
															BGl_evmeaningzd2tailcallzd22zd2stackzd2zz__evmeaningz00
															(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10,
															BgL_funz00_1457);
														{
															obj_t BgL_stackz00_4650;
															obj_t BgL_codez00_4649;

															BgL_codez00_4649 = BgL_arg1363z00_1459;
															BgL_stackz00_4650 = BgL_arg1364z00_1460;
															BgL_stackz00_9 = BgL_stackz00_4650;
															BgL_codez00_8 = BgL_codez00_4649;
															goto BGl_evmeaningz00zz__evmeaningz00;
														}
													}
												else
													{	/* Eval/evmeaning.scm 800 */
														return
															BGl_evmeaningzd2funcallzd22z00zz__evmeaningz00
															(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10,
															BgL_funz00_1457);
													}
											}
										}
										break;
									case ((long) 134):

										{	/* Eval/evmeaning.scm 807 */
											obj_t BgL_funz00_1462;

											BgL_funz00_1462 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 3)), BgL_stackz00_9,
												BgL_denvz00_10);
											{	/* Eval/evmeaning.scm 808 */
												bool_t BgL_test2558z00_4654;

												if (PROCEDUREP(BgL_funz00_1462))
													{	/* Eval/evmeaning.scm 933 */
														obj_t BgL_arg1759z00_2992;

														BgL_arg1759z00_2992 =
															PROCEDURE_ATTR(BgL_funz00_1462);
														if (STRUCTP(BgL_arg1759z00_2992))
															{	/* Eval/evmeaning.scm 927 */
																BgL_test2558z00_4654 =
																	(STRUCT_KEY(BgL_arg1759z00_2992) ==
																	BGl_symbol2486z00zz__evmeaningz00);
															}
														else
															{	/* Eval/evmeaning.scm 927 */
																BgL_test2558z00_4654 = ((bool_t) 0);
															}
													}
												else
													{	/* Eval/evmeaning.scm 933 */
														BgL_test2558z00_4654 = ((bool_t) 0);
													}
												if (BgL_test2558z00_4654)
													{	/* Eval/evmeaning.scm 809 */
														obj_t BgL_arg1367z00_1464;
														obj_t BgL_arg1368z00_1465;

														{	/* Eval/evmeaning.scm 946 */
															obj_t BgL_arg1761z00_3000;

															BgL_arg1761z00_3000 =
																PROCEDURE_ATTR(BgL_funz00_1462);
															BgL_arg1367z00_1464 =
																STRUCT_REF(
																((obj_t) BgL_arg1761z00_3000),
																(int) (((long) 1)));
														}
														BgL_arg1368z00_1465 =
															BGl_evmeaningzd2tailcallzd23zd2stackzd2zz__evmeaningz00
															(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10,
															BgL_funz00_1462);
														{
															obj_t BgL_stackz00_4668;
															obj_t BgL_codez00_4667;

															BgL_codez00_4667 = BgL_arg1367z00_1464;
															BgL_stackz00_4668 = BgL_arg1368z00_1465;
															BgL_stackz00_9 = BgL_stackz00_4668;
															BgL_codez00_8 = BgL_codez00_4667;
															goto BGl_evmeaningz00zz__evmeaningz00;
														}
													}
												else
													{	/* Eval/evmeaning.scm 808 */
														return
															BGl_evmeaningzd2funcallzd23z00zz__evmeaningz00
															(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10,
															BgL_funz00_1462);
													}
											}
										}
										break;
									case ((long) 135):

										{	/* Eval/evmeaning.scm 815 */
											obj_t BgL_funz00_1467;

											BgL_funz00_1467 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 3)), BgL_stackz00_9,
												BgL_denvz00_10);
											{	/* Eval/evmeaning.scm 816 */
												bool_t BgL_test2561z00_4672;

												if (PROCEDUREP(BgL_funz00_1467))
													{	/* Eval/evmeaning.scm 933 */
														obj_t BgL_arg1759z00_3005;

														BgL_arg1759z00_3005 =
															PROCEDURE_ATTR(BgL_funz00_1467);
														if (STRUCTP(BgL_arg1759z00_3005))
															{	/* Eval/evmeaning.scm 927 */
																BgL_test2561z00_4672 =
																	(STRUCT_KEY(BgL_arg1759z00_3005) ==
																	BGl_symbol2486z00zz__evmeaningz00);
															}
														else
															{	/* Eval/evmeaning.scm 927 */
																BgL_test2561z00_4672 = ((bool_t) 0);
															}
													}
												else
													{	/* Eval/evmeaning.scm 933 */
														BgL_test2561z00_4672 = ((bool_t) 0);
													}
												if (BgL_test2561z00_4672)
													{	/* Eval/evmeaning.scm 817 */
														obj_t BgL_arg1372z00_1469;
														obj_t BgL_arg1373z00_1470;

														{	/* Eval/evmeaning.scm 946 */
															obj_t BgL_arg1761z00_3013;

															BgL_arg1761z00_3013 =
																PROCEDURE_ATTR(BgL_funz00_1467);
															BgL_arg1372z00_1469 =
																STRUCT_REF(
																((obj_t) BgL_arg1761z00_3013),
																(int) (((long) 1)));
														}
														BgL_arg1373z00_1470 =
															BGl_evmeaningzd2tailcallzd24zd2stackzd2zz__evmeaningz00
															(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10,
															BgL_funz00_1467);
														{
															obj_t BgL_stackz00_4686;
															obj_t BgL_codez00_4685;

															BgL_codez00_4685 = BgL_arg1372z00_1469;
															BgL_stackz00_4686 = BgL_arg1373z00_1470;
															BgL_stackz00_9 = BgL_stackz00_4686;
															BgL_codez00_8 = BgL_codez00_4685;
															goto BGl_evmeaningz00zz__evmeaningz00;
														}
													}
												else
													{	/* Eval/evmeaning.scm 816 */
														return
															BGl_evmeaningzd2funcallzd24z00zz__evmeaningz00
															(BgL_codez00_8, BgL_stackz00_9, BgL_denvz00_10,
															BgL_funz00_1467);
													}
											}
										}
										break;
									case ((long) 136):

										{	/* Eval/evmeaning.scm 823 */
											obj_t BgL_namez00_1472;

											BgL_namez00_1472 = VECTOR_REF(BgL_codez00_8, ((long) 2));
											{	/* Eval/evmeaning.scm 823 */
												obj_t BgL_funz00_1473;

												BgL_funz00_1473 =
													BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
													(BgL_codez00_8, ((long) 3)), BgL_stackz00_9,
													BgL_denvz00_10);
												{	/* Eval/evmeaning.scm 824 */
													obj_t BgL_locz00_1474;

													BgL_locz00_1474 =
														VECTOR_REF(BgL_codez00_8, ((long) 1));
													{	/* Eval/evmeaning.scm 825 */

														{	/* Eval/evmeaning.scm 826 */
															obj_t BgL_g1083z00_1475;

															BgL_g1083z00_1475 =
																VECTOR_REF(BgL_codez00_8, ((long) 4));
															{
																obj_t BgL_argsz00_1478;
																obj_t BgL_newz00_1479;
																long BgL_lenz00_1480;

																BgL_argsz00_1478 = BgL_g1083z00_1475;
																BgL_newz00_1479 = BNIL;
																BgL_lenz00_1480 = ((long) 0);
															BgL_zc3z04anonymousza31375ze3z87_1481:
																if (NULLP(BgL_argsz00_1478))
																	{	/* Eval/evmeaning.scm 830 */
																		bool_t BgL_test2565z00_4695;

																		if (PROCEDUREP(BgL_funz00_1473))
																			{	/* Eval/evmeaning.scm 933 */
																				obj_t BgL_arg1759z00_3022;

																				BgL_arg1759z00_3022 =
																					PROCEDURE_ATTR(BgL_funz00_1473);
																				if (STRUCTP(BgL_arg1759z00_3022))
																					{	/* Eval/evmeaning.scm 927 */
																						BgL_test2565z00_4695 =
																							(STRUCT_KEY(BgL_arg1759z00_3022)
																							==
																							BGl_symbol2486z00zz__evmeaningz00);
																					}
																				else
																					{	/* Eval/evmeaning.scm 927 */
																						BgL_test2565z00_4695 = ((bool_t) 0);
																					}
																			}
																		else
																			{	/* Eval/evmeaning.scm 933 */
																				BgL_test2565z00_4695 = ((bool_t) 0);
																			}
																		if (BgL_test2565z00_4695)
																			{	/* Eval/evmeaning.scm 831 */
																				obj_t BgL_fmlsz00_1484;

																				{	/* Eval/evmeaning.scm 958 */
																					obj_t BgL_arg1763z00_3030;

																					BgL_arg1763z00_3030 =
																						PROCEDURE_ATTR(BgL_funz00_1473);
																					BgL_fmlsz00_1484 =
																						STRUCT_REF(
																						((obj_t) BgL_arg1763z00_3030),
																						(int) (((long) 0)));
																				}
																				{	/* Eval/evmeaning.scm 831 */
																					obj_t BgL_stackz00_1485;

																					{	/* Eval/evmeaning.scm 952 */
																						obj_t BgL_arg1762z00_3033;

																						BgL_arg1762z00_3033 =
																							PROCEDURE_ATTR(BgL_funz00_1473);
																						BgL_stackz00_1485 =
																							STRUCT_REF(
																							((obj_t) BgL_arg1762z00_3033),
																							(int) (((long) 2)));
																					}
																					{	/* Eval/evmeaning.scm 832 */
																						obj_t BgL_wenz00_1486;

																						BgL_wenz00_1486 =
																							bgl_reverse_bang(BgL_newz00_1479);
																						{	/* Eval/evmeaning.scm 833 */
																							obj_t BgL_e2z00_1487;

																							if (
																								((long) CINT(BgL_fmlsz00_1484)
																									>= ((long) 0)))
																								{	/* Eval/evmeaning.scm 834 */
																									BgL_e2z00_1487 =
																										BGl_evmeaningzd2pushzd2fxargsz00zz__evmeaningz00
																										(BgL_namez00_1472,
																										BgL_locz00_1474,
																										BgL_wenz00_1486,
																										BgL_fmlsz00_1484,
																										BgL_stackz00_1485);
																								}
																							else
																								{	/* Eval/evmeaning.scm 834 */
																									BgL_e2z00_1487 =
																										BGl_evmeaningzd2pushzd2vaargsz00zz__evmeaningz00
																										(BgL_namez00_1472,
																										BgL_locz00_1474,
																										BgL_wenz00_1486,
																										BgL_fmlsz00_1484,
																										BgL_stackz00_1485);
																								}
																							{	/* Eval/evmeaning.scm 834 */

																								{	/* Eval/evmeaning.scm 845 */
																									obj_t BgL_arg1378z00_1488;

																									{	/* Eval/evmeaning.scm 946 */
																										obj_t BgL_arg1761z00_3038;

																										BgL_arg1761z00_3038 =
																											PROCEDURE_ATTR
																											(BgL_funz00_1473);
																										BgL_arg1378z00_1488 =
																											STRUCT_REF(((obj_t)
																												BgL_arg1761z00_3038),
																											(int) (((long) 1)));
																									}
																									{
																										obj_t BgL_stackz00_4722;
																										obj_t BgL_codez00_4721;

																										BgL_codez00_4721 =
																											BgL_arg1378z00_1488;
																										BgL_stackz00_4722 =
																											BgL_e2z00_1487;
																										BgL_stackz00_9 =
																											BgL_stackz00_4722;
																										BgL_codez00_8 =
																											BgL_codez00_4721;
																										goto
																											BGl_evmeaningz00zz__evmeaningz00;
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		else
																			{	/* Eval/evmeaning.scm 848 */
																				obj_t BgL_arg1380z00_1490;

																				BgL_arg1380z00_1490 =
																					bgl_reverse_bang(BgL_newz00_1479);
																				if (PROCEDUREP(BgL_funz00_1473))
																					{	/* Eval/evmeaning.scm 1188 */
																						if (PROCEDURE_CORRECT_ARITYP
																							(BgL_funz00_1473,
																								(int) (BgL_lenz00_1480)))
																							{	/* Eval/evmeaning.scm 1190 */
																								return
																									eval_apply(BgL_funz00_1473,
																									BgL_arg1380z00_1490);
																							}
																						else
																							{	/* Eval/evmeaning.scm 1191 */
																								obj_t BgL_arg1908z00_3043;
																								int BgL_arg1909z00_3044;

																								BgL_arg1908z00_3043 =
																									VECTOR_REF(
																									((obj_t) BgL_codez00_8),
																									((long) 1));
																								BgL_arg1909z00_3044 =
																									PROCEDURE_ARITY
																									(BgL_funz00_1473);
																								return
																									BGl_evarityzd2errorzd2zz__everrorz00
																									(BgL_arg1908z00_3043,
																									BgL_namez00_1472,
																									(int) (BgL_lenz00_1480),
																									BgL_arg1909z00_3044);
																					}}
																				else
																					{	/* Eval/evmeaning.scm 1189 */
																						obj_t BgL_arg1910z00_3045;

																						BgL_arg1910z00_3045 =
																							VECTOR_REF(
																							((obj_t) BgL_codez00_8),
																							((long) 1));
																						return
																							BGl_everrorz00zz__everrorz00
																							(BgL_arg1910z00_3045,
																							BGl_string2488z00zz__evmeaningz00,
																							BGl_string2489z00zz__evmeaningz00,
																							BgL_namez00_1472);
																					}
																			}
																	}
																else
																	{	/* Eval/evmeaning.scm 849 */
																		obj_t BgL_arg1381z00_1491;
																		obj_t BgL_arg1382z00_1492;
																		long BgL_arg1383z00_1493;

																		BgL_arg1381z00_1491 =
																			CDR(((obj_t) BgL_argsz00_1478));
																		{	/* Eval/evmeaning.scm 850 */
																			obj_t BgL_arg1384z00_1494;

																			{	/* Eval/evmeaning.scm 850 */
																				obj_t BgL_arg1385z00_1495;

																				BgL_arg1385z00_1495 =
																					CAR(((obj_t) BgL_argsz00_1478));
																				BgL_arg1384z00_1494 =
																					BGl_evmeaningz00zz__evmeaningz00
																					(BgL_arg1385z00_1495, BgL_stackz00_9,
																					BgL_denvz00_10);
																			}
																			BgL_arg1382z00_1492 =
																				MAKE_YOUNG_PAIR(BgL_arg1384z00_1494,
																				BgL_newz00_1479);
																		}
																		BgL_arg1383z00_1493 =
																			(((long) 1) + BgL_lenz00_1480);
																		{
																			long BgL_lenz00_4747;
																			obj_t BgL_newz00_4746;
																			obj_t BgL_argsz00_4745;

																			BgL_argsz00_4745 = BgL_arg1381z00_1491;
																			BgL_newz00_4746 = BgL_arg1382z00_1492;
																			BgL_lenz00_4747 = BgL_arg1383z00_1493;
																			BgL_lenz00_1480 = BgL_lenz00_4747;
																			BgL_newz00_1479 = BgL_newz00_4746;
																			BgL_argsz00_1478 = BgL_argsz00_4745;
																			goto
																				BgL_zc3z04anonymousza31375ze3z87_1481;
																		}
																	}
															}
														}
													}
												}
											}
										}
										break;
									case ((long) 145):
									case ((long) 146):

										{	/* Eval/evmeaning.scm 854 */
											long BgL_arg1387z00_1498;

											{	/* Eval/evmeaning.scm 854 */
												obj_t BgL_arg1388z00_1499;

												BgL_arg1388z00_1499 =
													VECTOR_REF(BgL_codez00_8, ((long) 0));
												BgL_arg1387z00_1498 =
													((long) CINT(BgL_arg1388z00_1499) - ((long) 140));
											}
											VECTOR_SET(BgL_codez00_8, ((long) 0),
												BINT(BgL_arg1387z00_1498));
										}
										VECTOR_SET(BgL_codez00_8, ((long) 2),
											BGl_evmodulezd2findzd2globalz00zz__evmodulez00(VECTOR_REF
												(BgL_codez00_8, ((long) 3)), VECTOR_REF(BgL_codez00_8,
													((long) 2))));
										{

											goto BGl_evmeaningz00zz__evmeaningz00;
										}
										break;
									case ((long) 147):

										{	/* Eval/evmeaning.scm 861 */
											obj_t BgL_a0z00_1503;
											obj_t BgL_a1z00_1504;

											BgL_a0z00_1503 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 4)), BgL_stackz00_9,
												BgL_denvz00_10);
											BgL_a1z00_1504 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 5)), BgL_stackz00_9,
												BgL_denvz00_10);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1503))
												{	/* Eval/evmeaning.scm 861 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1504))
														{	/* Eval/evmeaning.scm 861 */
															return
																BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_a0z00_1503,
																BgL_a1z00_1504);
														}
													else
														{	/* Eval/evmeaning.scm 861 */
															obj_t BgL_arg1394z00_1507;

															BgL_arg1394z00_1507 =
																VECTOR_REF(BgL_codez00_8, ((long) 1));
															return
																BGl_evtypezd2errorzd2zz__everrorz00
																(BgL_arg1394z00_1507,
																BGl_string2483z00zz__evmeaningz00,
																BGl_symbol2490z00zz__evmeaningz00,
																BgL_a1z00_1504);
														}
												}
											else
												{	/* Eval/evmeaning.scm 861 */
													obj_t BgL_arg1395z00_1508;

													BgL_arg1395z00_1508 =
														VECTOR_REF(BgL_codez00_8, ((long) 1));
													return
														BGl_evtypezd2errorzd2zz__everrorz00
														(BgL_arg1395z00_1508,
														BGl_string2483z00zz__evmeaningz00,
														BGl_symbol2490z00zz__evmeaningz00, BgL_a0z00_1503);
												}
										}
										break;
									case ((long) 148):

										{	/* Eval/evmeaning.scm 863 */
											obj_t BgL_a0z00_1511;
											obj_t BgL_a1z00_1512;

											BgL_a0z00_1511 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 4)), BgL_stackz00_9,
												BgL_denvz00_10);
											BgL_a1z00_1512 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 5)), BgL_stackz00_9,
												BgL_denvz00_10);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1511))
												{	/* Eval/evmeaning.scm 863 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1512))
														{	/* Eval/evmeaning.scm 863 */
															return
																BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_a0z00_1511,
																BgL_a1z00_1512);
														}
													else
														{	/* Eval/evmeaning.scm 863 */
															obj_t BgL_arg1400z00_1515;

															BgL_arg1400z00_1515 =
																VECTOR_REF(BgL_codez00_8, ((long) 1));
															return
																BGl_evtypezd2errorzd2zz__everrorz00
																(BgL_arg1400z00_1515,
																BGl_string2483z00zz__evmeaningz00,
																BGl_symbol2490z00zz__evmeaningz00,
																BgL_a1z00_1512);
														}
												}
											else
												{	/* Eval/evmeaning.scm 863 */
													obj_t BgL_arg1401z00_1516;

													BgL_arg1401z00_1516 =
														VECTOR_REF(BgL_codez00_8, ((long) 1));
													return
														BGl_evtypezd2errorzd2zz__everrorz00
														(BgL_arg1401z00_1516,
														BGl_string2483z00zz__evmeaningz00,
														BGl_symbol2490z00zz__evmeaningz00, BgL_a0z00_1511);
												}
										}
										break;
									case ((long) 149):

										{	/* Eval/evmeaning.scm 865 */
											obj_t BgL_a0z00_1519;
											obj_t BgL_a1z00_1520;

											BgL_a0z00_1519 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 4)), BgL_stackz00_9,
												BgL_denvz00_10);
											BgL_a1z00_1520 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 5)), BgL_stackz00_9,
												BgL_denvz00_10);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1519))
												{	/* Eval/evmeaning.scm 865 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1520))
														{	/* Eval/evmeaning.scm 865 */
															return
																BGl_2za2za2zz__r4_numbers_6_5z00(BgL_a0z00_1519,
																BgL_a1z00_1520);
														}
													else
														{	/* Eval/evmeaning.scm 865 */
															obj_t BgL_arg1407z00_1523;

															BgL_arg1407z00_1523 =
																VECTOR_REF(BgL_codez00_8, ((long) 1));
															return
																BGl_evtypezd2errorzd2zz__everrorz00
																(BgL_arg1407z00_1523,
																BGl_string2483z00zz__evmeaningz00,
																BGl_symbol2490z00zz__evmeaningz00,
																BgL_a1z00_1520);
														}
												}
											else
												{	/* Eval/evmeaning.scm 865 */
													obj_t BgL_arg1409z00_1524;

													BgL_arg1409z00_1524 =
														VECTOR_REF(BgL_codez00_8, ((long) 1));
													return
														BGl_evtypezd2errorzd2zz__everrorz00
														(BgL_arg1409z00_1524,
														BGl_string2483z00zz__evmeaningz00,
														BGl_symbol2490z00zz__evmeaningz00, BgL_a0z00_1519);
												}
										}
										break;
									case ((long) 150):

										{	/* Eval/evmeaning.scm 867 */
											obj_t BgL_a0z00_1527;
											obj_t BgL_a1z00_1528;

											BgL_a0z00_1527 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 4)), BgL_stackz00_9,
												BgL_denvz00_10);
											BgL_a1z00_1528 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 5)), BgL_stackz00_9,
												BgL_denvz00_10);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1527))
												{	/* Eval/evmeaning.scm 867 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1528))
														{	/* Eval/evmeaning.scm 867 */
															return
																BGl_2zf2zf2zz__r4_numbers_6_5z00(BgL_a0z00_1527,
																BgL_a1z00_1528);
														}
													else
														{	/* Eval/evmeaning.scm 867 */
															obj_t BgL_arg1414z00_1531;

															BgL_arg1414z00_1531 =
																VECTOR_REF(BgL_codez00_8, ((long) 1));
															return
																BGl_evtypezd2errorzd2zz__everrorz00
																(BgL_arg1414z00_1531,
																BGl_string2483z00zz__evmeaningz00,
																BGl_symbol2490z00zz__evmeaningz00,
																BgL_a1z00_1528);
														}
												}
											else
												{	/* Eval/evmeaning.scm 867 */
													obj_t BgL_arg1415z00_1532;

													BgL_arg1415z00_1532 =
														VECTOR_REF(BgL_codez00_8, ((long) 1));
													return
														BGl_evtypezd2errorzd2zz__everrorz00
														(BgL_arg1415z00_1532,
														BGl_string2483z00zz__evmeaningz00,
														BGl_symbol2490z00zz__evmeaningz00, BgL_a0z00_1527);
												}
										}
										break;
									case ((long) 151):

										{	/* Eval/evmeaning.scm 869 */
											obj_t BgL_a0z00_1535;
											obj_t BgL_a1z00_1536;

											BgL_a0z00_1535 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 4)), BgL_stackz00_9,
												BgL_denvz00_10);
											BgL_a1z00_1536 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 5)), BgL_stackz00_9,
												BgL_denvz00_10);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1535))
												{	/* Eval/evmeaning.scm 869 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1536))
														{	/* Eval/evmeaning.scm 869 */
															return
																BBOOL(BGl_2zc3zc3zz__r4_numbers_6_5z00
																(BgL_a0z00_1535, BgL_a1z00_1536));
														}
													else
														{	/* Eval/evmeaning.scm 869 */
															obj_t BgL_arg1420z00_1539;

															BgL_arg1420z00_1539 =
																VECTOR_REF(BgL_codez00_8, ((long) 1));
															return
																BGl_evtypezd2errorzd2zz__everrorz00
																(BgL_arg1420z00_1539,
																BGl_string2483z00zz__evmeaningz00,
																BGl_symbol2490z00zz__evmeaningz00,
																BgL_a1z00_1536);
														}
												}
											else
												{	/* Eval/evmeaning.scm 869 */
													obj_t BgL_arg1421z00_1540;

													BgL_arg1421z00_1540 =
														VECTOR_REF(BgL_codez00_8, ((long) 1));
													return
														BGl_evtypezd2errorzd2zz__everrorz00
														(BgL_arg1421z00_1540,
														BGl_string2483z00zz__evmeaningz00,
														BGl_symbol2490z00zz__evmeaningz00, BgL_a0z00_1535);
												}
										}
										break;
									case ((long) 152):

										{	/* Eval/evmeaning.scm 871 */
											obj_t BgL_a0z00_1543;
											obj_t BgL_a1z00_1544;

											BgL_a0z00_1543 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 4)), BgL_stackz00_9,
												BgL_denvz00_10);
											BgL_a1z00_1544 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 5)), BgL_stackz00_9,
												BgL_denvz00_10);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1543))
												{	/* Eval/evmeaning.scm 871 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1544))
														{	/* Eval/evmeaning.scm 871 */
															return
																BBOOL(BGl_2ze3ze3zz__r4_numbers_6_5z00
																(BgL_a0z00_1543, BgL_a1z00_1544));
														}
													else
														{	/* Eval/evmeaning.scm 871 */
															obj_t BgL_arg1427z00_1547;

															BgL_arg1427z00_1547 =
																VECTOR_REF(BgL_codez00_8, ((long) 1));
															return
																BGl_evtypezd2errorzd2zz__everrorz00
																(BgL_arg1427z00_1547,
																BGl_string2483z00zz__evmeaningz00,
																BGl_symbol2490z00zz__evmeaningz00,
																BgL_a1z00_1544);
														}
												}
											else
												{	/* Eval/evmeaning.scm 871 */
													obj_t BgL_arg1428z00_1548;

													BgL_arg1428z00_1548 =
														VECTOR_REF(BgL_codez00_8, ((long) 1));
													return
														BGl_evtypezd2errorzd2zz__everrorz00
														(BgL_arg1428z00_1548,
														BGl_string2483z00zz__evmeaningz00,
														BGl_symbol2490z00zz__evmeaningz00, BgL_a0z00_1543);
												}
										}
										break;
									case ((long) 153):

										{	/* Eval/evmeaning.scm 873 */
											obj_t BgL_a0z00_1551;
											obj_t BgL_a1z00_1552;

											BgL_a0z00_1551 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 4)), BgL_stackz00_9,
												BgL_denvz00_10);
											BgL_a1z00_1552 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 5)), BgL_stackz00_9,
												BgL_denvz00_10);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1551))
												{	/* Eval/evmeaning.scm 873 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1552))
														{	/* Eval/evmeaning.scm 873 */
															return
																BBOOL(BGl_2zc3zd3z10zz__r4_numbers_6_5z00
																(BgL_a0z00_1551, BgL_a1z00_1552));
														}
													else
														{	/* Eval/evmeaning.scm 873 */
															obj_t BgL_arg1433z00_1555;

															BgL_arg1433z00_1555 =
																VECTOR_REF(BgL_codez00_8, ((long) 1));
															return
																BGl_evtypezd2errorzd2zz__everrorz00
																(BgL_arg1433z00_1555,
																BGl_string2483z00zz__evmeaningz00,
																BGl_symbol2490z00zz__evmeaningz00,
																BgL_a1z00_1552);
														}
												}
											else
												{	/* Eval/evmeaning.scm 873 */
													obj_t BgL_arg1434z00_1556;

													BgL_arg1434z00_1556 =
														VECTOR_REF(BgL_codez00_8, ((long) 1));
													return
														BGl_evtypezd2errorzd2zz__everrorz00
														(BgL_arg1434z00_1556,
														BGl_string2483z00zz__evmeaningz00,
														BGl_symbol2490z00zz__evmeaningz00, BgL_a0z00_1551);
												}
										}
										break;
									case ((long) 154):

										{	/* Eval/evmeaning.scm 875 */
											obj_t BgL_a0z00_1559;
											obj_t BgL_a1z00_1560;

											BgL_a0z00_1559 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 4)), BgL_stackz00_9,
												BgL_denvz00_10);
											BgL_a1z00_1560 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 5)), BgL_stackz00_9,
												BgL_denvz00_10);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1559))
												{	/* Eval/evmeaning.scm 875 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1560))
														{	/* Eval/evmeaning.scm 875 */
															return
																BBOOL(BGl_2ze3zd3z30zz__r4_numbers_6_5z00
																(BgL_a0z00_1559, BgL_a1z00_1560));
														}
													else
														{	/* Eval/evmeaning.scm 875 */
															obj_t BgL_arg1439z00_1563;

															BgL_arg1439z00_1563 =
																VECTOR_REF(BgL_codez00_8, ((long) 1));
															return
																BGl_evtypezd2errorzd2zz__everrorz00
																(BgL_arg1439z00_1563,
																BGl_string2483z00zz__evmeaningz00,
																BGl_symbol2490z00zz__evmeaningz00,
																BgL_a1z00_1560);
														}
												}
											else
												{	/* Eval/evmeaning.scm 875 */
													obj_t BgL_arg1440z00_1564;

													BgL_arg1440z00_1564 =
														VECTOR_REF(BgL_codez00_8, ((long) 1));
													return
														BGl_evtypezd2errorzd2zz__everrorz00
														(BgL_arg1440z00_1564,
														BGl_string2483z00zz__evmeaningz00,
														BGl_symbol2490z00zz__evmeaningz00, BgL_a0z00_1559);
												}
										}
										break;
									case ((long) 155):

										{	/* Eval/evmeaning.scm 877 */
											obj_t BgL_a0z00_1567;
											obj_t BgL_a1z00_1568;

											BgL_a0z00_1567 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 4)), BgL_stackz00_9,
												BgL_denvz00_10);
											BgL_a1z00_1568 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 5)), BgL_stackz00_9,
												BgL_denvz00_10);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1567))
												{	/* Eval/evmeaning.scm 877 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1568))
														{	/* Eval/evmeaning.scm 877 */
															return
																BBOOL(BGl_2zd3zd3zz__r4_numbers_6_5z00
																(BgL_a0z00_1567, BgL_a1z00_1568));
														}
													else
														{	/* Eval/evmeaning.scm 877 */
															obj_t BgL_arg1445z00_1571;

															BgL_arg1445z00_1571 =
																VECTOR_REF(BgL_codez00_8, ((long) 1));
															return
																BGl_evtypezd2errorzd2zz__everrorz00
																(BgL_arg1445z00_1571,
																BGl_string2483z00zz__evmeaningz00,
																BGl_symbol2490z00zz__evmeaningz00,
																BgL_a1z00_1568);
														}
												}
											else
												{	/* Eval/evmeaning.scm 877 */
													obj_t BgL_arg1446z00_1572;

													BgL_arg1446z00_1572 =
														VECTOR_REF(BgL_codez00_8, ((long) 1));
													return
														BGl_evtypezd2errorzd2zz__everrorz00
														(BgL_arg1446z00_1572,
														BGl_string2483z00zz__evmeaningz00,
														BGl_symbol2490z00zz__evmeaningz00, BgL_a0z00_1567);
												}
										}
										break;
									case ((long) 166):

										{	/* Eval/evmeaning.scm 879 */
											obj_t BgL_a0z00_1575;
											obj_t BgL_a1z00_1576;

											BgL_a0z00_1575 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 4)), BgL_stackz00_9,
												BgL_denvz00_10);
											BgL_a1z00_1576 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 5)), BgL_stackz00_9,
												BgL_denvz00_10);
											if (INTEGERP(BgL_a0z00_1575))
												{	/* Eval/evmeaning.scm 879 */
													if (INTEGERP(BgL_a1z00_1576))
														{	/* Eval/evmeaning.scm 879 */
															return ADDFX(BgL_a0z00_1575, BgL_a1z00_1576);
														}
													else
														{	/* Eval/evmeaning.scm 879 */
															obj_t BgL_arg1452z00_1579;

															BgL_arg1452z00_1579 =
																VECTOR_REF(BgL_codez00_8, ((long) 1));
															return
																BGl_evtypezd2errorzd2zz__everrorz00
																(BgL_arg1452z00_1579,
																BGl_string2483z00zz__evmeaningz00,
																BGl_symbol2492z00zz__evmeaningz00,
																BgL_a1z00_1576);
														}
												}
											else
												{	/* Eval/evmeaning.scm 879 */
													obj_t BgL_arg1453z00_1580;

													BgL_arg1453z00_1580 =
														VECTOR_REF(BgL_codez00_8, ((long) 1));
													return
														BGl_evtypezd2errorzd2zz__everrorz00
														(BgL_arg1453z00_1580,
														BGl_string2483z00zz__evmeaningz00,
														BGl_symbol2492z00zz__evmeaningz00, BgL_a0z00_1575);
												}
										}
										break;
									case ((long) 167):

										{	/* Eval/evmeaning.scm 881 */
											obj_t BgL_a0z00_1583;
											obj_t BgL_a1z00_1584;

											BgL_a0z00_1583 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 4)), BgL_stackz00_9,
												BgL_denvz00_10);
											BgL_a1z00_1584 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 5)), BgL_stackz00_9,
												BgL_denvz00_10);
											if (INTEGERP(BgL_a0z00_1583))
												{	/* Eval/evmeaning.scm 881 */
													if (INTEGERP(BgL_a1z00_1584))
														{	/* Eval/evmeaning.scm 881 */
															return SUBFX(BgL_a0z00_1583, BgL_a1z00_1584);
														}
													else
														{	/* Eval/evmeaning.scm 881 */
															obj_t BgL_arg1458z00_1587;

															BgL_arg1458z00_1587 =
																VECTOR_REF(BgL_codez00_8, ((long) 1));
															return
																BGl_evtypezd2errorzd2zz__everrorz00
																(BgL_arg1458z00_1587,
																BGl_string2483z00zz__evmeaningz00,
																BGl_symbol2492z00zz__evmeaningz00,
																BgL_a1z00_1584);
														}
												}
											else
												{	/* Eval/evmeaning.scm 881 */
													obj_t BgL_arg1459z00_1588;

													BgL_arg1459z00_1588 =
														VECTOR_REF(BgL_codez00_8, ((long) 1));
													return
														BGl_evtypezd2errorzd2zz__everrorz00
														(BgL_arg1459z00_1588,
														BGl_string2483z00zz__evmeaningz00,
														BGl_symbol2492z00zz__evmeaningz00, BgL_a0z00_1583);
												}
										}
										break;
									case ((long) 168):

										{	/* Eval/evmeaning.scm 883 */
											obj_t BgL_a0z00_1591;
											obj_t BgL_a1z00_1592;

											BgL_a0z00_1591 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 4)), BgL_stackz00_9,
												BgL_denvz00_10);
											BgL_a1z00_1592 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 5)), BgL_stackz00_9,
												BgL_denvz00_10);
											if (INTEGERP(BgL_a0z00_1591))
												{	/* Eval/evmeaning.scm 883 */
													if (INTEGERP(BgL_a1z00_1592))
														{	/* Eval/evmeaning.scm 883 */
															return
																BINT(
																((long) CINT(BgL_a0z00_1591) *
																	(long) CINT(BgL_a1z00_1592)));
														}
													else
														{	/* Eval/evmeaning.scm 883 */
															obj_t BgL_arg1464z00_1595;

															BgL_arg1464z00_1595 =
																VECTOR_REF(BgL_codez00_8, ((long) 1));
															return
																BGl_evtypezd2errorzd2zz__everrorz00
																(BgL_arg1464z00_1595,
																BGl_string2483z00zz__evmeaningz00,
																BGl_symbol2492z00zz__evmeaningz00,
																BgL_a1z00_1592);
														}
												}
											else
												{	/* Eval/evmeaning.scm 883 */
													obj_t BgL_arg1465z00_1596;

													BgL_arg1465z00_1596 =
														VECTOR_REF(BgL_codez00_8, ((long) 1));
													return
														BGl_evtypezd2errorzd2zz__everrorz00
														(BgL_arg1465z00_1596,
														BGl_string2483z00zz__evmeaningz00,
														BGl_symbol2492z00zz__evmeaningz00, BgL_a0z00_1591);
												}
										}
										break;
									case ((long) 169):

										{	/* Eval/evmeaning.scm 885 */
											obj_t BgL_a0z00_1599;
											obj_t BgL_a1z00_1600;

											BgL_a0z00_1599 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 4)), BgL_stackz00_9,
												BgL_denvz00_10);
											BgL_a1z00_1600 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 5)), BgL_stackz00_9,
												BgL_denvz00_10);
											if (INTEGERP(BgL_a0z00_1599))
												{	/* Eval/evmeaning.scm 885 */
													if (INTEGERP(BgL_a1z00_1600))
														{	/* Eval/evmeaning.scm 885 */
															return
																BINT(
																((long) CINT(BgL_a0z00_1599) /
																	(long) CINT(BgL_a1z00_1600)));
														}
													else
														{	/* Eval/evmeaning.scm 885 */
															obj_t BgL_arg1470z00_1603;

															BgL_arg1470z00_1603 =
																VECTOR_REF(BgL_codez00_8, ((long) 1));
															return
																BGl_evtypezd2errorzd2zz__everrorz00
																(BgL_arg1470z00_1603,
																BGl_string2483z00zz__evmeaningz00,
																BGl_symbol2492z00zz__evmeaningz00,
																BgL_a1z00_1600);
														}
												}
											else
												{	/* Eval/evmeaning.scm 885 */
													obj_t BgL_arg1471z00_1604;

													BgL_arg1471z00_1604 =
														VECTOR_REF(BgL_codez00_8, ((long) 1));
													return
														BGl_evtypezd2errorzd2zz__everrorz00
														(BgL_arg1471z00_1604,
														BGl_string2483z00zz__evmeaningz00,
														BGl_symbol2492z00zz__evmeaningz00, BgL_a0z00_1599);
												}
										}
										break;
									case ((long) 170):

										{	/* Eval/evmeaning.scm 887 */
											obj_t BgL_a0z00_1607;
											obj_t BgL_a1z00_1608;

											BgL_a0z00_1607 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 4)), BgL_stackz00_9,
												BgL_denvz00_10);
											BgL_a1z00_1608 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 5)), BgL_stackz00_9,
												BgL_denvz00_10);
											if (INTEGERP(BgL_a0z00_1607))
												{	/* Eval/evmeaning.scm 887 */
													if (INTEGERP(BgL_a1z00_1608))
														{	/* Eval/evmeaning.scm 887 */
															return
																BBOOL(
																((long) CINT(BgL_a0z00_1607) <
																	(long) CINT(BgL_a1z00_1608)));
														}
													else
														{	/* Eval/evmeaning.scm 887 */
															obj_t BgL_arg1476z00_1611;

															BgL_arg1476z00_1611 =
																VECTOR_REF(BgL_codez00_8, ((long) 1));
															return
																BGl_evtypezd2errorzd2zz__everrorz00
																(BgL_arg1476z00_1611,
																BGl_string2483z00zz__evmeaningz00,
																BGl_symbol2492z00zz__evmeaningz00,
																BgL_a1z00_1608);
														}
												}
											else
												{	/* Eval/evmeaning.scm 887 */
													obj_t BgL_arg1477z00_1612;

													BgL_arg1477z00_1612 =
														VECTOR_REF(BgL_codez00_8, ((long) 1));
													return
														BGl_evtypezd2errorzd2zz__everrorz00
														(BgL_arg1477z00_1612,
														BGl_string2483z00zz__evmeaningz00,
														BGl_symbol2492z00zz__evmeaningz00, BgL_a0z00_1607);
												}
										}
										break;
									case ((long) 171):

										{	/* Eval/evmeaning.scm 889 */
											obj_t BgL_a0z00_1615;
											obj_t BgL_a1z00_1616;

											BgL_a0z00_1615 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 4)), BgL_stackz00_9,
												BgL_denvz00_10);
											BgL_a1z00_1616 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 5)), BgL_stackz00_9,
												BgL_denvz00_10);
											if (INTEGERP(BgL_a0z00_1615))
												{	/* Eval/evmeaning.scm 889 */
													if (INTEGERP(BgL_a1z00_1616))
														{	/* Eval/evmeaning.scm 889 */
															return
																BBOOL(
																((long) CINT(BgL_a0z00_1615) >
																	(long) CINT(BgL_a1z00_1616)));
														}
													else
														{	/* Eval/evmeaning.scm 889 */
															obj_t BgL_arg1483z00_1619;

															BgL_arg1483z00_1619 =
																VECTOR_REF(BgL_codez00_8, ((long) 1));
															return
																BGl_evtypezd2errorzd2zz__everrorz00
																(BgL_arg1483z00_1619,
																BGl_string2483z00zz__evmeaningz00,
																BGl_symbol2492z00zz__evmeaningz00,
																BgL_a1z00_1616);
														}
												}
											else
												{	/* Eval/evmeaning.scm 889 */
													obj_t BgL_arg1484z00_1620;

													BgL_arg1484z00_1620 =
														VECTOR_REF(BgL_codez00_8, ((long) 1));
													return
														BGl_evtypezd2errorzd2zz__everrorz00
														(BgL_arg1484z00_1620,
														BGl_string2483z00zz__evmeaningz00,
														BGl_symbol2492z00zz__evmeaningz00, BgL_a0z00_1615);
												}
										}
										break;
									case ((long) 172):

										{	/* Eval/evmeaning.scm 891 */
											obj_t BgL_a0z00_1623;
											obj_t BgL_a1z00_1624;

											BgL_a0z00_1623 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 4)), BgL_stackz00_9,
												BgL_denvz00_10);
											BgL_a1z00_1624 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 5)), BgL_stackz00_9,
												BgL_denvz00_10);
											if (INTEGERP(BgL_a0z00_1623))
												{	/* Eval/evmeaning.scm 891 */
													if (INTEGERP(BgL_a1z00_1624))
														{	/* Eval/evmeaning.scm 891 */
															return
																BBOOL(
																((long) CINT(BgL_a0z00_1623) <=
																	(long) CINT(BgL_a1z00_1624)));
														}
													else
														{	/* Eval/evmeaning.scm 891 */
															obj_t BgL_arg1489z00_1627;

															BgL_arg1489z00_1627 =
																VECTOR_REF(BgL_codez00_8, ((long) 1));
															return
																BGl_evtypezd2errorzd2zz__everrorz00
																(BgL_arg1489z00_1627,
																BGl_string2483z00zz__evmeaningz00,
																BGl_symbol2492z00zz__evmeaningz00,
																BgL_a1z00_1624);
														}
												}
											else
												{	/* Eval/evmeaning.scm 891 */
													obj_t BgL_arg1491z00_1628;

													BgL_arg1491z00_1628 =
														VECTOR_REF(BgL_codez00_8, ((long) 1));
													return
														BGl_evtypezd2errorzd2zz__everrorz00
														(BgL_arg1491z00_1628,
														BGl_string2483z00zz__evmeaningz00,
														BGl_symbol2492z00zz__evmeaningz00, BgL_a0z00_1623);
												}
										}
										break;
									case ((long) 173):

										{	/* Eval/evmeaning.scm 893 */
											obj_t BgL_a0z00_1631;
											obj_t BgL_a1z00_1632;

											BgL_a0z00_1631 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 4)), BgL_stackz00_9,
												BgL_denvz00_10);
											BgL_a1z00_1632 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 5)), BgL_stackz00_9,
												BgL_denvz00_10);
											if (INTEGERP(BgL_a0z00_1631))
												{	/* Eval/evmeaning.scm 893 */
													if (INTEGERP(BgL_a1z00_1632))
														{	/* Eval/evmeaning.scm 893 */
															return
																BBOOL(
																((long) CINT(BgL_a0z00_1631) >=
																	(long) CINT(BgL_a1z00_1632)));
														}
													else
														{	/* Eval/evmeaning.scm 893 */
															obj_t BgL_arg1496z00_1635;

															BgL_arg1496z00_1635 =
																VECTOR_REF(BgL_codez00_8, ((long) 1));
															return
																BGl_evtypezd2errorzd2zz__everrorz00
																(BgL_arg1496z00_1635,
																BGl_string2483z00zz__evmeaningz00,
																BGl_symbol2492z00zz__evmeaningz00,
																BgL_a1z00_1632);
														}
												}
											else
												{	/* Eval/evmeaning.scm 893 */
													obj_t BgL_arg1497z00_1636;

													BgL_arg1497z00_1636 =
														VECTOR_REF(BgL_codez00_8, ((long) 1));
													return
														BGl_evtypezd2errorzd2zz__everrorz00
														(BgL_arg1497z00_1636,
														BGl_string2483z00zz__evmeaningz00,
														BGl_symbol2492z00zz__evmeaningz00, BgL_a0z00_1631);
												}
										}
										break;
									case ((long) 174):

										{	/* Eval/evmeaning.scm 895 */
											obj_t BgL_a0z00_1639;
											obj_t BgL_a1z00_1640;

											BgL_a0z00_1639 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 4)), BgL_stackz00_9,
												BgL_denvz00_10);
											BgL_a1z00_1640 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 5)), BgL_stackz00_9,
												BgL_denvz00_10);
											if (INTEGERP(BgL_a0z00_1639))
												{	/* Eval/evmeaning.scm 895 */
													if (INTEGERP(BgL_a1z00_1640))
														{	/* Eval/evmeaning.scm 895 */
															return
																BBOOL(
																((long) CINT(BgL_a0z00_1639) ==
																	(long) CINT(BgL_a1z00_1640)));
														}
													else
														{	/* Eval/evmeaning.scm 895 */
															obj_t BgL_arg1505z00_1643;

															BgL_arg1505z00_1643 =
																VECTOR_REF(BgL_codez00_8, ((long) 1));
															return
																BGl_evtypezd2errorzd2zz__everrorz00
																(BgL_arg1505z00_1643,
																BGl_string2483z00zz__evmeaningz00,
																BGl_symbol2492z00zz__evmeaningz00,
																BgL_a1z00_1640);
														}
												}
											else
												{	/* Eval/evmeaning.scm 895 */
													obj_t BgL_arg1506z00_1644;

													BgL_arg1506z00_1644 =
														VECTOR_REF(BgL_codez00_8, ((long) 1));
													return
														BGl_evtypezd2errorzd2zz__everrorz00
														(BgL_arg1506z00_1644,
														BGl_string2483z00zz__evmeaningz00,
														BGl_symbol2492z00zz__evmeaningz00, BgL_a0z00_1639);
												}
										}
										break;
									case ((long) 156):

										{	/* Eval/evmeaning.scm 897 */
											obj_t BgL_a0z00_1647;
											obj_t BgL_a1z00_1648;

											BgL_a0z00_1647 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 4)), BgL_stackz00_9,
												BgL_denvz00_10);
											BgL_a1z00_1648 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 5)), BgL_stackz00_9,
												BgL_denvz00_10);
											return BBOOL((BgL_a0z00_1647 == BgL_a1z00_1648));
										}
										break;
									case ((long) 157):

										return
											MAKE_YOUNG_PAIR(BGl_evmeaningz00zz__evmeaningz00
											(VECTOR_REF(BgL_codez00_8, ((long) 4)), BgL_stackz00_9,
												BgL_denvz00_10),
											BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_8,
													((long) 5)), BgL_stackz00_9, BgL_denvz00_10));
										break;
									case ((long) 158):

										{	/* Eval/evmeaning.scm 901 */
											obj_t BgL_a0z00_1655;

											BgL_a0z00_1655 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 4)), BgL_stackz00_9,
												BgL_denvz00_10);
											if (PAIRP(BgL_a0z00_1655))
												{	/* Eval/evmeaning.scm 901 */
													return CAR(BgL_a0z00_1655);
												}
											else
												{	/* Eval/evmeaning.scm 901 */
													obj_t BgL_arg1514z00_1657;

													BgL_arg1514z00_1657 =
														VECTOR_REF(BgL_codez00_8, ((long) 1));
													return
														BGl_evtypezd2errorzd2zz__everrorz00
														(BgL_arg1514z00_1657,
														BGl_string2483z00zz__evmeaningz00,
														BGl_symbol2494z00zz__evmeaningz00, BgL_a0z00_1655);
												}
										}
										break;
									case ((long) 159):

										{	/* Eval/evmeaning.scm 903 */
											obj_t BgL_a0z00_1659;

											BgL_a0z00_1659 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 4)), BgL_stackz00_9,
												BgL_denvz00_10);
											if (PAIRP(BgL_a0z00_1659))
												{	/* Eval/evmeaning.scm 903 */
													return CDR(BgL_a0z00_1659);
												}
											else
												{	/* Eval/evmeaning.scm 903 */
													obj_t BgL_arg1518z00_1661;

													BgL_arg1518z00_1661 =
														VECTOR_REF(BgL_codez00_8, ((long) 1));
													return
														BGl_evtypezd2errorzd2zz__everrorz00
														(BgL_arg1518z00_1661,
														BGl_string2483z00zz__evmeaningz00,
														BGl_symbol2494z00zz__evmeaningz00, BgL_a0z00_1659);
												}
										}
										break;
									case ((long) 160):

										{	/* Eval/evmeaning.scm 905 */
											obj_t BgL_a0z00_1663;

											BgL_a0z00_1663 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_8, ((long) 4)), BgL_stackz00_9,
												BgL_denvz00_10);
											{	/* Eval/evmeaning.scm 907 */
												bool_t BgL_test2609z00_5044;

												if (PAIRP(BgL_a0z00_1663))
													{	/* Eval/evmeaning.scm 907 */
														obj_t BgL_tmpz00_5047;

														BgL_tmpz00_5047 = CDR(BgL_a0z00_1663);
														BgL_test2609z00_5044 = PAIRP(BgL_tmpz00_5047);
													}
												else
													{	/* Eval/evmeaning.scm 907 */
														BgL_test2609z00_5044 = ((bool_t) 0);
													}
												if (BgL_test2609z00_5044)
													{	/* Eval/evmeaning.scm 907 */
														return CAR(CDR(BgL_a0z00_1663));
													}
												else
													{	/* Eval/evmeaning.scm 907 */
														if (PAIRP(BgL_a0z00_1663))
															{	/* Eval/evmeaning.scm 909 */
																return
																	BGl_evtypezd2errorzd2zz__everrorz00(VECTOR_REF
																	(BgL_codez00_8, ((long) 1)),
																	VECTOR_REF(BgL_codez00_8, ((long) 2)),
																	BGl_string2495z00zz__evmeaningz00,
																	CDR(BgL_a0z00_1663));
															}
														else
															{	/* Eval/evmeaning.scm 909 */
																return
																	BGl_evtypezd2errorzd2zz__everrorz00(VECTOR_REF
																	(BgL_codez00_8, ((long) 1)),
																	VECTOR_REF(BgL_codez00_8, ((long) 2)),
																	BGl_string2495z00zz__evmeaningz00,
																	BgL_a0z00_1663);
										}}}} break;
									default:
									BgL_case_else1078z00_1349:
										{	/* Eval/evmeaning.scm 919 */
											obj_t BgL_arg1533z00_1676;

											BgL_arg1533z00_1676 =
												VECTOR_REF(((obj_t) BgL_codez00_8), ((long) 1));
											return
												BGl_everrorz00zz__everrorz00(BgL_arg1533z00_1676,
												BGl_string2483z00zz__evmeaningz00,
												BGl_string2485z00zz__evmeaningz00, BgL_codez00_8);
										}
									}
							}
						else
							{	/* Eval/evmeaning.scm 186 */
								goto BgL_case_else1078z00_1349;
							}
					}
				}
			else
				{	/* Eval/evmeaning.scm 184 */
					return BgL_codez00_8;
				}
		}

	}



/* &evmeaning */
	obj_t BGl_z62evmeaningz62zz__evmeaningz00(obj_t BgL_envz00_4050,
		obj_t BgL_codez00_4051, obj_t BgL_stackz00_4052, obj_t BgL_denvz00_4053)
	{
		{	/* Eval/evmeaning.scm 183 */
			{	/* Eval/evmeaning.scm 184 */
				obj_t BgL_auxz00_5073;
				obj_t BgL_auxz00_5066;

				if (BGL_DYNAMIC_ENVP(BgL_denvz00_4053))
					{	/* Eval/evmeaning.scm 184 */
						BgL_auxz00_5073 = BgL_denvz00_4053;
					}
				else
					{
						obj_t BgL_auxz00_5076;

						BgL_auxz00_5076 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2496z00zz__evmeaningz00,
							BINT(((long) 6923)), BGl_string2497z00zz__evmeaningz00,
							BGl_string2499z00zz__evmeaningz00, BgL_denvz00_4053);
						FAILURE(BgL_auxz00_5076, BFALSE, BFALSE);
					}
				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_stackz00_4052))
					{	/* Eval/evmeaning.scm 184 */
						BgL_auxz00_5066 = BgL_stackz00_4052;
					}
				else
					{
						obj_t BgL_auxz00_5069;

						BgL_auxz00_5069 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2496z00zz__evmeaningz00,
							BINT(((long) 6923)), BGl_string2497z00zz__evmeaningz00,
							BGl_string2498z00zz__evmeaningz00, BgL_stackz00_4052);
						FAILURE(BgL_auxz00_5069, BFALSE, BFALSE);
					}
				return
					BGl_evmeaningz00zz__evmeaningz00(BgL_codez00_4051, BgL_auxz00_5066,
					BgL_auxz00_5073);
			}
		}

	}



/* evmeaning-bounce-176 */
	obj_t BGl_evmeaningzd2bouncezd2176z00zz__evmeaningz00(obj_t BgL_codez00_11,
		obj_t BgL_stackz00_12, obj_t BgL_denvz00_13)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 772 */
				obj_t BgL_mutexz00_1677;

				BgL_mutexz00_1677 = VECTOR_REF(BgL_codez00_11, ((long) 2));
				{	/* Eval/evmeaning.scm 772 */
					obj_t BgL_prelockz00_1678;

					BgL_prelockz00_1678 = VECTOR_REF(BgL_codez00_11, ((long) 3));
					{	/* Eval/evmeaning.scm 773 */
						obj_t BgL_bodyz00_1679;

						BgL_bodyz00_1679 = VECTOR_REF(BgL_codez00_11, ((long) 4));
						{	/* Eval/evmeaning.scm 774 */
							obj_t BgL_mz00_1680;

							BgL_mz00_1680 =
								BGl_evmeaningz00zz__evmeaningz00(BgL_mutexz00_1677,
								BgL_stackz00_12, BgL_denvz00_13);
							{	/* Eval/evmeaning.scm 775 */

								{	/* Eval/evmeaning.scm 776 */
									bool_t BgL_test2614z00_5085;

									{	/* Eval/evmeaning.scm 776 */
										bool_t BgL_res2338z00_3206;

										BgL_res2338z00_3206 = BGL_MUTEXP(BgL_mz00_1680);
										BgL_test2614z00_5085 = BgL_res2338z00_3206;
									}
									if (BgL_test2614z00_5085)
										{	/* Eval/evmeaning.scm 777 */
											obj_t BgL_top2616z00_5088;

											BgL_top2616z00_5088 = BGL_EXITD_TOP_AS_OBJ();
											{	/* Eval/evmeaning.scm 777 */
												obj_t BgL_tmpz00_5090;

												BgL_tmpz00_5090 =
													BGl_evmeaningz00zz__evmeaningz00(BgL_prelockz00_1678,
													BgL_stackz00_12, BgL_denvz00_13);
												BGL_MUTEX_LOCK_PRELOCK(BgL_mz00_1680, BgL_tmpz00_5090);
											}
											BGL_EXITD_PUSH_PROTECT(BgL_top2616z00_5088,
												BgL_mz00_1680);
											BUNSPEC;
											{	/* Eval/evmeaning.scm 777 */
												obj_t BgL_tmp2615z00_5087;

												BgL_tmp2615z00_5087 =
													BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_1679,
													BgL_stackz00_12, BgL_denvz00_13);
												BGL_EXITD_POP_PROTECT(BgL_top2616z00_5088);
												BUNSPEC;
												BGL_MUTEX_UNLOCK(BgL_mz00_1680);
												return BgL_tmp2615z00_5087;
											}
										}
									else
										{	/* Eval/evmeaning.scm 776 */
											return
												BGl_evtypezd2errorzd2zz__everrorz00(VECTOR_REF
												(BgL_codez00_11, ((long) 1)),
												BGl_string2500z00zz__evmeaningz00,
												BGl_string2501z00zz__evmeaningz00, BgL_mz00_1680);
		}}}}}}}}

	}



/* evmeaning-bounce-175 */
	obj_t BGl_evmeaningzd2bouncezd2175z00zz__evmeaningz00(obj_t BgL_codez00_14,
		obj_t BgL_stackz00_15, obj_t BgL_denvz00_16)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 763 */
				obj_t BgL_mutexz00_1683;

				BgL_mutexz00_1683 = VECTOR_REF(BgL_codez00_14, ((long) 2));
				{	/* Eval/evmeaning.scm 763 */
					obj_t BgL_bodyz00_1684;

					BgL_bodyz00_1684 = VECTOR_REF(BgL_codez00_14, ((long) 3));
					{	/* Eval/evmeaning.scm 764 */
						obj_t BgL_mz00_1685;

						BgL_mz00_1685 =
							BGl_evmeaningz00zz__evmeaningz00(BgL_mutexz00_1683,
							BgL_stackz00_15, BgL_denvz00_16);
						{	/* Eval/evmeaning.scm 765 */

							{	/* Eval/evmeaning.scm 766 */
								bool_t BgL_test2617z00_5102;

								{	/* Eval/evmeaning.scm 766 */
									bool_t BgL_res2339z00_3210;

									BgL_res2339z00_3210 = BGL_MUTEXP(BgL_mz00_1685);
									BgL_test2617z00_5102 = BgL_res2339z00_3210;
								}
								if (BgL_test2617z00_5102)
									{	/* Eval/evmeaning.scm 767 */
										obj_t BgL_top2619z00_5105;

										BgL_top2619z00_5105 = BGL_EXITD_TOP_AS_OBJ();
										BGL_MUTEX_LOCK(BgL_mz00_1685);
										BGL_EXITD_PUSH_PROTECT(BgL_top2619z00_5105, BgL_mz00_1685);
										BUNSPEC;
										{	/* Eval/evmeaning.scm 767 */
											obj_t BgL_tmp2618z00_5104;

											BgL_tmp2618z00_5104 =
												BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_1684,
												BgL_stackz00_15, BgL_denvz00_16);
											BGL_EXITD_POP_PROTECT(BgL_top2619z00_5105);
											BUNSPEC;
											BGL_MUTEX_UNLOCK(BgL_mz00_1685);
											return BgL_tmp2618z00_5104;
										}
									}
								else
									{	/* Eval/evmeaning.scm 766 */
										return
											BGl_evtypezd2errorzd2zz__everrorz00(VECTOR_REF
											(BgL_codez00_14, ((long) 1)),
											BGl_string2500z00zz__evmeaningz00,
											BGl_string2501z00zz__evmeaningz00, BgL_mz00_1685);
		}}}}}}}

	}



/* evmeaning-bounce-71 */
	obj_t BGl_evmeaningzd2bouncezd271z00zz__evmeaningz00(obj_t BgL_codez00_17,
		obj_t BgL_stackz00_18, obj_t BgL_denvz00_19)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 750 */
				obj_t BgL_handlerz00_1688;

				BgL_handlerz00_1688 = VECTOR_REF(BgL_codez00_17, ((long) 2));
				{	/* Eval/evmeaning.scm 750 */
					obj_t BgL_bodyz00_1689;

					BgL_bodyz00_1689 = VECTOR_REF(BgL_codez00_17, ((long) 3));
					{	/* Eval/evmeaning.scm 751 */
						obj_t BgL_ehandlerz00_1690;

						BgL_ehandlerz00_1690 =
							BGl_evmeaningz00zz__evmeaningz00(BgL_handlerz00_1688,
							BgL_stackz00_18, BgL_denvz00_19);
						{	/* Eval/evmeaning.scm 752 */
							obj_t BgL_locz00_1691;

							BgL_locz00_1691 = VECTOR_REF(BgL_codez00_17, ((long) 1));
							{	/* Eval/evmeaning.scm 753 */

								if (PROCEDUREP(BgL_ehandlerz00_1690))
									{	/* Eval/evmeaning.scm 755 */
										if (PROCEDURE_CORRECT_ARITYP(BgL_ehandlerz00_1690,
												(int) (((long) 1))))
											{	/* Eval/evmeaning.scm 758 */
												obj_t BgL_res1087z00_4063;
												obj_t BgL_handler1089z00_1695;

												BgL_res1087z00_4063 = MAKE_CELL(BUNSPEC);
												BgL_handler1089z00_1695 = BgL_ehandlerz00_1690;
												if (CBOOL
													(BGl_zc3z04exitza31546ze3ze70z60zz__evmeaningz00
														(BgL_denvz00_19, BgL_stackz00_18, BgL_bodyz00_1689,
															BgL_res1087z00_4063)))
													{	/* Eval/evmeaning.scm 758 */
														return
															PROCEDURE_ENTRY(BgL_handler1089z00_1695)
															(BgL_handler1089z00_1695,
															CELL_REF(BgL_res1087z00_4063), BEOA);
													}
												else
													{	/* Eval/evmeaning.scm 758 */
														return CELL_REF(BgL_res1087z00_4063);
													}
											}
										else
											{	/* Eval/evmeaning.scm 757 */
												return
													BGl_evarityzd2errorzd2zz__everrorz00(BgL_locz00_1691,
													BGl_string2502z00zz__evmeaningz00, (int) (((long) 1)),
													PROCEDURE_ARITY(BgL_ehandlerz00_1690));
									}}
								else
									{	/* Eval/evmeaning.scm 755 */
										return
											BGl_evtypezd2errorzd2zz__everrorz00(BgL_locz00_1691,
											BGl_string2483z00zz__evmeaningz00,
											BGl_string2503z00zz__evmeaningz00, BgL_ehandlerz00_1690);
									}
							}
						}
					}
				}
			}
		}

	}



/* <@exit:1546>~0 */
	obj_t BGl_zc3z04exitza31546ze3ze70z60zz__evmeaningz00(obj_t BgL_denvz00_4264,
		obj_t BgL_stackz00_4263, obj_t BgL_bodyz00_4262, obj_t BgL_res1087z00_4261)
	{
		{	/* Eval/evmeaning.scm 758 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1093z00_1715;

			if (SET_EXIT(BgL_an_exit1093z00_1715))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1093z00_1715 = (void *) jmpbuf;
					{	/* Eval/evmeaning.scm 758 */

						PUSH_EXIT(BgL_an_exit1093z00_1715, ((long) 1));
						{	/* Eval/evmeaning.scm 758 */
							obj_t BgL_an_exitd1094z00_1716;

							BgL_an_exitd1094z00_1716 = ((obj_t) (&exitd));
							{	/* Eval/evmeaning.scm 758 */
								bool_t BgL_res1096z00_1719;

								{	/* Eval/evmeaning.scm 758 */
									obj_t BgL_ohs1085z00_1720;

									BgL_ohs1085z00_1720 = BGL_ERROR_HANDLER_GET();
									{	/* Eval/evmeaning.scm 758 */
										obj_t BgL_exitd1090z00_1721;

										BgL_exitd1090z00_1721 = ((obj_t) (&exitd));
										{
											obj_t BgL_zc3z04anonymousza31553ze3z87_4055;

											BgL_zc3z04anonymousza31553ze3z87_4055 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31553ze3ze5zz__evmeaningz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31553ze3z87_4055,
												(int) (((long) 0)), BgL_ohs1085z00_1720);
											BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
												(BgL_exitd1090z00_1721,
												BgL_zc3z04anonymousza31553ze3z87_4055);
											{	/* Eval/evmeaning.scm 758 */
												bool_t BgL_tmp1092z00_1723;

												{	/* Eval/evmeaning.scm 758 */
													obj_t BgL_arg1547z00_1724;

													{	/* Eval/evmeaning.scm 758 */
														obj_t BgL_zc3z04anonymousza31552ze3z87_4054;

														BgL_zc3z04anonymousza31552ze3z87_4054 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31552ze3ze5zz__evmeaningz00,
															(int) (((long) 1)), (int) (((long) 2)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31552ze3z87_4054,
															(int) (((long) 0)), BgL_an_exitd1094z00_1716);
														PROCEDURE_SET(BgL_zc3z04anonymousza31552ze3z87_4054,
															(int) (((long) 1)),
															((obj_t) BgL_res1087z00_4261));
														BgL_arg1547z00_1724 =
															MAKE_YOUNG_PAIR
															(BgL_zc3z04anonymousza31552ze3z87_4054,
															BgL_ohs1085z00_1720);
													}
													BGL_ERROR_HANDLER_SET(BgL_arg1547z00_1724);
													BUNSPEC;
												}
												{	/* Eval/evmeaning.scm 758 */
													obj_t BgL_auxz00_4064;

													BgL_auxz00_4064 =
														BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4262,
														BgL_stackz00_4263, BgL_denvz00_4264);
													CELL_SET(BgL_res1087z00_4261, BgL_auxz00_4064);
												}
												BgL_tmp1092z00_1723 = ((bool_t) 0);
												BGl_exitdzd2popzd2protectz12z12zz__bexitz00
													(BgL_exitd1090z00_1721);
												BGl_z62zc3z04anonymousza31553ze3ze5zz__evmeaningz00
													(BgL_zc3z04anonymousza31553ze3z87_4055);
												BgL_res1096z00_1719 = BgL_tmp1092z00_1723;
								}}}}
								POP_EXIT();
								return BBOOL(BgL_res1096z00_1719);
							}
						}
					}
				}
		}

	}



/* &<@anonymous:1552> */
	obj_t BGl_z62zc3z04anonymousza31552ze3ze5zz__evmeaningz00(obj_t
		BgL_envz00_4056, obj_t BgL_ez00_4059)
	{
		{	/* Eval/evmeaning.scm 758 */
			{	/* Eval/evmeaning.scm 758 */
				obj_t BgL_an_exitd1094z00_4057;
				obj_t BgL_res1087z00_4058;

				BgL_an_exitd1094z00_4057 =
					PROCEDURE_REF(BgL_envz00_4056, (int) (((long) 0)));
				BgL_res1087z00_4058 =
					PROCEDURE_REF(BgL_envz00_4056, (int) (((long) 1)));
				{
					bool_t BgL_val1095z00_4278;

					CELL_SET(BgL_res1087z00_4058, BgL_ez00_4059);
					BgL_val1095z00_4278 = ((bool_t) 1);
					return
						BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1094z00_4057,
						BBOOL(BgL_val1095z00_4278));
				}
			}
		}

	}



/* &<@anonymous:1553> */
	obj_t BGl_z62zc3z04anonymousza31553ze3ze5zz__evmeaningz00(obj_t
		BgL_envz00_4061)
	{
		{	/* Eval/evmeaning.scm 758 */
			{
				obj_t BgL_ohs1085z00_4062;

				BgL_ohs1085z00_4062 =
					PROCEDURE_REF(BgL_envz00_4061, (int) (((long) 0)));
				BGL_ERROR_HANDLER_SET(BgL_ohs1085z00_4062);
				return BUNSPEC;
			}
		}

	}



/* evmeaning-bounce-70 */
	obj_t BGl_evmeaningzd2bouncezd270z00zz__evmeaningz00(obj_t BgL_codez00_20,
		obj_t BgL_stackz00_21, obj_t BgL_denvz00_22)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 739 */
				obj_t BgL_valsz00_1732;

				BgL_valsz00_1732 = VECTOR_REF(BgL_codez00_20, ((long) 3));
				{	/* Eval/evmeaning.scm 739 */
					obj_t BgL_stack2z00_1733;

					{	/* Eval/evmeaning.scm 740 */
						obj_t BgL_arg1563z00_1745;

						{	/* Eval/evmeaning.scm 740 */
							long BgL_arg1564z00_1746;

							BgL_arg1564z00_1746 = bgl_list_length(BgL_valsz00_1732);
							BgL_arg1563z00_1745 =
								BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(
								(int) (BgL_arg1564z00_1746), BNIL);
						}
						BgL_stack2z00_1733 =
							BGl_appendzd221011zd2zz__evmeaningz00(BgL_arg1563z00_1745,
							BgL_stackz00_21);
					}
					{	/* Eval/evmeaning.scm 740 */

						{
							obj_t BgL_valsz00_1735;
							obj_t BgL_stack3z00_1736;

							BgL_valsz00_1735 = BgL_valsz00_1732;
							BgL_stack3z00_1736 = BgL_stack2z00_1733;
						BgL_zc3z04anonymousza31555ze3z87_1737:
							if (NULLP(BgL_valsz00_1735))
								{	/* Eval/evmeaning.scm 743 */
									return
										BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_20,
											((long) 2)), BgL_stack2z00_1733, BgL_denvz00_22);
								}
							else
								{	/* Eval/evmeaning.scm 743 */
									{	/* Eval/evmeaning.scm 746 */
										obj_t BgL_arg1558z00_1740;

										{	/* Eval/evmeaning.scm 746 */
											obj_t BgL_arg1560z00_1741;

											BgL_arg1560z00_1741 = CAR(((obj_t) BgL_valsz00_1735));
											BgL_arg1558z00_1740 =
												BGl_evmeaningz00zz__evmeaningz00(BgL_arg1560z00_1741,
												BgL_stack2z00_1733, BgL_denvz00_22);
										}
										{	/* Eval/evmeaning.scm 746 */
											obj_t BgL_tmpz00_5180;

											BgL_tmpz00_5180 = ((obj_t) BgL_stack3z00_1736);
											SET_CAR(BgL_tmpz00_5180, BgL_arg1558z00_1740);
										}
									}
									{	/* Eval/evmeaning.scm 747 */
										obj_t BgL_arg1561z00_1742;
										obj_t BgL_arg1562z00_1743;

										BgL_arg1561z00_1742 = CDR(((obj_t) BgL_valsz00_1735));
										BgL_arg1562z00_1743 = CDR(((obj_t) BgL_stack3z00_1736));
										{
											obj_t BgL_stack3z00_5188;
											obj_t BgL_valsz00_5187;

											BgL_valsz00_5187 = BgL_arg1561z00_1742;
											BgL_stack3z00_5188 = BgL_arg1562z00_1743;
											BgL_stack3z00_1736 = BgL_stack3z00_5188;
											BgL_valsz00_1735 = BgL_valsz00_5187;
											goto BgL_zc3z04anonymousza31555ze3z87_1737;
										}
									}
								}
						}
					}
				}
			}
		}

	}



/* evmeaning-bounce-68 */
	obj_t BGl_evmeaningzd2bouncezd268z00zz__evmeaningz00(obj_t BgL_codez00_23,
		obj_t BgL_stackz00_24, obj_t BgL_denvz00_25)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 730 */
				long BgL_lenz00_1748;

				BgL_lenz00_1748 = (VECTOR_LENGTH(BgL_codez00_23) - ((long) 2));
				{
					long BgL_iz00_1750;
					obj_t BgL_lz00_1751;

					BgL_iz00_1750 = ((long) 0);
					BgL_lz00_1751 = BTRUE;
				BgL_zc3z04anonymousza31566ze3z87_1752:
					if ((BgL_iz00_1750 < BgL_lenz00_1748))
						{	/* Eval/evmeaning.scm 734 */
							obj_t BgL_lz00_1754;

							BgL_lz00_1754 =
								BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_23,
									(BgL_iz00_1750 + ((long) 2))), BgL_stackz00_24,
								BgL_denvz00_25);
							if (CBOOL(BgL_lz00_1754))
								{
									obj_t BgL_lz00_5200;
									long BgL_iz00_5198;

									BgL_iz00_5198 = (BgL_iz00_1750 + ((long) 1));
									BgL_lz00_5200 = BgL_lz00_1754;
									BgL_lz00_1751 = BgL_lz00_5200;
									BgL_iz00_1750 = BgL_iz00_5198;
									goto BgL_zc3z04anonymousza31566ze3z87_1752;
								}
							else
								{	/* Eval/evmeaning.scm 735 */
									return BFALSE;
								}
						}
					else
						{	/* Eval/evmeaning.scm 733 */
							return BgL_lz00_1751;
						}
				}
			}
		}

	}



/* evmeaning-bounce-67 */
	obj_t BGl_evmeaningzd2bouncezd267z00zz__evmeaningz00(obj_t BgL_codez00_26,
		obj_t BgL_stackz00_27, obj_t BgL_denvz00_28)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 722 */
				long BgL_lenz00_1761;

				BgL_lenz00_1761 = (VECTOR_LENGTH(BgL_codez00_26) - ((long) 2));
				{
					long BgL_iz00_1763;

					BgL_iz00_1763 = ((long) 0);
				BgL_zc3z04anonymousza31574ze3z87_1764:
					if ((BgL_iz00_1763 < BgL_lenz00_1761))
						{	/* Eval/evmeaning.scm 725 */
							obj_t BgL__ortest_1098z00_1766;

							BgL__ortest_1098z00_1766 =
								BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_26,
									(BgL_iz00_1763 + ((long) 2))), BgL_stackz00_27,
								BgL_denvz00_28);
							if (CBOOL(BgL__ortest_1098z00_1766))
								{	/* Eval/evmeaning.scm 725 */
									return BgL__ortest_1098z00_1766;
								}
							else
								{
									long BgL_iz00_5210;

									BgL_iz00_5210 = (BgL_iz00_1763 + ((long) 1));
									BgL_iz00_1763 = BgL_iz00_5210;
									goto BgL_zc3z04anonymousza31574ze3z87_1764;
								}
						}
					else
						{	/* Eval/evmeaning.scm 724 */
							return BFALSE;
						}
				}
			}
		}

	}



/* evmeaning-bounce-64 */
	obj_t BGl_evmeaningzd2bouncezd264z00zz__evmeaningz00(obj_t BgL_codez00_29,
		obj_t BgL_stackz00_30, obj_t BgL_denvz00_31)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 700 */
				obj_t BgL_bodyz00_1772;
				obj_t BgL_protectz00_1773;

				BgL_bodyz00_1772 = VECTOR_REF(BgL_codez00_29, ((long) 2));
				BgL_protectz00_1773 = VECTOR_REF(BgL_codez00_29, ((long) 3));
				{	/* Eval/evmeaning.scm 702 */
					obj_t BgL_exitd1099z00_1774;

					BgL_exitd1099z00_1774 = BGL_EXITD_TOP_AS_OBJ();
					{	/* Eval/evmeaning.scm 703 */
						obj_t BgL_zc3z04anonymousza31581ze3z87_4066;

						BgL_zc3z04anonymousza31581ze3z87_4066 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31581ze3ze5zz__evmeaningz00,
							(int) (((long) 0)), (int) (((long) 3)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31581ze3z87_4066,
							(int) (((long) 0)), BgL_protectz00_1773);
						PROCEDURE_SET(BgL_zc3z04anonymousza31581ze3z87_4066,
							(int) (((long) 1)), BgL_stackz00_30);
						PROCEDURE_SET(BgL_zc3z04anonymousza31581ze3z87_4066,
							(int) (((long) 2)), BgL_denvz00_31);
						BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1099z00_1774,
							BgL_zc3z04anonymousza31581ze3z87_4066);
						{	/* Eval/evmeaning.scm 702 */
							obj_t BgL_tmp1101z00_1776;

							BgL_tmp1101z00_1776 =
								BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_1772,
								BgL_stackz00_30, BgL_denvz00_31);
							BGl_exitdzd2popzd2protectz12z12zz__bexitz00
								(BgL_exitd1099z00_1774);
							BGl_z62zc3z04anonymousza31581ze3ze5zz__evmeaningz00
								(BgL_zc3z04anonymousza31581ze3z87_4066);
							return BgL_tmp1101z00_1776;
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1581> */
	obj_t BGl_z62zc3z04anonymousza31581ze3ze5zz__evmeaningz00(obj_t
		BgL_envz00_4067)
	{
		{	/* Eval/evmeaning.scm 702 */
			{	/* Eval/evmeaning.scm 703 */
				obj_t BgL_protectz00_4068;
				obj_t BgL_stackz00_4069;
				obj_t BgL_denvz00_4070;

				BgL_protectz00_4068 =
					PROCEDURE_REF(BgL_envz00_4067, (int) (((long) 0)));
				BgL_stackz00_4069 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4067, (int) (((long) 1))));
				BgL_denvz00_4070 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4067, (int) (((long) 2))));
				return
					BGl_evmeaningz00zz__evmeaningz00(BgL_protectz00_4068,
					BgL_stackz00_4069, BgL_denvz00_4070);
			}
		}

	}



/* evmeaning-bounce-54 */
	obj_t BGl_evmeaningzd2bouncezd254z00zz__evmeaningz00(obj_t BgL_codez00_32,
		obj_t BgL_stackz00_33, obj_t BgL_denvz00_34)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 681 */
				obj_t BgL_bodyz00_1779;

				BgL_bodyz00_1779 = VECTOR_REF(BgL_codez00_32, ((long) 2));
				{	/* Eval/evmeaning.scm 684 */
					obj_t BgL_zc3z04anonymousza31583ze3z87_4071;

					BgL_zc3z04anonymousza31583ze3z87_4071 =
						MAKE_VA_PROCEDURE
						(BGl_z62zc3z04anonymousza31583ze3ze5zz__evmeaningz00,
						(int) (((long) -4)), (int) (((long) 3)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31583ze3z87_4071,
						(int) (((long) 0)), BgL_bodyz00_1779);
					PROCEDURE_SET(BgL_zc3z04anonymousza31583ze3z87_4071,
						(int) (((long) 1)), BgL_stackz00_33);
					PROCEDURE_SET(BgL_zc3z04anonymousza31583ze3z87_4071,
						(int) (((long) 2)), BgL_denvz00_34);
					{	/* Eval/evmeaning.scm 939 */
						obj_t BgL_arg1760z00_3250;

						{	/* Eval/evmeaning.scm 927 */
							obj_t BgL_newz00_3251;

							BgL_newz00_3251 =
								create_struct(BGl_symbol2486z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5249;

								BgL_tmpz00_5249 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3251, BgL_tmpz00_5249, BgL_stackz00_33);
							}
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5252;

								BgL_tmpz00_5252 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3251, BgL_tmpz00_5252, BgL_bodyz00_1779);
							}
							{	/* Eval/evmeaning.scm 927 */
								obj_t BgL_auxz00_5257;
								int BgL_tmpz00_5255;

								BgL_auxz00_5257 = BINT(((long) -4));
								BgL_tmpz00_5255 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3251, BgL_tmpz00_5255, BgL_auxz00_5257);
							}
							BgL_arg1760z00_3250 = BgL_newz00_3251;
						}
						PROCEDURE_ATTR_SET(BgL_zc3z04anonymousza31583ze3z87_4071,
							BgL_arg1760z00_3250);
						BgL_arg1760z00_3250;
					}
					return BgL_zc3z04anonymousza31583ze3z87_4071;
				}
			}
		}

	}



/* &<@anonymous:1583> */
	obj_t BGl_z62zc3z04anonymousza31583ze3ze5zz__evmeaningz00(obj_t
		BgL_envz00_4072, obj_t BgL_xz00_4076, obj_t BgL_yz00_4077,
		obj_t BgL_za7za7_4078, obj_t BgL_tz00_4079)
	{
		{	/* Eval/evmeaning.scm 683 */
			{	/* Eval/evmeaning.scm 684 */
				obj_t BgL_bodyz00_4073;
				obj_t BgL_stackz00_4074;
				obj_t BgL_denvz00_4075;

				BgL_bodyz00_4073 = PROCEDURE_REF(BgL_envz00_4072, (int) (((long) 0)));
				BgL_stackz00_4074 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4072, (int) (((long) 1))));
				BgL_denvz00_4075 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4072, (int) (((long) 2))));
				{	/* Eval/evmeaning.scm 687 */
					obj_t BgL_arg1584z00_4279;

					{	/* Eval/evmeaning.scm 687 */
						obj_t BgL_arg1587z00_4280;

						{	/* Eval/evmeaning.scm 687 */
							obj_t BgL_arg1588z00_4281;

							{	/* Eval/evmeaning.scm 687 */
								obj_t BgL_arg1589z00_4282;

								BgL_arg1589z00_4282 =
									MAKE_YOUNG_PAIR(BgL_tz00_4079, BgL_stackz00_4074);
								BgL_arg1588z00_4281 =
									MAKE_YOUNG_PAIR(BgL_za7za7_4078, BgL_arg1589z00_4282);
							}
							BgL_arg1587z00_4280 =
								MAKE_YOUNG_PAIR(BgL_yz00_4077, BgL_arg1588z00_4281);
						}
						BgL_arg1584z00_4279 =
							MAKE_YOUNG_PAIR(BgL_xz00_4076, BgL_arg1587z00_4280);
					}
					return
						BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4073,
						BgL_arg1584z00_4279, BgL_denvz00_4075);
				}
			}
		}

	}



/* evmeaning-bounce-50 */
	obj_t BGl_evmeaningzd2bouncezd250z00zz__evmeaningz00(obj_t BgL_codez00_35,
		obj_t BgL_stackz00_36, obj_t BgL_denvz00_37)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 656 */
				obj_t BgL_bodyz00_1792;
				obj_t BgL_wherez00_1793;
				obj_t BgL_locz00_1794;

				BgL_bodyz00_1792 = VECTOR_REF(BgL_codez00_35, ((long) 2));
				BgL_wherez00_1793 = VECTOR_REF(BgL_codez00_35, ((long) 3));
				BgL_locz00_1794 = VECTOR_REF(BgL_codez00_35, ((long) 1));
				{	/* Eval/evmeaning.scm 661 */
					obj_t BgL_zc3z04anonymousza31593ze3z87_4080;

					BgL_zc3z04anonymousza31593ze3z87_4080 =
						MAKE_VA_PROCEDURE
						(BGl_z62zc3z04anonymousza31593ze3ze5zz__evmeaningz00,
						(int) (((long) -4)), (int) (((long) 4)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31593ze3z87_4080,
						(int) (((long) 0)), BgL_bodyz00_1792);
					PROCEDURE_SET(BgL_zc3z04anonymousza31593ze3z87_4080,
						(int) (((long) 1)), BgL_stackz00_36);
					PROCEDURE_SET(BgL_zc3z04anonymousza31593ze3z87_4080,
						(int) (((long) 2)), BgL_wherez00_1793);
					PROCEDURE_SET(BgL_zc3z04anonymousza31593ze3z87_4080,
						(int) (((long) 3)), BgL_locz00_1794);
					{	/* Eval/evmeaning.scm 939 */
						obj_t BgL_arg1760z00_3259;

						{	/* Eval/evmeaning.scm 927 */
							obj_t BgL_newz00_3260;

							BgL_newz00_3260 =
								create_struct(BGl_symbol2486z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5290;

								BgL_tmpz00_5290 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3260, BgL_tmpz00_5290, BgL_stackz00_36);
							}
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5293;

								BgL_tmpz00_5293 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3260, BgL_tmpz00_5293, BgL_bodyz00_1792);
							}
							{	/* Eval/evmeaning.scm 927 */
								obj_t BgL_auxz00_5298;
								int BgL_tmpz00_5296;

								BgL_auxz00_5298 = BINT(((long) -4));
								BgL_tmpz00_5296 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3260, BgL_tmpz00_5296, BgL_auxz00_5298);
							}
							BgL_arg1760z00_3259 = BgL_newz00_3260;
						}
						PROCEDURE_ATTR_SET(BgL_zc3z04anonymousza31593ze3z87_4080,
							BgL_arg1760z00_3259);
						BgL_arg1760z00_3259;
					}
					return BgL_zc3z04anonymousza31593ze3z87_4080;
				}
			}
		}

	}



/* &<@anonymous:1593> */
	obj_t BGl_z62zc3z04anonymousza31593ze3ze5zz__evmeaningz00(obj_t
		BgL_envz00_4081, obj_t BgL_xz00_4086, obj_t BgL_yz00_4087,
		obj_t BgL_za7za7_4088, obj_t BgL_tz00_4089)
	{
		{	/* Eval/evmeaning.scm 660 */
			{	/* Eval/evmeaning.scm 661 */
				obj_t BgL_bodyz00_4082;
				obj_t BgL_stackz00_4083;
				obj_t BgL_wherez00_4084;
				obj_t BgL_locz00_4085;

				BgL_bodyz00_4082 = PROCEDURE_REF(BgL_envz00_4081, (int) (((long) 0)));
				BgL_stackz00_4083 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4081, (int) (((long) 1))));
				BgL_wherez00_4084 = PROCEDURE_REF(BgL_envz00_4081, (int) (((long) 2)));
				BgL_locz00_4085 = PROCEDURE_REF(BgL_envz00_4081, (int) (((long) 3)));
				{	/* Eval/evmeaning.scm 661 */
					obj_t BgL_z12sz12_4283;
					obj_t BgL_z12denvz12_4284;

					BgL_z12sz12_4283 = BgL_stackz00_4083;
					BgL_z12denvz12_4284 = BGL_CURRENT_DYNAMIC_ENV();
					{	/* Eval/evmeaning.scm 664 */

						BGL_ENV_PUSH_TRACE(BgL_z12denvz12_4284, BgL_wherez00_4084,
							BgL_locz00_4085);
						{	/* Eval/evmeaning.scm 666 */
							obj_t BgL_resz00_4285;

							{	/* Eval/evmeaning.scm 671 */
								obj_t BgL_arg1596z00_4286;

								{	/* Eval/evmeaning.scm 671 */
									obj_t BgL_arg1597z00_4287;

									{	/* Eval/evmeaning.scm 671 */
										obj_t BgL_arg1598z00_4288;

										{	/* Eval/evmeaning.scm 671 */
											obj_t BgL_arg1599z00_4289;

											BgL_arg1599z00_4289 =
												MAKE_YOUNG_PAIR(BgL_tz00_4089, BgL_z12sz12_4283);
											BgL_arg1598z00_4288 =
												MAKE_YOUNG_PAIR(BgL_za7za7_4088, BgL_arg1599z00_4289);
										}
										BgL_arg1597z00_4287 =
											MAKE_YOUNG_PAIR(BgL_yz00_4087, BgL_arg1598z00_4288);
									}
									BgL_arg1596z00_4286 =
										MAKE_YOUNG_PAIR(BgL_xz00_4086, BgL_arg1597z00_4287);
								}
								BgL_resz00_4285 =
									BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4082,
									BgL_arg1596z00_4286, BgL_z12denvz12_4284);
							}
							BGL_ENV_POP_TRACE(BgL_z12denvz12_4284);
							return BgL_resz00_4285;
						}
					}
				}
			}
		}

	}



/* evmeaning-bounce-53 */
	obj_t BGl_evmeaningzd2bouncezd253z00zz__evmeaningz00(obj_t BgL_codez00_38,
		obj_t BgL_stackz00_39, obj_t BgL_denvz00_40)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 644 */
				obj_t BgL_bodyz00_1810;

				BgL_bodyz00_1810 = VECTOR_REF(BgL_codez00_38, ((long) 2));
				{	/* Eval/evmeaning.scm 647 */
					obj_t BgL_zc3z04anonymousza31603ze3z87_4090;

					BgL_zc3z04anonymousza31603ze3z87_4090 =
						MAKE_VA_PROCEDURE
						(BGl_z62zc3z04anonymousza31603ze3ze5zz__evmeaningz00,
						(int) (((long) -3)), (int) (((long) 3)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31603ze3z87_4090,
						(int) (((long) 0)), BgL_bodyz00_1810);
					PROCEDURE_SET(BgL_zc3z04anonymousza31603ze3z87_4090,
						(int) (((long) 1)), BgL_stackz00_39);
					PROCEDURE_SET(BgL_zc3z04anonymousza31603ze3z87_4090,
						(int) (((long) 2)), BgL_denvz00_40);
					{	/* Eval/evmeaning.scm 939 */
						obj_t BgL_arg1760z00_3265;

						{	/* Eval/evmeaning.scm 927 */
							obj_t BgL_newz00_3266;

							BgL_newz00_3266 =
								create_struct(BGl_symbol2486z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5331;

								BgL_tmpz00_5331 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3266, BgL_tmpz00_5331, BgL_stackz00_39);
							}
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5334;

								BgL_tmpz00_5334 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3266, BgL_tmpz00_5334, BgL_bodyz00_1810);
							}
							{	/* Eval/evmeaning.scm 927 */
								obj_t BgL_auxz00_5339;
								int BgL_tmpz00_5337;

								BgL_auxz00_5339 = BINT(((long) -3));
								BgL_tmpz00_5337 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3266, BgL_tmpz00_5337, BgL_auxz00_5339);
							}
							BgL_arg1760z00_3265 = BgL_newz00_3266;
						}
						PROCEDURE_ATTR_SET(BgL_zc3z04anonymousza31603ze3z87_4090,
							BgL_arg1760z00_3265);
						BgL_arg1760z00_3265;
					}
					return BgL_zc3z04anonymousza31603ze3z87_4090;
				}
			}
		}

	}



/* &<@anonymous:1603> */
	obj_t BGl_z62zc3z04anonymousza31603ze3ze5zz__evmeaningz00(obj_t
		BgL_envz00_4091, obj_t BgL_xz00_4095, obj_t BgL_yz00_4096,
		obj_t BgL_za7za7_4097)
	{
		{	/* Eval/evmeaning.scm 646 */
			{	/* Eval/evmeaning.scm 647 */
				obj_t BgL_bodyz00_4092;
				obj_t BgL_stackz00_4093;
				obj_t BgL_denvz00_4094;

				BgL_bodyz00_4092 = PROCEDURE_REF(BgL_envz00_4091, (int) (((long) 0)));
				BgL_stackz00_4093 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4091, (int) (((long) 1))));
				BgL_denvz00_4094 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4091, (int) (((long) 2))));
				{	/* Eval/evmeaning.scm 649 */
					obj_t BgL_arg1604z00_4290;

					{	/* Eval/evmeaning.scm 649 */
						obj_t BgL_arg1605z00_4291;

						{	/* Eval/evmeaning.scm 649 */
							obj_t BgL_arg1606z00_4292;

							BgL_arg1606z00_4292 =
								MAKE_YOUNG_PAIR(BgL_za7za7_4097, BgL_stackz00_4093);
							BgL_arg1605z00_4291 =
								MAKE_YOUNG_PAIR(BgL_yz00_4096, BgL_arg1606z00_4292);
						}
						BgL_arg1604z00_4290 =
							MAKE_YOUNG_PAIR(BgL_xz00_4095, BgL_arg1605z00_4291);
					}
					return
						BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4092,
						BgL_arg1604z00_4290, BgL_denvz00_4094);
				}
			}
		}

	}



/* evmeaning-bounce-49 */
	obj_t BGl_evmeaningzd2bouncezd249z00zz__evmeaningz00(obj_t BgL_codez00_41,
		obj_t BgL_stackz00_42, obj_t BgL_denvz00_43)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 622 */
				obj_t BgL_bodyz00_1821;
				obj_t BgL_wherez00_1822;
				obj_t BgL_locz00_1823;

				BgL_bodyz00_1821 = VECTOR_REF(BgL_codez00_41, ((long) 2));
				BgL_wherez00_1822 = VECTOR_REF(BgL_codez00_41, ((long) 3));
				BgL_locz00_1823 = VECTOR_REF(BgL_codez00_41, ((long) 1));
				{	/* Eval/evmeaning.scm 627 */
					obj_t BgL_zc3z04anonymousza31608ze3z87_4098;

					BgL_zc3z04anonymousza31608ze3z87_4098 =
						MAKE_VA_PROCEDURE
						(BGl_z62zc3z04anonymousza31608ze3ze5zz__evmeaningz00,
						(int) (((long) -3)), (int) (((long) 4)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31608ze3z87_4098,
						(int) (((long) 0)), BgL_bodyz00_1821);
					PROCEDURE_SET(BgL_zc3z04anonymousza31608ze3z87_4098,
						(int) (((long) 1)), BgL_stackz00_42);
					PROCEDURE_SET(BgL_zc3z04anonymousza31608ze3z87_4098,
						(int) (((long) 2)), BgL_wherez00_1822);
					PROCEDURE_SET(BgL_zc3z04anonymousza31608ze3z87_4098,
						(int) (((long) 3)), BgL_locz00_1823);
					{	/* Eval/evmeaning.scm 939 */
						obj_t BgL_arg1760z00_3274;

						{	/* Eval/evmeaning.scm 927 */
							obj_t BgL_newz00_3275;

							BgL_newz00_3275 =
								create_struct(BGl_symbol2486z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5371;

								BgL_tmpz00_5371 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3275, BgL_tmpz00_5371, BgL_stackz00_42);
							}
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5374;

								BgL_tmpz00_5374 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3275, BgL_tmpz00_5374, BgL_bodyz00_1821);
							}
							{	/* Eval/evmeaning.scm 927 */
								obj_t BgL_auxz00_5379;
								int BgL_tmpz00_5377;

								BgL_auxz00_5379 = BINT(((long) -3));
								BgL_tmpz00_5377 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3275, BgL_tmpz00_5377, BgL_auxz00_5379);
							}
							BgL_arg1760z00_3274 = BgL_newz00_3275;
						}
						PROCEDURE_ATTR_SET(BgL_zc3z04anonymousza31608ze3z87_4098,
							BgL_arg1760z00_3274);
						BgL_arg1760z00_3274;
					}
					return BgL_zc3z04anonymousza31608ze3z87_4098;
				}
			}
		}

	}



/* &<@anonymous:1608> */
	obj_t BGl_z62zc3z04anonymousza31608ze3ze5zz__evmeaningz00(obj_t
		BgL_envz00_4099, obj_t BgL_xz00_4104, obj_t BgL_yz00_4105,
		obj_t BgL_za7za7_4106)
	{
		{	/* Eval/evmeaning.scm 626 */
			{	/* Eval/evmeaning.scm 627 */
				obj_t BgL_bodyz00_4100;
				obj_t BgL_stackz00_4101;
				obj_t BgL_wherez00_4102;
				obj_t BgL_locz00_4103;

				BgL_bodyz00_4100 = PROCEDURE_REF(BgL_envz00_4099, (int) (((long) 0)));
				BgL_stackz00_4101 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4099, (int) (((long) 1))));
				BgL_wherez00_4102 = PROCEDURE_REF(BgL_envz00_4099, (int) (((long) 2)));
				BgL_locz00_4103 = PROCEDURE_REF(BgL_envz00_4099, (int) (((long) 3)));
				{	/* Eval/evmeaning.scm 627 */
					obj_t BgL_z12sz12_4293;
					obj_t BgL_z12denvz12_4294;

					BgL_z12sz12_4293 = BgL_stackz00_4101;
					BgL_z12denvz12_4294 = BGL_CURRENT_DYNAMIC_ENV();
					{	/* Eval/evmeaning.scm 630 */

						BGL_ENV_PUSH_TRACE(BgL_z12denvz12_4294, BgL_wherez00_4102,
							BgL_locz00_4103);
						{	/* Eval/evmeaning.scm 632 */
							obj_t BgL_resz00_4295;

							{	/* Eval/evmeaning.scm 635 */
								obj_t BgL_arg1611z00_4296;

								{	/* Eval/evmeaning.scm 635 */
									obj_t BgL_arg1612z00_4297;

									{	/* Eval/evmeaning.scm 635 */
										obj_t BgL_arg1613z00_4298;

										BgL_arg1613z00_4298 =
											MAKE_YOUNG_PAIR(BgL_za7za7_4106, BgL_z12sz12_4293);
										BgL_arg1612z00_4297 =
											MAKE_YOUNG_PAIR(BgL_yz00_4105, BgL_arg1613z00_4298);
									}
									BgL_arg1611z00_4296 =
										MAKE_YOUNG_PAIR(BgL_xz00_4104, BgL_arg1612z00_4297);
								}
								BgL_resz00_4295 =
									BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4100,
									BgL_arg1611z00_4296, BgL_z12denvz12_4294);
							}
							BGL_ENV_POP_TRACE(BgL_z12denvz12_4294);
							return BgL_resz00_4295;
						}
					}
				}
			}
		}

	}



/* evmeaning-bounce-52 */
	obj_t BGl_evmeaningzd2bouncezd252z00zz__evmeaningz00(obj_t BgL_codez00_44,
		obj_t BgL_stackz00_45, obj_t BgL_denvz00_46)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 612 */
				obj_t BgL_bodyz00_1837;

				BgL_bodyz00_1837 = VECTOR_REF(BgL_codez00_44, ((long) 2));
				{	/* Eval/evmeaning.scm 615 */
					obj_t BgL_zc3z04anonymousza31615ze3z87_4107;

					BgL_zc3z04anonymousza31615ze3z87_4107 =
						MAKE_VA_PROCEDURE
						(BGl_z62zc3z04anonymousza31615ze3ze5zz__evmeaningz00,
						(int) (((long) -2)), (int) (((long) 3)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31615ze3z87_4107,
						(int) (((long) 0)), BgL_bodyz00_1837);
					PROCEDURE_SET(BgL_zc3z04anonymousza31615ze3z87_4107,
						(int) (((long) 1)), BgL_stackz00_45);
					PROCEDURE_SET(BgL_zc3z04anonymousza31615ze3z87_4107,
						(int) (((long) 2)), BgL_denvz00_46);
					{	/* Eval/evmeaning.scm 939 */
						obj_t BgL_arg1760z00_3280;

						{	/* Eval/evmeaning.scm 927 */
							obj_t BgL_newz00_3281;

							BgL_newz00_3281 =
								create_struct(BGl_symbol2486z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5411;

								BgL_tmpz00_5411 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3281, BgL_tmpz00_5411, BgL_stackz00_45);
							}
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5414;

								BgL_tmpz00_5414 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3281, BgL_tmpz00_5414, BgL_bodyz00_1837);
							}
							{	/* Eval/evmeaning.scm 927 */
								obj_t BgL_auxz00_5419;
								int BgL_tmpz00_5417;

								BgL_auxz00_5419 = BINT(((long) -2));
								BgL_tmpz00_5417 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3281, BgL_tmpz00_5417, BgL_auxz00_5419);
							}
							BgL_arg1760z00_3280 = BgL_newz00_3281;
						}
						PROCEDURE_ATTR_SET(BgL_zc3z04anonymousza31615ze3z87_4107,
							BgL_arg1760z00_3280);
						BgL_arg1760z00_3280;
					}
					return BgL_zc3z04anonymousza31615ze3z87_4107;
				}
			}
		}

	}



/* &<@anonymous:1615> */
	obj_t BGl_z62zc3z04anonymousza31615ze3ze5zz__evmeaningz00(obj_t
		BgL_envz00_4108, obj_t BgL_xz00_4112, obj_t BgL_yz00_4113)
	{
		{	/* Eval/evmeaning.scm 614 */
			{	/* Eval/evmeaning.scm 615 */
				obj_t BgL_bodyz00_4109;
				obj_t BgL_stackz00_4110;
				obj_t BgL_denvz00_4111;

				BgL_bodyz00_4109 = PROCEDURE_REF(BgL_envz00_4108, (int) (((long) 0)));
				BgL_stackz00_4110 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4108, (int) (((long) 1))));
				BgL_denvz00_4111 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4108, (int) (((long) 2))));
				{	/* Eval/evmeaning.scm 616 */
					obj_t BgL_arg1616z00_4299;

					{	/* Eval/evmeaning.scm 616 */
						obj_t BgL_arg1617z00_4300;

						BgL_arg1617z00_4300 =
							MAKE_YOUNG_PAIR(BgL_yz00_4113, BgL_stackz00_4110);
						BgL_arg1616z00_4299 =
							MAKE_YOUNG_PAIR(BgL_xz00_4112, BgL_arg1617z00_4300);
					}
					return
						BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4109,
						BgL_arg1616z00_4299, BgL_denvz00_4111);
				}
			}
		}

	}



/* evmeaning-bounce-48 */
	obj_t BGl_evmeaningzd2bouncezd248z00zz__evmeaningz00(obj_t BgL_codez00_47,
		obj_t BgL_stackz00_48, obj_t BgL_denvz00_49)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 594 */
				obj_t BgL_bodyz00_1846;
				obj_t BgL_wherez00_1847;
				obj_t BgL_locz00_1848;

				BgL_bodyz00_1846 = VECTOR_REF(BgL_codez00_47, ((long) 2));
				BgL_wherez00_1847 = VECTOR_REF(BgL_codez00_47, ((long) 3));
				BgL_locz00_1848 = VECTOR_REF(BgL_codez00_47, ((long) 1));
				{	/* Eval/evmeaning.scm 599 */
					obj_t BgL_zc3z04anonymousza31619ze3z87_4114;

					BgL_zc3z04anonymousza31619ze3z87_4114 =
						MAKE_VA_PROCEDURE
						(BGl_z62zc3z04anonymousza31619ze3ze5zz__evmeaningz00,
						(int) (((long) -2)), (int) (((long) 4)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31619ze3z87_4114,
						(int) (((long) 0)), BgL_bodyz00_1846);
					PROCEDURE_SET(BgL_zc3z04anonymousza31619ze3z87_4114,
						(int) (((long) 1)), BgL_stackz00_48);
					PROCEDURE_SET(BgL_zc3z04anonymousza31619ze3z87_4114,
						(int) (((long) 2)), BgL_wherez00_1847);
					PROCEDURE_SET(BgL_zc3z04anonymousza31619ze3z87_4114,
						(int) (((long) 3)), BgL_locz00_1848);
					{	/* Eval/evmeaning.scm 939 */
						obj_t BgL_arg1760z00_3289;

						{	/* Eval/evmeaning.scm 927 */
							obj_t BgL_newz00_3290;

							BgL_newz00_3290 =
								create_struct(BGl_symbol2486z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5450;

								BgL_tmpz00_5450 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3290, BgL_tmpz00_5450, BgL_stackz00_48);
							}
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5453;

								BgL_tmpz00_5453 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3290, BgL_tmpz00_5453, BgL_bodyz00_1846);
							}
							{	/* Eval/evmeaning.scm 927 */
								obj_t BgL_auxz00_5458;
								int BgL_tmpz00_5456;

								BgL_auxz00_5458 = BINT(((long) -2));
								BgL_tmpz00_5456 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3290, BgL_tmpz00_5456, BgL_auxz00_5458);
							}
							BgL_arg1760z00_3289 = BgL_newz00_3290;
						}
						PROCEDURE_ATTR_SET(BgL_zc3z04anonymousza31619ze3z87_4114,
							BgL_arg1760z00_3289);
						BgL_arg1760z00_3289;
					}
					return BgL_zc3z04anonymousza31619ze3z87_4114;
				}
			}
		}

	}



/* &<@anonymous:1619> */
	obj_t BGl_z62zc3z04anonymousza31619ze3ze5zz__evmeaningz00(obj_t
		BgL_envz00_4115, obj_t BgL_xz00_4120, obj_t BgL_yz00_4121)
	{
		{	/* Eval/evmeaning.scm 598 */
			{	/* Eval/evmeaning.scm 599 */
				obj_t BgL_bodyz00_4116;
				obj_t BgL_stackz00_4117;
				obj_t BgL_wherez00_4118;
				obj_t BgL_locz00_4119;

				BgL_bodyz00_4116 = PROCEDURE_REF(BgL_envz00_4115, (int) (((long) 0)));
				BgL_stackz00_4117 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4115, (int) (((long) 1))));
				BgL_wherez00_4118 = PROCEDURE_REF(BgL_envz00_4115, (int) (((long) 2)));
				BgL_locz00_4119 = PROCEDURE_REF(BgL_envz00_4115, (int) (((long) 3)));
				{	/* Eval/evmeaning.scm 599 */
					obj_t BgL_z12sz12_4301;
					obj_t BgL_z12denvz12_4302;

					BgL_z12sz12_4301 = BgL_stackz00_4117;
					BgL_z12denvz12_4302 = BGL_CURRENT_DYNAMIC_ENV();
					{	/* Eval/evmeaning.scm 602 */

						BGL_ENV_PUSH_TRACE(BgL_z12denvz12_4302, BgL_wherez00_4118,
							BgL_locz00_4119);
						{	/* Eval/evmeaning.scm 604 */
							obj_t BgL_rz00_4303;

							{	/* Eval/evmeaning.scm 604 */
								obj_t BgL_arg1620z00_4304;

								{	/* Eval/evmeaning.scm 604 */
									obj_t BgL_arg1621z00_4305;

									BgL_arg1621z00_4305 =
										MAKE_YOUNG_PAIR(BgL_yz00_4121, BgL_z12sz12_4301);
									BgL_arg1620z00_4304 =
										MAKE_YOUNG_PAIR(BgL_xz00_4120, BgL_arg1621z00_4305);
								}
								BgL_rz00_4303 =
									BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4116,
									BgL_arg1620z00_4304, BgL_z12denvz12_4302);
							}
							BGL_ENV_POP_TRACE(BgL_z12denvz12_4302);
							return BgL_rz00_4303;
						}
					}
				}
			}
		}

	}



/* evmeaning-bounce-51 */
	obj_t BGl_evmeaningzd2bouncezd251z00zz__evmeaningz00(obj_t BgL_codez00_50,
		obj_t BgL_stackz00_51, obj_t BgL_denvz00_52)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 584 */
				obj_t BgL_bodyz00_1860;

				BgL_bodyz00_1860 = VECTOR_REF(BgL_codez00_50, ((long) 2));
				{	/* Eval/evmeaning.scm 587 */
					obj_t BgL_zc3z04anonymousza31624ze3z87_4122;

					BgL_zc3z04anonymousza31624ze3z87_4122 =
						MAKE_VA_PROCEDURE
						(BGl_z62zc3z04anonymousza31624ze3ze5zz__evmeaningz00,
						(int) (((long) -1)), (int) (((long) 3)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31624ze3z87_4122,
						(int) (((long) 0)), BgL_bodyz00_1860);
					PROCEDURE_SET(BgL_zc3z04anonymousza31624ze3z87_4122,
						(int) (((long) 1)), BgL_stackz00_51);
					PROCEDURE_SET(BgL_zc3z04anonymousza31624ze3z87_4122,
						(int) (((long) 2)), BgL_denvz00_52);
					{	/* Eval/evmeaning.scm 939 */
						obj_t BgL_arg1760z00_3295;

						{	/* Eval/evmeaning.scm 927 */
							obj_t BgL_newz00_3296;

							BgL_newz00_3296 =
								create_struct(BGl_symbol2486z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5489;

								BgL_tmpz00_5489 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3296, BgL_tmpz00_5489, BgL_stackz00_51);
							}
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5492;

								BgL_tmpz00_5492 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3296, BgL_tmpz00_5492, BgL_bodyz00_1860);
							}
							{	/* Eval/evmeaning.scm 927 */
								obj_t BgL_auxz00_5497;
								int BgL_tmpz00_5495;

								BgL_auxz00_5497 = BINT(((long) -1));
								BgL_tmpz00_5495 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3296, BgL_tmpz00_5495, BgL_auxz00_5497);
							}
							BgL_arg1760z00_3295 = BgL_newz00_3296;
						}
						PROCEDURE_ATTR_SET(BgL_zc3z04anonymousza31624ze3z87_4122,
							BgL_arg1760z00_3295);
						BgL_arg1760z00_3295;
					}
					return BgL_zc3z04anonymousza31624ze3z87_4122;
				}
			}
		}

	}



/* &<@anonymous:1624> */
	obj_t BGl_z62zc3z04anonymousza31624ze3ze5zz__evmeaningz00(obj_t
		BgL_envz00_4123, obj_t BgL_xz00_4127)
	{
		{	/* Eval/evmeaning.scm 586 */
			{	/* Eval/evmeaning.scm 587 */
				obj_t BgL_bodyz00_4124;
				obj_t BgL_stackz00_4125;
				obj_t BgL_denvz00_4126;

				BgL_bodyz00_4124 = PROCEDURE_REF(BgL_envz00_4123, (int) (((long) 0)));
				BgL_stackz00_4125 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4123, (int) (((long) 1))));
				BgL_denvz00_4126 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4123, (int) (((long) 2))));
				{	/* Eval/evmeaning.scm 588 */
					obj_t BgL_arg1626z00_4306;

					BgL_arg1626z00_4306 =
						MAKE_YOUNG_PAIR(BgL_xz00_4127, BgL_stackz00_4125);
					return
						BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4124,
						BgL_arg1626z00_4306, BgL_denvz00_4126);
				}
			}
		}

	}



/* evmeaning-bounce-47 */
	obj_t BGl_evmeaningzd2bouncezd247z00zz__evmeaningz00(obj_t BgL_codez00_53,
		obj_t BgL_stackz00_54, obj_t BgL_denvz00_55)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 566 */
				obj_t BgL_bodyz00_1867;
				obj_t BgL_wherez00_1868;
				obj_t BgL_locz00_1869;

				BgL_bodyz00_1867 = VECTOR_REF(BgL_codez00_53, ((long) 2));
				BgL_wherez00_1868 = VECTOR_REF(BgL_codez00_53, ((long) 3));
				BgL_locz00_1869 = VECTOR_REF(BgL_codez00_53, ((long) 1));
				{	/* Eval/evmeaning.scm 571 */
					obj_t BgL_zc3z04anonymousza31628ze3z87_4128;

					BgL_zc3z04anonymousza31628ze3z87_4128 =
						MAKE_VA_PROCEDURE
						(BGl_z62zc3z04anonymousza31628ze3ze5zz__evmeaningz00,
						(int) (((long) -1)), (int) (((long) 4)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31628ze3z87_4128,
						(int) (((long) 0)), BgL_bodyz00_1867);
					PROCEDURE_SET(BgL_zc3z04anonymousza31628ze3z87_4128,
						(int) (((long) 1)), BgL_stackz00_54);
					PROCEDURE_SET(BgL_zc3z04anonymousza31628ze3z87_4128,
						(int) (((long) 2)), BgL_wherez00_1868);
					PROCEDURE_SET(BgL_zc3z04anonymousza31628ze3z87_4128,
						(int) (((long) 3)), BgL_locz00_1869);
					{	/* Eval/evmeaning.scm 939 */
						obj_t BgL_arg1760z00_3304;

						{	/* Eval/evmeaning.scm 927 */
							obj_t BgL_newz00_3305;

							BgL_newz00_3305 =
								create_struct(BGl_symbol2486z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5527;

								BgL_tmpz00_5527 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3305, BgL_tmpz00_5527, BgL_stackz00_54);
							}
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5530;

								BgL_tmpz00_5530 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3305, BgL_tmpz00_5530, BgL_bodyz00_1867);
							}
							{	/* Eval/evmeaning.scm 927 */
								obj_t BgL_auxz00_5535;
								int BgL_tmpz00_5533;

								BgL_auxz00_5535 = BINT(((long) -1));
								BgL_tmpz00_5533 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3305, BgL_tmpz00_5533, BgL_auxz00_5535);
							}
							BgL_arg1760z00_3304 = BgL_newz00_3305;
						}
						PROCEDURE_ATTR_SET(BgL_zc3z04anonymousza31628ze3z87_4128,
							BgL_arg1760z00_3304);
						BgL_arg1760z00_3304;
					}
					return BgL_zc3z04anonymousza31628ze3z87_4128;
				}
			}
		}

	}



/* &<@anonymous:1628> */
	obj_t BGl_z62zc3z04anonymousza31628ze3ze5zz__evmeaningz00(obj_t
		BgL_envz00_4129, obj_t BgL_xz00_4134)
	{
		{	/* Eval/evmeaning.scm 570 */
			{	/* Eval/evmeaning.scm 571 */
				obj_t BgL_bodyz00_4130;
				obj_t BgL_stackz00_4131;
				obj_t BgL_wherez00_4132;
				obj_t BgL_locz00_4133;

				BgL_bodyz00_4130 = PROCEDURE_REF(BgL_envz00_4129, (int) (((long) 0)));
				BgL_stackz00_4131 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4129, (int) (((long) 1))));
				BgL_wherez00_4132 = PROCEDURE_REF(BgL_envz00_4129, (int) (((long) 2)));
				BgL_locz00_4133 = PROCEDURE_REF(BgL_envz00_4129, (int) (((long) 3)));
				{	/* Eval/evmeaning.scm 571 */
					obj_t BgL_z12sz12_4307;
					obj_t BgL_z12denvz12_4308;

					BgL_z12sz12_4307 = BgL_stackz00_4131;
					BgL_z12denvz12_4308 = BGL_CURRENT_DYNAMIC_ENV();
					{	/* Eval/evmeaning.scm 574 */

						BGL_ENV_PUSH_TRACE(BgL_z12denvz12_4308, BgL_wherez00_4132,
							BgL_locz00_4133);
						{	/* Eval/evmeaning.scm 576 */
							obj_t BgL_resz00_4309;

							{	/* Eval/evmeaning.scm 576 */
								obj_t BgL_arg1629z00_4310;

								BgL_arg1629z00_4310 =
									MAKE_YOUNG_PAIR(BgL_xz00_4134, BgL_z12sz12_4307);
								BgL_resz00_4309 =
									BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4130,
									BgL_arg1629z00_4310, BgL_z12denvz12_4308);
							}
							BGL_ENV_POP_TRACE(BgL_z12denvz12_4308);
							return BgL_resz00_4309;
						}
					}
				}
			}
		}

	}



/* evmeaning-bounce-46 */
	obj_t BGl_evmeaningzd2bouncezd246z00zz__evmeaningz00(obj_t BgL_codez00_56,
		obj_t BgL_stackz00_57, obj_t BgL_denvz00_58)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 554 */
				obj_t BgL_bodyz00_1879;

				BgL_bodyz00_1879 = VECTOR_REF(BgL_codez00_56, ((long) 2));
				{	/* Eval/evmeaning.scm 557 */
					obj_t BgL_zc3z04anonymousza31631ze3z87_4135;

					BgL_zc3z04anonymousza31631ze3z87_4135 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31631ze3ze5zz__evmeaningz00,
						(int) (((long) 4)), (int) (((long) 3)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31631ze3z87_4135,
						(int) (((long) 0)), BgL_bodyz00_1879);
					PROCEDURE_SET(BgL_zc3z04anonymousza31631ze3z87_4135,
						(int) (((long) 1)), BgL_stackz00_57);
					PROCEDURE_SET(BgL_zc3z04anonymousza31631ze3z87_4135,
						(int) (((long) 2)), BgL_denvz00_58);
					{	/* Eval/evmeaning.scm 939 */
						obj_t BgL_arg1760z00_3310;

						{	/* Eval/evmeaning.scm 927 */
							obj_t BgL_newz00_3311;

							BgL_newz00_3311 =
								create_struct(BGl_symbol2486z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5565;

								BgL_tmpz00_5565 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3311, BgL_tmpz00_5565, BgL_stackz00_57);
							}
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5568;

								BgL_tmpz00_5568 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3311, BgL_tmpz00_5568, BgL_bodyz00_1879);
							}
							{	/* Eval/evmeaning.scm 927 */
								obj_t BgL_auxz00_5573;
								int BgL_tmpz00_5571;

								BgL_auxz00_5573 = BINT(((long) 4));
								BgL_tmpz00_5571 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3311, BgL_tmpz00_5571, BgL_auxz00_5573);
							}
							BgL_arg1760z00_3310 = BgL_newz00_3311;
						}
						PROCEDURE_ATTR_SET(BgL_zc3z04anonymousza31631ze3z87_4135,
							BgL_arg1760z00_3310);
						BgL_arg1760z00_3310;
					}
					return BgL_zc3z04anonymousza31631ze3z87_4135;
				}
			}
		}

	}



/* &<@anonymous:1631> */
	obj_t BGl_z62zc3z04anonymousza31631ze3ze5zz__evmeaningz00(obj_t
		BgL_envz00_4136, obj_t BgL_xz00_4140, obj_t BgL_yz00_4141,
		obj_t BgL_za7za7_4142, obj_t BgL_tz00_4143)
	{
		{	/* Eval/evmeaning.scm 556 */
			{	/* Eval/evmeaning.scm 557 */
				obj_t BgL_bodyz00_4137;
				obj_t BgL_stackz00_4138;
				obj_t BgL_denvz00_4139;

				BgL_bodyz00_4137 = PROCEDURE_REF(BgL_envz00_4136, (int) (((long) 0)));
				BgL_stackz00_4138 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4136, (int) (((long) 1))));
				BgL_denvz00_4139 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4136, (int) (((long) 2))));
				{	/* Eval/evmeaning.scm 559 */
					obj_t BgL_arg1632z00_4311;

					{	/* Eval/evmeaning.scm 559 */
						obj_t BgL_arg1633z00_4312;

						{	/* Eval/evmeaning.scm 559 */
							obj_t BgL_arg1634z00_4313;

							{	/* Eval/evmeaning.scm 559 */
								obj_t BgL_arg1635z00_4314;

								BgL_arg1635z00_4314 =
									MAKE_YOUNG_PAIR(BgL_tz00_4143, BgL_stackz00_4138);
								BgL_arg1634z00_4313 =
									MAKE_YOUNG_PAIR(BgL_za7za7_4142, BgL_arg1635z00_4314);
							}
							BgL_arg1633z00_4312 =
								MAKE_YOUNG_PAIR(BgL_yz00_4141, BgL_arg1634z00_4313);
						}
						BgL_arg1632z00_4311 =
							MAKE_YOUNG_PAIR(BgL_xz00_4140, BgL_arg1633z00_4312);
					}
					return
						BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4137,
						BgL_arg1632z00_4311, BgL_denvz00_4139);
				}
			}
		}

	}



/* evmeaning-bounce-41 */
	obj_t BGl_evmeaningzd2bouncezd241z00zz__evmeaningz00(obj_t BgL_codez00_59,
		obj_t BgL_stackz00_60, obj_t BgL_denvz00_61)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 530 */
				obj_t BgL_bodyz00_1892;
				obj_t BgL_wherez00_1893;
				obj_t BgL_locz00_1894;

				BgL_bodyz00_1892 = VECTOR_REF(BgL_codez00_59, ((long) 2));
				BgL_wherez00_1893 = VECTOR_REF(BgL_codez00_59, ((long) 3));
				BgL_locz00_1894 = VECTOR_REF(BgL_codez00_59, ((long) 1));
				{	/* Eval/evmeaning.scm 535 */
					obj_t BgL_zc3z04anonymousza31638ze3z87_4144;

					BgL_zc3z04anonymousza31638ze3z87_4144 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31638ze3ze5zz__evmeaningz00,
						(int) (((long) 4)), (int) (((long) 4)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31638ze3z87_4144,
						(int) (((long) 0)), BgL_bodyz00_1892);
					PROCEDURE_SET(BgL_zc3z04anonymousza31638ze3z87_4144,
						(int) (((long) 1)), BgL_stackz00_60);
					PROCEDURE_SET(BgL_zc3z04anonymousza31638ze3z87_4144,
						(int) (((long) 2)), BgL_wherez00_1893);
					PROCEDURE_SET(BgL_zc3z04anonymousza31638ze3z87_4144,
						(int) (((long) 3)), BgL_locz00_1894);
					{	/* Eval/evmeaning.scm 939 */
						obj_t BgL_arg1760z00_3319;

						{	/* Eval/evmeaning.scm 927 */
							obj_t BgL_newz00_3320;

							BgL_newz00_3320 =
								create_struct(BGl_symbol2486z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5606;

								BgL_tmpz00_5606 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3320, BgL_tmpz00_5606, BgL_stackz00_60);
							}
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5609;

								BgL_tmpz00_5609 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3320, BgL_tmpz00_5609, BgL_bodyz00_1892);
							}
							{	/* Eval/evmeaning.scm 927 */
								obj_t BgL_auxz00_5614;
								int BgL_tmpz00_5612;

								BgL_auxz00_5614 = BINT(((long) 4));
								BgL_tmpz00_5612 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3320, BgL_tmpz00_5612, BgL_auxz00_5614);
							}
							BgL_arg1760z00_3319 = BgL_newz00_3320;
						}
						PROCEDURE_ATTR_SET(BgL_zc3z04anonymousza31638ze3z87_4144,
							BgL_arg1760z00_3319);
						BgL_arg1760z00_3319;
					}
					return BgL_zc3z04anonymousza31638ze3z87_4144;
				}
			}
		}

	}



/* &<@anonymous:1638> */
	obj_t BGl_z62zc3z04anonymousza31638ze3ze5zz__evmeaningz00(obj_t
		BgL_envz00_4145, obj_t BgL_xz00_4150, obj_t BgL_yz00_4151,
		obj_t BgL_za7za7_4152, obj_t BgL_tz00_4153)
	{
		{	/* Eval/evmeaning.scm 534 */
			{	/* Eval/evmeaning.scm 535 */
				obj_t BgL_bodyz00_4146;
				obj_t BgL_stackz00_4147;
				obj_t BgL_wherez00_4148;
				obj_t BgL_locz00_4149;

				BgL_bodyz00_4146 = PROCEDURE_REF(BgL_envz00_4145, (int) (((long) 0)));
				BgL_stackz00_4147 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4145, (int) (((long) 1))));
				BgL_wherez00_4148 = PROCEDURE_REF(BgL_envz00_4145, (int) (((long) 2)));
				BgL_locz00_4149 = PROCEDURE_REF(BgL_envz00_4145, (int) (((long) 3)));
				{	/* Eval/evmeaning.scm 535 */
					obj_t BgL_z12sz12_4315;
					obj_t BgL_z12denvz12_4316;

					BgL_z12sz12_4315 = BgL_stackz00_4147;
					BgL_z12denvz12_4316 = BGL_CURRENT_DYNAMIC_ENV();
					{	/* Eval/evmeaning.scm 538 */

						BGL_ENV_PUSH_TRACE(BgL_z12denvz12_4316, BgL_wherez00_4148,
							BgL_locz00_4149);
						{	/* Eval/evmeaning.scm 540 */
							obj_t BgL_resz00_4317;

							{	/* Eval/evmeaning.scm 545 */
								obj_t BgL_arg1639z00_4318;

								{	/* Eval/evmeaning.scm 545 */
									obj_t BgL_arg1640z00_4319;

									{	/* Eval/evmeaning.scm 545 */
										obj_t BgL_arg1641z00_4320;

										{	/* Eval/evmeaning.scm 545 */
											obj_t BgL_arg1642z00_4321;

											BgL_arg1642z00_4321 =
												MAKE_YOUNG_PAIR(BgL_tz00_4153, BgL_z12sz12_4315);
											BgL_arg1641z00_4320 =
												MAKE_YOUNG_PAIR(BgL_za7za7_4152, BgL_arg1642z00_4321);
										}
										BgL_arg1640z00_4319 =
											MAKE_YOUNG_PAIR(BgL_yz00_4151, BgL_arg1641z00_4320);
									}
									BgL_arg1639z00_4318 =
										MAKE_YOUNG_PAIR(BgL_xz00_4150, BgL_arg1640z00_4319);
								}
								BgL_resz00_4317 =
									BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4146,
									BgL_arg1639z00_4318, BgL_z12denvz12_4316);
							}
							BGL_ENV_POP_TRACE(BgL_z12denvz12_4316);
							return BgL_resz00_4317;
						}
					}
				}
			}
		}

	}



/* evmeaning-bounce-45 */
	obj_t BGl_evmeaningzd2bouncezd245z00zz__evmeaningz00(obj_t BgL_codez00_62,
		obj_t BgL_stackz00_63, obj_t BgL_denvz00_64)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 520 */
				obj_t BgL_bodyz00_1910;

				BgL_bodyz00_1910 = VECTOR_REF(BgL_codez00_62, ((long) 2));
				{	/* Eval/evmeaning.scm 523 */
					obj_t BgL_zc3z04anonymousza31644ze3z87_4154;

					BgL_zc3z04anonymousza31644ze3z87_4154 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31644ze3ze5zz__evmeaningz00,
						(int) (((long) 3)), (int) (((long) 3)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31644ze3z87_4154,
						(int) (((long) 0)), BgL_bodyz00_1910);
					PROCEDURE_SET(BgL_zc3z04anonymousza31644ze3z87_4154,
						(int) (((long) 1)), BgL_stackz00_63);
					PROCEDURE_SET(BgL_zc3z04anonymousza31644ze3z87_4154,
						(int) (((long) 2)), BgL_denvz00_64);
					{	/* Eval/evmeaning.scm 939 */
						obj_t BgL_arg1760z00_3325;

						{	/* Eval/evmeaning.scm 927 */
							obj_t BgL_newz00_3326;

							BgL_newz00_3326 =
								create_struct(BGl_symbol2486z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5647;

								BgL_tmpz00_5647 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3326, BgL_tmpz00_5647, BgL_stackz00_63);
							}
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5650;

								BgL_tmpz00_5650 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3326, BgL_tmpz00_5650, BgL_bodyz00_1910);
							}
							{	/* Eval/evmeaning.scm 927 */
								obj_t BgL_auxz00_5655;
								int BgL_tmpz00_5653;

								BgL_auxz00_5655 = BINT(((long) 3));
								BgL_tmpz00_5653 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3326, BgL_tmpz00_5653, BgL_auxz00_5655);
							}
							BgL_arg1760z00_3325 = BgL_newz00_3326;
						}
						PROCEDURE_ATTR_SET(BgL_zc3z04anonymousza31644ze3z87_4154,
							BgL_arg1760z00_3325);
						BgL_arg1760z00_3325;
					}
					return BgL_zc3z04anonymousza31644ze3z87_4154;
				}
			}
		}

	}



/* &<@anonymous:1644> */
	obj_t BGl_z62zc3z04anonymousza31644ze3ze5zz__evmeaningz00(obj_t
		BgL_envz00_4155, obj_t BgL_xz00_4159, obj_t BgL_yz00_4160,
		obj_t BgL_za7za7_4161)
	{
		{	/* Eval/evmeaning.scm 522 */
			{	/* Eval/evmeaning.scm 523 */
				obj_t BgL_bodyz00_4156;
				obj_t BgL_stackz00_4157;
				obj_t BgL_denvz00_4158;

				BgL_bodyz00_4156 = PROCEDURE_REF(BgL_envz00_4155, (int) (((long) 0)));
				BgL_stackz00_4157 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4155, (int) (((long) 1))));
				BgL_denvz00_4158 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4155, (int) (((long) 2))));
				{	/* Eval/evmeaning.scm 524 */
					obj_t BgL_arg1645z00_4322;

					{	/* Eval/evmeaning.scm 524 */
						obj_t BgL_arg1648z00_4323;

						{	/* Eval/evmeaning.scm 524 */
							obj_t BgL_arg1649z00_4324;

							BgL_arg1649z00_4324 =
								MAKE_YOUNG_PAIR(BgL_za7za7_4161, BgL_stackz00_4157);
							BgL_arg1648z00_4323 =
								MAKE_YOUNG_PAIR(BgL_yz00_4160, BgL_arg1649z00_4324);
						}
						BgL_arg1645z00_4322 =
							MAKE_YOUNG_PAIR(BgL_xz00_4159, BgL_arg1648z00_4323);
					}
					return
						BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4156,
						BgL_arg1645z00_4322, BgL_denvz00_4158);
				}
			}
		}

	}



/* evmeaning-bounce-40 */
	obj_t BGl_evmeaningzd2bouncezd240z00zz__evmeaningz00(obj_t BgL_codez00_65,
		obj_t BgL_stackz00_66, obj_t BgL_denvz00_67)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 498 */
				obj_t BgL_bodyz00_1921;
				obj_t BgL_wherez00_1922;
				obj_t BgL_locz00_1923;

				BgL_bodyz00_1921 = VECTOR_REF(BgL_codez00_65, ((long) 2));
				BgL_wherez00_1922 = VECTOR_REF(BgL_codez00_65, ((long) 3));
				BgL_locz00_1923 = VECTOR_REF(BgL_codez00_65, ((long) 1));
				{	/* Eval/evmeaning.scm 503 */
					obj_t BgL_zc3z04anonymousza31651ze3z87_4162;

					BgL_zc3z04anonymousza31651ze3z87_4162 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31651ze3ze5zz__evmeaningz00,
						(int) (((long) 3)), (int) (((long) 4)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31651ze3z87_4162,
						(int) (((long) 0)), BgL_bodyz00_1921);
					PROCEDURE_SET(BgL_zc3z04anonymousza31651ze3z87_4162,
						(int) (((long) 1)), BgL_stackz00_66);
					PROCEDURE_SET(BgL_zc3z04anonymousza31651ze3z87_4162,
						(int) (((long) 2)), BgL_wherez00_1922);
					PROCEDURE_SET(BgL_zc3z04anonymousza31651ze3z87_4162,
						(int) (((long) 3)), BgL_locz00_1923);
					{	/* Eval/evmeaning.scm 939 */
						obj_t BgL_arg1760z00_3334;

						{	/* Eval/evmeaning.scm 927 */
							obj_t BgL_newz00_3335;

							BgL_newz00_3335 =
								create_struct(BGl_symbol2486z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5687;

								BgL_tmpz00_5687 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3335, BgL_tmpz00_5687, BgL_stackz00_66);
							}
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5690;

								BgL_tmpz00_5690 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3335, BgL_tmpz00_5690, BgL_bodyz00_1921);
							}
							{	/* Eval/evmeaning.scm 927 */
								obj_t BgL_auxz00_5695;
								int BgL_tmpz00_5693;

								BgL_auxz00_5695 = BINT(((long) 3));
								BgL_tmpz00_5693 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3335, BgL_tmpz00_5693, BgL_auxz00_5695);
							}
							BgL_arg1760z00_3334 = BgL_newz00_3335;
						}
						PROCEDURE_ATTR_SET(BgL_zc3z04anonymousza31651ze3z87_4162,
							BgL_arg1760z00_3334);
						BgL_arg1760z00_3334;
					}
					return BgL_zc3z04anonymousza31651ze3z87_4162;
				}
			}
		}

	}



/* &<@anonymous:1651> */
	obj_t BGl_z62zc3z04anonymousza31651ze3ze5zz__evmeaningz00(obj_t
		BgL_envz00_4163, obj_t BgL_xz00_4168, obj_t BgL_yz00_4169,
		obj_t BgL_za7za7_4170)
	{
		{	/* Eval/evmeaning.scm 502 */
			{	/* Eval/evmeaning.scm 503 */
				obj_t BgL_bodyz00_4164;
				obj_t BgL_stackz00_4165;
				obj_t BgL_wherez00_4166;
				obj_t BgL_locz00_4167;

				BgL_bodyz00_4164 = PROCEDURE_REF(BgL_envz00_4163, (int) (((long) 0)));
				BgL_stackz00_4165 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4163, (int) (((long) 1))));
				BgL_wherez00_4166 = PROCEDURE_REF(BgL_envz00_4163, (int) (((long) 2)));
				BgL_locz00_4167 = PROCEDURE_REF(BgL_envz00_4163, (int) (((long) 3)));
				{	/* Eval/evmeaning.scm 503 */
					obj_t BgL_z12sz12_4325;
					obj_t BgL_z12denvz12_4326;

					BgL_z12sz12_4325 = BgL_stackz00_4165;
					BgL_z12denvz12_4326 = BGL_CURRENT_DYNAMIC_ENV();
					{	/* Eval/evmeaning.scm 506 */

						BGL_ENV_PUSH_TRACE(BgL_z12denvz12_4326, BgL_wherez00_4166,
							BgL_locz00_4167);
						{	/* Eval/evmeaning.scm 508 */
							obj_t BgL_resz00_4327;

							{	/* Eval/evmeaning.scm 511 */
								obj_t BgL_arg1652z00_4328;

								{	/* Eval/evmeaning.scm 511 */
									obj_t BgL_arg1654z00_4329;

									{	/* Eval/evmeaning.scm 511 */
										obj_t BgL_arg1656z00_4330;

										BgL_arg1656z00_4330 =
											MAKE_YOUNG_PAIR(BgL_za7za7_4170, BgL_z12sz12_4325);
										BgL_arg1654z00_4329 =
											MAKE_YOUNG_PAIR(BgL_yz00_4169, BgL_arg1656z00_4330);
									}
									BgL_arg1652z00_4328 =
										MAKE_YOUNG_PAIR(BgL_xz00_4168, BgL_arg1654z00_4329);
								}
								BgL_resz00_4327 =
									BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4164,
									BgL_arg1652z00_4328, BgL_z12denvz12_4326);
							}
							BGL_ENV_POP_TRACE(BgL_z12denvz12_4326);
							return BgL_resz00_4327;
						}
					}
				}
			}
		}

	}



/* evmeaning-bounce-44 */
	obj_t BGl_evmeaningzd2bouncezd244z00zz__evmeaningz00(obj_t BgL_codez00_68,
		obj_t BgL_stackz00_69, obj_t BgL_denvz00_70)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 488 */
				obj_t BgL_bodyz00_1937;

				BgL_bodyz00_1937 = VECTOR_REF(BgL_codez00_68, ((long) 2));
				{	/* Eval/evmeaning.scm 491 */
					obj_t BgL_zc3z04anonymousza31658ze3z87_4171;

					BgL_zc3z04anonymousza31658ze3z87_4171 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31658ze3ze5zz__evmeaningz00,
						(int) (((long) 2)), (int) (((long) 3)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31658ze3z87_4171,
						(int) (((long) 0)), BgL_bodyz00_1937);
					PROCEDURE_SET(BgL_zc3z04anonymousza31658ze3z87_4171,
						(int) (((long) 1)), BgL_stackz00_69);
					PROCEDURE_SET(BgL_zc3z04anonymousza31658ze3z87_4171,
						(int) (((long) 2)), BgL_denvz00_70);
					{	/* Eval/evmeaning.scm 939 */
						obj_t BgL_arg1760z00_3340;

						{	/* Eval/evmeaning.scm 927 */
							obj_t BgL_newz00_3341;

							BgL_newz00_3341 =
								create_struct(BGl_symbol2486z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5727;

								BgL_tmpz00_5727 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3341, BgL_tmpz00_5727, BgL_stackz00_69);
							}
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5730;

								BgL_tmpz00_5730 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3341, BgL_tmpz00_5730, BgL_bodyz00_1937);
							}
							{	/* Eval/evmeaning.scm 927 */
								obj_t BgL_auxz00_5735;
								int BgL_tmpz00_5733;

								BgL_auxz00_5735 = BINT(((long) 2));
								BgL_tmpz00_5733 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3341, BgL_tmpz00_5733, BgL_auxz00_5735);
							}
							BgL_arg1760z00_3340 = BgL_newz00_3341;
						}
						PROCEDURE_ATTR_SET(BgL_zc3z04anonymousza31658ze3z87_4171,
							BgL_arg1760z00_3340);
						BgL_arg1760z00_3340;
					}
					return BgL_zc3z04anonymousza31658ze3z87_4171;
				}
			}
		}

	}



/* &<@anonymous:1658> */
	obj_t BGl_z62zc3z04anonymousza31658ze3ze5zz__evmeaningz00(obj_t
		BgL_envz00_4172, obj_t BgL_xz00_4176, obj_t BgL_yz00_4177)
	{
		{	/* Eval/evmeaning.scm 490 */
			{	/* Eval/evmeaning.scm 491 */
				obj_t BgL_bodyz00_4173;
				obj_t BgL_stackz00_4174;
				obj_t BgL_denvz00_4175;

				BgL_bodyz00_4173 = PROCEDURE_REF(BgL_envz00_4172, (int) (((long) 0)));
				BgL_stackz00_4174 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4172, (int) (((long) 1))));
				BgL_denvz00_4175 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4172, (int) (((long) 2))));
				{	/* Eval/evmeaning.scm 492 */
					obj_t BgL_arg1659z00_4331;

					{	/* Eval/evmeaning.scm 492 */
						obj_t BgL_arg1660z00_4332;

						BgL_arg1660z00_4332 =
							MAKE_YOUNG_PAIR(BgL_yz00_4177, BgL_stackz00_4174);
						BgL_arg1659z00_4331 =
							MAKE_YOUNG_PAIR(BgL_xz00_4176, BgL_arg1660z00_4332);
					}
					return
						BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4173,
						BgL_arg1659z00_4331, BgL_denvz00_4175);
				}
			}
		}

	}



/* evmeaning-bounce-39 */
	obj_t BGl_evmeaningzd2bouncezd239z00zz__evmeaningz00(obj_t BgL_codez00_71,
		obj_t BgL_stackz00_72, obj_t BgL_denvz00_73)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 470 */
				obj_t BgL_bodyz00_1946;
				obj_t BgL_wherez00_1947;
				obj_t BgL_locz00_1948;

				BgL_bodyz00_1946 = VECTOR_REF(BgL_codez00_71, ((long) 2));
				BgL_wherez00_1947 = VECTOR_REF(BgL_codez00_71, ((long) 3));
				BgL_locz00_1948 = VECTOR_REF(BgL_codez00_71, ((long) 1));
				{	/* Eval/evmeaning.scm 475 */
					obj_t BgL_zc3z04anonymousza31662ze3z87_4178;

					BgL_zc3z04anonymousza31662ze3z87_4178 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31662ze3ze5zz__evmeaningz00,
						(int) (((long) 2)), (int) (((long) 4)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31662ze3z87_4178,
						(int) (((long) 0)), BgL_bodyz00_1946);
					PROCEDURE_SET(BgL_zc3z04anonymousza31662ze3z87_4178,
						(int) (((long) 1)), BgL_stackz00_72);
					PROCEDURE_SET(BgL_zc3z04anonymousza31662ze3z87_4178,
						(int) (((long) 2)), BgL_wherez00_1947);
					PROCEDURE_SET(BgL_zc3z04anonymousza31662ze3z87_4178,
						(int) (((long) 3)), BgL_locz00_1948);
					{	/* Eval/evmeaning.scm 939 */
						obj_t BgL_arg1760z00_3349;

						{	/* Eval/evmeaning.scm 927 */
							obj_t BgL_newz00_3350;

							BgL_newz00_3350 =
								create_struct(BGl_symbol2486z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5766;

								BgL_tmpz00_5766 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3350, BgL_tmpz00_5766, BgL_stackz00_72);
							}
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5769;

								BgL_tmpz00_5769 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3350, BgL_tmpz00_5769, BgL_bodyz00_1946);
							}
							{	/* Eval/evmeaning.scm 927 */
								obj_t BgL_auxz00_5774;
								int BgL_tmpz00_5772;

								BgL_auxz00_5774 = BINT(((long) 2));
								BgL_tmpz00_5772 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3350, BgL_tmpz00_5772, BgL_auxz00_5774);
							}
							BgL_arg1760z00_3349 = BgL_newz00_3350;
						}
						PROCEDURE_ATTR_SET(BgL_zc3z04anonymousza31662ze3z87_4178,
							BgL_arg1760z00_3349);
						BgL_arg1760z00_3349;
					}
					return BgL_zc3z04anonymousza31662ze3z87_4178;
				}
			}
		}

	}



/* &<@anonymous:1662> */
	obj_t BGl_z62zc3z04anonymousza31662ze3ze5zz__evmeaningz00(obj_t
		BgL_envz00_4179, obj_t BgL_xz00_4184, obj_t BgL_yz00_4185)
	{
		{	/* Eval/evmeaning.scm 474 */
			{	/* Eval/evmeaning.scm 475 */
				obj_t BgL_bodyz00_4180;
				obj_t BgL_stackz00_4181;
				obj_t BgL_wherez00_4182;
				obj_t BgL_locz00_4183;

				BgL_bodyz00_4180 = PROCEDURE_REF(BgL_envz00_4179, (int) (((long) 0)));
				BgL_stackz00_4181 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4179, (int) (((long) 1))));
				BgL_wherez00_4182 = PROCEDURE_REF(BgL_envz00_4179, (int) (((long) 2)));
				BgL_locz00_4183 = PROCEDURE_REF(BgL_envz00_4179, (int) (((long) 3)));
				{	/* Eval/evmeaning.scm 475 */
					obj_t BgL_z12sz12_4333;
					obj_t BgL_z12denvz12_4334;

					BgL_z12sz12_4333 = BgL_stackz00_4181;
					BgL_z12denvz12_4334 = BGL_CURRENT_DYNAMIC_ENV();
					{	/* Eval/evmeaning.scm 478 */

						BGL_ENV_PUSH_TRACE(BgL_z12denvz12_4334, BgL_wherez00_4182,
							BgL_locz00_4183);
						{	/* Eval/evmeaning.scm 480 */
							obj_t BgL_rz00_4335;

							{	/* Eval/evmeaning.scm 480 */
								obj_t BgL_arg1663z00_4336;

								{	/* Eval/evmeaning.scm 480 */
									obj_t BgL_arg1664z00_4337;

									BgL_arg1664z00_4337 =
										MAKE_YOUNG_PAIR(BgL_yz00_4185, BgL_z12sz12_4333);
									BgL_arg1663z00_4336 =
										MAKE_YOUNG_PAIR(BgL_xz00_4184, BgL_arg1664z00_4337);
								}
								BgL_rz00_4335 =
									BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4180,
									BgL_arg1663z00_4336, BgL_z12denvz12_4334);
							}
							BGL_ENV_POP_TRACE(BgL_z12denvz12_4334);
							return BgL_rz00_4335;
						}
					}
				}
			}
		}

	}



/* evmeaning-bounce-43 */
	obj_t BGl_evmeaningzd2bouncezd243z00zz__evmeaningz00(obj_t BgL_codez00_74,
		obj_t BgL_stackz00_75, obj_t BgL_denvz00_76)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 460 */
				obj_t BgL_bodyz00_1960;

				BgL_bodyz00_1960 = VECTOR_REF(BgL_codez00_74, ((long) 2));
				{	/* Eval/evmeaning.scm 463 */
					obj_t BgL_zc3z04anonymousza31666ze3z87_4186;

					BgL_zc3z04anonymousza31666ze3z87_4186 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31666ze3ze5zz__evmeaningz00,
						(int) (((long) 1)), (int) (((long) 3)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31666ze3z87_4186,
						(int) (((long) 0)), BgL_bodyz00_1960);
					PROCEDURE_SET(BgL_zc3z04anonymousza31666ze3z87_4186,
						(int) (((long) 1)), BgL_stackz00_75);
					PROCEDURE_SET(BgL_zc3z04anonymousza31666ze3z87_4186,
						(int) (((long) 2)), BgL_denvz00_76);
					{	/* Eval/evmeaning.scm 939 */
						obj_t BgL_arg1760z00_3355;

						{	/* Eval/evmeaning.scm 927 */
							obj_t BgL_newz00_3356;

							BgL_newz00_3356 =
								create_struct(BGl_symbol2486z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5805;

								BgL_tmpz00_5805 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3356, BgL_tmpz00_5805, BgL_stackz00_75);
							}
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5808;

								BgL_tmpz00_5808 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3356, BgL_tmpz00_5808, BgL_bodyz00_1960);
							}
							{	/* Eval/evmeaning.scm 927 */
								obj_t BgL_auxz00_5813;
								int BgL_tmpz00_5811;

								BgL_auxz00_5813 = BINT(((long) 1));
								BgL_tmpz00_5811 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3356, BgL_tmpz00_5811, BgL_auxz00_5813);
							}
							BgL_arg1760z00_3355 = BgL_newz00_3356;
						}
						PROCEDURE_ATTR_SET(BgL_zc3z04anonymousza31666ze3z87_4186,
							BgL_arg1760z00_3355);
						BgL_arg1760z00_3355;
					}
					return BgL_zc3z04anonymousza31666ze3z87_4186;
				}
			}
		}

	}



/* &<@anonymous:1666> */
	obj_t BGl_z62zc3z04anonymousza31666ze3ze5zz__evmeaningz00(obj_t
		BgL_envz00_4187, obj_t BgL_xz00_4191)
	{
		{	/* Eval/evmeaning.scm 462 */
			{	/* Eval/evmeaning.scm 463 */
				obj_t BgL_bodyz00_4188;
				obj_t BgL_stackz00_4189;
				obj_t BgL_denvz00_4190;

				BgL_bodyz00_4188 = PROCEDURE_REF(BgL_envz00_4187, (int) (((long) 0)));
				BgL_stackz00_4189 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4187, (int) (((long) 1))));
				BgL_denvz00_4190 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4187, (int) (((long) 2))));
				{	/* Eval/evmeaning.scm 464 */
					obj_t BgL_arg1667z00_4338;

					BgL_arg1667z00_4338 =
						MAKE_YOUNG_PAIR(BgL_xz00_4191, BgL_stackz00_4189);
					return
						BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4188,
						BgL_arg1667z00_4338, BgL_denvz00_4190);
				}
			}
		}

	}



/* evmeaning-bounce-38 */
	obj_t BGl_evmeaningzd2bouncezd238z00zz__evmeaningz00(obj_t BgL_codez00_77,
		obj_t BgL_stackz00_78, obj_t BgL_denvz00_79)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 442 */
				obj_t BgL_bodyz00_1967;
				obj_t BgL_wherez00_1968;
				obj_t BgL_locz00_1969;

				BgL_bodyz00_1967 = VECTOR_REF(BgL_codez00_77, ((long) 2));
				BgL_wherez00_1968 = VECTOR_REF(BgL_codez00_77, ((long) 3));
				BgL_locz00_1969 = VECTOR_REF(BgL_codez00_77, ((long) 1));
				{	/* Eval/evmeaning.scm 447 */
					obj_t BgL_zc3z04anonymousza31669ze3z87_4192;

					BgL_zc3z04anonymousza31669ze3z87_4192 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31669ze3ze5zz__evmeaningz00,
						(int) (((long) 1)), (int) (((long) 4)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31669ze3z87_4192,
						(int) (((long) 0)), BgL_bodyz00_1967);
					PROCEDURE_SET(BgL_zc3z04anonymousza31669ze3z87_4192,
						(int) (((long) 1)), BgL_stackz00_78);
					PROCEDURE_SET(BgL_zc3z04anonymousza31669ze3z87_4192,
						(int) (((long) 2)), BgL_wherez00_1968);
					PROCEDURE_SET(BgL_zc3z04anonymousza31669ze3z87_4192,
						(int) (((long) 3)), BgL_locz00_1969);
					{	/* Eval/evmeaning.scm 939 */
						obj_t BgL_arg1760z00_3364;

						{	/* Eval/evmeaning.scm 927 */
							obj_t BgL_newz00_3365;

							BgL_newz00_3365 =
								create_struct(BGl_symbol2486z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5843;

								BgL_tmpz00_5843 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3365, BgL_tmpz00_5843, BgL_stackz00_78);
							}
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5846;

								BgL_tmpz00_5846 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3365, BgL_tmpz00_5846, BgL_bodyz00_1967);
							}
							{	/* Eval/evmeaning.scm 927 */
								obj_t BgL_auxz00_5851;
								int BgL_tmpz00_5849;

								BgL_auxz00_5851 = BINT(((long) 1));
								BgL_tmpz00_5849 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3365, BgL_tmpz00_5849, BgL_auxz00_5851);
							}
							BgL_arg1760z00_3364 = BgL_newz00_3365;
						}
						PROCEDURE_ATTR_SET(BgL_zc3z04anonymousza31669ze3z87_4192,
							BgL_arg1760z00_3364);
						BgL_arg1760z00_3364;
					}
					return BgL_zc3z04anonymousza31669ze3z87_4192;
				}
			}
		}

	}



/* &<@anonymous:1669> */
	obj_t BGl_z62zc3z04anonymousza31669ze3ze5zz__evmeaningz00(obj_t
		BgL_envz00_4193, obj_t BgL_xz00_4198)
	{
		{	/* Eval/evmeaning.scm 446 */
			{	/* Eval/evmeaning.scm 447 */
				obj_t BgL_bodyz00_4194;
				obj_t BgL_stackz00_4195;
				obj_t BgL_wherez00_4196;
				obj_t BgL_locz00_4197;

				BgL_bodyz00_4194 = PROCEDURE_REF(BgL_envz00_4193, (int) (((long) 0)));
				BgL_stackz00_4195 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4193, (int) (((long) 1))));
				BgL_wherez00_4196 = PROCEDURE_REF(BgL_envz00_4193, (int) (((long) 2)));
				BgL_locz00_4197 = PROCEDURE_REF(BgL_envz00_4193, (int) (((long) 3)));
				{	/* Eval/evmeaning.scm 447 */
					obj_t BgL_z12sz12_4339;
					obj_t BgL_z12denvz12_4340;

					BgL_z12sz12_4339 = BgL_stackz00_4195;
					BgL_z12denvz12_4340 = BGL_CURRENT_DYNAMIC_ENV();
					{	/* Eval/evmeaning.scm 450 */

						BGL_ENV_PUSH_TRACE(BgL_z12denvz12_4340, BgL_wherez00_4196,
							BgL_locz00_4197);
						{	/* Eval/evmeaning.scm 452 */
							obj_t BgL_resz00_4341;

							{	/* Eval/evmeaning.scm 452 */
								obj_t BgL_arg1672z00_4342;

								BgL_arg1672z00_4342 =
									MAKE_YOUNG_PAIR(BgL_xz00_4198, BgL_z12sz12_4339);
								BgL_resz00_4341 =
									BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4194,
									BgL_arg1672z00_4342, BgL_z12denvz12_4340);
							}
							BGL_ENV_POP_TRACE(BgL_z12denvz12_4340);
							return BgL_resz00_4341;
						}
					}
				}
			}
		}

	}



/* evmeaning-bounce-42 */
	obj_t BGl_evmeaningzd2bouncezd242z00zz__evmeaningz00(obj_t BgL_codez00_80,
		obj_t BgL_stackz00_81, obj_t BgL_denvz00_82)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 432 */
				obj_t BgL_bodyz00_1979;

				BgL_bodyz00_1979 = VECTOR_REF(BgL_codez00_80, ((long) 2));
				{	/* Eval/evmeaning.scm 435 */
					obj_t BgL_zc3z04anonymousza31676ze3z87_4199;

					BgL_zc3z04anonymousza31676ze3z87_4199 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31676ze3ze5zz__evmeaningz00,
						(int) (((long) 0)), (int) (((long) 3)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31676ze3z87_4199,
						(int) (((long) 0)), BgL_bodyz00_1979);
					PROCEDURE_SET(BgL_zc3z04anonymousza31676ze3z87_4199,
						(int) (((long) 1)), BgL_stackz00_81);
					PROCEDURE_SET(BgL_zc3z04anonymousza31676ze3z87_4199,
						(int) (((long) 2)), BgL_denvz00_82);
					{	/* Eval/evmeaning.scm 939 */
						obj_t BgL_arg1760z00_3370;

						{	/* Eval/evmeaning.scm 927 */
							obj_t BgL_newz00_3371;

							BgL_newz00_3371 =
								create_struct(BGl_symbol2486z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5881;

								BgL_tmpz00_5881 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3371, BgL_tmpz00_5881, BgL_stackz00_81);
							}
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5884;

								BgL_tmpz00_5884 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3371, BgL_tmpz00_5884, BgL_bodyz00_1979);
							}
							{	/* Eval/evmeaning.scm 927 */
								obj_t BgL_auxz00_5889;
								int BgL_tmpz00_5887;

								BgL_auxz00_5889 = BINT(((long) 0));
								BgL_tmpz00_5887 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3371, BgL_tmpz00_5887, BgL_auxz00_5889);
							}
							BgL_arg1760z00_3370 = BgL_newz00_3371;
						}
						PROCEDURE_ATTR_SET(BgL_zc3z04anonymousza31676ze3z87_4199,
							BgL_arg1760z00_3370);
						BgL_arg1760z00_3370;
					}
					return BgL_zc3z04anonymousza31676ze3z87_4199;
				}
			}
		}

	}



/* &<@anonymous:1676> */
	obj_t BGl_z62zc3z04anonymousza31676ze3ze5zz__evmeaningz00(obj_t
		BgL_envz00_4200)
	{
		{	/* Eval/evmeaning.scm 434 */
			{	/* Eval/evmeaning.scm 435 */
				obj_t BgL_bodyz00_4201;
				obj_t BgL_stackz00_4202;
				obj_t BgL_denvz00_4203;

				BgL_bodyz00_4201 = PROCEDURE_REF(BgL_envz00_4200, (int) (((long) 0)));
				BgL_stackz00_4202 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4200, (int) (((long) 1))));
				BgL_denvz00_4203 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4200, (int) (((long) 2))));
				return
					BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4201, BgL_stackz00_4202,
					BgL_denvz00_4203);
			}
		}

	}



/* evmeaning-bounce-37 */
	obj_t BGl_evmeaningzd2bouncezd237z00zz__evmeaningz00(obj_t BgL_codez00_83,
		obj_t BgL_stackz00_84, obj_t BgL_denvz00_85)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 413 */
				obj_t BgL_bodyz00_1984;
				obj_t BgL_wherez00_1985;
				obj_t BgL_locz00_1986;

				BgL_bodyz00_1984 = VECTOR_REF(BgL_codez00_83, ((long) 2));
				BgL_wherez00_1985 = VECTOR_REF(BgL_codez00_83, ((long) 3));
				BgL_locz00_1986 = VECTOR_REF(BgL_codez00_83, ((long) 1));
				{	/* Eval/evmeaning.scm 418 */
					obj_t BgL_zc3z04anonymousza31684ze3z87_4204;

					BgL_zc3z04anonymousza31684ze3z87_4204 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31684ze3ze5zz__evmeaningz00,
						(int) (((long) 0)), (int) (((long) 4)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31684ze3z87_4204,
						(int) (((long) 0)), BgL_bodyz00_1984);
					PROCEDURE_SET(BgL_zc3z04anonymousza31684ze3z87_4204,
						(int) (((long) 1)), BgL_stackz00_84);
					PROCEDURE_SET(BgL_zc3z04anonymousza31684ze3z87_4204,
						(int) (((long) 2)), BgL_wherez00_1985);
					PROCEDURE_SET(BgL_zc3z04anonymousza31684ze3z87_4204,
						(int) (((long) 3)), BgL_locz00_1986);
					{	/* Eval/evmeaning.scm 939 */
						obj_t BgL_arg1760z00_3379;

						{	/* Eval/evmeaning.scm 927 */
							obj_t BgL_newz00_3380;

							BgL_newz00_3380 =
								create_struct(BGl_symbol2486z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5918;

								BgL_tmpz00_5918 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3380, BgL_tmpz00_5918, BgL_stackz00_84);
							}
							{	/* Eval/evmeaning.scm 927 */
								int BgL_tmpz00_5921;

								BgL_tmpz00_5921 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3380, BgL_tmpz00_5921, BgL_bodyz00_1984);
							}
							{	/* Eval/evmeaning.scm 927 */
								obj_t BgL_auxz00_5926;
								int BgL_tmpz00_5924;

								BgL_auxz00_5926 = BINT(((long) 0));
								BgL_tmpz00_5924 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3380, BgL_tmpz00_5924, BgL_auxz00_5926);
							}
							BgL_arg1760z00_3379 = BgL_newz00_3380;
						}
						PROCEDURE_ATTR_SET(BgL_zc3z04anonymousza31684ze3z87_4204,
							BgL_arg1760z00_3379);
						BgL_arg1760z00_3379;
					}
					return BgL_zc3z04anonymousza31684ze3z87_4204;
				}
			}
		}

	}



/* &<@anonymous:1684> */
	obj_t BGl_z62zc3z04anonymousza31684ze3ze5zz__evmeaningz00(obj_t
		BgL_envz00_4205)
	{
		{	/* Eval/evmeaning.scm 417 */
			{	/* Eval/evmeaning.scm 418 */
				obj_t BgL_bodyz00_4206;
				obj_t BgL_stackz00_4207;
				obj_t BgL_wherez00_4208;
				obj_t BgL_locz00_4209;

				BgL_bodyz00_4206 = PROCEDURE_REF(BgL_envz00_4205, (int) (((long) 0)));
				BgL_stackz00_4207 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4205, (int) (((long) 1))));
				BgL_wherez00_4208 = PROCEDURE_REF(BgL_envz00_4205, (int) (((long) 2)));
				BgL_locz00_4209 = PROCEDURE_REF(BgL_envz00_4205, (int) (((long) 3)));
				{	/* Eval/evmeaning.scm 418 */
					obj_t BgL_z12sz12_4343;
					obj_t BgL_z12denvz12_4344;

					BgL_z12sz12_4343 = BgL_stackz00_4207;
					BgL_z12denvz12_4344 = BGL_CURRENT_DYNAMIC_ENV();
					{	/* Eval/evmeaning.scm 421 */

						BGL_ENV_PUSH_TRACE(BgL_z12denvz12_4344, BgL_wherez00_4208,
							BgL_locz00_4209);
						{	/* Eval/evmeaning.scm 423 */
							obj_t BgL_resz00_4345;

							BgL_resz00_4345 =
								BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4206,
								BgL_z12sz12_4343, BgL_z12denvz12_4344);
							BGL_ENV_POP_TRACE(BgL_z12denvz12_4344);
							return BgL_resz00_4345;
						}
					}
				}
			}
		}

	}



/* evmeaning-bounce-36 */
	obj_t BGl_evmeaningzd2bouncezd236z00zz__evmeaningz00(obj_t BgL_codez00_86,
		obj_t BgL_stackz00_87, obj_t BgL_denvz00_88)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 394 */
				obj_t BgL_namez00_1994;

				BgL_namez00_1994 = VECTOR_REF(BgL_codez00_86, ((long) 2));
				{	/* Eval/evmeaning.scm 394 */
					obj_t BgL_funz00_1995;

					BgL_funz00_1995 =
						BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_86,
							((long) 3)), BgL_stackz00_87, BgL_denvz00_88);
					{	/* Eval/evmeaning.scm 395 */

						{	/* Eval/evmeaning.scm 396 */
							obj_t BgL_g1102z00_1996;

							BgL_g1102z00_1996 = VECTOR_REF(BgL_codez00_86, ((long) 4));
							{
								obj_t BgL_argsz00_1999;
								obj_t BgL_newz00_2000;
								long BgL_lenz00_2001;

								BgL_argsz00_1999 = BgL_g1102z00_1996;
								BgL_newz00_2000 = BNIL;
								BgL_lenz00_2001 = ((long) 0);
							BgL_zc3z04anonymousza31685ze3z87_2002:
								if (NULLP(BgL_argsz00_1999))
									{	/* Eval/evmeaning.scm 399 */
										{	/* Eval/evmeaning.scm 401 */
											obj_t BgL_tmpz00_5949;

											BgL_tmpz00_5949 = VECTOR_REF(BgL_codez00_86, ((long) 1));
											BGL_ENV_SET_TRACE_LOCATION(BgL_denvz00_88,
												BgL_tmpz00_5949);
										}
										{	/* Eval/evmeaning.scm 402 */
											obj_t BgL_arg1688z00_2005;

											BgL_arg1688z00_2005 = bgl_reverse_bang(BgL_newz00_2000);
											if (PROCEDUREP(BgL_funz00_1995))
												{	/* Eval/evmeaning.scm 1188 */
													if (PROCEDURE_CORRECT_ARITYP(BgL_funz00_1995,
															(int) (BgL_lenz00_2001)))
														{	/* Eval/evmeaning.scm 1190 */
															return
																eval_apply(BgL_funz00_1995,
																BgL_arg1688z00_2005);
														}
													else
														{	/* Eval/evmeaning.scm 1190 */
															return
																BGl_evarityzd2errorzd2zz__everrorz00(VECTOR_REF
																(BgL_codez00_86, ((long) 1)), BgL_namez00_1994,
																(int) (BgL_lenz00_2001),
																PROCEDURE_ARITY(BgL_funz00_1995));
												}}
											else
												{	/* Eval/evmeaning.scm 1188 */
													return
														BGl_everrorz00zz__everrorz00(VECTOR_REF
														(BgL_codez00_86, ((long) 1)),
														BGl_string2488z00zz__evmeaningz00,
														BGl_string2489z00zz__evmeaningz00,
														BgL_namez00_1994);
									}}}
								else
									{	/* Eval/evmeaning.scm 403 */
										obj_t BgL_arg1691z00_2006;
										obj_t BgL_arg1692z00_2007;
										long BgL_arg1693z00_2008;

										BgL_arg1691z00_2006 = CDR(((obj_t) BgL_argsz00_1999));
										{	/* Eval/evmeaning.scm 404 */
											obj_t BgL_arg1695z00_2009;

											{	/* Eval/evmeaning.scm 404 */
												obj_t BgL_arg1696z00_2010;

												BgL_arg1696z00_2010 = CAR(((obj_t) BgL_argsz00_1999));
												BgL_arg1695z00_2009 =
													BGl_evmeaningz00zz__evmeaningz00(BgL_arg1696z00_2010,
													BgL_stackz00_87, BgL_denvz00_88);
											}
											BgL_arg1692z00_2007 =
												MAKE_YOUNG_PAIR(BgL_arg1695z00_2009, BgL_newz00_2000);
										}
										BgL_arg1693z00_2008 = (((long) 1) + BgL_lenz00_2001);
										{
											long BgL_lenz00_5974;
											obj_t BgL_newz00_5973;
											obj_t BgL_argsz00_5972;

											BgL_argsz00_5972 = BgL_arg1691z00_2006;
											BgL_newz00_5973 = BgL_arg1692z00_2007;
											BgL_lenz00_5974 = BgL_arg1693z00_2008;
											BgL_lenz00_2001 = BgL_lenz00_5974;
											BgL_newz00_2000 = BgL_newz00_5973;
											BgL_argsz00_1999 = BgL_argsz00_5972;
											goto BgL_zc3z04anonymousza31685ze3z87_2002;
										}
									}
							}
						}
					}
				}
			}
		}

	}



/* evmeaning-bounce-30 */
	obj_t BGl_evmeaningzd2bouncezd230z00zz__evmeaningz00(obj_t BgL_codez00_89,
		obj_t BgL_stackz00_90, obj_t BgL_denvz00_91)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 368 */
				obj_t BgL_eargsz00_2013;

				{	/* Eval/evmeaning.scm 368 */
					obj_t BgL_l1169z00_2014;

					BgL_l1169z00_2014 = VECTOR_REF(BgL_codez00_89, ((long) 3));
					if (NULLP(BgL_l1169z00_2014))
						{	/* Eval/evmeaning.scm 368 */
							BgL_eargsz00_2013 = BNIL;
						}
					else
						{	/* Eval/evmeaning.scm 368 */
							obj_t BgL_head1171z00_2016;

							{	/* Eval/evmeaning.scm 368 */
								obj_t BgL_res2363z00_3403;

								BgL_res2363z00_3403 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								BgL_head1171z00_2016 = BgL_res2363z00_3403;
							}
							{
								obj_t BgL_l1169z00_2018;
								obj_t BgL_tail1172z00_2019;

								BgL_l1169z00_2018 = BgL_l1169z00_2014;
								BgL_tail1172z00_2019 = BgL_head1171z00_2016;
							BgL_zc3z04anonymousza31699ze3z87_2020:
								if (NULLP(BgL_l1169z00_2018))
									{	/* Eval/evmeaning.scm 368 */
										BgL_eargsz00_2013 = CDR(BgL_head1171z00_2016);
									}
								else
									{	/* Eval/evmeaning.scm 368 */
										obj_t BgL_newtail1173z00_2022;

										{	/* Eval/evmeaning.scm 368 */
											obj_t BgL_arg1702z00_2024;

											{	/* Eval/evmeaning.scm 368 */
												obj_t BgL_xz00_2025;

												BgL_xz00_2025 = CAR(((obj_t) BgL_l1169z00_2018));
												BgL_arg1702z00_2024 =
													BGl_evmeaningz00zz__evmeaningz00(BgL_xz00_2025,
													BgL_stackz00_90, BgL_denvz00_91);
											}
											{	/* Eval/evmeaning.scm 368 */
												obj_t BgL_res2365z00_3407;

												BgL_res2365z00_3407 =
													MAKE_YOUNG_PAIR(BgL_arg1702z00_2024, BNIL);
												BgL_newtail1173z00_2022 = BgL_res2365z00_3407;
											}
										}
										SET_CDR(BgL_tail1172z00_2019, BgL_newtail1173z00_2022);
										{	/* Eval/evmeaning.scm 368 */
											obj_t BgL_arg1701z00_2023;

											BgL_arg1701z00_2023 = CDR(((obj_t) BgL_l1169z00_2018));
											{
												obj_t BgL_tail1172z00_5990;
												obj_t BgL_l1169z00_5989;

												BgL_l1169z00_5989 = BgL_arg1701z00_2023;
												BgL_tail1172z00_5990 = BgL_newtail1173z00_2022;
												BgL_tail1172z00_2019 = BgL_tail1172z00_5990;
												BgL_l1169z00_2018 = BgL_l1169z00_5989;
												goto BgL_zc3z04anonymousza31699ze3z87_2020;
											}
										}
									}
							}
						}
				}
				{	/* Eval/evmeaning.scm 371 */
					obj_t BgL_funz00_4275;

					BgL_funz00_4275 = VECTOR_REF(BgL_codez00_89, ((long) 2));
					return apply(BgL_funz00_4275, BgL_eargsz00_2013);
				}
			}
		}

	}



/* evmeaning-bounce-29 */
	obj_t BGl_evmeaningzd2bouncezd229z00zz__evmeaningz00(obj_t BgL_codez00_92,
		obj_t BgL_stackz00_93, obj_t BgL_denvz00_94)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 360 */
				obj_t BgL_funz00_2027;

				BgL_funz00_2027 = VECTOR_REF(BgL_codez00_92, ((long) 2));
				{	/* Eval/evmeaning.scm 360 */
					obj_t BgL_a0z00_2028;

					BgL_a0z00_2028 =
						BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_92,
							((long) 3)), BgL_stackz00_93, BgL_denvz00_94);
					{	/* Eval/evmeaning.scm 361 */
						obj_t BgL_a1z00_2029;

						BgL_a1z00_2029 =
							BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_92,
								((long) 4)), BgL_stackz00_93, BgL_denvz00_94);
						{	/* Eval/evmeaning.scm 362 */
							obj_t BgL_a2z00_2030;

							BgL_a2z00_2030 =
								BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_92,
									((long) 5)), BgL_stackz00_93, BgL_denvz00_94);
							{	/* Eval/evmeaning.scm 363 */
								obj_t BgL_a3z00_2031;

								BgL_a3z00_2031 =
									BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_92,
										((long) 6)), BgL_stackz00_93, BgL_denvz00_94);
								{	/* Eval/evmeaning.scm 364 */

									return
										PROCEDURE_ENTRY(BgL_funz00_2027) (BgL_funz00_2027,
										BgL_a0z00_2028, BgL_a1z00_2029, BgL_a2z00_2030,
										BgL_a3z00_2031, BEOA);
								}
							}
						}
					}
				}
			}
		}

	}



/* evmeaning-bounce-28 */
	obj_t BGl_evmeaningzd2bouncezd228z00zz__evmeaningz00(obj_t BgL_codez00_95,
		obj_t BgL_stackz00_96, obj_t BgL_denvz00_97)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 353 */
				obj_t BgL_funz00_2036;

				BgL_funz00_2036 = VECTOR_REF(BgL_codez00_95, ((long) 2));
				{	/* Eval/evmeaning.scm 353 */
					obj_t BgL_a0z00_2037;

					BgL_a0z00_2037 =
						BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_95,
							((long) 3)), BgL_stackz00_96, BgL_denvz00_97);
					{	/* Eval/evmeaning.scm 354 */
						obj_t BgL_a1z00_2038;

						BgL_a1z00_2038 =
							BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_95,
								((long) 4)), BgL_stackz00_96, BgL_denvz00_97);
						{	/* Eval/evmeaning.scm 355 */
							obj_t BgL_a2z00_2039;

							BgL_a2z00_2039 =
								BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_95,
									((long) 5)), BgL_stackz00_96, BgL_denvz00_97);
							{	/* Eval/evmeaning.scm 356 */

								return
									PROCEDURE_ENTRY(BgL_funz00_2036) (BgL_funz00_2036,
									BgL_a0z00_2037, BgL_a1z00_2038, BgL_a2z00_2039, BEOA);
							}
						}
					}
				}
			}
		}

	}



/* evmeaning-bounce-27 */
	obj_t BGl_evmeaningzd2bouncezd227z00zz__evmeaningz00(obj_t BgL_codez00_98,
		obj_t BgL_stackz00_99, obj_t BgL_denvz00_100)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 347 */
				obj_t BgL_funz00_2043;

				BgL_funz00_2043 = VECTOR_REF(BgL_codez00_98, ((long) 2));
				{	/* Eval/evmeaning.scm 347 */
					obj_t BgL_a0z00_2044;

					BgL_a0z00_2044 =
						BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_98,
							((long) 3)), BgL_stackz00_99, BgL_denvz00_100);
					{	/* Eval/evmeaning.scm 348 */
						obj_t BgL_a1z00_2045;

						BgL_a1z00_2045 =
							BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_98,
								((long) 4)), BgL_stackz00_99, BgL_denvz00_100);
						{	/* Eval/evmeaning.scm 349 */

							return
								PROCEDURE_ENTRY(BgL_funz00_2043) (BgL_funz00_2043,
								BgL_a0z00_2044, BgL_a1z00_2045, BEOA);
						}
					}
				}
			}
		}

	}



/* evmeaning-bounce-26 */
	obj_t BGl_evmeaningzd2bouncezd226z00zz__evmeaningz00(obj_t BgL_codez00_101,
		obj_t BgL_stackz00_102, obj_t BgL_denvz00_103)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 342 */
				obj_t BgL_funz00_2048;

				BgL_funz00_2048 = VECTOR_REF(BgL_codez00_101, ((long) 2));
				{	/* Eval/evmeaning.scm 342 */
					obj_t BgL_a0z00_2049;

					BgL_a0z00_2049 =
						BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_101,
							((long) 3)), BgL_stackz00_102, BgL_denvz00_103);
					{	/* Eval/evmeaning.scm 343 */

						return
							PROCEDURE_ENTRY(BgL_funz00_2048) (BgL_funz00_2048, BgL_a0z00_2049,
							BEOA);
					}
				}
			}
		}

	}



/* evmeaning-bounce-25 */
	obj_t BGl_evmeaningzd2bouncezd225z00zz__evmeaningz00(obj_t BgL_codez00_104)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 339 */
				obj_t BgL_fun1718z00_2051;

				BgL_fun1718z00_2051 = VECTOR_REF(BgL_codez00_104, ((long) 2));
				return PROCEDURE_ENTRY(BgL_fun1718z00_2051) (BgL_fun1718z00_2051, BEOA);
			}
		}

	}



/* evmeaning-bounce-18 */
	obj_t BGl_evmeaningzd2bouncezd218z00zz__evmeaningz00(obj_t BgL_codez00_105,
		obj_t BgL_stackz00_106, obj_t BgL_denvz00_107)
	{
		{	/* Eval/evmeaning.scm 922 */
			return
				BGl_zc3z04exitza31719ze3ze70z60zz__evmeaningz00(BgL_denvz00_107,
				BgL_stackz00_106, BgL_codez00_105);
		}

	}



/* <@exit:1719>~0 */
	obj_t BGl_zc3z04exitza31719ze3ze70z60zz__evmeaningz00(obj_t BgL_denvz00_4260,
		obj_t BgL_stackz00_4259, obj_t BgL_codez00_4258)
	{
		{	/* Eval/evmeaning.scm 335 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1104z00_2053;

			if (SET_EXIT(BgL_an_exit1104z00_2053))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1104z00_2053 = (void *) jmpbuf;
					{	/* Eval/evmeaning.scm 335 */

						PUSH_EXIT(BgL_an_exit1104z00_2053, ((long) 1));
						{	/* Eval/evmeaning.scm 335 */
							obj_t BgL_an_exitd1105z00_2054;

							BgL_an_exitd1105z00_2054 = ((obj_t) (&exitd));
							{	/* Eval/evmeaning.scm 335 */
								obj_t BgL___dummy__z00_4210;

								BgL___dummy__z00_4210 =
									MAKE_FX_PROCEDURE(BGl_z62__dummy__z62zz__evmeaningz00,
									(int) (((long) 1)), (int) (((long) 1)));
								PROCEDURE_SET(BgL___dummy__z00_4210,
									(int) (((long) 0)), BgL_an_exitd1105z00_2054);
								{	/* Eval/evmeaning.scm 335 */
									obj_t BgL_res1107z00_2057;

									{	/* Eval/evmeaning.scm 336 */
										obj_t BgL_fun1721z00_2059;

										BgL_fun1721z00_2059 =
											BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
											(BgL_codez00_4258, ((long) 2)), BgL_stackz00_4259,
											BgL_denvz00_4260);
										BgL_res1107z00_2057 =
											PROCEDURE_ENTRY(BgL_fun1721z00_2059) (BgL_fun1721z00_2059,
											BgL___dummy__z00_4210, BEOA);
									}
									POP_EXIT();
									return BgL_res1107z00_2057;
								}
							}
						}
					}
				}
		}

	}



/* &__dummy__ */
	obj_t BGl_z62__dummy__z62zz__evmeaningz00(obj_t BgL_envz00_4211,
		obj_t BgL_val1106z00_4213)
	{
		{	/* Eval/evmeaning.scm 335 */
			return
				BGl_unwindzd2untilz12zc0zz__bexitz00(PROCEDURE_REF(BgL_envz00_4211,
					(int) (((long) 0))), BgL_val1106z00_4213);
		}

	}



/* evmeaning-bounce-17 */
	obj_t BGl_evmeaningzd2bouncezd217z00zz__evmeaningz00(obj_t BgL_codez00_108,
		obj_t BgL_stackz00_109, obj_t BgL_denvz00_110)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 298 */
				obj_t BgL_varz00_2060;
				obj_t BgL_valz00_2061;
				obj_t BgL_modz00_2062;

				BgL_varz00_2060 = VECTOR_REF(BgL_codez00_108, ((long) 2));
				BgL_valz00_2061 = VECTOR_REF(BgL_codez00_108, ((long) 3));
				BgL_modz00_2062 = VECTOR_REF(BgL_codez00_108, ((long) 4));
				{	/* Eval/evmeaning.scm 301 */
					obj_t BgL_vz00_2063;

					BgL_vz00_2063 =
						BGl_evmodulezd2findzd2globalz00zz__evmodulez00(BgL_modz00_2062,
						BgL_varz00_2060);
					{	/* Eval/evmeaning.scm 302 */
						bool_t BgL_test2633z00_6067;

						if (VECTORP(BgL_vz00_2063))
							{	/* Eval/evmeaning.scm 302 */
								BgL_test2633z00_6067 =
									(VECTOR_LENGTH(BgL_vz00_2063) == ((long) 5));
							}
						else
							{	/* Eval/evmeaning.scm 302 */
								BgL_test2633z00_6067 = ((bool_t) 0);
							}
						if (BgL_test2633z00_6067)
							{

								{	/* Eval/evmeaning.scm 303 */
									int BgL_aux1109z00_2066;

									BgL_aux1109z00_2066 =
										CINT(VECTOR_REF(BgL_vz00_2063, ((long) 0)));
									switch ((long) (BgL_aux1109z00_2066))
										{
										case ((long) 0):

											BGl_everrorz00zz__everrorz00(VECTOR_REF(BgL_codez00_108,
													((long) 1)), BGl_string2483z00zz__evmeaningz00,
												BGl_string2505z00zz__evmeaningz00, BgL_varz00_2060);
											break;
										case ((long) 1):

											{	/* Eval/evmeaning.scm 309 */
												obj_t BgL_arg1726z00_2069;

												BgL_arg1726z00_2069 =
													VECTOR_REF(BgL_codez00_108, ((long) 1));
												{	/* Eval/evmeaning.scm 309 */
													obj_t BgL_list1727z00_2070;

													{	/* Eval/evmeaning.scm 309 */
														obj_t BgL_arg1728z00_2071;

														{	/* Eval/evmeaning.scm 309 */
															obj_t BgL_arg1729z00_2072;

															BgL_arg1729z00_2072 =
																MAKE_YOUNG_PAIR(BgL_varz00_2060, BNIL);
															BgL_arg1728z00_2071 =
																MAKE_YOUNG_PAIR
																(BGl_string2506z00zz__evmeaningz00,
																BgL_arg1729z00_2072);
														}
														BgL_list1727z00_2070 =
															MAKE_YOUNG_PAIR(BGl_string2483z00zz__evmeaningz00,
															BgL_arg1728z00_2071);
													}
													BGl_evwarningz00zz__everrorz00(BgL_arg1726z00_2069,
														BgL_list1727z00_2070);
											}}
											BGl_updatezd2evalzd2globalz12z12zz__evmeaningz00
												(BgL_codez00_108, BgL_vz00_2063,
												BGl_evmeaningz00zz__evmeaningz00(BgL_valz00_2061, BNIL,
													BgL_denvz00_110));
											break;
										case ((long) 2):

											BGl_updatezd2evalzd2globalz12z12zz__evmeaningz00
												(BgL_codez00_108, BgL_vz00_2063,
												BGl_evmeaningz00zz__evmeaningz00(BgL_valz00_2061, BNIL,
													BgL_denvz00_110));
											break;
										case ((long) 3):

											BGl_updatezd2evalzd2globalz12z12zz__evmeaningz00
												(BgL_codez00_108, BgL_vz00_2063,
												BGl_evmeaningz00zz__evmeaningz00(BgL_valz00_2061, BNIL,
													BgL_denvz00_110));
											VECTOR_SET(BgL_vz00_2063, ((long) 0), BINT(((long) 2)));
											break;
										case ((long) 4):

											BGl_updatezd2evalzd2globalz12z12zz__evmeaningz00
												(BgL_codez00_108, BgL_vz00_2063,
												BGl_evmeaningz00zz__evmeaningz00(BgL_valz00_2061, BNIL,
													BgL_denvz00_110));
											VECTOR_SET(BgL_vz00_2063, ((long) 0), BINT(((long) 5)));
											break;
										default:
											BGl_everrorz00zz__everrorz00(VECTOR_REF(BgL_codez00_108,
													((long) 1)), BGl_string2483z00zz__evmeaningz00,
												BGl_string2504z00zz__evmeaningz00, BgL_varz00_2060);
							}}}
						else
							{	/* Eval/evmeaning.scm 325 */
								obj_t BgL_locz00_2078;

								BgL_locz00_2078 = VECTOR_REF(BgL_codez00_108, ((long) 1));
								{	/* Eval/evmeaning.scm 325 */
									obj_t BgL_gz00_2079;

									{	/* Eval/evmeaning.scm 326 */
										obj_t BgL_arg1736z00_2081;

										BgL_arg1736z00_2081 = BGl_evalzd2modulezd2zz__evmodulez00();
										{	/* Eval/evmeaning.scm 326 */
											obj_t BgL_v1174z00_3448;

											BgL_v1174z00_3448 = create_vector(((long) 5));
											VECTOR_SET(BgL_v1174z00_3448, ((long) 0),
												BINT(((long) 2)));
											VECTOR_SET(BgL_v1174z00_3448, ((long) 1),
												((obj_t) BgL_varz00_2060));
											VECTOR_SET(BgL_v1174z00_3448, ((long) 2), BUNSPEC);
											VECTOR_SET(BgL_v1174z00_3448, ((long) 3),
												BgL_arg1736z00_2081);
											VECTOR_SET(BgL_v1174z00_3448, ((long) 4),
												BgL_locz00_2078);
											BgL_gz00_2079 = BgL_v1174z00_3448;
									}}
									{	/* Eval/evmeaning.scm 326 */

										BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00
											(BgL_modz00_2062, BgL_varz00_2060, BgL_gz00_2079,
											BgL_locz00_2078);
										VECTOR_SET(BgL_gz00_2079, ((long) 2),
											BGl_evmeaningz00zz__evmeaningz00(BgL_valz00_2061, BNIL,
												BgL_denvz00_110));
					}}}}
					return BgL_varz00_2060;
				}
			}
		}

	}



/* evmeaning-bounce-14 */
	obj_t BGl_evmeaningzd2bouncezd214z00zz__evmeaningz00(obj_t BgL_codez00_111,
		obj_t BgL_stackz00_112, obj_t BgL_denvz00_113)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 276 */
				obj_t BgL_offsetz00_2082;
				obj_t BgL_valuez00_2083;

				BgL_offsetz00_2082 = VECTOR_REF(BgL_codez00_111, ((long) 2));
				BgL_valuez00_2083 =
					BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_111,
						((long) 3)), BgL_stackz00_112, BgL_denvz00_113);
				{
					long BgL_iz00_2086;
					obj_t BgL_envz00_2087;

					{	/* Eval/evmeaning.scm 279 */
						obj_t BgL_arg1737z00_2085;

						{	/* Eval/evmeaning.scm 279 */
							obj_t BgL_pairz00_3472;

							{	/* Eval/evmeaning.scm 279 */
								obj_t BgL_pairz00_3471;

								{	/* Eval/evmeaning.scm 279 */
									obj_t BgL_pairz00_3470;

									BgL_pairz00_3470 = CDR(((obj_t) BgL_stackz00_112));
									BgL_pairz00_3471 = CDR(BgL_pairz00_3470);
								}
								BgL_pairz00_3472 = CDR(BgL_pairz00_3471);
							}
							BgL_arg1737z00_2085 = CDR(BgL_pairz00_3472);
						}
						BgL_iz00_2086 = ((long) 4);
						BgL_envz00_2087 = BgL_arg1737z00_2085;
					BgL_zc3z04anonymousza31738ze3z87_2088:
						if ((BgL_iz00_2086 == (long) CINT(BgL_offsetz00_2082)))
							{	/* Eval/evmeaning.scm 280 */
								obj_t BgL_tmpz00_6121;

								BgL_tmpz00_6121 = ((obj_t) BgL_envz00_2087);
								SET_CAR(BgL_tmpz00_6121, BgL_valuez00_2083);
							}
						else
							{	/* Eval/evmeaning.scm 278 */
								long BgL_arg1740z00_2090;
								obj_t BgL_arg1741z00_2091;

								BgL_arg1740z00_2090 = (BgL_iz00_2086 + ((long) 1));
								BgL_arg1741z00_2091 = CDR(((obj_t) BgL_envz00_2087));
								{
									obj_t BgL_envz00_6128;
									long BgL_iz00_6127;

									BgL_iz00_6127 = BgL_arg1740z00_2090;
									BgL_envz00_6128 = BgL_arg1741z00_2091;
									BgL_envz00_2087 = BgL_envz00_6128;
									BgL_iz00_2086 = BgL_iz00_6127;
									goto BgL_zc3z04anonymousza31738ze3z87_2088;
								}
							}
					}
				}
				return BUNSPEC;
			}
		}

	}



/* evmeaning-bounce-9 */
	obj_t BGl_evmeaningzd2bouncezd29z00zz__evmeaningz00(obj_t BgL_codez00_114,
		obj_t BgL_stackz00_115, obj_t BgL_denvz00_116)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 247 */
				obj_t BgL_namez00_2094;

				BgL_namez00_2094 = VECTOR_REF(BgL_codez00_114, ((long) 2));
				{	/* Eval/evmeaning.scm 247 */
					obj_t BgL_valuez00_2095;

					BgL_valuez00_2095 = VECTOR_REF(BgL_codez00_114, ((long) 3));
					{	/* Eval/evmeaning.scm 248 */
						obj_t BgL_modz00_2096;

						BgL_modz00_2096 = VECTOR_REF(BgL_codez00_114, ((long) 4));
						{	/* Eval/evmeaning.scm 249 */
							obj_t BgL_globalz00_2097;

							BgL_globalz00_2097 =
								BGl_evmodulezd2findzd2globalz00zz__evmodulez00(BgL_modz00_2096,
								BgL_namez00_2094);
							{	/* Eval/evmeaning.scm 250 */

								{	/* Eval/evmeaning.scm 251 */
									bool_t BgL_test2636z00_6133;

									if (VECTORP(BgL_globalz00_2097))
										{	/* Eval/evmeaning.scm 251 */
											BgL_test2636z00_6133 =
												(VECTOR_LENGTH(BgL_globalz00_2097) == ((long) 5));
										}
									else
										{	/* Eval/evmeaning.scm 251 */
											BgL_test2636z00_6133 = ((bool_t) 0);
										}
									if (BgL_test2636z00_6133)
										{	/* Eval/evmeaning.scm 251 */
											VECTOR_SET(BgL_codez00_114, ((long) 0), BINT(((long) 8)));
											VECTOR_SET(BgL_codez00_114, ((long) 2),
												BgL_globalz00_2097);
											VECTOR_SET(BgL_codez00_114, ((long) 3),
												BgL_valuez00_2095);
											return BGl_evmeaningz00zz__evmeaningz00(BgL_codez00_114,
												BgL_stackz00_115, BgL_denvz00_116);
										}
									else
										{	/* Eval/evmeaning.scm 251 */
											return
												BGl_evmeaningzd2unboundzd2zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_114, ((long) 1)), BgL_namez00_2094,
												BgL_modz00_2096);
		}}}}}}}}

	}



/* evmeaning-bounce-7 */
	obj_t BGl_evmeaningzd2bouncezd27z00zz__evmeaningz00(obj_t BgL_codez00_117,
		obj_t BgL_stackz00_118, obj_t BgL_denvz00_119)
	{
		{	/* Eval/evmeaning.scm 922 */
			{	/* Eval/evmeaning.scm 228 */
				obj_t BgL_namez00_2100;

				BgL_namez00_2100 = VECTOR_REF(BgL_codez00_117, ((long) 2));
				{	/* Eval/evmeaning.scm 228 */
					obj_t BgL_modz00_2101;

					BgL_modz00_2101 = VECTOR_REF(BgL_codez00_117, ((long) 3));
					{	/* Eval/evmeaning.scm 229 */
						obj_t BgL_globalz00_2102;

						BgL_globalz00_2102 =
							BGl_evmodulezd2findzd2globalz00zz__evmodulez00(BgL_modz00_2101,
							BgL_namez00_2100);
						{	/* Eval/evmeaning.scm 230 */

							{	/* Eval/evmeaning.scm 231 */
								bool_t BgL_test2638z00_6148;

								if (VECTORP(BgL_globalz00_2102))
									{	/* Eval/evmeaning.scm 231 */
										BgL_test2638z00_6148 =
											(VECTOR_LENGTH(BgL_globalz00_2102) == ((long) 5));
									}
								else
									{	/* Eval/evmeaning.scm 231 */
										BgL_test2638z00_6148 = ((bool_t) 0);
									}
								if (BgL_test2638z00_6148)
									{	/* Eval/evmeaning.scm 231 */
										VECTOR_SET(BgL_codez00_117, ((long) 0), BINT(((long) 6)));
										VECTOR_SET(BgL_codez00_117, ((long) 2), BgL_globalz00_2102);
										return VECTOR_REF(BgL_globalz00_2102, ((long) 2));
									}
								else
									{	/* Eval/evmeaning.scm 231 */
										return
											BGl_evmeaningzd2unboundzd2zz__evmeaningz00(VECTOR_REF
											(BgL_codez00_117, ((long) 1)), BgL_namez00_2100,
											BgL_modz00_2101);
		}}}}}}}

	}



/* update-eval-global! */
	obj_t BGl_updatezd2evalzd2globalz12z12zz__evmeaningz00(obj_t BgL_codez00_142,
		obj_t BgL_varz00_143, obj_t BgL_valz00_144)
	{
		{	/* Eval/evmeaning.scm 963 */
			{	/* Eval/evmeaning.scm 964 */
				int BgL_aux1113z00_2124;

				{	/* Eval/evmeaning.scm 964 */
					int BgL_res2381z00_3541;

					BgL_res2381z00_3541 =
						CINT(VECTOR_REF(((obj_t) BgL_varz00_143), ((long) 0)));
					BgL_aux1113z00_2124 = BgL_res2381z00_3541;
				}
				switch ((long) (BgL_aux1113z00_2124))
					{
					case ((long) 0):

						{	/* Eval/evmeaning.scm 966 */
							obj_t BgL_arg1765z00_2126;
							obj_t BgL_arg1766z00_2127;

							BgL_arg1765z00_2126 = VECTOR_REF(BgL_codez00_142, ((long) 1));
							BgL_arg1766z00_2127 =
								VECTOR_REF(((obj_t) BgL_varz00_143), ((long) 1));
							return
								BGl_everrorz00zz__everrorz00(BgL_arg1765z00_2126,
								BGl_string2507z00zz__evmeaningz00,
								BGl_string2508z00zz__evmeaningz00, BgL_arg1766z00_2127);
						}
						break;
					case ((long) 1):

						{	/* Eval/evmeaning.scm 968 */
							obj_t BgL_arg1768z00_2128;

							BgL_arg1768z00_2128 =
								VECTOR_REF(((obj_t) BgL_varz00_143), ((long) 2));
							return
								__EVMEANING_ADDRESS_SET(BgL_arg1768z00_2128, BgL_valz00_144);
						}
						break;
					case ((long) 2):

						return
							VECTOR_SET(((obj_t) BgL_varz00_143), ((long) 2), BgL_valz00_144);
						break;
					case ((long) 3):

						return
							VECTOR_SET(((obj_t) BgL_varz00_143), ((long) 2), BgL_valz00_144);
						break;
					case ((long) 4):

						return
							VECTOR_SET(((obj_t) BgL_varz00_143), ((long) 2), BgL_valz00_144);
						break;
					case ((long) 5):

						{	/* Eval/evmeaning.scm 976 */
							obj_t BgL_arg1769z00_2129;
							obj_t BgL_arg1770z00_2130;

							BgL_arg1769z00_2129 = VECTOR_REF(BgL_codez00_142, ((long) 1));
							BgL_arg1770z00_2130 =
								VECTOR_REF(((obj_t) BgL_varz00_143), ((long) 1));
							return
								BGl_everrorz00zz__everrorz00(BgL_arg1769z00_2129,
								BGl_string2507z00zz__evmeaningz00,
								BGl_string2508z00zz__evmeaningz00, BgL_arg1770z00_2130);
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* evmeaning-funcall-0 */
	obj_t BGl_evmeaningzd2funcallzd20z00zz__evmeaningz00(obj_t BgL_codez00_145,
		obj_t BgL_stackz00_146, obj_t BgL_denvz00_147, obj_t BgL_funz00_148)
	{
		{	/* Eval/evmeaning.scm 981 */
			{	/* Eval/evmeaning.scm 982 */
				obj_t BgL_namez00_2131;
				obj_t BgL_locz00_2132;

				BgL_namez00_2131 = VECTOR_REF(BgL_codez00_145, ((long) 2));
				BgL_locz00_2132 = VECTOR_REF(BgL_codez00_145, ((long) 1));
				BGL_ENV_SET_TRACE_LOCATION(BgL_denvz00_147, BgL_locz00_2132);
				if (PROCEDUREP(BgL_funz00_148))
					{	/* Eval/evmeaning.scm 986 */
						if (PROCEDURE_CORRECT_ARITYP(BgL_funz00_148, (int) (((long) 0))))
							{	/* Eval/evmeaning.scm 988 */
								return eval_funcall_0(BgL_funz00_148);
							}
						else
							{	/* Eval/evmeaning.scm 988 */
								return
									BGl_evarityzd2errorzd2zz__everrorz00(BgL_locz00_2132,
									BgL_namez00_2131, (int) (((long) 0)),
									PROCEDURE_ARITY(BgL_funz00_148));
					}}
				else
					{	/* Eval/evmeaning.scm 986 */
						return
							BGl_everrorz00zz__everrorz00(BgL_locz00_2132,
							BGl_string2483z00zz__evmeaningz00, BgL_namez00_2131,
							BGl_string2489z00zz__evmeaningz00);
					}
			}
		}

	}



/* evmeaning-funcall-1 */
	obj_t BGl_evmeaningzd2funcallzd21z00zz__evmeaningz00(obj_t BgL_codez00_149,
		obj_t BgL_stackz00_150, obj_t BgL_denvz00_151, obj_t BgL_funz00_152)
	{
		{	/* Eval/evmeaning.scm 996 */
			{	/* Eval/evmeaning.scm 997 */
				obj_t BgL_namez00_2136;

				BgL_namez00_2136 = VECTOR_REF(BgL_codez00_149, ((long) 2));
				{	/* Eval/evmeaning.scm 997 */
					obj_t BgL_locz00_2137;

					BgL_locz00_2137 = VECTOR_REF(BgL_codez00_149, ((long) 1));
					{	/* Eval/evmeaning.scm 998 */
						obj_t BgL_a0z00_2138;

						BgL_a0z00_2138 =
							BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_149,
								((long) 4)), BgL_stackz00_150, BgL_denvz00_151);
						{	/* Eval/evmeaning.scm 999 */

							BGL_ENV_SET_TRACE_LOCATION(BgL_denvz00_151, BgL_locz00_2137);
							if (PROCEDUREP(BgL_funz00_152))
								{	/* Eval/evmeaning.scm 1002 */
									if (PROCEDURE_CORRECT_ARITYP(BgL_funz00_152,
											(int) (((long) 1))))
										{	/* Eval/evmeaning.scm 1004 */
											return eval_funcall_1(BgL_funz00_152, BgL_a0z00_2138);
										}
									else
										{	/* Eval/evmeaning.scm 1004 */
											return
												BGl_evarityzd2errorzd2zz__everrorz00(BgL_locz00_2137,
												BgL_namez00_2136, (int) (((long) 1)),
												PROCEDURE_ARITY(BgL_funz00_152));
								}}
							else
								{	/* Eval/evmeaning.scm 1002 */
									return
										BGl_everrorz00zz__everrorz00(BgL_locz00_2137,
										BGl_string2483z00zz__evmeaningz00,
										BGl_string2489z00zz__evmeaningz00, BgL_namez00_2136);
								}
						}
					}
				}
			}
		}

	}



/* evmeaning-funcall-2 */
	obj_t BGl_evmeaningzd2funcallzd22z00zz__evmeaningz00(obj_t BgL_codez00_153,
		obj_t BgL_stackz00_154, obj_t BgL_denvz00_155, obj_t BgL_funz00_156)
	{
		{	/* Eval/evmeaning.scm 1012 */
			{	/* Eval/evmeaning.scm 1013 */
				obj_t BgL_namez00_2143;

				BgL_namez00_2143 = VECTOR_REF(BgL_codez00_153, ((long) 2));
				{	/* Eval/evmeaning.scm 1013 */
					obj_t BgL_locz00_2144;

					BgL_locz00_2144 = VECTOR_REF(BgL_codez00_153, ((long) 1));
					{	/* Eval/evmeaning.scm 1014 */
						obj_t BgL_a0z00_2145;

						BgL_a0z00_2145 =
							BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_153,
								((long) 4)), BgL_stackz00_154, BgL_denvz00_155);
						{	/* Eval/evmeaning.scm 1015 */
							obj_t BgL_a1z00_2146;

							BgL_a1z00_2146 =
								BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_153,
									((long) 5)), BgL_stackz00_154, BgL_denvz00_155);
							{	/* Eval/evmeaning.scm 1016 */

								BGL_ENV_SET_TRACE_LOCATION(BgL_denvz00_155, BgL_locz00_2144);
								if (PROCEDUREP(BgL_funz00_156))
									{	/* Eval/evmeaning.scm 1019 */
										if (PROCEDURE_CORRECT_ARITYP(BgL_funz00_156,
												(int) (((long) 2))))
											{	/* Eval/evmeaning.scm 1021 */
												return
													eval_funcall_2(BgL_funz00_156, BgL_a0z00_2145,
													BgL_a1z00_2146);
											}
										else
											{	/* Eval/evmeaning.scm 1021 */
												return
													BGl_evarityzd2errorzd2zz__everrorz00(BgL_locz00_2144,
													BgL_namez00_2143, (int) (((long) 2)),
													PROCEDURE_ARITY(BgL_funz00_156));
									}}
								else
									{	/* Eval/evmeaning.scm 1019 */
										return
											BGl_everrorz00zz__everrorz00(BgL_locz00_2144,
											BGl_string2483z00zz__evmeaningz00,
											BGl_string2489z00zz__evmeaningz00, BgL_namez00_2143);
									}
							}
						}
					}
				}
			}
		}

	}



/* evmeaning-funcall-3 */
	obj_t BGl_evmeaningzd2funcallzd23z00zz__evmeaningz00(obj_t BgL_codez00_157,
		obj_t BgL_stackz00_158, obj_t BgL_denvz00_159, obj_t BgL_funz00_160)
	{
		{	/* Eval/evmeaning.scm 1029 */
			{	/* Eval/evmeaning.scm 1030 */
				obj_t BgL_namez00_2152;

				BgL_namez00_2152 = VECTOR_REF(BgL_codez00_157, ((long) 2));
				{	/* Eval/evmeaning.scm 1030 */
					obj_t BgL_locz00_2153;

					BgL_locz00_2153 = VECTOR_REF(BgL_codez00_157, ((long) 1));
					{	/* Eval/evmeaning.scm 1031 */
						obj_t BgL_a0z00_2154;

						BgL_a0z00_2154 =
							BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_157,
								((long) 4)), BgL_stackz00_158, BgL_denvz00_159);
						{	/* Eval/evmeaning.scm 1032 */
							obj_t BgL_a1z00_2155;

							BgL_a1z00_2155 =
								BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_157,
									((long) 5)), BgL_stackz00_158, BgL_denvz00_159);
							{	/* Eval/evmeaning.scm 1033 */
								obj_t BgL_a2z00_2156;

								BgL_a2z00_2156 =
									BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_157,
										((long) 6)), BgL_stackz00_158, BgL_denvz00_159);
								{	/* Eval/evmeaning.scm 1034 */

									BGL_ENV_SET_TRACE_LOCATION(BgL_denvz00_159, BgL_locz00_2153);
									if (PROCEDUREP(BgL_funz00_160))
										{	/* Eval/evmeaning.scm 1037 */
											if (PROCEDURE_CORRECT_ARITYP(BgL_funz00_160,
													(int) (((long) 3))))
												{	/* Eval/evmeaning.scm 1039 */
													return
														eval_funcall_3(BgL_funz00_160, BgL_a0z00_2154,
														BgL_a1z00_2155, BgL_a2z00_2156);
												}
											else
												{	/* Eval/evmeaning.scm 1039 */
													return
														BGl_evarityzd2errorzd2zz__everrorz00
														(BgL_locz00_2153, BgL_namez00_2152,
														(int) (((long) 3)),
														PROCEDURE_ARITY(BgL_funz00_160));
										}}
									else
										{	/* Eval/evmeaning.scm 1037 */
											return
												BGl_everrorz00zz__everrorz00(BgL_locz00_2153,
												BGl_string2483z00zz__evmeaningz00,
												BGl_string2489z00zz__evmeaningz00, BgL_namez00_2152);
										}
								}
							}
						}
					}
				}
			}
		}

	}



/* evmeaning-funcall-4 */
	obj_t BGl_evmeaningzd2funcallzd24z00zz__evmeaningz00(obj_t BgL_codez00_161,
		obj_t BgL_stackz00_162, obj_t BgL_denvz00_163, obj_t BgL_funz00_164)
	{
		{	/* Eval/evmeaning.scm 1047 */
			{	/* Eval/evmeaning.scm 1048 */
				obj_t BgL_namez00_2163;

				BgL_namez00_2163 = VECTOR_REF(BgL_codez00_161, ((long) 2));
				{	/* Eval/evmeaning.scm 1048 */
					obj_t BgL_locz00_2164;

					BgL_locz00_2164 = VECTOR_REF(BgL_codez00_161, ((long) 1));
					{	/* Eval/evmeaning.scm 1049 */
						obj_t BgL_a0z00_2165;

						BgL_a0z00_2165 =
							BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_161,
								((long) 4)), BgL_stackz00_162, BgL_denvz00_163);
						{	/* Eval/evmeaning.scm 1050 */
							obj_t BgL_a1z00_2166;

							BgL_a1z00_2166 =
								BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_161,
									((long) 5)), BgL_stackz00_162, BgL_denvz00_163);
							{	/* Eval/evmeaning.scm 1051 */
								obj_t BgL_a2z00_2167;

								BgL_a2z00_2167 =
									BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_161,
										((long) 6)), BgL_stackz00_162, BgL_denvz00_163);
								{	/* Eval/evmeaning.scm 1052 */
									obj_t BgL_a3z00_2168;

									BgL_a3z00_2168 =
										BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_161,
											((long) 7)), BgL_stackz00_162, BgL_denvz00_163);
									{	/* Eval/evmeaning.scm 1053 */

										BGL_ENV_SET_TRACE_LOCATION(BgL_denvz00_163,
											BgL_locz00_2164);
										if (PROCEDUREP(BgL_funz00_164))
											{	/* Eval/evmeaning.scm 1056 */
												if (PROCEDURE_CORRECT_ARITYP(BgL_funz00_164,
														(int) (((long) 4))))
													{	/* Eval/evmeaning.scm 1058 */
														return
															eval_funcall_4(BgL_funz00_164, BgL_a0z00_2165,
															BgL_a1z00_2166, BgL_a2z00_2167, BgL_a3z00_2168);
													}
												else
													{	/* Eval/evmeaning.scm 1058 */
														return
															BGl_evarityzd2errorzd2zz__everrorz00
															(BgL_locz00_2164, BgL_namez00_2163,
															(int) (((long) 4)),
															PROCEDURE_ARITY(BgL_funz00_164));
											}}
										else
											{	/* Eval/evmeaning.scm 1056 */
												return
													BGl_everrorz00zz__everrorz00(BgL_locz00_2164,
													BGl_string2483z00zz__evmeaningz00,
													BGl_string2489z00zz__evmeaningz00, BgL_namez00_2163);
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



/* evmeaning-tailcall-0-stack */
	obj_t BGl_evmeaningzd2tailcallzd20zd2stackzd2zz__evmeaningz00(obj_t
		BgL_codez00_165, obj_t BgL_stackz00_166, obj_t BgL_denvz00_167,
		obj_t BgL_funz00_168)
	{
		{	/* Eval/evmeaning.scm 1066 */
			{	/* Eval/evmeaning.scm 1067 */
				obj_t BgL_envdz00_2176;

				{	/* Eval/evmeaning.scm 952 */
					obj_t BgL_arg1762z00_3581;

					{	/* Eval/evmeaning.scm 952 */
						obj_t BgL_tmpz00_6266;

						BgL_tmpz00_6266 = ((obj_t) BgL_funz00_168);
						BgL_arg1762z00_3581 = PROCEDURE_ATTR(BgL_tmpz00_6266);
					}
					BgL_envdz00_2176 =
						STRUCT_REF(((obj_t) BgL_arg1762z00_3581), (int) (((long) 2)));
				}
				{	/* Eval/evmeaning.scm 1067 */
					obj_t BgL_arityz00_2177;

					{	/* Eval/evmeaning.scm 958 */
						obj_t BgL_arg1763z00_3584;

						{	/* Eval/evmeaning.scm 958 */
							obj_t BgL_tmpz00_6272;

							BgL_tmpz00_6272 = ((obj_t) BgL_funz00_168);
							BgL_arg1763z00_3584 = PROCEDURE_ATTR(BgL_tmpz00_6272);
						}
						BgL_arityz00_2177 =
							STRUCT_REF(((obj_t) BgL_arg1763z00_3584), (int) (((long) 0)));
					}
					{	/* Eval/evmeaning.scm 1068 */
						obj_t BgL_locz00_2178;

						BgL_locz00_2178 = VECTOR_REF(BgL_codez00_165, ((long) 1));
						{	/* Eval/evmeaning.scm 1069 */

							{	/* Eval/evmeaning.scm 1070 */
								bool_t BgL_test2650z00_6279;

								{	/* Eval/evmeaning.scm 1070 */
									obj_t BgL_tmpz00_6280;

									BgL_tmpz00_6280 = VECTOR_REF(BgL_codez00_165, ((long) 2));
									BgL_test2650z00_6279 = SYMBOLP(BgL_tmpz00_6280);
								}
								if (BgL_test2650z00_6279)
									{	/* Eval/evmeaning.scm 1070 */
										{	/* Eval/evmeaning.scm 1071 */
											obj_t BgL_tmpz00_6283;

											BgL_tmpz00_6283 = VECTOR_REF(BgL_codez00_165, ((long) 2));
											BGL_ENV_SET_TRACE_NAME(BgL_denvz00_167, BgL_tmpz00_6283);
										}
										BGL_ENV_SET_TRACE_LOCATION(BgL_denvz00_167,
											BgL_locz00_2178);
									}
								else
									{	/* Eval/evmeaning.scm 1070 */
										BFALSE;
									}
							}
							{

								if (INTEGERP(BgL_arityz00_2177))
									{	/* Eval/evmeaning.scm 1073 */
										switch ((long) CINT(BgL_arityz00_2177))
											{
											case ((long) 0):

												return BgL_envdz00_2176;
												break;
											case ((long) -1):

												return MAKE_YOUNG_PAIR(BNIL, BgL_envdz00_2176);
												break;
											default:
											BgL_case_else1114z00_2183:
												return
													BGl_evarityzd2errorzd2zz__everrorz00(BgL_locz00_2178,
													VECTOR_REF(BgL_codez00_165, ((long) 2)),
													(int) (((long) 0)), CINT(BgL_arityz00_2177));
									}}
								else
									{	/* Eval/evmeaning.scm 1073 */
										goto BgL_case_else1114z00_2183;
									}
							}
						}
					}
				}
			}
		}

	}



/* evmeaning-tailcall-1-stack */
	obj_t BGl_evmeaningzd2tailcallzd21zd2stackzd2zz__evmeaningz00(obj_t
		BgL_codez00_169, obj_t BgL_stackz00_170, obj_t BgL_denvz00_171,
		obj_t BgL_funz00_172)
	{
		{	/* Eval/evmeaning.scm 1084 */
			{	/* Eval/evmeaning.scm 1085 */
				obj_t BgL_a0z00_2187;

				BgL_a0z00_2187 =
					BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_169,
						((long) 4)), BgL_stackz00_170, BgL_denvz00_171);
				{	/* Eval/evmeaning.scm 1086 */
					obj_t BgL_envdz00_2188;

					{	/* Eval/evmeaning.scm 952 */
						obj_t BgL_arg1762z00_3593;

						{	/* Eval/evmeaning.scm 952 */
							obj_t BgL_tmpz00_6298;

							BgL_tmpz00_6298 = ((obj_t) BgL_funz00_172);
							BgL_arg1762z00_3593 = PROCEDURE_ATTR(BgL_tmpz00_6298);
						}
						BgL_envdz00_2188 =
							STRUCT_REF(((obj_t) BgL_arg1762z00_3593), (int) (((long) 2)));
					}
					{	/* Eval/evmeaning.scm 1086 */
						obj_t BgL_arityz00_2189;

						{	/* Eval/evmeaning.scm 958 */
							obj_t BgL_arg1763z00_3596;

							{	/* Eval/evmeaning.scm 958 */
								obj_t BgL_tmpz00_6304;

								BgL_tmpz00_6304 = ((obj_t) BgL_funz00_172);
								BgL_arg1763z00_3596 = PROCEDURE_ATTR(BgL_tmpz00_6304);
							}
							BgL_arityz00_2189 =
								STRUCT_REF(((obj_t) BgL_arg1763z00_3596), (int) (((long) 0)));
						}
						{	/* Eval/evmeaning.scm 1087 */
							obj_t BgL_locz00_2190;

							BgL_locz00_2190 = VECTOR_REF(BgL_codez00_169, ((long) 1));
							{	/* Eval/evmeaning.scm 1088 */

								{	/* Eval/evmeaning.scm 1089 */
									bool_t BgL_test2652z00_6311;

									{	/* Eval/evmeaning.scm 1089 */
										obj_t BgL_tmpz00_6312;

										BgL_tmpz00_6312 = VECTOR_REF(BgL_codez00_169, ((long) 2));
										BgL_test2652z00_6311 = SYMBOLP(BgL_tmpz00_6312);
									}
									if (BgL_test2652z00_6311)
										{	/* Eval/evmeaning.scm 1089 */
											{	/* Eval/evmeaning.scm 1090 */
												obj_t BgL_tmpz00_6315;

												BgL_tmpz00_6315 =
													VECTOR_REF(BgL_codez00_169, ((long) 2));
												BGL_ENV_SET_TRACE_NAME(BgL_denvz00_171,
													BgL_tmpz00_6315);
											}
											BGL_ENV_SET_TRACE_LOCATION(BgL_denvz00_171,
												BgL_locz00_2190);
										}
									else
										{	/* Eval/evmeaning.scm 1089 */
											BFALSE;
										}
								}
								{

									if (INTEGERP(BgL_arityz00_2189))
										{	/* Eval/evmeaning.scm 1092 */
											switch ((long) CINT(BgL_arityz00_2189))
												{
												case ((long) 1):

													return
														MAKE_YOUNG_PAIR(BgL_a0z00_2187, BgL_envdz00_2188);
													break;
												case ((long) -1):

													{	/* Eval/evmeaning.scm 1096 */
														obj_t BgL_arg1810z00_2198;

														{	/* Eval/evmeaning.scm 1096 */
															obj_t BgL_list1811z00_2199;

															BgL_list1811z00_2199 =
																MAKE_YOUNG_PAIR(BgL_a0z00_2187, BNIL);
															BgL_arg1810z00_2198 = BgL_list1811z00_2199;
														}
														return
															MAKE_YOUNG_PAIR(BgL_arg1810z00_2198,
															BgL_envdz00_2188);
													}
													break;
												case ((long) -2):

													{	/* Eval/evmeaning.scm 1098 */
														obj_t BgL_arg1812z00_2200;

														BgL_arg1812z00_2200 =
															MAKE_YOUNG_PAIR(BNIL, BgL_envdz00_2188);
														return
															MAKE_YOUNG_PAIR(BgL_a0z00_2187,
															BgL_arg1812z00_2200);
													}
													break;
												default:
												BgL_case_else1116z00_2195:
													return
														BGl_evarityzd2errorzd2zz__everrorz00
														(BgL_locz00_2190, VECTOR_REF(BgL_codez00_169,
															((long) 2)), (int) (((long) 1)),
														CINT(BgL_arityz00_2189));
										}}
									else
										{	/* Eval/evmeaning.scm 1092 */
											goto BgL_case_else1116z00_2195;
										}
								}
							}
						}
					}
				}
			}
		}

	}



/* evmeaning-tailcall-2-stack */
	obj_t BGl_evmeaningzd2tailcallzd22zd2stackzd2zz__evmeaningz00(obj_t
		BgL_codez00_173, obj_t BgL_stackz00_174, obj_t BgL_denvz00_175,
		obj_t BgL_funz00_176)
	{
		{	/* Eval/evmeaning.scm 1105 */
			{	/* Eval/evmeaning.scm 1106 */
				obj_t BgL_a0z00_2203;

				BgL_a0z00_2203 =
					BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_173,
						((long) 4)), BgL_stackz00_174, BgL_denvz00_175);
				{	/* Eval/evmeaning.scm 1106 */
					obj_t BgL_a1z00_2204;

					BgL_a1z00_2204 =
						BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_173,
							((long) 5)), BgL_stackz00_174, BgL_denvz00_175);
					{	/* Eval/evmeaning.scm 1107 */

						{	/* Eval/evmeaning.scm 1108 */
							obj_t BgL_envdz00_2205;

							{	/* Eval/evmeaning.scm 952 */
								obj_t BgL_arg1762z00_3607;

								{	/* Eval/evmeaning.scm 952 */
									obj_t BgL_tmpz00_6336;

									BgL_tmpz00_6336 = ((obj_t) BgL_funz00_176);
									BgL_arg1762z00_3607 = PROCEDURE_ATTR(BgL_tmpz00_6336);
								}
								BgL_envdz00_2205 =
									STRUCT_REF(((obj_t) BgL_arg1762z00_3607), (int) (((long) 2)));
							}
							{	/* Eval/evmeaning.scm 1108 */
								obj_t BgL_arityz00_2206;

								{	/* Eval/evmeaning.scm 958 */
									obj_t BgL_arg1763z00_3610;

									{	/* Eval/evmeaning.scm 958 */
										obj_t BgL_tmpz00_6342;

										BgL_tmpz00_6342 = ((obj_t) BgL_funz00_176);
										BgL_arg1763z00_3610 = PROCEDURE_ATTR(BgL_tmpz00_6342);
									}
									BgL_arityz00_2206 =
										STRUCT_REF(
										((obj_t) BgL_arg1763z00_3610), (int) (((long) 0)));
								}
								{	/* Eval/evmeaning.scm 1109 */
									obj_t BgL_locz00_2207;

									BgL_locz00_2207 = VECTOR_REF(BgL_codez00_173, ((long) 1));
									{	/* Eval/evmeaning.scm 1110 */

										{	/* Eval/evmeaning.scm 1111 */
											bool_t BgL_test2654z00_6349;

											{	/* Eval/evmeaning.scm 1111 */
												obj_t BgL_tmpz00_6350;

												BgL_tmpz00_6350 =
													VECTOR_REF(BgL_codez00_173, ((long) 2));
												BgL_test2654z00_6349 = SYMBOLP(BgL_tmpz00_6350);
											}
											if (BgL_test2654z00_6349)
												{	/* Eval/evmeaning.scm 1111 */
													{	/* Eval/evmeaning.scm 1112 */
														obj_t BgL_tmpz00_6353;

														BgL_tmpz00_6353 =
															VECTOR_REF(BgL_codez00_173, ((long) 2));
														BGL_ENV_SET_TRACE_NAME(BgL_denvz00_175,
															BgL_tmpz00_6353);
													}
													BGL_ENV_SET_TRACE_LOCATION(BgL_denvz00_175,
														BgL_locz00_2207);
												}
											else
												{	/* Eval/evmeaning.scm 1111 */
													BFALSE;
												}
										}
										{

											if (INTEGERP(BgL_arityz00_2206))
												{	/* Eval/evmeaning.scm 1114 */
													switch ((long) CINT(BgL_arityz00_2206))
														{
														case ((long) 2):

															{	/* Eval/evmeaning.scm 1116 */
																obj_t BgL_arg1820z00_2215;

																BgL_arg1820z00_2215 =
																	MAKE_YOUNG_PAIR(BgL_a1z00_2204,
																	BgL_envdz00_2205);
																return MAKE_YOUNG_PAIR(BgL_a0z00_2203,
																	BgL_arg1820z00_2215);
															}
															break;
														case ((long) -1):

															{	/* Eval/evmeaning.scm 1118 */
																obj_t BgL_arg1821z00_2216;

																{	/* Eval/evmeaning.scm 1118 */
																	obj_t BgL_list1822z00_2217;

																	{	/* Eval/evmeaning.scm 1118 */
																		obj_t BgL_arg1823z00_2218;

																		BgL_arg1823z00_2218 =
																			MAKE_YOUNG_PAIR(BgL_a1z00_2204, BNIL);
																		BgL_list1822z00_2217 =
																			MAKE_YOUNG_PAIR(BgL_a0z00_2203,
																			BgL_arg1823z00_2218);
																	}
																	BgL_arg1821z00_2216 = BgL_list1822z00_2217;
																}
																return
																	MAKE_YOUNG_PAIR(BgL_arg1821z00_2216,
																	BgL_envdz00_2205);
															}
															break;
														case ((long) -2):

															{	/* Eval/evmeaning.scm 1120 */
																obj_t BgL_arg1824z00_2219;

																{	/* Eval/evmeaning.scm 1120 */
																	obj_t BgL_arg1825z00_2220;

																	{	/* Eval/evmeaning.scm 1120 */
																		obj_t BgL_list1826z00_2221;

																		BgL_list1826z00_2221 =
																			MAKE_YOUNG_PAIR(BgL_a1z00_2204, BNIL);
																		BgL_arg1825z00_2220 = BgL_list1826z00_2221;
																	}
																	BgL_arg1824z00_2219 =
																		MAKE_YOUNG_PAIR(BgL_arg1825z00_2220,
																		BgL_envdz00_2205);
																}
																return
																	MAKE_YOUNG_PAIR(BgL_a0z00_2203,
																	BgL_arg1824z00_2219);
															}
															break;
														case ((long) -3):

															{	/* Eval/evmeaning.scm 1122 */
																obj_t BgL_arg1827z00_2222;

																{	/* Eval/evmeaning.scm 1122 */
																	obj_t BgL_arg1828z00_2223;

																	BgL_arg1828z00_2223 =
																		MAKE_YOUNG_PAIR(BNIL, BgL_envdz00_2205);
																	BgL_arg1827z00_2222 =
																		MAKE_YOUNG_PAIR(BgL_a1z00_2204,
																		BgL_arg1828z00_2223);
																}
																return
																	MAKE_YOUNG_PAIR(BgL_a0z00_2203,
																	BgL_arg1827z00_2222);
															}
															break;
														default:
														BgL_case_else1118z00_2212:
															return
																BGl_evarityzd2errorzd2zz__everrorz00
																(BgL_locz00_2207, VECTOR_REF(BgL_codez00_173,
																	((long) 2)), (int) (((long) 2)),
																CINT(BgL_arityz00_2206));
												}}
											else
												{	/* Eval/evmeaning.scm 1114 */
													goto BgL_case_else1118z00_2212;
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



/* evmeaning-tailcall-3-stack */
	obj_t BGl_evmeaningzd2tailcallzd23zd2stackzd2zz__evmeaningz00(obj_t
		BgL_codez00_177, obj_t BgL_stackz00_178, obj_t BgL_denvz00_179,
		obj_t BgL_funz00_180)
	{
		{	/* Eval/evmeaning.scm 1129 */
			{	/* Eval/evmeaning.scm 1130 */
				obj_t BgL_a0z00_2227;

				BgL_a0z00_2227 =
					BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_177,
						((long) 4)), BgL_stackz00_178, BgL_denvz00_179);
				{	/* Eval/evmeaning.scm 1130 */
					obj_t BgL_a1z00_2228;

					BgL_a1z00_2228 =
						BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_177,
							((long) 5)), BgL_stackz00_178, BgL_denvz00_179);
					{	/* Eval/evmeaning.scm 1131 */
						obj_t BgL_a2z00_2229;

						BgL_a2z00_2229 =
							BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_177,
								((long) 6)), BgL_stackz00_178, BgL_denvz00_179);
						{	/* Eval/evmeaning.scm 1132 */

							{	/* Eval/evmeaning.scm 1133 */
								obj_t BgL_envdz00_2230;

								{	/* Eval/evmeaning.scm 952 */
									obj_t BgL_arg1762z00_3623;

									{	/* Eval/evmeaning.scm 952 */
										obj_t BgL_tmpz00_6382;

										BgL_tmpz00_6382 = ((obj_t) BgL_funz00_180);
										BgL_arg1762z00_3623 = PROCEDURE_ATTR(BgL_tmpz00_6382);
									}
									BgL_envdz00_2230 =
										STRUCT_REF(
										((obj_t) BgL_arg1762z00_3623), (int) (((long) 2)));
								}
								{	/* Eval/evmeaning.scm 1133 */
									obj_t BgL_arityz00_2231;

									{	/* Eval/evmeaning.scm 958 */
										obj_t BgL_arg1763z00_3626;

										{	/* Eval/evmeaning.scm 958 */
											obj_t BgL_tmpz00_6388;

											BgL_tmpz00_6388 = ((obj_t) BgL_funz00_180);
											BgL_arg1763z00_3626 = PROCEDURE_ATTR(BgL_tmpz00_6388);
										}
										BgL_arityz00_2231 =
											STRUCT_REF(
											((obj_t) BgL_arg1763z00_3626), (int) (((long) 0)));
									}
									{	/* Eval/evmeaning.scm 1134 */
										obj_t BgL_locz00_2232;

										BgL_locz00_2232 = VECTOR_REF(BgL_codez00_177, ((long) 1));
										{	/* Eval/evmeaning.scm 1135 */

											{	/* Eval/evmeaning.scm 1136 */
												bool_t BgL_test2656z00_6395;

												{	/* Eval/evmeaning.scm 1136 */
													obj_t BgL_tmpz00_6396;

													BgL_tmpz00_6396 =
														VECTOR_REF(BgL_codez00_177, ((long) 2));
													BgL_test2656z00_6395 = SYMBOLP(BgL_tmpz00_6396);
												}
												if (BgL_test2656z00_6395)
													{	/* Eval/evmeaning.scm 1136 */
														{	/* Eval/evmeaning.scm 1137 */
															obj_t BgL_tmpz00_6399;

															BgL_tmpz00_6399 =
																VECTOR_REF(BgL_codez00_177, ((long) 2));
															BGL_ENV_SET_TRACE_NAME(BgL_denvz00_179,
																BgL_tmpz00_6399);
														}
														BGL_ENV_SET_TRACE_LOCATION(BgL_denvz00_179,
															BgL_locz00_2232);
													}
												else
													{	/* Eval/evmeaning.scm 1136 */
														BFALSE;
													}
											}
											{

												if (INTEGERP(BgL_arityz00_2231))
													{	/* Eval/evmeaning.scm 1139 */
														switch ((long) CINT(BgL_arityz00_2231))
															{
															case ((long) 3):

																{	/* Eval/evmeaning.scm 1141 */
																	obj_t BgL_arg1838z00_2240;

																	{	/* Eval/evmeaning.scm 1141 */
																		obj_t BgL_arg1840z00_2241;

																		BgL_arg1840z00_2241 =
																			MAKE_YOUNG_PAIR(BgL_a2z00_2229,
																			BgL_envdz00_2230);
																		BgL_arg1838z00_2240 =
																			MAKE_YOUNG_PAIR(BgL_a1z00_2228,
																			BgL_arg1840z00_2241);
																	}
																	return
																		MAKE_YOUNG_PAIR(BgL_a0z00_2227,
																		BgL_arg1838z00_2240);
																}
																break;
															case ((long) -1):

																{	/* Eval/evmeaning.scm 1143 */
																	obj_t BgL_arg1841z00_2242;

																	{	/* Eval/evmeaning.scm 1143 */
																		obj_t BgL_list1842z00_2243;

																		{	/* Eval/evmeaning.scm 1143 */
																			obj_t BgL_arg1845z00_2244;

																			{	/* Eval/evmeaning.scm 1143 */
																				obj_t BgL_arg1846z00_2245;

																				BgL_arg1846z00_2245 =
																					MAKE_YOUNG_PAIR(BgL_a2z00_2229, BNIL);
																				BgL_arg1845z00_2244 =
																					MAKE_YOUNG_PAIR(BgL_a1z00_2228,
																					BgL_arg1846z00_2245);
																			}
																			BgL_list1842z00_2243 =
																				MAKE_YOUNG_PAIR(BgL_a0z00_2227,
																				BgL_arg1845z00_2244);
																		}
																		BgL_arg1841z00_2242 = BgL_list1842z00_2243;
																	}
																	return
																		MAKE_YOUNG_PAIR(BgL_arg1841z00_2242,
																		BgL_envdz00_2230);
																}
																break;
															case ((long) -2):

																{	/* Eval/evmeaning.scm 1145 */
																	obj_t BgL_arg1847z00_2246;

																	{	/* Eval/evmeaning.scm 1145 */
																		obj_t BgL_arg1848z00_2247;

																		{	/* Eval/evmeaning.scm 1145 */
																			obj_t BgL_list1849z00_2248;

																			{	/* Eval/evmeaning.scm 1145 */
																				obj_t BgL_arg1850z00_2249;

																				BgL_arg1850z00_2249 =
																					MAKE_YOUNG_PAIR(BgL_a2z00_2229, BNIL);
																				BgL_list1849z00_2248 =
																					MAKE_YOUNG_PAIR(BgL_a1z00_2228,
																					BgL_arg1850z00_2249);
																			}
																			BgL_arg1848z00_2247 =
																				BgL_list1849z00_2248;
																		}
																		BgL_arg1847z00_2246 =
																			MAKE_YOUNG_PAIR(BgL_arg1848z00_2247,
																			BgL_envdz00_2230);
																	}
																	return
																		MAKE_YOUNG_PAIR(BgL_a0z00_2227,
																		BgL_arg1847z00_2246);
																}
																break;
															case ((long) -3):

																{	/* Eval/evmeaning.scm 1147 */
																	obj_t BgL_arg1851z00_2250;

																	{	/* Eval/evmeaning.scm 1147 */
																		obj_t BgL_arg1852z00_2251;

																		{	/* Eval/evmeaning.scm 1147 */
																			obj_t BgL_arg1853z00_2252;

																			{	/* Eval/evmeaning.scm 1147 */
																				obj_t BgL_list1854z00_2253;

																				BgL_list1854z00_2253 =
																					MAKE_YOUNG_PAIR(BgL_a2z00_2229, BNIL);
																				BgL_arg1853z00_2252 =
																					BgL_list1854z00_2253;
																			}
																			BgL_arg1852z00_2251 =
																				MAKE_YOUNG_PAIR(BgL_arg1853z00_2252,
																				BgL_envdz00_2230);
																		}
																		BgL_arg1851z00_2250 =
																			MAKE_YOUNG_PAIR(BgL_a1z00_2228,
																			BgL_arg1852z00_2251);
																	}
																	return
																		MAKE_YOUNG_PAIR(BgL_a0z00_2227,
																		BgL_arg1851z00_2250);
																}
																break;
															case ((long) -4):

																{	/* Eval/evmeaning.scm 1149 */
																	obj_t BgL_arg1855z00_2254;

																	{	/* Eval/evmeaning.scm 1149 */
																		obj_t BgL_arg1856z00_2255;

																		{	/* Eval/evmeaning.scm 1149 */
																			obj_t BgL_arg1857z00_2256;

																			BgL_arg1857z00_2256 =
																				MAKE_YOUNG_PAIR(BNIL, BgL_envdz00_2230);
																			BgL_arg1856z00_2255 =
																				MAKE_YOUNG_PAIR(BgL_a2z00_2229,
																				BgL_arg1857z00_2256);
																		}
																		BgL_arg1855z00_2254 =
																			MAKE_YOUNG_PAIR(BgL_a1z00_2228,
																			BgL_arg1856z00_2255);
																	}
																	return
																		MAKE_YOUNG_PAIR(BgL_a0z00_2227,
																		BgL_arg1855z00_2254);
																}
																break;
															default:
															BgL_case_else1120z00_2237:
																return
																	BGl_evarityzd2errorzd2zz__everrorz00
																	(BgL_locz00_2232, VECTOR_REF(BgL_codez00_177,
																		((long) 2)), (int) (((long) 3)),
																	CINT(BgL_arityz00_2231));
													}}
												else
													{	/* Eval/evmeaning.scm 1139 */
														goto BgL_case_else1120z00_2237;
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



/* evmeaning-tailcall-4-stack */
	obj_t BGl_evmeaningzd2tailcallzd24zd2stackzd2zz__evmeaningz00(obj_t
		BgL_codez00_181, obj_t BgL_stackz00_182, obj_t BgL_denvz00_183,
		obj_t BgL_funz00_184)
	{
		{	/* Eval/evmeaning.scm 1156 */
			{	/* Eval/evmeaning.scm 1157 */
				obj_t BgL_a0z00_2261;

				BgL_a0z00_2261 =
					BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_181,
						((long) 4)), BgL_stackz00_182, BgL_denvz00_183);
				{	/* Eval/evmeaning.scm 1157 */
					obj_t BgL_a1z00_2262;

					BgL_a1z00_2262 =
						BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_181,
							((long) 5)), BgL_stackz00_182, BgL_denvz00_183);
					{	/* Eval/evmeaning.scm 1158 */
						obj_t BgL_a2z00_2263;

						BgL_a2z00_2263 =
							BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_181,
								((long) 6)), BgL_stackz00_182, BgL_denvz00_183);
						{	/* Eval/evmeaning.scm 1159 */
							obj_t BgL_a3z00_2264;

							BgL_a3z00_2264 =
								BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_181,
									((long) 7)), BgL_stackz00_182, BgL_denvz00_183);
							{	/* Eval/evmeaning.scm 1160 */

								{	/* Eval/evmeaning.scm 1161 */
									obj_t BgL_envdz00_2265;

									{	/* Eval/evmeaning.scm 952 */
										obj_t BgL_arg1762z00_3641;

										{	/* Eval/evmeaning.scm 952 */
											obj_t BgL_tmpz00_6438;

											BgL_tmpz00_6438 = ((obj_t) BgL_funz00_184);
											BgL_arg1762z00_3641 = PROCEDURE_ATTR(BgL_tmpz00_6438);
										}
										BgL_envdz00_2265 =
											STRUCT_REF(
											((obj_t) BgL_arg1762z00_3641), (int) (((long) 2)));
									}
									{	/* Eval/evmeaning.scm 1161 */
										obj_t BgL_arityz00_2266;

										{	/* Eval/evmeaning.scm 958 */
											obj_t BgL_arg1763z00_3644;

											{	/* Eval/evmeaning.scm 958 */
												obj_t BgL_tmpz00_6444;

												BgL_tmpz00_6444 = ((obj_t) BgL_funz00_184);
												BgL_arg1763z00_3644 = PROCEDURE_ATTR(BgL_tmpz00_6444);
											}
											BgL_arityz00_2266 =
												STRUCT_REF(
												((obj_t) BgL_arg1763z00_3644), (int) (((long) 0)));
										}
										{	/* Eval/evmeaning.scm 1162 */
											obj_t BgL_locz00_2267;

											BgL_locz00_2267 = VECTOR_REF(BgL_codez00_181, ((long) 1));
											{	/* Eval/evmeaning.scm 1163 */

												{	/* Eval/evmeaning.scm 1164 */
													bool_t BgL_test2658z00_6451;

													{	/* Eval/evmeaning.scm 1164 */
														obj_t BgL_tmpz00_6452;

														BgL_tmpz00_6452 =
															VECTOR_REF(BgL_codez00_181, ((long) 2));
														BgL_test2658z00_6451 = SYMBOLP(BgL_tmpz00_6452);
													}
													if (BgL_test2658z00_6451)
														{	/* Eval/evmeaning.scm 1164 */
															{	/* Eval/evmeaning.scm 1165 */
																obj_t BgL_tmpz00_6455;

																BgL_tmpz00_6455 =
																	VECTOR_REF(BgL_codez00_181, ((long) 2));
																BGL_ENV_SET_TRACE_NAME(BgL_denvz00_183,
																	BgL_tmpz00_6455);
															}
															BGL_ENV_SET_TRACE_LOCATION(BgL_denvz00_183,
																BgL_locz00_2267);
														}
													else
														{	/* Eval/evmeaning.scm 1164 */
															BFALSE;
														}
												}
												{

													if (INTEGERP(BgL_arityz00_2266))
														{	/* Eval/evmeaning.scm 1167 */
															switch ((long) CINT(BgL_arityz00_2266))
																{
																case ((long) 4):

																	{	/* Eval/evmeaning.scm 1169 */
																		obj_t BgL_arg1868z00_2275;

																		{	/* Eval/evmeaning.scm 1169 */
																			obj_t BgL_arg1870z00_2276;

																			{	/* Eval/evmeaning.scm 1169 */
																				obj_t BgL_arg1871z00_2277;

																				BgL_arg1871z00_2277 =
																					MAKE_YOUNG_PAIR(BgL_a3z00_2264,
																					BgL_envdz00_2265);
																				BgL_arg1870z00_2276 =
																					MAKE_YOUNG_PAIR(BgL_a2z00_2263,
																					BgL_arg1871z00_2277);
																			}
																			BgL_arg1868z00_2275 =
																				MAKE_YOUNG_PAIR(BgL_a1z00_2262,
																				BgL_arg1870z00_2276);
																		}
																		return
																			MAKE_YOUNG_PAIR(BgL_a0z00_2261,
																			BgL_arg1868z00_2275);
																	}
																	break;
																case ((long) -1):

																	{	/* Eval/evmeaning.scm 1171 */
																		obj_t BgL_arg1872z00_2278;

																		{	/* Eval/evmeaning.scm 1171 */
																			obj_t BgL_list1873z00_2279;

																			{	/* Eval/evmeaning.scm 1171 */
																				obj_t BgL_arg1874z00_2280;

																				{	/* Eval/evmeaning.scm 1171 */
																					obj_t BgL_arg1876z00_2281;

																					{	/* Eval/evmeaning.scm 1171 */
																						obj_t BgL_arg1877z00_2282;

																						BgL_arg1877z00_2282 =
																							MAKE_YOUNG_PAIR(BgL_a3z00_2264,
																							BNIL);
																						BgL_arg1876z00_2281 =
																							MAKE_YOUNG_PAIR(BgL_a2z00_2263,
																							BgL_arg1877z00_2282);
																					}
																					BgL_arg1874z00_2280 =
																						MAKE_YOUNG_PAIR(BgL_a1z00_2262,
																						BgL_arg1876z00_2281);
																				}
																				BgL_list1873z00_2279 =
																					MAKE_YOUNG_PAIR(BgL_a0z00_2261,
																					BgL_arg1874z00_2280);
																			}
																			BgL_arg1872z00_2278 =
																				BgL_list1873z00_2279;
																		}
																		return
																			MAKE_YOUNG_PAIR(BgL_arg1872z00_2278,
																			BgL_envdz00_2265);
																	}
																	break;
																case ((long) -2):

																	{	/* Eval/evmeaning.scm 1173 */
																		obj_t BgL_arg1878z00_2283;

																		{	/* Eval/evmeaning.scm 1173 */
																			obj_t BgL_arg1879z00_2284;

																			{	/* Eval/evmeaning.scm 1173 */
																				obj_t BgL_list1880z00_2285;

																				{	/* Eval/evmeaning.scm 1173 */
																					obj_t BgL_arg1881z00_2286;

																					{	/* Eval/evmeaning.scm 1173 */
																						obj_t BgL_arg1882z00_2287;

																						BgL_arg1882z00_2287 =
																							MAKE_YOUNG_PAIR(BgL_a3z00_2264,
																							BNIL);
																						BgL_arg1881z00_2286 =
																							MAKE_YOUNG_PAIR(BgL_a2z00_2263,
																							BgL_arg1882z00_2287);
																					}
																					BgL_list1880z00_2285 =
																						MAKE_YOUNG_PAIR(BgL_a1z00_2262,
																						BgL_arg1881z00_2286);
																				}
																				BgL_arg1879z00_2284 =
																					BgL_list1880z00_2285;
																			}
																			BgL_arg1878z00_2283 =
																				MAKE_YOUNG_PAIR(BgL_arg1879z00_2284,
																				BgL_envdz00_2265);
																		}
																		return
																			MAKE_YOUNG_PAIR(BgL_a0z00_2261,
																			BgL_arg1878z00_2283);
																	}
																	break;
																case ((long) -3):

																	{	/* Eval/evmeaning.scm 1175 */
																		obj_t BgL_arg1883z00_2288;

																		{	/* Eval/evmeaning.scm 1175 */
																			obj_t BgL_arg1884z00_2289;

																			{	/* Eval/evmeaning.scm 1175 */
																				obj_t BgL_arg1885z00_2290;

																				{	/* Eval/evmeaning.scm 1175 */
																					obj_t BgL_list1886z00_2291;

																					{	/* Eval/evmeaning.scm 1175 */
																						obj_t BgL_arg1887z00_2292;

																						BgL_arg1887z00_2292 =
																							MAKE_YOUNG_PAIR(BgL_a3z00_2264,
																							BNIL);
																						BgL_list1886z00_2291 =
																							MAKE_YOUNG_PAIR(BgL_a2z00_2263,
																							BgL_arg1887z00_2292);
																					}
																					BgL_arg1885z00_2290 =
																						BgL_list1886z00_2291;
																				}
																				BgL_arg1884z00_2289 =
																					MAKE_YOUNG_PAIR(BgL_arg1885z00_2290,
																					BgL_envdz00_2265);
																			}
																			BgL_arg1883z00_2288 =
																				MAKE_YOUNG_PAIR(BgL_a1z00_2262,
																				BgL_arg1884z00_2289);
																		}
																		return
																			MAKE_YOUNG_PAIR(BgL_a0z00_2261,
																			BgL_arg1883z00_2288);
																	}
																	break;
																case ((long) -4):

																	{	/* Eval/evmeaning.scm 1177 */
																		obj_t BgL_arg1888z00_2293;

																		{	/* Eval/evmeaning.scm 1177 */
																			obj_t BgL_arg1889z00_2294;

																			{	/* Eval/evmeaning.scm 1177 */
																				obj_t BgL_arg1891z00_2295;

																				{	/* Eval/evmeaning.scm 1177 */
																					obj_t BgL_arg1892z00_2296;

																					{	/* Eval/evmeaning.scm 1177 */
																						obj_t BgL_list1893z00_2297;

																						BgL_list1893z00_2297 =
																							MAKE_YOUNG_PAIR(BgL_a3z00_2264,
																							BNIL);
																						BgL_arg1892z00_2296 =
																							BgL_list1893z00_2297;
																					}
																					BgL_arg1891z00_2295 =
																						MAKE_YOUNG_PAIR(BgL_arg1892z00_2296,
																						BgL_envdz00_2265);
																				}
																				BgL_arg1889z00_2294 =
																					MAKE_YOUNG_PAIR(BgL_a2z00_2263,
																					BgL_arg1891z00_2295);
																			}
																			BgL_arg1888z00_2293 =
																				MAKE_YOUNG_PAIR(BgL_a1z00_2262,
																				BgL_arg1889z00_2294);
																		}
																		return
																			MAKE_YOUNG_PAIR(BgL_a0z00_2261,
																			BgL_arg1888z00_2293);
																	}
																	break;
																case ((long) -5):

																	{	/* Eval/evmeaning.scm 1179 */
																		obj_t BgL_arg1895z00_2298;

																		{	/* Eval/evmeaning.scm 1179 */
																			obj_t BgL_arg1896z00_2299;

																			{	/* Eval/evmeaning.scm 1179 */
																				obj_t BgL_arg1897z00_2300;

																				{	/* Eval/evmeaning.scm 1179 */
																					obj_t BgL_arg1898z00_2301;

																					BgL_arg1898z00_2301 =
																						MAKE_YOUNG_PAIR(BNIL,
																						BgL_envdz00_2265);
																					BgL_arg1897z00_2300 =
																						MAKE_YOUNG_PAIR(BgL_a3z00_2264,
																						BgL_arg1898z00_2301);
																				}
																				BgL_arg1896z00_2299 =
																					MAKE_YOUNG_PAIR(BgL_a2z00_2263,
																					BgL_arg1897z00_2300);
																			}
																			BgL_arg1895z00_2298 =
																				MAKE_YOUNG_PAIR(BgL_a1z00_2262,
																				BgL_arg1896z00_2299);
																		}
																		return
																			MAKE_YOUNG_PAIR(BgL_a0z00_2261,
																			BgL_arg1895z00_2298);
																	}
																	break;
																default:
																BgL_case_else1122z00_2272:
																	return
																		BGl_evarityzd2errorzd2zz__everrorz00
																		(BgL_locz00_2267,
																		VECTOR_REF(BgL_codez00_181, ((long) 2)),
																		(int) (((long) 4)),
																		CINT(BgL_arityz00_2266));
														}}
													else
														{	/* Eval/evmeaning.scm 1167 */
															goto BgL_case_else1122z00_2272;
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



/* evmeaning-make-traced-4procedure */
	obj_t BGl_evmeaningzd2makezd2tracedzd24procedurezd2zz__evmeaningz00(obj_t
		BgL_codez00_190, obj_t BgL_stackz00_191, obj_t BgL_denvz00_192)
	{
		{	/* Eval/evmeaning.scm 1198 */
			{	/* Eval/evmeaning.scm 1199 */
				obj_t BgL_bodyz00_2312;
				obj_t BgL_wherez00_2313;
				obj_t BgL_formalsz00_2314;
				obj_t BgL_locz00_2315;

				BgL_bodyz00_2312 = VECTOR_REF(BgL_codez00_190, ((long) 2));
				BgL_wherez00_2313 = VECTOR_REF(BgL_codez00_190, ((long) 3));
				BgL_formalsz00_2314 = VECTOR_REF(BgL_codez00_190, ((long) 4));
				BgL_locz00_2315 = VECTOR_REF(BgL_codez00_190, ((long) 1));
				if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_formalsz00_2314))
					{	/* Eval/evmeaning.scm 1204 */
						long BgL_lfz00_2317;

						BgL_lfz00_2317 = bgl_list_length(BgL_formalsz00_2314);
						{	/* Eval/evmeaning.scm 1207 */
							obj_t BgL_zc3z04anonymousza31913ze3z87_4214;

							BgL_zc3z04anonymousza31913ze3z87_4214 =
								MAKE_VA_PROCEDURE
								(BGl_z62zc3z04anonymousza31913ze3ze5zz__evmeaningz00,
								(int) (((long) -1)), (int) (((long) 6)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31913ze3z87_4214,
								(int) (((long) 0)), BgL_bodyz00_2312);
							PROCEDURE_SET(BgL_zc3z04anonymousza31913ze3z87_4214,
								(int) (((long) 1)), BgL_stackz00_191);
							PROCEDURE_SET(BgL_zc3z04anonymousza31913ze3z87_4214,
								(int) (((long) 2)), BgL_wherez00_2313);
							PROCEDURE_SET(BgL_zc3z04anonymousza31913ze3z87_4214,
								(int) (((long) 3)), BgL_locz00_2315);
							PROCEDURE_SET(BgL_zc3z04anonymousza31913ze3z87_4214,
								(int) (((long) 4)), BgL_codez00_190);
							PROCEDURE_SET(BgL_zc3z04anonymousza31913ze3z87_4214,
								(int) (((long) 5)), BINT(BgL_lfz00_2317));
							{	/* Eval/evmeaning.scm 939 */
								obj_t BgL_arg1760z00_3669;

								{	/* Eval/evmeaning.scm 927 */
									obj_t BgL_newz00_3670;

									BgL_newz00_3670 =
										create_struct(BGl_symbol2486z00zz__evmeaningz00,
										(int) (((long) 3)));
									{	/* Eval/evmeaning.scm 927 */
										int BgL_tmpz00_6521;

										BgL_tmpz00_6521 = (int) (((long) 2));
										STRUCT_SET(BgL_newz00_3670, BgL_tmpz00_6521,
											BgL_stackz00_191);
									}
									{	/* Eval/evmeaning.scm 927 */
										int BgL_tmpz00_6524;

										BgL_tmpz00_6524 = (int) (((long) 1));
										STRUCT_SET(BgL_newz00_3670, BgL_tmpz00_6524,
											BgL_bodyz00_2312);
									}
									{	/* Eval/evmeaning.scm 927 */
										obj_t BgL_auxz00_6529;
										int BgL_tmpz00_6527;

										BgL_auxz00_6529 = BINT(BgL_lfz00_2317);
										BgL_tmpz00_6527 = (int) (((long) 0));
										STRUCT_SET(BgL_newz00_3670, BgL_tmpz00_6527,
											BgL_auxz00_6529);
									}
									BgL_arg1760z00_3669 = BgL_newz00_3670;
								}
								PROCEDURE_ATTR_SET(BgL_zc3z04anonymousza31913ze3z87_4214,
									BgL_arg1760z00_3669);
								BgL_arg1760z00_3669;
							}
							return BgL_zc3z04anonymousza31913ze3z87_4214;
						}
					}
				else
					{	/* Eval/evmeaning.scm 1219 */
						long BgL_lfz00_2327;

						{
							obj_t BgL_formalsz00_2338;
							long BgL_numz00_2339;

							BgL_formalsz00_2338 = BgL_formalsz00_2314;
							BgL_numz00_2339 = ((long) -1);
						BgL_zc3z04anonymousza31916ze3z87_2340:
							if (PAIRP(BgL_formalsz00_2338))
								{
									long BgL_numz00_6537;
									obj_t BgL_formalsz00_6535;

									BgL_formalsz00_6535 = CDR(BgL_formalsz00_2338);
									BgL_numz00_6537 = (BgL_numz00_2339 - ((long) 1));
									BgL_numz00_2339 = BgL_numz00_6537;
									BgL_formalsz00_2338 = BgL_formalsz00_6535;
									goto BgL_zc3z04anonymousza31916ze3z87_2340;
								}
							else
								{	/* Eval/evmeaning.scm 1221 */
									BgL_lfz00_2327 = BgL_numz00_2339;
								}
						}
						{	/* Eval/evmeaning.scm 1226 */
							obj_t BgL_zc3z04anonymousza31915ze3z87_4215;

							BgL_zc3z04anonymousza31915ze3z87_4215 =
								MAKE_VA_PROCEDURE
								(BGl_z62zc3z04anonymousza31915ze3ze5zz__evmeaningz00,
								(int) (((long) -1)), (int) (((long) 6)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31915ze3z87_4215,
								(int) (((long) 0)), BgL_bodyz00_2312);
							PROCEDURE_SET(BgL_zc3z04anonymousza31915ze3z87_4215,
								(int) (((long) 1)), BgL_stackz00_191);
							PROCEDURE_SET(BgL_zc3z04anonymousza31915ze3z87_4215,
								(int) (((long) 2)), BgL_wherez00_2313);
							PROCEDURE_SET(BgL_zc3z04anonymousza31915ze3z87_4215,
								(int) (((long) 3)), BgL_locz00_2315);
							PROCEDURE_SET(BgL_zc3z04anonymousza31915ze3z87_4215,
								(int) (((long) 4)), BgL_codez00_190);
							PROCEDURE_SET(BgL_zc3z04anonymousza31915ze3z87_4215,
								(int) (((long) 5)), BINT(BgL_lfz00_2327));
							{	/* Eval/evmeaning.scm 939 */
								obj_t BgL_arg1760z00_3679;

								{	/* Eval/evmeaning.scm 927 */
									obj_t BgL_newz00_3680;

									BgL_newz00_3680 =
										create_struct(BGl_symbol2486z00zz__evmeaningz00,
										(int) (((long) 3)));
									{	/* Eval/evmeaning.scm 927 */
										int BgL_tmpz00_6557;

										BgL_tmpz00_6557 = (int) (((long) 2));
										STRUCT_SET(BgL_newz00_3680, BgL_tmpz00_6557,
											BgL_stackz00_191);
									}
									{	/* Eval/evmeaning.scm 927 */
										int BgL_tmpz00_6560;

										BgL_tmpz00_6560 = (int) (((long) 1));
										STRUCT_SET(BgL_newz00_3680, BgL_tmpz00_6560,
											BgL_bodyz00_2312);
									}
									{	/* Eval/evmeaning.scm 927 */
										obj_t BgL_auxz00_6565;
										int BgL_tmpz00_6563;

										BgL_auxz00_6565 = BINT(BgL_lfz00_2327);
										BgL_tmpz00_6563 = (int) (((long) 0));
										STRUCT_SET(BgL_newz00_3680, BgL_tmpz00_6563,
											BgL_auxz00_6565);
									}
									BgL_arg1760z00_3679 = BgL_newz00_3680;
								}
								PROCEDURE_ATTR_SET(BgL_zc3z04anonymousza31915ze3z87_4215,
									BgL_arg1760z00_3679);
								BgL_arg1760z00_3679;
							}
							return BgL_zc3z04anonymousza31915ze3z87_4215;
						}
					}
			}
		}

	}



/* &<@anonymous:1913> */
	obj_t BGl_z62zc3z04anonymousza31913ze3ze5zz__evmeaningz00(obj_t
		BgL_envz00_4216, obj_t BgL_xz00_4223)
	{
		{	/* Eval/evmeaning.scm 1206 */
			{	/* Eval/evmeaning.scm 1207 */
				obj_t BgL_bodyz00_4217;
				obj_t BgL_stackz00_4218;
				obj_t BgL_wherez00_4219;
				obj_t BgL_locz00_4220;
				obj_t BgL_codez00_4221;
				long BgL_lfz00_4222;

				BgL_bodyz00_4217 = PROCEDURE_REF(BgL_envz00_4216, (int) (((long) 0)));
				BgL_stackz00_4218 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4216, (int) (((long) 1))));
				BgL_wherez00_4219 = PROCEDURE_REF(BgL_envz00_4216, (int) (((long) 2)));
				BgL_locz00_4220 = PROCEDURE_REF(BgL_envz00_4216, (int) (((long) 3)));
				BgL_codez00_4221 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4216, (int) (((long) 4))));
				BgL_lfz00_4222 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_4216, (int) (((long) 5))));
				{	/* Eval/evmeaning.scm 1207 */
					obj_t BgL_z12sz12_4346;
					obj_t BgL_z12denvz12_4347;

					BgL_z12sz12_4346 = BgL_stackz00_4218;
					BgL_z12denvz12_4347 = BGL_CURRENT_DYNAMIC_ENV();
					{	/* Eval/evmeaning.scm 1210 */

						BGL_ENV_PUSH_TRACE(BgL_z12denvz12_4347, BgL_wherez00_4219,
							BgL_locz00_4220);
						{	/* Eval/evmeaning.scm 1212 */
							obj_t BgL_e2z00_4348;

							BgL_e2z00_4348 =
								BGl_evmeaningzd2pushzd2fxargsz00zz__evmeaningz00
								(BgL_wherez00_4219, BgL_codez00_4221, BgL_xz00_4223,
								BINT(BgL_lfz00_4222), BgL_z12sz12_4346);
							{	/* Eval/evmeaning.scm 1213 */
								obj_t BgL_resz00_4349;

								BgL_resz00_4349 =
									BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4217,
									BgL_e2z00_4348, BgL_z12denvz12_4347);
								BGL_ENV_POP_TRACE(BgL_z12denvz12_4347);
								return BgL_resz00_4349;
							}
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1915> */
	obj_t BGl_z62zc3z04anonymousza31915ze3ze5zz__evmeaningz00(obj_t
		BgL_envz00_4224, obj_t BgL_xz00_4231)
	{
		{	/* Eval/evmeaning.scm 1225 */
			{	/* Eval/evmeaning.scm 1226 */
				obj_t BgL_bodyz00_4225;
				obj_t BgL_stackz00_4226;
				obj_t BgL_wherez00_4227;
				obj_t BgL_locz00_4228;
				obj_t BgL_codez00_4229;
				long BgL_lfz00_4230;

				BgL_bodyz00_4225 = PROCEDURE_REF(BgL_envz00_4224, (int) (((long) 0)));
				BgL_stackz00_4226 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4224, (int) (((long) 1))));
				BgL_wherez00_4227 = PROCEDURE_REF(BgL_envz00_4224, (int) (((long) 2)));
				BgL_locz00_4228 = PROCEDURE_REF(BgL_envz00_4224, (int) (((long) 3)));
				BgL_codez00_4229 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4224, (int) (((long) 4))));
				BgL_lfz00_4230 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_4224, (int) (((long) 5))));
				{	/* Eval/evmeaning.scm 1226 */
					obj_t BgL_z12sz12_4350;
					obj_t BgL_z12denvz12_4351;

					BgL_z12sz12_4350 = BgL_stackz00_4226;
					BgL_z12denvz12_4351 = BGL_CURRENT_DYNAMIC_ENV();
					{	/* Eval/evmeaning.scm 1229 */

						BGL_ENV_PUSH_TRACE(BgL_z12denvz12_4351, BgL_wherez00_4227,
							BgL_locz00_4228);
						{	/* Eval/evmeaning.scm 1231 */
							obj_t BgL_e2z00_4352;

							BgL_e2z00_4352 =
								BGl_evmeaningzd2pushzd2vaargsz00zz__evmeaningz00
								(BgL_wherez00_4227, BgL_codez00_4229, BgL_xz00_4231,
								BINT(BgL_lfz00_4230), BgL_z12sz12_4350);
							{	/* Eval/evmeaning.scm 1232 */
								obj_t BgL_resz00_4353;

								BgL_resz00_4353 =
									BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4225,
									BgL_e2z00_4352, BgL_z12denvz12_4351);
								BGL_ENV_POP_TRACE(BgL_z12denvz12_4351);
								return BgL_resz00_4353;
							}
						}
					}
				}
			}
		}

	}



/* evmeaning-make-4procedure */
	obj_t BGl_evmeaningzd2makezd24procedurez00zz__evmeaningz00(obj_t
		BgL_codez00_193, obj_t BgL_stackz00_194, obj_t BgL_denvz00_195)
	{
		{	/* Eval/evmeaning.scm 1242 */
			{	/* Eval/evmeaning.scm 1243 */
				obj_t BgL_bodyz00_2345;
				obj_t BgL_formalsz00_2346;

				BgL_bodyz00_2345 = VECTOR_REF(BgL_codez00_193, ((long) 2));
				BgL_formalsz00_2346 = VECTOR_REF(BgL_codez00_193, ((long) 3));
				if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_formalsz00_2346))
					{	/* Eval/evmeaning.scm 1246 */
						long BgL_lfz00_2348;

						BgL_lfz00_2348 = bgl_list_length(BgL_formalsz00_2346);
						{	/* Eval/evmeaning.scm 1249 */
							obj_t BgL_zc3z04anonymousza31922ze3z87_4232;

							BgL_zc3z04anonymousza31922ze3z87_4232 =
								MAKE_VA_PROCEDURE
								(BGl_z62zc3z04anonymousza31922ze3ze5zz__evmeaningz00,
								(int) (((long) -1)), (int) (((long) 5)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31922ze3z87_4232,
								(int) (((long) 0)), BgL_bodyz00_2345);
							PROCEDURE_SET(BgL_zc3z04anonymousza31922ze3z87_4232,
								(int) (((long) 1)), BgL_stackz00_194);
							PROCEDURE_SET(BgL_zc3z04anonymousza31922ze3z87_4232,
								(int) (((long) 2)), BgL_codez00_193);
							PROCEDURE_SET(BgL_zc3z04anonymousza31922ze3z87_4232,
								(int) (((long) 3)), BINT(BgL_lfz00_2348));
							PROCEDURE_SET(BgL_zc3z04anonymousza31922ze3z87_4232,
								(int) (((long) 4)), BgL_denvz00_195);
							{	/* Eval/evmeaning.scm 939 */
								obj_t BgL_arg1760z00_3686;

								{	/* Eval/evmeaning.scm 927 */
									obj_t BgL_newz00_3687;

									BgL_newz00_3687 =
										create_struct(BGl_symbol2486z00zz__evmeaningz00,
										(int) (((long) 3)));
									{	/* Eval/evmeaning.scm 927 */
										int BgL_tmpz00_6632;

										BgL_tmpz00_6632 = (int) (((long) 2));
										STRUCT_SET(BgL_newz00_3687, BgL_tmpz00_6632,
											BgL_stackz00_194);
									}
									{	/* Eval/evmeaning.scm 927 */
										int BgL_tmpz00_6635;

										BgL_tmpz00_6635 = (int) (((long) 1));
										STRUCT_SET(BgL_newz00_3687, BgL_tmpz00_6635,
											BgL_bodyz00_2345);
									}
									{	/* Eval/evmeaning.scm 927 */
										obj_t BgL_auxz00_6640;
										int BgL_tmpz00_6638;

										BgL_auxz00_6640 = BINT(BgL_lfz00_2348);
										BgL_tmpz00_6638 = (int) (((long) 0));
										STRUCT_SET(BgL_newz00_3687, BgL_tmpz00_6638,
											BgL_auxz00_6640);
									}
									BgL_arg1760z00_3686 = BgL_newz00_3687;
								}
								PROCEDURE_ATTR_SET(BgL_zc3z04anonymousza31922ze3z87_4232,
									BgL_arg1760z00_3686);
								BgL_arg1760z00_3686;
							}
							return BgL_zc3z04anonymousza31922ze3z87_4232;
						}
					}
				else
					{	/* Eval/evmeaning.scm 1256 */
						long BgL_lfz00_2356;

						{
							obj_t BgL_formalsz00_2365;
							long BgL_numz00_2366;

							BgL_formalsz00_2365 = BgL_formalsz00_2346;
							BgL_numz00_2366 = ((long) -1);
						BgL_zc3z04anonymousza31925ze3z87_2367:
							if (PAIRP(BgL_formalsz00_2365))
								{
									long BgL_numz00_6648;
									obj_t BgL_formalsz00_6646;

									BgL_formalsz00_6646 = CDR(BgL_formalsz00_2365);
									BgL_numz00_6648 = (BgL_numz00_2366 - ((long) 1));
									BgL_numz00_2366 = BgL_numz00_6648;
									BgL_formalsz00_2365 = BgL_formalsz00_6646;
									goto BgL_zc3z04anonymousza31925ze3z87_2367;
								}
							else
								{	/* Eval/evmeaning.scm 1258 */
									BgL_lfz00_2356 = BgL_numz00_2366;
								}
						}
						{	/* Eval/evmeaning.scm 1263 */
							obj_t BgL_zc3z04anonymousza31924ze3z87_4233;

							BgL_zc3z04anonymousza31924ze3z87_4233 =
								MAKE_VA_PROCEDURE
								(BGl_z62zc3z04anonymousza31924ze3ze5zz__evmeaningz00,
								(int) (((long) -1)), (int) (((long) 5)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31924ze3z87_4233,
								(int) (((long) 0)), BgL_bodyz00_2345);
							PROCEDURE_SET(BgL_zc3z04anonymousza31924ze3z87_4233,
								(int) (((long) 1)), BgL_stackz00_194);
							PROCEDURE_SET(BgL_zc3z04anonymousza31924ze3z87_4233,
								(int) (((long) 2)), BgL_codez00_193);
							PROCEDURE_SET(BgL_zc3z04anonymousza31924ze3z87_4233,
								(int) (((long) 3)), BINT(BgL_lfz00_2356));
							PROCEDURE_SET(BgL_zc3z04anonymousza31924ze3z87_4233,
								(int) (((long) 4)), BgL_denvz00_195);
							{	/* Eval/evmeaning.scm 939 */
								obj_t BgL_arg1760z00_3695;

								{	/* Eval/evmeaning.scm 927 */
									obj_t BgL_newz00_3696;

									BgL_newz00_3696 =
										create_struct(BGl_symbol2486z00zz__evmeaningz00,
										(int) (((long) 3)));
									{	/* Eval/evmeaning.scm 927 */
										int BgL_tmpz00_6666;

										BgL_tmpz00_6666 = (int) (((long) 2));
										STRUCT_SET(BgL_newz00_3696, BgL_tmpz00_6666,
											BgL_stackz00_194);
									}
									{	/* Eval/evmeaning.scm 927 */
										int BgL_tmpz00_6669;

										BgL_tmpz00_6669 = (int) (((long) 1));
										STRUCT_SET(BgL_newz00_3696, BgL_tmpz00_6669,
											BgL_bodyz00_2345);
									}
									{	/* Eval/evmeaning.scm 927 */
										obj_t BgL_auxz00_6674;
										int BgL_tmpz00_6672;

										BgL_auxz00_6674 = BINT(BgL_lfz00_2356);
										BgL_tmpz00_6672 = (int) (((long) 0));
										STRUCT_SET(BgL_newz00_3696, BgL_tmpz00_6672,
											BgL_auxz00_6674);
									}
									BgL_arg1760z00_3695 = BgL_newz00_3696;
								}
								PROCEDURE_ATTR_SET(BgL_zc3z04anonymousza31924ze3z87_4233,
									BgL_arg1760z00_3695);
								BgL_arg1760z00_3695;
							}
							return BgL_zc3z04anonymousza31924ze3z87_4233;
						}
					}
			}
		}

	}



/* &<@anonymous:1922> */
	obj_t BGl_z62zc3z04anonymousza31922ze3ze5zz__evmeaningz00(obj_t
		BgL_envz00_4234, obj_t BgL_xz00_4240)
	{
		{	/* Eval/evmeaning.scm 1248 */
			{	/* Eval/evmeaning.scm 1249 */
				obj_t BgL_bodyz00_4235;
				obj_t BgL_stackz00_4236;
				obj_t BgL_codez00_4237;
				long BgL_lfz00_4238;
				obj_t BgL_denvz00_4239;

				BgL_bodyz00_4235 = PROCEDURE_REF(BgL_envz00_4234, (int) (((long) 0)));
				BgL_stackz00_4236 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4234, (int) (((long) 1))));
				BgL_codez00_4237 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4234, (int) (((long) 2))));
				BgL_lfz00_4238 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_4234, (int) (((long) 3))));
				BgL_denvz00_4239 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4234, (int) (((long) 4))));
				{	/* Eval/evmeaning.scm 1249 */
					obj_t BgL_z12sz12_4354;

					BgL_z12sz12_4354 = BgL_stackz00_4236;
					return
						BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4235,
						BGl_evmeaningzd2pushzd2fxargsz00zz__evmeaningz00(BgL_xz00_4240,
							BgL_codez00_4237, BgL_xz00_4240, BINT(BgL_lfz00_4238),
							BgL_z12sz12_4354), BgL_denvz00_4239);
				}
			}
		}

	}



/* &<@anonymous:1924> */
	obj_t BGl_z62zc3z04anonymousza31924ze3ze5zz__evmeaningz00(obj_t
		BgL_envz00_4241, obj_t BgL_xz00_4247)
	{
		{	/* Eval/evmeaning.scm 1262 */
			{	/* Eval/evmeaning.scm 1263 */
				obj_t BgL_bodyz00_4242;
				obj_t BgL_stackz00_4243;
				obj_t BgL_codez00_4244;
				long BgL_lfz00_4245;
				obj_t BgL_denvz00_4246;

				BgL_bodyz00_4242 = PROCEDURE_REF(BgL_envz00_4241, (int) (((long) 0)));
				BgL_stackz00_4243 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4241, (int) (((long) 1))));
				BgL_codez00_4244 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4241, (int) (((long) 2))));
				BgL_lfz00_4245 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_4241, (int) (((long) 3))));
				BgL_denvz00_4246 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4241, (int) (((long) 4))));
				{	/* Eval/evmeaning.scm 1263 */
					obj_t BgL_z12sz12_4355;

					BgL_z12sz12_4355 = BgL_stackz00_4243;
					return
						BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4242,
						BGl_evmeaningzd2pushzd2vaargsz00zz__evmeaningz00(BgL_xz00_4247,
							BgL_codez00_4244, BgL_xz00_4247, BINT(BgL_lfz00_4245),
							BgL_z12sz12_4355), BgL_denvz00_4246);
				}
			}
		}

	}



/* evmeaning-push-fxargs */
	obj_t BGl_evmeaningzd2pushzd2fxargsz00zz__evmeaningz00(obj_t BgL_namez00_196,
		obj_t BgL_locz00_197, obj_t BgL_actualsz00_198, obj_t BgL_numz00_199,
		obj_t BgL_stackz00_200)
	{
		{	/* Eval/evmeaning.scm 1274 */
			return
				BGl__loop_ze71ze7zz__evmeaningz00(BgL_stackz00_200, BgL_numz00_199,
				BgL_namez00_196, BgL_locz00_197, BgL_actualsz00_198, BgL_actualsz00_198,
				BgL_numz00_199);
		}

	}



/* _loop_~1 */
	obj_t BGl__loop_ze71ze7zz__evmeaningz00(obj_t BgL_stackz00_4257,
		obj_t BgL_numz00_4256, obj_t BgL_namez00_4255, obj_t BgL_locz00_4254,
		obj_t BgL_actualsz00_4253, obj_t BgL_az00_2373, obj_t BgL_nz00_2374)
	{
		{	/* Eval/evmeaning.scm 1275 */
			if (((long) CINT(BgL_nz00_2374) == ((long) 0)))
				{	/* Eval/evmeaning.scm 1278 */
					if (NULLP(BgL_az00_2373))
						{	/* Eval/evmeaning.scm 1279 */
							return BgL_stackz00_4257;
						}
					else
						{	/* Eval/evmeaning.scm 1280 */
							long BgL_arg1932z00_2378;

							BgL_arg1932z00_2378 = bgl_list_length(BgL_actualsz00_4253);
							return
								BGl_evarityzd2errorzd2zz__everrorz00(BgL_locz00_4254,
								BgL_namez00_4255, (int) (BgL_arg1932z00_2378),
								CINT(BgL_numz00_4256));
				}}
			else
				{	/* Eval/evmeaning.scm 1278 */
					if (NULLP(BgL_az00_2373))
						{	/* Eval/evmeaning.scm 1283 */
							long BgL_arg1934z00_2380;

							BgL_arg1934z00_2380 = bgl_list_length(BgL_actualsz00_4253);
							return
								BGl_evarityzd2errorzd2zz__everrorz00(BgL_locz00_4254,
								BgL_namez00_4255, (int) (BgL_arg1934z00_2380),
								CINT(BgL_numz00_4256));
						}
					else
						{	/* Eval/evmeaning.scm 1285 */
							obj_t BgL_arg1935z00_2381;
							obj_t BgL_arg1936z00_2382;

							BgL_arg1935z00_2381 = CAR(((obj_t) BgL_az00_2373));
							{	/* Eval/evmeaning.scm 1285 */
								obj_t BgL_arg1937z00_2383;
								long BgL_arg1938z00_2384;

								BgL_arg1937z00_2383 = CDR(((obj_t) BgL_az00_2373));
								BgL_arg1938z00_2384 = ((long) CINT(BgL_nz00_2374) - ((long) 1));
								BgL_arg1936z00_2382 =
									BGl__loop_ze71ze7zz__evmeaningz00(BgL_stackz00_4257,
									BgL_numz00_4256, BgL_namez00_4255, BgL_locz00_4254,
									BgL_actualsz00_4253, BgL_arg1937z00_2383,
									BINT(BgL_arg1938z00_2384));
							}
							return MAKE_YOUNG_PAIR(BgL_arg1935z00_2381, BgL_arg1936z00_2382);
						}
				}
		}

	}



/* evmeaning-push-vaargs */
	obj_t BGl_evmeaningzd2pushzd2vaargsz00zz__evmeaningz00(obj_t BgL_namez00_201,
		obj_t BgL_locz00_202, obj_t BgL_actualsz00_203, obj_t BgL_numz00_204,
		obj_t BgL_stackz00_205)
	{
		{	/* Eval/evmeaning.scm 1290 */
			return
				BGl__loop_ze70ze7zz__evmeaningz00(BgL_stackz00_205, BgL_numz00_204,
				BgL_namez00_201, BgL_locz00_202, BgL_actualsz00_203, BgL_actualsz00_203,
				BgL_numz00_204);
		}

	}



/* _loop_~0 */
	obj_t BGl__loop_ze70ze7zz__evmeaningz00(obj_t BgL_stackz00_4252,
		obj_t BgL_numz00_4251, obj_t BgL_namez00_4250, obj_t BgL_locz00_4249,
		obj_t BgL_actualsz00_4248, obj_t BgL_az00_2387, obj_t BgL_nz00_2388)
	{
		{	/* Eval/evmeaning.scm 1291 */
			if (((long) CINT(BgL_nz00_2388) == ((long) -1)))
				{	/* Eval/evmeaning.scm 1294 */
					return MAKE_YOUNG_PAIR(BgL_az00_2387, BgL_stackz00_4252);
				}
			else
				{	/* Eval/evmeaning.scm 1294 */
					if (NULLP(BgL_az00_2387))
						{	/* Eval/evmeaning.scm 1297 */
							long BgL_arg1942z00_2392;

							BgL_arg1942z00_2392 = bgl_list_length(BgL_actualsz00_4248);
							return
								BGl_evarityzd2errorzd2zz__everrorz00(BgL_locz00_4249,
								BgL_namez00_4250, (int) (BgL_arg1942z00_2392),
								CINT(BgL_numz00_4251));
						}
					else
						{	/* Eval/evmeaning.scm 1299 */
							obj_t BgL_arg1943z00_2393;
							obj_t BgL_arg1944z00_2394;

							BgL_arg1943z00_2393 = CAR(((obj_t) BgL_az00_2387));
							{	/* Eval/evmeaning.scm 1299 */
								obj_t BgL_arg1945z00_2395;
								long BgL_arg1946z00_2396;

								BgL_arg1945z00_2395 = CDR(((obj_t) BgL_az00_2387));
								BgL_arg1946z00_2396 = ((long) CINT(BgL_nz00_2388) + ((long) 1));
								BgL_arg1944z00_2394 =
									BGl__loop_ze70ze7zz__evmeaningz00(BgL_stackz00_4252,
									BgL_numz00_4251, BgL_namez00_4250, BgL_locz00_4249,
									BgL_actualsz00_4248, BgL_arg1945z00_2395,
									BINT(BgL_arg1946z00_2396));
							}
							return MAKE_YOUNG_PAIR(BgL_arg1943z00_2393, BgL_arg1944z00_2394);
						}
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__evmeaningz00()
	{
		{	/* Eval/evmeaning.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__evmeaningz00()
	{
		{	/* Eval/evmeaning.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__evmeaningz00()
	{
		{	/* Eval/evmeaning.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__evmeaningz00()
	{
		{	/* Eval/evmeaning.scm 14 */
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 121046386),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 251315035),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 439352636),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__rgcz00(((long) 352596942),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581), BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945), BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874), BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048), BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694), BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 323064336),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845), BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 177147628),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 528345319),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__evcompilez00(((long) 492753248),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__everrorz00(((long) 375872251),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
			return BGl_modulezd2initializa7ationz75zz__evmodulez00(((long) 505900559),
				BSTRING_TO_STRING(BGl_string2509z00zz__evmeaningz00));
		}

	}

#ifdef __cplusplus
}
#endif
