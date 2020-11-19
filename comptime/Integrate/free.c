/*===========================================================================*/
/*   (Integrate/free.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/free.scm) */
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


	static obj_t BGl_z62nodezd2freezd2fail1291z62zzintegrate_freez00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62nodezd2freezd2boxzd2setz121307za2zzintegrate_freez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2freezd2makezd2box1303zb0zzintegrate_freez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_nodezd2freeza2z70zzintegrate_freez00(obj_t, obj_t);
	static obj_t BGl_za2integratorza2z00zzintegrate_freez00 = BUNSPEC;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_z62nodezd2freezb0zzintegrate_freez00(obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzintegrate_freez00();
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t
		BGl_z62nodezd2freezd2jumpzd2exzd2it1301z62zzintegrate_freez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_nodezd2freezd2zzintegrate_freez00(BgL_nodez00_bglt, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzintegrate_freez00();
	extern obj_t BGl_externz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62nodezd2freezd2sequence1273z62zzintegrate_freez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2freezd2funcall1281z62zzintegrate_freez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t
		BGl_internalzd2getzd2freezd2varsz12zc0zzintegrate_freez00(BgL_nodez00_bglt,
		BgL_localz00_bglt);
	static obj_t BGl_gczd2rootszd2initz00zzintegrate_freez00();
	static obj_t BGl_z62nodezd2freezd2app1277z62zzintegrate_freez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2free1265zb0zzintegrate_freez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2freezd2cast1285z62zzintegrate_freez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_z62nodezd2freezd2switch1293z62zzintegrate_freez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2freezd2setq1287z62zzintegrate_freez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_freez00 = BUNSPEC;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzintegrate_freez00();
	static obj_t BGl_z62nodezd2freezd2conditiona1289z62zzintegrate_freez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzintegrate_freez00();
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2freezd2varsz00zzintegrate_freez00(BgL_nodez00_bglt,
		BgL_localz00_bglt);
	static obj_t BGl_z62nodezd2freezd2letzd2fun1295zb0zzintegrate_freez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62freezd2fromzb0zzintegrate_freez00(obj_t, obj_t, obj_t);
	static obj_t BGl_bindzd2variablez12zc0zzintegrate_freez00(BgL_localz00_bglt,
		BgL_localz00_bglt);
	static obj_t BGl_markzd2variablez12zc0zzintegrate_freez00(BgL_localz00_bglt);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_z62nodezd2freezd2boxzd2ref1305zb0zzintegrate_freez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_freezd2fromzd2zzintegrate_freez00(obj_t,
		BgL_localz00_bglt);
	extern obj_t BGl_sexitzf2Iinfozf2zzintegrate_infoz00;
	static long BGl_za2roundza2z00zzintegrate_freez00;
	static obj_t BGl_z62nodezd2freezd2var1268z62zzintegrate_freez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	extern obj_t BGl_svarzf2Iinfozf2zzintegrate_infoz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_freez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_nodez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_freezd2variablezf3z21zzintegrate_freez00(obj_t);
	static obj_t BGl_z62nodezd2freezd2letzd2var1297zb0zzintegrate_freez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t
		BGl_z62nodezd2freezd2setzd2exzd2it1299z62zzintegrate_freez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_z62nodezd2freezd2closure1270z62zzintegrate_freez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_freez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_freez00();
	static obj_t BGl_z62nodezd2freezd2appzd2ly1279zb0zzintegrate_freez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	static obj_t BGl_z62getzd2freezd2varsz62zzintegrate_freez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2freezd2extern1283z62zzintegrate_freez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_z62nodezd2freezd2sync1275z62zzintegrate_freez00(obj_t, obj_t,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string1859z00zzintegrate_freez00,
		BgL_bgl_string1859za700za7za7i1886za7, "free-variable?", 14);
	      DEFINE_STRING(BGl_string1860z00zzintegrate_freez00,
		BgL_bgl_string1860za700za7za7i1887za7, "Unknown variable type", 21);
	      DEFINE_STRING(BGl_string1862z00zzintegrate_freez00,
		BgL_bgl_string1862za700za7za7i1888za7, "node-free1265", 13);
	      DEFINE_STRING(BGl_string1864z00zzintegrate_freez00,
		BgL_bgl_string1864za700za7za7i1889za7, "node-free", 9);
	      DEFINE_STRING(BGl_string1884z00zzintegrate_freez00,
		BgL_bgl_string1884za700za7za7i1890za7, "Unexepected `closure' node", 26);
	      DEFINE_STRING(BGl_string1885z00zzintegrate_freez00,
		BgL_bgl_string1885za700za7za7i1891za7, "integrate_free", 14);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_freezd2fromzd2envz00zzintegrate_freez00,
		BgL_bgl_za762freeza7d2fromza7b1892za7,
		BGl_z62freezd2fromzb0zzintegrate_freez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2freezd2varszd2envzd2zzintegrate_freez00,
		BgL_bgl_za762getza7d2freeza7d21893za7,
		BGl_z62getzd2freezd2varsz62zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1861z00zzintegrate_freez00,
		BgL_bgl_za762nodeza7d2free121894z00,
		BGl_z62nodezd2free1265zb0zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1863z00zzintegrate_freez00,
		BgL_bgl_za762nodeza7d2freeza7d1895za7,
		BGl_z62nodezd2freezd2var1268z62zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1865z00zzintegrate_freez00,
		BgL_bgl_za762nodeza7d2freeza7d1896za7,
		BGl_z62nodezd2freezd2closure1270z62zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1866z00zzintegrate_freez00,
		BgL_bgl_za762nodeza7d2freeza7d1897za7,
		BGl_z62nodezd2freezd2sequence1273z62zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1867z00zzintegrate_freez00,
		BgL_bgl_za762nodeza7d2freeza7d1898za7,
		BGl_z62nodezd2freezd2sync1275z62zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1868z00zzintegrate_freez00,
		BgL_bgl_za762nodeza7d2freeza7d1899za7,
		BGl_z62nodezd2freezd2app1277z62zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1869z00zzintegrate_freez00,
		BgL_bgl_za762nodeza7d2freeza7d1900za7,
		BGl_z62nodezd2freezd2appzd2ly1279zb0zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1870z00zzintegrate_freez00,
		BgL_bgl_za762nodeza7d2freeza7d1901za7,
		BGl_z62nodezd2freezd2funcall1281z62zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1871z00zzintegrate_freez00,
		BgL_bgl_za762nodeza7d2freeza7d1902za7,
		BGl_z62nodezd2freezd2extern1283z62zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1872z00zzintegrate_freez00,
		BgL_bgl_za762nodeza7d2freeza7d1903za7,
		BGl_z62nodezd2freezd2cast1285z62zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1873z00zzintegrate_freez00,
		BgL_bgl_za762nodeza7d2freeza7d1904za7,
		BGl_z62nodezd2freezd2setq1287z62zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1874z00zzintegrate_freez00,
		BgL_bgl_za762nodeza7d2freeza7d1905za7,
		BGl_z62nodezd2freezd2conditiona1289z62zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1875z00zzintegrate_freez00,
		BgL_bgl_za762nodeza7d2freeza7d1906za7,
		BGl_z62nodezd2freezd2fail1291z62zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1876z00zzintegrate_freez00,
		BgL_bgl_za762nodeza7d2freeza7d1907za7,
		BGl_z62nodezd2freezd2switch1293z62zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1877z00zzintegrate_freez00,
		BgL_bgl_za762nodeza7d2freeza7d1908za7,
		BGl_z62nodezd2freezd2letzd2fun1295zb0zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1878z00zzintegrate_freez00,
		BgL_bgl_za762nodeza7d2freeza7d1909za7,
		BGl_z62nodezd2freezd2letzd2var1297zb0zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1879z00zzintegrate_freez00,
		BgL_bgl_za762nodeza7d2freeza7d1910za7,
		BGl_z62nodezd2freezd2setzd2exzd2it1299z62zzintegrate_freez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1880z00zzintegrate_freez00,
		BgL_bgl_za762nodeza7d2freeza7d1911za7,
		BGl_z62nodezd2freezd2jumpzd2exzd2it1301z62zzintegrate_freez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1881z00zzintegrate_freez00,
		BgL_bgl_za762nodeza7d2freeza7d1912za7,
		BGl_z62nodezd2freezd2makezd2box1303zb0zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1882z00zzintegrate_freez00,
		BgL_bgl_za762nodeza7d2freeza7d1913za7,
		BGl_z62nodezd2freezd2boxzd2ref1305zb0zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1883z00zzintegrate_freez00,
		BgL_bgl_za762nodeza7d2freeza7d1914za7,
		BGl_z62nodezd2freezd2boxzd2setz121307za2zzintegrate_freez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_GENERIC(BGl_nodezd2freezd2envz00zzintegrate_freez00,
		BgL_bgl_za762nodeza7d2freeza7b1915za7,
		BGl_z62nodezd2freezb0zzintegrate_freez00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2integratorza2z00zzintegrate_freez00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzintegrate_freez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_freez00(long
		BgL_checksumz00_2359, char *BgL_fromz00_2360)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_freez00))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_freez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzintegrate_freez00();
					BGl_libraryzd2moduleszd2initz00zzintegrate_freez00();
					BGl_importedzd2moduleszd2initz00zzintegrate_freez00();
					BGl_genericzd2initzd2zzintegrate_freez00();
					BGl_methodzd2initzd2zzintegrate_freez00();
					return BGl_toplevelzd2initzd2zzintegrate_freez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_freez00()
	{
		{	/* Integrate/free.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"integrate_free");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"integrate_free");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"integrate_free");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "integrate_free");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"integrate_free");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"integrate_free");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"integrate_free");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzintegrate_freez00()
	{
		{	/* Integrate/free.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzintegrate_freez00()
	{
		{	/* Integrate/free.scm 15 */
			BGl_za2roundza2z00zzintegrate_freez00 = ((long) 0);
			BGl_za2integratorza2z00zzintegrate_freez00 = BUNSPEC;
			return BUNSPEC;
		}

	}



/* mark-variable! */
	obj_t BGl_markzd2variablez12zc0zzintegrate_freez00(BgL_localz00_bglt
		BgL_localz00_3)
	{
		{	/* Integrate/free.scm 41 */
			{	/* Integrate/free.scm 42 */
				BgL_valuez00_bglt BgL_infoz00_1569;

				BgL_infoz00_1569 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_localz00_3)))->BgL_valuez00);
				{	/* Integrate/free.scm 44 */
					bool_t BgL_test1917z00_2380;

					{	/* Integrate/free.scm 44 */
						bool_t BgL_res1827z00_2045;

						BgL_res1827z00_2045 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_infoz00_1569),
							BGl_svarzf2Iinfozf2zzintegrate_infoz00);
						BgL_test1917z00_2380 = BgL_res1827z00_2045;
					}
					if (BgL_test1917z00_2380)
						{	/* Integrate/free.scm 45 */
							obj_t BgL_vz00_2047;

							BgL_vz00_2047 = BINT(BGl_za2roundza2z00zzintegrate_freez00);
							{
								BgL_svarzf2iinfozf2_bglt BgL_auxz00_2384;

								{
									obj_t BgL_auxz00_2385;

									{	/* Integrate/free.scm 45 */
										BgL_objectz00_bglt BgL_tmpz00_2386;

										BgL_tmpz00_2386 =
											((BgL_objectz00_bglt)
											((BgL_svarz00_bglt) BgL_infoz00_1569));
										BgL_auxz00_2385 = BGL_OBJECT_WIDENING(BgL_tmpz00_2386);
									}
									BgL_auxz00_2384 =
										((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_2385);
								}
								return
									((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2384))->
										BgL_fzd2markzd2) = ((obj_t) BgL_vz00_2047), BUNSPEC);
							}
						}
					else
						{	/* Integrate/free.scm 46 */
							bool_t BgL_test1918z00_2392;

							{	/* Integrate/free.scm 46 */
								bool_t BgL_res1828z00_2049;

								BgL_res1828z00_2049 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_infoz00_1569),
									BGl_sexitzf2Iinfozf2zzintegrate_infoz00);
								BgL_test1918z00_2392 = BgL_res1828z00_2049;
							}
							if (BgL_test1918z00_2392)
								{	/* Integrate/free.scm 47 */
									obj_t BgL_vz00_2051;

									BgL_vz00_2051 = BINT(BGl_za2roundza2z00zzintegrate_freez00);
									{
										BgL_sexitzf2iinfozf2_bglt BgL_auxz00_2396;

										{
											obj_t BgL_auxz00_2397;

											{	/* Integrate/free.scm 47 */
												BgL_objectz00_bglt BgL_tmpz00_2398;

												BgL_tmpz00_2398 =
													((BgL_objectz00_bglt)
													((BgL_sexitz00_bglt) BgL_infoz00_1569));
												BgL_auxz00_2397 = BGL_OBJECT_WIDENING(BgL_tmpz00_2398);
											}
											BgL_auxz00_2396 =
												((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_2397);
										}
										return
											((((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2396))->
												BgL_fzd2markzd2) = ((obj_t) BgL_vz00_2051), BUNSPEC);
									}
								}
							else
								{	/* Integrate/free.scm 46 */
									return BFALSE;
								}
						}
				}
			}
		}

	}



