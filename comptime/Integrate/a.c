/*===========================================================================*/
/*   (Integrate/a.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/a.scm) */
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

	typedef struct BgL_svarzf2iinfozf2_bgl
	{
		obj_t BgL_fzd2markzd2;
		obj_t BgL_uzd2markzd2;
		bool_t BgL_kapturedzf3zf3;
		bool_t BgL_celledzf3zf3;
		obj_t BgL_xhdlz00;
	}                      *BgL_svarzf2iinfozf2_bglt;

	typedef struct BgL_sexitzf2iinfozf2_bgl
	{
		obj_t BgL_fzd2markzd2;
		obj_t BgL_uzd2markzd2;
		bool_t BgL_kapturedzf3zf3;
		bool_t BgL_celledzf3zf3;
	}                       *BgL_sexitzf2iinfozf2_bglt;

	typedef struct BgL_sfunzf2iinfozf2_bgl
	{
		obj_t BgL_ownerz00;
		obj_t BgL_freez00;
		obj_t BgL_boundz00;
		obj_t BgL_cfromz00;
		obj_t BgL_ctoz00;
		obj_t BgL_kz00;
		obj_t BgL_kza2za2;
		obj_t BgL_uz00;
		obj_t BgL_cnz00;
		obj_t BgL_ctz00;
		obj_t BgL_kontz00;
		bool_t BgL_gzf3zf3;
		bool_t BgL_forcegzf3zf3;
		obj_t BgL_lz00;
		obj_t BgL_ledz00;
		obj_t BgL_istampz00;
		obj_t BgL_globalz00;
		obj_t BgL_kapturedz00;
		obj_t BgL_tailzd2coercionzd2;
		bool_t BgL_xhdlzf3zf3;
	}                      *BgL_sfunzf2iinfozf2_bglt;


	extern obj_t BGl_closurez00zzast_nodez00;
	static obj_t BGl_z62nodezd2Azd2atom1315z62zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_za2pairzd2nilza2zd2zztype_cachez00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_z62nodezd2Azd2letzd2var1347zb0zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	static obj_t BGl_z62nodezd2Azb0zzintegrate_az00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_z62nodezd2Azd2var1319z62zzintegrate_az00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static bool_t BGl_tailzd2typezd2compatiblezf3zf3zzintegrate_az00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_z62nodezd2Azd2closure1321z62zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzintegrate_az00();
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_za2magicza2z00zztype_cachez00;
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzintegrate_az00();
	extern obj_t BGl_externz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62nodezd2Azd2switch1343z62zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static bool_t
		BGl_initializa7ezd2funz12z67zzintegrate_az00(BgL_variablez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl_z62nodezd2Azd2sync1325z62zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_z62nodezd2Azd2fail1341z62zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_tracezd2Azd2zzintegrate_az00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzintegrate_az00();
	static obj_t BGl_z62zc3z04anonymousza31385ze3ze5zzintegrate_az00(obj_t);
	extern obj_t BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2Azd2conditional1339z62zzintegrate_az00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2Azd2zzintegrate_az00(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t, obj_t);
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_z62nodezd2Azd2jumpzd2exzd2it1351z62zzintegrate_az00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62nodezd2Azd2sequence1323z62zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_az00 = BUNSPEC;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2Azd2funcall1331z62zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62nodezd2Azd2setzd2exzd2it1349z62zzintegrate_az00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzintegrate_az00();
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern bool_t
		BGl_iszd2unwindzd2untilzf3zf3zzreturn_walkz00(BgL_variablez00_bglt);
	static obj_t BGl_genericzd2initzd2zzintegrate_az00();
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	extern obj_t BGl_sfunzf2Iinfozf2zzintegrate_infoz00;
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static obj_t BGl_z62nodezd2Azd2boxzd2ref1357zb0zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	static obj_t BGl_z62nodezd2Azd2appzd2ly1329zb0zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2Azd2app1327z62zzintegrate_az00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_za2mutexza2z00zztype_cachez00;
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt,
		bool_t);
	static obj_t BGl_z62nodezd2Azd2extern1333z62zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_Az00zzintegrate_az00(BgL_globalz00_bglt,
		BgL_nodez00_bglt);
	extern obj_t BGl_za2pairza2z00zztype_cachez00;
	extern obj_t BGl_sexitzf2Iinfozf2zzintegrate_infoz00;
	static obj_t BGl_z62nodezd2Azd2cast1335z62zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_za2kontza2z00zzintegrate_az00 = BUNSPEC;
	static obj_t BGl_z62nodezd2Azd2setq1337z62zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_z62nodezd2A1312zb0zzintegrate_az00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	extern obj_t BGl_svarzf2Iinfozf2zzintegrate_infoz00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzintegrate_az00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzreturn_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_tailzd2coercionzd2zzintegrate_az00(obj_t,
		BgL_globalz00_bglt);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzintegrate_az00();
	extern obj_t BGl_za2optimzd2returnzd2gotozf3za2zf3zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_az00();
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_az00();
	BGL_IMPORT obj_t
		BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_getzd2newzd2kontz00zzintegrate_az00();
	static obj_t BGl_z62nodezd2Azd2letzd2fun1345zb0zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62nodezd2Azd2boxzd2setz121355za2zzintegrate_az00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62nodezd2Azd2makezd2box1353zb0zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_z62Az62zzintegrate_az00(obj_t, obj_t, obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	extern bool_t
		BGl_iszd2getzd2exitdzd2topzf3z21zzreturn_walkz00(BgL_variablez00_bglt);
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_initzd2returnzd2cachez12z12zzreturn_walkz00();
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_EXPORTED_DEF obj_t BGl_za2phiza2z00zzintegrate_az00 = BUNSPEC;
	static obj_t BGl_z62nodezd2Azd2kwote1317z62zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_STRING(BGl_string2131z00zzintegrate_az00,
		BgL_bgl_string2131za700za7za7i2170za7, "Before tail-coercion", 20);
	      DEFINE_STRING(BGl_string2132z00zzintegrate_az00,
		BgL_bgl_string2132za700za7za7i2171za7, "After tail-coercion", 19);
	      DEFINE_STRING(BGl_string2133z00zzintegrate_az00,
		BgL_bgl_string2133za700za7za7i2172za7, "A( ", 3);
	      DEFINE_STRING(BGl_string2134z00zzintegrate_az00,
		BgL_bgl_string2134za700za7za7i2173za7, ", ", 2);
	      DEFINE_STRING(BGl_string2135z00zzintegrate_az00,
		BgL_bgl_string2135za700za7za7i2174za7, " )", 2);
	      DEFINE_STRING(BGl_string2136z00zzintegrate_az00,
		BgL_bgl_string2136za700za7za7i2175za7, "~a/~a", 5);
	      DEFINE_STRING(BGl_string2137z00zzintegrate_az00,
		BgL_bgl_string2137za700za7za7i2176za7,
		"Globalized because used in two different type contexts", 54);
	      DEFINE_STRING(BGl_string2139z00zzintegrate_az00,
		BgL_bgl_string2139za700za7za7i2177za7, "node-A1312", 10);
	      DEFINE_STRING(BGl_string2140z00zzintegrate_az00,
		BgL_bgl_string2140za700za7za7i2178za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string2142z00zzintegrate_az00,
		BgL_bgl_string2142za700za7za7i2179za7, "node-A", 6);
	      DEFINE_STRING(BGl_string2164z00zzintegrate_az00,
		BgL_bgl_string2164za700za7za7i2180za7, "Unexpected closure", 18);
	      DEFINE_STRING(BGl_string2165z00zzintegrate_az00,
		BgL_bgl_string2165za700za7za7i2181za7, "integrate_a", 11);
	      DEFINE_STRING(BGl_string2166z00zzintegrate_az00,
		BgL_bgl_string2166za700za7za7i2182za7, "node-A1312 tail ", 16);
	      DEFINE_STATIC_BGL_GENERIC(BGl_nodezd2Azd2envz00zzintegrate_az00,
		BgL_bgl_za762nodeza7d2aza7b0za7za72183za7,
		BGl_z62nodezd2Azb0zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_Azd2envzd2zzintegrate_az00,
		BgL_bgl_za762aza762za7za7integra2184z00, BGl_z62Az62zzintegrate_az00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2138z00zzintegrate_az00,
		BgL_bgl_za762nodeza7d2a1312za72185za7,
		BGl_z62nodezd2A1312zb0zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2141z00zzintegrate_az00,
		BgL_bgl_za762nodeza7d2aza7d2at2186za7,
		BGl_z62nodezd2Azd2atom1315z62zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2143z00zzintegrate_az00,
		BgL_bgl_za762nodeza7d2aza7d2kw2187za7,
		BGl_z62nodezd2Azd2kwote1317z62zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2144z00zzintegrate_az00,
		BgL_bgl_za762nodeza7d2aza7d2va2188za7,
		BGl_z62nodezd2Azd2var1319z62zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2145z00zzintegrate_az00,
		BgL_bgl_za762nodeza7d2aza7d2cl2189za7,
		BGl_z62nodezd2Azd2closure1321z62zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2146z00zzintegrate_az00,
		BgL_bgl_za762nodeza7d2aza7d2se2190za7,
		BGl_z62nodezd2Azd2sequence1323z62zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2147z00zzintegrate_az00,
		BgL_bgl_za762nodeza7d2aza7d2sy2191za7,
		BGl_z62nodezd2Azd2sync1325z62zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2148z00zzintegrate_az00,
		BgL_bgl_za762nodeza7d2aza7d2ap2192za7,
		BGl_z62nodezd2Azd2app1327z62zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2149z00zzintegrate_az00,
		BgL_bgl_za762nodeza7d2aza7d2ap2193za7,
		BGl_z62nodezd2Azd2appzd2ly1329zb0zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2150z00zzintegrate_az00,
		BgL_bgl_za762nodeza7d2aza7d2fu2194za7,
		BGl_z62nodezd2Azd2funcall1331z62zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2151z00zzintegrate_az00,
		BgL_bgl_za762nodeza7d2aza7d2ex2195za7,
		BGl_z62nodezd2Azd2extern1333z62zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2152z00zzintegrate_az00,
		BgL_bgl_za762nodeza7d2aza7d2ca2196za7,
		BGl_z62nodezd2Azd2cast1335z62zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2153z00zzintegrate_az00,
		BgL_bgl_za762nodeza7d2aza7d2se2197za7,
		BGl_z62nodezd2Azd2setq1337z62zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2154z00zzintegrate_az00,
		BgL_bgl_za762nodeza7d2aza7d2co2198za7,
		BGl_z62nodezd2Azd2conditional1339z62zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2155z00zzintegrate_az00,
		BgL_bgl_za762nodeza7d2aza7d2fa2199za7,
		BGl_z62nodezd2Azd2fail1341z62zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2156z00zzintegrate_az00,
		BgL_bgl_za762nodeza7d2aza7d2sw2200za7,
		BGl_z62nodezd2Azd2switch1343z62zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2157z00zzintegrate_az00,
		BgL_bgl_za762nodeza7d2aza7d2le2201za7,
		BGl_z62nodezd2Azd2letzd2fun1345zb0zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2158z00zzintegrate_az00,
		BgL_bgl_za762nodeza7d2aza7d2le2202za7,
		BGl_z62nodezd2Azd2letzd2var1347zb0zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2159z00zzintegrate_az00,
		BgL_bgl_za762nodeza7d2aza7d2se2203za7,
		BGl_z62nodezd2Azd2setzd2exzd2it1349z62zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2160z00zzintegrate_az00,
		BgL_bgl_za762nodeza7d2aza7d2ju2204za7,
		BGl_z62nodezd2Azd2jumpzd2exzd2it1351z62zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2161z00zzintegrate_az00,
		BgL_bgl_za762nodeza7d2aza7d2ma2205za7,
		BGl_z62nodezd2Azd2makezd2box1353zb0zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2162z00zzintegrate_az00,
		BgL_bgl_za762nodeza7d2aza7d2bo2206za7,
		BGl_z62nodezd2Azd2boxzd2setz121355za2zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2163z00zzintegrate_az00,
		BgL_bgl_za762nodeza7d2aza7d2bo2207za7,
		BGl_z62nodezd2Azd2boxzd2ref1357zb0zzintegrate_az00, 0L, BUNSPEC, 4);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzintegrate_az00));
		     ADD_ROOT((void *) (&BGl_za2kontza2z00zzintegrate_az00));
		     ADD_ROOT((void *) (&BGl_za2phiza2z00zzintegrate_az00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzintegrate_az00(long
		BgL_checksumz00_3180, char *BgL_fromz00_3181)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_az00))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_az00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzintegrate_az00();
					BGl_libraryzd2moduleszd2initz00zzintegrate_az00();
					BGl_cnstzd2initzd2zzintegrate_az00();
					BGl_importedzd2moduleszd2initz00zzintegrate_az00();
					BGl_genericzd2initzd2zzintegrate_az00();
					BGl_methodzd2initzd2zzintegrate_az00();
					return BGl_toplevelzd2initzd2zzintegrate_az00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_az00()
	{
		{	/* Integrate/a.scm 18 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"integrate_a");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "integrate_a");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "integrate_a");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "integrate_a");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"integrate_a");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"integrate_a");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"integrate_a");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "integrate_a");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"integrate_a");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"integrate_a");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzintegrate_az00()
	{
		{	/* Integrate/a.scm 18 */
			{	/* Integrate/a.scm 18 */
				obj_t BgL_cportz00_2924;

				{	/* Integrate/a.scm 18 */
					obj_t BgL_stringz00_2932;

					BgL_stringz00_2932 = BGl_string2166z00zzintegrate_az00;
					{	/* Integrate/a.scm 18 */
						obj_t BgL_startz00_2933;

						BgL_startz00_2933 = BINT(((long) 0));
						{	/* Integrate/a.scm 18 */
							obj_t BgL_endz00_2934;

							BgL_endz00_2934 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2932)));
							{	/* Integrate/a.scm 18 */

								BgL_cportz00_2924 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2932, BgL_startz00_2933, BgL_endz00_2934);
				}}}}
				{
					long BgL_iz00_2925;

					BgL_iz00_2925 = ((long) 1);
				BgL_loopz00_2926:
					if ((BgL_iz00_2925 == ((long) -1)))
						{	/* Integrate/a.scm 18 */
							return BUNSPEC;
						}
					else
						{	/* Integrate/a.scm 18 */
							{	/* Integrate/a.scm 18 */
								obj_t BgL_arg2168z00_2928;

								{	/* Integrate/a.scm 18 */

									{	/* Integrate/a.scm 18 */
										obj_t BgL_locationz00_2930;

										BgL_locationz00_2930 = BBOOL(((bool_t) 0));
										{	/* Integrate/a.scm 18 */

											BgL_arg2168z00_2928 =
												BGl_readz00zz__readerz00(BgL_cportz00_2924,
												BgL_locationz00_2930);
										}
									}
								}
								{	/* Integrate/a.scm 18 */
									int BgL_tmpz00_3211;

									BgL_tmpz00_3211 = (int) (BgL_iz00_2925);
									CNST_TABLE_SET(BgL_tmpz00_3211, BgL_arg2168z00_2928);
							}}
							{	/* Integrate/a.scm 18 */
								int BgL_auxz00_2931;

								BgL_auxz00_2931 = (int) ((BgL_iz00_2925 - ((long) 1)));
								{
									long BgL_iz00_3216;

									BgL_iz00_3216 = (long) (BgL_auxz00_2931);
									BgL_iz00_2925 = BgL_iz00_3216;
									goto BgL_loopz00_2926;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzintegrate_az00()
	{
		{	/* Integrate/a.scm 18 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzintegrate_az00()
	{
		{	/* Integrate/a.scm 18 */
			BGl_za2phiza2z00zzintegrate_az00 = BUNSPEC;
			BGl_za2kontza2z00zzintegrate_az00 = BUNSPEC;
			return BUNSPEC;
		}

	}



/* A */
	BGL_EXPORTED_DEF obj_t BGl_Az00zzintegrate_az00(BgL_globalz00_bglt
		BgL_globalz00_3, BgL_nodez00_bglt BgL_nodez00_4)
	{
		{	/* Integrate/a.scm 45 */
			if (CBOOL(BGl_za2optimzd2returnzd2gotozf3za2zf3zzengine_paramz00))
				{	/* Integrate/a.scm 46 */
					BGl_initzd2returnzd2cachez12z12zzreturn_walkz00();
				}
			else
				{	/* Integrate/a.scm 46 */
					BFALSE;
				}
			{	/* Integrate/a.scm 48 */
				obj_t BgL_list1362z00_1617;

				BgL_list1362z00_1617 = MAKE_YOUNG_PAIR(((obj_t) BgL_globalz00_3), BNIL);
				BGl_za2phiza2z00zzintegrate_az00 = BgL_list1362z00_1617;
			}
			BGl_za2kontza2z00zzintegrate_az00 = BINT(((long) 0));
			BGl_initializa7ezd2funz12z67zzintegrate_az00(
				((BgL_variablez00_bglt) BgL_globalz00_3),
				((BgL_variablez00_bglt) BgL_globalz00_3));
			{	/* Integrate/a.scm 52 */
				obj_t BgL_az00_1618;

				{	/* Integrate/a.scm 52 */
					obj_t BgL_arg1363z00_1620;

					{	/* Integrate/a.scm 52 */
						BgL_typez00_bglt BgL_arg1364z00_1621;

						BgL_arg1364z00_1621 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_globalz00_3)))->BgL_typez00);
						BgL_arg1363z00_1620 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
							((obj_t) BgL_arg1364z00_1621));
					}
					BgL_az00_1618 =
						BGl_nodezd2Azd2zzintegrate_az00(BgL_nodez00_4,
						((BgL_variablez00_bglt) BgL_globalz00_3), BgL_arg1363z00_1620,
						BNIL);
				}
				BGl_tracezd2Azd2zzintegrate_az00(BgL_az00_1618,
					BGl_string2131z00zzintegrate_az00);
				{	/* Integrate/a.scm 54 */
					obj_t BgL_az72z72_1619;

					BgL_az72z72_1619 =
						BGl_tailzd2coercionzd2zzintegrate_az00(BgL_az00_1618,
						BgL_globalz00_3);
					BGl_tracezd2Azd2zzintegrate_az00(BgL_az72z72_1619,
						BGl_string2132z00zzintegrate_az00);
					return BgL_az72z72_1619;
				}
			}
		}

	}



/* &A */
	obj_t BGl_z62Az62zzintegrate_az00(obj_t BgL_envz00_2775,
		obj_t BgL_globalz00_2776, obj_t BgL_nodez00_2777)
	{
		{	/* Integrate/a.scm 45 */
			return
				BGl_Az00zzintegrate_az00(
				((BgL_globalz00_bglt) BgL_globalz00_2776),
				((BgL_nodez00_bglt) BgL_nodez00_2777));
		}

	}



