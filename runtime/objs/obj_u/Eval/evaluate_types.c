/*===========================================================================*/
/*   (Eval/evaluate_types.scm)                                               */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/evaluate_types.scm -indent -o objs/obj_u/Eval/evaluate_types.c) */
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


	static BgL_ev_gotoz00_bglt BGl_z62lambda1926z62zz__evaluate_typesz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_ev_synchroniza7eza7_bglt
		BGl_z62lambda1764z62zz__evaluate_typesz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static BgL_ev_gotoz00_bglt BGl_z62lambda1928z62zz__evaluate_typesz00(obj_t);
	static BgL_ev_synchroniza7eza7_bglt
		BGl_z62lambda1766z62zz__evaluate_typesz00(obj_t);
	static obj_t BGl_symbol2721z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2562z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2728z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2569z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62lambda1934z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1773z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1935z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1774z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static BgL_ev_varz00_bglt BGl_z62lambda1939z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31919ze3ze5zz__evaluate_typesz00(obj_t);
	static BgL_ev_exprz00_bglt BGl_z62lambda1778z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1779z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2734z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2574z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2578z00zz__evaluate_typesz00 = BUNSPEC;
	extern obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	static obj_t BGl_z62lambda1940z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static BgL_ev_labelsz00_bglt BGl_z62lambda1944z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1945z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static BgL_ev_exprz00_bglt BGl_z62lambda1783z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1784z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1949z62zz__evaluate_typesz00(obj_t, obj_t);
	static BgL_ev_exprz00_bglt BGl_z62lambda1789z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_symbol2740z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2745z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2583z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62lambda1950z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1790z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static BgL_ev_appz00_bglt BGl_z62lambda1956z62zz__evaluate_typesz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_ev_appz00_bglt BGl_z62lambda1958z62zz__evaluate_typesz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31848ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	static BgL_ev_binderz00_bglt BGl_z62lambda1797z62zz__evaluate_typesz00(obj_t,
		obj_t, obj_t, obj_t);
	static BgL_ev_binderz00_bglt BGl_z62lambda1799z62zz__evaluate_typesz00(obj_t);
	static obj_t BGl_symbol2751z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2755z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2594z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2599z00zz__evaluate_typesz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_ev_letrecz00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62lambda1964z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1965z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static BgL_ev_exprz00_bglt BGl_z62lambda1969z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_symbol2764z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2766z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62lambda1970z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_ev_letz00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62lambda1974z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1975z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2771z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2776z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62lambda1980z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1981z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static BgL_ev_absz00_bglt BGl_z62lambda1987z62zz__evaluate_typesz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_ev_absz00_bglt BGl_z62lambda1989z62zz__evaluate_typesz00(obj_t);
	static obj_t BGl_symbol2781z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2789z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_objectzd2initzd2zz__evaluate_typesz00();
	static obj_t BGl_z62lambda1996z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1997z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2791z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31869ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32050ze3ze5zz__evaluate_typesz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31991ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_ev_labelsz00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza32036ze3ze5zz__evaluate_typesz00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__evaluate_typesz00();
	BGL_EXPORTED_DEF obj_t BGl_ev_absz00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31430ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_ev_ifz00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31612ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_ev_gotoz00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza32059ze3ze5zz__evaluate_typesz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31703ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_ev_orz00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31454ze3ze5zz__evaluate_typesz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_ev_varz00zz__evaluate_typesz00 = BUNSPEC;
	static BgL_ev_exprz00_bglt BGl_z62lambda1426z62zz__evaluate_typesz00(obj_t);
	static BgL_ev_exprz00_bglt BGl_z62lambda1428z62zz__evaluate_typesz00(obj_t);
	extern obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__evaluate_typesz00();
	static BgL_ev_varz00_bglt BGl_z62lambda1436z62zz__evaluate_typesz00(obj_t,
		obj_t, obj_t, obj_t);
	static BgL_ev_varz00_bglt BGl_z62lambda1438z62zz__evaluate_typesz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31545ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_ev_andz00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62lambda1600z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1444z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1445z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static BgL_ev_hookz00_bglt BGl_z62lambda1607z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static BgL_ev_hookz00_bglt BGl_z62lambda1609z62zz__evaluate_typesz00(obj_t);
	static obj_t BGl_z62lambda1452z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1453z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static BgL_ev_exprz00_bglt BGl_z62lambda1616z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1617z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1458z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1459z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static BgL_ev_trapz00_bglt BGl_z62lambda1624z62zz__evaluate_typesz00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_ev_appz00zz__evaluate_typesz00 = BUNSPEC;
	static BgL_ev_globalz00_bglt BGl_z62lambda1465z62zz__evaluate_typesz00(obj_t,
		obj_t, obj_t, obj_t);
	static BgL_ev_trapz00_bglt BGl_z62lambda1627z62zz__evaluate_typesz00(obj_t);
	static BgL_ev_globalz00_bglt BGl_z62lambda1467z62zz__evaluate_typesz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31726ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1473z62zz__evaluate_typesz00(obj_t, obj_t);
	static BgL_ev_setlocalz00_bglt
		BGl_z62lambda1635z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1474z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static BgL_ev_setlocalz00_bglt
		BGl_z62lambda1638z62zz__evaluate_typesz00(obj_t);
	static obj_t BGl_z62lambda1478z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31565ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1479z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static BgL_ev_varz00_bglt BGl_z62lambda1644z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1645z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1807z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1808z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1485z62zz__evaluate_typesz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_ev_synchroniza7eza7zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62lambda1486z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2603z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2607z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62lambda1812z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1813z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static BgL_ev_setglobalz00_bglt
		BGl_z62lambda1653z62zz__evaluate_typesz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static BgL_ev_setglobalz00_bglt
		BGl_z62lambda1655z62zz__evaluate_typesz00(obj_t);
	static BgL_ev_exprz00_bglt BGl_z62lambda1817z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static BgL_ev_littz00_bglt BGl_z62lambda1494z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1818z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static BgL_ev_littz00_bglt BGl_z62lambda1496z62zz__evaluate_typesz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31907ze3ze5zz__evaluate_typesz00(obj_t);
	static obj_t BGl_symbol2612z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62lambda1661z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1662z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static BgL_ev_letz00_bglt BGl_z62lambda1824z62zz__evaluate_typesz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_ev_letz00_bglt BGl_z62lambda1826z62zz__evaluate_typesz00(obj_t);
	static obj_t BGl_z62lambda1666z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1667z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31835ze3ze5zz__evaluate_typesz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31746ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31657ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_symbol2621z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2625z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2465z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2467z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62lambda1833z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1834z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1673z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1674z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2632z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2471z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2473z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2638z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2478z00zz__evaluate_typesz00 = BUNSPEC;
	static BgL_ev_letza2za2_bglt BGl_z62lambda1843z62zz__evaluate_typesz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_ev_letza2za2_bglt BGl_z62lambda1846z62zz__evaluate_typesz00(obj_t);
	static BgL_ev_defglobalz00_bglt
		BGl_z62lambda1687z62zz__evaluate_typesz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static BgL_ev_defglobalz00_bglt
		BGl_z62lambda1689z62zz__evaluate_typesz00(obj_t);
	static obj_t BGl_symbol2642z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2480z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2484z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2649z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2489z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62lambda1854z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1855z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_ev_defglobalz00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31692ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31498ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	static BgL_ev_bindzd2exitzd2_bglt
		BGl_z62lambda1699z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2653z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2493z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2657z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2499z00zz__evaluate_typesz00 = BUNSPEC;
	static BgL_ev_letrecz00_bglt BGl_z62lambda1863z62zz__evaluate_typesz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31960ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	static BgL_ev_letrecz00_bglt BGl_z62lambda1866z62zz__evaluate_typesz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31588ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_symbol2664z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2669z00zz__evaluate_typesz00 = BUNSPEC;
	static BgL_ev_labelsz00_bglt BGl_z62lambda1875z62zz__evaluate_typesz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_ev_labelsz00_bglt BGl_z62lambda1877z62zz__evaluate_typesz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31856ze3ze5zz__evaluate_typesz00(obj_t);
	static obj_t BGl_symbol2674z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62lambda1884z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1885z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1889z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_symbol2682z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2687z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zz__evaluate_typesz00();
	static obj_t BGl_z62lambda1890z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1896z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1897z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31769ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_symbol2696z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__evaluate_typesz00();
	BGL_EXPORTED_DEF obj_t BGl_ev_prog2z00zz__evaluate_typesz00 = BUNSPEC;
	extern obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_ev_bindzd2exitzd2zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza32026ze3ze5zz__evaluate_typesz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_ev_unwindzd2protectzd2zz__evaluate_typesz00 =
		BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza32043ze3ze5zz__evaluate_typesz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31879ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_ev_letza2za2zz__evaluate_typesz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_ev_trapz00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31898ze3ze5zz__evaluate_typesz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_ev_setglobalz00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62lambda2001z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2002z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2006z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2007z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31440ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_ev_hookz00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62lambda2012z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2013z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static BgL_ev_exprz00_bglt BGl_z62lambda2018z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda2019z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2024z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2025z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2034z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2035z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2041z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2042z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2048z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2049z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31517ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__evaluate_typesz00(long, char *);
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
	BGL_EXPORTED_DEF obj_t BGl_ev_globalz00zz__evaluate_typesz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_ev_binderz00zz__evaluate_typesz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_ev_listz00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31801ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda2057z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2058z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_ev_littz00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31640ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1506z62zz__evaluate_typesz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1507z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__evaluate_typesz00();
	static BgL_ev_ifz00_bglt BGl_z62lambda1513z62zz__evaluate_typesz00(obj_t,
		obj_t, obj_t, obj_t);
	static BgL_ev_ifz00_bglt BGl_z62lambda1515z62zz__evaluate_typesz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__evaluate_typesz00();
	BGL_EXPORTED_DEF obj_t BGl_ev_withzd2handlerzd2zz__evaluate_typesz00 =
		BUNSPEC;
	static BgL_ev_exprz00_bglt BGl_z62lambda1521z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1522z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_objectz00zz__objectz00;
	static BgL_ev_exprz00_bglt BGl_z62lambda1526z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1527z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static BgL_ev_exprz00_bglt BGl_z62lambda1532z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1533z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static BgL_ev_bindzd2exitzd2_bglt
		BGl_z62lambda1701z62zz__evaluate_typesz00(obj_t);
	static BgL_ev_listz00_bglt BGl_z62lambda1541z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static BgL_ev_listz00_bglt BGl_z62lambda1543z62zz__evaluate_typesz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_ev_exprz00zz__evaluate_typesz00 = BUNSPEC;
	static BgL_ev_varz00_bglt BGl_z62lambda1709z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31629ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_symbol2504z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2508z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_z62lambda1710z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1552z62zz__evaluate_typesz00(obj_t, obj_t);
	static BgL_ev_exprz00_bglt BGl_z62lambda1714z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1553z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1715z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2513z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2517z00zz__evaluate_typesz00 = BUNSPEC;
	static BgL_ev_unwindzd2protectzd2_bglt
		BGl_z62lambda1722z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static BgL_ev_orz00_bglt BGl_z62lambda1561z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static BgL_ev_unwindzd2protectzd2_bglt
		BGl_z62lambda1724z62zz__evaluate_typesz00(obj_t);
	static BgL_ev_orz00_bglt BGl_z62lambda1563z62zz__evaluate_typesz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31930ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31469ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_symbol2521z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2525z00zz__evaluate_typesz00 = BUNSPEC;
	static BgL_ev_exprz00_bglt BGl_z62lambda1730z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1731z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static BgL_ev_andz00_bglt BGl_z62lambda1571z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static BgL_ev_exprz00_bglt BGl_z62lambda1735z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static BgL_ev_andz00_bglt BGl_z62lambda1574z62zz__evaluate_typesz00(obj_t);
	static obj_t BGl_z62lambda1736z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2530z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2534z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2539z00zz__evaluate_typesz00 = BUNSPEC;
	static BgL_ev_withzd2handlerzd2_bglt
		BGl_z62lambda1742z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1905z62zz__evaluate_typesz00(obj_t, obj_t);
	static BgL_ev_withzd2handlerzd2_bglt
		BGl_z62lambda1744z62zz__evaluate_typesz00(obj_t);
	static obj_t BGl_z62lambda1906z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static BgL_ev_prog2z00_bglt BGl_z62lambda1583z62zz__evaluate_typesz00(obj_t,
		obj_t, obj_t);
	static BgL_ev_prog2z00_bglt BGl_z62lambda1585z62zz__evaluate_typesz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31576ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_symbol2701z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2544z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2549z00zz__evaluate_typesz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_ev_setlocalz00zz__evaluate_typesz00 = BUNSPEC;
	static BgL_ev_exprz00_bglt BGl_z62lambda1911z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1912z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static BgL_ev_exprz00_bglt BGl_z62lambda1751z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1752z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1917z62zz__evaluate_typesz00(obj_t, obj_t);
	static BgL_ev_exprz00_bglt BGl_z62lambda1594z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1918z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1595z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static BgL_ev_exprz00_bglt BGl_z62lambda1757z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1758z62zz__evaluate_typesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31828ze3ze5zz__evaluate_typesz00(obj_t,
		obj_t);
	static BgL_ev_exprz00_bglt BGl_z62lambda1599z62zz__evaluate_typesz00(obj_t,
		obj_t);
	static obj_t BGl_symbol2711z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2553z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2717z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t BGl_symbol2557z00zz__evaluate_typesz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2500z00zz__evaluate_typesz00,
		BgL_bgl_string2500za700za7za7_2793za7, "mod", 3);
	      DEFINE_STRING(BGl_string2505z00zz__evaluate_typesz00,
		BgL_bgl_string2505za700za7za7_2794za7, "ev_global", 9);
	      DEFINE_STRING(BGl_string2509z00zz__evaluate_typesz00,
		BgL_bgl_string2509za700za7za7_2795za7, "value", 5);
	      DEFINE_STRING(BGl_string2514z00zz__evaluate_typesz00,
		BgL_bgl_string2514za700za7za7_2796za7, "ev_litt", 7);
	      DEFINE_STRING(BGl_string2518z00zz__evaluate_typesz00,
		BgL_bgl_string2518za700za7za7_2797za7, "p", 1);
	      DEFINE_STRING(BGl_string2522z00zz__evaluate_typesz00,
		BgL_bgl_string2522za700za7za7_2798za7, "t", 1);
	      DEFINE_STRING(BGl_string2526z00zz__evaluate_typesz00,
		BgL_bgl_string2526za700za7za7_2799za7, "e", 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2601z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1710za7622800z00,
		BGl_z62lambda1710z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2602z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1709za7622801z00,
		BGl_z62lambda1709z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2605z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1715za7622802z00,
		BGl_z62lambda1715z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2606z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1714za7622803z00,
		BGl_z62lambda1714z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2531z00zz__evaluate_typesz00,
		BgL_bgl_string2531za700za7za7_2804za7, "ev_if", 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2609z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2805za7,
		BGl_z62zc3z04anonymousza31703ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2535z00zz__evaluate_typesz00,
		BgL_bgl_string2535za700za7za7_2806za7, "args", 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2610z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1701za7622807z00,
		BGl_z62lambda1701z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2611z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1699za7622808z00,
		BGl_z62lambda1699z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2614z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1731za7622809z00,
		BGl_z62lambda1731z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2615z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1730za7622810z00,
		BGl_z62lambda1730z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2616z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1736za7622811z00,
		BGl_z62lambda1736z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2702z00zz__evaluate_typesz00,
		BgL_bgl_string2702za700za7za7_2812za7, "stk", 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2617z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1735za7622813z00,
		BGl_z62lambda1735z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2540z00zz__evaluate_typesz00,
		BgL_bgl_string2540za700za7za7_2814za7, "ev_list", 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2618z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2815za7,
		BGl_z62zc3z04anonymousza31726ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2619z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1724za7622816z00,
		BGl_z62lambda1724z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2545z00zz__evaluate_typesz00,
		BgL_bgl_string2545za700za7za7_2817za7, "ev_or", 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2620z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1722za7622818z00,
		BGl_z62lambda1722z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2623z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1752za7622819z00,
		BGl_z62lambda1752z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2624z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1751za7622820z00,
		BGl_z62lambda1751z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2462z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2821za7,
		BGl_z62zc3z04anonymousza31430ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2463z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1428za7622822z00,
		BGl_z62lambda1428z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2464z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1426za7622823z00,
		BGl_z62lambda1426z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2712z00zz__evaluate_typesz00,
		BgL_bgl_string2712za700za7za7_2824za7, "ev_labels", 9);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2627z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1758za7622825z00,
		BGl_z62lambda1758z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2550z00zz__evaluate_typesz00,
		BgL_bgl_string2550za700za7za7_2826za7, "ev_and", 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2628z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1757za7622827z00,
		BGl_z62lambda1757z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2629z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2828za7,
		BGl_z62zc3z04anonymousza31746ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2554z00zz__evaluate_typesz00,
		BgL_bgl_string2554za700za7za7_2829za7, "e1", 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2469z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1445za7622830z00,
		BGl_z62lambda1445z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2718z00zz__evaluate_typesz00,
		BgL_bgl_string2718za700za7za7_2831za7, "label", 5);
	      DEFINE_STRING(BGl_string2558z00zz__evaluate_typesz00,
		BgL_bgl_string2558za700za7za7_2832za7, "e2", 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2630z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1744za7622833z00,
		BGl_z62lambda1744z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2631z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1742za7622834z00,
		BGl_z62lambda1742z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2470z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1444za7622835z00,
		BGl_z62lambda1444z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2634z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1774za7622836z00,
		BGl_z62lambda1774z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2635z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1773za7622837z00,
		BGl_z62lambda1773z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2636z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1779za7622838z00,
		BGl_z62lambda1779z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2722z00zz__evaluate_typesz00,
		BgL_bgl_string2722za700za7za7_2839za7, "labels", 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2637z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1778za7622840z00,
		BGl_z62lambda1778z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2475z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2841za7,
		BGl_z62zc3z04anonymousza31454ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2476z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1453za7622842z00,
		BGl_z62lambda1453z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2477z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1452za7622843z00,
		BGl_z62lambda1452z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2563z00zz__evaluate_typesz00,
		BgL_bgl_string2563za700za7za7_2844za7, "ev_prog2", 8);
	      DEFINE_STRING(BGl_string2729z00zz__evaluate_typesz00,
		BgL_bgl_string2729za700za7za7_2845za7, "ev_goto", 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2640z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1784za7622846z00,
		BGl_z62lambda1784z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2641z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1783za7622847z00,
		BGl_z62lambda1783z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2644z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1790za7622848z00,
		BGl_z62lambda1790z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2482z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1459za7622849z00,
		BGl_z62lambda1459z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2645z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1789za7622850z00,
		BGl_z62lambda1789z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2483z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1458za7622851z00,
		BGl_z62lambda1458z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2646z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2852za7,
		BGl_z62zc3z04anonymousza31769ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2647z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1766za7622853z00,
		BGl_z62lambda1766z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2570z00zz__evaluate_typesz00,
		BgL_bgl_string2570za700za7za7_2854za7, "ev_hook", 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2648z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1764za7622855z00,
		BGl_z62lambda1764z62zz__evaluate_typesz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2486z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2856za7,
		BGl_z62zc3z04anonymousza31440ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2487z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1438za7622857z00,
		BGl_z62lambda1438z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2735z00zz__evaluate_typesz00,
		BgL_bgl_string2735za700za7za7_2858za7, "fun", 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2488z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1436za7622859z00,
		BGl_z62lambda1436z62zz__evaluate_typesz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2575z00zz__evaluate_typesz00,
		BgL_bgl_string2575za700za7za7_2860za7, "ev_trap", 7);
	      DEFINE_STRING(BGl_string2579z00zz__evaluate_typesz00,
		BgL_bgl_string2579za700za7za7_2861za7, "v", 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2651z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1808za7622862z00,
		BGl_z62lambda1808z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2652z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1807za7622863z00,
		BGl_z62lambda1807z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2491z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1474za7622864z00,
		BGl_z62lambda1474z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2492z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1473za7622865z00,
		BGl_z62lambda1473z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2655z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1813za7622866z00,
		BGl_z62lambda1813z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2741z00zz__evaluate_typesz00,
		BgL_bgl_string2741za700za7za7_2867za7, "tail?", 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2656z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1812za7622868z00,
		BGl_z62lambda1812z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2495z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1479za7622869z00,
		BGl_z62lambda1479z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2496z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1478za7622870z00,
		BGl_z62lambda1478z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2659z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1818za7622871z00,
		BGl_z62lambda1818z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2497z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1486za7622872z00,
		BGl_z62lambda1486z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2498z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1485za7622873z00,
		BGl_z62lambda1485z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2746z00zz__evaluate_typesz00,
		BgL_bgl_string2746za700za7za7_2874za7, "ev_app", 6);
	      DEFINE_STRING(BGl_string2584z00zz__evaluate_typesz00,
		BgL_bgl_string2584za700za7za7_2875za7, "ev_setlocal", 11);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2660z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1817za7622876z00,
		BGl_z62lambda1817z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2661z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2877za7,
		BGl_z62zc3z04anonymousza31801ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2662z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1799za7622878z00,
		BGl_z62lambda1799z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2663z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1797za7622879z00,
		BGl_z62lambda1797z62zz__evaluate_typesz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2666z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2880za7,
		BGl_z62zc3z04anonymousza31835ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2752z00zz__evaluate_typesz00,
		BgL_bgl_string2752za700za7za7_2881za7, "where", 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2667z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1834za7622882z00,
		BGl_z62lambda1834z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2668z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1833za7622883z00,
		BGl_z62lambda1833z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2756z00zz__evaluate_typesz00,
		BgL_bgl_string2756za700za7za7_2884za7, "arity", 5);
	      DEFINE_STRING(BGl_string2595z00zz__evaluate_typesz00,
		BgL_bgl_string2595za700za7za7_2885za7, "ev_setglobal", 12);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2671z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2886za7,
		BGl_z62zc3z04anonymousza31828ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2672z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1826za7622887z00,
		BGl_z62lambda1826z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2673z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1824za7622888z00,
		BGl_z62lambda1824z62zz__evaluate_typesz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2676z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2889za7,
		BGl_z62zc3z04anonymousza31856ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2677z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1855za7622890z00,
		BGl_z62lambda1855z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2678z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1854za7622891z00,
		BGl_z62lambda1854z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2679z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2892za7,
		BGl_z62zc3z04anonymousza31848ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2765z00zz__evaluate_typesz00,
		BgL_bgl_string2765za700za7za7_2893za7, "size", 4);
	      DEFINE_STRING(BGl_string2767z00zz__evaluate_typesz00,
		BgL_bgl_string2767za700za7za7_2894za7, "int", 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2680z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1846za7622895z00,
		BGl_z62lambda1846z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2681z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1843za7622896z00,
		BGl_z62lambda1843z62zz__evaluate_typesz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2684z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2897za7,
		BGl_z62zc3z04anonymousza31869ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2685z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1866za7622898z00,
		BGl_z62lambda1866z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2686z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1863za7622899z00,
		BGl_z62lambda1863z62zz__evaluate_typesz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2772z00zz__evaluate_typesz00,
		BgL_bgl_string2772za700za7za7_2900za7, "bind", 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2689z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1885za7622901z00,
		BGl_z62lambda1885z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2777z00zz__evaluate_typesz00,
		BgL_bgl_string2777za700za7za7_2902za7, "free", 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2690z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1884za7622903z00,
		BGl_z62lambda1884z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2691z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1890za7622904z00,
		BGl_z62lambda1890z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2692z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1889za7622905z00,
		BGl_z62lambda1889z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2693z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2906za7,
		BGl_z62zc3z04anonymousza31898ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2694z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1897za7622907z00,
		BGl_z62lambda1897z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2695z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1896za7622908z00,
		BGl_z62lambda1896z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2782z00zz__evaluate_typesz00,
		BgL_bgl_string2782za700za7za7_2909za7, "inner", 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2698z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2910za7,
		BGl_z62zc3z04anonymousza31907ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2699z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1906za7622911z00,
		BGl_z62lambda1906z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2790z00zz__evaluate_typesz00,
		BgL_bgl_string2790za700za7za7_2912za7, "ev_abs", 6);
	      DEFINE_STRING(BGl_string2792z00zz__evaluate_typesz00,
		BgL_bgl_string2792za700za7za7_2913za7, "_", 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2501z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2914za7,
		BGl_z62zc3z04anonymousza31469ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2502z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1467za7622915z00,
		BGl_z62lambda1467z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2503z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1465za7622916z00,
		BGl_z62lambda1465z62zz__evaluate_typesz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2506z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1507za7622917z00,
		BGl_z62lambda1507z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2507z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1506za7622918z00,
		BGl_z62lambda1506z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2510z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2919za7,
		BGl_z62zc3z04anonymousza31498ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2511z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1496za7622920z00,
		BGl_z62lambda1496z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2512z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1494za7622921z00,
		BGl_z62lambda1494z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2600z00zz__evaluate_typesz00,
		BgL_bgl_string2600za700za7za7_2922za7, "ev_defglobal", 12);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2515z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1522za7622923z00,
		BGl_z62lambda1522z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2516z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1521za7622924z00,
		BGl_z62lambda1521z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2604z00zz__evaluate_typesz00,
		BgL_bgl_string2604za700za7za7_2925za7, "var", 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2519z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1527za7622926z00,
		BGl_z62lambda1527z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2608z00zz__evaluate_typesz00,
		BgL_bgl_string2608za700za7za7_2927za7, "body", 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2520z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1526za7622928z00,
		BGl_z62lambda1526z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2523z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1533za7622929z00,
		BGl_z62lambda1533z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2524z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1532za7622930z00,
		BGl_z62lambda1532z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2527z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2931za7,
		BGl_z62zc3z04anonymousza31517ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2613z00zz__evaluate_typesz00,
		BgL_bgl_string2613za700za7za7_2932za7, "ev_bind-exit", 12);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2528z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1515za7622933z00,
		BGl_z62lambda1515z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2529z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1513za7622934z00,
		BGl_z62lambda1513z62zz__evaluate_typesz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2532z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1553za7622935z00,
		BGl_z62lambda1553z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2533z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1552za7622936z00,
		BGl_z62lambda1552z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2536z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2937za7,
		BGl_z62zc3z04anonymousza31545ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2622z00zz__evaluate_typesz00,
		BgL_bgl_string2622za700za7za7_2938za7, "ev_unwind-protect", 17);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2537z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1543za7622939z00,
		BGl_z62lambda1543z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2538z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1541za7622940z00,
		BGl_z62lambda1541z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2626z00zz__evaluate_typesz00,
		BgL_bgl_string2626za700za7za7_2941za7, "handler", 7);
	      DEFINE_STRING(BGl_string2466z00zz__evaluate_typesz00,
		BgL_bgl_string2466za700za7za7_2942za7, "ev_expr", 7);
	      DEFINE_STRING(BGl_string2468z00zz__evaluate_typesz00,
		BgL_bgl_string2468za700za7za7_2943za7, "__evaluate_types", 16);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2700z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1905za7622944z00,
		BGl_z62lambda1905z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2703z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1912za7622945z00,
		BGl_z62lambda1912z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2541z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2946za7,
		BGl_z62zc3z04anonymousza31565ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2704z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1911za7622947z00,
		BGl_z62lambda1911z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2542z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1563za7622948z00,
		BGl_z62lambda1563z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2705z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2949za7,
		BGl_z62zc3z04anonymousza31919ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2543z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1561za7622950z00,
		BGl_z62lambda1561z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2706z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1918za7622951z00,
		BGl_z62lambda1918z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2707z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1917za7622952z00,
		BGl_z62lambda1917z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2708z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2953za7,
		BGl_z62zc3z04anonymousza31879ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2546z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2954za7,
		BGl_z62zc3z04anonymousza31576ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2709z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1877za7622955z00,
		BGl_z62lambda1877z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2547z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1574za7622956z00,
		BGl_z62lambda1574z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2633z00zz__evaluate_typesz00,
		BgL_bgl_string2633za700za7za7_2957za7, "ev_with-handler", 15);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2548z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1571za7622958z00,
		BGl_z62lambda1571z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2472z00zz__evaluate_typesz00,
		BgL_bgl_string2472za700za7za7_2959za7, "name", 4);
	      DEFINE_STRING(BGl_string2474z00zz__evaluate_typesz00,
		BgL_bgl_string2474za700za7za7_2960za7, "symbol", 6);
	      DEFINE_STRING(BGl_string2639z00zz__evaluate_typesz00,
		BgL_bgl_string2639za700za7za7_2961za7, "mutex", 5);
	      DEFINE_STRING(BGl_string2479z00zz__evaluate_typesz00,
		BgL_bgl_string2479za700za7za7_2962za7, "eff", 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2710z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1875za7622963z00,
		BGl_z62lambda1875z62zz__evaluate_typesz00, 0L, BUNSPEC, 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2713z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1935za7622964z00,
		BGl_z62lambda1935z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2551z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1595za7622965z00,
		BGl_z62lambda1595z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2714z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1934za7622966z00,
		BGl_z62lambda1934z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2552z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1594za7622967z00,
		BGl_z62lambda1594z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2715z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1940za7622968z00,
		BGl_z62lambda1940z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2716z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1939za7622969z00,
		BGl_z62lambda1939z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2555z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1600za7622970z00,
		BGl_z62lambda1600z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2556z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1599za7622971z00,
		BGl_z62lambda1599z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2719z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1945za7622972z00,
		BGl_z62lambda1945z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2643z00zz__evaluate_typesz00,
		BgL_bgl_string2643za700za7za7_2973za7, "prelock", 7);
	      DEFINE_STRING(BGl_string2481z00zz__evaluate_typesz00,
		BgL_bgl_string2481za700za7za7_2974za7, "obj", 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2559z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2975za7,
		BGl_z62zc3z04anonymousza31588ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2485z00zz__evaluate_typesz00,
		BgL_bgl_string2485za700za7za7_2976za7, "type", 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2720z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1944za7622977z00,
		BGl_z62lambda1944z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2560z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1585za7622978z00,
		BGl_z62lambda1585z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2723z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1950za7622979z00,
		BGl_z62lambda1950z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2561z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1583za7622980z00,
		BGl_z62lambda1583z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2724z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1949za7622981z00,
		BGl_z62lambda1949z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2725z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2982za7,
		BGl_z62zc3z04anonymousza31930ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2726z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1928za7622983z00,
		BGl_z62lambda1928z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2564z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1617za7622984z00,
		BGl_z62lambda1617z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2727z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1926za7622985z00,
		BGl_z62lambda1926z62zz__evaluate_typesz00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string2650z00zz__evaluate_typesz00,
		BgL_bgl_string2650za700za7za7_2986za7, "ev_synchronize", 14);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2565z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1616za7622987z00,
		BGl_z62lambda1616z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2566z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2988za7,
		BGl_z62zc3z04anonymousza31612ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2567z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1609za7622989z00,
		BGl_z62lambda1609z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2490z00zz__evaluate_typesz00,
		BgL_bgl_string2490za700za7za7_2990za7, "ev_var", 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2568z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1607za7622991z00,
		BGl_z62lambda1607z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2654z00zz__evaluate_typesz00,
		BgL_bgl_string2654za700za7za7_2992za7, "vars", 4);
	      DEFINE_STRING(BGl_string2494z00zz__evaluate_typesz00,
		BgL_bgl_string2494za700za7za7_2993za7, "loc", 3);
	      DEFINE_STRING(BGl_string2658z00zz__evaluate_typesz00,
		BgL_bgl_string2658za700za7za7_2994za7, "vals", 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2730z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1965za7622995z00,
		BGl_z62lambda1965z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2731z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1964za7622996z00,
		BGl_z62lambda1964z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2732z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1970za7622997z00,
		BGl_z62lambda1970z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2733z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1969za7622998z00,
		BGl_z62lambda1969z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2571z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo2999za7,
		BGl_z62zc3z04anonymousza31629ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2572z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1627za7623000z00,
		BGl_z62lambda1627z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2573z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1624za7623001z00,
		BGl_z62lambda1624z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2736z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1975za7623002z00,
		BGl_z62lambda1975z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2737z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1974za7623003z00,
		BGl_z62lambda1974z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2738z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1981za7623004z00,
		BGl_z62lambda1981z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2576z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1645za7623005z00,
		BGl_z62lambda1645z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2739z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1980za7623006z00,
		BGl_z62lambda1980z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2577z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1644za7623007z00,
		BGl_z62lambda1644z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2665z00zz__evaluate_typesz00,
		BgL_bgl_string2665za700za7za7_3008za7, "ev_binder", 9);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2742z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo3009za7,
		BGl_z62zc3z04anonymousza31960ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2580z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo3010za7,
		BGl_z62zc3z04anonymousza31640ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2743z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1958za7623011z00,
		BGl_z62lambda1958z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2581z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1638za7623012z00,
		BGl_z62lambda1638z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2744z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1956za7623013z00,
		BGl_z62lambda1956z62zz__evaluate_typesz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2582z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1635za7623014z00,
		BGl_z62lambda1635z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2747z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1997za7623015z00,
		BGl_z62lambda1997z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2670z00zz__evaluate_typesz00,
		BgL_bgl_string2670za700za7za7_3016za7, "boxes", 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2585z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1662za7623017z00,
		BGl_z62lambda1662z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2748z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1996za7623018z00,
		BGl_z62lambda1996z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2586z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1661za7623019z00,
		BGl_z62lambda1661z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2749z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda2002za7623020z00,
		BGl_z62lambda2002z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2587z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1667za7623021z00,
		BGl_z62lambda1667z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2588z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1666za7623022z00,
		BGl_z62lambda1666z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2589z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1674za7623023z00,
		BGl_z62lambda1674z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2675z00zz__evaluate_typesz00,
		BgL_bgl_string2675za700za7za7_3024za7, "ev_let", 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2750z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda2001za7623025z00,
		BGl_z62lambda2001z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2590z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1673za7623026z00,
		BGl_z62lambda1673z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2753z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda2007za7623027z00,
		BGl_z62lambda2007z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2591z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo3028za7,
		BGl_z62zc3z04anonymousza31657ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2754z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda2006za7623029z00,
		BGl_z62lambda2006z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2592z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1655za7623030z00,
		BGl_z62lambda1655z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2593z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1653za7623031z00,
		BGl_z62lambda1653z62zz__evaluate_typesz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2757z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda2013za7623032z00,
		BGl_z62lambda2013z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2758z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda2012za7623033z00,
		BGl_z62lambda2012z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2596z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo3034za7,
		BGl_z62zc3z04anonymousza31692ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2759z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda2019za7623035z00,
		BGl_z62lambda2019z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2597z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1689za7623036z00,
		BGl_z62lambda1689z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2683z00zz__evaluate_typesz00,
		BgL_bgl_string2683za700za7za7_3037za7, "ev_let*", 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2598z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1687za7623038z00,
		BGl_z62lambda1687z62zz__evaluate_typesz00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string2688z00zz__evaluate_typesz00,
		BgL_bgl_string2688za700za7za7_3039za7, "ev_letrec", 9);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2760z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda2018za7623040z00,
		BGl_z62lambda2018z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2761z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo3041za7,
		BGl_z62zc3z04anonymousza32026ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2762z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda2025za7623042z00,
		BGl_z62lambda2025z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2763z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda2024za7623043z00,
		BGl_z62lambda2024z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2768z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo3044za7,
		BGl_z62zc3z04anonymousza32036ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2769z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda2035za7623045z00,
		BGl_z62lambda2035z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2697z00zz__evaluate_typesz00,
		BgL_bgl_string2697za700za7za7_3046za7, "env", 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2770z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda2034za7623047z00,
		BGl_z62lambda2034z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2773z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo3048za7,
		BGl_z62zc3z04anonymousza32043ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2774z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda2042za7623049z00,
		BGl_z62lambda2042z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2775z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda2041za7623050z00,
		BGl_z62lambda2041z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2778z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo3051za7,
		BGl_z62zc3z04anonymousza32050ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2779z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda2049za7623052z00,
		BGl_z62lambda2049z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2780z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda2048za7623053z00,
		BGl_z62lambda2048z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2783z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo3054za7,
		BGl_z62zc3z04anonymousza32059ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2784z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda2058za7623055z00,
		BGl_z62lambda2058z62zz__evaluate_typesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2785z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda2057za7623056z00,
		BGl_z62lambda2057z62zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2786z00zz__evaluate_typesz00,
		BgL_bgl_za762za7c3za704anonymo3057za7,
		BGl_z62zc3z04anonymousza31991ze3ze5zz__evaluate_typesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2787z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1989za7623058z00,
		BGl_z62lambda1989z62zz__evaluate_typesz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2788z00zz__evaluate_typesz00,
		BgL_bgl_za762lambda1987za7623059z00,
		BGl_z62lambda1987z62zz__evaluate_typesz00, 0L, BUNSPEC, 10);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol2721z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2562z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2728z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2569z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2734z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2574z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2578z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2740z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2745z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2583z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2751z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2755z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2594z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2599z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_letrecz00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2764z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2766z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_letz00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2771z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2776z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2781z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2789z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2791z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_labelsz00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_absz00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_ifz00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_gotoz00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_orz00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_varz00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_andz00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_appz00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_synchroniza7eza7zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2603z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2607z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2612z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2621z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2625z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2465z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2467z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2632z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2471z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2473z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2638z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2478z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2642z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2480z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2484z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2649z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2489z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_defglobalz00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2653z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2493z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2657z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2499z00zz__evaluate_typesz00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2664z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2669z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2674z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2682z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2687z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2696z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_prog2z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_bindzd2exitzd2zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_unwindzd2protectzd2zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_letza2za2zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_trapz00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_setglobalz00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_hookz00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_globalz00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_binderz00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_listz00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_littz00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_withzd2handlerzd2zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_exprz00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2504z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2508z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2513z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2517z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2521z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2525z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2530z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2534z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2539z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2701z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2544z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2549z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_ev_setlocalz00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2711z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2553z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2717z00zz__evaluate_typesz00));
		     ADD_ROOT((void *) (&BGl_symbol2557z00zz__evaluate_typesz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__evaluate_typesz00(long
		BgL_checksumz00_4430, char *BgL_fromz00_4431)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__evaluate_typesz00))
				{
					BGl_requirezd2initializa7ationz75zz__evaluate_typesz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__evaluate_typesz00();
					BGl_cnstzd2initzd2zz__evaluate_typesz00();
					BGl_importedzd2moduleszd2initz00zz__evaluate_typesz00();
					BGl_objectzd2initzd2zz__evaluate_typesz00();
					return BGl_toplevelzd2initzd2zz__evaluate_typesz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__evaluate_typesz00()
	{
		{	/* Eval/evaluate_types.scm 15 */
			BGl_symbol2465z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2466z00zz__evaluate_typesz00);
			BGl_symbol2467z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2468z00zz__evaluate_typesz00);
			BGl_symbol2471z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2472z00zz__evaluate_typesz00);
			BGl_symbol2473z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2474z00zz__evaluate_typesz00);
			BGl_symbol2478z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2479z00zz__evaluate_typesz00);
			BGl_symbol2480z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2481z00zz__evaluate_typesz00);
			BGl_symbol2484z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2485z00zz__evaluate_typesz00);
			BGl_symbol2489z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2490z00zz__evaluate_typesz00);
			BGl_symbol2493z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2494z00zz__evaluate_typesz00);
			BGl_symbol2499z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2500z00zz__evaluate_typesz00);
			BGl_symbol2504z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2505z00zz__evaluate_typesz00);
			BGl_symbol2508z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2509z00zz__evaluate_typesz00);
			BGl_symbol2513z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2514z00zz__evaluate_typesz00);
			BGl_symbol2517z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2518z00zz__evaluate_typesz00);
			BGl_symbol2521z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2522z00zz__evaluate_typesz00);
			BGl_symbol2525z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2526z00zz__evaluate_typesz00);
			BGl_symbol2530z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2531z00zz__evaluate_typesz00);
			BGl_symbol2534z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2535z00zz__evaluate_typesz00);
			BGl_symbol2539z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2540z00zz__evaluate_typesz00);
			BGl_symbol2544z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2545z00zz__evaluate_typesz00);
			BGl_symbol2549z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2550z00zz__evaluate_typesz00);
			BGl_symbol2553z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2554z00zz__evaluate_typesz00);
			BGl_symbol2557z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2558z00zz__evaluate_typesz00);
			BGl_symbol2562z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2563z00zz__evaluate_typesz00);
			BGl_symbol2569z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2570z00zz__evaluate_typesz00);
			BGl_symbol2574z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2575z00zz__evaluate_typesz00);
			BGl_symbol2578z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2579z00zz__evaluate_typesz00);
			BGl_symbol2583z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2584z00zz__evaluate_typesz00);
			BGl_symbol2594z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2595z00zz__evaluate_typesz00);
			BGl_symbol2599z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2600z00zz__evaluate_typesz00);
			BGl_symbol2603z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2604z00zz__evaluate_typesz00);
			BGl_symbol2607z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2608z00zz__evaluate_typesz00);
			BGl_symbol2612z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2613z00zz__evaluate_typesz00);
			BGl_symbol2621z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2622z00zz__evaluate_typesz00);
			BGl_symbol2625z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2626z00zz__evaluate_typesz00);
			BGl_symbol2632z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2633z00zz__evaluate_typesz00);
			BGl_symbol2638z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2639z00zz__evaluate_typesz00);
			BGl_symbol2642z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2643z00zz__evaluate_typesz00);
			BGl_symbol2649z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2650z00zz__evaluate_typesz00);
			BGl_symbol2653z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2654z00zz__evaluate_typesz00);
			BGl_symbol2657z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2658z00zz__evaluate_typesz00);
			BGl_symbol2664z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2665z00zz__evaluate_typesz00);
			BGl_symbol2669z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2670z00zz__evaluate_typesz00);
			BGl_symbol2674z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2675z00zz__evaluate_typesz00);
			BGl_symbol2682z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2683z00zz__evaluate_typesz00);
			BGl_symbol2687z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2688z00zz__evaluate_typesz00);
			BGl_symbol2696z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2697z00zz__evaluate_typesz00);
			BGl_symbol2701z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2702z00zz__evaluate_typesz00);
			BGl_symbol2711z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2712z00zz__evaluate_typesz00);
			BGl_symbol2717z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2718z00zz__evaluate_typesz00);
			BGl_symbol2721z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2722z00zz__evaluate_typesz00);
			BGl_symbol2728z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2729z00zz__evaluate_typesz00);
			BGl_symbol2734z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2735z00zz__evaluate_typesz00);
			BGl_symbol2740z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2741z00zz__evaluate_typesz00);
			BGl_symbol2745z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2746z00zz__evaluate_typesz00);
			BGl_symbol2751z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2752z00zz__evaluate_typesz00);
			BGl_symbol2755z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2756z00zz__evaluate_typesz00);
			BGl_symbol2764z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2765z00zz__evaluate_typesz00);
			BGl_symbol2766z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2767z00zz__evaluate_typesz00);
			BGl_symbol2771z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2772z00zz__evaluate_typesz00);
			BGl_symbol2776z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2777z00zz__evaluate_typesz00);
			BGl_symbol2781z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2782z00zz__evaluate_typesz00);
			BGl_symbol2789z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2790z00zz__evaluate_typesz00);
			return (BGl_symbol2791z00zz__evaluate_typesz00 =
				bstring_to_symbol(BGl_string2792z00zz__evaluate_typesz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__evaluate_typesz00()
	{
		{	/* Eval/evaluate_types.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__evaluate_typesz00()
	{
		{	/* Eval/evaluate_types.scm 15 */
			return BUNSPEC;
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__evaluate_typesz00()
	{
		{	/* Eval/evaluate_types.scm 15 */
			{	/* Eval/evaluate_types.scm 49 */
				obj_t BgL_arg1424z00_1060;
				obj_t BgL_arg1425z00_1061;

				{	/* Eval/evaluate_types.scm 49 */
					obj_t BgL_v1287z00_1071;

					BgL_v1287z00_1071 = create_vector(((long) 0));
					BgL_arg1424z00_1060 = BgL_v1287z00_1071;
				}
				{	/* Eval/evaluate_types.scm 49 */
					obj_t BgL_v1288z00_1072;

					BgL_v1288z00_1072 = create_vector(((long) 0));
					BgL_arg1425z00_1061 = BgL_v1288z00_1072;
				}
				BGl_ev_exprz00zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2465z00zz__evaluate_typesz00,
					BGl_symbol2467z00zz__evaluate_typesz00, BGl_objectz00zz__objectz00,
					((long) 36622), BGl_proc2464z00zz__evaluate_typesz00,
					BGl_proc2463z00zz__evaluate_typesz00, BFALSE,
					BGl_proc2462z00zz__evaluate_typesz00, BFALSE, BgL_arg1424z00_1060,
					BgL_arg1425z00_1061);
			}
			{	/* Eval/evaluate_types.scm 51 */
				obj_t BgL_arg1434z00_1079;
				obj_t BgL_arg1435z00_1080;

				{	/* Eval/evaluate_types.scm 51 */
					obj_t BgL_v1289z00_1093;

					BgL_v1289z00_1093 = create_vector(((long) 3));
					VECTOR_SET(BgL_v1289z00_1093, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2471z00zz__evaluate_typesz00,
							BGl_proc2470z00zz__evaluate_typesz00,
							BGl_proc2469z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2473z00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1289z00_1093, ((long) 1),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2478z00zz__evaluate_typesz00,
							BGl_proc2477z00zz__evaluate_typesz00,
							BGl_proc2476z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2475z00zz__evaluate_typesz00,
							BGl_symbol2480z00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1289z00_1093, ((long) 2),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2484z00zz__evaluate_typesz00,
							BGl_proc2483z00zz__evaluate_typesz00,
							BGl_proc2482z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2480z00zz__evaluate_typesz00));
					BgL_arg1434z00_1079 = BgL_v1289z00_1093;
				}
				{	/* Eval/evaluate_types.scm 51 */
					obj_t BgL_v1290z00_1127;

					BgL_v1290z00_1127 = create_vector(((long) 0));
					BgL_arg1435z00_1080 = BgL_v1290z00_1127;
				}
				BGl_ev_varz00zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2489z00zz__evaluate_typesz00,
					BGl_symbol2467z00zz__evaluate_typesz00,
					BGl_ev_exprz00zz__evaluate_typesz00, ((long) 7207),
					BGl_proc2488z00zz__evaluate_typesz00,
					BGl_proc2487z00zz__evaluate_typesz00, BFALSE,
					BGl_proc2486z00zz__evaluate_typesz00, BFALSE, BgL_arg1434z00_1079,
					BgL_arg1435z00_1080);
			}
			{	/* Eval/evaluate_types.scm 55 */
				obj_t BgL_arg1463z00_1134;
				obj_t BgL_arg1464z00_1135;

				{	/* Eval/evaluate_types.scm 55 */
					obj_t BgL_v1291z00_1148;

					BgL_v1291z00_1148 = create_vector(((long) 3));
					VECTOR_SET(BgL_v1291z00_1148, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2493z00zz__evaluate_typesz00,
							BGl_proc2492z00zz__evaluate_typesz00,
							BGl_proc2491z00zz__evaluate_typesz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2480z00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1291z00_1148, ((long) 1),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2471z00zz__evaluate_typesz00,
							BGl_proc2496z00zz__evaluate_typesz00,
							BGl_proc2495z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2473z00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1291z00_1148, ((long) 2),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2499z00zz__evaluate_typesz00,
							BGl_proc2498z00zz__evaluate_typesz00,
							BGl_proc2497z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2480z00zz__evaluate_typesz00));
					BgL_arg1463z00_1134 = BgL_v1291z00_1148;
				}
				{	/* Eval/evaluate_types.scm 55 */
					obj_t BgL_v1292z00_1179;

					BgL_v1292z00_1179 = create_vector(((long) 0));
					BgL_arg1464z00_1135 = BgL_v1292z00_1179;
				}
				BGl_ev_globalz00zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2504z00zz__evaluate_typesz00,
					BGl_symbol2467z00zz__evaluate_typesz00,
					BGl_ev_exprz00zz__evaluate_typesz00, ((long) 59391),
					BGl_proc2503z00zz__evaluate_typesz00,
					BGl_proc2502z00zz__evaluate_typesz00, BFALSE,
					BGl_proc2501z00zz__evaluate_typesz00, BFALSE, BgL_arg1463z00_1134,
					BgL_arg1464z00_1135);
			}
			{	/* Eval/evaluate_types.scm 60 */
				obj_t BgL_arg1492z00_1186;
				obj_t BgL_arg1493z00_1187;

				{	/* Eval/evaluate_types.scm 60 */
					obj_t BgL_v1293z00_1198;

					BgL_v1293z00_1198 = create_vector(((long) 1));
					VECTOR_SET(BgL_v1293z00_1198, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2508z00zz__evaluate_typesz00,
							BGl_proc2507z00zz__evaluate_typesz00,
							BGl_proc2506z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2480z00zz__evaluate_typesz00));
					BgL_arg1492z00_1186 = BgL_v1293z00_1198;
				}
				{	/* Eval/evaluate_types.scm 60 */
					obj_t BgL_v1294z00_1209;

					BgL_v1294z00_1209 = create_vector(((long) 0));
					BgL_arg1493z00_1187 = BgL_v1294z00_1209;
				}
				BGl_ev_littz00zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2513z00zz__evaluate_typesz00,
					BGl_symbol2467z00zz__evaluate_typesz00,
					BGl_ev_exprz00zz__evaluate_typesz00, ((long) 42388),
					BGl_proc2512z00zz__evaluate_typesz00,
					BGl_proc2511z00zz__evaluate_typesz00, BFALSE,
					BGl_proc2510z00zz__evaluate_typesz00, BFALSE, BgL_arg1492z00_1186,
					BgL_arg1493z00_1187);
			}
			{	/* Eval/evaluate_types.scm 62 */
				obj_t BgL_arg1511z00_1216;
				obj_t BgL_arg1512z00_1217;

				{	/* Eval/evaluate_types.scm 62 */
					obj_t BgL_v1295z00_1230;

					BgL_v1295z00_1230 = create_vector(((long) 3));
					VECTOR_SET(BgL_v1295z00_1230, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2517z00zz__evaluate_typesz00,
							BGl_proc2516z00zz__evaluate_typesz00,
							BGl_proc2515z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_ev_exprz00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1295z00_1230, ((long) 1),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2521z00zz__evaluate_typesz00,
							BGl_proc2520z00zz__evaluate_typesz00,
							BGl_proc2519z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_ev_exprz00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1295z00_1230, ((long) 2),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2525z00zz__evaluate_typesz00,
							BGl_proc2524z00zz__evaluate_typesz00,
							BGl_proc2523z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_ev_exprz00zz__evaluate_typesz00));
					BgL_arg1511z00_1216 = BgL_v1295z00_1230;
				}
				{	/* Eval/evaluate_types.scm 62 */
					obj_t BgL_v1296z00_1261;

					BgL_v1296z00_1261 = create_vector(((long) 0));
					BgL_arg1512z00_1217 = BgL_v1296z00_1261;
				}
				BGl_ev_ifz00zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2530z00zz__evaluate_typesz00,
					BGl_symbol2467z00zz__evaluate_typesz00,
					BGl_ev_exprz00zz__evaluate_typesz00, ((long) 19122),
					BGl_proc2529z00zz__evaluate_typesz00,
					BGl_proc2528z00zz__evaluate_typesz00, BFALSE,
					BGl_proc2527z00zz__evaluate_typesz00, BFALSE, BgL_arg1511z00_1216,
					BgL_arg1512z00_1217);
			}
			{	/* Eval/evaluate_types.scm 66 */
				obj_t BgL_arg1537z00_1268;
				obj_t BgL_arg1540z00_1269;

				{	/* Eval/evaluate_types.scm 66 */
					obj_t BgL_v1297z00_1280;

					BgL_v1297z00_1280 = create_vector(((long) 1));
					VECTOR_SET(BgL_v1297z00_1280, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2534z00zz__evaluate_typesz00,
							BGl_proc2533z00zz__evaluate_typesz00,
							BGl_proc2532z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2480z00zz__evaluate_typesz00));
					BgL_arg1537z00_1268 = BgL_v1297z00_1280;
				}
				{	/* Eval/evaluate_types.scm 66 */
					obj_t BgL_v1298z00_1291;

					BgL_v1298z00_1291 = create_vector(((long) 0));
					BgL_arg1540z00_1269 = BgL_v1298z00_1291;
				}
				BGl_ev_listz00zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2539z00zz__evaluate_typesz00,
					BGl_symbol2467z00zz__evaluate_typesz00,
					BGl_ev_exprz00zz__evaluate_typesz00, ((long) 39656),
					BGl_proc2538z00zz__evaluate_typesz00,
					BGl_proc2537z00zz__evaluate_typesz00, BFALSE,
					BGl_proc2536z00zz__evaluate_typesz00, BFALSE, BgL_arg1537z00_1268,
					BgL_arg1540z00_1269);
			}
			{	/* Eval/evaluate_types.scm 68 */
				obj_t BgL_arg1558z00_1298;
				obj_t BgL_arg1560z00_1299;

				{	/* Eval/evaluate_types.scm 68 */
					obj_t BgL_v1299z00_1310;

					BgL_v1299z00_1310 = create_vector(((long) 0));
					BgL_arg1558z00_1298 = BgL_v1299z00_1310;
				}
				{	/* Eval/evaluate_types.scm 68 */
					obj_t BgL_v1300z00_1311;

					BgL_v1300z00_1311 = create_vector(((long) 0));
					BgL_arg1560z00_1299 = BgL_v1300z00_1311;
				}
				BGl_ev_orz00zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2544z00zz__evaluate_typesz00,
					BGl_symbol2467z00zz__evaluate_typesz00,
					BGl_ev_listz00zz__evaluate_typesz00, ((long) 50353),
					BGl_proc2543z00zz__evaluate_typesz00,
					BGl_proc2542z00zz__evaluate_typesz00, BFALSE,
					BGl_proc2541z00zz__evaluate_typesz00, BFALSE, BgL_arg1558z00_1298,
					BgL_arg1560z00_1299);
			}
			{	/* Eval/evaluate_types.scm 69 */
				obj_t BgL_arg1569z00_1318;
				obj_t BgL_arg1570z00_1319;

				{	/* Eval/evaluate_types.scm 69 */
					obj_t BgL_v1301z00_1330;

					BgL_v1301z00_1330 = create_vector(((long) 0));
					BgL_arg1569z00_1318 = BgL_v1301z00_1330;
				}
				{	/* Eval/evaluate_types.scm 69 */
					obj_t BgL_v1302z00_1331;

					BgL_v1302z00_1331 = create_vector(((long) 0));
					BgL_arg1570z00_1319 = BgL_v1302z00_1331;
				}
				BGl_ev_andz00zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2549z00zz__evaluate_typesz00,
					BGl_symbol2467z00zz__evaluate_typesz00,
					BGl_ev_listz00zz__evaluate_typesz00, ((long) 27076),
					BGl_proc2548z00zz__evaluate_typesz00,
					BGl_proc2547z00zz__evaluate_typesz00, BFALSE,
					BGl_proc2546z00zz__evaluate_typesz00, BFALSE, BgL_arg1569z00_1318,
					BgL_arg1570z00_1319);
			}
			{	/* Eval/evaluate_types.scm 70 */
				obj_t BgL_arg1580z00_1338;
				obj_t BgL_arg1582z00_1339;

				{	/* Eval/evaluate_types.scm 70 */
					obj_t BgL_v1303z00_1351;

					BgL_v1303z00_1351 = create_vector(((long) 2));
					VECTOR_SET(BgL_v1303z00_1351, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2553z00zz__evaluate_typesz00,
							BGl_proc2552z00zz__evaluate_typesz00,
							BGl_proc2551z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_ev_exprz00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1303z00_1351, ((long) 1),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2557z00zz__evaluate_typesz00,
							BGl_proc2556z00zz__evaluate_typesz00,
							BGl_proc2555z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_ev_exprz00zz__evaluate_typesz00));
					BgL_arg1580z00_1338 = BgL_v1303z00_1351;
				}
				{	/* Eval/evaluate_types.scm 70 */
					obj_t BgL_v1304z00_1372;

					BgL_v1304z00_1372 = create_vector(((long) 0));
					BgL_arg1582z00_1339 = BgL_v1304z00_1372;
				}
				BGl_ev_prog2z00zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2562z00zz__evaluate_typesz00,
					BGl_symbol2467z00zz__evaluate_typesz00,
					BGl_ev_exprz00zz__evaluate_typesz00, ((long) 13473),
					BGl_proc2561z00zz__evaluate_typesz00,
					BGl_proc2560z00zz__evaluate_typesz00, BFALSE,
					BGl_proc2559z00zz__evaluate_typesz00, BFALSE, BgL_arg1580z00_1338,
					BgL_arg1582z00_1339);
			}
			{	/* Eval/evaluate_types.scm 73 */
				obj_t BgL_arg1605z00_1379;
				obj_t BgL_arg1606z00_1380;

				{	/* Eval/evaluate_types.scm 73 */
					obj_t BgL_v1305z00_1391;

					BgL_v1305z00_1391 = create_vector(((long) 1));
					VECTOR_SET(BgL_v1305z00_1391, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2525z00zz__evaluate_typesz00,
							BGl_proc2565z00zz__evaluate_typesz00,
							BGl_proc2564z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_ev_exprz00zz__evaluate_typesz00));
					BgL_arg1605z00_1379 = BgL_v1305z00_1391;
				}
				{	/* Eval/evaluate_types.scm 73 */
					obj_t BgL_v1306z00_1402;

					BgL_v1306z00_1402 = create_vector(((long) 0));
					BgL_arg1606z00_1380 = BgL_v1306z00_1402;
				}
				BGl_ev_hookz00zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2569z00zz__evaluate_typesz00,
					BGl_symbol2467z00zz__evaluate_typesz00,
					BGl_ev_exprz00zz__evaluate_typesz00, ((long) 31882),
					BGl_proc2568z00zz__evaluate_typesz00,
					BGl_proc2567z00zz__evaluate_typesz00, BFALSE,
					BGl_proc2566z00zz__evaluate_typesz00, BFALSE, BgL_arg1605z00_1379,
					BgL_arg1606z00_1380);
			}
			{	/* Eval/evaluate_types.scm 75 */
				obj_t BgL_arg1621z00_1409;
				obj_t BgL_arg1623z00_1410;

				{	/* Eval/evaluate_types.scm 75 */
					obj_t BgL_v1307z00_1421;

					BgL_v1307z00_1421 = create_vector(((long) 0));
					BgL_arg1621z00_1409 = BgL_v1307z00_1421;
				}
				{	/* Eval/evaluate_types.scm 75 */
					obj_t BgL_v1308z00_1422;

					BgL_v1308z00_1422 = create_vector(((long) 0));
					BgL_arg1623z00_1410 = BgL_v1308z00_1422;
				}
				BGl_ev_trapz00zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2574z00zz__evaluate_typesz00,
					BGl_symbol2467z00zz__evaluate_typesz00,
					BGl_ev_hookz00zz__evaluate_typesz00, ((long) 20558),
					BGl_proc2573z00zz__evaluate_typesz00,
					BGl_proc2572z00zz__evaluate_typesz00, BFALSE,
					BGl_proc2571z00zz__evaluate_typesz00, BFALSE, BgL_arg1621z00_1409,
					BgL_arg1623z00_1410);
			}
			{	/* Eval/evaluate_types.scm 76 */
				obj_t BgL_arg1633z00_1429;
				obj_t BgL_arg1634z00_1430;

				{	/* Eval/evaluate_types.scm 76 */
					obj_t BgL_v1309z00_1442;

					BgL_v1309z00_1442 = create_vector(((long) 1));
					VECTOR_SET(BgL_v1309z00_1442, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2578z00zz__evaluate_typesz00,
							BGl_proc2577z00zz__evaluate_typesz00,
							BGl_proc2576z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_ev_varz00zz__evaluate_typesz00));
					BgL_arg1633z00_1429 = BgL_v1309z00_1442;
				}
				{	/* Eval/evaluate_types.scm 76 */
					obj_t BgL_v1310z00_1453;

					BgL_v1310z00_1453 = create_vector(((long) 0));
					BgL_arg1634z00_1430 = BgL_v1310z00_1453;
				}
				BGl_ev_setlocalz00zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2583z00zz__evaluate_typesz00,
					BGl_symbol2467z00zz__evaluate_typesz00,
					BGl_ev_hookz00zz__evaluate_typesz00, ((long) 37936),
					BGl_proc2582z00zz__evaluate_typesz00,
					BGl_proc2581z00zz__evaluate_typesz00, BFALSE,
					BGl_proc2580z00zz__evaluate_typesz00, BFALSE, BgL_arg1633z00_1429,
					BgL_arg1634z00_1430);
			}
			{	/* Eval/evaluate_types.scm 78 */
				obj_t BgL_arg1651z00_1460;
				obj_t BgL_arg1652z00_1461;

				{	/* Eval/evaluate_types.scm 78 */
					obj_t BgL_v1311z00_1475;

					BgL_v1311z00_1475 = create_vector(((long) 3));
					VECTOR_SET(BgL_v1311z00_1475, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2493z00zz__evaluate_typesz00,
							BGl_proc2586z00zz__evaluate_typesz00,
							BGl_proc2585z00zz__evaluate_typesz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2480z00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1311z00_1475, ((long) 1),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2471z00zz__evaluate_typesz00,
							BGl_proc2588z00zz__evaluate_typesz00,
							BGl_proc2587z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2473z00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1311z00_1475, ((long) 2),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2499z00zz__evaluate_typesz00,
							BGl_proc2590z00zz__evaluate_typesz00,
							BGl_proc2589z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2480z00zz__evaluate_typesz00));
					BgL_arg1651z00_1460 = BgL_v1311z00_1475;
				}
				{	/* Eval/evaluate_types.scm 78 */
					obj_t BgL_v1312z00_1506;

					BgL_v1312z00_1506 = create_vector(((long) 0));
					BgL_arg1652z00_1461 = BgL_v1312z00_1506;
				}
				BGl_ev_setglobalz00zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2594z00zz__evaluate_typesz00,
					BGl_symbol2467z00zz__evaluate_typesz00,
					BGl_ev_hookz00zz__evaluate_typesz00, ((long) 62334),
					BGl_proc2593z00zz__evaluate_typesz00,
					BGl_proc2592z00zz__evaluate_typesz00, BFALSE,
					BGl_proc2591z00zz__evaluate_typesz00, BFALSE, BgL_arg1651z00_1460,
					BgL_arg1652z00_1461);
			}
			{	/* Eval/evaluate_types.scm 82 */
				obj_t BgL_arg1685z00_1513;
				obj_t BgL_arg1686z00_1514;

				{	/* Eval/evaluate_types.scm 82 */
					obj_t BgL_v1313z00_1528;

					BgL_v1313z00_1528 = create_vector(((long) 0));
					BgL_arg1685z00_1513 = BgL_v1313z00_1528;
				}
				{	/* Eval/evaluate_types.scm 82 */
					obj_t BgL_v1314z00_1529;

					BgL_v1314z00_1529 = create_vector(((long) 0));
					BgL_arg1686z00_1514 = BgL_v1314z00_1529;
				}
				BGl_ev_defglobalz00zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2599z00zz__evaluate_typesz00,
					BGl_symbol2467z00zz__evaluate_typesz00,
					BGl_ev_setglobalz00zz__evaluate_typesz00, ((long) 36141),
					BGl_proc2598z00zz__evaluate_typesz00,
					BGl_proc2597z00zz__evaluate_typesz00, BFALSE,
					BGl_proc2596z00zz__evaluate_typesz00, BFALSE, BgL_arg1685z00_1513,
					BgL_arg1686z00_1514);
			}
			{	/* Eval/evaluate_types.scm 83 */
				obj_t BgL_arg1697z00_1536;
				obj_t BgL_arg1698z00_1537;

				{	/* Eval/evaluate_types.scm 83 */
					obj_t BgL_v1315z00_1549;

					BgL_v1315z00_1549 = create_vector(((long) 2));
					VECTOR_SET(BgL_v1315z00_1549, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2603z00zz__evaluate_typesz00,
							BGl_proc2602z00zz__evaluate_typesz00,
							BGl_proc2601z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_ev_varz00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1315z00_1549, ((long) 1),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2607z00zz__evaluate_typesz00,
							BGl_proc2606z00zz__evaluate_typesz00,
							BGl_proc2605z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_ev_exprz00zz__evaluate_typesz00));
					BgL_arg1697z00_1536 = BgL_v1315z00_1549;
				}
				{	/* Eval/evaluate_types.scm 83 */
					obj_t BgL_v1316z00_1570;

					BgL_v1316z00_1570 = create_vector(((long) 0));
					BgL_arg1698z00_1537 = BgL_v1316z00_1570;
				}
				BGl_ev_bindzd2exitzd2zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2612z00zz__evaluate_typesz00,
					BGl_symbol2467z00zz__evaluate_typesz00,
					BGl_ev_exprz00zz__evaluate_typesz00, ((long) 10737),
					BGl_proc2611z00zz__evaluate_typesz00,
					BGl_proc2610z00zz__evaluate_typesz00, BFALSE,
					BGl_proc2609z00zz__evaluate_typesz00, BFALSE, BgL_arg1697z00_1536,
					BgL_arg1698z00_1537);
			}
			{	/* Eval/evaluate_types.scm 86 */
				obj_t BgL_arg1720z00_1577;
				obj_t BgL_arg1721z00_1578;

				{	/* Eval/evaluate_types.scm 86 */
					obj_t BgL_v1317z00_1590;

					BgL_v1317z00_1590 = create_vector(((long) 2));
					VECTOR_SET(BgL_v1317z00_1590, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2525z00zz__evaluate_typesz00,
							BGl_proc2615z00zz__evaluate_typesz00,
							BGl_proc2614z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_ev_exprz00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1317z00_1590, ((long) 1),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2607z00zz__evaluate_typesz00,
							BGl_proc2617z00zz__evaluate_typesz00,
							BGl_proc2616z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_ev_exprz00zz__evaluate_typesz00));
					BgL_arg1720z00_1577 = BgL_v1317z00_1590;
				}
				{	/* Eval/evaluate_types.scm 86 */
					obj_t BgL_v1318z00_1611;

					BgL_v1318z00_1611 = create_vector(((long) 0));
					BgL_arg1721z00_1578 = BgL_v1318z00_1611;
				}
				BGl_ev_unwindzd2protectzd2zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2621z00zz__evaluate_typesz00,
					BGl_symbol2467z00zz__evaluate_typesz00,
					BGl_ev_exprz00zz__evaluate_typesz00, ((long) 59406),
					BGl_proc2620z00zz__evaluate_typesz00,
					BGl_proc2619z00zz__evaluate_typesz00, BFALSE,
					BGl_proc2618z00zz__evaluate_typesz00, BFALSE, BgL_arg1720z00_1577,
					BgL_arg1721z00_1578);
			}
			{	/* Eval/evaluate_types.scm 89 */
				obj_t BgL_arg1740z00_1618;
				obj_t BgL_arg1741z00_1619;

				{	/* Eval/evaluate_types.scm 89 */
					obj_t BgL_v1319z00_1631;

					BgL_v1319z00_1631 = create_vector(((long) 2));
					VECTOR_SET(BgL_v1319z00_1631, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2625z00zz__evaluate_typesz00,
							BGl_proc2624z00zz__evaluate_typesz00,
							BGl_proc2623z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_ev_exprz00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1319z00_1631, ((long) 1),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2607z00zz__evaluate_typesz00,
							BGl_proc2628z00zz__evaluate_typesz00,
							BGl_proc2627z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_ev_exprz00zz__evaluate_typesz00));
					BgL_arg1740z00_1618 = BgL_v1319z00_1631;
				}
				{	/* Eval/evaluate_types.scm 89 */
					obj_t BgL_v1320z00_1652;

					BgL_v1320z00_1652 = create_vector(((long) 0));
					BgL_arg1741z00_1619 = BgL_v1320z00_1652;
				}
				BGl_ev_withzd2handlerzd2zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2632z00zz__evaluate_typesz00,
					BGl_symbol2467z00zz__evaluate_typesz00,
					BGl_ev_exprz00zz__evaluate_typesz00, ((long) 54187),
					BGl_proc2631z00zz__evaluate_typesz00,
					BGl_proc2630z00zz__evaluate_typesz00, BFALSE,
					BGl_proc2629z00zz__evaluate_typesz00, BFALSE, BgL_arg1740z00_1618,
					BgL_arg1741z00_1619);
			}
			{	/* Eval/evaluate_types.scm 92 */
				obj_t BgL_arg1762z00_1659;
				obj_t BgL_arg1763z00_1660;

				{	/* Eval/evaluate_types.scm 92 */
					obj_t BgL_v1321z00_1674;

					BgL_v1321z00_1674 = create_vector(((long) 4));
					VECTOR_SET(BgL_v1321z00_1674, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2493z00zz__evaluate_typesz00,
							BGl_proc2635z00zz__evaluate_typesz00,
							BGl_proc2634z00zz__evaluate_typesz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2480z00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1321z00_1674, ((long) 1),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2638z00zz__evaluate_typesz00,
							BGl_proc2637z00zz__evaluate_typesz00,
							BGl_proc2636z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_ev_exprz00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1321z00_1674, ((long) 2),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2642z00zz__evaluate_typesz00,
							BGl_proc2641z00zz__evaluate_typesz00,
							BGl_proc2640z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_ev_exprz00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1321z00_1674, ((long) 3),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2607z00zz__evaluate_typesz00,
							BGl_proc2645z00zz__evaluate_typesz00,
							BGl_proc2644z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_ev_exprz00zz__evaluate_typesz00));
					BgL_arg1762z00_1659 = BgL_v1321z00_1674;
				}
				{	/* Eval/evaluate_types.scm 92 */
					obj_t BgL_v1322z00_1715;

					BgL_v1322z00_1715 = create_vector(((long) 0));
					BgL_arg1763z00_1660 = BgL_v1322z00_1715;
				}
				BGl_ev_synchroniza7eza7zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2649z00zz__evaluate_typesz00,
					BGl_symbol2467z00zz__evaluate_typesz00,
					BGl_ev_exprz00zz__evaluate_typesz00, ((long) 40732),
					BGl_proc2648z00zz__evaluate_typesz00,
					BGl_proc2647z00zz__evaluate_typesz00, BFALSE,
					BGl_proc2646z00zz__evaluate_typesz00, BFALSE, BgL_arg1762z00_1659,
					BgL_arg1763z00_1660);
			}
			{	/* Eval/evaluate_types.scm 97 */
				obj_t BgL_arg1795z00_1722;
				obj_t BgL_arg1796z00_1723;

				{	/* Eval/evaluate_types.scm 97 */
					obj_t BgL_v1323z00_1736;

					BgL_v1323z00_1736 = create_vector(((long) 3));
					VECTOR_SET(BgL_v1323z00_1736, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2653z00zz__evaluate_typesz00,
							BGl_proc2652z00zz__evaluate_typesz00,
							BGl_proc2651z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2480z00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1323z00_1736, ((long) 1),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2657z00zz__evaluate_typesz00,
							BGl_proc2656z00zz__evaluate_typesz00,
							BGl_proc2655z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2480z00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1323z00_1736, ((long) 2),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2607z00zz__evaluate_typesz00,
							BGl_proc2660z00zz__evaluate_typesz00,
							BGl_proc2659z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_ev_exprz00zz__evaluate_typesz00));
					BgL_arg1795z00_1722 = BgL_v1323z00_1736;
				}
				{	/* Eval/evaluate_types.scm 97 */
					obj_t BgL_v1324z00_1767;

					BgL_v1324z00_1767 = create_vector(((long) 0));
					BgL_arg1796z00_1723 = BgL_v1324z00_1767;
				}
				BGl_ev_binderz00zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2664z00zz__evaluate_typesz00,
					BGl_symbol2467z00zz__evaluate_typesz00,
					BGl_ev_exprz00zz__evaluate_typesz00, ((long) 50429),
					BGl_proc2663z00zz__evaluate_typesz00,
					BGl_proc2662z00zz__evaluate_typesz00, BFALSE,
					BGl_proc2661z00zz__evaluate_typesz00, BFALSE, BgL_arg1795z00_1722,
					BgL_arg1796z00_1723);
			}
			{	/* Eval/evaluate_types.scm 101 */
				obj_t BgL_arg1822z00_1774;
				obj_t BgL_arg1823z00_1775;

				{	/* Eval/evaluate_types.scm 101 */
					obj_t BgL_v1325z00_1789;

					BgL_v1325z00_1789 = create_vector(((long) 1));
					VECTOR_SET(BgL_v1325z00_1789, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2669z00zz__evaluate_typesz00,
							BGl_proc2668z00zz__evaluate_typesz00,
							BGl_proc2667z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2666z00zz__evaluate_typesz00,
							BGl_symbol2480z00zz__evaluate_typesz00));
					BgL_arg1822z00_1774 = BgL_v1325z00_1789;
				}
				{	/* Eval/evaluate_types.scm 101 */
					obj_t BgL_v1326z00_1803;

					BgL_v1326z00_1803 = create_vector(((long) 0));
					BgL_arg1823z00_1775 = BgL_v1326z00_1803;
				}
				BGl_ev_letz00zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2674z00zz__evaluate_typesz00,
					BGl_symbol2467z00zz__evaluate_typesz00,
					BGl_ev_binderz00zz__evaluate_typesz00, ((long) 20537),
					BGl_proc2673z00zz__evaluate_typesz00,
					BGl_proc2672z00zz__evaluate_typesz00, BFALSE,
					BGl_proc2671z00zz__evaluate_typesz00, BFALSE, BgL_arg1822z00_1774,
					BgL_arg1823z00_1775);
			}
			{	/* Eval/evaluate_types.scm 103 */
				obj_t BgL_arg1841z00_1810;
				obj_t BgL_arg1842z00_1811;

				{	/* Eval/evaluate_types.scm 103 */
					obj_t BgL_v1327z00_1825;

					BgL_v1327z00_1825 = create_vector(((long) 1));
					VECTOR_SET(BgL_v1327z00_1825, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2669z00zz__evaluate_typesz00,
							BGl_proc2678z00zz__evaluate_typesz00,
							BGl_proc2677z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2676z00zz__evaluate_typesz00,
							BGl_symbol2480z00zz__evaluate_typesz00));
					BgL_arg1841z00_1810 = BgL_v1327z00_1825;
				}
				{	/* Eval/evaluate_types.scm 103 */
					obj_t BgL_v1328z00_1839;

					BgL_v1328z00_1839 = create_vector(((long) 0));
					BgL_arg1842z00_1811 = BgL_v1328z00_1839;
				}
				BGl_ev_letza2za2zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2682z00zz__evaluate_typesz00,
					BGl_symbol2467z00zz__evaluate_typesz00,
					BGl_ev_binderz00zz__evaluate_typesz00, ((long) 9890),
					BGl_proc2681z00zz__evaluate_typesz00,
					BGl_proc2680z00zz__evaluate_typesz00, BFALSE,
					BGl_proc2679z00zz__evaluate_typesz00, BFALSE, BgL_arg1841z00_1810,
					BgL_arg1842z00_1811);
			}
			{	/* Eval/evaluate_types.scm 105 */
				obj_t BgL_arg1861z00_1846;
				obj_t BgL_arg1862z00_1847;

				{	/* Eval/evaluate_types.scm 105 */
					obj_t BgL_v1329z00_1860;

					BgL_v1329z00_1860 = create_vector(((long) 0));
					BgL_arg1861z00_1846 = BgL_v1329z00_1860;
				}
				{	/* Eval/evaluate_types.scm 105 */
					obj_t BgL_v1330z00_1861;

					BgL_v1330z00_1861 = create_vector(((long) 0));
					BgL_arg1862z00_1847 = BgL_v1330z00_1861;
				}
				BGl_ev_letrecz00zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2687z00zz__evaluate_typesz00,
					BGl_symbol2467z00zz__evaluate_typesz00,
					BGl_ev_binderz00zz__evaluate_typesz00, ((long) 43933),
					BGl_proc2686z00zz__evaluate_typesz00,
					BGl_proc2685z00zz__evaluate_typesz00, BFALSE,
					BGl_proc2684z00zz__evaluate_typesz00, BFALSE, BgL_arg1861z00_1846,
					BgL_arg1862z00_1847);
			}
			{	/* Eval/evaluate_types.scm 106 */
				obj_t BgL_arg1873z00_1868;
				obj_t BgL_arg1874z00_1869;

				{	/* Eval/evaluate_types.scm 106 */
					obj_t BgL_v1331z00_1885;

					BgL_v1331z00_1885 = create_vector(((long) 6));
					VECTOR_SET(BgL_v1331z00_1885, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2653z00zz__evaluate_typesz00,
							BGl_proc2690z00zz__evaluate_typesz00,
							BGl_proc2689z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2480z00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1331z00_1885, ((long) 1),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2657z00zz__evaluate_typesz00,
							BGl_proc2692z00zz__evaluate_typesz00,
							BGl_proc2691z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2480z00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1331z00_1885, ((long) 2),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2696z00zz__evaluate_typesz00,
							BGl_proc2695z00zz__evaluate_typesz00,
							BGl_proc2694z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2693z00zz__evaluate_typesz00,
							BGl_symbol2480z00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1331z00_1885, ((long) 3),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2701z00zz__evaluate_typesz00,
							BGl_proc2700z00zz__evaluate_typesz00,
							BGl_proc2699z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2698z00zz__evaluate_typesz00,
							BGl_symbol2480z00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1331z00_1885, ((long) 4),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2607z00zz__evaluate_typesz00,
							BGl_proc2704z00zz__evaluate_typesz00,
							BGl_proc2703z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_ev_exprz00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1331z00_1885, ((long) 5),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2669z00zz__evaluate_typesz00,
							BGl_proc2707z00zz__evaluate_typesz00,
							BGl_proc2706z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2705z00zz__evaluate_typesz00,
							BGl_symbol2480z00zz__evaluate_typesz00));
					BgL_arg1873z00_1868 = BgL_v1331z00_1885;
				}
				{	/* Eval/evaluate_types.scm 106 */
					obj_t BgL_v1332z00_1955;

					BgL_v1332z00_1955 = create_vector(((long) 0));
					BgL_arg1874z00_1869 = BgL_v1332z00_1955;
				}
				BGl_ev_labelsz00zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2711z00zz__evaluate_typesz00,
					BGl_symbol2467z00zz__evaluate_typesz00,
					BGl_ev_exprz00zz__evaluate_typesz00, ((long) 51900),
					BGl_proc2710z00zz__evaluate_typesz00,
					BGl_proc2709z00zz__evaluate_typesz00, BFALSE,
					BGl_proc2708z00zz__evaluate_typesz00, BFALSE, BgL_arg1873z00_1868,
					BgL_arg1874z00_1869);
			}
			{	/* Eval/evaluate_types.scm 114 */
				obj_t BgL_arg1924z00_1962;
				obj_t BgL_arg1925z00_1963;

				{	/* Eval/evaluate_types.scm 114 */
					obj_t BgL_v1333z00_1977;

					BgL_v1333z00_1977 = create_vector(((long) 4));
					VECTOR_SET(BgL_v1333z00_1977, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2493z00zz__evaluate_typesz00,
							BGl_proc2714z00zz__evaluate_typesz00,
							BGl_proc2713z00zz__evaluate_typesz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2480z00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1333z00_1977, ((long) 1),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2717z00zz__evaluate_typesz00,
							BGl_proc2716z00zz__evaluate_typesz00,
							BGl_proc2715z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_ev_varz00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1333z00_1977, ((long) 2),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2721z00zz__evaluate_typesz00,
							BGl_proc2720z00zz__evaluate_typesz00,
							BGl_proc2719z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_ev_labelsz00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1333z00_1977, ((long) 3),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2534z00zz__evaluate_typesz00,
							BGl_proc2724z00zz__evaluate_typesz00,
							BGl_proc2723z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2480z00zz__evaluate_typesz00));
					BgL_arg1924z00_1962 = BgL_v1333z00_1977;
				}
				{	/* Eval/evaluate_types.scm 114 */
					obj_t BgL_v1334z00_2018;

					BgL_v1334z00_2018 = create_vector(((long) 0));
					BgL_arg1925z00_1963 = BgL_v1334z00_2018;
				}
				BGl_ev_gotoz00zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2728z00zz__evaluate_typesz00,
					BGl_symbol2467z00zz__evaluate_typesz00,
					BGl_ev_exprz00zz__evaluate_typesz00, ((long) 25845),
					BGl_proc2727z00zz__evaluate_typesz00,
					BGl_proc2726z00zz__evaluate_typesz00, BFALSE,
					BGl_proc2725z00zz__evaluate_typesz00, BFALSE, BgL_arg1924z00_1962,
					BgL_arg1925z00_1963);
			}
			{	/* Eval/evaluate_types.scm 119 */
				obj_t BgL_arg1954z00_2025;
				obj_t BgL_arg1955z00_2026;

				{	/* Eval/evaluate_types.scm 119 */
					obj_t BgL_v1335z00_2040;

					BgL_v1335z00_2040 = create_vector(((long) 4));
					VECTOR_SET(BgL_v1335z00_2040, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2493z00zz__evaluate_typesz00,
							BGl_proc2731z00zz__evaluate_typesz00,
							BGl_proc2730z00zz__evaluate_typesz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2480z00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1335z00_2040, ((long) 1),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2734z00zz__evaluate_typesz00,
							BGl_proc2733z00zz__evaluate_typesz00,
							BGl_proc2732z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_ev_exprz00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1335z00_2040, ((long) 2),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2534z00zz__evaluate_typesz00,
							BGl_proc2737z00zz__evaluate_typesz00,
							BGl_proc2736z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2480z00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1335z00_2040, ((long) 3),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2740z00zz__evaluate_typesz00,
							BGl_proc2739z00zz__evaluate_typesz00,
							BGl_proc2738z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2480z00zz__evaluate_typesz00));
					BgL_arg1954z00_2025 = BgL_v1335z00_2040;
				}
				{	/* Eval/evaluate_types.scm 119 */
					obj_t BgL_v1336z00_2081;

					BgL_v1336z00_2081 = create_vector(((long) 0));
					BgL_arg1955z00_2026 = BgL_v1336z00_2081;
				}
				BGl_ev_appz00zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2745z00zz__evaluate_typesz00,
					BGl_symbol2467z00zz__evaluate_typesz00,
					BGl_ev_exprz00zz__evaluate_typesz00, ((long) 55811),
					BGl_proc2744z00zz__evaluate_typesz00,
					BGl_proc2743z00zz__evaluate_typesz00, BFALSE,
					BGl_proc2742z00zz__evaluate_typesz00, BFALSE, BgL_arg1954z00_2025,
					BgL_arg1955z00_2026);
			}
			{	/* Eval/evaluate_types.scm 122 */
				obj_t BgL_arg1985z00_2088;
				obj_t BgL_arg1986z00_2089;

				{	/* Eval/evaluate_types.scm 122 */
					obj_t BgL_v1337z00_2109;

					BgL_v1337z00_2109 = create_vector(((long) 10));
					VECTOR_SET(BgL_v1337z00_2109, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2493z00zz__evaluate_typesz00,
							BGl_proc2748z00zz__evaluate_typesz00,
							BGl_proc2747z00zz__evaluate_typesz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2480z00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1337z00_2109, ((long) 1),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2751z00zz__evaluate_typesz00,
							BGl_proc2750z00zz__evaluate_typesz00,
							BGl_proc2749z00zz__evaluate_typesz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2480z00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1337z00_2109, ((long) 2),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2755z00zz__evaluate_typesz00,
							BGl_proc2754z00zz__evaluate_typesz00,
							BGl_proc2753z00zz__evaluate_typesz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2480z00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1337z00_2109, ((long) 3),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2653z00zz__evaluate_typesz00,
							BGl_proc2758z00zz__evaluate_typesz00,
							BGl_proc2757z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2480z00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1337z00_2109, ((long) 4),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2607z00zz__evaluate_typesz00,
							BGl_proc2760z00zz__evaluate_typesz00,
							BGl_proc2759z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_ev_exprz00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1337z00_2109, ((long) 5),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2764z00zz__evaluate_typesz00,
							BGl_proc2763z00zz__evaluate_typesz00,
							BGl_proc2762z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2761z00zz__evaluate_typesz00,
							BGl_symbol2766z00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1337z00_2109, ((long) 6),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2771z00zz__evaluate_typesz00,
							BGl_proc2770z00zz__evaluate_typesz00,
							BGl_proc2769z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2768z00zz__evaluate_typesz00,
							BGl_symbol2480z00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1337z00_2109, ((long) 7),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2776z00zz__evaluate_typesz00,
							BGl_proc2775z00zz__evaluate_typesz00,
							BGl_proc2774z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2773z00zz__evaluate_typesz00,
							BGl_symbol2480z00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1337z00_2109, ((long) 8),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2781z00zz__evaluate_typesz00,
							BGl_proc2780z00zz__evaluate_typesz00,
							BGl_proc2779z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2778z00zz__evaluate_typesz00,
							BGl_symbol2480z00zz__evaluate_typesz00));
					VECTOR_SET(BgL_v1337z00_2109, ((long) 9),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2669z00zz__evaluate_typesz00,
							BGl_proc2785z00zz__evaluate_typesz00,
							BGl_proc2784z00zz__evaluate_typesz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2783z00zz__evaluate_typesz00,
							BGl_symbol2480z00zz__evaluate_typesz00));
					BgL_arg1985z00_2088 = BgL_v1337z00_2109;
				}
				{	/* Eval/evaluate_types.scm 122 */
					obj_t BgL_v1338z00_2225;

					BgL_v1338z00_2225 = create_vector(((long) 0));
					BgL_arg1986z00_2089 = BgL_v1338z00_2225;
				}
				return (BGl_ev_absz00zz__evaluate_typesz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2789z00zz__evaluate_typesz00,
						BGl_symbol2467z00zz__evaluate_typesz00,
						BGl_ev_exprz00zz__evaluate_typesz00, ((long) 22790),
						BGl_proc2788z00zz__evaluate_typesz00,
						BGl_proc2787z00zz__evaluate_typesz00, BFALSE,
						BGl_proc2786z00zz__evaluate_typesz00, BFALSE, BgL_arg1985z00_2088,
						BgL_arg1986z00_2089), BUNSPEC);
		}}

	}



