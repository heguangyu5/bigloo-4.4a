/*===========================================================================*/
/*   (Globalize/free.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/free.scm) */
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

	typedef struct BgL_sexitzf2ginfozf2_bgl
	{
		bool_t BgL_gzf3zf3;
		bool_t BgL_kapturedzf3zf3;
		long BgL_freezd2markzd2;
		long BgL_markz00;
	}                       *BgL_sexitzf2ginfozf2_bglt;

	typedef struct BgL_localzf2ginfozf2_bgl
	{
		bool_t BgL_escapezf3zf3;
		bool_t BgL_globaliza7edzf3z54;
	}                       *BgL_localzf2ginfozf2_bglt;


	static obj_t
		BGl_z62nodezd2freezd2conditiona1318z62zzglobaliza7e_freeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_syncz00zzast_nodez00;
	static obj_t BGl_z62nodezd2freezd2letzd2fun1324zb0zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t
		BGl_z62nodezd2freezd2boxzd2setz121337za2zzglobaliza7e_freeza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62nodezd2freezd2makezd2box1332zb0zzglobaliza7e_freeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_nodezd2freeza2z70zzglobaliza7e_freeza7(obj_t, obj_t);
	static obj_t BGl_za2integratorza2z00zzglobaliza7e_freeza7 = BUNSPEC;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_z62nodezd2freezb0zzglobaliza7e_freeza7(obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzglobaliza7e_freeza7();
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_z62thezd2globalzd2closurez62zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_nodezd2freezd2zzglobaliza7e_freeza7(BgL_nodez00_bglt, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7;
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_freeza7();
	static obj_t
		BGl_z62nodezd2freezd2jumpzd2exzd2it1330z62zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_z62nodezd2freezd2letzd2var1326zb0zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_thezd2localzd2closurez00zzglobaliza7e_freeza7(obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	static obj_t
		BGl_z62nodezd2freezd2setzd2exzd2it1328z62zzglobaliza7e_freeza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2freezd2closure1300z62zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2freezd2appzd2ly1308zb0zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_thezd2closurezd2zzglobaliza7e_freeza7(BgL_variablez00_bglt, obj_t);
	extern BgL_globalz00_bglt
		BGl_makezd2globalzd2closurez00zzglobaliza7e_globalzd2closurez75
		(BgL_globalz00_bglt);
	static obj_t
		BGl_internalzd2getzd2freezd2varsz12zc0zzglobaliza7e_freeza7
		(BgL_nodez00_bglt, BgL_localz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_thezd2globalzd2closurez00zzglobaliza7e_freeza7(BgL_globalz00_bglt,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_freeza7();
	static obj_t BGl_z62nodezd2freezd2extern1312z62zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2freezd2sync1304z62zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2freezd2fail1320z62zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2free1295zb0zzglobaliza7e_freeza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62thezd2closurezb0zzglobaliza7e_freeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7;
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzglobaliza7e_freeza7 = BUNSPEC;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzglobaliza7e_freeza7();
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_freeza7();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern obj_t BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7;
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2freezd2varsz00zzglobaliza7e_freeza7(BgL_nodez00_bglt,
		BgL_localz00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7;
	static obj_t BGl_z62freezd2fromzb0zzglobaliza7e_freeza7(obj_t, obj_t, obj_t);
	static obj_t BGl_z62nodezd2freezd2sequence1302z62zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_bindzd2variablez12zc0zzglobaliza7e_freeza7(BgL_localz00_bglt,
		BgL_localz00_bglt);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	static obj_t
		BGl_markzd2variablez12zc0zzglobaliza7e_freeza7(BgL_localz00_bglt);
	static obj_t BGl_z62nodezd2freezd2funcall1310z62zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_freezd2fromzd2zzglobaliza7e_freeza7(obj_t,
		BgL_localz00_bglt);
	static long BGl_za2roundza2z00zzglobaliza7e_freeza7;
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	extern BgL_globalz00_bglt
		BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2freezd2boxzd2ref1335zb0zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2freezd2app1306z62zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_freeza7(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_globalzd2closurez75(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_freezd2variablezf3z21zzglobaliza7e_freeza7(obj_t);
	static obj_t BGl_z62nodezd2freezd2var1298z62zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzglobaliza7e_freeza7();
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_freeza7();
	static obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_freeza7();
	static obj_t BGl_z62nodezd2freezd2cast1314z62zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2freezd2switch1322z62zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2freezd2setq1316z62zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_literalz00zzast_nodez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	static obj_t BGl_z62getzd2freezd2varsz62zzglobaliza7e_freeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[6];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1984z00zzglobaliza7e_freeza7,
		BgL_bgl_za762nodeza7d2free122014z00,
		BGl_z62nodezd2free1295zb0zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1986z00zzglobaliza7e_freeza7,
		BgL_bgl_za762nodeza7d2freeza7d2015za7,
		BGl_z62nodezd2freezd2var1298z62zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1988z00zzglobaliza7e_freeza7,
		BgL_bgl_za762nodeza7d2freeza7d2016za7,
		BGl_z62nodezd2freezd2closure1300z62zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1989z00zzglobaliza7e_freeza7,
		BgL_bgl_za762nodeza7d2freeza7d2017za7,
		BGl_z62nodezd2freezd2sequence1302z62zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1990z00zzglobaliza7e_freeza7,
		BgL_bgl_za762nodeza7d2freeza7d2018za7,
		BGl_z62nodezd2freezd2sync1304z62zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1991z00zzglobaliza7e_freeza7,
		BgL_bgl_za762nodeza7d2freeza7d2019za7,
		BGl_z62nodezd2freezd2app1306z62zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1992z00zzglobaliza7e_freeza7,
		BgL_bgl_za762nodeza7d2freeza7d2020za7,
		BGl_z62nodezd2freezd2appzd2ly1308zb0zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1993z00zzglobaliza7e_freeza7,
		BgL_bgl_za762nodeza7d2freeza7d2021za7,
		BGl_z62nodezd2freezd2funcall1310z62zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1994z00zzglobaliza7e_freeza7,
		BgL_bgl_za762nodeza7d2freeza7d2022za7,
		BGl_z62nodezd2freezd2extern1312z62zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1995z00zzglobaliza7e_freeza7,
		BgL_bgl_za762nodeza7d2freeza7d2023za7,
		BGl_z62nodezd2freezd2cast1314z62zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1996z00zzglobaliza7e_freeza7,
		BgL_bgl_za762nodeza7d2freeza7d2024za7,
		BGl_z62nodezd2freezd2setq1316z62zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1997z00zzglobaliza7e_freeza7,
		BgL_bgl_za762nodeza7d2freeza7d2025za7,
		BGl_z62nodezd2freezd2conditiona1318z62zzglobaliza7e_freeza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1998z00zzglobaliza7e_freeza7,
		BgL_bgl_za762nodeza7d2freeza7d2026za7,
		BGl_z62nodezd2freezd2fail1320z62zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1999z00zzglobaliza7e_freeza7,
		BgL_bgl_za762nodeza7d2freeza7d2027za7,
		BGl_z62nodezd2freezd2switch1322z62zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_thezd2globalzd2closurezd2envzd2zzglobaliza7e_freeza7,
		BgL_bgl_za762theza7d2globalza72028za7,
		BGl_z62thezd2globalzd2closurez62zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_freezd2fromzd2envz00zzglobaliza7e_freeza7,
		BgL_bgl_za762freeza7d2fromza7b2029za7,
		BGl_z62freezd2fromzb0zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2007z00zzglobaliza7e_freeza7,
		BgL_bgl_string2007za700za7za7g2030za7, "globalize_free", 14);
	      DEFINE_STRING(BGl_string2008z00zzglobaliza7e_freeza7,
		BgL_bgl_string2008za700za7za7g2031za7,
		"sfun sgfun -env::procedure value make-fx-procedure make-va-procedure ",
		69);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_thezd2closurezd2envz00zzglobaliza7e_freeza7,
		BgL_bgl_za762theza7d2closure2032z00,
		BGl_z62thezd2closurezb0zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2freezd2varszd2envzd2zzglobaliza7e_freeza7,
		BgL_bgl_za762getza7d2freeza7d22033za7,
		BGl_z62getzd2freezd2varsz62zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1982z00zzglobaliza7e_freeza7,
		BgL_bgl_string1982za700za7za7g2034za7, "free-variable?", 14);
	      DEFINE_STRING(BGl_string1983z00zzglobaliza7e_freeza7,
		BgL_bgl_string1983za700za7za7g2035za7, "Unknown variable type", 21);
	      DEFINE_STRING(BGl_string1985z00zzglobaliza7e_freeza7,
		BgL_bgl_string1985za700za7za7g2036za7, "node-free1295", 13);
	      DEFINE_STRING(BGl_string1987z00zzglobaliza7e_freeza7,
		BgL_bgl_string1987za700za7za7g2037za7, "node-free", 9);
	      DEFINE_STATIC_BGL_GENERIC(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
		BgL_bgl_za762nodeza7d2freeza7b2038za7,
		BGl_z62nodezd2freezb0zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2000z00zzglobaliza7e_freeza7,
		BgL_bgl_za762nodeza7d2freeza7d2039za7,
		BGl_z62nodezd2freezd2letzd2fun1324zb0zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2001z00zzglobaliza7e_freeza7,
		BgL_bgl_za762nodeza7d2freeza7d2040za7,
		BGl_z62nodezd2freezd2letzd2var1326zb0zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2002z00zzglobaliza7e_freeza7,
		BgL_bgl_za762nodeza7d2freeza7d2041za7,
		BGl_z62nodezd2freezd2setzd2exzd2it1328z62zzglobaliza7e_freeza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2003z00zzglobaliza7e_freeza7,
		BgL_bgl_za762nodeza7d2freeza7d2042za7,
		BGl_z62nodezd2freezd2jumpzd2exzd2it1330z62zzglobaliza7e_freeza7, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2004z00zzglobaliza7e_freeza7,
		BgL_bgl_za762nodeza7d2freeza7d2043za7,
		BGl_z62nodezd2freezd2makezd2box1332zb0zzglobaliza7e_freeza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2005z00zzglobaliza7e_freeza7,
		BgL_bgl_za762nodeza7d2freeza7d2044za7,
		BGl_z62nodezd2freezd2boxzd2ref1335zb0zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2006z00zzglobaliza7e_freeza7,
		BgL_bgl_za762nodeza7d2freeza7d2045za7,
		BGl_z62nodezd2freezd2boxzd2setz121337za2zzglobaliza7e_freeza7, 0L, BUNSPEC,
		2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2integratorza2z00zzglobaliza7e_freeza7));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzglobaliza7e_freeza7));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_freeza7(long
		BgL_checksumz00_2783, char *BgL_fromz00_2784)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzglobaliza7e_freeza7))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_freeza7 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzglobaliza7e_freeza7();
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_freeza7();
					BGl_cnstzd2initzd2zzglobaliza7e_freeza7();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_freeza7();
					BGl_genericzd2initzd2zzglobaliza7e_freeza7();
					BGl_methodzd2initzd2zzglobaliza7e_freeza7();
					return BGl_toplevelzd2initzd2zzglobaliza7e_freeza7();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_freeza7()
	{
		{	/* Globalize/free.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"globalize_free");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"globalize_free");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"globalize_free");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"globalize_free");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"globalize_free");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"globalize_free");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "globalize_free");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"globalize_free");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"globalize_free");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"globalize_free");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"globalize_free");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzglobaliza7e_freeza7()
	{
		{	/* Globalize/free.scm 15 */
			{	/* Globalize/free.scm 15 */
				obj_t BgL_cportz00_2689;

				{	/* Globalize/free.scm 15 */
					obj_t BgL_stringz00_2697;

					BgL_stringz00_2697 = BGl_string2008z00zzglobaliza7e_freeza7;
					{	/* Globalize/free.scm 15 */
						obj_t BgL_startz00_2698;

						BgL_startz00_2698 = BINT(((long) 0));
						{	/* Globalize/free.scm 15 */
							obj_t BgL_endz00_2699;

							BgL_endz00_2699 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2697)));
							{	/* Globalize/free.scm 15 */

								BgL_cportz00_2689 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2697, BgL_startz00_2698, BgL_endz00_2699);
				}}}}
				{
					long BgL_iz00_2690;

					BgL_iz00_2690 = ((long) 5);
				BgL_loopz00_2691:
					if ((BgL_iz00_2690 == ((long) -1)))
						{	/* Globalize/free.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Globalize/free.scm 15 */
							{	/* Globalize/free.scm 15 */
								obj_t BgL_arg2010z00_2693;

								{	/* Globalize/free.scm 15 */

									{	/* Globalize/free.scm 15 */
										obj_t BgL_locationz00_2695;

										BgL_locationz00_2695 = BBOOL(((bool_t) 0));
										{	/* Globalize/free.scm 15 */

											BgL_arg2010z00_2693 =
												BGl_readz00zz__readerz00(BgL_cportz00_2689,
												BgL_locationz00_2695);
										}
									}
								}
								{	/* Globalize/free.scm 15 */
									int BgL_tmpz00_2815;

									BgL_tmpz00_2815 = (int) (BgL_iz00_2690);
									CNST_TABLE_SET(BgL_tmpz00_2815, BgL_arg2010z00_2693);
							}}
							{	/* Globalize/free.scm 15 */
								int BgL_auxz00_2696;

								BgL_auxz00_2696 = (int) ((BgL_iz00_2690 - ((long) 1)));
								{
									long BgL_iz00_2820;

									BgL_iz00_2820 = (long) (BgL_auxz00_2696);
									BgL_iz00_2690 = BgL_iz00_2820;
									goto BgL_loopz00_2691;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_freeza7()
	{
		{	/* Globalize/free.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzglobaliza7e_freeza7()
	{
		{	/* Globalize/free.scm 15 */
			BGl_za2roundza2z00zzglobaliza7e_freeza7 = ((long) 0);
			BGl_za2integratorza2z00zzglobaliza7e_freeza7 = BUNSPEC;
			return BUNSPEC;
		}

	}



/* mark-variable! */
	obj_t BGl_markzd2variablez12zc0zzglobaliza7e_freeza7(BgL_localz00_bglt
		BgL_localz00_3)
	{
		{	/* Globalize/free.scm 44 */
			{	/* Globalize/free.scm 45 */
				BgL_valuez00_bglt BgL_infoz00_1727;

				BgL_infoz00_1727 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_localz00_3)))->BgL_valuez00);
				{	/* Globalize/free.scm 47 */
					bool_t BgL_test2048z00_2825;

					{	/* Globalize/free.scm 47 */
						bool_t BgL_res1922z00_2323;

						BgL_res1922z00_2323 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_infoz00_1727),
							BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
						BgL_test2048z00_2825 = BgL_res1922z00_2323;
					}
					if (BgL_test2048z00_2825)
						{	/* Globalize/free.scm 48 */
							long BgL_vz00_2325;

							BgL_vz00_2325 = BGl_za2roundza2z00zzglobaliza7e_freeza7;
							{
								BgL_svarzf2ginfozf2_bglt BgL_auxz00_2828;

								{
									obj_t BgL_auxz00_2829;

									{	/* Globalize/free.scm 48 */
										BgL_objectz00_bglt BgL_tmpz00_2830;

										BgL_tmpz00_2830 =
											((BgL_objectz00_bglt)
											((BgL_svarz00_bglt) BgL_infoz00_1727));
										BgL_auxz00_2829 = BGL_OBJECT_WIDENING(BgL_tmpz00_2830);
									}
									BgL_auxz00_2828 =
										((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_2829);
								}
								return
									((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2828))->
										BgL_freezd2markzd2) = ((long) BgL_vz00_2325), BUNSPEC);
						}}
					else
						{	/* Globalize/free.scm 49 */
							bool_t BgL_test2049z00_2836;

							{	/* Globalize/free.scm 49 */
								bool_t BgL_res1923z00_2327;

								BgL_res1923z00_2327 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_infoz00_1727),
									BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7);
								BgL_test2049z00_2836 = BgL_res1923z00_2327;
							}
							if (BgL_test2049z00_2836)
								{	/* Globalize/free.scm 50 */
									obj_t BgL_vz00_2329;

									BgL_vz00_2329 = BINT(BGl_za2roundza2z00zzglobaliza7e_freeza7);
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2840;

										{
											obj_t BgL_auxz00_2841;

											{	/* Globalize/free.scm 50 */
												BgL_objectz00_bglt BgL_tmpz00_2842;

												BgL_tmpz00_2842 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_infoz00_1727));
												BgL_auxz00_2841 = BGL_OBJECT_WIDENING(BgL_tmpz00_2842);
											}
											BgL_auxz00_2840 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2841);
										}
										return
											((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2840))->
												BgL_freezd2markzd2) = ((obj_t) BgL_vz00_2329), BUNSPEC);
									}
								}
							else
								{	/* Globalize/free.scm 51 */
									bool_t BgL_test2050z00_2848;

									{	/* Globalize/free.scm 51 */
										bool_t BgL_res1924z00_2331;

										BgL_res1924z00_2331 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_infoz00_1727),
											BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7);
										BgL_test2050z00_2848 = BgL_res1924z00_2331;
									}
									if (BgL_test2050z00_2848)
										{	/* Globalize/free.scm 52 */
											long BgL_vz00_2333;

											BgL_vz00_2333 = BGl_za2roundza2z00zzglobaliza7e_freeza7;
											{
												BgL_sexitzf2ginfozf2_bglt BgL_auxz00_2851;

												{
													obj_t BgL_auxz00_2852;

													{	/* Globalize/free.scm 52 */
														BgL_objectz00_bglt BgL_tmpz00_2853;

														BgL_tmpz00_2853 =
															((BgL_objectz00_bglt)
															((BgL_sexitz00_bglt) BgL_infoz00_1727));
														BgL_auxz00_2852 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_2853);
													}
													BgL_auxz00_2851 =
														((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_2852);
												}
												return
													((((BgL_sexitzf2ginfozf2_bglt)
															COBJECT(BgL_auxz00_2851))->BgL_freezd2markzd2) =
													((long) BgL_vz00_2333), BUNSPEC);
										}}
									else
										{	/* Globalize/free.scm 51 */
											return BFALSE;
										}
								}
						}
				}
			}
		}

	}



