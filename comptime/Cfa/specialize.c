/*===========================================================================*/
/*   (Cfa/specialize.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/specialize.scm) */
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

	typedef struct BgL_backendz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_languagez00;
		obj_t BgL_srfi0z00;
		obj_t BgL_namez00;
		obj_t BgL_externzd2variableszd2;
		obj_t BgL_externzd2functionszd2;
		obj_t BgL_externzd2typeszd2;
		obj_t BgL_variablesz00;
		obj_t BgL_functionsz00;
		obj_t BgL_typesz00;
		bool_t BgL_typedz00;
		obj_t BgL_heapzd2suffixzd2;
		obj_t BgL_heapzd2compatiblezd2;
		bool_t BgL_callccz00;
		bool_t BgL_qualifiedzd2typeszd2;
		bool_t BgL_effectzb2zb2;
		bool_t BgL_removezd2emptyzd2letz00;
		bool_t BgL_foreignzd2closurezd2;
		bool_t BgL_typedzd2eqzd2;
		bool_t BgL_tracezd2supportzd2;
		obj_t BgL_foreignzd2clausezd2supportz00;
		obj_t BgL_debugzd2supportzd2;
		bool_t BgL_pragmazd2supportzd2;
		bool_t BgL_tvectorzd2descrzd2supportz00;
		bool_t BgL_requirezd2tailczd2;
		obj_t BgL_registersz00;
		obj_t BgL_pregistersz00;
		bool_t BgL_boundzd2checkzd2;
		bool_t BgL_typezd2checkzd2;
		bool_t BgL_typedzd2funcallzd2;
	}                 *BgL_backendz00_bglt;

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

	typedef struct BgL_localz00_bgl
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
		long BgL_keyz00;
	}               *BgL_localz00_bglt;

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

	typedef struct BgL_atomz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}              *BgL_atomz00_bglt;

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

	typedef struct BgL_closurez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}                 *BgL_closurez00_bglt;

	typedef struct BgL_kwotez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}               *BgL_kwotez00_bglt;

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

	typedef struct BgL_specializa7edzd2globalz75_bgl
	{
		obj_t BgL_fixz00;
	}                                *BgL_specializa7edzd2globalz75_bglt;


	static obj_t BGl_z62patchz12z70zzcfa_specializa7eza7(obj_t, obj_t);
	static obj_t BGl_za2specializa7eza2za7zzcfa_specializa7eza7 = BUNSPEC;
	static obj_t
		BGl_addzd2specializa7edzd2eqzd2typez12z67zzcfa_specializa7eza7(obj_t);
	static BgL_appz00_bglt
		BGl_specializa7ezd2eqzf3z86zzcfa_specializa7eza7(BgL_appz00_bglt);
	static obj_t BGl_z62patchz12zd2kwote1377za2zzcfa_specializa7eza7(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_syncz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t
		BGl_za2optimzd2cfazd2fixnumzd2arithmeticzf3za2z21zzengine_paramz00;
	static obj_t BGl_objectzd2initzd2zzcfa_specializa7eza7();
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_z62zc3z04anonymousza31885ze3ze5zzcfa_specializa7eza7(obj_t,
		obj_t);
	extern obj_t BGl_za2brealza2z00zztype_cachez00;
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_appendzd221011zd2zzcfa_specializa7eza7(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_specializa7eza7();
	BGL_EXPORTED_DECL obj_t BGl_specializa7ez12zb5zzcfa_specializa7eza7(obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_za2specializa7ationszd2overflowza2z75zzcfa_specializa7eza7 =
		BUNSPEC;
	static obj_t BGl_getzd2specializa7ationsz75zzcfa_specializa7eza7();
	static obj_t BGl_uninstallzd2specializa7esz12z67zzcfa_specializa7eza7();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern BgL_typez00_bglt
		BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t
		BGl_za2specializa7ationszd2sanszd2overflowza2za7zzcfa_specializa7eza7 =
		BUNSPEC;
	extern obj_t BGl_cfunz00zzast_varz00;
	static obj_t BGl_patchzd2funz12zc0zzcfa_specializa7eza7(obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_z62specializa7ez12zd7zzcfa_specializa7eza7(obj_t, obj_t);
	static obj_t BGl_z62patchz12zd2cast1393za2zzcfa_specializa7eza7(obj_t, obj_t);
	static obj_t BGl_patchz12z12zzcfa_specializa7eza7(BgL_nodez00_bglt);
	static obj_t BGl_za2specializa7ationsza2za7zzcfa_specializa7eza7 = BUNSPEC;
	static obj_t BGl_patchza2z12zb0zzcfa_specializa7eza7(obj_t);
	static BgL_appz00_bglt
		BGl_specializa7ezd2appz12z67zzcfa_specializa7eza7(BgL_appz00_bglt);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzcfa_specializa7eza7();
	static obj_t BGl_z62patchz12zd2setq1395za2zzcfa_specializa7eza7(obj_t, obj_t);
	extern obj_t BGl_za2arithmeticzd2overflowza2zd2zzengine_paramz00;
	static obj_t BGl_z62patchz12zd2boxzd2ref1415z70zzcfa_specializa7eza7(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_z62arithmeticzd2operatorzf3z43zzcfa_specializa7eza7(obj_t,
		obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t
		BGl_arithmeticzd2operatorzf3z21zzcfa_specializa7eza7(BgL_globalz00_bglt);
	static obj_t BGl_installzd2specializa7ez12z67zzcfa_specializa7eza7(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_specializa7eza7 = BUNSPEC;
	static obj_t BGl_z62patchz12zd2closure1381za2zzcfa_specializa7eza7(obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static BgL_globalz00_bglt BGl_z62lambda1879z62zzcfa_specializa7eza7(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	static obj_t BGl_normaliza7ezd2getzd2typeze70z40zzcfa_specializa7eza7(obj_t);
	extern obj_t BGl_atomz00zzast_nodez00;
	static bool_t BGl_patchzd2treez12zc0zzcfa_specializa7eza7(obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_globalz00_bglt BGl_z62lambda1883z62zzcfa_specializa7eza7(obj_t,
		obj_t);
	static BgL_globalz00_bglt BGl_z62lambda1886z62zzcfa_specializa7eza7(obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcfa_specializa7eza7();
	static obj_t BGl_z62lambda1894z62zzcfa_specializa7eza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1895z62zzcfa_specializa7eza7(obj_t, obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcfa_specializa7eza7();
	static obj_t BGl_z62patchz12zd2switch1401za2zzcfa_specializa7eza7(obj_t,
		obj_t);
	static obj_t BGl_z62patchz121371z70zzcfa_specializa7eza7(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_z62patchz12zd2atom1375za2zzcfa_specializa7eza7(obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	static obj_t BGl_za2boxedzd2eqzf3za2z21zzcfa_specializa7eza7 = BUNSPEC;
	static obj_t
		BGl_z62patchz12zd2jumpzd2exzd2it1409za2zzcfa_specializa7eza7(obj_t, obj_t);
	static obj_t BGl_z62patchz12zd2appzd2ly1387z70zzcfa_specializa7eza7(obj_t,
		obj_t);
	extern obj_t
		BGl_za2optimzd2cfazd2flonumzd2arithmeticzf3za2z21zzengine_paramz00;
	extern obj_t BGl_za2libzd2modeza2zd2zzengine_paramz00;
	static obj_t BGl_za2czd2eqzf3za2z21zzcfa_specializa7eza7 = BUNSPEC;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62patchz12zd2boxzd2setz121413z62zzcfa_specializa7eza7(obj_t,
		obj_t);
	static bool_t BGl_showzd2specializa7ez75zzcfa_specializa7eza7();
	static obj_t BGl_z62patchz12zd2makezd2box1411z70zzcfa_specializa7eza7(obj_t,
		obj_t);
	static obj_t BGl_z62patchz12zd2conditional1397za2zzcfa_specializa7eza7(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62patchz12zd2letzd2fun1403z70zzcfa_specializa7eza7(obj_t,
		obj_t);
	extern obj_t BGl_za2realza2z00zztype_cachez00;
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	static obj_t BGl_z62patchz12zd2extern1391za2zzcfa_specializa7eza7(obj_t,
		obj_t);
	static obj_t BGl_za2specializa7edzd2eqzd2typesza2za7zzcfa_specializa7eza7 =
		BUNSPEC;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_z62patchz12zd2var1379za2zzcfa_specializa7eza7(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt,
		bool_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_z62patchz12zd2app1417za2zzcfa_specializa7eza7(obj_t, obj_t);
	static obj_t BGl_addzd2specializa7edzd2typez12zb5zzcfa_specializa7eza7(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_arithmeticzd2speczd2typesz00zzcfa_specializa7eza7(BgL_globalz00_bglt);
	static obj_t
		BGl_z62patchz12zd2setzd2exzd2it1407za2zzcfa_specializa7eza7(obj_t, obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static bool_t BGl_specializa7ezd2optimiza7ationzf3z21zzcfa_specializa7eza7();
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzcfa_specializa7eza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_specializa7edzd2globalz75zzcfa_specializa7eza7 = BUNSPEC;
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_z62arithmeticzd2speczd2typesz62zzcfa_specializa7eza7(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzcfa_specializa7eza7();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_specializa7eza7();
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_specializa7eza7();
	static obj_t BGl_z62patchz12zd2sync1385za2zzcfa_specializa7eza7(obj_t, obj_t);
	static obj_t BGl_z62patchz12zd2fail1399za2zzcfa_specializa7eza7(obj_t, obj_t);
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	static obj_t BGl_z62patchz12zd2letzd2var1405z70zzcfa_specializa7eza7(obj_t,
		obj_t);
	static obj_t
		BGl_installzd2specializa7edzd2typez12zb5zzcfa_specializa7eza7(obj_t);
	static obj_t BGl_z62patchz12zd2sequence1383za2zzcfa_specializa7eza7(obj_t,
		obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_valuez00zzast_varz00;
	extern obj_t BGl_za2bintza2z00zztype_cachez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	extern obj_t BGl_za2bcharza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t BGl_za2specializa7edzd2typesza2z75zzcfa_specializa7eza7 =
		BUNSPEC;
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_z62patchz12zd2funcall1389za2zzcfa_specializa7eza7(obj_t,
		obj_t);
	static obj_t __cnst[14];


	   
		 
		DEFINE_STRING(BGl_string2129z00zzcfa_specializa7eza7,
		BgL_bgl_string2129za700za7za7c2135za7, "Unexpected closure", 18);
	      DEFINE_STRING(BGl_string2130z00zzcfa_specializa7eza7,
		BgL_bgl_string2130za700za7za7c2136za7, "cfa_specialize", 14);
	      DEFINE_STRING(BGl_string2131z00zzcfa_specializa7eza7,
		BgL_bgl_string2131za700za7za7c2137za7,
		"patch!1371 _ cfa_specialize specialized-global obj fix done c-eq? c-boxed-eq? foreign __r4_numbers_6_5_flonum __r4_numbers_6_5_fixnum ((|2+| (|2+| __r4_numbers_6_5) (+fl __r4_numbers_6_5_flonum) (+fx __r4_numbers_6_5_fixnum)) (|2-| (|2-| __r4_numbers_6_5) (-fl __r4_numbers_6_5_flonum) (-fx __r4_numbers_6_5_fixnum)) (2* (2* __r4_numbers_6_5) (*fl __r4_numbers_6_5_flonum) (*fx __r4_numbers_6_5_fixnum)) (abs (abs __r4_numbers_6_5) (absfl __r4_numbers_6_5_flonum) (absfx __r4_numbers_6_5_fixnum))) ((|2+| (|2+| __r4_numbers_6_5) (+fl __r4_numbers_6_5_flonum)) (|2-| (|2-| __r4_numbers_6_5) (-fl __r4_numbers_6_5_flonum)) (2* (2* __r4_numbers_6_5) (*fl __r4_numbers_6_5_flonum)) (2/ (2/ __r4_numbers_6_5) (/fl __r4_numbers_6_5_flonum)) (abs (abs __r4_numbers_6_5) (absfl __r4_numbers_6_5_flonum)) (c-eq? (c-eq? foreign) (=fx __r4_numbers_6_5_fixnum) (=fl __r4_numbers_6_5_flonum)) (2= (2= __r4_numbers_6_5) (=fx __r4_numbers_6_5_fixnum) (=fl __r4_numbers_6_5_flonum)) (2< (2< __r4_numbers_6_5) (<fx __r4_numbers_6_5_fixnum) ("
		"<fl __r4_numbers_6_5_flonum)) (2> (2> __r4_numbers_6_5) (>fx __r4_numbers_6_5_fixnum) (>fl __r4_numbers_6_5_flonum)) (2<= (2<= __r4_numbers_6_5) (<=fx __r4_numbers_6_5_fixnum) (<=fl __r4_numbers_6_5_flonum)) (2>= (2>= __r4_numbers_6_5) (>=fx __r4_numbers_6_5_fixnum) (>=fl __r4_numbers_6_5_flonum)) (zero? (zero? __r4_numbers_6_5) (zerofx? __r4_numbers_6_5_fixnum) (zerofl? __r4_numbers_6_5_flonum)) (positive? (positive? __r4_numbers_6_5) (positivefx? __r4_numbers_6_5_fixnum) (positivefl? __r4_numbers_6_5_flonum)) (negative? (negative? __r4_numbers_6_5) (negativefx? __r4_numbers_6_5_fixnum) (negativefl? __r4_numbers_6_5_flonum)) (log (log __r4_numbers_6_5) (logfl __r4_numbers_6_5_flonum)) (exp (exp __r4_numbers_6_5) (expfl __r4_numbers_6_5_flonum)) (sin (sin __r4_numbers_6_5) (sinfl __r4_numbers_6_5_flonum)) (cos (cos __r4_numbers_6_5) (cosfl __r4_numbers_6_5_flonum)) (tan (tan __r4_numbers_6_5) (tanfl __r4_numbers_6_5_flonum)) (atan (atan __r4_numbers_6_5) (atanfl __r4_numbers_6_5_flonum)) (asin (asin __r4_numb"
		"ers_6_5) (asinfl __r4_numbers_6_5_flonum)) (acos (acos __r4_numbers_6_5) (acosfl __r4_numbers_6_5_flonum)) (sqrt (sqrt __r4_numbers_6_5) (sqrtfl __r4_numbers_6_5_flonum))) ",
		2220);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2096z00zzcfa_specializa7eza7,
		BgL_bgl_za762lambda1895za7622138z00,
		BGl_z62lambda1895z62zzcfa_specializa7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2097z00zzcfa_specializa7eza7,
		BgL_bgl_za762lambda1894za7622139z00,
		BGl_z62lambda1894z62zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2098z00zzcfa_specializa7eza7,
		BgL_bgl_za762lambda1886za7622140z00,
		BGl_z62lambda1886z62zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2099z00zzcfa_specializa7eza7,
		BgL_bgl_za762za7c3za704anonymo2141za7,
		BGl_z62zc3z04anonymousza31885ze3ze5zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_arithmeticzd2operatorzf3zd2envzf3zzcfa_specializa7eza7,
		BgL_bgl_za762arithmeticza7d22142z00,
		BGl_z62arithmeticzd2operatorzf3z43zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_specializa7ez12zd2envz67zzcfa_specializa7eza7,
		BgL_bgl_za762specializa7a7eza72143za7,
		BGl_z62specializa7ez12zd7zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2100z00zzcfa_specializa7eza7,
		BgL_bgl_za762lambda1883za7622144z00,
		BGl_z62lambda1883z62zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2101z00zzcfa_specializa7eza7,
		BgL_bgl_za762lambda1879za7622145z00,
		BGl_z62lambda1879z62zzcfa_specializa7eza7, 0L, BUNSPEC, 21);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2103z00zzcfa_specializa7eza7,
		BgL_bgl_za762patchza7121371za72146za7,
		BGl_z62patchz121371z70zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2106z00zzcfa_specializa7eza7,
		BgL_bgl_za762patchza712za7d2at2147za7,
		BGl_z62patchz12zd2atom1375za2zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2108z00zzcfa_specializa7eza7,
		BgL_bgl_za762patchza712za7d2kw2148za7,
		BGl_z62patchz12zd2kwote1377za2zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2109z00zzcfa_specializa7eza7,
		BgL_bgl_za762patchza712za7d2va2149za7,
		BGl_z62patchz12zd2var1379za2zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2110z00zzcfa_specializa7eza7,
		BgL_bgl_za762patchza712za7d2cl2150za7,
		BGl_z62patchz12zd2closure1381za2zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2111z00zzcfa_specializa7eza7,
		BgL_bgl_za762patchza712za7d2se2151za7,
		BGl_z62patchz12zd2sequence1383za2zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2112z00zzcfa_specializa7eza7,
		BgL_bgl_za762patchza712za7d2sy2152za7,
		BGl_z62patchz12zd2sync1385za2zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2113z00zzcfa_specializa7eza7,
		BgL_bgl_za762patchza712za7d2ap2153za7,
		BGl_z62patchz12zd2appzd2ly1387z70zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2114z00zzcfa_specializa7eza7,
		BgL_bgl_za762patchza712za7d2fu2154za7,
		BGl_z62patchz12zd2funcall1389za2zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2115z00zzcfa_specializa7eza7,
		BgL_bgl_za762patchza712za7d2ex2155za7,
		BGl_z62patchz12zd2extern1391za2zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2116z00zzcfa_specializa7eza7,
		BgL_bgl_za762patchza712za7d2ca2156za7,
		BGl_z62patchz12zd2cast1393za2zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2117z00zzcfa_specializa7eza7,
		BgL_bgl_za762patchza712za7d2se2157za7,
		BGl_z62patchz12zd2setq1395za2zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2118z00zzcfa_specializa7eza7,
		BgL_bgl_za762patchza712za7d2co2158za7,
		BGl_z62patchz12zd2conditional1397za2zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2119z00zzcfa_specializa7eza7,
		BgL_bgl_za762patchza712za7d2fa2159za7,
		BGl_z62patchz12zd2fail1399za2zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_arithmeticzd2speczd2typeszd2envzd2zzcfa_specializa7eza7,
		BgL_bgl_za762arithmeticza7d22160z00,
		BGl_z62arithmeticzd2speczd2typesz62zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2120z00zzcfa_specializa7eza7,
		BgL_bgl_za762patchza712za7d2sw2161za7,
		BGl_z62patchz12zd2switch1401za2zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2121z00zzcfa_specializa7eza7,
		BgL_bgl_za762patchza712za7d2le2162za7,
		BGl_z62patchz12zd2letzd2fun1403z70zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2122z00zzcfa_specializa7eza7,
		BgL_bgl_za762patchza712za7d2le2163za7,
		BGl_z62patchz12zd2letzd2var1405z70zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2123z00zzcfa_specializa7eza7,
		BgL_bgl_za762patchza712za7d2se2164za7,
		BGl_z62patchz12zd2setzd2exzd2it1407za2zzcfa_specializa7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2124z00zzcfa_specializa7eza7,
		BgL_bgl_za762patchza712za7d2ju2165za7,
		BGl_z62patchz12zd2jumpzd2exzd2it1409za2zzcfa_specializa7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2125z00zzcfa_specializa7eza7,
		BgL_bgl_za762patchza712za7d2ma2166za7,
		BGl_z62patchz12zd2makezd2box1411z70zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2126z00zzcfa_specializa7eza7,
		BgL_bgl_za762patchza712za7d2bo2167za7,
		BGl_z62patchz12zd2boxzd2setz121413z62zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2127z00zzcfa_specializa7eza7,
		BgL_bgl_za762patchza712za7d2bo2168za7,
		BGl_z62patchz12zd2boxzd2ref1415z70zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2128z00zzcfa_specializa7eza7,
		BgL_bgl_za762patchza712za7d2ap2169za7,
		BGl_z62patchz12zd2app1417za2zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2084z00zzcfa_specializa7eza7,
		BgL_bgl_string2084za700za7za7c2170za7, "   . Specializing", 17);
	      DEFINE_STRING(BGl_string2085z00zzcfa_specializa7eza7,
		BgL_bgl_string2085za700za7za7c2171za7, ")\n", 2);
	      DEFINE_STRING(BGl_string2086z00zzcfa_specializa7eza7,
		BgL_bgl_string2086za700za7za7c2172za7, ": ", 2);
	      DEFINE_STRING(BGl_string2087z00zzcfa_specializa7eza7,
		BgL_bgl_string2087za700za7za7c2173za7, "        (-> ", 12);
	      DEFINE_STRING(BGl_string2088z00zzcfa_specializa7eza7,
		BgL_bgl_string2088za700za7za7c2174za7, "        (eq? ", 13);
	      DEFINE_STRING(BGl_string2089z00zzcfa_specializa7eza7,
		BgL_bgl_string2089za700za7za7c2175za7, "add-specialized-type!", 21);
	      DEFINE_STRING(BGl_string2090z00zzcfa_specializa7eza7,
		BgL_bgl_string2090za700za7za7c2176za7, "Unspecialized type", 18);
	      DEFINE_STRING(BGl_string2091z00zzcfa_specializa7eza7,
		BgL_bgl_string2091za700za7za7c2177za7, "install-specialize", 18);
	      DEFINE_STRING(BGl_string2092z00zzcfa_specializa7eza7,
		BgL_bgl_string2092za700za7za7c2178za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string2093z00zzcfa_specializa7eza7,
		BgL_bgl_string2093za700za7za7c2179za7, " -- ", 4);
	      DEFINE_STRING(BGl_string2094z00zzcfa_specializa7eza7,
		BgL_bgl_string2094za700za7za7c2180za7, "Can't find global", 17);
	      DEFINE_STRING(BGl_string2095z00zzcfa_specializa7eza7,
		BgL_bgl_string2095za700za7za7c2181za7, "install-specialize!", 19);
	      DEFINE_STATIC_BGL_GENERIC(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
		BgL_bgl_za762patchza712za770za7za72182za7,
		BGl_z62patchz12z70zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_zc3zd2envz11zz__r4_numbers_6_5z00;
	   
		 
		DEFINE_STRING(BGl_string2102z00zzcfa_specializa7eza7,
		BgL_bgl_string2102za700za7za7c2183za7, "", 0);
	      DEFINE_STRING(BGl_string2104z00zzcfa_specializa7eza7,
		BgL_bgl_string2104za700za7za7c2184za7, "patch!1371", 10);
	      DEFINE_STRING(BGl_string2105z00zzcfa_specializa7eza7,
		BgL_bgl_string2105za700za7za7c2185za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string2107z00zzcfa_specializa7eza7,
		BgL_bgl_string2107za700za7za7c2186za7, "patch!", 6);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2specializa7eza2za7zzcfa_specializa7eza7));
		   
			 ADD_ROOT((void
				*) (&BGl_za2specializa7ationszd2overflowza2z75zzcfa_specializa7eza7));
		     ADD_ROOT((void
				*)
			(&BGl_za2specializa7ationszd2sanszd2overflowza2za7zzcfa_specializa7eza7));
		     ADD_ROOT((void
				*) (&BGl_za2specializa7ationsza2za7zzcfa_specializa7eza7));
		     ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzcfa_specializa7eza7));
		     ADD_ROOT((void *) (&BGl_za2boxedzd2eqzf3za2z21zzcfa_specializa7eza7));
		     ADD_ROOT((void *) (&BGl_za2czd2eqzf3za2z21zzcfa_specializa7eza7));
		   
			 ADD_ROOT((void
				*) (&BGl_za2specializa7edzd2eqzd2typesza2za7zzcfa_specializa7eza7));
		     ADD_ROOT((void
				*) (&BGl_specializa7edzd2globalz75zzcfa_specializa7eza7));
		     ADD_ROOT((void
				*) (&BGl_za2specializa7edzd2typesza2z75zzcfa_specializa7eza7));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzcfa_specializa7eza7(long
		BgL_checksumz00_2881, char *BgL_fromz00_2882)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_specializa7eza7))
				{
					BGl_requirezd2initializa7ationz75zzcfa_specializa7eza7 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcfa_specializa7eza7();
					BGl_libraryzd2moduleszd2initz00zzcfa_specializa7eza7();
					BGl_cnstzd2initzd2zzcfa_specializa7eza7();
					BGl_importedzd2moduleszd2initz00zzcfa_specializa7eza7();
					BGl_objectzd2initzd2zzcfa_specializa7eza7();
					BGl_genericzd2initzd2zzcfa_specializa7eza7();
					BGl_methodzd2initzd2zzcfa_specializa7eza7();
					return BGl_toplevelzd2initzd2zzcfa_specializa7eza7();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_specializa7eza7()
	{
		{	/* Cfa/specialize.scm 19 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"cfa_specialize");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"cfa_specialize");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_specialize");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"cfa_specialize");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cfa_specialize");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"cfa_specialize");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cfa_specialize");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "cfa_specialize");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cfa_specialize");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_specialize");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_specializa7eza7()
	{
		{	/* Cfa/specialize.scm 19 */
			{	/* Cfa/specialize.scm 19 */
				obj_t BgL_cportz00_2759;

				{	/* Cfa/specialize.scm 19 */
					obj_t BgL_stringz00_2767;

					BgL_stringz00_2767 = BGl_string2131z00zzcfa_specializa7eza7;
					{	/* Cfa/specialize.scm 19 */
						obj_t BgL_startz00_2768;

						BgL_startz00_2768 = BINT(((long) 0));
						{	/* Cfa/specialize.scm 19 */
							obj_t BgL_endz00_2769;

							BgL_endz00_2769 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2767)));
							{	/* Cfa/specialize.scm 19 */

								BgL_cportz00_2759 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2767, BgL_startz00_2768, BgL_endz00_2769);
				}}}}
				{
					long BgL_iz00_2760;

					BgL_iz00_2760 = ((long) 13);
				BgL_loopz00_2761:
					if ((BgL_iz00_2760 == ((long) -1)))
						{	/* Cfa/specialize.scm 19 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/specialize.scm 19 */
							{	/* Cfa/specialize.scm 19 */
								obj_t BgL_arg2133z00_2763;

								{	/* Cfa/specialize.scm 19 */

									{	/* Cfa/specialize.scm 19 */
										obj_t BgL_locationz00_2765;

										BgL_locationz00_2765 = BBOOL(((bool_t) 0));
										{	/* Cfa/specialize.scm 19 */

											BgL_arg2133z00_2763 =
												BGl_readz00zz__readerz00(BgL_cportz00_2759,
												BgL_locationz00_2765);
										}
									}
								}
								{	/* Cfa/specialize.scm 19 */
									int BgL_tmpz00_2913;

									BgL_tmpz00_2913 = (int) (BgL_iz00_2760);
									CNST_TABLE_SET(BgL_tmpz00_2913, BgL_arg2133z00_2763);
							}}
							{	/* Cfa/specialize.scm 19 */
								int BgL_auxz00_2766;

								BgL_auxz00_2766 = (int) ((BgL_iz00_2760 - ((long) 1)));
								{
									long BgL_iz00_2918;

									BgL_iz00_2918 = (long) (BgL_auxz00_2766);
									BgL_iz00_2760 = BgL_iz00_2918;
									goto BgL_loopz00_2761;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcfa_specializa7eza7()
	{
		{	/* Cfa/specialize.scm 19 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_specializa7eza7()
	{
		{	/* Cfa/specialize.scm 19 */
			BGl_za2specializa7ationsza2za7zzcfa_specializa7eza7 = BFALSE;
			BGl_za2specializa7ationszd2sanszd2overflowza2za7zzcfa_specializa7eza7 =
				CNST_TABLE_REF(((long) 0));
			BGl_za2specializa7ationszd2overflowza2z75zzcfa_specializa7eza7 =
				CNST_TABLE_REF(((long) 1));
			BGl_za2czd2eqzf3za2z21zzcfa_specializa7eza7 = BUNSPEC;
			BGl_za2specializa7eza2za7zzcfa_specializa7eza7 = BNIL;
			BGl_za2specializa7edzd2typesza2z75zzcfa_specializa7eza7 = BNIL;
			BGl_za2specializa7edzd2eqzd2typesza2za7zzcfa_specializa7eza7 = BNIL;
			BGl_za2boxedzd2eqzf3za2z21zzcfa_specializa7eza7 = BUNSPEC;
			return BGl_zc3zd2envz11zz__r4_numbers_6_5z00;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzcfa_specializa7eza7(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1603;

				BgL_headz00_1603 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1604;
					obj_t BgL_tailz00_1605;

					BgL_prevz00_1604 = BgL_headz00_1603;
					BgL_tailz00_1605 = BgL_l1z00_1;
				BgL_loopz00_1606:
					if (PAIRP(BgL_tailz00_1605))
						{
							obj_t BgL_newzd2prevzd2_1608;

							BgL_newzd2prevzd2_1608 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1605), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1604, BgL_newzd2prevzd2_1608);
							{
								obj_t BgL_tailz00_2930;
								obj_t BgL_prevz00_2929;

								BgL_prevz00_2929 = BgL_newzd2prevzd2_1608;
								BgL_tailz00_2930 = CDR(BgL_tailz00_1605);
								BgL_tailz00_1605 = BgL_tailz00_2930;
								BgL_prevz00_1604 = BgL_prevz00_2929;
								goto BgL_loopz00_1606;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1603);
				}
			}
		}

	}



/* specialize! */
	BGL_EXPORTED_DEF obj_t BGl_specializa7ez12zb5zzcfa_specializa7eza7(obj_t
		BgL_globalsz00_88)
	{
		{	/* Cfa/specialize.scm 44 */
			if (BGl_specializa7ezd2optimiza7ationzf3z21zzcfa_specializa7eza7())
				{	/* Cfa/specialize.scm 45 */
					{	/* Cfa/specialize.scm 47 */
						obj_t BgL_g1351z00_1618;

						BgL_g1351z00_1618 =
							BGl_getzd2specializa7ationsz75zzcfa_specializa7eza7();
						{
							obj_t BgL_l1349z00_1620;

							BgL_l1349z00_1620 = BgL_g1351z00_1618;
						BgL_zc3z04anonymousza31444ze3z87_1621:
							if (PAIRP(BgL_l1349z00_1620))
								{	/* Cfa/specialize.scm 47 */
									BGl_installzd2specializa7ez12z67zzcfa_specializa7eza7(CAR
										(BgL_l1349z00_1620));
									{
										obj_t BgL_l1349z00_2940;

										BgL_l1349z00_2940 = CDR(BgL_l1349z00_1620);
										BgL_l1349z00_1620 = BgL_l1349z00_2940;
										goto BgL_zc3z04anonymousza31444ze3z87_1621;
									}
								}
							else
								{	/* Cfa/specialize.scm 47 */
									((bool_t) 1);
								}
						}
					}
					BGl_patchzd2treez12zc0zzcfa_specializa7eza7(BgL_globalsz00_88);
					BGl_showzd2specializa7ez75zzcfa_specializa7eza7();
					BGl_uninstallzd2specializa7esz12z67zzcfa_specializa7eza7();
				}
			else
				{	/* Cfa/specialize.scm 45 */
					BFALSE;
				}
			return BgL_globalsz00_88;
		}

	}



/* &specialize! */
	obj_t BGl_z62specializa7ez12zd7zzcfa_specializa7eza7(obj_t BgL_envz00_2643,
		obj_t BgL_globalsz00_2644)
	{
		{	/* Cfa/specialize.scm 44 */
			return BGl_specializa7ez12zb5zzcfa_specializa7eza7(BgL_globalsz00_2644);
		}

	}



/* arithmetic-operator? */
	BGL_EXPORTED_DEF obj_t
		BGl_arithmeticzd2operatorzf3z21zzcfa_specializa7eza7(BgL_globalz00_bglt
		BgL_globalz00_89)
	{
		{	/* Cfa/specialize.scm 56 */
			{	/* Cfa/specialize.scm 58 */
				obj_t BgL_cellz00_1627;

				{	/* Cfa/specialize.scm 58 */
					obj_t BgL_arg1465z00_1632;
					obj_t BgL_arg1474z00_1633;

					BgL_arg1465z00_1632 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_globalz00_89)))->BgL_idz00);
					BgL_arg1474z00_1633 =
						BGl_getzd2specializa7ationsz75zzcfa_specializa7eza7();
					BgL_cellz00_1627 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1465z00_1632,
						BgL_arg1474z00_1633);
				}
				if (PAIRP(BgL_cellz00_1627))
					{	/* Cfa/specialize.scm 59 */
						bool_t BgL_tmpz00_2952;

						{	/* Cfa/specialize.scm 59 */
							obj_t BgL_tmpz00_2953;

							{	/* Cfa/specialize.scm 59 */
								obj_t BgL_pairz00_2377;

								BgL_pairz00_2377 = CAR(CDR(BgL_cellz00_1627));
								BgL_tmpz00_2953 = CAR(CDR(BgL_pairz00_2377));
							}
							BgL_tmpz00_2952 =
								(BgL_tmpz00_2953 ==
								(((BgL_globalz00_bglt) COBJECT(BgL_globalz00_89))->
									BgL_modulez00));
						}
						return BBOOL(BgL_tmpz00_2952);
					}
				else
					{	/* Cfa/specialize.scm 59 */
						return BFALSE;
					}
			}
		}

	}



/* &arithmetic-operator? */
	obj_t BGl_z62arithmeticzd2operatorzf3z43zzcfa_specializa7eza7(obj_t
		BgL_envz00_2645, obj_t BgL_globalz00_2646)
	{
		{	/* Cfa/specialize.scm 56 */
			return
				BGl_arithmeticzd2operatorzf3z21zzcfa_specializa7eza7(
				((BgL_globalz00_bglt) BgL_globalz00_2646));
		}

	}



/* arithmetic-spec-types */
	BGL_EXPORTED_DEF obj_t
		BGl_arithmeticzd2speczd2typesz00zzcfa_specializa7eza7(BgL_globalz00_bglt
		BgL_globalz00_90)
	{
		{	/* Cfa/specialize.scm 67 */
			{	/* Cfa/specialize.scm 69 */
				obj_t BgL_cellz00_1635;

				{	/* Cfa/specialize.scm 69 */
					obj_t BgL_arg1564z00_1660;
					obj_t BgL_arg1565z00_1661;

					BgL_arg1564z00_1660 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_globalz00_90)))->BgL_idz00);
					BgL_arg1565z00_1661 =
						BGl_getzd2specializa7ationsz75zzcfa_specializa7eza7();
					BgL_cellz00_1635 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1564z00_1660,
						BgL_arg1565z00_1661);
				}
				if (PAIRP(BgL_cellz00_1635))
					{	/* Cfa/specialize.scm 72 */
						obj_t BgL_g1141z00_1637;

						BgL_g1141z00_1637 = CDR(CDR(BgL_cellz00_1635));
						{
							obj_t BgL_specz00_1640;
							obj_t BgL_typesz00_1641;

							BgL_specz00_1640 = BgL_g1141z00_1637;
							BgL_typesz00_1641 = BNIL;
						BgL_zc3z04anonymousza31476ze3z87_1642:
							if (NULLP(BgL_specz00_1640))
								{	/* Cfa/specialize.scm 75 */
									return BgL_typesz00_1641;
								}
							else
								{	/* Cfa/specialize.scm 77 */
									bool_t BgL_test2195z00_2973;

									if (CBOOL
										(BGl_za2optimzd2cfazd2fixnumzd2arithmeticzf3za2z21zzengine_paramz00))
										{	/* Cfa/specialize.scm 78 */
											obj_t BgL_tmpz00_2976;

											{	/* Cfa/specialize.scm 78 */
												obj_t BgL_pairz00_2388;

												BgL_pairz00_2388 = CAR(((obj_t) BgL_specz00_1640));
												BgL_tmpz00_2976 = CAR(CDR(BgL_pairz00_2388));
											}
											BgL_test2195z00_2973 =
												(BgL_tmpz00_2976 == CNST_TABLE_REF(((long) 2)));
										}
									else
										{	/* Cfa/specialize.scm 77 */
											BgL_test2195z00_2973 = ((bool_t) 0);
										}
									if (BgL_test2195z00_2973)
										{	/* Cfa/specialize.scm 79 */
											obj_t BgL_arg1495z00_1647;
											obj_t BgL_arg1497z00_1648;

											BgL_arg1495z00_1647 = CDR(((obj_t) BgL_specz00_1640));
											BgL_arg1497z00_1648 =
												MAKE_YOUNG_PAIR(BGl_za2longza2z00zztype_cachez00,
												BgL_typesz00_1641);
											{
												obj_t BgL_typesz00_2987;
												obj_t BgL_specz00_2986;

												BgL_specz00_2986 = BgL_arg1495z00_1647;
												BgL_typesz00_2987 = BgL_arg1497z00_1648;
												BgL_typesz00_1641 = BgL_typesz00_2987;
												BgL_specz00_1640 = BgL_specz00_2986;
												goto BgL_zc3z04anonymousza31476ze3z87_1642;
											}
										}
									else
										{	/* Cfa/specialize.scm 80 */
											bool_t BgL_test2197z00_2988;

											if (CBOOL
												(BGl_za2optimzd2cfazd2flonumzd2arithmeticzf3za2z21zzengine_paramz00))
												{	/* Cfa/specialize.scm 81 */
													obj_t BgL_tmpz00_2991;

													{	/* Cfa/specialize.scm 81 */
														obj_t BgL_pairz00_2394;

														BgL_pairz00_2394 = CAR(((obj_t) BgL_specz00_1640));
														BgL_tmpz00_2991 = CAR(CDR(BgL_pairz00_2394));
													}
													BgL_test2197z00_2988 =
														(BgL_tmpz00_2991 == CNST_TABLE_REF(((long) 3)));
												}
											else
												{	/* Cfa/specialize.scm 80 */
													BgL_test2197z00_2988 = ((bool_t) 0);
												}
											if (BgL_test2197z00_2988)
												{	/* Cfa/specialize.scm 82 */
													obj_t BgL_arg1528z00_1652;
													obj_t BgL_arg1536z00_1653;

													BgL_arg1528z00_1652 = CDR(((obj_t) BgL_specz00_1640));
													BgL_arg1536z00_1653 =
														MAKE_YOUNG_PAIR(BGl_za2realza2z00zztype_cachez00,
														BgL_typesz00_1641);
													{
														obj_t BgL_typesz00_3002;
														obj_t BgL_specz00_3001;

														BgL_specz00_3001 = BgL_arg1528z00_1652;
														BgL_typesz00_3002 = BgL_arg1536z00_1653;
														BgL_typesz00_1641 = BgL_typesz00_3002;
														BgL_specz00_1640 = BgL_specz00_3001;
														goto BgL_zc3z04anonymousza31476ze3z87_1642;
													}
												}
											else
												{	/* Cfa/specialize.scm 84 */
													obj_t BgL_arg1537z00_1654;

													BgL_arg1537z00_1654 = CDR(((obj_t) BgL_specz00_1640));
													{
														obj_t BgL_specz00_3005;

														BgL_specz00_3005 = BgL_arg1537z00_1654;
														BgL_specz00_1640 = BgL_specz00_3005;
														goto BgL_zc3z04anonymousza31476ze3z87_1642;
													}
												}
										}
								}
						}
					}
				else
					{	/* Cfa/specialize.scm 70 */
						return BNIL;
					}
			}
		}

	}



/* &arithmetic-spec-types */
	obj_t BGl_z62arithmeticzd2speczd2typesz62zzcfa_specializa7eza7(obj_t
		BgL_envz00_2647, obj_t BgL_globalz00_2648)
	{
		{	/* Cfa/specialize.scm 67 */
			return
				BGl_arithmeticzd2speczd2typesz00zzcfa_specializa7eza7(
				((BgL_globalz00_bglt) BgL_globalz00_2648));
		}

	}



/* get-specializations */
	obj_t BGl_getzd2specializa7ationsz75zzcfa_specializa7eza7()
	{
		{	/* Cfa/specialize.scm 89 */
			if (CBOOL(BGl_za2specializa7ationsza2za7zzcfa_specializa7eza7))
				{	/* Cfa/specialize.scm 91 */
					return BGl_za2specializa7ationsza2za7zzcfa_specializa7eza7;
				}
			else
				{	/* Cfa/specialize.scm 91 */
					if (CBOOL(BGl_za2arithmeticzd2overflowza2zd2zzengine_paramz00))
						{	/* Cfa/specialize.scm 94 */
							BGl_za2specializa7ationsza2za7zzcfa_specializa7eza7 =
								CNST_TABLE_REF(((long) 0));
							return BGl_za2specializa7ationsza2za7zzcfa_specializa7eza7;
						}
					else
						{	/* Cfa/specialize.scm 94 */
							BGl_za2specializa7ationsza2za7zzcfa_specializa7eza7 =
								BGl_appendzd221011zd2zzcfa_specializa7eza7(CNST_TABLE_REF((
										(long) 1)), CNST_TABLE_REF(((long) 0)));
							return BGl_za2specializa7ationsza2za7zzcfa_specializa7eza7;
						}
				}
		}

	}



/* specialize-optimization? */
	bool_t BGl_specializa7ezd2optimiza7ationzf3z21zzcfa_specializa7eza7()
	{
		{	/* Cfa/specialize.scm 188 */
			if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 1)))
				{	/* Cfa/specialize.scm 189 */
					if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
						{	/* Cfa/specialize.scm 189 */
							return ((bool_t) 0);
						}
					else
						{	/* Cfa/specialize.scm 189 */
							return ((bool_t) 1);
						}
				}
			else
				{	/* Cfa/specialize.scm 189 */
					return ((bool_t) 0);
				}
		}

	}



/* show-specialize */
	bool_t BGl_showzd2specializa7ez75zzcfa_specializa7eza7()
	{
		{	/* Cfa/specialize.scm 194 */
			{	/* Cfa/specialize.scm 195 */
				obj_t BgL_list1566z00_1663;

				{	/* Cfa/specialize.scm 195 */
					obj_t BgL_arg1573z00_1664;

					BgL_arg1573z00_1664 =
						MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
					BgL_list1566z00_1663 =
						MAKE_YOUNG_PAIR(BGl_string2084z00zzcfa_specializa7eza7,
						BgL_arg1573z00_1664);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1566z00_1663);
			}
			{
				obj_t BgL_l1352z00_1666;

				BgL_l1352z00_1666 =
					BGl_za2specializa7edzd2typesza2z75zzcfa_specializa7eza7;
			BgL_zc3z04anonymousza31574ze3z87_1667:
				if (PAIRP(BgL_l1352z00_1666))
					{	/* Cfa/specialize.scm 196 */
						{	/* Cfa/specialize.scm 197 */
							obj_t BgL_typezd2numzd2_1669;

							BgL_typezd2numzd2_1669 = CAR(BgL_l1352z00_1666);
							if (
								((long) CINT(CDR(
											((obj_t) BgL_typezd2numzd2_1669))) > ((long) 0)))
								{	/* Cfa/specialize.scm 198 */
									obj_t BgL_arg1582z00_1672;
									obj_t BgL_arg1584z00_1673;

									{	/* Cfa/specialize.scm 198 */
										obj_t BgL_arg1597z00_1679;

										BgL_arg1597z00_1679 = CAR(((obj_t) BgL_typezd2numzd2_1669));
										BgL_arg1582z00_1672 =
											BGl_shapez00zztools_shapez00(BgL_arg1597z00_1679);
									}
									BgL_arg1584z00_1673 = CDR(((obj_t) BgL_typezd2numzd2_1669));
									{	/* Cfa/specialize.scm 198 */
										obj_t BgL_list1585z00_1674;

										{	/* Cfa/specialize.scm 198 */
											obj_t BgL_arg1588z00_1675;

											{	/* Cfa/specialize.scm 198 */
												obj_t BgL_arg1589z00_1676;

												{	/* Cfa/specialize.scm 198 */
													obj_t BgL_arg1592z00_1677;

													{	/* Cfa/specialize.scm 198 */
														obj_t BgL_arg1593z00_1678;

														BgL_arg1593z00_1678 =
															MAKE_YOUNG_PAIR
															(BGl_string2085z00zzcfa_specializa7eza7, BNIL);
														BgL_arg1592z00_1677 =
															MAKE_YOUNG_PAIR(BgL_arg1584z00_1673,
															BgL_arg1593z00_1678);
													}
													BgL_arg1589z00_1676 =
														MAKE_YOUNG_PAIR
														(BGl_string2086z00zzcfa_specializa7eza7,
														BgL_arg1592z00_1677);
												}
												BgL_arg1588z00_1675 =
													MAKE_YOUNG_PAIR(BgL_arg1582z00_1672,
													BgL_arg1589z00_1676);
											}
											BgL_list1585z00_1674 =
												MAKE_YOUNG_PAIR(BGl_string2087z00zzcfa_specializa7eza7,
												BgL_arg1588z00_1675);
										}
										BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
											BgL_list1585z00_1674);
								}}
							else
								{	/* Cfa/specialize.scm 197 */
									BFALSE;
								}
						}
						{
							obj_t BgL_l1352z00_3046;

							BgL_l1352z00_3046 = CDR(BgL_l1352z00_1666);
							BgL_l1352z00_1666 = BgL_l1352z00_3046;
							goto BgL_zc3z04anonymousza31574ze3z87_1667;
						}
					}
				else
					{	/* Cfa/specialize.scm 196 */
						((bool_t) 1);
					}
			}
			{
				obj_t BgL_l1354z00_1684;

				BgL_l1354z00_1684 =
					BGl_za2specializa7edzd2eqzd2typesza2za7zzcfa_specializa7eza7;
			BgL_zc3z04anonymousza31605ze3z87_1685:
				if (PAIRP(BgL_l1354z00_1684))
					{	/* Cfa/specialize.scm 201 */
						{	/* Cfa/specialize.scm 202 */
							obj_t BgL_typezd2numzd2_1687;

							BgL_typezd2numzd2_1687 = CAR(BgL_l1354z00_1684);
							if (
								((long) CINT(CDR(
											((obj_t) BgL_typezd2numzd2_1687))) > ((long) 0)))
								{	/* Cfa/specialize.scm 203 */
									obj_t BgL_arg1613z00_1690;
									obj_t BgL_arg1624z00_1691;

									{	/* Cfa/specialize.scm 203 */
										obj_t BgL_arg1639z00_1697;

										BgL_arg1639z00_1697 = CAR(((obj_t) BgL_typezd2numzd2_1687));
										BgL_arg1613z00_1690 =
											BGl_shapez00zztools_shapez00(BgL_arg1639z00_1697);
									}
									BgL_arg1624z00_1691 = CDR(((obj_t) BgL_typezd2numzd2_1687));
									{	/* Cfa/specialize.scm 203 */
										obj_t BgL_list1625z00_1692;

										{	/* Cfa/specialize.scm 203 */
											obj_t BgL_arg1626z00_1693;

											{	/* Cfa/specialize.scm 203 */
												obj_t BgL_arg1627z00_1694;

												{	/* Cfa/specialize.scm 203 */
													obj_t BgL_arg1631z00_1695;

													{	/* Cfa/specialize.scm 203 */
														obj_t BgL_arg1634z00_1696;

														BgL_arg1634z00_1696 =
															MAKE_YOUNG_PAIR
															(BGl_string2085z00zzcfa_specializa7eza7, BNIL);
														BgL_arg1631z00_1695 =
															MAKE_YOUNG_PAIR(BgL_arg1624z00_1691,
															BgL_arg1634z00_1696);
													}
													BgL_arg1627z00_1694 =
														MAKE_YOUNG_PAIR
														(BGl_string2086z00zzcfa_specializa7eza7,
														BgL_arg1631z00_1695);
												}
												BgL_arg1626z00_1693 =
													MAKE_YOUNG_PAIR(BgL_arg1613z00_1690,
													BgL_arg1627z00_1694);
											}
											BgL_list1625z00_1692 =
												MAKE_YOUNG_PAIR(BGl_string2088z00zzcfa_specializa7eza7,
												BgL_arg1626z00_1693);
										}
										BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
											BgL_list1625z00_1692);
								}}
							else
								{	/* Cfa/specialize.scm 202 */
									BFALSE;
								}
						}
						{
							obj_t BgL_l1354z00_3068;

							BgL_l1354z00_3068 = CDR(BgL_l1354z00_1684);
							BgL_l1354z00_1684 = BgL_l1354z00_3068;
							goto BgL_zc3z04anonymousza31605ze3z87_1685;
						}
					}
				else
					{	/* Cfa/specialize.scm 201 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* install-specialized-type! */
	obj_t BGl_installzd2specializa7edzd2typez12zb5zzcfa_specializa7eza7(obj_t
		BgL_typez00_91)
	{
		{	/* Cfa/specialize.scm 218 */
			{	/* Cfa/specialize.scm 219 */
				bool_t BgL_test2207z00_3070;

				{	/* Cfa/specialize.scm 219 */
					obj_t BgL_tmpz00_3071;

					BgL_tmpz00_3071 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_typez00_91,
						BGl_za2specializa7edzd2typesza2z75zzcfa_specializa7eza7);
					BgL_test2207z00_3070 = PAIRP(BgL_tmpz00_3071);
				}
				if (BgL_test2207z00_3070)
					{	/* Cfa/specialize.scm 219 */
						return BFALSE;
					}
				else
					{	/* Cfa/specialize.scm 219 */
						{	/* Cfa/specialize.scm 220 */
							obj_t BgL_arg1652z00_1703;

							BgL_arg1652z00_1703 =
								MAKE_YOUNG_PAIR(BgL_typez00_91, BINT(((long) 0)));
							BGl_za2specializa7edzd2typesza2z75zzcfa_specializa7eza7 =
								MAKE_YOUNG_PAIR(BgL_arg1652z00_1703,
								BGl_za2specializa7edzd2typesza2z75zzcfa_specializa7eza7);
						}
						{	/* Cfa/specialize.scm 221 */
							obj_t BgL_list1653z00_1704;

							BgL_list1653z00_1704 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)), BNIL);
							BGl_za2boxedzd2eqzf3za2z21zzcfa_specializa7eza7 =
								BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 5)),
								BgL_list1653z00_1704);
						}
						{	/* Cfa/specialize.scm 222 */
							obj_t BgL_list1654z00_1705;

							BgL_list1654z00_1705 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)), BNIL);
							return (BGl_za2czd2eqzf3za2z21zzcfa_specializa7eza7 =
								BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 6)),
									BgL_list1654z00_1705), BUNSPEC);
		}}}}

	}



