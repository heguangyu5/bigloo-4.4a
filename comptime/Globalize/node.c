/*===========================================================================*/
/*   (Globalize/node.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/node.scm) */
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

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

	typedef struct BgL_sexitz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_handlerz00;
		bool_t BgL_detachedzf3zf3;
	}               *BgL_sexitz00_bglt;

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

	typedef struct BgL_atomz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}              *BgL_atomz00_bglt;

	typedef struct BgL_literalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}                 *BgL_literalz00_bglt;

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

	typedef struct BgL_sfunzf2ginfozf2_bgl
	{
		bool_t BgL_gzf3zf3;
		obj_t BgL_cfromz00;
		obj_t BgL_cfromza2za2;
		obj_t BgL_ctoz00;
		obj_t BgL_ctoza2za2;
		obj_t BgL_efunctionsz00;
		obj_t BgL_integratorz00;
		obj_t BgL_imarkz00;
		obj_t BgL_ownerz00;
		obj_t BgL_integratedz00;
		obj_t BgL_pluggedzd2inzd2;
		long BgL_markz00;
		obj_t BgL_freezd2markzd2;
		obj_t BgL_thezd2globalzd2;
		obj_t BgL_kapturedz00;
		obj_t BgL_newzd2bodyzd2;
		long BgL_bmarkz00;
		long BgL_umarkz00;
		obj_t BgL_freez00;
		obj_t BgL_boundz00;
	}                      *BgL_sfunzf2ginfozf2_bglt;

	typedef struct BgL_svarzf2ginfozf2_bgl
	{
		bool_t BgL_kapturedzf3zf3;
		long BgL_freezd2markzd2;
		long BgL_markz00;
		bool_t BgL_celledzf3zf3;
		bool_t BgL_stackablez00;
	}                      *BgL_svarzf2ginfozf2_bglt;

	typedef struct BgL_localzf2ginfozf2_bgl
	{
		bool_t BgL_escapezf3zf3;
		bool_t BgL_globaliza7edzf3z54;
	}                       *BgL_localzf2ginfozf2_bglt;


	static BgL_nodez00_bglt BGl_z62gloz12z70zzglobaliza7e_nodeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_syncz00zzast_nodez00;
	extern BgL_globalz00_bglt
		BGl_thezd2globalzd2zzglobaliza7e_localzd2ze3globalz96(BgL_localz00_bglt);
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2sequence1367za2zzglobaliza7e_nodeza7(obj_t, obj_t, obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static BgL_appz00_bglt
		BGl_azd2makezd2procedurez00zzglobaliza7e_nodeza7(BgL_localz00_bglt);
	static obj_t BGl_makezd2setszd2zzglobaliza7e_nodeza7(obj_t, obj_t, obj_t,
		BgL_variablez00_bglt);
	static obj_t BGl_objectzd2initzd2zzglobaliza7e_nodeza7();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static BgL_localz00_bglt
		BGl_cellzd2variablezd2zzglobaliza7e_nodeza7(BgL_localz00_bglt);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzglobaliza7e_nodeza7(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_nodeza7();
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2conditional1385za2zzglobaliza7e_nodeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2globaliza7ez12z05zzglobaliza7e_nodeza7(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2appzd2ly1375z70zzglobaliza7e_nodeza7(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_cellzd2formalszd2zzglobaliza7e_nodeza7(obj_t,
		BgL_nodez00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2extern1379za2zzglobaliza7e_nodeza7(obj_t, obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_thezd2closurezd2zzglobaliza7e_freeza7(BgL_variablez00_bglt,
		obj_t);
	static obj_t BGl_gloza2z12zb0zzglobaliza7e_nodeza7(obj_t, obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2setzd2exzd2it1395za2zzglobaliza7e_nodeza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_nodeza7();
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2cast1381za2zzglobaliza7e_nodeza7(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2funcall1377za2zzglobaliza7e_nodeza7(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2setq1383za2zzglobaliza7e_nodeza7(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2makezd2box1399z70zzglobaliza7e_nodeza7(obj_t, obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern BgL_typez00_bglt
		BGl_getzd2bigloozd2definedzd2typezd2zztype_cachez00(BgL_typez00_bglt);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzglobaliza7e_nodeza7 = BUNSPEC;
	extern obj_t BGl_funz00zzast_varz00;
	static BgL_nodez00_bglt BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_nodez00_bglt,
		BgL_variablez00_bglt);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62gloz12zd2app1372za2zzglobaliza7e_nodeza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzglobaliza7e_nodeza7();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_nodeza7();
	extern obj_t BGl_za2cellza2z00zztype_cachez00;
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static BgL_appz00_bglt
		BGl_azd2procedurezd2setz12z12zzglobaliza7e_nodeza7(obj_t, obj_t, long,
		obj_t, BgL_variablez00_bglt);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2atom1359za2zzglobaliza7e_nodeza7(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7;
	static bool_t BGl_celledzf3zf3zzglobaliza7e_nodeza7(BgL_variablez00_bglt);
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2letzd2fun1391z70zzglobaliza7e_nodeza7(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_nodezd2globaliza7ez12z67zzglobaliza7e_nodeza7(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t);
	static obj_t BGl_z62gloz121356z70zzglobaliza7e_nodeza7(obj_t, obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	extern BgL_typez00_bglt BGl_getzd2typezd2atomz00zztype_typeofz00(obj_t);
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_localzd2ze3globalz96(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_freeza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2boxzd2ref1401z70zzglobaliza7e_nodeza7(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2switch1389za2zzglobaliza7e_nodeza7(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2boxzd2setz121403z62zzglobaliza7e_nodeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2kwote1361za2zzglobaliza7e_nodeza7(obj_t, obj_t, obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzglobaliza7e_nodeza7();
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_nodeza7();
	static obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_nodeza7();
	static obj_t BGl_celledzd2bindingszd2zzglobaliza7e_nodeza7(obj_t);
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2letzd2var1393z70zzglobaliza7e_nodeza7(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2sync1369za2zzglobaliza7e_nodeza7(obj_t, obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static BgL_letzd2varzd2_bglt
		BGl_makezd2escapingzd2bindingsz00zzglobaliza7e_nodeza7(obj_t,
		BgL_nodez00_bglt, BgL_variablez00_bglt);
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2closure1365za2zzglobaliza7e_nodeza7(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2fail1387za2zzglobaliza7e_nodeza7(obj_t, obj_t, obj_t);
	static obj_t
		BGl_globaliza7ezd2localzd2funz12zb5zzglobaliza7e_nodeza7(BgL_localz00_bglt,
		BgL_variablez00_bglt);
	static BgL_makezd2boxzd2_bglt
		BGl_azd2makezd2cellz00zzglobaliza7e_nodeza7(BgL_nodez00_bglt,
		BgL_variablez00_bglt);
	extern obj_t BGl_literalz00zzast_nodez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_globalz00zzast_varz00;
	static BgL_nodez00_bglt BGl_z62gloz12zd2var1363za2zzglobaliza7e_nodeza7(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2jumpzd2exzd2it1397za2zzglobaliza7e_nodeza7(obj_t, obj_t,
		obj_t);
	static obj_t __cnst[10];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_nodezd2globaliza7ez12zd2envzb5zzglobaliza7e_nodeza7,
		BgL_bgl_za762nodeza7d2global2146z00,
		BGl_z62nodezd2globaliza7ez12z05zzglobaliza7e_nodeza7, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2140z00zzglobaliza7e_nodeza7,
		BgL_bgl_string2140za700za7za7g2147za7,
		"Shoud not be here (because of the integration", 45);
	      DEFINE_STRING(BGl_string2141z00zzglobaliza7e_nodeza7,
		BgL_bgl_string2141za700za7za7g2148za7, "globalize_node", 14);
	      DEFINE_STRING(BGl_string2142z00zzglobaliza7e_nodeza7,
		BgL_bgl_string2142za700za7za7g2149za7,
		"aux glo! glo!1356 procedure-set! foreign make-fx-procedure make-va-procedure done (write cell-globalize) cell-globalize ",
		120);
	      DEFINE_STATIC_BGL_GENERIC(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
		BgL_bgl_za762gloza712za770za7za7gl2150za7,
		BGl_z62gloz12z70zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2114z00zzglobaliza7e_nodeza7,
		BgL_bgl_za762gloza7121356za7702151za7,
		BGl_z62gloz121356z70zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2117z00zzglobaliza7e_nodeza7,
		BgL_bgl_za762gloza712za7d2atom2152za7,
		BGl_z62gloz12zd2atom1359za2zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2119z00zzglobaliza7e_nodeza7,
		BgL_bgl_za762gloza712za7d2kwot2153za7,
		BGl_z62gloz12zd2kwote1361za2zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2120z00zzglobaliza7e_nodeza7,
		BgL_bgl_za762gloza712za7d2var12154za7,
		BGl_z62gloz12zd2var1363za2zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2121z00zzglobaliza7e_nodeza7,
		BgL_bgl_za762gloza712za7d2clos2155za7,
		BGl_z62gloz12zd2closure1365za2zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2122z00zzglobaliza7e_nodeza7,
		BgL_bgl_za762gloza712za7d2sequ2156za7,
		BGl_z62gloz12zd2sequence1367za2zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2123z00zzglobaliza7e_nodeza7,
		BgL_bgl_za762gloza712za7d2sync2157za7,
		BGl_z62gloz12zd2sync1369za2zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2124z00zzglobaliza7e_nodeza7,
		BgL_bgl_za762gloza712za7d2app12158za7,
		BGl_z62gloz12zd2app1372za2zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2125z00zzglobaliza7e_nodeza7,
		BgL_bgl_za762gloza712za7d2appza72159z00,
		BGl_z62gloz12zd2appzd2ly1375z70zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2126z00zzglobaliza7e_nodeza7,
		BgL_bgl_za762gloza712za7d2func2160za7,
		BGl_z62gloz12zd2funcall1377za2zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2127z00zzglobaliza7e_nodeza7,
		BgL_bgl_za762gloza712za7d2exte2161za7,
		BGl_z62gloz12zd2extern1379za2zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2128z00zzglobaliza7e_nodeza7,
		BgL_bgl_za762gloza712za7d2cast2162za7,
		BGl_z62gloz12zd2cast1381za2zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2129z00zzglobaliza7e_nodeza7,
		BgL_bgl_za762gloza712za7d2setq2163za7,
		BGl_z62gloz12zd2setq1383za2zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2130z00zzglobaliza7e_nodeza7,
		BgL_bgl_za762gloza712za7d2cond2164za7,
		BGl_z62gloz12zd2conditional1385za2zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2131z00zzglobaliza7e_nodeza7,
		BgL_bgl_za762gloza712za7d2fail2165za7,
		BGl_z62gloz12zd2fail1387za2zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2132z00zzglobaliza7e_nodeza7,
		BgL_bgl_za762gloza712za7d2swit2166za7,
		BGl_z62gloz12zd2switch1389za2zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2133z00zzglobaliza7e_nodeza7,
		BgL_bgl_za762gloza712za7d2letza72167z00,
		BGl_z62gloz12zd2letzd2fun1391z70zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2134z00zzglobaliza7e_nodeza7,
		BgL_bgl_za762gloza712za7d2letza72168z00,
		BGl_z62gloz12zd2letzd2var1393z70zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2135z00zzglobaliza7e_nodeza7,
		BgL_bgl_za762gloza712za7d2setza72169z00,
		BGl_z62gloz12zd2setzd2exzd2it1395za2zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2136z00zzglobaliza7e_nodeza7,
		BgL_bgl_za762gloza712za7d2jump2170za7,
		BGl_z62gloz12zd2jumpzd2exzd2it1397za2zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2137z00zzglobaliza7e_nodeza7,
		BgL_bgl_za762gloza712za7d2make2171za7,
		BGl_z62gloz12zd2makezd2box1399z70zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2138z00zzglobaliza7e_nodeza7,
		BgL_bgl_za762gloza712za7d2boxza72172z00,
		BGl_z62gloz12zd2boxzd2ref1401z70zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2139z00zzglobaliza7e_nodeza7,
		BgL_bgl_za762gloza712za7d2boxza72173z00,
		BGl_z62gloz12zd2boxzd2setz121403z62zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2115z00zzglobaliza7e_nodeza7,
		BgL_bgl_string2115za700za7za7g2174za7, "glo!1356", 8);
	      DEFINE_STRING(BGl_string2116z00zzglobaliza7e_nodeza7,
		BgL_bgl_string2116za700za7za7g2175za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string2118z00zzglobaliza7e_nodeza7,
		BgL_bgl_string2118za700za7za7g2176za7, "glo!", 4);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzglobaliza7e_nodeza7));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(long
		BgL_checksumz00_3253, char *BgL_fromz00_3254)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzglobaliza7e_nodeza7))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_nodeza7 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzglobaliza7e_nodeza7();
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_nodeza7();
					BGl_cnstzd2initzd2zzglobaliza7e_nodeza7();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_nodeza7();
					BGl_genericzd2initzd2zzglobaliza7e_nodeza7();
					BGl_methodzd2initzd2zzglobaliza7e_nodeza7();
					return BGl_toplevelzd2initzd2zzglobaliza7e_nodeza7();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_nodeza7()
	{
		{	/* Globalize/node.scm 17 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"globalize_node");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"globalize_node");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"globalize_node");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"globalize_node");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"globalize_node");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"globalize_node");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"globalize_node");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "globalize_node");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"globalize_node");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzglobaliza7e_nodeza7()
	{
		{	/* Globalize/node.scm 17 */
			{	/* Globalize/node.scm 17 */
				obj_t BgL_cportz00_3053;

				{	/* Globalize/node.scm 17 */
					obj_t BgL_stringz00_3061;

					BgL_stringz00_3061 = BGl_string2142z00zzglobaliza7e_nodeza7;
					{	/* Globalize/node.scm 17 */
						obj_t BgL_startz00_3062;

						BgL_startz00_3062 = BINT(((long) 0));
						{	/* Globalize/node.scm 17 */
							obj_t BgL_endz00_3063;

							BgL_endz00_3063 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3061)));
							{	/* Globalize/node.scm 17 */

								BgL_cportz00_3053 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3061, BgL_startz00_3062, BgL_endz00_3063);
				}}}}
				{
					long BgL_iz00_3054;

					BgL_iz00_3054 = ((long) 9);
				BgL_loopz00_3055:
					if ((BgL_iz00_3054 == ((long) -1)))
						{	/* Globalize/node.scm 17 */
							return BUNSPEC;
						}
					else
						{	/* Globalize/node.scm 17 */
							{	/* Globalize/node.scm 17 */
								obj_t BgL_arg2144z00_3057;

								{	/* Globalize/node.scm 17 */

									{	/* Globalize/node.scm 17 */
										obj_t BgL_locationz00_3059;

										BgL_locationz00_3059 = BBOOL(((bool_t) 0));
										{	/* Globalize/node.scm 17 */

											BgL_arg2144z00_3057 =
												BGl_readz00zz__readerz00(BgL_cportz00_3053,
												BgL_locationz00_3059);
										}
									}
								}
								{	/* Globalize/node.scm 17 */
									int BgL_tmpz00_3283;

									BgL_tmpz00_3283 = (int) (BgL_iz00_3054);
									CNST_TABLE_SET(BgL_tmpz00_3283, BgL_arg2144z00_3057);
							}}
							{	/* Globalize/node.scm 17 */
								int BgL_auxz00_3060;

								BgL_auxz00_3060 = (int) ((BgL_iz00_3054 - ((long) 1)));
								{
									long BgL_iz00_3288;

									BgL_iz00_3288 = (long) (BgL_auxz00_3060);
									BgL_iz00_3054 = BgL_iz00_3288;
									goto BgL_loopz00_3055;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_nodeza7()
	{
		{	/* Globalize/node.scm 17 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzglobaliza7e_nodeza7()
	{
		{	/* Globalize/node.scm 17 */
			return BUNSPEC;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzglobaliza7e_nodeza7(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1732;

				BgL_headz00_1732 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1733;
					obj_t BgL_tailz00_1734;

					BgL_prevz00_1733 = BgL_headz00_1732;
					BgL_tailz00_1734 = BgL_l1z00_1;
				BgL_loopz00_1735:
					if (PAIRP(BgL_tailz00_1734))
						{
							obj_t BgL_newzd2prevzd2_1737;

							BgL_newzd2prevzd2_1737 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1734), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1733, BgL_newzd2prevzd2_1737);
							{
								obj_t BgL_tailz00_3298;
								obj_t BgL_prevz00_3297;

								BgL_prevz00_3297 = BgL_newzd2prevzd2_1737;
								BgL_tailz00_3298 = CDR(BgL_tailz00_1734);
								BgL_tailz00_1734 = BgL_tailz00_3298;
								BgL_prevz00_1733 = BgL_prevz00_3297;
								goto BgL_loopz00_1735;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1732);
				}
			}
		}

	}



/* node-globalize! */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_nodezd2globaliza7ez12z67zzglobaliza7e_nodeza7(BgL_nodez00_bglt
		BgL_nodez00_3, BgL_variablez00_bglt BgL_integratorz00_4,
		obj_t BgL_whatzf2byza2z50_5)
	{
		{	/* Globalize/node.scm 40 */
			{	/* Globalize/node.scm 44 */
				BgL_valuez00_bglt BgL_funz00_1740;

				BgL_funz00_1740 =
					(((BgL_variablez00_bglt) COBJECT(BgL_integratorz00_4))->BgL_valuez00);
				{	/* Globalize/node.scm 44 */
					obj_t BgL_celledz00_1741;

					{	/* Globalize/node.scm 45 */
						obj_t BgL_arg1462z00_1762;

						BgL_arg1462z00_1762 =
							(((BgL_sfunz00_bglt) COBJECT(
									((BgL_sfunz00_bglt) BgL_funz00_1740)))->BgL_argsz00);
						BgL_celledz00_1741 =
							BGl_celledzd2bindingszd2zzglobaliza7e_nodeza7
							(BgL_arg1462z00_1762);
					}
					{	/* Globalize/node.scm 45 */
						obj_t BgL_whatzf2byza2z50_1742;

						BgL_whatzf2byza2z50_1742 =
							BGl_appendzd221011zd2zzglobaliza7e_nodeza7(BgL_celledz00_1741,
							BgL_whatzf2byza2z50_5);
						{	/* Globalize/node.scm 46 */

							{
								obj_t BgL_l1334z00_1744;

								BgL_l1334z00_1744 = BgL_whatzf2byza2z50_1742;
							BgL_zc3z04anonymousza31419ze3z87_1745:
								if (PAIRP(BgL_l1334z00_1744))
									{	/* Globalize/node.scm 48 */
										{	/* Globalize/node.scm 49 */
											obj_t BgL_wzd2bzd2_1747;

											BgL_wzd2bzd2_1747 = CAR(BgL_l1334z00_1744);
											{	/* Globalize/node.scm 49 */
												obj_t BgL_arg1421z00_1748;
												obj_t BgL_arg1422z00_1749;

												BgL_arg1421z00_1748 = CAR(((obj_t) BgL_wzd2bzd2_1747));
												BgL_arg1422z00_1749 = CDR(((obj_t) BgL_wzd2bzd2_1747));
												((((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt) BgL_arg1421z00_1748))))->
														BgL_fastzd2alphazd2) =
													((obj_t) BgL_arg1422z00_1749), BUNSPEC);
											}
										}
										{
											obj_t BgL_l1334z00_3316;

											BgL_l1334z00_3316 = CDR(BgL_l1334z00_1744);
											BgL_l1334z00_1744 = BgL_l1334z00_3316;
											goto BgL_zc3z04anonymousza31419ze3z87_1745;
										}
									}
								else
									{	/* Globalize/node.scm 48 */
										((bool_t) 1);
									}
							}
							{	/* Globalize/node.scm 51 */
								BgL_nodez00_bglt BgL_resz00_1752;

								BgL_resz00_1752 =
									BGl_cellzd2formalszd2zzglobaliza7e_nodeza7(BgL_celledz00_1741,
									BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_nodez00_3,
										BgL_integratorz00_4));
								{
									obj_t BgL_l1336z00_1754;

									BgL_l1336z00_1754 = BgL_whatzf2byza2z50_1742;
								BgL_zc3z04anonymousza31442ze3z87_1755:
									if (PAIRP(BgL_l1336z00_1754))
										{	/* Globalize/node.scm 53 */
											{	/* Globalize/node.scm 54 */
												obj_t BgL_wzd2bzd2_1757;

												BgL_wzd2bzd2_1757 = CAR(BgL_l1336z00_1754);
												{	/* Globalize/node.scm 54 */
													obj_t BgL_arg1448z00_1758;

													BgL_arg1448z00_1758 =
														CAR(((obj_t) BgL_wzd2bzd2_1757));
													((((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt)
																			BgL_arg1448z00_1758))))->
															BgL_fastzd2alphazd2) =
														((obj_t) BUNSPEC), BUNSPEC);
												}
											}
											{
												obj_t BgL_l1336z00_3328;

												BgL_l1336z00_3328 = CDR(BgL_l1336z00_1754);
												BgL_l1336z00_1754 = BgL_l1336z00_3328;
												goto BgL_zc3z04anonymousza31442ze3z87_1755;
											}
										}
									else
										{	/* Globalize/node.scm 53 */
											((bool_t) 1);
										}
								}
								return BgL_resz00_1752;
							}
						}
					}
				}
			}
		}

	}



/* &node-globalize! */
	BgL_nodez00_bglt BGl_z62nodezd2globaliza7ez12z05zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_2954, obj_t BgL_nodez00_2955, obj_t BgL_integratorz00_2956,
		obj_t BgL_whatzf2byza2z50_2957)
	{
		{	/* Globalize/node.scm 40 */
			return
				BGl_nodezd2globaliza7ez12z67zzglobaliza7e_nodeza7(
				((BgL_nodez00_bglt) BgL_nodez00_2955),
				((BgL_variablez00_bglt) BgL_integratorz00_2956),
				BgL_whatzf2byza2z50_2957);
		}

	}



/* celled-bindings */
	obj_t BGl_celledzd2bindingszd2zzglobaliza7e_nodeza7(obj_t BgL_formalsz00_6)
	{
		{	/* Globalize/node.scm 61 */
			{
				obj_t BgL_celledz00_1765;
				obj_t BgL_formalsz00_1766;

				BgL_celledz00_1765 = BNIL;
				BgL_formalsz00_1766 = BgL_formalsz00_6;
			BgL_zc3z04anonymousza31463ze3z87_1767:
				if (NULLP(BgL_formalsz00_1766))
					{	/* Globalize/node.scm 65 */
						return BgL_celledz00_1765;
					}
				else
					{	/* Globalize/node.scm 67 */
						bool_t BgL_test2183z00_3335;

						{	/* Globalize/node.scm 67 */
							obj_t BgL_arg1495z00_1777;

							BgL_arg1495z00_1777 = CAR(((obj_t) BgL_formalsz00_1766));
							BgL_test2183z00_3335 =
								BGl_celledzf3zf3zzglobaliza7e_nodeza7(
								((BgL_variablez00_bglt) BgL_arg1495z00_1777));
						}
						if (BgL_test2183z00_3335)
							{	/* Globalize/node.scm 70 */
								obj_t BgL_ovarz00_1771;

								BgL_ovarz00_1771 = CAR(((obj_t) BgL_formalsz00_1766));
								{	/* Globalize/node.scm 70 */
									BgL_localz00_bglt BgL_nvarz00_1772;

									BgL_nvarz00_1772 =
										BGl_cellzd2variablezd2zzglobaliza7e_nodeza7(
										((BgL_localz00_bglt) BgL_ovarz00_1771));
									{	/* Globalize/node.scm 71 */

										{	/* Globalize/node.scm 72 */
											obj_t BgL_arg1476z00_1773;
											obj_t BgL_arg1477z00_1774;

											{	/* Globalize/node.scm 72 */
												obj_t BgL_arg1489z00_1775;

												BgL_arg1489z00_1775 =
													MAKE_YOUNG_PAIR(BgL_ovarz00_1771,
													((obj_t) BgL_nvarz00_1772));
												BgL_arg1476z00_1773 =
													MAKE_YOUNG_PAIR(BgL_arg1489z00_1775,
													BgL_celledz00_1765);
											}
											BgL_arg1477z00_1774 = CDR(((obj_t) BgL_formalsz00_1766));
											{
												obj_t BgL_formalsz00_3350;
												obj_t BgL_celledz00_3349;

												BgL_celledz00_3349 = BgL_arg1476z00_1773;
												BgL_formalsz00_3350 = BgL_arg1477z00_1774;
												BgL_formalsz00_1766 = BgL_formalsz00_3350;
												BgL_celledz00_1765 = BgL_celledz00_3349;
												goto BgL_zc3z04anonymousza31463ze3z87_1767;
											}
										}
									}
								}
							}
						else
							{	/* Globalize/node.scm 68 */
								obj_t BgL_arg1493z00_1776;

								BgL_arg1493z00_1776 = CDR(((obj_t) BgL_formalsz00_1766));
								{
									obj_t BgL_formalsz00_3353;

									BgL_formalsz00_3353 = BgL_arg1493z00_1776;
									BgL_formalsz00_1766 = BgL_formalsz00_3353;
									goto BgL_zc3z04anonymousza31463ze3z87_1767;
								}
							}
					}
			}
		}

	}



/* cell-variable */
	BgL_localz00_bglt
		BGl_cellzd2variablezd2zzglobaliza7e_nodeza7(BgL_localz00_bglt
		BgL_localz00_7)
	{
		{	/* Globalize/node.scm 77 */
			{	/* Globalize/node.scm 78 */
				BgL_localz00_bglt BgL_varz00_1779;

				{	/* Globalize/node.scm 78 */
					obj_t BgL_arg1521z00_1786;

					BgL_arg1521z00_1786 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_localz00_7)))->BgL_idz00);
					BgL_varz00_1779 =
						BGl_makezd2localzd2svarz00zzast_localz00(BgL_arg1521z00_1786,
						((BgL_typez00_bglt) BGl_za2cellza2z00zztype_cachez00));
				}
				{	/* Globalize/node.scm 79 */
					obj_t BgL_vz00_2552;

					BgL_vz00_2552 = CNST_TABLE_REF(((long) 0));
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_varz00_1779)))->BgL_accessz00) =
						((obj_t) BgL_vz00_2552), BUNSPEC);
				}
				{	/* Globalize/node.scm 80 */
					bool_t BgL_arg1497z00_1780;

					BgL_arg1497z00_1780 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_localz00_7)))->BgL_userzf3zf3);
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_varz00_1779)))->BgL_userzf3zf3) =
						((bool_t) BgL_arg1497z00_1780), BUNSPEC);
				}
				{	/* Globalize/node.scm 81 */
					BgL_svarz00_bglt BgL_tmp1110z00_1781;

					BgL_tmp1110z00_1781 =
						((BgL_svarz00_bglt)
						(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_varz00_1779)))->BgL_valuez00));
					{	/* Globalize/node.scm 81 */
						BgL_svarzf2ginfozf2_bglt BgL_wide1112z00_1783;

						BgL_wide1112z00_1783 =
							((BgL_svarzf2ginfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_svarzf2ginfozf2_bgl))));
						{	/* Globalize/node.scm 81 */
							obj_t BgL_auxz00_3372;
							BgL_objectz00_bglt BgL_tmpz00_3369;

							BgL_auxz00_3372 = ((obj_t) BgL_wide1112z00_1783);
							BgL_tmpz00_3369 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_tmp1110z00_1781));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3369, BgL_auxz00_3372);
						}
						((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_tmp1110z00_1781));
						{	/* Globalize/node.scm 81 */
							long BgL_arg1518z00_1784;

							{	/* Globalize/node.scm 81 */
								long BgL_res2039z00_2559;

								BgL_res2039z00_2559 =
									BGL_CLASS_INDEX(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
								BgL_arg1518z00_1784 = BgL_res2039z00_2559;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_svarz00_bglt) BgL_tmp1110z00_1781)),
								BgL_arg1518z00_1784);
						}
						((BgL_svarz00_bglt) ((BgL_svarz00_bglt) BgL_tmp1110z00_1781));
					}
					{
						BgL_svarzf2ginfozf2_bglt BgL_auxz00_3383;

						{
							obj_t BgL_auxz00_3384;

							{	/* Globalize/node.scm 83 */
								BgL_objectz00_bglt BgL_tmpz00_3385;

								BgL_tmpz00_3385 =
									((BgL_objectz00_bglt)
									((BgL_svarz00_bglt) BgL_tmp1110z00_1781));
								BgL_auxz00_3384 = BGL_OBJECT_WIDENING(BgL_tmpz00_3385);
							}
							BgL_auxz00_3383 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3384);
						}
						((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3383))->
								BgL_kapturedzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
					}
					{
						BgL_svarzf2ginfozf2_bglt BgL_auxz00_3391;

						{
							obj_t BgL_auxz00_3392;

							{	/* Globalize/node.scm 82 */
								BgL_objectz00_bglt BgL_tmpz00_3393;

								BgL_tmpz00_3393 =
									((BgL_objectz00_bglt)
									((BgL_svarz00_bglt) BgL_tmp1110z00_1781));
								BgL_auxz00_3392 = BGL_OBJECT_WIDENING(BgL_tmpz00_3393);
							}
							BgL_auxz00_3391 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3392);
						}
						((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3391))->
								BgL_freezd2markzd2) = ((long) ((long) -10)), BUNSPEC);
					}
					{
						BgL_svarzf2ginfozf2_bglt BgL_auxz00_3399;

						{
							obj_t BgL_auxz00_3400;

							{	/* Globalize/node.scm 82 */
								BgL_objectz00_bglt BgL_tmpz00_3401;

								BgL_tmpz00_3401 =
									((BgL_objectz00_bglt)
									((BgL_svarz00_bglt) BgL_tmp1110z00_1781));
								BgL_auxz00_3400 = BGL_OBJECT_WIDENING(BgL_tmpz00_3401);
							}
							BgL_auxz00_3399 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3400);
						}
						((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3399))->
								BgL_markz00) = ((long) ((long) -10)), BUNSPEC);
					}
					{
						BgL_svarzf2ginfozf2_bglt BgL_auxz00_3407;

						{
							obj_t BgL_auxz00_3408;

							{	/* Globalize/node.scm 82 */
								BgL_objectz00_bglt BgL_tmpz00_3409;

								BgL_tmpz00_3409 =
									((BgL_objectz00_bglt)
									((BgL_svarz00_bglt) BgL_tmp1110z00_1781));
								BgL_auxz00_3408 = BGL_OBJECT_WIDENING(BgL_tmpz00_3409);
							}
							BgL_auxz00_3407 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3408);
						}
						((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3407))->
								BgL_celledzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
					}
					{
						BgL_svarzf2ginfozf2_bglt BgL_auxz00_3415;

						{
							obj_t BgL_auxz00_3416;

							{	/* Globalize/node.scm 82 */
								BgL_objectz00_bglt BgL_tmpz00_3417;

								BgL_tmpz00_3417 =
									((BgL_objectz00_bglt)
									((BgL_svarz00_bglt) BgL_tmp1110z00_1781));
								BgL_auxz00_3416 = BGL_OBJECT_WIDENING(BgL_tmpz00_3417);
							}
							BgL_auxz00_3415 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3416);
						}
						((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3415))->
								BgL_stackablez00) = ((bool_t) ((bool_t) 1)), BUNSPEC);
					}
					((BgL_svarz00_bglt) BgL_tmp1110z00_1781);
				}
				return BgL_varz00_1779;
			}
		}

	}