/* bind-variable! */
	obj_t BGl_bindzd2variablez12zc0zzintegrate_freez00(BgL_localz00_bglt
		BgL_localz00_4, BgL_localz00_bglt BgL_integratorz00_5)
	{
		{	/* Integrate/free.scm 52 */
			{	/* Integrate/free.scm 53 */
				BgL_valuez00_bglt BgL_finfoz00_1572;

				BgL_finfoz00_1572 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_integratorz00_5)))->BgL_valuez00);
				{	/* Integrate/free.scm 54 */
					obj_t BgL_arg1314z00_1573;

					{	/* Integrate/free.scm 54 */
						obj_t BgL_arg1315z00_1574;

						{
							BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2406;

							{
								obj_t BgL_auxz00_2407;

								{	/* Integrate/free.scm 54 */
									BgL_objectz00_bglt BgL_tmpz00_2408;

									BgL_tmpz00_2408 =
										((BgL_objectz00_bglt)
										((BgL_sfunz00_bglt) BgL_finfoz00_1572));
									BgL_auxz00_2407 = BGL_OBJECT_WIDENING(BgL_tmpz00_2408);
								}
								BgL_auxz00_2406 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_2407);
							}
							BgL_arg1315z00_1574 =
								(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2406))->
								BgL_boundz00);
						}
						BgL_arg1314z00_1573 =
							MAKE_YOUNG_PAIR(((obj_t) BgL_localz00_4), BgL_arg1315z00_1574);
					}
					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2416;

						{
							obj_t BgL_auxz00_2417;

							{	/* Integrate/free.scm 54 */
								BgL_objectz00_bglt BgL_tmpz00_2418;

								BgL_tmpz00_2418 =
									((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_finfoz00_1572));
								BgL_auxz00_2417 = BGL_OBJECT_WIDENING(BgL_tmpz00_2418);
							}
							BgL_auxz00_2416 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_2417);
						}
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2416))->
								BgL_boundz00) = ((obj_t) BgL_arg1314z00_1573), BUNSPEC);
					}
				}
				return BGl_markzd2variablez12zc0zzintegrate_freez00(BgL_localz00_4);
			}
		}

	}