/* add-specialized-type! */
	obj_t BGl_addzd2specializa7edzd2typez12zb5zzcfa_specializa7eza7(obj_t
		BgL_typez00_92)
	{
		{	/* Cfa/specialize.scm 227 */
			{	/* Cfa/specialize.scm 228 */
				obj_t BgL_cellz00_1707;

				BgL_cellz00_1707 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_typez00_92,
					BGl_za2specializa7edzd2typesza2z75zzcfa_specializa7eza7);
				if (PAIRP(BgL_cellz00_1707))
					{	/* Cfa/specialize.scm 232 */
						long BgL_arg1664z00_1709;

						BgL_arg1664z00_1709 =
							(((long) 1) + (long) CINT(CDR(BgL_cellz00_1707)));
						{	/* Cfa/specialize.scm 232 */
							obj_t BgL_tmpz00_3091;

							BgL_tmpz00_3091 = BINT(BgL_arg1664z00_1709);
							return SET_CDR(BgL_cellz00_1707, BgL_tmpz00_3091);
						}
					}
				else
					{	/* Cfa/specialize.scm 229 */
						return
							BGl_internalzd2errorzd2zztools_errorz00
							(BGl_string2089z00zzcfa_specializa7eza7,
							BGl_string2090z00zzcfa_specializa7eza7,
							BGl_shapez00zztools_shapez00(BgL_typez00_92));
					}
			}
		}

	}