/* initialize-fun! */
	bool_t BGl_initializa7ezd2funz12z67zzintegrate_az00(BgL_variablez00_bglt
		BgL_funz00_5, BgL_variablez00_bglt BgL_ownerz00_6)
	{
		{	/* Integrate/a.scm 61 */
			{	/* Integrate/a.scm 62 */
				BgL_sfunz00_bglt BgL_tmp1107z00_1622;

				BgL_tmp1107z00_1622 =
					((BgL_sfunz00_bglt)
					(((BgL_variablez00_bglt) COBJECT(BgL_funz00_5))->BgL_valuez00));
				{	/* Integrate/a.scm 62 */
					BgL_sfunzf2iinfozf2_bglt BgL_wide1109z00_1624;

					BgL_wide1109z00_1624 =
						((BgL_sfunzf2iinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_sfunzf2iinfozf2_bgl))));
					{	/* Integrate/a.scm 62 */
						obj_t BgL_auxz00_3247;
						BgL_objectz00_bglt BgL_tmpz00_3244;

						BgL_auxz00_3247 = ((obj_t) BgL_wide1109z00_1624);
						BgL_tmpz00_3244 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_tmp1107z00_1622));
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3244, BgL_auxz00_3247);
					}
					((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_tmp1107z00_1622));
					{	/* Integrate/a.scm 62 */
						long BgL_arg1367z00_1625;

						{	/* Integrate/a.scm 62 */
							long BgL_res2077z00_2474;

							BgL_res2077z00_2474 =
								BGL_CLASS_INDEX(BGl_sfunzf2Iinfozf2zzintegrate_infoz00);
							BgL_arg1367z00_1625 = BgL_res2077z00_2474;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt)
								((BgL_sfunz00_bglt) BgL_tmp1107z00_1622)), BgL_arg1367z00_1625);
					}
					((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_tmp1107z00_1622));
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3258;

					{
						obj_t BgL_auxz00_3259;

						{	/* Integrate/a.scm 63 */
							BgL_objectz00_bglt BgL_tmpz00_3260;

							BgL_tmpz00_3260 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_tmp1107z00_1622));
							BgL_auxz00_3259 = BGL_OBJECT_WIDENING(BgL_tmpz00_3260);
						}
						BgL_auxz00_3258 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3259);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3258))->
							BgL_ownerz00) = ((obj_t) ((obj_t) BgL_ownerz00_6)), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3267;

					{
						obj_t BgL_auxz00_3268;

						{	/* Integrate/iinfo.scm 75 */
							BgL_objectz00_bglt BgL_tmpz00_3269;

							BgL_tmpz00_3269 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_tmp1107z00_1622));
							BgL_auxz00_3268 = BGL_OBJECT_WIDENING(BgL_tmpz00_3269);
						}
						BgL_auxz00_3267 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3268);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3267))->
							BgL_freez00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3275;

					{
						obj_t BgL_auxz00_3276;

						{	/* Integrate/iinfo.scm 51 */
							BgL_objectz00_bglt BgL_tmpz00_3277;

							BgL_tmpz00_3277 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_tmp1107z00_1622));
							BgL_auxz00_3276 = BGL_OBJECT_WIDENING(BgL_tmpz00_3277);
						}
						BgL_auxz00_3275 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3276);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3275))->
							BgL_boundz00) = ((obj_t) BNIL), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3283;

					{
						obj_t BgL_auxz00_3284;

						{	/* Integrate/iinfo.scm 53 */
							BgL_objectz00_bglt BgL_tmpz00_3285;

							BgL_tmpz00_3285 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_tmp1107z00_1622));
							BgL_auxz00_3284 = BGL_OBJECT_WIDENING(BgL_tmpz00_3285);
						}
						BgL_auxz00_3283 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3284);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3283))->
							BgL_cfromz00) = ((obj_t) BNIL), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3291;

					{
						obj_t BgL_auxz00_3292;

						{	/* Integrate/iinfo.scm 75 */
							BgL_objectz00_bglt BgL_tmpz00_3293;

							BgL_tmpz00_3293 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_tmp1107z00_1622));
							BgL_auxz00_3292 = BGL_OBJECT_WIDENING(BgL_tmpz00_3293);
						}
						BgL_auxz00_3291 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3292);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3291))->BgL_ctoz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3299;

					{
						obj_t BgL_auxz00_3300;

						{	/* Integrate/iinfo.scm 57 */
							BgL_objectz00_bglt BgL_tmpz00_3301;

							BgL_tmpz00_3301 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_tmp1107z00_1622));
							BgL_auxz00_3300 = BGL_OBJECT_WIDENING(BgL_tmpz00_3301);
						}
						BgL_auxz00_3299 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3300);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3299))->BgL_kz00) =
						((obj_t) BNIL), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3307;

					{
						obj_t BgL_auxz00_3308;

						{	/* Integrate/iinfo.scm 59 */
							BgL_objectz00_bglt BgL_tmpz00_3309;

							BgL_tmpz00_3309 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_tmp1107z00_1622));
							BgL_auxz00_3308 = BGL_OBJECT_WIDENING(BgL_tmpz00_3309);
						}
						BgL_auxz00_3307 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3308);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3307))->
							BgL_kza2za2) = ((obj_t) BNIL), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3315;

					{
						obj_t BgL_auxz00_3316;

						{	/* Integrate/iinfo.scm 75 */
							BgL_objectz00_bglt BgL_tmpz00_3317;

							BgL_tmpz00_3317 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_tmp1107z00_1622));
							BgL_auxz00_3316 = BGL_OBJECT_WIDENING(BgL_tmpz00_3317);
						}
						BgL_auxz00_3315 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3316);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3315))->BgL_uz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3323;

					{
						obj_t BgL_auxz00_3324;

						{	/* Integrate/iinfo.scm 63 */
							BgL_objectz00_bglt BgL_tmpz00_3325;

							BgL_tmpz00_3325 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_tmp1107z00_1622));
							BgL_auxz00_3324 = BGL_OBJECT_WIDENING(BgL_tmpz00_3325);
						}
						BgL_auxz00_3323 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3324);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3323))->BgL_cnz00) =
						((obj_t) BNIL), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3331;

					{
						obj_t BgL_auxz00_3332;

						{	/* Integrate/iinfo.scm 65 */
							BgL_objectz00_bglt BgL_tmpz00_3333;

							BgL_tmpz00_3333 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_tmp1107z00_1622));
							BgL_auxz00_3332 = BGL_OBJECT_WIDENING(BgL_tmpz00_3333);
						}
						BgL_auxz00_3331 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3332);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3331))->BgL_ctz00) =
						((obj_t) BNIL), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3339;

					{
						obj_t BgL_auxz00_3340;

						{	/* Integrate/iinfo.scm 67 */
							BgL_objectz00_bglt BgL_tmpz00_3341;

							BgL_tmpz00_3341 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_tmp1107z00_1622));
							BgL_auxz00_3340 = BGL_OBJECT_WIDENING(BgL_tmpz00_3341);
						}
						BgL_auxz00_3339 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3340);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3339))->
							BgL_kontz00) = ((obj_t) BNIL), BUNSPEC);
				}
				{
					bool_t BgL_auxz00_3354;
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3347;

					{	/* Integrate/a.scm 64 */
						bool_t BgL_res2078z00_2489;

						BgL_res2078z00_2489 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_funz00_5), BGl_globalz00zzast_varz00);
						BgL_auxz00_3354 = BgL_res2078z00_2489;
					}
					{
						obj_t BgL_auxz00_3348;

						{	/* Integrate/a.scm 64 */
							BgL_objectz00_bglt BgL_tmpz00_3349;

							BgL_tmpz00_3349 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_tmp1107z00_1622));
							BgL_auxz00_3348 = BGL_OBJECT_WIDENING(BgL_tmpz00_3349);
						}
						BgL_auxz00_3347 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3348);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3347))->
							BgL_gzf3zf3) = ((bool_t) BgL_auxz00_3354), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3358;

					{
						obj_t BgL_auxz00_3359;

						{	/* Integrate/iinfo.scm 75 */
							BgL_objectz00_bglt BgL_tmpz00_3360;

							BgL_tmpz00_3360 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_tmp1107z00_1622));
							BgL_auxz00_3359 = BGL_OBJECT_WIDENING(BgL_tmpz00_3360);
						}
						BgL_auxz00_3358 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3359);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3358))->
							BgL_forcegzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3366;

					{
						obj_t BgL_auxz00_3367;

						{	/* Integrate/iinfo.scm 75 */
							BgL_objectz00_bglt BgL_tmpz00_3368;

							BgL_tmpz00_3368 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_tmp1107z00_1622));
							BgL_auxz00_3367 = BGL_OBJECT_WIDENING(BgL_tmpz00_3368);
						}
						BgL_auxz00_3366 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3367);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3366))->BgL_lz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3374;

					{
						obj_t BgL_auxz00_3375;

						{	/* Integrate/iinfo.scm 75 */
							BgL_objectz00_bglt BgL_tmpz00_3376;

							BgL_tmpz00_3376 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_tmp1107z00_1622));
							BgL_auxz00_3375 = BGL_OBJECT_WIDENING(BgL_tmpz00_3376);
						}
						BgL_auxz00_3374 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3375);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3374))->BgL_ledz00) =
						((obj_t) BNIL), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3382;

					{
						obj_t BgL_auxz00_3383;

						{	/* Integrate/iinfo.scm 75 */
							BgL_objectz00_bglt BgL_tmpz00_3384;

							BgL_tmpz00_3384 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_tmp1107z00_1622));
							BgL_auxz00_3383 = BGL_OBJECT_WIDENING(BgL_tmpz00_3384);
						}
						BgL_auxz00_3382 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3383);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3382))->
							BgL_istampz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3390;

					{
						obj_t BgL_auxz00_3391;

						{	/* Integrate/iinfo.scm 75 */
							BgL_objectz00_bglt BgL_tmpz00_3392;

							BgL_tmpz00_3392 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_tmp1107z00_1622));
							BgL_auxz00_3391 = BGL_OBJECT_WIDENING(BgL_tmpz00_3392);
						}
						BgL_auxz00_3390 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3391);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3390))->
							BgL_globalz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3398;

					{
						obj_t BgL_auxz00_3399;

						{	/* Integrate/iinfo.scm 75 */
							BgL_objectz00_bglt BgL_tmpz00_3400;

							BgL_tmpz00_3400 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_tmp1107z00_1622));
							BgL_auxz00_3399 = BGL_OBJECT_WIDENING(BgL_tmpz00_3400);
						}
						BgL_auxz00_3398 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3399);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3398))->
							BgL_kapturedz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3406;

					{
						obj_t BgL_auxz00_3407;

						{	/* Integrate/iinfo.scm 75 */
							BgL_objectz00_bglt BgL_tmpz00_3408;

							BgL_tmpz00_3408 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_tmp1107z00_1622));
							BgL_auxz00_3407 = BGL_OBJECT_WIDENING(BgL_tmpz00_3408);
						}
						BgL_auxz00_3406 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3407);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3406))->
							BgL_tailzd2coercionzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3414;

					{
						obj_t BgL_auxz00_3415;

						{	/* Integrate/iinfo.scm 75 */
							BgL_objectz00_bglt BgL_tmpz00_3416;

							BgL_tmpz00_3416 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_tmp1107z00_1622));
							BgL_auxz00_3415 = BGL_OBJECT_WIDENING(BgL_tmpz00_3416);
						}
						BgL_auxz00_3414 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3415);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3414))->
							BgL_xhdlzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				((BgL_sfunz00_bglt) BgL_tmp1107z00_1622);
			}
			{	/* Integrate/a.scm 65 */
				obj_t BgL_g1298z00_1627;

				BgL_g1298z00_1627 =
					(((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt)
								(((BgL_variablez00_bglt) COBJECT(BgL_funz00_5))->
									BgL_valuez00))))->BgL_argsz00);
				{
					obj_t BgL_l1296z00_1629;

					BgL_l1296z00_1629 = BgL_g1298z00_1627;
				BgL_zc3z04anonymousza31368ze3z87_1630:
					if (PAIRP(BgL_l1296z00_1629))
						{	/* Integrate/a.scm 67 */
							{	/* Integrate/a.scm 66 */
								obj_t BgL_xz00_1632;

								BgL_xz00_1632 = CAR(BgL_l1296z00_1629);
								{	/* Integrate/a.scm 66 */
									BgL_svarz00_bglt BgL_tmp1111z00_1633;

									BgL_tmp1111z00_1633 =
										((BgL_svarz00_bglt)
										(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt) BgL_xz00_1632))))->
											BgL_valuez00));
									{	/* Integrate/a.scm 66 */
										BgL_svarzf2iinfozf2_bglt BgL_wide1113z00_1635;

										BgL_wide1113z00_1635 =
											((BgL_svarzf2iinfozf2_bglt)
											BOBJECT(GC_MALLOC(sizeof(struct
														BgL_svarzf2iinfozf2_bgl))));
										{	/* Integrate/a.scm 66 */
											obj_t BgL_auxz00_3437;
											BgL_objectz00_bglt BgL_tmpz00_3434;

											BgL_auxz00_3437 = ((obj_t) BgL_wide1113z00_1635);
											BgL_tmpz00_3434 =
												((BgL_objectz00_bglt)
												((BgL_svarz00_bglt) BgL_tmp1111z00_1633));
											BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3434, BgL_auxz00_3437);
										}
										((BgL_objectz00_bglt)
											((BgL_svarz00_bglt) BgL_tmp1111z00_1633));
										{	/* Integrate/a.scm 66 */
											long BgL_arg1381z00_1636;

											{	/* Integrate/a.scm 66 */
												long BgL_res2080z00_2505;

												BgL_res2080z00_2505 =
													BGL_CLASS_INDEX
													(BGl_svarzf2Iinfozf2zzintegrate_infoz00);
												BgL_arg1381z00_1636 = BgL_res2080z00_2505;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt)
													((BgL_svarz00_bglt) BgL_tmp1111z00_1633)),
												BgL_arg1381z00_1636);
										}
										((BgL_svarz00_bglt)
											((BgL_svarz00_bglt) BgL_tmp1111z00_1633));
									}
									{
										BgL_svarzf2iinfozf2_bglt BgL_auxz00_3448;

										{
											obj_t BgL_auxz00_3449;

											{	/* Integrate/a.scm 66 */
												BgL_objectz00_bglt BgL_tmpz00_3450;

												BgL_tmpz00_3450 =
													((BgL_objectz00_bglt)
													((BgL_svarz00_bglt) BgL_tmp1111z00_1633));
												BgL_auxz00_3449 = BGL_OBJECT_WIDENING(BgL_tmpz00_3450);
											}
											BgL_auxz00_3448 =
												((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3449);
										}
										((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3448))->
												BgL_fzd2markzd2) = ((obj_t) BUNSPEC), BUNSPEC);
									}
									{
										BgL_svarzf2iinfozf2_bglt BgL_auxz00_3456;

										{
											obj_t BgL_auxz00_3457;

											{	/* Integrate/a.scm 66 */
												BgL_objectz00_bglt BgL_tmpz00_3458;

												BgL_tmpz00_3458 =
													((BgL_objectz00_bglt)
													((BgL_svarz00_bglt) BgL_tmp1111z00_1633));
												BgL_auxz00_3457 = BGL_OBJECT_WIDENING(BgL_tmpz00_3458);
											}
											BgL_auxz00_3456 =
												((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3457);
										}
										((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3456))->
												BgL_uzd2markzd2) = ((obj_t) BUNSPEC), BUNSPEC);
									}
									{
										BgL_svarzf2iinfozf2_bglt BgL_auxz00_3464;

										{
											obj_t BgL_auxz00_3465;

											{	/* Integrate/a.scm 66 */
												BgL_objectz00_bglt BgL_tmpz00_3466;

												BgL_tmpz00_3466 =
													((BgL_objectz00_bglt)
													((BgL_svarz00_bglt) BgL_tmp1111z00_1633));
												BgL_auxz00_3465 = BGL_OBJECT_WIDENING(BgL_tmpz00_3466);
											}
											BgL_auxz00_3464 =
												((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3465);
										}
										((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3464))->
												BgL_kapturedzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
									}
									{
										BgL_svarzf2iinfozf2_bglt BgL_auxz00_3472;

										{
											obj_t BgL_auxz00_3473;

											{	/* Integrate/a.scm 66 */
												BgL_objectz00_bglt BgL_tmpz00_3474;

												BgL_tmpz00_3474 =
													((BgL_objectz00_bglt)
													((BgL_svarz00_bglt) BgL_tmp1111z00_1633));
												BgL_auxz00_3473 = BGL_OBJECT_WIDENING(BgL_tmpz00_3474);
											}
											BgL_auxz00_3472 =
												((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3473);
										}
										((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3472))->
												BgL_celledzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
									}
									{
										BgL_svarzf2iinfozf2_bglt BgL_auxz00_3480;

										{
											obj_t BgL_auxz00_3481;

											{	/* Integrate/a.scm 66 */
												BgL_objectz00_bglt BgL_tmpz00_3482;

												BgL_tmpz00_3482 =
													((BgL_objectz00_bglt)
													((BgL_svarz00_bglt) BgL_tmp1111z00_1633));
												BgL_auxz00_3481 = BGL_OBJECT_WIDENING(BgL_tmpz00_3482);
											}
											BgL_auxz00_3480 =
												((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3481);
										}
										((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3480))->
												BgL_xhdlz00) = ((obj_t) BFALSE), BUNSPEC);
									}
									((BgL_svarz00_bglt) BgL_tmp1111z00_1633);
							}}
							{
								obj_t BgL_l1296z00_3489;

								BgL_l1296z00_3489 = CDR(BgL_l1296z00_1629);
								BgL_l1296z00_1629 = BgL_l1296z00_3489;
								goto BgL_zc3z04anonymousza31368ze3z87_1630;
							}
						}
					else
						{	/* Integrate/a.scm 67 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* get-new-kont */
	obj_t BGl_getzd2newzd2kontz00zzintegrate_az00()
	{
		{	/* Integrate/a.scm 77 */
			BGl_za2kontza2z00zzintegrate_az00 =
				ADDFX(BINT(((long) 1)), BGl_za2kontza2z00zzintegrate_az00);
			return BGl_za2kontza2z00zzintegrate_az00;
		}

	}



/* trace-A */
	obj_t BGl_tracezd2Azd2zzintegrate_az00(obj_t BgL_az00_7, obj_t BgL_msgz00_8)
	{
		{	/* Integrate/a.scm 84 */
			{	/* Integrate/a.scm 85 */
				obj_t BgL_pz00_1641;

				{	/* Integrate/a.scm 87 */
					obj_t BgL_zc3z04anonymousza31385ze3z87_2778;

					BgL_zc3z04anonymousza31385ze3z87_2778 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31385ze3ze5zzintegrate_az00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31385ze3z87_2778,
						(int) (((long) 0)), BgL_az00_7);
					BgL_pz00_1641 =
						BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
						(BgL_zc3z04anonymousza31385ze3z87_2778);
				}
				return BNIL;
			}
		}

	}



/* &<@anonymous:1385> */
	obj_t BGl_z62zc3z04anonymousza31385ze3ze5zzintegrate_az00(obj_t
		BgL_envz00_2779)
	{
		{	/* Integrate/a.scm 86 */
			{	/* Integrate/a.scm 87 */
				obj_t BgL_az00_2780;

				BgL_az00_2780 = PROCEDURE_REF(BgL_envz00_2779, (int) (((long) 0)));
				{	/* Integrate/a.scm 87 */
					bool_t BgL_tmpz00_3501;

					{
						obj_t BgL_l1300z00_2938;

						BgL_l1300z00_2938 = BgL_az00_2780;
					BgL_zc3z04anonymousza31386ze3z87_2937:
						if (PAIRP(BgL_l1300z00_2938))
							{	/* Integrate/a.scm 87 */
								{	/* Integrate/a.scm 88 */
									obj_t BgL_az00_2939;

									BgL_az00_2939 = CAR(BgL_l1300z00_2938);
									{	/* Integrate/a.scm 88 */
										obj_t BgL_port1299z00_2940;

										{	/* Integrate/a.scm 88 */
											obj_t BgL_res2083z00_2941;

											{	/* Integrate/a.scm 88 */
												obj_t BgL_tmpz00_3505;

												BgL_tmpz00_3505 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res2083z00_2941 =
													BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_3505);
											}
											BgL_port1299z00_2940 = BgL_res2083z00_2941;
										}
										bgl_display_string(BGl_string2133z00zzintegrate_az00,
											BgL_port1299z00_2940);
										{	/* Integrate/a.scm 88 */
											obj_t BgL_arg1394z00_2942;

											{	/* Integrate/a.scm 88 */
												obj_t BgL_arg1396z00_2943;

												BgL_arg1396z00_2943 = CAR(((obj_t) BgL_az00_2939));
												BgL_arg1394z00_2942 =
													BGl_shapez00zztools_shapez00(BgL_arg1396z00_2943);
											}
											bgl_display_obj(BgL_arg1394z00_2942,
												BgL_port1299z00_2940);
										}
										bgl_display_string(BGl_string2134z00zzintegrate_az00,
											BgL_port1299z00_2940);
										{	/* Integrate/a.scm 89 */
											obj_t BgL_arg1417z00_2944;

											{	/* Integrate/a.scm 89 */
												obj_t BgL_arg1418z00_2945;

												{	/* Integrate/a.scm 89 */
													obj_t BgL_pairz00_2946;

													BgL_pairz00_2946 = CDR(((obj_t) BgL_az00_2939));
													BgL_arg1418z00_2945 = CAR(BgL_pairz00_2946);
												}
												BgL_arg1417z00_2944 =
													BGl_shapez00zztools_shapez00(BgL_arg1418z00_2945);
											}
											bgl_display_obj(BgL_arg1417z00_2944,
												BgL_port1299z00_2940);
										}
										bgl_display_string(BGl_string2134z00zzintegrate_az00,
											BgL_port1299z00_2940);
										{	/* Integrate/a.scm 90 */
											obj_t BgL_arg1421z00_2947;

											{	/* Integrate/a.scm 90 */
												obj_t BgL_arg1422z00_2948;

												{	/* Integrate/a.scm 90 */
													obj_t BgL_pairz00_2949;

													{	/* Integrate/a.scm 90 */
														obj_t BgL_pairz00_2950;

														BgL_pairz00_2950 = CDR(((obj_t) BgL_az00_2939));
														BgL_pairz00_2949 = CDR(BgL_pairz00_2950);
													}
													BgL_arg1422z00_2948 = CAR(BgL_pairz00_2949);
												}
												BgL_arg1421z00_2947 =
													BGl_shapez00zztools_shapez00(BgL_arg1422z00_2948);
											}
											bgl_display_obj(BgL_arg1421z00_2947,
												BgL_port1299z00_2940);
										}
										bgl_display_string(BGl_string2135z00zzintegrate_az00,
											BgL_port1299z00_2940);
										bgl_display_char(((unsigned char) 10),
											BgL_port1299z00_2940);
								}}
								{
									obj_t BgL_l1300z00_3528;

									BgL_l1300z00_3528 = CDR(BgL_l1300z00_2938);
									BgL_l1300z00_2938 = BgL_l1300z00_3528;
									goto BgL_zc3z04anonymousza31386ze3z87_2937;
								}
							}
						else
							{	/* Integrate/a.scm 87 */
								BgL_tmpz00_3501 = ((bool_t) 1);
							}
					}
					return BBOOL(BgL_tmpz00_3501);
				}
			}
		}

	}



