/*===========================================================================*/
/*   (Integrate/node.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/node.scm) */
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

	typedef struct BgL_svarzf2iinfozf2_bgl
	{
		obj_t BgL_fzd2markzd2;
		obj_t BgL_uzd2markzd2;
		bool_t BgL_kapturedzf3zf3;
		bool_t BgL_celledzf3zf3;
		obj_t BgL_xhdlz00;
	}                      *BgL_svarzf2iinfozf2_bglt;

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


	static BgL_nodez00_bglt BGl_z62gloz12z70zzintegrate_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62integratezd2celledzf3z43zzintegrate_nodez00(obj_t, obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t
		BGl_thezd2globalzd2zzintegrate_localzd2ze3globalz31(BgL_localz00_bglt);
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2conditional1335za2zzintegrate_nodez00(obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzintegrate_nodez00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static BgL_localz00_bglt
		BGl_cellzd2variablezd2zzintegrate_nodez00(BgL_localz00_bglt);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2appzd2ly1324z70zzintegrate_nodez00(obj_t, obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzintegrate_nodez00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzintegrate_nodez00();
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_z62integratezd2globaliza7ez12z05zzintegrate_nodez00(obj_t,
		obj_t, obj_t, obj_t);
	extern BgL_typez00_bglt
		BGl_getzd2bigloozd2typez00zztype_cachez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_integratezd2globaliza7ez12z67zzintegrate_nodez00(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t);
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2extern1328za2zzintegrate_nodez00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_cellzd2formalszd2zzintegrate_nodez00(obj_t,
		BgL_nodez00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2setzd2exzd2it1345za2zzintegrate_nodez00(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62gloz12zd2cast1330za2zzintegrate_nodez00(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2funcall1326za2zzintegrate_nodez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static BgL_nodez00_bglt BGl_z62gloz12zd2setq1332za2zzintegrate_nodez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_integratezd2celledzf3z21zzintegrate_nodez00(BgL_localz00_bglt);
	static obj_t BGl_gloza2z12zb0zzintegrate_nodez00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzintegrate_nodez00();
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2boxzd2ref1351z70zzintegrate_nodez00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2makezd2box1349z70zzintegrate_nodez00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2boxzd2setz121353z62zzintegrate_nodez00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static BgL_nodez00_bglt BGl_z62gloz12zd2app1322za2zzintegrate_nodez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_nodez00 = BUNSPEC;
	static BgL_nodez00_bglt BGl_gloz12z12zzintegrate_nodez00(BgL_nodez00_bglt,
		BgL_variablez00_bglt);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzintegrate_nodez00();
	static BgL_nodez00_bglt BGl_z62gloz12zd2atom1310za2zzintegrate_nodez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzintegrate_nodez00();
	extern obj_t BGl_za2cellza2z00zztype_cachez00;
	extern obj_t BGl_sfunzf2Iinfozf2zzintegrate_infoz00;
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2letzd2fun1341z70zzintegrate_nodez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62gloz121307z70zzintegrate_nodez00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2switch1339za2zzintegrate_nodez00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62gloz12zd2kwote1312za2zzintegrate_nodez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	extern obj_t BGl_svarzf2Iinfozf2zzintegrate_infoz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_nodez00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_localzd2ze3globalz31(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
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
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2letzd2var1343z70zzintegrate_nodez00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62gloz12zd2sync1320za2zzintegrate_nodez00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_tprintz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	static BgL_nodez00_bglt BGl_z62gloz12zd2fail1337za2zzintegrate_nodez00(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2closure1316za2zzintegrate_nodez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzintegrate_nodez00();
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_nodez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_nodez00();
	static obj_t BGl_celledzd2bindingszd2zzintegrate_nodez00(obj_t);
	static BgL_nodez00_bglt BGl_z62gloz12zd2var1314za2zzintegrate_nodez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2jumpzd2exzd2it1347za2zzintegrate_nodez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	static obj_t
		BGl_globaliza7ezd2localzd2funz12zb5zzintegrate_nodez00(BgL_localz00_bglt,
		BgL_variablez00_bglt);
	static BgL_makezd2boxzd2_bglt
		BGl_azd2makezd2cellz00zzintegrate_nodez00(BgL_nodez00_bglt,
		BgL_variablez00_bglt);
	extern obj_t BGl_switchz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62gloz12zd2sequence1318za2zzintegrate_nodez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[5];


	   
		 
		DEFINE_STATIC_BGL_GENERIC(BGl_gloz12zd2envzc0zzintegrate_nodez00,
		BgL_bgl_za762gloza712za770za7za7in2014za7,
		BGl_z62gloz12z70zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1974z00zzintegrate_nodez00,
		BgL_bgl_za762gloza7121307za7702015za7,
		BGl_z62gloz121307z70zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1977z00zzintegrate_nodez00,
		BgL_bgl_za762gloza712za7d2atom2016za7,
		BGl_z62gloz12zd2atom1310za2zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1979z00zzintegrate_nodez00,
		BgL_bgl_za762gloza712za7d2kwot2017za7,
		BGl_z62gloz12zd2kwote1312za2zzintegrate_nodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_integratezd2celledzf3zd2envzf3zzintegrate_nodez00,
		BgL_bgl_za762integrateza7d2c2018z00,
		BGl_z62integratezd2celledzf3z43zzintegrate_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1980z00zzintegrate_nodez00,
		BgL_bgl_za762gloza712za7d2var12019za7,
		BGl_z62gloz12zd2var1314za2zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1981z00zzintegrate_nodez00,
		BgL_bgl_za762gloza712za7d2clos2020za7,
		BGl_z62gloz12zd2closure1316za2zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1982z00zzintegrate_nodez00,
		BgL_bgl_za762gloza712za7d2sequ2021za7,
		BGl_z62gloz12zd2sequence1318za2zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1983z00zzintegrate_nodez00,
		BgL_bgl_za762gloza712za7d2sync2022za7,
		BGl_z62gloz12zd2sync1320za2zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1984z00zzintegrate_nodez00,
		BgL_bgl_za762gloza712za7d2app12023za7,
		BGl_z62gloz12zd2app1322za2zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1985z00zzintegrate_nodez00,
		BgL_bgl_za762gloza712za7d2appza72024z00,
		BGl_z62gloz12zd2appzd2ly1324z70zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1986z00zzintegrate_nodez00,
		BgL_bgl_za762gloza712za7d2func2025za7,
		BGl_z62gloz12zd2funcall1326za2zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1987z00zzintegrate_nodez00,
		BgL_bgl_za762gloza712za7d2exte2026za7,
		BGl_z62gloz12zd2extern1328za2zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1988z00zzintegrate_nodez00,
		BgL_bgl_za762gloza712za7d2cast2027za7,
		BGl_z62gloz12zd2cast1330za2zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1989z00zzintegrate_nodez00,
		BgL_bgl_za762gloza712za7d2setq2028za7,
		BGl_z62gloz12zd2setq1332za2zzintegrate_nodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_integratezd2globaliza7ez12zd2envzb5zzintegrate_nodez00,
		BgL_bgl_za762integrateza7d2g2029z00,
		BGl_z62integratezd2globaliza7ez12z05zzintegrate_nodez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1990z00zzintegrate_nodez00,
		BgL_bgl_za762gloza712za7d2cond2030za7,
		BGl_z62gloz12zd2conditional1335za2zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1991z00zzintegrate_nodez00,
		BgL_bgl_za762gloza712za7d2fail2031za7,
		BGl_z62gloz12zd2fail1337za2zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1992z00zzintegrate_nodez00,
		BgL_bgl_za762gloza712za7d2swit2032za7,
		BGl_z62gloz12zd2switch1339za2zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1993z00zzintegrate_nodez00,
		BgL_bgl_za762gloza712za7d2letza72033z00,
		BGl_z62gloz12zd2letzd2fun1341z70zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1994z00zzintegrate_nodez00,
		BgL_bgl_za762gloza712za7d2letza72034z00,
		BGl_z62gloz12zd2letzd2var1343z70zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1995z00zzintegrate_nodez00,
		BgL_bgl_za762gloza712za7d2setza72035z00,
		BGl_z62gloz12zd2setzd2exzd2it1345za2zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1996z00zzintegrate_nodez00,
		BgL_bgl_za762gloza712za7d2jump2036za7,
		BGl_z62gloz12zd2jumpzd2exzd2it1347za2zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1997z00zzintegrate_nodez00,
		BgL_bgl_za762gloza712za7d2make2037za7,
		BGl_z62gloz12zd2makezd2box1349z70zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1998z00zzintegrate_nodez00,
		BgL_bgl_za762gloza712za7d2boxza72038z00,
		BGl_z62gloz12zd2boxzd2ref1351z70zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1999z00zzintegrate_nodez00,
		BgL_bgl_za762gloza712za7d2boxza72039z00,
		BGl_z62gloz12zd2boxzd2setz121353z62zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2000z00zzintegrate_nodez00,
		BgL_bgl_string2000za700za7za7i2040za7, "box-ref=", 8);
	      DEFINE_STRING(BGl_string2001z00zzintegrate_nodez00,
		BgL_bgl_string2001za700za7za7i2041za7, ":", 1);
	      DEFINE_STRING(BGl_string2002z00zzintegrate_nodez00,
		BgL_bgl_string2002za700za7za7i2042za7, ",", 1);
	      DEFINE_STRING(BGl_string2003z00zzintegrate_nodez00,
		BgL_bgl_string2003za700za7za7i2043za7, "Integrate/node.scm", 18);
	      DEFINE_STRING(BGl_string2004z00zzintegrate_nodez00,
		BgL_bgl_string2004za700za7za7i2044za7, "access=", 7);
	      DEFINE_STRING(BGl_string2005z00zzintegrate_nodez00,
		BgL_bgl_string2005za700za7za7i2045za7, "integration", 11);
	      DEFINE_STRING(BGl_string2006z00zzintegrate_nodez00,
		BgL_bgl_string2006za700za7za7i2046za7, "box-ref", 7);
	      DEFINE_STRING(BGl_string2007z00zzintegrate_nodez00,
		BgL_bgl_string2007za700za7za7i2047za7, "node-free", 9);
	      DEFINE_STRING(BGl_string2008z00zzintegrate_nodez00,
		BgL_bgl_string2008za700za7za7i2048za7, "Unexepected `closure' node", 26);
	      DEFINE_STRING(BGl_string2009z00zzintegrate_nodez00,
		BgL_bgl_string2009za700za7za7i2049za7, "integrate_node", 14);
	      DEFINE_STRING(BGl_string2010z00zzintegrate_nodez00,
		BgL_bgl_string2010za700za7za7i2050za7,
		"aux glo!1307 done (write cell-integrate) cell-integrate ", 56);
	      DEFINE_STRING(BGl_string1975z00zzintegrate_nodez00,
		BgL_bgl_string1975za700za7za7i2051za7, "glo!1307", 8);
	      DEFINE_STRING(BGl_string1976z00zzintegrate_nodez00,
		BgL_bgl_string1976za700za7za7i2052za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1978z00zzintegrate_nodez00,
		BgL_bgl_string1978za700za7za7i2053za7, "glo!", 4);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzintegrate_nodez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_nodez00(long
		BgL_checksumz00_2774, char *BgL_fromz00_2775)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_nodez00))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_nodez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzintegrate_nodez00();
					BGl_libraryzd2moduleszd2initz00zzintegrate_nodez00();
					BGl_cnstzd2initzd2zzintegrate_nodez00();
					BGl_importedzd2moduleszd2initz00zzintegrate_nodez00();
					BGl_genericzd2initzd2zzintegrate_nodez00();
					BGl_methodzd2initzd2zzintegrate_nodez00();
					return BGl_toplevelzd2initzd2zzintegrate_nodez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_nodez00()
	{
		{	/* Integrate/node.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"integrate_node");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"integrate_node");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"integrate_node");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"integrate_node");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"integrate_node");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"integrate_node");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"integrate_node");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"integrate_node");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "integrate_node");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"integrate_node");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzintegrate_nodez00()
	{
		{	/* Integrate/node.scm 15 */
			{	/* Integrate/node.scm 15 */
				obj_t BgL_cportz00_2586;

				{	/* Integrate/node.scm 15 */
					obj_t BgL_stringz00_2594;

					BgL_stringz00_2594 = BGl_string2010z00zzintegrate_nodez00;
					{	/* Integrate/node.scm 15 */
						obj_t BgL_startz00_2595;

						BgL_startz00_2595 = BINT(((long) 0));
						{	/* Integrate/node.scm 15 */
							obj_t BgL_endz00_2596;

							BgL_endz00_2596 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2594)));
							{	/* Integrate/node.scm 15 */

								BgL_cportz00_2586 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2594, BgL_startz00_2595, BgL_endz00_2596);
				}}}}
				{
					long BgL_iz00_2587;

					BgL_iz00_2587 = ((long) 4);
				BgL_loopz00_2588:
					if ((BgL_iz00_2587 == ((long) -1)))
						{	/* Integrate/node.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Integrate/node.scm 15 */
							{	/* Integrate/node.scm 15 */
								obj_t BgL_arg2012z00_2590;

								{	/* Integrate/node.scm 15 */

									{	/* Integrate/node.scm 15 */
										obj_t BgL_locationz00_2592;

										BgL_locationz00_2592 = BBOOL(((bool_t) 0));
										{	/* Integrate/node.scm 15 */

											BgL_arg2012z00_2590 =
												BGl_readz00zz__readerz00(BgL_cportz00_2586,
												BgL_locationz00_2592);
										}
									}
								}
								{	/* Integrate/node.scm 15 */
									int BgL_tmpz00_2805;

									BgL_tmpz00_2805 = (int) (BgL_iz00_2587);
									CNST_TABLE_SET(BgL_tmpz00_2805, BgL_arg2012z00_2590);
							}}
							{	/* Integrate/node.scm 15 */
								int BgL_auxz00_2593;

								BgL_auxz00_2593 = (int) ((BgL_iz00_2587 - ((long) 1)));
								{
									long BgL_iz00_2810;

									BgL_iz00_2810 = (long) (BgL_auxz00_2593);
									BgL_iz00_2587 = BgL_iz00_2810;
									goto BgL_loopz00_2588;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzintegrate_nodez00()
	{
		{	/* Integrate/node.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzintegrate_nodez00()
	{
		{	/* Integrate/node.scm 15 */
			return BUNSPEC;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzintegrate_nodez00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1567;

				BgL_headz00_1567 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1568;
					obj_t BgL_tailz00_1569;

					BgL_prevz00_1568 = BgL_headz00_1567;
					BgL_tailz00_1569 = BgL_l1z00_1;
				BgL_loopz00_1570:
					if (PAIRP(BgL_tailz00_1569))
						{
							obj_t BgL_newzd2prevzd2_1572;

							BgL_newzd2prevzd2_1572 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1569), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1568, BgL_newzd2prevzd2_1572);
							{
								obj_t BgL_tailz00_2820;
								obj_t BgL_prevz00_2819;

								BgL_prevz00_2819 = BgL_newzd2prevzd2_1572;
								BgL_tailz00_2820 = CDR(BgL_tailz00_1569);
								BgL_tailz00_1569 = BgL_tailz00_2820;
								BgL_prevz00_1568 = BgL_prevz00_2819;
								goto BgL_loopz00_1570;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1567);
				}
			}
		}

	}



/* integrate-globalize! */
	BGL_EXPORTED_DEF obj_t
		BGl_integratezd2globaliza7ez12z67zzintegrate_nodez00(BgL_nodez00_bglt
		BgL_astz00_3, BgL_variablez00_bglt BgL_integratorz00_4,
		obj_t BgL_whatzf2byza2z50_5)
	{
		{	/* Integrate/node.scm 36 */
			{	/* Integrate/node.scm 42 */
				BgL_valuez00_bglt BgL_funz00_1575;

				BgL_funz00_1575 =
					(((BgL_variablez00_bglt) COBJECT(BgL_integratorz00_4))->BgL_valuez00);
				{	/* Integrate/node.scm 42 */
					obj_t BgL_celledz00_1576;

					{	/* Integrate/node.scm 43 */
						obj_t BgL_arg1384z00_1597;

						BgL_arg1384z00_1597 =
							(((BgL_sfunz00_bglt) COBJECT(
									((BgL_sfunz00_bglt) BgL_funz00_1575)))->BgL_argsz00);
						BgL_celledz00_1576 =
							BGl_celledzd2bindingszd2zzintegrate_nodez00(BgL_arg1384z00_1597);
					}
					{	/* Integrate/node.scm 43 */
						obj_t BgL_whatzf2byza2z50_1577;

						BgL_whatzf2byza2z50_1577 =
							BGl_appendzd221011zd2zzintegrate_nodez00(BgL_celledz00_1576,
							BgL_whatzf2byza2z50_5);
						{	/* Integrate/node.scm 44 */

							{
								obj_t BgL_l1282z00_1579;

								BgL_l1282z00_1579 = BgL_whatzf2byza2z50_1577;
							BgL_zc3z04anonymousza31361ze3z87_1580:
								if (PAIRP(BgL_l1282z00_1579))
									{	/* Integrate/node.scm 46 */
										{	/* Integrate/node.scm 47 */
											obj_t BgL_wzd2bzd2_1582;

											BgL_wzd2bzd2_1582 = CAR(BgL_l1282z00_1579);
											{	/* Integrate/node.scm 47 */
												obj_t BgL_arg1363z00_1583;
												obj_t BgL_arg1364z00_1584;

												BgL_arg1363z00_1583 = CAR(((obj_t) BgL_wzd2bzd2_1582));
												BgL_arg1364z00_1584 = CDR(((obj_t) BgL_wzd2bzd2_1582));
												((((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt) BgL_arg1363z00_1583))))->
														BgL_fastzd2alphazd2) =
													((obj_t) BgL_arg1364z00_1584), BUNSPEC);
											}
										}
										{
											obj_t BgL_l1282z00_2838;

											BgL_l1282z00_2838 = CDR(BgL_l1282z00_1579);
											BgL_l1282z00_1579 = BgL_l1282z00_2838;
											goto BgL_zc3z04anonymousza31361ze3z87_1580;
										}
									}
								else
									{	/* Integrate/node.scm 46 */
										((bool_t) 1);
									}
							}
							{	/* Integrate/node.scm 49 */
								BgL_nodez00_bglt BgL_resz00_1587;

								BgL_resz00_1587 =
									BGl_cellzd2formalszd2zzintegrate_nodez00(BgL_celledz00_1576,
									BGl_gloz12z12zzintegrate_nodez00(BgL_astz00_3,
										BgL_integratorz00_4));
								{
									obj_t BgL_l1284z00_1589;

									BgL_l1284z00_1589 = BgL_whatzf2byza2z50_1577;
								BgL_zc3z04anonymousza31368ze3z87_1590:
									if (PAIRP(BgL_l1284z00_1589))
										{	/* Integrate/node.scm 51 */
											{	/* Integrate/node.scm 52 */
												obj_t BgL_wzd2bzd2_1592;

												BgL_wzd2bzd2_1592 = CAR(BgL_l1284z00_1589);
												{	/* Integrate/node.scm 52 */
													obj_t BgL_arg1381z00_1593;

													BgL_arg1381z00_1593 =
														CAR(((obj_t) BgL_wzd2bzd2_1592));
													((((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt)
																			BgL_arg1381z00_1593))))->
															BgL_fastzd2alphazd2) =
														((obj_t) BUNSPEC), BUNSPEC);
												}
											}
											{
												obj_t BgL_l1284z00_2850;

												BgL_l1284z00_2850 = CDR(BgL_l1284z00_1589);
												BgL_l1284z00_1589 = BgL_l1284z00_2850;
												goto BgL_zc3z04anonymousza31368ze3z87_1590;
											}
										}
									else
										{	/* Integrate/node.scm 51 */
											((bool_t) 1);
										}
								}
								return ((obj_t) BgL_resz00_1587);
							}
						}
					}
				}
			}
		}

	}