/* add-specialized-eq-type! */
	obj_t BGl_addzd2specializa7edzd2eqzd2typez12z67zzcfa_specializa7eza7(obj_t
		BgL_typez00_93)
	{
		{	/* Cfa/specialize.scm 237 */
			{	/* Cfa/specialize.scm 238 */
				obj_t BgL_cellz00_1712;

				BgL_cellz00_1712 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_typez00_93,
					BGl_za2specializa7edzd2eqzd2typesza2za7zzcfa_specializa7eza7);
				if (PAIRP(BgL_cellz00_1712))
					{	/* Cfa/specialize.scm 242 */
						long BgL_arg1672z00_1714;

						BgL_arg1672z00_1714 =
							(((long) 1) + (long) CINT(CDR(BgL_cellz00_1712)));
						{	/* Cfa/specialize.scm 242 */
							obj_t BgL_tmpz00_3102;

							BgL_tmpz00_3102 = BINT(BgL_arg1672z00_1714);
							return SET_CDR(BgL_cellz00_1712, BgL_tmpz00_3102);
						}
					}
				else
					{	/* Cfa/specialize.scm 241 */
						obj_t BgL_arg1685z00_1716;

						BgL_arg1685z00_1716 =
							MAKE_YOUNG_PAIR(BgL_typez00_93, BINT(((long) 1)));
						return (BGl_za2specializa7edzd2eqzd2typesza2za7zzcfa_specializa7eza7
							=
							MAKE_YOUNG_PAIR(BgL_arg1685z00_1716,
								BGl_za2specializa7edzd2eqzd2typesza2za7zzcfa_specializa7eza7),
							BUNSPEC);
					}
			}
		}

	}



