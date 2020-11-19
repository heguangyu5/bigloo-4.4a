/*===========================================================================*/
/*   (Globalize/escape.scm)                                                  */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/escape.scm) */
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

	typedef struct BgL_globalzf2ginfozf2_bgl
	{
		bool_t BgL_escapezf3zf3;
		obj_t BgL_globalzd2closurezd2;
	}                        *BgL_globalzf2ginfozf2_bglt;


	static obj_t BGl_z62escapez12z70zzglobaliza7e_escapeza7(obj_t, obj_t, obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t
		BGl_z62escapez12zd2setzd2exzd2it1361za2zzglobaliza7e_escapeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzglobaliza7e_escapeza7();
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_z62escapez12zd2funcall1343za2zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7;
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_escapeza7();
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_z62escapez12zd2boxzd2ref1369z70zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62escapez12zd2atom1327za2zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_nodez00_bglt,
		BgL_variablez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_escapezd2funz12zc0zzglobaliza7e_escapeza7(BgL_variablez00_bglt);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_z62escapez12zd2switch1355za2zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62escapezd2funz121309za2zzglobaliza7e_escapeza7(obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_escapeza7();
	static obj_t BGl_z62escapez12zd2app1339za2zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62escapezd2funz12za2zzglobaliza7e_escapeza7(obj_t, obj_t);
	extern obj_t BGl_variablez00zzast_varz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62escapez12zd2jumpzd2exzd2it1363za2zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_z62escapez12zd2sync1337za2zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62escapez12zd2letzd2fun1357z70zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62escapez12zd2fail1353za2zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7;
	static obj_t
		BGl_z62escapezd2funz12zd2local1314z70zzglobaliza7e_escapeza7(obj_t, obj_t);
	static obj_t BGl_z62setzd2escapingzd2funz12z70zzglobaliza7e_escapeza7(obj_t,
		obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzglobaliza7e_escapeza7 =
		BUNSPEC;
	static obj_t BGl_z62escapez12zd2sequence1335za2zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62setzd2escapingzd2funz12zd2lo1322za2zzglobaliza7e_escapeza7(obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzglobaliza7e_escapeza7();
	static obj_t
		BGl_z62setzd2escapingzd2funz121315z70zzglobaliza7e_escapeza7(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_escapeza7();
	static obj_t BGl_z62escapez121323z70zzglobaliza7e_escapeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_z62escapez12zd2kwote1329za2zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern obj_t BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7;
	static obj_t BGl_z62escapez12zd2letzd2var1359z70zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62escapez12zd2closure1333za2zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7;
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_z62escapez12zd2appzd2ly1341z70zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	static bool_t BGl_escapeza2z12zb0zzglobaliza7e_escapeza7(obj_t, obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_z62escapez12zd2var1331za2zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_escapeza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
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
	static obj_t
		BGl_setzd2escapingzd2funz12z12zzglobaliza7e_escapeza7(BgL_variablez00_bglt);
	static obj_t BGl_z62escapez12zd2extern1345za2zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzglobaliza7e_escapeza7();
	static obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_escapeza7();
	static obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_escapeza7();
	static obj_t
		BGl_z62escapez12zd2conditional1351za2zzglobaliza7e_escapeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_z62escapez12zd2cast1347za2zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62escapez12zd2boxzd2setz121367z62zzglobaliza7e_escapeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	static obj_t
		BGl_z62escapez12zd2makezd2box1365z70zzglobaliza7e_escapeza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62escapez12zd2setq1349za2zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62escapezd2funz12zd2global1312z70zzglobaliza7e_escapeza7(obj_t, obj_t);
	static obj_t
		BGl_z62setzd2escapingzd2funz12zd2gl1318za2zzglobaliza7e_escapeza7(obj_t,
		obj_t);
	static obj_t
		BGl_z62setzd2escapingzd2funz12zd2gl1320za2zzglobaliza7e_escapeza7(obj_t,
		obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[3];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1900z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza712za7d2a1921za7,
		BGl_z62escapez12zd2app1339za2zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1901z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza712za7d2a1922za7,
		BGl_z62escapez12zd2appzd2ly1341z70zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1902z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza712za7d2f1923za7,
		BGl_z62escapez12zd2funcall1343za2zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1903z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza712za7d2e1924za7,
		BGl_z62escapez12zd2extern1345za2zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1904z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza712za7d2c1925za7,
		BGl_z62escapez12zd2cast1347za2zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1905z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza712za7d2s1926za7,
		BGl_z62escapez12zd2setq1349za2zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1906z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza712za7d2c1927za7,
		BGl_z62escapez12zd2conditional1351za2zzglobaliza7e_escapeza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1907z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza712za7d2f1928za7,
		BGl_z62escapez12zd2fail1353za2zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1908z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza712za7d2s1929za7,
		BGl_z62escapez12zd2switch1355za2zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1909z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza712za7d2l1930za7,
		BGl_z62escapez12zd2letzd2fun1357z70zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1910z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza712za7d2l1931za7,
		BGl_z62escapez12zd2letzd2var1359z70zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1911z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza712za7d2s1932za7,
		BGl_z62escapez12zd2setzd2exzd2it1361za2zzglobaliza7e_escapeza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1912z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza712za7d2j1933za7,
		BGl_z62escapez12zd2jumpzd2exzd2it1363za2zzglobaliza7e_escapeza7, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1913z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza712za7d2m1934za7,
		BGl_z62escapez12zd2makezd2box1365z70zzglobaliza7e_escapeza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1914z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza712za7d2b1935za7,
		BGl_z62escapez12zd2boxzd2setz121367z62zzglobaliza7e_escapeza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1915z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza712za7d2b1936za7,
		BGl_z62escapez12zd2boxzd2ref1369z70zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1879z00zzglobaliza7e_escapeza7,
		BgL_bgl_string1879za700za7za7g1937za7, "escape-fun!1309", 15);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_escapezd2funz12zd2envz12zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza7d2funza71938za7,
		BGl_z62escapezd2funz12za2zzglobaliza7e_escapeza7, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1881z00zzglobaliza7e_escapeza7,
		BgL_bgl_string1881za700za7za7g1939za7, "set-escaping-fun!1315", 21);
	      DEFINE_STRING(BGl_string1883z00zzglobaliza7e_escapeza7,
		BgL_bgl_string1883za700za7za7g1940za7, "escape!1323", 11);
	      DEFINE_STRING(BGl_string1884z00zzglobaliza7e_escapeza7,
		BgL_bgl_string1884za700za7za7g1941za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1885z00zzglobaliza7e_escapeza7,
		BgL_bgl_string1885za700za7za7g1942za7, "set-escaping-fun!", 17);
	      DEFINE_STRING(BGl_string1886z00zzglobaliza7e_escapeza7,
		BgL_bgl_string1886za700za7za7g1943za7, "Illegal variable", 16);
	      DEFINE_STRING(BGl_string1888z00zzglobaliza7e_escapeza7,
		BgL_bgl_string1888za700za7za7g1944za7, "escape-fun!", 11);
	      DEFINE_STRING(BGl_string1894z00zzglobaliza7e_escapeza7,
		BgL_bgl_string1894za700za7za7g1945za7, "escape!", 7);
	      DEFINE_STRING(BGl_string1916z00zzglobaliza7e_escapeza7,
		BgL_bgl_string1916za700za7za7g1946za7, "globalize_escape", 16);
	      DEFINE_STRING(BGl_string1917z00zzglobaliza7e_escapeza7,
		BgL_bgl_string1917za700za7za7g1947za7, "export done escape!1323 ", 24);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1878z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza7d2funza71948za7,
		BGl_z62escapezd2funz121309za2zzglobaliza7e_escapeza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1880z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762setza7d2escapin1949z00,
		BGl_z62setzd2escapingzd2funz121315z70zzglobaliza7e_escapeza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1882z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza71213231950z00,
		BGl_z62escapez121323z70zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1887z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza7d2funza71951za7,
		BGl_z62escapezd2funz12zd2global1312z70zzglobaliza7e_escapeza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1889z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza7d2funza71952za7,
		BGl_z62escapezd2funz12zd2local1314z70zzglobaliza7e_escapeza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1890z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762setza7d2escapin1953z00,
		BGl_z62setzd2escapingzd2funz12zd2gl1318za2zzglobaliza7e_escapeza7, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1891z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762setza7d2escapin1954z00,
		BGl_z62setzd2escapingzd2funz12zd2gl1320za2zzglobaliza7e_escapeza7, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1892z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762setza7d2escapin1955z00,
		BGl_z62setzd2escapingzd2funz12zd2lo1322za2zzglobaliza7e_escapeza7, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1893z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza712za7d2a1956za7,
		BGl_z62escapez12zd2atom1327za2zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1895z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza712za7d2k1957za7,
		BGl_z62escapez12zd2kwote1329za2zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1896z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza712za7d2v1958za7,
		BGl_z62escapez12zd2var1331za2zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1897z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza712za7d2c1959za7,
		BGl_z62escapez12zd2closure1333za2zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1898z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza712za7d2s1960za7,
		BGl_z62escapez12zd2sequence1335za2zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1899z00zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza712za7d2s1961za7,
		BGl_z62escapez12zd2sync1337za2zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_GENERIC(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
		BgL_bgl_za762escapeza712za770za71962z00,
		BGl_z62escapez12z70zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_setzd2escapingzd2funz12zd2envzc0zzglobaliza7e_escapeza7,
		BgL_bgl_za762setza7d2escapin1963z00,
		BGl_z62setzd2escapingzd2funz12z70zzglobaliza7e_escapeza7, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzglobaliza7e_escapeza7));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_escapeza7(long
		BgL_checksumz00_2783, char *BgL_fromz00_2784)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzglobaliza7e_escapeza7))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_escapeza7 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzglobaliza7e_escapeza7();
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_escapeza7();
					BGl_cnstzd2initzd2zzglobaliza7e_escapeza7();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_escapeza7();
					BGl_genericzd2initzd2zzglobaliza7e_escapeza7();
					BGl_methodzd2initzd2zzglobaliza7e_escapeza7();
					return BGl_toplevelzd2initzd2zzglobaliza7e_escapeza7();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_escapeza7()
	{
		{	/* Globalize/escape.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"globalize_escape");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"globalize_escape");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"globalize_escape");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"globalize_escape");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"globalize_escape");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"globalize_escape");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0),
				"globalize_escape");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"globalize_escape");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"globalize_escape");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzglobaliza7e_escapeza7()
	{
		{	/* Globalize/escape.scm 15 */
			{	/* Globalize/escape.scm 15 */
				obj_t BgL_cportz00_2643;

				{	/* Globalize/escape.scm 15 */
					obj_t BgL_stringz00_2651;

					BgL_stringz00_2651 = BGl_string1917z00zzglobaliza7e_escapeza7;
					{	/* Globalize/escape.scm 15 */
						obj_t BgL_startz00_2652;

						BgL_startz00_2652 = BINT(((long) 0));
						{	/* Globalize/escape.scm 15 */
							obj_t BgL_endz00_2653;

							BgL_endz00_2653 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2651)));
							{	/* Globalize/escape.scm 15 */

								BgL_cportz00_2643 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2651, BgL_startz00_2652, BgL_endz00_2653);
				}}}}
				{
					long BgL_iz00_2644;

					BgL_iz00_2644 = ((long) 2);
				BgL_loopz00_2645:
					if ((BgL_iz00_2644 == ((long) -1)))
						{	/* Globalize/escape.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Globalize/escape.scm 15 */
							{	/* Globalize/escape.scm 15 */
								obj_t BgL_arg1919z00_2647;

								{	/* Globalize/escape.scm 15 */

									{	/* Globalize/escape.scm 15 */
										obj_t BgL_locationz00_2649;

										BgL_locationz00_2649 = BBOOL(((bool_t) 0));
										{	/* Globalize/escape.scm 15 */

											BgL_arg1919z00_2647 =
												BGl_readz00zz__readerz00(BgL_cportz00_2643,
												BgL_locationz00_2649);
										}
									}
								}
								{	/* Globalize/escape.scm 15 */
									int BgL_tmpz00_2813;

									BgL_tmpz00_2813 = (int) (BgL_iz00_2644);
									CNST_TABLE_SET(BgL_tmpz00_2813, BgL_arg1919z00_2647);
							}}
							{	/* Globalize/escape.scm 15 */
								int BgL_auxz00_2650;

								BgL_auxz00_2650 = (int) ((BgL_iz00_2644 - ((long) 1)));
								{
									long BgL_iz00_2818;

									BgL_iz00_2818 = (long) (BgL_auxz00_2650);
									BgL_iz00_2644 = BgL_iz00_2818;
									goto BgL_loopz00_2645;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_escapeza7()
	{
		{	/* Globalize/escape.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzglobaliza7e_escapeza7()
	{
		{	/* Globalize/escape.scm 15 */
			return BUNSPEC;
		}

	}



/* escape*! */
	bool_t BGl_escapeza2z12zb0zzglobaliza7e_escapeza7(obj_t BgL_nodeza2za2_56,
		obj_t BgL_oz00_57)
	{
		{	/* Globalize/escape.scm 266 */
			{
				obj_t BgL_l1307z00_1723;

				BgL_l1307z00_1723 = BgL_nodeza2za2_56;
			BgL_zc3z04anonymousza31383ze3z87_1724:
				if (PAIRP(BgL_l1307z00_1723))
					{	/* Globalize/escape.scm 267 */
						{	/* Globalize/escape.scm 267 */
							obj_t BgL_nz00_1726;

							BgL_nz00_1726 = CAR(BgL_l1307z00_1723);
							BGl_escapez12z12zzglobaliza7e_escapeza7(
								((BgL_nodez00_bglt) BgL_nz00_1726),
								((BgL_variablez00_bglt) BgL_oz00_57));
						}
						{
							obj_t BgL_l1307z00_2827;

							BgL_l1307z00_2827 = CDR(BgL_l1307z00_1723);
							BgL_l1307z00_1723 = BgL_l1307z00_2827;
							goto BgL_zc3z04anonymousza31383ze3z87_1724;
						}
					}
				else
					{	/* Globalize/escape.scm 267 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzglobaliza7e_escapeza7()
	{
		{	/* Globalize/escape.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_escapeza7()
	{
		{	/* Globalize/escape.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_escapezd2funz12zd2envz12zzglobaliza7e_escapeza7,
				BGl_proc1878z00zzglobaliza7e_escapeza7, BGl_variablez00zzast_varz00,
				BGl_string1879z00zzglobaliza7e_escapeza7);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_setzd2escapingzd2funz12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_proc1880z00zzglobaliza7e_escapeza7, BGl_variablez00zzast_varz00,
				BGl_string1881z00zzglobaliza7e_escapeza7);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_proc1882z00zzglobaliza7e_escapeza7, BGl_nodez00zzast_nodez00,
				BGl_string1883z00zzglobaliza7e_escapeza7);
		}

	}



/* &escape!1323 */
	obj_t BGl_z62escapez121323z70zzglobaliza7e_escapeza7(obj_t BgL_envz00_2526,
		obj_t BgL_nodez00_2527, obj_t BgL_oz00_2528)
	{
		{	/* Globalize/escape.scm 79 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
				BGl_string1884z00zzglobaliza7e_escapeza7,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2527)));
		}

	}



/* &set-escaping-fun!1315 */
	obj_t BGl_z62setzd2escapingzd2funz121315z70zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2529, obj_t BgL_variablez00_2530)
	{
		{	/* Globalize/escape.scm 55 */
			{	/* Globalize/escape.scm 56 */
				obj_t BgL_arg1442z00_2659;

				BgL_arg1442z00_2659 =
					BGl_shapez00zztools_shapez00(
					((obj_t) ((BgL_variablez00_bglt) BgL_variablez00_2530)));
				return
					BGl_errorz00zz__errorz00(BGl_string1885z00zzglobaliza7e_escapeza7,
					BGl_string1886z00zzglobaliza7e_escapeza7, BgL_arg1442z00_2659);
			}
		}

	}



/* &escape-fun!1309 */
	obj_t BGl_z62escapezd2funz121309za2zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2531, obj_t BgL_variablez00_2532)
	{
		{	/* Globalize/escape.scm 27 */
			{	/* Globalize/escape.scm 28 */
				BgL_valuez00_bglt BgL_funz00_2661;

				BgL_funz00_2661 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_variablez00_2532)))->BgL_valuez00);
				{	/* Globalize/escape.scm 29 */
					obj_t BgL_g1291z00_2662;

					BgL_g1291z00_2662 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt) BgL_funz00_2661)))->BgL_argsz00);
					{
						obj_t BgL_l1289z00_2664;

						BgL_l1289z00_2664 = BgL_g1291z00_2662;
					BgL_zc3z04anonymousza31397ze3z87_2663:
						if (PAIRP(BgL_l1289z00_2664))
							{	/* Globalize/escape.scm 31 */
								{	/* Globalize/escape.scm 30 */
									obj_t BgL_localz00_2665;

									BgL_localz00_2665 = CAR(BgL_l1289z00_2664);
									{	/* Globalize/escape.scm 30 */
										BgL_svarz00_bglt BgL_tmp1105z00_2666;

										BgL_tmp1105z00_2666 =
											((BgL_svarz00_bglt)
											(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt) BgL_localz00_2665))))->
												BgL_valuez00));
										{	/* Globalize/escape.scm 30 */
											BgL_svarzf2ginfozf2_bglt BgL_wide1107z00_2667;

											BgL_wide1107z00_2667 =
												((BgL_svarzf2ginfozf2_bglt)
												BOBJECT(GC_MALLOC(sizeof(struct
															BgL_svarzf2ginfozf2_bgl))));
											{	/* Globalize/escape.scm 30 */
												obj_t BgL_auxz00_2855;
												BgL_objectz00_bglt BgL_tmpz00_2852;

												BgL_auxz00_2855 = ((obj_t) BgL_wide1107z00_2667);
												BgL_tmpz00_2852 =
													((BgL_objectz00_bglt)
													((BgL_svarz00_bglt) BgL_tmp1105z00_2666));
												BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2852,
													BgL_auxz00_2855);
											}
											((BgL_objectz00_bglt)
												((BgL_svarz00_bglt) BgL_tmp1105z00_2666));
											{	/* Globalize/escape.scm 30 */
												long BgL_arg1417z00_2668;

												{	/* Globalize/escape.scm 30 */
													long BgL_res1828z00_2669;

													BgL_res1828z00_2669 =
														BGL_CLASS_INDEX
														(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
													BgL_arg1417z00_2668 = BgL_res1828z00_2669;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt)
														((BgL_svarz00_bglt) BgL_tmp1105z00_2666)),
													BgL_arg1417z00_2668);
											}
											((BgL_svarz00_bglt)
												((BgL_svarz00_bglt) BgL_tmp1105z00_2666));
										}
										{
											BgL_svarzf2ginfozf2_bglt BgL_auxz00_2866;

											{
												obj_t BgL_auxz00_2867;

												{	/* Globalize/escape.scm 30 */
													BgL_objectz00_bglt BgL_tmpz00_2868;

													BgL_tmpz00_2868 =
														((BgL_objectz00_bglt)
														((BgL_svarz00_bglt) BgL_tmp1105z00_2666));
													BgL_auxz00_2867 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2868);
												}
												BgL_auxz00_2866 =
													((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_2867);
											}
											((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2866))->
													BgL_kapturedzf3zf3) =
												((bool_t) ((bool_t) 0)), BUNSPEC);
										}
										{
											BgL_svarzf2ginfozf2_bglt BgL_auxz00_2874;

											{
												obj_t BgL_auxz00_2875;

												{	/* Globalize/escape.scm 30 */
													BgL_objectz00_bglt BgL_tmpz00_2876;

													BgL_tmpz00_2876 =
														((BgL_objectz00_bglt)
														((BgL_svarz00_bglt) BgL_tmp1105z00_2666));
													BgL_auxz00_2875 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2876);
												}
												BgL_auxz00_2874 =
													((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_2875);
											}
											((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2874))->
													BgL_freezd2markzd2) = ((long) ((long) -10)), BUNSPEC);
										}
										{
											BgL_svarzf2ginfozf2_bglt BgL_auxz00_2882;

											{
												obj_t BgL_auxz00_2883;

												{	/* Globalize/escape.scm 30 */
													BgL_objectz00_bglt BgL_tmpz00_2884;

													BgL_tmpz00_2884 =
														((BgL_objectz00_bglt)
														((BgL_svarz00_bglt) BgL_tmp1105z00_2666));
													BgL_auxz00_2883 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2884);
												}
												BgL_auxz00_2882 =
													((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_2883);
											}
											((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2882))->
													BgL_markz00) = ((long) ((long) -10)), BUNSPEC);
										}
										{
											BgL_svarzf2ginfozf2_bglt BgL_auxz00_2890;

											{
												obj_t BgL_auxz00_2891;

												{	/* Globalize/escape.scm 30 */
													BgL_objectz00_bglt BgL_tmpz00_2892;

													BgL_tmpz00_2892 =
														((BgL_objectz00_bglt)
														((BgL_svarz00_bglt) BgL_tmp1105z00_2666));
													BgL_auxz00_2891 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2892);
												}
												BgL_auxz00_2890 =
													((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_2891);
											}
											((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2890))->
													BgL_celledzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
										}
										{
											BgL_svarzf2ginfozf2_bglt BgL_auxz00_2898;

											{
												obj_t BgL_auxz00_2899;

												{	/* Globalize/escape.scm 30 */
													BgL_objectz00_bglt BgL_tmpz00_2900;

													BgL_tmpz00_2900 =
														((BgL_objectz00_bglt)
														((BgL_svarz00_bglt) BgL_tmp1105z00_2666));
													BgL_auxz00_2899 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2900);
												}
												BgL_auxz00_2898 =
													((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_2899);
											}
											((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2898))->
													BgL_stackablez00) = ((bool_t) ((bool_t) 1)), BUNSPEC);
										}
										((BgL_svarz00_bglt) BgL_tmp1105z00_2666);
								}}
								{
									obj_t BgL_l1289z00_2907;

									BgL_l1289z00_2907 = CDR(BgL_l1289z00_2664);
									BgL_l1289z00_2664 = BgL_l1289z00_2907;
									goto BgL_zc3z04anonymousza31397ze3z87_2663;
								}
							}
						else
							{	/* Globalize/escape.scm 31 */
								((bool_t) 1);
							}
					}
				}
				{	/* Globalize/escape.scm 32 */
					BgL_sfunzf2ginfozf2_bglt BgL_wide1111z00_2670;

					BgL_wide1111z00_2670 =
						((BgL_sfunzf2ginfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_sfunzf2ginfozf2_bgl))));
					{	/* Globalize/escape.scm 32 */
						obj_t BgL_auxz00_2914;
						BgL_objectz00_bglt BgL_tmpz00_2910;

						BgL_auxz00_2914 = ((obj_t) BgL_wide1111z00_2670);
						BgL_tmpz00_2910 =
							((BgL_objectz00_bglt)
							((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_2661)));
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2910, BgL_auxz00_2914);
					}
					((BgL_objectz00_bglt)
						((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_2661)));
					{	/* Globalize/escape.scm 32 */
						long BgL_arg1421z00_2671;

						{	/* Globalize/escape.scm 32 */
							long BgL_res1829z00_2672;

							BgL_res1829z00_2672 =
								BGL_CLASS_INDEX(BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7);
							BgL_arg1421z00_2671 = BgL_res1829z00_2672;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt)
								((BgL_sfunz00_bglt)
									((BgL_sfunz00_bglt) BgL_funz00_2661))), BgL_arg1421z00_2671);
					}
					((BgL_sfunz00_bglt)
						((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_2661)));
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2928;

					{
						obj_t BgL_auxz00_2929;

						{	/* Globalize/escape.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_2930;

							BgL_tmpz00_2930 =
								((BgL_objectz00_bglt)
								((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_2661)));
							BgL_auxz00_2929 = BGL_OBJECT_WIDENING(BgL_tmpz00_2930);
						}
						BgL_auxz00_2928 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2929);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2928))->
							BgL_gzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2937;

					{
						obj_t BgL_auxz00_2938;

						{	/* Globalize/escape.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_2939;

							BgL_tmpz00_2939 =
								((BgL_objectz00_bglt)
								((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_2661)));
							BgL_auxz00_2938 = BGL_OBJECT_WIDENING(BgL_tmpz00_2939);
						}
						BgL_auxz00_2937 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2938);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2937))->
							BgL_cfromz00) = ((obj_t) BNIL), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2946;

					{
						obj_t BgL_auxz00_2947;

						{	/* Globalize/escape.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_2948;

							BgL_tmpz00_2948 =
								((BgL_objectz00_bglt)
								((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_2661)));
							BgL_auxz00_2947 = BGL_OBJECT_WIDENING(BgL_tmpz00_2948);
						}
						BgL_auxz00_2946 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2947);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2946))->
							BgL_cfromza2za2) = ((obj_t) BFALSE), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2955;

					{
						obj_t BgL_auxz00_2956;

						{	/* Globalize/escape.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_2957;

							BgL_tmpz00_2957 =
								((BgL_objectz00_bglt)
								((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_2661)));
							BgL_auxz00_2956 = BGL_OBJECT_WIDENING(BgL_tmpz00_2957);
						}
						BgL_auxz00_2955 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2956);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2955))->BgL_ctoz00) =
						((obj_t) BNIL), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2964;

					{
						obj_t BgL_auxz00_2965;

						{	/* Globalize/escape.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_2966;

							BgL_tmpz00_2966 =
								((BgL_objectz00_bglt)
								((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_2661)));
							BgL_auxz00_2965 = BGL_OBJECT_WIDENING(BgL_tmpz00_2966);
						}
						BgL_auxz00_2964 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2965);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2964))->
							BgL_ctoza2za2) = ((obj_t) BFALSE), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2973;

					{
						obj_t BgL_auxz00_2974;

						{	/* Globalize/escape.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_2975;

							BgL_tmpz00_2975 =
								((BgL_objectz00_bglt)
								((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_2661)));
							BgL_auxz00_2974 = BGL_OBJECT_WIDENING(BgL_tmpz00_2975);
						}
						BgL_auxz00_2973 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2974);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2973))->
							BgL_efunctionsz00) = ((obj_t) BNIL), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2982;

					{
						obj_t BgL_auxz00_2983;

						{	/* Globalize/escape.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_2984;

							BgL_tmpz00_2984 =
								((BgL_objectz00_bglt)
								((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_2661)));
							BgL_auxz00_2983 = BGL_OBJECT_WIDENING(BgL_tmpz00_2984);
						}
						BgL_auxz00_2982 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2983);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2982))->
							BgL_integratorz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2991;

					{
						obj_t BgL_auxz00_2992;

						{	/* Globalize/escape.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_2993;

							BgL_tmpz00_2993 =
								((BgL_objectz00_bglt)
								((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_2661)));
							BgL_auxz00_2992 = BGL_OBJECT_WIDENING(BgL_tmpz00_2993);
						}
						BgL_auxz00_2991 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2992);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2991))->
							BgL_imarkz00) = ((obj_t) BNIL), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3000;

					{
						obj_t BgL_auxz00_3001;

						{	/* Globalize/escape.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_3002;

							BgL_tmpz00_3002 =
								((BgL_objectz00_bglt)
								((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_2661)));
							BgL_auxz00_3001 = BGL_OBJECT_WIDENING(BgL_tmpz00_3002);
						}
						BgL_auxz00_3000 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3001);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3000))->
							BgL_ownerz00) = ((obj_t) BFALSE), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3009;

					{
						obj_t BgL_auxz00_3010;

						{	/* Globalize/escape.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_3011;

							BgL_tmpz00_3011 =
								((BgL_objectz00_bglt)
								((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_2661)));
							BgL_auxz00_3010 = BGL_OBJECT_WIDENING(BgL_tmpz00_3011);
						}
						BgL_auxz00_3009 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3010);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3009))->
							BgL_integratedz00) = ((obj_t) BNIL), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3018;

					{
						obj_t BgL_auxz00_3019;

						{	/* Globalize/escape.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_3020;

							BgL_tmpz00_3020 =
								((BgL_objectz00_bglt)
								((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_2661)));
							BgL_auxz00_3019 = BGL_OBJECT_WIDENING(BgL_tmpz00_3020);
						}
						BgL_auxz00_3018 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3019);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3018))->
							BgL_pluggedzd2inzd2) = ((obj_t) BNIL), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3027;

					{
						obj_t BgL_auxz00_3028;

						{	/* Globalize/escape.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_3029;

							BgL_tmpz00_3029 =
								((BgL_objectz00_bglt)
								((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_2661)));
							BgL_auxz00_3028 = BGL_OBJECT_WIDENING(BgL_tmpz00_3029);
						}
						BgL_auxz00_3027 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3028);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3027))->
							BgL_markz00) = ((long) ((long) -10)), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3036;

					{
						obj_t BgL_auxz00_3037;

						{	/* Globalize/escape.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_3038;

							BgL_tmpz00_3038 =
								((BgL_objectz00_bglt)
								((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_2661)));
							BgL_auxz00_3037 = BGL_OBJECT_WIDENING(BgL_tmpz00_3038);
						}
						BgL_auxz00_3036 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3037);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3036))->
							BgL_freezd2markzd2) = ((obj_t) BNIL), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3045;

					{
						obj_t BgL_auxz00_3046;

						{	/* Globalize/escape.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_3047;

							BgL_tmpz00_3047 =
								((BgL_objectz00_bglt)
								((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_2661)));
							BgL_auxz00_3046 = BGL_OBJECT_WIDENING(BgL_tmpz00_3047);
						}
						BgL_auxz00_3045 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3046);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3045))->
							BgL_thezd2globalzd2) = ((obj_t) BFALSE), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3054;

					{
						obj_t BgL_auxz00_3055;

						{	/* Globalize/escape.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_3056;

							BgL_tmpz00_3056 =
								((BgL_objectz00_bglt)
								((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_2661)));
							BgL_auxz00_3055 = BGL_OBJECT_WIDENING(BgL_tmpz00_3056);
						}
						BgL_auxz00_3054 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3055);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3054))->
							BgL_kapturedz00) = ((obj_t) BFALSE), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3063;

					{
						obj_t BgL_auxz00_3064;

						{	/* Globalize/escape.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_3065;

							BgL_tmpz00_3065 =
								((BgL_objectz00_bglt)
								((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_2661)));
							BgL_auxz00_3064 = BGL_OBJECT_WIDENING(BgL_tmpz00_3065);
						}
						BgL_auxz00_3063 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3064);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3063))->
							BgL_newzd2bodyzd2) = ((obj_t) BFALSE), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3072;

					{
						obj_t BgL_auxz00_3073;

						{	/* Globalize/escape.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_3074;

							BgL_tmpz00_3074 =
								((BgL_objectz00_bglt)
								((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_2661)));
							BgL_auxz00_3073 = BGL_OBJECT_WIDENING(BgL_tmpz00_3074);
						}
						BgL_auxz00_3072 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3073);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3072))->
							BgL_bmarkz00) = ((long) ((long) -10)), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3081;

					{
						obj_t BgL_auxz00_3082;

						{	/* Globalize/escape.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_3083;

							BgL_tmpz00_3083 =
								((BgL_objectz00_bglt)
								((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_2661)));
							BgL_auxz00_3082 = BGL_OBJECT_WIDENING(BgL_tmpz00_3083);
						}
						BgL_auxz00_3081 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3082);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3081))->
							BgL_umarkz00) = ((long) ((long) -10)), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3090;

					{
						obj_t BgL_auxz00_3091;

						{	/* Globalize/escape.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_3092;

							BgL_tmpz00_3092 =
								((BgL_objectz00_bglt)
								((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_2661)));
							BgL_auxz00_3091 = BGL_OBJECT_WIDENING(BgL_tmpz00_3092);
						}
						BgL_auxz00_3090 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3091);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3090))->
							BgL_freez00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3099;

					{
						obj_t BgL_auxz00_3100;

						{	/* Globalize/escape.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_3101;

							BgL_tmpz00_3101 =
								((BgL_objectz00_bglt)
								((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_2661)));
							BgL_auxz00_3100 = BGL_OBJECT_WIDENING(BgL_tmpz00_3101);
						}
						BgL_auxz00_3099 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3100);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3099))->
							BgL_boundz00) = ((obj_t) BNIL), BUNSPEC);
				}
				((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_2661));
				{	/* Globalize/escape.scm 33 */
					obj_t BgL_arg1422z00_2673;

					BgL_arg1422z00_2673 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt) BgL_funz00_2661)))->BgL_bodyz00);
					return
						BGl_escapez12z12zzglobaliza7e_escapeza7(
						((BgL_nodez00_bglt) BgL_arg1422z00_2673),
						((BgL_variablez00_bglt) BgL_variablez00_2532));
				}
			}
		}

	}