/* &integrate-globalize! */
	obj_t BGl_z62integratezd2globaliza7ez12z05zzintegrate_nodez00(obj_t
		BgL_envz00_2485, obj_t BgL_astz00_2486, obj_t BgL_integratorz00_2487,
		obj_t BgL_whatzf2byza2z50_2488)
	{
		{	/* Integrate/node.scm 36 */
			return
				BGl_integratezd2globaliza7ez12z67zzintegrate_nodez00(
				((BgL_nodez00_bglt) BgL_astz00_2486),
				((BgL_variablez00_bglt) BgL_integratorz00_2487),
				BgL_whatzf2byza2z50_2488);
		}

	}



/* celled-bindings */
	obj_t BGl_celledzd2bindingszd2zzintegrate_nodez00(obj_t BgL_formalsz00_6)
	{
		{	/* Integrate/node.scm 59 */
			{
				obj_t BgL_celledz00_1600;
				obj_t BgL_formalsz00_1601;

				BgL_celledz00_1600 = BNIL;
				BgL_formalsz00_1601 = BgL_formalsz00_6;
			BgL_zc3z04anonymousza31385ze3z87_1602:
				if (NULLP(BgL_formalsz00_1601))
					{	/* Integrate/node.scm 63 */
						return BgL_celledz00_1600;
					}
				else
					{	/* Integrate/node.scm 65 */
						bool_t BgL_test2060z00_2858;

						{	/* Integrate/node.scm 65 */
							obj_t BgL_arg1422z00_1612;

							BgL_arg1422z00_1612 = CAR(((obj_t) BgL_formalsz00_1601));
							BgL_test2060z00_2858 =
								BGl_integratezd2celledzf3z21zzintegrate_nodez00(
								((BgL_localz00_bglt) BgL_arg1422z00_1612));
						}
						if (BgL_test2060z00_2858)
							{	/* Integrate/node.scm 68 */
								obj_t BgL_ovarz00_1606;

								BgL_ovarz00_1606 = CAR(((obj_t) BgL_formalsz00_1601));
								{	/* Integrate/node.scm 68 */
									BgL_localz00_bglt BgL_nvarz00_1607;

									BgL_nvarz00_1607 =
										BGl_cellzd2variablezd2zzintegrate_nodez00(
										((BgL_localz00_bglt) BgL_ovarz00_1606));
									{	/* Integrate/node.scm 69 */

										{	/* Integrate/node.scm 70 */
											obj_t BgL_arg1396z00_1608;
											obj_t BgL_arg1417z00_1609;

											{	/* Integrate/node.scm 70 */
												obj_t BgL_arg1418z00_1610;

												BgL_arg1418z00_1610 =
													MAKE_YOUNG_PAIR(BgL_ovarz00_1606,
													((obj_t) BgL_nvarz00_1607));
												BgL_arg1396z00_1608 =
													MAKE_YOUNG_PAIR(BgL_arg1418z00_1610,
													BgL_celledz00_1600);
											}
											BgL_arg1417z00_1609 = CDR(((obj_t) BgL_formalsz00_1601));
											{
												obj_t BgL_formalsz00_2873;
												obj_t BgL_celledz00_2872;

												BgL_celledz00_2872 = BgL_arg1396z00_1608;
												BgL_formalsz00_2873 = BgL_arg1417z00_1609;
												BgL_formalsz00_1601 = BgL_formalsz00_2873;
												BgL_celledz00_1600 = BgL_celledz00_2872;
												goto BgL_zc3z04anonymousza31385ze3z87_1602;
											}
										}
									}
								}
							}
						else
							{	/* Integrate/node.scm 66 */
								obj_t BgL_arg1421z00_1611;

								BgL_arg1421z00_1611 = CDR(((obj_t) BgL_formalsz00_1601));
								{
									obj_t BgL_formalsz00_2876;

									BgL_formalsz00_2876 = BgL_arg1421z00_1611;
									BgL_formalsz00_1601 = BgL_formalsz00_2876;
									goto BgL_zc3z04anonymousza31385ze3z87_1602;
								}
							}
					}
			}
		}

	}



/* cell-variable */
	BgL_localz00_bglt BGl_cellzd2variablezd2zzintegrate_nodez00(BgL_localz00_bglt
		BgL_localz00_7)
	{
		{	/* Integrate/node.scm 75 */
			{	/* Integrate/node.scm 76 */
				BgL_localz00_bglt BgL_varz00_1614;

				{	/* Integrate/node.scm 76 */
					obj_t BgL_arg1442z00_1620;

					BgL_arg1442z00_1620 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_localz00_7)))->BgL_idz00);
					BgL_varz00_1614 =
						BGl_makezd2localzd2svarz00zzast_localz00(BgL_arg1442z00_1620,
						((BgL_typez00_bglt) BGl_za2cellza2z00zztype_cachez00));
				}
				{	/* Integrate/node.scm 77 */
					obj_t BgL_vz00_2224;

					BgL_vz00_2224 = CNST_TABLE_REF(((long) 0));
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_varz00_1614)))->BgL_accessz00) =
						((obj_t) BgL_vz00_2224), BUNSPEC);
				}
				{	/* Integrate/node.scm 78 */
					BgL_svarz00_bglt BgL_tmp1108z00_1615;

					BgL_tmp1108z00_1615 =
						((BgL_svarz00_bglt)
						(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_varz00_1614)))->BgL_valuez00));
					{	/* Integrate/node.scm 78 */
						BgL_svarzf2iinfozf2_bglt BgL_wide1110z00_1617;

						BgL_wide1110z00_1617 =
							((BgL_svarzf2iinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_svarzf2iinfozf2_bgl))));
						{	/* Integrate/node.scm 78 */
							obj_t BgL_auxz00_2891;
							BgL_objectz00_bglt BgL_tmpz00_2888;

							BgL_auxz00_2891 = ((obj_t) BgL_wide1110z00_1617);
							BgL_tmpz00_2888 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_tmp1108z00_1615));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2888, BgL_auxz00_2891);
						}
						((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_tmp1108z00_1615));
						{	/* Integrate/node.scm 78 */
							long BgL_arg1441z00_1618;

							{	/* Integrate/node.scm 78 */
								long BgL_res1922z00_2228;

								BgL_res1922z00_2228 =
									BGL_CLASS_INDEX(BGl_svarzf2Iinfozf2zzintegrate_infoz00);
								BgL_arg1441z00_1618 = BgL_res1922z00_2228;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_svarz00_bglt) BgL_tmp1108z00_1615)),
								BgL_arg1441z00_1618);
						}
						((BgL_svarz00_bglt) ((BgL_svarz00_bglt) BgL_tmp1108z00_1615));
					}
					{
						BgL_svarzf2iinfozf2_bglt BgL_auxz00_2902;

						{
							obj_t BgL_auxz00_2903;

							{	/* Integrate/node.scm 79 */
								BgL_objectz00_bglt BgL_tmpz00_2904;

								BgL_tmpz00_2904 =
									((BgL_objectz00_bglt)
									((BgL_svarz00_bglt) BgL_tmp1108z00_1615));
								BgL_auxz00_2903 = BGL_OBJECT_WIDENING(BgL_tmpz00_2904);
							}
							BgL_auxz00_2902 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_2903);
						}
						((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2902))->
								BgL_fzd2markzd2) = ((obj_t) BUNSPEC), BUNSPEC);
					}
					{
						BgL_svarzf2iinfozf2_bglt BgL_auxz00_2910;

						{
							obj_t BgL_auxz00_2911;

							{	/* Integrate/node.scm 79 */
								BgL_objectz00_bglt BgL_tmpz00_2912;

								BgL_tmpz00_2912 =
									((BgL_objectz00_bglt)
									((BgL_svarz00_bglt) BgL_tmp1108z00_1615));
								BgL_auxz00_2911 = BGL_OBJECT_WIDENING(BgL_tmpz00_2912);
							}
							BgL_auxz00_2910 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_2911);
						}
						((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2910))->
								BgL_uzd2markzd2) = ((obj_t) BUNSPEC), BUNSPEC);
					}
					{
						BgL_svarzf2iinfozf2_bglt BgL_auxz00_2918;

						{
							obj_t BgL_auxz00_2919;

							{	/* Integrate/node.scm 80 */
								BgL_objectz00_bglt BgL_tmpz00_2920;

								BgL_tmpz00_2920 =
									((BgL_objectz00_bglt)
									((BgL_svarz00_bglt) BgL_tmp1108z00_1615));
								BgL_auxz00_2919 = BGL_OBJECT_WIDENING(BgL_tmpz00_2920);
							}
							BgL_auxz00_2918 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_2919);
						}
						((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2918))->
								BgL_kapturedzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
					}
					{
						BgL_svarzf2iinfozf2_bglt BgL_auxz00_2926;

						{
							obj_t BgL_auxz00_2927;

							{	/* Integrate/node.scm 79 */
								BgL_objectz00_bglt BgL_tmpz00_2928;

								BgL_tmpz00_2928 =
									((BgL_objectz00_bglt)
									((BgL_svarz00_bglt) BgL_tmp1108z00_1615));
								BgL_auxz00_2927 = BGL_OBJECT_WIDENING(BgL_tmpz00_2928);
							}
							BgL_auxz00_2926 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_2927);
						}
						((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2926))->
								BgL_celledzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
					}
					{
						BgL_svarzf2iinfozf2_bglt BgL_auxz00_2934;

						{
							obj_t BgL_auxz00_2935;

							{	/* Integrate/node.scm 79 */
								BgL_objectz00_bglt BgL_tmpz00_2936;

								BgL_tmpz00_2936 =
									((BgL_objectz00_bglt)
									((BgL_svarz00_bglt) BgL_tmp1108z00_1615));
								BgL_auxz00_2935 = BGL_OBJECT_WIDENING(BgL_tmpz00_2936);
							}
							BgL_auxz00_2934 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_2935);
						}
						((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2934))->
								BgL_xhdlz00) = ((obj_t) BFALSE), BUNSPEC);
					}
					((BgL_svarz00_bglt) BgL_tmp1108z00_1615);
				}
				return BgL_varz00_1614;
			}
		}

	}



/* cell-formals */
	BgL_nodez00_bglt BGl_cellzd2formalszd2zzintegrate_nodez00(obj_t
		BgL_celledz00_8, BgL_nodez00_bglt BgL_bodyz00_9)
	{
		{	/* Integrate/node.scm 86 */
			if (NULLP(BgL_celledz00_8))
				{	/* Integrate/node.scm 87 */
					return BgL_bodyz00_9;
				}
			else
				{	/* Integrate/node.scm 89 */
					obj_t BgL_locz00_1622;

					BgL_locz00_1622 =
						(((BgL_nodez00_bglt) COBJECT(BgL_bodyz00_9))->BgL_locz00);
					{	/* Integrate/node.scm 90 */
						BgL_letzd2varzd2_bglt BgL_new1113z00_1623;

						{	/* Integrate/node.scm 91 */
							BgL_letzd2varzd2_bglt BgL_new1112z00_1645;

							BgL_new1112z00_1645 =
								((BgL_letzd2varzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_letzd2varzd2_bgl))));
							{	/* Integrate/node.scm 91 */
								long BgL_arg1477z00_1646;

								{	/* Integrate/node.scm 91 */
									long BgL_res1924z00_2239;

									BgL_res1924z00_2239 =
										BGL_CLASS_INDEX(BGl_letzd2varzd2zzast_nodez00);
									BgL_arg1477z00_1646 = BgL_res1924z00_2239;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1112z00_1645),
									BgL_arg1477z00_1646);
							}
							{	/* Integrate/node.scm 91 */
								BgL_objectz00_bglt BgL_tmpz00_2950;

								BgL_tmpz00_2950 = ((BgL_objectz00_bglt) BgL_new1112z00_1645);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2950, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1112z00_1645);
							BgL_new1113z00_1623 = BgL_new1112z00_1645;
						}
						((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt) BgL_new1113z00_1623)))->BgL_locz00) =
							((obj_t) BgL_locz00_1622), BUNSPEC);
						((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
											BgL_new1113z00_1623)))->BgL_typez00) =
							((BgL_typez00_bglt) (((BgL_nodez00_bglt) COBJECT(BgL_bodyz00_9))->
									BgL_typez00)), BUNSPEC);
						((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
											BgL_new1113z00_1623)))->BgL_sidezd2effectzd2) =
							((obj_t) BUNSPEC), BUNSPEC);
						((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
											BgL_new1113z00_1623)))->BgL_keyz00) =
							((obj_t) BINT(((long) -1))), BUNSPEC);
						{
							obj_t BgL_auxz00_2964;

							{	/* Integrate/node.scm 94 */
								obj_t BgL_l1286z00_1624;

								BgL_l1286z00_1624 = BgL_celledz00_8;
								if (NULLP(BgL_l1286z00_1624))
									{	/* Integrate/node.scm 94 */
										BgL_auxz00_2964 = BNIL;
									}
								else
									{	/* Integrate/node.scm 94 */
										obj_t BgL_head1288z00_1626;

										{	/* Integrate/node.scm 94 */
											obj_t BgL_res1926z00_2245;

											BgL_res1926z00_2245 = MAKE_YOUNG_PAIR(BNIL, BNIL);
											BgL_head1288z00_1626 = BgL_res1926z00_2245;
										}
										{
											obj_t BgL_l1286z00_1628;
											obj_t BgL_tail1289z00_1629;

											BgL_l1286z00_1628 = BgL_l1286z00_1624;
											BgL_tail1289z00_1629 = BgL_head1288z00_1626;
										BgL_zc3z04anonymousza31445ze3z87_1630:
											if (NULLP(BgL_l1286z00_1628))
												{	/* Integrate/node.scm 94 */
													BgL_auxz00_2964 = CDR(BgL_head1288z00_1626);
												}
											else
												{	/* Integrate/node.scm 94 */
													obj_t BgL_newtail1290z00_1632;

													{	/* Integrate/node.scm 94 */
														obj_t BgL_arg1449z00_1634;

														{	/* Integrate/node.scm 94 */
															obj_t BgL_ozd2nzd2_1635;

															BgL_ozd2nzd2_1635 =
																CAR(((obj_t) BgL_l1286z00_1628));
															{	/* Integrate/node.scm 95 */
																obj_t BgL_arg1461z00_1636;
																BgL_makezd2boxzd2_bglt BgL_arg1462z00_1637;

																BgL_arg1461z00_1636 =
																	CDR(((obj_t) BgL_ozd2nzd2_1635));
																{	/* Integrate/node.scm 96 */
																	BgL_varz00_bglt BgL_arg1464z00_1638;
																	obj_t BgL_arg1465z00_1639;

																	{	/* Integrate/node.scm 96 */
																		BgL_varz00_bglt BgL_new1116z00_1640;

																		{	/* Integrate/node.scm 99 */
																			BgL_varz00_bglt BgL_new1114z00_1642;

																			BgL_new1114z00_1642 =
																				((BgL_varz00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_varz00_bgl))));
																			{	/* Integrate/node.scm 99 */
																				long BgL_arg1476z00_1643;

																				{	/* Integrate/node.scm 99 */
																					long BgL_res1928z00_2251;

																					{	/* Integrate/node.scm 99 */
																						obj_t BgL_classz00_2250;

																						BgL_classz00_2250 =
																							BGl_varz00zzast_nodez00;
																						BgL_res1928z00_2251 =
																							BGL_CLASS_INDEX
																							(BgL_classz00_2250);
																					}
																					BgL_arg1476z00_1643 =
																						BgL_res1928z00_2251;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1114z00_1642),
																					BgL_arg1476z00_1643);
																			}
																			BgL_new1116z00_1640 = BgL_new1114z00_1642;
																		}
																		((((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							BgL_new1116z00_1640)))->
																				BgL_locz00) =
																			((obj_t) BgL_locz00_1622), BUNSPEC);
																		((((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt)
																							BgL_new1116z00_1640)))->
																				BgL_typez00) =
																			((BgL_typez00_bglt) ((
																						(BgL_variablez00_bglt)
																						COBJECT(((BgL_variablez00_bglt)
																								CAR(((obj_t)
																										BgL_ozd2nzd2_1635)))))->
																					BgL_typez00)), BUNSPEC);
																		((((BgL_varz00_bglt)
																					COBJECT(BgL_new1116z00_1640))->
																				BgL_variablez00) =
																			((BgL_variablez00_bglt) (
																					(BgL_variablez00_bglt) CAR(((obj_t)
																							BgL_ozd2nzd2_1635)))), BUNSPEC);
																		BgL_arg1464z00_1638 = BgL_new1116z00_1640;
																	}
																	BgL_arg1465z00_1639 =
																		CAR(((obj_t) BgL_ozd2nzd2_1635));
																	BgL_arg1462z00_1637 =
																		BGl_azd2makezd2cellz00zzintegrate_nodez00(
																		((BgL_nodez00_bglt) BgL_arg1464z00_1638),
																		((BgL_variablez00_bglt)
																			BgL_arg1465z00_1639));
																}
																BgL_arg1449z00_1634 =
																	MAKE_YOUNG_PAIR(BgL_arg1461z00_1636,
																	((obj_t) BgL_arg1462z00_1637));
														}}
														{	/* Integrate/node.scm 94 */
															obj_t BgL_res1929z00_2258;

															BgL_res1929z00_2258 =
																MAKE_YOUNG_PAIR(BgL_arg1449z00_1634, BNIL);
															BgL_newtail1290z00_1632 = BgL_res1929z00_2258;
													}}
													SET_CDR(BgL_tail1289z00_1629,
														BgL_newtail1290z00_1632);
													{	/* Integrate/node.scm 94 */
														obj_t BgL_arg1448z00_1633;

														BgL_arg1448z00_1633 =
															CDR(((obj_t) BgL_l1286z00_1628));
														{
															obj_t BgL_tail1289z00_3003;
															obj_t BgL_l1286z00_3002;

															BgL_l1286z00_3002 = BgL_arg1448z00_1633;
															BgL_tail1289z00_3003 = BgL_newtail1290z00_1632;
															BgL_tail1289z00_1629 = BgL_tail1289z00_3003;
															BgL_l1286z00_1628 = BgL_l1286z00_3002;
															goto BgL_zc3z04anonymousza31445ze3z87_1630;
														}
													}
												}
										}
									}
							}
							((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1113z00_1623))->
									BgL_bindingsz00) = ((obj_t) BgL_auxz00_2964), BUNSPEC);
						}
						((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1113z00_1623))->
								BgL_bodyz00) = ((BgL_nodez00_bglt) BgL_bodyz00_9), BUNSPEC);
						((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1113z00_1623))->
								BgL_removablezf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
						return ((BgL_nodez00_bglt) BgL_new1113z00_1623);
					}
				}
		}

	}