/* install-specialize! */
	obj_t BGl_installzd2specializa7ez12z67zzcfa_specializa7eza7(obj_t
		BgL_specz00_94)
	{
		{	/* Cfa/specialize.scm 247 */
			{	/* Cfa/specialize.scm 248 */
				obj_t BgL_genz00_1717;

				{	/* Cfa/specialize.scm 248 */
					obj_t BgL_pairz00_2432;

					BgL_pairz00_2432 = CDR(((obj_t) BgL_specz00_94));
					BgL_genz00_1717 = CAR(BgL_pairz00_2432);
				}
				{	/* Cfa/specialize.scm 248 */
					obj_t BgL_fixesz00_1718;

					{	/* Cfa/specialize.scm 249 */
						obj_t BgL_pairz00_2436;

						BgL_pairz00_2436 = CDR(((obj_t) BgL_specz00_94));
						BgL_fixesz00_1718 = CDR(BgL_pairz00_2436);
					}
					{	/* Cfa/specialize.scm 249 */
						obj_t BgL_genzd2idzd2_1719;

						BgL_genzd2idzd2_1719 = CAR(((obj_t) BgL_genz00_1717));
						{	/* Cfa/specialize.scm 250 */
							obj_t BgL_genzd2modzd2_1720;

							{	/* Cfa/specialize.scm 251 */
								obj_t BgL_pairz00_2441;

								BgL_pairz00_2441 = CDR(((obj_t) BgL_genz00_1717));
								BgL_genzd2modzd2_1720 = CAR(BgL_pairz00_2441);
							}
							{	/* Cfa/specialize.scm 251 */
								obj_t BgL_genericz00_1721;

								BgL_genericz00_1721 =
									BGl_findzd2globalzf2modulez20zzast_envz00
									(BgL_genzd2idzd2_1719, BgL_genzd2modzd2_1720);
								{	/* Cfa/specialize.scm 252 */

									if (BGl_isazf3zf3zz__objectz00(BgL_genericz00_1721,
											BGl_globalz00zzast_varz00))
										{
											obj_t BgL_fixesz00_1725;
											obj_t BgL_resz00_1726;

											BgL_fixesz00_1725 = BgL_fixesz00_1718;
											BgL_resz00_1726 = BNIL;
										BgL_zc3z04anonymousza31687ze3z87_1727:
											if (NULLP(BgL_fixesz00_1725))
												{	/* Cfa/specialize.scm 256 */
													if (BGl_isazf3zf3zz__objectz00(BgL_genericz00_1721,
															BGl_specializa7edzd2globalz75zzcfa_specializa7eza7))
														{
															obj_t BgL_auxz00_3133;
															BgL_specializa7edzd2globalz75_bglt
																BgL_auxz00_3126;
															{	/* Cfa/specialize.scm 259 */
																obj_t BgL_arg1692z00_1731;

																{
																	BgL_specializa7edzd2globalz75_bglt
																		BgL_auxz00_3134;
																	{
																		obj_t BgL_auxz00_3135;

																		{	/* Cfa/specialize.scm 259 */
																			BgL_objectz00_bglt BgL_tmpz00_3136;

																			BgL_tmpz00_3136 =
																				((BgL_objectz00_bglt)
																				((BgL_globalz00_bglt)
																					BgL_genericz00_1721));
																			BgL_auxz00_3135 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_3136);
																		}
																		BgL_auxz00_3134 =
																			((BgL_specializa7edzd2globalz75_bglt)
																			BgL_auxz00_3135);
																	}
																	BgL_arg1692z00_1731 =
																		(((BgL_specializa7edzd2globalz75_bglt)
																			COBJECT(BgL_auxz00_3134))->BgL_fixz00);
																}
																BgL_auxz00_3133 =
																	BGl_appendzd221011zd2zzcfa_specializa7eza7
																	(BgL_arg1692z00_1731, BgL_resz00_1726);
															}
															{
																obj_t BgL_auxz00_3127;

																{	/* Cfa/specialize.scm 259 */
																	BgL_objectz00_bglt BgL_tmpz00_3128;

																	BgL_tmpz00_3128 =
																		((BgL_objectz00_bglt)
																		((BgL_globalz00_bglt) BgL_genericz00_1721));
																	BgL_auxz00_3127 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_3128);
																}
																BgL_auxz00_3126 =
																	((BgL_specializa7edzd2globalz75_bglt)
																	BgL_auxz00_3127);
															}
															return
																((((BgL_specializa7edzd2globalz75_bglt)
																		COBJECT(BgL_auxz00_3126))->BgL_fixz00) =
																((obj_t) BgL_auxz00_3133), BUNSPEC);
														}
													else
														{	/* Cfa/specialize.scm 257 */
															{	/* Cfa/specialize.scm 261 */
																BgL_specializa7edzd2globalz75_bglt
																	BgL_wide1150z00_1734;
																BgL_wide1150z00_1734 =
																	((BgL_specializa7edzd2globalz75_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_specializa7edzd2globalz75_bgl))));
																{	/* Cfa/specialize.scm 261 */
																	obj_t BgL_auxz00_3149;
																	BgL_objectz00_bglt BgL_tmpz00_3145;

																	BgL_auxz00_3149 =
																		((obj_t) BgL_wide1150z00_1734);
																	BgL_tmpz00_3145 =
																		((BgL_objectz00_bglt)
																		((BgL_globalz00_bglt)
																			((BgL_globalz00_bglt)
																				BgL_genericz00_1721)));
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3145,
																		BgL_auxz00_3149);
																}
																((BgL_objectz00_bglt)
																	((BgL_globalz00_bglt)
																		((BgL_globalz00_bglt)
																			BgL_genericz00_1721)));
																{	/* Cfa/specialize.scm 261 */
																	long BgL_arg1695z00_1735;

																	{	/* Cfa/specialize.scm 261 */
																		long BgL_res2041z00_2449;

																		BgL_res2041z00_2449 =
																			BGL_CLASS_INDEX
																			(BGl_specializa7edzd2globalz75zzcfa_specializa7eza7);
																		BgL_arg1695z00_1735 = BgL_res2041z00_2449;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt)
																			((BgL_globalz00_bglt)
																				((BgL_globalz00_bglt)
																					BgL_genericz00_1721))),
																		BgL_arg1695z00_1735);
																}
																((BgL_globalz00_bglt)
																	((BgL_globalz00_bglt)
																		((BgL_globalz00_bglt)
																			BgL_genericz00_1721)));
															}
															{
																BgL_specializa7edzd2globalz75_bglt
																	BgL_auxz00_3163;
																{
																	obj_t BgL_auxz00_3164;

																	{	/* Cfa/specialize.scm 262 */
																		BgL_objectz00_bglt BgL_tmpz00_3165;

																		BgL_tmpz00_3165 =
																			((BgL_objectz00_bglt)
																			((BgL_globalz00_bglt)
																				((BgL_globalz00_bglt)
																					BgL_genericz00_1721)));
																		BgL_auxz00_3164 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_3165);
																	}
																	BgL_auxz00_3163 =
																		((BgL_specializa7edzd2globalz75_bglt)
																		BgL_auxz00_3164);
																}
																((((BgL_specializa7edzd2globalz75_bglt)
																			COBJECT(BgL_auxz00_3163))->BgL_fixz00) =
																	((obj_t) BgL_resz00_1726), BUNSPEC);
															}
															((BgL_globalz00_bglt)
																((BgL_globalz00_bglt) BgL_genericz00_1721));
															return
																(BGl_za2specializa7eza2za7zzcfa_specializa7eza7
																=
																MAKE_YOUNG_PAIR(BgL_genericz00_1721,
																	BGl_za2specializa7eza2za7zzcfa_specializa7eza7),
																BUNSPEC);
														}
												}
											else
												{	/* Cfa/specialize.scm 264 */
													obj_t BgL_fixz00_1737;

													BgL_fixz00_1737 = CAR(((obj_t) BgL_fixesz00_1725));
													{	/* Cfa/specialize.scm 264 */
														obj_t BgL_idz00_1738;

														BgL_idz00_1738 = CAR(((obj_t) BgL_fixz00_1737));
														{	/* Cfa/specialize.scm 265 */
															obj_t BgL_modz00_1739;

															{	/* Cfa/specialize.scm 266 */
																obj_t BgL_pairz00_2458;

																BgL_pairz00_2458 =
																	CDR(((obj_t) BgL_fixz00_1737));
																BgL_modz00_1739 = CAR(BgL_pairz00_2458);
															}
															{	/* Cfa/specialize.scm 266 */
																obj_t BgL_globalz00_1740;

																BgL_globalz00_1740 =
																	BGl_findzd2globalzf2modulez20zzast_envz00
																	(BgL_idz00_1738, BgL_modz00_1739);
																{	/* Cfa/specialize.scm 267 */

																	if (BGl_isazf3zf3zz__objectz00
																		(BgL_globalz00_1740,
																			BGl_globalz00zzast_varz00))
																		{	/* Cfa/specialize.scm 269 */
																			BgL_valuez00_bglt BgL_valz00_1742;

																			BgL_valz00_1742 =
																				(((BgL_variablez00_bglt) COBJECT(
																						((BgL_variablez00_bglt)
																							((BgL_globalz00_bglt)
																								BgL_globalz00_1740))))->
																				BgL_valuez00);
																			{	/* Cfa/specialize.scm 271 */
																				bool_t BgL_test2214z00_3188;

																				{	/* Cfa/specialize.scm 271 */
																					bool_t BgL_test2215z00_3189;

																					{	/* Cfa/specialize.scm 271 */
																						bool_t BgL_res2043z00_2461;

																						BgL_res2043z00_2461 =
																							BGl_isazf3zf3zz__objectz00(
																							((obj_t) BgL_valz00_1742),
																							BGl_sfunz00zzast_varz00);
																						BgL_test2215z00_3189 =
																							BgL_res2043z00_2461;
																					}
																					if (BgL_test2215z00_3189)
																						{	/* Cfa/specialize.scm 271 */
																							obj_t BgL_tmpz00_3192;

																							BgL_tmpz00_3192 =
																								(((BgL_sfunz00_bglt) COBJECT(
																										((BgL_sfunz00_bglt)
																											BgL_valz00_1742)))->
																								BgL_argsz00);
																							BgL_test2214z00_3188 =
																								PAIRP(BgL_tmpz00_3192);
																						}
																					else
																						{	/* Cfa/specialize.scm 271 */
																							BgL_test2214z00_3188 =
																								((bool_t) 0);
																						}
																				}
																				if (BgL_test2214z00_3188)
																					{	/* Cfa/specialize.scm 272 */
																						obj_t BgL_typez00_1746;

																						{	/* Cfa/specialize.scm 272 */
																							obj_t BgL_vz00_1750;

																							{	/* Cfa/specialize.scm 272 */
																								obj_t BgL_pairz00_2465;

																								BgL_pairz00_2465 =
																									(((BgL_sfunz00_bglt) COBJECT(
																											((BgL_sfunz00_bglt)
																												BgL_valz00_1742)))->
																									BgL_argsz00);
																								BgL_vz00_1750 =
																									CAR(BgL_pairz00_2465);
																							}
																							if (BGl_isazf3zf3zz__objectz00
																								(BgL_vz00_1750,
																									BGl_typez00zztype_typez00))
																								{	/* Cfa/specialize.scm 274 */
																									BgL_typez00_1746 =
																										BgL_vz00_1750;
																								}
																							else
																								{	/* Cfa/specialize.scm 274 */
																									if (BGl_isazf3zf3zz__objectz00
																										(BgL_vz00_1750,
																											BGl_localz00zzast_varz00))
																										{	/* Cfa/specialize.scm 276 */
																											BgL_typez00_1746 =
																												((obj_t)
																												(((BgL_variablez00_bglt)
																														COBJECT((
																																(BgL_variablez00_bglt)
																																((BgL_localz00_bglt) BgL_vz00_1750))))->BgL_typez00));
																										}
																									else
																										{	/* Cfa/specialize.scm 282 */
																											obj_t BgL_arg1719z00_1753;

																											BgL_arg1719z00_1753 =
																												(((BgL_variablez00_bglt)
																													COBJECT((
																															(BgL_variablez00_bglt)
																															((BgL_globalz00_bglt) BgL_globalz00_1740))))->BgL_idz00);
																											BgL_typez00_1746 =
																												BGl_internalzd2errorzd2zztools_errorz00
																												(BGl_string2091z00zzcfa_specializa7eza7,
																												BGl_string2092z00zzcfa_specializa7eza7,
																												BgL_arg1719z00_1753);
																										}
																								}
																						}
																						BGl_installzd2specializa7edzd2typez12zb5zzcfa_specializa7eza7
																							(BgL_typez00_1746);
																						{	/* Cfa/specialize.scm 284 */
																							obj_t BgL_arg1707z00_1747;
																							obj_t BgL_arg1708z00_1748;

																							BgL_arg1707z00_1747 =
																								CDR(
																								((obj_t) BgL_fixesz00_1725));
																							{	/* Cfa/specialize.scm 285 */
																								obj_t BgL_arg1711z00_1749;

																								BgL_arg1711z00_1749 =
																									MAKE_YOUNG_PAIR
																									(BgL_typez00_1746,
																									BgL_globalz00_1740);
																								BgL_arg1708z00_1748 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1711z00_1749,
																									BgL_resz00_1726);
																							}
																							{
																								obj_t BgL_resz00_3217;
																								obj_t BgL_fixesz00_3216;

																								BgL_fixesz00_3216 =
																									BgL_arg1707z00_1747;
																								BgL_resz00_3217 =
																									BgL_arg1708z00_1748;
																								BgL_resz00_1726 =
																									BgL_resz00_3217;
																								BgL_fixesz00_1725 =
																									BgL_fixesz00_3216;
																								goto
																									BgL_zc3z04anonymousza31687ze3z87_1727;
																							}
																						}
																					}
																				else
																					{	/* Cfa/specialize.scm 286 */
																						bool_t BgL_test2218z00_3218;

																						{	/* Cfa/specialize.scm 286 */
																							bool_t BgL_test2219z00_3219;

																							{	/* Cfa/specialize.scm 286 */
																								bool_t BgL_res2047z00_2471;

																								BgL_res2047z00_2471 =
																									BGl_isazf3zf3zz__objectz00(
																									((obj_t) BgL_valz00_1742),
																									BGl_cfunz00zzast_varz00);
																								BgL_test2219z00_3219 =
																									BgL_res2047z00_2471;
																							}
																							if (BgL_test2219z00_3219)
																								{	/* Cfa/specialize.scm 286 */
																									obj_t BgL_tmpz00_3222;

																									BgL_tmpz00_3222 =
																										(((BgL_cfunz00_bglt)
																											COBJECT((
																													(BgL_cfunz00_bglt)
																													BgL_valz00_1742)))->
																										BgL_argszd2typezd2);
																									BgL_test2218z00_3218 =
																										PAIRP(BgL_tmpz00_3222);
																								}
																							else
																								{	/* Cfa/specialize.scm 286 */
																									BgL_test2218z00_3218 =
																										((bool_t) 0);
																								}
																						}
																						if (BgL_test2218z00_3218)
																							{	/* Cfa/specialize.scm 287 */
																								obj_t BgL_typez00_1758;

																								{	/* Cfa/specialize.scm 287 */
																									obj_t BgL_pairz00_2475;

																									BgL_pairz00_2475 =
																										(((BgL_cfunz00_bglt)
																											COBJECT((
																													(BgL_cfunz00_bglt)
																													BgL_valz00_1742)))->
																										BgL_argszd2typezd2);
																									BgL_typez00_1758 =
																										CAR(BgL_pairz00_2475);
																								}
																								BGl_installzd2specializa7edzd2typez12zb5zzcfa_specializa7eza7
																									(BgL_typez00_1758);
																								{	/* Cfa/specialize.scm 289 */
																									obj_t BgL_arg1729z00_1759;
																									obj_t BgL_arg1731z00_1760;

																									BgL_arg1729z00_1759 =
																										CDR(
																										((obj_t)
																											BgL_fixesz00_1725));
																									{	/* Cfa/specialize.scm 290 */
																										obj_t BgL_arg1732z00_1761;

																										BgL_arg1732z00_1761 =
																											MAKE_YOUNG_PAIR
																											(BgL_typez00_1758,
																											BgL_globalz00_1740);
																										BgL_arg1731z00_1760 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1732z00_1761,
																											BgL_resz00_1726);
																									}
																									{
																										obj_t BgL_resz00_3235;
																										obj_t BgL_fixesz00_3234;

																										BgL_fixesz00_3234 =
																											BgL_arg1729z00_1759;
																										BgL_resz00_3235 =
																											BgL_arg1731z00_1760;
																										BgL_resz00_1726 =
																											BgL_resz00_3235;
																										BgL_fixesz00_1725 =
																											BgL_fixesz00_3234;
																										goto
																											BgL_zc3z04anonymousza31687ze3z87_1727;
																									}
																								}
																							}
																						else
																							{	/* Cfa/specialize.scm 286 */
																								return BFALSE;
																							}
																					}
																			}
																		}
																	else
																		{	/* Cfa/specialize.scm 268 */
																			{	/* Cfa/specialize.scm 295 */
																				obj_t BgL_arg1740z00_1767;

																				BgL_arg1740z00_1767 =
																					MAKE_YOUNG_PAIR(BgL_idz00_1738,
																					BgL_modz00_1739);
																				{	/* Cfa/specialize.scm 292 */
																					obj_t BgL_list1741z00_1768;

																					{	/* Cfa/specialize.scm 292 */
																						obj_t BgL_arg1742z00_1769;

																						{	/* Cfa/specialize.scm 292 */
																							obj_t BgL_arg1743z00_1770;

																							{	/* Cfa/specialize.scm 292 */
																								obj_t BgL_arg1744z00_1771;

																								BgL_arg1744z00_1771 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1740z00_1767, BNIL);
																								BgL_arg1743z00_1770 =
																									MAKE_YOUNG_PAIR
																									(BGl_string2093z00zzcfa_specializa7eza7,
																									BgL_arg1744z00_1771);
																							}
																							BgL_arg1742z00_1769 =
																								MAKE_YOUNG_PAIR
																								(BGl_string2094z00zzcfa_specializa7eza7,
																								BgL_arg1743z00_1770);
																						}
																						BgL_list1741z00_1768 =
																							MAKE_YOUNG_PAIR
																							(BGl_string2095z00zzcfa_specializa7eza7,
																							BgL_arg1742z00_1769);
																					}
																					BGl_warningz00zz__errorz00
																						(BgL_list1741z00_1768);
																				}
																			}
																			{	/* Cfa/specialize.scm 296 */
																				obj_t BgL_arg1745z00_1772;

																				BgL_arg1745z00_1772 =
																					CDR(((obj_t) BgL_fixesz00_1725));
																				{
																					obj_t BgL_fixesz00_3244;

																					BgL_fixesz00_3244 =
																						BgL_arg1745z00_1772;
																					BgL_fixesz00_1725 = BgL_fixesz00_3244;
																					goto
																						BgL_zc3z04anonymousza31687ze3z87_1727;
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
										{	/* Cfa/specialize.scm 300 */
											obj_t BgL_arg1746z00_1774;

											BgL_arg1746z00_1774 =
												MAKE_YOUNG_PAIR(BgL_genzd2idzd2_1719,
												BgL_genzd2modzd2_1720);
											{	/* Cfa/specialize.scm 297 */
												obj_t BgL_list1747z00_1775;

												{	/* Cfa/specialize.scm 297 */
													obj_t BgL_arg1754z00_1776;

													{	/* Cfa/specialize.scm 297 */
														obj_t BgL_arg1755z00_1777;

														{	/* Cfa/specialize.scm 297 */
															obj_t BgL_arg1756z00_1778;

															BgL_arg1756z00_1778 =
																MAKE_YOUNG_PAIR(BgL_arg1746z00_1774, BNIL);
															BgL_arg1755z00_1777 =
																MAKE_YOUNG_PAIR
																(BGl_string2093z00zzcfa_specializa7eza7,
																BgL_arg1756z00_1778);
														}
														BgL_arg1754z00_1776 =
															MAKE_YOUNG_PAIR
															(BGl_string2094z00zzcfa_specializa7eza7,
															BgL_arg1755z00_1777);
													}
													BgL_list1747z00_1775 =
														MAKE_YOUNG_PAIR
														(BGl_string2095z00zzcfa_specializa7eza7,
														BgL_arg1754z00_1776);
												}
												return BGl_warningz00zz__errorz00(BgL_list1747z00_1775);
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



/* uninstall-specializes! */
	obj_t BGl_uninstallzd2specializa7esz12z67zzcfa_specializa7eza7()
	{
		{	/* Cfa/specialize.scm 305 */
			BGl_za2specializa7edzd2typesza2z75zzcfa_specializa7eza7 = BNIL;
			{
				obj_t BgL_l1356z00_1780;

				BgL_l1356z00_1780 = BGl_za2specializa7eza2za7zzcfa_specializa7eza7;
			BgL_zc3z04anonymousza31757ze3z87_1781:
				if (PAIRP(BgL_l1356z00_1780))
					{	/* Cfa/specialize.scm 307 */
						{	/* Cfa/specialize.scm 307 */
							obj_t BgL_oz00_1783;

							BgL_oz00_1783 = CAR(BgL_l1356z00_1780);
							{	/* Cfa/specialize.scm 307 */
								long BgL_arg1759z00_1785;

								{	/* Cfa/specialize.scm 307 */
									obj_t BgL_arg1760z00_1786;

									{	/* Cfa/specialize.scm 307 */
										obj_t BgL_arg1761z00_1787;

										{	/* Cfa/specialize.scm 307 */
											long BgL_arg1816z00_2481;

											{	/* Cfa/specialize.scm 307 */
												long BgL_arg1817z00_2482;

												{	/* Cfa/specialize.scm 307 */
													long BgL_res2050z00_2484;

													BgL_res2050z00_2484 =
														BGL_OBJECT_CLASS_NUM(
														((BgL_objectz00_bglt) BgL_oz00_1783));
													BgL_arg1817z00_2482 = BgL_res2050z00_2484;
												}
												BgL_arg1816z00_2481 =
													(BgL_arg1817z00_2482 - OBJECT_TYPE);
											}
											BgL_arg1761z00_1787 =
												VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
												BgL_arg1816z00_2481);
										}
										BgL_arg1760z00_1786 =
											BGl_classzd2superzd2zz__objectz00(BgL_arg1761z00_1787);
									}
									{	/* Cfa/specialize.scm 307 */
										long BgL_res2052z00_2491;

										{	/* Cfa/specialize.scm 307 */
											obj_t BgL_tmpz00_3259;

											BgL_tmpz00_3259 = ((obj_t) BgL_arg1760z00_1786);
											BgL_res2052z00_2491 = BGL_CLASS_INDEX(BgL_tmpz00_3259);
										}
										BgL_arg1759z00_1785 = BgL_res2052z00_2491;
								}}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_oz00_1783), BgL_arg1759z00_1785);
							}
							{	/* Cfa/specialize.scm 307 */
								BgL_objectz00_bglt BgL_tmpz00_3264;

								BgL_tmpz00_3264 = ((BgL_objectz00_bglt) BgL_oz00_1783);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3264, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_oz00_1783);
							BgL_oz00_1783;
						}
						{
							obj_t BgL_l1356z00_3268;

							BgL_l1356z00_3268 = CDR(BgL_l1356z00_1780);
							BgL_l1356z00_1780 = BgL_l1356z00_3268;
							goto BgL_zc3z04anonymousza31757ze3z87_1781;
						}
					}
				else
					{	/* Cfa/specialize.scm 307 */
						((bool_t) 1);
					}
			}
			return (BGl_za2specializa7eza2za7zzcfa_specializa7eza7 = BNIL, BUNSPEC);
		}

	}



/* patch-tree! */
	bool_t BGl_patchzd2treez12zc0zzcfa_specializa7eza7(obj_t BgL_globalsz00_95)
	{
		{	/* Cfa/specialize.scm 313 */
			{
				obj_t BgL_l1358z00_1791;

				BgL_l1358z00_1791 = BgL_globalsz00_95;
			BgL_zc3z04anonymousza31769ze3z87_1792:
				if (PAIRP(BgL_l1358z00_1791))
					{	/* Cfa/specialize.scm 314 */
						BGl_patchzd2funz12zc0zzcfa_specializa7eza7(CAR(BgL_l1358z00_1791));
						{
							obj_t BgL_l1358z00_3274;

							BgL_l1358z00_3274 = CDR(BgL_l1358z00_1791);
							BgL_l1358z00_1791 = BgL_l1358z00_3274;
							goto BgL_zc3z04anonymousza31769ze3z87_1792;
						}
					}
				else
					{	/* Cfa/specialize.scm 314 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* patch-fun! */
	obj_t BGl_patchzd2funz12zc0zzcfa_specializa7eza7(obj_t BgL_variablez00_96)
	{
		{	/* Cfa/specialize.scm 319 */
			{	/* Cfa/specialize.scm 320 */
				BgL_valuez00_bglt BgL_funz00_1797;

				BgL_funz00_1797 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_variablez00_96)))->BgL_valuez00);
				{	/* Cfa/specialize.scm 321 */
					obj_t BgL_arg1778z00_1798;

					{	/* Cfa/specialize.scm 321 */
						obj_t BgL_arg1779z00_1799;

						BgL_arg1779z00_1799 =
							(((BgL_sfunz00_bglt) COBJECT(
									((BgL_sfunz00_bglt) BgL_funz00_1797)))->BgL_bodyz00);
						BgL_arg1778z00_1798 =
							BGl_patchz12z12zzcfa_specializa7eza7(
							((BgL_nodez00_bglt) BgL_arg1779z00_1799));
					}
					return
						((((BgL_sfunz00_bglt) COBJECT(
									((BgL_sfunz00_bglt) BgL_funz00_1797)))->BgL_bodyz00) =
						((obj_t) BgL_arg1778z00_1798), BUNSPEC);
				}
			}
		}

	}



/* patch*! */
	obj_t BGl_patchza2z12zb0zzcfa_specializa7eza7(obj_t BgL_nodeza2za2_119)
	{
		{	/* Cfa/specialize.scm 526 */
			{
				obj_t BgL_nodeza2za2_1801;

				BgL_nodeza2za2_1801 = BgL_nodeza2za2_119;
			BgL_zc3z04anonymousza31780ze3z87_1802:
				if (NULLP(BgL_nodeza2za2_1801))
					{	/* Cfa/specialize.scm 528 */
						return CNST_TABLE_REF(((long) 7));
					}
				else
					{	/* Cfa/specialize.scm 528 */
						{	/* Cfa/specialize.scm 531 */
							obj_t BgL_arg1782z00_1804;

							{	/* Cfa/specialize.scm 531 */
								obj_t BgL_arg1784z00_1805;

								BgL_arg1784z00_1805 = CAR(((obj_t) BgL_nodeza2za2_1801));
								BgL_arg1782z00_1804 =
									BGl_patchz12z12zzcfa_specializa7eza7(
									((BgL_nodez00_bglt) BgL_arg1784z00_1805));
							}
							{	/* Cfa/specialize.scm 531 */
								obj_t BgL_tmpz00_3291;

								BgL_tmpz00_3291 = ((obj_t) BgL_nodeza2za2_1801);
								SET_CAR(BgL_tmpz00_3291, BgL_arg1782z00_1804);
							}
						}
						{	/* Cfa/specialize.scm 532 */
							obj_t BgL_arg1790z00_1806;

							BgL_arg1790z00_1806 = CDR(((obj_t) BgL_nodeza2za2_1801));
							{
								obj_t BgL_nodeza2za2_3296;

								BgL_nodeza2za2_3296 = BgL_arg1790z00_1806;
								BgL_nodeza2za2_1801 = BgL_nodeza2za2_3296;
								goto BgL_zc3z04anonymousza31780ze3z87_1802;
							}
						}
					}
			}
		}

	}



/* specialize-app! */
	BgL_appz00_bglt
		BGl_specializa7ezd2appz12z67zzcfa_specializa7eza7(BgL_appz00_bglt
		BgL_nodez00_121)
	{
		{	/* Cfa/specialize.scm 551 */
			if (NULLP((((BgL_appz00_bglt) COBJECT(BgL_nodez00_121))->BgL_argsz00)))
				{	/* Cfa/specialize.scm 560 */
					return BgL_nodez00_121;
				}
			else
				{	/* Cfa/specialize.scm 564 */
					obj_t BgL_typez00_1812;

					BgL_typez00_1812 =
						BGl_normaliza7ezd2getzd2typeze70z40zzcfa_specializa7eza7(CAR(
							(((BgL_appz00_bglt) COBJECT(BgL_nodez00_121))->BgL_argsz00)));
					{	/* Cfa/specialize.scm 564 */
						BgL_variablez00_bglt BgL_gloz00_1813;

						BgL_gloz00_1813 =
							(((BgL_varz00_bglt) COBJECT(
									(((BgL_appz00_bglt) COBJECT(BgL_nodez00_121))->BgL_funz00)))->
							BgL_variablez00);
						{	/* Cfa/specialize.scm 565 */
							obj_t BgL_specz00_1814;

							{	/* Cfa/specialize.scm 566 */
								obj_t BgL_arg1828z00_1835;

								{
									BgL_specializa7edzd2globalz75_bglt BgL_auxz00_3305;

									{
										obj_t BgL_auxz00_3306;

										{	/* Cfa/specialize.scm 566 */
											BgL_objectz00_bglt BgL_tmpz00_3307;

											BgL_tmpz00_3307 =
												((BgL_objectz00_bglt)
												((BgL_globalz00_bglt) BgL_gloz00_1813));
											BgL_auxz00_3306 = BGL_OBJECT_WIDENING(BgL_tmpz00_3307);
										}
										BgL_auxz00_3305 =
											((BgL_specializa7edzd2globalz75_bglt) BgL_auxz00_3306);
									}
									BgL_arg1828z00_1835 =
										(((BgL_specializa7edzd2globalz75_bglt)
											COBJECT(BgL_auxz00_3305))->BgL_fixz00);
								}
								BgL_specz00_1814 =
									BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_typez00_1812,
									BgL_arg1828z00_1835);
							}
							{	/* Cfa/specialize.scm 566 */

								if (PAIRP(BgL_specz00_1814))
									{	/* Cfa/specialize.scm 568 */
										obj_t BgL_g1173z00_1816;

										BgL_g1173z00_1816 =
											CDR(
											(((BgL_appz00_bglt) COBJECT(BgL_nodez00_121))->
												BgL_argsz00));
										{
											obj_t BgL_argsz00_1818;

											BgL_argsz00_1818 = BgL_g1173z00_1816;
										BgL_zc3z04anonymousza31799ze3z87_1819:
											if (NULLP(BgL_argsz00_1818))
												{	/* Cfa/specialize.scm 570 */
													BGl_addzd2specializa7edzd2typez12zb5zzcfa_specializa7eza7
														(BgL_typez00_1812);
													{	/* Cfa/specialize.scm 572 */
														BgL_varz00_bglt BgL_arg1801z00_1821;
														obj_t BgL_arg1808z00_1822;

														BgL_arg1801z00_1821 =
															(((BgL_appz00_bglt) COBJECT(BgL_nodez00_121))->
															BgL_funz00);
														BgL_arg1808z00_1822 =
															CDR(((obj_t) BgL_specz00_1814));
														((((BgL_varz00_bglt) COBJECT(BgL_arg1801z00_1821))->
																BgL_variablez00) =
															((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
																	BgL_arg1808z00_1822)), BUNSPEC);
													}
													{	/* Cfa/specialize.scm 573 */
														BgL_typez00_bglt BgL_ntz00_1823;

														BgL_ntz00_1823 =
															(((BgL_variablez00_bglt) COBJECT(
																	(((BgL_varz00_bglt) COBJECT(
																				(((BgL_appz00_bglt)
																						COBJECT(BgL_nodez00_121))->
																					BgL_funz00)))->BgL_variablez00)))->
															BgL_typez00);
														{	/* Cfa/specialize.scm 574 */
															BgL_typez00_bglt BgL_arg1809z00_1824;

															BgL_arg1809z00_1824 =
																BGl_strictzd2nodezd2typez00zzast_nodez00
																(BgL_ntz00_1823,
																((BgL_typez00_bglt) BgL_typez00_1812));
															((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																				BgL_nodez00_121)))->BgL_typez00) =
																((BgL_typez00_bglt) BgL_arg1809z00_1824),
																BUNSPEC);
														}
													}
													return BgL_nodez00_121;
												}
											else
												{	/* Cfa/specialize.scm 576 */
													bool_t BgL_test2226z00_3333;

													{	/* Cfa/specialize.scm 576 */
														obj_t BgL_arg1825z00_1831;

														{	/* Cfa/specialize.scm 576 */
															obj_t BgL_arg1826z00_1832;

															BgL_arg1826z00_1832 =
																CAR(((obj_t) BgL_argsz00_1818));
															BgL_arg1825z00_1831 =
																BGl_normaliza7ezd2getzd2typeze70z40zzcfa_specializa7eza7
																(BgL_arg1826z00_1832);
														}
														BgL_test2226z00_3333 =
															(BgL_arg1825z00_1831 == BgL_typez00_1812);
													}
													if (BgL_test2226z00_3333)
														{	/* Cfa/specialize.scm 577 */
															obj_t BgL_arg1824z00_1830;

															BgL_arg1824z00_1830 =
																CDR(((obj_t) BgL_argsz00_1818));
															{
																obj_t BgL_argsz00_3340;

																BgL_argsz00_3340 = BgL_arg1824z00_1830;
																BgL_argsz00_1818 = BgL_argsz00_3340;
																goto BgL_zc3z04anonymousza31799ze3z87_1819;
															}
														}
													else
														{	/* Cfa/specialize.scm 576 */
															return
																BGl_specializa7ezd2eqzf3z86zzcfa_specializa7eza7
																(BgL_nodez00_121);
														}
												}
										}
									}
								else
									{	/* Cfa/specialize.scm 567 */
										return
											BGl_specializa7ezd2eqzf3z86zzcfa_specializa7eza7
											(BgL_nodez00_121);
									}
							}
						}
					}
				}
		}

	}



/* normalize-get-type~0 */
	obj_t BGl_normaliza7ezd2getzd2typeze70z40zzcfa_specializa7eza7(obj_t
		BgL_valz00_1840)
	{
		{	/* Cfa/specialize.scm 557 */
			{	/* Cfa/specialize.scm 554 */
				BgL_typez00_bglt BgL_tyz00_1842;

				BgL_tyz00_1842 =
					BGl_getzd2typezd2zztype_typeofz00(
					((BgL_nodez00_bglt) BgL_valz00_1840), ((bool_t) 0));
				if ((((obj_t) BgL_tyz00_1842) == BGl_za2intza2z00zztype_cachez00))
					{	/* Cfa/specialize.scm 555 */
						return BGl_za2longza2z00zztype_cachez00;
					}
				else
					{	/* Cfa/specialize.scm 555 */
						return ((obj_t) BgL_tyz00_1842);
					}
			}
		}

	}



/* specialize-eq? */
	BgL_appz00_bglt
		BGl_specializa7ezd2eqzf3z86zzcfa_specializa7eza7(BgL_appz00_bglt
		BgL_nodez00_122)
	{
		{	/* Cfa/specialize.scm 590 */
			{
				BgL_appz00_bglt BgL_nodez00_1882;
				obj_t BgL_typez00_1883;

				{	/* Cfa/specialize.scm 597 */
					bool_t BgL_test2228z00_3349;

					{	/* Cfa/specialize.scm 597 */
						bool_t BgL_test2229z00_3350;

						{	/* Cfa/specialize.scm 597 */
							BgL_variablez00_bglt BgL_arg1866z00_1880;

							BgL_arg1866z00_1880 =
								(((BgL_varz00_bglt) COBJECT(
										(((BgL_appz00_bglt) COBJECT(BgL_nodez00_122))->
											BgL_funz00)))->BgL_variablez00);
							BgL_test2229z00_3350 =
								(((obj_t) BgL_arg1866z00_1880) ==
								BGl_za2czd2eqzf3za2z21zzcfa_specializa7eza7);
						}
						if (BgL_test2229z00_3350)
							{	/* Cfa/specialize.scm 598 */
								obj_t BgL_arg1865z00_1879;

								BgL_arg1865z00_1879 =
									BGl_thezd2backendzd2zzbackend_backendz00();
								BgL_test2228z00_3349 =
									(((BgL_backendz00_bglt) COBJECT(
											((BgL_backendz00_bglt) BgL_arg1865z00_1879)))->
									BgL_typedzd2eqzd2);
							}
						else
							{	/* Cfa/specialize.scm 597 */
								BgL_test2228z00_3349 = ((bool_t) 0);
							}
					}
					if (BgL_test2228z00_3349)
						{	/* Cfa/specialize.scm 600 */
							BgL_typez00_bglt BgL_t1z00_1854;
							BgL_typez00_bglt BgL_t2z00_1855;

							{	/* Cfa/specialize.scm 600 */
								obj_t BgL_arg1859z00_1874;

								BgL_arg1859z00_1874 =
									CAR(
									(((BgL_appz00_bglt) COBJECT(BgL_nodez00_122))->BgL_argsz00));
								BgL_t1z00_1854 =
									BGl_getzd2typezd2zztype_typeofz00(
									((BgL_nodez00_bglt) BgL_arg1859z00_1874), ((bool_t) 0));
							}
							{	/* Cfa/specialize.scm 601 */
								obj_t BgL_arg1862z00_1876;

								{	/* Cfa/specialize.scm 601 */
									obj_t BgL_pairz00_2532;

									BgL_pairz00_2532 =
										(((BgL_appz00_bglt) COBJECT(BgL_nodez00_122))->BgL_argsz00);
									BgL_arg1862z00_1876 = CAR(CDR(BgL_pairz00_2532));
								}
								BgL_t2z00_1855 =
									BGl_getzd2typezd2zztype_typeofz00(
									((BgL_nodez00_bglt) BgL_arg1862z00_1876), ((bool_t) 0));
							}
							{	/* Cfa/specialize.scm 603 */
								bool_t BgL_test2230z00_3367;

								if (
									(((obj_t) BgL_t1z00_1854) == BGl_za2objza2z00zztype_cachez00))
									{	/* Cfa/specialize.scm 603 */
										BgL_test2230z00_3367 =
											(
											((obj_t) BgL_t2z00_1855) ==
											BGl_za2objza2z00zztype_cachez00);
									}
								else
									{	/* Cfa/specialize.scm 603 */
										BgL_test2230z00_3367 = ((bool_t) 0);
									}
								if (BgL_test2230z00_3367)
									{	/* Cfa/specialize.scm 603 */
										BUNSPEC;
									}
								else
									{	/* Cfa/specialize.scm 603 */
										if (
											(((obj_t) BgL_t1z00_1854) ==
												BGl_za2bintza2z00zztype_cachez00))
											{	/* Cfa/specialize.scm 605 */
												if (
													(((obj_t) BgL_t2z00_1855) ==
														BGl_za2bintza2z00zztype_cachez00))
													{	/* Cfa/specialize.scm 606 */
														BgL_nodez00_1882 = BgL_nodez00_122;
														BgL_typez00_1883 = BGl_za2bintza2z00zztype_cachez00;
													BgL_zc3z04anonymousza31869ze3z87_1884:
														{	/* Cfa/specialize.scm 593 */
															bool_t BgL_test2234z00_3379;

															{	/* Cfa/specialize.scm 593 */
																bool_t BgL_res2058z00_2524;

																{	/* Cfa/specialize.scm 593 */
																	obj_t BgL_objz00_2523;

																	BgL_objz00_2523 =
																		BGl_za2boxedzd2eqzf3za2z21zzcfa_specializa7eza7;
																	BgL_res2058z00_2524 =
																		BGl_isazf3zf3zz__objectz00(BgL_objz00_2523,
																		BGl_globalz00zzast_varz00);
																}
																BgL_test2234z00_3379 = BgL_res2058z00_2524;
															}
															if (BgL_test2234z00_3379)
																{	/* Cfa/specialize.scm 593 */
																	{	/* Cfa/specialize.scm 594 */
																		BgL_varz00_bglt BgL_arg1871z00_1886;

																		BgL_arg1871z00_1886 =
																			(((BgL_appz00_bglt)
																				COBJECT(BgL_nodez00_122))->BgL_funz00);
																		{	/* Cfa/specialize.scm 594 */
																			BgL_variablez00_bglt BgL_vz00_2526;

																			BgL_vz00_2526 =
																				((BgL_variablez00_bglt)
																				((BgL_globalz00_bglt)
																					BGl_za2boxedzd2eqzf3za2z21zzcfa_specializa7eza7));
																			((((BgL_varz00_bglt)
																						COBJECT(BgL_arg1871z00_1886))->
																					BgL_variablez00) =
																				((BgL_variablez00_bglt) BgL_vz00_2526),
																				BUNSPEC);
																		}
																	}
																	BGl_addzd2specializa7edzd2eqzd2typez12z67zzcfa_specializa7eza7
																		(BgL_typez00_1883);
																}
															else
																{	/* Cfa/specialize.scm 593 */
																	BFALSE;
																}
														}
													}
												else
													{	/* Cfa/specialize.scm 606 */
														BFALSE;
													}
											}
										else
											{	/* Cfa/specialize.scm 605 */
												if (
													(((obj_t) BgL_t2z00_1855) ==
														BGl_za2bintza2z00zztype_cachez00))
													{	/* Cfa/specialize.scm 609 */
														BUNSPEC;
													}
												else
													{	/* Cfa/specialize.scm 609 */
														if (
															(((obj_t) BgL_t1z00_1854) ==
																BGl_za2brealza2z00zztype_cachez00))
															{	/* Cfa/specialize.scm 611 */
																if (
																	(((obj_t) BgL_t2z00_1855) ==
																		BGl_za2brealza2z00zztype_cachez00))
																	{
																		obj_t BgL_typez00_3396;
																		BgL_appz00_bglt BgL_nodez00_3395;

																		BgL_nodez00_3395 = BgL_nodez00_122;
																		BgL_typez00_3396 =
																			BGl_za2brealza2z00zztype_cachez00;
																		BgL_typez00_1883 = BgL_typez00_3396;
																		BgL_nodez00_1882 = BgL_nodez00_3395;
																		goto BgL_zc3z04anonymousza31869ze3z87_1884;
																	}
																else
																	{	/* Cfa/specialize.scm 612 */
																		BFALSE;
																	}
															}
														else
															{	/* Cfa/specialize.scm 611 */
																if (
																	(((obj_t) BgL_t2z00_1855) ==
																		BGl_za2brealza2z00zztype_cachez00))
																	{	/* Cfa/specialize.scm 615 */
																		BUNSPEC;
																	}
																else
																	{	/* Cfa/specialize.scm 615 */
																		if (
																			(((obj_t) BgL_t2z00_1855) ==
																				BGl_za2bintza2z00zztype_cachez00))
																			{	/* Cfa/specialize.scm 617 */
																				BUNSPEC;
																			}
																		else
																			{	/* Cfa/specialize.scm 617 */
																				if (
																					(((obj_t) BgL_t1z00_1854) ==
																						BGl_za2bcharza2z00zztype_cachez00))
																					{	/* Cfa/specialize.scm 619 */
																						if (
																							(((obj_t) BgL_t2z00_1855) ==
																								BGl_za2bcharza2z00zztype_cachez00))
																							{
																								obj_t BgL_typez00_3410;
																								BgL_appz00_bglt
																									BgL_nodez00_3409;
																								BgL_nodez00_3409 =
																									BgL_nodez00_122;
																								BgL_typez00_3410 =
																									BGl_za2bcharza2z00zztype_cachez00;
																								BgL_typez00_1883 =
																									BgL_typez00_3410;
																								BgL_nodez00_1882 =
																									BgL_nodez00_3409;
																								goto
																									BgL_zc3z04anonymousza31869ze3z87_1884;
																							}
																						else
																							{	/* Cfa/specialize.scm 620 */
																								BFALSE;
																							}
																					}
																				else
																					{	/* Cfa/specialize.scm 619 */
																						if (
																							(((obj_t) BgL_t2z00_1855) ==
																								BGl_za2bcharza2z00zztype_cachez00))
																							{	/* Cfa/specialize.scm 623 */
																								BUNSPEC;
																							}
																						else
																							{	/* Cfa/specialize.scm 625 */
																								bool_t BgL_test2243z00_3414;

																								if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_t1z00_1854))
																									{	/* Cfa/specialize.scm 625 */
																										BgL_test2243z00_3414 =
																											BGl_bigloozd2typezf3z21zztype_typez00
																											(BgL_t2z00_1855);
																									}
																								else
																									{	/* Cfa/specialize.scm 625 */
																										BgL_test2243z00_3414 =
																											((bool_t) 0);
																									}
																								if (BgL_test2243z00_3414)
																									{	/* Cfa/specialize.scm 627 */
																										BgL_typez00_bglt
																											BgL_arg1857z00_1870;
																										if ((((obj_t)
																													BgL_t1z00_1854) ==
																												BGl_za2objza2z00zztype_cachez00))
																											{	/* Cfa/specialize.scm 627 */
																												BgL_arg1857z00_1870 =
																													BgL_t2z00_1855;
																											}
																										else
																											{	/* Cfa/specialize.scm 627 */
																												BgL_arg1857z00_1870 =
																													BgL_t1z00_1854;
																											}
																										{
																											obj_t BgL_typez00_3422;
																											BgL_appz00_bglt
																												BgL_nodez00_3421;
																											BgL_nodez00_3421 =
																												BgL_nodez00_122;
																											BgL_typez00_3422 =
																												((obj_t)
																												BgL_arg1857z00_1870);
																											BgL_typez00_1883 =
																												BgL_typez00_3422;
																											BgL_nodez00_1882 =
																												BgL_nodez00_3421;
																											goto
																												BgL_zc3z04anonymousza31869ze3z87_1884;
																										}
																									}
																								else
																									{	/* Cfa/specialize.scm 625 */
																										BUNSPEC;
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
							return BgL_nodez00_122;
						}
					else
						{	/* Cfa/specialize.scm 597 */
							return BgL_nodez00_122;
						}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_specializa7eza7()
	{
		{	/* Cfa/specialize.scm 19 */
			{	/* Cfa/specialize.scm 35 */
				obj_t BgL_arg1877z00_1892;
				obj_t BgL_arg1878z00_1893;

				{	/* Cfa/specialize.scm 35 */
					obj_t BgL_v1369z00_1935;

					BgL_v1369z00_1935 = create_vector(((long) 1));
					{	/* Cfa/specialize.scm 35 */
						obj_t BgL_arg1891z00_1936;

						BgL_arg1891z00_1936 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									8)), BGl_proc2097z00zzcfa_specializa7eza7,
							BGl_proc2096z00zzcfa_specializa7eza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 9)));
						VECTOR_SET(BgL_v1369z00_1935, ((long) 0), BgL_arg1891z00_1936);
					}
					BgL_arg1877z00_1892 = BgL_v1369z00_1935;
				}
				{	/* Cfa/specialize.scm 35 */
					obj_t BgL_v1370z00_1946;

					BgL_v1370z00_1946 = create_vector(((long) 0));
					BgL_arg1878z00_1893 = BgL_v1370z00_1946;
				}
				return (BGl_specializa7edzd2globalz75zzcfa_specializa7eza7 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 10)),
						CNST_TABLE_REF(((long) 11)), BGl_globalz00zzast_varz00,
						((long) 16795), BGl_proc2101z00zzcfa_specializa7eza7,
						BGl_proc2100z00zzcfa_specializa7eza7, BFALSE,
						BGl_proc2099z00zzcfa_specializa7eza7,
						BGl_proc2098z00zzcfa_specializa7eza7, BgL_arg1877z00_1892,
						BgL_arg1878z00_1893), BUNSPEC);
		}}

	}



/* &lambda1886 */
	BgL_globalz00_bglt BGl_z62lambda1886z62zzcfa_specializa7eza7(obj_t
		BgL_envz00_2655, obj_t BgL_o1129z00_2656)
	{
		{	/* Cfa/specialize.scm 35 */
			{	/* Cfa/specialize.scm 35 */
				long BgL_arg1887z00_2773;

				{	/* Cfa/specialize.scm 35 */
					obj_t BgL_arg1888z00_2774;

					{	/* Cfa/specialize.scm 35 */
						obj_t BgL_arg1889z00_2775;

						{	/* Cfa/specialize.scm 35 */
							long BgL_arg1816z00_2776;

							{	/* Cfa/specialize.scm 35 */
								long BgL_arg1817z00_2777;

								{	/* Cfa/specialize.scm 35 */
									long BgL_res2063z00_2778;

									BgL_res2063z00_2778 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_globalz00_bglt) BgL_o1129z00_2656)));
									BgL_arg1817z00_2777 = BgL_res2063z00_2778;
								}
								BgL_arg1816z00_2776 = (BgL_arg1817z00_2777 - OBJECT_TYPE);
							}
							BgL_arg1889z00_2775 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_2776);
						}
						BgL_arg1888z00_2774 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1889z00_2775);
					}
					{	/* Cfa/specialize.scm 35 */
						long BgL_res2065z00_2779;

						{	/* Cfa/specialize.scm 35 */
							obj_t BgL_tmpz00_3439;

							BgL_tmpz00_3439 = ((obj_t) BgL_arg1888z00_2774);
							BgL_res2065z00_2779 = BGL_CLASS_INDEX(BgL_tmpz00_3439);
						}
						BgL_arg1887z00_2773 = BgL_res2065z00_2779;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_globalz00_bglt) BgL_o1129z00_2656)), BgL_arg1887z00_2773);
			}
			{	/* Cfa/specialize.scm 35 */
				BgL_objectz00_bglt BgL_tmpz00_3445;

				BgL_tmpz00_3445 =
					((BgL_objectz00_bglt) ((BgL_globalz00_bglt) BgL_o1129z00_2656));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3445, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_globalz00_bglt) BgL_o1129z00_2656));
			return ((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_o1129z00_2656));
		}

	}



