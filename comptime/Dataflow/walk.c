/*===========================================================================*/
/*   (Dataflow/walk.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Dataflow/walk.scm) */
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

	typedef struct BgL_funz00_bgl
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
	}             *BgL_funz00_bglt;

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

	typedef struct BgL_instanceofz00_bgl
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
		struct BgL_typez00_bgl *BgL_classz00;
	}                    *BgL_instanceofz00_bglt;

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

	typedef struct BgL_localzf2valuezf2_bgl
	{
		int BgL_stampz00;
		struct BgL_nodez00_bgl *BgL_nodez00;
	}                       *BgL_localzf2valuezf2_bglt;


	static obj_t BGl_z62abortzf3zd2sync1431z43zzdataflow_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_za2pairzd2nilza2zd2zztype_cachez00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	static obj_t
		BGl_z62dataflowzd2nodez12zd2appzd2l1381za2zzdataflow_walkz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzdataflow_walkz00();
	static obj_t BGl_z62dataflowzd2nodez12zd2funca1383z70zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t
		BGl_z62dataflowzd2nodez12zd2boxzd2r1405za2zzdataflow_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62dataflowzd2nodez12zd2sync1377z70zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_dataflowzd2testzd2falsezd2envzd2zzdataflow_walkz00(BgL_nodez00_bglt);
	static obj_t BGl_z62dataflowzd2nodez12zd2fail1391z70zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dataflowzd2walkz12zc0zzdataflow_walkz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62dataflowzd2nodez12zd2jumpzd21401za2zzdataflow_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_appendzd221011zd2zzdataflow_walkz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzdataflow_walkz00();
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t
		BGl_z62dataflowzd2nodez12zd2boxzd2s1407za2zzdataflow_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62abortzf3zd2letzd2fun1435z91zzdataflow_walkz00(obj_t,
		obj_t);
	static obj_t BGl_z62dataflowzd2nodez121367za2zzdataflow_walkz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	static obj_t BGl_dataflowzd2nodeza2z12z62zzdataflow_walkz00(obj_t, obj_t);
	static obj_t BGl_z62dataflowzd2nodez12zd2app1379z70zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_z62dataflowzd2testzd2envzd2ap1411zb0zzdataflow_walkz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62dataflowzd2nodez12zd2makezd21403za2zzdataflow_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2z42pairzf3za2zb1zzdataflow_walkz00 = BUNSPEC;
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern bool_t BGl_typezd2subclasszf3z21zzobject_classz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62dataflowzd2nodez12za2zzdataflow_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62abortzf3z91zzdataflow_walkz00(obj_t, obj_t);
	static obj_t BGl_z62dataflowzd2nodez12zd2closu1372z70zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzdataflow_walkz00();
	static obj_t BGl_z62lambda1600z62zzdataflow_walkz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1601z62zzdataflow_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62dataflowzd2testzd2envzd2co1415zb0zzdataflow_walkz00(obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62lambda1607z62zzdataflow_walkz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1608z62zzdataflow_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62abortzf3zd2letzd2var1433z91zzdataflow_walkz00(obj_t,
		obj_t);
	static obj_t BGl_z62abortzf3zd2sequence1429z43zzdataflow_walkz00(obj_t,
		obj_t);
	static obj_t BGl_z62dataflowzd2testzd2falsezd21420zb0zzdataflow_walkz00(obj_t,
		obj_t);
	static obj_t BGl_z62dataflowzd2testzd2falsezd2envzb0zzdataflow_walkz00(obj_t,
		obj_t);
	static obj_t BGl_z62dataflowzd2testzd2falsezd21423zb0zzdataflow_walkz00(obj_t,
		obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	static obj_t BGl_z62dataflowzd2nodez12zd2seque1375z70zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_z62dataflowzd2testzd2envzd2le1419zb0zzdataflow_walkz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31850ze3ze5zzdataflow_walkz00(obj_t,
		obj_t);
	static obj_t BGl_z62dataflowzd2nodez12zd2switc1393z70zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31585ze3ze5zzdataflow_walkz00(obj_t,
		obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzdataflow_walkz00 = BUNSPEC;
	extern obj_t BGl_funz00zzast_varz00;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	extern obj_t BGl_tclassz00zzobject_classz00;
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62dataflowzd2testzd2envz62zzdataflow_walkz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzdataflow_walkz00();
	static obj_t BGl_z62dataflowzd2walkz12za2zzdataflow_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62dataflowzd2nodez12zd2setzd2e1399za2zzdataflow_walkz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzdataflow_walkz00();
	BGL_IMPORT obj_t BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	static obj_t BGl_z62dataflowzd2nodez12zd2exter1385z70zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_za2z42epairzf3za2zb1zzdataflow_walkz00 = BUNSPEC;
	static obj_t BGl_z62dataflowzd2nodez12zd2setq1387z70zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62dataflowzd2nodez12zd2condi1389z70zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_abortzf3zf3zzdataflow_walkz00(BgL_nodez00_bglt);
	static obj_t BGl_z62dataflowzd2nodez12zd2var1370z70zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	extern obj_t BGl_varz00zzast_nodez00;
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt,
		bool_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	extern obj_t BGl_za2pairza2z00zztype_cachez00;
	static obj_t BGl_z62abortzf31424z91zzdataflow_walkz00(obj_t, obj_t);
	static long BGl_letzd2varzd2stampz00zzdataflow_walkz00;
	static obj_t
		BGl_z62dataflowzd2nodez12zd2letzd2f1395za2zzdataflow_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62dataflowzd2nodez12zd2letzd2v1397za2zzdataflow_walkz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	static obj_t BGl_z62dataflowzd2testzd2envzd2in1413zb0zzdataflow_walkz00(obj_t,
		obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzdataflow_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_feffectz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_spreadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_cgraphz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
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
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_z62dataflowzd2testzd2env1408z62zzdataflow_walkz00(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzdataflow_walkz00();
	static obj_t BGl_z62abortzf3zd2app1439z43zzdataflow_walkz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzdataflow_walkz00();
	static obj_t BGl_za2z42nullzf3za2zb1zzdataflow_walkz00 = BUNSPEC;
	static obj_t BGl_importedzd2moduleszd2initz00zzdataflow_walkz00();
	extern obj_t BGl_za2bnilza2z00zztype_cachez00;
	static obj_t BGl_dataflowzd2testzd2envz00zzdataflow_walkz00(BgL_nodez00_bglt);
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_instanceofz00zzast_nodez00;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_valuez00zzast_varz00;
	static obj_t BGl_z62abortzf3zd2funcall1441z43zzdataflow_walkz00(obj_t, obj_t);
	static obj_t BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(BgL_nodez00_bglt,
		obj_t);
	static obj_t BGl_localzf2valuezf2zzdataflow_walkz00 = BUNSPEC;
	extern obj_t BGl_switchz00zzast_nodez00;
	static obj_t BGl_z62abortzf3zd2conditional1437z43zzdataflow_walkz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static BgL_localz00_bglt BGl_z62lambda1576z62zzdataflow_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_isazd2ofzd2zztype_miscz00(BgL_nodez00_bglt);
	static obj_t BGl_z62abortzf3zd2appzd2ly1443z91zzdataflow_walkz00(obj_t,
		obj_t);
	static BgL_localz00_bglt BGl_z62lambda1583z62zzdataflow_walkz00(obj_t, obj_t);
	static obj_t BGl_z62abortzf3zd2fail1427z43zzdataflow_walkz00(obj_t, obj_t);
	static BgL_localz00_bglt BGl_z62lambda1586z62zzdataflow_walkz00(obj_t, obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_z62dataflowzd2testzd2envzd2va1417zb0zzdataflow_walkz00(obj_t,
		obj_t);
	static obj_t __cnst[12];


	   
		 
		DEFINE_STRING(BGl_string2300z00zzdataflow_walkz00,
		BgL_bgl_string2300za700za7za7d2365za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string2301z00zzdataflow_walkz00,
		BgL_bgl_string2301za700za7za7d2366za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string2311z00zzdataflow_walkz00,
		BgL_bgl_string2311za700za7za7d2367za7, "dataflow-node!1367", 18);
	      DEFINE_STRING(BGl_string2313z00zzdataflow_walkz00,
		BgL_bgl_string2313za700za7za7d2368za7, "dataflow-test-env1408", 21);
	      DEFINE_STRING(BGl_string2315z00zzdataflow_walkz00,
		BgL_bgl_string2315za700za7za7d2369za7, "dataflow-test-false-1420", 24);
	      DEFINE_STRING(BGl_string2317z00zzdataflow_walkz00,
		BgL_bgl_string2317za700za7za7d2370za7, "abort?1424", 10);
	      DEFINE_STRING(BGl_string2319z00zzdataflow_walkz00,
		BgL_bgl_string2319za700za7za7d2371za7, "dataflow-node!", 14);
	      DEFINE_STRING(BGl_string2339z00zzdataflow_walkz00,
		BgL_bgl_string2339za700za7za7d2372za7, "dataflow-test-env", 17);
	      DEFINE_STRING(BGl_string2345z00zzdataflow_walkz00,
		BgL_bgl_string2345za700za7za7d2373za7, "dataflow-test-false-env", 23);
	      DEFINE_STRING(BGl_string2347z00zzdataflow_walkz00,
		BgL_bgl_string2347za700za7za7d2374za7, "abort?", 6);
	      DEFINE_STRING(BGl_string2356z00zzdataflow_walkz00,
		BgL_bgl_string2356za700za7za7d2375za7, "dataflow_walk", 13);
	      DEFINE_STRING(BGl_string2357z00zzdataflow_walkz00,
		BgL_bgl_string2357za700za7za7d2376za7,
		"read _ dataflow_walk local/value node int stamp $epair? $pair? foreign $null? pass-started ",
		91);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_dataflowzd2testzd2falsezd2envzd2envz00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2te2377z00,
		BGl_z62dataflowzd2testzd2falsezd2envzb0zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2302z00zzdataflow_walkz00,
		BgL_bgl_za762lambda1601za7622378z00, BGl_z62lambda1601z62zzdataflow_walkz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2303z00zzdataflow_walkz00,
		BgL_bgl_za762lambda1600za7622379z00, BGl_z62lambda1600z62zzdataflow_walkz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2304z00zzdataflow_walkz00,
		BgL_bgl_za762lambda1608za7622380z00, BGl_z62lambda1608z62zzdataflow_walkz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2305z00zzdataflow_walkz00,
		BgL_bgl_za762lambda1607za7622381z00, BGl_z62lambda1607z62zzdataflow_walkz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2306z00zzdataflow_walkz00,
		BgL_bgl_za762lambda1586za7622382z00, BGl_z62lambda1586z62zzdataflow_walkz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2307z00zzdataflow_walkz00,
		BgL_bgl_za762za7c3za704anonymo2383za7,
		BGl_z62zc3z04anonymousza31585ze3ze5zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2308z00zzdataflow_walkz00,
		BgL_bgl_za762lambda1583za7622384z00, BGl_z62lambda1583z62zzdataflow_walkz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2309z00zzdataflow_walkz00,
		BgL_bgl_za762lambda1576za7622385z00, BGl_z62lambda1576z62zzdataflow_walkz00,
		0L, BUNSPEC, 13);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2310z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2no2386z00,
		BGl_z62dataflowzd2nodez121367za2zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2312z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2te2387z00,
		BGl_z62dataflowzd2testzd2env1408z62zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2314z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2te2388z00,
		BGl_z62dataflowzd2testzd2falsezd21420zb0zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2316z00zzdataflow_walkz00,
		BgL_bgl_za762abortza7f31424za72389za7,
		BGl_z62abortzf31424z91zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2318z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2no2390z00,
		BGl_z62dataflowzd2nodez12zd2var1370z70zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2320z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2no2391z00,
		BGl_z62dataflowzd2nodez12zd2closu1372z70zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2321z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2no2392z00,
		BGl_z62dataflowzd2nodez12zd2seque1375z70zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2322z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2no2393z00,
		BGl_z62dataflowzd2nodez12zd2sync1377z70zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2323z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2no2394z00,
		BGl_z62dataflowzd2nodez12zd2app1379z70zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2324z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2no2395z00,
		BGl_z62dataflowzd2nodez12zd2appzd2l1381za2zzdataflow_walkz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2325z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2no2396z00,
		BGl_z62dataflowzd2nodez12zd2funca1383z70zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2326z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2no2397z00,
		BGl_z62dataflowzd2nodez12zd2exter1385z70zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2327z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2no2398z00,
		BGl_z62dataflowzd2nodez12zd2setq1387z70zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2328z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2no2399z00,
		BGl_z62dataflowzd2nodez12zd2condi1389z70zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2329z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2no2400z00,
		BGl_z62dataflowzd2nodez12zd2fail1391z70zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_GENERIC(BGl_abortzf3zd2envz21zzdataflow_walkz00,
		BgL_bgl_za762abortza7f3za791za7za72401za7,
		BGl_z62abortzf3z91zzdataflow_walkz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dataflowzd2walkz12zd2envz12zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2wa2402z00,
		BGl_z62dataflowzd2walkz12za2zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2330z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2no2403z00,
		BGl_z62dataflowzd2nodez12zd2switc1393z70zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2331z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2no2404z00,
		BGl_z62dataflowzd2nodez12zd2letzd2f1395za2zzdataflow_walkz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2332z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2no2405z00,
		BGl_z62dataflowzd2nodez12zd2letzd2v1397za2zzdataflow_walkz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2333z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2no2406z00,
		BGl_z62dataflowzd2nodez12zd2setzd2e1399za2zzdataflow_walkz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2334z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2no2407z00,
		BGl_z62dataflowzd2nodez12zd2jumpzd21401za2zzdataflow_walkz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2335z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2no2408z00,
		BGl_z62dataflowzd2nodez12zd2makezd21403za2zzdataflow_walkz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2336z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2no2409z00,
		BGl_z62dataflowzd2nodez12zd2boxzd2r1405za2zzdataflow_walkz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2337z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2no2410z00,
		BGl_z62dataflowzd2nodez12zd2boxzd2s1407za2zzdataflow_walkz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2338z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2te2411z00,
		BGl_z62dataflowzd2testzd2envzd2ap1411zb0zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2340z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2te2412z00,
		BGl_z62dataflowzd2testzd2envzd2in1413zb0zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2341z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2te2413z00,
		BGl_z62dataflowzd2testzd2envzd2co1415zb0zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2342z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2te2414z00,
		BGl_z62dataflowzd2testzd2envzd2va1417zb0zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2343z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2te2415z00,
		BGl_z62dataflowzd2testzd2envzd2le1419zb0zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2344z00zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2te2416z00,
		BGl_z62dataflowzd2testzd2falsezd21423zb0zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2346z00zzdataflow_walkz00,
		BgL_bgl_za762abortza7f3za7d2fa2417za7,
		BGl_z62abortzf3zd2fail1427z43zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2348z00zzdataflow_walkz00,
		BgL_bgl_za762abortza7f3za7d2se2418za7,
		BGl_z62abortzf3zd2sequence1429z43zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2349z00zzdataflow_walkz00,
		BgL_bgl_za762abortza7f3za7d2sy2419za7,
		BGl_z62abortzf3zd2sync1431z43zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2350z00zzdataflow_walkz00,
		BgL_bgl_za762abortza7f3za7d2le2420za7,
		BGl_z62abortzf3zd2letzd2var1433z91zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2351z00zzdataflow_walkz00,
		BgL_bgl_za762abortza7f3za7d2le2421za7,
		BGl_z62abortzf3zd2letzd2fun1435z91zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2352z00zzdataflow_walkz00,
		BgL_bgl_za762abortza7f3za7d2co2422za7,
		BGl_z62abortzf3zd2conditional1437z43zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2353z00zzdataflow_walkz00,
		BgL_bgl_za762abortza7f3za7d2ap2423za7,
		BGl_z62abortzf3zd2app1439z43zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2354z00zzdataflow_walkz00,
		BgL_bgl_za762abortza7f3za7d2fu2424za7,
		BGl_z62abortzf3zd2funcall1441z43zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2355z00zzdataflow_walkz00,
		BgL_bgl_za762abortza7f3za7d2ap2425za7,
		BGl_z62abortzf3zd2appzd2ly1443z91zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2295z00zzdataflow_walkz00,
		BgL_bgl_string2295za700za7za7d2426za7, "   . ", 5);
	      DEFINE_STRING(BGl_string2296z00zzdataflow_walkz00,
		BgL_bgl_string2296za700za7za7d2427za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string2297z00zzdataflow_walkz00,
		BgL_bgl_string2297za700za7za7d2428za7, " error", 6);
	      DEFINE_STRING(BGl_string2298z00zzdataflow_walkz00,
		BgL_bgl_string2298za700za7za7d2429za7, "s", 1);
	      DEFINE_STRING(BGl_string2299z00zzdataflow_walkz00,
		BgL_bgl_string2299za700za7za7d2430za7, "", 0);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_dataflowzd2testzd2envzd2envzd2zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2te2431z00,
		BGl_z62dataflowzd2testzd2envz62zzdataflow_walkz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
		BgL_bgl_za762dataflowza7d2no2432z00,
		BGl_z62dataflowzd2nodez12za2zzdataflow_walkz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2z42pairzf3za2zb1zzdataflow_walkz00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzdataflow_walkz00));
		     ADD_ROOT((void *) (&BGl_za2z42epairzf3za2zb1zzdataflow_walkz00));
		     ADD_ROOT((void *) (&BGl_za2z42nullzf3za2zb1zzdataflow_walkz00));
		     ADD_ROOT((void *) (&BGl_localzf2valuezf2zzdataflow_walkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzdataflow_walkz00(long
		BgL_checksumz00_3747, char *BgL_fromz00_3748)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzdataflow_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzdataflow_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzdataflow_walkz00();
					BGl_libraryzd2moduleszd2initz00zzdataflow_walkz00();
					BGl_cnstzd2initzd2zzdataflow_walkz00();
					BGl_importedzd2moduleszd2initz00zzdataflow_walkz00();
					BGl_objectzd2initzd2zzdataflow_walkz00();
					BGl_genericzd2initzd2zzdataflow_walkz00();
					BGl_methodzd2initzd2zzdataflow_walkz00();
					return BGl_toplevelzd2initzd2zzdataflow_walkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzdataflow_walkz00()
	{
		{	/* Dataflow/walk.scm 17 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"dataflow_walk");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"dataflow_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"dataflow_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"dataflow_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"dataflow_walk");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"dataflow_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"dataflow_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"dataflow_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "dataflow_walk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"dataflow_walk");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "dataflow_walk");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"dataflow_walk");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzdataflow_walkz00()
	{
		{	/* Dataflow/walk.scm 17 */
			{	/* Dataflow/walk.scm 17 */
				obj_t BgL_cportz00_3449;

				{	/* Dataflow/walk.scm 17 */
					obj_t BgL_stringz00_3457;

					BgL_stringz00_3457 = BGl_string2357z00zzdataflow_walkz00;
					{	/* Dataflow/walk.scm 17 */
						obj_t BgL_startz00_3458;

						BgL_startz00_3458 = BINT(((long) 0));
						{	/* Dataflow/walk.scm 17 */
							obj_t BgL_endz00_3459;

							BgL_endz00_3459 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3457)));
							{	/* Dataflow/walk.scm 17 */

								BgL_cportz00_3449 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3457, BgL_startz00_3458, BgL_endz00_3459);
				}}}}
				{
					long BgL_iz00_3450;

					BgL_iz00_3450 = ((long) 11);
				BgL_loopz00_3451:
					if ((BgL_iz00_3450 == ((long) -1)))
						{	/* Dataflow/walk.scm 17 */
							return BUNSPEC;
						}
					else
						{	/* Dataflow/walk.scm 17 */
							{	/* Dataflow/walk.scm 17 */
								obj_t BgL_arg2359z00_3453;

								{	/* Dataflow/walk.scm 17 */

									{	/* Dataflow/walk.scm 17 */
										obj_t BgL_locationz00_3455;

										BgL_locationz00_3455 = BBOOL(((bool_t) 0));
										{	/* Dataflow/walk.scm 17 */

											BgL_arg2359z00_3453 =
												BGl_readz00zz__readerz00(BgL_cportz00_3449,
												BgL_locationz00_3455);
										}
									}
								}
								{	/* Dataflow/walk.scm 17 */
									int BgL_tmpz00_3781;

									BgL_tmpz00_3781 = (int) (BgL_iz00_3450);
									CNST_TABLE_SET(BgL_tmpz00_3781, BgL_arg2359z00_3453);
							}}
							{	/* Dataflow/walk.scm 17 */
								int BgL_auxz00_3456;

								BgL_auxz00_3456 = (int) ((BgL_iz00_3450 - ((long) 1)));
								{
									long BgL_iz00_3786;

									BgL_iz00_3786 = (long) (BgL_auxz00_3456);
									BgL_iz00_3450 = BgL_iz00_3786;
									goto BgL_loopz00_3451;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzdataflow_walkz00()
	{
		{	/* Dataflow/walk.scm 17 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzdataflow_walkz00()
	{
		{	/* Dataflow/walk.scm 17 */
			BGl_za2z42nullzf3za2zb1zzdataflow_walkz00 = BFALSE;
			BGl_za2z42pairzf3za2zb1zzdataflow_walkz00 = BFALSE;
			BGl_za2z42epairzf3za2zb1zzdataflow_walkz00 = BFALSE;
			BGl_letzd2varzd2stampz00zzdataflow_walkz00 = ((long) 0);
			return BUNSPEC;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzdataflow_walkz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1785;

				BgL_headz00_1785 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1786;
					obj_t BgL_tailz00_1787;

					BgL_prevz00_1786 = BgL_headz00_1785;
					BgL_tailz00_1787 = BgL_l1z00_1;
				BgL_loopz00_1788:
					if (PAIRP(BgL_tailz00_1787))
						{
							obj_t BgL_newzd2prevzd2_1790;

							BgL_newzd2prevzd2_1790 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1787), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1786, BgL_newzd2prevzd2_1790);
							{
								obj_t BgL_tailz00_3796;
								obj_t BgL_prevz00_3795;

								BgL_prevz00_3795 = BgL_newzd2prevzd2_1790;
								BgL_tailz00_3796 = CDR(BgL_tailz00_1787);
								BgL_tailz00_1787 = BgL_tailz00_3796;
								BgL_prevz00_1786 = BgL_prevz00_3795;
								goto BgL_loopz00_1788;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1785);
				}
			}
		}

	}



/* dataflow-walk! */
	BGL_EXPORTED_DEF obj_t BGl_dataflowzd2walkz12zc0zzdataflow_walkz00(obj_t
		BgL_globalsz00_56, obj_t BgL_namez00_57)
	{
		{	/* Dataflow/walk.scm 45 */
			{	/* Dataflow/walk.scm 46 */
				obj_t BgL_list1463z00_1799;

				{	/* Dataflow/walk.scm 46 */
					obj_t BgL_arg1464z00_1800;

					{	/* Dataflow/walk.scm 46 */
						obj_t BgL_arg1465z00_1801;

						BgL_arg1465z00_1801 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1464z00_1800 =
							MAKE_YOUNG_PAIR(BgL_namez00_57, BgL_arg1465z00_1801);
					}
					BgL_list1463z00_1799 =
						MAKE_YOUNG_PAIR(BGl_string2295z00zzdataflow_walkz00,
						BgL_arg1464z00_1800);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1463z00_1799);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 = BgL_namez00_57;
			{	/* Dataflow/walk.scm 46 */
				obj_t BgL_g1137z00_1802;

				BgL_g1137z00_1802 = BNIL;
				{
					obj_t BgL_hooksz00_1805;
					obj_t BgL_hnamesz00_1806;

					BgL_hooksz00_1805 = BgL_g1137z00_1802;
					BgL_hnamesz00_1806 = BNIL;
				BgL_zc3z04anonymousza31466ze3z87_1807:
					if (NULLP(BgL_hooksz00_1805))
						{	/* Dataflow/walk.scm 46 */
							CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Dataflow/walk.scm 46 */
							bool_t BgL_test2437z00_3809;

							{	/* Dataflow/walk.scm 46 */
								obj_t BgL_fun1479z00_1814;

								BgL_fun1479z00_1814 = CAR(((obj_t) BgL_hooksz00_1805));
								BgL_test2437z00_3809 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1479z00_1814)
									(BgL_fun1479z00_1814, BEOA));
							}
							if (BgL_test2437z00_3809)
								{	/* Dataflow/walk.scm 46 */
									obj_t BgL_arg1474z00_1811;
									obj_t BgL_arg1476z00_1812;

									BgL_arg1474z00_1811 = CDR(((obj_t) BgL_hooksz00_1805));
									BgL_arg1476z00_1812 = CDR(((obj_t) BgL_hnamesz00_1806));
									{
										obj_t BgL_hnamesz00_3821;
										obj_t BgL_hooksz00_3820;

										BgL_hooksz00_3820 = BgL_arg1474z00_1811;
										BgL_hnamesz00_3821 = BgL_arg1476z00_1812;
										BgL_hnamesz00_1806 = BgL_hnamesz00_3821;
										BgL_hooksz00_1805 = BgL_hooksz00_3820;
										goto BgL_zc3z04anonymousza31466ze3z87_1807;
									}
								}
							else
								{	/* Dataflow/walk.scm 46 */
									obj_t BgL_arg1477z00_1813;

									BgL_arg1477z00_1813 = CAR(((obj_t) BgL_hnamesz00_1806));
									BGl_internalzd2errorzd2zztools_errorz00(BgL_namez00_57,
										BGl_string2296z00zzdataflow_walkz00, BgL_arg1477z00_1813);
								}
						}
				}
			}
			BGl_za2z42nullzf3za2zb1zzdataflow_walkz00 =
				BGl_findzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 1)),
				CNST_TABLE_REF(((long) 2)));
			BGl_za2z42pairzf3za2zb1zzdataflow_walkz00 =
				BGl_findzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 3)),
				CNST_TABLE_REF(((long) 2)));
			BGl_za2z42epairzf3za2zb1zzdataflow_walkz00 =
				BGl_findzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 4)),
				CNST_TABLE_REF(((long) 2)));
			{
				obj_t BgL_l1323z00_1818;

				BgL_l1323z00_1818 = BgL_globalsz00_56;
			BgL_zc3z04anonymousza31481ze3z87_1819:
				if (PAIRP(BgL_l1323z00_1818))
					{	/* Dataflow/walk.scm 50 */
						{	/* Dataflow/walk.scm 50 */
							obj_t BgL_arg1489z00_1821;

							BgL_arg1489z00_1821 = CAR(BgL_l1323z00_1818);
							{	/* Dataflow/walk.scm 64 */
								obj_t BgL_arg1536z00_2818;

								BgL_arg1536z00_2818 =
									(((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt)
												(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_globalz00_bglt) BgL_arg1489z00_1821))))->
													BgL_valuez00))))->BgL_bodyz00);
								BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(((BgL_nodez00_bglt)
										BgL_arg1536z00_2818), BNIL);
							}
						}
						{
							obj_t BgL_l1323z00_3844;

							BgL_l1323z00_3844 = CDR(BgL_l1323z00_1818);
							BgL_l1323z00_1818 = BgL_l1323z00_3844;
							goto BgL_zc3z04anonymousza31481ze3z87_1819;
						}
					}
				else
					{	/* Dataflow/walk.scm 50 */
						((bool_t) 1);
					}
			}
			if (
				((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
					((long) 0)))
				{	/* Dataflow/walk.scm 51 */
					{	/* Dataflow/walk.scm 51 */
						obj_t BgL_port1325z00_1826;

						{	/* Dataflow/walk.scm 51 */
							obj_t BgL_res2190z00_2826;

							{	/* Dataflow/walk.scm 51 */
								obj_t BgL_tmpz00_3849;

								BgL_tmpz00_3849 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2190z00_2826 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_3849);
							}
							BgL_port1325z00_1826 = BgL_res2190z00_2826;
						}
						bgl_display_obj(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
							BgL_port1325z00_1826);
						bgl_display_string(BGl_string2297z00zzdataflow_walkz00,
							BgL_port1325z00_1826);
						{	/* Dataflow/walk.scm 51 */
							obj_t BgL_arg1495z00_1827;

							{	/* Dataflow/walk.scm 51 */
								bool_t BgL_test2440z00_3854;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
									{	/* Dataflow/walk.scm 51 */
										if (INTEGERP
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
											{	/* Dataflow/walk.scm 51 */
												BgL_test2440z00_3854 =
													(
													(long)
													CINT
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
													> ((long) 1));
											}
										else
											{	/* Dataflow/walk.scm 51 */
												BgL_test2440z00_3854 =
													BGl_2ze3ze3zz__r4_numbers_6_5z00
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
													BINT(((long) 1)));
									}}
								else
									{	/* Dataflow/walk.scm 51 */
										BgL_test2440z00_3854 = ((bool_t) 0);
									}
								if (BgL_test2440z00_3854)
									{	/* Dataflow/walk.scm 51 */
										BgL_arg1495z00_1827 = BGl_string2298z00zzdataflow_walkz00;
									}
								else
									{	/* Dataflow/walk.scm 51 */
										BgL_arg1495z00_1827 = BGl_string2299z00zzdataflow_walkz00;
									}
							}
							bgl_display_obj(BgL_arg1495z00_1827, BgL_port1325z00_1826);
						}
						bgl_display_string(BGl_string2300z00zzdataflow_walkz00,
							BgL_port1325z00_1826);
						bgl_display_char(((unsigned char) 10), BgL_port1325z00_1826);
					}
					{	/* Dataflow/walk.scm 51 */
						obj_t BgL_list1499z00_1833;

						BgL_list1499z00_1833 = MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list1499z00_1833);
					}
				}
			else
				{	/* Dataflow/walk.scm 51 */
					obj_t BgL_g1140z00_1834;

					BgL_g1140z00_1834 = BNIL;
					{
						obj_t BgL_hooksz00_1837;
						obj_t BgL_hnamesz00_1838;

						BgL_hooksz00_1837 = BgL_g1140z00_1834;
						BgL_hnamesz00_1838 = BNIL;
					BgL_zc3z04anonymousza31500ze3z87_1839:
						if (NULLP(BgL_hooksz00_1837))
							{	/* Dataflow/walk.scm 51 */
								return BgL_globalsz00_56;
							}
						else
							{	/* Dataflow/walk.scm 51 */
								bool_t BgL_test2444z00_3871;

								{	/* Dataflow/walk.scm 51 */
									obj_t BgL_fun1530z00_1846;

									BgL_fun1530z00_1846 = CAR(((obj_t) BgL_hooksz00_1837));
									BgL_test2444z00_3871 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun1530z00_1846)
										(BgL_fun1530z00_1846, BEOA));
								}
								if (BgL_test2444z00_3871)
									{	/* Dataflow/walk.scm 51 */
										obj_t BgL_arg1518z00_1843;
										obj_t BgL_arg1521z00_1844;

										BgL_arg1518z00_1843 = CDR(((obj_t) BgL_hooksz00_1837));
										BgL_arg1521z00_1844 = CDR(((obj_t) BgL_hnamesz00_1838));
										{
											obj_t BgL_hnamesz00_3883;
											obj_t BgL_hooksz00_3882;

											BgL_hooksz00_3882 = BgL_arg1518z00_1843;
											BgL_hnamesz00_3883 = BgL_arg1521z00_1844;
											BgL_hnamesz00_1838 = BgL_hnamesz00_3883;
											BgL_hooksz00_1837 = BgL_hooksz00_3882;
											goto BgL_zc3z04anonymousza31500ze3z87_1839;
										}
									}
								else
									{	/* Dataflow/walk.scm 51 */
										obj_t BgL_arg1528z00_1845;

										BgL_arg1528z00_1845 = CAR(((obj_t) BgL_hnamesz00_1838));
										return
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_za2currentzd2passza2zd2zzengine_passz00,
											BGl_string2301z00zzdataflow_walkz00, BgL_arg1528z00_1845);
									}
							}
					}
				}
		}

	}



