/*===========================================================================*/
/*   (Eval/evaluate_avar.scm)                                                */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/evaluate_avar.scm -indent -o objs/obj_u/Eval/evaluate_avar.c) */
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

	typedef struct BgL_ev_setlocalz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_ev_exprz00_bgl *BgL_ez00;
		struct BgL_ev_varz00_bgl *BgL_vz00;
	}                     *BgL_ev_setlocalz00_bglt;

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


	static obj_t BGl_z62avarzd2ev_if1221zb0zz__evaluate_avarz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62avarzd2ev_global1217zb0zz__evaluate_avarz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__evaluate_avarz00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_funionze70ze7zz__evaluate_avarz00(obj_t);
	static obj_t BGl_z62avarzd2ev_labels1245zb0zz__evaluate_avarz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_ev_letrecz00zz__evaluate_typesz00;
	static obj_t BGl_z62avarzd2ev_hook1227zb0zz__evaluate_avarz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__evaluate_avarz00();
	extern obj_t BGl_ev_letz00zz__evaluate_typesz00;
	static obj_t BGl_genericzd2initzd2zz__evaluate_avarz00();
	extern obj_t BGl_ev_prog2z00zz__evaluate_typesz00;
	static obj_t BGl_objectzd2initzd2zz__evaluate_avarz00();
	extern obj_t BGl_ev_bindzd2exitzd2zz__evaluate_typesz00;
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol1983z00zz__evaluate_avarz00 = BUNSPEC;
	static obj_t BGl_symbol1985z00zz__evaluate_avarz00 = BUNSPEC;
	static obj_t BGl_z62avarzd2ev_goto1247zb0zz__evaluate_avarz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol1995z00zz__evaluate_avarz00 = BUNSPEC;
	static obj_t BGl_z62avarzd2ev_synchroniza7e1237z17zz__evaluate_avarz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_ev_unwindzd2protectzd2zz__evaluate_typesz00;
	extern obj_t bstring_to_symbol(obj_t);
	extern bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static bool_t BGl_za2za2callzf2cczd2compliantza2za2z20zz__evaluate_avarz00;
	static obj_t BGl_z62checkzd2varzb0zz__evaluate_avarz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_ev_letza2za2zz__evaluate_typesz00;
	extern obj_t BGl_ev_labelsz00zz__evaluate_typesz00;
	static obj_t BGl_appendzd221011zd2zz__evaluate_avarz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__evaluate_avarz00();
	extern obj_t BGl_ev_absz00zz__evaluate_typesz00;
	static obj_t BGl_z62avarzd2ev_var1215zb0zz__evaluate_avarz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_bindzd2andzd2resetzd2effectzd2zz__evaluate_avarz00(BgL_ev_absz00_bglt,
		obj_t);
	static obj_t BGl_z62avarzd2ev_letrec1243zb0zz__evaluate_avarz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_diffz00zz__evaluate_avarz00(obj_t, obj_t);
	static obj_t BGl_z62avarzd2ev_withzd2handler1235z62zz__evaluate_avarz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62avarzd2ev_let1239zb0zz__evaluate_avarz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_checkzd2varzd2zz__evaluate_avarz00(BgL_ev_varz00_bglt, obj_t,
		BgL_ev_absz00_bglt);
	extern obj_t BGl_ev_ifz00zz__evaluate_typesz00;
	BGL_EXPORTED_DECL obj_t
		BGl_analysezd2varszd2zz__evaluate_avarz00(BgL_ev_exprz00_bglt);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_ev_hookz00zz__evaluate_typesz00;
	extern obj_t BGl_ev_gotoz00zz__evaluate_typesz00;
	static obj_t BGl_z62avarzd2ev_unwindzd2prote1233z62zz__evaluate_avarz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__evaluate_avarz00(long, char *);
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
	extern obj_t BGl_ev_globalz00zz__evaluate_typesz00;
	static obj_t BGl_z62avarzd2ev_app1249zb0zz__evaluate_avarz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_ev_listz00zz__evaluate_typesz00;
	static obj_t BGl_z62avarzd2ev_list1223zb0zz__evaluate_avarz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_ev_littz00zz__evaluate_typesz00;
	extern obj_t BGl_ev_varz00zz__evaluate_typesz00;
	static obj_t BGl_cnstzd2initzd2zz__evaluate_avarz00();
	static obj_t BGl_gczd2rootszd2initz00zz__evaluate_avarz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__evaluate_avarz00();
	extern obj_t BGl_ev_withzd2handlerzd2zz__evaluate_typesz00;
	static obj_t BGl_z62avarz62zz__evaluate_avarz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62avarzd2ev_litt1219zb0zz__evaluate_avarz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62avarzd2ev_letza21241z12zz__evaluate_avarz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_avarz00zz__evaluate_avarz00(BgL_ev_exprz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_z62avarzd2ev_bindzd2exit1231z62zz__evaluate_avarz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62avar1212z62zz__evaluate_avarz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_ev_exprz00zz__evaluate_typesz00;
	extern obj_t BGl_ev_appz00zz__evaluate_typesz00;
	static obj_t BGl_z62avarzd2ev_abs1251zb0zz__evaluate_avarz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62avarzd2ev_prog21225zb0zz__evaluate_avarz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_ev_synchroniza7eza7zz__evaluate_typesz00;
	static obj_t BGl_z62analysezd2varszb0zz__evaluate_avarz00(obj_t, obj_t);
	extern obj_t BGl_ev_setlocalz00zz__evaluate_typesz00;
	static obj_t BGl_z62avarzd2ev_setlocal1229zb0zz__evaluate_avarz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STATIC_BGL_GENERIC(BGl_avarzd2envzd2zz__evaluate_avarz00,
		BgL_bgl_za762avarza762za7za7__ev2019z00, BGl_z62avarz62zz__evaluate_avarz00,
		0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_analysezd2varszd2envz00zz__evaluate_avarz00,
		BgL_bgl_za762analyseza7d2var2020z00,
		BGl_z62analysezd2varszb0zz__evaluate_avarz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1984z00zz__evaluate_avarz00,
		BgL_bgl_string1984za700za7za7_2021za7, "never", 5);
	      DEFINE_STRING(BGl_string1986z00zz__evaluate_avarz00,
		BgL_bgl_string1986za700za7za7_2022za7, "fake", 4);
	      DEFINE_STRING(BGl_string1987z00zz__evaluate_avarz00,
		BgL_bgl_string1987za700za7za7_2023za7,
		"/tmp/4.4a/runtime/Eval/evaluate_avar.scm", 40);
	      DEFINE_STRING(BGl_string1988z00zz__evaluate_avarz00,
		BgL_bgl_string1988za700za7za7_2024za7, "&analyse-vars", 13);
	      DEFINE_STRING(BGl_string1989z00zz__evaluate_avarz00,
		BgL_bgl_string1989za700za7za7_2025za7, "ev_expr", 7);
	      DEFINE_STRING(BGl_string1990z00zz__evaluate_avarz00,
		BgL_bgl_string1990za700za7za7_2026za7, "&check-var", 10);
	      DEFINE_STRING(BGl_string1991z00zz__evaluate_avarz00,
		BgL_bgl_string1991za700za7za7_2027za7, "ev_var", 6);
	      DEFINE_STRING(BGl_string1992z00zz__evaluate_avarz00,
		BgL_bgl_string1992za700za7za7_2028za7, "ev_abs", 6);
	      DEFINE_STRING(BGl_string1994z00zz__evaluate_avarz00,
		BgL_bgl_string1994za700za7za7_2029za7, "avar1212", 8);
	      DEFINE_STRING(BGl_string1996z00zz__evaluate_avarz00,
		BgL_bgl_string1996za700za7za7_2030za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1997z00zz__evaluate_avarz00,
		BgL_bgl_string1997za700za7za7_2031za7, "&avar", 5);
	      DEFINE_STRING(BGl_string1999z00zz__evaluate_avarz00,
		BgL_bgl_string1999za700za7za7_2032za7, "avar", 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1993z00zz__evaluate_avarz00,
		BgL_bgl_za762avar1212za762za7za72033z00,
		BGl_z62avar1212z62zz__evaluate_avarz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1998z00zz__evaluate_avarz00,
		BgL_bgl_za762avarza7d2ev_var2034z00,
		BGl_z62avarzd2ev_var1215zb0zz__evaluate_avarz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_checkzd2varzd2envz00zz__evaluate_avarz00,
		BgL_bgl_za762checkza7d2varza7b2035za7,
		BGl_z62checkzd2varzb0zz__evaluate_avarz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2000z00zz__evaluate_avarz00,
		BgL_bgl_za762avarza7d2ev_glo2036z00,
		BGl_z62avarzd2ev_global1217zb0zz__evaluate_avarz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2001z00zz__evaluate_avarz00,
		BgL_bgl_za762avarza7d2ev_lit2037z00,
		BGl_z62avarzd2ev_litt1219zb0zz__evaluate_avarz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2002z00zz__evaluate_avarz00,
		BgL_bgl_za762avarza7d2ev_if12038z00,
		BGl_z62avarzd2ev_if1221zb0zz__evaluate_avarz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2003z00zz__evaluate_avarz00,
		BgL_bgl_za762avarza7d2ev_lis2039z00,
		BGl_z62avarzd2ev_list1223zb0zz__evaluate_avarz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2004z00zz__evaluate_avarz00,
		BgL_bgl_za762avarza7d2ev_pro2040z00,
		BGl_z62avarzd2ev_prog21225zb0zz__evaluate_avarz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2005z00zz__evaluate_avarz00,
		BgL_bgl_za762avarza7d2ev_hoo2041z00,
		BGl_z62avarzd2ev_hook1227zb0zz__evaluate_avarz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2006z00zz__evaluate_avarz00,
		BgL_bgl_za762avarza7d2ev_set2042z00,
		BGl_z62avarzd2ev_setlocal1229zb0zz__evaluate_avarz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2007z00zz__evaluate_avarz00,
		BgL_bgl_za762avarza7d2ev_bin2043z00,
		BGl_z62avarzd2ev_bindzd2exit1231z62zz__evaluate_avarz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2008z00zz__evaluate_avarz00,
		BgL_bgl_za762avarza7d2ev_unw2044z00,
		BGl_z62avarzd2ev_unwindzd2prote1233z62zz__evaluate_avarz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2009z00zz__evaluate_avarz00,
		BgL_bgl_za762avarza7d2ev_wit2045z00,
		BGl_z62avarzd2ev_withzd2handler1235z62zz__evaluate_avarz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2018z00zz__evaluate_avarz00,
		BgL_bgl_string2018za700za7za7_2046za7, "__evaluate_avar", 15);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2010z00zz__evaluate_avarz00,
		BgL_bgl_za762avarza7d2ev_syn2047z00,
		BGl_z62avarzd2ev_synchroniza7e1237z17zz__evaluate_avarz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2011z00zz__evaluate_avarz00,
		BgL_bgl_za762avarza7d2ev_let2048z00,
		BGl_z62avarzd2ev_let1239zb0zz__evaluate_avarz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2012z00zz__evaluate_avarz00,
		BgL_bgl_za762avarza7d2ev_let2049z00,
		BGl_z62avarzd2ev_letza21241z12zz__evaluate_avarz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2013z00zz__evaluate_avarz00,
		BgL_bgl_za762avarza7d2ev_let2050z00,
		BGl_z62avarzd2ev_letrec1243zb0zz__evaluate_avarz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2014z00zz__evaluate_avarz00,
		BgL_bgl_za762avarza7d2ev_lab2051z00,
		BGl_z62avarzd2ev_labels1245zb0zz__evaluate_avarz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2015z00zz__evaluate_avarz00,
		BgL_bgl_za762avarza7d2ev_got2052z00,
		BGl_z62avarzd2ev_goto1247zb0zz__evaluate_avarz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2016z00zz__evaluate_avarz00,
		BgL_bgl_za762avarza7d2ev_app2053z00,
		BGl_z62avarzd2ev_app1249zb0zz__evaluate_avarz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2017z00zz__evaluate_avarz00,
		BgL_bgl_za762avarza7d2ev_abs2054z00,
		BGl_z62avarzd2ev_abs1251zb0zz__evaluate_avarz00, 0L, BUNSPEC, 3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__evaluate_avarz00));
		     ADD_ROOT((void *) (&BGl_symbol1983z00zz__evaluate_avarz00));
		     ADD_ROOT((void *) (&BGl_symbol1985z00zz__evaluate_avarz00));
		     ADD_ROOT((void *) (&BGl_symbol1995z00zz__evaluate_avarz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__evaluate_avarz00(long
		BgL_checksumz00_3073, char *BgL_fromz00_3074)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__evaluate_avarz00))
				{
					BGl_requirezd2initializa7ationz75zz__evaluate_avarz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__evaluate_avarz00();
					BGl_cnstzd2initzd2zz__evaluate_avarz00();
					BGl_importedzd2moduleszd2initz00zz__evaluate_avarz00();
					BGl_genericzd2initzd2zz__evaluate_avarz00();
					BGl_methodzd2initzd2zz__evaluate_avarz00();
					return BGl_toplevelzd2initzd2zz__evaluate_avarz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__evaluate_avarz00()
	{
		{	/* Eval/evaluate_avar.scm 15 */
			BGl_symbol1983z00zz__evaluate_avarz00 =
				bstring_to_symbol(BGl_string1984z00zz__evaluate_avarz00);
			BGl_symbol1985z00zz__evaluate_avarz00 =
				bstring_to_symbol(BGl_string1986z00zz__evaluate_avarz00);
			return (BGl_symbol1995z00zz__evaluate_avarz00 =
				bstring_to_symbol(BGl_string1994z00zz__evaluate_avarz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__evaluate_avarz00()
	{
		{	/* Eval/evaluate_avar.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__evaluate_avarz00()
	{
		{	/* Eval/evaluate_avar.scm 15 */
			BGl_za2za2callzf2cczd2compliantza2za2z20zz__evaluate_avarz00 =
				((bool_t) 0);
			return BUNSPEC;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zz__evaluate_avarz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1141;

				BgL_headz00_1141 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1983;
					obj_t BgL_tailz00_1984;

					BgL_prevz00_1983 = BgL_headz00_1141;
					BgL_tailz00_1984 = BgL_l1z00_1;
				BgL_loopz00_1982:
					if (PAIRP(BgL_tailz00_1984))
						{
							obj_t BgL_newzd2prevzd2_1990;

							BgL_newzd2prevzd2_1990 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1984), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1983, BgL_newzd2prevzd2_1990);
							{
								obj_t BgL_tailz00_3095;
								obj_t BgL_prevz00_3094;

								BgL_prevz00_3094 = BgL_newzd2prevzd2_1990;
								BgL_tailz00_3095 = CDR(BgL_tailz00_1984);
								BgL_tailz00_1984 = BgL_tailz00_3095;
								BgL_prevz00_1983 = BgL_prevz00_3094;
								goto BgL_loopz00_1982;
							}
						}
					else
						{
							BNIL;
						}
				}
				return CDR(BgL_headz00_1141);
			}
		}

	}



/* diff */
	obj_t BGl_diffz00zz__evaluate_avarz00(obj_t BgL_l1z00_11, obj_t BgL_l2z00_12)
	{
		{	/* Eval/evaluate_avar.scm 90 */
		BGl_diffz00zz__evaluate_avarz00:
			if (NULLP(BgL_l1z00_11))
				{	/* Eval/evaluate_avar.scm 91 */
					return BNIL;
				}
			else
				{	/* Eval/evaluate_avar.scm 93 */
					obj_t BgL_xz00_1194;

					BgL_xz00_1194 = CAR(((obj_t) BgL_l1z00_11));
					if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_xz00_1194,
								BgL_l2z00_12)))
						{	/* Eval/evaluate_avar.scm 95 */
							obj_t BgL_arg1355z00_1196;

							BgL_arg1355z00_1196 = CDR(((obj_t) BgL_l1z00_11));
							{
								obj_t BgL_l1z00_3107;

								BgL_l1z00_3107 = BgL_arg1355z00_1196;
								BgL_l1z00_11 = BgL_l1z00_3107;
								goto BGl_diffz00zz__evaluate_avarz00;
							}
						}
					else
						{	/* Eval/evaluate_avar.scm 96 */
							obj_t BgL_arg1356z00_1197;

							{	/* Eval/evaluate_avar.scm 96 */
								obj_t BgL_arg1357z00_1198;

								BgL_arg1357z00_1198 = CDR(((obj_t) BgL_l1z00_11));
								BgL_arg1356z00_1197 =
									BGl_diffz00zz__evaluate_avarz00(BgL_arg1357z00_1198,
									BgL_l2z00_12);
							}
							return MAKE_YOUNG_PAIR(BgL_xz00_1194, BgL_arg1356z00_1197);
						}
				}
		}

	}