/* bind-variable! */
	obj_t BGl_bindzd2variablez12zc0zzglobaliza7e_freeza7(BgL_localz00_bglt
		BgL_localz00_4, BgL_localz00_bglt BgL_integratorz00_5)
	{
		{	/* Globalize/free.scm 57 */
			{	/* Globalize/free.scm 58 */
				BgL_valuez00_bglt BgL_finfoz00_1731;

				BgL_finfoz00_1731 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_integratorz00_5)))->BgL_valuez00);
				{	/* Globalize/free.scm 59 */
					obj_t BgL_arg1357z00_1732;

					{	/* Globalize/free.scm 59 */
						obj_t BgL_arg1360z00_1733;

						{
							BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2861;

							{
								obj_t BgL_auxz00_2862;

								{	/* Globalize/free.scm 59 */
									BgL_objectz00_bglt BgL_tmpz00_2863;

									BgL_tmpz00_2863 =
										((BgL_objectz00_bglt)
										((BgL_sfunz00_bglt) BgL_finfoz00_1731));
									BgL_auxz00_2862 = BGL_OBJECT_WIDENING(BgL_tmpz00_2863);
								}
								BgL_auxz00_2861 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2862);
							}
							BgL_arg1360z00_1733 =
								(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2861))->
								BgL_boundz00);
						}
						BgL_arg1357z00_1732 =
							MAKE_YOUNG_PAIR(((obj_t) BgL_localz00_4), BgL_arg1360z00_1733);
					}
					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2871;

						{
							obj_t BgL_auxz00_2872;

							{	/* Globalize/free.scm 59 */
								BgL_objectz00_bglt BgL_tmpz00_2873;

								BgL_tmpz00_2873 =
									((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_finfoz00_1731));
								BgL_auxz00_2872 = BGL_OBJECT_WIDENING(BgL_tmpz00_2873);
							}
							BgL_auxz00_2871 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2872);
						}
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2871))->
								BgL_boundz00) = ((obj_t) BgL_arg1357z00_1732), BUNSPEC);
					}
				}
				return BGl_markzd2variablez12zc0zzglobaliza7e_freeza7(BgL_localz00_4);
			}
		}

	}



/* free-variable? */
	obj_t BGl_freezd2variablezf3z21zzglobaliza7e_freeza7(obj_t BgL_localz00_6)
	{
		{	/* Globalize/free.scm 65 */
			if (BGl_isazf3zf3zz__objectz00(BgL_localz00_6, BGl_localz00zzast_varz00))
				{	/* Globalize/free.scm 67 */
					BgL_valuez00_bglt BgL_infoz00_1735;

					BgL_infoz00_1735 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_localz00_6))))->BgL_valuez00);
					{	/* Globalize/free.scm 69 */
						bool_t BgL_test2052z00_2885;

						{	/* Globalize/free.scm 69 */
							bool_t BgL_res1926z00_2342;

							BgL_res1926z00_2342 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_infoz00_1735),
								BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
							BgL_test2052z00_2885 = BgL_res1926z00_2342;
						}
						if (BgL_test2052z00_2885)
							{	/* Globalize/free.scm 70 */
								bool_t BgL_test2053z00_2888;

								{	/* Globalize/free.scm 70 */
									long BgL_arg1367z00_1739;

									{
										BgL_svarzf2ginfozf2_bglt BgL_auxz00_2889;

										{
											obj_t BgL_auxz00_2890;

											{	/* Globalize/free.scm 70 */
												BgL_objectz00_bglt BgL_tmpz00_2891;

												BgL_tmpz00_2891 =
													((BgL_objectz00_bglt)
													((BgL_svarz00_bglt) BgL_infoz00_1735));
												BgL_auxz00_2890 = BGL_OBJECT_WIDENING(BgL_tmpz00_2891);
											}
											BgL_auxz00_2889 =
												((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_2890);
										}
										BgL_arg1367z00_1739 =
											(((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2889))->
											BgL_freezd2markzd2);
									}
									BgL_test2053z00_2888 =
										(BgL_arg1367z00_1739 ==
										BGl_za2roundza2z00zzglobaliza7e_freeza7);
								}
								if (BgL_test2053z00_2888)
									{	/* Globalize/free.scm 70 */
										return BFALSE;
									}
								else
									{	/* Globalize/free.scm 70 */
										return BTRUE;
									}
							}
						else
							{	/* Globalize/free.scm 71 */
								bool_t BgL_test2054z00_2898;

								{	/* Globalize/free.scm 71 */
									bool_t BgL_res1927z00_2345;

									BgL_res1927z00_2345 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_infoz00_1735),
										BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7);
									BgL_test2054z00_2898 = BgL_res1927z00_2345;
								}
								if (BgL_test2054z00_2898)
									{	/* Globalize/free.scm 72 */
										bool_t BgL_test2055z00_2901;

										{	/* Globalize/free.scm 72 */
											obj_t BgL_arg1381z00_1743;

											{
												BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2902;

												{
													obj_t BgL_auxz00_2903;

													{	/* Globalize/free.scm 72 */
														BgL_objectz00_bglt BgL_tmpz00_2904;

														BgL_tmpz00_2904 =
															((BgL_objectz00_bglt)
															((BgL_sfunz00_bglt) BgL_infoz00_1735));
														BgL_auxz00_2903 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_2904);
													}
													BgL_auxz00_2902 =
														((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2903);
												}
												BgL_arg1381z00_1743 =
													(((BgL_sfunzf2ginfozf2_bglt)
														COBJECT(BgL_auxz00_2902))->BgL_freezd2markzd2);
											}
											BgL_test2055z00_2901 =
												(BgL_arg1381z00_1743 ==
												BINT(BGl_za2roundza2z00zzglobaliza7e_freeza7));
										}
										if (BgL_test2055z00_2901)
											{	/* Globalize/free.scm 72 */
												return BFALSE;
											}
										else
											{	/* Globalize/free.scm 72 */
												return BTRUE;
											}
									}
								else
									{	/* Globalize/free.scm 73 */
										bool_t BgL_test2056z00_2912;

										{	/* Globalize/free.scm 73 */
											bool_t BgL_res1928z00_2348;

											BgL_res1928z00_2348 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_infoz00_1735),
												BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7);
											BgL_test2056z00_2912 = BgL_res1928z00_2348;
										}
										if (BgL_test2056z00_2912)
											{	/* Globalize/free.scm 74 */
												bool_t BgL_test2057z00_2915;

												{	/* Globalize/free.scm 74 */
													long BgL_arg1396z00_1747;

													{
														BgL_sexitzf2ginfozf2_bglt BgL_auxz00_2916;

														{
															obj_t BgL_auxz00_2917;

															{	/* Globalize/free.scm 74 */
																BgL_objectz00_bglt BgL_tmpz00_2918;

																BgL_tmpz00_2918 =
																	((BgL_objectz00_bglt)
																	((BgL_sexitz00_bglt) BgL_infoz00_1735));
																BgL_auxz00_2917 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_2918);
															}
															BgL_auxz00_2916 =
																((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_2917);
														}
														BgL_arg1396z00_1747 =
															(((BgL_sexitzf2ginfozf2_bglt)
																COBJECT(BgL_auxz00_2916))->BgL_freezd2markzd2);
													}
													BgL_test2057z00_2915 =
														(BgL_arg1396z00_1747 ==
														BGl_za2roundza2z00zzglobaliza7e_freeza7);
												}
												if (BgL_test2057z00_2915)
													{	/* Globalize/free.scm 74 */
														return BFALSE;
													}
												else
													{	/* Globalize/free.scm 74 */
														return BTRUE;
													}
											}
										else
											{	/* Globalize/free.scm 78 */
												obj_t BgL_arg1417z00_1748;

												BgL_arg1417z00_1748 =
													MAKE_YOUNG_PAIR(BgL_localz00_6,
													BGl_shapez00zztools_shapez00(BgL_localz00_6));
												return
													BGl_errorz00zz__errorz00
													(BGl_string1982z00zzglobaliza7e_freeza7,
													BGl_string1983z00zzglobaliza7e_freeza7,
													BgL_arg1417z00_1748);
											}
									}
							}
					}
				}
			else
				{	/* Globalize/free.scm 66 */
					return BFALSE;
				}
		}

	}



