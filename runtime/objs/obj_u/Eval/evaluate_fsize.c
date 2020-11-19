/*===========================================================================*/
/*   (Eval/evaluate_fsize.scm)                                               */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/evaluate_fsize.scm -indent -o objs/obj_u/Eval/evaluate_fsize.c) */
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


	static obj_t
		BGl_z62searchzd2letreczd2ev_var1323z62zz__evaluate_fsiza7eza7(obj_t, obj_t);
	static obj_t BGl_z62fsiza7ezd2ev_labels1313z17zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62fsiza7ezd2ev_withzd2handle1303zc5zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62searchzd2letreczd2ev_bin1337z62zz__evaluate_fsiza7eza7(obj_t, obj_t);
	static obj_t BGl_z62hasvarzf3zd2ev_var1431z43zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62searchzd2letreczb0zz__evaluate_fsiza7eza7(obj_t, obj_t);
	static obj_t
		BGl_z62searchzd2letreczd2ev_bin1345z62zz__evaluate_fsiza7eza7(obj_t, obj_t);
	static obj_t BGl_z62tailposzd2ev_letza21417z12zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62searchzd2letreczd2ev_let1347z62zz__evaluate_fsiza7eza7(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__evaluate_fsiza7eza7 =
		BUNSPEC;
	static obj_t BGl_z62hasvarzf3zd2ev_list1439z43zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62fsiza7ezd2ev_bindzd2exit1299zc5zz__evaluate_fsiza7eza7(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_ev_exprz00_bglt
		BGl_extractzd2loopszd2zz__evaluate_fsiza7eza7(BgL_ev_exprz00_bglt);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static bool_t BGl_letrectailzf3zf3zz__evaluate_fsiza7eza7(obj_t, obj_t,
		BgL_ev_exprz00_bglt);
	static obj_t BGl_z62subst_gotozd2ev_goto1383zb0zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_ev_letrecz00zz__evaluate_typesz00;
	static obj_t BGl_z62hasvarzf3zd2ev_global1433z43zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__evaluate_fsiza7eza7();
	static obj_t BGl_z62hasvarzf3zd2ev_prog21441z43zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_ev_letz00zz__evaluate_typesz00;
	static obj_t BGl_z62hasvarzf3zd2ev_labels1457z43zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62tailposzd2ev_let1415zb0zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62fsiza7ezd2ev_let1307z17zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62tailposzd2ev_list1399zb0zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62searchzd2letrec1320zb0zz__evaluate_fsiza7eza7(obj_t,
		obj_t);
	static obj_t
		BGl_z62searchzd2letreczd2ev_pro1333z62zz__evaluate_fsiza7eza7(obj_t, obj_t);
	static obj_t BGl_z62fsiza7ezd2ev_global1287z17zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__evaluate_fsiza7eza7();
	extern obj_t BGl_ev_prog2z00zz__evaluate_typesz00;
	static obj_t
		BGl_z62subst_gotozd2ev_withzd2h1375z62zz__evaluate_fsiza7eza7(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62searchzd2letreczd2ev_hoo1335z62zz__evaluate_fsiza7eza7(obj_t, obj_t);
	static obj_t
		BGl_z62searchzd2letreczd2ev_app1349z62zz__evaluate_fsiza7eza7(obj_t, obj_t);
	static obj_t BGl_z62fsiza7ezd2ev_letza21309zb5zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_framezd2siza7ez75zz__evaluate_fsiza7eza7(BgL_ev_exprz00_bglt);
	static obj_t
		BGl_z62hasvarzf3zd2ev_unwindzd2pr1449z91zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__evaluate_fsiza7eza7();
	static obj_t BGl_z62tailposz62zz__evaluate_fsiza7eza7(obj_t, obj_t, obj_t);
	extern obj_t BGl_ev_bindzd2exitzd2zz__evaluate_typesz00;
	static obj_t BGl_z62hasvarzf3zd2ev_litt1435z43zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62subst_gotozd2ev_var1356zb0zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62hasvarzf3zd2ev_app1461z43zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62hasvarzf3z91zz__evaluate_fsiza7eza7(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62fsiza7ezd2ev_unwindzd2prot1301zc5zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62subst_gotozd2ev_binder1379zb0zz__evaluate_fsiza7eza7(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62framezd2siza7ez17zz__evaluate_fsiza7eza7(obj_t, obj_t);
	static obj_t BGl_z62fsiza7ezd2ev_letrec1311z17zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_ev_unwindzd2protectzd2zz__evaluate_typesz00;
	static obj_t BGl_z62fsiza7ezd2ev_if1291z17zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_z62fsiza7ezd2ev_prog21295z17zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62hasvarzf3zd2ev_bindzd2exit1447z91zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	extern bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62tailposzd2ev_litt1395zb0zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_ev_letza2za2zz__evaluate_typesz00;
	static obj_t
		BGl_z62hasvarzf3zd2ev_synchroni1453z43zz__evaluate_fsiza7eza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_ev_labelsz00zz__evaluate_typesz00;
	static obj_t
		BGl_z62hasvarzf3zd2ev_withzd2hand1451z91zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62tailposzd2ev_app1425zb0zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62fsiza7ezd2ev_list1293z17zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62fsiza7ezd2ev_app1317z17zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__evaluate_fsiza7eza7();
	static obj_t BGl_z62tailposzd2ev_var1391zb0zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_ev_absz00zz__evaluate_typesz00;
	static obj_t BGl_z62fsiza7ezd2ev_var1285z17zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62subst_gotozd2ev_synchr1377zb0zz__evaluate_fsiza7eza7(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_searchzd2letreczd2zz__evaluate_fsiza7eza7(BgL_ev_exprz00_bglt);
	static obj_t
		BGl_z62searchzd2letreczd2ev_abs1351z62zz__evaluate_fsiza7eza7(obj_t, obj_t);
	static obj_t BGl_z62tailposzd2ev_hook1403zb0zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62tailposzd2ev_if1397zb0zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62hasvarzf3zd2ev_abs1463z43zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_ev_ifz00zz__evaluate_typesz00;
	static obj_t
		BGl_z62subst_gotozd2ev_unwind1372zb0zz__evaluate_fsiza7eza7(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_ev_labelsz00_bglt
		BGl_modifyzd2letreczd2zz__evaluate_fsiza7eza7(obj_t, obj_t,
		BgL_ev_exprz00_bglt);
	static int BGl_fsiza7eza7zz__evaluate_fsiza7eza7(BgL_ev_exprz00_bglt, int);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62fsiza7ezd2ev_litt1289z17zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_ev_hookz00zz__evaluate_typesz00;
	static obj_t BGl_z62subst_gotozd2ev_list1364zb0zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62subst_gotozd2ev_app1385zb0zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62searchzd2letreczd2ev_unw1339z62zz__evaluate_fsiza7eza7(obj_t, obj_t);
	static obj_t
		BGl_z62searchzd2letreczd2ev_glo1325z62zz__evaluate_fsiza7eza7(obj_t, obj_t);
	static obj_t
		BGl_z62searchzd2letreczd2ev_lis1331z62zz__evaluate_fsiza7eza7(obj_t, obj_t);
	static obj_t BGl_z62tailposzd2ev_labels1421zb0zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62tailposzd2ev_abs1427zb0zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62tailposzd2ev_setlocal1405zb0zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62fsiza7ezd2ev_abs1319z17zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_ev_gotoz00zz__evaluate_typesz00;
	static obj_t BGl_z62tailposzd2ev_goto1423zb0zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62hasvarzf3zd2ev_binder1455z43zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62hasvarzf3zd2ev_hook1443z43zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62fsiza7ezc5zz__evaluate_fsiza7eza7(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__evaluate_fsiza7eza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evaluate_typesz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evaluate_uncompz00(long,
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
	extern obj_t BGl_ev_binderz00zz__evaluate_typesz00;
	extern obj_t BGl_ev_listz00zz__evaluate_typesz00;
	static obj_t
		BGl_z62searchzd2letreczd2ev_lit1327z62zz__evaluate_fsiza7eza7(obj_t, obj_t);
	static obj_t BGl_z62subst_gotozd2ev_litt1360zb0zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t, obj_t);
	static bool_t BGl_searchzd2letrecza2z70zz__evaluate_fsiza7eza7(obj_t);
	extern obj_t BGl_ev_littz00zz__evaluate_typesz00;
	extern obj_t BGl_ev_varz00zz__evaluate_typesz00;
	static obj_t BGl_z62subst_gotozd2ev_abs1387zb0zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__evaluate_fsiza7eza7();
	static obj_t BGl_z62subst_gotozd2ev_prog21366zb0zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t, obj_t);
	extern long bgl_list_length(obj_t);
	static obj_t
		BGl_z62hasvarzf3zd2ev_setlocal1445z43zz__evaluate_fsiza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62hasvarzf3zd2ev_goto1459z43zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_subst_gotoz00zz__evaluate_fsiza7eza7(BgL_ev_exprz00_bglt,
		obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__evaluate_fsiza7eza7();
	static obj_t BGl_z62tailposzd2ev_global1393zb0zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__evaluate_fsiza7eza7();
	static obj_t BGl_z62fsiza7ezd2ev_goto1315z17zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_tailposz00zz__evaluate_fsiza7eza7(BgL_ev_exprz00_bglt,
		BgL_ev_varz00_bglt);
	static BgL_ev_exprz00_bglt
		BGl_z62extractzd2loopszb0zz__evaluate_fsiza7eza7(obj_t, obj_t);
	static obj_t BGl_z62tailposzd2ev_prog21401zb0zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_ev_withzd2handlerzd2zz__evaluate_typesz00;
	static obj_t
		BGl_z62searchzd2letreczd2ev_wit1341z62zz__evaluate_fsiza7eza7(obj_t, obj_t);
	static obj_t BGl_z62hasvarzf31428z91zz__evaluate_fsiza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2402z00zz__evaluate_fsiza7eza7 = BUNSPEC;
	static obj_t BGl_symbol2404z00zz__evaluate_fsiza7eza7 = BUNSPEC;
	static obj_t BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(BgL_ev_exprz00_bglt,
		BgL_ev_varz00_bglt);
	static obj_t
		BGl_z62fsiza7ezd2ev_synchroniza7e1305zb0zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2407z00zz__evaluate_fsiza7eza7 = BUNSPEC;
	static obj_t
		BGl_z62searchzd2letreczd2ev_syn1343z62zz__evaluate_fsiza7eza7(obj_t, obj_t);
	static obj_t BGl_symbol2409z00zz__evaluate_fsiza7eza7 = BUNSPEC;
	static obj_t BGl_z62subst_gotoz62zz__evaluate_fsiza7eza7(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_2maxz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62fsiza7e1282zc5zz__evaluate_fsiza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62tailposzd2ev_letrec1419zb0zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62tailposzd2ev_unwindzd2pr1409z62zz__evaluate_fsiza7eza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_ev_exprz00zz__evaluate_typesz00;
	extern obj_t BGl_ev_appz00zz__evaluate_typesz00;
	static obj_t
		BGl_z62subst_gotozd2ev_bindzd2e1370z62zz__evaluate_fsiza7eza7(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62subst_gotozd2ev_global1358zb0zz__evaluate_fsiza7eza7(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62hasvarzf3zd2ev_if1437z43zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62tailpos1388z62zz__evaluate_fsiza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62fsiza7ezd2ev_hook1297z17zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_ev_synchroniza7eza7zz__evaluate_typesz00;
	static obj_t
		BGl_z62searchzd2letreczd2ev_if1329z62zz__evaluate_fsiza7eza7(obj_t, obj_t);
	static obj_t
		BGl_z62subst_gotozd2ev_labels1381zb0zz__evaluate_fsiza7eza7(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62tailposzd2ev_bindzd2exit1407z62zz__evaluate_fsiza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62tailposzd2ev_synchroni1413zb0zz__evaluate_fsiza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62subst_goto1352z62zz__evaluate_fsiza7eza7(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62tailposzd2ev_withzd2hand1411z62zz__evaluate_fsiza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62subst_gotozd2ev_if1362zb0zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_ev_setlocalz00zz__evaluate_typesz00;
	static obj_t BGl_z62subst_gotozd2ev_hook1368zb0zz__evaluate_fsiza7eza7(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2401z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2401za700za7za7_2508za7, "hasvar?1428", 11);
	      DEFINE_STRING(BGl_string2403z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2403za700za7za7_2509za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string2405z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2405za700za7za7_2510za7, "tailpos", 7);
	      DEFINE_STRING(BGl_string2406z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2406za700za7za7_2511za7, "not defined for", 15);
	      DEFINE_STRING(BGl_string2408z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2408za700za7za7_2512za7, "subst_goto", 10);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2400z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762hasvarza7f314282513z00,
		BGl_z62hasvarzf31428z91zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2410z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2410za700za7za7_2514za7, "search-letrec", 13);
	      DEFINE_STRING(BGl_string2411z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2411za700za7za7_2515za7, "eval", 4);
	      DEFINE_STRING(BGl_string2412z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2412za700za7za7_2516za7, "internal error: not defined for",
		31);
	      DEFINE_STRING(BGl_string2413z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2413za700za7za7_2517za7, "&fsize", 6);
	      DEFINE_STRING(BGl_string2414z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2414za700za7za7_2518za7, "bint", 4);
	      DEFINE_STRING(BGl_string2415z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2415za700za7za7_2519za7, "&search-letrec", 14);
	      DEFINE_STRING(BGl_string2416z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2416za700za7za7_2520za7, "&subst_goto", 11);
	      DEFINE_STRING(BGl_string2417z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2417za700za7za7_2521za7, "&tailpos", 8);
	      DEFINE_STRING(BGl_string2418z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2418za700za7za7_2522za7, "ev_var", 6);
	      DEFINE_STRING(BGl_string2419z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2419za700za7za7_2523za7, "&hasvar?", 8);
	      DEFINE_STATIC_BGL_GENERIC(BGl_tailposzd2envzd2zz__evaluate_fsiza7eza7,
		BgL_bgl_za762tailposza762za7za7_2524z00,
		BGl_z62tailposz62zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2421z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2421za700za7za7_2525za7, "fsize::int", 10);
	      DEFINE_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2507za700za7za7_2526za7, "__evaluate_fsize", 16);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2500z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762hasvarza7f3za7d2e2527za7,
		BGl_z62hasvarzf3zd2ev_withzd2hand1451z91zz__evaluate_fsiza7eza7, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2501z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762hasvarza7f3za7d2e2528za7,
		BGl_z62hasvarzf3zd2ev_synchroni1453z43zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2420z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762fsiza7a7eza7d2ev_2529za7,
		BGl_z62fsiza7ezd2ev_var1285z17zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2502z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762hasvarza7f3za7d2e2530za7,
		BGl_z62hasvarzf3zd2ev_binder1455z43zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_GENERIC(BGl_hasvarzf3zd2envz21zz__evaluate_fsiza7eza7,
		BgL_bgl_za762hasvarza7f3za791za72531z00,
		BGl_z62hasvarzf3z91zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2503z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762hasvarza7f3za7d2e2532za7,
		BGl_z62hasvarzf3zd2ev_labels1457z43zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2422z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762fsiza7a7eza7d2ev_2533za7,
		BGl_z62fsiza7ezd2ev_global1287z17zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2504z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762hasvarza7f3za7d2e2534za7,
		BGl_z62hasvarzf3zd2ev_goto1459z43zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2423z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762fsiza7a7eza7d2ev_2535za7,
		BGl_z62fsiza7ezd2ev_litt1289z17zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2505z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762hasvarza7f3za7d2e2536za7,
		BGl_z62hasvarzf3zd2ev_app1461z43zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2424z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762fsiza7a7eza7d2ev_2537za7,
		BGl_z62fsiza7ezd2ev_if1291z17zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2506z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762hasvarza7f3za7d2e2538za7,
		BGl_z62hasvarzf3zd2ev_abs1463z43zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2425z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762fsiza7a7eza7d2ev_2539za7,
		BGl_z62fsiza7ezd2ev_list1293z17zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2426z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762fsiza7a7eza7d2ev_2540za7,
		BGl_z62fsiza7ezd2ev_prog21295z17zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2427z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762fsiza7a7eza7d2ev_2541za7,
		BGl_z62fsiza7ezd2ev_hook1297z17zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2428z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762fsiza7a7eza7d2ev_2542za7,
		BGl_z62fsiza7ezd2ev_bindzd2exit1299zc5zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2429z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762fsiza7a7eza7d2ev_2543za7,
		BGl_z62fsiza7ezd2ev_unwindzd2prot1301zc5zz__evaluate_fsiza7eza7, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2430z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762fsiza7a7eza7d2ev_2544za7,
		BGl_z62fsiza7ezd2ev_withzd2handle1303zc5zz__evaluate_fsiza7eza7, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2431z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762fsiza7a7eza7d2ev_2545za7,
		BGl_z62fsiza7ezd2ev_synchroniza7e1305zb0zz__evaluate_fsiza7eza7, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2432z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762fsiza7a7eza7d2ev_2546za7,
		BGl_z62fsiza7ezd2ev_let1307z17zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2433z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762fsiza7a7eza7d2ev_2547za7,
		BGl_z62fsiza7ezd2ev_letza21309zb5zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2434z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762fsiza7a7eza7d2ev_2548za7,
		BGl_z62fsiza7ezd2ev_letrec1311z17zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2435z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762fsiza7a7eza7d2ev_2549za7,
		BGl_z62fsiza7ezd2ev_labels1313z17zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2436z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762fsiza7a7eza7d2ev_2550za7,
		BGl_z62fsiza7ezd2ev_goto1315z17zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2437z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762fsiza7a7eza7d2ev_2551za7,
		BGl_z62fsiza7ezd2ev_app1317z17zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2438z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762fsiza7a7eza7d2ev_2552za7,
		BGl_z62fsiza7ezd2ev_abs1319z17zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2439z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762searchza7d2letr2553z00,
		BGl_z62searchzd2letreczd2ev_var1323z62zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2440z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762searchza7d2letr2554z00,
		BGl_z62searchzd2letreczd2ev_glo1325z62zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2441z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762searchza7d2letr2555z00,
		BGl_z62searchzd2letreczd2ev_lit1327z62zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2442z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762searchza7d2letr2556z00,
		BGl_z62searchzd2letreczd2ev_if1329z62zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2443z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762searchza7d2letr2557z00,
		BGl_z62searchzd2letreczd2ev_lis1331z62zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2444z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762searchza7d2letr2558z00,
		BGl_z62searchzd2letreczd2ev_pro1333z62zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2445z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762searchza7d2letr2559z00,
		BGl_z62searchzd2letreczd2ev_hoo1335z62zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2446z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762searchza7d2letr2560z00,
		BGl_z62searchzd2letreczd2ev_bin1337z62zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2447z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762searchza7d2letr2561z00,
		BGl_z62searchzd2letreczd2ev_unw1339z62zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2448z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762searchza7d2letr2562z00,
		BGl_z62searchzd2letreczd2ev_wit1341z62zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2449z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762searchza7d2letr2563z00,
		BGl_z62searchzd2letreczd2ev_syn1343z62zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2450z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762searchza7d2letr2564z00,
		BGl_z62searchzd2letreczd2ev_bin1345z62zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2451z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762searchza7d2letr2565z00,
		BGl_z62searchzd2letreczd2ev_let1347z62zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2452z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762searchza7d2letr2566z00,
		BGl_z62searchzd2letreczd2ev_app1349z62zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2453z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762searchza7d2letr2567z00,
		BGl_z62searchzd2letreczd2ev_abs1351z62zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2454z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762subst_gotoza7d22568z00,
		BGl_z62subst_gotozd2ev_var1356zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2455z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762subst_gotoza7d22569z00,
		BGl_z62subst_gotozd2ev_global1358zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2456z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762subst_gotoza7d22570z00,
		BGl_z62subst_gotozd2ev_litt1360zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2457z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762subst_gotoza7d22571z00,
		BGl_z62subst_gotozd2ev_if1362zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2458z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762subst_gotoza7d22572z00,
		BGl_z62subst_gotozd2ev_list1364zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2459z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762subst_gotoza7d22573z00,
		BGl_z62subst_gotozd2ev_prog21366zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2388z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2388za700za7za7_2574za7,
		"/tmp/4.4a/runtime/Eval/evaluate_fsize.scm", 41);
	      DEFINE_STRING(BGl_string2389z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2389za700za7za7_2575za7, "&frame-size", 11);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2460z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762subst_gotoza7d22576z00,
		BGl_z62subst_gotozd2ev_hook1368zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2461z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762subst_gotoza7d22577z00,
		BGl_z62subst_gotozd2ev_bindzd2e1370z62zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2462z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762subst_gotoza7d22578z00,
		BGl_z62subst_gotozd2ev_unwind1372zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2463z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762subst_gotoza7d22579z00,
		BGl_z62subst_gotozd2ev_withzd2h1375z62zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2464z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762subst_gotoza7d22580z00,
		BGl_z62subst_gotozd2ev_synchr1377zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2465z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762subst_gotoza7d22581z00,
		BGl_z62subst_gotozd2ev_binder1379zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2466z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762subst_gotoza7d22582z00,
		BGl_z62subst_gotozd2ev_labels1381zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2467z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762subst_gotoza7d22583z00,
		BGl_z62subst_gotozd2ev_goto1383zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2390z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2390za700za7za7_2584za7, "ev_expr", 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2468z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762subst_gotoza7d22585z00,
		BGl_z62subst_gotozd2ev_app1385zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2391z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2391za700za7za7_2586za7, "&extract-loops", 14);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2469z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762subst_gotoza7d22587z00,
		BGl_z62subst_gotozd2ev_abs1387zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2393z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2393za700za7za7_2588za7, "fsize1282", 9);
	      DEFINE_STRING(BGl_string2395z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2395za700za7za7_2589za7, "search-letrec1320", 17);
	      DEFINE_STRING(BGl_string2397z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2397za700za7za7_2590za7, "subst_goto1352", 14);
	      DEFINE_STRING(BGl_string2399z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2399za700za7za7_2591za7, "tailpos1388", 11);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2470z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762tailposza7d2ev_2592z00,
		BGl_z62tailposzd2ev_var1391zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2471z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762tailposza7d2ev_2593z00,
		BGl_z62tailposzd2ev_global1393zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2472z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762tailposza7d2ev_2594z00,
		BGl_z62tailposzd2ev_litt1395zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2473z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762tailposza7d2ev_2595z00,
		BGl_z62tailposzd2ev_if1397zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2392z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762fsiza7a7e1282za7c2596za7,
		BGl_z62fsiza7e1282zc5zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2474z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762tailposza7d2ev_2597z00,
		BGl_z62tailposzd2ev_list1399zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2475z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762tailposza7d2ev_2598z00,
		BGl_z62tailposzd2ev_prog21401zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2394z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762searchza7d2letr2599z00,
		BGl_z62searchzd2letrec1320zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2476z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762tailposza7d2ev_2600z00,
		BGl_z62tailposzd2ev_hook1403zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2477z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762tailposza7d2ev_2601z00,
		BGl_z62tailposzd2ev_setlocal1405zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2396z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762subst_goto1352602za7,
		BGl_z62subst_goto1352z62zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2478z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762tailposza7d2ev_2603z00,
		BGl_z62tailposzd2ev_bindzd2exit1407z62zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2479z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762tailposza7d2ev_2604z00,
		BGl_z62tailposzd2ev_unwindzd2pr1409z62zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2398z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762tailpos1388za762605z00,
		BGl_z62tailpos1388z62zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2480z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762tailposza7d2ev_2606z00,
		BGl_z62tailposzd2ev_withzd2hand1411z62zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2481z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762tailposza7d2ev_2607z00,
		BGl_z62tailposzd2ev_synchroni1413zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2482z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762tailposza7d2ev_2608z00,
		BGl_z62tailposzd2ev_let1415zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2483z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762tailposza7d2ev_2609z00,
		BGl_z62tailposzd2ev_letza21417z12zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2484z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762tailposza7d2ev_2610z00,
		BGl_z62tailposzd2ev_letrec1419zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2485z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762tailposza7d2ev_2611z00,
		BGl_z62tailposzd2ev_labels1421zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2490z00zz__evaluate_fsiza7eza7,
		BgL_bgl_string2490za700za7za7_2612za7, "hasvar?", 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2486z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762tailposza7d2ev_2613z00,
		BGl_z62tailposzd2ev_goto1423zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2487z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762tailposza7d2ev_2614z00,
		BGl_z62tailposzd2ev_app1425zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2488z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762tailposza7d2ev_2615z00,
		BGl_z62tailposzd2ev_abs1427zb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2489z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762hasvarza7f3za7d2e2616za7,
		BGl_z62hasvarzf3zd2ev_var1431z43zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2491z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762hasvarza7f3za7d2e2617za7,
		BGl_z62hasvarzf3zd2ev_global1433z43zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2492z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762hasvarza7f3za7d2e2618za7,
		BGl_z62hasvarzf3zd2ev_litt1435z43zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2493z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762hasvarza7f3za7d2e2619za7,
		BGl_z62hasvarzf3zd2ev_if1437z43zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2494z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762hasvarza7f3za7d2e2620za7,
		BGl_z62hasvarzf3zd2ev_list1439z43zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2495z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762hasvarza7f3za7d2e2621za7,
		BGl_z62hasvarzf3zd2ev_prog21441z43zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2496z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762hasvarza7f3za7d2e2622za7,
		BGl_z62hasvarzf3zd2ev_hook1443z43zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2497z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762hasvarza7f3za7d2e2623za7,
		BGl_z62hasvarzf3zd2ev_setlocal1445z43zz__evaluate_fsiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2498z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762hasvarza7f3za7d2e2624za7,
		BGl_z62hasvarzf3zd2ev_bindzd2exit1447z91zz__evaluate_fsiza7eza7, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2499z00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762hasvarza7f3za7d2e2625za7,
		BGl_z62hasvarzf3zd2ev_unwindzd2pr1449z91zz__evaluate_fsiza7eza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_framezd2siza7ezd2envza7zz__evaluate_fsiza7eza7,
		BgL_bgl_za762frameza7d2siza7a72626za7,
		BGl_z62framezd2siza7ez17zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_fsiza7ezd2envz75zz__evaluate_fsiza7eza7,
		BgL_bgl_za762fsiza7a7eza7c5za7za7_2627za7,
		BGl_z62fsiza7ezc5zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_searchzd2letreczd2envz00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762searchza7d2letr2628z00,
		BGl_z62searchzd2letreczb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_extractzd2loopszd2envz00zz__evaluate_fsiza7eza7,
		BgL_bgl_za762extractza7d2loo2629z00,
		BGl_z62extractzd2loopszb0zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_subst_gotozd2envzd2zz__evaluate_fsiza7eza7,
		BgL_bgl_za762subst_gotoza7622630z00,
		BGl_z62subst_gotoz62zz__evaluate_fsiza7eza7, 0L, BUNSPEC, 3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__evaluate_fsiza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2402z00zz__evaluate_fsiza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2404z00zz__evaluate_fsiza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2407z00zz__evaluate_fsiza7eza7));
		     ADD_ROOT((void *) (&BGl_symbol2409z00zz__evaluate_fsiza7eza7));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__evaluate_fsiza7eza7(long
		BgL_checksumz00_4594, char *BgL_fromz00_4595)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__evaluate_fsiza7eza7))
				{
					BGl_requirezd2initializa7ationz75zz__evaluate_fsiza7eza7 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__evaluate_fsiza7eza7();
					BGl_cnstzd2initzd2zz__evaluate_fsiza7eza7();
					BGl_importedzd2moduleszd2initz00zz__evaluate_fsiza7eza7();
					BGl_genericzd2initzd2zz__evaluate_fsiza7eza7();
					BGl_methodzd2initzd2zz__evaluate_fsiza7eza7();
					return BGl_toplevelzd2initzd2zz__evaluate_fsiza7eza7();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__evaluate_fsiza7eza7()
	{
		{	/* Eval/evaluate_fsize.scm 16 */
			BGl_symbol2402z00zz__evaluate_fsiza7eza7 =
				bstring_to_symbol(BGl_string2401z00zz__evaluate_fsiza7eza7);
			BGl_symbol2404z00zz__evaluate_fsiza7eza7 =
				bstring_to_symbol(BGl_string2405z00zz__evaluate_fsiza7eza7);
			BGl_symbol2407z00zz__evaluate_fsiza7eza7 =
				bstring_to_symbol(BGl_string2408z00zz__evaluate_fsiza7eza7);
			return (BGl_symbol2409z00zz__evaluate_fsiza7eza7 =
				bstring_to_symbol(BGl_string2410z00zz__evaluate_fsiza7eza7), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__evaluate_fsiza7eza7()
	{
		{	/* Eval/evaluate_fsize.scm 16 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__evaluate_fsiza7eza7()
	{
		{	/* Eval/evaluate_fsize.scm 16 */
			return BUNSPEC;
		}

	}



/* frame-size */
	BGL_EXPORTED_DEF int
		BGl_framezd2siza7ez75zz__evaluate_fsiza7eza7(BgL_ev_exprz00_bglt BgL_ez00_3)
	{
		{	/* Eval/evaluate_fsize.scm 65 */
			return
				BGl_fsiza7eza7zz__evaluate_fsiza7eza7(BgL_ez00_3, (int) (((long) 0)));
		}

	}



/* &frame-size */
	obj_t BGl_z62framezd2siza7ez17zz__evaluate_fsiza7eza7(obj_t BgL_envz00_3764,
		obj_t BgL_ez00_3765)
	{
		{	/* Eval/evaluate_fsize.scm 65 */
			{	/* Eval/evaluate_fsize.scm 66 */
				int BgL_tmpz00_4612;

				{	/* Eval/evaluate_fsize.scm 66 */
					BgL_ev_exprz00_bglt BgL_auxz00_4613;

					if (BGl_isazf3zf3zz__objectz00(BgL_ez00_3765,
							BGl_ev_exprz00zz__evaluate_typesz00))
						{	/* Eval/evaluate_fsize.scm 66 */
							BgL_auxz00_4613 = ((BgL_ev_exprz00_bglt) BgL_ez00_3765);
						}
					else
						{
							obj_t BgL_auxz00_4617;

							BgL_auxz00_4617 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2388z00zz__evaluate_fsiza7eza7, BINT(((long) 1965)),
								BGl_string2389z00zz__evaluate_fsiza7eza7,
								BGl_string2390z00zz__evaluate_fsiza7eza7, BgL_ez00_3765);
							FAILURE(BgL_auxz00_4617, BFALSE, BFALSE);
						}
					BgL_tmpz00_4612 =
						BGl_framezd2siza7ez75zz__evaluate_fsiza7eza7(BgL_auxz00_4613);
				}
				return BINT(BgL_tmpz00_4612);
			}
		}

	}



/* extract-loops */
	BGL_EXPORTED_DEF BgL_ev_exprz00_bglt
		BGl_extractzd2loopszd2zz__evaluate_fsiza7eza7(BgL_ev_exprz00_bglt
		BgL_ez00_42)
	{
		{	/* Eval/evaluate_fsize.scm 167 */
			return
				((BgL_ev_exprz00_bglt)
				BGl_searchzd2letreczd2zz__evaluate_fsiza7eza7(BgL_ez00_42));
		}

	}



/* &extract-loops */
	BgL_ev_exprz00_bglt BGl_z62extractzd2loopszb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3766, obj_t BgL_ez00_3767)
	{
		{	/* Eval/evaluate_fsize.scm 167 */
			{	/* Eval/evaluate_fsize.scm 169 */
				BgL_ev_exprz00_bglt BgL_auxz00_4625;

				if (BGl_isazf3zf3zz__objectz00(BgL_ez00_3767,
						BGl_ev_exprz00zz__evaluate_typesz00))
					{	/* Eval/evaluate_fsize.scm 169 */
						BgL_auxz00_4625 = ((BgL_ev_exprz00_bglt) BgL_ez00_3767);
					}
				else
					{
						obj_t BgL_auxz00_4629;

						BgL_auxz00_4629 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2388z00zz__evaluate_fsiza7eza7, BINT(((long) 5040)),
							BGl_string2391z00zz__evaluate_fsiza7eza7,
							BGl_string2390z00zz__evaluate_fsiza7eza7, BgL_ez00_3767);
						FAILURE(BgL_auxz00_4629, BFALSE, BFALSE);
					}
				return BGl_extractzd2loopszd2zz__evaluate_fsiza7eza7(BgL_auxz00_4625);
			}
		}

	}



/* search-letrec* */
	bool_t BGl_searchzd2letrecza2z70zz__evaluate_fsiza7eza7(obj_t BgL_lz00_43)
	{
		{	/* Eval/evaluate_fsize.scm 172 */
			{
				obj_t BgL_lz00_1266;

				BgL_lz00_1266 = BgL_lz00_43;
			BgL_zc3z04anonymousza31533ze3z87_1267:
				if (NULLP(BgL_lz00_1266))
					{	/* Eval/evaluate_fsize.scm 174 */
						return ((bool_t) 0);
					}
				else
					{	/* Eval/evaluate_fsize.scm 174 */
						{	/* Eval/evaluate_fsize.scm 175 */
							obj_t BgL_arg1535z00_1269;

							{	/* Eval/evaluate_fsize.scm 175 */
								obj_t BgL_arg1536z00_1270;

								BgL_arg1536z00_1270 = CAR(((obj_t) BgL_lz00_1266));
								BgL_arg1535z00_1269 =
									BGl_searchzd2letreczd2zz__evaluate_fsiza7eza7(
									((BgL_ev_exprz00_bglt) BgL_arg1536z00_1270));
							}
							{	/* Eval/evaluate_fsize.scm 175 */
								obj_t BgL_tmpz00_4640;

								BgL_tmpz00_4640 = ((obj_t) BgL_lz00_1266);
								SET_CAR(BgL_tmpz00_4640, BgL_arg1535z00_1269);
							}
						}
						{	/* Eval/evaluate_fsize.scm 176 */
							obj_t BgL_arg1537z00_1271;

							BgL_arg1537z00_1271 = CDR(((obj_t) BgL_lz00_1266));
							{
								obj_t BgL_lz00_4645;

								BgL_lz00_4645 = BgL_arg1537z00_1271;
								BgL_lz00_1266 = BgL_lz00_4645;
								goto BgL_zc3z04anonymousza31533ze3z87_1267;
							}
						}
					}
			}
		}

	}



/* modify-letrec */
	BgL_ev_labelsz00_bglt BGl_modifyzd2letreczd2zz__evaluate_fsiza7eza7(obj_t
		BgL_varsz00_60, obj_t BgL_valsz00_61, BgL_ev_exprz00_bglt BgL_bodyz00_62)
	{
		{	/* Eval/evaluate_fsize.scm 268 */
			{	/* Eval/evaluate_fsize.scm 269 */
				BgL_ev_labelsz00_bglt BgL_rz00_1273;

				{	/* Eval/evaluate_fsize.scm 269 */
					BgL_ev_labelsz00_bglt BgL_new1094z00_1292;

					{	/* Eval/evaluate_fsize.scm 269 */
						BgL_ev_labelsz00_bglt BgL_new1093z00_1296;

						BgL_new1093z00_1296 =
							((BgL_ev_labelsz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_ev_labelsz00_bgl))));
						{	/* Eval/evaluate_fsize.scm 269 */
							long BgL_arg1551z00_1297;

							{	/* Eval/evaluate_fsize.scm 269 */
								long BgL_res2178z00_2684;

								BgL_res2178z00_2684 =
									BGL_CLASS_INDEX(BGl_ev_labelsz00zz__evaluate_typesz00);
								BgL_arg1551z00_1297 = BgL_res2178z00_2684;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1093z00_1296),
								BgL_arg1551z00_1297);
						}
						BgL_new1094z00_1292 = BgL_new1093z00_1296;
					}
					((((BgL_ev_labelsz00_bglt) COBJECT(BgL_new1094z00_1292))->
							BgL_varsz00) = ((obj_t) BgL_varsz00_60), BUNSPEC);
					((((BgL_ev_labelsz00_bglt) COBJECT(BgL_new1094z00_1292))->
							BgL_valsz00) = ((obj_t) BNIL), BUNSPEC);
					((((BgL_ev_labelsz00_bglt) COBJECT(BgL_new1094z00_1292))->
							BgL_envz00) = ((obj_t) BNIL), BUNSPEC);
					((((BgL_ev_labelsz00_bglt) COBJECT(BgL_new1094z00_1292))->
							BgL_stkz00) = ((obj_t) BNIL), BUNSPEC);
					{
						BgL_ev_exprz00_bglt BgL_auxz00_4654;

						{	/* Eval/evaluate_fsize.scm 270 */
							BgL_ev_littz00_bglt BgL_new1096z00_1293;

							{	/* Eval/evaluate_fsize.scm 270 */
								BgL_ev_littz00_bglt BgL_new1095z00_1294;

								BgL_new1095z00_1294 =
									((BgL_ev_littz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_ev_littz00_bgl))));
								{	/* Eval/evaluate_fsize.scm 270 */
									long BgL_arg1547z00_1295;

									{	/* Eval/evaluate_fsize.scm 270 */
										long BgL_res2179z00_2688;

										{	/* Eval/evaluate_fsize.scm 270 */
											obj_t BgL_classz00_2687;

											BgL_classz00_2687 = BGl_ev_littz00zz__evaluate_typesz00;
											BgL_res2179z00_2688 = BGL_CLASS_INDEX(BgL_classz00_2687);
										}
										BgL_arg1547z00_1295 = BgL_res2179z00_2688;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1095z00_1294),
										BgL_arg1547z00_1295);
								}
								BgL_new1096z00_1293 = BgL_new1095z00_1294;
							}
							((((BgL_ev_littz00_bglt) COBJECT(BgL_new1096z00_1293))->
									BgL_valuez00) = ((obj_t) BINT(((long) 0))), BUNSPEC);
							BgL_auxz00_4654 = ((BgL_ev_exprz00_bglt) BgL_new1096z00_1293);
						}
						((((BgL_ev_labelsz00_bglt) COBJECT(BgL_new1094z00_1292))->
								BgL_bodyz00) =
							((BgL_ev_exprz00_bglt) BgL_auxz00_4654), BUNSPEC);
					}
					((((BgL_ev_labelsz00_bglt) COBJECT(BgL_new1094z00_1292))->
							BgL_boxesz00) = ((obj_t) BNIL), BUNSPEC);
					BgL_rz00_1273 = BgL_new1094z00_1292;
				}
				((((BgL_ev_labelsz00_bglt) COBJECT(BgL_rz00_1273))->BgL_bodyz00) =
					((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt)
							BGl_subst_gotoz00zz__evaluate_fsiza7eza7(BgL_bodyz00_62,
								BgL_varsz00_60, ((obj_t) BgL_rz00_1273)))), BUNSPEC);
				{
					obj_t BgL_auxz00_4668;

					if (NULLP(BgL_valsz00_61))
						{	/* Eval/evaluate_fsize.scm 273 */
							BgL_auxz00_4668 = BNIL;
						}
					else
						{	/* Eval/evaluate_fsize.scm 273 */
							obj_t BgL_head1216z00_1277;

							{	/* Eval/evaluate_fsize.scm 273 */
								obj_t BgL_res2181z00_2692;

								BgL_res2181z00_2692 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								BgL_head1216z00_1277 = BgL_res2181z00_2692;
							}
							{
								obj_t BgL_l1214z00_1279;
								obj_t BgL_tail1217z00_1280;

								BgL_l1214z00_1279 = BgL_valsz00_61;
								BgL_tail1217z00_1280 = BgL_head1216z00_1277;
							BgL_zc3z04anonymousza31539ze3z87_1281:
								if (NULLP(BgL_l1214z00_1279))
									{	/* Eval/evaluate_fsize.scm 273 */
										BgL_auxz00_4668 = CDR(BgL_head1216z00_1277);
									}
								else
									{	/* Eval/evaluate_fsize.scm 273 */
										obj_t BgL_newtail1218z00_1283;

										{	/* Eval/evaluate_fsize.scm 273 */
											obj_t BgL_arg1542z00_1285;

											{	/* Eval/evaluate_fsize.scm 273 */
												obj_t BgL_valz00_1286;

												BgL_valz00_1286 = CAR(((obj_t) BgL_l1214z00_1279));
												{	/* Eval/evaluate_fsize.scm 275 */
													obj_t BgL_arg1544z00_1288;
													obj_t BgL_arg1545z00_1289;

													BgL_arg1544z00_1288 =
														(((BgL_ev_absz00_bglt) COBJECT(
																((BgL_ev_absz00_bglt) BgL_valz00_1286)))->
														BgL_varsz00);
													{	/* Eval/evaluate_fsize.scm 275 */
														BgL_ev_exprz00_bglt BgL_arg1546z00_1290;

														BgL_arg1546z00_1290 =
															(((BgL_ev_absz00_bglt) COBJECT(
																	((BgL_ev_absz00_bglt) BgL_valz00_1286)))->
															BgL_bodyz00);
														BgL_arg1545z00_1289 =
															BGl_subst_gotoz00zz__evaluate_fsiza7eza7
															(BgL_arg1546z00_1290, BgL_varsz00_60,
															((obj_t) BgL_rz00_1273));
													}
													BgL_arg1542z00_1285 =
														MAKE_YOUNG_PAIR(BgL_arg1544z00_1288,
														BgL_arg1545z00_1289);
												}
											}
											{	/* Eval/evaluate_fsize.scm 273 */
												obj_t BgL_res2183z00_2696;

												BgL_res2183z00_2696 =
													MAKE_YOUNG_PAIR(BgL_arg1542z00_1285, BNIL);
												BgL_newtail1218z00_1283 = BgL_res2183z00_2696;
											}
										}
										SET_CDR(BgL_tail1217z00_1280, BgL_newtail1218z00_1283);
										{	/* Eval/evaluate_fsize.scm 273 */
											obj_t BgL_arg1541z00_1284;

											BgL_arg1541z00_1284 = CDR(((obj_t) BgL_l1214z00_1279));
											{
												obj_t BgL_tail1217z00_4689;
												obj_t BgL_l1214z00_4688;

												BgL_l1214z00_4688 = BgL_arg1541z00_1284;
												BgL_tail1217z00_4689 = BgL_newtail1218z00_1283;
												BgL_tail1217z00_1280 = BgL_tail1217z00_4689;
												BgL_l1214z00_1279 = BgL_l1214z00_4688;
												goto BgL_zc3z04anonymousza31539ze3z87_1281;
											}
										}
									}
							}
						}
					((((BgL_ev_labelsz00_bglt) COBJECT(BgL_rz00_1273))->BgL_valsz00) =
						((obj_t) BgL_auxz00_4668), BUNSPEC);
				}
				return BgL_rz00_1273;
			}
		}

	}