/* analyse-vars */
	BGL_EXPORTED_DEF obj_t
		BGl_analysezd2varszd2zz__evaluate_avarz00(BgL_ev_exprz00_bglt BgL_ez00_14)
	{
		{	/* Eval/evaluate_avar.scm 112 */
			{	/* Eval/evaluate_avar.scm 113 */
				BgL_ev_absz00_bglt BgL_fakez00_1201;

				{	/* Eval/evaluate_avar.scm 113 */
					BgL_ev_absz00_bglt BgL_new1068z00_1202;

					{	/* Eval/evaluate_avar.scm 113 */
						BgL_ev_absz00_bglt BgL_new1067z00_1203;

						BgL_new1067z00_1203 =
							((BgL_ev_absz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_ev_absz00_bgl))));
						{	/* Eval/evaluate_avar.scm 113 */
							long BgL_arg1359z00_1204;

							{	/* Eval/evaluate_avar.scm 113 */
								long BgL_res1832z00_2019;

								BgL_res1832z00_2019 =
									BGL_CLASS_INDEX(BGl_ev_absz00zz__evaluate_typesz00);
								BgL_arg1359z00_1204 = BgL_res1832z00_2019;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1067z00_1203),
								BgL_arg1359z00_1204);
						}
						BgL_new1068z00_1202 = BgL_new1067z00_1203;
					}
					((((BgL_ev_absz00_bglt) COBJECT(BgL_new1068z00_1202))->BgL_locz00) =
						((obj_t) BGl_symbol1983z00zz__evaluate_avarz00), BUNSPEC);
					((((BgL_ev_absz00_bglt) COBJECT(BgL_new1068z00_1202))->BgL_wherez00) =
						((obj_t) BGl_symbol1985z00zz__evaluate_avarz00), BUNSPEC);
					((((BgL_ev_absz00_bglt) COBJECT(BgL_new1068z00_1202))->BgL_arityz00) =
						((obj_t) BINT(((long) 0))), BUNSPEC);
					((((BgL_ev_absz00_bglt) COBJECT(BgL_new1068z00_1202))->BgL_varsz00) =
						((obj_t) BNIL), BUNSPEC);
					((((BgL_ev_absz00_bglt) COBJECT(BgL_new1068z00_1202))->BgL_bodyz00) =
						((BgL_ev_exprz00_bglt) BgL_ez00_14), BUNSPEC);
					((((BgL_ev_absz00_bglt) COBJECT(BgL_new1068z00_1202))->
							BgL_siza7eza7) = ((int) (int) (((long) 0))), BUNSPEC);
					((((BgL_ev_absz00_bglt) COBJECT(BgL_new1068z00_1202))->BgL_bindz00) =
						((obj_t) BNIL), BUNSPEC);
					((((BgL_ev_absz00_bglt) COBJECT(BgL_new1068z00_1202))->BgL_freez00) =
						((obj_t) BNIL), BUNSPEC);
					((((BgL_ev_absz00_bglt) COBJECT(BgL_new1068z00_1202))->BgL_innerz00) =
						((obj_t) BNIL), BUNSPEC);
					((((BgL_ev_absz00_bglt) COBJECT(BgL_new1068z00_1202))->BgL_boxesz00) =
						((obj_t) BNIL), BUNSPEC);
					BgL_fakez00_1201 = BgL_new1068z00_1202;
				}
				return
					BGl_avarz00zz__evaluate_avarz00(BgL_ez00_14, BNIL,
					((obj_t) BgL_fakez00_1201));
			}
		}

	}



/* &analyse-vars */
	obj_t BGl_z62analysezd2varszb0zz__evaluate_avarz00(obj_t BgL_envz00_2799,
		obj_t BgL_ez00_2800)
	{
		{	/* Eval/evaluate_avar.scm 112 */
			{	/* Eval/evaluate_avar.scm 113 */
				BgL_ev_exprz00_bglt BgL_auxz00_3130;

				if (BGl_isazf3zf3zz__objectz00(BgL_ez00_2800,
						BGl_ev_exprz00zz__evaluate_typesz00))
					{	/* Eval/evaluate_avar.scm 113 */
						BgL_auxz00_3130 = ((BgL_ev_exprz00_bglt) BgL_ez00_2800);
					}
				else
					{
						obj_t BgL_auxz00_3134;

						BgL_auxz00_3134 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1987z00zz__evaluate_avarz00, BINT(((long) 2941)),
							BGl_string1988z00zz__evaluate_avarz00,
							BGl_string1989z00zz__evaluate_avarz00, BgL_ez00_2800);
						FAILURE(BgL_auxz00_3134, BFALSE, BFALSE);
					}
				return BGl_analysezd2varszd2zz__evaluate_avarz00(BgL_auxz00_3130);
			}
		}

	}



/* check-var */
	BGL_EXPORTED_DEF obj_t
		BGl_checkzd2varzd2zz__evaluate_avarz00(BgL_ev_varz00_bglt BgL_varz00_15,
		obj_t BgL_localz00_16, BgL_ev_absz00_bglt BgL_absz00_17)
	{
		{	/* Eval/evaluate_avar.scm 117 */
			if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
						((obj_t) BgL_varz00_15), BgL_localz00_16)))
				{	/* Eval/evaluate_avar.scm 118 */
					return BFALSE;
				}
			else
				{	/* Eval/evaluate_avar.scm 118 */
					if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
								((obj_t) BgL_varz00_15),
								(((BgL_ev_absz00_bglt) COBJECT(BgL_absz00_17))->BgL_freez00))))
						{	/* Eval/evaluate_avar.scm 120 */
							return BFALSE;
						}
					else
						{
							obj_t BgL_auxz00_3148;

							{	/* Eval/evaluate_avar.scm 120 */
								obj_t BgL_arg1363z00_2026;

								BgL_arg1363z00_2026 =
									(((BgL_ev_absz00_bglt) COBJECT(BgL_absz00_17))->BgL_freez00);
								BgL_auxz00_3148 =
									MAKE_YOUNG_PAIR(((obj_t) BgL_varz00_15), BgL_arg1363z00_2026);
							}
							return
								((((BgL_ev_absz00_bglt) COBJECT(BgL_absz00_17))->BgL_freez00) =
								((obj_t) BgL_auxz00_3148), BUNSPEC);
						}
				}
		}

	}



/* &check-var */
	obj_t BGl_z62checkzd2varzb0zz__evaluate_avarz00(obj_t BgL_envz00_2801,
		obj_t BgL_varz00_2802, obj_t BgL_localz00_2803, obj_t BgL_absz00_2804)
	{
		{	/* Eval/evaluate_avar.scm 117 */
			{	/* Eval/evaluate_avar.scm 118 */
				BgL_ev_absz00_bglt BgL_auxz00_3161;
				BgL_ev_varz00_bglt BgL_auxz00_3153;

				if (BGl_isazf3zf3zz__objectz00(BgL_absz00_2804,
						BGl_ev_absz00zz__evaluate_typesz00))
					{	/* Eval/evaluate_avar.scm 118 */
						BgL_auxz00_3161 = ((BgL_ev_absz00_bglt) BgL_absz00_2804);
					}
				else
					{
						obj_t BgL_auxz00_3165;

						BgL_auxz00_3165 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1987z00zz__evaluate_avarz00, BINT(((long) 3159)),
							BGl_string1990z00zz__evaluate_avarz00,
							BGl_string1992z00zz__evaluate_avarz00, BgL_absz00_2804);
						FAILURE(BgL_auxz00_3165, BFALSE, BFALSE);
					}
				if (BGl_isazf3zf3zz__objectz00(BgL_varz00_2802,
						BGl_ev_varz00zz__evaluate_typesz00))
					{	/* Eval/evaluate_avar.scm 118 */
						BgL_auxz00_3153 = ((BgL_ev_varz00_bglt) BgL_varz00_2802);
					}
				else
					{
						obj_t BgL_auxz00_3157;

						BgL_auxz00_3157 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1987z00zz__evaluate_avarz00, BINT(((long) 3159)),
							BGl_string1990z00zz__evaluate_avarz00,
							BGl_string1991z00zz__evaluate_avarz00, BgL_varz00_2802);
						FAILURE(BgL_auxz00_3157, BFALSE, BFALSE);
					}
				return
					BGl_checkzd2varzd2zz__evaluate_avarz00(BgL_auxz00_3153,
					BgL_localz00_2803, BgL_auxz00_3161);
			}
		}

	}