/* a-make-cell */
	BgL_makezd2boxzd2_bglt
		BGl_azd2makezd2cellz00zzintegrate_nodez00(BgL_nodez00_bglt BgL_nodez00_10,
		BgL_variablez00_bglt BgL_variablez00_11)
	{
		{	/* Integrate/node.scm 106 */
			{	/* Integrate/node.scm 110 */
				obj_t BgL_vz00_2262;

				BgL_vz00_2262 = CNST_TABLE_REF(((long) 0));
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_variablez00_11))))->BgL_accessz00) =
					((obj_t) BgL_vz00_2262), BUNSPEC);
			}
			{	/* Integrate/node.scm 111 */
				BgL_valuez00_bglt BgL_arg1489z00_1648;

				BgL_arg1489z00_1648 =
					(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_11))->BgL_valuez00);
				{
					BgL_svarzf2iinfozf2_bglt BgL_auxz00_3013;

					{
						obj_t BgL_auxz00_3014;

						{	/* Integrate/node.scm 111 */
							BgL_objectz00_bglt BgL_tmpz00_3015;

							BgL_tmpz00_3015 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_arg1489z00_1648));
							BgL_auxz00_3014 = BGL_OBJECT_WIDENING(BgL_tmpz00_3015);
						}
						BgL_auxz00_3013 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3014);
					}
					((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3013))->
							BgL_celledzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
			}}
			{	/* Integrate/node.scm 112 */
				BgL_makezd2boxzd2_bglt BgL_new1119z00_1649;

				{	/* Integrate/node.scm 115 */
					BgL_makezd2boxzd2_bglt BgL_new1118z00_1651;

					BgL_new1118z00_1651 =
						((BgL_makezd2boxzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_makezd2boxzd2_bgl))));
					{	/* Integrate/node.scm 115 */
						long BgL_arg1495z00_1652;

						{	/* Integrate/node.scm 115 */
							long BgL_res1930z00_2268;

							BgL_res1930z00_2268 =
								BGL_CLASS_INDEX(BGl_makezd2boxzd2zzast_nodez00);
							BgL_arg1495z00_1652 = BgL_res1930z00_2268;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1118z00_1651), BgL_arg1495z00_1652);
					}
					{	/* Integrate/node.scm 115 */
						BgL_objectz00_bglt BgL_tmpz00_3025;

						BgL_tmpz00_3025 = ((BgL_objectz00_bglt) BgL_new1118z00_1651);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3025, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1118z00_1651);
					BgL_new1119z00_1649 = BgL_new1118z00_1651;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1119z00_1649)))->BgL_locz00) =
					((obj_t) (((BgL_nodez00_bglt) COBJECT(BgL_nodez00_10))->BgL_locz00)),
					BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1119z00_1649)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt)
							BGl_za2cellza2z00zztype_cachez00)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1119z00_1649)))->BgL_sidezd2effectzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1119z00_1649)))->BgL_keyz00) =
					((obj_t) BINT(((long) -1))), BUNSPEC);
				((((BgL_makezd2boxzd2_bglt) COBJECT(BgL_new1119z00_1649))->
						BgL_valuez00) = ((BgL_nodez00_bglt) BgL_nodez00_10), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_3041;

					{	/* Integrate/node.scm 114 */
						BgL_typez00_bglt BgL_arg1493z00_1650;

						BgL_arg1493z00_1650 =
							(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_11))->
							BgL_typez00);
						BgL_auxz00_3041 =
							BGl_getzd2bigloozd2typez00zztype_cachez00(BgL_arg1493z00_1650);
					}
					((((BgL_makezd2boxzd2_bglt) COBJECT(BgL_new1119z00_1649))->
							BgL_vtypez00) = ((BgL_typez00_bglt) BgL_auxz00_3041), BUNSPEC);
				}
				((((BgL_makezd2boxzd2_bglt) COBJECT(BgL_new1119z00_1649))->
						BgL_stackablez00) = ((obj_t) BTRUE), BUNSPEC);
				return BgL_new1119z00_1649;
			}
		}

	}



/* integrate-celled? */
	BGL_EXPORTED_DEF bool_t
		BGl_integratezd2celledzf3z21zzintegrate_nodez00(BgL_localz00_bglt
		BgL_variablez00_12)
	{
		{	/* Integrate/node.scm 122 */
			{	/* Integrate/node.scm 133 */
				bool_t BgL_test2064z00_3046;

				{	/* Integrate/node.scm 133 */
					BgL_valuez00_bglt BgL_arg1528z00_1659;

					BgL_arg1528z00_1659 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_variablez00_12)))->BgL_valuez00);
					{	/* Integrate/node.scm 133 */
						bool_t BgL_res1931z00_2274;

						BgL_res1931z00_2274 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_arg1528z00_1659),
							BGl_svarzf2Iinfozf2zzintegrate_infoz00);
						BgL_test2064z00_3046 = BgL_res1931z00_2274;
					}
				}
				if (BgL_test2064z00_3046)
					{	/* Integrate/node.scm 134 */
						bool_t BgL__ortest_1121z00_1654;

						{	/* Integrate/node.scm 134 */
							BgL_svarz00_bglt BgL_oz00_2276;

							BgL_oz00_2276 =
								((BgL_svarz00_bglt)
								(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_variablez00_12)))->
									BgL_valuez00));
							{
								BgL_svarzf2iinfozf2_bglt BgL_auxz00_3054;

								{
									obj_t BgL_auxz00_3055;

									{	/* Integrate/node.scm 134 */
										BgL_objectz00_bglt BgL_tmpz00_3056;

										BgL_tmpz00_3056 = ((BgL_objectz00_bglt) BgL_oz00_2276);
										BgL_auxz00_3055 = BGL_OBJECT_WIDENING(BgL_tmpz00_3056);
									}
									BgL_auxz00_3054 =
										((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3055);
								}
								BgL__ortest_1121z00_1654 =
									(((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3054))->
									BgL_celledzf3zf3);
							}
						}
						if (BgL__ortest_1121z00_1654)
							{	/* Integrate/node.scm 134 */
								return BgL__ortest_1121z00_1654;
							}
						else
							{	/* Integrate/node.scm 134 */
								if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
											(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_variablez00_12)))->
												BgL_accessz00), CNST_TABLE_REF(((long) 1)))))
									{	/* Integrate/node.scm 136 */
										BgL_svarz00_bglt BgL_oz00_2280;

										BgL_oz00_2280 =
											((BgL_svarz00_bglt)
											(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_variablez00_12)))->
												BgL_valuez00));
										{
											BgL_svarzf2iinfozf2_bglt BgL_auxz00_3071;

											{
												obj_t BgL_auxz00_3072;

												{	/* Integrate/node.scm 136 */
													BgL_objectz00_bglt BgL_tmpz00_3073;

													BgL_tmpz00_3073 =
														((BgL_objectz00_bglt) BgL_oz00_2280);
													BgL_auxz00_3072 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_3073);
												}
												BgL_auxz00_3071 =
													((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3072);
											}
											return
												(((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3071))->
												BgL_kapturedzf3zf3);
										}
									}
								else
									{	/* Integrate/node.scm 135 */
										return ((bool_t) 0);
									}
							}
					}
				else
					{	/* Integrate/node.scm 133 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* &integrate-celled? */
	obj_t BGl_z62integratezd2celledzf3z43zzintegrate_nodez00(obj_t
		BgL_envz00_2489, obj_t BgL_variablez00_2490)
	{
		{	/* Integrate/node.scm 122 */
			return
				BBOOL(BGl_integratezd2celledzf3z21zzintegrate_nodez00(
					((BgL_localz00_bglt) BgL_variablez00_2490)));
		}

	}



/* glo*! */
	obj_t BGl_gloza2z12zb0zzintegrate_nodez00(obj_t BgL_nodeza2za2_59,
		obj_t BgL_integratorz00_60)
	{
		{	/* Integrate/node.scm 438 */
			{
				obj_t BgL_nodeza2za2_1661;

				BgL_nodeza2za2_1661 = BgL_nodeza2za2_59;
			BgL_zc3z04anonymousza31529ze3z87_1662:
				if (NULLP(BgL_nodeza2za2_1661))
					{	/* Integrate/node.scm 440 */
						return CNST_TABLE_REF(((long) 2));
					}
				else
					{	/* Integrate/node.scm 440 */
						{	/* Integrate/node.scm 443 */
							BgL_nodez00_bglt BgL_arg1536z00_1664;

							{	/* Integrate/node.scm 443 */
								obj_t BgL_arg1537z00_1665;

								BgL_arg1537z00_1665 = CAR(((obj_t) BgL_nodeza2za2_1661));
								BgL_arg1536z00_1664 =
									BGl_gloz12z12zzintegrate_nodez00(
									((BgL_nodez00_bglt) BgL_arg1537z00_1665),
									((BgL_variablez00_bglt) BgL_integratorz00_60));
							}
							{	/* Integrate/node.scm 443 */
								obj_t BgL_auxz00_3091;
								obj_t BgL_tmpz00_3089;

								BgL_auxz00_3091 = ((obj_t) BgL_arg1536z00_1664);
								BgL_tmpz00_3089 = ((obj_t) BgL_nodeza2za2_1661);
								SET_CAR(BgL_tmpz00_3089, BgL_auxz00_3091);
							}
						}
						{	/* Integrate/node.scm 444 */
							obj_t BgL_arg1540z00_1666;

							BgL_arg1540z00_1666 = CDR(((obj_t) BgL_nodeza2za2_1661));
							{
								obj_t BgL_nodeza2za2_3096;

								BgL_nodeza2za2_3096 = BgL_arg1540z00_1666;
								BgL_nodeza2za2_1661 = BgL_nodeza2za2_3096;
								goto BgL_zc3z04anonymousza31529ze3z87_1662;
							}
						}
					}
			}
		}

	}



/* globalize-local-fun! */
	obj_t BGl_globaliza7ezd2localzd2funz12zb5zzintegrate_nodez00(BgL_localz00_bglt
		BgL_localz00_61, BgL_variablez00_bglt BgL_integratorz00_62)
	{
		{	/* Integrate/node.scm 449 */
			{	/* Integrate/node.scm 452 */
				BgL_valuez00_bglt BgL_funz00_1668;

				BgL_funz00_1668 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_localz00_61)))->BgL_valuez00);
				{	/* Integrate/node.scm 452 */
					obj_t BgL_obodyz00_1669;

					BgL_obodyz00_1669 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt) BgL_funz00_1668)))->BgL_bodyz00);
					{	/* Integrate/node.scm 453 */

						if ((((obj_t) BgL_localz00_61) == ((obj_t) BgL_integratorz00_62)))
							{	/* Integrate/node.scm 456 */
								BgL_nodez00_bglt BgL_arg1552z00_1671;

								BgL_arg1552z00_1671 =
									BGl_gloz12z12zzintegrate_nodez00(
									((BgL_nodez00_bglt) BgL_obodyz00_1669), BgL_integratorz00_62);
								return
									((((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_funz00_1668)))->BgL_bodyz00) =
									((obj_t) ((obj_t) BgL_arg1552z00_1671)), BUNSPEC);
							}
						else
							{	/* Integrate/node.scm 457 */
								bool_t BgL_test2069z00_3110;

								{	/* Integrate/node.scm 457 */
									bool_t BgL_test2070z00_3111;

									{	/* Integrate/node.scm 457 */
										bool_t BgL_res1933z00_2289;

										BgL_res1933z00_2289 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_funz00_1668),
											BGl_sfunzf2Iinfozf2zzintegrate_infoz00);
										BgL_test2070z00_3111 = BgL_res1933z00_2289;
									}
									if (BgL_test2070z00_3111)
										{
											BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3114;

											{
												obj_t BgL_auxz00_3115;

												{	/* Integrate/node.scm 457 */
													BgL_objectz00_bglt BgL_tmpz00_3116;

													BgL_tmpz00_3116 =
														((BgL_objectz00_bglt)
														((BgL_sfunz00_bglt) BgL_funz00_1668));
													BgL_auxz00_3115 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_3116);
												}
												BgL_auxz00_3114 =
													((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3115);
											}
											BgL_test2069z00_3110 =
												(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3114))->
												BgL_gzf3zf3);
										}
									else
										{	/* Integrate/node.scm 457 */
											BgL_test2069z00_3110 = ((bool_t) 0);
										}
								}
								if (BgL_test2069z00_3110)
									{	/* Integrate/node.scm 457 */
										return BUNSPEC;
									}
								else
									{	/* Integrate/node.scm 460 */
										obj_t BgL_celledz00_1674;

										{	/* Integrate/node.scm 460 */
											obj_t BgL_arg1578z00_1694;

											BgL_arg1578z00_1694 =
												(((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_funz00_1668)))->
												BgL_argsz00);
											BgL_celledz00_1674 =
												BGl_celledzd2bindingszd2zzintegrate_nodez00
												(BgL_arg1578z00_1694);
										}
										{
											obj_t BgL_l1303z00_1676;

											BgL_l1303z00_1676 = BgL_celledz00_1674;
										BgL_zc3z04anonymousza31555ze3z87_1677:
											if (PAIRP(BgL_l1303z00_1676))
												{	/* Integrate/node.scm 461 */
													{	/* Integrate/node.scm 462 */
														obj_t BgL_wzd2bzd2_1679;

														BgL_wzd2bzd2_1679 = CAR(BgL_l1303z00_1676);
														{	/* Integrate/node.scm 462 */
															obj_t BgL_arg1558z00_1680;
															obj_t BgL_arg1561z00_1681;

															BgL_arg1558z00_1680 =
																CAR(((obj_t) BgL_wzd2bzd2_1679));
															BgL_arg1561z00_1681 =
																CDR(((obj_t) BgL_wzd2bzd2_1679));
															((((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				BgL_arg1558z00_1680)))->
																	BgL_fastzd2alphazd2) =
																((obj_t) BgL_arg1561z00_1681), BUNSPEC);
														}
													}
													{
														obj_t BgL_l1303z00_3134;

														BgL_l1303z00_3134 = CDR(BgL_l1303z00_1676);
														BgL_l1303z00_1676 = BgL_l1303z00_3134;
														goto BgL_zc3z04anonymousza31555ze3z87_1677;
													}
												}
											else
												{	/* Integrate/node.scm 461 */
													((bool_t) 1);
												}
										}
										{	/* Integrate/node.scm 464 */
											BgL_nodez00_bglt BgL_nbody1z00_1684;

											BgL_nbody1z00_1684 =
												BGl_gloz12z12zzintegrate_nodez00(
												((BgL_nodez00_bglt) BgL_obodyz00_1669),
												BgL_integratorz00_62);
											{	/* Integrate/node.scm 464 */
												BgL_nodez00_bglt BgL_nbody2z00_1685;

												BgL_nbody2z00_1685 =
													BGl_cellzd2formalszd2zzintegrate_nodez00
													(BgL_celledz00_1674, BgL_nbody1z00_1684);
												{	/* Integrate/node.scm 465 */

													{
														obj_t BgL_l1305z00_1687;

														BgL_l1305z00_1687 = BgL_celledz00_1674;
													BgL_zc3z04anonymousza31565ze3z87_1688:
														if (PAIRP(BgL_l1305z00_1687))
															{	/* Integrate/node.scm 466 */
																{	/* Integrate/node.scm 467 */
																	obj_t BgL_wzd2bzd2_1690;

																	BgL_wzd2bzd2_1690 = CAR(BgL_l1305z00_1687);
																	{	/* Integrate/node.scm 467 */
																		obj_t BgL_arg1573z00_1691;

																		BgL_arg1573z00_1691 =
																			CAR(((obj_t) BgL_wzd2bzd2_1690));
																		((((BgL_variablez00_bglt) COBJECT(
																						((BgL_variablez00_bglt)
																							BgL_arg1573z00_1691)))->
																				BgL_fastzd2alphazd2) =
																			((obj_t) BUNSPEC), BUNSPEC);
																	}
																}
																{
																	obj_t BgL_l1305z00_3146;

																	BgL_l1305z00_3146 = CDR(BgL_l1305z00_1687);
																	BgL_l1305z00_1687 = BgL_l1305z00_3146;
																	goto BgL_zc3z04anonymousza31565ze3z87_1688;
																}
															}
														else
															{	/* Integrate/node.scm 466 */
																((bool_t) 1);
															}
													}
													return
														((((BgL_sfunz00_bglt) COBJECT(
																	((BgL_sfunz00_bglt) BgL_funz00_1668)))->
															BgL_bodyz00) =
														((obj_t) ((obj_t) BgL_nbody2z00_1685)), BUNSPEC);
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



/* object-init */
	obj_t BGl_objectzd2initzd2zzintegrate_nodez00()
	{
		{	/* Integrate/node.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_nodez00()
	{
		{	/* Integrate/node.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00,
				BGl_proc1974z00zzintegrate_nodez00, BGl_nodez00zzast_nodez00,
				BGl_string1975z00zzintegrate_nodez00);
		}

	}



/* &glo!1307 */
	obj_t BGl_z62gloz121307z70zzintegrate_nodez00(obj_t BgL_envz00_2492,
		obj_t BgL_nodez00_2493, obj_t BgL_integratorz00_2494)
	{
		{	/* Integrate/node.scm 141 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 3)),
				BGl_string1976z00zzintegrate_nodez00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2493)));
		}

	}



/* glo! */
	BgL_nodez00_bglt BGl_gloz12z12zzintegrate_nodez00(BgL_nodez00_bglt
		BgL_nodez00_13, BgL_variablez00_bglt BgL_integratorz00_14)
	{
		{	/* Integrate/node.scm 141 */
			{	/* Integrate/node.scm 141 */
				obj_t BgL_method1308z00_1701;

				{	/* Integrate/node.scm 141 */
					obj_t BgL_res1946z00_2341;

					{	/* Integrate/node.scm 141 */
						long BgL_objzd2classzd2numz00_2306;

						{	/* Integrate/node.scm 141 */
							long BgL_res1936z00_2309;

							BgL_res1936z00_2309 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_13));
							BgL_objzd2classzd2numz00_2306 = BgL_res1936z00_2309;
						}
						{	/* Integrate/node.scm 141 */
							obj_t BgL_arg1813z00_2307;

							BgL_arg1813z00_2307 =
								PROCEDURE_REF(BGl_gloz12zd2envzc0zzintegrate_nodez00,
								(int) (((long) 1)));
							{	/* Integrate/node.scm 141 */
								int BgL_offsetz00_2311;

								BgL_offsetz00_2311 = (int) (BgL_objzd2classzd2numz00_2306);
								{	/* Integrate/node.scm 141 */
									long BgL_offsetz00_2312;

									BgL_offsetz00_2312 =
										((long) (BgL_offsetz00_2311) - OBJECT_TYPE);
									{	/* Integrate/node.scm 141 */
										long BgL_modz00_2313;

										BgL_modz00_2313 =
											(BgL_offsetz00_2312 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Integrate/node.scm 141 */
											long BgL_restz00_2315;

											BgL_restz00_2315 =
												(BgL_offsetz00_2312 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Integrate/node.scm 141 */

												{	/* Integrate/node.scm 141 */
													obj_t BgL_bucketz00_2317;

													BgL_bucketz00_2317 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2307), BgL_modz00_2313);
													BgL_res1946z00_2341 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2317), BgL_restz00_2315);
					}}}}}}}}
					BgL_method1308z00_1701 = BgL_res1946z00_2341;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1308z00_1701) (BgL_method1308z00_1701,
						((obj_t) BgL_nodez00_13), ((obj_t) BgL_integratorz00_14), BEOA));
			}
		}

	}