/* escape-fun! */
	BGL_EXPORTED_DEF obj_t
		BGl_escapezd2funz12zc0zzglobaliza7e_escapeza7(BgL_variablez00_bglt
		BgL_variablez00_3)
	{
		{	/* Globalize/escape.scm 27 */
			{	/* Globalize/escape.scm 27 */
				obj_t BgL_method1310z00_1763;

				{	/* Globalize/escape.scm 27 */
					obj_t BgL_res1840z00_2299;

					{	/* Globalize/escape.scm 27 */
						long BgL_objzd2classzd2numz00_2264;

						{	/* Globalize/escape.scm 27 */
							long BgL_res1830z00_2267;

							BgL_res1830z00_2267 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_variablez00_3));
							BgL_objzd2classzd2numz00_2264 = BgL_res1830z00_2267;
						}
						{	/* Globalize/escape.scm 27 */
							obj_t BgL_arg1813z00_2265;

							BgL_arg1813z00_2265 =
								PROCEDURE_REF
								(BGl_escapezd2funz12zd2envz12zzglobaliza7e_escapeza7,
								(int) (((long) 1)));
							{	/* Globalize/escape.scm 27 */
								int BgL_offsetz00_2269;

								BgL_offsetz00_2269 = (int) (BgL_objzd2classzd2numz00_2264);
								{	/* Globalize/escape.scm 27 */
									long BgL_offsetz00_2270;

									BgL_offsetz00_2270 =
										((long) (BgL_offsetz00_2269) - OBJECT_TYPE);
									{	/* Globalize/escape.scm 27 */
										long BgL_modz00_2271;

										BgL_modz00_2271 =
											(BgL_offsetz00_2270 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Globalize/escape.scm 27 */
											long BgL_restz00_2273;

											BgL_restz00_2273 =
												(BgL_offsetz00_2270 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Globalize/escape.scm 27 */

												{	/* Globalize/escape.scm 27 */
													obj_t BgL_bucketz00_2275;

													BgL_bucketz00_2275 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2265), BgL_modz00_2271);
													BgL_res1840z00_2299 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2275), BgL_restz00_2273);
					}}}}}}}}
					BgL_method1310z00_1763 = BgL_res1840z00_2299;
				}
				return
					PROCEDURE_ENTRY(BgL_method1310z00_1763) (BgL_method1310z00_1763,
					((obj_t) BgL_variablez00_3), BEOA);
			}
		}

	}