/* tail-type-compatible? */
	bool_t BGl_tailzd2typezd2compatiblezf3zf3zzintegrate_az00(obj_t BgL_t1z00_9,
		BgL_typez00_bglt BgL_t2z00_10)
	{
		{	/* Integrate/a.scm 106 */
			{	/* Integrate/a.scm 107 */
				bool_t BgL__ortest_1115z00_1659;

				BgL__ortest_1115z00_1659 = (BgL_t1z00_9 == ((obj_t) BgL_t2z00_10));
				if (BgL__ortest_1115z00_1659)
					{	/* Integrate/a.scm 107 */
						return BgL__ortest_1115z00_1659;
					}
				else
					{	/* Integrate/a.scm 108 */
						bool_t BgL__ortest_1116z00_1660;

						if ((BgL_t1z00_9 == BGl_za2intza2z00zztype_cachez00))
							{	/* Integrate/a.scm 108 */
								BgL__ortest_1116z00_1660 =
									(((obj_t) BgL_t2z00_10) == BGl_za2longza2z00zztype_cachez00);
							}
						else
							{	/* Integrate/a.scm 108 */
								BgL__ortest_1116z00_1660 = ((bool_t) 0);
							}
						if (BgL__ortest_1116z00_1660)
							{	/* Integrate/a.scm 108 */
								return BgL__ortest_1116z00_1660;
							}
						else
							{	/* Integrate/a.scm 109 */
								bool_t BgL__ortest_1117z00_1661;

								if ((BgL_t1z00_9 == BGl_za2longza2z00zztype_cachez00))
									{	/* Integrate/a.scm 109 */
										BgL__ortest_1117z00_1661 =
											(
											((obj_t) BgL_t2z00_10) ==
											BGl_za2intza2z00zztype_cachez00);
									}
								else
									{	/* Integrate/a.scm 109 */
										BgL__ortest_1117z00_1661 = ((bool_t) 0);
									}
								if (BgL__ortest_1117z00_1661)
									{	/* Integrate/a.scm 109 */
										return BgL__ortest_1117z00_1661;
									}
								else
									{	/* Integrate/a.scm 109 */
										if (BGl_bigloozd2typezf3z21zztype_typez00(
												((BgL_typez00_bglt) BgL_t1z00_9)))
											{	/* Integrate/a.scm 112 */
												return
													BGl_bigloozd2typezf3z21zztype_typez00(BgL_t2z00_10);
											}
										else
											{	/* Integrate/a.scm 112 */
												return ((bool_t) 0);
											}
									}
							}
					}
			}
		}

	}



/* tail-coercion */
	obj_t BGl_tailzd2coercionzd2zzintegrate_az00(obj_t BgL_az00_11,
		BgL_globalz00_bglt BgL_globalz00_12)
	{
		{	/* Integrate/a.scm 122 */
			{
				obj_t BgL_l1302z00_1666;

				BgL_l1302z00_1666 = BgL_az00_11;
			BgL_zc3z04anonymousza31442ze3z87_1667:
				if (PAIRP(BgL_l1302z00_1666))
					{	/* Integrate/a.scm 124 */
						{	/* Integrate/a.scm 125 */
							obj_t BgL_az00_1669;

							BgL_az00_1669 = CAR(BgL_l1302z00_1666);
							{
								obj_t BgL_calleez00_1670;
								obj_t BgL_typez00_1671;

								if (PAIRP(BgL_az00_1669))
									{	/* Integrate/a.scm 125 */
										obj_t BgL_cdrzd2366zd2_1675;

										BgL_cdrzd2366zd2_1675 = CDR(BgL_az00_1669);
										if (PAIRP(BgL_cdrzd2366zd2_1675))
											{	/* Integrate/a.scm 125 */
												obj_t BgL_cdrzd2370zd2_1677;

												BgL_cdrzd2370zd2_1677 = CDR(BgL_cdrzd2366zd2_1675);
												if (PAIRP(BgL_cdrzd2370zd2_1677))
													{	/* Integrate/a.scm 125 */
														obj_t BgL_carzd2373zd2_1679;

														BgL_carzd2373zd2_1679 = CAR(BgL_cdrzd2370zd2_1677);
														if (PAIRP(BgL_carzd2373zd2_1679))
															{	/* Integrate/a.scm 125 */
																if (NULLP(CDR(BgL_cdrzd2370zd2_1677)))
																	{	/* Integrate/a.scm 125 */
																		BgL_calleez00_1670 =
																			CAR(BgL_cdrzd2366zd2_1675);
																		BgL_typez00_1671 =
																			CDR(BgL_carzd2373zd2_1679);
																		{	/* Integrate/a.scm 127 */
																			BgL_valuez00_bglt BgL_funz00_1686;

																			BgL_funz00_1686 =
																				(((BgL_variablez00_bglt) COBJECT(
																						((BgL_variablez00_bglt)
																							BgL_calleez00_1670)))->
																				BgL_valuez00);
																			{	/* Integrate/a.scm 130 */
																				bool_t BgL_test2225z00_3567;

																				{	/* Integrate/a.scm 130 */
																					obj_t BgL_tmpz00_3568;

																					{
																						BgL_sfunzf2iinfozf2_bglt
																							BgL_auxz00_3569;
																						{
																							obj_t BgL_auxz00_3570;

																							{	/* Integrate/a.scm 130 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_3571;
																								BgL_tmpz00_3571 =
																									((BgL_objectz00_bglt) (
																										(BgL_sfunz00_bglt)
																										BgL_funz00_1686));
																								BgL_auxz00_3570 =
																									BGL_OBJECT_WIDENING
																									(BgL_tmpz00_3571);
																							}
																							BgL_auxz00_3569 =
																								((BgL_sfunzf2iinfozf2_bglt)
																								BgL_auxz00_3570);
																						}
																						BgL_tmpz00_3568 =
																							(((BgL_sfunzf2iinfozf2_bglt)
																								COBJECT(BgL_auxz00_3569))->
																							BgL_tailzd2coercionzd2);
																					}
																					BgL_test2225z00_3567 =
																						CBOOL(BgL_tmpz00_3568);
																				}
																				if (BgL_test2225z00_3567)
																					{	/* Integrate/a.scm 130 */
																						if (BGl_isazf3zf3zz__objectz00
																							(BgL_typez00_1671,
																								BGl_typez00zztype_typez00))
																							{	/* Integrate/a.scm 134 */
																								bool_t BgL_test2227z00_3580;

																								if (
																									(BgL_typez00_1671 ==
																										BGl_za2objza2z00zztype_cachez00))
																									{	/* Integrate/a.scm 134 */
																										BgL_test2227z00_3580 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Integrate/a.scm 134 */
																										BgL_test2227z00_3580 =
																											(BgL_typez00_1671 ==
																											BGl_za2magicza2z00zztype_cachez00);
																									}
																								if (BgL_test2227z00_3580)
																									{	/* Integrate/a.scm 134 */
																										BUNSPEC;
																									}
																								else
																									{	/* Integrate/a.scm 136 */
																										bool_t BgL_test2229z00_3584;

																										{	/* Integrate/a.scm 136 */
																											obj_t BgL_arg1573z00_1723;

																											{
																												BgL_sfunzf2iinfozf2_bglt
																													BgL_auxz00_3585;
																												{
																													obj_t BgL_auxz00_3586;

																													{	/* Integrate/a.scm 136 */
																														BgL_objectz00_bglt
																															BgL_tmpz00_3587;
																														BgL_tmpz00_3587 =
																															(
																															(BgL_objectz00_bglt)
																															((BgL_sfunz00_bglt) BgL_funz00_1686));
																														BgL_auxz00_3586 =
																															BGL_OBJECT_WIDENING
																															(BgL_tmpz00_3587);
																													}
																													BgL_auxz00_3585 =
																														(
																														(BgL_sfunzf2iinfozf2_bglt)
																														BgL_auxz00_3586);
																												}
																												BgL_arg1573z00_1723 =
																													(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3585))->BgL_tailzd2coercionzd2);
																											}
																											BgL_test2229z00_3584 =
																												(BgL_arg1573z00_1723 ==
																												BUNSPEC);
																										}
																										if (BgL_test2229z00_3584)
																											{
																												BgL_sfunzf2iinfozf2_bglt
																													BgL_auxz00_3594;
																												{
																													obj_t BgL_auxz00_3595;

																													{	/* Integrate/a.scm 137 */
																														BgL_objectz00_bglt
																															BgL_tmpz00_3596;
																														BgL_tmpz00_3596 =
																															(
																															(BgL_objectz00_bglt)
																															((BgL_sfunz00_bglt) BgL_funz00_1686));
																														BgL_auxz00_3595 =
																															BGL_OBJECT_WIDENING
																															(BgL_tmpz00_3596);
																													}
																													BgL_auxz00_3594 =
																														(
																														(BgL_sfunzf2iinfozf2_bglt)
																														BgL_auxz00_3595);
																												}
																												((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3594))->BgL_tailzd2coercionzd2) = ((obj_t) BgL_typez00_1671), BUNSPEC);
																											}
																										else
																											{	/* Integrate/a.scm 138 */
																												bool_t
																													BgL_test2230z00_3602;
																												if ((BgL_typez00_1671 ==
																														BGl_za2pairzd2nilza2zd2zztype_cachez00))
																													{	/* Integrate/a.scm 138 */
																														BgL_test2230z00_3602
																															= ((bool_t) 1);
																													}
																												else
																													{	/* Integrate/a.scm 138 */
																														BgL_test2230z00_3602
																															=
																															(BgL_typez00_1671
																															==
																															BGl_za2magicza2z00zztype_cachez00);
																													}
																												if (BgL_test2230z00_3602)
																													{	/* Integrate/a.scm 138 */
																														BUNSPEC;
																													}
																												else
																													{	/* Integrate/a.scm 140 */
																														bool_t
																															BgL_test2232z00_3606;
																														{	/* Integrate/a.scm 140 */
																															bool_t
																																BgL_test2233z00_3607;
																															if (
																																(BgL_typez00_1671
																																	==
																																	BGl_za2pairzd2nilza2zd2zztype_cachez00))
																																{	/* Integrate/a.scm 141 */
																																	obj_t
																																		BgL_arg1565z00_1721;
																																	{
																																		BgL_sfunzf2iinfozf2_bglt
																																			BgL_auxz00_3610;
																																		{
																																			obj_t
																																				BgL_auxz00_3611;
																																			{	/* Integrate/a.scm 141 */
																																				BgL_objectz00_bglt
																																					BgL_tmpz00_3612;
																																				BgL_tmpz00_3612
																																					=
																																					(
																																					(BgL_objectz00_bglt)
																																					((BgL_sfunz00_bglt) BgL_funz00_1686));
																																				BgL_auxz00_3611
																																					=
																																					BGL_OBJECT_WIDENING
																																					(BgL_tmpz00_3612);
																																			}
																																			BgL_auxz00_3610
																																				=
																																				(
																																				(BgL_sfunzf2iinfozf2_bglt)
																																				BgL_auxz00_3611);
																																		}
																																		BgL_arg1565z00_1721
																																			=
																																			(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3610))->BgL_tailzd2coercionzd2);
																																	}
																																	BgL_test2233z00_3607
																																		=
																																		(BgL_arg1565z00_1721
																																		==
																																		BGl_za2pairza2z00zztype_cachez00);
																																}
																															else
																																{	/* Integrate/a.scm 140 */
																																	BgL_test2233z00_3607
																																		=
																																		((bool_t)
																																		0);
																																}
																															if (BgL_test2233z00_3607)
																																{	/* Integrate/a.scm 140 */
																																	BgL_test2232z00_3606
																																		=
																																		((bool_t)
																																		1);
																																}
																															else
																																{	/* Integrate/a.scm 140 */
																																	if (
																																		(BgL_typez00_1671
																																			==
																																			BGl_za2pairza2z00zztype_cachez00))
																																		{	/* Integrate/a.scm 143 */
																																			obj_t
																																				BgL_arg1564z00_1719;
																																			{
																																				BgL_sfunzf2iinfozf2_bglt
																																					BgL_auxz00_3621;
																																				{
																																					obj_t
																																						BgL_auxz00_3622;
																																					{	/* Integrate/a.scm 143 */
																																						BgL_objectz00_bglt
																																							BgL_tmpz00_3623;
																																						BgL_tmpz00_3623
																																							=
																																							(
																																							(BgL_objectz00_bglt)
																																							((BgL_sfunz00_bglt) BgL_funz00_1686));
																																						BgL_auxz00_3622
																																							=
																																							BGL_OBJECT_WIDENING
																																							(BgL_tmpz00_3623);
																																					}
																																					BgL_auxz00_3621
																																						=
																																						(
																																						(BgL_sfunzf2iinfozf2_bglt)
																																						BgL_auxz00_3622);
																																				}
																																				BgL_arg1564z00_1719
																																					=
																																					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3621))->BgL_tailzd2coercionzd2);
																																			}
																																			BgL_test2232z00_3606
																																				=
																																				(BgL_arg1564z00_1719
																																				==
																																				BGl_za2pairzd2nilza2zd2zztype_cachez00);
																																		}
																																	else
																																		{	/* Integrate/a.scm 142 */
																																			BgL_test2232z00_3606
																																				=
																																				(
																																				(bool_t)
																																				0);
																																		}
																																}
																														}
																														if (BgL_test2232z00_3606)
																															{	/* Integrate/a.scm 140 */
																																BUNSPEC;
																															}
																														else
																															{	/* Integrate/a.scm 145 */
																																bool_t
																																	BgL_test2236z00_3630;
																																{	/* Integrate/a.scm 145 */
																																	obj_t
																																		BgL_arg1561z00_1716;
																																	{
																																		BgL_sfunzf2iinfozf2_bglt
																																			BgL_auxz00_3631;
																																		{
																																			obj_t
																																				BgL_auxz00_3632;
																																			{	/* Integrate/a.scm 145 */
																																				BgL_objectz00_bglt
																																					BgL_tmpz00_3633;
																																				BgL_tmpz00_3633
																																					=
																																					(
																																					(BgL_objectz00_bglt)
																																					((BgL_sfunz00_bglt) BgL_funz00_1686));
																																				BgL_auxz00_3632
																																					=
																																					BGL_OBJECT_WIDENING
																																					(BgL_tmpz00_3633);
																																			}
																																			BgL_auxz00_3631
																																				=
																																				(
																																				(BgL_sfunzf2iinfozf2_bglt)
																																				BgL_auxz00_3632);
																																		}
																																		BgL_arg1561z00_1716
																																			=
																																			(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3631))->BgL_tailzd2coercionzd2);
																																	}
																																	BgL_test2236z00_3630
																																		=
																																		BGl_tailzd2typezd2compatiblezf3zf3zzintegrate_az00
																																		(BgL_arg1561z00_1716,
																																		((BgL_typez00_bglt) BgL_typez00_1671));
																																}
																																if (BgL_test2236z00_3630)
																																	{	/* Integrate/a.scm 145 */
																																		BFALSE;
																																	}
																																else
																																	{	/* Integrate/a.scm 145 */
																																		if (BGl_isazf3zf3zz__objectz00(BgL_calleez00_1670, BGl_localz00zzast_varz00))
																																			{	/* Integrate/a.scm 148 */
																																				obj_t
																																					BgL_arg1518z00_1707;
																																				obj_t
																																					BgL_arg1521z00_1708;
																																				obj_t
																																					BgL_arg1528z00_1709;
																																				BgL_arg1518z00_1707
																																					=
																																					(((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) (((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_1686))))->BgL_bodyz00))))->BgL_locz00);
																																				BgL_arg1521z00_1708
																																					=
																																					BGl_shapez00zztools_shapez00
																																					(BgL_calleez00_1670);
																																				{	/* Integrate/a.scm 152 */
																																					obj_t
																																						BgL_arg1537z00_1711;
																																					obj_t
																																						BgL_arg1540z00_1712;
																																					{	/* Integrate/a.scm 152 */
																																						obj_t
																																							BgL_arg1558z00_1715;
																																						{
																																							BgL_sfunzf2iinfozf2_bglt
																																								BgL_auxz00_3649;
																																							{
																																								obj_t
																																									BgL_auxz00_3650;
																																								{	/* Integrate/a.scm 152 */
																																									BgL_objectz00_bglt
																																										BgL_tmpz00_3651;
																																									BgL_tmpz00_3651
																																										=
																																										(
																																										(BgL_objectz00_bglt)
																																										((BgL_sfunz00_bglt) BgL_funz00_1686));
																																									BgL_auxz00_3650
																																										=
																																										BGL_OBJECT_WIDENING
																																										(BgL_tmpz00_3651);
																																								}
																																								BgL_auxz00_3649
																																									=
																																									(
																																									(BgL_sfunzf2iinfozf2_bglt)
																																									BgL_auxz00_3650);
																																							}
																																							BgL_arg1558z00_1715
																																								=
																																								(
																																								((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3649))->BgL_tailzd2coercionzd2);
																																						}
																																						BgL_arg1537z00_1711
																																							=
																																							BGl_shapez00zztools_shapez00
																																							(BgL_arg1558z00_1715);
																																					}
																																					BgL_arg1540z00_1712
																																						=
																																						BGl_shapez00zztools_shapez00
																																						(BgL_typez00_1671);
																																					{	/* Integrate/a.scm 152 */
																																						obj_t
																																							BgL_list1541z00_1713;
																																						{	/* Integrate/a.scm 152 */
																																							obj_t
																																								BgL_arg1552z00_1714;
																																							BgL_arg1552z00_1714
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_arg1540z00_1712,
																																								BNIL);
																																							BgL_list1541z00_1713
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_arg1537z00_1711,
																																								BgL_arg1552z00_1714);
																																						}
																																						BgL_arg1528z00_1709
																																							=
																																							BGl_formatz00zz__r4_output_6_10_3z00
																																							(BGl_string2136z00zzintegrate_az00,
																																							BgL_list1541z00_1713);
																																					}
																																				}
																																				BGl_userzd2warningzf2locationz20zztools_errorz00
																																					(BgL_arg1518z00_1707,
																																					BgL_arg1521z00_1708,
																																					BGl_string2137z00zzintegrate_az00,
																																					BgL_arg1528z00_1709);
																																			}
																																		else
																																			{	/* Integrate/a.scm 146 */
																																				BFALSE;
																																			}
																																		{
																																			BgL_sfunzf2iinfozf2_bglt
																																				BgL_auxz00_3663;
																																			{
																																				obj_t
																																					BgL_auxz00_3664;
																																				{	/* Integrate/a.scm 153 */
																																					BgL_objectz00_bglt
																																						BgL_tmpz00_3665;
																																					BgL_tmpz00_3665
																																						=
																																						(
																																						(BgL_objectz00_bglt)
																																						((BgL_sfunz00_bglt) BgL_funz00_1686));
																																					BgL_auxz00_3664
																																						=
																																						BGL_OBJECT_WIDENING
																																						(BgL_tmpz00_3665);
																																				}
																																				BgL_auxz00_3663
																																					=
																																					(
																																					(BgL_sfunzf2iinfozf2_bglt)
																																					BgL_auxz00_3664);
																																			}
																																			((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3663))->BgL_tailzd2coercionzd2) = ((obj_t) BFALSE), BUNSPEC);
																																		}
																																	}
																															}
																													}
																											}
																									}
																							}
																						else
																							{	/* Integrate/a.scm 132 */
																								BUNSPEC;
																							}
																					}
																				else
																					{	/* Integrate/a.scm 130 */
																						BUNSPEC;
																					}
																			}
																		}
																	}
																else
																	{	/* Integrate/a.scm 125 */
																		BFALSE;
																	}
															}
														else
															{	/* Integrate/a.scm 125 */
																BFALSE;
															}
													}
												else
													{	/* Integrate/a.scm 125 */
														BFALSE;
													}
											}
										else
											{	/* Integrate/a.scm 125 */
												BFALSE;
											}
									}
								else
									{	/* Integrate/a.scm 125 */
										BFALSE;
									}
							}
						}
						{
							obj_t BgL_l1302z00_3673;

							BgL_l1302z00_3673 = CDR(BgL_l1302z00_1666);
							BgL_l1302z00_1666 = BgL_l1302z00_3673;
							goto BgL_zc3z04anonymousza31442ze3z87_1667;
						}
					}
				else
					{	/* Integrate/a.scm 124 */
						((bool_t) 1);
					}
			}
			if (NULLP(BgL_az00_11))
				{	/* Integrate/a.scm 156 */
					return BNIL;
				}
			else
				{	/* Integrate/a.scm 156 */
					obj_t BgL_head1306z00_1729;

					{	/* Integrate/a.scm 156 */
						obj_t BgL_res2093z00_2568;

						BgL_res2093z00_2568 = MAKE_YOUNG_PAIR(BNIL, BNIL);
						BgL_head1306z00_1729 = BgL_res2093z00_2568;
					}
					{
						obj_t BgL_l1304z00_1731;
						obj_t BgL_tail1307z00_1732;

						BgL_l1304z00_1731 = BgL_az00_11;
						BgL_tail1307z00_1732 = BgL_head1306z00_1729;
					BgL_zc3z04anonymousza31577ze3z87_1733:
						if (NULLP(BgL_l1304z00_1731))
							{	/* Integrate/a.scm 156 */
								return CDR(BgL_head1306z00_1729);
							}
						else
							{	/* Integrate/a.scm 156 */
								obj_t BgL_newtail1308z00_1735;

								{	/* Integrate/a.scm 156 */
									obj_t BgL_arg1584z00_1737;

									{	/* Integrate/a.scm 156 */
										obj_t BgL_az00_1738;

										BgL_az00_1738 = CAR(((obj_t) BgL_l1304z00_1731));
										{
											obj_t BgL_callerz00_1739;
											obj_t BgL_calleez00_1740;
											obj_t BgL_typez00_1741;

											if (PAIRP(BgL_az00_1738))
												{	/* Integrate/a.scm 157 */
													obj_t BgL_cdrzd2391zd2_1751;

													BgL_cdrzd2391zd2_1751 = CDR(BgL_az00_1738);
													if (PAIRP(BgL_cdrzd2391zd2_1751))
														{	/* Integrate/a.scm 157 */
															obj_t BgL_cdrzd2396zd2_1753;

															BgL_cdrzd2396zd2_1753 =
																CDR(BgL_cdrzd2391zd2_1751);
															if (PAIRP(BgL_cdrzd2396zd2_1753))
																{	/* Integrate/a.scm 157 */
																	obj_t BgL_carzd2399zd2_1755;

																	BgL_carzd2399zd2_1755 =
																		CAR(BgL_cdrzd2396zd2_1753);
																	if (PAIRP(BgL_carzd2399zd2_1755))
																		{	/* Integrate/a.scm 157 */
																			if (
																				(CAR(BgL_carzd2399zd2_1755) ==
																					CNST_TABLE_REF(((long) 0))))
																				{	/* Integrate/a.scm 157 */
																					if (NULLP(CDR(BgL_cdrzd2396zd2_1753)))
																						{	/* Integrate/a.scm 157 */
																							BgL_callerz00_1739 =
																								CAR(BgL_az00_1738);
																							BgL_calleez00_1740 =
																								CAR(BgL_cdrzd2391zd2_1751);
																							BgL_typez00_1741 =
																								CDR(BgL_carzd2399zd2_1755);
																							{	/* Integrate/a.scm 159 */
																								BgL_valuez00_bglt
																									BgL_funz00_1776;
																								BgL_funz00_1776 =
																									(((BgL_variablez00_bglt)
																										COBJECT((
																												(BgL_variablez00_bglt)
																												BgL_calleez00_1740)))->
																									BgL_valuez00);
																								{	/* Integrate/a.scm 163 */
																									obj_t BgL_arg1639z00_1778;

																									{	/* Integrate/a.scm 163 */
																										bool_t BgL_test2246z00_3703;

																										{	/* Integrate/a.scm 163 */
																											obj_t BgL_tmpz00_3704;

																											{
																												BgL_sfunzf2iinfozf2_bglt
																													BgL_auxz00_3705;
																												{
																													obj_t BgL_auxz00_3706;

																													{	/* Integrate/a.scm 163 */
																														BgL_objectz00_bglt
																															BgL_tmpz00_3707;
																														BgL_tmpz00_3707 =
																															(
																															(BgL_objectz00_bglt)
																															((BgL_sfunz00_bglt) BgL_funz00_1776));
																														BgL_auxz00_3706 =
																															BGL_OBJECT_WIDENING
																															(BgL_tmpz00_3707);
																													}
																													BgL_auxz00_3705 =
																														(
																														(BgL_sfunzf2iinfozf2_bglt)
																														BgL_auxz00_3706);
																												}
																												BgL_tmpz00_3704 =
																													(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3705))->BgL_tailzd2coercionzd2);
																											}
																											BgL_test2246z00_3703 =
																												CBOOL(BgL_tmpz00_3704);
																										}
																										if (BgL_test2246z00_3703)
																											{	/* Integrate/a.scm 163 */
																												BgL_arg1639z00_1778 =
																													CNST_TABLE_REF(((long)
																														0));
																											}
																										else
																											{	/* Integrate/a.scm 163 */
																												BgL_arg1639z00_1778 =
																													BGl_getzd2newzd2kontz00zzintegrate_az00
																													();
																											}
																									}
																									{	/* Integrate/a.scm 161 */
																										obj_t BgL_list1640z00_1779;

																										{	/* Integrate/a.scm 161 */
																											obj_t BgL_arg1641z00_1780;

																											{	/* Integrate/a.scm 161 */
																												obj_t
																													BgL_arg1644z00_1781;
																												BgL_arg1644z00_1781 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1639z00_1778,
																													BNIL);
																												BgL_arg1641z00_1780 =
																													MAKE_YOUNG_PAIR
																													(BgL_calleez00_1740,
																													BgL_arg1644z00_1781);
																											}
																											BgL_list1640z00_1779 =
																												MAKE_YOUNG_PAIR
																												(BgL_callerz00_1739,
																												BgL_arg1641z00_1780);
																										}
																										BgL_arg1584z00_1737 =
																											BgL_list1640z00_1779;
																									}
																								}
																							}
																						}
																					else
																						{	/* Integrate/a.scm 157 */
																							BgL_arg1584z00_1737 =
																								BgL_az00_1738;
																						}
																				}
																			else
																				{	/* Integrate/a.scm 157 */
																					obj_t BgL_cdrzd2435zd2_1766;

																					BgL_cdrzd2435zd2_1766 =
																						CDR(
																						((obj_t) BgL_cdrzd2391zd2_1751));
																					{	/* Integrate/a.scm 157 */
																						obj_t BgL_carzd2440zd2_1767;

																						BgL_carzd2440zd2_1767 =
																							CAR(
																							((obj_t) BgL_cdrzd2435zd2_1766));
																						if (NULLP(CDR(
																									((obj_t)
																										BgL_cdrzd2435zd2_1766))))
																							{	/* Integrate/a.scm 157 */
																								obj_t BgL_arg1613z00_1770;
																								obj_t BgL_arg1624z00_1771;
																								obj_t BgL_arg1626z00_1772;

																								BgL_arg1613z00_1770 =
																									CAR(BgL_az00_1738);
																								BgL_arg1624z00_1771 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd2391zd2_1751));
																								BgL_arg1626z00_1772 =
																									CAR(((obj_t)
																										BgL_carzd2440zd2_1767));
																								{	/* Integrate/a.scm 165 */
																									obj_t BgL_list1646z00_2601;

																									{	/* Integrate/a.scm 165 */
																										obj_t BgL_arg1652z00_2602;

																										{	/* Integrate/a.scm 165 */
																											obj_t BgL_arg1662z00_2603;

																											BgL_arg1662z00_2603 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1626z00_1772,
																												BNIL);
																											BgL_arg1652z00_2602 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1624z00_1771,
																												BgL_arg1662z00_2603);
																										}
																										BgL_list1646z00_2601 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1613z00_1770,
																											BgL_arg1652z00_2602);
																									}
																									BgL_arg1584z00_1737 =
																										BgL_list1646z00_2601;
																								}
																							}
																						else
																							{	/* Integrate/a.scm 157 */
																								BgL_arg1584z00_1737 =
																									BgL_az00_1738;
																							}
																					}
																				}
																		}
																	else
																		{	/* Integrate/a.scm 157 */
																			BgL_arg1584z00_1737 = BgL_az00_1738;
																		}
																}
															else
																{	/* Integrate/a.scm 157 */
																	BgL_arg1584z00_1737 = BgL_az00_1738;
																}
														}
													else
														{	/* Integrate/a.scm 157 */
															BgL_arg1584z00_1737 = BgL_az00_1738;
														}
												}
											else
												{	/* Integrate/a.scm 157 */
													BgL_arg1584z00_1737 = BgL_az00_1738;
												}
										}
									}
									{	/* Integrate/a.scm 156 */
										obj_t BgL_res2104z00_2605;

										BgL_res2104z00_2605 =
											MAKE_YOUNG_PAIR(BgL_arg1584z00_1737, BNIL);
										BgL_newtail1308z00_1735 = BgL_res2104z00_2605;
									}
								}
								SET_CDR(BgL_tail1307z00_1732, BgL_newtail1308z00_1735);
								{	/* Integrate/a.scm 156 */
									obj_t BgL_arg1582z00_1736;

									BgL_arg1582z00_1736 = CDR(((obj_t) BgL_l1304z00_1731));
									{
										obj_t BgL_tail1307z00_3743;
										obj_t BgL_l1304z00_3742;

										BgL_l1304z00_3742 = BgL_arg1582z00_1736;
										BgL_tail1307z00_3743 = BgL_newtail1308z00_1735;
										BgL_tail1307z00_1732 = BgL_tail1307z00_3743;
										BgL_l1304z00_1731 = BgL_l1304z00_3742;
										goto BgL_zc3z04anonymousza31577ze3z87_1733;
									}
								}
							}
					}
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzintegrate_az00()
	{
		{	/* Integrate/a.scm 18 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_az00()
	{
		{	/* Integrate/a.scm 18 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_proc2138z00zzintegrate_az00,
				BGl_nodez00zzast_nodez00, BGl_string2139z00zzintegrate_az00);
		}

	}



/* &node-A1312 */
	obj_t BGl_z62nodezd2A1312zb0zzintegrate_az00(obj_t BgL_envz00_2782,
		obj_t BgL_nodez00_2783, obj_t BgL_hostz00_2784, obj_t BgL_kz00_2785,
		obj_t BgL_az00_2786)
	{
		{	/* Integrate/a.scm 173 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
				BGl_string2140z00zzintegrate_az00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2783)));
		}

	}



/* node-A */
	obj_t BGl_nodezd2Azd2zzintegrate_az00(BgL_nodez00_bglt BgL_nodez00_13,
		BgL_variablez00_bglt BgL_hostz00_14, obj_t BgL_kz00_15, obj_t BgL_az00_16)
	{
		{	/* Integrate/a.scm 173 */
			{	/* Integrate/a.scm 173 */
				obj_t BgL_method1313z00_1794;

				{	/* Integrate/a.scm 173 */
					obj_t BgL_res2115z00_2644;

					{	/* Integrate/a.scm 173 */
						long BgL_objzd2classzd2numz00_2609;

						{	/* Integrate/a.scm 173 */
							long BgL_res2105z00_2612;

							BgL_res2105z00_2612 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_13));
							BgL_objzd2classzd2numz00_2609 = BgL_res2105z00_2612;
						}
						{	/* Integrate/a.scm 173 */
							obj_t BgL_arg1813z00_2610;

							BgL_arg1813z00_2610 =
								PROCEDURE_REF(BGl_nodezd2Azd2envz00zzintegrate_az00,
								(int) (((long) 1)));
							{	/* Integrate/a.scm 173 */
								int BgL_offsetz00_2614;

								BgL_offsetz00_2614 = (int) (BgL_objzd2classzd2numz00_2609);
								{	/* Integrate/a.scm 173 */
									long BgL_offsetz00_2615;

									BgL_offsetz00_2615 =
										((long) (BgL_offsetz00_2614) - OBJECT_TYPE);
									{	/* Integrate/a.scm 173 */
										long BgL_modz00_2616;

										BgL_modz00_2616 =
											(BgL_offsetz00_2615 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Integrate/a.scm 173 */
											long BgL_restz00_2618;

											BgL_restz00_2618 =
												(BgL_offsetz00_2615 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Integrate/a.scm 173 */

												{	/* Integrate/a.scm 173 */
													obj_t BgL_bucketz00_2620;

													BgL_bucketz00_2620 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2610), BgL_modz00_2616);
													BgL_res2115z00_2644 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2620), BgL_restz00_2618);
					}}}}}}}}
					BgL_method1313z00_1794 = BgL_res2115z00_2644;
				}
				return
					PROCEDURE_ENTRY(BgL_method1313z00_1794) (BgL_method1313z00_1794,
					((obj_t) BgL_nodez00_13),
					((obj_t) BgL_hostz00_14), BgL_kz00_15, BgL_az00_16, BEOA);
			}
		}

	}