/* bind-and-reset-effect */
	obj_t
		BGl_bindzd2andzd2resetzd2effectzd2zz__evaluate_avarz00(BgL_ev_absz00_bglt
		BgL_absz00_75, obj_t BgL_varsz00_76)
	{
		{	/* Eval/evaluate_avar.scm 226 */
			{	/* Eval/evaluate_avar.scm 232 */
				obj_t BgL_ifreez00_1212;

				BgL_ifreez00_1212 =
					BGl_funionze70ze7zz__evaluate_avarz00(
					(((BgL_ev_absz00_bglt) COBJECT(BgL_absz00_75))->BgL_innerz00));
				{
					obj_t BgL_auxz00_3172;

					{	/* Eval/evaluate_avar.scm 234 */
						obj_t BgL_arg1365z00_1214;

						BgL_arg1365z00_1214 =
							(((BgL_ev_absz00_bglt) COBJECT(BgL_absz00_75))->BgL_bindz00);
						BgL_auxz00_3172 =
							BGl_appendzd221011zd2zz__evaluate_avarz00(BgL_varsz00_76,
							BgL_arg1365z00_1214);
					}
					((((BgL_ev_absz00_bglt) COBJECT(BgL_absz00_75))->BgL_bindz00) =
						((obj_t) BgL_auxz00_3172), BUNSPEC);
				}
				{	/* Eval/evaluate_avar.scm 236 */
					obj_t BgL_g1192z00_1215;

					BgL_g1192z00_1215 =
						BGl_diffz00zz__evaluate_avarz00(BgL_varsz00_76, BgL_ifreez00_1212);
					{
						obj_t BgL_l1190z00_2061;

						BgL_l1190z00_2061 = BgL_g1192z00_1215;
					BgL_zc3z04anonymousza31366ze3z87_2060:
						if (PAIRP(BgL_l1190z00_2061))
							{	/* Eval/evaluate_avar.scm 239 */
								{	/* Eval/evaluate_avar.scm 237 */
									obj_t BgL_vz00_2067;

									BgL_vz00_2067 = CAR(BgL_l1190z00_2061);
									((((BgL_ev_varz00_bglt) COBJECT(
													((BgL_ev_varz00_bglt) BgL_vz00_2067)))->BgL_effz00) =
										((obj_t) BFALSE), BUNSPEC);
								}
								{
									obj_t BgL_l1190z00_3182;

									BgL_l1190z00_3182 = CDR(BgL_l1190z00_2061);
									BgL_l1190z00_2061 = BgL_l1190z00_3182;
									goto BgL_zc3z04anonymousza31366ze3z87_2060;
								}
							}
						else
							{	/* Eval/evaluate_avar.scm 239 */
								((bool_t) 1);
							}
					}
				}
				return BgL_ifreez00_1212;
			}
		}

	}