/* &escape-fun! */
	obj_t BGl_z62escapezd2funz12za2zzglobaliza7e_escapeza7(obj_t BgL_envz00_2533,
		obj_t BgL_variablez00_2534)
	{
		{	/* Globalize/escape.scm 27 */
			return
				BGl_escapezd2funz12zc0zzglobaliza7e_escapeza7(
				((BgL_variablez00_bglt) BgL_variablez00_2534));
		}

	}



/* set-escaping-fun! */
	obj_t
		BGl_setzd2escapingzd2funz12z12zzglobaliza7e_escapeza7(BgL_variablez00_bglt
		BgL_variablez00_6)
	{
		{	/* Globalize/escape.scm 55 */
			{	/* Globalize/escape.scm 55 */
				obj_t BgL_method1316z00_1764;

				{	/* Globalize/escape.scm 55 */
					obj_t BgL_res1851z00_2336;

					{	/* Globalize/escape.scm 55 */
						long BgL_objzd2classzd2numz00_2301;

						{	/* Globalize/escape.scm 55 */
							long BgL_res1841z00_2304;

							BgL_res1841z00_2304 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_variablez00_6));
							BgL_objzd2classzd2numz00_2301 = BgL_res1841z00_2304;
						}
						{	/* Globalize/escape.scm 55 */
							obj_t BgL_arg1813z00_2302;

							BgL_arg1813z00_2302 =
								PROCEDURE_REF
								(BGl_setzd2escapingzd2funz12zd2envzc0zzglobaliza7e_escapeza7,
								(int) (((long) 1)));
							{	/* Globalize/escape.scm 55 */
								int BgL_offsetz00_2306;

								BgL_offsetz00_2306 = (int) (BgL_objzd2classzd2numz00_2301);
								{	/* Globalize/escape.scm 55 */
									long BgL_offsetz00_2307;

									BgL_offsetz00_2307 =
										((long) (BgL_offsetz00_2306) - OBJECT_TYPE);
									{	/* Globalize/escape.scm 55 */
										long BgL_modz00_2308;

										BgL_modz00_2308 =
											(BgL_offsetz00_2307 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Globalize/escape.scm 55 */
											long BgL_restz00_2310;

											BgL_restz00_2310 =
												(BgL_offsetz00_2307 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Globalize/escape.scm 55 */

												{	/* Globalize/escape.scm 55 */
													obj_t BgL_bucketz00_2312;

													BgL_bucketz00_2312 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2302), BgL_modz00_2308);
													BgL_res1851z00_2336 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2312), BgL_restz00_2310);
					}}}}}}}}
					BgL_method1316z00_1764 = BgL_res1851z00_2336;
				}
				return
					PROCEDURE_ENTRY(BgL_method1316z00_1764) (BgL_method1316z00_1764,
					((obj_t) BgL_variablez00_6), BEOA);
			}
		}

	}



/* &set-escaping-fun! */
	obj_t BGl_z62setzd2escapingzd2funz12z70zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2535, obj_t BgL_variablez00_2536)
	{
		{	/* Globalize/escape.scm 55 */
			return
				BGl_setzd2escapingzd2funz12z12zzglobaliza7e_escapeza7(
				((BgL_variablez00_bglt) BgL_variablez00_2536));
		}

	}



/* escape! */
	obj_t BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_nodez00_bglt BgL_nodez00_10,
		BgL_variablez00_bglt BgL_oz00_11)
	{
		{	/* Globalize/escape.scm 79 */
			{	/* Globalize/escape.scm 79 */
				obj_t BgL_method1325z00_1765;

				{	/* Globalize/escape.scm 79 */
					obj_t BgL_res1862z00_2373;

					{	/* Globalize/escape.scm 79 */
						long BgL_objzd2classzd2numz00_2338;

						{	/* Globalize/escape.scm 79 */
							long BgL_res1852z00_2341;

							BgL_res1852z00_2341 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_10));
							BgL_objzd2classzd2numz00_2338 = BgL_res1852z00_2341;
						}
						{	/* Globalize/escape.scm 79 */
							obj_t BgL_arg1813z00_2339;

							BgL_arg1813z00_2339 =
								PROCEDURE_REF(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
								(int) (((long) 1)));
							{	/* Globalize/escape.scm 79 */
								int BgL_offsetz00_2343;

								BgL_offsetz00_2343 = (int) (BgL_objzd2classzd2numz00_2338);
								{	/* Globalize/escape.scm 79 */
									long BgL_offsetz00_2344;

									BgL_offsetz00_2344 =
										((long) (BgL_offsetz00_2343) - OBJECT_TYPE);
									{	/* Globalize/escape.scm 79 */
										long BgL_modz00_2345;

										BgL_modz00_2345 =
											(BgL_offsetz00_2344 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Globalize/escape.scm 79 */
											long BgL_restz00_2347;

											BgL_restz00_2347 =
												(BgL_offsetz00_2344 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Globalize/escape.scm 79 */

												{	/* Globalize/escape.scm 79 */
													obj_t BgL_bucketz00_2349;

													BgL_bucketz00_2349 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2339), BgL_modz00_2345);
													BgL_res1862z00_2373 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2349), BgL_restz00_2347);
					}}}}}}}}
					BgL_method1325z00_1765 = BgL_res1862z00_2373;
				}
				return
					PROCEDURE_ENTRY(BgL_method1325z00_1765) (BgL_method1325z00_1765,
					((obj_t) BgL_nodez00_10), ((obj_t) BgL_oz00_11), BEOA);
			}
		}

	}