/* &glo! */
	BgL_nodez00_bglt BGl_z62gloz12z70zzintegrate_nodez00(obj_t BgL_envz00_2495,
		obj_t BgL_nodez00_2496, obj_t BgL_integratorz00_2497)
	{
		{	/* Integrate/node.scm 141 */
			return
				BGl_gloz12z12zzintegrate_nodez00(
				((BgL_nodez00_bglt) BgL_nodez00_2496),
				((BgL_variablez00_bglt) BgL_integratorz00_2497));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_nodez00()
	{
		{	/* Integrate/node.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_atomz00zzast_nodez00,
				BGl_proc1977z00zzintegrate_nodez00,
				BGl_string1978z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_kwotez00zzast_nodez00,
				BGl_proc1979z00zzintegrate_nodez00,
				BGl_string1978z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_varz00zzast_nodez00,
				BGl_proc1980z00zzintegrate_nodez00,
				BGl_string1978z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_closurez00zzast_nodez00,
				BGl_proc1981z00zzintegrate_nodez00,
				BGl_string1978z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_sequencez00zzast_nodez00,
				BGl_proc1982z00zzintegrate_nodez00,
				BGl_string1978z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_syncz00zzast_nodez00,
				BGl_proc1983z00zzintegrate_nodez00,
				BGl_string1978z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_appz00zzast_nodez00,
				BGl_proc1984z00zzintegrate_nodez00,
				BGl_string1978z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc1985z00zzintegrate_nodez00,
				BGl_string1978z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_funcallz00zzast_nodez00,
				BGl_proc1986z00zzintegrate_nodez00,
				BGl_string1978z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_externz00zzast_nodez00,
				BGl_proc1987z00zzintegrate_nodez00,
				BGl_string1978z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_castz00zzast_nodez00,
				BGl_proc1988z00zzintegrate_nodez00,
				BGl_string1978z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_setqz00zzast_nodez00,
				BGl_proc1989z00zzintegrate_nodez00,
				BGl_string1978z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1990z00zzintegrate_nodez00,
				BGl_string1978z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_failz00zzast_nodez00,
				BGl_proc1991z00zzintegrate_nodez00,
				BGl_string1978z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_switchz00zzast_nodez00,
				BGl_proc1992z00zzintegrate_nodez00,
				BGl_string1978z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc1993z00zzintegrate_nodez00,
				BGl_string1978z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc1994z00zzintegrate_nodez00,
				BGl_string1978z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc1995z00zzintegrate_nodez00,
				BGl_string1978z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc1996z00zzintegrate_nodez00,
				BGl_string1978z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc1997z00zzintegrate_nodez00,
				BGl_string1978z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc1998z00zzintegrate_nodez00,
				BGl_string1978z00zzintegrate_nodez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1999z00zzintegrate_nodez00,
				BGl_string1978z00zzintegrate_nodez00);
		}

	}



/* &glo!-box-set!1353 */
	BgL_nodez00_bglt BGl_z62gloz12zd2boxzd2setz121353z62zzintegrate_nodez00(obj_t
		BgL_envz00_2520, obj_t BgL_nodez00_2521, obj_t BgL_integratorz00_2522)
	{
		{	/* Integrate/node.scm 428 */
			{
				BgL_varz00_bglt BgL_auxz00_3214;

				{	/* Tools/trace.sch 53 */
					BgL_varz00_bglt BgL_arg1845z00_2602;

					BgL_arg1845z00_2602 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2521)))->BgL_varz00);
					BgL_auxz00_3214 =
						((BgL_varz00_bglt)
						BGl_gloz12z12zzintegrate_nodez00(
							((BgL_nodez00_bglt) BgL_arg1845z00_2602),
							((BgL_variablez00_bglt) BgL_integratorz00_2522)));
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2521)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_3214), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3223;

				{	/* Tools/trace.sch 53 */
					BgL_nodez00_bglt BgL_arg1846z00_2603;

					BgL_arg1846z00_2603 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2521)))->BgL_valuez00);
					BgL_auxz00_3223 =
						BGl_gloz12z12zzintegrate_nodez00(BgL_arg1846z00_2603,
						((BgL_variablez00_bglt) BgL_integratorz00_2522));
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2521)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3223), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2521));
		}

	}



/* &glo!-box-ref1351 */
	BgL_nodez00_bglt BGl_z62gloz12zd2boxzd2ref1351z70zzintegrate_nodez00(obj_t
		BgL_envz00_2523, obj_t BgL_nodez00_2524, obj_t BgL_integratorz00_2525)
	{
		{	/* Integrate/node.scm 414 */
			{	/* Tools/trace.sch 53 */
				bool_t BgL_test2073z00_3232;

				{	/* Tools/trace.sch 53 */
					BgL_variablez00_bglt BgL_arg1840z00_2605;

					BgL_arg1840z00_2605 =
						(((BgL_varz00_bglt) COBJECT(
								(((BgL_boxzd2refzd2_bglt) COBJECT(
											((BgL_boxzd2refzd2_bglt) BgL_nodez00_2524)))->
									BgL_varz00)))->BgL_variablez00);
					BgL_test2073z00_3232 =
						BGl_integratezd2celledzf3z21zzintegrate_nodez00(((BgL_localz00_bglt)
							BgL_arg1840z00_2605));
				}
				if (BgL_test2073z00_3232)
					{	/* Tools/trace.sch 53 */
						BgL_variablez00_bglt BgL_vz00_2606;

						BgL_vz00_2606 =
							(((BgL_varz00_bglt) COBJECT(
									(((BgL_boxzd2refzd2_bglt) COBJECT(
												((BgL_boxzd2refzd2_bglt) BgL_nodez00_2524)))->
										BgL_varz00)))->BgL_variablez00);
						{	/* Tools/trace.sch 53 */
							obj_t BgL_arg1811z00_2607;
							obj_t BgL_arg1820z00_2608;

							{	/* Tools/trace.sch 53 */
								obj_t BgL_res1972z00_2609;

								{	/* Tools/trace.sch 53 */
									obj_t BgL_tmpz00_3241;

									BgL_tmpz00_3241 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res1972z00_2609 =
										BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_3241);
								}
								BgL_arg1811z00_2607 = BgL_res1972z00_2609;
							}
							BgL_arg1820z00_2608 =
								BGl_shapez00zztools_shapez00(
								((obj_t) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_2524)));
							{	/* Tools/trace.sch 53 */
								obj_t BgL_list1821z00_2610;

								{	/* Tools/trace.sch 53 */
									obj_t BgL_arg1822z00_2611;

									{	/* Tools/trace.sch 53 */
										obj_t BgL_arg1823z00_2612;

										{	/* Tools/trace.sch 53 */
											obj_t BgL_arg1824z00_2613;

											{	/* Tools/trace.sch 53 */
												obj_t BgL_arg1825z00_2614;

												{	/* Tools/trace.sch 53 */
													obj_t BgL_arg1826z00_2615;

													BgL_arg1826z00_2615 =
														MAKE_YOUNG_PAIR(BgL_arg1820z00_2608, BNIL);
													BgL_arg1825z00_2614 =
														MAKE_YOUNG_PAIR
														(BGl_string2000z00zzintegrate_nodez00,
														BgL_arg1826z00_2615);
												}
												BgL_arg1824z00_2613 =
													MAKE_YOUNG_PAIR(BGl_string2001z00zzintegrate_nodez00,
													BgL_arg1825z00_2614);
											}
											BgL_arg1823z00_2612 =
												MAKE_YOUNG_PAIR(BINT(((long) 419)),
												BgL_arg1824z00_2613);
										}
										BgL_arg1822z00_2611 =
											MAKE_YOUNG_PAIR(BGl_string2002z00zzintegrate_nodez00,
											BgL_arg1823z00_2612);
									}
									BgL_list1821z00_2610 =
										MAKE_YOUNG_PAIR(BGl_string2003z00zzintegrate_nodez00,
										BgL_arg1822z00_2611);
								}
								BGl_tprintz00zz__r4_output_6_10_3z00(BgL_arg1811z00_2607,
									BgL_list1821z00_2610);
						}}
						{	/* Tools/trace.sch 53 */
							obj_t BgL_arg1827z00_2616;
							obj_t BgL_arg1828z00_2617;

							{	/* Tools/trace.sch 53 */
								obj_t BgL_res1973z00_2618;

								{	/* Tools/trace.sch 53 */
									obj_t BgL_tmpz00_3255;

									BgL_tmpz00_3255 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res1973z00_2618 =
										BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_3255);
								}
								BgL_arg1827z00_2616 = BgL_res1973z00_2618;
							}
							BgL_arg1828z00_2617 =
								(((BgL_variablez00_bglt) COBJECT(BgL_vz00_2606))->
								BgL_accessz00);
							{	/* Tools/trace.sch 53 */
								obj_t BgL_list1829z00_2619;

								{	/* Tools/trace.sch 53 */
									obj_t BgL_arg1830z00_2620;

									{	/* Tools/trace.sch 53 */
										obj_t BgL_arg1831z00_2621;

										{	/* Tools/trace.sch 53 */
											obj_t BgL_arg1832z00_2622;

											{	/* Tools/trace.sch 53 */
												obj_t BgL_arg1833z00_2623;

												{	/* Tools/trace.sch 53 */
													obj_t BgL_arg1835z00_2624;

													BgL_arg1835z00_2624 =
														MAKE_YOUNG_PAIR(BgL_arg1828z00_2617, BNIL);
													BgL_arg1833z00_2623 =
														MAKE_YOUNG_PAIR
														(BGl_string2004z00zzintegrate_nodez00,
														BgL_arg1835z00_2624);
												}
												BgL_arg1832z00_2622 =
													MAKE_YOUNG_PAIR(BGl_string2001z00zzintegrate_nodez00,
													BgL_arg1833z00_2623);
											}
											BgL_arg1831z00_2621 =
												MAKE_YOUNG_PAIR(BINT(((long) 420)),
												BgL_arg1832z00_2622);
										}
										BgL_arg1830z00_2620 =
											MAKE_YOUNG_PAIR(BGl_string2002z00zzintegrate_nodez00,
											BgL_arg1831z00_2621);
									}
									BgL_list1829z00_2619 =
										MAKE_YOUNG_PAIR(BGl_string2003z00zzintegrate_nodez00,
										BgL_arg1830z00_2620);
								}
								BGl_tprintz00zz__r4_output_6_10_3z00(BgL_arg1827z00_2616,
									BgL_list1829z00_2619);
						}}
						{	/* Tools/trace.sch 53 */
							obj_t BgL_arg1836z00_2625;

							BgL_arg1836z00_2625 =
								BGl_shapez00zztools_shapez00(
								((obj_t) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_2524)));
							BGl_errorz00zz__errorz00(BGl_string2005z00zzintegrate_nodez00,
								BGl_string2006z00zzintegrate_nodez00, BgL_arg1836z00_2625);
					}}
				else
					{	/* Tools/trace.sch 53 */
						BFALSE;
					}
			}
			{
				BgL_varz00_bglt BgL_auxz00_3271;

				{	/* Tools/trace.sch 53 */
					BgL_varz00_bglt BgL_arg1842z00_2626;

					BgL_arg1842z00_2626 =
						(((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2524)))->BgL_varz00);
					BgL_auxz00_3271 =
						((BgL_varz00_bglt)
						BGl_gloz12z12zzintegrate_nodez00(
							((BgL_nodez00_bglt) BgL_arg1842z00_2626),
							((BgL_variablez00_bglt) BgL_integratorz00_2525)));
				}
				((((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2524)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_3271), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_2524));
		}

	}