/* &node-A */
	obj_t BGl_z62nodezd2Azb0zzintegrate_az00(obj_t BgL_envz00_2787,
		obj_t BgL_nodez00_2788, obj_t BgL_hostz00_2789, obj_t BgL_kz00_2790,
		obj_t BgL_az00_2791)
	{
		{	/* Integrate/a.scm 173 */
			return
				BGl_nodezd2Azd2zzintegrate_az00(
				((BgL_nodez00_bglt) BgL_nodez00_2788),
				((BgL_variablez00_bglt) BgL_hostz00_2789), BgL_kz00_2790,
				BgL_az00_2791);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_az00()
	{
		{	/* Integrate/a.scm 18 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_atomz00zzast_nodez00,
				BGl_proc2141z00zzintegrate_az00, BGl_string2142z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_kwotez00zzast_nodez00,
				BGl_proc2143z00zzintegrate_az00, BGl_string2142z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_varz00zzast_nodez00,
				BGl_proc2144z00zzintegrate_az00, BGl_string2142z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_closurez00zzast_nodez00,
				BGl_proc2145z00zzintegrate_az00, BGl_string2142z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_sequencez00zzast_nodez00,
				BGl_proc2146z00zzintegrate_az00, BGl_string2142z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_syncz00zzast_nodez00,
				BGl_proc2147z00zzintegrate_az00, BGl_string2142z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_appz00zzast_nodez00,
				BGl_proc2148z00zzintegrate_az00, BGl_string2142z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc2149z00zzintegrate_az00, BGl_string2142z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_funcallz00zzast_nodez00,
				BGl_proc2150z00zzintegrate_az00, BGl_string2142z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_externz00zzast_nodez00,
				BGl_proc2151z00zzintegrate_az00, BGl_string2142z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_castz00zzast_nodez00,
				BGl_proc2152z00zzintegrate_az00, BGl_string2142z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_setqz00zzast_nodez00,
				BGl_proc2153z00zzintegrate_az00, BGl_string2142z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_conditionalz00zzast_nodez00,
				BGl_proc2154z00zzintegrate_az00, BGl_string2142z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_failz00zzast_nodez00,
				BGl_proc2155z00zzintegrate_az00, BGl_string2142z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_switchz00zzast_nodez00,
				BGl_proc2156z00zzintegrate_az00, BGl_string2142z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc2157z00zzintegrate_az00, BGl_string2142z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc2158z00zzintegrate_az00, BGl_string2142z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc2159z00zzintegrate_az00,
				BGl_string2142z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc2160z00zzintegrate_az00,
				BGl_string2142z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc2161z00zzintegrate_az00, BGl_string2142z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc2162z00zzintegrate_az00,
				BGl_string2142z00zzintegrate_az00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc2163z00zzintegrate_az00, BGl_string2142z00zzintegrate_az00);
		}

	}



/* &node-A-box-ref1357 */
	obj_t BGl_z62nodezd2Azd2boxzd2ref1357zb0zzintegrate_az00(obj_t
		BgL_envz00_2814, obj_t BgL_nodez00_2815, obj_t BgL_hostz00_2816,
		obj_t BgL_kz00_2817, obj_t BgL_az00_2818)
	{
		{	/* Integrate/a.scm 484 */
			return BgL_az00_2818;
		}

	}



/* &node-A-box-set!1355 */
	obj_t BGl_z62nodezd2Azd2boxzd2setz121355za2zzintegrate_az00(obj_t
		BgL_envz00_2819, obj_t BgL_nodez00_2820, obj_t BgL_hostz00_2821,
		obj_t BgL_kz00_2822, obj_t BgL_az00_2823)
	{
		{	/* Integrate/a.scm 477 */
			{	/* Integrate/a.scm 479 */
				BgL_nodez00_bglt BgL_arg1995z00_2955;
				obj_t BgL_arg1996z00_2956;

				BgL_arg1995z00_2955 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2820)))->BgL_valuez00);
				{	/* Integrate/a.scm 479 */
					obj_t BgL_arg1997z00_2957;
					BgL_typez00_bglt BgL_arg1998z00_2958;

					BgL_arg1997z00_2957 = BGl_getzd2newzd2kontz00zzintegrate_az00();
					BgL_arg1998z00_2958 =
						BGl_getzd2typezd2zztype_typeofz00(
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
									((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2820)))->
							BgL_valuez00), ((bool_t) 0));
					BgL_arg1996z00_2956 =
						MAKE_YOUNG_PAIR(BgL_arg1997z00_2957, ((obj_t) BgL_arg1998z00_2958));
				}
				return
					BGl_nodezd2Azd2zzintegrate_az00(BgL_arg1995z00_2955,
					((BgL_variablez00_bglt) BgL_hostz00_2821), BgL_arg1996z00_2956,
					BgL_az00_2823);
			}
		}

	}



/* &node-A-make-box1353 */
	obj_t BGl_z62nodezd2Azd2makezd2box1353zb0zzintegrate_az00(obj_t
		BgL_envz00_2824, obj_t BgL_nodez00_2825, obj_t BgL_hostz00_2826,
		obj_t BgL_kz00_2827, obj_t BgL_az00_2828)
	{
		{	/* Integrate/a.scm 470 */
			{	/* Integrate/a.scm 472 */
				BgL_nodez00_bglt BgL_arg1989z00_2960;
				obj_t BgL_arg1990z00_2961;

				BgL_arg1989z00_2960 =
					(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_2825)))->BgL_valuez00);
				{	/* Integrate/a.scm 472 */
					obj_t BgL_arg1991z00_2962;
					BgL_typez00_bglt BgL_arg1992z00_2963;

					BgL_arg1991z00_2962 = BGl_getzd2newzd2kontz00zzintegrate_az00();
					BgL_arg1992z00_2963 =
						BGl_getzd2typezd2zztype_typeofz00(
						(((BgL_makezd2boxzd2_bglt) COBJECT(
									((BgL_makezd2boxzd2_bglt) BgL_nodez00_2825)))->BgL_valuez00),
						((bool_t) 0));
					BgL_arg1990z00_2961 =
						MAKE_YOUNG_PAIR(BgL_arg1991z00_2962, ((obj_t) BgL_arg1992z00_2963));
				}
				return
					BGl_nodezd2Azd2zzintegrate_az00(BgL_arg1989z00_2960,
					((BgL_variablez00_bglt) BgL_hostz00_2826), BgL_arg1990z00_2961,
					BgL_az00_2828);
			}
		}

	}