/* free-variable? */
	obj_t BGl_freezd2variablezf3z21zzintegrate_freez00(obj_t BgL_localz00_6)
	{
		{	/* Integrate/free.scm 60 */
			{	/* Integrate/free.scm 61 */
				BgL_valuez00_bglt BgL_infoz00_1575;

				BgL_infoz00_1575 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								((BgL_localz00_bglt) BgL_localz00_6))))->BgL_valuez00);
				{	/* Integrate/free.scm 63 */
					bool_t BgL_test1919z00_2428;

					{	/* Integrate/free.scm 63 */
						bool_t BgL_res1829z00_2059;

						BgL_res1829z00_2059 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_infoz00_1575),
							BGl_svarzf2Iinfozf2zzintegrate_infoz00);
						BgL_test1919z00_2428 = BgL_res1829z00_2059;
					}
					if (BgL_test1919z00_2428)
						{	/* Integrate/free.scm 64 */
							bool_t BgL_test1920z00_2431;

							{	/* Integrate/free.scm 64 */
								obj_t BgL_arg1319z00_1579;

								{
									BgL_svarzf2iinfozf2_bglt BgL_auxz00_2432;

									{
										obj_t BgL_auxz00_2433;

										{	/* Integrate/free.scm 64 */
											BgL_objectz00_bglt BgL_tmpz00_2434;

											BgL_tmpz00_2434 =
												((BgL_objectz00_bglt)
												((BgL_svarz00_bglt) BgL_infoz00_1575));
											BgL_auxz00_2433 = BGL_OBJECT_WIDENING(BgL_tmpz00_2434);
										}
										BgL_auxz00_2432 =
											((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_2433);
									}
									BgL_arg1319z00_1579 =
										(((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2432))->
										BgL_fzd2markzd2);
								}
								BgL_test1920z00_2431 =
									(BgL_arg1319z00_1579 ==
									BINT(BGl_za2roundza2z00zzintegrate_freez00));
							}
							if (BgL_test1920z00_2431)
								{	/* Integrate/free.scm 64 */
									return BFALSE;
								}
							else
								{	/* Integrate/free.scm 64 */
									return BTRUE;
								}
						}
					else
						{	/* Integrate/free.scm 65 */
							bool_t BgL_test1921z00_2442;

							{	/* Integrate/free.scm 65 */
								bool_t BgL_res1830z00_2062;

								BgL_res1830z00_2062 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_infoz00_1575),
									BGl_sexitzf2Iinfozf2zzintegrate_infoz00);
								BgL_test1921z00_2442 = BgL_res1830z00_2062;
							}
							if (BgL_test1921z00_2442)
								{	/* Integrate/free.scm 66 */
									bool_t BgL_test1922z00_2445;

									{	/* Integrate/free.scm 66 */
										obj_t BgL_arg1324z00_1583;

										{
											BgL_sexitzf2iinfozf2_bglt BgL_auxz00_2446;

											{
												obj_t BgL_auxz00_2447;

												{	/* Integrate/free.scm 66 */
													BgL_objectz00_bglt BgL_tmpz00_2448;

													BgL_tmpz00_2448 =
														((BgL_objectz00_bglt)
														((BgL_sexitz00_bglt) BgL_infoz00_1575));
													BgL_auxz00_2447 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2448);
												}
												BgL_auxz00_2446 =
													((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_2447);
											}
											BgL_arg1324z00_1583 =
												(((BgL_sexitzf2iinfozf2_bglt)
													COBJECT(BgL_auxz00_2446))->BgL_fzd2markzd2);
										}
										BgL_test1922z00_2445 =
											(BgL_arg1324z00_1583 ==
											BINT(BGl_za2roundza2z00zzintegrate_freez00));
									}
									if (BgL_test1922z00_2445)
										{	/* Integrate/free.scm 66 */
											return BFALSE;
										}
									else
										{	/* Integrate/free.scm 66 */
											return BTRUE;
										}
								}
							else
								{	/* Integrate/free.scm 70 */
									obj_t BgL_arg1325z00_1584;

									BgL_arg1325z00_1584 =
										MAKE_YOUNG_PAIR(BgL_localz00_6,
										BGl_shapez00zztools_shapez00(BgL_localz00_6));
									return
										BGl_errorz00zz__errorz00
										(BGl_string1859z00zzintegrate_freez00,
										BGl_string1860z00zzintegrate_freez00, BgL_arg1325z00_1584);
								}
						}
				}
			}
		}

	}



/* get-free-vars */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2freezd2varsz00zzintegrate_freez00(BgL_nodez00_bglt BgL_nodez00_7,
		BgL_localz00_bglt BgL_integratorz00_8)
	{
		{	/* Integrate/free.scm 78 */
			{	/* Integrate/free.scm 81 */
				obj_t BgL_freez00_1586;

				{	/* Integrate/free.scm 81 */
					BgL_sfunz00_bglt BgL_oz00_2066;

					BgL_oz00_2066 =
						((BgL_sfunz00_bglt)
						(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_integratorz00_8)))->
							BgL_valuez00));
					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2462;

						{
							obj_t BgL_auxz00_2463;

							{	/* Integrate/free.scm 81 */
								BgL_objectz00_bglt BgL_tmpz00_2464;

								BgL_tmpz00_2464 = ((BgL_objectz00_bglt) BgL_oz00_2066);
								BgL_auxz00_2463 = BGL_OBJECT_WIDENING(BgL_tmpz00_2464);
							}
							BgL_auxz00_2462 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_2463);
						}
						BgL_freez00_1586 =
							(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2462))->
							BgL_freez00);
					}
				}
				{	/* Integrate/free.scm 82 */
					bool_t BgL_test1923z00_2469;

					if (NULLP(BgL_freez00_1586))
						{	/* Integrate/free.scm 82 */
							BgL_test1923z00_2469 = ((bool_t) 1);
						}
					else
						{	/* Integrate/free.scm 82 */
							BgL_test1923z00_2469 = PAIRP(BgL_freez00_1586);
						}
					if (BgL_test1923z00_2469)
						{	/* Integrate/free.scm 82 */
							return BgL_freez00_1586;
						}
					else
						{	/* Integrate/free.scm 84 */
							obj_t BgL_freez00_1589;

							BgL_freez00_1589 =
								BGl_internalzd2getzd2freezd2varsz12zc0zzintegrate_freez00
								(BgL_nodez00_7, BgL_integratorz00_8);
							{	/* Integrate/free.scm 85 */
								BgL_valuez00_bglt BgL_arg1329z00_1590;

								BgL_arg1329z00_1590 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_integratorz00_8)))->
									BgL_valuez00);
								{
									BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2476;

									{
										obj_t BgL_auxz00_2477;

										{	/* Integrate/free.scm 85 */
											BgL_objectz00_bglt BgL_tmpz00_2478;

											BgL_tmpz00_2478 =
												((BgL_objectz00_bglt)
												((BgL_sfunz00_bglt) BgL_arg1329z00_1590));
											BgL_auxz00_2477 = BGL_OBJECT_WIDENING(BgL_tmpz00_2478);
										}
										BgL_auxz00_2476 =
											((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_2477);
									}
									((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2476))->
											BgL_freez00) = ((obj_t) BgL_freez00_1589), BUNSPEC);
								}
							}
							return BgL_freez00_1589;
						}
				}
			}
		}

	}



/* &get-free-vars */
	obj_t BGl_z62getzd2freezd2varsz62zzintegrate_freez00(obj_t BgL_envz00_2204,
		obj_t BgL_nodez00_2205, obj_t BgL_integratorz00_2206)
	{
		{	/* Integrate/free.scm 78 */
			return
				BGl_getzd2freezd2varsz00zzintegrate_freez00(
				((BgL_nodez00_bglt) BgL_nodez00_2205),
				((BgL_localz00_bglt) BgL_integratorz00_2206));
		}

	}



