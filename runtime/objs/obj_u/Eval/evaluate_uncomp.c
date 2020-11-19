/*===========================================================================*/
/*   (Eval/evaluate_uncomp.scm)                                              */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/evaluate_uncomp.scm -indent -o objs/obj_u/Eval/evaluate_uncomp.c) */
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

	typedef struct BgL_ev_labelsz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_varsz00;
		obj_t BgL_valsz00;
		obj_t BgL_envz00;
		obj_t BgL_stkz00;
		struct BgL_ev_exprz00_bgl *BgL_bodyz00;
		obj_t BgL_boxesz00;
	}                   *BgL_ev_labelsz00_bglt;

	typedef struct BgL_ev_gotoz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_ev_varz00_bgl *BgL_labelz00;
		struct BgL_ev_labelsz00_bgl *BgL_labelsz00;
		obj_t BgL_argsz00;
	}                 *BgL_ev_gotoz00_bglt;

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


	static obj_t BGl_z62uncompzd2ev_or1211zb0zz__evaluate_uncompz00(obj_t, obj_t);
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_ev_defglobalz00zz__evaluate_typesz00;
	static obj_t BGl_z62uncompzd2ev_setlocal1223zb0zz__evaluate_uncompz00(obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__evaluate_uncompz00 =
		BUNSPEC;
	static obj_t BGl_z62uncomp1199z62zz__evaluate_uncompz00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62uncompzd2ev_bindzd2exit1225z62zz__evaluate_uncompz00(obj_t, obj_t);
	extern obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_ev_letrecz00zz__evaluate_typesz00;
	static obj_t BGl_toplevelzd2initzd2zz__evaluate_uncompz00();
	static obj_t BGl_z62uncompzd2ev_var1203zb0zz__evaluate_uncompz00(obj_t,
		obj_t);
	extern obj_t BGl_ev_letz00zz__evaluate_typesz00;
	static obj_t BGl_z62uncompzd2ev_prog21215zb0zz__evaluate_uncompz00(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zz__evaluate_uncompz00();
	extern obj_t BGl_ev_prog2z00zz__evaluate_typesz00;
	static obj_t BGl_redovarsze70ze7zz__evaluate_uncompz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__evaluate_uncompz00();
	extern obj_t BGl_ev_bindzd2exitzd2zz__evaluate_typesz00;
	static obj_t
		BGl_z62uncompzd2ev_unwindzd2pro1227z62zz__evaluate_uncompz00(obj_t, obj_t);
	static obj_t BGl_z62uncompzd2ev_let1233zb0zz__evaluate_uncompz00(obj_t,
		obj_t);
	extern obj_t BGl_ev_unwindzd2protectzd2zz__evaluate_typesz00;
	extern obj_t bstring_to_symbol(obj_t);
	extern bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_ev_letza2za2zz__evaluate_typesz00;
	static obj_t BGl_z62uncompzd2ev_goto1241zb0zz__evaluate_uncompz00(obj_t,
		obj_t);
	extern obj_t BGl_ev_labelsz00zz__evaluate_typesz00;
	static obj_t BGl_recze70ze7zz__evaluate_uncompz00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__evaluate_uncompz00();
	extern obj_t BGl_ev_absz00zz__evaluate_typesz00;
	extern obj_t BGl_ev_trapz00zz__evaluate_typesz00;
	static obj_t BGl_z62uncompzd2ev_defglobal1221zb0zz__evaluate_uncompz00(obj_t,
		obj_t);
	static obj_t BGl_z62uncompzd2ev_setglobal1219zb0zz__evaluate_uncompz00(obj_t,
		obj_t);
	static obj_t BGl_z62uncompzd2ev_app1243zb0zz__evaluate_uncompz00(obj_t,
		obj_t);
	extern obj_t BGl_ev_setglobalz00zz__evaluate_typesz00;
	extern obj_t BGl_ev_ifz00zz__evaluate_typesz00;
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_uncompz00zz__evaluate_uncompz00(BgL_ev_exprz00_bglt);
	static obj_t BGl_z62uncompzd2ev_and1213zb0zz__evaluate_uncompz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62uncompzd2ev_synchroniza71231z17zz__evaluate_uncompz00(obj_t, obj_t);
	static obj_t BGl_z62uncompzd2ev_if1209zb0zz__evaluate_uncompz00(obj_t, obj_t);
	extern obj_t BGl_ev_gotoz00zz__evaluate_typesz00;
	static obj_t BGl_symbol2100z00zz__evaluate_uncompz00 = BUNSPEC;
	static obj_t BGl_symbol2102z00zz__evaluate_uncompz00 = BUNSPEC;
	static obj_t BGl_symbol2104z00zz__evaluate_uncompz00 = BUNSPEC;
	static obj_t BGl_symbol2106z00zz__evaluate_uncompz00 = BUNSPEC;
	static obj_t BGl_symbol2108z00zz__evaluate_uncompz00 = BUNSPEC;
	static obj_t BGl_z62uncompzd2ev_global1205zb0zz__evaluate_uncompz00(obj_t,
		obj_t);
	static obj_t BGl_symbol2110z00zz__evaluate_uncompz00 = BUNSPEC;
	static obj_t BGl_symbol2112z00zz__evaluate_uncompz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__evaluate_uncompz00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
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
	static obj_t BGl_z62uncompzd2ev_abs1245zb0zz__evaluate_uncompz00(obj_t,
		obj_t);
	extern obj_t BGl_ev_globalz00zz__evaluate_typesz00;
	static obj_t BGl_keyword2088z00zz__evaluate_uncompz00 = BUNSPEC;
	static obj_t BGl_z62uncompzd2ev_labels1239zb0zz__evaluate_uncompz00(obj_t,
		obj_t);
	extern obj_t BGl_ev_littz00zz__evaluate_typesz00;
	extern obj_t BGl_ev_orz00zz__evaluate_typesz00;
	extern obj_t BGl_ev_varz00zz__evaluate_typesz00;
	static obj_t BGl_symbol2054z00zz__evaluate_uncompz00 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zz__evaluate_uncompz00();
	static obj_t BGl_gczd2rootszd2initz00zz__evaluate_uncompz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__evaluate_uncompz00();
	extern obj_t BGl_ev_withzd2handlerzd2zz__evaluate_typesz00;
	extern obj_t BGl_ev_andz00zz__evaluate_typesz00;
	static obj_t BGl_symbol2080z00zz__evaluate_uncompz00 = BUNSPEC;
	static obj_t BGl_symbol2082z00zz__evaluate_uncompz00 = BUNSPEC;
	static obj_t BGl_symbol2084z00zz__evaluate_uncompz00 = BUNSPEC;
	static obj_t BGl_symbol2086z00zz__evaluate_uncompz00 = BUNSPEC;
	static obj_t BGl_z62uncompilez62zz__evaluate_uncompz00(obj_t, obj_t);
	static obj_t BGl_symbol2090z00zz__evaluate_uncompz00 = BUNSPEC;
	static obj_t BGl_symbol2092z00zz__evaluate_uncompz00 = BUNSPEC;
	static obj_t BGl_symbol2094z00zz__evaluate_uncompz00 = BUNSPEC;
	static obj_t BGl_symbol2096z00zz__evaluate_uncompz00 = BUNSPEC;
	static obj_t BGl_symbol2098z00zz__evaluate_uncompz00 = BUNSPEC;
	static obj_t BGl_z62uncompzd2ev_trap1217zb0zz__evaluate_uncompz00(obj_t,
		obj_t);
	static obj_t BGl_z62uncompzd2ev_litt1207zb0zz__evaluate_uncompz00(obj_t,
		obj_t);
	static obj_t BGl_z62uncompz62zz__evaluate_uncompz00(obj_t, obj_t);
	extern obj_t BGl_ev_exprz00zz__evaluate_typesz00;
	extern obj_t BGl_ev_appz00zz__evaluate_typesz00;
	static obj_t BGl_z62uncompzd2ev_letza21235z12zz__evaluate_uncompz00(obj_t,
		obj_t);
	extern obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_ev_synchroniza7eza7zz__evaluate_typesz00;
	BGL_EXPORTED_DECL obj_t
		BGl_uncompilez00zz__evaluate_uncompz00(BgL_ev_exprz00_bglt);
	extern obj_t bstring_to_keyword(obj_t);
	static obj_t BGl_z62uncompzd2ev_letrec1237zb0zz__evaluate_uncompz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62uncompzd2ev_withzd2handl1229z62zz__evaluate_uncompz00(obj_t, obj_t);
	extern obj_t BGl_ev_setlocalz00zz__evaluate_typesz00;
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2049z00zz__evaluate_uncompz00,
		BgL_bgl_string2049za700za7za7_2115za7,
		"/tmp/4.4a/runtime/Eval/evaluate_uncomp.scm", 42);
	      DEFINE_STRING(BGl_string2050z00zz__evaluate_uncompz00,
		BgL_bgl_string2050za700za7za7_2116za7, "&uncompile", 10);
	      DEFINE_STRING(BGl_string2051z00zz__evaluate_uncompz00,
		BgL_bgl_string2051za700za7za7_2117za7, "ev_expr", 7);
	      DEFINE_STRING(BGl_string2053z00zz__evaluate_uncompz00,
		BgL_bgl_string2053za700za7za7_2118za7, "uncomp1199", 10);
	      DEFINE_STRING(BGl_string2055z00zz__evaluate_uncompz00,
		BgL_bgl_string2055za700za7za7_2119za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string2056z00zz__evaluate_uncompz00,
		BgL_bgl_string2056za700za7za7_2120za7, "&uncomp", 7);
	      DEFINE_STRING(BGl_string2058z00zz__evaluate_uncompz00,
		BgL_bgl_string2058za700za7za7_2121za7, "uncomp", 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2052z00zz__evaluate_uncompz00,
		BgL_bgl_za762uncomp1199za7622122z00,
		BGl_z62uncomp1199z62zz__evaluate_uncompz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2057z00zz__evaluate_uncompz00,
		BgL_bgl_za762uncompza7d2ev_v2123z00,
		BGl_z62uncompzd2ev_var1203zb0zz__evaluate_uncompz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2059z00zz__evaluate_uncompz00,
		BgL_bgl_za762uncompza7d2ev_g2124z00,
		BGl_z62uncompzd2ev_global1205zb0zz__evaluate_uncompz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2060z00zz__evaluate_uncompz00,
		BgL_bgl_za762uncompza7d2ev_l2125z00,
		BGl_z62uncompzd2ev_litt1207zb0zz__evaluate_uncompz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2061z00zz__evaluate_uncompz00,
		BgL_bgl_za762uncompza7d2ev_i2126z00,
		BGl_z62uncompzd2ev_if1209zb0zz__evaluate_uncompz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2062z00zz__evaluate_uncompz00,
		BgL_bgl_za762uncompza7d2ev_o2127z00,
		BGl_z62uncompzd2ev_or1211zb0zz__evaluate_uncompz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2063z00zz__evaluate_uncompz00,
		BgL_bgl_za762uncompza7d2ev_a2128z00,
		BGl_z62uncompzd2ev_and1213zb0zz__evaluate_uncompz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2064z00zz__evaluate_uncompz00,
		BgL_bgl_za762uncompza7d2ev_p2129z00,
		BGl_z62uncompzd2ev_prog21215zb0zz__evaluate_uncompz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2065z00zz__evaluate_uncompz00,
		BgL_bgl_za762uncompza7d2ev_t2130z00,
		BGl_z62uncompzd2ev_trap1217zb0zz__evaluate_uncompz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2066z00zz__evaluate_uncompz00,
		BgL_bgl_za762uncompza7d2ev_s2131z00,
		BGl_z62uncompzd2ev_setglobal1219zb0zz__evaluate_uncompz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2067z00zz__evaluate_uncompz00,
		BgL_bgl_za762uncompza7d2ev_d2132z00,
		BGl_z62uncompzd2ev_defglobal1221zb0zz__evaluate_uncompz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2068z00zz__evaluate_uncompz00,
		BgL_bgl_za762uncompza7d2ev_s2133z00,
		BGl_z62uncompzd2ev_setlocal1223zb0zz__evaluate_uncompz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2069z00zz__evaluate_uncompz00,
		BgL_bgl_za762uncompza7d2ev_b2134z00,
		BGl_z62uncompzd2ev_bindzd2exit1225z62zz__evaluate_uncompz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2070z00zz__evaluate_uncompz00,
		BgL_bgl_za762uncompza7d2ev_u2135z00,
		BGl_z62uncompzd2ev_unwindzd2pro1227z62zz__evaluate_uncompz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2071z00zz__evaluate_uncompz00,
		BgL_bgl_za762uncompza7d2ev_w2136z00,
		BGl_z62uncompzd2ev_withzd2handl1229z62zz__evaluate_uncompz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2072z00zz__evaluate_uncompz00,
		BgL_bgl_za762uncompza7d2ev_s2137z00,
		BGl_z62uncompzd2ev_synchroniza71231z17zz__evaluate_uncompz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2073z00zz__evaluate_uncompz00,
		BgL_bgl_za762uncompza7d2ev_l2138z00,
		BGl_z62uncompzd2ev_let1233zb0zz__evaluate_uncompz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2074z00zz__evaluate_uncompz00,
		BgL_bgl_za762uncompza7d2ev_l2139z00,
		BGl_z62uncompzd2ev_letza21235z12zz__evaluate_uncompz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2075z00zz__evaluate_uncompz00,
		BgL_bgl_za762uncompza7d2ev_l2140z00,
		BGl_z62uncompzd2ev_letrec1237zb0zz__evaluate_uncompz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2076z00zz__evaluate_uncompz00,
		BgL_bgl_za762uncompza7d2ev_l2141z00,
		BGl_z62uncompzd2ev_labels1239zb0zz__evaluate_uncompz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2081z00zz__evaluate_uncompz00,
		BgL_bgl_string2081za700za7za7_2142za7, "lambda", 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2077z00zz__evaluate_uncompz00,
		BgL_bgl_za762uncompza7d2ev_g2143z00,
		BGl_z62uncompzd2ev_goto1241zb0zz__evaluate_uncompz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2078z00zz__evaluate_uncompz00,
		BgL_bgl_za762uncompza7d2ev_a2144z00,
		BGl_z62uncompzd2ev_app1243zb0zz__evaluate_uncompz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2083z00zz__evaluate_uncompz00,
		BgL_bgl_string2083za700za7za7_2145za7, "letrec", 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2079z00zz__evaluate_uncompz00,
		BgL_bgl_za762uncompza7d2ev_a2146z00,
		BGl_z62uncompzd2ev_abs1245zb0zz__evaluate_uncompz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2085z00zz__evaluate_uncompz00,
		BgL_bgl_string2085za700za7za7_2147za7, "let*", 4);
	      DEFINE_STRING(BGl_string2087z00zz__evaluate_uncompz00,
		BgL_bgl_string2087za700za7za7_2148za7, "let", 3);
	      DEFINE_STRING(BGl_string2089z00zz__evaluate_uncompz00,
		BgL_bgl_string2089za700za7za7_2149za7, "prelock", 7);
	      DEFINE_STRING(BGl_string2091z00zz__evaluate_uncompz00,
		BgL_bgl_string2091za700za7za7_2150za7, "synchronize", 11);
	      DEFINE_STRING(BGl_string2093z00zz__evaluate_uncompz00,
		BgL_bgl_string2093za700za7za7_2151za7, "with-handler", 12);
	      DEFINE_STRING(BGl_string2095z00zz__evaluate_uncompz00,
		BgL_bgl_string2095za700za7za7_2152za7, "unwind-protect", 14);
	      DEFINE_STRING(BGl_string2097z00zz__evaluate_uncompz00,
		BgL_bgl_string2097za700za7za7_2153za7, "bind-exit", 9);
	      DEFINE_STRING(BGl_string2099z00zz__evaluate_uncompz00,
		BgL_bgl_string2099za700za7za7_2154za7, "set!", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_uncompilezd2envzd2zz__evaluate_uncompz00,
		BgL_bgl_za762uncompileza762za72155za7,
		BGl_z62uncompilez62zz__evaluate_uncompz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_uncompzd2envzd2zz__evaluate_uncompz00,
		BgL_bgl_za762uncompza762za7za7__2156z00,
		BGl_z62uncompz62zz__evaluate_uncompz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2101z00zz__evaluate_uncompz00,
		BgL_bgl_string2101za700za7za7_2157za7, "define", 6);
	      DEFINE_STRING(BGl_string2103z00zz__evaluate_uncompz00,
		BgL_bgl_string2103za700za7za7_2158za7, "trap", 4);
	      DEFINE_STRING(BGl_string2105z00zz__evaluate_uncompz00,
		BgL_bgl_string2105za700za7za7_2159za7, "begin", 5);
	      DEFINE_STRING(BGl_string2107z00zz__evaluate_uncompz00,
		BgL_bgl_string2107za700za7za7_2160za7, "and", 3);
	      DEFINE_STRING(BGl_string2109z00zz__evaluate_uncompz00,
		BgL_bgl_string2109za700za7za7_2161za7, "or", 2);
	      DEFINE_STRING(BGl_string2111z00zz__evaluate_uncompz00,
		BgL_bgl_string2111za700za7za7_2162za7, "if", 2);
	      DEFINE_STRING(BGl_string2113z00zz__evaluate_uncompz00,
		BgL_bgl_string2113za700za7za7_2163za7, "quote", 5);
	      DEFINE_STRING(BGl_string2114z00zz__evaluate_uncompz00,
		BgL_bgl_string2114za700za7za7_2164za7, "__evaluate_uncomp", 17);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__evaluate_uncompz00));
		     ADD_ROOT((void *) (&BGl_symbol2100z00zz__evaluate_uncompz00));
		     ADD_ROOT((void *) (&BGl_symbol2102z00zz__evaluate_uncompz00));
		     ADD_ROOT((void *) (&BGl_symbol2104z00zz__evaluate_uncompz00));
		     ADD_ROOT((void *) (&BGl_symbol2106z00zz__evaluate_uncompz00));
		     ADD_ROOT((void *) (&BGl_symbol2108z00zz__evaluate_uncompz00));
		     ADD_ROOT((void *) (&BGl_symbol2110z00zz__evaluate_uncompz00));
		     ADD_ROOT((void *) (&BGl_symbol2112z00zz__evaluate_uncompz00));
		     ADD_ROOT((void *) (&BGl_keyword2088z00zz__evaluate_uncompz00));
		     ADD_ROOT((void *) (&BGl_symbol2054z00zz__evaluate_uncompz00));
		     ADD_ROOT((void *) (&BGl_symbol2080z00zz__evaluate_uncompz00));
		     ADD_ROOT((void *) (&BGl_symbol2082z00zz__evaluate_uncompz00));
		     ADD_ROOT((void *) (&BGl_symbol2084z00zz__evaluate_uncompz00));
		     ADD_ROOT((void *) (&BGl_symbol2086z00zz__evaluate_uncompz00));
		     ADD_ROOT((void *) (&BGl_symbol2090z00zz__evaluate_uncompz00));
		     ADD_ROOT((void *) (&BGl_symbol2092z00zz__evaluate_uncompz00));
		     ADD_ROOT((void *) (&BGl_symbol2094z00zz__evaluate_uncompz00));
		     ADD_ROOT((void *) (&BGl_symbol2096z00zz__evaluate_uncompz00));
		     ADD_ROOT((void *) (&BGl_symbol2098z00zz__evaluate_uncompz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__evaluate_uncompz00(long
		BgL_checksumz00_2928, char *BgL_fromz00_2929)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__evaluate_uncompz00))
				{
					BGl_requirezd2initializa7ationz75zz__evaluate_uncompz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__evaluate_uncompz00();
					BGl_cnstzd2initzd2zz__evaluate_uncompz00();
					BGl_importedzd2moduleszd2initz00zz__evaluate_uncompz00();
					BGl_genericzd2initzd2zz__evaluate_uncompz00();
					BGl_methodzd2initzd2zz__evaluate_uncompz00();
					return BGl_toplevelzd2initzd2zz__evaluate_uncompz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__evaluate_uncompz00()
	{
		{	/* Eval/evaluate_uncomp.scm 15 */
			BGl_symbol2054z00zz__evaluate_uncompz00 =
				bstring_to_symbol(BGl_string2053z00zz__evaluate_uncompz00);
			BGl_symbol2080z00zz__evaluate_uncompz00 =
				bstring_to_symbol(BGl_string2081z00zz__evaluate_uncompz00);
			BGl_symbol2082z00zz__evaluate_uncompz00 =
				bstring_to_symbol(BGl_string2083z00zz__evaluate_uncompz00);
			BGl_symbol2084z00zz__evaluate_uncompz00 =
				bstring_to_symbol(BGl_string2085z00zz__evaluate_uncompz00);
			BGl_symbol2086z00zz__evaluate_uncompz00 =
				bstring_to_symbol(BGl_string2087z00zz__evaluate_uncompz00);
			BGl_keyword2088z00zz__evaluate_uncompz00 =
				bstring_to_keyword(BGl_string2089z00zz__evaluate_uncompz00);
			BGl_symbol2090z00zz__evaluate_uncompz00 =
				bstring_to_symbol(BGl_string2091z00zz__evaluate_uncompz00);
			BGl_symbol2092z00zz__evaluate_uncompz00 =
				bstring_to_symbol(BGl_string2093z00zz__evaluate_uncompz00);
			BGl_symbol2094z00zz__evaluate_uncompz00 =
				bstring_to_symbol(BGl_string2095z00zz__evaluate_uncompz00);
			BGl_symbol2096z00zz__evaluate_uncompz00 =
				bstring_to_symbol(BGl_string2097z00zz__evaluate_uncompz00);
			BGl_symbol2098z00zz__evaluate_uncompz00 =
				bstring_to_symbol(BGl_string2099z00zz__evaluate_uncompz00);
			BGl_symbol2100z00zz__evaluate_uncompz00 =
				bstring_to_symbol(BGl_string2101z00zz__evaluate_uncompz00);
			BGl_symbol2102z00zz__evaluate_uncompz00 =
				bstring_to_symbol(BGl_string2103z00zz__evaluate_uncompz00);
			BGl_symbol2104z00zz__evaluate_uncompz00 =
				bstring_to_symbol(BGl_string2105z00zz__evaluate_uncompz00);
			BGl_symbol2106z00zz__evaluate_uncompz00 =
				bstring_to_symbol(BGl_string2107z00zz__evaluate_uncompz00);
			BGl_symbol2108z00zz__evaluate_uncompz00 =
				bstring_to_symbol(BGl_string2109z00zz__evaluate_uncompz00);
			BGl_symbol2110z00zz__evaluate_uncompz00 =
				bstring_to_symbol(BGl_string2111z00zz__evaluate_uncompz00);
			return (BGl_symbol2112z00zz__evaluate_uncompz00 =
				bstring_to_symbol(BGl_string2113z00zz__evaluate_uncompz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__evaluate_uncompz00()
	{
		{	/* Eval/evaluate_uncomp.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__evaluate_uncompz00()
	{
		{	/* Eval/evaluate_uncomp.scm 15 */
			return BUNSPEC;
		}

	}



/* uncompile */
	BGL_EXPORTED_DEF obj_t
		BGl_uncompilez00zz__evaluate_uncompz00(BgL_ev_exprz00_bglt BgL_ez00_3)
	{
		{	/* Eval/evaluate_uncomp.scm 62 */
			return BGl_uncompz00zz__evaluate_uncompz00(BgL_ez00_3);
		}

	}



/* &uncompile */
	obj_t BGl_z62uncompilez62zz__evaluate_uncompz00(obj_t BgL_envz00_2586,
		obj_t BgL_ez00_2587)
	{
		{	/* Eval/evaluate_uncomp.scm 62 */
			{	/* Eval/evaluate_uncomp.scm 63 */
				BgL_ev_exprz00_bglt BgL_auxz00_2959;

				if (BGl_isazf3zf3zz__objectz00(BgL_ez00_2587,
						BGl_ev_exprz00zz__evaluate_typesz00))
					{	/* Eval/evaluate_uncomp.scm 63 */
						BgL_auxz00_2959 = ((BgL_ev_exprz00_bglt) BgL_ez00_2587);
					}
				else
					{
						obj_t BgL_auxz00_2963;

						BgL_auxz00_2963 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2049z00zz__evaluate_uncompz00, BINT(((long) 1816)),
							BGl_string2050z00zz__evaluate_uncompz00,
							BGl_string2051z00zz__evaluate_uncompz00, BgL_ez00_2587);
						FAILURE(BgL_auxz00_2963, BFALSE, BFALSE);
					}
				return BGl_uncompilez00zz__evaluate_uncompz00(BgL_auxz00_2959);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__evaluate_uncompz00()
	{
		{	/* Eval/evaluate_uncomp.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__evaluate_uncompz00()
	{
		{	/* Eval/evaluate_uncomp.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_uncompzd2envzd2zz__evaluate_uncompz00,
				BGl_proc2052z00zz__evaluate_uncompz00,
				BGl_ev_exprz00zz__evaluate_typesz00,
				BGl_string2053z00zz__evaluate_uncompz00);
		}

	}



/* &uncomp1199 */
	obj_t BGl_z62uncomp1199z62zz__evaluate_uncompz00(obj_t BgL_envz00_2589,
		obj_t BgL_ez00_2590)
	{
		{	/* Eval/evaluate_uncomp.scm 65 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2054z00zz__evaluate_uncompz00,
				BGl_string2055z00zz__evaluate_uncompz00,
				((obj_t) ((BgL_ev_exprz00_bglt) BgL_ez00_2590)));
		}

	}



/* uncomp */
	obj_t BGl_uncompz00zz__evaluate_uncompz00(BgL_ev_exprz00_bglt BgL_ez00_4)
	{
		{	/* Eval/evaluate_uncomp.scm 65 */
			{	/* Eval/evaluate_uncomp.scm 65 */
				obj_t BgL_method1201z00_1100;

				{	/* Eval/evaluate_uncomp.scm 65 */
					obj_t BgL_res1898z00_1951;

					{	/* Eval/evaluate_uncomp.scm 65 */
						long BgL_objzd2classzd2numz00_1916;

						{	/* Eval/evaluate_uncomp.scm 65 */
							long BgL_res1888z00_1919;

							BgL_res1888z00_1919 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_ez00_4));
							BgL_objzd2classzd2numz00_1916 = BgL_res1888z00_1919;
						}
						{	/* Eval/evaluate_uncomp.scm 65 */
							obj_t BgL_arg1879z00_1917;

							BgL_arg1879z00_1917 =
								PROCEDURE_REF(BGl_uncompzd2envzd2zz__evaluate_uncompz00,
								(int) (((long) 1)));
							{	/* Eval/evaluate_uncomp.scm 65 */
								int BgL_offsetz00_1921;

								BgL_offsetz00_1921 = (int) (BgL_objzd2classzd2numz00_1916);
								{	/* Eval/evaluate_uncomp.scm 65 */
									long BgL_offsetz00_1922;

									BgL_offsetz00_1922 =
										((long) (BgL_offsetz00_1921) - OBJECT_TYPE);
									{	/* Eval/evaluate_uncomp.scm 65 */
										long BgL_modz00_1923;

										BgL_modz00_1923 =
											(BgL_offsetz00_1922 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Eval/evaluate_uncomp.scm 65 */
											long BgL_restz00_1925;

											BgL_restz00_1925 =
												(BgL_offsetz00_1922 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Eval/evaluate_uncomp.scm 65 */

												{	/* Eval/evaluate_uncomp.scm 65 */
													obj_t BgL_bucketz00_1927;

													BgL_bucketz00_1927 =
														VECTOR_REF(
														((obj_t) BgL_arg1879z00_1917), BgL_modz00_1923);
													BgL_res1898z00_1951 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1927), BgL_restz00_1925);
					}}}}}}}}
					BgL_method1201z00_1100 = BgL_res1898z00_1951;
				}
				return
					PROCEDURE_ENTRY(BgL_method1201z00_1100) (BgL_method1201z00_1100,
					((obj_t) BgL_ez00_4), BEOA);
			}
		}

	}



/* &uncomp */
	obj_t BGl_z62uncompz62zz__evaluate_uncompz00(obj_t BgL_envz00_2591,
		obj_t BgL_ez00_2592)
	{
		{	/* Eval/evaluate_uncomp.scm 65 */
			{	/* Eval/evaluate_uncomp.scm 65 */
				BgL_ev_exprz00_bglt BgL_auxz00_3002;

				if (BGl_isazf3zf3zz__objectz00(BgL_ez00_2592,
						BGl_ev_exprz00zz__evaluate_typesz00))
					{	/* Eval/evaluate_uncomp.scm 65 */
						BgL_auxz00_3002 = ((BgL_ev_exprz00_bglt) BgL_ez00_2592);
					}
				else
					{
						obj_t BgL_auxz00_3006;

						BgL_auxz00_3006 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2049z00zz__evaluate_uncompz00, BINT(((long) 1830)),
							BGl_string2056z00zz__evaluate_uncompz00,
							BGl_string2051z00zz__evaluate_uncompz00, BgL_ez00_2592);
						FAILURE(BgL_auxz00_3006, BFALSE, BFALSE);
					}
				return BGl_uncompz00zz__evaluate_uncompz00(BgL_auxz00_3002);
			}
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__evaluate_uncompz00()
	{
		{	/* Eval/evaluate_uncomp.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_uncompzd2envzd2zz__evaluate_uncompz00,
				BGl_ev_varz00zz__evaluate_typesz00,
				BGl_proc2057z00zz__evaluate_uncompz00,
				BGl_string2058z00zz__evaluate_uncompz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_uncompzd2envzd2zz__evaluate_uncompz00,
				BGl_ev_globalz00zz__evaluate_typesz00,
				BGl_proc2059z00zz__evaluate_uncompz00,
				BGl_string2058z00zz__evaluate_uncompz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_uncompzd2envzd2zz__evaluate_uncompz00,
				BGl_ev_littz00zz__evaluate_typesz00,
				BGl_proc2060z00zz__evaluate_uncompz00,
				BGl_string2058z00zz__evaluate_uncompz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_uncompzd2envzd2zz__evaluate_uncompz00,
				BGl_ev_ifz00zz__evaluate_typesz00,
				BGl_proc2061z00zz__evaluate_uncompz00,
				BGl_string2058z00zz__evaluate_uncompz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_uncompzd2envzd2zz__evaluate_uncompz00,
				BGl_ev_orz00zz__evaluate_typesz00,
				BGl_proc2062z00zz__evaluate_uncompz00,
				BGl_string2058z00zz__evaluate_uncompz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_uncompzd2envzd2zz__evaluate_uncompz00,
				BGl_ev_andz00zz__evaluate_typesz00,
				BGl_proc2063z00zz__evaluate_uncompz00,
				BGl_string2058z00zz__evaluate_uncompz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_uncompzd2envzd2zz__evaluate_uncompz00,
				BGl_ev_prog2z00zz__evaluate_typesz00,
				BGl_proc2064z00zz__evaluate_uncompz00,
				BGl_string2058z00zz__evaluate_uncompz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_uncompzd2envzd2zz__evaluate_uncompz00,
				BGl_ev_trapz00zz__evaluate_typesz00,
				BGl_proc2065z00zz__evaluate_uncompz00,
				BGl_string2058z00zz__evaluate_uncompz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_uncompzd2envzd2zz__evaluate_uncompz00,
				BGl_ev_setglobalz00zz__evaluate_typesz00,
				BGl_proc2066z00zz__evaluate_uncompz00,
				BGl_string2058z00zz__evaluate_uncompz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_uncompzd2envzd2zz__evaluate_uncompz00,
				BGl_ev_defglobalz00zz__evaluate_typesz00,
				BGl_proc2067z00zz__evaluate_uncompz00,
				BGl_string2058z00zz__evaluate_uncompz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_uncompzd2envzd2zz__evaluate_uncompz00,
				BGl_ev_setlocalz00zz__evaluate_typesz00,
				BGl_proc2068z00zz__evaluate_uncompz00,
				BGl_string2058z00zz__evaluate_uncompz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_uncompzd2envzd2zz__evaluate_uncompz00,
				BGl_ev_bindzd2exitzd2zz__evaluate_typesz00,
				BGl_proc2069z00zz__evaluate_uncompz00,
				BGl_string2058z00zz__evaluate_uncompz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_uncompzd2envzd2zz__evaluate_uncompz00,
				BGl_ev_unwindzd2protectzd2zz__evaluate_typesz00,
				BGl_proc2070z00zz__evaluate_uncompz00,
				BGl_string2058z00zz__evaluate_uncompz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_uncompzd2envzd2zz__evaluate_uncompz00,
				BGl_ev_withzd2handlerzd2zz__evaluate_typesz00,
				BGl_proc2071z00zz__evaluate_uncompz00,
				BGl_string2058z00zz__evaluate_uncompz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_uncompzd2envzd2zz__evaluate_uncompz00,
				BGl_ev_synchroniza7eza7zz__evaluate_typesz00,
				BGl_proc2072z00zz__evaluate_uncompz00,
				BGl_string2058z00zz__evaluate_uncompz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_uncompzd2envzd2zz__evaluate_uncompz00,
				BGl_ev_letz00zz__evaluate_typesz00,
				BGl_proc2073z00zz__evaluate_uncompz00,
				BGl_string2058z00zz__evaluate_uncompz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_uncompzd2envzd2zz__evaluate_uncompz00,
				BGl_ev_letza2za2zz__evaluate_typesz00,
				BGl_proc2074z00zz__evaluate_uncompz00,
				BGl_string2058z00zz__evaluate_uncompz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_uncompzd2envzd2zz__evaluate_uncompz00,
				BGl_ev_letrecz00zz__evaluate_typesz00,
				BGl_proc2075z00zz__evaluate_uncompz00,
				BGl_string2058z00zz__evaluate_uncompz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_uncompzd2envzd2zz__evaluate_uncompz00,
				BGl_ev_labelsz00zz__evaluate_typesz00,
				BGl_proc2076z00zz__evaluate_uncompz00,
				BGl_string2058z00zz__evaluate_uncompz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_uncompzd2envzd2zz__evaluate_uncompz00,
				BGl_ev_gotoz00zz__evaluate_typesz00,
				BGl_proc2077z00zz__evaluate_uncompz00,
				BGl_string2058z00zz__evaluate_uncompz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_uncompzd2envzd2zz__evaluate_uncompz00,
				BGl_ev_appz00zz__evaluate_typesz00,
				BGl_proc2078z00zz__evaluate_uncompz00,
				BGl_string2058z00zz__evaluate_uncompz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_uncompzd2envzd2zz__evaluate_uncompz00,
				BGl_ev_absz00zz__evaluate_typesz00,
				BGl_proc2079z00zz__evaluate_uncompz00,
				BGl_string2058z00zz__evaluate_uncompz00);
		}

	}



/* &uncomp-ev_abs1245 */
	obj_t BGl_z62uncompzd2ev_abs1245zb0zz__evaluate_uncompz00(obj_t
		BgL_envz00_2615, obj_t BgL_ez00_2616)
	{
		{	/* Eval/evaluate_uncomp.scm 157 */
			{	/* Eval/evaluate_uncomp.scm 166 */
				obj_t BgL_arg1520z00_2669;

				{	/* Eval/evaluate_uncomp.scm 166 */
					obj_t BgL_arg1521z00_2670;
					obj_t BgL_arg1523z00_2671;

					{	/* Eval/evaluate_uncomp.scm 166 */
						obj_t BgL_arg1524z00_2672;
						obj_t BgL_arg1525z00_2673;

						BgL_arg1524z00_2672 =
							(((BgL_ev_absz00_bglt) COBJECT(
									((BgL_ev_absz00_bglt) BgL_ez00_2616)))->BgL_arityz00);
						{	/* Eval/evaluate_uncomp.scm 166 */
							obj_t BgL_l1181z00_2674;

							BgL_l1181z00_2674 =
								(((BgL_ev_absz00_bglt) COBJECT(
										((BgL_ev_absz00_bglt) BgL_ez00_2616)))->BgL_varsz00);
							if (NULLP(BgL_l1181z00_2674))
								{	/* Eval/evaluate_uncomp.scm 166 */
									BgL_arg1525z00_2673 = BNIL;
								}
							else
								{	/* Eval/evaluate_uncomp.scm 166 */
									obj_t BgL_head1183z00_2675;

									{	/* Eval/evaluate_uncomp.scm 166 */
										obj_t BgL_res1961z00_2676;

										BgL_res1961z00_2676 = MAKE_YOUNG_PAIR(BNIL, BNIL);
										BgL_head1183z00_2675 = BgL_res1961z00_2676;
									}
									{
										obj_t BgL_l1181z00_2678;
										obj_t BgL_tail1184z00_2679;

										BgL_l1181z00_2678 = BgL_l1181z00_2674;
										BgL_tail1184z00_2679 = BgL_head1183z00_2675;
									BgL_zc3z04anonymousza31527ze3z87_2677:
										if (NULLP(BgL_l1181z00_2678))
											{	/* Eval/evaluate_uncomp.scm 166 */
												BgL_arg1525z00_2673 = CDR(BgL_head1183z00_2675);
											}
										else
											{	/* Eval/evaluate_uncomp.scm 166 */
												obj_t BgL_newtail1185z00_2680;

												{	/* Eval/evaluate_uncomp.scm 166 */
													obj_t BgL_arg1531z00_2681;

													BgL_arg1531z00_2681 =
														(((BgL_ev_varz00_bglt) COBJECT(
																((BgL_ev_varz00_bglt)
																	CAR(
																		((obj_t) BgL_l1181z00_2678)))))->
														BgL_namez00);
													{	/* Eval/evaluate_uncomp.scm 166 */
														obj_t BgL_res1969z00_2682;

														BgL_res1969z00_2682 =
															MAKE_YOUNG_PAIR(BgL_arg1531z00_2681, BNIL);
														BgL_newtail1185z00_2680 = BgL_res1969z00_2682;
													}
												}
												SET_CDR(BgL_tail1184z00_2679, BgL_newtail1185z00_2680);
												{	/* Eval/evaluate_uncomp.scm 166 */
													obj_t BgL_arg1530z00_2683;

													BgL_arg1530z00_2683 =
														CDR(((obj_t) BgL_l1181z00_2678));
													{
														obj_t BgL_tail1184z00_3052;
														obj_t BgL_l1181z00_3051;

														BgL_l1181z00_3051 = BgL_arg1530z00_2683;
														BgL_tail1184z00_3052 = BgL_newtail1185z00_2680;
														BgL_tail1184z00_2679 = BgL_tail1184z00_3052;
														BgL_l1181z00_2678 = BgL_l1181z00_3051;
														goto BgL_zc3z04anonymousza31527ze3z87_2677;
													}
												}
											}
									}
								}
						}
						BgL_arg1521z00_2670 =
							BGl_redovarsze70ze7zz__evaluate_uncompz00(BgL_arg1524z00_2672,
							BgL_arg1525z00_2673);
					}
					BgL_arg1523z00_2671 =
						MAKE_YOUNG_PAIR(BGl_uncompz00zz__evaluate_uncompz00(
							(((BgL_ev_absz00_bglt) COBJECT(
										((BgL_ev_absz00_bglt) BgL_ez00_2616)))->BgL_bodyz00)),
						BNIL);
					BgL_arg1520z00_2669 =
						MAKE_YOUNG_PAIR(BgL_arg1521z00_2670, BgL_arg1523z00_2671);
				}
				return
					MAKE_YOUNG_PAIR(BGl_symbol2080z00zz__evaluate_uncompz00,
					BgL_arg1520z00_2669);
			}
		}

	}



/* rec~0 */
	obj_t BGl_recze70ze7zz__evaluate_uncompz00(obj_t BgL_lz00_1507)
	{
		{	/* Eval/evaluate_uncomp.scm 162 */
			if (NULLP(CDR(((obj_t) BgL_lz00_1507))))
				{	/* Eval/evaluate_uncomp.scm 163 */
					return CAR(((obj_t) BgL_lz00_1507));
				}
			else
				{	/* Eval/evaluate_uncomp.scm 165 */
					obj_t BgL_arg1540z00_1511;
					obj_t BgL_arg1541z00_1512;

					BgL_arg1540z00_1511 = CAR(((obj_t) BgL_lz00_1507));
					{	/* Eval/evaluate_uncomp.scm 165 */
						obj_t BgL_arg1542z00_1513;

						BgL_arg1542z00_1513 = CDR(((obj_t) BgL_lz00_1507));
						BgL_arg1541z00_1512 =
							BGl_recze70ze7zz__evaluate_uncompz00(BgL_arg1542z00_1513);
					}
					return MAKE_YOUNG_PAIR(BgL_arg1540z00_1511, BgL_arg1541z00_1512);
				}
		}

	}



/* redovars~0 */
	obj_t BGl_redovarsze70ze7zz__evaluate_uncompz00(obj_t BgL_nz00_1502,
		obj_t BgL_lz00_1503)
	{
		{	/* Eval/evaluate_uncomp.scm 165 */
			if (((long) CINT(BgL_nz00_1502) >= ((long) 0)))
				{	/* Eval/evaluate_uncomp.scm 160 */
					return BgL_lz00_1503;
				}
			else
				{	/* Eval/evaluate_uncomp.scm 160 */
					return BGl_recze70ze7zz__evaluate_uncompz00(BgL_lz00_1503);
				}
		}

	}



/* &uncomp-ev_app1243 */
	obj_t BGl_z62uncompzd2ev_app1243zb0zz__evaluate_uncompz00(obj_t
		BgL_envz00_2617, obj_t BgL_ez00_2618)
	{
		{	/* Eval/evaluate_uncomp.scm 153 */
			{	/* Eval/evaluate_uncomp.scm 155 */
				obj_t BgL_arg1507z00_2685;
				obj_t BgL_arg1508z00_2686;

				BgL_arg1507z00_2685 =
					BGl_uncompz00zz__evaluate_uncompz00(
					(((BgL_ev_appz00_bglt) COBJECT(
								((BgL_ev_appz00_bglt) BgL_ez00_2618)))->BgL_funz00));
				{	/* Eval/evaluate_uncomp.scm 155 */
					obj_t BgL_arg1510z00_2687;

					{	/* Eval/evaluate_uncomp.scm 155 */
						obj_t BgL_l1175z00_2688;

						BgL_l1175z00_2688 =
							(((BgL_ev_appz00_bglt) COBJECT(
									((BgL_ev_appz00_bglt) BgL_ez00_2618)))->BgL_argsz00);
						if (NULLP(BgL_l1175z00_2688))
							{	/* Eval/evaluate_uncomp.scm 155 */
								BgL_arg1510z00_2687 = BNIL;
							}
						else
							{	/* Eval/evaluate_uncomp.scm 155 */
								obj_t BgL_head1177z00_2689;

								{	/* Eval/evaluate_uncomp.scm 155 */
									obj_t BgL_arg1518z00_2690;

									{	/* Eval/evaluate_uncomp.scm 155 */
										obj_t BgL_arg1519z00_2691;

										BgL_arg1519z00_2691 = CAR(((obj_t) BgL_l1175z00_2688));
										BgL_arg1518z00_2690 =
											BGl_uncompz00zz__evaluate_uncompz00(
											((BgL_ev_exprz00_bglt) BgL_arg1519z00_2691));
									}
									{	/* Eval/evaluate_uncomp.scm 155 */
										obj_t BgL_res1949z00_2692;

										BgL_res1949z00_2692 =
											MAKE_YOUNG_PAIR(BgL_arg1518z00_2690, BNIL);
										BgL_head1177z00_2689 = BgL_res1949z00_2692;
									}
								}
								{	/* Eval/evaluate_uncomp.scm 155 */
									obj_t BgL_g1180z00_2693;

									BgL_g1180z00_2693 = CDR(((obj_t) BgL_l1175z00_2688));
									{
										obj_t BgL_l1175z00_2695;
										obj_t BgL_tail1178z00_2696;

										BgL_l1175z00_2695 = BgL_g1180z00_2693;
										BgL_tail1178z00_2696 = BgL_head1177z00_2689;
									BgL_zc3z04anonymousza31512ze3z87_2694:
										if (NULLP(BgL_l1175z00_2695))
											{	/* Eval/evaluate_uncomp.scm 155 */
												BgL_arg1510z00_2687 = BgL_head1177z00_2689;
											}
										else
											{	/* Eval/evaluate_uncomp.scm 155 */
												obj_t BgL_newtail1179z00_2697;

												{	/* Eval/evaluate_uncomp.scm 155 */
													obj_t BgL_arg1515z00_2698;

													{	/* Eval/evaluate_uncomp.scm 155 */
														obj_t BgL_arg1516z00_2699;

														BgL_arg1516z00_2699 =
															CAR(((obj_t) BgL_l1175z00_2695));
														BgL_arg1515z00_2698 =
															BGl_uncompz00zz__evaluate_uncompz00(
															((BgL_ev_exprz00_bglt) BgL_arg1516z00_2699));
													}
													{	/* Eval/evaluate_uncomp.scm 155 */
														obj_t BgL_res1957z00_2700;

														BgL_res1957z00_2700 =
															MAKE_YOUNG_PAIR(BgL_arg1515z00_2698, BNIL);
														BgL_newtail1179z00_2697 = BgL_res1957z00_2700;
													}
												}
												SET_CDR(BgL_tail1178z00_2696, BgL_newtail1179z00_2697);
												{	/* Eval/evaluate_uncomp.scm 155 */
													obj_t BgL_arg1514z00_2701;

													BgL_arg1514z00_2701 =
														CDR(((obj_t) BgL_l1175z00_2695));
													{
														obj_t BgL_tail1178z00_3101;
														obj_t BgL_l1175z00_3100;

														BgL_l1175z00_3100 = BgL_arg1514z00_2701;
														BgL_tail1178z00_3101 = BgL_newtail1179z00_2697;
														BgL_tail1178z00_2696 = BgL_tail1178z00_3101;
														BgL_l1175z00_2695 = BgL_l1175z00_3100;
														goto BgL_zc3z04anonymousza31512ze3z87_2694;
													}
												}
											}
									}
								}
							}
					}
					BgL_arg1508z00_2686 =
						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_arg1510z00_2687,
						BNIL);
				}
				return MAKE_YOUNG_PAIR(BgL_arg1507z00_2685, BgL_arg1508z00_2686);
			}
		}

	}



/* &uncomp-ev_goto1241 */
	obj_t BGl_z62uncompzd2ev_goto1241zb0zz__evaluate_uncompz00(obj_t
		BgL_envz00_2619, obj_t BgL_ez00_2620)
	{
		{	/* Eval/evaluate_uncomp.scm 149 */
			{	/* Eval/evaluate_uncomp.scm 151 */
				obj_t BgL_arg1491z00_2703;
				obj_t BgL_arg1492z00_2704;

				{	/* Eval/evaluate_uncomp.scm 151 */
					BgL_ev_varz00_bglt BgL_arg1493z00_2705;

					BgL_arg1493z00_2705 =
						(((BgL_ev_gotoz00_bglt) COBJECT(
								((BgL_ev_gotoz00_bglt) BgL_ez00_2620)))->BgL_labelz00);
					BgL_arg1491z00_2703 =
						BGl_uncompz00zz__evaluate_uncompz00(
						((BgL_ev_exprz00_bglt) BgL_arg1493z00_2705));
				}
				{	/* Eval/evaluate_uncomp.scm 151 */
					obj_t BgL_arg1494z00_2706;

					{	/* Eval/evaluate_uncomp.scm 151 */
						obj_t BgL_l1169z00_2707;

						BgL_l1169z00_2707 =
							(((BgL_ev_gotoz00_bglt) COBJECT(
									((BgL_ev_gotoz00_bglt) BgL_ez00_2620)))->BgL_argsz00);
						if (NULLP(BgL_l1169z00_2707))
							{	/* Eval/evaluate_uncomp.scm 151 */
								BgL_arg1494z00_2706 = BNIL;
							}
						else
							{	/* Eval/evaluate_uncomp.scm 151 */
								obj_t BgL_head1171z00_2708;

								{	/* Eval/evaluate_uncomp.scm 151 */
									obj_t BgL_arg1505z00_2709;

									{	/* Eval/evaluate_uncomp.scm 151 */
										obj_t BgL_arg1506z00_2710;

										BgL_arg1506z00_2710 = CAR(((obj_t) BgL_l1169z00_2707));
										BgL_arg1505z00_2709 =
											BGl_uncompz00zz__evaluate_uncompz00(
											((BgL_ev_exprz00_bglt) BgL_arg1506z00_2710));
									}
									{	/* Eval/evaluate_uncomp.scm 151 */
										obj_t BgL_res1941z00_2711;

										BgL_res1941z00_2711 =
											MAKE_YOUNG_PAIR(BgL_arg1505z00_2709, BNIL);
										BgL_head1171z00_2708 = BgL_res1941z00_2711;
									}
								}
								{	/* Eval/evaluate_uncomp.scm 151 */
									obj_t BgL_g1174z00_2712;

									BgL_g1174z00_2712 = CDR(((obj_t) BgL_l1169z00_2707));
									{
										obj_t BgL_l1169z00_2714;
										obj_t BgL_tail1172z00_2715;

										BgL_l1169z00_2714 = BgL_g1174z00_2712;
										BgL_tail1172z00_2715 = BgL_head1171z00_2708;
									BgL_zc3z04anonymousza31496ze3z87_2713:
										if (NULLP(BgL_l1169z00_2714))
											{	/* Eval/evaluate_uncomp.scm 151 */
												BgL_arg1494z00_2706 = BgL_head1171z00_2708;
											}
										else
											{	/* Eval/evaluate_uncomp.scm 151 */
												obj_t BgL_newtail1173z00_2716;

												{	/* Eval/evaluate_uncomp.scm 151 */
													obj_t BgL_arg1500z00_2717;

													{	/* Eval/evaluate_uncomp.scm 151 */
														obj_t BgL_arg1502z00_2718;

														BgL_arg1502z00_2718 =
															CAR(((obj_t) BgL_l1169z00_2714));
														BgL_arg1500z00_2717 =
															BGl_uncompz00zz__evaluate_uncompz00(
															((BgL_ev_exprz00_bglt) BgL_arg1502z00_2718));
													}
													{	/* Eval/evaluate_uncomp.scm 151 */
														obj_t BgL_res1947z00_2719;

														BgL_res1947z00_2719 =
															MAKE_YOUNG_PAIR(BgL_arg1500z00_2717, BNIL);
														BgL_newtail1173z00_2716 = BgL_res1947z00_2719;
													}
												}
												SET_CDR(BgL_tail1172z00_2715, BgL_newtail1173z00_2716);
												{	/* Eval/evaluate_uncomp.scm 151 */
													obj_t BgL_arg1498z00_2720;

													BgL_arg1498z00_2720 =
														CDR(((obj_t) BgL_l1169z00_2714));
													{
														obj_t BgL_tail1172z00_3130;
														obj_t BgL_l1169z00_3129;

														BgL_l1169z00_3129 = BgL_arg1498z00_2720;
														BgL_tail1172z00_3130 = BgL_newtail1173z00_2716;
														BgL_tail1172z00_2715 = BgL_tail1172z00_3130;
														BgL_l1169z00_2714 = BgL_l1169z00_3129;
														goto BgL_zc3z04anonymousza31496ze3z87_2713;
													}
												}
											}
									}
								}
							}
					}
					BgL_arg1492z00_2704 =
						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_arg1494z00_2706,
						BNIL);
				}
				return MAKE_YOUNG_PAIR(BgL_arg1491z00_2703, BgL_arg1492z00_2704);
			}
		}

	}



/* &uncomp-ev_labels1239 */
	obj_t BGl_z62uncompzd2ev_labels1239zb0zz__evaluate_uncompz00(obj_t
		BgL_envz00_2621, obj_t BgL_ez00_2622)
	{
		{	/* Eval/evaluate_uncomp.scm 142 */
			{	/* Eval/evaluate_uncomp.scm 144 */
				obj_t BgL_arg1460z00_2722;

				{	/* Eval/evaluate_uncomp.scm 144 */
					obj_t BgL_arg1461z00_2723;
					obj_t BgL_arg1462z00_2724;

					{	/* Eval/evaluate_uncomp.scm 144 */
						obj_t BgL_ll1163z00_2725;
						obj_t BgL_ll1164z00_2726;

						BgL_ll1163z00_2725 =
							(((BgL_ev_labelsz00_bglt) COBJECT(
									((BgL_ev_labelsz00_bglt) BgL_ez00_2622)))->BgL_varsz00);
						BgL_ll1164z00_2726 =
							(((BgL_ev_labelsz00_bglt) COBJECT(
									((BgL_ev_labelsz00_bglt) BgL_ez00_2622)))->BgL_valsz00);
						if (NULLP(BgL_ll1163z00_2725))
							{	/* Eval/evaluate_uncomp.scm 144 */
								BgL_arg1461z00_2723 = BNIL;
							}
						else
							{	/* Eval/evaluate_uncomp.scm 144 */
								obj_t BgL_head1165z00_2727;

								{	/* Eval/evaluate_uncomp.scm 144 */
									obj_t BgL_res1929z00_2728;

									BgL_res1929z00_2728 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									BgL_head1165z00_2727 = BgL_res1929z00_2728;
								}
								{
									obj_t BgL_ll1163z00_2730;
									obj_t BgL_ll1164z00_2731;
									obj_t BgL_tail1166z00_2732;

									BgL_ll1163z00_2730 = BgL_ll1163z00_2725;
									BgL_ll1164z00_2731 = BgL_ll1164z00_2726;
									BgL_tail1166z00_2732 = BgL_head1165z00_2727;
								BgL_zc3z04anonymousza31464ze3z87_2729:
									if (NULLP(BgL_ll1163z00_2730))
										{	/* Eval/evaluate_uncomp.scm 144 */
											BgL_arg1461z00_2723 = CDR(BgL_head1165z00_2727);
										}
									else
										{	/* Eval/evaluate_uncomp.scm 144 */
											obj_t BgL_newtail1167z00_2733;

											{	/* Eval/evaluate_uncomp.scm 144 */
												obj_t BgL_arg1468z00_2734;

												{	/* Eval/evaluate_uncomp.scm 144 */
													obj_t BgL_vz00_2735;
													obj_t BgL_az00_2736;

													BgL_vz00_2735 = CAR(((obj_t) BgL_ll1163z00_2730));
													BgL_az00_2736 = CAR(((obj_t) BgL_ll1164z00_2731));
													{	/* Eval/evaluate_uncomp.scm 144 */
														obj_t BgL_arg1469z00_2737;
														obj_t BgL_arg1470z00_2738;

														BgL_arg1469z00_2737 =
															BGl_uncompz00zz__evaluate_uncompz00(
															((BgL_ev_exprz00_bglt) BgL_vz00_2735));
														{	/* Eval/evaluate_uncomp.scm 144 */
															obj_t BgL_arg1471z00_2739;

															{	/* Eval/evaluate_uncomp.scm 144 */
																obj_t BgL_arg1472z00_2740;

																{	/* Eval/evaluate_uncomp.scm 144 */
																	obj_t BgL_arg1473z00_2741;
																	obj_t BgL_arg1474z00_2742;

																	{	/* Eval/evaluate_uncomp.scm 144 */
																		obj_t BgL_l1157z00_2743;

																		BgL_l1157z00_2743 =
																			CAR(((obj_t) BgL_az00_2736));
																		if (NULLP(BgL_l1157z00_2743))
																			{	/* Eval/evaluate_uncomp.scm 144 */
																				BgL_arg1473z00_2741 = BNIL;
																			}
																		else
																			{	/* Eval/evaluate_uncomp.scm 144 */
																				obj_t BgL_head1159z00_2744;

																				{	/* Eval/evaluate_uncomp.scm 144 */
																					obj_t BgL_arg1483z00_2745;

																					{	/* Eval/evaluate_uncomp.scm 144 */
																						obj_t BgL_arg1484z00_2746;

																						BgL_arg1484z00_2746 =
																							CAR(((obj_t) BgL_l1157z00_2743));
																						BgL_arg1483z00_2745 =
																							BGl_uncompz00zz__evaluate_uncompz00
																							(((BgL_ev_exprz00_bglt)
																								BgL_arg1484z00_2746));
																					}
																					{	/* Eval/evaluate_uncomp.scm 144 */
																						obj_t BgL_res1932z00_2747;

																						BgL_res1932z00_2747 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1483z00_2745, BNIL);
																						BgL_head1159z00_2744 =
																							BgL_res1932z00_2747;
																					}
																				}
																				{	/* Eval/evaluate_uncomp.scm 144 */
																					obj_t BgL_g1162z00_2748;

																					BgL_g1162z00_2748 =
																						CDR(((obj_t) BgL_l1157z00_2743));
																					{
																						obj_t BgL_l1157z00_2750;
																						obj_t BgL_tail1160z00_2751;

																						BgL_l1157z00_2750 =
																							BgL_g1162z00_2748;
																						BgL_tail1160z00_2751 =
																							BgL_head1159z00_2744;
																					BgL_zc3z04anonymousza31476ze3z87_2749:
																						if (NULLP
																							(BgL_l1157z00_2750))
																							{	/* Eval/evaluate_uncomp.scm 144 */
																								BgL_arg1473z00_2741 =
																									BgL_head1159z00_2744;
																							}
																						else
																							{	/* Eval/evaluate_uncomp.scm 144 */
																								obj_t BgL_newtail1161z00_2752;

																								{	/* Eval/evaluate_uncomp.scm 144 */
																									obj_t BgL_arg1479z00_2753;

																									{	/* Eval/evaluate_uncomp.scm 144 */
																										obj_t BgL_arg1480z00_2754;

																										BgL_arg1480z00_2754 =
																											CAR(
																											((obj_t)
																												BgL_l1157z00_2750));
																										BgL_arg1479z00_2753 =
																											BGl_uncompz00zz__evaluate_uncompz00
																											(((BgL_ev_exprz00_bglt)
																												BgL_arg1480z00_2754));
																									}
																									{	/* Eval/evaluate_uncomp.scm 144 */
																										obj_t BgL_res1938z00_2755;

																										BgL_res1938z00_2755 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1479z00_2753,
																											BNIL);
																										BgL_newtail1161z00_2752 =
																											BgL_res1938z00_2755;
																									}
																								}
																								SET_CDR(BgL_tail1160z00_2751,
																									BgL_newtail1161z00_2752);
																								{	/* Eval/evaluate_uncomp.scm 144 */
																									obj_t BgL_arg1478z00_2756;

																									BgL_arg1478z00_2756 =
																										CDR(
																										((obj_t)
																											BgL_l1157z00_2750));
																									{
																										obj_t BgL_tail1160z00_3171;
																										obj_t BgL_l1157z00_3170;

																										BgL_l1157z00_3170 =
																											BgL_arg1478z00_2756;
																										BgL_tail1160z00_3171 =
																											BgL_newtail1161z00_2752;
																										BgL_tail1160z00_2751 =
																											BgL_tail1160z00_3171;
																										BgL_l1157z00_2750 =
																											BgL_l1157z00_3170;
																										goto
																											BgL_zc3z04anonymousza31476ze3z87_2749;
																									}
																								}
																							}
																					}
																				}
																			}
																	}
																	{	/* Eval/evaluate_uncomp.scm 145 */
																		obj_t BgL_arg1485z00_2757;

																		{	/* Eval/evaluate_uncomp.scm 145 */
																			obj_t BgL_arg1486z00_2758;

																			BgL_arg1486z00_2758 =
																				CDR(((obj_t) BgL_az00_2736));
																			BgL_arg1485z00_2757 =
																				BGl_uncompz00zz__evaluate_uncompz00(
																				((BgL_ev_exprz00_bglt)
																					BgL_arg1486z00_2758));
																		}
																		BgL_arg1474z00_2742 =
																			MAKE_YOUNG_PAIR(BgL_arg1485z00_2757,
																			BNIL);
																	}
																	BgL_arg1472z00_2740 =
																		MAKE_YOUNG_PAIR(BgL_arg1473z00_2741,
																		BgL_arg1474z00_2742);
																}
																BgL_arg1471z00_2739 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol2080z00zz__evaluate_uncompz00,
																	BgL_arg1472z00_2740);
															}
															BgL_arg1470z00_2738 =
																MAKE_YOUNG_PAIR(BgL_arg1471z00_2739, BNIL);
														}
														BgL_arg1468z00_2734 =
															MAKE_YOUNG_PAIR(BgL_arg1469z00_2737,
															BgL_arg1470z00_2738);
													}
												}
												{	/* Eval/evaluate_uncomp.scm 144 */
													obj_t BgL_res1939z00_2759;

													BgL_res1939z00_2759 =
														MAKE_YOUNG_PAIR(BgL_arg1468z00_2734, BNIL);
													BgL_newtail1167z00_2733 = BgL_res1939z00_2759;
												}
											}
											SET_CDR(BgL_tail1166z00_2732, BgL_newtail1167z00_2733);
											{	/* Eval/evaluate_uncomp.scm 144 */
												obj_t BgL_arg1466z00_2760;
												obj_t BgL_arg1467z00_2761;

												BgL_arg1466z00_2760 = CDR(((obj_t) BgL_ll1163z00_2730));
												BgL_arg1467z00_2761 = CDR(((obj_t) BgL_ll1164z00_2731));
												{
													obj_t BgL_tail1166z00_3189;
													obj_t BgL_ll1164z00_3188;
													obj_t BgL_ll1163z00_3187;

													BgL_ll1163z00_3187 = BgL_arg1466z00_2760;
													BgL_ll1164z00_3188 = BgL_arg1467z00_2761;
													BgL_tail1166z00_3189 = BgL_newtail1167z00_2733;
													BgL_tail1166z00_2732 = BgL_tail1166z00_3189;
													BgL_ll1164z00_2731 = BgL_ll1164z00_3188;
													BgL_ll1163z00_2730 = BgL_ll1163z00_3187;
													goto BgL_zc3z04anonymousza31464ze3z87_2729;
												}
											}
										}
								}
							}
					}
					BgL_arg1462z00_2724 =
						MAKE_YOUNG_PAIR(BGl_uncompz00zz__evaluate_uncompz00(
							(((BgL_ev_labelsz00_bglt) COBJECT(
										((BgL_ev_labelsz00_bglt) BgL_ez00_2622)))->BgL_bodyz00)),
						BNIL);
					BgL_arg1460z00_2722 =
						MAKE_YOUNG_PAIR(BgL_arg1461z00_2723, BgL_arg1462z00_2724);
				}
				return
					MAKE_YOUNG_PAIR(BGl_symbol2082z00zz__evaluate_uncompz00,
					BgL_arg1460z00_2722);
			}
		}

	}



/* &uncomp-ev_letrec1237 */
	obj_t BGl_z62uncompzd2ev_letrec1237zb0zz__evaluate_uncompz00(obj_t
		BgL_envz00_2623, obj_t BgL_ez00_2624)
	{
		{	/* Eval/evaluate_uncomp.scm 138 */
			{	/* Eval/evaluate_uncomp.scm 140 */
				obj_t BgL_arg1445z00_2763;

				{	/* Eval/evaluate_uncomp.scm 140 */
					obj_t BgL_arg1446z00_2764;
					obj_t BgL_arg1448z00_2765;

					{	/* Eval/evaluate_uncomp.scm 140 */
						obj_t BgL_ll1151z00_2766;
						obj_t BgL_ll1152z00_2767;

						BgL_ll1151z00_2766 =
							(((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt)
										((BgL_ev_letrecz00_bglt) BgL_ez00_2624))))->BgL_varsz00);
						BgL_ll1152z00_2767 =
							(((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt)
										((BgL_ev_letrecz00_bglt) BgL_ez00_2624))))->BgL_valsz00);
						if (NULLP(BgL_ll1151z00_2766))
							{	/* Eval/evaluate_uncomp.scm 140 */
								BgL_arg1446z00_2764 = BNIL;
							}
						else
							{	/* Eval/evaluate_uncomp.scm 140 */
								obj_t BgL_head1153z00_2768;

								{	/* Eval/evaluate_uncomp.scm 140 */
									obj_t BgL_res1925z00_2769;

									BgL_res1925z00_2769 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									BgL_head1153z00_2768 = BgL_res1925z00_2769;
								}
								{
									obj_t BgL_ll1151z00_2771;
									obj_t BgL_ll1152z00_2772;
									obj_t BgL_tail1154z00_2773;

									BgL_ll1151z00_2771 = BgL_ll1151z00_2766;
									BgL_ll1152z00_2772 = BgL_ll1152z00_2767;
									BgL_tail1154z00_2773 = BgL_head1153z00_2768;
								BgL_zc3z04anonymousza31450ze3z87_2770:
									if (NULLP(BgL_ll1151z00_2771))
										{	/* Eval/evaluate_uncomp.scm 140 */
											BgL_arg1446z00_2764 = CDR(BgL_head1153z00_2768);
										}
									else
										{	/* Eval/evaluate_uncomp.scm 140 */
											obj_t BgL_newtail1155z00_2774;

											{	/* Eval/evaluate_uncomp.scm 140 */
												obj_t BgL_arg1454z00_2775;

												{	/* Eval/evaluate_uncomp.scm 140 */
													obj_t BgL_vz00_2776;
													obj_t BgL_az00_2777;

													BgL_vz00_2776 = CAR(((obj_t) BgL_ll1151z00_2771));
													BgL_az00_2777 = CAR(((obj_t) BgL_ll1152z00_2772));
													{	/* Eval/evaluate_uncomp.scm 140 */
														obj_t BgL_arg1455z00_2778;
														obj_t BgL_arg1456z00_2779;

														BgL_arg1455z00_2778 =
															BGl_uncompz00zz__evaluate_uncompz00(
															((BgL_ev_exprz00_bglt) BgL_vz00_2776));
														{	/* Eval/evaluate_uncomp.scm 140 */
															obj_t BgL_arg1457z00_2780;

															BgL_arg1457z00_2780 =
																BGl_uncompz00zz__evaluate_uncompz00(
																((BgL_ev_exprz00_bglt) BgL_az00_2777));
															BgL_arg1456z00_2779 =
																MAKE_YOUNG_PAIR(BgL_arg1457z00_2780, BNIL);
														}
														BgL_arg1454z00_2775 =
															MAKE_YOUNG_PAIR(BgL_arg1455z00_2778,
															BgL_arg1456z00_2779);
													}
												}
												{	/* Eval/evaluate_uncomp.scm 140 */
													obj_t BgL_res1927z00_2781;

													BgL_res1927z00_2781 =
														MAKE_YOUNG_PAIR(BgL_arg1454z00_2775, BNIL);
													BgL_newtail1155z00_2774 = BgL_res1927z00_2781;
												}
											}
											SET_CDR(BgL_tail1154z00_2773, BgL_newtail1155z00_2774);
											{	/* Eval/evaluate_uncomp.scm 140 */
												obj_t BgL_arg1452z00_2782;
												obj_t BgL_arg1453z00_2783;

												BgL_arg1452z00_2782 = CDR(((obj_t) BgL_ll1151z00_2771));
												BgL_arg1453z00_2783 = CDR(((obj_t) BgL_ll1152z00_2772));
												{
													obj_t BgL_tail1154z00_3226;
													obj_t BgL_ll1152z00_3225;
													obj_t BgL_ll1151z00_3224;

													BgL_ll1151z00_3224 = BgL_arg1452z00_2782;
													BgL_ll1152z00_3225 = BgL_arg1453z00_2783;
													BgL_tail1154z00_3226 = BgL_newtail1155z00_2774;
													BgL_tail1154z00_2773 = BgL_tail1154z00_3226;
													BgL_ll1152z00_2772 = BgL_ll1152z00_3225;
													BgL_ll1151z00_2771 = BgL_ll1151z00_3224;
													goto BgL_zc3z04anonymousza31450ze3z87_2770;
												}
											}
										}
								}
							}
					}
					{	/* Eval/evaluate_uncomp.scm 140 */
						obj_t BgL_arg1458z00_2784;

						{	/* Eval/evaluate_uncomp.scm 140 */
							BgL_ev_exprz00_bglt BgL_arg1459z00_2785;

							BgL_arg1459z00_2785 =
								(((BgL_ev_binderz00_bglt) COBJECT(
										((BgL_ev_binderz00_bglt)
											((BgL_ev_letrecz00_bglt) BgL_ez00_2624))))->BgL_bodyz00);
							BgL_arg1458z00_2784 =
								BGl_uncompz00zz__evaluate_uncompz00(BgL_arg1459z00_2785);
						}
						BgL_arg1448z00_2765 = MAKE_YOUNG_PAIR(BgL_arg1458z00_2784, BNIL);
					}
					BgL_arg1445z00_2763 =
						MAKE_YOUNG_PAIR(BgL_arg1446z00_2764, BgL_arg1448z00_2765);
				}
				return
					MAKE_YOUNG_PAIR(BGl_symbol2082z00zz__evaluate_uncompz00,
					BgL_arg1445z00_2763);
			}
		}

	}



/* &uncomp-ev_let*1235 */
	obj_t BGl_z62uncompzd2ev_letza21235z12zz__evaluate_uncompz00(obj_t
		BgL_envz00_2625, obj_t BgL_ez00_2626)
	{
		{	/* Eval/evaluate_uncomp.scm 134 */
			{	/* Eval/evaluate_uncomp.scm 136 */
				obj_t BgL_arg1431z00_2787;

				{	/* Eval/evaluate_uncomp.scm 136 */
					obj_t BgL_arg1432z00_2788;
					obj_t BgL_arg1433z00_2789;

					{	/* Eval/evaluate_uncomp.scm 136 */
						obj_t BgL_ll1145z00_2790;
						obj_t BgL_ll1146z00_2791;

						BgL_ll1145z00_2790 =
							(((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt)
										((BgL_ev_letza2za2_bglt) BgL_ez00_2626))))->BgL_varsz00);
						BgL_ll1146z00_2791 =
							(((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt)
										((BgL_ev_letza2za2_bglt) BgL_ez00_2626))))->BgL_valsz00);
						if (NULLP(BgL_ll1145z00_2790))
							{	/* Eval/evaluate_uncomp.scm 136 */
								BgL_arg1432z00_2788 = BNIL;
							}
						else
							{	/* Eval/evaluate_uncomp.scm 136 */
								obj_t BgL_head1147z00_2792;

								{	/* Eval/evaluate_uncomp.scm 136 */
									obj_t BgL_res1921z00_2793;

									BgL_res1921z00_2793 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									BgL_head1147z00_2792 = BgL_res1921z00_2793;
								}
								{
									obj_t BgL_ll1145z00_2795;
									obj_t BgL_ll1146z00_2796;
									obj_t BgL_tail1148z00_2797;

									BgL_ll1145z00_2795 = BgL_ll1145z00_2790;
									BgL_ll1146z00_2796 = BgL_ll1146z00_2791;
									BgL_tail1148z00_2797 = BgL_head1147z00_2792;
								BgL_zc3z04anonymousza31435ze3z87_2794:
									if (NULLP(BgL_ll1145z00_2795))
										{	/* Eval/evaluate_uncomp.scm 136 */
											BgL_arg1432z00_2788 = CDR(BgL_head1147z00_2792);
										}
									else
										{	/* Eval/evaluate_uncomp.scm 136 */
											obj_t BgL_newtail1149z00_2798;

											{	/* Eval/evaluate_uncomp.scm 136 */
												obj_t BgL_arg1439z00_2799;

												{	/* Eval/evaluate_uncomp.scm 136 */
													obj_t BgL_vz00_2800;
													obj_t BgL_az00_2801;

													BgL_vz00_2800 = CAR(((obj_t) BgL_ll1145z00_2795));
													BgL_az00_2801 = CAR(((obj_t) BgL_ll1146z00_2796));
													{	/* Eval/evaluate_uncomp.scm 136 */
														obj_t BgL_arg1440z00_2802;
														obj_t BgL_arg1441z00_2803;

														BgL_arg1440z00_2802 =
															BGl_uncompz00zz__evaluate_uncompz00(
															((BgL_ev_exprz00_bglt) BgL_vz00_2800));
														{	/* Eval/evaluate_uncomp.scm 136 */
															obj_t BgL_arg1442z00_2804;

															BgL_arg1442z00_2804 =
																BGl_uncompz00zz__evaluate_uncompz00(
																((BgL_ev_exprz00_bglt) BgL_az00_2801));
															BgL_arg1441z00_2803 =
																MAKE_YOUNG_PAIR(BgL_arg1442z00_2804, BNIL);
														}
														BgL_arg1439z00_2799 =
															MAKE_YOUNG_PAIR(BgL_arg1440z00_2802,
															BgL_arg1441z00_2803);
													}
												}
												{	/* Eval/evaluate_uncomp.scm 136 */
													obj_t BgL_res1923z00_2805;

													BgL_res1923z00_2805 =
														MAKE_YOUNG_PAIR(BgL_arg1439z00_2799, BNIL);
													BgL_newtail1149z00_2798 = BgL_res1923z00_2805;
												}
											}
											SET_CDR(BgL_tail1148z00_2797, BgL_newtail1149z00_2798);
											{	/* Eval/evaluate_uncomp.scm 136 */
												obj_t BgL_arg1437z00_2806;
												obj_t BgL_arg1438z00_2807;

												BgL_arg1437z00_2806 = CDR(((obj_t) BgL_ll1145z00_2795));
												BgL_arg1438z00_2807 = CDR(((obj_t) BgL_ll1146z00_2796));
												{
													obj_t BgL_tail1148z00_3264;
													obj_t BgL_ll1146z00_3263;
													obj_t BgL_ll1145z00_3262;

													BgL_ll1145z00_3262 = BgL_arg1437z00_2806;
													BgL_ll1146z00_3263 = BgL_arg1438z00_2807;
													BgL_tail1148z00_3264 = BgL_newtail1149z00_2798;
													BgL_tail1148z00_2797 = BgL_tail1148z00_3264;
													BgL_ll1146z00_2796 = BgL_ll1146z00_3263;
													BgL_ll1145z00_2795 = BgL_ll1145z00_3262;
													goto BgL_zc3z04anonymousza31435ze3z87_2794;
												}
											}
										}
								}
							}
					}
					{	/* Eval/evaluate_uncomp.scm 136 */
						obj_t BgL_arg1443z00_2808;

						{	/* Eval/evaluate_uncomp.scm 136 */
							BgL_ev_exprz00_bglt BgL_arg1444z00_2809;

							BgL_arg1444z00_2809 =
								(((BgL_ev_binderz00_bglt) COBJECT(
										((BgL_ev_binderz00_bglt)
											((BgL_ev_letza2za2_bglt) BgL_ez00_2626))))->BgL_bodyz00);
							BgL_arg1443z00_2808 =
								BGl_uncompz00zz__evaluate_uncompz00(BgL_arg1444z00_2809);
						}
						BgL_arg1433z00_2789 = MAKE_YOUNG_PAIR(BgL_arg1443z00_2808, BNIL);
					}
					BgL_arg1431z00_2787 =
						MAKE_YOUNG_PAIR(BgL_arg1432z00_2788, BgL_arg1433z00_2789);
				}
				return
					MAKE_YOUNG_PAIR(BGl_symbol2084z00zz__evaluate_uncompz00,
					BgL_arg1431z00_2787);
			}
		}

	}