/* get-free-vars */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2freezd2varsz00zzglobaliza7e_freeza7(BgL_nodez00_bglt
		BgL_nodez00_7, BgL_localz00_bglt BgL_integratorz00_8)
	{
		{	/* Globalize/free.scm 86 */
			{	/* Globalize/free.scm 89 */
				obj_t BgL_freez00_1750;

				{	/* Globalize/free.scm 89 */
					BgL_sfunz00_bglt BgL_oz00_2352;

					BgL_oz00_2352 =
						((BgL_sfunz00_bglt)
						(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_integratorz00_8)))->
							BgL_valuez00));
					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2931;

						{
							obj_t BgL_auxz00_2932;

							{	/* Globalize/free.scm 89 */
								BgL_objectz00_bglt BgL_tmpz00_2933;

								BgL_tmpz00_2933 = ((BgL_objectz00_bglt) BgL_oz00_2352);
								BgL_auxz00_2932 = BGL_OBJECT_WIDENING(BgL_tmpz00_2933);
							}
							BgL_auxz00_2931 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2932);
						}
						BgL_freez00_1750 =
							(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2931))->
							BgL_freez00);
					}
				}
				{	/* Globalize/free.scm 90 */
					bool_t BgL_test2058z00_2938;

					if (NULLP(BgL_freez00_1750))
						{	/* Globalize/free.scm 90 */
							BgL_test2058z00_2938 = ((bool_t) 1);
						}
					else
						{	/* Globalize/free.scm 90 */
							BgL_test2058z00_2938 = PAIRP(BgL_freez00_1750);
						}
					if (BgL_test2058z00_2938)
						{	/* Globalize/free.scm 90 */
							return BgL_freez00_1750;
						}
					else
						{	/* Globalize/free.scm 92 */
							obj_t BgL_freez00_1753;

							BgL_freez00_1753 =
								BGl_internalzd2getzd2freezd2varsz12zc0zzglobaliza7e_freeza7
								(BgL_nodez00_7, BgL_integratorz00_8);
							{	/* Globalize/free.scm 93 */
								BgL_valuez00_bglt BgL_arg1421z00_1754;

								BgL_arg1421z00_1754 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_integratorz00_8)))->
									BgL_valuez00);
								{
									BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2945;

									{
										obj_t BgL_auxz00_2946;

										{	/* Globalize/free.scm 93 */
											BgL_objectz00_bglt BgL_tmpz00_2947;

											BgL_tmpz00_2947 =
												((BgL_objectz00_bglt)
												((BgL_sfunz00_bglt) BgL_arg1421z00_1754));
											BgL_auxz00_2946 = BGL_OBJECT_WIDENING(BgL_tmpz00_2947);
										}
										BgL_auxz00_2945 =
											((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2946);
									}
									((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2945))->
											BgL_freez00) = ((obj_t) BgL_freez00_1753), BUNSPEC);
								}
							}
							return BgL_freez00_1753;
						}
				}
			}
		}

	}



/* &get-free-vars */
	obj_t BGl_z62getzd2freezd2varsz62zzglobaliza7e_freeza7(obj_t BgL_envz00_2590,
		obj_t BgL_nodez00_2591, obj_t BgL_integratorz00_2592)
	{
		{	/* Globalize/free.scm 86 */
			return
				BGl_getzd2freezd2varsz00zzglobaliza7e_freeza7(
				((BgL_nodez00_bglt) BgL_nodez00_2591),
				((BgL_localz00_bglt) BgL_integratorz00_2592));
		}

	}



/* internal-get-free-vars! */
	obj_t
		BGl_internalzd2getzd2freezd2varsz12zc0zzglobaliza7e_freeza7(BgL_nodez00_bglt
		BgL_nodez00_9, BgL_localz00_bglt BgL_integratorz00_10)
	{
		{	/* Globalize/free.scm 107 */
			BGl_za2roundza2z00zzglobaliza7e_freeza7 =
				(BGl_za2roundza2z00zzglobaliza7e_freeza7 + ((long) 1));
			BGl_za2integratorza2z00zzglobaliza7e_freeza7 =
				((obj_t) BgL_integratorz00_10);
			BGl_bindzd2variablez12zc0zzglobaliza7e_freeza7(BgL_integratorz00_10,
				BgL_integratorz00_10);
			{	/* Globalize/free.scm 114 */
				obj_t BgL_arg1441z00_1757;

				{	/* Globalize/free.scm 338 */
					bool_t BgL_test2060z00_2959;

					{	/* Globalize/free.scm 338 */
						bool_t BgL_res1932z00_2363;

						BgL_res1932z00_2363 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t)
								((BgL_variablez00_bglt) BgL_integratorz00_10)),
							BGl_globalz00zzast_varz00);
						BgL_test2060z00_2959 = BgL_res1932z00_2363;
					}
					if (BgL_test2060z00_2959)
						{	/* Globalize/free.scm 338 */
							BgL_arg1441z00_1757 =
								BGl_thezd2globalzd2closurez00zzglobaliza7e_freeza7(
								((BgL_globalz00_bglt)
									((BgL_variablez00_bglt) BgL_integratorz00_10)), BFALSE);
						}
					else
						{	/* Globalize/free.scm 338 */
							BgL_arg1441z00_1757 =
								BGl_thezd2localzd2closurez00zzglobaliza7e_freeza7(
								((obj_t)
									((BgL_variablez00_bglt) BgL_integratorz00_10)), BFALSE);
						}
				}
				BGl_bindzd2variablez12zc0zzglobaliza7e_freeza7(
					((BgL_localz00_bglt) BgL_arg1441z00_1757), BgL_integratorz00_10);
			}
			{	/* Globalize/free.scm 115 */
				obj_t BgL_g1280z00_1758;

				BgL_g1280z00_1758 =
					(((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt)
								(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_integratorz00_10)))->
									BgL_valuez00))))->BgL_argsz00);
				{
					obj_t BgL_l1278z00_1760;

					BgL_l1278z00_1760 = BgL_g1280z00_1758;
				BgL_zc3z04anonymousza31442ze3z87_1761:
					if (PAIRP(BgL_l1278z00_1760))
						{	/* Globalize/free.scm 116 */
							{	/* Globalize/free.scm 115 */
								obj_t BgL_lz00_1763;

								BgL_lz00_1763 = CAR(BgL_l1278z00_1760);
								BGl_bindzd2variablez12zc0zzglobaliza7e_freeza7(
									((BgL_localz00_bglt) BgL_lz00_1763), BgL_integratorz00_10);
							}
							{
								obj_t BgL_l1278z00_2980;

								BgL_l1278z00_2980 = CDR(BgL_l1278z00_1760);
								BgL_l1278z00_1760 = BgL_l1278z00_2980;
								goto BgL_zc3z04anonymousza31442ze3z87_1761;
							}
						}
					else
						{	/* Globalize/free.scm 116 */
							((bool_t) 1);
						}
				}
			}
			return BGl_nodezd2freezd2zzglobaliza7e_freeza7(BgL_nodez00_9, BNIL);
		}

	}



/* node-free* */
	obj_t BGl_nodezd2freeza2z70zzglobaliza7e_freeza7(obj_t BgL_nodeza2za2_53,
		obj_t BgL_freez00_54)
	{
		{	/* Globalize/free.scm 326 */
			{
				obj_t BgL_nodeza2za2_1768;
				obj_t BgL_freez00_1769;

				BgL_nodeza2za2_1768 = BgL_nodeza2za2_53;
				BgL_freez00_1769 = BgL_freez00_54;
			BgL_zc3z04anonymousza31450ze3z87_1770:
				if (NULLP(BgL_nodeza2za2_1768))
					{	/* Globalize/free.scm 329 */
						return BgL_freez00_1769;
					}
				else
					{	/* Globalize/free.scm 331 */
						obj_t BgL_arg1461z00_1772;
						obj_t BgL_arg1462z00_1773;

						BgL_arg1461z00_1772 = CDR(((obj_t) BgL_nodeza2za2_1768));
						{	/* Globalize/free.scm 332 */
							obj_t BgL_arg1464z00_1774;

							BgL_arg1464z00_1774 = CAR(((obj_t) BgL_nodeza2za2_1768));
							BgL_arg1462z00_1773 =
								BGl_nodezd2freezd2zzglobaliza7e_freeza7(
								((BgL_nodez00_bglt) BgL_arg1464z00_1774), BgL_freez00_1769);
						}
						{
							obj_t BgL_freez00_2992;
							obj_t BgL_nodeza2za2_2991;

							BgL_nodeza2za2_2991 = BgL_arg1461z00_1772;
							BgL_freez00_2992 = BgL_arg1462z00_1773;
							BgL_freez00_1769 = BgL_freez00_2992;
							BgL_nodeza2za2_1768 = BgL_nodeza2za2_2991;
							goto BgL_zc3z04anonymousza31450ze3z87_1770;
						}
					}
			}
		}

	}



/* the-closure */
	BGL_EXPORTED_DEF obj_t
		BGl_thezd2closurezd2zzglobaliza7e_freeza7(BgL_variablez00_bglt
		BgL_variablez00_55, obj_t BgL_locz00_56)
	{
		{	/* Globalize/free.scm 337 */
			{	/* Globalize/free.scm 338 */
				bool_t BgL_test2063z00_2993;

				{	/* Globalize/free.scm 338 */
					bool_t BgL_res1935z00_2373;

					BgL_res1935z00_2373 =
						BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_variablez00_55), BGl_globalz00zzast_varz00);
					BgL_test2063z00_2993 = BgL_res1935z00_2373;
				}
				if (BgL_test2063z00_2993)
					{	/* Globalize/free.scm 338 */
						return
							BGl_thezd2globalzd2closurez00zzglobaliza7e_freeza7(
							((BgL_globalz00_bglt) BgL_variablez00_55), BgL_locz00_56);
					}
				else
					{	/* Globalize/free.scm 338 */
						return
							BGl_thezd2localzd2closurez00zzglobaliza7e_freeza7(
							((obj_t) BgL_variablez00_55), BgL_locz00_56);
					}
			}
		}

	}



/* &the-closure */
	obj_t BGl_z62thezd2closurezb0zzglobaliza7e_freeza7(obj_t BgL_envz00_2593,
		obj_t BgL_variablez00_2594, obj_t BgL_locz00_2595)
	{
		{	/* Globalize/free.scm 337 */
			return
				BGl_thezd2closurezd2zzglobaliza7e_freeza7(
				((BgL_variablez00_bglt) BgL_variablez00_2594), BgL_locz00_2595);
		}

	}