/* letrectail? */
	bool_t BGl_letrectailzf3zf3zz__evaluate_fsiza7eza7(obj_t BgL_varsz00_63,
		obj_t BgL_valsz00_64, BgL_ev_exprz00_bglt BgL_bodyz00_65)
	{
		{	/* Eval/evaluate_fsize.scm 279 */
			{
				obj_t BgL_l1222z00_1299;

				BgL_l1222z00_1299 = BgL_varsz00_63;
			BgL_zc3z04anonymousza31552ze3z87_1300:
				if (NULLP(BgL_l1222z00_1299))
					{	/* Eval/evaluate_fsize.scm 280 */
						return ((bool_t) 1);
					}
				else
					{	/* Eval/evaluate_fsize.scm 280 */
						bool_t BgL_test2638z00_4693;

						{	/* Eval/evaluate_fsize.scm 281 */
							obj_t BgL_vz00_1305;

							BgL_vz00_1305 = CAR(((obj_t) BgL_l1222z00_1299));
							{	/* Eval/evaluate_fsize.scm 281 */
								obj_t BgL__andtest_1099z00_1306;

								BgL__andtest_1099z00_1306 =
									BGl_tailposz00zz__evaluate_fsiza7eza7(BgL_bodyz00_65,
									((BgL_ev_varz00_bglt) BgL_vz00_1305));
								if (CBOOL(BgL__andtest_1099z00_1306))
									{
										obj_t BgL_l1219z00_1308;

										BgL_l1219z00_1308 = BgL_valsz00_64;
									BgL_zc3z04anonymousza31555ze3z87_1309:
										if (NULLP(BgL_l1219z00_1308))
											{	/* Eval/evaluate_fsize.scm 282 */
												BgL_test2638z00_4693 = ((bool_t) 1);
											}
										else
											{	/* Eval/evaluate_fsize.scm 283 */
												obj_t BgL_nvz00_1311;

												{	/* Eval/evaluate_fsize.scm 283 */
													obj_t BgL_ez00_1314;

													BgL_ez00_1314 = CAR(((obj_t) BgL_l1219z00_1308));
													if (BGl_isazf3zf3zz__objectz00(BgL_ez00_1314,
															BGl_ev_absz00zz__evaluate_typesz00))
														{	/* Eval/evaluate_fsize.scm 283 */
															if (
																((long) CINT(
																		(((BgL_ev_absz00_bglt) COBJECT(
																					((BgL_ev_absz00_bglt)
																						BgL_ez00_1314)))->BgL_arityz00)) >=
																	((long) 0)))
																{	/* Eval/evaluate_fsize.scm 286 */
																	BgL_ev_exprz00_bglt BgL_arg1560z00_1318;

																	BgL_arg1560z00_1318 =
																		(((BgL_ev_absz00_bglt) COBJECT(
																				((BgL_ev_absz00_bglt) BgL_ez00_1314)))->
																		BgL_bodyz00);
																	BgL_nvz00_1311 =
																		BGl_tailposz00zz__evaluate_fsiza7eza7
																		(BgL_arg1560z00_1318,
																		((BgL_ev_varz00_bglt) BgL_vz00_1305));
																}
															else
																{	/* Eval/evaluate_fsize.scm 285 */
																	BgL_nvz00_1311 = BFALSE;
																}
														}
													else
														{	/* Eval/evaluate_fsize.scm 283 */
															BgL_nvz00_1311 = BFALSE;
														}
												}
												if (CBOOL(BgL_nvz00_1311))
													{	/* Eval/evaluate_fsize.scm 282 */
														obj_t BgL_arg1557z00_1313;

														BgL_arg1557z00_1313 =
															CDR(((obj_t) BgL_l1219z00_1308));
														{
															obj_t BgL_l1219z00_4719;

															BgL_l1219z00_4719 = BgL_arg1557z00_1313;
															BgL_l1219z00_1308 = BgL_l1219z00_4719;
															goto BgL_zc3z04anonymousza31555ze3z87_1309;
														}
													}
												else
													{	/* Eval/evaluate_fsize.scm 282 */
														BgL_test2638z00_4693 = ((bool_t) 0);
													}
											}
									}
								else
									{	/* Eval/evaluate_fsize.scm 281 */
										BgL_test2638z00_4693 = ((bool_t) 0);
									}
							}
						}
						if (BgL_test2638z00_4693)
							{	/* Eval/evaluate_fsize.scm 280 */
								obj_t BgL_arg1554z00_1304;

								BgL_arg1554z00_1304 = CDR(((obj_t) BgL_l1222z00_1299));
								{
									obj_t BgL_l1222z00_4722;

									BgL_l1222z00_4722 = BgL_arg1554z00_1304;
									BgL_l1222z00_1299 = BgL_l1222z00_4722;
									goto BgL_zc3z04anonymousza31552ze3z87_1300;
								}
							}
						else
							{	/* Eval/evaluate_fsize.scm 280 */
								return ((bool_t) 0);
							}
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__evaluate_fsiza7eza7()
	{
		{	/* Eval/evaluate_fsize.scm 16 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__evaluate_fsiza7eza7()
	{
		{	/* Eval/evaluate_fsize.scm 16 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_fsiza7ezd2envz75zz__evaluate_fsiza7eza7,
				BGl_proc2392z00zz__evaluate_fsiza7eza7,
				BGl_ev_exprz00zz__evaluate_typesz00,
				BGl_string2393z00zz__evaluate_fsiza7eza7);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_searchzd2letreczd2envz00zz__evaluate_fsiza7eza7,
				BGl_proc2394z00zz__evaluate_fsiza7eza7,
				BGl_ev_exprz00zz__evaluate_typesz00,
				BGl_string2395z00zz__evaluate_fsiza7eza7);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_subst_gotozd2envzd2zz__evaluate_fsiza7eza7,
				BGl_proc2396z00zz__evaluate_fsiza7eza7,
				BGl_ev_exprz00zz__evaluate_typesz00,
				BGl_string2397z00zz__evaluate_fsiza7eza7);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_tailposzd2envzd2zz__evaluate_fsiza7eza7,
				BGl_proc2398z00zz__evaluate_fsiza7eza7,
				BGl_ev_exprz00zz__evaluate_typesz00,
				BGl_string2399z00zz__evaluate_fsiza7eza7);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_hasvarzf3zd2envz21zz__evaluate_fsiza7eza7,
				BGl_proc2400z00zz__evaluate_fsiza7eza7,
				BGl_ev_exprz00zz__evaluate_typesz00,
				BGl_string2401z00zz__evaluate_fsiza7eza7);
		}

	}



/* &hasvar?1428 */
	obj_t BGl_z62hasvarzf31428z91zz__evaluate_fsiza7eza7(obj_t BgL_envz00_3773,
		obj_t BgL_ez00_3774, obj_t BgL_vz00_3775)
	{
		{	/* Eval/evaluate_fsize.scm 491 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2402z00zz__evaluate_fsiza7eza7,
				BGl_string2403z00zz__evaluate_fsiza7eza7,
				((obj_t) ((BgL_ev_exprz00_bglt) BgL_ez00_3774)));
		}

	}



/* &tailpos1388 */
	obj_t BGl_z62tailpos1388z62zz__evaluate_fsiza7eza7(obj_t BgL_envz00_3776,
		obj_t BgL_ez00_3777, obj_t BgL_vz00_3778)
	{
		{	/* Eval/evaluate_fsize.scm 403 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2404z00zz__evaluate_fsiza7eza7,
				BGl_string2406z00zz__evaluate_fsiza7eza7,
				((obj_t) ((BgL_ev_exprz00_bglt) BgL_ez00_3777)));
		}

	}



/* &subst_goto1352 */
	obj_t BGl_z62subst_goto1352z62zz__evaluate_fsiza7eza7(obj_t BgL_envz00_3779,
		obj_t BgL_ez00_3780, obj_t BgL_varsz00_3781, obj_t BgL_lblsz00_3782)
	{
		{	/* Eval/evaluate_fsize.scm 298 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2407z00zz__evaluate_fsiza7eza7,
				BGl_string2406z00zz__evaluate_fsiza7eza7,
				((obj_t) ((BgL_ev_exprz00_bglt) BgL_ez00_3780)));
		}

	}



/* &search-letrec1320 */
	obj_t BGl_z62searchzd2letrec1320zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3783, obj_t BgL_ez00_3784)
	{
		{	/* Eval/evaluate_fsize.scm 178 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2409z00zz__evaluate_fsiza7eza7,
				BGl_string2406z00zz__evaluate_fsiza7eza7,
				((obj_t) ((BgL_ev_exprz00_bglt) BgL_ez00_3784)));
		}

	}



/* &fsize1282 */
	obj_t BGl_z62fsiza7e1282zc5zz__evaluate_fsiza7eza7(obj_t BgL_envz00_3785,
		obj_t BgL_ez00_3786, obj_t BgL_nz00_3787)
	{
		{	/* Eval/evaluate_fsize.scm 68 */
			return
				BGl_errorz00zz__errorz00(BGl_string2411z00zz__evaluate_fsiza7eza7,
				BGl_string2412z00zz__evaluate_fsiza7eza7,
				((obj_t) ((BgL_ev_exprz00_bglt) BgL_ez00_3786)));
		}

	}



/* fsize */
	int BGl_fsiza7eza7zz__evaluate_fsiza7eza7(BgL_ev_exprz00_bglt BgL_ez00_4,
		int BgL_nz00_5)
	{
		{	/* Eval/evaluate_fsize.scm 68 */
			{	/* Eval/evaluate_fsize.scm 68 */
				obj_t BgL_method1283z00_1355;

				{	/* Eval/evaluate_fsize.scm 68 */
					obj_t BgL_res2198z00_2753;

					{	/* Eval/evaluate_fsize.scm 68 */
						long BgL_objzd2classzd2numz00_2718;

						{	/* Eval/evaluate_fsize.scm 68 */
							long BgL_res2188z00_2721;

							BgL_res2188z00_2721 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_ez00_4));
							BgL_objzd2classzd2numz00_2718 = BgL_res2188z00_2721;
						}
						{	/* Eval/evaluate_fsize.scm 68 */
							obj_t BgL_arg2168z00_2719;

							BgL_arg2168z00_2719 =
								PROCEDURE_REF(BGl_fsiza7ezd2envz75zz__evaluate_fsiza7eza7,
								(int) (((long) 1)));
							{	/* Eval/evaluate_fsize.scm 68 */
								int BgL_offsetz00_2723;

								BgL_offsetz00_2723 = (int) (BgL_objzd2classzd2numz00_2718);
								{	/* Eval/evaluate_fsize.scm 68 */
									long BgL_offsetz00_2724;

									BgL_offsetz00_2724 =
										((long) (BgL_offsetz00_2723) - OBJECT_TYPE);
									{	/* Eval/evaluate_fsize.scm 68 */
										long BgL_modz00_2725;

										BgL_modz00_2725 =
											(BgL_offsetz00_2724 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Eval/evaluate_fsize.scm 68 */
											long BgL_restz00_2727;

											BgL_restz00_2727 =
												(BgL_offsetz00_2724 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Eval/evaluate_fsize.scm 68 */

												{	/* Eval/evaluate_fsize.scm 68 */
													obj_t BgL_bucketz00_2729;

													BgL_bucketz00_2729 =
														VECTOR_REF(
														((obj_t) BgL_arg2168z00_2719), BgL_modz00_2725);
													BgL_res2198z00_2753 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2729), BgL_restz00_2727);
					}}}}}}}}
					BgL_method1283z00_1355 = BgL_res2198z00_2753;
				}
				return
					CINT(PROCEDURE_ENTRY(BgL_method1283z00_1355) (BgL_method1283z00_1355,
						((obj_t) BgL_ez00_4), BINT(BgL_nz00_5), BEOA));
			}
		}

	}



/* &fsize */
	obj_t BGl_z62fsiza7ezc5zz__evaluate_fsiza7eza7(obj_t BgL_envz00_3788,
		obj_t BgL_ez00_3789, obj_t BgL_nz00_3790)
	{
		{	/* Eval/evaluate_fsize.scm 68 */
			{	/* Eval/evaluate_fsize.scm 68 */
				int BgL_tmpz00_4776;

				{	/* Eval/evaluate_fsize.scm 68 */
					int BgL_auxz00_4785;
					BgL_ev_exprz00_bglt BgL_auxz00_4777;

					{	/* Eval/evaluate_fsize.scm 68 */
						obj_t BgL_tmpz00_4786;

						if (INTEGERP(BgL_nz00_3790))
							{	/* Eval/evaluate_fsize.scm 68 */
								BgL_tmpz00_4786 = BgL_nz00_3790;
							}
						else
							{
								obj_t BgL_auxz00_4789;

								BgL_auxz00_4789 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2388z00zz__evaluate_fsiza7eza7,
									BINT(((long) 1980)), BGl_string2413z00zz__evaluate_fsiza7eza7,
									BGl_string2414z00zz__evaluate_fsiza7eza7, BgL_nz00_3790);
								FAILURE(BgL_auxz00_4789, BFALSE, BFALSE);
							}
						BgL_auxz00_4785 = CINT(BgL_tmpz00_4786);
					}
					if (BGl_isazf3zf3zz__objectz00(BgL_ez00_3789,
							BGl_ev_exprz00zz__evaluate_typesz00))
						{	/* Eval/evaluate_fsize.scm 68 */
							BgL_auxz00_4777 = ((BgL_ev_exprz00_bglt) BgL_ez00_3789);
						}
					else
						{
							obj_t BgL_auxz00_4781;

							BgL_auxz00_4781 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2388z00zz__evaluate_fsiza7eza7, BINT(((long) 1980)),
								BGl_string2413z00zz__evaluate_fsiza7eza7,
								BGl_string2390z00zz__evaluate_fsiza7eza7, BgL_ez00_3789);
							FAILURE(BgL_auxz00_4781, BFALSE, BFALSE);
						}
					BgL_tmpz00_4776 =
						BGl_fsiza7eza7zz__evaluate_fsiza7eza7(BgL_auxz00_4777,
						BgL_auxz00_4785);
				}
				return BINT(BgL_tmpz00_4776);
			}
		}

	}



/* search-letrec */
	obj_t BGl_searchzd2letreczd2zz__evaluate_fsiza7eza7(BgL_ev_exprz00_bglt
		BgL_ez00_44)
	{
		{	/* Eval/evaluate_fsize.scm 178 */
			{	/* Eval/evaluate_fsize.scm 178 */
				obj_t BgL_method1321z00_1356;

				{	/* Eval/evaluate_fsize.scm 178 */
					obj_t BgL_res2209z00_2790;

					{	/* Eval/evaluate_fsize.scm 178 */
						long BgL_objzd2classzd2numz00_2755;

						{	/* Eval/evaluate_fsize.scm 178 */
							long BgL_res2199z00_2758;

							BgL_res2199z00_2758 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_ez00_44));
							BgL_objzd2classzd2numz00_2755 = BgL_res2199z00_2758;
						}
						{	/* Eval/evaluate_fsize.scm 178 */
							obj_t BgL_arg2168z00_2756;

							BgL_arg2168z00_2756 =
								PROCEDURE_REF
								(BGl_searchzd2letreczd2envz00zz__evaluate_fsiza7eza7,
								(int) (((long) 1)));
							{	/* Eval/evaluate_fsize.scm 178 */
								int BgL_offsetz00_2760;

								BgL_offsetz00_2760 = (int) (BgL_objzd2classzd2numz00_2755);
								{	/* Eval/evaluate_fsize.scm 178 */
									long BgL_offsetz00_2761;

									BgL_offsetz00_2761 =
										((long) (BgL_offsetz00_2760) - OBJECT_TYPE);
									{	/* Eval/evaluate_fsize.scm 178 */
										long BgL_modz00_2762;

										BgL_modz00_2762 =
											(BgL_offsetz00_2761 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Eval/evaluate_fsize.scm 178 */
											long BgL_restz00_2764;

											BgL_restz00_2764 =
												(BgL_offsetz00_2761 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Eval/evaluate_fsize.scm 178 */

												{	/* Eval/evaluate_fsize.scm 178 */
													obj_t BgL_bucketz00_2766;

													BgL_bucketz00_2766 =
														VECTOR_REF(
														((obj_t) BgL_arg2168z00_2756), BgL_modz00_2762);
													BgL_res2209z00_2790 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2766), BgL_restz00_2764);
					}}}}}}}}
					BgL_method1321z00_1356 = BgL_res2209z00_2790;
				}
				return
					PROCEDURE_ENTRY(BgL_method1321z00_1356) (BgL_method1321z00_1356,
					((obj_t) BgL_ez00_44), BEOA);
			}
		}

	}



/* &search-letrec */
	obj_t BGl_z62searchzd2letreczb0zz__evaluate_fsiza7eza7(obj_t BgL_envz00_3791,
		obj_t BgL_ez00_3792)
	{
		{	/* Eval/evaluate_fsize.scm 178 */
			{	/* Eval/evaluate_fsize.scm 178 */
				BgL_ev_exprz00_bglt BgL_auxz00_4826;

				if (BGl_isazf3zf3zz__objectz00(BgL_ez00_3792,
						BGl_ev_exprz00zz__evaluate_typesz00))
					{	/* Eval/evaluate_fsize.scm 178 */
						BgL_auxz00_4826 = ((BgL_ev_exprz00_bglt) BgL_ez00_3792);
					}
				else
					{
						obj_t BgL_auxz00_4830;

						BgL_auxz00_4830 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2388z00zz__evaluate_fsiza7eza7, BINT(((long) 5204)),
							BGl_string2415z00zz__evaluate_fsiza7eza7,
							BGl_string2390z00zz__evaluate_fsiza7eza7, BgL_ez00_3792);
						FAILURE(BgL_auxz00_4830, BFALSE, BFALSE);
					}
				return BGl_searchzd2letreczd2zz__evaluate_fsiza7eza7(BgL_auxz00_4826);
			}
		}

	}



/* subst_goto */
	obj_t BGl_subst_gotoz00zz__evaluate_fsiza7eza7(BgL_ev_exprz00_bglt
		BgL_ez00_69, obj_t BgL_varsz00_70, obj_t BgL_lblsz00_71)
	{
		{	/* Eval/evaluate_fsize.scm 298 */
			{	/* Eval/evaluate_fsize.scm 298 */
				obj_t BgL_method1354z00_1357;

				{	/* Eval/evaluate_fsize.scm 298 */
					obj_t BgL_res2220z00_2827;

					{	/* Eval/evaluate_fsize.scm 298 */
						long BgL_objzd2classzd2numz00_2792;

						{	/* Eval/evaluate_fsize.scm 298 */
							long BgL_res2210z00_2795;

							BgL_res2210z00_2795 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_ez00_69));
							BgL_objzd2classzd2numz00_2792 = BgL_res2210z00_2795;
						}
						{	/* Eval/evaluate_fsize.scm 298 */
							obj_t BgL_arg2168z00_2793;

							BgL_arg2168z00_2793 =
								PROCEDURE_REF(BGl_subst_gotozd2envzd2zz__evaluate_fsiza7eza7,
								(int) (((long) 1)));
							{	/* Eval/evaluate_fsize.scm 298 */
								int BgL_offsetz00_2797;

								BgL_offsetz00_2797 = (int) (BgL_objzd2classzd2numz00_2792);
								{	/* Eval/evaluate_fsize.scm 298 */
									long BgL_offsetz00_2798;

									BgL_offsetz00_2798 =
										((long) (BgL_offsetz00_2797) - OBJECT_TYPE);
									{	/* Eval/evaluate_fsize.scm 298 */
										long BgL_modz00_2799;

										BgL_modz00_2799 =
											(BgL_offsetz00_2798 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Eval/evaluate_fsize.scm 298 */
											long BgL_restz00_2801;

											BgL_restz00_2801 =
												(BgL_offsetz00_2798 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Eval/evaluate_fsize.scm 298 */

												{	/* Eval/evaluate_fsize.scm 298 */
													obj_t BgL_bucketz00_2803;

													BgL_bucketz00_2803 =
														VECTOR_REF(
														((obj_t) BgL_arg2168z00_2793), BgL_modz00_2799);
													BgL_res2220z00_2827 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2803), BgL_restz00_2801);
					}}}}}}}}
					BgL_method1354z00_1357 = BgL_res2220z00_2827;
				}
				return
					PROCEDURE_ENTRY(BgL_method1354z00_1357) (BgL_method1354z00_1357,
					((obj_t) BgL_ez00_69), BgL_varsz00_70, BgL_lblsz00_71, BEOA);
			}
		}

	}