/* &dataflow-walk! */
	obj_t BGl_z62dataflowzd2walkz12za2zzdataflow_walkz00(obj_t BgL_envz00_3261,
		obj_t BgL_globalsz00_3262, obj_t BgL_namez00_3263)
	{
		{	/* Dataflow/walk.scm 45 */
			return
				BGl_dataflowzd2walkz12zc0zzdataflow_walkz00(BgL_globalsz00_3262,
				BgL_namez00_3263);
		}

	}



/* dataflow-node*! */
	obj_t BGl_dataflowzd2nodeza2z12z62zzdataflow_walkz00(obj_t BgL_nodeza2za2_99,
		obj_t BgL_envz00_100)
	{
		{	/* Dataflow/walk.scm 307 */
			{
				obj_t BgL_l1347z00_1852;

				BgL_l1347z00_1852 = BgL_nodeza2za2_99;
			BgL_zc3z04anonymousza31538ze3z87_1853:
				if (PAIRP(BgL_l1347z00_1852))
					{	/* Dataflow/walk.scm 308 */
						{	/* Dataflow/walk.scm 308 */
							obj_t BgL_nz00_1855;

							BgL_nz00_1855 = CAR(BgL_l1347z00_1852);
							BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(
								((BgL_nodez00_bglt) BgL_nz00_1855), BgL_envz00_100);
						}
						{
							obj_t BgL_l1347z00_3893;

							BgL_l1347z00_3893 = CDR(BgL_l1347z00_1852);
							BgL_l1347z00_1852 = BgL_l1347z00_3893;
							goto BgL_zc3z04anonymousza31538ze3z87_1853;
						}
					}
				else
					{	/* Dataflow/walk.scm 308 */
						((bool_t) 1);
					}
			}
			return BgL_envz00_100;
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzdataflow_walkz00()
	{
		{	/* Dataflow/walk.scm 17 */
			{	/* Dataflow/walk.scm 37 */
				obj_t BgL_arg1573z00_1862;
				obj_t BgL_arg1575z00_1863;

				{	/* Dataflow/walk.scm 37 */
					obj_t BgL_v1365z00_1897;

					BgL_v1365z00_1897 = create_vector(((long) 2));
					{	/* Dataflow/walk.scm 37 */
						obj_t BgL_arg1593z00_1898;

						BgL_arg1593z00_1898 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									5)), BGl_proc2303z00zzdataflow_walkz00,
							BGl_proc2302z00zzdataflow_walkz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 6)));
						VECTOR_SET(BgL_v1365z00_1897, ((long) 0), BgL_arg1593z00_1898);
					}
					{	/* Dataflow/walk.scm 37 */
						obj_t BgL_arg1604z00_1908;

						BgL_arg1604z00_1908 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									7)), BGl_proc2305z00zzdataflow_walkz00,
							BGl_proc2304z00zzdataflow_walkz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, BGl_nodez00zzast_nodez00);
						VECTOR_SET(BgL_v1365z00_1897, ((long) 1), BgL_arg1604z00_1908);
					}
					BgL_arg1573z00_1862 = BgL_v1365z00_1897;
				}
				{	/* Dataflow/walk.scm 37 */
					obj_t BgL_v1366z00_1918;

					BgL_v1366z00_1918 = create_vector(((long) 0));
					BgL_arg1575z00_1863 = BgL_v1366z00_1918;
				}
				return (BGl_localzf2valuezf2zzdataflow_walkz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 8)),
						CNST_TABLE_REF(((long) 9)), BGl_localz00zzast_varz00,
						((long) 51775), BGl_proc2309z00zzdataflow_walkz00,
						BGl_proc2308z00zzdataflow_walkz00, BFALSE,
						BGl_proc2307z00zzdataflow_walkz00,
						BGl_proc2306z00zzdataflow_walkz00, BgL_arg1573z00_1862,
						BgL_arg1575z00_1863), BUNSPEC);
		}}

	}



/* &lambda1586 */
	BgL_localz00_bglt BGl_z62lambda1586z62zzdataflow_walkz00(obj_t
		BgL_envz00_3272, obj_t BgL_o1123z00_3273)
	{
		{	/* Dataflow/walk.scm 37 */
			{	/* Dataflow/walk.scm 37 */
				long BgL_arg1588z00_3463;

				{	/* Dataflow/walk.scm 37 */
					obj_t BgL_arg1589z00_3464;

					{	/* Dataflow/walk.scm 37 */
						obj_t BgL_arg1592z00_3465;

						{	/* Dataflow/walk.scm 37 */
							long BgL_arg1816z00_3466;

							{	/* Dataflow/walk.scm 37 */
								long BgL_arg1817z00_3467;

								{	/* Dataflow/walk.scm 37 */
									long BgL_res2199z00_3468;

									BgL_res2199z00_3468 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_localz00_bglt) BgL_o1123z00_3273)));
									BgL_arg1817z00_3467 = BgL_res2199z00_3468;
								}
								BgL_arg1816z00_3466 = (BgL_arg1817z00_3467 - OBJECT_TYPE);
							}
							BgL_arg1592z00_3465 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3466);
						}
						BgL_arg1589z00_3464 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1592z00_3465);
					}
					{	/* Dataflow/walk.scm 37 */
						long BgL_res2201z00_3469;

						{	/* Dataflow/walk.scm 37 */
							obj_t BgL_tmpz00_3913;

							BgL_tmpz00_3913 = ((obj_t) BgL_arg1589z00_3464);
							BgL_res2201z00_3469 = BGL_CLASS_INDEX(BgL_tmpz00_3913);
						}
						BgL_arg1588z00_3463 = BgL_res2201z00_3469;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_localz00_bglt) BgL_o1123z00_3273)), BgL_arg1588z00_3463);
			}
			{	/* Dataflow/walk.scm 37 */
				BgL_objectz00_bglt BgL_tmpz00_3919;

				BgL_tmpz00_3919 =
					((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_o1123z00_3273));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3919, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_o1123z00_3273));
			return ((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1123z00_3273));
		}

	}



/* &<@anonymous:1585> */
	obj_t BGl_z62zc3z04anonymousza31585ze3ze5zzdataflow_walkz00(obj_t
		BgL_envz00_3274, obj_t BgL_new1122z00_3275)
	{
		{	/* Dataflow/walk.scm 37 */
			{
				BgL_localz00_bglt BgL_auxz00_3927;

				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_new1122z00_3275))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 10))), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1122z00_3275))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_3935;

					{	/* Dataflow/walk.scm 37 */
						obj_t BgL_classz00_3471;

						BgL_classz00_3471 = BGl_typez00zztype_typez00;
						{	/* Dataflow/walk.scm 37 */
							obj_t BgL__ortest_1106z00_3472;

							BgL__ortest_1106z00_3472 = BGL_CLASS_NIL(BgL_classz00_3471);
							if (CBOOL(BgL__ortest_1106z00_3472))
								{	/* Dataflow/walk.scm 37 */
									BgL_auxz00_3935 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_3472);
								}
							else
								{	/* Dataflow/walk.scm 37 */
									BgL_auxz00_3935 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3471));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_new1122z00_3275))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_3935), BUNSPEC);
				}
				{
					BgL_valuez00_bglt BgL_auxz00_3945;

					{	/* Dataflow/walk.scm 37 */
						obj_t BgL_classz00_3473;

						BgL_classz00_3473 = BGl_valuez00zzast_varz00;
						{	/* Dataflow/walk.scm 37 */
							obj_t BgL__ortest_1106z00_3474;

							BgL__ortest_1106z00_3474 = BGL_CLASS_NIL(BgL_classz00_3473);
							if (CBOOL(BgL__ortest_1106z00_3474))
								{	/* Dataflow/walk.scm 37 */
									BgL_auxz00_3945 =
										((BgL_valuez00_bglt) BgL__ortest_1106z00_3474);
								}
							else
								{	/* Dataflow/walk.scm 37 */
									BgL_auxz00_3945 =
										((BgL_valuez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3473));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_new1122z00_3275))))->
							BgL_valuez00) = ((BgL_valuez00_bglt) BgL_auxz00_3945), BUNSPEC);
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_new1122z00_3275))))->BgL_accessz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1122z00_3275))))->BgL_fastzd2alphazd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1122z00_3275))))->BgL_removablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1122z00_3275))))->BgL_occurrencez00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1122z00_3275))))->BgL_occurrencewz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1122z00_3275))))->BgL_userzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_localz00_bglt) COBJECT(((BgL_localz00_bglt) ((BgL_localz00_bglt)
										BgL_new1122z00_3275))))->BgL_keyz00) =
					((long) ((long) 0)), BUNSPEC);
				{
					BgL_localzf2valuezf2_bglt BgL_auxz00_3976;

					{
						obj_t BgL_auxz00_3977;

						{	/* Dataflow/walk.scm 37 */
							BgL_objectz00_bglt BgL_tmpz00_3978;

							BgL_tmpz00_3978 =
								((BgL_objectz00_bglt)
								((BgL_localz00_bglt) BgL_new1122z00_3275));
							BgL_auxz00_3977 = BGL_OBJECT_WIDENING(BgL_tmpz00_3978);
						}
						BgL_auxz00_3976 = ((BgL_localzf2valuezf2_bglt) BgL_auxz00_3977);
					}
					((((BgL_localzf2valuezf2_bglt) COBJECT(BgL_auxz00_3976))->
							BgL_stampz00) = ((int) (int) (((long) 0))), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_3992;
					BgL_localzf2valuezf2_bglt BgL_auxz00_3985;

					{	/* Dataflow/walk.scm 37 */
						obj_t BgL_classz00_3475;

						BgL_classz00_3475 = BGl_nodez00zzast_nodez00;
						{	/* Dataflow/walk.scm 37 */
							obj_t BgL__ortest_1106z00_3476;

							BgL__ortest_1106z00_3476 = BGL_CLASS_NIL(BgL_classz00_3475);
							if (CBOOL(BgL__ortest_1106z00_3476))
								{	/* Dataflow/walk.scm 37 */
									BgL_auxz00_3992 =
										((BgL_nodez00_bglt) BgL__ortest_1106z00_3476);
								}
							else
								{	/* Dataflow/walk.scm 37 */
									BgL_auxz00_3992 =
										((BgL_nodez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3475));
								}
						}
					}
					{
						obj_t BgL_auxz00_3986;

						{	/* Dataflow/walk.scm 37 */
							BgL_objectz00_bglt BgL_tmpz00_3987;

							BgL_tmpz00_3987 =
								((BgL_objectz00_bglt)
								((BgL_localz00_bglt) BgL_new1122z00_3275));
							BgL_auxz00_3986 = BGL_OBJECT_WIDENING(BgL_tmpz00_3987);
						}
						BgL_auxz00_3985 = ((BgL_localzf2valuezf2_bglt) BgL_auxz00_3986);
					}
					((((BgL_localzf2valuezf2_bglt) COBJECT(BgL_auxz00_3985))->
							BgL_nodez00) = ((BgL_nodez00_bglt) BgL_auxz00_3992), BUNSPEC);
				}
				BgL_auxz00_3927 = ((BgL_localz00_bglt) BgL_new1122z00_3275);
				return ((obj_t) BgL_auxz00_3927);
			}
		}

	}