/* internal-get-free-vars! */
	obj_t
		BGl_internalzd2getzd2freezd2varsz12zc0zzintegrate_freez00(BgL_nodez00_bglt
		BgL_nodez00_9, BgL_localz00_bglt BgL_integratorz00_10)
	{
		{	/* Integrate/free.scm 99 */
			BGl_za2roundza2z00zzintegrate_freez00 =
				(BGl_za2roundza2z00zzintegrate_freez00 + ((long) 1));
			BGl_za2integratorza2z00zzintegrate_freez00 =
				((obj_t) BgL_integratorz00_10);
			{	/* Integrate/free.scm 103 */
				obj_t BgL_g1253z00_1593;

				BgL_g1253z00_1593 =
					(((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt)
								(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_integratorz00_10)))->
									BgL_valuez00))))->BgL_argsz00);
				{
					obj_t BgL_l1251z00_1595;

					BgL_l1251z00_1595 = BgL_g1253z00_1593;
				BgL_zc3z04anonymousza31331ze3z87_1596:
					if (PAIRP(BgL_l1251z00_1595))
						{	/* Integrate/free.scm 104 */
							{	/* Integrate/free.scm 103 */
								obj_t BgL_lz00_1598;

								BgL_lz00_1598 = CAR(BgL_l1251z00_1595);
								BGl_bindzd2variablez12zc0zzintegrate_freez00(
									((BgL_localz00_bglt) BgL_lz00_1598), BgL_integratorz00_10);
							}
							{
								obj_t BgL_l1251z00_2498;

								BgL_l1251z00_2498 = CDR(BgL_l1251z00_1595);
								BgL_l1251z00_1595 = BgL_l1251z00_2498;
								goto BgL_zc3z04anonymousza31331ze3z87_1596;
							}
						}
					else
						{	/* Integrate/free.scm 104 */
							((bool_t) 1);
						}
				}
			}
			return BGl_nodezd2freezd2zzintegrate_freez00(BgL_nodez00_9, BNIL);
		}

	}



/* node-free* */
	obj_t BGl_nodezd2freeza2z70zzintegrate_freez00(obj_t BgL_nodeza2za2_53,
		obj_t BgL_freez00_54)
	{
		{	/* Integrate/free.scm 285 */
			{
				obj_t BgL_nodeza2za2_1603;
				obj_t BgL_freez00_1604;

				BgL_nodeza2za2_1603 = BgL_nodeza2za2_53;
				BgL_freez00_1604 = BgL_freez00_54;
			BgL_zc3z04anonymousza31336ze3z87_1605:
				if (NULLP(BgL_nodeza2za2_1603))
					{	/* Integrate/free.scm 288 */
						return BgL_freez00_1604;
					}
				else
					{	/* Integrate/free.scm 290 */
						obj_t BgL_arg1344z00_1607;
						obj_t BgL_arg1345z00_1608;

						BgL_arg1344z00_1607 = CDR(((obj_t) BgL_nodeza2za2_1603));
						{	/* Integrate/free.scm 291 */
							obj_t BgL_arg1346z00_1609;

							BgL_arg1346z00_1609 = CAR(((obj_t) BgL_nodeza2za2_1603));
							BgL_arg1345z00_1608 =
								BGl_nodezd2freezd2zzintegrate_freez00(
								((BgL_nodez00_bglt) BgL_arg1346z00_1609), BgL_freez00_1604);
						}
						{
							obj_t BgL_freez00_2510;
							obj_t BgL_nodeza2za2_2509;

							BgL_nodeza2za2_2509 = BgL_arg1344z00_1607;
							BgL_freez00_2510 = BgL_arg1345z00_1608;
							BgL_freez00_1604 = BgL_freez00_2510;
							BgL_nodeza2za2_1603 = BgL_nodeza2za2_2509;
							goto BgL_zc3z04anonymousza31336ze3z87_1605;
						}
					}
			}
		}

	}



/* free-from */
	BGL_EXPORTED_DEF obj_t BGl_freezd2fromzd2zzintegrate_freez00(obj_t
		BgL_setsz00_55, BgL_localz00_bglt BgL_integratorz00_56)
	{
		{	/* Integrate/free.scm 296 */
			BGl_za2roundza2z00zzintegrate_freez00 =
				(BGl_za2roundza2z00zzintegrate_freez00 + ((long) 1));
			{	/* Integrate/free.scm 299 */
				BgL_valuez00_bglt BgL_finfoz00_1611;

				BgL_finfoz00_1611 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_integratorz00_56)))->BgL_valuez00);
				{	/* Integrate/free.scm 306 */
					obj_t BgL_g1259z00_1612;

					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2514;

						{
							obj_t BgL_auxz00_2515;

							{	/* Integrate/free.scm 306 */
								BgL_objectz00_bglt BgL_tmpz00_2516;

								BgL_tmpz00_2516 =
									((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_finfoz00_1611));
								BgL_auxz00_2515 = BGL_OBJECT_WIDENING(BgL_tmpz00_2516);
							}
							BgL_auxz00_2514 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_2515);
						}
						BgL_g1259z00_1612 =
							(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2514))->
							BgL_boundz00);
					}
					{
						obj_t BgL_l1257z00_1614;

						BgL_l1257z00_1614 = BgL_g1259z00_1612;
					BgL_zc3z04anonymousza31347ze3z87_1615:
						if (PAIRP(BgL_l1257z00_1614))
							{	/* Integrate/free.scm 306 */
								{	/* Integrate/free.scm 306 */
									obj_t BgL_arg1351z00_1617;

									BgL_arg1351z00_1617 = CAR(BgL_l1257z00_1614);
									BGl_markzd2variablez12zc0zzintegrate_freez00(
										((BgL_localz00_bglt) BgL_arg1351z00_1617));
								}
								{
									obj_t BgL_l1257z00_2527;

									BgL_l1257z00_2527 = CDR(BgL_l1257z00_1614);
									BgL_l1257z00_1614 = BgL_l1257z00_2527;
									goto BgL_zc3z04anonymousza31347ze3z87_1615;
								}
							}
						else
							{	/* Integrate/free.scm 306 */
								((bool_t) 1);
							}
					}
				}
			}
			if (NULLP(BgL_setsz00_55))
				{	/* Integrate/free.scm 308 */
					return BNIL;
				}
			else
				{	/* Integrate/free.scm 308 */
					obj_t BgL_head1262z00_1622;

					{	/* Integrate/free.scm 308 */
						obj_t BgL_res1839z00_2092;

						BgL_res1839z00_2092 = MAKE_YOUNG_PAIR(BNIL, BNIL);
						BgL_head1262z00_1622 = BgL_res1839z00_2092;
					}
					{
						obj_t BgL_l1260z00_1624;
						obj_t BgL_tail1263z00_1625;

						BgL_l1260z00_1624 = BgL_setsz00_55;
						BgL_tail1263z00_1625 = BgL_head1262z00_1622;
					BgL_zc3z04anonymousza31354ze3z87_1626:
						if (NULLP(BgL_l1260z00_1624))
							{	/* Integrate/free.scm 308 */
								return CDR(BgL_head1262z00_1622);
							}
						else
							{	/* Integrate/free.scm 308 */
								obj_t BgL_newtail1264z00_1628;

								{	/* Integrate/free.scm 308 */
									obj_t BgL_arg1360z00_1630;

									{	/* Integrate/free.scm 308 */
										obj_t BgL_setz00_1631;

										BgL_setz00_1631 = CAR(((obj_t) BgL_l1260z00_1624));
										{
											obj_t BgL_setz00_1634;
											obj_t BgL_resz00_1635;

											BgL_setz00_1634 = BgL_setz00_1631;
											BgL_resz00_1635 = BNIL;
										BgL_zc3z04anonymousza31361ze3z87_1636:
											if (NULLP(BgL_setz00_1634))
												{	/* Integrate/free.scm 312 */
													BgL_arg1360z00_1630 = BgL_resz00_1635;
												}
											else
												{	/* Integrate/free.scm 314 */
													bool_t BgL_test1931z00_2539;

													{	/* Integrate/free.scm 314 */
														obj_t BgL_arg1381z00_1644;

														BgL_arg1381z00_1644 =
															CAR(((obj_t) BgL_setz00_1634));
														BgL_test1931z00_2539 =
															CBOOL(BGl_freezd2variablezf3z21zzintegrate_freez00
															(BgL_arg1381z00_1644));
													}
													if (BgL_test1931z00_2539)
														{	/* Integrate/free.scm 315 */
															obj_t BgL_arg1367z00_1640;
															obj_t BgL_arg1370z00_1641;

															BgL_arg1367z00_1640 =
																CDR(((obj_t) BgL_setz00_1634));
															{	/* Integrate/free.scm 315 */
																obj_t BgL_arg1371z00_1642;

																BgL_arg1371z00_1642 =
																	CAR(((obj_t) BgL_setz00_1634));
																BgL_arg1370z00_1641 =
																	MAKE_YOUNG_PAIR(BgL_arg1371z00_1642,
																	BgL_resz00_1635);
															}
															{
																obj_t BgL_resz00_2550;
																obj_t BgL_setz00_2549;

																BgL_setz00_2549 = BgL_arg1367z00_1640;
																BgL_resz00_2550 = BgL_arg1370z00_1641;
																BgL_resz00_1635 = BgL_resz00_2550;
																BgL_setz00_1634 = BgL_setz00_2549;
																goto BgL_zc3z04anonymousza31361ze3z87_1636;
															}
														}
													else
														{	/* Integrate/free.scm 317 */
															obj_t BgL_arg1372z00_1643;

															BgL_arg1372z00_1643 =
																CDR(((obj_t) BgL_setz00_1634));
															{
																obj_t BgL_setz00_2553;

																BgL_setz00_2553 = BgL_arg1372z00_1643;
																BgL_setz00_1634 = BgL_setz00_2553;
																goto BgL_zc3z04anonymousza31361ze3z87_1636;
															}
														}
												}
										}
									}
									{	/* Integrate/free.scm 308 */
										obj_t BgL_res1842z00_2101;

										BgL_res1842z00_2101 =
											MAKE_YOUNG_PAIR(BgL_arg1360z00_1630, BNIL);
										BgL_newtail1264z00_1628 = BgL_res1842z00_2101;
									}
								}
								SET_CDR(BgL_tail1263z00_1625, BgL_newtail1264z00_1628);
								{	/* Integrate/free.scm 308 */
									obj_t BgL_arg1357z00_1629;

									BgL_arg1357z00_1629 = CDR(((obj_t) BgL_l1260z00_1624));
									{
										obj_t BgL_tail1263z00_2559;
										obj_t BgL_l1260z00_2558;

										BgL_l1260z00_2558 = BgL_arg1357z00_1629;
										BgL_tail1263z00_2559 = BgL_newtail1264z00_1628;
										BgL_tail1263z00_1625 = BgL_tail1263z00_2559;
										BgL_l1260z00_1624 = BgL_l1260z00_2558;
										goto BgL_zc3z04anonymousza31354ze3z87_1626;
									}
								}
							}
					}
				}
		}

	}