/* funion~0 */
	obj_t BGl_funionze70ze7zz__evaluate_avarz00(obj_t BgL_lz00_1226)
	{
		{	/* Eval/evaluate_avar.scm 231 */
			if (NULLP(BgL_lz00_1226))
				{	/* Eval/evaluate_avar.scm 229 */
					return BNIL;
				}
			else
				{	/* Eval/evaluate_avar.scm 231 */
					obj_t BgL_arg1373z00_1229;
					obj_t BgL_arg1374z00_1230;

					BgL_arg1373z00_1229 =
						(((BgL_ev_absz00_bglt) COBJECT(
								((BgL_ev_absz00_bglt)
									CAR(((obj_t) BgL_lz00_1226)))))->BgL_freez00);
					{	/* Eval/evaluate_avar.scm 231 */
						obj_t BgL_arg1375z00_1232;

						BgL_arg1375z00_1232 = CDR(((obj_t) BgL_lz00_1226));
						BgL_arg1374z00_1230 =
							BGl_funionze70ze7zz__evaluate_avarz00(BgL_arg1375z00_1232);
					}
					{
						obj_t BgL_l1z00_2031;
						obj_t BgL_l2z00_2032;

						BgL_l1z00_2031 = BgL_arg1373z00_1229;
						BgL_l2z00_2032 = BgL_arg1374z00_1230;
					BgL_unionz00_2030:
						if (NULLP(BgL_l1z00_2031))
							{	/* Eval/evaluate_avar.scm 77 */
								return BgL_l2z00_2032;
							}
						else
							{	/* Eval/evaluate_avar.scm 79 */
								obj_t BgL_xz00_2039;

								BgL_xz00_2039 = CAR(((obj_t) BgL_l1z00_2031));
								{	/* Eval/evaluate_avar.scm 80 */
									obj_t BgL_arg1344z00_2040;
									obj_t BgL_arg1345z00_2041;

									BgL_arg1344z00_2040 = CDR(((obj_t) BgL_l1z00_2031));
									if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
											(BgL_xz00_2039, BgL_l2z00_2032)))
										{	/* Eval/evaluate_avar.scm 80 */
											BgL_arg1345z00_2041 = BgL_l2z00_2032;
										}
									else
										{	/* Eval/evaluate_avar.scm 80 */
											BgL_arg1345z00_2041 =
												MAKE_YOUNG_PAIR(BgL_xz00_2039, BgL_l2z00_2032);
										}
									{
										obj_t BgL_l2z00_3204;
										obj_t BgL_l1z00_3203;

										BgL_l1z00_3203 = BgL_arg1344z00_2040;
										BgL_l2z00_3204 = BgL_arg1345z00_2041;
										BgL_l2z00_2032 = BgL_l2z00_3204;
										BgL_l1z00_2031 = BgL_l1z00_3203;
										goto BgL_unionz00_2030;
									}
								}
							}
					}
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__evaluate_avarz00()
	{
		{	/* Eval/evaluate_avar.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__evaluate_avarz00()
	{
		{	/* Eval/evaluate_avar.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_avarzd2envzd2zz__evaluate_avarz00,
				BGl_proc1993z00zz__evaluate_avarz00,
				BGl_ev_exprz00zz__evaluate_typesz00,
				BGl_string1994z00zz__evaluate_avarz00);
		}

	}



/* &avar1212 */
	obj_t BGl_z62avar1212z62zz__evaluate_avarz00(obj_t BgL_envz00_2806,
		obj_t BgL_ez00_2807, obj_t BgL_localz00_2808, obj_t BgL_absz00_2809)
	{
		{	/* Eval/evaluate_avar.scm 122 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol1995z00zz__evaluate_avarz00,
				BGl_string1996z00zz__evaluate_avarz00,
				((obj_t) ((BgL_ev_exprz00_bglt) BgL_ez00_2807)));
		}

	}



/* avar */
	obj_t BGl_avarz00zz__evaluate_avarz00(BgL_ev_exprz00_bglt BgL_ez00_18,
		obj_t BgL_localz00_19, obj_t BgL_absz00_20)
	{
		{	/* Eval/evaluate_avar.scm 122 */
			{	/* Eval/evaluate_avar.scm 122 */
				obj_t BgL_method1213z00_1240;

				{	/* Eval/evaluate_avar.scm 122 */
					obj_t BgL_res1848z00_2109;

					{	/* Eval/evaluate_avar.scm 122 */
						long BgL_objzd2classzd2numz00_2074;

						{	/* Eval/evaluate_avar.scm 122 */
							long BgL_res1838z00_2077;

							BgL_res1838z00_2077 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_ez00_18));
							BgL_objzd2classzd2numz00_2074 = BgL_res1838z00_2077;
						}
						{	/* Eval/evaluate_avar.scm 122 */
							obj_t BgL_arg1818z00_2075;

							BgL_arg1818z00_2075 =
								PROCEDURE_REF(BGl_avarzd2envzd2zz__evaluate_avarz00,
								(int) (((long) 1)));
							{	/* Eval/evaluate_avar.scm 122 */
								int BgL_offsetz00_2079;

								BgL_offsetz00_2079 = (int) (BgL_objzd2classzd2numz00_2074);
								{	/* Eval/evaluate_avar.scm 122 */
									long BgL_offsetz00_2080;

									BgL_offsetz00_2080 =
										((long) (BgL_offsetz00_2079) - OBJECT_TYPE);
									{	/* Eval/evaluate_avar.scm 122 */
										long BgL_modz00_2081;

										BgL_modz00_2081 =
											(BgL_offsetz00_2080 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Eval/evaluate_avar.scm 122 */
											long BgL_restz00_2083;

											BgL_restz00_2083 =
												(BgL_offsetz00_2080 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Eval/evaluate_avar.scm 122 */

												{	/* Eval/evaluate_avar.scm 122 */
													obj_t BgL_bucketz00_2085;

													BgL_bucketz00_2085 =
														VECTOR_REF(
														((obj_t) BgL_arg1818z00_2075), BgL_modz00_2081);
													BgL_res1848z00_2109 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2085), BgL_restz00_2083);
					}}}}}}}}
					BgL_method1213z00_1240 = BgL_res1848z00_2109;
				}
				return
					PROCEDURE_ENTRY(BgL_method1213z00_1240) (BgL_method1213z00_1240,
					((obj_t) BgL_ez00_18), BgL_localz00_19, BgL_absz00_20, BEOA);
			}
		}

	}



/* &avar */
	obj_t BGl_z62avarz62zz__evaluate_avarz00(obj_t BgL_envz00_2810,
		obj_t BgL_ez00_2811, obj_t BgL_localz00_2812, obj_t BgL_absz00_2813)
	{
		{	/* Eval/evaluate_avar.scm 122 */
			{	/* Eval/evaluate_avar.scm 122 */
				BgL_ev_exprz00_bglt BgL_auxz00_3241;

				if (BGl_isazf3zf3zz__objectz00(BgL_ez00_2811,
						BGl_ev_exprz00zz__evaluate_typesz00))
					{	/* Eval/evaluate_avar.scm 122 */
						BgL_auxz00_3241 = ((BgL_ev_exprz00_bglt) BgL_ez00_2811);
					}
				else
					{
						obj_t BgL_auxz00_3245;

						BgL_auxz00_3245 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1987z00zz__evaluate_avarz00, BINT(((long) 3282)),
							BGl_string1997z00zz__evaluate_avarz00,
							BGl_string1989z00zz__evaluate_avarz00, BgL_ez00_2811);
						FAILURE(BgL_auxz00_3245, BFALSE, BFALSE);
					}
				return
					BGl_avarz00zz__evaluate_avarz00(BgL_auxz00_3241, BgL_localz00_2812,
					BgL_absz00_2813);
			}
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__evaluate_avarz00()
	{
		{	/* Eval/evaluate_avar.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_avarzd2envzd2zz__evaluate_avarz00,
				BGl_ev_varz00zz__evaluate_typesz00, BGl_proc1998z00zz__evaluate_avarz00,
				BGl_string1999z00zz__evaluate_avarz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_avarzd2envzd2zz__evaluate_avarz00,
				BGl_ev_globalz00zz__evaluate_typesz00,
				BGl_proc2000z00zz__evaluate_avarz00,
				BGl_string1999z00zz__evaluate_avarz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_avarzd2envzd2zz__evaluate_avarz00,
				BGl_ev_littz00zz__evaluate_typesz00,
				BGl_proc2001z00zz__evaluate_avarz00,
				BGl_string1999z00zz__evaluate_avarz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_avarzd2envzd2zz__evaluate_avarz00,
				BGl_ev_ifz00zz__evaluate_typesz00, BGl_proc2002z00zz__evaluate_avarz00,
				BGl_string1999z00zz__evaluate_avarz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_avarzd2envzd2zz__evaluate_avarz00,
				BGl_ev_listz00zz__evaluate_typesz00,
				BGl_proc2003z00zz__evaluate_avarz00,
				BGl_string1999z00zz__evaluate_avarz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_avarzd2envzd2zz__evaluate_avarz00,
				BGl_ev_prog2z00zz__evaluate_typesz00,
				BGl_proc2004z00zz__evaluate_avarz00,
				BGl_string1999z00zz__evaluate_avarz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_avarzd2envzd2zz__evaluate_avarz00,
				BGl_ev_hookz00zz__evaluate_typesz00,
				BGl_proc2005z00zz__evaluate_avarz00,
				BGl_string1999z00zz__evaluate_avarz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_avarzd2envzd2zz__evaluate_avarz00,
				BGl_ev_setlocalz00zz__evaluate_typesz00,
				BGl_proc2006z00zz__evaluate_avarz00,
				BGl_string1999z00zz__evaluate_avarz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_avarzd2envzd2zz__evaluate_avarz00,
				BGl_ev_bindzd2exitzd2zz__evaluate_typesz00,
				BGl_proc2007z00zz__evaluate_avarz00,
				BGl_string1999z00zz__evaluate_avarz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_avarzd2envzd2zz__evaluate_avarz00,
				BGl_ev_unwindzd2protectzd2zz__evaluate_typesz00,
				BGl_proc2008z00zz__evaluate_avarz00,
				BGl_string1999z00zz__evaluate_avarz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_avarzd2envzd2zz__evaluate_avarz00,
				BGl_ev_withzd2handlerzd2zz__evaluate_typesz00,
				BGl_proc2009z00zz__evaluate_avarz00,
				BGl_string1999z00zz__evaluate_avarz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_avarzd2envzd2zz__evaluate_avarz00,
				BGl_ev_synchroniza7eza7zz__evaluate_typesz00,
				BGl_proc2010z00zz__evaluate_avarz00,
				BGl_string1999z00zz__evaluate_avarz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_avarzd2envzd2zz__evaluate_avarz00,
				BGl_ev_letz00zz__evaluate_typesz00, BGl_proc2011z00zz__evaluate_avarz00,
				BGl_string1999z00zz__evaluate_avarz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_avarzd2envzd2zz__evaluate_avarz00,
				BGl_ev_letza2za2zz__evaluate_typesz00,
				BGl_proc2012z00zz__evaluate_avarz00,
				BGl_string1999z00zz__evaluate_avarz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_avarzd2envzd2zz__evaluate_avarz00,
				BGl_ev_letrecz00zz__evaluate_typesz00,
				BGl_proc2013z00zz__evaluate_avarz00,
				BGl_string1999z00zz__evaluate_avarz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_avarzd2envzd2zz__evaluate_avarz00,
				BGl_ev_labelsz00zz__evaluate_typesz00,
				BGl_proc2014z00zz__evaluate_avarz00,
				BGl_string1999z00zz__evaluate_avarz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_avarzd2envzd2zz__evaluate_avarz00,
				BGl_ev_gotoz00zz__evaluate_typesz00,
				BGl_proc2015z00zz__evaluate_avarz00,
				BGl_string1999z00zz__evaluate_avarz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_avarzd2envzd2zz__evaluate_avarz00,
				BGl_ev_appz00zz__evaluate_typesz00, BGl_proc2016z00zz__evaluate_avarz00,
				BGl_string1999z00zz__evaluate_avarz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_avarzd2envzd2zz__evaluate_avarz00,
				BGl_ev_absz00zz__evaluate_typesz00, BGl_proc2017z00zz__evaluate_avarz00,
				BGl_string1999z00zz__evaluate_avarz00);
		}

	}



/* &avar-ev_abs1251 */
	obj_t BGl_z62avarzd2ev_abs1251zb0zz__evaluate_avarz00(obj_t BgL_envz00_2833,
		obj_t BgL_ez00_2834, obj_t BgL_localz00_2835, obj_t BgL_absz00_2836)
	{
		{	/* Eval/evaluate_avar.scm 242 */
			{
				obj_t BgL_auxz00_3269;

				{	/* Eval/evaluate_avar.scm 245 */
					obj_t BgL_arg1466z00_2927;

					BgL_arg1466z00_2927 =
						(((BgL_ev_absz00_bglt) COBJECT(
								((BgL_ev_absz00_bglt) BgL_absz00_2836)))->BgL_innerz00);
					BgL_auxz00_3269 =
						MAKE_YOUNG_PAIR(
						((obj_t)
							((BgL_ev_absz00_bglt) BgL_ez00_2834)), BgL_arg1466z00_2927);
				}
				((((BgL_ev_absz00_bglt) COBJECT(
								((BgL_ev_absz00_bglt) BgL_absz00_2836)))->BgL_innerz00) =
					((obj_t) BgL_auxz00_3269), BUNSPEC);
			}
			{	/* Eval/evaluate_avar.scm 246 */
				BgL_ev_exprz00_bglt BgL_arg1467z00_2928;
				obj_t BgL_arg1468z00_2929;

				BgL_arg1467z00_2928 =
					(((BgL_ev_absz00_bglt) COBJECT(
							((BgL_ev_absz00_bglt) BgL_ez00_2834)))->BgL_bodyz00);
				BgL_arg1468z00_2929 =
					(((BgL_ev_absz00_bglt) COBJECT(
							((BgL_ev_absz00_bglt) BgL_ez00_2834)))->BgL_varsz00);
				BGl_avarz00zz__evaluate_avarz00(BgL_arg1467z00_2928,
					BgL_arg1468z00_2929, ((obj_t) ((BgL_ev_absz00_bglt) BgL_ez00_2834)));
			}
			{	/* Eval/evaluate_avar.scm 247 */
				obj_t BgL_ifreez00_2930;

				BgL_ifreez00_2930 =
					BGl_bindzd2andzd2resetzd2effectzd2zz__evaluate_avarz00(
					((BgL_ev_absz00_bglt) BgL_ez00_2834),
					(((BgL_ev_absz00_bglt) COBJECT(
								((BgL_ev_absz00_bglt) BgL_ez00_2834)))->BgL_varsz00));
				{
					obj_t BgL_auxz00_3288;

					{	/* Eval/evaluate_avar.scm 249 */
						obj_t BgL_arg1469z00_2931;
						obj_t BgL_arg1470z00_2932;

						{	/* Eval/evaluate_avar.scm 249 */
							obj_t BgL_arg1471z00_2933;

							BgL_arg1471z00_2933 =
								(((BgL_ev_absz00_bglt) COBJECT(
										((BgL_ev_absz00_bglt) BgL_ez00_2834)))->BgL_freez00);
							{
								obj_t BgL_l1z00_2935;
								obj_t BgL_l2z00_2936;

								BgL_l1z00_2935 = BgL_ifreez00_2930;
								BgL_l2z00_2936 = BgL_arg1471z00_2933;
							BgL_unionz00_2934:
								if (NULLP(BgL_l1z00_2935))
									{	/* Eval/evaluate_avar.scm 77 */
										BgL_arg1469z00_2931 = BgL_l2z00_2936;
									}
								else
									{	/* Eval/evaluate_avar.scm 79 */
										obj_t BgL_xz00_2937;

										BgL_xz00_2937 = CAR(((obj_t) BgL_l1z00_2935));
										{	/* Eval/evaluate_avar.scm 80 */
											obj_t BgL_arg1344z00_2938;
											obj_t BgL_arg1345z00_2939;

											BgL_arg1344z00_2938 = CDR(((obj_t) BgL_l1z00_2935));
											if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
													(BgL_xz00_2937, BgL_l2z00_2936)))
												{	/* Eval/evaluate_avar.scm 80 */
													BgL_arg1345z00_2939 = BgL_l2z00_2936;
												}
											else
												{	/* Eval/evaluate_avar.scm 80 */
													BgL_arg1345z00_2939 =
														MAKE_YOUNG_PAIR(BgL_xz00_2937, BgL_l2z00_2936);
												}
											{
												obj_t BgL_l2z00_3303;
												obj_t BgL_l1z00_3302;

												BgL_l1z00_3302 = BgL_arg1344z00_2938;
												BgL_l2z00_3303 = BgL_arg1345z00_2939;
												BgL_l2z00_2936 = BgL_l2z00_3303;
												BgL_l1z00_2935 = BgL_l1z00_3302;
												goto BgL_unionz00_2934;
											}
										}
									}
							}
						}
						BgL_arg1470z00_2932 =
							(((BgL_ev_absz00_bglt) COBJECT(
									((BgL_ev_absz00_bglt) BgL_ez00_2834)))->BgL_bindz00);
						BgL_auxz00_3288 =
							BGl_diffz00zz__evaluate_avarz00(BgL_arg1469z00_2931,
							BgL_arg1470z00_2932);
					}
					((((BgL_ev_absz00_bglt) COBJECT(
									((BgL_ev_absz00_bglt) BgL_ez00_2834)))->BgL_freez00) =
						((obj_t) BgL_auxz00_3288), BUNSPEC);
				}
				{
					obj_t BgL_auxz00_3308;

					{	/* Eval/evaluate_avar.scm 250 */
						obj_t BgL_hook1197z00_2940;

						BgL_hook1197z00_2940 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
						{	/* Eval/evaluate_avar.scm 250 */
							obj_t BgL_g1198z00_2941;

							BgL_g1198z00_2941 =
								(((BgL_ev_absz00_bglt) COBJECT(
										((BgL_ev_absz00_bglt) BgL_ez00_2834)))->BgL_varsz00);
							{
								obj_t BgL_l1194z00_2943;
								obj_t BgL_h1195z00_2944;

								BgL_l1194z00_2943 = BgL_g1198z00_2941;
								BgL_h1195z00_2944 = BgL_hook1197z00_2940;
							BgL_zc3z04anonymousza31472ze3z87_2942:
								if (NULLP(BgL_l1194z00_2943))
									{	/* Eval/evaluate_avar.scm 250 */
										BgL_auxz00_3308 = CDR(BgL_hook1197z00_2940);
									}
								else
									{	/* Eval/evaluate_avar.scm 250 */
										if (CBOOL(
												(((BgL_ev_varz00_bglt) COBJECT(
															((BgL_ev_varz00_bglt)
																CAR(
																	((obj_t) BgL_l1194z00_2943)))))->BgL_effz00)))
											{	/* Eval/evaluate_avar.scm 250 */
												obj_t BgL_nh1196z00_2945;

												{	/* Eval/evaluate_avar.scm 250 */
													obj_t BgL_arg1476z00_2946;

													BgL_arg1476z00_2946 =
														CAR(((obj_t) BgL_l1194z00_2943));
													{	/* Eval/evaluate_avar.scm 250 */
														obj_t BgL_res1895z00_2947;

														BgL_res1895z00_2947 =
															MAKE_YOUNG_PAIR(BgL_arg1476z00_2946, BNIL);
														BgL_nh1196z00_2945 = BgL_res1895z00_2947;
													}
												}
												SET_CDR(BgL_h1195z00_2944, BgL_nh1196z00_2945);
												{	/* Eval/evaluate_avar.scm 250 */
													obj_t BgL_arg1475z00_2948;

													BgL_arg1475z00_2948 =
														CDR(((obj_t) BgL_l1194z00_2943));
													{
														obj_t BgL_h1195z00_3329;
														obj_t BgL_l1194z00_3328;

														BgL_l1194z00_3328 = BgL_arg1475z00_2948;
														BgL_h1195z00_3329 = BgL_nh1196z00_2945;
														BgL_h1195z00_2944 = BgL_h1195z00_3329;
														BgL_l1194z00_2943 = BgL_l1194z00_3328;
														goto BgL_zc3z04anonymousza31472ze3z87_2942;
													}
												}
											}
										else
											{	/* Eval/evaluate_avar.scm 250 */
												obj_t BgL_arg1477z00_2949;

												BgL_arg1477z00_2949 = CDR(((obj_t) BgL_l1194z00_2943));
												{
													obj_t BgL_l1194z00_3332;

													BgL_l1194z00_3332 = BgL_arg1477z00_2949;
													BgL_l1194z00_2943 = BgL_l1194z00_3332;
													goto BgL_zc3z04anonymousza31472ze3z87_2942;
												}
											}
									}
							}
						}
					}
					return
						((((BgL_ev_absz00_bglt) COBJECT(
									((BgL_ev_absz00_bglt) BgL_ez00_2834)))->BgL_boxesz00) =
						((obj_t) BgL_auxz00_3308), BUNSPEC);
				}
			}
		}

	}



/* &avar-ev_app1249 */
	obj_t BGl_z62avarzd2ev_app1249zb0zz__evaluate_avarz00(obj_t BgL_envz00_2837,
		obj_t BgL_ez00_2838, obj_t BgL_localz00_2839, obj_t BgL_absz00_2840)
	{
		{	/* Eval/evaluate_avar.scm 220 */
			{	/* Eval/evaluate_avar.scm 221 */
				bool_t BgL_tmpz00_3334;

				BGl_avarz00zz__evaluate_avarz00(
					(((BgL_ev_appz00_bglt) COBJECT(
								((BgL_ev_appz00_bglt) BgL_ez00_2838)))->BgL_funz00),
					BgL_localz00_2839, BgL_absz00_2840);
				{	/* Eval/evaluate_avar.scm 223 */
					obj_t BgL_g1189z00_2951;

					BgL_g1189z00_2951 =
						(((BgL_ev_appz00_bglt) COBJECT(
								((BgL_ev_appz00_bglt) BgL_ez00_2838)))->BgL_argsz00);
					{
						obj_t BgL_l1187z00_2953;

						BgL_l1187z00_2953 = BgL_g1189z00_2951;
					BgL_zc3z04anonymousza31463ze3z87_2952:
						if (PAIRP(BgL_l1187z00_2953))
							{	/* Eval/evaluate_avar.scm 223 */
								{	/* Eval/evaluate_avar.scm 223 */
									obj_t BgL_ez00_2954;

									BgL_ez00_2954 = CAR(BgL_l1187z00_2953);
									BGl_avarz00zz__evaluate_avarz00(
										((BgL_ev_exprz00_bglt) BgL_ez00_2954), BgL_localz00_2839,
										BgL_absz00_2840);
								}
								{
									obj_t BgL_l1187z00_3345;

									BgL_l1187z00_3345 = CDR(BgL_l1187z00_2953);
									BgL_l1187z00_2953 = BgL_l1187z00_3345;
									goto BgL_zc3z04anonymousza31463ze3z87_2952;
								}
							}
						else
							{	/* Eval/evaluate_avar.scm 223 */
								BgL_tmpz00_3334 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_tmpz00_3334);
			}
		}

	}



/* &avar-ev_goto1247 */
	obj_t BGl_z62avarzd2ev_goto1247zb0zz__evaluate_avarz00(obj_t BgL_envz00_2841,
		obj_t BgL_ez00_2842, obj_t BgL_localz00_2843, obj_t BgL_absz00_2844)
	{
		{	/* Eval/evaluate_avar.scm 216 */
			{	/* Eval/evaluate_avar.scm 217 */
				bool_t BgL_tmpz00_3348;

				{	/* Eval/evaluate_avar.scm 218 */
					obj_t BgL_g1186z00_2956;

					BgL_g1186z00_2956 =
						(((BgL_ev_gotoz00_bglt) COBJECT(
								((BgL_ev_gotoz00_bglt) BgL_ez00_2842)))->BgL_argsz00);
					{
						obj_t BgL_l1184z00_2958;

						BgL_l1184z00_2958 = BgL_g1186z00_2956;
					BgL_zc3z04anonymousza31459ze3z87_2957:
						if (PAIRP(BgL_l1184z00_2958))
							{	/* Eval/evaluate_avar.scm 218 */
								{	/* Eval/evaluate_avar.scm 218 */
									obj_t BgL_ez00_2959;

									BgL_ez00_2959 = CAR(BgL_l1184z00_2958);
									BGl_avarz00zz__evaluate_avarz00(
										((BgL_ev_exprz00_bglt) BgL_ez00_2959), BgL_localz00_2843,
										BgL_absz00_2844);
								}
								{
									obj_t BgL_l1184z00_3356;

									BgL_l1184z00_3356 = CDR(BgL_l1184z00_2958);
									BgL_l1184z00_2958 = BgL_l1184z00_3356;
									goto BgL_zc3z04anonymousza31459ze3z87_2957;
								}
							}
						else
							{	/* Eval/evaluate_avar.scm 218 */
								BgL_tmpz00_3348 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_tmpz00_3348);
			}
		}

	}



/* &avar-ev_labels1245 */
	obj_t BGl_z62avarzd2ev_labels1245zb0zz__evaluate_avarz00(obj_t
		BgL_envz00_2845, obj_t BgL_ez00_2846, obj_t BgL_localz00_2847,
		obj_t BgL_absz00_2848)
	{
		{	/* Eval/evaluate_avar.scm 204 */
			{	/* Eval/evaluate_avar.scm 206 */
				obj_t BgL_localz00_2961;

				BgL_localz00_2961 =
					BGl_appendzd221011zd2zz__evaluate_avarz00(
					(((BgL_ev_labelsz00_bglt) COBJECT(
								((BgL_ev_labelsz00_bglt) BgL_ez00_2846)))->BgL_varsz00),
					BgL_localz00_2847);
				{	/* Eval/evaluate_avar.scm 207 */
					obj_t BgL_g1172z00_2962;

					BgL_g1172z00_2962 =
						(((BgL_ev_labelsz00_bglt) COBJECT(
								((BgL_ev_labelsz00_bglt) BgL_ez00_2846)))->BgL_valsz00);
					{
						obj_t BgL_l1170z00_2964;

						BgL_l1170z00_2964 = BgL_g1172z00_2962;
					BgL_zc3z04anonymousza31436ze3z87_2963:
						if (PAIRP(BgL_l1170z00_2964))
							{	/* Eval/evaluate_avar.scm 207 */
								{	/* Eval/evaluate_avar.scm 209 */
									obj_t BgL_sz00_2965;

									BgL_sz00_2965 = CAR(BgL_l1170z00_2964);
									{	/* Eval/evaluate_avar.scm 209 */
										obj_t BgL_arg1438z00_2966;
										obj_t BgL_arg1439z00_2967;

										BgL_arg1438z00_2966 = CDR(((obj_t) BgL_sz00_2965));
										{	/* Eval/evaluate_avar.scm 209 */
											obj_t BgL_arg1440z00_2968;

											BgL_arg1440z00_2968 = CAR(((obj_t) BgL_sz00_2965));
											BgL_arg1439z00_2967 =
												BGl_appendzd221011zd2zz__evaluate_avarz00
												(BgL_arg1440z00_2968, BgL_localz00_2961);
										}
										BGl_avarz00zz__evaluate_avarz00(
											((BgL_ev_exprz00_bglt) BgL_arg1438z00_2966),
											BgL_arg1439z00_2967, BgL_absz00_2848);
									}
									{	/* Eval/evaluate_avar.scm 210 */
										obj_t BgL_arg1441z00_2969;

										BgL_arg1441z00_2969 = CAR(((obj_t) BgL_sz00_2965));
										BGl_bindzd2andzd2resetzd2effectzd2zz__evaluate_avarz00(
											((BgL_ev_absz00_bglt) BgL_absz00_2848),
											BgL_arg1441z00_2969);
									}
								}
								{
									obj_t BgL_l1170z00_3378;

									BgL_l1170z00_3378 = CDR(BgL_l1170z00_2964);
									BgL_l1170z00_2964 = BgL_l1170z00_3378;
									goto BgL_zc3z04anonymousza31436ze3z87_2963;
								}
							}
						else
							{	/* Eval/evaluate_avar.scm 207 */
								((bool_t) 1);
							}
					}
				}
				{
					obj_t BgL_auxz00_3380;

					{	/* Eval/evaluate_avar.scm 213 */
						obj_t BgL_ll1178z00_2970;
						obj_t BgL_ll1179z00_2971;

						BgL_ll1178z00_2970 =
							(((BgL_ev_labelsz00_bglt) COBJECT(
									((BgL_ev_labelsz00_bglt) BgL_ez00_2846)))->BgL_varsz00);
						BgL_ll1179z00_2971 =
							(((BgL_ev_labelsz00_bglt) COBJECT(
									((BgL_ev_labelsz00_bglt) BgL_ez00_2846)))->BgL_valsz00);
						if (NULLP(BgL_ll1178z00_2970))
							{	/* Eval/evaluate_avar.scm 213 */
								BgL_auxz00_3380 = BNIL;
							}
						else
							{	/* Eval/evaluate_avar.scm 213 */
								obj_t BgL_head1180z00_2972;

								{	/* Eval/evaluate_avar.scm 213 */
									obj_t BgL_res1876z00_2973;

									BgL_res1876z00_2973 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									BgL_head1180z00_2972 = BgL_res1876z00_2973;
								}
								{
									obj_t BgL_ll1178z00_2975;
									obj_t BgL_ll1179z00_2976;
									obj_t BgL_tail1181z00_2977;

									BgL_ll1178z00_2975 = BgL_ll1178z00_2970;
									BgL_ll1179z00_2976 = BgL_ll1179z00_2971;
									BgL_tail1181z00_2977 = BgL_head1180z00_2972;
								BgL_zc3z04anonymousza31444ze3z87_2974:
									if (NULLP(BgL_ll1178z00_2975))
										{	/* Eval/evaluate_avar.scm 213 */
											BgL_auxz00_3380 = CDR(BgL_head1180z00_2972);
										}
									else
										{	/* Eval/evaluate_avar.scm 213 */
											obj_t BgL_newtail1182z00_2978;

											{	/* Eval/evaluate_avar.scm 213 */
												obj_t BgL_arg1449z00_2979;

												{	/* Eval/evaluate_avar.scm 213 */
													obj_t BgL_varz00_2980;
													obj_t BgL_sz00_2981;

													BgL_varz00_2980 = CAR(((obj_t) BgL_ll1178z00_2975));
													BgL_sz00_2981 = CAR(((obj_t) BgL_ll1179z00_2976));
													{	/* Eval/evaluate_avar.scm 213 */
														obj_t BgL_arg1451z00_2982;

														{	/* Eval/evaluate_avar.scm 213 */
															obj_t BgL_l1173z00_2983;

															BgL_l1173z00_2983 = CAR(((obj_t) BgL_sz00_2981));
															if (NULLP(BgL_l1173z00_2983))
																{	/* Eval/evaluate_avar.scm 213 */
																	BgL_arg1451z00_2982 = BNIL;
																}
															else
																{	/* Eval/evaluate_avar.scm 213 */
																	obj_t BgL_head1175z00_2984;

																	{	/* Eval/evaluate_avar.scm 213 */
																		obj_t BgL_res1879z00_2985;

																		BgL_res1879z00_2985 =
																			MAKE_YOUNG_PAIR(BNIL, BNIL);
																		BgL_head1175z00_2984 = BgL_res1879z00_2985;
																	}
																	{
																		obj_t BgL_l1173z00_2987;
																		obj_t BgL_tail1176z00_2988;

																		BgL_l1173z00_2987 = BgL_l1173z00_2983;
																		BgL_tail1176z00_2988 = BgL_head1175z00_2984;
																	BgL_zc3z04anonymousza31453ze3z87_2986:
																		if (NULLP(BgL_l1173z00_2987))
																			{	/* Eval/evaluate_avar.scm 213 */
																				BgL_arg1451z00_2982 =
																					CDR(BgL_head1175z00_2984);
																			}
																		else
																			{	/* Eval/evaluate_avar.scm 213 */
																				obj_t BgL_newtail1177z00_2989;

																				{	/* Eval/evaluate_avar.scm 213 */
																					obj_t BgL_arg1456z00_2990;

																					BgL_arg1456z00_2990 =
																						(((BgL_ev_varz00_bglt) COBJECT(
																								((BgL_ev_varz00_bglt)
																									CAR(
																										((obj_t)
																											BgL_l1173z00_2987)))))->
																						BgL_effz00);
																					{	/* Eval/evaluate_avar.scm 213 */
																						obj_t BgL_res1885z00_2991;

																						BgL_res1885z00_2991 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1456z00_2990, BNIL);
																						BgL_newtail1177z00_2989 =
																							BgL_res1885z00_2991;
																					}
																				}
																				SET_CDR(BgL_tail1176z00_2988,
																					BgL_newtail1177z00_2989);
																				{	/* Eval/evaluate_avar.scm 213 */
																					obj_t BgL_arg1455z00_2992;

																					BgL_arg1455z00_2992 =
																						CDR(((obj_t) BgL_l1173z00_2987));
																					{
																						obj_t BgL_tail1176z00_3413;
																						obj_t BgL_l1173z00_3412;

																						BgL_l1173z00_3412 =
																							BgL_arg1455z00_2992;
																						BgL_tail1176z00_3413 =
																							BgL_newtail1177z00_2989;
																						BgL_tail1176z00_2988 =
																							BgL_tail1176z00_3413;
																						BgL_l1173z00_2987 =
																							BgL_l1173z00_3412;
																						goto
																							BgL_zc3z04anonymousza31453ze3z87_2986;
																					}
																				}
																			}
																	}
																}
														}
														BgL_arg1449z00_2979 =
															MAKE_YOUNG_PAIR(BgL_varz00_2980,
															BgL_arg1451z00_2982);
													}
												}
												{	/* Eval/evaluate_avar.scm 213 */
													obj_t BgL_res1886z00_2993;

													BgL_res1886z00_2993 =
														MAKE_YOUNG_PAIR(BgL_arg1449z00_2979, BNIL);
													BgL_newtail1182z00_2978 = BgL_res1886z00_2993;
												}
											}
											SET_CDR(BgL_tail1181z00_2977, BgL_newtail1182z00_2978);
											{	/* Eval/evaluate_avar.scm 213 */
												obj_t BgL_arg1446z00_2994;
												obj_t BgL_arg1448z00_2995;

												BgL_arg1446z00_2994 = CDR(((obj_t) BgL_ll1178z00_2975));
												BgL_arg1448z00_2995 = CDR(((obj_t) BgL_ll1179z00_2976));
												{
													obj_t BgL_tail1181z00_3423;
													obj_t BgL_ll1179z00_3422;
													obj_t BgL_ll1178z00_3421;

													BgL_ll1178z00_3421 = BgL_arg1446z00_2994;
													BgL_ll1179z00_3422 = BgL_arg1448z00_2995;
													BgL_tail1181z00_3423 = BgL_newtail1182z00_2978;
													BgL_tail1181z00_2977 = BgL_tail1181z00_3423;
													BgL_ll1179z00_2976 = BgL_ll1179z00_3422;
													BgL_ll1178z00_2975 = BgL_ll1178z00_3421;
													goto BgL_zc3z04anonymousza31444ze3z87_2974;
												}
											}
										}
								}
							}
					}
					((((BgL_ev_labelsz00_bglt) COBJECT(
									((BgL_ev_labelsz00_bglt) BgL_ez00_2846)))->BgL_boxesz00) =
						((obj_t) BgL_auxz00_3380), BUNSPEC);
				}
				return
					BGl_avarz00zz__evaluate_avarz00(
					(((BgL_ev_labelsz00_bglt) COBJECT(
								((BgL_ev_labelsz00_bglt) BgL_ez00_2846)))->BgL_bodyz00),
					BgL_localz00_2961, BgL_absz00_2848);
			}
		}

	}



/* &avar-ev_letrec1243 */
	obj_t BGl_z62avarzd2ev_letrec1243zb0zz__evaluate_avarz00(obj_t
		BgL_envz00_2849, obj_t BgL_ez00_2850, obj_t BgL_localz00_2851,
		obj_t BgL_absz00_2852)
	{
		{	/* Eval/evaluate_avar.scm 195 */
			{	/* Eval/evaluate_avar.scm 196 */
				bool_t BgL_tmpz00_3428;

				{	/* Eval/evaluate_avar.scm 197 */
					obj_t BgL_localz00_2997;

					{	/* Eval/evaluate_avar.scm 197 */
						obj_t BgL_arg1435z00_2998;

						BgL_arg1435z00_2998 =
							(((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt)
										((BgL_ev_letrecz00_bglt) BgL_ez00_2850))))->BgL_varsz00);
						BgL_localz00_2997 =
							BGl_appendzd221011zd2zz__evaluate_avarz00(BgL_arg1435z00_2998,
							BgL_localz00_2851);
					}
					{	/* Eval/evaluate_avar.scm 198 */
						obj_t BgL_g1166z00_2999;

						BgL_g1166z00_2999 =
							(((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt)
										((BgL_ev_letrecz00_bglt) BgL_ez00_2850))))->BgL_valsz00);
						{
							obj_t BgL_l1164z00_3001;

							BgL_l1164z00_3001 = BgL_g1166z00_2999;
						BgL_zc3z04anonymousza31426ze3z87_3000:
							if (PAIRP(BgL_l1164z00_3001))
								{	/* Eval/evaluate_avar.scm 198 */
									{	/* Eval/evaluate_avar.scm 198 */
										obj_t BgL_ez00_3002;

										BgL_ez00_3002 = CAR(BgL_l1164z00_3001);
										BGl_avarz00zz__evaluate_avarz00(
											((BgL_ev_exprz00_bglt) BgL_ez00_3002), BgL_localz00_2997,
											BgL_absz00_2852);
									}
									{
										obj_t BgL_l1164z00_3441;

										BgL_l1164z00_3441 = CDR(BgL_l1164z00_3001);
										BgL_l1164z00_3001 = BgL_l1164z00_3441;
										goto BgL_zc3z04anonymousza31426ze3z87_3000;
									}
								}
							else
								{	/* Eval/evaluate_avar.scm 198 */
									((bool_t) 1);
								}
						}
					}
					{	/* Eval/evaluate_avar.scm 199 */
						BgL_ev_exprz00_bglt BgL_arg1429z00_3003;

						BgL_arg1429z00_3003 =
							(((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt)
										((BgL_ev_letrecz00_bglt) BgL_ez00_2850))))->BgL_bodyz00);
						BGl_avarz00zz__evaluate_avarz00(BgL_arg1429z00_3003,
							BgL_localz00_2997, BgL_absz00_2852);
					}
					{
						obj_t BgL_auxz00_3447;

						{	/* Eval/evaluate_avar.scm 201 */
							obj_t BgL_arg1430z00_3004;
							obj_t BgL_arg1431z00_3005;

							BgL_arg1430z00_3004 =
								(((BgL_ev_binderz00_bglt) COBJECT(
										((BgL_ev_binderz00_bglt)
											((BgL_ev_letrecz00_bglt) BgL_ez00_2850))))->BgL_varsz00);
							BgL_arg1431z00_3005 =
								(((BgL_ev_absz00_bglt) COBJECT(
										((BgL_ev_absz00_bglt) BgL_absz00_2852)))->BgL_bindz00);
							BgL_auxz00_3447 =
								BGl_appendzd221011zd2zz__evaluate_avarz00(BgL_arg1430z00_3004,
								BgL_arg1431z00_3005);
						}
						((((BgL_ev_absz00_bglt) COBJECT(
										((BgL_ev_absz00_bglt) BgL_absz00_2852)))->BgL_bindz00) =
							((obj_t) BgL_auxz00_3447), BUNSPEC);
					}
					{	/* Eval/evaluate_avar.scm 202 */
						obj_t BgL_g1169z00_3006;

						BgL_g1169z00_3006 =
							(((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt)
										((BgL_ev_letrecz00_bglt) BgL_ez00_2850))))->BgL_varsz00);
						{
							obj_t BgL_l1167z00_3008;

							BgL_l1167z00_3008 = BgL_g1169z00_3006;
						BgL_zc3z04anonymousza31432ze3z87_3007:
							if (PAIRP(BgL_l1167z00_3008))
								{	/* Eval/evaluate_avar.scm 202 */
									{	/* Eval/evaluate_avar.scm 202 */
										obj_t BgL_vz00_3009;

										BgL_vz00_3009 = CAR(BgL_l1167z00_3008);
										((((BgL_ev_varz00_bglt) COBJECT(
														((BgL_ev_varz00_bglt) BgL_vz00_3009)))->
												BgL_effz00) = ((obj_t) BTRUE), BUNSPEC);
									}
									{
										obj_t BgL_l1167z00_3464;

										BgL_l1167z00_3464 = CDR(BgL_l1167z00_3008);
										BgL_l1167z00_3008 = BgL_l1167z00_3464;
										goto BgL_zc3z04anonymousza31432ze3z87_3007;
									}
								}
							else
								{	/* Eval/evaluate_avar.scm 202 */
									BgL_tmpz00_3428 = ((bool_t) 1);
								}
						}
					}
				}
				return BBOOL(BgL_tmpz00_3428);
			}
		}

	}