/* &lambda1583 */
	BgL_localz00_bglt BGl_z62lambda1583z62zzdataflow_walkz00(obj_t
		BgL_envz00_3276, obj_t BgL_o1119z00_3277)
	{
		{	/* Dataflow/walk.scm 37 */
			{	/* Dataflow/walk.scm 37 */
				BgL_localzf2valuezf2_bglt BgL_wide1121z00_3478;

				BgL_wide1121z00_3478 =
					((BgL_localzf2valuezf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_localzf2valuezf2_bgl))));
				{	/* Dataflow/walk.scm 37 */
					obj_t BgL_auxz00_4007;
					BgL_objectz00_bglt BgL_tmpz00_4003;

					BgL_auxz00_4007 = ((obj_t) BgL_wide1121z00_3478);
					BgL_tmpz00_4003 =
						((BgL_objectz00_bglt)
						((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1119z00_3277)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4003, BgL_auxz00_4007);
				}
				((BgL_objectz00_bglt)
					((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1119z00_3277)));
				{	/* Dataflow/walk.scm 37 */
					long BgL_arg1584z00_3479;

					{	/* Dataflow/walk.scm 37 */
						long BgL_res2198z00_3480;

						BgL_res2198z00_3480 =
							BGL_CLASS_INDEX(BGl_localzf2valuezf2zzdataflow_walkz00);
						BgL_arg1584z00_3479 = BgL_res2198z00_3480;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_localz00_bglt)
								((BgL_localz00_bglt) BgL_o1119z00_3277))), BgL_arg1584z00_3479);
				}
				return
					((BgL_localz00_bglt)
					((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1119z00_3277)));
			}
		}

	}



/* &lambda1576 */
	BgL_localz00_bglt BGl_z62lambda1576z62zzdataflow_walkz00(obj_t
		BgL_envz00_3278, obj_t BgL_id1106z00_3279, obj_t BgL_name1107z00_3280,
		obj_t BgL_type1108z00_3281, obj_t BgL_value1109z00_3282,
		obj_t BgL_access1110z00_3283, obj_t BgL_fastzd2alpha1111zd2_3284,
		obj_t BgL_removable1112z00_3285, obj_t BgL_occurrence1113z00_3286,
		obj_t BgL_occurrencew1114z00_3287, obj_t BgL_userzf31115zf3_3288,
		obj_t BgL_key1116z00_3289, obj_t BgL_stamp1117z00_3290,
		obj_t BgL_node1118z00_3291)
	{
		{	/* Dataflow/walk.scm 37 */
			{	/* Dataflow/walk.scm 37 */
				long BgL_occurrence1113z00_3484;
				long BgL_occurrencew1114z00_3485;
				bool_t BgL_userzf31115zf3_3486;
				long BgL_key1116z00_3487;
				int BgL_stamp1117z00_3488;

				BgL_occurrence1113z00_3484 = (long) CINT(BgL_occurrence1113z00_3286);
				BgL_occurrencew1114z00_3485 = (long) CINT(BgL_occurrencew1114z00_3287);
				BgL_userzf31115zf3_3486 = CBOOL(BgL_userzf31115zf3_3288);
				BgL_key1116z00_3487 = (long) CINT(BgL_key1116z00_3289);
				BgL_stamp1117z00_3488 = CINT(BgL_stamp1117z00_3290);
				{	/* Dataflow/walk.scm 37 */
					BgL_localz00_bglt BgL_new1192z00_3490;

					{	/* Dataflow/walk.scm 37 */
						BgL_localz00_bglt BgL_tmp1190z00_3491;
						BgL_localzf2valuezf2_bglt BgL_wide1191z00_3492;

						{
							BgL_localz00_bglt BgL_auxz00_4026;

							{	/* Dataflow/walk.scm 37 */
								BgL_localz00_bglt BgL_new1189z00_3493;

								BgL_new1189z00_3493 =
									((BgL_localz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_localz00_bgl))));
								{	/* Dataflow/walk.scm 37 */
									long BgL_arg1582z00_3494;

									{	/* Dataflow/walk.scm 37 */
										long BgL_res2196z00_3495;

										BgL_res2196z00_3495 =
											BGL_CLASS_INDEX(BGl_localz00zzast_varz00);
										BgL_arg1582z00_3494 = BgL_res2196z00_3495;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1189z00_3493),
										BgL_arg1582z00_3494);
								}
								{	/* Dataflow/walk.scm 37 */
									BgL_objectz00_bglt BgL_tmpz00_4031;

									BgL_tmpz00_4031 = ((BgL_objectz00_bglt) BgL_new1189z00_3493);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4031, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1189z00_3493);
								BgL_auxz00_4026 = BgL_new1189z00_3493;
							}
							BgL_tmp1190z00_3491 = ((BgL_localz00_bglt) BgL_auxz00_4026);
						}
						BgL_wide1191z00_3492 =
							((BgL_localzf2valuezf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_localzf2valuezf2_bgl))));
						{	/* Dataflow/walk.scm 37 */
							obj_t BgL_auxz00_4039;
							BgL_objectz00_bglt BgL_tmpz00_4037;

							BgL_auxz00_4039 = ((obj_t) BgL_wide1191z00_3492);
							BgL_tmpz00_4037 = ((BgL_objectz00_bglt) BgL_tmp1190z00_3491);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4037, BgL_auxz00_4039);
						}
						((BgL_objectz00_bglt) BgL_tmp1190z00_3491);
						{	/* Dataflow/walk.scm 37 */
							long BgL_arg1578z00_3496;

							{	/* Dataflow/walk.scm 37 */
								long BgL_res2197z00_3497;

								BgL_res2197z00_3497 =
									BGL_CLASS_INDEX(BGl_localzf2valuezf2zzdataflow_walkz00);
								BgL_arg1578z00_3496 = BgL_res2197z00_3497;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1190z00_3491),
								BgL_arg1578z00_3496);
						}
						BgL_new1192z00_3490 = ((BgL_localz00_bglt) BgL_tmp1190z00_3491);
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_new1192z00_3490)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1106z00_3279)), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1192z00_3490)))->BgL_namez00) =
						((obj_t) BgL_name1107z00_3280), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1192z00_3490)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1108z00_3281)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1192z00_3490)))->BgL_valuez00) =
						((BgL_valuez00_bglt) ((BgL_valuez00_bglt) BgL_value1109z00_3282)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1192z00_3490)))->BgL_accessz00) =
						((obj_t) BgL_access1110z00_3283), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1192z00_3490)))->BgL_fastzd2alphazd2) =
						((obj_t) BgL_fastzd2alpha1111zd2_3284), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1192z00_3490)))->BgL_removablez00) =
						((obj_t) BgL_removable1112z00_3285), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1192z00_3490)))->BgL_occurrencez00) =
						((long) BgL_occurrence1113z00_3484), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1192z00_3490)))->BgL_occurrencewz00) =
						((long) BgL_occurrencew1114z00_3485), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1192z00_3490)))->BgL_userzf3zf3) =
						((bool_t) BgL_userzf31115zf3_3486), BUNSPEC);
					((((BgL_localz00_bglt) COBJECT(((BgL_localz00_bglt)
										BgL_new1192z00_3490)))->BgL_keyz00) =
						((long) BgL_key1116z00_3487), BUNSPEC);
					{
						BgL_localzf2valuezf2_bglt BgL_auxz00_4072;

						{
							obj_t BgL_auxz00_4073;

							{	/* Dataflow/walk.scm 37 */
								BgL_objectz00_bglt BgL_tmpz00_4074;

								BgL_tmpz00_4074 = ((BgL_objectz00_bglt) BgL_new1192z00_3490);
								BgL_auxz00_4073 = BGL_OBJECT_WIDENING(BgL_tmpz00_4074);
							}
							BgL_auxz00_4072 = ((BgL_localzf2valuezf2_bglt) BgL_auxz00_4073);
						}
						((((BgL_localzf2valuezf2_bglt) COBJECT(BgL_auxz00_4072))->
								BgL_stampz00) = ((int) BgL_stamp1117z00_3488), BUNSPEC);
					}
					{
						BgL_localzf2valuezf2_bglt BgL_auxz00_4079;

						{
							obj_t BgL_auxz00_4080;

							{	/* Dataflow/walk.scm 37 */
								BgL_objectz00_bglt BgL_tmpz00_4081;

								BgL_tmpz00_4081 = ((BgL_objectz00_bglt) BgL_new1192z00_3490);
								BgL_auxz00_4080 = BGL_OBJECT_WIDENING(BgL_tmpz00_4081);
							}
							BgL_auxz00_4079 = ((BgL_localzf2valuezf2_bglt) BgL_auxz00_4080);
						}
						((((BgL_localzf2valuezf2_bglt) COBJECT(BgL_auxz00_4079))->
								BgL_nodez00) =
							((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_node1118z00_3291)),
							BUNSPEC);
					}
					return BgL_new1192z00_3490;
				}
			}
		}

	}



/* &lambda1608 */
	obj_t BGl_z62lambda1608z62zzdataflow_walkz00(obj_t BgL_envz00_3292,
		obj_t BgL_oz00_3293, obj_t BgL_vz00_3294)
	{
		{	/* Dataflow/walk.scm 37 */
			{
				BgL_localzf2valuezf2_bglt BgL_auxz00_4087;

				{
					obj_t BgL_auxz00_4088;

					{	/* Dataflow/walk.scm 37 */
						BgL_objectz00_bglt BgL_tmpz00_4089;

						BgL_tmpz00_4089 =
							((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_oz00_3293));
						BgL_auxz00_4088 = BGL_OBJECT_WIDENING(BgL_tmpz00_4089);
					}
					BgL_auxz00_4087 = ((BgL_localzf2valuezf2_bglt) BgL_auxz00_4088);
				}
				return
					((((BgL_localzf2valuezf2_bglt) COBJECT(BgL_auxz00_4087))->
						BgL_nodez00) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_vz00_3294)), BUNSPEC);
			}
		}

	}



/* &lambda1607 */
	BgL_nodez00_bglt BGl_z62lambda1607z62zzdataflow_walkz00(obj_t BgL_envz00_3295,
		obj_t BgL_oz00_3296)
	{
		{	/* Dataflow/walk.scm 37 */
			{
				BgL_localzf2valuezf2_bglt BgL_auxz00_4096;

				{
					obj_t BgL_auxz00_4097;

					{	/* Dataflow/walk.scm 37 */
						BgL_objectz00_bglt BgL_tmpz00_4098;

						BgL_tmpz00_4098 =
							((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_oz00_3296));
						BgL_auxz00_4097 = BGL_OBJECT_WIDENING(BgL_tmpz00_4098);
					}
					BgL_auxz00_4096 = ((BgL_localzf2valuezf2_bglt) BgL_auxz00_4097);
				}
				return
					(((BgL_localzf2valuezf2_bglt) COBJECT(BgL_auxz00_4096))->BgL_nodez00);
			}
		}

	}



/* &lambda1601 */
	obj_t BGl_z62lambda1601z62zzdataflow_walkz00(obj_t BgL_envz00_3297,
		obj_t BgL_oz00_3298, obj_t BgL_vz00_3299)
	{
		{	/* Dataflow/walk.scm 37 */
			{	/* Dataflow/walk.scm 37 */
				int BgL_vz00_3502;

				BgL_vz00_3502 = CINT(BgL_vz00_3299);
				{
					BgL_localzf2valuezf2_bglt BgL_auxz00_4105;

					{
						obj_t BgL_auxz00_4106;

						{	/* Dataflow/walk.scm 37 */
							BgL_objectz00_bglt BgL_tmpz00_4107;

							BgL_tmpz00_4107 =
								((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_oz00_3298));
							BgL_auxz00_4106 = BGL_OBJECT_WIDENING(BgL_tmpz00_4107);
						}
						BgL_auxz00_4105 = ((BgL_localzf2valuezf2_bglt) BgL_auxz00_4106);
					}
					return
						((((BgL_localzf2valuezf2_bglt) COBJECT(BgL_auxz00_4105))->
							BgL_stampz00) = ((int) BgL_vz00_3502), BUNSPEC);
		}}}

	}



/* &lambda1600 */
	obj_t BGl_z62lambda1600z62zzdataflow_walkz00(obj_t BgL_envz00_3300,
		obj_t BgL_oz00_3301)
	{
		{	/* Dataflow/walk.scm 37 */
			{	/* Dataflow/walk.scm 37 */
				int BgL_tmpz00_4113;

				{
					BgL_localzf2valuezf2_bglt BgL_auxz00_4114;

					{
						obj_t BgL_auxz00_4115;

						{	/* Dataflow/walk.scm 37 */
							BgL_objectz00_bglt BgL_tmpz00_4116;

							BgL_tmpz00_4116 =
								((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_oz00_3301));
							BgL_auxz00_4115 = BGL_OBJECT_WIDENING(BgL_tmpz00_4116);
						}
						BgL_auxz00_4114 = ((BgL_localzf2valuezf2_bglt) BgL_auxz00_4115);
					}
					BgL_tmpz00_4113 =
						(((BgL_localzf2valuezf2_bglt) COBJECT(BgL_auxz00_4114))->
						BgL_stampz00);
				}
				return BINT(BgL_tmpz00_4113);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzdataflow_walkz00()
	{
		{	/* Dataflow/walk.scm 17 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_proc2310z00zzdataflow_walkz00, BGl_nodez00zzast_nodez00,
				BGl_string2311z00zzdataflow_walkz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_dataflowzd2testzd2envzd2envzd2zzdataflow_walkz00,
				BGl_proc2312z00zzdataflow_walkz00, BGl_nodez00zzast_nodez00,
				BGl_string2313z00zzdataflow_walkz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_dataflowzd2testzd2falsezd2envzd2envz00zzdataflow_walkz00,
				BGl_proc2314z00zzdataflow_walkz00, BGl_nodez00zzast_nodez00,
				BGl_string2315z00zzdataflow_walkz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_abortzf3zd2envz21zzdataflow_walkz00,
				BGl_proc2316z00zzdataflow_walkz00, BGl_nodez00zzast_nodez00,
				BGl_string2317z00zzdataflow_walkz00);
		}

	}



/* &abort?1424 */
	obj_t BGl_z62abortzf31424z91zzdataflow_walkz00(obj_t BgL_envz00_3306,
		obj_t BgL_nodez00_3307)
	{
		{	/* Dataflow/walk.scm 428 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &dataflow-test-false-1420 */
	obj_t BGl_z62dataflowzd2testzd2falsezd21420zb0zzdataflow_walkz00(obj_t
		BgL_envz00_3308, obj_t BgL_nodez00_3309)
	{
		{	/* Dataflow/walk.scm 400 */
			return BNIL;
		}

	}



/* &dataflow-test-env1408 */
	obj_t BGl_z62dataflowzd2testzd2env1408z62zzdataflow_walkz00(obj_t
		BgL_envz00_3310, obj_t BgL_nodez00_3311)
	{
		{	/* Dataflow/walk.scm 314 */
			return BNIL;
		}

	}



/* &dataflow-node!1367 */
	obj_t BGl_z62dataflowzd2nodez121367za2zzdataflow_walkz00(obj_t
		BgL_envz00_3312, obj_t BgL_nodez00_3313, obj_t BgL_envz00_3314)
	{
		{	/* Dataflow/walk.scm 69 */
			return ((obj_t) BgL_envz00_3314);
		}

	}



/* dataflow-node! */
	obj_t BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(BgL_nodez00_bglt
		BgL_nodez00_59, obj_t BgL_envz00_60)
	{
		{	/* Dataflow/walk.scm 69 */
			{	/* Dataflow/walk.scm 69 */
				obj_t BgL_method1368z00_1940;

				{	/* Dataflow/walk.scm 69 */
					obj_t BgL_res2212z00_2931;

					{	/* Dataflow/walk.scm 69 */
						long BgL_objzd2classzd2numz00_2896;

						{	/* Dataflow/walk.scm 69 */
							long BgL_res2202z00_2899;

							BgL_res2202z00_2899 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_59));
							BgL_objzd2classzd2numz00_2896 = BgL_res2202z00_2899;
						}
						{	/* Dataflow/walk.scm 69 */
							obj_t BgL_arg1813z00_2897;

							BgL_arg1813z00_2897 =
								PROCEDURE_REF(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
								(int) (((long) 1)));
							{	/* Dataflow/walk.scm 69 */
								int BgL_offsetz00_2901;

								BgL_offsetz00_2901 = (int) (BgL_objzd2classzd2numz00_2896);
								{	/* Dataflow/walk.scm 69 */
									long BgL_offsetz00_2902;

									BgL_offsetz00_2902 =
										((long) (BgL_offsetz00_2901) - OBJECT_TYPE);
									{	/* Dataflow/walk.scm 69 */
										long BgL_modz00_2903;

										BgL_modz00_2903 =
											(BgL_offsetz00_2902 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Dataflow/walk.scm 69 */
											long BgL_restz00_2905;

											BgL_restz00_2905 =
												(BgL_offsetz00_2902 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Dataflow/walk.scm 69 */

												{	/* Dataflow/walk.scm 69 */
													obj_t BgL_bucketz00_2907;

													BgL_bucketz00_2907 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2897), BgL_modz00_2903);
													BgL_res2212z00_2931 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2907), BgL_restz00_2905);
					}}}}}}}}
					BgL_method1368z00_1940 = BgL_res2212z00_2931;
				}
				return
					PROCEDURE_ENTRY(BgL_method1368z00_1940) (BgL_method1368z00_1940,
					((obj_t) BgL_nodez00_59), BgL_envz00_60, BEOA);
			}
		}

	}



/* &dataflow-node! */
	obj_t BGl_z62dataflowzd2nodez12za2zzdataflow_walkz00(obj_t BgL_envz00_3315,
		obj_t BgL_nodez00_3316, obj_t BgL_envz00_3317)
	{
		{	/* Dataflow/walk.scm 69 */
			return
				BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(
				((BgL_nodez00_bglt) BgL_nodez00_3316), BgL_envz00_3317);
		}

	}



/* dataflow-test-env */
	obj_t BGl_dataflowzd2testzd2envz00zzdataflow_walkz00(BgL_nodez00_bglt
		BgL_nodez00_101)
	{
		{	/* Dataflow/walk.scm 314 */
			{	/* Dataflow/walk.scm 314 */
				obj_t BgL_method1409z00_1941;

				{	/* Dataflow/walk.scm 314 */
					obj_t BgL_res2223z00_2968;

					{	/* Dataflow/walk.scm 314 */
						long BgL_objzd2classzd2numz00_2933;

						{	/* Dataflow/walk.scm 314 */
							long BgL_res2213z00_2936;

							BgL_res2213z00_2936 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_101));
							BgL_objzd2classzd2numz00_2933 = BgL_res2213z00_2936;
						}
						{	/* Dataflow/walk.scm 314 */
							obj_t BgL_arg1813z00_2934;

							BgL_arg1813z00_2934 =
								PROCEDURE_REF
								(BGl_dataflowzd2testzd2envzd2envzd2zzdataflow_walkz00,
								(int) (((long) 1)));
							{	/* Dataflow/walk.scm 314 */
								int BgL_offsetz00_2938;

								BgL_offsetz00_2938 = (int) (BgL_objzd2classzd2numz00_2933);
								{	/* Dataflow/walk.scm 314 */
									long BgL_offsetz00_2939;

									BgL_offsetz00_2939 =
										((long) (BgL_offsetz00_2938) - OBJECT_TYPE);
									{	/* Dataflow/walk.scm 314 */
										long BgL_modz00_2940;

										BgL_modz00_2940 =
											(BgL_offsetz00_2939 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Dataflow/walk.scm 314 */
											long BgL_restz00_2942;

											BgL_restz00_2942 =
												(BgL_offsetz00_2939 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Dataflow/walk.scm 314 */

												{	/* Dataflow/walk.scm 314 */
													obj_t BgL_bucketz00_2944;

													BgL_bucketz00_2944 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2934), BgL_modz00_2940);
													BgL_res2223z00_2968 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2944), BgL_restz00_2942);
					}}}}}}}}
					BgL_method1409z00_1941 = BgL_res2223z00_2968;
				}
				return
					PROCEDURE_ENTRY(BgL_method1409z00_1941) (BgL_method1409z00_1941,
					((obj_t) BgL_nodez00_101), BEOA);
			}
		}

	}



/* &dataflow-test-env */
	obj_t BGl_z62dataflowzd2testzd2envz62zzdataflow_walkz00(obj_t BgL_envz00_3318,
		obj_t BgL_nodez00_3319)
	{
		{	/* Dataflow/walk.scm 314 */
			return
				BGl_dataflowzd2testzd2envz00zzdataflow_walkz00(
				((BgL_nodez00_bglt) BgL_nodez00_3319));
		}

	}



/* dataflow-test-false-env */
	obj_t BGl_dataflowzd2testzd2falsezd2envzd2zzdataflow_walkz00(BgL_nodez00_bglt
		BgL_nodez00_107)
	{
		{	/* Dataflow/walk.scm 400 */
			{	/* Dataflow/walk.scm 400 */
				obj_t BgL_method1421z00_1942;

				{	/* Dataflow/walk.scm 400 */
					obj_t BgL_res2234z00_3005;

					{	/* Dataflow/walk.scm 400 */
						long BgL_objzd2classzd2numz00_2970;

						{	/* Dataflow/walk.scm 400 */
							long BgL_res2224z00_2973;

							BgL_res2224z00_2973 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_107));
							BgL_objzd2classzd2numz00_2970 = BgL_res2224z00_2973;
						}
						{	/* Dataflow/walk.scm 400 */
							obj_t BgL_arg1813z00_2971;

							BgL_arg1813z00_2971 =
								PROCEDURE_REF
								(BGl_dataflowzd2testzd2falsezd2envzd2envz00zzdataflow_walkz00,
								(int) (((long) 1)));
							{	/* Dataflow/walk.scm 400 */
								int BgL_offsetz00_2975;

								BgL_offsetz00_2975 = (int) (BgL_objzd2classzd2numz00_2970);
								{	/* Dataflow/walk.scm 400 */
									long BgL_offsetz00_2976;

									BgL_offsetz00_2976 =
										((long) (BgL_offsetz00_2975) - OBJECT_TYPE);
									{	/* Dataflow/walk.scm 400 */
										long BgL_modz00_2977;

										BgL_modz00_2977 =
											(BgL_offsetz00_2976 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Dataflow/walk.scm 400 */
											long BgL_restz00_2979;

											BgL_restz00_2979 =
												(BgL_offsetz00_2976 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Dataflow/walk.scm 400 */

												{	/* Dataflow/walk.scm 400 */
													obj_t BgL_bucketz00_2981;

													BgL_bucketz00_2981 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2971), BgL_modz00_2977);
													BgL_res2234z00_3005 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2981), BgL_restz00_2979);
					}}}}}}}}
					BgL_method1421z00_1942 = BgL_res2234z00_3005;
				}
				return
					PROCEDURE_ENTRY(BgL_method1421z00_1942) (BgL_method1421z00_1942,
					((obj_t) BgL_nodez00_107), BEOA);
			}
		}

	}