/* &node-A-jump-ex-it1351 */
	obj_t BGl_z62nodezd2Azd2jumpzd2exzd2it1351z62zzintegrate_az00(obj_t
		BgL_envz00_2829, obj_t BgL_nodez00_2830, obj_t BgL_hostz00_2831,
		obj_t BgL_kz00_2832, obj_t BgL_az00_2833)
	{
		{	/* Integrate/a.scm 460 */
			{	/* Integrate/a.scm 462 */
				BgL_nodez00_bglt BgL_arg1977z00_2965;
				obj_t BgL_arg1979z00_2966;
				obj_t BgL_arg1980z00_2967;

				BgL_arg1977z00_2965 =
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2830)))->BgL_exitz00);
				{	/* Integrate/a.scm 464 */
					obj_t BgL_arg1981z00_2968;
					BgL_typez00_bglt BgL_arg1982z00_2969;

					BgL_arg1981z00_2968 = BGl_getzd2newzd2kontz00zzintegrate_az00();
					BgL_arg1982z00_2969 =
						BGl_getzd2typezd2zztype_typeofz00(
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2830)))->
							BgL_exitz00), ((bool_t) 0));
					BgL_arg1979z00_2966 =
						MAKE_YOUNG_PAIR(BgL_arg1981z00_2968, ((obj_t) BgL_arg1982z00_2969));
				}
				{	/* Integrate/a.scm 465 */
					BgL_nodez00_bglt BgL_arg1984z00_2970;
					obj_t BgL_arg1985z00_2971;

					BgL_arg1984z00_2970 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2830)))->
						BgL_valuez00);
					{	/* Integrate/a.scm 465 */
						obj_t BgL_arg1986z00_2972;
						BgL_typez00_bglt BgL_arg1987z00_2973;

						BgL_arg1986z00_2972 = BGl_getzd2newzd2kontz00zzintegrate_az00();
						BgL_arg1987z00_2973 =
							BGl_getzd2typezd2zztype_typeofz00(
							(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
										((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2830)))->
								BgL_valuez00), ((bool_t) 0));
						BgL_arg1985z00_2971 =
							MAKE_YOUNG_PAIR(BgL_arg1986z00_2972,
							((obj_t) BgL_arg1987z00_2973));
					}
					BgL_arg1980z00_2967 =
						BGl_nodezd2Azd2zzintegrate_az00(BgL_arg1984z00_2970,
						((BgL_variablez00_bglt) BgL_hostz00_2831), BgL_arg1985z00_2971,
						BgL_az00_2833);
				}
				return
					BGl_nodezd2Azd2zzintegrate_az00(BgL_arg1977z00_2965,
					((BgL_variablez00_bglt) BgL_hostz00_2831), BgL_arg1979z00_2966,
					BgL_arg1980z00_2967);
			}
		}

	}



/* &node-A-set-ex-it1349 */
	obj_t BGl_z62nodezd2Azd2setzd2exzd2it1349z62zzintegrate_az00(obj_t
		BgL_envz00_2834, obj_t BgL_nodez00_2835, obj_t BgL_hostz00_2836,
		obj_t BgL_kz00_2837, obj_t BgL_az00_2838)
	{
		{	/* Integrate/a.scm 446 */
			{	/* Integrate/a.scm 448 */
				BgL_variablez00_bglt BgL_exitz00_2975;

				BgL_exitz00_2975 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_setzd2exzd2itz00_bglt) COBJECT(
										((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2835)))->
								BgL_varz00)))->BgL_variablez00);
				{	/* Integrate/a.scm 448 */
					obj_t BgL_hdlgz00_2976;

					BgL_hdlgz00_2976 =
						(((BgL_sexitz00_bglt) COBJECT(
								((BgL_sexitz00_bglt)
									(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_exitz00_2975))))->
										BgL_valuez00))))->BgL_handlerz00);
					{	/* Integrate/a.scm 449 */

						{	/* Integrate/a.scm 450 */
							BgL_sexitz00_bglt BgL_tmp1169z00_2977;

							BgL_tmp1169z00_2977 =
								((BgL_sexitz00_bglt)
								(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_localz00_bglt) BgL_exitz00_2975))))->
									BgL_valuez00));
							{	/* Integrate/a.scm 450 */
								BgL_sexitzf2iinfozf2_bglt BgL_wide1171z00_2978;

								BgL_wide1171z00_2978 =
									((BgL_sexitzf2iinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_sexitzf2iinfozf2_bgl))));
								{	/* Integrate/a.scm 450 */
									obj_t BgL_auxz00_3864;
									BgL_objectz00_bglt BgL_tmpz00_3861;

									BgL_auxz00_3864 = ((obj_t) BgL_wide1171z00_2978);
									BgL_tmpz00_3861 =
										((BgL_objectz00_bglt)
										((BgL_sexitz00_bglt) BgL_tmp1169z00_2977));
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3861, BgL_auxz00_3864);
								}
								((BgL_objectz00_bglt)
									((BgL_sexitz00_bglt) BgL_tmp1169z00_2977));
								{	/* Integrate/a.scm 450 */
									long BgL_arg1968z00_2979;

									{	/* Integrate/a.scm 450 */
										long BgL_res2130z00_2980;

										BgL_res2130z00_2980 =
											BGL_CLASS_INDEX(BGl_sexitzf2Iinfozf2zzintegrate_infoz00);
										BgL_arg1968z00_2979 = BgL_res2130z00_2980;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt)
											((BgL_sexitz00_bglt) BgL_tmp1169z00_2977)),
										BgL_arg1968z00_2979);
								}
								((BgL_sexitz00_bglt) ((BgL_sexitz00_bglt) BgL_tmp1169z00_2977));
							}
							{
								BgL_sexitzf2iinfozf2_bglt BgL_auxz00_3875;

								{
									obj_t BgL_auxz00_3876;

									{	/* Integrate/a.scm 450 */
										BgL_objectz00_bglt BgL_tmpz00_3877;

										BgL_tmpz00_3877 =
											((BgL_objectz00_bglt)
											((BgL_sexitz00_bglt) BgL_tmp1169z00_2977));
										BgL_auxz00_3876 = BGL_OBJECT_WIDENING(BgL_tmpz00_3877);
									}
									BgL_auxz00_3875 =
										((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_3876);
								}
								((((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3875))->
										BgL_fzd2markzd2) = ((obj_t) BUNSPEC), BUNSPEC);
							}
							{
								BgL_sexitzf2iinfozf2_bglt BgL_auxz00_3883;

								{
									obj_t BgL_auxz00_3884;

									{	/* Integrate/a.scm 450 */
										BgL_objectz00_bglt BgL_tmpz00_3885;

										BgL_tmpz00_3885 =
											((BgL_objectz00_bglt)
											((BgL_sexitz00_bglt) BgL_tmp1169z00_2977));
										BgL_auxz00_3884 = BGL_OBJECT_WIDENING(BgL_tmpz00_3885);
									}
									BgL_auxz00_3883 =
										((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_3884);
								}
								((((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3883))->
										BgL_uzd2markzd2) = ((obj_t) BUNSPEC), BUNSPEC);
							}
							{
								BgL_sexitzf2iinfozf2_bglt BgL_auxz00_3891;

								{
									obj_t BgL_auxz00_3892;

									{	/* Integrate/a.scm 450 */
										BgL_objectz00_bglt BgL_tmpz00_3893;

										BgL_tmpz00_3893 =
											((BgL_objectz00_bglt)
											((BgL_sexitz00_bglt) BgL_tmp1169z00_2977));
										BgL_auxz00_3892 = BGL_OBJECT_WIDENING(BgL_tmpz00_3893);
									}
									BgL_auxz00_3891 =
										((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_3892);
								}
								((((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3891))->
										BgL_kapturedzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
							}
							{
								BgL_sexitzf2iinfozf2_bglt BgL_auxz00_3899;

								{
									obj_t BgL_auxz00_3900;

									{	/* Integrate/a.scm 450 */
										BgL_objectz00_bglt BgL_tmpz00_3901;

										BgL_tmpz00_3901 =
											((BgL_objectz00_bglt)
											((BgL_sexitz00_bglt) BgL_tmp1169z00_2977));
										BgL_auxz00_3900 = BGL_OBJECT_WIDENING(BgL_tmpz00_3901);
									}
									BgL_auxz00_3899 =
										((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_3900);
								}
								((((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3899))->
										BgL_celledzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
							}
							((BgL_sexitz00_bglt) BgL_tmp1169z00_2977);
						}
						{	/* Integrate/a.scm 451 */
							bool_t BgL_test2248z00_3908;

							if (CBOOL(BGl_za2optimzd2returnzd2gotozf3za2zf3zzengine_paramz00))
								{	/* Integrate/a.scm 451 */
									BgL_test2248z00_3908 = ((bool_t) 0);
								}
							else
								{	/* Integrate/a.scm 451 */
									if (
										(((BgL_sexitz00_bglt) COBJECT(
													((BgL_sexitz00_bglt)
														(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt) BgL_exitz00_2975))))->
															BgL_valuez00))))->BgL_detachedzf3zf3))
										{	/* Integrate/a.scm 452 */
											BgL_test2248z00_3908 = ((bool_t) 0);
										}
									else
										{	/* Integrate/a.scm 452 */
											BgL_test2248z00_3908 = ((bool_t) 1);
										}
								}
							if (BgL_test2248z00_3908)
								{	/* Integrate/a.scm 453 */
									BgL_sfunz00_bglt BgL_i1173z00_2981;

									BgL_i1173z00_2981 =
										((BgL_sfunz00_bglt)
										(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt) BgL_hdlgz00_2976))))->
											BgL_valuez00));
									{
										BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3921;

										{
											obj_t BgL_auxz00_3922;

											{	/* Integrate/a.scm 454 */
												BgL_objectz00_bglt BgL_tmpz00_3923;

												BgL_tmpz00_3923 =
													((BgL_objectz00_bglt) BgL_i1173z00_2981);
												BgL_auxz00_3922 = BGL_OBJECT_WIDENING(BgL_tmpz00_3923);
											}
											BgL_auxz00_3921 =
												((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3922);
										}
										((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3921))->
												BgL_forcegzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
									}
								}
							else
								{	/* Integrate/a.scm 451 */
									BFALSE;
								}
						}
					}
				}
			}
			{	/* Integrate/a.scm 455 */
				BgL_nodez00_bglt BgL_arg1976z00_2982;

				BgL_arg1976z00_2982 =
					(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2835)))->BgL_bodyz00);
				return
					BGl_nodezd2Azd2zzintegrate_az00(BgL_arg1976z00_2982,
					((BgL_variablez00_bglt) BgL_hostz00_2836), BgL_kz00_2837,
					BgL_az00_2838);
			}
		}

	}