/* &subst_goto */
	obj_t BGl_z62subst_gotoz62zz__evaluate_fsiza7eza7(obj_t BgL_envz00_3793,
		obj_t BgL_ez00_3794, obj_t BgL_varsz00_3795, obj_t BgL_lblsz00_3796)
	{
		{	/* Eval/evaluate_fsize.scm 298 */
			{	/* Eval/evaluate_fsize.scm 298 */
				BgL_ev_exprz00_bglt BgL_auxz00_4867;

				if (BGl_isazf3zf3zz__objectz00(BgL_ez00_3794,
						BGl_ev_exprz00zz__evaluate_typesz00))
					{	/* Eval/evaluate_fsize.scm 298 */
						BgL_auxz00_4867 = ((BgL_ev_exprz00_bglt) BgL_ez00_3794);
					}
				else
					{
						obj_t BgL_auxz00_4871;

						BgL_auxz00_4871 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2388z00zz__evaluate_fsiza7eza7, BINT(((long) 8471)),
							BGl_string2416z00zz__evaluate_fsiza7eza7,
							BGl_string2390z00zz__evaluate_fsiza7eza7, BgL_ez00_3794);
						FAILURE(BgL_auxz00_4871, BFALSE, BFALSE);
					}
				return
					BGl_subst_gotoz00zz__evaluate_fsiza7eza7(BgL_auxz00_4867,
					BgL_varsz00_3795, BgL_lblsz00_3796);
			}
		}

	}



/* tailpos */
	obj_t BGl_tailposz00zz__evaluate_fsiza7eza7(BgL_ev_exprz00_bglt BgL_ez00_120,
		BgL_ev_varz00_bglt BgL_vz00_121)
	{
		{	/* Eval/evaluate_fsize.scm 403 */
			{	/* Eval/evaluate_fsize.scm 403 */
				obj_t BgL_method1389z00_1358;

				{	/* Eval/evaluate_fsize.scm 403 */
					obj_t BgL_res2231z00_2864;

					{	/* Eval/evaluate_fsize.scm 403 */
						long BgL_objzd2classzd2numz00_2829;

						{	/* Eval/evaluate_fsize.scm 403 */
							long BgL_res2221z00_2832;

							BgL_res2221z00_2832 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_ez00_120));
							BgL_objzd2classzd2numz00_2829 = BgL_res2221z00_2832;
						}
						{	/* Eval/evaluate_fsize.scm 403 */
							obj_t BgL_arg2168z00_2830;

							BgL_arg2168z00_2830 =
								PROCEDURE_REF(BGl_tailposzd2envzd2zz__evaluate_fsiza7eza7,
								(int) (((long) 1)));
							{	/* Eval/evaluate_fsize.scm 403 */
								int BgL_offsetz00_2834;

								BgL_offsetz00_2834 = (int) (BgL_objzd2classzd2numz00_2829);
								{	/* Eval/evaluate_fsize.scm 403 */
									long BgL_offsetz00_2835;

									BgL_offsetz00_2835 =
										((long) (BgL_offsetz00_2834) - OBJECT_TYPE);
									{	/* Eval/evaluate_fsize.scm 403 */
										long BgL_modz00_2836;

										BgL_modz00_2836 =
											(BgL_offsetz00_2835 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Eval/evaluate_fsize.scm 403 */
											long BgL_restz00_2838;

											BgL_restz00_2838 =
												(BgL_offsetz00_2835 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Eval/evaluate_fsize.scm 403 */

												{	/* Eval/evaluate_fsize.scm 403 */
													obj_t BgL_bucketz00_2840;

													BgL_bucketz00_2840 =
														VECTOR_REF(
														((obj_t) BgL_arg2168z00_2830), BgL_modz00_2836);
													BgL_res2231z00_2864 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2840), BgL_restz00_2838);
					}}}}}}}}
					BgL_method1389z00_1358 = BgL_res2231z00_2864;
				}
				return
					PROCEDURE_ENTRY(BgL_method1389z00_1358) (BgL_method1389z00_1358,
					((obj_t) BgL_ez00_120), ((obj_t) BgL_vz00_121), BEOA);
			}
		}

	}



/* &tailpos */
	obj_t BGl_z62tailposz62zz__evaluate_fsiza7eza7(obj_t BgL_envz00_3797,
		obj_t BgL_ez00_3798, obj_t BgL_vz00_3799)
	{
		{	/* Eval/evaluate_fsize.scm 403 */
			{	/* Eval/evaluate_fsize.scm 403 */
				BgL_ev_varz00_bglt BgL_auxz00_4916;
				BgL_ev_exprz00_bglt BgL_auxz00_4908;

				if (BGl_isazf3zf3zz__objectz00(BgL_vz00_3799,
						BGl_ev_varz00zz__evaluate_typesz00))
					{	/* Eval/evaluate_fsize.scm 403 */
						BgL_auxz00_4916 = ((BgL_ev_varz00_bglt) BgL_vz00_3799);
					}
				else
					{
						obj_t BgL_auxz00_4920;

						BgL_auxz00_4920 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2388z00zz__evaluate_fsiza7eza7, BINT(((long) 12049)),
							BGl_string2417z00zz__evaluate_fsiza7eza7,
							BGl_string2418z00zz__evaluate_fsiza7eza7, BgL_vz00_3799);
						FAILURE(BgL_auxz00_4920, BFALSE, BFALSE);
					}
				if (BGl_isazf3zf3zz__objectz00(BgL_ez00_3798,
						BGl_ev_exprz00zz__evaluate_typesz00))
					{	/* Eval/evaluate_fsize.scm 403 */
						BgL_auxz00_4908 = ((BgL_ev_exprz00_bglt) BgL_ez00_3798);
					}
				else
					{
						obj_t BgL_auxz00_4912;

						BgL_auxz00_4912 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2388z00zz__evaluate_fsiza7eza7, BINT(((long) 12049)),
							BGl_string2417z00zz__evaluate_fsiza7eza7,
							BGl_string2390z00zz__evaluate_fsiza7eza7, BgL_ez00_3798);
						FAILURE(BgL_auxz00_4912, BFALSE, BFALSE);
					}
				return
					BGl_tailposz00zz__evaluate_fsiza7eza7(BgL_auxz00_4908,
					BgL_auxz00_4916);
			}
		}

	}



/* hasvar? */
	obj_t BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(BgL_ev_exprz00_bglt
		BgL_ez00_160, BgL_ev_varz00_bglt BgL_vz00_161)
	{
		{	/* Eval/evaluate_fsize.scm 491 */
			{	/* Eval/evaluate_fsize.scm 491 */
				obj_t BgL_method1429z00_1359;

				{	/* Eval/evaluate_fsize.scm 491 */
					obj_t BgL_res2242z00_2901;

					{	/* Eval/evaluate_fsize.scm 491 */
						long BgL_objzd2classzd2numz00_2866;

						{	/* Eval/evaluate_fsize.scm 491 */
							long BgL_res2232z00_2869;

							BgL_res2232z00_2869 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_ez00_160));
							BgL_objzd2classzd2numz00_2866 = BgL_res2232z00_2869;
						}
						{	/* Eval/evaluate_fsize.scm 491 */
							obj_t BgL_arg2168z00_2867;

							BgL_arg2168z00_2867 =
								PROCEDURE_REF(BGl_hasvarzf3zd2envz21zz__evaluate_fsiza7eza7,
								(int) (((long) 1)));
							{	/* Eval/evaluate_fsize.scm 491 */
								int BgL_offsetz00_2871;

								BgL_offsetz00_2871 = (int) (BgL_objzd2classzd2numz00_2866);
								{	/* Eval/evaluate_fsize.scm 491 */
									long BgL_offsetz00_2872;

									BgL_offsetz00_2872 =
										((long) (BgL_offsetz00_2871) - OBJECT_TYPE);
									{	/* Eval/evaluate_fsize.scm 491 */
										long BgL_modz00_2873;

										BgL_modz00_2873 =
											(BgL_offsetz00_2872 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Eval/evaluate_fsize.scm 491 */
											long BgL_restz00_2875;

											BgL_restz00_2875 =
												(BgL_offsetz00_2872 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Eval/evaluate_fsize.scm 491 */

												{	/* Eval/evaluate_fsize.scm 491 */
													obj_t BgL_bucketz00_2877;

													BgL_bucketz00_2877 =
														VECTOR_REF(
														((obj_t) BgL_arg2168z00_2867), BgL_modz00_2873);
													BgL_res2242z00_2901 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2877), BgL_restz00_2875);
					}}}}}}}}
					BgL_method1429z00_1359 = BgL_res2242z00_2901;
				}
				return
					PROCEDURE_ENTRY(BgL_method1429z00_1359) (BgL_method1429z00_1359,
					((obj_t) BgL_ez00_160), ((obj_t) BgL_vz00_161), BEOA);
			}
		}

	}



/* &hasvar? */
	obj_t BGl_z62hasvarzf3z91zz__evaluate_fsiza7eza7(obj_t BgL_envz00_3800,
		obj_t BgL_ez00_3801, obj_t BgL_vz00_3802)
	{
		{	/* Eval/evaluate_fsize.scm 491 */
			{	/* Eval/evaluate_fsize.scm 491 */
				BgL_ev_varz00_bglt BgL_auxz00_4965;
				BgL_ev_exprz00_bglt BgL_auxz00_4957;

				if (BGl_isazf3zf3zz__objectz00(BgL_vz00_3802,
						BGl_ev_varz00zz__evaluate_typesz00))
					{	/* Eval/evaluate_fsize.scm 491 */
						BgL_auxz00_4965 = ((BgL_ev_varz00_bglt) BgL_vz00_3802);
					}
				else
					{
						obj_t BgL_auxz00_4969;

						BgL_auxz00_4969 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2388z00zz__evaluate_fsiza7eza7, BINT(((long) 14969)),
							BGl_string2419z00zz__evaluate_fsiza7eza7,
							BGl_string2418z00zz__evaluate_fsiza7eza7, BgL_vz00_3802);
						FAILURE(BgL_auxz00_4969, BFALSE, BFALSE);
					}
				if (BGl_isazf3zf3zz__objectz00(BgL_ez00_3801,
						BGl_ev_exprz00zz__evaluate_typesz00))
					{	/* Eval/evaluate_fsize.scm 491 */
						BgL_auxz00_4957 = ((BgL_ev_exprz00_bglt) BgL_ez00_3801);
					}
				else
					{
						obj_t BgL_auxz00_4961;

						BgL_auxz00_4961 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2388z00zz__evaluate_fsiza7eza7, BINT(((long) 14969)),
							BGl_string2419z00zz__evaluate_fsiza7eza7,
							BGl_string2390z00zz__evaluate_fsiza7eza7, BgL_ez00_3801);
						FAILURE(BgL_auxz00_4961, BFALSE, BFALSE);
					}
				return
					BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(BgL_auxz00_4957,
					BgL_auxz00_4965);
			}
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__evaluate_fsiza7eza7()
	{
		{	/* Eval/evaluate_fsize.scm 16 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_fsiza7ezd2envz75zz__evaluate_fsiza7eza7,
				BGl_ev_varz00zz__evaluate_typesz00,
				BGl_proc2420z00zz__evaluate_fsiza7eza7,
				BGl_string2421z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_fsiza7ezd2envz75zz__evaluate_fsiza7eza7,
				BGl_ev_globalz00zz__evaluate_typesz00,
				BGl_proc2422z00zz__evaluate_fsiza7eza7,
				BGl_string2421z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_fsiza7ezd2envz75zz__evaluate_fsiza7eza7,
				BGl_ev_littz00zz__evaluate_typesz00,
				BGl_proc2423z00zz__evaluate_fsiza7eza7,
				BGl_string2421z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_fsiza7ezd2envz75zz__evaluate_fsiza7eza7,
				BGl_ev_ifz00zz__evaluate_typesz00,
				BGl_proc2424z00zz__evaluate_fsiza7eza7,
				BGl_string2421z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_fsiza7ezd2envz75zz__evaluate_fsiza7eza7,
				BGl_ev_listz00zz__evaluate_typesz00,
				BGl_proc2425z00zz__evaluate_fsiza7eza7,
				BGl_string2421z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_fsiza7ezd2envz75zz__evaluate_fsiza7eza7,
				BGl_ev_prog2z00zz__evaluate_typesz00,
				BGl_proc2426z00zz__evaluate_fsiza7eza7,
				BGl_string2421z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_fsiza7ezd2envz75zz__evaluate_fsiza7eza7,
				BGl_ev_hookz00zz__evaluate_typesz00,
				BGl_proc2427z00zz__evaluate_fsiza7eza7,
				BGl_string2421z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_fsiza7ezd2envz75zz__evaluate_fsiza7eza7,
				BGl_ev_bindzd2exitzd2zz__evaluate_typesz00,
				BGl_proc2428z00zz__evaluate_fsiza7eza7,
				BGl_string2421z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_fsiza7ezd2envz75zz__evaluate_fsiza7eza7,
				BGl_ev_unwindzd2protectzd2zz__evaluate_typesz00,
				BGl_proc2429z00zz__evaluate_fsiza7eza7,
				BGl_string2421z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_fsiza7ezd2envz75zz__evaluate_fsiza7eza7,
				BGl_ev_withzd2handlerzd2zz__evaluate_typesz00,
				BGl_proc2430z00zz__evaluate_fsiza7eza7,
				BGl_string2421z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_fsiza7ezd2envz75zz__evaluate_fsiza7eza7,
				BGl_ev_synchroniza7eza7zz__evaluate_typesz00,
				BGl_proc2431z00zz__evaluate_fsiza7eza7,
				BGl_string2421z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_fsiza7ezd2envz75zz__evaluate_fsiza7eza7,
				BGl_ev_letz00zz__evaluate_typesz00,
				BGl_proc2432z00zz__evaluate_fsiza7eza7,
				BGl_string2421z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_fsiza7ezd2envz75zz__evaluate_fsiza7eza7,
				BGl_ev_letza2za2zz__evaluate_typesz00,
				BGl_proc2433z00zz__evaluate_fsiza7eza7,
				BGl_string2421z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_fsiza7ezd2envz75zz__evaluate_fsiza7eza7,
				BGl_ev_letrecz00zz__evaluate_typesz00,
				BGl_proc2434z00zz__evaluate_fsiza7eza7,
				BGl_string2421z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_fsiza7ezd2envz75zz__evaluate_fsiza7eza7,
				BGl_ev_labelsz00zz__evaluate_typesz00,
				BGl_proc2435z00zz__evaluate_fsiza7eza7,
				BGl_string2421z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_fsiza7ezd2envz75zz__evaluate_fsiza7eza7,
				BGl_ev_gotoz00zz__evaluate_typesz00,
				BGl_proc2436z00zz__evaluate_fsiza7eza7,
				BGl_string2421z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_fsiza7ezd2envz75zz__evaluate_fsiza7eza7,
				BGl_ev_appz00zz__evaluate_typesz00,
				BGl_proc2437z00zz__evaluate_fsiza7eza7,
				BGl_string2421z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_fsiza7ezd2envz75zz__evaluate_fsiza7eza7,
				BGl_ev_absz00zz__evaluate_typesz00,
				BGl_proc2438z00zz__evaluate_fsiza7eza7,
				BGl_string2421z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_searchzd2letreczd2envz00zz__evaluate_fsiza7eza7,
				BGl_ev_varz00zz__evaluate_typesz00,
				BGl_proc2439z00zz__evaluate_fsiza7eza7,
				BGl_string2410z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_searchzd2letreczd2envz00zz__evaluate_fsiza7eza7,
				BGl_ev_globalz00zz__evaluate_typesz00,
				BGl_proc2440z00zz__evaluate_fsiza7eza7,
				BGl_string2410z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_searchzd2letreczd2envz00zz__evaluate_fsiza7eza7,
				BGl_ev_littz00zz__evaluate_typesz00,
				BGl_proc2441z00zz__evaluate_fsiza7eza7,
				BGl_string2410z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_searchzd2letreczd2envz00zz__evaluate_fsiza7eza7,
				BGl_ev_ifz00zz__evaluate_typesz00,
				BGl_proc2442z00zz__evaluate_fsiza7eza7,
				BGl_string2410z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_searchzd2letreczd2envz00zz__evaluate_fsiza7eza7,
				BGl_ev_listz00zz__evaluate_typesz00,
				BGl_proc2443z00zz__evaluate_fsiza7eza7,
				BGl_string2410z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_searchzd2letreczd2envz00zz__evaluate_fsiza7eza7,
				BGl_ev_prog2z00zz__evaluate_typesz00,
				BGl_proc2444z00zz__evaluate_fsiza7eza7,
				BGl_string2410z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_searchzd2letreczd2envz00zz__evaluate_fsiza7eza7,
				BGl_ev_hookz00zz__evaluate_typesz00,
				BGl_proc2445z00zz__evaluate_fsiza7eza7,
				BGl_string2410z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_searchzd2letreczd2envz00zz__evaluate_fsiza7eza7,
				BGl_ev_bindzd2exitzd2zz__evaluate_typesz00,
				BGl_proc2446z00zz__evaluate_fsiza7eza7,
				BGl_string2410z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_searchzd2letreczd2envz00zz__evaluate_fsiza7eza7,
				BGl_ev_unwindzd2protectzd2zz__evaluate_typesz00,
				BGl_proc2447z00zz__evaluate_fsiza7eza7,
				BGl_string2410z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_searchzd2letreczd2envz00zz__evaluate_fsiza7eza7,
				BGl_ev_withzd2handlerzd2zz__evaluate_typesz00,
				BGl_proc2448z00zz__evaluate_fsiza7eza7,
				BGl_string2410z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_searchzd2letreczd2envz00zz__evaluate_fsiza7eza7,
				BGl_ev_synchroniza7eza7zz__evaluate_typesz00,
				BGl_proc2449z00zz__evaluate_fsiza7eza7,
				BGl_string2410z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_searchzd2letreczd2envz00zz__evaluate_fsiza7eza7,
				BGl_ev_binderz00zz__evaluate_typesz00,
				BGl_proc2450z00zz__evaluate_fsiza7eza7,
				BGl_string2410z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_searchzd2letreczd2envz00zz__evaluate_fsiza7eza7,
				BGl_ev_letrecz00zz__evaluate_typesz00,
				BGl_proc2451z00zz__evaluate_fsiza7eza7,
				BGl_string2410z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_searchzd2letreczd2envz00zz__evaluate_fsiza7eza7,
				BGl_ev_appz00zz__evaluate_typesz00,
				BGl_proc2452z00zz__evaluate_fsiza7eza7,
				BGl_string2410z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_searchzd2letreczd2envz00zz__evaluate_fsiza7eza7,
				BGl_ev_absz00zz__evaluate_typesz00,
				BGl_proc2453z00zz__evaluate_fsiza7eza7,
				BGl_string2410z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_subst_gotozd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_varz00zz__evaluate_typesz00,
				BGl_proc2454z00zz__evaluate_fsiza7eza7,
				BGl_string2408z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_subst_gotozd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_globalz00zz__evaluate_typesz00,
				BGl_proc2455z00zz__evaluate_fsiza7eza7,
				BGl_string2408z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_subst_gotozd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_littz00zz__evaluate_typesz00,
				BGl_proc2456z00zz__evaluate_fsiza7eza7,
				BGl_string2408z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_subst_gotozd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_ifz00zz__evaluate_typesz00,
				BGl_proc2457z00zz__evaluate_fsiza7eza7,
				BGl_string2408z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_subst_gotozd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_listz00zz__evaluate_typesz00,
				BGl_proc2458z00zz__evaluate_fsiza7eza7,
				BGl_string2408z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_subst_gotozd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_prog2z00zz__evaluate_typesz00,
				BGl_proc2459z00zz__evaluate_fsiza7eza7,
				BGl_string2408z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_subst_gotozd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_hookz00zz__evaluate_typesz00,
				BGl_proc2460z00zz__evaluate_fsiza7eza7,
				BGl_string2408z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_subst_gotozd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_bindzd2exitzd2zz__evaluate_typesz00,
				BGl_proc2461z00zz__evaluate_fsiza7eza7,
				BGl_string2408z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_subst_gotozd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_unwindzd2protectzd2zz__evaluate_typesz00,
				BGl_proc2462z00zz__evaluate_fsiza7eza7,
				BGl_string2408z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_subst_gotozd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_withzd2handlerzd2zz__evaluate_typesz00,
				BGl_proc2463z00zz__evaluate_fsiza7eza7,
				BGl_string2408z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_subst_gotozd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_synchroniza7eza7zz__evaluate_typesz00,
				BGl_proc2464z00zz__evaluate_fsiza7eza7,
				BGl_string2408z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_subst_gotozd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_binderz00zz__evaluate_typesz00,
				BGl_proc2465z00zz__evaluate_fsiza7eza7,
				BGl_string2408z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_subst_gotozd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_labelsz00zz__evaluate_typesz00,
				BGl_proc2466z00zz__evaluate_fsiza7eza7,
				BGl_string2408z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_subst_gotozd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_gotoz00zz__evaluate_typesz00,
				BGl_proc2467z00zz__evaluate_fsiza7eza7,
				BGl_string2408z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_subst_gotozd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_appz00zz__evaluate_typesz00,
				BGl_proc2468z00zz__evaluate_fsiza7eza7,
				BGl_string2408z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_subst_gotozd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_absz00zz__evaluate_typesz00,
				BGl_proc2469z00zz__evaluate_fsiza7eza7,
				BGl_string2408z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailposzd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_varz00zz__evaluate_typesz00,
				BGl_proc2470z00zz__evaluate_fsiza7eza7,
				BGl_string2405z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailposzd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_globalz00zz__evaluate_typesz00,
				BGl_proc2471z00zz__evaluate_fsiza7eza7,
				BGl_string2405z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailposzd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_littz00zz__evaluate_typesz00,
				BGl_proc2472z00zz__evaluate_fsiza7eza7,
				BGl_string2405z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailposzd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_ifz00zz__evaluate_typesz00,
				BGl_proc2473z00zz__evaluate_fsiza7eza7,
				BGl_string2405z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailposzd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_listz00zz__evaluate_typesz00,
				BGl_proc2474z00zz__evaluate_fsiza7eza7,
				BGl_string2405z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailposzd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_prog2z00zz__evaluate_typesz00,
				BGl_proc2475z00zz__evaluate_fsiza7eza7,
				BGl_string2405z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailposzd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_hookz00zz__evaluate_typesz00,
				BGl_proc2476z00zz__evaluate_fsiza7eza7,
				BGl_string2405z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailposzd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_setlocalz00zz__evaluate_typesz00,
				BGl_proc2477z00zz__evaluate_fsiza7eza7,
				BGl_string2405z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailposzd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_bindzd2exitzd2zz__evaluate_typesz00,
				BGl_proc2478z00zz__evaluate_fsiza7eza7,
				BGl_string2405z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailposzd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_unwindzd2protectzd2zz__evaluate_typesz00,
				BGl_proc2479z00zz__evaluate_fsiza7eza7,
				BGl_string2405z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailposzd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_withzd2handlerzd2zz__evaluate_typesz00,
				BGl_proc2480z00zz__evaluate_fsiza7eza7,
				BGl_string2405z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailposzd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_synchroniza7eza7zz__evaluate_typesz00,
				BGl_proc2481z00zz__evaluate_fsiza7eza7,
				BGl_string2405z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailposzd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_letz00zz__evaluate_typesz00,
				BGl_proc2482z00zz__evaluate_fsiza7eza7,
				BGl_string2405z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailposzd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_letza2za2zz__evaluate_typesz00,
				BGl_proc2483z00zz__evaluate_fsiza7eza7,
				BGl_string2405z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailposzd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_letrecz00zz__evaluate_typesz00,
				BGl_proc2484z00zz__evaluate_fsiza7eza7,
				BGl_string2405z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailposzd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_labelsz00zz__evaluate_typesz00,
				BGl_proc2485z00zz__evaluate_fsiza7eza7,
				BGl_string2405z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailposzd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_gotoz00zz__evaluate_typesz00,
				BGl_proc2486z00zz__evaluate_fsiza7eza7,
				BGl_string2405z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailposzd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_appz00zz__evaluate_typesz00,
				BGl_proc2487z00zz__evaluate_fsiza7eza7,
				BGl_string2405z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailposzd2envzd2zz__evaluate_fsiza7eza7,
				BGl_ev_absz00zz__evaluate_typesz00,
				BGl_proc2488z00zz__evaluate_fsiza7eza7,
				BGl_string2405z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hasvarzf3zd2envz21zz__evaluate_fsiza7eza7,
				BGl_ev_varz00zz__evaluate_typesz00,
				BGl_proc2489z00zz__evaluate_fsiza7eza7,
				BGl_string2490z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hasvarzf3zd2envz21zz__evaluate_fsiza7eza7,
				BGl_ev_globalz00zz__evaluate_typesz00,
				BGl_proc2491z00zz__evaluate_fsiza7eza7,
				BGl_string2490z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hasvarzf3zd2envz21zz__evaluate_fsiza7eza7,
				BGl_ev_littz00zz__evaluate_typesz00,
				BGl_proc2492z00zz__evaluate_fsiza7eza7,
				BGl_string2490z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hasvarzf3zd2envz21zz__evaluate_fsiza7eza7,
				BGl_ev_ifz00zz__evaluate_typesz00,
				BGl_proc2493z00zz__evaluate_fsiza7eza7,
				BGl_string2490z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hasvarzf3zd2envz21zz__evaluate_fsiza7eza7,
				BGl_ev_listz00zz__evaluate_typesz00,
				BGl_proc2494z00zz__evaluate_fsiza7eza7,
				BGl_string2490z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hasvarzf3zd2envz21zz__evaluate_fsiza7eza7,
				BGl_ev_prog2z00zz__evaluate_typesz00,
				BGl_proc2495z00zz__evaluate_fsiza7eza7,
				BGl_string2490z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hasvarzf3zd2envz21zz__evaluate_fsiza7eza7,
				BGl_ev_hookz00zz__evaluate_typesz00,
				BGl_proc2496z00zz__evaluate_fsiza7eza7,
				BGl_string2490z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hasvarzf3zd2envz21zz__evaluate_fsiza7eza7,
				BGl_ev_setlocalz00zz__evaluate_typesz00,
				BGl_proc2497z00zz__evaluate_fsiza7eza7,
				BGl_string2490z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hasvarzf3zd2envz21zz__evaluate_fsiza7eza7,
				BGl_ev_bindzd2exitzd2zz__evaluate_typesz00,
				BGl_proc2498z00zz__evaluate_fsiza7eza7,
				BGl_string2490z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hasvarzf3zd2envz21zz__evaluate_fsiza7eza7,
				BGl_ev_unwindzd2protectzd2zz__evaluate_typesz00,
				BGl_proc2499z00zz__evaluate_fsiza7eza7,
				BGl_string2490z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hasvarzf3zd2envz21zz__evaluate_fsiza7eza7,
				BGl_ev_withzd2handlerzd2zz__evaluate_typesz00,
				BGl_proc2500z00zz__evaluate_fsiza7eza7,
				BGl_string2490z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hasvarzf3zd2envz21zz__evaluate_fsiza7eza7,
				BGl_ev_synchroniza7eza7zz__evaluate_typesz00,
				BGl_proc2501z00zz__evaluate_fsiza7eza7,
				BGl_string2490z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hasvarzf3zd2envz21zz__evaluate_fsiza7eza7,
				BGl_ev_binderz00zz__evaluate_typesz00,
				BGl_proc2502z00zz__evaluate_fsiza7eza7,
				BGl_string2490z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hasvarzf3zd2envz21zz__evaluate_fsiza7eza7,
				BGl_ev_labelsz00zz__evaluate_typesz00,
				BGl_proc2503z00zz__evaluate_fsiza7eza7,
				BGl_string2490z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hasvarzf3zd2envz21zz__evaluate_fsiza7eza7,
				BGl_ev_gotoz00zz__evaluate_typesz00,
				BGl_proc2504z00zz__evaluate_fsiza7eza7,
				BGl_string2490z00zz__evaluate_fsiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hasvarzf3zd2envz21zz__evaluate_fsiza7eza7,
				BGl_ev_appz00zz__evaluate_typesz00,
				BGl_proc2505z00zz__evaluate_fsiza7eza7,
				BGl_string2490z00zz__evaluate_fsiza7eza7);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hasvarzf3zd2envz21zz__evaluate_fsiza7eza7,
				BGl_ev_absz00zz__evaluate_typesz00,
				BGl_proc2506z00zz__evaluate_fsiza7eza7,
				BGl_string2490z00zz__evaluate_fsiza7eza7);
		}

	}



/* &hasvar?-ev_abs1463 */
	obj_t BGl_z62hasvarzf3zd2ev_abs1463z43zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3888, obj_t BgL_ez00_3889, obj_t BgL_vz00_3890)
	{
		{	/* Eval/evaluate_fsize.scm 556 */
			return
				BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
				(((BgL_ev_absz00_bglt) COBJECT(
							((BgL_ev_absz00_bglt) BgL_ez00_3889)))->BgL_bodyz00),
				((BgL_ev_varz00_bglt) BgL_vz00_3890));
		}

	}



/* &hasvar?-ev_app1461 */
	obj_t BGl_z62hasvarzf3zd2ev_app1461z43zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3891, obj_t BgL_ez00_3892, obj_t BgL_vz00_3893)
	{
		{	/* Eval/evaluate_fsize.scm 552 */
			{	/* Eval/evaluate_fsize.scm 554 */
				obj_t BgL__ortest_1173z00_4194;

				BgL__ortest_1173z00_4194 =
					BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
					(((BgL_ev_appz00_bglt) COBJECT(
								((BgL_ev_appz00_bglt) BgL_ez00_3892)))->BgL_funz00),
					((BgL_ev_varz00_bglt) BgL_vz00_3893));
				if (CBOOL(BgL__ortest_1173z00_4194))
					{	/* Eval/evaluate_fsize.scm 554 */
						return BgL__ortest_1173z00_4194;
					}
				else
					{	/* Eval/evaluate_fsize.scm 554 */
						obj_t BgL_g1267z00_4195;

						BgL_g1267z00_4195 =
							(((BgL_ev_appz00_bglt) COBJECT(
									((BgL_ev_appz00_bglt) BgL_ez00_3892)))->BgL_argsz00);
						{
							obj_t BgL_l1265z00_4197;

							BgL_l1265z00_4197 = BgL_g1267z00_4195;
						BgL_zc3z04anonymousza31866ze3z87_4196:
							if (NULLP(BgL_l1265z00_4197))
								{	/* Eval/evaluate_fsize.scm 554 */
									return BFALSE;
								}
							else
								{	/* Eval/evaluate_fsize.scm 554 */
									obj_t BgL__ortest_1268z00_4198;

									{	/* Eval/evaluate_fsize.scm 554 */
										obj_t BgL_ez00_4199;

										BgL_ez00_4199 = CAR(((obj_t) BgL_l1265z00_4197));
										BgL__ortest_1268z00_4198 =
											BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
											((BgL_ev_exprz00_bglt) BgL_ez00_4199),
											((BgL_ev_varz00_bglt) BgL_vz00_3893));
									}
									if (CBOOL(BgL__ortest_1268z00_4198))
										{	/* Eval/evaluate_fsize.scm 554 */
											return BgL__ortest_1268z00_4198;
										}
									else
										{	/* Eval/evaluate_fsize.scm 554 */
											obj_t BgL_arg1868z00_4200;

											BgL_arg1868z00_4200 = CDR(((obj_t) BgL_l1265z00_4197));
											{
												obj_t BgL_l1265z00_5082;

												BgL_l1265z00_5082 = BgL_arg1868z00_4200;
												BgL_l1265z00_4197 = BgL_l1265z00_5082;
												goto BgL_zc3z04anonymousza31866ze3z87_4196;
											}
										}
								}
						}
					}
			}
		}

	}