/* &glo!-make-box1349 */
	BgL_nodez00_bglt BGl_z62gloz12zd2makezd2box1349z70zzintegrate_nodez00(obj_t
		BgL_envz00_2526, obj_t BgL_nodez00_2527, obj_t BgL_integratorz00_2528)
	{
		{	/* Integrate/node.scm 406 */
			{
				BgL_nodez00_bglt BgL_auxz00_3282;

				{	/* Integrate/node.scm 408 */
					BgL_nodez00_bglt BgL_arg1798z00_2628;

					BgL_arg1798z00_2628 =
						(((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2527)))->BgL_valuez00);
					BgL_auxz00_3282 =
						BGl_gloz12z12zzintegrate_nodez00(BgL_arg1798z00_2628,
						((BgL_variablez00_bglt) BgL_integratorz00_2528));
				}
				((((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2527)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3282), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2527));
		}

	}



/* &glo!-jump-ex-it1347 */
	BgL_nodez00_bglt
		BGl_z62gloz12zd2jumpzd2exzd2it1347za2zzintegrate_nodez00(obj_t
		BgL_envz00_2529, obj_t BgL_nodez00_2530, obj_t BgL_integratorz00_2531)
	{
		{	/* Integrate/node.scm 397 */
			{
				BgL_nodez00_bglt BgL_auxz00_3291;

				{	/* Integrate/node.scm 399 */
					BgL_nodez00_bglt BgL_arg1790z00_2630;

					BgL_arg1790z00_2630 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2530)))->BgL_exitz00);
					BgL_auxz00_3291 =
						BGl_gloz12z12zzintegrate_nodez00(BgL_arg1790z00_2630,
						((BgL_variablez00_bglt) BgL_integratorz00_2531));
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2530)))->
						BgL_exitz00) = ((BgL_nodez00_bglt) BgL_auxz00_3291), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3298;

				{	/* Integrate/node.scm 400 */
					BgL_nodez00_bglt BgL_arg1796z00_2631;

					BgL_arg1796z00_2631 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2530)))->
						BgL_valuez00);
					BgL_auxz00_3298 =
						BGl_gloz12z12zzintegrate_nodez00(BgL_arg1796z00_2631,
						((BgL_variablez00_bglt) BgL_integratorz00_2531));
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2530)))->
						BgL_valuez00) = ((BgL_nodez00_bglt) BgL_auxz00_3298), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2530));
		}

	}



/* &glo!-set-ex-it1345 */
	BgL_nodez00_bglt BGl_z62gloz12zd2setzd2exzd2it1345za2zzintegrate_nodez00(obj_t
		BgL_envz00_2532, obj_t BgL_nodez00_2533, obj_t BgL_integratorz00_2534)
	{
		{	/* Integrate/node.scm 389 */
			{
				BgL_nodez00_bglt BgL_auxz00_3307;

				{	/* Integrate/node.scm 391 */
					BgL_nodez00_bglt BgL_arg1784z00_2633;

					BgL_arg1784z00_2633 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2533)))->BgL_bodyz00);
					BgL_auxz00_3307 =
						BGl_gloz12z12zzintegrate_nodez00(BgL_arg1784z00_2633,
						((BgL_variablez00_bglt) BgL_integratorz00_2534));
				}
				((((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2533)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3307), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2533));
		}

	}



/* &glo!-let-var1343 */
	BgL_nodez00_bglt BGl_z62gloz12zd2letzd2var1343z70zzintegrate_nodez00(obj_t
		BgL_envz00_2535, obj_t BgL_nodez00_2536, obj_t BgL_integratorz00_2537)
	{
		{	/* Integrate/node.scm 364 */
			{	/* Integrate/node.scm 366 */
				obj_t BgL_g1299z00_2635;

				BgL_g1299z00_2635 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2536)))->BgL_bindingsz00);
				{
					obj_t BgL_l1297z00_2637;

					BgL_l1297z00_2637 = BgL_g1299z00_2635;
				BgL_zc3z04anonymousza31755ze3z87_2636:
					if (PAIRP(BgL_l1297z00_2637))
						{	/* Integrate/node.scm 366 */
							{	/* Integrate/node.scm 367 */
								obj_t BgL_bindingz00_2638;

								BgL_bindingz00_2638 = CAR(BgL_l1297z00_2637);
								{	/* Integrate/node.scm 367 */
									obj_t BgL_varz00_2639;
									obj_t BgL_valz00_2640;

									BgL_varz00_2639 = CAR(((obj_t) BgL_bindingz00_2638));
									BgL_valz00_2640 = CDR(((obj_t) BgL_bindingz00_2638));
									{	/* Integrate/node.scm 369 */
										BgL_nodez00_bglt BgL_arg1759z00_2641;

										BgL_arg1759z00_2641 =
											BGl_gloz12z12zzintegrate_nodez00(
											((BgL_nodez00_bglt) BgL_valz00_2640),
											((BgL_variablez00_bglt) BgL_integratorz00_2537));
										{	/* Integrate/node.scm 369 */
											obj_t BgL_auxz00_3330;
											obj_t BgL_tmpz00_3328;

											BgL_auxz00_3330 = ((obj_t) BgL_arg1759z00_2641);
											BgL_tmpz00_3328 = ((obj_t) BgL_bindingz00_2638);
											SET_CDR(BgL_tmpz00_3328, BgL_auxz00_3330);
										}
									}
									if (BGl_integratezd2celledzf3z21zzintegrate_nodez00(
											((BgL_localz00_bglt) BgL_varz00_2639)))
										{	/* Integrate/node.scm 371 */
											BgL_localz00_bglt BgL_nvarz00_2642;

											BgL_nvarz00_2642 =
												BGl_cellzd2variablezd2zzintegrate_nodez00(
												((BgL_localz00_bglt) BgL_varz00_2639));
											((((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_localz00_bglt) BgL_varz00_2639))))->
													BgL_fastzd2alphazd2) =
												((obj_t) ((obj_t) BgL_nvarz00_2642)), BUNSPEC);
											{	/* Integrate/node.scm 374 */
												BgL_makezd2boxzd2_bglt BgL_arg1761z00_2643;

												{	/* Integrate/node.scm 374 */
													obj_t BgL_arg1768z00_2644;

													BgL_arg1768z00_2644 =
														CDR(((obj_t) BgL_bindingz00_2638));
													BgL_arg1761z00_2643 =
														BGl_azd2makezd2cellz00zzintegrate_nodez00(
														((BgL_nodez00_bglt) BgL_arg1768z00_2644),
														((BgL_variablez00_bglt) BgL_varz00_2639));
												}
												{	/* Integrate/node.scm 373 */
													obj_t BgL_auxz00_3349;
													obj_t BgL_tmpz00_3347;

													BgL_auxz00_3349 = ((obj_t) BgL_arg1761z00_2643);
													BgL_tmpz00_3347 = ((obj_t) BgL_bindingz00_2638);
													SET_CDR(BgL_tmpz00_3347, BgL_auxz00_3349);
												}
											}
										}
									else
										{	/* Integrate/node.scm 370 */
											BFALSE;
										}
								}
							}
							{
								obj_t BgL_l1297z00_3352;

								BgL_l1297z00_3352 = CDR(BgL_l1297z00_2637);
								BgL_l1297z00_2637 = BgL_l1297z00_3352;
								goto BgL_zc3z04anonymousza31755ze3z87_2636;
							}
						}
					else
						{	/* Integrate/node.scm 366 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3354;

				{	/* Integrate/node.scm 376 */
					BgL_nodez00_bglt BgL_arg1775z00_2645;

					BgL_arg1775z00_2645 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2536)))->BgL_bodyz00);
					BgL_auxz00_3354 =
						BGl_gloz12z12zzintegrate_nodez00(BgL_arg1775z00_2645,
						((BgL_variablez00_bglt) BgL_integratorz00_2537));
				}
				((((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2536)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3354), BUNSPEC);
			}
			{	/* Integrate/node.scm 377 */
				obj_t BgL_g1302z00_2646;

				BgL_g1302z00_2646 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2536)))->BgL_bindingsz00);
				{
					obj_t BgL_l1300z00_2648;

					BgL_l1300z00_2648 = BgL_g1302z00_2646;
				BgL_zc3z04anonymousza31776ze3z87_2647:
					if (PAIRP(BgL_l1300z00_2648))
						{	/* Integrate/node.scm 377 */
							{	/* Integrate/node.scm 378 */
								obj_t BgL_bindingz00_2649;

								BgL_bindingz00_2649 = CAR(BgL_l1300z00_2648);
								{	/* Integrate/node.scm 378 */
									obj_t BgL_varz00_2650;

									BgL_varz00_2650 = CAR(((obj_t) BgL_bindingz00_2649));
									if (BGl_integratezd2celledzf3z21zzintegrate_nodez00(
											((BgL_localz00_bglt) BgL_varz00_2650)))
										{	/* Integrate/node.scm 380 */
											BgL_localz00_bglt BgL_nvarz00_2651;

											BgL_nvarz00_2651 =
												BGl_cellzd2variablezd2zzintegrate_nodez00(
												((BgL_localz00_bglt) BgL_varz00_2650));
											{	/* Integrate/node.scm 381 */
												obj_t BgL_arg1779z00_2652;

												BgL_arg1779z00_2652 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt) BgL_varz00_2650)))->
													BgL_fastzd2alphazd2);
												{	/* Integrate/node.scm 381 */
													obj_t BgL_tmpz00_3375;

													BgL_tmpz00_3375 = ((obj_t) BgL_bindingz00_2649);
													SET_CAR(BgL_tmpz00_3375, BgL_arg1779z00_2652);
												}
											}
											((((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_localz00_bglt) BgL_varz00_2650))))->
													BgL_fastzd2alphazd2) = ((obj_t) BUNSPEC), BUNSPEC);
										}
									else
										{	/* Integrate/node.scm 379 */
											BFALSE;
										}
								}
							}
							{
								obj_t BgL_l1300z00_3381;

								BgL_l1300z00_3381 = CDR(BgL_l1300z00_2648);
								BgL_l1300z00_2648 = BgL_l1300z00_3381;
								goto BgL_zc3z04anonymousza31776ze3z87_2647;
							}
						}
					else
						{	/* Integrate/node.scm 377 */
							((bool_t) 1);
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt) BgL_nodez00_2536));
		}

	}



/* &glo!-let-fun1341 */
	BgL_nodez00_bglt BGl_z62gloz12zd2letzd2fun1341z70zzintegrate_nodez00(obj_t
		BgL_envz00_2538, obj_t BgL_nodez00_2539, obj_t BgL_integratorz00_2540)
	{
		{	/* Integrate/node.scm 353 */
			{
				BgL_nodez00_bglt BgL_auxz00_3385;

				{	/* Integrate/node.scm 355 */
					BgL_nodez00_bglt BgL_arg1745z00_2654;

					BgL_arg1745z00_2654 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2539)))->BgL_bodyz00);
					BgL_auxz00_3385 =
						BGl_gloz12z12zzintegrate_nodez00(BgL_arg1745z00_2654,
						((BgL_variablez00_bglt) BgL_integratorz00_2540));
				}
				((((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2539)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3385), BUNSPEC);
			}
			{	/* Integrate/node.scm 356 */
				obj_t BgL_g1296z00_2655;

				BgL_g1296z00_2655 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2539)))->BgL_localsz00);
				{
					obj_t BgL_l1294z00_2657;

					BgL_l1294z00_2657 = BgL_g1296z00_2655;
				BgL_zc3z04anonymousza31746ze3z87_2656:
					if (PAIRP(BgL_l1294z00_2657))
						{	/* Integrate/node.scm 356 */
							{	/* Integrate/node.scm 357 */
								obj_t BgL_localz00_2658;

								BgL_localz00_2658 = CAR(BgL_l1294z00_2657);
								BGl_globaliza7ezd2localzd2funz12zb5zzintegrate_nodez00(
									((BgL_localz00_bglt) BgL_localz00_2658),
									((BgL_variablez00_bglt) BgL_integratorz00_2540));
							}
							{
								obj_t BgL_l1294z00_3400;

								BgL_l1294z00_3400 = CDR(BgL_l1294z00_2657);
								BgL_l1294z00_2657 = BgL_l1294z00_3400;
								goto BgL_zc3z04anonymousza31746ze3z87_2656;
							}
						}
					else
						{	/* Integrate/node.scm 356 */
							((bool_t) 1);
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt) BgL_nodez00_2539));
		}

	}



/* &glo!-switch1339 */
	BgL_nodez00_bglt BGl_z62gloz12zd2switch1339za2zzintegrate_nodez00(obj_t
		BgL_envz00_2541, obj_t BgL_nodez00_2542, obj_t BgL_integratorz00_2543)
	{
		{	/* Integrate/node.scm 342 */
			{
				BgL_nodez00_bglt BgL_auxz00_3404;

				{	/* Integrate/node.scm 344 */
					BgL_nodez00_bglt BgL_arg1739z00_2660;

					BgL_arg1739z00_2660 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2542)))->BgL_testz00);
					BgL_auxz00_3404 =
						BGl_gloz12z12zzintegrate_nodez00(BgL_arg1739z00_2660,
						((BgL_variablez00_bglt) BgL_integratorz00_2543));
				}
				((((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2542)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3404), BUNSPEC);
			}
			{	/* Integrate/node.scm 345 */
				obj_t BgL_g1293z00_2661;

				BgL_g1293z00_2661 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2542)))->BgL_clausesz00);
				{
					obj_t BgL_l1291z00_2663;

					BgL_l1291z00_2663 = BgL_g1293z00_2661;
				BgL_zc3z04anonymousza31740ze3z87_2662:
					if (PAIRP(BgL_l1291z00_2663))
						{	/* Integrate/node.scm 345 */
							{	/* Integrate/node.scm 346 */
								obj_t BgL_clausez00_2664;

								BgL_clausez00_2664 = CAR(BgL_l1291z00_2663);
								{	/* Integrate/node.scm 346 */
									BgL_nodez00_bglt BgL_arg1742z00_2665;

									{	/* Integrate/node.scm 346 */
										obj_t BgL_arg1743z00_2666;

										BgL_arg1743z00_2666 = CDR(((obj_t) BgL_clausez00_2664));
										BgL_arg1742z00_2665 =
											BGl_gloz12z12zzintegrate_nodez00(
											((BgL_nodez00_bglt) BgL_arg1743z00_2666),
											((BgL_variablez00_bglt) BgL_integratorz00_2543));
									}
									{	/* Integrate/node.scm 346 */
										obj_t BgL_auxz00_3423;
										obj_t BgL_tmpz00_3421;

										BgL_auxz00_3423 = ((obj_t) BgL_arg1742z00_2665);
										BgL_tmpz00_3421 = ((obj_t) BgL_clausez00_2664);
										SET_CDR(BgL_tmpz00_3421, BgL_auxz00_3423);
									}
								}
							}
							{
								obj_t BgL_l1291z00_3426;

								BgL_l1291z00_3426 = CDR(BgL_l1291z00_2663);
								BgL_l1291z00_2663 = BgL_l1291z00_3426;
								goto BgL_zc3z04anonymousza31740ze3z87_2662;
							}
						}
					else
						{	/* Integrate/node.scm 345 */
							((bool_t) 1);
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_2542));
		}

	}



/* &glo!-fail1337 */
	BgL_nodez00_bglt BGl_z62gloz12zd2fail1337za2zzintegrate_nodez00(obj_t
		BgL_envz00_2544, obj_t BgL_nodez00_2545, obj_t BgL_integratorz00_2546)
	{
		{	/* Integrate/node.scm 332 */
			{
				BgL_nodez00_bglt BgL_auxz00_3430;

				{	/* Integrate/node.scm 334 */
					BgL_nodez00_bglt BgL_arg1732z00_2668;

					BgL_arg1732z00_2668 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2545)))->BgL_procz00);
					BgL_auxz00_3430 =
						BGl_gloz12z12zzintegrate_nodez00(BgL_arg1732z00_2668,
						((BgL_variablez00_bglt) BgL_integratorz00_2546));
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2545)))->BgL_procz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3430), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3437;

				{	/* Integrate/node.scm 335 */
					BgL_nodez00_bglt BgL_arg1733z00_2669;

					BgL_arg1733z00_2669 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2545)))->BgL_msgz00);
					BgL_auxz00_3437 =
						BGl_gloz12z12zzintegrate_nodez00(BgL_arg1733z00_2669,
						((BgL_variablez00_bglt) BgL_integratorz00_2546));
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2545)))->BgL_msgz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3437), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3444;

				{	/* Integrate/node.scm 336 */
					BgL_nodez00_bglt BgL_arg1738z00_2670;

					BgL_arg1738z00_2670 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2545)))->BgL_objz00);
					BgL_auxz00_3444 =
						BGl_gloz12z12zzintegrate_nodez00(BgL_arg1738z00_2670,
						((BgL_variablez00_bglt) BgL_integratorz00_2546));
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2545)))->BgL_objz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3444), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_failz00_bglt) BgL_nodez00_2545));
		}

	}