/* cell-formals */
	BgL_nodez00_bglt BGl_cellzd2formalszd2zzglobaliza7e_nodeza7(obj_t
		BgL_celledz00_8, BgL_nodez00_bglt BgL_bodyz00_9)
	{
		{	/* Globalize/node.scm 89 */
			if (NULLP(BgL_celledz00_8))
				{	/* Globalize/node.scm 90 */
					return BgL_bodyz00_9;
				}
			else
				{	/* Globalize/node.scm 92 */
					obj_t BgL_locz00_1788;

					BgL_locz00_1788 =
						(((BgL_nodez00_bglt) COBJECT(BgL_bodyz00_9))->BgL_locz00);
					{	/* Globalize/node.scm 93 */
						BgL_letzd2varzd2_bglt BgL_new1116z00_1789;

						{	/* Globalize/node.scm 94 */
							BgL_letzd2varzd2_bglt BgL_new1114z00_1811;

							BgL_new1114z00_1811 =
								((BgL_letzd2varzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_letzd2varzd2_bgl))));
							{	/* Globalize/node.scm 94 */
								long BgL_arg1565z00_1812;

								{	/* Globalize/node.scm 94 */
									long BgL_res2041z00_2570;

									BgL_res2041z00_2570 =
										BGL_CLASS_INDEX(BGl_letzd2varzd2zzast_nodez00);
									BgL_arg1565z00_1812 = BgL_res2041z00_2570;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1114z00_1811),
									BgL_arg1565z00_1812);
							}
							{	/* Globalize/node.scm 94 */
								BgL_objectz00_bglt BgL_tmpz00_3431;

								BgL_tmpz00_3431 = ((BgL_objectz00_bglt) BgL_new1114z00_1811);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3431, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1114z00_1811);
							BgL_new1116z00_1789 = BgL_new1114z00_1811;
						}
						((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt) BgL_new1116z00_1789)))->BgL_locz00) =
							((obj_t) BgL_locz00_1788), BUNSPEC);
						((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
											BgL_new1116z00_1789)))->BgL_typez00) =
							((BgL_typez00_bglt) (((BgL_nodez00_bglt) COBJECT(BgL_bodyz00_9))->
									BgL_typez00)), BUNSPEC);
						((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
											BgL_new1116z00_1789)))->BgL_sidezd2effectzd2) =
							((obj_t) BUNSPEC), BUNSPEC);
						((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
											BgL_new1116z00_1789)))->BgL_keyz00) =
							((obj_t) BINT(((long) -1))), BUNSPEC);
						{
							obj_t BgL_auxz00_3445;

							{	/* Globalize/node.scm 97 */
								obj_t BgL_l1338z00_1790;

								BgL_l1338z00_1790 = BgL_celledz00_8;
								if (NULLP(BgL_l1338z00_1790))
									{	/* Globalize/node.scm 97 */
										BgL_auxz00_3445 = BNIL;
									}
								else
									{	/* Globalize/node.scm 97 */
										obj_t BgL_head1340z00_1792;

										{	/* Globalize/node.scm 97 */
											obj_t BgL_res2043z00_2576;

											BgL_res2043z00_2576 = MAKE_YOUNG_PAIR(BNIL, BNIL);
											BgL_head1340z00_1792 = BgL_res2043z00_2576;
										}
										{
											obj_t BgL_l1338z00_1794;
											obj_t BgL_tail1341z00_1795;

											BgL_l1338z00_1794 = BgL_l1338z00_1790;
											BgL_tail1341z00_1795 = BgL_head1340z00_1792;
										BgL_zc3z04anonymousza31524ze3z87_1796:
											if (NULLP(BgL_l1338z00_1794))
												{	/* Globalize/node.scm 97 */
													BgL_auxz00_3445 = CDR(BgL_head1340z00_1792);
												}
											else
												{	/* Globalize/node.scm 97 */
													obj_t BgL_newtail1342z00_1798;

													{	/* Globalize/node.scm 97 */
														obj_t BgL_arg1536z00_1800;

														{	/* Globalize/node.scm 97 */
															obj_t BgL_ozd2nzd2_1801;

															BgL_ozd2nzd2_1801 =
																CAR(((obj_t) BgL_l1338z00_1794));
															{	/* Globalize/node.scm 98 */
																obj_t BgL_arg1537z00_1802;
																BgL_makezd2boxzd2_bglt BgL_arg1540z00_1803;

																BgL_arg1537z00_1802 =
																	CDR(((obj_t) BgL_ozd2nzd2_1801));
																{	/* Globalize/node.scm 100 */
																	BgL_varz00_bglt BgL_arg1552z00_1804;
																	obj_t BgL_arg1558z00_1805;

																	{	/* Globalize/node.scm 100 */
																		BgL_varz00_bglt BgL_new1118z00_1806;

																		{	/* Globalize/node.scm 103 */
																			BgL_varz00_bglt BgL_new1117z00_1808;

																			BgL_new1117z00_1808 =
																				((BgL_varz00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_varz00_bgl))));
																			{	/* Globalize/node.scm 103 */
																				long BgL_arg1564z00_1809;

																				{	/* Globalize/node.scm 103 */
																					long BgL_res2045z00_2582;

																					{	/* Globalize/node.scm 103 */
																						obj_t BgL_classz00_2581;

																						BgL_classz00_2581 =
																							BGl_varz00zzast_nodez00;
																						BgL_res2045z00_2582 =
																							BGL_CLASS_INDEX
																							(BgL_classz00_2581);
																					}
																					BgL_arg1564z00_1809 =
																						BgL_res2045z00_2582;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1117z00_1808),
																					BgL_arg1564z00_1809);
																			}
																			BgL_new1118z00_1806 = BgL_new1117z00_1808;
																		}
																		((((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							BgL_new1118z00_1806)))->
																				BgL_locz00) =
																			((obj_t) BgL_locz00_1788), BUNSPEC);
																		((((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt)
																							BgL_new1118z00_1806)))->
																				BgL_typez00) =
																			((BgL_typez00_bglt) ((
																						(BgL_variablez00_bglt)
																						COBJECT(((BgL_variablez00_bglt)
																								CAR(((obj_t)
																										BgL_ozd2nzd2_1801)))))->
																					BgL_typez00)), BUNSPEC);
																		((((BgL_varz00_bglt)
																					COBJECT(BgL_new1118z00_1806))->
																				BgL_variablez00) =
																			((BgL_variablez00_bglt) (
																					(BgL_variablez00_bglt) CAR(((obj_t)
																							BgL_ozd2nzd2_1801)))), BUNSPEC);
																		BgL_arg1552z00_1804 = BgL_new1118z00_1806;
																	}
																	BgL_arg1558z00_1805 =
																		CAR(((obj_t) BgL_ozd2nzd2_1801));
																	BgL_arg1540z00_1803 =
																		BGl_azd2makezd2cellz00zzglobaliza7e_nodeza7(
																		((BgL_nodez00_bglt) BgL_arg1552z00_1804),
																		((BgL_variablez00_bglt)
																			BgL_arg1558z00_1805));
																}
																BgL_arg1536z00_1800 =
																	MAKE_YOUNG_PAIR(BgL_arg1537z00_1802,
																	((obj_t) BgL_arg1540z00_1803));
														}}
														{	/* Globalize/node.scm 97 */
															obj_t BgL_res2046z00_2589;

															BgL_res2046z00_2589 =
																MAKE_YOUNG_PAIR(BgL_arg1536z00_1800, BNIL);
															BgL_newtail1342z00_1798 = BgL_res2046z00_2589;
													}}
													SET_CDR(BgL_tail1341z00_1795,
														BgL_newtail1342z00_1798);
													{	/* Globalize/node.scm 97 */
														obj_t BgL_arg1528z00_1799;

														BgL_arg1528z00_1799 =
															CDR(((obj_t) BgL_l1338z00_1794));
														{
															obj_t BgL_tail1341z00_3484;
															obj_t BgL_l1338z00_3483;

															BgL_l1338z00_3483 = BgL_arg1528z00_1799;
															BgL_tail1341z00_3484 = BgL_newtail1342z00_1798;
															BgL_tail1341z00_1795 = BgL_tail1341z00_3484;
															BgL_l1338z00_1794 = BgL_l1338z00_3483;
															goto BgL_zc3z04anonymousza31524ze3z87_1796;
														}
													}
												}
										}
									}
							}
							((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1116z00_1789))->
									BgL_bindingsz00) = ((obj_t) BgL_auxz00_3445), BUNSPEC);
						}
						((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1116z00_1789))->
								BgL_bodyz00) = ((BgL_nodez00_bglt) BgL_bodyz00_9), BUNSPEC);
						((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1116z00_1789))->
								BgL_removablezf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
						return ((BgL_nodez00_bglt) BgL_new1116z00_1789);
					}
				}
		}

	}



/* a-make-cell */
	BgL_makezd2boxzd2_bglt
		BGl_azd2makezd2cellz00zzglobaliza7e_nodeza7(BgL_nodez00_bglt BgL_nodez00_10,
		BgL_variablez00_bglt BgL_variablez00_11)
	{
		{	/* Globalize/node.scm 110 */
			{	/* Globalize/node.scm 112 */
				obj_t BgL_vz00_2593;

				BgL_vz00_2593 = CNST_TABLE_REF(((long) 0));
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_variablez00_11))))->BgL_accessz00) =
					((obj_t) BgL_vz00_2593), BUNSPEC);
			}
			{	/* Globalize/node.scm 113 */
				BgL_valuez00_bglt BgL_arg1573z00_1814;

				BgL_arg1573z00_1814 =
					(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_11))->BgL_valuez00);
				{
					BgL_svarzf2ginfozf2_bglt BgL_auxz00_3494;

					{
						obj_t BgL_auxz00_3495;

						{	/* Globalize/node.scm 113 */
							BgL_objectz00_bglt BgL_tmpz00_3496;

							BgL_tmpz00_3496 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_arg1573z00_1814));
							BgL_auxz00_3495 = BGL_OBJECT_WIDENING(BgL_tmpz00_3496);
						}
						BgL_auxz00_3494 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3495);
					}
					((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3494))->
							BgL_celledzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
			}}
			{	/* Globalize/node.scm 114 */
				BgL_makezd2boxzd2_bglt BgL_new1121z00_1815;

				{	/* Globalize/node.scm 117 */
					BgL_makezd2boxzd2_bglt BgL_new1120z00_1818;

					BgL_new1120z00_1818 =
						((BgL_makezd2boxzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_makezd2boxzd2_bgl))));
					{	/* Globalize/node.scm 117 */
						long BgL_arg1582z00_1819;

						{	/* Globalize/node.scm 117 */
							long BgL_res2047z00_2599;

							BgL_res2047z00_2599 =
								BGL_CLASS_INDEX(BGl_makezd2boxzd2zzast_nodez00);
							BgL_arg1582z00_1819 = BgL_res2047z00_2599;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1120z00_1818), BgL_arg1582z00_1819);
					}
					{	/* Globalize/node.scm 117 */
						BgL_objectz00_bglt BgL_tmpz00_3506;

						BgL_tmpz00_3506 = ((BgL_objectz00_bglt) BgL_new1120z00_1818);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3506, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1120z00_1818);
					BgL_new1121z00_1815 = BgL_new1120z00_1818;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1121z00_1815)))->BgL_locz00) =
					((obj_t) (((BgL_nodez00_bglt) COBJECT(BgL_nodez00_10))->BgL_locz00)),
					BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1121z00_1815)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt)
							BGl_za2cellza2z00zztype_cachez00)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1121z00_1815)))->BgL_sidezd2effectzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1121z00_1815)))->BgL_keyz00) =
					((obj_t) BINT(((long) -1))), BUNSPEC);
				((((BgL_makezd2boxzd2_bglt) COBJECT(BgL_new1121z00_1815))->
						BgL_valuez00) = ((BgL_nodez00_bglt) BgL_nodez00_10), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_3522;

					{	/* Globalize/node.scm 116 */
						BgL_typez00_bglt BgL_arg1575z00_1816;

						BgL_arg1575z00_1816 =
							(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_11))->
							BgL_typez00);
						BgL_auxz00_3522 =
							BGl_getzd2bigloozd2definedzd2typezd2zztype_cachez00
							(BgL_arg1575z00_1816);
					}
					((((BgL_makezd2boxzd2_bglt) COBJECT(BgL_new1121z00_1815))->
							BgL_vtypez00) = ((BgL_typez00_bglt) BgL_auxz00_3522), BUNSPEC);
				}
				{
					obj_t BgL_auxz00_3526;

					{	/* Globalize/node.scm 119 */
						BgL_svarz00_bglt BgL_oz00_2605;

						BgL_oz00_2605 =
							((BgL_svarz00_bglt)
							(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_11))->
								BgL_valuez00));
						{	/* Globalize/node.scm 119 */
							bool_t BgL_tmpz00_3529;

							{
								BgL_svarzf2ginfozf2_bglt BgL_auxz00_3530;

								{
									obj_t BgL_auxz00_3531;

									{	/* Globalize/node.scm 119 */
										BgL_objectz00_bglt BgL_tmpz00_3532;

										BgL_tmpz00_3532 = ((BgL_objectz00_bglt) BgL_oz00_2605);
										BgL_auxz00_3531 = BGL_OBJECT_WIDENING(BgL_tmpz00_3532);
									}
									BgL_auxz00_3530 =
										((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3531);
								}
								BgL_tmpz00_3529 =
									(((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3530))->
									BgL_stackablez00);
							}
							BgL_auxz00_3526 = BBOOL(BgL_tmpz00_3529);
					}}
					((((BgL_makezd2boxzd2_bglt) COBJECT(BgL_new1121z00_1815))->
							BgL_stackablez00) = ((obj_t) BgL_auxz00_3526), BUNSPEC);
				}
				return BgL_new1121z00_1815;
			}
		}

	}