/* &hasvar?-ev_goto1459 */
	obj_t BGl_z62hasvarzf3zd2ev_goto1459z43zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3894, obj_t BgL_ez00_3895, obj_t BgL_vz00_3896)
	{
		{	/* Eval/evaluate_fsize.scm 548 */
			{	/* Eval/evaluate_fsize.scm 550 */
				obj_t BgL_g1263z00_4203;

				BgL_g1263z00_4203 =
					(((BgL_ev_gotoz00_bglt) COBJECT(
							((BgL_ev_gotoz00_bglt) BgL_ez00_3895)))->BgL_argsz00);
				{
					obj_t BgL_l1261z00_4205;

					BgL_l1261z00_4205 = BgL_g1263z00_4203;
				BgL_zc3z04anonymousza31863ze3z87_4204:
					if (NULLP(BgL_l1261z00_4205))
						{	/* Eval/evaluate_fsize.scm 550 */
							return BFALSE;
						}
					else
						{	/* Eval/evaluate_fsize.scm 550 */
							obj_t BgL__ortest_1264z00_4206;

							{	/* Eval/evaluate_fsize.scm 550 */
								obj_t BgL_ez00_4207;

								BgL_ez00_4207 = CAR(((obj_t) BgL_l1261z00_4205));
								BgL__ortest_1264z00_4206 =
									BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
									((BgL_ev_exprz00_bglt) BgL_ez00_4207),
									((BgL_ev_varz00_bglt) BgL_vz00_3896));
							}
							if (CBOOL(BgL__ortest_1264z00_4206))
								{	/* Eval/evaluate_fsize.scm 550 */
									return BgL__ortest_1264z00_4206;
								}
							else
								{	/* Eval/evaluate_fsize.scm 550 */
									obj_t BgL_arg1865z00_4208;

									BgL_arg1865z00_4208 = CDR(((obj_t) BgL_l1261z00_4205));
									{
										obj_t BgL_l1261z00_5096;

										BgL_l1261z00_5096 = BgL_arg1865z00_4208;
										BgL_l1261z00_4205 = BgL_l1261z00_5096;
										goto BgL_zc3z04anonymousza31863ze3z87_4204;
									}
								}
						}
				}
			}
		}

	}



/* &hasvar?-ev_labels1457 */
	obj_t BGl_z62hasvarzf3zd2ev_labels1457z43zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3897, obj_t BgL_ez00_3898, obj_t BgL_vz00_3899)
	{
		{	/* Eval/evaluate_fsize.scm 543 */
			{	/* Eval/evaluate_fsize.scm 545 */
				obj_t BgL__ortest_1170z00_4211;

				{	/* Eval/evaluate_fsize.scm 545 */
					obj_t BgL_g1259z00_4212;

					BgL_g1259z00_4212 =
						(((BgL_ev_labelsz00_bglt) COBJECT(
								((BgL_ev_labelsz00_bglt) BgL_ez00_3898)))->BgL_valsz00);
					{
						obj_t BgL_l1257z00_4214;

						BgL_l1257z00_4214 = BgL_g1259z00_4212;
					BgL_zc3z04anonymousza31858ze3z87_4213:
						if (NULLP(BgL_l1257z00_4214))
							{	/* Eval/evaluate_fsize.scm 545 */
								BgL__ortest_1170z00_4211 = BFALSE;
							}
						else
							{	/* Eval/evaluate_fsize.scm 545 */
								obj_t BgL__ortest_1260z00_4215;

								{	/* Eval/evaluate_fsize.scm 545 */
									obj_t BgL_ez00_4216;

									BgL_ez00_4216 = CAR(((obj_t) BgL_l1257z00_4214));
									{	/* Eval/evaluate_fsize.scm 545 */
										obj_t BgL_arg1862z00_4217;

										BgL_arg1862z00_4217 = CDR(((obj_t) BgL_ez00_4216));
										BgL__ortest_1260z00_4215 =
											BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
											((BgL_ev_exprz00_bglt) BgL_arg1862z00_4217),
											((BgL_ev_varz00_bglt) BgL_vz00_3899));
									}
								}
								if (CBOOL(BgL__ortest_1260z00_4215))
									{	/* Eval/evaluate_fsize.scm 545 */
										BgL__ortest_1170z00_4211 = BgL__ortest_1260z00_4215;
									}
								else
									{	/* Eval/evaluate_fsize.scm 545 */
										obj_t BgL_arg1861z00_4218;

										BgL_arg1861z00_4218 = CDR(((obj_t) BgL_l1257z00_4214));
										{
											obj_t BgL_l1257z00_5112;

											BgL_l1257z00_5112 = BgL_arg1861z00_4218;
											BgL_l1257z00_4214 = BgL_l1257z00_5112;
											goto BgL_zc3z04anonymousza31858ze3z87_4213;
										}
									}
							}
					}
				}
				if (CBOOL(BgL__ortest_1170z00_4211))
					{	/* Eval/evaluate_fsize.scm 545 */
						return BgL__ortest_1170z00_4211;
					}
				else
					{	/* Eval/evaluate_fsize.scm 545 */
						return
							BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
							(((BgL_ev_labelsz00_bglt) COBJECT(
										((BgL_ev_labelsz00_bglt) BgL_ez00_3898)))->BgL_bodyz00),
							((BgL_ev_varz00_bglt) BgL_vz00_3899));
					}
			}
		}

	}



/* &hasvar?-ev_binder1455 */
	obj_t BGl_z62hasvarzf3zd2ev_binder1455z43zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3900, obj_t BgL_ez00_3901, obj_t BgL_vz00_3902)
	{
		{	/* Eval/evaluate_fsize.scm 538 */
			{	/* Eval/evaluate_fsize.scm 540 */
				obj_t BgL__ortest_1168z00_4221;

				{	/* Eval/evaluate_fsize.scm 540 */
					obj_t BgL_g1255z00_4222;

					BgL_g1255z00_4222 =
						(((BgL_ev_binderz00_bglt) COBJECT(
								((BgL_ev_binderz00_bglt) BgL_ez00_3901)))->BgL_valsz00);
					{
						obj_t BgL_l1253z00_4224;

						BgL_l1253z00_4224 = BgL_g1255z00_4222;
					BgL_zc3z04anonymousza31854ze3z87_4223:
						if (NULLP(BgL_l1253z00_4224))
							{	/* Eval/evaluate_fsize.scm 540 */
								BgL__ortest_1168z00_4221 = BFALSE;
							}
						else
							{	/* Eval/evaluate_fsize.scm 540 */
								obj_t BgL__ortest_1256z00_4225;

								{	/* Eval/evaluate_fsize.scm 540 */
									obj_t BgL_ez00_4226;

									BgL_ez00_4226 = CAR(((obj_t) BgL_l1253z00_4224));
									BgL__ortest_1256z00_4225 =
										BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
										((BgL_ev_exprz00_bglt) BgL_ez00_4226),
										((BgL_ev_varz00_bglt) BgL_vz00_3902));
								}
								if (CBOOL(BgL__ortest_1256z00_4225))
									{	/* Eval/evaluate_fsize.scm 540 */
										BgL__ortest_1168z00_4221 = BgL__ortest_1256z00_4225;
									}
								else
									{	/* Eval/evaluate_fsize.scm 540 */
										obj_t BgL_arg1856z00_4227;

										BgL_arg1856z00_4227 = CDR(((obj_t) BgL_l1253z00_4224));
										{
											obj_t BgL_l1253z00_5132;

											BgL_l1253z00_5132 = BgL_arg1856z00_4227;
											BgL_l1253z00_4224 = BgL_l1253z00_5132;
											goto BgL_zc3z04anonymousza31854ze3z87_4223;
										}
									}
							}
					}
				}
				if (CBOOL(BgL__ortest_1168z00_4221))
					{	/* Eval/evaluate_fsize.scm 540 */
						return BgL__ortest_1168z00_4221;
					}
				else
					{	/* Eval/evaluate_fsize.scm 540 */
						return
							BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
							(((BgL_ev_binderz00_bglt) COBJECT(
										((BgL_ev_binderz00_bglt) BgL_ez00_3901)))->BgL_bodyz00),
							((BgL_ev_varz00_bglt) BgL_vz00_3902));
					}
			}
		}

	}



/* &hasvar?-ev_synchroni1453 */
	obj_t BGl_z62hasvarzf3zd2ev_synchroni1453z43zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3903, obj_t BgL_ez00_3904, obj_t BgL_vz00_3905)
	{
		{	/* Eval/evaluate_fsize.scm 534 */
			{	/* Eval/evaluate_fsize.scm 536 */
				obj_t BgL__ortest_1165z00_4230;

				BgL__ortest_1165z00_4230 =
					BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
					(((BgL_ev_synchroniza7eza7_bglt) COBJECT(
								((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_3904)))->BgL_mutexz00),
					((BgL_ev_varz00_bglt) BgL_vz00_3905));
				if (CBOOL(BgL__ortest_1165z00_4230))
					{	/* Eval/evaluate_fsize.scm 536 */
						return BgL__ortest_1165z00_4230;
					}
				else
					{	/* Eval/evaluate_fsize.scm 536 */
						obj_t BgL__ortest_1166z00_4231;

						BgL__ortest_1166z00_4231 =
							BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
							(((BgL_ev_synchroniza7eza7_bglt) COBJECT(
										((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_3904)))->
								BgL_prelockz00), ((BgL_ev_varz00_bglt) BgL_vz00_3905));
						if (CBOOL(BgL__ortest_1166z00_4231))
							{	/* Eval/evaluate_fsize.scm 536 */
								return BgL__ortest_1166z00_4231;
							}
						else
							{	/* Eval/evaluate_fsize.scm 536 */
								return
									BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
									(((BgL_ev_synchroniza7eza7_bglt) COBJECT(
												((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_3904)))->
										BgL_bodyz00), ((BgL_ev_varz00_bglt) BgL_vz00_3905));
							}
					}
			}
		}

	}



/* &hasvar?-ev_with-hand1451 */
	obj_t BGl_z62hasvarzf3zd2ev_withzd2hand1451z91zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3906, obj_t BgL_ez00_3907, obj_t BgL_vz00_3908)
	{
		{	/* Eval/evaluate_fsize.scm 530 */
			{	/* Eval/evaluate_fsize.scm 532 */
				obj_t BgL__ortest_1163z00_4234;

				BgL__ortest_1163z00_4234 =
					BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
					(((BgL_ev_withzd2handlerzd2_bglt) COBJECT(
								((BgL_ev_withzd2handlerzd2_bglt) BgL_ez00_3907)))->
						BgL_handlerz00), ((BgL_ev_varz00_bglt) BgL_vz00_3908));
				if (CBOOL(BgL__ortest_1163z00_4234))
					{	/* Eval/evaluate_fsize.scm 532 */
						return BgL__ortest_1163z00_4234;
					}
				else
					{	/* Eval/evaluate_fsize.scm 532 */
						return
							BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
							(((BgL_ev_withzd2handlerzd2_bglt) COBJECT(
										((BgL_ev_withzd2handlerzd2_bglt) BgL_ez00_3907)))->
								BgL_bodyz00), ((BgL_ev_varz00_bglt) BgL_vz00_3908));
					}
			}
		}

	}



/* &hasvar?-ev_unwind-pr1449 */
	obj_t BGl_z62hasvarzf3zd2ev_unwindzd2pr1449z91zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3909, obj_t BgL_ez00_3910, obj_t BgL_vz00_3911)
	{
		{	/* Eval/evaluate_fsize.scm 526 */
			{	/* Eval/evaluate_fsize.scm 528 */
				obj_t BgL__ortest_1161z00_4237;

				BgL__ortest_1161z00_4237 =
					BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
					(((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(
								((BgL_ev_unwindzd2protectzd2_bglt) BgL_ez00_3910)))->BgL_ez00),
					((BgL_ev_varz00_bglt) BgL_vz00_3911));
				if (CBOOL(BgL__ortest_1161z00_4237))
					{	/* Eval/evaluate_fsize.scm 528 */
						return BgL__ortest_1161z00_4237;
					}
				else
					{	/* Eval/evaluate_fsize.scm 528 */
						return
							BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
							(((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(
										((BgL_ev_unwindzd2protectzd2_bglt) BgL_ez00_3910)))->
								BgL_bodyz00), ((BgL_ev_varz00_bglt) BgL_vz00_3911));
					}
			}
		}

	}



/* &hasvar?-ev_bind-exit1447 */
	obj_t BGl_z62hasvarzf3zd2ev_bindzd2exit1447z91zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3912, obj_t BgL_ez00_3913, obj_t BgL_vz00_3914)
	{
		{	/* Eval/evaluate_fsize.scm 522 */
			return
				BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
				(((BgL_ev_bindzd2exitzd2_bglt) COBJECT(
							((BgL_ev_bindzd2exitzd2_bglt) BgL_ez00_3913)))->BgL_bodyz00),
				((BgL_ev_varz00_bglt) BgL_vz00_3914));
		}

	}



/* &hasvar?-ev_setlocal1445 */
	obj_t BGl_z62hasvarzf3zd2ev_setlocal1445z43zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3915, obj_t BgL_ez00_3916, obj_t BgL_varz00_3917)
	{
		{	/* Eval/evaluate_fsize.scm 518 */
			{	/* Eval/evaluate_fsize.scm 520 */
				bool_t BgL__ortest_1158z00_4242;

				BgL__ortest_1158z00_4242 =
					(
					((obj_t)
						(((BgL_ev_setlocalz00_bglt) COBJECT(
									((BgL_ev_setlocalz00_bglt) BgL_ez00_3916)))->BgL_vz00)) ==
					((obj_t) ((BgL_ev_varz00_bglt) BgL_varz00_3917)));
				if (BgL__ortest_1158z00_4242)
					{	/* Eval/evaluate_fsize.scm 520 */
						return BBOOL(BgL__ortest_1158z00_4242);
					}
				else
					{	/* Eval/evaluate_fsize.scm 520 */
						BgL_ev_exprz00_bglt BgL_arg1840z00_4243;

						BgL_arg1840z00_4243 =
							(((BgL_ev_hookz00_bglt) COBJECT(
									((BgL_ev_hookz00_bglt)
										((BgL_ev_setlocalz00_bglt) BgL_ez00_3916))))->BgL_ez00);
						return
							BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(BgL_arg1840z00_4243,
							((BgL_ev_varz00_bglt) BgL_varz00_3917));
					}
			}
		}

	}



/* &hasvar?-ev_hook1443 */
	obj_t BGl_z62hasvarzf3zd2ev_hook1443z43zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3918, obj_t BgL_ez00_3919, obj_t BgL_vz00_3920)
	{
		{	/* Eval/evaluate_fsize.scm 514 */
			return
				BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
				(((BgL_ev_hookz00_bglt) COBJECT(
							((BgL_ev_hookz00_bglt) BgL_ez00_3919)))->BgL_ez00),
				((BgL_ev_varz00_bglt) BgL_vz00_3920));
		}

	}



/* &hasvar?-ev_prog21441 */
	obj_t BGl_z62hasvarzf3zd2ev_prog21441z43zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3921, obj_t BgL_ez00_3922, obj_t BgL_vz00_3923)
	{
		{	/* Eval/evaluate_fsize.scm 510 */
			{	/* Eval/evaluate_fsize.scm 512 */
				obj_t BgL__ortest_1155z00_4248;

				BgL__ortest_1155z00_4248 =
					BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
					(((BgL_ev_prog2z00_bglt) COBJECT(
								((BgL_ev_prog2z00_bglt) BgL_ez00_3922)))->BgL_e1z00),
					((BgL_ev_varz00_bglt) BgL_vz00_3923));
				if (CBOOL(BgL__ortest_1155z00_4248))
					{	/* Eval/evaluate_fsize.scm 512 */
						return BgL__ortest_1155z00_4248;
					}
				else
					{	/* Eval/evaluate_fsize.scm 512 */
						return
							BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
							(((BgL_ev_prog2z00_bglt) COBJECT(
										((BgL_ev_prog2z00_bglt) BgL_ez00_3922)))->BgL_e2z00),
							((BgL_ev_varz00_bglt) BgL_vz00_3923));
					}
			}
		}

	}



/* &hasvar?-ev_list1439 */
	obj_t BGl_z62hasvarzf3zd2ev_list1439z43zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3924, obj_t BgL_ez00_3925, obj_t BgL_vz00_3926)
	{
		{	/* Eval/evaluate_fsize.scm 506 */
			{	/* Eval/evaluate_fsize.scm 508 */
				obj_t BgL_g1251z00_4251;

				BgL_g1251z00_4251 =
					(((BgL_ev_listz00_bglt) COBJECT(
							((BgL_ev_listz00_bglt) BgL_ez00_3925)))->BgL_argsz00);
				{
					obj_t BgL_l1249z00_4253;

					BgL_l1249z00_4253 = BgL_g1251z00_4251;
				BgL_zc3z04anonymousza31831ze3z87_4252:
					if (NULLP(BgL_l1249z00_4253))
						{	/* Eval/evaluate_fsize.scm 508 */
							return BFALSE;
						}
					else
						{	/* Eval/evaluate_fsize.scm 508 */
							obj_t BgL__ortest_1252z00_4254;

							{	/* Eval/evaluate_fsize.scm 508 */
								obj_t BgL_az00_4255;

								BgL_az00_4255 = CAR(((obj_t) BgL_l1249z00_4253));
								BgL__ortest_1252z00_4254 =
									BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
									((BgL_ev_exprz00_bglt) BgL_az00_4255),
									((BgL_ev_varz00_bglt) BgL_vz00_3926));
							}
							if (CBOOL(BgL__ortest_1252z00_4254))
								{	/* Eval/evaluate_fsize.scm 508 */
									return BgL__ortest_1252z00_4254;
								}
							else
								{	/* Eval/evaluate_fsize.scm 508 */
									obj_t BgL_arg1833z00_4256;

									BgL_arg1833z00_4256 = CDR(((obj_t) BgL_l1249z00_4253));
									{
										obj_t BgL_l1249z00_5219;

										BgL_l1249z00_5219 = BgL_arg1833z00_4256;
										BgL_l1249z00_4253 = BgL_l1249z00_5219;
										goto BgL_zc3z04anonymousza31831ze3z87_4252;
									}
								}
						}
				}
			}
		}

	}



/* &hasvar?-ev_if1437 */
	obj_t BGl_z62hasvarzf3zd2ev_if1437z43zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3927, obj_t BgL_ez00_3928, obj_t BgL_vz00_3929)
	{
		{	/* Eval/evaluate_fsize.scm 502 */
			{	/* Eval/evaluate_fsize.scm 504 */
				obj_t BgL__ortest_1151z00_4259;

				BgL__ortest_1151z00_4259 =
					BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
					(((BgL_ev_ifz00_bglt) COBJECT(
								((BgL_ev_ifz00_bglt) BgL_ez00_3928)))->BgL_pz00),
					((BgL_ev_varz00_bglt) BgL_vz00_3929));
				if (CBOOL(BgL__ortest_1151z00_4259))
					{	/* Eval/evaluate_fsize.scm 504 */
						return BgL__ortest_1151z00_4259;
					}
				else
					{	/* Eval/evaluate_fsize.scm 504 */
						obj_t BgL__ortest_1152z00_4260;

						BgL__ortest_1152z00_4260 =
							BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
							(((BgL_ev_ifz00_bglt) COBJECT(
										((BgL_ev_ifz00_bglt) BgL_ez00_3928)))->BgL_tz00),
							((BgL_ev_varz00_bglt) BgL_vz00_3929));
						if (CBOOL(BgL__ortest_1152z00_4260))
							{	/* Eval/evaluate_fsize.scm 504 */
								return BgL__ortest_1152z00_4260;
							}
						else
							{	/* Eval/evaluate_fsize.scm 504 */
								return
									BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
									(((BgL_ev_ifz00_bglt) COBJECT(
												((BgL_ev_ifz00_bglt) BgL_ez00_3928)))->BgL_ez00),
									((BgL_ev_varz00_bglt) BgL_vz00_3929));
							}
					}
			}
		}

	}



/* &hasvar?-ev_litt1435 */
	obj_t BGl_z62hasvarzf3zd2ev_litt1435z43zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3930, obj_t BgL_ez00_3931, obj_t BgL_vz00_3932)
	{
		{	/* Eval/evaluate_fsize.scm 499 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &hasvar?-ev_global1433 */
	obj_t BGl_z62hasvarzf3zd2ev_global1433z43zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3933, obj_t BgL_ez00_3934, obj_t BgL_vz00_3935)
	{
		{	/* Eval/evaluate_fsize.scm 496 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &hasvar?-ev_var1431 */
	obj_t BGl_z62hasvarzf3zd2ev_var1431z43zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3936, obj_t BgL_ez00_3937, obj_t BgL_vz00_3938)
	{
		{	/* Eval/evaluate_fsize.scm 493 */
			return
				BBOOL(
				(((obj_t)
						((BgL_ev_varz00_bglt) BgL_ez00_3937)) ==
					((obj_t) ((BgL_ev_varz00_bglt) BgL_vz00_3938))));
		}

	}



/* &tailpos-ev_abs1427 */
	obj_t BGl_z62tailposzd2ev_abs1427zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3939, obj_t BgL_ez00_3940, obj_t BgL_vz00_3941)
	{
		{	/* Eval/evaluate_fsize.scm 485 */
			{	/* Eval/evaluate_fsize.scm 486 */
				bool_t BgL_tmpz00_5244;

				{	/* Eval/evaluate_fsize.scm 487 */
					bool_t BgL_test2673z00_5245;

					{	/* Eval/evaluate_fsize.scm 487 */
						BgL_ev_exprz00_bglt BgL_arg1827z00_4269;

						BgL_arg1827z00_4269 =
							(((BgL_ev_absz00_bglt) COBJECT(
									((BgL_ev_absz00_bglt) BgL_ez00_3940)))->BgL_bodyz00);
						BgL_test2673z00_5245 =
							CBOOL(BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(BgL_arg1827z00_4269,
								((BgL_ev_varz00_bglt) BgL_vz00_3941)));
					}
					if (BgL_test2673z00_5245)
						{	/* Eval/evaluate_fsize.scm 487 */
							BgL_tmpz00_5244 = ((bool_t) 0);
						}
					else
						{	/* Eval/evaluate_fsize.scm 487 */
							BgL_tmpz00_5244 = ((bool_t) 1);
						}
				}
				return BBOOL(BgL_tmpz00_5244);
			}
		}

	}



/* &tailpos-ev_app1425 */
	obj_t BGl_z62tailposzd2ev_app1425zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3942, obj_t BgL_ez00_3943, obj_t BgL_vz00_3944)
	{
		{	/* Eval/evaluate_fsize.scm 479 */
			{	/* Eval/evaluate_fsize.scm 480 */
				bool_t BgL_tmpz00_5252;

				{	/* Eval/evaluate_fsize.scm 481 */
					bool_t BgL_test2674z00_5253;

					{	/* Eval/evaluate_fsize.scm 481 */
						obj_t BgL_g1247z00_4272;

						BgL_g1247z00_4272 =
							(((BgL_ev_appz00_bglt) COBJECT(
									((BgL_ev_appz00_bglt) BgL_ez00_3943)))->BgL_argsz00);
						{
							obj_t BgL_l1245z00_4274;

							BgL_l1245z00_4274 = BgL_g1247z00_4272;
						BgL_zc3z04anonymousza31821ze3z87_4273:
							if (NULLP(BgL_l1245z00_4274))
								{	/* Eval/evaluate_fsize.scm 481 */
									BgL_test2674z00_5253 = ((bool_t) 1);
								}
							else
								{	/* Eval/evaluate_fsize.scm 481 */
									bool_t BgL_test2676z00_5258;

									if (CBOOL(BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
												((BgL_ev_exprz00_bglt)
													CAR(
														((obj_t) BgL_l1245z00_4274))),
												((BgL_ev_varz00_bglt) BgL_vz00_3944))))
										{	/* Eval/evaluate_fsize.scm 481 */
											BgL_test2676z00_5258 = ((bool_t) 0);
										}
									else
										{	/* Eval/evaluate_fsize.scm 481 */
											BgL_test2676z00_5258 = ((bool_t) 1);
										}
									if (BgL_test2676z00_5258)
										{	/* Eval/evaluate_fsize.scm 481 */
											obj_t BgL_arg1823z00_4275;

											BgL_arg1823z00_4275 = CDR(((obj_t) BgL_l1245z00_4274));
											{
												obj_t BgL_l1245z00_5268;

												BgL_l1245z00_5268 = BgL_arg1823z00_4275;
												BgL_l1245z00_4274 = BgL_l1245z00_5268;
												goto BgL_zc3z04anonymousza31821ze3z87_4273;
											}
										}
									else
										{	/* Eval/evaluate_fsize.scm 481 */
											BgL_test2674z00_5253 = ((bool_t) 0);
										}
								}
						}
					}
					if (BgL_test2674z00_5253)
						{	/* Eval/evaluate_fsize.scm 482 */
							bool_t BgL__ortest_1148z00_4276;

							BgL__ortest_1148z00_4276 =
								(
								((obj_t)
									(((BgL_ev_appz00_bglt) COBJECT(
												((BgL_ev_appz00_bglt) BgL_ez00_3943)))->BgL_funz00)) ==
								((obj_t) ((BgL_ev_varz00_bglt) BgL_vz00_3944)));
							if (BgL__ortest_1148z00_4276)
								{	/* Eval/evaluate_fsize.scm 482 */
									BgL_tmpz00_5252 = BgL__ortest_1148z00_4276;
								}
							else
								{	/* Eval/evaluate_fsize.scm 483 */
									bool_t BgL_test2679z00_5276;

									{	/* Eval/evaluate_fsize.scm 483 */
										BgL_ev_exprz00_bglt BgL_arg1819z00_4277;

										BgL_arg1819z00_4277 =
											(((BgL_ev_appz00_bglt) COBJECT(
													((BgL_ev_appz00_bglt) BgL_ez00_3943)))->BgL_funz00);
										BgL_test2679z00_5276 =
											CBOOL(BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7
											(BgL_arg1819z00_4277,
												((BgL_ev_varz00_bglt) BgL_vz00_3944)));
									}
									if (BgL_test2679z00_5276)
										{	/* Eval/evaluate_fsize.scm 483 */
											BgL_tmpz00_5252 = ((bool_t) 0);
										}
									else
										{	/* Eval/evaluate_fsize.scm 483 */
											BgL_tmpz00_5252 = ((bool_t) 1);
										}
								}
						}
					else
						{	/* Eval/evaluate_fsize.scm 481 */
							BgL_tmpz00_5252 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_tmpz00_5252);
			}
		}

	}



/* &tailpos-ev_goto1423 */
	obj_t BGl_z62tailposzd2ev_goto1423zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3945, obj_t BgL_ez00_3946, obj_t BgL_vz00_3947)
	{
		{	/* Eval/evaluate_fsize.scm 475 */
			{	/* Eval/evaluate_fsize.scm 476 */
				bool_t BgL_tmpz00_5283;

				{	/* Eval/evaluate_fsize.scm 477 */
					obj_t BgL_g1243z00_4280;

					BgL_g1243z00_4280 =
						(((BgL_ev_gotoz00_bglt) COBJECT(
								((BgL_ev_gotoz00_bglt) BgL_ez00_3946)))->BgL_argsz00);
					{
						obj_t BgL_l1241z00_4282;

						BgL_l1241z00_4282 = BgL_g1243z00_4280;
					BgL_zc3z04anonymousza31813ze3z87_4281:
						if (NULLP(BgL_l1241z00_4282))
							{	/* Eval/evaluate_fsize.scm 477 */
								BgL_tmpz00_5283 = ((bool_t) 1);
							}
						else
							{	/* Eval/evaluate_fsize.scm 477 */
								bool_t BgL_test2681z00_5288;

								if (CBOOL(BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
											((BgL_ev_exprz00_bglt)
												CAR(
													((obj_t) BgL_l1241z00_4282))),
											((BgL_ev_varz00_bglt) BgL_vz00_3947))))
									{	/* Eval/evaluate_fsize.scm 477 */
										BgL_test2681z00_5288 = ((bool_t) 0);
									}
								else
									{	/* Eval/evaluate_fsize.scm 477 */
										BgL_test2681z00_5288 = ((bool_t) 1);
									}
								if (BgL_test2681z00_5288)
									{	/* Eval/evaluate_fsize.scm 477 */
										obj_t BgL_arg1815z00_4283;

										BgL_arg1815z00_4283 = CDR(((obj_t) BgL_l1241z00_4282));
										{
											obj_t BgL_l1241z00_5298;

											BgL_l1241z00_5298 = BgL_arg1815z00_4283;
											BgL_l1241z00_4282 = BgL_l1241z00_5298;
											goto BgL_zc3z04anonymousza31813ze3z87_4281;
										}
									}
								else
									{	/* Eval/evaluate_fsize.scm 477 */
										BgL_tmpz00_5283 = ((bool_t) 0);
									}
							}
					}
				}
				return BBOOL(BgL_tmpz00_5283);
			}
		}

	}



/* &tailpos-ev_labels1421 */
	obj_t BGl_z62tailposzd2ev_labels1421zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3948, obj_t BgL_ez00_3949, obj_t BgL_vz00_3950)
	{
		{	/* Eval/evaluate_fsize.scm 470 */
			{	/* Eval/evaluate_fsize.scm 472 */
				bool_t BgL_test2683z00_5300;

				{	/* Eval/evaluate_fsize.scm 472 */
					obj_t BgL_g1239z00_4286;

					BgL_g1239z00_4286 =
						(((BgL_ev_labelsz00_bglt) COBJECT(
								((BgL_ev_labelsz00_bglt) BgL_ez00_3949)))->BgL_valsz00);
					{
						obj_t BgL_l1237z00_4288;

						BgL_l1237z00_4288 = BgL_g1239z00_4286;
					BgL_zc3z04anonymousza31809ze3z87_4287:
						if (NULLP(BgL_l1237z00_4288))
							{	/* Eval/evaluate_fsize.scm 472 */
								BgL_test2683z00_5300 = ((bool_t) 1);
							}
						else
							{	/* Eval/evaluate_fsize.scm 472 */
								obj_t BgL_nvz00_4289;

								{	/* Eval/evaluate_fsize.scm 472 */
									obj_t BgL_ez00_4290;

									BgL_ez00_4290 = CAR(((obj_t) BgL_l1237z00_4288));
									{	/* Eval/evaluate_fsize.scm 472 */
										obj_t BgL_arg1812z00_4291;

										BgL_arg1812z00_4291 = CDR(((obj_t) BgL_ez00_4290));
										BgL_nvz00_4289 =
											BGl_tailposz00zz__evaluate_fsiza7eza7(
											((BgL_ev_exprz00_bglt) BgL_arg1812z00_4291),
											((BgL_ev_varz00_bglt) BgL_vz00_3950));
									}
								}
								if (CBOOL(BgL_nvz00_4289))
									{	/* Eval/evaluate_fsize.scm 472 */
										obj_t BgL_arg1811z00_4292;

										BgL_arg1811z00_4292 = CDR(((obj_t) BgL_l1237z00_4288));
										{
											obj_t BgL_l1237z00_5316;

											BgL_l1237z00_5316 = BgL_arg1811z00_4292;
											BgL_l1237z00_4288 = BgL_l1237z00_5316;
											goto BgL_zc3z04anonymousza31809ze3z87_4287;
										}
									}
								else
									{	/* Eval/evaluate_fsize.scm 472 */
										BgL_test2683z00_5300 = ((bool_t) 0);
									}
							}
					}
				}
				if (BgL_test2683z00_5300)
					{	/* Eval/evaluate_fsize.scm 472 */
						return
							BGl_tailposz00zz__evaluate_fsiza7eza7(
							(((BgL_ev_labelsz00_bglt) COBJECT(
										((BgL_ev_labelsz00_bglt) BgL_ez00_3949)))->BgL_bodyz00),
							((BgL_ev_varz00_bglt) BgL_vz00_3950));
					}
				else
					{	/* Eval/evaluate_fsize.scm 472 */
						return BFALSE;
					}
			}
		}

	}