/* &dataflow-test-false-env */
	obj_t BGl_z62dataflowzd2testzd2falsezd2envzb0zzdataflow_walkz00(obj_t
		BgL_envz00_3320, obj_t BgL_nodez00_3321)
	{
		{	/* Dataflow/walk.scm 400 */
			return
				BGl_dataflowzd2testzd2falsezd2envzd2zzdataflow_walkz00(
				((BgL_nodez00_bglt) BgL_nodez00_3321));
		}

	}



/* abort? */
	obj_t BGl_abortzf3zf3zzdataflow_walkz00(BgL_nodez00_bglt BgL_nodez00_109)
	{
		{	/* Dataflow/walk.scm 428 */
			{	/* Dataflow/walk.scm 428 */
				obj_t BgL_method1425z00_1943;

				{	/* Dataflow/walk.scm 428 */
					obj_t BgL_res2245z00_3042;

					{	/* Dataflow/walk.scm 428 */
						long BgL_objzd2classzd2numz00_3007;

						{	/* Dataflow/walk.scm 428 */
							long BgL_res2235z00_3010;

							BgL_res2235z00_3010 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_109));
							BgL_objzd2classzd2numz00_3007 = BgL_res2235z00_3010;
						}
						{	/* Dataflow/walk.scm 428 */
							obj_t BgL_arg1813z00_3008;

							BgL_arg1813z00_3008 =
								PROCEDURE_REF(BGl_abortzf3zd2envz21zzdataflow_walkz00,
								(int) (((long) 1)));
							{	/* Dataflow/walk.scm 428 */
								int BgL_offsetz00_3012;

								BgL_offsetz00_3012 = (int) (BgL_objzd2classzd2numz00_3007);
								{	/* Dataflow/walk.scm 428 */
									long BgL_offsetz00_3013;

									BgL_offsetz00_3013 =
										((long) (BgL_offsetz00_3012) - OBJECT_TYPE);
									{	/* Dataflow/walk.scm 428 */
										long BgL_modz00_3014;

										BgL_modz00_3014 =
											(BgL_offsetz00_3013 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Dataflow/walk.scm 428 */
											long BgL_restz00_3016;

											BgL_restz00_3016 =
												(BgL_offsetz00_3013 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Dataflow/walk.scm 428 */

												{	/* Dataflow/walk.scm 428 */
													obj_t BgL_bucketz00_3018;

													BgL_bucketz00_3018 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_3008), BgL_modz00_3014);
													BgL_res2245z00_3042 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_3018), BgL_restz00_3016);
					}}}}}}}}
					BgL_method1425z00_1943 = BgL_res2245z00_3042;
				}
				return
					PROCEDURE_ENTRY(BgL_method1425z00_1943) (BgL_method1425z00_1943,
					((obj_t) BgL_nodez00_109), BEOA);
			}
		}

	}



/* &abort? */
	obj_t BGl_z62abortzf3z91zzdataflow_walkz00(obj_t BgL_envz00_3322,
		obj_t BgL_nodez00_3323)
	{
		{	/* Dataflow/walk.scm 428 */
			return
				BGl_abortzf3zf3zzdataflow_walkz00(
				((BgL_nodez00_bglt) BgL_nodez00_3323));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzdataflow_walkz00()
	{
		{	/* Dataflow/walk.scm 17 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_varz00zzast_nodez00, BGl_proc2318z00zzdataflow_walkz00,
				BGl_string2319z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_closurez00zzast_nodez00, BGl_proc2320z00zzdataflow_walkz00,
				BGl_string2319z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_sequencez00zzast_nodez00, BGl_proc2321z00zzdataflow_walkz00,
				BGl_string2319z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_syncz00zzast_nodez00, BGl_proc2322z00zzdataflow_walkz00,
				BGl_string2319z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_appz00zzast_nodez00, BGl_proc2323z00zzdataflow_walkz00,
				BGl_string2319z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc2324z00zzdataflow_walkz00,
				BGl_string2319z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_funcallz00zzast_nodez00, BGl_proc2325z00zzdataflow_walkz00,
				BGl_string2319z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_externz00zzast_nodez00, BGl_proc2326z00zzdataflow_walkz00,
				BGl_string2319z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_setqz00zzast_nodez00, BGl_proc2327z00zzdataflow_walkz00,
				BGl_string2319z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc2328z00zzdataflow_walkz00,
				BGl_string2319z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_failz00zzast_nodez00, BGl_proc2329z00zzdataflow_walkz00,
				BGl_string2319z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_switchz00zzast_nodez00, BGl_proc2330z00zzdataflow_walkz00,
				BGl_string2319z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc2331z00zzdataflow_walkz00,
				BGl_string2319z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc2332z00zzdataflow_walkz00,
				BGl_string2319z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc2333z00zzdataflow_walkz00,
				BGl_string2319z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc2334z00zzdataflow_walkz00,
				BGl_string2319z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc2335z00zzdataflow_walkz00,
				BGl_string2319z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc2336z00zzdataflow_walkz00,
				BGl_string2319z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc2337z00zzdataflow_walkz00,
				BGl_string2319z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2testzd2envzd2envzd2zzdataflow_walkz00,
				BGl_appz00zzast_nodez00, BGl_proc2338z00zzdataflow_walkz00,
				BGl_string2339z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2testzd2envzd2envzd2zzdataflow_walkz00,
				BGl_instanceofz00zzast_nodez00, BGl_proc2340z00zzdataflow_walkz00,
				BGl_string2339z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2testzd2envzd2envzd2zzdataflow_walkz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc2341z00zzdataflow_walkz00,
				BGl_string2339z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2testzd2envzd2envzd2zzdataflow_walkz00,
				BGl_varz00zzast_nodez00, BGl_proc2342z00zzdataflow_walkz00,
				BGl_string2339z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2testzd2envzd2envzd2zzdataflow_walkz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc2343z00zzdataflow_walkz00,
				BGl_string2339z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2testzd2falsezd2envzd2envz00zzdataflow_walkz00,
				BGl_appz00zzast_nodez00, BGl_proc2344z00zzdataflow_walkz00,
				BGl_string2345z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_abortzf3zd2envz21zzdataflow_walkz00, BGl_failz00zzast_nodez00,
				BGl_proc2346z00zzdataflow_walkz00, BGl_string2347z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_abortzf3zd2envz21zzdataflow_walkz00, BGl_sequencez00zzast_nodez00,
				BGl_proc2348z00zzdataflow_walkz00, BGl_string2347z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_abortzf3zd2envz21zzdataflow_walkz00, BGl_syncz00zzast_nodez00,
				BGl_proc2349z00zzdataflow_walkz00, BGl_string2347z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_abortzf3zd2envz21zzdataflow_walkz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc2350z00zzdataflow_walkz00, BGl_string2347z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_abortzf3zd2envz21zzdataflow_walkz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc2351z00zzdataflow_walkz00, BGl_string2347z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_abortzf3zd2envz21zzdataflow_walkz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc2352z00zzdataflow_walkz00,
				BGl_string2347z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_abortzf3zd2envz21zzdataflow_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc2353z00zzdataflow_walkz00, BGl_string2347z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_abortzf3zd2envz21zzdataflow_walkz00, BGl_funcallz00zzast_nodez00,
				BGl_proc2354z00zzdataflow_walkz00, BGl_string2347z00zzdataflow_walkz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_abortzf3zd2envz21zzdataflow_walkz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc2355z00zzdataflow_walkz00, BGl_string2347z00zzdataflow_walkz00);
		}

	}



/* &abort?-app-ly1443 */
	obj_t BGl_z62abortzf3zd2appzd2ly1443z91zzdataflow_walkz00(obj_t
		BgL_envz00_3359, obj_t BgL_nodez00_3360)
	{
		{	/* Dataflow/walk.scm 489 */
			{	/* Dataflow/walk.scm 491 */
				obj_t BgL__ortest_1188z00_3510;

				BgL__ortest_1188z00_3510 =
					BGl_abortzf3zf3zzdataflow_walkz00(
					(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_3360)))->BgL_funz00));
				if (CBOOL(BgL__ortest_1188z00_3510))
					{	/* Dataflow/walk.scm 491 */
						return BgL__ortest_1188z00_3510;
					}
				else
					{	/* Dataflow/walk.scm 491 */
						return
							BGl_abortzf3zf3zzdataflow_walkz00(
							(((BgL_appzd2lyzd2_bglt) COBJECT(
										((BgL_appzd2lyzd2_bglt) BgL_nodez00_3360)))->BgL_argz00));
					}
			}
		}

	}



/* &abort?-funcall1441 */
	obj_t BGl_z62abortzf3zd2funcall1441z43zzdataflow_walkz00(obj_t
		BgL_envz00_3361, obj_t BgL_nodez00_3362)
	{
		{	/* Dataflow/walk.scm 482 */
			{	/* Dataflow/walk.scm 484 */
				obj_t BgL__ortest_1186z00_3512;

				BgL__ortest_1186z00_3512 =
					BGl_abortzf3zf3zzdataflow_walkz00(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_3362)))->BgL_funz00));
				if (CBOOL(BgL__ortest_1186z00_3512))
					{	/* Dataflow/walk.scm 484 */
						return BgL__ortest_1186z00_3512;
					}
				else
					{	/* Dataflow/walk.scm 484 */
						obj_t BgL_g1363z00_3513;

						BgL_g1363z00_3513 =
							(((BgL_funcallz00_bglt) COBJECT(
									((BgL_funcallz00_bglt) BgL_nodez00_3362)))->BgL_argsz00);
						{
							obj_t BgL_l1361z00_3515;

							BgL_l1361z00_3515 = BgL_g1363z00_3513;
						BgL_zc3z04anonymousza32110ze3z87_3514:
							if (NULLP(BgL_l1361z00_3515))
								{	/* Dataflow/walk.scm 484 */
									return BFALSE;
								}
							else
								{	/* Dataflow/walk.scm 484 */
									obj_t BgL__ortest_1364z00_3516;

									{	/* Dataflow/walk.scm 484 */
										obj_t BgL_arg2114z00_3517;

										BgL_arg2114z00_3517 = CAR(((obj_t) BgL_l1361z00_3515));
										BgL__ortest_1364z00_3516 =
											BGl_abortzf3zf3zzdataflow_walkz00(
											((BgL_nodez00_bglt) BgL_arg2114z00_3517));
									}
									if (CBOOL(BgL__ortest_1364z00_3516))
										{	/* Dataflow/walk.scm 484 */
											return BgL__ortest_1364z00_3516;
										}
									else
										{	/* Dataflow/walk.scm 484 */
											obj_t BgL_arg2112z00_3518;

											BgL_arg2112z00_3518 = CDR(((obj_t) BgL_l1361z00_3515));
											{
												obj_t BgL_l1361z00_4317;

												BgL_l1361z00_4317 = BgL_arg2112z00_3518;
												BgL_l1361z00_3515 = BgL_l1361z00_4317;
												goto BgL_zc3z04anonymousza32110ze3z87_3514;
											}
										}
								}
						}
					}
			}
		}

	}



/* &abort?-app1439 */
	obj_t BGl_z62abortzf3zd2app1439z43zzdataflow_walkz00(obj_t BgL_envz00_3363,
		obj_t BgL_nodez00_3364)
	{
		{	/* Dataflow/walk.scm 475 */
			{	/* Dataflow/walk.scm 477 */
				obj_t BgL__ortest_1184z00_3520;

				{	/* Dataflow/walk.scm 477 */
					BgL_varz00_bglt BgL_arg2109z00_3521;

					BgL_arg2109z00_3521 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_3364)))->BgL_funz00);
					BgL__ortest_1184z00_3520 =
						BGl_abortzf3zf3zzdataflow_walkz00(
						((BgL_nodez00_bglt) BgL_arg2109z00_3521));
				}
				if (CBOOL(BgL__ortest_1184z00_3520))
					{	/* Dataflow/walk.scm 477 */
						return BgL__ortest_1184z00_3520;
					}
				else
					{	/* Dataflow/walk.scm 477 */
						obj_t BgL_g1359z00_3522;

						BgL_g1359z00_3522 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt) BgL_nodez00_3364)))->BgL_argsz00);
						{
							obj_t BgL_l1357z00_3524;

							BgL_l1357z00_3524 = BgL_g1359z00_3522;
						BgL_zc3z04anonymousza32105ze3z87_3523:
							if (NULLP(BgL_l1357z00_3524))
								{	/* Dataflow/walk.scm 477 */
									return BFALSE;
								}
							else
								{	/* Dataflow/walk.scm 477 */
									obj_t BgL__ortest_1360z00_3525;

									{	/* Dataflow/walk.scm 477 */
										obj_t BgL_arg2108z00_3526;

										BgL_arg2108z00_3526 = CAR(((obj_t) BgL_l1357z00_3524));
										BgL__ortest_1360z00_3525 =
											BGl_abortzf3zf3zzdataflow_walkz00(
											((BgL_nodez00_bglt) BgL_arg2108z00_3526));
									}
									if (CBOOL(BgL__ortest_1360z00_3525))
										{	/* Dataflow/walk.scm 477 */
											return BgL__ortest_1360z00_3525;
										}
									else
										{	/* Dataflow/walk.scm 477 */
											obj_t BgL_arg2107z00_3527;

											BgL_arg2107z00_3527 = CDR(((obj_t) BgL_l1357z00_3524));
											{
												obj_t BgL_l1357z00_4336;

												BgL_l1357z00_4336 = BgL_arg2107z00_3527;
												BgL_l1357z00_3524 = BgL_l1357z00_4336;
												goto BgL_zc3z04anonymousza32105ze3z87_3523;
											}
										}
								}
						}
					}
			}
		}

	}



/* &abort?-conditional1437 */
	obj_t BGl_z62abortzf3zd2conditional1437z43zzdataflow_walkz00(obj_t
		BgL_envz00_3365, obj_t BgL_nodez00_3366)
	{
		{	/* Dataflow/walk.scm 468 */
			{	/* Dataflow/walk.scm 470 */
				obj_t BgL__ortest_1181z00_3529;

				BgL__ortest_1181z00_3529 =
					BGl_abortzf3zf3zzdataflow_walkz00(
					(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_3366)))->BgL_testz00));
				if (CBOOL(BgL__ortest_1181z00_3529))
					{	/* Dataflow/walk.scm 470 */
						return BgL__ortest_1181z00_3529;
					}
				else
					{	/* Dataflow/walk.scm 470 */
						obj_t BgL__andtest_1182z00_3530;

						BgL__andtest_1182z00_3530 =
							BGl_abortzf3zf3zzdataflow_walkz00(
							(((BgL_conditionalz00_bglt) COBJECT(
										((BgL_conditionalz00_bglt) BgL_nodez00_3366)))->
								BgL_truez00));
						if (CBOOL(BgL__andtest_1182z00_3530))
							{	/* Dataflow/walk.scm 470 */
								return
									BGl_abortzf3zf3zzdataflow_walkz00(
									(((BgL_conditionalz00_bglt) COBJECT(
												((BgL_conditionalz00_bglt) BgL_nodez00_3366)))->
										BgL_falsez00));
							}
						else
							{	/* Dataflow/walk.scm 470 */
								return BFALSE;
							}
					}
			}
		}

	}



/* &abort?-let-fun1435 */
	obj_t BGl_z62abortzf3zd2letzd2fun1435z91zzdataflow_walkz00(obj_t
		BgL_envz00_3367, obj_t BgL_nodez00_3368)
	{
		{	/* Dataflow/walk.scm 461 */
			return
				BGl_abortzf3zf3zzdataflow_walkz00(
				(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_3368)))->BgL_bodyz00));
		}

	}



/* &abort?-let-var1433 */
	obj_t BGl_z62abortzf3zd2letzd2var1433z91zzdataflow_walkz00(obj_t
		BgL_envz00_3369, obj_t BgL_nodez00_3370)
	{
		{	/* Dataflow/walk.scm 454 */
			{	/* Dataflow/walk.scm 456 */
				obj_t BgL__ortest_1178z00_3533;

				{	/* Dataflow/walk.scm 456 */
					obj_t BgL_g1355z00_3534;

					BgL_g1355z00_3534 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_3370)))->BgL_bindingsz00);
					{
						obj_t BgL_l1353z00_3536;

						BgL_l1353z00_3536 = BgL_g1355z00_3534;
					BgL_zc3z04anonymousza32096ze3z87_3535:
						if (NULLP(BgL_l1353z00_3536))
							{	/* Dataflow/walk.scm 456 */
								BgL__ortest_1178z00_3533 = BFALSE;
							}
						else
							{	/* Dataflow/walk.scm 456 */
								obj_t BgL__ortest_1356z00_3537;

								{	/* Dataflow/walk.scm 456 */
									obj_t BgL_bz00_3538;

									BgL_bz00_3538 = CAR(((obj_t) BgL_l1353z00_3536));
									{	/* Dataflow/walk.scm 456 */
										obj_t BgL_arg2100z00_3539;

										BgL_arg2100z00_3539 = CDR(((obj_t) BgL_bz00_3538));
										BgL__ortest_1356z00_3537 =
											BGl_abortzf3zf3zzdataflow_walkz00(
											((BgL_nodez00_bglt) BgL_arg2100z00_3539));
									}
								}
								if (CBOOL(BgL__ortest_1356z00_3537))
									{	/* Dataflow/walk.scm 456 */
										BgL__ortest_1178z00_3533 = BgL__ortest_1356z00_3537;
									}
								else
									{	/* Dataflow/walk.scm 456 */
										obj_t BgL_arg2098z00_3540;

										BgL_arg2098z00_3540 = CDR(((obj_t) BgL_l1353z00_3536));
										{
											obj_t BgL_l1353z00_4367;

											BgL_l1353z00_4367 = BgL_arg2098z00_3540;
											BgL_l1353z00_3536 = BgL_l1353z00_4367;
											goto BgL_zc3z04anonymousza32096ze3z87_3535;
										}
									}
							}
					}
				}
				if (CBOOL(BgL__ortest_1178z00_3533))
					{	/* Dataflow/walk.scm 456 */
						return BgL__ortest_1178z00_3533;
					}
				else
					{	/* Dataflow/walk.scm 456 */
						return
							BGl_abortzf3zf3zzdataflow_walkz00(
							(((BgL_letzd2varzd2_bglt) COBJECT(
										((BgL_letzd2varzd2_bglt) BgL_nodez00_3370)))->BgL_bodyz00));
					}
			}
		}

	}



/* &abort?-sync1431 */
	obj_t BGl_z62abortzf3zd2sync1431z43zzdataflow_walkz00(obj_t BgL_envz00_3371,
		obj_t BgL_nodez00_3372)
	{
		{	/* Dataflow/walk.scm 446 */
			{	/* Dataflow/walk.scm 447 */
				obj_t BgL__ortest_1175z00_3542;

				BgL__ortest_1175z00_3542 =
					BGl_abortzf3zf3zzdataflow_walkz00(
					(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_3372)))->BgL_mutexz00));
				if (CBOOL(BgL__ortest_1175z00_3542))
					{	/* Dataflow/walk.scm 447 */
						return BgL__ortest_1175z00_3542;
					}
				else
					{	/* Dataflow/walk.scm 448 */
						obj_t BgL__ortest_1176z00_3543;

						BgL__ortest_1176z00_3543 =
							BGl_abortzf3zf3zzdataflow_walkz00(
							(((BgL_syncz00_bglt) COBJECT(
										((BgL_syncz00_bglt) BgL_nodez00_3372)))->BgL_prelockz00));
						if (CBOOL(BgL__ortest_1176z00_3543))
							{	/* Dataflow/walk.scm 448 */
								return BgL__ortest_1176z00_3543;
							}
						else
							{	/* Dataflow/walk.scm 448 */
								return
									BGl_abortzf3zf3zzdataflow_walkz00(
									(((BgL_syncz00_bglt) COBJECT(
												((BgL_syncz00_bglt) BgL_nodez00_3372)))->BgL_bodyz00));
							}
					}
			}
		}

	}



/* &abort?-sequence1429 */
	obj_t BGl_z62abortzf3zd2sequence1429z43zzdataflow_walkz00(obj_t
		BgL_envz00_3373, obj_t BgL_nodez00_3374)
	{
		{	/* Dataflow/walk.scm 440 */
			{	/* Dataflow/walk.scm 441 */
				obj_t BgL_g1351z00_3545;

				BgL_g1351z00_3545 =
					(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_3374)))->BgL_nodesz00);
				{
					obj_t BgL_l1349z00_3547;

					BgL_l1349z00_3547 = BgL_g1351z00_3545;
				BgL_zc3z04anonymousza32088ze3z87_3546:
					if (NULLP(BgL_l1349z00_3547))
						{	/* Dataflow/walk.scm 441 */
							return BFALSE;
						}
					else
						{	/* Dataflow/walk.scm 441 */
							obj_t BgL__ortest_1352z00_3548;

							{	/* Dataflow/walk.scm 441 */
								obj_t BgL_arg2091z00_3549;

								BgL_arg2091z00_3549 = CAR(((obj_t) BgL_l1349z00_3547));
								BgL__ortest_1352z00_3548 =
									BGl_abortzf3zf3zzdataflow_walkz00(
									((BgL_nodez00_bglt) BgL_arg2091z00_3549));
							}
							if (CBOOL(BgL__ortest_1352z00_3548))
								{	/* Dataflow/walk.scm 441 */
									return BgL__ortest_1352z00_3548;
								}
							else
								{	/* Dataflow/walk.scm 441 */
									obj_t BgL_arg2090z00_3550;

									BgL_arg2090z00_3550 = CDR(((obj_t) BgL_l1349z00_3547));
									{
										obj_t BgL_l1349z00_4398;

										BgL_l1349z00_4398 = BgL_arg2090z00_3550;
										BgL_l1349z00_3547 = BgL_l1349z00_4398;
										goto BgL_zc3z04anonymousza32088ze3z87_3546;
									}
								}
						}
				}
			}
		}

	}