/* &avar-ev_let*1241 */
	obj_t BGl_z62avarzd2ev_letza21241z12zz__evaluate_avarz00(obj_t
		BgL_envz00_2853, obj_t BgL_ez00_2854, obj_t BgL_localz00_2855,
		obj_t BgL_absz00_2856)
	{
		{	/* Eval/evaluate_avar.scm 187 */
			{	/* Eval/evaluate_avar.scm 189 */
				obj_t BgL_localz00_3011;

				{	/* Eval/evaluate_avar.scm 189 */
					obj_t BgL_arg1425z00_3012;

					BgL_arg1425z00_3012 =
						(((BgL_ev_binderz00_bglt) COBJECT(
								((BgL_ev_binderz00_bglt)
									((BgL_ev_letza2za2_bglt) BgL_ez00_2854))))->BgL_varsz00);
					BgL_localz00_3011 =
						BGl_appendzd221011zd2zz__evaluate_avarz00(BgL_arg1425z00_3012,
						BgL_localz00_2855);
				}
				{	/* Eval/evaluate_avar.scm 190 */
					obj_t BgL_g1158z00_3013;

					BgL_g1158z00_3013 =
						(((BgL_ev_binderz00_bglt) COBJECT(
								((BgL_ev_binderz00_bglt)
									((BgL_ev_letza2za2_bglt) BgL_ez00_2854))))->BgL_valsz00);
					{
						obj_t BgL_l1156z00_3015;

						BgL_l1156z00_3015 = BgL_g1158z00_3013;
					BgL_zc3z04anonymousza31414ze3z87_3014:
						if (PAIRP(BgL_l1156z00_3015))
							{	/* Eval/evaluate_avar.scm 190 */
								{	/* Eval/evaluate_avar.scm 190 */
									obj_t BgL_ez00_3016;

									BgL_ez00_3016 = CAR(BgL_l1156z00_3015);
									BGl_avarz00zz__evaluate_avarz00(
										((BgL_ev_exprz00_bglt) BgL_ez00_3016), BgL_localz00_3011,
										BgL_absz00_2856);
								}
								{
									obj_t BgL_l1156z00_3479;

									BgL_l1156z00_3479 = CDR(BgL_l1156z00_3015);
									BgL_l1156z00_3015 = BgL_l1156z00_3479;
									goto BgL_zc3z04anonymousza31414ze3z87_3014;
								}
							}
						else
							{	/* Eval/evaluate_avar.scm 190 */
								((bool_t) 1);
							}
					}
				}
				{	/* Eval/evaluate_avar.scm 191 */
					BgL_ev_exprz00_bglt BgL_arg1417z00_3017;

					BgL_arg1417z00_3017 =
						(((BgL_ev_binderz00_bglt) COBJECT(
								((BgL_ev_binderz00_bglt)
									((BgL_ev_letza2za2_bglt) BgL_ez00_2854))))->BgL_bodyz00);
					BGl_avarz00zz__evaluate_avarz00(BgL_arg1417z00_3017,
						BgL_localz00_3011, BgL_absz00_2856);
				}
				{	/* Eval/evaluate_avar.scm 192 */
					obj_t BgL_arg1418z00_3018;

					BgL_arg1418z00_3018 =
						(((BgL_ev_binderz00_bglt) COBJECT(
								((BgL_ev_binderz00_bglt)
									((BgL_ev_letza2za2_bglt) BgL_ez00_2854))))->BgL_varsz00);
					BGl_bindzd2andzd2resetzd2effectzd2zz__evaluate_avarz00(
						((BgL_ev_absz00_bglt) BgL_absz00_2856), BgL_arg1418z00_3018);
				}
				{
					obj_t BgL_auxz00_3490;

					{	/* Eval/evaluate_avar.scm 193 */
						obj_t BgL_l1159z00_3019;

						BgL_l1159z00_3019 =
							(((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt)
										((BgL_ev_letza2za2_bglt) BgL_ez00_2854))))->BgL_varsz00);
						if (NULLP(BgL_l1159z00_3019))
							{	/* Eval/evaluate_avar.scm 193 */
								BgL_auxz00_3490 = BNIL;
							}
						else
							{	/* Eval/evaluate_avar.scm 193 */
								obj_t BgL_head1161z00_3020;

								{	/* Eval/evaluate_avar.scm 193 */
									obj_t BgL_res1861z00_3021;

									BgL_res1861z00_3021 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									BgL_head1161z00_3020 = BgL_res1861z00_3021;
								}
								{
									obj_t BgL_l1159z00_3023;
									obj_t BgL_tail1162z00_3024;

									BgL_l1159z00_3023 = BgL_l1159z00_3019;
									BgL_tail1162z00_3024 = BgL_head1161z00_3020;
								BgL_zc3z04anonymousza31420ze3z87_3022:
									if (NULLP(BgL_l1159z00_3023))
										{	/* Eval/evaluate_avar.scm 193 */
											BgL_auxz00_3490 = CDR(BgL_head1161z00_3020);
										}
									else
										{	/* Eval/evaluate_avar.scm 193 */
											obj_t BgL_newtail1163z00_3025;

											{	/* Eval/evaluate_avar.scm 193 */
												obj_t BgL_arg1424z00_3026;

												BgL_arg1424z00_3026 =
													(((BgL_ev_varz00_bglt) COBJECT(
															((BgL_ev_varz00_bglt)
																CAR(
																	((obj_t) BgL_l1159z00_3023)))))->BgL_effz00);
												{	/* Eval/evaluate_avar.scm 193 */
													obj_t BgL_res1867z00_3027;

													BgL_res1867z00_3027 =
														MAKE_YOUNG_PAIR(BgL_arg1424z00_3026, BNIL);
													BgL_newtail1163z00_3025 = BgL_res1867z00_3027;
												}
											}
											SET_CDR(BgL_tail1162z00_3024, BgL_newtail1163z00_3025);
											{	/* Eval/evaluate_avar.scm 193 */
												obj_t BgL_arg1422z00_3028;

												BgL_arg1422z00_3028 = CDR(((obj_t) BgL_l1159z00_3023));
												{
													obj_t BgL_tail1162z00_3510;
													obj_t BgL_l1159z00_3509;

													BgL_l1159z00_3509 = BgL_arg1422z00_3028;
													BgL_tail1162z00_3510 = BgL_newtail1163z00_3025;
													BgL_tail1162z00_3024 = BgL_tail1162z00_3510;
													BgL_l1159z00_3023 = BgL_l1159z00_3509;
													goto BgL_zc3z04anonymousza31420ze3z87_3022;
												}
											}
										}
								}
							}
					}
					return
						((((BgL_ev_letza2za2_bglt) COBJECT(
									((BgL_ev_letza2za2_bglt) BgL_ez00_2854)))->BgL_boxesz00) =
						((obj_t) BgL_auxz00_3490), BUNSPEC);
				}
			}
		}

	}