/* &free-from */
	obj_t BGl_z62freezd2fromzb0zzintegrate_freez00(obj_t BgL_envz00_2207,
		obj_t BgL_setsz00_2208, obj_t BgL_integratorz00_2209)
	{
		{	/* Integrate/free.scm 296 */
			return
				BGl_freezd2fromzd2zzintegrate_freez00(BgL_setsz00_2208,
				((BgL_localz00_bglt) BgL_integratorz00_2209));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzintegrate_freez00()
	{
		{	/* Integrate/free.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_freez00()
	{
		{	/* Integrate/free.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_proc1861z00zzintegrate_freez00, BGl_nodez00zzast_nodez00,
				BGl_string1862z00zzintegrate_freez00);
		}

	}



/* &node-free1265 */
	obj_t BGl_z62nodezd2free1265zb0zzintegrate_freez00(obj_t BgL_envz00_2211,
		obj_t BgL_nodez00_2212, obj_t BgL_freez00_2213)
	{
		{	/* Integrate/free.scm 111 */
			return BgL_freez00_2213;
		}

	}



/* node-free */
	obj_t BGl_nodezd2freezd2zzintegrate_freez00(BgL_nodez00_bglt BgL_nodez00_11,
		obj_t BgL_freez00_12)
	{
		{	/* Integrate/free.scm 111 */
			{	/* Integrate/free.scm 111 */
				obj_t BgL_method1266z00_1652;

				{	/* Integrate/free.scm 111 */
					obj_t BgL_res1853z00_2140;

					{	/* Integrate/free.scm 111 */
						long BgL_objzd2classzd2numz00_2105;

						{	/* Integrate/free.scm 111 */
							long BgL_res1843z00_2108;

							BgL_res1843z00_2108 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_11));
							BgL_objzd2classzd2numz00_2105 = BgL_res1843z00_2108;
						}
						{	/* Integrate/free.scm 111 */
							obj_t BgL_arg1813z00_2106;

							BgL_arg1813z00_2106 =
								PROCEDURE_REF(BGl_nodezd2freezd2envz00zzintegrate_freez00,
								(int) (((long) 1)));
							{	/* Integrate/free.scm 111 */
								int BgL_offsetz00_2110;

								BgL_offsetz00_2110 = (int) (BgL_objzd2classzd2numz00_2105);
								{	/* Integrate/free.scm 111 */
									long BgL_offsetz00_2111;

									BgL_offsetz00_2111 =
										((long) (BgL_offsetz00_2110) - OBJECT_TYPE);
									{	/* Integrate/free.scm 111 */
										long BgL_modz00_2112;

										BgL_modz00_2112 =
											(BgL_offsetz00_2111 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Integrate/free.scm 111 */
											long BgL_restz00_2114;

											BgL_restz00_2114 =
												(BgL_offsetz00_2111 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Integrate/free.scm 111 */

												{	/* Integrate/free.scm 111 */
													obj_t BgL_bucketz00_2116;

													BgL_bucketz00_2116 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2106), BgL_modz00_2112);
													BgL_res1853z00_2140 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2116), BgL_restz00_2114);
					}}}}}}}}
					BgL_method1266z00_1652 = BgL_res1853z00_2140;
				}
				return
					PROCEDURE_ENTRY(BgL_method1266z00_1652) (BgL_method1266z00_1652,
					((obj_t) BgL_nodez00_11), BgL_freez00_12, BEOA);
			}
		}

	}



/* &node-free */
	obj_t BGl_z62nodezd2freezb0zzintegrate_freez00(obj_t BgL_envz00_2214,
		obj_t BgL_nodez00_2215, obj_t BgL_freez00_2216)
	{
		{	/* Integrate/free.scm 111 */
			return
				BGl_nodezd2freezd2zzintegrate_freez00(
				((BgL_nodez00_bglt) BgL_nodez00_2215), BgL_freez00_2216);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_freez00()
	{
		{	/* Integrate/free.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00, BGl_varz00zzast_nodez00,
				BGl_proc1863z00zzintegrate_freez00,
				BGl_string1864z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_closurez00zzast_nodez00, BGl_proc1865z00zzintegrate_freez00,
				BGl_string1864z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_sequencez00zzast_nodez00, BGl_proc1866z00zzintegrate_freez00,
				BGl_string1864z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00, BGl_syncz00zzast_nodez00,
				BGl_proc1867z00zzintegrate_freez00,
				BGl_string1864z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00, BGl_appz00zzast_nodez00,
				BGl_proc1868z00zzintegrate_freez00,
				BGl_string1864z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1869z00zzintegrate_freez00,
				BGl_string1864z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_funcallz00zzast_nodez00, BGl_proc1870z00zzintegrate_freez00,
				BGl_string1864z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_externz00zzast_nodez00, BGl_proc1871z00zzintegrate_freez00,
				BGl_string1864z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00, BGl_castz00zzast_nodez00,
				BGl_proc1872z00zzintegrate_freez00,
				BGl_string1864z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00, BGl_setqz00zzast_nodez00,
				BGl_proc1873z00zzintegrate_freez00,
				BGl_string1864z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1874z00zzintegrate_freez00,
				BGl_string1864z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00, BGl_failz00zzast_nodez00,
				BGl_proc1875z00zzintegrate_freez00,
				BGl_string1864z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_switchz00zzast_nodez00, BGl_proc1876z00zzintegrate_freez00,
				BGl_string1864z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1877z00zzintegrate_freez00,
				BGl_string1864z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1878z00zzintegrate_freez00,
				BGl_string1864z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc1879z00zzintegrate_freez00,
				BGl_string1864z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc1880z00zzintegrate_freez00,
				BGl_string1864z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1881z00zzintegrate_freez00,
				BGl_string1864z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1882z00zzintegrate_freez00,
				BGl_string1864z00zzintegrate_freez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1883z00zzintegrate_freez00,
				BGl_string1864z00zzintegrate_freez00);
		}

	}



/* &node-free-box-set!1307 */
	obj_t BGl_z62nodezd2freezd2boxzd2setz121307za2zzintegrate_freez00(obj_t
		BgL_envz00_2237, obj_t BgL_nodez00_2238, obj_t BgL_freez00_2239)
	{
		{	/* Integrate/free.scm 278 */
			{	/* Integrate/free.scm 280 */
				BgL_varz00_bglt BgL_arg1672z00_2299;
				obj_t BgL_arg1684z00_2300;

				BgL_arg1672z00_2299 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2238)))->BgL_varz00);
				BgL_arg1684z00_2300 =
					BGl_nodezd2freezd2zzintegrate_freez00(
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2238)))->BgL_valuez00),
					BgL_freez00_2239);
				return BGl_nodezd2freezd2zzintegrate_freez00(((BgL_nodez00_bglt)
						BgL_arg1672z00_2299), BgL_arg1684z00_2300);
			}
		}

	}