/* &uncomp-ev_let1233 */
	obj_t BGl_z62uncompzd2ev_let1233zb0zz__evaluate_uncompz00(obj_t
		BgL_envz00_2627, obj_t BgL_ez00_2628)
	{
		{	/* Eval/evaluate_uncomp.scm 130 */
			{	/* Eval/evaluate_uncomp.scm 132 */
				obj_t BgL_arg1416z00_2811;

				{	/* Eval/evaluate_uncomp.scm 132 */
					obj_t BgL_arg1417z00_2812;
					obj_t BgL_arg1418z00_2813;

					{	/* Eval/evaluate_uncomp.scm 132 */
						obj_t BgL_ll1139z00_2814;
						obj_t BgL_ll1140z00_2815;

						BgL_ll1139z00_2814 =
							(((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt)
										((BgL_ev_letz00_bglt) BgL_ez00_2628))))->BgL_varsz00);
						BgL_ll1140z00_2815 =
							(((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt)
										((BgL_ev_letz00_bglt) BgL_ez00_2628))))->BgL_valsz00);
						if (NULLP(BgL_ll1139z00_2814))
							{	/* Eval/evaluate_uncomp.scm 132 */
								BgL_arg1417z00_2812 = BNIL;
							}
						else
							{	/* Eval/evaluate_uncomp.scm 132 */
								obj_t BgL_head1141z00_2816;

								{	/* Eval/evaluate_uncomp.scm 132 */
									obj_t BgL_res1917z00_2817;

									BgL_res1917z00_2817 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									BgL_head1141z00_2816 = BgL_res1917z00_2817;
								}
								{
									obj_t BgL_ll1139z00_2819;
									obj_t BgL_ll1140z00_2820;
									obj_t BgL_tail1142z00_2821;

									BgL_ll1139z00_2819 = BgL_ll1139z00_2814;
									BgL_ll1140z00_2820 = BgL_ll1140z00_2815;
									BgL_tail1142z00_2821 = BgL_head1141z00_2816;
								BgL_zc3z04anonymousza31420ze3z87_2818:
									if (NULLP(BgL_ll1139z00_2819))
										{	/* Eval/evaluate_uncomp.scm 132 */
											BgL_arg1417z00_2812 = CDR(BgL_head1141z00_2816);
										}
									else
										{	/* Eval/evaluate_uncomp.scm 132 */
											obj_t BgL_newtail1143z00_2822;

											{	/* Eval/evaluate_uncomp.scm 132 */
												obj_t BgL_arg1425z00_2823;

												{	/* Eval/evaluate_uncomp.scm 132 */
													obj_t BgL_vz00_2824;
													obj_t BgL_az00_2825;

													BgL_vz00_2824 = CAR(((obj_t) BgL_ll1139z00_2819));
													BgL_az00_2825 = CAR(((obj_t) BgL_ll1140z00_2820));
													{	/* Eval/evaluate_uncomp.scm 132 */
														obj_t BgL_arg1426z00_2826;
														obj_t BgL_arg1427z00_2827;

														BgL_arg1426z00_2826 =
															BGl_uncompz00zz__evaluate_uncompz00(
															((BgL_ev_exprz00_bglt) BgL_vz00_2824));
														{	/* Eval/evaluate_uncomp.scm 132 */
															obj_t BgL_arg1428z00_2828;

															BgL_arg1428z00_2828 =
																BGl_uncompz00zz__evaluate_uncompz00(
																((BgL_ev_exprz00_bglt) BgL_az00_2825));
															BgL_arg1427z00_2827 =
																MAKE_YOUNG_PAIR(BgL_arg1428z00_2828, BNIL);
														}
														BgL_arg1425z00_2823 =
															MAKE_YOUNG_PAIR(BgL_arg1426z00_2826,
															BgL_arg1427z00_2827);
													}
												}
												{	/* Eval/evaluate_uncomp.scm 132 */
													obj_t BgL_res1919z00_2829;

													BgL_res1919z00_2829 =
														MAKE_YOUNG_PAIR(BgL_arg1425z00_2823, BNIL);
													BgL_newtail1143z00_2822 = BgL_res1919z00_2829;
												}
											}
											SET_CDR(BgL_tail1142z00_2821, BgL_newtail1143z00_2822);
											{	/* Eval/evaluate_uncomp.scm 132 */
												obj_t BgL_arg1422z00_2830;
												obj_t BgL_arg1424z00_2831;

												BgL_arg1422z00_2830 = CDR(((obj_t) BgL_ll1139z00_2819));
												BgL_arg1424z00_2831 = CDR(((obj_t) BgL_ll1140z00_2820));
												{
													obj_t BgL_tail1142z00_3302;
													obj_t BgL_ll1140z00_3301;
													obj_t BgL_ll1139z00_3300;

													BgL_ll1139z00_3300 = BgL_arg1422z00_2830;
													BgL_ll1140z00_3301 = BgL_arg1424z00_2831;
													BgL_tail1142z00_3302 = BgL_newtail1143z00_2822;
													BgL_tail1142z00_2821 = BgL_tail1142z00_3302;
													BgL_ll1140z00_2820 = BgL_ll1140z00_3301;
													BgL_ll1139z00_2819 = BgL_ll1139z00_3300;
													goto BgL_zc3z04anonymousza31420ze3z87_2818;
												}
											}
										}
								}
							}
					}
					{	/* Eval/evaluate_uncomp.scm 132 */
						obj_t BgL_arg1429z00_2832;

						{	/* Eval/evaluate_uncomp.scm 132 */
							BgL_ev_exprz00_bglt BgL_arg1430z00_2833;

							BgL_arg1430z00_2833 =
								(((BgL_ev_binderz00_bglt) COBJECT(
										((BgL_ev_binderz00_bglt)
											((BgL_ev_letz00_bglt) BgL_ez00_2628))))->BgL_bodyz00);
							BgL_arg1429z00_2832 =
								BGl_uncompz00zz__evaluate_uncompz00(BgL_arg1430z00_2833);
						}
						BgL_arg1418z00_2813 = MAKE_YOUNG_PAIR(BgL_arg1429z00_2832, BNIL);
					}
					BgL_arg1416z00_2811 =
						MAKE_YOUNG_PAIR(BgL_arg1417z00_2812, BgL_arg1418z00_2813);
				}
				return
					MAKE_YOUNG_PAIR(BGl_symbol2086z00zz__evaluate_uncompz00,
					BgL_arg1416z00_2811);
			}
		}

	}