/* &glo!-conditional1335 */
	BgL_nodez00_bglt BGl_z62gloz12zd2conditional1335za2zzintegrate_nodez00(obj_t
		BgL_envz00_2547, obj_t BgL_nodez00_2548, obj_t BgL_integratorz00_2549)
	{
		{	/* Integrate/node.scm 322 */
			{
				BgL_nodez00_bglt BgL_auxz00_3453;

				{	/* Integrate/node.scm 324 */
					BgL_nodez00_bglt BgL_arg1728z00_2672;

					BgL_arg1728z00_2672 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2548)))->BgL_testz00);
					BgL_auxz00_3453 =
						BGl_gloz12z12zzintegrate_nodez00(BgL_arg1728z00_2672,
						((BgL_variablez00_bglt) BgL_integratorz00_2549));
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2548)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3453), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3460;

				{	/* Integrate/node.scm 325 */
					BgL_nodez00_bglt BgL_arg1729z00_2673;

					BgL_arg1729z00_2673 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2548)))->BgL_truez00);
					BgL_auxz00_3460 =
						BGl_gloz12z12zzintegrate_nodez00(BgL_arg1729z00_2673,
						((BgL_variablez00_bglt) BgL_integratorz00_2549));
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2548)))->BgL_truez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3460), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3467;

				{	/* Integrate/node.scm 326 */
					BgL_nodez00_bglt BgL_arg1731z00_2674;

					BgL_arg1731z00_2674 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2548)))->BgL_falsez00);
					BgL_auxz00_3467 =
						BGl_gloz12z12zzintegrate_nodez00(BgL_arg1731z00_2674,
						((BgL_variablez00_bglt) BgL_integratorz00_2549));
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2548)))->BgL_falsez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3467), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt) BgL_nodez00_2548));
		}

	}



/* &glo!-setq1332 */
	BgL_nodez00_bglt BGl_z62gloz12zd2setq1332za2zzintegrate_nodez00(obj_t
		BgL_envz00_2550, obj_t BgL_nodez00_2551, obj_t BgL_integratorz00_2552)
	{
		{	/* Integrate/node.scm 285 */
			{
				BgL_nodez00_bglt BgL_auxz00_3476;

				{	/* Integrate/node.scm 287 */
					BgL_nodez00_bglt BgL_arg1688z00_2676;

					BgL_arg1688z00_2676 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2551)))->BgL_valuez00);
					BgL_auxz00_3476 =
						BGl_gloz12z12zzintegrate_nodez00(BgL_arg1688z00_2676,
						((BgL_variablez00_bglt) BgL_integratorz00_2552));
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2551)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3476), BUNSPEC);
			}
			{	/* Integrate/node.scm 288 */
				BgL_variablez00_bglt BgL_varz00_2677;

				BgL_varz00_2677 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_setqz00_bglt) COBJECT(
										((BgL_setqz00_bglt) BgL_nodez00_2551)))->BgL_varz00)))->
					BgL_variablez00);
				{	/* Integrate/node.scm 288 */
					BgL_typez00_bglt BgL_vtypez00_2678;

					BgL_vtypez00_2678 =
						(((BgL_variablez00_bglt) COBJECT(BgL_varz00_2677))->BgL_typez00);
					{	/* Integrate/node.scm 289 */

						{	/* Integrate/node.scm 290 */
							obj_t BgL_g1140z00_2679;

							BgL_g1140z00_2679 =
								(((BgL_variablez00_bglt) COBJECT(BgL_varz00_2677))->
								BgL_fastzd2alphazd2);
							{
								BgL_variablez00_bglt BgL_varz00_2681;
								obj_t BgL_alphaz00_2682;

								BgL_varz00_2681 = BgL_varz00_2677;
								BgL_alphaz00_2682 = BgL_g1140z00_2679;
							BgL_loopz00_2680:
								if (BGl_isazf3zf3zz__objectz00(BgL_alphaz00_2682,
										BGl_localz00zzast_varz00))
									{	/* Integrate/node.scm 292 */
										{	/* Integrate/node.scm 294 */
											BgL_varz00_bglt BgL_arg1692z00_2683;

											BgL_arg1692z00_2683 =
												(((BgL_setqz00_bglt) COBJECT(
														((BgL_setqz00_bglt) BgL_nodez00_2551)))->
												BgL_varz00);
											((((BgL_varz00_bglt) COBJECT(BgL_arg1692z00_2683))->
													BgL_variablez00) =
												((BgL_variablez00_bglt) ((BgL_variablez00_bglt) (
															(BgL_localz00_bglt) BgL_alphaz00_2682))),
												BUNSPEC);
										}
										{	/* Integrate/node.scm 295 */
											obj_t BgL_arg1695z00_2684;

											BgL_arg1695z00_2684 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt) BgL_alphaz00_2682))))->
												BgL_fastzd2alphazd2);
											{
												obj_t BgL_alphaz00_3501;
												BgL_variablez00_bglt BgL_varz00_3498;

												BgL_varz00_3498 =
													((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_alphaz00_2682));
												BgL_alphaz00_3501 = BgL_arg1695z00_2684;
												BgL_alphaz00_2682 = BgL_alphaz00_3501;
												BgL_varz00_2681 = BgL_varz00_3498;
												goto BgL_loopz00_2680;
											}
										}
									}
								else
									{	/* Integrate/node.scm 296 */
										BgL_variablez00_bglt BgL_varz00_2685;

										BgL_varz00_2685 =
											(((BgL_varz00_bglt) COBJECT(
													(((BgL_setqz00_bglt) COBJECT(
																((BgL_setqz00_bglt) BgL_nodez00_2551)))->
														BgL_varz00)))->BgL_variablez00);
										{	/* Integrate/node.scm 297 */
											bool_t BgL_test2081z00_3505;

											{	/* Integrate/node.scm 297 */
												bool_t BgL_test2082z00_3506;

												{	/* Integrate/node.scm 297 */
													bool_t BgL_res1960z00_2686;

													BgL_res1960z00_2686 =
														BGl_isazf3zf3zz__objectz00(
														((obj_t) BgL_varz00_2685),
														BGl_localz00zzast_varz00);
													BgL_test2082z00_3506 = BgL_res1960z00_2686;
												}
												if (BgL_test2082z00_3506)
													{	/* Integrate/node.scm 297 */
														BgL_test2081z00_3505 =
															BGl_integratezd2celledzf3z21zzintegrate_nodez00(
															((BgL_localz00_bglt) BgL_varz00_2685));
													}
												else
													{	/* Integrate/node.scm 297 */
														BgL_test2081z00_3505 = ((bool_t) 0);
													}
											}
											if (BgL_test2081z00_3505)
												{	/* Integrate/node.scm 298 */
													BgL_localz00_bglt BgL_azd2varzd2_2687;
													obj_t BgL_locz00_2688;

													BgL_azd2varzd2_2687 =
														BGl_makezd2localzd2svarz00zzast_localz00
														(CNST_TABLE_REF(((long) 4)),
														((BgL_typez00_bglt)
															BGl_za2objza2z00zztype_cachez00));
													BgL_locz00_2688 =
														(((BgL_nodez00_bglt)
															COBJECT(((BgL_nodez00_bglt) ((BgL_setqz00_bglt)
																		BgL_nodez00_2551))))->BgL_locz00);
													{	/* Integrate/node.scm 300 */
														obj_t BgL_vz00_2689;

														BgL_vz00_2689 = CNST_TABLE_REF(((long) 0));
														((((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_localz00_bglt) BgL_varz00_2685))))->
																BgL_accessz00) =
															((obj_t) BgL_vz00_2689), BUNSPEC);
													}
													{	/* Integrate/node.scm 301 */
														BgL_varz00_bglt BgL_arg1704z00_2690;

														BgL_arg1704z00_2690 =
															(((BgL_setqz00_bglt) COBJECT(
																	((BgL_setqz00_bglt) BgL_nodez00_2551)))->
															BgL_varz00);
														{	/* Integrate/node.scm 301 */
															BgL_typez00_bglt BgL_vz00_2691;

															BgL_vz00_2691 =
																((BgL_typez00_bglt)
																BGl_za2objza2z00zztype_cachez00);
															((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																				BgL_arg1704z00_2690)))->BgL_typez00) =
																((BgL_typez00_bglt) BgL_vz00_2691), BUNSPEC);
													}}
													{	/* Integrate/node.scm 302 */
														BgL_svarz00_bglt BgL_tmp1141z00_2692;

														BgL_tmp1141z00_2692 =
															((BgL_svarz00_bglt)
															(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			BgL_azd2varzd2_2687)))->BgL_valuez00));
														{	/* Integrate/node.scm 302 */
															BgL_svarzf2iinfozf2_bglt BgL_wide1143z00_2693;

															BgL_wide1143z00_2693 =
																((BgL_svarzf2iinfozf2_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_svarzf2iinfozf2_bgl))));
															{	/* Integrate/node.scm 302 */
																obj_t BgL_auxz00_3533;
																BgL_objectz00_bglt BgL_tmpz00_3530;

																BgL_auxz00_3533 =
																	((obj_t) BgL_wide1143z00_2693);
																BgL_tmpz00_3530 =
																	((BgL_objectz00_bglt)
																	((BgL_svarz00_bglt) BgL_tmp1141z00_2692));
																BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3530,
																	BgL_auxz00_3533);
															}
															((BgL_objectz00_bglt)
																((BgL_svarz00_bglt) BgL_tmp1141z00_2692));
															{	/* Integrate/node.scm 302 */
																long BgL_arg1707z00_2694;

																{	/* Integrate/node.scm 302 */
																	long BgL_res1961z00_2695;

																	BgL_res1961z00_2695 =
																		BGL_CLASS_INDEX
																		(BGl_svarzf2Iinfozf2zzintegrate_infoz00);
																	BgL_arg1707z00_2694 = BgL_res1961z00_2695;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1141z00_2692)),
																	BgL_arg1707z00_2694);
															}
															((BgL_svarz00_bglt)
																((BgL_svarz00_bglt) BgL_tmp1141z00_2692));
														}
														{
															BgL_svarzf2iinfozf2_bglt BgL_auxz00_3544;

															{
																obj_t BgL_auxz00_3545;

																{	/* Integrate/node.scm 303 */
																	BgL_objectz00_bglt BgL_tmpz00_3546;

																	BgL_tmpz00_3546 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1141z00_2692));
																	BgL_auxz00_3545 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_3546);
																}
																BgL_auxz00_3544 =
																	((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3545);
															}
															((((BgL_svarzf2iinfozf2_bglt)
																		COBJECT(BgL_auxz00_3544))->
																	BgL_fzd2markzd2) =
																((obj_t) BUNSPEC), BUNSPEC);
														}
														{
															BgL_svarzf2iinfozf2_bglt BgL_auxz00_3552;

															{
																obj_t BgL_auxz00_3553;

																{	/* Integrate/node.scm 303 */
																	BgL_objectz00_bglt BgL_tmpz00_3554;

																	BgL_tmpz00_3554 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1141z00_2692));
																	BgL_auxz00_3553 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_3554);
																}
																BgL_auxz00_3552 =
																	((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3553);
															}
															((((BgL_svarzf2iinfozf2_bglt)
																		COBJECT(BgL_auxz00_3552))->
																	BgL_uzd2markzd2) =
																((obj_t) BUNSPEC), BUNSPEC);
														}
														{
															BgL_svarzf2iinfozf2_bglt BgL_auxz00_3560;

															{
																obj_t BgL_auxz00_3561;

																{	/* Integrate/node.scm 303 */
																	BgL_objectz00_bglt BgL_tmpz00_3562;

																	BgL_tmpz00_3562 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1141z00_2692));
																	BgL_auxz00_3561 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_3562);
																}
																BgL_auxz00_3560 =
																	((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3561);
															}
															((((BgL_svarzf2iinfozf2_bglt)
																		COBJECT(BgL_auxz00_3560))->
																	BgL_kapturedzf3zf3) =
																((bool_t) ((bool_t) 0)), BUNSPEC);
														}
														{
															BgL_svarzf2iinfozf2_bglt BgL_auxz00_3568;

															{
																obj_t BgL_auxz00_3569;

																{	/* Integrate/node.scm 303 */
																	BgL_objectz00_bglt BgL_tmpz00_3570;

																	BgL_tmpz00_3570 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1141z00_2692));
																	BgL_auxz00_3569 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_3570);
																}
																BgL_auxz00_3568 =
																	((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3569);
															}
															((((BgL_svarzf2iinfozf2_bglt)
																		COBJECT(BgL_auxz00_3568))->
																	BgL_celledzf3zf3) =
																((bool_t) ((bool_t) 0)), BUNSPEC);
														}
														{
															BgL_svarzf2iinfozf2_bglt BgL_auxz00_3576;

															{
																obj_t BgL_auxz00_3577;

																{	/* Integrate/node.scm 303 */
																	BgL_objectz00_bglt BgL_tmpz00_3578;

																	BgL_tmpz00_3578 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1141z00_2692));
																	BgL_auxz00_3577 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_3578);
																}
																BgL_auxz00_3576 =
																	((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3577);
															}
															((((BgL_svarzf2iinfozf2_bglt)
																		COBJECT(BgL_auxz00_3576))->BgL_xhdlz00) =
																((obj_t) BFALSE), BUNSPEC);
														}
														((BgL_svarz00_bglt) BgL_tmp1141z00_2692);
													}
													{	/* Integrate/node.scm 304 */
														BgL_letzd2varzd2_bglt BgL_new1146z00_2696;

														{	/* Integrate/node.scm 305 */
															BgL_letzd2varzd2_bglt BgL_new1145z00_2697;

															BgL_new1145z00_2697 =
																((BgL_letzd2varzd2_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_letzd2varzd2_bgl))));
															{	/* Integrate/node.scm 305 */
																long BgL_arg1725z00_2698;

																{	/* Integrate/node.scm 305 */
																	long BgL_res1962z00_2699;

																	BgL_res1962z00_2699 =
																		BGL_CLASS_INDEX
																		(BGl_letzd2varzd2zzast_nodez00);
																	BgL_arg1725z00_2698 = BgL_res1962z00_2699;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1145z00_2697),
																	BgL_arg1725z00_2698);
															}
															{	/* Integrate/node.scm 305 */
																BgL_objectz00_bglt BgL_tmpz00_3589;

																BgL_tmpz00_3589 =
																	((BgL_objectz00_bglt) BgL_new1145z00_2697);
																BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3589,
																	BFALSE);
															}
															((BgL_objectz00_bglt) BgL_new1145z00_2697);
															BgL_new1146z00_2696 = BgL_new1145z00_2697;
														}
														((((BgL_nodez00_bglt) COBJECT(
																		((BgL_nodez00_bglt) BgL_new1146z00_2696)))->
																BgL_locz00) =
															((obj_t) BgL_locz00_2688), BUNSPEC);
														((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																			BgL_new1146z00_2696)))->BgL_typez00) =
															((BgL_typez00_bglt) ((BgL_typez00_bglt)
																	BGl_za2unspecza2z00zztype_cachez00)),
															BUNSPEC);
														((((BgL_nodezf2effectzf2_bglt)
																	COBJECT(((BgL_nodezf2effectzf2_bglt)
																			BgL_new1146z00_2696)))->
																BgL_sidezd2effectzd2) =
															((obj_t) BUNSPEC), BUNSPEC);
														((((BgL_nodezf2effectzf2_bglt)
																	COBJECT(((BgL_nodezf2effectzf2_bglt)
																			BgL_new1146z00_2696)))->BgL_keyz00) =
															((obj_t) BINT(((long) -1))), BUNSPEC);
														{
															obj_t BgL_auxz00_3603;

															{	/* Integrate/node.scm 307 */
																obj_t BgL_arg1708z00_2700;

																{	/* Integrate/node.scm 307 */
																	BgL_nodez00_bglt BgL_arg1711z00_2701;

																	BgL_arg1711z00_2701 =
																		(((BgL_setqz00_bglt) COBJECT(
																				((BgL_setqz00_bglt)
																					BgL_nodez00_2551)))->BgL_valuez00);
																	BgL_arg1708z00_2700 =
																		MAKE_YOUNG_PAIR(((obj_t)
																			BgL_azd2varzd2_2687),
																		((obj_t) BgL_arg1711z00_2701));
																}
																{	/* Integrate/node.scm 307 */
																	obj_t BgL_list1709z00_2702;

																	BgL_list1709z00_2702 =
																		MAKE_YOUNG_PAIR(BgL_arg1708z00_2700, BNIL);
																	BgL_auxz00_3603 = BgL_list1709z00_2702;
															}}
															((((BgL_letzd2varzd2_bglt)
																		COBJECT(BgL_new1146z00_2696))->
																	BgL_bindingsz00) =
																((obj_t) BgL_auxz00_3603), BUNSPEC);
														}
														{
															BgL_nodez00_bglt BgL_auxz00_3611;

															{	/* Integrate/node.scm 308 */
																BgL_boxzd2setz12zc0_bglt BgL_new1148z00_2703;

																{	/* Integrate/node.scm 309 */
																	BgL_boxzd2setz12zc0_bglt BgL_new1147z00_2704;

																	BgL_new1147z00_2704 =
																		((BgL_boxzd2setz12zc0_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_boxzd2setz12zc0_bgl))));
																	{	/* Integrate/node.scm 309 */
																		long BgL_arg1719z00_2705;

																		{	/* Integrate/node.scm 309 */
																			long BgL_res1964z00_2706;

																			{	/* Integrate/node.scm 309 */
																				obj_t BgL_classz00_2707;

																				BgL_classz00_2707 =
																					BGl_boxzd2setz12zc0zzast_nodez00;
																				BgL_res1964z00_2706 =
																					BGL_CLASS_INDEX(BgL_classz00_2707);
																			}
																			BgL_arg1719z00_2705 = BgL_res1964z00_2706;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1147z00_2704),
																			BgL_arg1719z00_2705);
																	}
																	{	/* Integrate/node.scm 309 */
																		BgL_objectz00_bglt BgL_tmpz00_3616;

																		BgL_tmpz00_3616 =
																			((BgL_objectz00_bglt)
																			BgL_new1147z00_2704);
																		BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3616,
																			BFALSE);
																	}
																	((BgL_objectz00_bglt) BgL_new1147z00_2704);
																	BgL_new1148z00_2703 = BgL_new1147z00_2704;
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1148z00_2703)))->BgL_locz00) =
																	((obj_t) BgL_locz00_2688), BUNSPEC);
																((((BgL_nodez00_bglt)
																			COBJECT(((BgL_nodez00_bglt)
																					BgL_new1148z00_2703)))->BgL_typez00) =
																	((BgL_typez00_bglt) ((BgL_typez00_bglt)
																			BGl_za2unspecza2z00zztype_cachez00)),
																	BUNSPEC);
																((((BgL_boxzd2setz12zc0_bglt)
																			COBJECT(BgL_new1148z00_2703))->
																		BgL_varz00) =
																	((BgL_varz00_bglt) (((BgL_setqz00_bglt)
																				COBJECT(((BgL_setqz00_bglt)
																						BgL_nodez00_2551)))->BgL_varz00)),
																	BUNSPEC);
																{
																	BgL_nodez00_bglt BgL_auxz00_3628;

																	{	/* Integrate/node.scm 313 */
																		BgL_varz00_bglt BgL_new1150z00_2708;

																		{	/* Integrate/node.scm 314 */
																			BgL_varz00_bglt BgL_new1149z00_2709;

																			BgL_new1149z00_2709 =
																				((BgL_varz00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_varz00_bgl))));
																			{	/* Integrate/node.scm 314 */
																				long BgL_arg1712z00_2710;

																				{	/* Integrate/node.scm 314 */
																					long BgL_res1965z00_2711;

																					{	/* Integrate/node.scm 314 */
																						obj_t BgL_classz00_2712;

																						BgL_classz00_2712 =
																							BGl_varz00zzast_nodez00;
																						BgL_res1965z00_2711 =
																							BGL_CLASS_INDEX
																							(BgL_classz00_2712);
																					}
																					BgL_arg1712z00_2710 =
																						BgL_res1965z00_2711;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1149z00_2709),
																					BgL_arg1712z00_2710);
																			}
																			BgL_new1150z00_2708 = BgL_new1149z00_2709;
																		}
																		((((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							BgL_new1150z00_2708)))->
																				BgL_locz00) =
																			((obj_t) BgL_locz00_2688), BUNSPEC);
																		((((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt)
																							BgL_new1150z00_2708)))->
																				BgL_typez00) =
																			((BgL_typez00_bglt) ((
																						(BgL_variablez00_bglt)
																						COBJECT(((BgL_variablez00_bglt)
																								BgL_azd2varzd2_2687)))->
																					BgL_typez00)), BUNSPEC);
																		((((BgL_varz00_bglt)
																					COBJECT(BgL_new1150z00_2708))->
																				BgL_variablez00) =
																			((BgL_variablez00_bglt) (
																					(BgL_variablez00_bglt)
																					BgL_azd2varzd2_2687)), BUNSPEC);
																		BgL_auxz00_3628 =
																			((BgL_nodez00_bglt) BgL_new1150z00_2708);
																	}
																	((((BgL_boxzd2setz12zc0_bglt)
																				COBJECT(BgL_new1148z00_2703))->
																			BgL_valuez00) =
																		((BgL_nodez00_bglt) BgL_auxz00_3628),
																		BUNSPEC);
																}
																((((BgL_boxzd2setz12zc0_bglt)
																			COBJECT(BgL_new1148z00_2703))->
																		BgL_vtypez00) =
																	((BgL_typez00_bglt)
																		BGl_getzd2bigloozd2typez00zztype_cachez00
																		(BgL_vtypez00_2678)), BUNSPEC);
																BgL_auxz00_3611 =
																	((BgL_nodez00_bglt) BgL_new1148z00_2703);
															}
															((((BgL_letzd2varzd2_bglt)
																		COBJECT(BgL_new1146z00_2696))->
																	BgL_bodyz00) =
																((BgL_nodez00_bglt) BgL_auxz00_3611), BUNSPEC);
														}
														((((BgL_letzd2varzd2_bglt)
																	COBJECT(BgL_new1146z00_2696))->
																BgL_removablezf3zf3) =
															((bool_t) ((bool_t) 1)), BUNSPEC);
														return ((BgL_nodez00_bglt) BgL_new1146z00_2696);
													}
												}
											else
												{	/* Integrate/node.scm 297 */
													return
														((BgL_nodez00_bglt)
														((BgL_setqz00_bglt) BgL_nodez00_2551));
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



/* &glo!-cast1330 */
	BgL_nodez00_bglt BGl_z62gloz12zd2cast1330za2zzintegrate_nodez00(obj_t
		BgL_envz00_2553, obj_t BgL_nodez00_2554, obj_t BgL_integratorz00_2555)
	{
		{	/* Integrate/node.scm 277 */
			{	/* Integrate/node.scm 279 */
				BgL_nodez00_bglt BgL_arg1687z00_2714;

				BgL_arg1687z00_2714 =
					(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2554)))->BgL_argz00);
				BGl_gloz12z12zzintegrate_nodez00(BgL_arg1687z00_2714,
					((BgL_variablez00_bglt) BgL_integratorz00_2555));
			}
			return ((BgL_nodez00_bglt) ((BgL_castz00_bglt) BgL_nodez00_2554));
		}

	}