/* the-global-closure */
	BGL_EXPORTED_DEF obj_t
		BGl_thezd2globalzd2closurez00zzglobaliza7e_freeza7(BgL_globalz00_bglt
		BgL_globalz00_57, obj_t BgL_locz00_58)
	{
		{	/* Globalize/free.scm 345 */
			{
				BgL_globalz00_bglt BgL_gz00_1826;

				{	/* Globalize/free.scm 354 */
					obj_t BgL_closurez00_1778;

					BgL_closurez00_1778 =
						(((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt)
									(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_globalz00_57)))->
										BgL_valuez00))))->BgL_thezd2closurezd2);
					if (BGl_isazf3zf3zz__objectz00(BgL_closurez00_1778,
							BGl_globalz00zzast_varz00))
						{	/* Globalize/free.scm 356 */
							return BgL_closurez00_1778;
						}
					else
						{	/* Globalize/free.scm 358 */
							obj_t BgL_g1130z00_1780;

							BgL_gz00_1826 = BgL_globalz00_57;
							if (CBOOL(
									(((BgL_globalz00_bglt) COBJECT(BgL_gz00_1826))->
										BgL_aliasz00)))
								{	/* Globalize/free.scm 350 */
									obj_t BgL_agz00_1830;

									{	/* Globalize/free.scm 350 */
										obj_t BgL_arg1597z00_1832;
										obj_t BgL_arg1599z00_1833;

										BgL_arg1597z00_1832 =
											(((BgL_globalz00_bglt) COBJECT(BgL_gz00_1826))->
											BgL_aliasz00);
										BgL_arg1599z00_1833 =
											(((BgL_globalz00_bglt) COBJECT(BgL_gz00_1826))->
											BgL_modulez00);
										{	/* Globalize/free.scm 350 */
											obj_t BgL_list1600z00_1834;

											BgL_list1600z00_1834 =
												MAKE_YOUNG_PAIR(BgL_arg1599z00_1833, BNIL);
											BgL_agz00_1830 =
												BGl_findzd2globalzd2zzast_envz00(BgL_arg1597z00_1832,
												BgL_list1600z00_1834);
										}
									}
									if (BGl_isazf3zf3zz__objectz00(BgL_agz00_1830,
											BGl_globalz00zzast_varz00))
										{	/* Globalize/free.scm 351 */
											BgL_g1130z00_1780 =
												BGl_thezd2globalzd2closurez00zzglobaliza7e_freeza7(
												((BgL_globalz00_bglt) BgL_agz00_1830), BgL_locz00_58);
										}
									else
										{	/* Globalize/free.scm 351 */
											BgL_g1130z00_1780 = BFALSE;
										}
								}
							else
								{	/* Globalize/free.scm 349 */
									BgL_g1130z00_1780 = BFALSE;
								}
							if (CBOOL(BgL_g1130z00_1780))
								{	/* Globalize/free.scm 358 */
									{	/* Globalize/free.scm 361 */
										BgL_valuez00_bglt BgL_arg1474z00_1783;

										BgL_arg1474z00_1783 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_globalz00_57)))->
											BgL_valuez00);
										((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_arg1474z00_1783)))->BgL_thezd2closurezd2) =
											((obj_t) BgL_g1130z00_1780), BUNSPEC);
									}
									return BgL_g1130z00_1780;
								}
							else
								{	/* Globalize/free.scm 364 */
									BgL_globalz00_bglt BgL_glocloz00_1784;

									BgL_glocloz00_1784 =
										BGl_makezd2globalzd2closurez00zzglobaliza7e_globalzd2closurez75
										(BgL_globalz00_57);
									{	/* Globalize/free.scm 364 */
										long BgL_arityz00_1785;

										BgL_arityz00_1785 =
											(((BgL_funz00_bglt) COBJECT(
													((BgL_funz00_bglt)
														(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt) BgL_globalz00_57)))->
															BgL_valuez00))))->BgL_arityz00);
										{	/* Globalize/free.scm 365 */
											obj_t BgL_makezd2clozd2_1786;

											if ((BgL_arityz00_1785 < ((long) 0)))
												{	/* Globalize/free.scm 366 */
													BgL_makezd2clozd2_1786 = CNST_TABLE_REF(((long) 0));
												}
											else
												{	/* Globalize/free.scm 366 */
													BgL_makezd2clozd2_1786 = CNST_TABLE_REF(((long) 1));
												}
											{	/* Globalize/free.scm 366 */
												BgL_nodez00_bglt BgL_nodez00_1787;

												{	/* Globalize/free.scm 370 */
													obj_t BgL_arg1561z00_1807;

													{	/* Globalize/free.scm 370 */
														obj_t BgL_arg1564z00_1808;

														{	/* Globalize/free.scm 370 */
															BgL_varz00_bglt BgL_arg1565z00_1809;
															obj_t BgL_arg1573z00_1810;

															{	/* Globalize/free.scm 370 */
																BgL_varz00_bglt BgL_new1134z00_1811;

																{	/* Globalize/free.scm 373 */
																	BgL_varz00_bglt BgL_new1133z00_1812;

																	BgL_new1133z00_1812 =
																		((BgL_varz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_varz00_bgl))));
																	{	/* Globalize/free.scm 373 */
																		long BgL_arg1575z00_1813;

																		{	/* Globalize/free.scm 373 */
																			long BgL_res1939z00_2385;

																			BgL_res1939z00_2385 =
																				BGL_CLASS_INDEX
																				(BGl_varz00zzast_nodez00);
																			BgL_arg1575z00_1813 = BgL_res1939z00_2385;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1133z00_1812),
																			BgL_arg1575z00_1813);
																	}
																	BgL_new1134z00_1811 = BgL_new1133z00_1812;
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1134z00_1811)))->BgL_locz00) =
																	((obj_t) BgL_locz00_58), BUNSPEC);
																((((BgL_nodez00_bglt)
																			COBJECT(((BgL_nodez00_bglt)
																					BgL_new1134z00_1811)))->BgL_typez00) =
																	((BgL_typez00_bglt) ((BgL_typez00_bglt)
																			BGl_za2_za2z00zztype_cachez00)), BUNSPEC);
																((((BgL_varz00_bglt)
																			COBJECT(BgL_new1134z00_1811))->
																		BgL_variablez00) =
																	((BgL_variablez00_bglt) (
																			(BgL_variablez00_bglt)
																			BgL_glocloz00_1784)), BUNSPEC);
																BgL_arg1565z00_1809 = BgL_new1134z00_1811;
															}
															{	/* Globalize/free.scm 374 */
																BgL_literalz00_bglt BgL_arg1578z00_1814;
																obj_t BgL_arg1582z00_1815;

																{	/* Globalize/free.scm 374 */
																	BgL_literalz00_bglt BgL_new1136z00_1816;

																	{	/* Globalize/free.scm 377 */
																		BgL_literalz00_bglt BgL_new1135z00_1817;

																		BgL_new1135z00_1817 =
																			((BgL_literalz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_literalz00_bgl))));
																		{	/* Globalize/free.scm 377 */
																			long BgL_arg1584z00_1818;

																			{	/* Globalize/free.scm 377 */
																				long BgL_res1940z00_2389;

																				BgL_res1940z00_2389 =
																					BGL_CLASS_INDEX
																					(BGl_literalz00zzast_nodez00);
																				BgL_arg1584z00_1818 =
																					BgL_res1940z00_2389;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1135z00_1817),
																				BgL_arg1584z00_1818);
																		}
																		{	/* Globalize/free.scm 377 */
																			BgL_objectz00_bglt BgL_tmpz00_3049;

																			BgL_tmpz00_3049 =
																				((BgL_objectz00_bglt)
																				BgL_new1135z00_1817);
																			BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3049,
																				BFALSE);
																		}
																		((BgL_objectz00_bglt) BgL_new1135z00_1817);
																		BgL_new1136z00_1816 = BgL_new1135z00_1817;
																	}
																	((((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						BgL_new1136z00_1816)))->
																			BgL_locz00) =
																		((obj_t) BgL_locz00_58), BUNSPEC);
																	((((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt)
																						BgL_new1136z00_1816)))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) ((BgL_typez00_bglt)
																				BGl_za2_za2z00zztype_cachez00)),
																		BUNSPEC);
																	((((BgL_atomz00_bglt)
																				COBJECT(((BgL_atomz00_bglt)
																						BgL_new1136z00_1816)))->
																			BgL_valuez00) =
																		((obj_t) BINT(BgL_arityz00_1785)), BUNSPEC);
																	BgL_arg1578z00_1814 = BgL_new1136z00_1816;
																}
																{	/* Globalize/free.scm 378 */
																	BgL_literalz00_bglt BgL_arg1588z00_1819;

																	{	/* Globalize/free.scm 378 */
																		BgL_literalz00_bglt BgL_new1138z00_1820;

																		{	/* Globalize/free.scm 381 */
																			BgL_literalz00_bglt BgL_new1137z00_1821;

																			BgL_new1137z00_1821 =
																				((BgL_literalz00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_literalz00_bgl))));
																			{	/* Globalize/free.scm 381 */
																				long BgL_arg1589z00_1822;

																				{	/* Globalize/free.scm 381 */
																					long BgL_res1941z00_2394;

																					BgL_res1941z00_2394 =
																						BGL_CLASS_INDEX
																						(BGl_literalz00zzast_nodez00);
																					BgL_arg1589z00_1822 =
																						BgL_res1941z00_2394;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1137z00_1821),
																					BgL_arg1589z00_1822);
																			}
																			{	/* Globalize/free.scm 381 */
																				BgL_objectz00_bglt BgL_tmpz00_3065;

																				BgL_tmpz00_3065 =
																					((BgL_objectz00_bglt)
																					BgL_new1137z00_1821);
																				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3065,
																					BFALSE);
																			}
																			((BgL_objectz00_bglt)
																				BgL_new1137z00_1821);
																			BgL_new1138z00_1820 = BgL_new1137z00_1821;
																		}
																		((((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							BgL_new1138z00_1820)))->
																				BgL_locz00) =
																			((obj_t) BgL_locz00_58), BUNSPEC);
																		((((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt)
																							BgL_new1138z00_1820)))->
																				BgL_typez00) =
																			((BgL_typez00_bglt) ((BgL_typez00_bglt)
																					BGl_za2_za2z00zztype_cachez00)),
																			BUNSPEC);
																		((((BgL_atomz00_bglt)
																					COBJECT(((BgL_atomz00_bglt)
																							BgL_new1138z00_1820)))->
																				BgL_valuez00) =
																			((obj_t) BINT(((long) 0))), BUNSPEC);
																		BgL_arg1588z00_1819 = BgL_new1138z00_1820;
																	}
																	BgL_arg1582z00_1815 =
																		MAKE_YOUNG_PAIR(
																		((obj_t) BgL_arg1588z00_1819), BNIL);
																}
																BgL_arg1573z00_1810 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_arg1578z00_1814),
																	BgL_arg1582z00_1815);
															}
															BgL_arg1564z00_1808 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_arg1565z00_1809),
																BgL_arg1573z00_1810);
														}
														BgL_arg1561z00_1807 =
															MAKE_YOUNG_PAIR(BgL_makezd2clozd2_1786,
															BgL_arg1564z00_1808);
													}
													BgL_nodez00_1787 =
														BGl_sexpzd2ze3nodez31zzast_sexpz00
														(BgL_arg1561z00_1807, BNIL, BgL_locz00_58,
														CNST_TABLE_REF(((long) 2)));
												}
												{	/* Globalize/free.scm 369 */
													BgL_globalz00_bglt BgL_closurez00_1788;

													{	/* Globalize/free.scm 386 */
														obj_t BgL_arg1495z00_1793;
														obj_t BgL_arg1497z00_1794;
														obj_t BgL_arg1518z00_1795;

														{	/* Globalize/free.scm 386 */
															obj_t BgL_arg1521z00_1796;

															{	/* Globalize/free.scm 386 */
																obj_t BgL_arg1528z00_1797;
																obj_t BgL_arg1536z00_1798;

																{	/* Globalize/free.scm 386 */
																	obj_t BgL_arg1537z00_1799;

																	if (CBOOL(
																			(((BgL_globalz00_bglt)
																					COBJECT(BgL_globalz00_57))->
																				BgL_aliasz00)))
																		{	/* Globalize/free.scm 386 */
																			BgL_arg1537z00_1799 =
																				(((BgL_globalz00_bglt)
																					COBJECT(BgL_globalz00_57))->
																				BgL_aliasz00);
																		}
																	else
																		{	/* Globalize/free.scm 386 */
																			BgL_arg1537z00_1799 =
																				(((BgL_variablez00_bglt) COBJECT(
																						((BgL_variablez00_bglt)
																							BgL_globalz00_57)))->BgL_idz00);
																		}
																	{	/* Globalize/free.scm 385 */
																		obj_t BgL_res1942z00_2403;

																		{	/* Globalize/free.scm 385 */
																			obj_t BgL_arg1466z00_2402;

																			BgL_arg1466z00_2402 =
																				SYMBOL_TO_STRING(
																				((obj_t) BgL_arg1537z00_1799));
																			BgL_res1942z00_2403 =
																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																				(BgL_arg1466z00_2402);
																		}
																		BgL_arg1528z00_1797 = BgL_res1942z00_2403;
																	}
																}
																{	/* Globalize/free.scm 385 */
																	obj_t BgL_res1943z00_2406;

																	{	/* Globalize/free.scm 385 */
																		obj_t BgL_symbolz00_2404;

																		BgL_symbolz00_2404 =
																			CNST_TABLE_REF(((long) 3));
																		{	/* Globalize/free.scm 385 */
																			obj_t BgL_arg1466z00_2405;

																			BgL_arg1466z00_2405 =
																				SYMBOL_TO_STRING(BgL_symbolz00_2404);
																			BgL_res1943z00_2406 =
																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																				(BgL_arg1466z00_2405);
																	}}
																	BgL_arg1536z00_1798 = BgL_res1943z00_2406;
																}
																BgL_arg1521z00_1796 =
																	string_append(BgL_arg1528z00_1797,
																	BgL_arg1536z00_1798);
															}
															BgL_arg1495z00_1793 =
																bstring_to_symbol(BgL_arg1521z00_1796);
														}
														BgL_arg1497z00_1794 =
															(((BgL_globalz00_bglt)
																COBJECT(BgL_globalz00_57))->BgL_modulez00);
														{	/* Globalize/free.scm 392 */
															bool_t BgL_test2070z00_3101;

															{	/* Globalize/free.scm 392 */
																BgL_valuez00_bglt BgL_arg1558z00_1806;

																BgL_arg1558z00_1806 =
																	(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				BgL_globalz00_57)))->BgL_valuez00);
																{	/* Globalize/free.scm 392 */
																	bool_t BgL_res1945z00_2411;

																	BgL_res1945z00_2411 =
																		BGl_isazf3zf3zz__objectz00(
																		((obj_t) BgL_arg1558z00_1806),
																		BGl_sfunz00zzast_varz00);
																	BgL_test2070z00_3101 = BgL_res1945z00_2411;
															}}
															if (BgL_test2070z00_3101)
																{	/* Globalize/free.scm 392 */
																	if (
																		((((BgL_sfunz00_bglt) COBJECT(
																						((BgL_sfunz00_bglt)
																							(((BgL_variablez00_bglt) COBJECT(
																										((BgL_variablez00_bglt)
																											BgL_globalz00_57)))->
																								BgL_valuez00))))->
																				BgL_classz00) ==
																			CNST_TABLE_REF(((long) 4))))
																		{	/* Globalize/free.scm 393 */
																			BgL_arg1518z00_1795 =
																				CNST_TABLE_REF(((long) 4));
																		}
																	else
																		{	/* Globalize/free.scm 393 */
																			BgL_arg1518z00_1795 =
																				CNST_TABLE_REF(((long) 5));
																}}
															else
																{	/* Globalize/free.scm 392 */
																	BgL_arg1518z00_1795 =
																		CNST_TABLE_REF(((long) 5));
														}}
														BgL_closurez00_1788 =
															BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2
															(BgL_arg1495z00_1793, BgL_arg1497z00_1794,
															((obj_t) BgL_nodez00_1787), BgL_arg1518z00_1795,
															BgL_locz00_58);
													}
													{	/* Globalize/free.scm 385 */

														((((BgL_globalz00_bglt)
																	COBJECT(BgL_closurez00_1788))->
																BgL_libraryz00) =
															((obj_t) (((BgL_globalz00_bglt)
																		COBJECT(BgL_globalz00_57))->
																	BgL_libraryz00)), BUNSPEC);
														((((BgL_globalz00_bglt)
																	COBJECT(BgL_closurez00_1788))->
																BgL_importz00) =
															((obj_t) (((BgL_globalz00_bglt)
																		COBJECT(BgL_globalz00_57))->BgL_importz00)),
															BUNSPEC);
														{	/* Globalize/free.scm 402 */
															BgL_valuez00_bglt BgL_arg1489z00_1791;

															BgL_arg1489z00_1791 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			BgL_globalz00_57)))->BgL_valuez00);
															((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																				BgL_arg1489z00_1791)))->
																	BgL_thezd2closurezd2) =
																((obj_t) ((obj_t) BgL_closurez00_1788)),
																BUNSPEC);
														}
														{	/* Globalize/free.scm 406 */
															BgL_valuez00_bglt BgL_arg1493z00_1792;

															BgL_arg1493z00_1792 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			BgL_glocloz00_1784)))->BgL_valuez00);
															((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																				BgL_arg1493z00_1792)))->
																	BgL_thezd2closurezd2) =
																((obj_t) ((obj_t) BgL_closurez00_1788)),
																BUNSPEC);
														}
														return ((obj_t) BgL_closurez00_1788);
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



/* &the-global-closure */
	obj_t BGl_z62thezd2globalzd2closurez62zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2596, obj_t BgL_globalz00_2597, obj_t BgL_locz00_2598)
	{
		{	/* Globalize/free.scm 345 */
			return
				BGl_thezd2globalzd2closurez00zzglobaliza7e_freeza7(
				((BgL_globalz00_bglt) BgL_globalz00_2597), BgL_locz00_2598);
		}

	}



