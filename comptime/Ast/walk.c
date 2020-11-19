/*===========================================================================*/
/*   (Ast/walk.scm)                                                          */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/walk.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_typez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		obj_t BgL_siza7eza7;
		obj_t BgL_classz00;
		obj_t BgL_coercezd2tozd2;
		obj_t BgL_parentsz00;
		bool_t BgL_initzf3zf3;
		bool_t BgL_magiczf3zf3;
		obj_t BgL_z42z42;
		obj_t BgL_aliasz00;
		obj_t BgL_pointedzd2tozd2byz00;
		obj_t BgL_tvectorz00;
		obj_t BgL_locationz00;
		obj_t BgL_importzd2locationzd2;
		int BgL_occurrencez00;
	}              *BgL_typez00_bglt;

	typedef struct BgL_valuez00_bgl
	{
		header_t header;
		obj_t widening;
	}               *BgL_valuez00_bglt;

	typedef struct BgL_variablez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
		long BgL_occurrencewz00;
		bool_t BgL_userzf3zf3;
	}                  *BgL_variablez00_bglt;

	typedef struct BgL_sfunz00_bgl
	{
		header_t header;
		obj_t widening;
		long BgL_arityz00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_predicatezd2ofzd2;
		obj_t BgL_stackzd2allocatorzd2;
		bool_t BgL_topzf3zf3;
		obj_t BgL_thezd2closurezd2;
		obj_t BgL_effectz00;
		obj_t BgL_failsafez00;
		obj_t BgL_argszd2noescapezd2;
		obj_t BgL_propertyz00;
		obj_t BgL_argsz00;
		obj_t BgL_argszd2namezd2;
		obj_t BgL_bodyz00;
		obj_t BgL_classz00;
		obj_t BgL_dssslzd2keywordszd2;
		obj_t BgL_locz00;
		obj_t BgL_optionalsz00;
		obj_t BgL_keysz00;
		obj_t BgL_thezd2closurezd2globalz00;
		obj_t BgL_strengthz00;
		obj_t BgL_stackablez00;
	}              *BgL_sfunz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

	typedef struct BgL_sequencez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_nodesz00;
		bool_t BgL_unsafez00;
		obj_t BgL_metaz00;
	}                  *BgL_sequencez00_bglt;

	typedef struct BgL_appz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		struct BgL_varz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
		obj_t BgL_stackablez00;
	}             *BgL_appz00_bglt;

	typedef struct BgL_appzd2lyzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_funz00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}                  *BgL_appzd2lyzd2_bglt;

	typedef struct BgL_funcallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
		obj_t BgL_strengthz00;
		obj_t BgL_functionsz00;
	}                 *BgL_funcallz00_bglt;

	typedef struct BgL_externz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
	}                *BgL_externz00_bglt;

	typedef struct BgL_castz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}              *BgL_castz00_bglt;

	typedef struct BgL_setqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}              *BgL_setqz00_bglt;

	typedef struct BgL_conditionalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		struct BgL_nodez00_bgl *BgL_testz00;
		struct BgL_nodez00_bgl *BgL_truez00;
		struct BgL_nodez00_bgl *BgL_falsez00;
	}                     *BgL_conditionalz00_bglt;

	typedef struct BgL_failz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_procz00;
		struct BgL_nodez00_bgl *BgL_msgz00;
		struct BgL_nodez00_bgl *BgL_objz00;
	}              *BgL_failz00_bglt;

	typedef struct BgL_switchz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		struct BgL_nodez00_bgl *BgL_testz00;
		obj_t BgL_clausesz00;
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}                *BgL_switchz00_bglt;

	typedef struct BgL_letzd2funzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_localsz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}                   *BgL_letzd2funzd2_bglt;

	typedef struct BgL_letzd2varzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_bindingsz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
		bool_t BgL_removablezf3zf3;
	}                   *BgL_letzd2varzd2_bglt;

	typedef struct BgL_setzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}                       *BgL_setzd2exzd2itz00_bglt;

	typedef struct BgL_jumpzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_exitz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                        *BgL_jumpzd2exzd2itz00_bglt;

	typedef struct BgL_retblockz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}                  *BgL_retblockz00_bglt;

	typedef struct BgL_returnz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_retblockz00_bgl *BgL_blockz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                *BgL_returnz00_bglt;

	typedef struct BgL_makezd2boxzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
		obj_t BgL_stackablez00;
	}                    *BgL_makezd2boxzd2_bglt;

	typedef struct BgL_boxzd2refzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                   *BgL_boxzd2refzd2_bglt;

	typedef struct BgL_boxzd2setz12zc0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                      *BgL_boxzd2setz12zc0_bglt;

	typedef struct BgL_syncz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_mutexz00;
		struct BgL_nodez00_bgl *BgL_prelockz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}              *BgL_syncz00_bglt;


	static obj_t BGl_z62walk1za2zd2app1718z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk0za2zd2return1981z12zzast_walkz00(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62walk1z12zd2appzd2ly1751z70zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza33367ze3ze70z60zzast_walkz00(obj_t, obj_t);
	static obj_t BGl_z62walk2za2zd2retblock1961z12zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk0z12zd2cast1821za2zzast_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk3zd2setzd2exzd2it1907zb0zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza32566ze3ze70z60zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk2z12zd2app1729za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk1zd2boxzd2ref2023z62zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk2zd2letzd2fun2122z62zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza33224ze3ze70z60zzast_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk0z12zd2letzd2fun2134z70zzast_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk1za2zd2appzd2ly1743zc0zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk0zd2funcall1757zb0zzast_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk0za2zd2boxzd2setz122053zd2zzast_walkz00(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62walk2z12zd2switch2114za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	static BgL_nodez00_bglt BGl_z62walk3z12zd2funcall1779za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk1zd2retblock1951zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62walk3z12zd2setq1851za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza32325ze3ze70z60zzast_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk1zd2letzd2var2144z62zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62walk0z12zd2setq1845za2zzast_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk1za2zd2conditional1863z12zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_z62walk2za2zd2switch2106z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk0zd2node1658zb0zzast_walkz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_zc3z04anonymousza32343ze3ze70z60zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza32317ze3ze70z60zzast_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62walk2z12zd2conditional1873za2zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk2zd2sequence1687zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_objectzd2initzd2zzast_walkz00();
	static obj_t BGl_z62walk1zd2appzd2ly1735z62zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk0za2zd2funcall1765z12zzast_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk1za2zd2boxzd2ref2031zc0zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk0zd2conditional1853zb0zzast_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk2zd2fail1881zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_z62zc3z04anonymousza32211ze3ze5zzast_walkz00(obj_t);
	static obj_t BGl_z62walk0zd2sync2070zb0zzast_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza33252ze3ze70z60zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza32335ze3ze70z60zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk3z12zd2sequence1706za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk2za2zd2letzd2fun2130zc0zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk1z12zd2extern1799za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk1za2zd2sequence1693z12zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza32263ze3ze70z60zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk3za2zd2makezd2box2011zc0zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62walk3z12zd2jumpzd2exzd2it1947za2zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk1za2zd2letzd2var2152zc0zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk2za2zd2app1720z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk1z12zd2return1991za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62walk0z12zd2makezd2box2013z70zzast_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk0za21636zc0zzast_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk0zd2cast1805zb0zzast_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk3za2zd2node1673z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzast_walkz00(obj_t, obj_t);
	static obj_t BGl_z62walk3zd2jumpzd2exzd2it1931zb0zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_walkz00();
	static BgL_nodez00_bglt BGl_z62walk3z12zd2app1731za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk1za2zd2extern1791z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62walk2z12zd2retblock1969za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_z62zc3z04anonymousza32215ze3ze5zzast_walkz00(obj_t);
	static obj_t BGl_z62walk1za2zd2return1983z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk0za2zd2node1666z12zzast_walkz00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk2z12zd2appzd2ly1753z70zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk3za2zd2sync2084z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk3za2zd2boxzd2setz122059zd2zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk0za2zd2sync2078z12zzast_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk2zd2boxzd2ref2025z62zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk0za2zd2setzd2exzd2it1909z12zzast_walkz00(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62walk0z12zd2boxzd2ref2037z70zzast_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk3zd2letzd2fun2124z62zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk0zd2setq1829zb0zzast_walkz00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62walk0z12zd2boxzd2setz122061z62zzast_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk2za2zd2appzd2ly1745zc0zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk1zd2funcall1759zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk2za2zd2fail1889z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk3z12zd2switch2116za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk3za2zd2cast1819z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk1za21638zc0zzast_walkz00(obj_t, obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk1z12zd2letzd2fun2136z70zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk1zd2node1660zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk1za2zd2jumpzd2exzd2it1935z12zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62walk2z12zd2setzd2exzd2it1921za2zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk2z12zd2node1679za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32219ze3ze5zzast_walkz00(obj_t);
	static obj_t BGl_z62walk1zd2extern1783zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk2zd2letzd2var2146z62zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk2zd2retblock1953zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk0z12zd2letzd2var2158z70zzast_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk3zd2fail1883zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk1zd2return1975zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_z62walk0za2zd2cast1813z12zzast_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk1zd2sync2072zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk2zd2switch2098zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk3za2zd2switch2108z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza33497ze3ze70z60zzast_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk1za2zd2retblock1959z12zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza32535ze3ze70z60zzast_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk2z12zd2sync2090za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk2zd2setzd2exzd2it1905zb0zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk3za2zd2app1722z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza32249ze3ze70z60zzast_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk3zd2sequence1689zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_z62walk3za2zd2setq1843z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk1zd2cast1807zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk1za2zd2funcall1767z12zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62walk3z12zd2makezd2box2019z70zzast_walkz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk2za2zd2boxzd2ref2033zc0zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk0zd2boxzd2setz122045z70zzast_walkz00(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62walk1z12zd2fail1895za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk3zd2switch2100zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk0za2zd2setq1837z12zzast_walkz00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk2z12zd2cast1825za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32183ze3ze5zzast_walkz00(obj_t);
	static obj_t BGl_z62walk2za21640zc0zzast_walkz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3z04anonymousza33508ze3ze70z60zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk3za2zd2letzd2fun2132zc0zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk2za2zd2conditional1865z12zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk2z12zd2return1993za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk01626z62zzast_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk0z62zzast_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk1z62zzast_walkz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk2z62zzast_walkz00(obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk3z62zzast_walkz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk4z62zzast_walkz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk2za2zd2letzd2var2154zc0zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_walkz00();
	static obj_t BGl_z62walk1zd2conditional1855zb0zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62walk3z12zd2conditional1875za2zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk2za2zd2extern1793z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk2za2zd2return1985z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk1zd2setq1831zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62walk3z12zd2appzd2ly1755z70zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_writezd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	static obj_t BGl_z62walk2zd2node1662zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk2z12zd2setq1849za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62walk3z12zd2boxzd2setz122068z62zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32187ze3ze5zzast_walkz00(obj_t);
	static BgL_nodez00_bglt
		BGl_z62walk0z12zd2jumpzd2exzd2it1941za2zzast_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk11628z62zzast_walkz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk3zd2boxzd2ref2027z62zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk3za21642zc0zzast_walkz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk2zd2sync2074zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk2z12zd2sequence1704za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk0zd2app1708zb0zzast_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk2za2zd2makezd2box2009zc0zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk3za2zd2appzd2ly1747zc0zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk0za2zd2sequence1691z12zzast_walkz00(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62walk1z12zd2boxzd2ref2039z70zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk2zd2jumpzd2exzd2it1929zb0zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk2zd2funcall1761zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk0z12zd2funcall1773za2zzast_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk0zd2appzd2ly1733z62zzast_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk3za2zd2setzd2exzd2it1915z12zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk2z12zd2letzd2fun2138z70zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk3zd2letzd2var2148z62zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_z62walk2zd2cast1809zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk3zd2appzd2ly1739z62zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk3zd2retblock1955zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk1z12zd2retblock1967za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza32242ze3ze70z60zzast_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk1z12zd2letzd2var2160z70zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk21630z62zzast_walkz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk2za2zd2boxzd2setz122057zd2zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk4za21644zc0zzast_walkz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk2za2zd2jumpzd2exzd2it1937z12zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62walk1z12zd2setzd2exzd2it1919za2zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_z62walk2za2zd2node1670z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_returnz00zzast_nodez00;
	static obj_t BGl_zc3z04anonymousza33403ze3ze70z60zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk2za2zd2funcall1769z12zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk0z12z70zzast_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk2zd2setq1833zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk3za2zd2boxzd2ref2035zc0zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk1zd2boxzd2setz122047z70zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk0za2zc0zzast_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk3zd2node1664zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk3z12zd2return1995za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_walkz00 = BUNSPEC;
	static BgL_nodez00_bglt BGl_z62walk1z12z70zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk2za2zd2sync2082z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk1za2zc0zzast_walkz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk31632z62zzast_walkz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_z62walk1zd2app1710zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62walk2z12z70zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk3zd2sync2076zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62walk0z12zd2conditional1869za2zzast_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk2za2zc0zzast_walkz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk3za2zd2letzd2var2156zc0zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk0za2zd2retblock1957z12zzast_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk3za2zd2extern1795z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk3za2zd2return1987z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk3z12z70zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk1zd2setzd2exzd2it1903zb0zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk3za2zc0zzast_walkz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzast_walkz00();
	static obj_t BGl_z62walk1za2zd2fail1887z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk3za2zd2sequence1697z12zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk0zd2extern1781zb0zzast_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk2za2zd2cast1817z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk4z12z70zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk0zd2return1973zb0zzast_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk4za2zc0zzast_walkz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk1z12zd2node1677za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62walk2z12zd2makezd2box2017z70zzast_walkz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk1zd2switch2096zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzast_walkz00();
	static obj_t BGl_z62walk3zd2extern1787zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk3zd2cast1811zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk3za2zd2conditional1867z12zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk3zd2return1979zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk41634z62zzast_walkz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk0z121646z70zzast_walkz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_z62walk2zd2conditional1857zb0zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk1z12zd2sync2088za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32203ze3ze5zzast_walkz00(obj_t);
	static obj_t BGl_z62walk3zd2funcall1763zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk3z12zd2fail1899za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk1z12zd2funcall1775za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk2z12zd2boxzd2ref2041z70zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza33235ze3ze70z60zzast_walkz00(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62walk1z12zd2jumpzd2exzd2it1943za2zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk0zd2letzd2fun2118z62zzast_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk0zd2makezd2box1997z62zzast_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk2za2zd2setq1841z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk3z12zd2letzd2fun2140z70zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk3zd2setq1835zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza33486ze3ze70z60zzast_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk0z12zd2fail1893za2zzast_walkz00(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62walk2z12zd2boxzd2setz122066z62zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk0z12zd2switch2110za2zzast_walkz00(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk1z12zd2cast1823za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk2zd2makezd2box2001z62zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza33415ze3ze70z60zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk2zd2app1712zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk2z12zd2letzd2var2162z70zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza33388ze3ze70z60zzast_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32223ze3ze5zzast_walkz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32207ze3ze5zzast_walkz00(obj_t);
	static obj_t BGl_z62walk1z121648z70zzast_walkz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza32452ze3ze70z60zzast_walkz00(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62walk1z12zd2sequence1702za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk1zd2jumpzd2exzd2it1927zb0zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk1za2zd2makezd2box2007zc0zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk0zd2sequence1683zb0zzast_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk2za2zd2setzd2exzd2it1913z12zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk0za2zd2switch2102z12zzast_walkz00(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62walk2z12zd2extern1801za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk0za2zd2letzd2fun2126zc0zzast_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3z04anonymousza32444ze3ze70z60zzast_walkz00(obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza32256ze3ze70z60zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk1z12zd2setq1847za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk2zd2boxzd2setz122049z70zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk3za2zd2retblock1963z12zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_z62walk3za2zd2funcall1771z12zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza33263ze3ze70z60zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk0z12zd2app1725za2zzast_walkz00(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk0z12zd2retblock1965za2zzast_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk3za2zd2jumpzd2exzd2it1939z12zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32227ze3ze5zzast_walkz00(obj_t);
	static obj_t BGl_zc3z04anonymousza32462ze3ze70z60zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62walk0z12zd2setzd2exzd2it1917za2zzast_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk1za2zd2boxzd2setz122055zd2zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32171ze3ze5zzast_walkz00(obj_t);
	static obj_t BGl_z62walk2z121651z70zzast_walkz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_walk0z00zzast_walkz00(BgL_nodez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_walk1z00zzast_walkz00(BgL_nodez00_bglt, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_walk2z00zzast_walkz00(BgL_nodez00_bglt, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_walk3z00zzast_walkz00(BgL_nodez00_bglt, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_walk4z00zzast_walkz00(BgL_nodez00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk2zd2appzd2ly1737z62zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_zc3z04anonymousza32544ze3ze70z60zzast_walkz00(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62walk0z12zd2appzd2ly1749z70zzast_walkz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__pp_circlez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_z62walk3zd2app1714zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk0za2zd2conditional1861z12zzast_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3z04anonymousza32472ze3ze70z60zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk0zd2fail1877zb0zzast_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32191ze3ze5zzast_walkz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32175ze3ze5zzast_walkz00(obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62walk1z12zd2conditional1871za2zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk0zd2retblock1949zb0zzast_walkz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_z62walk0zd2boxzd2ref2021z62zzast_walkz00(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62walk2z12zd2funcall1777za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk3z12zd2boxzd2ref2043z70zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk1zd2letzd2fun2120z62zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk1za2zd2node1668z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk0za2zd2appzd2ly1741zc0zzast_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_walkz00();
	static obj_t BGl_z62walk0zd2setzd2exzd2it1901zb0zzast_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk1zd2makezd2box1999z62zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk0za2zd2app1716z12zzast_walkz00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk1z12zd2switch2112za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk2za2zd2sequence1695z12zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_walkz00();
	static obj_t BGl_z62walk3z121653z70zzast_walkz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t
		BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_walk0z12z12zzast_walkz00(BgL_nodez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_walk0za2za2zzast_walkz00(BgL_nodez00_bglt, obj_t);
	static obj_t BGl_z62walk3zd2conditional1859zb0zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_retblockz00zzast_nodez00;
	static obj_t BGl_z62walk3zd2makezd2box2003z62zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62walk1z12zd2makezd2box2015z70zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_walk1z12z12zzast_walkz00(BgL_nodez00_bglt, obj_t, obj_t);
	static obj_t BGl_z62walk0zd2letzd2var2142z62zzast_walkz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_walk1za2za2zzast_walkz00(BgL_nodez00_bglt, obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62walk3z12zd2letzd2var2164z70zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk1za2zd2sync2080z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62walk1z12zd2app1727za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32195ze3ze5zzast_walkz00(obj_t);
	static obj_t BGl_z62walk1za2zd2switch2104z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32179ze3ze5zzast_walkz00(obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_walk2z12z12zzast_walkz00(BgL_nodez00_bglt, obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk3z12zd2extern1803za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62walk2z12zd2jumpzd2exzd2it1945za2zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk0za2zd2boxzd2ref2029zc0zzast_walkz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_walk2za2za2zzast_walkz00(BgL_nodez00_bglt, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk1zd2sequence1685zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk3za2zd2fail1891z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_walk3z12z12zzast_walkz00(BgL_nodez00_bglt, obj_t, obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk3z12zd2retblock1971za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_walk3za2za2zzast_walkz00(BgL_nodez00_bglt, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk1za2zd2letzd2fun2128zc0zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk3z12zd2node1681za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk0za2zd2fail1885z12zzast_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk0zd2switch2094zb0zzast_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk1za2zd2cast1815z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_walk4z12z12zzast_walkz00(BgL_nodez00_bglt, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk2zd2extern1785zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_walk4za2za2zzast_walkz00(BgL_nodez00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	static BgL_nodez00_bglt BGl_z62walk0z12zd2node1675za2zzast_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk2zd2return1977zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk4z121655z70zzast_walkz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza33519ze3ze70z60zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk3z12zd2sync2092za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk0za2zd2letzd2var2150zc0zzast_walkz00(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62walk0z12zd2extern1797za2zzast_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk3zd2boxzd2setz122051z70zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62walk1z12zd2boxzd2setz122064z62zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62walk0z12zd2return1989za2zzast_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk0zd2jumpzd2exzd2it1925zb0zzast_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32199ze3ze5zzast_walkz00(obj_t);
	static obj_t BGl_zc3z04anonymousza32556ze3ze70z60zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk0z12zd2sync2086za2zzast_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk1zd2fail1879zb0zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk1za2zd2setzd2exzd2it1911z12zzast_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62walk0z12zd2sequence1700za2zzast_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62walk0za2zd2makezd2box2005zc0zzast_walkz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static BgL_nodez00_bglt BGl_z62walk2z12zd2fail1897za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62walk3z12zd2setzd2exzd2it1923za2zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk0za2zd2extern1789z12zzast_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62walk1za2zd2setq1839z12zzast_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62walk3z12zd2cast1827za2zzast_walkz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62walk0za2zd2jumpzd2exzd2it1933z12zzast_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4000z00zzast_walkz00,
		BgL_bgl_za762walk1za7a2za7d2fu4284za7,
		BGl_z62walk1za2zd2funcall1767z12zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4001z00zzast_walkz00,
		BgL_bgl_za762walk2za7a2za7d2fu4285za7,
		BGl_z62walk2za2zd2funcall1769z12zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4002z00zzast_walkz00,
		BgL_bgl_za762walk3za7a2za7d2fu4286za7,
		BGl_z62walk3za2zd2funcall1771z12zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4003z00zzast_walkz00,
		BgL_bgl_za762walk0za712za7d2fu4287za7,
		BGl_z62walk0z12zd2funcall1773za2zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4004z00zzast_walkz00,
		BgL_bgl_za762walk1za712za7d2fu4288za7,
		BGl_z62walk1z12zd2funcall1775za2zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4005z00zzast_walkz00,
		BgL_bgl_za762walk2za712za7d2fu4289za7,
		BGl_z62walk2z12zd2funcall1777za2zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4006z00zzast_walkz00,
		BgL_bgl_za762walk3za712za7d2fu4290za7,
		BGl_z62walk3z12zd2funcall1779za2zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4007z00zzast_walkz00,
		BgL_bgl_za762walk0za7d2exter4291z00,
		BGl_z62walk0zd2extern1781zb0zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4008z00zzast_walkz00,
		BgL_bgl_za762walk1za7d2exter4292z00,
		BGl_z62walk1zd2extern1783zb0zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4009z00zzast_walkz00,
		BgL_bgl_za762walk2za7d2exter4293z00,
		BGl_z62walk2zd2extern1785zb0zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4010z00zzast_walkz00,
		BgL_bgl_za762walk3za7d2exter4294z00,
		BGl_z62walk3zd2extern1787zb0zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4011z00zzast_walkz00,
		BgL_bgl_za762walk0za7a2za7d2ex4295za7,
		BGl_z62walk0za2zd2extern1789z12zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4012z00zzast_walkz00,
		BgL_bgl_za762walk1za7a2za7d2ex4296za7,
		BGl_z62walk1za2zd2extern1791z12zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4013z00zzast_walkz00,
		BgL_bgl_za762walk2za7a2za7d2ex4297za7,
		BGl_z62walk2za2zd2extern1793z12zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4014z00zzast_walkz00,
		BgL_bgl_za762walk3za7a2za7d2ex4298za7,
		BGl_z62walk3za2zd2extern1795z12zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4015z00zzast_walkz00,
		BgL_bgl_za762walk0za712za7d2ex4299za7,
		BGl_z62walk0z12zd2extern1797za2zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4016z00zzast_walkz00,
		BgL_bgl_za762walk1za712za7d2ex4300za7,
		BGl_z62walk1z12zd2extern1799za2zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4017z00zzast_walkz00,
		BgL_bgl_za762walk2za712za7d2ex4301za7,
		BGl_z62walk2z12zd2extern1801za2zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4018z00zzast_walkz00,
		BgL_bgl_za762walk3za712za7d2ex4302za7,
		BGl_z62walk3z12zd2extern1803za2zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4019z00zzast_walkz00,
		BgL_bgl_za762walk0za7d2cast14303z00,
		BGl_z62walk0zd2cast1805zb0zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_walk2za2zd2envz70zzast_walkz00,
		BgL_bgl_za762walk2za7a2za7c0za7za74304za7, BGl_z62walk2za2zc0zzast_walkz00,
		0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4020z00zzast_walkz00,
		BgL_bgl_za762walk1za7d2cast14305z00,
		BGl_z62walk1zd2cast1807zb0zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4021z00zzast_walkz00,
		BgL_bgl_za762walk2za7d2cast14306z00,
		BGl_z62walk2zd2cast1809zb0zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4022z00zzast_walkz00,
		BgL_bgl_za762walk3za7d2cast14307z00,
		BGl_z62walk3zd2cast1811zb0zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4023z00zzast_walkz00,
		BgL_bgl_za762walk0za7a2za7d2ca4308za7,
		BGl_z62walk0za2zd2cast1813z12zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4024z00zzast_walkz00,
		BgL_bgl_za762walk1za7a2za7d2ca4309za7,
		BGl_z62walk1za2zd2cast1815z12zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4025z00zzast_walkz00,
		BgL_bgl_za762walk2za7a2za7d2ca4310za7,
		BGl_z62walk2za2zd2cast1817z12zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4026z00zzast_walkz00,
		BgL_bgl_za762walk3za7a2za7d2ca4311za7,
		BGl_z62walk3za2zd2cast1819z12zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4027z00zzast_walkz00,
		BgL_bgl_za762walk0za712za7d2ca4312za7,
		BGl_z62walk0z12zd2cast1821za2zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4028z00zzast_walkz00,
		BgL_bgl_za762walk1za712za7d2ca4313za7,
		BGl_z62walk1z12zd2cast1823za2zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4029z00zzast_walkz00,
		BgL_bgl_za762walk2za712za7d2ca4314za7,
		BGl_z62walk2z12zd2cast1825za2zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4030z00zzast_walkz00,
		BgL_bgl_za762walk3za712za7d2ca4315za7,
		BGl_z62walk3z12zd2cast1827za2zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4031z00zzast_walkz00,
		BgL_bgl_za762walk0za7d2setq14316z00,
		BGl_z62walk0zd2setq1829zb0zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4032z00zzast_walkz00,
		BgL_bgl_za762walk1za7d2setq14317z00,
		BGl_z62walk1zd2setq1831zb0zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4033z00zzast_walkz00,
		BgL_bgl_za762walk2za7d2setq14318z00,
		BGl_z62walk2zd2setq1833zb0zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4034z00zzast_walkz00,
		BgL_bgl_za762walk3za7d2setq14319z00,
		BGl_z62walk3zd2setq1835zb0zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4035z00zzast_walkz00,
		BgL_bgl_za762walk0za7a2za7d2se4320za7,
		BGl_z62walk0za2zd2setq1837z12zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4036z00zzast_walkz00,
		BgL_bgl_za762walk1za7a2za7d2se4321za7,
		BGl_z62walk1za2zd2setq1839z12zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4037z00zzast_walkz00,
		BgL_bgl_za762walk2za7a2za7d2se4322za7,
		BGl_z62walk2za2zd2setq1841z12zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4038z00zzast_walkz00,
		BgL_bgl_za762walk3za7a2za7d2se4323za7,
		BGl_z62walk3za2zd2setq1843z12zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4039z00zzast_walkz00,
		BgL_bgl_za762walk0za712za7d2se4324za7,
		BGl_z62walk0z12zd2setq1845za2zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4040z00zzast_walkz00,
		BgL_bgl_za762walk1za712za7d2se4325za7,
		BGl_z62walk1z12zd2setq1847za2zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4041z00zzast_walkz00,
		BgL_bgl_za762walk2za712za7d2se4326za7,
		BGl_z62walk2z12zd2setq1849za2zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4042z00zzast_walkz00,
		BgL_bgl_za762walk3za712za7d2se4327za7,
		BGl_z62walk3z12zd2setq1851za2zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4043z00zzast_walkz00,
		BgL_bgl_za762walk0za7d2condi4328z00,
		BGl_z62walk0zd2conditional1853zb0zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4044z00zzast_walkz00,
		BgL_bgl_za762walk1za7d2condi4329z00,
		BGl_z62walk1zd2conditional1855zb0zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4045z00zzast_walkz00,
		BgL_bgl_za762walk2za7d2condi4330z00,
		BGl_z62walk2zd2conditional1857zb0zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4046z00zzast_walkz00,
		BgL_bgl_za762walk3za7d2condi4331z00,
		BGl_z62walk3zd2conditional1859zb0zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4047z00zzast_walkz00,
		BgL_bgl_za762walk0za7a2za7d2co4332za7,
		BGl_z62walk0za2zd2conditional1861z12zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4048z00zzast_walkz00,
		BgL_bgl_za762walk1za7a2za7d2co4333za7,
		BGl_z62walk1za2zd2conditional1863z12zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4049z00zzast_walkz00,
		BgL_bgl_za762walk2za7a2za7d2co4334za7,
		BGl_z62walk2za2zd2conditional1865z12zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4050z00zzast_walkz00,
		BgL_bgl_za762walk3za7a2za7d2co4335za7,
		BGl_z62walk3za2zd2conditional1867z12zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4051z00zzast_walkz00,
		BgL_bgl_za762walk0za712za7d2co4336za7,
		BGl_z62walk0z12zd2conditional1869za2zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4052z00zzast_walkz00,
		BgL_bgl_za762walk1za712za7d2co4337za7,
		BGl_z62walk1z12zd2conditional1871za2zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4053z00zzast_walkz00,
		BgL_bgl_za762walk2za712za7d2co4338za7,
		BGl_z62walk2z12zd2conditional1873za2zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4054z00zzast_walkz00,
		BgL_bgl_za762walk3za712za7d2co4339za7,
		BGl_z62walk3z12zd2conditional1875za2zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4055z00zzast_walkz00,
		BgL_bgl_za762walk0za7d2fail14340z00,
		BGl_z62walk0zd2fail1877zb0zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4056z00zzast_walkz00,
		BgL_bgl_za762walk1za7d2fail14341z00,
		BGl_z62walk1zd2fail1879zb0zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4057z00zzast_walkz00,
		BgL_bgl_za762walk2za7d2fail14342z00,
		BGl_z62walk2zd2fail1881zb0zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4058z00zzast_walkz00,
		BgL_bgl_za762walk3za7d2fail14343z00,
		BGl_z62walk3zd2fail1883zb0zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4059z00zzast_walkz00,
		BgL_bgl_za762walk0za7a2za7d2fa4344za7,
		BGl_z62walk0za2zd2fail1885z12zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4060z00zzast_walkz00,
		BgL_bgl_za762walk1za7a2za7d2fa4345za7,
		BGl_z62walk1za2zd2fail1887z12zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4061z00zzast_walkz00,
		BgL_bgl_za762walk2za7a2za7d2fa4346za7,
		BGl_z62walk2za2zd2fail1889z12zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4062z00zzast_walkz00,
		BgL_bgl_za762walk3za7a2za7d2fa4347za7,
		BGl_z62walk3za2zd2fail1891z12zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4063z00zzast_walkz00,
		BgL_bgl_za762walk0za712za7d2fa4348za7,
		BGl_z62walk0z12zd2fail1893za2zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4064z00zzast_walkz00,
		BgL_bgl_za762walk1za712za7d2fa4349za7,
		BGl_z62walk1z12zd2fail1895za2zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4065z00zzast_walkz00,
		BgL_bgl_za762walk2za712za7d2fa4350za7,
		BGl_z62walk2z12zd2fail1897za2zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4066z00zzast_walkz00,
		BgL_bgl_za762walk3za712za7d2fa4351za7,
		BGl_z62walk3z12zd2fail1899za2zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_walk3za2zd2envz70zzast_walkz00,
		BgL_bgl_za762walk3za7a2za7c0za7za74352za7, BGl_z62walk3za2zc0zzast_walkz00,
		0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4067z00zzast_walkz00,
		BgL_bgl_za762walk0za7d2setza7d4353za7,
		BGl_z62walk0zd2setzd2exzd2it1901zb0zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4068z00zzast_walkz00,
		BgL_bgl_za762walk1za7d2setza7d4354za7,
		BGl_z62walk1zd2setzd2exzd2it1903zb0zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4069z00zzast_walkz00,
		BgL_bgl_za762walk2za7d2setza7d4355za7,
		BGl_z62walk2zd2setzd2exzd2it1905zb0zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4070z00zzast_walkz00,
		BgL_bgl_za762walk3za7d2setza7d4356za7,
		BGl_z62walk3zd2setzd2exzd2it1907zb0zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4071z00zzast_walkz00,
		BgL_bgl_za762walk0za7a2za7d2se4357za7,
		BGl_z62walk0za2zd2setzd2exzd2it1909z12zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4072z00zzast_walkz00,
		BgL_bgl_za762walk1za7a2za7d2se4358za7,
		BGl_z62walk1za2zd2setzd2exzd2it1911z12zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4073z00zzast_walkz00,
		BgL_bgl_za762walk2za7a2za7d2se4359za7,
		BGl_z62walk2za2zd2setzd2exzd2it1913z12zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4074z00zzast_walkz00,
		BgL_bgl_za762walk3za7a2za7d2se4360za7,
		BGl_z62walk3za2zd2setzd2exzd2it1915z12zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4075z00zzast_walkz00,
		BgL_bgl_za762walk0za712za7d2se4361za7,
		BGl_z62walk0z12zd2setzd2exzd2it1917za2zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4076z00zzast_walkz00,
		BgL_bgl_za762walk1za712za7d2se4362za7,
		BGl_z62walk1z12zd2setzd2exzd2it1919za2zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4077z00zzast_walkz00,
		BgL_bgl_za762walk2za712za7d2se4363za7,
		BGl_z62walk2z12zd2setzd2exzd2it1921za2zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4078z00zzast_walkz00,
		BgL_bgl_za762walk3za712za7d2se4364za7,
		BGl_z62walk3z12zd2setzd2exzd2it1923za2zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4079z00zzast_walkz00,
		BgL_bgl_za762walk0za7d2jumpza74365za7,
		BGl_z62walk0zd2jumpzd2exzd2it1925zb0zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4080z00zzast_walkz00,
		BgL_bgl_za762walk1za7d2jumpza74366za7,
		BGl_z62walk1zd2jumpzd2exzd2it1927zb0zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4081z00zzast_walkz00,
		BgL_bgl_za762walk2za7d2jumpza74367za7,
		BGl_z62walk2zd2jumpzd2exzd2it1929zb0zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4082z00zzast_walkz00,
		BgL_bgl_za762walk3za7d2jumpza74368za7,
		BGl_z62walk3zd2jumpzd2exzd2it1931zb0zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4083z00zzast_walkz00,
		BgL_bgl_za762walk0za7a2za7d2ju4369za7,
		BGl_z62walk0za2zd2jumpzd2exzd2it1933z12zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4084z00zzast_walkz00,
		BgL_bgl_za762walk1za7a2za7d2ju4370za7,
		BGl_z62walk1za2zd2jumpzd2exzd2it1935z12zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4085z00zzast_walkz00,
		BgL_bgl_za762walk2za7a2za7d2ju4371za7,
		BGl_z62walk2za2zd2jumpzd2exzd2it1937z12zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4086z00zzast_walkz00,
		BgL_bgl_za762walk3za7a2za7d2ju4372za7,
		BGl_z62walk3za2zd2jumpzd2exzd2it1939z12zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4087z00zzast_walkz00,
		BgL_bgl_za762walk0za712za7d2ju4373za7,
		BGl_z62walk0z12zd2jumpzd2exzd2it1941za2zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4088z00zzast_walkz00,
		BgL_bgl_za762walk1za712za7d2ju4374za7,
		BGl_z62walk1z12zd2jumpzd2exzd2it1943za2zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4089z00zzast_walkz00,
		BgL_bgl_za762walk2za712za7d2ju4375za7,
		BGl_z62walk2z12zd2jumpzd2exzd2it1945za2zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4090z00zzast_walkz00,
		BgL_bgl_za762walk3za712za7d2ju4376za7,
		BGl_z62walk3z12zd2jumpzd2exzd2it1947za2zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4091z00zzast_walkz00,
		BgL_bgl_za762walk0za7d2retbl4377z00,
		BGl_z62walk0zd2retblock1949zb0zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4092z00zzast_walkz00,
		BgL_bgl_za762walk1za7d2retbl4378z00,
		BGl_z62walk1zd2retblock1951zb0zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4093z00zzast_walkz00,
		BgL_bgl_za762walk2za7d2retbl4379z00,
		BGl_z62walk2zd2retblock1953zb0zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4094z00zzast_walkz00,
		BgL_bgl_za762walk3za7d2retbl4380z00,
		BGl_z62walk3zd2retblock1955zb0zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4095z00zzast_walkz00,
		BgL_bgl_za762walk0za7a2za7d2re4381za7,
		BGl_z62walk0za2zd2retblock1957z12zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4096z00zzast_walkz00,
		BgL_bgl_za762walk1za7a2za7d2re4382za7,
		BGl_z62walk1za2zd2retblock1959z12zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4097z00zzast_walkz00,
		BgL_bgl_za762walk2za7a2za7d2re4383za7,
		BGl_z62walk2za2zd2retblock1961z12zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4098z00zzast_walkz00,
		BgL_bgl_za762walk3za7a2za7d2re4384za7,
		BGl_z62walk3za2zd2retblock1963z12zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4099z00zzast_walkz00,
		BgL_bgl_za762walk0za712za7d2re4385za7,
		BGl_z62walk0z12zd2retblock1965za2zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_walk0zd2envzd2zzast_walkz00,
		BgL_bgl_za762walk0za762za7za7ast4386z00, BGl_z62walk0z62zzast_walkz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4199z00zzast_walkz00,
		BgL_bgl_string4199za700za7za7a4387za7, "ast_walk", 8);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_walk4za2zd2envz70zzast_walkz00,
		BgL_bgl_za762walk4za7a2za7c0za7za74388za7, BGl_z62walk4za2zc0zzast_walkz00,
		0L, BUNSPEC, 6);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_walk1zd2envzd2zzast_walkz00,
		BgL_bgl_za762walk1za762za7za7ast4389z00, BGl_z62walk1z62zzast_walkz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3902z00zzast_walkz00,
		BgL_bgl_za762walk01626za762za74390za7, BGl_z62walk01626z62zzast_walkz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3904z00zzast_walkz00,
		BgL_bgl_za762walk11628za762za74391za7, BGl_z62walk11628z62zzast_walkz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3906z00zzast_walkz00,
		BgL_bgl_za762walk21630za762za74392za7, BGl_z62walk21630z62zzast_walkz00, 0L,
		BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3908z00zzast_walkz00,
		BgL_bgl_za762walk31632za762za74393za7, BGl_z62walk31632z62zzast_walkz00, 0L,
		BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3910z00zzast_walkz00,
		BgL_bgl_za762walk41634za762za74394za7, BGl_z62walk41634z62zzast_walkz00, 0L,
		BUNSPEC, 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3912z00zzast_walkz00,
		BgL_bgl_za762walk0za7a21636za74395za7, BGl_z62walk0za21636zc0zzast_walkz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3914z00zzast_walkz00,
		BgL_bgl_za762walk1za7a21638za74396za7, BGl_z62walk1za21638zc0zzast_walkz00,
		0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3916z00zzast_walkz00,
		BgL_bgl_za762walk2za7a21640za74397za7, BGl_z62walk2za21640zc0zzast_walkz00,
		0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3918z00zzast_walkz00,
		BgL_bgl_za762walk3za7a21642za74398za7, BGl_z62walk3za21642zc0zzast_walkz00,
		0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3920z00zzast_walkz00,
		BgL_bgl_za762walk4za7a21644za74399za7, BGl_z62walk4za21644zc0zzast_walkz00,
		0L, BUNSPEC, 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3922z00zzast_walkz00,
		BgL_bgl_za762walk0za7121646za74400za7, BGl_z62walk0z121646z70zzast_walkz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3924z00zzast_walkz00,
		BgL_bgl_za762walk1za7121648za74401za7, BGl_z62walk1z121648z70zzast_walkz00,
		0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3926z00zzast_walkz00,
		BgL_bgl_za762walk2za7121651za74402za7, BGl_z62walk2z121651z70zzast_walkz00,
		0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3928z00zzast_walkz00,
		BgL_bgl_za762walk3za7121653za74403za7, BGl_z62walk3z121653z70zzast_walkz00,
		0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_walk2zd2envzd2zzast_walkz00,
		BgL_bgl_za762walk2za762za7za7ast4404z00, BGl_z62walk2z62zzast_walkz00, 0L,
		BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3930z00zzast_walkz00,
		BgL_bgl_za762walk4za7121655za74405za7, BGl_z62walk4z121655z70zzast_walkz00,
		0L, BUNSPEC, 6);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_walk0z12zd2envzc0zzast_walkz00,
		BgL_bgl_za762walk0za712za770za7za74406za7, BGl_z62walk0z12z70zzast_walkz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3947z00zzast_walkz00,
		BgL_bgl_za762walk0za7d2node14407z00,
		BGl_z62walk0zd2node1658zb0zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3948z00zzast_walkz00,
		BgL_bgl_za762walk1za7d2node14408z00,
		BGl_z62walk1zd2node1660zb0zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3949z00zzast_walkz00,
		BgL_bgl_za762walk2za7d2node14409z00,
		BGl_z62walk2zd2node1662zb0zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3950z00zzast_walkz00,
		BgL_bgl_za762walk3za7d2node14410z00,
		BGl_z62walk3zd2node1664zb0zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3951z00zzast_walkz00,
		BgL_bgl_za762walk0za7a2za7d2no4411za7,
		BGl_z62walk0za2zd2node1666z12zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3952z00zzast_walkz00,
		BgL_bgl_za762walk1za7a2za7d2no4412za7,
		BGl_z62walk1za2zd2node1668z12zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3953z00zzast_walkz00,
		BgL_bgl_za762walk2za7a2za7d2no4413za7,
		BGl_z62walk2za2zd2node1670z12zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3954z00zzast_walkz00,
		BgL_bgl_za762walk3za7a2za7d2no4414za7,
		BGl_z62walk3za2zd2node1673z12zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3955z00zzast_walkz00,
		BgL_bgl_za762walk0za712za7d2no4415za7,
		BGl_z62walk0z12zd2node1675za2zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3956z00zzast_walkz00,
		BgL_bgl_za762walk1za712za7d2no4416za7,
		BGl_z62walk1z12zd2node1677za2zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3957z00zzast_walkz00,
		BgL_bgl_za762walk2za712za7d2no4417za7,
		BGl_z62walk2z12zd2node1679za2zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3958z00zzast_walkz00,
		BgL_bgl_za762walk3za712za7d2no4418za7,
		BGl_z62walk3z12zd2node1681za2zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3959z00zzast_walkz00,
		BgL_bgl_za762walk0za7d2seque4419z00,
		BGl_z62walk0zd2sequence1683zb0zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3960z00zzast_walkz00,
		BgL_bgl_za762walk1za7d2seque4420z00,
		BGl_z62walk1zd2sequence1685zb0zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3961z00zzast_walkz00,
		BgL_bgl_za762walk2za7d2seque4421z00,
		BGl_z62walk2zd2sequence1687zb0zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3962z00zzast_walkz00,
		BgL_bgl_za762walk3za7d2seque4422z00,
		BGl_z62walk3zd2sequence1689zb0zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3963z00zzast_walkz00,
		BgL_bgl_za762walk0za7a2za7d2se4423za7,
		BGl_z62walk0za2zd2sequence1691z12zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3964z00zzast_walkz00,
		BgL_bgl_za762walk1za7a2za7d2se4424za7,
		BGl_z62walk1za2zd2sequence1693z12zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3965z00zzast_walkz00,
		BgL_bgl_za762walk2za7a2za7d2se4425za7,
		BGl_z62walk2za2zd2sequence1695z12zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3966z00zzast_walkz00,
		BgL_bgl_za762walk3za7a2za7d2se4426za7,
		BGl_z62walk3za2zd2sequence1697z12zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3967z00zzast_walkz00,
		BgL_bgl_za762walk0za712za7d2se4427za7,
		BGl_z62walk0z12zd2sequence1700za2zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3968z00zzast_walkz00,
		BgL_bgl_za762walk1za712za7d2se4428za7,
		BGl_z62walk1z12zd2sequence1702za2zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3969z00zzast_walkz00,
		BgL_bgl_za762walk2za712za7d2se4429za7,
		BGl_z62walk2z12zd2sequence1704za2zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_walk3zd2envzd2zzast_walkz00,
		BgL_bgl_za762walk3za762za7za7ast4430z00, BGl_z62walk3z62zzast_walkz00, 0L,
		BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3970z00zzast_walkz00,
		BgL_bgl_za762walk3za712za7d2se4431za7,
		BGl_z62walk3z12zd2sequence1706za2zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3971z00zzast_walkz00,
		BgL_bgl_za762walk0za7d2app174432z00, BGl_z62walk0zd2app1708zb0zzast_walkz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3972z00zzast_walkz00,
		BgL_bgl_za762walk1za7d2app174433z00, BGl_z62walk1zd2app1710zb0zzast_walkz00,
		0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3973z00zzast_walkz00,
		BgL_bgl_za762walk2za7d2app174434z00, BGl_z62walk2zd2app1712zb0zzast_walkz00,
		0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3974z00zzast_walkz00,
		BgL_bgl_za762walk3za7d2app174435z00, BGl_z62walk3zd2app1714zb0zzast_walkz00,
		0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3975z00zzast_walkz00,
		BgL_bgl_za762walk0za7a2za7d2ap4436za7,
		BGl_z62walk0za2zd2app1716z12zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3976z00zzast_walkz00,
		BgL_bgl_za762walk1za7a2za7d2ap4437za7,
		BGl_z62walk1za2zd2app1718z12zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3977z00zzast_walkz00,
		BgL_bgl_za762walk2za7a2za7d2ap4438za7,
		BGl_z62walk2za2zd2app1720z12zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3978z00zzast_walkz00,
		BgL_bgl_za762walk3za7a2za7d2ap4439za7,
		BGl_z62walk3za2zd2app1722z12zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3979z00zzast_walkz00,
		BgL_bgl_za762walk0za712za7d2ap4440za7,
		BGl_z62walk0z12zd2app1725za2zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3980z00zzast_walkz00,
		BgL_bgl_za762walk1za712za7d2ap4441za7,
		BGl_z62walk1z12zd2app1727za2zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3981z00zzast_walkz00,
		BgL_bgl_za762walk2za712za7d2ap4442za7,
		BGl_z62walk2z12zd2app1729za2zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3982z00zzast_walkz00,
		BgL_bgl_za762walk3za712za7d2ap4443za7,
		BGl_z62walk3z12zd2app1731za2zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3983z00zzast_walkz00,
		BgL_bgl_za762walk0za7d2appza7d4444za7,
		BGl_z62walk0zd2appzd2ly1733z62zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3984z00zzast_walkz00,
		BgL_bgl_za762walk1za7d2appza7d4445za7,
		BGl_z62walk1zd2appzd2ly1735z62zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3985z00zzast_walkz00,
		BgL_bgl_za762walk2za7d2appza7d4446za7,
		BGl_z62walk2zd2appzd2ly1737z62zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3986z00zzast_walkz00,
		BgL_bgl_za762walk3za7d2appza7d4447za7,
		BGl_z62walk3zd2appzd2ly1739z62zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3987z00zzast_walkz00,
		BgL_bgl_za762walk0za7a2za7d2ap4448za7,
		BGl_z62walk0za2zd2appzd2ly1741zc0zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3988z00zzast_walkz00,
		BgL_bgl_za762walk1za7a2za7d2ap4449za7,
		BGl_z62walk1za2zd2appzd2ly1743zc0zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3989z00zzast_walkz00,
		BgL_bgl_za762walk2za7a2za7d2ap4450za7,
		BGl_z62walk2za2zd2appzd2ly1745zc0zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_walk1z12zd2envzc0zzast_walkz00,
		BgL_bgl_za762walk1za712za770za7za74451za7, BGl_z62walk1z12z70zzast_walkz00,
		0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3990z00zzast_walkz00,
		BgL_bgl_za762walk3za7a2za7d2ap4452za7,
		BGl_z62walk3za2zd2appzd2ly1747zc0zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3991z00zzast_walkz00,
		BgL_bgl_za762walk0za712za7d2ap4453za7,
		BGl_z62walk0z12zd2appzd2ly1749z70zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3992z00zzast_walkz00,
		BgL_bgl_za762walk1za712za7d2ap4454za7,
		BGl_z62walk1z12zd2appzd2ly1751z70zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3993z00zzast_walkz00,
		BgL_bgl_za762walk2za712za7d2ap4455za7,
		BGl_z62walk2z12zd2appzd2ly1753z70zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3994z00zzast_walkz00,
		BgL_bgl_za762walk3za712za7d2ap4456za7,
		BGl_z62walk3z12zd2appzd2ly1755z70zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3995z00zzast_walkz00,
		BgL_bgl_za762walk0za7d2funca4457z00,
		BGl_z62walk0zd2funcall1757zb0zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3996z00zzast_walkz00,
		BgL_bgl_za762walk1za7d2funca4458z00,
		BGl_z62walk1zd2funcall1759zb0zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3997z00zzast_walkz00,
		BgL_bgl_za762walk2za7d2funca4459z00,
		BGl_z62walk2zd2funcall1761zb0zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3998z00zzast_walkz00,
		BgL_bgl_za762walk3za7d2funca4460z00,
		BGl_z62walk3zd2funcall1763zb0zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3999z00zzast_walkz00,
		BgL_bgl_za762walk0za7a2za7d2fu4461za7,
		BGl_z62walk0za2zd2funcall1765z12zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_walk4zd2envzd2zzast_walkz00,
		BgL_bgl_za762walk4za762za7za7ast4462z00, BGl_z62walk4z62zzast_walkz00, 0L,
		BUNSPEC, 6);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_walk2z12zd2envzc0zzast_walkz00,
		BgL_bgl_za762walk2za712za770za7za74463za7, BGl_z62walk2z12z70zzast_walkz00,
		0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4100z00zzast_walkz00,
		BgL_bgl_za762walk1za712za7d2re4464za7,
		BGl_z62walk1z12zd2retblock1967za2zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4101z00zzast_walkz00,
		BgL_bgl_za762walk2za712za7d2re4465za7,
		BGl_z62walk2z12zd2retblock1969za2zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4102z00zzast_walkz00,
		BgL_bgl_za762walk3za712za7d2re4466za7,
		BGl_z62walk3z12zd2retblock1971za2zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_walk3z12zd2envzc0zzast_walkz00,
		BgL_bgl_za762walk3za712za770za7za74467za7, BGl_z62walk3z12z70zzast_walkz00,
		0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4103z00zzast_walkz00,
		BgL_bgl_za762walk0za7d2retur4468z00,
		BGl_z62walk0zd2return1973zb0zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4104z00zzast_walkz00,
		BgL_bgl_za762walk1za7d2retur4469z00,
		BGl_z62walk1zd2return1975zb0zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4105z00zzast_walkz00,
		BgL_bgl_za762walk2za7d2retur4470z00,
		BGl_z62walk2zd2return1977zb0zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4106z00zzast_walkz00,
		BgL_bgl_za762walk3za7d2retur4471z00,
		BGl_z62walk3zd2return1979zb0zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4107z00zzast_walkz00,
		BgL_bgl_za762walk0za7a2za7d2re4472za7,
		BGl_z62walk0za2zd2return1981z12zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4108z00zzast_walkz00,
		BgL_bgl_za762walk1za7a2za7d2re4473za7,
		BGl_z62walk1za2zd2return1983z12zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4109z00zzast_walkz00,
		BgL_bgl_za762walk2za7a2za7d2re4474za7,
		BGl_z62walk2za2zd2return1985z12zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4110z00zzast_walkz00,
		BgL_bgl_za762walk3za7a2za7d2re4475za7,
		BGl_z62walk3za2zd2return1987z12zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4111z00zzast_walkz00,
		BgL_bgl_za762walk0za712za7d2re4476za7,
		BGl_z62walk0z12zd2return1989za2zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4112z00zzast_walkz00,
		BgL_bgl_za762walk1za712za7d2re4477za7,
		BGl_z62walk1z12zd2return1991za2zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4113z00zzast_walkz00,
		BgL_bgl_za762walk2za712za7d2re4478za7,
		BGl_z62walk2z12zd2return1993za2zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4114z00zzast_walkz00,
		BgL_bgl_za762walk3za712za7d2re4479za7,
		BGl_z62walk3z12zd2return1995za2zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4115z00zzast_walkz00,
		BgL_bgl_za762walk0za7d2makeza74480za7,
		BGl_z62walk0zd2makezd2box1997z62zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4116z00zzast_walkz00,
		BgL_bgl_za762walk1za7d2makeza74481za7,
		BGl_z62walk1zd2makezd2box1999z62zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4117z00zzast_walkz00,
		BgL_bgl_za762walk2za7d2makeza74482za7,
		BGl_z62walk2zd2makezd2box2001z62zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4118z00zzast_walkz00,
		BgL_bgl_za762walk3za7d2makeza74483za7,
		BGl_z62walk3zd2makezd2box2003z62zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4119z00zzast_walkz00,
		BgL_bgl_za762walk0za7a2za7d2ma4484za7,
		BGl_z62walk0za2zd2makezd2box2005zc0zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4120z00zzast_walkz00,
		BgL_bgl_za762walk1za7a2za7d2ma4485za7,
		BGl_z62walk1za2zd2makezd2box2007zc0zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4121z00zzast_walkz00,
		BgL_bgl_za762walk2za7a2za7d2ma4486za7,
		BGl_z62walk2za2zd2makezd2box2009zc0zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4122z00zzast_walkz00,
		BgL_bgl_za762walk3za7a2za7d2ma4487za7,
		BGl_z62walk3za2zd2makezd2box2011zc0zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4123z00zzast_walkz00,
		BgL_bgl_za762walk0za712za7d2ma4488za7,
		BGl_z62walk0z12zd2makezd2box2013z70zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4124z00zzast_walkz00,
		BgL_bgl_za762walk1za712za7d2ma4489za7,
		BGl_z62walk1z12zd2makezd2box2015z70zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4125z00zzast_walkz00,
		BgL_bgl_za762walk2za712za7d2ma4490za7,
		BGl_z62walk2z12zd2makezd2box2017z70zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4126z00zzast_walkz00,
		BgL_bgl_za762walk3za712za7d2ma4491za7,
		BGl_z62walk3z12zd2makezd2box2019z70zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4127z00zzast_walkz00,
		BgL_bgl_za762walk0za7d2boxza7d4492za7,
		BGl_z62walk0zd2boxzd2ref2021z62zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4128z00zzast_walkz00,
		BgL_bgl_za762walk1za7d2boxza7d4493za7,
		BGl_z62walk1zd2boxzd2ref2023z62zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4129z00zzast_walkz00,
		BgL_bgl_za762walk2za7d2boxza7d4494za7,
		BGl_z62walk2zd2boxzd2ref2025z62zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4130z00zzast_walkz00,
		BgL_bgl_za762walk3za7d2boxza7d4495za7,
		BGl_z62walk3zd2boxzd2ref2027z62zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4131z00zzast_walkz00,
		BgL_bgl_za762walk0za7a2za7d2bo4496za7,
		BGl_z62walk0za2zd2boxzd2ref2029zc0zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4132z00zzast_walkz00,
		BgL_bgl_za762walk1za7a2za7d2bo4497za7,
		BGl_z62walk1za2zd2boxzd2ref2031zc0zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4133z00zzast_walkz00,
		BgL_bgl_za762walk2za7a2za7d2bo4498za7,
		BGl_z62walk2za2zd2boxzd2ref2033zc0zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4134z00zzast_walkz00,
		BgL_bgl_za762walk3za7a2za7d2bo4499za7,
		BGl_z62walk3za2zd2boxzd2ref2035zc0zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4135z00zzast_walkz00,
		BgL_bgl_za762walk0za712za7d2bo4500za7,
		BGl_z62walk0z12zd2boxzd2ref2037z70zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4136z00zzast_walkz00,
		BgL_bgl_za762walk1za712za7d2bo4501za7,
		BGl_z62walk1z12zd2boxzd2ref2039z70zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4137z00zzast_walkz00,
		BgL_bgl_za762walk2za712za7d2bo4502za7,
		BGl_z62walk2z12zd2boxzd2ref2041z70zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4138z00zzast_walkz00,
		BgL_bgl_za762walk3za712za7d2bo4503za7,
		BGl_z62walk3z12zd2boxzd2ref2043z70zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4139z00zzast_walkz00,
		BgL_bgl_za762walk0za7d2boxza7d4504za7,
		BGl_z62walk0zd2boxzd2setz122045z70zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4140z00zzast_walkz00,
		BgL_bgl_za762walk1za7d2boxza7d4505za7,
		BGl_z62walk1zd2boxzd2setz122047z70zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4141z00zzast_walkz00,
		BgL_bgl_za762walk2za7d2boxza7d4506za7,
		BGl_z62walk2zd2boxzd2setz122049z70zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4142z00zzast_walkz00,
		BgL_bgl_za762walk3za7d2boxza7d4507za7,
		BGl_z62walk3zd2boxzd2setz122051z70zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4143z00zzast_walkz00,
		BgL_bgl_za762walk0za7a2za7d2bo4508za7,
		BGl_z62walk0za2zd2boxzd2setz122053zd2zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4144z00zzast_walkz00,
		BgL_bgl_za762walk1za7a2za7d2bo4509za7,
		BGl_z62walk1za2zd2boxzd2setz122055zd2zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4145z00zzast_walkz00,
		BgL_bgl_za762walk2za7a2za7d2bo4510za7,
		BGl_z62walk2za2zd2boxzd2setz122057zd2zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4146z00zzast_walkz00,
		BgL_bgl_za762walk3za7a2za7d2bo4511za7,
		BGl_z62walk3za2zd2boxzd2setz122059zd2zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4147z00zzast_walkz00,
		BgL_bgl_za762walk0za712za7d2bo4512za7,
		BGl_z62walk0z12zd2boxzd2setz122061z62zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4148z00zzast_walkz00,
		BgL_bgl_za762walk1za712za7d2bo4513za7,
		BGl_z62walk1z12zd2boxzd2setz122064z62zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4149z00zzast_walkz00,
		BgL_bgl_za762walk2za712za7d2bo4514za7,
		BGl_z62walk2z12zd2boxzd2setz122066z62zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_walk4z12zd2envzc0zzast_walkz00,
		BgL_bgl_za762walk4za712za770za7za74515za7, BGl_z62walk4z12z70zzast_walkz00,
		0L, BUNSPEC, 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4150z00zzast_walkz00,
		BgL_bgl_za762walk3za712za7d2bo4516za7,
		BGl_z62walk3z12zd2boxzd2setz122068z62zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4151z00zzast_walkz00,
		BgL_bgl_za762walk0za7d2sync24517z00,
		BGl_z62walk0zd2sync2070zb0zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4152z00zzast_walkz00,
		BgL_bgl_za762walk1za7d2sync24518z00,
		BGl_z62walk1zd2sync2072zb0zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4153z00zzast_walkz00,
		BgL_bgl_za762walk2za7d2sync24519z00,
		BGl_z62walk2zd2sync2074zb0zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4154z00zzast_walkz00,
		BgL_bgl_za762walk3za7d2sync24520z00,
		BGl_z62walk3zd2sync2076zb0zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4155z00zzast_walkz00,
		BgL_bgl_za762walk0za7a2za7d2sy4521za7,
		BGl_z62walk0za2zd2sync2078z12zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4156z00zzast_walkz00,
		BgL_bgl_za762walk1za7a2za7d2sy4522za7,
		BGl_z62walk1za2zd2sync2080z12zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4157z00zzast_walkz00,
		BgL_bgl_za762walk2za7a2za7d2sy4523za7,
		BGl_z62walk2za2zd2sync2082z12zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4158z00zzast_walkz00,
		BgL_bgl_za762walk3za7a2za7d2sy4524za7,
		BGl_z62walk3za2zd2sync2084z12zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4159z00zzast_walkz00,
		BgL_bgl_za762walk0za712za7d2sy4525za7,
		BGl_z62walk0z12zd2sync2086za2zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4160z00zzast_walkz00,
		BgL_bgl_za762walk1za712za7d2sy4526za7,
		BGl_z62walk1z12zd2sync2088za2zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4161z00zzast_walkz00,
		BgL_bgl_za762walk2za712za7d2sy4527za7,
		BGl_z62walk2z12zd2sync2090za2zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4162z00zzast_walkz00,
		BgL_bgl_za762walk3za712za7d2sy4528za7,
		BGl_z62walk3z12zd2sync2092za2zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4163z00zzast_walkz00,
		BgL_bgl_za762walk0za7d2switc4529z00,
		BGl_z62walk0zd2switch2094zb0zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4164z00zzast_walkz00,
		BgL_bgl_za762walk1za7d2switc4530z00,
		BGl_z62walk1zd2switch2096zb0zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4165z00zzast_walkz00,
		BgL_bgl_za762walk2za7d2switc4531z00,
		BGl_z62walk2zd2switch2098zb0zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4166z00zzast_walkz00,
		BgL_bgl_za762walk3za7d2switc4532z00,
		BGl_z62walk3zd2switch2100zb0zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4167z00zzast_walkz00,
		BgL_bgl_za762walk0za7a2za7d2sw4533za7,
		BGl_z62walk0za2zd2switch2102z12zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4168z00zzast_walkz00,
		BgL_bgl_za762walk1za7a2za7d2sw4534za7,
		BGl_z62walk1za2zd2switch2104z12zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4169z00zzast_walkz00,
		BgL_bgl_za762walk2za7a2za7d2sw4535za7,
		BGl_z62walk2za2zd2switch2106z12zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4170z00zzast_walkz00,
		BgL_bgl_za762walk3za7a2za7d2sw4536za7,
		BGl_z62walk3za2zd2switch2108z12zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4171z00zzast_walkz00,
		BgL_bgl_za762walk0za712za7d2sw4537za7,
		BGl_z62walk0z12zd2switch2110za2zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4172z00zzast_walkz00,
		BgL_bgl_za762walk1za712za7d2sw4538za7,
		BGl_z62walk1z12zd2switch2112za2zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4173z00zzast_walkz00,
		BgL_bgl_za762walk2za712za7d2sw4539za7,
		BGl_z62walk2z12zd2switch2114za2zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4174z00zzast_walkz00,
		BgL_bgl_za762walk3za712za7d2sw4540za7,
		BGl_z62walk3z12zd2switch2116za2zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4175z00zzast_walkz00,
		BgL_bgl_za762walk0za7d2letza7d4541za7,
		BGl_z62walk0zd2letzd2fun2118z62zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4176z00zzast_walkz00,
		BgL_bgl_za762walk1za7d2letza7d4542za7,
		BGl_z62walk1zd2letzd2fun2120z62zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4177z00zzast_walkz00,
		BgL_bgl_za762walk2za7d2letza7d4543za7,
		BGl_z62walk2zd2letzd2fun2122z62zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4178z00zzast_walkz00,
		BgL_bgl_za762walk3za7d2letza7d4544za7,
		BGl_z62walk3zd2letzd2fun2124z62zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4179z00zzast_walkz00,
		BgL_bgl_za762walk0za7a2za7d2le4545za7,
		BGl_z62walk0za2zd2letzd2fun2126zc0zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4180z00zzast_walkz00,
		BgL_bgl_za762walk1za7a2za7d2le4546za7,
		BGl_z62walk1za2zd2letzd2fun2128zc0zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4181z00zzast_walkz00,
		BgL_bgl_za762walk2za7a2za7d2le4547za7,
		BGl_z62walk2za2zd2letzd2fun2130zc0zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4182z00zzast_walkz00,
		BgL_bgl_za762walk3za7a2za7d2le4548za7,
		BGl_z62walk3za2zd2letzd2fun2132zc0zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4183z00zzast_walkz00,
		BgL_bgl_za762walk0za712za7d2le4549za7,
		BGl_z62walk0z12zd2letzd2fun2134z70zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4184z00zzast_walkz00,
		BgL_bgl_za762walk1za712za7d2le4550za7,
		BGl_z62walk1z12zd2letzd2fun2136z70zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4185z00zzast_walkz00,
		BgL_bgl_za762walk2za712za7d2le4551za7,
		BGl_z62walk2z12zd2letzd2fun2138z70zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4186z00zzast_walkz00,
		BgL_bgl_za762walk3za712za7d2le4552za7,
		BGl_z62walk3z12zd2letzd2fun2140z70zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4187z00zzast_walkz00,
		BgL_bgl_za762walk0za7d2letza7d4553za7,
		BGl_z62walk0zd2letzd2var2142z62zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4188z00zzast_walkz00,
		BgL_bgl_za762walk1za7d2letza7d4554za7,
		BGl_z62walk1zd2letzd2var2144z62zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4189z00zzast_walkz00,
		BgL_bgl_za762walk2za7d2letza7d4555za7,
		BGl_z62walk2zd2letzd2var2146z62zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4190z00zzast_walkz00,
		BgL_bgl_za762walk3za7d2letza7d4556za7,
		BGl_z62walk3zd2letzd2var2148z62zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4191z00zzast_walkz00,
		BgL_bgl_za762walk0za7a2za7d2le4557za7,
		BGl_z62walk0za2zd2letzd2var2150zc0zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4192z00zzast_walkz00,
		BgL_bgl_za762walk1za7a2za7d2le4558za7,
		BGl_z62walk1za2zd2letzd2var2152zc0zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4193z00zzast_walkz00,
		BgL_bgl_za762walk2za7a2za7d2le4559za7,
		BGl_z62walk2za2zd2letzd2var2154zc0zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4194z00zzast_walkz00,
		BgL_bgl_za762walk3za7a2za7d2le4560za7,
		BGl_z62walk3za2zd2letzd2var2156zc0zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4195z00zzast_walkz00,
		BgL_bgl_za762walk0za712za7d2le4561za7,
		BGl_z62walk0z12zd2letzd2var2158z70zzast_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4196z00zzast_walkz00,
		BgL_bgl_za762walk1za712za7d2le4562za7,
		BGl_z62walk1z12zd2letzd2var2160z70zzast_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4197z00zzast_walkz00,
		BgL_bgl_za762walk2za712za7d2le4563za7,
		BGl_z62walk2z12zd2letzd2var2162z70zzast_walkz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4198z00zzast_walkz00,
		BgL_bgl_za762walk3za712za7d2le4564za7,
		BGl_z62walk3z12zd2letzd2var2164z70zzast_walkz00, 0L, BUNSPEC, 5);
	      DEFINE_STRING(BGl_string3903z00zzast_walkz00,
		BgL_bgl_string3903za700za7za7a4565za7, "walk01626", 9);
	      DEFINE_STRING(BGl_string3905z00zzast_walkz00,
		BgL_bgl_string3905za700za7za7a4566za7, "walk11628", 9);
	      DEFINE_STRING(BGl_string3907z00zzast_walkz00,
		BgL_bgl_string3907za700za7za7a4567za7, "walk21630", 9);
	      DEFINE_STRING(BGl_string3909z00zzast_walkz00,
		BgL_bgl_string3909za700za7za7a4568za7, "walk31632", 9);
	      DEFINE_STRING(BGl_string3911z00zzast_walkz00,
		BgL_bgl_string3911za700za7za7a4569za7, "walk41634", 9);
	      DEFINE_STRING(BGl_string3913z00zzast_walkz00,
		BgL_bgl_string3913za700za7za7a4570za7, "walk0*1636", 10);
	      DEFINE_STRING(BGl_string3915z00zzast_walkz00,
		BgL_bgl_string3915za700za7za7a4571za7, "walk1*1638", 10);
	      DEFINE_STRING(BGl_string3917z00zzast_walkz00,
		BgL_bgl_string3917za700za7za7a4572za7, "walk2*1640", 10);
	      DEFINE_STRING(BGl_string3919z00zzast_walkz00,
		BgL_bgl_string3919za700za7za7a4573za7, "walk3*1642", 10);
	      DEFINE_STRING(BGl_string3921z00zzast_walkz00,
		BgL_bgl_string3921za700za7za7a4574za7, "walk4*1644", 10);
	      DEFINE_STRING(BGl_string3923z00zzast_walkz00,
		BgL_bgl_string3923za700za7za7a4575za7, "walk0!1646", 10);
	      DEFINE_STRING(BGl_string3925z00zzast_walkz00,
		BgL_bgl_string3925za700za7za7a4576za7, "walk1!1648", 10);
	      DEFINE_STRING(BGl_string3927z00zzast_walkz00,
		BgL_bgl_string3927za700za7za7a4577za7, "walk2!1651", 10);
	      DEFINE_STRING(BGl_string3929z00zzast_walkz00,
		BgL_bgl_string3929za700za7za7a4578za7, "walk3!1653", 10);
	      DEFINE_STRING(BGl_string3931z00zzast_walkz00,
		BgL_bgl_string3931za700za7za7a4579za7, "walk4!1655", 10);
	      DEFINE_STRING(BGl_string3932z00zzast_walkz00,
		BgL_bgl_string3932za700za7za7a4580za7, "walk4!", 6);
	      DEFINE_STRING(BGl_string3933z00zzast_walkz00,
		BgL_bgl_string3933za700za7za7a4581za7, "Internal Error: forgot Node type",
		32);
	      DEFINE_STRING(BGl_string3934z00zzast_walkz00,
		BgL_bgl_string3934za700za7za7a4582za7, "walk3!", 6);
	      DEFINE_STRING(BGl_string3935z00zzast_walkz00,
		BgL_bgl_string3935za700za7za7a4583za7, "walk2!", 6);
	      DEFINE_STRING(BGl_string3936z00zzast_walkz00,
		BgL_bgl_string3936za700za7za7a4584za7, "walk1!", 6);
	      DEFINE_STRING(BGl_string3937z00zzast_walkz00,
		BgL_bgl_string3937za700za7za7a4585za7, "walk0!", 6);
	      DEFINE_STRING(BGl_string3938z00zzast_walkz00,
		BgL_bgl_string3938za700za7za7a4586za7, "walk3*", 6);
	      DEFINE_STRING(BGl_string3939z00zzast_walkz00,
		BgL_bgl_string3939za700za7za7a4587za7, "walk2*", 6);
	      DEFINE_STRING(BGl_string3940z00zzast_walkz00,
		BgL_bgl_string3940za700za7za7a4588za7, "walk1*", 6);
	      DEFINE_STRING(BGl_string3941z00zzast_walkz00,
		BgL_bgl_string3941za700za7za7a4589za7, "walk0*", 6);
	      DEFINE_STRING(BGl_string3942z00zzast_walkz00,
		BgL_bgl_string3942za700za7za7a4590za7, "walk4", 5);
	      DEFINE_STRING(BGl_string3943z00zzast_walkz00,
		BgL_bgl_string3943za700za7za7a4591za7, "walk3", 5);
	      DEFINE_STRING(BGl_string3944z00zzast_walkz00,
		BgL_bgl_string3944za700za7za7a4592za7, "walk2", 5);
	      DEFINE_STRING(BGl_string3945z00zzast_walkz00,
		BgL_bgl_string3945za700za7za7a4593za7, "walk1", 5);
	      DEFINE_STRING(BGl_string3946z00zzast_walkz00,
		BgL_bgl_string3946za700za7za7a4594za7, "walk0", 5);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_walk0za2zd2envz70zzast_walkz00,
		BgL_bgl_za762walk0za7a2za7c0za7za74595za7, BGl_z62walk0za2zc0zzast_walkz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_walk1za2zd2envz70zzast_walkz00,
		BgL_bgl_za762walk1za7a2za7c0za7za74596za7, BGl_z62walk1za2zc0zzast_walkz00,
		0L, BUNSPEC, 3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzast_walkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_walkz00(long
		BgL_checksumz00_10083, char *BgL_fromz00_10084)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzast_walkz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_walkz00();
					BGl_libraryzd2moduleszd2initz00zzast_walkz00();
					BGl_importedzd2moduleszd2initz00zzast_walkz00();
					BGl_genericzd2initzd2zzast_walkz00();
					BGl_methodzd2initzd2zzast_walkz00();
					return BGl_toplevelzd2initzd2zzast_walkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_walkz00()
	{
		{	/* Ast/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_walk");
			BGl_modulezd2initializa7ationz75zz__pp_circlez00(((long) 0), "ast_walk");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_walk");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"ast_walk");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "ast_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_walk");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_walkz00()
	{
		{	/* Ast/walk.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_walkz00()
	{
		{	/* Ast/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzast_walkz00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_2258;

				BgL_headz00_2258 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_2259;
					obj_t BgL_tailz00_2260;

					BgL_prevz00_2259 = BgL_headz00_2258;
					BgL_tailz00_2260 = BgL_l1z00_1;
				BgL_loopz00_2261:
					if (PAIRP(BgL_tailz00_2260))
						{
							obj_t BgL_newzd2prevzd2_2263;

							BgL_newzd2prevzd2_2263 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_2260), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_2259, BgL_newzd2prevzd2_2263);
							{
								obj_t BgL_tailz00_10111;
								obj_t BgL_prevz00_10110;

								BgL_prevz00_10110 = BgL_newzd2prevzd2_2263;
								BgL_tailz00_10111 = CDR(BgL_tailz00_2260);
								BgL_tailz00_2260 = BgL_tailz00_10111;
								BgL_prevz00_2259 = BgL_prevz00_10110;
								goto BgL_loopz00_2261;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_2258);
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_walkz00()
	{
		{	/* Ast/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_walkz00()
	{
		{	/* Ast/walk.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00(BGl_walk0zd2envzd2zzast_walkz00,
				BGl_proc3902z00zzast_walkz00, BGl_nodez00zzast_nodez00,
				BGl_string3903z00zzast_walkz00);
			BGl_registerzd2genericz12zc0zz__objectz00(BGl_walk1zd2envzd2zzast_walkz00,
				BGl_proc3904z00zzast_walkz00, BGl_nodez00zzast_nodez00,
				BGl_string3905z00zzast_walkz00);
			BGl_registerzd2genericz12zc0zz__objectz00(BGl_walk2zd2envzd2zzast_walkz00,
				BGl_proc3906z00zzast_walkz00, BGl_nodez00zzast_nodez00,
				BGl_string3907z00zzast_walkz00);
			BGl_registerzd2genericz12zc0zz__objectz00(BGl_walk3zd2envzd2zzast_walkz00,
				BGl_proc3908z00zzast_walkz00, BGl_nodez00zzast_nodez00,
				BGl_string3909z00zzast_walkz00);
			BGl_registerzd2genericz12zc0zz__objectz00(BGl_walk4zd2envzd2zzast_walkz00,
				BGl_proc3910z00zzast_walkz00, BGl_nodez00zzast_nodez00,
				BGl_string3911z00zzast_walkz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_walk0za2zd2envz70zzast_walkz00, BGl_proc3912z00zzast_walkz00,
				BGl_nodez00zzast_nodez00, BGl_string3913z00zzast_walkz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_walk1za2zd2envz70zzast_walkz00, BGl_proc3914z00zzast_walkz00,
				BGl_nodez00zzast_nodez00, BGl_string3915z00zzast_walkz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_walk2za2zd2envz70zzast_walkz00, BGl_proc3916z00zzast_walkz00,
				BGl_nodez00zzast_nodez00, BGl_string3917z00zzast_walkz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_walk3za2zd2envz70zzast_walkz00, BGl_proc3918z00zzast_walkz00,
				BGl_nodez00zzast_nodez00, BGl_string3919z00zzast_walkz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_walk4za2zd2envz70zzast_walkz00, BGl_proc3920z00zzast_walkz00,
				BGl_nodez00zzast_nodez00, BGl_string3921z00zzast_walkz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_walk0z12zd2envzc0zzast_walkz00, BGl_proc3922z00zzast_walkz00,
				BGl_nodez00zzast_nodez00, BGl_string3923z00zzast_walkz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_walk1z12zd2envzc0zzast_walkz00, BGl_proc3924z00zzast_walkz00,
				BGl_nodez00zzast_nodez00, BGl_string3925z00zzast_walkz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_walk2z12zd2envzc0zzast_walkz00, BGl_proc3926z00zzast_walkz00,
				BGl_nodez00zzast_nodez00, BGl_string3927z00zzast_walkz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_walk3z12zd2envzc0zzast_walkz00, BGl_proc3928z00zzast_walkz00,
				BGl_nodez00zzast_nodez00, BGl_string3929z00zzast_walkz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_walk4z12zd2envzc0zzast_walkz00, BGl_proc3930z00zzast_walkz00,
				BGl_nodez00zzast_nodez00, BGl_string3931z00zzast_walkz00);
		}

	}



/* &walk4!1655 */
	obj_t BGl_z62walk4z121655z70zzast_walkz00(obj_t BgL_envz00_7189,
		obj_t BgL_nz00_7190, obj_t BgL_pz00_7191, obj_t BgL_arg0z00_7192,
		obj_t BgL_arg1z00_7193, obj_t BgL_arg2z00_7194, obj_t BgL_arg3z00_7195)
	{
		{	/* Ast/walk.scm 160 */
			{	/* Ast/walk.scm 162 */
				obj_t BgL_arg2225z00_8827;

				{	/* Ast/walk.scm 162 */
					obj_t BgL_zc3z04anonymousza32227ze3z87_8828;

					BgL_zc3z04anonymousza32227ze3z87_8828 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza32227ze3ze5zzast_walkz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza32227ze3z87_8828,
						(int) (((long) 0)), ((obj_t) ((BgL_nodez00_bglt) BgL_nz00_7190)));
					BgL_arg2225z00_8827 =
						BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
						(BgL_zc3z04anonymousza32227ze3z87_8828);
				}
				return
					BGl_errorz00zz__errorz00(BGl_string3932z00zzast_walkz00,
					BGl_string3933z00zzast_walkz00, BgL_arg2225z00_8827);
			}
		}

	}



/* &<@anonymous:2227> */
	obj_t BGl_z62zc3z04anonymousza32227ze3ze5zzast_walkz00(obj_t BgL_envz00_7196)
	{
		{	/* Ast/walk.scm 162 */
			{	/* Ast/walk.scm 162 */
				BgL_nodez00_bglt BgL_nz00_7197;

				BgL_nz00_7197 =
					((BgL_nodez00_bglt)
					PROCEDURE_REF(BgL_envz00_7196, (int) (((long) 0))));
				{	/* Ast/walk.scm 162 */
					obj_t BgL_portz00_8829;

					{	/* Ast/walk.scm 162 */
						obj_t BgL_res3652z00_8830;

						{	/* Ast/walk.scm 162 */
							obj_t BgL_tmpz00_10141;

							BgL_tmpz00_10141 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res3652z00_8830 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_10141);
						}
						BgL_portz00_8829 = BgL_res3652z00_8830;
					}
					{	/* Ast/walk.scm 162 */

						return
							BGl_writezd2circlezd2zz__pp_circlez00(
							((obj_t) BgL_nz00_7197), BgL_portz00_8829);
					}
				}
			}
		}

	}



/* &walk3!1653 */
	obj_t BGl_z62walk3z121653z70zzast_walkz00(obj_t BgL_envz00_7198,
		obj_t BgL_nz00_7199, obj_t BgL_pz00_7200, obj_t BgL_arg0z00_7201,
		obj_t BgL_arg1z00_7202, obj_t BgL_arg2z00_7203)
	{
		{	/* Ast/walk.scm 157 */
			{	/* Ast/walk.scm 159 */
				obj_t BgL_arg2221z00_8833;

				{	/* Ast/walk.scm 159 */
					obj_t BgL_zc3z04anonymousza32223ze3z87_8834;

					BgL_zc3z04anonymousza32223ze3z87_8834 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza32223ze3ze5zzast_walkz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza32223ze3z87_8834,
						(int) (((long) 0)), ((obj_t) ((BgL_nodez00_bglt) BgL_nz00_7199)));
					BgL_arg2221z00_8833 =
						BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
						(BgL_zc3z04anonymousza32223ze3z87_8834);
				}
				return
					BGl_errorz00zz__errorz00(BGl_string3934z00zzast_walkz00,
					BGl_string3933z00zzast_walkz00, BgL_arg2221z00_8833);
			}
		}

	}



/* &<@anonymous:2223> */
	obj_t BGl_z62zc3z04anonymousza32223ze3ze5zzast_walkz00(obj_t BgL_envz00_7204)
	{
		{	/* Ast/walk.scm 159 */
			{	/* Ast/walk.scm 159 */
				BgL_nodez00_bglt BgL_nz00_7205;

				BgL_nz00_7205 =
					((BgL_nodez00_bglt)
					PROCEDURE_REF(BgL_envz00_7204, (int) (((long) 0))));
				{	/* Ast/walk.scm 159 */
					obj_t BgL_portz00_8835;

					{	/* Ast/walk.scm 159 */
						obj_t BgL_res3651z00_8836;

						{	/* Ast/walk.scm 159 */
							obj_t BgL_tmpz00_10158;

							BgL_tmpz00_10158 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res3651z00_8836 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_10158);
						}
						BgL_portz00_8835 = BgL_res3651z00_8836;
					}
					{	/* Ast/walk.scm 159 */

						return
							BGl_writezd2circlezd2zz__pp_circlez00(
							((obj_t) BgL_nz00_7205), BgL_portz00_8835);
					}
				}
			}
		}

	}



/* &walk2!1651 */
	obj_t BGl_z62walk2z121651z70zzast_walkz00(obj_t BgL_envz00_7206,
		obj_t BgL_nz00_7207, obj_t BgL_pz00_7208, obj_t BgL_arg0z00_7209,
		obj_t BgL_arg1z00_7210)
	{
		{	/* Ast/walk.scm 154 */
			{	/* Ast/walk.scm 156 */
				obj_t BgL_arg2217z00_8839;

				{	/* Ast/walk.scm 156 */
					obj_t BgL_zc3z04anonymousza32219ze3z87_8840;

					BgL_zc3z04anonymousza32219ze3z87_8840 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza32219ze3ze5zzast_walkz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza32219ze3z87_8840,
						(int) (((long) 0)), ((obj_t) ((BgL_nodez00_bglt) BgL_nz00_7207)));
					BgL_arg2217z00_8839 =
						BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
						(BgL_zc3z04anonymousza32219ze3z87_8840);
				}
				return
					BGl_errorz00zz__errorz00(BGl_string3935z00zzast_walkz00,
					BGl_string3933z00zzast_walkz00, BgL_arg2217z00_8839);
			}
		}

	}



/* &<@anonymous:2219> */
	obj_t BGl_z62zc3z04anonymousza32219ze3ze5zzast_walkz00(obj_t BgL_envz00_7211)
	{
		{	/* Ast/walk.scm 156 */
			{	/* Ast/walk.scm 156 */
				BgL_nodez00_bglt BgL_nz00_7212;

				BgL_nz00_7212 =
					((BgL_nodez00_bglt)
					PROCEDURE_REF(BgL_envz00_7211, (int) (((long) 0))));
				{	/* Ast/walk.scm 156 */
					obj_t BgL_portz00_8841;

					{	/* Ast/walk.scm 156 */
						obj_t BgL_res3650z00_8842;

						{	/* Ast/walk.scm 156 */
							obj_t BgL_tmpz00_10175;

							BgL_tmpz00_10175 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res3650z00_8842 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_10175);
						}
						BgL_portz00_8841 = BgL_res3650z00_8842;
					}
					{	/* Ast/walk.scm 156 */

						return
							BGl_writezd2circlezd2zz__pp_circlez00(
							((obj_t) BgL_nz00_7212), BgL_portz00_8841);
					}
				}
			}
		}

	}



/* &walk1!1648 */
	obj_t BGl_z62walk1z121648z70zzast_walkz00(obj_t BgL_envz00_7213,
		obj_t BgL_nz00_7214, obj_t BgL_pz00_7215, obj_t BgL_arg0z00_7216)
	{
		{	/* Ast/walk.scm 151 */
			{	/* Ast/walk.scm 153 */
				obj_t BgL_arg2213z00_8845;

				{	/* Ast/walk.scm 153 */
					obj_t BgL_zc3z04anonymousza32215ze3z87_8846;

					BgL_zc3z04anonymousza32215ze3z87_8846 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza32215ze3ze5zzast_walkz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza32215ze3z87_8846,
						(int) (((long) 0)), ((obj_t) ((BgL_nodez00_bglt) BgL_nz00_7214)));
					BgL_arg2213z00_8845 =
						BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
						(BgL_zc3z04anonymousza32215ze3z87_8846);
				}
				return
					BGl_errorz00zz__errorz00(BGl_string3936z00zzast_walkz00,
					BGl_string3933z00zzast_walkz00, BgL_arg2213z00_8845);
			}
		}

	}



/* &<@anonymous:2215> */
	obj_t BGl_z62zc3z04anonymousza32215ze3ze5zzast_walkz00(obj_t BgL_envz00_7217)
	{
		{	/* Ast/walk.scm 153 */
			{	/* Ast/walk.scm 153 */
				BgL_nodez00_bglt BgL_nz00_7218;

				BgL_nz00_7218 =
					((BgL_nodez00_bglt)
					PROCEDURE_REF(BgL_envz00_7217, (int) (((long) 0))));
				{	/* Ast/walk.scm 153 */
					obj_t BgL_portz00_8847;

					{	/* Ast/walk.scm 153 */
						obj_t BgL_res3649z00_8848;

						{	/* Ast/walk.scm 153 */
							obj_t BgL_tmpz00_10192;

							BgL_tmpz00_10192 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res3649z00_8848 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_10192);
						}
						BgL_portz00_8847 = BgL_res3649z00_8848;
					}
					{	/* Ast/walk.scm 153 */

						return
							BGl_writezd2circlezd2zz__pp_circlez00(
							((obj_t) BgL_nz00_7218), BgL_portz00_8847);
					}
				}
			}
		}

	}



/* &walk0!1646 */
	obj_t BGl_z62walk0z121646z70zzast_walkz00(obj_t BgL_envz00_7219,
		obj_t BgL_nz00_7220, obj_t BgL_pz00_7221)
	{
		{	/* Ast/walk.scm 148 */
			{	/* Ast/walk.scm 150 */
				obj_t BgL_arg2209z00_8851;

				{	/* Ast/walk.scm 150 */
					obj_t BgL_zc3z04anonymousza32211ze3z87_8852;

					BgL_zc3z04anonymousza32211ze3z87_8852 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza32211ze3ze5zzast_walkz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza32211ze3z87_8852,
						(int) (((long) 0)), ((obj_t) ((BgL_nodez00_bglt) BgL_nz00_7220)));
					BgL_arg2209z00_8851 =
						BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
						(BgL_zc3z04anonymousza32211ze3z87_8852);
				}
				return
					BGl_errorz00zz__errorz00(BGl_string3937z00zzast_walkz00,
					BGl_string3933z00zzast_walkz00, BgL_arg2209z00_8851);
			}
		}

	}



/* &<@anonymous:2211> */
	obj_t BGl_z62zc3z04anonymousza32211ze3ze5zzast_walkz00(obj_t BgL_envz00_7222)
	{
		{	/* Ast/walk.scm 150 */
			{	/* Ast/walk.scm 150 */
				BgL_nodez00_bglt BgL_nz00_7223;

				BgL_nz00_7223 =
					((BgL_nodez00_bglt)
					PROCEDURE_REF(BgL_envz00_7222, (int) (((long) 0))));
				{	/* Ast/walk.scm 150 */
					obj_t BgL_portz00_8853;

					{	/* Ast/walk.scm 150 */
						obj_t BgL_res3648z00_8854;

						{	/* Ast/walk.scm 150 */
							obj_t BgL_tmpz00_10209;

							BgL_tmpz00_10209 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res3648z00_8854 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_10209);
						}
						BgL_portz00_8853 = BgL_res3648z00_8854;
					}
					{	/* Ast/walk.scm 150 */

						return
							BGl_writezd2circlezd2zz__pp_circlez00(
							((obj_t) BgL_nz00_7223), BgL_portz00_8853);
					}
				}
			}
		}

	}



/* &walk4*1644 */
	obj_t BGl_z62walk4za21644zc0zzast_walkz00(obj_t BgL_envz00_7224,
		obj_t BgL_nz00_7225, obj_t BgL_pz00_7226, obj_t BgL_arg0z00_7227,
		obj_t BgL_arg1z00_7228, obj_t BgL_arg2z00_7229, obj_t BgL_arg3z00_7230)
	{
		{	/* Ast/walk.scm 144 */
			{	/* Ast/walk.scm 146 */
				obj_t BgL_arg2205z00_8857;

				{	/* Ast/walk.scm 146 */
					obj_t BgL_zc3z04anonymousza32207ze3z87_8858;

					BgL_zc3z04anonymousza32207ze3z87_8858 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza32207ze3ze5zzast_walkz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza32207ze3z87_8858,
						(int) (((long) 0)), ((obj_t) ((BgL_nodez00_bglt) BgL_nz00_7225)));
					BgL_arg2205z00_8857 =
						BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
						(BgL_zc3z04anonymousza32207ze3z87_8858);
				}
				return
					BGl_errorz00zz__errorz00(BGl_string3932z00zzast_walkz00,
					BGl_string3933z00zzast_walkz00, BgL_arg2205z00_8857);
			}
		}

	}



/* &<@anonymous:2207> */
	obj_t BGl_z62zc3z04anonymousza32207ze3ze5zzast_walkz00(obj_t BgL_envz00_7231)
	{
		{	/* Ast/walk.scm 146 */
			{	/* Ast/walk.scm 146 */
				BgL_nodez00_bglt BgL_nz00_7232;

				BgL_nz00_7232 =
					((BgL_nodez00_bglt)
					PROCEDURE_REF(BgL_envz00_7231, (int) (((long) 0))));
				{	/* Ast/walk.scm 146 */
					obj_t BgL_portz00_8859;

					{	/* Ast/walk.scm 146 */
						obj_t BgL_res3647z00_8860;

						{	/* Ast/walk.scm 146 */
							obj_t BgL_tmpz00_10226;

							BgL_tmpz00_10226 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res3647z00_8860 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_10226);
						}
						BgL_portz00_8859 = BgL_res3647z00_8860;
					}
					{	/* Ast/walk.scm 146 */

						return
							BGl_writezd2circlezd2zz__pp_circlez00(
							((obj_t) BgL_nz00_7232), BgL_portz00_8859);
					}
				}
			}
		}

	}



/* &walk3*1642 */
	obj_t BGl_z62walk3za21642zc0zzast_walkz00(obj_t BgL_envz00_7233,
		obj_t BgL_nz00_7234, obj_t BgL_pz00_7235, obj_t BgL_arg0z00_7236,
		obj_t BgL_arg1z00_7237, obj_t BgL_arg2z00_7238)
	{
		{	/* Ast/walk.scm 141 */
			{	/* Ast/walk.scm 143 */
				obj_t BgL_arg2201z00_8863;

				{	/* Ast/walk.scm 143 */
					obj_t BgL_zc3z04anonymousza32203ze3z87_8864;

					BgL_zc3z04anonymousza32203ze3z87_8864 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza32203ze3ze5zzast_walkz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza32203ze3z87_8864,
						(int) (((long) 0)), ((obj_t) ((BgL_nodez00_bglt) BgL_nz00_7234)));
					BgL_arg2201z00_8863 =
						BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
						(BgL_zc3z04anonymousza32203ze3z87_8864);
				}
				return
					BGl_errorz00zz__errorz00(BGl_string3938z00zzast_walkz00,
					BGl_string3933z00zzast_walkz00, BgL_arg2201z00_8863);
			}
		}

	}



/* &<@anonymous:2203> */
	obj_t BGl_z62zc3z04anonymousza32203ze3ze5zzast_walkz00(obj_t BgL_envz00_7239)
	{
		{	/* Ast/walk.scm 143 */
			{	/* Ast/walk.scm 143 */
				BgL_nodez00_bglt BgL_nz00_7240;

				BgL_nz00_7240 =
					((BgL_nodez00_bglt)
					PROCEDURE_REF(BgL_envz00_7239, (int) (((long) 0))));
				{	/* Ast/walk.scm 143 */
					obj_t BgL_portz00_8865;

					{	/* Ast/walk.scm 143 */
						obj_t BgL_res3646z00_8866;

						{	/* Ast/walk.scm 143 */
							obj_t BgL_tmpz00_10243;

							BgL_tmpz00_10243 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res3646z00_8866 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_10243);
						}
						BgL_portz00_8865 = BgL_res3646z00_8866;
					}
					{	/* Ast/walk.scm 143 */

						return
							BGl_writezd2circlezd2zz__pp_circlez00(
							((obj_t) BgL_nz00_7240), BgL_portz00_8865);
					}
				}
			}
		}

	}



/* &walk2*1640 */
	obj_t BGl_z62walk2za21640zc0zzast_walkz00(obj_t BgL_envz00_7241,
		obj_t BgL_nz00_7242, obj_t BgL_pz00_7243, obj_t BgL_arg0z00_7244,
		obj_t BgL_arg1z00_7245)
	{
		{	/* Ast/walk.scm 138 */
			{	/* Ast/walk.scm 140 */
				obj_t BgL_arg2197z00_8869;

				{	/* Ast/walk.scm 140 */
					obj_t BgL_zc3z04anonymousza32199ze3z87_8870;

					BgL_zc3z04anonymousza32199ze3z87_8870 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza32199ze3ze5zzast_walkz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza32199ze3z87_8870,
						(int) (((long) 0)), ((obj_t) ((BgL_nodez00_bglt) BgL_nz00_7242)));
					BgL_arg2197z00_8869 =
						BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
						(BgL_zc3z04anonymousza32199ze3z87_8870);
				}
				return
					BGl_errorz00zz__errorz00(BGl_string3939z00zzast_walkz00,
					BGl_string3933z00zzast_walkz00, BgL_arg2197z00_8869);
			}
		}

	}



/* &<@anonymous:2199> */
	obj_t BGl_z62zc3z04anonymousza32199ze3ze5zzast_walkz00(obj_t BgL_envz00_7246)
	{
		{	/* Ast/walk.scm 140 */
			{	/* Ast/walk.scm 140 */
				BgL_nodez00_bglt BgL_nz00_7247;

				BgL_nz00_7247 =
					((BgL_nodez00_bglt)
					PROCEDURE_REF(BgL_envz00_7246, (int) (((long) 0))));
				{	/* Ast/walk.scm 140 */
					obj_t BgL_portz00_8871;

					{	/* Ast/walk.scm 140 */
						obj_t BgL_res3645z00_8872;

						{	/* Ast/walk.scm 140 */
							obj_t BgL_tmpz00_10260;

							BgL_tmpz00_10260 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res3645z00_8872 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_10260);
						}
						BgL_portz00_8871 = BgL_res3645z00_8872;
					}
					{	/* Ast/walk.scm 140 */

						return
							BGl_writezd2circlezd2zz__pp_circlez00(
							((obj_t) BgL_nz00_7247), BgL_portz00_8871);
					}
				}
			}
		}

	}



/* &walk1*1638 */
	obj_t BGl_z62walk1za21638zc0zzast_walkz00(obj_t BgL_envz00_7248,
		obj_t BgL_nz00_7249, obj_t BgL_pz00_7250, obj_t BgL_arg0z00_7251)
	{
		{	/* Ast/walk.scm 135 */
			{	/* Ast/walk.scm 137 */
				obj_t BgL_arg2193z00_8875;

				{	/* Ast/walk.scm 137 */
					obj_t BgL_zc3z04anonymousza32195ze3z87_8876;

					BgL_zc3z04anonymousza32195ze3z87_8876 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza32195ze3ze5zzast_walkz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza32195ze3z87_8876,
						(int) (((long) 0)), ((obj_t) ((BgL_nodez00_bglt) BgL_nz00_7249)));
					BgL_arg2193z00_8875 =
						BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
						(BgL_zc3z04anonymousza32195ze3z87_8876);
				}
				return
					BGl_errorz00zz__errorz00(BGl_string3940z00zzast_walkz00,
					BGl_string3933z00zzast_walkz00, BgL_arg2193z00_8875);
			}
		}

	}



/* &<@anonymous:2195> */
	obj_t BGl_z62zc3z04anonymousza32195ze3ze5zzast_walkz00(obj_t BgL_envz00_7252)
	{
		{	/* Ast/walk.scm 137 */
			{	/* Ast/walk.scm 137 */
				BgL_nodez00_bglt BgL_nz00_7253;

				BgL_nz00_7253 =
					((BgL_nodez00_bglt)
					PROCEDURE_REF(BgL_envz00_7252, (int) (((long) 0))));
				{	/* Ast/walk.scm 137 */
					obj_t BgL_portz00_8877;

					{	/* Ast/walk.scm 137 */
						obj_t BgL_res3644z00_8878;

						{	/* Ast/walk.scm 137 */
							obj_t BgL_tmpz00_10277;

							BgL_tmpz00_10277 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res3644z00_8878 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_10277);
						}
						BgL_portz00_8877 = BgL_res3644z00_8878;
					}
					{	/* Ast/walk.scm 137 */

						return
							BGl_writezd2circlezd2zz__pp_circlez00(
							((obj_t) BgL_nz00_7253), BgL_portz00_8877);
					}
				}
			}
		}

	}



/* &walk0*1636 */
	obj_t BGl_z62walk0za21636zc0zzast_walkz00(obj_t BgL_envz00_7254,
		obj_t BgL_nz00_7255, obj_t BgL_pz00_7256)
	{
		{	/* Ast/walk.scm 132 */
			{	/* Ast/walk.scm 134 */
				obj_t BgL_arg2189z00_8881;

				{	/* Ast/walk.scm 134 */
					obj_t BgL_zc3z04anonymousza32191ze3z87_8882;

					BgL_zc3z04anonymousza32191ze3z87_8882 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza32191ze3ze5zzast_walkz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza32191ze3z87_8882,
						(int) (((long) 0)), ((obj_t) ((BgL_nodez00_bglt) BgL_nz00_7255)));
					BgL_arg2189z00_8881 =
						BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
						(BgL_zc3z04anonymousza32191ze3z87_8882);
				}
				return
					BGl_errorz00zz__errorz00(BGl_string3941z00zzast_walkz00,
					BGl_string3933z00zzast_walkz00, BgL_arg2189z00_8881);
			}
		}

	}



/* &<@anonymous:2191> */
	obj_t BGl_z62zc3z04anonymousza32191ze3ze5zzast_walkz00(obj_t BgL_envz00_7257)
	{
		{	/* Ast/walk.scm 134 */
			{	/* Ast/walk.scm 134 */
				BgL_nodez00_bglt BgL_nz00_7258;

				BgL_nz00_7258 =
					((BgL_nodez00_bglt)
					PROCEDURE_REF(BgL_envz00_7257, (int) (((long) 0))));
				{	/* Ast/walk.scm 134 */
					obj_t BgL_portz00_8883;

					{	/* Ast/walk.scm 134 */
						obj_t BgL_res3643z00_8884;

						{	/* Ast/walk.scm 134 */
							obj_t BgL_tmpz00_10294;

							BgL_tmpz00_10294 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res3643z00_8884 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_10294);
						}
						BgL_portz00_8883 = BgL_res3643z00_8884;
					}
					{	/* Ast/walk.scm 134 */

						return
							BGl_writezd2circlezd2zz__pp_circlez00(
							((obj_t) BgL_nz00_7258), BgL_portz00_8883);
					}
				}
			}
		}

	}



/* &walk41634 */
	obj_t BGl_z62walk41634z62zzast_walkz00(obj_t BgL_envz00_7259,
		obj_t BgL_nz00_7260, obj_t BgL_pz00_7261, obj_t BgL_arg0z00_7262,
		obj_t BgL_arg1z00_7263, obj_t BgL_arg2z00_7264, obj_t BgL_arg3z00_7265)
	{
		{	/* Ast/walk.scm 128 */
			{	/* Ast/walk.scm 130 */
				obj_t BgL_arg2185z00_8887;

				{	/* Ast/walk.scm 130 */
					obj_t BgL_zc3z04anonymousza32187ze3z87_8888;

					BgL_zc3z04anonymousza32187ze3z87_8888 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza32187ze3ze5zzast_walkz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza32187ze3z87_8888,
						(int) (((long) 0)), ((obj_t) ((BgL_nodez00_bglt) BgL_nz00_7260)));
					BgL_arg2185z00_8887 =
						BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
						(BgL_zc3z04anonymousza32187ze3z87_8888);
				}
				return
					BGl_errorz00zz__errorz00(BGl_string3942z00zzast_walkz00,
					BGl_string3933z00zzast_walkz00, BgL_arg2185z00_8887);
			}
		}

	}



/* &<@anonymous:2187> */
	obj_t BGl_z62zc3z04anonymousza32187ze3ze5zzast_walkz00(obj_t BgL_envz00_7266)
	{
		{	/* Ast/walk.scm 130 */
			{	/* Ast/walk.scm 130 */
				BgL_nodez00_bglt BgL_nz00_7267;

				BgL_nz00_7267 =
					((BgL_nodez00_bglt)
					PROCEDURE_REF(BgL_envz00_7266, (int) (((long) 0))));
				{	/* Ast/walk.scm 130 */
					obj_t BgL_portz00_8889;

					{	/* Ast/walk.scm 130 */
						obj_t BgL_res3642z00_8890;

						{	/* Ast/walk.scm 130 */
							obj_t BgL_tmpz00_10311;

							BgL_tmpz00_10311 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res3642z00_8890 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_10311);
						}
						BgL_portz00_8889 = BgL_res3642z00_8890;
					}
					{	/* Ast/walk.scm 130 */

						return
							BGl_writezd2circlezd2zz__pp_circlez00(
							((obj_t) BgL_nz00_7267), BgL_portz00_8889);
					}
				}
			}
		}

	}



/* &walk31632 */
	obj_t BGl_z62walk31632z62zzast_walkz00(obj_t BgL_envz00_7268,
		obj_t BgL_nz00_7269, obj_t BgL_pz00_7270, obj_t BgL_arg0z00_7271,
		obj_t BgL_arg1z00_7272, obj_t BgL_arg2z00_7273)
	{
		{	/* Ast/walk.scm 125 */
			{	/* Ast/walk.scm 127 */
				obj_t BgL_arg2181z00_8893;

				{	/* Ast/walk.scm 127 */
					obj_t BgL_zc3z04anonymousza32183ze3z87_8894;

					BgL_zc3z04anonymousza32183ze3z87_8894 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza32183ze3ze5zzast_walkz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza32183ze3z87_8894,
						(int) (((long) 0)), ((obj_t) ((BgL_nodez00_bglt) BgL_nz00_7269)));
					BgL_arg2181z00_8893 =
						BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
						(BgL_zc3z04anonymousza32183ze3z87_8894);
				}
				return
					BGl_errorz00zz__errorz00(BGl_string3943z00zzast_walkz00,
					BGl_string3933z00zzast_walkz00, BgL_arg2181z00_8893);
			}
		}

	}



/* &<@anonymous:2183> */
	obj_t BGl_z62zc3z04anonymousza32183ze3ze5zzast_walkz00(obj_t BgL_envz00_7274)
	{
		{	/* Ast/walk.scm 127 */
			{	/* Ast/walk.scm 127 */
				BgL_nodez00_bglt BgL_nz00_7275;

				BgL_nz00_7275 =
					((BgL_nodez00_bglt)
					PROCEDURE_REF(BgL_envz00_7274, (int) (((long) 0))));
				{	/* Ast/walk.scm 127 */
					obj_t BgL_portz00_8895;

					{	/* Ast/walk.scm 127 */
						obj_t BgL_res3641z00_8896;

						{	/* Ast/walk.scm 127 */
							obj_t BgL_tmpz00_10328;

							BgL_tmpz00_10328 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res3641z00_8896 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_10328);
						}
						BgL_portz00_8895 = BgL_res3641z00_8896;
					}
					{	/* Ast/walk.scm 127 */

						return
							BGl_writezd2circlezd2zz__pp_circlez00(
							((obj_t) BgL_nz00_7275), BgL_portz00_8895);
					}
				}
			}
		}

	}



/* &walk21630 */
	obj_t BGl_z62walk21630z62zzast_walkz00(obj_t BgL_envz00_7276,
		obj_t BgL_nz00_7277, obj_t BgL_pz00_7278, obj_t BgL_arg0z00_7279,
		obj_t BgL_arg1z00_7280)
	{
		{	/* Ast/walk.scm 122 */
			{	/* Ast/walk.scm 124 */
				obj_t BgL_arg2177z00_8899;

				{	/* Ast/walk.scm 124 */
					obj_t BgL_zc3z04anonymousza32179ze3z87_8900;

					BgL_zc3z04anonymousza32179ze3z87_8900 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza32179ze3ze5zzast_walkz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza32179ze3z87_8900,
						(int) (((long) 0)), ((obj_t) ((BgL_nodez00_bglt) BgL_nz00_7277)));
					BgL_arg2177z00_8899 =
						BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
						(BgL_zc3z04anonymousza32179ze3z87_8900);
				}
				return
					BGl_errorz00zz__errorz00(BGl_string3944z00zzast_walkz00,
					BGl_string3933z00zzast_walkz00, BgL_arg2177z00_8899);
			}
		}

	}



/* &<@anonymous:2179> */
	obj_t BGl_z62zc3z04anonymousza32179ze3ze5zzast_walkz00(obj_t BgL_envz00_7281)
	{
		{	/* Ast/walk.scm 124 */
			{	/* Ast/walk.scm 124 */
				BgL_nodez00_bglt BgL_nz00_7282;

				BgL_nz00_7282 =
					((BgL_nodez00_bglt)
					PROCEDURE_REF(BgL_envz00_7281, (int) (((long) 0))));
				{	/* Ast/walk.scm 124 */
					obj_t BgL_portz00_8901;

					{	/* Ast/walk.scm 124 */
						obj_t BgL_res3640z00_8902;

						{	/* Ast/walk.scm 124 */
							obj_t BgL_tmpz00_10345;

							BgL_tmpz00_10345 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res3640z00_8902 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_10345);
						}
						BgL_portz00_8901 = BgL_res3640z00_8902;
					}
					{	/* Ast/walk.scm 124 */

						return
							BGl_writezd2circlezd2zz__pp_circlez00(
							((obj_t) BgL_nz00_7282), BgL_portz00_8901);
					}
				}
			}
		}

	}



/* &walk11628 */
	obj_t BGl_z62walk11628z62zzast_walkz00(obj_t BgL_envz00_7283,
		obj_t BgL_nz00_7284, obj_t BgL_pz00_7285, obj_t BgL_arg0z00_7286)
	{
		{	/* Ast/walk.scm 119 */
			{	/* Ast/walk.scm 121 */
				obj_t BgL_arg2173z00_8905;

				{	/* Ast/walk.scm 121 */
					obj_t BgL_zc3z04anonymousza32175ze3z87_8906;

					BgL_zc3z04anonymousza32175ze3z87_8906 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza32175ze3ze5zzast_walkz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza32175ze3z87_8906,
						(int) (((long) 0)), ((obj_t) ((BgL_nodez00_bglt) BgL_nz00_7284)));
					BgL_arg2173z00_8905 =
						BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
						(BgL_zc3z04anonymousza32175ze3z87_8906);
				}
				return
					BGl_errorz00zz__errorz00(BGl_string3945z00zzast_walkz00,
					BGl_string3933z00zzast_walkz00, BgL_arg2173z00_8905);
			}
		}

	}



/* &<@anonymous:2175> */
	obj_t BGl_z62zc3z04anonymousza32175ze3ze5zzast_walkz00(obj_t BgL_envz00_7287)
	{
		{	/* Ast/walk.scm 121 */
			{	/* Ast/walk.scm 121 */
				BgL_nodez00_bglt BgL_nz00_7288;

				BgL_nz00_7288 =
					((BgL_nodez00_bglt)
					PROCEDURE_REF(BgL_envz00_7287, (int) (((long) 0))));
				{	/* Ast/walk.scm 121 */
					obj_t BgL_portz00_8907;

					{	/* Ast/walk.scm 121 */
						obj_t BgL_res3639z00_8908;

						{	/* Ast/walk.scm 121 */
							obj_t BgL_tmpz00_10362;

							BgL_tmpz00_10362 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res3639z00_8908 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_10362);
						}
						BgL_portz00_8907 = BgL_res3639z00_8908;
					}
					{	/* Ast/walk.scm 121 */

						return
							BGl_writezd2circlezd2zz__pp_circlez00(
							((obj_t) BgL_nz00_7288), BgL_portz00_8907);
					}
				}
			}
		}

	}



/* &walk01626 */
	obj_t BGl_z62walk01626z62zzast_walkz00(obj_t BgL_envz00_7289,
		obj_t BgL_nz00_7290, obj_t BgL_pz00_7291)
	{
		{	/* Ast/walk.scm 116 */
			{	/* Ast/walk.scm 118 */
				obj_t BgL_arg2169z00_8911;

				{	/* Ast/walk.scm 118 */
					obj_t BgL_zc3z04anonymousza32171ze3z87_8912;

					BgL_zc3z04anonymousza32171ze3z87_8912 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza32171ze3ze5zzast_walkz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza32171ze3z87_8912,
						(int) (((long) 0)), ((obj_t) ((BgL_nodez00_bglt) BgL_nz00_7290)));
					BgL_arg2169z00_8911 =
						BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
						(BgL_zc3z04anonymousza32171ze3z87_8912);
				}
				return
					BGl_errorz00zz__errorz00(BGl_string3946z00zzast_walkz00,
					BGl_string3933z00zzast_walkz00, BgL_arg2169z00_8911);
			}
		}

	}



/* &<@anonymous:2171> */
	obj_t BGl_z62zc3z04anonymousza32171ze3ze5zzast_walkz00(obj_t BgL_envz00_7292)
	{
		{	/* Ast/walk.scm 118 */
			{	/* Ast/walk.scm 118 */
				BgL_nodez00_bglt BgL_nz00_7293;

				BgL_nz00_7293 =
					((BgL_nodez00_bglt)
					PROCEDURE_REF(BgL_envz00_7292, (int) (((long) 0))));
				{	/* Ast/walk.scm 118 */
					obj_t BgL_portz00_8913;

					{	/* Ast/walk.scm 118 */
						obj_t BgL_res3638z00_8914;

						{	/* Ast/walk.scm 118 */
							obj_t BgL_tmpz00_10379;

							BgL_tmpz00_10379 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res3638z00_8914 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_10379);
						}
						BgL_portz00_8913 = BgL_res3638z00_8914;
					}
					{	/* Ast/walk.scm 118 */

						return
							BGl_writezd2circlezd2zz__pp_circlez00(
							((obj_t) BgL_nz00_7293), BgL_portz00_8913);
					}
				}
			}
		}

	}



/* walk0 */
	BGL_EXPORTED_DEF obj_t BGl_walk0z00zzast_walkz00(BgL_nodez00_bglt BgL_nz00_3,
		obj_t BgL_pz00_4)
	{
		{	/* Ast/walk.scm 116 */
			{	/* Ast/walk.scm 116 */
				obj_t BgL_method1627z00_2461;

				{	/* Ast/walk.scm 116 */
					obj_t BgL_res3663z00_6004;

					{	/* Ast/walk.scm 116 */
						long BgL_objzd2classzd2numz00_5969;

						{	/* Ast/walk.scm 116 */
							long BgL_res3653z00_5972;

							BgL_res3653z00_5972 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nz00_3));
							BgL_objzd2classzd2numz00_5969 = BgL_res3653z00_5972;
						}
						{	/* Ast/walk.scm 116 */
							obj_t BgL_arg1813z00_5970;

							BgL_arg1813z00_5970 =
								PROCEDURE_REF(BGl_walk0zd2envzd2zzast_walkz00,
								(int) (((long) 1)));
							{	/* Ast/walk.scm 116 */
								int BgL_offsetz00_5974;

								BgL_offsetz00_5974 = (int) (BgL_objzd2classzd2numz00_5969);
								{	/* Ast/walk.scm 116 */
									long BgL_offsetz00_5975;

									BgL_offsetz00_5975 =
										((long) (BgL_offsetz00_5974) - OBJECT_TYPE);
									{	/* Ast/walk.scm 116 */
										long BgL_modz00_5976;

										BgL_modz00_5976 =
											(BgL_offsetz00_5975 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/walk.scm 116 */
											long BgL_restz00_5978;

											BgL_restz00_5978 =
												(BgL_offsetz00_5975 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/walk.scm 116 */

												{	/* Ast/walk.scm 116 */
													obj_t BgL_bucketz00_5980;

													BgL_bucketz00_5980 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_5970), BgL_modz00_5976);
													BgL_res3663z00_6004 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_5980), BgL_restz00_5978);
					}}}}}}}}
					BgL_method1627z00_2461 = BgL_res3663z00_6004;
				}
				return
					PROCEDURE_ENTRY(BgL_method1627z00_2461) (BgL_method1627z00_2461,
					((obj_t) BgL_nz00_3), BgL_pz00_4, BEOA);
			}
		}

	}



/* &walk0 */
	obj_t BGl_z62walk0z62zzast_walkz00(obj_t BgL_envz00_7294, obj_t BgL_nz00_7295,
		obj_t BgL_pz00_7296)
	{
		{	/* Ast/walk.scm 116 */
			return
				BGl_walk0z00zzast_walkz00(
				((BgL_nodez00_bglt) BgL_nz00_7295), BgL_pz00_7296);
		}

	}



/* walk1 */
	BGL_EXPORTED_DEF obj_t BGl_walk1z00zzast_walkz00(BgL_nodez00_bglt BgL_nz00_5,
		obj_t BgL_pz00_6, obj_t BgL_arg0z00_7)
	{
		{	/* Ast/walk.scm 119 */
			{	/* Ast/walk.scm 119 */
				obj_t BgL_method1629z00_2462;

				{	/* Ast/walk.scm 119 */
					obj_t BgL_res3674z00_6041;

					{	/* Ast/walk.scm 119 */
						long BgL_objzd2classzd2numz00_6006;

						{	/* Ast/walk.scm 119 */
							long BgL_res3664z00_6009;

							BgL_res3664z00_6009 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nz00_5));
							BgL_objzd2classzd2numz00_6006 = BgL_res3664z00_6009;
						}
						{	/* Ast/walk.scm 119 */
							obj_t BgL_arg1813z00_6007;

							BgL_arg1813z00_6007 =
								PROCEDURE_REF(BGl_walk1zd2envzd2zzast_walkz00,
								(int) (((long) 1)));
							{	/* Ast/walk.scm 119 */
								int BgL_offsetz00_6011;

								BgL_offsetz00_6011 = (int) (BgL_objzd2classzd2numz00_6006);
								{	/* Ast/walk.scm 119 */
									long BgL_offsetz00_6012;

									BgL_offsetz00_6012 =
										((long) (BgL_offsetz00_6011) - OBJECT_TYPE);
									{	/* Ast/walk.scm 119 */
										long BgL_modz00_6013;

										BgL_modz00_6013 =
											(BgL_offsetz00_6012 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/walk.scm 119 */
											long BgL_restz00_6015;

											BgL_restz00_6015 =
												(BgL_offsetz00_6012 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/walk.scm 119 */

												{	/* Ast/walk.scm 119 */
													obj_t BgL_bucketz00_6017;

													BgL_bucketz00_6017 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_6007), BgL_modz00_6013);
													BgL_res3674z00_6041 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_6017), BgL_restz00_6015);
					}}}}}}}}
					BgL_method1629z00_2462 = BgL_res3674z00_6041;
				}
				return
					PROCEDURE_ENTRY(BgL_method1629z00_2462) (BgL_method1629z00_2462,
					((obj_t) BgL_nz00_5), BgL_pz00_6, BgL_arg0z00_7, BEOA);
			}
		}

	}



/* &walk1 */
	obj_t BGl_z62walk1z62zzast_walkz00(obj_t BgL_envz00_7297, obj_t BgL_nz00_7298,
		obj_t BgL_pz00_7299, obj_t BgL_arg0z00_7300)
	{
		{	/* Ast/walk.scm 119 */
			return
				BGl_walk1z00zzast_walkz00(
				((BgL_nodez00_bglt) BgL_nz00_7298), BgL_pz00_7299, BgL_arg0z00_7300);
		}

	}



/* walk2 */
	BGL_EXPORTED_DEF obj_t BGl_walk2z00zzast_walkz00(BgL_nodez00_bglt BgL_nz00_8,
		obj_t BgL_pz00_9, obj_t BgL_arg0z00_10, obj_t BgL_arg1z00_11)
	{
		{	/* Ast/walk.scm 122 */
			{	/* Ast/walk.scm 122 */
				obj_t BgL_method1631z00_2463;

				{	/* Ast/walk.scm 122 */
					obj_t BgL_res3685z00_6078;

					{	/* Ast/walk.scm 122 */
						long BgL_objzd2classzd2numz00_6043;

						{	/* Ast/walk.scm 122 */
							long BgL_res3675z00_6046;

							BgL_res3675z00_6046 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nz00_8));
							BgL_objzd2classzd2numz00_6043 = BgL_res3675z00_6046;
						}
						{	/* Ast/walk.scm 122 */
							obj_t BgL_arg1813z00_6044;

							BgL_arg1813z00_6044 =
								PROCEDURE_REF(BGl_walk2zd2envzd2zzast_walkz00,
								(int) (((long) 1)));
							{	/* Ast/walk.scm 122 */
								int BgL_offsetz00_6048;

								BgL_offsetz00_6048 = (int) (BgL_objzd2classzd2numz00_6043);
								{	/* Ast/walk.scm 122 */
									long BgL_offsetz00_6049;

									BgL_offsetz00_6049 =
										((long) (BgL_offsetz00_6048) - OBJECT_TYPE);
									{	/* Ast/walk.scm 122 */
										long BgL_modz00_6050;

										BgL_modz00_6050 =
											(BgL_offsetz00_6049 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/walk.scm 122 */
											long BgL_restz00_6052;

											BgL_restz00_6052 =
												(BgL_offsetz00_6049 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/walk.scm 122 */

												{	/* Ast/walk.scm 122 */
													obj_t BgL_bucketz00_6054;

													BgL_bucketz00_6054 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_6044), BgL_modz00_6050);
													BgL_res3685z00_6078 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_6054), BgL_restz00_6052);
					}}}}}}}}
					BgL_method1631z00_2463 = BgL_res3685z00_6078;
				}
				return
					PROCEDURE_ENTRY(BgL_method1631z00_2463) (BgL_method1631z00_2463,
					((obj_t) BgL_nz00_8), BgL_pz00_9, BgL_arg0z00_10, BgL_arg1z00_11,
					BEOA);
			}
		}

	}



/* &walk2 */
	obj_t BGl_z62walk2z62zzast_walkz00(obj_t BgL_envz00_7301, obj_t BgL_nz00_7302,
		obj_t BgL_pz00_7303, obj_t BgL_arg0z00_7304, obj_t BgL_arg1z00_7305)
	{
		{	/* Ast/walk.scm 122 */
			return
				BGl_walk2z00zzast_walkz00(
				((BgL_nodez00_bglt) BgL_nz00_7302), BgL_pz00_7303, BgL_arg0z00_7304,
				BgL_arg1z00_7305);
		}

	}



/* walk3 */
	BGL_EXPORTED_DEF obj_t BGl_walk3z00zzast_walkz00(BgL_nodez00_bglt BgL_nz00_12,
		obj_t BgL_pz00_13, obj_t BgL_arg0z00_14, obj_t BgL_arg1z00_15,
		obj_t BgL_arg2z00_16)
	{
		{	/* Ast/walk.scm 125 */
			{	/* Ast/walk.scm 125 */
				obj_t BgL_method1633z00_2464;

				{	/* Ast/walk.scm 125 */
					obj_t BgL_res3696z00_6115;

					{	/* Ast/walk.scm 125 */
						long BgL_objzd2classzd2numz00_6080;

						{	/* Ast/walk.scm 125 */
							long BgL_res3686z00_6083;

							BgL_res3686z00_6083 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nz00_12));
							BgL_objzd2classzd2numz00_6080 = BgL_res3686z00_6083;
						}
						{	/* Ast/walk.scm 125 */
							obj_t BgL_arg1813z00_6081;

							BgL_arg1813z00_6081 =
								PROCEDURE_REF(BGl_walk3zd2envzd2zzast_walkz00,
								(int) (((long) 1)));
							{	/* Ast/walk.scm 125 */
								int BgL_offsetz00_6085;

								BgL_offsetz00_6085 = (int) (BgL_objzd2classzd2numz00_6080);
								{	/* Ast/walk.scm 125 */
									long BgL_offsetz00_6086;

									BgL_offsetz00_6086 =
										((long) (BgL_offsetz00_6085) - OBJECT_TYPE);
									{	/* Ast/walk.scm 125 */
										long BgL_modz00_6087;

										BgL_modz00_6087 =
											(BgL_offsetz00_6086 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/walk.scm 125 */
											long BgL_restz00_6089;

											BgL_restz00_6089 =
												(BgL_offsetz00_6086 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/walk.scm 125 */

												{	/* Ast/walk.scm 125 */
													obj_t BgL_bucketz00_6091;

													BgL_bucketz00_6091 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_6081), BgL_modz00_6087);
													BgL_res3696z00_6115 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_6091), BgL_restz00_6089);
					}}}}}}}}
					BgL_method1633z00_2464 = BgL_res3696z00_6115;
				}
				return
					PROCEDURE_ENTRY(BgL_method1633z00_2464) (BgL_method1633z00_2464,
					((obj_t) BgL_nz00_12), BgL_pz00_13, BgL_arg0z00_14, BgL_arg1z00_15,
					BgL_arg2z00_16, BEOA);
			}
		}

	}



/* &walk3 */
	obj_t BGl_z62walk3z62zzast_walkz00(obj_t BgL_envz00_7306, obj_t BgL_nz00_7307,
		obj_t BgL_pz00_7308, obj_t BgL_arg0z00_7309, obj_t BgL_arg1z00_7310,
		obj_t BgL_arg2z00_7311)
	{
		{	/* Ast/walk.scm 125 */
			return
				BGl_walk3z00zzast_walkz00(
				((BgL_nodez00_bglt) BgL_nz00_7307), BgL_pz00_7308, BgL_arg0z00_7309,
				BgL_arg1z00_7310, BgL_arg2z00_7311);
		}

	}



/* walk4 */
	BGL_EXPORTED_DEF obj_t BGl_walk4z00zzast_walkz00(BgL_nodez00_bglt BgL_nz00_17,
		obj_t BgL_pz00_18, obj_t BgL_arg0z00_19, obj_t BgL_arg1z00_20,
		obj_t BgL_arg2z00_21, obj_t BgL_arg3z00_22)
	{
		{	/* Ast/walk.scm 128 */
			{	/* Ast/walk.scm 128 */
				obj_t BgL_method1635z00_2465;

				{	/* Ast/walk.scm 128 */
					obj_t BgL_res3707z00_6152;

					{	/* Ast/walk.scm 128 */
						long BgL_objzd2classzd2numz00_6117;

						{	/* Ast/walk.scm 128 */
							long BgL_res3697z00_6120;

							BgL_res3697z00_6120 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nz00_17));
							BgL_objzd2classzd2numz00_6117 = BgL_res3697z00_6120;
						}
						{	/* Ast/walk.scm 128 */
							obj_t BgL_arg1813z00_6118;

							BgL_arg1813z00_6118 =
								PROCEDURE_REF(BGl_walk4zd2envzd2zzast_walkz00,
								(int) (((long) 1)));
							{	/* Ast/walk.scm 128 */
								int BgL_offsetz00_6122;

								BgL_offsetz00_6122 = (int) (BgL_objzd2classzd2numz00_6117);
								{	/* Ast/walk.scm 128 */
									long BgL_offsetz00_6123;

									BgL_offsetz00_6123 =
										((long) (BgL_offsetz00_6122) - OBJECT_TYPE);
									{	/* Ast/walk.scm 128 */
										long BgL_modz00_6124;

										BgL_modz00_6124 =
											(BgL_offsetz00_6123 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/walk.scm 128 */
											long BgL_restz00_6126;

											BgL_restz00_6126 =
												(BgL_offsetz00_6123 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/walk.scm 128 */

												{	/* Ast/walk.scm 128 */
													obj_t BgL_bucketz00_6128;

													BgL_bucketz00_6128 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_6118), BgL_modz00_6124);
													BgL_res3707z00_6152 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_6128), BgL_restz00_6126);
					}}}}}}}}
					BgL_method1635z00_2465 = BgL_res3707z00_6152;
				}
				return
					PROCEDURE_ENTRY(BgL_method1635z00_2465) (BgL_method1635z00_2465,
					((obj_t) BgL_nz00_17), BgL_pz00_18, BgL_arg0z00_19, BgL_arg1z00_20,
					BgL_arg2z00_21, BgL_arg3z00_22, BEOA);
			}
		}

	}



/* &walk4 */
	obj_t BGl_z62walk4z62zzast_walkz00(obj_t BgL_envz00_7312, obj_t BgL_nz00_7313,
		obj_t BgL_pz00_7314, obj_t BgL_arg0z00_7315, obj_t BgL_arg1z00_7316,
		obj_t BgL_arg2z00_7317, obj_t BgL_arg3z00_7318)
	{
		{	/* Ast/walk.scm 128 */
			return
				BGl_walk4z00zzast_walkz00(
				((BgL_nodez00_bglt) BgL_nz00_7313), BgL_pz00_7314, BgL_arg0z00_7315,
				BgL_arg1z00_7316, BgL_arg2z00_7317, BgL_arg3z00_7318);
		}

	}



/* walk0* */
	BGL_EXPORTED_DEF obj_t BGl_walk0za2za2zzast_walkz00(BgL_nodez00_bglt
		BgL_nz00_23, obj_t BgL_pz00_24)
	{
		{	/* Ast/walk.scm 132 */
			{	/* Ast/walk.scm 132 */
				obj_t BgL_method1637z00_2466;

				{	/* Ast/walk.scm 132 */
					obj_t BgL_res3718z00_6189;

					{	/* Ast/walk.scm 132 */
						long BgL_objzd2classzd2numz00_6154;

						{	/* Ast/walk.scm 132 */
							long BgL_res3708z00_6157;

							BgL_res3708z00_6157 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nz00_23));
							BgL_objzd2classzd2numz00_6154 = BgL_res3708z00_6157;
						}
						{	/* Ast/walk.scm 132 */
							obj_t BgL_arg1813z00_6155;

							BgL_arg1813z00_6155 =
								PROCEDURE_REF(BGl_walk0za2zd2envz70zzast_walkz00,
								(int) (((long) 1)));
							{	/* Ast/walk.scm 132 */
								int BgL_offsetz00_6159;

								BgL_offsetz00_6159 = (int) (BgL_objzd2classzd2numz00_6154);
								{	/* Ast/walk.scm 132 */
									long BgL_offsetz00_6160;

									BgL_offsetz00_6160 =
										((long) (BgL_offsetz00_6159) - OBJECT_TYPE);
									{	/* Ast/walk.scm 132 */
										long BgL_modz00_6161;

										BgL_modz00_6161 =
											(BgL_offsetz00_6160 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/walk.scm 132 */
											long BgL_restz00_6163;

											BgL_restz00_6163 =
												(BgL_offsetz00_6160 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/walk.scm 132 */

												{	/* Ast/walk.scm 132 */
													obj_t BgL_bucketz00_6165;

													BgL_bucketz00_6165 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_6155), BgL_modz00_6161);
													BgL_res3718z00_6189 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_6165), BgL_restz00_6163);
					}}}}}}}}
					BgL_method1637z00_2466 = BgL_res3718z00_6189;
				}
				return
					PROCEDURE_ENTRY(BgL_method1637z00_2466) (BgL_method1637z00_2466,
					((obj_t) BgL_nz00_23), BgL_pz00_24, BEOA);
			}
		}

	}



/* &walk0* */
	obj_t BGl_z62walk0za2zc0zzast_walkz00(obj_t BgL_envz00_7319,
		obj_t BgL_nz00_7320, obj_t BgL_pz00_7321)
	{
		{	/* Ast/walk.scm 132 */
			return
				BGl_walk0za2za2zzast_walkz00(
				((BgL_nodez00_bglt) BgL_nz00_7320), BgL_pz00_7321);
		}

	}



/* walk1* */
	BGL_EXPORTED_DEF obj_t BGl_walk1za2za2zzast_walkz00(BgL_nodez00_bglt
		BgL_nz00_25, obj_t BgL_pz00_26, obj_t BgL_arg0z00_27)
	{
		{	/* Ast/walk.scm 135 */
			{	/* Ast/walk.scm 135 */
				obj_t BgL_method1639z00_2467;

				{	/* Ast/walk.scm 135 */
					obj_t BgL_res3729z00_6226;

					{	/* Ast/walk.scm 135 */
						long BgL_objzd2classzd2numz00_6191;

						{	/* Ast/walk.scm 135 */
							long BgL_res3719z00_6194;

							BgL_res3719z00_6194 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nz00_25));
							BgL_objzd2classzd2numz00_6191 = BgL_res3719z00_6194;
						}
						{	/* Ast/walk.scm 135 */
							obj_t BgL_arg1813z00_6192;

							BgL_arg1813z00_6192 =
								PROCEDURE_REF(BGl_walk1za2zd2envz70zzast_walkz00,
								(int) (((long) 1)));
							{	/* Ast/walk.scm 135 */
								int BgL_offsetz00_6196;

								BgL_offsetz00_6196 = (int) (BgL_objzd2classzd2numz00_6191);
								{	/* Ast/walk.scm 135 */
									long BgL_offsetz00_6197;

									BgL_offsetz00_6197 =
										((long) (BgL_offsetz00_6196) - OBJECT_TYPE);
									{	/* Ast/walk.scm 135 */
										long BgL_modz00_6198;

										BgL_modz00_6198 =
											(BgL_offsetz00_6197 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/walk.scm 135 */
											long BgL_restz00_6200;

											BgL_restz00_6200 =
												(BgL_offsetz00_6197 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/walk.scm 135 */

												{	/* Ast/walk.scm 135 */
													obj_t BgL_bucketz00_6202;

													BgL_bucketz00_6202 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_6192), BgL_modz00_6198);
													BgL_res3729z00_6226 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_6202), BgL_restz00_6200);
					}}}}}}}}
					BgL_method1639z00_2467 = BgL_res3729z00_6226;
				}
				return
					PROCEDURE_ENTRY(BgL_method1639z00_2467) (BgL_method1639z00_2467,
					((obj_t) BgL_nz00_25), BgL_pz00_26, BgL_arg0z00_27, BEOA);
			}
		}

	}



/* &walk1* */
	obj_t BGl_z62walk1za2zc0zzast_walkz00(obj_t BgL_envz00_7322,
		obj_t BgL_nz00_7323, obj_t BgL_pz00_7324, obj_t BgL_arg0z00_7325)
	{
		{	/* Ast/walk.scm 135 */
			return
				BGl_walk1za2za2zzast_walkz00(
				((BgL_nodez00_bglt) BgL_nz00_7323), BgL_pz00_7324, BgL_arg0z00_7325);
		}

	}



/* walk2* */
	BGL_EXPORTED_DEF obj_t BGl_walk2za2za2zzast_walkz00(BgL_nodez00_bglt
		BgL_nz00_28, obj_t BgL_pz00_29, obj_t BgL_arg0z00_30, obj_t BgL_arg1z00_31)
	{
		{	/* Ast/walk.scm 138 */
			{	/* Ast/walk.scm 138 */
				obj_t BgL_method1641z00_2468;

				{	/* Ast/walk.scm 138 */
					obj_t BgL_res3740z00_6263;

					{	/* Ast/walk.scm 138 */
						long BgL_objzd2classzd2numz00_6228;

						{	/* Ast/walk.scm 138 */
							long BgL_res3730z00_6231;

							BgL_res3730z00_6231 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nz00_28));
							BgL_objzd2classzd2numz00_6228 = BgL_res3730z00_6231;
						}
						{	/* Ast/walk.scm 138 */
							obj_t BgL_arg1813z00_6229;

							BgL_arg1813z00_6229 =
								PROCEDURE_REF(BGl_walk2za2zd2envz70zzast_walkz00,
								(int) (((long) 1)));
							{	/* Ast/walk.scm 138 */
								int BgL_offsetz00_6233;

								BgL_offsetz00_6233 = (int) (BgL_objzd2classzd2numz00_6228);
								{	/* Ast/walk.scm 138 */
									long BgL_offsetz00_6234;

									BgL_offsetz00_6234 =
										((long) (BgL_offsetz00_6233) - OBJECT_TYPE);
									{	/* Ast/walk.scm 138 */
										long BgL_modz00_6235;

										BgL_modz00_6235 =
											(BgL_offsetz00_6234 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/walk.scm 138 */
											long BgL_restz00_6237;

											BgL_restz00_6237 =
												(BgL_offsetz00_6234 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/walk.scm 138 */

												{	/* Ast/walk.scm 138 */
													obj_t BgL_bucketz00_6239;

													BgL_bucketz00_6239 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_6229), BgL_modz00_6235);
													BgL_res3740z00_6263 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_6239), BgL_restz00_6237);
					}}}}}}}}
					BgL_method1641z00_2468 = BgL_res3740z00_6263;
				}
				return
					PROCEDURE_ENTRY(BgL_method1641z00_2468) (BgL_method1641z00_2468,
					((obj_t) BgL_nz00_28), BgL_pz00_29, BgL_arg0z00_30, BgL_arg1z00_31,
					BEOA);
			}
		}

	}



/* &walk2* */
	obj_t BGl_z62walk2za2zc0zzast_walkz00(obj_t BgL_envz00_7326,
		obj_t BgL_nz00_7327, obj_t BgL_pz00_7328, obj_t BgL_arg0z00_7329,
		obj_t BgL_arg1z00_7330)
	{
		{	/* Ast/walk.scm 138 */
			return
				BGl_walk2za2za2zzast_walkz00(
				((BgL_nodez00_bglt) BgL_nz00_7327), BgL_pz00_7328, BgL_arg0z00_7329,
				BgL_arg1z00_7330);
		}

	}



/* walk3* */
	BGL_EXPORTED_DEF obj_t BGl_walk3za2za2zzast_walkz00(BgL_nodez00_bglt
		BgL_nz00_32, obj_t BgL_pz00_33, obj_t BgL_arg0z00_34, obj_t BgL_arg1z00_35,
		obj_t BgL_arg2z00_36)
	{
		{	/* Ast/walk.scm 141 */
			{	/* Ast/walk.scm 141 */
				obj_t BgL_method1643z00_2469;

				{	/* Ast/walk.scm 141 */
					obj_t BgL_res3751z00_6300;

					{	/* Ast/walk.scm 141 */
						long BgL_objzd2classzd2numz00_6265;

						{	/* Ast/walk.scm 141 */
							long BgL_res3741z00_6268;

							BgL_res3741z00_6268 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nz00_32));
							BgL_objzd2classzd2numz00_6265 = BgL_res3741z00_6268;
						}
						{	/* Ast/walk.scm 141 */
							obj_t BgL_arg1813z00_6266;

							BgL_arg1813z00_6266 =
								PROCEDURE_REF(BGl_walk3za2zd2envz70zzast_walkz00,
								(int) (((long) 1)));
							{	/* Ast/walk.scm 141 */
								int BgL_offsetz00_6270;

								BgL_offsetz00_6270 = (int) (BgL_objzd2classzd2numz00_6265);
								{	/* Ast/walk.scm 141 */
									long BgL_offsetz00_6271;

									BgL_offsetz00_6271 =
										((long) (BgL_offsetz00_6270) - OBJECT_TYPE);
									{	/* Ast/walk.scm 141 */
										long BgL_modz00_6272;

										BgL_modz00_6272 =
											(BgL_offsetz00_6271 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/walk.scm 141 */
											long BgL_restz00_6274;

											BgL_restz00_6274 =
												(BgL_offsetz00_6271 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/walk.scm 141 */

												{	/* Ast/walk.scm 141 */
													obj_t BgL_bucketz00_6276;

													BgL_bucketz00_6276 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_6266), BgL_modz00_6272);
													BgL_res3751z00_6300 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_6276), BgL_restz00_6274);
					}}}}}}}}
					BgL_method1643z00_2469 = BgL_res3751z00_6300;
				}
				return
					PROCEDURE_ENTRY(BgL_method1643z00_2469) (BgL_method1643z00_2469,
					((obj_t) BgL_nz00_32), BgL_pz00_33, BgL_arg0z00_34, BgL_arg1z00_35,
					BgL_arg2z00_36, BEOA);
			}
		}

	}



/* &walk3* */
	obj_t BGl_z62walk3za2zc0zzast_walkz00(obj_t BgL_envz00_7331,
		obj_t BgL_nz00_7332, obj_t BgL_pz00_7333, obj_t BgL_arg0z00_7334,
		obj_t BgL_arg1z00_7335, obj_t BgL_arg2z00_7336)
	{
		{	/* Ast/walk.scm 141 */
			return
				BGl_walk3za2za2zzast_walkz00(
				((BgL_nodez00_bglt) BgL_nz00_7332), BgL_pz00_7333, BgL_arg0z00_7334,
				BgL_arg1z00_7335, BgL_arg2z00_7336);
		}

	}



/* walk4* */
	BGL_EXPORTED_DEF obj_t BGl_walk4za2za2zzast_walkz00(BgL_nodez00_bglt
		BgL_nz00_37, obj_t BgL_pz00_38, obj_t BgL_arg0z00_39, obj_t BgL_arg1z00_40,
		obj_t BgL_arg2z00_41, obj_t BgL_arg3z00_42)
	{
		{	/* Ast/walk.scm 144 */
			{	/* Ast/walk.scm 144 */
				obj_t BgL_method1645z00_2470;

				{	/* Ast/walk.scm 144 */
					obj_t BgL_res3762z00_6337;

					{	/* Ast/walk.scm 144 */
						long BgL_objzd2classzd2numz00_6302;

						{	/* Ast/walk.scm 144 */
							long BgL_res3752z00_6305;

							BgL_res3752z00_6305 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nz00_37));
							BgL_objzd2classzd2numz00_6302 = BgL_res3752z00_6305;
						}
						{	/* Ast/walk.scm 144 */
							obj_t BgL_arg1813z00_6303;

							BgL_arg1813z00_6303 =
								PROCEDURE_REF(BGl_walk4za2zd2envz70zzast_walkz00,
								(int) (((long) 1)));
							{	/* Ast/walk.scm 144 */
								int BgL_offsetz00_6307;

								BgL_offsetz00_6307 = (int) (BgL_objzd2classzd2numz00_6302);
								{	/* Ast/walk.scm 144 */
									long BgL_offsetz00_6308;

									BgL_offsetz00_6308 =
										((long) (BgL_offsetz00_6307) - OBJECT_TYPE);
									{	/* Ast/walk.scm 144 */
										long BgL_modz00_6309;

										BgL_modz00_6309 =
											(BgL_offsetz00_6308 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/walk.scm 144 */
											long BgL_restz00_6311;

											BgL_restz00_6311 =
												(BgL_offsetz00_6308 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/walk.scm 144 */

												{	/* Ast/walk.scm 144 */
													obj_t BgL_bucketz00_6313;

													BgL_bucketz00_6313 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_6303), BgL_modz00_6309);
													BgL_res3762z00_6337 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_6313), BgL_restz00_6311);
					}}}}}}}}
					BgL_method1645z00_2470 = BgL_res3762z00_6337;
				}
				return
					PROCEDURE_ENTRY(BgL_method1645z00_2470) (BgL_method1645z00_2470,
					((obj_t) BgL_nz00_37), BgL_pz00_38, BgL_arg0z00_39, BgL_arg1z00_40,
					BgL_arg2z00_41, BgL_arg3z00_42, BEOA);
			}
		}

	}



/* &walk4* */
	obj_t BGl_z62walk4za2zc0zzast_walkz00(obj_t BgL_envz00_7337,
		obj_t BgL_nz00_7338, obj_t BgL_pz00_7339, obj_t BgL_arg0z00_7340,
		obj_t BgL_arg1z00_7341, obj_t BgL_arg2z00_7342, obj_t BgL_arg3z00_7343)
	{
		{	/* Ast/walk.scm 144 */
			return
				BGl_walk4za2za2zzast_walkz00(
				((BgL_nodez00_bglt) BgL_nz00_7338), BgL_pz00_7339, BgL_arg0z00_7340,
				BgL_arg1z00_7341, BgL_arg2z00_7342, BgL_arg3z00_7343);
		}

	}



/* walk0! */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_walk0z12z12zzast_walkz00(BgL_nodez00_bglt BgL_nz00_43,
		obj_t BgL_pz00_44)
	{
		{	/* Ast/walk.scm 148 */
			{	/* Ast/walk.scm 148 */
				obj_t BgL_method1647z00_2471;

				{	/* Ast/walk.scm 148 */
					obj_t BgL_res3773z00_6374;

					{	/* Ast/walk.scm 148 */
						long BgL_objzd2classzd2numz00_6339;

						{	/* Ast/walk.scm 148 */
							long BgL_res3763z00_6342;

							BgL_res3763z00_6342 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nz00_43));
							BgL_objzd2classzd2numz00_6339 = BgL_res3763z00_6342;
						}
						{	/* Ast/walk.scm 148 */
							obj_t BgL_arg1813z00_6340;

							BgL_arg1813z00_6340 =
								PROCEDURE_REF(BGl_walk0z12zd2envzc0zzast_walkz00,
								(int) (((long) 1)));
							{	/* Ast/walk.scm 148 */
								int BgL_offsetz00_6344;

								BgL_offsetz00_6344 = (int) (BgL_objzd2classzd2numz00_6339);
								{	/* Ast/walk.scm 148 */
									long BgL_offsetz00_6345;

									BgL_offsetz00_6345 =
										((long) (BgL_offsetz00_6344) - OBJECT_TYPE);
									{	/* Ast/walk.scm 148 */
										long BgL_modz00_6346;

										BgL_modz00_6346 =
											(BgL_offsetz00_6345 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/walk.scm 148 */
											long BgL_restz00_6348;

											BgL_restz00_6348 =
												(BgL_offsetz00_6345 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/walk.scm 148 */

												{	/* Ast/walk.scm 148 */
													obj_t BgL_bucketz00_6350;

													BgL_bucketz00_6350 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_6340), BgL_modz00_6346);
													BgL_res3773z00_6374 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_6350), BgL_restz00_6348);
					}}}}}}}}
					BgL_method1647z00_2471 = BgL_res3773z00_6374;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1647z00_2471) (BgL_method1647z00_2471,
						((obj_t) BgL_nz00_43), BgL_pz00_44, BEOA));
			}
		}

	}



/* &walk0! */
	BgL_nodez00_bglt BGl_z62walk0z12z70zzast_walkz00(obj_t BgL_envz00_7344,
		obj_t BgL_nz00_7345, obj_t BgL_pz00_7346)
	{
		{	/* Ast/walk.scm 148 */
			return
				BGl_walk0z12z12zzast_walkz00(
				((BgL_nodez00_bglt) BgL_nz00_7345), BgL_pz00_7346);
		}

	}



/* walk1! */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_walk1z12z12zzast_walkz00(BgL_nodez00_bglt BgL_nz00_45,
		obj_t BgL_pz00_46, obj_t BgL_arg0z00_47)
	{
		{	/* Ast/walk.scm 151 */
			{	/* Ast/walk.scm 151 */
				obj_t BgL_method1650z00_2472;

				{	/* Ast/walk.scm 151 */
					obj_t BgL_res3784z00_6411;

					{	/* Ast/walk.scm 151 */
						long BgL_objzd2classzd2numz00_6376;

						{	/* Ast/walk.scm 151 */
							long BgL_res3774z00_6379;

							BgL_res3774z00_6379 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nz00_45));
							BgL_objzd2classzd2numz00_6376 = BgL_res3774z00_6379;
						}
						{	/* Ast/walk.scm 151 */
							obj_t BgL_arg1813z00_6377;

							BgL_arg1813z00_6377 =
								PROCEDURE_REF(BGl_walk1z12zd2envzc0zzast_walkz00,
								(int) (((long) 1)));
							{	/* Ast/walk.scm 151 */
								int BgL_offsetz00_6381;

								BgL_offsetz00_6381 = (int) (BgL_objzd2classzd2numz00_6376);
								{	/* Ast/walk.scm 151 */
									long BgL_offsetz00_6382;

									BgL_offsetz00_6382 =
										((long) (BgL_offsetz00_6381) - OBJECT_TYPE);
									{	/* Ast/walk.scm 151 */
										long BgL_modz00_6383;

										BgL_modz00_6383 =
											(BgL_offsetz00_6382 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/walk.scm 151 */
											long BgL_restz00_6385;

											BgL_restz00_6385 =
												(BgL_offsetz00_6382 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/walk.scm 151 */

												{	/* Ast/walk.scm 151 */
													obj_t BgL_bucketz00_6387;

													BgL_bucketz00_6387 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_6377), BgL_modz00_6383);
													BgL_res3784z00_6411 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_6387), BgL_restz00_6385);
					}}}}}}}}
					BgL_method1650z00_2472 = BgL_res3784z00_6411;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1650z00_2472) (BgL_method1650z00_2472,
						((obj_t) BgL_nz00_45), BgL_pz00_46, BgL_arg0z00_47, BEOA));
			}
		}

	}



/* &walk1! */
	BgL_nodez00_bglt BGl_z62walk1z12z70zzast_walkz00(obj_t BgL_envz00_7347,
		obj_t BgL_nz00_7348, obj_t BgL_pz00_7349, obj_t BgL_arg0z00_7350)
	{
		{	/* Ast/walk.scm 151 */
			return
				BGl_walk1z12z12zzast_walkz00(
				((BgL_nodez00_bglt) BgL_nz00_7348), BgL_pz00_7349, BgL_arg0z00_7350);
		}

	}



/* walk2! */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_walk2z12z12zzast_walkz00(BgL_nodez00_bglt BgL_nz00_48,
		obj_t BgL_pz00_49, obj_t BgL_arg0z00_50, obj_t BgL_arg1z00_51)
	{
		{	/* Ast/walk.scm 154 */
			{	/* Ast/walk.scm 154 */
				obj_t BgL_method1652z00_2473;

				{	/* Ast/walk.scm 154 */
					obj_t BgL_res3795z00_6448;

					{	/* Ast/walk.scm 154 */
						long BgL_objzd2classzd2numz00_6413;

						{	/* Ast/walk.scm 154 */
							long BgL_res3785z00_6416;

							BgL_res3785z00_6416 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nz00_48));
							BgL_objzd2classzd2numz00_6413 = BgL_res3785z00_6416;
						}
						{	/* Ast/walk.scm 154 */
							obj_t BgL_arg1813z00_6414;

							BgL_arg1813z00_6414 =
								PROCEDURE_REF(BGl_walk2z12zd2envzc0zzast_walkz00,
								(int) (((long) 1)));
							{	/* Ast/walk.scm 154 */
								int BgL_offsetz00_6418;

								BgL_offsetz00_6418 = (int) (BgL_objzd2classzd2numz00_6413);
								{	/* Ast/walk.scm 154 */
									long BgL_offsetz00_6419;

									BgL_offsetz00_6419 =
										((long) (BgL_offsetz00_6418) - OBJECT_TYPE);
									{	/* Ast/walk.scm 154 */
										long BgL_modz00_6420;

										BgL_modz00_6420 =
											(BgL_offsetz00_6419 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/walk.scm 154 */
											long BgL_restz00_6422;

											BgL_restz00_6422 =
												(BgL_offsetz00_6419 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/walk.scm 154 */

												{	/* Ast/walk.scm 154 */
													obj_t BgL_bucketz00_6424;

													BgL_bucketz00_6424 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_6414), BgL_modz00_6420);
													BgL_res3795z00_6448 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_6424), BgL_restz00_6422);
					}}}}}}}}
					BgL_method1652z00_2473 = BgL_res3795z00_6448;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1652z00_2473) (BgL_method1652z00_2473,
						((obj_t) BgL_nz00_48), BgL_pz00_49, BgL_arg0z00_50, BgL_arg1z00_51,
						BEOA));
			}
		}

	}



/* &walk2! */
	BgL_nodez00_bglt BGl_z62walk2z12z70zzast_walkz00(obj_t BgL_envz00_7351,
		obj_t BgL_nz00_7352, obj_t BgL_pz00_7353, obj_t BgL_arg0z00_7354,
		obj_t BgL_arg1z00_7355)
	{
		{	/* Ast/walk.scm 154 */
			return
				BGl_walk2z12z12zzast_walkz00(
				((BgL_nodez00_bglt) BgL_nz00_7352), BgL_pz00_7353, BgL_arg0z00_7354,
				BgL_arg1z00_7355);
		}

	}



/* walk3! */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_walk3z12z12zzast_walkz00(BgL_nodez00_bglt BgL_nz00_52,
		obj_t BgL_pz00_53, obj_t BgL_arg0z00_54, obj_t BgL_arg1z00_55,
		obj_t BgL_arg2z00_56)
	{
		{	/* Ast/walk.scm 157 */
			{	/* Ast/walk.scm 157 */
				obj_t BgL_method1654z00_2474;

				{	/* Ast/walk.scm 157 */
					obj_t BgL_res3806z00_6485;

					{	/* Ast/walk.scm 157 */
						long BgL_objzd2classzd2numz00_6450;

						{	/* Ast/walk.scm 157 */
							long BgL_res3796z00_6453;

							BgL_res3796z00_6453 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nz00_52));
							BgL_objzd2classzd2numz00_6450 = BgL_res3796z00_6453;
						}
						{	/* Ast/walk.scm 157 */
							obj_t BgL_arg1813z00_6451;

							BgL_arg1813z00_6451 =
								PROCEDURE_REF(BGl_walk3z12zd2envzc0zzast_walkz00,
								(int) (((long) 1)));
							{	/* Ast/walk.scm 157 */
								int BgL_offsetz00_6455;

								BgL_offsetz00_6455 = (int) (BgL_objzd2classzd2numz00_6450);
								{	/* Ast/walk.scm 157 */
									long BgL_offsetz00_6456;

									BgL_offsetz00_6456 =
										((long) (BgL_offsetz00_6455) - OBJECT_TYPE);
									{	/* Ast/walk.scm 157 */
										long BgL_modz00_6457;

										BgL_modz00_6457 =
											(BgL_offsetz00_6456 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/walk.scm 157 */
											long BgL_restz00_6459;

											BgL_restz00_6459 =
												(BgL_offsetz00_6456 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/walk.scm 157 */

												{	/* Ast/walk.scm 157 */
													obj_t BgL_bucketz00_6461;

													BgL_bucketz00_6461 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_6451), BgL_modz00_6457);
													BgL_res3806z00_6485 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_6461), BgL_restz00_6459);
					}}}}}}}}
					BgL_method1654z00_2474 = BgL_res3806z00_6485;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1654z00_2474) (BgL_method1654z00_2474,
						((obj_t) BgL_nz00_52), BgL_pz00_53, BgL_arg0z00_54, BgL_arg1z00_55,
						BgL_arg2z00_56, BEOA));
			}
		}

	}



/* &walk3! */
	BgL_nodez00_bglt BGl_z62walk3z12z70zzast_walkz00(obj_t BgL_envz00_7356,
		obj_t BgL_nz00_7357, obj_t BgL_pz00_7358, obj_t BgL_arg0z00_7359,
		obj_t BgL_arg1z00_7360, obj_t BgL_arg2z00_7361)
	{
		{	/* Ast/walk.scm 157 */
			return
				BGl_walk3z12z12zzast_walkz00(
				((BgL_nodez00_bglt) BgL_nz00_7357), BgL_pz00_7358, BgL_arg0z00_7359,
				BgL_arg1z00_7360, BgL_arg2z00_7361);
		}

	}



/* walk4! */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_walk4z12z12zzast_walkz00(BgL_nodez00_bglt BgL_nz00_57,
		obj_t BgL_pz00_58, obj_t BgL_arg0z00_59, obj_t BgL_arg1z00_60,
		obj_t BgL_arg2z00_61, obj_t BgL_arg3z00_62)
	{
		{	/* Ast/walk.scm 160 */
			{	/* Ast/walk.scm 160 */
				obj_t BgL_method1656z00_2475;

				{	/* Ast/walk.scm 160 */
					obj_t BgL_res3817z00_6522;

					{	/* Ast/walk.scm 160 */
						long BgL_objzd2classzd2numz00_6487;

						{	/* Ast/walk.scm 160 */
							long BgL_res3807z00_6490;

							BgL_res3807z00_6490 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nz00_57));
							BgL_objzd2classzd2numz00_6487 = BgL_res3807z00_6490;
						}
						{	/* Ast/walk.scm 160 */
							obj_t BgL_arg1813z00_6488;

							BgL_arg1813z00_6488 =
								PROCEDURE_REF(BGl_walk4z12zd2envzc0zzast_walkz00,
								(int) (((long) 1)));
							{	/* Ast/walk.scm 160 */
								int BgL_offsetz00_6492;

								BgL_offsetz00_6492 = (int) (BgL_objzd2classzd2numz00_6487);
								{	/* Ast/walk.scm 160 */
									long BgL_offsetz00_6493;

									BgL_offsetz00_6493 =
										((long) (BgL_offsetz00_6492) - OBJECT_TYPE);
									{	/* Ast/walk.scm 160 */
										long BgL_modz00_6494;

										BgL_modz00_6494 =
											(BgL_offsetz00_6493 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/walk.scm 160 */
											long BgL_restz00_6496;

											BgL_restz00_6496 =
												(BgL_offsetz00_6493 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/walk.scm 160 */

												{	/* Ast/walk.scm 160 */
													obj_t BgL_bucketz00_6498;

													BgL_bucketz00_6498 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_6488), BgL_modz00_6494);
													BgL_res3817z00_6522 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_6498), BgL_restz00_6496);
					}}}}}}}}
					BgL_method1656z00_2475 = BgL_res3817z00_6522;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1656z00_2475) (BgL_method1656z00_2475,
						((obj_t) BgL_nz00_57), BgL_pz00_58, BgL_arg0z00_59, BgL_arg1z00_60,
						BgL_arg2z00_61, BgL_arg3z00_62, BEOA));
			}
		}

	}



/* &walk4! */
	BgL_nodez00_bglt BGl_z62walk4z12z70zzast_walkz00(obj_t BgL_envz00_7362,
		obj_t BgL_nz00_7363, obj_t BgL_pz00_7364, obj_t BgL_arg0z00_7365,
		obj_t BgL_arg1z00_7366, obj_t BgL_arg2z00_7367, obj_t BgL_arg3z00_7368)
	{
		{	/* Ast/walk.scm 160 */
			return
				BGl_walk4z12z12zzast_walkz00(
				((BgL_nodez00_bglt) BgL_nz00_7363), BgL_pz00_7364, BgL_arg0z00_7365,
				BgL_arg1z00_7366, BgL_arg2z00_7367, BgL_arg3z00_7368);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_walkz00()
	{
		{	/* Ast/walk.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0zd2envzd2zzast_walkz00, BGl_nodez00zzast_nodez00,
				BGl_proc3947z00zzast_walkz00, BGl_string3946z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1zd2envzd2zzast_walkz00, BGl_nodez00zzast_nodez00,
				BGl_proc3948z00zzast_walkz00, BGl_string3945z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2zd2envzd2zzast_walkz00, BGl_nodez00zzast_nodez00,
				BGl_proc3949z00zzast_walkz00, BGl_string3944z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3zd2envzd2zzast_walkz00, BGl_nodez00zzast_nodez00,
				BGl_proc3950z00zzast_walkz00, BGl_string3943z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0za2zd2envz70zzast_walkz00, BGl_nodez00zzast_nodez00,
				BGl_proc3951z00zzast_walkz00, BGl_string3941z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1za2zd2envz70zzast_walkz00, BGl_nodez00zzast_nodez00,
				BGl_proc3952z00zzast_walkz00, BGl_string3940z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2za2zd2envz70zzast_walkz00, BGl_nodez00zzast_nodez00,
				BGl_proc3953z00zzast_walkz00, BGl_string3939z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3za2zd2envz70zzast_walkz00, BGl_nodez00zzast_nodez00,
				BGl_proc3954z00zzast_walkz00, BGl_string3938z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0z12zd2envzc0zzast_walkz00, BGl_nodez00zzast_nodez00,
				BGl_proc3955z00zzast_walkz00, BGl_string3937z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1z12zd2envzc0zzast_walkz00, BGl_nodez00zzast_nodez00,
				BGl_proc3956z00zzast_walkz00, BGl_string3936z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2z12zd2envzc0zzast_walkz00, BGl_nodez00zzast_nodez00,
				BGl_proc3957z00zzast_walkz00, BGl_string3935z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3z12zd2envzc0zzast_walkz00, BGl_nodez00zzast_nodez00,
				BGl_proc3958z00zzast_walkz00, BGl_string3934z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0zd2envzd2zzast_walkz00, BGl_sequencez00zzast_nodez00,
				BGl_proc3959z00zzast_walkz00, BGl_string3946z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1zd2envzd2zzast_walkz00, BGl_sequencez00zzast_nodez00,
				BGl_proc3960z00zzast_walkz00, BGl_string3945z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2zd2envzd2zzast_walkz00, BGl_sequencez00zzast_nodez00,
				BGl_proc3961z00zzast_walkz00, BGl_string3944z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3zd2envzd2zzast_walkz00, BGl_sequencez00zzast_nodez00,
				BGl_proc3962z00zzast_walkz00, BGl_string3943z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0za2zd2envz70zzast_walkz00, BGl_sequencez00zzast_nodez00,
				BGl_proc3963z00zzast_walkz00, BGl_string3941z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1za2zd2envz70zzast_walkz00, BGl_sequencez00zzast_nodez00,
				BGl_proc3964z00zzast_walkz00, BGl_string3940z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2za2zd2envz70zzast_walkz00, BGl_sequencez00zzast_nodez00,
				BGl_proc3965z00zzast_walkz00, BGl_string3939z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3za2zd2envz70zzast_walkz00, BGl_sequencez00zzast_nodez00,
				BGl_proc3966z00zzast_walkz00, BGl_string3938z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0z12zd2envzc0zzast_walkz00, BGl_sequencez00zzast_nodez00,
				BGl_proc3967z00zzast_walkz00, BGl_string3937z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1z12zd2envzc0zzast_walkz00, BGl_sequencez00zzast_nodez00,
				BGl_proc3968z00zzast_walkz00, BGl_string3936z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2z12zd2envzc0zzast_walkz00, BGl_sequencez00zzast_nodez00,
				BGl_proc3969z00zzast_walkz00, BGl_string3935z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3z12zd2envzc0zzast_walkz00, BGl_sequencez00zzast_nodez00,
				BGl_proc3970z00zzast_walkz00, BGl_string3934z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0zd2envzd2zzast_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc3971z00zzast_walkz00, BGl_string3946z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1zd2envzd2zzast_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc3972z00zzast_walkz00, BGl_string3945z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2zd2envzd2zzast_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc3973z00zzast_walkz00, BGl_string3944z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3zd2envzd2zzast_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc3974z00zzast_walkz00, BGl_string3943z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0za2zd2envz70zzast_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc3975z00zzast_walkz00, BGl_string3941z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1za2zd2envz70zzast_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc3976z00zzast_walkz00, BGl_string3940z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2za2zd2envz70zzast_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc3977z00zzast_walkz00, BGl_string3939z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3za2zd2envz70zzast_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc3978z00zzast_walkz00, BGl_string3938z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0z12zd2envzc0zzast_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc3979z00zzast_walkz00, BGl_string3937z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1z12zd2envzc0zzast_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc3980z00zzast_walkz00, BGl_string3936z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2z12zd2envzc0zzast_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc3981z00zzast_walkz00, BGl_string3935z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3z12zd2envzc0zzast_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc3982z00zzast_walkz00, BGl_string3934z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0zd2envzd2zzast_walkz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc3983z00zzast_walkz00, BGl_string3946z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1zd2envzd2zzast_walkz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc3984z00zzast_walkz00, BGl_string3945z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2zd2envzd2zzast_walkz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc3985z00zzast_walkz00, BGl_string3944z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3zd2envzd2zzast_walkz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc3986z00zzast_walkz00, BGl_string3943z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0za2zd2envz70zzast_walkz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc3987z00zzast_walkz00, BGl_string3941z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1za2zd2envz70zzast_walkz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc3988z00zzast_walkz00, BGl_string3940z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2za2zd2envz70zzast_walkz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc3989z00zzast_walkz00, BGl_string3939z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3za2zd2envz70zzast_walkz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc3990z00zzast_walkz00, BGl_string3938z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0z12zd2envzc0zzast_walkz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc3991z00zzast_walkz00, BGl_string3937z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1z12zd2envzc0zzast_walkz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc3992z00zzast_walkz00, BGl_string3936z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2z12zd2envzc0zzast_walkz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc3993z00zzast_walkz00, BGl_string3935z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3z12zd2envzc0zzast_walkz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc3994z00zzast_walkz00, BGl_string3934z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0zd2envzd2zzast_walkz00, BGl_funcallz00zzast_nodez00,
				BGl_proc3995z00zzast_walkz00, BGl_string3946z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1zd2envzd2zzast_walkz00, BGl_funcallz00zzast_nodez00,
				BGl_proc3996z00zzast_walkz00, BGl_string3945z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2zd2envzd2zzast_walkz00, BGl_funcallz00zzast_nodez00,
				BGl_proc3997z00zzast_walkz00, BGl_string3944z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3zd2envzd2zzast_walkz00, BGl_funcallz00zzast_nodez00,
				BGl_proc3998z00zzast_walkz00, BGl_string3943z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0za2zd2envz70zzast_walkz00, BGl_funcallz00zzast_nodez00,
				BGl_proc3999z00zzast_walkz00, BGl_string3941z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1za2zd2envz70zzast_walkz00, BGl_funcallz00zzast_nodez00,
				BGl_proc4000z00zzast_walkz00, BGl_string3940z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2za2zd2envz70zzast_walkz00, BGl_funcallz00zzast_nodez00,
				BGl_proc4001z00zzast_walkz00, BGl_string3939z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3za2zd2envz70zzast_walkz00, BGl_funcallz00zzast_nodez00,
				BGl_proc4002z00zzast_walkz00, BGl_string3938z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0z12zd2envzc0zzast_walkz00, BGl_funcallz00zzast_nodez00,
				BGl_proc4003z00zzast_walkz00, BGl_string3937z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1z12zd2envzc0zzast_walkz00, BGl_funcallz00zzast_nodez00,
				BGl_proc4004z00zzast_walkz00, BGl_string3936z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2z12zd2envzc0zzast_walkz00, BGl_funcallz00zzast_nodez00,
				BGl_proc4005z00zzast_walkz00, BGl_string3935z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3z12zd2envzc0zzast_walkz00, BGl_funcallz00zzast_nodez00,
				BGl_proc4006z00zzast_walkz00, BGl_string3934z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0zd2envzd2zzast_walkz00, BGl_externz00zzast_nodez00,
				BGl_proc4007z00zzast_walkz00, BGl_string3946z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1zd2envzd2zzast_walkz00, BGl_externz00zzast_nodez00,
				BGl_proc4008z00zzast_walkz00, BGl_string3945z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2zd2envzd2zzast_walkz00, BGl_externz00zzast_nodez00,
				BGl_proc4009z00zzast_walkz00, BGl_string3944z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3zd2envzd2zzast_walkz00, BGl_externz00zzast_nodez00,
				BGl_proc4010z00zzast_walkz00, BGl_string3943z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0za2zd2envz70zzast_walkz00, BGl_externz00zzast_nodez00,
				BGl_proc4011z00zzast_walkz00, BGl_string3941z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1za2zd2envz70zzast_walkz00, BGl_externz00zzast_nodez00,
				BGl_proc4012z00zzast_walkz00, BGl_string3940z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2za2zd2envz70zzast_walkz00, BGl_externz00zzast_nodez00,
				BGl_proc4013z00zzast_walkz00, BGl_string3939z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3za2zd2envz70zzast_walkz00, BGl_externz00zzast_nodez00,
				BGl_proc4014z00zzast_walkz00, BGl_string3938z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0z12zd2envzc0zzast_walkz00, BGl_externz00zzast_nodez00,
				BGl_proc4015z00zzast_walkz00, BGl_string3937z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1z12zd2envzc0zzast_walkz00, BGl_externz00zzast_nodez00,
				BGl_proc4016z00zzast_walkz00, BGl_string3936z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2z12zd2envzc0zzast_walkz00, BGl_externz00zzast_nodez00,
				BGl_proc4017z00zzast_walkz00, BGl_string3935z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3z12zd2envzc0zzast_walkz00, BGl_externz00zzast_nodez00,
				BGl_proc4018z00zzast_walkz00, BGl_string3934z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0zd2envzd2zzast_walkz00, BGl_castz00zzast_nodez00,
				BGl_proc4019z00zzast_walkz00, BGl_string3946z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1zd2envzd2zzast_walkz00, BGl_castz00zzast_nodez00,
				BGl_proc4020z00zzast_walkz00, BGl_string3945z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2zd2envzd2zzast_walkz00, BGl_castz00zzast_nodez00,
				BGl_proc4021z00zzast_walkz00, BGl_string3944z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3zd2envzd2zzast_walkz00, BGl_castz00zzast_nodez00,
				BGl_proc4022z00zzast_walkz00, BGl_string3943z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0za2zd2envz70zzast_walkz00, BGl_castz00zzast_nodez00,
				BGl_proc4023z00zzast_walkz00, BGl_string3941z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1za2zd2envz70zzast_walkz00, BGl_castz00zzast_nodez00,
				BGl_proc4024z00zzast_walkz00, BGl_string3940z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2za2zd2envz70zzast_walkz00, BGl_castz00zzast_nodez00,
				BGl_proc4025z00zzast_walkz00, BGl_string3939z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3za2zd2envz70zzast_walkz00, BGl_castz00zzast_nodez00,
				BGl_proc4026z00zzast_walkz00, BGl_string3938z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0z12zd2envzc0zzast_walkz00, BGl_castz00zzast_nodez00,
				BGl_proc4027z00zzast_walkz00, BGl_string3937z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1z12zd2envzc0zzast_walkz00, BGl_castz00zzast_nodez00,
				BGl_proc4028z00zzast_walkz00, BGl_string3936z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2z12zd2envzc0zzast_walkz00, BGl_castz00zzast_nodez00,
				BGl_proc4029z00zzast_walkz00, BGl_string3935z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3z12zd2envzc0zzast_walkz00, BGl_castz00zzast_nodez00,
				BGl_proc4030z00zzast_walkz00, BGl_string3934z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0zd2envzd2zzast_walkz00, BGl_setqz00zzast_nodez00,
				BGl_proc4031z00zzast_walkz00, BGl_string3946z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1zd2envzd2zzast_walkz00, BGl_setqz00zzast_nodez00,
				BGl_proc4032z00zzast_walkz00, BGl_string3945z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2zd2envzd2zzast_walkz00, BGl_setqz00zzast_nodez00,
				BGl_proc4033z00zzast_walkz00, BGl_string3944z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3zd2envzd2zzast_walkz00, BGl_setqz00zzast_nodez00,
				BGl_proc4034z00zzast_walkz00, BGl_string3943z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0za2zd2envz70zzast_walkz00, BGl_setqz00zzast_nodez00,
				BGl_proc4035z00zzast_walkz00, BGl_string3941z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1za2zd2envz70zzast_walkz00, BGl_setqz00zzast_nodez00,
				BGl_proc4036z00zzast_walkz00, BGl_string3940z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2za2zd2envz70zzast_walkz00, BGl_setqz00zzast_nodez00,
				BGl_proc4037z00zzast_walkz00, BGl_string3939z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3za2zd2envz70zzast_walkz00, BGl_setqz00zzast_nodez00,
				BGl_proc4038z00zzast_walkz00, BGl_string3938z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0z12zd2envzc0zzast_walkz00, BGl_setqz00zzast_nodez00,
				BGl_proc4039z00zzast_walkz00, BGl_string3937z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1z12zd2envzc0zzast_walkz00, BGl_setqz00zzast_nodez00,
				BGl_proc4040z00zzast_walkz00, BGl_string3936z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2z12zd2envzc0zzast_walkz00, BGl_setqz00zzast_nodez00,
				BGl_proc4041z00zzast_walkz00, BGl_string3935z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3z12zd2envzc0zzast_walkz00, BGl_setqz00zzast_nodez00,
				BGl_proc4042z00zzast_walkz00, BGl_string3934z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0zd2envzd2zzast_walkz00, BGl_conditionalz00zzast_nodez00,
				BGl_proc4043z00zzast_walkz00, BGl_string3946z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1zd2envzd2zzast_walkz00, BGl_conditionalz00zzast_nodez00,
				BGl_proc4044z00zzast_walkz00, BGl_string3945z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2zd2envzd2zzast_walkz00, BGl_conditionalz00zzast_nodez00,
				BGl_proc4045z00zzast_walkz00, BGl_string3944z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3zd2envzd2zzast_walkz00, BGl_conditionalz00zzast_nodez00,
				BGl_proc4046z00zzast_walkz00, BGl_string3943z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0za2zd2envz70zzast_walkz00, BGl_conditionalz00zzast_nodez00,
				BGl_proc4047z00zzast_walkz00, BGl_string3941z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1za2zd2envz70zzast_walkz00, BGl_conditionalz00zzast_nodez00,
				BGl_proc4048z00zzast_walkz00, BGl_string3940z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2za2zd2envz70zzast_walkz00, BGl_conditionalz00zzast_nodez00,
				BGl_proc4049z00zzast_walkz00, BGl_string3939z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3za2zd2envz70zzast_walkz00, BGl_conditionalz00zzast_nodez00,
				BGl_proc4050z00zzast_walkz00, BGl_string3938z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0z12zd2envzc0zzast_walkz00, BGl_conditionalz00zzast_nodez00,
				BGl_proc4051z00zzast_walkz00, BGl_string3937z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1z12zd2envzc0zzast_walkz00, BGl_conditionalz00zzast_nodez00,
				BGl_proc4052z00zzast_walkz00, BGl_string3936z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2z12zd2envzc0zzast_walkz00, BGl_conditionalz00zzast_nodez00,
				BGl_proc4053z00zzast_walkz00, BGl_string3935z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3z12zd2envzc0zzast_walkz00, BGl_conditionalz00zzast_nodez00,
				BGl_proc4054z00zzast_walkz00, BGl_string3934z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0zd2envzd2zzast_walkz00, BGl_failz00zzast_nodez00,
				BGl_proc4055z00zzast_walkz00, BGl_string3946z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1zd2envzd2zzast_walkz00, BGl_failz00zzast_nodez00,
				BGl_proc4056z00zzast_walkz00, BGl_string3945z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2zd2envzd2zzast_walkz00, BGl_failz00zzast_nodez00,
				BGl_proc4057z00zzast_walkz00, BGl_string3944z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3zd2envzd2zzast_walkz00, BGl_failz00zzast_nodez00,
				BGl_proc4058z00zzast_walkz00, BGl_string3943z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0za2zd2envz70zzast_walkz00, BGl_failz00zzast_nodez00,
				BGl_proc4059z00zzast_walkz00, BGl_string3941z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1za2zd2envz70zzast_walkz00, BGl_failz00zzast_nodez00,
				BGl_proc4060z00zzast_walkz00, BGl_string3940z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2za2zd2envz70zzast_walkz00, BGl_failz00zzast_nodez00,
				BGl_proc4061z00zzast_walkz00, BGl_string3939z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3za2zd2envz70zzast_walkz00, BGl_failz00zzast_nodez00,
				BGl_proc4062z00zzast_walkz00, BGl_string3938z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0z12zd2envzc0zzast_walkz00, BGl_failz00zzast_nodez00,
				BGl_proc4063z00zzast_walkz00, BGl_string3937z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1z12zd2envzc0zzast_walkz00, BGl_failz00zzast_nodez00,
				BGl_proc4064z00zzast_walkz00, BGl_string3936z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2z12zd2envzc0zzast_walkz00, BGl_failz00zzast_nodez00,
				BGl_proc4065z00zzast_walkz00, BGl_string3935z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3z12zd2envzc0zzast_walkz00, BGl_failz00zzast_nodez00,
				BGl_proc4066z00zzast_walkz00, BGl_string3934z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0zd2envzd2zzast_walkz00, BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc4067z00zzast_walkz00, BGl_string3946z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1zd2envzd2zzast_walkz00, BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc4068z00zzast_walkz00, BGl_string3945z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2zd2envzd2zzast_walkz00, BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc4069z00zzast_walkz00, BGl_string3944z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3zd2envzd2zzast_walkz00, BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc4070z00zzast_walkz00, BGl_string3943z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0za2zd2envz70zzast_walkz00, BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc4071z00zzast_walkz00, BGl_string3941z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1za2zd2envz70zzast_walkz00, BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc4072z00zzast_walkz00, BGl_string3940z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2za2zd2envz70zzast_walkz00, BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc4073z00zzast_walkz00, BGl_string3939z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3za2zd2envz70zzast_walkz00, BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc4074z00zzast_walkz00, BGl_string3938z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0z12zd2envzc0zzast_walkz00, BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc4075z00zzast_walkz00, BGl_string3937z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1z12zd2envzc0zzast_walkz00, BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc4076z00zzast_walkz00, BGl_string3936z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2z12zd2envzc0zzast_walkz00, BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc4077z00zzast_walkz00, BGl_string3935z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3z12zd2envzc0zzast_walkz00, BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc4078z00zzast_walkz00, BGl_string3934z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0zd2envzd2zzast_walkz00, BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc4079z00zzast_walkz00, BGl_string3946z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1zd2envzd2zzast_walkz00, BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc4080z00zzast_walkz00, BGl_string3945z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2zd2envzd2zzast_walkz00, BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc4081z00zzast_walkz00, BGl_string3944z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3zd2envzd2zzast_walkz00, BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc4082z00zzast_walkz00, BGl_string3943z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0za2zd2envz70zzast_walkz00, BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc4083z00zzast_walkz00, BGl_string3941z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1za2zd2envz70zzast_walkz00, BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc4084z00zzast_walkz00, BGl_string3940z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2za2zd2envz70zzast_walkz00, BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc4085z00zzast_walkz00, BGl_string3939z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3za2zd2envz70zzast_walkz00, BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc4086z00zzast_walkz00, BGl_string3938z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0z12zd2envzc0zzast_walkz00, BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc4087z00zzast_walkz00, BGl_string3937z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1z12zd2envzc0zzast_walkz00, BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc4088z00zzast_walkz00, BGl_string3936z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2z12zd2envzc0zzast_walkz00, BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc4089z00zzast_walkz00, BGl_string3935z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3z12zd2envzc0zzast_walkz00, BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc4090z00zzast_walkz00, BGl_string3934z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0zd2envzd2zzast_walkz00, BGl_retblockz00zzast_nodez00,
				BGl_proc4091z00zzast_walkz00, BGl_string3946z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1zd2envzd2zzast_walkz00, BGl_retblockz00zzast_nodez00,
				BGl_proc4092z00zzast_walkz00, BGl_string3945z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2zd2envzd2zzast_walkz00, BGl_retblockz00zzast_nodez00,
				BGl_proc4093z00zzast_walkz00, BGl_string3944z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3zd2envzd2zzast_walkz00, BGl_retblockz00zzast_nodez00,
				BGl_proc4094z00zzast_walkz00, BGl_string3943z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0za2zd2envz70zzast_walkz00, BGl_retblockz00zzast_nodez00,
				BGl_proc4095z00zzast_walkz00, BGl_string3941z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1za2zd2envz70zzast_walkz00, BGl_retblockz00zzast_nodez00,
				BGl_proc4096z00zzast_walkz00, BGl_string3940z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2za2zd2envz70zzast_walkz00, BGl_retblockz00zzast_nodez00,
				BGl_proc4097z00zzast_walkz00, BGl_string3939z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3za2zd2envz70zzast_walkz00, BGl_retblockz00zzast_nodez00,
				BGl_proc4098z00zzast_walkz00, BGl_string3938z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0z12zd2envzc0zzast_walkz00, BGl_retblockz00zzast_nodez00,
				BGl_proc4099z00zzast_walkz00, BGl_string3937z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1z12zd2envzc0zzast_walkz00, BGl_retblockz00zzast_nodez00,
				BGl_proc4100z00zzast_walkz00, BGl_string3936z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2z12zd2envzc0zzast_walkz00, BGl_retblockz00zzast_nodez00,
				BGl_proc4101z00zzast_walkz00, BGl_string3935z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3z12zd2envzc0zzast_walkz00, BGl_retblockz00zzast_nodez00,
				BGl_proc4102z00zzast_walkz00, BGl_string3934z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0zd2envzd2zzast_walkz00, BGl_returnz00zzast_nodez00,
				BGl_proc4103z00zzast_walkz00, BGl_string3946z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1zd2envzd2zzast_walkz00, BGl_returnz00zzast_nodez00,
				BGl_proc4104z00zzast_walkz00, BGl_string3945z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2zd2envzd2zzast_walkz00, BGl_returnz00zzast_nodez00,
				BGl_proc4105z00zzast_walkz00, BGl_string3944z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3zd2envzd2zzast_walkz00, BGl_returnz00zzast_nodez00,
				BGl_proc4106z00zzast_walkz00, BGl_string3943z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0za2zd2envz70zzast_walkz00, BGl_returnz00zzast_nodez00,
				BGl_proc4107z00zzast_walkz00, BGl_string3941z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1za2zd2envz70zzast_walkz00, BGl_returnz00zzast_nodez00,
				BGl_proc4108z00zzast_walkz00, BGl_string3940z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2za2zd2envz70zzast_walkz00, BGl_returnz00zzast_nodez00,
				BGl_proc4109z00zzast_walkz00, BGl_string3939z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3za2zd2envz70zzast_walkz00, BGl_returnz00zzast_nodez00,
				BGl_proc4110z00zzast_walkz00, BGl_string3938z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0z12zd2envzc0zzast_walkz00, BGl_returnz00zzast_nodez00,
				BGl_proc4111z00zzast_walkz00, BGl_string3937z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1z12zd2envzc0zzast_walkz00, BGl_returnz00zzast_nodez00,
				BGl_proc4112z00zzast_walkz00, BGl_string3936z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2z12zd2envzc0zzast_walkz00, BGl_returnz00zzast_nodez00,
				BGl_proc4113z00zzast_walkz00, BGl_string3935z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3z12zd2envzc0zzast_walkz00, BGl_returnz00zzast_nodez00,
				BGl_proc4114z00zzast_walkz00, BGl_string3934z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0zd2envzd2zzast_walkz00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc4115z00zzast_walkz00, BGl_string3946z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1zd2envzd2zzast_walkz00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc4116z00zzast_walkz00, BGl_string3945z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2zd2envzd2zzast_walkz00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc4117z00zzast_walkz00, BGl_string3944z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3zd2envzd2zzast_walkz00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc4118z00zzast_walkz00, BGl_string3943z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0za2zd2envz70zzast_walkz00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc4119z00zzast_walkz00, BGl_string3941z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1za2zd2envz70zzast_walkz00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc4120z00zzast_walkz00, BGl_string3940z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2za2zd2envz70zzast_walkz00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc4121z00zzast_walkz00, BGl_string3939z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3za2zd2envz70zzast_walkz00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc4122z00zzast_walkz00, BGl_string3938z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0z12zd2envzc0zzast_walkz00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc4123z00zzast_walkz00, BGl_string3937z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1z12zd2envzc0zzast_walkz00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc4124z00zzast_walkz00, BGl_string3936z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2z12zd2envzc0zzast_walkz00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc4125z00zzast_walkz00, BGl_string3935z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3z12zd2envzc0zzast_walkz00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc4126z00zzast_walkz00, BGl_string3934z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0zd2envzd2zzast_walkz00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc4127z00zzast_walkz00, BGl_string3946z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1zd2envzd2zzast_walkz00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc4128z00zzast_walkz00, BGl_string3945z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2zd2envzd2zzast_walkz00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc4129z00zzast_walkz00, BGl_string3944z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3zd2envzd2zzast_walkz00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc4130z00zzast_walkz00, BGl_string3943z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0za2zd2envz70zzast_walkz00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc4131z00zzast_walkz00, BGl_string3941z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1za2zd2envz70zzast_walkz00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc4132z00zzast_walkz00, BGl_string3940z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2za2zd2envz70zzast_walkz00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc4133z00zzast_walkz00, BGl_string3939z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3za2zd2envz70zzast_walkz00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc4134z00zzast_walkz00, BGl_string3938z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0z12zd2envzc0zzast_walkz00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc4135z00zzast_walkz00, BGl_string3937z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1z12zd2envzc0zzast_walkz00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc4136z00zzast_walkz00, BGl_string3936z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2z12zd2envzc0zzast_walkz00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc4137z00zzast_walkz00, BGl_string3935z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3z12zd2envzc0zzast_walkz00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc4138z00zzast_walkz00, BGl_string3934z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0zd2envzd2zzast_walkz00, BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc4139z00zzast_walkz00, BGl_string3946z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1zd2envzd2zzast_walkz00, BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc4140z00zzast_walkz00, BGl_string3945z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2zd2envzd2zzast_walkz00, BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc4141z00zzast_walkz00, BGl_string3944z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3zd2envzd2zzast_walkz00, BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc4142z00zzast_walkz00, BGl_string3943z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0za2zd2envz70zzast_walkz00, BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc4143z00zzast_walkz00, BGl_string3941z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1za2zd2envz70zzast_walkz00, BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc4144z00zzast_walkz00, BGl_string3940z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2za2zd2envz70zzast_walkz00, BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc4145z00zzast_walkz00, BGl_string3939z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3za2zd2envz70zzast_walkz00, BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc4146z00zzast_walkz00, BGl_string3938z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0z12zd2envzc0zzast_walkz00, BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc4147z00zzast_walkz00, BGl_string3937z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1z12zd2envzc0zzast_walkz00, BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc4148z00zzast_walkz00, BGl_string3936z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2z12zd2envzc0zzast_walkz00, BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc4149z00zzast_walkz00, BGl_string3935z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3z12zd2envzc0zzast_walkz00, BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc4150z00zzast_walkz00, BGl_string3934z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0zd2envzd2zzast_walkz00, BGl_syncz00zzast_nodez00,
				BGl_proc4151z00zzast_walkz00, BGl_string3946z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1zd2envzd2zzast_walkz00, BGl_syncz00zzast_nodez00,
				BGl_proc4152z00zzast_walkz00, BGl_string3945z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2zd2envzd2zzast_walkz00, BGl_syncz00zzast_nodez00,
				BGl_proc4153z00zzast_walkz00, BGl_string3944z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3zd2envzd2zzast_walkz00, BGl_syncz00zzast_nodez00,
				BGl_proc4154z00zzast_walkz00, BGl_string3943z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0za2zd2envz70zzast_walkz00, BGl_syncz00zzast_nodez00,
				BGl_proc4155z00zzast_walkz00, BGl_string3941z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1za2zd2envz70zzast_walkz00, BGl_syncz00zzast_nodez00,
				BGl_proc4156z00zzast_walkz00, BGl_string3940z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2za2zd2envz70zzast_walkz00, BGl_syncz00zzast_nodez00,
				BGl_proc4157z00zzast_walkz00, BGl_string3939z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3za2zd2envz70zzast_walkz00, BGl_syncz00zzast_nodez00,
				BGl_proc4158z00zzast_walkz00, BGl_string3938z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0z12zd2envzc0zzast_walkz00, BGl_syncz00zzast_nodez00,
				BGl_proc4159z00zzast_walkz00, BGl_string3937z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1z12zd2envzc0zzast_walkz00, BGl_syncz00zzast_nodez00,
				BGl_proc4160z00zzast_walkz00, BGl_string3936z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2z12zd2envzc0zzast_walkz00, BGl_syncz00zzast_nodez00,
				BGl_proc4161z00zzast_walkz00, BGl_string3935z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3z12zd2envzc0zzast_walkz00, BGl_syncz00zzast_nodez00,
				BGl_proc4162z00zzast_walkz00, BGl_string3934z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0zd2envzd2zzast_walkz00, BGl_switchz00zzast_nodez00,
				BGl_proc4163z00zzast_walkz00, BGl_string3946z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1zd2envzd2zzast_walkz00, BGl_switchz00zzast_nodez00,
				BGl_proc4164z00zzast_walkz00, BGl_string3945z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2zd2envzd2zzast_walkz00, BGl_switchz00zzast_nodez00,
				BGl_proc4165z00zzast_walkz00, BGl_string3944z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3zd2envzd2zzast_walkz00, BGl_switchz00zzast_nodez00,
				BGl_proc4166z00zzast_walkz00, BGl_string3943z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0za2zd2envz70zzast_walkz00, BGl_switchz00zzast_nodez00,
				BGl_proc4167z00zzast_walkz00, BGl_string3941z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1za2zd2envz70zzast_walkz00, BGl_switchz00zzast_nodez00,
				BGl_proc4168z00zzast_walkz00, BGl_string3940z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2za2zd2envz70zzast_walkz00, BGl_switchz00zzast_nodez00,
				BGl_proc4169z00zzast_walkz00, BGl_string3939z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3za2zd2envz70zzast_walkz00, BGl_switchz00zzast_nodez00,
				BGl_proc4170z00zzast_walkz00, BGl_string3938z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0z12zd2envzc0zzast_walkz00, BGl_switchz00zzast_nodez00,
				BGl_proc4171z00zzast_walkz00, BGl_string3937z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1z12zd2envzc0zzast_walkz00, BGl_switchz00zzast_nodez00,
				BGl_proc4172z00zzast_walkz00, BGl_string3936z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2z12zd2envzc0zzast_walkz00, BGl_switchz00zzast_nodez00,
				BGl_proc4173z00zzast_walkz00, BGl_string3935z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3z12zd2envzc0zzast_walkz00, BGl_switchz00zzast_nodez00,
				BGl_proc4174z00zzast_walkz00, BGl_string3934z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0zd2envzd2zzast_walkz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc4175z00zzast_walkz00, BGl_string3946z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1zd2envzd2zzast_walkz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc4176z00zzast_walkz00, BGl_string3945z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2zd2envzd2zzast_walkz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc4177z00zzast_walkz00, BGl_string3944z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3zd2envzd2zzast_walkz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc4178z00zzast_walkz00, BGl_string3943z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0za2zd2envz70zzast_walkz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc4179z00zzast_walkz00, BGl_string3941z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1za2zd2envz70zzast_walkz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc4180z00zzast_walkz00, BGl_string3940z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2za2zd2envz70zzast_walkz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc4181z00zzast_walkz00, BGl_string3939z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3za2zd2envz70zzast_walkz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc4182z00zzast_walkz00, BGl_string3938z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0z12zd2envzc0zzast_walkz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc4183z00zzast_walkz00, BGl_string3937z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1z12zd2envzc0zzast_walkz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc4184z00zzast_walkz00, BGl_string3936z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2z12zd2envzc0zzast_walkz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc4185z00zzast_walkz00, BGl_string3935z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3z12zd2envzc0zzast_walkz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc4186z00zzast_walkz00, BGl_string3934z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0zd2envzd2zzast_walkz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc4187z00zzast_walkz00, BGl_string3946z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1zd2envzd2zzast_walkz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc4188z00zzast_walkz00, BGl_string3945z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2zd2envzd2zzast_walkz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc4189z00zzast_walkz00, BGl_string3944z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3zd2envzd2zzast_walkz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc4190z00zzast_walkz00, BGl_string3943z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0za2zd2envz70zzast_walkz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc4191z00zzast_walkz00, BGl_string3941z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1za2zd2envz70zzast_walkz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc4192z00zzast_walkz00, BGl_string3940z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2za2zd2envz70zzast_walkz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc4193z00zzast_walkz00, BGl_string3939z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3za2zd2envz70zzast_walkz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc4194z00zzast_walkz00, BGl_string3938z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk0z12zd2envzc0zzast_walkz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc4195z00zzast_walkz00, BGl_string3937z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk1z12zd2envzc0zzast_walkz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc4196z00zzast_walkz00, BGl_string3936z00zzast_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk2z12zd2envzc0zzast_walkz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc4197z00zzast_walkz00, BGl_string3935z00zzast_walkz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_walk3z12zd2envzc0zzast_walkz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc4198z00zzast_walkz00, BGl_string3934z00zzast_walkz00);
		}

	}



/* &walk3!-let-var2164 */
	BgL_nodez00_bglt BGl_z62walk3z12zd2letzd2var2164z70zzast_walkz00(obj_t
		BgL_envz00_7621, obj_t BgL_nz00_7622, obj_t BgL_pz00_7623,
		obj_t BgL_arg0z00_7624, obj_t BgL_arg1z00_7625, obj_t BgL_arg2z00_7626)
	{
		{	/* Ast/walk.scm 320 */
			{
				obj_t BgL_fieldsz00_8917;

				BgL_fieldsz00_8917 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nz00_7622)))->BgL_bindingsz00);
			BgL_loopz00_8916:
				if (NULLP(BgL_fieldsz00_8917))
					{	/* Ast/walk.scm 320 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 320 */
						{	/* Ast/walk.scm 320 */
							obj_t BgL_arg3561z00_8918;
							obj_t BgL_arg3562z00_8919;

							BgL_arg3561z00_8918 = CAR(((obj_t) BgL_fieldsz00_8917));
							{	/* Ast/walk.scm 320 */
								obj_t BgL_arg3563z00_8920;

								{	/* Ast/walk.scm 320 */
									obj_t BgL_pairz00_8921;

									BgL_pairz00_8921 = CAR(((obj_t) BgL_fieldsz00_8917));
									BgL_arg3563z00_8920 = CDR(BgL_pairz00_8921);
								}
								BgL_arg3562z00_8919 =
									PROCEDURE_ENTRY(BgL_pz00_7623) (BgL_pz00_7623,
									BgL_arg3563z00_8920, BgL_arg0z00_7624, BgL_arg1z00_7625,
									BgL_arg2z00_7626, BEOA);
							}
							{	/* Ast/walk.scm 320 */
								obj_t BgL_tmpz00_11180;

								BgL_tmpz00_11180 = ((obj_t) BgL_arg3561z00_8918);
								SET_CDR(BgL_tmpz00_11180, BgL_arg3562z00_8919);
							}
						}
						{	/* Ast/walk.scm 320 */
							obj_t BgL_arg3566z00_8922;

							BgL_arg3566z00_8922 = CDR(((obj_t) BgL_fieldsz00_8917));
							{
								obj_t BgL_fieldsz00_11185;

								BgL_fieldsz00_11185 = BgL_arg3566z00_8922;
								BgL_fieldsz00_8917 = BgL_fieldsz00_11185;
								goto BgL_loopz00_8916;
							}
						}
					}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_11188;

				{	/* Ast/walk.scm 320 */
					BgL_nodez00_bglt BgL_arg3567z00_8923;

					BgL_arg3567z00_8923 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nz00_7622)))->BgL_bodyz00);
					BgL_auxz00_11188 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7623) (BgL_pz00_7623,
							((obj_t) BgL_arg3567z00_8923), BgL_arg0z00_7624, BgL_arg1z00_7625,
							BgL_arg2z00_7626, BEOA));
				}
				((((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nz00_7622)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_11188), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt) BgL_nz00_7622));
		}

	}



/* &walk2!-let-var2162 */
	BgL_nodez00_bglt BGl_z62walk2z12zd2letzd2var2162z70zzast_walkz00(obj_t
		BgL_envz00_7627, obj_t BgL_nz00_7628, obj_t BgL_pz00_7629,
		obj_t BgL_arg0z00_7630, obj_t BgL_arg1z00_7631)
	{
		{	/* Ast/walk.scm 320 */
			{
				obj_t BgL_fieldsz00_8926;

				BgL_fieldsz00_8926 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nz00_7628)))->BgL_bindingsz00);
			BgL_loopz00_8925:
				if (NULLP(BgL_fieldsz00_8926))
					{	/* Ast/walk.scm 320 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 320 */
						{	/* Ast/walk.scm 320 */
							obj_t BgL_arg3550z00_8927;
							obj_t BgL_arg3551z00_8928;

							BgL_arg3550z00_8927 = CAR(((obj_t) BgL_fieldsz00_8926));
							{	/* Ast/walk.scm 320 */
								obj_t BgL_arg3552z00_8929;

								{	/* Ast/walk.scm 320 */
									obj_t BgL_pairz00_8930;

									BgL_pairz00_8930 = CAR(((obj_t) BgL_fieldsz00_8926));
									BgL_arg3552z00_8929 = CDR(BgL_pairz00_8930);
								}
								BgL_arg3551z00_8928 =
									PROCEDURE_ENTRY(BgL_pz00_7629) (BgL_pz00_7629,
									BgL_arg3552z00_8929, BgL_arg0z00_7630, BgL_arg1z00_7631,
									BEOA);
							}
							{	/* Ast/walk.scm 320 */
								obj_t BgL_tmpz00_11217;

								BgL_tmpz00_11217 = ((obj_t) BgL_arg3550z00_8927);
								SET_CDR(BgL_tmpz00_11217, BgL_arg3551z00_8928);
							}
						}
						{	/* Ast/walk.scm 320 */
							obj_t BgL_arg3554z00_8931;

							BgL_arg3554z00_8931 = CDR(((obj_t) BgL_fieldsz00_8926));
							{
								obj_t BgL_fieldsz00_11222;

								BgL_fieldsz00_11222 = BgL_arg3554z00_8931;
								BgL_fieldsz00_8926 = BgL_fieldsz00_11222;
								goto BgL_loopz00_8925;
							}
						}
					}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_11225;

				{	/* Ast/walk.scm 320 */
					BgL_nodez00_bglt BgL_arg3556z00_8932;

					BgL_arg3556z00_8932 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nz00_7628)))->BgL_bodyz00);
					BgL_auxz00_11225 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7629) (BgL_pz00_7629,
							((obj_t) BgL_arg3556z00_8932), BgL_arg0z00_7630, BgL_arg1z00_7631,
							BEOA));
				}
				((((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nz00_7628)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_11225), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt) BgL_nz00_7628));
		}

	}



/* &walk1!-let-var2160 */
	BgL_nodez00_bglt BGl_z62walk1z12zd2letzd2var2160z70zzast_walkz00(obj_t
		BgL_envz00_7632, obj_t BgL_nz00_7633, obj_t BgL_pz00_7634,
		obj_t BgL_arg0z00_7635)
	{
		{	/* Ast/walk.scm 320 */
			{
				obj_t BgL_fieldsz00_8935;

				BgL_fieldsz00_8935 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nz00_7633)))->BgL_bindingsz00);
			BgL_loopz00_8934:
				if (NULLP(BgL_fieldsz00_8935))
					{	/* Ast/walk.scm 320 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 320 */
						{	/* Ast/walk.scm 320 */
							obj_t BgL_arg3540z00_8936;
							obj_t BgL_arg3541z00_8937;

							BgL_arg3540z00_8936 = CAR(((obj_t) BgL_fieldsz00_8935));
							{	/* Ast/walk.scm 320 */
								obj_t BgL_arg3542z00_8938;

								{	/* Ast/walk.scm 320 */
									obj_t BgL_pairz00_8939;

									BgL_pairz00_8939 = CAR(((obj_t) BgL_fieldsz00_8935));
									BgL_arg3542z00_8938 = CDR(BgL_pairz00_8939);
								}
								BgL_arg3541z00_8937 =
									PROCEDURE_ENTRY(BgL_pz00_7634) (BgL_pz00_7634,
									BgL_arg3542z00_8938, BgL_arg0z00_7635, BEOA);
							}
							{	/* Ast/walk.scm 320 */
								obj_t BgL_tmpz00_11252;

								BgL_tmpz00_11252 = ((obj_t) BgL_arg3540z00_8936);
								SET_CDR(BgL_tmpz00_11252, BgL_arg3541z00_8937);
							}
						}
						{	/* Ast/walk.scm 320 */
							obj_t BgL_arg3544z00_8940;

							BgL_arg3544z00_8940 = CDR(((obj_t) BgL_fieldsz00_8935));
							{
								obj_t BgL_fieldsz00_11257;

								BgL_fieldsz00_11257 = BgL_arg3544z00_8940;
								BgL_fieldsz00_8935 = BgL_fieldsz00_11257;
								goto BgL_loopz00_8934;
							}
						}
					}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_11260;

				{	/* Ast/walk.scm 320 */
					BgL_nodez00_bglt BgL_arg3545z00_8941;

					BgL_arg3545z00_8941 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nz00_7633)))->BgL_bodyz00);
					BgL_auxz00_11260 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7634) (BgL_pz00_7634,
							((obj_t) BgL_arg3545z00_8941), BgL_arg0z00_7635, BEOA));
				}
				((((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nz00_7633)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_11260), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt) BgL_nz00_7633));
		}

	}



/* &walk0!-let-var2158 */
	BgL_nodez00_bglt BGl_z62walk0z12zd2letzd2var2158z70zzast_walkz00(obj_t
		BgL_envz00_7636, obj_t BgL_nz00_7637, obj_t BgL_pz00_7638)
	{
		{	/* Ast/walk.scm 320 */
			{
				obj_t BgL_fieldsz00_8944;

				BgL_fieldsz00_8944 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nz00_7637)))->BgL_bindingsz00);
			BgL_loopz00_8943:
				if (NULLP(BgL_fieldsz00_8944))
					{	/* Ast/walk.scm 320 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 320 */
						{	/* Ast/walk.scm 320 */
							obj_t BgL_arg3530z00_8945;
							obj_t BgL_arg3531z00_8946;

							BgL_arg3530z00_8945 = CAR(((obj_t) BgL_fieldsz00_8944));
							{	/* Ast/walk.scm 320 */
								obj_t BgL_arg3532z00_8947;

								{	/* Ast/walk.scm 320 */
									obj_t BgL_pairz00_8948;

									BgL_pairz00_8948 = CAR(((obj_t) BgL_fieldsz00_8944));
									BgL_arg3532z00_8947 = CDR(BgL_pairz00_8948);
								}
								BgL_arg3531z00_8946 =
									PROCEDURE_ENTRY(BgL_pz00_7638) (BgL_pz00_7638,
									BgL_arg3532z00_8947, BEOA);
							}
							{	/* Ast/walk.scm 320 */
								obj_t BgL_tmpz00_11285;

								BgL_tmpz00_11285 = ((obj_t) BgL_arg3530z00_8945);
								SET_CDR(BgL_tmpz00_11285, BgL_arg3531z00_8946);
							}
						}
						{	/* Ast/walk.scm 320 */
							obj_t BgL_arg3534z00_8949;

							BgL_arg3534z00_8949 = CDR(((obj_t) BgL_fieldsz00_8944));
							{
								obj_t BgL_fieldsz00_11290;

								BgL_fieldsz00_11290 = BgL_arg3534z00_8949;
								BgL_fieldsz00_8944 = BgL_fieldsz00_11290;
								goto BgL_loopz00_8943;
							}
						}
					}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_11293;

				{	/* Ast/walk.scm 320 */
					BgL_nodez00_bglt BgL_arg3536z00_8950;

					BgL_arg3536z00_8950 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nz00_7637)))->BgL_bodyz00);
					BgL_auxz00_11293 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7638) (BgL_pz00_7638,
							((obj_t) BgL_arg3536z00_8950), BEOA));
				}
				((((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nz00_7637)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_11293), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt) BgL_nz00_7637));
		}

	}



/* &walk3*-let-var2156 */
	obj_t BGl_z62walk3za2zd2letzd2var2156zc0zzast_walkz00(obj_t BgL_envz00_7639,
		obj_t BgL_nz00_7640, obj_t BgL_pz00_7641, obj_t BgL_arg0z00_7642,
		obj_t BgL_arg1z00_7643, obj_t BgL_arg2z00_7644)
	{
		{	/* Ast/walk.scm 320 */
			{	/* Ast/walk.scm 320 */
				obj_t BgL_res4200z00_8955;

				{	/* Ast/walk.scm 320 */
					obj_t BgL_arg3517z00_8952;
					obj_t BgL_arg3518z00_8953;

					BgL_arg3517z00_8952 =
						BGl_zc3z04anonymousza33519ze3ze70z60zzast_walkz00(BgL_arg2z00_7644,
						BgL_arg1z00_7643, BgL_arg0z00_7642, BgL_pz00_7641,
						(((BgL_letzd2varzd2_bglt) COBJECT(((BgL_letzd2varzd2_bglt)
										BgL_nz00_7640)))->BgL_bindingsz00));
					{	/* Ast/walk.scm 320 */
						BgL_nodez00_bglt BgL_arg3526z00_8954;

						BgL_arg3526z00_8954 =
							(((BgL_letzd2varzd2_bglt) COBJECT(
									((BgL_letzd2varzd2_bglt) BgL_nz00_7640)))->BgL_bodyz00);
						BgL_arg3518z00_8953 =
							PROCEDURE_ENTRY(BgL_pz00_7641) (BgL_pz00_7641,
							((obj_t) BgL_arg3526z00_8954), BgL_arg0z00_7642, BgL_arg1z00_7643,
							BgL_arg2z00_7644, BEOA);
					}
					BgL_res4200z00_8955 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg3517z00_8952,
						BgL_arg3518z00_8953);
				}
				return BgL_res4200z00_8955;
			}
		}

	}



/* <@anonymous:3519>~0 */
	obj_t BGl_zc3z04anonymousza33519ze3ze70z60zzast_walkz00(obj_t
		BgL_arg2z00_8824, obj_t BgL_arg1z00_8823, obj_t BgL_arg0z00_8822,
		obj_t BgL_pz00_8821, obj_t BgL_l1624z00_5637)
	{
		{	/* Ast/walk.scm 320 */
			if (NULLP(BgL_l1624z00_5637))
				{	/* Ast/walk.scm 320 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 320 */
					obj_t BgL_arg3521z00_5640;
					obj_t BgL_arg3522z00_5641;

					{	/* Ast/walk.scm 320 */
						obj_t BgL_fz00_5642;

						BgL_fz00_5642 = CAR(((obj_t) BgL_l1624z00_5637));
						{	/* Ast/walk.scm 320 */
							obj_t BgL_arg3524z00_5643;

							BgL_arg3524z00_5643 = CDR(((obj_t) BgL_fz00_5642));
							BgL_arg3521z00_5640 =
								PROCEDURE_ENTRY(BgL_pz00_8821) (BgL_pz00_8821,
								BgL_arg3524z00_5643, BgL_arg0z00_8822, BgL_arg1z00_8823,
								BgL_arg2z00_8824, BEOA);
						}
					}
					{	/* Ast/walk.scm 320 */
						obj_t BgL_arg3525z00_5644;

						BgL_arg3525z00_5644 = CDR(((obj_t) BgL_l1624z00_5637));
						BgL_arg3522z00_5641 =
							BGl_zc3z04anonymousza33519ze3ze70z60zzast_walkz00
							(BgL_arg2z00_8824, BgL_arg1z00_8823, BgL_arg0z00_8822,
							BgL_pz00_8821, BgL_arg3525z00_5644);
					}
					return bgl_append2(BgL_arg3521z00_5640, BgL_arg3522z00_5641);
				}
		}

	}



/* &walk2*-let-var2154 */
	obj_t BGl_z62walk2za2zd2letzd2var2154zc0zzast_walkz00(obj_t BgL_envz00_7645,
		obj_t BgL_nz00_7646, obj_t BgL_pz00_7647, obj_t BgL_arg0z00_7648,
		obj_t BgL_arg1z00_7649)
	{
		{	/* Ast/walk.scm 320 */
			{	/* Ast/walk.scm 320 */
				obj_t BgL_res4201z00_8960;

				{	/* Ast/walk.scm 320 */
					obj_t BgL_arg3506z00_8957;
					obj_t BgL_arg3507z00_8958;

					BgL_arg3506z00_8957 =
						BGl_zc3z04anonymousza33508ze3ze70z60zzast_walkz00(BgL_arg1z00_7649,
						BgL_arg0z00_7648, BgL_pz00_7647,
						(((BgL_letzd2varzd2_bglt) COBJECT(((BgL_letzd2varzd2_bglt)
										BgL_nz00_7646)))->BgL_bindingsz00));
					{	/* Ast/walk.scm 320 */
						BgL_nodez00_bglt BgL_arg3515z00_8959;

						BgL_arg3515z00_8959 =
							(((BgL_letzd2varzd2_bglt) COBJECT(
									((BgL_letzd2varzd2_bglt) BgL_nz00_7646)))->BgL_bodyz00);
						BgL_arg3507z00_8958 =
							PROCEDURE_ENTRY(BgL_pz00_7647) (BgL_pz00_7647,
							((obj_t) BgL_arg3515z00_8959), BgL_arg0z00_7648, BgL_arg1z00_7649,
							BEOA);
					}
					BgL_res4201z00_8960 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg3506z00_8957,
						BgL_arg3507z00_8958);
				}
				return BgL_res4201z00_8960;
			}
		}

	}



/* <@anonymous:3508>~0 */
	obj_t BGl_zc3z04anonymousza33508ze3ze70z60zzast_walkz00(obj_t
		BgL_arg1z00_8820, obj_t BgL_arg0z00_8819, obj_t BgL_pz00_8818,
		obj_t BgL_l1621z00_5614)
	{
		{	/* Ast/walk.scm 320 */
			if (NULLP(BgL_l1621z00_5614))
				{	/* Ast/walk.scm 320 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 320 */
					obj_t BgL_arg3510z00_5617;
					obj_t BgL_arg3512z00_5618;

					{	/* Ast/walk.scm 320 */
						obj_t BgL_fz00_5619;

						BgL_fz00_5619 = CAR(((obj_t) BgL_l1621z00_5614));
						{	/* Ast/walk.scm 320 */
							obj_t BgL_arg3513z00_5620;

							BgL_arg3513z00_5620 = CDR(((obj_t) BgL_fz00_5619));
							BgL_arg3510z00_5617 =
								PROCEDURE_ENTRY(BgL_pz00_8818) (BgL_pz00_8818,
								BgL_arg3513z00_5620, BgL_arg0z00_8819, BgL_arg1z00_8820, BEOA);
						}
					}
					{	/* Ast/walk.scm 320 */
						obj_t BgL_arg3514z00_5621;

						BgL_arg3514z00_5621 = CDR(((obj_t) BgL_l1621z00_5614));
						BgL_arg3512z00_5618 =
							BGl_zc3z04anonymousza33508ze3ze70z60zzast_walkz00
							(BgL_arg1z00_8820, BgL_arg0z00_8819, BgL_pz00_8818,
							BgL_arg3514z00_5621);
					}
					return bgl_append2(BgL_arg3510z00_5617, BgL_arg3512z00_5618);
				}
		}

	}



/* &walk1*-let-var2152 */
	obj_t BGl_z62walk1za2zd2letzd2var2152zc0zzast_walkz00(obj_t BgL_envz00_7650,
		obj_t BgL_nz00_7651, obj_t BgL_pz00_7652, obj_t BgL_arg0z00_7653)
	{
		{	/* Ast/walk.scm 320 */
			{	/* Ast/walk.scm 320 */
				obj_t BgL_res4202z00_8965;

				{	/* Ast/walk.scm 320 */
					obj_t BgL_arg3495z00_8962;
					obj_t BgL_arg3496z00_8963;

					BgL_arg3495z00_8962 =
						BGl_zc3z04anonymousza33497ze3ze70z60zzast_walkz00(BgL_arg0z00_7653,
						BgL_pz00_7652,
						(((BgL_letzd2varzd2_bglt) COBJECT(((BgL_letzd2varzd2_bglt)
										BgL_nz00_7651)))->BgL_bindingsz00));
					{	/* Ast/walk.scm 320 */
						BgL_nodez00_bglt BgL_arg3505z00_8964;

						BgL_arg3505z00_8964 =
							(((BgL_letzd2varzd2_bglt) COBJECT(
									((BgL_letzd2varzd2_bglt) BgL_nz00_7651)))->BgL_bodyz00);
						BgL_arg3496z00_8963 =
							PROCEDURE_ENTRY(BgL_pz00_7652) (BgL_pz00_7652,
							((obj_t) BgL_arg3505z00_8964), BgL_arg0z00_7653, BEOA);
					}
					BgL_res4202z00_8965 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg3495z00_8962,
						BgL_arg3496z00_8963);
				}
				return BgL_res4202z00_8965;
			}
		}

	}



/* <@anonymous:3497>~0 */
	obj_t BGl_zc3z04anonymousza33497ze3ze70z60zzast_walkz00(obj_t
		BgL_arg0z00_8817, obj_t BgL_pz00_8816, obj_t BgL_l1618z00_5592)
	{
		{	/* Ast/walk.scm 320 */
			if (NULLP(BgL_l1618z00_5592))
				{	/* Ast/walk.scm 320 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 320 */
					obj_t BgL_arg3499z00_5595;
					obj_t BgL_arg3500z00_5596;

					{	/* Ast/walk.scm 320 */
						obj_t BgL_fz00_5597;

						BgL_fz00_5597 = CAR(((obj_t) BgL_l1618z00_5592));
						{	/* Ast/walk.scm 320 */
							obj_t BgL_arg3502z00_5598;

							BgL_arg3502z00_5598 = CDR(((obj_t) BgL_fz00_5597));
							BgL_arg3499z00_5595 =
								PROCEDURE_ENTRY(BgL_pz00_8816) (BgL_pz00_8816,
								BgL_arg3502z00_5598, BgL_arg0z00_8817, BEOA);
						}
					}
					{	/* Ast/walk.scm 320 */
						obj_t BgL_arg3503z00_5599;

						BgL_arg3503z00_5599 = CDR(((obj_t) BgL_l1618z00_5592));
						BgL_arg3500z00_5596 =
							BGl_zc3z04anonymousza33497ze3ze70z60zzast_walkz00
							(BgL_arg0z00_8817, BgL_pz00_8816, BgL_arg3503z00_5599);
					}
					return bgl_append2(BgL_arg3499z00_5595, BgL_arg3500z00_5596);
				}
		}

	}



/* &walk0*-let-var2150 */
	obj_t BGl_z62walk0za2zd2letzd2var2150zc0zzast_walkz00(obj_t BgL_envz00_7654,
		obj_t BgL_nz00_7655, obj_t BgL_pz00_7656)
	{
		{	/* Ast/walk.scm 320 */
			{	/* Ast/walk.scm 320 */
				obj_t BgL_res4203z00_8970;

				{	/* Ast/walk.scm 320 */
					obj_t BgL_arg3484z00_8967;
					obj_t BgL_arg3485z00_8968;

					BgL_arg3484z00_8967 =
						BGl_zc3z04anonymousza33486ze3ze70z60zzast_walkz00(BgL_pz00_7656,
						(((BgL_letzd2varzd2_bglt) COBJECT(
									((BgL_letzd2varzd2_bglt) BgL_nz00_7655)))->BgL_bindingsz00));
					{	/* Ast/walk.scm 320 */
						BgL_nodez00_bglt BgL_arg3494z00_8969;

						BgL_arg3494z00_8969 =
							(((BgL_letzd2varzd2_bglt) COBJECT(
									((BgL_letzd2varzd2_bglt) BgL_nz00_7655)))->BgL_bodyz00);
						BgL_arg3485z00_8968 =
							PROCEDURE_ENTRY(BgL_pz00_7656) (BgL_pz00_7656,
							((obj_t) BgL_arg3494z00_8969), BEOA);
					}
					BgL_res4203z00_8970 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg3484z00_8967,
						BgL_arg3485z00_8968);
				}
				return BgL_res4203z00_8970;
			}
		}

	}



/* <@anonymous:3486>~0 */
	obj_t BGl_zc3z04anonymousza33486ze3ze70z60zzast_walkz00(obj_t BgL_pz00_8815,
		obj_t BgL_l1615z00_5571)
	{
		{	/* Ast/walk.scm 320 */
			if (NULLP(BgL_l1615z00_5571))
				{	/* Ast/walk.scm 320 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 320 */
					obj_t BgL_arg3489z00_5574;
					obj_t BgL_arg3490z00_5575;

					{	/* Ast/walk.scm 320 */
						obj_t BgL_fz00_5576;

						BgL_fz00_5576 = CAR(((obj_t) BgL_l1615z00_5571));
						{	/* Ast/walk.scm 320 */
							obj_t BgL_arg3491z00_5577;

							BgL_arg3491z00_5577 = CDR(((obj_t) BgL_fz00_5576));
							BgL_arg3489z00_5574 =
								PROCEDURE_ENTRY(BgL_pz00_8815) (BgL_pz00_8815,
								BgL_arg3491z00_5577, BEOA);
						}
					}
					{	/* Ast/walk.scm 320 */
						obj_t BgL_arg3492z00_5578;

						BgL_arg3492z00_5578 = CDR(((obj_t) BgL_l1615z00_5571));
						BgL_arg3490z00_5575 =
							BGl_zc3z04anonymousza33486ze3ze70z60zzast_walkz00(BgL_pz00_8815,
							BgL_arg3492z00_5578);
					}
					return bgl_append2(BgL_arg3489z00_5574, BgL_arg3490z00_5575);
				}
		}

	}



/* &walk3-let-var2148 */
	obj_t BGl_z62walk3zd2letzd2var2148z62zzast_walkz00(obj_t BgL_envz00_7657,
		obj_t BgL_nz00_7658, obj_t BgL_pz00_7659, obj_t BgL_arg0z00_7660,
		obj_t BgL_arg1z00_7661, obj_t BgL_arg2z00_7662)
	{
		{	/* Ast/walk.scm 320 */
			{	/* Ast/walk.scm 320 */
				obj_t BgL_g1613z00_8972;

				BgL_g1613z00_8972 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nz00_7658)))->BgL_bindingsz00);
				{
					obj_t BgL_l1611z00_8974;

					BgL_l1611z00_8974 = BgL_g1613z00_8972;
				BgL_zc3z04anonymousza33478ze3z87_8973:
					if (PAIRP(BgL_l1611z00_8974))
						{	/* Ast/walk.scm 320 */
							{	/* Ast/walk.scm 320 */
								obj_t BgL_fz00_8975;

								BgL_fz00_8975 = CAR(BgL_l1611z00_8974);
								{	/* Ast/walk.scm 320 */
									obj_t BgL_arg3480z00_8976;

									BgL_arg3480z00_8976 = CDR(((obj_t) BgL_fz00_8975));
									PROCEDURE_ENTRY(BgL_pz00_7659) (BgL_pz00_7659,
										BgL_arg3480z00_8976, BgL_arg0z00_7660, BgL_arg1z00_7661,
										BgL_arg2z00_7662, BEOA);
								}
							}
							{
								obj_t BgL_l1611z00_11432;

								BgL_l1611z00_11432 = CDR(BgL_l1611z00_8974);
								BgL_l1611z00_8974 = BgL_l1611z00_11432;
								goto BgL_zc3z04anonymousza33478ze3z87_8973;
							}
						}
					else
						{	/* Ast/walk.scm 320 */
							((bool_t) 1);
						}
				}
			}
			{	/* Ast/walk.scm 320 */
				BgL_nodez00_bglt BgL_arg3482z00_8977;

				BgL_arg3482z00_8977 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nz00_7658)))->BgL_bodyz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_7659) (BgL_pz00_7659,
					((obj_t) BgL_arg3482z00_8977), BgL_arg0z00_7660, BgL_arg1z00_7661,
					BgL_arg2z00_7662, BEOA);
			}
		}

	}



/* &walk2-let-var2146 */
	obj_t BGl_z62walk2zd2letzd2var2146z62zzast_walkz00(obj_t BgL_envz00_7663,
		obj_t BgL_nz00_7664, obj_t BgL_pz00_7665, obj_t BgL_arg0z00_7666,
		obj_t BgL_arg1z00_7667)
	{
		{	/* Ast/walk.scm 320 */
			{	/* Ast/walk.scm 320 */
				obj_t BgL_g1610z00_8979;

				BgL_g1610z00_8979 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nz00_7664)))->BgL_bindingsz00);
				{
					obj_t BgL_l1608z00_8981;

					BgL_l1608z00_8981 = BgL_g1610z00_8979;
				BgL_zc3z04anonymousza33472ze3z87_8980:
					if (PAIRP(BgL_l1608z00_8981))
						{	/* Ast/walk.scm 320 */
							{	/* Ast/walk.scm 320 */
								obj_t BgL_fz00_8982;

								BgL_fz00_8982 = CAR(BgL_l1608z00_8981);
								{	/* Ast/walk.scm 320 */
									obj_t BgL_arg3474z00_8983;

									BgL_arg3474z00_8983 = CDR(((obj_t) BgL_fz00_8982));
									PROCEDURE_ENTRY(BgL_pz00_7665) (BgL_pz00_7665,
										BgL_arg3474z00_8983, BgL_arg0z00_7666, BgL_arg1z00_7667,
										BEOA);
								}
							}
							{
								obj_t BgL_l1608z00_11457;

								BgL_l1608z00_11457 = CDR(BgL_l1608z00_8981);
								BgL_l1608z00_8981 = BgL_l1608z00_11457;
								goto BgL_zc3z04anonymousza33472ze3z87_8980;
							}
						}
					else
						{	/* Ast/walk.scm 320 */
							((bool_t) 1);
						}
				}
			}
			{	/* Ast/walk.scm 320 */
				BgL_nodez00_bglt BgL_arg3477z00_8984;

				BgL_arg3477z00_8984 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nz00_7664)))->BgL_bodyz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_7665) (BgL_pz00_7665,
					((obj_t) BgL_arg3477z00_8984), BgL_arg0z00_7666, BgL_arg1z00_7667,
					BEOA);
			}
		}

	}



/* &walk1-let-var2144 */
	obj_t BGl_z62walk1zd2letzd2var2144z62zzast_walkz00(obj_t BgL_envz00_7668,
		obj_t BgL_nz00_7669, obj_t BgL_pz00_7670, obj_t BgL_arg0z00_7671)
	{
		{	/* Ast/walk.scm 320 */
			{	/* Ast/walk.scm 320 */
				obj_t BgL_g1607z00_8986;

				BgL_g1607z00_8986 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nz00_7669)))->BgL_bindingsz00);
				{
					obj_t BgL_l1605z00_8988;

					BgL_l1605z00_8988 = BgL_g1607z00_8986;
				BgL_zc3z04anonymousza33467ze3z87_8987:
					if (PAIRP(BgL_l1605z00_8988))
						{	/* Ast/walk.scm 320 */
							{	/* Ast/walk.scm 320 */
								obj_t BgL_fz00_8989;

								BgL_fz00_8989 = CAR(BgL_l1605z00_8988);
								{	/* Ast/walk.scm 320 */
									obj_t BgL_arg3469z00_8990;

									BgL_arg3469z00_8990 = CDR(((obj_t) BgL_fz00_8989));
									PROCEDURE_ENTRY(BgL_pz00_7670) (BgL_pz00_7670,
										BgL_arg3469z00_8990, BgL_arg0z00_7671, BEOA);
								}
							}
							{
								obj_t BgL_l1605z00_11480;

								BgL_l1605z00_11480 = CDR(BgL_l1605z00_8988);
								BgL_l1605z00_8988 = BgL_l1605z00_11480;
								goto BgL_zc3z04anonymousza33467ze3z87_8987;
							}
						}
					else
						{	/* Ast/walk.scm 320 */
							((bool_t) 1);
						}
				}
			}
			{	/* Ast/walk.scm 320 */
				BgL_nodez00_bglt BgL_arg3471z00_8991;

				BgL_arg3471z00_8991 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nz00_7669)))->BgL_bodyz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_7670) (BgL_pz00_7670,
					((obj_t) BgL_arg3471z00_8991), BgL_arg0z00_7671, BEOA);
			}
		}

	}



/* &walk0-let-var2142 */
	obj_t BGl_z62walk0zd2letzd2var2142z62zzast_walkz00(obj_t BgL_envz00_7672,
		obj_t BgL_nz00_7673, obj_t BgL_pz00_7674)
	{
		{	/* Ast/walk.scm 320 */
			{	/* Ast/walk.scm 320 */
				obj_t BgL_g1604z00_8993;

				BgL_g1604z00_8993 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nz00_7673)))->BgL_bindingsz00);
				{
					obj_t BgL_l1602z00_8995;

					BgL_l1602z00_8995 = BgL_g1604z00_8993;
				BgL_zc3z04anonymousza33461ze3z87_8994:
					if (PAIRP(BgL_l1602z00_8995))
						{	/* Ast/walk.scm 320 */
							{	/* Ast/walk.scm 320 */
								obj_t BgL_fz00_8996;

								BgL_fz00_8996 = CAR(BgL_l1602z00_8995);
								{	/* Ast/walk.scm 320 */
									obj_t BgL_arg3463z00_8997;

									BgL_arg3463z00_8997 = CDR(((obj_t) BgL_fz00_8996));
									PROCEDURE_ENTRY(BgL_pz00_7674) (BgL_pz00_7674,
										BgL_arg3463z00_8997, BEOA);
								}
							}
							{
								obj_t BgL_l1602z00_11501;

								BgL_l1602z00_11501 = CDR(BgL_l1602z00_8995);
								BgL_l1602z00_8995 = BgL_l1602z00_11501;
								goto BgL_zc3z04anonymousza33461ze3z87_8994;
							}
						}
					else
						{	/* Ast/walk.scm 320 */
							((bool_t) 1);
						}
				}
			}
			{	/* Ast/walk.scm 320 */
				BgL_nodez00_bglt BgL_arg3466z00_8998;

				BgL_arg3466z00_8998 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nz00_7673)))->BgL_bodyz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_7674) (BgL_pz00_7674,
					((obj_t) BgL_arg3466z00_8998), BEOA);
			}
		}

	}



/* &walk3!-let-fun2140 */
	BgL_nodez00_bglt BGl_z62walk3z12zd2letzd2fun2140z70zzast_walkz00(obj_t
		BgL_envz00_7675, obj_t BgL_nz00_7676, obj_t BgL_pz00_7677,
		obj_t BgL_arg0z00_7678, obj_t BgL_arg1z00_7679, obj_t BgL_arg2z00_7680)
	{
		{	/* Ast/walk.scm 315 */
			{
				obj_t BgL_fieldsz00_9001;

				BgL_fieldsz00_9001 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nz00_7676)))->BgL_localsz00);
			BgL_loopz00_9000:
				if (NULLP(BgL_fieldsz00_9001))
					{	/* Ast/walk.scm 315 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 315 */
						{	/* Ast/walk.scm 315 */
							obj_t BgL_vz00_9002;
							obj_t BgL_bz00_9003;

							BgL_vz00_9002 = CAR(((obj_t) BgL_fieldsz00_9001));
							{	/* Ast/walk.scm 315 */
								obj_t BgL_arg3457z00_9004;

								BgL_arg3457z00_9004 =
									(((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt)
												(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																CAR(
																	((obj_t) BgL_fieldsz00_9001)))))->
													BgL_valuez00))))->BgL_bodyz00);
								BgL_bz00_9003 =
									PROCEDURE_ENTRY(BgL_pz00_7677) (BgL_pz00_7677,
									BgL_arg3457z00_9004, BgL_arg0z00_7678, BgL_arg1z00_7679,
									BgL_arg2z00_7680, BEOA);
							}
							{	/* Ast/walk.scm 317 */
								BgL_valuez00_bglt BgL_arg3456z00_9005;

								BgL_arg3456z00_9005 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_vz00_9002)))->BgL_valuez00);
								((((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_arg3456z00_9005)))->
										BgL_bodyz00) = ((obj_t) BgL_bz00_9003), BUNSPEC);
							}
						}
						{	/* Ast/walk.scm 315 */
							obj_t BgL_arg3459z00_9006;

							BgL_arg3459z00_9006 = CDR(((obj_t) BgL_fieldsz00_9001));
							{
								obj_t BgL_fieldsz00_11533;

								BgL_fieldsz00_11533 = BgL_arg3459z00_9006;
								BgL_fieldsz00_9001 = BgL_fieldsz00_11533;
								goto BgL_loopz00_9000;
							}
						}
					}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_11536;

				{	/* Ast/walk.scm 315 */
					BgL_nodez00_bglt BgL_arg3460z00_9007;

					BgL_arg3460z00_9007 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nz00_7676)))->BgL_bodyz00);
					BgL_auxz00_11536 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7677) (BgL_pz00_7677,
							((obj_t) BgL_arg3460z00_9007), BgL_arg0z00_7678, BgL_arg1z00_7679,
							BgL_arg2z00_7680, BEOA));
				}
				((((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nz00_7676)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_11536), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt) BgL_nz00_7676));
		}

	}



/* &walk2!-let-fun2138 */
	BgL_nodez00_bglt BGl_z62walk2z12zd2letzd2fun2138z70zzast_walkz00(obj_t
		BgL_envz00_7681, obj_t BgL_nz00_7682, obj_t BgL_pz00_7683,
		obj_t BgL_arg0z00_7684, obj_t BgL_arg1z00_7685)
	{
		{	/* Ast/walk.scm 315 */
			{
				obj_t BgL_fieldsz00_9010;

				BgL_fieldsz00_9010 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nz00_7682)))->BgL_localsz00);
			BgL_loopz00_9009:
				if (NULLP(BgL_fieldsz00_9010))
					{	/* Ast/walk.scm 315 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 315 */
						{	/* Ast/walk.scm 315 */
							obj_t BgL_vz00_9011;
							obj_t BgL_bz00_9012;

							BgL_vz00_9011 = CAR(((obj_t) BgL_fieldsz00_9010));
							{	/* Ast/walk.scm 315 */
								obj_t BgL_arg3448z00_9013;

								BgL_arg3448z00_9013 =
									(((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt)
												(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																CAR(
																	((obj_t) BgL_fieldsz00_9010)))))->
													BgL_valuez00))))->BgL_bodyz00);
								BgL_bz00_9012 =
									PROCEDURE_ENTRY(BgL_pz00_7683) (BgL_pz00_7683,
									BgL_arg3448z00_9013, BgL_arg0z00_7684, BgL_arg1z00_7685,
									BEOA);
							}
							{	/* Ast/walk.scm 317 */
								BgL_valuez00_bglt BgL_arg3447z00_9014;

								BgL_arg3447z00_9014 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_vz00_9011)))->BgL_valuez00);
								((((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_arg3447z00_9014)))->
										BgL_bodyz00) = ((obj_t) BgL_bz00_9012), BUNSPEC);
							}
						}
						{	/* Ast/walk.scm 315 */
							obj_t BgL_arg3450z00_9015;

							BgL_arg3450z00_9015 = CDR(((obj_t) BgL_fieldsz00_9010));
							{
								obj_t BgL_fieldsz00_11574;

								BgL_fieldsz00_11574 = BgL_arg3450z00_9015;
								BgL_fieldsz00_9010 = BgL_fieldsz00_11574;
								goto BgL_loopz00_9009;
							}
						}
					}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_11577;

				{	/* Ast/walk.scm 315 */
					BgL_nodez00_bglt BgL_arg3452z00_9016;

					BgL_arg3452z00_9016 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nz00_7682)))->BgL_bodyz00);
					BgL_auxz00_11577 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7683) (BgL_pz00_7683,
							((obj_t) BgL_arg3452z00_9016), BgL_arg0z00_7684, BgL_arg1z00_7685,
							BEOA));
				}
				((((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nz00_7682)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_11577), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt) BgL_nz00_7682));
		}

	}



/* &walk1!-let-fun2136 */
	BgL_nodez00_bglt BGl_z62walk1z12zd2letzd2fun2136z70zzast_walkz00(obj_t
		BgL_envz00_7686, obj_t BgL_nz00_7687, obj_t BgL_pz00_7688,
		obj_t BgL_arg0z00_7689)
	{
		{	/* Ast/walk.scm 315 */
			{
				obj_t BgL_fieldsz00_9019;

				BgL_fieldsz00_9019 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nz00_7687)))->BgL_localsz00);
			BgL_loopz00_9018:
				if (NULLP(BgL_fieldsz00_9019))
					{	/* Ast/walk.scm 315 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 315 */
						{	/* Ast/walk.scm 315 */
							obj_t BgL_vz00_9020;
							obj_t BgL_bz00_9021;

							BgL_vz00_9020 = CAR(((obj_t) BgL_fieldsz00_9019));
							{	/* Ast/walk.scm 315 */
								obj_t BgL_arg3438z00_9022;

								BgL_arg3438z00_9022 =
									(((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt)
												(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																CAR(
																	((obj_t) BgL_fieldsz00_9019)))))->
													BgL_valuez00))))->BgL_bodyz00);
								BgL_bz00_9021 =
									PROCEDURE_ENTRY(BgL_pz00_7688) (BgL_pz00_7688,
									BgL_arg3438z00_9022, BgL_arg0z00_7689, BEOA);
							}
							{	/* Ast/walk.scm 317 */
								BgL_valuez00_bglt BgL_arg3437z00_9023;

								BgL_arg3437z00_9023 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_vz00_9020)))->BgL_valuez00);
								((((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_arg3437z00_9023)))->
										BgL_bodyz00) = ((obj_t) BgL_bz00_9021), BUNSPEC);
							}
						}
						{	/* Ast/walk.scm 315 */
							obj_t BgL_arg3440z00_9024;

							BgL_arg3440z00_9024 = CDR(((obj_t) BgL_fieldsz00_9019));
							{
								obj_t BgL_fieldsz00_11613;

								BgL_fieldsz00_11613 = BgL_arg3440z00_9024;
								BgL_fieldsz00_9019 = BgL_fieldsz00_11613;
								goto BgL_loopz00_9018;
							}
						}
					}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_11616;

				{	/* Ast/walk.scm 315 */
					BgL_nodez00_bglt BgL_arg3442z00_9025;

					BgL_arg3442z00_9025 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nz00_7687)))->BgL_bodyz00);
					BgL_auxz00_11616 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7688) (BgL_pz00_7688,
							((obj_t) BgL_arg3442z00_9025), BgL_arg0z00_7689, BEOA));
				}
				((((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nz00_7687)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_11616), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt) BgL_nz00_7687));
		}

	}



/* &walk0!-let-fun2134 */
	BgL_nodez00_bglt BGl_z62walk0z12zd2letzd2fun2134z70zzast_walkz00(obj_t
		BgL_envz00_7690, obj_t BgL_nz00_7691, obj_t BgL_pz00_7692)
	{
		{	/* Ast/walk.scm 315 */
			{
				obj_t BgL_fieldsz00_9028;

				BgL_fieldsz00_9028 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nz00_7691)))->BgL_localsz00);
			BgL_loopz00_9027:
				if (NULLP(BgL_fieldsz00_9028))
					{	/* Ast/walk.scm 315 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 315 */
						{	/* Ast/walk.scm 315 */
							obj_t BgL_vz00_9029;
							obj_t BgL_bz00_9030;

							BgL_vz00_9029 = CAR(((obj_t) BgL_fieldsz00_9028));
							{	/* Ast/walk.scm 315 */
								obj_t BgL_arg3429z00_9031;

								BgL_arg3429z00_9031 =
									(((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt)
												(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																CAR(
																	((obj_t) BgL_fieldsz00_9028)))))->
													BgL_valuez00))))->BgL_bodyz00);
								BgL_bz00_9030 =
									PROCEDURE_ENTRY(BgL_pz00_7692) (BgL_pz00_7692,
									BgL_arg3429z00_9031, BEOA);
							}
							{	/* Ast/walk.scm 317 */
								BgL_valuez00_bglt BgL_arg3428z00_9032;

								BgL_arg3428z00_9032 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_vz00_9029)))->BgL_valuez00);
								((((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_arg3428z00_9032)))->
										BgL_bodyz00) = ((obj_t) BgL_bz00_9030), BUNSPEC);
							}
						}
						{	/* Ast/walk.scm 315 */
							obj_t BgL_arg3432z00_9033;

							BgL_arg3432z00_9033 = CDR(((obj_t) BgL_fieldsz00_9028));
							{
								obj_t BgL_fieldsz00_11650;

								BgL_fieldsz00_11650 = BgL_arg3432z00_9033;
								BgL_fieldsz00_9028 = BgL_fieldsz00_11650;
								goto BgL_loopz00_9027;
							}
						}
					}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_11653;

				{	/* Ast/walk.scm 315 */
					BgL_nodez00_bglt BgL_arg3433z00_9034;

					BgL_arg3433z00_9034 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nz00_7691)))->BgL_bodyz00);
					BgL_auxz00_11653 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7692) (BgL_pz00_7692,
							((obj_t) BgL_arg3433z00_9034), BEOA));
				}
				((((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nz00_7691)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_11653), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt) BgL_nz00_7691));
		}

	}



/* &walk3*-let-fun2132 */
	obj_t BGl_z62walk3za2zd2letzd2fun2132zc0zzast_walkz00(obj_t BgL_envz00_7693,
		obj_t BgL_nz00_7694, obj_t BgL_pz00_7695, obj_t BgL_arg0z00_7696,
		obj_t BgL_arg1z00_7697, obj_t BgL_arg2z00_7698)
	{
		{	/* Ast/walk.scm 315 */
			{	/* Ast/walk.scm 315 */
				obj_t BgL_res4204z00_9039;

				{	/* Ast/walk.scm 315 */
					obj_t BgL_arg3413z00_9036;
					obj_t BgL_arg3414z00_9037;

					BgL_arg3413z00_9036 =
						BGl_zc3z04anonymousza33415ze3ze70z60zzast_walkz00(BgL_arg2z00_7698,
						BgL_arg1z00_7697, BgL_arg0z00_7696, BgL_pz00_7695,
						(((BgL_letzd2funzd2_bglt) COBJECT(((BgL_letzd2funzd2_bglt)
										BgL_nz00_7694)))->BgL_localsz00));
					{	/* Ast/walk.scm 315 */
						BgL_nodez00_bglt BgL_arg3424z00_9038;

						BgL_arg3424z00_9038 =
							(((BgL_letzd2funzd2_bglt) COBJECT(
									((BgL_letzd2funzd2_bglt) BgL_nz00_7694)))->BgL_bodyz00);
						BgL_arg3414z00_9037 =
							PROCEDURE_ENTRY(BgL_pz00_7695) (BgL_pz00_7695,
							((obj_t) BgL_arg3424z00_9038), BgL_arg0z00_7696, BgL_arg1z00_7697,
							BgL_arg2z00_7698, BEOA);
					}
					BgL_res4204z00_9039 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg3413z00_9036,
						BgL_arg3414z00_9037);
				}
				return BgL_res4204z00_9039;
			}
		}

	}



/* <@anonymous:3415>~0 */
	obj_t BGl_zc3z04anonymousza33415ze3ze70z60zzast_walkz00(obj_t
		BgL_arg2z00_8814, obj_t BgL_arg1z00_8813, obj_t BgL_arg0z00_8812,
		obj_t BgL_pz00_8811, obj_t BgL_l1600z00_5393)
	{
		{	/* Ast/walk.scm 315 */
			if (NULLP(BgL_l1600z00_5393))
				{	/* Ast/walk.scm 315 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 315 */
					obj_t BgL_arg3417z00_5396;
					obj_t BgL_arg3419z00_5397;

					{	/* Ast/walk.scm 315 */
						obj_t BgL_fz00_5398;

						BgL_fz00_5398 = CAR(((obj_t) BgL_l1600z00_5393));
						{	/* Ast/walk.scm 316 */
							obj_t BgL_arg3420z00_5399;

							BgL_arg3420z00_5399 =
								(((BgL_sfunz00_bglt) COBJECT(
										((BgL_sfunz00_bglt)
											(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_fz00_5398)))->
												BgL_valuez00))))->BgL_bodyz00);
							BgL_arg3417z00_5396 =
								PROCEDURE_ENTRY(BgL_pz00_8811) (BgL_pz00_8811,
								BgL_arg3420z00_5399, BgL_arg0z00_8812, BgL_arg1z00_8813,
								BgL_arg2z00_8814, BEOA);
						}
					}
					{	/* Ast/walk.scm 315 */
						obj_t BgL_arg3423z00_5402;

						BgL_arg3423z00_5402 = CDR(((obj_t) BgL_l1600z00_5393));
						BgL_arg3419z00_5397 =
							BGl_zc3z04anonymousza33415ze3ze70z60zzast_walkz00
							(BgL_arg2z00_8814, BgL_arg1z00_8813, BgL_arg0z00_8812,
							BgL_pz00_8811, BgL_arg3423z00_5402);
					}
					return bgl_append2(BgL_arg3417z00_5396, BgL_arg3419z00_5397);
				}
		}

	}



/* &walk2*-let-fun2130 */
	obj_t BGl_z62walk2za2zd2letzd2fun2130zc0zzast_walkz00(obj_t BgL_envz00_7699,
		obj_t BgL_nz00_7700, obj_t BgL_pz00_7701, obj_t BgL_arg0z00_7702,
		obj_t BgL_arg1z00_7703)
	{
		{	/* Ast/walk.scm 315 */
			{	/* Ast/walk.scm 315 */
				obj_t BgL_res4205z00_9044;

				{	/* Ast/walk.scm 315 */
					obj_t BgL_arg3400z00_9041;
					obj_t BgL_arg3402z00_9042;

					BgL_arg3400z00_9041 =
						BGl_zc3z04anonymousza33403ze3ze70z60zzast_walkz00(BgL_arg1z00_7703,
						BgL_arg0z00_7702, BgL_pz00_7701,
						(((BgL_letzd2funzd2_bglt) COBJECT(((BgL_letzd2funzd2_bglt)
										BgL_nz00_7700)))->BgL_localsz00));
					{	/* Ast/walk.scm 315 */
						BgL_nodez00_bglt BgL_arg3411z00_9043;

						BgL_arg3411z00_9043 =
							(((BgL_letzd2funzd2_bglt) COBJECT(
									((BgL_letzd2funzd2_bglt) BgL_nz00_7700)))->BgL_bodyz00);
						BgL_arg3402z00_9042 =
							PROCEDURE_ENTRY(BgL_pz00_7701) (BgL_pz00_7701,
							((obj_t) BgL_arg3411z00_9043), BgL_arg0z00_7702, BgL_arg1z00_7703,
							BEOA);
					}
					BgL_res4205z00_9044 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg3400z00_9041,
						BgL_arg3402z00_9042);
				}
				return BgL_res4205z00_9044;
			}
		}

	}



/* <@anonymous:3403>~0 */
	obj_t BGl_zc3z04anonymousza33403ze3ze70z60zzast_walkz00(obj_t
		BgL_arg1z00_8810, obj_t BgL_arg0z00_8809, obj_t BgL_pz00_8808,
		obj_t BgL_l1597z00_5368)
	{
		{	/* Ast/walk.scm 315 */
			if (NULLP(BgL_l1597z00_5368))
				{	/* Ast/walk.scm 315 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 315 */
					obj_t BgL_arg3405z00_5371;
					obj_t BgL_arg3407z00_5372;

					{	/* Ast/walk.scm 315 */
						obj_t BgL_fz00_5373;

						BgL_fz00_5373 = CAR(((obj_t) BgL_l1597z00_5368));
						{	/* Ast/walk.scm 316 */
							obj_t BgL_arg3408z00_5374;

							BgL_arg3408z00_5374 =
								(((BgL_sfunz00_bglt) COBJECT(
										((BgL_sfunz00_bglt)
											(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_fz00_5373)))->
												BgL_valuez00))))->BgL_bodyz00);
							BgL_arg3405z00_5371 =
								PROCEDURE_ENTRY(BgL_pz00_8808) (BgL_pz00_8808,
								BgL_arg3408z00_5374, BgL_arg0z00_8809, BgL_arg1z00_8810, BEOA);
						}
					}
					{	/* Ast/walk.scm 315 */
						obj_t BgL_arg3410z00_5377;

						BgL_arg3410z00_5377 = CDR(((obj_t) BgL_l1597z00_5368));
						BgL_arg3407z00_5372 =
							BGl_zc3z04anonymousza33403ze3ze70z60zzast_walkz00
							(BgL_arg1z00_8810, BgL_arg0z00_8809, BgL_pz00_8808,
							BgL_arg3410z00_5377);
					}
					return bgl_append2(BgL_arg3405z00_5371, BgL_arg3407z00_5372);
				}
		}

	}



/* &walk1*-let-fun2128 */
	obj_t BGl_z62walk1za2zd2letzd2fun2128zc0zzast_walkz00(obj_t BgL_envz00_7704,
		obj_t BgL_nz00_7705, obj_t BgL_pz00_7706, obj_t BgL_arg0z00_7707)
	{
		{	/* Ast/walk.scm 315 */
			{	/* Ast/walk.scm 315 */
				obj_t BgL_res4206z00_9049;

				{	/* Ast/walk.scm 315 */
					obj_t BgL_arg3385z00_9046;
					obj_t BgL_arg3387z00_9047;

					BgL_arg3385z00_9046 =
						BGl_zc3z04anonymousza33388ze3ze70z60zzast_walkz00(BgL_arg0z00_7707,
						BgL_pz00_7706,
						(((BgL_letzd2funzd2_bglt) COBJECT(((BgL_letzd2funzd2_bglt)
										BgL_nz00_7705)))->BgL_localsz00));
					{	/* Ast/walk.scm 315 */
						BgL_nodez00_bglt BgL_arg3399z00_9048;

						BgL_arg3399z00_9048 =
							(((BgL_letzd2funzd2_bglt) COBJECT(
									((BgL_letzd2funzd2_bglt) BgL_nz00_7705)))->BgL_bodyz00);
						BgL_arg3387z00_9047 =
							PROCEDURE_ENTRY(BgL_pz00_7706) (BgL_pz00_7706,
							((obj_t) BgL_arg3399z00_9048), BgL_arg0z00_7707, BEOA);
					}
					BgL_res4206z00_9049 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg3385z00_9046,
						BgL_arg3387z00_9047);
				}
				return BgL_res4206z00_9049;
			}
		}

	}



/* <@anonymous:3388>~0 */
	obj_t BGl_zc3z04anonymousza33388ze3ze70z60zzast_walkz00(obj_t
		BgL_arg0z00_8807, obj_t BgL_pz00_8806, obj_t BgL_l1594z00_5344)
	{
		{	/* Ast/walk.scm 315 */
			if (NULLP(BgL_l1594z00_5344))
				{	/* Ast/walk.scm 315 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 315 */
					obj_t BgL_arg3390z00_5347;
					obj_t BgL_arg3393z00_5348;

					{	/* Ast/walk.scm 315 */
						obj_t BgL_fz00_5349;

						BgL_fz00_5349 = CAR(((obj_t) BgL_l1594z00_5344));
						{	/* Ast/walk.scm 316 */
							obj_t BgL_arg3395z00_5350;

							BgL_arg3395z00_5350 =
								(((BgL_sfunz00_bglt) COBJECT(
										((BgL_sfunz00_bglt)
											(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_fz00_5349)))->
												BgL_valuez00))))->BgL_bodyz00);
							BgL_arg3390z00_5347 =
								PROCEDURE_ENTRY(BgL_pz00_8806) (BgL_pz00_8806,
								BgL_arg3395z00_5350, BgL_arg0z00_8807, BEOA);
						}
					}
					{	/* Ast/walk.scm 315 */
						obj_t BgL_arg3398z00_5353;

						BgL_arg3398z00_5353 = CDR(((obj_t) BgL_l1594z00_5344));
						BgL_arg3393z00_5348 =
							BGl_zc3z04anonymousza33388ze3ze70z60zzast_walkz00
							(BgL_arg0z00_8807, BgL_pz00_8806, BgL_arg3398z00_5353);
					}
					return bgl_append2(BgL_arg3390z00_5347, BgL_arg3393z00_5348);
				}
		}

	}



/* &walk0*-let-fun2126 */
	obj_t BGl_z62walk0za2zd2letzd2fun2126zc0zzast_walkz00(obj_t BgL_envz00_7708,
		obj_t BgL_nz00_7709, obj_t BgL_pz00_7710)
	{
		{	/* Ast/walk.scm 315 */
			{	/* Ast/walk.scm 315 */
				obj_t BgL_res4207z00_9054;

				{	/* Ast/walk.scm 315 */
					obj_t BgL_arg3365z00_9051;
					obj_t BgL_arg3366z00_9052;

					BgL_arg3365z00_9051 =
						BGl_zc3z04anonymousza33367ze3ze70z60zzast_walkz00(BgL_pz00_7710,
						(((BgL_letzd2funzd2_bglt) COBJECT(
									((BgL_letzd2funzd2_bglt) BgL_nz00_7709)))->BgL_localsz00));
					{	/* Ast/walk.scm 315 */
						BgL_nodez00_bglt BgL_arg3384z00_9053;

						BgL_arg3384z00_9053 =
							(((BgL_letzd2funzd2_bglt) COBJECT(
									((BgL_letzd2funzd2_bglt) BgL_nz00_7709)))->BgL_bodyz00);
						BgL_arg3366z00_9052 =
							PROCEDURE_ENTRY(BgL_pz00_7710) (BgL_pz00_7710,
							((obj_t) BgL_arg3384z00_9053), BEOA);
					}
					BgL_res4207z00_9054 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg3365z00_9051,
						BgL_arg3366z00_9052);
				}
				return BgL_res4207z00_9054;
			}
		}

	}



/* <@anonymous:3367>~0 */
	obj_t BGl_zc3z04anonymousza33367ze3ze70z60zzast_walkz00(obj_t BgL_pz00_8805,
		obj_t BgL_l1591z00_5321)
	{
		{	/* Ast/walk.scm 315 */
			if (NULLP(BgL_l1591z00_5321))
				{	/* Ast/walk.scm 315 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 315 */
					obj_t BgL_arg3370z00_5324;
					obj_t BgL_arg3378z00_5325;

					{	/* Ast/walk.scm 315 */
						obj_t BgL_fz00_5326;

						BgL_fz00_5326 = CAR(((obj_t) BgL_l1591z00_5321));
						{	/* Ast/walk.scm 316 */
							obj_t BgL_arg3379z00_5327;

							BgL_arg3379z00_5327 =
								(((BgL_sfunz00_bglt) COBJECT(
										((BgL_sfunz00_bglt)
											(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_fz00_5326)))->
												BgL_valuez00))))->BgL_bodyz00);
							BgL_arg3370z00_5324 =
								PROCEDURE_ENTRY(BgL_pz00_8805) (BgL_pz00_8805,
								BgL_arg3379z00_5327, BEOA);
						}
					}
					{	/* Ast/walk.scm 315 */
						obj_t BgL_arg3382z00_5330;

						BgL_arg3382z00_5330 = CDR(((obj_t) BgL_l1591z00_5321));
						BgL_arg3378z00_5325 =
							BGl_zc3z04anonymousza33367ze3ze70z60zzast_walkz00(BgL_pz00_8805,
							BgL_arg3382z00_5330);
					}
					return bgl_append2(BgL_arg3370z00_5324, BgL_arg3378z00_5325);
				}
		}

	}



/* &walk3-let-fun2124 */
	obj_t BGl_z62walk3zd2letzd2fun2124z62zzast_walkz00(obj_t BgL_envz00_7711,
		obj_t BgL_nz00_7712, obj_t BgL_pz00_7713, obj_t BgL_arg0z00_7714,
		obj_t BgL_arg1z00_7715, obj_t BgL_arg2z00_7716)
	{
		{	/* Ast/walk.scm 315 */
			{	/* Ast/walk.scm 315 */
				obj_t BgL_g1589z00_9056;

				BgL_g1589z00_9056 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nz00_7712)))->BgL_localsz00);
				{
					obj_t BgL_l1587z00_9058;

					BgL_l1587z00_9058 = BgL_g1589z00_9056;
				BgL_zc3z04anonymousza33358ze3z87_9057:
					if (PAIRP(BgL_l1587z00_9058))
						{	/* Ast/walk.scm 315 */
							{	/* Ast/walk.scm 315 */
								obj_t BgL_fz00_9059;

								BgL_fz00_9059 = CAR(BgL_l1587z00_9058);
								{	/* Ast/walk.scm 316 */
									obj_t BgL_arg3361z00_9060;

									BgL_arg3361z00_9060 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt)
													(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt) BgL_fz00_9059)))->
														BgL_valuez00))))->BgL_bodyz00);
									PROCEDURE_ENTRY(BgL_pz00_7713) (BgL_pz00_7713,
										BgL_arg3361z00_9060, BgL_arg0z00_7714, BgL_arg1z00_7715,
										BgL_arg2z00_7716, BEOA);
								}
							}
							{
								obj_t BgL_l1587z00_11802;

								BgL_l1587z00_11802 = CDR(BgL_l1587z00_9058);
								BgL_l1587z00_9058 = BgL_l1587z00_11802;
								goto BgL_zc3z04anonymousza33358ze3z87_9057;
							}
						}
					else
						{	/* Ast/walk.scm 315 */
							((bool_t) 1);
						}
				}
			}
			{	/* Ast/walk.scm 315 */
				BgL_nodez00_bglt BgL_arg3364z00_9061;

				BgL_arg3364z00_9061 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nz00_7712)))->BgL_bodyz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_7713) (BgL_pz00_7713,
					((obj_t) BgL_arg3364z00_9061), BgL_arg0z00_7714, BgL_arg1z00_7715,
					BgL_arg2z00_7716, BEOA);
			}
		}

	}



/* &walk2-let-fun2122 */
	obj_t BGl_z62walk2zd2letzd2fun2122z62zzast_walkz00(obj_t BgL_envz00_7717,
		obj_t BgL_nz00_7718, obj_t BgL_pz00_7719, obj_t BgL_arg0z00_7720,
		obj_t BgL_arg1z00_7721)
	{
		{	/* Ast/walk.scm 315 */
			{	/* Ast/walk.scm 315 */
				obj_t BgL_g1586z00_9063;

				BgL_g1586z00_9063 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nz00_7718)))->BgL_localsz00);
				{
					obj_t BgL_l1584z00_9065;

					BgL_l1584z00_9065 = BgL_g1586z00_9063;
				BgL_zc3z04anonymousza33347ze3z87_9064:
					if (PAIRP(BgL_l1584z00_9065))
						{	/* Ast/walk.scm 315 */
							{	/* Ast/walk.scm 315 */
								obj_t BgL_fz00_9066;

								BgL_fz00_9066 = CAR(BgL_l1584z00_9065);
								{	/* Ast/walk.scm 316 */
									obj_t BgL_arg3353z00_9067;

									BgL_arg3353z00_9067 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt)
													(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt) BgL_fz00_9066)))->
														BgL_valuez00))))->BgL_bodyz00);
									PROCEDURE_ENTRY(BgL_pz00_7719) (BgL_pz00_7719,
										BgL_arg3353z00_9067, BgL_arg0z00_7720, BgL_arg1z00_7721,
										BEOA);
								}
							}
							{
								obj_t BgL_l1584z00_11829;

								BgL_l1584z00_11829 = CDR(BgL_l1584z00_9065);
								BgL_l1584z00_9065 = BgL_l1584z00_11829;
								goto BgL_zc3z04anonymousza33347ze3z87_9064;
							}
						}
					else
						{	/* Ast/walk.scm 315 */
							((bool_t) 1);
						}
				}
			}
			{	/* Ast/walk.scm 315 */
				BgL_nodez00_bglt BgL_arg3357z00_9068;

				BgL_arg3357z00_9068 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nz00_7718)))->BgL_bodyz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_7719) (BgL_pz00_7719,
					((obj_t) BgL_arg3357z00_9068), BgL_arg0z00_7720, BgL_arg1z00_7721,
					BEOA);
			}
		}

	}



/* &walk1-let-fun2120 */
	obj_t BGl_z62walk1zd2letzd2fun2120z62zzast_walkz00(obj_t BgL_envz00_7722,
		obj_t BgL_nz00_7723, obj_t BgL_pz00_7724, obj_t BgL_arg0z00_7725)
	{
		{	/* Ast/walk.scm 315 */
			{	/* Ast/walk.scm 315 */
				obj_t BgL_g1583z00_9070;

				BgL_g1583z00_9070 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nz00_7723)))->BgL_localsz00);
				{
					obj_t BgL_l1581z00_9072;

					BgL_l1581z00_9072 = BgL_g1583z00_9070;
				BgL_zc3z04anonymousza33341ze3z87_9071:
					if (PAIRP(BgL_l1581z00_9072))
						{	/* Ast/walk.scm 315 */
							{	/* Ast/walk.scm 315 */
								obj_t BgL_fz00_9073;

								BgL_fz00_9073 = CAR(BgL_l1581z00_9072);
								{	/* Ast/walk.scm 316 */
									obj_t BgL_arg3343z00_9074;

									BgL_arg3343z00_9074 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt)
													(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt) BgL_fz00_9073)))->
														BgL_valuez00))))->BgL_bodyz00);
									PROCEDURE_ENTRY(BgL_pz00_7724) (BgL_pz00_7724,
										BgL_arg3343z00_9074, BgL_arg0z00_7725, BEOA);
								}
							}
							{
								obj_t BgL_l1581z00_11854;

								BgL_l1581z00_11854 = CDR(BgL_l1581z00_9072);
								BgL_l1581z00_9072 = BgL_l1581z00_11854;
								goto BgL_zc3z04anonymousza33341ze3z87_9071;
							}
						}
					else
						{	/* Ast/walk.scm 315 */
							((bool_t) 1);
						}
				}
			}
			{	/* Ast/walk.scm 315 */
				BgL_nodez00_bglt BgL_arg3346z00_9075;

				BgL_arg3346z00_9075 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nz00_7723)))->BgL_bodyz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_7724) (BgL_pz00_7724,
					((obj_t) BgL_arg3346z00_9075), BgL_arg0z00_7725, BEOA);
			}
		}

	}



/* &walk0-let-fun2118 */
	obj_t BGl_z62walk0zd2letzd2fun2118z62zzast_walkz00(obj_t BgL_envz00_7726,
		obj_t BgL_nz00_7727, obj_t BgL_pz00_7728)
	{
		{	/* Ast/walk.scm 315 */
			{	/* Ast/walk.scm 315 */
				obj_t BgL_g1580z00_9077;

				BgL_g1580z00_9077 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nz00_7727)))->BgL_localsz00);
				{
					obj_t BgL_l1578z00_9079;

					BgL_l1578z00_9079 = BgL_g1580z00_9077;
				BgL_zc3z04anonymousza33333ze3z87_9078:
					if (PAIRP(BgL_l1578z00_9079))
						{	/* Ast/walk.scm 315 */
							{	/* Ast/walk.scm 315 */
								obj_t BgL_fz00_9080;

								BgL_fz00_9080 = CAR(BgL_l1578z00_9079);
								{	/* Ast/walk.scm 316 */
									obj_t BgL_arg3336z00_9081;

									BgL_arg3336z00_9081 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt)
													(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt) BgL_fz00_9080)))->
														BgL_valuez00))))->BgL_bodyz00);
									PROCEDURE_ENTRY(BgL_pz00_7728) (BgL_pz00_7728,
										BgL_arg3336z00_9081, BEOA);
								}
							}
							{
								obj_t BgL_l1578z00_11877;

								BgL_l1578z00_11877 = CDR(BgL_l1578z00_9079);
								BgL_l1578z00_9079 = BgL_l1578z00_11877;
								goto BgL_zc3z04anonymousza33333ze3z87_9078;
							}
						}
					else
						{	/* Ast/walk.scm 315 */
							((bool_t) 1);
						}
				}
			}
			{	/* Ast/walk.scm 315 */
				BgL_nodez00_bglt BgL_arg3340z00_9082;

				BgL_arg3340z00_9082 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nz00_7727)))->BgL_bodyz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_7728) (BgL_pz00_7728,
					((obj_t) BgL_arg3340z00_9082), BEOA);
			}
		}

	}



/* &walk3!-switch2116 */
	BgL_nodez00_bglt BGl_z62walk3z12zd2switch2116za2zzast_walkz00(obj_t
		BgL_envz00_7729, obj_t BgL_nz00_7730, obj_t BgL_pz00_7731,
		obj_t BgL_arg0z00_7732, obj_t BgL_arg1z00_7733, obj_t BgL_arg2z00_7734)
	{
		{	/* Ast/walk.scm 312 */
			{
				BgL_nodez00_bglt BgL_auxz00_11886;

				{	/* Ast/walk.scm 312 */
					BgL_nodez00_bglt BgL_arg3322z00_9084;

					BgL_arg3322z00_9084 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nz00_7730)))->BgL_testz00);
					BgL_auxz00_11886 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7731) (BgL_pz00_7731,
							((obj_t) BgL_arg3322z00_9084), BgL_arg0z00_7732, BgL_arg1z00_7733,
							BgL_arg2z00_7734, BEOA));
				}
				((((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nz00_7730)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_11886), BUNSPEC);
			}
			{
				obj_t BgL_fieldsz00_9086;

				BgL_fieldsz00_9086 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nz00_7730)))->BgL_clausesz00);
			BgL_loopz00_9085:
				if (NULLP(BgL_fieldsz00_9086))
					{	/* Ast/walk.scm 312 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 312 */
						{	/* Ast/walk.scm 312 */
							obj_t BgL_arg3328z00_9087;
							obj_t BgL_arg3329z00_9088;

							BgL_arg3328z00_9087 = CAR(((obj_t) BgL_fieldsz00_9086));
							{	/* Ast/walk.scm 312 */
								obj_t BgL_arg3330z00_9089;

								{	/* Ast/walk.scm 312 */
									obj_t BgL_pairz00_9090;

									BgL_pairz00_9090 = CAR(((obj_t) BgL_fieldsz00_9086));
									BgL_arg3330z00_9089 = CDR(BgL_pairz00_9090);
								}
								BgL_arg3329z00_9088 =
									PROCEDURE_ENTRY(BgL_pz00_7731) (BgL_pz00_7731,
									BgL_arg3330z00_9089, BgL_arg0z00_7732, BgL_arg1z00_7733,
									BgL_arg2z00_7734, BEOA);
							}
							{	/* Ast/walk.scm 312 */
								obj_t BgL_tmpz00_11914;

								BgL_tmpz00_11914 = ((obj_t) BgL_arg3328z00_9087);
								SET_CDR(BgL_tmpz00_11914, BgL_arg3329z00_9088);
							}
						}
						{	/* Ast/walk.scm 312 */
							obj_t BgL_arg3332z00_9091;

							BgL_arg3332z00_9091 = CDR(((obj_t) BgL_fieldsz00_9086));
							{
								obj_t BgL_fieldsz00_11919;

								BgL_fieldsz00_11919 = BgL_arg3332z00_9091;
								BgL_fieldsz00_9086 = BgL_fieldsz00_11919;
								goto BgL_loopz00_9085;
							}
						}
					}
			}
			return ((BgL_nodez00_bglt) ((BgL_switchz00_bglt) BgL_nz00_7730));
		}

	}



/* &walk2!-switch2114 */
	BgL_nodez00_bglt BGl_z62walk2z12zd2switch2114za2zzast_walkz00(obj_t
		BgL_envz00_7735, obj_t BgL_nz00_7736, obj_t BgL_pz00_7737,
		obj_t BgL_arg0z00_7738, obj_t BgL_arg1z00_7739)
	{
		{	/* Ast/walk.scm 312 */
			{
				BgL_nodez00_bglt BgL_auxz00_11924;

				{	/* Ast/walk.scm 312 */
					BgL_nodez00_bglt BgL_arg3310z00_9093;

					BgL_arg3310z00_9093 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nz00_7736)))->BgL_testz00);
					BgL_auxz00_11924 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7737) (BgL_pz00_7737,
							((obj_t) BgL_arg3310z00_9093), BgL_arg0z00_7738, BgL_arg1z00_7739,
							BEOA));
				}
				((((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nz00_7736)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_11924), BUNSPEC);
			}
			{
				obj_t BgL_fieldsz00_9095;

				BgL_fieldsz00_9095 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nz00_7736)))->BgL_clausesz00);
			BgL_loopz00_9094:
				if (NULLP(BgL_fieldsz00_9095))
					{	/* Ast/walk.scm 312 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 312 */
						{	/* Ast/walk.scm 312 */
							obj_t BgL_arg3316z00_9096;
							obj_t BgL_arg3317z00_9097;

							BgL_arg3316z00_9096 = CAR(((obj_t) BgL_fieldsz00_9095));
							{	/* Ast/walk.scm 312 */
								obj_t BgL_arg3318z00_9098;

								{	/* Ast/walk.scm 312 */
									obj_t BgL_pairz00_9099;

									BgL_pairz00_9099 = CAR(((obj_t) BgL_fieldsz00_9095));
									BgL_arg3318z00_9098 = CDR(BgL_pairz00_9099);
								}
								BgL_arg3317z00_9097 =
									PROCEDURE_ENTRY(BgL_pz00_7737) (BgL_pz00_7737,
									BgL_arg3318z00_9098, BgL_arg0z00_7738, BgL_arg1z00_7739,
									BEOA);
							}
							{	/* Ast/walk.scm 312 */
								obj_t BgL_tmpz00_11950;

								BgL_tmpz00_11950 = ((obj_t) BgL_arg3316z00_9096);
								SET_CDR(BgL_tmpz00_11950, BgL_arg3317z00_9097);
							}
						}
						{	/* Ast/walk.scm 312 */
							obj_t BgL_arg3320z00_9100;

							BgL_arg3320z00_9100 = CDR(((obj_t) BgL_fieldsz00_9095));
							{
								obj_t BgL_fieldsz00_11955;

								BgL_fieldsz00_11955 = BgL_arg3320z00_9100;
								BgL_fieldsz00_9095 = BgL_fieldsz00_11955;
								goto BgL_loopz00_9094;
							}
						}
					}
			}
			return ((BgL_nodez00_bglt) ((BgL_switchz00_bglt) BgL_nz00_7736));
		}

	}



/* &walk1!-switch2112 */
	BgL_nodez00_bglt BGl_z62walk1z12zd2switch2112za2zzast_walkz00(obj_t
		BgL_envz00_7740, obj_t BgL_nz00_7741, obj_t BgL_pz00_7742,
		obj_t BgL_arg0z00_7743)
	{
		{	/* Ast/walk.scm 312 */
			{
				BgL_nodez00_bglt BgL_auxz00_11960;

				{	/* Ast/walk.scm 312 */
					BgL_nodez00_bglt BgL_arg3285z00_9102;

					BgL_arg3285z00_9102 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nz00_7741)))->BgL_testz00);
					BgL_auxz00_11960 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7742) (BgL_pz00_7742,
							((obj_t) BgL_arg3285z00_9102), BgL_arg0z00_7743, BEOA));
				}
				((((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nz00_7741)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_11960), BUNSPEC);
			}
			{
				obj_t BgL_fieldsz00_9104;

				BgL_fieldsz00_9104 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nz00_7741)))->BgL_clausesz00);
			BgL_loopz00_9103:
				if (NULLP(BgL_fieldsz00_9104))
					{	/* Ast/walk.scm 312 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 312 */
						{	/* Ast/walk.scm 312 */
							obj_t BgL_arg3294z00_9105;
							obj_t BgL_arg3306z00_9106;

							BgL_arg3294z00_9105 = CAR(((obj_t) BgL_fieldsz00_9104));
							{	/* Ast/walk.scm 312 */
								obj_t BgL_arg3307z00_9107;

								{	/* Ast/walk.scm 312 */
									obj_t BgL_pairz00_9108;

									BgL_pairz00_9108 = CAR(((obj_t) BgL_fieldsz00_9104));
									BgL_arg3307z00_9107 = CDR(BgL_pairz00_9108);
								}
								BgL_arg3306z00_9106 =
									PROCEDURE_ENTRY(BgL_pz00_7742) (BgL_pz00_7742,
									BgL_arg3307z00_9107, BgL_arg0z00_7743, BEOA);
							}
							{	/* Ast/walk.scm 312 */
								obj_t BgL_tmpz00_11984;

								BgL_tmpz00_11984 = ((obj_t) BgL_arg3294z00_9105);
								SET_CDR(BgL_tmpz00_11984, BgL_arg3306z00_9106);
							}
						}
						{	/* Ast/walk.scm 312 */
							obj_t BgL_arg3309z00_9109;

							BgL_arg3309z00_9109 = CDR(((obj_t) BgL_fieldsz00_9104));
							{
								obj_t BgL_fieldsz00_11989;

								BgL_fieldsz00_11989 = BgL_arg3309z00_9109;
								BgL_fieldsz00_9104 = BgL_fieldsz00_11989;
								goto BgL_loopz00_9103;
							}
						}
					}
			}
			return ((BgL_nodez00_bglt) ((BgL_switchz00_bglt) BgL_nz00_7741));
		}

	}



/* &walk0!-switch2110 */
	BgL_nodez00_bglt BGl_z62walk0z12zd2switch2110za2zzast_walkz00(obj_t
		BgL_envz00_7744, obj_t BgL_nz00_7745, obj_t BgL_pz00_7746)
	{
		{	/* Ast/walk.scm 312 */
			{
				BgL_nodez00_bglt BgL_auxz00_11994;

				{	/* Ast/walk.scm 312 */
					BgL_nodez00_bglt BgL_arg3270z00_9111;

					BgL_arg3270z00_9111 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nz00_7745)))->BgL_testz00);
					BgL_auxz00_11994 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7746) (BgL_pz00_7746,
							((obj_t) BgL_arg3270z00_9111), BEOA));
				}
				((((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nz00_7745)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_11994), BUNSPEC);
			}
			{
				obj_t BgL_fieldsz00_9113;

				BgL_fieldsz00_9113 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nz00_7745)))->BgL_clausesz00);
			BgL_loopz00_9112:
				if (NULLP(BgL_fieldsz00_9113))
					{	/* Ast/walk.scm 312 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 312 */
						{	/* Ast/walk.scm 312 */
							obj_t BgL_arg3276z00_9114;
							obj_t BgL_arg3277z00_9115;

							BgL_arg3276z00_9114 = CAR(((obj_t) BgL_fieldsz00_9113));
							{	/* Ast/walk.scm 312 */
								obj_t BgL_arg3280z00_9116;

								{	/* Ast/walk.scm 312 */
									obj_t BgL_pairz00_9117;

									BgL_pairz00_9117 = CAR(((obj_t) BgL_fieldsz00_9113));
									BgL_arg3280z00_9116 = CDR(BgL_pairz00_9117);
								}
								BgL_arg3277z00_9115 =
									PROCEDURE_ENTRY(BgL_pz00_7746) (BgL_pz00_7746,
									BgL_arg3280z00_9116, BEOA);
							}
							{	/* Ast/walk.scm 312 */
								obj_t BgL_tmpz00_12016;

								BgL_tmpz00_12016 = ((obj_t) BgL_arg3276z00_9114);
								SET_CDR(BgL_tmpz00_12016, BgL_arg3277z00_9115);
							}
						}
						{	/* Ast/walk.scm 312 */
							obj_t BgL_arg3284z00_9118;

							BgL_arg3284z00_9118 = CDR(((obj_t) BgL_fieldsz00_9113));
							{
								obj_t BgL_fieldsz00_12021;

								BgL_fieldsz00_12021 = BgL_arg3284z00_9118;
								BgL_fieldsz00_9113 = BgL_fieldsz00_12021;
								goto BgL_loopz00_9112;
							}
						}
					}
			}
			return ((BgL_nodez00_bglt) ((BgL_switchz00_bglt) BgL_nz00_7745));
		}

	}



/* &walk3*-switch2108 */
	obj_t BGl_z62walk3za2zd2switch2108z12zzast_walkz00(obj_t BgL_envz00_7747,
		obj_t BgL_nz00_7748, obj_t BgL_pz00_7749, obj_t BgL_arg0z00_7750,
		obj_t BgL_arg1z00_7751, obj_t BgL_arg2z00_7752)
	{
		{	/* Ast/walk.scm 312 */
			{	/* Ast/walk.scm 312 */
				obj_t BgL_res4208z00_9123;

				{	/* Ast/walk.scm 312 */
					obj_t BgL_arg3260z00_9120;
					obj_t BgL_arg3261z00_9121;

					{	/* Ast/walk.scm 312 */
						BgL_nodez00_bglt BgL_arg3262z00_9122;

						BgL_arg3262z00_9122 =
							(((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt) BgL_nz00_7748)))->BgL_testz00);
						BgL_arg3260z00_9120 =
							PROCEDURE_ENTRY(BgL_pz00_7749) (BgL_pz00_7749,
							((obj_t) BgL_arg3262z00_9122), BgL_arg0z00_7750, BgL_arg1z00_7751,
							BgL_arg2z00_7752, BEOA);
					}
					BgL_arg3261z00_9121 =
						BGl_zc3z04anonymousza33263ze3ze70z60zzast_walkz00(BgL_arg2z00_7752,
						BgL_arg1z00_7751, BgL_arg0z00_7750, BgL_pz00_7749,
						(((BgL_switchz00_bglt) COBJECT(((BgL_switchz00_bglt)
										BgL_nz00_7748)))->BgL_clausesz00));
					BgL_res4208z00_9123 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg3260z00_9120,
						BgL_arg3261z00_9121);
				}
				return BgL_res4208z00_9123;
			}
		}

	}



/* <@anonymous:3263>~0 */
	obj_t BGl_zc3z04anonymousza33263ze3ze70z60zzast_walkz00(obj_t
		BgL_arg2z00_8804, obj_t BgL_arg1z00_8803, obj_t BgL_arg0z00_8802,
		obj_t BgL_pz00_8801, obj_t BgL_l1576z00_5146)
	{
		{	/* Ast/walk.scm 312 */
			if (NULLP(BgL_l1576z00_5146))
				{	/* Ast/walk.scm 312 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 312 */
					obj_t BgL_arg3266z00_5149;
					obj_t BgL_arg3267z00_5150;

					{	/* Ast/walk.scm 312 */
						obj_t BgL_fz00_5151;

						BgL_fz00_5151 = CAR(((obj_t) BgL_l1576z00_5146));
						{	/* Ast/walk.scm 312 */
							obj_t BgL_arg3268z00_5152;

							BgL_arg3268z00_5152 = CDR(((obj_t) BgL_fz00_5151));
							BgL_arg3266z00_5149 =
								PROCEDURE_ENTRY(BgL_pz00_8801) (BgL_pz00_8801,
								BgL_arg3268z00_5152, BgL_arg0z00_8802, BgL_arg1z00_8803,
								BgL_arg2z00_8804, BEOA);
						}
					}
					{	/* Ast/walk.scm 312 */
						obj_t BgL_arg3269z00_5153;

						BgL_arg3269z00_5153 = CDR(((obj_t) BgL_l1576z00_5146));
						BgL_arg3267z00_5150 =
							BGl_zc3z04anonymousza33263ze3ze70z60zzast_walkz00
							(BgL_arg2z00_8804, BgL_arg1z00_8803, BgL_arg0z00_8802,
							BgL_pz00_8801, BgL_arg3269z00_5153);
					}
					return bgl_append2(BgL_arg3266z00_5149, BgL_arg3267z00_5150);
				}
		}

	}



/* &walk2*-switch2106 */
	obj_t BGl_z62walk2za2zd2switch2106z12zzast_walkz00(obj_t BgL_envz00_7753,
		obj_t BgL_nz00_7754, obj_t BgL_pz00_7755, obj_t BgL_arg0z00_7756,
		obj_t BgL_arg1z00_7757)
	{
		{	/* Ast/walk.scm 312 */
			{	/* Ast/walk.scm 312 */
				obj_t BgL_res4209z00_9128;

				{	/* Ast/walk.scm 312 */
					obj_t BgL_arg3247z00_9125;
					obj_t BgL_arg3248z00_9126;

					{	/* Ast/walk.scm 312 */
						BgL_nodez00_bglt BgL_arg3251z00_9127;

						BgL_arg3251z00_9127 =
							(((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt) BgL_nz00_7754)))->BgL_testz00);
						BgL_arg3247z00_9125 =
							PROCEDURE_ENTRY(BgL_pz00_7755) (BgL_pz00_7755,
							((obj_t) BgL_arg3251z00_9127), BgL_arg0z00_7756, BgL_arg1z00_7757,
							BEOA);
					}
					BgL_arg3248z00_9126 =
						BGl_zc3z04anonymousza33252ze3ze70z60zzast_walkz00(BgL_arg1z00_7757,
						BgL_arg0z00_7756, BgL_pz00_7755,
						(((BgL_switchz00_bglt) COBJECT(((BgL_switchz00_bglt)
										BgL_nz00_7754)))->BgL_clausesz00));
					BgL_res4209z00_9128 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg3247z00_9125,
						BgL_arg3248z00_9126);
				}
				return BgL_res4209z00_9128;
			}
		}

	}



/* <@anonymous:3252>~0 */
	obj_t BGl_zc3z04anonymousza33252ze3ze70z60zzast_walkz00(obj_t
		BgL_arg1z00_8800, obj_t BgL_arg0z00_8799, obj_t BgL_pz00_8798,
		obj_t BgL_l1573z00_5123)
	{
		{	/* Ast/walk.scm 312 */
			if (NULLP(BgL_l1573z00_5123))
				{	/* Ast/walk.scm 312 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 312 */
					obj_t BgL_arg3255z00_5126;
					obj_t BgL_arg3257z00_5127;

					{	/* Ast/walk.scm 312 */
						obj_t BgL_fz00_5128;

						BgL_fz00_5128 = CAR(((obj_t) BgL_l1573z00_5123));
						{	/* Ast/walk.scm 312 */
							obj_t BgL_arg3258z00_5129;

							BgL_arg3258z00_5129 = CDR(((obj_t) BgL_fz00_5128));
							BgL_arg3255z00_5126 =
								PROCEDURE_ENTRY(BgL_pz00_8798) (BgL_pz00_8798,
								BgL_arg3258z00_5129, BgL_arg0z00_8799, BgL_arg1z00_8800, BEOA);
						}
					}
					{	/* Ast/walk.scm 312 */
						obj_t BgL_arg3259z00_5130;

						BgL_arg3259z00_5130 = CDR(((obj_t) BgL_l1573z00_5123));
						BgL_arg3257z00_5127 =
							BGl_zc3z04anonymousza33252ze3ze70z60zzast_walkz00
							(BgL_arg1z00_8800, BgL_arg0z00_8799, BgL_pz00_8798,
							BgL_arg3259z00_5130);
					}
					return bgl_append2(BgL_arg3255z00_5126, BgL_arg3257z00_5127);
				}
		}

	}



/* &walk1*-switch2104 */
	obj_t BGl_z62walk1za2zd2switch2104z12zzast_walkz00(obj_t BgL_envz00_7758,
		obj_t BgL_nz00_7759, obj_t BgL_pz00_7760, obj_t BgL_arg0z00_7761)
	{
		{	/* Ast/walk.scm 312 */
			{	/* Ast/walk.scm 312 */
				obj_t BgL_res4210z00_9133;

				{	/* Ast/walk.scm 312 */
					obj_t BgL_arg3231z00_9130;
					obj_t BgL_arg3233z00_9131;

					{	/* Ast/walk.scm 312 */
						BgL_nodez00_bglt BgL_arg3234z00_9132;

						BgL_arg3234z00_9132 =
							(((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt) BgL_nz00_7759)))->BgL_testz00);
						BgL_arg3231z00_9130 =
							PROCEDURE_ENTRY(BgL_pz00_7760) (BgL_pz00_7760,
							((obj_t) BgL_arg3234z00_9132), BgL_arg0z00_7761, BEOA);
					}
					BgL_arg3233z00_9131 =
						BGl_zc3z04anonymousza33235ze3ze70z60zzast_walkz00(BgL_arg0z00_7761,
						BgL_pz00_7760,
						(((BgL_switchz00_bglt) COBJECT(((BgL_switchz00_bglt)
										BgL_nz00_7759)))->BgL_clausesz00));
					BgL_res4210z00_9133 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg3231z00_9130,
						BgL_arg3233z00_9131);
				}
				return BgL_res4210z00_9133;
			}
		}

	}



/* <@anonymous:3235>~0 */
	obj_t BGl_zc3z04anonymousza33235ze3ze70z60zzast_walkz00(obj_t
		BgL_arg0z00_8797, obj_t BgL_pz00_8796, obj_t BgL_l1570z00_5101)
	{
		{	/* Ast/walk.scm 312 */
			if (NULLP(BgL_l1570z00_5101))
				{	/* Ast/walk.scm 312 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 312 */
					obj_t BgL_arg3239z00_5104;
					obj_t BgL_arg3240z00_5105;

					{	/* Ast/walk.scm 312 */
						obj_t BgL_fz00_5106;

						BgL_fz00_5106 = CAR(((obj_t) BgL_l1570z00_5101));
						{	/* Ast/walk.scm 312 */
							obj_t BgL_arg3243z00_5107;

							BgL_arg3243z00_5107 = CDR(((obj_t) BgL_fz00_5106));
							BgL_arg3239z00_5104 =
								PROCEDURE_ENTRY(BgL_pz00_8796) (BgL_pz00_8796,
								BgL_arg3243z00_5107, BgL_arg0z00_8797, BEOA);
						}
					}
					{	/* Ast/walk.scm 312 */
						obj_t BgL_arg3244z00_5108;

						BgL_arg3244z00_5108 = CDR(((obj_t) BgL_l1570z00_5101));
						BgL_arg3240z00_5105 =
							BGl_zc3z04anonymousza33235ze3ze70z60zzast_walkz00
							(BgL_arg0z00_8797, BgL_pz00_8796, BgL_arg3244z00_5108);
					}
					return bgl_append2(BgL_arg3239z00_5104, BgL_arg3240z00_5105);
				}
		}

	}



/* &walk0*-switch2102 */
	obj_t BGl_z62walk0za2zd2switch2102z12zzast_walkz00(obj_t BgL_envz00_7762,
		obj_t BgL_nz00_7763, obj_t BgL_pz00_7764)
	{
		{	/* Ast/walk.scm 312 */
			{	/* Ast/walk.scm 312 */
				obj_t BgL_res4211z00_9138;

				{	/* Ast/walk.scm 312 */
					obj_t BgL_arg3219z00_9135;
					obj_t BgL_arg3222z00_9136;

					{	/* Ast/walk.scm 312 */
						BgL_nodez00_bglt BgL_arg3223z00_9137;

						BgL_arg3223z00_9137 =
							(((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt) BgL_nz00_7763)))->BgL_testz00);
						BgL_arg3219z00_9135 =
							PROCEDURE_ENTRY(BgL_pz00_7764) (BgL_pz00_7764,
							((obj_t) BgL_arg3223z00_9137), BEOA);
					}
					BgL_arg3222z00_9136 =
						BGl_zc3z04anonymousza33224ze3ze70z60zzast_walkz00(BgL_pz00_7764,
						(((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt) BgL_nz00_7763)))->BgL_clausesz00));
					BgL_res4211z00_9138 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg3219z00_9135,
						BgL_arg3222z00_9136);
				}
				return BgL_res4211z00_9138;
			}
		}

	}



/* <@anonymous:3224>~0 */
	obj_t BGl_zc3z04anonymousza33224ze3ze70z60zzast_walkz00(obj_t BgL_pz00_8795,
		obj_t BgL_l1567z00_5080)
	{
		{	/* Ast/walk.scm 312 */
			if (NULLP(BgL_l1567z00_5080))
				{	/* Ast/walk.scm 312 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 312 */
					obj_t BgL_arg3226z00_5083;
					obj_t BgL_arg3228z00_5084;

					{	/* Ast/walk.scm 312 */
						obj_t BgL_fz00_5085;

						BgL_fz00_5085 = CAR(((obj_t) BgL_l1567z00_5080));
						{	/* Ast/walk.scm 312 */
							obj_t BgL_arg3229z00_5086;

							BgL_arg3229z00_5086 = CDR(((obj_t) BgL_fz00_5085));
							BgL_arg3226z00_5083 =
								PROCEDURE_ENTRY(BgL_pz00_8795) (BgL_pz00_8795,
								BgL_arg3229z00_5086, BEOA);
						}
					}
					{	/* Ast/walk.scm 312 */
						obj_t BgL_arg3230z00_5087;

						BgL_arg3230z00_5087 = CDR(((obj_t) BgL_l1567z00_5080));
						BgL_arg3228z00_5084 =
							BGl_zc3z04anonymousza33224ze3ze70z60zzast_walkz00(BgL_pz00_8795,
							BgL_arg3230z00_5087);
					}
					return bgl_append2(BgL_arg3226z00_5083, BgL_arg3228z00_5084);
				}
		}

	}



/* &walk3-switch2100 */
	obj_t BGl_z62walk3zd2switch2100zb0zzast_walkz00(obj_t BgL_envz00_7765,
		obj_t BgL_nz00_7766, obj_t BgL_pz00_7767, obj_t BgL_arg0z00_7768,
		obj_t BgL_arg1z00_7769, obj_t BgL_arg2z00_7770)
	{
		{	/* Ast/walk.scm 312 */
			{	/* Ast/walk.scm 312 */
				BgL_nodez00_bglt BgL_arg3212z00_9140;

				BgL_arg3212z00_9140 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nz00_7766)))->BgL_testz00);
				PROCEDURE_ENTRY(BgL_pz00_7767) (BgL_pz00_7767,
					((obj_t) BgL_arg3212z00_9140), BgL_arg0z00_7768, BgL_arg1z00_7769,
					BgL_arg2z00_7770, BEOA);
			}
			{	/* Ast/walk.scm 312 */
				obj_t BgL_g1565z00_9141;

				BgL_g1565z00_9141 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nz00_7766)))->BgL_clausesz00);
				{
					obj_t BgL_l1563z00_9143;

					{	/* Ast/walk.scm 312 */
						bool_t BgL_tmpz00_12150;

						BgL_l1563z00_9143 = BgL_g1565z00_9141;
					BgL_zc3z04anonymousza33213ze3z87_9142:
						if (PAIRP(BgL_l1563z00_9143))
							{	/* Ast/walk.scm 312 */
								{	/* Ast/walk.scm 312 */
									obj_t BgL_fz00_9144;

									BgL_fz00_9144 = CAR(BgL_l1563z00_9143);
									{	/* Ast/walk.scm 312 */
										obj_t BgL_arg3215z00_9145;

										BgL_arg3215z00_9145 = CDR(((obj_t) BgL_fz00_9144));
										PROCEDURE_ENTRY(BgL_pz00_7767) (BgL_pz00_7767,
											BgL_arg3215z00_9145, BgL_arg0z00_7768, BgL_arg1z00_7769,
											BgL_arg2z00_7770, BEOA);
									}
								}
								{
									obj_t BgL_l1563z00_12163;

									BgL_l1563z00_12163 = CDR(BgL_l1563z00_9143);
									BgL_l1563z00_9143 = BgL_l1563z00_12163;
									goto BgL_zc3z04anonymousza33213ze3z87_9142;
								}
							}
						else
							{	/* Ast/walk.scm 312 */
								BgL_tmpz00_12150 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_12150);
					}
				}
			}
		}

	}



/* &walk2-switch2098 */
	obj_t BGl_z62walk2zd2switch2098zb0zzast_walkz00(obj_t BgL_envz00_7771,
		obj_t BgL_nz00_7772, obj_t BgL_pz00_7773, obj_t BgL_arg0z00_7774,
		obj_t BgL_arg1z00_7775)
	{
		{	/* Ast/walk.scm 312 */
			{	/* Ast/walk.scm 312 */
				BgL_nodez00_bglt BgL_arg3207z00_9147;

				BgL_arg3207z00_9147 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nz00_7772)))->BgL_testz00);
				PROCEDURE_ENTRY(BgL_pz00_7773) (BgL_pz00_7773,
					((obj_t) BgL_arg3207z00_9147), BgL_arg0z00_7774, BgL_arg1z00_7775,
					BEOA);
			}
			{	/* Ast/walk.scm 312 */
				obj_t BgL_g1562z00_9148;

				BgL_g1562z00_9148 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nz00_7772)))->BgL_clausesz00);
				{
					obj_t BgL_l1560z00_9150;

					{	/* Ast/walk.scm 312 */
						bool_t BgL_tmpz00_12177;

						BgL_l1560z00_9150 = BgL_g1562z00_9148;
					BgL_zc3z04anonymousza33208ze3z87_9149:
						if (PAIRP(BgL_l1560z00_9150))
							{	/* Ast/walk.scm 312 */
								{	/* Ast/walk.scm 312 */
									obj_t BgL_fz00_9151;

									BgL_fz00_9151 = CAR(BgL_l1560z00_9150);
									{	/* Ast/walk.scm 312 */
										obj_t BgL_arg3210z00_9152;

										BgL_arg3210z00_9152 = CDR(((obj_t) BgL_fz00_9151));
										PROCEDURE_ENTRY(BgL_pz00_7773) (BgL_pz00_7773,
											BgL_arg3210z00_9152, BgL_arg0z00_7774, BgL_arg1z00_7775,
											BEOA);
									}
								}
								{
									obj_t BgL_l1560z00_12189;

									BgL_l1560z00_12189 = CDR(BgL_l1560z00_9150);
									BgL_l1560z00_9150 = BgL_l1560z00_12189;
									goto BgL_zc3z04anonymousza33208ze3z87_9149;
								}
							}
						else
							{	/* Ast/walk.scm 312 */
								BgL_tmpz00_12177 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_12177);
					}
				}
			}
		}

	}



/* &walk1-switch2096 */
	obj_t BGl_z62walk1zd2switch2096zb0zzast_walkz00(obj_t BgL_envz00_7776,
		obj_t BgL_nz00_7777, obj_t BgL_pz00_7778, obj_t BgL_arg0z00_7779)
	{
		{	/* Ast/walk.scm 312 */
			{	/* Ast/walk.scm 312 */
				BgL_nodez00_bglt BgL_arg3201z00_9154;

				BgL_arg3201z00_9154 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nz00_7777)))->BgL_testz00);
				PROCEDURE_ENTRY(BgL_pz00_7778) (BgL_pz00_7778,
					((obj_t) BgL_arg3201z00_9154), BgL_arg0z00_7779, BEOA);
			}
			{	/* Ast/walk.scm 312 */
				obj_t BgL_g1559z00_9155;

				BgL_g1559z00_9155 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nz00_7777)))->BgL_clausesz00);
				{
					obj_t BgL_l1557z00_9157;

					{	/* Ast/walk.scm 312 */
						bool_t BgL_tmpz00_12202;

						BgL_l1557z00_9157 = BgL_g1559z00_9155;
					BgL_zc3z04anonymousza33202ze3z87_9156:
						if (PAIRP(BgL_l1557z00_9157))
							{	/* Ast/walk.scm 312 */
								{	/* Ast/walk.scm 312 */
									obj_t BgL_fz00_9158;

									BgL_fz00_9158 = CAR(BgL_l1557z00_9157);
									{	/* Ast/walk.scm 312 */
										obj_t BgL_arg3204z00_9159;

										BgL_arg3204z00_9159 = CDR(((obj_t) BgL_fz00_9158));
										PROCEDURE_ENTRY(BgL_pz00_7778) (BgL_pz00_7778,
											BgL_arg3204z00_9159, BgL_arg0z00_7779, BEOA);
									}
								}
								{
									obj_t BgL_l1557z00_12213;

									BgL_l1557z00_12213 = CDR(BgL_l1557z00_9157);
									BgL_l1557z00_9157 = BgL_l1557z00_12213;
									goto BgL_zc3z04anonymousza33202ze3z87_9156;
								}
							}
						else
							{	/* Ast/walk.scm 312 */
								BgL_tmpz00_12202 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_12202);
					}
				}
			}
		}

	}



/* &walk0-switch2094 */
	obj_t BGl_z62walk0zd2switch2094zb0zzast_walkz00(obj_t BgL_envz00_7780,
		obj_t BgL_nz00_7781, obj_t BgL_pz00_7782)
	{
		{	/* Ast/walk.scm 312 */
			{	/* Ast/walk.scm 312 */
				BgL_nodez00_bglt BgL_arg3192z00_9161;

				BgL_arg3192z00_9161 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nz00_7781)))->BgL_testz00);
				PROCEDURE_ENTRY(BgL_pz00_7782) (BgL_pz00_7782,
					((obj_t) BgL_arg3192z00_9161), BEOA);
			}
			{	/* Ast/walk.scm 312 */
				obj_t BgL_g1556z00_9162;

				BgL_g1556z00_9162 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nz00_7781)))->BgL_clausesz00);
				{
					obj_t BgL_l1554z00_9164;

					{	/* Ast/walk.scm 312 */
						bool_t BgL_tmpz00_12225;

						BgL_l1554z00_9164 = BgL_g1556z00_9162;
					BgL_zc3z04anonymousza33193ze3z87_9163:
						if (PAIRP(BgL_l1554z00_9164))
							{	/* Ast/walk.scm 312 */
								{	/* Ast/walk.scm 312 */
									obj_t BgL_fz00_9165;

									BgL_fz00_9165 = CAR(BgL_l1554z00_9164);
									{	/* Ast/walk.scm 312 */
										obj_t BgL_arg3196z00_9166;

										BgL_arg3196z00_9166 = CDR(((obj_t) BgL_fz00_9165));
										PROCEDURE_ENTRY(BgL_pz00_7782) (BgL_pz00_7782,
											BgL_arg3196z00_9166, BEOA);
									}
								}
								{
									obj_t BgL_l1554z00_12235;

									BgL_l1554z00_12235 = CDR(BgL_l1554z00_9164);
									BgL_l1554z00_9164 = BgL_l1554z00_12235;
									goto BgL_zc3z04anonymousza33193ze3z87_9163;
								}
							}
						else
							{	/* Ast/walk.scm 312 */
								BgL_tmpz00_12225 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_12225);
					}
				}
			}
		}

	}



/* &walk3!-sync2092 */
	BgL_nodez00_bglt BGl_z62walk3z12zd2sync2092za2zzast_walkz00(obj_t
		BgL_envz00_7783, obj_t BgL_nz00_7784, obj_t BgL_pz00_7785,
		obj_t BgL_arg0z00_7786, obj_t BgL_arg1z00_7787, obj_t BgL_arg2z00_7788)
	{
		{	/* Ast/walk.scm 311 */
			{
				BgL_nodez00_bglt BgL_auxz00_12238;

				{	/* Ast/walk.scm 311 */
					BgL_nodez00_bglt BgL_arg3188z00_9168;

					BgL_arg3188z00_9168 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nz00_7784)))->BgL_mutexz00);
					BgL_auxz00_12238 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7785) (BgL_pz00_7785,
							((obj_t) BgL_arg3188z00_9168), BgL_arg0z00_7786, BgL_arg1z00_7787,
							BgL_arg2z00_7788, BEOA));
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nz00_7784)))->BgL_mutexz00) =
					((BgL_nodez00_bglt) BgL_auxz00_12238), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_12252;

				{	/* Ast/walk.scm 311 */
					BgL_nodez00_bglt BgL_arg3189z00_9169;

					BgL_arg3189z00_9169 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nz00_7784)))->BgL_prelockz00);
					BgL_auxz00_12252 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7785) (BgL_pz00_7785,
							((obj_t) BgL_arg3189z00_9169), BgL_arg0z00_7786, BgL_arg1z00_7787,
							BgL_arg2z00_7788, BEOA));
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nz00_7784)))->BgL_prelockz00) =
					((BgL_nodez00_bglt) BgL_auxz00_12252), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_12266;

				{	/* Ast/walk.scm 311 */
					BgL_nodez00_bglt BgL_arg3190z00_9170;

					BgL_arg3190z00_9170 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nz00_7784)))->BgL_bodyz00);
					BgL_auxz00_12266 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7785) (BgL_pz00_7785,
							((obj_t) BgL_arg3190z00_9170), BgL_arg0z00_7786, BgL_arg1z00_7787,
							BgL_arg2z00_7788, BEOA));
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nz00_7784)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_12266), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_syncz00_bglt) BgL_nz00_7784));
		}

	}



/* &walk2!-sync2090 */
	BgL_nodez00_bglt BGl_z62walk2z12zd2sync2090za2zzast_walkz00(obj_t
		BgL_envz00_7789, obj_t BgL_nz00_7790, obj_t BgL_pz00_7791,
		obj_t BgL_arg0z00_7792, obj_t BgL_arg1z00_7793)
	{
		{	/* Ast/walk.scm 311 */
			{
				BgL_nodez00_bglt BgL_auxz00_12282;

				{	/* Ast/walk.scm 311 */
					BgL_nodez00_bglt BgL_arg3184z00_9172;

					BgL_arg3184z00_9172 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nz00_7790)))->BgL_mutexz00);
					BgL_auxz00_12282 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7791) (BgL_pz00_7791,
							((obj_t) BgL_arg3184z00_9172), BgL_arg0z00_7792, BgL_arg1z00_7793,
							BEOA));
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nz00_7790)))->BgL_mutexz00) =
					((BgL_nodez00_bglt) BgL_auxz00_12282), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_12295;

				{	/* Ast/walk.scm 311 */
					BgL_nodez00_bglt BgL_arg3185z00_9173;

					BgL_arg3185z00_9173 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nz00_7790)))->BgL_prelockz00);
					BgL_auxz00_12295 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7791) (BgL_pz00_7791,
							((obj_t) BgL_arg3185z00_9173), BgL_arg0z00_7792, BgL_arg1z00_7793,
							BEOA));
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nz00_7790)))->BgL_prelockz00) =
					((BgL_nodez00_bglt) BgL_auxz00_12295), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_12308;

				{	/* Ast/walk.scm 311 */
					BgL_nodez00_bglt BgL_arg3186z00_9174;

					BgL_arg3186z00_9174 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nz00_7790)))->BgL_bodyz00);
					BgL_auxz00_12308 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7791) (BgL_pz00_7791,
							((obj_t) BgL_arg3186z00_9174), BgL_arg0z00_7792, BgL_arg1z00_7793,
							BEOA));
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nz00_7790)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_12308), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_syncz00_bglt) BgL_nz00_7790));
		}

	}



/* &walk1!-sync2088 */
	BgL_nodez00_bglt BGl_z62walk1z12zd2sync2088za2zzast_walkz00(obj_t
		BgL_envz00_7794, obj_t BgL_nz00_7795, obj_t BgL_pz00_7796,
		obj_t BgL_arg0z00_7797)
	{
		{	/* Ast/walk.scm 311 */
			{
				BgL_nodez00_bglt BgL_auxz00_12323;

				{	/* Ast/walk.scm 311 */
					BgL_nodez00_bglt BgL_arg3179z00_9176;

					BgL_arg3179z00_9176 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nz00_7795)))->BgL_mutexz00);
					BgL_auxz00_12323 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7796) (BgL_pz00_7796,
							((obj_t) BgL_arg3179z00_9176), BgL_arg0z00_7797, BEOA));
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nz00_7795)))->BgL_mutexz00) =
					((BgL_nodez00_bglt) BgL_auxz00_12323), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_12335;

				{	/* Ast/walk.scm 311 */
					BgL_nodez00_bglt BgL_arg3181z00_9177;

					BgL_arg3181z00_9177 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nz00_7795)))->BgL_prelockz00);
					BgL_auxz00_12335 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7796) (BgL_pz00_7796,
							((obj_t) BgL_arg3181z00_9177), BgL_arg0z00_7797, BEOA));
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nz00_7795)))->BgL_prelockz00) =
					((BgL_nodez00_bglt) BgL_auxz00_12335), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_12347;

				{	/* Ast/walk.scm 311 */
					BgL_nodez00_bglt BgL_arg3182z00_9178;

					BgL_arg3182z00_9178 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nz00_7795)))->BgL_bodyz00);
					BgL_auxz00_12347 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7796) (BgL_pz00_7796,
							((obj_t) BgL_arg3182z00_9178), BgL_arg0z00_7797, BEOA));
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nz00_7795)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_12347), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_syncz00_bglt) BgL_nz00_7795));
		}

	}



/* &walk0!-sync2086 */
	BgL_nodez00_bglt BGl_z62walk0z12zd2sync2086za2zzast_walkz00(obj_t
		BgL_envz00_7798, obj_t BgL_nz00_7799, obj_t BgL_pz00_7800)
	{
		{	/* Ast/walk.scm 311 */
			{
				BgL_nodez00_bglt BgL_auxz00_12361;

				{	/* Ast/walk.scm 311 */
					BgL_nodez00_bglt BgL_arg3175z00_9180;

					BgL_arg3175z00_9180 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nz00_7799)))->BgL_mutexz00);
					BgL_auxz00_12361 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7800) (BgL_pz00_7800,
							((obj_t) BgL_arg3175z00_9180), BEOA));
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nz00_7799)))->BgL_mutexz00) =
					((BgL_nodez00_bglt) BgL_auxz00_12361), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_12372;

				{	/* Ast/walk.scm 311 */
					BgL_nodez00_bglt BgL_arg3177z00_9181;

					BgL_arg3177z00_9181 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nz00_7799)))->BgL_prelockz00);
					BgL_auxz00_12372 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7800) (BgL_pz00_7800,
							((obj_t) BgL_arg3177z00_9181), BEOA));
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nz00_7799)))->BgL_prelockz00) =
					((BgL_nodez00_bglt) BgL_auxz00_12372), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_12383;

				{	/* Ast/walk.scm 311 */
					BgL_nodez00_bglt BgL_arg3178z00_9182;

					BgL_arg3178z00_9182 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nz00_7799)))->BgL_bodyz00);
					BgL_auxz00_12383 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7800) (BgL_pz00_7800,
							((obj_t) BgL_arg3178z00_9182), BEOA));
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nz00_7799)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_12383), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_syncz00_bglt) BgL_nz00_7799));
		}

	}



/* &walk3*-sync2084 */
	obj_t BGl_z62walk3za2zd2sync2084z12zzast_walkz00(obj_t BgL_envz00_7801,
		obj_t BgL_nz00_7802, obj_t BgL_pz00_7803, obj_t BgL_arg0z00_7804,
		obj_t BgL_arg1z00_7805, obj_t BgL_arg2z00_7806)
	{
		{	/* Ast/walk.scm 311 */
			{	/* Ast/walk.scm 311 */
				obj_t BgL_res4212z00_9193;

				{	/* Ast/walk.scm 311 */
					obj_t BgL_arg3162z00_9184;
					obj_t BgL_arg3163z00_9185;
					obj_t BgL_arg3164z00_9186;

					{	/* Ast/walk.scm 311 */
						BgL_nodez00_bglt BgL_arg3168z00_9187;

						BgL_arg3168z00_9187 =
							(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nz00_7802)))->BgL_mutexz00);
						BgL_arg3162z00_9184 =
							PROCEDURE_ENTRY(BgL_pz00_7803) (BgL_pz00_7803,
							((obj_t) BgL_arg3168z00_9187), BgL_arg0z00_7804, BgL_arg1z00_7805,
							BgL_arg2z00_7806, BEOA);
					}
					{	/* Ast/walk.scm 311 */
						BgL_nodez00_bglt BgL_arg3172z00_9188;

						BgL_arg3172z00_9188 =
							(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nz00_7802)))->BgL_prelockz00);
						BgL_arg3163z00_9185 =
							PROCEDURE_ENTRY(BgL_pz00_7803) (BgL_pz00_7803,
							((obj_t) BgL_arg3172z00_9188), BgL_arg0z00_7804, BgL_arg1z00_7805,
							BgL_arg2z00_7806, BEOA);
					}
					{	/* Ast/walk.scm 311 */
						BgL_nodez00_bglt BgL_arg3174z00_9189;

						BgL_arg3174z00_9189 =
							(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nz00_7802)))->BgL_bodyz00);
						BgL_arg3164z00_9186 =
							PROCEDURE_ENTRY(BgL_pz00_7803) (BgL_pz00_7803,
							((obj_t) BgL_arg3174z00_9189), BgL_arg0z00_7804, BgL_arg1z00_7805,
							BgL_arg2z00_7806, BEOA);
					}
					{	/* Ast/walk.scm 311 */
						obj_t BgL_list3165z00_9190;

						{	/* Ast/walk.scm 311 */
							obj_t BgL_arg3166z00_9191;

							{	/* Ast/walk.scm 311 */
								obj_t BgL_arg3167z00_9192;

								BgL_arg3167z00_9192 =
									MAKE_YOUNG_PAIR(BgL_arg3164z00_9186, BNIL);
								BgL_arg3166z00_9191 =
									MAKE_YOUNG_PAIR(BgL_arg3163z00_9185, BgL_arg3167z00_9192);
							}
							BgL_list3165z00_9190 =
								MAKE_YOUNG_PAIR(BgL_arg3162z00_9184, BgL_arg3166z00_9191);
						}
						BgL_res4212z00_9193 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list3165z00_9190);
					}
				}
				return BgL_res4212z00_9193;
			}
		}

	}



/* &walk2*-sync2082 */
	obj_t BGl_z62walk2za2zd2sync2082z12zzast_walkz00(obj_t BgL_envz00_7807,
		obj_t BgL_nz00_7808, obj_t BgL_pz00_7809, obj_t BgL_arg0z00_7810,
		obj_t BgL_arg1z00_7811)
	{
		{	/* Ast/walk.scm 311 */
			{	/* Ast/walk.scm 311 */
				obj_t BgL_res4213z00_9204;

				{	/* Ast/walk.scm 311 */
					obj_t BgL_arg3147z00_9195;
					obj_t BgL_arg3149z00_9196;
					obj_t BgL_arg3150z00_9197;

					{	/* Ast/walk.scm 311 */
						BgL_nodez00_bglt BgL_arg3158z00_9198;

						BgL_arg3158z00_9198 =
							(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nz00_7808)))->BgL_mutexz00);
						BgL_arg3147z00_9195 =
							PROCEDURE_ENTRY(BgL_pz00_7809) (BgL_pz00_7809,
							((obj_t) BgL_arg3158z00_9198), BgL_arg0z00_7810, BgL_arg1z00_7811,
							BEOA);
					}
					{	/* Ast/walk.scm 311 */
						BgL_nodez00_bglt BgL_arg3160z00_9199;

						BgL_arg3160z00_9199 =
							(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nz00_7808)))->BgL_prelockz00);
						BgL_arg3149z00_9196 =
							PROCEDURE_ENTRY(BgL_pz00_7809) (BgL_pz00_7809,
							((obj_t) BgL_arg3160z00_9199), BgL_arg0z00_7810, BgL_arg1z00_7811,
							BEOA);
					}
					{	/* Ast/walk.scm 311 */
						BgL_nodez00_bglt BgL_arg3161z00_9200;

						BgL_arg3161z00_9200 =
							(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nz00_7808)))->BgL_bodyz00);
						BgL_arg3150z00_9197 =
							PROCEDURE_ENTRY(BgL_pz00_7809) (BgL_pz00_7809,
							((obj_t) BgL_arg3161z00_9200), BgL_arg0z00_7810, BgL_arg1z00_7811,
							BEOA);
					}
					{	/* Ast/walk.scm 311 */
						obj_t BgL_list3151z00_9201;

						{	/* Ast/walk.scm 311 */
							obj_t BgL_arg3152z00_9202;

							{	/* Ast/walk.scm 311 */
								obj_t BgL_arg3153z00_9203;

								BgL_arg3153z00_9203 =
									MAKE_YOUNG_PAIR(BgL_arg3150z00_9197, BNIL);
								BgL_arg3152z00_9202 =
									MAKE_YOUNG_PAIR(BgL_arg3149z00_9196, BgL_arg3153z00_9203);
							}
							BgL_list3151z00_9201 =
								MAKE_YOUNG_PAIR(BgL_arg3147z00_9195, BgL_arg3152z00_9202);
						}
						BgL_res4213z00_9204 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list3151z00_9201);
					}
				}
				return BgL_res4213z00_9204;
			}
		}

	}



/* &walk1*-sync2080 */
	obj_t BGl_z62walk1za2zd2sync2080z12zzast_walkz00(obj_t BgL_envz00_7812,
		obj_t BgL_nz00_7813, obj_t BgL_pz00_7814, obj_t BgL_arg0z00_7815)
	{
		{	/* Ast/walk.scm 311 */
			{	/* Ast/walk.scm 311 */
				obj_t BgL_res4214z00_9215;

				{	/* Ast/walk.scm 311 */
					obj_t BgL_arg3135z00_9206;
					obj_t BgL_arg3136z00_9207;
					obj_t BgL_arg3137z00_9208;

					{	/* Ast/walk.scm 311 */
						BgL_nodez00_bglt BgL_arg3143z00_9209;

						BgL_arg3143z00_9209 =
							(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nz00_7813)))->BgL_mutexz00);
						BgL_arg3135z00_9206 =
							PROCEDURE_ENTRY(BgL_pz00_7814) (BgL_pz00_7814,
							((obj_t) BgL_arg3143z00_9209), BgL_arg0z00_7815, BEOA);
					}
					{	/* Ast/walk.scm 311 */
						BgL_nodez00_bglt BgL_arg3145z00_9210;

						BgL_arg3145z00_9210 =
							(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nz00_7813)))->BgL_prelockz00);
						BgL_arg3136z00_9207 =
							PROCEDURE_ENTRY(BgL_pz00_7814) (BgL_pz00_7814,
							((obj_t) BgL_arg3145z00_9210), BgL_arg0z00_7815, BEOA);
					}
					{	/* Ast/walk.scm 311 */
						BgL_nodez00_bglt BgL_arg3146z00_9211;

						BgL_arg3146z00_9211 =
							(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nz00_7813)))->BgL_bodyz00);
						BgL_arg3137z00_9208 =
							PROCEDURE_ENTRY(BgL_pz00_7814) (BgL_pz00_7814,
							((obj_t) BgL_arg3146z00_9211), BgL_arg0z00_7815, BEOA);
					}
					{	/* Ast/walk.scm 311 */
						obj_t BgL_list3138z00_9212;

						{	/* Ast/walk.scm 311 */
							obj_t BgL_arg3141z00_9213;

							{	/* Ast/walk.scm 311 */
								obj_t BgL_arg3142z00_9214;

								BgL_arg3142z00_9214 =
									MAKE_YOUNG_PAIR(BgL_arg3137z00_9208, BNIL);
								BgL_arg3141z00_9213 =
									MAKE_YOUNG_PAIR(BgL_arg3136z00_9207, BgL_arg3142z00_9214);
							}
							BgL_list3138z00_9212 =
								MAKE_YOUNG_PAIR(BgL_arg3135z00_9206, BgL_arg3141z00_9213);
						}
						BgL_res4214z00_9215 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list3138z00_9212);
					}
				}
				return BgL_res4214z00_9215;
			}
		}

	}



/* &walk0*-sync2078 */
	obj_t BGl_z62walk0za2zd2sync2078z12zzast_walkz00(obj_t BgL_envz00_7816,
		obj_t BgL_nz00_7817, obj_t BgL_pz00_7818)
	{
		{	/* Ast/walk.scm 311 */
			{	/* Ast/walk.scm 311 */
				obj_t BgL_res4215z00_9226;

				{	/* Ast/walk.scm 311 */
					obj_t BgL_arg3120z00_9217;
					obj_t BgL_arg3121z00_9218;
					obj_t BgL_arg3122z00_9219;

					{	/* Ast/walk.scm 311 */
						BgL_nodez00_bglt BgL_arg3130z00_9220;

						BgL_arg3130z00_9220 =
							(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nz00_7817)))->BgL_mutexz00);
						BgL_arg3120z00_9217 =
							PROCEDURE_ENTRY(BgL_pz00_7818) (BgL_pz00_7818,
							((obj_t) BgL_arg3130z00_9220), BEOA);
					}
					{	/* Ast/walk.scm 311 */
						BgL_nodez00_bglt BgL_arg3132z00_9221;

						BgL_arg3132z00_9221 =
							(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nz00_7817)))->BgL_prelockz00);
						BgL_arg3121z00_9218 =
							PROCEDURE_ENTRY(BgL_pz00_7818) (BgL_pz00_7818,
							((obj_t) BgL_arg3132z00_9221), BEOA);
					}
					{	/* Ast/walk.scm 311 */
						BgL_nodez00_bglt BgL_arg3133z00_9222;

						BgL_arg3133z00_9222 =
							(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nz00_7817)))->BgL_bodyz00);
						BgL_arg3122z00_9219 =
							PROCEDURE_ENTRY(BgL_pz00_7818) (BgL_pz00_7818,
							((obj_t) BgL_arg3133z00_9222), BEOA);
					}
					{	/* Ast/walk.scm 311 */
						obj_t BgL_list3123z00_9223;

						{	/* Ast/walk.scm 311 */
							obj_t BgL_arg3128z00_9224;

							{	/* Ast/walk.scm 311 */
								obj_t BgL_arg3129z00_9225;

								BgL_arg3129z00_9225 =
									MAKE_YOUNG_PAIR(BgL_arg3122z00_9219, BNIL);
								BgL_arg3128z00_9224 =
									MAKE_YOUNG_PAIR(BgL_arg3121z00_9218, BgL_arg3129z00_9225);
							}
							BgL_list3123z00_9223 =
								MAKE_YOUNG_PAIR(BgL_arg3120z00_9217, BgL_arg3128z00_9224);
						}
						BgL_res4215z00_9226 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list3123z00_9223);
					}
				}
				return BgL_res4215z00_9226;
			}
		}

	}



/* &walk3-sync2076 */
	obj_t BGl_z62walk3zd2sync2076zb0zzast_walkz00(obj_t BgL_envz00_7819,
		obj_t BgL_nz00_7820, obj_t BgL_pz00_7821, obj_t BgL_arg0z00_7822,
		obj_t BgL_arg1z00_7823, obj_t BgL_arg2z00_7824)
	{
		{	/* Ast/walk.scm 311 */
			{	/* Ast/walk.scm 311 */
				BgL_nodez00_bglt BgL_arg3115z00_9228;

				BgL_arg3115z00_9228 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nz00_7820)))->BgL_mutexz00);
				PROCEDURE_ENTRY(BgL_pz00_7821) (BgL_pz00_7821,
					((obj_t) BgL_arg3115z00_9228), BgL_arg0z00_7822, BgL_arg1z00_7823,
					BgL_arg2z00_7824, BEOA);
			}
			{	/* Ast/walk.scm 311 */
				BgL_nodez00_bglt BgL_arg3117z00_9229;

				BgL_arg3117z00_9229 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nz00_7820)))->BgL_prelockz00);
				PROCEDURE_ENTRY(BgL_pz00_7821) (BgL_pz00_7821,
					((obj_t) BgL_arg3117z00_9229), BgL_arg0z00_7822, BgL_arg1z00_7823,
					BgL_arg2z00_7824, BEOA);
			}
			{	/* Ast/walk.scm 311 */
				BgL_nodez00_bglt BgL_arg3118z00_9230;

				BgL_arg3118z00_9230 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nz00_7820)))->BgL_bodyz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_7821) (BgL_pz00_7821,
					((obj_t) BgL_arg3118z00_9230), BgL_arg0z00_7822, BgL_arg1z00_7823,
					BgL_arg2z00_7824, BEOA);
			}
		}

	}



/* &walk2-sync2074 */
	obj_t BGl_z62walk2zd2sync2074zb0zzast_walkz00(obj_t BgL_envz00_7825,
		obj_t BgL_nz00_7826, obj_t BgL_pz00_7827, obj_t BgL_arg0z00_7828,
		obj_t BgL_arg1z00_7829)
	{
		{	/* Ast/walk.scm 311 */
			{	/* Ast/walk.scm 311 */
				BgL_nodez00_bglt BgL_arg3111z00_9232;

				BgL_arg3111z00_9232 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nz00_7826)))->BgL_mutexz00);
				PROCEDURE_ENTRY(BgL_pz00_7827) (BgL_pz00_7827,
					((obj_t) BgL_arg3111z00_9232), BgL_arg0z00_7828, BgL_arg1z00_7829,
					BEOA);
			}
			{	/* Ast/walk.scm 311 */
				BgL_nodez00_bglt BgL_arg3112z00_9233;

				BgL_arg3112z00_9233 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nz00_7826)))->BgL_prelockz00);
				PROCEDURE_ENTRY(BgL_pz00_7827) (BgL_pz00_7827,
					((obj_t) BgL_arg3112z00_9233), BgL_arg0z00_7828, BgL_arg1z00_7829,
					BEOA);
			}
			{	/* Ast/walk.scm 311 */
				BgL_nodez00_bglt BgL_arg3114z00_9234;

				BgL_arg3114z00_9234 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nz00_7826)))->BgL_bodyz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_7827) (BgL_pz00_7827,
					((obj_t) BgL_arg3114z00_9234), BgL_arg0z00_7828, BgL_arg1z00_7829,
					BEOA);
			}
		}

	}



/* &walk1-sync2072 */
	obj_t BGl_z62walk1zd2sync2072zb0zzast_walkz00(obj_t BgL_envz00_7830,
		obj_t BgL_nz00_7831, obj_t BgL_pz00_7832, obj_t BgL_arg0z00_7833)
	{
		{	/* Ast/walk.scm 311 */
			{	/* Ast/walk.scm 311 */
				BgL_nodez00_bglt BgL_arg3101z00_9236;

				BgL_arg3101z00_9236 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nz00_7831)))->BgL_mutexz00);
				PROCEDURE_ENTRY(BgL_pz00_7832) (BgL_pz00_7832,
					((obj_t) BgL_arg3101z00_9236), BgL_arg0z00_7833, BEOA);
			}
			{	/* Ast/walk.scm 311 */
				BgL_nodez00_bglt BgL_arg3102z00_9237;

				BgL_arg3102z00_9237 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nz00_7831)))->BgL_prelockz00);
				PROCEDURE_ENTRY(BgL_pz00_7832) (BgL_pz00_7832,
					((obj_t) BgL_arg3102z00_9237), BgL_arg0z00_7833, BEOA);
			}
			{	/* Ast/walk.scm 311 */
				BgL_nodez00_bglt BgL_arg3107z00_9238;

				BgL_arg3107z00_9238 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nz00_7831)))->BgL_bodyz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_7832) (BgL_pz00_7832,
					((obj_t) BgL_arg3107z00_9238), BgL_arg0z00_7833, BEOA);
			}
		}

	}



/* &walk0-sync2070 */
	obj_t BGl_z62walk0zd2sync2070zb0zzast_walkz00(obj_t BgL_envz00_7834,
		obj_t BgL_nz00_7835, obj_t BgL_pz00_7836)
	{
		{	/* Ast/walk.scm 311 */
			{	/* Ast/walk.scm 311 */
				BgL_nodez00_bglt BgL_arg3098z00_9240;

				BgL_arg3098z00_9240 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nz00_7835)))->BgL_mutexz00);
				PROCEDURE_ENTRY(BgL_pz00_7836) (BgL_pz00_7836,
					((obj_t) BgL_arg3098z00_9240), BEOA);
			}
			{	/* Ast/walk.scm 311 */
				BgL_nodez00_bglt BgL_arg3099z00_9241;

				BgL_arg3099z00_9241 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nz00_7835)))->BgL_prelockz00);
				PROCEDURE_ENTRY(BgL_pz00_7836) (BgL_pz00_7836,
					((obj_t) BgL_arg3099z00_9241), BEOA);
			}
			{	/* Ast/walk.scm 311 */
				BgL_nodez00_bglt BgL_arg3100z00_9242;

				BgL_arg3100z00_9242 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nz00_7835)))->BgL_bodyz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_7836) (BgL_pz00_7836,
					((obj_t) BgL_arg3100z00_9242), BEOA);
			}
		}

	}



/* &walk3!-box-set!2068 */
	BgL_nodez00_bglt BGl_z62walk3z12zd2boxzd2setz122068z62zzast_walkz00(obj_t
		BgL_envz00_7837, obj_t BgL_nz00_7838, obj_t BgL_pz00_7839,
		obj_t BgL_arg0z00_7840, obj_t BgL_arg1z00_7841, obj_t BgL_arg2z00_7842)
	{
		{	/* Ast/walk.scm 310 */
			{
				BgL_varz00_bglt BgL_auxz00_12616;

				{	/* Ast/walk.scm 310 */
					BgL_varz00_bglt BgL_arg3094z00_9244;

					BgL_arg3094z00_9244 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7838)))->BgL_varz00);
					BgL_auxz00_12616 =
						((BgL_varz00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7839) (BgL_pz00_7839,
							((obj_t) BgL_arg3094z00_9244), BgL_arg0z00_7840, BgL_arg1z00_7841,
							BgL_arg2z00_7842, BEOA));
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7838)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_12616), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_12630;

				{	/* Ast/walk.scm 310 */
					BgL_nodez00_bglt BgL_arg3095z00_9245;

					BgL_arg3095z00_9245 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7838)))->BgL_valuez00);
					BgL_auxz00_12630 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7839) (BgL_pz00_7839,
							((obj_t) BgL_arg3095z00_9245), BgL_arg0z00_7840, BgL_arg1z00_7841,
							BgL_arg2z00_7842, BEOA));
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7838)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_12630), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7838));
		}

	}



/* &walk2!-box-set!2066 */
	BgL_nodez00_bglt BGl_z62walk2z12zd2boxzd2setz122066z62zzast_walkz00(obj_t
		BgL_envz00_7843, obj_t BgL_nz00_7844, obj_t BgL_pz00_7845,
		obj_t BgL_arg0z00_7846, obj_t BgL_arg1z00_7847)
	{
		{	/* Ast/walk.scm 310 */
			{
				BgL_varz00_bglt BgL_auxz00_12646;

				{	/* Ast/walk.scm 310 */
					BgL_varz00_bglt BgL_arg3090z00_9247;

					BgL_arg3090z00_9247 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7844)))->BgL_varz00);
					BgL_auxz00_12646 =
						((BgL_varz00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7845) (BgL_pz00_7845,
							((obj_t) BgL_arg3090z00_9247), BgL_arg0z00_7846, BgL_arg1z00_7847,
							BEOA));
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7844)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_12646), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_12659;

				{	/* Ast/walk.scm 310 */
					BgL_nodez00_bglt BgL_arg3093z00_9248;

					BgL_arg3093z00_9248 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7844)))->BgL_valuez00);
					BgL_auxz00_12659 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7845) (BgL_pz00_7845,
							((obj_t) BgL_arg3093z00_9248), BgL_arg0z00_7846, BgL_arg1z00_7847,
							BEOA));
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7844)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_12659), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7844));
		}

	}



/* &walk1!-box-set!2064 */
	BgL_nodez00_bglt BGl_z62walk1z12zd2boxzd2setz122064z62zzast_walkz00(obj_t
		BgL_envz00_7848, obj_t BgL_nz00_7849, obj_t BgL_pz00_7850,
		obj_t BgL_arg0z00_7851)
	{
		{	/* Ast/walk.scm 310 */
			{
				BgL_varz00_bglt BgL_auxz00_12674;

				{	/* Ast/walk.scm 310 */
					BgL_varz00_bglt BgL_arg3086z00_9250;

					BgL_arg3086z00_9250 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7849)))->BgL_varz00);
					BgL_auxz00_12674 =
						((BgL_varz00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7850) (BgL_pz00_7850,
							((obj_t) BgL_arg3086z00_9250), BgL_arg0z00_7851, BEOA));
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7849)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_12674), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_12686;

				{	/* Ast/walk.scm 310 */
					BgL_nodez00_bglt BgL_arg3089z00_9251;

					BgL_arg3089z00_9251 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7849)))->BgL_valuez00);
					BgL_auxz00_12686 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7850) (BgL_pz00_7850,
							((obj_t) BgL_arg3089z00_9251), BgL_arg0z00_7851, BEOA));
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7849)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_12686), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7849));
		}

	}



/* &walk0!-box-set!2061 */
	BgL_nodez00_bglt BGl_z62walk0z12zd2boxzd2setz122061z62zzast_walkz00(obj_t
		BgL_envz00_7852, obj_t BgL_nz00_7853, obj_t BgL_pz00_7854)
	{
		{	/* Ast/walk.scm 310 */
			{
				BgL_varz00_bglt BgL_auxz00_12700;

				{	/* Ast/walk.scm 310 */
					BgL_varz00_bglt BgL_arg3083z00_9253;

					BgL_arg3083z00_9253 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7853)))->BgL_varz00);
					BgL_auxz00_12700 =
						((BgL_varz00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7854) (BgL_pz00_7854,
							((obj_t) BgL_arg3083z00_9253), BEOA));
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7853)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_12700), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_12711;

				{	/* Ast/walk.scm 310 */
					BgL_nodez00_bglt BgL_arg3085z00_9254;

					BgL_arg3085z00_9254 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7853)))->BgL_valuez00);
					BgL_auxz00_12711 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7854) (BgL_pz00_7854,
							((obj_t) BgL_arg3085z00_9254), BEOA));
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7853)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_12711), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7853));
		}

	}



/* &walk3*-box-set!2059 */
	obj_t BGl_z62walk3za2zd2boxzd2setz122059zd2zzast_walkz00(obj_t
		BgL_envz00_7855, obj_t BgL_nz00_7856, obj_t BgL_pz00_7857,
		obj_t BgL_arg0z00_7858, obj_t BgL_arg1z00_7859, obj_t BgL_arg2z00_7860)
	{
		{	/* Ast/walk.scm 310 */
			{	/* Ast/walk.scm 310 */
				obj_t BgL_res4216z00_9260;

				{	/* Ast/walk.scm 310 */
					obj_t BgL_arg3077z00_9256;
					obj_t BgL_arg3078z00_9257;

					{	/* Ast/walk.scm 310 */
						BgL_varz00_bglt BgL_arg3081z00_9258;

						BgL_arg3081z00_9258 =
							(((BgL_boxzd2setz12zc0_bglt) COBJECT(
									((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7856)))->BgL_varz00);
						BgL_arg3077z00_9256 =
							PROCEDURE_ENTRY(BgL_pz00_7857) (BgL_pz00_7857,
							((obj_t) BgL_arg3081z00_9258), BgL_arg0z00_7858, BgL_arg1z00_7859,
							BgL_arg2z00_7860, BEOA);
					}
					{	/* Ast/walk.scm 310 */
						BgL_nodez00_bglt BgL_arg3082z00_9259;

						BgL_arg3082z00_9259 =
							(((BgL_boxzd2setz12zc0_bglt) COBJECT(
									((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7856)))->BgL_valuez00);
						BgL_arg3078z00_9257 =
							PROCEDURE_ENTRY(BgL_pz00_7857) (BgL_pz00_7857,
							((obj_t) BgL_arg3082z00_9259), BgL_arg0z00_7858, BgL_arg1z00_7859,
							BgL_arg2z00_7860, BEOA);
					}
					BgL_res4216z00_9260 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg3077z00_9256,
						BgL_arg3078z00_9257);
				}
				return BgL_res4216z00_9260;
			}
		}

	}



/* &walk2*-box-set!2057 */
	obj_t BGl_z62walk2za2zd2boxzd2setz122057zd2zzast_walkz00(obj_t
		BgL_envz00_7861, obj_t BgL_nz00_7862, obj_t BgL_pz00_7863,
		obj_t BgL_arg0z00_7864, obj_t BgL_arg1z00_7865)
	{
		{	/* Ast/walk.scm 310 */
			{	/* Ast/walk.scm 310 */
				obj_t BgL_res4217z00_9266;

				{	/* Ast/walk.scm 310 */
					obj_t BgL_arg3071z00_9262;
					obj_t BgL_arg3072z00_9263;

					{	/* Ast/walk.scm 310 */
						BgL_varz00_bglt BgL_arg3073z00_9264;

						BgL_arg3073z00_9264 =
							(((BgL_boxzd2setz12zc0_bglt) COBJECT(
									((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7862)))->BgL_varz00);
						BgL_arg3071z00_9262 =
							PROCEDURE_ENTRY(BgL_pz00_7863) (BgL_pz00_7863,
							((obj_t) BgL_arg3073z00_9264), BgL_arg0z00_7864, BgL_arg1z00_7865,
							BEOA);
					}
					{	/* Ast/walk.scm 310 */
						BgL_nodez00_bglt BgL_arg3076z00_9265;

						BgL_arg3076z00_9265 =
							(((BgL_boxzd2setz12zc0_bglt) COBJECT(
									((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7862)))->BgL_valuez00);
						BgL_arg3072z00_9263 =
							PROCEDURE_ENTRY(BgL_pz00_7863) (BgL_pz00_7863,
							((obj_t) BgL_arg3076z00_9265), BgL_arg0z00_7864, BgL_arg1z00_7865,
							BEOA);
					}
					BgL_res4217z00_9266 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg3071z00_9262,
						BgL_arg3072z00_9263);
				}
				return BgL_res4217z00_9266;
			}
		}

	}



/* &walk1*-box-set!2055 */
	obj_t BGl_z62walk1za2zd2boxzd2setz122055zd2zzast_walkz00(obj_t
		BgL_envz00_7866, obj_t BgL_nz00_7867, obj_t BgL_pz00_7868,
		obj_t BgL_arg0z00_7869)
	{
		{	/* Ast/walk.scm 310 */
			{	/* Ast/walk.scm 310 */
				obj_t BgL_res4218z00_9272;

				{	/* Ast/walk.scm 310 */
					obj_t BgL_arg3065z00_9268;
					obj_t BgL_arg3066z00_9269;

					{	/* Ast/walk.scm 310 */
						BgL_varz00_bglt BgL_arg3067z00_9270;

						BgL_arg3067z00_9270 =
							(((BgL_boxzd2setz12zc0_bglt) COBJECT(
									((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7867)))->BgL_varz00);
						BgL_arg3065z00_9268 =
							PROCEDURE_ENTRY(BgL_pz00_7868) (BgL_pz00_7868,
							((obj_t) BgL_arg3067z00_9270), BgL_arg0z00_7869, BEOA);
					}
					{	/* Ast/walk.scm 310 */
						BgL_nodez00_bglt BgL_arg3070z00_9271;

						BgL_arg3070z00_9271 =
							(((BgL_boxzd2setz12zc0_bglt) COBJECT(
									((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7867)))->BgL_valuez00);
						BgL_arg3066z00_9269 =
							PROCEDURE_ENTRY(BgL_pz00_7868) (BgL_pz00_7868,
							((obj_t) BgL_arg3070z00_9271), BgL_arg0z00_7869, BEOA);
					}
					BgL_res4218z00_9272 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg3065z00_9268,
						BgL_arg3066z00_9269);
				}
				return BgL_res4218z00_9272;
			}
		}

	}



/* &walk0*-box-set!2053 */
	obj_t BGl_z62walk0za2zd2boxzd2setz122053zd2zzast_walkz00(obj_t
		BgL_envz00_7870, obj_t BgL_nz00_7871, obj_t BgL_pz00_7872)
	{
		{	/* Ast/walk.scm 310 */
			{	/* Ast/walk.scm 310 */
				obj_t BgL_res4219z00_9278;

				{	/* Ast/walk.scm 310 */
					obj_t BgL_arg3055z00_9274;
					obj_t BgL_arg3058z00_9275;

					{	/* Ast/walk.scm 310 */
						BgL_varz00_bglt BgL_arg3061z00_9276;

						BgL_arg3061z00_9276 =
							(((BgL_boxzd2setz12zc0_bglt) COBJECT(
									((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7871)))->BgL_varz00);
						BgL_arg3055z00_9274 =
							PROCEDURE_ENTRY(BgL_pz00_7872) (BgL_pz00_7872,
							((obj_t) BgL_arg3061z00_9276), BEOA);
					}
					{	/* Ast/walk.scm 310 */
						BgL_nodez00_bglt BgL_arg3064z00_9277;

						BgL_arg3064z00_9277 =
							(((BgL_boxzd2setz12zc0_bglt) COBJECT(
									((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7871)))->BgL_valuez00);
						BgL_arg3058z00_9275 =
							PROCEDURE_ENTRY(BgL_pz00_7872) (BgL_pz00_7872,
							((obj_t) BgL_arg3064z00_9277), BEOA);
					}
					BgL_res4219z00_9278 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg3055z00_9274,
						BgL_arg3058z00_9275);
				}
				return BgL_res4219z00_9278;
			}
		}

	}



/* &walk3-box-set!2051 */
	obj_t BGl_z62walk3zd2boxzd2setz122051z70zzast_walkz00(obj_t BgL_envz00_7873,
		obj_t BgL_nz00_7874, obj_t BgL_pz00_7875, obj_t BgL_arg0z00_7876,
		obj_t BgL_arg1z00_7877, obj_t BgL_arg2z00_7878)
	{
		{	/* Ast/walk.scm 310 */
			{	/* Ast/walk.scm 310 */
				BgL_varz00_bglt BgL_arg3052z00_9280;

				BgL_arg3052z00_9280 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7874)))->BgL_varz00);
				PROCEDURE_ENTRY(BgL_pz00_7875) (BgL_pz00_7875,
					((obj_t) BgL_arg3052z00_9280), BgL_arg0z00_7876, BgL_arg1z00_7877,
					BgL_arg2z00_7878, BEOA);
			}
			{	/* Ast/walk.scm 310 */
				BgL_nodez00_bglt BgL_arg3053z00_9281;

				BgL_arg3053z00_9281 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7874)))->BgL_valuez00);
				return
					PROCEDURE_ENTRY(BgL_pz00_7875) (BgL_pz00_7875,
					((obj_t) BgL_arg3053z00_9281), BgL_arg0z00_7876, BgL_arg1z00_7877,
					BgL_arg2z00_7878, BEOA);
			}
		}

	}



/* &walk2-box-set!2049 */
	obj_t BGl_z62walk2zd2boxzd2setz122049z70zzast_walkz00(obj_t BgL_envz00_7879,
		obj_t BgL_nz00_7880, obj_t BgL_pz00_7881, obj_t BgL_arg0z00_7882,
		obj_t BgL_arg1z00_7883)
	{
		{	/* Ast/walk.scm 310 */
			{	/* Ast/walk.scm 310 */
				BgL_varz00_bglt BgL_arg3049z00_9283;

				BgL_arg3049z00_9283 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7880)))->BgL_varz00);
				PROCEDURE_ENTRY(BgL_pz00_7881) (BgL_pz00_7881,
					((obj_t) BgL_arg3049z00_9283), BgL_arg0z00_7882, BgL_arg1z00_7883,
					BEOA);
			}
			{	/* Ast/walk.scm 310 */
				BgL_nodez00_bglt BgL_arg3050z00_9284;

				BgL_arg3050z00_9284 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7880)))->BgL_valuez00);
				return
					PROCEDURE_ENTRY(BgL_pz00_7881) (BgL_pz00_7881,
					((obj_t) BgL_arg3050z00_9284), BgL_arg0z00_7882, BgL_arg1z00_7883,
					BEOA);
			}
		}

	}



/* &walk1-box-set!2047 */
	obj_t BGl_z62walk1zd2boxzd2setz122047z70zzast_walkz00(obj_t BgL_envz00_7884,
		obj_t BgL_nz00_7885, obj_t BgL_pz00_7886, obj_t BgL_arg0z00_7887)
	{
		{	/* Ast/walk.scm 310 */
			{	/* Ast/walk.scm 310 */
				BgL_varz00_bglt BgL_arg3046z00_9286;

				BgL_arg3046z00_9286 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7885)))->BgL_varz00);
				PROCEDURE_ENTRY(BgL_pz00_7886) (BgL_pz00_7886,
					((obj_t) BgL_arg3046z00_9286), BgL_arg0z00_7887, BEOA);
			}
			{	/* Ast/walk.scm 310 */
				BgL_nodez00_bglt BgL_arg3047z00_9287;

				BgL_arg3047z00_9287 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7885)))->BgL_valuez00);
				return
					PROCEDURE_ENTRY(BgL_pz00_7886) (BgL_pz00_7886,
					((obj_t) BgL_arg3047z00_9287), BgL_arg0z00_7887, BEOA);
			}
		}

	}



/* &walk0-box-set!2045 */
	obj_t BGl_z62walk0zd2boxzd2setz122045z70zzast_walkz00(obj_t BgL_envz00_7888,
		obj_t BgL_nz00_7889, obj_t BgL_pz00_7890)
	{
		{	/* Ast/walk.scm 310 */
			{	/* Ast/walk.scm 310 */
				BgL_varz00_bglt BgL_arg3043z00_9289;

				BgL_arg3043z00_9289 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7889)))->BgL_varz00);
				PROCEDURE_ENTRY(BgL_pz00_7890) (BgL_pz00_7890,
					((obj_t) BgL_arg3043z00_9289), BEOA);
			}
			{	/* Ast/walk.scm 310 */
				BgL_nodez00_bglt BgL_arg3045z00_9290;

				BgL_arg3045z00_9290 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nz00_7889)))->BgL_valuez00);
				return
					PROCEDURE_ENTRY(BgL_pz00_7890) (BgL_pz00_7890,
					((obj_t) BgL_arg3045z00_9290), BEOA);
			}
		}

	}



/* &walk3!-box-ref2043 */
	BgL_nodez00_bglt BGl_z62walk3z12zd2boxzd2ref2043z70zzast_walkz00(obj_t
		BgL_envz00_7891, obj_t BgL_nz00_7892, obj_t BgL_pz00_7893,
		obj_t BgL_arg0z00_7894, obj_t BgL_arg1z00_7895, obj_t BgL_arg2z00_7896)
	{
		{	/* Ast/walk.scm 309 */
			{
				BgL_varz00_bglt BgL_auxz00_12864;

				{	/* Ast/walk.scm 309 */
					BgL_varz00_bglt BgL_arg3042z00_9292;

					BgL_arg3042z00_9292 =
						(((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nz00_7892)))->BgL_varz00);
					BgL_auxz00_12864 =
						((BgL_varz00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7893) (BgL_pz00_7893,
							((obj_t) BgL_arg3042z00_9292), BgL_arg0z00_7894, BgL_arg1z00_7895,
							BgL_arg2z00_7896, BEOA));
				}
				((((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nz00_7892)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_12864), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2refzd2_bglt) BgL_nz00_7892));
		}

	}



/* &walk2!-box-ref2041 */
	BgL_nodez00_bglt BGl_z62walk2z12zd2boxzd2ref2041z70zzast_walkz00(obj_t
		BgL_envz00_7897, obj_t BgL_nz00_7898, obj_t BgL_pz00_7899,
		obj_t BgL_arg0z00_7900, obj_t BgL_arg1z00_7901)
	{
		{	/* Ast/walk.scm 309 */
			{
				BgL_varz00_bglt BgL_auxz00_12880;

				{	/* Ast/walk.scm 309 */
					BgL_varz00_bglt BgL_arg3039z00_9294;

					BgL_arg3039z00_9294 =
						(((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nz00_7898)))->BgL_varz00);
					BgL_auxz00_12880 =
						((BgL_varz00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7899) (BgL_pz00_7899,
							((obj_t) BgL_arg3039z00_9294), BgL_arg0z00_7900, BgL_arg1z00_7901,
							BEOA));
				}
				((((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nz00_7898)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_12880), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2refzd2_bglt) BgL_nz00_7898));
		}

	}



/* &walk1!-box-ref2039 */
	BgL_nodez00_bglt BGl_z62walk1z12zd2boxzd2ref2039z70zzast_walkz00(obj_t
		BgL_envz00_7902, obj_t BgL_nz00_7903, obj_t BgL_pz00_7904,
		obj_t BgL_arg0z00_7905)
	{
		{	/* Ast/walk.scm 309 */
			{
				BgL_varz00_bglt BgL_auxz00_12895;

				{	/* Ast/walk.scm 309 */
					BgL_varz00_bglt BgL_arg3038z00_9296;

					BgL_arg3038z00_9296 =
						(((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nz00_7903)))->BgL_varz00);
					BgL_auxz00_12895 =
						((BgL_varz00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7904) (BgL_pz00_7904,
							((obj_t) BgL_arg3038z00_9296), BgL_arg0z00_7905, BEOA));
				}
				((((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nz00_7903)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_12895), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2refzd2_bglt) BgL_nz00_7903));
		}

	}



/* &walk0!-box-ref2037 */
	BgL_nodez00_bglt BGl_z62walk0z12zd2boxzd2ref2037z70zzast_walkz00(obj_t
		BgL_envz00_7906, obj_t BgL_nz00_7907, obj_t BgL_pz00_7908)
	{
		{	/* Ast/walk.scm 309 */
			{
				BgL_varz00_bglt BgL_auxz00_12909;

				{	/* Ast/walk.scm 309 */
					BgL_varz00_bglt BgL_arg3036z00_9298;

					BgL_arg3036z00_9298 =
						(((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nz00_7907)))->BgL_varz00);
					BgL_auxz00_12909 =
						((BgL_varz00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7908) (BgL_pz00_7908,
							((obj_t) BgL_arg3036z00_9298), BEOA));
				}
				((((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nz00_7907)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_12909), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2refzd2_bglt) BgL_nz00_7907));
		}

	}



/* &walk3*-box-ref2035 */
	obj_t BGl_z62walk3za2zd2boxzd2ref2035zc0zzast_walkz00(obj_t BgL_envz00_7909,
		obj_t BgL_nz00_7910, obj_t BgL_pz00_7911, obj_t BgL_arg0z00_7912,
		obj_t BgL_arg1z00_7913, obj_t BgL_arg2z00_7914)
	{
		{	/* Ast/walk.scm 309 */
			{	/* Ast/walk.scm 309 */
				obj_t BgL_res4220z00_9303;

				{	/* Ast/walk.scm 309 */
					obj_t BgL_arg3033z00_9300;

					{	/* Ast/walk.scm 309 */
						BgL_varz00_bglt BgL_arg3035z00_9301;

						BgL_arg3035z00_9301 =
							(((BgL_boxzd2refzd2_bglt) COBJECT(
									((BgL_boxzd2refzd2_bglt) BgL_nz00_7910)))->BgL_varz00);
						BgL_arg3033z00_9300 =
							PROCEDURE_ENTRY(BgL_pz00_7911) (BgL_pz00_7911,
							((obj_t) BgL_arg3035z00_9301), BgL_arg0z00_7912, BgL_arg1z00_7913,
							BgL_arg2z00_7914, BEOA);
					}
					{	/* Ast/walk.scm 309 */
						obj_t BgL_list3034z00_9302;

						BgL_list3034z00_9302 = MAKE_YOUNG_PAIR(BgL_arg3033z00_9300, BNIL);
						BgL_res4220z00_9303 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list3034z00_9302);
					}
				}
				return BgL_res4220z00_9303;
			}
		}

	}



/* &walk2*-box-ref2033 */
	obj_t BGl_z62walk2za2zd2boxzd2ref2033zc0zzast_walkz00(obj_t BgL_envz00_7915,
		obj_t BgL_nz00_7916, obj_t BgL_pz00_7917, obj_t BgL_arg0z00_7918,
		obj_t BgL_arg1z00_7919)
	{
		{	/* Ast/walk.scm 309 */
			{	/* Ast/walk.scm 309 */
				obj_t BgL_res4221z00_9308;

				{	/* Ast/walk.scm 309 */
					obj_t BgL_arg3029z00_9305;

					{	/* Ast/walk.scm 309 */
						BgL_varz00_bglt BgL_arg3032z00_9306;

						BgL_arg3032z00_9306 =
							(((BgL_boxzd2refzd2_bglt) COBJECT(
									((BgL_boxzd2refzd2_bglt) BgL_nz00_7916)))->BgL_varz00);
						BgL_arg3029z00_9305 =
							PROCEDURE_ENTRY(BgL_pz00_7917) (BgL_pz00_7917,
							((obj_t) BgL_arg3032z00_9306), BgL_arg0z00_7918, BgL_arg1z00_7919,
							BEOA);
					}
					{	/* Ast/walk.scm 309 */
						obj_t BgL_list3030z00_9307;

						BgL_list3030z00_9307 = MAKE_YOUNG_PAIR(BgL_arg3029z00_9305, BNIL);
						BgL_res4221z00_9308 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list3030z00_9307);
					}
				}
				return BgL_res4221z00_9308;
			}
		}

	}



/* &walk1*-box-ref2031 */
	obj_t BGl_z62walk1za2zd2boxzd2ref2031zc0zzast_walkz00(obj_t BgL_envz00_7920,
		obj_t BgL_nz00_7921, obj_t BgL_pz00_7922, obj_t BgL_arg0z00_7923)
	{
		{	/* Ast/walk.scm 309 */
			{	/* Ast/walk.scm 309 */
				obj_t BgL_res4222z00_9313;

				{	/* Ast/walk.scm 309 */
					obj_t BgL_arg3025z00_9310;

					{	/* Ast/walk.scm 309 */
						BgL_varz00_bglt BgL_arg3028z00_9311;

						BgL_arg3028z00_9311 =
							(((BgL_boxzd2refzd2_bglt) COBJECT(
									((BgL_boxzd2refzd2_bglt) BgL_nz00_7921)))->BgL_varz00);
						BgL_arg3025z00_9310 =
							PROCEDURE_ENTRY(BgL_pz00_7922) (BgL_pz00_7922,
							((obj_t) BgL_arg3028z00_9311), BgL_arg0z00_7923, BEOA);
					}
					{	/* Ast/walk.scm 309 */
						obj_t BgL_list3026z00_9312;

						BgL_list3026z00_9312 = MAKE_YOUNG_PAIR(BgL_arg3025z00_9310, BNIL);
						BgL_res4222z00_9313 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list3026z00_9312);
					}
				}
				return BgL_res4222z00_9313;
			}
		}

	}



/* &walk0*-box-ref2029 */
	obj_t BGl_z62walk0za2zd2boxzd2ref2029zc0zzast_walkz00(obj_t BgL_envz00_7924,
		obj_t BgL_nz00_7925, obj_t BgL_pz00_7926)
	{
		{	/* Ast/walk.scm 309 */
			{	/* Ast/walk.scm 309 */
				obj_t BgL_res4223z00_9318;

				{	/* Ast/walk.scm 309 */
					obj_t BgL_arg3017z00_9315;

					{	/* Ast/walk.scm 309 */
						BgL_varz00_bglt BgL_arg3021z00_9316;

						BgL_arg3021z00_9316 =
							(((BgL_boxzd2refzd2_bglt) COBJECT(
									((BgL_boxzd2refzd2_bglt) BgL_nz00_7925)))->BgL_varz00);
						BgL_arg3017z00_9315 =
							PROCEDURE_ENTRY(BgL_pz00_7926) (BgL_pz00_7926,
							((obj_t) BgL_arg3021z00_9316), BEOA);
					}
					{	/* Ast/walk.scm 309 */
						obj_t BgL_list3018z00_9317;

						BgL_list3018z00_9317 = MAKE_YOUNG_PAIR(BgL_arg3017z00_9315, BNIL);
						BgL_res4223z00_9318 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list3018z00_9317);
					}
				}
				return BgL_res4223z00_9318;
			}
		}

	}



/* &walk3-box-ref2027 */
	obj_t BGl_z62walk3zd2boxzd2ref2027z62zzast_walkz00(obj_t BgL_envz00_7927,
		obj_t BgL_nz00_7928, obj_t BgL_pz00_7929, obj_t BgL_arg0z00_7930,
		obj_t BgL_arg1z00_7931, obj_t BgL_arg2z00_7932)
	{
		{	/* Ast/walk.scm 309 */
			{	/* Ast/walk.scm 309 */
				BgL_varz00_bglt BgL_arg3014z00_9320;

				BgL_arg3014z00_9320 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_nz00_7928)))->BgL_varz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_7929) (BgL_pz00_7929,
					((obj_t) BgL_arg3014z00_9320), BgL_arg0z00_7930, BgL_arg1z00_7931,
					BgL_arg2z00_7932, BEOA);
			}
		}

	}



/* &walk2-box-ref2025 */
	obj_t BGl_z62walk2zd2boxzd2ref2025z62zzast_walkz00(obj_t BgL_envz00_7933,
		obj_t BgL_nz00_7934, obj_t BgL_pz00_7935, obj_t BgL_arg0z00_7936,
		obj_t BgL_arg1z00_7937)
	{
		{	/* Ast/walk.scm 309 */
			{	/* Ast/walk.scm 309 */
				BgL_varz00_bglt BgL_arg3013z00_9322;

				BgL_arg3013z00_9322 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_nz00_7934)))->BgL_varz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_7935) (BgL_pz00_7935,
					((obj_t) BgL_arg3013z00_9322), BgL_arg0z00_7936, BgL_arg1z00_7937,
					BEOA);
			}
		}

	}



/* &walk1-box-ref2023 */
	obj_t BGl_z62walk1zd2boxzd2ref2023z62zzast_walkz00(obj_t BgL_envz00_7938,
		obj_t BgL_nz00_7939, obj_t BgL_pz00_7940, obj_t BgL_arg0z00_7941)
	{
		{	/* Ast/walk.scm 309 */
			{	/* Ast/walk.scm 309 */
				BgL_varz00_bglt BgL_arg3012z00_9324;

				BgL_arg3012z00_9324 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_nz00_7939)))->BgL_varz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_7940) (BgL_pz00_7940,
					((obj_t) BgL_arg3012z00_9324), BgL_arg0z00_7941, BEOA);
			}
		}

	}



/* &walk0-box-ref2021 */
	obj_t BGl_z62walk0zd2boxzd2ref2021z62zzast_walkz00(obj_t BgL_envz00_7942,
		obj_t BgL_nz00_7943, obj_t BgL_pz00_7944)
	{
		{	/* Ast/walk.scm 309 */
			{	/* Ast/walk.scm 309 */
				BgL_varz00_bglt BgL_arg3009z00_9326;

				BgL_arg3009z00_9326 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_nz00_7943)))->BgL_varz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_7944) (BgL_pz00_7944,
					((obj_t) BgL_arg3009z00_9326), BEOA);
			}
		}

	}



/* &walk3!-make-box2019 */
	BgL_nodez00_bglt BGl_z62walk3z12zd2makezd2box2019z70zzast_walkz00(obj_t
		BgL_envz00_7945, obj_t BgL_nz00_7946, obj_t BgL_pz00_7947,
		obj_t BgL_arg0z00_7948, obj_t BgL_arg1z00_7949, obj_t BgL_arg2z00_7950)
	{
		{	/* Ast/walk.scm 308 */
			{
				BgL_nodez00_bglt BgL_auxz00_12998;

				{	/* Ast/walk.scm 308 */
					BgL_nodez00_bglt BgL_arg3007z00_9328;

					BgL_arg3007z00_9328 =
						(((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nz00_7946)))->BgL_valuez00);
					BgL_auxz00_12998 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7947) (BgL_pz00_7947,
							((obj_t) BgL_arg3007z00_9328), BgL_arg0z00_7948, BgL_arg1z00_7949,
							BgL_arg2z00_7950, BEOA));
				}
				((((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nz00_7946)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_12998), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nz00_7946));
		}

	}



/* &walk2!-make-box2017 */
	BgL_nodez00_bglt BGl_z62walk2z12zd2makezd2box2017z70zzast_walkz00(obj_t
		BgL_envz00_7951, obj_t BgL_nz00_7952, obj_t BgL_pz00_7953,
		obj_t BgL_arg0z00_7954, obj_t BgL_arg1z00_7955)
	{
		{	/* Ast/walk.scm 308 */
			{
				BgL_nodez00_bglt BgL_auxz00_13014;

				{	/* Ast/walk.scm 308 */
					BgL_nodez00_bglt BgL_arg3006z00_9330;

					BgL_arg3006z00_9330 =
						(((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nz00_7952)))->BgL_valuez00);
					BgL_auxz00_13014 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7953) (BgL_pz00_7953,
							((obj_t) BgL_arg3006z00_9330), BgL_arg0z00_7954, BgL_arg1z00_7955,
							BEOA));
				}
				((((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nz00_7952)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_13014), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nz00_7952));
		}

	}



/* &walk1!-make-box2015 */
	BgL_nodez00_bglt BGl_z62walk1z12zd2makezd2box2015z70zzast_walkz00(obj_t
		BgL_envz00_7956, obj_t BgL_nz00_7957, obj_t BgL_pz00_7958,
		obj_t BgL_arg0z00_7959)
	{
		{	/* Ast/walk.scm 308 */
			{
				BgL_nodez00_bglt BgL_auxz00_13029;

				{	/* Ast/walk.scm 308 */
					BgL_nodez00_bglt BgL_arg3005z00_9332;

					BgL_arg3005z00_9332 =
						(((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nz00_7957)))->BgL_valuez00);
					BgL_auxz00_13029 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7958) (BgL_pz00_7958,
							((obj_t) BgL_arg3005z00_9332), BgL_arg0z00_7959, BEOA));
				}
				((((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nz00_7957)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_13029), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nz00_7957));
		}

	}



/* &walk0!-make-box2013 */
	BgL_nodez00_bglt BGl_z62walk0z12zd2makezd2box2013z70zzast_walkz00(obj_t
		BgL_envz00_7960, obj_t BgL_nz00_7961, obj_t BgL_pz00_7962)
	{
		{	/* Ast/walk.scm 308 */
			{
				BgL_nodez00_bglt BgL_auxz00_13043;

				{	/* Ast/walk.scm 308 */
					BgL_nodez00_bglt BgL_arg3004z00_9334;

					BgL_arg3004z00_9334 =
						(((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nz00_7961)))->BgL_valuez00);
					BgL_auxz00_13043 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_7962) (BgL_pz00_7962,
							((obj_t) BgL_arg3004z00_9334), BEOA));
				}
				((((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nz00_7961)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_13043), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nz00_7961));
		}

	}



/* &walk3*-make-box2011 */
	obj_t BGl_z62walk3za2zd2makezd2box2011zc0zzast_walkz00(obj_t BgL_envz00_7963,
		obj_t BgL_nz00_7964, obj_t BgL_pz00_7965, obj_t BgL_arg0z00_7966,
		obj_t BgL_arg1z00_7967, obj_t BgL_arg2z00_7968)
	{
		{	/* Ast/walk.scm 308 */
			{	/* Ast/walk.scm 308 */
				obj_t BgL_res4224z00_9339;

				{	/* Ast/walk.scm 308 */
					obj_t BgL_arg3001z00_9336;

					{	/* Ast/walk.scm 308 */
						BgL_nodez00_bglt BgL_arg3003z00_9337;

						BgL_arg3003z00_9337 =
							(((BgL_makezd2boxzd2_bglt) COBJECT(
									((BgL_makezd2boxzd2_bglt) BgL_nz00_7964)))->BgL_valuez00);
						BgL_arg3001z00_9336 =
							PROCEDURE_ENTRY(BgL_pz00_7965) (BgL_pz00_7965,
							((obj_t) BgL_arg3003z00_9337), BgL_arg0z00_7966, BgL_arg1z00_7967,
							BgL_arg2z00_7968, BEOA);
					}
					{	/* Ast/walk.scm 308 */
						obj_t BgL_list3002z00_9338;

						BgL_list3002z00_9338 = MAKE_YOUNG_PAIR(BgL_arg3001z00_9336, BNIL);
						BgL_res4224z00_9339 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list3002z00_9338);
					}
				}
				return BgL_res4224z00_9339;
			}
		}

	}



/* &walk2*-make-box2009 */
	obj_t BGl_z62walk2za2zd2makezd2box2009zc0zzast_walkz00(obj_t BgL_envz00_7969,
		obj_t BgL_nz00_7970, obj_t BgL_pz00_7971, obj_t BgL_arg0z00_7972,
		obj_t BgL_arg1z00_7973)
	{
		{	/* Ast/walk.scm 308 */
			{	/* Ast/walk.scm 308 */
				obj_t BgL_res4225z00_9344;

				{	/* Ast/walk.scm 308 */
					obj_t BgL_arg2996z00_9341;

					{	/* Ast/walk.scm 308 */
						BgL_nodez00_bglt BgL_arg3000z00_9342;

						BgL_arg3000z00_9342 =
							(((BgL_makezd2boxzd2_bglt) COBJECT(
									((BgL_makezd2boxzd2_bglt) BgL_nz00_7970)))->BgL_valuez00);
						BgL_arg2996z00_9341 =
							PROCEDURE_ENTRY(BgL_pz00_7971) (BgL_pz00_7971,
							((obj_t) BgL_arg3000z00_9342), BgL_arg0z00_7972, BgL_arg1z00_7973,
							BEOA);
					}
					{	/* Ast/walk.scm 308 */
						obj_t BgL_list2997z00_9343;

						BgL_list2997z00_9343 = MAKE_YOUNG_PAIR(BgL_arg2996z00_9341, BNIL);
						BgL_res4225z00_9344 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2997z00_9343);
					}
				}
				return BgL_res4225z00_9344;
			}
		}

	}



/* &walk1*-make-box2007 */
	obj_t BGl_z62walk1za2zd2makezd2box2007zc0zzast_walkz00(obj_t BgL_envz00_7974,
		obj_t BgL_nz00_7975, obj_t BgL_pz00_7976, obj_t BgL_arg0z00_7977)
	{
		{	/* Ast/walk.scm 308 */
			{	/* Ast/walk.scm 308 */
				obj_t BgL_res4226z00_9349;

				{	/* Ast/walk.scm 308 */
					obj_t BgL_arg2993z00_9346;

					{	/* Ast/walk.scm 308 */
						BgL_nodez00_bglt BgL_arg2995z00_9347;

						BgL_arg2995z00_9347 =
							(((BgL_makezd2boxzd2_bglt) COBJECT(
									((BgL_makezd2boxzd2_bglt) BgL_nz00_7975)))->BgL_valuez00);
						BgL_arg2993z00_9346 =
							PROCEDURE_ENTRY(BgL_pz00_7976) (BgL_pz00_7976,
							((obj_t) BgL_arg2995z00_9347), BgL_arg0z00_7977, BEOA);
					}
					{	/* Ast/walk.scm 308 */
						obj_t BgL_list2994z00_9348;

						BgL_list2994z00_9348 = MAKE_YOUNG_PAIR(BgL_arg2993z00_9346, BNIL);
						BgL_res4226z00_9349 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2994z00_9348);
					}
				}
				return BgL_res4226z00_9349;
			}
		}

	}



/* &walk0*-make-box2005 */
	obj_t BGl_z62walk0za2zd2makezd2box2005zc0zzast_walkz00(obj_t BgL_envz00_7978,
		obj_t BgL_nz00_7979, obj_t BgL_pz00_7980)
	{
		{	/* Ast/walk.scm 308 */
			{	/* Ast/walk.scm 308 */
				obj_t BgL_res4227z00_9354;

				{	/* Ast/walk.scm 308 */
					obj_t BgL_arg2990z00_9351;

					{	/* Ast/walk.scm 308 */
						BgL_nodez00_bglt BgL_arg2992z00_9352;

						BgL_arg2992z00_9352 =
							(((BgL_makezd2boxzd2_bglt) COBJECT(
									((BgL_makezd2boxzd2_bglt) BgL_nz00_7979)))->BgL_valuez00);
						BgL_arg2990z00_9351 =
							PROCEDURE_ENTRY(BgL_pz00_7980) (BgL_pz00_7980,
							((obj_t) BgL_arg2992z00_9352), BEOA);
					}
					{	/* Ast/walk.scm 308 */
						obj_t BgL_list2991z00_9353;

						BgL_list2991z00_9353 = MAKE_YOUNG_PAIR(BgL_arg2990z00_9351, BNIL);
						BgL_res4227z00_9354 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2991z00_9353);
					}
				}
				return BgL_res4227z00_9354;
			}
		}

	}



/* &walk3-make-box2003 */
	obj_t BGl_z62walk3zd2makezd2box2003z62zzast_walkz00(obj_t BgL_envz00_7981,
		obj_t BgL_nz00_7982, obj_t BgL_pz00_7983, obj_t BgL_arg0z00_7984,
		obj_t BgL_arg1z00_7985, obj_t BgL_arg2z00_7986)
	{
		{	/* Ast/walk.scm 308 */
			{	/* Ast/walk.scm 308 */
				BgL_nodez00_bglt BgL_arg2984z00_9356;

				BgL_arg2984z00_9356 =
					(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nz00_7982)))->BgL_valuez00);
				return
					PROCEDURE_ENTRY(BgL_pz00_7983) (BgL_pz00_7983,
					((obj_t) BgL_arg2984z00_9356), BgL_arg0z00_7984, BgL_arg1z00_7985,
					BgL_arg2z00_7986, BEOA);
			}
		}

	}



/* &walk2-make-box2001 */
	obj_t BGl_z62walk2zd2makezd2box2001z62zzast_walkz00(obj_t BgL_envz00_7987,
		obj_t BgL_nz00_7988, obj_t BgL_pz00_7989, obj_t BgL_arg0z00_7990,
		obj_t BgL_arg1z00_7991)
	{
		{	/* Ast/walk.scm 308 */
			{	/* Ast/walk.scm 308 */
				BgL_nodez00_bglt BgL_arg2983z00_9358;

				BgL_arg2983z00_9358 =
					(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nz00_7988)))->BgL_valuez00);
				return
					PROCEDURE_ENTRY(BgL_pz00_7989) (BgL_pz00_7989,
					((obj_t) BgL_arg2983z00_9358), BgL_arg0z00_7990, BgL_arg1z00_7991,
					BEOA);
			}
		}

	}



/* &walk1-make-box1999 */
	obj_t BGl_z62walk1zd2makezd2box1999z62zzast_walkz00(obj_t BgL_envz00_7992,
		obj_t BgL_nz00_7993, obj_t BgL_pz00_7994, obj_t BgL_arg0z00_7995)
	{
		{	/* Ast/walk.scm 308 */
			{	/* Ast/walk.scm 308 */
				BgL_nodez00_bglt BgL_arg2982z00_9360;

				BgL_arg2982z00_9360 =
					(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nz00_7993)))->BgL_valuez00);
				return
					PROCEDURE_ENTRY(BgL_pz00_7994) (BgL_pz00_7994,
					((obj_t) BgL_arg2982z00_9360), BgL_arg0z00_7995, BEOA);
			}
		}

	}



/* &walk0-make-box1997 */
	obj_t BGl_z62walk0zd2makezd2box1997z62zzast_walkz00(obj_t BgL_envz00_7996,
		obj_t BgL_nz00_7997, obj_t BgL_pz00_7998)
	{
		{	/* Ast/walk.scm 308 */
			{	/* Ast/walk.scm 308 */
				BgL_nodez00_bglt BgL_arg2981z00_9362;

				BgL_arg2981z00_9362 =
					(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nz00_7997)))->BgL_valuez00);
				return
					PROCEDURE_ENTRY(BgL_pz00_7998) (BgL_pz00_7998,
					((obj_t) BgL_arg2981z00_9362), BEOA);
			}
		}

	}



/* &walk3!-return1995 */
	BgL_nodez00_bglt BGl_z62walk3z12zd2return1995za2zzast_walkz00(obj_t
		BgL_envz00_7999, obj_t BgL_nz00_8000, obj_t BgL_pz00_8001,
		obj_t BgL_arg0z00_8002, obj_t BgL_arg1z00_8003, obj_t BgL_arg2z00_8004)
	{
		{	/* Ast/walk.scm 307 */
			{
				BgL_nodez00_bglt BgL_auxz00_13132;

				{	/* Ast/walk.scm 307 */
					BgL_nodez00_bglt BgL_arg2980z00_9364;

					BgL_arg2980z00_9364 =
						(((BgL_returnz00_bglt) COBJECT(
								((BgL_returnz00_bglt) BgL_nz00_8000)))->BgL_valuez00);
					BgL_auxz00_13132 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8001) (BgL_pz00_8001,
							((obj_t) BgL_arg2980z00_9364), BgL_arg0z00_8002, BgL_arg1z00_8003,
							BgL_arg2z00_8004, BEOA));
				}
				((((BgL_returnz00_bglt) COBJECT(
								((BgL_returnz00_bglt) BgL_nz00_8000)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_13132), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_returnz00_bglt) BgL_nz00_8000));
		}

	}



/* &walk2!-return1993 */
	BgL_nodez00_bglt BGl_z62walk2z12zd2return1993za2zzast_walkz00(obj_t
		BgL_envz00_8005, obj_t BgL_nz00_8006, obj_t BgL_pz00_8007,
		obj_t BgL_arg0z00_8008, obj_t BgL_arg1z00_8009)
	{
		{	/* Ast/walk.scm 307 */
			{
				BgL_nodez00_bglt BgL_auxz00_13148;

				{	/* Ast/walk.scm 307 */
					BgL_nodez00_bglt BgL_arg2979z00_9366;

					BgL_arg2979z00_9366 =
						(((BgL_returnz00_bglt) COBJECT(
								((BgL_returnz00_bglt) BgL_nz00_8006)))->BgL_valuez00);
					BgL_auxz00_13148 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8007) (BgL_pz00_8007,
							((obj_t) BgL_arg2979z00_9366), BgL_arg0z00_8008, BgL_arg1z00_8009,
							BEOA));
				}
				((((BgL_returnz00_bglt) COBJECT(
								((BgL_returnz00_bglt) BgL_nz00_8006)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_13148), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_returnz00_bglt) BgL_nz00_8006));
		}

	}



/* &walk1!-return1991 */
	BgL_nodez00_bglt BGl_z62walk1z12zd2return1991za2zzast_walkz00(obj_t
		BgL_envz00_8010, obj_t BgL_nz00_8011, obj_t BgL_pz00_8012,
		obj_t BgL_arg0z00_8013)
	{
		{	/* Ast/walk.scm 307 */
			{
				BgL_nodez00_bglt BgL_auxz00_13163;

				{	/* Ast/walk.scm 307 */
					BgL_nodez00_bglt BgL_arg2978z00_9368;

					BgL_arg2978z00_9368 =
						(((BgL_returnz00_bglt) COBJECT(
								((BgL_returnz00_bglt) BgL_nz00_8011)))->BgL_valuez00);
					BgL_auxz00_13163 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8012) (BgL_pz00_8012,
							((obj_t) BgL_arg2978z00_9368), BgL_arg0z00_8013, BEOA));
				}
				((((BgL_returnz00_bglt) COBJECT(
								((BgL_returnz00_bglt) BgL_nz00_8011)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_13163), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_returnz00_bglt) BgL_nz00_8011));
		}

	}



/* &walk0!-return1989 */
	BgL_nodez00_bglt BGl_z62walk0z12zd2return1989za2zzast_walkz00(obj_t
		BgL_envz00_8014, obj_t BgL_nz00_8015, obj_t BgL_pz00_8016)
	{
		{	/* Ast/walk.scm 307 */
			{
				BgL_nodez00_bglt BgL_auxz00_13177;

				{	/* Ast/walk.scm 307 */
					BgL_nodez00_bglt BgL_arg2976z00_9370;

					BgL_arg2976z00_9370 =
						(((BgL_returnz00_bglt) COBJECT(
								((BgL_returnz00_bglt) BgL_nz00_8015)))->BgL_valuez00);
					BgL_auxz00_13177 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8016) (BgL_pz00_8016,
							((obj_t) BgL_arg2976z00_9370), BEOA));
				}
				((((BgL_returnz00_bglt) COBJECT(
								((BgL_returnz00_bglt) BgL_nz00_8015)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_13177), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_returnz00_bglt) BgL_nz00_8015));
		}

	}



/* &walk3*-return1987 */
	obj_t BGl_z62walk3za2zd2return1987z12zzast_walkz00(obj_t BgL_envz00_8017,
		obj_t BgL_nz00_8018, obj_t BgL_pz00_8019, obj_t BgL_arg0z00_8020,
		obj_t BgL_arg1z00_8021, obj_t BgL_arg2z00_8022)
	{
		{	/* Ast/walk.scm 307 */
			{	/* Ast/walk.scm 307 */
				obj_t BgL_res4228z00_9375;

				{	/* Ast/walk.scm 307 */
					obj_t BgL_arg2972z00_9372;

					{	/* Ast/walk.scm 307 */
						BgL_nodez00_bglt BgL_arg2974z00_9373;

						BgL_arg2974z00_9373 =
							(((BgL_returnz00_bglt) COBJECT(
									((BgL_returnz00_bglt) BgL_nz00_8018)))->BgL_valuez00);
						BgL_arg2972z00_9372 =
							PROCEDURE_ENTRY(BgL_pz00_8019) (BgL_pz00_8019,
							((obj_t) BgL_arg2974z00_9373), BgL_arg0z00_8020, BgL_arg1z00_8021,
							BgL_arg2z00_8022, BEOA);
					}
					{	/* Ast/walk.scm 307 */
						obj_t BgL_list2973z00_9374;

						BgL_list2973z00_9374 = MAKE_YOUNG_PAIR(BgL_arg2972z00_9372, BNIL);
						BgL_res4228z00_9375 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2973z00_9374);
					}
				}
				return BgL_res4228z00_9375;
			}
		}

	}



/* &walk2*-return1985 */
	obj_t BGl_z62walk2za2zd2return1985z12zzast_walkz00(obj_t BgL_envz00_8023,
		obj_t BgL_nz00_8024, obj_t BgL_pz00_8025, obj_t BgL_arg0z00_8026,
		obj_t BgL_arg1z00_8027)
	{
		{	/* Ast/walk.scm 307 */
			{	/* Ast/walk.scm 307 */
				obj_t BgL_res4229z00_9380;

				{	/* Ast/walk.scm 307 */
					obj_t BgL_arg2967z00_9377;

					{	/* Ast/walk.scm 307 */
						BgL_nodez00_bglt BgL_arg2969z00_9378;

						BgL_arg2969z00_9378 =
							(((BgL_returnz00_bglt) COBJECT(
									((BgL_returnz00_bglt) BgL_nz00_8024)))->BgL_valuez00);
						BgL_arg2967z00_9377 =
							PROCEDURE_ENTRY(BgL_pz00_8025) (BgL_pz00_8025,
							((obj_t) BgL_arg2969z00_9378), BgL_arg0z00_8026, BgL_arg1z00_8027,
							BEOA);
					}
					{	/* Ast/walk.scm 307 */
						obj_t BgL_list2968z00_9379;

						BgL_list2968z00_9379 = MAKE_YOUNG_PAIR(BgL_arg2967z00_9377, BNIL);
						BgL_res4229z00_9380 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2968z00_9379);
					}
				}
				return BgL_res4229z00_9380;
			}
		}

	}



/* &walk1*-return1983 */
	obj_t BGl_z62walk1za2zd2return1983z12zzast_walkz00(obj_t BgL_envz00_8028,
		obj_t BgL_nz00_8029, obj_t BgL_pz00_8030, obj_t BgL_arg0z00_8031)
	{
		{	/* Ast/walk.scm 307 */
			{	/* Ast/walk.scm 307 */
				obj_t BgL_res4230z00_9385;

				{	/* Ast/walk.scm 307 */
					obj_t BgL_arg2964z00_9382;

					{	/* Ast/walk.scm 307 */
						BgL_nodez00_bglt BgL_arg2966z00_9383;

						BgL_arg2966z00_9383 =
							(((BgL_returnz00_bglt) COBJECT(
									((BgL_returnz00_bglt) BgL_nz00_8029)))->BgL_valuez00);
						BgL_arg2964z00_9382 =
							PROCEDURE_ENTRY(BgL_pz00_8030) (BgL_pz00_8030,
							((obj_t) BgL_arg2966z00_9383), BgL_arg0z00_8031, BEOA);
					}
					{	/* Ast/walk.scm 307 */
						obj_t BgL_list2965z00_9384;

						BgL_list2965z00_9384 = MAKE_YOUNG_PAIR(BgL_arg2964z00_9382, BNIL);
						BgL_res4230z00_9385 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2965z00_9384);
					}
				}
				return BgL_res4230z00_9385;
			}
		}

	}



/* &walk0*-return1981 */
	obj_t BGl_z62walk0za2zd2return1981z12zzast_walkz00(obj_t BgL_envz00_8032,
		obj_t BgL_nz00_8033, obj_t BgL_pz00_8034)
	{
		{	/* Ast/walk.scm 307 */
			{	/* Ast/walk.scm 307 */
				obj_t BgL_res4231z00_9390;

				{	/* Ast/walk.scm 307 */
					obj_t BgL_arg2960z00_9387;

					{	/* Ast/walk.scm 307 */
						BgL_nodez00_bglt BgL_arg2962z00_9388;

						BgL_arg2962z00_9388 =
							(((BgL_returnz00_bglt) COBJECT(
									((BgL_returnz00_bglt) BgL_nz00_8033)))->BgL_valuez00);
						BgL_arg2960z00_9387 =
							PROCEDURE_ENTRY(BgL_pz00_8034) (BgL_pz00_8034,
							((obj_t) BgL_arg2962z00_9388), BEOA);
					}
					{	/* Ast/walk.scm 307 */
						obj_t BgL_list2961z00_9389;

						BgL_list2961z00_9389 = MAKE_YOUNG_PAIR(BgL_arg2960z00_9387, BNIL);
						BgL_res4231z00_9390 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2961z00_9389);
					}
				}
				return BgL_res4231z00_9390;
			}
		}

	}



/* &walk3-return1979 */
	obj_t BGl_z62walk3zd2return1979zb0zzast_walkz00(obj_t BgL_envz00_8035,
		obj_t BgL_nz00_8036, obj_t BgL_pz00_8037, obj_t BgL_arg0z00_8038,
		obj_t BgL_arg1z00_8039, obj_t BgL_arg2z00_8040)
	{
		{	/* Ast/walk.scm 307 */
			{	/* Ast/walk.scm 307 */
				BgL_nodez00_bglt BgL_arg2958z00_9392;

				BgL_arg2958z00_9392 =
					(((BgL_returnz00_bglt) COBJECT(
							((BgL_returnz00_bglt) BgL_nz00_8036)))->BgL_valuez00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8037) (BgL_pz00_8037,
					((obj_t) BgL_arg2958z00_9392), BgL_arg0z00_8038, BgL_arg1z00_8039,
					BgL_arg2z00_8040, BEOA);
			}
		}

	}



/* &walk2-return1977 */
	obj_t BGl_z62walk2zd2return1977zb0zzast_walkz00(obj_t BgL_envz00_8041,
		obj_t BgL_nz00_8042, obj_t BgL_pz00_8043, obj_t BgL_arg0z00_8044,
		obj_t BgL_arg1z00_8045)
	{
		{	/* Ast/walk.scm 307 */
			{	/* Ast/walk.scm 307 */
				BgL_nodez00_bglt BgL_arg2957z00_9394;

				BgL_arg2957z00_9394 =
					(((BgL_returnz00_bglt) COBJECT(
							((BgL_returnz00_bglt) BgL_nz00_8042)))->BgL_valuez00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8043) (BgL_pz00_8043,
					((obj_t) BgL_arg2957z00_9394), BgL_arg0z00_8044, BgL_arg1z00_8045,
					BEOA);
			}
		}

	}



/* &walk1-return1975 */
	obj_t BGl_z62walk1zd2return1975zb0zzast_walkz00(obj_t BgL_envz00_8046,
		obj_t BgL_nz00_8047, obj_t BgL_pz00_8048, obj_t BgL_arg0z00_8049)
	{
		{	/* Ast/walk.scm 307 */
			{	/* Ast/walk.scm 307 */
				BgL_nodez00_bglt BgL_arg2956z00_9396;

				BgL_arg2956z00_9396 =
					(((BgL_returnz00_bglt) COBJECT(
							((BgL_returnz00_bglt) BgL_nz00_8047)))->BgL_valuez00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8048) (BgL_pz00_8048,
					((obj_t) BgL_arg2956z00_9396), BgL_arg0z00_8049, BEOA);
			}
		}

	}



/* &walk0-return1973 */
	obj_t BGl_z62walk0zd2return1973zb0zzast_walkz00(obj_t BgL_envz00_8050,
		obj_t BgL_nz00_8051, obj_t BgL_pz00_8052)
	{
		{	/* Ast/walk.scm 307 */
			{	/* Ast/walk.scm 307 */
				BgL_nodez00_bglt BgL_arg2955z00_9398;

				BgL_arg2955z00_9398 =
					(((BgL_returnz00_bglt) COBJECT(
							((BgL_returnz00_bglt) BgL_nz00_8051)))->BgL_valuez00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8052) (BgL_pz00_8052,
					((obj_t) BgL_arg2955z00_9398), BEOA);
			}
		}

	}



/* &walk3!-retblock1971 */
	BgL_nodez00_bglt BGl_z62walk3z12zd2retblock1971za2zzast_walkz00(obj_t
		BgL_envz00_8053, obj_t BgL_nz00_8054, obj_t BgL_pz00_8055,
		obj_t BgL_arg0z00_8056, obj_t BgL_arg1z00_8057, obj_t BgL_arg2z00_8058)
	{
		{	/* Ast/walk.scm 306 */
			{
				BgL_nodez00_bglt BgL_auxz00_13266;

				{	/* Ast/walk.scm 306 */
					BgL_nodez00_bglt BgL_arg2954z00_9400;

					BgL_arg2954z00_9400 =
						(((BgL_retblockz00_bglt) COBJECT(
								((BgL_retblockz00_bglt) BgL_nz00_8054)))->BgL_bodyz00);
					BgL_auxz00_13266 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8055) (BgL_pz00_8055,
							((obj_t) BgL_arg2954z00_9400), BgL_arg0z00_8056, BgL_arg1z00_8057,
							BgL_arg2z00_8058, BEOA));
				}
				((((BgL_retblockz00_bglt) COBJECT(
								((BgL_retblockz00_bglt) BgL_nz00_8054)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_13266), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_retblockz00_bglt) BgL_nz00_8054));
		}

	}



/* &walk2!-retblock1969 */
	BgL_nodez00_bglt BGl_z62walk2z12zd2retblock1969za2zzast_walkz00(obj_t
		BgL_envz00_8059, obj_t BgL_nz00_8060, obj_t BgL_pz00_8061,
		obj_t BgL_arg0z00_8062, obj_t BgL_arg1z00_8063)
	{
		{	/* Ast/walk.scm 306 */
			{
				BgL_nodez00_bglt BgL_auxz00_13282;

				{	/* Ast/walk.scm 306 */
					BgL_nodez00_bglt BgL_arg2953z00_9402;

					BgL_arg2953z00_9402 =
						(((BgL_retblockz00_bglt) COBJECT(
								((BgL_retblockz00_bglt) BgL_nz00_8060)))->BgL_bodyz00);
					BgL_auxz00_13282 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8061) (BgL_pz00_8061,
							((obj_t) BgL_arg2953z00_9402), BgL_arg0z00_8062, BgL_arg1z00_8063,
							BEOA));
				}
				((((BgL_retblockz00_bglt) COBJECT(
								((BgL_retblockz00_bglt) BgL_nz00_8060)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_13282), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_retblockz00_bglt) BgL_nz00_8060));
		}

	}



/* &walk1!-retblock1967 */
	BgL_nodez00_bglt BGl_z62walk1z12zd2retblock1967za2zzast_walkz00(obj_t
		BgL_envz00_8064, obj_t BgL_nz00_8065, obj_t BgL_pz00_8066,
		obj_t BgL_arg0z00_8067)
	{
		{	/* Ast/walk.scm 306 */
			{
				BgL_nodez00_bglt BgL_auxz00_13297;

				{	/* Ast/walk.scm 306 */
					BgL_nodez00_bglt BgL_arg2949z00_9404;

					BgL_arg2949z00_9404 =
						(((BgL_retblockz00_bglt) COBJECT(
								((BgL_retblockz00_bglt) BgL_nz00_8065)))->BgL_bodyz00);
					BgL_auxz00_13297 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8066) (BgL_pz00_8066,
							((obj_t) BgL_arg2949z00_9404), BgL_arg0z00_8067, BEOA));
				}
				((((BgL_retblockz00_bglt) COBJECT(
								((BgL_retblockz00_bglt) BgL_nz00_8065)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_13297), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_retblockz00_bglt) BgL_nz00_8065));
		}

	}



/* &walk0!-retblock1965 */
	BgL_nodez00_bglt BGl_z62walk0z12zd2retblock1965za2zzast_walkz00(obj_t
		BgL_envz00_8068, obj_t BgL_nz00_8069, obj_t BgL_pz00_8070)
	{
		{	/* Ast/walk.scm 306 */
			{
				BgL_nodez00_bglt BgL_auxz00_13311;

				{	/* Ast/walk.scm 306 */
					BgL_nodez00_bglt BgL_arg2948z00_9406;

					BgL_arg2948z00_9406 =
						(((BgL_retblockz00_bglt) COBJECT(
								((BgL_retblockz00_bglt) BgL_nz00_8069)))->BgL_bodyz00);
					BgL_auxz00_13311 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8070) (BgL_pz00_8070,
							((obj_t) BgL_arg2948z00_9406), BEOA));
				}
				((((BgL_retblockz00_bglt) COBJECT(
								((BgL_retblockz00_bglt) BgL_nz00_8069)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_13311), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_retblockz00_bglt) BgL_nz00_8069));
		}

	}



/* &walk3*-retblock1963 */
	obj_t BGl_z62walk3za2zd2retblock1963z12zzast_walkz00(obj_t BgL_envz00_8071,
		obj_t BgL_nz00_8072, obj_t BgL_pz00_8073, obj_t BgL_arg0z00_8074,
		obj_t BgL_arg1z00_8075, obj_t BgL_arg2z00_8076)
	{
		{	/* Ast/walk.scm 306 */
			{	/* Ast/walk.scm 306 */
				obj_t BgL_res4232z00_9411;

				{	/* Ast/walk.scm 306 */
					obj_t BgL_arg2945z00_9408;

					{	/* Ast/walk.scm 306 */
						BgL_nodez00_bglt BgL_arg2947z00_9409;

						BgL_arg2947z00_9409 =
							(((BgL_retblockz00_bglt) COBJECT(
									((BgL_retblockz00_bglt) BgL_nz00_8072)))->BgL_bodyz00);
						BgL_arg2945z00_9408 =
							PROCEDURE_ENTRY(BgL_pz00_8073) (BgL_pz00_8073,
							((obj_t) BgL_arg2947z00_9409), BgL_arg0z00_8074, BgL_arg1z00_8075,
							BgL_arg2z00_8076, BEOA);
					}
					{	/* Ast/walk.scm 306 */
						obj_t BgL_list2946z00_9410;

						BgL_list2946z00_9410 = MAKE_YOUNG_PAIR(BgL_arg2945z00_9408, BNIL);
						BgL_res4232z00_9411 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2946z00_9410);
					}
				}
				return BgL_res4232z00_9411;
			}
		}

	}



/* &walk2*-retblock1961 */
	obj_t BGl_z62walk2za2zd2retblock1961z12zzast_walkz00(obj_t BgL_envz00_8077,
		obj_t BgL_nz00_8078, obj_t BgL_pz00_8079, obj_t BgL_arg0z00_8080,
		obj_t BgL_arg1z00_8081)
	{
		{	/* Ast/walk.scm 306 */
			{	/* Ast/walk.scm 306 */
				obj_t BgL_res4233z00_9416;

				{	/* Ast/walk.scm 306 */
					obj_t BgL_arg2942z00_9413;

					{	/* Ast/walk.scm 306 */
						BgL_nodez00_bglt BgL_arg2944z00_9414;

						BgL_arg2944z00_9414 =
							(((BgL_retblockz00_bglt) COBJECT(
									((BgL_retblockz00_bglt) BgL_nz00_8078)))->BgL_bodyz00);
						BgL_arg2942z00_9413 =
							PROCEDURE_ENTRY(BgL_pz00_8079) (BgL_pz00_8079,
							((obj_t) BgL_arg2944z00_9414), BgL_arg0z00_8080, BgL_arg1z00_8081,
							BEOA);
					}
					{	/* Ast/walk.scm 306 */
						obj_t BgL_list2943z00_9415;

						BgL_list2943z00_9415 = MAKE_YOUNG_PAIR(BgL_arg2942z00_9413, BNIL);
						BgL_res4233z00_9416 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2943z00_9415);
					}
				}
				return BgL_res4233z00_9416;
			}
		}

	}



/* &walk1*-retblock1959 */
	obj_t BGl_z62walk1za2zd2retblock1959z12zzast_walkz00(obj_t BgL_envz00_8082,
		obj_t BgL_nz00_8083, obj_t BgL_pz00_8084, obj_t BgL_arg0z00_8085)
	{
		{	/* Ast/walk.scm 306 */
			{	/* Ast/walk.scm 306 */
				obj_t BgL_res4234z00_9421;

				{	/* Ast/walk.scm 306 */
					obj_t BgL_arg2925z00_9418;

					{	/* Ast/walk.scm 306 */
						BgL_nodez00_bglt BgL_arg2941z00_9419;

						BgL_arg2941z00_9419 =
							(((BgL_retblockz00_bglt) COBJECT(
									((BgL_retblockz00_bglt) BgL_nz00_8083)))->BgL_bodyz00);
						BgL_arg2925z00_9418 =
							PROCEDURE_ENTRY(BgL_pz00_8084) (BgL_pz00_8084,
							((obj_t) BgL_arg2941z00_9419), BgL_arg0z00_8085, BEOA);
					}
					{	/* Ast/walk.scm 306 */
						obj_t BgL_list2926z00_9420;

						BgL_list2926z00_9420 = MAKE_YOUNG_PAIR(BgL_arg2925z00_9418, BNIL);
						BgL_res4234z00_9421 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2926z00_9420);
					}
				}
				return BgL_res4234z00_9421;
			}
		}

	}



/* &walk0*-retblock1957 */
	obj_t BGl_z62walk0za2zd2retblock1957z12zzast_walkz00(obj_t BgL_envz00_8086,
		obj_t BgL_nz00_8087, obj_t BgL_pz00_8088)
	{
		{	/* Ast/walk.scm 306 */
			{	/* Ast/walk.scm 306 */
				obj_t BgL_res4235z00_9426;

				{	/* Ast/walk.scm 306 */
					obj_t BgL_arg2915z00_9423;

					{	/* Ast/walk.scm 306 */
						BgL_nodez00_bglt BgL_arg2919z00_9424;

						BgL_arg2919z00_9424 =
							(((BgL_retblockz00_bglt) COBJECT(
									((BgL_retblockz00_bglt) BgL_nz00_8087)))->BgL_bodyz00);
						BgL_arg2915z00_9423 =
							PROCEDURE_ENTRY(BgL_pz00_8088) (BgL_pz00_8088,
							((obj_t) BgL_arg2919z00_9424), BEOA);
					}
					{	/* Ast/walk.scm 306 */
						obj_t BgL_list2916z00_9425;

						BgL_list2916z00_9425 = MAKE_YOUNG_PAIR(BgL_arg2915z00_9423, BNIL);
						BgL_res4235z00_9426 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2916z00_9425);
					}
				}
				return BgL_res4235z00_9426;
			}
		}

	}



/* &walk3-retblock1955 */
	obj_t BGl_z62walk3zd2retblock1955zb0zzast_walkz00(obj_t BgL_envz00_8089,
		obj_t BgL_nz00_8090, obj_t BgL_pz00_8091, obj_t BgL_arg0z00_8092,
		obj_t BgL_arg1z00_8093, obj_t BgL_arg2z00_8094)
	{
		{	/* Ast/walk.scm 306 */
			{	/* Ast/walk.scm 306 */
				BgL_nodez00_bglt BgL_arg2914z00_9428;

				BgL_arg2914z00_9428 =
					(((BgL_retblockz00_bglt) COBJECT(
							((BgL_retblockz00_bglt) BgL_nz00_8090)))->BgL_bodyz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8091) (BgL_pz00_8091,
					((obj_t) BgL_arg2914z00_9428), BgL_arg0z00_8092, BgL_arg1z00_8093,
					BgL_arg2z00_8094, BEOA);
			}
		}

	}



/* &walk2-retblock1953 */
	obj_t BGl_z62walk2zd2retblock1953zb0zzast_walkz00(obj_t BgL_envz00_8095,
		obj_t BgL_nz00_8096, obj_t BgL_pz00_8097, obj_t BgL_arg0z00_8098,
		obj_t BgL_arg1z00_8099)
	{
		{	/* Ast/walk.scm 306 */
			{	/* Ast/walk.scm 306 */
				BgL_nodez00_bglt BgL_arg2913z00_9430;

				BgL_arg2913z00_9430 =
					(((BgL_retblockz00_bglt) COBJECT(
							((BgL_retblockz00_bglt) BgL_nz00_8096)))->BgL_bodyz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8097) (BgL_pz00_8097,
					((obj_t) BgL_arg2913z00_9430), BgL_arg0z00_8098, BgL_arg1z00_8099,
					BEOA);
			}
		}

	}



/* &walk1-retblock1951 */
	obj_t BGl_z62walk1zd2retblock1951zb0zzast_walkz00(obj_t BgL_envz00_8100,
		obj_t BgL_nz00_8101, obj_t BgL_pz00_8102, obj_t BgL_arg0z00_8103)
	{
		{	/* Ast/walk.scm 306 */
			{	/* Ast/walk.scm 306 */
				BgL_nodez00_bglt BgL_arg2912z00_9432;

				BgL_arg2912z00_9432 =
					(((BgL_retblockz00_bglt) COBJECT(
							((BgL_retblockz00_bglt) BgL_nz00_8101)))->BgL_bodyz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8102) (BgL_pz00_8102,
					((obj_t) BgL_arg2912z00_9432), BgL_arg0z00_8103, BEOA);
			}
		}

	}



/* &walk0-retblock1949 */
	obj_t BGl_z62walk0zd2retblock1949zb0zzast_walkz00(obj_t BgL_envz00_8104,
		obj_t BgL_nz00_8105, obj_t BgL_pz00_8106)
	{
		{	/* Ast/walk.scm 306 */
			{	/* Ast/walk.scm 306 */
				BgL_nodez00_bglt BgL_arg2911z00_9434;

				BgL_arg2911z00_9434 =
					(((BgL_retblockz00_bglt) COBJECT(
							((BgL_retblockz00_bglt) BgL_nz00_8105)))->BgL_bodyz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8106) (BgL_pz00_8106,
					((obj_t) BgL_arg2911z00_9434), BEOA);
			}
		}

	}



/* &walk3!-jump-ex-it1947 */
	BgL_nodez00_bglt BGl_z62walk3z12zd2jumpzd2exzd2it1947za2zzast_walkz00(obj_t
		BgL_envz00_8107, obj_t BgL_nz00_8108, obj_t BgL_pz00_8109,
		obj_t BgL_arg0z00_8110, obj_t BgL_arg1z00_8111, obj_t BgL_arg2z00_8112)
	{
		{	/* Ast/walk.scm 305 */
			{
				BgL_nodez00_bglt BgL_auxz00_13400;

				{	/* Ast/walk.scm 305 */
					BgL_nodez00_bglt BgL_arg2907z00_9436;

					BgL_arg2907z00_9436 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8108)))->BgL_exitz00);
					BgL_auxz00_13400 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8109) (BgL_pz00_8109,
							((obj_t) BgL_arg2907z00_9436), BgL_arg0z00_8110, BgL_arg1z00_8111,
							BgL_arg2z00_8112, BEOA));
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8108)))->BgL_exitz00) =
					((BgL_nodez00_bglt) BgL_auxz00_13400), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_13414;

				{	/* Ast/walk.scm 305 */
					BgL_nodez00_bglt BgL_arg2910z00_9437;

					BgL_arg2910z00_9437 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8108)))->BgL_valuez00);
					BgL_auxz00_13414 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8109) (BgL_pz00_8109,
							((obj_t) BgL_arg2910z00_9437), BgL_arg0z00_8110, BgL_arg1z00_8111,
							BgL_arg2z00_8112, BEOA));
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8108)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_13414), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8108));
		}

	}



/* &walk2!-jump-ex-it1945 */
	BgL_nodez00_bglt BGl_z62walk2z12zd2jumpzd2exzd2it1945za2zzast_walkz00(obj_t
		BgL_envz00_8113, obj_t BgL_nz00_8114, obj_t BgL_pz00_8115,
		obj_t BgL_arg0z00_8116, obj_t BgL_arg1z00_8117)
	{
		{	/* Ast/walk.scm 305 */
			{
				BgL_nodez00_bglt BgL_auxz00_13430;

				{	/* Ast/walk.scm 305 */
					BgL_nodez00_bglt BgL_arg2905z00_9439;

					BgL_arg2905z00_9439 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8114)))->BgL_exitz00);
					BgL_auxz00_13430 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8115) (BgL_pz00_8115,
							((obj_t) BgL_arg2905z00_9439), BgL_arg0z00_8116, BgL_arg1z00_8117,
							BEOA));
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8114)))->BgL_exitz00) =
					((BgL_nodez00_bglt) BgL_auxz00_13430), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_13443;

				{	/* Ast/walk.scm 305 */
					BgL_nodez00_bglt BgL_arg2906z00_9440;

					BgL_arg2906z00_9440 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8114)))->BgL_valuez00);
					BgL_auxz00_13443 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8115) (BgL_pz00_8115,
							((obj_t) BgL_arg2906z00_9440), BgL_arg0z00_8116, BgL_arg1z00_8117,
							BEOA));
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8114)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_13443), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8114));
		}

	}



/* &walk1!-jump-ex-it1943 */
	BgL_nodez00_bglt BGl_z62walk1z12zd2jumpzd2exzd2it1943za2zzast_walkz00(obj_t
		BgL_envz00_8118, obj_t BgL_nz00_8119, obj_t BgL_pz00_8120,
		obj_t BgL_arg0z00_8121)
	{
		{	/* Ast/walk.scm 305 */
			{
				BgL_nodez00_bglt BgL_auxz00_13458;

				{	/* Ast/walk.scm 305 */
					BgL_nodez00_bglt BgL_arg2903z00_9442;

					BgL_arg2903z00_9442 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8119)))->BgL_exitz00);
					BgL_auxz00_13458 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8120) (BgL_pz00_8120,
							((obj_t) BgL_arg2903z00_9442), BgL_arg0z00_8121, BEOA));
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8119)))->BgL_exitz00) =
					((BgL_nodez00_bglt) BgL_auxz00_13458), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_13470;

				{	/* Ast/walk.scm 305 */
					BgL_nodez00_bglt BgL_arg2904z00_9443;

					BgL_arg2904z00_9443 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8119)))->BgL_valuez00);
					BgL_auxz00_13470 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8120) (BgL_pz00_8120,
							((obj_t) BgL_arg2904z00_9443), BgL_arg0z00_8121, BEOA));
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8119)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_13470), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8119));
		}

	}



/* &walk0!-jump-ex-it1941 */
	BgL_nodez00_bglt BGl_z62walk0z12zd2jumpzd2exzd2it1941za2zzast_walkz00(obj_t
		BgL_envz00_8122, obj_t BgL_nz00_8123, obj_t BgL_pz00_8124)
	{
		{	/* Ast/walk.scm 305 */
			{
				BgL_nodez00_bglt BgL_auxz00_13484;

				{	/* Ast/walk.scm 305 */
					BgL_nodez00_bglt BgL_arg2901z00_9445;

					BgL_arg2901z00_9445 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8123)))->BgL_exitz00);
					BgL_auxz00_13484 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8124) (BgL_pz00_8124,
							((obj_t) BgL_arg2901z00_9445), BEOA));
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8123)))->BgL_exitz00) =
					((BgL_nodez00_bglt) BgL_auxz00_13484), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_13495;

				{	/* Ast/walk.scm 305 */
					BgL_nodez00_bglt BgL_arg2902z00_9446;

					BgL_arg2902z00_9446 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8123)))->BgL_valuez00);
					BgL_auxz00_13495 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8124) (BgL_pz00_8124,
							((obj_t) BgL_arg2902z00_9446), BEOA));
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8123)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_13495), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8123));
		}

	}



/* &walk3*-jump-ex-it1939 */
	obj_t BGl_z62walk3za2zd2jumpzd2exzd2it1939z12zzast_walkz00(obj_t
		BgL_envz00_8125, obj_t BgL_nz00_8126, obj_t BgL_pz00_8127,
		obj_t BgL_arg0z00_8128, obj_t BgL_arg1z00_8129, obj_t BgL_arg2z00_8130)
	{
		{	/* Ast/walk.scm 305 */
			{	/* Ast/walk.scm 305 */
				obj_t BgL_res4236z00_9452;

				{	/* Ast/walk.scm 305 */
					obj_t BgL_arg2897z00_9448;
					obj_t BgL_arg2898z00_9449;

					{	/* Ast/walk.scm 305 */
						BgL_nodez00_bglt BgL_arg2899z00_9450;

						BgL_arg2899z00_9450 =
							(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8126)))->BgL_exitz00);
						BgL_arg2897z00_9448 =
							PROCEDURE_ENTRY(BgL_pz00_8127) (BgL_pz00_8127,
							((obj_t) BgL_arg2899z00_9450), BgL_arg0z00_8128, BgL_arg1z00_8129,
							BgL_arg2z00_8130, BEOA);
					}
					{	/* Ast/walk.scm 305 */
						BgL_nodez00_bglt BgL_arg2900z00_9451;

						BgL_arg2900z00_9451 =
							(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8126)))->BgL_valuez00);
						BgL_arg2898z00_9449 =
							PROCEDURE_ENTRY(BgL_pz00_8127) (BgL_pz00_8127,
							((obj_t) BgL_arg2900z00_9451), BgL_arg0z00_8128, BgL_arg1z00_8129,
							BgL_arg2z00_8130, BEOA);
					}
					BgL_res4236z00_9452 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg2897z00_9448,
						BgL_arg2898z00_9449);
				}
				return BgL_res4236z00_9452;
			}
		}

	}



/* &walk2*-jump-ex-it1937 */
	obj_t BGl_z62walk2za2zd2jumpzd2exzd2it1937z12zzast_walkz00(obj_t
		BgL_envz00_8131, obj_t BgL_nz00_8132, obj_t BgL_pz00_8133,
		obj_t BgL_arg0z00_8134, obj_t BgL_arg1z00_8135)
	{
		{	/* Ast/walk.scm 305 */
			{	/* Ast/walk.scm 305 */
				obj_t BgL_res4237z00_9458;

				{	/* Ast/walk.scm 305 */
					obj_t BgL_arg2889z00_9454;
					obj_t BgL_arg2894z00_9455;

					{	/* Ast/walk.scm 305 */
						BgL_nodez00_bglt BgL_arg2895z00_9456;

						BgL_arg2895z00_9456 =
							(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8132)))->BgL_exitz00);
						BgL_arg2889z00_9454 =
							PROCEDURE_ENTRY(BgL_pz00_8133) (BgL_pz00_8133,
							((obj_t) BgL_arg2895z00_9456), BgL_arg0z00_8134, BgL_arg1z00_8135,
							BEOA);
					}
					{	/* Ast/walk.scm 305 */
						BgL_nodez00_bglt BgL_arg2896z00_9457;

						BgL_arg2896z00_9457 =
							(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8132)))->BgL_valuez00);
						BgL_arg2894z00_9455 =
							PROCEDURE_ENTRY(BgL_pz00_8133) (BgL_pz00_8133,
							((obj_t) BgL_arg2896z00_9457), BgL_arg0z00_8134, BgL_arg1z00_8135,
							BEOA);
					}
					BgL_res4237z00_9458 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg2889z00_9454,
						BgL_arg2894z00_9455);
				}
				return BgL_res4237z00_9458;
			}
		}

	}



/* &walk1*-jump-ex-it1935 */
	obj_t BGl_z62walk1za2zd2jumpzd2exzd2it1935z12zzast_walkz00(obj_t
		BgL_envz00_8136, obj_t BgL_nz00_8137, obj_t BgL_pz00_8138,
		obj_t BgL_arg0z00_8139)
	{
		{	/* Ast/walk.scm 305 */
			{	/* Ast/walk.scm 305 */
				obj_t BgL_res4238z00_9464;

				{	/* Ast/walk.scm 305 */
					obj_t BgL_arg2885z00_9460;
					obj_t BgL_arg2886z00_9461;

					{	/* Ast/walk.scm 305 */
						BgL_nodez00_bglt BgL_arg2887z00_9462;

						BgL_arg2887z00_9462 =
							(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8137)))->BgL_exitz00);
						BgL_arg2885z00_9460 =
							PROCEDURE_ENTRY(BgL_pz00_8138) (BgL_pz00_8138,
							((obj_t) BgL_arg2887z00_9462), BgL_arg0z00_8139, BEOA);
					}
					{	/* Ast/walk.scm 305 */
						BgL_nodez00_bglt BgL_arg2888z00_9463;

						BgL_arg2888z00_9463 =
							(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8137)))->BgL_valuez00);
						BgL_arg2886z00_9461 =
							PROCEDURE_ENTRY(BgL_pz00_8138) (BgL_pz00_8138,
							((obj_t) BgL_arg2888z00_9463), BgL_arg0z00_8139, BEOA);
					}
					BgL_res4238z00_9464 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg2885z00_9460,
						BgL_arg2886z00_9461);
				}
				return BgL_res4238z00_9464;
			}
		}

	}



/* &walk0*-jump-ex-it1933 */
	obj_t BGl_z62walk0za2zd2jumpzd2exzd2it1933z12zzast_walkz00(obj_t
		BgL_envz00_8140, obj_t BgL_nz00_8141, obj_t BgL_pz00_8142)
	{
		{	/* Ast/walk.scm 305 */
			{	/* Ast/walk.scm 305 */
				obj_t BgL_res4239z00_9470;

				{	/* Ast/walk.scm 305 */
					obj_t BgL_arg2881z00_9466;
					obj_t BgL_arg2882z00_9467;

					{	/* Ast/walk.scm 305 */
						BgL_nodez00_bglt BgL_arg2883z00_9468;

						BgL_arg2883z00_9468 =
							(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8141)))->BgL_exitz00);
						BgL_arg2881z00_9466 =
							PROCEDURE_ENTRY(BgL_pz00_8142) (BgL_pz00_8142,
							((obj_t) BgL_arg2883z00_9468), BEOA);
					}
					{	/* Ast/walk.scm 305 */
						BgL_nodez00_bglt BgL_arg2884z00_9469;

						BgL_arg2884z00_9469 =
							(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8141)))->BgL_valuez00);
						BgL_arg2882z00_9467 =
							PROCEDURE_ENTRY(BgL_pz00_8142) (BgL_pz00_8142,
							((obj_t) BgL_arg2884z00_9469), BEOA);
					}
					BgL_res4239z00_9470 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg2881z00_9466,
						BgL_arg2882z00_9467);
				}
				return BgL_res4239z00_9470;
			}
		}

	}



/* &walk3-jump-ex-it1931 */
	obj_t BGl_z62walk3zd2jumpzd2exzd2it1931zb0zzast_walkz00(obj_t BgL_envz00_8143,
		obj_t BgL_nz00_8144, obj_t BgL_pz00_8145, obj_t BgL_arg0z00_8146,
		obj_t BgL_arg1z00_8147, obj_t BgL_arg2z00_8148)
	{
		{	/* Ast/walk.scm 305 */
			{	/* Ast/walk.scm 305 */
				BgL_nodez00_bglt BgL_arg2877z00_9472;

				BgL_arg2877z00_9472 =
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8144)))->BgL_exitz00);
				PROCEDURE_ENTRY(BgL_pz00_8145) (BgL_pz00_8145,
					((obj_t) BgL_arg2877z00_9472), BgL_arg0z00_8146, BgL_arg1z00_8147,
					BgL_arg2z00_8148, BEOA);
			}
			{	/* Ast/walk.scm 305 */
				BgL_nodez00_bglt BgL_arg2880z00_9473;

				BgL_arg2880z00_9473 =
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8144)))->BgL_valuez00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8145) (BgL_pz00_8145,
					((obj_t) BgL_arg2880z00_9473), BgL_arg0z00_8146, BgL_arg1z00_8147,
					BgL_arg2z00_8148, BEOA);
			}
		}

	}



/* &walk2-jump-ex-it1929 */
	obj_t BGl_z62walk2zd2jumpzd2exzd2it1929zb0zzast_walkz00(obj_t BgL_envz00_8149,
		obj_t BgL_nz00_8150, obj_t BgL_pz00_8151, obj_t BgL_arg0z00_8152,
		obj_t BgL_arg1z00_8153)
	{
		{	/* Ast/walk.scm 305 */
			{	/* Ast/walk.scm 305 */
				BgL_nodez00_bglt BgL_arg2874z00_9475;

				BgL_arg2874z00_9475 =
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8150)))->BgL_exitz00);
				PROCEDURE_ENTRY(BgL_pz00_8151) (BgL_pz00_8151,
					((obj_t) BgL_arg2874z00_9475), BgL_arg0z00_8152, BgL_arg1z00_8153,
					BEOA);
			}
			{	/* Ast/walk.scm 305 */
				BgL_nodez00_bglt BgL_arg2876z00_9476;

				BgL_arg2876z00_9476 =
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8150)))->BgL_valuez00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8151) (BgL_pz00_8151,
					((obj_t) BgL_arg2876z00_9476), BgL_arg0z00_8152, BgL_arg1z00_8153,
					BEOA);
			}
		}

	}



/* &walk1-jump-ex-it1927 */
	obj_t BGl_z62walk1zd2jumpzd2exzd2it1927zb0zzast_walkz00(obj_t BgL_envz00_8154,
		obj_t BgL_nz00_8155, obj_t BgL_pz00_8156, obj_t BgL_arg0z00_8157)
	{
		{	/* Ast/walk.scm 305 */
			{	/* Ast/walk.scm 305 */
				BgL_nodez00_bglt BgL_arg2872z00_9478;

				BgL_arg2872z00_9478 =
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8155)))->BgL_exitz00);
				PROCEDURE_ENTRY(BgL_pz00_8156) (BgL_pz00_8156,
					((obj_t) BgL_arg2872z00_9478), BgL_arg0z00_8157, BEOA);
			}
			{	/* Ast/walk.scm 305 */
				BgL_nodez00_bglt BgL_arg2873z00_9479;

				BgL_arg2873z00_9479 =
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8155)))->BgL_valuez00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8156) (BgL_pz00_8156,
					((obj_t) BgL_arg2873z00_9479), BgL_arg0z00_8157, BEOA);
			}
		}

	}



/* &walk0-jump-ex-it1925 */
	obj_t BGl_z62walk0zd2jumpzd2exzd2it1925zb0zzast_walkz00(obj_t BgL_envz00_8158,
		obj_t BgL_nz00_8159, obj_t BgL_pz00_8160)
	{
		{	/* Ast/walk.scm 305 */
			{	/* Ast/walk.scm 305 */
				BgL_nodez00_bglt BgL_arg2870z00_9481;

				BgL_arg2870z00_9481 =
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8159)))->BgL_exitz00);
				PROCEDURE_ENTRY(BgL_pz00_8160) (BgL_pz00_8160,
					((obj_t) BgL_arg2870z00_9481), BEOA);
			}
			{	/* Ast/walk.scm 305 */
				BgL_nodez00_bglt BgL_arg2871z00_9482;

				BgL_arg2871z00_9482 =
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nz00_8159)))->BgL_valuez00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8160) (BgL_pz00_8160,
					((obj_t) BgL_arg2871z00_9482), BEOA);
			}
		}

	}



/* &walk3!-set-ex-it1923 */
	BgL_nodez00_bglt BGl_z62walk3z12zd2setzd2exzd2it1923za2zzast_walkz00(obj_t
		BgL_envz00_8161, obj_t BgL_nz00_8162, obj_t BgL_pz00_8163,
		obj_t BgL_arg0z00_8164, obj_t BgL_arg1z00_8165, obj_t BgL_arg2z00_8166)
	{
		{	/* Ast/walk.scm 304 */
			{
				BgL_nodez00_bglt BgL_auxz00_13648;

				{	/* Ast/walk.scm 304 */
					BgL_nodez00_bglt BgL_arg2869z00_9484;

					BgL_arg2869z00_9484 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nz00_8162)))->BgL_bodyz00);
					BgL_auxz00_13648 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8163) (BgL_pz00_8163,
							((obj_t) BgL_arg2869z00_9484), BgL_arg0z00_8164, BgL_arg1z00_8165,
							BgL_arg2z00_8166, BEOA));
				}
				((((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nz00_8162)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_13648), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt) BgL_nz00_8162));
		}

	}



/* &walk2!-set-ex-it1921 */
	BgL_nodez00_bglt BGl_z62walk2z12zd2setzd2exzd2it1921za2zzast_walkz00(obj_t
		BgL_envz00_8167, obj_t BgL_nz00_8168, obj_t BgL_pz00_8169,
		obj_t BgL_arg0z00_8170, obj_t BgL_arg1z00_8171)
	{
		{	/* Ast/walk.scm 304 */
			{
				BgL_nodez00_bglt BgL_auxz00_13664;

				{	/* Ast/walk.scm 304 */
					BgL_nodez00_bglt BgL_arg2865z00_9486;

					BgL_arg2865z00_9486 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nz00_8168)))->BgL_bodyz00);
					BgL_auxz00_13664 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8169) (BgL_pz00_8169,
							((obj_t) BgL_arg2865z00_9486), BgL_arg0z00_8170, BgL_arg1z00_8171,
							BEOA));
				}
				((((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nz00_8168)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_13664), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt) BgL_nz00_8168));
		}

	}



/* &walk1!-set-ex-it1919 */
	BgL_nodez00_bglt BGl_z62walk1z12zd2setzd2exzd2it1919za2zzast_walkz00(obj_t
		BgL_envz00_8172, obj_t BgL_nz00_8173, obj_t BgL_pz00_8174,
		obj_t BgL_arg0z00_8175)
	{
		{	/* Ast/walk.scm 304 */
			{
				BgL_nodez00_bglt BgL_auxz00_13679;

				{	/* Ast/walk.scm 304 */
					BgL_nodez00_bglt BgL_arg2864z00_9488;

					BgL_arg2864z00_9488 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nz00_8173)))->BgL_bodyz00);
					BgL_auxz00_13679 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8174) (BgL_pz00_8174,
							((obj_t) BgL_arg2864z00_9488), BgL_arg0z00_8175, BEOA));
				}
				((((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nz00_8173)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_13679), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt) BgL_nz00_8173));
		}

	}



/* &walk0!-set-ex-it1917 */
	BgL_nodez00_bglt BGl_z62walk0z12zd2setzd2exzd2it1917za2zzast_walkz00(obj_t
		BgL_envz00_8176, obj_t BgL_nz00_8177, obj_t BgL_pz00_8178)
	{
		{	/* Ast/walk.scm 304 */
			{
				BgL_nodez00_bglt BgL_auxz00_13693;

				{	/* Ast/walk.scm 304 */
					BgL_nodez00_bglt BgL_arg2863z00_9490;

					BgL_arg2863z00_9490 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nz00_8177)))->BgL_bodyz00);
					BgL_auxz00_13693 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8178) (BgL_pz00_8178,
							((obj_t) BgL_arg2863z00_9490), BEOA));
				}
				((((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nz00_8177)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_13693), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt) BgL_nz00_8177));
		}

	}



/* &walk3*-set-ex-it1915 */
	obj_t BGl_z62walk3za2zd2setzd2exzd2it1915z12zzast_walkz00(obj_t
		BgL_envz00_8179, obj_t BgL_nz00_8180, obj_t BgL_pz00_8181,
		obj_t BgL_arg0z00_8182, obj_t BgL_arg1z00_8183, obj_t BgL_arg2z00_8184)
	{
		{	/* Ast/walk.scm 304 */
			{	/* Ast/walk.scm 304 */
				obj_t BgL_res4240z00_9495;

				{	/* Ast/walk.scm 304 */
					obj_t BgL_arg2860z00_9492;

					{	/* Ast/walk.scm 304 */
						BgL_nodez00_bglt BgL_arg2862z00_9493;

						BgL_arg2862z00_9493 =
							(((BgL_setzd2exzd2itz00_bglt) COBJECT(
									((BgL_setzd2exzd2itz00_bglt) BgL_nz00_8180)))->BgL_bodyz00);
						BgL_arg2860z00_9492 =
							PROCEDURE_ENTRY(BgL_pz00_8181) (BgL_pz00_8181,
							((obj_t) BgL_arg2862z00_9493), BgL_arg0z00_8182, BgL_arg1z00_8183,
							BgL_arg2z00_8184, BEOA);
					}
					{	/* Ast/walk.scm 304 */
						obj_t BgL_list2861z00_9494;

						BgL_list2861z00_9494 = MAKE_YOUNG_PAIR(BgL_arg2860z00_9492, BNIL);
						BgL_res4240z00_9495 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2861z00_9494);
					}
				}
				return BgL_res4240z00_9495;
			}
		}

	}



/* &walk2*-set-ex-it1913 */
	obj_t BGl_z62walk2za2zd2setzd2exzd2it1913z12zzast_walkz00(obj_t
		BgL_envz00_8185, obj_t BgL_nz00_8186, obj_t BgL_pz00_8187,
		obj_t BgL_arg0z00_8188, obj_t BgL_arg1z00_8189)
	{
		{	/* Ast/walk.scm 304 */
			{	/* Ast/walk.scm 304 */
				obj_t BgL_res4241z00_9500;

				{	/* Ast/walk.scm 304 */
					obj_t BgL_arg2857z00_9497;

					{	/* Ast/walk.scm 304 */
						BgL_nodez00_bglt BgL_arg2859z00_9498;

						BgL_arg2859z00_9498 =
							(((BgL_setzd2exzd2itz00_bglt) COBJECT(
									((BgL_setzd2exzd2itz00_bglt) BgL_nz00_8186)))->BgL_bodyz00);
						BgL_arg2857z00_9497 =
							PROCEDURE_ENTRY(BgL_pz00_8187) (BgL_pz00_8187,
							((obj_t) BgL_arg2859z00_9498), BgL_arg0z00_8188, BgL_arg1z00_8189,
							BEOA);
					}
					{	/* Ast/walk.scm 304 */
						obj_t BgL_list2858z00_9499;

						BgL_list2858z00_9499 = MAKE_YOUNG_PAIR(BgL_arg2857z00_9497, BNIL);
						BgL_res4241z00_9500 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2858z00_9499);
					}
				}
				return BgL_res4241z00_9500;
			}
		}

	}



/* &walk1*-set-ex-it1911 */
	obj_t BGl_z62walk1za2zd2setzd2exzd2it1911z12zzast_walkz00(obj_t
		BgL_envz00_8190, obj_t BgL_nz00_8191, obj_t BgL_pz00_8192,
		obj_t BgL_arg0z00_8193)
	{
		{	/* Ast/walk.scm 304 */
			{	/* Ast/walk.scm 304 */
				obj_t BgL_res4242z00_9505;

				{	/* Ast/walk.scm 304 */
					obj_t BgL_arg2851z00_9502;

					{	/* Ast/walk.scm 304 */
						BgL_nodez00_bglt BgL_arg2853z00_9503;

						BgL_arg2853z00_9503 =
							(((BgL_setzd2exzd2itz00_bglt) COBJECT(
									((BgL_setzd2exzd2itz00_bglt) BgL_nz00_8191)))->BgL_bodyz00);
						BgL_arg2851z00_9502 =
							PROCEDURE_ENTRY(BgL_pz00_8192) (BgL_pz00_8192,
							((obj_t) BgL_arg2853z00_9503), BgL_arg0z00_8193, BEOA);
					}
					{	/* Ast/walk.scm 304 */
						obj_t BgL_list2852z00_9504;

						BgL_list2852z00_9504 = MAKE_YOUNG_PAIR(BgL_arg2851z00_9502, BNIL);
						BgL_res4242z00_9505 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2852z00_9504);
					}
				}
				return BgL_res4242z00_9505;
			}
		}

	}



/* &walk0*-set-ex-it1909 */
	obj_t BGl_z62walk0za2zd2setzd2exzd2it1909z12zzast_walkz00(obj_t
		BgL_envz00_8194, obj_t BgL_nz00_8195, obj_t BgL_pz00_8196)
	{
		{	/* Ast/walk.scm 304 */
			{	/* Ast/walk.scm 304 */
				obj_t BgL_res4243z00_9510;

				{	/* Ast/walk.scm 304 */
					obj_t BgL_arg2848z00_9507;

					{	/* Ast/walk.scm 304 */
						BgL_nodez00_bglt BgL_arg2850z00_9508;

						BgL_arg2850z00_9508 =
							(((BgL_setzd2exzd2itz00_bglt) COBJECT(
									((BgL_setzd2exzd2itz00_bglt) BgL_nz00_8195)))->BgL_bodyz00);
						BgL_arg2848z00_9507 =
							PROCEDURE_ENTRY(BgL_pz00_8196) (BgL_pz00_8196,
							((obj_t) BgL_arg2850z00_9508), BEOA);
					}
					{	/* Ast/walk.scm 304 */
						obj_t BgL_list2849z00_9509;

						BgL_list2849z00_9509 = MAKE_YOUNG_PAIR(BgL_arg2848z00_9507, BNIL);
						BgL_res4243z00_9510 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2849z00_9509);
					}
				}
				return BgL_res4243z00_9510;
			}
		}

	}



/* &walk3-set-ex-it1907 */
	obj_t BGl_z62walk3zd2setzd2exzd2it1907zb0zzast_walkz00(obj_t BgL_envz00_8197,
		obj_t BgL_nz00_8198, obj_t BgL_pz00_8199, obj_t BgL_arg0z00_8200,
		obj_t BgL_arg1z00_8201, obj_t BgL_arg2z00_8202)
	{
		{	/* Ast/walk.scm 304 */
			{	/* Ast/walk.scm 304 */
				BgL_nodez00_bglt BgL_arg2847z00_9512;

				BgL_arg2847z00_9512 =
					(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nz00_8198)))->BgL_bodyz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8199) (BgL_pz00_8199,
					((obj_t) BgL_arg2847z00_9512), BgL_arg0z00_8200, BgL_arg1z00_8201,
					BgL_arg2z00_8202, BEOA);
			}
		}

	}



/* &walk2-set-ex-it1905 */
	obj_t BGl_z62walk2zd2setzd2exzd2it1905zb0zzast_walkz00(obj_t BgL_envz00_8203,
		obj_t BgL_nz00_8204, obj_t BgL_pz00_8205, obj_t BgL_arg0z00_8206,
		obj_t BgL_arg1z00_8207)
	{
		{	/* Ast/walk.scm 304 */
			{	/* Ast/walk.scm 304 */
				BgL_nodez00_bglt BgL_arg2846z00_9514;

				BgL_arg2846z00_9514 =
					(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nz00_8204)))->BgL_bodyz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8205) (BgL_pz00_8205,
					((obj_t) BgL_arg2846z00_9514), BgL_arg0z00_8206, BgL_arg1z00_8207,
					BEOA);
			}
		}

	}



/* &walk1-set-ex-it1903 */
	obj_t BGl_z62walk1zd2setzd2exzd2it1903zb0zzast_walkz00(obj_t BgL_envz00_8208,
		obj_t BgL_nz00_8209, obj_t BgL_pz00_8210, obj_t BgL_arg0z00_8211)
	{
		{	/* Ast/walk.scm 304 */
			{	/* Ast/walk.scm 304 */
				BgL_nodez00_bglt BgL_arg2845z00_9516;

				BgL_arg2845z00_9516 =
					(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nz00_8209)))->BgL_bodyz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8210) (BgL_pz00_8210,
					((obj_t) BgL_arg2845z00_9516), BgL_arg0z00_8211, BEOA);
			}
		}

	}



/* &walk0-set-ex-it1901 */
	obj_t BGl_z62walk0zd2setzd2exzd2it1901zb0zzast_walkz00(obj_t BgL_envz00_8212,
		obj_t BgL_nz00_8213, obj_t BgL_pz00_8214)
	{
		{	/* Ast/walk.scm 304 */
			{	/* Ast/walk.scm 304 */
				BgL_nodez00_bglt BgL_arg2839z00_9518;

				BgL_arg2839z00_9518 =
					(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nz00_8213)))->BgL_bodyz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8214) (BgL_pz00_8214,
					((obj_t) BgL_arg2839z00_9518), BEOA);
			}
		}

	}



/* &walk3!-fail1899 */
	BgL_nodez00_bglt BGl_z62walk3z12zd2fail1899za2zzast_walkz00(obj_t
		BgL_envz00_8215, obj_t BgL_nz00_8216, obj_t BgL_pz00_8217,
		obj_t BgL_arg0z00_8218, obj_t BgL_arg1z00_8219, obj_t BgL_arg2z00_8220)
	{
		{	/* Ast/walk.scm 303 */
			{
				BgL_nodez00_bglt BgL_auxz00_13782;

				{	/* Ast/walk.scm 303 */
					BgL_nodez00_bglt BgL_arg2825z00_9520;

					BgL_arg2825z00_9520 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nz00_8216)))->BgL_procz00);
					BgL_auxz00_13782 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8217) (BgL_pz00_8217,
							((obj_t) BgL_arg2825z00_9520), BgL_arg0z00_8218, BgL_arg1z00_8219,
							BgL_arg2z00_8220, BEOA));
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nz00_8216)))->BgL_procz00) =
					((BgL_nodez00_bglt) BgL_auxz00_13782), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_13796;

				{	/* Ast/walk.scm 303 */
					BgL_nodez00_bglt BgL_arg2831z00_9521;

					BgL_arg2831z00_9521 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nz00_8216)))->BgL_msgz00);
					BgL_auxz00_13796 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8217) (BgL_pz00_8217,
							((obj_t) BgL_arg2831z00_9521), BgL_arg0z00_8218, BgL_arg1z00_8219,
							BgL_arg2z00_8220, BEOA));
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nz00_8216)))->BgL_msgz00) =
					((BgL_nodez00_bglt) BgL_auxz00_13796), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_13810;

				{	/* Ast/walk.scm 303 */
					BgL_nodez00_bglt BgL_arg2838z00_9522;

					BgL_arg2838z00_9522 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nz00_8216)))->BgL_objz00);
					BgL_auxz00_13810 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8217) (BgL_pz00_8217,
							((obj_t) BgL_arg2838z00_9522), BgL_arg0z00_8218, BgL_arg1z00_8219,
							BgL_arg2z00_8220, BEOA));
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nz00_8216)))->BgL_objz00) =
					((BgL_nodez00_bglt) BgL_auxz00_13810), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_failz00_bglt) BgL_nz00_8216));
		}

	}



/* &walk2!-fail1897 */
	BgL_nodez00_bglt BGl_z62walk2z12zd2fail1897za2zzast_walkz00(obj_t
		BgL_envz00_8221, obj_t BgL_nz00_8222, obj_t BgL_pz00_8223,
		obj_t BgL_arg0z00_8224, obj_t BgL_arg1z00_8225)
	{
		{	/* Ast/walk.scm 303 */
			{
				BgL_nodez00_bglt BgL_auxz00_13826;

				{	/* Ast/walk.scm 303 */
					BgL_nodez00_bglt BgL_arg2820z00_9524;

					BgL_arg2820z00_9524 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nz00_8222)))->BgL_procz00);
					BgL_auxz00_13826 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8223) (BgL_pz00_8223,
							((obj_t) BgL_arg2820z00_9524), BgL_arg0z00_8224, BgL_arg1z00_8225,
							BEOA));
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nz00_8222)))->BgL_procz00) =
					((BgL_nodez00_bglt) BgL_auxz00_13826), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_13839;

				{	/* Ast/walk.scm 303 */
					BgL_nodez00_bglt BgL_arg2821z00_9525;

					BgL_arg2821z00_9525 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nz00_8222)))->BgL_msgz00);
					BgL_auxz00_13839 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8223) (BgL_pz00_8223,
							((obj_t) BgL_arg2821z00_9525), BgL_arg0z00_8224, BgL_arg1z00_8225,
							BEOA));
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nz00_8222)))->BgL_msgz00) =
					((BgL_nodez00_bglt) BgL_auxz00_13839), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_13852;

				{	/* Ast/walk.scm 303 */
					BgL_nodez00_bglt BgL_arg2824z00_9526;

					BgL_arg2824z00_9526 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nz00_8222)))->BgL_objz00);
					BgL_auxz00_13852 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8223) (BgL_pz00_8223,
							((obj_t) BgL_arg2824z00_9526), BgL_arg0z00_8224, BgL_arg1z00_8225,
							BEOA));
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nz00_8222)))->BgL_objz00) =
					((BgL_nodez00_bglt) BgL_auxz00_13852), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_failz00_bglt) BgL_nz00_8222));
		}

	}



/* &walk1!-fail1895 */
	BgL_nodez00_bglt BGl_z62walk1z12zd2fail1895za2zzast_walkz00(obj_t
		BgL_envz00_8226, obj_t BgL_nz00_8227, obj_t BgL_pz00_8228,
		obj_t BgL_arg0z00_8229)
	{
		{	/* Ast/walk.scm 303 */
			{
				BgL_nodez00_bglt BgL_auxz00_13867;

				{	/* Ast/walk.scm 303 */
					BgL_nodez00_bglt BgL_arg2816z00_9528;

					BgL_arg2816z00_9528 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nz00_8227)))->BgL_procz00);
					BgL_auxz00_13867 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8228) (BgL_pz00_8228,
							((obj_t) BgL_arg2816z00_9528), BgL_arg0z00_8229, BEOA));
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nz00_8227)))->BgL_procz00) =
					((BgL_nodez00_bglt) BgL_auxz00_13867), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_13879;

				{	/* Ast/walk.scm 303 */
					BgL_nodez00_bglt BgL_arg2817z00_9529;

					BgL_arg2817z00_9529 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nz00_8227)))->BgL_msgz00);
					BgL_auxz00_13879 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8228) (BgL_pz00_8228,
							((obj_t) BgL_arg2817z00_9529), BgL_arg0z00_8229, BEOA));
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nz00_8227)))->BgL_msgz00) =
					((BgL_nodez00_bglt) BgL_auxz00_13879), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_13891;

				{	/* Ast/walk.scm 303 */
					BgL_nodez00_bglt BgL_arg2819z00_9530;

					BgL_arg2819z00_9530 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nz00_8227)))->BgL_objz00);
					BgL_auxz00_13891 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8228) (BgL_pz00_8228,
							((obj_t) BgL_arg2819z00_9530), BgL_arg0z00_8229, BEOA));
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nz00_8227)))->BgL_objz00) =
					((BgL_nodez00_bglt) BgL_auxz00_13891), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_failz00_bglt) BgL_nz00_8227));
		}

	}



/* &walk0!-fail1893 */
	BgL_nodez00_bglt BGl_z62walk0z12zd2fail1893za2zzast_walkz00(obj_t
		BgL_envz00_8230, obj_t BgL_nz00_8231, obj_t BgL_pz00_8232)
	{
		{	/* Ast/walk.scm 303 */
			{
				BgL_nodez00_bglt BgL_auxz00_13905;

				{	/* Ast/walk.scm 303 */
					BgL_nodez00_bglt BgL_arg2813z00_9532;

					BgL_arg2813z00_9532 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nz00_8231)))->BgL_procz00);
					BgL_auxz00_13905 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8232) (BgL_pz00_8232,
							((obj_t) BgL_arg2813z00_9532), BEOA));
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nz00_8231)))->BgL_procz00) =
					((BgL_nodez00_bglt) BgL_auxz00_13905), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_13916;

				{	/* Ast/walk.scm 303 */
					BgL_nodez00_bglt BgL_arg2814z00_9533;

					BgL_arg2814z00_9533 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nz00_8231)))->BgL_msgz00);
					BgL_auxz00_13916 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8232) (BgL_pz00_8232,
							((obj_t) BgL_arg2814z00_9533), BEOA));
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nz00_8231)))->BgL_msgz00) =
					((BgL_nodez00_bglt) BgL_auxz00_13916), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_13927;

				{	/* Ast/walk.scm 303 */
					BgL_nodez00_bglt BgL_arg2815z00_9534;

					BgL_arg2815z00_9534 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nz00_8231)))->BgL_objz00);
					BgL_auxz00_13927 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8232) (BgL_pz00_8232,
							((obj_t) BgL_arg2815z00_9534), BEOA));
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nz00_8231)))->BgL_objz00) =
					((BgL_nodez00_bglt) BgL_auxz00_13927), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_failz00_bglt) BgL_nz00_8231));
		}

	}



/* &walk3*-fail1891 */
	obj_t BGl_z62walk3za2zd2fail1891z12zzast_walkz00(obj_t BgL_envz00_8233,
		obj_t BgL_nz00_8234, obj_t BgL_pz00_8235, obj_t BgL_arg0z00_8236,
		obj_t BgL_arg1z00_8237, obj_t BgL_arg2z00_8238)
	{
		{	/* Ast/walk.scm 303 */
			{	/* Ast/walk.scm 303 */
				obj_t BgL_res4244z00_9545;

				{	/* Ast/walk.scm 303 */
					obj_t BgL_arg2801z00_9536;
					obj_t BgL_arg2802z00_9537;
					obj_t BgL_arg2805z00_9538;

					{	/* Ast/walk.scm 303 */
						BgL_nodez00_bglt BgL_arg2809z00_9539;

						BgL_arg2809z00_9539 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nz00_8234)))->BgL_procz00);
						BgL_arg2801z00_9536 =
							PROCEDURE_ENTRY(BgL_pz00_8235) (BgL_pz00_8235,
							((obj_t) BgL_arg2809z00_9539), BgL_arg0z00_8236, BgL_arg1z00_8237,
							BgL_arg2z00_8238, BEOA);
					}
					{	/* Ast/walk.scm 303 */
						BgL_nodez00_bglt BgL_arg2810z00_9540;

						BgL_arg2810z00_9540 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nz00_8234)))->BgL_msgz00);
						BgL_arg2802z00_9537 =
							PROCEDURE_ENTRY(BgL_pz00_8235) (BgL_pz00_8235,
							((obj_t) BgL_arg2810z00_9540), BgL_arg0z00_8236, BgL_arg1z00_8237,
							BgL_arg2z00_8238, BEOA);
					}
					{	/* Ast/walk.scm 303 */
						BgL_nodez00_bglt BgL_arg2812z00_9541;

						BgL_arg2812z00_9541 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nz00_8234)))->BgL_objz00);
						BgL_arg2805z00_9538 =
							PROCEDURE_ENTRY(BgL_pz00_8235) (BgL_pz00_8235,
							((obj_t) BgL_arg2812z00_9541), BgL_arg0z00_8236, BgL_arg1z00_8237,
							BgL_arg2z00_8238, BEOA);
					}
					{	/* Ast/walk.scm 303 */
						obj_t BgL_list2806z00_9542;

						{	/* Ast/walk.scm 303 */
							obj_t BgL_arg2807z00_9543;

							{	/* Ast/walk.scm 303 */
								obj_t BgL_arg2808z00_9544;

								BgL_arg2808z00_9544 =
									MAKE_YOUNG_PAIR(BgL_arg2805z00_9538, BNIL);
								BgL_arg2807z00_9543 =
									MAKE_YOUNG_PAIR(BgL_arg2802z00_9537, BgL_arg2808z00_9544);
							}
							BgL_list2806z00_9542 =
								MAKE_YOUNG_PAIR(BgL_arg2801z00_9536, BgL_arg2807z00_9543);
						}
						BgL_res4244z00_9545 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2806z00_9542);
					}
				}
				return BgL_res4244z00_9545;
			}
		}

	}



/* &walk2*-fail1889 */
	obj_t BGl_z62walk2za2zd2fail1889z12zzast_walkz00(obj_t BgL_envz00_8239,
		obj_t BgL_nz00_8240, obj_t BgL_pz00_8241, obj_t BgL_arg0z00_8242,
		obj_t BgL_arg1z00_8243)
	{
		{	/* Ast/walk.scm 303 */
			{	/* Ast/walk.scm 303 */
				obj_t BgL_res4245z00_9556;

				{	/* Ast/walk.scm 303 */
					obj_t BgL_arg2787z00_9547;
					obj_t BgL_arg2788z00_9548;
					obj_t BgL_arg2789z00_9549;

					{	/* Ast/walk.scm 303 */
						BgL_nodez00_bglt BgL_arg2795z00_9550;

						BgL_arg2795z00_9550 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nz00_8240)))->BgL_procz00);
						BgL_arg2787z00_9547 =
							PROCEDURE_ENTRY(BgL_pz00_8241) (BgL_pz00_8241,
							((obj_t) BgL_arg2795z00_9550), BgL_arg0z00_8242, BgL_arg1z00_8243,
							BEOA);
					}
					{	/* Ast/walk.scm 303 */
						BgL_nodez00_bglt BgL_arg2799z00_9551;

						BgL_arg2799z00_9551 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nz00_8240)))->BgL_msgz00);
						BgL_arg2788z00_9548 =
							PROCEDURE_ENTRY(BgL_pz00_8241) (BgL_pz00_8241,
							((obj_t) BgL_arg2799z00_9551), BgL_arg0z00_8242, BgL_arg1z00_8243,
							BEOA);
					}
					{	/* Ast/walk.scm 303 */
						BgL_nodez00_bglt BgL_arg2800z00_9552;

						BgL_arg2800z00_9552 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nz00_8240)))->BgL_objz00);
						BgL_arg2789z00_9549 =
							PROCEDURE_ENTRY(BgL_pz00_8241) (BgL_pz00_8241,
							((obj_t) BgL_arg2800z00_9552), BgL_arg0z00_8242, BgL_arg1z00_8243,
							BEOA);
					}
					{	/* Ast/walk.scm 303 */
						obj_t BgL_list2790z00_9553;

						{	/* Ast/walk.scm 303 */
							obj_t BgL_arg2791z00_9554;

							{	/* Ast/walk.scm 303 */
								obj_t BgL_arg2792z00_9555;

								BgL_arg2792z00_9555 =
									MAKE_YOUNG_PAIR(BgL_arg2789z00_9549, BNIL);
								BgL_arg2791z00_9554 =
									MAKE_YOUNG_PAIR(BgL_arg2788z00_9548, BgL_arg2792z00_9555);
							}
							BgL_list2790z00_9553 =
								MAKE_YOUNG_PAIR(BgL_arg2787z00_9547, BgL_arg2791z00_9554);
						}
						BgL_res4245z00_9556 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2790z00_9553);
					}
				}
				return BgL_res4245z00_9556;
			}
		}

	}



/* &walk1*-fail1887 */
	obj_t BGl_z62walk1za2zd2fail1887z12zzast_walkz00(obj_t BgL_envz00_8244,
		obj_t BgL_nz00_8245, obj_t BgL_pz00_8246, obj_t BgL_arg0z00_8247)
	{
		{	/* Ast/walk.scm 303 */
			{	/* Ast/walk.scm 303 */
				obj_t BgL_res4246z00_9567;

				{	/* Ast/walk.scm 303 */
					obj_t BgL_arg2770z00_9558;
					obj_t BgL_arg2771z00_9559;
					obj_t BgL_arg2774z00_9560;

					{	/* Ast/walk.scm 303 */
						BgL_nodez00_bglt BgL_arg2782z00_9561;

						BgL_arg2782z00_9561 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nz00_8245)))->BgL_procz00);
						BgL_arg2770z00_9558 =
							PROCEDURE_ENTRY(BgL_pz00_8246) (BgL_pz00_8246,
							((obj_t) BgL_arg2782z00_9561), BgL_arg0z00_8247, BEOA);
					}
					{	/* Ast/walk.scm 303 */
						BgL_nodez00_bglt BgL_arg2783z00_9562;

						BgL_arg2783z00_9562 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nz00_8245)))->BgL_msgz00);
						BgL_arg2771z00_9559 =
							PROCEDURE_ENTRY(BgL_pz00_8246) (BgL_pz00_8246,
							((obj_t) BgL_arg2783z00_9562), BgL_arg0z00_8247, BEOA);
					}
					{	/* Ast/walk.scm 303 */
						BgL_nodez00_bglt BgL_arg2784z00_9563;

						BgL_arg2784z00_9563 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nz00_8245)))->BgL_objz00);
						BgL_arg2774z00_9560 =
							PROCEDURE_ENTRY(BgL_pz00_8246) (BgL_pz00_8246,
							((obj_t) BgL_arg2784z00_9563), BgL_arg0z00_8247, BEOA);
					}
					{	/* Ast/walk.scm 303 */
						obj_t BgL_list2775z00_9564;

						{	/* Ast/walk.scm 303 */
							obj_t BgL_arg2778z00_9565;

							{	/* Ast/walk.scm 303 */
								obj_t BgL_arg2779z00_9566;

								BgL_arg2779z00_9566 =
									MAKE_YOUNG_PAIR(BgL_arg2774z00_9560, BNIL);
								BgL_arg2778z00_9565 =
									MAKE_YOUNG_PAIR(BgL_arg2771z00_9559, BgL_arg2779z00_9566);
							}
							BgL_list2775z00_9564 =
								MAKE_YOUNG_PAIR(BgL_arg2770z00_9558, BgL_arg2778z00_9565);
						}
						BgL_res4246z00_9567 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2775z00_9564);
					}
				}
				return BgL_res4246z00_9567;
			}
		}

	}



/* &walk0*-fail1885 */
	obj_t BGl_z62walk0za2zd2fail1885z12zzast_walkz00(obj_t BgL_envz00_8248,
		obj_t BgL_nz00_8249, obj_t BgL_pz00_8250)
	{
		{	/* Ast/walk.scm 303 */
			{	/* Ast/walk.scm 303 */
				obj_t BgL_res4247z00_9578;

				{	/* Ast/walk.scm 303 */
					obj_t BgL_arg2759z00_9569;
					obj_t BgL_arg2760z00_9570;
					obj_t BgL_arg2762z00_9571;

					{	/* Ast/walk.scm 303 */
						BgL_nodez00_bglt BgL_arg2766z00_9572;

						BgL_arg2766z00_9572 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nz00_8249)))->BgL_procz00);
						BgL_arg2759z00_9569 =
							PROCEDURE_ENTRY(BgL_pz00_8250) (BgL_pz00_8250,
							((obj_t) BgL_arg2766z00_9572), BEOA);
					}
					{	/* Ast/walk.scm 303 */
						BgL_nodez00_bglt BgL_arg2767z00_9573;

						BgL_arg2767z00_9573 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nz00_8249)))->BgL_msgz00);
						BgL_arg2760z00_9570 =
							PROCEDURE_ENTRY(BgL_pz00_8250) (BgL_pz00_8250,
							((obj_t) BgL_arg2767z00_9573), BEOA);
					}
					{	/* Ast/walk.scm 303 */
						BgL_nodez00_bglt BgL_arg2768z00_9574;

						BgL_arg2768z00_9574 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nz00_8249)))->BgL_objz00);
						BgL_arg2762z00_9571 =
							PROCEDURE_ENTRY(BgL_pz00_8250) (BgL_pz00_8250,
							((obj_t) BgL_arg2768z00_9574), BEOA);
					}
					{	/* Ast/walk.scm 303 */
						obj_t BgL_list2763z00_9575;

						{	/* Ast/walk.scm 303 */
							obj_t BgL_arg2764z00_9576;

							{	/* Ast/walk.scm 303 */
								obj_t BgL_arg2765z00_9577;

								BgL_arg2765z00_9577 =
									MAKE_YOUNG_PAIR(BgL_arg2762z00_9571, BNIL);
								BgL_arg2764z00_9576 =
									MAKE_YOUNG_PAIR(BgL_arg2760z00_9570, BgL_arg2765z00_9577);
							}
							BgL_list2763z00_9575 =
								MAKE_YOUNG_PAIR(BgL_arg2759z00_9569, BgL_arg2764z00_9576);
						}
						BgL_res4247z00_9578 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2763z00_9575);
					}
				}
				return BgL_res4247z00_9578;
			}
		}

	}



/* &walk3-fail1883 */
	obj_t BGl_z62walk3zd2fail1883zb0zzast_walkz00(obj_t BgL_envz00_8251,
		obj_t BgL_nz00_8252, obj_t BgL_pz00_8253, obj_t BgL_arg0z00_8254,
		obj_t BgL_arg1z00_8255, obj_t BgL_arg2z00_8256)
	{
		{	/* Ast/walk.scm 303 */
			{	/* Ast/walk.scm 303 */
				BgL_nodez00_bglt BgL_arg2752z00_9580;

				BgL_arg2752z00_9580 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nz00_8252)))->BgL_procz00);
				PROCEDURE_ENTRY(BgL_pz00_8253) (BgL_pz00_8253,
					((obj_t) BgL_arg2752z00_9580), BgL_arg0z00_8254, BgL_arg1z00_8255,
					BgL_arg2z00_8256, BEOA);
			}
			{	/* Ast/walk.scm 303 */
				BgL_nodez00_bglt BgL_arg2753z00_9581;

				BgL_arg2753z00_9581 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nz00_8252)))->BgL_msgz00);
				PROCEDURE_ENTRY(BgL_pz00_8253) (BgL_pz00_8253,
					((obj_t) BgL_arg2753z00_9581), BgL_arg0z00_8254, BgL_arg1z00_8255,
					BgL_arg2z00_8256, BEOA);
			}
			{	/* Ast/walk.scm 303 */
				BgL_nodez00_bglt BgL_arg2756z00_9582;

				BgL_arg2756z00_9582 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nz00_8252)))->BgL_objz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8253) (BgL_pz00_8253,
					((obj_t) BgL_arg2756z00_9582), BgL_arg0z00_8254, BgL_arg1z00_8255,
					BgL_arg2z00_8256, BEOA);
			}
		}

	}



/* &walk2-fail1881 */
	obj_t BGl_z62walk2zd2fail1881zb0zzast_walkz00(obj_t BgL_envz00_8257,
		obj_t BgL_nz00_8258, obj_t BgL_pz00_8259, obj_t BgL_arg0z00_8260,
		obj_t BgL_arg1z00_8261)
	{
		{	/* Ast/walk.scm 303 */
			{	/* Ast/walk.scm 303 */
				BgL_nodez00_bglt BgL_arg2748z00_9584;

				BgL_arg2748z00_9584 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nz00_8258)))->BgL_procz00);
				PROCEDURE_ENTRY(BgL_pz00_8259) (BgL_pz00_8259,
					((obj_t) BgL_arg2748z00_9584), BgL_arg0z00_8260, BgL_arg1z00_8261,
					BEOA);
			}
			{	/* Ast/walk.scm 303 */
				BgL_nodez00_bglt BgL_arg2750z00_9585;

				BgL_arg2750z00_9585 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nz00_8258)))->BgL_msgz00);
				PROCEDURE_ENTRY(BgL_pz00_8259) (BgL_pz00_8259,
					((obj_t) BgL_arg2750z00_9585), BgL_arg0z00_8260, BgL_arg1z00_8261,
					BEOA);
			}
			{	/* Ast/walk.scm 303 */
				BgL_nodez00_bglt BgL_arg2751z00_9586;

				BgL_arg2751z00_9586 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nz00_8258)))->BgL_objz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8259) (BgL_pz00_8259,
					((obj_t) BgL_arg2751z00_9586), BgL_arg0z00_8260, BgL_arg1z00_8261,
					BEOA);
			}
		}

	}



/* &walk1-fail1879 */
	obj_t BGl_z62walk1zd2fail1879zb0zzast_walkz00(obj_t BgL_envz00_8262,
		obj_t BgL_nz00_8263, obj_t BgL_pz00_8264, obj_t BgL_arg0z00_8265)
	{
		{	/* Ast/walk.scm 303 */
			{	/* Ast/walk.scm 303 */
				BgL_nodez00_bglt BgL_arg2745z00_9588;

				BgL_arg2745z00_9588 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nz00_8263)))->BgL_procz00);
				PROCEDURE_ENTRY(BgL_pz00_8264) (BgL_pz00_8264,
					((obj_t) BgL_arg2745z00_9588), BgL_arg0z00_8265, BEOA);
			}
			{	/* Ast/walk.scm 303 */
				BgL_nodez00_bglt BgL_arg2746z00_9589;

				BgL_arg2746z00_9589 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nz00_8263)))->BgL_msgz00);
				PROCEDURE_ENTRY(BgL_pz00_8264) (BgL_pz00_8264,
					((obj_t) BgL_arg2746z00_9589), BgL_arg0z00_8265, BEOA);
			}
			{	/* Ast/walk.scm 303 */
				BgL_nodez00_bglt BgL_arg2747z00_9590;

				BgL_arg2747z00_9590 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nz00_8263)))->BgL_objz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8264) (BgL_pz00_8264,
					((obj_t) BgL_arg2747z00_9590), BgL_arg0z00_8265, BEOA);
			}
		}

	}



/* &walk0-fail1877 */
	obj_t BGl_z62walk0zd2fail1877zb0zzast_walkz00(obj_t BgL_envz00_8266,
		obj_t BgL_nz00_8267, obj_t BgL_pz00_8268)
	{
		{	/* Ast/walk.scm 303 */
			{	/* Ast/walk.scm 303 */
				BgL_nodez00_bglt BgL_arg2740z00_9592;

				BgL_arg2740z00_9592 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nz00_8267)))->BgL_procz00);
				PROCEDURE_ENTRY(BgL_pz00_8268) (BgL_pz00_8268,
					((obj_t) BgL_arg2740z00_9592), BEOA);
			}
			{	/* Ast/walk.scm 303 */
				BgL_nodez00_bglt BgL_arg2742z00_9593;

				BgL_arg2742z00_9593 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nz00_8267)))->BgL_msgz00);
				PROCEDURE_ENTRY(BgL_pz00_8268) (BgL_pz00_8268,
					((obj_t) BgL_arg2742z00_9593), BEOA);
			}
			{	/* Ast/walk.scm 303 */
				BgL_nodez00_bglt BgL_arg2743z00_9594;

				BgL_arg2743z00_9594 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nz00_8267)))->BgL_objz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8268) (BgL_pz00_8268,
					((obj_t) BgL_arg2743z00_9594), BEOA);
			}
		}

	}



/* &walk3!-conditional1875 */
	BgL_nodez00_bglt BGl_z62walk3z12zd2conditional1875za2zzast_walkz00(obj_t
		BgL_envz00_8269, obj_t BgL_nz00_8270, obj_t BgL_pz00_8271,
		obj_t BgL_arg0z00_8272, obj_t BgL_arg1z00_8273, obj_t BgL_arg2z00_8274)
	{
		{	/* Ast/walk.scm 302 */
			{
				BgL_nodez00_bglt BgL_auxz00_14160;

				{	/* Ast/walk.scm 302 */
					BgL_nodez00_bglt BgL_arg2732z00_9596;

					BgL_arg2732z00_9596 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nz00_8270)))->BgL_testz00);
					BgL_auxz00_14160 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8271) (BgL_pz00_8271,
							((obj_t) BgL_arg2732z00_9596), BgL_arg0z00_8272, BgL_arg1z00_8273,
							BgL_arg2z00_8274, BEOA));
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nz00_8270)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_14160), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_14174;

				{	/* Ast/walk.scm 302 */
					BgL_nodez00_bglt BgL_arg2734z00_9597;

					BgL_arg2734z00_9597 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nz00_8270)))->BgL_truez00);
					BgL_auxz00_14174 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8271) (BgL_pz00_8271,
							((obj_t) BgL_arg2734z00_9597), BgL_arg0z00_8272, BgL_arg1z00_8273,
							BgL_arg2z00_8274, BEOA));
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nz00_8270)))->BgL_truez00) =
					((BgL_nodez00_bglt) BgL_auxz00_14174), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_14188;

				{	/* Ast/walk.scm 302 */
					BgL_nodez00_bglt BgL_arg2739z00_9598;

					BgL_arg2739z00_9598 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nz00_8270)))->BgL_falsez00);
					BgL_auxz00_14188 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8271) (BgL_pz00_8271,
							((obj_t) BgL_arg2739z00_9598), BgL_arg0z00_8272, BgL_arg1z00_8273,
							BgL_arg2z00_8274, BEOA));
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nz00_8270)))->BgL_falsez00) =
					((BgL_nodez00_bglt) BgL_auxz00_14188), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt) BgL_nz00_8270));
		}

	}



/* &walk2!-conditional1873 */
	BgL_nodez00_bglt BGl_z62walk2z12zd2conditional1873za2zzast_walkz00(obj_t
		BgL_envz00_8275, obj_t BgL_nz00_8276, obj_t BgL_pz00_8277,
		obj_t BgL_arg0z00_8278, obj_t BgL_arg1z00_8279)
	{
		{	/* Ast/walk.scm 302 */
			{
				BgL_nodez00_bglt BgL_auxz00_14204;

				{	/* Ast/walk.scm 302 */
					BgL_nodez00_bglt BgL_arg2729z00_9600;

					BgL_arg2729z00_9600 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nz00_8276)))->BgL_testz00);
					BgL_auxz00_14204 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8277) (BgL_pz00_8277,
							((obj_t) BgL_arg2729z00_9600), BgL_arg0z00_8278, BgL_arg1z00_8279,
							BEOA));
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nz00_8276)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_14204), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_14217;

				{	/* Ast/walk.scm 302 */
					BgL_nodez00_bglt BgL_arg2730z00_9601;

					BgL_arg2730z00_9601 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nz00_8276)))->BgL_truez00);
					BgL_auxz00_14217 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8277) (BgL_pz00_8277,
							((obj_t) BgL_arg2730z00_9601), BgL_arg0z00_8278, BgL_arg1z00_8279,
							BEOA));
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nz00_8276)))->BgL_truez00) =
					((BgL_nodez00_bglt) BgL_auxz00_14217), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_14230;

				{	/* Ast/walk.scm 302 */
					BgL_nodez00_bglt BgL_arg2731z00_9602;

					BgL_arg2731z00_9602 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nz00_8276)))->BgL_falsez00);
					BgL_auxz00_14230 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8277) (BgL_pz00_8277,
							((obj_t) BgL_arg2731z00_9602), BgL_arg0z00_8278, BgL_arg1z00_8279,
							BEOA));
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nz00_8276)))->BgL_falsez00) =
					((BgL_nodez00_bglt) BgL_auxz00_14230), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt) BgL_nz00_8276));
		}

	}



/* &walk1!-conditional1871 */
	BgL_nodez00_bglt BGl_z62walk1z12zd2conditional1871za2zzast_walkz00(obj_t
		BgL_envz00_8280, obj_t BgL_nz00_8281, obj_t BgL_pz00_8282,
		obj_t BgL_arg0z00_8283)
	{
		{	/* Ast/walk.scm 302 */
			{
				BgL_nodez00_bglt BgL_auxz00_14245;

				{	/* Ast/walk.scm 302 */
					BgL_nodez00_bglt BgL_arg2725z00_9604;

					BgL_arg2725z00_9604 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nz00_8281)))->BgL_testz00);
					BgL_auxz00_14245 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8282) (BgL_pz00_8282,
							((obj_t) BgL_arg2725z00_9604), BgL_arg0z00_8283, BEOA));
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nz00_8281)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_14245), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_14257;

				{	/* Ast/walk.scm 302 */
					BgL_nodez00_bglt BgL_arg2727z00_9605;

					BgL_arg2727z00_9605 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nz00_8281)))->BgL_truez00);
					BgL_auxz00_14257 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8282) (BgL_pz00_8282,
							((obj_t) BgL_arg2727z00_9605), BgL_arg0z00_8283, BEOA));
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nz00_8281)))->BgL_truez00) =
					((BgL_nodez00_bglt) BgL_auxz00_14257), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_14269;

				{	/* Ast/walk.scm 302 */
					BgL_nodez00_bglt BgL_arg2728z00_9606;

					BgL_arg2728z00_9606 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nz00_8281)))->BgL_falsez00);
					BgL_auxz00_14269 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8282) (BgL_pz00_8282,
							((obj_t) BgL_arg2728z00_9606), BgL_arg0z00_8283, BEOA));
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nz00_8281)))->BgL_falsez00) =
					((BgL_nodez00_bglt) BgL_auxz00_14269), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt) BgL_nz00_8281));
		}

	}



/* &walk0!-conditional1869 */
	BgL_nodez00_bglt BGl_z62walk0z12zd2conditional1869za2zzast_walkz00(obj_t
		BgL_envz00_8284, obj_t BgL_nz00_8285, obj_t BgL_pz00_8286)
	{
		{	/* Ast/walk.scm 302 */
			{
				BgL_nodez00_bglt BgL_auxz00_14283;

				{	/* Ast/walk.scm 302 */
					BgL_nodez00_bglt BgL_arg2722z00_9608;

					BgL_arg2722z00_9608 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nz00_8285)))->BgL_testz00);
					BgL_auxz00_14283 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8286) (BgL_pz00_8286,
							((obj_t) BgL_arg2722z00_9608), BEOA));
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nz00_8285)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_14283), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_14294;

				{	/* Ast/walk.scm 302 */
					BgL_nodez00_bglt BgL_arg2723z00_9609;

					BgL_arg2723z00_9609 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nz00_8285)))->BgL_truez00);
					BgL_auxz00_14294 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8286) (BgL_pz00_8286,
							((obj_t) BgL_arg2723z00_9609), BEOA));
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nz00_8285)))->BgL_truez00) =
					((BgL_nodez00_bglt) BgL_auxz00_14294), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_14305;

				{	/* Ast/walk.scm 302 */
					BgL_nodez00_bglt BgL_arg2724z00_9610;

					BgL_arg2724z00_9610 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nz00_8285)))->BgL_falsez00);
					BgL_auxz00_14305 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8286) (BgL_pz00_8286,
							((obj_t) BgL_arg2724z00_9610), BEOA));
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nz00_8285)))->BgL_falsez00) =
					((BgL_nodez00_bglt) BgL_auxz00_14305), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt) BgL_nz00_8285));
		}

	}



/* &walk3*-conditional1867 */
	obj_t BGl_z62walk3za2zd2conditional1867z12zzast_walkz00(obj_t BgL_envz00_8287,
		obj_t BgL_nz00_8288, obj_t BgL_pz00_8289, obj_t BgL_arg0z00_8290,
		obj_t BgL_arg1z00_8291, obj_t BgL_arg2z00_8292)
	{
		{	/* Ast/walk.scm 302 */
			{	/* Ast/walk.scm 302 */
				obj_t BgL_res4248z00_9621;

				{	/* Ast/walk.scm 302 */
					obj_t BgL_arg2710z00_9612;
					obj_t BgL_arg2712z00_9613;
					obj_t BgL_arg2713z00_9614;

					{	/* Ast/walk.scm 302 */
						BgL_nodez00_bglt BgL_arg2717z00_9615;

						BgL_arg2717z00_9615 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nz00_8288)))->BgL_testz00);
						BgL_arg2710z00_9612 =
							PROCEDURE_ENTRY(BgL_pz00_8289) (BgL_pz00_8289,
							((obj_t) BgL_arg2717z00_9615), BgL_arg0z00_8290, BgL_arg1z00_8291,
							BgL_arg2z00_8292, BEOA);
					}
					{	/* Ast/walk.scm 302 */
						BgL_nodez00_bglt BgL_arg2718z00_9616;

						BgL_arg2718z00_9616 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nz00_8288)))->BgL_truez00);
						BgL_arg2712z00_9613 =
							PROCEDURE_ENTRY(BgL_pz00_8289) (BgL_pz00_8289,
							((obj_t) BgL_arg2718z00_9616), BgL_arg0z00_8290, BgL_arg1z00_8291,
							BgL_arg2z00_8292, BEOA);
					}
					{	/* Ast/walk.scm 302 */
						BgL_nodez00_bglt BgL_arg2720z00_9617;

						BgL_arg2720z00_9617 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nz00_8288)))->BgL_falsez00);
						BgL_arg2713z00_9614 =
							PROCEDURE_ENTRY(BgL_pz00_8289) (BgL_pz00_8289,
							((obj_t) BgL_arg2720z00_9617), BgL_arg0z00_8290, BgL_arg1z00_8291,
							BgL_arg2z00_8292, BEOA);
					}
					{	/* Ast/walk.scm 302 */
						obj_t BgL_list2714z00_9618;

						{	/* Ast/walk.scm 302 */
							obj_t BgL_arg2715z00_9619;

							{	/* Ast/walk.scm 302 */
								obj_t BgL_arg2716z00_9620;

								BgL_arg2716z00_9620 =
									MAKE_YOUNG_PAIR(BgL_arg2713z00_9614, BNIL);
								BgL_arg2715z00_9619 =
									MAKE_YOUNG_PAIR(BgL_arg2712z00_9613, BgL_arg2716z00_9620);
							}
							BgL_list2714z00_9618 =
								MAKE_YOUNG_PAIR(BgL_arg2710z00_9612, BgL_arg2715z00_9619);
						}
						BgL_res4248z00_9621 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2714z00_9618);
					}
				}
				return BgL_res4248z00_9621;
			}
		}

	}



/* &walk2*-conditional1865 */
	obj_t BGl_z62walk2za2zd2conditional1865z12zzast_walkz00(obj_t BgL_envz00_8293,
		obj_t BgL_nz00_8294, obj_t BgL_pz00_8295, obj_t BgL_arg0z00_8296,
		obj_t BgL_arg1z00_8297)
	{
		{	/* Ast/walk.scm 302 */
			{	/* Ast/walk.scm 302 */
				obj_t BgL_res4249z00_9632;

				{	/* Ast/walk.scm 302 */
					obj_t BgL_arg2700z00_9623;
					obj_t BgL_arg2702z00_9624;
					obj_t BgL_arg2703z00_9625;

					{	/* Ast/walk.scm 302 */
						BgL_nodez00_bglt BgL_arg2707z00_9626;

						BgL_arg2707z00_9626 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nz00_8294)))->BgL_testz00);
						BgL_arg2700z00_9623 =
							PROCEDURE_ENTRY(BgL_pz00_8295) (BgL_pz00_8295,
							((obj_t) BgL_arg2707z00_9626), BgL_arg0z00_8296, BgL_arg1z00_8297,
							BEOA);
					}
					{	/* Ast/walk.scm 302 */
						BgL_nodez00_bglt BgL_arg2708z00_9627;

						BgL_arg2708z00_9627 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nz00_8294)))->BgL_truez00);
						BgL_arg2702z00_9624 =
							PROCEDURE_ENTRY(BgL_pz00_8295) (BgL_pz00_8295,
							((obj_t) BgL_arg2708z00_9627), BgL_arg0z00_8296, BgL_arg1z00_8297,
							BEOA);
					}
					{	/* Ast/walk.scm 302 */
						BgL_nodez00_bglt BgL_arg2709z00_9628;

						BgL_arg2709z00_9628 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nz00_8294)))->BgL_falsez00);
						BgL_arg2703z00_9625 =
							PROCEDURE_ENTRY(BgL_pz00_8295) (BgL_pz00_8295,
							((obj_t) BgL_arg2709z00_9628), BgL_arg0z00_8296, BgL_arg1z00_8297,
							BEOA);
					}
					{	/* Ast/walk.scm 302 */
						obj_t BgL_list2704z00_9629;

						{	/* Ast/walk.scm 302 */
							obj_t BgL_arg2705z00_9630;

							{	/* Ast/walk.scm 302 */
								obj_t BgL_arg2706z00_9631;

								BgL_arg2706z00_9631 =
									MAKE_YOUNG_PAIR(BgL_arg2703z00_9625, BNIL);
								BgL_arg2705z00_9630 =
									MAKE_YOUNG_PAIR(BgL_arg2702z00_9624, BgL_arg2706z00_9631);
							}
							BgL_list2704z00_9629 =
								MAKE_YOUNG_PAIR(BgL_arg2700z00_9623, BgL_arg2705z00_9630);
						}
						BgL_res4249z00_9632 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2704z00_9629);
					}
				}
				return BgL_res4249z00_9632;
			}
		}

	}



/* &walk1*-conditional1863 */
	obj_t BGl_z62walk1za2zd2conditional1863z12zzast_walkz00(obj_t BgL_envz00_8298,
		obj_t BgL_nz00_8299, obj_t BgL_pz00_8300, obj_t BgL_arg0z00_8301)
	{
		{	/* Ast/walk.scm 302 */
			{	/* Ast/walk.scm 302 */
				obj_t BgL_res4250z00_9643;

				{	/* Ast/walk.scm 302 */
					obj_t BgL_arg2690z00_9634;
					obj_t BgL_arg2691z00_9635;
					obj_t BgL_arg2692z00_9636;

					{	/* Ast/walk.scm 302 */
						BgL_nodez00_bglt BgL_arg2696z00_9637;

						BgL_arg2696z00_9637 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nz00_8299)))->BgL_testz00);
						BgL_arg2690z00_9634 =
							PROCEDURE_ENTRY(BgL_pz00_8300) (BgL_pz00_8300,
							((obj_t) BgL_arg2696z00_9637), BgL_arg0z00_8301, BEOA);
					}
					{	/* Ast/walk.scm 302 */
						BgL_nodez00_bglt BgL_arg2698z00_9638;

						BgL_arg2698z00_9638 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nz00_8299)))->BgL_truez00);
						BgL_arg2691z00_9635 =
							PROCEDURE_ENTRY(BgL_pz00_8300) (BgL_pz00_8300,
							((obj_t) BgL_arg2698z00_9638), BgL_arg0z00_8301, BEOA);
					}
					{	/* Ast/walk.scm 302 */
						BgL_nodez00_bglt BgL_arg2699z00_9639;

						BgL_arg2699z00_9639 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nz00_8299)))->BgL_falsez00);
						BgL_arg2692z00_9636 =
							PROCEDURE_ENTRY(BgL_pz00_8300) (BgL_pz00_8300,
							((obj_t) BgL_arg2699z00_9639), BgL_arg0z00_8301, BEOA);
					}
					{	/* Ast/walk.scm 302 */
						obj_t BgL_list2693z00_9640;

						{	/* Ast/walk.scm 302 */
							obj_t BgL_arg2694z00_9641;

							{	/* Ast/walk.scm 302 */
								obj_t BgL_arg2695z00_9642;

								BgL_arg2695z00_9642 =
									MAKE_YOUNG_PAIR(BgL_arg2692z00_9636, BNIL);
								BgL_arg2694z00_9641 =
									MAKE_YOUNG_PAIR(BgL_arg2691z00_9635, BgL_arg2695z00_9642);
							}
							BgL_list2693z00_9640 =
								MAKE_YOUNG_PAIR(BgL_arg2690z00_9634, BgL_arg2694z00_9641);
						}
						BgL_res4250z00_9643 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2693z00_9640);
					}
				}
				return BgL_res4250z00_9643;
			}
		}

	}



/* &walk0*-conditional1861 */
	obj_t BGl_z62walk0za2zd2conditional1861z12zzast_walkz00(obj_t BgL_envz00_8302,
		obj_t BgL_nz00_8303, obj_t BgL_pz00_8304)
	{
		{	/* Ast/walk.scm 302 */
			{	/* Ast/walk.scm 302 */
				obj_t BgL_res4251z00_9654;

				{	/* Ast/walk.scm 302 */
					obj_t BgL_arg2680z00_9645;
					obj_t BgL_arg2681z00_9646;
					obj_t BgL_arg2682z00_9647;

					{	/* Ast/walk.scm 302 */
						BgL_nodez00_bglt BgL_arg2687z00_9648;

						BgL_arg2687z00_9648 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nz00_8303)))->BgL_testz00);
						BgL_arg2680z00_9645 =
							PROCEDURE_ENTRY(BgL_pz00_8304) (BgL_pz00_8304,
							((obj_t) BgL_arg2687z00_9648), BEOA);
					}
					{	/* Ast/walk.scm 302 */
						BgL_nodez00_bglt BgL_arg2688z00_9649;

						BgL_arg2688z00_9649 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nz00_8303)))->BgL_truez00);
						BgL_arg2681z00_9646 =
							PROCEDURE_ENTRY(BgL_pz00_8304) (BgL_pz00_8304,
							((obj_t) BgL_arg2688z00_9649), BEOA);
					}
					{	/* Ast/walk.scm 302 */
						BgL_nodez00_bglt BgL_arg2689z00_9650;

						BgL_arg2689z00_9650 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nz00_8303)))->BgL_falsez00);
						BgL_arg2682z00_9647 =
							PROCEDURE_ENTRY(BgL_pz00_8304) (BgL_pz00_8304,
							((obj_t) BgL_arg2689z00_9650), BEOA);
					}
					{	/* Ast/walk.scm 302 */
						obj_t BgL_list2683z00_9651;

						{	/* Ast/walk.scm 302 */
							obj_t BgL_arg2684z00_9652;

							{	/* Ast/walk.scm 302 */
								obj_t BgL_arg2686z00_9653;

								BgL_arg2686z00_9653 =
									MAKE_YOUNG_PAIR(BgL_arg2682z00_9647, BNIL);
								BgL_arg2684z00_9652 =
									MAKE_YOUNG_PAIR(BgL_arg2681z00_9646, BgL_arg2686z00_9653);
							}
							BgL_list2683z00_9651 =
								MAKE_YOUNG_PAIR(BgL_arg2680z00_9645, BgL_arg2684z00_9652);
						}
						BgL_res4251z00_9654 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2683z00_9651);
					}
				}
				return BgL_res4251z00_9654;
			}
		}

	}



/* &walk3-conditional1859 */
	obj_t BGl_z62walk3zd2conditional1859zb0zzast_walkz00(obj_t BgL_envz00_8305,
		obj_t BgL_nz00_8306, obj_t BgL_pz00_8307, obj_t BgL_arg0z00_8308,
		obj_t BgL_arg1z00_8309, obj_t BgL_arg2z00_8310)
	{
		{	/* Ast/walk.scm 302 */
			{	/* Ast/walk.scm 302 */
				BgL_nodez00_bglt BgL_arg2677z00_9656;

				BgL_arg2677z00_9656 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nz00_8306)))->BgL_testz00);
				PROCEDURE_ENTRY(BgL_pz00_8307) (BgL_pz00_8307,
					((obj_t) BgL_arg2677z00_9656), BgL_arg0z00_8308, BgL_arg1z00_8309,
					BgL_arg2z00_8310, BEOA);
			}
			{	/* Ast/walk.scm 302 */
				BgL_nodez00_bglt BgL_arg2678z00_9657;

				BgL_arg2678z00_9657 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nz00_8306)))->BgL_truez00);
				PROCEDURE_ENTRY(BgL_pz00_8307) (BgL_pz00_8307,
					((obj_t) BgL_arg2678z00_9657), BgL_arg0z00_8308, BgL_arg1z00_8309,
					BgL_arg2z00_8310, BEOA);
			}
			{	/* Ast/walk.scm 302 */
				BgL_nodez00_bglt BgL_arg2679z00_9658;

				BgL_arg2679z00_9658 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nz00_8306)))->BgL_falsez00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8307) (BgL_pz00_8307,
					((obj_t) BgL_arg2679z00_9658), BgL_arg0z00_8308, BgL_arg1z00_8309,
					BgL_arg2z00_8310, BEOA);
			}
		}

	}



/* &walk2-conditional1857 */
	obj_t BGl_z62walk2zd2conditional1857zb0zzast_walkz00(obj_t BgL_envz00_8311,
		obj_t BgL_nz00_8312, obj_t BgL_pz00_8313, obj_t BgL_arg0z00_8314,
		obj_t BgL_arg1z00_8315)
	{
		{	/* Ast/walk.scm 302 */
			{	/* Ast/walk.scm 302 */
				BgL_nodez00_bglt BgL_arg2673z00_9660;

				BgL_arg2673z00_9660 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nz00_8312)))->BgL_testz00);
				PROCEDURE_ENTRY(BgL_pz00_8313) (BgL_pz00_8313,
					((obj_t) BgL_arg2673z00_9660), BgL_arg0z00_8314, BgL_arg1z00_8315,
					BEOA);
			}
			{	/* Ast/walk.scm 302 */
				BgL_nodez00_bglt BgL_arg2675z00_9661;

				BgL_arg2675z00_9661 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nz00_8312)))->BgL_truez00);
				PROCEDURE_ENTRY(BgL_pz00_8313) (BgL_pz00_8313,
					((obj_t) BgL_arg2675z00_9661), BgL_arg0z00_8314, BgL_arg1z00_8315,
					BEOA);
			}
			{	/* Ast/walk.scm 302 */
				BgL_nodez00_bglt BgL_arg2676z00_9662;

				BgL_arg2676z00_9662 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nz00_8312)))->BgL_falsez00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8313) (BgL_pz00_8313,
					((obj_t) BgL_arg2676z00_9662), BgL_arg0z00_8314, BgL_arg1z00_8315,
					BEOA);
			}
		}

	}



/* &walk1-conditional1855 */
	obj_t BGl_z62walk1zd2conditional1855zb0zzast_walkz00(obj_t BgL_envz00_8316,
		obj_t BgL_nz00_8317, obj_t BgL_pz00_8318, obj_t BgL_arg0z00_8319)
	{
		{	/* Ast/walk.scm 302 */
			{	/* Ast/walk.scm 302 */
				BgL_nodez00_bglt BgL_arg2669z00_9664;

				BgL_arg2669z00_9664 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nz00_8317)))->BgL_testz00);
				PROCEDURE_ENTRY(BgL_pz00_8318) (BgL_pz00_8318,
					((obj_t) BgL_arg2669z00_9664), BgL_arg0z00_8319, BEOA);
			}
			{	/* Ast/walk.scm 302 */
				BgL_nodez00_bglt BgL_arg2670z00_9665;

				BgL_arg2670z00_9665 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nz00_8317)))->BgL_truez00);
				PROCEDURE_ENTRY(BgL_pz00_8318) (BgL_pz00_8318,
					((obj_t) BgL_arg2670z00_9665), BgL_arg0z00_8319, BEOA);
			}
			{	/* Ast/walk.scm 302 */
				BgL_nodez00_bglt BgL_arg2671z00_9666;

				BgL_arg2671z00_9666 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nz00_8317)))->BgL_falsez00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8318) (BgL_pz00_8318,
					((obj_t) BgL_arg2671z00_9666), BgL_arg0z00_8319, BEOA);
			}
		}

	}



/* &walk0-conditional1853 */
	obj_t BGl_z62walk0zd2conditional1853zb0zzast_walkz00(obj_t BgL_envz00_8320,
		obj_t BgL_nz00_8321, obj_t BgL_pz00_8322)
	{
		{	/* Ast/walk.scm 302 */
			{	/* Ast/walk.scm 302 */
				BgL_nodez00_bglt BgL_arg2665z00_9668;

				BgL_arg2665z00_9668 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nz00_8321)))->BgL_testz00);
				PROCEDURE_ENTRY(BgL_pz00_8322) (BgL_pz00_8322,
					((obj_t) BgL_arg2665z00_9668), BEOA);
			}
			{	/* Ast/walk.scm 302 */
				BgL_nodez00_bglt BgL_arg2666z00_9669;

				BgL_arg2666z00_9669 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nz00_8321)))->BgL_truez00);
				PROCEDURE_ENTRY(BgL_pz00_8322) (BgL_pz00_8322,
					((obj_t) BgL_arg2666z00_9669), BEOA);
			}
			{	/* Ast/walk.scm 302 */
				BgL_nodez00_bglt BgL_arg2667z00_9670;

				BgL_arg2667z00_9670 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nz00_8321)))->BgL_falsez00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8322) (BgL_pz00_8322,
					((obj_t) BgL_arg2667z00_9670), BEOA);
			}
		}

	}



/* &walk3!-setq1851 */
	BgL_nodez00_bglt BGl_z62walk3z12zd2setq1851za2zzast_walkz00(obj_t
		BgL_envz00_8323, obj_t BgL_nz00_8324, obj_t BgL_pz00_8325,
		obj_t BgL_arg0z00_8326, obj_t BgL_arg1z00_8327, obj_t BgL_arg2z00_8328)
	{
		{	/* Ast/walk.scm 301 */
			{
				BgL_varz00_bglt BgL_auxz00_14538;

				{	/* Ast/walk.scm 301 */
					BgL_varz00_bglt BgL_arg2663z00_9672;

					BgL_arg2663z00_9672 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nz00_8324)))->BgL_varz00);
					BgL_auxz00_14538 =
						((BgL_varz00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8325) (BgL_pz00_8325,
							((obj_t) BgL_arg2663z00_9672), BgL_arg0z00_8326, BgL_arg1z00_8327,
							BgL_arg2z00_8328, BEOA));
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nz00_8324)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_14538), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_14552;

				{	/* Ast/walk.scm 301 */
					BgL_nodez00_bglt BgL_arg2664z00_9673;

					BgL_arg2664z00_9673 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nz00_8324)))->BgL_valuez00);
					BgL_auxz00_14552 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8325) (BgL_pz00_8325,
							((obj_t) BgL_arg2664z00_9673), BgL_arg0z00_8326, BgL_arg1z00_8327,
							BgL_arg2z00_8328, BEOA));
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nz00_8324)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_14552), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_setqz00_bglt) BgL_nz00_8324));
		}

	}



/* &walk2!-setq1849 */
	BgL_nodez00_bglt BGl_z62walk2z12zd2setq1849za2zzast_walkz00(obj_t
		BgL_envz00_8329, obj_t BgL_nz00_8330, obj_t BgL_pz00_8331,
		obj_t BgL_arg0z00_8332, obj_t BgL_arg1z00_8333)
	{
		{	/* Ast/walk.scm 301 */
			{
				BgL_varz00_bglt BgL_auxz00_14568;

				{	/* Ast/walk.scm 301 */
					BgL_varz00_bglt BgL_arg2661z00_9675;

					BgL_arg2661z00_9675 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nz00_8330)))->BgL_varz00);
					BgL_auxz00_14568 =
						((BgL_varz00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8331) (BgL_pz00_8331,
							((obj_t) BgL_arg2661z00_9675), BgL_arg0z00_8332, BgL_arg1z00_8333,
							BEOA));
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nz00_8330)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_14568), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_14581;

				{	/* Ast/walk.scm 301 */
					BgL_nodez00_bglt BgL_arg2662z00_9676;

					BgL_arg2662z00_9676 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nz00_8330)))->BgL_valuez00);
					BgL_auxz00_14581 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8331) (BgL_pz00_8331,
							((obj_t) BgL_arg2662z00_9676), BgL_arg0z00_8332, BgL_arg1z00_8333,
							BEOA));
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nz00_8330)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_14581), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_setqz00_bglt) BgL_nz00_8330));
		}

	}



/* &walk1!-setq1847 */
	BgL_nodez00_bglt BGl_z62walk1z12zd2setq1847za2zzast_walkz00(obj_t
		BgL_envz00_8334, obj_t BgL_nz00_8335, obj_t BgL_pz00_8336,
		obj_t BgL_arg0z00_8337)
	{
		{	/* Ast/walk.scm 301 */
			{
				BgL_varz00_bglt BgL_auxz00_14596;

				{	/* Ast/walk.scm 301 */
					BgL_varz00_bglt BgL_arg2658z00_9678;

					BgL_arg2658z00_9678 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nz00_8335)))->BgL_varz00);
					BgL_auxz00_14596 =
						((BgL_varz00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8336) (BgL_pz00_8336,
							((obj_t) BgL_arg2658z00_9678), BgL_arg0z00_8337, BEOA));
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nz00_8335)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_14596), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_14608;

				{	/* Ast/walk.scm 301 */
					BgL_nodez00_bglt BgL_arg2659z00_9679;

					BgL_arg2659z00_9679 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nz00_8335)))->BgL_valuez00);
					BgL_auxz00_14608 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8336) (BgL_pz00_8336,
							((obj_t) BgL_arg2659z00_9679), BgL_arg0z00_8337, BEOA));
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nz00_8335)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_14608), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_setqz00_bglt) BgL_nz00_8335));
		}

	}



/* &walk0!-setq1845 */
	BgL_nodez00_bglt BGl_z62walk0z12zd2setq1845za2zzast_walkz00(obj_t
		BgL_envz00_8338, obj_t BgL_nz00_8339, obj_t BgL_pz00_8340)
	{
		{	/* Ast/walk.scm 301 */
			{
				BgL_varz00_bglt BgL_auxz00_14622;

				{	/* Ast/walk.scm 301 */
					BgL_varz00_bglt BgL_arg2656z00_9681;

					BgL_arg2656z00_9681 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nz00_8339)))->BgL_varz00);
					BgL_auxz00_14622 =
						((BgL_varz00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8340) (BgL_pz00_8340,
							((obj_t) BgL_arg2656z00_9681), BEOA));
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nz00_8339)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_14622), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_14633;

				{	/* Ast/walk.scm 301 */
					BgL_nodez00_bglt BgL_arg2657z00_9682;

					BgL_arg2657z00_9682 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nz00_8339)))->BgL_valuez00);
					BgL_auxz00_14633 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8340) (BgL_pz00_8340,
							((obj_t) BgL_arg2657z00_9682), BEOA));
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nz00_8339)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_14633), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_setqz00_bglt) BgL_nz00_8339));
		}

	}



/* &walk3*-setq1843 */
	obj_t BGl_z62walk3za2zd2setq1843z12zzast_walkz00(obj_t BgL_envz00_8341,
		obj_t BgL_nz00_8342, obj_t BgL_pz00_8343, obj_t BgL_arg0z00_8344,
		obj_t BgL_arg1z00_8345, obj_t BgL_arg2z00_8346)
	{
		{	/* Ast/walk.scm 301 */
			{	/* Ast/walk.scm 301 */
				obj_t BgL_res4252z00_9688;

				{	/* Ast/walk.scm 301 */
					obj_t BgL_arg2651z00_9684;
					obj_t BgL_arg2653z00_9685;

					{	/* Ast/walk.scm 301 */
						BgL_varz00_bglt BgL_arg2654z00_9686;

						BgL_arg2654z00_9686 =
							(((BgL_setqz00_bglt) COBJECT(
									((BgL_setqz00_bglt) BgL_nz00_8342)))->BgL_varz00);
						BgL_arg2651z00_9684 =
							PROCEDURE_ENTRY(BgL_pz00_8343) (BgL_pz00_8343,
							((obj_t) BgL_arg2654z00_9686), BgL_arg0z00_8344, BgL_arg1z00_8345,
							BgL_arg2z00_8346, BEOA);
					}
					{	/* Ast/walk.scm 301 */
						BgL_nodez00_bglt BgL_arg2655z00_9687;

						BgL_arg2655z00_9687 =
							(((BgL_setqz00_bglt) COBJECT(
									((BgL_setqz00_bglt) BgL_nz00_8342)))->BgL_valuez00);
						BgL_arg2653z00_9685 =
							PROCEDURE_ENTRY(BgL_pz00_8343) (BgL_pz00_8343,
							((obj_t) BgL_arg2655z00_9687), BgL_arg0z00_8344, BgL_arg1z00_8345,
							BgL_arg2z00_8346, BEOA);
					}
					BgL_res4252z00_9688 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg2651z00_9684,
						BgL_arg2653z00_9685);
				}
				return BgL_res4252z00_9688;
			}
		}

	}



/* &walk2*-setq1841 */
	obj_t BGl_z62walk2za2zd2setq1841z12zzast_walkz00(obj_t BgL_envz00_8347,
		obj_t BgL_nz00_8348, obj_t BgL_pz00_8349, obj_t BgL_arg0z00_8350,
		obj_t BgL_arg1z00_8351)
	{
		{	/* Ast/walk.scm 301 */
			{	/* Ast/walk.scm 301 */
				obj_t BgL_res4253z00_9694;

				{	/* Ast/walk.scm 301 */
					obj_t BgL_arg2646z00_9690;
					obj_t BgL_arg2648z00_9691;

					{	/* Ast/walk.scm 301 */
						BgL_varz00_bglt BgL_arg2649z00_9692;

						BgL_arg2649z00_9692 =
							(((BgL_setqz00_bglt) COBJECT(
									((BgL_setqz00_bglt) BgL_nz00_8348)))->BgL_varz00);
						BgL_arg2646z00_9690 =
							PROCEDURE_ENTRY(BgL_pz00_8349) (BgL_pz00_8349,
							((obj_t) BgL_arg2649z00_9692), BgL_arg0z00_8350, BgL_arg1z00_8351,
							BEOA);
					}
					{	/* Ast/walk.scm 301 */
						BgL_nodez00_bglt BgL_arg2650z00_9693;

						BgL_arg2650z00_9693 =
							(((BgL_setqz00_bglt) COBJECT(
									((BgL_setqz00_bglt) BgL_nz00_8348)))->BgL_valuez00);
						BgL_arg2648z00_9691 =
							PROCEDURE_ENTRY(BgL_pz00_8349) (BgL_pz00_8349,
							((obj_t) BgL_arg2650z00_9693), BgL_arg0z00_8350, BgL_arg1z00_8351,
							BEOA);
					}
					BgL_res4253z00_9694 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg2646z00_9690,
						BgL_arg2648z00_9691);
				}
				return BgL_res4253z00_9694;
			}
		}

	}



/* &walk1*-setq1839 */
	obj_t BGl_z62walk1za2zd2setq1839z12zzast_walkz00(obj_t BgL_envz00_8352,
		obj_t BgL_nz00_8353, obj_t BgL_pz00_8354, obj_t BgL_arg0z00_8355)
	{
		{	/* Ast/walk.scm 301 */
			{	/* Ast/walk.scm 301 */
				obj_t BgL_res4254z00_9700;

				{	/* Ast/walk.scm 301 */
					obj_t BgL_arg2641z00_9696;
					obj_t BgL_arg2643z00_9697;

					{	/* Ast/walk.scm 301 */
						BgL_varz00_bglt BgL_arg2644z00_9698;

						BgL_arg2644z00_9698 =
							(((BgL_setqz00_bglt) COBJECT(
									((BgL_setqz00_bglt) BgL_nz00_8353)))->BgL_varz00);
						BgL_arg2641z00_9696 =
							PROCEDURE_ENTRY(BgL_pz00_8354) (BgL_pz00_8354,
							((obj_t) BgL_arg2644z00_9698), BgL_arg0z00_8355, BEOA);
					}
					{	/* Ast/walk.scm 301 */
						BgL_nodez00_bglt BgL_arg2645z00_9699;

						BgL_arg2645z00_9699 =
							(((BgL_setqz00_bglt) COBJECT(
									((BgL_setqz00_bglt) BgL_nz00_8353)))->BgL_valuez00);
						BgL_arg2643z00_9697 =
							PROCEDURE_ENTRY(BgL_pz00_8354) (BgL_pz00_8354,
							((obj_t) BgL_arg2645z00_9699), BgL_arg0z00_8355, BEOA);
					}
					BgL_res4254z00_9700 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg2641z00_9696,
						BgL_arg2643z00_9697);
				}
				return BgL_res4254z00_9700;
			}
		}

	}



/* &walk0*-setq1837 */
	obj_t BGl_z62walk0za2zd2setq1837z12zzast_walkz00(obj_t BgL_envz00_8356,
		obj_t BgL_nz00_8357, obj_t BgL_pz00_8358)
	{
		{	/* Ast/walk.scm 301 */
			{	/* Ast/walk.scm 301 */
				obj_t BgL_res4255z00_9706;

				{	/* Ast/walk.scm 301 */
					obj_t BgL_arg2636z00_9702;
					obj_t BgL_arg2637z00_9703;

					{	/* Ast/walk.scm 301 */
						BgL_varz00_bglt BgL_arg2638z00_9704;

						BgL_arg2638z00_9704 =
							(((BgL_setqz00_bglt) COBJECT(
									((BgL_setqz00_bglt) BgL_nz00_8357)))->BgL_varz00);
						BgL_arg2636z00_9702 =
							PROCEDURE_ENTRY(BgL_pz00_8358) (BgL_pz00_8358,
							((obj_t) BgL_arg2638z00_9704), BEOA);
					}
					{	/* Ast/walk.scm 301 */
						BgL_nodez00_bglt BgL_arg2640z00_9705;

						BgL_arg2640z00_9705 =
							(((BgL_setqz00_bglt) COBJECT(
									((BgL_setqz00_bglt) BgL_nz00_8357)))->BgL_valuez00);
						BgL_arg2637z00_9703 =
							PROCEDURE_ENTRY(BgL_pz00_8358) (BgL_pz00_8358,
							((obj_t) BgL_arg2640z00_9705), BEOA);
					}
					BgL_res4255z00_9706 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg2636z00_9702,
						BgL_arg2637z00_9703);
				}
				return BgL_res4255z00_9706;
			}
		}

	}



/* &walk3-setq1835 */
	obj_t BGl_z62walk3zd2setq1835zb0zzast_walkz00(obj_t BgL_envz00_8359,
		obj_t BgL_nz00_8360, obj_t BgL_pz00_8361, obj_t BgL_arg0z00_8362,
		obj_t BgL_arg1z00_8363, obj_t BgL_arg2z00_8364)
	{
		{	/* Ast/walk.scm 301 */
			{	/* Ast/walk.scm 301 */
				BgL_varz00_bglt BgL_arg2633z00_9708;

				BgL_arg2633z00_9708 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nz00_8360)))->BgL_varz00);
				PROCEDURE_ENTRY(BgL_pz00_8361) (BgL_pz00_8361,
					((obj_t) BgL_arg2633z00_9708), BgL_arg0z00_8362, BgL_arg1z00_8363,
					BgL_arg2z00_8364, BEOA);
			}
			{	/* Ast/walk.scm 301 */
				BgL_nodez00_bglt BgL_arg2635z00_9709;

				BgL_arg2635z00_9709 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nz00_8360)))->BgL_valuez00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8361) (BgL_pz00_8361,
					((obj_t) BgL_arg2635z00_9709), BgL_arg0z00_8362, BgL_arg1z00_8363,
					BgL_arg2z00_8364, BEOA);
			}
		}

	}



/* &walk2-setq1833 */
	obj_t BGl_z62walk2zd2setq1833zb0zzast_walkz00(obj_t BgL_envz00_8365,
		obj_t BgL_nz00_8366, obj_t BgL_pz00_8367, obj_t BgL_arg0z00_8368,
		obj_t BgL_arg1z00_8369)
	{
		{	/* Ast/walk.scm 301 */
			{	/* Ast/walk.scm 301 */
				BgL_varz00_bglt BgL_arg2629z00_9711;

				BgL_arg2629z00_9711 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nz00_8366)))->BgL_varz00);
				PROCEDURE_ENTRY(BgL_pz00_8367) (BgL_pz00_8367,
					((obj_t) BgL_arg2629z00_9711), BgL_arg0z00_8368, BgL_arg1z00_8369,
					BEOA);
			}
			{	/* Ast/walk.scm 301 */
				BgL_nodez00_bglt BgL_arg2631z00_9712;

				BgL_arg2631z00_9712 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nz00_8366)))->BgL_valuez00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8367) (BgL_pz00_8367,
					((obj_t) BgL_arg2631z00_9712), BgL_arg0z00_8368, BgL_arg1z00_8369,
					BEOA);
			}
		}

	}



/* &walk1-setq1831 */
	obj_t BGl_z62walk1zd2setq1831zb0zzast_walkz00(obj_t BgL_envz00_8370,
		obj_t BgL_nz00_8371, obj_t BgL_pz00_8372, obj_t BgL_arg0z00_8373)
	{
		{	/* Ast/walk.scm 301 */
			{	/* Ast/walk.scm 301 */
				BgL_varz00_bglt BgL_arg2626z00_9714;

				BgL_arg2626z00_9714 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nz00_8371)))->BgL_varz00);
				PROCEDURE_ENTRY(BgL_pz00_8372) (BgL_pz00_8372,
					((obj_t) BgL_arg2626z00_9714), BgL_arg0z00_8373, BEOA);
			}
			{	/* Ast/walk.scm 301 */
				BgL_nodez00_bglt BgL_arg2628z00_9715;

				BgL_arg2628z00_9715 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nz00_8371)))->BgL_valuez00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8372) (BgL_pz00_8372,
					((obj_t) BgL_arg2628z00_9715), BgL_arg0z00_8373, BEOA);
			}
		}

	}



/* &walk0-setq1829 */
	obj_t BGl_z62walk0zd2setq1829zb0zzast_walkz00(obj_t BgL_envz00_8374,
		obj_t BgL_nz00_8375, obj_t BgL_pz00_8376)
	{
		{	/* Ast/walk.scm 301 */
			{	/* Ast/walk.scm 301 */
				BgL_varz00_bglt BgL_arg2624z00_9717;

				BgL_arg2624z00_9717 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nz00_8375)))->BgL_varz00);
				PROCEDURE_ENTRY(BgL_pz00_8376) (BgL_pz00_8376,
					((obj_t) BgL_arg2624z00_9717), BEOA);
			}
			{	/* Ast/walk.scm 301 */
				BgL_nodez00_bglt BgL_arg2625z00_9718;

				BgL_arg2625z00_9718 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nz00_8375)))->BgL_valuez00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8376) (BgL_pz00_8376,
					((obj_t) BgL_arg2625z00_9718), BEOA);
			}
		}

	}



/* &walk3!-cast1827 */
	BgL_nodez00_bglt BGl_z62walk3z12zd2cast1827za2zzast_walkz00(obj_t
		BgL_envz00_8377, obj_t BgL_nz00_8378, obj_t BgL_pz00_8379,
		obj_t BgL_arg0z00_8380, obj_t BgL_arg1z00_8381, obj_t BgL_arg2z00_8382)
	{
		{	/* Ast/walk.scm 300 */
			{
				BgL_nodez00_bglt BgL_auxz00_14786;

				{	/* Ast/walk.scm 300 */
					BgL_nodez00_bglt BgL_arg2623z00_9720;

					BgL_arg2623z00_9720 =
						(((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nz00_8378)))->BgL_argz00);
					BgL_auxz00_14786 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8379) (BgL_pz00_8379,
							((obj_t) BgL_arg2623z00_9720), BgL_arg0z00_8380, BgL_arg1z00_8381,
							BgL_arg2z00_8382, BEOA));
				}
				((((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nz00_8378)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_14786), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_castz00_bglt) BgL_nz00_8378));
		}

	}



/* &walk2!-cast1825 */
	BgL_nodez00_bglt BGl_z62walk2z12zd2cast1825za2zzast_walkz00(obj_t
		BgL_envz00_8383, obj_t BgL_nz00_8384, obj_t BgL_pz00_8385,
		obj_t BgL_arg0z00_8386, obj_t BgL_arg1z00_8387)
	{
		{	/* Ast/walk.scm 300 */
			{
				BgL_nodez00_bglt BgL_auxz00_14802;

				{	/* Ast/walk.scm 300 */
					BgL_nodez00_bglt BgL_arg2622z00_9722;

					BgL_arg2622z00_9722 =
						(((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nz00_8384)))->BgL_argz00);
					BgL_auxz00_14802 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8385) (BgL_pz00_8385,
							((obj_t) BgL_arg2622z00_9722), BgL_arg0z00_8386, BgL_arg1z00_8387,
							BEOA));
				}
				((((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nz00_8384)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_14802), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_castz00_bglt) BgL_nz00_8384));
		}

	}



/* &walk1!-cast1823 */
	BgL_nodez00_bglt BGl_z62walk1z12zd2cast1823za2zzast_walkz00(obj_t
		BgL_envz00_8388, obj_t BgL_nz00_8389, obj_t BgL_pz00_8390,
		obj_t BgL_arg0z00_8391)
	{
		{	/* Ast/walk.scm 300 */
			{
				BgL_nodez00_bglt BgL_auxz00_14817;

				{	/* Ast/walk.scm 300 */
					BgL_nodez00_bglt BgL_arg2621z00_9724;

					BgL_arg2621z00_9724 =
						(((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nz00_8389)))->BgL_argz00);
					BgL_auxz00_14817 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8390) (BgL_pz00_8390,
							((obj_t) BgL_arg2621z00_9724), BgL_arg0z00_8391, BEOA));
				}
				((((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nz00_8389)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_14817), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_castz00_bglt) BgL_nz00_8389));
		}

	}



/* &walk0!-cast1821 */
	BgL_nodez00_bglt BGl_z62walk0z12zd2cast1821za2zzast_walkz00(obj_t
		BgL_envz00_8392, obj_t BgL_nz00_8393, obj_t BgL_pz00_8394)
	{
		{	/* Ast/walk.scm 300 */
			{
				BgL_nodez00_bglt BgL_auxz00_14831;

				{	/* Ast/walk.scm 300 */
					BgL_nodez00_bglt BgL_arg2620z00_9726;

					BgL_arg2620z00_9726 =
						(((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nz00_8393)))->BgL_argz00);
					BgL_auxz00_14831 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8394) (BgL_pz00_8394,
							((obj_t) BgL_arg2620z00_9726), BEOA));
				}
				((((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nz00_8393)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_14831), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_castz00_bglt) BgL_nz00_8393));
		}

	}



/* &walk3*-cast1819 */
	obj_t BGl_z62walk3za2zd2cast1819z12zzast_walkz00(obj_t BgL_envz00_8395,
		obj_t BgL_nz00_8396, obj_t BgL_pz00_8397, obj_t BgL_arg0z00_8398,
		obj_t BgL_arg1z00_8399, obj_t BgL_arg2z00_8400)
	{
		{	/* Ast/walk.scm 300 */
			{	/* Ast/walk.scm 300 */
				obj_t BgL_res4256z00_9731;

				{	/* Ast/walk.scm 300 */
					obj_t BgL_arg2615z00_9728;

					{	/* Ast/walk.scm 300 */
						BgL_nodez00_bglt BgL_arg2617z00_9729;

						BgL_arg2617z00_9729 =
							(((BgL_castz00_bglt) COBJECT(
									((BgL_castz00_bglt) BgL_nz00_8396)))->BgL_argz00);
						BgL_arg2615z00_9728 =
							PROCEDURE_ENTRY(BgL_pz00_8397) (BgL_pz00_8397,
							((obj_t) BgL_arg2617z00_9729), BgL_arg0z00_8398, BgL_arg1z00_8399,
							BgL_arg2z00_8400, BEOA);
					}
					{	/* Ast/walk.scm 300 */
						obj_t BgL_list2616z00_9730;

						BgL_list2616z00_9730 = MAKE_YOUNG_PAIR(BgL_arg2615z00_9728, BNIL);
						BgL_res4256z00_9731 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2616z00_9730);
					}
				}
				return BgL_res4256z00_9731;
			}
		}

	}



/* &walk2*-cast1817 */
	obj_t BGl_z62walk2za2zd2cast1817z12zzast_walkz00(obj_t BgL_envz00_8401,
		obj_t BgL_nz00_8402, obj_t BgL_pz00_8403, obj_t BgL_arg0z00_8404,
		obj_t BgL_arg1z00_8405)
	{
		{	/* Ast/walk.scm 300 */
			{	/* Ast/walk.scm 300 */
				obj_t BgL_res4257z00_9736;

				{	/* Ast/walk.scm 300 */
					obj_t BgL_arg2612z00_9733;

					{	/* Ast/walk.scm 300 */
						BgL_nodez00_bglt BgL_arg2614z00_9734;

						BgL_arg2614z00_9734 =
							(((BgL_castz00_bglt) COBJECT(
									((BgL_castz00_bglt) BgL_nz00_8402)))->BgL_argz00);
						BgL_arg2612z00_9733 =
							PROCEDURE_ENTRY(BgL_pz00_8403) (BgL_pz00_8403,
							((obj_t) BgL_arg2614z00_9734), BgL_arg0z00_8404, BgL_arg1z00_8405,
							BEOA);
					}
					{	/* Ast/walk.scm 300 */
						obj_t BgL_list2613z00_9735;

						BgL_list2613z00_9735 = MAKE_YOUNG_PAIR(BgL_arg2612z00_9733, BNIL);
						BgL_res4257z00_9736 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2613z00_9735);
					}
				}
				return BgL_res4257z00_9736;
			}
		}

	}



/* &walk1*-cast1815 */
	obj_t BGl_z62walk1za2zd2cast1815z12zzast_walkz00(obj_t BgL_envz00_8406,
		obj_t BgL_nz00_8407, obj_t BgL_pz00_8408, obj_t BgL_arg0z00_8409)
	{
		{	/* Ast/walk.scm 300 */
			{	/* Ast/walk.scm 300 */
				obj_t BgL_res4258z00_9741;

				{	/* Ast/walk.scm 300 */
					obj_t BgL_arg2609z00_9738;

					{	/* Ast/walk.scm 300 */
						BgL_nodez00_bglt BgL_arg2611z00_9739;

						BgL_arg2611z00_9739 =
							(((BgL_castz00_bglt) COBJECT(
									((BgL_castz00_bglt) BgL_nz00_8407)))->BgL_argz00);
						BgL_arg2609z00_9738 =
							PROCEDURE_ENTRY(BgL_pz00_8408) (BgL_pz00_8408,
							((obj_t) BgL_arg2611z00_9739), BgL_arg0z00_8409, BEOA);
					}
					{	/* Ast/walk.scm 300 */
						obj_t BgL_list2610z00_9740;

						BgL_list2610z00_9740 = MAKE_YOUNG_PAIR(BgL_arg2609z00_9738, BNIL);
						BgL_res4258z00_9741 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2610z00_9740);
					}
				}
				return BgL_res4258z00_9741;
			}
		}

	}



/* &walk0*-cast1813 */
	obj_t BGl_z62walk0za2zd2cast1813z12zzast_walkz00(obj_t BgL_envz00_8410,
		obj_t BgL_nz00_8411, obj_t BgL_pz00_8412)
	{
		{	/* Ast/walk.scm 300 */
			{	/* Ast/walk.scm 300 */
				obj_t BgL_res4259z00_9746;

				{	/* Ast/walk.scm 300 */
					obj_t BgL_arg2606z00_9743;

					{	/* Ast/walk.scm 300 */
						BgL_nodez00_bglt BgL_arg2608z00_9744;

						BgL_arg2608z00_9744 =
							(((BgL_castz00_bglt) COBJECT(
									((BgL_castz00_bglt) BgL_nz00_8411)))->BgL_argz00);
						BgL_arg2606z00_9743 =
							PROCEDURE_ENTRY(BgL_pz00_8412) (BgL_pz00_8412,
							((obj_t) BgL_arg2608z00_9744), BEOA);
					}
					{	/* Ast/walk.scm 300 */
						obj_t BgL_list2607z00_9745;

						BgL_list2607z00_9745 = MAKE_YOUNG_PAIR(BgL_arg2606z00_9743, BNIL);
						BgL_res4259z00_9746 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2607z00_9745);
					}
				}
				return BgL_res4259z00_9746;
			}
		}

	}



/* &walk3-cast1811 */
	obj_t BGl_z62walk3zd2cast1811zb0zzast_walkz00(obj_t BgL_envz00_8413,
		obj_t BgL_nz00_8414, obj_t BgL_pz00_8415, obj_t BgL_arg0z00_8416,
		obj_t BgL_arg1z00_8417, obj_t BgL_arg2z00_8418)
	{
		{	/* Ast/walk.scm 300 */
			{	/* Ast/walk.scm 300 */
				BgL_nodez00_bglt BgL_arg2605z00_9748;

				BgL_arg2605z00_9748 =
					(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nz00_8414)))->BgL_argz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8415) (BgL_pz00_8415,
					((obj_t) BgL_arg2605z00_9748), BgL_arg0z00_8416, BgL_arg1z00_8417,
					BgL_arg2z00_8418, BEOA);
			}
		}

	}



/* &walk2-cast1809 */
	obj_t BGl_z62walk2zd2cast1809zb0zzast_walkz00(obj_t BgL_envz00_8419,
		obj_t BgL_nz00_8420, obj_t BgL_pz00_8421, obj_t BgL_arg0z00_8422,
		obj_t BgL_arg1z00_8423)
	{
		{	/* Ast/walk.scm 300 */
			{	/* Ast/walk.scm 300 */
				BgL_nodez00_bglt BgL_arg2604z00_9750;

				BgL_arg2604z00_9750 =
					(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nz00_8420)))->BgL_argz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8421) (BgL_pz00_8421,
					((obj_t) BgL_arg2604z00_9750), BgL_arg0z00_8422, BgL_arg1z00_8423,
					BEOA);
			}
		}

	}



/* &walk1-cast1807 */
	obj_t BGl_z62walk1zd2cast1807zb0zzast_walkz00(obj_t BgL_envz00_8424,
		obj_t BgL_nz00_8425, obj_t BgL_pz00_8426, obj_t BgL_arg0z00_8427)
	{
		{	/* Ast/walk.scm 300 */
			{	/* Ast/walk.scm 300 */
				BgL_nodez00_bglt BgL_arg2603z00_9752;

				BgL_arg2603z00_9752 =
					(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nz00_8425)))->BgL_argz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8426) (BgL_pz00_8426,
					((obj_t) BgL_arg2603z00_9752), BgL_arg0z00_8427, BEOA);
			}
		}

	}



/* &walk0-cast1805 */
	obj_t BGl_z62walk0zd2cast1805zb0zzast_walkz00(obj_t BgL_envz00_8428,
		obj_t BgL_nz00_8429, obj_t BgL_pz00_8430)
	{
		{	/* Ast/walk.scm 300 */
			{	/* Ast/walk.scm 300 */
				BgL_nodez00_bglt BgL_arg2602z00_9754;

				BgL_arg2602z00_9754 =
					(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nz00_8429)))->BgL_argz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8430) (BgL_pz00_8430,
					((obj_t) BgL_arg2602z00_9754), BEOA);
			}
		}

	}



/* &walk3!-extern1803 */
	BgL_nodez00_bglt BGl_z62walk3z12zd2extern1803za2zzast_walkz00(obj_t
		BgL_envz00_8431, obj_t BgL_nz00_8432, obj_t BgL_pz00_8433,
		obj_t BgL_arg0z00_8434, obj_t BgL_arg1z00_8435, obj_t BgL_arg2z00_8436)
	{
		{	/* Ast/walk.scm 299 */
			{
				obj_t BgL_fieldsz00_9757;

				BgL_fieldsz00_9757 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nz00_8432)))->BgL_exprza2za2);
			BgL_loopz00_9756:
				if (NULLP(BgL_fieldsz00_9757))
					{	/* Ast/walk.scm 299 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 299 */
						{	/* Ast/walk.scm 299 */
							obj_t BgL_arg2597z00_9758;

							{	/* Ast/walk.scm 299 */
								obj_t BgL_arg2598z00_9759;

								BgL_arg2598z00_9759 = CAR(((obj_t) BgL_fieldsz00_9757));
								BgL_arg2597z00_9758 =
									PROCEDURE_ENTRY(BgL_pz00_8433) (BgL_pz00_8433,
									BgL_arg2598z00_9759, BgL_arg0z00_8434, BgL_arg1z00_8435,
									BgL_arg2z00_8436, BEOA);
							}
							{	/* Ast/walk.scm 299 */
								obj_t BgL_tmpz00_14931;

								BgL_tmpz00_14931 = ((obj_t) BgL_fieldsz00_9757);
								SET_CAR(BgL_tmpz00_14931, BgL_arg2597z00_9758);
							}
						}
						{	/* Ast/walk.scm 299 */
							obj_t BgL_arg2599z00_9760;

							BgL_arg2599z00_9760 = CDR(((obj_t) BgL_fieldsz00_9757));
							{
								obj_t BgL_fieldsz00_14936;

								BgL_fieldsz00_14936 = BgL_arg2599z00_9760;
								BgL_fieldsz00_9757 = BgL_fieldsz00_14936;
								goto BgL_loopz00_9756;
							}
						}
					}
			}
			return ((BgL_nodez00_bglt) ((BgL_externz00_bglt) BgL_nz00_8432));
		}

	}



/* &walk2!-extern1801 */
	BgL_nodez00_bglt BGl_z62walk2z12zd2extern1801za2zzast_walkz00(obj_t
		BgL_envz00_8437, obj_t BgL_nz00_8438, obj_t BgL_pz00_8439,
		obj_t BgL_arg0z00_8440, obj_t BgL_arg1z00_8441)
	{
		{	/* Ast/walk.scm 299 */
			{
				obj_t BgL_fieldsz00_9763;

				BgL_fieldsz00_9763 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nz00_8438)))->BgL_exprza2za2);
			BgL_loopz00_9762:
				if (NULLP(BgL_fieldsz00_9763))
					{	/* Ast/walk.scm 299 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 299 */
						{	/* Ast/walk.scm 299 */
							obj_t BgL_arg2589z00_9764;

							{	/* Ast/walk.scm 299 */
								obj_t BgL_arg2591z00_9765;

								BgL_arg2591z00_9765 = CAR(((obj_t) BgL_fieldsz00_9763));
								BgL_arg2589z00_9764 =
									PROCEDURE_ENTRY(BgL_pz00_8439) (BgL_pz00_8439,
									BgL_arg2591z00_9765, BgL_arg0z00_8440, BgL_arg1z00_8441,
									BEOA);
							}
							{	/* Ast/walk.scm 299 */
								obj_t BgL_tmpz00_14951;

								BgL_tmpz00_14951 = ((obj_t) BgL_fieldsz00_9763);
								SET_CAR(BgL_tmpz00_14951, BgL_arg2589z00_9764);
							}
						}
						{	/* Ast/walk.scm 299 */
							obj_t BgL_arg2592z00_9766;

							BgL_arg2592z00_9766 = CDR(((obj_t) BgL_fieldsz00_9763));
							{
								obj_t BgL_fieldsz00_14956;

								BgL_fieldsz00_14956 = BgL_arg2592z00_9766;
								BgL_fieldsz00_9763 = BgL_fieldsz00_14956;
								goto BgL_loopz00_9762;
							}
						}
					}
			}
			return ((BgL_nodez00_bglt) ((BgL_externz00_bglt) BgL_nz00_8438));
		}

	}



/* &walk1!-extern1799 */
	BgL_nodez00_bglt BGl_z62walk1z12zd2extern1799za2zzast_walkz00(obj_t
		BgL_envz00_8442, obj_t BgL_nz00_8443, obj_t BgL_pz00_8444,
		obj_t BgL_arg0z00_8445)
	{
		{	/* Ast/walk.scm 299 */
			{
				obj_t BgL_fieldsz00_9769;

				BgL_fieldsz00_9769 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nz00_8443)))->BgL_exprza2za2);
			BgL_loopz00_9768:
				if (NULLP(BgL_fieldsz00_9769))
					{	/* Ast/walk.scm 299 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 299 */
						{	/* Ast/walk.scm 299 */
							obj_t BgL_arg2583z00_9770;

							{	/* Ast/walk.scm 299 */
								obj_t BgL_arg2584z00_9771;

								BgL_arg2584z00_9771 = CAR(((obj_t) BgL_fieldsz00_9769));
								BgL_arg2583z00_9770 =
									PROCEDURE_ENTRY(BgL_pz00_8444) (BgL_pz00_8444,
									BgL_arg2584z00_9771, BgL_arg0z00_8445, BEOA);
							}
							{	/* Ast/walk.scm 299 */
								obj_t BgL_tmpz00_14970;

								BgL_tmpz00_14970 = ((obj_t) BgL_fieldsz00_9769);
								SET_CAR(BgL_tmpz00_14970, BgL_arg2583z00_9770);
							}
						}
						{	/* Ast/walk.scm 299 */
							obj_t BgL_arg2585z00_9772;

							BgL_arg2585z00_9772 = CDR(((obj_t) BgL_fieldsz00_9769));
							{
								obj_t BgL_fieldsz00_14975;

								BgL_fieldsz00_14975 = BgL_arg2585z00_9772;
								BgL_fieldsz00_9769 = BgL_fieldsz00_14975;
								goto BgL_loopz00_9768;
							}
						}
					}
			}
			return ((BgL_nodez00_bglt) ((BgL_externz00_bglt) BgL_nz00_8443));
		}

	}



/* &walk0!-extern1797 */
	BgL_nodez00_bglt BGl_z62walk0z12zd2extern1797za2zzast_walkz00(obj_t
		BgL_envz00_8446, obj_t BgL_nz00_8447, obj_t BgL_pz00_8448)
	{
		{	/* Ast/walk.scm 299 */
			{
				obj_t BgL_fieldsz00_9775;

				BgL_fieldsz00_9775 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nz00_8447)))->BgL_exprza2za2);
			BgL_loopz00_9774:
				if (NULLP(BgL_fieldsz00_9775))
					{	/* Ast/walk.scm 299 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 299 */
						{	/* Ast/walk.scm 299 */
							obj_t BgL_arg2575z00_9776;

							{	/* Ast/walk.scm 299 */
								obj_t BgL_arg2577z00_9777;

								BgL_arg2577z00_9777 = CAR(((obj_t) BgL_fieldsz00_9775));
								BgL_arg2575z00_9776 =
									PROCEDURE_ENTRY(BgL_pz00_8448) (BgL_pz00_8448,
									BgL_arg2577z00_9777, BEOA);
							}
							{	/* Ast/walk.scm 299 */
								obj_t BgL_tmpz00_14988;

								BgL_tmpz00_14988 = ((obj_t) BgL_fieldsz00_9775);
								SET_CAR(BgL_tmpz00_14988, BgL_arg2575z00_9776);
							}
						}
						{	/* Ast/walk.scm 299 */
							obj_t BgL_arg2578z00_9778;

							BgL_arg2578z00_9778 = CDR(((obj_t) BgL_fieldsz00_9775));
							{
								obj_t BgL_fieldsz00_14993;

								BgL_fieldsz00_14993 = BgL_arg2578z00_9778;
								BgL_fieldsz00_9775 = BgL_fieldsz00_14993;
								goto BgL_loopz00_9774;
							}
						}
					}
			}
			return ((BgL_nodez00_bglt) ((BgL_externz00_bglt) BgL_nz00_8447));
		}

	}



/* &walk3*-extern1795 */
	obj_t BGl_z62walk3za2zd2extern1795z12zzast_walkz00(obj_t BgL_envz00_8449,
		obj_t BgL_nz00_8450, obj_t BgL_pz00_8451, obj_t BgL_arg0z00_8452,
		obj_t BgL_arg1z00_8453, obj_t BgL_arg2z00_8454)
	{
		{	/* Ast/walk.scm 299 */
			{	/* Ast/walk.scm 299 */
				obj_t BgL_res4260z00_9782;

				{	/* Ast/walk.scm 299 */
					obj_t BgL_arg2564z00_9780;

					BgL_arg2564z00_9780 =
						BGl_zc3z04anonymousza32566ze3ze70z60zzast_walkz00(BgL_arg2z00_8454,
						BgL_arg1z00_8453, BgL_arg0z00_8452, BgL_pz00_8451,
						(((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
										BgL_nz00_8450)))->BgL_exprza2za2));
					{	/* Ast/walk.scm 299 */
						obj_t BgL_list2565z00_9781;

						BgL_list2565z00_9781 = MAKE_YOUNG_PAIR(BgL_arg2564z00_9780, BNIL);
						BgL_res4260z00_9782 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2565z00_9781);
					}
				}
				return BgL_res4260z00_9782;
			}
		}

	}



/* <@anonymous:2566>~0 */
	obj_t BGl_zc3z04anonymousza32566ze3ze70z60zzast_walkz00(obj_t
		BgL_arg2z00_8794, obj_t BgL_arg1z00_8793, obj_t BgL_arg0z00_8792,
		obj_t BgL_pz00_8791, obj_t BgL_l1552z00_3449)
	{
		{	/* Ast/walk.scm 299 */
			if (NULLP(BgL_l1552z00_3449))
				{	/* Ast/walk.scm 299 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 299 */
					obj_t BgL_arg2568z00_3452;
					obj_t BgL_arg2569z00_3453;

					{	/* Ast/walk.scm 299 */
						obj_t BgL_fz00_3454;

						BgL_fz00_3454 = CAR(((obj_t) BgL_l1552z00_3449));
						BgL_arg2568z00_3452 =
							PROCEDURE_ENTRY(BgL_pz00_8791) (BgL_pz00_8791, BgL_fz00_3454,
							BgL_arg0z00_8792, BgL_arg1z00_8793, BgL_arg2z00_8794, BEOA);
					}
					{	/* Ast/walk.scm 299 */
						obj_t BgL_arg2571z00_3455;

						BgL_arg2571z00_3455 = CDR(((obj_t) BgL_l1552z00_3449));
						BgL_arg2569z00_3453 =
							BGl_zc3z04anonymousza32566ze3ze70z60zzast_walkz00
							(BgL_arg2z00_8794, BgL_arg1z00_8793, BgL_arg0z00_8792,
							BgL_pz00_8791, BgL_arg2571z00_3455);
					}
					return bgl_append2(BgL_arg2568z00_3452, BgL_arg2569z00_3453);
				}
		}

	}



/* &walk2*-extern1793 */
	obj_t BGl_z62walk2za2zd2extern1793z12zzast_walkz00(obj_t BgL_envz00_8455,
		obj_t BgL_nz00_8456, obj_t BgL_pz00_8457, obj_t BgL_arg0z00_8458,
		obj_t BgL_arg1z00_8459)
	{
		{	/* Ast/walk.scm 299 */
			{	/* Ast/walk.scm 299 */
				obj_t BgL_res4261z00_9786;

				{	/* Ast/walk.scm 299 */
					obj_t BgL_arg2554z00_9784;

					BgL_arg2554z00_9784 =
						BGl_zc3z04anonymousza32556ze3ze70z60zzast_walkz00(BgL_arg1z00_8459,
						BgL_arg0z00_8458, BgL_pz00_8457,
						(((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
										BgL_nz00_8456)))->BgL_exprza2za2));
					{	/* Ast/walk.scm 299 */
						obj_t BgL_list2555z00_9785;

						BgL_list2555z00_9785 = MAKE_YOUNG_PAIR(BgL_arg2554z00_9784, BNIL);
						BgL_res4261z00_9786 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2555z00_9785);
					}
				}
				return BgL_res4261z00_9786;
			}
		}

	}



/* <@anonymous:2556>~0 */
	obj_t BGl_zc3z04anonymousza32556ze3ze70z60zzast_walkz00(obj_t
		BgL_arg1z00_8790, obj_t BgL_arg0z00_8789, obj_t BgL_pz00_8788,
		obj_t BgL_l1549z00_3428)
	{
		{	/* Ast/walk.scm 299 */
			if (NULLP(BgL_l1549z00_3428))
				{	/* Ast/walk.scm 299 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 299 */
					obj_t BgL_arg2558z00_3431;
					obj_t BgL_arg2559z00_3432;

					{	/* Ast/walk.scm 299 */
						obj_t BgL_fz00_3433;

						BgL_fz00_3433 = CAR(((obj_t) BgL_l1549z00_3428));
						BgL_arg2558z00_3431 =
							PROCEDURE_ENTRY(BgL_pz00_8788) (BgL_pz00_8788, BgL_fz00_3433,
							BgL_arg0z00_8789, BgL_arg1z00_8790, BEOA);
					}
					{	/* Ast/walk.scm 299 */
						obj_t BgL_arg2562z00_3434;

						BgL_arg2562z00_3434 = CDR(((obj_t) BgL_l1549z00_3428));
						BgL_arg2559z00_3432 =
							BGl_zc3z04anonymousza32556ze3ze70z60zzast_walkz00
							(BgL_arg1z00_8790, BgL_arg0z00_8789, BgL_pz00_8788,
							BgL_arg2562z00_3434);
					}
					return bgl_append2(BgL_arg2558z00_3431, BgL_arg2559z00_3432);
				}
		}

	}



/* &walk1*-extern1791 */
	obj_t BGl_z62walk1za2zd2extern1791z12zzast_walkz00(obj_t BgL_envz00_8460,
		obj_t BgL_nz00_8461, obj_t BgL_pz00_8462, obj_t BgL_arg0z00_8463)
	{
		{	/* Ast/walk.scm 299 */
			{	/* Ast/walk.scm 299 */
				obj_t BgL_res4262z00_9790;

				{	/* Ast/walk.scm 299 */
					obj_t BgL_arg2542z00_9788;

					BgL_arg2542z00_9788 =
						BGl_zc3z04anonymousza32544ze3ze70z60zzast_walkz00(BgL_arg0z00_8463,
						BgL_pz00_8462,
						(((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
										BgL_nz00_8461)))->BgL_exprza2za2));
					{	/* Ast/walk.scm 299 */
						obj_t BgL_list2543z00_9789;

						BgL_list2543z00_9789 = MAKE_YOUNG_PAIR(BgL_arg2542z00_9788, BNIL);
						BgL_res4262z00_9790 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2543z00_9789);
					}
				}
				return BgL_res4262z00_9790;
			}
		}

	}



/* <@anonymous:2544>~0 */
	obj_t BGl_zc3z04anonymousza32544ze3ze70z60zzast_walkz00(obj_t
		BgL_arg0z00_8787, obj_t BgL_pz00_8786, obj_t BgL_l1546z00_3408)
	{
		{	/* Ast/walk.scm 299 */
			if (NULLP(BgL_l1546z00_3408))
				{	/* Ast/walk.scm 299 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 299 */
					obj_t BgL_arg2548z00_3411;
					obj_t BgL_arg2552z00_3412;

					{	/* Ast/walk.scm 299 */
						obj_t BgL_fz00_3413;

						BgL_fz00_3413 = CAR(((obj_t) BgL_l1546z00_3408));
						BgL_arg2548z00_3411 =
							PROCEDURE_ENTRY(BgL_pz00_8786) (BgL_pz00_8786, BgL_fz00_3413,
							BgL_arg0z00_8787, BEOA);
					}
					{	/* Ast/walk.scm 299 */
						obj_t BgL_arg2553z00_3414;

						BgL_arg2553z00_3414 = CDR(((obj_t) BgL_l1546z00_3408));
						BgL_arg2552z00_3412 =
							BGl_zc3z04anonymousza32544ze3ze70z60zzast_walkz00
							(BgL_arg0z00_8787, BgL_pz00_8786, BgL_arg2553z00_3414);
					}
					return bgl_append2(BgL_arg2548z00_3411, BgL_arg2552z00_3412);
				}
		}

	}



/* &walk0*-extern1789 */
	obj_t BGl_z62walk0za2zd2extern1789z12zzast_walkz00(obj_t BgL_envz00_8464,
		obj_t BgL_nz00_8465, obj_t BgL_pz00_8466)
	{
		{	/* Ast/walk.scm 299 */
			{	/* Ast/walk.scm 299 */
				obj_t BgL_res4263z00_9794;

				{	/* Ast/walk.scm 299 */
					obj_t BgL_arg2533z00_9792;

					BgL_arg2533z00_9792 =
						BGl_zc3z04anonymousza32535ze3ze70z60zzast_walkz00(BgL_pz00_8466,
						(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt) BgL_nz00_8465)))->BgL_exprza2za2));
					{	/* Ast/walk.scm 299 */
						obj_t BgL_list2534z00_9793;

						BgL_list2534z00_9793 = MAKE_YOUNG_PAIR(BgL_arg2533z00_9792, BNIL);
						BgL_res4263z00_9794 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2534z00_9793);
					}
				}
				return BgL_res4263z00_9794;
			}
		}

	}



/* <@anonymous:2535>~0 */
	obj_t BGl_zc3z04anonymousza32535ze3ze70z60zzast_walkz00(obj_t BgL_pz00_8785,
		obj_t BgL_l1543z00_3389)
	{
		{	/* Ast/walk.scm 299 */
			if (NULLP(BgL_l1543z00_3389))
				{	/* Ast/walk.scm 299 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 299 */
					obj_t BgL_arg2538z00_3392;
					obj_t BgL_arg2539z00_3393;

					{	/* Ast/walk.scm 299 */
						obj_t BgL_fz00_3394;

						BgL_fz00_3394 = CAR(((obj_t) BgL_l1543z00_3389));
						BgL_arg2538z00_3392 =
							PROCEDURE_ENTRY(BgL_pz00_8785) (BgL_pz00_8785, BgL_fz00_3394,
							BEOA);
					}
					{	/* Ast/walk.scm 299 */
						obj_t BgL_arg2541z00_3395;

						BgL_arg2541z00_3395 = CDR(((obj_t) BgL_l1543z00_3389));
						BgL_arg2539z00_3393 =
							BGl_zc3z04anonymousza32535ze3ze70z60zzast_walkz00(BgL_pz00_8785,
							BgL_arg2541z00_3395);
					}
					return bgl_append2(BgL_arg2538z00_3392, BgL_arg2539z00_3393);
				}
		}

	}



/* &walk3-extern1787 */
	obj_t BGl_z62walk3zd2extern1787zb0zzast_walkz00(obj_t BgL_envz00_8467,
		obj_t BgL_nz00_8468, obj_t BgL_pz00_8469, obj_t BgL_arg0z00_8470,
		obj_t BgL_arg1z00_8471, obj_t BgL_arg2z00_8472)
	{
		{	/* Ast/walk.scm 299 */
			{	/* Ast/walk.scm 299 */
				obj_t BgL_g1541z00_9796;

				BgL_g1541z00_9796 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nz00_8468)))->BgL_exprza2za2);
				{
					obj_t BgL_l1539z00_9798;

					{	/* Ast/walk.scm 299 */
						bool_t BgL_tmpz00_15074;

						BgL_l1539z00_9798 = BgL_g1541z00_9796;
					BgL_zc3z04anonymousza32530ze3z87_9797:
						if (PAIRP(BgL_l1539z00_9798))
							{	/* Ast/walk.scm 299 */
								{	/* Ast/walk.scm 299 */
									obj_t BgL_fz00_9799;

									BgL_fz00_9799 = CAR(BgL_l1539z00_9798);
									PROCEDURE_ENTRY(BgL_pz00_8469) (BgL_pz00_8469, BgL_fz00_9799,
										BgL_arg0z00_8470, BgL_arg1z00_8471, BgL_arg2z00_8472, BEOA);
								}
								{
									obj_t BgL_l1539z00_15085;

									BgL_l1539z00_15085 = CDR(BgL_l1539z00_9798);
									BgL_l1539z00_9798 = BgL_l1539z00_15085;
									goto BgL_zc3z04anonymousza32530ze3z87_9797;
								}
							}
						else
							{	/* Ast/walk.scm 299 */
								BgL_tmpz00_15074 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_15074);
					}
				}
			}
		}

	}



/* &walk2-extern1785 */
	obj_t BGl_z62walk2zd2extern1785zb0zzast_walkz00(obj_t BgL_envz00_8473,
		obj_t BgL_nz00_8474, obj_t BgL_pz00_8475, obj_t BgL_arg0z00_8476,
		obj_t BgL_arg1z00_8477)
	{
		{	/* Ast/walk.scm 299 */
			{	/* Ast/walk.scm 299 */
				obj_t BgL_g1538z00_9801;

				BgL_g1538z00_9801 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nz00_8474)))->BgL_exprza2za2);
				{
					obj_t BgL_l1536z00_9803;

					{	/* Ast/walk.scm 299 */
						bool_t BgL_tmpz00_15090;

						BgL_l1536z00_9803 = BgL_g1538z00_9801;
					BgL_zc3z04anonymousza32526ze3z87_9802:
						if (PAIRP(BgL_l1536z00_9803))
							{	/* Ast/walk.scm 299 */
								{	/* Ast/walk.scm 299 */
									obj_t BgL_fz00_9804;

									BgL_fz00_9804 = CAR(BgL_l1536z00_9803);
									PROCEDURE_ENTRY(BgL_pz00_8475) (BgL_pz00_8475, BgL_fz00_9804,
										BgL_arg0z00_8476, BgL_arg1z00_8477, BEOA);
								}
								{
									obj_t BgL_l1536z00_15100;

									BgL_l1536z00_15100 = CDR(BgL_l1536z00_9803);
									BgL_l1536z00_9803 = BgL_l1536z00_15100;
									goto BgL_zc3z04anonymousza32526ze3z87_9802;
								}
							}
						else
							{	/* Ast/walk.scm 299 */
								BgL_tmpz00_15090 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_15090);
					}
				}
			}
		}

	}



/* &walk1-extern1783 */
	obj_t BGl_z62walk1zd2extern1783zb0zzast_walkz00(obj_t BgL_envz00_8478,
		obj_t BgL_nz00_8479, obj_t BgL_pz00_8480, obj_t BgL_arg0z00_8481)
	{
		{	/* Ast/walk.scm 299 */
			{	/* Ast/walk.scm 299 */
				obj_t BgL_g1535z00_9806;

				BgL_g1535z00_9806 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nz00_8479)))->BgL_exprza2za2);
				{
					obj_t BgL_l1533z00_9808;

					{	/* Ast/walk.scm 299 */
						bool_t BgL_tmpz00_15105;

						BgL_l1533z00_9808 = BgL_g1535z00_9806;
					BgL_zc3z04anonymousza32522ze3z87_9807:
						if (PAIRP(BgL_l1533z00_9808))
							{	/* Ast/walk.scm 299 */
								{	/* Ast/walk.scm 299 */
									obj_t BgL_fz00_9809;

									BgL_fz00_9809 = CAR(BgL_l1533z00_9808);
									PROCEDURE_ENTRY(BgL_pz00_8480) (BgL_pz00_8480, BgL_fz00_9809,
										BgL_arg0z00_8481, BEOA);
								}
								{
									obj_t BgL_l1533z00_15114;

									BgL_l1533z00_15114 = CDR(BgL_l1533z00_9808);
									BgL_l1533z00_9808 = BgL_l1533z00_15114;
									goto BgL_zc3z04anonymousza32522ze3z87_9807;
								}
							}
						else
							{	/* Ast/walk.scm 299 */
								BgL_tmpz00_15105 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_15105);
					}
				}
			}
		}

	}



/* &walk0-extern1781 */
	obj_t BGl_z62walk0zd2extern1781zb0zzast_walkz00(obj_t BgL_envz00_8482,
		obj_t BgL_nz00_8483, obj_t BgL_pz00_8484)
	{
		{	/* Ast/walk.scm 299 */
			{	/* Ast/walk.scm 299 */
				obj_t BgL_g1532z00_9811;

				BgL_g1532z00_9811 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nz00_8483)))->BgL_exprza2za2);
				{
					obj_t BgL_l1530z00_9813;

					{	/* Ast/walk.scm 299 */
						bool_t BgL_tmpz00_15119;

						BgL_l1530z00_9813 = BgL_g1532z00_9811;
					BgL_zc3z04anonymousza32519ze3z87_9812:
						if (PAIRP(BgL_l1530z00_9813))
							{	/* Ast/walk.scm 299 */
								{	/* Ast/walk.scm 299 */
									obj_t BgL_fz00_9814;

									BgL_fz00_9814 = CAR(BgL_l1530z00_9813);
									PROCEDURE_ENTRY(BgL_pz00_8484) (BgL_pz00_8484, BgL_fz00_9814,
										BEOA);
								}
								{
									obj_t BgL_l1530z00_15127;

									BgL_l1530z00_15127 = CDR(BgL_l1530z00_9813);
									BgL_l1530z00_9813 = BgL_l1530z00_15127;
									goto BgL_zc3z04anonymousza32519ze3z87_9812;
								}
							}
						else
							{	/* Ast/walk.scm 299 */
								BgL_tmpz00_15119 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_15119);
					}
				}
			}
		}

	}



/* &walk3!-funcall1779 */
	BgL_nodez00_bglt BGl_z62walk3z12zd2funcall1779za2zzast_walkz00(obj_t
		BgL_envz00_8485, obj_t BgL_nz00_8486, obj_t BgL_pz00_8487,
		obj_t BgL_arg0z00_8488, obj_t BgL_arg1z00_8489, obj_t BgL_arg2z00_8490)
	{
		{	/* Ast/walk.scm 298 */
			{
				BgL_nodez00_bglt BgL_auxz00_15130;

				{	/* Ast/walk.scm 298 */
					BgL_nodez00_bglt BgL_arg2506z00_9816;

					BgL_arg2506z00_9816 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nz00_8486)))->BgL_funz00);
					BgL_auxz00_15130 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8487) (BgL_pz00_8487,
							((obj_t) BgL_arg2506z00_9816), BgL_arg0z00_8488, BgL_arg1z00_8489,
							BgL_arg2z00_8490, BEOA));
				}
				((((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nz00_8486)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_15130), BUNSPEC);
			}
			{
				obj_t BgL_fieldsz00_9818;

				BgL_fieldsz00_9818 =
					(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nz00_8486)))->BgL_argsz00);
			BgL_loopz00_9817:
				if (NULLP(BgL_fieldsz00_9818))
					{	/* Ast/walk.scm 298 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 298 */
						{	/* Ast/walk.scm 298 */
							obj_t BgL_arg2512z00_9819;

							{	/* Ast/walk.scm 298 */
								obj_t BgL_arg2515z00_9820;

								BgL_arg2515z00_9820 = CAR(((obj_t) BgL_fieldsz00_9818));
								BgL_arg2512z00_9819 =
									PROCEDURE_ENTRY(BgL_pz00_8487) (BgL_pz00_8487,
									BgL_arg2515z00_9820, BgL_arg0z00_8488, BgL_arg1z00_8489,
									BgL_arg2z00_8490, BEOA);
							}
							{	/* Ast/walk.scm 298 */
								obj_t BgL_tmpz00_15155;

								BgL_tmpz00_15155 = ((obj_t) BgL_fieldsz00_9818);
								SET_CAR(BgL_tmpz00_15155, BgL_arg2512z00_9819);
							}
						}
						{	/* Ast/walk.scm 298 */
							obj_t BgL_arg2518z00_9821;

							BgL_arg2518z00_9821 = CDR(((obj_t) BgL_fieldsz00_9818));
							{
								obj_t BgL_fieldsz00_15160;

								BgL_fieldsz00_15160 = BgL_arg2518z00_9821;
								BgL_fieldsz00_9818 = BgL_fieldsz00_15160;
								goto BgL_loopz00_9817;
							}
						}
					}
			}
			return ((BgL_nodez00_bglt) ((BgL_funcallz00_bglt) BgL_nz00_8486));
		}

	}



/* &walk2!-funcall1777 */
	BgL_nodez00_bglt BGl_z62walk2z12zd2funcall1777za2zzast_walkz00(obj_t
		BgL_envz00_8491, obj_t BgL_nz00_8492, obj_t BgL_pz00_8493,
		obj_t BgL_arg0z00_8494, obj_t BgL_arg1z00_8495)
	{
		{	/* Ast/walk.scm 298 */
			{
				BgL_nodez00_bglt BgL_auxz00_15165;

				{	/* Ast/walk.scm 298 */
					BgL_nodez00_bglt BgL_arg2497z00_9823;

					BgL_arg2497z00_9823 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nz00_8492)))->BgL_funz00);
					BgL_auxz00_15165 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8493) (BgL_pz00_8493,
							((obj_t) BgL_arg2497z00_9823), BgL_arg0z00_8494, BgL_arg1z00_8495,
							BEOA));
				}
				((((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nz00_8492)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_15165), BUNSPEC);
			}
			{
				obj_t BgL_fieldsz00_9825;

				BgL_fieldsz00_9825 =
					(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nz00_8492)))->BgL_argsz00);
			BgL_loopz00_9824:
				if (NULLP(BgL_fieldsz00_9825))
					{	/* Ast/walk.scm 298 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 298 */
						{	/* Ast/walk.scm 298 */
							obj_t BgL_arg2502z00_9826;

							{	/* Ast/walk.scm 298 */
								obj_t BgL_arg2503z00_9827;

								BgL_arg2503z00_9827 = CAR(((obj_t) BgL_fieldsz00_9825));
								BgL_arg2502z00_9826 =
									PROCEDURE_ENTRY(BgL_pz00_8493) (BgL_pz00_8493,
									BgL_arg2503z00_9827, BgL_arg0z00_8494, BgL_arg1z00_8495,
									BEOA);
							}
							{	/* Ast/walk.scm 298 */
								obj_t BgL_tmpz00_15188;

								BgL_tmpz00_15188 = ((obj_t) BgL_fieldsz00_9825);
								SET_CAR(BgL_tmpz00_15188, BgL_arg2502z00_9826);
							}
						}
						{	/* Ast/walk.scm 298 */
							obj_t BgL_arg2504z00_9828;

							BgL_arg2504z00_9828 = CDR(((obj_t) BgL_fieldsz00_9825));
							{
								obj_t BgL_fieldsz00_15193;

								BgL_fieldsz00_15193 = BgL_arg2504z00_9828;
								BgL_fieldsz00_9825 = BgL_fieldsz00_15193;
								goto BgL_loopz00_9824;
							}
						}
					}
			}
			return ((BgL_nodez00_bglt) ((BgL_funcallz00_bglt) BgL_nz00_8492));
		}

	}



/* &walk1!-funcall1775 */
	BgL_nodez00_bglt BGl_z62walk1z12zd2funcall1775za2zzast_walkz00(obj_t
		BgL_envz00_8496, obj_t BgL_nz00_8497, obj_t BgL_pz00_8498,
		obj_t BgL_arg0z00_8499)
	{
		{	/* Ast/walk.scm 298 */
			{
				BgL_nodez00_bglt BgL_auxz00_15198;

				{	/* Ast/walk.scm 298 */
					BgL_nodez00_bglt BgL_arg2486z00_9830;

					BgL_arg2486z00_9830 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nz00_8497)))->BgL_funz00);
					BgL_auxz00_15198 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8498) (BgL_pz00_8498,
							((obj_t) BgL_arg2486z00_9830), BgL_arg0z00_8499, BEOA));
				}
				((((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nz00_8497)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_15198), BUNSPEC);
			}
			{
				obj_t BgL_fieldsz00_9832;

				BgL_fieldsz00_9832 =
					(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nz00_8497)))->BgL_argsz00);
			BgL_loopz00_9831:
				if (NULLP(BgL_fieldsz00_9832))
					{	/* Ast/walk.scm 298 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 298 */
						{	/* Ast/walk.scm 298 */
							obj_t BgL_arg2491z00_9833;

							{	/* Ast/walk.scm 298 */
								obj_t BgL_arg2494z00_9834;

								BgL_arg2494z00_9834 = CAR(((obj_t) BgL_fieldsz00_9832));
								BgL_arg2491z00_9833 =
									PROCEDURE_ENTRY(BgL_pz00_8498) (BgL_pz00_8498,
									BgL_arg2494z00_9834, BgL_arg0z00_8499, BEOA);
							}
							{	/* Ast/walk.scm 298 */
								obj_t BgL_tmpz00_15219;

								BgL_tmpz00_15219 = ((obj_t) BgL_fieldsz00_9832);
								SET_CAR(BgL_tmpz00_15219, BgL_arg2491z00_9833);
							}
						}
						{	/* Ast/walk.scm 298 */
							obj_t BgL_arg2496z00_9835;

							BgL_arg2496z00_9835 = CDR(((obj_t) BgL_fieldsz00_9832));
							{
								obj_t BgL_fieldsz00_15224;

								BgL_fieldsz00_15224 = BgL_arg2496z00_9835;
								BgL_fieldsz00_9832 = BgL_fieldsz00_15224;
								goto BgL_loopz00_9831;
							}
						}
					}
			}
			return ((BgL_nodez00_bglt) ((BgL_funcallz00_bglt) BgL_nz00_8497));
		}

	}



/* &walk0!-funcall1773 */
	BgL_nodez00_bglt BGl_z62walk0z12zd2funcall1773za2zzast_walkz00(obj_t
		BgL_envz00_8500, obj_t BgL_nz00_8501, obj_t BgL_pz00_8502)
	{
		{	/* Ast/walk.scm 298 */
			{
				BgL_nodez00_bglt BgL_auxz00_15229;

				{	/* Ast/walk.scm 298 */
					BgL_nodez00_bglt BgL_arg2477z00_9837;

					BgL_arg2477z00_9837 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nz00_8501)))->BgL_funz00);
					BgL_auxz00_15229 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8502) (BgL_pz00_8502,
							((obj_t) BgL_arg2477z00_9837), BEOA));
				}
				((((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nz00_8501)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_15229), BUNSPEC);
			}
			{
				obj_t BgL_fieldsz00_9839;

				BgL_fieldsz00_9839 =
					(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nz00_8501)))->BgL_argsz00);
			BgL_loopz00_9838:
				if (NULLP(BgL_fieldsz00_9839))
					{	/* Ast/walk.scm 298 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 298 */
						{	/* Ast/walk.scm 298 */
							obj_t BgL_arg2482z00_9840;

							{	/* Ast/walk.scm 298 */
								obj_t BgL_arg2483z00_9841;

								BgL_arg2483z00_9841 = CAR(((obj_t) BgL_fieldsz00_9839));
								BgL_arg2482z00_9840 =
									PROCEDURE_ENTRY(BgL_pz00_8502) (BgL_pz00_8502,
									BgL_arg2483z00_9841, BEOA);
							}
							{	/* Ast/walk.scm 298 */
								obj_t BgL_tmpz00_15248;

								BgL_tmpz00_15248 = ((obj_t) BgL_fieldsz00_9839);
								SET_CAR(BgL_tmpz00_15248, BgL_arg2482z00_9840);
							}
						}
						{	/* Ast/walk.scm 298 */
							obj_t BgL_arg2484z00_9842;

							BgL_arg2484z00_9842 = CDR(((obj_t) BgL_fieldsz00_9839));
							{
								obj_t BgL_fieldsz00_15253;

								BgL_fieldsz00_15253 = BgL_arg2484z00_9842;
								BgL_fieldsz00_9839 = BgL_fieldsz00_15253;
								goto BgL_loopz00_9838;
							}
						}
					}
			}
			return ((BgL_nodez00_bglt) ((BgL_funcallz00_bglt) BgL_nz00_8501));
		}

	}



/* &walk3*-funcall1771 */
	obj_t BGl_z62walk3za2zd2funcall1771z12zzast_walkz00(obj_t BgL_envz00_8503,
		obj_t BgL_nz00_8504, obj_t BgL_pz00_8505, obj_t BgL_arg0z00_8506,
		obj_t BgL_arg1z00_8507, obj_t BgL_arg2z00_8508)
	{
		{	/* Ast/walk.scm 298 */
			{	/* Ast/walk.scm 298 */
				obj_t BgL_res4264z00_9847;

				{	/* Ast/walk.scm 298 */
					obj_t BgL_arg2469z00_9844;
					obj_t BgL_arg2470z00_9845;

					{	/* Ast/walk.scm 298 */
						BgL_nodez00_bglt BgL_arg2471z00_9846;

						BgL_arg2471z00_9846 =
							(((BgL_funcallz00_bglt) COBJECT(
									((BgL_funcallz00_bglt) BgL_nz00_8504)))->BgL_funz00);
						BgL_arg2469z00_9844 =
							PROCEDURE_ENTRY(BgL_pz00_8505) (BgL_pz00_8505,
							((obj_t) BgL_arg2471z00_9846), BgL_arg0z00_8506, BgL_arg1z00_8507,
							BgL_arg2z00_8508, BEOA);
					}
					BgL_arg2470z00_9845 =
						BGl_zc3z04anonymousza32472ze3ze70z60zzast_walkz00(BgL_arg2z00_8508,
						BgL_arg1z00_8507, BgL_arg0z00_8506, BgL_pz00_8505,
						(((BgL_funcallz00_bglt) COBJECT(((BgL_funcallz00_bglt)
										BgL_nz00_8504)))->BgL_argsz00));
					BgL_res4264z00_9847 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg2469z00_9844,
						BgL_arg2470z00_9845);
				}
				return BgL_res4264z00_9847;
			}
		}

	}



/* <@anonymous:2472>~0 */
	obj_t BGl_zc3z04anonymousza32472ze3ze70z60zzast_walkz00(obj_t
		BgL_arg2z00_8784, obj_t BgL_arg1z00_8783, obj_t BgL_arg0z00_8782,
		obj_t BgL_pz00_8781, obj_t BgL_l1528z00_3239)
	{
		{	/* Ast/walk.scm 298 */
			if (NULLP(BgL_l1528z00_3239))
				{	/* Ast/walk.scm 298 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 298 */
					obj_t BgL_arg2474z00_3242;
					obj_t BgL_arg2475z00_3243;

					{	/* Ast/walk.scm 298 */
						obj_t BgL_fz00_3244;

						BgL_fz00_3244 = CAR(((obj_t) BgL_l1528z00_3239));
						BgL_arg2474z00_3242 =
							PROCEDURE_ENTRY(BgL_pz00_8781) (BgL_pz00_8781, BgL_fz00_3244,
							BgL_arg0z00_8782, BgL_arg1z00_8783, BgL_arg2z00_8784, BEOA);
					}
					{	/* Ast/walk.scm 298 */
						obj_t BgL_arg2476z00_3245;

						BgL_arg2476z00_3245 = CDR(((obj_t) BgL_l1528z00_3239));
						BgL_arg2475z00_3243 =
							BGl_zc3z04anonymousza32472ze3ze70z60zzast_walkz00
							(BgL_arg2z00_8784, BgL_arg1z00_8783, BgL_arg0z00_8782,
							BgL_pz00_8781, BgL_arg2476z00_3245);
					}
					return bgl_append2(BgL_arg2474z00_3242, BgL_arg2475z00_3243);
				}
		}

	}



/* &walk2*-funcall1769 */
	obj_t BGl_z62walk2za2zd2funcall1769z12zzast_walkz00(obj_t BgL_envz00_8509,
		obj_t BgL_nz00_8510, obj_t BgL_pz00_8511, obj_t BgL_arg0z00_8512,
		obj_t BgL_arg1z00_8513)
	{
		{	/* Ast/walk.scm 298 */
			{	/* Ast/walk.scm 298 */
				obj_t BgL_res4265z00_9852;

				{	/* Ast/walk.scm 298 */
					obj_t BgL_arg2458z00_9849;
					obj_t BgL_arg2460z00_9850;

					{	/* Ast/walk.scm 298 */
						BgL_nodez00_bglt BgL_arg2461z00_9851;

						BgL_arg2461z00_9851 =
							(((BgL_funcallz00_bglt) COBJECT(
									((BgL_funcallz00_bglt) BgL_nz00_8510)))->BgL_funz00);
						BgL_arg2458z00_9849 =
							PROCEDURE_ENTRY(BgL_pz00_8511) (BgL_pz00_8511,
							((obj_t) BgL_arg2461z00_9851), BgL_arg0z00_8512, BgL_arg1z00_8513,
							BEOA);
					}
					BgL_arg2460z00_9850 =
						BGl_zc3z04anonymousza32462ze3ze70z60zzast_walkz00(BgL_arg1z00_8513,
						BgL_arg0z00_8512, BgL_pz00_8511,
						(((BgL_funcallz00_bglt) COBJECT(((BgL_funcallz00_bglt)
										BgL_nz00_8510)))->BgL_argsz00));
					BgL_res4265z00_9852 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg2458z00_9849,
						BgL_arg2460z00_9850);
				}
				return BgL_res4265z00_9852;
			}
		}

	}



/* <@anonymous:2462>~0 */
	obj_t BGl_zc3z04anonymousza32462ze3ze70z60zzast_walkz00(obj_t
		BgL_arg1z00_8780, obj_t BgL_arg0z00_8779, obj_t BgL_pz00_8778,
		obj_t BgL_l1525z00_3217)
	{
		{	/* Ast/walk.scm 298 */
			if (NULLP(BgL_l1525z00_3217))
				{	/* Ast/walk.scm 298 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 298 */
					obj_t BgL_arg2464z00_3220;
					obj_t BgL_arg2466z00_3221;

					{	/* Ast/walk.scm 298 */
						obj_t BgL_fz00_3222;

						BgL_fz00_3222 = CAR(((obj_t) BgL_l1525z00_3217));
						BgL_arg2464z00_3220 =
							PROCEDURE_ENTRY(BgL_pz00_8778) (BgL_pz00_8778, BgL_fz00_3222,
							BgL_arg0z00_8779, BgL_arg1z00_8780, BEOA);
					}
					{	/* Ast/walk.scm 298 */
						obj_t BgL_arg2467z00_3223;

						BgL_arg2467z00_3223 = CDR(((obj_t) BgL_l1525z00_3217));
						BgL_arg2466z00_3221 =
							BGl_zc3z04anonymousza32462ze3ze70z60zzast_walkz00
							(BgL_arg1z00_8780, BgL_arg0z00_8779, BgL_pz00_8778,
							BgL_arg2467z00_3223);
					}
					return bgl_append2(BgL_arg2464z00_3220, BgL_arg2466z00_3221);
				}
		}

	}



/* &walk1*-funcall1767 */
	obj_t BGl_z62walk1za2zd2funcall1767z12zzast_walkz00(obj_t BgL_envz00_8514,
		obj_t BgL_nz00_8515, obj_t BgL_pz00_8516, obj_t BgL_arg0z00_8517)
	{
		{	/* Ast/walk.scm 298 */
			{	/* Ast/walk.scm 298 */
				obj_t BgL_res4266z00_9857;

				{	/* Ast/walk.scm 298 */
					obj_t BgL_arg2449z00_9854;
					obj_t BgL_arg2450z00_9855;

					{	/* Ast/walk.scm 298 */
						BgL_nodez00_bglt BgL_arg2451z00_9856;

						BgL_arg2451z00_9856 =
							(((BgL_funcallz00_bglt) COBJECT(
									((BgL_funcallz00_bglt) BgL_nz00_8515)))->BgL_funz00);
						BgL_arg2449z00_9854 =
							PROCEDURE_ENTRY(BgL_pz00_8516) (BgL_pz00_8516,
							((obj_t) BgL_arg2451z00_9856), BgL_arg0z00_8517, BEOA);
					}
					BgL_arg2450z00_9855 =
						BGl_zc3z04anonymousza32452ze3ze70z60zzast_walkz00(BgL_arg0z00_8517,
						BgL_pz00_8516,
						(((BgL_funcallz00_bglt) COBJECT(((BgL_funcallz00_bglt)
										BgL_nz00_8515)))->BgL_argsz00));
					BgL_res4266z00_9857 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg2449z00_9854,
						BgL_arg2450z00_9855);
				}
				return BgL_res4266z00_9857;
			}
		}

	}



/* <@anonymous:2452>~0 */
	obj_t BGl_zc3z04anonymousza32452ze3ze70z60zzast_walkz00(obj_t
		BgL_arg0z00_8777, obj_t BgL_pz00_8776, obj_t BgL_l1522z00_3196)
	{
		{	/* Ast/walk.scm 298 */
			if (NULLP(BgL_l1522z00_3196))
				{	/* Ast/walk.scm 298 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 298 */
					obj_t BgL_arg2455z00_3199;
					obj_t BgL_arg2456z00_3200;

					{	/* Ast/walk.scm 298 */
						obj_t BgL_fz00_3201;

						BgL_fz00_3201 = CAR(((obj_t) BgL_l1522z00_3196));
						BgL_arg2455z00_3199 =
							PROCEDURE_ENTRY(BgL_pz00_8776) (BgL_pz00_8776, BgL_fz00_3201,
							BgL_arg0z00_8777, BEOA);
					}
					{	/* Ast/walk.scm 298 */
						obj_t BgL_arg2457z00_3202;

						BgL_arg2457z00_3202 = CDR(((obj_t) BgL_l1522z00_3196));
						BgL_arg2456z00_3200 =
							BGl_zc3z04anonymousza32452ze3ze70z60zzast_walkz00
							(BgL_arg0z00_8777, BgL_pz00_8776, BgL_arg2457z00_3202);
					}
					return bgl_append2(BgL_arg2455z00_3199, BgL_arg2456z00_3200);
				}
		}

	}



/* &walk0*-funcall1765 */
	obj_t BGl_z62walk0za2zd2funcall1765z12zzast_walkz00(obj_t BgL_envz00_8518,
		obj_t BgL_nz00_8519, obj_t BgL_pz00_8520)
	{
		{	/* Ast/walk.scm 298 */
			{	/* Ast/walk.scm 298 */
				obj_t BgL_res4267z00_9862;

				{	/* Ast/walk.scm 298 */
					obj_t BgL_arg2439z00_9859;
					obj_t BgL_arg2441z00_9860;

					{	/* Ast/walk.scm 298 */
						BgL_nodez00_bglt BgL_arg2443z00_9861;

						BgL_arg2443z00_9861 =
							(((BgL_funcallz00_bglt) COBJECT(
									((BgL_funcallz00_bglt) BgL_nz00_8519)))->BgL_funz00);
						BgL_arg2439z00_9859 =
							PROCEDURE_ENTRY(BgL_pz00_8520) (BgL_pz00_8520,
							((obj_t) BgL_arg2443z00_9861), BEOA);
					}
					BgL_arg2441z00_9860 =
						BGl_zc3z04anonymousza32444ze3ze70z60zzast_walkz00(BgL_pz00_8520,
						(((BgL_funcallz00_bglt) COBJECT(
									((BgL_funcallz00_bglt) BgL_nz00_8519)))->BgL_argsz00));
					BgL_res4267z00_9862 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg2439z00_9859,
						BgL_arg2441z00_9860);
				}
				return BgL_res4267z00_9862;
			}
		}

	}



/* <@anonymous:2444>~0 */
	obj_t BGl_zc3z04anonymousza32444ze3ze70z60zzast_walkz00(obj_t BgL_pz00_8775,
		obj_t BgL_l1519z00_3176)
	{
		{	/* Ast/walk.scm 298 */
			if (NULLP(BgL_l1519z00_3176))
				{	/* Ast/walk.scm 298 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 298 */
					obj_t BgL_arg2446z00_3179;
					obj_t BgL_arg2447z00_3180;

					{	/* Ast/walk.scm 298 */
						obj_t BgL_fz00_3181;

						BgL_fz00_3181 = CAR(((obj_t) BgL_l1519z00_3176));
						BgL_arg2446z00_3179 =
							PROCEDURE_ENTRY(BgL_pz00_8775) (BgL_pz00_8775, BgL_fz00_3181,
							BEOA);
					}
					{	/* Ast/walk.scm 298 */
						obj_t BgL_arg2448z00_3182;

						BgL_arg2448z00_3182 = CDR(((obj_t) BgL_l1519z00_3176));
						BgL_arg2447z00_3180 =
							BGl_zc3z04anonymousza32444ze3ze70z60zzast_walkz00(BgL_pz00_8775,
							BgL_arg2448z00_3182);
					}
					return bgl_append2(BgL_arg2446z00_3179, BgL_arg2447z00_3180);
				}
		}

	}



/* &walk3-funcall1763 */
	obj_t BGl_z62walk3zd2funcall1763zb0zzast_walkz00(obj_t BgL_envz00_8521,
		obj_t BgL_nz00_8522, obj_t BgL_pz00_8523, obj_t BgL_arg0z00_8524,
		obj_t BgL_arg1z00_8525, obj_t BgL_arg2z00_8526)
	{
		{	/* Ast/walk.scm 298 */
			{	/* Ast/walk.scm 298 */
				BgL_nodez00_bglt BgL_arg2435z00_9864;

				BgL_arg2435z00_9864 =
					(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nz00_8522)))->BgL_funz00);
				PROCEDURE_ENTRY(BgL_pz00_8523) (BgL_pz00_8523,
					((obj_t) BgL_arg2435z00_9864), BgL_arg0z00_8524, BgL_arg1z00_8525,
					BgL_arg2z00_8526, BEOA);
			}
			{	/* Ast/walk.scm 298 */
				obj_t BgL_g1517z00_9865;

				BgL_g1517z00_9865 =
					(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nz00_8522)))->BgL_argsz00);
				{
					obj_t BgL_l1515z00_9867;

					{	/* Ast/walk.scm 298 */
						bool_t BgL_tmpz00_15374;

						BgL_l1515z00_9867 = BgL_g1517z00_9865;
					BgL_zc3z04anonymousza32436ze3z87_9866:
						if (PAIRP(BgL_l1515z00_9867))
							{	/* Ast/walk.scm 298 */
								{	/* Ast/walk.scm 298 */
									obj_t BgL_fz00_9868;

									BgL_fz00_9868 = CAR(BgL_l1515z00_9867);
									PROCEDURE_ENTRY(BgL_pz00_8523) (BgL_pz00_8523, BgL_fz00_9868,
										BgL_arg0z00_8524, BgL_arg1z00_8525, BgL_arg2z00_8526, BEOA);
								}
								{
									obj_t BgL_l1515z00_15385;

									BgL_l1515z00_15385 = CDR(BgL_l1515z00_9867);
									BgL_l1515z00_9867 = BgL_l1515z00_15385;
									goto BgL_zc3z04anonymousza32436ze3z87_9866;
								}
							}
						else
							{	/* Ast/walk.scm 298 */
								BgL_tmpz00_15374 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_15374);
					}
				}
			}
		}

	}



/* &walk2-funcall1761 */
	obj_t BGl_z62walk2zd2funcall1761zb0zzast_walkz00(obj_t BgL_envz00_8527,
		obj_t BgL_nz00_8528, obj_t BgL_pz00_8529, obj_t BgL_arg0z00_8530,
		obj_t BgL_arg1z00_8531)
	{
		{	/* Ast/walk.scm 298 */
			{	/* Ast/walk.scm 298 */
				BgL_nodez00_bglt BgL_arg2430z00_9870;

				BgL_arg2430z00_9870 =
					(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nz00_8528)))->BgL_funz00);
				PROCEDURE_ENTRY(BgL_pz00_8529) (BgL_pz00_8529,
					((obj_t) BgL_arg2430z00_9870), BgL_arg0z00_8530, BgL_arg1z00_8531,
					BEOA);
			}
			{	/* Ast/walk.scm 298 */
				obj_t BgL_g1514z00_9871;

				BgL_g1514z00_9871 =
					(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nz00_8528)))->BgL_argsz00);
				{
					obj_t BgL_l1512z00_9873;

					{	/* Ast/walk.scm 298 */
						bool_t BgL_tmpz00_15399;

						BgL_l1512z00_9873 = BgL_g1514z00_9871;
					BgL_zc3z04anonymousza32431ze3z87_9872:
						if (PAIRP(BgL_l1512z00_9873))
							{	/* Ast/walk.scm 298 */
								{	/* Ast/walk.scm 298 */
									obj_t BgL_fz00_9874;

									BgL_fz00_9874 = CAR(BgL_l1512z00_9873);
									PROCEDURE_ENTRY(BgL_pz00_8529) (BgL_pz00_8529, BgL_fz00_9874,
										BgL_arg0z00_8530, BgL_arg1z00_8531, BEOA);
								}
								{
									obj_t BgL_l1512z00_15409;

									BgL_l1512z00_15409 = CDR(BgL_l1512z00_9873);
									BgL_l1512z00_9873 = BgL_l1512z00_15409;
									goto BgL_zc3z04anonymousza32431ze3z87_9872;
								}
							}
						else
							{	/* Ast/walk.scm 298 */
								BgL_tmpz00_15399 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_15399);
					}
				}
			}
		}

	}



/* &walk1-funcall1759 */
	obj_t BGl_z62walk1zd2funcall1759zb0zzast_walkz00(obj_t BgL_envz00_8532,
		obj_t BgL_nz00_8533, obj_t BgL_pz00_8534, obj_t BgL_arg0z00_8535)
	{
		{	/* Ast/walk.scm 298 */
			{	/* Ast/walk.scm 298 */
				BgL_nodez00_bglt BgL_arg2425z00_9876;

				BgL_arg2425z00_9876 =
					(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nz00_8533)))->BgL_funz00);
				PROCEDURE_ENTRY(BgL_pz00_8534) (BgL_pz00_8534,
					((obj_t) BgL_arg2425z00_9876), BgL_arg0z00_8535, BEOA);
			}
			{	/* Ast/walk.scm 298 */
				obj_t BgL_g1511z00_9877;

				BgL_g1511z00_9877 =
					(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nz00_8533)))->BgL_argsz00);
				{
					obj_t BgL_l1509z00_9879;

					{	/* Ast/walk.scm 298 */
						bool_t BgL_tmpz00_15422;

						BgL_l1509z00_9879 = BgL_g1511z00_9877;
					BgL_zc3z04anonymousza32426ze3z87_9878:
						if (PAIRP(BgL_l1509z00_9879))
							{	/* Ast/walk.scm 298 */
								{	/* Ast/walk.scm 298 */
									obj_t BgL_fz00_9880;

									BgL_fz00_9880 = CAR(BgL_l1509z00_9879);
									PROCEDURE_ENTRY(BgL_pz00_8534) (BgL_pz00_8534, BgL_fz00_9880,
										BgL_arg0z00_8535, BEOA);
								}
								{
									obj_t BgL_l1509z00_15431;

									BgL_l1509z00_15431 = CDR(BgL_l1509z00_9879);
									BgL_l1509z00_9879 = BgL_l1509z00_15431;
									goto BgL_zc3z04anonymousza32426ze3z87_9878;
								}
							}
						else
							{	/* Ast/walk.scm 298 */
								BgL_tmpz00_15422 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_15422);
					}
				}
			}
		}

	}



/* &walk0-funcall1757 */
	obj_t BGl_z62walk0zd2funcall1757zb0zzast_walkz00(obj_t BgL_envz00_8536,
		obj_t BgL_nz00_8537, obj_t BgL_pz00_8538)
	{
		{	/* Ast/walk.scm 298 */
			{	/* Ast/walk.scm 298 */
				BgL_nodez00_bglt BgL_arg2420z00_9882;

				BgL_arg2420z00_9882 =
					(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nz00_8537)))->BgL_funz00);
				PROCEDURE_ENTRY(BgL_pz00_8538) (BgL_pz00_8538,
					((obj_t) BgL_arg2420z00_9882), BEOA);
			}
			{	/* Ast/walk.scm 298 */
				obj_t BgL_g1508z00_9883;

				BgL_g1508z00_9883 =
					(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nz00_8537)))->BgL_argsz00);
				{
					obj_t BgL_l1506z00_9885;

					{	/* Ast/walk.scm 298 */
						bool_t BgL_tmpz00_15443;

						BgL_l1506z00_9885 = BgL_g1508z00_9883;
					BgL_zc3z04anonymousza32421ze3z87_9884:
						if (PAIRP(BgL_l1506z00_9885))
							{	/* Ast/walk.scm 298 */
								{	/* Ast/walk.scm 298 */
									obj_t BgL_fz00_9886;

									BgL_fz00_9886 = CAR(BgL_l1506z00_9885);
									PROCEDURE_ENTRY(BgL_pz00_8538) (BgL_pz00_8538, BgL_fz00_9886,
										BEOA);
								}
								{
									obj_t BgL_l1506z00_15451;

									BgL_l1506z00_15451 = CDR(BgL_l1506z00_9885);
									BgL_l1506z00_9885 = BgL_l1506z00_15451;
									goto BgL_zc3z04anonymousza32421ze3z87_9884;
								}
							}
						else
							{	/* Ast/walk.scm 298 */
								BgL_tmpz00_15443 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_15443);
					}
				}
			}
		}

	}



/* &walk3!-app-ly1755 */
	BgL_nodez00_bglt BGl_z62walk3z12zd2appzd2ly1755z70zzast_walkz00(obj_t
		BgL_envz00_8539, obj_t BgL_nz00_8540, obj_t BgL_pz00_8541,
		obj_t BgL_arg0z00_8542, obj_t BgL_arg1z00_8543, obj_t BgL_arg2z00_8544)
	{
		{	/* Ast/walk.scm 297 */
			{
				BgL_nodez00_bglt BgL_auxz00_15454;

				{	/* Ast/walk.scm 297 */
					BgL_nodez00_bglt BgL_arg2418z00_9888;

					BgL_arg2418z00_9888 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nz00_8540)))->BgL_funz00);
					BgL_auxz00_15454 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8541) (BgL_pz00_8541,
							((obj_t) BgL_arg2418z00_9888), BgL_arg0z00_8542, BgL_arg1z00_8543,
							BgL_arg2z00_8544, BEOA));
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nz00_8540)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_15454), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_15468;

				{	/* Ast/walk.scm 297 */
					BgL_nodez00_bglt BgL_arg2419z00_9889;

					BgL_arg2419z00_9889 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nz00_8540)))->BgL_argz00);
					BgL_auxz00_15468 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8541) (BgL_pz00_8541,
							((obj_t) BgL_arg2419z00_9889), BgL_arg0z00_8542, BgL_arg1z00_8543,
							BgL_arg2z00_8544, BEOA));
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nz00_8540)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_15468), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nz00_8540));
		}

	}



/* &walk2!-app-ly1753 */
	BgL_nodez00_bglt BGl_z62walk2z12zd2appzd2ly1753z70zzast_walkz00(obj_t
		BgL_envz00_8545, obj_t BgL_nz00_8546, obj_t BgL_pz00_8547,
		obj_t BgL_arg0z00_8548, obj_t BgL_arg1z00_8549)
	{
		{	/* Ast/walk.scm 297 */
			{
				BgL_nodez00_bglt BgL_auxz00_15484;

				{	/* Ast/walk.scm 297 */
					BgL_nodez00_bglt BgL_arg2415z00_9891;

					BgL_arg2415z00_9891 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nz00_8546)))->BgL_funz00);
					BgL_auxz00_15484 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8547) (BgL_pz00_8547,
							((obj_t) BgL_arg2415z00_9891), BgL_arg0z00_8548, BgL_arg1z00_8549,
							BEOA));
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nz00_8546)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_15484), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_15497;

				{	/* Ast/walk.scm 297 */
					BgL_nodez00_bglt BgL_arg2416z00_9892;

					BgL_arg2416z00_9892 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nz00_8546)))->BgL_argz00);
					BgL_auxz00_15497 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8547) (BgL_pz00_8547,
							((obj_t) BgL_arg2416z00_9892), BgL_arg0z00_8548, BgL_arg1z00_8549,
							BEOA));
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nz00_8546)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_15497), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nz00_8546));
		}

	}



/* &walk1!-app-ly1751 */
	BgL_nodez00_bglt BGl_z62walk1z12zd2appzd2ly1751z70zzast_walkz00(obj_t
		BgL_envz00_8550, obj_t BgL_nz00_8551, obj_t BgL_pz00_8552,
		obj_t BgL_arg0z00_8553)
	{
		{	/* Ast/walk.scm 297 */
			{
				BgL_nodez00_bglt BgL_auxz00_15512;

				{	/* Ast/walk.scm 297 */
					BgL_nodez00_bglt BgL_arg2413z00_9894;

					BgL_arg2413z00_9894 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nz00_8551)))->BgL_funz00);
					BgL_auxz00_15512 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8552) (BgL_pz00_8552,
							((obj_t) BgL_arg2413z00_9894), BgL_arg0z00_8553, BEOA));
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nz00_8551)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_15512), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_15524;

				{	/* Ast/walk.scm 297 */
					BgL_nodez00_bglt BgL_arg2414z00_9895;

					BgL_arg2414z00_9895 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nz00_8551)))->BgL_argz00);
					BgL_auxz00_15524 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8552) (BgL_pz00_8552,
							((obj_t) BgL_arg2414z00_9895), BgL_arg0z00_8553, BEOA));
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nz00_8551)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_15524), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nz00_8551));
		}

	}



/* &walk0!-app-ly1749 */
	BgL_nodez00_bglt BGl_z62walk0z12zd2appzd2ly1749z70zzast_walkz00(obj_t
		BgL_envz00_8554, obj_t BgL_nz00_8555, obj_t BgL_pz00_8556)
	{
		{	/* Ast/walk.scm 297 */
			{
				BgL_nodez00_bglt BgL_auxz00_15538;

				{	/* Ast/walk.scm 297 */
					BgL_nodez00_bglt BgL_arg2411z00_9897;

					BgL_arg2411z00_9897 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nz00_8555)))->BgL_funz00);
					BgL_auxz00_15538 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8556) (BgL_pz00_8556,
							((obj_t) BgL_arg2411z00_9897), BEOA));
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nz00_8555)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_15538), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_15549;

				{	/* Ast/walk.scm 297 */
					BgL_nodez00_bglt BgL_arg2412z00_9898;

					BgL_arg2412z00_9898 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nz00_8555)))->BgL_argz00);
					BgL_auxz00_15549 =
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8556) (BgL_pz00_8556,
							((obj_t) BgL_arg2412z00_9898), BEOA));
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nz00_8555)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_15549), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nz00_8555));
		}

	}



/* &walk3*-app-ly1747 */
	obj_t BGl_z62walk3za2zd2appzd2ly1747zc0zzast_walkz00(obj_t BgL_envz00_8557,
		obj_t BgL_nz00_8558, obj_t BgL_pz00_8559, obj_t BgL_arg0z00_8560,
		obj_t BgL_arg1z00_8561, obj_t BgL_arg2z00_8562)
	{
		{	/* Ast/walk.scm 297 */
			{	/* Ast/walk.scm 297 */
				obj_t BgL_res4268z00_9904;

				{	/* Ast/walk.scm 297 */
					obj_t BgL_arg2405z00_9900;
					obj_t BgL_arg2406z00_9901;

					{	/* Ast/walk.scm 297 */
						BgL_nodez00_bglt BgL_arg2407z00_9902;

						BgL_arg2407z00_9902 =
							(((BgL_appzd2lyzd2_bglt) COBJECT(
									((BgL_appzd2lyzd2_bglt) BgL_nz00_8558)))->BgL_funz00);
						BgL_arg2405z00_9900 =
							PROCEDURE_ENTRY(BgL_pz00_8559) (BgL_pz00_8559,
							((obj_t) BgL_arg2407z00_9902), BgL_arg0z00_8560, BgL_arg1z00_8561,
							BgL_arg2z00_8562, BEOA);
					}
					{	/* Ast/walk.scm 297 */
						BgL_nodez00_bglt BgL_arg2409z00_9903;

						BgL_arg2409z00_9903 =
							(((BgL_appzd2lyzd2_bglt) COBJECT(
									((BgL_appzd2lyzd2_bglt) BgL_nz00_8558)))->BgL_argz00);
						BgL_arg2406z00_9901 =
							PROCEDURE_ENTRY(BgL_pz00_8559) (BgL_pz00_8559,
							((obj_t) BgL_arg2409z00_9903), BgL_arg0z00_8560, BgL_arg1z00_8561,
							BgL_arg2z00_8562, BEOA);
					}
					BgL_res4268z00_9904 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg2405z00_9900,
						BgL_arg2406z00_9901);
				}
				return BgL_res4268z00_9904;
			}
		}

	}



/* &walk2*-app-ly1745 */
	obj_t BGl_z62walk2za2zd2appzd2ly1745zc0zzast_walkz00(obj_t BgL_envz00_8563,
		obj_t BgL_nz00_8564, obj_t BgL_pz00_8565, obj_t BgL_arg0z00_8566,
		obj_t BgL_arg1z00_8567)
	{
		{	/* Ast/walk.scm 297 */
			{	/* Ast/walk.scm 297 */
				obj_t BgL_res4269z00_9910;

				{	/* Ast/walk.scm 297 */
					obj_t BgL_arg2398z00_9906;
					obj_t BgL_arg2399z00_9907;

					{	/* Ast/walk.scm 297 */
						BgL_nodez00_bglt BgL_arg2402z00_9908;

						BgL_arg2402z00_9908 =
							(((BgL_appzd2lyzd2_bglt) COBJECT(
									((BgL_appzd2lyzd2_bglt) BgL_nz00_8564)))->BgL_funz00);
						BgL_arg2398z00_9906 =
							PROCEDURE_ENTRY(BgL_pz00_8565) (BgL_pz00_8565,
							((obj_t) BgL_arg2402z00_9908), BgL_arg0z00_8566, BgL_arg1z00_8567,
							BEOA);
					}
					{	/* Ast/walk.scm 297 */
						BgL_nodez00_bglt BgL_arg2404z00_9909;

						BgL_arg2404z00_9909 =
							(((BgL_appzd2lyzd2_bglt) COBJECT(
									((BgL_appzd2lyzd2_bglt) BgL_nz00_8564)))->BgL_argz00);
						BgL_arg2399z00_9907 =
							PROCEDURE_ENTRY(BgL_pz00_8565) (BgL_pz00_8565,
							((obj_t) BgL_arg2404z00_9909), BgL_arg0z00_8566, BgL_arg1z00_8567,
							BEOA);
					}
					BgL_res4269z00_9910 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg2398z00_9906,
						BgL_arg2399z00_9907);
				}
				return BgL_res4269z00_9910;
			}
		}

	}



/* &walk1*-app-ly1743 */
	obj_t BGl_z62walk1za2zd2appzd2ly1743zc0zzast_walkz00(obj_t BgL_envz00_8568,
		obj_t BgL_nz00_8569, obj_t BgL_pz00_8570, obj_t BgL_arg0z00_8571)
	{
		{	/* Ast/walk.scm 297 */
			{	/* Ast/walk.scm 297 */
				obj_t BgL_res4270z00_9916;

				{	/* Ast/walk.scm 297 */
					obj_t BgL_arg2393z00_9912;
					obj_t BgL_arg2395z00_9913;

					{	/* Ast/walk.scm 297 */
						BgL_nodez00_bglt BgL_arg2396z00_9914;

						BgL_arg2396z00_9914 =
							(((BgL_appzd2lyzd2_bglt) COBJECT(
									((BgL_appzd2lyzd2_bglt) BgL_nz00_8569)))->BgL_funz00);
						BgL_arg2393z00_9912 =
							PROCEDURE_ENTRY(BgL_pz00_8570) (BgL_pz00_8570,
							((obj_t) BgL_arg2396z00_9914), BgL_arg0z00_8571, BEOA);
					}
					{	/* Ast/walk.scm 297 */
						BgL_nodez00_bglt BgL_arg2397z00_9915;

						BgL_arg2397z00_9915 =
							(((BgL_appzd2lyzd2_bglt) COBJECT(
									((BgL_appzd2lyzd2_bglt) BgL_nz00_8569)))->BgL_argz00);
						BgL_arg2395z00_9913 =
							PROCEDURE_ENTRY(BgL_pz00_8570) (BgL_pz00_8570,
							((obj_t) BgL_arg2397z00_9915), BgL_arg0z00_8571, BEOA);
					}
					BgL_res4270z00_9916 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg2393z00_9912,
						BgL_arg2395z00_9913);
				}
				return BgL_res4270z00_9916;
			}
		}

	}



/* &walk0*-app-ly1741 */
	obj_t BGl_z62walk0za2zd2appzd2ly1741zc0zzast_walkz00(obj_t BgL_envz00_8572,
		obj_t BgL_nz00_8573, obj_t BgL_pz00_8574)
	{
		{	/* Ast/walk.scm 297 */
			{	/* Ast/walk.scm 297 */
				obj_t BgL_res4271z00_9922;

				{	/* Ast/walk.scm 297 */
					obj_t BgL_arg2389z00_9918;
					obj_t BgL_arg2390z00_9919;

					{	/* Ast/walk.scm 297 */
						BgL_nodez00_bglt BgL_arg2391z00_9920;

						BgL_arg2391z00_9920 =
							(((BgL_appzd2lyzd2_bglt) COBJECT(
									((BgL_appzd2lyzd2_bglt) BgL_nz00_8573)))->BgL_funz00);
						BgL_arg2389z00_9918 =
							PROCEDURE_ENTRY(BgL_pz00_8574) (BgL_pz00_8574,
							((obj_t) BgL_arg2391z00_9920), BEOA);
					}
					{	/* Ast/walk.scm 297 */
						BgL_nodez00_bglt BgL_arg2392z00_9921;

						BgL_arg2392z00_9921 =
							(((BgL_appzd2lyzd2_bglt) COBJECT(
									((BgL_appzd2lyzd2_bglt) BgL_nz00_8573)))->BgL_argz00);
						BgL_arg2390z00_9919 =
							PROCEDURE_ENTRY(BgL_pz00_8574) (BgL_pz00_8574,
							((obj_t) BgL_arg2392z00_9921), BEOA);
					}
					BgL_res4271z00_9922 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg2389z00_9918,
						BgL_arg2390z00_9919);
				}
				return BgL_res4271z00_9922;
			}
		}

	}



/* &walk3-app-ly1739 */
	obj_t BGl_z62walk3zd2appzd2ly1739z62zzast_walkz00(obj_t BgL_envz00_8575,
		obj_t BgL_nz00_8576, obj_t BgL_pz00_8577, obj_t BgL_arg0z00_8578,
		obj_t BgL_arg1z00_8579, obj_t BgL_arg2z00_8580)
	{
		{	/* Ast/walk.scm 297 */
			{	/* Ast/walk.scm 297 */
				BgL_nodez00_bglt BgL_arg2385z00_9924;

				BgL_arg2385z00_9924 =
					(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nz00_8576)))->BgL_funz00);
				PROCEDURE_ENTRY(BgL_pz00_8577) (BgL_pz00_8577,
					((obj_t) BgL_arg2385z00_9924), BgL_arg0z00_8578, BgL_arg1z00_8579,
					BgL_arg2z00_8580, BEOA);
			}
			{	/* Ast/walk.scm 297 */
				BgL_nodez00_bglt BgL_arg2388z00_9925;

				BgL_arg2388z00_9925 =
					(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nz00_8576)))->BgL_argz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8577) (BgL_pz00_8577,
					((obj_t) BgL_arg2388z00_9925), BgL_arg0z00_8578, BgL_arg1z00_8579,
					BgL_arg2z00_8580, BEOA);
			}
		}

	}



/* &walk2-app-ly1737 */
	obj_t BGl_z62walk2zd2appzd2ly1737z62zzast_walkz00(obj_t BgL_envz00_8581,
		obj_t BgL_nz00_8582, obj_t BgL_pz00_8583, obj_t BgL_arg0z00_8584,
		obj_t BgL_arg1z00_8585)
	{
		{	/* Ast/walk.scm 297 */
			{	/* Ast/walk.scm 297 */
				BgL_nodez00_bglt BgL_arg2383z00_9927;

				BgL_arg2383z00_9927 =
					(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nz00_8582)))->BgL_funz00);
				PROCEDURE_ENTRY(BgL_pz00_8583) (BgL_pz00_8583,
					((obj_t) BgL_arg2383z00_9927), BgL_arg0z00_8584, BgL_arg1z00_8585,
					BEOA);
			}
			{	/* Ast/walk.scm 297 */
				BgL_nodez00_bglt BgL_arg2384z00_9928;

				BgL_arg2384z00_9928 =
					(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nz00_8582)))->BgL_argz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8583) (BgL_pz00_8583,
					((obj_t) BgL_arg2384z00_9928), BgL_arg0z00_8584, BgL_arg1z00_8585,
					BEOA);
			}
		}

	}



/* &walk1-app-ly1735 */
	obj_t BGl_z62walk1zd2appzd2ly1735z62zzast_walkz00(obj_t BgL_envz00_8586,
		obj_t BgL_nz00_8587, obj_t BgL_pz00_8588, obj_t BgL_arg0z00_8589)
	{
		{	/* Ast/walk.scm 297 */
			{	/* Ast/walk.scm 297 */
				BgL_nodez00_bglt BgL_arg2381z00_9930;

				BgL_arg2381z00_9930 =
					(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nz00_8587)))->BgL_funz00);
				PROCEDURE_ENTRY(BgL_pz00_8588) (BgL_pz00_8588,
					((obj_t) BgL_arg2381z00_9930), BgL_arg0z00_8589, BEOA);
			}
			{	/* Ast/walk.scm 297 */
				BgL_nodez00_bglt BgL_arg2382z00_9931;

				BgL_arg2382z00_9931 =
					(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nz00_8587)))->BgL_argz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8588) (BgL_pz00_8588,
					((obj_t) BgL_arg2382z00_9931), BgL_arg0z00_8589, BEOA);
			}
		}

	}



/* &walk0-app-ly1733 */
	obj_t BGl_z62walk0zd2appzd2ly1733z62zzast_walkz00(obj_t BgL_envz00_8590,
		obj_t BgL_nz00_8591, obj_t BgL_pz00_8592)
	{
		{	/* Ast/walk.scm 297 */
			{	/* Ast/walk.scm 297 */
				BgL_nodez00_bglt BgL_arg2379z00_9933;

				BgL_arg2379z00_9933 =
					(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nz00_8591)))->BgL_funz00);
				PROCEDURE_ENTRY(BgL_pz00_8592) (BgL_pz00_8592,
					((obj_t) BgL_arg2379z00_9933), BEOA);
			}
			{	/* Ast/walk.scm 297 */
				BgL_nodez00_bglt BgL_arg2380z00_9934;

				BgL_arg2380z00_9934 =
					(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nz00_8591)))->BgL_argz00);
				return
					PROCEDURE_ENTRY(BgL_pz00_8592) (BgL_pz00_8592,
					((obj_t) BgL_arg2380z00_9934), BEOA);
			}
		}

	}



/* &walk3!-app1731 */
	BgL_nodez00_bglt BGl_z62walk3z12zd2app1731za2zzast_walkz00(obj_t
		BgL_envz00_8593, obj_t BgL_nz00_8594, obj_t BgL_pz00_8595,
		obj_t BgL_arg0z00_8596, obj_t BgL_arg1z00_8597, obj_t BgL_arg2z00_8598)
	{
		{	/* Ast/walk.scm 296 */
			{
				BgL_varz00_bglt BgL_auxz00_15702;

				{	/* Ast/walk.scm 296 */
					BgL_varz00_bglt BgL_arg2370z00_9936;

					BgL_arg2370z00_9936 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nz00_8594)))->BgL_funz00);
					BgL_auxz00_15702 =
						((BgL_varz00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8595) (BgL_pz00_8595,
							((obj_t) BgL_arg2370z00_9936), BgL_arg0z00_8596, BgL_arg1z00_8597,
							BgL_arg2z00_8598, BEOA));
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nz00_8594)))->BgL_funz00) =
					((BgL_varz00_bglt) BgL_auxz00_15702), BUNSPEC);
			}
			{
				obj_t BgL_fieldsz00_9938;

				BgL_fieldsz00_9938 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nz00_8594)))->BgL_argsz00);
			BgL_loopz00_9937:
				if (NULLP(BgL_fieldsz00_9938))
					{	/* Ast/walk.scm 296 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 296 */
						{	/* Ast/walk.scm 296 */
							obj_t BgL_arg2374z00_9939;

							{	/* Ast/walk.scm 296 */
								obj_t BgL_arg2376z00_9940;

								BgL_arg2376z00_9940 = CAR(((obj_t) BgL_fieldsz00_9938));
								BgL_arg2374z00_9939 =
									PROCEDURE_ENTRY(BgL_pz00_8595) (BgL_pz00_8595,
									BgL_arg2376z00_9940, BgL_arg0z00_8596, BgL_arg1z00_8597,
									BgL_arg2z00_8598, BEOA);
							}
							{	/* Ast/walk.scm 296 */
								obj_t BgL_tmpz00_15727;

								BgL_tmpz00_15727 = ((obj_t) BgL_fieldsz00_9938);
								SET_CAR(BgL_tmpz00_15727, BgL_arg2374z00_9939);
							}
						}
						{	/* Ast/walk.scm 296 */
							obj_t BgL_arg2377z00_9941;

							BgL_arg2377z00_9941 = CDR(((obj_t) BgL_fieldsz00_9938));
							{
								obj_t BgL_fieldsz00_15732;

								BgL_fieldsz00_15732 = BgL_arg2377z00_9941;
								BgL_fieldsz00_9938 = BgL_fieldsz00_15732;
								goto BgL_loopz00_9937;
							}
						}
					}
			}
			return ((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nz00_8594));
		}

	}



/* &walk2!-app1729 */
	BgL_nodez00_bglt BGl_z62walk2z12zd2app1729za2zzast_walkz00(obj_t
		BgL_envz00_8599, obj_t BgL_nz00_8600, obj_t BgL_pz00_8601,
		obj_t BgL_arg0z00_8602, obj_t BgL_arg1z00_8603)
	{
		{	/* Ast/walk.scm 296 */
			{
				BgL_varz00_bglt BgL_auxz00_15737;

				{	/* Ast/walk.scm 296 */
					BgL_varz00_bglt BgL_arg2363z00_9943;

					BgL_arg2363z00_9943 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nz00_8600)))->BgL_funz00);
					BgL_auxz00_15737 =
						((BgL_varz00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8601) (BgL_pz00_8601,
							((obj_t) BgL_arg2363z00_9943), BgL_arg0z00_8602, BgL_arg1z00_8603,
							BEOA));
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nz00_8600)))->BgL_funz00) =
					((BgL_varz00_bglt) BgL_auxz00_15737), BUNSPEC);
			}
			{
				obj_t BgL_fieldsz00_9945;

				BgL_fieldsz00_9945 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nz00_8600)))->BgL_argsz00);
			BgL_loopz00_9944:
				if (NULLP(BgL_fieldsz00_9945))
					{	/* Ast/walk.scm 296 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 296 */
						{	/* Ast/walk.scm 296 */
							obj_t BgL_arg2367z00_9946;

							{	/* Ast/walk.scm 296 */
								obj_t BgL_arg2368z00_9947;

								BgL_arg2368z00_9947 = CAR(((obj_t) BgL_fieldsz00_9945));
								BgL_arg2367z00_9946 =
									PROCEDURE_ENTRY(BgL_pz00_8601) (BgL_pz00_8601,
									BgL_arg2368z00_9947, BgL_arg0z00_8602, BgL_arg1z00_8603,
									BEOA);
							}
							{	/* Ast/walk.scm 296 */
								obj_t BgL_tmpz00_15760;

								BgL_tmpz00_15760 = ((obj_t) BgL_fieldsz00_9945);
								SET_CAR(BgL_tmpz00_15760, BgL_arg2367z00_9946);
							}
						}
						{	/* Ast/walk.scm 296 */
							obj_t BgL_arg2369z00_9948;

							BgL_arg2369z00_9948 = CDR(((obj_t) BgL_fieldsz00_9945));
							{
								obj_t BgL_fieldsz00_15765;

								BgL_fieldsz00_15765 = BgL_arg2369z00_9948;
								BgL_fieldsz00_9945 = BgL_fieldsz00_15765;
								goto BgL_loopz00_9944;
							}
						}
					}
			}
			return ((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nz00_8600));
		}

	}



/* &walk1!-app1727 */
	BgL_nodez00_bglt BGl_z62walk1z12zd2app1727za2zzast_walkz00(obj_t
		BgL_envz00_8604, obj_t BgL_nz00_8605, obj_t BgL_pz00_8606,
		obj_t BgL_arg0z00_8607)
	{
		{	/* Ast/walk.scm 296 */
			{
				BgL_varz00_bglt BgL_auxz00_15770;

				{	/* Ast/walk.scm 296 */
					BgL_varz00_bglt BgL_arg2356z00_9950;

					BgL_arg2356z00_9950 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nz00_8605)))->BgL_funz00);
					BgL_auxz00_15770 =
						((BgL_varz00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8606) (BgL_pz00_8606,
							((obj_t) BgL_arg2356z00_9950), BgL_arg0z00_8607, BEOA));
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nz00_8605)))->BgL_funz00) =
					((BgL_varz00_bglt) BgL_auxz00_15770), BUNSPEC);
			}
			{
				obj_t BgL_fieldsz00_9952;

				BgL_fieldsz00_9952 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nz00_8605)))->BgL_argsz00);
			BgL_loopz00_9951:
				if (NULLP(BgL_fieldsz00_9952))
					{	/* Ast/walk.scm 296 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 296 */
						{	/* Ast/walk.scm 296 */
							obj_t BgL_arg2360z00_9953;

							{	/* Ast/walk.scm 296 */
								obj_t BgL_arg2361z00_9954;

								BgL_arg2361z00_9954 = CAR(((obj_t) BgL_fieldsz00_9952));
								BgL_arg2360z00_9953 =
									PROCEDURE_ENTRY(BgL_pz00_8606) (BgL_pz00_8606,
									BgL_arg2361z00_9954, BgL_arg0z00_8607, BEOA);
							}
							{	/* Ast/walk.scm 296 */
								obj_t BgL_tmpz00_15791;

								BgL_tmpz00_15791 = ((obj_t) BgL_fieldsz00_9952);
								SET_CAR(BgL_tmpz00_15791, BgL_arg2360z00_9953);
							}
						}
						{	/* Ast/walk.scm 296 */
							obj_t BgL_arg2362z00_9955;

							BgL_arg2362z00_9955 = CDR(((obj_t) BgL_fieldsz00_9952));
							{
								obj_t BgL_fieldsz00_15796;

								BgL_fieldsz00_15796 = BgL_arg2362z00_9955;
								BgL_fieldsz00_9952 = BgL_fieldsz00_15796;
								goto BgL_loopz00_9951;
							}
						}
					}
			}
			return ((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nz00_8605));
		}

	}



/* &walk0!-app1725 */
	BgL_nodez00_bglt BGl_z62walk0z12zd2app1725za2zzast_walkz00(obj_t
		BgL_envz00_8608, obj_t BgL_nz00_8609, obj_t BgL_pz00_8610)
	{
		{	/* Ast/walk.scm 296 */
			{
				BgL_varz00_bglt BgL_auxz00_15801;

				{	/* Ast/walk.scm 296 */
					BgL_varz00_bglt BgL_arg2349z00_9957;

					BgL_arg2349z00_9957 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nz00_8609)))->BgL_funz00);
					BgL_auxz00_15801 =
						((BgL_varz00_bglt)
						PROCEDURE_ENTRY(BgL_pz00_8610) (BgL_pz00_8610,
							((obj_t) BgL_arg2349z00_9957), BEOA));
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nz00_8609)))->BgL_funz00) =
					((BgL_varz00_bglt) BgL_auxz00_15801), BUNSPEC);
			}
			{
				obj_t BgL_fieldsz00_9959;

				BgL_fieldsz00_9959 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nz00_8609)))->BgL_argsz00);
			BgL_loopz00_9958:
				if (NULLP(BgL_fieldsz00_9959))
					{	/* Ast/walk.scm 296 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 296 */
						{	/* Ast/walk.scm 296 */
							obj_t BgL_arg2353z00_9960;

							{	/* Ast/walk.scm 296 */
								obj_t BgL_arg2354z00_9961;

								BgL_arg2354z00_9961 = CAR(((obj_t) BgL_fieldsz00_9959));
								BgL_arg2353z00_9960 =
									PROCEDURE_ENTRY(BgL_pz00_8610) (BgL_pz00_8610,
									BgL_arg2354z00_9961, BEOA);
							}
							{	/* Ast/walk.scm 296 */
								obj_t BgL_tmpz00_15820;

								BgL_tmpz00_15820 = ((obj_t) BgL_fieldsz00_9959);
								SET_CAR(BgL_tmpz00_15820, BgL_arg2353z00_9960);
							}
						}
						{	/* Ast/walk.scm 296 */
							obj_t BgL_arg2355z00_9962;

							BgL_arg2355z00_9962 = CDR(((obj_t) BgL_fieldsz00_9959));
							{
								obj_t BgL_fieldsz00_15825;

								BgL_fieldsz00_15825 = BgL_arg2355z00_9962;
								BgL_fieldsz00_9959 = BgL_fieldsz00_15825;
								goto BgL_loopz00_9958;
							}
						}
					}
			}
			return ((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nz00_8609));
		}

	}



/* &walk3*-app1722 */
	obj_t BGl_z62walk3za2zd2app1722z12zzast_walkz00(obj_t BgL_envz00_8611,
		obj_t BgL_nz00_8612, obj_t BgL_pz00_8613, obj_t BgL_arg0z00_8614,
		obj_t BgL_arg1z00_8615, obj_t BgL_arg2z00_8616)
	{
		{	/* Ast/walk.scm 296 */
			{	/* Ast/walk.scm 296 */
				obj_t BgL_res4272z00_9967;

				{	/* Ast/walk.scm 296 */
					obj_t BgL_arg2340z00_9964;
					obj_t BgL_arg2341z00_9965;

					{	/* Ast/walk.scm 296 */
						BgL_varz00_bglt BgL_arg2342z00_9966;

						BgL_arg2342z00_9966 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt) BgL_nz00_8612)))->BgL_funz00);
						BgL_arg2340z00_9964 =
							PROCEDURE_ENTRY(BgL_pz00_8613) (BgL_pz00_8613,
							((obj_t) BgL_arg2342z00_9966), BgL_arg0z00_8614, BgL_arg1z00_8615,
							BgL_arg2z00_8616, BEOA);
					}
					BgL_arg2341z00_9965 =
						BGl_zc3z04anonymousza32343ze3ze70z60zzast_walkz00(BgL_arg2z00_8616,
						BgL_arg1z00_8615, BgL_arg0z00_8614, BgL_pz00_8613,
						(((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_nz00_8612)))->
							BgL_argsz00));
					BgL_res4272z00_9967 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg2340z00_9964,
						BgL_arg2341z00_9965);
				}
				return BgL_res4272z00_9967;
			}
		}

	}



/* <@anonymous:2343>~0 */
	obj_t BGl_zc3z04anonymousza32343ze3ze70z60zzast_walkz00(obj_t
		BgL_arg2z00_8774, obj_t BgL_arg1z00_8773, obj_t BgL_arg0z00_8772,
		obj_t BgL_pz00_8771, obj_t BgL_l1504z00_2899)
	{
		{	/* Ast/walk.scm 296 */
			if (NULLP(BgL_l1504z00_2899))
				{	/* Ast/walk.scm 296 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 296 */
					obj_t BgL_arg2345z00_2902;
					obj_t BgL_arg2346z00_2903;

					{	/* Ast/walk.scm 296 */
						obj_t BgL_fz00_2904;

						BgL_fz00_2904 = CAR(((obj_t) BgL_l1504z00_2899));
						BgL_arg2345z00_2902 =
							PROCEDURE_ENTRY(BgL_pz00_8771) (BgL_pz00_8771, BgL_fz00_2904,
							BgL_arg0z00_8772, BgL_arg1z00_8773, BgL_arg2z00_8774, BEOA);
					}
					{	/* Ast/walk.scm 296 */
						obj_t BgL_arg2347z00_2905;

						BgL_arg2347z00_2905 = CDR(((obj_t) BgL_l1504z00_2899));
						BgL_arg2346z00_2903 =
							BGl_zc3z04anonymousza32343ze3ze70z60zzast_walkz00
							(BgL_arg2z00_8774, BgL_arg1z00_8773, BgL_arg0z00_8772,
							BgL_pz00_8771, BgL_arg2347z00_2905);
					}
					return bgl_append2(BgL_arg2345z00_2902, BgL_arg2346z00_2903);
				}
		}

	}



/* &walk2*-app1720 */
	obj_t BGl_z62walk2za2zd2app1720z12zzast_walkz00(obj_t BgL_envz00_8617,
		obj_t BgL_nz00_8618, obj_t BgL_pz00_8619, obj_t BgL_arg0z00_8620,
		obj_t BgL_arg1z00_8621)
	{
		{	/* Ast/walk.scm 296 */
			{	/* Ast/walk.scm 296 */
				obj_t BgL_res4273z00_9972;

				{	/* Ast/walk.scm 296 */
					obj_t BgL_arg2331z00_9969;
					obj_t BgL_arg2332z00_9970;

					{	/* Ast/walk.scm 296 */
						BgL_varz00_bglt BgL_arg2334z00_9971;

						BgL_arg2334z00_9971 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt) BgL_nz00_8618)))->BgL_funz00);
						BgL_arg2331z00_9969 =
							PROCEDURE_ENTRY(BgL_pz00_8619) (BgL_pz00_8619,
							((obj_t) BgL_arg2334z00_9971), BgL_arg0z00_8620, BgL_arg1z00_8621,
							BEOA);
					}
					BgL_arg2332z00_9970 =
						BGl_zc3z04anonymousza32335ze3ze70z60zzast_walkz00(BgL_arg1z00_8621,
						BgL_arg0z00_8620, BgL_pz00_8619,
						(((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_nz00_8618)))->
							BgL_argsz00));
					BgL_res4273z00_9972 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg2331z00_9969,
						BgL_arg2332z00_9970);
				}
				return BgL_res4273z00_9972;
			}
		}

	}



/* <@anonymous:2335>~0 */
	obj_t BGl_zc3z04anonymousza32335ze3ze70z60zzast_walkz00(obj_t
		BgL_arg1z00_8770, obj_t BgL_arg0z00_8769, obj_t BgL_pz00_8768,
		obj_t BgL_l1501z00_2877)
	{
		{	/* Ast/walk.scm 296 */
			if (NULLP(BgL_l1501z00_2877))
				{	/* Ast/walk.scm 296 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 296 */
					obj_t BgL_arg2337z00_2880;
					obj_t BgL_arg2338z00_2881;

					{	/* Ast/walk.scm 296 */
						obj_t BgL_fz00_2882;

						BgL_fz00_2882 = CAR(((obj_t) BgL_l1501z00_2877));
						BgL_arg2337z00_2880 =
							PROCEDURE_ENTRY(BgL_pz00_8768) (BgL_pz00_8768, BgL_fz00_2882,
							BgL_arg0z00_8769, BgL_arg1z00_8770, BEOA);
					}
					{	/* Ast/walk.scm 296 */
						obj_t BgL_arg2339z00_2883;

						BgL_arg2339z00_2883 = CDR(((obj_t) BgL_l1501z00_2877));
						BgL_arg2338z00_2881 =
							BGl_zc3z04anonymousza32335ze3ze70z60zzast_walkz00
							(BgL_arg1z00_8770, BgL_arg0z00_8769, BgL_pz00_8768,
							BgL_arg2339z00_2883);
					}
					return bgl_append2(BgL_arg2337z00_2880, BgL_arg2338z00_2881);
				}
		}

	}



/* &walk1*-app1718 */
	obj_t BGl_z62walk1za2zd2app1718z12zzast_walkz00(obj_t BgL_envz00_8622,
		obj_t BgL_nz00_8623, obj_t BgL_pz00_8624, obj_t BgL_arg0z00_8625)
	{
		{	/* Ast/walk.scm 296 */
			{	/* Ast/walk.scm 296 */
				obj_t BgL_res4274z00_9977;

				{	/* Ast/walk.scm 296 */
					obj_t BgL_arg2322z00_9974;
					obj_t BgL_arg2323z00_9975;

					{	/* Ast/walk.scm 296 */
						BgL_varz00_bglt BgL_arg2324z00_9976;

						BgL_arg2324z00_9976 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt) BgL_nz00_8623)))->BgL_funz00);
						BgL_arg2322z00_9974 =
							PROCEDURE_ENTRY(BgL_pz00_8624) (BgL_pz00_8624,
							((obj_t) BgL_arg2324z00_9976), BgL_arg0z00_8625, BEOA);
					}
					BgL_arg2323z00_9975 =
						BGl_zc3z04anonymousza32325ze3ze70z60zzast_walkz00(BgL_arg0z00_8625,
						BgL_pz00_8624,
						(((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_nz00_8623)))->
							BgL_argsz00));
					BgL_res4274z00_9977 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg2322z00_9974,
						BgL_arg2323z00_9975);
				}
				return BgL_res4274z00_9977;
			}
		}

	}



/* <@anonymous:2325>~0 */
	obj_t BGl_zc3z04anonymousza32325ze3ze70z60zzast_walkz00(obj_t
		BgL_arg0z00_8767, obj_t BgL_pz00_8766, obj_t BgL_l1498z00_2856)
	{
		{	/* Ast/walk.scm 296 */
			if (NULLP(BgL_l1498z00_2856))
				{	/* Ast/walk.scm 296 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 296 */
					obj_t BgL_arg2327z00_2859;
					obj_t BgL_arg2328z00_2860;

					{	/* Ast/walk.scm 296 */
						obj_t BgL_fz00_2861;

						BgL_fz00_2861 = CAR(((obj_t) BgL_l1498z00_2856));
						BgL_arg2327z00_2859 =
							PROCEDURE_ENTRY(BgL_pz00_8766) (BgL_pz00_8766, BgL_fz00_2861,
							BgL_arg0z00_8767, BEOA);
					}
					{	/* Ast/walk.scm 296 */
						obj_t BgL_arg2329z00_2862;

						BgL_arg2329z00_2862 = CDR(((obj_t) BgL_l1498z00_2856));
						BgL_arg2328z00_2860 =
							BGl_zc3z04anonymousza32325ze3ze70z60zzast_walkz00
							(BgL_arg0z00_8767, BgL_pz00_8766, BgL_arg2329z00_2862);
					}
					return bgl_append2(BgL_arg2327z00_2859, BgL_arg2328z00_2860);
				}
		}

	}



/* &walk0*-app1716 */
	obj_t BGl_z62walk0za2zd2app1716z12zzast_walkz00(obj_t BgL_envz00_8626,
		obj_t BgL_nz00_8627, obj_t BgL_pz00_8628)
	{
		{	/* Ast/walk.scm 296 */
			{	/* Ast/walk.scm 296 */
				obj_t BgL_res4275z00_9982;

				{	/* Ast/walk.scm 296 */
					obj_t BgL_arg2313z00_9979;
					obj_t BgL_arg2314z00_9980;

					{	/* Ast/walk.scm 296 */
						BgL_varz00_bglt BgL_arg2316z00_9981;

						BgL_arg2316z00_9981 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt) BgL_nz00_8627)))->BgL_funz00);
						BgL_arg2313z00_9979 =
							PROCEDURE_ENTRY(BgL_pz00_8628) (BgL_pz00_8628,
							((obj_t) BgL_arg2316z00_9981), BEOA);
					}
					BgL_arg2314z00_9980 =
						BGl_zc3z04anonymousza32317ze3ze70z60zzast_walkz00(BgL_pz00_8628,
						(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt) BgL_nz00_8627)))->BgL_argsz00));
					BgL_res4275z00_9982 =
						BGl_appendzd221011zd2zzast_walkz00(BgL_arg2313z00_9979,
						BgL_arg2314z00_9980);
				}
				return BgL_res4275z00_9982;
			}
		}

	}



/* <@anonymous:2317>~0 */
	obj_t BGl_zc3z04anonymousza32317ze3ze70z60zzast_walkz00(obj_t BgL_pz00_8765,
		obj_t BgL_l1495z00_2836)
	{
		{	/* Ast/walk.scm 296 */
			if (NULLP(BgL_l1495z00_2836))
				{	/* Ast/walk.scm 296 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 296 */
					obj_t BgL_arg2319z00_2839;
					obj_t BgL_arg2320z00_2840;

					{	/* Ast/walk.scm 296 */
						obj_t BgL_fz00_2841;

						BgL_fz00_2841 = CAR(((obj_t) BgL_l1495z00_2836));
						BgL_arg2319z00_2839 =
							PROCEDURE_ENTRY(BgL_pz00_8765) (BgL_pz00_8765, BgL_fz00_2841,
							BEOA);
					}
					{	/* Ast/walk.scm 296 */
						obj_t BgL_arg2321z00_2842;

						BgL_arg2321z00_2842 = CDR(((obj_t) BgL_l1495z00_2836));
						BgL_arg2320z00_2840 =
							BGl_zc3z04anonymousza32317ze3ze70z60zzast_walkz00(BgL_pz00_8765,
							BgL_arg2321z00_2842);
					}
					return bgl_append2(BgL_arg2319z00_2839, BgL_arg2320z00_2840);
				}
		}

	}



/* &walk3-app1714 */
	obj_t BGl_z62walk3zd2app1714zb0zzast_walkz00(obj_t BgL_envz00_8629,
		obj_t BgL_nz00_8630, obj_t BgL_pz00_8631, obj_t BgL_arg0z00_8632,
		obj_t BgL_arg1z00_8633, obj_t BgL_arg2z00_8634)
	{
		{	/* Ast/walk.scm 296 */
			{	/* Ast/walk.scm 296 */
				BgL_varz00_bglt BgL_arg2309z00_9984;

				BgL_arg2309z00_9984 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nz00_8630)))->BgL_funz00);
				PROCEDURE_ENTRY(BgL_pz00_8631) (BgL_pz00_8631,
					((obj_t) BgL_arg2309z00_9984), BgL_arg0z00_8632, BgL_arg1z00_8633,
					BgL_arg2z00_8634, BEOA);
			}
			{	/* Ast/walk.scm 296 */
				obj_t BgL_g1493z00_9985;

				BgL_g1493z00_9985 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nz00_8630)))->BgL_argsz00);
				{
					obj_t BgL_l1491z00_9987;

					{	/* Ast/walk.scm 296 */
						bool_t BgL_tmpz00_15946;

						BgL_l1491z00_9987 = BgL_g1493z00_9985;
					BgL_zc3z04anonymousza32310ze3z87_9986:
						if (PAIRP(BgL_l1491z00_9987))
							{	/* Ast/walk.scm 296 */
								{	/* Ast/walk.scm 296 */
									obj_t BgL_fz00_9988;

									BgL_fz00_9988 = CAR(BgL_l1491z00_9987);
									PROCEDURE_ENTRY(BgL_pz00_8631) (BgL_pz00_8631, BgL_fz00_9988,
										BgL_arg0z00_8632, BgL_arg1z00_8633, BgL_arg2z00_8634, BEOA);
								}
								{
									obj_t BgL_l1491z00_15957;

									BgL_l1491z00_15957 = CDR(BgL_l1491z00_9987);
									BgL_l1491z00_9987 = BgL_l1491z00_15957;
									goto BgL_zc3z04anonymousza32310ze3z87_9986;
								}
							}
						else
							{	/* Ast/walk.scm 296 */
								BgL_tmpz00_15946 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_15946);
					}
				}
			}
		}

	}



/* &walk2-app1712 */
	obj_t BGl_z62walk2zd2app1712zb0zzast_walkz00(obj_t BgL_envz00_8635,
		obj_t BgL_nz00_8636, obj_t BgL_pz00_8637, obj_t BgL_arg0z00_8638,
		obj_t BgL_arg1z00_8639)
	{
		{	/* Ast/walk.scm 296 */
			{	/* Ast/walk.scm 296 */
				BgL_varz00_bglt BgL_arg2305z00_9990;

				BgL_arg2305z00_9990 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nz00_8636)))->BgL_funz00);
				PROCEDURE_ENTRY(BgL_pz00_8637) (BgL_pz00_8637,
					((obj_t) BgL_arg2305z00_9990), BgL_arg0z00_8638, BgL_arg1z00_8639,
					BEOA);
			}
			{	/* Ast/walk.scm 296 */
				obj_t BgL_g1490z00_9991;

				BgL_g1490z00_9991 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nz00_8636)))->BgL_argsz00);
				{
					obj_t BgL_l1488z00_9993;

					{	/* Ast/walk.scm 296 */
						bool_t BgL_tmpz00_15971;

						BgL_l1488z00_9993 = BgL_g1490z00_9991;
					BgL_zc3z04anonymousza32306ze3z87_9992:
						if (PAIRP(BgL_l1488z00_9993))
							{	/* Ast/walk.scm 296 */
								{	/* Ast/walk.scm 296 */
									obj_t BgL_fz00_9994;

									BgL_fz00_9994 = CAR(BgL_l1488z00_9993);
									PROCEDURE_ENTRY(BgL_pz00_8637) (BgL_pz00_8637, BgL_fz00_9994,
										BgL_arg0z00_8638, BgL_arg1z00_8639, BEOA);
								}
								{
									obj_t BgL_l1488z00_15981;

									BgL_l1488z00_15981 = CDR(BgL_l1488z00_9993);
									BgL_l1488z00_9993 = BgL_l1488z00_15981;
									goto BgL_zc3z04anonymousza32306ze3z87_9992;
								}
							}
						else
							{	/* Ast/walk.scm 296 */
								BgL_tmpz00_15971 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_15971);
					}
				}
			}
		}

	}



/* &walk1-app1710 */
	obj_t BGl_z62walk1zd2app1710zb0zzast_walkz00(obj_t BgL_envz00_8640,
		obj_t BgL_nz00_8641, obj_t BgL_pz00_8642, obj_t BgL_arg0z00_8643)
	{
		{	/* Ast/walk.scm 296 */
			{	/* Ast/walk.scm 296 */
				BgL_varz00_bglt BgL_arg2300z00_9996;

				BgL_arg2300z00_9996 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nz00_8641)))->BgL_funz00);
				PROCEDURE_ENTRY(BgL_pz00_8642) (BgL_pz00_8642,
					((obj_t) BgL_arg2300z00_9996), BgL_arg0z00_8643, BEOA);
			}
			{	/* Ast/walk.scm 296 */
				obj_t BgL_g1487z00_9997;

				BgL_g1487z00_9997 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nz00_8641)))->BgL_argsz00);
				{
					obj_t BgL_l1485z00_9999;

					{	/* Ast/walk.scm 296 */
						bool_t BgL_tmpz00_15994;

						BgL_l1485z00_9999 = BgL_g1487z00_9997;
					BgL_zc3z04anonymousza32301ze3z87_9998:
						if (PAIRP(BgL_l1485z00_9999))
							{	/* Ast/walk.scm 296 */
								{	/* Ast/walk.scm 296 */
									obj_t BgL_fz00_10000;

									BgL_fz00_10000 = CAR(BgL_l1485z00_9999);
									PROCEDURE_ENTRY(BgL_pz00_8642) (BgL_pz00_8642, BgL_fz00_10000,
										BgL_arg0z00_8643, BEOA);
								}
								{
									obj_t BgL_l1485z00_16003;

									BgL_l1485z00_16003 = CDR(BgL_l1485z00_9999);
									BgL_l1485z00_9999 = BgL_l1485z00_16003;
									goto BgL_zc3z04anonymousza32301ze3z87_9998;
								}
							}
						else
							{	/* Ast/walk.scm 296 */
								BgL_tmpz00_15994 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_15994);
					}
				}
			}
		}

	}



/* &walk0-app1708 */
	obj_t BGl_z62walk0zd2app1708zb0zzast_walkz00(obj_t BgL_envz00_8644,
		obj_t BgL_nz00_8645, obj_t BgL_pz00_8646)
	{
		{	/* Ast/walk.scm 296 */
			{	/* Ast/walk.scm 296 */
				BgL_varz00_bglt BgL_arg2296z00_10002;

				BgL_arg2296z00_10002 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nz00_8645)))->BgL_funz00);
				PROCEDURE_ENTRY(BgL_pz00_8646) (BgL_pz00_8646,
					((obj_t) BgL_arg2296z00_10002), BEOA);
			}
			{	/* Ast/walk.scm 296 */
				obj_t BgL_g1484z00_10003;

				BgL_g1484z00_10003 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nz00_8645)))->BgL_argsz00);
				{
					obj_t BgL_l1482z00_10005;

					{	/* Ast/walk.scm 296 */
						bool_t BgL_tmpz00_16015;

						BgL_l1482z00_10005 = BgL_g1484z00_10003;
					BgL_zc3z04anonymousza32297ze3z87_10004:
						if (PAIRP(BgL_l1482z00_10005))
							{	/* Ast/walk.scm 296 */
								{	/* Ast/walk.scm 296 */
									obj_t BgL_fz00_10006;

									BgL_fz00_10006 = CAR(BgL_l1482z00_10005);
									PROCEDURE_ENTRY(BgL_pz00_8646) (BgL_pz00_8646, BgL_fz00_10006,
										BEOA);
								}
								{
									obj_t BgL_l1482z00_16023;

									BgL_l1482z00_16023 = CDR(BgL_l1482z00_10005);
									BgL_l1482z00_10005 = BgL_l1482z00_16023;
									goto BgL_zc3z04anonymousza32297ze3z87_10004;
								}
							}
						else
							{	/* Ast/walk.scm 296 */
								BgL_tmpz00_16015 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_16015);
					}
				}
			}
		}

	}



/* &walk3!-sequence1706 */
	BgL_nodez00_bglt BGl_z62walk3z12zd2sequence1706za2zzast_walkz00(obj_t
		BgL_envz00_8647, obj_t BgL_nz00_8648, obj_t BgL_pz00_8649,
		obj_t BgL_arg0z00_8650, obj_t BgL_arg1z00_8651, obj_t BgL_arg2z00_8652)
	{
		{	/* Ast/walk.scm 295 */
			{
				obj_t BgL_fieldsz00_10009;

				BgL_fieldsz00_10009 =
					(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nz00_8648)))->BgL_nodesz00);
			BgL_loopz00_10008:
				if (NULLP(BgL_fieldsz00_10009))
					{	/* Ast/walk.scm 295 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 295 */
						{	/* Ast/walk.scm 295 */
							obj_t BgL_arg2292z00_10010;

							{	/* Ast/walk.scm 295 */
								obj_t BgL_arg2294z00_10011;

								BgL_arg2294z00_10011 = CAR(((obj_t) BgL_fieldsz00_10009));
								BgL_arg2292z00_10010 =
									PROCEDURE_ENTRY(BgL_pz00_8649) (BgL_pz00_8649,
									BgL_arg2294z00_10011, BgL_arg0z00_8650, BgL_arg1z00_8651,
									BgL_arg2z00_8652, BEOA);
							}
							{	/* Ast/walk.scm 295 */
								obj_t BgL_tmpz00_16037;

								BgL_tmpz00_16037 = ((obj_t) BgL_fieldsz00_10009);
								SET_CAR(BgL_tmpz00_16037, BgL_arg2292z00_10010);
							}
						}
						{	/* Ast/walk.scm 295 */
							obj_t BgL_arg2295z00_10012;

							BgL_arg2295z00_10012 = CDR(((obj_t) BgL_fieldsz00_10009));
							{
								obj_t BgL_fieldsz00_16042;

								BgL_fieldsz00_16042 = BgL_arg2295z00_10012;
								BgL_fieldsz00_10009 = BgL_fieldsz00_16042;
								goto BgL_loopz00_10008;
							}
						}
					}
			}
			return ((BgL_nodez00_bglt) ((BgL_sequencez00_bglt) BgL_nz00_8648));
		}

	}



/* &walk2!-sequence1704 */
	BgL_nodez00_bglt BGl_z62walk2z12zd2sequence1704za2zzast_walkz00(obj_t
		BgL_envz00_8653, obj_t BgL_nz00_8654, obj_t BgL_pz00_8655,
		obj_t BgL_arg0z00_8656, obj_t BgL_arg1z00_8657)
	{
		{	/* Ast/walk.scm 295 */
			{
				obj_t BgL_fieldsz00_10015;

				BgL_fieldsz00_10015 =
					(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nz00_8654)))->BgL_nodesz00);
			BgL_loopz00_10014:
				if (NULLP(BgL_fieldsz00_10015))
					{	/* Ast/walk.scm 295 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 295 */
						{	/* Ast/walk.scm 295 */
							obj_t BgL_arg2286z00_10016;

							{	/* Ast/walk.scm 295 */
								obj_t BgL_arg2287z00_10017;

								BgL_arg2287z00_10017 = CAR(((obj_t) BgL_fieldsz00_10015));
								BgL_arg2286z00_10016 =
									PROCEDURE_ENTRY(BgL_pz00_8655) (BgL_pz00_8655,
									BgL_arg2287z00_10017, BgL_arg0z00_8656, BgL_arg1z00_8657,
									BEOA);
							}
							{	/* Ast/walk.scm 295 */
								obj_t BgL_tmpz00_16057;

								BgL_tmpz00_16057 = ((obj_t) BgL_fieldsz00_10015);
								SET_CAR(BgL_tmpz00_16057, BgL_arg2286z00_10016);
							}
						}
						{	/* Ast/walk.scm 295 */
							obj_t BgL_arg2288z00_10018;

							BgL_arg2288z00_10018 = CDR(((obj_t) BgL_fieldsz00_10015));
							{
								obj_t BgL_fieldsz00_16062;

								BgL_fieldsz00_16062 = BgL_arg2288z00_10018;
								BgL_fieldsz00_10015 = BgL_fieldsz00_16062;
								goto BgL_loopz00_10014;
							}
						}
					}
			}
			return ((BgL_nodez00_bglt) ((BgL_sequencez00_bglt) BgL_nz00_8654));
		}

	}



/* &walk1!-sequence1702 */
	BgL_nodez00_bglt BGl_z62walk1z12zd2sequence1702za2zzast_walkz00(obj_t
		BgL_envz00_8658, obj_t BgL_nz00_8659, obj_t BgL_pz00_8660,
		obj_t BgL_arg0z00_8661)
	{
		{	/* Ast/walk.scm 295 */
			{
				obj_t BgL_fieldsz00_10021;

				BgL_fieldsz00_10021 =
					(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nz00_8659)))->BgL_nodesz00);
			BgL_loopz00_10020:
				if (NULLP(BgL_fieldsz00_10021))
					{	/* Ast/walk.scm 295 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 295 */
						{	/* Ast/walk.scm 295 */
							obj_t BgL_arg2280z00_10022;

							{	/* Ast/walk.scm 295 */
								obj_t BgL_arg2281z00_10023;

								BgL_arg2281z00_10023 = CAR(((obj_t) BgL_fieldsz00_10021));
								BgL_arg2280z00_10022 =
									PROCEDURE_ENTRY(BgL_pz00_8660) (BgL_pz00_8660,
									BgL_arg2281z00_10023, BgL_arg0z00_8661, BEOA);
							}
							{	/* Ast/walk.scm 295 */
								obj_t BgL_tmpz00_16076;

								BgL_tmpz00_16076 = ((obj_t) BgL_fieldsz00_10021);
								SET_CAR(BgL_tmpz00_16076, BgL_arg2280z00_10022);
							}
						}
						{	/* Ast/walk.scm 295 */
							obj_t BgL_arg2282z00_10024;

							BgL_arg2282z00_10024 = CDR(((obj_t) BgL_fieldsz00_10021));
							{
								obj_t BgL_fieldsz00_16081;

								BgL_fieldsz00_16081 = BgL_arg2282z00_10024;
								BgL_fieldsz00_10021 = BgL_fieldsz00_16081;
								goto BgL_loopz00_10020;
							}
						}
					}
			}
			return ((BgL_nodez00_bglt) ((BgL_sequencez00_bglt) BgL_nz00_8659));
		}

	}



/* &walk0!-sequence1700 */
	BgL_nodez00_bglt BGl_z62walk0z12zd2sequence1700za2zzast_walkz00(obj_t
		BgL_envz00_8662, obj_t BgL_nz00_8663, obj_t BgL_pz00_8664)
	{
		{	/* Ast/walk.scm 295 */
			{
				obj_t BgL_fieldsz00_10027;

				BgL_fieldsz00_10027 =
					(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nz00_8663)))->BgL_nodesz00);
			BgL_loopz00_10026:
				if (NULLP(BgL_fieldsz00_10027))
					{	/* Ast/walk.scm 295 */
						((bool_t) 0);
					}
				else
					{	/* Ast/walk.scm 295 */
						{	/* Ast/walk.scm 295 */
							obj_t BgL_arg2272z00_10028;

							{	/* Ast/walk.scm 295 */
								obj_t BgL_arg2273z00_10029;

								BgL_arg2273z00_10029 = CAR(((obj_t) BgL_fieldsz00_10027));
								BgL_arg2272z00_10028 =
									PROCEDURE_ENTRY(BgL_pz00_8664) (BgL_pz00_8664,
									BgL_arg2273z00_10029, BEOA);
							}
							{	/* Ast/walk.scm 295 */
								obj_t BgL_tmpz00_16094;

								BgL_tmpz00_16094 = ((obj_t) BgL_fieldsz00_10027);
								SET_CAR(BgL_tmpz00_16094, BgL_arg2272z00_10028);
							}
						}
						{	/* Ast/walk.scm 295 */
							obj_t BgL_arg2275z00_10030;

							BgL_arg2275z00_10030 = CDR(((obj_t) BgL_fieldsz00_10027));
							{
								obj_t BgL_fieldsz00_16099;

								BgL_fieldsz00_16099 = BgL_arg2275z00_10030;
								BgL_fieldsz00_10027 = BgL_fieldsz00_16099;
								goto BgL_loopz00_10026;
							}
						}
					}
			}
			return ((BgL_nodez00_bglt) ((BgL_sequencez00_bglt) BgL_nz00_8663));
		}

	}



/* &walk3*-sequence1697 */
	obj_t BGl_z62walk3za2zd2sequence1697z12zzast_walkz00(obj_t BgL_envz00_8665,
		obj_t BgL_nz00_8666, obj_t BgL_pz00_8667, obj_t BgL_arg0z00_8668,
		obj_t BgL_arg1z00_8669, obj_t BgL_arg2z00_8670)
	{
		{	/* Ast/walk.scm 295 */
			{	/* Ast/walk.scm 295 */
				obj_t BgL_res4276z00_10034;

				{	/* Ast/walk.scm 295 */
					obj_t BgL_arg2261z00_10032;

					BgL_arg2261z00_10032 =
						BGl_zc3z04anonymousza32263ze3ze70z60zzast_walkz00(BgL_arg2z00_8670,
						BgL_arg1z00_8669, BgL_arg0z00_8668, BgL_pz00_8667,
						(((BgL_sequencez00_bglt) COBJECT(((BgL_sequencez00_bglt)
										BgL_nz00_8666)))->BgL_nodesz00));
					{	/* Ast/walk.scm 295 */
						obj_t BgL_list2262z00_10033;

						BgL_list2262z00_10033 = MAKE_YOUNG_PAIR(BgL_arg2261z00_10032, BNIL);
						BgL_res4276z00_10034 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2262z00_10033);
					}
				}
				return BgL_res4276z00_10034;
			}
		}

	}



/* <@anonymous:2263>~0 */
	obj_t BGl_zc3z04anonymousza32263ze3ze70z60zzast_walkz00(obj_t
		BgL_arg2z00_8764, obj_t BgL_arg1z00_8763, obj_t BgL_arg0z00_8762,
		obj_t BgL_pz00_8761, obj_t BgL_l1480z00_2685)
	{
		{	/* Ast/walk.scm 295 */
			if (NULLP(BgL_l1480z00_2685))
				{	/* Ast/walk.scm 295 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 295 */
					obj_t BgL_arg2265z00_2688;
					obj_t BgL_arg2267z00_2689;

					{	/* Ast/walk.scm 295 */
						obj_t BgL_fz00_2690;

						BgL_fz00_2690 = CAR(((obj_t) BgL_l1480z00_2685));
						BgL_arg2265z00_2688 =
							PROCEDURE_ENTRY(BgL_pz00_8761) (BgL_pz00_8761, BgL_fz00_2690,
							BgL_arg0z00_8762, BgL_arg1z00_8763, BgL_arg2z00_8764, BEOA);
					}
					{	/* Ast/walk.scm 295 */
						obj_t BgL_arg2268z00_2691;

						BgL_arg2268z00_2691 = CDR(((obj_t) BgL_l1480z00_2685));
						BgL_arg2267z00_2689 =
							BGl_zc3z04anonymousza32263ze3ze70z60zzast_walkz00
							(BgL_arg2z00_8764, BgL_arg1z00_8763, BgL_arg0z00_8762,
							BgL_pz00_8761, BgL_arg2268z00_2691);
					}
					return bgl_append2(BgL_arg2265z00_2688, BgL_arg2267z00_2689);
				}
		}

	}



/* &walk2*-sequence1695 */
	obj_t BGl_z62walk2za2zd2sequence1695z12zzast_walkz00(obj_t BgL_envz00_8671,
		obj_t BgL_nz00_8672, obj_t BgL_pz00_8673, obj_t BgL_arg0z00_8674,
		obj_t BgL_arg1z00_8675)
	{
		{	/* Ast/walk.scm 295 */
			{	/* Ast/walk.scm 295 */
				obj_t BgL_res4277z00_10038;

				{	/* Ast/walk.scm 295 */
					obj_t BgL_arg2254z00_10036;

					BgL_arg2254z00_10036 =
						BGl_zc3z04anonymousza32256ze3ze70z60zzast_walkz00(BgL_arg1z00_8675,
						BgL_arg0z00_8674, BgL_pz00_8673,
						(((BgL_sequencez00_bglt) COBJECT(((BgL_sequencez00_bglt)
										BgL_nz00_8672)))->BgL_nodesz00));
					{	/* Ast/walk.scm 295 */
						obj_t BgL_list2255z00_10037;

						BgL_list2255z00_10037 = MAKE_YOUNG_PAIR(BgL_arg2254z00_10036, BNIL);
						BgL_res4277z00_10038 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2255z00_10037);
					}
				}
				return BgL_res4277z00_10038;
			}
		}

	}



/* <@anonymous:2256>~0 */
	obj_t BGl_zc3z04anonymousza32256ze3ze70z60zzast_walkz00(obj_t
		BgL_arg1z00_8760, obj_t BgL_arg0z00_8759, obj_t BgL_pz00_8758,
		obj_t BgL_l1477z00_2664)
	{
		{	/* Ast/walk.scm 295 */
			if (NULLP(BgL_l1477z00_2664))
				{	/* Ast/walk.scm 295 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 295 */
					obj_t BgL_arg2258z00_2667;
					obj_t BgL_arg2259z00_2668;

					{	/* Ast/walk.scm 295 */
						obj_t BgL_fz00_2669;

						BgL_fz00_2669 = CAR(((obj_t) BgL_l1477z00_2664));
						BgL_arg2258z00_2667 =
							PROCEDURE_ENTRY(BgL_pz00_8758) (BgL_pz00_8758, BgL_fz00_2669,
							BgL_arg0z00_8759, BgL_arg1z00_8760, BEOA);
					}
					{	/* Ast/walk.scm 295 */
						obj_t BgL_arg2260z00_2670;

						BgL_arg2260z00_2670 = CDR(((obj_t) BgL_l1477z00_2664));
						BgL_arg2259z00_2668 =
							BGl_zc3z04anonymousza32256ze3ze70z60zzast_walkz00
							(BgL_arg1z00_8760, BgL_arg0z00_8759, BgL_pz00_8758,
							BgL_arg2260z00_2670);
					}
					return bgl_append2(BgL_arg2258z00_2667, BgL_arg2259z00_2668);
				}
		}

	}



/* &walk1*-sequence1693 */
	obj_t BGl_z62walk1za2zd2sequence1693z12zzast_walkz00(obj_t BgL_envz00_8676,
		obj_t BgL_nz00_8677, obj_t BgL_pz00_8678, obj_t BgL_arg0z00_8679)
	{
		{	/* Ast/walk.scm 295 */
			{	/* Ast/walk.scm 295 */
				obj_t BgL_res4278z00_10042;

				{	/* Ast/walk.scm 295 */
					obj_t BgL_arg2247z00_10040;

					BgL_arg2247z00_10040 =
						BGl_zc3z04anonymousza32249ze3ze70z60zzast_walkz00(BgL_arg0z00_8679,
						BgL_pz00_8678,
						(((BgL_sequencez00_bglt) COBJECT(((BgL_sequencez00_bglt)
										BgL_nz00_8677)))->BgL_nodesz00));
					{	/* Ast/walk.scm 295 */
						obj_t BgL_list2248z00_10041;

						BgL_list2248z00_10041 = MAKE_YOUNG_PAIR(BgL_arg2247z00_10040, BNIL);
						BgL_res4278z00_10042 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2248z00_10041);
					}
				}
				return BgL_res4278z00_10042;
			}
		}

	}



/* <@anonymous:2249>~0 */
	obj_t BGl_zc3z04anonymousza32249ze3ze70z60zzast_walkz00(obj_t
		BgL_arg0z00_8757, obj_t BgL_pz00_8756, obj_t BgL_l1474z00_2644)
	{
		{	/* Ast/walk.scm 295 */
			if (NULLP(BgL_l1474z00_2644))
				{	/* Ast/walk.scm 295 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 295 */
					obj_t BgL_arg2251z00_2647;
					obj_t BgL_arg2252z00_2648;

					{	/* Ast/walk.scm 295 */
						obj_t BgL_fz00_2649;

						BgL_fz00_2649 = CAR(((obj_t) BgL_l1474z00_2644));
						BgL_arg2251z00_2647 =
							PROCEDURE_ENTRY(BgL_pz00_8756) (BgL_pz00_8756, BgL_fz00_2649,
							BgL_arg0z00_8757, BEOA);
					}
					{	/* Ast/walk.scm 295 */
						obj_t BgL_arg2253z00_2650;

						BgL_arg2253z00_2650 = CDR(((obj_t) BgL_l1474z00_2644));
						BgL_arg2252z00_2648 =
							BGl_zc3z04anonymousza32249ze3ze70z60zzast_walkz00
							(BgL_arg0z00_8757, BgL_pz00_8756, BgL_arg2253z00_2650);
					}
					return bgl_append2(BgL_arg2251z00_2647, BgL_arg2252z00_2648);
				}
		}

	}



/* &walk0*-sequence1691 */
	obj_t BGl_z62walk0za2zd2sequence1691z12zzast_walkz00(obj_t BgL_envz00_8680,
		obj_t BgL_nz00_8681, obj_t BgL_pz00_8682)
	{
		{	/* Ast/walk.scm 295 */
			{	/* Ast/walk.scm 295 */
				obj_t BgL_res4279z00_10046;

				{	/* Ast/walk.scm 295 */
					obj_t BgL_arg2240z00_10044;

					BgL_arg2240z00_10044 =
						BGl_zc3z04anonymousza32242ze3ze70z60zzast_walkz00(BgL_pz00_8682,
						(((BgL_sequencez00_bglt) COBJECT(
									((BgL_sequencez00_bglt) BgL_nz00_8681)))->BgL_nodesz00));
					{	/* Ast/walk.scm 295 */
						obj_t BgL_list2241z00_10045;

						BgL_list2241z00_10045 = MAKE_YOUNG_PAIR(BgL_arg2240z00_10044, BNIL);
						BgL_res4279z00_10046 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2241z00_10045);
					}
				}
				return BgL_res4279z00_10046;
			}
		}

	}



/* <@anonymous:2242>~0 */
	obj_t BGl_zc3z04anonymousza32242ze3ze70z60zzast_walkz00(obj_t BgL_pz00_8755,
		obj_t BgL_l1471z00_2625)
	{
		{	/* Ast/walk.scm 295 */
			if (NULLP(BgL_l1471z00_2625))
				{	/* Ast/walk.scm 295 */
					return BNIL;
				}
			else
				{	/* Ast/walk.scm 295 */
					obj_t BgL_arg2244z00_2628;
					obj_t BgL_arg2245z00_2629;

					{	/* Ast/walk.scm 295 */
						obj_t BgL_fz00_2630;

						BgL_fz00_2630 = CAR(((obj_t) BgL_l1471z00_2625));
						BgL_arg2244z00_2628 =
							PROCEDURE_ENTRY(BgL_pz00_8755) (BgL_pz00_8755, BgL_fz00_2630,
							BEOA);
					}
					{	/* Ast/walk.scm 295 */
						obj_t BgL_arg2246z00_2631;

						BgL_arg2246z00_2631 = CDR(((obj_t) BgL_l1471z00_2625));
						BgL_arg2245z00_2629 =
							BGl_zc3z04anonymousza32242ze3ze70z60zzast_walkz00(BgL_pz00_8755,
							BgL_arg2246z00_2631);
					}
					return bgl_append2(BgL_arg2244z00_2628, BgL_arg2245z00_2629);
				}
		}

	}



/* &walk3-sequence1689 */
	obj_t BGl_z62walk3zd2sequence1689zb0zzast_walkz00(obj_t BgL_envz00_8683,
		obj_t BgL_nz00_8684, obj_t BgL_pz00_8685, obj_t BgL_arg0z00_8686,
		obj_t BgL_arg1z00_8687, obj_t BgL_arg2z00_8688)
	{
		{	/* Ast/walk.scm 295 */
			{	/* Ast/walk.scm 295 */
				obj_t BgL_g1469z00_10048;

				BgL_g1469z00_10048 =
					(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nz00_8684)))->BgL_nodesz00);
				{
					obj_t BgL_l1467z00_10050;

					{	/* Ast/walk.scm 295 */
						bool_t BgL_tmpz00_16180;

						BgL_l1467z00_10050 = BgL_g1469z00_10048;
					BgL_zc3z04anonymousza32237ze3z87_10049:
						if (PAIRP(BgL_l1467z00_10050))
							{	/* Ast/walk.scm 295 */
								{	/* Ast/walk.scm 295 */
									obj_t BgL_fz00_10051;

									BgL_fz00_10051 = CAR(BgL_l1467z00_10050);
									PROCEDURE_ENTRY(BgL_pz00_8685) (BgL_pz00_8685, BgL_fz00_10051,
										BgL_arg0z00_8686, BgL_arg1z00_8687, BgL_arg2z00_8688, BEOA);
								}
								{
									obj_t BgL_l1467z00_16191;

									BgL_l1467z00_16191 = CDR(BgL_l1467z00_10050);
									BgL_l1467z00_10050 = BgL_l1467z00_16191;
									goto BgL_zc3z04anonymousza32237ze3z87_10049;
								}
							}
						else
							{	/* Ast/walk.scm 295 */
								BgL_tmpz00_16180 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_16180);
					}
				}
			}
		}

	}



/* &walk2-sequence1687 */
	obj_t BGl_z62walk2zd2sequence1687zb0zzast_walkz00(obj_t BgL_envz00_8689,
		obj_t BgL_nz00_8690, obj_t BgL_pz00_8691, obj_t BgL_arg0z00_8692,
		obj_t BgL_arg1z00_8693)
	{
		{	/* Ast/walk.scm 295 */
			{	/* Ast/walk.scm 295 */
				obj_t BgL_g1466z00_10053;

				BgL_g1466z00_10053 =
					(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nz00_8690)))->BgL_nodesz00);
				{
					obj_t BgL_l1464z00_10055;

					{	/* Ast/walk.scm 295 */
						bool_t BgL_tmpz00_16196;

						BgL_l1464z00_10055 = BgL_g1466z00_10053;
					BgL_zc3z04anonymousza32234ze3z87_10054:
						if (PAIRP(BgL_l1464z00_10055))
							{	/* Ast/walk.scm 295 */
								{	/* Ast/walk.scm 295 */
									obj_t BgL_fz00_10056;

									BgL_fz00_10056 = CAR(BgL_l1464z00_10055);
									PROCEDURE_ENTRY(BgL_pz00_8691) (BgL_pz00_8691, BgL_fz00_10056,
										BgL_arg0z00_8692, BgL_arg1z00_8693, BEOA);
								}
								{
									obj_t BgL_l1464z00_16206;

									BgL_l1464z00_16206 = CDR(BgL_l1464z00_10055);
									BgL_l1464z00_10055 = BgL_l1464z00_16206;
									goto BgL_zc3z04anonymousza32234ze3z87_10054;
								}
							}
						else
							{	/* Ast/walk.scm 295 */
								BgL_tmpz00_16196 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_16196);
					}
				}
			}
		}

	}



/* &walk1-sequence1685 */
	obj_t BGl_z62walk1zd2sequence1685zb0zzast_walkz00(obj_t BgL_envz00_8694,
		obj_t BgL_nz00_8695, obj_t BgL_pz00_8696, obj_t BgL_arg0z00_8697)
	{
		{	/* Ast/walk.scm 295 */
			{	/* Ast/walk.scm 295 */
				obj_t BgL_g1463z00_10058;

				BgL_g1463z00_10058 =
					(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nz00_8695)))->BgL_nodesz00);
				{
					obj_t BgL_l1461z00_10060;

					{	/* Ast/walk.scm 295 */
						bool_t BgL_tmpz00_16211;

						BgL_l1461z00_10060 = BgL_g1463z00_10058;
					BgL_zc3z04anonymousza32231ze3z87_10059:
						if (PAIRP(BgL_l1461z00_10060))
							{	/* Ast/walk.scm 295 */
								{	/* Ast/walk.scm 295 */
									obj_t BgL_fz00_10061;

									BgL_fz00_10061 = CAR(BgL_l1461z00_10060);
									PROCEDURE_ENTRY(BgL_pz00_8696) (BgL_pz00_8696, BgL_fz00_10061,
										BgL_arg0z00_8697, BEOA);
								}
								{
									obj_t BgL_l1461z00_16220;

									BgL_l1461z00_16220 = CDR(BgL_l1461z00_10060);
									BgL_l1461z00_10060 = BgL_l1461z00_16220;
									goto BgL_zc3z04anonymousza32231ze3z87_10059;
								}
							}
						else
							{	/* Ast/walk.scm 295 */
								BgL_tmpz00_16211 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_16211);
					}
				}
			}
		}

	}



/* &walk0-sequence1683 */
	obj_t BGl_z62walk0zd2sequence1683zb0zzast_walkz00(obj_t BgL_envz00_8698,
		obj_t BgL_nz00_8699, obj_t BgL_pz00_8700)
	{
		{	/* Ast/walk.scm 295 */
			{	/* Ast/walk.scm 295 */
				obj_t BgL_g1460z00_10063;

				BgL_g1460z00_10063 =
					(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nz00_8699)))->BgL_nodesz00);
				{
					obj_t BgL_l1458z00_10065;

					{	/* Ast/walk.scm 295 */
						bool_t BgL_tmpz00_16225;

						BgL_l1458z00_10065 = BgL_g1460z00_10063;
					BgL_zc3z04anonymousza32228ze3z87_10064:
						if (PAIRP(BgL_l1458z00_10065))
							{	/* Ast/walk.scm 295 */
								{	/* Ast/walk.scm 295 */
									obj_t BgL_fz00_10066;

									BgL_fz00_10066 = CAR(BgL_l1458z00_10065);
									PROCEDURE_ENTRY(BgL_pz00_8700) (BgL_pz00_8700, BgL_fz00_10066,
										BEOA);
								}
								{
									obj_t BgL_l1458z00_16233;

									BgL_l1458z00_16233 = CDR(BgL_l1458z00_10065);
									BgL_l1458z00_10065 = BgL_l1458z00_16233;
									goto BgL_zc3z04anonymousza32228ze3z87_10064;
								}
							}
						else
							{	/* Ast/walk.scm 295 */
								BgL_tmpz00_16225 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_16225);
					}
				}
			}
		}

	}



/* &walk3!-node1681 */
	BgL_nodez00_bglt BGl_z62walk3z12zd2node1681za2zzast_walkz00(obj_t
		BgL_envz00_8701, obj_t BgL_nz00_8702, obj_t BgL_pz00_8703,
		obj_t BgL_arg0z00_8704, obj_t BgL_arg1z00_8705, obj_t BgL_arg2z00_8706)
	{
		{	/* Ast/walk.scm 294 */
			return ((BgL_nodez00_bglt) BgL_nz00_8702);
		}

	}



/* &walk2!-node1679 */
	BgL_nodez00_bglt BGl_z62walk2z12zd2node1679za2zzast_walkz00(obj_t
		BgL_envz00_8707, obj_t BgL_nz00_8708, obj_t BgL_pz00_8709,
		obj_t BgL_arg0z00_8710, obj_t BgL_arg1z00_8711)
	{
		{	/* Ast/walk.scm 294 */
			return ((BgL_nodez00_bglt) BgL_nz00_8708);
		}

	}



/* &walk1!-node1677 */
	BgL_nodez00_bglt BGl_z62walk1z12zd2node1677za2zzast_walkz00(obj_t
		BgL_envz00_8712, obj_t BgL_nz00_8713, obj_t BgL_pz00_8714,
		obj_t BgL_arg0z00_8715)
	{
		{	/* Ast/walk.scm 294 */
			return ((BgL_nodez00_bglt) BgL_nz00_8713);
		}

	}



/* &walk0!-node1675 */
	BgL_nodez00_bglt BGl_z62walk0z12zd2node1675za2zzast_walkz00(obj_t
		BgL_envz00_8716, obj_t BgL_nz00_8717, obj_t BgL_pz00_8718)
	{
		{	/* Ast/walk.scm 294 */
			return ((BgL_nodez00_bglt) BgL_nz00_8717);
		}

	}



/* &walk3*-node1673 */
	obj_t BGl_z62walk3za2zd2node1673z12zzast_walkz00(obj_t BgL_envz00_8719,
		obj_t BgL_nz00_8720, obj_t BgL_pz00_8721, obj_t BgL_arg0z00_8722,
		obj_t BgL_arg1z00_8723, obj_t BgL_arg2z00_8724)
	{
		{	/* Ast/walk.scm 294 */
			return BNIL;
		}

	}



/* &walk2*-node1670 */
	obj_t BGl_z62walk2za2zd2node1670z12zzast_walkz00(obj_t BgL_envz00_8725,
		obj_t BgL_nz00_8726, obj_t BgL_pz00_8727, obj_t BgL_arg0z00_8728,
		obj_t BgL_arg1z00_8729)
	{
		{	/* Ast/walk.scm 294 */
			return BNIL;
		}

	}



/* &walk1*-node1668 */
	obj_t BGl_z62walk1za2zd2node1668z12zzast_walkz00(obj_t BgL_envz00_8730,
		obj_t BgL_nz00_8731, obj_t BgL_pz00_8732, obj_t BgL_arg0z00_8733)
	{
		{	/* Ast/walk.scm 294 */
			return BNIL;
		}

	}



/* &walk0*-node1666 */
	obj_t BGl_z62walk0za2zd2node1666z12zzast_walkz00(obj_t BgL_envz00_8734,
		obj_t BgL_nz00_8735, obj_t BgL_pz00_8736)
	{
		{	/* Ast/walk.scm 294 */
			return BNIL;
		}

	}



/* &walk3-node1664 */
	obj_t BGl_z62walk3zd2node1664zb0zzast_walkz00(obj_t BgL_envz00_8737,
		obj_t BgL_nz00_8738, obj_t BgL_pz00_8739, obj_t BgL_arg0z00_8740,
		obj_t BgL_arg1z00_8741, obj_t BgL_arg2z00_8742)
	{
		{	/* Ast/walk.scm 294 */
			return BFALSE;
		}

	}



/* &walk2-node1662 */
	obj_t BGl_z62walk2zd2node1662zb0zzast_walkz00(obj_t BgL_envz00_8743,
		obj_t BgL_nz00_8744, obj_t BgL_pz00_8745, obj_t BgL_arg0z00_8746,
		obj_t BgL_arg1z00_8747)
	{
		{	/* Ast/walk.scm 294 */
			return BFALSE;
		}

	}



/* &walk1-node1660 */
	obj_t BGl_z62walk1zd2node1660zb0zzast_walkz00(obj_t BgL_envz00_8748,
		obj_t BgL_nz00_8749, obj_t BgL_pz00_8750, obj_t BgL_arg0z00_8751)
	{
		{	/* Ast/walk.scm 294 */
			return BFALSE;
		}

	}



/* &walk0-node1658 */
	obj_t BGl_z62walk0zd2node1658zb0zzast_walkz00(obj_t BgL_envz00_8752,
		obj_t BgL_nz00_8753, obj_t BgL_pz00_8754)
	{
		{	/* Ast/walk.scm 294 */
			return BFALSE;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_walkz00()
	{
		{	/* Ast/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string4199z00zzast_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string4199z00zzast_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string4199z00zzast_walkz00));
		}

	}

#ifdef __cplusplus
}
#endif