/* &escape! */
	obj_t BGl_z62escapez12z70zzglobaliza7e_escapeza7(obj_t BgL_envz00_2537,
		obj_t BgL_nodez00_2538, obj_t BgL_oz00_2539)
	{
		{	/* Globalize/escape.scm 79 */
			return
				BGl_escapez12z12zzglobaliza7e_escapeza7(
				((BgL_nodez00_bglt) BgL_nodez00_2538),
				((BgL_variablez00_bglt) BgL_oz00_2539));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_escapeza7()
	{
		{	/* Globalize/escape.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapezd2funz12zd2envz12zzglobaliza7e_escapeza7,
				BGl_globalz00zzast_varz00, BGl_proc1887z00zzglobaliza7e_escapeza7,
				BGl_string1888z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapezd2funz12zd2envz12zzglobaliza7e_escapeza7,
				BGl_localz00zzast_varz00, BGl_proc1889z00zzglobaliza7e_escapeza7,
				BGl_string1888z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2escapingzd2funz12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_globalz00zzast_varz00, BGl_proc1890z00zzglobaliza7e_escapeza7,
				BGl_string1885z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2escapingzd2funz12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7,
				BGl_proc1891z00zzglobaliza7e_escapeza7,
				BGl_string1885z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2escapingzd2funz12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7,
				BGl_proc1892z00zzglobaliza7e_escapeza7,
				BGl_string1885z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_atomz00zzast_nodez00, BGl_proc1893z00zzglobaliza7e_escapeza7,
				BGl_string1894z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_kwotez00zzast_nodez00, BGl_proc1895z00zzglobaliza7e_escapeza7,
				BGl_string1894z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7, BGl_varz00zzast_nodez00,
				BGl_proc1896z00zzglobaliza7e_escapeza7,
				BGl_string1894z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_closurez00zzast_nodez00, BGl_proc1897z00zzglobaliza7e_escapeza7,
				BGl_string1894z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_sequencez00zzast_nodez00, BGl_proc1898z00zzglobaliza7e_escapeza7,
				BGl_string1894z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_syncz00zzast_nodez00, BGl_proc1899z00zzglobaliza7e_escapeza7,
				BGl_string1894z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7, BGl_appz00zzast_nodez00,
				BGl_proc1900z00zzglobaliza7e_escapeza7,
				BGl_string1894z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1901z00zzglobaliza7e_escapeza7,
				BGl_string1894z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_funcallz00zzast_nodez00, BGl_proc1902z00zzglobaliza7e_escapeza7,
				BGl_string1894z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_externz00zzast_nodez00, BGl_proc1903z00zzglobaliza7e_escapeza7,
				BGl_string1894z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_castz00zzast_nodez00, BGl_proc1904z00zzglobaliza7e_escapeza7,
				BGl_string1894z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_setqz00zzast_nodez00, BGl_proc1905z00zzglobaliza7e_escapeza7,
				BGl_string1894z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_conditionalz00zzast_nodez00, BGl_proc1906z00zzglobaliza7e_escapeza7,
				BGl_string1894z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_failz00zzast_nodez00, BGl_proc1907z00zzglobaliza7e_escapeza7,
				BGl_string1894z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_switchz00zzast_nodez00, BGl_proc1908z00zzglobaliza7e_escapeza7,
				BGl_string1894z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1909z00zzglobaliza7e_escapeza7,
				BGl_string1894z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1910z00zzglobaliza7e_escapeza7,
				BGl_string1894z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc1911z00zzglobaliza7e_escapeza7,
				BGl_string1894z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc1912z00zzglobaliza7e_escapeza7,
				BGl_string1894z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1913z00zzglobaliza7e_escapeza7,
				BGl_string1894z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc1914z00zzglobaliza7e_escapeza7,
				BGl_string1894z00zzglobaliza7e_escapeza7);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1915z00zzglobaliza7e_escapeza7,
				BGl_string1894z00zzglobaliza7e_escapeza7);
		}

	}



/* &escape!-box-ref1369 */
	obj_t BGl_z62escapez12zd2boxzd2ref1369z70zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2567, obj_t BgL_nodez00_2568, obj_t BgL_oz00_2569)
	{
		{	/* Globalize/escape.scm 259 */
			{	/* Globalize/escape.scm 261 */
				BgL_varz00_bglt BgL_arg1664z00_2675;

				BgL_arg1664z00_2675 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_nodez00_2568)))->BgL_varz00);
				return
					BGl_escapez12z12zzglobaliza7e_escapeza7(
					((BgL_nodez00_bglt) BgL_arg1664z00_2675),
					((BgL_variablez00_bglt) BgL_oz00_2569));
			}
		}

	}



/* &escape!-box-set!1367 */
	obj_t BGl_z62escapez12zd2boxzd2setz121367z62zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2570, obj_t BgL_nodez00_2571, obj_t BgL_oz00_2572)
	{
		{	/* Globalize/escape.scm 252 */
			{	/* Globalize/escape.scm 254 */
				BgL_nodez00_bglt BgL_arg1663z00_2677;

				BgL_arg1663z00_2677 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2571)))->BgL_valuez00);
				return
					BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_arg1663z00_2677,
					((BgL_variablez00_bglt) BgL_oz00_2572));
			}
		}

	}



/* &escape!-make-box1365 */
	obj_t BGl_z62escapez12zd2makezd2box1365z70zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2573, obj_t BgL_nodez00_2574, obj_t BgL_oz00_2575)
	{
		{	/* Globalize/escape.scm 246 */
			{	/* Globalize/escape.scm 247 */
				BgL_nodez00_bglt BgL_arg1662z00_2679;

				BgL_arg1662z00_2679 =
					(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_2574)))->BgL_valuez00);
				return
					BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_arg1662z00_2679,
					((BgL_variablez00_bglt) BgL_oz00_2575));
			}
		}

	}



/* &escape!-jump-ex-it1363 */
	obj_t BGl_z62escapez12zd2jumpzd2exzd2it1363za2zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2576, obj_t BgL_nodez00_2577, obj_t BgL_oz00_2578)
	{
		{	/* Globalize/escape.scm 238 */
			{	/* Globalize/escape.scm 240 */
				BgL_nodez00_bglt BgL_arg1644z00_2681;

				BgL_arg1644z00_2681 =
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2577)))->BgL_exitz00);
				BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_arg1644z00_2681,
					((BgL_variablez00_bglt) BgL_oz00_2578));
			}
			{	/* Globalize/escape.scm 241 */
				BgL_nodez00_bglt BgL_arg1652z00_2682;

				BgL_arg1652z00_2682 =
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2577)))->BgL_valuez00);
				return
					BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_arg1652z00_2682,
					((BgL_variablez00_bglt) BgL_oz00_2578));
			}
		}

	}



/* &escape!-set-ex-it1361 */
	obj_t BGl_z62escapez12zd2setzd2exzd2it1361za2zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2579, obj_t BgL_nodez00_2580, obj_t BgL_oz00_2581)
	{
		{	/* Globalize/escape.scm 230 */
			{	/* Globalize/escape.scm 232 */
				BgL_sexitz00_bglt BgL_tmp1152z00_2684;

				BgL_tmp1152z00_2684 =
					((BgL_sexitz00_bglt)
					(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt)
										(((BgL_varz00_bglt) COBJECT(
													(((BgL_setzd2exzd2itz00_bglt) COBJECT(
																((BgL_setzd2exzd2itz00_bglt)
																	BgL_nodez00_2580)))->BgL_varz00)))->
											BgL_variablez00)))))->BgL_valuez00));
				{	/* Globalize/escape.scm 232 */
					BgL_sexitzf2ginfozf2_bglt BgL_wide1154z00_2685;

					BgL_wide1154z00_2685 =
						((BgL_sexitzf2ginfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_sexitzf2ginfozf2_bgl))));
					{	/* Globalize/escape.scm 232 */
						obj_t BgL_auxz00_3273;
						BgL_objectz00_bglt BgL_tmpz00_3270;

						BgL_auxz00_3273 = ((obj_t) BgL_wide1154z00_2685);
						BgL_tmpz00_3270 =
							((BgL_objectz00_bglt) ((BgL_sexitz00_bglt) BgL_tmp1152z00_2684));
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3270, BgL_auxz00_3273);
					}
					((BgL_objectz00_bglt) ((BgL_sexitz00_bglt) BgL_tmp1152z00_2684));
					{	/* Globalize/escape.scm 232 */
						long BgL_arg1634z00_2686;

						{	/* Globalize/escape.scm 232 */
							long BgL_res1877z00_2687;

							BgL_res1877z00_2687 =
								BGL_CLASS_INDEX(BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7);
							BgL_arg1634z00_2686 = BgL_res1877z00_2687;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt)
								((BgL_sexitz00_bglt) BgL_tmp1152z00_2684)),
							BgL_arg1634z00_2686);
					}
					((BgL_sexitz00_bglt) ((BgL_sexitz00_bglt) BgL_tmp1152z00_2684));
				}
				{
					BgL_sexitzf2ginfozf2_bglt BgL_auxz00_3284;

					{
						obj_t BgL_auxz00_3285;

						{	/* Globalize/escape.scm 232 */
							BgL_objectz00_bglt BgL_tmpz00_3286;

							BgL_tmpz00_3286 =
								((BgL_objectz00_bglt)
								((BgL_sexitz00_bglt) BgL_tmp1152z00_2684));
							BgL_auxz00_3285 = BGL_OBJECT_WIDENING(BgL_tmpz00_3286);
						}
						BgL_auxz00_3284 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_3285);
					}
					((((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3284))->
							BgL_gzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_sexitzf2ginfozf2_bglt BgL_auxz00_3292;

					{
						obj_t BgL_auxz00_3293;

						{	/* Globalize/escape.scm 232 */
							BgL_objectz00_bglt BgL_tmpz00_3294;

							BgL_tmpz00_3294 =
								((BgL_objectz00_bglt)
								((BgL_sexitz00_bglt) BgL_tmp1152z00_2684));
							BgL_auxz00_3293 = BGL_OBJECT_WIDENING(BgL_tmpz00_3294);
						}
						BgL_auxz00_3292 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_3293);
					}
					((((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3292))->
							BgL_kapturedzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_sexitzf2ginfozf2_bglt BgL_auxz00_3300;

					{
						obj_t BgL_auxz00_3301;

						{	/* Globalize/escape.scm 232 */
							BgL_objectz00_bglt BgL_tmpz00_3302;

							BgL_tmpz00_3302 =
								((BgL_objectz00_bglt)
								((BgL_sexitz00_bglt) BgL_tmp1152z00_2684));
							BgL_auxz00_3301 = BGL_OBJECT_WIDENING(BgL_tmpz00_3302);
						}
						BgL_auxz00_3300 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_3301);
					}
					((((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3300))->
							BgL_freezd2markzd2) = ((long) ((long) -10)), BUNSPEC);
				}
				{
					BgL_sexitzf2ginfozf2_bglt BgL_auxz00_3308;

					{
						obj_t BgL_auxz00_3309;

						{	/* Globalize/escape.scm 232 */
							BgL_objectz00_bglt BgL_tmpz00_3310;

							BgL_tmpz00_3310 =
								((BgL_objectz00_bglt)
								((BgL_sexitz00_bglt) BgL_tmp1152z00_2684));
							BgL_auxz00_3309 = BGL_OBJECT_WIDENING(BgL_tmpz00_3310);
						}
						BgL_auxz00_3308 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_3309);
					}
					((((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3308))->
							BgL_markz00) = ((long) ((long) -10)), BUNSPEC);
				}
				((BgL_sexitz00_bglt) BgL_tmp1152z00_2684);
			}
			{	/* Globalize/escape.scm 233 */
				BgL_nodez00_bglt BgL_arg1641z00_2688;

				BgL_arg1641z00_2688 =
					(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2580)))->BgL_bodyz00);
				return
					BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_arg1641z00_2688,
					((BgL_variablez00_bglt) BgL_oz00_2581));
			}
		}

	}



