/*===========================================================================*/
/*   (Abound/walk.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Abound/walk.scm) */
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

	typedef struct BgL_globalz00_bgl
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
		obj_t BgL_modulez00;
		obj_t BgL_importz00;
		bool_t BgL_evaluablezf3zf3;
		bool_t BgL_evalzf3zf3;
		obj_t BgL_libraryz00;
		obj_t BgL_pragmaz00;
		obj_t BgL_srcz00;
		obj_t BgL_jvmzd2typezd2namez00;
		obj_t BgL_initz00;
		obj_t BgL_aliasz00;
	}                *BgL_globalz00_bglt;

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

	typedef struct BgL_cfunz00_bgl
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
		obj_t BgL_argszd2typezd2;
		bool_t BgL_macrozf3zf3;
		bool_t BgL_infixzf3zf3;
		obj_t BgL_methodz00;
	}              *BgL_cfunz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_nodezf2effectzf2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
	}                       *BgL_nodezf2effectzf2_bglt;

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

	typedef struct BgL_privatez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
	}                 *BgL_privatez00_bglt;

	typedef struct BgL_vrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
		bool_t BgL_unsafez00;
	}              *BgL_vrefz00_bglt;

	typedef struct BgL_vsetz12z12_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
		bool_t BgL_unsafez00;
	}                 *BgL_vsetz12z12_bglt;

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


	static obj_t BGl_z62clearzd2cachez12za2zzabound_walkz00(obj_t);
	static BgL_appz00_bglt
		BGl_z62zc3z04anonymousza31918ze3ze5zzabound_walkz00(obj_t,
		BgL_nodezf2effectzf2_bglt, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62aboundzd2nodezd2setq1379z62zzabound_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_za2stringzd2refza2zd2zzabound_walkz00 = BUNSPEC;
	static obj_t BGl_objectzd2initzd2zzabound_walkz00();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern BgL_nodez00_bglt BGl_lvtypezd2nodezd2zzast_lvtypez00(BgL_nodez00_bglt);
	static obj_t BGl_z62aboundzd2node1356zb0zzabound_walkz00(obj_t, obj_t);
	static BgL_appz00_bglt
		BGl_z62zc3z04anonymousza31887ze3ze5zzabound_walkz00(obj_t,
		BgL_nodezf2effectzf2_bglt, obj_t, obj_t);
	static obj_t BGl_za2s64vectorzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
	static obj_t BGl_za2s32vectorzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zzabound_walkz00();
	static BgL_nodez00_bglt
		BGl_z62aboundzd2nodezd2jumpzd2exzd21393z62zzabound_walkz00(obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_za2hvectorsza2z00zztype_cachez00;
	static BgL_nodez00_bglt
		BGl_z62aboundzd2nodezd2switch1385z62zzabound_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62aboundzd2nodezd2sequence1359z62zzabound_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62aboundzd2nodezd2letzd2fun1387zb0zzabound_walkz00(obj_t, obj_t);
	static obj_t BGl_z62initzd2cachez12za2zzabound_walkz00(obj_t);
	static obj_t BGl_za2u16vectorzd2refza2zd2zzabound_walkz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_aboundzd2walkz12zc0zzabound_walkz00(obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	static BgL_nodez00_bglt
		BGl_z62aboundzd2nodezd2vsetz121375z70zzabound_walkz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzabound_walkz00();
	static obj_t BGl_za2s8vectorzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_za2structzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62aboundzd2nodezd2letzd2var1389zb0zzabound_walkz00(obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_za2s64vectorzd2refza2zd2zzabound_walkz00 = BUNSPEC;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static bool_t BGl_aboundzd2nodeza2z12z62zzabound_walkz00(obj_t);
	static obj_t BGl_za2s8vectorzd2refza2zd2zzabound_walkz00 = BUNSPEC;
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_z62aboundzd2walkz12za2zzabound_walkz00(obj_t, obj_t);
	static obj_t BGl_za2s16vectorzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
	static BgL_nodez00_bglt
		BGl_z62aboundzd2nodezd2sync1361z62zzabound_walkz00(obj_t, obj_t);
	extern obj_t BGl_locationzd2fullzd2fnamez00zztools_locationz00(obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzabound_walkz00 = BUNSPEC;
	extern obj_t BGl_za2vectorza2z00zztype_cachez00;
	static BgL_nodez00_bglt
		BGl_z62aboundzd2nodezd2fail1383z62zzabound_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62aboundzd2nodezd2app1363z62zzabound_walkz00(obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static BgL_vrefz00_bglt
		BGl_z62zc3z04anonymousza32021ze3ze5zzabound_walkz00(obj_t,
		BgL_nodezf2effectzf2_bglt, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_za2s32vectorzd2refza2zd2zzabound_walkz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzabound_walkz00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_nodez00_bglt);
	static obj_t BGl_genericzd2initzd2zzabound_walkz00();
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	static obj_t BGl_za2u64vectorzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
	static BgL_vsetz12z12_bglt
		BGl_z62zc3z04anonymousza32040ze3ze5zzabound_walkz00(obj_t,
		BgL_nodezf2effectzf2_bglt, obj_t, obj_t);
	static obj_t BGl_za2u32vectorzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
	extern obj_t BGl_castz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62aboundzd2nodezd2boxzd2setz121399za2zzabound_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62aboundzd2nodezd2setzd2exzd2i1391z62zzabound_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62aboundzd2nodezd2appzd2ly1365zb0zzabound_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62aboundzd2nodezd2conditio1381z62zzabound_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62aboundzd2nodezd2makezd2box1395zb0zzabound_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62aboundzd2nodezd2vref1372z62zzabound_walkz00(obj_t, obj_t);
	static obj_t BGl_aboundzd2funz12zc0zzabound_walkz00(obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	static BgL_nodez00_bglt
		BGl_z62aboundzd2nodezd2extern1369z62zzabound_walkz00(obj_t, obj_t);
	extern BgL_nodez00_bglt
		BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_aboundzd2nodezd2zzabound_walkz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_za2u8vectorzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzabound_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_za2f64vectorzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
	extern obj_t BGl_vrefz00zzast_nodez00;
	static obj_t BGl_za2f32vectorzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl_za2f64vectorzd2refza2zd2zzabound_walkz00 = BUNSPEC;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzabound_walkz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzabound_walkz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzabound_walkz00();
	static obj_t BGl_za2u8vectorzd2refza2zd2zzabound_walkz00 = BUNSPEC;
	static obj_t BGl_za2s16vectorzd2refza2zd2zzabound_walkz00 = BUNSPEC;
	static BgL_nodez00_bglt BGl_z62aboundzd2nodezb0zzabound_walkz00(obj_t, obj_t);
	static obj_t BGl_za2u64vectorzd2refza2zd2zzabound_walkz00 = BUNSPEC;
	static obj_t BGl_za2stringzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62aboundzd2nodezd2funcall1367z62zzabound_walkz00(obj_t, obj_t);
	static obj_t BGl_za2structzd2refza2zd2zzabound_walkz00 = BUNSPEC;
	static obj_t BGl_za2f32vectorzd2refza2zd2zzabound_walkz00 = BUNSPEC;
	extern obj_t BGl_switchz00zzast_nodez00;
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	static BgL_nodez00_bglt
		BGl_arrayzd2refzd2zzabound_walkz00(BgL_nodezf2effectzf2_bglt, obj_t, obj_t,
		obj_t, BgL_typez00_bglt, obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_arrayzd2setz12zc0zzabound_walkz00(BgL_nodezf2effectzf2_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_za2u16vectorzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_za2u32vectorzd2refza2zd2zzabound_walkz00 = BUNSPEC;
	static BgL_nodez00_bglt
		BGl_z62aboundzd2nodezd2boxzd2ref1397zb0zzabound_walkz00(obj_t, obj_t);
	extern obj_t BGl_vsetz12z12zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62aboundzd2nodezd2cast1377z62zzabound_walkz00(obj_t, obj_t);
	static obj_t __cnst[45];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_initzd2cachez12zd2envz12zzabound_walkz00,
		BgL_bgl_za762initza7d2cacheza72239za7,
		BGl_z62initzd2cachez12za2zzabound_walkz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2205z00zzabound_walkz00,
		BgL_bgl_za762aboundza7d2node2240z00,
		BGl_z62aboundzd2node1356zb0zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2207z00zzabound_walkz00,
		BgL_bgl_za762aboundza7d2node2241z00,
		BGl_z62aboundzd2nodezd2sequence1359z62zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2209z00zzabound_walkz00,
		BgL_bgl_za762aboundza7d2node2242z00,
		BGl_z62aboundzd2nodezd2sync1361z62zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2210z00zzabound_walkz00,
		BgL_bgl_za762aboundza7d2node2243z00,
		BGl_z62aboundzd2nodezd2app1363z62zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2211z00zzabound_walkz00,
		BgL_bgl_za762aboundza7d2node2244z00,
		BGl_z62aboundzd2nodezd2appzd2ly1365zb0zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2212z00zzabound_walkz00,
		BgL_bgl_za762aboundza7d2node2245z00,
		BGl_z62aboundzd2nodezd2funcall1367z62zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2213z00zzabound_walkz00,
		BgL_bgl_za762aboundza7d2node2246z00,
		BGl_z62aboundzd2nodezd2extern1369z62zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2214z00zzabound_walkz00,
		BgL_bgl_za762aboundza7d2node2247z00,
		BGl_z62aboundzd2nodezd2vref1372z62zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2215z00zzabound_walkz00,
		BgL_bgl_za762aboundza7d2node2248z00,
		BGl_z62aboundzd2nodezd2vsetz121375z70zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2216z00zzabound_walkz00,
		BgL_bgl_za762aboundza7d2node2249z00,
		BGl_z62aboundzd2nodezd2cast1377z62zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2217z00zzabound_walkz00,
		BgL_bgl_za762aboundza7d2node2250z00,
		BGl_z62aboundzd2nodezd2setq1379z62zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2218z00zzabound_walkz00,
		BgL_bgl_za762aboundza7d2node2251z00,
		BGl_z62aboundzd2nodezd2conditio1381z62zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2219z00zzabound_walkz00,
		BgL_bgl_za762aboundza7d2node2252z00,
		BGl_z62aboundzd2nodezd2fail1383z62zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2220z00zzabound_walkz00,
		BgL_bgl_za762aboundza7d2node2253z00,
		BGl_z62aboundzd2nodezd2switch1385z62zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2221z00zzabound_walkz00,
		BgL_bgl_za762aboundza7d2node2254z00,
		BGl_z62aboundzd2nodezd2letzd2fun1387zb0zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2222z00zzabound_walkz00,
		BgL_bgl_za762aboundza7d2node2255z00,
		BGl_z62aboundzd2nodezd2letzd2var1389zb0zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2223z00zzabound_walkz00,
		BgL_bgl_za762aboundza7d2node2256z00,
		BGl_z62aboundzd2nodezd2setzd2exzd2i1391z62zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2224z00zzabound_walkz00,
		BgL_bgl_za762aboundza7d2node2257z00,
		BGl_z62aboundzd2nodezd2jumpzd2exzd21393z62zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2225z00zzabound_walkz00,
		BgL_bgl_za762aboundza7d2node2258z00,
		BGl_z62aboundzd2nodezd2makezd2box1395zb0zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2226z00zzabound_walkz00,
		BgL_bgl_za762aboundza7d2node2259z00,
		BGl_z62aboundzd2nodezd2boxzd2ref1397zb0zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2227z00zzabound_walkz00,
		BgL_bgl_za762aboundza7d2node2260z00,
		BGl_z62aboundzd2nodezd2boxzd2setz121399za2zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_BGL_L_PROCEDURE(BGl_proc2228z00zzabound_walkz00,
		BgL_bgl_za762za7c3za704anonymo2261za7,
		BGl_z62zc3z04anonymousza32040ze3ze5zzabound_walkz00);
	      DEFINE_BGL_L_PROCEDURE(BGl_proc2229z00zzabound_walkz00,
		BgL_bgl_za762za7c3za704anonymo2262za7,
		BGl_z62zc3z04anonymousza32021ze3ze5zzabound_walkz00);
	      DEFINE_BGL_L_PROCEDURE(BGl_proc2232z00zzabound_walkz00,
		BgL_bgl_za762za7c3za704anonymo2263za7,
		BGl_z62zc3z04anonymousza31887ze3ze5zzabound_walkz00);
	      DEFINE_BGL_L_PROCEDURE(BGl_proc2233z00zzabound_walkz00,
		BgL_bgl_za762za7c3za704anonymo2264za7,
		BGl_z62zc3z04anonymousza31918ze3ze5zzabound_walkz00);
	      DEFINE_STRING(BGl_string2195z00zzabound_walkz00,
		BgL_bgl_string2195za700za7za7a2265za7, "Abound", 6);
	      DEFINE_STRING(BGl_string2196z00zzabound_walkz00,
		BgL_bgl_string2196za700za7za7a2266za7, "   . ", 5);
	      DEFINE_STRING(BGl_string2197z00zzabound_walkz00,
		BgL_bgl_string2197za700za7za7a2267za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string2198z00zzabound_walkz00,
		BgL_bgl_string2198za700za7za7a2268za7, " error", 6);
	      DEFINE_STRING(BGl_string2199z00zzabound_walkz00,
		BgL_bgl_string2199za700za7za7a2269za7, "s", 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_aboundzd2walkz12zd2envz12zzabound_walkz00,
		BgL_bgl_za762aboundza7d2walk2270z00,
		BGl_z62aboundzd2walkz12za2zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2200z00zzabound_walkz00,
		BgL_bgl_string2200za700za7za7a2271za7, "", 0);
	      DEFINE_STRING(BGl_string2201z00zzabound_walkz00,
		BgL_bgl_string2201za700za7za7a2272za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string2202z00zzabound_walkz00,
		BgL_bgl_string2202za700za7za7a2273za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string2203z00zzabound_walkz00,
		BgL_bgl_string2203za700za7za7a2274za7, "-ref", 4);
	      DEFINE_STRING(BGl_string2204z00zzabound_walkz00,
		BgL_bgl_string2204za700za7za7a2275za7, "-set!", 5);
	      DEFINE_STRING(BGl_string2206z00zzabound_walkz00,
		BgL_bgl_string2206za700za7za7a2276za7, "abound-node1356", 15);
	      DEFINE_STRING(BGl_string2208z00zzabound_walkz00,
		BgL_bgl_string2208za700za7za7a2277za7, "abound-node", 11);
	      DEFINE_STRING(BGl_string2230z00zzabound_walkz00,
		BgL_bgl_string2230za700za7za7a2278za7, "string-ref", 10);
	      DEFINE_STRING(BGl_string2231z00zzabound_walkz00,
		BgL_bgl_string2231za700za7za7a2279za7, "string-set!", 11);
	      DEFINE_STRING(BGl_string2234z00zzabound_walkz00,
		BgL_bgl_string2234za700za7za7a2280za7, "abound_walk", 11);
	      DEFINE_STRING(BGl_string2235z00zzabound_walkz00,
		BgL_bgl_string2235za700za7za7a2281za7,
		"$string-bound-check? $string-length s let if failure @ index-out-of-bounds-error __error $vector-bound-check? $tvector-length $hvector-length $vector-length location l i v $f64vector-set! $f32vector-set! $u64vector-set! $s64vector-set! $u32vector-set! $s32vector-set! $u16vector-set! $s16vector-set! $u8vector-set! $s8vector-set! $f64vector-ref $f32vector-ref $u64vector-ref $s64vector-ref $u32vector-ref $s32vector-ref $u16vector-ref $s16vector-ref $u8vector-ref $s8vector-ref $struct-set! $struct-ref $string-set! $string-ref foreign (clear-cache!) pass-started (init-cache!) ",
		578);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_clearzd2cachez12zd2envz12zzabound_walkz00,
		BgL_bgl_za762clearza7d2cache2282z00,
		BGl_z62clearzd2cachez12za2zzabound_walkz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_GENERIC(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
		BgL_bgl_za762aboundza7d2node2283z00,
		BGl_z62aboundzd2nodezb0zzabound_walkz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2stringzd2refza2zd2zzabound_walkz00));
		     ADD_ROOT((void *) (&BGl_za2s64vectorzd2setz12za2zc0zzabound_walkz00));
		     ADD_ROOT((void *) (&BGl_za2s32vectorzd2setz12za2zc0zzabound_walkz00));
		     ADD_ROOT((void *) (&BGl_za2u16vectorzd2refza2zd2zzabound_walkz00));
		     ADD_ROOT((void *) (&BGl_za2s8vectorzd2setz12za2zc0zzabound_walkz00));
		     ADD_ROOT((void *) (&BGl_za2structzd2setz12za2zc0zzabound_walkz00));
		     ADD_ROOT((void *) (&BGl_za2s64vectorzd2refza2zd2zzabound_walkz00));
		     ADD_ROOT((void *) (&BGl_za2s8vectorzd2refza2zd2zzabound_walkz00));
		     ADD_ROOT((void *) (&BGl_za2s16vectorzd2setz12za2zc0zzabound_walkz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzabound_walkz00));
		     ADD_ROOT((void *) (&BGl_za2s32vectorzd2refza2zd2zzabound_walkz00));
		     ADD_ROOT((void *) (&BGl_za2u64vectorzd2setz12za2zc0zzabound_walkz00));
		     ADD_ROOT((void *) (&BGl_za2u32vectorzd2setz12za2zc0zzabound_walkz00));
		     ADD_ROOT((void *) (&BGl_za2u8vectorzd2setz12za2zc0zzabound_walkz00));
		     ADD_ROOT((void *) (&BGl_za2f64vectorzd2setz12za2zc0zzabound_walkz00));
		     ADD_ROOT((void *) (&BGl_za2f32vectorzd2setz12za2zc0zzabound_walkz00));
		     ADD_ROOT((void *) (&BGl_za2f64vectorzd2refza2zd2zzabound_walkz00));
		     ADD_ROOT((void *) (&BGl_za2u8vectorzd2refza2zd2zzabound_walkz00));
		     ADD_ROOT((void *) (&BGl_za2s16vectorzd2refza2zd2zzabound_walkz00));
		     ADD_ROOT((void *) (&BGl_za2u64vectorzd2refza2zd2zzabound_walkz00));
		     ADD_ROOT((void *) (&BGl_za2stringzd2setz12za2zc0zzabound_walkz00));
		     ADD_ROOT((void *) (&BGl_za2structzd2refza2zd2zzabound_walkz00));
		     ADD_ROOT((void *) (&BGl_za2f32vectorzd2refza2zd2zzabound_walkz00));
		     ADD_ROOT((void *) (&BGl_za2u16vectorzd2setz12za2zc0zzabound_walkz00));
		     ADD_ROOT((void *) (&BGl_za2u32vectorzd2refza2zd2zzabound_walkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzabound_walkz00(long
		BgL_checksumz00_2957, char *BgL_fromz00_2958)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzabound_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzabound_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzabound_walkz00();
					BGl_libraryzd2moduleszd2initz00zzabound_walkz00();
					BGl_cnstzd2initzd2zzabound_walkz00();
					BGl_importedzd2moduleszd2initz00zzabound_walkz00();
					BGl_genericzd2initzd2zzabound_walkz00();
					BGl_methodzd2initzd2zzabound_walkz00();
					return BGl_toplevelzd2initzd2zzabound_walkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzabound_walkz00()
	{
		{	/* Abound/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"abound_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"abound_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"abound_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"abound_walk");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"abound_walk");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "abound_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "abound_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"abound_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "abound_walk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"abound_walk");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"abound_walk");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "abound_walk");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"abound_walk");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "abound_walk");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzabound_walkz00()
	{
		{	/* Abound/walk.scm 15 */
			{	/* Abound/walk.scm 15 */
				obj_t BgL_cportz00_2693;

				{	/* Abound/walk.scm 15 */
					obj_t BgL_stringz00_2701;

					BgL_stringz00_2701 = BGl_string2235z00zzabound_walkz00;
					{	/* Abound/walk.scm 15 */
						obj_t BgL_startz00_2702;

						BgL_startz00_2702 = BINT(((long) 0));
						{	/* Abound/walk.scm 15 */
							obj_t BgL_endz00_2703;

							BgL_endz00_2703 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2701)));
							{	/* Abound/walk.scm 15 */

								BgL_cportz00_2693 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2701, BgL_startz00_2702, BgL_endz00_2703);
				}}}}
				{
					long BgL_iz00_2694;

					BgL_iz00_2694 = ((long) 44);
				BgL_loopz00_2695:
					if ((BgL_iz00_2694 == ((long) -1)))
						{	/* Abound/walk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Abound/walk.scm 15 */
							{	/* Abound/walk.scm 15 */
								obj_t BgL_arg2237z00_2697;

								{	/* Abound/walk.scm 15 */

									{	/* Abound/walk.scm 15 */
										obj_t BgL_locationz00_2699;

										BgL_locationz00_2699 = BBOOL(((bool_t) 0));
										{	/* Abound/walk.scm 15 */

											BgL_arg2237z00_2697 =
												BGl_readz00zz__readerz00(BgL_cportz00_2693,
												BgL_locationz00_2699);
										}
									}
								}
								{	/* Abound/walk.scm 15 */
									int BgL_tmpz00_2992;

									BgL_tmpz00_2992 = (int) (BgL_iz00_2694);
									CNST_TABLE_SET(BgL_tmpz00_2992, BgL_arg2237z00_2697);
							}}
							{	/* Abound/walk.scm 15 */
								int BgL_auxz00_2700;

								BgL_auxz00_2700 = (int) ((BgL_iz00_2694 - ((long) 1)));
								{
									long BgL_iz00_2997;

									BgL_iz00_2997 = (long) (BgL_auxz00_2700);
									BgL_iz00_2694 = BgL_iz00_2997;
									goto BgL_loopz00_2695;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzabound_walkz00()
	{
		{	/* Abound/walk.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzabound_walkz00()
	{
		{	/* Abound/walk.scm 15 */
			BGl_za2stringzd2refza2zd2zzabound_walkz00 = BUNSPEC;
			BGl_za2stringzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
			BGl_za2structzd2refza2zd2zzabound_walkz00 = BUNSPEC;
			BGl_za2structzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
			BGl_za2s8vectorzd2refza2zd2zzabound_walkz00 = BUNSPEC;
			BGl_za2u8vectorzd2refza2zd2zzabound_walkz00 = BUNSPEC;
			BGl_za2s16vectorzd2refza2zd2zzabound_walkz00 = BUNSPEC;
			BGl_za2u16vectorzd2refza2zd2zzabound_walkz00 = BUNSPEC;
			BGl_za2s32vectorzd2refza2zd2zzabound_walkz00 = BUNSPEC;
			BGl_za2u32vectorzd2refza2zd2zzabound_walkz00 = BUNSPEC;
			BGl_za2s64vectorzd2refza2zd2zzabound_walkz00 = BUNSPEC;
			BGl_za2u64vectorzd2refza2zd2zzabound_walkz00 = BUNSPEC;
			BGl_za2f32vectorzd2refza2zd2zzabound_walkz00 = BUNSPEC;
			BGl_za2f64vectorzd2refza2zd2zzabound_walkz00 = BUNSPEC;
			BGl_za2s8vectorzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
			BGl_za2u8vectorzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
			BGl_za2s16vectorzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
			BGl_za2u16vectorzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
			BGl_za2s32vectorzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
			BGl_za2u32vectorzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
			BGl_za2s64vectorzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
			BGl_za2u64vectorzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
			BGl_za2f32vectorzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
			BGl_za2f64vectorzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
			return BUNSPEC;
		}

	}



/* abound-walk! */
	BGL_EXPORTED_DEF obj_t BGl_aboundzd2walkz12zc0zzabound_walkz00(obj_t
		BgL_globalsz00_17)
	{
		{	/* Abound/walk.scm 39 */
			{	/* Abound/walk.scm 40 */
				obj_t BgL_list1462z00_1478;

				{	/* Abound/walk.scm 40 */
					obj_t BgL_arg1464z00_1479;

					{	/* Abound/walk.scm 40 */
						obj_t BgL_arg1465z00_1480;

						BgL_arg1465z00_1480 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1464z00_1479 =
							MAKE_YOUNG_PAIR(BGl_string2195z00zzabound_walkz00,
							BgL_arg1465z00_1480);
					}
					BgL_list1462z00_1478 =
						MAKE_YOUNG_PAIR(BGl_string2196z00zzabound_walkz00,
						BgL_arg1464z00_1479);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1462z00_1478);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string2195z00zzabound_walkz00;
			{	/* Abound/walk.scm 40 */
				obj_t BgL_g1105z00_1481;
				obj_t BgL_g1106z00_1482;

				{	/* Abound/walk.scm 40 */
					obj_t BgL_list1480z00_1495;

					BgL_list1480z00_1495 =
						MAKE_YOUNG_PAIR(BGl_initzd2cachez12zd2envz12zzabound_walkz00, BNIL);
					BgL_g1105z00_1481 = BgL_list1480z00_1495;
				}
				BgL_g1106z00_1482 = CNST_TABLE_REF(((long) 0));
				{
					obj_t BgL_hooksz00_1484;
					obj_t BgL_hnamesz00_1485;

					BgL_hooksz00_1484 = BgL_g1105z00_1481;
					BgL_hnamesz00_1485 = BgL_g1106z00_1482;
				BgL_zc3z04anonymousza31466ze3z87_1486:
					if (NULLP(BgL_hooksz00_1484))
						{	/* Abound/walk.scm 40 */
							CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Abound/walk.scm 40 */
							bool_t BgL_test2287z00_3012;

							{	/* Abound/walk.scm 40 */
								obj_t BgL_fun1479z00_1493;

								BgL_fun1479z00_1493 = CAR(((obj_t) BgL_hooksz00_1484));
								BgL_test2287z00_3012 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1479z00_1493)
									(BgL_fun1479z00_1493, BEOA));
							}
							if (BgL_test2287z00_3012)
								{	/* Abound/walk.scm 40 */
									obj_t BgL_arg1474z00_1490;
									obj_t BgL_arg1476z00_1491;

									BgL_arg1474z00_1490 = CDR(((obj_t) BgL_hooksz00_1484));
									BgL_arg1476z00_1491 = CDR(((obj_t) BgL_hnamesz00_1485));
									{
										obj_t BgL_hnamesz00_3024;
										obj_t BgL_hooksz00_3023;

										BgL_hooksz00_3023 = BgL_arg1474z00_1490;
										BgL_hnamesz00_3024 = BgL_arg1476z00_1491;
										BgL_hnamesz00_1485 = BgL_hnamesz00_3024;
										BgL_hooksz00_1484 = BgL_hooksz00_3023;
										goto BgL_zc3z04anonymousza31466ze3z87_1486;
									}
								}
							else
								{	/* Abound/walk.scm 40 */
									obj_t BgL_arg1477z00_1492;

									BgL_arg1477z00_1492 = CAR(((obj_t) BgL_hnamesz00_1485));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string2195z00zzabound_walkz00,
										BGl_string2197z00zzabound_walkz00, BgL_arg1477z00_1492);
								}
						}
				}
			}
			{
				obj_t BgL_l1344z00_1497;

				BgL_l1344z00_1497 = BgL_globalsz00_17;
			BgL_zc3z04anonymousza31481ze3z87_1498:
				if (PAIRP(BgL_l1344z00_1497))
					{	/* Abound/walk.scm 41 */
						BGl_aboundzd2funz12zc0zzabound_walkz00(CAR(BgL_l1344z00_1497));
						{
							obj_t BgL_l1344z00_3032;

							BgL_l1344z00_3032 = CDR(BgL_l1344z00_1497);
							BgL_l1344z00_1497 = BgL_l1344z00_3032;
							goto BgL_zc3z04anonymousza31481ze3z87_1498;
						}
					}
				else
					{	/* Abound/walk.scm 41 */
						((bool_t) 1);
					}
			}
			if (
				((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
					((long) 0)))
				{	/* Abound/walk.scm 42 */
					{	/* Abound/walk.scm 42 */
						obj_t BgL_port1346z00_1505;

						{	/* Abound/walk.scm 42 */
							obj_t BgL_res2152z00_2352;

							{	/* Abound/walk.scm 42 */
								obj_t BgL_tmpz00_3037;

								BgL_tmpz00_3037 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2152z00_2352 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_3037);
							}
							BgL_port1346z00_1505 = BgL_res2152z00_2352;
						}
						bgl_display_obj(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
							BgL_port1346z00_1505);
						bgl_display_string(BGl_string2198z00zzabound_walkz00,
							BgL_port1346z00_1505);
						{	/* Abound/walk.scm 42 */
							obj_t BgL_arg1495z00_1506;

							{	/* Abound/walk.scm 42 */
								bool_t BgL_test2290z00_3042;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
									{	/* Abound/walk.scm 42 */
										if (INTEGERP
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
											{	/* Abound/walk.scm 42 */
												BgL_test2290z00_3042 =
													(
													(long)
													CINT
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
													> ((long) 1));
											}
										else
											{	/* Abound/walk.scm 42 */
												BgL_test2290z00_3042 =
													BGl_2ze3ze3zz__r4_numbers_6_5z00
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
													BINT(((long) 1)));
									}}
								else
									{	/* Abound/walk.scm 42 */
										BgL_test2290z00_3042 = ((bool_t) 0);
									}
								if (BgL_test2290z00_3042)
									{	/* Abound/walk.scm 42 */
										BgL_arg1495z00_1506 = BGl_string2199z00zzabound_walkz00;
									}
								else
									{	/* Abound/walk.scm 42 */
										BgL_arg1495z00_1506 = BGl_string2200z00zzabound_walkz00;
									}
							}
							bgl_display_obj(BgL_arg1495z00_1506, BgL_port1346z00_1505);
						}
						bgl_display_string(BGl_string2201z00zzabound_walkz00,
							BgL_port1346z00_1505);
						bgl_display_char(((unsigned char) 10), BgL_port1346z00_1505);
					}
					{	/* Abound/walk.scm 42 */
						obj_t BgL_list1499z00_1512;

						BgL_list1499z00_1512 = MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list1499z00_1512);
					}
				}
			else
				{	/* Abound/walk.scm 42 */
					obj_t BgL_g1107z00_1513;
					obj_t BgL_g1108z00_1514;

					{	/* Abound/walk.scm 42 */
						obj_t BgL_list1531z00_1527;

						BgL_list1531z00_1527 =
							MAKE_YOUNG_PAIR(BGl_clearzd2cachez12zd2envz12zzabound_walkz00,
							BNIL);
						BgL_g1107z00_1513 = BgL_list1531z00_1527;
					}
					BgL_g1108z00_1514 = CNST_TABLE_REF(((long) 2));
					{
						obj_t BgL_hooksz00_1516;
						obj_t BgL_hnamesz00_1517;

						BgL_hooksz00_1516 = BgL_g1107z00_1513;
						BgL_hnamesz00_1517 = BgL_g1108z00_1514;
					BgL_zc3z04anonymousza31500ze3z87_1518:
						if (NULLP(BgL_hooksz00_1516))
							{	/* Abound/walk.scm 42 */
								return BgL_globalsz00_17;
							}
						else
							{	/* Abound/walk.scm 42 */
								bool_t BgL_test2294z00_3061;

								{	/* Abound/walk.scm 42 */
									obj_t BgL_fun1530z00_1525;

									BgL_fun1530z00_1525 = CAR(((obj_t) BgL_hooksz00_1516));
									BgL_test2294z00_3061 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun1530z00_1525)
										(BgL_fun1530z00_1525, BEOA));
								}
								if (BgL_test2294z00_3061)
									{	/* Abound/walk.scm 42 */
										obj_t BgL_arg1518z00_1522;
										obj_t BgL_arg1521z00_1523;

										BgL_arg1518z00_1522 = CDR(((obj_t) BgL_hooksz00_1516));
										BgL_arg1521z00_1523 = CDR(((obj_t) BgL_hnamesz00_1517));
										{
											obj_t BgL_hnamesz00_3073;
											obj_t BgL_hooksz00_3072;

											BgL_hooksz00_3072 = BgL_arg1518z00_1522;
											BgL_hnamesz00_3073 = BgL_arg1521z00_1523;
											BgL_hnamesz00_1517 = BgL_hnamesz00_3073;
											BgL_hooksz00_1516 = BgL_hooksz00_3072;
											goto BgL_zc3z04anonymousza31500ze3z87_1518;
										}
									}
								else
									{	/* Abound/walk.scm 42 */
										obj_t BgL_arg1528z00_1524;

										BgL_arg1528z00_1524 = CAR(((obj_t) BgL_hnamesz00_1517));
										return
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_za2currentzd2passza2zd2zzengine_passz00,
											BGl_string2202z00zzabound_walkz00, BgL_arg1528z00_1524);
									}
							}
					}
				}
		}

	}



/* &abound-walk! */
	obj_t BGl_z62aboundzd2walkz12za2zzabound_walkz00(obj_t BgL_envz00_2603,
		obj_t BgL_globalsz00_2604)
	{
		{	/* Abound/walk.scm 39 */
			return BGl_aboundzd2walkz12zc0zzabound_walkz00(BgL_globalsz00_2604);
		}

	}



/* &init-cache! */
	obj_t BGl_z62initzd2cachez12za2zzabound_walkz00(obj_t BgL_envz00_2605)
	{
		{	/* Abound/walk.scm 75 */
			{	/* Abound/walk.scm 76 */
				obj_t BgL_list1532z00_2706;

				BgL_list1532z00_2706 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2stringzd2refza2zd2zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 4)),
					BgL_list1532z00_2706);
			}
			{	/* Abound/walk.scm 77 */
				obj_t BgL_list1533z00_2707;

				BgL_list1533z00_2707 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2stringzd2setz12za2zc0zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 5)),
					BgL_list1533z00_2707);
			}
			{	/* Abound/walk.scm 78 */
				obj_t BgL_list1534z00_2708;

				BgL_list1534z00_2708 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2structzd2refza2zd2zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 6)),
					BgL_list1534z00_2708);
			}
			{	/* Abound/walk.scm 79 */
				obj_t BgL_list1535z00_2709;

				BgL_list1535z00_2709 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2structzd2setz12za2zc0zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 7)),
					BgL_list1535z00_2709);
			}
			{	/* Abound/walk.scm 80 */
				obj_t BgL_list1536z00_2710;

				BgL_list1536z00_2710 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2s8vectorzd2refza2zd2zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 8)),
					BgL_list1536z00_2710);
			}
			{	/* Abound/walk.scm 81 */
				obj_t BgL_list1537z00_2711;

				BgL_list1537z00_2711 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2u8vectorzd2refza2zd2zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 9)),
					BgL_list1537z00_2711);
			}
			{	/* Abound/walk.scm 82 */
				obj_t BgL_list1538z00_2712;

				BgL_list1538z00_2712 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2s16vectorzd2refza2zd2zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 10)),
					BgL_list1538z00_2712);
			}
			{	/* Abound/walk.scm 83 */
				obj_t BgL_list1539z00_2713;

				BgL_list1539z00_2713 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2u16vectorzd2refza2zd2zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 11)),
					BgL_list1539z00_2713);
			}
			{	/* Abound/walk.scm 84 */
				obj_t BgL_list1540z00_2714;

				BgL_list1540z00_2714 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2s32vectorzd2refza2zd2zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 12)),
					BgL_list1540z00_2714);
			}
			{	/* Abound/walk.scm 85 */
				obj_t BgL_list1541z00_2715;

				BgL_list1541z00_2715 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2u32vectorzd2refza2zd2zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 13)),
					BgL_list1541z00_2715);
			}
			{	/* Abound/walk.scm 86 */
				obj_t BgL_list1542z00_2716;

				BgL_list1542z00_2716 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2s64vectorzd2refza2zd2zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 14)),
					BgL_list1542z00_2716);
			}
			{	/* Abound/walk.scm 87 */
				obj_t BgL_list1543z00_2717;

				BgL_list1543z00_2717 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2u64vectorzd2refza2zd2zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 15)),
					BgL_list1543z00_2717);
			}
			{	/* Abound/walk.scm 88 */
				obj_t BgL_list1544z00_2718;

				BgL_list1544z00_2718 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2f32vectorzd2refza2zd2zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 16)),
					BgL_list1544z00_2718);
			}
			{	/* Abound/walk.scm 89 */
				obj_t BgL_list1545z00_2719;

				BgL_list1545z00_2719 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2f64vectorzd2refza2zd2zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 17)),
					BgL_list1545z00_2719);
			}
			{	/* Abound/walk.scm 90 */
				obj_t BgL_list1546z00_2720;

				BgL_list1546z00_2720 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2s8vectorzd2setz12za2zc0zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 18)),
					BgL_list1546z00_2720);
			}
			{	/* Abound/walk.scm 91 */
				obj_t BgL_list1547z00_2721;

				BgL_list1547z00_2721 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2u8vectorzd2setz12za2zc0zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 19)),
					BgL_list1547z00_2721);
			}
			{	/* Abound/walk.scm 92 */
				obj_t BgL_list1548z00_2722;

				BgL_list1548z00_2722 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2s16vectorzd2setz12za2zc0zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 20)),
					BgL_list1548z00_2722);
			}
			{	/* Abound/walk.scm 93 */
				obj_t BgL_list1549z00_2723;

				BgL_list1549z00_2723 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2u16vectorzd2setz12za2zc0zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 21)),
					BgL_list1549z00_2723);
			}
			{	/* Abound/walk.scm 94 */
				obj_t BgL_list1550z00_2724;

				BgL_list1550z00_2724 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2s32vectorzd2setz12za2zc0zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 22)),
					BgL_list1550z00_2724);
			}
			{	/* Abound/walk.scm 95 */
				obj_t BgL_list1551z00_2725;

				BgL_list1551z00_2725 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2u32vectorzd2setz12za2zc0zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 23)),
					BgL_list1551z00_2725);
			}
			{	/* Abound/walk.scm 96 */
				obj_t BgL_list1552z00_2726;

				BgL_list1552z00_2726 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2s64vectorzd2setz12za2zc0zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 24)),
					BgL_list1552z00_2726);
			}
			{	/* Abound/walk.scm 97 */
				obj_t BgL_list1554z00_2727;

				BgL_list1554z00_2727 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2u64vectorzd2setz12za2zc0zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 25)),
					BgL_list1554z00_2727);
			}
			{	/* Abound/walk.scm 98 */
				obj_t BgL_list1555z00_2728;

				BgL_list1555z00_2728 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2f32vectorzd2setz12za2zc0zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 26)),
					BgL_list1555z00_2728);
			}
			{	/* Abound/walk.scm 99 */
				obj_t BgL_list1556z00_2729;

				BgL_list1556z00_2729 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2f64vectorzd2setz12za2zc0zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 27)),
					BgL_list1556z00_2729);
			}
			return BUNSPEC;
		}

	}