/* celled? */
	bool_t BGl_celledzf3zf3zzglobaliza7e_nodeza7(BgL_variablez00_bglt
		BgL_variablez00_12)
	{
		{	/* Globalize/node.scm 124 */
			{	/* Globalize/node.scm 125 */
				bool_t BgL_test2187z00_3539;

				{	/* Globalize/node.scm 125 */
					bool_t BgL_res2048z00_2607;

					BgL_res2048z00_2607 =
						BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_variablez00_12), BGl_localz00zzast_varz00);
					BgL_test2187z00_3539 = BgL_res2048z00_2607;
				}
				if (BgL_test2187z00_3539)
					{	/* Globalize/node.scm 126 */
						bool_t BgL_test2188z00_3542;

						{	/* Globalize/node.scm 126 */
							BgL_valuez00_bglt BgL_arg1592z00_1827;

							BgL_arg1592z00_1827 =
								(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_12))->
								BgL_valuez00);
							{	/* Globalize/node.scm 126 */
								bool_t BgL_res2049z00_2609;

								BgL_res2049z00_2609 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_arg1592z00_1827),
									BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
								BgL_test2188z00_3542 = BgL_res2049z00_2609;
							}
						}
						if (BgL_test2188z00_3542)
							{	/* Globalize/node.scm 127 */
								bool_t BgL__ortest_1124z00_1822;

								{	/* Globalize/node.scm 127 */
									BgL_svarz00_bglt BgL_oz00_2611;

									BgL_oz00_2611 =
										((BgL_svarz00_bglt)
										(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_12))->
											BgL_valuez00));
									{
										BgL_svarzf2ginfozf2_bglt BgL_auxz00_3548;

										{
											obj_t BgL_auxz00_3549;

											{	/* Globalize/node.scm 127 */
												BgL_objectz00_bglt BgL_tmpz00_3550;

												BgL_tmpz00_3550 = ((BgL_objectz00_bglt) BgL_oz00_2611);
												BgL_auxz00_3549 = BGL_OBJECT_WIDENING(BgL_tmpz00_3550);
											}
											BgL_auxz00_3548 =
												((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3549);
										}
										BgL__ortest_1124z00_1822 =
											(((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3548))->
											BgL_celledzf3zf3);
									}
								}
								if (BgL__ortest_1124z00_1822)
									{	/* Globalize/node.scm 127 */
										return BgL__ortest_1124z00_1822;
									}
								else
									{	/* Globalize/node.scm 127 */
										if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
													(((BgL_variablez00_bglt)
															COBJECT(BgL_variablez00_12))->BgL_accessz00),
													CNST_TABLE_REF(((long) 1)))))
											{	/* Globalize/node.scm 129 */
												BgL_svarz00_bglt BgL_oz00_2615;

												BgL_oz00_2615 =
													((BgL_svarz00_bglt)
													(((BgL_variablez00_bglt)
															COBJECT(BgL_variablez00_12))->BgL_valuez00));
												{
													BgL_svarzf2ginfozf2_bglt BgL_auxz00_3563;

													{
														obj_t BgL_auxz00_3564;

														{	/* Globalize/node.scm 129 */
															BgL_objectz00_bglt BgL_tmpz00_3565;

															BgL_tmpz00_3565 =
																((BgL_objectz00_bglt) BgL_oz00_2615);
															BgL_auxz00_3564 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_3565);
														}
														BgL_auxz00_3563 =
															((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3564);
													}
													return
														(((BgL_svarzf2ginfozf2_bglt)
															COBJECT(BgL_auxz00_3563))->BgL_kapturedzf3zf3);
												}
											}
										else
											{	/* Globalize/node.scm 128 */
												return ((bool_t) 0);
											}
									}
							}
						else
							{	/* Globalize/node.scm 126 */
								return ((bool_t) 0);
							}
					}
				else
					{	/* Globalize/node.scm 125 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* glo*! */
	obj_t BGl_gloza2z12zb0zzglobaliza7e_nodeza7(obj_t BgL_nodeza2za2_59,
		obj_t BgL_integratorz00_60)
	{
		{	/* Globalize/node.scm 495 */
			{
				obj_t BgL_nodeza2za2_1829;

				BgL_nodeza2za2_1829 = BgL_nodeza2za2_59;
			BgL_zc3z04anonymousza31593ze3z87_1830:
				if (NULLP(BgL_nodeza2za2_1829))
					{	/* Globalize/node.scm 497 */
						return CNST_TABLE_REF(((long) 2));
					}
				else
					{	/* Globalize/node.scm 497 */
						{	/* Globalize/node.scm 500 */
							BgL_nodez00_bglt BgL_arg1597z00_1832;

							{	/* Globalize/node.scm 500 */
								obj_t BgL_arg1599z00_1833;

								BgL_arg1599z00_1833 = CAR(((obj_t) BgL_nodeza2za2_1829));
								BgL_arg1597z00_1832 =
									BGl_gloz12z12zzglobaliza7e_nodeza7(
									((BgL_nodez00_bglt) BgL_arg1599z00_1833),
									((BgL_variablez00_bglt) BgL_integratorz00_60));
							}
							{	/* Globalize/node.scm 500 */
								obj_t BgL_auxz00_3580;
								obj_t BgL_tmpz00_3578;

								BgL_auxz00_3580 = ((obj_t) BgL_arg1597z00_1832);
								BgL_tmpz00_3578 = ((obj_t) BgL_nodeza2za2_1829);
								SET_CAR(BgL_tmpz00_3578, BgL_auxz00_3580);
							}
						}
						{	/* Globalize/node.scm 501 */
							obj_t BgL_arg1604z00_1834;

							BgL_arg1604z00_1834 = CDR(((obj_t) BgL_nodeza2za2_1829));
							{
								obj_t BgL_nodeza2za2_3585;

								BgL_nodeza2za2_3585 = BgL_arg1604z00_1834;
								BgL_nodeza2za2_1829 = BgL_nodeza2za2_3585;
								goto BgL_zc3z04anonymousza31593ze3z87_1830;
							}
						}
					}
			}
		}

	}



/* make-escaping-bindings */
	BgL_letzd2varzd2_bglt
		BGl_makezd2escapingzd2bindingsz00zzglobaliza7e_nodeza7(obj_t
		BgL_ebindingsz00_61, BgL_nodez00_bglt BgL_nodez00_62,
		BgL_variablez00_bglt BgL_integratorz00_63)
	{
		{	/* Globalize/node.scm 506 */
			{
				obj_t BgL_ebindingsz00_1839;
				obj_t BgL_bindingsz00_1840;
				obj_t BgL_setsz00_1841;

				BgL_ebindingsz00_1839 = BgL_ebindingsz00_61;
				BgL_bindingsz00_1840 = BNIL;
				BgL_setsz00_1841 = BNIL;
			BgL_zc3z04anonymousza31605ze3z87_1842:
				if (NULLP(BgL_ebindingsz00_1839))
					{	/* Globalize/node.scm 514 */
						BgL_letzd2varzd2_bglt BgL_new1176z00_1844;

						{	/* Globalize/node.scm 515 */
							BgL_letzd2varzd2_bglt BgL_new1175z00_1851;

							BgL_new1175z00_1851 =
								((BgL_letzd2varzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_letzd2varzd2_bgl))));
							{	/* Globalize/node.scm 515 */
								long BgL_arg1624z00_1852;

								{	/* Globalize/node.scm 515 */
									long BgL_res2052z00_2623;

									BgL_res2052z00_2623 =
										BGL_CLASS_INDEX(BGl_letzd2varzd2zzast_nodez00);
									BgL_arg1624z00_1852 = BgL_res2052z00_2623;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1175z00_1851),
									BgL_arg1624z00_1852);
							}
							{	/* Globalize/node.scm 515 */
								BgL_objectz00_bglt BgL_tmpz00_3592;

								BgL_tmpz00_3592 = ((BgL_objectz00_bglt) BgL_new1175z00_1851);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3592, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1175z00_1851);
							BgL_new1176z00_1844 = BgL_new1175z00_1851;
						}
						((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt) BgL_new1176z00_1844)))->BgL_locz00) =
							((obj_t) (((BgL_nodez00_bglt) COBJECT(BgL_nodez00_62))->
									BgL_locz00)), BUNSPEC);
						((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
											BgL_new1176z00_1844)))->BgL_typez00) =
							((BgL_typez00_bglt) (((BgL_nodez00_bglt)
										COBJECT(BgL_nodez00_62))->BgL_typez00)), BUNSPEC);
						((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
											BgL_new1176z00_1844)))->BgL_sidezd2effectzd2) =
							((obj_t) BUNSPEC), BUNSPEC);
						((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
											BgL_new1176z00_1844)))->BgL_keyz00) =
							((obj_t) BINT(((long) -1))), BUNSPEC);
						((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1176z00_1844))->
								BgL_bindingsz00) = ((obj_t) BgL_bindingsz00_1840), BUNSPEC);
						{
							BgL_nodez00_bglt BgL_auxz00_3608;

							if (NULLP(BgL_setsz00_1841))
								{	/* Globalize/node.scm 518 */
									BgL_auxz00_3608 = BgL_nodez00_62;
								}
							else
								{	/* Globalize/node.scm 520 */
									BgL_sequencez00_bglt BgL_new1178z00_1846;

									{	/* Globalize/node.scm 521 */
										BgL_sequencez00_bglt BgL_new1177z00_1849;

										BgL_new1177z00_1849 =
											((BgL_sequencez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_sequencez00_bgl))));
										{	/* Globalize/node.scm 521 */
											long BgL_arg1613z00_1850;

											{	/* Globalize/node.scm 521 */
												long BgL_res2054z00_2631;

												{	/* Globalize/node.scm 521 */
													obj_t BgL_classz00_2630;

													BgL_classz00_2630 = BGl_sequencez00zzast_nodez00;
													BgL_res2054z00_2631 =
														BGL_CLASS_INDEX(BgL_classz00_2630);
												}
												BgL_arg1613z00_1850 = BgL_res2054z00_2631;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1177z00_1849),
												BgL_arg1613z00_1850);
										}
										{	/* Globalize/node.scm 521 */
											BgL_objectz00_bglt BgL_tmpz00_3615;

											BgL_tmpz00_3615 =
												((BgL_objectz00_bglt) BgL_new1177z00_1849);
											BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3615, BFALSE);
										}
										((BgL_objectz00_bglt) BgL_new1177z00_1849);
										BgL_new1178z00_1846 = BgL_new1177z00_1849;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1178z00_1846)))->
											BgL_locz00) =
										((obj_t) (((BgL_nodez00_bglt) COBJECT(BgL_nodez00_62))->
												BgL_locz00)), BUNSPEC);
									((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_new1178z00_1846)))->BgL_typez00) =
										((BgL_typez00_bglt) (((BgL_nodez00_bglt)
													COBJECT(BgL_nodez00_62))->BgL_typez00)), BUNSPEC);
									((((BgL_nodezf2effectzf2_bglt)
												COBJECT(((BgL_nodezf2effectzf2_bglt)
														BgL_new1178z00_1846)))->BgL_sidezd2effectzd2) =
										((obj_t) BUNSPEC), BUNSPEC);
									((((BgL_nodezf2effectzf2_bglt)
												COBJECT(((BgL_nodezf2effectzf2_bglt)
														BgL_new1178z00_1846)))->BgL_keyz00) =
										((obj_t) BINT(((long) -1))), BUNSPEC);
									{
										obj_t BgL_auxz00_3630;

										{	/* Globalize/node.scm 523 */
											obj_t BgL_arg1611z00_1847;

											{	/* Globalize/node.scm 523 */
												obj_t BgL_list1612z00_1848;

												BgL_list1612z00_1848 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_nodez00_62), BNIL);
												BgL_arg1611z00_1847 = BgL_list1612z00_1848;
											}
											BgL_auxz00_3630 =
												BGl_appendzd221011zd2zzglobaliza7e_nodeza7
												(BgL_setsz00_1841, BgL_arg1611z00_1847);
										}
										((((BgL_sequencez00_bglt) COBJECT(BgL_new1178z00_1846))->
												BgL_nodesz00) = ((obj_t) BgL_auxz00_3630), BUNSPEC);
									}
									((((BgL_sequencez00_bglt) COBJECT(BgL_new1178z00_1846))->
											BgL_unsafez00) = ((bool_t) ((bool_t) 0)), BUNSPEC);
									((((BgL_sequencez00_bglt) COBJECT(BgL_new1178z00_1846))->
											BgL_metaz00) = ((obj_t) BNIL), BUNSPEC);
									BgL_auxz00_3608 = ((BgL_nodez00_bglt) BgL_new1178z00_1846);
								}
							((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1176z00_1844))->
									BgL_bodyz00) = ((BgL_nodez00_bglt) BgL_auxz00_3608), BUNSPEC);
						}
						((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1176z00_1844))->
								BgL_removablezf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
						return BgL_new1176z00_1844;
					}
				else
					{	/* Globalize/node.scm 524 */
						obj_t BgL_localz00_1853;

						BgL_localz00_1853 = CAR(((obj_t) BgL_ebindingsz00_1839));
						{	/* Globalize/node.scm 524 */
							obj_t BgL_newz00_1854;

							{	/* Globalize/node.scm 525 */
								obj_t BgL_arg1663z00_1865;

								BgL_arg1663z00_1865 =
									(((BgL_nodez00_bglt) COBJECT(BgL_nodez00_62))->BgL_locz00);
								BgL_newz00_1854 =
									BGl_thezd2closurezd2zzglobaliza7e_freeza7(
									((BgL_variablez00_bglt) BgL_localz00_1853),
									BgL_arg1663z00_1865);
							}
							{	/* Globalize/node.scm 525 */
								obj_t BgL_nsetsz00_1855;

								{	/* Globalize/node.scm 527 */
									obj_t BgL_arg1644z00_1862;
									obj_t BgL_arg1652z00_1863;

									BgL_arg1644z00_1862 =
										(((BgL_nodez00_bglt) COBJECT(BgL_nodez00_62))->BgL_locz00);
									{	/* Globalize/node.scm 528 */
										BgL_sfunz00_bglt BgL_oz00_2642;

										BgL_oz00_2642 =
											((BgL_sfunz00_bglt)
											(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt) BgL_localz00_1853))))->
												BgL_valuez00));
										{
											BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3650;

											{
												obj_t BgL_auxz00_3651;

												{	/* Globalize/node.scm 528 */
													BgL_objectz00_bglt BgL_tmpz00_3652;

													BgL_tmpz00_3652 =
														((BgL_objectz00_bglt) BgL_oz00_2642);
													BgL_auxz00_3651 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_3652);
												}
												BgL_auxz00_3650 =
													((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3651);
											}
											BgL_arg1652z00_1863 =
												(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3650))->
												BgL_kapturedz00);
										}
									}
									BgL_nsetsz00_1855 =
										BGl_makezd2setszd2zzglobaliza7e_nodeza7(BgL_newz00_1854,
										BgL_arg1644z00_1862, BgL_arg1652z00_1863,
										BgL_integratorz00_63);
								}
								{	/* Globalize/node.scm 526 */

									{	/* Globalize/node.scm 530 */
										obj_t BgL_arg1626z00_1856;
										obj_t BgL_arg1627z00_1857;
										obj_t BgL_arg1631z00_1858;

										BgL_arg1626z00_1856 = CDR(((obj_t) BgL_ebindingsz00_1839));
										{	/* Globalize/node.scm 531 */
											obj_t BgL_arg1634z00_1859;

											{	/* Globalize/node.scm 531 */
												BgL_appz00_bglt BgL_arg1639z00_1860;

												BgL_arg1639z00_1860 =
													BGl_azd2makezd2procedurez00zzglobaliza7e_nodeza7(
													((BgL_localz00_bglt) BgL_localz00_1853));
												BgL_arg1634z00_1859 =
													MAKE_YOUNG_PAIR(BgL_newz00_1854,
													((obj_t) BgL_arg1639z00_1860));
											}
											BgL_arg1627z00_1857 =
												MAKE_YOUNG_PAIR(BgL_arg1634z00_1859,
												BgL_bindingsz00_1840);
										}
										if (NULLP(BgL_nsetsz00_1855))
											{	/* Globalize/node.scm 533 */
												BgL_arg1631z00_1858 = BgL_setsz00_1841;
											}
										else
											{	/* Globalize/node.scm 533 */
												BgL_arg1631z00_1858 =
													MAKE_YOUNG_PAIR(BgL_nsetsz00_1855, BgL_setsz00_1841);
											}
										{
											obj_t BgL_setsz00_3670;
											obj_t BgL_bindingsz00_3669;
											obj_t BgL_ebindingsz00_3668;

											BgL_ebindingsz00_3668 = BgL_arg1626z00_1856;
											BgL_bindingsz00_3669 = BgL_arg1627z00_1857;
											BgL_setsz00_3670 = BgL_arg1631z00_1858;
											BgL_setsz00_1841 = BgL_setsz00_3670;
											BgL_bindingsz00_1840 = BgL_bindingsz00_3669;
											BgL_ebindingsz00_1839 = BgL_ebindingsz00_3668;
											goto BgL_zc3z04anonymousza31605ze3z87_1842;
										}
									}
								}
							}
						}
					}
			}
		}

	}



/* globalize-local-fun! */
	obj_t
		BGl_globaliza7ezd2localzd2funz12zb5zzglobaliza7e_nodeza7(BgL_localz00_bglt
		BgL_localz00_64, BgL_variablez00_bglt BgL_integratorz00_65)
	{
		{	/* Globalize/node.scm 540 */
			{	/* Globalize/node.scm 543 */
				BgL_valuez00_bglt BgL_funz00_1867;

				BgL_funz00_1867 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_localz00_64)))->BgL_valuez00);
				{	/* Globalize/node.scm 543 */
					obj_t BgL_obodyz00_1868;

					BgL_obodyz00_1868 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt) BgL_funz00_1867)))->BgL_bodyz00);
					{	/* Globalize/node.scm 544 */

						if ((((obj_t) BgL_localz00_64) == ((obj_t) BgL_integratorz00_65)))
							{	/* Globalize/node.scm 546 */
								BgL_nodez00_bglt BgL_arg1667z00_1870;

								BgL_arg1667z00_1870 =
									BGl_gloz12z12zzglobaliza7e_nodeza7(
									((BgL_nodez00_bglt) BgL_obodyz00_1868), BgL_integratorz00_65);
								return
									((((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_funz00_1867)))->BgL_bodyz00) =
									((obj_t) ((obj_t) BgL_arg1667z00_1870)), BUNSPEC);
							}
						else
							{	/* Globalize/node.scm 547 */
								obj_t BgL_celledz00_1871;

								{	/* Globalize/node.scm 547 */
									obj_t BgL_arg1695z00_1891;

									BgL_arg1695z00_1891 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_funz00_1867)))->BgL_argsz00);
									BgL_celledz00_1871 =
										BGl_celledzd2bindingszd2zzglobaliza7e_nodeza7
										(BgL_arg1695z00_1891);
								}
								{
									obj_t BgL_l1352z00_1873;

									BgL_l1352z00_1873 = BgL_celledz00_1871;
								BgL_zc3z04anonymousza31668ze3z87_1874:
									if (PAIRP(BgL_l1352z00_1873))
										{	/* Globalize/node.scm 548 */
											{	/* Globalize/node.scm 549 */
												obj_t BgL_wzd2bzd2_1876;

												BgL_wzd2bzd2_1876 = CAR(BgL_l1352z00_1873);
												{	/* Globalize/node.scm 549 */
													obj_t BgL_arg1672z00_1877;
													obj_t BgL_arg1684z00_1878;

													BgL_arg1672z00_1877 =
														CAR(((obj_t) BgL_wzd2bzd2_1876));
													BgL_arg1684z00_1878 =
														CDR(((obj_t) BgL_wzd2bzd2_1876));
													((((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt)
																			BgL_arg1672z00_1877))))->
															BgL_fastzd2alphazd2) =
														((obj_t) BgL_arg1684z00_1878), BUNSPEC);
												}
											}
											{
												obj_t BgL_l1352z00_3697;

												BgL_l1352z00_3697 = CDR(BgL_l1352z00_1873);
												BgL_l1352z00_1873 = BgL_l1352z00_3697;
												goto BgL_zc3z04anonymousza31668ze3z87_1874;
											}
										}
									else
										{	/* Globalize/node.scm 548 */
											((bool_t) 1);
										}
								}
								{	/* Globalize/node.scm 551 */
									BgL_nodez00_bglt BgL_nbody1z00_1881;

									BgL_nbody1z00_1881 =
										BGl_gloz12z12zzglobaliza7e_nodeza7(
										((BgL_nodez00_bglt) BgL_obodyz00_1868),
										BgL_integratorz00_65);
									{	/* Globalize/node.scm 551 */
										BgL_nodez00_bglt BgL_nbody2z00_1882;

										BgL_nbody2z00_1882 =
											BGl_cellzd2formalszd2zzglobaliza7e_nodeza7
											(BgL_celledz00_1871, BgL_nbody1z00_1881);
										{	/* Globalize/node.scm 552 */

											{
												obj_t BgL_l1354z00_1884;

												BgL_l1354z00_1884 = BgL_celledz00_1871;
											BgL_zc3z04anonymousza31686ze3z87_1885:
												if (PAIRP(BgL_l1354z00_1884))
													{	/* Globalize/node.scm 553 */
														{	/* Globalize/node.scm 554 */
															obj_t BgL_wzd2bzd2_1887;

															BgL_wzd2bzd2_1887 = CAR(BgL_l1354z00_1884);
															{	/* Globalize/node.scm 554 */
																obj_t BgL_arg1688z00_1888;

																BgL_arg1688z00_1888 =
																	CAR(((obj_t) BgL_wzd2bzd2_1887));
																((((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					((BgL_localz00_bglt)
																						BgL_arg1688z00_1888))))->
																		BgL_fastzd2alphazd2) =
																	((obj_t) BUNSPEC), BUNSPEC);
															}
														}
														{
															obj_t BgL_l1354z00_3710;

															BgL_l1354z00_3710 = CDR(BgL_l1354z00_1884);
															BgL_l1354z00_1884 = BgL_l1354z00_3710;
															goto BgL_zc3z04anonymousza31686ze3z87_1885;
														}
													}
												else
													{	/* Globalize/node.scm 553 */
														((bool_t) 1);
													}
											}
											return
												((((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt) BgL_funz00_1867)))->
													BgL_bodyz00) =
												((obj_t) ((obj_t) BgL_nbody2z00_1882)), BUNSPEC);
										}
									}
								}
							}
					}
				}
			}
		}

	}