/* &<@anonymous:1885> */
	obj_t BGl_z62zc3z04anonymousza31885ze3ze5zzcfa_specializa7eza7(obj_t
		BgL_envz00_2657, obj_t BgL_new1128z00_2658)
	{
		{	/* Cfa/specialize.scm 35 */
			{
				BgL_globalz00_bglt BgL_auxz00_3453;

				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_new1128z00_2658))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 12))), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1128z00_2658))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_3461;

					{	/* Cfa/specialize.scm 35 */
						obj_t BgL_classz00_2781;

						BgL_classz00_2781 = BGl_typez00zztype_typez00;
						{	/* Cfa/specialize.scm 35 */
							obj_t BgL__ortest_1106z00_2782;

							BgL__ortest_1106z00_2782 = BGL_CLASS_NIL(BgL_classz00_2781);
							if (CBOOL(BgL__ortest_1106z00_2782))
								{	/* Cfa/specialize.scm 35 */
									BgL_auxz00_3461 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_2782);
								}
							else
								{	/* Cfa/specialize.scm 35 */
									BgL_auxz00_3461 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_2781));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_new1128z00_2658))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_3461), BUNSPEC);
				}
				{
					BgL_valuez00_bglt BgL_auxz00_3471;

					{	/* Cfa/specialize.scm 35 */
						obj_t BgL_classz00_2783;

						BgL_classz00_2783 = BGl_valuez00zzast_varz00;
						{	/* Cfa/specialize.scm 35 */
							obj_t BgL__ortest_1106z00_2784;

							BgL__ortest_1106z00_2784 = BGL_CLASS_NIL(BgL_classz00_2783);
							if (CBOOL(BgL__ortest_1106z00_2784))
								{	/* Cfa/specialize.scm 35 */
									BgL_auxz00_3471 =
										((BgL_valuez00_bglt) BgL__ortest_1106z00_2784);
								}
							else
								{	/* Cfa/specialize.scm 35 */
									BgL_auxz00_3471 =
										((BgL_valuez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_2783));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_new1128z00_2658))))->
							BgL_valuez00) = ((BgL_valuez00_bglt) BgL_auxz00_3471), BUNSPEC);
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_new1128z00_2658))))->
						BgL_accessz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1128z00_2658))))->BgL_fastzd2alphazd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1128z00_2658))))->BgL_removablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1128z00_2658))))->BgL_occurrencez00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1128z00_2658))))->BgL_occurrencewz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1128z00_2658))))->BgL_userzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1128z00_2658))))->BgL_modulez00) =
					((obj_t) CNST_TABLE_REF(((long) 12))), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1128z00_2658))))->BgL_importz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1128z00_2658))))->BgL_evaluablezf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1128z00_2658))))->BgL_evalzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1128z00_2658))))->BgL_libraryz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1128z00_2658))))->BgL_pragmaz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1128z00_2658))))->BgL_srcz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1128z00_2658))))->BgL_jvmzd2typezd2namez00) =
					((obj_t) BGl_string2102z00zzcfa_specializa7eza7), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1128z00_2658))))->BgL_initz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1128z00_2658))))->BgL_aliasz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_specializa7edzd2globalz75_bglt BgL_auxz00_3530;

					{
						obj_t BgL_auxz00_3531;

						{	/* Cfa/specialize.scm 35 */
							BgL_objectz00_bglt BgL_tmpz00_3532;

							BgL_tmpz00_3532 =
								((BgL_objectz00_bglt)
								((BgL_globalz00_bglt) BgL_new1128z00_2658));
							BgL_auxz00_3531 = BGL_OBJECT_WIDENING(BgL_tmpz00_3532);
						}
						BgL_auxz00_3530 =
							((BgL_specializa7edzd2globalz75_bglt) BgL_auxz00_3531);
					}
					((((BgL_specializa7edzd2globalz75_bglt) COBJECT(BgL_auxz00_3530))->
							BgL_fixz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_3453 = ((BgL_globalz00_bglt) BgL_new1128z00_2658);
				return ((obj_t) BgL_auxz00_3453);
			}
		}

	}