/* &node-A-let-var1347 */
	obj_t BGl_z62nodezd2Azd2letzd2var1347zb0zzintegrate_az00(obj_t
		BgL_envz00_2839, obj_t BgL_nodez00_2840, obj_t BgL_hostz00_2841,
		obj_t BgL_kz00_2842, obj_t BgL_az00_2843)
	{
		{	/* Integrate/a.scm 418 */
			{
				obj_t BgL_nodez00_2985;

				{	/* Integrate/a.scm 428 */
					obj_t BgL_g1159z00_2987;

					BgL_g1159z00_2987 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2840)))->BgL_bindingsz00);
					{
						obj_t BgL_bindingsz00_2989;
						obj_t BgL_az00_2990;

						BgL_bindingsz00_2989 = BgL_g1159z00_2987;
						BgL_az00_2990 = BgL_az00_2843;
					BgL_liipz00_2988:
						if (NULLP(BgL_bindingsz00_2989))
							{	/* Integrate/a.scm 431 */
								BgL_nodez00_bglt BgL_arg1956z00_2991;

								BgL_arg1956z00_2991 =
									(((BgL_letzd2varzd2_bglt) COBJECT(
											((BgL_letzd2varzd2_bglt) BgL_nodez00_2840)))->
									BgL_bodyz00);
								return BGl_nodezd2Azd2zzintegrate_az00(BgL_arg1956z00_2991,
									((BgL_variablez00_bglt) BgL_hostz00_2841), BgL_kz00_2842,
									BgL_az00_2990);
							}
						else
							{	/* Integrate/a.scm 432 */
								obj_t BgL_bindingz00_2992;

								BgL_bindingz00_2992 = CAR(((obj_t) BgL_bindingsz00_2989));
								{	/* Integrate/a.scm 432 */
									obj_t BgL_varz00_2993;

									BgL_varz00_2993 = CAR(((obj_t) BgL_bindingz00_2992));
									{	/* Integrate/a.scm 433 */
										obj_t BgL_valz00_2994;

										BgL_valz00_2994 = CDR(((obj_t) BgL_bindingz00_2992));
										{	/* Integrate/a.scm 434 */

											{	/* Integrate/a.scm 435 */
												bool_t BgL_test2252z00_3946;

												BgL_nodez00_2985 = BgL_valz00_2994;
												if (CBOOL
													(BGl_za2optimzd2returnzd2gotozf3za2zf3zzengine_paramz00))
													{	/* Integrate/a.scm 421 */
														if (BGl_isazf3zf3zz__objectz00(BgL_nodez00_2985,
																BGl_appz00zzast_nodez00))
															{	/* Integrate/a.scm 424 */
																BgL_varz00_bglt BgL_i1157z00_2986;

																BgL_i1157z00_2986 =
																	(((BgL_appz00_bglt) COBJECT(
																			((BgL_appz00_bglt) BgL_nodez00_2985)))->
																	BgL_funz00);
																BgL_test2252z00_3946 =
																	BGl_iszd2getzd2exitdzd2topzf3z21zzreturn_walkz00
																	((((BgL_varz00_bglt)
																			COBJECT(BgL_i1157z00_2986))->
																		BgL_variablez00));
															}
														else
															{	/* Integrate/a.scm 422 */
																BgL_test2252z00_3946 = ((bool_t) 0);
															}
													}
												else
													{	/* Integrate/a.scm 421 */
														BgL_test2252z00_3946 = ((bool_t) 0);
													}
												if (BgL_test2252z00_3946)
													{	/* Integrate/a.scm 436 */
														BgL_svarz00_bglt BgL_tmp1160z00_2995;

														BgL_tmp1160z00_2995 =
															((BgL_svarz00_bglt)
															(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_localz00_bglt) BgL_varz00_2993))))->
																BgL_valuez00));
														{	/* Integrate/a.scm 436 */
															BgL_svarzf2iinfozf2_bglt BgL_wide1162z00_2996;

															BgL_wide1162z00_2996 =
																((BgL_svarzf2iinfozf2_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_svarzf2iinfozf2_bgl))));
															{	/* Integrate/a.scm 436 */
																obj_t BgL_auxz00_3963;
																BgL_objectz00_bglt BgL_tmpz00_3960;

																BgL_auxz00_3963 =
																	((obj_t) BgL_wide1162z00_2996);
																BgL_tmpz00_3960 =
																	((BgL_objectz00_bglt)
																	((BgL_svarz00_bglt) BgL_tmp1160z00_2995));
																BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3960,
																	BgL_auxz00_3963);
															}
															((BgL_objectz00_bglt)
																((BgL_svarz00_bglt) BgL_tmp1160z00_2995));
															{	/* Integrate/a.scm 436 */
																long BgL_arg1958z00_2997;

																{	/* Integrate/a.scm 436 */
																	long BgL_res2128z00_2998;

																	BgL_res2128z00_2998 =
																		BGL_CLASS_INDEX
																		(BGl_svarzf2Iinfozf2zzintegrate_infoz00);
																	BgL_arg1958z00_2997 = BgL_res2128z00_2998;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1160z00_2995)),
																	BgL_arg1958z00_2997);
															}
															((BgL_svarz00_bglt)
																((BgL_svarz00_bglt) BgL_tmp1160z00_2995));
														}
														{
															BgL_svarzf2iinfozf2_bglt BgL_auxz00_3974;

															{
																obj_t BgL_auxz00_3975;

																{	/* Integrate/a.scm 437 */
																	BgL_objectz00_bglt BgL_tmpz00_3976;

																	BgL_tmpz00_3976 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1160z00_2995));
																	BgL_auxz00_3975 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_3976);
																}
																BgL_auxz00_3974 =
																	((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3975);
															}
															((((BgL_svarzf2iinfozf2_bglt)
																		COBJECT(BgL_auxz00_3974))->
																	BgL_fzd2markzd2) =
																((obj_t) BUNSPEC), BUNSPEC);
														}
														{
															BgL_svarzf2iinfozf2_bglt BgL_auxz00_3982;

															{
																obj_t BgL_auxz00_3983;

																{	/* Integrate/a.scm 437 */
																	BgL_objectz00_bglt BgL_tmpz00_3984;

																	BgL_tmpz00_3984 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1160z00_2995));
																	BgL_auxz00_3983 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_3984);
																}
																BgL_auxz00_3982 =
																	((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3983);
															}
															((((BgL_svarzf2iinfozf2_bglt)
																		COBJECT(BgL_auxz00_3982))->
																	BgL_uzd2markzd2) =
																((obj_t) BUNSPEC), BUNSPEC);
														}
														{
															BgL_svarzf2iinfozf2_bglt BgL_auxz00_3990;

															{
																obj_t BgL_auxz00_3991;

																{	/* Integrate/a.scm 437 */
																	BgL_objectz00_bglt BgL_tmpz00_3992;

																	BgL_tmpz00_3992 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1160z00_2995));
																	BgL_auxz00_3991 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_3992);
																}
																BgL_auxz00_3990 =
																	((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3991);
															}
															((((BgL_svarzf2iinfozf2_bglt)
																		COBJECT(BgL_auxz00_3990))->
																	BgL_kapturedzf3zf3) =
																((bool_t) ((bool_t) 0)), BUNSPEC);
														}
														{
															BgL_svarzf2iinfozf2_bglt BgL_auxz00_3998;

															{
																obj_t BgL_auxz00_3999;

																{	/* Integrate/a.scm 437 */
																	BgL_objectz00_bglt BgL_tmpz00_4000;

																	BgL_tmpz00_4000 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1160z00_2995));
																	BgL_auxz00_3999 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_4000);
																}
																BgL_auxz00_3998 =
																	((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3999);
															}
															((((BgL_svarzf2iinfozf2_bglt)
																		COBJECT(BgL_auxz00_3998))->
																	BgL_celledzf3zf3) =
																((bool_t) ((bool_t) 0)), BUNSPEC);
														}
														{
															BgL_svarzf2iinfozf2_bglt BgL_auxz00_4006;

															{
																obj_t BgL_auxz00_4007;

																{	/* Integrate/a.scm 437 */
																	BgL_objectz00_bglt BgL_tmpz00_4008;

																	BgL_tmpz00_4008 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1160z00_2995));
																	BgL_auxz00_4007 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_4008);
																}
																BgL_auxz00_4006 =
																	((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_4007);
															}
															((((BgL_svarzf2iinfozf2_bglt)
																		COBJECT(BgL_auxz00_4006))->BgL_xhdlz00) =
																((obj_t) BgL_hostz00_2841), BUNSPEC);
														}
														((BgL_svarz00_bglt) BgL_tmp1160z00_2995);
													}
												else
													{	/* Integrate/a.scm 438 */
														BgL_svarz00_bglt BgL_tmp1164z00_2999;

														BgL_tmp1164z00_2999 =
															((BgL_svarz00_bglt)
															(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_localz00_bglt) BgL_varz00_2993))))->
																BgL_valuez00));
														{	/* Integrate/a.scm 438 */
															BgL_svarzf2iinfozf2_bglt BgL_wide1166z00_3000;

															BgL_wide1166z00_3000 =
																((BgL_svarzf2iinfozf2_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_svarzf2iinfozf2_bgl))));
															{	/* Integrate/a.scm 438 */
																obj_t BgL_auxz00_4023;
																BgL_objectz00_bglt BgL_tmpz00_4020;

																BgL_auxz00_4023 =
																	((obj_t) BgL_wide1166z00_3000);
																BgL_tmpz00_4020 =
																	((BgL_objectz00_bglt)
																	((BgL_svarz00_bglt) BgL_tmp1164z00_2999));
																BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4020,
																	BgL_auxz00_4023);
															}
															((BgL_objectz00_bglt)
																((BgL_svarz00_bglt) BgL_tmp1164z00_2999));
															{	/* Integrate/a.scm 438 */
																long BgL_arg1959z00_3001;

																{	/* Integrate/a.scm 438 */
																	long BgL_res2129z00_3002;

																	BgL_res2129z00_3002 =
																		BGL_CLASS_INDEX
																		(BGl_svarzf2Iinfozf2zzintegrate_infoz00);
																	BgL_arg1959z00_3001 = BgL_res2129z00_3002;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1164z00_2999)),
																	BgL_arg1959z00_3001);
															}
															((BgL_svarz00_bglt)
																((BgL_svarz00_bglt) BgL_tmp1164z00_2999));
														}
														{
															BgL_svarzf2iinfozf2_bglt BgL_auxz00_4034;

															{
																obj_t BgL_auxz00_4035;

																{	/* Integrate/a.scm 438 */
																	BgL_objectz00_bglt BgL_tmpz00_4036;

																	BgL_tmpz00_4036 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1164z00_2999));
																	BgL_auxz00_4035 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_4036);
																}
																BgL_auxz00_4034 =
																	((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_4035);
															}
															((((BgL_svarzf2iinfozf2_bglt)
																		COBJECT(BgL_auxz00_4034))->
																	BgL_fzd2markzd2) =
																((obj_t) BUNSPEC), BUNSPEC);
														}
														{
															BgL_svarzf2iinfozf2_bglt BgL_auxz00_4042;

															{
																obj_t BgL_auxz00_4043;

																{	/* Integrate/a.scm 438 */
																	BgL_objectz00_bglt BgL_tmpz00_4044;

																	BgL_tmpz00_4044 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1164z00_2999));
																	BgL_auxz00_4043 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_4044);
																}
																BgL_auxz00_4042 =
																	((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_4043);
															}
															((((BgL_svarzf2iinfozf2_bglt)
																		COBJECT(BgL_auxz00_4042))->
																	BgL_uzd2markzd2) =
																((obj_t) BUNSPEC), BUNSPEC);
														}
														{
															BgL_svarzf2iinfozf2_bglt BgL_auxz00_4050;

															{
																obj_t BgL_auxz00_4051;

																{	/* Integrate/a.scm 438 */
																	BgL_objectz00_bglt BgL_tmpz00_4052;

																	BgL_tmpz00_4052 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1164z00_2999));
																	BgL_auxz00_4051 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_4052);
																}
																BgL_auxz00_4050 =
																	((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_4051);
															}
															((((BgL_svarzf2iinfozf2_bglt)
																		COBJECT(BgL_auxz00_4050))->
																	BgL_kapturedzf3zf3) =
																((bool_t) ((bool_t) 0)), BUNSPEC);
														}
														{
															BgL_svarzf2iinfozf2_bglt BgL_auxz00_4058;

															{
																obj_t BgL_auxz00_4059;

																{	/* Integrate/a.scm 438 */
																	BgL_objectz00_bglt BgL_tmpz00_4060;

																	BgL_tmpz00_4060 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1164z00_2999));
																	BgL_auxz00_4059 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_4060);
																}
																BgL_auxz00_4058 =
																	((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_4059);
															}
															((((BgL_svarzf2iinfozf2_bglt)
																		COBJECT(BgL_auxz00_4058))->
																	BgL_celledzf3zf3) =
																((bool_t) ((bool_t) 0)), BUNSPEC);
														}
														{
															BgL_svarzf2iinfozf2_bglt BgL_auxz00_4066;

															{
																obj_t BgL_auxz00_4067;

																{	/* Integrate/a.scm 438 */
																	BgL_objectz00_bglt BgL_tmpz00_4068;

																	BgL_tmpz00_4068 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1164z00_2999));
																	BgL_auxz00_4067 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_4068);
																}
																BgL_auxz00_4066 =
																	((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_4067);
															}
															((((BgL_svarzf2iinfozf2_bglt)
																		COBJECT(BgL_auxz00_4066))->BgL_xhdlz00) =
																((obj_t) BFALSE), BUNSPEC);
														}
														((BgL_svarz00_bglt) BgL_tmp1164z00_2999);
											}}
											{	/* Integrate/a.scm 439 */
												obj_t BgL_arg1960z00_3003;
												obj_t BgL_arg1961z00_3004;

												BgL_arg1960z00_3003 =
													CDR(((obj_t) BgL_bindingsz00_2989));
												{	/* Integrate/a.scm 441 */
													obj_t BgL_arg1962z00_3005;

													{	/* Integrate/a.scm 441 */
														obj_t BgL_arg1963z00_3006;
														BgL_typez00_bglt BgL_arg1964z00_3007;

														BgL_arg1963z00_3006 =
															BGl_getzd2newzd2kontz00zzintegrate_az00();
														BgL_arg1964z00_3007 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt) BgL_varz00_2993))))->
															BgL_typez00);
														BgL_arg1962z00_3005 =
															MAKE_YOUNG_PAIR(BgL_arg1963z00_3006,
															((obj_t) BgL_arg1964z00_3007));
													}
													BgL_arg1961z00_3004 =
														BGl_nodezd2Azd2zzintegrate_az00(
														((BgL_nodez00_bglt) BgL_valz00_2994),
														((BgL_variablez00_bglt) BgL_hostz00_2841),
														BgL_arg1962z00_3005, BgL_az00_2990);
												}
												{
													obj_t BgL_az00_4087;
													obj_t BgL_bindingsz00_4086;

													BgL_bindingsz00_4086 = BgL_arg1960z00_3003;
													BgL_az00_4087 = BgL_arg1961z00_3004;
													BgL_az00_2990 = BgL_az00_4087;
													BgL_bindingsz00_2989 = BgL_bindingsz00_4086;
													goto BgL_liipz00_2988;
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



/* &node-A-let-fun1345 */
	obj_t BGl_z62nodezd2Azd2letzd2fun1345zb0zzintegrate_az00(obj_t
		BgL_envz00_2844, obj_t BgL_nodez00_2845, obj_t BgL_hostz00_2846,
		obj_t BgL_kz00_2847, obj_t BgL_az00_2848)
	{
		{	/* Integrate/a.scm 372 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_3015;
				BgL_letzd2funzd2_bglt BgL_nodez00_3011;

				{	/* Integrate/a.scm 398 */
					obj_t BgL_g1311z00_3020;

					BgL_g1311z00_3020 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2845)))->BgL_localsz00);
					{
						obj_t BgL_l1309z00_3022;

						BgL_l1309z00_3022 = BgL_g1311z00_3020;
					BgL_zc3z04anonymousza31913ze3z87_3021:
						if (PAIRP(BgL_l1309z00_3022))
							{	/* Integrate/a.scm 401 */
								{	/* Integrate/a.scm 399 */
									obj_t BgL_fz00_3023;

									BgL_fz00_3023 = CAR(BgL_l1309z00_3022);
									BGl_initializa7ezd2funz12z67zzintegrate_az00(
										((BgL_variablez00_bglt) BgL_fz00_3023),
										((BgL_variablez00_bglt) BgL_hostz00_2846));
									BGl_za2phiza2z00zzintegrate_az00 =
										MAKE_YOUNG_PAIR(BgL_fz00_3023,
										BGl_za2phiza2z00zzintegrate_az00);
								}
								{
									obj_t BgL_l1309z00_4097;

									BgL_l1309z00_4097 = CDR(BgL_l1309z00_3022);
									BgL_l1309z00_3022 = BgL_l1309z00_4097;
									goto BgL_zc3z04anonymousza31913ze3z87_3021;
								}
							}
						else
							{	/* Integrate/a.scm 401 */
								((bool_t) 1);
							}
					}
				}
				{	/* Integrate/a.scm 403 */
					obj_t BgL_g1155z00_3024;

					BgL_g1155z00_3024 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2845)))->BgL_localsz00);
					{
						obj_t BgL_localsz00_3026;
						obj_t BgL_az00_3027;

						BgL_localsz00_3026 = BgL_g1155z00_3024;
						BgL_az00_3027 = BgL_az00_2848;
					BgL_liipz00_3025:
						if (NULLP(BgL_localsz00_3026))
							{	/* Integrate/a.scm 405 */
								{	/* Integrate/a.scm 407 */
									bool_t BgL_test2257z00_4103;

									BgL_nodez00_3015 = ((BgL_letzd2funzd2_bglt) BgL_nodez00_2845);
									{	/* Integrate/a.scm 376 */
										bool_t BgL_test2258z00_4104;

										{	/* Integrate/a.scm 376 */
											bool_t BgL_test2259z00_4105;

											{	/* Integrate/a.scm 376 */
												obj_t BgL_tmpz00_4106;

												BgL_tmpz00_4106 =
													(((BgL_letzd2funzd2_bglt) COBJECT(BgL_nodez00_3015))->
													BgL_localsz00);
												BgL_test2259z00_4105 = PAIRP(BgL_tmpz00_4106);
											}
											if (BgL_test2259z00_4105)
												{	/* Integrate/a.scm 376 */
													BgL_test2258z00_4104 =
														NULLP(CDR(
															(((BgL_letzd2funzd2_bglt)
																	COBJECT(BgL_nodez00_3015))->BgL_localsz00)));
												}
											else
												{	/* Integrate/a.scm 376 */
													BgL_test2258z00_4104 = ((bool_t) 0);
												}
										}
										if (BgL_test2258z00_4104)
											{	/* Integrate/a.scm 377 */
												obj_t BgL_varz00_3016;

												BgL_varz00_3016 =
													CAR(
													(((BgL_letzd2funzd2_bglt) COBJECT(BgL_nodez00_3015))->
														BgL_localsz00));
												{	/* Integrate/a.scm 377 */
													BgL_valuez00_bglt BgL_funz00_3017;

													BgL_funz00_3017 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt) BgL_varz00_3016))))->
														BgL_valuez00);
													{	/* Integrate/a.scm 378 */

														{	/* Integrate/a.scm 379 */
															bool_t BgL_test2260z00_4117;

															{	/* Integrate/a.scm 379 */
																obj_t BgL_arg1943z00_3018;

																BgL_arg1943z00_3018 =
																	(((BgL_sfunz00_bglt) COBJECT(
																			((BgL_sfunz00_bglt) BgL_funz00_3017)))->
																	BgL_bodyz00);
																BgL_test2260z00_4117 =
																	BGl_isazf3zf3zz__objectz00
																	(BgL_arg1943z00_3018,
																	BGl_setzd2exzd2itz00zzast_nodez00);
															}
															if (BgL_test2260z00_4117)
																{	/* Integrate/a.scm 380 */
																	bool_t BgL_test2261z00_4121;

																	{	/* Integrate/a.scm 380 */
																		BgL_nodez00_bglt BgL_arg1942z00_3019;

																		BgL_arg1942z00_3019 =
																			(((BgL_letzd2funzd2_bglt)
																				COBJECT(BgL_nodez00_3015))->
																			BgL_bodyz00);
																		BgL_test2261z00_4121 =
																			BGl_isazf3zf3zz__objectz00(((obj_t)
																				BgL_arg1942z00_3019),
																			BGl_appz00zzast_nodez00);
																	}
																	if (BgL_test2261z00_4121)
																		{	/* Integrate/a.scm 380 */
																			BgL_test2257z00_4103 =
																				(
																				((obj_t)
																					(((BgL_varz00_bglt) COBJECT(
																								(((BgL_appz00_bglt) COBJECT(
																											((BgL_appz00_bglt)
																												(((BgL_letzd2funzd2_bglt) COBJECT(BgL_nodez00_3015))->BgL_bodyz00))))->BgL_funz00)))->BgL_variablez00)) == BgL_varz00_3016);
																		}
																	else
																		{	/* Integrate/a.scm 380 */
																			BgL_test2257z00_4103 = ((bool_t) 0);
																		}
																}
															else
																{	/* Integrate/a.scm 379 */
																	BgL_test2257z00_4103 = ((bool_t) 0);
																}
														}
													}
												}
											}
										else
											{	/* Integrate/a.scm 376 */
												BgL_test2257z00_4103 = ((bool_t) 0);
											}
									}
									if (BgL_test2257z00_4103)
										{	/* Integrate/a.scm 407 */
											BgL_nodez00_3011 =
												((BgL_letzd2funzd2_bglt) BgL_nodez00_2845);
											{	/* Integrate/a.scm 387 */
												BgL_sfunz00_bglt BgL_i1152z00_3012;

												{
													BgL_valuez00_bglt BgL_auxz00_4132;

													{
														BgL_variablez00_bglt BgL_auxz00_4133;

														{
															BgL_localz00_bglt BgL_auxz00_4134;

															{	/* Integrate/a.scm 387 */
																obj_t BgL_pairz00_3013;

																BgL_pairz00_3013 =
																	(((BgL_letzd2funzd2_bglt)
																		COBJECT(BgL_nodez00_3011))->BgL_localsz00);
																BgL_auxz00_4134 =
																	((BgL_localz00_bglt) CAR(BgL_pairz00_3013));
															}
															BgL_auxz00_4133 =
																((BgL_variablez00_bglt) BgL_auxz00_4134);
														}
														BgL_auxz00_4132 =
															(((BgL_variablez00_bglt)
																COBJECT(BgL_auxz00_4133))->BgL_valuez00);
													}
													BgL_i1152z00_3012 =
														((BgL_sfunz00_bglt) BgL_auxz00_4132);
												}
												{
													bool_t BgL_auxz00_4147;
													BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4141;

													{	/* Integrate/a.scm 391 */
														bool_t BgL__ortest_1153z00_3014;

														if (CBOOL
															(BGl_za2optimzd2returnzd2gotozf3za2zf3zzengine_paramz00))
															{	/* Integrate/a.scm 391 */
																BgL__ortest_1153z00_3014 = ((bool_t) 0);
															}
														else
															{	/* Integrate/a.scm 391 */
																BgL__ortest_1153z00_3014 = ((bool_t) 1);
															}
														if (BgL__ortest_1153z00_3014)
															{	/* Integrate/a.scm 391 */
																BgL_auxz00_4147 = BgL__ortest_1153z00_3014;
															}
														else
															{	/* Integrate/a.scm 391 */
																if (
																	(CAR(
																			((obj_t) BgL_kz00_2847)) ==
																		CNST_TABLE_REF(((long) 0))))
																	{	/* Integrate/a.scm 391 */
																		BgL_auxz00_4147 = ((bool_t) 0);
																	}
																else
																	{	/* Integrate/a.scm 391 */
																		BgL_auxz00_4147 = ((bool_t) 1);
																	}
															}
													}
													{
														obj_t BgL_auxz00_4142;

														{	/* Integrate/a.scm 390 */
															BgL_objectz00_bglt BgL_tmpz00_4143;

															BgL_tmpz00_4143 =
																((BgL_objectz00_bglt) BgL_i1152z00_3012);
															BgL_auxz00_4142 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_4143);
														}
														BgL_auxz00_4141 =
															((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4142);
													}
													((((BgL_sfunzf2iinfozf2_bglt)
																COBJECT(BgL_auxz00_4141))->BgL_forcegzf3zf3) =
														((bool_t) BgL_auxz00_4147), BUNSPEC);
												}
												{
													bool_t BgL_auxz00_4163;
													BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4157;

													if (CBOOL
														(BGl_za2optimzd2returnzd2gotozf3za2zf3zzengine_paramz00))
														{	/* Integrate/a.scm 393 */
															BgL_auxz00_4163 = ((bool_t) 0);
														}
													else
														{	/* Integrate/a.scm 393 */
															BgL_auxz00_4163 = ((bool_t) 1);
														}
													{
														obj_t BgL_auxz00_4158;

														{	/* Integrate/a.scm 392 */
															BgL_objectz00_bglt BgL_tmpz00_4159;

															BgL_tmpz00_4159 =
																((BgL_objectz00_bglt) BgL_i1152z00_3012);
															BgL_auxz00_4158 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_4159);
														}
														BgL_auxz00_4157 =
															((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4158);
													}
													((((BgL_sfunzf2iinfozf2_bglt)
																COBJECT(BgL_auxz00_4157))->BgL_forcegzf3zf3) =
														((bool_t) BgL_auxz00_4163), BUNSPEC);
												}
												{
													BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4167;

													{
														obj_t BgL_auxz00_4168;

														{	/* Integrate/a.scm 394 */
															BgL_objectz00_bglt BgL_tmpz00_4169;

															BgL_tmpz00_4169 =
																((BgL_objectz00_bglt) BgL_i1152z00_3012);
															BgL_auxz00_4168 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_4169);
														}
														BgL_auxz00_4167 =
															((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4168);
													}
													((((BgL_sfunzf2iinfozf2_bglt)
																COBJECT(BgL_auxz00_4167))->BgL_xhdlzf3zf3) =
														((bool_t) ((bool_t) 1)), BUNSPEC);
												}
											}
										}
									else
										{	/* Integrate/a.scm 407 */
											BFALSE;
										}
								}
								{	/* Integrate/a.scm 408 */
									BgL_nodez00_bglt BgL_arg1919z00_3028;

									BgL_arg1919z00_3028 =
										(((BgL_letzd2funzd2_bglt) COBJECT(
												((BgL_letzd2funzd2_bglt) BgL_nodez00_2845)))->
										BgL_bodyz00);
									return BGl_nodezd2Azd2zzintegrate_az00(BgL_arg1919z00_3028,
										((BgL_variablez00_bglt) BgL_hostz00_2846), BgL_kz00_2847,
										BgL_az00_3027);
								}
							}
						else
							{	/* Integrate/a.scm 409 */
								obj_t BgL_arg1920z00_3029;
								obj_t BgL_arg1921z00_3030;

								BgL_arg1920z00_3029 = CDR(((obj_t) BgL_localsz00_3026));
								{	/* Integrate/a.scm 410 */
									obj_t BgL_arg1923z00_3031;
									obj_t BgL_arg1924z00_3032;
									obj_t BgL_arg1925z00_3033;

									BgL_arg1923z00_3031 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt)
													(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt)
																		CAR(
																			((obj_t) BgL_localsz00_3026))))))->
														BgL_valuez00))))->BgL_bodyz00);
									BgL_arg1924z00_3032 = CAR(((obj_t) BgL_localsz00_3026));
									{	/* Integrate/a.scm 412 */
										BgL_typez00_bglt BgL_arg1928z00_3034;

										BgL_arg1928z00_3034 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt)
															CAR(
																((obj_t) BgL_localsz00_3026))))))->BgL_typez00);
										BgL_arg1925z00_3033 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
											((obj_t) BgL_arg1928z00_3034));
									}
									BgL_arg1921z00_3030 =
										BGl_nodezd2Azd2zzintegrate_az00(
										((BgL_nodez00_bglt) BgL_arg1923z00_3031),
										((BgL_variablez00_bglt) BgL_arg1924z00_3032),
										BgL_arg1925z00_3033, BgL_az00_3027);
								}
								{
									obj_t BgL_az00_4202;
									obj_t BgL_localsz00_4201;

									BgL_localsz00_4201 = BgL_arg1920z00_3029;
									BgL_az00_4202 = BgL_arg1921z00_3030;
									BgL_az00_3027 = BgL_az00_4202;
									BgL_localsz00_3026 = BgL_localsz00_4201;
									goto BgL_liipz00_3025;
								}
							}
					}
				}
			}
		}

	}



/* &node-A-switch1343 */
	obj_t BGl_z62nodezd2Azd2switch1343z62zzintegrate_az00(obj_t BgL_envz00_2849,
		obj_t BgL_nodez00_2850, obj_t BgL_hostz00_2851, obj_t BgL_kz00_2852,
		obj_t BgL_az00_2853)
	{
		{	/* Integrate/a.scm 359 */
			{	/* Integrate/a.scm 361 */
				obj_t BgL_g1146z00_3036;
				obj_t BgL_g1147z00_3037;

				BgL_g1146z00_3036 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2850)))->BgL_clausesz00);
				{	/* Integrate/a.scm 362 */
					BgL_nodez00_bglt BgL_arg1909z00_3038;
					obj_t BgL_arg1910z00_3039;

					BgL_arg1909z00_3038 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2850)))->BgL_testz00);
					{	/* Integrate/a.scm 363 */
						obj_t BgL_arg1911z00_3040;
						BgL_typez00_bglt BgL_arg1912z00_3041;

						BgL_arg1911z00_3040 = BGl_getzd2newzd2kontz00zzintegrate_az00();
						BgL_arg1912z00_3041 =
							(((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt) BgL_nodez00_2850)))->
							BgL_itemzd2typezd2);
						BgL_arg1910z00_3039 =
							MAKE_YOUNG_PAIR(BgL_arg1911z00_3040,
							((obj_t) BgL_arg1912z00_3041));
					}
					BgL_g1147z00_3037 =
						BGl_nodezd2Azd2zzintegrate_az00(BgL_arg1909z00_3038,
						((BgL_variablez00_bglt) BgL_hostz00_2851), BgL_arg1910z00_3039,
						BgL_az00_2853);
				}
				{
					obj_t BgL_clausesz00_3043;
					obj_t BgL_az00_3044;

					BgL_clausesz00_3043 = BgL_g1146z00_3036;
					BgL_az00_3044 = BgL_g1147z00_3037;
				BgL_liipz00_3042:
					if (NULLP(BgL_clausesz00_3043))
						{	/* Integrate/a.scm 364 */
							return BgL_az00_3044;
						}
					else
						{	/* Integrate/a.scm 366 */
							obj_t BgL_arg1905z00_3045;
							obj_t BgL_arg1906z00_3046;

							BgL_arg1905z00_3045 = CDR(((obj_t) BgL_clausesz00_3043));
							{	/* Integrate/a.scm 367 */
								obj_t BgL_arg1907z00_3047;

								{	/* Integrate/a.scm 367 */
									obj_t BgL_pairz00_3048;

									BgL_pairz00_3048 = CAR(((obj_t) BgL_clausesz00_3043));
									BgL_arg1907z00_3047 = CDR(BgL_pairz00_3048);
								}
								BgL_arg1906z00_3046 =
									BGl_nodezd2Azd2zzintegrate_az00(
									((BgL_nodez00_bglt) BgL_arg1907z00_3047),
									((BgL_variablez00_bglt) BgL_hostz00_2851), BgL_kz00_2852,
									BgL_az00_3044);
							}
							{
								obj_t BgL_az00_4225;
								obj_t BgL_clausesz00_4224;

								BgL_clausesz00_4224 = BgL_arg1905z00_3045;
								BgL_az00_4225 = BgL_arg1906z00_3046;
								BgL_az00_3044 = BgL_az00_4225;
								BgL_clausesz00_3043 = BgL_clausesz00_4224;
								goto BgL_liipz00_3042;
							}
						}
				}
			}
		}

	}