/* &clear-cache! */
	obj_t BGl_z62clearzd2cachez12za2zzabound_walkz00(obj_t BgL_envz00_2606)
	{
		{	/* Abound/walk.scm 105 */
			return (BGl_za2stringzd2refza2zd2zzabound_walkz00 = BFALSE, BUNSPEC);
		}

	}



/* abound-fun! */
	obj_t BGl_aboundzd2funz12zc0zzabound_walkz00(obj_t BgL_varz00_18)
	{
		{	/* Abound/walk.scm 111 */
			{	/* Abound/walk.scm 112 */
				obj_t BgL_arg1558z00_1552;

				BgL_arg1558z00_1552 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_varz00_18)))->BgL_idz00);
				BGl_enterzd2functionzd2zztools_errorz00(BgL_arg1558z00_1552);
			}
			{	/* Abound/walk.scm 113 */
				BgL_valuez00_bglt BgL_funz00_1553;

				BgL_funz00_1553 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_varz00_18)))->BgL_valuez00);
				{	/* Abound/walk.scm 114 */
					BgL_nodez00_bglt BgL_arg1561z00_1554;

					{	/* Abound/walk.scm 114 */
						obj_t BgL_arg1564z00_1555;

						BgL_arg1564z00_1555 =
							(((BgL_sfunz00_bglt) COBJECT(
									((BgL_sfunz00_bglt) BgL_funz00_1553)))->BgL_bodyz00);
						BgL_arg1561z00_1554 =
							BGl_aboundzd2nodezd2zzabound_walkz00(
							((BgL_nodez00_bglt) BgL_arg1564z00_1555));
					}
					((((BgL_sfunz00_bglt) COBJECT(
									((BgL_sfunz00_bglt) BgL_funz00_1553)))->BgL_bodyz00) =
						((obj_t) ((obj_t) BgL_arg1561z00_1554)), BUNSPEC);
				}
				BGl_leavezd2functionzd2zztools_errorz00();
				return BgL_varz00_18;
			}
		}

	}