/* &lambda1883 */
	BgL_globalz00_bglt BGl_z62lambda1883z62zzcfa_specializa7eza7(obj_t
		BgL_envz00_2659, obj_t BgL_o1124z00_2660)
	{
		{	/* Cfa/specialize.scm 35 */
			{	/* Cfa/specialize.scm 35 */
				BgL_specializa7edzd2globalz75_bglt BgL_wide1126z00_2786;

				BgL_wide1126z00_2786 =
					((BgL_specializa7edzd2globalz75_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_specializa7edzd2globalz75_bgl))));
				{	/* Cfa/specialize.scm 35 */
					obj_t BgL_auxz00_3545;
					BgL_objectz00_bglt BgL_tmpz00_3541;

					BgL_auxz00_3545 = ((obj_t) BgL_wide1126z00_2786);
					BgL_tmpz00_3541 =
						((BgL_objectz00_bglt)
						((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_o1124z00_2660)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3541, BgL_auxz00_3545);
				}
				((BgL_objectz00_bglt)
					((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_o1124z00_2660)));
				{	/* Cfa/specialize.scm 35 */
					long BgL_arg1884z00_2787;

					{	/* Cfa/specialize.scm 35 */
						long BgL_res2062z00_2788;

						BgL_res2062z00_2788 =
							BGL_CLASS_INDEX
							(BGl_specializa7edzd2globalz75zzcfa_specializa7eza7);
						BgL_arg1884z00_2787 = BgL_res2062z00_2788;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_globalz00_bglt)
								((BgL_globalz00_bglt) BgL_o1124z00_2660))),
						BgL_arg1884z00_2787);
				}
				return
					((BgL_globalz00_bglt)
					((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_o1124z00_2660)));
			}
		}

	}



/* &lambda1879 */
	BgL_globalz00_bglt BGl_z62lambda1879z62zzcfa_specializa7eza7(obj_t
		BgL_envz00_2661, obj_t BgL_id1103z00_2662, obj_t BgL_name1104z00_2663,
		obj_t BgL_type1105z00_2664, obj_t BgL_value1106z00_2665,
		obj_t BgL_access1107z00_2666, obj_t BgL_fastzd2alpha1108zd2_2667,
		obj_t BgL_removable1109z00_2668, obj_t BgL_occurrence1110z00_2669,
		obj_t BgL_occurrencew1111z00_2670, obj_t BgL_userzf31112zf3_2671,
		obj_t BgL_module1113z00_2672, obj_t BgL_import1114z00_2673,
		obj_t BgL_evaluablezf31115zf3_2674, obj_t BgL_evalzf31116zf3_2675,
		obj_t BgL_library1117z00_2676, obj_t BgL_pragma1118z00_2677,
		obj_t BgL_src1119z00_2678, obj_t BgL_jvmzd2typezd2name1120z00_2679,
		obj_t BgL_init1121z00_2680, obj_t BgL_alias1122z00_2681,
		obj_t BgL_fix1123z00_2682)
	{
		{	/* Cfa/specialize.scm 35 */
			{	/* Cfa/specialize.scm 35 */
				long BgL_occurrence1110z00_2792;
				long BgL_occurrencew1111z00_2793;
				bool_t BgL_userzf31112zf3_2794;
				bool_t BgL_evaluablezf31115zf3_2796;
				bool_t BgL_evalzf31116zf3_2797;

				BgL_occurrence1110z00_2792 = (long) CINT(BgL_occurrence1110z00_2669);
				BgL_occurrencew1111z00_2793 = (long) CINT(BgL_occurrencew1111z00_2670);
				BgL_userzf31112zf3_2794 = CBOOL(BgL_userzf31112zf3_2671);
				BgL_evaluablezf31115zf3_2796 = CBOOL(BgL_evaluablezf31115zf3_2674);
				BgL_evalzf31116zf3_2797 = CBOOL(BgL_evalzf31116zf3_2675);
				{	/* Cfa/specialize.scm 35 */
					BgL_globalz00_bglt BgL_new1178z00_2799;

					{	/* Cfa/specialize.scm 35 */
						BgL_globalz00_bglt BgL_tmp1176z00_2800;
						BgL_specializa7edzd2globalz75_bglt BgL_wide1177z00_2801;

						{
							BgL_globalz00_bglt BgL_auxz00_3564;

							{	/* Cfa/specialize.scm 35 */
								BgL_globalz00_bglt BgL_new1175z00_2802;

								BgL_new1175z00_2802 =
									((BgL_globalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_globalz00_bgl))));
								{	/* Cfa/specialize.scm 35 */
									long BgL_arg1882z00_2803;

									{	/* Cfa/specialize.scm 35 */
										long BgL_res2060z00_2804;

										BgL_res2060z00_2804 =
											BGL_CLASS_INDEX(BGl_globalz00zzast_varz00);
										BgL_arg1882z00_2803 = BgL_res2060z00_2804;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1175z00_2802),
										BgL_arg1882z00_2803);
								}
								{	/* Cfa/specialize.scm 35 */
									BgL_objectz00_bglt BgL_tmpz00_3569;

									BgL_tmpz00_3569 = ((BgL_objectz00_bglt) BgL_new1175z00_2802);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3569, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1175z00_2802);
								BgL_auxz00_3564 = BgL_new1175z00_2802;
							}
							BgL_tmp1176z00_2800 = ((BgL_globalz00_bglt) BgL_auxz00_3564);
						}
						BgL_wide1177z00_2801 =
							((BgL_specializa7edzd2globalz75_bglt)
							BOBJECT(GC_MALLOC(sizeof(struct
										BgL_specializa7edzd2globalz75_bgl))));
						{	/* Cfa/specialize.scm 35 */
							obj_t BgL_auxz00_3577;
							BgL_objectz00_bglt BgL_tmpz00_3575;

							BgL_auxz00_3577 = ((obj_t) BgL_wide1177z00_2801);
							BgL_tmpz00_3575 = ((BgL_objectz00_bglt) BgL_tmp1176z00_2800);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3575, BgL_auxz00_3577);
						}
						((BgL_objectz00_bglt) BgL_tmp1176z00_2800);
						{	/* Cfa/specialize.scm 35 */
							long BgL_arg1881z00_2805;

							{	/* Cfa/specialize.scm 35 */
								long BgL_res2061z00_2806;

								BgL_res2061z00_2806 =
									BGL_CLASS_INDEX
									(BGl_specializa7edzd2globalz75zzcfa_specializa7eza7);
								BgL_arg1881z00_2805 = BgL_res2061z00_2806;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1176z00_2800),
								BgL_arg1881z00_2805);
						}
						BgL_new1178z00_2799 = ((BgL_globalz00_bglt) BgL_tmp1176z00_2800);
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_new1178z00_2799)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1103z00_2662)), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1178z00_2799)))->BgL_namez00) =
						((obj_t) BgL_name1104z00_2663), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1178z00_2799)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1105z00_2664)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1178z00_2799)))->BgL_valuez00) =
						((BgL_valuez00_bglt) ((BgL_valuez00_bglt) BgL_value1106z00_2665)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1178z00_2799)))->BgL_accessz00) =
						((obj_t) BgL_access1107z00_2666), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1178z00_2799)))->BgL_fastzd2alphazd2) =
						((obj_t) BgL_fastzd2alpha1108zd2_2667), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1178z00_2799)))->BgL_removablez00) =
						((obj_t) BgL_removable1109z00_2668), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1178z00_2799)))->BgL_occurrencez00) =
						((long) BgL_occurrence1110z00_2792), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1178z00_2799)))->BgL_occurrencewz00) =
						((long) BgL_occurrencew1111z00_2793), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1178z00_2799)))->BgL_userzf3zf3) =
						((bool_t) BgL_userzf31112zf3_2794), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1178z00_2799)))->BgL_modulez00) =
						((obj_t) ((obj_t) BgL_module1113z00_2672)), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1178z00_2799)))->BgL_importz00) =
						((obj_t) BgL_import1114z00_2673), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1178z00_2799)))->BgL_evaluablezf3zf3) =
						((bool_t) BgL_evaluablezf31115zf3_2796), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1178z00_2799)))->BgL_evalzf3zf3) =
						((bool_t) BgL_evalzf31116zf3_2797), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1178z00_2799)))->BgL_libraryz00) =
						((obj_t) BgL_library1117z00_2676), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1178z00_2799)))->BgL_pragmaz00) =
						((obj_t) BgL_pragma1118z00_2677), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1178z00_2799)))->BgL_srcz00) =
						((obj_t) BgL_src1119z00_2678), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1178z00_2799)))->BgL_jvmzd2typezd2namez00) =
						((obj_t) ((obj_t) BgL_jvmzd2typezd2name1120z00_2679)), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1178z00_2799)))->BgL_initz00) =
						((obj_t) BgL_init1121z00_2680), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1178z00_2799)))->BgL_aliasz00) =
						((obj_t) BgL_alias1122z00_2681), BUNSPEC);
					{
						BgL_specializa7edzd2globalz75_bglt BgL_auxz00_3630;

						{
							obj_t BgL_auxz00_3631;

							{	/* Cfa/specialize.scm 35 */
								BgL_objectz00_bglt BgL_tmpz00_3632;

								BgL_tmpz00_3632 = ((BgL_objectz00_bglt) BgL_new1178z00_2799);
								BgL_auxz00_3631 = BGL_OBJECT_WIDENING(BgL_tmpz00_3632);
							}
							BgL_auxz00_3630 =
								((BgL_specializa7edzd2globalz75_bglt) BgL_auxz00_3631);
						}
						((((BgL_specializa7edzd2globalz75_bglt) COBJECT(BgL_auxz00_3630))->
								BgL_fixz00) = ((obj_t) BgL_fix1123z00_2682), BUNSPEC);
					}
					return BgL_new1178z00_2799;
				}
			}
		}

	}



/* &lambda1895 */
	obj_t BGl_z62lambda1895z62zzcfa_specializa7eza7(obj_t BgL_envz00_2683,
		obj_t BgL_oz00_2684, obj_t BgL_vz00_2685)
	{
		{	/* Cfa/specialize.scm 35 */
			{
				BgL_specializa7edzd2globalz75_bglt BgL_auxz00_3637;

				{
					obj_t BgL_auxz00_3638;

					{	/* Cfa/specialize.scm 35 */
						BgL_objectz00_bglt BgL_tmpz00_3639;

						BgL_tmpz00_3639 =
							((BgL_objectz00_bglt) ((BgL_globalz00_bglt) BgL_oz00_2684));
						BgL_auxz00_3638 = BGL_OBJECT_WIDENING(BgL_tmpz00_3639);
					}
					BgL_auxz00_3637 =
						((BgL_specializa7edzd2globalz75_bglt) BgL_auxz00_3638);
				}
				return
					((((BgL_specializa7edzd2globalz75_bglt) COBJECT(BgL_auxz00_3637))->
						BgL_fixz00) = ((obj_t) BgL_vz00_2685), BUNSPEC);
			}
		}

	}



/* &lambda1894 */
	obj_t BGl_z62lambda1894z62zzcfa_specializa7eza7(obj_t BgL_envz00_2686,
		obj_t BgL_oz00_2687)
	{
		{	/* Cfa/specialize.scm 35 */
			{
				BgL_specializa7edzd2globalz75_bglt BgL_auxz00_3645;

				{
					obj_t BgL_auxz00_3646;

					{	/* Cfa/specialize.scm 35 */
						BgL_objectz00_bglt BgL_tmpz00_3647;

						BgL_tmpz00_3647 =
							((BgL_objectz00_bglt) ((BgL_globalz00_bglt) BgL_oz00_2687));
						BgL_auxz00_3646 = BGL_OBJECT_WIDENING(BgL_tmpz00_3647);
					}
					BgL_auxz00_3645 =
						((BgL_specializa7edzd2globalz75_bglt) BgL_auxz00_3646);
				}
				return
					(((BgL_specializa7edzd2globalz75_bglt) COBJECT(BgL_auxz00_3645))->
					BgL_fixz00);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_specializa7eza7()
	{
		{	/* Cfa/specialize.scm 19 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_proc2103z00zzcfa_specializa7eza7, BGl_nodez00zzast_nodez00,
				BGl_string2104z00zzcfa_specializa7eza7);
		}

	}



/* &patch!1371 */
	obj_t BGl_z62patchz121371z70zzcfa_specializa7eza7(obj_t BgL_envz00_2689,
		obj_t BgL_nodez00_2690)
	{
		{	/* Cfa/specialize.scm 326 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 13)),
				BGl_string2105z00zzcfa_specializa7eza7,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2690)));
		}

	}



/* patch! */
	obj_t BGl_patchz12z12zzcfa_specializa7eza7(BgL_nodez00_bglt BgL_nodez00_97)
	{
		{	/* Cfa/specialize.scm 326 */
			{	/* Cfa/specialize.scm 326 */
				obj_t BgL_method1373z00_1955;

				{	/* Cfa/specialize.scm 326 */
					obj_t BgL_res2076z00_2617;

					{	/* Cfa/specialize.scm 326 */
						long BgL_objzd2classzd2numz00_2582;

						{	/* Cfa/specialize.scm 326 */
							long BgL_res2066z00_2585;

							BgL_res2066z00_2585 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_97));
							BgL_objzd2classzd2numz00_2582 = BgL_res2066z00_2585;
						}
						{	/* Cfa/specialize.scm 326 */
							obj_t BgL_arg1813z00_2583;

							BgL_arg1813z00_2583 =
								PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
								(int) (((long) 1)));
							{	/* Cfa/specialize.scm 326 */
								int BgL_offsetz00_2587;

								BgL_offsetz00_2587 = (int) (BgL_objzd2classzd2numz00_2582);
								{	/* Cfa/specialize.scm 326 */
									long BgL_offsetz00_2588;

									BgL_offsetz00_2588 =
										((long) (BgL_offsetz00_2587) - OBJECT_TYPE);
									{	/* Cfa/specialize.scm 326 */
										long BgL_modz00_2589;

										BgL_modz00_2589 =
											(BgL_offsetz00_2588 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Cfa/specialize.scm 326 */
											long BgL_restz00_2591;

											BgL_restz00_2591 =
												(BgL_offsetz00_2588 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Cfa/specialize.scm 326 */

												{	/* Cfa/specialize.scm 326 */
													obj_t BgL_bucketz00_2593;

													BgL_bucketz00_2593 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2583), BgL_modz00_2589);
													BgL_res2076z00_2617 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2593), BgL_restz00_2591);
					}}}}}}}}
					BgL_method1373z00_1955 = BgL_res2076z00_2617;
				}
				return
					PROCEDURE_ENTRY(BgL_method1373z00_1955) (BgL_method1373z00_1955,
					((obj_t) BgL_nodez00_97), BEOA);
			}
		}

	}