/* &node-free-box-ref1305 */
	obj_t BGl_z62nodezd2freezd2boxzd2ref1305zb0zzintegrate_freez00(obj_t
		BgL_envz00_2240, obj_t BgL_nodez00_2241, obj_t BgL_freez00_2242)
	{
		{	/* Integrate/free.scm 271 */
			{	/* Integrate/free.scm 273 */
				BgL_varz00_bglt BgL_arg1669z00_2302;

				BgL_arg1669z00_2302 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_nodez00_2241)))->BgL_varz00);
				return
					BGl_nodezd2freezd2zzintegrate_freez00(
					((BgL_nodez00_bglt) BgL_arg1669z00_2302), BgL_freez00_2242);
			}
		}

	}



/* &node-free-make-box1303 */
	obj_t BGl_z62nodezd2freezd2makezd2box1303zb0zzintegrate_freez00(obj_t
		BgL_envz00_2243, obj_t BgL_nodez00_2244, obj_t BgL_freez00_2245)
	{
		{	/* Integrate/free.scm 264 */
			return
				BGl_nodezd2freezd2zzintegrate_freez00(
				(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_2244)))->BgL_valuez00),
				BgL_freez00_2245);
		}

	}



/* &node-free-jump-ex-it1301 */
	obj_t BGl_z62nodezd2freezd2jumpzd2exzd2it1301z62zzintegrate_freez00(obj_t
		BgL_envz00_2246, obj_t BgL_nodez00_2247, obj_t BgL_freez00_2248)
	{
		{	/* Integrate/free.scm 257 */
			return
				BGl_nodezd2freezd2zzintegrate_freez00(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2247)))->BgL_exitz00),
				BGl_nodezd2freezd2zzintegrate_freez00(
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2247)))->
						BgL_valuez00), BgL_freez00_2248));
		}

	}



/* &node-free-set-ex-it1299 */
	obj_t BGl_z62nodezd2freezd2setzd2exzd2it1299z62zzintegrate_freez00(obj_t
		BgL_envz00_2249, obj_t BgL_nodez00_2250, obj_t BgL_freez00_2251)
	{
		{	/* Integrate/free.scm 249 */
			{	/* Integrate/free.scm 251 */
				BgL_variablez00_bglt BgL_arg1641z00_2306;

				BgL_arg1641z00_2306 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_setzd2exzd2itz00_bglt) COBJECT(
										((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2250)))->
								BgL_varz00)))->BgL_variablez00);
				BGl_bindzd2variablez12zc0zzintegrate_freez00(((BgL_localz00_bglt)
						BgL_arg1641z00_2306),
					((BgL_localz00_bglt) BGl_za2integratorza2z00zzintegrate_freez00));
			}
			return
				BGl_nodezd2freezd2zzintegrate_freez00(
				(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2250)))->BgL_bodyz00),
				BgL_freez00_2251);
		}

	}



/* &node-free-let-var1297 */
	obj_t BGl_z62nodezd2freezd2letzd2var1297zb0zzintegrate_freez00(obj_t
		BgL_envz00_2252, obj_t BgL_nodez00_2253, obj_t BgL_freez00_2254)
	{
		{	/* Integrate/free.scm 235 */
			{
				obj_t BgL_bindingsz00_2309;
				obj_t BgL_freez00_2310;

				BgL_bindingsz00_2309 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2253)))->BgL_bindingsz00);
				BgL_freez00_2310 = BgL_freez00_2254;
			BgL_loopz00_2308:
				if (NULLP(BgL_bindingsz00_2309))
					{	/* Integrate/free.scm 239 */
						return
							BGl_nodezd2freezd2zzintegrate_freez00(
							(((BgL_letzd2varzd2_bglt) COBJECT(
										((BgL_letzd2varzd2_bglt) BgL_nodez00_2253)))->BgL_bodyz00),
							BgL_freez00_2310);
					}
				else
					{	/* Integrate/free.scm 239 */
						{	/* Integrate/free.scm 242 */
							obj_t BgL_arg1626z00_2311;

							{	/* Integrate/free.scm 242 */
								obj_t BgL_pairz00_2312;

								BgL_pairz00_2312 = CAR(((obj_t) BgL_bindingsz00_2309));
								BgL_arg1626z00_2311 = CAR(BgL_pairz00_2312);
							}
							BGl_bindzd2variablez12zc0zzintegrate_freez00(
								((BgL_localz00_bglt) BgL_arg1626z00_2311),
								((BgL_localz00_bglt)
									BGl_za2integratorza2z00zzintegrate_freez00));
						}
						{	/* Integrate/free.scm 243 */
							obj_t BgL_arg1631z00_2313;
							obj_t BgL_arg1634z00_2314;

							BgL_arg1631z00_2313 = CDR(((obj_t) BgL_bindingsz00_2309));
							{	/* Integrate/free.scm 244 */
								obj_t BgL_arg1639z00_2315;

								{	/* Integrate/free.scm 244 */
									obj_t BgL_pairz00_2316;

									BgL_pairz00_2316 = CAR(((obj_t) BgL_bindingsz00_2309));
									BgL_arg1639z00_2315 = CDR(BgL_pairz00_2316);
								}
								BgL_arg1634z00_2314 =
									BGl_nodezd2freezd2zzintegrate_freez00(
									((BgL_nodez00_bglt) BgL_arg1639z00_2315), BgL_freez00_2310);
							}
							{
								obj_t BgL_freez00_2664;
								obj_t BgL_bindingsz00_2663;

								BgL_bindingsz00_2663 = BgL_arg1631z00_2313;
								BgL_freez00_2664 = BgL_arg1634z00_2314;
								BgL_freez00_2310 = BgL_freez00_2664;
								BgL_bindingsz00_2309 = BgL_bindingsz00_2663;
								goto BgL_loopz00_2308;
							}
						}
					}
			}
		}

	}