/* array-ref */
	BgL_nodez00_bglt BGl_arrayzd2refzd2zzabound_walkz00(BgL_nodezf2effectzf2_bglt
		BgL_nodez00_27, obj_t BgL_vecz00_28, obj_t BgL_offz00_29,
		obj_t BgL_locz00_30, BgL_typez00_bglt BgL_ftypez00_31,
		obj_t BgL_otypez00_32, obj_t BgL_vtypez00_33, obj_t BgL_dupz00_34)
	{
		{	/* Abound/walk.scm 266 */
			{	/* Abound/walk.scm 267 */
				obj_t BgL_vz00_1556;
				obj_t BgL_iz00_1557;
				obj_t BgL_lz00_1558;
				obj_t BgL_lnamez00_1559;
				obj_t BgL_lposz00_1560;

				BgL_vz00_1556 =
					BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
					(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 28))));
				BgL_iz00_1557 =
					BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
					(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 29))));
				BgL_lz00_1558 =
					BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
					(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 30))));
				{	/* Abound/walk.scm 270 */
					bool_t BgL_test2295z00_3196;

					if (STRUCTP(BgL_locz00_30))
						{	/* Abound/walk.scm 270 */
							BgL_test2295z00_3196 =
								(STRUCT_KEY(BgL_locz00_30) == CNST_TABLE_REF(((long) 31)));
						}
					else
						{	/* Abound/walk.scm 270 */
							BgL_test2295z00_3196 = ((bool_t) 0);
						}
					if (BgL_test2295z00_3196)
						{	/* Abound/walk.scm 270 */
							BgL_lnamez00_1559 =
								BGl_locationzd2fullzd2fnamez00zztools_locationz00
								(BgL_locz00_30);
						}
					else
						{	/* Abound/walk.scm 270 */
							BgL_lnamez00_1559 = BFALSE;
						}
				}
				{	/* Abound/walk.scm 271 */
					bool_t BgL_test2297z00_3203;

					if (STRUCTP(BgL_locz00_30))
						{	/* Abound/walk.scm 271 */
							BgL_test2297z00_3203 =
								(STRUCT_KEY(BgL_locz00_30) == CNST_TABLE_REF(((long) 31)));
						}
					else
						{	/* Abound/walk.scm 271 */
							BgL_test2297z00_3203 = ((bool_t) 0);
						}
					if (BgL_test2297z00_3203)
						{	/* Abound/walk.scm 271 */
							BgL_lposz00_1560 = STRUCT_REF(BgL_locz00_30, (int) (((long) 1)));
						}
					else
						{	/* Abound/walk.scm 271 */
							BgL_lposz00_1560 = BFALSE;
						}
				}
				{	/* Abound/walk.scm 273 */
					obj_t BgL_arg1565z00_1561;

					{	/* Abound/walk.scm 273 */
						obj_t BgL_arg1573z00_1562;

						{	/* Abound/walk.scm 273 */
							obj_t BgL_arg1575z00_1563;
							obj_t BgL_arg1578z00_1564;

							{	/* Abound/walk.scm 273 */
								obj_t BgL_arg1582z00_1565;
								obj_t BgL_arg1584z00_1566;

								{	/* Abound/walk.scm 273 */
									obj_t BgL_arg1588z00_1567;
									obj_t BgL_arg1589z00_1568;

									{	/* Abound/walk.scm 273 */
										obj_t BgL_arg1592z00_1569;

										BgL_arg1592z00_1569 =
											(((BgL_typez00_bglt) COBJECT(
													((BgL_typez00_bglt) BgL_vtypez00_33)))->BgL_idz00);
										BgL_arg1588z00_1567 =
											BGl_makezd2typedzd2identz00zzast_identz00(BgL_vz00_1556,
											BgL_arg1592z00_1569);
									}
									BgL_arg1589z00_1568 = MAKE_YOUNG_PAIR(BgL_vecz00_28, BNIL);
									BgL_arg1582z00_1565 =
										MAKE_YOUNG_PAIR(BgL_arg1588z00_1567, BgL_arg1589z00_1568);
								}
								{	/* Abound/walk.scm 274 */
									obj_t BgL_arg1593z00_1570;

									{	/* Abound/walk.scm 274 */
										obj_t BgL_arg1597z00_1571;
										obj_t BgL_arg1599z00_1572;

										{	/* Abound/walk.scm 274 */
											obj_t BgL_arg1604z00_1573;

											BgL_arg1604z00_1573 =
												(((BgL_typez00_bglt) COBJECT(
														((BgL_typez00_bglt) BgL_otypez00_32)))->BgL_idz00);
											BgL_arg1597z00_1571 =
												BGl_makezd2typedzd2identz00zzast_identz00(BgL_iz00_1557,
												BgL_arg1604z00_1573);
										}
										BgL_arg1599z00_1572 = MAKE_YOUNG_PAIR(BgL_offz00_29, BNIL);
										BgL_arg1593z00_1570 =
											MAKE_YOUNG_PAIR(BgL_arg1597z00_1571, BgL_arg1599z00_1572);
									}
									BgL_arg1584z00_1566 =
										MAKE_YOUNG_PAIR(BgL_arg1593z00_1570, BNIL);
								}
								BgL_arg1575z00_1563 =
									MAKE_YOUNG_PAIR(BgL_arg1582z00_1565, BgL_arg1584z00_1566);
							}
							{	/* Abound/walk.scm 275 */
								obj_t BgL_arg1605z00_1574;

								{	/* Abound/walk.scm 275 */
									obj_t BgL_arg1606z00_1575;

									{	/* Abound/walk.scm 275 */
										obj_t BgL_arg1611z00_1576;
										obj_t BgL_arg1612z00_1577;

										{	/* Abound/walk.scm 275 */
											obj_t BgL_arg1613z00_1578;

											{	/* Abound/walk.scm 275 */
												obj_t BgL_arg1624z00_1579;
												obj_t BgL_arg1626z00_1580;

												{	/* Abound/walk.scm 275 */
													obj_t BgL_arg1627z00_1581;

													BgL_arg1627z00_1581 =
														(((BgL_typez00_bglt) COBJECT(
																((BgL_typez00_bglt) BgL_otypez00_32)))->
														BgL_idz00);
													BgL_arg1624z00_1579 =
														BGl_makezd2typedzd2identz00zzast_identz00
														(BgL_lz00_1558, BgL_arg1627z00_1581);
												}
												{	/* Abound/walk.scm 277 */
													obj_t BgL_arg1631z00_1582;

													if (
														(BgL_vtypez00_33 ==
															BGl_za2vectorza2z00zztype_cachez00))
														{	/* Abound/walk.scm 278 */
															obj_t BgL_arg1634z00_1584;

															BgL_arg1634z00_1584 =
																MAKE_YOUNG_PAIR(BgL_vz00_1556, BNIL);
															BgL_arg1631z00_1582 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 32)),
																BgL_arg1634z00_1584);
														}
													else
														{	/* Abound/walk.scm 277 */
															if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																	(BgL_vtypez00_33,
																		BGl_za2hvectorsza2z00zztype_cachez00)))
																{	/* Abound/walk.scm 280 */
																	obj_t BgL_arg1639z00_1586;

																	BgL_arg1639z00_1586 =
																		MAKE_YOUNG_PAIR(BgL_vz00_1556, BNIL);
																	BgL_arg1631z00_1582 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 33)),
																		BgL_arg1639z00_1586);
																}
															else
																{	/* Abound/walk.scm 282 */
																	obj_t BgL_arg1640z00_1587;

																	BgL_arg1640z00_1587 =
																		MAKE_YOUNG_PAIR(BgL_vz00_1556, BNIL);
																	BgL_arg1631z00_1582 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 34)),
																		BgL_arg1640z00_1587);
														}}
													BgL_arg1626z00_1580 =
														MAKE_YOUNG_PAIR(BgL_arg1631z00_1582, BNIL);
												}
												BgL_arg1613z00_1578 =
													MAKE_YOUNG_PAIR(BgL_arg1624z00_1579,
													BgL_arg1626z00_1580);
											}
											BgL_arg1611z00_1576 =
												MAKE_YOUNG_PAIR(BgL_arg1613z00_1578, BNIL);
										}
										{	/* Abound/walk.scm 283 */
											obj_t BgL_arg1641z00_1588;

											{	/* Abound/walk.scm 283 */
												obj_t BgL_arg1644z00_1589;

												{	/* Abound/walk.scm 283 */
													obj_t BgL_arg1652z00_1590;
													obj_t BgL_arg1662z00_1591;

													{	/* Abound/walk.scm 283 */
														obj_t BgL_arg1663z00_1592;

														{	/* Abound/walk.scm 283 */
															obj_t BgL_arg1664z00_1593;

															BgL_arg1664z00_1593 =
																MAKE_YOUNG_PAIR(BgL_lz00_1558, BNIL);
															BgL_arg1663z00_1592 =
																MAKE_YOUNG_PAIR(BgL_iz00_1557,
																BgL_arg1664z00_1593);
														}
														BgL_arg1652z00_1590 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 35)),
															BgL_arg1663z00_1592);
													}
													{	/* Abound/walk.scm 284 */
														BgL_nodezf2effectzf2_bglt BgL_arg1667z00_1594;
														obj_t BgL_arg1669z00_1595;

														BgL_arg1667z00_1594 =
															((BgL_nodezf2effectzf2_bglt(*)())PROCEDURE_L_ENTRY
															(BgL_dupz00_34)) (BgL_dupz00_34, BgL_nodez00_27,
															BgL_vz00_1556, BgL_iz00_1557);
														{	/* Abound/walk.scm 286 */
															obj_t BgL_arg1672z00_1596;

															{	/* Abound/walk.scm 286 */
																obj_t BgL_arg1684z00_1597;

																{	/* Abound/walk.scm 286 */
																	obj_t BgL_arg1685z00_1598;
																	obj_t BgL_arg1686z00_1599;

																	{	/* Abound/walk.scm 286 */
																		obj_t BgL_arg1687z00_1600;
																		obj_t BgL_arg1688z00_1601;

																		{	/* Abound/walk.scm 286 */
																			obj_t BgL_arg1692z00_1602;

																			{	/* Abound/walk.scm 286 */
																				obj_t BgL_arg1695z00_1603;

																				BgL_arg1695z00_1603 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							36)), BNIL);
																				BgL_arg1692z00_1602 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							37)), BgL_arg1695z00_1603);
																			}
																			BgL_arg1687z00_1600 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						38)), BgL_arg1692z00_1602);
																		}
																		{	/* Abound/walk.scm 289 */
																			obj_t BgL_arg1696z00_1604;

																			{	/* Abound/walk.scm 289 */
																				obj_t BgL_arg1697z00_1605;

																				{	/* Abound/walk.scm 289 */
																					obj_t BgL_arg1704z00_1606;
																					obj_t BgL_arg1707z00_1607;

																					{	/* Abound/walk.scm 289 */
																						obj_t BgL_arg1708z00_1608;

																						{	/* Abound/walk.scm 289 */
																							obj_t BgL_arg1711z00_1609;

																							BgL_arg1711z00_1609 =
																								(((BgL_typez00_bglt) COBJECT(
																										((BgL_typez00_bglt)
																											BgL_vtypez00_33)))->
																								BgL_idz00);
																							{	/* Abound/walk.scm 289 */
																								obj_t BgL_res2161z00_2388;

																								BgL_res2161z00_2388 =
																									SYMBOL_TO_STRING
																									(BgL_arg1711z00_1609);
																								BgL_arg1708z00_1608 =
																									BgL_res2161z00_2388;
																						}}
																						BgL_arg1704z00_1606 =
																							string_append(BgL_arg1708z00_1608,
																							BGl_string2203z00zzabound_walkz00);
																					}
																					{	/* Abound/walk.scm 286 */
																						obj_t BgL_arg1712z00_1610;

																						{	/* Abound/walk.scm 286 */
																							obj_t BgL_arg1719z00_1611;

																							BgL_arg1719z00_1611 =
																								MAKE_YOUNG_PAIR(BgL_iz00_1557,
																								BNIL);
																							BgL_arg1712z00_1610 =
																								MAKE_YOUNG_PAIR(BgL_lz00_1558,
																								BgL_arg1719z00_1611);
																						}
																						BgL_arg1707z00_1607 =
																							MAKE_YOUNG_PAIR(BgL_vz00_1556,
																							BgL_arg1712z00_1610);
																					}
																					BgL_arg1697z00_1605 =
																						MAKE_YOUNG_PAIR(BgL_arg1704z00_1606,
																						BgL_arg1707z00_1607);
																				}
																				BgL_arg1696z00_1604 =
																					MAKE_YOUNG_PAIR(BgL_lposz00_1560,
																					BgL_arg1697z00_1605);
																			}
																			BgL_arg1688z00_1601 =
																				MAKE_YOUNG_PAIR(BgL_lnamez00_1559,
																				BgL_arg1696z00_1604);
																		}
																		BgL_arg1685z00_1598 =
																			MAKE_YOUNG_PAIR(BgL_arg1687z00_1600,
																			BgL_arg1688z00_1601);
																	}
																	{	/* Abound/walk.scm 285 */
																		obj_t BgL_arg1725z00_1612;

																		BgL_arg1725z00_1612 =
																			MAKE_YOUNG_PAIR(BFALSE, BNIL);
																		BgL_arg1686z00_1599 =
																			MAKE_YOUNG_PAIR(BFALSE,
																			BgL_arg1725z00_1612);
																	}
																	BgL_arg1684z00_1597 =
																		MAKE_YOUNG_PAIR(BgL_arg1685z00_1598,
																		BgL_arg1686z00_1599);
																}
																BgL_arg1672z00_1596 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 39)),
																	BgL_arg1684z00_1597);
															}
															BgL_arg1669z00_1595 =
																MAKE_YOUNG_PAIR(BgL_arg1672z00_1596, BNIL);
														}
														BgL_arg1662z00_1591 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_arg1667z00_1594),
															BgL_arg1669z00_1595);
													}
													BgL_arg1644z00_1589 =
														MAKE_YOUNG_PAIR(BgL_arg1652z00_1590,
														BgL_arg1662z00_1591);
												}
												BgL_arg1641z00_1588 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 40)),
													BgL_arg1644z00_1589);
											}
											BgL_arg1612z00_1577 =
												MAKE_YOUNG_PAIR(BgL_arg1641z00_1588, BNIL);
										}
										BgL_arg1606z00_1575 =
											MAKE_YOUNG_PAIR(BgL_arg1611z00_1576, BgL_arg1612z00_1577);
									}
									BgL_arg1605z00_1574 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 41)),
										BgL_arg1606z00_1575);
								}
								BgL_arg1578z00_1564 =
									MAKE_YOUNG_PAIR(BgL_arg1605z00_1574, BNIL);
							}
							BgL_arg1573z00_1562 =
								MAKE_YOUNG_PAIR(BgL_arg1575z00_1563, BgL_arg1578z00_1564);
						}
						BgL_arg1565z00_1561 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 41)), BgL_arg1573z00_1562);
					}
					return
						BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
						(BgL_arg1565z00_1561, BgL_locz00_30);
				}
			}
		}

	}