/* &escape!-let-var1359 */
	obj_t BGl_z62escapez12zd2letzd2var1359z70zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2582, obj_t BgL_nodez00_2583, obj_t BgL_oz00_2584)
	{
		{	/* Globalize/escape.scm 219 */
			{	/* Globalize/escape.scm 220 */
				bool_t BgL_tmpz00_3321;

				{	/* Globalize/escape.scm 221 */
					BgL_nodez00_bglt BgL_arg1611z00_2690;

					BgL_arg1611z00_2690 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2583)))->BgL_bodyz00);
					BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_arg1611z00_2690,
						((BgL_variablez00_bglt) BgL_oz00_2584));
				}
				{	/* Globalize/escape.scm 222 */
					obj_t BgL_g1306z00_2691;

					BgL_g1306z00_2691 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2583)))->BgL_bindingsz00);
					{
						obj_t BgL_l1304z00_2693;

						BgL_l1304z00_2693 = BgL_g1306z00_2691;
					BgL_zc3z04anonymousza31612ze3z87_2692:
						if (PAIRP(BgL_l1304z00_2693))
							{	/* Globalize/escape.scm 222 */
								{	/* Globalize/escape.scm 223 */
									obj_t BgL_bindingz00_2694;

									BgL_bindingz00_2694 = CAR(BgL_l1304z00_2693);
									{	/* Globalize/escape.scm 223 */
										BgL_svarz00_bglt BgL_tmp1147z00_2695;

										BgL_tmp1147z00_2695 =
											((BgL_svarz00_bglt)
											(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt)
																CAR(
																	((obj_t) BgL_bindingz00_2694))))))->
												BgL_valuez00));
										{	/* Globalize/escape.scm 223 */
											BgL_svarzf2ginfozf2_bglt BgL_wide1149z00_2696;

											BgL_wide1149z00_2696 =
												((BgL_svarzf2ginfozf2_bglt)
												BOBJECT(GC_MALLOC(sizeof(struct
															BgL_svarzf2ginfozf2_bgl))));
											{	/* Globalize/escape.scm 223 */
												obj_t BgL_auxz00_3341;
												BgL_objectz00_bglt BgL_tmpz00_3338;

												BgL_auxz00_3341 = ((obj_t) BgL_wide1149z00_2696);
												BgL_tmpz00_3338 =
													((BgL_objectz00_bglt)
													((BgL_svarz00_bglt) BgL_tmp1147z00_2695));
												BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3338,
													BgL_auxz00_3341);
											}
											((BgL_objectz00_bglt)
												((BgL_svarz00_bglt) BgL_tmp1147z00_2695));
											{	/* Globalize/escape.scm 223 */
												long BgL_arg1624z00_2697;

												{	/* Globalize/escape.scm 223 */
													long BgL_res1876z00_2698;

													BgL_res1876z00_2698 =
														BGL_CLASS_INDEX
														(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
													BgL_arg1624z00_2697 = BgL_res1876z00_2698;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt)
														((BgL_svarz00_bglt) BgL_tmp1147z00_2695)),
													BgL_arg1624z00_2697);
											}
											((BgL_svarz00_bglt)
												((BgL_svarz00_bglt) BgL_tmp1147z00_2695));
										}
										{
											BgL_svarzf2ginfozf2_bglt BgL_auxz00_3352;

											{
												obj_t BgL_auxz00_3353;

												{	/* Globalize/escape.scm 223 */
													BgL_objectz00_bglt BgL_tmpz00_3354;

													BgL_tmpz00_3354 =
														((BgL_objectz00_bglt)
														((BgL_svarz00_bglt) BgL_tmp1147z00_2695));
													BgL_auxz00_3353 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_3354);
												}
												BgL_auxz00_3352 =
													((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3353);
											}
											((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3352))->
													BgL_kapturedzf3zf3) =
												((bool_t) ((bool_t) 0)), BUNSPEC);
										}
										{
											BgL_svarzf2ginfozf2_bglt BgL_auxz00_3360;

											{
												obj_t BgL_auxz00_3361;

												{	/* Globalize/escape.scm 223 */
													BgL_objectz00_bglt BgL_tmpz00_3362;

													BgL_tmpz00_3362 =
														((BgL_objectz00_bglt)
														((BgL_svarz00_bglt) BgL_tmp1147z00_2695));
													BgL_auxz00_3361 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_3362);
												}
												BgL_auxz00_3360 =
													((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3361);
											}
											((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3360))->
													BgL_freezd2markzd2) = ((long) ((long) -10)), BUNSPEC);
										}
										{
											BgL_svarzf2ginfozf2_bglt BgL_auxz00_3368;

											{
												obj_t BgL_auxz00_3369;

												{	/* Globalize/escape.scm 223 */
													BgL_objectz00_bglt BgL_tmpz00_3370;

													BgL_tmpz00_3370 =
														((BgL_objectz00_bglt)
														((BgL_svarz00_bglt) BgL_tmp1147z00_2695));
													BgL_auxz00_3369 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_3370);
												}
												BgL_auxz00_3368 =
													((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3369);
											}
											((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3368))->
													BgL_markz00) = ((long) ((long) -10)), BUNSPEC);
										}
										{
											BgL_svarzf2ginfozf2_bglt BgL_auxz00_3376;

											{
												obj_t BgL_auxz00_3377;

												{	/* Globalize/escape.scm 223 */
													BgL_objectz00_bglt BgL_tmpz00_3378;

													BgL_tmpz00_3378 =
														((BgL_objectz00_bglt)
														((BgL_svarz00_bglt) BgL_tmp1147z00_2695));
													BgL_auxz00_3377 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_3378);
												}
												BgL_auxz00_3376 =
													((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3377);
											}
											((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3376))->
													BgL_celledzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
										}
										{
											BgL_svarzf2ginfozf2_bglt BgL_auxz00_3384;

											{
												obj_t BgL_auxz00_3385;

												{	/* Globalize/escape.scm 223 */
													BgL_objectz00_bglt BgL_tmpz00_3386;

													BgL_tmpz00_3386 =
														((BgL_objectz00_bglt)
														((BgL_svarz00_bglt) BgL_tmp1147z00_2695));
													BgL_auxz00_3385 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_3386);
												}
												BgL_auxz00_3384 =
													((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3385);
											}
											((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3384))->
													BgL_stackablez00) = ((bool_t) ((bool_t) 1)), BUNSPEC);
										}
										((BgL_svarz00_bglt) BgL_tmp1147z00_2695);
									}
									{	/* Globalize/escape.scm 224 */
										obj_t BgL_arg1627z00_2699;

										BgL_arg1627z00_2699 = CDR(((obj_t) BgL_bindingz00_2694));
										BGl_escapez12z12zzglobaliza7e_escapeza7(
											((BgL_nodez00_bglt) BgL_arg1627z00_2699),
											((BgL_variablez00_bglt) BgL_oz00_2584));
								}}
								{
									obj_t BgL_l1304z00_3398;

									BgL_l1304z00_3398 = CDR(BgL_l1304z00_2693);
									BgL_l1304z00_2693 = BgL_l1304z00_3398;
									goto BgL_zc3z04anonymousza31612ze3z87_2692;
								}
							}
						else
							{	/* Globalize/escape.scm 222 */
								BgL_tmpz00_3321 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_tmpz00_3321);
			}
		}

	}