/* the-local-closure */
	obj_t BGl_thezd2localzd2closurez00zzglobaliza7e_freeza7(obj_t BgL_localz00_59,
		obj_t BgL_locz00_60)
	{
		{	/* Globalize/free.scm 416 */
			{	/* Globalize/free.scm 417 */
				BgL_valuez00_bglt BgL_infoz00_1836;

				BgL_infoz00_1836 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								((BgL_localz00_bglt) BgL_localz00_59))))->BgL_valuez00);
				{	/* Globalize/free.scm 418 */
					bool_t BgL_test2072z00_3138;

					{	/* Globalize/free.scm 418 */
						obj_t BgL_arg1624z00_1852;

						BgL_arg1624z00_1852 =
							(((BgL_funz00_bglt) COBJECT(
									((BgL_funz00_bglt)
										((BgL_sfunz00_bglt) BgL_infoz00_1836))))->
							BgL_thezd2closurezd2);
						BgL_test2072z00_3138 =
							BGl_isazf3zf3zz__objectz00(BgL_arg1624z00_1852,
							BGl_localz00zzast_varz00);
					}
					if (BgL_test2072z00_3138)
						{	/* Globalize/free.scm 418 */
							return
								(((BgL_funz00_bglt) COBJECT(
										((BgL_funz00_bglt)
											((BgL_sfunz00_bglt) BgL_infoz00_1836))))->
								BgL_thezd2closurezd2);
						}
					else
						{	/* Globalize/free.scm 420 */
							BgL_localz00_bglt BgL_closurez00_1839;

							{	/* Globalize/free.scm 420 */
								obj_t BgL_arg1613z00_1851;

								BgL_arg1613z00_1851 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_localz00_bglt) BgL_localz00_59))))->BgL_idz00);
								BgL_closurez00_1839 =
									BGl_makezd2localzd2svarz00zzast_localz00(BgL_arg1613z00_1851,
									((BgL_typez00_bglt) BGl_za2procedureza2z00zztype_cachez00));
							}
							{	/* Globalize/free.scm 421 */
								bool_t BgL_arg1606z00_1840;

								BgL_arg1606z00_1840 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_localz00_bglt) BgL_localz00_59))))->
									BgL_userzf3zf3);
								((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
													BgL_closurez00_1839)))->BgL_userzf3zf3) =
									((bool_t) BgL_arg1606z00_1840), BUNSPEC);
							}
							{	/* Globalize/free.scm 422 */
								BgL_svarz00_bglt BgL_tmp1139z00_1841;

								BgL_tmp1139z00_1841 =
									((BgL_svarz00_bglt)
									(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_closurez00_1839)))->
										BgL_valuez00));
								{	/* Globalize/free.scm 422 */
									BgL_svarzf2ginfozf2_bglt BgL_wide1141z00_1843;

									BgL_wide1141z00_1843 =
										((BgL_svarzf2ginfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_svarzf2ginfozf2_bgl))));
									{	/* Globalize/free.scm 422 */
										obj_t BgL_auxz00_3163;
										BgL_objectz00_bglt BgL_tmpz00_3160;

										BgL_auxz00_3163 = ((obj_t) BgL_wide1141z00_1843);
										BgL_tmpz00_3160 =
											((BgL_objectz00_bglt)
											((BgL_svarz00_bglt) BgL_tmp1139z00_1841));
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3160, BgL_auxz00_3163);
									}
									((BgL_objectz00_bglt)
										((BgL_svarz00_bglt) BgL_tmp1139z00_1841));
									{	/* Globalize/free.scm 422 */
										long BgL_arg1611z00_1844;

										{	/* Globalize/free.scm 422 */
											long BgL_res1948z00_2435;

											BgL_res1948z00_2435 =
												BGL_CLASS_INDEX
												(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
											BgL_arg1611z00_1844 = BgL_res1948z00_2435;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt)
												((BgL_svarz00_bglt) BgL_tmp1139z00_1841)),
											BgL_arg1611z00_1844);
									}
									((BgL_svarz00_bglt) ((BgL_svarz00_bglt) BgL_tmp1139z00_1841));
								}
								{
									BgL_svarzf2ginfozf2_bglt BgL_auxz00_3174;

									{
										obj_t BgL_auxz00_3175;

										{	/* Globalize/free.scm 422 */
											BgL_objectz00_bglt BgL_tmpz00_3176;

											BgL_tmpz00_3176 =
												((BgL_objectz00_bglt)
												((BgL_svarz00_bglt) BgL_tmp1139z00_1841));
											BgL_auxz00_3175 = BGL_OBJECT_WIDENING(BgL_tmpz00_3176);
										}
										BgL_auxz00_3174 =
											((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3175);
									}
									((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3174))->
											BgL_kapturedzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
								}
								{
									BgL_svarzf2ginfozf2_bglt BgL_auxz00_3182;

									{
										obj_t BgL_auxz00_3183;

										{	/* Globalize/free.scm 422 */
											BgL_objectz00_bglt BgL_tmpz00_3184;

											BgL_tmpz00_3184 =
												((BgL_objectz00_bglt)
												((BgL_svarz00_bglt) BgL_tmp1139z00_1841));
											BgL_auxz00_3183 = BGL_OBJECT_WIDENING(BgL_tmpz00_3184);
										}
										BgL_auxz00_3182 =
											((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3183);
									}
									((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3182))->
											BgL_freezd2markzd2) = ((long) ((long) -10)), BUNSPEC);
								}
								{
									BgL_svarzf2ginfozf2_bglt BgL_auxz00_3190;

									{
										obj_t BgL_auxz00_3191;

										{	/* Globalize/free.scm 422 */
											BgL_objectz00_bglt BgL_tmpz00_3192;

											BgL_tmpz00_3192 =
												((BgL_objectz00_bglt)
												((BgL_svarz00_bglt) BgL_tmp1139z00_1841));
											BgL_auxz00_3191 = BGL_OBJECT_WIDENING(BgL_tmpz00_3192);
										}
										BgL_auxz00_3190 =
											((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3191);
									}
									((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3190))->
											BgL_markz00) = ((long) ((long) -10)), BUNSPEC);
								}
								{
									BgL_svarzf2ginfozf2_bglt BgL_auxz00_3198;

									{
										obj_t BgL_auxz00_3199;

										{	/* Globalize/free.scm 422 */
											BgL_objectz00_bglt BgL_tmpz00_3200;

											BgL_tmpz00_3200 =
												((BgL_objectz00_bglt)
												((BgL_svarz00_bglt) BgL_tmp1139z00_1841));
											BgL_auxz00_3199 = BGL_OBJECT_WIDENING(BgL_tmpz00_3200);
										}
										BgL_auxz00_3198 =
											((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3199);
									}
									((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3198))->
											BgL_celledzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
								}
								{
									BgL_svarzf2ginfozf2_bglt BgL_auxz00_3206;

									{
										obj_t BgL_auxz00_3207;

										{	/* Globalize/free.scm 422 */
											BgL_objectz00_bglt BgL_tmpz00_3208;

											BgL_tmpz00_3208 =
												((BgL_objectz00_bglt)
												((BgL_svarz00_bglt) BgL_tmp1139z00_1841));
											BgL_auxz00_3207 = BGL_OBJECT_WIDENING(BgL_tmpz00_3208);
										}
										BgL_auxz00_3206 =
											((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3207);
									}
									((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3206))->
											BgL_stackablez00) = ((bool_t) ((bool_t) 1)), BUNSPEC);
								}
								((BgL_svarz00_bglt) BgL_tmp1139z00_1841);
							}
							{	/* Globalize/free.scm 423 */
								BgL_localzf2ginfozf2_bglt BgL_wide1145z00_1848;

								BgL_wide1145z00_1848 =
									((BgL_localzf2ginfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_localzf2ginfozf2_bgl))));
								{	/* Globalize/free.scm 423 */
									obj_t BgL_auxz00_3219;
									BgL_objectz00_bglt BgL_tmpz00_3216;

									BgL_auxz00_3219 = ((obj_t) BgL_wide1145z00_1848);
									BgL_tmpz00_3216 =
										((BgL_objectz00_bglt)
										((BgL_localz00_bglt) BgL_closurez00_1839));
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3216, BgL_auxz00_3219);
								}
								((BgL_objectz00_bglt)
									((BgL_localz00_bglt) BgL_closurez00_1839));
								{	/* Globalize/free.scm 423 */
									long BgL_arg1612z00_1849;

									{	/* Globalize/free.scm 423 */
										long BgL_res1949z00_2445;

										BgL_res1949z00_2445 =
											BGL_CLASS_INDEX
											(BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7);
										BgL_arg1612z00_1849 = BgL_res1949z00_2445;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt)
											((BgL_localz00_bglt) BgL_closurez00_1839)),
										BgL_arg1612z00_1849);
								}
								((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_closurez00_1839));
							}
							{
								BgL_localzf2ginfozf2_bglt BgL_auxz00_3230;

								{
									obj_t BgL_auxz00_3231;

									{	/* Globalize/free.scm 423 */
										BgL_objectz00_bglt BgL_tmpz00_3232;

										BgL_tmpz00_3232 =
											((BgL_objectz00_bglt)
											((BgL_localz00_bglt) BgL_closurez00_1839));
										BgL_auxz00_3231 = BGL_OBJECT_WIDENING(BgL_tmpz00_3232);
									}
									BgL_auxz00_3230 =
										((BgL_localzf2ginfozf2_bglt) BgL_auxz00_3231);
								}
								((((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3230))->
										BgL_escapezf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
							}
							{
								BgL_localzf2ginfozf2_bglt BgL_auxz00_3238;

								{
									obj_t BgL_auxz00_3239;

									{	/* Globalize/free.scm 423 */
										BgL_objectz00_bglt BgL_tmpz00_3240;

										BgL_tmpz00_3240 =
											((BgL_objectz00_bglt)
											((BgL_localz00_bglt) BgL_closurez00_1839));
										BgL_auxz00_3239 = BGL_OBJECT_WIDENING(BgL_tmpz00_3240);
									}
									BgL_auxz00_3238 =
										((BgL_localzf2ginfozf2_bglt) BgL_auxz00_3239);
								}
								((((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3238))->
										BgL_globaliza7edzf3z54) = ((bool_t) ((bool_t) 0)), BUNSPEC);
							}
							((BgL_localz00_bglt) BgL_closurez00_1839);
							((((BgL_funz00_bglt) COBJECT(
											((BgL_funz00_bglt)
												((BgL_sfunz00_bglt) BgL_infoz00_1836))))->
									BgL_thezd2closurezd2) =
								((obj_t) ((obj_t) BgL_closurez00_1839)), BUNSPEC);
							return ((obj_t) BgL_closurez00_1839);
						}
				}
			}
		}

	}