/* &node-A-fail1341 */
	obj_t BGl_z62nodezd2Azd2fail1341z62zzintegrate_az00(obj_t BgL_envz00_2854,
		obj_t BgL_nodez00_2855, obj_t BgL_hostz00_2856, obj_t BgL_kz00_2857,
		obj_t BgL_az00_2858)
	{
		{	/* Integrate/a.scm 345 */
			{	/* Integrate/a.scm 347 */
				BgL_nodez00_bglt BgL_arg1883z00_3050;
				obj_t BgL_arg1884z00_3051;
				obj_t BgL_arg1885z00_3052;

				BgL_arg1883z00_3050 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2855)))->BgL_procz00);
				{	/* Integrate/a.scm 349 */
					obj_t BgL_arg1886z00_3053;
					BgL_nodez00_bglt BgL_arg1887z00_3054;

					BgL_arg1886z00_3053 = BGl_getzd2newzd2kontz00zzintegrate_az00();
					BgL_arg1887z00_3054 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2855)))->BgL_procz00);
					BgL_arg1884z00_3051 =
						MAKE_YOUNG_PAIR(BgL_arg1886z00_3053, ((obj_t) BgL_arg1887z00_3054));
				}
				{	/* Integrate/a.scm 350 */
					BgL_nodez00_bglt BgL_arg1888z00_3055;
					obj_t BgL_arg1889z00_3056;
					obj_t BgL_arg1891z00_3057;

					BgL_arg1888z00_3055 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2855)))->BgL_msgz00);
					{	/* Integrate/a.scm 352 */
						obj_t BgL_arg1892z00_3058;
						BgL_typez00_bglt BgL_arg1893z00_3059;

						BgL_arg1892z00_3058 = BGl_getzd2newzd2kontz00zzintegrate_az00();
						BgL_arg1893z00_3059 =
							BGl_getzd2typezd2zztype_typeofz00(
							(((BgL_failz00_bglt) COBJECT(
										((BgL_failz00_bglt) BgL_nodez00_2855)))->BgL_msgz00),
							((bool_t) 0));
						BgL_arg1889z00_3056 =
							MAKE_YOUNG_PAIR(BgL_arg1892z00_3058,
							((obj_t) BgL_arg1893z00_3059));
					}
					{	/* Integrate/a.scm 353 */
						BgL_nodez00_bglt BgL_arg1896z00_3060;
						obj_t BgL_arg1897z00_3061;

						BgL_arg1896z00_3060 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_2855)))->BgL_objz00);
						{	/* Integrate/a.scm 354 */
							obj_t BgL_arg1898z00_3062;
							BgL_typez00_bglt BgL_arg1901z00_3063;

							BgL_arg1898z00_3062 = BGl_getzd2newzd2kontz00zzintegrate_az00();
							BgL_arg1901z00_3063 =
								BGl_getzd2typezd2zztype_typeofz00(
								(((BgL_failz00_bglt) COBJECT(
											((BgL_failz00_bglt) BgL_nodez00_2855)))->BgL_objz00),
								((bool_t) 0));
							BgL_arg1897z00_3061 =
								MAKE_YOUNG_PAIR(BgL_arg1898z00_3062,
								((obj_t) BgL_arg1901z00_3063));
						}
						BgL_arg1891z00_3057 =
							BGl_nodezd2Azd2zzintegrate_az00(BgL_arg1896z00_3060,
							((BgL_variablez00_bglt) BgL_hostz00_2856), BgL_arg1897z00_3061,
							BgL_az00_2858);
					}
					BgL_arg1885z00_3052 =
						BGl_nodezd2Azd2zzintegrate_az00(BgL_arg1888z00_3055,
						((BgL_variablez00_bglt) BgL_hostz00_2856), BgL_arg1889z00_3056,
						BgL_arg1891z00_3057);
				}
				return
					BGl_nodezd2Azd2zzintegrate_az00(BgL_arg1883z00_3050,
					((BgL_variablez00_bglt) BgL_hostz00_2856), BgL_arg1884z00_3051,
					BgL_arg1885z00_3052);
			}
		}

	}



/* &node-A-conditional1339 */
	obj_t BGl_z62nodezd2Azd2conditional1339z62zzintegrate_az00(obj_t
		BgL_envz00_2859, obj_t BgL_nodez00_2860, obj_t BgL_hostz00_2861,
		obj_t BgL_kz00_2862, obj_t BgL_az00_2863)
	{
		{	/* Integrate/a.scm 337 */
			{	/* Integrate/a.scm 339 */
				obj_t BgL_az00_3065;

				{	/* Integrate/a.scm 339 */
					BgL_nodez00_bglt BgL_arg1879z00_3066;
					obj_t BgL_arg1881z00_3067;

					BgL_arg1879z00_3066 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2860)))->BgL_testz00);
					{	/* Integrate/a.scm 339 */
						obj_t BgL_arg1882z00_3068;

						BgL_arg1882z00_3068 = BGl_getzd2newzd2kontz00zzintegrate_az00();
						BgL_arg1881z00_3067 =
							MAKE_YOUNG_PAIR(BgL_arg1882z00_3068,
							BGl_za2boolza2z00zztype_cachez00);
					}
					BgL_az00_3065 =
						BGl_nodezd2Azd2zzintegrate_az00(BgL_arg1879z00_3066,
						((BgL_variablez00_bglt) BgL_hostz00_2861), BgL_arg1881z00_3067,
						BgL_az00_2863);
				}
				{	/* Integrate/a.scm 340 */
					BgL_nodez00_bglt BgL_arg1876z00_3069;
					obj_t BgL_arg1877z00_3070;

					BgL_arg1876z00_3069 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2860)))->BgL_truez00);
					{	/* Integrate/a.scm 340 */
						BgL_nodez00_bglt BgL_arg1878z00_3071;

						BgL_arg1878z00_3071 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_2860)))->BgL_falsez00);
						BgL_arg1877z00_3070 =
							BGl_nodezd2Azd2zzintegrate_az00(BgL_arg1878z00_3071,
							((BgL_variablez00_bglt) BgL_hostz00_2861), BgL_kz00_2862,
							BgL_az00_3065);
					}
					return
						BGl_nodezd2Azd2zzintegrate_az00(BgL_arg1876z00_3069,
						((BgL_variablez00_bglt) BgL_hostz00_2861), BgL_kz00_2862,
						BgL_arg1877z00_3070);
				}
			}
		}

	}



/* &node-A-setq1337 */
	obj_t BGl_z62nodezd2Azd2setq1337z62zzintegrate_az00(obj_t BgL_envz00_2864,
		obj_t BgL_nodez00_2865, obj_t BgL_hostz00_2866, obj_t BgL_kz00_2867,
		obj_t BgL_az00_2868)
	{
		{	/* Integrate/a.scm 330 */
			{	/* Integrate/a.scm 332 */
				BgL_nodez00_bglt BgL_arg1870z00_3073;
				obj_t BgL_arg1871z00_3074;

				BgL_arg1870z00_3073 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2865)))->BgL_valuez00);
				{	/* Integrate/a.scm 332 */
					obj_t BgL_arg1872z00_3075;
					BgL_typez00_bglt BgL_arg1873z00_3076;

					BgL_arg1872z00_3075 = BGl_getzd2newzd2kontz00zzintegrate_az00();
					BgL_arg1873z00_3076 =
						BGl_getzd2typezd2zztype_typeofz00(
						(((BgL_setqz00_bglt) COBJECT(
									((BgL_setqz00_bglt) BgL_nodez00_2865)))->BgL_valuez00),
						((bool_t) 0));
					BgL_arg1871z00_3074 =
						MAKE_YOUNG_PAIR(BgL_arg1872z00_3075, ((obj_t) BgL_arg1873z00_3076));
				}
				return
					BGl_nodezd2Azd2zzintegrate_az00(BgL_arg1870z00_3073,
					((BgL_variablez00_bglt) BgL_hostz00_2866), BgL_arg1871z00_3074,
					BgL_az00_2868);
			}
		}

	}



/* &node-A-cast1335 */
	obj_t BGl_z62nodezd2Azd2cast1335z62zzintegrate_az00(obj_t BgL_envz00_2869,
		obj_t BgL_nodez00_2870, obj_t BgL_hostz00_2871, obj_t BgL_kz00_2872,
		obj_t BgL_az00_2873)
	{
		{	/* Integrate/a.scm 323 */
			{	/* Integrate/a.scm 325 */
				BgL_nodez00_bglt BgL_arg1862z00_3078;
				obj_t BgL_arg1863z00_3079;

				BgL_arg1862z00_3078 =
					(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2870)))->BgL_argz00);
				{	/* Integrate/a.scm 325 */
					obj_t BgL_arg1865z00_3080;
					BgL_typez00_bglt BgL_arg1866z00_3081;

					BgL_arg1865z00_3080 = BGl_getzd2newzd2kontz00zzintegrate_az00();
					BgL_arg1866z00_3081 =
						BGl_getzd2typezd2zztype_typeofz00(
						(((BgL_castz00_bglt) COBJECT(
									((BgL_castz00_bglt) BgL_nodez00_2870)))->BgL_argz00),
						((bool_t) 0));
					BgL_arg1863z00_3079 =
						MAKE_YOUNG_PAIR(BgL_arg1865z00_3080, ((obj_t) BgL_arg1866z00_3081));
				}
				return
					BGl_nodezd2Azd2zzintegrate_az00(BgL_arg1862z00_3078,
					((BgL_variablez00_bglt) BgL_hostz00_2871), BgL_arg1863z00_3079,
					BgL_az00_2873);
			}
		}

	}



/* &node-A-extern1333 */
	obj_t BGl_z62nodezd2Azd2extern1333z62zzintegrate_az00(obj_t BgL_envz00_2874,
		obj_t BgL_nodez00_2875, obj_t BgL_hostz00_2876, obj_t BgL_kz00_2877,
		obj_t BgL_az00_2878)
	{
		{	/* Integrate/a.scm 310 */
			{
				obj_t BgL_astsz00_3084;
				obj_t BgL_az00_3085;

				BgL_astsz00_3084 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_2875)))->BgL_exprza2za2);
				BgL_az00_3085 = BgL_az00_2878;
			BgL_liipz00_3083:
				if (NULLP(BgL_astsz00_3084))
					{	/* Integrate/a.scm 314 */
						return BgL_az00_3085;
					}
				else
					{	/* Integrate/a.scm 316 */
						obj_t BgL_arg1853z00_3086;
						obj_t BgL_arg1855z00_3087;

						BgL_arg1853z00_3086 = CDR(((obj_t) BgL_astsz00_3084));
						{	/* Integrate/a.scm 317 */
							obj_t BgL_arg1856z00_3088;
							obj_t BgL_arg1857z00_3089;

							BgL_arg1856z00_3088 = CAR(((obj_t) BgL_astsz00_3084));
							{	/* Integrate/a.scm 318 */
								obj_t BgL_arg1858z00_3090;
								BgL_typez00_bglt BgL_arg1859z00_3091;

								BgL_arg1858z00_3090 = BGl_getzd2newzd2kontz00zzintegrate_az00();
								{	/* Integrate/a.scm 318 */
									obj_t BgL_arg1861z00_3092;

									BgL_arg1861z00_3092 = CAR(((obj_t) BgL_astsz00_3084));
									BgL_arg1859z00_3091 =
										BGl_getzd2typezd2zztype_typeofz00(
										((BgL_nodez00_bglt) BgL_arg1861z00_3092), ((bool_t) 0));
								}
								BgL_arg1857z00_3089 =
									MAKE_YOUNG_PAIR(BgL_arg1858z00_3090,
									((obj_t) BgL_arg1859z00_3091));
							}
							BgL_arg1855z00_3087 =
								BGl_nodezd2Azd2zzintegrate_az00(
								((BgL_nodez00_bglt) BgL_arg1856z00_3088),
								((BgL_variablez00_bglt) BgL_hostz00_2876), BgL_arg1857z00_3089,
								BgL_az00_3085);
						}
						{
							obj_t BgL_az00_4306;
							obj_t BgL_astsz00_4305;

							BgL_astsz00_4305 = BgL_arg1853z00_3086;
							BgL_az00_4306 = BgL_arg1855z00_3087;
							BgL_az00_3085 = BgL_az00_4306;
							BgL_astsz00_3084 = BgL_astsz00_4305;
							goto BgL_liipz00_3083;
						}
					}
			}
		}

	}



/* &node-A-funcall1331 */
	obj_t BGl_z62nodezd2Azd2funcall1331z62zzintegrate_az00(obj_t BgL_envz00_2879,
		obj_t BgL_nodez00_2880, obj_t BgL_hostz00_2881, obj_t BgL_kz00_2882,
		obj_t BgL_az00_2883)
	{
		{	/* Integrate/a.scm 294 */
			{	/* Integrate/a.scm 296 */
				BgL_nodez00_bglt BgL_arg1829z00_3094;
				obj_t BgL_arg1830z00_3095;
				obj_t BgL_arg1831z00_3096;

				BgL_arg1829z00_3094 =
					(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_2880)))->BgL_funz00);
				{	/* Integrate/a.scm 298 */
					obj_t BgL_arg1832z00_3097;
					BgL_typez00_bglt BgL_arg1833z00_3098;

					BgL_arg1832z00_3097 = BGl_getzd2newzd2kontz00zzintegrate_az00();
					BgL_arg1833z00_3098 =
						BGl_getzd2typezd2zztype_typeofz00(
						(((BgL_funcallz00_bglt) COBJECT(
									((BgL_funcallz00_bglt) BgL_nodez00_2880)))->BgL_funz00),
						((bool_t) 0));
					BgL_arg1830z00_3095 =
						MAKE_YOUNG_PAIR(BgL_arg1832z00_3097, ((obj_t) BgL_arg1833z00_3098));
				}
				{
					obj_t BgL_argsz00_3100;
					obj_t BgL_az00_3101;

					BgL_argsz00_3100 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2880)))->BgL_argsz00);
					BgL_az00_3101 = BgL_az00_2883;
				BgL_liipz00_3099:
					if (NULLP(BgL_argsz00_3100))
						{	/* Integrate/a.scm 301 */
							BgL_arg1831z00_3096 = BgL_az00_3101;
						}
					else
						{	/* Integrate/a.scm 303 */
							obj_t BgL_arg1840z00_3102;
							obj_t BgL_arg1841z00_3103;

							BgL_arg1840z00_3102 = CDR(((obj_t) BgL_argsz00_3100));
							{	/* Integrate/a.scm 304 */
								obj_t BgL_arg1842z00_3104;
								obj_t BgL_arg1845z00_3105;

								BgL_arg1842z00_3104 = CAR(((obj_t) BgL_argsz00_3100));
								{	/* Integrate/a.scm 305 */
									obj_t BgL_arg1846z00_3106;
									BgL_typez00_bglt BgL_arg1847z00_3107;

									BgL_arg1846z00_3106 =
										BGl_getzd2newzd2kontz00zzintegrate_az00();
									{	/* Integrate/a.scm 305 */
										obj_t BgL_arg1848z00_3108;

										BgL_arg1848z00_3108 = CAR(((obj_t) BgL_argsz00_3100));
										BgL_arg1847z00_3107 =
											BGl_getzd2typezd2zztype_typeofz00(
											((BgL_nodez00_bglt) BgL_arg1848z00_3108), ((bool_t) 0));
									}
									BgL_arg1845z00_3105 =
										MAKE_YOUNG_PAIR(BgL_arg1846z00_3106,
										((obj_t) BgL_arg1847z00_3107));
								}
								BgL_arg1841z00_3103 =
									BGl_nodezd2Azd2zzintegrate_az00(
									((BgL_nodez00_bglt) BgL_arg1842z00_3104),
									((BgL_variablez00_bglt) BgL_hostz00_2881),
									BgL_arg1845z00_3105, BgL_az00_3101);
							}
							{
								obj_t BgL_az00_4334;
								obj_t BgL_argsz00_4333;

								BgL_argsz00_4333 = BgL_arg1840z00_3102;
								BgL_az00_4334 = BgL_arg1841z00_3103;
								BgL_az00_3101 = BgL_az00_4334;
								BgL_argsz00_3100 = BgL_argsz00_4333;
								goto BgL_liipz00_3099;
							}
						}
				}
				return
					BGl_nodezd2Azd2zzintegrate_az00(BgL_arg1829z00_3094,
					((BgL_variablez00_bglt) BgL_hostz00_2881), BgL_arg1830z00_3095,
					BgL_arg1831z00_3096);
			}
		}

	}



/* &node-A-app-ly1329 */
	obj_t BGl_z62nodezd2Azd2appzd2ly1329zb0zzintegrate_az00(obj_t BgL_envz00_2884,
		obj_t BgL_nodez00_2885, obj_t BgL_hostz00_2886, obj_t BgL_kz00_2887,
		obj_t BgL_az00_2888)
	{
		{	/* Integrate/a.scm 284 */
			{	/* Integrate/a.scm 286 */
				BgL_nodez00_bglt BgL_arg1809z00_3110;
				obj_t BgL_arg1811z00_3111;
				obj_t BgL_arg1820z00_3112;

				BgL_arg1809z00_3110 =
					(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_2885)))->BgL_funz00);
				{	/* Integrate/a.scm 288 */
					obj_t BgL_arg1821z00_3113;
					BgL_typez00_bglt BgL_arg1822z00_3114;

					BgL_arg1821z00_3113 = BGl_getzd2newzd2kontz00zzintegrate_az00();
					BgL_arg1822z00_3114 =
						BGl_getzd2typezd2zztype_typeofz00(
						(((BgL_appzd2lyzd2_bglt) COBJECT(
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_2885)))->BgL_funz00),
						((bool_t) 0));
					BgL_arg1811z00_3111 =
						MAKE_YOUNG_PAIR(BgL_arg1821z00_3113, ((obj_t) BgL_arg1822z00_3114));
				}
				{	/* Integrate/a.scm 289 */
					BgL_nodez00_bglt BgL_arg1824z00_3115;
					obj_t BgL_arg1825z00_3116;

					BgL_arg1824z00_3115 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2885)))->BgL_argz00);
					{	/* Integrate/a.scm 289 */
						obj_t BgL_arg1826z00_3117;
						BgL_typez00_bglt BgL_arg1827z00_3118;

						BgL_arg1826z00_3117 = BGl_getzd2newzd2kontz00zzintegrate_az00();
						BgL_arg1827z00_3118 =
							BGl_getzd2typezd2zztype_typeofz00(
							(((BgL_appzd2lyzd2_bglt) COBJECT(
										((BgL_appzd2lyzd2_bglt) BgL_nodez00_2885)))->BgL_argz00),
							((bool_t) 0));
						BgL_arg1825z00_3116 =
							MAKE_YOUNG_PAIR(BgL_arg1826z00_3117,
							((obj_t) BgL_arg1827z00_3118));
					}
					BgL_arg1820z00_3112 =
						BGl_nodezd2Azd2zzintegrate_az00(BgL_arg1824z00_3115,
						((BgL_variablez00_bglt) BgL_hostz00_2886), BgL_arg1825z00_3116,
						BgL_az00_2888);
				}
				return
					BGl_nodezd2Azd2zzintegrate_az00(BgL_arg1809z00_3110,
					((BgL_variablez00_bglt) BgL_hostz00_2886), BgL_arg1811z00_3111,
					BgL_arg1820z00_3112);
			}
		}

	}