/* &escape!-let-fun1357 */
	obj_t BGl_z62escapez12zd2letzd2fun1357z70zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2585, obj_t BgL_nodez00_2586, obj_t BgL_oz00_2587)
	{
		{	/* Globalize/escape.scm 196 */
			{	/* Globalize/escape.scm 199 */
				obj_t BgL_g1300z00_2701;

				BgL_g1300z00_2701 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2586)))->BgL_localsz00);
				{
					obj_t BgL_l1298z00_2703;

					BgL_l1298z00_2703 = BgL_g1300z00_2701;
				BgL_zc3z04anonymousza31583ze3z87_2702:
					if (PAIRP(BgL_l1298z00_2703))
						{	/* Globalize/escape.scm 199 */
							{	/* Globalize/escape.scm 200 */
								obj_t BgL_localz00_2704;

								BgL_localz00_2704 = CAR(BgL_l1298z00_2703);
								{	/* Globalize/escape.scm 200 */
									BgL_localzf2ginfozf2_bglt BgL_wide1136z00_2705;

									BgL_wide1136z00_2705 =
										((BgL_localzf2ginfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_localzf2ginfozf2_bgl))));
									{	/* Globalize/escape.scm 200 */
										obj_t BgL_auxz00_3411;
										BgL_objectz00_bglt BgL_tmpz00_3407;

										BgL_auxz00_3411 = ((obj_t) BgL_wide1136z00_2705);
										BgL_tmpz00_3407 =
											((BgL_objectz00_bglt)
											((BgL_localz00_bglt)
												((BgL_localz00_bglt) BgL_localz00_2704)));
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3407, BgL_auxz00_3411);
									}
									((BgL_objectz00_bglt)
										((BgL_localz00_bglt)
											((BgL_localz00_bglt) BgL_localz00_2704)));
									{	/* Globalize/escape.scm 200 */
										long BgL_arg1588z00_2706;

										{	/* Globalize/escape.scm 200 */
											long BgL_res1870z00_2707;

											BgL_res1870z00_2707 =
												BGL_CLASS_INDEX
												(BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7);
											BgL_arg1588z00_2706 = BgL_res1870z00_2707;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt)
												((BgL_localz00_bglt)
													((BgL_localz00_bglt) BgL_localz00_2704))),
											BgL_arg1588z00_2706);
									}
									((BgL_localz00_bglt)
										((BgL_localz00_bglt)
											((BgL_localz00_bglt) BgL_localz00_2704)));
								}
								{
									BgL_localzf2ginfozf2_bglt BgL_auxz00_3425;

									{
										obj_t BgL_auxz00_3426;

										{	/* Globalize/escape.scm 200 */
											BgL_objectz00_bglt BgL_tmpz00_3427;

											BgL_tmpz00_3427 =
												((BgL_objectz00_bglt)
												((BgL_localz00_bglt)
													((BgL_localz00_bglt) BgL_localz00_2704)));
											BgL_auxz00_3426 = BGL_OBJECT_WIDENING(BgL_tmpz00_3427);
										}
										BgL_auxz00_3425 =
											((BgL_localzf2ginfozf2_bglt) BgL_auxz00_3426);
									}
									((((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3425))->
											BgL_escapezf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
								}
								{
									BgL_localzf2ginfozf2_bglt BgL_auxz00_3434;

									{
										obj_t BgL_auxz00_3435;

										{	/* Globalize/escape.scm 200 */
											BgL_objectz00_bglt BgL_tmpz00_3436;

											BgL_tmpz00_3436 =
												((BgL_objectz00_bglt)
												((BgL_localz00_bglt)
													((BgL_localz00_bglt) BgL_localz00_2704)));
											BgL_auxz00_3435 = BGL_OBJECT_WIDENING(BgL_tmpz00_3436);
										}
										BgL_auxz00_3434 =
											((BgL_localzf2ginfozf2_bglt) BgL_auxz00_3435);
									}
									((((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3434))->
											BgL_globaliza7edzf3z54) =
										((bool_t) ((bool_t) 0)), BUNSPEC);
								}
								((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_localz00_2704));
								{	/* Globalize/escape.scm 201 */
									BgL_valuez00_bglt BgL_funz00_2708;

									BgL_funz00_2708 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_localz00_2704))))->
										BgL_valuez00);
									{	/* Globalize/escape.scm 202 */
										BgL_sfunzf2ginfozf2_bglt BgL_wide1140z00_2709;

										BgL_wide1140z00_2709 =
											((BgL_sfunzf2ginfozf2_bglt)
											BOBJECT(GC_MALLOC(sizeof(struct
														BgL_sfunzf2ginfozf2_bgl))));
										{	/* Globalize/escape.scm 202 */
											obj_t BgL_auxz00_3453;
											BgL_objectz00_bglt BgL_tmpz00_3449;

											BgL_auxz00_3453 = ((obj_t) BgL_wide1140z00_2709);
											BgL_tmpz00_3449 =
												((BgL_objectz00_bglt)
												((BgL_sfunz00_bglt)
													((BgL_sfunz00_bglt) BgL_funz00_2708)));
											BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3449, BgL_auxz00_3453);
										}
										((BgL_objectz00_bglt)
											((BgL_sfunz00_bglt)
												((BgL_sfunz00_bglt) BgL_funz00_2708)));
										{	/* Globalize/escape.scm 202 */
											long BgL_arg1589z00_2710;

											{	/* Globalize/escape.scm 202 */
												long BgL_res1871z00_2711;

												BgL_res1871z00_2711 =
													BGL_CLASS_INDEX
													(BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7);
												BgL_arg1589z00_2710 = BgL_res1871z00_2711;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_funz00_2708))),
												BgL_arg1589z00_2710);
										}
										((BgL_sfunz00_bglt)
											((BgL_sfunz00_bglt)
												((BgL_sfunz00_bglt) BgL_funz00_2708)));
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3467;

										{
											obj_t BgL_auxz00_3468;

											{	/* Globalize/escape.scm 201 */
												BgL_objectz00_bglt BgL_tmpz00_3469;

												BgL_tmpz00_3469 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_funz00_2708)));
												BgL_auxz00_3468 = BGL_OBJECT_WIDENING(BgL_tmpz00_3469);
											}
											BgL_auxz00_3467 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3468);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3467))->
												BgL_gzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3476;

										{
											obj_t BgL_auxz00_3477;

											{	/* Globalize/escape.scm 201 */
												BgL_objectz00_bglt BgL_tmpz00_3478;

												BgL_tmpz00_3478 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_funz00_2708)));
												BgL_auxz00_3477 = BGL_OBJECT_WIDENING(BgL_tmpz00_3478);
											}
											BgL_auxz00_3476 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3477);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3476))->
												BgL_cfromz00) = ((obj_t) BNIL), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3485;

										{
											obj_t BgL_auxz00_3486;

											{	/* Globalize/escape.scm 201 */
												BgL_objectz00_bglt BgL_tmpz00_3487;

												BgL_tmpz00_3487 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_funz00_2708)));
												BgL_auxz00_3486 = BGL_OBJECT_WIDENING(BgL_tmpz00_3487);
											}
											BgL_auxz00_3485 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3486);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3485))->
												BgL_cfromza2za2) = ((obj_t) BFALSE), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3494;

										{
											obj_t BgL_auxz00_3495;

											{	/* Globalize/escape.scm 201 */
												BgL_objectz00_bglt BgL_tmpz00_3496;

												BgL_tmpz00_3496 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_funz00_2708)));
												BgL_auxz00_3495 = BGL_OBJECT_WIDENING(BgL_tmpz00_3496);
											}
											BgL_auxz00_3494 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3495);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3494))->
												BgL_ctoz00) = ((obj_t) BNIL), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3503;

										{
											obj_t BgL_auxz00_3504;

											{	/* Globalize/escape.scm 201 */
												BgL_objectz00_bglt BgL_tmpz00_3505;

												BgL_tmpz00_3505 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_funz00_2708)));
												BgL_auxz00_3504 = BGL_OBJECT_WIDENING(BgL_tmpz00_3505);
											}
											BgL_auxz00_3503 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3504);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3503))->
												BgL_ctoza2za2) = ((obj_t) BFALSE), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3512;

										{
											obj_t BgL_auxz00_3513;

											{	/* Globalize/escape.scm 201 */
												BgL_objectz00_bglt BgL_tmpz00_3514;

												BgL_tmpz00_3514 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_funz00_2708)));
												BgL_auxz00_3513 = BGL_OBJECT_WIDENING(BgL_tmpz00_3514);
											}
											BgL_auxz00_3512 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3513);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3512))->
												BgL_efunctionsz00) = ((obj_t) BNIL), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3521;

										{
											obj_t BgL_auxz00_3522;

											{	/* Globalize/escape.scm 201 */
												BgL_objectz00_bglt BgL_tmpz00_3523;

												BgL_tmpz00_3523 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_funz00_2708)));
												BgL_auxz00_3522 = BGL_OBJECT_WIDENING(BgL_tmpz00_3523);
											}
											BgL_auxz00_3521 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3522);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3521))->
												BgL_integratorz00) = ((obj_t) BUNSPEC), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3530;

										{
											obj_t BgL_auxz00_3531;

											{	/* Globalize/escape.scm 201 */
												BgL_objectz00_bglt BgL_tmpz00_3532;

												BgL_tmpz00_3532 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_funz00_2708)));
												BgL_auxz00_3531 = BGL_OBJECT_WIDENING(BgL_tmpz00_3532);
											}
											BgL_auxz00_3530 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3531);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3530))->
												BgL_imarkz00) = ((obj_t) BNIL), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3539;

										{
											obj_t BgL_auxz00_3540;

											{	/* Globalize/escape.scm 203 */
												BgL_objectz00_bglt BgL_tmpz00_3541;

												BgL_tmpz00_3541 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_funz00_2708)));
												BgL_auxz00_3540 = BGL_OBJECT_WIDENING(BgL_tmpz00_3541);
											}
											BgL_auxz00_3539 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3540);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3539))->
												BgL_ownerz00) = ((obj_t) BgL_oz00_2587), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3548;

										{
											obj_t BgL_auxz00_3549;

											{	/* Globalize/escape.scm 201 */
												BgL_objectz00_bglt BgL_tmpz00_3550;

												BgL_tmpz00_3550 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_funz00_2708)));
												BgL_auxz00_3549 = BGL_OBJECT_WIDENING(BgL_tmpz00_3550);
											}
											BgL_auxz00_3548 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3549);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3548))->
												BgL_integratedz00) = ((obj_t) BNIL), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3557;

										{
											obj_t BgL_auxz00_3558;

											{	/* Globalize/escape.scm 201 */
												BgL_objectz00_bglt BgL_tmpz00_3559;

												BgL_tmpz00_3559 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_funz00_2708)));
												BgL_auxz00_3558 = BGL_OBJECT_WIDENING(BgL_tmpz00_3559);
											}
											BgL_auxz00_3557 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3558);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3557))->
												BgL_pluggedzd2inzd2) = ((obj_t) BNIL), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3566;

										{
											obj_t BgL_auxz00_3567;

											{	/* Globalize/escape.scm 201 */
												BgL_objectz00_bglt BgL_tmpz00_3568;

												BgL_tmpz00_3568 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_funz00_2708)));
												BgL_auxz00_3567 = BGL_OBJECT_WIDENING(BgL_tmpz00_3568);
											}
											BgL_auxz00_3566 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3567);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3566))->
												BgL_markz00) = ((long) ((long) -10)), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3575;

										{
											obj_t BgL_auxz00_3576;

											{	/* Globalize/escape.scm 201 */
												BgL_objectz00_bglt BgL_tmpz00_3577;

												BgL_tmpz00_3577 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_funz00_2708)));
												BgL_auxz00_3576 = BGL_OBJECT_WIDENING(BgL_tmpz00_3577);
											}
											BgL_auxz00_3575 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3576);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3575))->
												BgL_freezd2markzd2) = ((obj_t) BNIL), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3584;

										{
											obj_t BgL_auxz00_3585;

											{	/* Globalize/escape.scm 201 */
												BgL_objectz00_bglt BgL_tmpz00_3586;

												BgL_tmpz00_3586 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_funz00_2708)));
												BgL_auxz00_3585 = BGL_OBJECT_WIDENING(BgL_tmpz00_3586);
											}
											BgL_auxz00_3584 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3585);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3584))->
												BgL_thezd2globalzd2) = ((obj_t) BFALSE), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3593;

										{
											obj_t BgL_auxz00_3594;

											{	/* Globalize/escape.scm 201 */
												BgL_objectz00_bglt BgL_tmpz00_3595;

												BgL_tmpz00_3595 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_funz00_2708)));
												BgL_auxz00_3594 = BGL_OBJECT_WIDENING(BgL_tmpz00_3595);
											}
											BgL_auxz00_3593 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3594);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3593))->
												BgL_kapturedz00) = ((obj_t) BFALSE), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3602;

										{
											obj_t BgL_auxz00_3603;

											{	/* Globalize/escape.scm 201 */
												BgL_objectz00_bglt BgL_tmpz00_3604;

												BgL_tmpz00_3604 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_funz00_2708)));
												BgL_auxz00_3603 = BGL_OBJECT_WIDENING(BgL_tmpz00_3604);
											}
											BgL_auxz00_3602 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3603);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3602))->
												BgL_newzd2bodyzd2) = ((obj_t) BFALSE), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3611;

										{
											obj_t BgL_auxz00_3612;

											{	/* Globalize/escape.scm 201 */
												BgL_objectz00_bglt BgL_tmpz00_3613;

												BgL_tmpz00_3613 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_funz00_2708)));
												BgL_auxz00_3612 = BGL_OBJECT_WIDENING(BgL_tmpz00_3613);
											}
											BgL_auxz00_3611 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3612);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3611))->
												BgL_bmarkz00) = ((long) ((long) -10)), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3620;

										{
											obj_t BgL_auxz00_3621;

											{	/* Globalize/escape.scm 201 */
												BgL_objectz00_bglt BgL_tmpz00_3622;

												BgL_tmpz00_3622 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_funz00_2708)));
												BgL_auxz00_3621 = BGL_OBJECT_WIDENING(BgL_tmpz00_3622);
											}
											BgL_auxz00_3620 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3621);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3620))->
												BgL_umarkz00) = ((long) ((long) -10)), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3629;

										{
											obj_t BgL_auxz00_3630;

											{	/* Globalize/escape.scm 201 */
												BgL_objectz00_bglt BgL_tmpz00_3631;

												BgL_tmpz00_3631 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_funz00_2708)));
												BgL_auxz00_3630 = BGL_OBJECT_WIDENING(BgL_tmpz00_3631);
											}
											BgL_auxz00_3629 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3630);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3629))->
												BgL_freez00) = ((obj_t) BUNSPEC), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3638;

										{
											obj_t BgL_auxz00_3639;

											{	/* Globalize/escape.scm 201 */
												BgL_objectz00_bglt BgL_tmpz00_3640;

												BgL_tmpz00_3640 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_funz00_2708)));
												BgL_auxz00_3639 = BGL_OBJECT_WIDENING(BgL_tmpz00_3640);
											}
											BgL_auxz00_3638 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3639);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3638))->
												BgL_boundz00) = ((obj_t) BNIL), BUNSPEC);
									}
									((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_2708));
									{	/* Globalize/escape.scm 204 */
										obj_t BgL_g1297z00_2712;

										BgL_g1297z00_2712 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_funz00_2708)))->BgL_argsz00);
										{
											obj_t BgL_l1295z00_2714;

											BgL_l1295z00_2714 = BgL_g1297z00_2712;
										BgL_zc3z04anonymousza31590ze3z87_2713:
											if (PAIRP(BgL_l1295z00_2714))
												{	/* Globalize/escape.scm 206 */
													{	/* Globalize/escape.scm 205 */
														obj_t BgL_localz00_2715;

														BgL_localz00_2715 = CAR(BgL_l1295z00_2714);
														{	/* Globalize/escape.scm 205 */
															BgL_svarz00_bglt BgL_tmp1142z00_2716;

															BgL_tmp1142z00_2716 =
																((BgL_svarz00_bglt)
																(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_localz00_bglt)
																					BgL_localz00_2715))))->BgL_valuez00));
															{	/* Globalize/escape.scm 205 */
																BgL_svarzf2ginfozf2_bglt BgL_wide1144z00_2717;

																BgL_wide1144z00_2717 =
																	((BgL_svarzf2ginfozf2_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_svarzf2ginfozf2_bgl))));
																{	/* Globalize/escape.scm 205 */
																	obj_t BgL_auxz00_3662;
																	BgL_objectz00_bglt BgL_tmpz00_3659;

																	BgL_auxz00_3662 =
																		((obj_t) BgL_wide1144z00_2717);
																	BgL_tmpz00_3659 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1142z00_2716));
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3659,
																		BgL_auxz00_3662);
																}
																((BgL_objectz00_bglt)
																	((BgL_svarz00_bglt) BgL_tmp1142z00_2716));
																{	/* Globalize/escape.scm 205 */
																	long BgL_arg1592z00_2718;

																	{	/* Globalize/escape.scm 205 */
																		long BgL_res1873z00_2719;

																		BgL_res1873z00_2719 =
																			BGL_CLASS_INDEX
																			(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
																		BgL_arg1592z00_2718 = BgL_res1873z00_2719;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt)
																			((BgL_svarz00_bglt) BgL_tmp1142z00_2716)),
																		BgL_arg1592z00_2718);
																}
																((BgL_svarz00_bglt)
																	((BgL_svarz00_bglt) BgL_tmp1142z00_2716));
															}
															{
																BgL_svarzf2ginfozf2_bglt BgL_auxz00_3673;

																{
																	obj_t BgL_auxz00_3674;

																	{	/* Globalize/escape.scm 205 */
																		BgL_objectz00_bglt BgL_tmpz00_3675;

																		BgL_tmpz00_3675 =
																			((BgL_objectz00_bglt)
																			((BgL_svarz00_bglt) BgL_tmp1142z00_2716));
																		BgL_auxz00_3674 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_3675);
																	}
																	BgL_auxz00_3673 =
																		((BgL_svarzf2ginfozf2_bglt)
																		BgL_auxz00_3674);
																}
																((((BgL_svarzf2ginfozf2_bglt)
																			COBJECT(BgL_auxz00_3673))->
																		BgL_kapturedzf3zf3) =
																	((bool_t) ((bool_t) 0)), BUNSPEC);
															}
															{
																BgL_svarzf2ginfozf2_bglt BgL_auxz00_3681;

																{
																	obj_t BgL_auxz00_3682;

																	{	/* Globalize/escape.scm 205 */
																		BgL_objectz00_bglt BgL_tmpz00_3683;

																		BgL_tmpz00_3683 =
																			((BgL_objectz00_bglt)
																			((BgL_svarz00_bglt) BgL_tmp1142z00_2716));
																		BgL_auxz00_3682 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_3683);
																	}
																	BgL_auxz00_3681 =
																		((BgL_svarzf2ginfozf2_bglt)
																		BgL_auxz00_3682);
																}
																((((BgL_svarzf2ginfozf2_bglt)
																			COBJECT(BgL_auxz00_3681))->
																		BgL_freezd2markzd2) =
																	((long) ((long) -10)), BUNSPEC);
															}
															{
																BgL_svarzf2ginfozf2_bglt BgL_auxz00_3689;

																{
																	obj_t BgL_auxz00_3690;

																	{	/* Globalize/escape.scm 205 */
																		BgL_objectz00_bglt BgL_tmpz00_3691;

																		BgL_tmpz00_3691 =
																			((BgL_objectz00_bglt)
																			((BgL_svarz00_bglt) BgL_tmp1142z00_2716));
																		BgL_auxz00_3690 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_3691);
																	}
																	BgL_auxz00_3689 =
																		((BgL_svarzf2ginfozf2_bglt)
																		BgL_auxz00_3690);
																}
																((((BgL_svarzf2ginfozf2_bglt)
																			COBJECT(BgL_auxz00_3689))->BgL_markz00) =
																	((long) ((long) -10)), BUNSPEC);
															}
															{
																BgL_svarzf2ginfozf2_bglt BgL_auxz00_3697;

																{
																	obj_t BgL_auxz00_3698;

																	{	/* Globalize/escape.scm 205 */
																		BgL_objectz00_bglt BgL_tmpz00_3699;

																		BgL_tmpz00_3699 =
																			((BgL_objectz00_bglt)
																			((BgL_svarz00_bglt) BgL_tmp1142z00_2716));
																		BgL_auxz00_3698 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_3699);
																	}
																	BgL_auxz00_3697 =
																		((BgL_svarzf2ginfozf2_bglt)
																		BgL_auxz00_3698);
																}
																((((BgL_svarzf2ginfozf2_bglt)
																			COBJECT(BgL_auxz00_3697))->
																		BgL_celledzf3zf3) =
																	((bool_t) ((bool_t) 0)), BUNSPEC);
															}
															{
																BgL_svarzf2ginfozf2_bglt BgL_auxz00_3705;

																{
																	obj_t BgL_auxz00_3706;

																	{	/* Globalize/escape.scm 205 */
																		BgL_objectz00_bglt BgL_tmpz00_3707;

																		BgL_tmpz00_3707 =
																			((BgL_objectz00_bglt)
																			((BgL_svarz00_bglt) BgL_tmp1142z00_2716));
																		BgL_auxz00_3706 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_3707);
																	}
																	BgL_auxz00_3705 =
																		((BgL_svarzf2ginfozf2_bglt)
																		BgL_auxz00_3706);
																}
																((((BgL_svarzf2ginfozf2_bglt)
																			COBJECT(BgL_auxz00_3705))->
																		BgL_stackablez00) =
																	((bool_t) ((bool_t) 1)), BUNSPEC);
															}
															((BgL_svarz00_bglt) BgL_tmp1142z00_2716);
													}}
													{
														obj_t BgL_l1295z00_3714;

														BgL_l1295z00_3714 = CDR(BgL_l1295z00_2714);
														BgL_l1295z00_2714 = BgL_l1295z00_3714;
														goto BgL_zc3z04anonymousza31590ze3z87_2713;
													}
												}
											else
												{	/* Globalize/escape.scm 206 */
													((bool_t) 1);
												}
										}
									}
								}
							}
							{
								obj_t BgL_l1298z00_3716;

								BgL_l1298z00_3716 = CDR(BgL_l1298z00_2703);
								BgL_l1298z00_2703 = BgL_l1298z00_3716;
								goto BgL_zc3z04anonymousza31583ze3z87_2702;
							}
						}
					else
						{	/* Globalize/escape.scm 199 */
							((bool_t) 1);
						}
				}
			}
			{	/* Globalize/escape.scm 209 */
				obj_t BgL_g1303z00_2720;

				BgL_g1303z00_2720 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2586)))->BgL_localsz00);
				{
					obj_t BgL_l1301z00_2722;

					BgL_l1301z00_2722 = BgL_g1303z00_2720;
				BgL_zc3z04anonymousza31598ze3z87_2721:
					if (PAIRP(BgL_l1301z00_2722))
						{	/* Globalize/escape.scm 209 */
							{	/* Globalize/escape.scm 210 */
								obj_t BgL_localz00_2723;

								BgL_localz00_2723 = CAR(BgL_l1301z00_2722);
								{	/* Globalize/escape.scm 210 */
									BgL_valuez00_bglt BgL_funz00_2724;

									BgL_funz00_2724 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_localz00_2723))))->
										BgL_valuez00);
									{	/* Globalize/escape.scm 211 */
										obj_t BgL_arg1604z00_2725;

										BgL_arg1604z00_2725 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_funz00_2724)))->BgL_bodyz00);
										BGl_escapez12z12zzglobaliza7e_escapeza7(
											((BgL_nodez00_bglt) BgL_arg1604z00_2725),
											((BgL_variablez00_bglt) BgL_localz00_2723));
									}
								}
							}
							{
								obj_t BgL_l1301z00_3731;

								BgL_l1301z00_3731 = CDR(BgL_l1301z00_2722);
								BgL_l1301z00_2722 = BgL_l1301z00_3731;
								goto BgL_zc3z04anonymousza31598ze3z87_2721;
							}
						}
					else
						{	/* Globalize/escape.scm 209 */
							((bool_t) 1);
						}
				}
			}
			{	/* Globalize/escape.scm 214 */
				BgL_nodez00_bglt BgL_arg1606z00_2726;

				BgL_arg1606z00_2726 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2586)))->BgL_bodyz00);
				return
					BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_arg1606z00_2726,
					((BgL_variablez00_bglt) BgL_oz00_2587));
			}
		}

	}