/* a-make-procedure */
	BgL_appz00_bglt
		BGl_azd2makezd2procedurez00zzglobaliza7e_nodeza7(BgL_localz00_bglt
		BgL_localz00_66)
	{
		{	/* Globalize/node.scm 561 */
			{	/* Globalize/node.scm 562 */
				BgL_valuez00_bglt BgL_funz00_1892;

				BgL_funz00_1892 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_localz00_66)))->BgL_valuez00);
				{	/* Globalize/node.scm 562 */
					long BgL_arityz00_1893;

					BgL_arityz00_1893 =
						(((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt)
									((BgL_sfunz00_bglt) BgL_funz00_1892))))->BgL_arityz00);
					{	/* Globalize/node.scm 563 */
						obj_t BgL_kapturedz00_1894;

						{	/* Globalize/node.scm 564 */
							BgL_sfunz00_bglt BgL_oz00_2665;

							BgL_oz00_2665 =
								((BgL_sfunz00_bglt)
								(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_localz00_66)))->
									BgL_valuez00));
							{
								BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3723;

								{
									obj_t BgL_auxz00_3724;

									{	/* Globalize/node.scm 564 */
										BgL_objectz00_bglt BgL_tmpz00_3725;

										BgL_tmpz00_3725 = ((BgL_objectz00_bglt) BgL_oz00_2665);
										BgL_auxz00_3724 = BGL_OBJECT_WIDENING(BgL_tmpz00_3725);
									}
									BgL_auxz00_3723 =
										((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3724);
								}
								BgL_kapturedz00_1894 =
									(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3723))->
									BgL_kapturedz00);
						}}
						{	/* Globalize/node.scm 565 */
							obj_t BgL_makezd2pzd2_1896;

							if ((BgL_arityz00_1893 < ((long) 0)))
								{	/* Globalize/node.scm 566 */
									BgL_makezd2pzd2_1896 = CNST_TABLE_REF(((long) 3));
								}
							else
								{	/* Globalize/node.scm 566 */
									BgL_makezd2pzd2_1896 = CNST_TABLE_REF(((long) 4));
								}
							{	/* Globalize/node.scm 566 */
								obj_t BgL_vz00_1897;

								BgL_vz00_1897 =
									BGl_findzd2globalzf2modulez20zzast_envz00
									(BgL_makezd2pzd2_1896, CNST_TABLE_REF(((long) 5)));
								{	/* Globalize/node.scm 567 */

									{	/* Globalize/node.scm 568 */
										BgL_appz00_bglt BgL_new1181z00_1898;

										{	/* Globalize/node.scm 569 */
											BgL_appz00_bglt BgL_new1180z00_1923;

											BgL_new1180z00_1923 =
												((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_appz00_bgl))));
											{	/* Globalize/node.scm 569 */
												long BgL_arg1733z00_1924;

												{	/* Globalize/node.scm 569 */
													long BgL_res2060z00_2670;

													BgL_res2060z00_2670 =
														BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
													BgL_arg1733z00_1924 = BgL_res2060z00_2670;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1180z00_1923),
													BgL_arg1733z00_1924);
											}
											{	/* Globalize/node.scm 569 */
												BgL_objectz00_bglt BgL_tmpz00_3740;

												BgL_tmpz00_3740 =
													((BgL_objectz00_bglt) BgL_new1180z00_1923);
												BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3740, BFALSE);
											}
											((BgL_objectz00_bglt) BgL_new1180z00_1923);
											BgL_new1181z00_1898 = BgL_new1180z00_1923;
										}
										((((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_new1181z00_1898)))->
												BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
										((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
															BgL_new1181z00_1898)))->BgL_typez00) =
											((BgL_typez00_bglt) (((BgL_variablez00_bglt)
														COBJECT(((BgL_variablez00_bglt) BgL_vz00_1897)))->
													BgL_typez00)), BUNSPEC);
										((((BgL_nodezf2effectzf2_bglt)
													COBJECT(((BgL_nodezf2effectzf2_bglt)
															BgL_new1181z00_1898)))->BgL_sidezd2effectzd2) =
											((obj_t) BUNSPEC), BUNSPEC);
										((((BgL_nodezf2effectzf2_bglt)
													COBJECT(((BgL_nodezf2effectzf2_bglt)
															BgL_new1181z00_1898)))->BgL_keyz00) =
											((obj_t) BINT(((long) -1))), BUNSPEC);
										{
											BgL_varz00_bglt BgL_auxz00_3755;

											{	/* Globalize/node.scm 575 */
												BgL_varz00_bglt BgL_new1184z00_1899;

												{	/* Globalize/node.scm 576 */
													BgL_varz00_bglt BgL_new1183z00_1900;

													BgL_new1183z00_1900 =
														((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_varz00_bgl))));
													{	/* Globalize/node.scm 576 */
														long BgL_arg1696z00_1901;

														{	/* Globalize/node.scm 576 */
															long BgL_res2061z00_2676;

															{	/* Globalize/node.scm 576 */
																obj_t BgL_classz00_2675;

																BgL_classz00_2675 = BGl_varz00zzast_nodez00;
																BgL_res2061z00_2676 =
																	BGL_CLASS_INDEX(BgL_classz00_2675);
															}
															BgL_arg1696z00_1901 = BgL_res2061z00_2676;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1183z00_1900),
															BgL_arg1696z00_1901);
													}
													BgL_new1184z00_1899 = BgL_new1183z00_1900;
												}
												((((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_new1184z00_1899)))->
														BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
												((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																	BgL_new1184z00_1899)))->BgL_typez00) =
													((BgL_typez00_bglt) (((BgL_variablez00_bglt)
																COBJECT(((BgL_variablez00_bglt)
																		BgL_vz00_1897)))->BgL_typez00)), BUNSPEC);
												((((BgL_varz00_bglt) COBJECT(BgL_new1184z00_1899))->
														BgL_variablez00) =
													((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
															BgL_vz00_1897)), BUNSPEC);
												BgL_auxz00_3755 = BgL_new1184z00_1899;
											}
											((((BgL_appz00_bglt) COBJECT(BgL_new1181z00_1898))->
													BgL_funz00) =
												((BgL_varz00_bglt) BgL_auxz00_3755), BUNSPEC);
										}
										{
											obj_t BgL_auxz00_3769;

											{	/* Globalize/node.scm 579 */
												BgL_varz00_bglt BgL_arg1697z00_1902;
												BgL_literalz00_bglt BgL_arg1704z00_1903;
												BgL_literalz00_bglt BgL_arg1707z00_1904;

												{	/* Globalize/node.scm 579 */
													BgL_varz00_bglt BgL_new1186z00_1908;

													{	/* Globalize/node.scm 580 */
														BgL_varz00_bglt BgL_new1185z00_1910;

														BgL_new1185z00_1910 =
															((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_varz00_bgl))));
														{	/* Globalize/node.scm 580 */
															long BgL_arg1725z00_1911;

															{	/* Globalize/node.scm 580 */
																long BgL_res2062z00_2681;

																{	/* Globalize/node.scm 580 */
																	obj_t BgL_classz00_2680;

																	BgL_classz00_2680 = BGl_varz00zzast_nodez00;
																	BgL_res2062z00_2681 =
																		BGL_CLASS_INDEX(BgL_classz00_2680);
																}
																BgL_arg1725z00_1911 = BgL_res2062z00_2681;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1185z00_1910),
																BgL_arg1725z00_1911);
														}
														BgL_new1186z00_1908 = BgL_new1185z00_1910;
													}
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_new1186z00_1908)))->
															BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
													{
														BgL_typez00_bglt BgL_auxz00_3776;

														{	/* Globalize/node.scm 581 */
															BgL_globalz00_bglt BgL_arg1719z00_1909;

															BgL_arg1719z00_1909 =
																BGl_thezd2globalzd2zzglobaliza7e_localzd2ze3globalz96
																(BgL_localz00_66);
															BgL_auxz00_3776 =
																(((BgL_variablez00_bglt)
																	COBJECT(((BgL_variablez00_bglt)
																			BgL_arg1719z00_1909)))->BgL_typez00);
														}
														((((BgL_nodez00_bglt) COBJECT(
																		((BgL_nodez00_bglt) BgL_new1186z00_1908)))->
																BgL_typez00) =
															((BgL_typez00_bglt) BgL_auxz00_3776), BUNSPEC);
													}
													((((BgL_varz00_bglt) COBJECT(BgL_new1186z00_1908))->
															BgL_variablez00) =
														((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
																BGl_thezd2globalzd2zzglobaliza7e_localzd2ze3globalz96
																(BgL_localz00_66))), BUNSPEC);
													BgL_arg1697z00_1902 = BgL_new1186z00_1908;
												}
												{	/* Globalize/node.scm 583 */
													BgL_literalz00_bglt BgL_new1188z00_1912;

													{	/* Globalize/node.scm 584 */
														BgL_literalz00_bglt BgL_new1187z00_1913;

														BgL_new1187z00_1913 =
															((BgL_literalz00_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_literalz00_bgl))));
														{	/* Globalize/node.scm 584 */
															long BgL_arg1726z00_1914;

															{	/* Globalize/node.scm 584 */
																long BgL_res2063z00_2686;

																{	/* Globalize/node.scm 584 */
																	obj_t BgL_classz00_2685;

																	BgL_classz00_2685 =
																		BGl_literalz00zzast_nodez00;
																	BgL_res2063z00_2686 =
																		BGL_CLASS_INDEX(BgL_classz00_2685);
																}
																BgL_arg1726z00_1914 = BgL_res2063z00_2686;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1187z00_1913),
																BgL_arg1726z00_1914);
														}
														{	/* Globalize/node.scm 584 */
															BgL_objectz00_bglt BgL_tmpz00_3789;

															BgL_tmpz00_3789 =
																((BgL_objectz00_bglt) BgL_new1187z00_1913);
															BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3789, BFALSE);
														}
														((BgL_objectz00_bglt) BgL_new1187z00_1913);
														BgL_new1188z00_1912 = BgL_new1187z00_1913;
													}
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_new1188z00_1912)))->
															BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
													((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																		BgL_new1188z00_1912)))->BgL_typez00) =
														((BgL_typez00_bglt)
															BGl_getzd2typezd2atomz00zztype_typeofz00(BINT
																(BgL_arityz00_1893))), BUNSPEC);
													((((BgL_atomz00_bglt) COBJECT(((BgL_atomz00_bglt)
																		BgL_new1188z00_1912)))->BgL_valuez00) =
														((obj_t) BINT(BgL_arityz00_1893)), BUNSPEC);
													BgL_arg1704z00_1903 = BgL_new1188z00_1912;
												}
												{	/* Globalize/node.scm 587 */
													BgL_literalz00_bglt BgL_new1190z00_1915;

													{	/* Globalize/node.scm 588 */
														BgL_literalz00_bglt BgL_new1189z00_1916;

														BgL_new1189z00_1916 =
															((BgL_literalz00_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_literalz00_bgl))));
														{	/* Globalize/node.scm 588 */
															long BgL_arg1727z00_1917;

															{	/* Globalize/node.scm 588 */
																long BgL_res2064z00_2691;

																{	/* Globalize/node.scm 588 */
																	obj_t BgL_classz00_2690;

																	BgL_classz00_2690 =
																		BGl_literalz00zzast_nodez00;
																	BgL_res2064z00_2691 =
																		BGL_CLASS_INDEX(BgL_classz00_2690);
																}
																BgL_arg1727z00_1917 = BgL_res2064z00_2691;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1189z00_1916),
																BgL_arg1727z00_1917);
														}
														{	/* Globalize/node.scm 588 */
															BgL_objectz00_bglt BgL_tmpz00_3806;

															BgL_tmpz00_3806 =
																((BgL_objectz00_bglt) BgL_new1189z00_1916);
															BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3806, BFALSE);
														}
														((BgL_objectz00_bglt) BgL_new1189z00_1916);
														BgL_new1190z00_1915 = BgL_new1189z00_1916;
													}
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_new1190z00_1915)))->
															BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
													((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																		BgL_new1190z00_1915)))->BgL_typez00) =
														((BgL_typez00_bglt)
															BGl_getzd2typezd2atomz00zztype_typeofz00(BINT((
																		(long) 1)))), BUNSPEC);
													((((BgL_atomz00_bglt) COBJECT(((BgL_atomz00_bglt)
																		BgL_new1190z00_1915)))->BgL_valuez00) =
														((obj_t)
															BINT(bgl_list_length(BgL_kapturedz00_1894))),
														BUNSPEC);
													BgL_arg1707z00_1904 = BgL_new1190z00_1915;
												}
												{	/* Globalize/node.scm 579 */
													obj_t BgL_list1708z00_1905;

													{	/* Globalize/node.scm 579 */
														obj_t BgL_arg1711z00_1906;

														{	/* Globalize/node.scm 579 */
															obj_t BgL_arg1712z00_1907;

															BgL_arg1712z00_1907 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_arg1707z00_1904), BNIL);
															BgL_arg1711z00_1906 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_arg1704z00_1903),
																BgL_arg1712z00_1907);
														}
														BgL_list1708z00_1905 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_arg1697z00_1902),
															BgL_arg1711z00_1906);
													}
													BgL_auxz00_3769 = BgL_list1708z00_1905;
											}}
											((((BgL_appz00_bglt) COBJECT(BgL_new1181z00_1898))->
													BgL_argsz00) = ((obj_t) BgL_auxz00_3769), BUNSPEC);
										}
										{
											obj_t BgL_auxz00_3827;

											if (
												((((BgL_sfunz00_bglt) COBJECT(
																((BgL_sfunz00_bglt) BgL_funz00_1892)))->
														BgL_stackablez00) == BTRUE))
												{	/* Globalize/node.scm 572 */
													BgL_valuez00_bglt BgL_gvz00_1920;

													BgL_gvz00_1920 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_globalz00_bglt) BgL_vz00_1897))))->
														BgL_valuez00);
													{	/* Globalize/node.scm 573 */
														bool_t BgL_test2200z00_3835;

														{	/* Globalize/node.scm 573 */
															bool_t BgL_res2066z00_2698;

															BgL_res2066z00_2698 =
																BGl_isazf3zf3zz__objectz00(
																((obj_t) BgL_gvz00_1920),
																BGl_funz00zzast_varz00);
															BgL_test2200z00_3835 = BgL_res2066z00_2698;
														}
														if (BgL_test2200z00_3835)
															{	/* Globalize/node.scm 573 */
																BgL_auxz00_3827 =
																	(((BgL_funz00_bglt) COBJECT(
																			((BgL_funz00_bglt) BgL_gvz00_1920)))->
																	BgL_stackzd2allocatorzd2);
															}
														else
															{	/* Globalize/node.scm 573 */
																BgL_auxz00_3827 = BFALSE;
															}
													}
												}
											else
												{	/* Globalize/node.scm 571 */
													BgL_auxz00_3827 = BFALSE;
												}
											((((BgL_appz00_bglt) COBJECT(BgL_new1181z00_1898))->
													BgL_stackablez00) =
												((obj_t) BgL_auxz00_3827), BUNSPEC);
										}
										return BgL_new1181z00_1898;
									}
								}
							}
						}
					}
				}
			}
		}

	}



/* make-sets */
	obj_t BGl_makezd2setszd2zzglobaliza7e_nodeza7(obj_t BgL_newz00_67,
		obj_t BgL_locz00_68, obj_t BgL_kapturedz00_69,
		BgL_variablez00_bglt BgL_integratorz00_70)
	{
		{	/* Globalize/node.scm 595 */
			if (NULLP(BgL_kapturedz00_69))
				{	/* Globalize/node.scm 596 */
					return BNIL;
				}
			else
				{
					obj_t BgL_kapturedz00_1930;
					long BgL_indicez00_1931;
					obj_t BgL_setsz00_1932;

					{
						BgL_sequencez00_bglt BgL_auxz00_3843;

						BgL_kapturedz00_1930 = BgL_kapturedz00_69;
						BgL_indicez00_1931 = ((long) 0);
						BgL_setsz00_1932 = BNIL;
					BgL_zc3z04anonymousza31740ze3z87_1933:
						if (NULLP(BgL_kapturedz00_1930))
							{	/* Globalize/node.scm 602 */
								BgL_sequencez00_bglt BgL_new1194z00_1935;

								{	/* Globalize/node.scm 603 */
									BgL_sequencez00_bglt BgL_new1193z00_1937;

									BgL_new1193z00_1937 =
										((BgL_sequencez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_sequencez00_bgl))));
									{	/* Globalize/node.scm 603 */
										long BgL_arg1743z00_1938;

										{	/* Globalize/node.scm 603 */
											long BgL_res2069z00_2703;

											BgL_res2069z00_2703 =
												BGL_CLASS_INDEX(BGl_sequencez00zzast_nodez00);
											BgL_arg1743z00_1938 = BgL_res2069z00_2703;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1193z00_1937),
											BgL_arg1743z00_1938);
									}
									{	/* Globalize/node.scm 603 */
										BgL_objectz00_bglt BgL_tmpz00_3850;

										BgL_tmpz00_3850 =
											((BgL_objectz00_bglt) BgL_new1193z00_1937);
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3850, BFALSE);
									}
									((BgL_objectz00_bglt) BgL_new1193z00_1937);
									BgL_new1194z00_1935 = BgL_new1193z00_1937;
								}
								((((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt) BgL_new1194z00_1935)))->
										BgL_locz00) = ((obj_t) BgL_locz00_68), BUNSPEC);
								((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
													BgL_new1194z00_1935)))->BgL_typez00) =
									((BgL_typez00_bglt) (((BgL_nodez00_bglt)
												COBJECT(((BgL_nodez00_bglt) CAR(((obj_t)
																BgL_setsz00_1932)))))->BgL_typez00)), BUNSPEC);
								((((BgL_nodezf2effectzf2_bglt)
											COBJECT(((BgL_nodezf2effectzf2_bglt)
													BgL_new1194z00_1935)))->BgL_sidezd2effectzd2) =
									((obj_t) BUNSPEC), BUNSPEC);
								((((BgL_nodezf2effectzf2_bglt)
											COBJECT(((BgL_nodezf2effectzf2_bglt)
													BgL_new1194z00_1935)))->BgL_keyz00) =
									((obj_t) BINT(((long) -1))), BUNSPEC);
								((((BgL_sequencez00_bglt) COBJECT(BgL_new1194z00_1935))->
										BgL_nodesz00) =
									((obj_t) bgl_reverse_bang(BgL_setsz00_1932)), BUNSPEC);
								((((BgL_sequencez00_bglt) COBJECT(BgL_new1194z00_1935))->
										BgL_unsafez00) = ((bool_t) ((bool_t) 0)), BUNSPEC);
								((((BgL_sequencez00_bglt) COBJECT(BgL_new1194z00_1935))->
										BgL_metaz00) = ((obj_t) BNIL), BUNSPEC);
								BgL_auxz00_3843 = BgL_new1194z00_1935;
							}
						else
							{	/* Globalize/node.scm 606 */
								obj_t BgL_arg1744z00_1939;
								long BgL_arg1745z00_1940;
								obj_t BgL_arg1746z00_1941;

								BgL_arg1744z00_1939 = CDR(((obj_t) BgL_kapturedz00_1930));
								BgL_arg1745z00_1940 = (BgL_indicez00_1931 + ((long) 1));
								{	/* Globalize/node.scm 611 */
									BgL_appz00_bglt BgL_arg1747z00_1942;

									{	/* Globalize/node.scm 611 */
										obj_t BgL_arg1754z00_1943;

										BgL_arg1754z00_1943 = CAR(((obj_t) BgL_kapturedz00_1930));
										BgL_arg1747z00_1942 =
											BGl_azd2procedurezd2setz12z12zzglobaliza7e_nodeza7
											(BgL_locz00_68, BgL_newz00_67, BgL_indicez00_1931,
											BgL_arg1754z00_1943, BgL_integratorz00_70);
									}
									BgL_arg1746z00_1941 =
										MAKE_YOUNG_PAIR(
										((obj_t) BgL_arg1747z00_1942), BgL_setsz00_1932);
								}
								{
									obj_t BgL_setsz00_3881;
									long BgL_indicez00_3880;
									obj_t BgL_kapturedz00_3879;

									BgL_kapturedz00_3879 = BgL_arg1744z00_1939;
									BgL_indicez00_3880 = BgL_arg1745z00_1940;
									BgL_setsz00_3881 = BgL_arg1746z00_1941;
									BgL_setsz00_1932 = BgL_setsz00_3881;
									BgL_indicez00_1931 = BgL_indicez00_3880;
									BgL_kapturedz00_1930 = BgL_kapturedz00_3879;
									goto BgL_zc3z04anonymousza31740ze3z87_1933;
								}
							}
						return ((obj_t) BgL_auxz00_3843);
					}
				}
		}

	}



/* a-procedure-set! */
	BgL_appz00_bglt BGl_azd2procedurezd2setz12z12zzglobaliza7e_nodeza7(obj_t
		BgL_locz00_71, obj_t BgL_newz00_72, long BgL_indicez00_73,
		obj_t BgL_kapturedz00_74, BgL_variablez00_bglt BgL_integratorz00_75)
	{
		{	/* Globalize/node.scm 618 */
			{
				obj_t BgL_varz00_1969;

				{	/* Globalize/node.scm 624 */
					obj_t BgL_vfz00_1946;
					obj_t BgL_vaz00_1947;

					BgL_vfz00_1946 =
						BGl_findzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
								6)), CNST_TABLE_REF(((long) 5)));
					BgL_varz00_1969 = BgL_kapturedz00_74;
				BgL_zc3z04anonymousza31780ze3z87_1970:
					{	/* Globalize/node.scm 620 */
						obj_t BgL_alphaz00_1971;

						BgL_alphaz00_1971 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_varz00_1969)))->
							BgL_fastzd2alphazd2);
						if (BGl_isazf3zf3zz__objectz00(BgL_alphaz00_1971,
								BGl_localz00zzast_varz00))
							{
								obj_t BgL_varz00_3890;

								BgL_varz00_3890 = BgL_alphaz00_1971;
								BgL_varz00_1969 = BgL_varz00_3890;
								goto BgL_zc3z04anonymousza31780ze3z87_1970;
							}
						else
							{	/* Globalize/node.scm 621 */
								BgL_vaz00_1947 = BgL_varz00_1969;
							}
					}
					{	/* Globalize/node.scm 626 */
						BgL_appz00_bglt BgL_new1196z00_1948;

						{	/* Globalize/node.scm 627 */
							BgL_appz00_bglt BgL_new1195z00_1967;

							BgL_new1195z00_1967 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Globalize/node.scm 627 */
								long BgL_arg1779z00_1968;

								{	/* Globalize/node.scm 627 */
									long BgL_res2072z00_2716;

									BgL_res2072z00_2716 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg1779z00_1968 = BgL_res2072z00_2716;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1195z00_1967),
									BgL_arg1779z00_1968);
							}
							{	/* Globalize/node.scm 627 */
								BgL_objectz00_bglt BgL_tmpz00_3895;

								BgL_tmpz00_3895 = ((BgL_objectz00_bglt) BgL_new1195z00_1967);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3895, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1195z00_1967);
							BgL_new1196z00_1948 = BgL_new1195z00_1967;
						}
						((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt) BgL_new1196z00_1948)))->BgL_locz00) =
							((obj_t) BgL_locz00_71), BUNSPEC);
						((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
											BgL_new1196z00_1948)))->BgL_typez00) =
							((BgL_typez00_bglt) (((BgL_variablez00_bglt)
										COBJECT(((BgL_variablez00_bglt) BgL_vfz00_1946)))->
									BgL_typez00)), BUNSPEC);
						((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
											BgL_new1196z00_1948)))->BgL_sidezd2effectzd2) =
							((obj_t) BUNSPEC), BUNSPEC);
						((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
											BgL_new1196z00_1948)))->BgL_keyz00) =
							((obj_t) BINT(((long) -1))), BUNSPEC);
						{
							BgL_varz00_bglt BgL_auxz00_3910;

							{	/* Globalize/node.scm 629 */
								BgL_varz00_bglt BgL_new1198z00_1949;

								{	/* Globalize/node.scm 630 */
									BgL_varz00_bglt BgL_new1197z00_1950;

									BgL_new1197z00_1950 =
										((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_varz00_bgl))));
									{	/* Globalize/node.scm 630 */
										long BgL_arg1755z00_1951;

										{	/* Globalize/node.scm 630 */
											long BgL_res2073z00_2722;

											{	/* Globalize/node.scm 630 */
												obj_t BgL_classz00_2721;

												BgL_classz00_2721 = BGl_varz00zzast_nodez00;
												BgL_res2073z00_2722 =
													BGL_CLASS_INDEX(BgL_classz00_2721);
											}
											BgL_arg1755z00_1951 = BgL_res2073z00_2722;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1197z00_1950),
											BgL_arg1755z00_1951);
									}
									BgL_new1198z00_1949 = BgL_new1197z00_1950;
								}
								((((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt) BgL_new1198z00_1949)))->
										BgL_locz00) = ((obj_t) BgL_locz00_71), BUNSPEC);
								((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
													BgL_new1198z00_1949)))->BgL_typez00) =
									((BgL_typez00_bglt) (((BgL_variablez00_bglt)
												COBJECT(((BgL_variablez00_bglt) BgL_vfz00_1946)))->
											BgL_typez00)), BUNSPEC);
								((((BgL_varz00_bglt) COBJECT(BgL_new1198z00_1949))->
										BgL_variablez00) =
									((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
											BgL_vfz00_1946)), BUNSPEC);
								BgL_auxz00_3910 = BgL_new1198z00_1949;
							}
							((((BgL_appz00_bglt) COBJECT(BgL_new1196z00_1948))->BgL_funz00) =
								((BgL_varz00_bglt) BgL_auxz00_3910), BUNSPEC);
						}
						{
							obj_t BgL_auxz00_3924;

							{	/* Globalize/node.scm 633 */
								BgL_varz00_bglt BgL_arg1756z00_1952;
								BgL_literalz00_bglt BgL_arg1757z00_1953;
								BgL_varz00_bglt BgL_arg1759z00_1954;

								{	/* Globalize/node.scm 633 */
									BgL_varz00_bglt BgL_new1200z00_1958;

									{	/* Globalize/node.scm 634 */
										BgL_varz00_bglt BgL_new1199z00_1959;

										BgL_new1199z00_1959 =
											((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_varz00_bgl))));
										{	/* Globalize/node.scm 634 */
											long BgL_arg1771z00_1960;

											{	/* Globalize/node.scm 634 */
												long BgL_res2074z00_2727;

												{	/* Globalize/node.scm 634 */
													obj_t BgL_classz00_2726;

													BgL_classz00_2726 = BGl_varz00zzast_nodez00;
													BgL_res2074z00_2727 =
														BGL_CLASS_INDEX(BgL_classz00_2726);
												}
												BgL_arg1771z00_1960 = BgL_res2074z00_2727;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1199z00_1959),
												BgL_arg1771z00_1960);
										}
										BgL_new1200z00_1958 = BgL_new1199z00_1959;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1200z00_1958)))->
											BgL_locz00) = ((obj_t) BgL_locz00_71), BUNSPEC);
									((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_new1200z00_1958)))->BgL_typez00) =
										((BgL_typez00_bglt) (((BgL_variablez00_bglt)
													COBJECT(((BgL_variablez00_bglt) BgL_newz00_72)))->
												BgL_typez00)), BUNSPEC);
									((((BgL_varz00_bglt) COBJECT(BgL_new1200z00_1958))->
											BgL_variablez00) =
										((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
												BgL_newz00_72)), BUNSPEC);
									BgL_arg1756z00_1952 = BgL_new1200z00_1958;
								}
								{	/* Globalize/node.scm 637 */
									BgL_literalz00_bglt BgL_new1202z00_1961;

									{	/* Globalize/node.scm 638 */
										BgL_literalz00_bglt BgL_new1201z00_1962;

										BgL_new1201z00_1962 =
											((BgL_literalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_literalz00_bgl))));
										{	/* Globalize/node.scm 638 */
											long BgL_arg1775z00_1963;

											{	/* Globalize/node.scm 638 */
												long BgL_res2075z00_2732;

												{	/* Globalize/node.scm 638 */
													obj_t BgL_classz00_2731;

													BgL_classz00_2731 = BGl_literalz00zzast_nodez00;
													BgL_res2075z00_2732 =
														BGL_CLASS_INDEX(BgL_classz00_2731);
												}
												BgL_arg1775z00_1963 = BgL_res2075z00_2732;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1201z00_1962),
												BgL_arg1775z00_1963);
										}
										{	/* Globalize/node.scm 638 */
											BgL_objectz00_bglt BgL_tmpz00_3941;

											BgL_tmpz00_3941 =
												((BgL_objectz00_bglt) BgL_new1201z00_1962);
											BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3941, BFALSE);
										}
										((BgL_objectz00_bglt) BgL_new1201z00_1962);
										BgL_new1202z00_1961 = BgL_new1201z00_1962;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1202z00_1961)))->
											BgL_locz00) = ((obj_t) BgL_locz00_71), BUNSPEC);
									((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_new1202z00_1961)))->BgL_typez00) =
										((BgL_typez00_bglt)
											BGl_getzd2typezd2atomz00zztype_typeofz00(BINT
												(BgL_indicez00_73))), BUNSPEC);
									((((BgL_atomz00_bglt) COBJECT(((BgL_atomz00_bglt)
														BgL_new1202z00_1961)))->BgL_valuez00) =
										((obj_t) BINT(BgL_indicez00_73)), BUNSPEC);
									BgL_arg1757z00_1953 = BgL_new1202z00_1961;
								}
								{	/* Globalize/node.scm 641 */

									{	/* Globalize/node.scm 642 */
										BgL_varz00_bglt BgL_new1204z00_1964;

										{	/* Globalize/node.scm 643 */
											BgL_varz00_bglt BgL_new1203z00_1965;

											BgL_new1203z00_1965 =
												((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_varz00_bgl))));
											{	/* Globalize/node.scm 643 */
												long BgL_arg1778z00_1966;

												{	/* Globalize/node.scm 643 */
													long BgL_res2076z00_2737;

													{	/* Globalize/node.scm 643 */
														obj_t BgL_classz00_2736;

														BgL_classz00_2736 = BGl_varz00zzast_nodez00;
														BgL_res2076z00_2737 =
															BGL_CLASS_INDEX(BgL_classz00_2736);
													}
													BgL_arg1778z00_1966 = BgL_res2076z00_2737;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1203z00_1965),
													BgL_arg1778z00_1966);
											}
											BgL_new1204z00_1964 = BgL_new1203z00_1965;
										}
										((((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_new1204z00_1964)))->
												BgL_locz00) = ((obj_t) BgL_locz00_71), BUNSPEC);
										((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
															BgL_new1204z00_1964)))->BgL_typez00) =
											((BgL_typez00_bglt) (((BgL_variablez00_bglt)
														COBJECT(((BgL_variablez00_bglt) BgL_vaz00_1947)))->
													BgL_typez00)), BUNSPEC);
										((((BgL_varz00_bglt) COBJECT(BgL_new1204z00_1964))->
												BgL_variablez00) =
											((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
													BgL_vaz00_1947)), BUNSPEC);
										BgL_arg1759z00_1954 = BgL_new1204z00_1964;
								}}
								{	/* Globalize/node.scm 633 */
									obj_t BgL_list1760z00_1955;

									{	/* Globalize/node.scm 633 */
										obj_t BgL_arg1761z00_1956;

										{	/* Globalize/node.scm 633 */
											obj_t BgL_arg1768z00_1957;

											BgL_arg1768z00_1957 =
												MAKE_YOUNG_PAIR(((obj_t) BgL_arg1759z00_1954), BNIL);
											BgL_arg1761z00_1956 =
												MAKE_YOUNG_PAIR(
												((obj_t) BgL_arg1757z00_1953), BgL_arg1768z00_1957);
										}
										BgL_list1760z00_1955 =
											MAKE_YOUNG_PAIR(
											((obj_t) BgL_arg1756z00_1952), BgL_arg1761z00_1956);
									}
									BgL_auxz00_3924 = BgL_list1760z00_1955;
							}}
							((((BgL_appz00_bglt) COBJECT(BgL_new1196z00_1948))->BgL_argsz00) =
								((obj_t) BgL_auxz00_3924), BUNSPEC);
						}
						((((BgL_appz00_bglt) COBJECT(BgL_new1196z00_1948))->
								BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
						return BgL_new1196z00_1948;
					}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzglobaliza7e_nodeza7()
	{
		{	/* Globalize/node.scm 17 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_nodeza7()
	{
		{	/* Globalize/node.scm 17 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
				BGl_proc2114z00zzglobaliza7e_nodeza7, BGl_nodez00zzast_nodez00,
				BGl_string2115z00zzglobaliza7e_nodeza7);
		}

	}



/* &glo!1356 */
	obj_t BGl_z62gloz121356z70zzglobaliza7e_nodeza7(obj_t BgL_envz00_2959,
		obj_t BgL_nodez00_2960, obj_t BgL_integratorz00_2961)
	{
		{	/* Globalize/node.scm 134 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 7)),
				BGl_string2116z00zzglobaliza7e_nodeza7,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2960)));
		}

	}



/* glo! */
	BgL_nodez00_bglt BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_nodez00_bglt
		BgL_nodez00_13, BgL_variablez00_bglt BgL_integratorz00_14)
	{
		{	/* Globalize/node.scm 134 */
			{	/* Globalize/node.scm 134 */
				obj_t BgL_method1357z00_1979;

				{	/* Globalize/node.scm 134 */
					obj_t BgL_res2088z00_2778;

					{	/* Globalize/node.scm 134 */
						long BgL_objzd2classzd2numz00_2743;

						{	/* Globalize/node.scm 134 */
							long BgL_res2078z00_2746;

							BgL_res2078z00_2746 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_13));
							BgL_objzd2classzd2numz00_2743 = BgL_res2078z00_2746;
						}
						{	/* Globalize/node.scm 134 */
							obj_t BgL_arg1813z00_2744;

							BgL_arg1813z00_2744 =
								PROCEDURE_REF(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
								(int) (((long) 1)));
							{	/* Globalize/node.scm 134 */
								int BgL_offsetz00_2748;

								BgL_offsetz00_2748 = (int) (BgL_objzd2classzd2numz00_2743);
								{	/* Globalize/node.scm 134 */
									long BgL_offsetz00_2749;

									BgL_offsetz00_2749 =
										((long) (BgL_offsetz00_2748) - OBJECT_TYPE);
									{	/* Globalize/node.scm 134 */
										long BgL_modz00_2750;

										BgL_modz00_2750 =
											(BgL_offsetz00_2749 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Globalize/node.scm 134 */
											long BgL_restz00_2752;

											BgL_restz00_2752 =
												(BgL_offsetz00_2749 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Globalize/node.scm 134 */

												{	/* Globalize/node.scm 134 */
													obj_t BgL_bucketz00_2754;

													BgL_bucketz00_2754 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2744), BgL_modz00_2750);
													BgL_res2088z00_2778 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2754), BgL_restz00_2752);
					}}}}}}}}
					BgL_method1357z00_1979 = BgL_res2088z00_2778;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1357z00_1979) (BgL_method1357z00_1979,
						((obj_t) BgL_nodez00_13), ((obj_t) BgL_integratorz00_14), BEOA));
			}
		}

	}