/* &abort?-fail1427 */
	obj_t BGl_z62abortzf3zd2fail1427z43zzdataflow_walkz00(obj_t BgL_envz00_3375,
		obj_t BgL_nodez00_3376)
	{
		{	/* Dataflow/walk.scm 434 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &dataflow-test-false-1423 */
	obj_t BGl_z62dataflowzd2testzd2falsezd21423zb0zzdataflow_walkz00(obj_t
		BgL_envz00_3377, obj_t BgL_nodez00_3378)
	{
		{	/* Dataflow/walk.scm 406 */
			{	/* Dataflow/walk.scm 408 */
				BgL_variablez00_bglt BgL_fz00_3553;

				BgL_fz00_3553 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt) BgL_nodez00_3378)))->BgL_funz00)))->
					BgL_variablez00);
				{	/* Dataflow/walk.scm 409 */

					{	/* Dataflow/walk.scm 410 */
						bool_t BgL_test2465z00_4403;

						{	/* Dataflow/walk.scm 410 */
							bool_t BgL_test2466z00_4404;

							{	/* Dataflow/walk.scm 410 */
								obj_t BgL_tmpz00_4405;

								BgL_tmpz00_4405 =
									(((BgL_appz00_bglt) COBJECT(
											((BgL_appz00_bglt) BgL_nodez00_3378)))->BgL_argsz00);
								BgL_test2466z00_4404 = PAIRP(BgL_tmpz00_4405);
							}
							if (BgL_test2466z00_4404)
								{	/* Dataflow/walk.scm 410 */
									if (NULLP(CDR(
												(((BgL_appz00_bglt) COBJECT(
															((BgL_appz00_bglt) BgL_nodez00_3378)))->
													BgL_argsz00))))
										{	/* Dataflow/walk.scm 411 */
											bool_t BgL_test2468z00_4414;

											{	/* Dataflow/walk.scm 411 */
												obj_t BgL_arg2082z00_3554;

												BgL_arg2082z00_3554 =
													CAR(
													(((BgL_appz00_bglt) COBJECT(
																((BgL_appz00_bglt) BgL_nodez00_3378)))->
														BgL_argsz00));
												BgL_test2468z00_4414 =
													BGl_isazf3zf3zz__objectz00(BgL_arg2082z00_3554,
													BGl_varz00zzast_nodez00);
											}
											if (BgL_test2468z00_4414)
												{	/* Dataflow/walk.scm 412 */
													BgL_typez00_bglt BgL_arg2078z00_3555;

													{
														BgL_variablez00_bglt BgL_auxz00_4419;

														{
															BgL_varz00_bglt BgL_auxz00_4420;

															{	/* Dataflow/walk.scm 412 */
																obj_t BgL_pairz00_3556;

																BgL_pairz00_3556 =
																	(((BgL_appz00_bglt) COBJECT(
																			((BgL_appz00_bglt) BgL_nodez00_3378)))->
																	BgL_argsz00);
																BgL_auxz00_4420 =
																	((BgL_varz00_bglt) CAR(BgL_pairz00_3556));
															}
															BgL_auxz00_4419 =
																(((BgL_varz00_bglt) COBJECT(BgL_auxz00_4420))->
																BgL_variablez00);
														}
														BgL_arg2078z00_3555 =
															(((BgL_variablez00_bglt)
																COBJECT(BgL_auxz00_4419))->BgL_typez00);
													}
													BgL_test2465z00_4403 =
														(
														((obj_t) BgL_arg2078z00_3555) ==
														BGl_za2pairzd2nilza2zd2zztype_cachez00);
												}
											else
												{	/* Dataflow/walk.scm 411 */
													BgL_test2465z00_4403 = ((bool_t) 0);
												}
										}
									else
										{	/* Dataflow/walk.scm 410 */
											BgL_test2465z00_4403 = ((bool_t) 0);
										}
								}
							else
								{	/* Dataflow/walk.scm 410 */
									BgL_test2465z00_4403 = ((bool_t) 0);
								}
						}
						if (BgL_test2465z00_4403)
							{	/* Dataflow/walk.scm 410 */
								if (
									(((obj_t) BgL_fz00_3553) ==
										BGl_za2z42nullzf3za2zb1zzdataflow_walkz00))
									{	/* Dataflow/walk.scm 415 */
										obj_t BgL_arg2063z00_3557;

										{	/* Dataflow/walk.scm 415 */
											BgL_variablez00_bglt BgL_arg2065z00_3558;

											{
												BgL_varz00_bglt BgL_auxz00_4432;

												{	/* Dataflow/walk.scm 415 */
													obj_t BgL_pairz00_3559;

													BgL_pairz00_3559 =
														(((BgL_appz00_bglt) COBJECT(
																((BgL_appz00_bglt) BgL_nodez00_3378)))->
														BgL_argsz00);
													BgL_auxz00_4432 =
														((BgL_varz00_bglt) CAR(BgL_pairz00_3559));
												}
												BgL_arg2065z00_3558 =
													(((BgL_varz00_bglt) COBJECT(BgL_auxz00_4432))->
													BgL_variablez00);
											}
											BgL_arg2063z00_3557 =
												MAKE_YOUNG_PAIR(
												((obj_t) BgL_arg2065z00_3558),
												BGl_za2pairza2z00zztype_cachez00);
										}
										{	/* Dataflow/walk.scm 415 */
											obj_t BgL_list2064z00_3560;

											BgL_list2064z00_3560 =
												MAKE_YOUNG_PAIR(BgL_arg2063z00_3557, BNIL);
											return BgL_list2064z00_3560;
										}
									}
								else
									{	/* Dataflow/walk.scm 416 */
										bool_t BgL_test2470z00_4441;

										if (
											(((obj_t) BgL_fz00_3553) ==
												BGl_za2z42pairzf3za2zb1zzdataflow_walkz00))
											{	/* Dataflow/walk.scm 416 */
												BgL_test2470z00_4441 = ((bool_t) 1);
											}
										else
											{	/* Dataflow/walk.scm 416 */
												BgL_test2470z00_4441 =
													(
													((obj_t) BgL_fz00_3553) ==
													BGl_za2z42epairzf3za2zb1zzdataflow_walkz00);
											}
										if (BgL_test2470z00_4441)
											{	/* Dataflow/walk.scm 417 */
												obj_t BgL_arg2071z00_3561;

												{	/* Dataflow/walk.scm 417 */
													BgL_variablez00_bglt BgL_arg2075z00_3562;

													{
														BgL_varz00_bglt BgL_auxz00_4447;

														{	/* Dataflow/walk.scm 417 */
															obj_t BgL_pairz00_3563;

															BgL_pairz00_3563 =
																(((BgL_appz00_bglt) COBJECT(
																		((BgL_appz00_bglt) BgL_nodez00_3378)))->
																BgL_argsz00);
															BgL_auxz00_4447 =
																((BgL_varz00_bglt) CAR(BgL_pairz00_3563));
														}
														BgL_arg2075z00_3562 =
															(((BgL_varz00_bglt) COBJECT(BgL_auxz00_4447))->
															BgL_variablez00);
													}
													BgL_arg2071z00_3561 =
														MAKE_YOUNG_PAIR(
														((obj_t) BgL_arg2075z00_3562),
														BGl_za2bnilza2z00zztype_cachez00);
												}
												{	/* Dataflow/walk.scm 417 */
													obj_t BgL_list2072z00_3564;

													BgL_list2072z00_3564 =
														MAKE_YOUNG_PAIR(BgL_arg2071z00_3561, BNIL);
													return BgL_list2072z00_3564;
												}
											}
										else
											{	/* Dataflow/walk.scm 416 */
												return BNIL;
											}
									}
							}
						else
							{	/* Dataflow/walk.scm 410 */
								return BNIL;
							}
					}
				}
			}
		}

	}



/* &dataflow-test-env-le1419 */
	obj_t BGl_z62dataflowzd2testzd2envzd2le1419zb0zzdataflow_walkz00(obj_t
		BgL_envz00_3379, obj_t BgL_nodez00_3380)
	{
		{	/* Dataflow/walk.scm 378 */
			{	/* Dataflow/walk.scm 380 */
				bool_t BgL_test2472z00_4456;

				{	/* Dataflow/walk.scm 380 */
					bool_t BgL_test2473z00_4457;

					{	/* Dataflow/walk.scm 380 */
						obj_t BgL_tmpz00_4458;

						BgL_tmpz00_4458 =
							(((BgL_letzd2varzd2_bglt) COBJECT(
									((BgL_letzd2varzd2_bglt) BgL_nodez00_3380)))->
							BgL_bindingsz00);
						BgL_test2473z00_4457 = PAIRP(BgL_tmpz00_4458);
					}
					if (BgL_test2473z00_4457)
						{	/* Dataflow/walk.scm 380 */
							BgL_test2472z00_4456 =
								NULLP(CDR(
									(((BgL_letzd2varzd2_bglt) COBJECT(
												((BgL_letzd2varzd2_bglt) BgL_nodez00_3380)))->
										BgL_bindingsz00)));
						}
					else
						{	/* Dataflow/walk.scm 380 */
							BgL_test2472z00_4456 = ((bool_t) 0);
						}
				}
				if (BgL_test2472z00_4456)
					{	/* Dataflow/walk.scm 382 */
						bool_t BgL_test2474z00_4466;

						{	/* Dataflow/walk.scm 382 */
							obj_t BgL_arg2035z00_3566;

							{	/* Dataflow/walk.scm 382 */
								obj_t BgL_pairz00_3567;

								BgL_pairz00_3567 =
									(((BgL_letzd2varzd2_bglt) COBJECT(
											((BgL_letzd2varzd2_bglt) BgL_nodez00_3380)))->
									BgL_bindingsz00);
								BgL_arg2035z00_3566 = CDR(CAR(BgL_pairz00_3567));
							}
							BgL_test2474z00_4466 =
								BGl_isazf3zf3zz__objectz00(BgL_arg2035z00_3566,
								BGl_varz00zzast_nodez00);
						}
						if (BgL_test2474z00_4466)
							{	/* Dataflow/walk.scm 383 */
								obj_t BgL_envz00_3568;

								BgL_envz00_3568 =
									BGl_dataflowzd2testzd2envz00zzdataflow_walkz00(
									(((BgL_letzd2varzd2_bglt) COBJECT(
												((BgL_letzd2varzd2_bglt) BgL_nodez00_3380)))->
										BgL_bodyz00));
								{	/* Dataflow/walk.scm 384 */
									bool_t BgL_test2475z00_4475;

									if (NULLP(BgL_envz00_3568))
										{	/* Dataflow/walk.scm 384 */
											BgL_test2475z00_4475 = ((bool_t) 0);
										}
									else
										{	/* Dataflow/walk.scm 384 */
											if (NULLP(CDR(BgL_envz00_3568)))
												{	/* Dataflow/walk.scm 386 */
													obj_t BgL_tmpz00_4481;

													{	/* Dataflow/walk.scm 386 */
														obj_t BgL_pairz00_3569;

														BgL_pairz00_3569 =
															(((BgL_letzd2varzd2_bglt) COBJECT(
																	((BgL_letzd2varzd2_bglt) BgL_nodez00_3380)))->
															BgL_bindingsz00);
														BgL_tmpz00_4481 = CAR(CAR(BgL_pairz00_3569));
													}
													BgL_test2475z00_4475 =
														(CAR(CAR(BgL_envz00_3568)) == BgL_tmpz00_4481);
												}
											else
												{	/* Dataflow/walk.scm 385 */
													BgL_test2475z00_4475 = ((bool_t) 0);
												}
										}
									if (BgL_test2475z00_4475)
										{	/* Dataflow/walk.scm 387 */
											obj_t BgL_arg1989z00_3570;

											{	/* Dataflow/walk.scm 387 */
												BgL_variablez00_bglt BgL_arg1991z00_3571;
												obj_t BgL_arg1992z00_3572;

												{
													BgL_varz00_bglt BgL_auxz00_4489;

													{
														obj_t BgL_auxz00_4490;

														{	/* Dataflow/walk.scm 387 */
															obj_t BgL_pairz00_3573;

															BgL_pairz00_3573 =
																(((BgL_letzd2varzd2_bglt) COBJECT(
																		((BgL_letzd2varzd2_bglt)
																			BgL_nodez00_3380)))->BgL_bindingsz00);
															{	/* Dataflow/walk.scm 387 */
																obj_t BgL_pairz00_3574;

																BgL_pairz00_3574 = CAR(BgL_pairz00_3573);
																BgL_auxz00_4490 = CDR(BgL_pairz00_3574);
															}
														}
														BgL_auxz00_4489 =
															((BgL_varz00_bglt) BgL_auxz00_4490);
													}
													BgL_arg1991z00_3571 =
														(((BgL_varz00_bglt) COBJECT(BgL_auxz00_4489))->
														BgL_variablez00);
												}
												BgL_arg1992z00_3572 = CDR(CAR(BgL_envz00_3568));
												BgL_arg1989z00_3570 =
													MAKE_YOUNG_PAIR(
													((obj_t) BgL_arg1991z00_3571), BgL_arg1992z00_3572);
											}
											{	/* Dataflow/walk.scm 387 */
												obj_t BgL_list1990z00_3575;

												BgL_list1990z00_3575 =
													MAKE_YOUNG_PAIR(BgL_arg1989z00_3570, BNIL);
												return BgL_list1990z00_3575;
											}
										}
									else
										{	/* Dataflow/walk.scm 384 */
											return BNIL;
										}
								}
							}
						else
							{	/* Dataflow/walk.scm 389 */
								bool_t BgL_test2478z00_4502;

								{	/* Dataflow/walk.scm 389 */
									bool_t BgL_test2479z00_4503;

									{	/* Dataflow/walk.scm 389 */
										BgL_nodez00_bglt BgL_arg2034z00_3576;

										BgL_arg2034z00_3576 =
											(((BgL_letzd2varzd2_bglt) COBJECT(
													((BgL_letzd2varzd2_bglt) BgL_nodez00_3380)))->
											BgL_bodyz00);
										{	/* Dataflow/walk.scm 389 */
											bool_t BgL_res2285z00_3577;

											BgL_res2285z00_3577 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_arg2034z00_3576), BGl_varz00zzast_nodez00);
											BgL_test2479z00_4503 = BgL_res2285z00_3577;
										}
									}
									if (BgL_test2479z00_4503)
										{	/* Dataflow/walk.scm 390 */
											bool_t BgL_test2480z00_4508;

											{	/* Dataflow/walk.scm 390 */
												obj_t BgL_tmpz00_4509;

												{	/* Dataflow/walk.scm 390 */
													obj_t BgL_pairz00_3578;

													BgL_pairz00_3578 =
														(((BgL_letzd2varzd2_bglt) COBJECT(
																((BgL_letzd2varzd2_bglt) BgL_nodez00_3380)))->
														BgL_bindingsz00);
													BgL_tmpz00_4509 = CAR(CAR(BgL_pairz00_3578));
												}
												BgL_test2480z00_4508 =
													(
													((obj_t)
														(((BgL_varz00_bglt) COBJECT(
																	((BgL_varz00_bglt)
																		(((BgL_letzd2varzd2_bglt) COBJECT(
																					((BgL_letzd2varzd2_bglt)
																						BgL_nodez00_3380)))->
																			BgL_bodyz00))))->BgL_variablez00)) ==
													BgL_tmpz00_4509);
											}
											if (BgL_test2480z00_4508)
												{	/* Dataflow/walk.scm 391 */
													BgL_typez00_bglt BgL_arg2022z00_3579;

													{
														BgL_variablez00_bglt BgL_auxz00_4520;

														{
															obj_t BgL_auxz00_4521;

															{	/* Dataflow/walk.scm 391 */
																obj_t BgL_pairz00_3580;

																BgL_pairz00_3580 =
																	(((BgL_letzd2varzd2_bglt) COBJECT(
																			((BgL_letzd2varzd2_bglt)
																				BgL_nodez00_3380)))->BgL_bindingsz00);
																{	/* Dataflow/walk.scm 391 */
																	obj_t BgL_pairz00_3581;

																	BgL_pairz00_3581 = CAR(BgL_pairz00_3580);
																	BgL_auxz00_4521 = CAR(BgL_pairz00_3581);
																}
															}
															BgL_auxz00_4520 =
																((BgL_variablez00_bglt) BgL_auxz00_4521);
														}
														BgL_arg2022z00_3579 =
															(((BgL_variablez00_bglt)
																COBJECT(BgL_auxz00_4520))->BgL_typez00);
													}
													BgL_test2478z00_4502 =
														(
														((obj_t) BgL_arg2022z00_3579) ==
														BGl_za2boolza2z00zztype_cachez00);
												}
											else
												{	/* Dataflow/walk.scm 390 */
													BgL_test2478z00_4502 = ((bool_t) 0);
												}
										}
									else
										{	/* Dataflow/walk.scm 389 */
											BgL_test2478z00_4502 = ((bool_t) 0);
										}
								}
								if (BgL_test2478z00_4502)
									{	/* Dataflow/walk.scm 392 */
										obj_t BgL_arg2020z00_3582;

										{	/* Dataflow/walk.scm 392 */
											obj_t BgL_pairz00_3583;

											BgL_pairz00_3583 =
												(((BgL_letzd2varzd2_bglt) COBJECT(
														((BgL_letzd2varzd2_bglt) BgL_nodez00_3380)))->
												BgL_bindingsz00);
											BgL_arg2020z00_3582 = CDR(CAR(BgL_pairz00_3583));
										}
										return
											BGl_dataflowzd2testzd2envz00zzdataflow_walkz00(
											((BgL_nodez00_bglt) BgL_arg2020z00_3582));
									}
								else
									{	/* Dataflow/walk.scm 389 */
										return BNIL;
									}
							}
					}
				else
					{	/* Dataflow/walk.scm 380 */
						return BNIL;
					}
			}
		}

	}



/* &dataflow-test-env-va1417 */
	obj_t BGl_z62dataflowzd2testzd2envzd2va1417zb0zzdataflow_walkz00(obj_t
		BgL_envz00_3381, obj_t BgL_nodez00_3382)
	{
		{	/* Dataflow/walk.scm 361 */
			{	/* Dataflow/walk.scm 363 */
				bool_t BgL_test2481z00_4536;

				{	/* Dataflow/walk.scm 363 */
					BgL_variablez00_bglt BgL_arg1970z00_3585;

					BgL_arg1970z00_3585 =
						(((BgL_varz00_bglt) COBJECT(
								((BgL_varz00_bglt) BgL_nodez00_3382)))->BgL_variablez00);
					{	/* Dataflow/walk.scm 363 */
						bool_t BgL_res2278z00_3586;

						BgL_res2278z00_3586 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_arg1970z00_3585),
							BGl_localzf2valuezf2zzdataflow_walkz00);
						BgL_test2481z00_4536 = BgL_res2278z00_3586;
					}
				}
				if (BgL_test2481z00_4536)
					{	/* Dataflow/walk.scm 364 */
						BgL_nodez00_bglt BgL_arg1968z00_3587;

						{	/* Dataflow/walk.scm 364 */
							BgL_localz00_bglt BgL_oz00_3588;

							BgL_oz00_3588 =
								((BgL_localz00_bglt)
								(((BgL_varz00_bglt) COBJECT(
											((BgL_varz00_bglt) BgL_nodez00_3382)))->BgL_variablez00));
							{
								BgL_localzf2valuezf2_bglt BgL_auxz00_4544;

								{
									obj_t BgL_auxz00_4545;

									{	/* Dataflow/walk.scm 364 */
										BgL_objectz00_bglt BgL_tmpz00_4546;

										BgL_tmpz00_4546 = ((BgL_objectz00_bglt) BgL_oz00_3588);
										BgL_auxz00_4545 = BGL_OBJECT_WIDENING(BgL_tmpz00_4546);
									}
									BgL_auxz00_4544 =
										((BgL_localzf2valuezf2_bglt) BgL_auxz00_4545);
								}
								BgL_arg1968z00_3587 =
									(((BgL_localzf2valuezf2_bglt) COBJECT(BgL_auxz00_4544))->
									BgL_nodez00);
							}
						}
						return
							BGl_dataflowzd2testzd2envz00zzdataflow_walkz00
							(BgL_arg1968z00_3587);
					}
				else
					{	/* Dataflow/walk.scm 363 */
						return BNIL;
					}
			}
		}

	}