/* &patch! */
	obj_t BGl_z62patchz12z70zzcfa_specializa7eza7(obj_t BgL_envz00_2691,
		obj_t BgL_nodez00_2692)
	{
		{	/* Cfa/specialize.scm 326 */
			return
				BGl_patchz12z12zzcfa_specializa7eza7(
				((BgL_nodez00_bglt) BgL_nodez00_2692));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_specializa7eza7()
	{
		{	/* Cfa/specialize.scm 19 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7, BGl_atomz00zzast_nodez00,
				BGl_proc2106z00zzcfa_specializa7eza7,
				BGl_string2107z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7, BGl_kwotez00zzast_nodez00,
				BGl_proc2108z00zzcfa_specializa7eza7,
				BGl_string2107z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7, BGl_varz00zzast_nodez00,
				BGl_proc2109z00zzcfa_specializa7eza7,
				BGl_string2107z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_closurez00zzast_nodez00, BGl_proc2110z00zzcfa_specializa7eza7,
				BGl_string2107z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_sequencez00zzast_nodez00, BGl_proc2111z00zzcfa_specializa7eza7,
				BGl_string2107z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7, BGl_syncz00zzast_nodez00,
				BGl_proc2112z00zzcfa_specializa7eza7,
				BGl_string2107z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc2113z00zzcfa_specializa7eza7,
				BGl_string2107z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_funcallz00zzast_nodez00, BGl_proc2114z00zzcfa_specializa7eza7,
				BGl_string2107z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7, BGl_externz00zzast_nodez00,
				BGl_proc2115z00zzcfa_specializa7eza7,
				BGl_string2107z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7, BGl_castz00zzast_nodez00,
				BGl_proc2116z00zzcfa_specializa7eza7,
				BGl_string2107z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7, BGl_setqz00zzast_nodez00,
				BGl_proc2117z00zzcfa_specializa7eza7,
				BGl_string2107z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_conditionalz00zzast_nodez00, BGl_proc2118z00zzcfa_specializa7eza7,
				BGl_string2107z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7, BGl_failz00zzast_nodez00,
				BGl_proc2119z00zzcfa_specializa7eza7,
				BGl_string2107z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7, BGl_switchz00zzast_nodez00,
				BGl_proc2120z00zzcfa_specializa7eza7,
				BGl_string2107z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc2121z00zzcfa_specializa7eza7,
				BGl_string2107z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc2122z00zzcfa_specializa7eza7,
				BGl_string2107z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc2123z00zzcfa_specializa7eza7,
				BGl_string2107z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc2124z00zzcfa_specializa7eza7,
				BGl_string2107z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc2125z00zzcfa_specializa7eza7,
				BGl_string2107z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc2126z00zzcfa_specializa7eza7,
				BGl_string2107z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc2127z00zzcfa_specializa7eza7,
				BGl_string2107z00zzcfa_specializa7eza7);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7, BGl_appz00zzast_nodez00,
				BGl_proc2128z00zzcfa_specializa7eza7,
				BGl_string2107z00zzcfa_specializa7eza7);
		}

	}



/* &patch!-app1417 */
	obj_t BGl_z62patchz12zd2app1417za2zzcfa_specializa7eza7(obj_t BgL_envz00_2715,
		obj_t BgL_nodez00_2716)
	{
		{	/* Cfa/specialize.scm 537 */
			{
				BgL_appz00_bglt BgL_auxz00_3712;

				BGl_patchza2z12zb0zzcfa_specializa7eza7(
					(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2716)))->BgL_argsz00));
				{
					BgL_varz00_bglt BgL_auxz00_3716;

					{	/* Cfa/specialize.scm 540 */
						BgL_varz00_bglt BgL_arg1959z00_2811;

						BgL_arg1959z00_2811 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt) BgL_nodez00_2716)))->BgL_funz00);
						BgL_auxz00_3716 =
							((BgL_varz00_bglt)
							BGl_patchz12z12zzcfa_specializa7eza7(
								((BgL_nodez00_bglt) BgL_arg1959z00_2811)));
					}
					((((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt) BgL_nodez00_2716)))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_3716), BUNSPEC);
				}
				{	/* Cfa/specialize.scm 541 */
					BgL_variablez00_bglt BgL_vz00_2812;

					BgL_vz00_2812 =
						(((BgL_varz00_bglt) COBJECT(
								(((BgL_appz00_bglt) COBJECT(
											((BgL_appz00_bglt) BgL_nodez00_2716)))->BgL_funz00)))->
						BgL_variablez00);
					{	/* Cfa/specialize.scm 543 */
						bool_t BgL_test2248z00_3727;

						{	/* Cfa/specialize.scm 543 */
							bool_t BgL_res2080z00_2813;

							BgL_res2080z00_2813 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_vz00_2812),
								BGl_specializa7edzd2globalz75zzcfa_specializa7eza7);
							BgL_test2248z00_3727 = BgL_res2080z00_2813;
						}
						if (BgL_test2248z00_3727)
							{	/* Cfa/specialize.scm 543 */
								BgL_auxz00_3712 =
									BGl_specializa7ezd2appz12z67zzcfa_specializa7eza7(
									((BgL_appz00_bglt) BgL_nodez00_2716));
							}
						else
							{	/* Cfa/specialize.scm 543 */
								BgL_auxz00_3712 = ((BgL_appz00_bglt) BgL_nodez00_2716);
							}
					}
				}
				return ((obj_t) BgL_auxz00_3712);
			}
		}

	}



/* &patch!-box-ref1415 */
	obj_t BGl_z62patchz12zd2boxzd2ref1415z70zzcfa_specializa7eza7(obj_t
		BgL_envz00_2717, obj_t BgL_nodez00_2718)
	{
		{	/* Cfa/specialize.scm 518 */
			{
				BgL_boxzd2refzd2_bglt BgL_auxz00_3734;

				{
					BgL_varz00_bglt BgL_auxz00_3735;

					{	/* Cfa/specialize.scm 520 */
						BgL_varz00_bglt BgL_arg1957z00_2815;

						BgL_arg1957z00_2815 =
							(((BgL_boxzd2refzd2_bglt) COBJECT(
									((BgL_boxzd2refzd2_bglt) BgL_nodez00_2718)))->BgL_varz00);
						BgL_auxz00_3735 =
							((BgL_varz00_bglt)
							BGl_patchz12z12zzcfa_specializa7eza7(
								((BgL_nodez00_bglt) BgL_arg1957z00_2815)));
					}
					((((BgL_boxzd2refzd2_bglt) COBJECT(
									((BgL_boxzd2refzd2_bglt) BgL_nodez00_2718)))->BgL_varz00) =
						((BgL_varz00_bglt) BgL_auxz00_3735), BUNSPEC);
				}
				BgL_auxz00_3734 = ((BgL_boxzd2refzd2_bglt) BgL_nodez00_2718);
				return ((obj_t) BgL_auxz00_3734);
			}
		}

	}



/* &patch!-box-set!1413 */
	obj_t BGl_z62patchz12zd2boxzd2setz121413z62zzcfa_specializa7eza7(obj_t
		BgL_envz00_2719, obj_t BgL_nodez00_2720)
	{
		{	/* Cfa/specialize.scm 509 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_auxz00_3745;

				{
					BgL_varz00_bglt BgL_auxz00_3746;

					{	/* Cfa/specialize.scm 511 */
						BgL_varz00_bglt BgL_arg1955z00_2817;

						BgL_arg1955z00_2817 =
							(((BgL_boxzd2setz12zc0_bglt) COBJECT(
									((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2720)))->BgL_varz00);
						BgL_auxz00_3746 =
							((BgL_varz00_bglt)
							BGl_patchz12z12zzcfa_specializa7eza7(
								((BgL_nodez00_bglt) BgL_arg1955z00_2817)));
					}
					((((BgL_boxzd2setz12zc0_bglt) COBJECT(
									((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2720)))->BgL_varz00) =
						((BgL_varz00_bglt) BgL_auxz00_3746), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_3754;

					{	/* Cfa/specialize.scm 512 */
						BgL_nodez00_bglt BgL_arg1956z00_2818;

						BgL_arg1956z00_2818 =
							(((BgL_boxzd2setz12zc0_bglt) COBJECT(
									((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2720)))->
							BgL_valuez00);
						BgL_auxz00_3754 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_specializa7eza7(BgL_arg1956z00_2818));
					}
					((((BgL_boxzd2setz12zc0_bglt) COBJECT(
									((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2720)))->
							BgL_valuez00) = ((BgL_nodez00_bglt) BgL_auxz00_3754), BUNSPEC);
				}
				BgL_auxz00_3745 = ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2720);
				return ((obj_t) BgL_auxz00_3745);
			}
		}

	}



/* &patch!-make-box1411 */
	obj_t BGl_z62patchz12zd2makezd2box1411z70zzcfa_specializa7eza7(obj_t
		BgL_envz00_2721, obj_t BgL_nodez00_2722)
	{
		{	/* Cfa/specialize.scm 501 */
			{
				BgL_makezd2boxzd2_bglt BgL_auxz00_3763;

				{
					BgL_nodez00_bglt BgL_auxz00_3764;

					{	/* Cfa/specialize.scm 503 */
						BgL_nodez00_bglt BgL_arg1954z00_2820;

						BgL_arg1954z00_2820 =
							(((BgL_makezd2boxzd2_bglt) COBJECT(
									((BgL_makezd2boxzd2_bglt) BgL_nodez00_2722)))->BgL_valuez00);
						BgL_auxz00_3764 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_specializa7eza7(BgL_arg1954z00_2820));
					}
					((((BgL_makezd2boxzd2_bglt) COBJECT(
									((BgL_makezd2boxzd2_bglt) BgL_nodez00_2722)))->BgL_valuez00) =
						((BgL_nodez00_bglt) BgL_auxz00_3764), BUNSPEC);
				}
				BgL_auxz00_3763 = ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2722);
				return ((obj_t) BgL_auxz00_3763);
			}
		}

	}



/* &patch!-jump-ex-it1409 */
	obj_t BGl_z62patchz12zd2jumpzd2exzd2it1409za2zzcfa_specializa7eza7(obj_t
		BgL_envz00_2723, obj_t BgL_nodez00_2724)
	{
		{	/* Cfa/specialize.scm 492 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_3773;

				{
					BgL_nodez00_bglt BgL_auxz00_3774;

					{	/* Cfa/specialize.scm 494 */
						BgL_nodez00_bglt BgL_arg1952z00_2822;

						BgL_arg1952z00_2822 =
							(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2724)))->
							BgL_exitz00);
						BgL_auxz00_3774 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_specializa7eza7(BgL_arg1952z00_2822));
					}
					((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2724)))->
							BgL_exitz00) = ((BgL_nodez00_bglt) BgL_auxz00_3774), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_3781;

					{	/* Cfa/specialize.scm 495 */
						BgL_nodez00_bglt BgL_arg1953z00_2823;

						BgL_arg1953z00_2823 =
							(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2724)))->
							BgL_valuez00);
						BgL_auxz00_3781 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_specializa7eza7(BgL_arg1953z00_2823));
					}
					((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2724)))->
							BgL_valuez00) = ((BgL_nodez00_bglt) BgL_auxz00_3781), BUNSPEC);
				}
				BgL_auxz00_3773 = ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2724);
				return ((obj_t) BgL_auxz00_3773);
			}
		}

	}



/* &patch!-set-ex-it1407 */
	obj_t BGl_z62patchz12zd2setzd2exzd2it1407za2zzcfa_specializa7eza7(obj_t
		BgL_envz00_2725, obj_t BgL_nodez00_2726)
	{
		{	/* Cfa/specialize.scm 483 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_auxz00_3790;

				{
					BgL_nodez00_bglt BgL_auxz00_3791;

					{	/* Cfa/specialize.scm 485 */
						BgL_nodez00_bglt BgL_arg1949z00_2825;

						BgL_arg1949z00_2825 =
							(((BgL_setzd2exzd2itz00_bglt) COBJECT(
									((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2726)))->
							BgL_bodyz00);
						BgL_auxz00_3791 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_specializa7eza7(BgL_arg1949z00_2825));
					}
					((((BgL_setzd2exzd2itz00_bglt) COBJECT(
									((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2726)))->
							BgL_bodyz00) = ((BgL_nodez00_bglt) BgL_auxz00_3791), BUNSPEC);
				}
				{	/* Cfa/specialize.scm 486 */
					BgL_varz00_bglt BgL_arg1951z00_2826;

					BgL_arg1951z00_2826 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2726)))->BgL_varz00);
					BGl_patchz12z12zzcfa_specializa7eza7(
						((BgL_nodez00_bglt) BgL_arg1951z00_2826));
				}
				BgL_auxz00_3790 = ((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2726);
				return ((obj_t) BgL_auxz00_3790);
			}
		}

	}



/* &patch!-let-var1405 */
	obj_t BGl_z62patchz12zd2letzd2var1405z70zzcfa_specializa7eza7(obj_t
		BgL_envz00_2727, obj_t BgL_nodez00_2728)
	{
		{	/* Cfa/specialize.scm 468 */
			{
				BgL_letzd2varzd2_bglt BgL_auxz00_3804;

				{	/* Cfa/specialize.scm 470 */
					obj_t BgL_g1368z00_2828;

					BgL_g1368z00_2828 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2728)))->BgL_bindingsz00);
					{
						obj_t BgL_l1366z00_2830;

						BgL_l1366z00_2830 = BgL_g1368z00_2828;
					BgL_zc3z04anonymousza31941ze3z87_2829:
						if (PAIRP(BgL_l1366z00_2830))
							{	/* Cfa/specialize.scm 470 */
								{	/* Cfa/specialize.scm 471 */
									obj_t BgL_bindingz00_2831;

									BgL_bindingz00_2831 = CAR(BgL_l1366z00_2830);
									{	/* Cfa/specialize.scm 471 */
										obj_t BgL_valz00_2832;

										BgL_valz00_2832 = CDR(((obj_t) BgL_bindingz00_2831));
										{	/* Cfa/specialize.scm 472 */
											obj_t BgL_arg1943z00_2833;

											BgL_arg1943z00_2833 =
												BGl_patchz12z12zzcfa_specializa7eza7(
												((BgL_nodez00_bglt) BgL_valz00_2832));
											{	/* Cfa/specialize.scm 472 */
												obj_t BgL_tmpz00_3814;

												BgL_tmpz00_3814 = ((obj_t) BgL_bindingz00_2831);
												SET_CDR(BgL_tmpz00_3814, BgL_arg1943z00_2833);
											}
										}
									}
								}
								{
									obj_t BgL_l1366z00_3817;

									BgL_l1366z00_3817 = CDR(BgL_l1366z00_2830);
									BgL_l1366z00_2830 = BgL_l1366z00_3817;
									goto BgL_zc3z04anonymousza31941ze3z87_2829;
								}
							}
						else
							{	/* Cfa/specialize.scm 470 */
								((bool_t) 1);
							}
					}
				}
				{
					BgL_nodez00_bglt BgL_auxz00_3819;

					{	/* Cfa/specialize.scm 474 */
						BgL_nodez00_bglt BgL_arg1945z00_2834;

						BgL_arg1945z00_2834 =
							(((BgL_letzd2varzd2_bglt) COBJECT(
									((BgL_letzd2varzd2_bglt) BgL_nodez00_2728)))->BgL_bodyz00);
						BgL_auxz00_3819 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_specializa7eza7(BgL_arg1945z00_2834));
					}
					((((BgL_letzd2varzd2_bglt) COBJECT(
									((BgL_letzd2varzd2_bglt) BgL_nodez00_2728)))->BgL_bodyz00) =
						((BgL_nodez00_bglt) BgL_auxz00_3819), BUNSPEC);
				}
				{	/* Cfa/specialize.scm 475 */
					bool_t BgL_test2250z00_3826;

					{	/* Cfa/specialize.scm 475 */
						BgL_typez00_bglt BgL_arg1948z00_2835;

						BgL_arg1948z00_2835 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_letzd2varzd2_bglt) BgL_nodez00_2728))))->BgL_typez00);
						BgL_test2250z00_3826 =
							(
							((obj_t) BgL_arg1948z00_2835) == BGl_za2objza2z00zztype_cachez00);
					}
					if (BgL_test2250z00_3826)
						{	/* Cfa/specialize.scm 475 */
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt)
												((BgL_letzd2varzd2_bglt) BgL_nodez00_2728))))->
									BgL_typez00) =
								((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BGl_za2_za2z00zztype_cachez00)), BUNSPEC);
							((((BgL_nodez00_bglt)
										COBJECT(((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt)
													BgL_nodez00_2728))))->BgL_typez00) =
								((BgL_typez00_bglt)
									BGl_getzd2typezd2zztype_typeofz00(((BgL_nodez00_bglt) (
												(BgL_letzd2varzd2_bglt) BgL_nodez00_2728)),
										((bool_t) 0))), BUNSPEC);
						}
					else
						{	/* Cfa/specialize.scm 475 */
							BFALSE;
						}
				}
				BgL_auxz00_3804 = ((BgL_letzd2varzd2_bglt) BgL_nodez00_2728);
				return ((obj_t) BgL_auxz00_3804);
			}
		}

	}



/* &patch!-let-fun1403 */
	obj_t BGl_z62patchz12zd2letzd2fun1403z70zzcfa_specializa7eza7(obj_t
		BgL_envz00_2729, obj_t BgL_nodez00_2730)
	{
		{	/* Cfa/specialize.scm 456 */
			{
				BgL_letzd2funzd2_bglt BgL_auxz00_3844;

				{	/* Cfa/specialize.scm 458 */
					obj_t BgL_g1365z00_2837;

					BgL_g1365z00_2837 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2730)))->BgL_localsz00);
					{
						obj_t BgL_l1363z00_2839;

						BgL_l1363z00_2839 = BgL_g1365z00_2837;
					BgL_zc3z04anonymousza31933ze3z87_2838:
						if (PAIRP(BgL_l1363z00_2839))
							{	/* Cfa/specialize.scm 458 */
								BGl_patchzd2funz12zc0zzcfa_specializa7eza7(CAR
									(BgL_l1363z00_2839));
								{
									obj_t BgL_l1363z00_3851;

									BgL_l1363z00_3851 = CDR(BgL_l1363z00_2839);
									BgL_l1363z00_2839 = BgL_l1363z00_3851;
									goto BgL_zc3z04anonymousza31933ze3z87_2838;
								}
							}
						else
							{	/* Cfa/specialize.scm 458 */
								((bool_t) 1);
							}
					}
				}
				{
					BgL_nodez00_bglt BgL_auxz00_3853;

					{	/* Cfa/specialize.scm 459 */
						BgL_nodez00_bglt BgL_arg1937z00_2840;

						BgL_arg1937z00_2840 =
							(((BgL_letzd2funzd2_bglt) COBJECT(
									((BgL_letzd2funzd2_bglt) BgL_nodez00_2730)))->BgL_bodyz00);
						BgL_auxz00_3853 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_specializa7eza7(BgL_arg1937z00_2840));
					}
					((((BgL_letzd2funzd2_bglt) COBJECT(
									((BgL_letzd2funzd2_bglt) BgL_nodez00_2730)))->BgL_bodyz00) =
						((BgL_nodez00_bglt) BgL_auxz00_3853), BUNSPEC);
				}
				{	/* Cfa/specialize.scm 460 */
					bool_t BgL_test2252z00_3860;

					{	/* Cfa/specialize.scm 460 */
						BgL_typez00_bglt BgL_arg1940z00_2841;

						BgL_arg1940z00_2841 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_letzd2funzd2_bglt) BgL_nodez00_2730))))->BgL_typez00);
						BgL_test2252z00_3860 =
							(
							((obj_t) BgL_arg1940z00_2841) == BGl_za2objza2z00zztype_cachez00);
					}
					if (BgL_test2252z00_3860)
						{	/* Cfa/specialize.scm 460 */
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt)
												((BgL_letzd2funzd2_bglt) BgL_nodez00_2730))))->
									BgL_typez00) =
								((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BGl_za2_za2z00zztype_cachez00)), BUNSPEC);
							((((BgL_nodez00_bglt)
										COBJECT(((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt)
													BgL_nodez00_2730))))->BgL_typez00) =
								((BgL_typez00_bglt)
									BGl_getzd2typezd2zztype_typeofz00(((BgL_nodez00_bglt) (
												(BgL_letzd2funzd2_bglt) BgL_nodez00_2730)),
										((bool_t) 0))), BUNSPEC);
						}
					else
						{	/* Cfa/specialize.scm 460 */
							BFALSE;
						}
				}
				BgL_auxz00_3844 = ((BgL_letzd2funzd2_bglt) BgL_nodez00_2730);
				return ((obj_t) BgL_auxz00_3844);
			}
		}

	}



/* &patch!-switch1401 */
	obj_t BGl_z62patchz12zd2switch1401za2zzcfa_specializa7eza7(obj_t
		BgL_envz00_2731, obj_t BgL_nodez00_2732)
	{
		{	/* Cfa/specialize.scm 445 */
			{
				BgL_switchz00_bglt BgL_auxz00_3878;

				{
					BgL_nodez00_bglt BgL_auxz00_3879;

					{	/* Cfa/specialize.scm 447 */
						BgL_nodez00_bglt BgL_arg1927z00_2843;

						BgL_arg1927z00_2843 =
							(((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt) BgL_nodez00_2732)))->BgL_testz00);
						BgL_auxz00_3879 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_specializa7eza7(BgL_arg1927z00_2843));
					}
					((((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt) BgL_nodez00_2732)))->BgL_testz00) =
						((BgL_nodez00_bglt) BgL_auxz00_3879), BUNSPEC);
				}
				{	/* Cfa/specialize.scm 448 */
					obj_t BgL_g1362z00_2844;

					BgL_g1362z00_2844 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2732)))->BgL_clausesz00);
					{
						obj_t BgL_l1360z00_2846;

						BgL_l1360z00_2846 = BgL_g1362z00_2844;
					BgL_zc3z04anonymousza31928ze3z87_2845:
						if (PAIRP(BgL_l1360z00_2846))
							{	/* Cfa/specialize.scm 448 */
								{	/* Cfa/specialize.scm 449 */
									obj_t BgL_clausez00_2847;

									BgL_clausez00_2847 = CAR(BgL_l1360z00_2846);
									{	/* Cfa/specialize.scm 449 */
										obj_t BgL_arg1930z00_2848;

										{	/* Cfa/specialize.scm 449 */
											obj_t BgL_arg1931z00_2849;

											BgL_arg1931z00_2849 = CDR(((obj_t) BgL_clausez00_2847));
											BgL_arg1930z00_2848 =
												BGl_patchz12z12zzcfa_specializa7eza7(
												((BgL_nodez00_bglt) BgL_arg1931z00_2849));
										}
										{	/* Cfa/specialize.scm 449 */
											obj_t BgL_tmpz00_3895;

											BgL_tmpz00_3895 = ((obj_t) BgL_clausez00_2847);
											SET_CDR(BgL_tmpz00_3895, BgL_arg1930z00_2848);
										}
									}
								}
								{
									obj_t BgL_l1360z00_3898;

									BgL_l1360z00_3898 = CDR(BgL_l1360z00_2846);
									BgL_l1360z00_2846 = BgL_l1360z00_3898;
									goto BgL_zc3z04anonymousza31928ze3z87_2845;
								}
							}
						else
							{	/* Cfa/specialize.scm 448 */
								((bool_t) 1);
							}
					}
				}
				BgL_auxz00_3878 = ((BgL_switchz00_bglt) BgL_nodez00_2732);
				return ((obj_t) BgL_auxz00_3878);
			}
		}

	}