/* &tailpos-ev_letrec1419 */
	obj_t BGl_z62tailposzd2ev_letrec1419zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3951, obj_t BgL_ez00_3952, obj_t BgL_vz00_3953)
	{
		{	/* Eval/evaluate_fsize.scm 465 */
			{	/* Eval/evaluate_fsize.scm 467 */
				bool_t BgL_test2686z00_5321;

				{	/* Eval/evaluate_fsize.scm 467 */
					obj_t BgL_g1235z00_4295;

					BgL_g1235z00_4295 =
						(((BgL_ev_binderz00_bglt) COBJECT(
								((BgL_ev_binderz00_bglt)
									((BgL_ev_letrecz00_bglt) BgL_ez00_3952))))->BgL_valsz00);
					{
						obj_t BgL_l1233z00_4297;

						BgL_l1233z00_4297 = BgL_g1235z00_4295;
					BgL_zc3z04anonymousza31804ze3z87_4296:
						if (NULLP(BgL_l1233z00_4297))
							{	/* Eval/evaluate_fsize.scm 467 */
								BgL_test2686z00_5321 = ((bool_t) 1);
							}
						else
							{	/* Eval/evaluate_fsize.scm 467 */
								bool_t BgL_test2688z00_5327;

								if (CBOOL(BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
											((BgL_ev_exprz00_bglt)
												CAR(
													((obj_t) BgL_l1233z00_4297))),
											((BgL_ev_varz00_bglt) BgL_vz00_3953))))
									{	/* Eval/evaluate_fsize.scm 467 */
										BgL_test2688z00_5327 = ((bool_t) 0);
									}
								else
									{	/* Eval/evaluate_fsize.scm 467 */
										BgL_test2688z00_5327 = ((bool_t) 1);
									}
								if (BgL_test2688z00_5327)
									{	/* Eval/evaluate_fsize.scm 467 */
										obj_t BgL_arg1806z00_4298;

										BgL_arg1806z00_4298 = CDR(((obj_t) BgL_l1233z00_4297));
										{
											obj_t BgL_l1233z00_5337;

											BgL_l1233z00_5337 = BgL_arg1806z00_4298;
											BgL_l1233z00_4297 = BgL_l1233z00_5337;
											goto BgL_zc3z04anonymousza31804ze3z87_4296;
										}
									}
								else
									{	/* Eval/evaluate_fsize.scm 467 */
										BgL_test2686z00_5321 = ((bool_t) 0);
									}
							}
					}
				}
				if (BgL_test2686z00_5321)
					{	/* Eval/evaluate_fsize.scm 468 */
						BgL_ev_exprz00_bglt BgL_arg1803z00_4299;

						BgL_arg1803z00_4299 =
							(((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt)
										((BgL_ev_letrecz00_bglt) BgL_ez00_3952))))->BgL_bodyz00);
						return
							BGl_tailposz00zz__evaluate_fsiza7eza7(BgL_arg1803z00_4299,
							((BgL_ev_varz00_bglt) BgL_vz00_3953));
					}
				else
					{	/* Eval/evaluate_fsize.scm 467 */
						return BFALSE;
					}
			}
		}

	}



/* &tailpos-ev_let*1417 */
	obj_t BGl_z62tailposzd2ev_letza21417z12zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3954, obj_t BgL_ez00_3955, obj_t BgL_vz00_3956)
	{
		{	/* Eval/evaluate_fsize.scm 460 */
			{	/* Eval/evaluate_fsize.scm 462 */
				bool_t BgL_test2690z00_5343;

				{	/* Eval/evaluate_fsize.scm 462 */
					obj_t BgL_g1231z00_4302;

					BgL_g1231z00_4302 =
						(((BgL_ev_binderz00_bglt) COBJECT(
								((BgL_ev_binderz00_bglt)
									((BgL_ev_letza2za2_bglt) BgL_ez00_3955))))->BgL_valsz00);
					{
						obj_t BgL_l1229z00_4304;

						BgL_l1229z00_4304 = BgL_g1231z00_4302;
					BgL_zc3z04anonymousza31798ze3z87_4303:
						if (NULLP(BgL_l1229z00_4304))
							{	/* Eval/evaluate_fsize.scm 462 */
								BgL_test2690z00_5343 = ((bool_t) 1);
							}
						else
							{	/* Eval/evaluate_fsize.scm 462 */
								bool_t BgL_test2692z00_5349;

								if (CBOOL(BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
											((BgL_ev_exprz00_bglt)
												CAR(
													((obj_t) BgL_l1229z00_4304))),
											((BgL_ev_varz00_bglt) BgL_vz00_3956))))
									{	/* Eval/evaluate_fsize.scm 462 */
										BgL_test2692z00_5349 = ((bool_t) 0);
									}
								else
									{	/* Eval/evaluate_fsize.scm 462 */
										BgL_test2692z00_5349 = ((bool_t) 1);
									}
								if (BgL_test2692z00_5349)
									{	/* Eval/evaluate_fsize.scm 462 */
										obj_t BgL_arg1800z00_4305;

										BgL_arg1800z00_4305 = CDR(((obj_t) BgL_l1229z00_4304));
										{
											obj_t BgL_l1229z00_5359;

											BgL_l1229z00_5359 = BgL_arg1800z00_4305;
											BgL_l1229z00_4304 = BgL_l1229z00_5359;
											goto BgL_zc3z04anonymousza31798ze3z87_4303;
										}
									}
								else
									{	/* Eval/evaluate_fsize.scm 462 */
										BgL_test2690z00_5343 = ((bool_t) 0);
									}
							}
					}
				}
				if (BgL_test2690z00_5343)
					{	/* Eval/evaluate_fsize.scm 463 */
						BgL_ev_exprz00_bglt BgL_arg1797z00_4306;

						BgL_arg1797z00_4306 =
							(((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt)
										((BgL_ev_letza2za2_bglt) BgL_ez00_3955))))->BgL_bodyz00);
						return
							BGl_tailposz00zz__evaluate_fsiza7eza7(BgL_arg1797z00_4306,
							((BgL_ev_varz00_bglt) BgL_vz00_3956));
					}
				else
					{	/* Eval/evaluate_fsize.scm 462 */
						return BFALSE;
					}
			}
		}

	}



/* &tailpos-ev_let1415 */
	obj_t BGl_z62tailposzd2ev_let1415zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3957, obj_t BgL_ez00_3958, obj_t BgL_vz00_3959)
	{
		{	/* Eval/evaluate_fsize.scm 455 */
			{	/* Eval/evaluate_fsize.scm 457 */
				bool_t BgL_test2694z00_5365;

				{	/* Eval/evaluate_fsize.scm 457 */
					obj_t BgL_g1227z00_4309;

					BgL_g1227z00_4309 =
						(((BgL_ev_binderz00_bglt) COBJECT(
								((BgL_ev_binderz00_bglt)
									((BgL_ev_letz00_bglt) BgL_ez00_3958))))->BgL_valsz00);
					{
						obj_t BgL_l1225z00_4311;

						BgL_l1225z00_4311 = BgL_g1227z00_4309;
					BgL_zc3z04anonymousza31793ze3z87_4310:
						if (NULLP(BgL_l1225z00_4311))
							{	/* Eval/evaluate_fsize.scm 457 */
								BgL_test2694z00_5365 = ((bool_t) 1);
							}
						else
							{	/* Eval/evaluate_fsize.scm 457 */
								bool_t BgL_test2696z00_5371;

								if (CBOOL(BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
											((BgL_ev_exprz00_bglt)
												CAR(
													((obj_t) BgL_l1225z00_4311))),
											((BgL_ev_varz00_bglt) BgL_vz00_3959))))
									{	/* Eval/evaluate_fsize.scm 457 */
										BgL_test2696z00_5371 = ((bool_t) 0);
									}
								else
									{	/* Eval/evaluate_fsize.scm 457 */
										BgL_test2696z00_5371 = ((bool_t) 1);
									}
								if (BgL_test2696z00_5371)
									{	/* Eval/evaluate_fsize.scm 457 */
										obj_t BgL_arg1795z00_4312;

										BgL_arg1795z00_4312 = CDR(((obj_t) BgL_l1225z00_4311));
										{
											obj_t BgL_l1225z00_5381;

											BgL_l1225z00_5381 = BgL_arg1795z00_4312;
											BgL_l1225z00_4311 = BgL_l1225z00_5381;
											goto BgL_zc3z04anonymousza31793ze3z87_4310;
										}
									}
								else
									{	/* Eval/evaluate_fsize.scm 457 */
										BgL_test2694z00_5365 = ((bool_t) 0);
									}
							}
					}
				}
				if (BgL_test2694z00_5365)
					{	/* Eval/evaluate_fsize.scm 458 */
						BgL_ev_exprz00_bglt BgL_arg1792z00_4313;

						BgL_arg1792z00_4313 =
							(((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt)
										((BgL_ev_letz00_bglt) BgL_ez00_3958))))->BgL_bodyz00);
						return
							BGl_tailposz00zz__evaluate_fsiza7eza7(BgL_arg1792z00_4313,
							((BgL_ev_varz00_bglt) BgL_vz00_3959));
					}
				else
					{	/* Eval/evaluate_fsize.scm 457 */
						return BFALSE;
					}
			}
		}

	}



/* &tailpos-ev_synchroni1413 */
	obj_t BGl_z62tailposzd2ev_synchroni1413zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3960, obj_t BgL_ez00_3961, obj_t BgL_vz00_3962)
	{
		{	/* Eval/evaluate_fsize.scm 451 */
			{	/* Eval/evaluate_fsize.scm 452 */
				bool_t BgL_tmpz00_5387;

				{	/* Eval/evaluate_fsize.scm 453 */
					obj_t BgL__andtest_1135z00_4316;

					BgL__andtest_1135z00_4316 =
						BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
						(((BgL_ev_synchroniza7eza7_bglt) COBJECT(
									((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_3961)))->
							BgL_mutexz00), ((BgL_ev_varz00_bglt) BgL_vz00_3962));
					if (CBOOL(BgL__andtest_1135z00_4316))
						{	/* Eval/evaluate_fsize.scm 453 */
							BgL_tmpz00_5387 = ((bool_t) 0);
						}
					else
						{	/* Eval/evaluate_fsize.scm 453 */
							obj_t BgL__andtest_1136z00_4317;

							BgL__andtest_1136z00_4317 =
								BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
								(((BgL_ev_synchroniza7eza7_bglt) COBJECT(
											((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_3961)))->
									BgL_prelockz00), ((BgL_ev_varz00_bglt) BgL_vz00_3962));
							if (CBOOL(BgL__andtest_1136z00_4317))
								{	/* Eval/evaluate_fsize.scm 453 */
									BgL_tmpz00_5387 = ((bool_t) 0);
								}
							else
								{	/* Eval/evaluate_fsize.scm 453 */
									bool_t BgL_test2700z00_5400;

									{	/* Eval/evaluate_fsize.scm 453 */
										BgL_ev_exprz00_bglt BgL_arg1789z00_4318;

										BgL_arg1789z00_4318 =
											(((BgL_ev_synchroniza7eza7_bglt) COBJECT(
													((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_3961)))->
											BgL_bodyz00);
										BgL_test2700z00_5400 =
											CBOOL(BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7
											(BgL_arg1789z00_4318,
												((BgL_ev_varz00_bglt) BgL_vz00_3962)));
									}
									if (BgL_test2700z00_5400)
										{	/* Eval/evaluate_fsize.scm 453 */
											BgL_tmpz00_5387 = ((bool_t) 0);
										}
									else
										{	/* Eval/evaluate_fsize.scm 453 */
											BgL_tmpz00_5387 = ((bool_t) 1);
										}
								}
						}
				}
				return BBOOL(BgL_tmpz00_5387);
			}
		}

	}



/* &tailpos-ev_with-hand1411 */
	obj_t BGl_z62tailposzd2ev_withzd2hand1411z62zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3963, obj_t BgL_ez00_3964, obj_t BgL_vz00_3965)
	{
		{	/* Eval/evaluate_fsize.scm 447 */
			{	/* Eval/evaluate_fsize.scm 448 */
				bool_t BgL_tmpz00_5407;

				{	/* Eval/evaluate_fsize.scm 449 */
					obj_t BgL__andtest_1133z00_4321;

					BgL__andtest_1133z00_4321 =
						BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
						(((BgL_ev_withzd2handlerzd2_bglt) COBJECT(
									((BgL_ev_withzd2handlerzd2_bglt) BgL_ez00_3964)))->
							BgL_handlerz00), ((BgL_ev_varz00_bglt) BgL_vz00_3965));
					if (CBOOL(BgL__andtest_1133z00_4321))
						{	/* Eval/evaluate_fsize.scm 449 */
							BgL_tmpz00_5407 = ((bool_t) 0);
						}
					else
						{	/* Eval/evaluate_fsize.scm 449 */
							bool_t BgL_test2702z00_5414;

							{	/* Eval/evaluate_fsize.scm 449 */
								BgL_ev_exprz00_bglt BgL_arg1784z00_4322;

								BgL_arg1784z00_4322 =
									(((BgL_ev_withzd2handlerzd2_bglt) COBJECT(
											((BgL_ev_withzd2handlerzd2_bglt) BgL_ez00_3964)))->
									BgL_bodyz00);
								BgL_test2702z00_5414 =
									CBOOL(BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7
									(BgL_arg1784z00_4322, ((BgL_ev_varz00_bglt) BgL_vz00_3965)));
							}
							if (BgL_test2702z00_5414)
								{	/* Eval/evaluate_fsize.scm 449 */
									BgL_tmpz00_5407 = ((bool_t) 0);
								}
							else
								{	/* Eval/evaluate_fsize.scm 449 */
									BgL_tmpz00_5407 = ((bool_t) 1);
								}
						}
				}
				return BBOOL(BgL_tmpz00_5407);
			}
		}

	}



/* &tailpos-ev_unwind-pr1409 */
	obj_t BGl_z62tailposzd2ev_unwindzd2pr1409z62zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3966, obj_t BgL_ez00_3967, obj_t BgL_vz00_3968)
	{
		{	/* Eval/evaluate_fsize.scm 443 */
			{	/* Eval/evaluate_fsize.scm 444 */
				bool_t BgL_tmpz00_5421;

				{	/* Eval/evaluate_fsize.scm 445 */
					obj_t BgL__andtest_1131z00_4325;

					BgL__andtest_1131z00_4325 =
						BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
						(((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(
									((BgL_ev_unwindzd2protectzd2_bglt) BgL_ez00_3967)))->
							BgL_ez00), ((BgL_ev_varz00_bglt) BgL_vz00_3968));
					if (CBOOL(BgL__andtest_1131z00_4325))
						{	/* Eval/evaluate_fsize.scm 445 */
							BgL_tmpz00_5421 = ((bool_t) 0);
						}
					else
						{	/* Eval/evaluate_fsize.scm 445 */
							bool_t BgL_test2704z00_5428;

							{	/* Eval/evaluate_fsize.scm 445 */
								BgL_ev_exprz00_bglt BgL_arg1780z00_4326;

								BgL_arg1780z00_4326 =
									(((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(
											((BgL_ev_unwindzd2protectzd2_bglt) BgL_ez00_3967)))->
									BgL_bodyz00);
								BgL_test2704z00_5428 =
									CBOOL(BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7
									(BgL_arg1780z00_4326, ((BgL_ev_varz00_bglt) BgL_vz00_3968)));
							}
							if (BgL_test2704z00_5428)
								{	/* Eval/evaluate_fsize.scm 445 */
									BgL_tmpz00_5421 = ((bool_t) 0);
								}
							else
								{	/* Eval/evaluate_fsize.scm 445 */
									BgL_tmpz00_5421 = ((bool_t) 1);
								}
						}
				}
				return BBOOL(BgL_tmpz00_5421);
			}
		}

	}



/* &tailpos-ev_bind-exit1407 */
	obj_t BGl_z62tailposzd2ev_bindzd2exit1407z62zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3969, obj_t BgL_ez00_3970, obj_t BgL_vz00_3971)
	{
		{	/* Eval/evaluate_fsize.scm 439 */
			{	/* Eval/evaluate_fsize.scm 440 */
				bool_t BgL_tmpz00_5435;

				{	/* Eval/evaluate_fsize.scm 441 */
					bool_t BgL_test2705z00_5436;

					{	/* Eval/evaluate_fsize.scm 441 */
						BgL_ev_exprz00_bglt BgL_arg1777z00_4329;

						BgL_arg1777z00_4329 =
							(((BgL_ev_bindzd2exitzd2_bglt) COBJECT(
									((BgL_ev_bindzd2exitzd2_bglt) BgL_ez00_3970)))->BgL_bodyz00);
						BgL_test2705z00_5436 =
							CBOOL(BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(BgL_arg1777z00_4329,
								((BgL_ev_varz00_bglt) BgL_vz00_3971)));
					}
					if (BgL_test2705z00_5436)
						{	/* Eval/evaluate_fsize.scm 441 */
							BgL_tmpz00_5435 = ((bool_t) 0);
						}
					else
						{	/* Eval/evaluate_fsize.scm 441 */
							BgL_tmpz00_5435 = ((bool_t) 1);
						}
				}
				return BBOOL(BgL_tmpz00_5435);
			}
		}

	}



/* &tailpos-ev_setlocal1405 */
	obj_t BGl_z62tailposzd2ev_setlocal1405zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3972, obj_t BgL_ez00_3973, obj_t BgL_varz00_3974)
	{
		{	/* Eval/evaluate_fsize.scm 435 */
			{	/* Eval/evaluate_fsize.scm 436 */
				bool_t BgL_tmpz00_5443;

				if (
					(((obj_t)
							(((BgL_ev_setlocalz00_bglt) COBJECT(
										((BgL_ev_setlocalz00_bglt) BgL_ez00_3973)))->BgL_vz00)) ==
						((obj_t) ((BgL_ev_varz00_bglt) BgL_varz00_3974))))
					{	/* Eval/evaluate_fsize.scm 437 */
						BgL_tmpz00_5443 = ((bool_t) 0);
					}
				else
					{	/* Eval/evaluate_fsize.scm 437 */
						bool_t BgL_test2707z00_5451;

						{	/* Eval/evaluate_fsize.scm 437 */
							BgL_ev_exprz00_bglt BgL_arg1773z00_4332;

							BgL_arg1773z00_4332 =
								(((BgL_ev_hookz00_bglt) COBJECT(
										((BgL_ev_hookz00_bglt)
											((BgL_ev_setlocalz00_bglt) BgL_ez00_3973))))->BgL_ez00);
							BgL_test2707z00_5451 =
								CBOOL(BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7
								(BgL_arg1773z00_4332, ((BgL_ev_varz00_bglt) BgL_varz00_3974)));
						}
						if (BgL_test2707z00_5451)
							{	/* Eval/evaluate_fsize.scm 437 */
								BgL_tmpz00_5443 = ((bool_t) 0);
							}
						else
							{	/* Eval/evaluate_fsize.scm 437 */
								BgL_tmpz00_5443 = ((bool_t) 1);
							}
					}
				return BBOOL(BgL_tmpz00_5443);
			}
		}

	}



/* &tailpos-ev_hook1403 */
	obj_t BGl_z62tailposzd2ev_hook1403zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3975, obj_t BgL_ez00_3976, obj_t BgL_vz00_3977)
	{
		{	/* Eval/evaluate_fsize.scm 431 */
			{	/* Eval/evaluate_fsize.scm 432 */
				bool_t BgL_tmpz00_5459;

				{	/* Eval/evaluate_fsize.scm 433 */
					bool_t BgL_test2708z00_5460;

					{	/* Eval/evaluate_fsize.scm 433 */
						BgL_ev_exprz00_bglt BgL_arg1770z00_4335;

						BgL_arg1770z00_4335 =
							(((BgL_ev_hookz00_bglt) COBJECT(
									((BgL_ev_hookz00_bglt) BgL_ez00_3976)))->BgL_ez00);
						BgL_test2708z00_5460 =
							CBOOL(BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(BgL_arg1770z00_4335,
								((BgL_ev_varz00_bglt) BgL_vz00_3977)));
					}
					if (BgL_test2708z00_5460)
						{	/* Eval/evaluate_fsize.scm 433 */
							BgL_tmpz00_5459 = ((bool_t) 0);
						}
					else
						{	/* Eval/evaluate_fsize.scm 433 */
							BgL_tmpz00_5459 = ((bool_t) 1);
						}
				}
				return BBOOL(BgL_tmpz00_5459);
			}
		}

	}



/* &tailpos-ev_prog21401 */
	obj_t BGl_z62tailposzd2ev_prog21401zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3978, obj_t BgL_ez00_3979, obj_t BgL_vz00_3980)
	{
		{	/* Eval/evaluate_fsize.scm 427 */
			{	/* Eval/evaluate_fsize.scm 429 */
				obj_t BgL__andtest_1125z00_4338;

				BgL__andtest_1125z00_4338 =
					BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
					(((BgL_ev_prog2z00_bglt) COBJECT(
								((BgL_ev_prog2z00_bglt) BgL_ez00_3979)))->BgL_e1z00),
					((BgL_ev_varz00_bglt) BgL_vz00_3980));
				if (CBOOL(BgL__andtest_1125z00_4338))
					{	/* Eval/evaluate_fsize.scm 429 */
						return BFALSE;
					}
				else
					{	/* Eval/evaluate_fsize.scm 429 */
						return
							BGl_tailposz00zz__evaluate_fsiza7eza7(
							(((BgL_ev_prog2z00_bglt) COBJECT(
										((BgL_ev_prog2z00_bglt) BgL_ez00_3979)))->BgL_e2z00),
							((BgL_ev_varz00_bglt) BgL_vz00_3980));
					}
			}
		}

	}



/* &tailpos-ev_list1399 */
	obj_t BGl_z62tailposzd2ev_list1399zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3981, obj_t BgL_ez00_3982, obj_t BgL_vz00_3983)
	{
		{	/* Eval/evaluate_fsize.scm 419 */
			{
				obj_t BgL_lz00_4342;

				BgL_lz00_4342 =
					(((BgL_ev_listz00_bglt) COBJECT(
							((BgL_ev_listz00_bglt) BgL_ez00_3982)))->BgL_argsz00);
			BgL_recz00_4341:
				if (NULLP(CDR(((obj_t) BgL_lz00_4342))))
					{	/* Eval/evaluate_fsize.scm 423 */
						obj_t BgL_arg1761z00_4343;

						BgL_arg1761z00_4343 = CAR(((obj_t) BgL_lz00_4342));
						return
							BGl_tailposz00zz__evaluate_fsiza7eza7(
							((BgL_ev_exprz00_bglt) BgL_arg1761z00_4343),
							((BgL_ev_varz00_bglt) BgL_vz00_3983));
					}
				else
					{	/* Eval/evaluate_fsize.scm 424 */
						obj_t BgL__andtest_1123z00_4344;

						{	/* Eval/evaluate_fsize.scm 424 */
							obj_t BgL_arg1763z00_4345;

							BgL_arg1763z00_4345 = CAR(((obj_t) BgL_lz00_4342));
							BgL__andtest_1123z00_4344 =
								BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
								((BgL_ev_exprz00_bglt) BgL_arg1763z00_4345),
								((BgL_ev_varz00_bglt) BgL_vz00_3983));
						}
						if (CBOOL(BgL__andtest_1123z00_4344))
							{	/* Eval/evaluate_fsize.scm 424 */
								return BFALSE;
							}
						else
							{	/* Eval/evaluate_fsize.scm 425 */
								obj_t BgL_arg1762z00_4346;

								BgL_arg1762z00_4346 = CDR(((obj_t) BgL_lz00_4342));
								{
									obj_t BgL_lz00_5495;

									BgL_lz00_5495 = BgL_arg1762z00_4346;
									BgL_lz00_4342 = BgL_lz00_5495;
									goto BgL_recz00_4341;
								}
							}
					}
			}
		}

	}



/* &tailpos-ev_if1397 */
	obj_t BGl_z62tailposzd2ev_if1397zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3984, obj_t BgL_ez00_3985, obj_t BgL_vz00_3986)
	{
		{	/* Eval/evaluate_fsize.scm 415 */
			{	/* Eval/evaluate_fsize.scm 417 */
				obj_t BgL__andtest_1120z00_4349;

				BgL__andtest_1120z00_4349 =
					BGl_hasvarzf3zf3zz__evaluate_fsiza7eza7(
					(((BgL_ev_ifz00_bglt) COBJECT(
								((BgL_ev_ifz00_bglt) BgL_ez00_3985)))->BgL_pz00),
					((BgL_ev_varz00_bglt) BgL_vz00_3986));
				if (CBOOL(BgL__andtest_1120z00_4349))
					{	/* Eval/evaluate_fsize.scm 417 */
						return BFALSE;
					}
				else
					{	/* Eval/evaluate_fsize.scm 417 */
						obj_t BgL__andtest_1121z00_4350;

						BgL__andtest_1121z00_4350 =
							BGl_tailposz00zz__evaluate_fsiza7eza7(
							(((BgL_ev_ifz00_bglt) COBJECT(
										((BgL_ev_ifz00_bglt) BgL_ez00_3985)))->BgL_tz00),
							((BgL_ev_varz00_bglt) BgL_vz00_3986));
						if (CBOOL(BgL__andtest_1121z00_4350))
							{	/* Eval/evaluate_fsize.scm 417 */
								return
									BGl_tailposz00zz__evaluate_fsiza7eza7(
									(((BgL_ev_ifz00_bglt) COBJECT(
												((BgL_ev_ifz00_bglt) BgL_ez00_3985)))->BgL_ez00),
									((BgL_ev_varz00_bglt) BgL_vz00_3986));
							}
						else
							{	/* Eval/evaluate_fsize.scm 417 */
								return BFALSE;
							}
					}
			}
		}

	}



/* &tailpos-ev_litt1395 */
	obj_t BGl_z62tailposzd2ev_litt1395zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3987, obj_t BgL_ez00_3988, obj_t BgL_vz00_3989)
	{
		{	/* Eval/evaluate_fsize.scm 412 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &tailpos-ev_global1393 */
	obj_t BGl_z62tailposzd2ev_global1393zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3990, obj_t BgL_ez00_3991, obj_t BgL_vz00_3992)
	{
		{	/* Eval/evaluate_fsize.scm 409 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &tailpos-ev_var1391 */
	obj_t BGl_z62tailposzd2ev_var1391zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3993, obj_t BgL_ez00_3994, obj_t BgL_vz00_3995)
	{
		{	/* Eval/evaluate_fsize.scm 406 */
			{	/* Eval/evaluate_fsize.scm 407 */
				bool_t BgL_tmpz00_5516;

				if (
					(((obj_t)
							((BgL_ev_varz00_bglt) BgL_ez00_3994)) ==
						((obj_t) ((BgL_ev_varz00_bglt) BgL_vz00_3995))))
					{	/* Eval/evaluate_fsize.scm 407 */
						BgL_tmpz00_5516 = ((bool_t) 0);
					}
				else
					{	/* Eval/evaluate_fsize.scm 407 */
						BgL_tmpz00_5516 = ((bool_t) 1);
					}
				return BBOOL(BgL_tmpz00_5516);
			}
		}

	}



/* &subst_goto-ev_abs1387 */
	obj_t BGl_z62subst_gotozd2ev_abs1387zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_3996, obj_t BgL_ez00_3997, obj_t BgL_varsz00_3998,
		obj_t BgL_lblsz00_3999)
	{
		{	/* Eval/evaluate_fsize.scm 394 */
			{
				BgL_ev_absz00_bglt BgL_auxz00_5524;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5525;

					{	/* Eval/evaluate_fsize.scm 396 */
						BgL_ev_exprz00_bglt BgL_arg1752z00_4358;

						BgL_arg1752z00_4358 =
							(((BgL_ev_absz00_bglt) COBJECT(
									((BgL_ev_absz00_bglt) BgL_ez00_3997)))->BgL_bodyz00);
						BgL_auxz00_5525 =
							((BgL_ev_exprz00_bglt)
							BGl_subst_gotoz00zz__evaluate_fsiza7eza7(BgL_arg1752z00_4358,
								BgL_varsz00_3998, BgL_lblsz00_3999));
					}
					((((BgL_ev_absz00_bglt) COBJECT(
									((BgL_ev_absz00_bglt) BgL_ez00_3997)))->BgL_bodyz00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5525), BUNSPEC);
				}
				BgL_auxz00_5524 = ((BgL_ev_absz00_bglt) BgL_ez00_3997);
				return ((obj_t) BgL_auxz00_5524);
			}
		}

	}