/* &dataflow-test-env-co1415 */
	obj_t BGl_z62dataflowzd2testzd2envzd2co1415zb0zzdataflow_walkz00(obj_t
		BgL_envz00_3383, obj_t BgL_nodez00_3384)
	{
		{	/* Dataflow/walk.scm 352 */
			{	/* Dataflow/walk.scm 354 */
				bool_t BgL_test2482z00_4552;

				{	/* Dataflow/walk.scm 354 */
					bool_t BgL_test2483z00_4553;

					{	/* Dataflow/walk.scm 354 */
						BgL_nodez00_bglt BgL_arg1965z00_3590;

						BgL_arg1965z00_3590 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_3384)))->BgL_falsez00);
						{	/* Dataflow/walk.scm 354 */
							bool_t BgL_res2277z00_3591;

							BgL_res2277z00_3591 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_arg1965z00_3590), BGl_atomz00zzast_nodez00);
							BgL_test2483z00_4553 = BgL_res2277z00_3591;
						}
					}
					if (BgL_test2483z00_4553)
						{	/* Dataflow/walk.scm 354 */
							BgL_test2482z00_4552 =
								(
								(((BgL_atomz00_bglt) COBJECT(
											((BgL_atomz00_bglt)
												(((BgL_conditionalz00_bglt) COBJECT(
															((BgL_conditionalz00_bglt) BgL_nodez00_3384)))->
													BgL_falsez00))))->BgL_valuez00) == BFALSE);
						}
					else
						{	/* Dataflow/walk.scm 354 */
							BgL_test2482z00_4552 = ((bool_t) 0);
						}
				}
				if (BgL_test2482z00_4552)
					{	/* Dataflow/walk.scm 354 */
						return
							BGl_appendzd221011zd2zzdataflow_walkz00
							(BGl_dataflowzd2testzd2envz00zzdataflow_walkz00(((
										(BgL_conditionalz00_bglt) COBJECT(((BgL_conditionalz00_bglt)
												BgL_nodez00_3384)))->BgL_testz00)),
							BGl_dataflowzd2testzd2envz00zzdataflow_walkz00(((
										(BgL_conditionalz00_bglt) COBJECT(((BgL_conditionalz00_bglt)
												BgL_nodez00_3384)))->BgL_truez00)));
					}
				else
					{	/* Dataflow/walk.scm 354 */
						return BNIL;
					}
			}
		}

	}



/* &dataflow-test-env-in1413 */
	obj_t BGl_z62dataflowzd2testzd2envzd2in1413zb0zzdataflow_walkz00(obj_t
		BgL_envz00_3385, obj_t BgL_nodez00_3386)
	{
		{	/* Dataflow/walk.scm 343 */
			{	/* Dataflow/walk.scm 345 */
				bool_t BgL_test2484z00_4570;

				{	/* Dataflow/walk.scm 345 */
					obj_t BgL_arg1951z00_3593;

					{	/* Dataflow/walk.scm 345 */
						obj_t BgL_pairz00_3594;

						BgL_pairz00_3594 =
							(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt)
										((BgL_instanceofz00_bglt) BgL_nodez00_3386))))->
							BgL_exprza2za2);
						BgL_arg1951z00_3593 = CAR(BgL_pairz00_3594);
					}
					BgL_test2484z00_4570 =
						BGl_isazf3zf3zz__objectz00(BgL_arg1951z00_3593,
						BGl_varz00zzast_nodez00);
				}
				if (BgL_test2484z00_4570)
					{	/* Dataflow/walk.scm 346 */
						obj_t BgL_arg1944z00_3595;

						{	/* Dataflow/walk.scm 346 */
							BgL_variablez00_bglt BgL_arg1946z00_3596;
							BgL_typez00_bglt BgL_arg1947z00_3597;

							{
								BgL_varz00_bglt BgL_auxz00_4576;

								{	/* Dataflow/walk.scm 346 */
									obj_t BgL_pairz00_3598;

									BgL_pairz00_3598 =
										(((BgL_externz00_bglt) COBJECT(
												((BgL_externz00_bglt)
													((BgL_instanceofz00_bglt) BgL_nodez00_3386))))->
										BgL_exprza2za2);
									BgL_auxz00_4576 = ((BgL_varz00_bglt) CAR(BgL_pairz00_3598));
								}
								BgL_arg1946z00_3596 =
									(((BgL_varz00_bglt) COBJECT(BgL_auxz00_4576))->
									BgL_variablez00);
							}
							BgL_arg1947z00_3597 =
								(((BgL_instanceofz00_bglt) COBJECT(
										((BgL_instanceofz00_bglt) BgL_nodez00_3386)))->
								BgL_classz00);
							BgL_arg1944z00_3595 =
								MAKE_YOUNG_PAIR(((obj_t) BgL_arg1946z00_3596),
								((obj_t) BgL_arg1947z00_3597));
						}
						{	/* Dataflow/walk.scm 346 */
							obj_t BgL_list1945z00_3599;

							BgL_list1945z00_3599 = MAKE_YOUNG_PAIR(BgL_arg1944z00_3595, BNIL);
							return BgL_list1945z00_3599;
						}
					}
				else
					{	/* Dataflow/walk.scm 345 */
						return BNIL;
					}
			}
		}

	}



/* &dataflow-test-env-ap1411 */
	obj_t BGl_z62dataflowzd2testzd2envzd2ap1411zb0zzdataflow_walkz00(obj_t
		BgL_envz00_3387, obj_t BgL_nodez00_3388)
	{
		{	/* Dataflow/walk.scm 320 */
			{	/* Dataflow/walk.scm 322 */
				BgL_variablez00_bglt BgL_fz00_3601;

				BgL_fz00_3601 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt) BgL_nodez00_3388)))->BgL_funz00)))->
					BgL_variablez00);
				{	/* Dataflow/walk.scm 322 */
					BgL_valuez00_bglt BgL_funvz00_3602;

					BgL_funvz00_3602 =
						(((BgL_variablez00_bglt) COBJECT(BgL_fz00_3601))->BgL_valuez00);
					{	/* Dataflow/walk.scm 323 */

						{	/* Dataflow/walk.scm 325 */
							obj_t BgL_g1168z00_3603;

							BgL_g1168z00_3603 =
								BGl_isazd2ofzd2zztype_miscz00(
								((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3388)));
							if (CBOOL(BgL_g1168z00_3603))
								{	/* Dataflow/walk.scm 328 */
									bool_t BgL_test2486z00_4598;

									{	/* Dataflow/walk.scm 328 */
										obj_t BgL_arg1902z00_3604;

										BgL_arg1902z00_3604 =
											CAR(
											(((BgL_appz00_bglt) COBJECT(
														((BgL_appz00_bglt) BgL_nodez00_3388)))->
												BgL_argsz00));
										BgL_test2486z00_4598 =
											BGl_isazf3zf3zz__objectz00(BgL_arg1902z00_3604,
											BGl_varz00zzast_nodez00);
									}
									if (BgL_test2486z00_4598)
										{	/* Dataflow/walk.scm 329 */
											obj_t BgL_arg1895z00_3605;

											{	/* Dataflow/walk.scm 329 */
												BgL_variablez00_bglt BgL_arg1897z00_3606;

												{
													BgL_varz00_bglt BgL_auxz00_4603;

													{	/* Dataflow/walk.scm 329 */
														obj_t BgL_pairz00_3607;

														BgL_pairz00_3607 =
															(((BgL_appz00_bglt) COBJECT(
																	((BgL_appz00_bglt) BgL_nodez00_3388)))->
															BgL_argsz00);
														BgL_auxz00_4603 =
															((BgL_varz00_bglt) CAR(BgL_pairz00_3607));
													}
													BgL_arg1897z00_3606 =
														(((BgL_varz00_bglt) COBJECT(BgL_auxz00_4603))->
														BgL_variablez00);
												}
												BgL_arg1895z00_3605 =
													MAKE_YOUNG_PAIR(
													((obj_t) BgL_arg1897z00_3606), BgL_g1168z00_3603);
											}
											{	/* Dataflow/walk.scm 329 */
												obj_t BgL_list1896z00_3608;

												BgL_list1896z00_3608 =
													MAKE_YOUNG_PAIR(BgL_arg1895z00_3605, BNIL);
												return BgL_list1896z00_3608;
											}
										}
									else
										{	/* Dataflow/walk.scm 328 */
											return BNIL;
										}
								}
							else
								{	/* Dataflow/walk.scm 331 */
									bool_t BgL_test2487z00_4612;

									{	/* Dataflow/walk.scm 331 */
										bool_t BgL_test2488z00_4613;

										{	/* Dataflow/walk.scm 331 */
											bool_t BgL_res2270z00_3609;

											BgL_res2270z00_3609 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_funvz00_3602), BGl_funz00zzast_varz00);
											BgL_test2488z00_4613 = BgL_res2270z00_3609;
										}
										if (BgL_test2488z00_4613)
											{	/* Dataflow/walk.scm 331 */
												if (CBOOL(
														(((BgL_funz00_bglt) COBJECT(
																	((BgL_funz00_bglt) BgL_funvz00_3602)))->
															BgL_predicatezd2ofzd2)))
													{	/* Dataflow/walk.scm 333 */
														bool_t BgL_test2490z00_4620;

														{	/* Dataflow/walk.scm 333 */
															obj_t BgL_tmpz00_4621;

															BgL_tmpz00_4621 =
																(((BgL_appz00_bglt) COBJECT(
																		((BgL_appz00_bglt) BgL_nodez00_3388)))->
																BgL_argsz00);
															BgL_test2490z00_4620 = PAIRP(BgL_tmpz00_4621);
														}
														if (BgL_test2490z00_4620)
															{	/* Dataflow/walk.scm 333 */
																if (NULLP(CDR(
																			(((BgL_appz00_bglt) COBJECT(
																						((BgL_appz00_bglt)
																							BgL_nodez00_3388)))->
																				BgL_argsz00))))
																	{	/* Dataflow/walk.scm 334 */
																		bool_t BgL_test2492z00_4630;

																		{	/* Dataflow/walk.scm 334 */
																			obj_t BgL_arg1935z00_3610;

																			BgL_arg1935z00_3610 =
																				CAR(
																				(((BgL_appz00_bglt) COBJECT(
																							((BgL_appz00_bglt)
																								BgL_nodez00_3388)))->
																					BgL_argsz00));
																			BgL_test2492z00_4630 =
																				BGl_isazf3zf3zz__objectz00
																				(BgL_arg1935z00_3610,
																				BGl_varz00zzast_nodez00);
																		}
																		if (BgL_test2492z00_4630)
																			{	/* Dataflow/walk.scm 335 */
																				BgL_typez00_bglt BgL_arg1931z00_3611;

																				{
																					BgL_variablez00_bglt BgL_auxz00_4635;

																					{
																						BgL_varz00_bglt BgL_auxz00_4636;

																						{	/* Dataflow/walk.scm 335 */
																							obj_t BgL_pairz00_3612;

																							BgL_pairz00_3612 =
																								(((BgL_appz00_bglt) COBJECT(
																										((BgL_appz00_bglt)
																											BgL_nodez00_3388)))->
																								BgL_argsz00);
																							BgL_auxz00_4636 =
																								((BgL_varz00_bglt)
																								CAR(BgL_pairz00_3612));
																						}
																						BgL_auxz00_4635 =
																							(((BgL_varz00_bglt)
																								COBJECT(BgL_auxz00_4636))->
																							BgL_variablez00);
																					}
																					BgL_arg1931z00_3611 =
																						(((BgL_variablez00_bglt)
																							COBJECT(BgL_auxz00_4635))->
																						BgL_typez00);
																				}
																				BgL_test2487z00_4612 =
																					BGl_bigloozd2typezf3z21zztype_typez00
																					(BgL_arg1931z00_3611);
																			}
																		else
																			{	/* Dataflow/walk.scm 334 */
																				BgL_test2487z00_4612 = ((bool_t) 0);
																			}
																	}
																else
																	{	/* Dataflow/walk.scm 333 */
																		BgL_test2487z00_4612 = ((bool_t) 0);
																	}
															}
														else
															{	/* Dataflow/walk.scm 333 */
																BgL_test2487z00_4612 = ((bool_t) 0);
															}
													}
												else
													{	/* Dataflow/walk.scm 332 */
														BgL_test2487z00_4612 = ((bool_t) 0);
													}
											}
										else
											{	/* Dataflow/walk.scm 331 */
												BgL_test2487z00_4612 = ((bool_t) 0);
											}
									}
									if (BgL_test2487z00_4612)
										{	/* Dataflow/walk.scm 336 */
											obj_t BgL_arg1925z00_3613;

											{	/* Dataflow/walk.scm 336 */
												BgL_variablez00_bglt BgL_arg1927z00_3614;
												obj_t BgL_arg1928z00_3615;

												{
													BgL_varz00_bglt BgL_auxz00_4644;

													{	/* Dataflow/walk.scm 336 */
														obj_t BgL_pairz00_3616;

														BgL_pairz00_3616 =
															(((BgL_appz00_bglt) COBJECT(
																	((BgL_appz00_bglt) BgL_nodez00_3388)))->
															BgL_argsz00);
														BgL_auxz00_4644 =
															((BgL_varz00_bglt) CAR(BgL_pairz00_3616));
													}
													BgL_arg1927z00_3614 =
														(((BgL_varz00_bglt) COBJECT(BgL_auxz00_4644))->
														BgL_variablez00);
												}
												BgL_arg1928z00_3615 =
													(((BgL_funz00_bglt) COBJECT(
															((BgL_funz00_bglt) BgL_funvz00_3602)))->
													BgL_predicatezd2ofzd2);
												BgL_arg1925z00_3613 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_arg1927z00_3614),
													BgL_arg1928z00_3615);
											}
											{	/* Dataflow/walk.scm 336 */
												obj_t BgL_list1926z00_3617;

												BgL_list1926z00_3617 =
													MAKE_YOUNG_PAIR(BgL_arg1925z00_3613, BNIL);
												return BgL_list1926z00_3617;
											}
										}
									else
										{	/* Dataflow/walk.scm 331 */
											return BNIL;
										}
								}
						}
					}
				}
			}
		}

	}



/* &dataflow-node!-box-s1407 */
	obj_t BGl_z62dataflowzd2nodez12zd2boxzd2s1407za2zzdataflow_walkz00(obj_t
		BgL_envz00_3389, obj_t BgL_nodez00_3390, obj_t BgL_envz00_3391)
	{
		{	/* Dataflow/walk.scm 300 */
			return
				BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(
				(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_3390)))->BgL_valuez00),
				BgL_envz00_3391);
		}

	}



/* &dataflow-node!-box-r1405 */
	obj_t BGl_z62dataflowzd2nodez12zd2boxzd2r1405za2zzdataflow_walkz00(obj_t
		BgL_envz00_3392, obj_t BgL_nodez00_3393, obj_t BgL_envz00_3394)
	{
		{	/* Dataflow/walk.scm 293 */
			return ((obj_t) BgL_envz00_3394);
		}

	}



/* &dataflow-node!-make-1403 */
	obj_t BGl_z62dataflowzd2nodez12zd2makezd21403za2zzdataflow_walkz00(obj_t
		BgL_envz00_3395, obj_t BgL_nodez00_3396, obj_t BgL_envz00_3397)
	{
		{	/* Dataflow/walk.scm 287 */
			return
				BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(
				(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_3396)))->BgL_valuez00),
				BgL_envz00_3397);
		}

	}



/* &dataflow-node!-jump-1401 */
	obj_t BGl_z62dataflowzd2nodez12zd2jumpzd21401za2zzdataflow_walkz00(obj_t
		BgL_envz00_3398, obj_t BgL_nodez00_3399, obj_t BgL_envz00_3400)
	{
		{	/* Dataflow/walk.scm 278 */
			BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_3399)))->BgL_exitz00),
				BgL_envz00_3400);
			BGl_dataflowzd2nodez12zc0zzdataflow_walkz00((((BgL_jumpzd2exzd2itz00_bglt)
						COBJECT(((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_3399)))->
					BgL_valuez00), BgL_envz00_3400);
			return BNIL;
		}

	}



/* &dataflow-node!-set-e1399 */
	obj_t BGl_z62dataflowzd2nodez12zd2setzd2e1399za2zzdataflow_walkz00(obj_t
		BgL_envz00_3401, obj_t BgL_nodez00_3402, obj_t BgL_envz00_3403)
	{
		{	/* Dataflow/walk.scm 270 */
			BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(
				(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_3402)))->BgL_bodyz00),
				BgL_envz00_3403);
			return BNIL;
		}

	}