/* &<@anonymous:1991> */
	obj_t BGl_z62zc3z04anonymousza31991ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3515, obj_t BgL_new1194z00_3516)
	{
		{	/* Eval/evaluate_types.scm 122 */
			{
				BgL_ev_absz00_bglt BgL_auxz00_4697;

				((((BgL_ev_absz00_bglt) COBJECT(
								((BgL_ev_absz00_bglt) BgL_new1194z00_3516)))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_ev_absz00_bglt) COBJECT(((BgL_ev_absz00_bglt)
									BgL_new1194z00_3516)))->BgL_wherez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_ev_absz00_bglt) COBJECT(((BgL_ev_absz00_bglt)
									BgL_new1194z00_3516)))->BgL_arityz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_ev_absz00_bglt) COBJECT(((BgL_ev_absz00_bglt)
									BgL_new1194z00_3516)))->BgL_varsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_ev_exprz00_bglt BgL_auxz00_4706;

					{	/* Eval/evaluate_types.scm 122 */
						obj_t BgL_classz00_3991;

						BgL_classz00_3991 = BGl_ev_exprz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 122 */
							obj_t BgL__ortest_1286z00_3992;

							BgL__ortest_1286z00_3992 = BGL_CLASS_NIL(BgL_classz00_3991);
							if (CBOOL(BgL__ortest_1286z00_3992))
								{	/* Eval/evaluate_types.scm 122 */
									BgL_auxz00_4706 =
										((BgL_ev_exprz00_bglt) BgL__ortest_1286z00_3992);
								}
							else
								{	/* Eval/evaluate_types.scm 122 */
									BgL_auxz00_4706 =
										((BgL_ev_exprz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3991));
								}
						}
					}
					((((BgL_ev_absz00_bglt) COBJECT(
									((BgL_ev_absz00_bglt) BgL_new1194z00_3516)))->BgL_bodyz00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_4706), BUNSPEC);
				}
				((((BgL_ev_absz00_bglt) COBJECT(
								((BgL_ev_absz00_bglt) BgL_new1194z00_3516)))->BgL_siza7eza7) =
					((int) (int) (((long) 0))), BUNSPEC);
				((((BgL_ev_absz00_bglt) COBJECT(((BgL_ev_absz00_bglt)
									BgL_new1194z00_3516)))->BgL_bindz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_ev_absz00_bglt) COBJECT(((BgL_ev_absz00_bglt)
									BgL_new1194z00_3516)))->BgL_freez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_ev_absz00_bglt) COBJECT(((BgL_ev_absz00_bglt)
									BgL_new1194z00_3516)))->BgL_innerz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_ev_absz00_bglt) COBJECT(((BgL_ev_absz00_bglt)
									BgL_new1194z00_3516)))->BgL_boxesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_4697 = ((BgL_ev_absz00_bglt) BgL_new1194z00_3516);
				return ((obj_t) BgL_auxz00_4697);
			}
		}

	}