/* &glo!-extern1328 */
	BgL_nodez00_bglt BGl_z62gloz12zd2extern1328za2zzintegrate_nodez00(obj_t
		BgL_envz00_2556, obj_t BgL_nodez00_2557, obj_t BgL_integratorz00_2558)
	{
		{	/* Integrate/node.scm 269 */
			BGl_gloza2z12zb0zzintegrate_nodez00(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_2557)))->BgL_exprza2za2),
				BgL_integratorz00_2558);
			return ((BgL_nodez00_bglt) ((BgL_externz00_bglt) BgL_nodez00_2557));
		}

	}



/* &glo!-funcall1326 */
	BgL_nodez00_bglt BGl_z62gloz12zd2funcall1326za2zzintegrate_nodez00(obj_t
		BgL_envz00_2559, obj_t BgL_nodez00_2560, obj_t BgL_integratorz00_2561)
	{
		{	/* Integrate/node.scm 260 */
			{
				BgL_nodez00_bglt BgL_auxz00_3662;

				{	/* Integrate/node.scm 262 */
					BgL_nodez00_bglt BgL_arg1684z00_2717;

					BgL_arg1684z00_2717 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2560)))->BgL_funz00);
					BgL_auxz00_3662 =
						BGl_gloz12z12zzintegrate_nodez00(BgL_arg1684z00_2717,
						((BgL_variablez00_bglt) BgL_integratorz00_2561));
				}
				((((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2560)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3662), BUNSPEC);
			}
			BGl_gloza2z12zb0zzintegrate_nodez00(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_2560)))->BgL_argsz00),
				BgL_integratorz00_2561);
			return ((BgL_nodez00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_2560));
		}

	}



/* &glo!-app-ly1324 */
	BgL_nodez00_bglt BGl_z62gloz12zd2appzd2ly1324z70zzintegrate_nodez00(obj_t
		BgL_envz00_2562, obj_t BgL_nodez00_2563, obj_t BgL_integratorz00_2564)
	{
		{	/* Integrate/node.scm 251 */
			{
				BgL_nodez00_bglt BgL_auxz00_3674;

				{	/* Integrate/node.scm 253 */
					BgL_nodez00_bglt BgL_arg1669z00_2719;

					BgL_arg1669z00_2719 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2563)))->BgL_funz00);
					BgL_auxz00_3674 =
						BGl_gloz12z12zzintegrate_nodez00(BgL_arg1669z00_2719,
						((BgL_variablez00_bglt) BgL_integratorz00_2564));
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2563)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3674), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3681;

				{	/* Integrate/node.scm 254 */
					BgL_nodez00_bglt BgL_arg1672z00_2720;

					BgL_arg1672z00_2720 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2563)))->BgL_argz00);
					BgL_auxz00_3681 =
						BGl_gloz12z12zzintegrate_nodez00(BgL_arg1672z00_2720,
						((BgL_variablez00_bglt) BgL_integratorz00_2564));
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2563)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3681), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2563));
		}

	}



/* &glo!-app1322 */
	BgL_nodez00_bglt BGl_z62gloz12zd2app1322za2zzintegrate_nodez00(obj_t
		BgL_envz00_2565, obj_t BgL_nodez00_2566, obj_t BgL_integratorz00_2567)
	{
		{	/* Integrate/node.scm 211 */
			{	/* Integrate/node.scm 213 */
				BgL_variablez00_bglt BgL_funz00_2722;

				BgL_funz00_2722 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt) BgL_nodez00_2566)))->BgL_funz00)))->
					BgL_variablez00);
				{	/* Integrate/node.scm 213 */
					BgL_valuez00_bglt BgL_infoz00_2723;

					BgL_infoz00_2723 =
						(((BgL_variablez00_bglt) COBJECT(BgL_funz00_2722))->BgL_valuez00);
					{	/* Integrate/node.scm 214 */

						{	/* Integrate/node.scm 216 */
							bool_t BgL_test2083z00_3694;

							{	/* Integrate/node.scm 216 */
								bool_t BgL_test2084z00_3695;

								{	/* Integrate/node.scm 216 */
									bool_t BgL_res1951z00_2724;

									BgL_res1951z00_2724 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_funz00_2722), BGl_localz00zzast_varz00);
									BgL_test2084z00_3695 = BgL_res1951z00_2724;
								}
								if (BgL_test2084z00_3695)
									{
										BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3698;

										{
											obj_t BgL_auxz00_3699;

											{	/* Integrate/node.scm 216 */
												BgL_objectz00_bglt BgL_tmpz00_3700;

												BgL_tmpz00_3700 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_infoz00_2723));
												BgL_auxz00_3699 = BGL_OBJECT_WIDENING(BgL_tmpz00_3700);
											}
											BgL_auxz00_3698 =
												((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3699);
										}
										BgL_test2083z00_3694 =
											(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3698))->
											BgL_gzf3zf3);
									}
								else
									{	/* Integrate/node.scm 216 */
										BgL_test2083z00_3694 = ((bool_t) 0);
									}
							}
							if (BgL_test2083z00_3694)
								{	/* Integrate/node.scm 218 */
									BgL_varz00_bglt BgL_arg1611z00_2725;

									{	/* Integrate/node.scm 218 */
										BgL_varz00_bglt BgL_new1131z00_2726;

										{	/* Integrate/node.scm 219 */
											BgL_varz00_bglt BgL_new1130z00_2727;

											BgL_new1130z00_2727 =
												((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_varz00_bgl))));
											{	/* Integrate/node.scm 219 */
												long BgL_arg1613z00_2728;

												{	/* Integrate/node.scm 219 */
													long BgL_res1953z00_2729;

													BgL_res1953z00_2729 =
														BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
													BgL_arg1613z00_2728 = BgL_res1953z00_2729;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1130z00_2727),
													BgL_arg1613z00_2728);
											}
											BgL_new1131z00_2726 = BgL_new1130z00_2727;
										}
										((((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_new1131z00_2726)))->
												BgL_locz00) =
											((obj_t) (((BgL_nodez00_bglt)
														COBJECT(((BgL_nodez00_bglt) ((BgL_appz00_bglt)
																	BgL_nodez00_2566))))->BgL_locz00)), BUNSPEC);
										{
											BgL_typez00_bglt BgL_auxz00_3715;

											{	/* Integrate/node.scm 220 */
												obj_t BgL_arg1612z00_2730;

												BgL_arg1612z00_2730 =
													BGl_thezd2globalzd2zzintegrate_localzd2ze3globalz31(
													((BgL_localz00_bglt) BgL_funz00_2722));
												BgL_auxz00_3715 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt) BgL_arg1612z00_2730)))->
													BgL_typez00);
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1131z00_2726)))->
													BgL_typez00) =
												((BgL_typez00_bglt) BgL_auxz00_3715), BUNSPEC);
										}
										((((BgL_varz00_bglt) COBJECT(BgL_new1131z00_2726))->
												BgL_variablez00) =
											((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
													BGl_thezd2globalzd2zzintegrate_localzd2ze3globalz31((
															(BgL_localz00_bglt) BgL_funz00_2722)))), BUNSPEC);
										BgL_arg1611z00_2725 = BgL_new1131z00_2726;
									}
									((((BgL_appz00_bglt) COBJECT(
													((BgL_appz00_bglt) BgL_nodez00_2566)))->BgL_funz00) =
										((BgL_varz00_bglt) BgL_arg1611z00_2725), BUNSPEC);
								}
							else
								{	/* Integrate/node.scm 216 */
									BFALSE;
								}
						}
						{
							obj_t BgL_nodesz00_2732;

							BgL_nodesz00_2732 =
								(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt) BgL_nodez00_2566)))->BgL_argsz00);
						BgL_liipz00_2731:
							if (NULLP(BgL_nodesz00_2732))
								{	/* Integrate/node.scm 225 */
									CNST_TABLE_REF(((long) 2));
								}
							else
								{	/* Integrate/node.scm 225 */
									{	/* Integrate/node.scm 228 */
										BgL_nodez00_bglt BgL_arg1627z00_2733;

										{	/* Integrate/node.scm 228 */
											obj_t BgL_arg1631z00_2734;

											BgL_arg1631z00_2734 = CAR(((obj_t) BgL_nodesz00_2732));
											BgL_arg1627z00_2733 =
												BGl_gloz12z12zzintegrate_nodez00(
												((BgL_nodez00_bglt) BgL_arg1631z00_2734),
												((BgL_variablez00_bglt) BgL_integratorz00_2567));
										}
										{	/* Integrate/node.scm 228 */
											obj_t BgL_auxz00_3738;
											obj_t BgL_tmpz00_3736;

											BgL_auxz00_3738 = ((obj_t) BgL_arg1627z00_2733);
											BgL_tmpz00_3736 = ((obj_t) BgL_nodesz00_2732);
											SET_CAR(BgL_tmpz00_3736, BgL_auxz00_3738);
										}
									}
									{	/* Integrate/node.scm 229 */
										obj_t BgL_arg1634z00_2735;

										BgL_arg1634z00_2735 = CDR(((obj_t) BgL_nodesz00_2732));
										{
											obj_t BgL_nodesz00_3743;

											BgL_nodesz00_3743 = BgL_arg1634z00_2735;
											BgL_nodesz00_2732 = BgL_nodesz00_3743;
											goto BgL_liipz00_2731;
										}
									}
								}
						}
						{	/* Integrate/node.scm 230 */
							bool_t BgL_test2086z00_3746;

							{	/* Integrate/node.scm 230 */
								bool_t BgL_test2087z00_3747;

								{	/* Integrate/node.scm 230 */
									bool_t BgL_res1955z00_2736;

									BgL_res1955z00_2736 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_funz00_2722), BGl_globalz00zzast_varz00);
									BgL_test2087z00_3747 = BgL_res1955z00_2736;
								}
								if (BgL_test2087z00_3747)
									{	/* Integrate/node.scm 230 */
										BgL_test2086z00_3746 = ((bool_t) 1);
									}
								else
									{	/* Integrate/node.scm 230 */
										bool_t BgL_test2088z00_3750;

										{
											BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3751;

											{
												obj_t BgL_auxz00_3752;

												{	/* Integrate/node.scm 230 */
													BgL_objectz00_bglt BgL_tmpz00_3753;

													BgL_tmpz00_3753 =
														((BgL_objectz00_bglt)
														((BgL_sfunz00_bglt) BgL_infoz00_2723));
													BgL_auxz00_3752 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_3753);
												}
												BgL_auxz00_3751 =
													((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3752);
											}
											BgL_test2088z00_3750 =
												(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3751))->
												BgL_gzf3zf3);
										}
										if (BgL_test2088z00_3750)
											{	/* Integrate/node.scm 230 */
												BgL_test2086z00_3746 = ((bool_t) 0);
											}
										else
											{	/* Integrate/node.scm 230 */
												BgL_test2086z00_3746 = ((bool_t) 1);
											}
									}
							}
							if (BgL_test2086z00_3746)
								{	/* Integrate/node.scm 230 */
									BFALSE;
								}
							else
								{	/* Integrate/node.scm 233 */
									obj_t BgL_g1132z00_2737;

									{
										BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3759;

										{
											obj_t BgL_auxz00_3760;

											{	/* Integrate/node.scm 234 */
												BgL_objectz00_bglt BgL_tmpz00_3761;

												BgL_tmpz00_3761 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_infoz00_2723));
												BgL_auxz00_3760 = BGL_OBJECT_WIDENING(BgL_tmpz00_3761);
											}
											BgL_auxz00_3759 =
												((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3760);
										}
										BgL_g1132z00_2737 =
											(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3759))->
											BgL_kapturedz00);
									}
									{
										obj_t BgL_newzd2actualszd2_2739;
										obj_t BgL_kapturedz00_2740;

										BgL_newzd2actualszd2_2739 =
											(((BgL_appz00_bglt) COBJECT(
													((BgL_appz00_bglt) BgL_nodez00_2566)))->BgL_argsz00);
										BgL_kapturedz00_2740 = BgL_g1132z00_2737;
									BgL_loopz00_2738:
										if (NULLP(BgL_kapturedz00_2740))
											{	/* Integrate/node.scm 235 */
												((((BgL_appz00_bglt) COBJECT(
																((BgL_appz00_bglt) BgL_nodez00_2566)))->
														BgL_argsz00) =
													((obj_t) BgL_newzd2actualszd2_2739), BUNSPEC);
											}
										else
											{	/* Integrate/node.scm 237 */
												obj_t BgL_kapz00_2741;

												BgL_kapz00_2741 = CAR(((obj_t) BgL_kapturedz00_2740));
												{	/* Integrate/node.scm 237 */
													obj_t BgL_alphaz00_2742;

													BgL_alphaz00_2742 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt) BgL_kapz00_2741))))->
														BgL_fastzd2alphazd2);
													{	/* Integrate/node.scm 238 */
														obj_t BgL_varz00_2743;

														if (BGl_isazf3zf3zz__objectz00(BgL_alphaz00_2742,
																BGl_localz00zzast_varz00))
															{	/* Integrate/node.scm 239 */
																BgL_varz00_2743 = BgL_alphaz00_2742;
															}
														else
															{	/* Integrate/node.scm 239 */
																BgL_varz00_2743 = BgL_kapz00_2741;
															}
														{	/* Integrate/node.scm 239 */

															{	/* Integrate/node.scm 240 */
																obj_t BgL_arg1644z00_2744;
																obj_t BgL_arg1652z00_2745;

																{	/* Integrate/node.scm 240 */
																	BgL_varz00_bglt BgL_arg1662z00_2746;

																	{	/* Integrate/node.scm 240 */
																		BgL_varz00_bglt BgL_new1134z00_2747;

																		{	/* Integrate/node.scm 243 */
																			BgL_varz00_bglt BgL_new1133z00_2748;

																			BgL_new1133z00_2748 =
																				((BgL_varz00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_varz00_bgl))));
																			{	/* Integrate/node.scm 243 */
																				long BgL_arg1663z00_2749;

																				{	/* Integrate/node.scm 243 */
																					long BgL_res1958z00_2750;

																					BgL_res1958z00_2750 =
																						BGL_CLASS_INDEX
																						(BGl_varz00zzast_nodez00);
																					BgL_arg1663z00_2749 =
																						BgL_res1958z00_2750;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1133z00_2748),
																					BgL_arg1663z00_2749);
																			}
																			BgL_new1134z00_2747 = BgL_new1133z00_2748;
																		}
																		((((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							BgL_new1134z00_2747)))->
																				BgL_locz00) =
																			((obj_t) (((BgL_nodez00_bglt)
																						COBJECT(((BgL_nodez00_bglt) (
																									(BgL_appz00_bglt)
																									BgL_nodez00_2566))))->
																					BgL_locz00)), BUNSPEC);
																		((((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt)
																							BgL_new1134z00_2747)))->
																				BgL_typez00) =
																			((BgL_typez00_bglt) ((
																						(BgL_variablez00_bglt)
																						COBJECT(((BgL_variablez00_bglt)
																								BgL_varz00_2743)))->
																					BgL_typez00)), BUNSPEC);
																		((((BgL_varz00_bglt)
																					COBJECT(BgL_new1134z00_2747))->
																				BgL_variablez00) =
																			((BgL_variablez00_bglt) (
																					(BgL_variablez00_bglt)
																					BgL_varz00_2743)), BUNSPEC);
																		BgL_arg1662z00_2746 = BgL_new1134z00_2747;
																	}
																	BgL_arg1644z00_2744 =
																		MAKE_YOUNG_PAIR(
																		((obj_t) BgL_arg1662z00_2746),
																		BgL_newzd2actualszd2_2739);
																}
																BgL_arg1652z00_2745 =
																	CDR(((obj_t) BgL_kapturedz00_2740));
																{
																	obj_t BgL_kapturedz00_3798;
																	obj_t BgL_newzd2actualszd2_3797;

																	BgL_newzd2actualszd2_3797 =
																		BgL_arg1644z00_2744;
																	BgL_kapturedz00_3798 = BgL_arg1652z00_2745;
																	BgL_kapturedz00_2740 = BgL_kapturedz00_3798;
																	BgL_newzd2actualszd2_2739 =
																		BgL_newzd2actualszd2_3797;
																	goto BgL_loopz00_2738;
																}
															}
														}
													}
												}
											}
									}
								}
						}
						return ((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_2566));
					}
				}
			}
		}

	}