/* &subst_goto-ev_app1385 */
	obj_t BGl_z62subst_gotozd2ev_app1385zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4000, obj_t BgL_ez00_4001, obj_t BgL_varsz00_4002,
		obj_t BgL_lblsz00_4003)
	{
		{	/* Eval/evaluate_fsize.scm 384 */
			{
				BgL_ev_exprz00_bglt BgL_auxz00_5534;

				{	/* Eval/evaluate_fsize.scm 387 */
					obj_t BgL_arg1745z00_4360;

					BgL_arg1745z00_4360 =
						(((BgL_ev_appz00_bglt) COBJECT(
								((BgL_ev_appz00_bglt) BgL_ez00_4001)))->BgL_argsz00);
					{
						obj_t BgL_lz00_4362;

						BgL_lz00_4362 = BgL_arg1745z00_4360;
					BgL_recz00_4361:
						if (NULLP(BgL_lz00_4362))
							{	/* Eval/evaluate_fsize.scm 294 */
								((bool_t) 0);
							}
						else
							{	/* Eval/evaluate_fsize.scm 294 */
								{	/* Eval/evaluate_fsize.scm 295 */
									obj_t BgL_arg1564z00_4363;

									{	/* Eval/evaluate_fsize.scm 295 */
										obj_t BgL_arg1565z00_4364;

										BgL_arg1565z00_4364 = CAR(((obj_t) BgL_lz00_4362));
										BgL_arg1564z00_4363 =
											BGl_subst_gotoz00zz__evaluate_fsiza7eza7(
											((BgL_ev_exprz00_bglt) BgL_arg1565z00_4364),
											BgL_varsz00_4002, BgL_lblsz00_4003);
									}
									{	/* Eval/evaluate_fsize.scm 295 */
										obj_t BgL_tmpz00_5543;

										BgL_tmpz00_5543 = ((obj_t) BgL_lz00_4362);
										SET_CAR(BgL_tmpz00_5543, BgL_arg1564z00_4363);
									}
								}
								{	/* Eval/evaluate_fsize.scm 296 */
									obj_t BgL_arg1566z00_4365;

									BgL_arg1566z00_4365 = CDR(((obj_t) BgL_lz00_4362));
									{
										obj_t BgL_lz00_5548;

										BgL_lz00_5548 = BgL_arg1566z00_4365;
										BgL_lz00_4362 = BgL_lz00_5548;
										goto BgL_recz00_4361;
									}
								}
							}
					}
				}
				if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
							((obj_t)
								(((BgL_ev_appz00_bglt) COBJECT(
											((BgL_ev_appz00_bglt) BgL_ez00_4001)))->BgL_funz00)),
							BgL_varsz00_4002)))
					{	/* Eval/evaluate_fsize.scm 389 */
						BgL_ev_gotoz00_bglt BgL_new1116z00_4366;

						{	/* Eval/evaluate_fsize.scm 389 */
							BgL_ev_gotoz00_bglt BgL_new1114z00_4367;

							BgL_new1114z00_4367 =
								((BgL_ev_gotoz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_ev_gotoz00_bgl))));
							{	/* Eval/evaluate_fsize.scm 389 */
								long BgL_arg1748z00_4368;

								{	/* Eval/evaluate_fsize.scm 389 */
									long BgL_res2280z00_4369;

									BgL_res2280z00_4369 =
										BGL_CLASS_INDEX(BGl_ev_gotoz00zz__evaluate_typesz00);
									BgL_arg1748z00_4368 = BgL_res2280z00_4369;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1114z00_4367),
									BgL_arg1748z00_4368);
							}
							BgL_new1116z00_4366 = BgL_new1114z00_4367;
						}
						((((BgL_ev_gotoz00_bglt) COBJECT(BgL_new1116z00_4366))->
								BgL_locz00) =
							((obj_t) (((BgL_ev_appz00_bglt) COBJECT(((BgL_ev_appz00_bglt)
												BgL_ez00_4001)))->BgL_locz00)), BUNSPEC);
						((((BgL_ev_gotoz00_bglt) COBJECT(BgL_new1116z00_4366))->
								BgL_labelz00) =
							((BgL_ev_varz00_bglt) ((BgL_ev_varz00_bglt) (((BgL_ev_appz00_bglt)
											COBJECT(((BgL_ev_appz00_bglt) BgL_ez00_4001)))->
										BgL_funz00))), BUNSPEC);
						((((BgL_ev_gotoz00_bglt) COBJECT(BgL_new1116z00_4366))->
								BgL_labelsz00) =
							((BgL_ev_labelsz00_bglt) ((BgL_ev_labelsz00_bglt)
									BgL_lblsz00_4003)), BUNSPEC);
						((((BgL_ev_gotoz00_bglt) COBJECT(BgL_new1116z00_4366))->
								BgL_argsz00) =
							((obj_t) (((BgL_ev_appz00_bglt) COBJECT(((BgL_ev_appz00_bglt)
												BgL_ez00_4001)))->BgL_argsz00)), BUNSPEC);
						BgL_auxz00_5534 = ((BgL_ev_exprz00_bglt) BgL_new1116z00_4366);
					}
				else
					{	/* Eval/evaluate_fsize.scm 388 */
						{
							BgL_ev_exprz00_bglt BgL_auxz00_5572;

							{	/* Eval/evaluate_fsize.scm 390 */
								BgL_ev_exprz00_bglt BgL_arg1750z00_4370;

								BgL_arg1750z00_4370 =
									(((BgL_ev_appz00_bglt) COBJECT(
											((BgL_ev_appz00_bglt) BgL_ez00_4001)))->BgL_funz00);
								BgL_auxz00_5572 =
									((BgL_ev_exprz00_bglt)
									BGl_subst_gotoz00zz__evaluate_fsiza7eza7(BgL_arg1750z00_4370,
										BgL_varsz00_4002, BgL_lblsz00_4003));
							}
							((((BgL_ev_appz00_bglt) COBJECT(
											((BgL_ev_appz00_bglt) BgL_ez00_4001)))->BgL_funz00) =
								((BgL_ev_exprz00_bglt) BgL_auxz00_5572), BUNSPEC);
						}
						((((BgL_ev_appz00_bglt) COBJECT(
										((BgL_ev_appz00_bglt) BgL_ez00_4001)))->BgL_tailzf3zf3) =
							((obj_t) BFALSE), BUNSPEC);
						BgL_auxz00_5534 =
							((BgL_ev_exprz00_bglt) ((BgL_ev_appz00_bglt) BgL_ez00_4001));
					}
				return ((obj_t) BgL_auxz00_5534);
			}
		}

	}



/* &subst_goto-ev_goto1383 */
	obj_t BGl_z62subst_gotozd2ev_goto1383zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4004, obj_t BgL_ez00_4005, obj_t BgL_varsz00_4006,
		obj_t BgL_lblsz00_4007)
	{
		{	/* Eval/evaluate_fsize.scm 372 */
			{
				BgL_ev_gotoz00_bglt BgL_auxz00_5584;

				{	/* Eval/evaluate_fsize.scm 374 */
					obj_t BgL_arg1744z00_4372;

					BgL_arg1744z00_4372 =
						(((BgL_ev_gotoz00_bglt) COBJECT(
								((BgL_ev_gotoz00_bglt) BgL_ez00_4005)))->BgL_argsz00);
					{
						obj_t BgL_lz00_4374;

						BgL_lz00_4374 = BgL_arg1744z00_4372;
					BgL_recz00_4373:
						if (NULLP(BgL_lz00_4374))
							{	/* Eval/evaluate_fsize.scm 294 */
								((bool_t) 0);
							}
						else
							{	/* Eval/evaluate_fsize.scm 294 */
								{	/* Eval/evaluate_fsize.scm 295 */
									obj_t BgL_arg1564z00_4375;

									{	/* Eval/evaluate_fsize.scm 295 */
										obj_t BgL_arg1565z00_4376;

										BgL_arg1565z00_4376 = CAR(((obj_t) BgL_lz00_4374));
										BgL_arg1564z00_4375 =
											BGl_subst_gotoz00zz__evaluate_fsiza7eza7(
											((BgL_ev_exprz00_bglt) BgL_arg1565z00_4376),
											BgL_varsz00_4006, BgL_lblsz00_4007);
									}
									{	/* Eval/evaluate_fsize.scm 295 */
										obj_t BgL_tmpz00_5593;

										BgL_tmpz00_5593 = ((obj_t) BgL_lz00_4374);
										SET_CAR(BgL_tmpz00_5593, BgL_arg1564z00_4375);
									}
								}
								{	/* Eval/evaluate_fsize.scm 296 */
									obj_t BgL_arg1566z00_4377;

									BgL_arg1566z00_4377 = CDR(((obj_t) BgL_lz00_4374));
									{
										obj_t BgL_lz00_5598;

										BgL_lz00_5598 = BgL_arg1566z00_4377;
										BgL_lz00_4374 = BgL_lz00_5598;
										goto BgL_recz00_4373;
									}
								}
							}
					}
				}
				BgL_auxz00_5584 = ((BgL_ev_gotoz00_bglt) BgL_ez00_4005);
				return ((obj_t) BgL_auxz00_5584);
			}
		}

	}



/* &subst_goto-ev_labels1381 */
	obj_t BGl_z62subst_gotozd2ev_labels1381zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4008, obj_t BgL_ez00_4009, obj_t BgL_varsz00_4010,
		obj_t BgL_lblsz00_4011)
	{
		{	/* Eval/evaluate_fsize.scm 363 */
			{
				BgL_ev_labelsz00_bglt BgL_auxz00_5601;

				{
					obj_t BgL_lz00_4380;

					BgL_lz00_4380 =
						(((BgL_ev_labelsz00_bglt) COBJECT(
								((BgL_ev_labelsz00_bglt) BgL_ez00_4009)))->BgL_valsz00);
				BgL_recz00_4379:
					if (NULLP(BgL_lz00_4380))
						{	/* Eval/evaluate_fsize.scm 366 */
							((bool_t) 0);
						}
					else
						{	/* Eval/evaluate_fsize.scm 366 */
							{	/* Eval/evaluate_fsize.scm 367 */
								obj_t BgL_arg1739z00_4381;
								obj_t BgL_arg1740z00_4382;

								BgL_arg1739z00_4381 = CAR(((obj_t) BgL_lz00_4380));
								{	/* Eval/evaluate_fsize.scm 367 */
									obj_t BgL_arg1741z00_4383;

									{	/* Eval/evaluate_fsize.scm 367 */
										obj_t BgL_pairz00_4384;

										BgL_pairz00_4384 = CAR(((obj_t) BgL_lz00_4380));
										BgL_arg1741z00_4383 = CDR(BgL_pairz00_4384);
									}
									BgL_arg1740z00_4382 =
										BGl_subst_gotoz00zz__evaluate_fsiza7eza7(
										((BgL_ev_exprz00_bglt) BgL_arg1741z00_4383),
										BgL_varsz00_4010, BgL_lblsz00_4011);
								}
								{	/* Eval/evaluate_fsize.scm 367 */
									obj_t BgL_tmpz00_5611;

									BgL_tmpz00_5611 = ((obj_t) BgL_arg1739z00_4381);
									SET_CDR(BgL_tmpz00_5611, BgL_arg1740z00_4382);
								}
							}
							{	/* Eval/evaluate_fsize.scm 368 */
								obj_t BgL_arg1742z00_4385;

								BgL_arg1742z00_4385 = CDR(((obj_t) BgL_lz00_4380));
								{
									obj_t BgL_lz00_5616;

									BgL_lz00_5616 = BgL_arg1742z00_4385;
									BgL_lz00_4380 = BgL_lz00_5616;
									goto BgL_recz00_4379;
								}
							}
						}
				}
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5619;

					{	/* Eval/evaluate_fsize.scm 369 */
						BgL_ev_exprz00_bglt BgL_arg1743z00_4386;

						BgL_arg1743z00_4386 =
							(((BgL_ev_labelsz00_bglt) COBJECT(
									((BgL_ev_labelsz00_bglt) BgL_ez00_4009)))->BgL_bodyz00);
						BgL_auxz00_5619 =
							((BgL_ev_exprz00_bglt)
							BGl_subst_gotoz00zz__evaluate_fsiza7eza7(BgL_arg1743z00_4386,
								BgL_varsz00_4010, BgL_lblsz00_4011));
					}
					((((BgL_ev_labelsz00_bglt) COBJECT(
									((BgL_ev_labelsz00_bglt) BgL_ez00_4009)))->BgL_bodyz00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5619), BUNSPEC);
				}
				BgL_auxz00_5601 = ((BgL_ev_labelsz00_bglt) BgL_ez00_4009);
				return ((obj_t) BgL_auxz00_5601);
			}
		}

	}



/* &subst_goto-ev_binder1379 */
	obj_t BGl_z62subst_gotozd2ev_binder1379zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4012, obj_t BgL_ez00_4013, obj_t BgL_varsz00_4014,
		obj_t BgL_lblsz00_4015)
	{
		{	/* Eval/evaluate_fsize.scm 357 */
			{
				BgL_ev_binderz00_bglt BgL_auxz00_5628;

				{	/* Eval/evaluate_fsize.scm 359 */
					obj_t BgL_arg1733z00_4388;

					BgL_arg1733z00_4388 =
						(((BgL_ev_binderz00_bglt) COBJECT(
								((BgL_ev_binderz00_bglt) BgL_ez00_4013)))->BgL_valsz00);
					{
						obj_t BgL_lz00_4390;

						BgL_lz00_4390 = BgL_arg1733z00_4388;
					BgL_recz00_4389:
						if (NULLP(BgL_lz00_4390))
							{	/* Eval/evaluate_fsize.scm 294 */
								((bool_t) 0);
							}
						else
							{	/* Eval/evaluate_fsize.scm 294 */
								{	/* Eval/evaluate_fsize.scm 295 */
									obj_t BgL_arg1564z00_4391;

									{	/* Eval/evaluate_fsize.scm 295 */
										obj_t BgL_arg1565z00_4392;

										BgL_arg1565z00_4392 = CAR(((obj_t) BgL_lz00_4390));
										BgL_arg1564z00_4391 =
											BGl_subst_gotoz00zz__evaluate_fsiza7eza7(
											((BgL_ev_exprz00_bglt) BgL_arg1565z00_4392),
											BgL_varsz00_4014, BgL_lblsz00_4015);
									}
									{	/* Eval/evaluate_fsize.scm 295 */
										obj_t BgL_tmpz00_5637;

										BgL_tmpz00_5637 = ((obj_t) BgL_lz00_4390);
										SET_CAR(BgL_tmpz00_5637, BgL_arg1564z00_4391);
									}
								}
								{	/* Eval/evaluate_fsize.scm 296 */
									obj_t BgL_arg1566z00_4393;

									BgL_arg1566z00_4393 = CDR(((obj_t) BgL_lz00_4390));
									{
										obj_t BgL_lz00_5642;

										BgL_lz00_5642 = BgL_arg1566z00_4393;
										BgL_lz00_4390 = BgL_lz00_5642;
										goto BgL_recz00_4389;
									}
								}
							}
					}
				}
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5643;

					{	/* Eval/evaluate_fsize.scm 360 */
						BgL_ev_exprz00_bglt BgL_arg1734z00_4394;

						BgL_arg1734z00_4394 =
							(((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt) BgL_ez00_4013)))->BgL_bodyz00);
						BgL_auxz00_5643 =
							((BgL_ev_exprz00_bglt)
							BGl_subst_gotoz00zz__evaluate_fsiza7eza7(BgL_arg1734z00_4394,
								BgL_varsz00_4014, BgL_lblsz00_4015));
					}
					((((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt) BgL_ez00_4013)))->BgL_bodyz00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5643), BUNSPEC);
				}
				BgL_auxz00_5628 = ((BgL_ev_binderz00_bglt) BgL_ez00_4013);
				return ((obj_t) BgL_auxz00_5628);
			}
		}

	}



/* &subst_goto-ev_synchr1377 */
	obj_t BGl_z62subst_gotozd2ev_synchr1377zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4016, obj_t BgL_ez00_4017, obj_t BgL_varsz00_4018,
		obj_t BgL_lblsz00_4019)
	{
		{	/* Eval/evaluate_fsize.scm 350 */
			{
				BgL_ev_synchroniza7eza7_bglt BgL_auxz00_5652;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5653;

					{	/* Eval/evaluate_fsize.scm 352 */
						BgL_ev_exprz00_bglt BgL_arg1730z00_4396;

						BgL_arg1730z00_4396 =
							(((BgL_ev_synchroniza7eza7_bglt) COBJECT(
									((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_4017)))->
							BgL_mutexz00);
						BgL_auxz00_5653 =
							((BgL_ev_exprz00_bglt)
							BGl_subst_gotoz00zz__evaluate_fsiza7eza7(BgL_arg1730z00_4396,
								BgL_varsz00_4018, BgL_lblsz00_4019));
					}
					((((BgL_ev_synchroniza7eza7_bglt) COBJECT(
									((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_4017)))->
							BgL_mutexz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5653), BUNSPEC);
				}
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5660;

					{	/* Eval/evaluate_fsize.scm 353 */
						BgL_ev_exprz00_bglt BgL_arg1731z00_4397;

						BgL_arg1731z00_4397 =
							(((BgL_ev_synchroniza7eza7_bglt) COBJECT(
									((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_4017)))->
							BgL_prelockz00);
						BgL_auxz00_5660 =
							((BgL_ev_exprz00_bglt)
							BGl_subst_gotoz00zz__evaluate_fsiza7eza7(BgL_arg1731z00_4397,
								BgL_varsz00_4018, BgL_lblsz00_4019));
					}
					((((BgL_ev_synchroniza7eza7_bglt) COBJECT(
									((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_4017)))->
							BgL_prelockz00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5660), BUNSPEC);
				}
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5667;

					{	/* Eval/evaluate_fsize.scm 354 */
						BgL_ev_exprz00_bglt BgL_arg1732z00_4398;

						BgL_arg1732z00_4398 =
							(((BgL_ev_synchroniza7eza7_bglt) COBJECT(
									((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_4017)))->
							BgL_bodyz00);
						BgL_auxz00_5667 =
							((BgL_ev_exprz00_bglt)
							BGl_subst_gotoz00zz__evaluate_fsiza7eza7(BgL_arg1732z00_4398,
								BgL_varsz00_4018, BgL_lblsz00_4019));
					}
					((((BgL_ev_synchroniza7eza7_bglt) COBJECT(
									((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_4017)))->
							BgL_bodyz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5667), BUNSPEC);
				}
				BgL_auxz00_5652 = ((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_4017);
				return ((obj_t) BgL_auxz00_5652);
			}
		}

	}



/* &subst_goto-ev_with-h1375 */
	obj_t BGl_z62subst_gotozd2ev_withzd2h1375z62zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4020, obj_t BgL_ez00_4021, obj_t BgL_varsz00_4022,
		obj_t BgL_lblsz00_4023)
	{
		{	/* Eval/evaluate_fsize.scm 344 */
			{
				BgL_ev_withzd2handlerzd2_bglt BgL_auxz00_5676;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5677;

					{	/* Eval/evaluate_fsize.scm 346 */
						BgL_ev_exprz00_bglt BgL_arg1728z00_4400;

						BgL_arg1728z00_4400 =
							(((BgL_ev_withzd2handlerzd2_bglt) COBJECT(
									((BgL_ev_withzd2handlerzd2_bglt) BgL_ez00_4021)))->
							BgL_handlerz00);
						BgL_auxz00_5677 =
							((BgL_ev_exprz00_bglt)
							BGl_subst_gotoz00zz__evaluate_fsiza7eza7(BgL_arg1728z00_4400,
								BgL_varsz00_4022, BgL_lblsz00_4023));
					}
					((((BgL_ev_withzd2handlerzd2_bglt) COBJECT(
									((BgL_ev_withzd2handlerzd2_bglt) BgL_ez00_4021)))->
							BgL_handlerz00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5677), BUNSPEC);
				}
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5684;

					{	/* Eval/evaluate_fsize.scm 347 */
						BgL_ev_exprz00_bglt BgL_arg1729z00_4401;

						BgL_arg1729z00_4401 =
							(((BgL_ev_withzd2handlerzd2_bglt) COBJECT(
									((BgL_ev_withzd2handlerzd2_bglt) BgL_ez00_4021)))->
							BgL_bodyz00);
						BgL_auxz00_5684 =
							((BgL_ev_exprz00_bglt)
							BGl_subst_gotoz00zz__evaluate_fsiza7eza7(BgL_arg1729z00_4401,
								BgL_varsz00_4022, BgL_lblsz00_4023));
					}
					((((BgL_ev_withzd2handlerzd2_bglt) COBJECT(
									((BgL_ev_withzd2handlerzd2_bglt) BgL_ez00_4021)))->
							BgL_bodyz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5684), BUNSPEC);
				}
				BgL_auxz00_5676 = ((BgL_ev_withzd2handlerzd2_bglt) BgL_ez00_4021);
				return ((obj_t) BgL_auxz00_5676);
			}
		}

	}



/* &subst_goto-ev_unwind1372 */
	obj_t BGl_z62subst_gotozd2ev_unwind1372zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4024, obj_t BgL_exprz00_4025, obj_t BgL_varsz00_4026,
		obj_t BgL_lblsz00_4027)
	{
		{	/* Eval/evaluate_fsize.scm 338 */
			{
				BgL_ev_unwindzd2protectzd2_bglt BgL_auxz00_5693;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5694;

					{	/* Eval/evaluate_fsize.scm 340 */
						BgL_ev_exprz00_bglt BgL_arg1726z00_4403;

						BgL_arg1726z00_4403 =
							(((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(
									((BgL_ev_unwindzd2protectzd2_bglt) BgL_exprz00_4025)))->
							BgL_ez00);
						BgL_auxz00_5694 =
							((BgL_ev_exprz00_bglt)
							BGl_subst_gotoz00zz__evaluate_fsiza7eza7(BgL_arg1726z00_4403,
								BgL_varsz00_4026, BgL_lblsz00_4027));
					}
					((((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(
									((BgL_ev_unwindzd2protectzd2_bglt) BgL_exprz00_4025)))->
							BgL_ez00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5694), BUNSPEC);
				}
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5701;

					{	/* Eval/evaluate_fsize.scm 341 */
						BgL_ev_exprz00_bglt BgL_arg1727z00_4404;

						BgL_arg1727z00_4404 =
							(((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(
									((BgL_ev_unwindzd2protectzd2_bglt) BgL_exprz00_4025)))->
							BgL_bodyz00);
						BgL_auxz00_5701 =
							((BgL_ev_exprz00_bglt)
							BGl_subst_gotoz00zz__evaluate_fsiza7eza7(BgL_arg1727z00_4404,
								BgL_varsz00_4026, BgL_lblsz00_4027));
					}
					((((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(
									((BgL_ev_unwindzd2protectzd2_bglt) BgL_exprz00_4025)))->
							BgL_bodyz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5701), BUNSPEC);
				}
				BgL_auxz00_5693 = ((BgL_ev_unwindzd2protectzd2_bglt) BgL_exprz00_4025);
				return ((obj_t) BgL_auxz00_5693);
			}
		}

	}



/* &subst_goto-ev_bind-e1370 */
	obj_t BGl_z62subst_gotozd2ev_bindzd2e1370z62zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4028, obj_t BgL_ez00_4029, obj_t BgL_varsz00_4030,
		obj_t BgL_lblsz00_4031)
	{
		{	/* Eval/evaluate_fsize.scm 333 */
			{
				BgL_ev_bindzd2exitzd2_bglt BgL_auxz00_5710;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5711;

					{	/* Eval/evaluate_fsize.scm 335 */
						BgL_ev_exprz00_bglt BgL_arg1725z00_4406;

						BgL_arg1725z00_4406 =
							(((BgL_ev_bindzd2exitzd2_bglt) COBJECT(
									((BgL_ev_bindzd2exitzd2_bglt) BgL_ez00_4029)))->BgL_bodyz00);
						BgL_auxz00_5711 =
							((BgL_ev_exprz00_bglt)
							BGl_subst_gotoz00zz__evaluate_fsiza7eza7(BgL_arg1725z00_4406,
								BgL_varsz00_4030, BgL_lblsz00_4031));
					}
					((((BgL_ev_bindzd2exitzd2_bglt) COBJECT(
									((BgL_ev_bindzd2exitzd2_bglt) BgL_ez00_4029)))->BgL_bodyz00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5711), BUNSPEC);
				}
				BgL_auxz00_5710 = ((BgL_ev_bindzd2exitzd2_bglt) BgL_ez00_4029);
				return ((obj_t) BgL_auxz00_5710);
			}
		}

	}



/* &subst_goto-ev_hook1368 */
	obj_t BGl_z62subst_gotozd2ev_hook1368zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4032, obj_t BgL_exprz00_4033, obj_t BgL_varsz00_4034,
		obj_t BgL_lblsz00_4035)
	{
		{	/* Eval/evaluate_fsize.scm 328 */
			{
				BgL_ev_hookz00_bglt BgL_auxz00_5720;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5721;

					{	/* Eval/evaluate_fsize.scm 330 */
						BgL_ev_exprz00_bglt BgL_arg1723z00_4408;

						BgL_arg1723z00_4408 =
							(((BgL_ev_hookz00_bglt) COBJECT(
									((BgL_ev_hookz00_bglt) BgL_exprz00_4033)))->BgL_ez00);
						BgL_auxz00_5721 =
							((BgL_ev_exprz00_bglt)
							BGl_subst_gotoz00zz__evaluate_fsiza7eza7(BgL_arg1723z00_4408,
								BgL_varsz00_4034, BgL_lblsz00_4035));
					}
					((((BgL_ev_hookz00_bglt) COBJECT(
									((BgL_ev_hookz00_bglt) BgL_exprz00_4033)))->BgL_ez00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5721), BUNSPEC);
				}
				BgL_auxz00_5720 = ((BgL_ev_hookz00_bglt) BgL_exprz00_4033);
				return ((obj_t) BgL_auxz00_5720);
			}
		}

	}



/* &subst_goto-ev_prog21366 */
	obj_t BGl_z62subst_gotozd2ev_prog21366zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4036, obj_t BgL_ez00_4037, obj_t BgL_varsz00_4038,
		obj_t BgL_lblsz00_4039)
	{
		{	/* Eval/evaluate_fsize.scm 322 */
			{
				BgL_ev_prog2z00_bglt BgL_auxz00_5730;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5731;

					{	/* Eval/evaluate_fsize.scm 324 */
						BgL_ev_exprz00_bglt BgL_arg1721z00_4410;

						BgL_arg1721z00_4410 =
							(((BgL_ev_prog2z00_bglt) COBJECT(
									((BgL_ev_prog2z00_bglt) BgL_ez00_4037)))->BgL_e1z00);
						BgL_auxz00_5731 =
							((BgL_ev_exprz00_bglt)
							BGl_subst_gotoz00zz__evaluate_fsiza7eza7(BgL_arg1721z00_4410,
								BgL_varsz00_4038, BgL_lblsz00_4039));
					}
					((((BgL_ev_prog2z00_bglt) COBJECT(
									((BgL_ev_prog2z00_bglt) BgL_ez00_4037)))->BgL_e1z00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5731), BUNSPEC);
				}
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5738;

					{	/* Eval/evaluate_fsize.scm 325 */
						BgL_ev_exprz00_bglt BgL_arg1722z00_4411;

						BgL_arg1722z00_4411 =
							(((BgL_ev_prog2z00_bglt) COBJECT(
									((BgL_ev_prog2z00_bglt) BgL_ez00_4037)))->BgL_e2z00);
						BgL_auxz00_5738 =
							((BgL_ev_exprz00_bglt)
							BGl_subst_gotoz00zz__evaluate_fsiza7eza7(BgL_arg1722z00_4411,
								BgL_varsz00_4038, BgL_lblsz00_4039));
					}
					((((BgL_ev_prog2z00_bglt) COBJECT(
									((BgL_ev_prog2z00_bglt) BgL_ez00_4037)))->BgL_e2z00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5738), BUNSPEC);
				}
				BgL_auxz00_5730 = ((BgL_ev_prog2z00_bglt) BgL_ez00_4037);
				return ((obj_t) BgL_auxz00_5730);
			}
		}

	}



/* &subst_goto-ev_list1364 */
	obj_t BGl_z62subst_gotozd2ev_list1364zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4040, obj_t BgL_ez00_4041, obj_t BgL_varsz00_4042,
		obj_t BgL_lblsz00_4043)
	{
		{	/* Eval/evaluate_fsize.scm 317 */
			{
				BgL_ev_listz00_bglt BgL_auxz00_5747;

				{	/* Eval/evaluate_fsize.scm 319 */
					obj_t BgL_arg1720z00_4413;

					BgL_arg1720z00_4413 =
						(((BgL_ev_listz00_bglt) COBJECT(
								((BgL_ev_listz00_bglt) BgL_ez00_4041)))->BgL_argsz00);
					{
						obj_t BgL_lz00_4415;

						BgL_lz00_4415 = BgL_arg1720z00_4413;
					BgL_recz00_4414:
						if (NULLP(BgL_lz00_4415))
							{	/* Eval/evaluate_fsize.scm 294 */
								((bool_t) 0);
							}
						else
							{	/* Eval/evaluate_fsize.scm 294 */
								{	/* Eval/evaluate_fsize.scm 295 */
									obj_t BgL_arg1564z00_4416;

									{	/* Eval/evaluate_fsize.scm 295 */
										obj_t BgL_arg1565z00_4417;

										BgL_arg1565z00_4417 = CAR(((obj_t) BgL_lz00_4415));
										BgL_arg1564z00_4416 =
											BGl_subst_gotoz00zz__evaluate_fsiza7eza7(
											((BgL_ev_exprz00_bglt) BgL_arg1565z00_4417),
											BgL_varsz00_4042, BgL_lblsz00_4043);
									}
									{	/* Eval/evaluate_fsize.scm 295 */
										obj_t BgL_tmpz00_5756;

										BgL_tmpz00_5756 = ((obj_t) BgL_lz00_4415);
										SET_CAR(BgL_tmpz00_5756, BgL_arg1564z00_4416);
									}
								}
								{	/* Eval/evaluate_fsize.scm 296 */
									obj_t BgL_arg1566z00_4418;

									BgL_arg1566z00_4418 = CDR(((obj_t) BgL_lz00_4415));
									{
										obj_t BgL_lz00_5761;

										BgL_lz00_5761 = BgL_arg1566z00_4418;
										BgL_lz00_4415 = BgL_lz00_5761;
										goto BgL_recz00_4414;
									}
								}
							}
					}
				}
				BgL_auxz00_5747 = ((BgL_ev_listz00_bglt) BgL_ez00_4041);
				return ((obj_t) BgL_auxz00_5747);
			}
		}

	}



/* &subst_goto-ev_if1362 */
	obj_t BGl_z62subst_gotozd2ev_if1362zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4044, obj_t BgL_exprz00_4045, obj_t BgL_varsz00_4046,
		obj_t BgL_lblsz00_4047)
	{
		{	/* Eval/evaluate_fsize.scm 310 */
			{
				BgL_ev_ifz00_bglt BgL_auxz00_5764;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5765;

					{	/* Eval/evaluate_fsize.scm 312 */
						BgL_ev_exprz00_bglt BgL_arg1716z00_4420;

						BgL_arg1716z00_4420 =
							(((BgL_ev_ifz00_bglt) COBJECT(
									((BgL_ev_ifz00_bglt) BgL_exprz00_4045)))->BgL_pz00);
						BgL_auxz00_5765 =
							((BgL_ev_exprz00_bglt)
							BGl_subst_gotoz00zz__evaluate_fsiza7eza7(BgL_arg1716z00_4420,
								BgL_varsz00_4046, BgL_lblsz00_4047));
					}
					((((BgL_ev_ifz00_bglt) COBJECT(
									((BgL_ev_ifz00_bglt) BgL_exprz00_4045)))->BgL_pz00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5765), BUNSPEC);
				}
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5772;

					{	/* Eval/evaluate_fsize.scm 313 */
						BgL_ev_exprz00_bglt BgL_arg1717z00_4421;

						BgL_arg1717z00_4421 =
							(((BgL_ev_ifz00_bglt) COBJECT(
									((BgL_ev_ifz00_bglt) BgL_exprz00_4045)))->BgL_tz00);
						BgL_auxz00_5772 =
							((BgL_ev_exprz00_bglt)
							BGl_subst_gotoz00zz__evaluate_fsiza7eza7(BgL_arg1717z00_4421,
								BgL_varsz00_4046, BgL_lblsz00_4047));
					}
					((((BgL_ev_ifz00_bglt) COBJECT(
									((BgL_ev_ifz00_bglt) BgL_exprz00_4045)))->BgL_tz00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5772), BUNSPEC);
				}
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5779;

					{	/* Eval/evaluate_fsize.scm 314 */
						BgL_ev_exprz00_bglt BgL_arg1719z00_4422;

						BgL_arg1719z00_4422 =
							(((BgL_ev_ifz00_bglt) COBJECT(
									((BgL_ev_ifz00_bglt) BgL_exprz00_4045)))->BgL_ez00);
						BgL_auxz00_5779 =
							((BgL_ev_exprz00_bglt)
							BGl_subst_gotoz00zz__evaluate_fsiza7eza7(BgL_arg1719z00_4422,
								BgL_varsz00_4046, BgL_lblsz00_4047));
					}
					((((BgL_ev_ifz00_bglt) COBJECT(
									((BgL_ev_ifz00_bglt) BgL_exprz00_4045)))->BgL_ez00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5779), BUNSPEC);
				}
				BgL_auxz00_5764 = ((BgL_ev_ifz00_bglt) BgL_exprz00_4045);
				return ((obj_t) BgL_auxz00_5764);
			}
		}

	}