/* &lambda1989 */
	BgL_ev_absz00_bglt BGl_z62lambda1989z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3517)
	{
		{	/* Eval/evaluate_types.scm 122 */
			{	/* Eval/evaluate_types.scm 122 */
				BgL_ev_absz00_bglt BgL_new1193z00_3993;

				BgL_new1193z00_3993 =
					((BgL_ev_absz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_absz00_bgl))));
				{	/* Eval/evaluate_types.scm 122 */
					long BgL_arg1990z00_3994;

					{	/* Eval/evaluate_types.scm 122 */
						long BgL_res2411z00_3995;

						BgL_res2411z00_3995 =
							BGL_CLASS_INDEX(BGl_ev_absz00zz__evaluate_typesz00);
						BgL_arg1990z00_3994 = BgL_res2411z00_3995;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1193z00_3993), BgL_arg1990z00_3994);
				}
				return BgL_new1193z00_3993;
			}
		}

	}



/* &lambda1987 */
	BgL_ev_absz00_bglt BGl_z62lambda1987z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3518, obj_t BgL_loc1183z00_3519, obj_t BgL_where1184z00_3520,
		obj_t BgL_arity1185z00_3521, obj_t BgL_vars1186z00_3522,
		obj_t BgL_body1187z00_3523, obj_t BgL_siza7e1188za7_3524,
		obj_t BgL_bind1189z00_3525, obj_t BgL_free1190z00_3526,
		obj_t BgL_inner1191z00_3527, obj_t BgL_boxes1192z00_3528)
	{
		{	/* Eval/evaluate_types.scm 122 */
			{	/* Eval/evaluate_types.scm 122 */
				int BgL_siza7e1188za7_3997;

				BgL_siza7e1188za7_3997 = CINT(BgL_siza7e1188za7_3524);
				{	/* Eval/evaluate_types.scm 122 */
					BgL_ev_absz00_bglt BgL_new1247z00_3998;

					{	/* Eval/evaluate_types.scm 122 */
						BgL_ev_absz00_bglt BgL_new1246z00_3999;

						BgL_new1246z00_3999 =
							((BgL_ev_absz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_ev_absz00_bgl))));
						{	/* Eval/evaluate_types.scm 122 */
							long BgL_arg1988z00_4000;

							{	/* Eval/evaluate_types.scm 122 */
								long BgL_res2410z00_4001;

								BgL_res2410z00_4001 =
									BGL_CLASS_INDEX(BGl_ev_absz00zz__evaluate_typesz00);
								BgL_arg1988z00_4000 = BgL_res2410z00_4001;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1246z00_3999),
								BgL_arg1988z00_4000);
						}
						BgL_new1247z00_3998 = BgL_new1246z00_3999;
					}
					((((BgL_ev_absz00_bglt) COBJECT(BgL_new1247z00_3998))->BgL_locz00) =
						((obj_t) BgL_loc1183z00_3519), BUNSPEC);
					((((BgL_ev_absz00_bglt) COBJECT(BgL_new1247z00_3998))->BgL_wherez00) =
						((obj_t) BgL_where1184z00_3520), BUNSPEC);
					((((BgL_ev_absz00_bglt) COBJECT(BgL_new1247z00_3998))->BgL_arityz00) =
						((obj_t) BgL_arity1185z00_3521), BUNSPEC);
					((((BgL_ev_absz00_bglt) COBJECT(BgL_new1247z00_3998))->BgL_varsz00) =
						((obj_t) BgL_vars1186z00_3522), BUNSPEC);
					((((BgL_ev_absz00_bglt) COBJECT(BgL_new1247z00_3998))->BgL_bodyz00) =
						((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt)
								BgL_body1187z00_3523)), BUNSPEC);
					((((BgL_ev_absz00_bglt) COBJECT(BgL_new1247z00_3998))->
							BgL_siza7eza7) = ((int) BgL_siza7e1188za7_3997), BUNSPEC);
					((((BgL_ev_absz00_bglt) COBJECT(BgL_new1247z00_3998))->BgL_bindz00) =
						((obj_t) BgL_bind1189z00_3525), BUNSPEC);
					((((BgL_ev_absz00_bglt) COBJECT(BgL_new1247z00_3998))->BgL_freez00) =
						((obj_t) BgL_free1190z00_3526), BUNSPEC);
					((((BgL_ev_absz00_bglt) COBJECT(BgL_new1247z00_3998))->BgL_innerz00) =
						((obj_t) BgL_inner1191z00_3527), BUNSPEC);
					((((BgL_ev_absz00_bglt) COBJECT(BgL_new1247z00_3998))->BgL_boxesz00) =
						((obj_t) BgL_boxes1192z00_3528), BUNSPEC);
					return BgL_new1247z00_3998;
				}
			}
		}

	}



/* &<@anonymous:2059> */
	obj_t BGl_z62zc3z04anonymousza32059ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3529)
	{
		{	/* Eval/evaluate_types.scm 122 */
			return BNIL;
		}

	}



/* &lambda2058 */
	obj_t BGl_z62lambda2058z62zz__evaluate_typesz00(obj_t BgL_envz00_3530,
		obj_t BgL_oz00_3531, obj_t BgL_vz00_3532)
	{
		{	/* Eval/evaluate_types.scm 122 */
			return
				((((BgL_ev_absz00_bglt) COBJECT(
							((BgL_ev_absz00_bglt) BgL_oz00_3531)))->BgL_boxesz00) =
				((obj_t) BgL_vz00_3532), BUNSPEC);
		}

	}



/* &lambda2057 */
	obj_t BGl_z62lambda2057z62zz__evaluate_typesz00(obj_t BgL_envz00_3533,
		obj_t BgL_oz00_3534)
	{
		{	/* Eval/evaluate_types.scm 122 */
			return
				(((BgL_ev_absz00_bglt) COBJECT(
						((BgL_ev_absz00_bglt) BgL_oz00_3534)))->BgL_boxesz00);
		}

	}



/* &<@anonymous:2050> */
	obj_t BGl_z62zc3z04anonymousza32050ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3535)
	{
		{	/* Eval/evaluate_types.scm 122 */
			return BNIL;
		}

	}



/* &lambda2049 */
	obj_t BGl_z62lambda2049z62zz__evaluate_typesz00(obj_t BgL_envz00_3536,
		obj_t BgL_oz00_3537, obj_t BgL_vz00_3538)
	{
		{	/* Eval/evaluate_types.scm 122 */
			return
				((((BgL_ev_absz00_bglt) COBJECT(
							((BgL_ev_absz00_bglt) BgL_oz00_3537)))->BgL_innerz00) =
				((obj_t) BgL_vz00_3538), BUNSPEC);
		}

	}



/* &lambda2048 */
	obj_t BGl_z62lambda2048z62zz__evaluate_typesz00(obj_t BgL_envz00_3539,
		obj_t BgL_oz00_3540)
	{
		{	/* Eval/evaluate_types.scm 122 */
			return
				(((BgL_ev_absz00_bglt) COBJECT(
						((BgL_ev_absz00_bglt) BgL_oz00_3540)))->BgL_innerz00);
		}

	}



/* &<@anonymous:2043> */
	obj_t BGl_z62zc3z04anonymousza32043ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3541)
	{
		{	/* Eval/evaluate_types.scm 122 */
			return BNIL;
		}

	}



/* &lambda2042 */
	obj_t BGl_z62lambda2042z62zz__evaluate_typesz00(obj_t BgL_envz00_3542,
		obj_t BgL_oz00_3543, obj_t BgL_vz00_3544)
	{
		{	/* Eval/evaluate_types.scm 122 */
			return
				((((BgL_ev_absz00_bglt) COBJECT(
							((BgL_ev_absz00_bglt) BgL_oz00_3543)))->BgL_freez00) =
				((obj_t) BgL_vz00_3544), BUNSPEC);
		}

	}



/* &lambda2041 */
	obj_t BGl_z62lambda2041z62zz__evaluate_typesz00(obj_t BgL_envz00_3545,
		obj_t BgL_oz00_3546)
	{
		{	/* Eval/evaluate_types.scm 122 */
			return
				(((BgL_ev_absz00_bglt) COBJECT(
						((BgL_ev_absz00_bglt) BgL_oz00_3546)))->BgL_freez00);
		}

	}



/* &<@anonymous:2036> */
	obj_t BGl_z62zc3z04anonymousza32036ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3547)
	{
		{	/* Eval/evaluate_types.scm 122 */
			return BNIL;
		}

	}



/* &lambda2035 */
	obj_t BGl_z62lambda2035z62zz__evaluate_typesz00(obj_t BgL_envz00_3548,
		obj_t BgL_oz00_3549, obj_t BgL_vz00_3550)
	{
		{	/* Eval/evaluate_types.scm 122 */
			return
				((((BgL_ev_absz00_bglt) COBJECT(
							((BgL_ev_absz00_bglt) BgL_oz00_3549)))->BgL_bindz00) =
				((obj_t) BgL_vz00_3550), BUNSPEC);
		}

	}



/* &lambda2034 */
	obj_t BGl_z62lambda2034z62zz__evaluate_typesz00(obj_t BgL_envz00_3551,
		obj_t BgL_oz00_3552)
	{
		{	/* Eval/evaluate_types.scm 122 */
			return
				(((BgL_ev_absz00_bglt) COBJECT(
						((BgL_ev_absz00_bglt) BgL_oz00_3552)))->BgL_bindz00);
		}

	}



/* &<@anonymous:2026> */
	obj_t BGl_z62zc3z04anonymousza32026ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3553)
	{
		{	/* Eval/evaluate_types.scm 122 */
			return BINT(((long) 0));
		}

	}



/* &lambda2025 */
	obj_t BGl_z62lambda2025z62zz__evaluate_typesz00(obj_t BgL_envz00_3554,
		obj_t BgL_oz00_3555, obj_t BgL_vz00_3556)
	{
		{	/* Eval/evaluate_types.scm 122 */
			{	/* Eval/evaluate_types.scm 122 */
				int BgL_vz00_4011;

				BgL_vz00_4011 = CINT(BgL_vz00_3556);
				return
					((((BgL_ev_absz00_bglt) COBJECT(
								((BgL_ev_absz00_bglt) BgL_oz00_3555)))->BgL_siza7eza7) =
					((int) BgL_vz00_4011), BUNSPEC);
		}}

	}



/* &lambda2024 */
	obj_t BGl_z62lambda2024z62zz__evaluate_typesz00(obj_t BgL_envz00_3557,
		obj_t BgL_oz00_3558)
	{
		{	/* Eval/evaluate_types.scm 122 */
			return
				BINT(
				(((BgL_ev_absz00_bglt) COBJECT(
							((BgL_ev_absz00_bglt) BgL_oz00_3558)))->BgL_siza7eza7));
		}

	}