/* &node-free-let-fun1295 */
	obj_t BGl_z62nodezd2freezd2letzd2fun1295zb0zzintegrate_freez00(obj_t
		BgL_envz00_2255, obj_t BgL_nodez00_2256, obj_t BgL_freez00_2257)
	{
		{	/* Integrate/free.scm 218 */
			{	/* Integrate/free.scm 221 */
				obj_t BgL_g1120z00_2318;

				BgL_g1120z00_2318 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2256)))->BgL_localsz00);
				{
					obj_t BgL_localsz00_2320;
					obj_t BgL_freez00_2321;

					BgL_localsz00_2320 = BgL_g1120z00_2318;
					BgL_freez00_2321 = BgL_freez00_2257;
				BgL_liipz00_2319:
					if (NULLP(BgL_localsz00_2320))
						{	/* Integrate/free.scm 223 */
							return
								BGl_nodezd2freezd2zzintegrate_freez00(
								(((BgL_letzd2funzd2_bglt) COBJECT(
											((BgL_letzd2funzd2_bglt) BgL_nodez00_2256)))->
									BgL_bodyz00), BgL_freez00_2321);
						}
					else
						{	/* Integrate/free.scm 225 */
							obj_t BgL_localz00_2322;

							BgL_localz00_2322 = CAR(((obj_t) BgL_localsz00_2320));
							{	/* Integrate/free.scm 225 */
								BgL_valuez00_bglt BgL_funz00_2323;

								BgL_funz00_2323 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_localz00_bglt) BgL_localz00_2322))))->
									BgL_valuez00);
								{	/* Integrate/free.scm 226 */

									{	/* Integrate/free.scm 227 */
										obj_t BgL_g1256z00_2324;

										BgL_g1256z00_2324 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_funz00_2323)))->BgL_argsz00);
										{
											obj_t BgL_l1254z00_2326;

											BgL_l1254z00_2326 = BgL_g1256z00_2324;
										BgL_zc3z04anonymousza31598ze3z87_2325:
											if (PAIRP(BgL_l1254z00_2326))
												{	/* Integrate/free.scm 228 */
													{	/* Integrate/free.scm 227 */
														obj_t BgL_lz00_2327;

														BgL_lz00_2327 = CAR(BgL_l1254z00_2326);
														BGl_bindzd2variablez12zc0zzintegrate_freez00(
															((BgL_localz00_bglt) BgL_lz00_2327),
															((BgL_localz00_bglt)
																BGl_za2integratorza2z00zzintegrate_freez00));
													}
													{
														obj_t BgL_l1254z00_2687;

														BgL_l1254z00_2687 = CDR(BgL_l1254z00_2326);
														BgL_l1254z00_2326 = BgL_l1254z00_2687;
														goto BgL_zc3z04anonymousza31598ze3z87_2325;
													}
												}
											else
												{	/* Integrate/free.scm 228 */
													((bool_t) 1);
												}
										}
									}
									{	/* Integrate/free.scm 229 */
										obj_t BgL_arg1605z00_2328;
										obj_t BgL_arg1606z00_2329;

										BgL_arg1605z00_2328 = CDR(((obj_t) BgL_localsz00_2320));
										{	/* Integrate/free.scm 230 */
											obj_t BgL_arg1611z00_2330;

											BgL_arg1611z00_2330 =
												(((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_funz00_2323)))->
												BgL_bodyz00);
											BgL_arg1606z00_2329 =
												BGl_nodezd2freezd2zzintegrate_freez00((
													(BgL_nodez00_bglt) BgL_arg1611z00_2330),
												BgL_freez00_2321);
										}
										{
											obj_t BgL_freez00_2696;
											obj_t BgL_localsz00_2695;

											BgL_localsz00_2695 = BgL_arg1605z00_2328;
											BgL_freez00_2696 = BgL_arg1606z00_2329;
											BgL_freez00_2321 = BgL_freez00_2696;
											BgL_localsz00_2320 = BgL_localsz00_2695;
											goto BgL_liipz00_2319;
										}
									}
								}
							}
						}
				}
			}
		}

	}



/* &node-free-switch1293 */
	obj_t BGl_z62nodezd2freezd2switch1293z62zzintegrate_freez00(obj_t
		BgL_envz00_2258, obj_t BgL_nodez00_2259, obj_t BgL_freez00_2260)
	{
		{	/* Integrate/free.scm 207 */
			{
				obj_t BgL_clausesz00_2333;
				obj_t BgL_freez00_2334;

				BgL_clausesz00_2333 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2259)))->BgL_clausesz00);
				BgL_freez00_2334 = BgL_freez00_2260;
			BgL_loopz00_2332:
				if (NULLP(BgL_clausesz00_2333))
					{	/* Integrate/free.scm 211 */
						return
							BGl_nodezd2freezd2zzintegrate_freez00(
							(((BgL_switchz00_bglt) COBJECT(
										((BgL_switchz00_bglt) BgL_nodez00_2259)))->BgL_testz00),
							BgL_freez00_2334);
					}
				else
					{	/* Integrate/free.scm 213 */
						obj_t BgL_arg1584z00_2335;
						obj_t BgL_arg1588z00_2336;

						BgL_arg1584z00_2335 = CDR(((obj_t) BgL_clausesz00_2333));
						{	/* Integrate/free.scm 213 */
							obj_t BgL_arg1589z00_2337;

							{	/* Integrate/free.scm 213 */
								obj_t BgL_pairz00_2338;

								BgL_pairz00_2338 = CAR(((obj_t) BgL_clausesz00_2333));
								BgL_arg1589z00_2337 = CDR(BgL_pairz00_2338);
							}
							BgL_arg1588z00_2336 =
								BGl_nodezd2freezd2zzintegrate_freez00(
								((BgL_nodez00_bglt) BgL_arg1589z00_2337), BgL_freez00_2334);
						}
						{
							obj_t BgL_freez00_2710;
							obj_t BgL_clausesz00_2709;

							BgL_clausesz00_2709 = BgL_arg1584z00_2335;
							BgL_freez00_2710 = BgL_arg1588z00_2336;
							BgL_freez00_2334 = BgL_freez00_2710;
							BgL_clausesz00_2333 = BgL_clausesz00_2709;
							goto BgL_loopz00_2332;
						}
					}
			}
		}

	}



/* &node-free-fail1291 */
	obj_t BGl_z62nodezd2freezd2fail1291z62zzintegrate_freez00(obj_t
		BgL_envz00_2261, obj_t BgL_nodez00_2262, obj_t BgL_freez00_2263)
	{
		{	/* Integrate/free.scm 200 */
			return
				BGl_nodezd2freezd2zzintegrate_freez00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2262)))->BgL_procz00),
				BGl_nodezd2freezd2zzintegrate_freez00(
					(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2262)))->BgL_msgz00),
					BGl_nodezd2freezd2zzintegrate_freez00(
						(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_2262)))->BgL_objz00),
						BgL_freez00_2263)));
		}

	}



/* &node-free-conditiona1289 */
	obj_t BGl_z62nodezd2freezd2conditiona1289z62zzintegrate_freez00(obj_t
		BgL_envz00_2264, obj_t BgL_nodez00_2265, obj_t BgL_freez00_2266)
	{
		{	/* Integrate/free.scm 193 */
			return
				BGl_nodezd2freezd2zzintegrate_freez00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2265)))->BgL_testz00),
				BGl_nodezd2freezd2zzintegrate_freez00(
					(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2265)))->BgL_truez00),
					BGl_nodezd2freezd2zzintegrate_freez00(
						(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_2265)))->BgL_falsez00),
						BgL_freez00_2266)));
		}

	}



/* &node-free-setq1287 */
	obj_t BGl_z62nodezd2freezd2setq1287z62zzintegrate_freez00(obj_t
		BgL_envz00_2267, obj_t BgL_nodez00_2268, obj_t BgL_freez00_2269)
	{
		{	/* Integrate/free.scm 186 */
			{	/* Integrate/free.scm 188 */
				BgL_varz00_bglt BgL_arg1518z00_2342;
				obj_t BgL_arg1521z00_2343;

				BgL_arg1518z00_2342 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2268)))->BgL_varz00);
				BgL_arg1521z00_2343 =
					BGl_nodezd2freezd2zzintegrate_freez00(
					(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2268)))->BgL_valuez00),
					BgL_freez00_2269);
				return BGl_nodezd2freezd2zzintegrate_freez00(((BgL_nodez00_bglt)
						BgL_arg1518z00_2342), BgL_arg1521z00_2343);
			}
		}

	}



/* &node-free-cast1285 */
	obj_t BGl_z62nodezd2freezd2cast1285z62zzintegrate_freez00(obj_t
		BgL_envz00_2270, obj_t BgL_nodez00_2271, obj_t BgL_freez00_2272)
	{
		{	/* Integrate/free.scm 179 */
			return
				BGl_nodezd2freezd2zzintegrate_freez00(
				(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2271)))->BgL_argz00),
				BgL_freez00_2272);
		}

	}