/* &subst_goto-ev_litt1360 */
	obj_t BGl_z62subst_gotozd2ev_litt1360zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4048, obj_t BgL_ez00_4049, obj_t BgL_varsz00_4050,
		obj_t BgL_lblsz00_4051)
	{
		{	/* Eval/evaluate_fsize.scm 307 */
			return ((obj_t) ((BgL_ev_littz00_bglt) BgL_ez00_4049));
		}

	}



/* &subst_goto-ev_global1358 */
	obj_t BGl_z62subst_gotozd2ev_global1358zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4052, obj_t BgL_ez00_4053, obj_t BgL_varsz00_4054,
		obj_t BgL_lblsz00_4055)
	{
		{	/* Eval/evaluate_fsize.scm 304 */
			return ((obj_t) ((BgL_ev_globalz00_bglt) BgL_ez00_4053));
		}

	}



/* &subst_goto-ev_var1356 */
	obj_t BGl_z62subst_gotozd2ev_var1356zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4056, obj_t BgL_ez00_4057, obj_t BgL_varsz00_4058,
		obj_t BgL_lblsz00_4059)
	{
		{	/* Eval/evaluate_fsize.scm 301 */
			return ((obj_t) ((BgL_ev_varz00_bglt) BgL_ez00_4057));
		}

	}



/* &search-letrec-ev_abs1351 */
	obj_t BGl_z62searchzd2letreczd2ev_abs1351z62zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4060, obj_t BgL_ez00_4061)
	{
		{	/* Eval/evaluate_fsize.scm 260 */
			{
				BgL_ev_absz00_bglt BgL_auxz00_5794;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5795;

					{	/* Eval/evaluate_fsize.scm 262 */
						BgL_ev_exprz00_bglt BgL_arg1713z00_4427;

						BgL_arg1713z00_4427 =
							(((BgL_ev_absz00_bglt) COBJECT(
									((BgL_ev_absz00_bglt) BgL_ez00_4061)))->BgL_bodyz00);
						BgL_auxz00_5795 =
							((BgL_ev_exprz00_bglt)
							BGl_searchzd2letreczd2zz__evaluate_fsiza7eza7
							(BgL_arg1713z00_4427));
					}
					((((BgL_ev_absz00_bglt) COBJECT(
									((BgL_ev_absz00_bglt) BgL_ez00_4061)))->BgL_bodyz00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5795), BUNSPEC);
				}
				BgL_auxz00_5794 = ((BgL_ev_absz00_bglt) BgL_ez00_4061);
				return ((obj_t) BgL_auxz00_5794);
			}
		}

	}



/* &search-letrec-ev_app1349 */
	obj_t BGl_z62searchzd2letreczd2ev_app1349z62zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4062, obj_t BgL_ez00_4063)
	{
		{	/* Eval/evaluate_fsize.scm 254 */
			{
				BgL_ev_appz00_bglt BgL_auxz00_5804;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5805;

					{	/* Eval/evaluate_fsize.scm 256 */
						BgL_ev_exprz00_bglt BgL_arg1711z00_4429;

						BgL_arg1711z00_4429 =
							(((BgL_ev_appz00_bglt) COBJECT(
									((BgL_ev_appz00_bglt) BgL_ez00_4063)))->BgL_funz00);
						BgL_auxz00_5805 =
							((BgL_ev_exprz00_bglt)
							BGl_searchzd2letreczd2zz__evaluate_fsiza7eza7
							(BgL_arg1711z00_4429));
					}
					((((BgL_ev_appz00_bglt) COBJECT(
									((BgL_ev_appz00_bglt) BgL_ez00_4063)))->BgL_funz00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5805), BUNSPEC);
				}
				BGl_searchzd2letrecza2z70zz__evaluate_fsiza7eza7(
					(((BgL_ev_appz00_bglt) COBJECT(
								((BgL_ev_appz00_bglt) BgL_ez00_4063)))->BgL_argsz00));
				BgL_auxz00_5804 = ((BgL_ev_appz00_bglt) BgL_ez00_4063);
				return ((obj_t) BgL_auxz00_5804);
			}
		}

	}



/* &search-letrec-ev_let1347 */
	obj_t BGl_z62searchzd2letreczd2ev_let1347z62zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4064, obj_t BgL_ez00_4065)
	{
		{	/* Eval/evaluate_fsize.scm 243 */
			{
				BgL_ev_exprz00_bglt BgL_auxz00_5817;

				{	/* Eval/evaluate_fsize.scm 245 */
					obj_t BgL_arg1700z00_4431;

					BgL_arg1700z00_4431 =
						(((BgL_ev_binderz00_bglt) COBJECT(
								((BgL_ev_binderz00_bglt)
									((BgL_ev_letrecz00_bglt) BgL_ez00_4065))))->BgL_valsz00);
					BGl_searchzd2letrecza2z70zz__evaluate_fsiza7eza7(BgL_arg1700z00_4431);
				}
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5822;

					{	/* Eval/evaluate_fsize.scm 246 */
						BgL_ev_exprz00_bglt BgL_arg1701z00_4432;

						BgL_arg1701z00_4432 =
							(((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt)
										((BgL_ev_letrecz00_bglt) BgL_ez00_4065))))->BgL_bodyz00);
						BgL_auxz00_5822 =
							((BgL_ev_exprz00_bglt)
							BGl_searchzd2letreczd2zz__evaluate_fsiza7eza7
							(BgL_arg1701z00_4432));
					}
					((((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt)
										((BgL_ev_letrecz00_bglt) BgL_ez00_4065))))->BgL_bodyz00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5822), BUNSPEC);
				}
				{	/* Eval/evaluate_fsize.scm 250 */
					bool_t BgL_test2721z00_5831;

					{	/* Eval/evaluate_fsize.scm 247 */
						obj_t BgL_arg1708z00_4433;
						obj_t BgL_arg1709z00_4434;
						BgL_ev_exprz00_bglt BgL_arg1710z00_4435;

						BgL_arg1708z00_4433 =
							(((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt)
										((BgL_ev_letrecz00_bglt) BgL_ez00_4065))))->BgL_varsz00);
						BgL_arg1709z00_4434 =
							(((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt)
										((BgL_ev_letrecz00_bglt) BgL_ez00_4065))))->BgL_valsz00);
						BgL_arg1710z00_4435 =
							(((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt)
										((BgL_ev_letrecz00_bglt) BgL_ez00_4065))))->BgL_bodyz00);
						BgL_test2721z00_5831 =
							BGl_letrectailzf3zf3zz__evaluate_fsiza7eza7(BgL_arg1708z00_4433,
							BgL_arg1709z00_4434, BgL_arg1710z00_4435);
					}
					if (BgL_test2721z00_5831)
						{	/* Eval/evaluate_fsize.scm 251 */
							obj_t BgL_arg1702z00_4436;
							obj_t BgL_arg1704z00_4437;
							BgL_ev_exprz00_bglt BgL_arg1707z00_4438;

							BgL_arg1702z00_4436 =
								(((BgL_ev_binderz00_bglt) COBJECT(
										((BgL_ev_binderz00_bglt)
											((BgL_ev_letrecz00_bglt) BgL_ez00_4065))))->BgL_varsz00);
							BgL_arg1704z00_4437 =
								(((BgL_ev_binderz00_bglt) COBJECT(
										((BgL_ev_binderz00_bglt)
											((BgL_ev_letrecz00_bglt) BgL_ez00_4065))))->BgL_valsz00);
							BgL_arg1707z00_4438 =
								(((BgL_ev_binderz00_bglt) COBJECT(
										((BgL_ev_binderz00_bglt)
											((BgL_ev_letrecz00_bglt) BgL_ez00_4065))))->BgL_bodyz00);
							BgL_auxz00_5817 =
								((BgL_ev_exprz00_bglt)
								BGl_modifyzd2letreczd2zz__evaluate_fsiza7eza7
								(BgL_arg1702z00_4436, BgL_arg1704z00_4437,
									BgL_arg1707z00_4438));
						}
					else
						{	/* Eval/evaluate_fsize.scm 250 */
							BgL_auxz00_5817 =
								((BgL_ev_exprz00_bglt) ((BgL_ev_letrecz00_bglt) BgL_ez00_4065));
						}
				}
				return ((obj_t) BgL_auxz00_5817);
			}
		}

	}



/* &search-letrec-ev_bin1345 */
	obj_t BGl_z62searchzd2letreczd2ev_bin1345z62zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4066, obj_t BgL_ez00_4067)
	{
		{	/* Eval/evaluate_fsize.scm 237 */
			{
				BgL_ev_binderz00_bglt BgL_auxz00_5856;

				BGl_searchzd2letrecza2z70zz__evaluate_fsiza7eza7(
					(((BgL_ev_binderz00_bglt) COBJECT(
								((BgL_ev_binderz00_bglt) BgL_ez00_4067)))->BgL_valsz00));
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5860;

					{	/* Eval/evaluate_fsize.scm 240 */
						BgL_ev_exprz00_bglt BgL_arg1699z00_4440;

						BgL_arg1699z00_4440 =
							(((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt) BgL_ez00_4067)))->BgL_bodyz00);
						BgL_auxz00_5860 =
							((BgL_ev_exprz00_bglt)
							BGl_searchzd2letreczd2zz__evaluate_fsiza7eza7
							(BgL_arg1699z00_4440));
					}
					((((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt) BgL_ez00_4067)))->BgL_bodyz00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5860), BUNSPEC);
				}
				BgL_auxz00_5856 = ((BgL_ev_binderz00_bglt) BgL_ez00_4067);
				return ((obj_t) BgL_auxz00_5856);
			}
		}

	}



/* &search-letrec-ev_syn1343 */
	obj_t BGl_z62searchzd2letreczd2ev_syn1343z62zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4068, obj_t BgL_ez00_4069)
	{
		{	/* Eval/evaluate_fsize.scm 230 */
			{
				BgL_ev_synchroniza7eza7_bglt BgL_auxz00_5869;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5870;

					{	/* Eval/evaluate_fsize.scm 232 */
						BgL_ev_exprz00_bglt BgL_arg1695z00_4442;

						BgL_arg1695z00_4442 =
							(((BgL_ev_synchroniza7eza7_bglt) COBJECT(
									((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_4069)))->
							BgL_mutexz00);
						BgL_auxz00_5870 =
							((BgL_ev_exprz00_bglt)
							BGl_searchzd2letreczd2zz__evaluate_fsiza7eza7
							(BgL_arg1695z00_4442));
					}
					((((BgL_ev_synchroniza7eza7_bglt) COBJECT(
									((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_4069)))->
							BgL_mutexz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5870), BUNSPEC);
				}
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5877;

					{	/* Eval/evaluate_fsize.scm 233 */
						BgL_ev_exprz00_bglt BgL_arg1696z00_4443;

						BgL_arg1696z00_4443 =
							(((BgL_ev_synchroniza7eza7_bglt) COBJECT(
									((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_4069)))->
							BgL_prelockz00);
						BgL_auxz00_5877 =
							((BgL_ev_exprz00_bglt)
							BGl_searchzd2letreczd2zz__evaluate_fsiza7eza7
							(BgL_arg1696z00_4443));
					}
					((((BgL_ev_synchroniza7eza7_bglt) COBJECT(
									((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_4069)))->
							BgL_prelockz00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5877), BUNSPEC);
				}
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5884;

					{	/* Eval/evaluate_fsize.scm 234 */
						BgL_ev_exprz00_bglt BgL_arg1697z00_4444;

						BgL_arg1697z00_4444 =
							(((BgL_ev_synchroniza7eza7_bglt) COBJECT(
									((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_4069)))->
							BgL_bodyz00);
						BgL_auxz00_5884 =
							((BgL_ev_exprz00_bglt)
							BGl_searchzd2letreczd2zz__evaluate_fsiza7eza7
							(BgL_arg1697z00_4444));
					}
					((((BgL_ev_synchroniza7eza7_bglt) COBJECT(
									((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_4069)))->
							BgL_bodyz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5884), BUNSPEC);
				}
				BgL_auxz00_5869 = ((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_4069);
				return ((obj_t) BgL_auxz00_5869);
			}
		}

	}



/* &search-letrec-ev_wit1341 */
	obj_t BGl_z62searchzd2letreczd2ev_wit1341z62zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4070, obj_t BgL_ez00_4071)
	{
		{	/* Eval/evaluate_fsize.scm 224 */
			{
				BgL_ev_withzd2handlerzd2_bglt BgL_auxz00_5893;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5894;

					{	/* Eval/evaluate_fsize.scm 226 */
						BgL_ev_exprz00_bglt BgL_arg1692z00_4446;

						BgL_arg1692z00_4446 =
							(((BgL_ev_withzd2handlerzd2_bglt) COBJECT(
									((BgL_ev_withzd2handlerzd2_bglt) BgL_ez00_4071)))->
							BgL_handlerz00);
						BgL_auxz00_5894 =
							((BgL_ev_exprz00_bglt)
							BGl_searchzd2letreczd2zz__evaluate_fsiza7eza7
							(BgL_arg1692z00_4446));
					}
					((((BgL_ev_withzd2handlerzd2_bglt) COBJECT(
									((BgL_ev_withzd2handlerzd2_bglt) BgL_ez00_4071)))->
							BgL_handlerz00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5894), BUNSPEC);
				}
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5901;

					{	/* Eval/evaluate_fsize.scm 227 */
						BgL_ev_exprz00_bglt BgL_arg1693z00_4447;

						BgL_arg1693z00_4447 =
							(((BgL_ev_withzd2handlerzd2_bglt) COBJECT(
									((BgL_ev_withzd2handlerzd2_bglt) BgL_ez00_4071)))->
							BgL_bodyz00);
						BgL_auxz00_5901 =
							((BgL_ev_exprz00_bglt)
							BGl_searchzd2letreczd2zz__evaluate_fsiza7eza7
							(BgL_arg1693z00_4447));
					}
					((((BgL_ev_withzd2handlerzd2_bglt) COBJECT(
									((BgL_ev_withzd2handlerzd2_bglt) BgL_ez00_4071)))->
							BgL_bodyz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5901), BUNSPEC);
				}
				BgL_auxz00_5893 = ((BgL_ev_withzd2handlerzd2_bglt) BgL_ez00_4071);
				return ((obj_t) BgL_auxz00_5893);
			}
		}

	}



/* &search-letrec-ev_unw1339 */
	obj_t BGl_z62searchzd2letreczd2ev_unw1339z62zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4072, obj_t BgL_exprz00_4073)
	{
		{	/* Eval/evaluate_fsize.scm 218 */
			{
				BgL_ev_unwindzd2protectzd2_bglt BgL_auxz00_5910;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5911;

					{	/* Eval/evaluate_fsize.scm 220 */
						BgL_ev_exprz00_bglt BgL_arg1688z00_4449;

						BgL_arg1688z00_4449 =
							(((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(
									((BgL_ev_unwindzd2protectzd2_bglt) BgL_exprz00_4073)))->
							BgL_ez00);
						BgL_auxz00_5911 =
							((BgL_ev_exprz00_bglt)
							BGl_searchzd2letreczd2zz__evaluate_fsiza7eza7
							(BgL_arg1688z00_4449));
					}
					((((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(
									((BgL_ev_unwindzd2protectzd2_bglt) BgL_exprz00_4073)))->
							BgL_ez00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5911), BUNSPEC);
				}
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5918;

					{	/* Eval/evaluate_fsize.scm 221 */
						BgL_ev_exprz00_bglt BgL_arg1691z00_4450;

						BgL_arg1691z00_4450 =
							(((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(
									((BgL_ev_unwindzd2protectzd2_bglt) BgL_exprz00_4073)))->
							BgL_bodyz00);
						BgL_auxz00_5918 =
							((BgL_ev_exprz00_bglt)
							BGl_searchzd2letreczd2zz__evaluate_fsiza7eza7
							(BgL_arg1691z00_4450));
					}
					((((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(
									((BgL_ev_unwindzd2protectzd2_bglt) BgL_exprz00_4073)))->
							BgL_bodyz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5918), BUNSPEC);
				}
				BgL_auxz00_5910 = ((BgL_ev_unwindzd2protectzd2_bglt) BgL_exprz00_4073);
				return ((obj_t) BgL_auxz00_5910);
			}
		}

	}



/* &search-letrec-ev_bin1337 */
	obj_t BGl_z62searchzd2letreczd2ev_bin1337z62zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4074, obj_t BgL_ez00_4075)
	{
		{	/* Eval/evaluate_fsize.scm 213 */
			{
				BgL_ev_bindzd2exitzd2_bglt BgL_auxz00_5927;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5928;

					{	/* Eval/evaluate_fsize.scm 215 */
						BgL_ev_exprz00_bglt BgL_arg1687z00_4452;

						BgL_arg1687z00_4452 =
							(((BgL_ev_bindzd2exitzd2_bglt) COBJECT(
									((BgL_ev_bindzd2exitzd2_bglt) BgL_ez00_4075)))->BgL_bodyz00);
						BgL_auxz00_5928 =
							((BgL_ev_exprz00_bglt)
							BGl_searchzd2letreczd2zz__evaluate_fsiza7eza7
							(BgL_arg1687z00_4452));
					}
					((((BgL_ev_bindzd2exitzd2_bglt) COBJECT(
									((BgL_ev_bindzd2exitzd2_bglt) BgL_ez00_4075)))->BgL_bodyz00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5928), BUNSPEC);
				}
				BgL_auxz00_5927 = ((BgL_ev_bindzd2exitzd2_bglt) BgL_ez00_4075);
				return ((obj_t) BgL_auxz00_5927);
			}
		}

	}



/* &search-letrec-ev_hoo1335 */
	obj_t BGl_z62searchzd2letreczd2ev_hoo1335z62zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4076, obj_t BgL_exprz00_4077)
	{
		{	/* Eval/evaluate_fsize.scm 208 */
			{
				BgL_ev_hookz00_bglt BgL_auxz00_5937;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5938;

					{	/* Eval/evaluate_fsize.scm 210 */
						BgL_ev_exprz00_bglt BgL_arg1686z00_4454;

						BgL_arg1686z00_4454 =
							(((BgL_ev_hookz00_bglt) COBJECT(
									((BgL_ev_hookz00_bglt) BgL_exprz00_4077)))->BgL_ez00);
						BgL_auxz00_5938 =
							((BgL_ev_exprz00_bglt)
							BGl_searchzd2letreczd2zz__evaluate_fsiza7eza7
							(BgL_arg1686z00_4454));
					}
					((((BgL_ev_hookz00_bglt) COBJECT(
									((BgL_ev_hookz00_bglt) BgL_exprz00_4077)))->BgL_ez00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5938), BUNSPEC);
				}
				BgL_auxz00_5937 = ((BgL_ev_hookz00_bglt) BgL_exprz00_4077);
				return ((obj_t) BgL_auxz00_5937);
			}
		}

	}



/* &search-letrec-ev_pro1333 */
	obj_t BGl_z62searchzd2letreczd2ev_pro1333z62zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4078, obj_t BgL_ez00_4079)
	{
		{	/* Eval/evaluate_fsize.scm 202 */
			{
				BgL_ev_prog2z00_bglt BgL_auxz00_5947;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5948;

					{	/* Eval/evaluate_fsize.scm 204 */
						BgL_ev_exprz00_bglt BgL_arg1684z00_4456;

						BgL_arg1684z00_4456 =
							(((BgL_ev_prog2z00_bglt) COBJECT(
									((BgL_ev_prog2z00_bglt) BgL_ez00_4079)))->BgL_e1z00);
						BgL_auxz00_5948 =
							((BgL_ev_exprz00_bglt)
							BGl_searchzd2letreczd2zz__evaluate_fsiza7eza7
							(BgL_arg1684z00_4456));
					}
					((((BgL_ev_prog2z00_bglt) COBJECT(
									((BgL_ev_prog2z00_bglt) BgL_ez00_4079)))->BgL_e1z00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5948), BUNSPEC);
				}
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5955;

					{	/* Eval/evaluate_fsize.scm 205 */
						BgL_ev_exprz00_bglt BgL_arg1685z00_4457;

						BgL_arg1685z00_4457 =
							(((BgL_ev_prog2z00_bglt) COBJECT(
									((BgL_ev_prog2z00_bglt) BgL_ez00_4079)))->BgL_e2z00);
						BgL_auxz00_5955 =
							((BgL_ev_exprz00_bglt)
							BGl_searchzd2letreczd2zz__evaluate_fsiza7eza7
							(BgL_arg1685z00_4457));
					}
					((((BgL_ev_prog2z00_bglt) COBJECT(
									((BgL_ev_prog2z00_bglt) BgL_ez00_4079)))->BgL_e2z00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5955), BUNSPEC);
				}
				BgL_auxz00_5947 = ((BgL_ev_prog2z00_bglt) BgL_ez00_4079);
				return ((obj_t) BgL_auxz00_5947);
			}
		}

	}



/* &search-letrec-ev_lis1331 */
	obj_t BGl_z62searchzd2letreczd2ev_lis1331z62zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4080, obj_t BgL_ez00_4081)
	{
		{	/* Eval/evaluate_fsize.scm 197 */
			{
				BgL_ev_listz00_bglt BgL_auxz00_5964;

				BGl_searchzd2letrecza2z70zz__evaluate_fsiza7eza7(
					(((BgL_ev_listz00_bglt) COBJECT(
								((BgL_ev_listz00_bglt) BgL_ez00_4081)))->BgL_argsz00));
				BgL_auxz00_5964 = ((BgL_ev_listz00_bglt) BgL_ez00_4081);
				return ((obj_t) BgL_auxz00_5964);
			}
		}

	}



/* &search-letrec-ev_if1329 */
	obj_t BGl_z62searchzd2letreczd2ev_if1329z62zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4082, obj_t BgL_exprz00_4083)
	{
		{	/* Eval/evaluate_fsize.scm 190 */
			{
				BgL_ev_ifz00_bglt BgL_auxz00_5970;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5971;

					{	/* Eval/evaluate_fsize.scm 192 */
						BgL_ev_exprz00_bglt BgL_arg1669z00_4460;

						BgL_arg1669z00_4460 =
							(((BgL_ev_ifz00_bglt) COBJECT(
									((BgL_ev_ifz00_bglt) BgL_exprz00_4083)))->BgL_pz00);
						BgL_auxz00_5971 =
							((BgL_ev_exprz00_bglt)
							BGl_searchzd2letreczd2zz__evaluate_fsiza7eza7
							(BgL_arg1669z00_4460));
					}
					((((BgL_ev_ifz00_bglt) COBJECT(
									((BgL_ev_ifz00_bglt) BgL_exprz00_4083)))->BgL_pz00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5971), BUNSPEC);
				}
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5978;

					{	/* Eval/evaluate_fsize.scm 193 */
						BgL_ev_exprz00_bglt BgL_arg1672z00_4461;

						BgL_arg1672z00_4461 =
							(((BgL_ev_ifz00_bglt) COBJECT(
									((BgL_ev_ifz00_bglt) BgL_exprz00_4083)))->BgL_tz00);
						BgL_auxz00_5978 =
							((BgL_ev_exprz00_bglt)
							BGl_searchzd2letreczd2zz__evaluate_fsiza7eza7
							(BgL_arg1672z00_4461));
					}
					((((BgL_ev_ifz00_bglt) COBJECT(
									((BgL_ev_ifz00_bglt) BgL_exprz00_4083)))->BgL_tz00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5978), BUNSPEC);
				}
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5985;

					{	/* Eval/evaluate_fsize.scm 194 */
						BgL_ev_exprz00_bglt BgL_arg1675z00_4462;

						BgL_arg1675z00_4462 =
							(((BgL_ev_ifz00_bglt) COBJECT(
									((BgL_ev_ifz00_bglt) BgL_exprz00_4083)))->BgL_ez00);
						BgL_auxz00_5985 =
							((BgL_ev_exprz00_bglt)
							BGl_searchzd2letreczd2zz__evaluate_fsiza7eza7
							(BgL_arg1675z00_4462));
					}
					((((BgL_ev_ifz00_bglt) COBJECT(
									((BgL_ev_ifz00_bglt) BgL_exprz00_4083)))->BgL_ez00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5985), BUNSPEC);
				}
				BgL_auxz00_5970 = ((BgL_ev_ifz00_bglt) BgL_exprz00_4083);
				return ((obj_t) BgL_auxz00_5970);
			}
		}

	}



/* &search-letrec-ev_lit1327 */
	obj_t BGl_z62searchzd2letreczd2ev_lit1327z62zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4084, obj_t BgL_ez00_4085)
	{
		{	/* Eval/evaluate_fsize.scm 187 */
			return ((obj_t) ((BgL_ev_littz00_bglt) BgL_ez00_4085));
		}

	}



/* &search-letrec-ev_glo1325 */
	obj_t BGl_z62searchzd2letreczd2ev_glo1325z62zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4086, obj_t BgL_ez00_4087)
	{
		{	/* Eval/evaluate_fsize.scm 184 */
			return ((obj_t) ((BgL_ev_globalz00_bglt) BgL_ez00_4087));
		}

	}



/* &search-letrec-ev_var1323 */
	obj_t BGl_z62searchzd2letreczd2ev_var1323z62zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4088, obj_t BgL_ez00_4089)
	{
		{	/* Eval/evaluate_fsize.scm 181 */
			return ((obj_t) ((BgL_ev_varz00_bglt) BgL_ez00_4089));
		}

	}



/* &fsize-ev_abs1319 */
	obj_t BGl_z62fsiza7ezd2ev_abs1319z17zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4090, obj_t BgL_ez00_4091, obj_t BgL_nz00_4092)
	{
		{	/* Eval/evaluate_fsize.scm 158 */
			{	/* Eval/evaluate_fsize.scm 159 */
				int BgL_tmpz00_6000;

				{	/* Eval/evaluate_fsize.scm 159 */
					int BgL_nz00_4467;

					BgL_nz00_4467 = CINT(BgL_nz00_4092);
					{	/* Eval/evaluate_fsize.scm 160 */
						int BgL_nnz00_4468;

						{	/* Eval/evaluate_fsize.scm 160 */
							BgL_ev_exprz00_bglt BgL_arg1665z00_4469;
							long BgL_arg1667z00_4470;

							BgL_arg1665z00_4469 =
								(((BgL_ev_absz00_bglt) COBJECT(
										((BgL_ev_absz00_bglt) BgL_ez00_4091)))->BgL_bodyz00);
							BgL_arg1667z00_4470 =
								bgl_list_length(
								(((BgL_ev_absz00_bglt) COBJECT(
											((BgL_ev_absz00_bglt) BgL_ez00_4091)))->BgL_varsz00));
							BgL_nnz00_4468 =
								BGl_fsiza7eza7zz__evaluate_fsiza7eza7(BgL_arg1665z00_4469,
								(int) (BgL_arg1667z00_4470));
						}
						((((BgL_ev_absz00_bglt) COBJECT(
										((BgL_ev_absz00_bglt) BgL_ez00_4091)))->BgL_siza7eza7) =
							((int) BgL_nnz00_4468), BUNSPEC);
						BgL_tmpz00_6000 = BgL_nz00_4467;
				}}
				return BINT(BgL_tmpz00_6000);
			}
		}

	}



/* &fsize-ev_app1317 */
	obj_t BGl_z62fsiza7ezd2ev_app1317z17zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4093, obj_t BgL_ez00_4094, obj_t BgL_nz00_4095)
	{
		{	/* Eval/evaluate_fsize.scm 151 */
			{	/* Eval/evaluate_fsize.scm 152 */
				int BgL_nz00_4472;

				BgL_nz00_4472 = CINT(BgL_nz00_4095);
				{	/* Eval/evaluate_fsize.scm 153 */
					int BgL_g1079z00_4473;

					BgL_g1079z00_4473 =
						BGl_fsiza7eza7zz__evaluate_fsiza7eza7(
						(((BgL_ev_appz00_bglt) COBJECT(
									((BgL_ev_appz00_bglt) BgL_ez00_4094)))->BgL_funz00),
						BgL_nz00_4472);
					{	/* Eval/evaluate_fsize.scm 153 */
						obj_t BgL_arg1657z00_4474;

						BgL_arg1657z00_4474 =
							(((BgL_ev_appz00_bglt) COBJECT(
									((BgL_ev_appz00_bglt) BgL_ez00_4094)))->BgL_argsz00);
						{
							obj_t BgL_lz00_4476;
							int BgL_nz00_4477;
							obj_t BgL_rz00_4478;

							BgL_lz00_4476 = BgL_arg1657z00_4474;
							BgL_nz00_4477 = BgL_nz00_4472;
							BgL_rz00_4478 = BINT(BgL_g1079z00_4473);
						BgL_recz00_4475:
							if (NULLP(BgL_lz00_4476))
								{	/* Eval/evaluate_fsize.scm 154 */
									return
										BGl_2maxz00zz__r4_numbers_6_5z00(BINT(BgL_nz00_4477),
										BgL_rz00_4478);
								}
							else
								{	/* Eval/evaluate_fsize.scm 156 */
									obj_t BgL_arg1660z00_4479;
									long BgL_arg1661z00_4480;
									obj_t BgL_arg1662z00_4481;

									BgL_arg1660z00_4479 = CDR(((obj_t) BgL_lz00_4476));
									BgL_arg1661z00_4480 = ((long) (BgL_nz00_4477) + ((long) 1));
									{	/* Eval/evaluate_fsize.scm 156 */
										int BgL_xz00_4482;

										{	/* Eval/evaluate_fsize.scm 156 */
											obj_t BgL_arg1663z00_4483;

											BgL_arg1663z00_4483 = CAR(((obj_t) BgL_lz00_4476));
											BgL_xz00_4482 =
												BGl_fsiza7eza7zz__evaluate_fsiza7eza7(
												((BgL_ev_exprz00_bglt) BgL_arg1663z00_4483),
												BgL_nz00_4477);
										}
										BgL_arg1662z00_4481 =
											BGl_2maxz00zz__r4_numbers_6_5z00(BINT(BgL_xz00_4482),
											BgL_rz00_4478);
									}
									{
										obj_t BgL_rz00_6035;
										int BgL_nz00_6033;
										obj_t BgL_lz00_6032;

										BgL_lz00_6032 = BgL_arg1660z00_4479;
										BgL_nz00_6033 = (int) (BgL_arg1661z00_4480);
										BgL_rz00_6035 = BgL_arg1662z00_4481;
										BgL_rz00_4478 = BgL_rz00_6035;
										BgL_nz00_4477 = BgL_nz00_6033;
										BgL_lz00_4476 = BgL_lz00_6032;
										goto BgL_recz00_4475;
									}
								}
						}
					}
				}
			}
		}

	}