/* &lambda2019 */
	obj_t BGl_z62lambda2019z62zz__evaluate_typesz00(obj_t BgL_envz00_3559,
		obj_t BgL_oz00_3560, obj_t BgL_vz00_3561)
	{
		{	/* Eval/evaluate_types.scm 122 */
			return
				((((BgL_ev_absz00_bglt) COBJECT(
							((BgL_ev_absz00_bglt) BgL_oz00_3560)))->BgL_bodyz00) =
				((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_vz00_3561)), BUNSPEC);
		}

	}



/* &lambda2018 */
	BgL_ev_exprz00_bglt BGl_z62lambda2018z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3562, obj_t BgL_oz00_3563)
	{
		{	/* Eval/evaluate_types.scm 122 */
			return
				(((BgL_ev_absz00_bglt) COBJECT(
						((BgL_ev_absz00_bglt) BgL_oz00_3563)))->BgL_bodyz00);
		}

	}



/* &lambda2013 */
	obj_t BGl_z62lambda2013z62zz__evaluate_typesz00(obj_t BgL_envz00_3564,
		obj_t BgL_oz00_3565, obj_t BgL_vz00_3566)
	{
		{	/* Eval/evaluate_types.scm 122 */
			return
				((((BgL_ev_absz00_bglt) COBJECT(
							((BgL_ev_absz00_bglt) BgL_oz00_3565)))->BgL_varsz00) =
				((obj_t) BgL_vz00_3566), BUNSPEC);
		}

	}



/* &lambda2012 */
	obj_t BGl_z62lambda2012z62zz__evaluate_typesz00(obj_t BgL_envz00_3567,
		obj_t BgL_oz00_3568)
	{
		{	/* Eval/evaluate_types.scm 122 */
			return
				(((BgL_ev_absz00_bglt) COBJECT(
						((BgL_ev_absz00_bglt) BgL_oz00_3568)))->BgL_varsz00);
		}

	}



/* &lambda2007 */
	obj_t BGl_z62lambda2007z62zz__evaluate_typesz00(obj_t BgL_envz00_3569,
		obj_t BgL_oz00_3570, obj_t BgL_vz00_3571)
	{
		{	/* Eval/evaluate_types.scm 122 */
			return
				((((BgL_ev_absz00_bglt) COBJECT(
							((BgL_ev_absz00_bglt) BgL_oz00_3570)))->BgL_arityz00) =
				((obj_t) BgL_vz00_3571), BUNSPEC);
		}

	}



/* &lambda2006 */
	obj_t BGl_z62lambda2006z62zz__evaluate_typesz00(obj_t BgL_envz00_3572,
		obj_t BgL_oz00_3573)
	{
		{	/* Eval/evaluate_types.scm 122 */
			return
				(((BgL_ev_absz00_bglt) COBJECT(
						((BgL_ev_absz00_bglt) BgL_oz00_3573)))->BgL_arityz00);
		}

	}



/* &lambda2002 */
	obj_t BGl_z62lambda2002z62zz__evaluate_typesz00(obj_t BgL_envz00_3574,
		obj_t BgL_oz00_3575, obj_t BgL_vz00_3576)
	{
		{	/* Eval/evaluate_types.scm 122 */
			return
				((((BgL_ev_absz00_bglt) COBJECT(
							((BgL_ev_absz00_bglt) BgL_oz00_3575)))->BgL_wherez00) =
				((obj_t) BgL_vz00_3576), BUNSPEC);
		}

	}



/* &lambda2001 */
	obj_t BGl_z62lambda2001z62zz__evaluate_typesz00(obj_t BgL_envz00_3577,
		obj_t BgL_oz00_3578)
	{
		{	/* Eval/evaluate_types.scm 122 */
			return
				(((BgL_ev_absz00_bglt) COBJECT(
						((BgL_ev_absz00_bglt) BgL_oz00_3578)))->BgL_wherez00);
		}

	}



/* &lambda1997 */
	obj_t BGl_z62lambda1997z62zz__evaluate_typesz00(obj_t BgL_envz00_3579,
		obj_t BgL_oz00_3580, obj_t BgL_vz00_3581)
	{
		{	/* Eval/evaluate_types.scm 122 */
			return
				((((BgL_ev_absz00_bglt) COBJECT(
							((BgL_ev_absz00_bglt) BgL_oz00_3580)))->BgL_locz00) =
				((obj_t) BgL_vz00_3581), BUNSPEC);
		}

	}



/* &lambda1996 */
	obj_t BGl_z62lambda1996z62zz__evaluate_typesz00(obj_t BgL_envz00_3582,
		obj_t BgL_oz00_3583)
	{
		{	/* Eval/evaluate_types.scm 122 */
			return
				(((BgL_ev_absz00_bglt) COBJECT(
						((BgL_ev_absz00_bglt) BgL_oz00_3583)))->BgL_locz00);
		}

	}



/* &<@anonymous:1960> */
	obj_t BGl_z62zc3z04anonymousza31960ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3584, obj_t BgL_new1181z00_3585)
	{
		{	/* Eval/evaluate_types.scm 119 */
			{
				BgL_ev_appz00_bglt BgL_auxz00_4792;

				((((BgL_ev_appz00_bglt) COBJECT(
								((BgL_ev_appz00_bglt) BgL_new1181z00_3585)))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_ev_exprz00_bglt BgL_auxz00_4795;

					{	/* Eval/evaluate_types.scm 119 */
						obj_t BgL_classz00_4025;

						BgL_classz00_4025 = BGl_ev_exprz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 119 */
							obj_t BgL__ortest_1286z00_4026;

							BgL__ortest_1286z00_4026 = BGL_CLASS_NIL(BgL_classz00_4025);
							if (CBOOL(BgL__ortest_1286z00_4026))
								{	/* Eval/evaluate_types.scm 119 */
									BgL_auxz00_4795 =
										((BgL_ev_exprz00_bglt) BgL__ortest_1286z00_4026);
								}
							else
								{	/* Eval/evaluate_types.scm 119 */
									BgL_auxz00_4795 =
										((BgL_ev_exprz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4025));
								}
						}
					}
					((((BgL_ev_appz00_bglt) COBJECT(
									((BgL_ev_appz00_bglt) BgL_new1181z00_3585)))->BgL_funz00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_4795), BUNSPEC);
				}
				((((BgL_ev_appz00_bglt) COBJECT(
								((BgL_ev_appz00_bglt) BgL_new1181z00_3585)))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_ev_appz00_bglt) COBJECT(((BgL_ev_appz00_bglt)
									BgL_new1181z00_3585)))->BgL_tailzf3zf3) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_4792 = ((BgL_ev_appz00_bglt) BgL_new1181z00_3585);
				return ((obj_t) BgL_auxz00_4792);
			}
		}

	}



/* &lambda1958 */
	BgL_ev_appz00_bglt BGl_z62lambda1958z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3586)
	{
		{	/* Eval/evaluate_types.scm 119 */
			{	/* Eval/evaluate_types.scm 119 */
				BgL_ev_appz00_bglt BgL_new1180z00_4027;

				BgL_new1180z00_4027 =
					((BgL_ev_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_appz00_bgl))));
				{	/* Eval/evaluate_types.scm 119 */
					long BgL_arg1959z00_4028;

					{	/* Eval/evaluate_types.scm 119 */
						long BgL_res2409z00_4029;

						BgL_res2409z00_4029 =
							BGL_CLASS_INDEX(BGl_ev_appz00zz__evaluate_typesz00);
						BgL_arg1959z00_4028 = BgL_res2409z00_4029;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1180z00_4027), BgL_arg1959z00_4028);
				}
				return BgL_new1180z00_4027;
			}
		}

	}



/* &lambda1956 */
	BgL_ev_appz00_bglt BGl_z62lambda1956z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3587, obj_t BgL_loc1175z00_3588, obj_t BgL_fun1176z00_3589,
		obj_t BgL_args1177z00_3590, obj_t BgL_tailzf31178zf3_3591)
	{
		{	/* Eval/evaluate_types.scm 119 */
			{	/* Eval/evaluate_types.scm 119 */
				BgL_ev_appz00_bglt BgL_new1245z00_4031;

				{	/* Eval/evaluate_types.scm 119 */
					BgL_ev_appz00_bglt BgL_new1243z00_4032;

					BgL_new1243z00_4032 =
						((BgL_ev_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ev_appz00_bgl))));
					{	/* Eval/evaluate_types.scm 119 */
						long BgL_arg1957z00_4033;

						{	/* Eval/evaluate_types.scm 119 */
							long BgL_res2408z00_4034;

							BgL_res2408z00_4034 =
								BGL_CLASS_INDEX(BGl_ev_appz00zz__evaluate_typesz00);
							BgL_arg1957z00_4033 = BgL_res2408z00_4034;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1243z00_4032), BgL_arg1957z00_4033);
					}
					BgL_new1245z00_4031 = BgL_new1243z00_4032;
				}
				((((BgL_ev_appz00_bglt) COBJECT(BgL_new1245z00_4031))->BgL_locz00) =
					((obj_t) BgL_loc1175z00_3588), BUNSPEC);
				((((BgL_ev_appz00_bglt) COBJECT(BgL_new1245z00_4031))->BgL_funz00) =
					((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_fun1176z00_3589)),
					BUNSPEC);
				((((BgL_ev_appz00_bglt) COBJECT(BgL_new1245z00_4031))->BgL_argsz00) =
					((obj_t) BgL_args1177z00_3590), BUNSPEC);
				((((BgL_ev_appz00_bglt) COBJECT(BgL_new1245z00_4031))->BgL_tailzf3zf3) =
					((obj_t) BgL_tailzf31178zf3_3591), BUNSPEC);
				return BgL_new1245z00_4031;
			}
		}

	}



/* &lambda1981 */
	obj_t BGl_z62lambda1981z62zz__evaluate_typesz00(obj_t BgL_envz00_3592,
		obj_t BgL_oz00_3593, obj_t BgL_vz00_3594)
	{
		{	/* Eval/evaluate_types.scm 119 */
			return
				((((BgL_ev_appz00_bglt) COBJECT(
							((BgL_ev_appz00_bglt) BgL_oz00_3593)))->BgL_tailzf3zf3) =
				((obj_t) BgL_vz00_3594), BUNSPEC);
		}

	}



/* &lambda1980 */
	obj_t BGl_z62lambda1980z62zz__evaluate_typesz00(obj_t BgL_envz00_3595,
		obj_t BgL_oz00_3596)
	{
		{	/* Eval/evaluate_types.scm 119 */
			return
				(((BgL_ev_appz00_bglt) COBJECT(
						((BgL_ev_appz00_bglt) BgL_oz00_3596)))->BgL_tailzf3zf3);
		}

	}



/* &lambda1975 */
	obj_t BGl_z62lambda1975z62zz__evaluate_typesz00(obj_t BgL_envz00_3597,
		obj_t BgL_oz00_3598, obj_t BgL_vz00_3599)
	{
		{	/* Eval/evaluate_types.scm 119 */
			return
				((((BgL_ev_appz00_bglt) COBJECT(
							((BgL_ev_appz00_bglt) BgL_oz00_3598)))->BgL_argsz00) =
				((obj_t) BgL_vz00_3599), BUNSPEC);
		}

	}



/* &lambda1974 */
	obj_t BGl_z62lambda1974z62zz__evaluate_typesz00(obj_t BgL_envz00_3600,
		obj_t BgL_oz00_3601)
	{
		{	/* Eval/evaluate_types.scm 119 */
			return
				(((BgL_ev_appz00_bglt) COBJECT(
						((BgL_ev_appz00_bglt) BgL_oz00_3601)))->BgL_argsz00);
		}

	}



/* &lambda1970 */
	obj_t BGl_z62lambda1970z62zz__evaluate_typesz00(obj_t BgL_envz00_3602,
		obj_t BgL_oz00_3603, obj_t BgL_vz00_3604)
	{
		{	/* Eval/evaluate_types.scm 119 */
			return
				((((BgL_ev_appz00_bglt) COBJECT(
							((BgL_ev_appz00_bglt) BgL_oz00_3603)))->BgL_funz00) =
				((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_vz00_3604)), BUNSPEC);
		}

	}



/* &lambda1969 */
	BgL_ev_exprz00_bglt BGl_z62lambda1969z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3605, obj_t BgL_oz00_3606)
	{
		{	/* Eval/evaluate_types.scm 119 */
			return
				(((BgL_ev_appz00_bglt) COBJECT(
						((BgL_ev_appz00_bglt) BgL_oz00_3606)))->BgL_funz00);
		}

	}



/* &lambda1965 */
	obj_t BGl_z62lambda1965z62zz__evaluate_typesz00(obj_t BgL_envz00_3607,
		obj_t BgL_oz00_3608, obj_t BgL_vz00_3609)
	{
		{	/* Eval/evaluate_types.scm 119 */
			return
				((((BgL_ev_appz00_bglt) COBJECT(
							((BgL_ev_appz00_bglt) BgL_oz00_3608)))->BgL_locz00) =
				((obj_t) BgL_vz00_3609), BUNSPEC);
		}

	}



/* &lambda1964 */
	obj_t BGl_z62lambda1964z62zz__evaluate_typesz00(obj_t BgL_envz00_3610,
		obj_t BgL_oz00_3611)
	{
		{	/* Eval/evaluate_types.scm 119 */
			return
				(((BgL_ev_appz00_bglt) COBJECT(
						((BgL_ev_appz00_bglt) BgL_oz00_3611)))->BgL_locz00);
		}

	}



/* &<@anonymous:1930> */
	obj_t BGl_z62zc3z04anonymousza31930ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3612, obj_t BgL_new1173z00_3613)
	{
		{	/* Eval/evaluate_types.scm 114 */
			{
				BgL_ev_gotoz00_bglt BgL_auxz00_4840;

				((((BgL_ev_gotoz00_bglt) COBJECT(
								((BgL_ev_gotoz00_bglt) BgL_new1173z00_3613)))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_ev_varz00_bglt BgL_auxz00_4843;

					{	/* Eval/evaluate_types.scm 114 */
						obj_t BgL_classz00_4045;

						BgL_classz00_4045 = BGl_ev_varz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 114 */
							obj_t BgL__ortest_1286z00_4046;

							BgL__ortest_1286z00_4046 = BGL_CLASS_NIL(BgL_classz00_4045);
							if (CBOOL(BgL__ortest_1286z00_4046))
								{	/* Eval/evaluate_types.scm 114 */
									BgL_auxz00_4843 =
										((BgL_ev_varz00_bglt) BgL__ortest_1286z00_4046);
								}
							else
								{	/* Eval/evaluate_types.scm 114 */
									BgL_auxz00_4843 =
										((BgL_ev_varz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4045));
								}
						}
					}
					((((BgL_ev_gotoz00_bglt) COBJECT(
									((BgL_ev_gotoz00_bglt) BgL_new1173z00_3613)))->BgL_labelz00) =
						((BgL_ev_varz00_bglt) BgL_auxz00_4843), BUNSPEC);
				}
				{
					BgL_ev_labelsz00_bglt BgL_auxz00_4852;

					{	/* Eval/evaluate_types.scm 114 */
						obj_t BgL_classz00_4047;

						BgL_classz00_4047 = BGl_ev_labelsz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 114 */
							obj_t BgL__ortest_1286z00_4048;

							BgL__ortest_1286z00_4048 = BGL_CLASS_NIL(BgL_classz00_4047);
							if (CBOOL(BgL__ortest_1286z00_4048))
								{	/* Eval/evaluate_types.scm 114 */
									BgL_auxz00_4852 =
										((BgL_ev_labelsz00_bglt) BgL__ortest_1286z00_4048);
								}
							else
								{	/* Eval/evaluate_types.scm 114 */
									BgL_auxz00_4852 =
										((BgL_ev_labelsz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4047));
								}
						}
					}
					((((BgL_ev_gotoz00_bglt) COBJECT(
									((BgL_ev_gotoz00_bglt) BgL_new1173z00_3613)))->
							BgL_labelsz00) =
						((BgL_ev_labelsz00_bglt) BgL_auxz00_4852), BUNSPEC);
				}
				((((BgL_ev_gotoz00_bglt) COBJECT(
								((BgL_ev_gotoz00_bglt) BgL_new1173z00_3613)))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_4840 = ((BgL_ev_gotoz00_bglt) BgL_new1173z00_3613);
				return ((obj_t) BgL_auxz00_4840);
			}
		}

	}



/* &lambda1928 */
	BgL_ev_gotoz00_bglt BGl_z62lambda1928z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3614)
	{
		{	/* Eval/evaluate_types.scm 114 */
			{	/* Eval/evaluate_types.scm 114 */
				BgL_ev_gotoz00_bglt BgL_new1172z00_4049;

				BgL_new1172z00_4049 =
					((BgL_ev_gotoz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_gotoz00_bgl))));
				{	/* Eval/evaluate_types.scm 114 */
					long BgL_arg1929z00_4050;

					{	/* Eval/evaluate_types.scm 114 */
						long BgL_res2407z00_4051;

						BgL_res2407z00_4051 =
							BGL_CLASS_INDEX(BGl_ev_gotoz00zz__evaluate_typesz00);
						BgL_arg1929z00_4050 = BgL_res2407z00_4051;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1172z00_4049), BgL_arg1929z00_4050);
				}
				return BgL_new1172z00_4049;
			}
		}

	}



/* &lambda1926 */
	BgL_ev_gotoz00_bglt BGl_z62lambda1926z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3615, obj_t BgL_loc1168z00_3616, obj_t BgL_label1169z00_3617,
		obj_t BgL_labels1170z00_3618, obj_t BgL_args1171z00_3619)
	{
		{	/* Eval/evaluate_types.scm 114 */
			{	/* Eval/evaluate_types.scm 114 */
				BgL_ev_gotoz00_bglt BgL_new1242z00_4054;

				{	/* Eval/evaluate_types.scm 114 */
					BgL_ev_gotoz00_bglt BgL_new1241z00_4055;

					BgL_new1241z00_4055 =
						((BgL_ev_gotoz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ev_gotoz00_bgl))));
					{	/* Eval/evaluate_types.scm 114 */
						long BgL_arg1927z00_4056;

						{	/* Eval/evaluate_types.scm 114 */
							long BgL_res2406z00_4057;

							BgL_res2406z00_4057 =
								BGL_CLASS_INDEX(BGl_ev_gotoz00zz__evaluate_typesz00);
							BgL_arg1927z00_4056 = BgL_res2406z00_4057;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1241z00_4055), BgL_arg1927z00_4056);
					}
					BgL_new1242z00_4054 = BgL_new1241z00_4055;
				}
				((((BgL_ev_gotoz00_bglt) COBJECT(BgL_new1242z00_4054))->BgL_locz00) =
					((obj_t) BgL_loc1168z00_3616), BUNSPEC);
				((((BgL_ev_gotoz00_bglt) COBJECT(BgL_new1242z00_4054))->BgL_labelz00) =
					((BgL_ev_varz00_bglt) ((BgL_ev_varz00_bglt) BgL_label1169z00_3617)),
					BUNSPEC);
				((((BgL_ev_gotoz00_bglt) COBJECT(BgL_new1242z00_4054))->BgL_labelsz00) =
					((BgL_ev_labelsz00_bglt) ((BgL_ev_labelsz00_bglt)
							BgL_labels1170z00_3618)), BUNSPEC);
				((((BgL_ev_gotoz00_bglt) COBJECT(BgL_new1242z00_4054))->BgL_argsz00) =
					((obj_t) BgL_args1171z00_3619), BUNSPEC);
				return BgL_new1242z00_4054;
			}
		}

	}



/* &lambda1950 */
	obj_t BGl_z62lambda1950z62zz__evaluate_typesz00(obj_t BgL_envz00_3620,
		obj_t BgL_oz00_3621, obj_t BgL_vz00_3622)
	{
		{	/* Eval/evaluate_types.scm 114 */
			return
				((((BgL_ev_gotoz00_bglt) COBJECT(
							((BgL_ev_gotoz00_bglt) BgL_oz00_3621)))->BgL_argsz00) =
				((obj_t) BgL_vz00_3622), BUNSPEC);
		}

	}



/* &lambda1949 */
	obj_t BGl_z62lambda1949z62zz__evaluate_typesz00(obj_t BgL_envz00_3623,
		obj_t BgL_oz00_3624)
	{
		{	/* Eval/evaluate_types.scm 114 */
			return
				(((BgL_ev_gotoz00_bglt) COBJECT(
						((BgL_ev_gotoz00_bglt) BgL_oz00_3624)))->BgL_argsz00);
		}

	}



/* &lambda1945 */
	obj_t BGl_z62lambda1945z62zz__evaluate_typesz00(obj_t BgL_envz00_3625,
		obj_t BgL_oz00_3626, obj_t BgL_vz00_3627)
	{
		{	/* Eval/evaluate_types.scm 114 */
			return
				((((BgL_ev_gotoz00_bglt) COBJECT(
							((BgL_ev_gotoz00_bglt) BgL_oz00_3626)))->BgL_labelsz00) =
				((BgL_ev_labelsz00_bglt) ((BgL_ev_labelsz00_bglt) BgL_vz00_3627)),
				BUNSPEC);
		}

	}



/* &lambda1944 */
	BgL_ev_labelsz00_bglt BGl_z62lambda1944z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3628, obj_t BgL_oz00_3629)
	{
		{	/* Eval/evaluate_types.scm 114 */
			return
				(((BgL_ev_gotoz00_bglt) COBJECT(
						((BgL_ev_gotoz00_bglt) BgL_oz00_3629)))->BgL_labelsz00);
		}

	}



/* &lambda1940 */
	obj_t BGl_z62lambda1940z62zz__evaluate_typesz00(obj_t BgL_envz00_3630,
		obj_t BgL_oz00_3631, obj_t BgL_vz00_3632)
	{
		{	/* Eval/evaluate_types.scm 114 */
			return
				((((BgL_ev_gotoz00_bglt) COBJECT(
							((BgL_ev_gotoz00_bglt) BgL_oz00_3631)))->BgL_labelz00) =
				((BgL_ev_varz00_bglt) ((BgL_ev_varz00_bglt) BgL_vz00_3632)), BUNSPEC);
		}

	}



/* &lambda1939 */
	BgL_ev_varz00_bglt BGl_z62lambda1939z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3633, obj_t BgL_oz00_3634)
	{
		{	/* Eval/evaluate_types.scm 114 */
			return
				(((BgL_ev_gotoz00_bglt) COBJECT(
						((BgL_ev_gotoz00_bglt) BgL_oz00_3634)))->BgL_labelz00);
		}

	}



/* &lambda1935 */
	obj_t BGl_z62lambda1935z62zz__evaluate_typesz00(obj_t BgL_envz00_3635,
		obj_t BgL_oz00_3636, obj_t BgL_vz00_3637)
	{
		{	/* Eval/evaluate_types.scm 114 */
			return
				((((BgL_ev_gotoz00_bglt) COBJECT(
							((BgL_ev_gotoz00_bglt) BgL_oz00_3636)))->BgL_locz00) =
				((obj_t) BgL_vz00_3637), BUNSPEC);
		}

	}



/* &lambda1934 */
	obj_t BGl_z62lambda1934z62zz__evaluate_typesz00(obj_t BgL_envz00_3638,
		obj_t BgL_oz00_3639)
	{
		{	/* Eval/evaluate_types.scm 114 */
			return
				(((BgL_ev_gotoz00_bglt) COBJECT(
						((BgL_ev_gotoz00_bglt) BgL_oz00_3639)))->BgL_locz00);
		}

	}



/* &<@anonymous:1879> */
	obj_t BGl_z62zc3z04anonymousza31879ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3640, obj_t BgL_new1166z00_3641)
	{
		{	/* Eval/evaluate_types.scm 106 */
			{
				BgL_ev_labelsz00_bglt BgL_auxz00_4897;

				((((BgL_ev_labelsz00_bglt) COBJECT(
								((BgL_ev_labelsz00_bglt) BgL_new1166z00_3641)))->BgL_varsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_ev_labelsz00_bglt) COBJECT(((BgL_ev_labelsz00_bglt)
									BgL_new1166z00_3641)))->BgL_valsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_ev_labelsz00_bglt) COBJECT(((BgL_ev_labelsz00_bglt)
									BgL_new1166z00_3641)))->BgL_envz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_ev_labelsz00_bglt) COBJECT(((BgL_ev_labelsz00_bglt)
									BgL_new1166z00_3641)))->BgL_stkz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_ev_exprz00_bglt BgL_auxz00_4906;

					{	/* Eval/evaluate_types.scm 106 */
						obj_t BgL_classz00_4069;

						BgL_classz00_4069 = BGl_ev_exprz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 106 */
							obj_t BgL__ortest_1286z00_4070;

							BgL__ortest_1286z00_4070 = BGL_CLASS_NIL(BgL_classz00_4069);
							if (CBOOL(BgL__ortest_1286z00_4070))
								{	/* Eval/evaluate_types.scm 106 */
									BgL_auxz00_4906 =
										((BgL_ev_exprz00_bglt) BgL__ortest_1286z00_4070);
								}
							else
								{	/* Eval/evaluate_types.scm 106 */
									BgL_auxz00_4906 =
										((BgL_ev_exprz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4069));
								}
						}
					}
					((((BgL_ev_labelsz00_bglt) COBJECT(
									((BgL_ev_labelsz00_bglt) BgL_new1166z00_3641)))->
							BgL_bodyz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_4906), BUNSPEC);
				}
				((((BgL_ev_labelsz00_bglt) COBJECT(
								((BgL_ev_labelsz00_bglt) BgL_new1166z00_3641)))->BgL_boxesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_4897 = ((BgL_ev_labelsz00_bglt) BgL_new1166z00_3641);
				return ((obj_t) BgL_auxz00_4897);
			}
		}

	}



/* &lambda1877 */
	BgL_ev_labelsz00_bglt BGl_z62lambda1877z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3642)
	{
		{	/* Eval/evaluate_types.scm 106 */
			{	/* Eval/evaluate_types.scm 106 */
				BgL_ev_labelsz00_bglt BgL_new1165z00_4071;

				BgL_new1165z00_4071 =
					((BgL_ev_labelsz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_labelsz00_bgl))));
				{	/* Eval/evaluate_types.scm 106 */
					long BgL_arg1878z00_4072;

					{	/* Eval/evaluate_types.scm 106 */
						long BgL_res2405z00_4073;

						BgL_res2405z00_4073 =
							BGL_CLASS_INDEX(BGl_ev_labelsz00zz__evaluate_typesz00);
						BgL_arg1878z00_4072 = BgL_res2405z00_4073;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1165z00_4071), BgL_arg1878z00_4072);
				}
				return BgL_new1165z00_4071;
			}
		}

	}



/* &lambda1875 */
	BgL_ev_labelsz00_bglt BGl_z62lambda1875z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3643, obj_t BgL_vars1159z00_3644, obj_t BgL_vals1160z00_3645,
		obj_t BgL_env1161z00_3646, obj_t BgL_stk1162z00_3647,
		obj_t BgL_body1163z00_3648, obj_t BgL_boxes1164z00_3649)
	{
		{	/* Eval/evaluate_types.scm 106 */
			{	/* Eval/evaluate_types.scm 106 */
				BgL_ev_labelsz00_bglt BgL_new1240z00_4075;

				{	/* Eval/evaluate_types.scm 106 */
					BgL_ev_labelsz00_bglt BgL_new1239z00_4076;

					BgL_new1239z00_4076 =
						((BgL_ev_labelsz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ev_labelsz00_bgl))));
					{	/* Eval/evaluate_types.scm 106 */
						long BgL_arg1876z00_4077;

						{	/* Eval/evaluate_types.scm 106 */
							long BgL_res2404z00_4078;

							BgL_res2404z00_4078 =
								BGL_CLASS_INDEX(BGl_ev_labelsz00zz__evaluate_typesz00);
							BgL_arg1876z00_4077 = BgL_res2404z00_4078;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1239z00_4076), BgL_arg1876z00_4077);
					}
					BgL_new1240z00_4075 = BgL_new1239z00_4076;
				}
				((((BgL_ev_labelsz00_bglt) COBJECT(BgL_new1240z00_4075))->BgL_varsz00) =
					((obj_t) BgL_vars1159z00_3644), BUNSPEC);
				((((BgL_ev_labelsz00_bglt) COBJECT(BgL_new1240z00_4075))->BgL_valsz00) =
					((obj_t) BgL_vals1160z00_3645), BUNSPEC);
				((((BgL_ev_labelsz00_bglt) COBJECT(BgL_new1240z00_4075))->BgL_envz00) =
					((obj_t) BgL_env1161z00_3646), BUNSPEC);
				((((BgL_ev_labelsz00_bglt) COBJECT(BgL_new1240z00_4075))->BgL_stkz00) =
					((obj_t) BgL_stk1162z00_3647), BUNSPEC);
				((((BgL_ev_labelsz00_bglt) COBJECT(BgL_new1240z00_4075))->BgL_bodyz00) =
					((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_body1163z00_3648)),
					BUNSPEC);
				((((BgL_ev_labelsz00_bglt) COBJECT(BgL_new1240z00_4075))->
						BgL_boxesz00) = ((obj_t) BgL_boxes1164z00_3649), BUNSPEC);
				return BgL_new1240z00_4075;
			}
		}

	}



/* &<@anonymous:1919> */
	obj_t BGl_z62zc3z04anonymousza31919ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3650)
	{
		{	/* Eval/evaluate_types.scm 106 */
			return BNIL;
		}

	}



/* &lambda1918 */
	obj_t BGl_z62lambda1918z62zz__evaluate_typesz00(obj_t BgL_envz00_3651,
		obj_t BgL_oz00_3652, obj_t BgL_vz00_3653)
	{
		{	/* Eval/evaluate_types.scm 106 */
			return
				((((BgL_ev_labelsz00_bglt) COBJECT(
							((BgL_ev_labelsz00_bglt) BgL_oz00_3652)))->BgL_boxesz00) =
				((obj_t) BgL_vz00_3653), BUNSPEC);
		}

	}



/* &lambda1917 */
	obj_t BGl_z62lambda1917z62zz__evaluate_typesz00(obj_t BgL_envz00_3654,
		obj_t BgL_oz00_3655)
	{
		{	/* Eval/evaluate_types.scm 106 */
			return
				(((BgL_ev_labelsz00_bglt) COBJECT(
						((BgL_ev_labelsz00_bglt) BgL_oz00_3655)))->BgL_boxesz00);
		}

	}



/* &lambda1912 */
	obj_t BGl_z62lambda1912z62zz__evaluate_typesz00(obj_t BgL_envz00_3656,
		obj_t BgL_oz00_3657, obj_t BgL_vz00_3658)
	{
		{	/* Eval/evaluate_types.scm 106 */
			return
				((((BgL_ev_labelsz00_bglt) COBJECT(
							((BgL_ev_labelsz00_bglt) BgL_oz00_3657)))->BgL_bodyz00) =
				((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_vz00_3658)), BUNSPEC);
		}

	}



/* &lambda1911 */
	BgL_ev_exprz00_bglt BGl_z62lambda1911z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3659, obj_t BgL_oz00_3660)
	{
		{	/* Eval/evaluate_types.scm 106 */
			return
				(((BgL_ev_labelsz00_bglt) COBJECT(
						((BgL_ev_labelsz00_bglt) BgL_oz00_3660)))->BgL_bodyz00);
		}

	}



/* &<@anonymous:1907> */
	obj_t BGl_z62zc3z04anonymousza31907ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3661)
	{
		{	/* Eval/evaluate_types.scm 106 */
			return BNIL;
		}

	}



/* &lambda1906 */
	obj_t BGl_z62lambda1906z62zz__evaluate_typesz00(obj_t BgL_envz00_3662,
		obj_t BgL_oz00_3663, obj_t BgL_vz00_3664)
	{
		{	/* Eval/evaluate_types.scm 106 */
			return
				((((BgL_ev_labelsz00_bglt) COBJECT(
							((BgL_ev_labelsz00_bglt) BgL_oz00_3663)))->BgL_stkz00) =
				((obj_t) BgL_vz00_3664), BUNSPEC);
		}

	}



/* &lambda1905 */
	obj_t BGl_z62lambda1905z62zz__evaluate_typesz00(obj_t BgL_envz00_3665,
		obj_t BgL_oz00_3666)
	{
		{	/* Eval/evaluate_types.scm 106 */
			return
				(((BgL_ev_labelsz00_bglt) COBJECT(
						((BgL_ev_labelsz00_bglt) BgL_oz00_3666)))->BgL_stkz00);
		}

	}



/* &<@anonymous:1898> */
	obj_t BGl_z62zc3z04anonymousza31898ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3667)
	{
		{	/* Eval/evaluate_types.scm 106 */
			return BNIL;
		}

	}



/* &lambda1897 */
	obj_t BGl_z62lambda1897z62zz__evaluate_typesz00(obj_t BgL_envz00_3668,
		obj_t BgL_oz00_3669, obj_t BgL_vz00_3670)
	{
		{	/* Eval/evaluate_types.scm 106 */
			return
				((((BgL_ev_labelsz00_bglt) COBJECT(
							((BgL_ev_labelsz00_bglt) BgL_oz00_3669)))->BgL_envz00) =
				((obj_t) BgL_vz00_3670), BUNSPEC);
		}

	}