/* &glo! */
	BgL_nodez00_bglt BGl_z62gloz12z70zzglobaliza7e_nodeza7(obj_t BgL_envz00_2962,
		obj_t BgL_nodez00_2963, obj_t BgL_integratorz00_2964)
	{
		{	/* Globalize/node.scm 134 */
			return
				BGl_gloz12z12zzglobaliza7e_nodeza7(
				((BgL_nodez00_bglt) BgL_nodez00_2963),
				((BgL_variablez00_bglt) BgL_integratorz00_2964));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_nodeza7()
	{
		{	/* Globalize/node.scm 17 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_atomz00zzast_nodez00,
				BGl_proc2117z00zzglobaliza7e_nodeza7,
				BGl_string2118z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_kwotez00zzast_nodez00,
				BGl_proc2119z00zzglobaliza7e_nodeza7,
				BGl_string2118z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_varz00zzast_nodez00,
				BGl_proc2120z00zzglobaliza7e_nodeza7,
				BGl_string2118z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_closurez00zzast_nodez00,
				BGl_proc2121z00zzglobaliza7e_nodeza7,
				BGl_string2118z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_sequencez00zzast_nodez00,
				BGl_proc2122z00zzglobaliza7e_nodeza7,
				BGl_string2118z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_syncz00zzast_nodez00,
				BGl_proc2123z00zzglobaliza7e_nodeza7,
				BGl_string2118z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_appz00zzast_nodez00,
				BGl_proc2124z00zzglobaliza7e_nodeza7,
				BGl_string2118z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc2125z00zzglobaliza7e_nodeza7,
				BGl_string2118z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_funcallz00zzast_nodez00,
				BGl_proc2126z00zzglobaliza7e_nodeza7,
				BGl_string2118z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_externz00zzast_nodez00,
				BGl_proc2127z00zzglobaliza7e_nodeza7,
				BGl_string2118z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_castz00zzast_nodez00,
				BGl_proc2128z00zzglobaliza7e_nodeza7,
				BGl_string2118z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_setqz00zzast_nodez00,
				BGl_proc2129z00zzglobaliza7e_nodeza7,
				BGl_string2118z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
				BGl_conditionalz00zzast_nodez00, BGl_proc2130z00zzglobaliza7e_nodeza7,
				BGl_string2118z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_failz00zzast_nodez00,
				BGl_proc2131z00zzglobaliza7e_nodeza7,
				BGl_string2118z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_switchz00zzast_nodez00,
				BGl_proc2132z00zzglobaliza7e_nodeza7,
				BGl_string2118z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc2133z00zzglobaliza7e_nodeza7,
				BGl_string2118z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc2134z00zzglobaliza7e_nodeza7,
				BGl_string2118z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc2135z00zzglobaliza7e_nodeza7,
				BGl_string2118z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
				BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc2136z00zzglobaliza7e_nodeza7,
				BGl_string2118z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc2137z00zzglobaliza7e_nodeza7,
				BGl_string2118z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc2138z00zzglobaliza7e_nodeza7,
				BGl_string2118z00zzglobaliza7e_nodeza7);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc2139z00zzglobaliza7e_nodeza7,
				BGl_string2118z00zzglobaliza7e_nodeza7);
		}

	}



/* &glo!-box-set!1403 */
	BgL_nodez00_bglt
		BGl_z62gloz12zd2boxzd2setz121403z62zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_2987, obj_t BgL_nodez00_2988, obj_t BgL_integratorz00_2989)
	{
		{	/* Globalize/node.scm 486 */
			{
				BgL_varz00_bglt BgL_auxz00_4037;

				{	/* Globalize/node.scm 488 */
					BgL_varz00_bglt BgL_arg1959z00_3069;

					BgL_arg1959z00_3069 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2988)))->BgL_varz00);
					BgL_auxz00_4037 =
						((BgL_varz00_bglt)
						BGl_gloz12z12zzglobaliza7e_nodeza7(
							((BgL_nodez00_bglt) BgL_arg1959z00_3069),
							((BgL_variablez00_bglt) BgL_integratorz00_2989)));
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2988)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_4037), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_4046;

				{	/* Globalize/node.scm 489 */
					BgL_nodez00_bglt BgL_arg1960z00_3070;

					BgL_arg1960z00_3070 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2988)))->BgL_valuez00);
					BgL_auxz00_4046 =
						BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_arg1960z00_3070,
						((BgL_variablez00_bglt) BgL_integratorz00_2989));
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2988)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_4046), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2988));
		}

	}



/* &glo!-box-ref1401 */
	BgL_nodez00_bglt BGl_z62gloz12zd2boxzd2ref1401z70zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_2990, obj_t BgL_nodez00_2991, obj_t BgL_integratorz00_2992)
	{
		{	/* Globalize/node.scm 478 */
			{
				BgL_varz00_bglt BgL_auxz00_4055;

				{	/* Globalize/node.scm 480 */
					BgL_varz00_bglt BgL_arg1958z00_3072;

					BgL_arg1958z00_3072 =
						(((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2991)))->BgL_varz00);
					BgL_auxz00_4055 =
						((BgL_varz00_bglt)
						BGl_gloz12z12zzglobaliza7e_nodeza7(
							((BgL_nodez00_bglt) BgL_arg1958z00_3072),
							((BgL_variablez00_bglt) BgL_integratorz00_2992)));
				}
				((((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2991)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_4055), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_2991));
		}

	}



/* &glo!-make-box1399 */
	BgL_nodez00_bglt BGl_z62gloz12zd2makezd2box1399z70zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_2993, obj_t BgL_nodez00_2994, obj_t BgL_integratorz00_2995)
	{
		{	/* Globalize/node.scm 470 */
			{
				BgL_nodez00_bglt BgL_auxz00_4066;

				{	/* Globalize/node.scm 472 */
					BgL_nodez00_bglt BgL_arg1957z00_3074;

					BgL_arg1957z00_3074 =
						(((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2994)))->BgL_valuez00);
					BgL_auxz00_4066 =
						BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_arg1957z00_3074,
						((BgL_variablez00_bglt) BgL_integratorz00_2995));
				}
				((((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2994)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_4066), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2994));
		}

	}



/* &glo!-jump-ex-it1397 */
	BgL_nodez00_bglt
		BGl_z62gloz12zd2jumpzd2exzd2it1397za2zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_2996, obj_t BgL_nodez00_2997, obj_t BgL_integratorz00_2998)
	{
		{	/* Globalize/node.scm 461 */
			{
				BgL_nodez00_bglt BgL_auxz00_4075;

				{	/* Globalize/node.scm 463 */
					BgL_nodez00_bglt BgL_arg1955z00_3076;

					BgL_arg1955z00_3076 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2997)))->BgL_exitz00);
					BgL_auxz00_4075 =
						BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_arg1955z00_3076,
						((BgL_variablez00_bglt) BgL_integratorz00_2998));
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2997)))->
						BgL_exitz00) = ((BgL_nodez00_bglt) BgL_auxz00_4075), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_4082;

				{	/* Globalize/node.scm 464 */
					BgL_nodez00_bglt BgL_arg1956z00_3077;

					BgL_arg1956z00_3077 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2997)))->
						BgL_valuez00);
					BgL_auxz00_4082 =
						BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_arg1956z00_3077,
						((BgL_variablez00_bglt) BgL_integratorz00_2998));
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2997)))->
						BgL_valuez00) = ((BgL_nodez00_bglt) BgL_auxz00_4082), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2997));
		}

	}



/* &glo!-set-ex-it1395 */
	BgL_nodez00_bglt
		BGl_z62gloz12zd2setzd2exzd2it1395za2zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_2999, obj_t BgL_nodez00_3000, obj_t BgL_integratorz00_3001)
	{
		{	/* Globalize/node.scm 446 */
			{	/* Globalize/node.scm 448 */
				obj_t BgL_hdlgz00_3079;

				BgL_hdlgz00_3079 =
					(((BgL_sexitz00_bglt) COBJECT(
							((BgL_sexitz00_bglt)
								(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_localz00_bglt)
													(((BgL_varz00_bglt) COBJECT(
																(((BgL_setzd2exzd2itz00_bglt) COBJECT(
																			((BgL_setzd2exzd2itz00_bglt)
																				BgL_nodez00_3000)))->BgL_varz00)))->
														BgL_variablez00)))))->BgL_valuez00))))->
					BgL_handlerz00);
				{	/* Globalize/node.scm 453 */
					bool_t BgL_test2204z00_4099;

					{	/* Globalize/node.scm 453 */
						BgL_sfunz00_bglt BgL_oz00_3080;

						BgL_oz00_3080 =
							((BgL_sfunz00_bglt)
							(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt)
											((BgL_localz00_bglt) BgL_hdlgz00_3079))))->BgL_valuez00));
						{
							BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4104;

							{
								obj_t BgL_auxz00_4105;

								{	/* Globalize/node.scm 453 */
									BgL_objectz00_bglt BgL_tmpz00_4106;

									BgL_tmpz00_4106 = ((BgL_objectz00_bglt) BgL_oz00_3080);
									BgL_auxz00_4105 = BGL_OBJECT_WIDENING(BgL_tmpz00_4106);
								}
								BgL_auxz00_4104 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4105);
							}
							BgL_test2204z00_4099 =
								(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4104))->
								BgL_gzf3zf3);
						}
					}
					if (BgL_test2204z00_4099)
						{	/* Globalize/node.scm 454 */
							BgL_valuez00_bglt BgL_arg1946z00_3081;

							BgL_arg1946z00_3081 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt)
											((BgL_localz00_bglt)
												(((BgL_varz00_bglt) COBJECT(
															(((BgL_setzd2exzd2itz00_bglt) COBJECT(
																		((BgL_setzd2exzd2itz00_bglt)
																			BgL_nodez00_3000)))->BgL_varz00)))->
													BgL_variablez00)))))->BgL_valuez00);
							((((BgL_sexitz00_bglt) COBJECT(((BgL_sexitz00_bglt)
												BgL_arg1946z00_3081)))->BgL_detachedzf3zf3) =
								((bool_t) ((bool_t) 1)), BUNSPEC);
						}
					else
						{	/* Globalize/node.scm 453 */
							BFALSE;
						}
				}
				{
					BgL_nodez00_bglt BgL_auxz00_4119;

					{	/* Globalize/node.scm 455 */
						BgL_nodez00_bglt BgL_arg1951z00_3082;

						BgL_arg1951z00_3082 =
							(((BgL_setzd2exzd2itz00_bglt) COBJECT(
									((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_3000)))->
							BgL_bodyz00);
						BgL_auxz00_4119 =
							BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_arg1951z00_3082,
							((BgL_variablez00_bglt) BgL_integratorz00_3001));
					}
					((((BgL_setzd2exzd2itz00_bglt) COBJECT(
									((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_3000)))->
							BgL_bodyz00) = ((BgL_nodez00_bglt) BgL_auxz00_4119), BUNSPEC);
				}
				return
					((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_3000));
			}
		}

	}



/* &glo!-let-var1393 */
	BgL_nodez00_bglt BGl_z62gloz12zd2letzd2var1393z70zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3002, obj_t BgL_nodez00_3003, obj_t BgL_integratorz00_3004)
	{
		{	/* Globalize/node.scm 421 */
			{	/* Globalize/node.scm 423 */
				obj_t BgL_g1348z00_3084;

				BgL_g1348z00_3084 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_3003)))->BgL_bindingsz00);
				{
					obj_t BgL_l1346z00_3086;

					BgL_l1346z00_3086 = BgL_g1348z00_3084;
				BgL_zc3z04anonymousza31931ze3z87_3085:
					if (PAIRP(BgL_l1346z00_3086))
						{	/* Globalize/node.scm 423 */
							{	/* Globalize/node.scm 424 */
								obj_t BgL_bindingz00_3087;

								BgL_bindingz00_3087 = CAR(BgL_l1346z00_3086);
								{	/* Globalize/node.scm 424 */
									obj_t BgL_varz00_3088;
									obj_t BgL_valz00_3089;

									BgL_varz00_3088 = CAR(((obj_t) BgL_bindingz00_3087));
									BgL_valz00_3089 = CDR(((obj_t) BgL_bindingz00_3087));
									{	/* Globalize/node.scm 426 */
										BgL_nodez00_bglt BgL_arg1933z00_3090;

										BgL_arg1933z00_3090 =
											BGl_gloz12z12zzglobaliza7e_nodeza7(
											((BgL_nodez00_bglt) BgL_valz00_3089),
											((BgL_variablez00_bglt) BgL_integratorz00_3004));
										{	/* Globalize/node.scm 426 */
											obj_t BgL_auxz00_4142;
											obj_t BgL_tmpz00_4140;

											BgL_auxz00_4142 = ((obj_t) BgL_arg1933z00_3090);
											BgL_tmpz00_4140 = ((obj_t) BgL_bindingz00_3087);
											SET_CDR(BgL_tmpz00_4140, BgL_auxz00_4142);
										}
									}
									if (BGl_celledzf3zf3zzglobaliza7e_nodeza7(
											((BgL_variablez00_bglt) BgL_varz00_3088)))
										{	/* Globalize/node.scm 428 */
											BgL_localz00_bglt BgL_nvarz00_3091;

											BgL_nvarz00_3091 =
												BGl_cellzd2variablezd2zzglobaliza7e_nodeza7(
												((BgL_localz00_bglt) BgL_varz00_3088));
											((((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_localz00_bglt) BgL_varz00_3088))))->
													BgL_fastzd2alphazd2) =
												((obj_t) ((obj_t) BgL_nvarz00_3091)), BUNSPEC);
											{	/* Globalize/node.scm 431 */
												BgL_makezd2boxzd2_bglt BgL_arg1935z00_3092;

												{	/* Globalize/node.scm 431 */
													obj_t BgL_arg1936z00_3093;

													BgL_arg1936z00_3093 =
														CDR(((obj_t) BgL_bindingz00_3087));
													BgL_arg1935z00_3092 =
														BGl_azd2makezd2cellz00zzglobaliza7e_nodeza7(
														((BgL_nodez00_bglt) BgL_arg1936z00_3093),
														((BgL_variablez00_bglt) BgL_varz00_3088));
												}
												{	/* Globalize/node.scm 430 */
													obj_t BgL_auxz00_4161;
													obj_t BgL_tmpz00_4159;

													BgL_auxz00_4161 = ((obj_t) BgL_arg1935z00_3092);
													BgL_tmpz00_4159 = ((obj_t) BgL_bindingz00_3087);
													SET_CDR(BgL_tmpz00_4159, BgL_auxz00_4161);
												}
											}
										}
									else
										{	/* Globalize/node.scm 427 */
											BFALSE;
										}
								}
							}
							{
								obj_t BgL_l1346z00_4164;

								BgL_l1346z00_4164 = CDR(BgL_l1346z00_3086);
								BgL_l1346z00_3086 = BgL_l1346z00_4164;
								goto BgL_zc3z04anonymousza31931ze3z87_3085;
							}
						}
					else
						{	/* Globalize/node.scm 423 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_4166;

				{	/* Globalize/node.scm 433 */
					BgL_nodez00_bglt BgL_arg1938z00_3094;

					BgL_arg1938z00_3094 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_3003)))->BgL_bodyz00);
					BgL_auxz00_4166 =
						BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_arg1938z00_3094,
						((BgL_variablez00_bglt) BgL_integratorz00_3004));
				}
				((((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_3003)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_4166), BUNSPEC);
			}
			{	/* Globalize/node.scm 434 */
				obj_t BgL_g1351z00_3095;

				BgL_g1351z00_3095 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_3003)))->BgL_bindingsz00);
				{
					obj_t BgL_l1349z00_3097;

					BgL_l1349z00_3097 = BgL_g1351z00_3095;
				BgL_zc3z04anonymousza31939ze3z87_3096:
					if (PAIRP(BgL_l1349z00_3097))
						{	/* Globalize/node.scm 434 */
							{	/* Globalize/node.scm 435 */
								obj_t BgL_bindingz00_3098;

								BgL_bindingz00_3098 = CAR(BgL_l1349z00_3097);
								{	/* Globalize/node.scm 435 */
									obj_t BgL_varz00_3099;

									BgL_varz00_3099 = CAR(((obj_t) BgL_bindingz00_3098));
									if (BGl_celledzf3zf3zzglobaliza7e_nodeza7(
											((BgL_variablez00_bglt) BgL_varz00_3099)))
										{	/* Globalize/node.scm 437 */
											BgL_localz00_bglt BgL_nvarz00_3100;

											BgL_nvarz00_3100 =
												BGl_cellzd2variablezd2zzglobaliza7e_nodeza7(
												((BgL_localz00_bglt) BgL_varz00_3099));
											{	/* Globalize/node.scm 438 */
												obj_t BgL_arg1942z00_3101;

												BgL_arg1942z00_3101 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt) BgL_varz00_3099)))->
													BgL_fastzd2alphazd2);
												{	/* Globalize/node.scm 438 */
													obj_t BgL_tmpz00_4187;

													BgL_tmpz00_4187 = ((obj_t) BgL_bindingz00_3098);
													SET_CAR(BgL_tmpz00_4187, BgL_arg1942z00_3101);
												}
											}
											((((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_localz00_bglt) BgL_varz00_3099))))->
													BgL_fastzd2alphazd2) = ((obj_t) BUNSPEC), BUNSPEC);
										}
									else
										{	/* Globalize/node.scm 436 */
											BFALSE;
										}
								}
							}
							{
								obj_t BgL_l1349z00_4193;

								BgL_l1349z00_4193 = CDR(BgL_l1349z00_3097);
								BgL_l1349z00_3097 = BgL_l1349z00_4193;
								goto BgL_zc3z04anonymousza31939ze3z87_3096;
							}
						}
					else
						{	/* Globalize/node.scm 434 */
							((bool_t) 1);
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt) BgL_nodez00_3003));
		}

	}