/* &fsize-ev_goto1315 */
	obj_t BGl_z62fsiza7ezd2ev_goto1315z17zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4096, obj_t BgL_ez00_4097, obj_t BgL_nz00_4098)
	{
		{	/* Eval/evaluate_fsize.scm 144 */
			{	/* Eval/evaluate_fsize.scm 146 */
				obj_t BgL_arg1648z00_4485;

				BgL_arg1648z00_4485 =
					(((BgL_ev_gotoz00_bglt) COBJECT(
							((BgL_ev_gotoz00_bglt) BgL_ez00_4097)))->BgL_argsz00);
				{
					obj_t BgL_lz00_4487;
					obj_t BgL_nz00_4488;
					obj_t BgL_rz00_4489;

					BgL_lz00_4487 = BgL_arg1648z00_4485;
					BgL_nz00_4488 = BgL_nz00_4098;
					BgL_rz00_4489 = BgL_nz00_4098;
				BgL_recz00_4486:
					if (NULLP(BgL_lz00_4487))
						{	/* Eval/evaluate_fsize.scm 147 */
							return
								BGl_2maxz00zz__r4_numbers_6_5z00(BgL_nz00_4488, BgL_rz00_4489);
						}
					else
						{	/* Eval/evaluate_fsize.scm 149 */
							obj_t BgL_arg1651z00_4490;
							long BgL_arg1652z00_4491;
							obj_t BgL_arg1654z00_4492;

							BgL_arg1651z00_4490 = CDR(((obj_t) BgL_lz00_4487));
							BgL_arg1652z00_4491 = ((long) CINT(BgL_nz00_4488) + ((long) 1));
							{	/* Eval/evaluate_fsize.scm 149 */
								int BgL_xz00_4493;

								{	/* Eval/evaluate_fsize.scm 149 */
									obj_t BgL_arg1656z00_4494;

									BgL_arg1656z00_4494 = CAR(((obj_t) BgL_lz00_4487));
									BgL_xz00_4493 =
										BGl_fsiza7eza7zz__evaluate_fsiza7eza7(
										((BgL_ev_exprz00_bglt) BgL_arg1656z00_4494),
										CINT(BgL_nz00_4488));
								}
								BgL_arg1654z00_4492 =
									BGl_2maxz00zz__r4_numbers_6_5z00(BINT(BgL_xz00_4493),
									BgL_rz00_4489);
							}
							{
								obj_t BgL_rz00_6056;
								obj_t BgL_nz00_6054;
								obj_t BgL_lz00_6053;

								BgL_lz00_6053 = BgL_arg1651z00_4490;
								BgL_nz00_6054 = BINT(BgL_arg1652z00_4491);
								BgL_rz00_6056 = BgL_arg1654z00_4492;
								BgL_rz00_4489 = BgL_rz00_6056;
								BgL_nz00_4488 = BgL_nz00_6054;
								BgL_lz00_4487 = BgL_lz00_6053;
								goto BgL_recz00_4486;
							}
						}
				}
			}
		}

	}



/* &fsize-ev_labels1313 */
	obj_t BGl_z62fsiza7ezd2ev_labels1313z17zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4099, obj_t BgL_ez00_4100, obj_t BgL_nz00_4101)
	{
		{	/* Eval/evaluate_fsize.scm 137 */
			{
				obj_t BgL_lz00_4497;
				obj_t BgL_rz00_4498;

				BgL_lz00_4497 =
					(((BgL_ev_labelsz00_bglt) COBJECT(
							((BgL_ev_labelsz00_bglt) BgL_ez00_4100)))->BgL_valsz00);
				BgL_rz00_4498 = BgL_nz00_4101;
			BgL_recz00_4496:
				if (NULLP(BgL_lz00_4497))
					{	/* Eval/evaluate_fsize.scm 141 */
						int BgL_xz00_4499;

						BgL_xz00_4499 =
							BGl_fsiza7eza7zz__evaluate_fsiza7eza7(
							(((BgL_ev_labelsz00_bglt) COBJECT(
										((BgL_ev_labelsz00_bglt) BgL_ez00_4100)))->BgL_bodyz00),
							CINT(BgL_nz00_4101));
						return
							BGl_2maxz00zz__r4_numbers_6_5z00(BINT(BgL_xz00_4499),
							BgL_rz00_4498);
					}
				else
					{	/* Eval/evaluate_fsize.scm 142 */
						obj_t BgL_arg1640z00_4500;
						obj_t BgL_arg1641z00_4501;

						BgL_arg1640z00_4500 = CDR(((obj_t) BgL_lz00_4497));
						{	/* Eval/evaluate_fsize.scm 142 */
							int BgL_xz00_4502;

							{	/* Eval/evaluate_fsize.scm 142 */
								obj_t BgL_arg1642z00_4503;
								long BgL_arg1643z00_4504;

								{	/* Eval/evaluate_fsize.scm 142 */
									obj_t BgL_pairz00_4505;

									BgL_pairz00_4505 = CAR(((obj_t) BgL_lz00_4497));
									BgL_arg1642z00_4503 = CDR(BgL_pairz00_4505);
								}
								{	/* Eval/evaluate_fsize.scm 142 */
									long BgL_tmpz00_6070;

									{	/* Eval/evaluate_fsize.scm 142 */
										obj_t BgL_auxz00_6072;

										{	/* Eval/evaluate_fsize.scm 142 */
											obj_t BgL_pairz00_4506;

											BgL_pairz00_4506 = CAR(((obj_t) BgL_lz00_4497));
											BgL_auxz00_6072 = CAR(BgL_pairz00_4506);
										}
										BgL_tmpz00_6070 = bgl_list_length(BgL_auxz00_6072);
									}
									BgL_arg1643z00_4504 =
										((long) CINT(BgL_nz00_4101) + BgL_tmpz00_6070);
								}
								BgL_xz00_4502 =
									BGl_fsiza7eza7zz__evaluate_fsiza7eza7(
									((BgL_ev_exprz00_bglt) BgL_arg1642z00_4503),
									(int) (BgL_arg1643z00_4504));
							}
							BgL_arg1641z00_4501 =
								BGl_2maxz00zz__r4_numbers_6_5z00(BINT(BgL_xz00_4502),
								BgL_rz00_4498);
						}
						{
							obj_t BgL_rz00_6084;
							obj_t BgL_lz00_6083;

							BgL_lz00_6083 = BgL_arg1640z00_4500;
							BgL_rz00_6084 = BgL_arg1641z00_4501;
							BgL_rz00_4498 = BgL_rz00_6084;
							BgL_lz00_4497 = BgL_lz00_6083;
							goto BgL_recz00_4496;
						}
					}
			}
		}

	}



/* &fsize-ev_letrec1311 */
	obj_t BGl_z62fsiza7ezd2ev_letrec1311z17zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4102, obj_t BgL_ez00_4103, obj_t BgL_nz00_4104)
	{
		{	/* Eval/evaluate_fsize.scm 129 */
			{	/* Eval/evaluate_fsize.scm 130 */
				int BgL_nz00_4508;

				BgL_nz00_4508 = CINT(BgL_nz00_4104);
				{	/* Eval/evaluate_fsize.scm 131 */
					long BgL_nz00_4509;

					BgL_nz00_4509 =
						(
						(long) (BgL_nz00_4508) +
						bgl_list_length(
							(((BgL_ev_binderz00_bglt) COBJECT(
										((BgL_ev_binderz00_bglt)
											((BgL_ev_letrecz00_bglt) BgL_ez00_4103))))->
								BgL_valsz00)));
					{
						obj_t BgL_lz00_4511;
						obj_t BgL_rz00_4512;

						{	/* Eval/evaluate_fsize.scm 132 */
							obj_t BgL_arg1626z00_4519;

							BgL_arg1626z00_4519 =
								(((BgL_ev_binderz00_bglt) COBJECT(
										((BgL_ev_binderz00_bglt)
											((BgL_ev_letrecz00_bglt) BgL_ez00_4103))))->BgL_valsz00);
							BgL_lz00_4511 = BgL_arg1626z00_4519;
							BgL_rz00_4512 = BINT(BgL_nz00_4509);
						BgL_recz00_4510:
							if (NULLP(BgL_lz00_4511))
								{	/* Eval/evaluate_fsize.scm 134 */
									int BgL_xz00_4513;

									{	/* Eval/evaluate_fsize.scm 134 */
										BgL_ev_exprz00_bglt BgL_arg1629z00_4514;

										BgL_arg1629z00_4514 =
											(((BgL_ev_binderz00_bglt) COBJECT(
													((BgL_ev_binderz00_bglt)
														((BgL_ev_letrecz00_bglt) BgL_ez00_4103))))->
											BgL_bodyz00);
										BgL_xz00_4513 =
											BGl_fsiza7eza7zz__evaluate_fsiza7eza7(BgL_arg1629z00_4514,
											(int) (BgL_nz00_4509));
									}
									return
										BGl_2maxz00zz__r4_numbers_6_5z00(BINT(BgL_xz00_4513),
										BgL_rz00_4512);
								}
							else
								{	/* Eval/evaluate_fsize.scm 135 */
									obj_t BgL_arg1630z00_4515;
									obj_t BgL_arg1631z00_4516;

									BgL_arg1630z00_4515 = CDR(((obj_t) BgL_lz00_4511));
									{	/* Eval/evaluate_fsize.scm 135 */
										int BgL_xz00_4517;

										{	/* Eval/evaluate_fsize.scm 135 */
											obj_t BgL_arg1632z00_4518;

											BgL_arg1632z00_4518 = CAR(((obj_t) BgL_lz00_4511));
											BgL_xz00_4517 =
												BGl_fsiza7eza7zz__evaluate_fsiza7eza7(
												((BgL_ev_exprz00_bglt) BgL_arg1632z00_4518),
												(int) (BgL_nz00_4509));
										}
										BgL_arg1631z00_4516 =
											BGl_2maxz00zz__r4_numbers_6_5z00(BINT(BgL_xz00_4517),
											BgL_rz00_4512);
									}
									{
										obj_t BgL_rz00_6116;
										obj_t BgL_lz00_6115;

										BgL_lz00_6115 = BgL_arg1630z00_4515;
										BgL_rz00_6116 = BgL_arg1631z00_4516;
										BgL_rz00_4512 = BgL_rz00_6116;
										BgL_lz00_4511 = BgL_lz00_6115;
										goto BgL_recz00_4510;
									}
								}
						}
					}
				}
			}
		}

	}



/* &fsize-ev_let*1309 */
	obj_t BGl_z62fsiza7ezd2ev_letza21309zb5zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4105, obj_t BgL_ez00_4106, obj_t BgL_nz00_4107)
	{
		{	/* Eval/evaluate_fsize.scm 122 */
			{	/* Eval/evaluate_fsize.scm 123 */
				int BgL_nz00_4521;

				BgL_nz00_4521 = CINT(BgL_nz00_4107);
				{	/* Eval/evaluate_fsize.scm 124 */
					obj_t BgL_arg1616z00_4522;

					BgL_arg1616z00_4522 =
						(((BgL_ev_binderz00_bglt) COBJECT(
								((BgL_ev_binderz00_bglt)
									((BgL_ev_letza2za2_bglt) BgL_ez00_4106))))->BgL_valsz00);
					{
						obj_t BgL_lz00_4524;
						int BgL_nz00_4525;
						obj_t BgL_rz00_4526;

						BgL_lz00_4524 = BgL_arg1616z00_4522;
						BgL_nz00_4525 = BgL_nz00_4521;
						BgL_rz00_4526 = BINT(BgL_nz00_4521);
					BgL_recz00_4523:
						if (NULLP(BgL_lz00_4524))
							{	/* Eval/evaluate_fsize.scm 126 */
								int BgL_xz00_4527;

								{	/* Eval/evaluate_fsize.scm 126 */
									BgL_ev_exprz00_bglt BgL_arg1619z00_4528;

									BgL_arg1619z00_4528 =
										(((BgL_ev_binderz00_bglt) COBJECT(
												((BgL_ev_binderz00_bglt)
													((BgL_ev_letza2za2_bglt) BgL_ez00_4106))))->
										BgL_bodyz00);
									BgL_xz00_4527 =
										BGl_fsiza7eza7zz__evaluate_fsiza7eza7(BgL_arg1619z00_4528,
										BgL_nz00_4525);
								}
								return
									BGl_2maxz00zz__r4_numbers_6_5z00(BINT(BgL_xz00_4527),
									BgL_rz00_4526);
							}
						else
							{	/* Eval/evaluate_fsize.scm 127 */
								obj_t BgL_arg1620z00_4529;
								long BgL_arg1621z00_4530;
								obj_t BgL_arg1623z00_4531;

								BgL_arg1620z00_4529 = CDR(((obj_t) BgL_lz00_4524));
								BgL_arg1621z00_4530 = ((long) (BgL_nz00_4525) + ((long) 1));
								{	/* Eval/evaluate_fsize.scm 127 */
									int BgL_xz00_4532;

									{	/* Eval/evaluate_fsize.scm 127 */
										obj_t BgL_arg1624z00_4533;

										BgL_arg1624z00_4533 = CAR(((obj_t) BgL_lz00_4524));
										BgL_xz00_4532 =
											BGl_fsiza7eza7zz__evaluate_fsiza7eza7(
											((BgL_ev_exprz00_bglt) BgL_arg1624z00_4533),
											BgL_nz00_4525);
									}
									BgL_arg1623z00_4531 =
										BGl_2maxz00zz__r4_numbers_6_5z00(BINT(BgL_xz00_4532),
										BgL_rz00_4526);
								}
								{
									obj_t BgL_rz00_6143;
									int BgL_nz00_6141;
									obj_t BgL_lz00_6140;

									BgL_lz00_6140 = BgL_arg1620z00_4529;
									BgL_nz00_6141 = (int) (BgL_arg1621z00_4530);
									BgL_rz00_6143 = BgL_arg1623z00_4531;
									BgL_rz00_4526 = BgL_rz00_6143;
									BgL_nz00_4525 = BgL_nz00_6141;
									BgL_lz00_4524 = BgL_lz00_6140;
									goto BgL_recz00_4523;
								}
							}
					}
				}
			}
		}

	}



/* &fsize-ev_let1307 */
	obj_t BGl_z62fsiza7ezd2ev_let1307z17zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4108, obj_t BgL_ez00_4109, obj_t BgL_nz00_4110)
	{
		{	/* Eval/evaluate_fsize.scm 115 */
			{	/* Eval/evaluate_fsize.scm 116 */
				int BgL_nz00_4535;

				BgL_nz00_4535 = CINT(BgL_nz00_4110);
				{	/* Eval/evaluate_fsize.scm 117 */
					obj_t BgL_arg1608z00_4536;

					BgL_arg1608z00_4536 =
						(((BgL_ev_binderz00_bglt) COBJECT(
								((BgL_ev_binderz00_bglt)
									((BgL_ev_letz00_bglt) BgL_ez00_4109))))->BgL_valsz00);
					{
						obj_t BgL_lz00_4538;
						int BgL_nz00_4539;
						obj_t BgL_rz00_4540;

						BgL_lz00_4538 = BgL_arg1608z00_4536;
						BgL_nz00_4539 = BgL_nz00_4535;
						BgL_rz00_4540 = BINT(BgL_nz00_4535);
					BgL_recz00_4537:
						if (NULLP(BgL_lz00_4538))
							{	/* Eval/evaluate_fsize.scm 119 */
								int BgL_xz00_4541;

								{	/* Eval/evaluate_fsize.scm 119 */
									BgL_ev_exprz00_bglt BgL_arg1611z00_4542;

									BgL_arg1611z00_4542 =
										(((BgL_ev_binderz00_bglt) COBJECT(
												((BgL_ev_binderz00_bglt)
													((BgL_ev_letz00_bglt) BgL_ez00_4109))))->BgL_bodyz00);
									BgL_xz00_4541 =
										BGl_fsiza7eza7zz__evaluate_fsiza7eza7(BgL_arg1611z00_4542,
										BgL_nz00_4539);
								}
								return
									BGl_2maxz00zz__r4_numbers_6_5z00(BINT(BgL_xz00_4541),
									BgL_rz00_4540);
							}
						else
							{	/* Eval/evaluate_fsize.scm 120 */
								obj_t BgL_arg1612z00_4543;
								long BgL_arg1613z00_4544;
								obj_t BgL_arg1614z00_4545;

								BgL_arg1612z00_4543 = CDR(((obj_t) BgL_lz00_4538));
								BgL_arg1613z00_4544 = ((long) (BgL_nz00_4539) + ((long) 1));
								{	/* Eval/evaluate_fsize.scm 120 */
									int BgL_xz00_4546;

									{	/* Eval/evaluate_fsize.scm 120 */
										obj_t BgL_arg1615z00_4547;

										BgL_arg1615z00_4547 = CAR(((obj_t) BgL_lz00_4538));
										BgL_xz00_4546 =
											BGl_fsiza7eza7zz__evaluate_fsiza7eza7(
											((BgL_ev_exprz00_bglt) BgL_arg1615z00_4547),
											BgL_nz00_4539);
									}
									BgL_arg1614z00_4545 =
										BGl_2maxz00zz__r4_numbers_6_5z00(BINT(BgL_xz00_4546),
										BgL_rz00_4540);
								}
								{
									obj_t BgL_rz00_6170;
									int BgL_nz00_6168;
									obj_t BgL_lz00_6167;

									BgL_lz00_6167 = BgL_arg1612z00_4543;
									BgL_nz00_6168 = (int) (BgL_arg1613z00_4544);
									BgL_rz00_6170 = BgL_arg1614z00_4545;
									BgL_rz00_4540 = BgL_rz00_6170;
									BgL_nz00_4539 = BgL_nz00_6168;
									BgL_lz00_4538 = BgL_lz00_6167;
									goto BgL_recz00_4537;
								}
							}
					}
				}
			}
		}

	}



/* &fsize-ev_synchronize1305 */
	obj_t BGl_z62fsiza7ezd2ev_synchroniza7e1305zb0zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4111, obj_t BgL_ez00_4112, obj_t BgL_nz00_4113)
	{
		{	/* Eval/evaluate_fsize.scm 111 */
			{	/* Eval/evaluate_fsize.scm 112 */
				int BgL_nz00_4549;

				BgL_nz00_4549 = CINT(BgL_nz00_4113);
				{	/* Eval/evaluate_fsize.scm 113 */
					int BgL_arg1603z00_4550;
					obj_t BgL_arg1604z00_4551;

					BgL_arg1603z00_4550 =
						BGl_fsiza7eza7zz__evaluate_fsiza7eza7(
						(((BgL_ev_synchroniza7eza7_bglt) COBJECT(
									((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_4112)))->
							BgL_mutexz00), BgL_nz00_4549);
					{	/* Eval/evaluate_fsize.scm 113 */
						int BgL_xz00_4552;
						int BgL_yz00_4553;

						BgL_xz00_4552 =
							BGl_fsiza7eza7zz__evaluate_fsiza7eza7(
							(((BgL_ev_synchroniza7eza7_bglt) COBJECT(
										((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_4112)))->
								BgL_prelockz00), BgL_nz00_4549);
						BgL_yz00_4553 =
							BGl_fsiza7eza7zz__evaluate_fsiza7eza7(((
									(BgL_ev_synchroniza7eza7_bglt)
									COBJECT(((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_4112)))->
								BgL_bodyz00), BgL_nz00_4549);
						BgL_arg1604z00_4551 =
							BGl_2maxz00zz__r4_numbers_6_5z00(BINT(BgL_xz00_4552),
							BINT(BgL_yz00_4553));
					}
					return
						BGl_2maxz00zz__r4_numbers_6_5z00(BINT(BgL_arg1603z00_4550),
						BgL_arg1604z00_4551);
				}
			}
		}

	}



/* &fsize-ev_with-handle1303 */
	obj_t BGl_z62fsiza7ezd2ev_withzd2handle1303zc5zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4114, obj_t BgL_ez00_4115, obj_t BgL_nz00_4116)
	{
		{	/* Eval/evaluate_fsize.scm 107 */
			{	/* Eval/evaluate_fsize.scm 108 */
				int BgL_nz00_4555;

				BgL_nz00_4555 = CINT(BgL_nz00_4116);
				{	/* Eval/evaluate_fsize.scm 109 */
					int BgL_xz00_4556;
					int BgL_yz00_4557;

					BgL_xz00_4556 =
						BGl_fsiza7eza7zz__evaluate_fsiza7eza7(
						(((BgL_ev_withzd2handlerzd2_bglt) COBJECT(
									((BgL_ev_withzd2handlerzd2_bglt) BgL_ez00_4115)))->
							BgL_handlerz00), BgL_nz00_4555);
					BgL_yz00_4557 =
						BGl_fsiza7eza7zz__evaluate_fsiza7eza7(((
								(BgL_ev_withzd2handlerzd2_bglt)
								COBJECT(((BgL_ev_withzd2handlerzd2_bglt) BgL_ez00_4115)))->
							BgL_bodyz00), BgL_nz00_4555);
					return BGl_2maxz00zz__r4_numbers_6_5z00(BINT(BgL_xz00_4556),
						BINT(BgL_yz00_4557));
				}
			}
		}

	}



/* &fsize-ev_unwind-prot1301 */
	obj_t BGl_z62fsiza7ezd2ev_unwindzd2prot1301zc5zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4117, obj_t BgL_ez00_4118, obj_t BgL_nz00_4119)
	{
		{	/* Eval/evaluate_fsize.scm 103 */
			{	/* Eval/evaluate_fsize.scm 104 */
				int BgL_nz00_4559;

				BgL_nz00_4559 = CINT(BgL_nz00_4119);
				{	/* Eval/evaluate_fsize.scm 105 */
					int BgL_xz00_4560;
					int BgL_yz00_4561;

					BgL_xz00_4560 =
						BGl_fsiza7eza7zz__evaluate_fsiza7eza7(
						(((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(
									((BgL_ev_unwindzd2protectzd2_bglt) BgL_ez00_4118)))->
							BgL_ez00), BgL_nz00_4559);
					BgL_yz00_4561 =
						BGl_fsiza7eza7zz__evaluate_fsiza7eza7(((
								(BgL_ev_unwindzd2protectzd2_bglt)
								COBJECT(((BgL_ev_unwindzd2protectzd2_bglt) BgL_ez00_4118)))->
							BgL_bodyz00), BgL_nz00_4559);
					return BGl_2maxz00zz__r4_numbers_6_5z00(BINT(BgL_xz00_4560),
						BINT(BgL_yz00_4561));
				}
			}
		}

	}



/* &fsize-ev_bind-exit1299 */
	obj_t BGl_z62fsiza7ezd2ev_bindzd2exit1299zc5zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4120, obj_t BgL_ez00_4121, obj_t BgL_nz00_4122)
	{
		{	/* Eval/evaluate_fsize.scm 99 */
			{	/* Eval/evaluate_fsize.scm 100 */
				int BgL_tmpz00_6207;

				{	/* Eval/evaluate_fsize.scm 100 */
					int BgL_nz00_4563;

					BgL_nz00_4563 = CINT(BgL_nz00_4122);
					{	/* Eval/evaluate_fsize.scm 101 */
						BgL_ev_exprz00_bglt BgL_arg1593z00_4564;
						long BgL_arg1596z00_4565;

						BgL_arg1593z00_4564 =
							(((BgL_ev_bindzd2exitzd2_bglt) COBJECT(
									((BgL_ev_bindzd2exitzd2_bglt) BgL_ez00_4121)))->BgL_bodyz00);
						BgL_arg1596z00_4565 = ((long) (BgL_nz00_4563) + ((long) 1));
						BgL_tmpz00_6207 =
							BGl_fsiza7eza7zz__evaluate_fsiza7eza7(BgL_arg1593z00_4564,
							(int) (BgL_arg1596z00_4565));
				}}
				return BINT(BgL_tmpz00_6207);
			}
		}

	}



/* &fsize-ev_hook1297 */
	obj_t BGl_z62fsiza7ezd2ev_hook1297z17zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4123, obj_t BgL_ez00_4124, obj_t BgL_nz00_4125)
	{
		{	/* Eval/evaluate_fsize.scm 95 */
			{	/* Eval/evaluate_fsize.scm 96 */
				int BgL_tmpz00_6216;

				{	/* Eval/evaluate_fsize.scm 96 */
					int BgL_nz00_4567;

					BgL_nz00_4567 = CINT(BgL_nz00_4125);
					BgL_tmpz00_6216 =
						BGl_fsiza7eza7zz__evaluate_fsiza7eza7(
						(((BgL_ev_hookz00_bglt) COBJECT(
									((BgL_ev_hookz00_bglt) BgL_ez00_4124)))->BgL_ez00),
						BgL_nz00_4567);
				}
				return BINT(BgL_tmpz00_6216);
			}
		}

	}



/* &fsize-ev_prog21295 */
	obj_t BGl_z62fsiza7ezd2ev_prog21295z17zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4126, obj_t BgL_ez00_4127, obj_t BgL_nz00_4128)
	{
		{	/* Eval/evaluate_fsize.scm 91 */
			{	/* Eval/evaluate_fsize.scm 92 */
				int BgL_nz00_4569;

				BgL_nz00_4569 = CINT(BgL_nz00_4128);
				{	/* Eval/evaluate_fsize.scm 93 */
					int BgL_xz00_4570;
					int BgL_yz00_4571;

					BgL_xz00_4570 =
						BGl_fsiza7eza7zz__evaluate_fsiza7eza7(
						(((BgL_ev_prog2z00_bglt) COBJECT(
									((BgL_ev_prog2z00_bglt) BgL_ez00_4127)))->BgL_e1z00),
						BgL_nz00_4569);
					BgL_yz00_4571 =
						BGl_fsiza7eza7zz__evaluate_fsiza7eza7((((BgL_ev_prog2z00_bglt)
								COBJECT(((BgL_ev_prog2z00_bglt) BgL_ez00_4127)))->BgL_e2z00),
						BgL_nz00_4569);
					return BGl_2maxz00zz__r4_numbers_6_5z00(BINT(BgL_xz00_4570),
						BINT(BgL_yz00_4571));
				}
			}
		}

	}



/* &fsize-ev_list1293 */
	obj_t BGl_z62fsiza7ezd2ev_list1293z17zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4129, obj_t BgL_ez00_4130, obj_t BgL_nz00_4131)
	{
		{	/* Eval/evaluate_fsize.scm 84 */
			{	/* Eval/evaluate_fsize.scm 85 */
				int BgL_nz00_4573;

				BgL_nz00_4573 = CINT(BgL_nz00_4131);
				{	/* Eval/evaluate_fsize.scm 86 */
					obj_t BgL_arg1580z00_4574;

					BgL_arg1580z00_4574 =
						(((BgL_ev_listz00_bglt) COBJECT(
								((BgL_ev_listz00_bglt) BgL_ez00_4130)))->BgL_argsz00);
					{
						obj_t BgL_lz00_4576;
						obj_t BgL_rz00_4577;

						BgL_lz00_4576 = BgL_arg1580z00_4574;
						BgL_rz00_4577 = BINT(BgL_nz00_4573);
					BgL_recz00_4575:
						if (NULLP(BgL_lz00_4576))
							{	/* Eval/evaluate_fsize.scm 87 */
								return BgL_rz00_4577;
							}
						else
							{	/* Eval/evaluate_fsize.scm 89 */
								obj_t BgL_arg1583z00_4578;
								obj_t BgL_arg1584z00_4579;

								BgL_arg1583z00_4578 = CDR(((obj_t) BgL_lz00_4576));
								{	/* Eval/evaluate_fsize.scm 89 */
									int BgL_yz00_4580;

									{	/* Eval/evaluate_fsize.scm 89 */
										obj_t BgL_arg1587z00_4581;

										BgL_arg1587z00_4581 = CAR(((obj_t) BgL_lz00_4576));
										BgL_yz00_4580 =
											BGl_fsiza7eza7zz__evaluate_fsiza7eza7(
											((BgL_ev_exprz00_bglt) BgL_arg1587z00_4581),
											BgL_nz00_4573);
									}
									BgL_arg1584z00_4579 =
										BGl_2maxz00zz__r4_numbers_6_5z00(BgL_rz00_4577,
										BINT(BgL_yz00_4580));
								}
								{
									obj_t BgL_rz00_6246;
									obj_t BgL_lz00_6245;

									BgL_lz00_6245 = BgL_arg1583z00_4578;
									BgL_rz00_6246 = BgL_arg1584z00_4579;
									BgL_rz00_4577 = BgL_rz00_6246;
									BgL_lz00_4576 = BgL_lz00_6245;
									goto BgL_recz00_4575;
								}
							}
					}
				}
			}
		}

	}



/* &fsize-ev_if1291 */
	obj_t BGl_z62fsiza7ezd2ev_if1291z17zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4132, obj_t BgL_ez00_4133, obj_t BgL_nz00_4134)
	{
		{	/* Eval/evaluate_fsize.scm 80 */
			{	/* Eval/evaluate_fsize.scm 81 */
				int BgL_nz00_4583;

				BgL_nz00_4583 = CINT(BgL_nz00_4134);
				{	/* Eval/evaluate_fsize.scm 82 */
					int BgL_arg1574z00_4584;
					obj_t BgL_arg1575z00_4585;

					BgL_arg1574z00_4584 =
						BGl_fsiza7eza7zz__evaluate_fsiza7eza7(
						(((BgL_ev_ifz00_bglt) COBJECT(
									((BgL_ev_ifz00_bglt) BgL_ez00_4133)))->BgL_pz00),
						BgL_nz00_4583);
					{	/* Eval/evaluate_fsize.scm 82 */
						int BgL_xz00_4586;
						int BgL_yz00_4587;

						BgL_xz00_4586 =
							BGl_fsiza7eza7zz__evaluate_fsiza7eza7(
							(((BgL_ev_ifz00_bglt) COBJECT(
										((BgL_ev_ifz00_bglt) BgL_ez00_4133)))->BgL_tz00),
							BgL_nz00_4583);
						BgL_yz00_4587 =
							BGl_fsiza7eza7zz__evaluate_fsiza7eza7((((BgL_ev_ifz00_bglt)
									COBJECT(((BgL_ev_ifz00_bglt) BgL_ez00_4133)))->BgL_ez00),
							BgL_nz00_4583);
						BgL_arg1575z00_4585 =
							BGl_2maxz00zz__r4_numbers_6_5z00(BINT(BgL_xz00_4586),
							BINT(BgL_yz00_4587));
					}
					return
						BGl_2maxz00zz__r4_numbers_6_5z00(BINT(BgL_arg1574z00_4584),
						BgL_arg1575z00_4585);
				}
			}
		}

	}



/* &fsize-ev_litt1289 */
	obj_t BGl_z62fsiza7ezd2ev_litt1289z17zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4135, obj_t BgL_ez00_4136, obj_t BgL_nz00_4137)
	{
		{	/* Eval/evaluate_fsize.scm 77 */
			return BINT(CINT(BgL_nz00_4137));
		}

	}



/* &fsize-ev_global1287 */
	obj_t BGl_z62fsiza7ezd2ev_global1287z17zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4138, obj_t BgL_varz00_4139, obj_t BgL_nz00_4140)
	{
		{	/* Eval/evaluate_fsize.scm 74 */
			return BINT(CINT(BgL_nz00_4140));
		}

	}



/* &fsize-ev_var1285 */
	obj_t BGl_z62fsiza7ezd2ev_var1285z17zz__evaluate_fsiza7eza7(obj_t
		BgL_envz00_4141, obj_t BgL_ez00_4142, obj_t BgL_nz00_4143)
	{
		{	/* Eval/evaluate_fsize.scm 71 */
			return BINT(CINT(BgL_nz00_4143));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__evaluate_fsiza7eza7()
	{
		{	/* Eval/evaluate_fsize.scm 16 */
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 121046386),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 251315035),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 443936798),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 439352636),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long)
					228151379),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__ppz00(((long) 233942106),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 220647683),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 177147628),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__expandz00(((long) 414007030),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 528345319),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__evcompilez00(((long) 492753248),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__everrorz00(((long) 375872251),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__evmodulez00(((long) 505900559),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			BGl_modulezd2initializa7ationz75zz__evaluate_uncompz00(((long) 193509655),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
			return BGl_modulezd2initializa7ationz75zz__evaluate_typesz00(((long) 0),
				BSTRING_TO_STRING(BGl_string2507z00zz__evaluate_fsiza7eza7));
		}

	}

#ifdef __cplusplus
}
#endif