/* &lambda1896 */
	obj_t BGl_z62lambda1896z62zz__evaluate_typesz00(obj_t BgL_envz00_3671,
		obj_t BgL_oz00_3672)
	{
		{	/* Eval/evaluate_types.scm 106 */
			return
				(((BgL_ev_labelsz00_bglt) COBJECT(
						((BgL_ev_labelsz00_bglt) BgL_oz00_3672)))->BgL_envz00);
		}

	}



/* &lambda1890 */
	obj_t BGl_z62lambda1890z62zz__evaluate_typesz00(obj_t BgL_envz00_3673,
		obj_t BgL_oz00_3674, obj_t BgL_vz00_3675)
	{
		{	/* Eval/evaluate_types.scm 106 */
			return
				((((BgL_ev_labelsz00_bglt) COBJECT(
							((BgL_ev_labelsz00_bglt) BgL_oz00_3674)))->BgL_valsz00) =
				((obj_t) BgL_vz00_3675), BUNSPEC);
		}

	}



/* &lambda1889 */
	obj_t BGl_z62lambda1889z62zz__evaluate_typesz00(obj_t BgL_envz00_3676,
		obj_t BgL_oz00_3677)
	{
		{	/* Eval/evaluate_types.scm 106 */
			return
				(((BgL_ev_labelsz00_bglt) COBJECT(
						((BgL_ev_labelsz00_bglt) BgL_oz00_3677)))->BgL_valsz00);
		}

	}



/* &lambda1885 */
	obj_t BGl_z62lambda1885z62zz__evaluate_typesz00(obj_t BgL_envz00_3678,
		obj_t BgL_oz00_3679, obj_t BgL_vz00_3680)
	{
		{	/* Eval/evaluate_types.scm 106 */
			return
				((((BgL_ev_labelsz00_bglt) COBJECT(
							((BgL_ev_labelsz00_bglt) BgL_oz00_3679)))->BgL_varsz00) =
				((obj_t) BgL_vz00_3680), BUNSPEC);
		}

	}



/* &lambda1884 */
	obj_t BGl_z62lambda1884z62zz__evaluate_typesz00(obj_t BgL_envz00_3681,
		obj_t BgL_oz00_3682)
	{
		{	/* Eval/evaluate_types.scm 106 */
			return
				(((BgL_ev_labelsz00_bglt) COBJECT(
						((BgL_ev_labelsz00_bglt) BgL_oz00_3682)))->BgL_varsz00);
		}

	}



/* &<@anonymous:1869> */
	obj_t BGl_z62zc3z04anonymousza31869ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3683, obj_t BgL_new1157z00_3684)
	{
		{	/* Eval/evaluate_types.scm 105 */
			{
				BgL_ev_letrecz00_bglt BgL_auxz00_4959;

				((((BgL_ev_binderz00_bglt) COBJECT(
								((BgL_ev_binderz00_bglt)
									((BgL_ev_letrecz00_bglt) BgL_new1157z00_3684))))->
						BgL_varsz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_ev_binderz00_bglt)
							COBJECT(((BgL_ev_binderz00_bglt) ((BgL_ev_letrecz00_bglt)
										BgL_new1157z00_3684))))->BgL_valsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_ev_exprz00_bglt BgL_auxz00_4966;

					{	/* Eval/evaluate_types.scm 105 */
						obj_t BgL_classz00_4093;

						BgL_classz00_4093 = BGl_ev_exprz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 105 */
							obj_t BgL__ortest_1286z00_4094;

							BgL__ortest_1286z00_4094 = BGL_CLASS_NIL(BgL_classz00_4093);
							if (CBOOL(BgL__ortest_1286z00_4094))
								{	/* Eval/evaluate_types.scm 105 */
									BgL_auxz00_4966 =
										((BgL_ev_exprz00_bglt) BgL__ortest_1286z00_4094);
								}
							else
								{	/* Eval/evaluate_types.scm 105 */
									BgL_auxz00_4966 =
										((BgL_ev_exprz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4093));
								}
						}
					}
					((((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt)
										((BgL_ev_letrecz00_bglt) BgL_new1157z00_3684))))->
							BgL_bodyz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_4966), BUNSPEC);
				}
				BgL_auxz00_4959 = ((BgL_ev_letrecz00_bglt) BgL_new1157z00_3684);
				return ((obj_t) BgL_auxz00_4959);
			}
		}

	}



/* &lambda1866 */
	BgL_ev_letrecz00_bglt BGl_z62lambda1866z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3685)
	{
		{	/* Eval/evaluate_types.scm 105 */
			{	/* Eval/evaluate_types.scm 105 */
				BgL_ev_letrecz00_bglt BgL_new1156z00_4095;

				BgL_new1156z00_4095 =
					((BgL_ev_letrecz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_letrecz00_bgl))));
				{	/* Eval/evaluate_types.scm 105 */
					long BgL_arg1868z00_4096;

					{	/* Eval/evaluate_types.scm 105 */
						long BgL_res2403z00_4097;

						BgL_res2403z00_4097 =
							BGL_CLASS_INDEX(BGl_ev_letrecz00zz__evaluate_typesz00);
						BgL_arg1868z00_4096 = BgL_res2403z00_4097;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1156z00_4095), BgL_arg1868z00_4096);
				}
				return BgL_new1156z00_4095;
			}
		}

	}



/* &lambda1863 */
	BgL_ev_letrecz00_bglt BGl_z62lambda1863z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3686, obj_t BgL_vars1152z00_3687, obj_t BgL_vals1153z00_3688,
		obj_t BgL_body1154z00_3689)
	{
		{	/* Eval/evaluate_types.scm 105 */
			{	/* Eval/evaluate_types.scm 105 */
				BgL_ev_letrecz00_bglt BgL_new1238z00_4099;

				{	/* Eval/evaluate_types.scm 105 */
					BgL_ev_letrecz00_bglt BgL_new1237z00_4100;

					BgL_new1237z00_4100 =
						((BgL_ev_letrecz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ev_letrecz00_bgl))));
					{	/* Eval/evaluate_types.scm 105 */
						long BgL_arg1865z00_4101;

						{	/* Eval/evaluate_types.scm 105 */
							long BgL_res2402z00_4102;

							BgL_res2402z00_4102 =
								BGL_CLASS_INDEX(BGl_ev_letrecz00zz__evaluate_typesz00);
							BgL_arg1865z00_4101 = BgL_res2402z00_4102;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1237z00_4100), BgL_arg1865z00_4101);
					}
					BgL_new1238z00_4099 = BgL_new1237z00_4100;
				}
				((((BgL_ev_binderz00_bglt) COBJECT(
								((BgL_ev_binderz00_bglt) BgL_new1238z00_4099)))->BgL_varsz00) =
					((obj_t) BgL_vars1152z00_3687), BUNSPEC);
				((((BgL_ev_binderz00_bglt) COBJECT(((BgL_ev_binderz00_bglt)
									BgL_new1238z00_4099)))->BgL_valsz00) =
					((obj_t) BgL_vals1153z00_3688), BUNSPEC);
				((((BgL_ev_binderz00_bglt) COBJECT(((BgL_ev_binderz00_bglt)
									BgL_new1238z00_4099)))->BgL_bodyz00) =
					((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_body1154z00_3689)),
					BUNSPEC);
				return BgL_new1238z00_4099;
			}
		}

	}



/* &<@anonymous:1848> */
	obj_t BGl_z62zc3z04anonymousza31848ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3690, obj_t BgL_new1150z00_3691)
	{
		{	/* Eval/evaluate_types.scm 103 */
			{
				BgL_ev_letza2za2_bglt BgL_auxz00_4993;

				((((BgL_ev_binderz00_bglt) COBJECT(
								((BgL_ev_binderz00_bglt)
									((BgL_ev_letza2za2_bglt) BgL_new1150z00_3691))))->
						BgL_varsz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_ev_binderz00_bglt)
							COBJECT(((BgL_ev_binderz00_bglt) ((BgL_ev_letza2za2_bglt)
										BgL_new1150z00_3691))))->BgL_valsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5000;

					{	/* Eval/evaluate_types.scm 103 */
						obj_t BgL_classz00_4104;

						BgL_classz00_4104 = BGl_ev_exprz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 103 */
							obj_t BgL__ortest_1286z00_4105;

							BgL__ortest_1286z00_4105 = BGL_CLASS_NIL(BgL_classz00_4104);
							if (CBOOL(BgL__ortest_1286z00_4105))
								{	/* Eval/evaluate_types.scm 103 */
									BgL_auxz00_5000 =
										((BgL_ev_exprz00_bglt) BgL__ortest_1286z00_4105);
								}
							else
								{	/* Eval/evaluate_types.scm 103 */
									BgL_auxz00_5000 =
										((BgL_ev_exprz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4104));
								}
						}
					}
					((((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt)
										((BgL_ev_letza2za2_bglt) BgL_new1150z00_3691))))->
							BgL_bodyz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5000), BUNSPEC);
				}
				((((BgL_ev_letza2za2_bglt) COBJECT(
								((BgL_ev_letza2za2_bglt) BgL_new1150z00_3691)))->BgL_boxesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_4993 = ((BgL_ev_letza2za2_bglt) BgL_new1150z00_3691);
				return ((obj_t) BgL_auxz00_4993);
			}
		}

	}



/* &lambda1846 */
	BgL_ev_letza2za2_bglt BGl_z62lambda1846z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3692)
	{
		{	/* Eval/evaluate_types.scm 103 */
			{	/* Eval/evaluate_types.scm 103 */
				BgL_ev_letza2za2_bglt BgL_new1149z00_4106;

				BgL_new1149z00_4106 =
					((BgL_ev_letza2za2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_letza2za2_bgl))));
				{	/* Eval/evaluate_types.scm 103 */
					long BgL_arg1847z00_4107;

					{	/* Eval/evaluate_types.scm 103 */
						long BgL_res2401z00_4108;

						BgL_res2401z00_4108 =
							BGL_CLASS_INDEX(BGl_ev_letza2za2zz__evaluate_typesz00);
						BgL_arg1847z00_4107 = BgL_res2401z00_4108;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1149z00_4106), BgL_arg1847z00_4107);
				}
				return BgL_new1149z00_4106;
			}
		}

	}



/* &lambda1843 */
	BgL_ev_letza2za2_bglt BGl_z62lambda1843z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3693, obj_t BgL_vars1145z00_3694, obj_t BgL_vals1146z00_3695,
		obj_t BgL_body1147z00_3696, obj_t BgL_boxes1148z00_3697)
	{
		{	/* Eval/evaluate_types.scm 103 */
			{	/* Eval/evaluate_types.scm 103 */
				BgL_ev_letza2za2_bglt BgL_new1236z00_4110;

				{	/* Eval/evaluate_types.scm 103 */
					BgL_ev_letza2za2_bglt BgL_new1235z00_4111;

					BgL_new1235z00_4111 =
						((BgL_ev_letza2za2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ev_letza2za2_bgl))));
					{	/* Eval/evaluate_types.scm 103 */
						long BgL_arg1845z00_4112;

						{	/* Eval/evaluate_types.scm 103 */
							long BgL_res2400z00_4113;

							BgL_res2400z00_4113 =
								BGL_CLASS_INDEX(BGl_ev_letza2za2zz__evaluate_typesz00);
							BgL_arg1845z00_4112 = BgL_res2400z00_4113;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1235z00_4111), BgL_arg1845z00_4112);
					}
					BgL_new1236z00_4110 = BgL_new1235z00_4111;
				}
				((((BgL_ev_binderz00_bglt) COBJECT(
								((BgL_ev_binderz00_bglt) BgL_new1236z00_4110)))->BgL_varsz00) =
					((obj_t) BgL_vars1145z00_3694), BUNSPEC);
				((((BgL_ev_binderz00_bglt) COBJECT(((BgL_ev_binderz00_bglt)
									BgL_new1236z00_4110)))->BgL_valsz00) =
					((obj_t) BgL_vals1146z00_3695), BUNSPEC);
				((((BgL_ev_binderz00_bglt) COBJECT(((BgL_ev_binderz00_bglt)
									BgL_new1236z00_4110)))->BgL_bodyz00) =
					((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_body1147z00_3696)),
					BUNSPEC);
				((((BgL_ev_letza2za2_bglt) COBJECT(BgL_new1236z00_4110))->
						BgL_boxesz00) = ((obj_t) BgL_boxes1148z00_3697), BUNSPEC);
				return BgL_new1236z00_4110;
			}
		}

	}



/* &<@anonymous:1856> */
	obj_t BGl_z62zc3z04anonymousza31856ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3698)
	{
		{	/* Eval/evaluate_types.scm 103 */
			return BNIL;
		}

	}



/* &lambda1855 */
	obj_t BGl_z62lambda1855z62zz__evaluate_typesz00(obj_t BgL_envz00_3699,
		obj_t BgL_oz00_3700, obj_t BgL_vz00_3701)
	{
		{	/* Eval/evaluate_types.scm 103 */
			return
				((((BgL_ev_letza2za2_bglt) COBJECT(
							((BgL_ev_letza2za2_bglt) BgL_oz00_3700)))->BgL_boxesz00) =
				((obj_t) BgL_vz00_3701), BUNSPEC);
		}

	}



/* &lambda1854 */
	obj_t BGl_z62lambda1854z62zz__evaluate_typesz00(obj_t BgL_envz00_3702,
		obj_t BgL_oz00_3703)
	{
		{	/* Eval/evaluate_types.scm 103 */
			return
				(((BgL_ev_letza2za2_bglt) COBJECT(
						((BgL_ev_letza2za2_bglt) BgL_oz00_3703)))->BgL_boxesz00);
		}

	}



/* &<@anonymous:1828> */
	obj_t BGl_z62zc3z04anonymousza31828ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3704, obj_t BgL_new1143z00_3705)
	{
		{	/* Eval/evaluate_types.scm 101 */
			{
				BgL_ev_letz00_bglt BgL_auxz00_5034;

				((((BgL_ev_binderz00_bglt) COBJECT(
								((BgL_ev_binderz00_bglt)
									((BgL_ev_letz00_bglt) BgL_new1143z00_3705))))->BgL_varsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_ev_binderz00_bglt)
							COBJECT(((BgL_ev_binderz00_bglt) ((BgL_ev_letz00_bglt)
										BgL_new1143z00_3705))))->BgL_valsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5041;

					{	/* Eval/evaluate_types.scm 101 */
						obj_t BgL_classz00_4117;

						BgL_classz00_4117 = BGl_ev_exprz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 101 */
							obj_t BgL__ortest_1286z00_4118;

							BgL__ortest_1286z00_4118 = BGL_CLASS_NIL(BgL_classz00_4117);
							if (CBOOL(BgL__ortest_1286z00_4118))
								{	/* Eval/evaluate_types.scm 101 */
									BgL_auxz00_5041 =
										((BgL_ev_exprz00_bglt) BgL__ortest_1286z00_4118);
								}
							else
								{	/* Eval/evaluate_types.scm 101 */
									BgL_auxz00_5041 =
										((BgL_ev_exprz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4117));
								}
						}
					}
					((((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt)
										((BgL_ev_letz00_bglt) BgL_new1143z00_3705))))->
							BgL_bodyz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5041), BUNSPEC);
				}
				((((BgL_ev_letz00_bglt) COBJECT(
								((BgL_ev_letz00_bglt) BgL_new1143z00_3705)))->BgL_boxesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_5034 = ((BgL_ev_letz00_bglt) BgL_new1143z00_3705);
				return ((obj_t) BgL_auxz00_5034);
			}
		}

	}



/* &lambda1826 */
	BgL_ev_letz00_bglt BGl_z62lambda1826z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3706)
	{
		{	/* Eval/evaluate_types.scm 101 */
			{	/* Eval/evaluate_types.scm 101 */
				BgL_ev_letz00_bglt BgL_new1142z00_4119;

				BgL_new1142z00_4119 =
					((BgL_ev_letz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_letz00_bgl))));
				{	/* Eval/evaluate_types.scm 101 */
					long BgL_arg1827z00_4120;

					{	/* Eval/evaluate_types.scm 101 */
						long BgL_res2399z00_4121;

						BgL_res2399z00_4121 =
							BGL_CLASS_INDEX(BGl_ev_letz00zz__evaluate_typesz00);
						BgL_arg1827z00_4120 = BgL_res2399z00_4121;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1142z00_4119), BgL_arg1827z00_4120);
				}
				return BgL_new1142z00_4119;
			}
		}

	}



/* &lambda1824 */
	BgL_ev_letz00_bglt BGl_z62lambda1824z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3707, obj_t BgL_vars1138z00_3708, obj_t BgL_vals1139z00_3709,
		obj_t BgL_body1140z00_3710, obj_t BgL_boxes1141z00_3711)
	{
		{	/* Eval/evaluate_types.scm 101 */
			{	/* Eval/evaluate_types.scm 101 */
				BgL_ev_letz00_bglt BgL_new1234z00_4123;

				{	/* Eval/evaluate_types.scm 101 */
					BgL_ev_letz00_bglt BgL_new1233z00_4124;

					BgL_new1233z00_4124 =
						((BgL_ev_letz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ev_letz00_bgl))));
					{	/* Eval/evaluate_types.scm 101 */
						long BgL_arg1825z00_4125;

						{	/* Eval/evaluate_types.scm 101 */
							long BgL_res2398z00_4126;

							BgL_res2398z00_4126 =
								BGL_CLASS_INDEX(BGl_ev_letz00zz__evaluate_typesz00);
							BgL_arg1825z00_4125 = BgL_res2398z00_4126;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1233z00_4124), BgL_arg1825z00_4125);
					}
					BgL_new1234z00_4123 = BgL_new1233z00_4124;
				}
				((((BgL_ev_binderz00_bglt) COBJECT(
								((BgL_ev_binderz00_bglt) BgL_new1234z00_4123)))->BgL_varsz00) =
					((obj_t) BgL_vars1138z00_3708), BUNSPEC);
				((((BgL_ev_binderz00_bglt) COBJECT(((BgL_ev_binderz00_bglt)
									BgL_new1234z00_4123)))->BgL_valsz00) =
					((obj_t) BgL_vals1139z00_3709), BUNSPEC);
				((((BgL_ev_binderz00_bglt) COBJECT(((BgL_ev_binderz00_bglt)
									BgL_new1234z00_4123)))->BgL_bodyz00) =
					((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_body1140z00_3710)),
					BUNSPEC);
				((((BgL_ev_letz00_bglt) COBJECT(BgL_new1234z00_4123))->BgL_boxesz00) =
					((obj_t) BgL_boxes1141z00_3711), BUNSPEC);
				return BgL_new1234z00_4123;
			}
		}

	}



/* &<@anonymous:1835> */
	obj_t BGl_z62zc3z04anonymousza31835ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3712)
	{
		{	/* Eval/evaluate_types.scm 101 */
			return BNIL;
		}

	}



/* &lambda1834 */
	obj_t BGl_z62lambda1834z62zz__evaluate_typesz00(obj_t BgL_envz00_3713,
		obj_t BgL_oz00_3714, obj_t BgL_vz00_3715)
	{
		{	/* Eval/evaluate_types.scm 101 */
			return
				((((BgL_ev_letz00_bglt) COBJECT(
							((BgL_ev_letz00_bglt) BgL_oz00_3714)))->BgL_boxesz00) =
				((obj_t) BgL_vz00_3715), BUNSPEC);
		}

	}



/* &lambda1833 */
	obj_t BGl_z62lambda1833z62zz__evaluate_typesz00(obj_t BgL_envz00_3716,
		obj_t BgL_oz00_3717)
	{
		{	/* Eval/evaluate_types.scm 101 */
			return
				(((BgL_ev_letz00_bglt) COBJECT(
						((BgL_ev_letz00_bglt) BgL_oz00_3717)))->BgL_boxesz00);
		}

	}



/* &<@anonymous:1801> */
	obj_t BGl_z62zc3z04anonymousza31801ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3718, obj_t BgL_new1136z00_3719)
	{
		{	/* Eval/evaluate_types.scm 97 */
			{
				BgL_ev_binderz00_bglt BgL_auxz00_5075;

				((((BgL_ev_binderz00_bglt) COBJECT(
								((BgL_ev_binderz00_bglt) BgL_new1136z00_3719)))->BgL_varsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_ev_binderz00_bglt) COBJECT(((BgL_ev_binderz00_bglt)
									BgL_new1136z00_3719)))->BgL_valsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5080;

					{	/* Eval/evaluate_types.scm 97 */
						obj_t BgL_classz00_4130;

						BgL_classz00_4130 = BGl_ev_exprz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 97 */
							obj_t BgL__ortest_1286z00_4131;

							BgL__ortest_1286z00_4131 = BGL_CLASS_NIL(BgL_classz00_4130);
							if (CBOOL(BgL__ortest_1286z00_4131))
								{	/* Eval/evaluate_types.scm 97 */
									BgL_auxz00_5080 =
										((BgL_ev_exprz00_bglt) BgL__ortest_1286z00_4131);
								}
							else
								{	/* Eval/evaluate_types.scm 97 */
									BgL_auxz00_5080 =
										((BgL_ev_exprz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4130));
								}
						}
					}
					((((BgL_ev_binderz00_bglt) COBJECT(
									((BgL_ev_binderz00_bglt) BgL_new1136z00_3719)))->
							BgL_bodyz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5080), BUNSPEC);
				}
				BgL_auxz00_5075 = ((BgL_ev_binderz00_bglt) BgL_new1136z00_3719);
				return ((obj_t) BgL_auxz00_5075);
			}
		}

	}



/* &lambda1799 */
	BgL_ev_binderz00_bglt BGl_z62lambda1799z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3720)
	{
		{	/* Eval/evaluate_types.scm 97 */
			{	/* Eval/evaluate_types.scm 97 */
				BgL_ev_binderz00_bglt BgL_new1135z00_4132;

				BgL_new1135z00_4132 =
					((BgL_ev_binderz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_binderz00_bgl))));
				{	/* Eval/evaluate_types.scm 97 */
					long BgL_arg1800z00_4133;

					{	/* Eval/evaluate_types.scm 97 */
						long BgL_res2397z00_4134;

						BgL_res2397z00_4134 =
							BGL_CLASS_INDEX(BGl_ev_binderz00zz__evaluate_typesz00);
						BgL_arg1800z00_4133 = BgL_res2397z00_4134;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1135z00_4132), BgL_arg1800z00_4133);
				}
				return BgL_new1135z00_4132;
			}
		}

	}



/* &lambda1797 */
	BgL_ev_binderz00_bglt BGl_z62lambda1797z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3721, obj_t BgL_vars1132z00_3722, obj_t BgL_vals1133z00_3723,
		obj_t BgL_body1134z00_3724)
	{
		{	/* Eval/evaluate_types.scm 97 */
			{	/* Eval/evaluate_types.scm 97 */
				BgL_ev_binderz00_bglt BgL_new1232z00_4136;

				{	/* Eval/evaluate_types.scm 97 */
					BgL_ev_binderz00_bglt BgL_new1231z00_4137;

					BgL_new1231z00_4137 =
						((BgL_ev_binderz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ev_binderz00_bgl))));
					{	/* Eval/evaluate_types.scm 97 */
						long BgL_arg1798z00_4138;

						{	/* Eval/evaluate_types.scm 97 */
							long BgL_res2396z00_4139;

							BgL_res2396z00_4139 =
								BGL_CLASS_INDEX(BGl_ev_binderz00zz__evaluate_typesz00);
							BgL_arg1798z00_4138 = BgL_res2396z00_4139;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1231z00_4137), BgL_arg1798z00_4138);
					}
					BgL_new1232z00_4136 = BgL_new1231z00_4137;
				}
				((((BgL_ev_binderz00_bglt) COBJECT(BgL_new1232z00_4136))->BgL_varsz00) =
					((obj_t) BgL_vars1132z00_3722), BUNSPEC);
				((((BgL_ev_binderz00_bglt) COBJECT(BgL_new1232z00_4136))->BgL_valsz00) =
					((obj_t) BgL_vals1133z00_3723), BUNSPEC);
				((((BgL_ev_binderz00_bglt) COBJECT(BgL_new1232z00_4136))->BgL_bodyz00) =
					((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_body1134z00_3724)),
					BUNSPEC);
				return BgL_new1232z00_4136;
			}
		}

	}



/* &lambda1818 */
	obj_t BGl_z62lambda1818z62zz__evaluate_typesz00(obj_t BgL_envz00_3725,
		obj_t BgL_oz00_3726, obj_t BgL_vz00_3727)
	{
		{	/* Eval/evaluate_types.scm 97 */
			return
				((((BgL_ev_binderz00_bglt) COBJECT(
							((BgL_ev_binderz00_bglt) BgL_oz00_3726)))->BgL_bodyz00) =
				((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_vz00_3727)), BUNSPEC);
		}

	}



/* &lambda1817 */
	BgL_ev_exprz00_bglt BGl_z62lambda1817z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3728, obj_t BgL_oz00_3729)
	{
		{	/* Eval/evaluate_types.scm 97 */
			return
				(((BgL_ev_binderz00_bglt) COBJECT(
						((BgL_ev_binderz00_bglt) BgL_oz00_3729)))->BgL_bodyz00);
		}

	}



/* &lambda1813 */
	obj_t BGl_z62lambda1813z62zz__evaluate_typesz00(obj_t BgL_envz00_3730,
		obj_t BgL_oz00_3731, obj_t BgL_vz00_3732)
	{
		{	/* Eval/evaluate_types.scm 97 */
			return
				((((BgL_ev_binderz00_bglt) COBJECT(
							((BgL_ev_binderz00_bglt) BgL_oz00_3731)))->BgL_valsz00) =
				((obj_t) BgL_vz00_3732), BUNSPEC);
		}

	}



/* &lambda1812 */
	obj_t BGl_z62lambda1812z62zz__evaluate_typesz00(obj_t BgL_envz00_3733,
		obj_t BgL_oz00_3734)
	{
		{	/* Eval/evaluate_types.scm 97 */
			return
				(((BgL_ev_binderz00_bglt) COBJECT(
						((BgL_ev_binderz00_bglt) BgL_oz00_3734)))->BgL_valsz00);
		}

	}



/* &lambda1808 */
	obj_t BGl_z62lambda1808z62zz__evaluate_typesz00(obj_t BgL_envz00_3735,
		obj_t BgL_oz00_3736, obj_t BgL_vz00_3737)
	{
		{	/* Eval/evaluate_types.scm 97 */
			return
				((((BgL_ev_binderz00_bglt) COBJECT(
							((BgL_ev_binderz00_bglt) BgL_oz00_3736)))->BgL_varsz00) =
				((obj_t) BgL_vz00_3737), BUNSPEC);
		}

	}



/* &lambda1807 */
	obj_t BGl_z62lambda1807z62zz__evaluate_typesz00(obj_t BgL_envz00_3738,
		obj_t BgL_oz00_3739)
	{
		{	/* Eval/evaluate_types.scm 97 */
			return
				(((BgL_ev_binderz00_bglt) COBJECT(
						((BgL_ev_binderz00_bglt) BgL_oz00_3739)))->BgL_varsz00);
		}

	}



/* &<@anonymous:1769> */
	obj_t BGl_z62zc3z04anonymousza31769ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3740, obj_t BgL_new1130z00_3741)
	{
		{	/* Eval/evaluate_types.scm 92 */
			{
				BgL_ev_synchroniza7eza7_bglt BgL_auxz00_5116;

				((((BgL_ev_synchroniza7eza7_bglt) COBJECT(
								((BgL_ev_synchroniza7eza7_bglt) BgL_new1130z00_3741)))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5119;

					{	/* Eval/evaluate_types.scm 92 */
						obj_t BgL_classz00_4148;

						BgL_classz00_4148 = BGl_ev_exprz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 92 */
							obj_t BgL__ortest_1286z00_4149;

							BgL__ortest_1286z00_4149 = BGL_CLASS_NIL(BgL_classz00_4148);
							if (CBOOL(BgL__ortest_1286z00_4149))
								{	/* Eval/evaluate_types.scm 92 */
									BgL_auxz00_5119 =
										((BgL_ev_exprz00_bglt) BgL__ortest_1286z00_4149);
								}
							else
								{	/* Eval/evaluate_types.scm 92 */
									BgL_auxz00_5119 =
										((BgL_ev_exprz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4148));
								}
						}
					}
					((((BgL_ev_synchroniza7eza7_bglt) COBJECT(
									((BgL_ev_synchroniza7eza7_bglt) BgL_new1130z00_3741)))->
							BgL_mutexz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5119), BUNSPEC);
				}
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5128;

					{	/* Eval/evaluate_types.scm 92 */
						obj_t BgL_classz00_4150;

						BgL_classz00_4150 = BGl_ev_exprz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 92 */
							obj_t BgL__ortest_1286z00_4151;

							BgL__ortest_1286z00_4151 = BGL_CLASS_NIL(BgL_classz00_4150);
							if (CBOOL(BgL__ortest_1286z00_4151))
								{	/* Eval/evaluate_types.scm 92 */
									BgL_auxz00_5128 =
										((BgL_ev_exprz00_bglt) BgL__ortest_1286z00_4151);
								}
							else
								{	/* Eval/evaluate_types.scm 92 */
									BgL_auxz00_5128 =
										((BgL_ev_exprz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4150));
								}
						}
					}
					((((BgL_ev_synchroniza7eza7_bglt) COBJECT(
									((BgL_ev_synchroniza7eza7_bglt) BgL_new1130z00_3741)))->
							BgL_prelockz00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5128), BUNSPEC);
				}
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5137;

					{	/* Eval/evaluate_types.scm 92 */
						obj_t BgL_classz00_4152;

						BgL_classz00_4152 = BGl_ev_exprz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 92 */
							obj_t BgL__ortest_1286z00_4153;

							BgL__ortest_1286z00_4153 = BGL_CLASS_NIL(BgL_classz00_4152);
							if (CBOOL(BgL__ortest_1286z00_4153))
								{	/* Eval/evaluate_types.scm 92 */
									BgL_auxz00_5137 =
										((BgL_ev_exprz00_bglt) BgL__ortest_1286z00_4153);
								}
							else
								{	/* Eval/evaluate_types.scm 92 */
									BgL_auxz00_5137 =
										((BgL_ev_exprz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4152));
								}
						}
					}
					((((BgL_ev_synchroniza7eza7_bglt) COBJECT(
									((BgL_ev_synchroniza7eza7_bglt) BgL_new1130z00_3741)))->
							BgL_bodyz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5137), BUNSPEC);
				}
				BgL_auxz00_5116 = ((BgL_ev_synchroniza7eza7_bglt) BgL_new1130z00_3741);
				return ((obj_t) BgL_auxz00_5116);
			}
		}

	}



/* &lambda1766 */
	BgL_ev_synchroniza7eza7_bglt BGl_z62lambda1766z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3742)
	{
		{	/* Eval/evaluate_types.scm 92 */
			{	/* Eval/evaluate_types.scm 92 */
				BgL_ev_synchroniza7eza7_bglt BgL_new1128z00_4154;

				BgL_new1128z00_4154 =
					((BgL_ev_synchroniza7eza7_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_synchroniza7eza7_bgl))));
				{	/* Eval/evaluate_types.scm 92 */
					long BgL_arg1768z00_4155;

					{	/* Eval/evaluate_types.scm 92 */
						long BgL_res2395z00_4156;

						BgL_res2395z00_4156 =
							BGL_CLASS_INDEX(BGl_ev_synchroniza7eza7zz__evaluate_typesz00);
						BgL_arg1768z00_4155 = BgL_res2395z00_4156;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1128z00_4154), BgL_arg1768z00_4155);
				}
				return BgL_new1128z00_4154;
			}
		}

	}



/* &lambda1764 */
	BgL_ev_synchroniza7eza7_bglt BGl_z62lambda1764z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3743, obj_t BgL_loc1124z00_3744, obj_t BgL_mutex1125z00_3745,
		obj_t BgL_prelock1126z00_3746, obj_t BgL_body1127z00_3747)
	{
		{	/* Eval/evaluate_types.scm 92 */
			{	/* Eval/evaluate_types.scm 92 */
				BgL_ev_synchroniza7eza7_bglt BgL_new1230z00_4160;

				{	/* Eval/evaluate_types.scm 92 */
					BgL_ev_synchroniza7eza7_bglt BgL_new1229z00_4161;

					BgL_new1229z00_4161 =
						((BgL_ev_synchroniza7eza7_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ev_synchroniza7eza7_bgl))));
					{	/* Eval/evaluate_types.scm 92 */
						long BgL_arg1765z00_4162;

						{	/* Eval/evaluate_types.scm 92 */
							long BgL_res2394z00_4163;

							BgL_res2394z00_4163 =
								BGL_CLASS_INDEX(BGl_ev_synchroniza7eza7zz__evaluate_typesz00);
							BgL_arg1765z00_4162 = BgL_res2394z00_4163;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1229z00_4161), BgL_arg1765z00_4162);
					}
					BgL_new1230z00_4160 = BgL_new1229z00_4161;
				}
				((((BgL_ev_synchroniza7eza7_bglt) COBJECT(BgL_new1230z00_4160))->
						BgL_locz00) = ((obj_t) BgL_loc1124z00_3744), BUNSPEC);
				((((BgL_ev_synchroniza7eza7_bglt) COBJECT(BgL_new1230z00_4160))->
						BgL_mutexz00) =
					((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_mutex1125z00_3745)),
					BUNSPEC);
				((((BgL_ev_synchroniza7eza7_bglt) COBJECT(BgL_new1230z00_4160))->
						BgL_prelockz00) =
					((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt)
							BgL_prelock1126z00_3746)), BUNSPEC);
				((((BgL_ev_synchroniza7eza7_bglt) COBJECT(BgL_new1230z00_4160))->
						BgL_bodyz00) =
					((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_body1127z00_3747)),
					BUNSPEC);
				return BgL_new1230z00_4160;
			}
		}

	}