/* free-from */
	BGL_EXPORTED_DEF obj_t BGl_freezd2fromzd2zzglobaliza7e_freeza7(obj_t
		BgL_setsz00_61, BgL_localz00_bglt BgL_integratorz00_62)
	{
		{	/* Globalize/free.scm 430 */
			BGl_za2roundza2z00zzglobaliza7e_freeza7 =
				(BGl_za2roundza2z00zzglobaliza7e_freeza7 + ((long) 1));
			{	/* Globalize/free.scm 433 */
				BgL_valuez00_bglt BgL_finfoz00_1853;

				BgL_finfoz00_1853 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_integratorz00_62)))->BgL_valuez00);
				{	/* Globalize/free.scm 440 */
					obj_t BgL_g1289z00_1854;

					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3255;

						{
							obj_t BgL_auxz00_3256;

							{	/* Globalize/free.scm 440 */
								BgL_objectz00_bglt BgL_tmpz00_3257;

								BgL_tmpz00_3257 =
									((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_finfoz00_1853));
								BgL_auxz00_3256 = BGL_OBJECT_WIDENING(BgL_tmpz00_3257);
							}
							BgL_auxz00_3255 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3256);
						}
						BgL_g1289z00_1854 =
							(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3255))->
							BgL_boundz00);
					}
					{
						obj_t BgL_l1287z00_1856;

						BgL_l1287z00_1856 = BgL_g1289z00_1854;
					BgL_zc3z04anonymousza31625ze3z87_1857:
						if (PAIRP(BgL_l1287z00_1856))
							{	/* Globalize/free.scm 440 */
								{	/* Globalize/free.scm 440 */
									obj_t BgL_arg1627z00_1859;

									BgL_arg1627z00_1859 = CAR(BgL_l1287z00_1856);
									BGl_markzd2variablez12zc0zzglobaliza7e_freeza7(
										((BgL_localz00_bglt) BgL_arg1627z00_1859));
								}
								{
									obj_t BgL_l1287z00_3268;

									BgL_l1287z00_3268 = CDR(BgL_l1287z00_1856);
									BgL_l1287z00_1856 = BgL_l1287z00_3268;
									goto BgL_zc3z04anonymousza31625ze3z87_1857;
								}
							}
						else
							{	/* Globalize/free.scm 440 */
								((bool_t) 1);
							}
					}
				}
			}
			if (NULLP(BgL_setsz00_61))
				{	/* Globalize/free.scm 442 */
					return BNIL;
				}
			else
				{	/* Globalize/free.scm 442 */
					obj_t BgL_head1292z00_1864;

					{	/* Globalize/free.scm 442 */
						obj_t BgL_res1955z00_2460;

						BgL_res1955z00_2460 = MAKE_YOUNG_PAIR(BNIL, BNIL);
						BgL_head1292z00_1864 = BgL_res1955z00_2460;
					}
					{
						obj_t BgL_l1290z00_1866;
						obj_t BgL_tail1293z00_1867;

						BgL_l1290z00_1866 = BgL_setsz00_61;
						BgL_tail1293z00_1867 = BgL_head1292z00_1864;
					BgL_zc3z04anonymousza31633ze3z87_1868:
						if (NULLP(BgL_l1290z00_1866))
							{	/* Globalize/free.scm 442 */
								return CDR(BgL_head1292z00_1864);
							}
						else
							{	/* Globalize/free.scm 442 */
								obj_t BgL_newtail1294z00_1870;

								{	/* Globalize/free.scm 442 */
									obj_t BgL_arg1640z00_1872;

									{	/* Globalize/free.scm 442 */
										obj_t BgL_setz00_1873;

										BgL_setz00_1873 = CAR(((obj_t) BgL_l1290z00_1866));
										{
											obj_t BgL_setz00_1876;
											obj_t BgL_resz00_1877;

											BgL_setz00_1876 = BgL_setz00_1873;
											BgL_resz00_1877 = BNIL;
										BgL_zc3z04anonymousza31641ze3z87_1878:
											if (NULLP(BgL_setz00_1876))
												{	/* Globalize/free.scm 446 */
													BgL_arg1640z00_1872 = BgL_resz00_1877;
												}
											else
												{	/* Globalize/free.scm 448 */
													bool_t BgL_test2077z00_3280;

													{	/* Globalize/free.scm 448 */
														obj_t BgL_arg1667z00_1886;

														BgL_arg1667z00_1886 =
															CAR(((obj_t) BgL_setz00_1876));
														BgL_test2077z00_3280 =
															CBOOL
															(BGl_freezd2variablezf3z21zzglobaliza7e_freeza7
															(BgL_arg1667z00_1886));
													}
													if (BgL_test2077z00_3280)
														{	/* Globalize/free.scm 449 */
															obj_t BgL_arg1652z00_1882;
															obj_t BgL_arg1662z00_1883;

															BgL_arg1652z00_1882 =
																CDR(((obj_t) BgL_setz00_1876));
															{	/* Globalize/free.scm 449 */
																obj_t BgL_arg1663z00_1884;

																BgL_arg1663z00_1884 =
																	CAR(((obj_t) BgL_setz00_1876));
																BgL_arg1662z00_1883 =
																	MAKE_YOUNG_PAIR(BgL_arg1663z00_1884,
																	BgL_resz00_1877);
															}
															{
																obj_t BgL_resz00_3291;
																obj_t BgL_setz00_3290;

																BgL_setz00_3290 = BgL_arg1652z00_1882;
																BgL_resz00_3291 = BgL_arg1662z00_1883;
																BgL_resz00_1877 = BgL_resz00_3291;
																BgL_setz00_1876 = BgL_setz00_3290;
																goto BgL_zc3z04anonymousza31641ze3z87_1878;
															}
														}
													else
														{	/* Globalize/free.scm 451 */
															obj_t BgL_arg1664z00_1885;

															BgL_arg1664z00_1885 =
																CDR(((obj_t) BgL_setz00_1876));
															{
																obj_t BgL_setz00_3294;

																BgL_setz00_3294 = BgL_arg1664z00_1885;
																BgL_setz00_1876 = BgL_setz00_3294;
																goto BgL_zc3z04anonymousza31641ze3z87_1878;
															}
														}
												}
										}
									}
									{	/* Globalize/free.scm 442 */
										obj_t BgL_res1958z00_2469;

										BgL_res1958z00_2469 =
											MAKE_YOUNG_PAIR(BgL_arg1640z00_1872, BNIL);
										BgL_newtail1294z00_1870 = BgL_res1958z00_2469;
									}
								}
								SET_CDR(BgL_tail1293z00_1867, BgL_newtail1294z00_1870);
								{	/* Globalize/free.scm 442 */
									obj_t BgL_arg1639z00_1871;

									BgL_arg1639z00_1871 = CDR(((obj_t) BgL_l1290z00_1866));
									{
										obj_t BgL_tail1293z00_3300;
										obj_t BgL_l1290z00_3299;

										BgL_l1290z00_3299 = BgL_arg1639z00_1871;
										BgL_tail1293z00_3300 = BgL_newtail1294z00_1870;
										BgL_tail1293z00_1867 = BgL_tail1293z00_3300;
										BgL_l1290z00_1866 = BgL_l1290z00_3299;
										goto BgL_zc3z04anonymousza31633ze3z87_1868;
									}
								}
							}
					}
				}
		}

	}



/* &free-from */
	obj_t BGl_z62freezd2fromzb0zzglobaliza7e_freeza7(obj_t BgL_envz00_2599,
		obj_t BgL_setsz00_2600, obj_t BgL_integratorz00_2601)
	{
		{	/* Globalize/free.scm 430 */
			return
				BGl_freezd2fromzd2zzglobaliza7e_freeza7(BgL_setsz00_2600,
				((BgL_localz00_bglt) BgL_integratorz00_2601));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzglobaliza7e_freeza7()
	{
		{	/* Globalize/free.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_freeza7()
	{
		{	/* Globalize/free.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_proc1984z00zzglobaliza7e_freeza7, BGl_nodez00zzast_nodez00,
				BGl_string1985z00zzglobaliza7e_freeza7);
		}

	}



/* &node-free1295 */
	obj_t BGl_z62nodezd2free1295zb0zzglobaliza7e_freeza7(obj_t BgL_envz00_2603,
		obj_t BgL_nodez00_2604, obj_t BgL_freez00_2605)
	{
		{	/* Globalize/free.scm 123 */
			return BgL_freez00_2605;
		}

	}



/* node-free */
	obj_t BGl_nodezd2freezd2zzglobaliza7e_freeza7(BgL_nodez00_bglt BgL_nodez00_11,
		obj_t BgL_freez00_12)
	{
		{	/* Globalize/free.scm 123 */
			{	/* Globalize/free.scm 123 */
				obj_t BgL_method1296z00_1894;

				{	/* Globalize/free.scm 123 */
					obj_t BgL_res1971z00_2508;

					{	/* Globalize/free.scm 123 */
						long BgL_objzd2classzd2numz00_2473;

						{	/* Globalize/free.scm 123 */
							long BgL_res1959z00_2476;

							BgL_res1959z00_2476 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_11));
							BgL_objzd2classzd2numz00_2473 = BgL_res1959z00_2476;
						}
						{	/* Globalize/free.scm 123 */
							obj_t BgL_arg1813z00_2474;

							BgL_arg1813z00_2474 =
								PROCEDURE_REF(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
								(int) (((long) 1)));
							{	/* Globalize/free.scm 123 */
								int BgL_offsetz00_2478;

								BgL_offsetz00_2478 = (int) (BgL_objzd2classzd2numz00_2473);
								{	/* Globalize/free.scm 123 */
									long BgL_offsetz00_2479;

									BgL_offsetz00_2479 =
										((long) (BgL_offsetz00_2478) - OBJECT_TYPE);
									{	/* Globalize/free.scm 123 */
										long BgL_modz00_2480;

										BgL_modz00_2480 =
											(BgL_offsetz00_2479 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Globalize/free.scm 123 */
											long BgL_restz00_2482;

											BgL_restz00_2482 =
												(BgL_offsetz00_2479 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Globalize/free.scm 123 */

												{	/* Globalize/free.scm 123 */
													obj_t BgL_bucketz00_2484;

													BgL_bucketz00_2484 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2474), BgL_modz00_2480);
													BgL_res1971z00_2508 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2484), BgL_restz00_2482);
					}}}}}}}}
					BgL_method1296z00_1894 = BgL_res1971z00_2508;
				}
				return
					PROCEDURE_ENTRY(BgL_method1296z00_1894) (BgL_method1296z00_1894,
					((obj_t) BgL_nodez00_11), BgL_freez00_12, BEOA);
			}
		}

	}



/* &node-free */
	obj_t BGl_z62nodezd2freezb0zzglobaliza7e_freeza7(obj_t BgL_envz00_2606,
		obj_t BgL_nodez00_2607, obj_t BgL_freez00_2608)
	{
		{	/* Globalize/free.scm 123 */
			return
				BGl_nodezd2freezd2zzglobaliza7e_freeza7(
				((BgL_nodez00_bglt) BgL_nodez00_2607), BgL_freez00_2608);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_freeza7()
	{
		{	/* Globalize/free.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7, BGl_varz00zzast_nodez00,
				BGl_proc1986z00zzglobaliza7e_freeza7,
				BGl_string1987z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_closurez00zzast_nodez00, BGl_proc1988z00zzglobaliza7e_freeza7,
				BGl_string1987z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_sequencez00zzast_nodez00, BGl_proc1989z00zzglobaliza7e_freeza7,
				BGl_string1987z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_syncz00zzast_nodez00, BGl_proc1990z00zzglobaliza7e_freeza7,
				BGl_string1987z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7, BGl_appz00zzast_nodez00,
				BGl_proc1991z00zzglobaliza7e_freeza7,
				BGl_string1987z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1992z00zzglobaliza7e_freeza7,
				BGl_string1987z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_funcallz00zzast_nodez00, BGl_proc1993z00zzglobaliza7e_freeza7,
				BGl_string1987z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_externz00zzast_nodez00, BGl_proc1994z00zzglobaliza7e_freeza7,
				BGl_string1987z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_castz00zzast_nodez00, BGl_proc1995z00zzglobaliza7e_freeza7,
				BGl_string1987z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_setqz00zzast_nodez00, BGl_proc1996z00zzglobaliza7e_freeza7,
				BGl_string1987z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_conditionalz00zzast_nodez00, BGl_proc1997z00zzglobaliza7e_freeza7,
				BGl_string1987z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_failz00zzast_nodez00, BGl_proc1998z00zzglobaliza7e_freeza7,
				BGl_string1987z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_switchz00zzast_nodez00, BGl_proc1999z00zzglobaliza7e_freeza7,
				BGl_string1987z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc2000z00zzglobaliza7e_freeza7,
				BGl_string1987z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc2001z00zzglobaliza7e_freeza7,
				BGl_string1987z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc2002z00zzglobaliza7e_freeza7,
				BGl_string1987z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc2003z00zzglobaliza7e_freeza7,
				BGl_string1987z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc2004z00zzglobaliza7e_freeza7,
				BGl_string1987z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc2005z00zzglobaliza7e_freeza7,
				BGl_string1987z00zzglobaliza7e_freeza7);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc2006z00zzglobaliza7e_freeza7,
				BGl_string1987z00zzglobaliza7e_freeza7);
		}

	}



/* &node-free-box-set!1337 */
	obj_t BGl_z62nodezd2freezd2boxzd2setz121337za2zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2629, obj_t BgL_nodez00_2630, obj_t BgL_freez00_2631)
	{
		{	/* Globalize/free.scm 319 */
			{	/* Globalize/free.scm 321 */
				BgL_varz00_bglt BgL_arg1842z00_2710;
				obj_t BgL_arg1845z00_2711;

				BgL_arg1842z00_2710 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2630)))->BgL_varz00);
				BgL_arg1845z00_2711 =
					BGl_nodezd2freezd2zzglobaliza7e_freeza7(
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2630)))->BgL_valuez00),
					BgL_freez00_2631);
				return BGl_nodezd2freezd2zzglobaliza7e_freeza7(((BgL_nodez00_bglt)
						BgL_arg1842z00_2710), BgL_arg1845z00_2711);
			}
		}

	}



/* &node-free-box-ref1335 */
	obj_t BGl_z62nodezd2freezd2boxzd2ref1335zb0zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2632, obj_t BgL_nodez00_2633, obj_t BgL_freez00_2634)
	{
		{	/* Globalize/free.scm 312 */
			{	/* Globalize/free.scm 314 */
				BgL_varz00_bglt BgL_arg1841z00_2713;

				BgL_arg1841z00_2713 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_nodez00_2633)))->BgL_varz00);
				return
					BGl_nodezd2freezd2zzglobaliza7e_freeza7(
					((BgL_nodez00_bglt) BgL_arg1841z00_2713), BgL_freez00_2634);
			}
		}

	}



/* &node-free-make-box1332 */
	obj_t BGl_z62nodezd2freezd2makezd2box1332zb0zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2635, obj_t BgL_nodez00_2636, obj_t BgL_freez00_2637)
	{
		{	/* Globalize/free.scm 305 */
			return
				BGl_nodezd2freezd2zzglobaliza7e_freeza7(
				(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_2636)))->BgL_valuez00),
				BgL_freez00_2637);
		}

	}



/* &node-free-jump-ex-it1330 */
	obj_t BGl_z62nodezd2freezd2jumpzd2exzd2it1330z62zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2638, obj_t BgL_nodez00_2639, obj_t BgL_freez00_2640)
	{
		{	/* Globalize/free.scm 298 */
			return
				BGl_nodezd2freezd2zzglobaliza7e_freeza7(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2639)))->BgL_exitz00),
				BGl_nodezd2freezd2zzglobaliza7e_freeza7(
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2639)))->
						BgL_valuez00), BgL_freez00_2640));
		}

	}



/* &node-free-set-ex-it1328 */
	obj_t BGl_z62nodezd2freezd2setzd2exzd2it1328z62zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2641, obj_t BgL_nodez00_2642, obj_t BgL_freez00_2643)
	{
		{	/* Globalize/free.scm 290 */
			{	/* Globalize/free.scm 292 */
				BgL_variablez00_bglt BgL_arg1831z00_2717;

				BgL_arg1831z00_2717 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_setzd2exzd2itz00_bglt) COBJECT(
										((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2642)))->
								BgL_varz00)))->BgL_variablez00);
				BGl_bindzd2variablez12zc0zzglobaliza7e_freeza7(((BgL_localz00_bglt)
						BgL_arg1831z00_2717),
					((BgL_localz00_bglt) BGl_za2integratorza2z00zzglobaliza7e_freeza7));
			}
			return
				BGl_nodezd2freezd2zzglobaliza7e_freeza7(
				(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2642)))->BgL_bodyz00),
				BgL_freez00_2643);
		}

	}