/* &node-A-app1327 */
	obj_t BGl_z62nodezd2Azd2app1327z62zzintegrate_az00(obj_t BgL_envz00_2889,
		obj_t BgL_nodez00_2890, obj_t BgL_hostz00_2891, obj_t BgL_kz00_2892,
		obj_t BgL_az00_2893)
	{
		{	/* Integrate/a.scm 238 */
			{
				BgL_nodez00_bglt BgL_nodez00_3121;

				{	/* Integrate/a.scm 259 */
					BgL_variablez00_bglt BgL_calleez00_3128;

					BgL_calleez00_3128 =
						(((BgL_varz00_bglt) COBJECT(
								(((BgL_appz00_bglt) COBJECT(
											((BgL_appz00_bglt) BgL_nodez00_2890)))->BgL_funz00)))->
						BgL_variablez00);
					{	/* Integrate/a.scm 261 */
						obj_t BgL_g1134z00_3129;

						BgL_nodez00_3121 =
							((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_2890));
						if (CBOOL(BGl_za2optimzd2returnzd2gotozf3za2zf3zzengine_paramz00))
							{	/* Integrate/a.scm 243 */
								BgL_varz00_bglt BgL_i1129z00_3122;

								BgL_i1129z00_3122 =
									(((BgL_appz00_bglt) COBJECT(
											((BgL_appz00_bglt) BgL_nodez00_3121)))->BgL_funz00);
								if (BGl_iszd2unwindzd2untilzf3zf3zzreturn_walkz00(
										(((BgL_varz00_bglt) COBJECT(BgL_i1129z00_3122))->
											BgL_variablez00)))
									{	/* Integrate/a.scm 245 */
										bool_t BgL_test2271z00_4369;

										{	/* Integrate/a.scm 245 */
											obj_t BgL_arg1790z00_3123;

											{	/* Integrate/a.scm 245 */
												obj_t BgL_pairz00_3124;

												BgL_pairz00_3124 =
													(((BgL_appz00_bglt) COBJECT(
															((BgL_appz00_bglt) BgL_nodez00_3121)))->
													BgL_argsz00);
												BgL_arg1790z00_3123 = CAR(BgL_pairz00_3124);
											}
											BgL_test2271z00_4369 =
												BGl_isazf3zf3zz__objectz00(BgL_arg1790z00_3123,
												BGl_varz00zzast_nodez00);
										}
										if (BgL_test2271z00_4369)
											{	/* Integrate/a.scm 246 */
												BgL_varz00_bglt BgL_i1130z00_3125;

												{	/* Integrate/a.scm 246 */
													obj_t BgL_pairz00_3126;

													BgL_pairz00_3126 =
														(((BgL_appz00_bglt) COBJECT(
																((BgL_appz00_bglt) BgL_nodez00_3121)))->
														BgL_argsz00);
													BgL_i1130z00_3125 =
														((BgL_varz00_bglt) CAR(BgL_pairz00_3126));
												}
												{	/* Integrate/a.scm 247 */
													BgL_valuez00_bglt BgL_valz00_3127;

													BgL_valz00_3127 =
														(((BgL_variablez00_bglt) COBJECT(
																(((BgL_varz00_bglt)
																		COBJECT(BgL_i1130z00_3125))->
																	BgL_variablez00)))->BgL_valuez00);
													if (BGl_isazf3zf3zz__objectz00(((obj_t)
																BgL_valz00_3127),
															BGl_svarzf2Iinfozf2zzintegrate_infoz00))
														{
															BgL_svarzf2iinfozf2_bglt BgL_auxz00_4383;

															{
																obj_t BgL_auxz00_4384;

																{	/* Integrate/a.scm 249 */
																	BgL_objectz00_bglt BgL_tmpz00_4385;

																	BgL_tmpz00_4385 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_valz00_3127));
																	BgL_auxz00_4384 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_4385);
																}
																BgL_auxz00_4383 =
																	((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_4384);
															}
															BgL_g1134z00_3129 =
																(((BgL_svarzf2iinfozf2_bglt)
																	COBJECT(BgL_auxz00_4383))->BgL_xhdlz00);
														}
													else
														{	/* Integrate/a.scm 248 */
															BgL_g1134z00_3129 = BFALSE;
														}
												}
											}
										else
											{	/* Integrate/a.scm 245 */
												BgL_g1134z00_3129 = BFALSE;
											}
									}
								else
									{	/* Integrate/a.scm 244 */
										BgL_g1134z00_3129 = BFALSE;
									}
							}
						else
							{	/* Integrate/a.scm 241 */
								BgL_g1134z00_3129 = BFALSE;
							}
						if (CBOOL(BgL_g1134z00_3129))
							{	/* Integrate/a.scm 261 */
								return BgL_az00_2893;
							}
						else
							{	/* Integrate/a.scm 265 */
								obj_t BgL_g1136z00_3130;

								BgL_g1136z00_3130 =
									(((BgL_appz00_bglt) COBJECT(
											((BgL_appz00_bglt) BgL_nodez00_2890)))->BgL_argsz00);
								{
									obj_t BgL_argsz00_3132;
									obj_t BgL_az00_3133;

									BgL_argsz00_3132 = BgL_g1136z00_3130;
									BgL_az00_3133 = BgL_az00_2893;
								BgL_liipz00_3131:
									if (NULLP(BgL_argsz00_3132))
										{	/* Integrate/a.scm 270 */
											bool_t BgL_test2275z00_4399;

											{	/* Integrate/a.scm 270 */
												bool_t BgL_res2119z00_3134;

												BgL_res2119z00_3134 =
													BGl_isazf3zf3zz__objectz00(
													((obj_t) BgL_calleez00_3128),
													BGl_localz00zzast_varz00);
												BgL_test2275z00_4399 = BgL_res2119z00_3134;
											}
											if (BgL_test2275z00_4399)
												{	/* Integrate/a.scm 273 */
													obj_t BgL_arg1746z00_3135;

													{	/* Integrate/a.scm 273 */
														obj_t BgL_arg1747z00_3136;

														{	/* Integrate/a.scm 273 */
															obj_t BgL_arg1754z00_3137;

															BgL_arg1754z00_3137 =
																MAKE_YOUNG_PAIR(BgL_kz00_2892, BNIL);
															BgL_arg1747z00_3136 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_calleez00_3128),
																BgL_arg1754z00_3137);
														}
														BgL_arg1746z00_3135 =
															MAKE_YOUNG_PAIR(BgL_hostz00_2891,
															BgL_arg1747z00_3136);
													}
													return
														MAKE_YOUNG_PAIR(BgL_arg1746z00_3135, BgL_az00_3133);
												}
											else
												{	/* Integrate/a.scm 270 */
													return BgL_az00_3133;
												}
										}
									else
										{	/* Integrate/a.scm 275 */
											obj_t BgL_arg1755z00_3138;
											obj_t BgL_arg1756z00_3139;

											BgL_arg1755z00_3138 = CDR(((obj_t) BgL_argsz00_3132));
											{	/* Integrate/a.scm 276 */
												obj_t BgL_arg1757z00_3140;
												obj_t BgL_arg1759z00_3141;

												BgL_arg1757z00_3140 = CAR(((obj_t) BgL_argsz00_3132));
												{	/* Integrate/a.scm 278 */
													obj_t BgL_arg1760z00_3142;
													BgL_typez00_bglt BgL_arg1761z00_3143;

													BgL_arg1760z00_3142 =
														BGl_getzd2newzd2kontz00zzintegrate_az00();
													{	/* Integrate/a.scm 278 */
														obj_t BgL_arg1768z00_3144;

														BgL_arg1768z00_3144 =
															CAR(((obj_t) BgL_argsz00_3132));
														BgL_arg1761z00_3143 =
															BGl_getzd2typezd2zztype_typeofz00(
															((BgL_nodez00_bglt) BgL_arg1768z00_3144),
															((bool_t) 0));
													}
													BgL_arg1759z00_3141 =
														MAKE_YOUNG_PAIR(BgL_arg1760z00_3142,
														((obj_t) BgL_arg1761z00_3143));
												}
												BgL_arg1756z00_3139 =
													BGl_nodezd2Azd2zzintegrate_az00(
													((BgL_nodez00_bglt) BgL_arg1757z00_3140),
													((BgL_variablez00_bglt) BgL_hostz00_2891),
													BgL_arg1759z00_3141, BgL_az00_3133);
											}
											{
												obj_t BgL_az00_4422;
												obj_t BgL_argsz00_4421;

												BgL_argsz00_4421 = BgL_arg1755z00_3138;
												BgL_az00_4422 = BgL_arg1756z00_3139;
												BgL_az00_3133 = BgL_az00_4422;
												BgL_argsz00_3132 = BgL_argsz00_4421;
												goto BgL_liipz00_3131;
											}
										}
								}
							}
					}
				}
			}
		}

	}



/* &node-A-sync1325 */
	obj_t BGl_z62nodezd2Azd2sync1325z62zzintegrate_az00(obj_t BgL_envz00_2894,
		obj_t BgL_nodez00_2895, obj_t BgL_hostz00_2896, obj_t BgL_kz00_2897,
		obj_t BgL_az00_2898)
	{
		{	/* Integrate/a.scm 229 */
			{	/* Integrate/a.scm 231 */
				BgL_nodez00_bglt BgL_arg1729z00_3146;
				obj_t BgL_arg1731z00_3147;

				BgL_arg1729z00_3146 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2895)))->BgL_bodyz00);
				{	/* Integrate/a.scm 232 */
					BgL_nodez00_bglt BgL_arg1732z00_3148;
					obj_t BgL_arg1733z00_3149;
					obj_t BgL_arg1738z00_3150;

					BgL_arg1732z00_3148 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2895)))->BgL_prelockz00);
					{	/* Integrate/a.scm 232 */
						obj_t BgL_arg1739z00_3151;

						BgL_arg1739z00_3151 = BGl_getzd2newzd2kontz00zzintegrate_az00();
						BgL_arg1733z00_3149 =
							MAKE_YOUNG_PAIR(BgL_arg1739z00_3151,
							BGl_za2objza2z00zztype_cachez00);
					}
					{	/* Integrate/a.scm 233 */
						BgL_nodez00_bglt BgL_arg1740z00_3152;
						obj_t BgL_arg1741z00_3153;

						BgL_arg1740z00_3152 =
							(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nodez00_2895)))->BgL_mutexz00);
						{	/* Integrate/a.scm 233 */
							obj_t BgL_arg1742z00_3154;

							BgL_arg1742z00_3154 = BGl_getzd2newzd2kontz00zzintegrate_az00();
							BgL_arg1741z00_3153 =
								MAKE_YOUNG_PAIR(BgL_arg1742z00_3154,
								BGl_za2mutexza2z00zztype_cachez00);
						}
						BgL_arg1738z00_3150 =
							BGl_nodezd2Azd2zzintegrate_az00(BgL_arg1740z00_3152,
							((BgL_variablez00_bglt) BgL_hostz00_2896), BgL_arg1741z00_3153,
							BgL_az00_2898);
					}
					BgL_arg1731z00_3147 =
						BGl_nodezd2Azd2zzintegrate_az00(BgL_arg1732z00_3148,
						((BgL_variablez00_bglt) BgL_hostz00_2896), BgL_arg1733z00_3149,
						BgL_arg1738z00_3150);
				}
				return
					BGl_nodezd2Azd2zzintegrate_az00(BgL_arg1729z00_3146,
					((BgL_variablez00_bglt) BgL_hostz00_2896), BgL_kz00_2897,
					BgL_arg1731z00_3147);
			}
		}

	}



/* &node-A-sequence1323 */
	obj_t BGl_z62nodezd2Azd2sequence1323z62zzintegrate_az00(obj_t BgL_envz00_2899,
		obj_t BgL_nodez00_2900, obj_t BgL_hostz00_2901, obj_t BgL_kz00_2902,
		obj_t BgL_az00_2903)
	{
		{	/* Integrate/a.scm 212 */
			if (NULLP(
					(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_2900)))->BgL_nodesz00)))
				{	/* Integrate/a.scm 214 */
					return BgL_az00_2903;
				}
			else
				{
					obj_t BgL_ndsz00_3157;
					obj_t BgL_az00_3158;

					BgL_ndsz00_3157 =
						(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_2900)))->BgL_nodesz00);
					BgL_az00_3158 = BgL_az00_2903;
				BgL_liipz00_3156:
					if (NULLP(CDR(((obj_t) BgL_ndsz00_3157))))
						{	/* Integrate/a.scm 219 */
							obj_t BgL_arg1704z00_3159;

							BgL_arg1704z00_3159 = CAR(((obj_t) BgL_ndsz00_3157));
							return
								BGl_nodezd2Azd2zzintegrate_az00(
								((BgL_nodez00_bglt) BgL_arg1704z00_3159),
								((BgL_variablez00_bglt) BgL_hostz00_2901), BgL_kz00_2902,
								BgL_az00_3158);
						}
					else
						{	/* Integrate/a.scm 220 */
							obj_t BgL_arg1707z00_3160;
							obj_t BgL_arg1708z00_3161;

							BgL_arg1707z00_3160 = CDR(((obj_t) BgL_ndsz00_3157));
							{	/* Integrate/a.scm 221 */
								obj_t BgL_arg1711z00_3162;
								obj_t BgL_arg1712z00_3163;

								BgL_arg1711z00_3162 = CAR(((obj_t) BgL_ndsz00_3157));
								{	/* Integrate/a.scm 223 */
									obj_t BgL_arg1719z00_3164;
									BgL_typez00_bglt BgL_arg1725z00_3165;

									BgL_arg1719z00_3164 =
										BGl_getzd2newzd2kontz00zzintegrate_az00();
									{	/* Integrate/a.scm 223 */
										obj_t BgL_arg1726z00_3166;

										BgL_arg1726z00_3166 = CAR(((obj_t) BgL_ndsz00_3157));
										BgL_arg1725z00_3165 =
											BGl_getzd2typezd2zztype_typeofz00(
											((BgL_nodez00_bglt) BgL_arg1726z00_3166), ((bool_t) 0));
									}
									BgL_arg1712z00_3163 =
										MAKE_YOUNG_PAIR(BgL_arg1719z00_3164,
										((obj_t) BgL_arg1725z00_3165));
								}
								BgL_arg1708z00_3161 =
									BGl_nodezd2Azd2zzintegrate_az00(
									((BgL_nodez00_bglt) BgL_arg1711z00_3162),
									((BgL_variablez00_bglt) BgL_hostz00_2901),
									BgL_arg1712z00_3163, BgL_az00_3158);
							}
							{
								obj_t BgL_az00_4467;
								obj_t BgL_ndsz00_4466;

								BgL_ndsz00_4466 = BgL_arg1707z00_3160;
								BgL_az00_4467 = BgL_arg1708z00_3161;
								BgL_az00_3158 = BgL_az00_4467;
								BgL_ndsz00_3157 = BgL_ndsz00_4466;
								goto BgL_liipz00_3156;
							}
						}
				}
		}

	}



/* &node-A-closure1321 */
	obj_t BGl_z62nodezd2Azd2closure1321z62zzintegrate_az00(obj_t BgL_envz00_2904,
		obj_t BgL_nodez00_2905, obj_t BgL_hostz00_2906, obj_t BgL_kz00_2907,
		obj_t BgL_az00_2908)
	{
		{	/* Integrate/a.scm 206 */
			{	/* Integrate/a.scm 207 */
				obj_t BgL_arg1688z00_3168;

				BgL_arg1688z00_3168 =
					BGl_shapez00zztools_shapez00(
					((obj_t) ((BgL_closurez00_bglt) BgL_nodez00_2905)));
				return
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string2142z00zzintegrate_az00, BGl_string2164z00zzintegrate_az00,
					BgL_arg1688z00_3168);
			}
		}

	}



/* &node-A-var1319 */
	obj_t BGl_z62nodezd2Azd2var1319z62zzintegrate_az00(obj_t BgL_envz00_2909,
		obj_t BgL_nodez00_2910, obj_t BgL_hostz00_2911, obj_t BgL_kz00_2912,
		obj_t BgL_az00_2913)
	{
		{	/* Integrate/a.scm 190 */
			if (CBOOL(BGl_za2optimzd2returnzd2gotozf3za2zf3zzengine_paramz00))
				{	/* Integrate/a.scm 193 */
					BgL_valuez00_bglt BgL_valz00_3170;

					BgL_valz00_3170 =
						(((BgL_variablez00_bglt) COBJECT(
								(((BgL_varz00_bglt) COBJECT(
											((BgL_varz00_bglt) BgL_nodez00_2910)))->
									BgL_variablez00)))->BgL_valuez00);
					if (BGl_isazf3zf3zz__objectz00(((obj_t) BgL_valz00_3170),
							BGl_svarzf2Iinfozf2zzintegrate_infoz00))
						{	/* Integrate/a.scm 196 */
							bool_t BgL_test2280z00_4482;

							{	/* Integrate/a.scm 196 */
								obj_t BgL_tmpz00_4483;

								{
									BgL_svarzf2iinfozf2_bglt BgL_auxz00_4484;

									{
										obj_t BgL_auxz00_4485;

										{	/* Integrate/a.scm 196 */
											BgL_objectz00_bglt BgL_tmpz00_4486;

											BgL_tmpz00_4486 =
												((BgL_objectz00_bglt)
												((BgL_svarz00_bglt) BgL_valz00_3170));
											BgL_auxz00_4485 = BGL_OBJECT_WIDENING(BgL_tmpz00_4486);
										}
										BgL_auxz00_4484 =
											((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_4485);
									}
									BgL_tmpz00_4483 =
										(((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4484))->
										BgL_xhdlz00);
								}
								BgL_test2280z00_4482 = CBOOL(BgL_tmpz00_4483);
							}
							if (BgL_test2280z00_4482)
								{	/* Integrate/a.scm 197 */
									obj_t BgL_nkz00_3171;

									{	/* Integrate/a.scm 197 */
										obj_t BgL_arg1685z00_3172;
										BgL_typez00_bglt BgL_arg1686z00_3173;

										BgL_arg1685z00_3172 =
											BGl_getzd2newzd2kontz00zzintegrate_az00();
										BgL_arg1686z00_3173 =
											BGl_getzd2typezd2zztype_typeofz00(
											((BgL_nodez00_bglt)
												((BgL_varz00_bglt) BgL_nodez00_2910)), ((bool_t) 0));
										BgL_nkz00_3171 =
											MAKE_YOUNG_PAIR(BgL_arg1685z00_3172,
											((obj_t) BgL_arg1686z00_3173));
									}
									{	/* Integrate/a.scm 198 */
										obj_t BgL_arg1667z00_3174;

										{	/* Integrate/a.scm 198 */
											obj_t BgL_arg1669z00_3175;

											{	/* Integrate/a.scm 198 */
												obj_t BgL_arg1672z00_3176;
												obj_t BgL_arg1684z00_3177;

												{
													BgL_svarzf2iinfozf2_bglt BgL_auxz00_4499;

													{
														obj_t BgL_auxz00_4500;

														{	/* Integrate/a.scm 198 */
															BgL_objectz00_bglt BgL_tmpz00_4501;

															BgL_tmpz00_4501 =
																((BgL_objectz00_bglt)
																((BgL_svarz00_bglt) BgL_valz00_3170));
															BgL_auxz00_4500 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_4501);
														}
														BgL_auxz00_4499 =
															((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_4500);
													}
													BgL_arg1672z00_3176 =
														(((BgL_svarzf2iinfozf2_bglt)
															COBJECT(BgL_auxz00_4499))->BgL_xhdlz00);
												}
												BgL_arg1684z00_3177 =
													MAKE_YOUNG_PAIR(BgL_nkz00_3171, BNIL);
												BgL_arg1669z00_3175 =
													MAKE_YOUNG_PAIR(BgL_arg1672z00_3176,
													BgL_arg1684z00_3177);
											}
											BgL_arg1667z00_3174 =
												MAKE_YOUNG_PAIR(BgL_hostz00_2911, BgL_arg1669z00_3175);
										}
										return MAKE_YOUNG_PAIR(BgL_arg1667z00_3174, BgL_az00_2913);
									}
								}
							else
								{	/* Integrate/a.scm 196 */
									return BgL_az00_2913;
								}
						}
					else
						{	/* Integrate/a.scm 194 */
							return BgL_az00_2913;
						}
				}
			else
				{	/* Integrate/a.scm 191 */
					return BgL_az00_2913;
				}
		}

	}



/* &node-A-kwote1317 */
	obj_t BGl_z62nodezd2Azd2kwote1317z62zzintegrate_az00(obj_t BgL_envz00_2914,
		obj_t BgL_nodez00_2915, obj_t BgL_hostz00_2916, obj_t BgL_kz00_2917,
		obj_t BgL_az00_2918)
	{
		{	/* Integrate/a.scm 184 */
			return BgL_az00_2918;
		}

	}



/* &node-A-atom1315 */
	obj_t BGl_z62nodezd2Azd2atom1315z62zzintegrate_az00(obj_t BgL_envz00_2919,
		obj_t BgL_nodez00_2920, obj_t BgL_hostz00_2921, obj_t BgL_kz00_2922,
		obj_t BgL_az00_2923)
	{
		{	/* Integrate/a.scm 178 */
			return BgL_az00_2923;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_az00()
	{
		{	/* Integrate/a.scm 18 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2165z00zzintegrate_az00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2165z00zzintegrate_az00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2165z00zzintegrate_az00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2165z00zzintegrate_az00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2165z00zzintegrate_az00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2165z00zzintegrate_az00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2165z00zzintegrate_az00));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string2165z00zzintegrate_az00));
			BGl_modulezd2initializa7ationz75zzintegrate_infoz00(((long) 0),
				BSTRING_TO_STRING(BGl_string2165z00zzintegrate_az00));
			BGl_modulezd2initializa7ationz75zzreturn_walkz00(((long) 152969855),
				BSTRING_TO_STRING(BGl_string2165z00zzintegrate_az00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2165z00zzintegrate_az00));
			return
				BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string2165z00zzintegrate_az00));
		}

	}

#ifdef __cplusplus
}
#endif