/* &lambda1790 */
	obj_t BGl_z62lambda1790z62zz__evaluate_typesz00(obj_t BgL_envz00_3748,
		obj_t BgL_oz00_3749, obj_t BgL_vz00_3750)
	{
		{	/* Eval/evaluate_types.scm 92 */
			return
				((((BgL_ev_synchroniza7eza7_bglt) COBJECT(
							((BgL_ev_synchroniza7eza7_bglt) BgL_oz00_3749)))->BgL_bodyz00) =
				((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_vz00_3750)), BUNSPEC);
		}

	}



/* &lambda1789 */
	BgL_ev_exprz00_bglt BGl_z62lambda1789z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3751, obj_t BgL_oz00_3752)
	{
		{	/* Eval/evaluate_types.scm 92 */
			return
				(((BgL_ev_synchroniza7eza7_bglt) COBJECT(
						((BgL_ev_synchroniza7eza7_bglt) BgL_oz00_3752)))->BgL_bodyz00);
		}

	}



/* &lambda1784 */
	obj_t BGl_z62lambda1784z62zz__evaluate_typesz00(obj_t BgL_envz00_3753,
		obj_t BgL_oz00_3754, obj_t BgL_vz00_3755)
	{
		{	/* Eval/evaluate_types.scm 92 */
			return
				((((BgL_ev_synchroniza7eza7_bglt) COBJECT(
							((BgL_ev_synchroniza7eza7_bglt) BgL_oz00_3754)))->
					BgL_prelockz00) =
				((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_vz00_3755)), BUNSPEC);
		}

	}



/* &lambda1783 */
	BgL_ev_exprz00_bglt BGl_z62lambda1783z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3756, obj_t BgL_oz00_3757)
	{
		{	/* Eval/evaluate_types.scm 92 */
			return
				(((BgL_ev_synchroniza7eza7_bglt) COBJECT(
						((BgL_ev_synchroniza7eza7_bglt) BgL_oz00_3757)))->BgL_prelockz00);
		}

	}



/* &lambda1779 */
	obj_t BGl_z62lambda1779z62zz__evaluate_typesz00(obj_t BgL_envz00_3758,
		obj_t BgL_oz00_3759, obj_t BgL_vz00_3760)
	{
		{	/* Eval/evaluate_types.scm 92 */
			return
				((((BgL_ev_synchroniza7eza7_bglt) COBJECT(
							((BgL_ev_synchroniza7eza7_bglt) BgL_oz00_3759)))->BgL_mutexz00) =
				((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_vz00_3760)), BUNSPEC);
		}

	}



/* &lambda1778 */
	BgL_ev_exprz00_bglt BGl_z62lambda1778z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3761, obj_t BgL_oz00_3762)
	{
		{	/* Eval/evaluate_types.scm 92 */
			return
				(((BgL_ev_synchroniza7eza7_bglt) COBJECT(
						((BgL_ev_synchroniza7eza7_bglt) BgL_oz00_3762)))->BgL_mutexz00);
		}

	}



/* &lambda1774 */
	obj_t BGl_z62lambda1774z62zz__evaluate_typesz00(obj_t BgL_envz00_3763,
		obj_t BgL_oz00_3764, obj_t BgL_vz00_3765)
	{
		{	/* Eval/evaluate_types.scm 92 */
			return
				((((BgL_ev_synchroniza7eza7_bglt) COBJECT(
							((BgL_ev_synchroniza7eza7_bglt) BgL_oz00_3764)))->BgL_locz00) =
				((obj_t) BgL_vz00_3765), BUNSPEC);
		}

	}



/* &lambda1773 */
	obj_t BGl_z62lambda1773z62zz__evaluate_typesz00(obj_t BgL_envz00_3766,
		obj_t BgL_oz00_3767)
	{
		{	/* Eval/evaluate_types.scm 92 */
			return
				(((BgL_ev_synchroniza7eza7_bglt) COBJECT(
						((BgL_ev_synchroniza7eza7_bglt) BgL_oz00_3767)))->BgL_locz00);
		}

	}



/* &<@anonymous:1746> */
	obj_t BGl_z62zc3z04anonymousza31746ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3768, obj_t BgL_new1122z00_3769)
	{
		{	/* Eval/evaluate_types.scm 89 */
			{
				BgL_ev_withzd2handlerzd2_bglt BgL_auxz00_5182;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5183;

					{	/* Eval/evaluate_types.scm 89 */
						obj_t BgL_classz00_4176;

						BgL_classz00_4176 = BGl_ev_exprz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 89 */
							obj_t BgL__ortest_1286z00_4177;

							BgL__ortest_1286z00_4177 = BGL_CLASS_NIL(BgL_classz00_4176);
							if (CBOOL(BgL__ortest_1286z00_4177))
								{	/* Eval/evaluate_types.scm 89 */
									BgL_auxz00_5183 =
										((BgL_ev_exprz00_bglt) BgL__ortest_1286z00_4177);
								}
							else
								{	/* Eval/evaluate_types.scm 89 */
									BgL_auxz00_5183 =
										((BgL_ev_exprz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4176));
								}
						}
					}
					((((BgL_ev_withzd2handlerzd2_bglt) COBJECT(
									((BgL_ev_withzd2handlerzd2_bglt) BgL_new1122z00_3769)))->
							BgL_handlerz00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5183), BUNSPEC);
				}
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5192;

					{	/* Eval/evaluate_types.scm 89 */
						obj_t BgL_classz00_4178;

						BgL_classz00_4178 = BGl_ev_exprz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 89 */
							obj_t BgL__ortest_1286z00_4179;

							BgL__ortest_1286z00_4179 = BGL_CLASS_NIL(BgL_classz00_4178);
							if (CBOOL(BgL__ortest_1286z00_4179))
								{	/* Eval/evaluate_types.scm 89 */
									BgL_auxz00_5192 =
										((BgL_ev_exprz00_bglt) BgL__ortest_1286z00_4179);
								}
							else
								{	/* Eval/evaluate_types.scm 89 */
									BgL_auxz00_5192 =
										((BgL_ev_exprz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4178));
								}
						}
					}
					((((BgL_ev_withzd2handlerzd2_bglt) COBJECT(
									((BgL_ev_withzd2handlerzd2_bglt) BgL_new1122z00_3769)))->
							BgL_bodyz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5192), BUNSPEC);
				}
				BgL_auxz00_5182 = ((BgL_ev_withzd2handlerzd2_bglt) BgL_new1122z00_3769);
				return ((obj_t) BgL_auxz00_5182);
			}
		}

	}



/* &lambda1744 */
	BgL_ev_withzd2handlerzd2_bglt BGl_z62lambda1744z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3770)
	{
		{	/* Eval/evaluate_types.scm 89 */
			{	/* Eval/evaluate_types.scm 89 */
				BgL_ev_withzd2handlerzd2_bglt BgL_new1121z00_4180;

				BgL_new1121z00_4180 =
					((BgL_ev_withzd2handlerzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_withzd2handlerzd2_bgl))));
				{	/* Eval/evaluate_types.scm 89 */
					long BgL_arg1745z00_4181;

					{	/* Eval/evaluate_types.scm 89 */
						long BgL_res2393z00_4182;

						BgL_res2393z00_4182 =
							BGL_CLASS_INDEX(BGl_ev_withzd2handlerzd2zz__evaluate_typesz00);
						BgL_arg1745z00_4181 = BgL_res2393z00_4182;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1121z00_4180), BgL_arg1745z00_4181);
				}
				return BgL_new1121z00_4180;
			}
		}

	}



/* &lambda1742 */
	BgL_ev_withzd2handlerzd2_bglt BGl_z62lambda1742z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3771, obj_t BgL_handler1119z00_3772, obj_t BgL_body1120z00_3773)
	{
		{	/* Eval/evaluate_types.scm 89 */
			{	/* Eval/evaluate_types.scm 89 */
				BgL_ev_withzd2handlerzd2_bglt BgL_new1228z00_4185;

				{	/* Eval/evaluate_types.scm 89 */
					BgL_ev_withzd2handlerzd2_bglt BgL_new1227z00_4186;

					BgL_new1227z00_4186 =
						((BgL_ev_withzd2handlerzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ev_withzd2handlerzd2_bgl))));
					{	/* Eval/evaluate_types.scm 89 */
						long BgL_arg1743z00_4187;

						{	/* Eval/evaluate_types.scm 89 */
							long BgL_res2392z00_4188;

							BgL_res2392z00_4188 =
								BGL_CLASS_INDEX(BGl_ev_withzd2handlerzd2zz__evaluate_typesz00);
							BgL_arg1743z00_4187 = BgL_res2392z00_4188;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1227z00_4186), BgL_arg1743z00_4187);
					}
					BgL_new1228z00_4185 = BgL_new1227z00_4186;
				}
				((((BgL_ev_withzd2handlerzd2_bglt) COBJECT(BgL_new1228z00_4185))->
						BgL_handlerz00) =
					((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt)
							BgL_handler1119z00_3772)), BUNSPEC);
				((((BgL_ev_withzd2handlerzd2_bglt) COBJECT(BgL_new1228z00_4185))->
						BgL_bodyz00) =
					((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_body1120z00_3773)),
					BUNSPEC);
				return BgL_new1228z00_4185;
			}
		}

	}



/* &lambda1758 */
	obj_t BGl_z62lambda1758z62zz__evaluate_typesz00(obj_t BgL_envz00_3774,
		obj_t BgL_oz00_3775, obj_t BgL_vz00_3776)
	{
		{	/* Eval/evaluate_types.scm 89 */
			return
				((((BgL_ev_withzd2handlerzd2_bglt) COBJECT(
							((BgL_ev_withzd2handlerzd2_bglt) BgL_oz00_3775)))->BgL_bodyz00) =
				((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_vz00_3776)), BUNSPEC);
		}

	}



/* &lambda1757 */
	BgL_ev_exprz00_bglt BGl_z62lambda1757z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3777, obj_t BgL_oz00_3778)
	{
		{	/* Eval/evaluate_types.scm 89 */
			return
				(((BgL_ev_withzd2handlerzd2_bglt) COBJECT(
						((BgL_ev_withzd2handlerzd2_bglt) BgL_oz00_3778)))->BgL_bodyz00);
		}

	}



/* &lambda1752 */
	obj_t BGl_z62lambda1752z62zz__evaluate_typesz00(obj_t BgL_envz00_3779,
		obj_t BgL_oz00_3780, obj_t BgL_vz00_3781)
	{
		{	/* Eval/evaluate_types.scm 89 */
			return
				((((BgL_ev_withzd2handlerzd2_bglt) COBJECT(
							((BgL_ev_withzd2handlerzd2_bglt) BgL_oz00_3780)))->
					BgL_handlerz00) =
				((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_vz00_3781)), BUNSPEC);
		}

	}



/* &lambda1751 */
	BgL_ev_exprz00_bglt BGl_z62lambda1751z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3782, obj_t BgL_oz00_3783)
	{
		{	/* Eval/evaluate_types.scm 89 */
			return
				(((BgL_ev_withzd2handlerzd2_bglt) COBJECT(
						((BgL_ev_withzd2handlerzd2_bglt) BgL_oz00_3783)))->BgL_handlerz00);
		}

	}



/* &<@anonymous:1726> */
	obj_t BGl_z62zc3z04anonymousza31726ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3784, obj_t BgL_new1117z00_3785)
	{
		{	/* Eval/evaluate_types.scm 86 */
			{
				BgL_ev_unwindzd2protectzd2_bglt BgL_auxz00_5225;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5226;

					{	/* Eval/evaluate_types.scm 86 */
						obj_t BgL_classz00_4196;

						BgL_classz00_4196 = BGl_ev_exprz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 86 */
							obj_t BgL__ortest_1286z00_4197;

							BgL__ortest_1286z00_4197 = BGL_CLASS_NIL(BgL_classz00_4196);
							if (CBOOL(BgL__ortest_1286z00_4197))
								{	/* Eval/evaluate_types.scm 86 */
									BgL_auxz00_5226 =
										((BgL_ev_exprz00_bglt) BgL__ortest_1286z00_4197);
								}
							else
								{	/* Eval/evaluate_types.scm 86 */
									BgL_auxz00_5226 =
										((BgL_ev_exprz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4196));
								}
						}
					}
					((((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(
									((BgL_ev_unwindzd2protectzd2_bglt) BgL_new1117z00_3785)))->
							BgL_ez00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5226), BUNSPEC);
				}
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5235;

					{	/* Eval/evaluate_types.scm 86 */
						obj_t BgL_classz00_4198;

						BgL_classz00_4198 = BGl_ev_exprz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 86 */
							obj_t BgL__ortest_1286z00_4199;

							BgL__ortest_1286z00_4199 = BGL_CLASS_NIL(BgL_classz00_4198);
							if (CBOOL(BgL__ortest_1286z00_4199))
								{	/* Eval/evaluate_types.scm 86 */
									BgL_auxz00_5235 =
										((BgL_ev_exprz00_bglt) BgL__ortest_1286z00_4199);
								}
							else
								{	/* Eval/evaluate_types.scm 86 */
									BgL_auxz00_5235 =
										((BgL_ev_exprz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4198));
								}
						}
					}
					((((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(
									((BgL_ev_unwindzd2protectzd2_bglt) BgL_new1117z00_3785)))->
							BgL_bodyz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5235), BUNSPEC);
				}
				BgL_auxz00_5225 =
					((BgL_ev_unwindzd2protectzd2_bglt) BgL_new1117z00_3785);
				return ((obj_t) BgL_auxz00_5225);
			}
		}

	}



/* &lambda1724 */
	BgL_ev_unwindzd2protectzd2_bglt
		BGl_z62lambda1724z62zz__evaluate_typesz00(obj_t BgL_envz00_3786)
	{
		{	/* Eval/evaluate_types.scm 86 */
			{	/* Eval/evaluate_types.scm 86 */
				BgL_ev_unwindzd2protectzd2_bglt BgL_new1116z00_4200;

				BgL_new1116z00_4200 =
					((BgL_ev_unwindzd2protectzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_unwindzd2protectzd2_bgl))));
				{	/* Eval/evaluate_types.scm 86 */
					long BgL_arg1725z00_4201;

					{	/* Eval/evaluate_types.scm 86 */
						long BgL_res2391z00_4202;

						BgL_res2391z00_4202 =
							BGL_CLASS_INDEX(BGl_ev_unwindzd2protectzd2zz__evaluate_typesz00);
						BgL_arg1725z00_4201 = BgL_res2391z00_4202;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1116z00_4200), BgL_arg1725z00_4201);
				}
				return BgL_new1116z00_4200;
			}
		}

	}



/* &lambda1722 */
	BgL_ev_unwindzd2protectzd2_bglt
		BGl_z62lambda1722z62zz__evaluate_typesz00(obj_t BgL_envz00_3787,
		obj_t BgL_e1114z00_3788, obj_t BgL_body1115z00_3789)
	{
		{	/* Eval/evaluate_types.scm 86 */
			{	/* Eval/evaluate_types.scm 86 */
				BgL_ev_unwindzd2protectzd2_bglt BgL_new1226z00_4205;

				{	/* Eval/evaluate_types.scm 86 */
					BgL_ev_unwindzd2protectzd2_bglt BgL_new1225z00_4206;

					BgL_new1225z00_4206 =
						((BgL_ev_unwindzd2protectzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ev_unwindzd2protectzd2_bgl))));
					{	/* Eval/evaluate_types.scm 86 */
						long BgL_arg1723z00_4207;

						{	/* Eval/evaluate_types.scm 86 */
							long BgL_res2390z00_4208;

							BgL_res2390z00_4208 =
								BGL_CLASS_INDEX
								(BGl_ev_unwindzd2protectzd2zz__evaluate_typesz00);
							BgL_arg1723z00_4207 = BgL_res2390z00_4208;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1225z00_4206), BgL_arg1723z00_4207);
					}
					BgL_new1226z00_4205 = BgL_new1225z00_4206;
				}
				((((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(BgL_new1226z00_4205))->
						BgL_ez00) =
					((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_e1114z00_3788)),
					BUNSPEC);
				((((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(BgL_new1226z00_4205))->
						BgL_bodyz00) =
					((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_body1115z00_3789)),
					BUNSPEC);
				return BgL_new1226z00_4205;
			}
		}

	}



/* &lambda1736 */
	obj_t BGl_z62lambda1736z62zz__evaluate_typesz00(obj_t BgL_envz00_3790,
		obj_t BgL_oz00_3791, obj_t BgL_vz00_3792)
	{
		{	/* Eval/evaluate_types.scm 86 */
			return
				((((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(
							((BgL_ev_unwindzd2protectzd2_bglt) BgL_oz00_3791)))->
					BgL_bodyz00) =
				((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_vz00_3792)), BUNSPEC);
		}

	}



/* &lambda1735 */
	BgL_ev_exprz00_bglt BGl_z62lambda1735z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3793, obj_t BgL_oz00_3794)
	{
		{	/* Eval/evaluate_types.scm 86 */
			return
				(((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(
						((BgL_ev_unwindzd2protectzd2_bglt) BgL_oz00_3794)))->BgL_bodyz00);
		}

	}



/* &lambda1731 */
	obj_t BGl_z62lambda1731z62zz__evaluate_typesz00(obj_t BgL_envz00_3795,
		obj_t BgL_oz00_3796, obj_t BgL_vz00_3797)
	{
		{	/* Eval/evaluate_types.scm 86 */
			return
				((((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(
							((BgL_ev_unwindzd2protectzd2_bglt) BgL_oz00_3796)))->BgL_ez00) =
				((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_vz00_3797)), BUNSPEC);
		}

	}



/* &lambda1730 */
	BgL_ev_exprz00_bglt BGl_z62lambda1730z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3798, obj_t BgL_oz00_3799)
	{
		{	/* Eval/evaluate_types.scm 86 */
			return
				(((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(
						((BgL_ev_unwindzd2protectzd2_bglt) BgL_oz00_3799)))->BgL_ez00);
		}

	}



/* &<@anonymous:1703> */
	obj_t BGl_z62zc3z04anonymousza31703ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3800, obj_t BgL_new1112z00_3801)
	{
		{	/* Eval/evaluate_types.scm 83 */
			{
				BgL_ev_bindzd2exitzd2_bglt BgL_auxz00_5268;

				{
					BgL_ev_varz00_bglt BgL_auxz00_5269;

					{	/* Eval/evaluate_types.scm 83 */
						obj_t BgL_classz00_4216;

						BgL_classz00_4216 = BGl_ev_varz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 83 */
							obj_t BgL__ortest_1286z00_4217;

							BgL__ortest_1286z00_4217 = BGL_CLASS_NIL(BgL_classz00_4216);
							if (CBOOL(BgL__ortest_1286z00_4217))
								{	/* Eval/evaluate_types.scm 83 */
									BgL_auxz00_5269 =
										((BgL_ev_varz00_bglt) BgL__ortest_1286z00_4217);
								}
							else
								{	/* Eval/evaluate_types.scm 83 */
									BgL_auxz00_5269 =
										((BgL_ev_varz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4216));
								}
						}
					}
					((((BgL_ev_bindzd2exitzd2_bglt) COBJECT(
									((BgL_ev_bindzd2exitzd2_bglt) BgL_new1112z00_3801)))->
							BgL_varz00) = ((BgL_ev_varz00_bglt) BgL_auxz00_5269), BUNSPEC);
				}
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5278;

					{	/* Eval/evaluate_types.scm 83 */
						obj_t BgL_classz00_4218;

						BgL_classz00_4218 = BGl_ev_exprz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 83 */
							obj_t BgL__ortest_1286z00_4219;

							BgL__ortest_1286z00_4219 = BGL_CLASS_NIL(BgL_classz00_4218);
							if (CBOOL(BgL__ortest_1286z00_4219))
								{	/* Eval/evaluate_types.scm 83 */
									BgL_auxz00_5278 =
										((BgL_ev_exprz00_bglt) BgL__ortest_1286z00_4219);
								}
							else
								{	/* Eval/evaluate_types.scm 83 */
									BgL_auxz00_5278 =
										((BgL_ev_exprz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4218));
								}
						}
					}
					((((BgL_ev_bindzd2exitzd2_bglt) COBJECT(
									((BgL_ev_bindzd2exitzd2_bglt) BgL_new1112z00_3801)))->
							BgL_bodyz00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5278), BUNSPEC);
				}
				BgL_auxz00_5268 = ((BgL_ev_bindzd2exitzd2_bglt) BgL_new1112z00_3801);
				return ((obj_t) BgL_auxz00_5268);
			}
		}

	}



/* &lambda1701 */
	BgL_ev_bindzd2exitzd2_bglt BGl_z62lambda1701z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3802)
	{
		{	/* Eval/evaluate_types.scm 83 */
			{	/* Eval/evaluate_types.scm 83 */
				BgL_ev_bindzd2exitzd2_bglt BgL_new1111z00_4220;

				BgL_new1111z00_4220 =
					((BgL_ev_bindzd2exitzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_bindzd2exitzd2_bgl))));
				{	/* Eval/evaluate_types.scm 83 */
					long BgL_arg1702z00_4221;

					{	/* Eval/evaluate_types.scm 83 */
						long BgL_res2389z00_4222;

						BgL_res2389z00_4222 =
							BGL_CLASS_INDEX(BGl_ev_bindzd2exitzd2zz__evaluate_typesz00);
						BgL_arg1702z00_4221 = BgL_res2389z00_4222;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1111z00_4220), BgL_arg1702z00_4221);
				}
				return BgL_new1111z00_4220;
			}
		}

	}



/* &lambda1699 */
	BgL_ev_bindzd2exitzd2_bglt BGl_z62lambda1699z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3803, obj_t BgL_var1109z00_3804, obj_t BgL_body1110z00_3805)
	{
		{	/* Eval/evaluate_types.scm 83 */
			{	/* Eval/evaluate_types.scm 83 */
				BgL_ev_bindzd2exitzd2_bglt BgL_new1224z00_4225;

				{	/* Eval/evaluate_types.scm 83 */
					BgL_ev_bindzd2exitzd2_bglt BgL_new1223z00_4226;

					BgL_new1223z00_4226 =
						((BgL_ev_bindzd2exitzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ev_bindzd2exitzd2_bgl))));
					{	/* Eval/evaluate_types.scm 83 */
						long BgL_arg1700z00_4227;

						{	/* Eval/evaluate_types.scm 83 */
							long BgL_res2388z00_4228;

							BgL_res2388z00_4228 =
								BGL_CLASS_INDEX(BGl_ev_bindzd2exitzd2zz__evaluate_typesz00);
							BgL_arg1700z00_4227 = BgL_res2388z00_4228;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1223z00_4226), BgL_arg1700z00_4227);
					}
					BgL_new1224z00_4225 = BgL_new1223z00_4226;
				}
				((((BgL_ev_bindzd2exitzd2_bglt) COBJECT(BgL_new1224z00_4225))->
						BgL_varz00) =
					((BgL_ev_varz00_bglt) ((BgL_ev_varz00_bglt) BgL_var1109z00_3804)),
					BUNSPEC);
				((((BgL_ev_bindzd2exitzd2_bglt) COBJECT(BgL_new1224z00_4225))->
						BgL_bodyz00) =
					((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_body1110z00_3805)),
					BUNSPEC);
				return BgL_new1224z00_4225;
			}
		}

	}



/* &lambda1715 */
	obj_t BGl_z62lambda1715z62zz__evaluate_typesz00(obj_t BgL_envz00_3806,
		obj_t BgL_oz00_3807, obj_t BgL_vz00_3808)
	{
		{	/* Eval/evaluate_types.scm 83 */
			return
				((((BgL_ev_bindzd2exitzd2_bglt) COBJECT(
							((BgL_ev_bindzd2exitzd2_bglt) BgL_oz00_3807)))->BgL_bodyz00) =
				((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_vz00_3808)), BUNSPEC);
		}

	}



/* &lambda1714 */
	BgL_ev_exprz00_bglt BGl_z62lambda1714z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3809, obj_t BgL_oz00_3810)
	{
		{	/* Eval/evaluate_types.scm 83 */
			return
				(((BgL_ev_bindzd2exitzd2_bglt) COBJECT(
						((BgL_ev_bindzd2exitzd2_bglt) BgL_oz00_3810)))->BgL_bodyz00);
		}

	}



/* &lambda1710 */
	obj_t BGl_z62lambda1710z62zz__evaluate_typesz00(obj_t BgL_envz00_3811,
		obj_t BgL_oz00_3812, obj_t BgL_vz00_3813)
	{
		{	/* Eval/evaluate_types.scm 83 */
			return
				((((BgL_ev_bindzd2exitzd2_bglt) COBJECT(
							((BgL_ev_bindzd2exitzd2_bglt) BgL_oz00_3812)))->BgL_varz00) =
				((BgL_ev_varz00_bglt) ((BgL_ev_varz00_bglt) BgL_vz00_3813)), BUNSPEC);
		}

	}



/* &lambda1709 */
	BgL_ev_varz00_bglt BGl_z62lambda1709z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3814, obj_t BgL_oz00_3815)
	{
		{	/* Eval/evaluate_types.scm 83 */
			return
				(((BgL_ev_bindzd2exitzd2_bglt) COBJECT(
						((BgL_ev_bindzd2exitzd2_bglt) BgL_oz00_3815)))->BgL_varz00);
		}

	}



/* &<@anonymous:1692> */
	obj_t BGl_z62zc3z04anonymousza31692ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3816, obj_t BgL_new1107z00_3817)
	{
		{	/* Eval/evaluate_types.scm 82 */
			{
				BgL_ev_defglobalz00_bglt BgL_auxz00_5311;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5312;

					{	/* Eval/evaluate_types.scm 82 */
						obj_t BgL_classz00_4236;

						BgL_classz00_4236 = BGl_ev_exprz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 82 */
							obj_t BgL__ortest_1286z00_4237;

							BgL__ortest_1286z00_4237 = BGL_CLASS_NIL(BgL_classz00_4236);
							if (CBOOL(BgL__ortest_1286z00_4237))
								{	/* Eval/evaluate_types.scm 82 */
									BgL_auxz00_5312 =
										((BgL_ev_exprz00_bglt) BgL__ortest_1286z00_4237);
								}
							else
								{	/* Eval/evaluate_types.scm 82 */
									BgL_auxz00_5312 =
										((BgL_ev_exprz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4236));
								}
						}
					}
					((((BgL_ev_hookz00_bglt) COBJECT(
									((BgL_ev_hookz00_bglt)
										((BgL_ev_defglobalz00_bglt) BgL_new1107z00_3817))))->
							BgL_ez00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5312), BUNSPEC);
				}
				((((BgL_ev_setglobalz00_bglt) COBJECT(
								((BgL_ev_setglobalz00_bglt)
									((BgL_ev_defglobalz00_bglt) BgL_new1107z00_3817))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_ev_setglobalz00_bglt)
							COBJECT(((BgL_ev_setglobalz00_bglt) ((BgL_ev_defglobalz00_bglt)
										BgL_new1107z00_3817))))->BgL_namez00) =
					((obj_t) BGl_symbol2791z00zz__evaluate_typesz00), BUNSPEC);
				((((BgL_ev_setglobalz00_bglt)
							COBJECT(((BgL_ev_setglobalz00_bglt) ((BgL_ev_defglobalz00_bglt)
										BgL_new1107z00_3817))))->BgL_modz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_5311 = ((BgL_ev_defglobalz00_bglt) BgL_new1107z00_3817);
				return ((obj_t) BgL_auxz00_5311);
			}
		}

	}



/* &lambda1689 */
	BgL_ev_defglobalz00_bglt BGl_z62lambda1689z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3818)
	{
		{	/* Eval/evaluate_types.scm 82 */
			{	/* Eval/evaluate_types.scm 82 */
				BgL_ev_defglobalz00_bglt BgL_new1106z00_4238;

				BgL_new1106z00_4238 =
					((BgL_ev_defglobalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_defglobalz00_bgl))));
				{	/* Eval/evaluate_types.scm 82 */
					long BgL_arg1691z00_4239;

					{	/* Eval/evaluate_types.scm 82 */
						long BgL_res2387z00_4240;

						BgL_res2387z00_4240 =
							BGL_CLASS_INDEX(BGl_ev_defglobalz00zz__evaluate_typesz00);
						BgL_arg1691z00_4239 = BgL_res2387z00_4240;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1106z00_4238), BgL_arg1691z00_4239);
				}
				return BgL_new1106z00_4238;
			}
		}

	}



/* &lambda1687 */
	BgL_ev_defglobalz00_bglt BGl_z62lambda1687z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3819, obj_t BgL_e1102z00_3820, obj_t BgL_loc1103z00_3821,
		obj_t BgL_name1104z00_3822, obj_t BgL_mod1105z00_3823)
	{
		{	/* Eval/evaluate_types.scm 82 */
			{	/* Eval/evaluate_types.scm 82 */
				BgL_ev_defglobalz00_bglt BgL_new1222z00_4243;

				{	/* Eval/evaluate_types.scm 82 */
					BgL_ev_defglobalz00_bglt BgL_new1221z00_4244;

					BgL_new1221z00_4244 =
						((BgL_ev_defglobalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ev_defglobalz00_bgl))));
					{	/* Eval/evaluate_types.scm 82 */
						long BgL_arg1688z00_4245;

						{	/* Eval/evaluate_types.scm 82 */
							long BgL_res2386z00_4246;

							BgL_res2386z00_4246 =
								BGL_CLASS_INDEX(BGl_ev_defglobalz00zz__evaluate_typesz00);
							BgL_arg1688z00_4245 = BgL_res2386z00_4246;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1221z00_4244), BgL_arg1688z00_4245);
					}
					BgL_new1222z00_4243 = BgL_new1221z00_4244;
				}
				((((BgL_ev_hookz00_bglt) COBJECT(
								((BgL_ev_hookz00_bglt) BgL_new1222z00_4243)))->BgL_ez00) =
					((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_e1102z00_3820)),
					BUNSPEC);
				((((BgL_ev_setglobalz00_bglt) COBJECT(((BgL_ev_setglobalz00_bglt)
									BgL_new1222z00_4243)))->BgL_locz00) =
					((obj_t) BgL_loc1103z00_3821), BUNSPEC);
				((((BgL_ev_setglobalz00_bglt) COBJECT(((BgL_ev_setglobalz00_bglt)
									BgL_new1222z00_4243)))->BgL_namez00) =
					((obj_t) ((obj_t) BgL_name1104z00_3822)), BUNSPEC);
				((((BgL_ev_setglobalz00_bglt) COBJECT(((BgL_ev_setglobalz00_bglt)
									BgL_new1222z00_4243)))->BgL_modz00) =
					((obj_t) BgL_mod1105z00_3823), BUNSPEC);
				return BgL_new1222z00_4243;
			}
		}

	}



/* &<@anonymous:1657> */
	obj_t BGl_z62zc3z04anonymousza31657ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3824, obj_t BgL_new1100z00_3825)
	{
		{	/* Eval/evaluate_types.scm 78 */
			{
				BgL_ev_setglobalz00_bglt BgL_auxz00_5351;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5352;

					{	/* Eval/evaluate_types.scm 78 */
						obj_t BgL_classz00_4248;

						BgL_classz00_4248 = BGl_ev_exprz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 78 */
							obj_t BgL__ortest_1286z00_4249;

							BgL__ortest_1286z00_4249 = BGL_CLASS_NIL(BgL_classz00_4248);
							if (CBOOL(BgL__ortest_1286z00_4249))
								{	/* Eval/evaluate_types.scm 78 */
									BgL_auxz00_5352 =
										((BgL_ev_exprz00_bglt) BgL__ortest_1286z00_4249);
								}
							else
								{	/* Eval/evaluate_types.scm 78 */
									BgL_auxz00_5352 =
										((BgL_ev_exprz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4248));
								}
						}
					}
					((((BgL_ev_hookz00_bglt) COBJECT(
									((BgL_ev_hookz00_bglt)
										((BgL_ev_setglobalz00_bglt) BgL_new1100z00_3825))))->
							BgL_ez00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5352), BUNSPEC);
				}
				((((BgL_ev_setglobalz00_bglt) COBJECT(
								((BgL_ev_setglobalz00_bglt) BgL_new1100z00_3825)))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_ev_setglobalz00_bglt) COBJECT(((BgL_ev_setglobalz00_bglt)
									BgL_new1100z00_3825)))->BgL_namez00) =
					((obj_t) BGl_symbol2791z00zz__evaluate_typesz00), BUNSPEC);
				((((BgL_ev_setglobalz00_bglt) COBJECT(((BgL_ev_setglobalz00_bglt)
									BgL_new1100z00_3825)))->BgL_modz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_5351 = ((BgL_ev_setglobalz00_bglt) BgL_new1100z00_3825);
				return ((obj_t) BgL_auxz00_5351);
			}
		}

	}