/* &escape!-switch1355 */
	obj_t BGl_z62escapez12zd2switch1355za2zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2588, obj_t BgL_nodez00_2589, obj_t BgL_oz00_2590)
	{
		{	/* Globalize/escape.scm 182 */
			{	/* Globalize/escape.scm 183 */
				bool_t BgL_tmpz00_3737;

				{	/* Globalize/escape.scm 184 */
					BgL_nodez00_bglt BgL_arg1575z00_2728;

					BgL_arg1575z00_2728 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2589)))->BgL_testz00);
					BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_arg1575z00_2728,
						((BgL_variablez00_bglt) BgL_oz00_2590));
				}
				{	/* Globalize/escape.scm 185 */
					obj_t BgL_g1294z00_2729;

					BgL_g1294z00_2729 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2589)))->BgL_clausesz00);
					{
						obj_t BgL_l1292z00_2731;

						BgL_l1292z00_2731 = BgL_g1294z00_2729;
					BgL_zc3z04anonymousza31576ze3z87_2730:
						if (PAIRP(BgL_l1292z00_2731))
							{	/* Globalize/escape.scm 185 */
								{	/* Globalize/escape.scm 186 */
									obj_t BgL_clausez00_2732;

									BgL_clausez00_2732 = CAR(BgL_l1292z00_2731);
									{	/* Globalize/escape.scm 186 */
										obj_t BgL_arg1578z00_2733;

										BgL_arg1578z00_2733 = CDR(((obj_t) BgL_clausez00_2732));
										BGl_escapez12z12zzglobaliza7e_escapeza7(
											((BgL_nodez00_bglt) BgL_arg1578z00_2733),
											((BgL_variablez00_bglt) BgL_oz00_2590));
									}
								}
								{
									obj_t BgL_l1292z00_3752;

									BgL_l1292z00_3752 = CDR(BgL_l1292z00_2731);
									BgL_l1292z00_2731 = BgL_l1292z00_3752;
									goto BgL_zc3z04anonymousza31576ze3z87_2730;
								}
							}
						else
							{	/* Globalize/escape.scm 185 */
								BgL_tmpz00_3737 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_tmpz00_3737);
			}
		}

	}



/* &escape!-fail1353 */
	obj_t BGl_z62escapez12zd2fail1353za2zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2591, obj_t BgL_nodez00_2592, obj_t BgL_oz00_2593)
	{
		{	/* Globalize/escape.scm 173 */
			{	/* Globalize/escape.scm 175 */
				BgL_nodez00_bglt BgL_arg1564z00_2735;

				BgL_arg1564z00_2735 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2592)))->BgL_procz00);
				BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_arg1564z00_2735,
					((BgL_variablez00_bglt) BgL_oz00_2593));
			}
			{	/* Globalize/escape.scm 176 */
				BgL_nodez00_bglt BgL_arg1565z00_2736;

				BgL_arg1565z00_2736 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2592)))->BgL_msgz00);
				BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_arg1565z00_2736,
					((BgL_variablez00_bglt) BgL_oz00_2593));
			}
			{	/* Globalize/escape.scm 177 */
				BgL_nodez00_bglt BgL_arg1573z00_2737;

				BgL_arg1573z00_2737 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2592)))->BgL_objz00);
				return
					BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_arg1573z00_2737,
					((BgL_variablez00_bglt) BgL_oz00_2593));
			}
		}

	}



/* &escape!-conditional1351 */
	obj_t BGl_z62escapez12zd2conditional1351za2zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2594, obj_t BgL_nodez00_2595, obj_t BgL_oz00_2596)
	{
		{	/* Globalize/escape.scm 164 */
			{	/* Globalize/escape.scm 166 */
				BgL_nodez00_bglt BgL_arg1552z00_2739;

				BgL_arg1552z00_2739 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2595)))->BgL_testz00);
				BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_arg1552z00_2739,
					((BgL_variablez00_bglt) BgL_oz00_2596));
			}
			{	/* Globalize/escape.scm 167 */
				BgL_nodez00_bglt BgL_arg1558z00_2740;

				BgL_arg1558z00_2740 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2595)))->BgL_truez00);
				BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_arg1558z00_2740,
					((BgL_variablez00_bglt) BgL_oz00_2596));
			}
			{	/* Globalize/escape.scm 168 */
				BgL_nodez00_bglt BgL_arg1561z00_2741;

				BgL_arg1561z00_2741 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2595)))->BgL_falsez00);
				return
					BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_arg1561z00_2741,
					((BgL_variablez00_bglt) BgL_oz00_2596));
			}
		}

	}



/* &escape!-setq1349 */
	obj_t BGl_z62escapez12zd2setq1349za2zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2597, obj_t BgL_nodez00_2598, obj_t BgL_oz00_2599)
	{
		{	/* Globalize/escape.scm 157 */
			{	/* Globalize/escape.scm 159 */
				BgL_nodez00_bglt BgL_arg1540z00_2743;

				BgL_arg1540z00_2743 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2598)))->BgL_valuez00);
				return
					BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_arg1540z00_2743,
					((BgL_variablez00_bglt) BgL_oz00_2599));
			}
		}

	}



/* &escape!-cast1347 */
	obj_t BGl_z62escapez12zd2cast1347za2zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2600, obj_t BgL_nodez00_2601, obj_t BgL_oz00_2602)
	{
		{	/* Globalize/escape.scm 151 */
			{	/* Globalize/escape.scm 152 */
				BgL_nodez00_bglt BgL_arg1537z00_2745;

				BgL_arg1537z00_2745 =
					(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2601)))->BgL_argz00);
				return
					BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_arg1537z00_2745,
					((BgL_variablez00_bglt) BgL_oz00_2602));
			}
		}

	}



/* &escape!-extern1345 */
	obj_t BGl_z62escapez12zd2extern1345za2zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2603, obj_t BgL_nodez00_2604, obj_t BgL_oz00_2605)
	{
		{	/* Globalize/escape.scm 145 */
			return
				BBOOL(BGl_escapeza2z12zb0zzglobaliza7e_escapeza7(
					(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_nodez00_2604)))->BgL_exprza2za2),
					BgL_oz00_2605));
		}

	}



/* &escape!-funcall1343 */
	obj_t BGl_z62escapez12zd2funcall1343za2zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2606, obj_t BgL_nodez00_2607, obj_t BgL_oz00_2608)
	{
		{	/* Globalize/escape.scm 137 */
			{	/* Globalize/escape.scm 138 */
				bool_t BgL_tmpz00_3791;

				{	/* Globalize/escape.scm 139 */
					BgL_nodez00_bglt BgL_arg1521z00_2748;

					BgL_arg1521z00_2748 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2607)))->BgL_funz00);
					BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_arg1521z00_2748,
						((BgL_variablez00_bglt) BgL_oz00_2608));
				}
				BgL_tmpz00_3791 =
					BGl_escapeza2z12zb0zzglobaliza7e_escapeza7(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2607)))->BgL_argsz00),
					BgL_oz00_2608);
				return BBOOL(BgL_tmpz00_3791);
			}
		}

	}



/* &escape!-app-ly1341 */
	obj_t BGl_z62escapez12zd2appzd2ly1341z70zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2609, obj_t BgL_nodez00_2610, obj_t BgL_oz00_2611)
	{
		{	/* Globalize/escape.scm 129 */
			{	/* Globalize/escape.scm 131 */
				BgL_nodez00_bglt BgL_arg1497z00_2750;

				BgL_arg1497z00_2750 =
					(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_2610)))->BgL_funz00);
				BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_arg1497z00_2750,
					((BgL_variablez00_bglt) BgL_oz00_2611));
			}
			{	/* Globalize/escape.scm 132 */
				BgL_nodez00_bglt BgL_arg1518z00_2751;

				BgL_arg1518z00_2751 =
					(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_2610)))->BgL_argz00);
				return
					BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_arg1518z00_2751,
					((BgL_variablez00_bglt) BgL_oz00_2611));
			}
		}

	}



/* &escape!-app1339 */
	obj_t BGl_z62escapez12zd2app1339za2zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2612, obj_t BgL_nodez00_2613, obj_t BgL_oz00_2614)
	{
		{	/* Globalize/escape.scm 122 */
			return
				BBOOL(BGl_escapeza2z12zb0zzglobaliza7e_escapeza7(
					(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2613)))->BgL_argsz00),
					BgL_oz00_2614));
		}

	}



/* &escape!-sync1337 */
	obj_t BGl_z62escapez12zd2sync1337za2zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2615, obj_t BgL_nodez00_2616, obj_t BgL_oz00_2617)
	{
		{	/* Globalize/escape.scm 114 */
			{	/* Globalize/escape.scm 115 */
				BgL_nodez00_bglt BgL_arg1477z00_2754;

				BgL_arg1477z00_2754 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2616)))->BgL_mutexz00);
				BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_arg1477z00_2754,
					((BgL_variablez00_bglt) BgL_oz00_2617));
			}
			{	/* Globalize/escape.scm 116 */
				BgL_nodez00_bglt BgL_arg1489z00_2755;

				BgL_arg1489z00_2755 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2616)))->BgL_prelockz00);
				BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_arg1489z00_2755,
					((BgL_variablez00_bglt) BgL_oz00_2617));
			}
			{	/* Globalize/escape.scm 117 */
				BgL_nodez00_bglt BgL_arg1493z00_2756;

				BgL_arg1493z00_2756 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2616)))->BgL_bodyz00);
				return
					BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_arg1493z00_2756,
					((BgL_variablez00_bglt) BgL_oz00_2617));
			}
		}

	}



/* &escape!-sequence1335 */
	obj_t BGl_z62escapez12zd2sequence1335za2zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2618, obj_t BgL_nodez00_2619, obj_t BgL_oz00_2620)
	{
		{	/* Globalize/escape.scm 108 */
			return
				BBOOL(BGl_escapeza2z12zb0zzglobaliza7e_escapeza7(
					(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_2619)))->BgL_nodesz00),
					BgL_oz00_2620));
		}

	}



/* &escape!-closure1333 */
	obj_t BGl_z62escapez12zd2closure1333za2zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2621, obj_t BgL_nodez00_2622, obj_t BgL_oz00_2623)
	{
		{	/* Globalize/escape.scm 102 */
			{	/* Globalize/escape.scm 103 */
				BgL_variablez00_bglt BgL_arg1474z00_2759;

				BgL_arg1474z00_2759 =
					(((BgL_varz00_bglt) COBJECT(
							((BgL_varz00_bglt)
								((BgL_closurez00_bglt) BgL_nodez00_2622))))->BgL_variablez00);
				return
					BGl_setzd2escapingzd2funz12z12zzglobaliza7e_escapeza7
					(BgL_arg1474z00_2759);
			}
		}

	}



/* &escape!-var1331 */
	obj_t BGl_z62escapez12zd2var1331za2zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2624, obj_t BgL_nodez00_2625, obj_t BgL_oz00_2626)
	{
		{	/* Globalize/escape.scm 96 */
			return CNST_TABLE_REF(((long) 1));
		}

	}



/* &escape!-kwote1329 */
	obj_t BGl_z62escapez12zd2kwote1329za2zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2627, obj_t BgL_nodez00_2628, obj_t BgL_oz00_2629)
	{
		{	/* Globalize/escape.scm 90 */
			return CNST_TABLE_REF(((long) 1));
		}

	}



/* &escape!-atom1327 */
	obj_t BGl_z62escapez12zd2atom1327za2zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2630, obj_t BgL_nodez00_2631, obj_t BgL_oz00_2632)
	{
		{	/* Globalize/escape.scm 84 */
			return CNST_TABLE_REF(((long) 1));
		}

	}