/* &node-free-extern1283 */
	obj_t BGl_z62nodezd2freezd2extern1283z62zzintegrate_freez00(obj_t
		BgL_envz00_2273, obj_t BgL_nodez00_2274, obj_t BgL_freez00_2275)
	{
		{	/* Integrate/free.scm 172 */
			return
				BGl_nodezd2freeza2z70zzintegrate_freez00(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_2274)))->BgL_exprza2za2),
				BgL_freez00_2275);
		}

	}



/* &node-free-funcall1281 */
	obj_t BGl_z62nodezd2freezd2funcall1281z62zzintegrate_freez00(obj_t
		BgL_envz00_2276, obj_t BgL_nodez00_2277, obj_t BgL_freez00_2278)
	{
		{	/* Integrate/free.scm 165 */
			return
				BGl_nodezd2freezd2zzintegrate_freez00(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_2277)))->BgL_funz00),
				BGl_nodezd2freeza2z70zzintegrate_freez00(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2277)))->BgL_argsz00),
					BgL_freez00_2278));
		}

	}



/* &node-free-app-ly1279 */
	obj_t BGl_z62nodezd2freezd2appzd2ly1279zb0zzintegrate_freez00(obj_t
		BgL_envz00_2279, obj_t BgL_nodez00_2280, obj_t BgL_freez00_2281)
	{
		{	/* Integrate/free.scm 158 */
			return
				BGl_nodezd2freezd2zzintegrate_freez00(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_2280)))->BgL_funz00),
				BGl_nodezd2freezd2zzintegrate_freez00(
					(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2280)))->BgL_argz00),
					BgL_freez00_2281));
		}

	}



/* &node-free-app1277 */
	obj_t BGl_z62nodezd2freezd2app1277z62zzintegrate_freez00(obj_t
		BgL_envz00_2282, obj_t BgL_nodez00_2283, obj_t BgL_freez00_2284)
	{
		{	/* Integrate/free.scm 151 */
			return
				BGl_nodezd2freeza2z70zzintegrate_freez00(
				(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_2283)))->BgL_argsz00),
				BgL_freez00_2284);
		}

	}



/* &node-free-sync1275 */
	obj_t BGl_z62nodezd2freezd2sync1275z62zzintegrate_freez00(obj_t
		BgL_envz00_2285, obj_t BgL_nodez00_2286, obj_t BgL_freez00_2287)
	{
		{	/* Integrate/free.scm 144 */
			return
				BGl_nodezd2freezd2zzintegrate_freez00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2286)))->BgL_bodyz00),
				BGl_nodezd2freezd2zzintegrate_freez00(
					(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2286)))->BgL_prelockz00),
					BGl_nodezd2freezd2zzintegrate_freez00(
						(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nodez00_2286)))->BgL_mutexz00),
						BgL_freez00_2287)));
		}

	}



/* &node-free-sequence1273 */
	obj_t BGl_z62nodezd2freezd2sequence1273z62zzintegrate_freez00(obj_t
		BgL_envz00_2288, obj_t BgL_nodez00_2289, obj_t BgL_freez00_2290)
	{
		{	/* Integrate/free.scm 137 */
			return
				BGl_nodezd2freeza2z70zzintegrate_freez00(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2289)))->BgL_nodesz00),
				BgL_freez00_2290);
		}

	}



/* &node-free-closure1270 */
	obj_t BGl_z62nodezd2freezd2closure1270z62zzintegrate_freez00(obj_t
		BgL_envz00_2291, obj_t BgL_nodez00_2292, obj_t BgL_freez00_2293)
	{
		{	/* Integrate/free.scm 131 */
			{	/* Integrate/free.scm 132 */
				obj_t BgL_arg1422z00_2352;

				BgL_arg1422z00_2352 =
					BGl_shapez00zztools_shapez00(
					((obj_t) ((BgL_closurez00_bglt) BgL_nodez00_2292)));
				return
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string1864z00zzintegrate_freez00,
					BGl_string1884z00zzintegrate_freez00, BgL_arg1422z00_2352);
			}
		}

	}



/* &node-free-var1268 */
	obj_t BGl_z62nodezd2freezd2var1268z62zzintegrate_freez00(obj_t
		BgL_envz00_2294, obj_t BgL_nodez00_2295, obj_t BgL_freez00_2296)
	{
		{	/* Integrate/free.scm 117 */
			{	/* Integrate/free.scm 120 */
				bool_t BgL_test1936z00_2775;

				{	/* Integrate/free.scm 120 */
					BgL_variablez00_bglt BgL_arg1421z00_2354;

					BgL_arg1421z00_2354 =
						(((BgL_varz00_bglt) COBJECT(
								((BgL_varz00_bglt) BgL_nodez00_2295)))->BgL_variablez00);
					{	/* Integrate/free.scm 120 */
						bool_t BgL_res1854z00_2355;

						BgL_res1854z00_2355 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_arg1421z00_2354), BGl_globalz00zzast_varz00);
						BgL_test1936z00_2775 = BgL_res1854z00_2355;
					}
				}
				if (BgL_test1936z00_2775)
					{	/* Integrate/free.scm 120 */
						return BgL_freez00_2296;
					}
				else
					{	/* Integrate/free.scm 122 */
						bool_t BgL_test1937z00_2780;

						{	/* Integrate/free.scm 122 */
							BgL_variablez00_bglt BgL_arg1418z00_2356;

							BgL_arg1418z00_2356 =
								(((BgL_varz00_bglt) COBJECT(
										((BgL_varz00_bglt) BgL_nodez00_2295)))->BgL_variablez00);
							BgL_test1937z00_2780 =
								CBOOL(BGl_freezd2variablezf3z21zzintegrate_freez00(
									((obj_t) BgL_arg1418z00_2356)));
						}
						if (BgL_test1937z00_2780)
							{	/* Integrate/free.scm 122 */
								{	/* Integrate/free.scm 123 */
									BgL_variablez00_bglt BgL_arg1396z00_2357;

									BgL_arg1396z00_2357 =
										(((BgL_varz00_bglt) COBJECT(
												((BgL_varz00_bglt) BgL_nodez00_2295)))->
										BgL_variablez00);
									BGl_markzd2variablez12zc0zzintegrate_freez00((
											(BgL_localz00_bglt) BgL_arg1396z00_2357));
								}
								{	/* Integrate/free.scm 124 */
									BgL_variablez00_bglt BgL_arg1417z00_2358;

									BgL_arg1417z00_2358 =
										(((BgL_varz00_bglt) COBJECT(
												((BgL_varz00_bglt) BgL_nodez00_2295)))->
										BgL_variablez00);
									return MAKE_YOUNG_PAIR(((obj_t) BgL_arg1417z00_2358),
										BgL_freez00_2296);
								}
							}
						else
							{	/* Integrate/free.scm 122 */
								return BgL_freez00_2296;
							}
					}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_freez00()
	{
		{	/* Integrate/free.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1885z00zzintegrate_freez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1885z00zzintegrate_freez00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1885z00zzintegrate_freez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1885z00zzintegrate_freez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1885z00zzintegrate_freez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1885z00zzintegrate_freez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1885z00zzintegrate_freez00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string1885z00zzintegrate_freez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1885z00zzintegrate_freez00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1885z00zzintegrate_freez00));
			BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(((long) 44601778),
				BSTRING_TO_STRING(BGl_string1885z00zzintegrate_freez00));
			BGl_modulezd2initializa7ationz75zzintegrate_infoz00(((long) 0),
				BSTRING_TO_STRING(BGl_string1885z00zzintegrate_freez00));
			BGl_modulezd2initializa7ationz75zzintegrate_nodez00(((long) 347237018),
				BSTRING_TO_STRING(BGl_string1885z00zzintegrate_freez00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1885z00zzintegrate_freez00));
		}

	}

#ifdef __cplusplus
}
#endif