/* &glo!-let-fun1391 */
	BgL_nodez00_bglt BGl_z62gloz12zd2letzd2fun1391z70zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3005, obj_t BgL_nodez00_3006, obj_t BgL_integratorz00_3007)
	{
		{	/* Globalize/node.scm 379 */
			{
				BgL_nodez00_bglt BgL_auxz00_4197;

				{	/* Globalize/node.scm 381 */
					BgL_nodez00_bglt BgL_arg1907z00_3103;

					BgL_arg1907z00_3103 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_3006)))->BgL_bodyz00);
					BgL_auxz00_4197 =
						BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_arg1907z00_3103,
						((BgL_variablez00_bglt) BgL_integratorz00_3007));
				}
				((((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_3006)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_4197), BUNSPEC);
			}
			{
				obj_t BgL_obindingsz00_3105;
				obj_t BgL_nbindingsz00_3106;
				obj_t BgL_ebindingsz00_3107;

				{	/* Globalize/node.scm 382 */
					obj_t BgL_arg1908z00_3118;

					BgL_arg1908z00_3118 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_3006)))->BgL_localsz00);
					{
						BgL_nodezf2effectzf2_bglt BgL_auxz00_4206;

						BgL_obindingsz00_3105 = BgL_arg1908z00_3118;
						BgL_nbindingsz00_3106 = BNIL;
						BgL_ebindingsz00_3107 = BNIL;
					BgL_liipz00_3104:
						if (NULLP(BgL_obindingsz00_3105))
							{	/* Globalize/node.scm 393 */
								((((BgL_letzd2funzd2_bglt) COBJECT(
												((BgL_letzd2funzd2_bglt) BgL_nodez00_3006)))->
										BgL_localsz00) = ((obj_t) BgL_nbindingsz00_3106), BUNSPEC);
								if (NULLP(BgL_ebindingsz00_3107))
									{	/* Globalize/node.scm 395 */
										BgL_auxz00_4206 =
											((BgL_nodezf2effectzf2_bglt)
											((BgL_letzd2funzd2_bglt) BgL_nodez00_3006));
									}
								else
									{	/* Globalize/node.scm 395 */
										BgL_auxz00_4206 =
											((BgL_nodezf2effectzf2_bglt)
											BGl_makezd2escapingzd2bindingsz00zzglobaliza7e_nodeza7
											(BgL_ebindingsz00_3107,
												((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt)
														BgL_nodez00_3006)),
												((BgL_variablez00_bglt) BgL_integratorz00_3007)));
									}
							}
						else
							{	/* Globalize/node.scm 398 */
								bool_t BgL_test2211z00_4220;

								if (
									(CAR(
											((obj_t) BgL_obindingsz00_3105)) ==
										BgL_integratorz00_3007))
									{	/* Globalize/node.scm 398 */
										BgL_test2211z00_4220 = ((bool_t) 0);
									}
								else
									{	/* Globalize/node.scm 399 */
										BgL_localz00_bglt BgL_oz00_3108;

										BgL_oz00_3108 =
											((BgL_localz00_bglt)
											CAR(((obj_t) BgL_obindingsz00_3105)));
										{
											BgL_localzf2ginfozf2_bglt BgL_auxz00_4228;

											{
												obj_t BgL_auxz00_4229;

												{	/* Globalize/node.scm 399 */
													BgL_objectz00_bglt BgL_tmpz00_4230;

													BgL_tmpz00_4230 =
														((BgL_objectz00_bglt) BgL_oz00_3108);
													BgL_auxz00_4229 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_4230);
												}
												BgL_auxz00_4228 =
													((BgL_localzf2ginfozf2_bglt) BgL_auxz00_4229);
											}
											BgL_test2211z00_4220 =
												(((BgL_localzf2ginfozf2_bglt)
													COBJECT(BgL_auxz00_4228))->BgL_escapezf3zf3);
										}
									}
								if (BgL_test2211z00_4220)
									{	/* Globalize/node.scm 400 */
										obj_t BgL_arg1918z00_3109;
										obj_t BgL_arg1919z00_3110;

										BgL_arg1918z00_3109 = CDR(((obj_t) BgL_obindingsz00_3105));
										{	/* Globalize/node.scm 402 */
											obj_t BgL_arg1920z00_3111;

											BgL_arg1920z00_3111 =
												CAR(((obj_t) BgL_obindingsz00_3105));
											BgL_arg1919z00_3110 =
												MAKE_YOUNG_PAIR(BgL_arg1920z00_3111,
												BgL_ebindingsz00_3107);
										}
										{
											obj_t BgL_ebindingsz00_4241;
											obj_t BgL_obindingsz00_4240;

											BgL_obindingsz00_4240 = BgL_arg1918z00_3109;
											BgL_ebindingsz00_4241 = BgL_arg1919z00_3110;
											BgL_ebindingsz00_3107 = BgL_ebindingsz00_4241;
											BgL_obindingsz00_3105 = BgL_obindingsz00_4240;
											goto BgL_liipz00_3104;
										}
									}
								else
									{	/* Globalize/node.scm 398 */
										if (
											(CAR(
													((obj_t) BgL_obindingsz00_3105)) ==
												BgL_integratorz00_3007))
											{	/* Globalize/node.scm 403 */
												{	/* Globalize/node.scm 407 */
													obj_t BgL_arg1923z00_3112;

													{	/* Globalize/node.scm 407 */
														obj_t BgL_arg1924z00_3113;

														BgL_arg1924z00_3113 =
															CAR(((obj_t) BgL_obindingsz00_3105));
														BgL_arg1923z00_3112 =
															BGl_shapez00zztools_shapez00(BgL_arg1924z00_3113);
													}
													BGl_internalzd2errorzd2zztools_errorz00(CNST_TABLE_REF
														(((long) 8)),
														BGl_string2140z00zzglobaliza7e_nodeza7,
														BgL_arg1923z00_3112);
												}
												{	/* Globalize/node.scm 408 */
													obj_t BgL_arg1925z00_3114;

													BgL_arg1925z00_3114 =
														CDR(((obj_t) BgL_obindingsz00_3105));
													{
														obj_t BgL_obindingsz00_4253;

														BgL_obindingsz00_4253 = BgL_arg1925z00_3114;
														BgL_obindingsz00_3105 = BgL_obindingsz00_4253;
														goto BgL_liipz00_3104;
													}
												}
											}
										else
											{	/* Globalize/node.scm 412 */
												obj_t BgL_localz00_3115;

												BgL_localz00_3115 =
													CAR(((obj_t) BgL_obindingsz00_3105));
												BGl_globaliza7ezd2localzd2funz12zb5zzglobaliza7e_nodeza7
													(((BgL_localz00_bglt) BgL_localz00_3115),
													((BgL_variablez00_bglt) BgL_integratorz00_3007));
												{	/* Globalize/node.scm 414 */
													obj_t BgL_arg1926z00_3116;
													obj_t BgL_arg1927z00_3117;

													BgL_arg1926z00_3116 =
														CDR(((obj_t) BgL_obindingsz00_3105));
													BgL_arg1927z00_3117 =
														MAKE_YOUNG_PAIR(BgL_localz00_3115,
														BgL_nbindingsz00_3106);
													{
														obj_t BgL_nbindingsz00_4263;
														obj_t BgL_obindingsz00_4262;

														BgL_obindingsz00_4262 = BgL_arg1926z00_3116;
														BgL_nbindingsz00_4263 = BgL_arg1927z00_3117;
														BgL_nbindingsz00_3106 = BgL_nbindingsz00_4263;
														BgL_obindingsz00_3105 = BgL_obindingsz00_4262;
														goto BgL_liipz00_3104;
													}
												}
											}
									}
							}
						return ((BgL_nodez00_bglt) BgL_auxz00_4206);
					}
				}
			}
		}

	}



/* &glo!-switch1389 */
	BgL_nodez00_bglt BGl_z62gloz12zd2switch1389za2zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3008, obj_t BgL_nodez00_3009, obj_t BgL_integratorz00_3010)
	{
		{	/* Globalize/node.scm 368 */
			{
				BgL_nodez00_bglt BgL_auxz00_4265;

				{	/* Globalize/node.scm 370 */
					BgL_nodez00_bglt BgL_arg1901z00_3120;

					BgL_arg1901z00_3120 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_3009)))->BgL_testz00);
					BgL_auxz00_4265 =
						BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_arg1901z00_3120,
						((BgL_variablez00_bglt) BgL_integratorz00_3010));
				}
				((((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_3009)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_4265), BUNSPEC);
			}
			{	/* Globalize/node.scm 371 */
				obj_t BgL_g1345z00_3121;

				BgL_g1345z00_3121 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_3009)))->BgL_clausesz00);
				{
					obj_t BgL_l1343z00_3123;

					BgL_l1343z00_3123 = BgL_g1345z00_3121;
				BgL_zc3z04anonymousza31902ze3z87_3122:
					if (PAIRP(BgL_l1343z00_3123))
						{	/* Globalize/node.scm 371 */
							{	/* Globalize/node.scm 372 */
								obj_t BgL_clausez00_3124;

								BgL_clausez00_3124 = CAR(BgL_l1343z00_3123);
								{	/* Globalize/node.scm 372 */
									BgL_nodez00_bglt BgL_arg1904z00_3125;

									{	/* Globalize/node.scm 372 */
										obj_t BgL_arg1905z00_3126;

										BgL_arg1905z00_3126 = CDR(((obj_t) BgL_clausez00_3124));
										BgL_arg1904z00_3125 =
											BGl_gloz12z12zzglobaliza7e_nodeza7(
											((BgL_nodez00_bglt) BgL_arg1905z00_3126),
											((BgL_variablez00_bglt) BgL_integratorz00_3010));
									}
									{	/* Globalize/node.scm 372 */
										obj_t BgL_auxz00_4284;
										obj_t BgL_tmpz00_4282;

										BgL_auxz00_4284 = ((obj_t) BgL_arg1904z00_3125);
										BgL_tmpz00_4282 = ((obj_t) BgL_clausez00_3124);
										SET_CDR(BgL_tmpz00_4282, BgL_auxz00_4284);
									}
								}
							}
							{
								obj_t BgL_l1343z00_4287;

								BgL_l1343z00_4287 = CDR(BgL_l1343z00_3123);
								BgL_l1343z00_3123 = BgL_l1343z00_4287;
								goto BgL_zc3z04anonymousza31902ze3z87_3122;
							}
						}
					else
						{	/* Globalize/node.scm 371 */
							((bool_t) 1);
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_3009));
		}

	}



/* &glo!-fail1387 */
	BgL_nodez00_bglt BGl_z62gloz12zd2fail1387za2zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3011, obj_t BgL_nodez00_3012, obj_t BgL_integratorz00_3013)
	{
		{	/* Globalize/node.scm 358 */
			{
				BgL_nodez00_bglt BgL_auxz00_4291;

				{	/* Globalize/node.scm 360 */
					BgL_nodez00_bglt BgL_arg1896z00_3128;

					BgL_arg1896z00_3128 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_3012)))->BgL_procz00);
					BgL_auxz00_4291 =
						BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_arg1896z00_3128,
						((BgL_variablez00_bglt) BgL_integratorz00_3013));
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_3012)))->BgL_procz00) =
					((BgL_nodez00_bglt) BgL_auxz00_4291), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_4298;

				{	/* Globalize/node.scm 361 */
					BgL_nodez00_bglt BgL_arg1897z00_3129;

					BgL_arg1897z00_3129 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_3012)))->BgL_msgz00);
					BgL_auxz00_4298 =
						BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_arg1897z00_3129,
						((BgL_variablez00_bglt) BgL_integratorz00_3013));
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_3012)))->BgL_msgz00) =
					((BgL_nodez00_bglt) BgL_auxz00_4298), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_4305;

				{	/* Globalize/node.scm 362 */
					BgL_nodez00_bglt BgL_arg1898z00_3130;

					BgL_arg1898z00_3130 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_3012)))->BgL_objz00);
					BgL_auxz00_4305 =
						BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_arg1898z00_3130,
						((BgL_variablez00_bglt) BgL_integratorz00_3013));
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_3012)))->BgL_objz00) =
					((BgL_nodez00_bglt) BgL_auxz00_4305), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_failz00_bglt) BgL_nodez00_3012));
		}

	}



/* &glo!-conditional1385 */
	BgL_nodez00_bglt BGl_z62gloz12zd2conditional1385za2zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3014, obj_t BgL_nodez00_3015, obj_t BgL_integratorz00_3016)
	{
		{	/* Globalize/node.scm 348 */
			{
				BgL_nodez00_bglt BgL_auxz00_4314;

				{	/* Globalize/node.scm 350 */
					BgL_nodez00_bglt BgL_arg1892z00_3132;

					BgL_arg1892z00_3132 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_3015)))->BgL_testz00);
					BgL_auxz00_4314 =
						BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_arg1892z00_3132,
						((BgL_variablez00_bglt) BgL_integratorz00_3016));
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_3015)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_4314), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_4321;

				{	/* Globalize/node.scm 351 */
					BgL_nodez00_bglt BgL_arg1893z00_3133;

					BgL_arg1893z00_3133 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_3015)))->BgL_truez00);
					BgL_auxz00_4321 =
						BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_arg1893z00_3133,
						((BgL_variablez00_bglt) BgL_integratorz00_3016));
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_3015)))->BgL_truez00) =
					((BgL_nodez00_bglt) BgL_auxz00_4321), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_4328;

				{	/* Globalize/node.scm 352 */
					BgL_nodez00_bglt BgL_arg1895z00_3134;

					BgL_arg1895z00_3134 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_3015)))->BgL_falsez00);
					BgL_auxz00_4328 =
						BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_arg1895z00_3134,
						((BgL_variablez00_bglt) BgL_integratorz00_3016));
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_3015)))->BgL_falsez00) =
					((BgL_nodez00_bglt) BgL_auxz00_4328), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt) BgL_nodez00_3015));
		}

	}



/* &glo!-setq1383 */
	BgL_nodez00_bglt BGl_z62gloz12zd2setq1383za2zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3017, obj_t BgL_nodez00_3018, obj_t BgL_integratorz00_3019)
	{
		{	/* Globalize/node.scm 310 */
			{
				BgL_nodez00_bglt BgL_auxz00_4337;

				{	/* Globalize/node.scm 312 */
					BgL_nodez00_bglt BgL_arg1871z00_3136;

					BgL_arg1871z00_3136 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_3018)))->BgL_valuez00);
					BgL_auxz00_4337 =
						BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_arg1871z00_3136,
						((BgL_variablez00_bglt) BgL_integratorz00_3019));
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_3018)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_4337), BUNSPEC);
			}
			{	/* Globalize/node.scm 313 */
				BgL_variablez00_bglt BgL_varz00_3137;

				BgL_varz00_3137 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_setqz00_bglt) COBJECT(
										((BgL_setqz00_bglt) BgL_nodez00_3018)))->BgL_varz00)))->
					BgL_variablez00);
				{	/* Globalize/node.scm 313 */
					BgL_typez00_bglt BgL_vtypez00_3138;

					BgL_vtypez00_3138 =
						(((BgL_variablez00_bglt) COBJECT(BgL_varz00_3137))->BgL_typez00);
					{	/* Globalize/node.scm 314 */

						{	/* Globalize/node.scm 315 */
							obj_t BgL_g1148z00_3139;

							BgL_g1148z00_3139 =
								(((BgL_variablez00_bglt) COBJECT(BgL_varz00_3137))->
								BgL_fastzd2alphazd2);
							{
								BgL_variablez00_bglt BgL_varz00_3141;
								obj_t BgL_alphaz00_3142;

								BgL_varz00_3141 = BgL_varz00_3137;
								BgL_alphaz00_3142 = BgL_g1148z00_3139;
							BgL_loopz00_3140:
								if (BGl_isazf3zf3zz__objectz00(BgL_alphaz00_3142,
										BGl_localz00zzast_varz00))
									{	/* Globalize/node.scm 317 */
										{	/* Globalize/node.scm 319 */
											BgL_varz00_bglt BgL_arg1874z00_3143;

											BgL_arg1874z00_3143 =
												(((BgL_setqz00_bglt) COBJECT(
														((BgL_setqz00_bglt) BgL_nodez00_3018)))->
												BgL_varz00);
											((((BgL_varz00_bglt) COBJECT(BgL_arg1874z00_3143))->
													BgL_variablez00) =
												((BgL_variablez00_bglt) ((BgL_variablez00_bglt) (
															(BgL_localz00_bglt) BgL_alphaz00_3142))),
												BUNSPEC);
										}
										{	/* Globalize/node.scm 320 */
											obj_t BgL_arg1876z00_3144;

											BgL_arg1876z00_3144 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt) BgL_alphaz00_3142))))->
												BgL_fastzd2alphazd2);
											{
												obj_t BgL_alphaz00_4362;
												BgL_variablez00_bglt BgL_varz00_4359;

												BgL_varz00_4359 =
													((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_alphaz00_3142));
												BgL_alphaz00_4362 = BgL_arg1876z00_3144;
												BgL_alphaz00_3142 = BgL_alphaz00_4362;
												BgL_varz00_3141 = BgL_varz00_4359;
												goto BgL_loopz00_3140;
											}
										}
									}
								else
									{	/* Globalize/node.scm 321 */
										BgL_variablez00_bglt BgL_varz00_3145;

										BgL_varz00_3145 =
											(((BgL_varz00_bglt) COBJECT(
													(((BgL_setqz00_bglt) COBJECT(
																((BgL_setqz00_bglt) BgL_nodez00_3018)))->
														BgL_varz00)))->BgL_variablez00);
										{	/* Globalize/node.scm 322 */
											bool_t BgL_test2216z00_4366;

											{	/* Globalize/node.scm 322 */
												bool_t BgL_test2217z00_4367;

												{	/* Globalize/node.scm 322 */
													bool_t BgL_res2102z00_3146;

													BgL_res2102z00_3146 =
														BGl_isazf3zf3zz__objectz00(
														((obj_t) BgL_varz00_3145),
														BGl_localz00zzast_varz00);
													BgL_test2217z00_4367 = BgL_res2102z00_3146;
												}
												if (BgL_test2217z00_4367)
													{	/* Globalize/node.scm 322 */
														BgL_test2216z00_4366 =
															BGl_celledzf3zf3zzglobaliza7e_nodeza7
															(BgL_varz00_3145);
													}
												else
													{	/* Globalize/node.scm 322 */
														BgL_test2216z00_4366 = ((bool_t) 0);
													}
											}
											if (BgL_test2216z00_4366)
												{	/* Globalize/node.scm 323 */
													BgL_localz00_bglt BgL_azd2varzd2_3147;
													obj_t BgL_locz00_3148;

													BgL_azd2varzd2_3147 =
														BGl_makezd2localzd2svarz00zzast_localz00
														(CNST_TABLE_REF(((long) 9)),
														((BgL_typez00_bglt)
															BGl_za2objza2z00zztype_cachez00));
													BgL_locz00_3148 =
														(((BgL_nodez00_bglt)
															COBJECT(((BgL_nodez00_bglt) ((BgL_setqz00_bglt)
																		BgL_nodez00_3018))))->BgL_locz00);
													{	/* Globalize/node.scm 325 */
														obj_t BgL_vz00_3149;

														BgL_vz00_3149 = CNST_TABLE_REF(((long) 0));
														((((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_localz00_bglt) BgL_varz00_3145))))->
																BgL_accessz00) =
															((obj_t) BgL_vz00_3149), BUNSPEC);
													}
													{	/* Globalize/node.scm 326 */
														bool_t BgL_arg1879z00_3150;

														BgL_arg1879z00_3150 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt) BgL_varz00_3145))))->
															BgL_userzf3zf3);
														((((BgL_variablez00_bglt)
																	COBJECT(((BgL_variablez00_bglt)
																			BgL_azd2varzd2_3147)))->BgL_userzf3zf3) =
															((bool_t) BgL_arg1879z00_3150), BUNSPEC);
													}
													{	/* Globalize/node.scm 327 */
														BgL_varz00_bglt BgL_arg1881z00_3151;

														BgL_arg1881z00_3151 =
															(((BgL_setqz00_bglt) COBJECT(
																	((BgL_setqz00_bglt) BgL_nodez00_3018)))->
															BgL_varz00);
														{	/* Globalize/node.scm 327 */
															BgL_typez00_bglt BgL_vz00_3152;

															BgL_vz00_3152 =
																((BgL_typez00_bglt)
																BGl_za2objza2z00zztype_cachez00);
															((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																				BgL_arg1881z00_3151)))->BgL_typez00) =
																((BgL_typez00_bglt) BgL_vz00_3152), BUNSPEC);
													}}
													{	/* Globalize/node.scm 328 */
														BgL_svarz00_bglt BgL_tmp1149z00_3153;

														BgL_tmp1149z00_3153 =
															((BgL_svarz00_bglt)
															(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			BgL_azd2varzd2_3147)))->BgL_valuez00));
														{	/* Globalize/node.scm 328 */
															BgL_svarzf2ginfozf2_bglt BgL_wide1151z00_3154;

															BgL_wide1151z00_3154 =
																((BgL_svarzf2ginfozf2_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_svarzf2ginfozf2_bgl))));
															{	/* Globalize/node.scm 328 */
																obj_t BgL_auxz00_4398;
																BgL_objectz00_bglt BgL_tmpz00_4395;

																BgL_auxz00_4398 =
																	((obj_t) BgL_wide1151z00_3154);
																BgL_tmpz00_4395 =
																	((BgL_objectz00_bglt)
																	((BgL_svarz00_bglt) BgL_tmp1149z00_3153));
																BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4395,
																	BgL_auxz00_4398);
															}
															((BgL_objectz00_bglt)
																((BgL_svarz00_bglt) BgL_tmp1149z00_3153));
															{	/* Globalize/node.scm 328 */
																long BgL_arg1882z00_3155;

																{	/* Globalize/node.scm 328 */
																	long BgL_res2103z00_3156;

																	BgL_res2103z00_3156 =
																		BGL_CLASS_INDEX
																		(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
																	BgL_arg1882z00_3155 = BgL_res2103z00_3156;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1149z00_3153)),
																	BgL_arg1882z00_3155);
															}
															((BgL_svarz00_bglt)
																((BgL_svarz00_bglt) BgL_tmp1149z00_3153));
														}
														{
															BgL_svarzf2ginfozf2_bglt BgL_auxz00_4409;

															{
																obj_t BgL_auxz00_4410;

																{	/* Globalize/node.scm 329 */
																	BgL_objectz00_bglt BgL_tmpz00_4411;

																	BgL_tmpz00_4411 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1149z00_3153));
																	BgL_auxz00_4410 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_4411);
																}
																BgL_auxz00_4409 =
																	((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_4410);
															}
															((((BgL_svarzf2ginfozf2_bglt)
																		COBJECT(BgL_auxz00_4409))->
																	BgL_kapturedzf3zf3) =
																((bool_t) ((bool_t) 0)), BUNSPEC);
														}
														{
															BgL_svarzf2ginfozf2_bglt BgL_auxz00_4417;

															{
																obj_t BgL_auxz00_4418;

																{	/* Globalize/node.scm 329 */
																	BgL_objectz00_bglt BgL_tmpz00_4419;

																	BgL_tmpz00_4419 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1149z00_3153));
																	BgL_auxz00_4418 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_4419);
																}
																BgL_auxz00_4417 =
																	((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_4418);
															}
															((((BgL_svarzf2ginfozf2_bglt)
																		COBJECT(BgL_auxz00_4417))->
																	BgL_freezd2markzd2) =
																((long) ((long) -10)), BUNSPEC);
														}
														{
															BgL_svarzf2ginfozf2_bglt BgL_auxz00_4425;

															{
																obj_t BgL_auxz00_4426;

																{	/* Globalize/node.scm 329 */
																	BgL_objectz00_bglt BgL_tmpz00_4427;

																	BgL_tmpz00_4427 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1149z00_3153));
																	BgL_auxz00_4426 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_4427);
																}
																BgL_auxz00_4425 =
																	((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_4426);
															}
															((((BgL_svarzf2ginfozf2_bglt)
																		COBJECT(BgL_auxz00_4425))->BgL_markz00) =
																((long) ((long) -10)), BUNSPEC);
														}
														{
															BgL_svarzf2ginfozf2_bglt BgL_auxz00_4433;

															{
																obj_t BgL_auxz00_4434;

																{	/* Globalize/node.scm 329 */
																	BgL_objectz00_bglt BgL_tmpz00_4435;

																	BgL_tmpz00_4435 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1149z00_3153));
																	BgL_auxz00_4434 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_4435);
																}
																BgL_auxz00_4433 =
																	((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_4434);
															}
															((((BgL_svarzf2ginfozf2_bglt)
																		COBJECT(BgL_auxz00_4433))->
																	BgL_celledzf3zf3) =
																((bool_t) ((bool_t) 0)), BUNSPEC);
														}
														{
															BgL_svarzf2ginfozf2_bglt BgL_auxz00_4441;

															{
																obj_t BgL_auxz00_4442;

																{	/* Globalize/node.scm 329 */
																	BgL_objectz00_bglt BgL_tmpz00_4443;

																	BgL_tmpz00_4443 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1149z00_3153));
																	BgL_auxz00_4442 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_4443);
																}
																BgL_auxz00_4441 =
																	((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_4442);
															}
															((((BgL_svarzf2ginfozf2_bglt)
																		COBJECT(BgL_auxz00_4441))->
																	BgL_stackablez00) =
																((bool_t) ((bool_t) 1)), BUNSPEC);
														}
														((BgL_svarz00_bglt) BgL_tmp1149z00_3153);
													}
													{	/* Globalize/node.scm 330 */
														BgL_letzd2varzd2_bglt BgL_new1154z00_3157;

														{	/* Globalize/node.scm 331 */
															BgL_letzd2varzd2_bglt BgL_new1153z00_3158;

															BgL_new1153z00_3158 =
																((BgL_letzd2varzd2_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_letzd2varzd2_bgl))));
															{	/* Globalize/node.scm 331 */
																long BgL_arg1888z00_3159;

																{	/* Globalize/node.scm 331 */
																	long BgL_res2104z00_3160;

																	BgL_res2104z00_3160 =
																		BGL_CLASS_INDEX
																		(BGl_letzd2varzd2zzast_nodez00);
																	BgL_arg1888z00_3159 = BgL_res2104z00_3160;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1153z00_3158),
																	BgL_arg1888z00_3159);
															}
															{	/* Globalize/node.scm 331 */
																BgL_objectz00_bglt BgL_tmpz00_4454;

																BgL_tmpz00_4454 =
																	((BgL_objectz00_bglt) BgL_new1153z00_3158);
																BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4454,
																	BFALSE);
															}
															((BgL_objectz00_bglt) BgL_new1153z00_3158);
															BgL_new1154z00_3157 = BgL_new1153z00_3158;
														}
														((((BgL_nodez00_bglt) COBJECT(
																		((BgL_nodez00_bglt) BgL_new1154z00_3157)))->
																BgL_locz00) =
															((obj_t) BgL_locz00_3148), BUNSPEC);
														((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																			BgL_new1154z00_3157)))->BgL_typez00) =
															((BgL_typez00_bglt) ((BgL_typez00_bglt)
																	BGl_za2unspecza2z00zztype_cachez00)),
															BUNSPEC);
														((((BgL_nodezf2effectzf2_bglt)
																	COBJECT(((BgL_nodezf2effectzf2_bglt)
																			BgL_new1154z00_3157)))->
																BgL_sidezd2effectzd2) =
															((obj_t) BUNSPEC), BUNSPEC);
														((((BgL_nodezf2effectzf2_bglt)
																	COBJECT(((BgL_nodezf2effectzf2_bglt)
																			BgL_new1154z00_3157)))->BgL_keyz00) =
															((obj_t) BINT(((long) -1))), BUNSPEC);
														{
															obj_t BgL_auxz00_4468;

															{	/* Globalize/node.scm 333 */
																obj_t BgL_arg1883z00_3161;

																{	/* Globalize/node.scm 333 */
																	BgL_nodez00_bglt BgL_arg1885z00_3162;

																	BgL_arg1885z00_3162 =
																		(((BgL_setqz00_bglt) COBJECT(
																				((BgL_setqz00_bglt)
																					BgL_nodez00_3018)))->BgL_valuez00);
																	BgL_arg1883z00_3161 =
																		MAKE_YOUNG_PAIR(((obj_t)
																			BgL_azd2varzd2_3147),
																		((obj_t) BgL_arg1885z00_3162));
																}
																{	/* Globalize/node.scm 333 */
																	obj_t BgL_list1884z00_3163;

																	BgL_list1884z00_3163 =
																		MAKE_YOUNG_PAIR(BgL_arg1883z00_3161, BNIL);
																	BgL_auxz00_4468 = BgL_list1884z00_3163;
															}}
															((((BgL_letzd2varzd2_bglt)
																		COBJECT(BgL_new1154z00_3157))->
																	BgL_bindingsz00) =
																((obj_t) BgL_auxz00_4468), BUNSPEC);
														}
														{
															BgL_nodez00_bglt BgL_auxz00_4476;

															{	/* Globalize/node.scm 334 */
																BgL_boxzd2setz12zc0_bglt BgL_new1157z00_3164;

																{	/* Globalize/node.scm 335 */
																	BgL_boxzd2setz12zc0_bglt BgL_new1156z00_3165;

																	BgL_new1156z00_3165 =
																		((BgL_boxzd2setz12zc0_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_boxzd2setz12zc0_bgl))));
																	{	/* Globalize/node.scm 335 */
																		long BgL_arg1887z00_3166;

																		{	/* Globalize/node.scm 335 */
																			long BgL_res2106z00_3167;

																			{	/* Globalize/node.scm 335 */
																				obj_t BgL_classz00_3168;

																				BgL_classz00_3168 =
																					BGl_boxzd2setz12zc0zzast_nodez00;
																				BgL_res2106z00_3167 =
																					BGL_CLASS_INDEX(BgL_classz00_3168);
																			}
																			BgL_arg1887z00_3166 = BgL_res2106z00_3167;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1156z00_3165),
																			BgL_arg1887z00_3166);
																	}
																	{	/* Globalize/node.scm 335 */
																		BgL_objectz00_bglt BgL_tmpz00_4481;

																		BgL_tmpz00_4481 =
																			((BgL_objectz00_bglt)
																			BgL_new1156z00_3165);
																		BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4481,
																			BFALSE);
																	}
																	((BgL_objectz00_bglt) BgL_new1156z00_3165);
																	BgL_new1157z00_3164 = BgL_new1156z00_3165;
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1157z00_3164)))->BgL_locz00) =
																	((obj_t) BgL_locz00_3148), BUNSPEC);
																((((BgL_nodez00_bglt)
																			COBJECT(((BgL_nodez00_bglt)
																					BgL_new1157z00_3164)))->BgL_typez00) =
																	((BgL_typez00_bglt) ((BgL_typez00_bglt)
																			BGl_za2unspecza2z00zztype_cachez00)),
																	BUNSPEC);
																((((BgL_boxzd2setz12zc0_bglt)
																			COBJECT(BgL_new1157z00_3164))->
																		BgL_varz00) =
																	((BgL_varz00_bglt) (((BgL_setqz00_bglt)
																				COBJECT(((BgL_setqz00_bglt)
																						BgL_nodez00_3018)))->BgL_varz00)),
																	BUNSPEC);
																{
																	BgL_nodez00_bglt BgL_auxz00_4493;

																	{	/* Globalize/node.scm 339 */
																		BgL_varz00_bglt BgL_new1159z00_3169;

																		{	/* Globalize/node.scm 340 */
																			BgL_varz00_bglt BgL_new1158z00_3170;

																			BgL_new1158z00_3170 =
																				((BgL_varz00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_varz00_bgl))));
																			{	/* Globalize/node.scm 340 */
																				long BgL_arg1886z00_3171;

																				{	/* Globalize/node.scm 340 */
																					long BgL_res2107z00_3172;

																					{	/* Globalize/node.scm 340 */
																						obj_t BgL_classz00_3173;

																						BgL_classz00_3173 =
																							BGl_varz00zzast_nodez00;
																						BgL_res2107z00_3172 =
																							BGL_CLASS_INDEX
																							(BgL_classz00_3173);
																					}
																					BgL_arg1886z00_3171 =
																						BgL_res2107z00_3172;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1158z00_3170),
																					BgL_arg1886z00_3171);
																			}
																			BgL_new1159z00_3169 = BgL_new1158z00_3170;
																		}
																		((((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							BgL_new1159z00_3169)))->
																				BgL_locz00) =
																			((obj_t) BgL_locz00_3148), BUNSPEC);
																		((((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt)
																							BgL_new1159z00_3169)))->
																				BgL_typez00) =
																			((BgL_typez00_bglt) ((
																						(BgL_variablez00_bglt)
																						COBJECT(((BgL_variablez00_bglt)
																								BgL_azd2varzd2_3147)))->
																					BgL_typez00)), BUNSPEC);
																		((((BgL_varz00_bglt)
																					COBJECT(BgL_new1159z00_3169))->
																				BgL_variablez00) =
																			((BgL_variablez00_bglt) (
																					(BgL_variablez00_bglt)
																					BgL_azd2varzd2_3147)), BUNSPEC);
																		BgL_auxz00_4493 =
																			((BgL_nodez00_bglt) BgL_new1159z00_3169);
																	}
																	((((BgL_boxzd2setz12zc0_bglt)
																				COBJECT(BgL_new1157z00_3164))->
																			BgL_valuez00) =
																		((BgL_nodez00_bglt) BgL_auxz00_4493),
																		BUNSPEC);
																}
																((((BgL_boxzd2setz12zc0_bglt)
																			COBJECT(BgL_new1157z00_3164))->
																		BgL_vtypez00) =
																	((BgL_typez00_bglt)
																		BGl_getzd2bigloozd2definedzd2typezd2zztype_cachez00
																		(BgL_vtypez00_3138)), BUNSPEC);
																BgL_auxz00_4476 =
																	((BgL_nodez00_bglt) BgL_new1157z00_3164);
															}
															((((BgL_letzd2varzd2_bglt)
																		COBJECT(BgL_new1154z00_3157))->
																	BgL_bodyz00) =
																((BgL_nodez00_bglt) BgL_auxz00_4476), BUNSPEC);
														}
														((((BgL_letzd2varzd2_bglt)
																	COBJECT(BgL_new1154z00_3157))->
																BgL_removablezf3zf3) =
															((bool_t) ((bool_t) 1)), BUNSPEC);
														return ((BgL_nodez00_bglt) BgL_new1154z00_3157);
													}
												}
											else
												{	/* Globalize/node.scm 322 */
													return
														((BgL_nodez00_bglt)
														((BgL_setqz00_bglt) BgL_nodez00_3018));
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



/* &glo!-cast1381 */
	BgL_nodez00_bglt BGl_z62gloz12zd2cast1381za2zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3020, obj_t BgL_nodez00_3021, obj_t BgL_integratorz00_3022)
	{
		{	/* Globalize/node.scm 302 */
			{	/* Globalize/node.scm 304 */
				BgL_nodez00_bglt BgL_arg1870z00_3175;

				BgL_arg1870z00_3175 =
					(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_3021)))->BgL_argz00);
				BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_arg1870z00_3175,
					((BgL_variablez00_bglt) BgL_integratorz00_3022));
			}
			return ((BgL_nodez00_bglt) ((BgL_castz00_bglt) BgL_nodez00_3021));
		}

	}