/* &uncomp-ev_synchroniz1231 */
	obj_t BGl_z62uncompzd2ev_synchroniza71231z17zz__evaluate_uncompz00(obj_t
		BgL_envz00_2629, obj_t BgL_ez00_2630)
	{
		{	/* Eval/evaluate_uncomp.scm 126 */
			{	/* Eval/evaluate_uncomp.scm 128 */
				obj_t BgL_arg1405z00_2835;

				{	/* Eval/evaluate_uncomp.scm 128 */
					obj_t BgL_arg1406z00_2836;
					obj_t BgL_arg1407z00_2837;

					BgL_arg1406z00_2836 =
						BGl_uncompz00zz__evaluate_uncompz00(
						(((BgL_ev_synchroniza7eza7_bglt) COBJECT(
									((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_2630)))->
							BgL_mutexz00));
					{	/* Eval/evaluate_uncomp.scm 128 */
						obj_t BgL_arg1410z00_2838;

						{	/* Eval/evaluate_uncomp.scm 128 */
							obj_t BgL_arg1411z00_2839;
							obj_t BgL_arg1412z00_2840;

							BgL_arg1411z00_2839 =
								BGl_uncompz00zz__evaluate_uncompz00(
								(((BgL_ev_synchroniza7eza7_bglt) COBJECT(
											((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_2630)))->
									BgL_prelockz00));
							BgL_arg1412z00_2840 =
								MAKE_YOUNG_PAIR(BGl_uncompz00zz__evaluate_uncompz00(((
											(BgL_ev_synchroniza7eza7_bglt)
											COBJECT(((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_2630)))->
										BgL_bodyz00)), BNIL);
							BgL_arg1410z00_2838 =
								MAKE_YOUNG_PAIR(BgL_arg1411z00_2839, BgL_arg1412z00_2840);
						}
						BgL_arg1407z00_2837 =
							MAKE_YOUNG_PAIR(BGl_keyword2088z00zz__evaluate_uncompz00,
							BgL_arg1410z00_2838);
					}
					BgL_arg1405z00_2835 =
						MAKE_YOUNG_PAIR(BgL_arg1406z00_2836, BgL_arg1407z00_2837);
				}
				return
					MAKE_YOUNG_PAIR(BGl_symbol2090z00zz__evaluate_uncompz00,
					BgL_arg1405z00_2835);
			}
		}

	}



/* &uncomp-ev_with-handl1229 */
	obj_t BGl_z62uncompzd2ev_withzd2handl1229z62zz__evaluate_uncompz00(obj_t
		BgL_envz00_2631, obj_t BgL_ez00_2632)
	{
		{	/* Eval/evaluate_uncomp.scm 122 */
			{	/* Eval/evaluate_uncomp.scm 124 */
				obj_t BgL_arg1398z00_2842;

				{	/* Eval/evaluate_uncomp.scm 124 */
					obj_t BgL_arg1399z00_2843;
					obj_t BgL_arg1400z00_2844;

					BgL_arg1399z00_2843 =
						BGl_uncompz00zz__evaluate_uncompz00(
						(((BgL_ev_withzd2handlerzd2_bglt) COBJECT(
									((BgL_ev_withzd2handlerzd2_bglt) BgL_ez00_2632)))->
							BgL_handlerz00));
					BgL_arg1400z00_2844 =
						MAKE_YOUNG_PAIR(BGl_uncompz00zz__evaluate_uncompz00(((
									(BgL_ev_withzd2handlerzd2_bglt)
									COBJECT(((BgL_ev_withzd2handlerzd2_bglt) BgL_ez00_2632)))->
								BgL_bodyz00)), BNIL);
					BgL_arg1398z00_2842 =
						MAKE_YOUNG_PAIR(BgL_arg1399z00_2843, BgL_arg1400z00_2844);
				}
				return
					MAKE_YOUNG_PAIR(BGl_symbol2092z00zz__evaluate_uncompz00,
					BgL_arg1398z00_2842);
			}
		}

	}



/* &uncomp-ev_unwind-pro1227 */
	obj_t BGl_z62uncompzd2ev_unwindzd2pro1227z62zz__evaluate_uncompz00(obj_t
		BgL_envz00_2633, obj_t BgL_ez00_2634)
	{
		{	/* Eval/evaluate_uncomp.scm 118 */
			{	/* Eval/evaluate_uncomp.scm 120 */
				obj_t BgL_arg1392z00_2846;

				{	/* Eval/evaluate_uncomp.scm 120 */
					obj_t BgL_arg1393z00_2847;
					obj_t BgL_arg1394z00_2848;

					BgL_arg1393z00_2847 =
						BGl_uncompz00zz__evaluate_uncompz00(
						(((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(
									((BgL_ev_unwindzd2protectzd2_bglt) BgL_ez00_2634)))->
							BgL_ez00));
					BgL_arg1394z00_2848 =
						MAKE_YOUNG_PAIR(BGl_uncompz00zz__evaluate_uncompz00(((
									(BgL_ev_unwindzd2protectzd2_bglt)
									COBJECT(((BgL_ev_unwindzd2protectzd2_bglt) BgL_ez00_2634)))->
								BgL_bodyz00)), BNIL);
					BgL_arg1392z00_2846 =
						MAKE_YOUNG_PAIR(BgL_arg1393z00_2847, BgL_arg1394z00_2848);
				}
				return
					MAKE_YOUNG_PAIR(BGl_symbol2094z00zz__evaluate_uncompz00,
					BgL_arg1392z00_2846);
			}
		}

	}



/* &uncomp-ev_bind-exit1225 */
	obj_t BGl_z62uncompzd2ev_bindzd2exit1225z62zz__evaluate_uncompz00(obj_t
		BgL_envz00_2635, obj_t BgL_ez00_2636)
	{
		{	/* Eval/evaluate_uncomp.scm 114 */
			{	/* Eval/evaluate_uncomp.scm 116 */
				obj_t BgL_arg1385z00_2850;

				{	/* Eval/evaluate_uncomp.scm 116 */
					obj_t BgL_arg1386z00_2851;
					obj_t BgL_arg1387z00_2852;

					{	/* Eval/evaluate_uncomp.scm 116 */
						obj_t BgL_arg1388z00_2853;

						{	/* Eval/evaluate_uncomp.scm 116 */
							BgL_ev_varz00_bglt BgL_arg1389z00_2854;

							BgL_arg1389z00_2854 =
								(((BgL_ev_bindzd2exitzd2_bglt) COBJECT(
										((BgL_ev_bindzd2exitzd2_bglt) BgL_ez00_2636)))->BgL_varz00);
							BgL_arg1388z00_2853 =
								BGl_uncompz00zz__evaluate_uncompz00(
								((BgL_ev_exprz00_bglt) BgL_arg1389z00_2854));
						}
						BgL_arg1386z00_2851 = MAKE_YOUNG_PAIR(BgL_arg1388z00_2853, BNIL);
					}
					BgL_arg1387z00_2852 =
						MAKE_YOUNG_PAIR(BGl_uncompz00zz__evaluate_uncompz00(
							(((BgL_ev_bindzd2exitzd2_bglt) COBJECT(
										((BgL_ev_bindzd2exitzd2_bglt) BgL_ez00_2636)))->
								BgL_bodyz00)), BNIL);
					BgL_arg1385z00_2850 =
						MAKE_YOUNG_PAIR(BgL_arg1386z00_2851, BgL_arg1387z00_2852);
				}
				return
					MAKE_YOUNG_PAIR(BGl_symbol2096z00zz__evaluate_uncompz00,
					BgL_arg1385z00_2850);
			}
		}

	}



/* &uncomp-ev_setlocal1223 */
	obj_t BGl_z62uncompzd2ev_setlocal1223zb0zz__evaluate_uncompz00(obj_t
		BgL_envz00_2637, obj_t BgL_ez00_2638)
	{
		{	/* Eval/evaluate_uncomp.scm 110 */
			{	/* Eval/evaluate_uncomp.scm 112 */
				obj_t BgL_arg1379z00_2856;

				{	/* Eval/evaluate_uncomp.scm 112 */
					obj_t BgL_arg1380z00_2857;
					obj_t BgL_arg1381z00_2858;

					{	/* Eval/evaluate_uncomp.scm 112 */
						BgL_ev_varz00_bglt BgL_arg1382z00_2859;

						BgL_arg1382z00_2859 =
							(((BgL_ev_setlocalz00_bglt) COBJECT(
									((BgL_ev_setlocalz00_bglt) BgL_ez00_2638)))->BgL_vz00);
						BgL_arg1380z00_2857 =
							BGl_uncompz00zz__evaluate_uncompz00(
							((BgL_ev_exprz00_bglt) BgL_arg1382z00_2859));
					}
					{	/* Eval/evaluate_uncomp.scm 112 */
						obj_t BgL_arg1383z00_2860;

						{	/* Eval/evaluate_uncomp.scm 112 */
							BgL_ev_exprz00_bglt BgL_arg1384z00_2861;

							BgL_arg1384z00_2861 =
								(((BgL_ev_hookz00_bglt) COBJECT(
										((BgL_ev_hookz00_bglt)
											((BgL_ev_setlocalz00_bglt) BgL_ez00_2638))))->BgL_ez00);
							BgL_arg1383z00_2860 =
								BGl_uncompz00zz__evaluate_uncompz00(BgL_arg1384z00_2861);
						}
						BgL_arg1381z00_2858 = MAKE_YOUNG_PAIR(BgL_arg1383z00_2860, BNIL);
					}
					BgL_arg1379z00_2856 =
						MAKE_YOUNG_PAIR(BgL_arg1380z00_2857, BgL_arg1381z00_2858);
				}
				return
					MAKE_YOUNG_PAIR(BGl_symbol2098z00zz__evaluate_uncompz00,
					BgL_arg1379z00_2856);
			}
		}

	}



/* &uncomp-ev_defglobal1221 */
	obj_t BGl_z62uncompzd2ev_defglobal1221zb0zz__evaluate_uncompz00(obj_t
		BgL_envz00_2639, obj_t BgL_ez00_2640)
	{
		{	/* Eval/evaluate_uncomp.scm 106 */
			{	/* Eval/evaluate_uncomp.scm 108 */
				obj_t BgL_arg1374z00_2863;

				{	/* Eval/evaluate_uncomp.scm 108 */
					obj_t BgL_arg1375z00_2864;
					obj_t BgL_arg1376z00_2865;

					BgL_arg1375z00_2864 =
						(((BgL_ev_setglobalz00_bglt) COBJECT(
								((BgL_ev_setglobalz00_bglt)
									((BgL_ev_defglobalz00_bglt) BgL_ez00_2640))))->BgL_namez00);
					{	/* Eval/evaluate_uncomp.scm 108 */
						obj_t BgL_arg1377z00_2866;

						{	/* Eval/evaluate_uncomp.scm 108 */
							BgL_ev_exprz00_bglt BgL_arg1378z00_2867;

							BgL_arg1378z00_2867 =
								(((BgL_ev_hookz00_bglt) COBJECT(
										((BgL_ev_hookz00_bglt)
											((BgL_ev_defglobalz00_bglt) BgL_ez00_2640))))->BgL_ez00);
							BgL_arg1377z00_2866 =
								BGl_uncompz00zz__evaluate_uncompz00(BgL_arg1378z00_2867);
						}
						BgL_arg1376z00_2865 = MAKE_YOUNG_PAIR(BgL_arg1377z00_2866, BNIL);
					}
					BgL_arg1374z00_2863 =
						MAKE_YOUNG_PAIR(BgL_arg1375z00_2864, BgL_arg1376z00_2865);
				}
				return
					MAKE_YOUNG_PAIR(BGl_symbol2100z00zz__evaluate_uncompz00,
					BgL_arg1374z00_2863);
			}
		}

	}



/* &uncomp-ev_setglobal1219 */
	obj_t BGl_z62uncompzd2ev_setglobal1219zb0zz__evaluate_uncompz00(obj_t
		BgL_envz00_2641, obj_t BgL_ez00_2642)
	{
		{	/* Eval/evaluate_uncomp.scm 102 */
			{	/* Eval/evaluate_uncomp.scm 104 */
				obj_t BgL_arg1368z00_2869;

				{	/* Eval/evaluate_uncomp.scm 104 */
					obj_t BgL_arg1370z00_2870;
					obj_t BgL_arg1371z00_2871;

					BgL_arg1370z00_2870 =
						(((BgL_ev_setglobalz00_bglt) COBJECT(
								((BgL_ev_setglobalz00_bglt) BgL_ez00_2642)))->BgL_namez00);
					{	/* Eval/evaluate_uncomp.scm 104 */
						obj_t BgL_arg1372z00_2872;

						{	/* Eval/evaluate_uncomp.scm 104 */
							BgL_ev_exprz00_bglt BgL_arg1373z00_2873;

							BgL_arg1373z00_2873 =
								(((BgL_ev_hookz00_bglt) COBJECT(
										((BgL_ev_hookz00_bglt)
											((BgL_ev_setglobalz00_bglt) BgL_ez00_2642))))->BgL_ez00);
							BgL_arg1372z00_2872 =
								BGl_uncompz00zz__evaluate_uncompz00(BgL_arg1373z00_2873);
						}
						BgL_arg1371z00_2871 = MAKE_YOUNG_PAIR(BgL_arg1372z00_2872, BNIL);
					}
					BgL_arg1368z00_2869 =
						MAKE_YOUNG_PAIR(BgL_arg1370z00_2870, BgL_arg1371z00_2871);
				}
				return
					MAKE_YOUNG_PAIR(BGl_symbol2098z00zz__evaluate_uncompz00,
					BgL_arg1368z00_2869);
			}
		}

	}



/* &uncomp-ev_trap1217 */
	obj_t BGl_z62uncompzd2ev_trap1217zb0zz__evaluate_uncompz00(obj_t
		BgL_envz00_2643, obj_t BgL_ez00_2644)
	{
		{	/* Eval/evaluate_uncomp.scm 98 */
			{	/* Eval/evaluate_uncomp.scm 100 */
				obj_t BgL_arg1364z00_2875;

				{	/* Eval/evaluate_uncomp.scm 100 */
					obj_t BgL_arg1365z00_2876;

					{	/* Eval/evaluate_uncomp.scm 100 */
						BgL_ev_exprz00_bglt BgL_arg1367z00_2877;

						BgL_arg1367z00_2877 =
							(((BgL_ev_hookz00_bglt) COBJECT(
									((BgL_ev_hookz00_bglt)
										((BgL_ev_trapz00_bglt) BgL_ez00_2644))))->BgL_ez00);
						BgL_arg1365z00_2876 =
							BGl_uncompz00zz__evaluate_uncompz00(BgL_arg1367z00_2877);
					}
					BgL_arg1364z00_2875 = MAKE_YOUNG_PAIR(BgL_arg1365z00_2876, BNIL);
				}
				return
					MAKE_YOUNG_PAIR(BGl_symbol2102z00zz__evaluate_uncompz00,
					BgL_arg1364z00_2875);
			}
		}

	}



/* &uncomp-ev_prog21215 */
	obj_t BGl_z62uncompzd2ev_prog21215zb0zz__evaluate_uncompz00(obj_t
		BgL_envz00_2645, obj_t BgL_ez00_2646)
	{
		{	/* Eval/evaluate_uncomp.scm 91 */
			{	/* Eval/evaluate_uncomp.scm 93 */
				obj_t BgL_e1z00_2879;
				obj_t BgL_e2z00_2880;

				BgL_e1z00_2879 =
					BGl_uncompz00zz__evaluate_uncompz00(
					(((BgL_ev_prog2z00_bglt) COBJECT(
								((BgL_ev_prog2z00_bglt) BgL_ez00_2646)))->BgL_e1z00));
				BgL_e2z00_2880 =
					BGl_uncompz00zz__evaluate_uncompz00(
					(((BgL_ev_prog2z00_bglt) COBJECT(
								((BgL_ev_prog2z00_bglt) BgL_ez00_2646)))->BgL_e2z00));
				{	/* Eval/evaluate_uncomp.scm 94 */
					bool_t BgL_test2186z00_3395;

					if (PAIRP(BgL_e2z00_2880))
						{	/* Eval/evaluate_uncomp.scm 94 */
							BgL_test2186z00_3395 =
								(CAR(BgL_e2z00_2880) ==
								BGl_symbol2104z00zz__evaluate_uncompz00);
						}
					else
						{	/* Eval/evaluate_uncomp.scm 94 */
							BgL_test2186z00_3395 = ((bool_t) 0);
						}
					if (BgL_test2186z00_3395)
						{	/* Eval/evaluate_uncomp.scm 95 */
							obj_t BgL_arg1355z00_2881;

							BgL_arg1355z00_2881 =
								MAKE_YOUNG_PAIR(BgL_e1z00_2879,
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(CDR
									(BgL_e2z00_2880), BNIL));
							return MAKE_YOUNG_PAIR(BGl_symbol2104z00zz__evaluate_uncompz00,
								BgL_arg1355z00_2881);
						}
					else
						{	/* Eval/evaluate_uncomp.scm 96 */
							obj_t BgL_arg1359z00_2882;

							{	/* Eval/evaluate_uncomp.scm 96 */
								obj_t BgL_arg1360z00_2883;

								BgL_arg1360z00_2883 = MAKE_YOUNG_PAIR(BgL_e2z00_2880, BNIL);
								BgL_arg1359z00_2882 =
									MAKE_YOUNG_PAIR(BgL_e1z00_2879, BgL_arg1360z00_2883);
							}
							return
								MAKE_YOUNG_PAIR(BGl_symbol2104z00zz__evaluate_uncompz00,
								BgL_arg1359z00_2882);
						}
				}
			}
		}

	}



/* &uncomp-ev_and1213 */
	obj_t BGl_z62uncompzd2ev_and1213zb0zz__evaluate_uncompz00(obj_t
		BgL_envz00_2647, obj_t BgL_ez00_2648)
	{
		{	/* Eval/evaluate_uncomp.scm 87 */
			{	/* Eval/evaluate_uncomp.scm 89 */
				obj_t BgL_arg1341z00_2885;

				{	/* Eval/evaluate_uncomp.scm 89 */
					obj_t BgL_arg1342z00_2886;

					{	/* Eval/evaluate_uncomp.scm 89 */
						obj_t BgL_l1133z00_2887;

						BgL_l1133z00_2887 =
							(((BgL_ev_listz00_bglt) COBJECT(
									((BgL_ev_listz00_bglt)
										((BgL_ev_andz00_bglt) BgL_ez00_2648))))->BgL_argsz00);
						if (NULLP(BgL_l1133z00_2887))
							{	/* Eval/evaluate_uncomp.scm 89 */
								BgL_arg1342z00_2886 = BNIL;
							}
						else
							{	/* Eval/evaluate_uncomp.scm 89 */
								obj_t BgL_head1135z00_2888;

								{	/* Eval/evaluate_uncomp.scm 89 */
									obj_t BgL_arg1350z00_2889;

									{	/* Eval/evaluate_uncomp.scm 89 */
										obj_t BgL_arg1351z00_2890;

										BgL_arg1351z00_2890 = CAR(((obj_t) BgL_l1133z00_2887));
										BgL_arg1350z00_2889 =
											BGl_uncompz00zz__evaluate_uncompz00(
											((BgL_ev_exprz00_bglt) BgL_arg1351z00_2890));
									}
									{	/* Eval/evaluate_uncomp.scm 89 */
										obj_t BgL_res1908z00_2891;

										BgL_res1908z00_2891 =
											MAKE_YOUNG_PAIR(BgL_arg1350z00_2889, BNIL);
										BgL_head1135z00_2888 = BgL_res1908z00_2891;
									}
								}
								{	/* Eval/evaluate_uncomp.scm 89 */
									obj_t BgL_g1138z00_2892;

									BgL_g1138z00_2892 = CDR(((obj_t) BgL_l1133z00_2887));
									{
										obj_t BgL_l1133z00_2894;
										obj_t BgL_tail1136z00_2895;

										BgL_l1133z00_2894 = BgL_g1138z00_2892;
										BgL_tail1136z00_2895 = BgL_head1135z00_2888;
									BgL_zc3z04anonymousza31344ze3z87_2893:
										if (NULLP(BgL_l1133z00_2894))
											{	/* Eval/evaluate_uncomp.scm 89 */
												BgL_arg1342z00_2886 = BgL_head1135z00_2888;
											}
										else
											{	/* Eval/evaluate_uncomp.scm 89 */
												obj_t BgL_newtail1137z00_2896;

												{	/* Eval/evaluate_uncomp.scm 89 */
													obj_t BgL_arg1347z00_2897;

													{	/* Eval/evaluate_uncomp.scm 89 */
														obj_t BgL_arg1348z00_2898;

														BgL_arg1348z00_2898 =
															CAR(((obj_t) BgL_l1133z00_2894));
														BgL_arg1347z00_2897 =
															BGl_uncompz00zz__evaluate_uncompz00(
															((BgL_ev_exprz00_bglt) BgL_arg1348z00_2898));
													}
													{	/* Eval/evaluate_uncomp.scm 89 */
														obj_t BgL_res1914z00_2899;

														BgL_res1914z00_2899 =
															MAKE_YOUNG_PAIR(BgL_arg1347z00_2897, BNIL);
														BgL_newtail1137z00_2896 = BgL_res1914z00_2899;
													}
												}
												SET_CDR(BgL_tail1136z00_2895, BgL_newtail1137z00_2896);
												{	/* Eval/evaluate_uncomp.scm 89 */
													obj_t BgL_arg1346z00_2900;

													BgL_arg1346z00_2900 =
														CDR(((obj_t) BgL_l1133z00_2894));
													{
														obj_t BgL_tail1136z00_3430;
														obj_t BgL_l1133z00_3429;

														BgL_l1133z00_3429 = BgL_arg1346z00_2900;
														BgL_tail1136z00_3430 = BgL_newtail1137z00_2896;
														BgL_tail1136z00_2895 = BgL_tail1136z00_3430;
														BgL_l1133z00_2894 = BgL_l1133z00_3429;
														goto BgL_zc3z04anonymousza31344ze3z87_2893;
													}
												}
											}
									}
								}
							}
					}
					BgL_arg1341z00_2885 =
						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_arg1342z00_2886,
						BNIL);
				}
				return
					MAKE_YOUNG_PAIR(BGl_symbol2106z00zz__evaluate_uncompz00,
					BgL_arg1341z00_2885);
			}
		}

	}



/* &uncomp-ev_or1211 */
	obj_t BGl_z62uncompzd2ev_or1211zb0zz__evaluate_uncompz00(obj_t
		BgL_envz00_2649, obj_t BgL_ez00_2650)
	{
		{	/* Eval/evaluate_uncomp.scm 83 */
			{	/* Eval/evaluate_uncomp.scm 85 */
				obj_t BgL_arg1330z00_2902;

				{	/* Eval/evaluate_uncomp.scm 85 */
					obj_t BgL_arg1331z00_2903;

					{	/* Eval/evaluate_uncomp.scm 85 */
						obj_t BgL_l1127z00_2904;

						BgL_l1127z00_2904 =
							(((BgL_ev_listz00_bglt) COBJECT(
									((BgL_ev_listz00_bglt)
										((BgL_ev_orz00_bglt) BgL_ez00_2650))))->BgL_argsz00);
						if (NULLP(BgL_l1127z00_2904))
							{	/* Eval/evaluate_uncomp.scm 85 */
								BgL_arg1331z00_2903 = BNIL;
							}
						else
							{	/* Eval/evaluate_uncomp.scm 85 */
								obj_t BgL_head1129z00_2905;

								{	/* Eval/evaluate_uncomp.scm 85 */
									obj_t BgL_arg1339z00_2906;

									{	/* Eval/evaluate_uncomp.scm 85 */
										obj_t BgL_arg1340z00_2907;

										BgL_arg1340z00_2907 = CAR(((obj_t) BgL_l1127z00_2904));
										BgL_arg1339z00_2906 =
											BGl_uncompz00zz__evaluate_uncompz00(
											((BgL_ev_exprz00_bglt) BgL_arg1340z00_2907));
									}
									{	/* Eval/evaluate_uncomp.scm 85 */
										obj_t BgL_res1900z00_2908;

										BgL_res1900z00_2908 =
											MAKE_YOUNG_PAIR(BgL_arg1339z00_2906, BNIL);
										BgL_head1129z00_2905 = BgL_res1900z00_2908;
									}
								}
								{	/* Eval/evaluate_uncomp.scm 85 */
									obj_t BgL_g1132z00_2909;

									BgL_g1132z00_2909 = CDR(((obj_t) BgL_l1127z00_2904));
									{
										obj_t BgL_l1127z00_2911;
										obj_t BgL_tail1130z00_2912;

										BgL_l1127z00_2911 = BgL_g1132z00_2909;
										BgL_tail1130z00_2912 = BgL_head1129z00_2905;
									BgL_zc3z04anonymousza31333ze3z87_2910:
										if (NULLP(BgL_l1127z00_2911))
											{	/* Eval/evaluate_uncomp.scm 85 */
												BgL_arg1331z00_2903 = BgL_head1129z00_2905;
											}
										else
											{	/* Eval/evaluate_uncomp.scm 85 */
												obj_t BgL_newtail1131z00_2913;

												{	/* Eval/evaluate_uncomp.scm 85 */
													obj_t BgL_arg1337z00_2914;

													{	/* Eval/evaluate_uncomp.scm 85 */
														obj_t BgL_arg1338z00_2915;

														BgL_arg1338z00_2915 =
															CAR(((obj_t) BgL_l1127z00_2911));
														BgL_arg1337z00_2914 =
															BGl_uncompz00zz__evaluate_uncompz00(
															((BgL_ev_exprz00_bglt) BgL_arg1338z00_2915));
													}
													{	/* Eval/evaluate_uncomp.scm 85 */
														obj_t BgL_res1906z00_2916;

														BgL_res1906z00_2916 =
															MAKE_YOUNG_PAIR(BgL_arg1337z00_2914, BNIL);
														BgL_newtail1131z00_2913 = BgL_res1906z00_2916;
													}
												}
												SET_CDR(BgL_tail1130z00_2912, BgL_newtail1131z00_2913);
												{	/* Eval/evaluate_uncomp.scm 85 */
													obj_t BgL_arg1335z00_2917;

													BgL_arg1335z00_2917 =
														CDR(((obj_t) BgL_l1127z00_2911));
													{
														obj_t BgL_tail1130z00_3456;
														obj_t BgL_l1127z00_3455;

														BgL_l1127z00_3455 = BgL_arg1335z00_2917;
														BgL_tail1130z00_3456 = BgL_newtail1131z00_2913;
														BgL_tail1130z00_2912 = BgL_tail1130z00_3456;
														BgL_l1127z00_2911 = BgL_l1127z00_3455;
														goto BgL_zc3z04anonymousza31333ze3z87_2910;
													}
												}
											}
									}
								}
							}
					}
					BgL_arg1330z00_2902 =
						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_arg1331z00_2903,
						BNIL);
				}
				return
					MAKE_YOUNG_PAIR(BGl_symbol2108z00zz__evaluate_uncompz00,
					BgL_arg1330z00_2902);
			}
		}

	}



/* &uncomp-ev_if1209 */
	obj_t BGl_z62uncompzd2ev_if1209zb0zz__evaluate_uncompz00(obj_t
		BgL_envz00_2651, obj_t BgL_ez00_2652)
	{
		{	/* Eval/evaluate_uncomp.scm 79 */
			{	/* Eval/evaluate_uncomp.scm 81 */
				obj_t BgL_arg1318z00_2919;

				{	/* Eval/evaluate_uncomp.scm 81 */
					obj_t BgL_arg1319z00_2920;
					obj_t BgL_arg1322z00_2921;

					BgL_arg1319z00_2920 =
						BGl_uncompz00zz__evaluate_uncompz00(
						(((BgL_ev_ifz00_bglt) COBJECT(
									((BgL_ev_ifz00_bglt) BgL_ez00_2652)))->BgL_pz00));
					{	/* Eval/evaluate_uncomp.scm 81 */
						obj_t BgL_arg1325z00_2922;
						obj_t BgL_arg1326z00_2923;

						BgL_arg1325z00_2922 =
							BGl_uncompz00zz__evaluate_uncompz00(
							(((BgL_ev_ifz00_bglt) COBJECT(
										((BgL_ev_ifz00_bglt) BgL_ez00_2652)))->BgL_tz00));
						BgL_arg1326z00_2923 =
							MAKE_YOUNG_PAIR(BGl_uncompz00zz__evaluate_uncompz00(
								(((BgL_ev_ifz00_bglt) COBJECT(
											((BgL_ev_ifz00_bglt) BgL_ez00_2652)))->BgL_ez00)), BNIL);
						BgL_arg1322z00_2921 =
							MAKE_YOUNG_PAIR(BgL_arg1325z00_2922, BgL_arg1326z00_2923);
					}
					BgL_arg1318z00_2919 =
						MAKE_YOUNG_PAIR(BgL_arg1319z00_2920, BgL_arg1322z00_2921);
				}
				return
					MAKE_YOUNG_PAIR(BGl_symbol2110z00zz__evaluate_uncompz00,
					BgL_arg1318z00_2919);
			}
		}

	}



/* &uncomp-ev_litt1207 */
	obj_t BGl_z62uncompzd2ev_litt1207zb0zz__evaluate_uncompz00(obj_t
		BgL_envz00_2653, obj_t BgL_ez00_2654)
	{
		{	/* Eval/evaluate_uncomp.scm 75 */
			{	/* Eval/evaluate_uncomp.scm 77 */
				obj_t BgL_arg1316z00_2925;

				BgL_arg1316z00_2925 =
					MAKE_YOUNG_PAIR(
					(((BgL_ev_littz00_bglt) COBJECT(
								((BgL_ev_littz00_bglt) BgL_ez00_2654)))->BgL_valuez00), BNIL);
				return
					MAKE_YOUNG_PAIR(BGl_symbol2112z00zz__evaluate_uncompz00,
					BgL_arg1316z00_2925);
			}
		}

	}



/* &uncomp-ev_global1205 */
	obj_t BGl_z62uncompzd2ev_global1205zb0zz__evaluate_uncompz00(obj_t
		BgL_envz00_2655, obj_t BgL_varz00_2656)
	{
		{	/* Eval/evaluate_uncomp.scm 71 */
			return
				(((BgL_ev_globalz00_bglt) COBJECT(
						((BgL_ev_globalz00_bglt) BgL_varz00_2656)))->BgL_namez00);
		}

	}



/* &uncomp-ev_var1203 */
	obj_t BGl_z62uncompzd2ev_var1203zb0zz__evaluate_uncompz00(obj_t
		BgL_envz00_2657, obj_t BgL_varz00_2658)
	{
		{	/* Eval/evaluate_uncomp.scm 67 */
			return
				(((BgL_ev_varz00_bglt) COBJECT(
						((BgL_ev_varz00_bglt) BgL_varz00_2658)))->BgL_namez00);
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__evaluate_uncompz00()
	{
		{	/* Eval/evaluate_uncomp.scm 15 */
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 121046386),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 251315035),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 443936798),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 439352636),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long)
					228151379),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__ppz00(((long) 233942106),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 220647683),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 177147628),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__expandz00(((long) 414007030),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 528345319),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__evcompilez00(((long) 492753248),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__everrorz00(((long) 375872251),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			BGl_modulezd2initializa7ationz75zz__evmodulez00(((long) 505900559),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
			return BGl_modulezd2initializa7ationz75zz__evaluate_typesz00(((long) 0),
				BSTRING_TO_STRING(BGl_string2114z00zz__evaluate_uncompz00));
		}

	}

#ifdef __cplusplus
}
#endif