/* array-set! */
	BgL_nodez00_bglt
		BGl_arrayzd2setz12zc0zzabound_walkz00(BgL_nodezf2effectzf2_bglt
		BgL_nodez00_36, obj_t BgL_vecz00_37, obj_t BgL_offz00_38,
		obj_t BgL_locz00_39, obj_t BgL_ftypez00_40, obj_t BgL_otypez00_41,
		obj_t BgL_vtypez00_42, obj_t BgL_dupz00_43)
	{
		{	/* Abound/walk.scm 318 */
			{	/* Abound/walk.scm 319 */
				obj_t BgL_vz00_1618;
				obj_t BgL_iz00_1619;
				obj_t BgL_lz00_1620;
				obj_t BgL_lnamez00_1621;
				obj_t BgL_lposz00_1622;

				BgL_vz00_1618 =
					BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
					(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 28))));
				BgL_iz00_1619 =
					BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
					(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 29))));
				BgL_lz00_1620 =
					BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
					(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 30))));
				{	/* Abound/walk.scm 322 */
					bool_t BgL_test2301z00_3299;

					if (STRUCTP(BgL_locz00_39))
						{	/* Abound/walk.scm 322 */
							BgL_test2301z00_3299 =
								(STRUCT_KEY(BgL_locz00_39) == CNST_TABLE_REF(((long) 31)));
						}
					else
						{	/* Abound/walk.scm 322 */
							BgL_test2301z00_3299 = ((bool_t) 0);
						}
					if (BgL_test2301z00_3299)
						{	/* Abound/walk.scm 322 */
							BgL_lnamez00_1621 =
								BGl_locationzd2fullzd2fnamez00zztools_locationz00
								(BgL_locz00_39);
						}
					else
						{	/* Abound/walk.scm 322 */
							BgL_lnamez00_1621 = BFALSE;
						}
				}
				{	/* Abound/walk.scm 323 */
					bool_t BgL_test2303z00_3306;

					if (STRUCTP(BgL_locz00_39))
						{	/* Abound/walk.scm 323 */
							BgL_test2303z00_3306 =
								(STRUCT_KEY(BgL_locz00_39) == CNST_TABLE_REF(((long) 31)));
						}
					else
						{	/* Abound/walk.scm 323 */
							BgL_test2303z00_3306 = ((bool_t) 0);
						}
					if (BgL_test2303z00_3306)
						{	/* Abound/walk.scm 323 */
							BgL_lposz00_1622 = STRUCT_REF(BgL_locz00_39, (int) (((long) 1)));
						}
					else
						{	/* Abound/walk.scm 323 */
							BgL_lposz00_1622 = BFALSE;
						}
				}
				{	/* Abound/walk.scm 325 */
					obj_t BgL_arg1732z00_1623;

					{	/* Abound/walk.scm 325 */
						obj_t BgL_arg1733z00_1624;

						{	/* Abound/walk.scm 325 */
							obj_t BgL_arg1738z00_1625;
							obj_t BgL_arg1739z00_1626;

							{	/* Abound/walk.scm 325 */
								obj_t BgL_arg1740z00_1627;
								obj_t BgL_arg1741z00_1628;

								{	/* Abound/walk.scm 325 */
									obj_t BgL_arg1742z00_1629;
									obj_t BgL_arg1743z00_1630;

									{	/* Abound/walk.scm 325 */
										obj_t BgL_arg1744z00_1631;

										BgL_arg1744z00_1631 =
											(((BgL_typez00_bglt) COBJECT(
													((BgL_typez00_bglt) BgL_vtypez00_42)))->BgL_idz00);
										BgL_arg1742z00_1629 =
											BGl_makezd2typedzd2identz00zzast_identz00(BgL_vz00_1618,
											BgL_arg1744z00_1631);
									}
									BgL_arg1743z00_1630 = MAKE_YOUNG_PAIR(BgL_vecz00_37, BNIL);
									BgL_arg1740z00_1627 =
										MAKE_YOUNG_PAIR(BgL_arg1742z00_1629, BgL_arg1743z00_1630);
								}
								{	/* Abound/walk.scm 326 */
									obj_t BgL_arg1745z00_1632;

									{	/* Abound/walk.scm 326 */
										obj_t BgL_arg1746z00_1633;
										obj_t BgL_arg1747z00_1634;

										{	/* Abound/walk.scm 326 */
											obj_t BgL_arg1754z00_1635;

											BgL_arg1754z00_1635 =
												(((BgL_typez00_bglt) COBJECT(
														((BgL_typez00_bglt) BgL_otypez00_41)))->BgL_idz00);
											BgL_arg1746z00_1633 =
												BGl_makezd2typedzd2identz00zzast_identz00(BgL_iz00_1619,
												BgL_arg1754z00_1635);
										}
										BgL_arg1747z00_1634 = MAKE_YOUNG_PAIR(BgL_offz00_38, BNIL);
										BgL_arg1745z00_1632 =
											MAKE_YOUNG_PAIR(BgL_arg1746z00_1633, BgL_arg1747z00_1634);
									}
									BgL_arg1741z00_1628 =
										MAKE_YOUNG_PAIR(BgL_arg1745z00_1632, BNIL);
								}
								BgL_arg1738z00_1625 =
									MAKE_YOUNG_PAIR(BgL_arg1740z00_1627, BgL_arg1741z00_1628);
							}
							{	/* Abound/walk.scm 327 */
								obj_t BgL_arg1755z00_1636;

								{	/* Abound/walk.scm 327 */
									obj_t BgL_arg1756z00_1637;

									{	/* Abound/walk.scm 327 */
										obj_t BgL_arg1757z00_1638;
										obj_t BgL_arg1759z00_1639;

										{	/* Abound/walk.scm 327 */
											obj_t BgL_arg1760z00_1640;

											{	/* Abound/walk.scm 327 */
												obj_t BgL_arg1761z00_1641;
												obj_t BgL_arg1768z00_1642;

												{	/* Abound/walk.scm 327 */
													obj_t BgL_arg1771z00_1643;

													BgL_arg1771z00_1643 =
														(((BgL_typez00_bglt) COBJECT(
																((BgL_typez00_bglt) BgL_otypez00_41)))->
														BgL_idz00);
													BgL_arg1761z00_1641 =
														BGl_makezd2typedzd2identz00zzast_identz00
														(BgL_lz00_1620, BgL_arg1771z00_1643);
												}
												{	/* Abound/walk.scm 329 */
													obj_t BgL_arg1775z00_1644;

													if (
														(BgL_vtypez00_42 ==
															BGl_za2vectorza2z00zztype_cachez00))
														{	/* Abound/walk.scm 330 */
															obj_t BgL_arg1778z00_1646;

															BgL_arg1778z00_1646 =
																MAKE_YOUNG_PAIR(BgL_vz00_1618, BNIL);
															BgL_arg1775z00_1644 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 32)),
																BgL_arg1778z00_1646);
														}
													else
														{	/* Abound/walk.scm 329 */
															if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																	(BgL_vtypez00_42,
																		BGl_za2hvectorsza2z00zztype_cachez00)))
																{	/* Abound/walk.scm 332 */
																	obj_t BgL_arg1782z00_1648;

																	BgL_arg1782z00_1648 =
																		MAKE_YOUNG_PAIR(BgL_vz00_1618, BNIL);
																	BgL_arg1775z00_1644 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 33)),
																		BgL_arg1782z00_1648);
																}
															else
																{	/* Abound/walk.scm 334 */
																	obj_t BgL_arg1784z00_1649;

																	BgL_arg1784z00_1649 =
																		MAKE_YOUNG_PAIR(BgL_vz00_1618, BNIL);
																	BgL_arg1775z00_1644 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 34)),
																		BgL_arg1784z00_1649);
														}}
													BgL_arg1768z00_1642 =
														MAKE_YOUNG_PAIR(BgL_arg1775z00_1644, BNIL);
												}
												BgL_arg1760z00_1640 =
													MAKE_YOUNG_PAIR(BgL_arg1761z00_1641,
													BgL_arg1768z00_1642);
											}
											BgL_arg1757z00_1638 =
												MAKE_YOUNG_PAIR(BgL_arg1760z00_1640, BNIL);
										}
										{	/* Abound/walk.scm 335 */
											obj_t BgL_arg1790z00_1650;

											{	/* Abound/walk.scm 335 */
												obj_t BgL_arg1796z00_1651;

												{	/* Abound/walk.scm 335 */
													obj_t BgL_arg1798z00_1652;
													obj_t BgL_arg1801z00_1653;

													{	/* Abound/walk.scm 335 */
														obj_t BgL_arg1808z00_1654;

														{	/* Abound/walk.scm 335 */
															obj_t BgL_arg1809z00_1655;

															BgL_arg1809z00_1655 =
																MAKE_YOUNG_PAIR(BgL_lz00_1620, BNIL);
															BgL_arg1808z00_1654 =
																MAKE_YOUNG_PAIR(BgL_iz00_1619,
																BgL_arg1809z00_1655);
														}
														BgL_arg1798z00_1652 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 35)),
															BgL_arg1808z00_1654);
													}
													{	/* Abound/walk.scm 336 */
														BgL_nodezf2effectzf2_bglt BgL_arg1811z00_1656;
														obj_t BgL_arg1820z00_1657;

														BgL_arg1811z00_1656 =
															((BgL_nodezf2effectzf2_bglt(*)())PROCEDURE_L_ENTRY
															(BgL_dupz00_43)) (BgL_dupz00_43, BgL_nodez00_36,
															BgL_vz00_1618, BgL_iz00_1619);
														{	/* Abound/walk.scm 338 */
															obj_t BgL_arg1821z00_1658;

															{	/* Abound/walk.scm 338 */
																obj_t BgL_arg1822z00_1659;

																{	/* Abound/walk.scm 338 */
																	obj_t BgL_arg1823z00_1660;
																	obj_t BgL_arg1824z00_1661;

																	{	/* Abound/walk.scm 338 */
																		obj_t BgL_arg1825z00_1662;
																		obj_t BgL_arg1826z00_1663;

																		{	/* Abound/walk.scm 338 */
																			obj_t BgL_arg1827z00_1664;

																			{	/* Abound/walk.scm 338 */
																				obj_t BgL_arg1828z00_1665;

																				BgL_arg1828z00_1665 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							36)), BNIL);
																				BgL_arg1827z00_1664 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							37)), BgL_arg1828z00_1665);
																			}
																			BgL_arg1825z00_1662 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						38)), BgL_arg1827z00_1664);
																		}
																		{	/* Abound/walk.scm 341 */
																			obj_t BgL_arg1829z00_1666;

																			{	/* Abound/walk.scm 341 */
																				obj_t BgL_arg1830z00_1667;

																				{	/* Abound/walk.scm 341 */
																					obj_t BgL_arg1831z00_1668;
																					obj_t BgL_arg1832z00_1669;

																					{	/* Abound/walk.scm 341 */
																						obj_t BgL_arg1833z00_1670;

																						{	/* Abound/walk.scm 341 */
																							obj_t BgL_arg1835z00_1671;

																							BgL_arg1835z00_1671 =
																								(((BgL_typez00_bglt) COBJECT(
																										((BgL_typez00_bglt)
																											BgL_vtypez00_42)))->
																								BgL_idz00);
																							{	/* Abound/walk.scm 341 */
																								obj_t BgL_res2166z00_2405;

																								BgL_res2166z00_2405 =
																									SYMBOL_TO_STRING
																									(BgL_arg1835z00_1671);
																								BgL_arg1833z00_1670 =
																									BgL_res2166z00_2405;
																						}}
																						BgL_arg1831z00_1668 =
																							string_append(BgL_arg1833z00_1670,
																							BGl_string2204z00zzabound_walkz00);
																					}
																					{	/* Abound/walk.scm 338 */
																						obj_t BgL_arg1836z00_1672;

																						{	/* Abound/walk.scm 338 */
																							obj_t BgL_arg1838z00_1673;

																							BgL_arg1838z00_1673 =
																								MAKE_YOUNG_PAIR(BgL_iz00_1619,
																								BNIL);
																							BgL_arg1836z00_1672 =
																								MAKE_YOUNG_PAIR(BgL_lz00_1620,
																								BgL_arg1838z00_1673);
																						}
																						BgL_arg1832z00_1669 =
																							MAKE_YOUNG_PAIR(BgL_vz00_1618,
																							BgL_arg1836z00_1672);
																					}
																					BgL_arg1830z00_1667 =
																						MAKE_YOUNG_PAIR(BgL_arg1831z00_1668,
																						BgL_arg1832z00_1669);
																				}
																				BgL_arg1829z00_1666 =
																					MAKE_YOUNG_PAIR(BgL_lposz00_1622,
																					BgL_arg1830z00_1667);
																			}
																			BgL_arg1826z00_1663 =
																				MAKE_YOUNG_PAIR(BgL_lnamez00_1621,
																				BgL_arg1829z00_1666);
																		}
																		BgL_arg1823z00_1660 =
																			MAKE_YOUNG_PAIR(BgL_arg1825z00_1662,
																			BgL_arg1826z00_1663);
																	}
																	{	/* Abound/walk.scm 337 */
																		obj_t BgL_arg1840z00_1674;

																		BgL_arg1840z00_1674 =
																			MAKE_YOUNG_PAIR(BFALSE, BNIL);
																		BgL_arg1824z00_1661 =
																			MAKE_YOUNG_PAIR(BFALSE,
																			BgL_arg1840z00_1674);
																	}
																	BgL_arg1822z00_1659 =
																		MAKE_YOUNG_PAIR(BgL_arg1823z00_1660,
																		BgL_arg1824z00_1661);
																}
																BgL_arg1821z00_1658 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 39)),
																	BgL_arg1822z00_1659);
															}
															BgL_arg1820z00_1657 =
																MAKE_YOUNG_PAIR(BgL_arg1821z00_1658, BNIL);
														}
														BgL_arg1801z00_1653 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_arg1811z00_1656),
															BgL_arg1820z00_1657);
													}
													BgL_arg1796z00_1651 =
														MAKE_YOUNG_PAIR(BgL_arg1798z00_1652,
														BgL_arg1801z00_1653);
												}
												BgL_arg1790z00_1650 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 40)),
													BgL_arg1796z00_1651);
											}
											BgL_arg1759z00_1639 =
												MAKE_YOUNG_PAIR(BgL_arg1790z00_1650, BNIL);
										}
										BgL_arg1756z00_1637 =
											MAKE_YOUNG_PAIR(BgL_arg1757z00_1638, BgL_arg1759z00_1639);
									}
									BgL_arg1755z00_1636 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 41)),
										BgL_arg1756z00_1637);
								}
								BgL_arg1739z00_1626 =
									MAKE_YOUNG_PAIR(BgL_arg1755z00_1636, BNIL);
							}
							BgL_arg1733z00_1624 =
								MAKE_YOUNG_PAIR(BgL_arg1738z00_1625, BgL_arg1739z00_1626);
						}
						BgL_arg1732z00_1623 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 41)), BgL_arg1733z00_1624);
					}
					return
						BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
						(BgL_arg1732z00_1623, BgL_locz00_39);
				}
			}
		}

	}



/* abound-node*! */
	bool_t BGl_aboundzd2nodeza2z12z62zzabound_walkz00(obj_t BgL_nodeza2za2_56)
	{
		{	/* Abound/walk.scm 453 */
		BGl_aboundzd2nodeza2z12z62zzabound_walkz00:
			if (PAIRP(BgL_nodeza2za2_56))
				{	/* Abound/walk.scm 454 */
					{	/* Abound/walk.scm 455 */
						BgL_nodez00_bglt BgL_arg1850z00_1681;

						{	/* Abound/walk.scm 455 */
							obj_t BgL_arg1851z00_1682;

							BgL_arg1851z00_1682 = CAR(BgL_nodeza2za2_56);
							BgL_arg1850z00_1681 =
								BGl_aboundzd2nodezd2zzabound_walkz00(
								((BgL_nodez00_bglt) BgL_arg1851z00_1682));
						}
						{	/* Abound/walk.scm 455 */
							obj_t BgL_tmpz00_3398;

							BgL_tmpz00_3398 = ((obj_t) BgL_arg1850z00_1681);
							SET_CAR(BgL_nodeza2za2_56, BgL_tmpz00_3398);
						}
					}
					{
						obj_t BgL_nodeza2za2_3401;

						BgL_nodeza2za2_3401 = CDR(BgL_nodeza2za2_56);
						BgL_nodeza2za2_56 = BgL_nodeza2za2_3401;
						goto BGl_aboundzd2nodeza2z12z62zzabound_walkz00;
					}
				}
			else
				{	/* Abound/walk.scm 454 */
					return ((bool_t) 0);
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzabound_walkz00()
	{
		{	/* Abound/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzabound_walkz00()
	{
		{	/* Abound/walk.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_proc2205z00zzabound_walkz00, BGl_nodez00zzast_nodez00,
				BGl_string2206z00zzabound_walkz00);
		}

	}



/* &abound-node1356 */
	obj_t BGl_z62aboundzd2node1356zb0zzabound_walkz00(obj_t BgL_envz00_2608,
		obj_t BgL_nodez00_2609)
	{
		{	/* Abound/walk.scm 121 */
			return ((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2609));
		}

	}



/* abound-node */
	BgL_nodez00_bglt BGl_aboundzd2nodezd2zzabound_walkz00(BgL_nodez00_bglt
		BgL_nodez00_19)
	{
		{	/* Abound/walk.scm 121 */
			{	/* Abound/walk.scm 121 */
				obj_t BgL_method1357z00_1688;

				{	/* Abound/walk.scm 121 */
					obj_t BgL_res2178z00_2446;

					{	/* Abound/walk.scm 121 */
						long BgL_objzd2classzd2numz00_2411;

						{	/* Abound/walk.scm 121 */
							long BgL_res2168z00_2414;

							BgL_res2168z00_2414 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_19));
							BgL_objzd2classzd2numz00_2411 = BgL_res2168z00_2414;
						}
						{	/* Abound/walk.scm 121 */
							obj_t BgL_arg1813z00_2412;

							BgL_arg1813z00_2412 =
								PROCEDURE_REF(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
								(int) (((long) 1)));
							{	/* Abound/walk.scm 121 */
								int BgL_offsetz00_2416;

								BgL_offsetz00_2416 = (int) (BgL_objzd2classzd2numz00_2411);
								{	/* Abound/walk.scm 121 */
									long BgL_offsetz00_2417;

									BgL_offsetz00_2417 =
										((long) (BgL_offsetz00_2416) - OBJECT_TYPE);
									{	/* Abound/walk.scm 121 */
										long BgL_modz00_2418;

										BgL_modz00_2418 =
											(BgL_offsetz00_2417 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Abound/walk.scm 121 */
											long BgL_restz00_2420;

											BgL_restz00_2420 =
												(BgL_offsetz00_2417 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Abound/walk.scm 121 */

												{	/* Abound/walk.scm 121 */
													obj_t BgL_bucketz00_2422;

													BgL_bucketz00_2422 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2412), BgL_modz00_2418);
													BgL_res2178z00_2446 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2422), BgL_restz00_2420);
					}}}}}}}}
					BgL_method1357z00_1688 = BgL_res2178z00_2446;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1357z00_1688) (BgL_method1357z00_1688,
						((obj_t) BgL_nodez00_19), BEOA));
			}
		}

	}



/* &abound-node */
	BgL_nodez00_bglt BGl_z62aboundzd2nodezb0zzabound_walkz00(obj_t
		BgL_envz00_2610, obj_t BgL_nodez00_2611)
	{
		{	/* Abound/walk.scm 121 */
			return
				BGl_aboundzd2nodezd2zzabound_walkz00(
				((BgL_nodez00_bglt) BgL_nodez00_2611));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzabound_walkz00()
	{
		{	/* Abound/walk.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_sequencez00zzast_nodez00, BGl_proc2207z00zzabound_walkz00,
				BGl_string2208z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00, BGl_syncz00zzast_nodez00,
				BGl_proc2209z00zzabound_walkz00, BGl_string2208z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc2210z00zzabound_walkz00, BGl_string2208z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc2211z00zzabound_walkz00,
				BGl_string2208z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_funcallz00zzast_nodez00, BGl_proc2212z00zzabound_walkz00,
				BGl_string2208z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00, BGl_externz00zzast_nodez00,
				BGl_proc2213z00zzabound_walkz00, BGl_string2208z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00, BGl_vrefz00zzast_nodez00,
				BGl_proc2214z00zzabound_walkz00, BGl_string2208z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_vsetz12z12zzast_nodez00, BGl_proc2215z00zzabound_walkz00,
				BGl_string2208z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00, BGl_castz00zzast_nodez00,
				BGl_proc2216z00zzabound_walkz00, BGl_string2208z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00, BGl_setqz00zzast_nodez00,
				BGl_proc2217z00zzabound_walkz00, BGl_string2208z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc2218z00zzabound_walkz00,
				BGl_string2208z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00, BGl_failz00zzast_nodez00,
				BGl_proc2219z00zzabound_walkz00, BGl_string2208z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00, BGl_switchz00zzast_nodez00,
				BGl_proc2220z00zzabound_walkz00, BGl_string2208z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc2221z00zzabound_walkz00,
				BGl_string2208z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc2222z00zzabound_walkz00,
				BGl_string2208z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc2223z00zzabound_walkz00,
				BGl_string2208z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc2224z00zzabound_walkz00,
				BGl_string2208z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc2225z00zzabound_walkz00,
				BGl_string2208z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc2226z00zzabound_walkz00,
				BGl_string2208z00zzabound_walkz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc2227z00zzabound_walkz00,
				BGl_string2208z00zzabound_walkz00);
		}

	}



/* &abound-node-box-set!1399 */
	BgL_nodez00_bglt
		BGl_z62aboundzd2nodezd2boxzd2setz121399za2zzabound_walkz00(obj_t
		BgL_envz00_2636, obj_t BgL_nodez00_2637)
	{
		{	/* Abound/walk.scm 444 */
			{
				BgL_varz00_bglt BgL_auxz00_3459;

				{	/* Abound/walk.scm 446 */
					BgL_varz00_bglt BgL_arg2086z00_2732;

					BgL_arg2086z00_2732 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2637)))->BgL_varz00);
					BgL_auxz00_3459 =
						((BgL_varz00_bglt)
						BGl_aboundzd2nodezd2zzabound_walkz00(
							((BgL_nodez00_bglt) BgL_arg2086z00_2732)));
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2637)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_3459), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3467;

				{	/* Abound/walk.scm 447 */
					BgL_nodez00_bglt BgL_arg2087z00_2733;

					BgL_arg2087z00_2733 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2637)))->BgL_valuez00);
					BgL_auxz00_3467 =
						BGl_aboundzd2nodezd2zzabound_walkz00(BgL_arg2087z00_2733);
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2637)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3467), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2637));
		}

	}



/* &abound-node-box-ref1397 */
	BgL_nodez00_bglt BGl_z62aboundzd2nodezd2boxzd2ref1397zb0zzabound_walkz00(obj_t
		BgL_envz00_2638, obj_t BgL_nodez00_2639)
	{
		{	/* Abound/walk.scm 437 */
			{	/* Abound/walk.scm 438 */
				BgL_nodez00_bglt BgL_arg2084z00_2735;

				{	/* Abound/walk.scm 438 */
					BgL_varz00_bglt BgL_arg2085z00_2736;

					BgL_arg2085z00_2736 =
						(((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2639)))->BgL_varz00);
					BgL_arg2084z00_2735 =
						BGl_aboundzd2nodezd2zzabound_walkz00(
						((BgL_nodez00_bglt) BgL_arg2085z00_2736));
				}
				((((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2639)))->BgL_varz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_arg2084z00_2735)), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_2639));
		}

	}



/* &abound-node-make-box1395 */
	BgL_nodez00_bglt
		BGl_z62aboundzd2nodezd2makezd2box1395zb0zzabound_walkz00(obj_t
		BgL_envz00_2640, obj_t BgL_nodez00_2641)
	{
		{	/* Abound/walk.scm 430 */
			((((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_2641)))->BgL_valuez00) =
				((BgL_nodez00_bglt)
					BGl_aboundzd2nodezd2zzabound_walkz00((((BgL_makezd2boxzd2_bglt)
								COBJECT(((BgL_makezd2boxzd2_bglt) BgL_nodez00_2641)))->
							BgL_valuez00))), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2641));
		}

	}