/* &avar-ev_let1239 */
	obj_t BGl_z62avarzd2ev_let1239zb0zz__evaluate_avarz00(obj_t BgL_envz00_2857,
		obj_t BgL_ez00_2858, obj_t BgL_localz00_2859, obj_t BgL_absz00_2860)
	{
		{	/* Eval/evaluate_avar.scm 180 */
			{	/* Eval/evaluate_avar.scm 182 */
				obj_t BgL_g1149z00_3030;

				BgL_g1149z00_3030 =
					(((BgL_ev_binderz00_bglt) COBJECT(
							((BgL_ev_binderz00_bglt)
								((BgL_ev_letz00_bglt) BgL_ez00_2858))))->BgL_valsz00);
				{
					obj_t BgL_l1147z00_3032;

					BgL_l1147z00_3032 = BgL_g1149z00_3030;
				BgL_zc3z04anonymousza31400ze3z87_3031:
					if (PAIRP(BgL_l1147z00_3032))
						{	/* Eval/evaluate_avar.scm 182 */
							{	/* Eval/evaluate_avar.scm 182 */
								obj_t BgL_ez00_3033;

								BgL_ez00_3033 = CAR(BgL_l1147z00_3032);
								BGl_avarz00zz__evaluate_avarz00(
									((BgL_ev_exprz00_bglt) BgL_ez00_3033), BgL_localz00_2859,
									BgL_absz00_2860);
							}
							{
								obj_t BgL_l1147z00_3520;

								BgL_l1147z00_3520 = CDR(BgL_l1147z00_3032);
								BgL_l1147z00_3032 = BgL_l1147z00_3520;
								goto BgL_zc3z04anonymousza31400ze3z87_3031;
							}
						}
					else
						{	/* Eval/evaluate_avar.scm 182 */
							((bool_t) 1);
						}
				}
			}
			{	/* Eval/evaluate_avar.scm 183 */
				BgL_ev_exprz00_bglt BgL_arg1404z00_3034;
				obj_t BgL_arg1405z00_3035;

				BgL_arg1404z00_3034 =
					(((BgL_ev_binderz00_bglt) COBJECT(
							((BgL_ev_binderz00_bglt)
								((BgL_ev_letz00_bglt) BgL_ez00_2858))))->BgL_bodyz00);
				{	/* Eval/evaluate_avar.scm 183 */
					obj_t BgL_arg1406z00_3036;

					BgL_arg1406z00_3036 =
						(((BgL_ev_binderz00_bglt) COBJECT(
								((BgL_ev_binderz00_bglt)
									((BgL_ev_letz00_bglt) BgL_ez00_2858))))->BgL_varsz00);
					BgL_arg1405z00_3035 =
						BGl_appendzd221011zd2zz__evaluate_avarz00(BgL_arg1406z00_3036,
						BgL_localz00_2859);
				}
				BGl_avarz00zz__evaluate_avarz00(BgL_arg1404z00_3034,
					BgL_arg1405z00_3035, BgL_absz00_2860);
			}
			{	/* Eval/evaluate_avar.scm 184 */
				obj_t BgL_arg1407z00_3037;

				BgL_arg1407z00_3037 =
					(((BgL_ev_binderz00_bglt) COBJECT(
							((BgL_ev_binderz00_bglt)
								((BgL_ev_letz00_bglt) BgL_ez00_2858))))->BgL_varsz00);
				BGl_bindzd2andzd2resetzd2effectzd2zz__evaluate_avarz00(
					((BgL_ev_absz00_bglt) BgL_absz00_2860), BgL_arg1407z00_3037);
			}
			{
				obj_t BgL_auxz00_3535;

				{	/* Eval/evaluate_avar.scm 185 */
					obj_t BgL_hook1154z00_3038;

					BgL_hook1154z00_3038 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
					{	/* Eval/evaluate_avar.scm 185 */
						obj_t BgL_g1155z00_3039;

						BgL_g1155z00_3039 =
							(((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt)
										((BgL_ev_letz00_bglt) BgL_ez00_2858))))->BgL_varsz00);
						{
							obj_t BgL_l1151z00_3041;
							obj_t BgL_h1152z00_3042;

							BgL_l1151z00_3041 = BgL_g1155z00_3039;
							BgL_h1152z00_3042 = BgL_hook1154z00_3038;
						BgL_zc3z04anonymousza31408ze3z87_3040:
							if (NULLP(BgL_l1151z00_3041))
								{	/* Eval/evaluate_avar.scm 185 */
									BgL_auxz00_3535 = CDR(BgL_hook1154z00_3038);
								}
							else
								{	/* Eval/evaluate_avar.scm 185 */
									if (CBOOL(
											(((BgL_ev_varz00_bglt) COBJECT(
														((BgL_ev_varz00_bglt)
															CAR(((obj_t) BgL_l1151z00_3041)))))->BgL_effz00)))
										{	/* Eval/evaluate_avar.scm 185 */
											obj_t BgL_nh1153z00_3043;

											{	/* Eval/evaluate_avar.scm 185 */
												obj_t BgL_arg1412z00_3044;

												BgL_arg1412z00_3044 = CAR(((obj_t) BgL_l1151z00_3041));
												{	/* Eval/evaluate_avar.scm 185 */
													obj_t BgL_res1856z00_3045;

													BgL_res1856z00_3045 =
														MAKE_YOUNG_PAIR(BgL_arg1412z00_3044, BNIL);
													BgL_nh1153z00_3043 = BgL_res1856z00_3045;
												}
											}
											SET_CDR(BgL_h1152z00_3042, BgL_nh1153z00_3043);
											{	/* Eval/evaluate_avar.scm 185 */
												obj_t BgL_arg1411z00_3046;

												BgL_arg1411z00_3046 = CDR(((obj_t) BgL_l1151z00_3041));
												{
													obj_t BgL_h1152z00_3557;
													obj_t BgL_l1151z00_3556;

													BgL_l1151z00_3556 = BgL_arg1411z00_3046;
													BgL_h1152z00_3557 = BgL_nh1153z00_3043;
													BgL_h1152z00_3042 = BgL_h1152z00_3557;
													BgL_l1151z00_3041 = BgL_l1151z00_3556;
													goto BgL_zc3z04anonymousza31408ze3z87_3040;
												}
											}
										}
									else
										{	/* Eval/evaluate_avar.scm 185 */
											obj_t BgL_arg1413z00_3047;

											BgL_arg1413z00_3047 = CDR(((obj_t) BgL_l1151z00_3041));
											{
												obj_t BgL_l1151z00_3560;

												BgL_l1151z00_3560 = BgL_arg1413z00_3047;
												BgL_l1151z00_3041 = BgL_l1151z00_3560;
												goto BgL_zc3z04anonymousza31408ze3z87_3040;
											}
										}
								}
						}
					}
				}
				return
					((((BgL_ev_letz00_bglt) COBJECT(
								((BgL_ev_letz00_bglt) BgL_ez00_2858)))->BgL_boxesz00) =
					((obj_t) BgL_auxz00_3535), BUNSPEC);
			}
		}

	}