/* &glo!-extern1379 */
	BgL_nodez00_bglt BGl_z62gloz12zd2extern1379za2zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3023, obj_t BgL_nodez00_3024, obj_t BgL_integratorz00_3025)
	{
		{	/* Globalize/node.scm 294 */
			BGl_gloza2z12zb0zzglobaliza7e_nodeza7(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_3024)))->BgL_exprza2za2),
				BgL_integratorz00_3025);
			return ((BgL_nodez00_bglt) ((BgL_externz00_bglt) BgL_nodez00_3024));
		}

	}



/* &glo!-funcall1377 */
	BgL_nodez00_bglt BGl_z62gloz12zd2funcall1377za2zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3026, obj_t BgL_nodez00_3027, obj_t BgL_integratorz00_3028)
	{
		{	/* Globalize/node.scm 285 */
			{
				BgL_nodez00_bglt BgL_auxz00_4527;

				{	/* Globalize/node.scm 287 */
					BgL_nodez00_bglt BgL_arg1865z00_3178;

					BgL_arg1865z00_3178 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_3027)))->BgL_funz00);
					BgL_auxz00_4527 =
						BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_arg1865z00_3178,
						((BgL_variablez00_bglt) BgL_integratorz00_3028));
				}
				((((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_3027)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_4527), BUNSPEC);
			}
			BGl_gloza2z12zb0zzglobaliza7e_nodeza7(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_3027)))->BgL_argsz00),
				BgL_integratorz00_3028);
			return ((BgL_nodez00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_3027));
		}

	}



/* &glo!-app-ly1375 */
	BgL_nodez00_bglt BGl_z62gloz12zd2appzd2ly1375z70zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3029, obj_t BgL_nodez00_3030, obj_t BgL_integratorz00_3031)
	{
		{	/* Globalize/node.scm 276 */
			{
				BgL_nodez00_bglt BgL_auxz00_4539;

				{	/* Globalize/node.scm 278 */
					BgL_nodez00_bglt BgL_arg1862z00_3180;

					BgL_arg1862z00_3180 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_3030)))->BgL_funz00);
					BgL_auxz00_4539 =
						BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_arg1862z00_3180,
						((BgL_variablez00_bglt) BgL_integratorz00_3031));
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_3030)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_4539), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_4546;

				{	/* Globalize/node.scm 279 */
					BgL_nodez00_bglt BgL_arg1863z00_3181;

					BgL_arg1863z00_3181 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_3030)))->BgL_argz00);
					BgL_auxz00_4546 =
						BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_arg1863z00_3181,
						((BgL_variablez00_bglt) BgL_integratorz00_3031));
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_3030)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_4546), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_3030));
		}

	}



/* &glo!-app1372 */
	BgL_nodez00_bglt BGl_z62gloz12zd2app1372za2zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3032, obj_t BgL_nodez00_3033, obj_t BgL_integratorz00_3034)
	{
		{	/* Globalize/node.scm 211 */
			{	/* Globalize/node.scm 213 */
				BgL_variablez00_bglt BgL_funz00_3183;

				BgL_funz00_3183 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt) BgL_nodez00_3033)))->BgL_funz00)))->
					BgL_variablez00);
				{	/* Globalize/node.scm 213 */
					BgL_valuez00_bglt BgL_infoz00_3184;

					BgL_infoz00_3184 =
						(((BgL_variablez00_bglt) COBJECT(BgL_funz00_3183))->BgL_valuez00);
					{	/* Globalize/node.scm 214 */

						{	/* Globalize/node.scm 223 */
							bool_t BgL_test2218z00_4559;

							{	/* Globalize/node.scm 223 */
								bool_t BgL_test2219z00_4560;

								{	/* Globalize/node.scm 223 */
									bool_t BgL_res2093z00_3185;

									BgL_res2093z00_3185 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_funz00_3183), BGl_localz00zzast_varz00);
									BgL_test2219z00_4560 = BgL_res2093z00_3185;
								}
								if (BgL_test2219z00_4560)
									{	/* Globalize/node.scm 224 */
										bool_t BgL_test2220z00_4563;

										if ((((obj_t) BgL_funz00_3183) == BgL_integratorz00_3034))
											{	/* Globalize/node.scm 225 */
												bool_t BgL_test2222z00_4567;

												{
													BgL_localzf2ginfozf2_bglt BgL_auxz00_4568;

													{
														obj_t BgL_auxz00_4569;

														{	/* Globalize/node.scm 225 */
															BgL_objectz00_bglt BgL_tmpz00_4570;

															BgL_tmpz00_4570 =
																((BgL_objectz00_bglt)
																((BgL_localz00_bglt) BgL_funz00_3183));
															BgL_auxz00_4569 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_4570);
														}
														BgL_auxz00_4568 =
															((BgL_localzf2ginfozf2_bglt) BgL_auxz00_4569);
													}
													BgL_test2222z00_4567 =
														(((BgL_localzf2ginfozf2_bglt)
															COBJECT(BgL_auxz00_4568))->BgL_escapezf3zf3);
												}
												if (BgL_test2222z00_4567)
													{	/* Globalize/node.scm 225 */
														BgL_test2220z00_4563 = ((bool_t) 0);
													}
												else
													{	/* Globalize/node.scm 225 */
														BgL_test2220z00_4563 = ((bool_t) 1);
													}
											}
										else
											{	/* Globalize/node.scm 224 */
												BgL_test2220z00_4563 = ((bool_t) 1);
											}
										if (BgL_test2220z00_4563)
											{
												BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4576;

												{
													obj_t BgL_auxz00_4577;

													{	/* Globalize/node.scm 226 */
														BgL_objectz00_bglt BgL_tmpz00_4578;

														BgL_tmpz00_4578 =
															((BgL_objectz00_bglt)
															((BgL_sfunz00_bglt) BgL_infoz00_3184));
														BgL_auxz00_4577 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_4578);
													}
													BgL_auxz00_4576 =
														((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4577);
												}
												BgL_test2218z00_4559 =
													(((BgL_sfunzf2ginfozf2_bglt)
														COBJECT(BgL_auxz00_4576))->BgL_gzf3zf3);
											}
										else
											{	/* Globalize/node.scm 224 */
												BgL_test2218z00_4559 = ((bool_t) 0);
											}
									}
								else
									{	/* Globalize/node.scm 223 */
										BgL_test2218z00_4559 = ((bool_t) 0);
									}
							}
							if (BgL_test2218z00_4559)
								{	/* Globalize/node.scm 228 */
									BgL_varz00_bglt BgL_arg1829z00_3186;

									{	/* Globalize/node.scm 228 */
										BgL_varz00_bglt BgL_new1136z00_3187;

										{	/* Globalize/node.scm 229 */
											BgL_varz00_bglt BgL_new1135z00_3188;

											BgL_new1135z00_3188 =
												((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_varz00_bgl))));
											{	/* Globalize/node.scm 229 */
												long BgL_arg1830z00_3189;

												{	/* Globalize/node.scm 229 */
													long BgL_res2094z00_3190;

													BgL_res2094z00_3190 =
														BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
													BgL_arg1830z00_3189 = BgL_res2094z00_3190;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1135z00_3188),
													BgL_arg1830z00_3189);
											}
											BgL_new1136z00_3187 = BgL_new1135z00_3188;
										}
										((((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_new1136z00_3187)))->
												BgL_locz00) =
											((obj_t) (((BgL_nodez00_bglt)
														COBJECT(((BgL_nodez00_bglt) ((BgL_appz00_bglt)
																	BgL_nodez00_3033))))->BgL_locz00)), BUNSPEC);
										((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
															BgL_new1136z00_3187)))->BgL_typez00) =
											((BgL_typez00_bglt) (((BgL_nodez00_bglt)
														COBJECT(((BgL_nodez00_bglt) ((BgL_appz00_bglt)
																	BgL_nodez00_3033))))->BgL_typez00)), BUNSPEC);
										((((BgL_varz00_bglt) COBJECT(BgL_new1136z00_3187))->
												BgL_variablez00) =
											((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
													BGl_thezd2globalzd2zzglobaliza7e_localzd2ze3globalz96(
														((BgL_localz00_bglt) BgL_funz00_3183)))), BUNSPEC);
										BgL_arg1829z00_3186 = BgL_new1136z00_3187;
									}
									((((BgL_appz00_bglt) COBJECT(
													((BgL_appz00_bglt) BgL_nodez00_3033)))->BgL_funz00) =
										((BgL_varz00_bglt) BgL_arg1829z00_3186), BUNSPEC);
								}
							else
								{	/* Globalize/node.scm 223 */
									BFALSE;
								}
						}
						{
							obj_t BgL_nodesz00_3192;

							BgL_nodesz00_3192 =
								(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt) BgL_nodez00_3033)))->BgL_argsz00);
						BgL_liipz00_3191:
							if (NULLP(BgL_nodesz00_3192))
								{	/* Globalize/node.scm 235 */
									CNST_TABLE_REF(((long) 2));
								}
							else
								{	/* Globalize/node.scm 235 */
									{	/* Globalize/node.scm 238 */
										BgL_nodez00_bglt BgL_arg1835z00_3193;

										{	/* Globalize/node.scm 238 */
											obj_t BgL_arg1836z00_3194;

											BgL_arg1836z00_3194 = CAR(((obj_t) BgL_nodesz00_3192));
											BgL_arg1835z00_3193 =
												BGl_gloz12z12zzglobaliza7e_nodeza7(
												((BgL_nodez00_bglt) BgL_arg1836z00_3194),
												((BgL_variablez00_bglt) BgL_integratorz00_3034));
										}
										{	/* Globalize/node.scm 238 */
											obj_t BgL_auxz00_4614;
											obj_t BgL_tmpz00_4612;

											BgL_auxz00_4614 = ((obj_t) BgL_arg1835z00_3193);
											BgL_tmpz00_4612 = ((obj_t) BgL_nodesz00_3192);
											SET_CAR(BgL_tmpz00_4612, BgL_auxz00_4614);
										}
									}
									{	/* Globalize/node.scm 239 */
										obj_t BgL_arg1838z00_3195;

										BgL_arg1838z00_3195 = CDR(((obj_t) BgL_nodesz00_3192));
										{
											obj_t BgL_nodesz00_4619;

											BgL_nodesz00_4619 = BgL_arg1838z00_3195;
											BgL_nodesz00_3192 = BgL_nodesz00_4619;
											goto BgL_liipz00_3191;
										}
									}
								}
						}
						{	/* Globalize/node.scm 241 */
							bool_t BgL_test2224z00_4622;

							{	/* Globalize/node.scm 241 */
								bool_t BgL_test2225z00_4623;

								{	/* Globalize/node.scm 241 */
									bool_t BgL_res2096z00_3196;

									BgL_res2096z00_3196 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_funz00_3183), BGl_globalz00zzast_varz00);
									BgL_test2225z00_4623 = BgL_res2096z00_3196;
								}
								if (BgL_test2225z00_4623)
									{	/* Globalize/node.scm 241 */
										BgL_test2224z00_4622 = ((bool_t) 1);
									}
								else
									{	/* Globalize/node.scm 242 */
										bool_t BgL_test2226z00_4626;

										{
											BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4627;

											{
												obj_t BgL_auxz00_4628;

												{	/* Globalize/node.scm 242 */
													BgL_objectz00_bglt BgL_tmpz00_4629;

													BgL_tmpz00_4629 =
														((BgL_objectz00_bglt)
														((BgL_sfunz00_bglt) BgL_infoz00_3184));
													BgL_auxz00_4628 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_4629);
												}
												BgL_auxz00_4627 =
													((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4628);
											}
											BgL_test2226z00_4626 =
												(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4627))->
												BgL_gzf3zf3);
										}
										if (BgL_test2226z00_4626)
											{	/* Globalize/node.scm 242 */
												if (
													(((obj_t) BgL_funz00_3183) == BgL_integratorz00_3034))
													{
														BgL_localzf2ginfozf2_bglt BgL_auxz00_4638;

														{
															obj_t BgL_auxz00_4639;

															{	/* Globalize/node.scm 244 */
																BgL_objectz00_bglt BgL_tmpz00_4640;

																BgL_tmpz00_4640 =
																	((BgL_objectz00_bglt)
																	((BgL_localz00_bglt) BgL_funz00_3183));
																BgL_auxz00_4639 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_4640);
															}
															BgL_auxz00_4638 =
																((BgL_localzf2ginfozf2_bglt) BgL_auxz00_4639);
														}
														BgL_test2224z00_4622 =
															(((BgL_localzf2ginfozf2_bglt)
																COBJECT(BgL_auxz00_4638))->BgL_escapezf3zf3);
													}
												else
													{	/* Globalize/node.scm 243 */
														BgL_test2224z00_4622 = ((bool_t) 0);
													}
											}
										else
											{	/* Globalize/node.scm 242 */
												BgL_test2224z00_4622 = ((bool_t) 1);
											}
									}
							}
							if (BgL_test2224z00_4622)
								{	/* Globalize/node.scm 241 */
									CNST_TABLE_REF(((long) 2));
								}
							else
								{	/* Globalize/node.scm 246 */
									bool_t BgL_test2228z00_4647;

									{
										BgL_localzf2ginfozf2_bglt BgL_auxz00_4648;

										{
											obj_t BgL_auxz00_4649;

											{	/* Globalize/node.scm 246 */
												BgL_objectz00_bglt BgL_tmpz00_4650;

												BgL_tmpz00_4650 =
													((BgL_objectz00_bglt)
													((BgL_localz00_bglt) BgL_funz00_3183));
												BgL_auxz00_4649 = BGL_OBJECT_WIDENING(BgL_tmpz00_4650);
											}
											BgL_auxz00_4648 =
												((BgL_localzf2ginfozf2_bglt) BgL_auxz00_4649);
										}
										BgL_test2228z00_4647 =
											(((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4648))->
											BgL_escapezf3zf3);
									}
									if (BgL_test2228z00_4647)
										{
											obj_t BgL_auxz00_4656;

											{	/* Globalize/node.scm 249 */
												BgL_nodez00_bglt BgL_arg1845z00_3197;
												obj_t BgL_arg1846z00_3198;

												{	/* Globalize/node.scm 249 */
													BgL_varz00_bglt BgL_arg1847z00_3199;

													{	/* Globalize/node.scm 249 */
														BgL_varz00_bglt BgL_new1139z00_3200;

														{	/* Globalize/node.scm 252 */
															BgL_varz00_bglt BgL_new1138z00_3201;

															BgL_new1138z00_3201 =
																((BgL_varz00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_varz00_bgl))));
															{	/* Globalize/node.scm 252 */
																long BgL_arg1852z00_3202;

																{	/* Globalize/node.scm 252 */
																	long BgL_res2097z00_3203;

																	{	/* Globalize/node.scm 252 */
																		obj_t BgL_classz00_3204;

																		BgL_classz00_3204 = BGl_varz00zzast_nodez00;
																		BgL_res2097z00_3203 =
																			BGL_CLASS_INDEX(BgL_classz00_3204);
																	}
																	BgL_arg1852z00_3202 = BgL_res2097z00_3203;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1138z00_3201),
																	BgL_arg1852z00_3202);
															}
															BgL_new1139z00_3200 = BgL_new1138z00_3201;
														}
														((((BgL_nodez00_bglt) COBJECT(
																		((BgL_nodez00_bglt) BgL_new1139z00_3200)))->
																BgL_locz00) =
															((obj_t) (((BgL_nodez00_bglt)
																		COBJECT(((BgL_nodez00_bglt) (
																					(BgL_appz00_bglt)
																					BgL_nodez00_3033))))->BgL_locz00)),
															BUNSPEC);
														{
															BgL_typez00_bglt BgL_auxz00_4667;

															{	/* Globalize/node.scm 251 */
																obj_t BgL_arg1848z00_3205;

																{	/* Globalize/node.scm 251 */
																	obj_t BgL_arg1850z00_3206;

																	BgL_arg1850z00_3206 =
																		(((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					((BgL_appz00_bglt)
																						BgL_nodez00_3033))))->BgL_locz00);
																	BgL_arg1848z00_3205 =
																		BGl_thezd2closurezd2zzglobaliza7e_freeza7
																		(BgL_funz00_3183, BgL_arg1850z00_3206);
																}
																BgL_auxz00_4667 =
																	(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				BgL_arg1848z00_3205)))->BgL_typez00);
															}
															((((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt)
																				BgL_new1139z00_3200)))->BgL_typez00) =
																((BgL_typez00_bglt) BgL_auxz00_4667), BUNSPEC);
														}
														{
															BgL_variablez00_bglt BgL_auxz00_4676;

															{	/* Globalize/node.scm 252 */
																obj_t BgL_arg1851z00_3207;

																BgL_arg1851z00_3207 =
																	(((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt)
																				((BgL_appz00_bglt)
																					BgL_nodez00_3033))))->BgL_locz00);
																BgL_auxz00_4676 =
																	((BgL_variablez00_bglt)
																	BGl_thezd2closurezd2zzglobaliza7e_freeza7
																	(BgL_funz00_3183, BgL_arg1851z00_3207));
															}
															((((BgL_varz00_bglt)
																		COBJECT(BgL_new1139z00_3200))->
																	BgL_variablez00) =
																((BgL_variablez00_bglt) BgL_auxz00_4676),
																BUNSPEC);
														}
														BgL_arg1847z00_3199 = BgL_new1139z00_3200;
													}
													BgL_arg1845z00_3197 =
														BGl_gloz12z12zzglobaliza7e_nodeza7(
														((BgL_nodez00_bglt) BgL_arg1847z00_3199),
														((BgL_variablez00_bglt) BgL_integratorz00_3034));
												}
												BgL_arg1846z00_3198 =
													(((BgL_appz00_bglt) COBJECT(
															((BgL_appz00_bglt) BgL_nodez00_3033)))->
													BgL_argsz00);
												BgL_auxz00_4656 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_arg1845z00_3197),
													BgL_arg1846z00_3198);
											}
											((((BgL_appz00_bglt) COBJECT(
															((BgL_appz00_bglt) BgL_nodez00_3033)))->
													BgL_argsz00) = ((obj_t) BgL_auxz00_4656), BUNSPEC);
										}
									else
										{	/* Globalize/node.scm 258 */
											obj_t BgL_g1140z00_3208;

											{
												BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4691;

												{
													obj_t BgL_auxz00_4692;

													{	/* Globalize/node.scm 259 */
														BgL_objectz00_bglt BgL_tmpz00_4693;

														BgL_tmpz00_4693 =
															((BgL_objectz00_bglt)
															((BgL_sfunz00_bglt) BgL_infoz00_3184));
														BgL_auxz00_4692 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_4693);
													}
													BgL_auxz00_4691 =
														((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4692);
												}
												BgL_g1140z00_3208 =
													(((BgL_sfunzf2ginfozf2_bglt)
														COBJECT(BgL_auxz00_4691))->BgL_kapturedz00);
											}
											{
												obj_t BgL_newzd2actualszd2_3210;
												obj_t BgL_kapturedz00_3211;

												BgL_newzd2actualszd2_3210 =
													(((BgL_appz00_bglt) COBJECT(
															((BgL_appz00_bglt) BgL_nodez00_3033)))->
													BgL_argsz00);
												BgL_kapturedz00_3211 = BgL_g1140z00_3208;
											BgL_loopz00_3209:
												if (NULLP(BgL_kapturedz00_3211))
													{	/* Globalize/node.scm 260 */
														((((BgL_appz00_bglt) COBJECT(
																		((BgL_appz00_bglt) BgL_nodez00_3033)))->
																BgL_argsz00) =
															((obj_t) BgL_newzd2actualszd2_3210), BUNSPEC);
													}
												else
													{	/* Globalize/node.scm 262 */
														obj_t BgL_kapz00_3212;

														BgL_kapz00_3212 =
															CAR(((obj_t) BgL_kapturedz00_3211));
														{	/* Globalize/node.scm 262 */
															obj_t BgL_alphaz00_3213;

															BgL_alphaz00_3213 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_localz00_bglt) BgL_kapz00_3212))))->
																BgL_fastzd2alphazd2);
															{	/* Globalize/node.scm 263 */
																obj_t BgL_varz00_3214;

																if (BGl_isazf3zf3zz__objectz00
																	(BgL_alphaz00_3213, BGl_localz00zzast_varz00))
																	{	/* Globalize/node.scm 264 */
																		BgL_varz00_3214 = BgL_alphaz00_3213;
																	}
																else
																	{	/* Globalize/node.scm 264 */
																		BgL_varz00_3214 = BgL_kapz00_3212;
																	}
																{	/* Globalize/node.scm 264 */

																	{	/* Globalize/node.scm 265 */
																		obj_t BgL_arg1856z00_3215;
																		obj_t BgL_arg1857z00_3216;

																		{	/* Globalize/node.scm 265 */
																			BgL_varz00_bglt BgL_arg1858z00_3217;

																			{	/* Globalize/node.scm 265 */
																				BgL_varz00_bglt BgL_new1142z00_3218;

																				{	/* Globalize/node.scm 268 */
																					BgL_varz00_bglt BgL_new1141z00_3219;

																					BgL_new1141z00_3219 =
																						((BgL_varz00_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_varz00_bgl))));
																					{	/* Globalize/node.scm 268 */
																						long BgL_arg1859z00_3220;

																						{	/* Globalize/node.scm 268 */
																							long BgL_res2100z00_3221;

																							BgL_res2100z00_3221 =
																								BGL_CLASS_INDEX
																								(BGl_varz00zzast_nodez00);
																							BgL_arg1859z00_3220 =
																								BgL_res2100z00_3221;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								BgL_new1141z00_3219),
																							BgL_arg1859z00_3220);
																					}
																					BgL_new1142z00_3218 =
																						BgL_new1141z00_3219;
																				}
																				((((BgL_nodez00_bglt) COBJECT(
																								((BgL_nodez00_bglt)
																									BgL_new1142z00_3218)))->
																						BgL_locz00) =
																					((obj_t) (((BgL_nodez00_bglt)
																								COBJECT(((BgL_nodez00_bglt) (
																											(BgL_appz00_bglt)
																											BgL_nodez00_3033))))->
																							BgL_locz00)), BUNSPEC);
																				((((BgL_nodez00_bglt)
																							COBJECT(((BgL_nodez00_bglt)
																									BgL_new1142z00_3218)))->
																						BgL_typez00) =
																					((BgL_typez00_bglt) ((
																								(BgL_variablez00_bglt)
																								COBJECT(((BgL_variablez00_bglt)
																										BgL_varz00_3214)))->
																							BgL_typez00)), BUNSPEC);
																				((((BgL_varz00_bglt)
																							COBJECT(BgL_new1142z00_3218))->
																						BgL_variablez00) =
																					((BgL_variablez00_bglt) (
																							(BgL_variablez00_bglt)
																							BgL_varz00_3214)), BUNSPEC);
																				BgL_arg1858z00_3217 =
																					BgL_new1142z00_3218;
																			}
																			BgL_arg1856z00_3215 =
																				MAKE_YOUNG_PAIR(
																				((obj_t) BgL_arg1858z00_3217),
																				BgL_newzd2actualszd2_3210);
																		}
																		BgL_arg1857z00_3216 =
																			CDR(((obj_t) BgL_kapturedz00_3211));
																		{
																			obj_t BgL_kapturedz00_4730;
																			obj_t BgL_newzd2actualszd2_4729;

																			BgL_newzd2actualszd2_4729 =
																				BgL_arg1856z00_3215;
																			BgL_kapturedz00_4730 =
																				BgL_arg1857z00_3216;
																			BgL_kapturedz00_3211 =
																				BgL_kapturedz00_4730;
																			BgL_newzd2actualszd2_3210 =
																				BgL_newzd2actualszd2_4729;
																			goto BgL_loopz00_3209;
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
						return ((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3033));
					}
				}
			}
		}

	}