/* &abound-node-jump-ex-1393 */
	BgL_nodez00_bglt
		BGl_z62aboundzd2nodezd2jumpzd2exzd21393z62zzabound_walkz00(obj_t
		BgL_envz00_2642, obj_t BgL_nodez00_2643)
	{
		{	/* Abound/walk.scm 421 */
			{
				BgL_nodez00_bglt BgL_auxz00_3491;

				{	/* Abound/walk.scm 423 */
					BgL_nodez00_bglt BgL_arg2080z00_2739;

					BgL_arg2080z00_2739 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2643)))->BgL_exitz00);
					BgL_auxz00_3491 =
						BGl_aboundzd2nodezd2zzabound_walkz00(BgL_arg2080z00_2739);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2643)))->
						BgL_exitz00) = ((BgL_nodez00_bglt) BgL_auxz00_3491), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3497;

				{	/* Abound/walk.scm 424 */
					BgL_nodez00_bglt BgL_arg2081z00_2740;

					BgL_arg2081z00_2740 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2643)))->
						BgL_valuez00);
					BgL_auxz00_3497 =
						BGl_aboundzd2nodezd2zzabound_walkz00(BgL_arg2081z00_2740);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2643)))->
						BgL_valuez00) = ((BgL_nodez00_bglt) BgL_auxz00_3497), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2643));
		}

	}



/* &abound-node-set-ex-i1391 */
	BgL_nodez00_bglt
		BGl_z62aboundzd2nodezd2setzd2exzd2i1391z62zzabound_walkz00(obj_t
		BgL_envz00_2644, obj_t BgL_nodez00_2645)
	{
		{	/* Abound/walk.scm 414 */
			((((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2645)))->BgL_bodyz00) =
				((BgL_nodez00_bglt)
					BGl_aboundzd2nodezd2zzabound_walkz00((((BgL_setzd2exzd2itz00_bglt)
								COBJECT(((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2645)))->
							BgL_bodyz00))), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt)
					BgL_nodez00_2645));
		}

	}



/* &abound-node-let-var1389 */
	BgL_nodez00_bglt BGl_z62aboundzd2nodezd2letzd2var1389zb0zzabound_walkz00(obj_t
		BgL_envz00_2646, obj_t BgL_nodez00_2647)
	{
		{	/* Abound/walk.scm 403 */
			{	/* Abound/walk.scm 405 */
				obj_t BgL_g1355z00_2743;

				BgL_g1355z00_2743 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2647)))->BgL_bindingsz00);
				{
					obj_t BgL_l1353z00_2745;

					BgL_l1353z00_2745 = BgL_g1355z00_2743;
				BgL_zc3z04anonymousza32070ze3z87_2744:
					if (PAIRP(BgL_l1353z00_2745))
						{	/* Abound/walk.scm 405 */
							{	/* Abound/walk.scm 406 */
								obj_t BgL_bindingz00_2746;

								BgL_bindingz00_2746 = CAR(BgL_l1353z00_2745);
								{	/* Abound/walk.scm 406 */
									BgL_nodez00_bglt BgL_arg2072z00_2747;

									{	/* Abound/walk.scm 406 */
										obj_t BgL_arg2075z00_2748;

										BgL_arg2075z00_2748 = CDR(((obj_t) BgL_bindingz00_2746));
										BgL_arg2072z00_2747 =
											BGl_aboundzd2nodezd2zzabound_walkz00(
											((BgL_nodez00_bglt) BgL_arg2075z00_2748));
									}
									{	/* Abound/walk.scm 406 */
										obj_t BgL_auxz00_3523;
										obj_t BgL_tmpz00_3521;

										BgL_auxz00_3523 = ((obj_t) BgL_arg2072z00_2747);
										BgL_tmpz00_3521 = ((obj_t) BgL_bindingz00_2746);
										SET_CDR(BgL_tmpz00_3521, BgL_auxz00_3523);
									}
								}
							}
							{
								obj_t BgL_l1353z00_3526;

								BgL_l1353z00_3526 = CDR(BgL_l1353z00_2745);
								BgL_l1353z00_2745 = BgL_l1353z00_3526;
								goto BgL_zc3z04anonymousza32070ze3z87_2744;
							}
						}
					else
						{	/* Abound/walk.scm 405 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3528;

				{	/* Abound/walk.scm 408 */
					BgL_nodez00_bglt BgL_arg2077z00_2749;

					BgL_arg2077z00_2749 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2647)))->BgL_bodyz00);
					BgL_auxz00_3528 =
						BGl_aboundzd2nodezd2zzabound_walkz00(BgL_arg2077z00_2749);
				}
				((((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2647)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3528), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt) BgL_nodez00_2647));
		}

	}



/* &abound-node-let-fun1387 */
	BgL_nodez00_bglt BGl_z62aboundzd2nodezd2letzd2fun1387zb0zzabound_walkz00(obj_t
		BgL_envz00_2648, obj_t BgL_nodez00_2649)
	{
		{	/* Abound/walk.scm 394 */
			{	/* Abound/walk.scm 396 */
				obj_t BgL_g1352z00_2751;

				BgL_g1352z00_2751 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2649)))->BgL_localsz00);
				{
					obj_t BgL_l1350z00_2753;

					BgL_l1350z00_2753 = BgL_g1352z00_2751;
				BgL_zc3z04anonymousza32066ze3z87_2752:
					if (PAIRP(BgL_l1350z00_2753))
						{	/* Abound/walk.scm 396 */
							BGl_aboundzd2funz12zc0zzabound_walkz00(CAR(BgL_l1350z00_2753));
							{
								obj_t BgL_l1350z00_3542;

								BgL_l1350z00_3542 = CDR(BgL_l1350z00_2753);
								BgL_l1350z00_2753 = BgL_l1350z00_3542;
								goto BgL_zc3z04anonymousza32066ze3z87_2752;
							}
						}
					else
						{	/* Abound/walk.scm 396 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3544;

				{	/* Abound/walk.scm 397 */
					BgL_nodez00_bglt BgL_arg2069z00_2754;

					BgL_arg2069z00_2754 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2649)))->BgL_bodyz00);
					BgL_auxz00_3544 =
						BGl_aboundzd2nodezd2zzabound_walkz00(BgL_arg2069z00_2754);
				}
				((((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2649)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3544), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt) BgL_nodez00_2649));
		}

	}



/* &abound-node-switch1385 */
	BgL_nodez00_bglt BGl_z62aboundzd2nodezd2switch1385z62zzabound_walkz00(obj_t
		BgL_envz00_2650, obj_t BgL_nodez00_2651)
	{
		{	/* Abound/walk.scm 383 */
			{
				BgL_nodez00_bglt BgL_auxz00_3552;

				{	/* Abound/walk.scm 385 */
					BgL_nodez00_bglt BgL_arg2059z00_2756;

					BgL_arg2059z00_2756 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2651)))->BgL_testz00);
					BgL_auxz00_3552 =
						BGl_aboundzd2nodezd2zzabound_walkz00(BgL_arg2059z00_2756);
				}
				((((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2651)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3552), BUNSPEC);
			}
			{	/* Abound/walk.scm 386 */
				obj_t BgL_g1349z00_2757;

				BgL_g1349z00_2757 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2651)))->BgL_clausesz00);
				{
					obj_t BgL_l1347z00_2759;

					BgL_l1347z00_2759 = BgL_g1349z00_2757;
				BgL_zc3z04anonymousza32060ze3z87_2758:
					if (PAIRP(BgL_l1347z00_2759))
						{	/* Abound/walk.scm 386 */
							{	/* Abound/walk.scm 387 */
								obj_t BgL_clausez00_2760;

								BgL_clausez00_2760 = CAR(BgL_l1347z00_2759);
								{	/* Abound/walk.scm 387 */
									BgL_nodez00_bglt BgL_arg2062z00_2761;

									{	/* Abound/walk.scm 387 */
										obj_t BgL_arg2063z00_2762;

										BgL_arg2063z00_2762 = CDR(((obj_t) BgL_clausez00_2760));
										BgL_arg2062z00_2761 =
											BGl_aboundzd2nodezd2zzabound_walkz00(
											((BgL_nodez00_bglt) BgL_arg2063z00_2762));
									}
									{	/* Abound/walk.scm 387 */
										obj_t BgL_auxz00_3569;
										obj_t BgL_tmpz00_3567;

										BgL_auxz00_3569 = ((obj_t) BgL_arg2062z00_2761);
										BgL_tmpz00_3567 = ((obj_t) BgL_clausez00_2760);
										SET_CDR(BgL_tmpz00_3567, BgL_auxz00_3569);
									}
								}
							}
							{
								obj_t BgL_l1347z00_3572;

								BgL_l1347z00_3572 = CDR(BgL_l1347z00_2759);
								BgL_l1347z00_2759 = BgL_l1347z00_3572;
								goto BgL_zc3z04anonymousza32060ze3z87_2758;
							}
						}
					else
						{	/* Abound/walk.scm 386 */
							((bool_t) 1);
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_2651));
		}

	}



/* &abound-node-fail1383 */
	BgL_nodez00_bglt BGl_z62aboundzd2nodezd2fail1383z62zzabound_walkz00(obj_t
		BgL_envz00_2652, obj_t BgL_nodez00_2653)
	{
		{	/* Abound/walk.scm 373 */
			{
				BgL_nodez00_bglt BgL_auxz00_3576;

				{	/* Abound/walk.scm 375 */
					BgL_nodez00_bglt BgL_arg2055z00_2764;

					BgL_arg2055z00_2764 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2653)))->BgL_procz00);
					BgL_auxz00_3576 =
						BGl_aboundzd2nodezd2zzabound_walkz00(BgL_arg2055z00_2764);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2653)))->BgL_procz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3576), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3582;

				{	/* Abound/walk.scm 376 */
					BgL_nodez00_bglt BgL_arg2056z00_2765;

					BgL_arg2056z00_2765 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2653)))->BgL_msgz00);
					BgL_auxz00_3582 =
						BGl_aboundzd2nodezd2zzabound_walkz00(BgL_arg2056z00_2765);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2653)))->BgL_msgz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3582), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3588;

				{	/* Abound/walk.scm 377 */
					BgL_nodez00_bglt BgL_arg2057z00_2766;

					BgL_arg2057z00_2766 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2653)))->BgL_objz00);
					BgL_auxz00_3588 =
						BGl_aboundzd2nodezd2zzabound_walkz00(BgL_arg2057z00_2766);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2653)))->BgL_objz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3588), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_failz00_bglt) BgL_nodez00_2653));
		}

	}



/* &abound-node-conditio1381 */
	BgL_nodez00_bglt BGl_z62aboundzd2nodezd2conditio1381z62zzabound_walkz00(obj_t
		BgL_envz00_2654, obj_t BgL_nodez00_2655)
	{
		{	/* Abound/walk.scm 363 */
			{
				BgL_nodez00_bglt BgL_auxz00_3596;

				{	/* Abound/walk.scm 365 */
					BgL_nodez00_bglt BgL_arg2050z00_2768;

					BgL_arg2050z00_2768 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2655)))->BgL_testz00);
					BgL_auxz00_3596 =
						BGl_aboundzd2nodezd2zzabound_walkz00(BgL_arg2050z00_2768);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2655)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3596), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3602;

				{	/* Abound/walk.scm 366 */
					BgL_nodez00_bglt BgL_arg2051z00_2769;

					BgL_arg2051z00_2769 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2655)))->BgL_truez00);
					BgL_auxz00_3602 =
						BGl_aboundzd2nodezd2zzabound_walkz00(BgL_arg2051z00_2769);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2655)))->BgL_truez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3602), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3608;

				{	/* Abound/walk.scm 367 */
					BgL_nodez00_bglt BgL_arg2053z00_2770;

					BgL_arg2053z00_2770 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2655)))->BgL_falsez00);
					BgL_auxz00_3608 =
						BGl_aboundzd2nodezd2zzabound_walkz00(BgL_arg2053z00_2770);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2655)))->BgL_falsez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3608), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt) BgL_nodez00_2655));
		}

	}



/* &abound-node-setq1379 */
	BgL_nodez00_bglt BGl_z62aboundzd2nodezd2setq1379z62zzabound_walkz00(obj_t
		BgL_envz00_2656, obj_t BgL_nodez00_2657)
	{
		{	/* Abound/walk.scm 356 */
			((((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2657)))->BgL_valuez00) =
				((BgL_nodez00_bglt)
					BGl_aboundzd2nodezd2zzabound_walkz00((((BgL_setqz00_bglt)
								COBJECT(((BgL_setqz00_bglt) BgL_nodez00_2657)))->
							BgL_valuez00))), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_setqz00_bglt) BgL_nodez00_2657));
		}

	}



/* &abound-node-cast1377 */
	BgL_nodez00_bglt BGl_z62aboundzd2nodezd2cast1377z62zzabound_walkz00(obj_t
		BgL_envz00_2658, obj_t BgL_nodez00_2659)
	{
		{	/* Abound/walk.scm 349 */
			BGl_aboundzd2nodezd2zzabound_walkz00(
				(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2659)))->BgL_argz00));
			return ((BgL_nodez00_bglt) ((BgL_castz00_bglt) BgL_nodez00_2659));
		}

	}



/* &abound-node-vset!1375 */
	BgL_nodez00_bglt BGl_z62aboundzd2nodezd2vsetz121375z70zzabound_walkz00(obj_t
		BgL_envz00_2660, obj_t BgL_nodez00_2661)
	{
		{	/* Abound/walk.scm 297 */
			{

				{
					BgL_vsetz12z12_bglt BgL_nodez00_2777;

					{	/* Abound/walk.scm 297 */
						obj_t BgL_nextzd2method1374zd2_2775;

						BgL_nextzd2method1374zd2_2775 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							((BgL_objectz00_bglt)
								((BgL_vsetz12z12_bglt) BgL_nodez00_2661)),
							BGl_aboundzd2nodezd2envz00zzabound_walkz00,
							BGl_vsetz12z12zzast_nodez00);
						PROCEDURE_ENTRY(BgL_nextzd2method1374zd2_2775)
							(BgL_nextzd2method1374zd2_2775,
							((obj_t) ((BgL_vsetz12z12_bglt) BgL_nodez00_2661)), BEOA);
					}
					if (
						(((BgL_vsetz12z12_bglt) COBJECT(
									((BgL_vsetz12z12_bglt) BgL_nodez00_2661)))->BgL_unsafez00))
						{	/* Abound/walk.scm 309 */
							return
								((BgL_nodez00_bglt) ((BgL_vsetz12z12_bglt) BgL_nodez00_2661));
						}
					else
						{	/* Abound/walk.scm 311 */
							BgL_nodez00_bglt BgL_nodez00_2787;

							BgL_nodez00_2777 = ((BgL_vsetz12z12_bglt) BgL_nodez00_2661);
							{	/* Abound/walk.scm 301 */
								obj_t BgL_arg2029z00_2778;
								obj_t BgL_arg2031z00_2779;
								obj_t BgL_arg2033z00_2780;
								BgL_typez00_bglt BgL_arg2034z00_2781;
								BgL_typez00_bglt BgL_arg2035z00_2782;
								BgL_typez00_bglt BgL_arg2036z00_2783;

								{	/* Abound/walk.scm 301 */
									obj_t BgL_pairz00_2784;

									BgL_pairz00_2784 =
										(((BgL_externz00_bglt) COBJECT(
												((BgL_externz00_bglt) BgL_nodez00_2777)))->
										BgL_exprza2za2);
									BgL_arg2029z00_2778 = CAR(BgL_pairz00_2784);
								}
								{	/* Abound/walk.scm 301 */
									obj_t BgL_pairz00_2785;

									BgL_pairz00_2785 =
										(((BgL_externz00_bglt) COBJECT(
												((BgL_externz00_bglt) BgL_nodez00_2777)))->
										BgL_exprza2za2);
									BgL_arg2031z00_2779 = CAR(CDR(BgL_pairz00_2785));
								}
								BgL_arg2033z00_2780 =
									(((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt) BgL_nodez00_2777)))->BgL_locz00);
								BgL_arg2034z00_2781 =
									(((BgL_vsetz12z12_bglt) COBJECT(BgL_nodez00_2777))->
									BgL_ftypez00);
								BgL_arg2035z00_2782 =
									(((BgL_vsetz12z12_bglt) COBJECT(BgL_nodez00_2777))->
									BgL_otypez00);
								BgL_arg2036z00_2783 =
									(((BgL_vsetz12z12_bglt) COBJECT(BgL_nodez00_2777))->
									BgL_vtypez00);
								BgL_nodez00_2787 =
									BGl_arrayzd2setz12zc0zzabound_walkz00((
										(BgL_nodezf2effectzf2_bglt) BgL_nodez00_2777),
									BgL_arg2029z00_2778, BgL_arg2031z00_2779, BgL_arg2033z00_2780,
									((obj_t) BgL_arg2034z00_2781), ((obj_t) BgL_arg2035z00_2782),
									((obj_t) BgL_arg2036z00_2783),
									BGl_proc2228z00zzabound_walkz00);
							}
							BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_nodez00_2787);
							return BgL_nodez00_2787;
						}
				}
			}
		}

	}