/* &dataflow-node!-let-v1397 */
	obj_t BGl_z62dataflowzd2nodez12zd2letzd2v1397za2zzdataflow_walkz00(obj_t
		BgL_envz00_3404, obj_t BgL_nodez00_3405, obj_t BgL_envz00_3406)
	{
		{	/* Dataflow/walk.scm 238 */
			BGl_letzd2varzd2stampz00zzdataflow_walkz00 =
				(((long) 1) + BGl_letzd2varzd2stampz00zzdataflow_walkz00);
			{	/* Dataflow/walk.scm 241 */
				long BgL_stampz00_3625;

				BgL_stampz00_3625 = BGl_letzd2varzd2stampz00zzdataflow_walkz00;
				{	/* Dataflow/walk.scm 241 */
					obj_t BgL_envz00_3626;

					{
						obj_t BgL_bindingsz00_3628;
						obj_t BgL_envz00_3629;

						BgL_bindingsz00_3628 =
							(((BgL_letzd2varzd2_bglt) COBJECT(
									((BgL_letzd2varzd2_bglt) BgL_nodez00_3405)))->
							BgL_bindingsz00);
						BgL_envz00_3629 = BgL_envz00_3406;
					BgL_loopz00_3627:
						if (NULLP(BgL_bindingsz00_3628))
							{	/* Dataflow/walk.scm 244 */
								BgL_envz00_3626 = BgL_envz00_3629;
							}
						else
							{	/* Dataflow/walk.scm 246 */
								obj_t BgL_nodez00_3630;

								{	/* Dataflow/walk.scm 246 */
									obj_t BgL_pairz00_3631;

									BgL_pairz00_3631 = CAR(((obj_t) BgL_bindingsz00_3628));
									BgL_nodez00_3630 = CDR(BgL_pairz00_3631);
								}
								{	/* Dataflow/walk.scm 246 */
									obj_t BgL_envz00_3632;

									BgL_envz00_3632 =
										BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(
										((BgL_nodez00_bglt) BgL_nodez00_3630), BgL_envz00_3629);
									{	/* Dataflow/walk.scm 247 */

										{	/* Dataflow/walk.scm 248 */
											obj_t BgL_lz00_3633;

											{	/* Dataflow/walk.scm 248 */
												obj_t BgL_pairz00_3634;

												BgL_pairz00_3634 = CAR(((obj_t) BgL_bindingsz00_3628));
												BgL_lz00_3633 = CAR(BgL_pairz00_3634);
											}
											if (
												((((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt) BgL_lz00_3633)))->
														BgL_accessz00) == CNST_TABLE_REF(((long) 11))))
												{	/* Dataflow/walk.scm 249 */
													{	/* Dataflow/walk.scm 250 */
														BgL_localzf2valuezf2_bglt BgL_wide1161z00_3635;

														BgL_wide1161z00_3635 =
															((BgL_localzf2valuezf2_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_localzf2valuezf2_bgl))));
														{	/* Dataflow/walk.scm 250 */
															obj_t BgL_auxz00_4692;
															BgL_objectz00_bglt BgL_tmpz00_4688;

															BgL_auxz00_4692 = ((obj_t) BgL_wide1161z00_3635);
															BgL_tmpz00_4688 =
																((BgL_objectz00_bglt)
																((BgL_localz00_bglt)
																	((BgL_localz00_bglt) BgL_lz00_3633)));
															BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4688,
																BgL_auxz00_4692);
														}
														((BgL_objectz00_bglt)
															((BgL_localz00_bglt)
																((BgL_localz00_bglt) BgL_lz00_3633)));
														{	/* Dataflow/walk.scm 250 */
															long BgL_arg1883z00_3636;

															{	/* Dataflow/walk.scm 250 */
																long BgL_res2264z00_3637;

																BgL_res2264z00_3637 =
																	BGL_CLASS_INDEX
																	(BGl_localzf2valuezf2zzdataflow_walkz00);
																BgL_arg1883z00_3636 = BgL_res2264z00_3637;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt)
																	((BgL_localz00_bglt)
																		((BgL_localz00_bglt) BgL_lz00_3633))),
																BgL_arg1883z00_3636);
														}
														((BgL_localz00_bglt)
															((BgL_localz00_bglt)
																((BgL_localz00_bglt) BgL_lz00_3633)));
													}
													{
														BgL_localzf2valuezf2_bglt BgL_auxz00_4706;

														{
															obj_t BgL_auxz00_4707;

															{	/* Dataflow/walk.scm 251 */
																BgL_objectz00_bglt BgL_tmpz00_4708;

																BgL_tmpz00_4708 =
																	((BgL_objectz00_bglt)
																	((BgL_localz00_bglt)
																		((BgL_localz00_bglt) BgL_lz00_3633)));
																BgL_auxz00_4707 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_4708);
															}
															BgL_auxz00_4706 =
																((BgL_localzf2valuezf2_bglt) BgL_auxz00_4707);
														}
														((((BgL_localzf2valuezf2_bglt)
																	COBJECT(BgL_auxz00_4706))->BgL_stampz00) =
															((int) (int) (BgL_stampz00_3625)), BUNSPEC);
													}
													{
														BgL_localzf2valuezf2_bglt BgL_auxz00_4716;

														{
															obj_t BgL_auxz00_4717;

															{	/* Dataflow/walk.scm 252 */
																BgL_objectz00_bglt BgL_tmpz00_4718;

																BgL_tmpz00_4718 =
																	((BgL_objectz00_bglt)
																	((BgL_localz00_bglt)
																		((BgL_localz00_bglt) BgL_lz00_3633)));
																BgL_auxz00_4717 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_4718);
															}
															BgL_auxz00_4716 =
																((BgL_localzf2valuezf2_bglt) BgL_auxz00_4717);
														}
														((((BgL_localzf2valuezf2_bglt)
																	COBJECT(BgL_auxz00_4716))->BgL_nodez00) =
															((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
																	BgL_nodez00_3630)), BUNSPEC);
													}
													((obj_t)
														((BgL_localz00_bglt)
															((BgL_localz00_bglt) BgL_lz00_3633)));
												}
											else
												{	/* Dataflow/walk.scm 249 */
													BFALSE;
												}
										}
										{	/* Dataflow/walk.scm 253 */
											obj_t BgL_arg1885z00_3638;

											BgL_arg1885z00_3638 = CDR(((obj_t) BgL_bindingsz00_3628));
											{
												obj_t BgL_envz00_4732;
												obj_t BgL_bindingsz00_4731;

												BgL_bindingsz00_4731 = BgL_arg1885z00_3638;
												BgL_envz00_4732 = BgL_envz00_3632;
												BgL_envz00_3629 = BgL_envz00_4732;
												BgL_bindingsz00_3628 = BgL_bindingsz00_4731;
												goto BgL_loopz00_3627;
											}
										}
									}
								}
							}
					}
					{	/* Dataflow/walk.scm 242 */

						{	/* Dataflow/walk.scm 254 */
							obj_t BgL_arg1848z00_3639;

							BgL_arg1848z00_3639 =
								BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(
								(((BgL_letzd2varzd2_bglt) COBJECT(
											((BgL_letzd2varzd2_bglt) BgL_nodez00_3405)))->
									BgL_bodyz00), BgL_envz00_3626);
							{	/* Dataflow/walk.scm 256 */
								obj_t BgL_zc3z04anonymousza31850ze3z87_3640;

								BgL_zc3z04anonymousza31850ze3z87_3640 =
									MAKE_FX_PROCEDURE
									(BGl_z62zc3z04anonymousza31850ze3ze5zzdataflow_walkz00,
									(int) (((long) 1)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_zc3z04anonymousza31850ze3z87_3640,
									(int) (((long) 0)), BINT(BgL_stampz00_3625));
								{	/* Dataflow/walk.scm 254 */
									obj_t BgL_list1849z00_3641;

									BgL_list1849z00_3641 =
										MAKE_YOUNG_PAIR(BgL_arg1848z00_3639, BNIL);
									return
										BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
										(BgL_zc3z04anonymousza31850ze3z87_3640,
										BgL_list1849z00_3641);
								}
							}
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1850> */
	obj_t BGl_z62zc3z04anonymousza31850ze3ze5zzdataflow_walkz00(obj_t
		BgL_envz00_3407, obj_t BgL_bz00_3409)
	{
		{	/* Dataflow/walk.scm 254 */
			{	/* Dataflow/walk.scm 256 */
				long BgL_stampz00_3408;

				BgL_stampz00_3408 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3407, (int) (((long) 0))));
				{	/* Dataflow/walk.scm 256 */
					bool_t BgL_test2495z00_4749;

					{	/* Dataflow/walk.scm 256 */
						bool_t BgL_test2496z00_4750;

						{	/* Dataflow/walk.scm 256 */
							obj_t BgL_arg1874z00_3642;

							BgL_arg1874z00_3642 = CAR(((obj_t) BgL_bz00_3409));
							BgL_test2496z00_4750 =
								BGl_isazf3zf3zz__objectz00(BgL_arg1874z00_3642,
								BGl_localzf2valuezf2zzdataflow_walkz00);
						}
						if (BgL_test2496z00_4750)
							{	/* Dataflow/walk.scm 257 */
								int BgL_arg1872z00_3643;

								{	/* Dataflow/walk.scm 257 */
									BgL_localz00_bglt BgL_oz00_3644;

									BgL_oz00_3644 =
										((BgL_localz00_bglt) CAR(((obj_t) BgL_bz00_3409)));
									{
										BgL_localzf2valuezf2_bglt BgL_auxz00_4757;

										{
											obj_t BgL_auxz00_4758;

											{	/* Dataflow/walk.scm 257 */
												BgL_objectz00_bglt BgL_tmpz00_4759;

												BgL_tmpz00_4759 = ((BgL_objectz00_bglt) BgL_oz00_3644);
												BgL_auxz00_4758 = BGL_OBJECT_WIDENING(BgL_tmpz00_4759);
											}
											BgL_auxz00_4757 =
												((BgL_localzf2valuezf2_bglt) BgL_auxz00_4758);
										}
										BgL_arg1872z00_3643 =
											(((BgL_localzf2valuezf2_bglt) COBJECT(BgL_auxz00_4757))->
											BgL_stampz00);
								}}
								BgL_test2495z00_4749 =
									((long) (BgL_arg1872z00_3643) < BgL_stampz00_3408);
							}
						else
							{	/* Dataflow/walk.scm 256 */
								BgL_test2495z00_4749 = ((bool_t) 1);
							}
					}
					if (BgL_test2495z00_4749)
						{	/* Dataflow/walk.scm 256 */
							return BgL_bz00_3409;
						}
					else
						{	/* Dataflow/walk.scm 259 */
							bool_t BgL_test2497z00_4766;

							{	/* Dataflow/walk.scm 259 */
								BgL_nodez00_bglt BgL_arg1870z00_3645;

								{	/* Dataflow/walk.scm 259 */
									BgL_localz00_bglt BgL_oz00_3646;

									BgL_oz00_3646 =
										((BgL_localz00_bglt) CAR(((obj_t) BgL_bz00_3409)));
									{
										BgL_localzf2valuezf2_bglt BgL_auxz00_4770;

										{
											obj_t BgL_auxz00_4771;

											{	/* Dataflow/walk.scm 259 */
												BgL_objectz00_bglt BgL_tmpz00_4772;

												BgL_tmpz00_4772 = ((BgL_objectz00_bglt) BgL_oz00_3646);
												BgL_auxz00_4771 = BGL_OBJECT_WIDENING(BgL_tmpz00_4772);
											}
											BgL_auxz00_4770 =
												((BgL_localzf2valuezf2_bglt) BgL_auxz00_4771);
										}
										BgL_arg1870z00_3645 =
											(((BgL_localzf2valuezf2_bglt) COBJECT(BgL_auxz00_4770))->
											BgL_nodez00);
									}
								}
								{	/* Dataflow/walk.scm 259 */
									bool_t BgL_res2267z00_3647;

									BgL_res2267z00_3647 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_arg1870z00_3645), BGl_varz00zzast_nodez00);
									BgL_test2497z00_4766 = BgL_res2267z00_3647;
								}
							}
							if (BgL_test2497z00_4766)
								{	/* Dataflow/walk.scm 260 */
									BgL_variablez00_bglt BgL_vz00_3648;

									{	/* Dataflow/walk.scm 260 */
										BgL_nodez00_bglt BgL_arg1866z00_3649;

										{	/* Dataflow/walk.scm 260 */
											BgL_localz00_bglt BgL_oz00_3650;

											BgL_oz00_3650 =
												((BgL_localz00_bglt) CAR(((obj_t) BgL_bz00_3409)));
											{
												BgL_localzf2valuezf2_bglt BgL_auxz00_4782;

												{
													obj_t BgL_auxz00_4783;

													{	/* Dataflow/walk.scm 260 */
														BgL_objectz00_bglt BgL_tmpz00_4784;

														BgL_tmpz00_4784 =
															((BgL_objectz00_bglt) BgL_oz00_3650);
														BgL_auxz00_4783 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_4784);
													}
													BgL_auxz00_4782 =
														((BgL_localzf2valuezf2_bglt) BgL_auxz00_4783);
												}
												BgL_arg1866z00_3649 =
													(((BgL_localzf2valuezf2_bglt)
														COBJECT(BgL_auxz00_4782))->BgL_nodez00);
											}
										}
										BgL_vz00_3648 =
											(((BgL_varz00_bglt) COBJECT(
													((BgL_varz00_bglt) BgL_arg1866z00_3649)))->
											BgL_variablez00);
									}
									if (
										((((BgL_variablez00_bglt) COBJECT(BgL_vz00_3648))->
												BgL_accessz00) == CNST_TABLE_REF(((long) 11))))
										{	/* Dataflow/walk.scm 262 */
											obj_t BgL_arg1863z00_3651;

											BgL_arg1863z00_3651 = CDR(((obj_t) BgL_bz00_3409));
											return
												MAKE_YOUNG_PAIR(
												((obj_t) BgL_vz00_3648), BgL_arg1863z00_3651);
										}
									else
										{	/* Dataflow/walk.scm 261 */
											return BFALSE;
										}
								}
							else
								{	/* Dataflow/walk.scm 259 */
									return BFALSE;
								}
						}
				}
			}
		}

	}



/* &dataflow-node!-let-f1395 */
	obj_t BGl_z62dataflowzd2nodez12zd2letzd2f1395za2zzdataflow_walkz00(obj_t
		BgL_envz00_3410, obj_t BgL_nodez00_3411, obj_t BgL_envz00_3412)
	{
		{	/* Dataflow/walk.scm 223 */
			{	/* Dataflow/walk.scm 225 */
				obj_t BgL_g1346z00_3653;

				BgL_g1346z00_3653 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_3411)))->BgL_localsz00);
				{
					obj_t BgL_l1344z00_3655;

					BgL_l1344z00_3655 = BgL_g1346z00_3653;
				BgL_zc3z04anonymousza31839ze3z87_3654:
					if (PAIRP(BgL_l1344z00_3655))
						{	/* Dataflow/walk.scm 225 */
							{	/* Dataflow/walk.scm 226 */
								obj_t BgL_localz00_3656;

								BgL_localz00_3656 = CAR(BgL_l1344z00_3655);
								{	/* Dataflow/walk.scm 226 */
									obj_t BgL_arg1841z00_3657;

									BgL_arg1841z00_3657 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt)
													(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt) BgL_localz00_3656))))->
														BgL_valuez00))))->BgL_bodyz00);
									BGl_dataflowzd2nodez12zc0zzdataflow_walkz00((
											(BgL_nodez00_bglt) BgL_arg1841z00_3657), BNIL);
								}
							}
							{
								obj_t BgL_l1344z00_4811;

								BgL_l1344z00_4811 = CDR(BgL_l1344z00_3655);
								BgL_l1344z00_3655 = BgL_l1344z00_4811;
								goto BgL_zc3z04anonymousza31839ze3z87_3654;
							}
						}
					else
						{	/* Dataflow/walk.scm 225 */
							((bool_t) 1);
						}
				}
			}
			return
				BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(
				(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_3411)))->BgL_bodyz00),
				BgL_envz00_3412);
		}

	}



/* &dataflow-node!-switc1393 */
	obj_t BGl_z62dataflowzd2nodez12zd2switc1393z70zzdataflow_walkz00(obj_t
		BgL_envz00_3413, obj_t BgL_nodez00_3414, obj_t BgL_envz00_3415)
	{
		{	/* Dataflow/walk.scm 212 */
			BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(
				(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_3414)))->BgL_testz00),
				BgL_envz00_3415);
			{	/* Dataflow/walk.scm 215 */
				obj_t BgL_g1343z00_3659;

				BgL_g1343z00_3659 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_3414)))->BgL_clausesz00);
				{
					obj_t BgL_l1341z00_3661;

					BgL_l1341z00_3661 = BgL_g1343z00_3659;
				BgL_zc3z04anonymousza31834ze3z87_3660:
					if (PAIRP(BgL_l1341z00_3661))
						{	/* Dataflow/walk.scm 215 */
							{	/* Dataflow/walk.scm 216 */
								obj_t BgL_clausez00_3662;

								BgL_clausez00_3662 = CAR(BgL_l1341z00_3661);
								{	/* Dataflow/walk.scm 216 */
									obj_t BgL_arg1836z00_3663;

									BgL_arg1836z00_3663 = CDR(((obj_t) BgL_clausez00_3662));
									BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(
										((BgL_nodez00_bglt) BgL_arg1836z00_3663), BgL_envz00_3415);
								}
							}
							{
								obj_t BgL_l1341z00_4828;

								BgL_l1341z00_4828 = CDR(BgL_l1341z00_3661);
								BgL_l1341z00_3661 = BgL_l1341z00_4828;
								goto BgL_zc3z04anonymousza31834ze3z87_3660;
							}
						}
					else
						{	/* Dataflow/walk.scm 215 */
							((bool_t) 1);
						}
				}
			}
			return BgL_envz00_3415;
		}

	}



/* &dataflow-node!-fail1391 */
	obj_t BGl_z62dataflowzd2nodez12zd2fail1391z70zzdataflow_walkz00(obj_t
		BgL_envz00_3416, obj_t BgL_nodez00_3417, obj_t BgL_envz00_3418)
	{
		{	/* Dataflow/walk.scm 202 */
			BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_3417)))->BgL_procz00),
				BgL_envz00_3418);
			BGl_dataflowzd2nodez12zc0zzdataflow_walkz00((((BgL_failz00_bglt)
						COBJECT(((BgL_failz00_bglt) BgL_nodez00_3417)))->BgL_msgz00),
				BgL_envz00_3418);
			BGl_dataflowzd2nodez12zc0zzdataflow_walkz00((((BgL_failz00_bglt)
						COBJECT(((BgL_failz00_bglt) BgL_nodez00_3417)))->BgL_objz00),
				BgL_envz00_3418);
			return BgL_envz00_3418;
		}

	}



/* &dataflow-node!-condi1389 */
	obj_t BGl_z62dataflowzd2nodez12zd2condi1389z70zzdataflow_walkz00(obj_t
		BgL_envz00_3419, obj_t BgL_nodez00_3420, obj_t BgL_envz00_3421)
	{
		{	/* Dataflow/walk.scm 179 */
			{
				obj_t BgL_env1z00_3667;
				obj_t BgL_env2z00_3668;

				{	/* Dataflow/walk.scm 190 */
					obj_t BgL_tenvz00_3680;

					BgL_tenvz00_3680 =
						BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(
						(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_3420)))->BgL_testz00),
						BgL_envz00_3421);
					{	/* Dataflow/walk.scm 190 */
						obj_t BgL_truezd2envzd2_3681;

						BgL_truezd2envzd2_3681 =
							BGl_appendzd221011zd2zzdataflow_walkz00
							(BGl_dataflowzd2testzd2envz00zzdataflow_walkz00(((
										(BgL_conditionalz00_bglt) COBJECT(((BgL_conditionalz00_bglt)
												BgL_nodez00_3420)))->BgL_testz00)), BgL_tenvz00_3680);
						{	/* Dataflow/walk.scm 191 */
							obj_t BgL_falsezd2envzd2_3682;

							BgL_falsezd2envzd2_3682 =
								BGl_appendzd221011zd2zzdataflow_walkz00
								(BGl_dataflowzd2testzd2falsezd2envzd2zzdataflow_walkz00(((
											(BgL_conditionalz00_bglt)
											COBJECT(((BgL_conditionalz00_bglt) BgL_nodez00_3420)))->
										BgL_testz00)), BgL_tenvz00_3680);
							{	/* Dataflow/walk.scm 192 */

								{	/* Dataflow/walk.scm 193 */
									obj_t BgL_tenvz00_3683;
									obj_t BgL_fenvz00_3684;

									BgL_tenvz00_3683 =
										BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(
										(((BgL_conditionalz00_bglt) COBJECT(
													((BgL_conditionalz00_bglt) BgL_nodez00_3420)))->
											BgL_falsez00), BgL_falsezd2envzd2_3682);
									BgL_fenvz00_3684 =
										BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(((
												(BgL_conditionalz00_bglt)
												COBJECT(((BgL_conditionalz00_bglt) BgL_nodez00_3420)))->
											BgL_truez00), BgL_truezd2envzd2_3681);
									{	/* Dataflow/walk.scm 195 */
										bool_t BgL_test2501z00_4856;

										{	/* Dataflow/walk.scm 195 */
											BgL_nodez00_bglt BgL_arg1790z00_3685;

											BgL_arg1790z00_3685 =
												(((BgL_conditionalz00_bglt) COBJECT(
														((BgL_conditionalz00_bglt) BgL_nodez00_3420)))->
												BgL_falsez00);
											BgL_test2501z00_4856 =
												CBOOL(BGl_abortzf3zf3zzdataflow_walkz00
												(BgL_arg1790z00_3685));
										}
										if (BgL_test2501z00_4856)
											{	/* Dataflow/walk.scm 195 */
												return BgL_tenvz00_3683;
											}
										else
											{	/* Dataflow/walk.scm 195 */
												BgL_env1z00_3667 = BgL_tenvz00_3683;
												BgL_env2z00_3668 = BgL_fenvz00_3684;
												{	/* Dataflow/walk.scm 182 */
													obj_t BgL_hook1340z00_3669;

													BgL_hook1340z00_3669 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
													{
														obj_t BgL_l1337z00_3671;
														obj_t BgL_h1338z00_3672;

														BgL_l1337z00_3671 = BgL_env1z00_3667;
														BgL_h1338z00_3672 = BgL_hook1340z00_3669;
													BgL_zc3z04anonymousza31822ze3z87_3670:
														if (NULLP(BgL_l1337z00_3671))
															{	/* Dataflow/walk.scm 182 */
																return CDR(BgL_hook1340z00_3669);
															}
														else
															{	/* Dataflow/walk.scm 182 */
																bool_t BgL_test2503z00_4865;

																{	/* Dataflow/walk.scm 183 */
																	obj_t BgL_cz00_3673;

																	BgL_cz00_3673 =
																		CAR(((obj_t) BgL_l1337z00_3671));
																	{	/* Dataflow/walk.scm 184 */
																		obj_t BgL_c2z00_3674;

																		BgL_c2z00_3674 =
																			BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																			(CAR(((obj_t) BgL_cz00_3673)),
																			BgL_env2z00_3668);
																		{	/* Dataflow/walk.scm 185 */

																			if (PAIRP(BgL_c2z00_3674))
																				{	/* Dataflow/walk.scm 186 */
																					BgL_test2503z00_4865 =
																						(CDR(BgL_c2z00_3674) ==
																						CDR(((obj_t) BgL_cz00_3673)));
																				}
																			else
																				{	/* Dataflow/walk.scm 186 */
																					BgL_test2503z00_4865 = ((bool_t) 0);
																				}
																		}
																	}
																}
																if (BgL_test2503z00_4865)
																	{	/* Dataflow/walk.scm 182 */
																		obj_t BgL_nh1339z00_3675;

																		{	/* Dataflow/walk.scm 182 */
																			obj_t BgL_arg1827z00_3676;

																			BgL_arg1827z00_3676 =
																				CAR(((obj_t) BgL_l1337z00_3671));
																			{	/* Dataflow/walk.scm 182 */
																				obj_t BgL_res2259z00_3677;

																				BgL_res2259z00_3677 =
																					MAKE_YOUNG_PAIR(BgL_arg1827z00_3676,
																					BNIL);
																				BgL_nh1339z00_3675 =
																					BgL_res2259z00_3677;
																			}
																		}
																		SET_CDR(BgL_h1338z00_3672,
																			BgL_nh1339z00_3675);
																		{	/* Dataflow/walk.scm 182 */
																			obj_t BgL_arg1826z00_3678;

																			BgL_arg1826z00_3678 =
																				CDR(((obj_t) BgL_l1337z00_3671));
																			{
																				obj_t BgL_h1338z00_4884;
																				obj_t BgL_l1337z00_4883;

																				BgL_l1337z00_4883 = BgL_arg1826z00_3678;
																				BgL_h1338z00_4884 = BgL_nh1339z00_3675;
																				BgL_h1338z00_3672 = BgL_h1338z00_4884;
																				BgL_l1337z00_3671 = BgL_l1337z00_4883;
																				goto
																					BgL_zc3z04anonymousza31822ze3z87_3670;
																			}
																		}
																	}
																else
																	{	/* Dataflow/walk.scm 182 */
																		obj_t BgL_arg1828z00_3679;

																		BgL_arg1828z00_3679 =
																			CDR(((obj_t) BgL_l1337z00_3671));
																		{
																			obj_t BgL_l1337z00_4887;

																			BgL_l1337z00_4887 = BgL_arg1828z00_3679;
																			BgL_l1337z00_3671 = BgL_l1337z00_4887;
																			goto
																				BgL_zc3z04anonymousza31822ze3z87_3670;
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



/* &dataflow-node!-setq1387 */
	obj_t BGl_z62dataflowzd2nodez12zd2setq1387z70zzdataflow_walkz00(obj_t
		BgL_envz00_3422, obj_t BgL_nodez00_3423, obj_t BgL_envz00_3424)
	{
		{	/* Dataflow/walk.scm 159 */
			{
				BgL_variablez00_bglt BgL_variablez00_3688;
				obj_t BgL_envz00_3689;

				{	/* Dataflow/walk.scm 167 */
					obj_t BgL_nenvz00_3700;

					BgL_nenvz00_3700 =
						BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(
						(((BgL_setqz00_bglt) COBJECT(
									((BgL_setqz00_bglt) BgL_nodez00_3423)))->BgL_valuez00),
						BgL_envz00_3424);
					{	/* Dataflow/walk.scm 168 */
						BgL_varz00_bglt BgL_i1152z00_3701;

						BgL_i1152z00_3701 =
							(((BgL_setqz00_bglt) COBJECT(
									((BgL_setqz00_bglt) BgL_nodez00_3423)))->BgL_varz00);
						{	/* Dataflow/walk.scm 169 */
							bool_t BgL_test2505z00_4893;

							{	/* Dataflow/walk.scm 169 */
								BgL_variablez00_bglt BgL_arg1757z00_3702;

								BgL_arg1757z00_3702 =
									(((BgL_varz00_bglt) COBJECT(BgL_i1152z00_3701))->
									BgL_variablez00);
								{	/* Dataflow/walk.scm 169 */
									bool_t BgL_res2256z00_3703;

									BgL_res2256z00_3703 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_arg1757z00_3702), BGl_globalz00zzast_varz00);
									BgL_test2505z00_4893 = BgL_res2256z00_3703;
								}
							}
							if (BgL_test2505z00_4893)
								{	/* Dataflow/walk.scm 169 */
									BgL_variablez00_3688 =
										(((BgL_varz00_bglt) COBJECT(BgL_i1152z00_3701))->
										BgL_variablez00);
									BgL_envz00_3689 = BgL_nenvz00_3700;
								BgL_removezd2variablezd2fromzd2envzd2_3687:
									{	/* Dataflow/walk.scm 162 */
										obj_t BgL_hook1335z00_3690;

										BgL_hook1335z00_3690 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
										{
											obj_t BgL_l1332z00_3692;
											obj_t BgL_h1333z00_3693;

											BgL_l1332z00_3692 = BgL_envz00_3689;
											BgL_h1333z00_3693 = BgL_hook1335z00_3690;
										BgL_zc3z04anonymousza31761ze3z87_3691:
											if (NULLP(BgL_l1332z00_3692))
												{	/* Dataflow/walk.scm 162 */
													return CDR(BgL_hook1335z00_3690);
												}
											else
												{	/* Dataflow/walk.scm 162 */
													bool_t BgL_test2507z00_4901;

													{	/* Dataflow/walk.scm 163 */
														bool_t BgL_test2508z00_4902;

														{	/* Dataflow/walk.scm 163 */
															obj_t BgL_tmpz00_4903;

															{	/* Dataflow/walk.scm 163 */
																obj_t BgL_pairz00_3694;

																BgL_pairz00_3694 =
																	CAR(((obj_t) BgL_l1332z00_3692));
																BgL_tmpz00_4903 = CAR(BgL_pairz00_3694);
															}
															BgL_test2508z00_4902 =
																(BgL_tmpz00_4903 ==
																((obj_t) BgL_variablez00_3688));
														}
														if (BgL_test2508z00_4902)
															{	/* Dataflow/walk.scm 163 */
																BgL_test2507z00_4901 = ((bool_t) 0);
															}
														else
															{	/* Dataflow/walk.scm 163 */
																BgL_test2507z00_4901 = ((bool_t) 1);
															}
													}
													if (BgL_test2507z00_4901)
														{	/* Dataflow/walk.scm 162 */
															obj_t BgL_nh1334z00_3695;

															{	/* Dataflow/walk.scm 162 */
																obj_t BgL_arg1778z00_3696;

																BgL_arg1778z00_3696 =
																	CAR(((obj_t) BgL_l1332z00_3692));
																{	/* Dataflow/walk.scm 162 */
																	obj_t BgL_res2255z00_3697;

																	BgL_res2255z00_3697 =
																		MAKE_YOUNG_PAIR(BgL_arg1778z00_3696, BNIL);
																	BgL_nh1334z00_3695 = BgL_res2255z00_3697;
																}
															}
															SET_CDR(BgL_h1333z00_3693, BgL_nh1334z00_3695);
															{	/* Dataflow/walk.scm 162 */
																obj_t BgL_arg1775z00_3698;

																BgL_arg1775z00_3698 =
																	CDR(((obj_t) BgL_l1332z00_3692));
																{
																	obj_t BgL_h1333z00_4916;
																	obj_t BgL_l1332z00_4915;

																	BgL_l1332z00_4915 = BgL_arg1775z00_3698;
																	BgL_h1333z00_4916 = BgL_nh1334z00_3695;
																	BgL_h1333z00_3693 = BgL_h1333z00_4916;
																	BgL_l1332z00_3692 = BgL_l1332z00_4915;
																	goto BgL_zc3z04anonymousza31761ze3z87_3691;
																}
															}
														}
													else
														{	/* Dataflow/walk.scm 162 */
															obj_t BgL_arg1779z00_3699;

															BgL_arg1779z00_3699 =
																CDR(((obj_t) BgL_l1332z00_3692));
															{
																obj_t BgL_l1332z00_4919;

																BgL_l1332z00_4919 = BgL_arg1779z00_3699;
																BgL_l1332z00_3692 = BgL_l1332z00_4919;
																goto BgL_zc3z04anonymousza31761ze3z87_3691;
															}
														}
												}
										}
									}
								}
							else
								{	/* Dataflow/walk.scm 171 */
									BgL_typez00_bglt BgL_typz00_3704;

									BgL_typz00_3704 =
										BGl_getzd2typezd2zztype_typeofz00(
										(((BgL_setqz00_bglt) COBJECT(
													((BgL_setqz00_bglt) BgL_nodez00_3423)))->
											BgL_valuez00), ((bool_t) 1));
									{	/* Dataflow/walk.scm 172 */
										bool_t BgL_test2509z00_4924;

										if (
											(((obj_t) BgL_typz00_3704) ==
												BGl_za2_za2z00zztype_cachez00))
											{	/* Dataflow/walk.scm 172 */
												BgL_test2509z00_4924 = ((bool_t) 1);
											}
										else
											{	/* Dataflow/walk.scm 172 */
												BgL_test2509z00_4924 =
													(
													((obj_t) BgL_typz00_3704) ==
													BGl_za2objza2z00zztype_cachez00);
											}
										if (BgL_test2509z00_4924)
											{
												obj_t BgL_envz00_4932;
												BgL_variablez00_bglt BgL_variablez00_4930;

												BgL_variablez00_4930 =
													(((BgL_varz00_bglt) COBJECT(BgL_i1152z00_3701))->
													BgL_variablez00);
												BgL_envz00_4932 = BgL_nenvz00_3700;
												BgL_envz00_3689 = BgL_envz00_4932;
												BgL_variablez00_3688 = BgL_variablez00_4930;
												goto BgL_removezd2variablezd2fromzd2envzd2_3687;
											}
										else
											{	/* Dataflow/walk.scm 174 */
												obj_t BgL_arg1754z00_3705;

												{	/* Dataflow/walk.scm 174 */
													BgL_variablez00_bglt BgL_arg1755z00_3706;

													BgL_arg1755z00_3706 =
														(((BgL_varz00_bglt) COBJECT(BgL_i1152z00_3701))->
														BgL_variablez00);
													BgL_arg1754z00_3705 =
														MAKE_YOUNG_PAIR(((obj_t) BgL_arg1755z00_3706),
														((obj_t) BgL_typz00_3704));
												}
												return
													MAKE_YOUNG_PAIR(BgL_arg1754z00_3705,
													BgL_nenvz00_3700);
											}
									}
								}
						}
					}
				}
			}
		}

	}



/* &dataflow-node!-exter1385 */
	obj_t BGl_z62dataflowzd2nodez12zd2exter1385z70zzdataflow_walkz00(obj_t
		BgL_envz00_3425, obj_t BgL_nodez00_3426, obj_t BgL_envz00_3427)
	{
		{	/* Dataflow/walk.scm 152 */
			{	/* Dataflow/walk.scm 153 */
				obj_t BgL_res2362z00_3708;

				BgL_res2362z00_3708 =
					BGl_dataflowzd2nodeza2z12z62zzdataflow_walkz00(
					(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_nodez00_3426)))->BgL_exprza2za2),
					BgL_envz00_3427);
				return BgL_res2362z00_3708;
			}
		}

	}



/* &dataflow-node!-funca1383 */
	obj_t BGl_z62dataflowzd2nodez12zd2funca1383z70zzdataflow_walkz00(obj_t
		BgL_envz00_3428, obj_t BgL_nodez00_3429, obj_t BgL_envz00_3430)
	{
		{	/* Dataflow/walk.scm 144 */
			BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_3429)))->BgL_funz00),
				BgL_envz00_3430);
			return
				BGl_dataflowzd2nodeza2z12z62zzdataflow_walkz00((((BgL_funcallz00_bglt)
						COBJECT(((BgL_funcallz00_bglt) BgL_nodez00_3429)))->BgL_argsz00),
				BgL_envz00_3430);
		}

	}



/* &dataflow-node!-app-l1381 */
	obj_t BGl_z62dataflowzd2nodez12zd2appzd2l1381za2zzdataflow_walkz00(obj_t
		BgL_envz00_3431, obj_t BgL_nodez00_3432, obj_t BgL_envz00_3433)
	{
		{	/* Dataflow/walk.scm 136 */
			BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_3432)))->BgL_funz00),
				BgL_envz00_3433);
			return
				BGl_dataflowzd2nodez12zc0zzdataflow_walkz00((((BgL_appzd2lyzd2_bglt)
						COBJECT(((BgL_appzd2lyzd2_bglt) BgL_nodez00_3432)))->BgL_argz00),
				BgL_envz00_3433);
		}

	}