/* &glo!-sync1369 */
	BgL_nodez00_bglt BGl_z62gloz12zd2sync1369za2zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3035, obj_t BgL_nodez00_3036, obj_t BgL_integratorz00_3037)
	{
		{	/* Globalize/node.scm 201 */
			{
				BgL_nodez00_bglt BgL_auxz00_4735;

				{	/* Globalize/node.scm 203 */
					BgL_nodez00_bglt BgL_arg1821z00_3223;

					BgL_arg1821z00_3223 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_3036)))->BgL_mutexz00);
					BgL_auxz00_4735 =
						BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_arg1821z00_3223,
						((BgL_variablez00_bglt) BgL_integratorz00_3037));
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_3036)))->BgL_mutexz00) =
					((BgL_nodez00_bglt) BgL_auxz00_4735), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_4742;

				{	/* Globalize/node.scm 204 */
					BgL_nodez00_bglt BgL_arg1822z00_3224;

					BgL_arg1822z00_3224 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_3036)))->BgL_prelockz00);
					BgL_auxz00_4742 =
						BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_arg1822z00_3224,
						((BgL_variablez00_bglt) BgL_integratorz00_3037));
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_3036)))->BgL_prelockz00) =
					((BgL_nodez00_bglt) BgL_auxz00_4742), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_4749;

				{	/* Globalize/node.scm 205 */
					BgL_nodez00_bglt BgL_arg1823z00_3225;

					BgL_arg1823z00_3225 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_3036)))->BgL_bodyz00);
					BgL_auxz00_4749 =
						BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_arg1823z00_3225,
						((BgL_variablez00_bglt) BgL_integratorz00_3037));
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_3036)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_4749), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_3036));
		}

	}



/* &glo!-sequence1367 */
	BgL_nodez00_bglt BGl_z62gloz12zd2sequence1367za2zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3038, obj_t BgL_nodez00_3039, obj_t BgL_integratorz00_3040)
	{
		{	/* Globalize/node.scm 193 */
			BGl_gloza2z12zb0zzglobaliza7e_nodeza7(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_3039)))->BgL_nodesz00),
				BgL_integratorz00_3040);
			return ((BgL_nodez00_bglt) ((BgL_sequencez00_bglt) BgL_nodez00_3039));
		}

	}



/* &glo!-closure1365 */
	BgL_nodez00_bglt BGl_z62gloz12zd2closure1365za2zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3041, obj_t BgL_nodez00_3042, obj_t BgL_integratorz00_3043)
	{
		{	/* Globalize/node.scm 182 */
			{	/* Globalize/node.scm 184 */
				BgL_varz00_bglt BgL_arg1801z00_3228;

				{	/* Globalize/node.scm 184 */
					BgL_varz00_bglt BgL_new1131z00_3229;

					{	/* Globalize/node.scm 185 */
						BgL_varz00_bglt BgL_new1130z00_3230;

						BgL_new1130z00_3230 =
							((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_varz00_bgl))));
						{	/* Globalize/node.scm 185 */
							long BgL_arg1811z00_3231;

							{	/* Globalize/node.scm 185 */
								long BgL_res2092z00_3232;

								BgL_res2092z00_3232 = BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
								BgL_arg1811z00_3231 = BgL_res2092z00_3232;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1130z00_3230),
								BgL_arg1811z00_3231);
						}
						BgL_new1131z00_3229 = BgL_new1130z00_3230;
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1131z00_3229)))->BgL_locz00) =
						((obj_t) (((BgL_nodez00_bglt)
									COBJECT(((BgL_nodez00_bglt) ((BgL_closurez00_bglt)
												BgL_nodez00_3042))))->BgL_locz00)), BUNSPEC);
					((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_new1131z00_3229)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt)
								BGl_za2procedureza2z00zztype_cachez00)), BUNSPEC);
					{
						BgL_variablez00_bglt BgL_auxz00_4775;

						{	/* Globalize/node.scm 187 */
							BgL_variablez00_bglt BgL_arg1808z00_3233;
							obj_t BgL_arg1809z00_3234;

							BgL_arg1808z00_3233 =
								(((BgL_varz00_bglt) COBJECT(
										((BgL_varz00_bglt)
											((BgL_closurez00_bglt) BgL_nodez00_3042))))->
								BgL_variablez00);
							BgL_arg1809z00_3234 =
								(((BgL_nodez00_bglt)
									COBJECT(((BgL_nodez00_bglt) ((BgL_closurez00_bglt)
												BgL_nodez00_3042))))->BgL_locz00);
							BgL_auxz00_4775 =
								((BgL_variablez00_bglt)
								BGl_thezd2closurezd2zzglobaliza7e_freeza7(BgL_arg1808z00_3233,
									BgL_arg1809z00_3234));
						}
						((((BgL_varz00_bglt) COBJECT(BgL_new1131z00_3229))->
								BgL_variablez00) =
							((BgL_variablez00_bglt) BgL_auxz00_4775), BUNSPEC);
					}
					BgL_arg1801z00_3228 = BgL_new1131z00_3229;
				}
				return
					BGl_gloz12z12zzglobaliza7e_nodeza7(
					((BgL_nodez00_bglt) BgL_arg1801z00_3228),
					((BgL_variablez00_bglt) BgL_integratorz00_3043));
			}
		}

	}



/* &glo!-var1363 */
	BgL_nodez00_bglt BGl_z62gloz12zd2var1363za2zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3044, obj_t BgL_nodez00_3045, obj_t BgL_integratorz00_3046)
	{
		{	/* Globalize/node.scm 151 */
			{	/* Globalize/node.scm 152 */
				BgL_variablez00_bglt BgL_variablez00_3236;

				BgL_variablez00_3236 =
					(((BgL_varz00_bglt) COBJECT(
							((BgL_varz00_bglt) BgL_nodez00_3045)))->BgL_variablez00);
				{	/* Globalize/node.scm 152 */
					BgL_typez00_bglt BgL_vtypez00_3237;

					BgL_vtypez00_3237 =
						(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_3236))->
						BgL_typez00);
					{	/* Globalize/node.scm 153 */

						{
							BgL_variablez00_bglt BgL_variablez00_3239;

							BgL_variablez00_3239 = BgL_variablez00_3236;
						BgL_loopz00_3238:
							{	/* Globalize/node.scm 155 */
								obj_t BgL_alphaz00_3240;

								BgL_alphaz00_3240 =
									(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_3239))->
									BgL_fastzd2alphazd2);
								if (BGl_isazf3zf3zz__objectz00(BgL_alphaz00_3240,
										BGl_localz00zzast_varz00))
									{	/* Globalize/node.scm 157 */
										((((BgL_varz00_bglt) COBJECT(
														((BgL_varz00_bglt) BgL_nodez00_3045)))->
												BgL_variablez00) =
											((BgL_variablez00_bglt) ((BgL_variablez00_bglt) (
														(BgL_localz00_bglt) BgL_alphaz00_3240))), BUNSPEC);
										{	/* Globalize/node.scm 159 */
											BgL_typez00_bglt BgL_arg1790z00_3241;

											BgL_arg1790z00_3241 =
												BGl_getzd2bigloozd2definedzd2typezd2zztype_cachez00
												(BgL_vtypez00_3237);
											((((BgL_nodez00_bglt)
														COBJECT(((BgL_nodez00_bglt) ((BgL_varz00_bglt)
																	BgL_nodez00_3045))))->BgL_typez00) =
												((BgL_typez00_bglt) BgL_arg1790z00_3241), BUNSPEC);
										}
										{
											BgL_variablez00_bglt BgL_variablez00_4802;

											BgL_variablez00_4802 =
												((BgL_variablez00_bglt)
												((BgL_localz00_bglt) BgL_alphaz00_3240));
											BgL_variablez00_3239 = BgL_variablez00_4802;
											goto BgL_loopz00_3238;
										}
									}
								else
									{	/* Globalize/node.scm 161 */
										bool_t BgL_test2232z00_4805;

										{	/* Globalize/node.scm 161 */
											bool_t BgL_res2090z00_3242;

											BgL_res2090z00_3242 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_variablez00_3239),
												BGl_globalz00zzast_varz00);
											BgL_test2232z00_4805 = BgL_res2090z00_3242;
										}
										if (BgL_test2232z00_4805)
											{	/* Globalize/node.scm 161 */
												return
													((BgL_nodez00_bglt)
													((BgL_varz00_bglt) BgL_nodez00_3045));
											}
										else
											{	/* Globalize/node.scm 161 */
												if (BGl_celledzf3zf3zzglobaliza7e_nodeza7
													(BgL_variablez00_3239))
													{	/* Globalize/node.scm 165 */
														BgL_typez00_bglt BgL_vtypez00_3243;
														BgL_typez00_bglt BgL_ntypez00_3244;

														BgL_vtypez00_3243 =
															BGl_getzd2bigloozd2definedzd2typezd2zztype_cachez00
															(BgL_vtypez00_3237);
														{	/* Globalize/node.scm 166 */
															BgL_typez00_bglt BgL_arg1798z00_3245;

															BgL_arg1798z00_3245 =
																(((BgL_nodez00_bglt) COBJECT(
																		((BgL_nodez00_bglt)
																			((BgL_varz00_bglt) BgL_nodez00_3045))))->
																BgL_typez00);
															BgL_ntypez00_3244 =
																BGl_getzd2bigloozd2definedzd2typezd2zztype_cachez00
																(BgL_arg1798z00_3245);
														}
														{	/* Globalize/node.scm 168 */
															BgL_typez00_bglt BgL_vz00_3246;

															BgL_vz00_3246 =
																((BgL_typez00_bglt)
																BGl_za2cellza2z00zztype_cachez00);
															((((BgL_nodez00_bglt)
																		COBJECT(((BgL_nodez00_bglt) (
																					(BgL_varz00_bglt)
																					BgL_nodez00_3045))))->BgL_typez00) =
																((BgL_typez00_bglt) BgL_vz00_3246), BUNSPEC);
														}
														{	/* Globalize/node.scm 169 */
															BgL_boxzd2refzd2_bglt BgL_new1128z00_3247;

															{	/* Globalize/node.scm 170 */
																BgL_boxzd2refzd2_bglt BgL_new1126z00_3248;

																BgL_new1126z00_3248 =
																	((BgL_boxzd2refzd2_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_boxzd2refzd2_bgl))));
																{	/* Globalize/node.scm 170 */
																	long BgL_arg1796z00_3249;

																	{	/* Globalize/node.scm 170 */
																		long BgL_res2091z00_3250;

																		BgL_res2091z00_3250 =
																			BGL_CLASS_INDEX
																			(BGl_boxzd2refzd2zzast_nodez00);
																		BgL_arg1796z00_3249 = BgL_res2091z00_3250;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1126z00_3248),
																		BgL_arg1796z00_3249);
																}
																{	/* Globalize/node.scm 170 */
																	BgL_objectz00_bglt BgL_tmpz00_4825;

																	BgL_tmpz00_4825 =
																		((BgL_objectz00_bglt) BgL_new1126z00_3248);
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4825,
																		BFALSE);
																}
																((BgL_objectz00_bglt) BgL_new1126z00_3248);
																BgL_new1128z00_3247 = BgL_new1126z00_3248;
															}
															((((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt)
																				BgL_new1128z00_3247)))->BgL_locz00) =
																((obj_t) (((BgL_nodez00_bglt)
																			COBJECT(((BgL_nodez00_bglt) (
																						(BgL_varz00_bglt)
																						BgL_nodez00_3045))))->BgL_locz00)),
																BUNSPEC);
															((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																				BgL_new1128z00_3247)))->BgL_typez00) =
																((BgL_typez00_bglt) BgL_ntypez00_3244),
																BUNSPEC);
															((((BgL_nodezf2effectzf2_bglt)
																		COBJECT(((BgL_nodezf2effectzf2_bglt)
																				BgL_new1128z00_3247)))->
																	BgL_sidezd2effectzd2) =
																((obj_t) BUNSPEC), BUNSPEC);
															((((BgL_nodezf2effectzf2_bglt)
																		COBJECT(((BgL_nodezf2effectzf2_bglt)
																				BgL_new1128z00_3247)))->BgL_keyz00) =
																((obj_t) BINT(((long) -1))), BUNSPEC);
															((((BgL_boxzd2refzd2_bglt)
																		COBJECT(BgL_new1128z00_3247))->BgL_varz00) =
																((BgL_varz00_bglt) ((BgL_varz00_bglt)
																		BgL_nodez00_3045)), BUNSPEC);
															((((BgL_boxzd2refzd2_bglt)
																		COBJECT(BgL_new1128z00_3247))->
																	BgL_vtypez00) =
																((BgL_typez00_bglt) BgL_vtypez00_3243),
																BUNSPEC);
															return ((BgL_nodez00_bglt) BgL_new1128z00_3247);
														}
													}
												else
													{	/* Globalize/node.scm 163 */
														return
															((BgL_nodez00_bglt)
															((BgL_varz00_bglt) BgL_nodez00_3045));
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



/* &glo!-kwote1361 */
	BgL_nodez00_bglt BGl_z62gloz12zd2kwote1361za2zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3047, obj_t BgL_nodez00_3048, obj_t BgL_integratorz00_3049)
	{
		{	/* Globalize/node.scm 145 */
			return ((BgL_nodez00_bglt) ((BgL_kwotez00_bglt) BgL_nodez00_3048));
		}

	}



/* &glo!-atom1359 */
	BgL_nodez00_bglt BGl_z62gloz12zd2atom1359za2zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3050, obj_t BgL_nodez00_3051, obj_t BgL_integratorz00_3052)
	{
		{	/* Globalize/node.scm 139 */
			return ((BgL_nodez00_bglt) ((BgL_atomz00_bglt) BgL_nodez00_3051));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_nodeza7()
	{
		{	/* Globalize/node.scm 17 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2141z00zzglobaliza7e_nodeza7));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2141z00zzglobaliza7e_nodeza7));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2141z00zzglobaliza7e_nodeza7));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2141z00zzglobaliza7e_nodeza7));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string2141z00zzglobaliza7e_nodeza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2141z00zzglobaliza7e_nodeza7));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2141z00zzglobaliza7e_nodeza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(((long) 0),
				BSTRING_TO_STRING(BGl_string2141z00zzglobaliza7e_nodeza7));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string2141z00zzglobaliza7e_nodeza7));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2141z00zzglobaliza7e_nodeza7));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string2141z00zzglobaliza7e_nodeza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_freeza7(((long) 244215773),
				BSTRING_TO_STRING(BGl_string2141z00zzglobaliza7e_nodeza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_localzd2ze3globalz96(((long)
					115338088),
				BSTRING_TO_STRING(BGl_string2141z00zzglobaliza7e_nodeza7));
			return BGl_modulezd2initializa7ationz75zztools_errorz00(((long)
					300504034),
				BSTRING_TO_STRING(BGl_string2141z00zzglobaliza7e_nodeza7));
		}

	}

#ifdef __cplusplus
}
#endif