/* &<@anonymous:2040> */
	BgL_vsetz12z12_bglt BGl_z62zc3z04anonymousza32040ze3ze5zzabound_walkz00(obj_t
		BgL_envz00_2662, BgL_nodezf2effectzf2_bglt BgL_nodez00_2663,
		obj_t BgL_vz00_2664, obj_t BgL_iz00_2665)
	{
		{	/* Abound/walk.scm 302 */
			{	/* Abound/walk.scm 304 */
				BgL_vsetz12z12_bglt BgL_new1157z00_2791;

				{	/* Abound/walk.scm 304 */
					BgL_vsetz12z12_bglt BgL_new1168z00_2792;

					BgL_new1168z00_2792 =
						((BgL_vsetz12z12_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_vsetz12z12_bgl))));
					{	/* Abound/walk.scm 304 */
						long BgL_arg2046z00_2793;

						{	/* Abound/walk.scm 304 */
							long BgL_res2190z00_2794;

							BgL_res2190z00_2794 =
								BGL_CLASS_INDEX(BGl_vsetz12z12zzast_nodez00);
							BgL_arg2046z00_2793 = BgL_res2190z00_2794;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1168z00_2792), BgL_arg2046z00_2793);
					}
					{	/* Abound/walk.scm 304 */
						BgL_objectz00_bglt BgL_tmpz00_3665;

						BgL_tmpz00_3665 = ((BgL_objectz00_bglt) BgL_new1168z00_2792);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3665, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1168z00_2792);
					BgL_new1157z00_2791 = BgL_new1168z00_2792;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1157z00_2791)))->BgL_locz00) =
					((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_nodez00_2663)))->BgL_locz00)), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1157z00_2791)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_nodez00_2663)))->BgL_typez00)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1157z00_2791)))->BgL_sidezd2effectzd2) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt)
											BgL_nodez00_2663))))->BgL_sidezd2effectzd2)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1157z00_2791)))->BgL_keyz00) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt)
											BgL_nodez00_2663))))->BgL_keyz00)), BUNSPEC);
				{
					obj_t BgL_auxz00_3687;

					{	/* Abound/walk.scm 305 */
						obj_t BgL_arg2041z00_2795;

						{	/* Abound/walk.scm 305 */
							obj_t BgL_pairz00_2796;

							BgL_pairz00_2796 =
								(((BgL_externz00_bglt) COBJECT(
										((BgL_externz00_bglt)
											((BgL_vsetz12z12_bglt) BgL_nodez00_2663))))->
								BgL_exprza2za2);
							{	/* Abound/walk.scm 305 */
								obj_t BgL_pairz00_2797;

								{	/* Abound/walk.scm 305 */
									obj_t BgL_pairz00_2798;

									BgL_pairz00_2798 = CDR(BgL_pairz00_2796);
									BgL_pairz00_2797 = CDR(BgL_pairz00_2798);
								}
								BgL_arg2041z00_2795 = CAR(BgL_pairz00_2797);
						}}
						{	/* Abound/walk.scm 305 */
							obj_t BgL_list2042z00_2799;

							{	/* Abound/walk.scm 305 */
								obj_t BgL_arg2043z00_2800;

								{	/* Abound/walk.scm 305 */
									obj_t BgL_arg2044z00_2801;

									BgL_arg2044z00_2801 =
										MAKE_YOUNG_PAIR(BgL_arg2041z00_2795, BNIL);
									BgL_arg2043z00_2800 =
										MAKE_YOUNG_PAIR(BgL_iz00_2665, BgL_arg2044z00_2801);
								}
								BgL_list2042z00_2799 =
									MAKE_YOUNG_PAIR(BgL_vz00_2664, BgL_arg2043z00_2800);
							}
							BgL_auxz00_3687 = BgL_list2042z00_2799;
					}}
					((((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt) BgL_new1157z00_2791)))->
							BgL_exprza2za2) = ((obj_t) BgL_auxz00_3687), BUNSPEC);
				}
				((((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_new1157z00_2791)))->BgL_effectz00) =
					((obj_t) (((BgL_externz00_bglt)
								COBJECT(((BgL_externz00_bglt) ((BgL_nodez00_bglt)
											BgL_nodez00_2663))))->BgL_effectz00)), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1157z00_2791)))->BgL_czd2formatzd2) =
					((obj_t) (((BgL_privatez00_bglt)
								COBJECT(((BgL_privatez00_bglt) ((BgL_nodez00_bglt)
											BgL_nodez00_2663))))->BgL_czd2formatzd2)), BUNSPEC);
				((((BgL_vsetz12z12_bglt) COBJECT(BgL_new1157z00_2791))->BgL_ftypez00) =
					((BgL_typez00_bglt) (((BgL_vsetz12z12_bglt)
								COBJECT(((BgL_vsetz12z12_bglt) ((BgL_nodez00_bglt)
											BgL_nodez00_2663))))->BgL_ftypez00)), BUNSPEC);
				((((BgL_vsetz12z12_bglt) COBJECT(BgL_new1157z00_2791))->BgL_otypez00) =
					((BgL_typez00_bglt) (((BgL_vsetz12z12_bglt)
								COBJECT(((BgL_vsetz12z12_bglt) ((BgL_nodez00_bglt)
											BgL_nodez00_2663))))->BgL_otypez00)), BUNSPEC);
				((((BgL_vsetz12z12_bglt) COBJECT(BgL_new1157z00_2791))->BgL_vtypez00) =
					((BgL_typez00_bglt) (((BgL_vsetz12z12_bglt)
								COBJECT(((BgL_vsetz12z12_bglt) ((BgL_nodez00_bglt)
											BgL_nodez00_2663))))->BgL_vtypez00)), BUNSPEC);
				((((BgL_vsetz12z12_bglt) COBJECT(BgL_new1157z00_2791))->BgL_unsafez00) =
					((bool_t) (((BgL_vsetz12z12_bglt)
								COBJECT(((BgL_vsetz12z12_bglt) ((BgL_nodez00_bglt)
											BgL_nodez00_2663))))->BgL_unsafez00)), BUNSPEC);
				return BgL_new1157z00_2791;
			}
		}

	}



/* &abound-node-vref1372 */
	BgL_nodez00_bglt BGl_z62aboundzd2nodezd2vref1372z62zzabound_walkz00(obj_t
		BgL_envz00_2666, obj_t BgL_nodez00_2667)
	{
		{	/* Abound/walk.scm 248 */
			{

				{
					BgL_vrefz00_bglt BgL_nodez00_2806;

					{	/* Abound/walk.scm 248 */
						obj_t BgL_nextzd2method1371zd2_2804;

						BgL_nextzd2method1371zd2_2804 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							((BgL_objectz00_bglt)
								((BgL_vrefz00_bglt) BgL_nodez00_2667)),
							BGl_aboundzd2nodezd2envz00zzabound_walkz00,
							BGl_vrefz00zzast_nodez00);
						PROCEDURE_ENTRY(BgL_nextzd2method1371zd2_2804)
							(BgL_nextzd2method1371zd2_2804,
							((obj_t) ((BgL_vrefz00_bglt) BgL_nodez00_2667)), BEOA);
					}
					if (
						(((BgL_vrefz00_bglt) COBJECT(
									((BgL_vrefz00_bglt) BgL_nodez00_2667)))->BgL_unsafez00))
						{	/* Abound/walk.scm 257 */
							return ((BgL_nodez00_bglt) ((BgL_vrefz00_bglt) BgL_nodez00_2667));
						}
					else
						{	/* Abound/walk.scm 259 */
							BgL_nodez00_bglt BgL_nodez00_2816;

							BgL_nodez00_2806 = ((BgL_vrefz00_bglt) BgL_nodez00_2667);
							{	/* Abound/walk.scm 252 */
								obj_t BgL_arg2010z00_2807;
								obj_t BgL_arg2011z00_2808;
								obj_t BgL_arg2012z00_2809;
								BgL_typez00_bglt BgL_arg2013z00_2810;
								BgL_typez00_bglt BgL_arg2014z00_2811;
								BgL_typez00_bglt BgL_arg2016z00_2812;

								{	/* Abound/walk.scm 252 */
									obj_t BgL_pairz00_2813;

									BgL_pairz00_2813 =
										(((BgL_externz00_bglt) COBJECT(
												((BgL_externz00_bglt) BgL_nodez00_2806)))->
										BgL_exprza2za2);
									BgL_arg2010z00_2807 = CAR(BgL_pairz00_2813);
								}
								{	/* Abound/walk.scm 252 */
									obj_t BgL_pairz00_2814;

									BgL_pairz00_2814 =
										(((BgL_externz00_bglt) COBJECT(
												((BgL_externz00_bglt) BgL_nodez00_2806)))->
										BgL_exprza2za2);
									BgL_arg2011z00_2808 = CAR(CDR(BgL_pairz00_2814));
								}
								BgL_arg2012z00_2809 =
									(((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt) BgL_nodez00_2806)))->BgL_locz00);
								BgL_arg2013z00_2810 =
									(((BgL_vrefz00_bglt) COBJECT(BgL_nodez00_2806))->
									BgL_ftypez00);
								BgL_arg2014z00_2811 =
									(((BgL_vrefz00_bglt) COBJECT(BgL_nodez00_2806))->
									BgL_otypez00);
								BgL_arg2016z00_2812 =
									(((BgL_vrefz00_bglt) COBJECT(BgL_nodez00_2806))->
									BgL_vtypez00);
								BgL_nodez00_2816 =
									BGl_arrayzd2refzd2zzabound_walkz00((
										(BgL_nodezf2effectzf2_bglt) BgL_nodez00_2806),
									BgL_arg2010z00_2807, BgL_arg2011z00_2808, BgL_arg2012z00_2809,
									BgL_arg2013z00_2810, ((obj_t) BgL_arg2014z00_2811),
									((obj_t) BgL_arg2016z00_2812),
									BGl_proc2229z00zzabound_walkz00);
							}
							BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_nodez00_2816);
							return BgL_nodez00_2816;
						}
				}
			}
		}

	}



/* &<@anonymous:2021> */
	BgL_vrefz00_bglt BGl_z62zc3z04anonymousza32021ze3ze5zzabound_walkz00(obj_t
		BgL_envz00_2668, BgL_nodezf2effectzf2_bglt BgL_nodez00_2669,
		obj_t BgL_vz00_2670, obj_t BgL_iz00_2671)
	{
		{	/* Abound/walk.scm 253 */
			{	/* Abound/walk.scm 253 */
				BgL_vrefz00_bglt BgL_new1142z00_2820;

				{	/* Abound/walk.scm 253 */
					BgL_vrefz00_bglt BgL_new1153z00_2821;

					BgL_new1153z00_2821 =
						((BgL_vrefz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_vrefz00_bgl))));
					{	/* Abound/walk.scm 253 */
						long BgL_arg2026z00_2822;

						{	/* Abound/walk.scm 253 */
							long BgL_res2188z00_2823;

							BgL_res2188z00_2823 = BGL_CLASS_INDEX(BGl_vrefz00zzast_nodez00);
							BgL_arg2026z00_2822 = BgL_res2188z00_2823;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1153z00_2821), BgL_arg2026z00_2822);
					}
					{	/* Abound/walk.scm 253 */
						BgL_objectz00_bglt BgL_tmpz00_3761;

						BgL_tmpz00_3761 = ((BgL_objectz00_bglt) BgL_new1153z00_2821);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3761, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1153z00_2821);
					BgL_new1142z00_2820 = BgL_new1153z00_2821;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1142z00_2820)))->BgL_locz00) =
					((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_nodez00_2669)))->BgL_locz00)), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1142z00_2820)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_nodez00_2669)))->BgL_typez00)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1142z00_2820)))->BgL_sidezd2effectzd2) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt)
											BgL_nodez00_2669))))->BgL_sidezd2effectzd2)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1142z00_2820)))->BgL_keyz00) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt)
											BgL_nodez00_2669))))->BgL_keyz00)), BUNSPEC);
				{
					obj_t BgL_auxz00_3783;

					{	/* Abound/walk.scm 253 */
						obj_t BgL_list2022z00_2824;

						{	/* Abound/walk.scm 253 */
							obj_t BgL_arg2023z00_2825;

							BgL_arg2023z00_2825 = MAKE_YOUNG_PAIR(BgL_iz00_2671, BNIL);
							BgL_list2022z00_2824 =
								MAKE_YOUNG_PAIR(BgL_vz00_2670, BgL_arg2023z00_2825);
						}
						BgL_auxz00_3783 = BgL_list2022z00_2824;
					}
					((((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt) BgL_new1142z00_2820)))->
							BgL_exprza2za2) = ((obj_t) BgL_auxz00_3783), BUNSPEC);
				}
				((((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_new1142z00_2820)))->BgL_effectz00) =
					((obj_t) (((BgL_externz00_bglt)
								COBJECT(((BgL_externz00_bglt) ((BgL_nodez00_bglt)
											BgL_nodez00_2669))))->BgL_effectz00)), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1142z00_2820)))->BgL_czd2formatzd2) =
					((obj_t) (((BgL_privatez00_bglt)
								COBJECT(((BgL_privatez00_bglt) ((BgL_nodez00_bglt)
											BgL_nodez00_2669))))->BgL_czd2formatzd2)), BUNSPEC);
				((((BgL_vrefz00_bglt) COBJECT(BgL_new1142z00_2820))->BgL_ftypez00) =
					((BgL_typez00_bglt) (((BgL_vrefz00_bglt)
								COBJECT(((BgL_vrefz00_bglt) ((BgL_nodez00_bglt)
											BgL_nodez00_2669))))->BgL_ftypez00)), BUNSPEC);
				((((BgL_vrefz00_bglt) COBJECT(BgL_new1142z00_2820))->BgL_otypez00) =
					((BgL_typez00_bglt) (((BgL_vrefz00_bglt)
								COBJECT(((BgL_vrefz00_bglt) ((BgL_nodez00_bglt)
											BgL_nodez00_2669))))->BgL_otypez00)), BUNSPEC);
				((((BgL_vrefz00_bglt) COBJECT(BgL_new1142z00_2820))->BgL_vtypez00) =
					((BgL_typez00_bglt) (((BgL_vrefz00_bglt)
								COBJECT(((BgL_vrefz00_bglt) ((BgL_nodez00_bglt)
											BgL_nodez00_2669))))->BgL_vtypez00)), BUNSPEC);
				((((BgL_vrefz00_bglt) COBJECT(BgL_new1142z00_2820))->BgL_unsafez00) =
					((bool_t) (((BgL_vrefz00_bglt)
								COBJECT(((BgL_vrefz00_bglt) ((BgL_nodez00_bglt)
											BgL_nodez00_2669))))->BgL_unsafez00)), BUNSPEC);
				return BgL_new1142z00_2820;
			}
		}

	}



/* &abound-node-extern1369 */
	BgL_nodez00_bglt BGl_z62aboundzd2nodezd2extern1369z62zzabound_walkz00(obj_t
		BgL_envz00_2672, obj_t BgL_nodez00_2673)
	{
		{	/* Abound/walk.scm 241 */
			BGl_aboundzd2nodeza2z12z62zzabound_walkz00(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_2673)))->BgL_exprza2za2));
			return ((BgL_nodez00_bglt) ((BgL_externz00_bglt) BgL_nodez00_2673));
		}

	}



/* &abound-node-funcall1367 */
	BgL_nodez00_bglt BGl_z62aboundzd2nodezd2funcall1367z62zzabound_walkz00(obj_t
		BgL_envz00_2674, obj_t BgL_nodez00_2675)
	{
		{	/* Abound/walk.scm 232 */
			{
				BgL_nodez00_bglt BgL_auxz00_3819;

				{	/* Abound/walk.scm 234 */
					BgL_nodez00_bglt BgL_arg2004z00_2828;

					BgL_arg2004z00_2828 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2675)))->BgL_funz00);
					BgL_auxz00_3819 =
						BGl_aboundzd2nodezd2zzabound_walkz00(BgL_arg2004z00_2828);
				}
				((((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2675)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3819), BUNSPEC);
			}
			BGl_aboundzd2nodeza2z12z62zzabound_walkz00(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_2675)))->BgL_argsz00));
			return ((BgL_nodez00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_2675));
		}

	}



/* &abound-node-app-ly1365 */
	BgL_nodez00_bglt BGl_z62aboundzd2nodezd2appzd2ly1365zb0zzabound_walkz00(obj_t
		BgL_envz00_2676, obj_t BgL_nodez00_2677)
	{
		{	/* Abound/walk.scm 223 */
			{
				BgL_nodez00_bglt BgL_auxz00_3830;

				{	/* Abound/walk.scm 225 */
					BgL_nodez00_bglt BgL_arg2002z00_2830;

					BgL_arg2002z00_2830 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2677)))->BgL_funz00);
					BgL_auxz00_3830 =
						BGl_aboundzd2nodezd2zzabound_walkz00(BgL_arg2002z00_2830);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2677)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3830), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3836;

				{	/* Abound/walk.scm 226 */
					BgL_nodez00_bglt BgL_arg2003z00_2831;

					BgL_arg2003z00_2831 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2677)))->BgL_argz00);
					BgL_auxz00_3836 =
						BGl_aboundzd2nodezd2zzabound_walkz00(BgL_arg2003z00_2831);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2677)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3836), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2677));
		}

	}