/* &dataflow-node!-app1379 */
	obj_t BGl_z62dataflowzd2nodez12zd2app1379z70zzdataflow_walkz00(obj_t
		BgL_envz00_3434, obj_t BgL_nodez00_3435, obj_t BgL_envz00_3436)
	{
		{	/* Dataflow/walk.scm 120 */
			{	/* Dataflow/walk.scm 122 */
				obj_t BgL_aenvz00_3712;

				BgL_aenvz00_3712 =
					BGl_dataflowzd2nodeza2z12z62zzdataflow_walkz00(
					(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_3435)))->BgL_argsz00),
					BgL_envz00_3436);
				{	/* Dataflow/walk.scm 123 */
					bool_t BgL_test2511z00_4956;

					{	/* Dataflow/walk.scm 123 */
						BgL_variablez00_bglt BgL_arg1728z00_3713;

						BgL_arg1728z00_3713 =
							(((BgL_varz00_bglt) COBJECT(
									(((BgL_appz00_bglt) COBJECT(
												((BgL_appz00_bglt) BgL_nodez00_3435)))->BgL_funz00)))->
							BgL_variablez00);
						{	/* Dataflow/walk.scm 123 */
							bool_t BgL_res2250z00_3714;

							BgL_res2250z00_3714 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_arg1728z00_3713), BGl_localz00zzast_varz00);
							BgL_test2511z00_4956 = BgL_res2250z00_3714;
						}
					}
					if (BgL_test2511z00_4956)
						{	/* Dataflow/walk.scm 127 */
							obj_t BgL_hook1330z00_3715;

							BgL_hook1330z00_3715 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
							{
								obj_t BgL_l1327z00_3717;
								obj_t BgL_h1328z00_3718;

								BgL_l1327z00_3717 = BgL_aenvz00_3712;
								BgL_h1328z00_3718 = BgL_hook1330z00_3715;
							BgL_zc3z04anonymousza31710ze3z87_3716:
								if (NULLP(BgL_l1327z00_3717))
									{	/* Dataflow/walk.scm 127 */
										return CDR(BgL_hook1330z00_3715);
									}
								else
									{	/* Dataflow/walk.scm 127 */
										bool_t BgL_test2513z00_4966;

										{	/* Dataflow/walk.scm 128 */
											obj_t BgL_vz00_3719;

											{	/* Dataflow/walk.scm 128 */
												obj_t BgL_pairz00_3720;

												BgL_pairz00_3720 = CAR(((obj_t) BgL_l1327z00_3717));
												BgL_vz00_3719 = CAR(BgL_pairz00_3720);
											}
											{	/* Dataflow/walk.scm 129 */
												bool_t BgL__ortest_1148z00_3721;

												BgL__ortest_1148z00_3721 =
													BGl_isazf3zf3zz__objectz00(BgL_vz00_3719,
													BGl_globalz00zzast_varz00);
												if (BgL__ortest_1148z00_3721)
													{	/* Dataflow/walk.scm 129 */
														BgL_test2513z00_4966 = BgL__ortest_1148z00_3721;
													}
												else
													{	/* Dataflow/walk.scm 129 */
														BgL_test2513z00_4966 =
															(
															(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt) BgL_vz00_3719)))->
																BgL_accessz00) == CNST_TABLE_REF(((long) 11)));
										}}}
										if (BgL_test2513z00_4966)
											{	/* Dataflow/walk.scm 127 */
												obj_t BgL_nh1329z00_3722;

												{	/* Dataflow/walk.scm 127 */
													obj_t BgL_arg1725z00_3723;

													BgL_arg1725z00_3723 =
														CAR(((obj_t) BgL_l1327z00_3717));
													{	/* Dataflow/walk.scm 127 */
														obj_t BgL_res2253z00_3724;

														BgL_res2253z00_3724 =
															MAKE_YOUNG_PAIR(BgL_arg1725z00_3723, BNIL);
														BgL_nh1329z00_3722 = BgL_res2253z00_3724;
													}
												}
												SET_CDR(BgL_h1328z00_3718, BgL_nh1329z00_3722);
												{	/* Dataflow/walk.scm 127 */
													obj_t BgL_arg1719z00_3725;

													BgL_arg1719z00_3725 =
														CDR(((obj_t) BgL_l1327z00_3717));
													{
														obj_t BgL_h1328z00_4983;
														obj_t BgL_l1327z00_4982;

														BgL_l1327z00_4982 = BgL_arg1719z00_3725;
														BgL_h1328z00_4983 = BgL_nh1329z00_3722;
														BgL_h1328z00_3718 = BgL_h1328z00_4983;
														BgL_l1327z00_3717 = BgL_l1327z00_4982;
														goto BgL_zc3z04anonymousza31710ze3z87_3716;
													}
												}
											}
										else
											{	/* Dataflow/walk.scm 127 */
												obj_t BgL_arg1726z00_3726;

												BgL_arg1726z00_3726 = CDR(((obj_t) BgL_l1327z00_3717));
												{
													obj_t BgL_l1327z00_4986;

													BgL_l1327z00_4986 = BgL_arg1726z00_3726;
													BgL_l1327z00_3717 = BgL_l1327z00_4986;
													goto BgL_zc3z04anonymousza31710ze3z87_3716;
												}
											}
									}
							}
						}
					else
						{	/* Dataflow/walk.scm 123 */
							return BgL_aenvz00_3712;
						}
				}
			}
		}

	}



/* &dataflow-node!-sync1377 */
	obj_t BGl_z62dataflowzd2nodez12zd2sync1377z70zzdataflow_walkz00(obj_t
		BgL_envz00_3437, obj_t BgL_nodez00_3438, obj_t BgL_envz00_3439)
	{
		{	/* Dataflow/walk.scm 111 */
			BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_3438)))->BgL_mutexz00),
				BgL_envz00_3439);
			BGl_dataflowzd2nodez12zc0zzdataflow_walkz00((((BgL_syncz00_bglt)
						COBJECT(((BgL_syncz00_bglt) BgL_nodez00_3438)))->BgL_prelockz00),
				BgL_envz00_3439);
			BGl_dataflowzd2nodez12zc0zzdataflow_walkz00((((BgL_syncz00_bglt)
						COBJECT(((BgL_syncz00_bglt) BgL_nodez00_3438)))->BgL_bodyz00),
				BgL_envz00_3439);
			return BgL_envz00_3439;
		}

	}



/* &dataflow-node!-seque1375 */
	obj_t BGl_z62dataflowzd2nodez12zd2seque1375z70zzdataflow_walkz00(obj_t
		BgL_envz00_3440, obj_t BgL_nodez00_3441, obj_t BgL_envz00_3442)
	{
		{	/* Dataflow/walk.scm 101 */
			{	/* Dataflow/walk.scm 102 */
				obj_t BgL_res2363z00_3736;

				{	/* Dataflow/walk.scm 102 */
					obj_t BgL_g1146z00_3729;

					BgL_g1146z00_3729 =
						(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_3441)))->BgL_nodesz00);
					{
						obj_t BgL_nodeza2za2_3731;
						obj_t BgL_envz00_3732;

						BgL_nodeza2za2_3731 = BgL_g1146z00_3729;
						BgL_envz00_3732 = BgL_envz00_3442;
					BgL_loopz00_3730:
						if (NULLP(BgL_nodeza2za2_3731))
							{	/* Dataflow/walk.scm 104 */
								BgL_res2363z00_3736 = BgL_envz00_3732;
							}
						else
							{	/* Dataflow/walk.scm 106 */
								obj_t BgL_arg1684z00_3733;
								obj_t BgL_arg1685z00_3734;

								BgL_arg1684z00_3733 = CDR(((obj_t) BgL_nodeza2za2_3731));
								{	/* Dataflow/walk.scm 106 */
									obj_t BgL_arg1686z00_3735;

									BgL_arg1686z00_3735 = CAR(((obj_t) BgL_nodeza2za2_3731));
									BgL_arg1685z00_3734 =
										BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(
										((BgL_nodez00_bglt) BgL_arg1686z00_3735), BgL_envz00_3732);
								}
								{
									obj_t BgL_envz00_5007;
									obj_t BgL_nodeza2za2_5006;

									BgL_nodeza2za2_5006 = BgL_arg1684z00_3733;
									BgL_envz00_5007 = BgL_arg1685z00_3734;
									BgL_envz00_3732 = BgL_envz00_5007;
									BgL_nodeza2za2_3731 = BgL_nodeza2za2_5006;
									goto BgL_loopz00_3730;
								}
							}
					}
				}
				return BgL_res2363z00_3736;
			}
		}

	}



/* &dataflow-node!-closu1372 */
	obj_t BGl_z62dataflowzd2nodez12zd2closu1372z70zzdataflow_walkz00(obj_t
		BgL_envz00_3443, obj_t BgL_nodez00_3444, obj_t BgL_envz00_3445)
	{
		{	/* Dataflow/walk.scm 95 */
			return ((obj_t) BgL_envz00_3445);
		}

	}



/* &dataflow-node!-var1370 */
	obj_t BGl_z62dataflowzd2nodez12zd2var1370z70zzdataflow_walkz00(obj_t
		BgL_envz00_3446, obj_t BgL_nodez00_3447, obj_t BgL_envz00_3448)
	{
		{	/* Dataflow/walk.scm 81 */
			{	/* Dataflow/walk.scm 83 */
				BgL_variablez00_bglt BgL_i1143z00_3740;

				BgL_i1143z00_3740 =
					(((BgL_varz00_bglt) COBJECT(
							((BgL_varz00_bglt) BgL_nodez00_3447)))->BgL_variablez00);
				{	/* Dataflow/walk.scm 84 */
					bool_t BgL_test2516z00_5011;

					if (BGl_bigloozd2typezf3z21zztype_typez00(
							(((BgL_variablez00_bglt) COBJECT(BgL_i1143z00_3740))->
								BgL_typez00)))
						{	/* Dataflow/walk.scm 85 */
							bool_t BgL__ortest_1144z00_3741;

							{	/* Dataflow/walk.scm 85 */
								bool_t BgL_test2518z00_5015;

								{	/* Dataflow/walk.scm 85 */
									BgL_typez00_bglt BgL_arg1669z00_3742;

									BgL_arg1669z00_3742 =
										(((BgL_variablez00_bglt) COBJECT(BgL_i1143z00_3740))->
										BgL_typez00);
									{	/* Dataflow/walk.scm 85 */
										bool_t BgL_res2246z00_3743;

										BgL_res2246z00_3743 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_arg1669z00_3742),
											BGl_tclassz00zzobject_classz00);
										BgL_test2518z00_5015 = BgL_res2246z00_3743;
									}
								}
								if (BgL_test2518z00_5015)
									{	/* Dataflow/walk.scm 85 */
										BgL__ortest_1144z00_3741 = ((bool_t) 0);
									}
								else
									{	/* Dataflow/walk.scm 85 */
										BgL__ortest_1144z00_3741 = ((bool_t) 1);
									}
							}
							if (BgL__ortest_1144z00_3741)
								{	/* Dataflow/walk.scm 85 */
									BgL_test2516z00_5011 = BgL__ortest_1144z00_3741;
								}
							else
								{	/* Dataflow/walk.scm 85 */
									BgL_typez00_bglt BgL_arg1664z00_3744;
									BgL_typez00_bglt BgL_arg1667z00_3745;

									BgL_arg1664z00_3744 =
										(((BgL_variablez00_bglt) COBJECT(BgL_i1143z00_3740))->
										BgL_typez00);
									BgL_arg1667z00_3745 =
										(((BgL_nodez00_bglt)
											COBJECT(((BgL_nodez00_bglt) ((BgL_varz00_bglt)
														BgL_nodez00_3447))))->BgL_typez00);
									BgL_test2516z00_5011 =
										BGl_typezd2subclasszf3z21zzobject_classz00
										(BgL_arg1664z00_3744, BgL_arg1667z00_3745);
								}
						}
					else
						{	/* Dataflow/walk.scm 84 */
							BgL_test2516z00_5011 = ((bool_t) 0);
						}
					if (BgL_test2516z00_5011)
						{	/* Dataflow/walk.scm 86 */
							obj_t BgL_bz00_3746;

							BgL_bz00_3746 =
								BGl_assqz00zz__r4_pairs_and_lists_6_3z00(
								((obj_t)
									(((BgL_varz00_bglt) COBJECT(
												((BgL_varz00_bglt) BgL_nodez00_3447)))->
										BgL_variablez00)), BgL_envz00_3448);
							if (PAIRP(BgL_bz00_3746))
								{	/* Dataflow/walk.scm 87 */
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_varz00_bglt) BgL_nodez00_3447))))->
											BgL_typez00) =
										((BgL_typez00_bglt) ((BgL_typez00_bglt)
												CDR(BgL_bz00_3746))), BUNSPEC);
								}
							else
								{	/* Dataflow/walk.scm 87 */
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_varz00_bglt) BgL_nodez00_3447))))->
											BgL_typez00) =
										((BgL_typez00_bglt) (((BgL_variablez00_bglt)
													COBJECT((((BgL_varz00_bglt) COBJECT(((BgL_varz00_bglt)
																		BgL_nodez00_3447)))->BgL_variablez00)))->
												BgL_typez00)), BUNSPEC);
								}
						}
					else
						{	/* Dataflow/walk.scm 84 */
							BFALSE;
						}
				}
			}
			return BgL_envz00_3448;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzdataflow_walkz00()
	{
		{	/* Dataflow/walk.scm 17 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string2356z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2356z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string2356z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2356z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2356z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2356z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string2356z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2356z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zztype_miscz00(((long) 49974950),
				BSTRING_TO_STRING(BGl_string2356z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string2356z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string2356z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2356z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2356z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2356z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string2356z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zzeffect_cgraphz00(((long) 271385030),
				BSTRING_TO_STRING(BGl_string2356z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zzeffect_spreadz00(((long) 348216754),
				BSTRING_TO_STRING(BGl_string2356z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zzeffect_feffectz00(((long) 516374373),
				BSTRING_TO_STRING(BGl_string2356z00zzdataflow_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2356z00zzdataflow_walkz00));
		}

	}

#ifdef __cplusplus
}
#endif