/* &node-free-let-var1326 */
	obj_t BGl_z62nodezd2freezd2letzd2var1326zb0zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2644, obj_t BgL_nodez00_2645, obj_t BgL_freez00_2646)
	{
		{	/* Globalize/free.scm 276 */
			{
				obj_t BgL_bindingsz00_2720;
				obj_t BgL_freez00_2721;

				BgL_bindingsz00_2720 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2645)))->BgL_bindingsz00);
				BgL_freez00_2721 = BgL_freez00_2646;
			BgL_loopz00_2719:
				if (NULLP(BgL_bindingsz00_2720))
					{	/* Globalize/free.scm 280 */
						return
							BGl_nodezd2freezd2zzglobaliza7e_freeza7(
							(((BgL_letzd2varzd2_bglt) COBJECT(
										((BgL_letzd2varzd2_bglt) BgL_nodez00_2645)))->BgL_bodyz00),
							BgL_freez00_2721);
					}
				else
					{	/* Globalize/free.scm 280 */
						{	/* Globalize/free.scm 283 */
							obj_t BgL_arg1825z00_2722;

							{	/* Globalize/free.scm 283 */
								obj_t BgL_pairz00_2723;

								BgL_pairz00_2723 = CAR(((obj_t) BgL_bindingsz00_2720));
								BgL_arg1825z00_2722 = CAR(BgL_pairz00_2723);
							}
							BGl_bindzd2variablez12zc0zzglobaliza7e_freeza7(
								((BgL_localz00_bglt) BgL_arg1825z00_2722),
								((BgL_localz00_bglt)
									BGl_za2integratorza2z00zzglobaliza7e_freeza7));
						}
						{	/* Globalize/free.scm 284 */
							obj_t BgL_arg1827z00_2724;
							obj_t BgL_arg1828z00_2725;

							BgL_arg1827z00_2724 = CDR(((obj_t) BgL_bindingsz00_2720));
							{	/* Globalize/free.scm 285 */
								obj_t BgL_arg1829z00_2726;

								{	/* Globalize/free.scm 285 */
									obj_t BgL_pairz00_2727;

									BgL_pairz00_2727 = CAR(((obj_t) BgL_bindingsz00_2720));
									BgL_arg1829z00_2726 = CDR(BgL_pairz00_2727);
								}
								BgL_arg1828z00_2725 =
									BGl_nodezd2freezd2zzglobaliza7e_freeza7(
									((BgL_nodez00_bglt) BgL_arg1829z00_2726), BgL_freez00_2721);
							}
							{
								obj_t BgL_freez00_3405;
								obj_t BgL_bindingsz00_3404;

								BgL_bindingsz00_3404 = BgL_arg1827z00_2724;
								BgL_freez00_3405 = BgL_arg1828z00_2725;
								BgL_freez00_2721 = BgL_freez00_3405;
								BgL_bindingsz00_2720 = BgL_bindingsz00_3404;
								goto BgL_loopz00_2719;
							}
						}
					}
			}
		}

	}



/* &node-free-let-fun1324 */
	obj_t BGl_z62nodezd2freezd2letzd2fun1324zb0zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2647, obj_t BgL_nodez00_2648, obj_t BgL_freez00_2649)
	{
		{	/* Globalize/free.scm 251 */
			{	/* Globalize/free.scm 253 */
				obj_t BgL_g1283z00_2729;

				BgL_g1283z00_2729 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2648)))->BgL_localsz00);
				{
					obj_t BgL_l1281z00_2731;

					BgL_l1281z00_2731 = BgL_g1283z00_2729;
				BgL_zc3z04anonymousza31780ze3z87_2730:
					if (PAIRP(BgL_l1281z00_2731))
						{	/* Globalize/free.scm 253 */
							{	/* Globalize/free.scm 255 */
								obj_t BgL_fz00_2732;

								BgL_fz00_2732 = CAR(BgL_l1281z00_2731);
								BGl_bindzd2variablez12zc0zzglobaliza7e_freeza7(
									((BgL_localz00_bglt) BgL_fz00_2732),
									((BgL_localz00_bglt)
										BGl_za2integratorza2z00zzglobaliza7e_freeza7));
								{	/* Globalize/free.scm 257 */
									bool_t BgL_test2080z00_3416;

									{
										BgL_localzf2ginfozf2_bglt BgL_auxz00_3417;

										{
											obj_t BgL_auxz00_3418;

											{	/* Globalize/free.scm 257 */
												BgL_objectz00_bglt BgL_tmpz00_3419;

												BgL_tmpz00_3419 =
													((BgL_objectz00_bglt)
													((BgL_localz00_bglt) BgL_fz00_2732));
												BgL_auxz00_3418 = BGL_OBJECT_WIDENING(BgL_tmpz00_3419);
											}
											BgL_auxz00_3417 =
												((BgL_localzf2ginfozf2_bglt) BgL_auxz00_3418);
										}
										BgL_test2080z00_3416 =
											(((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3417))->
											BgL_escapezf3zf3);
									}
									if (BgL_test2080z00_3416)
										{	/* Globalize/free.scm 258 */
											obj_t BgL_arg1784z00_2733;

											{	/* Globalize/free.scm 258 */
												obj_t BgL_arg1790z00_2734;

												BgL_arg1790z00_2734 =
													(((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt)
																((BgL_letzd2funzd2_bglt) BgL_nodez00_2648))))->
													BgL_locz00);
												BgL_arg1784z00_2733 =
													BGl_thezd2localzd2closurez00zzglobaliza7e_freeza7
													(BgL_fz00_2732, BgL_arg1790z00_2734);
											}
											BGl_bindzd2variablez12zc0zzglobaliza7e_freeza7(
												((BgL_localz00_bglt) BgL_arg1784z00_2733),
												((BgL_localz00_bglt)
													BGl_za2integratorza2z00zzglobaliza7e_freeza7));
										}
									else
										{	/* Globalize/free.scm 257 */
											BFALSE;
										}
								}
							}
							{
								obj_t BgL_l1281z00_3432;

								BgL_l1281z00_3432 = CDR(BgL_l1281z00_2731);
								BgL_l1281z00_2731 = BgL_l1281z00_3432;
								goto BgL_zc3z04anonymousza31780ze3z87_2730;
							}
						}
					else
						{	/* Globalize/free.scm 253 */
							((bool_t) 1);
						}
				}
			}
			{
				obj_t BgL_lclsz00_2736;
				obj_t BgL_freez00_2737;

				BgL_lclsz00_2736 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2648)))->BgL_localsz00);
				BgL_freez00_2737 = BgL_freez00_2649;
			BgL_liipz00_2735:
				if (NULLP(BgL_lclsz00_2736))
					{	/* Globalize/free.scm 263 */
						return
							BGl_nodezd2freezd2zzglobaliza7e_freeza7(
							(((BgL_letzd2funzd2_bglt) COBJECT(
										((BgL_letzd2funzd2_bglt) BgL_nodez00_2648)))->BgL_bodyz00),
							BgL_freez00_2737);
					}
				else
					{	/* Globalize/free.scm 265 */
						obj_t BgL_localz00_2738;

						BgL_localz00_2738 = CAR(((obj_t) BgL_lclsz00_2736));
						{	/* Globalize/free.scm 265 */
							BgL_valuez00_bglt BgL_funz00_2739;

							BgL_funz00_2739 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt)
											((BgL_localz00_bglt) BgL_localz00_2738))))->BgL_valuez00);
							{	/* Globalize/free.scm 266 */

								{	/* Globalize/free.scm 267 */
									obj_t BgL_g1286z00_2740;

									BgL_g1286z00_2740 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_funz00_2739)))->BgL_argsz00);
									{
										obj_t BgL_l1284z00_2742;

										BgL_l1284z00_2742 = BgL_g1286z00_2740;
									BgL_zc3z04anonymousza31802ze3z87_2741:
										if (PAIRP(BgL_l1284z00_2742))
											{	/* Globalize/free.scm 269 */
												{	/* Globalize/free.scm 268 */
													obj_t BgL_lz00_2743;

													BgL_lz00_2743 = CAR(BgL_l1284z00_2742);
													BGl_bindzd2variablez12zc0zzglobaliza7e_freeza7(
														((BgL_localz00_bglt) BgL_lz00_2743),
														((BgL_localz00_bglt)
															BGl_za2integratorza2z00zzglobaliza7e_freeza7));
												}
												{
													obj_t BgL_l1284z00_3452;

													BgL_l1284z00_3452 = CDR(BgL_l1284z00_2742);
													BgL_l1284z00_2742 = BgL_l1284z00_3452;
													goto BgL_zc3z04anonymousza31802ze3z87_2741;
												}
											}
										else
											{	/* Globalize/free.scm 269 */
												((bool_t) 1);
											}
									}
								}
								{	/* Globalize/free.scm 270 */
									obj_t BgL_arg1809z00_2744;
									obj_t BgL_arg1811z00_2745;

									BgL_arg1809z00_2744 = CDR(((obj_t) BgL_lclsz00_2736));
									{	/* Globalize/free.scm 271 */
										obj_t BgL_arg1820z00_2746;

										BgL_arg1820z00_2746 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_funz00_2739)))->BgL_bodyz00);
										BgL_arg1811z00_2745 =
											BGl_nodezd2freezd2zzglobaliza7e_freeza7(
											((BgL_nodez00_bglt) BgL_arg1820z00_2746),
											BgL_freez00_2737);
									}
									{
										obj_t BgL_freez00_3461;
										obj_t BgL_lclsz00_3460;

										BgL_lclsz00_3460 = BgL_arg1809z00_2744;
										BgL_freez00_3461 = BgL_arg1811z00_2745;
										BgL_freez00_2737 = BgL_freez00_3461;
										BgL_lclsz00_2736 = BgL_lclsz00_3460;
										goto BgL_liipz00_2735;
									}
								}
							}
						}
					}
			}
		}

	}



/* &node-free-switch1322 */
	obj_t BGl_z62nodezd2freezd2switch1322z62zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2650, obj_t BgL_nodez00_2651, obj_t BgL_freez00_2652)
	{
		{	/* Globalize/free.scm 240 */
			{
				obj_t BgL_clausesz00_2749;
				obj_t BgL_freez00_2750;

				BgL_clausesz00_2749 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2651)))->BgL_clausesz00);
				BgL_freez00_2750 = BgL_freez00_2652;
			BgL_loopz00_2748:
				if (NULLP(BgL_clausesz00_2749))
					{	/* Globalize/free.scm 244 */
						return
							BGl_nodezd2freezd2zzglobaliza7e_freeza7(
							(((BgL_switchz00_bglt) COBJECT(
										((BgL_switchz00_bglt) BgL_nodez00_2651)))->BgL_testz00),
							BgL_freez00_2750);
					}
				else
					{	/* Globalize/free.scm 246 */
						obj_t BgL_arg1771z00_2751;
						obj_t BgL_arg1775z00_2752;

						BgL_arg1771z00_2751 = CDR(((obj_t) BgL_clausesz00_2749));
						{	/* Globalize/free.scm 246 */
							obj_t BgL_arg1778z00_2753;

							{	/* Globalize/free.scm 246 */
								obj_t BgL_pairz00_2754;

								BgL_pairz00_2754 = CAR(((obj_t) BgL_clausesz00_2749));
								BgL_arg1778z00_2753 = CDR(BgL_pairz00_2754);
							}
							BgL_arg1775z00_2752 =
								BGl_nodezd2freezd2zzglobaliza7e_freeza7(
								((BgL_nodez00_bglt) BgL_arg1778z00_2753), BgL_freez00_2750);
						}
						{
							obj_t BgL_freez00_3477;
							obj_t BgL_clausesz00_3476;

							BgL_clausesz00_3476 = BgL_arg1771z00_2751;
							BgL_freez00_3477 = BgL_arg1775z00_2752;
							BgL_freez00_2750 = BgL_freez00_3477;
							BgL_clausesz00_2749 = BgL_clausesz00_3476;
							goto BgL_loopz00_2748;
						}
					}
			}
		}

	}



/* &node-free-fail1320 */
	obj_t BGl_z62nodezd2freezd2fail1320z62zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2653, obj_t BgL_nodez00_2654, obj_t BgL_freez00_2655)
	{
		{	/* Globalize/free.scm 233 */
			return
				BGl_nodezd2freezd2zzglobaliza7e_freeza7(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2654)))->BgL_procz00),
				BGl_nodezd2freezd2zzglobaliza7e_freeza7(
					(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2654)))->BgL_msgz00),
					BGl_nodezd2freezd2zzglobaliza7e_freeza7(
						(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_2654)))->BgL_objz00),
						BgL_freez00_2655)));
		}

	}



/* &node-free-conditiona1318 */
	obj_t BGl_z62nodezd2freezd2conditiona1318z62zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2656, obj_t BgL_nodez00_2657, obj_t BgL_freez00_2658)
	{
		{	/* Globalize/free.scm 226 */
			return
				BGl_nodezd2freezd2zzglobaliza7e_freeza7(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2657)))->BgL_testz00),
				BGl_nodezd2freezd2zzglobaliza7e_freeza7(
					(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2657)))->BgL_truez00),
					BGl_nodezd2freezd2zzglobaliza7e_freeza7(
						(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_2657)))->BgL_falsez00),
						BgL_freez00_2658)));
		}

	}



/* &node-free-setq1316 */
	obj_t BGl_z62nodezd2freezd2setq1316z62zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2659, obj_t BgL_nodez00_2660, obj_t BgL_freez00_2661)
	{
		{	/* Globalize/free.scm 219 */
			{	/* Globalize/free.scm 221 */
				BgL_varz00_bglt BgL_arg1740z00_2758;
				obj_t BgL_arg1741z00_2759;

				BgL_arg1740z00_2758 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2660)))->BgL_varz00);
				BgL_arg1741z00_2759 =
					BGl_nodezd2freezd2zzglobaliza7e_freeza7(
					(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2660)))->BgL_valuez00),
					BgL_freez00_2661);
				return BGl_nodezd2freezd2zzglobaliza7e_freeza7(((BgL_nodez00_bglt)
						BgL_arg1740z00_2758), BgL_arg1741z00_2759);
			}
		}

	}



/* &node-free-cast1314 */
	obj_t BGl_z62nodezd2freezd2cast1314z62zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2662, obj_t BgL_nodez00_2663, obj_t BgL_freez00_2664)
	{
		{	/* Globalize/free.scm 212 */
			return
				BGl_nodezd2freezd2zzglobaliza7e_freeza7(
				(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2663)))->BgL_argz00),
				BgL_freez00_2664);
		}

	}