/* &abound-node-app1363 */
	BgL_nodez00_bglt BGl_z62aboundzd2nodezd2app1363z62zzabound_walkz00(obj_t
		BgL_envz00_2678, obj_t BgL_nodez00_2679)
	{
		{	/* Abound/walk.scm 143 */
			{
				BgL_appz00_bglt BgL_nodez00_2834;

				BGl_aboundzd2nodeza2z12z62zzabound_walkz00(
					(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2679)))->BgL_argsz00));
				{	/* Abound/walk.scm 172 */
					BgL_variablez00_bglt BgL_vz00_2905;

					BgL_vz00_2905 =
						(((BgL_varz00_bglt) COBJECT(
								(((BgL_appz00_bglt) COBJECT(
											((BgL_appz00_bglt) BgL_nodez00_2679)))->BgL_funz00)))->
						BgL_variablez00);
					{	/* Abound/walk.scm 174 */
						bool_t BgL_test2313z00_3850;

						if (
							(((obj_t) BgL_vz00_2905) ==
								BGl_za2stringzd2refza2zd2zzabound_walkz00))
							{	/* Abound/walk.scm 174 */
								BgL_test2313z00_3850 = ((bool_t) 1);
							}
						else
							{	/* Abound/walk.scm 174 */
								BgL_test2313z00_3850 =
									(
									((obj_t) BgL_vz00_2905) ==
									BGl_za2stringzd2setz12za2zc0zzabound_walkz00);
							}
						if (BgL_test2313z00_3850)
							{	/* Abound/walk.scm 175 */
								BgL_nodez00_bglt BgL_nodez00_2906;

								BgL_nodez00_2834 = ((BgL_appz00_bglt) BgL_nodez00_2679);
								{	/* Abound/walk.scm 147 */
									obj_t BgL_sz00_2835;

									BgL_sz00_2835 =
										BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
										(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
													42))));
									{	/* Abound/walk.scm 147 */
										obj_t BgL_iz00_2836;

										BgL_iz00_2836 =
											BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
											(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
														29))));
										{	/* Abound/walk.scm 148 */
											obj_t BgL_lz00_2837;

											BgL_lz00_2837 =
												BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
												(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
															(long) 30))));
											{	/* Abound/walk.scm 149 */
												obj_t BgL_lnamez00_2838;

												{	/* Abound/walk.scm 150 */
													bool_t BgL_test2315z00_3865;

													{	/* Abound/walk.scm 150 */
														obj_t BgL_arg1998z00_2839;

														BgL_arg1998z00_2839 =
															(((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_nodez00_2834)))->
															BgL_locz00);
														if (STRUCTP(BgL_arg1998z00_2839))
															{	/* Abound/walk.scm 150 */
																BgL_test2315z00_3865 =
																	(STRUCT_KEY(BgL_arg1998z00_2839) ==
																	CNST_TABLE_REF(((long) 31)));
															}
														else
															{	/* Abound/walk.scm 150 */
																BgL_test2315z00_3865 = ((bool_t) 0);
															}
													}
													if (BgL_test2315z00_3865)
														{	/* Abound/walk.scm 150 */
															obj_t BgL_arg1997z00_2840;

															BgL_arg1997z00_2840 =
																(((BgL_nodez00_bglt) COBJECT(
																		((BgL_nodez00_bglt) BgL_nodez00_2834)))->
																BgL_locz00);
															BgL_lnamez00_2838 =
																BGl_locationzd2fullzd2fnamez00zztools_locationz00
																(BgL_arg1997z00_2840);
														}
													else
														{	/* Abound/walk.scm 150 */
															BgL_lnamez00_2838 = BFALSE;
														}
												}
												{	/* Abound/walk.scm 150 */
													obj_t BgL_lposz00_2841;

													{	/* Abound/walk.scm 151 */
														bool_t BgL_test2317z00_3876;

														{	/* Abound/walk.scm 151 */
															obj_t BgL_arg1993z00_2842;

															BgL_arg1993z00_2842 =
																(((BgL_nodez00_bglt) COBJECT(
																		((BgL_nodez00_bglt) BgL_nodez00_2834)))->
																BgL_locz00);
															if (STRUCTP(BgL_arg1993z00_2842))
																{	/* Abound/walk.scm 151 */
																	BgL_test2317z00_3876 =
																		(STRUCT_KEY(BgL_arg1993z00_2842) ==
																		CNST_TABLE_REF(((long) 31)));
																}
															else
																{	/* Abound/walk.scm 151 */
																	BgL_test2317z00_3876 = ((bool_t) 0);
																}
														}
														if (BgL_test2317z00_3876)
															{	/* Abound/walk.scm 151 */
																obj_t BgL_sz00_2843;

																BgL_sz00_2843 =
																	(((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt) BgL_nodez00_2834)))->
																	BgL_locz00);
																BgL_lposz00_2841 =
																	STRUCT_REF(BgL_sz00_2843, (int) (((long) 1)));
															}
														else
															{	/* Abound/walk.scm 151 */
																BgL_lposz00_2841 = BFALSE;
															}
													}
													{	/* Abound/walk.scm 151 */
														BgL_variablez00_bglt BgL_vz00_2844;

														BgL_vz00_2844 =
															(((BgL_varz00_bglt) COBJECT(
																	(((BgL_appz00_bglt)
																			COBJECT(BgL_nodez00_2834))->
																		BgL_funz00)))->BgL_variablez00);
														{	/* Abound/walk.scm 152 */
															obj_t BgL_namez00_2845;

															if (
																(((obj_t) BgL_vz00_2844) ==
																	BGl_za2stringzd2refza2zd2zzabound_walkz00))
																{	/* Abound/walk.scm 153 */
																	BgL_namez00_2845 =
																		BGl_string2230z00zzabound_walkz00;
																}
															else
																{	/* Abound/walk.scm 153 */
																	BgL_namez00_2845 =
																		BGl_string2231z00zzabound_walkz00;
																}
															{	/* Abound/walk.scm 153 */
																obj_t BgL_typesz00_2846;

																BgL_typesz00_2846 =
																	(((BgL_cfunz00_bglt) COBJECT(
																			((BgL_cfunz00_bglt)
																				(((BgL_variablez00_bglt)
																						COBJECT(BgL_vz00_2844))->
																					BgL_valuez00))))->BgL_argszd2typezd2);
																{	/* Abound/walk.scm 154 */

																	{	/* Abound/walk.scm 156 */
																		obj_t BgL_arg1928z00_2847;
																		obj_t BgL_arg1929z00_2848;

																		{	/* Abound/walk.scm 156 */
																			obj_t BgL_arg1930z00_2849;

																			{	/* Abound/walk.scm 156 */
																				obj_t BgL_arg1931z00_2850;
																				obj_t BgL_arg1932z00_2851;

																				{	/* Abound/walk.scm 156 */
																					obj_t BgL_arg1933z00_2852;
																					obj_t BgL_arg1934z00_2853;

																					{	/* Abound/walk.scm 156 */
																						obj_t BgL_arg1935z00_2854;
																						obj_t BgL_arg1936z00_2855;

																						{	/* Abound/walk.scm 156 */
																							obj_t BgL_arg1937z00_2856;

																							BgL_arg1937z00_2856 =
																								(((BgL_typez00_bglt) COBJECT(
																										((BgL_typez00_bglt)
																											CAR(
																												((obj_t)
																													BgL_typesz00_2846)))))->
																								BgL_idz00);
																							BgL_arg1935z00_2854 =
																								BGl_makezd2typedzd2identz00zzast_identz00
																								(BgL_sz00_2835,
																								BgL_arg1937z00_2856);
																						}
																						BgL_arg1936z00_2855 =
																							MAKE_YOUNG_PAIR(CAR(
																								(((BgL_appz00_bglt)
																										COBJECT(BgL_nodez00_2834))->
																									BgL_argsz00)), BNIL);
																						BgL_arg1933z00_2852 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1935z00_2854,
																							BgL_arg1936z00_2855);
																					}
																					{	/* Abound/walk.scm 157 */
																						obj_t BgL_arg1941z00_2857;

																						{	/* Abound/walk.scm 157 */
																							obj_t BgL_arg1942z00_2858;
																							obj_t BgL_arg1943z00_2859;

																							{	/* Abound/walk.scm 157 */
																								obj_t BgL_arg1944z00_2860;

																								{
																									BgL_typez00_bglt
																										BgL_auxz00_3905;
																									{	/* Abound/walk.scm 157 */
																										obj_t BgL_pairz00_2861;

																										BgL_pairz00_2861 =
																											CDR(
																											((obj_t)
																												BgL_typesz00_2846));
																										BgL_auxz00_3905 =
																											((BgL_typez00_bglt)
																											CAR(BgL_pairz00_2861));
																									}
																									BgL_arg1944z00_2860 =
																										(((BgL_typez00_bglt)
																											COBJECT
																											(BgL_auxz00_3905))->
																										BgL_idz00);
																								}
																								BgL_arg1942z00_2858 =
																									BGl_makezd2typedzd2identz00zzast_identz00
																									(BgL_iz00_2836,
																									BgL_arg1944z00_2860);
																							}
																							{	/* Abound/walk.scm 157 */
																								obj_t BgL_arg1946z00_2862;

																								{	/* Abound/walk.scm 157 */
																									obj_t BgL_pairz00_2863;

																									BgL_pairz00_2863 =
																										(((BgL_appz00_bglt)
																											COBJECT
																											(BgL_nodez00_2834))->
																										BgL_argsz00);
																									BgL_arg1946z00_2862 =
																										CAR(CDR(BgL_pairz00_2863));
																								}
																								BgL_arg1943z00_2859 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1946z00_2862, BNIL);
																							}
																							BgL_arg1941z00_2857 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1942z00_2858,
																								BgL_arg1943z00_2859);
																						}
																						BgL_arg1934z00_2853 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1941z00_2857, BNIL);
																					}
																					BgL_arg1931z00_2850 =
																						MAKE_YOUNG_PAIR(BgL_arg1933z00_2852,
																						BgL_arg1934z00_2853);
																				}
																				{	/* Abound/walk.scm 158 */
																					obj_t BgL_arg1948z00_2864;

																					{	/* Abound/walk.scm 158 */
																						obj_t BgL_arg1949z00_2865;

																						{	/* Abound/walk.scm 158 */
																							obj_t BgL_arg1951z00_2866;
																							obj_t BgL_arg1952z00_2867;

																							{	/* Abound/walk.scm 158 */
																								obj_t BgL_arg1953z00_2868;

																								{	/* Abound/walk.scm 158 */
																									obj_t BgL_arg1954z00_2869;
																									obj_t BgL_arg1955z00_2870;

																									{	/* Abound/walk.scm 158 */
																										obj_t BgL_arg1956z00_2871;

																										{
																											BgL_typez00_bglt
																												BgL_auxz00_3919;
																											{	/* Abound/walk.scm 158 */
																												obj_t BgL_pairz00_2872;

																												BgL_pairz00_2872 =
																													CDR(
																													((obj_t)
																														BgL_typesz00_2846));
																												BgL_auxz00_3919 =
																													((BgL_typez00_bglt)
																													CAR
																													(BgL_pairz00_2872));
																											}
																											BgL_arg1956z00_2871 =
																												(((BgL_typez00_bglt)
																													COBJECT
																													(BgL_auxz00_3919))->
																												BgL_idz00);
																										}
																										BgL_arg1954z00_2869 =
																											BGl_makezd2typedzd2identz00zzast_identz00
																											(BgL_lz00_2837,
																											BgL_arg1956z00_2871);
																									}
																									{	/* Abound/walk.scm 159 */
																										obj_t BgL_arg1958z00_2873;

																										{	/* Abound/walk.scm 159 */
																											obj_t BgL_arg1959z00_2874;

																											BgL_arg1959z00_2874 =
																												MAKE_YOUNG_PAIR
																												(BgL_sz00_2835, BNIL);
																											BgL_arg1958z00_2873 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														43)),
																												BgL_arg1959z00_2874);
																										}
																										BgL_arg1955z00_2870 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1958z00_2873,
																											BNIL);
																									}
																									BgL_arg1953z00_2868 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1954z00_2869,
																										BgL_arg1955z00_2870);
																								}
																								BgL_arg1951z00_2866 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1953z00_2868, BNIL);
																							}
																							{	/* Abound/walk.scm 160 */
																								obj_t BgL_arg1960z00_2875;

																								{	/* Abound/walk.scm 160 */
																									obj_t BgL_arg1961z00_2876;

																									{	/* Abound/walk.scm 160 */
																										obj_t BgL_arg1962z00_2877;
																										obj_t BgL_arg1963z00_2878;

																										{	/* Abound/walk.scm 160 */
																											obj_t BgL_arg1964z00_2879;

																											{	/* Abound/walk.scm 160 */
																												obj_t
																													BgL_arg1965z00_2880;
																												BgL_arg1965z00_2880 =
																													MAKE_YOUNG_PAIR
																													(BgL_lz00_2837, BNIL);
																												BgL_arg1964z00_2879 =
																													MAKE_YOUNG_PAIR
																													(BgL_iz00_2836,
																													BgL_arg1965z00_2880);
																											}
																											BgL_arg1962z00_2877 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														44)),
																												BgL_arg1964z00_2879);
																										}
																										{	/* Abound/walk.scm 161 */
																											BgL_appz00_bglt
																												BgL_arg1966z00_2881;
																											obj_t BgL_arg1967z00_2882;

																											{	/* Abound/walk.scm 161 */
																												BgL_appz00_bglt
																													BgL_new1111z00_2883;
																												{	/* Abound/walk.scm 162 */
																													BgL_appz00_bglt
																														BgL_new1118z00_2884;
																													BgL_new1118z00_2884 =
																														((BgL_appz00_bglt)
																														BOBJECT(GC_MALLOC
																															(sizeof(struct
																																	BgL_appz00_bgl))));
																													{	/* Abound/walk.scm 162 */
																														long
																															BgL_arg1971z00_2885;
																														{	/* Abound/walk.scm 162 */
																															long
																																BgL_res2183z00_2886;
																															BgL_res2183z00_2886
																																=
																																BGL_CLASS_INDEX
																																(BGl_appz00zzast_nodez00);
																															BgL_arg1971z00_2885
																																=
																																BgL_res2183z00_2886;
																														}
																														BGL_OBJECT_CLASS_NUM_SET
																															(((BgL_objectz00_bglt) BgL_new1118z00_2884), BgL_arg1971z00_2885);
																													}
																													{	/* Abound/walk.scm 162 */
																														BgL_objectz00_bglt
																															BgL_tmpz00_3940;
																														BgL_tmpz00_3940 =
																															(
																															(BgL_objectz00_bglt)
																															BgL_new1118z00_2884);
																														BGL_OBJECT_WIDENING_SET
																															(BgL_tmpz00_3940,
																															BFALSE);
																													}
																													((BgL_objectz00_bglt)
																														BgL_new1118z00_2884);
																													BgL_new1111z00_2883 =
																														BgL_new1118z00_2884;
																												}
																												((((BgL_nodez00_bglt)
																															COBJECT((
																																	(BgL_nodez00_bglt)
																																	BgL_new1111z00_2883)))->
																														BgL_locz00) =
																													((obj_t) ((
																																(BgL_nodez00_bglt)
																																COBJECT((
																																		(BgL_nodez00_bglt)
																																		BgL_nodez00_2834)))->
																															BgL_locz00)),
																													BUNSPEC);
																												((((BgL_nodez00_bglt)
																															COBJECT((
																																	(BgL_nodez00_bglt)
																																	BgL_new1111z00_2883)))->
																														BgL_typez00) =
																													((BgL_typez00_bglt) ((
																																(BgL_nodez00_bglt)
																																COBJECT((
																																		(BgL_nodez00_bglt)
																																		BgL_nodez00_2834)))->
																															BgL_typez00)),
																													BUNSPEC);
																												((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1111z00_2883)))->BgL_sidezd2effectzd2) = ((obj_t) (((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) BgL_nodez00_2834))))->BgL_sidezd2effectzd2)), BUNSPEC);
																												((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1111z00_2883)))->BgL_keyz00) = ((obj_t) (((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) BgL_nodez00_2834))))->BgL_keyz00)), BUNSPEC);
																												((((BgL_appz00_bglt)
																															COBJECT
																															(BgL_new1111z00_2883))->
																														BgL_funz00) =
																													((BgL_varz00_bglt) ((
																																(BgL_appz00_bglt)
																																COBJECT((
																																		(BgL_appz00_bglt)
																																		((BgL_nodez00_bglt) BgL_nodez00_2834))))->BgL_funz00)), BUNSPEC);
																												{
																													obj_t BgL_auxz00_3966;

																													{	/* Abound/walk.scm 162 */
																														obj_t
																															BgL_arg1968z00_2887;
																														{	/* Abound/walk.scm 162 */
																															obj_t
																																BgL_arg1969z00_2888;
																															{	/* Abound/walk.scm 162 */
																																obj_t
																																	BgL_pairz00_2889;
																																BgL_pairz00_2889
																																	=
																																	(((BgL_appz00_bglt) COBJECT(BgL_nodez00_2834))->BgL_argsz00);
																																{	/* Abound/walk.scm 162 */
																																	obj_t
																																		BgL_pairz00_2890;
																																	BgL_pairz00_2890
																																		=
																																		CDR
																																		(BgL_pairz00_2889);
																																	BgL_arg1969z00_2888
																																		=
																																		CDR
																																		(BgL_pairz00_2890);
																															}}
																															BgL_arg1968z00_2887
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_iz00_2836,
																																BgL_arg1969z00_2888);
																														}
																														BgL_auxz00_3966 =
																															MAKE_YOUNG_PAIR
																															(BgL_sz00_2835,
																															BgL_arg1968z00_2887);
																													}
																													((((BgL_appz00_bglt)
																																COBJECT
																																(BgL_new1111z00_2883))->
																															BgL_argsz00) =
																														((obj_t)
																															BgL_auxz00_3966),
																														BUNSPEC);
																												}
																												((((BgL_appz00_bglt)
																															COBJECT
																															(BgL_new1111z00_2883))->
																														BgL_stackablez00) =
																													((obj_t) ((
																																(BgL_appz00_bglt)
																																COBJECT((
																																		(BgL_appz00_bglt)
																																		((BgL_nodez00_bglt) BgL_nodez00_2834))))->BgL_stackablez00)), BUNSPEC);
																												BgL_arg1966z00_2881 =
																													BgL_new1111z00_2883;
																											}
																											{	/* Abound/walk.scm 164 */
																												obj_t
																													BgL_arg1972z00_2891;
																												{	/* Abound/walk.scm 164 */
																													obj_t
																														BgL_arg1973z00_2892;
																													{	/* Abound/walk.scm 164 */
																														obj_t
																															BgL_arg1974z00_2893;
																														obj_t
																															BgL_arg1975z00_2894;
																														{	/* Abound/walk.scm 164 */
																															obj_t
																																BgL_arg1976z00_2895;
																															obj_t
																																BgL_arg1977z00_2896;
																															{	/* Abound/walk.scm 164 */
																																obj_t
																																	BgL_arg1979z00_2897;
																																{	/* Abound/walk.scm 164 */
																																	obj_t
																																		BgL_arg1980z00_2898;
																																	BgL_arg1980z00_2898
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				36)),
																																		BNIL);
																																	BgL_arg1979z00_2897
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				37)),
																																		BgL_arg1980z00_2898);
																																}
																																BgL_arg1976z00_2895
																																	=
																																	MAKE_YOUNG_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 38)),
																																	BgL_arg1979z00_2897);
																															}
																															{	/* Abound/walk.scm 164 */
																																obj_t
																																	BgL_arg1981z00_2899;
																																{	/* Abound/walk.scm 164 */
																																	obj_t
																																		BgL_arg1982z00_2900;
																																	{	/* Abound/walk.scm 164 */
																																		obj_t
																																			BgL_arg1983z00_2901;
																																		{	/* Abound/walk.scm 164 */
																																			obj_t
																																				BgL_arg1984z00_2902;
																																			{	/* Abound/walk.scm 164 */
																																				obj_t
																																					BgL_arg1985z00_2903;
																																				BgL_arg1985z00_2903
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_iz00_2836,
																																					BNIL);
																																				BgL_arg1984z00_2902
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_lz00_2837,
																																					BgL_arg1985z00_2903);
																																			}
																																			BgL_arg1983z00_2901
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_sz00_2835,
																																				BgL_arg1984z00_2902);
																																		}
																																		BgL_arg1982z00_2900
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_namez00_2845,
																																			BgL_arg1983z00_2901);
																																	}
																																	BgL_arg1981z00_2899
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_lposz00_2841,
																																		BgL_arg1982z00_2900);
																																}
																																BgL_arg1977z00_2896
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_lnamez00_2838,
																																	BgL_arg1981z00_2899);
																															}
																															BgL_arg1974z00_2893
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1976z00_2895,
																																BgL_arg1977z00_2896);
																														}
																														{	/* Abound/walk.scm 163 */
																															obj_t
																																BgL_arg1986z00_2904;
																															BgL_arg1986z00_2904
																																=
																																MAKE_YOUNG_PAIR
																																(BFALSE, BNIL);
																															BgL_arg1975z00_2894
																																=
																																MAKE_YOUNG_PAIR
																																(BFALSE,
																																BgL_arg1986z00_2904);
																														}
																														BgL_arg1973z00_2892
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1974z00_2893,
																															BgL_arg1975z00_2894);
																													}
																													BgL_arg1972z00_2891 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 39)),
																														BgL_arg1973z00_2892);
																												}
																												BgL_arg1967z00_2882 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1972z00_2891,
																													BNIL);
																											}
																											BgL_arg1963z00_2878 =
																												MAKE_YOUNG_PAIR(
																												((obj_t)
																													BgL_arg1966z00_2881),
																												BgL_arg1967z00_2882);
																										}
																										BgL_arg1961z00_2876 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1962z00_2877,
																											BgL_arg1963z00_2878);
																									}
																									BgL_arg1960z00_2875 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												40)),
																										BgL_arg1961z00_2876);
																								}
																								BgL_arg1952z00_2867 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1960z00_2875, BNIL);
																							}
																							BgL_arg1949z00_2865 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1951z00_2866,
																								BgL_arg1952z00_2867);
																						}
																						BgL_arg1948z00_2864 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 41)),
																							BgL_arg1949z00_2865);
																					}
																					BgL_arg1932z00_2851 =
																						MAKE_YOUNG_PAIR(BgL_arg1948z00_2864,
																						BNIL);
																				}
																				BgL_arg1930z00_2849 =
																					MAKE_YOUNG_PAIR(BgL_arg1931z00_2850,
																					BgL_arg1932z00_2851);
																			}
																			BgL_arg1928z00_2847 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						41)), BgL_arg1930z00_2849);
																		}
																		BgL_arg1929z00_2848 =
																			(((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						BgL_nodez00_2834)))->BgL_locz00);
																		BgL_nodez00_2906 =
																			BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
																			(BgL_arg1928z00_2847,
																			BgL_arg1929z00_2848);
								}}}}}}}}}}
								BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_nodez00_2906);
								return BgL_nodez00_2906;
							}
						else
							{	/* Abound/walk.scm 178 */
								bool_t BgL_test2320z00_4014;

								if (
									(((obj_t) BgL_vz00_2905) ==
										BGl_za2s8vectorzd2refza2zd2zzabound_walkz00))
									{	/* Abound/walk.scm 178 */
										BgL_test2320z00_4014 = ((bool_t) 1);
									}
								else
									{	/* Abound/walk.scm 178 */
										if (
											(((obj_t) BgL_vz00_2905) ==
												BGl_za2s16vectorzd2refza2zd2zzabound_walkz00))
											{	/* Abound/walk.scm 179 */
												BgL_test2320z00_4014 = ((bool_t) 1);
											}
										else
											{	/* Abound/walk.scm 179 */
												if (
													(((obj_t) BgL_vz00_2905) ==
														BGl_za2s32vectorzd2refza2zd2zzabound_walkz00))
													{	/* Abound/walk.scm 180 */
														BgL_test2320z00_4014 = ((bool_t) 1);
													}
												else
													{	/* Abound/walk.scm 180 */
														if (
															(((obj_t) BgL_vz00_2905) ==
																BGl_za2s64vectorzd2refza2zd2zzabound_walkz00))
															{	/* Abound/walk.scm 181 */
																BgL_test2320z00_4014 = ((bool_t) 1);
															}
														else
															{	/* Abound/walk.scm 181 */
																if (
																	(((obj_t) BgL_vz00_2905) ==
																		BGl_za2u8vectorzd2refza2zd2zzabound_walkz00))
																	{	/* Abound/walk.scm 182 */
																		BgL_test2320z00_4014 = ((bool_t) 1);
																	}
																else
																	{	/* Abound/walk.scm 182 */
																		if (
																			(((obj_t) BgL_vz00_2905) ==
																				BGl_za2u16vectorzd2refza2zd2zzabound_walkz00))
																			{	/* Abound/walk.scm 183 */
																				BgL_test2320z00_4014 = ((bool_t) 1);
																			}
																		else
																			{	/* Abound/walk.scm 183 */
																				if (
																					(((obj_t) BgL_vz00_2905) ==
																						BGl_za2u32vectorzd2refza2zd2zzabound_walkz00))
																					{	/* Abound/walk.scm 184 */
																						BgL_test2320z00_4014 = ((bool_t) 1);
																					}
																				else
																					{	/* Abound/walk.scm 184 */
																						if (
																							(((obj_t) BgL_vz00_2905) ==
																								BGl_za2u64vectorzd2refza2zd2zzabound_walkz00))
																							{	/* Abound/walk.scm 185 */
																								BgL_test2320z00_4014 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Abound/walk.scm 185 */
																								if (
																									(((obj_t) BgL_vz00_2905) ==
																										BGl_za2f32vectorzd2refza2zd2zzabound_walkz00))
																									{	/* Abound/walk.scm 186 */
																										BgL_test2320z00_4014 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Abound/walk.scm 186 */
																										BgL_test2320z00_4014 =
																											(
																											((obj_t) BgL_vz00_2905) ==
																											BGl_za2f64vectorzd2refza2zd2zzabound_walkz00);
																									}
																							}
																					}
																			}
																	}
															}
													}
											}
									}
								if (BgL_test2320z00_4014)
									{	/* Abound/walk.scm 189 */
										BgL_nodez00_bglt BgL_arg1871z00_2907;

										{	/* Abound/walk.scm 190 */
											obj_t BgL_arg1872z00_2908;
											obj_t BgL_arg1873z00_2909;
											obj_t BgL_arg1874z00_2910;
											BgL_typez00_bglt BgL_arg1876z00_2911;
											obj_t BgL_arg1877z00_2912;
											obj_t BgL_arg1878z00_2913;

											BgL_arg1872z00_2908 =
												CAR(
												(((BgL_appz00_bglt) COBJECT(
															((BgL_appz00_bglt) BgL_nodez00_2679)))->
													BgL_argsz00));
											{	/* Abound/walk.scm 190 */
												obj_t BgL_pairz00_2914;

												BgL_pairz00_2914 =
													(((BgL_appz00_bglt) COBJECT(
															((BgL_appz00_bglt) BgL_nodez00_2679)))->
													BgL_argsz00);
												BgL_arg1873z00_2909 = CAR(CDR(BgL_pairz00_2914));
											}
											BgL_arg1874z00_2910 =
												(((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt)
															((BgL_appz00_bglt) BgL_nodez00_2679))))->
												BgL_locz00);
											BgL_arg1876z00_2911 =
												(((BgL_variablez00_bglt)
													COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
																BgL_vz00_2905))))->BgL_typez00);
											{	/* Abound/walk.scm 192 */
												obj_t BgL_pairz00_2915;

												BgL_pairz00_2915 =
													(((BgL_cfunz00_bglt) COBJECT(
															((BgL_cfunz00_bglt)
																(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_globalz00_bglt)
																					BgL_vz00_2905))))->BgL_valuez00))))->
													BgL_argszd2typezd2);
												BgL_arg1877z00_2912 = CAR(CDR(BgL_pairz00_2915));
											}
											{	/* Abound/walk.scm 193 */
												obj_t BgL_pairz00_2916;

												BgL_pairz00_2916 =
													(((BgL_cfunz00_bglt) COBJECT(
															((BgL_cfunz00_bglt)
																(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_globalz00_bglt)
																					BgL_vz00_2905))))->BgL_valuez00))))->
													BgL_argszd2typezd2);
												BgL_arg1878z00_2913 = CAR(BgL_pairz00_2916);
											}
											BgL_arg1871z00_2907 =
												BGl_arrayzd2refzd2zzabound_walkz00(
												((BgL_nodezf2effectzf2_bglt)
													((BgL_appz00_bglt) BgL_nodez00_2679)),
												BgL_arg1872z00_2908, BgL_arg1873z00_2909,
												BgL_arg1874z00_2910, BgL_arg1876z00_2911,
												BgL_arg1877z00_2912, BgL_arg1878z00_2913,
												BGl_proc2232z00zzabound_walkz00);
										}
										return
											BGl_lvtypezd2nodezd2zzast_lvtypez00(BgL_arg1871z00_2907);
									}
								else
									{	/* Abound/walk.scm 197 */
										bool_t BgL_test2330z00_4074;

										if (
											(((obj_t) BgL_vz00_2905) ==
												BGl_za2s8vectorzd2setz12za2zc0zzabound_walkz00))
											{	/* Abound/walk.scm 197 */
												BgL_test2330z00_4074 = ((bool_t) 1);
											}
										else
											{	/* Abound/walk.scm 197 */
												if (
													(((obj_t) BgL_vz00_2905) ==
														BGl_za2s16vectorzd2setz12za2zc0zzabound_walkz00))
													{	/* Abound/walk.scm 198 */
														BgL_test2330z00_4074 = ((bool_t) 1);
													}
												else
													{	/* Abound/walk.scm 198 */
														if (
															(((obj_t) BgL_vz00_2905) ==
																BGl_za2s32vectorzd2setz12za2zc0zzabound_walkz00))
															{	/* Abound/walk.scm 199 */
																BgL_test2330z00_4074 = ((bool_t) 1);
															}
														else
															{	/* Abound/walk.scm 199 */
																if (
																	(((obj_t) BgL_vz00_2905) ==
																		BGl_za2s64vectorzd2setz12za2zc0zzabound_walkz00))
																	{	/* Abound/walk.scm 200 */
																		BgL_test2330z00_4074 = ((bool_t) 1);
																	}
																else
																	{	/* Abound/walk.scm 200 */
																		if (
																			(((obj_t) BgL_vz00_2905) ==
																				BGl_za2u8vectorzd2setz12za2zc0zzabound_walkz00))
																			{	/* Abound/walk.scm 201 */
																				BgL_test2330z00_4074 = ((bool_t) 1);
																			}
																		else
																			{	/* Abound/walk.scm 201 */
																				if (
																					(((obj_t) BgL_vz00_2905) ==
																						BGl_za2u16vectorzd2setz12za2zc0zzabound_walkz00))
																					{	/* Abound/walk.scm 202 */
																						BgL_test2330z00_4074 = ((bool_t) 1);
																					}
																				else
																					{	/* Abound/walk.scm 202 */
																						if (
																							(((obj_t) BgL_vz00_2905) ==
																								BGl_za2u32vectorzd2setz12za2zc0zzabound_walkz00))
																							{	/* Abound/walk.scm 203 */
																								BgL_test2330z00_4074 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Abound/walk.scm 203 */
																								if (
																									(((obj_t) BgL_vz00_2905) ==
																										BGl_za2u64vectorzd2setz12za2zc0zzabound_walkz00))
																									{	/* Abound/walk.scm 204 */
																										BgL_test2330z00_4074 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Abound/walk.scm 204 */
																										if (
																											(((obj_t) BgL_vz00_2905)
																												==
																												BGl_za2f32vectorzd2setz12za2zc0zzabound_walkz00))
																											{	/* Abound/walk.scm 205 */
																												BgL_test2330z00_4074 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Abound/walk.scm 205 */
																												BgL_test2330z00_4074 =
																													(
																													((obj_t)
																														BgL_vz00_2905) ==
																													BGl_za2f64vectorzd2setz12za2zc0zzabound_walkz00);
																											}
																									}
																							}
																					}
																			}
																	}
															}
													}
											}
										if (BgL_test2330z00_4074)
											{	/* Abound/walk.scm 208 */
												BgL_nodez00_bglt BgL_arg1902z00_2918;

												{	/* Abound/walk.scm 209 */
													obj_t BgL_arg1903z00_2919;
													obj_t BgL_arg1904z00_2920;
													obj_t BgL_arg1905z00_2921;
													obj_t BgL_arg1906z00_2922;
													obj_t BgL_arg1907z00_2923;
													obj_t BgL_arg1908z00_2924;

													BgL_arg1903z00_2919 =
														CAR(
														(((BgL_appz00_bglt) COBJECT(
																	((BgL_appz00_bglt) BgL_nodez00_2679)))->
															BgL_argsz00));
													{	/* Abound/walk.scm 209 */
														obj_t BgL_pairz00_2925;

														BgL_pairz00_2925 =
															(((BgL_appz00_bglt) COBJECT(
																	((BgL_appz00_bglt) BgL_nodez00_2679)))->
															BgL_argsz00);
														BgL_arg1904z00_2920 = CAR(CDR(BgL_pairz00_2925));
													}
													BgL_arg1905z00_2921 =
														(((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt)
																	((BgL_appz00_bglt) BgL_nodez00_2679))))->
														BgL_locz00);
													{	/* Abound/walk.scm 210 */
														obj_t BgL_pairz00_2926;

														BgL_pairz00_2926 =
															(((BgL_cfunz00_bglt) COBJECT(
																	((BgL_cfunz00_bglt)
																		(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						((BgL_globalz00_bglt)
																							BgL_vz00_2905))))->
																			BgL_valuez00))))->BgL_argszd2typezd2);
														BgL_arg1906z00_2922 =
															CAR(CDR(CDR(BgL_pairz00_2926)));
													}
													{	/* Abound/walk.scm 211 */
														obj_t BgL_pairz00_2927;

														BgL_pairz00_2927 =
															(((BgL_cfunz00_bglt) COBJECT(
																	((BgL_cfunz00_bglt)
																		(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						((BgL_globalz00_bglt)
																							BgL_vz00_2905))))->
																			BgL_valuez00))))->BgL_argszd2typezd2);
														BgL_arg1907z00_2923 = CAR(CDR(BgL_pairz00_2927));
													}
													{	/* Abound/walk.scm 212 */
														obj_t BgL_pairz00_2928;

														BgL_pairz00_2928 =
															(((BgL_cfunz00_bglt) COBJECT(
																	((BgL_cfunz00_bglt)
																		(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						((BgL_globalz00_bglt)
																							BgL_vz00_2905))))->
																			BgL_valuez00))))->BgL_argszd2typezd2);
														BgL_arg1908z00_2924 = CAR(BgL_pairz00_2928);
													}
													BgL_arg1902z00_2918 =
														BGl_arrayzd2setz12zc0zzabound_walkz00(
														((BgL_nodezf2effectzf2_bglt)
															((BgL_appz00_bglt) BgL_nodez00_2679)),
														BgL_arg1903z00_2919, BgL_arg1904z00_2920,
														BgL_arg1905z00_2921, BgL_arg1906z00_2922,
														BgL_arg1907z00_2923, BgL_arg1908z00_2924,
														BGl_proc2233z00zzabound_walkz00);
												}
												return
													BGl_lvtypezd2nodezd2zzast_lvtypez00
													(BgL_arg1902z00_2918);
											}
										else
											{	/* Abound/walk.scm 197 */
												return
													((BgL_nodez00_bglt)
													((BgL_appz00_bglt) BgL_nodez00_2679));
											}
									}
							}
					}
				}
			}
		}

	}