/* &patch!-fail1399 */
	obj_t BGl_z62patchz12zd2fail1399za2zzcfa_specializa7eza7(obj_t
		BgL_envz00_2733, obj_t BgL_nodez00_2734)
	{
		{	/* Cfa/specialize.scm 435 */
			{
				BgL_failz00_bglt BgL_auxz00_3902;

				{
					BgL_nodez00_bglt BgL_auxz00_3903;

					{	/* Cfa/specialize.scm 437 */
						BgL_nodez00_bglt BgL_arg1924z00_2851;

						BgL_arg1924z00_2851 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_2734)))->BgL_procz00);
						BgL_auxz00_3903 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_specializa7eza7(BgL_arg1924z00_2851));
					}
					((((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_2734)))->BgL_procz00) =
						((BgL_nodez00_bglt) BgL_auxz00_3903), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_3910;

					{	/* Cfa/specialize.scm 438 */
						BgL_nodez00_bglt BgL_arg1925z00_2852;

						BgL_arg1925z00_2852 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_2734)))->BgL_msgz00);
						BgL_auxz00_3910 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_specializa7eza7(BgL_arg1925z00_2852));
					}
					((((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_2734)))->BgL_msgz00) =
						((BgL_nodez00_bglt) BgL_auxz00_3910), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_3917;

					{	/* Cfa/specialize.scm 439 */
						BgL_nodez00_bglt BgL_arg1926z00_2853;

						BgL_arg1926z00_2853 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_2734)))->BgL_objz00);
						BgL_auxz00_3917 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_specializa7eza7(BgL_arg1926z00_2853));
					}
					((((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_2734)))->BgL_objz00) =
						((BgL_nodez00_bglt) BgL_auxz00_3917), BUNSPEC);
				}
				BgL_auxz00_3902 = ((BgL_failz00_bglt) BgL_nodez00_2734);
				return ((obj_t) BgL_auxz00_3902);
			}
		}

	}



/* &patch!-conditional1397 */
	obj_t BGl_z62patchz12zd2conditional1397za2zzcfa_specializa7eza7(obj_t
		BgL_envz00_2735, obj_t BgL_nodez00_2736)
	{
		{	/* Cfa/specialize.scm 422 */
			{
				BgL_conditionalz00_bglt BgL_auxz00_3926;

				{
					BgL_nodez00_bglt BgL_auxz00_3927;

					{	/* Cfa/specialize.scm 424 */
						BgL_nodez00_bglt BgL_arg1918z00_2855;

						BgL_arg1918z00_2855 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_2736)))->BgL_testz00);
						BgL_auxz00_3927 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_specializa7eza7(BgL_arg1918z00_2855));
					}
					((((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_2736)))->BgL_testz00) =
						((BgL_nodez00_bglt) BgL_auxz00_3927), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_3934;

					{	/* Cfa/specialize.scm 425 */
						BgL_nodez00_bglt BgL_arg1919z00_2856;

						BgL_arg1919z00_2856 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_2736)))->BgL_truez00);
						BgL_auxz00_3934 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_specializa7eza7(BgL_arg1919z00_2856));
					}
					((((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_2736)))->BgL_truez00) =
						((BgL_nodez00_bglt) BgL_auxz00_3934), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_3941;

					{	/* Cfa/specialize.scm 426 */
						BgL_nodez00_bglt BgL_arg1920z00_2857;

						BgL_arg1920z00_2857 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_2736)))->BgL_falsez00);
						BgL_auxz00_3941 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_specializa7eza7(BgL_arg1920z00_2857));
					}
					((((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_2736)))->
							BgL_falsez00) = ((BgL_nodez00_bglt) BgL_auxz00_3941), BUNSPEC);
				}
				{	/* Cfa/specialize.scm 427 */
					bool_t BgL_test2254z00_3948;

					{	/* Cfa/specialize.scm 427 */
						BgL_typez00_bglt BgL_arg1923z00_2858;

						BgL_arg1923z00_2858 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_conditionalz00_bglt) BgL_nodez00_2736))))->
							BgL_typez00);
						BgL_test2254z00_3948 =
							(((obj_t) BgL_arg1923z00_2858) ==
							BGl_za2objza2z00zztype_cachez00);
					}
					if (BgL_test2254z00_3948)
						{	/* Cfa/specialize.scm 427 */
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt)
												((BgL_conditionalz00_bglt) BgL_nodez00_2736))))->
									BgL_typez00) =
								((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BGl_za2_za2z00zztype_cachez00)), BUNSPEC);
							((((BgL_nodez00_bglt)
										COBJECT(((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt)
													BgL_nodez00_2736))))->BgL_typez00) =
								((BgL_typez00_bglt)
									BGl_getzd2typezd2zztype_typeofz00(((BgL_nodez00_bglt) (
												(BgL_conditionalz00_bglt) BgL_nodez00_2736)),
										((bool_t) 0))), BUNSPEC);
						}
					else
						{	/* Cfa/specialize.scm 427 */
							BFALSE;
						}
				}
				BgL_auxz00_3926 = ((BgL_conditionalz00_bglt) BgL_nodez00_2736);
				return ((obj_t) BgL_auxz00_3926);
			}
		}

	}



/* &patch!-setq1395 */
	obj_t BGl_z62patchz12zd2setq1395za2zzcfa_specializa7eza7(obj_t
		BgL_envz00_2737, obj_t BgL_nodez00_2738)
	{
		{	/* Cfa/specialize.scm 413 */
			{
				BgL_setqz00_bglt BgL_auxz00_3966;

				{
					BgL_nodez00_bglt BgL_auxz00_3967;

					{	/* Cfa/specialize.scm 415 */
						BgL_nodez00_bglt BgL_arg1916z00_2860;

						BgL_arg1916z00_2860 =
							(((BgL_setqz00_bglt) COBJECT(
									((BgL_setqz00_bglt) BgL_nodez00_2738)))->BgL_valuez00);
						BgL_auxz00_3967 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_specializa7eza7(BgL_arg1916z00_2860));
					}
					((((BgL_setqz00_bglt) COBJECT(
									((BgL_setqz00_bglt) BgL_nodez00_2738)))->BgL_valuez00) =
						((BgL_nodez00_bglt) BgL_auxz00_3967), BUNSPEC);
				}
				{
					BgL_varz00_bglt BgL_auxz00_3974;

					{	/* Cfa/specialize.scm 416 */
						BgL_varz00_bglt BgL_arg1917z00_2861;

						BgL_arg1917z00_2861 =
							(((BgL_setqz00_bglt) COBJECT(
									((BgL_setqz00_bglt) BgL_nodez00_2738)))->BgL_varz00);
						BgL_auxz00_3974 =
							((BgL_varz00_bglt)
							BGl_patchz12z12zzcfa_specializa7eza7(
								((BgL_nodez00_bglt) BgL_arg1917z00_2861)));
					}
					((((BgL_setqz00_bglt) COBJECT(
									((BgL_setqz00_bglt) BgL_nodez00_2738)))->BgL_varz00) =
						((BgL_varz00_bglt) BgL_auxz00_3974), BUNSPEC);
				}
				BgL_auxz00_3966 = ((BgL_setqz00_bglt) BgL_nodez00_2738);
				return ((obj_t) BgL_auxz00_3966);
			}
		}

	}



/* &patch!-cast1393 */
	obj_t BGl_z62patchz12zd2cast1393za2zzcfa_specializa7eza7(obj_t
		BgL_envz00_2739, obj_t BgL_nodez00_2740)
	{
		{	/* Cfa/specialize.scm 405 */
			{
				BgL_castz00_bglt BgL_auxz00_3984;

				BGl_patchz12z12zzcfa_specializa7eza7(
					(((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nodez00_2740)))->BgL_argz00));
				BgL_auxz00_3984 = ((BgL_castz00_bglt) BgL_nodez00_2740);
				return ((obj_t) BgL_auxz00_3984);
			}
		}

	}



/* &patch!-extern1391 */
	obj_t BGl_z62patchz12zd2extern1391za2zzcfa_specializa7eza7(obj_t
		BgL_envz00_2741, obj_t BgL_nodez00_2742)
	{
		{	/* Cfa/specialize.scm 397 */
			{
				BgL_externz00_bglt BgL_auxz00_3990;

				BGl_patchza2z12zb0zzcfa_specializa7eza7(
					(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_nodez00_2742)))->BgL_exprza2za2));
				BgL_auxz00_3990 = ((BgL_externz00_bglt) BgL_nodez00_2742);
				return ((obj_t) BgL_auxz00_3990);
			}
		}

	}



/* &patch!-funcall1389 */
	obj_t BGl_z62patchz12zd2funcall1389za2zzcfa_specializa7eza7(obj_t
		BgL_envz00_2743, obj_t BgL_nodez00_2744)
	{
		{	/* Cfa/specialize.scm 388 */
			{
				BgL_funcallz00_bglt BgL_auxz00_3996;

				{
					BgL_nodez00_bglt BgL_auxz00_3997;

					{	/* Cfa/specialize.scm 390 */
						BgL_nodez00_bglt BgL_arg1912z00_2865;

						BgL_arg1912z00_2865 =
							(((BgL_funcallz00_bglt) COBJECT(
									((BgL_funcallz00_bglt) BgL_nodez00_2744)))->BgL_funz00);
						BgL_auxz00_3997 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_specializa7eza7(BgL_arg1912z00_2865));
					}
					((((BgL_funcallz00_bglt) COBJECT(
									((BgL_funcallz00_bglt) BgL_nodez00_2744)))->BgL_funz00) =
						((BgL_nodez00_bglt) BgL_auxz00_3997), BUNSPEC);
				}
				BGl_patchza2z12zb0zzcfa_specializa7eza7(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2744)))->BgL_argsz00));
				BgL_auxz00_3996 = ((BgL_funcallz00_bglt) BgL_nodez00_2744);
				return ((obj_t) BgL_auxz00_3996);
			}
		}

	}



/* &patch!-app-ly1387 */
	obj_t BGl_z62patchz12zd2appzd2ly1387z70zzcfa_specializa7eza7(obj_t
		BgL_envz00_2745, obj_t BgL_nodez00_2746)
	{
		{	/* Cfa/specialize.scm 379 */
			{
				BgL_appzd2lyzd2_bglt BgL_auxz00_4009;

				{
					BgL_nodez00_bglt BgL_auxz00_4010;

					{	/* Cfa/specialize.scm 381 */
						BgL_nodez00_bglt BgL_arg1910z00_2867;

						BgL_arg1910z00_2867 =
							(((BgL_appzd2lyzd2_bglt) COBJECT(
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_2746)))->BgL_funz00);
						BgL_auxz00_4010 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_specializa7eza7(BgL_arg1910z00_2867));
					}
					((((BgL_appzd2lyzd2_bglt) COBJECT(
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_2746)))->BgL_funz00) =
						((BgL_nodez00_bglt) BgL_auxz00_4010), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_4017;

					{	/* Cfa/specialize.scm 382 */
						BgL_nodez00_bglt BgL_arg1911z00_2868;

						BgL_arg1911z00_2868 =
							(((BgL_appzd2lyzd2_bglt) COBJECT(
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_2746)))->BgL_argz00);
						BgL_auxz00_4017 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_specializa7eza7(BgL_arg1911z00_2868));
					}
					((((BgL_appzd2lyzd2_bglt) COBJECT(
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_2746)))->BgL_argz00) =
						((BgL_nodez00_bglt) BgL_auxz00_4017), BUNSPEC);
				}
				BgL_auxz00_4009 = ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2746);
				return ((obj_t) BgL_auxz00_4009);
			}
		}

	}



/* &patch!-sync1385 */
	obj_t BGl_z62patchz12zd2sync1385za2zzcfa_specializa7eza7(obj_t
		BgL_envz00_2747, obj_t BgL_nodez00_2748)
	{
		{	/* Cfa/specialize.scm 366 */
			{
				BgL_syncz00_bglt BgL_auxz00_4026;

				{
					BgL_nodez00_bglt BgL_auxz00_4027;

					{	/* Cfa/specialize.scm 368 */
						BgL_nodez00_bglt BgL_arg1904z00_2870;

						BgL_arg1904z00_2870 =
							(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nodez00_2748)))->BgL_mutexz00);
						BgL_auxz00_4027 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_specializa7eza7(BgL_arg1904z00_2870));
					}
					((((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nodez00_2748)))->BgL_mutexz00) =
						((BgL_nodez00_bglt) BgL_auxz00_4027), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_4034;

					{	/* Cfa/specialize.scm 369 */
						BgL_nodez00_bglt BgL_arg1905z00_2871;

						BgL_arg1905z00_2871 =
							(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nodez00_2748)))->BgL_prelockz00);
						BgL_auxz00_4034 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_specializa7eza7(BgL_arg1905z00_2871));
					}
					((((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nodez00_2748)))->BgL_prelockz00) =
						((BgL_nodez00_bglt) BgL_auxz00_4034), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_4041;

					{	/* Cfa/specialize.scm 370 */
						BgL_nodez00_bglt BgL_arg1906z00_2872;

						BgL_arg1906z00_2872 =
							(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nodez00_2748)))->BgL_bodyz00);
						BgL_auxz00_4041 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_specializa7eza7(BgL_arg1906z00_2872));
					}
					((((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nodez00_2748)))->BgL_bodyz00) =
						((BgL_nodez00_bglt) BgL_auxz00_4041), BUNSPEC);
				}
				{	/* Cfa/specialize.scm 371 */
					bool_t BgL_test2255z00_4048;

					{	/* Cfa/specialize.scm 371 */
						BgL_typez00_bglt BgL_arg1909z00_2873;

						BgL_arg1909z00_2873 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_syncz00_bglt) BgL_nodez00_2748))))->BgL_typez00);
						BgL_test2255z00_4048 =
							(
							((obj_t) BgL_arg1909z00_2873) == BGl_za2objza2z00zztype_cachez00);
					}
					if (BgL_test2255z00_4048)
						{	/* Cfa/specialize.scm 371 */
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt)
												((BgL_syncz00_bglt) BgL_nodez00_2748))))->BgL_typez00) =
								((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BGl_za2_za2z00zztype_cachez00)), BUNSPEC);
							((((BgL_nodez00_bglt)
										COBJECT(((BgL_nodez00_bglt) ((BgL_syncz00_bglt)
													BgL_nodez00_2748))))->BgL_typez00) =
								((BgL_typez00_bglt)
									BGl_getzd2typezd2zztype_typeofz00(((BgL_nodez00_bglt) (
												(BgL_syncz00_bglt) BgL_nodez00_2748)), ((bool_t) 0))),
								BUNSPEC);
						}
					else
						{	/* Cfa/specialize.scm 371 */
							BFALSE;
						}
				}
				BgL_auxz00_4026 = ((BgL_syncz00_bglt) BgL_nodez00_2748);
				return ((obj_t) BgL_auxz00_4026);
			}
		}

	}



/* &patch!-sequence1383 */
	obj_t BGl_z62patchz12zd2sequence1383za2zzcfa_specializa7eza7(obj_t
		BgL_envz00_2749, obj_t BgL_nodez00_2750)
	{
		{	/* Cfa/specialize.scm 355 */
			{
				BgL_sequencez00_bglt BgL_auxz00_4066;

				BGl_patchza2z12zb0zzcfa_specializa7eza7(
					(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_2750)))->BgL_nodesz00));
				{	/* Cfa/specialize.scm 358 */
					bool_t BgL_test2256z00_4070;

					{	/* Cfa/specialize.scm 358 */
						BgL_typez00_bglt BgL_arg1903z00_2875;

						BgL_arg1903z00_2875 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_sequencez00_bglt) BgL_nodez00_2750))))->BgL_typez00);
						BgL_test2256z00_4070 =
							(
							((obj_t) BgL_arg1903z00_2875) == BGl_za2objza2z00zztype_cachez00);
					}
					if (BgL_test2256z00_4070)
						{	/* Cfa/specialize.scm 358 */
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt)
												((BgL_sequencez00_bglt) BgL_nodez00_2750))))->
									BgL_typez00) =
								((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BGl_za2_za2z00zztype_cachez00)), BUNSPEC);
							((((BgL_nodez00_bglt)
										COBJECT(((BgL_nodez00_bglt) ((BgL_sequencez00_bglt)
													BgL_nodez00_2750))))->BgL_typez00) =
								((BgL_typez00_bglt)
									BGl_getzd2typezd2zztype_typeofz00(((BgL_nodez00_bglt) (
												(BgL_sequencez00_bglt) BgL_nodez00_2750)),
										((bool_t) 0))), BUNSPEC);
						}
					else
						{	/* Cfa/specialize.scm 358 */
							BFALSE;
						}
				}
				BgL_auxz00_4066 = ((BgL_sequencez00_bglt) BgL_nodez00_2750);
				return ((obj_t) BgL_auxz00_4066);
			}
		}

	}



/* &patch!-closure1381 */
	obj_t BGl_z62patchz12zd2closure1381za2zzcfa_specializa7eza7(obj_t
		BgL_envz00_2751, obj_t BgL_nodez00_2752)
	{
		{	/* Cfa/specialize.scm 349 */
			{	/* Cfa/specialize.scm 350 */
				obj_t BgL_arg1897z00_2877;

				BgL_arg1897z00_2877 =
					BGl_shapez00zztools_shapez00(
					((obj_t) ((BgL_closurez00_bglt) BgL_nodez00_2752)));
				return
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string2107z00zzcfa_specializa7eza7,
					BGl_string2129z00zzcfa_specializa7eza7, BgL_arg1897z00_2877);
			}
		}

	}



/* &patch!-var1379 */
	obj_t BGl_z62patchz12zd2var1379za2zzcfa_specializa7eza7(obj_t BgL_envz00_2753,
		obj_t BgL_nodez00_2754)
	{
		{	/* Cfa/specialize.scm 343 */
			return ((obj_t) ((BgL_varz00_bglt) BgL_nodez00_2754));
		}

	}



/* &patch!-kwote1377 */
	obj_t BGl_z62patchz12zd2kwote1377za2zzcfa_specializa7eza7(obj_t
		BgL_envz00_2755, obj_t BgL_nodez00_2756)
	{
		{	/* Cfa/specialize.scm 337 */
			return ((obj_t) ((BgL_kwotez00_bglt) BgL_nodez00_2756));
		}

	}



/* &patch!-atom1375 */
	obj_t BGl_z62patchz12zd2atom1375za2zzcfa_specializa7eza7(obj_t
		BgL_envz00_2757, obj_t BgL_nodez00_2758)
	{
		{	/* Cfa/specialize.scm 331 */
			return ((obj_t) ((BgL_atomz00_bglt) BgL_nodez00_2758));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_specializa7eza7()
	{
		{	/* Cfa/specialize.scm 19 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2130z00zzcfa_specializa7eza7));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2130z00zzcfa_specializa7eza7));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2130z00zzcfa_specializa7eza7));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2130z00zzcfa_specializa7eza7));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string2130z00zzcfa_specializa7eza7));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2130z00zzcfa_specializa7eza7));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string2130z00zzcfa_specializa7eza7));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2130z00zzcfa_specializa7eza7));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2130z00zzcfa_specializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2130z00zzcfa_specializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2130z00zzcfa_specializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2130z00zzcfa_specializa7eza7));
			BGl_modulezd2initializa7ationz75zzinline_inlinez00(((long) 20504998),
				BSTRING_TO_STRING(BGl_string2130z00zzcfa_specializa7eza7));
			return
				BGl_modulezd2initializa7ationz75zzinline_walkz00(((long) 385476796),
				BSTRING_TO_STRING(BGl_string2130z00zzcfa_specializa7eza7));
		}

	}

#ifdef __cplusplus
}
#endif