/* &node-free-extern1312 */
	obj_t BGl_z62nodezd2freezd2extern1312z62zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2665, obj_t BgL_nodez00_2666, obj_t BgL_freez00_2667)
	{
		{	/* Globalize/free.scm 205 */
			return
				BGl_nodezd2freeza2z70zzglobaliza7e_freeza7(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_2666)))->BgL_exprza2za2),
				BgL_freez00_2667);
		}

	}



/* &node-free-funcall1310 */
	obj_t BGl_z62nodezd2freezd2funcall1310z62zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2668, obj_t BgL_nodez00_2669, obj_t BgL_freez00_2670)
	{
		{	/* Globalize/free.scm 198 */
			return
				BGl_nodezd2freezd2zzglobaliza7e_freeza7(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_2669)))->BgL_funz00),
				BGl_nodezd2freeza2z70zzglobaliza7e_freeza7(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2669)))->BgL_argsz00),
					BgL_freez00_2670));
		}

	}



/* &node-free-app-ly1308 */
	obj_t BGl_z62nodezd2freezd2appzd2ly1308zb0zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2671, obj_t BgL_nodez00_2672, obj_t BgL_freez00_2673)
	{
		{	/* Globalize/free.scm 191 */
			return
				BGl_nodezd2freezd2zzglobaliza7e_freeza7(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_2672)))->BgL_funz00),
				BGl_nodezd2freezd2zzglobaliza7e_freeza7(
					(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2672)))->BgL_argz00),
					BgL_freez00_2673));
		}

	}



/* &node-free-app1306 */
	obj_t BGl_z62nodezd2freezd2app1306z62zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2674, obj_t BgL_nodez00_2675, obj_t BgL_freez00_2676)
	{
		{	/* Globalize/free.scm 175 */
			{	/* Globalize/free.scm 177 */
				obj_t BgL_freez00_2765;

				{	/* Globalize/free.scm 177 */
					BgL_variablez00_bglt BgL_varz00_2766;

					BgL_varz00_2766 =
						(((BgL_varz00_bglt) COBJECT(
								(((BgL_appz00_bglt) COBJECT(
											((BgL_appz00_bglt) BgL_nodez00_2675)))->BgL_funz00)))->
						BgL_variablez00);
					{	/* Globalize/free.scm 179 */
						bool_t BgL_test2084z00_3526;

						{	/* Globalize/free.scm 179 */
							bool_t BgL_res1975z00_2767;

							BgL_res1975z00_2767 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_varz00_2766), BGl_globalz00zzast_varz00);
							BgL_test2084z00_3526 = BgL_res1975z00_2767;
						}
						if (BgL_test2084z00_3526)
							{	/* Globalize/free.scm 179 */
								BgL_freez00_2765 = BgL_freez00_2676;
							}
						else
							{	/* Globalize/free.scm 181 */
								bool_t BgL_test2085z00_3529;

								{	/* Globalize/free.scm 181 */
									bool_t BgL_test2086z00_3530;

									{
										BgL_localzf2ginfozf2_bglt BgL_auxz00_3531;

										{
											obj_t BgL_auxz00_3532;

											{	/* Globalize/free.scm 181 */
												BgL_objectz00_bglt BgL_tmpz00_3533;

												BgL_tmpz00_3533 =
													((BgL_objectz00_bglt)
													((BgL_localz00_bglt) BgL_varz00_2766));
												BgL_auxz00_3532 = BGL_OBJECT_WIDENING(BgL_tmpz00_3533);
											}
											BgL_auxz00_3531 =
												((BgL_localzf2ginfozf2_bglt) BgL_auxz00_3532);
										}
										BgL_test2086z00_3530 =
											(((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3531))->
											BgL_escapezf3zf3);
									}
									if (BgL_test2086z00_3530)
										{	/* Globalize/free.scm 181 */
											BgL_test2085z00_3529 =
												CBOOL(BGl_freezd2variablezf3z21zzglobaliza7e_freeza7(
													((obj_t) BgL_varz00_2766)));
										}
									else
										{	/* Globalize/free.scm 181 */
											BgL_test2085z00_3529 = ((bool_t) 0);
										}
								}
								if (BgL_test2085z00_3529)
									{	/* Globalize/free.scm 181 */
										BGl_markzd2variablez12zc0zzglobaliza7e_freeza7(
											((BgL_localz00_bglt) BgL_varz00_2766));
										{	/* Globalize/free.scm 183 */
											obj_t BgL_arg1719z00_2768;

											{	/* Globalize/free.scm 183 */
												obj_t BgL_arg1725z00_2769;

												BgL_arg1725z00_2769 =
													(((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt)
																((BgL_appz00_bglt) BgL_nodez00_2675))))->
													BgL_locz00);
												{	/* Globalize/free.scm 338 */
													bool_t BgL_test2087z00_3547;

													{	/* Globalize/free.scm 338 */
														bool_t BgL_res1976z00_2770;

														BgL_res1976z00_2770 =
															BGl_isazf3zf3zz__objectz00(
															((obj_t) BgL_varz00_2766),
															BGl_globalz00zzast_varz00);
														BgL_test2087z00_3547 = BgL_res1976z00_2770;
													}
													if (BgL_test2087z00_3547)
														{	/* Globalize/free.scm 338 */
															BgL_arg1719z00_2768 =
																BGl_thezd2globalzd2closurez00zzglobaliza7e_freeza7
																(((BgL_globalz00_bglt) BgL_varz00_2766),
																BgL_arg1725z00_2769);
														}
													else
														{	/* Globalize/free.scm 338 */
															BgL_arg1719z00_2768 =
																BGl_thezd2localzd2closurez00zzglobaliza7e_freeza7
																(((obj_t) BgL_varz00_2766),
																BgL_arg1725z00_2769);
														}
												}
											}
											BgL_freez00_2765 =
												MAKE_YOUNG_PAIR(BgL_arg1719z00_2768, BgL_freez00_2676);
										}
									}
								else
									{	/* Globalize/free.scm 181 */
										BgL_freez00_2765 = BgL_freez00_2676;
									}
							}
					}
				}
				return
					BGl_nodezd2freeza2z70zzglobaliza7e_freeza7(
					(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2675)))->BgL_argsz00),
					BgL_freez00_2765);
			}
		}

	}



/* &node-free-sync1304 */
	obj_t BGl_z62nodezd2freezd2sync1304z62zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2677, obj_t BgL_nodez00_2678, obj_t BgL_freez00_2679)
	{
		{	/* Globalize/free.scm 168 */
			return
				BGl_nodezd2freezd2zzglobaliza7e_freeza7(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2678)))->BgL_bodyz00),
				BGl_nodezd2freezd2zzglobaliza7e_freeza7(
					(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2678)))->BgL_prelockz00),
					BGl_nodezd2freezd2zzglobaliza7e_freeza7(
						(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nodez00_2678)))->BgL_mutexz00),
						BgL_freez00_2679)));
		}

	}



/* &node-free-sequence1302 */
	obj_t BGl_z62nodezd2freezd2sequence1302z62zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2680, obj_t BgL_nodez00_2681, obj_t BgL_freez00_2682)
	{
		{	/* Globalize/free.scm 161 */
			return
				BGl_nodezd2freeza2z70zzglobaliza7e_freeza7(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2681)))->BgL_nodesz00),
				BgL_freez00_2682);
		}

	}



/* &node-free-closure1300 */
	obj_t BGl_z62nodezd2freezd2closure1300z62zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2683, obj_t BgL_nodez00_2684, obj_t BgL_freez00_2685)
	{
		{	/* Globalize/free.scm 146 */
			{	/* Globalize/free.scm 148 */
				obj_t BgL_varz00_2774;

				{	/* Globalize/free.scm 148 */
					BgL_variablez00_bglt BgL_arg1695z00_2775;

					BgL_arg1695z00_2775 =
						(((BgL_varz00_bglt) COBJECT(
								((BgL_varz00_bglt)
									((BgL_closurez00_bglt) BgL_nodez00_2684))))->BgL_variablez00);
					{	/* Globalize/free.scm 338 */
						bool_t BgL_test2088z00_3573;

						{	/* Globalize/free.scm 338 */
							bool_t BgL_res1973z00_2776;

							BgL_res1973z00_2776 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_arg1695z00_2775), BGl_globalz00zzast_varz00);
							BgL_test2088z00_3573 = BgL_res1973z00_2776;
						}
						if (BgL_test2088z00_3573)
							{	/* Globalize/free.scm 338 */
								BgL_varz00_2774 =
									BGl_thezd2globalzd2closurez00zzglobaliza7e_freeza7(
									((BgL_globalz00_bglt) BgL_arg1695z00_2775), BFALSE);
							}
						else
							{	/* Globalize/free.scm 338 */
								BgL_varz00_2774 =
									BGl_thezd2localzd2closurez00zzglobaliza7e_freeza7(
									((obj_t) BgL_arg1695z00_2775), BFALSE);
							}
					}
				}
				if (BGl_isazf3zf3zz__objectz00(BgL_varz00_2774,
						BGl_globalz00zzast_varz00))
					{	/* Globalize/free.scm 150 */
						return BgL_freez00_2685;
					}
				else
					{	/* Globalize/free.scm 150 */
						if (CBOOL(BGl_freezd2variablezf3z21zzglobaliza7e_freeza7
								(BgL_varz00_2774)))
							{	/* Globalize/free.scm 152 */
								BGl_markzd2variablez12zc0zzglobaliza7e_freeza7(
									((BgL_localz00_bglt) BgL_varz00_2774));
								return MAKE_YOUNG_PAIR(BgL_varz00_2774, BgL_freez00_2685);
							}
						else
							{	/* Globalize/free.scm 152 */
								return BgL_freez00_2685;
							}
					}
			}
		}

	}



/* &node-free-var1298 */
	obj_t BGl_z62nodezd2freezd2var1298z62zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2686, obj_t BgL_nodez00_2687, obj_t BgL_freez00_2688)
	{
		{	/* Globalize/free.scm 129 */
			{	/* Globalize/free.scm 135 */
				bool_t BgL_test2091z00_3588;

				{	/* Globalize/free.scm 135 */
					BgL_variablez00_bglt BgL_arg1692z00_2778;

					BgL_arg1692z00_2778 =
						(((BgL_varz00_bglt) COBJECT(
								((BgL_varz00_bglt) BgL_nodez00_2687)))->BgL_variablez00);
					{	/* Globalize/free.scm 135 */
						bool_t BgL_res1972z00_2779;

						BgL_res1972z00_2779 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_arg1692z00_2778), BGl_globalz00zzast_varz00);
						BgL_test2091z00_3588 = BgL_res1972z00_2779;
					}
				}
				if (BgL_test2091z00_3588)
					{	/* Globalize/free.scm 135 */
						return BgL_freez00_2688;
					}
				else
					{	/* Globalize/free.scm 137 */
						bool_t BgL_test2092z00_3593;

						{	/* Globalize/free.scm 137 */
							BgL_variablez00_bglt BgL_arg1688z00_2780;

							BgL_arg1688z00_2780 =
								(((BgL_varz00_bglt) COBJECT(
										((BgL_varz00_bglt) BgL_nodez00_2687)))->BgL_variablez00);
							BgL_test2092z00_3593 =
								CBOOL(BGl_freezd2variablezf3z21zzglobaliza7e_freeza7(
									((obj_t) BgL_arg1688z00_2780)));
						}
						if (BgL_test2092z00_3593)
							{	/* Globalize/free.scm 137 */
								{	/* Globalize/free.scm 138 */
									BgL_variablez00_bglt BgL_arg1686z00_2781;

									BgL_arg1686z00_2781 =
										(((BgL_varz00_bglt) COBJECT(
												((BgL_varz00_bglt) BgL_nodez00_2687)))->
										BgL_variablez00);
									BGl_markzd2variablez12zc0zzglobaliza7e_freeza7((
											(BgL_localz00_bglt) BgL_arg1686z00_2781));
								}
								{	/* Globalize/free.scm 139 */
									BgL_variablez00_bglt BgL_arg1687z00_2782;

									BgL_arg1687z00_2782 =
										(((BgL_varz00_bglt) COBJECT(
												((BgL_varz00_bglt) BgL_nodez00_2687)))->
										BgL_variablez00);
									return MAKE_YOUNG_PAIR(((obj_t) BgL_arg1687z00_2782),
										BgL_freez00_2688);
								}
							}
						else
							{	/* Globalize/free.scm 137 */
								return BgL_freez00_2688;
							}
					}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_freeza7()
	{
		{	/* Globalize/free.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2007z00zzglobaliza7e_freeza7));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2007z00zzglobaliza7e_freeza7));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string2007z00zzglobaliza7e_freeza7));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2007z00zzglobaliza7e_freeza7));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2007z00zzglobaliza7e_freeza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2007z00zzglobaliza7e_freeza7));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string2007z00zzglobaliza7e_freeza7));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2007z00zzglobaliza7e_freeza7));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string2007z00zzglobaliza7e_freeza7));
			BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(((long) 44601778),
				BSTRING_TO_STRING(BGl_string2007z00zzglobaliza7e_freeza7));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2007z00zzglobaliza7e_freeza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(((long) 0),
				BSTRING_TO_STRING(BGl_string2007z00zzglobaliza7e_freeza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(((long) 2706140),
				BSTRING_TO_STRING(BGl_string2007z00zzglobaliza7e_freeza7));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2007z00zzglobaliza7e_freeza7));
			return
				BGl_modulezd2initializa7ationz75zzglobaliza7e_globalzd2closurez75((
					(long) 62222057),
				BSTRING_TO_STRING(BGl_string2007z00zzglobaliza7e_freeza7));
		}

	}

#ifdef __cplusplus
}
#endif