/* &<@anonymous:1887> */
	BgL_appz00_bglt BGl_z62zc3z04anonymousza31887ze3ze5zzabound_walkz00(obj_t
		BgL_envz00_2680, BgL_nodezf2effectzf2_bglt BgL_nodez00_2681,
		obj_t BgL_vz00_2682, obj_t BgL_iz00_2683)
	{
		{	/* Abound/walk.scm 194 */
			{	/* Abound/walk.scm 195 */
				BgL_appz00_bglt BgL_new1121z00_2933;

				{	/* Abound/walk.scm 195 */
					BgL_appz00_bglt BgL_new1128z00_2934;

					BgL_new1128z00_2934 =
						((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_appz00_bgl))));
					{	/* Abound/walk.scm 195 */
						long BgL_arg1891z00_2935;

						{	/* Abound/walk.scm 195 */
							long BgL_res2184z00_2936;

							BgL_res2184z00_2936 = BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
							BgL_arg1891z00_2935 = BgL_res2184z00_2936;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1128z00_2934), BgL_arg1891z00_2935);
					}
					{	/* Abound/walk.scm 195 */
						BgL_objectz00_bglt BgL_tmpz00_4145;

						BgL_tmpz00_4145 = ((BgL_objectz00_bglt) BgL_new1128z00_2934);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4145, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1128z00_2934);
					BgL_new1121z00_2933 = BgL_new1128z00_2934;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1121z00_2933)))->BgL_locz00) =
					((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_nodez00_2681)))->BgL_locz00)), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1121z00_2933)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_nodez00_2681)))->BgL_typez00)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1121z00_2933)))->BgL_sidezd2effectzd2) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt)
											BgL_nodez00_2681))))->BgL_sidezd2effectzd2)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1121z00_2933)))->BgL_keyz00) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt)
											BgL_nodez00_2681))))->BgL_keyz00)), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(BgL_new1121z00_2933))->BgL_funz00) =
					((BgL_varz00_bglt) (((BgL_appz00_bglt)
								COBJECT(((BgL_appz00_bglt) ((BgL_nodez00_bglt)
											BgL_nodez00_2681))))->BgL_funz00)), BUNSPEC);
				{
					obj_t BgL_auxz00_4171;

					{	/* Abound/walk.scm 196 */
						obj_t BgL_list1888z00_2937;

						{	/* Abound/walk.scm 196 */
							obj_t BgL_arg1889z00_2938;

							BgL_arg1889z00_2938 = MAKE_YOUNG_PAIR(BgL_iz00_2683, BNIL);
							BgL_list1888z00_2937 =
								MAKE_YOUNG_PAIR(BgL_vz00_2682, BgL_arg1889z00_2938);
						}
						BgL_auxz00_4171 = BgL_list1888z00_2937;
					}
					((((BgL_appz00_bglt) COBJECT(BgL_new1121z00_2933))->BgL_argsz00) =
						((obj_t) BgL_auxz00_4171), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(BgL_new1121z00_2933))->BgL_stackablez00) =
					((obj_t) (((BgL_appz00_bglt)
								COBJECT(((BgL_appz00_bglt) ((BgL_nodez00_bglt)
											BgL_nodez00_2681))))->BgL_stackablez00)), BUNSPEC);
				return BgL_new1121z00_2933;
			}
		}

	}



/* &<@anonymous:1918> */
	BgL_appz00_bglt BGl_z62zc3z04anonymousza31918ze3ze5zzabound_walkz00(obj_t
		BgL_envz00_2684, BgL_nodezf2effectzf2_bglt BgL_nodez00_2685,
		obj_t BgL_vecz00_2686, obj_t BgL_iz00_2687)
	{
		{	/* Abound/walk.scm 213 */
			{	/* Abound/walk.scm 215 */
				BgL_appz00_bglt BgL_new1131z00_2942;

				{	/* Abound/walk.scm 215 */
					BgL_appz00_bglt BgL_new1138z00_2943;

					BgL_new1138z00_2943 =
						((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_appz00_bgl))));
					{	/* Abound/walk.scm 215 */
						long BgL_arg1925z00_2944;

						{	/* Abound/walk.scm 215 */
							long BgL_res2186z00_2945;

							BgL_res2186z00_2945 = BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
							BgL_arg1925z00_2944 = BgL_res2186z00_2945;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1138z00_2943), BgL_arg1925z00_2944);
					}
					{	/* Abound/walk.scm 215 */
						BgL_objectz00_bglt BgL_tmpz00_4183;

						BgL_tmpz00_4183 = ((BgL_objectz00_bglt) BgL_new1138z00_2943);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4183, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1138z00_2943);
					BgL_new1131z00_2942 = BgL_new1138z00_2943;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1131z00_2942)))->BgL_locz00) =
					((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_nodez00_2685)))->BgL_locz00)), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1131z00_2942)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_nodez00_2685)))->BgL_typez00)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1131z00_2942)))->BgL_sidezd2effectzd2) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt)
											BgL_nodez00_2685))))->BgL_sidezd2effectzd2)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1131z00_2942)))->BgL_keyz00) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt)
											BgL_nodez00_2685))))->BgL_keyz00)), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(BgL_new1131z00_2942))->BgL_funz00) =
					((BgL_varz00_bglt) (((BgL_appz00_bglt)
								COBJECT(((BgL_appz00_bglt) ((BgL_nodez00_bglt)
											BgL_nodez00_2685))))->BgL_funz00)), BUNSPEC);
				{
					obj_t BgL_auxz00_4209;

					{	/* Abound/walk.scm 216 */
						obj_t BgL_arg1919z00_2946;

						{	/* Abound/walk.scm 216 */
							obj_t BgL_pairz00_2947;

							BgL_pairz00_2947 =
								(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt) BgL_nodez00_2685)))->BgL_argsz00);
							{	/* Abound/walk.scm 216 */
								obj_t BgL_pairz00_2948;

								{	/* Abound/walk.scm 216 */
									obj_t BgL_pairz00_2949;

									BgL_pairz00_2949 = CDR(BgL_pairz00_2947);
									BgL_pairz00_2948 = CDR(BgL_pairz00_2949);
								}
								BgL_arg1919z00_2946 = CAR(BgL_pairz00_2948);
						}}
						{	/* Abound/walk.scm 216 */
							obj_t BgL_list1920z00_2950;

							{	/* Abound/walk.scm 216 */
								obj_t BgL_arg1921z00_2951;

								{	/* Abound/walk.scm 216 */
									obj_t BgL_arg1923z00_2952;

									BgL_arg1923z00_2952 =
										MAKE_YOUNG_PAIR(BgL_arg1919z00_2946, BNIL);
									BgL_arg1921z00_2951 =
										MAKE_YOUNG_PAIR(BgL_iz00_2687, BgL_arg1923z00_2952);
								}
								BgL_list1920z00_2950 =
									MAKE_YOUNG_PAIR(BgL_vecz00_2686, BgL_arg1921z00_2951);
							}
							BgL_auxz00_4209 = BgL_list1920z00_2950;
					}}
					((((BgL_appz00_bglt) COBJECT(BgL_new1131z00_2942))->BgL_argsz00) =
						((obj_t) BgL_auxz00_4209), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(BgL_new1131z00_2942))->BgL_stackablez00) =
					((obj_t) (((BgL_appz00_bglt)
								COBJECT(((BgL_appz00_bglt) ((BgL_nodez00_bglt)
											BgL_nodez00_2685))))->BgL_stackablez00)), BUNSPEC);
				return BgL_new1131z00_2942;
			}
		}

	}



/* &abound-node-sync1361 */
	BgL_nodez00_bglt BGl_z62aboundzd2nodezd2sync1361z62zzabound_walkz00(obj_t
		BgL_envz00_2688, obj_t BgL_nodez00_2689)
	{
		{	/* Abound/walk.scm 134 */
			{
				BgL_nodez00_bglt BgL_auxz00_4223;

				{	/* Abound/walk.scm 136 */
					BgL_nodez00_bglt BgL_arg1856z00_2954;

					BgL_arg1856z00_2954 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2689)))->BgL_mutexz00);
					BgL_auxz00_4223 =
						BGl_aboundzd2nodezd2zzabound_walkz00(BgL_arg1856z00_2954);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2689)))->BgL_mutexz00) =
					((BgL_nodez00_bglt) BgL_auxz00_4223), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_4229;

				{	/* Abound/walk.scm 137 */
					BgL_nodez00_bglt BgL_arg1857z00_2955;

					BgL_arg1857z00_2955 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2689)))->BgL_bodyz00);
					BgL_auxz00_4229 =
						BGl_aboundzd2nodezd2zzabound_walkz00(BgL_arg1857z00_2955);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2689)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_4229), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_2689));
		}

	}



/* &abound-node-sequence1359 */
	BgL_nodez00_bglt BGl_z62aboundzd2nodezd2sequence1359z62zzabound_walkz00(obj_t
		BgL_envz00_2690, obj_t BgL_nodez00_2691)
	{
		{	/* Abound/walk.scm 127 */
			BGl_aboundzd2nodeza2z12z62zzabound_walkz00(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2691)))->BgL_nodesz00));
			return ((BgL_nodez00_bglt) ((BgL_sequencez00_bglt) BgL_nodez00_2691));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzabound_walkz00()
	{
		{	/* Abound/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string2234z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2234z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string2234z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2234z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2234z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2234z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2234z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string2234z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2234z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string2234z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string2234z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2234z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string2234z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 135263818),
				BSTRING_TO_STRING(BGl_string2234z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 189769760),
				BSTRING_TO_STRING(BGl_string2234z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string2234z00zzabound_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2234z00zzabound_walkz00));
		}

	}

#ifdef __cplusplus
}
#endif