/* &set-escaping-fun!-lo1322 */
	obj_t BGl_z62setzd2escapingzd2funz12zd2lo1322za2zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2633, obj_t BgL_variablez00_2634)
	{
		{	/* Globalize/escape.scm 73 */
			{
				BgL_localzf2ginfozf2_bglt BgL_auxz00_3835;

				{
					obj_t BgL_auxz00_3836;

					{	/* Globalize/escape.scm 74 */
						BgL_objectz00_bglt BgL_tmpz00_3837;

						BgL_tmpz00_3837 =
							((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_variablez00_2634));
						BgL_auxz00_3836 = BGL_OBJECT_WIDENING(BgL_tmpz00_3837);
					}
					BgL_auxz00_3835 = ((BgL_localzf2ginfozf2_bglt) BgL_auxz00_3836);
				}
				return
					((((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3835))->
						BgL_escapezf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
			}
		}

	}



/* &set-escaping-fun!-gl1320 */
	obj_t BGl_z62setzd2escapingzd2funz12zd2gl1320za2zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2635, obj_t BgL_variablez00_2636)
	{
		{	/* Globalize/escape.scm 67 */
			{
				BgL_globalzf2ginfozf2_bglt BgL_auxz00_3843;

				{
					obj_t BgL_auxz00_3844;

					{	/* Globalize/escape.scm 68 */
						BgL_objectz00_bglt BgL_tmpz00_3845;

						BgL_tmpz00_3845 =
							((BgL_objectz00_bglt)
							((BgL_globalz00_bglt) BgL_variablez00_2636));
						BgL_auxz00_3844 = BGL_OBJECT_WIDENING(BgL_tmpz00_3845);
					}
					BgL_auxz00_3843 = ((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_3844);
				}
				return
					((((BgL_globalzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3843))->
						BgL_escapezf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
			}
		}

	}



/* &set-escaping-fun!-gl1318 */
	obj_t BGl_z62setzd2escapingzd2funz12zd2gl1318za2zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2637, obj_t BgL_variablez00_2638)
	{
		{	/* Globalize/escape.scm 61 */
			{
				BgL_globalz00_bglt BgL_auxz00_3851;

				{	/* Globalize/escape.scm 62 */
					BgL_globalzf2ginfozf2_bglt BgL_wide1123z00_2766;

					BgL_wide1123z00_2766 =
						((BgL_globalzf2ginfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_globalzf2ginfozf2_bgl))));
					{	/* Globalize/escape.scm 62 */
						obj_t BgL_auxz00_3857;
						BgL_objectz00_bglt BgL_tmpz00_3853;

						BgL_auxz00_3857 = ((obj_t) BgL_wide1123z00_2766);
						BgL_tmpz00_3853 =
							((BgL_objectz00_bglt)
							((BgL_globalz00_bglt)
								((BgL_globalz00_bglt) BgL_variablez00_2638)));
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3853, BgL_auxz00_3857);
					}
					((BgL_objectz00_bglt)
						((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_variablez00_2638)));
					{	/* Globalize/escape.scm 62 */
						long BgL_arg1465z00_2767;

						{	/* Globalize/escape.scm 62 */
							long BgL_res1867z00_2768;

							BgL_res1867z00_2768 =
								BGL_CLASS_INDEX(BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7);
							BgL_arg1465z00_2767 = BgL_res1867z00_2768;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt)
								((BgL_globalz00_bglt)
									((BgL_globalz00_bglt) BgL_variablez00_2638))),
							BgL_arg1465z00_2767);
					}
					((BgL_globalz00_bglt)
						((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_variablez00_2638)));
				}
				{
					BgL_globalzf2ginfozf2_bglt BgL_auxz00_3871;

					{
						obj_t BgL_auxz00_3872;

						{	/* Globalize/escape.scm 62 */
							BgL_objectz00_bglt BgL_tmpz00_3873;

							BgL_tmpz00_3873 =
								((BgL_objectz00_bglt)
								((BgL_globalz00_bglt)
									((BgL_globalz00_bglt) BgL_variablez00_2638)));
							BgL_auxz00_3872 = BGL_OBJECT_WIDENING(BgL_tmpz00_3873);
						}
						BgL_auxz00_3871 = ((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_3872);
					}
					((((BgL_globalzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3871))->
							BgL_escapezf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
				}
				{
					BgL_globalzf2ginfozf2_bglt BgL_auxz00_3880;

					{
						obj_t BgL_auxz00_3881;

						{	/* Globalize/escape.scm 62 */
							BgL_objectz00_bglt BgL_tmpz00_3882;

							BgL_tmpz00_3882 =
								((BgL_objectz00_bglt)
								((BgL_globalz00_bglt)
									((BgL_globalz00_bglt) BgL_variablez00_2638)));
							BgL_auxz00_3881 = BGL_OBJECT_WIDENING(BgL_tmpz00_3882);
						}
						BgL_auxz00_3880 = ((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_3881);
					}
					((((BgL_globalzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3880))->
							BgL_globalzd2closurezd2) = ((obj_t) BFALSE), BUNSPEC);
				}
				BgL_auxz00_3851 =
					((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_variablez00_2638));
				return ((obj_t) BgL_auxz00_3851);
			}
		}

	}



/* &escape-fun!-local1314 */
	obj_t BGl_z62escapezd2funz12zd2local1314z70zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2639, obj_t BgL_variablez00_2640)
	{
		{	/* Globalize/escape.scm 47 */
			{

				{	/* Globalize/escape.scm 48 */
					bool_t BgL_test1973z00_3892;

					{	/* Globalize/escape.scm 48 */
						bool_t BgL_res1865z00_2772;

						BgL_res1865z00_2772 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t)
								((BgL_localz00_bglt) BgL_variablez00_2640)),
							BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7);
						BgL_test1973z00_3892 = BgL_res1865z00_2772;
					}
					if (BgL_test1973z00_3892)
						{	/* Globalize/escape.scm 48 */
							BFALSE;
						}
					else
						{	/* Globalize/escape.scm 48 */
							{	/* Globalize/escape.scm 49 */
								BgL_localzf2ginfozf2_bglt BgL_wide1119z00_2773;

								BgL_wide1119z00_2773 =
									((BgL_localzf2ginfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_localzf2ginfozf2_bgl))));
								{	/* Globalize/escape.scm 49 */
									obj_t BgL_auxz00_3901;
									BgL_objectz00_bglt BgL_tmpz00_3897;

									BgL_auxz00_3901 = ((obj_t) BgL_wide1119z00_2773);
									BgL_tmpz00_3897 =
										((BgL_objectz00_bglt)
										((BgL_localz00_bglt)
											((BgL_localz00_bglt) BgL_variablez00_2640)));
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3897, BgL_auxz00_3901);
								}
								((BgL_objectz00_bglt)
									((BgL_localz00_bglt)
										((BgL_localz00_bglt) BgL_variablez00_2640)));
								{	/* Globalize/escape.scm 49 */
									long BgL_arg1464z00_2774;

									{	/* Globalize/escape.scm 49 */
										long BgL_res1866z00_2775;

										BgL_res1866z00_2775 =
											BGL_CLASS_INDEX
											(BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7);
										BgL_arg1464z00_2774 = BgL_res1866z00_2775;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt)
											((BgL_localz00_bglt)
												((BgL_localz00_bglt) BgL_variablez00_2640))),
										BgL_arg1464z00_2774);
								}
								((BgL_localz00_bglt)
									((BgL_localz00_bglt)
										((BgL_localz00_bglt) BgL_variablez00_2640)));
							}
							{
								BgL_localzf2ginfozf2_bglt BgL_auxz00_3915;

								{
									obj_t BgL_auxz00_3916;

									{	/* Globalize/escape.scm 49 */
										BgL_objectz00_bglt BgL_tmpz00_3917;

										BgL_tmpz00_3917 =
											((BgL_objectz00_bglt)
											((BgL_localz00_bglt)
												((BgL_localz00_bglt) BgL_variablez00_2640)));
										BgL_auxz00_3916 = BGL_OBJECT_WIDENING(BgL_tmpz00_3917);
									}
									BgL_auxz00_3915 =
										((BgL_localzf2ginfozf2_bglt) BgL_auxz00_3916);
								}
								((((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3915))->
										BgL_escapezf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
							}
							{
								BgL_localzf2ginfozf2_bglt BgL_auxz00_3924;

								{
									obj_t BgL_auxz00_3925;

									{	/* Globalize/escape.scm 49 */
										BgL_objectz00_bglt BgL_tmpz00_3926;

										BgL_tmpz00_3926 =
											((BgL_objectz00_bglt)
											((BgL_localz00_bglt)
												((BgL_localz00_bglt) BgL_variablez00_2640)));
										BgL_auxz00_3925 = BGL_OBJECT_WIDENING(BgL_tmpz00_3926);
									}
									BgL_auxz00_3924 =
										((BgL_localzf2ginfozf2_bglt) BgL_auxz00_3925);
								}
								((((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3924))->
										BgL_globaliza7edzf3z54) = ((bool_t) ((bool_t) 0)), BUNSPEC);
							}
							((obj_t)
								((BgL_localz00_bglt)
									((BgL_localz00_bglt) BgL_variablez00_2640)));
				}}
				{	/* Globalize/escape.scm 47 */
					obj_t BgL_nextzd2method1313zd2_2771;

					BgL_nextzd2method1313zd2_2771 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_localz00_bglt) BgL_variablez00_2640)),
						BGl_escapezd2funz12zd2envz12zzglobaliza7e_escapeza7,
						BGl_localz00zzast_varz00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1313zd2_2771)
						(BgL_nextzd2method1313zd2_2771,
						((obj_t) ((BgL_localz00_bglt) BgL_variablez00_2640)), BEOA);
				}
			}
		}

	}



/* &escape-fun!-global1312 */
	obj_t BGl_z62escapezd2funz12zd2global1312z70zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2641, obj_t BgL_variablez00_2642)
	{
		{	/* Globalize/escape.scm 38 */
			{

				{	/* Globalize/escape.scm 39 */
					bool_t BgL_test1974z00_3945;

					{	/* Globalize/escape.scm 39 */
						bool_t BgL_res1863z00_2779;

						BgL_res1863z00_2779 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t)
								((BgL_globalz00_bglt) BgL_variablez00_2642)),
							BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7);
						BgL_test1974z00_3945 = BgL_res1863z00_2779;
					}
					if (BgL_test1974z00_3945)
						{	/* Globalize/escape.scm 39 */
							BFALSE;
						}
					else
						{	/* Globalize/escape.scm 39 */
							{	/* Globalize/escape.scm 40 */
								BgL_globalzf2ginfozf2_bglt BgL_wide1115z00_2780;

								BgL_wide1115z00_2780 =
									((BgL_globalzf2ginfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_globalzf2ginfozf2_bgl))));
								{	/* Globalize/escape.scm 40 */
									obj_t BgL_auxz00_3954;
									BgL_objectz00_bglt BgL_tmpz00_3950;

									BgL_auxz00_3954 = ((obj_t) BgL_wide1115z00_2780);
									BgL_tmpz00_3950 =
										((BgL_objectz00_bglt)
										((BgL_globalz00_bglt)
											((BgL_globalz00_bglt) BgL_variablez00_2642)));
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3950, BgL_auxz00_3954);
								}
								((BgL_objectz00_bglt)
									((BgL_globalz00_bglt)
										((BgL_globalz00_bglt) BgL_variablez00_2642)));
								{	/* Globalize/escape.scm 40 */
									long BgL_arg1461z00_2781;

									{	/* Globalize/escape.scm 40 */
										long BgL_res1864z00_2782;

										BgL_res1864z00_2782 =
											BGL_CLASS_INDEX
											(BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7);
										BgL_arg1461z00_2781 = BgL_res1864z00_2782;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt)
											((BgL_globalz00_bglt)
												((BgL_globalz00_bglt) BgL_variablez00_2642))),
										BgL_arg1461z00_2781);
								}
								((BgL_globalz00_bglt)
									((BgL_globalz00_bglt)
										((BgL_globalz00_bglt) BgL_variablez00_2642)));
							}
							{
								BgL_globalzf2ginfozf2_bglt BgL_auxz00_3968;

								{
									obj_t BgL_auxz00_3969;

									{	/* Globalize/escape.scm 41 */
										BgL_objectz00_bglt BgL_tmpz00_3970;

										BgL_tmpz00_3970 =
											((BgL_objectz00_bglt)
											((BgL_globalz00_bglt)
												((BgL_globalz00_bglt) BgL_variablez00_2642)));
										BgL_auxz00_3969 = BGL_OBJECT_WIDENING(BgL_tmpz00_3970);
									}
									BgL_auxz00_3968 =
										((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_3969);
								}
								((((BgL_globalzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3968))->
										BgL_escapezf3zf3) =
									((bool_t) ((((BgL_globalz00_bglt)
													COBJECT(((BgL_globalz00_bglt)
															BgL_variablez00_2642)))->BgL_importz00) ==
											CNST_TABLE_REF(((long) 2)))), BUNSPEC);
							}
							{
								BgL_globalzf2ginfozf2_bglt BgL_auxz00_3981;

								{
									obj_t BgL_auxz00_3982;

									{	/* Globalize/escape.scm 41 */
										BgL_objectz00_bglt BgL_tmpz00_3983;

										BgL_tmpz00_3983 =
											((BgL_objectz00_bglt)
											((BgL_globalz00_bglt)
												((BgL_globalz00_bglt) BgL_variablez00_2642)));
										BgL_auxz00_3982 = BGL_OBJECT_WIDENING(BgL_tmpz00_3983);
									}
									BgL_auxz00_3981 =
										((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_3982);
								}
								((((BgL_globalzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3981))->
										BgL_globalzd2closurezd2) = ((obj_t) BFALSE), BUNSPEC);
							}
							((obj_t)
								((BgL_globalz00_bglt)
									((BgL_globalz00_bglt) BgL_variablez00_2642)));
				}}
				{	/* Globalize/escape.scm 38 */
					obj_t BgL_nextzd2method1311zd2_2778;

					BgL_nextzd2method1311zd2_2778 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_globalz00_bglt) BgL_variablez00_2642)),
						BGl_escapezd2funz12zd2envz12zzglobaliza7e_escapeza7,
						BGl_globalz00zzast_varz00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1311zd2_2778)
						(BgL_nextzd2method1311zd2_2778,
						((obj_t) ((BgL_globalz00_bglt) BgL_variablez00_2642)), BEOA);
				}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_escapeza7()
	{
		{	/* Globalize/escape.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1916z00zzglobaliza7e_escapeza7));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1916z00zzglobaliza7e_escapeza7));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1916z00zzglobaliza7e_escapeza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1916z00zzglobaliza7e_escapeza7));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1916z00zzglobaliza7e_escapeza7));
			return
				BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(((long) 0),
				BSTRING_TO_STRING(BGl_string1916z00zzglobaliza7e_escapeza7));
		}

	}

#ifdef __cplusplus
}
#endif