/* &glo!-sync1320 */
	BgL_nodez00_bglt BGl_z62gloz12zd2sync1320za2zzintegrate_nodez00(obj_t
		BgL_envz00_2568, obj_t BgL_nodez00_2569, obj_t BgL_integratorz00_2570)
	{
		{	/* Integrate/node.scm 201 */
			{
				BgL_nodez00_bglt BgL_auxz00_3803;

				{	/* Integrate/node.scm 203 */
					BgL_nodez00_bglt BgL_arg1599z00_2752;

					BgL_arg1599z00_2752 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2569)))->BgL_mutexz00);
					BgL_auxz00_3803 =
						BGl_gloz12z12zzintegrate_nodez00(BgL_arg1599z00_2752,
						((BgL_variablez00_bglt) BgL_integratorz00_2570));
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2569)))->BgL_mutexz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3803), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3810;

				{	/* Integrate/node.scm 204 */
					BgL_nodez00_bglt BgL_arg1604z00_2753;

					BgL_arg1604z00_2753 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2569)))->BgL_prelockz00);
					BgL_auxz00_3810 =
						BGl_gloz12z12zzintegrate_nodez00(BgL_arg1604z00_2753,
						((BgL_variablez00_bglt) BgL_integratorz00_2570));
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2569)))->BgL_prelockz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3810), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3817;

				{	/* Integrate/node.scm 205 */
					BgL_nodez00_bglt BgL_arg1605z00_2754;

					BgL_arg1605z00_2754 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2569)))->BgL_bodyz00);
					BgL_auxz00_3817 =
						BGl_gloz12z12zzintegrate_nodez00(BgL_arg1605z00_2754,
						((BgL_variablez00_bglt) BgL_integratorz00_2570));
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2569)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3817), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_2569));
		}

	}



/* &glo!-sequence1318 */
	BgL_nodez00_bglt BGl_z62gloz12zd2sequence1318za2zzintegrate_nodez00(obj_t
		BgL_envz00_2571, obj_t BgL_nodez00_2572, obj_t BgL_integratorz00_2573)
	{
		{	/* Integrate/node.scm 193 */
			BGl_gloza2z12zb0zzintegrate_nodez00(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2572)))->BgL_nodesz00),
				BgL_integratorz00_2573);
			return ((BgL_nodez00_bglt) ((BgL_sequencez00_bglt) BgL_nodez00_2572));
		}

	}



/* &glo!-closure1316 */
	BgL_nodez00_bglt BGl_z62gloz12zd2closure1316za2zzintegrate_nodez00(obj_t
		BgL_envz00_2574, obj_t BgL_nodez00_2575, obj_t BgL_integratorz00_2576)
	{
		{	/* Integrate/node.scm 187 */
			{	/* Integrate/node.scm 188 */
				obj_t BgL_arg1593z00_2757;

				BgL_arg1593z00_2757 =
					BGl_shapez00zztools_shapez00(
					((obj_t) ((BgL_closurez00_bglt) BgL_nodez00_2575)));
				return
					((BgL_nodez00_bglt)
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string2007z00zzintegrate_nodez00,
						BGl_string2008z00zzintegrate_nodez00, BgL_arg1593z00_2757));
			}
		}

	}



/* &glo!-var1314 */
	BgL_nodez00_bglt BGl_z62gloz12zd2var1314za2zzintegrate_nodez00(obj_t
		BgL_envz00_2577, obj_t BgL_nodez00_2578, obj_t BgL_integratorz00_2579)
	{
		{	/* Integrate/node.scm 158 */
			{	/* Integrate/node.scm 159 */
				BgL_variablez00_bglt BgL_variablez00_2759;

				BgL_variablez00_2759 =
					(((BgL_varz00_bglt) COBJECT(
							((BgL_varz00_bglt) BgL_nodez00_2578)))->BgL_variablez00);
				{	/* Integrate/node.scm 159 */
					BgL_typez00_bglt BgL_vtypez00_2760;

					BgL_vtypez00_2760 =
						(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_2759))->
						BgL_typez00);
					{	/* Integrate/node.scm 160 */

						{
							BgL_variablez00_bglt BgL_variablez00_2762;

							BgL_variablez00_2762 = BgL_variablez00_2759;
						BgL_loopz00_2761:
							{	/* Integrate/node.scm 162 */
								obj_t BgL_alphaz00_2763;

								BgL_alphaz00_2763 =
									(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_2762))->
									BgL_fastzd2alphazd2);
								if (BGl_isazf3zf3zz__objectz00(BgL_alphaz00_2763,
										BGl_localz00zzast_varz00))
									{	/* Integrate/node.scm 164 */
										((((BgL_varz00_bglt) COBJECT(
														((BgL_varz00_bglt) BgL_nodez00_2578)))->
												BgL_variablez00) =
											((BgL_variablez00_bglt) ((BgL_variablez00_bglt) (
														(BgL_localz00_bglt) BgL_alphaz00_2763))), BUNSPEC);
										{	/* Integrate/node.scm 166 */
											BgL_typez00_bglt BgL_arg1588z00_2764;

											BgL_arg1588z00_2764 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt) BgL_alphaz00_2763))))->
												BgL_typez00);
											((((BgL_nodez00_bglt)
														COBJECT(((BgL_nodez00_bglt) ((BgL_varz00_bglt)
																	BgL_nodez00_2578))))->BgL_typez00) =
												((BgL_typez00_bglt) BgL_arg1588z00_2764), BUNSPEC);
										}
										{
											BgL_variablez00_bglt BgL_variablez00_3852;

											BgL_variablez00_3852 =
												((BgL_variablez00_bglt)
												((BgL_localz00_bglt) BgL_alphaz00_2763));
											BgL_variablez00_2762 = BgL_variablez00_3852;
											goto BgL_loopz00_2761;
										}
									}
								else
									{	/* Integrate/node.scm 168 */
										bool_t BgL_test2092z00_3855;

										{	/* Integrate/node.scm 168 */
											bool_t BgL_res1948z00_2765;

											BgL_res1948z00_2765 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_variablez00_2762),
												BGl_globalz00zzast_varz00);
											BgL_test2092z00_3855 = BgL_res1948z00_2765;
										}
										if (BgL_test2092z00_3855)
											{	/* Integrate/node.scm 168 */
												return
													((BgL_nodez00_bglt)
													((BgL_varz00_bglt) BgL_nodez00_2578));
											}
										else
											{	/* Integrate/node.scm 168 */
												if (BGl_integratezd2celledzf3z21zzintegrate_nodez00(
														((BgL_localz00_bglt) BgL_variablez00_2762)))
													{	/* Integrate/node.scm 172 */
														BgL_typez00_bglt BgL_vtypez00_2766;

														BgL_vtypez00_2766 =
															BGl_getzd2bigloozd2typez00zztype_cachez00
															(BgL_vtypez00_2760);
														{	/* Integrate/node.scm 174 */
															BgL_typez00_bglt BgL_vz00_2767;

															BgL_vz00_2767 =
																((BgL_typez00_bglt)
																BGl_za2cellza2z00zztype_cachez00);
															((((BgL_nodez00_bglt)
																		COBJECT(((BgL_nodez00_bglt) (
																					(BgL_varz00_bglt)
																					BgL_nodez00_2578))))->BgL_typez00) =
																((BgL_typez00_bglt) BgL_vz00_2767), BUNSPEC);
														}
														{	/* Integrate/node.scm 175 */
															BgL_boxzd2refzd2_bglt BgL_new1125z00_2768;

															{	/* Integrate/node.scm 176 */
																BgL_boxzd2refzd2_bglt BgL_new1123z00_2769;

																BgL_new1123z00_2769 =
																	((BgL_boxzd2refzd2_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_boxzd2refzd2_bgl))));
																{	/* Integrate/node.scm 176 */
																	long BgL_arg1592z00_2770;

																	{	/* Integrate/node.scm 176 */
																		long BgL_res1949z00_2771;

																		BgL_res1949z00_2771 =
																			BGL_CLASS_INDEX
																			(BGl_boxzd2refzd2zzast_nodez00);
																		BgL_arg1592z00_2770 = BgL_res1949z00_2771;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1123z00_2769),
																		BgL_arg1592z00_2770);
																}
																{	/* Integrate/node.scm 176 */
																	BgL_objectz00_bglt BgL_tmpz00_3872;

																	BgL_tmpz00_3872 =
																		((BgL_objectz00_bglt) BgL_new1123z00_2769);
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3872,
																		BFALSE);
																}
																((BgL_objectz00_bglt) BgL_new1123z00_2769);
																BgL_new1125z00_2768 = BgL_new1123z00_2769;
															}
															((((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt)
																				BgL_new1125z00_2768)))->BgL_locz00) =
																((obj_t) (((BgL_nodez00_bglt)
																			COBJECT(((BgL_nodez00_bglt) (
																						(BgL_varz00_bglt)
																						BgL_nodez00_2578))))->BgL_locz00)),
																BUNSPEC);
															((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																				BgL_new1125z00_2768)))->BgL_typez00) =
																((BgL_typez00_bglt) BgL_vtypez00_2766),
																BUNSPEC);
															((((BgL_nodezf2effectzf2_bglt)
																		COBJECT(((BgL_nodezf2effectzf2_bglt)
																				BgL_new1125z00_2768)))->
																	BgL_sidezd2effectzd2) =
																((obj_t) BUNSPEC), BUNSPEC);
															((((BgL_nodezf2effectzf2_bglt)
																		COBJECT(((BgL_nodezf2effectzf2_bglt)
																				BgL_new1125z00_2768)))->BgL_keyz00) =
																((obj_t) BINT(((long) -1))), BUNSPEC);
															((((BgL_boxzd2refzd2_bglt)
																		COBJECT(BgL_new1125z00_2768))->BgL_varz00) =
																((BgL_varz00_bglt) ((BgL_varz00_bglt)
																		BgL_nodez00_2578)), BUNSPEC);
															((((BgL_boxzd2refzd2_bglt)
																		COBJECT(BgL_new1125z00_2768))->
																	BgL_vtypez00) =
																((BgL_typez00_bglt) BgL_vtypez00_2766),
																BUNSPEC);
															return ((BgL_nodez00_bglt) BgL_new1125z00_2768);
														}
													}
												else
													{	/* Integrate/node.scm 170 */
														return
															((BgL_nodez00_bglt)
															((BgL_varz00_bglt) BgL_nodez00_2578));
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



/* &glo!-kwote1312 */
	BgL_nodez00_bglt BGl_z62gloz12zd2kwote1312za2zzintegrate_nodez00(obj_t
		BgL_envz00_2580, obj_t BgL_nodez00_2581, obj_t BgL_integratorz00_2582)
	{
		{	/* Integrate/node.scm 152 */
			return ((BgL_nodez00_bglt) ((BgL_kwotez00_bglt) BgL_nodez00_2581));
		}

	}



/* &glo!-atom1310 */
	BgL_nodez00_bglt BGl_z62gloz12zd2atom1310za2zzintegrate_nodez00(obj_t
		BgL_envz00_2583, obj_t BgL_nodez00_2584, obj_t BgL_integratorz00_2585)
	{
		{	/* Integrate/node.scm 146 */
			return ((BgL_nodez00_bglt) ((BgL_atomz00_bglt) BgL_nodez00_2584));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_nodez00()
	{
		{	/* Integrate/node.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2009z00zzintegrate_nodez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2009z00zzintegrate_nodez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2009z00zzintegrate_nodez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2009z00zzintegrate_nodez00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string2009z00zzintegrate_nodez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2009z00zzintegrate_nodez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2009z00zzintegrate_nodez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2009z00zzintegrate_nodez00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string2009z00zzintegrate_nodez00));
			BGl_modulezd2initializa7ationz75zzintegrate_infoz00(((long) 0),
				BSTRING_TO_STRING(BGl_string2009z00zzintegrate_nodez00));
			return
				BGl_modulezd2initializa7ationz75zzintegrate_localzd2ze3globalz31(((long)
					143977821), BSTRING_TO_STRING(BGl_string2009z00zzintegrate_nodez00));
		}

	}

#ifdef __cplusplus
}
#endif