/* &avar-ev_synchronize1237 */
	obj_t BGl_z62avarzd2ev_synchroniza7e1237z17zz__evaluate_avarz00(obj_t
		BgL_envz00_2861, obj_t BgL_ez00_2862, obj_t BgL_localz00_2863,
		obj_t BgL_absz00_2864)
	{
		{	/* Eval/evaluate_avar.scm 174 */
			BGl_avarz00zz__evaluate_avarz00(
				(((BgL_ev_synchroniza7eza7_bglt) COBJECT(
							((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_2862)))->BgL_mutexz00),
				BgL_localz00_2863, BgL_absz00_2864);
			BGl_avarz00zz__evaluate_avarz00((((BgL_ev_synchroniza7eza7_bglt)
						COBJECT(((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_2862)))->
					BgL_prelockz00), BgL_localz00_2863, BgL_absz00_2864);
			return BGl_avarz00zz__evaluate_avarz00((((BgL_ev_synchroniza7eza7_bglt)
						COBJECT(((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_2862)))->
					BgL_bodyz00), BgL_localz00_2863, BgL_absz00_2864);
		}

	}



/* &avar-ev_with-handler1235 */
	obj_t BGl_z62avarzd2ev_withzd2handler1235z62zz__evaluate_avarz00(obj_t
		BgL_envz00_2865, obj_t BgL_ez00_2866, obj_t BgL_localz00_2867,
		obj_t BgL_absz00_2868)
	{
		{	/* Eval/evaluate_avar.scm 169 */
			BGl_avarz00zz__evaluate_avarz00(
				(((BgL_ev_withzd2handlerzd2_bglt) COBJECT(
							((BgL_ev_withzd2handlerzd2_bglt) BgL_ez00_2866)))->
					BgL_handlerz00), BgL_localz00_2867, BgL_absz00_2868);
			return BGl_avarz00zz__evaluate_avarz00((((BgL_ev_withzd2handlerzd2_bglt)
						COBJECT(((BgL_ev_withzd2handlerzd2_bglt) BgL_ez00_2866)))->
					BgL_bodyz00), BgL_localz00_2867, BgL_absz00_2868);
		}

	}



/* &avar-ev_unwind-prote1233 */
	obj_t BGl_z62avarzd2ev_unwindzd2prote1233z62zz__evaluate_avarz00(obj_t
		BgL_envz00_2869, obj_t BgL_ez00_2870, obj_t BgL_localz00_2871,
		obj_t BgL_absz00_2872)
	{
		{	/* Eval/evaluate_avar.scm 164 */
			BGl_avarz00zz__evaluate_avarz00(
				(((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(
							((BgL_ev_unwindzd2protectzd2_bglt) BgL_ez00_2870)))->BgL_ez00),
				BgL_localz00_2871, BgL_absz00_2872);
			return BGl_avarz00zz__evaluate_avarz00((((BgL_ev_unwindzd2protectzd2_bglt)
						COBJECT(((BgL_ev_unwindzd2protectzd2_bglt) BgL_ez00_2870)))->
					BgL_bodyz00), BgL_localz00_2871, BgL_absz00_2872);
		}

	}



/* &avar-ev_bind-exit1231 */
	obj_t BGl_z62avarzd2ev_bindzd2exit1231z62zz__evaluate_avarz00(obj_t
		BgL_envz00_2873, obj_t BgL_ez00_2874, obj_t BgL_localz00_2875,
		obj_t BgL_absz00_2876)
	{
		{	/* Eval/evaluate_avar.scm 159 */
			{	/* Eval/evaluate_avar.scm 161 */
				BgL_ev_exprz00_bglt BgL_arg1388z00_3052;
				obj_t BgL_arg1389z00_3053;

				BgL_arg1388z00_3052 =
					(((BgL_ev_bindzd2exitzd2_bglt) COBJECT(
							((BgL_ev_bindzd2exitzd2_bglt) BgL_ez00_2874)))->BgL_bodyz00);
				{	/* Eval/evaluate_avar.scm 161 */
					BgL_ev_varz00_bglt BgL_arg1390z00_3054;

					BgL_arg1390z00_3054 =
						(((BgL_ev_bindzd2exitzd2_bglt) COBJECT(
								((BgL_ev_bindzd2exitzd2_bglt) BgL_ez00_2874)))->BgL_varz00);
					BgL_arg1389z00_3053 =
						MAKE_YOUNG_PAIR(((obj_t) BgL_arg1390z00_3054), BgL_localz00_2875);
				}
				BGl_avarz00zz__evaluate_avarz00(BgL_arg1388z00_3052,
					BgL_arg1389z00_3053, BgL_absz00_2876);
			}
			{	/* Eval/evaluate_avar.scm 162 */
				obj_t BgL_arg1391z00_3055;

				{	/* Eval/evaluate_avar.scm 162 */
					BgL_ev_varz00_bglt BgL_arg1392z00_3056;

					BgL_arg1392z00_3056 =
						(((BgL_ev_bindzd2exitzd2_bglt) COBJECT(
								((BgL_ev_bindzd2exitzd2_bglt) BgL_ez00_2874)))->BgL_varz00);
					BgL_arg1391z00_3055 =
						MAKE_YOUNG_PAIR(((obj_t) BgL_arg1392z00_3056), BNIL);
				}
				return
					BGl_bindzd2andzd2resetzd2effectzd2zz__evaluate_avarz00(
					((BgL_ev_absz00_bglt) BgL_absz00_2876), BgL_arg1391z00_3055);
			}
		}

	}



/* &avar-ev_setlocal1229 */
	obj_t BGl_z62avarzd2ev_setlocal1229zb0zz__evaluate_avarz00(obj_t
		BgL_envz00_2877, obj_t BgL_ez00_2878, obj_t BgL_localz00_2879,
		obj_t BgL_absz00_2880)
	{
		{	/* Eval/evaluate_avar.scm 152 */
			{	/* Eval/evaluate_avar.scm 154 */
				BgL_ev_varz00_bglt BgL_arg1386z00_3058;

				BgL_arg1386z00_3058 =
					(((BgL_ev_setlocalz00_bglt) COBJECT(
							((BgL_ev_setlocalz00_bglt) BgL_ez00_2878)))->BgL_vz00);
				if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
							((obj_t) BgL_arg1386z00_3058), BgL_localz00_2879)))
					{	/* Eval/evaluate_avar.scm 118 */
						BFALSE;
					}
				else
					{	/* Eval/evaluate_avar.scm 118 */
						if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
									((obj_t) BgL_arg1386z00_3058),
									(((BgL_ev_absz00_bglt) COBJECT(
												((BgL_ev_absz00_bglt) BgL_absz00_2880)))->
										BgL_freez00))))
							{	/* Eval/evaluate_avar.scm 120 */
								BFALSE;
							}
						else
							{
								obj_t BgL_auxz00_3608;

								{	/* Eval/evaluate_avar.scm 120 */
									obj_t BgL_arg1363z00_3059;

									BgL_arg1363z00_3059 =
										(((BgL_ev_absz00_bglt) COBJECT(
												((BgL_ev_absz00_bglt) BgL_absz00_2880)))->BgL_freez00);
									BgL_auxz00_3608 =
										MAKE_YOUNG_PAIR(
										((obj_t) BgL_arg1386z00_3058), BgL_arg1363z00_3059);
								}
								((((BgL_ev_absz00_bglt) COBJECT(
												((BgL_ev_absz00_bglt) BgL_absz00_2880)))->BgL_freez00) =
									((obj_t) BgL_auxz00_3608), BUNSPEC);
							}
					}
			}
			((((BgL_ev_varz00_bglt) COBJECT(
							(((BgL_ev_setlocalz00_bglt) COBJECT(
										((BgL_ev_setlocalz00_bglt) BgL_ez00_2878)))->BgL_vz00)))->
					BgL_effz00) = ((obj_t) BTRUE), BUNSPEC);
			{	/* Eval/evaluate_avar.scm 157 */
				BgL_ev_exprz00_bglt BgL_arg1387z00_3060;

				BgL_arg1387z00_3060 =
					(((BgL_ev_hookz00_bglt) COBJECT(
							((BgL_ev_hookz00_bglt)
								((BgL_ev_setlocalz00_bglt) BgL_ez00_2878))))->BgL_ez00);
				return
					BGl_avarz00zz__evaluate_avarz00(BgL_arg1387z00_3060,
					BgL_localz00_2879, BgL_absz00_2880);
			}
		}

	}