/* &lambda1655 */
	BgL_ev_setglobalz00_bglt BGl_z62lambda1655z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3826)
	{
		{	/* Eval/evaluate_types.scm 78 */
			{	/* Eval/evaluate_types.scm 78 */
				BgL_ev_setglobalz00_bglt BgL_new1099z00_4250;

				BgL_new1099z00_4250 =
					((BgL_ev_setglobalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_setglobalz00_bgl))));
				{	/* Eval/evaluate_types.scm 78 */
					long BgL_arg1656z00_4251;

					{	/* Eval/evaluate_types.scm 78 */
						long BgL_res2385z00_4252;

						BgL_res2385z00_4252 =
							BGL_CLASS_INDEX(BGl_ev_setglobalz00zz__evaluate_typesz00);
						BgL_arg1656z00_4251 = BgL_res2385z00_4252;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1099z00_4250), BgL_arg1656z00_4251);
				}
				return BgL_new1099z00_4250;
			}
		}

	}



/* &lambda1653 */
	BgL_ev_setglobalz00_bglt BGl_z62lambda1653z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3827, obj_t BgL_e1095z00_3828, obj_t BgL_loc1096z00_3829,
		obj_t BgL_name1097z00_3830, obj_t BgL_mod1098z00_3831)
	{
		{	/* Eval/evaluate_types.scm 78 */
			{	/* Eval/evaluate_types.scm 78 */
				BgL_ev_setglobalz00_bglt BgL_new1220z00_4255;

				{	/* Eval/evaluate_types.scm 78 */
					BgL_ev_setglobalz00_bglt BgL_new1219z00_4256;

					BgL_new1219z00_4256 =
						((BgL_ev_setglobalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ev_setglobalz00_bgl))));
					{	/* Eval/evaluate_types.scm 78 */
						long BgL_arg1654z00_4257;

						{	/* Eval/evaluate_types.scm 78 */
							long BgL_res2384z00_4258;

							BgL_res2384z00_4258 =
								BGL_CLASS_INDEX(BGl_ev_setglobalz00zz__evaluate_typesz00);
							BgL_arg1654z00_4257 = BgL_res2384z00_4258;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1219z00_4256), BgL_arg1654z00_4257);
					}
					BgL_new1220z00_4255 = BgL_new1219z00_4256;
				}
				((((BgL_ev_hookz00_bglt) COBJECT(
								((BgL_ev_hookz00_bglt) BgL_new1220z00_4255)))->BgL_ez00) =
					((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_e1095z00_3828)),
					BUNSPEC);
				((((BgL_ev_setglobalz00_bglt) COBJECT(BgL_new1220z00_4255))->
						BgL_locz00) = ((obj_t) BgL_loc1096z00_3829), BUNSPEC);
				((((BgL_ev_setglobalz00_bglt) COBJECT(BgL_new1220z00_4255))->
						BgL_namez00) = ((obj_t) ((obj_t) BgL_name1097z00_3830)), BUNSPEC);
				((((BgL_ev_setglobalz00_bglt) COBJECT(BgL_new1220z00_4255))->
						BgL_modz00) = ((obj_t) BgL_mod1098z00_3831), BUNSPEC);
				return BgL_new1220z00_4255;
			}
		}

	}



/* &lambda1674 */
	obj_t BGl_z62lambda1674z62zz__evaluate_typesz00(obj_t BgL_envz00_3832,
		obj_t BgL_oz00_3833, obj_t BgL_vz00_3834)
	{
		{	/* Eval/evaluate_types.scm 78 */
			return
				((((BgL_ev_setglobalz00_bglt) COBJECT(
							((BgL_ev_setglobalz00_bglt) BgL_oz00_3833)))->BgL_modz00) =
				((obj_t) BgL_vz00_3834), BUNSPEC);
		}

	}



/* &lambda1673 */
	obj_t BGl_z62lambda1673z62zz__evaluate_typesz00(obj_t BgL_envz00_3835,
		obj_t BgL_oz00_3836)
	{
		{	/* Eval/evaluate_types.scm 78 */
			return
				(((BgL_ev_setglobalz00_bglt) COBJECT(
						((BgL_ev_setglobalz00_bglt) BgL_oz00_3836)))->BgL_modz00);
		}

	}



/* &lambda1667 */
	obj_t BGl_z62lambda1667z62zz__evaluate_typesz00(obj_t BgL_envz00_3837,
		obj_t BgL_oz00_3838, obj_t BgL_vz00_3839)
	{
		{	/* Eval/evaluate_types.scm 78 */
			return
				((((BgL_ev_setglobalz00_bglt) COBJECT(
							((BgL_ev_setglobalz00_bglt) BgL_oz00_3838)))->BgL_namez00) =
				((obj_t) ((obj_t) BgL_vz00_3839)), BUNSPEC);
		}

	}



/* &lambda1666 */
	obj_t BGl_z62lambda1666z62zz__evaluate_typesz00(obj_t BgL_envz00_3840,
		obj_t BgL_oz00_3841)
	{
		{	/* Eval/evaluate_types.scm 78 */
			return
				(((BgL_ev_setglobalz00_bglt) COBJECT(
						((BgL_ev_setglobalz00_bglt) BgL_oz00_3841)))->BgL_namez00);
		}

	}



/* &lambda1662 */
	obj_t BGl_z62lambda1662z62zz__evaluate_typesz00(obj_t BgL_envz00_3842,
		obj_t BgL_oz00_3843, obj_t BgL_vz00_3844)
	{
		{	/* Eval/evaluate_types.scm 78 */
			return
				((((BgL_ev_setglobalz00_bglt) COBJECT(
							((BgL_ev_setglobalz00_bglt) BgL_oz00_3843)))->BgL_locz00) =
				((obj_t) BgL_vz00_3844), BUNSPEC);
		}

	}



/* &lambda1661 */
	obj_t BGl_z62lambda1661z62zz__evaluate_typesz00(obj_t BgL_envz00_3845,
		obj_t BgL_oz00_3846)
	{
		{	/* Eval/evaluate_types.scm 78 */
			return
				(((BgL_ev_setglobalz00_bglt) COBJECT(
						((BgL_ev_setglobalz00_bglt) BgL_oz00_3846)))->BgL_locz00);
		}

	}



/* &<@anonymous:1640> */
	obj_t BGl_z62zc3z04anonymousza31640ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3847, obj_t BgL_new1093z00_3848)
	{
		{	/* Eval/evaluate_types.scm 76 */
			{
				BgL_ev_setlocalz00_bglt BgL_auxz00_5398;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5399;

					{	/* Eval/evaluate_types.scm 76 */
						obj_t BgL_classz00_4267;

						BgL_classz00_4267 = BGl_ev_exprz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 76 */
							obj_t BgL__ortest_1286z00_4268;

							BgL__ortest_1286z00_4268 = BGL_CLASS_NIL(BgL_classz00_4267);
							if (CBOOL(BgL__ortest_1286z00_4268))
								{	/* Eval/evaluate_types.scm 76 */
									BgL_auxz00_5399 =
										((BgL_ev_exprz00_bglt) BgL__ortest_1286z00_4268);
								}
							else
								{	/* Eval/evaluate_types.scm 76 */
									BgL_auxz00_5399 =
										((BgL_ev_exprz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4267));
								}
						}
					}
					((((BgL_ev_hookz00_bglt) COBJECT(
									((BgL_ev_hookz00_bglt)
										((BgL_ev_setlocalz00_bglt) BgL_new1093z00_3848))))->
							BgL_ez00) = ((BgL_ev_exprz00_bglt) BgL_auxz00_5399), BUNSPEC);
				}
				{
					BgL_ev_varz00_bglt BgL_auxz00_5409;

					{	/* Eval/evaluate_types.scm 76 */
						obj_t BgL_classz00_4269;

						BgL_classz00_4269 = BGl_ev_varz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 76 */
							obj_t BgL__ortest_1286z00_4270;

							BgL__ortest_1286z00_4270 = BGL_CLASS_NIL(BgL_classz00_4269);
							if (CBOOL(BgL__ortest_1286z00_4270))
								{	/* Eval/evaluate_types.scm 76 */
									BgL_auxz00_5409 =
										((BgL_ev_varz00_bglt) BgL__ortest_1286z00_4270);
								}
							else
								{	/* Eval/evaluate_types.scm 76 */
									BgL_auxz00_5409 =
										((BgL_ev_varz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4269));
								}
						}
					}
					((((BgL_ev_setlocalz00_bglt) COBJECT(
									((BgL_ev_setlocalz00_bglt) BgL_new1093z00_3848)))->BgL_vz00) =
						((BgL_ev_varz00_bglt) BgL_auxz00_5409), BUNSPEC);
				}
				BgL_auxz00_5398 = ((BgL_ev_setlocalz00_bglt) BgL_new1093z00_3848);
				return ((obj_t) BgL_auxz00_5398);
			}
		}

	}



/* &lambda1638 */
	BgL_ev_setlocalz00_bglt BGl_z62lambda1638z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3849)
	{
		{	/* Eval/evaluate_types.scm 76 */
			{	/* Eval/evaluate_types.scm 76 */
				BgL_ev_setlocalz00_bglt BgL_new1092z00_4271;

				BgL_new1092z00_4271 =
					((BgL_ev_setlocalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_setlocalz00_bgl))));
				{	/* Eval/evaluate_types.scm 76 */
					long BgL_arg1639z00_4272;

					{	/* Eval/evaluate_types.scm 76 */
						long BgL_res2383z00_4273;

						BgL_res2383z00_4273 =
							BGL_CLASS_INDEX(BGl_ev_setlocalz00zz__evaluate_typesz00);
						BgL_arg1639z00_4272 = BgL_res2383z00_4273;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1092z00_4271), BgL_arg1639z00_4272);
				}
				return BgL_new1092z00_4271;
			}
		}

	}



/* &lambda1635 */
	BgL_ev_setlocalz00_bglt BGl_z62lambda1635z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3850, obj_t BgL_e1090z00_3851, obj_t BgL_v1091z00_3852)
	{
		{	/* Eval/evaluate_types.scm 76 */
			{	/* Eval/evaluate_types.scm 76 */
				BgL_ev_setlocalz00_bglt BgL_new1218z00_4276;

				{	/* Eval/evaluate_types.scm 76 */
					BgL_ev_setlocalz00_bglt BgL_new1217z00_4277;

					BgL_new1217z00_4277 =
						((BgL_ev_setlocalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ev_setlocalz00_bgl))));
					{	/* Eval/evaluate_types.scm 76 */
						long BgL_arg1637z00_4278;

						{	/* Eval/evaluate_types.scm 76 */
							long BgL_res2382z00_4279;

							BgL_res2382z00_4279 =
								BGL_CLASS_INDEX(BGl_ev_setlocalz00zz__evaluate_typesz00);
							BgL_arg1637z00_4278 = BgL_res2382z00_4279;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1217z00_4277), BgL_arg1637z00_4278);
					}
					BgL_new1218z00_4276 = BgL_new1217z00_4277;
				}
				((((BgL_ev_hookz00_bglt) COBJECT(
								((BgL_ev_hookz00_bglt) BgL_new1218z00_4276)))->BgL_ez00) =
					((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_e1090z00_3851)),
					BUNSPEC);
				((((BgL_ev_setlocalz00_bglt) COBJECT(BgL_new1218z00_4276))->BgL_vz00) =
					((BgL_ev_varz00_bglt) ((BgL_ev_varz00_bglt) BgL_v1091z00_3852)),
					BUNSPEC);
				return BgL_new1218z00_4276;
			}
		}

	}



/* &lambda1645 */
	obj_t BGl_z62lambda1645z62zz__evaluate_typesz00(obj_t BgL_envz00_3853,
		obj_t BgL_oz00_3854, obj_t BgL_vz00_3855)
	{
		{	/* Eval/evaluate_types.scm 76 */
			return
				((((BgL_ev_setlocalz00_bglt) COBJECT(
							((BgL_ev_setlocalz00_bglt) BgL_oz00_3854)))->BgL_vz00) =
				((BgL_ev_varz00_bglt) ((BgL_ev_varz00_bglt) BgL_vz00_3855)), BUNSPEC);
		}

	}



/* &lambda1644 */
	BgL_ev_varz00_bglt BGl_z62lambda1644z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3856, obj_t BgL_oz00_3857)
	{
		{	/* Eval/evaluate_types.scm 76 */
			return
				(((BgL_ev_setlocalz00_bglt) COBJECT(
						((BgL_ev_setlocalz00_bglt) BgL_oz00_3857)))->BgL_vz00);
		}

	}



/* &<@anonymous:1629> */
	obj_t BGl_z62zc3z04anonymousza31629ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3858, obj_t BgL_new1088z00_3859)
	{
		{	/* Eval/evaluate_types.scm 75 */
			{
				BgL_ev_trapz00_bglt BgL_auxz00_5438;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5439;

					{	/* Eval/evaluate_types.scm 75 */
						obj_t BgL_classz00_4284;

						BgL_classz00_4284 = BGl_ev_exprz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 75 */
							obj_t BgL__ortest_1286z00_4285;

							BgL__ortest_1286z00_4285 = BGL_CLASS_NIL(BgL_classz00_4284);
							if (CBOOL(BgL__ortest_1286z00_4285))
								{	/* Eval/evaluate_types.scm 75 */
									BgL_auxz00_5439 =
										((BgL_ev_exprz00_bglt) BgL__ortest_1286z00_4285);
								}
							else
								{	/* Eval/evaluate_types.scm 75 */
									BgL_auxz00_5439 =
										((BgL_ev_exprz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4284));
								}
						}
					}
					((((BgL_ev_hookz00_bglt) COBJECT(
									((BgL_ev_hookz00_bglt)
										((BgL_ev_trapz00_bglt) BgL_new1088z00_3859))))->BgL_ez00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5439), BUNSPEC);
				}
				BgL_auxz00_5438 = ((BgL_ev_trapz00_bglt) BgL_new1088z00_3859);
				return ((obj_t) BgL_auxz00_5438);
			}
		}

	}



/* &lambda1627 */
	BgL_ev_trapz00_bglt BGl_z62lambda1627z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3860)
	{
		{	/* Eval/evaluate_types.scm 75 */
			{	/* Eval/evaluate_types.scm 75 */
				BgL_ev_trapz00_bglt BgL_new1087z00_4286;

				BgL_new1087z00_4286 =
					((BgL_ev_trapz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_trapz00_bgl))));
				{	/* Eval/evaluate_types.scm 75 */
					long BgL_arg1628z00_4287;

					{	/* Eval/evaluate_types.scm 75 */
						long BgL_res2381z00_4288;

						BgL_res2381z00_4288 =
							BGL_CLASS_INDEX(BGl_ev_trapz00zz__evaluate_typesz00);
						BgL_arg1628z00_4287 = BgL_res2381z00_4288;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1087z00_4286), BgL_arg1628z00_4287);
				}
				return BgL_new1087z00_4286;
			}
		}

	}



/* &lambda1624 */
	BgL_ev_trapz00_bglt BGl_z62lambda1624z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3861, obj_t BgL_e1086z00_3862)
	{
		{	/* Eval/evaluate_types.scm 75 */
			{	/* Eval/evaluate_types.scm 75 */
				BgL_ev_trapz00_bglt BgL_new1216z00_4290;

				{	/* Eval/evaluate_types.scm 75 */
					BgL_ev_trapz00_bglt BgL_new1215z00_4291;

					BgL_new1215z00_4291 =
						((BgL_ev_trapz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ev_trapz00_bgl))));
					{	/* Eval/evaluate_types.scm 75 */
						long BgL_arg1626z00_4292;

						{	/* Eval/evaluate_types.scm 75 */
							long BgL_res2380z00_4293;

							BgL_res2380z00_4293 =
								BGL_CLASS_INDEX(BGl_ev_trapz00zz__evaluate_typesz00);
							BgL_arg1626z00_4292 = BgL_res2380z00_4293;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1215z00_4291), BgL_arg1626z00_4292);
					}
					BgL_new1216z00_4290 = BgL_new1215z00_4291;
				}
				((((BgL_ev_hookz00_bglt) COBJECT(
								((BgL_ev_hookz00_bglt) BgL_new1216z00_4290)))->BgL_ez00) =
					((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_e1086z00_3862)),
					BUNSPEC);
				return BgL_new1216z00_4290;
			}
		}

	}



/* &<@anonymous:1612> */
	obj_t BGl_z62zc3z04anonymousza31612ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3863, obj_t BgL_new1084z00_3864)
	{
		{	/* Eval/evaluate_types.scm 73 */
			{
				BgL_ev_hookz00_bglt BgL_auxz00_5462;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5463;

					{	/* Eval/evaluate_types.scm 73 */
						obj_t BgL_classz00_4295;

						BgL_classz00_4295 = BGl_ev_exprz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 73 */
							obj_t BgL__ortest_1286z00_4296;

							BgL__ortest_1286z00_4296 = BGL_CLASS_NIL(BgL_classz00_4295);
							if (CBOOL(BgL__ortest_1286z00_4296))
								{	/* Eval/evaluate_types.scm 73 */
									BgL_auxz00_5463 =
										((BgL_ev_exprz00_bglt) BgL__ortest_1286z00_4296);
								}
							else
								{	/* Eval/evaluate_types.scm 73 */
									BgL_auxz00_5463 =
										((BgL_ev_exprz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4295));
								}
						}
					}
					((((BgL_ev_hookz00_bglt) COBJECT(
									((BgL_ev_hookz00_bglt) BgL_new1084z00_3864)))->BgL_ez00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5463), BUNSPEC);
				}
				BgL_auxz00_5462 = ((BgL_ev_hookz00_bglt) BgL_new1084z00_3864);
				return ((obj_t) BgL_auxz00_5462);
			}
		}

	}



/* &lambda1609 */
	BgL_ev_hookz00_bglt BGl_z62lambda1609z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3865)
	{
		{	/* Eval/evaluate_types.scm 73 */
			{	/* Eval/evaluate_types.scm 73 */
				BgL_ev_hookz00_bglt BgL_new1083z00_4297;

				BgL_new1083z00_4297 =
					((BgL_ev_hookz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_hookz00_bgl))));
				{	/* Eval/evaluate_types.scm 73 */
					long BgL_arg1611z00_4298;

					{	/* Eval/evaluate_types.scm 73 */
						long BgL_res2379z00_4299;

						BgL_res2379z00_4299 =
							BGL_CLASS_INDEX(BGl_ev_hookz00zz__evaluate_typesz00);
						BgL_arg1611z00_4298 = BgL_res2379z00_4299;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1083z00_4297), BgL_arg1611z00_4298);
				}
				return BgL_new1083z00_4297;
			}
		}

	}



/* &lambda1607 */
	BgL_ev_hookz00_bglt BGl_z62lambda1607z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3866, obj_t BgL_e1082z00_3867)
	{
		{	/* Eval/evaluate_types.scm 73 */
			{	/* Eval/evaluate_types.scm 73 */
				BgL_ev_hookz00_bglt BgL_new1214z00_4301;

				{	/* Eval/evaluate_types.scm 73 */
					BgL_ev_hookz00_bglt BgL_new1213z00_4302;

					BgL_new1213z00_4302 =
						((BgL_ev_hookz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ev_hookz00_bgl))));
					{	/* Eval/evaluate_types.scm 73 */
						long BgL_arg1608z00_4303;

						{	/* Eval/evaluate_types.scm 73 */
							long BgL_res2378z00_4304;

							BgL_res2378z00_4304 =
								BGL_CLASS_INDEX(BGl_ev_hookz00zz__evaluate_typesz00);
							BgL_arg1608z00_4303 = BgL_res2378z00_4304;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1213z00_4302), BgL_arg1608z00_4303);
					}
					BgL_new1214z00_4301 = BgL_new1213z00_4302;
				}
				((((BgL_ev_hookz00_bglt) COBJECT(BgL_new1214z00_4301))->BgL_ez00) =
					((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_e1082z00_3867)),
					BUNSPEC);
				return BgL_new1214z00_4301;
			}
		}

	}



/* &lambda1617 */
	obj_t BGl_z62lambda1617z62zz__evaluate_typesz00(obj_t BgL_envz00_3868,
		obj_t BgL_oz00_3869, obj_t BgL_vz00_3870)
	{
		{	/* Eval/evaluate_types.scm 73 */
			return
				((((BgL_ev_hookz00_bglt) COBJECT(
							((BgL_ev_hookz00_bglt) BgL_oz00_3869)))->BgL_ez00) =
				((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_vz00_3870)), BUNSPEC);
		}

	}



/* &lambda1616 */
	BgL_ev_exprz00_bglt BGl_z62lambda1616z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3871, obj_t BgL_oz00_3872)
	{
		{	/* Eval/evaluate_types.scm 73 */
			return
				(((BgL_ev_hookz00_bglt) COBJECT(
						((BgL_ev_hookz00_bglt) BgL_oz00_3872)))->BgL_ez00);
		}

	}



/* &<@anonymous:1588> */
	obj_t BGl_z62zc3z04anonymousza31588ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3873, obj_t BgL_new1080z00_3874)
	{
		{	/* Eval/evaluate_types.scm 70 */
			{
				BgL_ev_prog2z00_bglt BgL_auxz00_5489;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5490;

					{	/* Eval/evaluate_types.scm 70 */
						obj_t BgL_classz00_4309;

						BgL_classz00_4309 = BGl_ev_exprz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 70 */
							obj_t BgL__ortest_1286z00_4310;

							BgL__ortest_1286z00_4310 = BGL_CLASS_NIL(BgL_classz00_4309);
							if (CBOOL(BgL__ortest_1286z00_4310))
								{	/* Eval/evaluate_types.scm 70 */
									BgL_auxz00_5490 =
										((BgL_ev_exprz00_bglt) BgL__ortest_1286z00_4310);
								}
							else
								{	/* Eval/evaluate_types.scm 70 */
									BgL_auxz00_5490 =
										((BgL_ev_exprz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4309));
								}
						}
					}
					((((BgL_ev_prog2z00_bglt) COBJECT(
									((BgL_ev_prog2z00_bglt) BgL_new1080z00_3874)))->BgL_e1z00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5490), BUNSPEC);
				}
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5499;

					{	/* Eval/evaluate_types.scm 70 */
						obj_t BgL_classz00_4311;

						BgL_classz00_4311 = BGl_ev_exprz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 70 */
							obj_t BgL__ortest_1286z00_4312;

							BgL__ortest_1286z00_4312 = BGL_CLASS_NIL(BgL_classz00_4311);
							if (CBOOL(BgL__ortest_1286z00_4312))
								{	/* Eval/evaluate_types.scm 70 */
									BgL_auxz00_5499 =
										((BgL_ev_exprz00_bglt) BgL__ortest_1286z00_4312);
								}
							else
								{	/* Eval/evaluate_types.scm 70 */
									BgL_auxz00_5499 =
										((BgL_ev_exprz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4311));
								}
						}
					}
					((((BgL_ev_prog2z00_bglt) COBJECT(
									((BgL_ev_prog2z00_bglt) BgL_new1080z00_3874)))->BgL_e2z00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5499), BUNSPEC);
				}
				BgL_auxz00_5489 = ((BgL_ev_prog2z00_bglt) BgL_new1080z00_3874);
				return ((obj_t) BgL_auxz00_5489);
			}
		}

	}



/* &lambda1585 */
	BgL_ev_prog2z00_bglt BGl_z62lambda1585z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3875)
	{
		{	/* Eval/evaluate_types.scm 70 */
			{	/* Eval/evaluate_types.scm 70 */
				BgL_ev_prog2z00_bglt BgL_new1079z00_4313;

				BgL_new1079z00_4313 =
					((BgL_ev_prog2z00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_prog2z00_bgl))));
				{	/* Eval/evaluate_types.scm 70 */
					long BgL_arg1587z00_4314;

					{	/* Eval/evaluate_types.scm 70 */
						long BgL_res2377z00_4315;

						BgL_res2377z00_4315 =
							BGL_CLASS_INDEX(BGl_ev_prog2z00zz__evaluate_typesz00);
						BgL_arg1587z00_4314 = BgL_res2377z00_4315;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1079z00_4313), BgL_arg1587z00_4314);
				}
				return BgL_new1079z00_4313;
			}
		}

	}



/* &lambda1583 */
	BgL_ev_prog2z00_bglt BGl_z62lambda1583z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3876, obj_t BgL_e11077z00_3877, obj_t BgL_e21078z00_3878)
	{
		{	/* Eval/evaluate_types.scm 70 */
			{	/* Eval/evaluate_types.scm 70 */
				BgL_ev_prog2z00_bglt BgL_new1212z00_4318;

				{	/* Eval/evaluate_types.scm 70 */
					BgL_ev_prog2z00_bglt BgL_new1211z00_4319;

					BgL_new1211z00_4319 =
						((BgL_ev_prog2z00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ev_prog2z00_bgl))));
					{	/* Eval/evaluate_types.scm 70 */
						long BgL_arg1584z00_4320;

						{	/* Eval/evaluate_types.scm 70 */
							long BgL_res2376z00_4321;

							BgL_res2376z00_4321 =
								BGL_CLASS_INDEX(BGl_ev_prog2z00zz__evaluate_typesz00);
							BgL_arg1584z00_4320 = BgL_res2376z00_4321;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1211z00_4319), BgL_arg1584z00_4320);
					}
					BgL_new1212z00_4318 = BgL_new1211z00_4319;
				}
				((((BgL_ev_prog2z00_bglt) COBJECT(BgL_new1212z00_4318))->BgL_e1z00) =
					((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_e11077z00_3877)),
					BUNSPEC);
				((((BgL_ev_prog2z00_bglt) COBJECT(BgL_new1212z00_4318))->BgL_e2z00) =
					((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_e21078z00_3878)),
					BUNSPEC);
				return BgL_new1212z00_4318;
			}
		}

	}



/* &lambda1600 */
	obj_t BGl_z62lambda1600z62zz__evaluate_typesz00(obj_t BgL_envz00_3879,
		obj_t BgL_oz00_3880, obj_t BgL_vz00_3881)
	{
		{	/* Eval/evaluate_types.scm 70 */
			return
				((((BgL_ev_prog2z00_bglt) COBJECT(
							((BgL_ev_prog2z00_bglt) BgL_oz00_3880)))->BgL_e2z00) =
				((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_vz00_3881)), BUNSPEC);
		}

	}



/* &lambda1599 */
	BgL_ev_exprz00_bglt BGl_z62lambda1599z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3882, obj_t BgL_oz00_3883)
	{
		{	/* Eval/evaluate_types.scm 70 */
			return
				(((BgL_ev_prog2z00_bglt) COBJECT(
						((BgL_ev_prog2z00_bglt) BgL_oz00_3883)))->BgL_e2z00);
		}

	}



/* &lambda1595 */
	obj_t BGl_z62lambda1595z62zz__evaluate_typesz00(obj_t BgL_envz00_3884,
		obj_t BgL_oz00_3885, obj_t BgL_vz00_3886)
	{
		{	/* Eval/evaluate_types.scm 70 */
			return
				((((BgL_ev_prog2z00_bglt) COBJECT(
							((BgL_ev_prog2z00_bglt) BgL_oz00_3885)))->BgL_e1z00) =
				((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_vz00_3886)), BUNSPEC);
		}

	}



/* &lambda1594 */
	BgL_ev_exprz00_bglt BGl_z62lambda1594z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3887, obj_t BgL_oz00_3888)
	{
		{	/* Eval/evaluate_types.scm 70 */
			return
				(((BgL_ev_prog2z00_bglt) COBJECT(
						((BgL_ev_prog2z00_bglt) BgL_oz00_3888)))->BgL_e1z00);
		}

	}



/* &<@anonymous:1576> */
	obj_t BGl_z62zc3z04anonymousza31576ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3889, obj_t BgL_new1075z00_3890)
	{
		{	/* Eval/evaluate_types.scm 69 */
			{
				BgL_ev_andz00_bglt BgL_auxz00_5532;

				((((BgL_ev_listz00_bglt) COBJECT(
								((BgL_ev_listz00_bglt)
									((BgL_ev_andz00_bglt) BgL_new1075z00_3890))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_5532 = ((BgL_ev_andz00_bglt) BgL_new1075z00_3890);
				return ((obj_t) BgL_auxz00_5532);
			}
		}

	}



/* &lambda1574 */
	BgL_ev_andz00_bglt BGl_z62lambda1574z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3891)
	{
		{	/* Eval/evaluate_types.scm 69 */
			{	/* Eval/evaluate_types.scm 69 */
				BgL_ev_andz00_bglt BgL_new1074z00_4329;

				BgL_new1074z00_4329 =
					((BgL_ev_andz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_andz00_bgl))));
				{	/* Eval/evaluate_types.scm 69 */
					long BgL_arg1575z00_4330;

					{	/* Eval/evaluate_types.scm 69 */
						long BgL_res2375z00_4331;

						BgL_res2375z00_4331 =
							BGL_CLASS_INDEX(BGl_ev_andz00zz__evaluate_typesz00);
						BgL_arg1575z00_4330 = BgL_res2375z00_4331;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1074z00_4329), BgL_arg1575z00_4330);
				}
				return BgL_new1074z00_4329;
			}
		}

	}



/* &lambda1571 */
	BgL_ev_andz00_bglt BGl_z62lambda1571z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3892, obj_t BgL_args1073z00_3893)
	{
		{	/* Eval/evaluate_types.scm 69 */
			{	/* Eval/evaluate_types.scm 69 */
				BgL_ev_andz00_bglt BgL_new1210z00_4332;

				{	/* Eval/evaluate_types.scm 69 */
					BgL_ev_andz00_bglt BgL_new1209z00_4333;

					BgL_new1209z00_4333 =
						((BgL_ev_andz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ev_andz00_bgl))));
					{	/* Eval/evaluate_types.scm 69 */
						long BgL_arg1573z00_4334;

						{	/* Eval/evaluate_types.scm 69 */
							long BgL_res2374z00_4335;

							BgL_res2374z00_4335 =
								BGL_CLASS_INDEX(BGl_ev_andz00zz__evaluate_typesz00);
							BgL_arg1573z00_4334 = BgL_res2374z00_4335;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1209z00_4333), BgL_arg1573z00_4334);
					}
					BgL_new1210z00_4332 = BgL_new1209z00_4333;
				}
				((((BgL_ev_listz00_bglt) COBJECT(
								((BgL_ev_listz00_bglt) BgL_new1210z00_4332)))->BgL_argsz00) =
					((obj_t) BgL_args1073z00_3893), BUNSPEC);
				return BgL_new1210z00_4332;
			}
		}

	}



/* &<@anonymous:1565> */
	obj_t BGl_z62zc3z04anonymousza31565ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3894, obj_t BgL_new1071z00_3895)
	{
		{	/* Eval/evaluate_types.scm 68 */
			{
				BgL_ev_orz00_bglt BgL_auxz00_5548;

				((((BgL_ev_listz00_bglt) COBJECT(
								((BgL_ev_listz00_bglt)
									((BgL_ev_orz00_bglt) BgL_new1071z00_3895))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_5548 = ((BgL_ev_orz00_bglt) BgL_new1071z00_3895);
				return ((obj_t) BgL_auxz00_5548);
			}
		}

	}



/* &lambda1563 */
	BgL_ev_orz00_bglt BGl_z62lambda1563z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3896)
	{
		{	/* Eval/evaluate_types.scm 68 */
			{	/* Eval/evaluate_types.scm 68 */
				BgL_ev_orz00_bglt BgL_new1070z00_4337;

				BgL_new1070z00_4337 =
					((BgL_ev_orz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_orz00_bgl))));
				{	/* Eval/evaluate_types.scm 68 */
					long BgL_arg1564z00_4338;

					{	/* Eval/evaluate_types.scm 68 */
						long BgL_res2373z00_4339;

						BgL_res2373z00_4339 =
							BGL_CLASS_INDEX(BGl_ev_orz00zz__evaluate_typesz00);
						BgL_arg1564z00_4338 = BgL_res2373z00_4339;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1070z00_4337), BgL_arg1564z00_4338);
				}
				return BgL_new1070z00_4337;
			}
		}

	}



/* &lambda1561 */
	BgL_ev_orz00_bglt BGl_z62lambda1561z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3897, obj_t BgL_args1069z00_3898)
	{
		{	/* Eval/evaluate_types.scm 68 */
			{	/* Eval/evaluate_types.scm 68 */
				BgL_ev_orz00_bglt BgL_new1208z00_4340;

				{	/* Eval/evaluate_types.scm 68 */
					BgL_ev_orz00_bglt BgL_new1207z00_4341;

					BgL_new1207z00_4341 =
						((BgL_ev_orz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ev_orz00_bgl))));
					{	/* Eval/evaluate_types.scm 68 */
						long BgL_arg1562z00_4342;

						{	/* Eval/evaluate_types.scm 68 */
							long BgL_res2372z00_4343;

							BgL_res2372z00_4343 =
								BGL_CLASS_INDEX(BGl_ev_orz00zz__evaluate_typesz00);
							BgL_arg1562z00_4342 = BgL_res2372z00_4343;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1207z00_4341), BgL_arg1562z00_4342);
					}
					BgL_new1208z00_4340 = BgL_new1207z00_4341;
				}
				((((BgL_ev_listz00_bglt) COBJECT(
								((BgL_ev_listz00_bglt) BgL_new1208z00_4340)))->BgL_argsz00) =
					((obj_t) BgL_args1069z00_3898), BUNSPEC);
				return BgL_new1208z00_4340;
			}
		}

	}



/* &<@anonymous:1545> */
	obj_t BGl_z62zc3z04anonymousza31545ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3899, obj_t BgL_new1067z00_3900)
	{
		{	/* Eval/evaluate_types.scm 66 */
			{
				BgL_ev_listz00_bglt BgL_auxz00_5564;

				((((BgL_ev_listz00_bglt) COBJECT(
								((BgL_ev_listz00_bglt) BgL_new1067z00_3900)))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_5564 = ((BgL_ev_listz00_bglt) BgL_new1067z00_3900);
				return ((obj_t) BgL_auxz00_5564);
			}
		}

	}



/* &lambda1543 */
	BgL_ev_listz00_bglt BGl_z62lambda1543z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3901)
	{
		{	/* Eval/evaluate_types.scm 66 */
			{	/* Eval/evaluate_types.scm 66 */
				BgL_ev_listz00_bglt BgL_new1066z00_4345;

				BgL_new1066z00_4345 =
					((BgL_ev_listz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_listz00_bgl))));
				{	/* Eval/evaluate_types.scm 66 */
					long BgL_arg1544z00_4346;

					{	/* Eval/evaluate_types.scm 66 */
						long BgL_res2371z00_4347;

						BgL_res2371z00_4347 =
							BGL_CLASS_INDEX(BGl_ev_listz00zz__evaluate_typesz00);
						BgL_arg1544z00_4346 = BgL_res2371z00_4347;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1066z00_4345), BgL_arg1544z00_4346);
				}
				return BgL_new1066z00_4345;
			}
		}

	}



/* &lambda1541 */
	BgL_ev_listz00_bglt BGl_z62lambda1541z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3902, obj_t BgL_args1065z00_3903)
	{
		{	/* Eval/evaluate_types.scm 66 */
			{	/* Eval/evaluate_types.scm 66 */
				BgL_ev_listz00_bglt BgL_new1206z00_4348;

				{	/* Eval/evaluate_types.scm 66 */
					BgL_ev_listz00_bglt BgL_new1205z00_4349;

					BgL_new1205z00_4349 =
						((BgL_ev_listz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ev_listz00_bgl))));
					{	/* Eval/evaluate_types.scm 66 */
						long BgL_arg1542z00_4350;

						{	/* Eval/evaluate_types.scm 66 */
							long BgL_res2370z00_4351;

							BgL_res2370z00_4351 =
								BGL_CLASS_INDEX(BGl_ev_listz00zz__evaluate_typesz00);
							BgL_arg1542z00_4350 = BgL_res2370z00_4351;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1205z00_4349), BgL_arg1542z00_4350);
					}
					BgL_new1206z00_4348 = BgL_new1205z00_4349;
				}
				((((BgL_ev_listz00_bglt) COBJECT(BgL_new1206z00_4348))->BgL_argsz00) =
					((obj_t) BgL_args1065z00_3903), BUNSPEC);
				return BgL_new1206z00_4348;
			}
		}

	}



/* &lambda1553 */
	obj_t BGl_z62lambda1553z62zz__evaluate_typesz00(obj_t BgL_envz00_3904,
		obj_t BgL_oz00_3905, obj_t BgL_vz00_3906)
	{
		{	/* Eval/evaluate_types.scm 66 */
			return
				((((BgL_ev_listz00_bglt) COBJECT(
							((BgL_ev_listz00_bglt) BgL_oz00_3905)))->BgL_argsz00) =
				((obj_t) BgL_vz00_3906), BUNSPEC);
		}

	}



/* &lambda1552 */
	obj_t BGl_z62lambda1552z62zz__evaluate_typesz00(obj_t BgL_envz00_3907,
		obj_t BgL_oz00_3908)
	{
		{	/* Eval/evaluate_types.scm 66 */
			return
				(((BgL_ev_listz00_bglt) COBJECT(
						((BgL_ev_listz00_bglt) BgL_oz00_3908)))->BgL_argsz00);
		}

	}



/* &<@anonymous:1517> */
	obj_t BGl_z62zc3z04anonymousza31517ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3909, obj_t BgL_new1063z00_3910)
	{
		{	/* Eval/evaluate_types.scm 62 */
			{
				BgL_ev_ifz00_bglt BgL_auxz00_5582;

				{
					BgL_ev_exprz00_bglt BgL_auxz00_5583;

					{	/* Eval/evaluate_types.scm 62 */
						obj_t BgL_classz00_4355;

						BgL_classz00_4355 = BGl_ev_exprz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 62 */
							obj_t BgL__ortest_1286z00_4356;

							BgL__ortest_1286z00_4356 = BGL_CLASS_NIL(BgL_classz00_4355);
							if (CBOOL(BgL__ortest_1286z00_4356))
								{	/* Eval/evaluate_types.scm 62 */
									BgL_auxz00_5583 =
										((BgL_ev_exprz00_bglt) BgL__ortest_1286z00_4356);
								}
							else
								{	/* Eval/evaluate_types.scm 62 */
									BgL_auxz00_5583 =
										((BgL_ev_exprz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4355));
								}
						}
					}
					((((BgL_ev_ifz00_bglt) COBJECT(
									((BgL_ev_ifz00_bglt) BgL_new1063z00_3910)))->BgL_pz00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5583), BUNSPEC);
				}
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5592;

					{	/* Eval/evaluate_types.scm 62 */
						obj_t BgL_classz00_4357;

						BgL_classz00_4357 = BGl_ev_exprz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 62 */
							obj_t BgL__ortest_1286z00_4358;

							BgL__ortest_1286z00_4358 = BGL_CLASS_NIL(BgL_classz00_4357);
							if (CBOOL(BgL__ortest_1286z00_4358))
								{	/* Eval/evaluate_types.scm 62 */
									BgL_auxz00_5592 =
										((BgL_ev_exprz00_bglt) BgL__ortest_1286z00_4358);
								}
							else
								{	/* Eval/evaluate_types.scm 62 */
									BgL_auxz00_5592 =
										((BgL_ev_exprz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4357));
								}
						}
					}
					((((BgL_ev_ifz00_bglt) COBJECT(
									((BgL_ev_ifz00_bglt) BgL_new1063z00_3910)))->BgL_tz00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5592), BUNSPEC);
				}
				{
					BgL_ev_exprz00_bglt BgL_auxz00_5601;

					{	/* Eval/evaluate_types.scm 62 */
						obj_t BgL_classz00_4359;

						BgL_classz00_4359 = BGl_ev_exprz00zz__evaluate_typesz00;
						{	/* Eval/evaluate_types.scm 62 */
							obj_t BgL__ortest_1286z00_4360;

							BgL__ortest_1286z00_4360 = BGL_CLASS_NIL(BgL_classz00_4359);
							if (CBOOL(BgL__ortest_1286z00_4360))
								{	/* Eval/evaluate_types.scm 62 */
									BgL_auxz00_5601 =
										((BgL_ev_exprz00_bglt) BgL__ortest_1286z00_4360);
								}
							else
								{	/* Eval/evaluate_types.scm 62 */
									BgL_auxz00_5601 =
										((BgL_ev_exprz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4359));
								}
						}
					}
					((((BgL_ev_ifz00_bglt) COBJECT(
									((BgL_ev_ifz00_bglt) BgL_new1063z00_3910)))->BgL_ez00) =
						((BgL_ev_exprz00_bglt) BgL_auxz00_5601), BUNSPEC);
				}
				BgL_auxz00_5582 = ((BgL_ev_ifz00_bglt) BgL_new1063z00_3910);
				return ((obj_t) BgL_auxz00_5582);
			}
		}

	}



/* &lambda1515 */
	BgL_ev_ifz00_bglt BGl_z62lambda1515z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3911)
	{
		{	/* Eval/evaluate_types.scm 62 */
			{	/* Eval/evaluate_types.scm 62 */
				BgL_ev_ifz00_bglt BgL_new1062z00_4361;

				BgL_new1062z00_4361 =
					((BgL_ev_ifz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_ifz00_bgl))));
				{	/* Eval/evaluate_types.scm 62 */
					long BgL_arg1516z00_4362;

					{	/* Eval/evaluate_types.scm 62 */
						long BgL_res2369z00_4363;

						BgL_res2369z00_4363 =
							BGL_CLASS_INDEX(BGl_ev_ifz00zz__evaluate_typesz00);
						BgL_arg1516z00_4362 = BgL_res2369z00_4363;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1062z00_4361), BgL_arg1516z00_4362);
				}
				return BgL_new1062z00_4361;
			}
		}

	}



/* &lambda1513 */
	BgL_ev_ifz00_bglt BGl_z62lambda1513z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3912, obj_t BgL_p1059z00_3913, obj_t BgL_t1060z00_3914,
		obj_t BgL_e1061z00_3915)
	{
		{	/* Eval/evaluate_types.scm 62 */
			{	/* Eval/evaluate_types.scm 62 */
				BgL_ev_ifz00_bglt BgL_new1204z00_4367;

				{	/* Eval/evaluate_types.scm 62 */
					BgL_ev_ifz00_bglt BgL_new1203z00_4368;

					BgL_new1203z00_4368 =
						((BgL_ev_ifz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ev_ifz00_bgl))));
					{	/* Eval/evaluate_types.scm 62 */
						long BgL_arg1514z00_4369;

						{	/* Eval/evaluate_types.scm 62 */
							long BgL_res2368z00_4370;

							BgL_res2368z00_4370 =
								BGL_CLASS_INDEX(BGl_ev_ifz00zz__evaluate_typesz00);
							BgL_arg1514z00_4369 = BgL_res2368z00_4370;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1203z00_4368), BgL_arg1514z00_4369);
					}
					BgL_new1204z00_4367 = BgL_new1203z00_4368;
				}
				((((BgL_ev_ifz00_bglt) COBJECT(BgL_new1204z00_4367))->BgL_pz00) =
					((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_p1059z00_3913)),
					BUNSPEC);
				((((BgL_ev_ifz00_bglt) COBJECT(BgL_new1204z00_4367))->BgL_tz00) =
					((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_t1060z00_3914)),
					BUNSPEC);
				((((BgL_ev_ifz00_bglt) COBJECT(BgL_new1204z00_4367))->BgL_ez00) =
					((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_e1061z00_3915)),
					BUNSPEC);
				return BgL_new1204z00_4367;
			}
		}

	}



/* &lambda1533 */
	obj_t BGl_z62lambda1533z62zz__evaluate_typesz00(obj_t BgL_envz00_3916,
		obj_t BgL_oz00_3917, obj_t BgL_vz00_3918)
	{
		{	/* Eval/evaluate_types.scm 62 */
			return
				((((BgL_ev_ifz00_bglt) COBJECT(
							((BgL_ev_ifz00_bglt) BgL_oz00_3917)))->BgL_ez00) =
				((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_vz00_3918)), BUNSPEC);
		}

	}



/* &lambda1532 */
	BgL_ev_exprz00_bglt BGl_z62lambda1532z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3919, obj_t BgL_oz00_3920)
	{
		{	/* Eval/evaluate_types.scm 62 */
			return
				(((BgL_ev_ifz00_bglt) COBJECT(
						((BgL_ev_ifz00_bglt) BgL_oz00_3920)))->BgL_ez00);
		}

	}



/* &lambda1527 */
	obj_t BGl_z62lambda1527z62zz__evaluate_typesz00(obj_t BgL_envz00_3921,
		obj_t BgL_oz00_3922, obj_t BgL_vz00_3923)
	{
		{	/* Eval/evaluate_types.scm 62 */
			return
				((((BgL_ev_ifz00_bglt) COBJECT(
							((BgL_ev_ifz00_bglt) BgL_oz00_3922)))->BgL_tz00) =
				((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_vz00_3923)), BUNSPEC);
		}

	}



/* &lambda1526 */
	BgL_ev_exprz00_bglt BGl_z62lambda1526z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3924, obj_t BgL_oz00_3925)
	{
		{	/* Eval/evaluate_types.scm 62 */
			return
				(((BgL_ev_ifz00_bglt) COBJECT(
						((BgL_ev_ifz00_bglt) BgL_oz00_3925)))->BgL_tz00);
		}

	}



/* &lambda1522 */
	obj_t BGl_z62lambda1522z62zz__evaluate_typesz00(obj_t BgL_envz00_3926,
		obj_t BgL_oz00_3927, obj_t BgL_vz00_3928)
	{
		{	/* Eval/evaluate_types.scm 62 */
			return
				((((BgL_ev_ifz00_bglt) COBJECT(
							((BgL_ev_ifz00_bglt) BgL_oz00_3927)))->BgL_pz00) =
				((BgL_ev_exprz00_bglt) ((BgL_ev_exprz00_bglt) BgL_vz00_3928)), BUNSPEC);
		}

	}



/* &lambda1521 */
	BgL_ev_exprz00_bglt BGl_z62lambda1521z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3929, obj_t BgL_oz00_3930)
	{
		{	/* Eval/evaluate_types.scm 62 */
			return
				(((BgL_ev_ifz00_bglt) COBJECT(
						((BgL_ev_ifz00_bglt) BgL_oz00_3930)))->BgL_pz00);
		}

	}



/* &<@anonymous:1498> */
	obj_t BGl_z62zc3z04anonymousza31498ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3931, obj_t BgL_new1057z00_3932)
	{
		{	/* Eval/evaluate_types.scm 60 */
			{
				BgL_ev_littz00_bglt BgL_auxz00_5641;

				((((BgL_ev_littz00_bglt) COBJECT(
								((BgL_ev_littz00_bglt) BgL_new1057z00_3932)))->BgL_valuez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_5641 = ((BgL_ev_littz00_bglt) BgL_new1057z00_3932);
				return ((obj_t) BgL_auxz00_5641);
			}
		}

	}



/* &lambda1496 */
	BgL_ev_littz00_bglt BGl_z62lambda1496z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3933)
	{
		{	/* Eval/evaluate_types.scm 60 */
			{	/* Eval/evaluate_types.scm 60 */
				BgL_ev_littz00_bglt BgL_new1056z00_4381;

				BgL_new1056z00_4381 =
					((BgL_ev_littz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_littz00_bgl))));
				{	/* Eval/evaluate_types.scm 60 */
					long BgL_arg1497z00_4382;

					{	/* Eval/evaluate_types.scm 60 */
						long BgL_res2367z00_4383;

						BgL_res2367z00_4383 =
							BGL_CLASS_INDEX(BGl_ev_littz00zz__evaluate_typesz00);
						BgL_arg1497z00_4382 = BgL_res2367z00_4383;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1056z00_4381), BgL_arg1497z00_4382);
				}
				return BgL_new1056z00_4381;
			}
		}

	}



/* &lambda1494 */
	BgL_ev_littz00_bglt BGl_z62lambda1494z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3934, obj_t BgL_value1055z00_3935)
	{
		{	/* Eval/evaluate_types.scm 60 */
			{	/* Eval/evaluate_types.scm 60 */
				BgL_ev_littz00_bglt BgL_new1202z00_4384;

				{	/* Eval/evaluate_types.scm 60 */
					BgL_ev_littz00_bglt BgL_new1201z00_4385;

					BgL_new1201z00_4385 =
						((BgL_ev_littz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ev_littz00_bgl))));
					{	/* Eval/evaluate_types.scm 60 */
						long BgL_arg1495z00_4386;

						{	/* Eval/evaluate_types.scm 60 */
							long BgL_res2366z00_4387;

							BgL_res2366z00_4387 =
								BGL_CLASS_INDEX(BGl_ev_littz00zz__evaluate_typesz00);
							BgL_arg1495z00_4386 = BgL_res2366z00_4387;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1201z00_4385), BgL_arg1495z00_4386);
					}
					BgL_new1202z00_4384 = BgL_new1201z00_4385;
				}
				((((BgL_ev_littz00_bglt) COBJECT(BgL_new1202z00_4384))->BgL_valuez00) =
					((obj_t) BgL_value1055z00_3935), BUNSPEC);
				return BgL_new1202z00_4384;
			}
		}

	}



/* &lambda1507 */
	obj_t BGl_z62lambda1507z62zz__evaluate_typesz00(obj_t BgL_envz00_3936,
		obj_t BgL_oz00_3937, obj_t BgL_vz00_3938)
	{
		{	/* Eval/evaluate_types.scm 60 */
			return
				((((BgL_ev_littz00_bglt) COBJECT(
							((BgL_ev_littz00_bglt) BgL_oz00_3937)))->BgL_valuez00) =
				((obj_t) BgL_vz00_3938), BUNSPEC);
		}

	}



/* &lambda1506 */
	obj_t BGl_z62lambda1506z62zz__evaluate_typesz00(obj_t BgL_envz00_3939,
		obj_t BgL_oz00_3940)
	{
		{	/* Eval/evaluate_types.scm 60 */
			return
				(((BgL_ev_littz00_bglt) COBJECT(
						((BgL_ev_littz00_bglt) BgL_oz00_3940)))->BgL_valuez00);
		}

	}



/* &<@anonymous:1469> */
	obj_t BGl_z62zc3z04anonymousza31469ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3941, obj_t BgL_new1053z00_3942)
	{
		{	/* Eval/evaluate_types.scm 55 */
			{
				BgL_ev_globalz00_bglt BgL_auxz00_5659;

				((((BgL_ev_globalz00_bglt) COBJECT(
								((BgL_ev_globalz00_bglt) BgL_new1053z00_3942)))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_ev_globalz00_bglt) COBJECT(((BgL_ev_globalz00_bglt)
									BgL_new1053z00_3942)))->BgL_namez00) =
					((obj_t) BGl_symbol2791z00zz__evaluate_typesz00), BUNSPEC);
				((((BgL_ev_globalz00_bglt) COBJECT(((BgL_ev_globalz00_bglt)
									BgL_new1053z00_3942)))->BgL_modz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_5659 = ((BgL_ev_globalz00_bglt) BgL_new1053z00_3942);
				return ((obj_t) BgL_auxz00_5659);
			}
		}

	}



/* &lambda1467 */
	BgL_ev_globalz00_bglt BGl_z62lambda1467z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3943)
	{
		{	/* Eval/evaluate_types.scm 55 */
			{	/* Eval/evaluate_types.scm 55 */
				BgL_ev_globalz00_bglt BgL_new1052z00_4391;

				BgL_new1052z00_4391 =
					((BgL_ev_globalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_globalz00_bgl))));
				{	/* Eval/evaluate_types.scm 55 */
					long BgL_arg1468z00_4392;

					{	/* Eval/evaluate_types.scm 55 */
						long BgL_res2365z00_4393;

						BgL_res2365z00_4393 =
							BGL_CLASS_INDEX(BGl_ev_globalz00zz__evaluate_typesz00);
						BgL_arg1468z00_4392 = BgL_res2365z00_4393;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1052z00_4391), BgL_arg1468z00_4392);
				}
				return BgL_new1052z00_4391;
			}
		}

	}



/* &lambda1465 */
	BgL_ev_globalz00_bglt BGl_z62lambda1465z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3944, obj_t BgL_loc1049z00_3945, obj_t BgL_name1050z00_3946,
		obj_t BgL_mod1051z00_3947)
	{
		{	/* Eval/evaluate_types.scm 55 */
			{	/* Eval/evaluate_types.scm 55 */
				BgL_ev_globalz00_bglt BgL_new1200z00_4395;

				{	/* Eval/evaluate_types.scm 55 */
					BgL_ev_globalz00_bglt BgL_new1199z00_4396;

					BgL_new1199z00_4396 =
						((BgL_ev_globalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ev_globalz00_bgl))));
					{	/* Eval/evaluate_types.scm 55 */
						long BgL_arg1466z00_4397;

						{	/* Eval/evaluate_types.scm 55 */
							long BgL_res2364z00_4398;

							BgL_res2364z00_4398 =
								BGL_CLASS_INDEX(BGl_ev_globalz00zz__evaluate_typesz00);
							BgL_arg1466z00_4397 = BgL_res2364z00_4398;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1199z00_4396), BgL_arg1466z00_4397);
					}
					BgL_new1200z00_4395 = BgL_new1199z00_4396;
				}
				((((BgL_ev_globalz00_bglt) COBJECT(BgL_new1200z00_4395))->BgL_locz00) =
					((obj_t) BgL_loc1049z00_3945), BUNSPEC);
				((((BgL_ev_globalz00_bglt) COBJECT(BgL_new1200z00_4395))->BgL_namez00) =
					((obj_t) ((obj_t) BgL_name1050z00_3946)), BUNSPEC);
				((((BgL_ev_globalz00_bglt) COBJECT(BgL_new1200z00_4395))->BgL_modz00) =
					((obj_t) BgL_mod1051z00_3947), BUNSPEC);
				return BgL_new1200z00_4395;
			}
		}

	}



/* &lambda1486 */
	obj_t BGl_z62lambda1486z62zz__evaluate_typesz00(obj_t BgL_envz00_3948,
		obj_t BgL_oz00_3949, obj_t BgL_vz00_3950)
	{
		{	/* Eval/evaluate_types.scm 55 */
			return
				((((BgL_ev_globalz00_bglt) COBJECT(
							((BgL_ev_globalz00_bglt) BgL_oz00_3949)))->BgL_modz00) =
				((obj_t) BgL_vz00_3950), BUNSPEC);
		}

	}



/* &lambda1485 */
	obj_t BGl_z62lambda1485z62zz__evaluate_typesz00(obj_t BgL_envz00_3951,
		obj_t BgL_oz00_3952)
	{
		{	/* Eval/evaluate_types.scm 55 */
			return
				(((BgL_ev_globalz00_bglt) COBJECT(
						((BgL_ev_globalz00_bglt) BgL_oz00_3952)))->BgL_modz00);
		}

	}



/* &lambda1479 */
	obj_t BGl_z62lambda1479z62zz__evaluate_typesz00(obj_t BgL_envz00_3953,
		obj_t BgL_oz00_3954, obj_t BgL_vz00_3955)
	{
		{	/* Eval/evaluate_types.scm 55 */
			return
				((((BgL_ev_globalz00_bglt) COBJECT(
							((BgL_ev_globalz00_bglt) BgL_oz00_3954)))->BgL_namez00) = ((obj_t)
					((obj_t) BgL_vz00_3955)), BUNSPEC);
		}

	}



/* &lambda1478 */
	obj_t BGl_z62lambda1478z62zz__evaluate_typesz00(obj_t BgL_envz00_3956,
		obj_t BgL_oz00_3957)
	{
		{	/* Eval/evaluate_types.scm 55 */
			return
				(((BgL_ev_globalz00_bglt) COBJECT(
						((BgL_ev_globalz00_bglt) BgL_oz00_3957)))->BgL_namez00);
		}

	}



/* &lambda1474 */
	obj_t BGl_z62lambda1474z62zz__evaluate_typesz00(obj_t BgL_envz00_3958,
		obj_t BgL_oz00_3959, obj_t BgL_vz00_3960)
	{
		{	/* Eval/evaluate_types.scm 55 */
			return
				((((BgL_ev_globalz00_bglt) COBJECT(
							((BgL_ev_globalz00_bglt) BgL_oz00_3959)))->BgL_locz00) =
				((obj_t) BgL_vz00_3960), BUNSPEC);
		}

	}



/* &lambda1473 */
	obj_t BGl_z62lambda1473z62zz__evaluate_typesz00(obj_t BgL_envz00_3961,
		obj_t BgL_oz00_3962)
	{
		{	/* Eval/evaluate_types.scm 55 */
			return
				(((BgL_ev_globalz00_bglt) COBJECT(
						((BgL_ev_globalz00_bglt) BgL_oz00_3962)))->BgL_locz00);
		}

	}



/* &<@anonymous:1440> */
	obj_t BGl_z62zc3z04anonymousza31440ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3963, obj_t BgL_new1047z00_3964)
	{
		{	/* Eval/evaluate_types.scm 51 */
			{
				BgL_ev_varz00_bglt BgL_auxz00_5693;

				((((BgL_ev_varz00_bglt) COBJECT(
								((BgL_ev_varz00_bglt) BgL_new1047z00_3964)))->BgL_namez00) =
					((obj_t) BGl_symbol2791z00zz__evaluate_typesz00), BUNSPEC);
				((((BgL_ev_varz00_bglt) COBJECT(((BgL_ev_varz00_bglt)
									BgL_new1047z00_3964)))->BgL_effz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_ev_varz00_bglt) COBJECT(((BgL_ev_varz00_bglt)
									BgL_new1047z00_3964)))->BgL_typez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_5693 = ((BgL_ev_varz00_bglt) BgL_new1047z00_3964);
				return ((obj_t) BgL_auxz00_5693);
			}
		}

	}



/* &lambda1438 */
	BgL_ev_varz00_bglt BGl_z62lambda1438z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3965)
	{
		{	/* Eval/evaluate_types.scm 51 */
			{	/* Eval/evaluate_types.scm 51 */
				BgL_ev_varz00_bglt BgL_new1046z00_4407;

				BgL_new1046z00_4407 =
					((BgL_ev_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_varz00_bgl))));
				{	/* Eval/evaluate_types.scm 51 */
					long BgL_arg1439z00_4408;

					{	/* Eval/evaluate_types.scm 51 */
						long BgL_res2363z00_4409;

						BgL_res2363z00_4409 =
							BGL_CLASS_INDEX(BGl_ev_varz00zz__evaluate_typesz00);
						BgL_arg1439z00_4408 = BgL_res2363z00_4409;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1046z00_4407), BgL_arg1439z00_4408);
				}
				return BgL_new1046z00_4407;
			}
		}

	}



/* &lambda1436 */
	BgL_ev_varz00_bglt BGl_z62lambda1436z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3966, obj_t BgL_name1043z00_3967, obj_t BgL_eff1044z00_3968,
		obj_t BgL_type1045z00_3969)
	{
		{	/* Eval/evaluate_types.scm 51 */
			{	/* Eval/evaluate_types.scm 51 */
				BgL_ev_varz00_bglt BgL_new1198z00_4411;

				{	/* Eval/evaluate_types.scm 51 */
					BgL_ev_varz00_bglt BgL_new1197z00_4412;

					BgL_new1197z00_4412 =
						((BgL_ev_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ev_varz00_bgl))));
					{	/* Eval/evaluate_types.scm 51 */
						long BgL_arg1437z00_4413;

						{	/* Eval/evaluate_types.scm 51 */
							long BgL_res2362z00_4414;

							BgL_res2362z00_4414 =
								BGL_CLASS_INDEX(BGl_ev_varz00zz__evaluate_typesz00);
							BgL_arg1437z00_4413 = BgL_res2362z00_4414;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1197z00_4412), BgL_arg1437z00_4413);
					}
					BgL_new1198z00_4411 = BgL_new1197z00_4412;
				}
				((((BgL_ev_varz00_bglt) COBJECT(BgL_new1198z00_4411))->BgL_namez00) =
					((obj_t) ((obj_t) BgL_name1043z00_3967)), BUNSPEC);
				((((BgL_ev_varz00_bglt) COBJECT(BgL_new1198z00_4411))->BgL_effz00) =
					((obj_t) BgL_eff1044z00_3968), BUNSPEC);
				((((BgL_ev_varz00_bglt) COBJECT(BgL_new1198z00_4411))->BgL_typez00) =
					((obj_t) BgL_type1045z00_3969), BUNSPEC);
				return BgL_new1198z00_4411;
			}
		}

	}



/* &lambda1459 */
	obj_t BGl_z62lambda1459z62zz__evaluate_typesz00(obj_t BgL_envz00_3970,
		obj_t BgL_oz00_3971, obj_t BgL_vz00_3972)
	{
		{	/* Eval/evaluate_types.scm 51 */
			return
				((((BgL_ev_varz00_bglt) COBJECT(
							((BgL_ev_varz00_bglt) BgL_oz00_3971)))->BgL_typez00) =
				((obj_t) BgL_vz00_3972), BUNSPEC);
		}

	}



/* &lambda1458 */
	obj_t BGl_z62lambda1458z62zz__evaluate_typesz00(obj_t BgL_envz00_3973,
		obj_t BgL_oz00_3974)
	{
		{	/* Eval/evaluate_types.scm 51 */
			return
				(((BgL_ev_varz00_bglt) COBJECT(
						((BgL_ev_varz00_bglt) BgL_oz00_3974)))->BgL_typez00);
		}

	}



/* &<@anonymous:1454> */
	obj_t BGl_z62zc3z04anonymousza31454ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3975)
	{
		{	/* Eval/evaluate_types.scm 51 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1453 */
	obj_t BGl_z62lambda1453z62zz__evaluate_typesz00(obj_t BgL_envz00_3976,
		obj_t BgL_oz00_3977, obj_t BgL_vz00_3978)
	{
		{	/* Eval/evaluate_types.scm 51 */
			return
				((((BgL_ev_varz00_bglt) COBJECT(
							((BgL_ev_varz00_bglt) BgL_oz00_3977)))->BgL_effz00) =
				((obj_t) BgL_vz00_3978), BUNSPEC);
		}

	}



/* &lambda1452 */
	obj_t BGl_z62lambda1452z62zz__evaluate_typesz00(obj_t BgL_envz00_3979,
		obj_t BgL_oz00_3980)
	{
		{	/* Eval/evaluate_types.scm 51 */
			return
				(((BgL_ev_varz00_bglt) COBJECT(
						((BgL_ev_varz00_bglt) BgL_oz00_3980)))->BgL_effz00);
		}

	}



/* &lambda1445 */
	obj_t BGl_z62lambda1445z62zz__evaluate_typesz00(obj_t BgL_envz00_3981,
		obj_t BgL_oz00_3982, obj_t BgL_vz00_3983)
	{
		{	/* Eval/evaluate_types.scm 51 */
			return
				((((BgL_ev_varz00_bglt) COBJECT(
							((BgL_ev_varz00_bglt) BgL_oz00_3982)))->BgL_namez00) = ((obj_t)
					((obj_t) BgL_vz00_3983)), BUNSPEC);
		}

	}



/* &lambda1444 */
	obj_t BGl_z62lambda1444z62zz__evaluate_typesz00(obj_t BgL_envz00_3984,
		obj_t BgL_oz00_3985)
	{
		{	/* Eval/evaluate_types.scm 51 */
			return
				(((BgL_ev_varz00_bglt) COBJECT(
						((BgL_ev_varz00_bglt) BgL_oz00_3985)))->BgL_namez00);
		}

	}



/* &<@anonymous:1430> */
	obj_t BGl_z62zc3z04anonymousza31430ze3ze5zz__evaluate_typesz00(obj_t
		BgL_envz00_3986, obj_t BgL_new1041z00_3987)
	{
		{	/* Eval/evaluate_types.scm 49 */
			return ((obj_t) ((BgL_ev_exprz00_bglt) BgL_new1041z00_3987));
		}

	}



/* &lambda1428 */
	BgL_ev_exprz00_bglt BGl_z62lambda1428z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3988)
	{
		{	/* Eval/evaluate_types.scm 49 */
			{	/* Eval/evaluate_types.scm 49 */
				BgL_ev_exprz00_bglt BgL_new1040z00_4423;

				BgL_new1040z00_4423 =
					((BgL_ev_exprz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ev_exprz00_bgl))));
				{	/* Eval/evaluate_types.scm 49 */
					long BgL_arg1429z00_4424;

					{	/* Eval/evaluate_types.scm 49 */
						long BgL_res2361z00_4425;

						BgL_res2361z00_4425 =
							BGL_CLASS_INDEX(BGl_ev_exprz00zz__evaluate_typesz00);
						BgL_arg1429z00_4424 = BgL_res2361z00_4425;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1040z00_4423), BgL_arg1429z00_4424);
				}
				return BgL_new1040z00_4423;
			}
		}

	}



/* &lambda1426 */
	BgL_ev_exprz00_bglt BGl_z62lambda1426z62zz__evaluate_typesz00(obj_t
		BgL_envz00_3989)
	{
		{	/* Eval/evaluate_types.scm 49 */
			{	/* Eval/evaluate_types.scm 49 */
				BgL_ev_exprz00_bglt BgL_new1196z00_4426;

				{	/* Eval/evaluate_types.scm 49 */
					BgL_ev_exprz00_bglt BgL_new1195z00_4427;

					BgL_new1195z00_4427 =
						((BgL_ev_exprz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ev_exprz00_bgl))));
					{	/* Eval/evaluate_types.scm 49 */
						long BgL_arg1427z00_4428;

						{	/* Eval/evaluate_types.scm 49 */
							long BgL_res2360z00_4429;

							BgL_res2360z00_4429 =
								BGL_CLASS_INDEX(BGl_ev_exprz00zz__evaluate_typesz00);
							BgL_arg1427z00_4428 = BgL_res2360z00_4429;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1195z00_4427), BgL_arg1427z00_4428);
					}
					BgL_new1196z00_4426 = BgL_new1195z00_4427;
				}
				return BgL_new1196z00_4426;
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__evaluate_typesz00()
	{
		{	/* Eval/evaluate_types.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__evaluate_typesz00()
	{
		{	/* Eval/evaluate_types.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__evaluate_typesz00()
	{
		{	/* Eval/evaluate_types.scm 15 */
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 121046386),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 251315035),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 443936798),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 439352636),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long)
					228151379),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
			return BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					86988972), BSTRING_TO_STRING(BGl_string2468z00zz__evaluate_typesz00));
		}

	}

#ifdef __cplusplus
}
#endif