/* &avar-ev_hook1227 */
	obj_t BGl_z62avarzd2ev_hook1227zb0zz__evaluate_avarz00(obj_t BgL_envz00_2881,
		obj_t BgL_ez00_2882, obj_t BgL_localz00_2883, obj_t BgL_absz00_2884)
	{
		{	/* Eval/evaluate_avar.scm 148 */
			return
				BGl_avarz00zz__evaluate_avarz00(
				(((BgL_ev_hookz00_bglt) COBJECT(
							((BgL_ev_hookz00_bglt) BgL_ez00_2882)))->BgL_ez00),
				BgL_localz00_2883, BgL_absz00_2884);
		}

	}



/* &avar-ev_prog21225 */
	obj_t BGl_z62avarzd2ev_prog21225zb0zz__evaluate_avarz00(obj_t BgL_envz00_2885,
		obj_t BgL_ez00_2886, obj_t BgL_localz00_2887, obj_t BgL_absz00_2888)
	{
		{	/* Eval/evaluate_avar.scm 143 */
			BGl_avarz00zz__evaluate_avarz00(
				(((BgL_ev_prog2z00_bglt) COBJECT(
							((BgL_ev_prog2z00_bglt) BgL_ez00_2886)))->BgL_e1z00),
				BgL_localz00_2887, BgL_absz00_2888);
			return BGl_avarz00zz__evaluate_avarz00((((BgL_ev_prog2z00_bglt)
						COBJECT(((BgL_ev_prog2z00_bglt) BgL_ez00_2886)))->BgL_e2z00),
				BgL_localz00_2887, BgL_absz00_2888);
		}

	}



/* &avar-ev_list1223 */
	obj_t BGl_z62avarzd2ev_list1223zb0zz__evaluate_avarz00(obj_t BgL_envz00_2889,
		obj_t BgL_ez00_2890, obj_t BgL_localz00_2891, obj_t BgL_absz00_2892)
	{
		{	/* Eval/evaluate_avar.scm 139 */
			{	/* Eval/evaluate_avar.scm 140 */
				bool_t BgL_tmpz00_3631;

				{	/* Eval/evaluate_avar.scm 141 */
					obj_t BgL_g1146z00_3064;

					BgL_g1146z00_3064 =
						(((BgL_ev_listz00_bglt) COBJECT(
								((BgL_ev_listz00_bglt) BgL_ez00_2890)))->BgL_argsz00);
					{
						obj_t BgL_l1144z00_3066;

						BgL_l1144z00_3066 = BgL_g1146z00_3064;
					BgL_zc3z04anonymousza31380ze3z87_3065:
						if (PAIRP(BgL_l1144z00_3066))
							{	/* Eval/evaluate_avar.scm 141 */
								{	/* Eval/evaluate_avar.scm 141 */
									obj_t BgL_ez00_3067;

									BgL_ez00_3067 = CAR(BgL_l1144z00_3066);
									BGl_avarz00zz__evaluate_avarz00(
										((BgL_ev_exprz00_bglt) BgL_ez00_3067), BgL_localz00_2891,
										BgL_absz00_2892);
								}
								{
									obj_t BgL_l1144z00_3639;

									BgL_l1144z00_3639 = CDR(BgL_l1144z00_3066);
									BgL_l1144z00_3066 = BgL_l1144z00_3639;
									goto BgL_zc3z04anonymousza31380ze3z87_3065;
								}
							}
						else
							{	/* Eval/evaluate_avar.scm 141 */
								BgL_tmpz00_3631 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_tmpz00_3631);
			}
		}

	}



/* &avar-ev_if1221 */
	obj_t BGl_z62avarzd2ev_if1221zb0zz__evaluate_avarz00(obj_t BgL_envz00_2893,
		obj_t BgL_ez00_2894, obj_t BgL_localz00_2895, obj_t BgL_absz00_2896)
	{
		{	/* Eval/evaluate_avar.scm 133 */
			BGl_avarz00zz__evaluate_avarz00(
				(((BgL_ev_ifz00_bglt) COBJECT(
							((BgL_ev_ifz00_bglt) BgL_ez00_2894)))->BgL_pz00),
				BgL_localz00_2895, BgL_absz00_2896);
			BGl_avarz00zz__evaluate_avarz00((((BgL_ev_ifz00_bglt)
						COBJECT(((BgL_ev_ifz00_bglt) BgL_ez00_2894)))->BgL_tz00),
				BgL_localz00_2895, BgL_absz00_2896);
			return BGl_avarz00zz__evaluate_avarz00((((BgL_ev_ifz00_bglt)
						COBJECT(((BgL_ev_ifz00_bglt) BgL_ez00_2894)))->BgL_ez00),
				BgL_localz00_2895, BgL_absz00_2896);
		}

	}



/* &avar-ev_litt1219 */
	obj_t BGl_z62avarzd2ev_litt1219zb0zz__evaluate_avarz00(obj_t BgL_envz00_2897,
		obj_t BgL_ez00_2898, obj_t BgL_localz00_2899, obj_t BgL_absz00_2900)
	{
		{	/* Eval/evaluate_avar.scm 130 */
			return BUNSPEC;
		}

	}



/* &avar-ev_global1217 */
	obj_t BGl_z62avarzd2ev_global1217zb0zz__evaluate_avarz00(obj_t
		BgL_envz00_2901, obj_t BgL_varz00_2902, obj_t BgL_localz00_2903,
		obj_t BgL_absz00_2904)
	{
		{	/* Eval/evaluate_avar.scm 127 */
			return BUNSPEC;
		}

	}



/* &avar-ev_var1215 */
	obj_t BGl_z62avarzd2ev_var1215zb0zz__evaluate_avarz00(obj_t BgL_envz00_2905,
		obj_t BgL_varz00_2906, obj_t BgL_localz00_2907, obj_t BgL_absz00_2908)
	{
		{	/* Eval/evaluate_avar.scm 124 */
			if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
						((obj_t)
							((BgL_ev_varz00_bglt) BgL_varz00_2906)), BgL_localz00_2907)))
				{	/* Eval/evaluate_avar.scm 118 */
					return BFALSE;
				}
			else
				{	/* Eval/evaluate_avar.scm 118 */
					if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
								((obj_t)
									((BgL_ev_varz00_bglt) BgL_varz00_2906)),
								(((BgL_ev_absz00_bglt) COBJECT(
											((BgL_ev_absz00_bglt) BgL_absz00_2908)))->BgL_freez00))))
						{	/* Eval/evaluate_avar.scm 120 */
							return BFALSE;
						}
					else
						{
							obj_t BgL_auxz00_3663;

							{	/* Eval/evaluate_avar.scm 120 */
								obj_t BgL_arg1363z00_3072;

								BgL_arg1363z00_3072 =
									(((BgL_ev_absz00_bglt) COBJECT(
											((BgL_ev_absz00_bglt) BgL_absz00_2908)))->BgL_freez00);
								BgL_auxz00_3663 =
									MAKE_YOUNG_PAIR(
									((obj_t)
										((BgL_ev_varz00_bglt) BgL_varz00_2906)),
									BgL_arg1363z00_3072);
							}
							return
								((((BgL_ev_absz00_bglt) COBJECT(
											((BgL_ev_absz00_bglt) BgL_absz00_2908)))->BgL_freez00) =
								((obj_t) BgL_auxz00_3663), BUNSPEC);
						}
				}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__evaluate_avarz00()
	{
		{	/* Eval/evaluate_avar.scm 15 */
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 121046386),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 251315035),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 443936798),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 439352636),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581), BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945), BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874), BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048), BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694), BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845), BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long)
					228151379), BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__ppz00(((long) 233942106),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 220647683),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 177147628),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__expandz00(((long) 414007030),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 528345319),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__evcompilez00(((long) 492753248),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__everrorz00(((long) 375872251),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			BGl_modulezd2initializa7ationz75zz__evmodulez00(((long) 505900559),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
			return BGl_modulezd2initializa7ationz75zz__evaluate_typesz00(((long) 0),
				BSTRING_TO_STRING(BGl_string2018z00zz__evaluate_avarz00));
		}

	}

#ifdef __cplusplus
}
#endif
