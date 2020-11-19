/*===========================================================================*/
/*   (Bdb/bdb_emit.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Bdb/bdb_emit.scm) */
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

	typedef struct BgL_tclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		struct BgL_globalz00_bgl *BgL_holderz00;
		obj_t BgL_wideningz00;
		long BgL_depthz00;
		bool_t BgL_finalzf3zf3;
		obj_t BgL_constructorz00;
		obj_t BgL_virtualzd2slotszd2numberz00;
		bool_t BgL_abstractzf3zf3;
		obj_t BgL_widezd2typezd2;
		obj_t BgL_subclassesz00;
	}                *BgL_tclassz00_bglt;


	static obj_t BGl_z62bdbz12zd2switch1316za2zzbdb_emitz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	static obj_t BGl_z62bdbz12zd2app1335za2zzbdb_emitz00(obj_t, obj_t);
	extern obj_t BGl_getzd2toplevelzd2unitz00zzmodule_includez00();
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	BGL_IMPORT obj_t bigloo_module_mangle(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzbdb_emitz00();
	extern obj_t BGl_za2stringza2z00zztype_cachez00;
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzbdb_emitz00();
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_z62bdbz12zd2funcall1332za2zzbdb_emitz00(obj_t, obj_t);
	extern obj_t BGl_svarz00zzast_varz00;
	extern obj_t BGl_za2modulezd2clauseza2zd2zzmodule_modulez00;
	BGL_EXPORTED_DECL obj_t BGl_emitzd2bdbzd2infoz00zzbdb_emitz00(obj_t, obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_bdbzd2globalzd2sfunz12z12zzbdb_emitz00(obj_t);
	static obj_t BGl_bdbz12z12zzbdb_emitz00(BgL_nodez00_bglt);
	static obj_t BGl_z62bdbz12zd2setzd2exzd2it1322za2zzbdb_emitz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzbdb_emitz00();
	static obj_t BGl_z62bdbz12zd2conditional1312za2zzbdb_emitz00(obj_t, obj_t);
	extern obj_t BGl_unitzd2initializa7erzd2idza7zzast_unitz00(obj_t);
	static obj_t BGl_z62bdbz12zd2cast1308za2zzbdb_emitz00(obj_t, obj_t);
	static obj_t BGl_z62bdbz12zd2setq1310za2zzbdb_emitz00(obj_t, obj_t);
	static obj_t BGl_z62bdbz121299z70zzbdb_emitz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_bdbzd2sfunz12zc0zzbdb_emitz00(BgL_valuez00_bglt);
	static obj_t BGl_z62bdbz12zd2sequence1302za2zzbdb_emitz00(obj_t, obj_t);
	extern obj_t BGl_getzd2classzd2listz00zzobject_classz00();
	extern obj_t BGl_za2charza2z00zztype_cachez00;
	static obj_t BGl_z62bdbz12zd2appzd2ly1330z70zzbdb_emitz00(obj_t, obj_t);
	static obj_t BGl_z62bdbz12zd2letzd2fun1318z70zzbdb_emitz00(obj_t, obj_t);
	static obj_t BGl_bdbzd2globalzd2svarz12z12zzbdb_emitz00(obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	static obj_t BGl_z62bdbz12zd2extern1306za2zzbdb_emitz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbdb_emitz00 = BUNSPEC;
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_za2czd2portza2zd2zzbdb_emitz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzbdb_emitz00();
	static obj_t BGl_z62bdbz12zd2jumpzd2exzd2it1324za2zzbdb_emitz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzbdb_emitz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	static obj_t BGl_z62emitzd2bdbzd2infoz62zzbdb_emitz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	static bool_t BGl_bdbzd2localzd2variablezf3zf3zzbdb_emitz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_bdbzd2emitzd2localzd2infoz12zc0zzbdb_emitz00(obj_t);
	extern obj_t BGl_za2realza2z00zztype_cachez00;
	static obj_t BGl_z62bdbz12zd2letzd2var1320z70zzbdb_emitz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl_bdbza2z12zb0zzbdb_emitz00(obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static bool_t BGl_emitzd2bdbzd2classzd2typeszd2zzbdb_emitz00(obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzbdb_emitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_configurez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_includez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_unitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_z62bdbz12z70zzbdb_emitz00(obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_z62bdbz12zd2boxzd2setz121328z62zzbdb_emitz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzbdb_emitz00();
	static obj_t BGl_z62bdbz12zd2makezd2box1326z70zzbdb_emitz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzbdb_emitz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzbdb_emitz00();
	static obj_t BGl_z62zc3z04anonymousza31466ze3ze5zzbdb_emitz00(obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	static obj_t BGl_z62bdbz12zd2sync1304za2zzbdb_emitz00(obj_t, obj_t);
	static obj_t BGl_z62bdbz12zd2fail1314za2zzbdb_emitz00(obj_t, obj_t);
	extern obj_t
		BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(BgL_variablez00_bglt);
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[6];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1915z00zzbdb_emitz00,
		BgL_bgl_za762za7c3za704anonymo1954za7,
		BGl_z62zc3z04anonymousza31466ze3ze5zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1927z00zzbdb_emitz00,
		BgL_bgl_za762bdbza7121299za7701955za7, BGl_z62bdbz121299z70zzbdb_emitz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1929z00zzbdb_emitz00,
		BgL_bgl_za762bdbza712za7d2sequ1956za7,
		BGl_z62bdbz12zd2sequence1302za2zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1931z00zzbdb_emitz00,
		BgL_bgl_za762bdbza712za7d2sync1957za7,
		BGl_z62bdbz12zd2sync1304za2zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1932z00zzbdb_emitz00,
		BgL_bgl_za762bdbza712za7d2exte1958za7,
		BGl_z62bdbz12zd2extern1306za2zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1933z00zzbdb_emitz00,
		BgL_bgl_za762bdbza712za7d2cast1959za7,
		BGl_z62bdbz12zd2cast1308za2zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1934z00zzbdb_emitz00,
		BgL_bgl_za762bdbza712za7d2setq1960za7,
		BGl_z62bdbz12zd2setq1310za2zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1935z00zzbdb_emitz00,
		BgL_bgl_za762bdbza712za7d2cond1961za7,
		BGl_z62bdbz12zd2conditional1312za2zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1936z00zzbdb_emitz00,
		BgL_bgl_za762bdbza712za7d2fail1962za7,
		BGl_z62bdbz12zd2fail1314za2zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1937z00zzbdb_emitz00,
		BgL_bgl_za762bdbza712za7d2swit1963za7,
		BGl_z62bdbz12zd2switch1316za2zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1938z00zzbdb_emitz00,
		BgL_bgl_za762bdbza712za7d2letza71964z00,
		BGl_z62bdbz12zd2letzd2fun1318z70zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1939z00zzbdb_emitz00,
		BgL_bgl_za762bdbza712za7d2letza71965z00,
		BGl_z62bdbz12zd2letzd2var1320z70zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1940z00zzbdb_emitz00,
		BgL_bgl_za762bdbza712za7d2setza71966z00,
		BGl_z62bdbz12zd2setzd2exzd2it1322za2zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1941z00zzbdb_emitz00,
		BgL_bgl_za762bdbza712za7d2jump1967za7,
		BGl_z62bdbz12zd2jumpzd2exzd2it1324za2zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1942z00zzbdb_emitz00,
		BgL_bgl_za762bdbza712za7d2make1968za7,
		BGl_z62bdbz12zd2makezd2box1326z70zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1943z00zzbdb_emitz00,
		BgL_bgl_za762bdbza712za7d2boxza71969z00,
		BGl_z62bdbz12zd2boxzd2setz121328z62zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1944z00zzbdb_emitz00,
		BgL_bgl_za762bdbza712za7d2appza71970z00,
		BGl_z62bdbz12zd2appzd2ly1330z70zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1945z00zzbdb_emitz00,
		BgL_bgl_za762bdbza712za7d2func1971za7,
		BGl_z62bdbz12zd2funcall1332za2zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1946z00zzbdb_emitz00,
		BgL_bgl_za762bdbza712za7d2app11972za7,
		BGl_z62bdbz12zd2app1335za2zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1895z00zzbdb_emitz00,
		BgL_bgl_string1895za700za7za7b1973za7, "/* bdb association table */", 27);
	      DEFINE_STRING(BGl_string1896z00zzbdb_emitz00,
		BgL_bgl_string1896za700za7za7b1974za7, "static struct bdb_fun_info {\n",
		29);
	      DEFINE_STRING(BGl_string1897z00zzbdb_emitz00,
		BgL_bgl_string1897za700za7za7b1975za7, "   char *sname, *cname;\n", 24);
	      DEFINE_STRING(BGl_string1898z00zzbdb_emitz00,
		BgL_bgl_string1898za700za7za7b1976za7, "} ", 2);
	      DEFINE_STRING(BGl_string1899z00zzbdb_emitz00,
		BgL_bgl_string1899za700za7za7b1977za7, "__bdb_info", 10);
	      DEFINE_STATIC_BGL_GENERIC(BGl_bdbz12zd2envzc0zzbdb_emitz00,
		BgL_bgl_za762bdbza712za770za7za7bd1978za7, BGl_z62bdbz12z70zzbdb_emitz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_emitzd2bdbzd2infozd2envzd2zzbdb_emitz00,
		BgL_bgl_za762emitza7d2bdbza7d21979za7,
		BGl_z62emitzd2bdbzd2infoz62zzbdb_emitz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1900z00zzbdb_emitz00,
		BgL_bgl_string1900za700za7za7b1980za7, "[] = { ", 7);
	      DEFINE_STRING(BGl_string1901z00zzbdb_emitz00,
		BgL_bgl_string1901za700za7za7b1981za7,
		"   /* Magic number to ensure comp/dbg compatibility */", 54);
	      DEFINE_STRING(BGl_string1902z00zzbdb_emitz00,
		BgL_bgl_string1902za700za7za7b1982za7, "   {(char *)", 12);
	      DEFINE_STRING(BGl_string1903z00zzbdb_emitz00,
		BgL_bgl_string1903za700za7za7b1983za7, ", (char *)", 10);
	      DEFINE_STRING(BGl_string1904z00zzbdb_emitz00,
		BgL_bgl_string1904za700za7za7b1984za7, "},", 2);
	      DEFINE_STRING(BGl_string1905z00zzbdb_emitz00,
		BgL_bgl_string1905za700za7za7b1985za7,
		"   /* Module and source file identification */", 46);
	      DEFINE_STRING(BGl_string1906z00zzbdb_emitz00,
		BgL_bgl_string1906za700za7za7b1986za7, "   {\"", 5);
	      DEFINE_STRING(BGl_string1907z00zzbdb_emitz00,
		BgL_bgl_string1907za700za7za7b1987za7, "\", \"", 4);
	      DEFINE_STRING(BGl_string1908z00zzbdb_emitz00,
		BgL_bgl_string1908za700za7za7b1988za7, "\" },", 4);
	      DEFINE_STRING(BGl_string1909z00zzbdb_emitz00,
		BgL_bgl_string1909za700za7za7b1989za7, "\", 0 },", 7);
	      DEFINE_STRING(BGl_string1910z00zzbdb_emitz00,
		BgL_bgl_string1910za700za7za7b1990za7, "   { 0, (char *)", 16);
	      DEFINE_STRING(BGl_string1911z00zzbdb_emitz00,
		BgL_bgl_string1911za700za7za7b1991za7, "0", 1);
	      DEFINE_STRING(BGl_string1912z00zzbdb_emitz00,
		BgL_bgl_string1912za700za7za7b1992za7, " },", 3);
	      DEFINE_STRING(BGl_string1913z00zzbdb_emitz00,
		BgL_bgl_string1913za700za7za7b1993za7, "   /* Global functions */", 25);
	      DEFINE_STRING(BGl_string1914z00zzbdb_emitz00,
		BgL_bgl_string1914za700za7za7b1994za7, "   /* Global variables */", 25);
	      DEFINE_STRING(BGl_string1916z00zzbdb_emitz00,
		BgL_bgl_string1916za700za7za7b1995za7, "   {0, 0},", 10);
	      DEFINE_STRING(BGl_string1917z00zzbdb_emitz00,
		BgL_bgl_string1917za700za7za7b1996za7, "   0};\n", 7);
	      DEFINE_STRING(BGl_string1918z00zzbdb_emitz00,
		BgL_bgl_string1918za700za7za7b1997za7, "   /* Bigloo classes */", 23);
	      DEFINE_STRING(BGl_string1919z00zzbdb_emitz00,
		BgL_bgl_string1919za700za7za7b1998za7, " *\", 0 },", 9);
	      DEFINE_STRING(BGl_string1920z00zzbdb_emitz00,
		BgL_bgl_string1920za700za7za7b1999za7, "\", (char *)", 11);
	      DEFINE_STRING(BGl_string1921z00zzbdb_emitz00,
		BgL_bgl_string1921za700za7za7b2000za7, "\", 0},", 6);
	      DEFINE_STRING(BGl_string1922z00zzbdb_emitz00,
		BgL_bgl_string1922za700za7za7b2001za7, "   {", 4);
	      DEFINE_STRING(BGl_string1923z00zzbdb_emitz00,
		BgL_bgl_string1923za700za7za7b2002za7, ", \"", 3);
	      DEFINE_STRING(BGl_string1924z00zzbdb_emitz00,
		BgL_bgl_string1924za700za7za7b2003za7, "\"},", 3);
	      DEFINE_STRING(BGl_string1925z00zzbdb_emitz00,
		BgL_bgl_string1925za700za7za7b2004za7, "     {0, 0},", 12);
	      DEFINE_STRING(BGl_string1926z00zzbdb_emitz00,
		BgL_bgl_string1926za700za7za7b2005za7, "     {\"", 7);
	      DEFINE_STRING(BGl_string1928z00zzbdb_emitz00,
		BgL_bgl_string1928za700za7za7b2006za7, "bdb!1299", 8);
	      DEFINE_STRING(BGl_string1930z00zzbdb_emitz00,
		BgL_bgl_string1930za700za7za7b2007za7, "bdb!", 4);
	      DEFINE_STRING(BGl_string1947z00zzbdb_emitz00,
		BgL_bgl_string1947za700za7za7b2008za7, "bdb_emit", 8);
	      DEFINE_STRING(BGl_string1948z00zzbdb_emitz00,
		BgL_bgl_string1948za700za7za7b2009za7,
		"done bigloo @ TOPLEVEL-INIT export location ", 44);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzbdb_emitz00));
		     ADD_ROOT((void *) (&BGl_za2czd2portza2zd2zzbdb_emitz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzbdb_emitz00(long
		BgL_checksumz00_2546, char *BgL_fromz00_2547)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbdb_emitz00))
				{
					BGl_requirezd2initializa7ationz75zzbdb_emitz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzbdb_emitz00();
					BGl_libraryzd2moduleszd2initz00zzbdb_emitz00();
					BGl_cnstzd2initzd2zzbdb_emitz00();
					BGl_importedzd2moduleszd2initz00zzbdb_emitz00();
					BGl_genericzd2initzd2zzbdb_emitz00();
					BGl_methodzd2initzd2zzbdb_emitz00();
					return BGl_toplevelzd2initzd2zzbdb_emitz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbdb_emitz00()
	{
		{	/* Bdb/bdb_emit.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"bdb_emit");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "bdb_emit");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "bdb_emit");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"bdb_emit");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"bdb_emit");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "bdb_emit");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"bdb_emit");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"bdb_emit");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "bdb_emit");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"bdb_emit");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"bdb_emit");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"bdb_emit");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0), "bdb_emit");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbdb_emitz00()
	{
		{	/* Bdb/bdb_emit.scm 15 */
			{	/* Bdb/bdb_emit.scm 15 */
				obj_t BgL_cportz00_2496;

				{	/* Bdb/bdb_emit.scm 15 */
					obj_t BgL_stringz00_2504;

					BgL_stringz00_2504 = BGl_string1948z00zzbdb_emitz00;
					{	/* Bdb/bdb_emit.scm 15 */
						obj_t BgL_startz00_2505;

						BgL_startz00_2505 = BINT(((long) 0));
						{	/* Bdb/bdb_emit.scm 15 */
							obj_t BgL_endz00_2506;

							BgL_endz00_2506 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2504)));
							{	/* Bdb/bdb_emit.scm 15 */

								BgL_cportz00_2496 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2504, BgL_startz00_2505, BgL_endz00_2506);
				}}}}
				{
					long BgL_iz00_2497;

					BgL_iz00_2497 = ((long) 5);
				BgL_loopz00_2498:
					if ((BgL_iz00_2497 == ((long) -1)))
						{	/* Bdb/bdb_emit.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Bdb/bdb_emit.scm 15 */
							{	/* Bdb/bdb_emit.scm 15 */
								obj_t BgL_arg1951z00_2500;

								{	/* Bdb/bdb_emit.scm 15 */

									{	/* Bdb/bdb_emit.scm 15 */
										obj_t BgL_locationz00_2502;

										BgL_locationz00_2502 = BBOOL(((bool_t) 0));
										{	/* Bdb/bdb_emit.scm 15 */

											BgL_arg1951z00_2500 =
												BGl_readz00zz__readerz00(BgL_cportz00_2496,
												BgL_locationz00_2502);
										}
									}
								}
								{	/* Bdb/bdb_emit.scm 15 */
									int BgL_tmpz00_2580;

									BgL_tmpz00_2580 = (int) (BgL_iz00_2497);
									CNST_TABLE_SET(BgL_tmpz00_2580, BgL_arg1951z00_2500);
							}}
							{	/* Bdb/bdb_emit.scm 15 */
								int BgL_auxz00_2503;

								BgL_auxz00_2503 = (int) ((BgL_iz00_2497 - ((long) 1)));
								{
									long BgL_iz00_2585;

									BgL_iz00_2585 = (long) (BgL_auxz00_2503);
									BgL_iz00_2497 = BgL_iz00_2585;
									goto BgL_loopz00_2498;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzbdb_emitz00()
	{
		{	/* Bdb/bdb_emit.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbdb_emitz00()
	{
		{	/* Bdb/bdb_emit.scm 15 */
			BGl_za2czd2portza2zd2zzbdb_emitz00 = BUNSPEC;
			return BUNSPEC;
		}

	}



/* emit-bdb-info */
	BGL_EXPORTED_DEF obj_t BGl_emitzd2bdbzd2infoz00zzbdb_emitz00(obj_t
		BgL_globalsz00_39, obj_t BgL_portz00_40)
	{
		{	/* Bdb/bdb_emit.scm 43 */
			BGl_za2czd2portza2zd2zzbdb_emitz00 = BgL_portz00_40;
			bgl_display_char(((unsigned char) 10), BgL_portz00_40);
			bgl_display_char(((unsigned char) 10), BgL_portz00_40);
			bgl_display_string(BGl_string1895z00zzbdb_emitz00, BgL_portz00_40);
			bgl_display_char(((unsigned char) 10), BgL_portz00_40);
			bgl_display_string(BGl_string1896z00zzbdb_emitz00, BgL_portz00_40);
			bgl_display_string(BGl_string1897z00zzbdb_emitz00, BgL_portz00_40);
			bgl_display_string(BGl_string1898z00zzbdb_emitz00, BgL_portz00_40);
			bgl_display_obj(BGl_string1899z00zzbdb_emitz00, BgL_portz00_40);
			bgl_display_string(BGl_string1900z00zzbdb_emitz00, BgL_portz00_40);
			bgl_display_char(((unsigned char) 10), BgL_portz00_40);
			bgl_display_string(BGl_string1901z00zzbdb_emitz00, BgL_portz00_40);
			bgl_display_char(((unsigned char) 10), BgL_portz00_40);
			bgl_display_string(BGl_string1902z00zzbdb_emitz00, BgL_portz00_40);
			bgl_display_obj(BINT(BDB_LIBRARY_MAGIC_NUMBER), BgL_portz00_40);
			bgl_display_string(BGl_string1903z00zzbdb_emitz00, BgL_portz00_40);
			bgl_display_obj(BINT(BDB_LIBRARY_MAGIC_NUMBER), BgL_portz00_40);
			bgl_display_string(BGl_string1904z00zzbdb_emitz00, BgL_portz00_40);
			bgl_display_char(((unsigned char) 10), BgL_portz00_40);
			bgl_display_string(BGl_string1905z00zzbdb_emitz00, BgL_portz00_40);
			bgl_display_char(((unsigned char) 10), BgL_portz00_40);
			bgl_display_string(BGl_string1906z00zzbdb_emitz00, BgL_portz00_40);
			bgl_display_obj(BGl_za2moduleza2z00zzmodule_modulez00, BgL_portz00_40);
			bgl_display_string(BGl_string1907z00zzbdb_emitz00, BgL_portz00_40);
			{	/* Bdb/bdb_emit.scm 66 */
				obj_t BgL_arg1396z00_1687;

				{	/* Bdb/bdb_emit.scm 66 */
					obj_t BgL_arg1417z00_1688;
					obj_t BgL_arg1418z00_1689;

					{	/* Bdb/bdb_emit.scm 66 */
						obj_t BgL_arg1421z00_1690;

						{	/* Bdb/bdb_emit.scm 66 */
							obj_t BgL_arg1422z00_1691;

							{	/* Bdb/bdb_emit.scm 66 */
								obj_t BgL_arg1441z00_1692;

								BgL_arg1441z00_1692 =
									BGl_getzd2toplevelzd2unitz00zzmodule_includez00();
								BgL_arg1422z00_1691 =
									STRUCT_REF(((obj_t) BgL_arg1441z00_1692), (int) (((long) 0)));
							}
							BgL_arg1421z00_1690 =
								BGl_unitzd2initializa7erzd2idza7zzast_unitz00
								(BgL_arg1422z00_1691);
						}
						{	/* Bdb/bdb_emit.scm 64 */
							obj_t BgL_res1861z00_2205;

							{	/* Bdb/bdb_emit.scm 64 */
								obj_t BgL_arg1466z00_2204;

								BgL_arg1466z00_2204 =
									SYMBOL_TO_STRING(((obj_t) BgL_arg1421z00_1690));
								BgL_res1861z00_2205 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg1466z00_2204);
							}
							BgL_arg1417z00_1688 = BgL_res1861z00_2205;
					}}
					{	/* Bdb/bdb_emit.scm 67 */
						obj_t BgL_res1862z00_2208;

						{	/* Bdb/bdb_emit.scm 67 */
							obj_t BgL_symbolz00_2206;

							BgL_symbolz00_2206 = BGl_za2moduleza2z00zzmodule_modulez00;
							{	/* Bdb/bdb_emit.scm 67 */
								obj_t BgL_arg1466z00_2207;

								BgL_arg1466z00_2207 = SYMBOL_TO_STRING(BgL_symbolz00_2206);
								BgL_res1862z00_2208 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg1466z00_2207);
						}}
						BgL_arg1418z00_1689 = BgL_res1862z00_2208;
					}
					BgL_arg1396z00_1687 =
						bigloo_module_mangle(BgL_arg1417z00_1688, BgL_arg1418z00_1689);
				}
				bgl_display_obj(BgL_arg1396z00_1687, BgL_portz00_40);
			}
			bgl_display_string(BGl_string1908z00zzbdb_emitz00, BgL_portz00_40);
			bgl_display_char(((unsigned char) 10), BgL_portz00_40);
			{
				obj_t BgL_l1265z00_1694;

				BgL_l1265z00_1694 = BGl_za2srczd2filesza2zd2zzengine_paramz00;
			BgL_zc3z04anonymousza31442ze3z87_1695:
				if (PAIRP(BgL_l1265z00_1694))
					{	/* Bdb/bdb_emit.scm 69 */
						{	/* Bdb/bdb_emit.scm 70 */
							obj_t BgL_srcz00_1697;

							BgL_srcz00_1697 = CAR(BgL_l1265z00_1694);
							bgl_display_string(BGl_string1906z00zzbdb_emitz00,
								BgL_portz00_40);
							bgl_display_obj(BgL_srcz00_1697, BgL_portz00_40);
							bgl_display_string(BGl_string1909z00zzbdb_emitz00,
								BgL_portz00_40);
							bgl_display_char(((unsigned char) 10), BgL_portz00_40);
						}
						{
							obj_t BgL_l1265z00_2634;

							BgL_l1265z00_2634 = CDR(BgL_l1265z00_1694);
							BgL_l1265z00_1694 = BgL_l1265z00_2634;
							goto BgL_zc3z04anonymousza31442ze3z87_1695;
						}
					}
				else
					{	/* Bdb/bdb_emit.scm 69 */
						((bool_t) 1);
					}
			}
			bgl_display_string(BGl_string1910z00zzbdb_emitz00, BgL_portz00_40);
			{	/* Bdb/bdb_emit.scm 74 */
				obj_t BgL_arg1449z00_1702;

				{	/* Bdb/bdb_emit.scm 74 */
					obj_t BgL_locz00_1703;

					BgL_locz00_1703 =
						BGl_findzd2locationzd2zztools_locationz00
						(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00);
					{	/* Bdb/bdb_emit.scm 75 */
						bool_t BgL_test2013z00_2638;

						if (STRUCTP(BgL_locz00_1703))
							{	/* Bdb/bdb_emit.scm 75 */
								BgL_test2013z00_2638 =
									(STRUCT_KEY(BgL_locz00_1703) == CNST_TABLE_REF(((long) 0)));
							}
						else
							{	/* Bdb/bdb_emit.scm 75 */
								BgL_test2013z00_2638 = ((bool_t) 0);
							}
						if (BgL_test2013z00_2638)
							{	/* Bdb/bdb_emit.scm 75 */
								BgL_arg1449z00_1702 =
									STRUCT_REF(BgL_locz00_1703, (int) (((long) 2)));
							}
						else
							{	/* Bdb/bdb_emit.scm 75 */
								BgL_arg1449z00_1702 = BGl_string1911z00zzbdb_emitz00;
							}
					}
				}
				bgl_display_obj(BgL_arg1449z00_1702, BgL_portz00_40);
			}
			bgl_display_string(BGl_string1912z00zzbdb_emitz00, BgL_portz00_40);
			bgl_display_char(((unsigned char) 10), BgL_portz00_40);
			bgl_display_string(BGl_string1913z00zzbdb_emitz00, BgL_portz00_40);
			bgl_display_char(((unsigned char) 10), BgL_portz00_40);
			{
				obj_t BgL_l1269z00_1707;

				BgL_l1269z00_1707 = BgL_globalsz00_39;
			BgL_zc3z04anonymousza31451ze3z87_1708:
				if (PAIRP(BgL_l1269z00_1707))
					{	/* Bdb/bdb_emit.scm 81 */
						{	/* Bdb/bdb_emit.scm 82 */
							obj_t BgL_globalz00_1710;

							BgL_globalz00_1710 = CAR(BgL_l1269z00_1707);
							{	/* Bdb/bdb_emit.scm 82 */
								obj_t BgL_arg1461z00_1711;

								BgL_arg1461z00_1711 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_globalz00_1710))))->
									BgL_idz00);
								BGl_enterzd2functionzd2zztools_errorz00(BgL_arg1461z00_1711);
							}
							BGl_bdbzd2globalzd2sfunz12z12zzbdb_emitz00(BgL_globalz00_1710);
							BGl_leavezd2functionzd2zztools_errorz00();
						}
						{
							obj_t BgL_l1269z00_2660;

							BgL_l1269z00_2660 = CDR(BgL_l1269z00_1707);
							BgL_l1269z00_1707 = BgL_l1269z00_2660;
							goto BgL_zc3z04anonymousza31451ze3z87_1708;
						}
					}
				else
					{	/* Bdb/bdb_emit.scm 81 */
						((bool_t) 1);
					}
			}
			bgl_display_string(BGl_string1914z00zzbdb_emitz00, BgL_portz00_40);
			bgl_display_char(((unsigned char) 10), BgL_portz00_40);
			BGl_forzd2eachzd2globalz12z12zzast_envz00(BGl_proc1915z00zzbdb_emitz00,
				BNIL);
			bgl_display_string(BGl_string1916z00zzbdb_emitz00, BgL_portz00_40);
			bgl_display_char(((unsigned char) 10), BgL_portz00_40);
			BGl_emitzd2bdbzd2classzd2typeszd2zzbdb_emitz00(BgL_portz00_40);
			bgl_display_string(BGl_string1917z00zzbdb_emitz00, BgL_portz00_40);
			return bgl_display_char(((unsigned char) 10), BgL_portz00_40);
		}

	}



/* &emit-bdb-info */
	obj_t BGl_z62emitzd2bdbzd2infoz62zzbdb_emitz00(obj_t BgL_envz00_2433,
		obj_t BgL_globalsz00_2434, obj_t BgL_portz00_2435)
	{
		{	/* Bdb/bdb_emit.scm 43 */
			return
				BGl_emitzd2bdbzd2infoz00zzbdb_emitz00(BgL_globalsz00_2434,
				BgL_portz00_2435);
		}

	}



/* &<@anonymous:1466> */
	obj_t BGl_z62zc3z04anonymousza31466ze3ze5zzbdb_emitz00(obj_t BgL_envz00_2436,
		obj_t BgL_globalz00_2437)
	{
		{	/* Bdb/bdb_emit.scm 88 */
			{	/* Bdb/bdb_emit.scm 89 */
				bool_t BgL_test2016z00_2671;

				{	/* Bdb/bdb_emit.scm 89 */
					bool_t BgL_test2017z00_2672;

					{	/* Bdb/bdb_emit.scm 89 */
						bool_t BgL_test2018z00_2673;

						{	/* Bdb/bdb_emit.scm 89 */
							bool_t BgL_test2019z00_2674;

							{	/* Bdb/bdb_emit.scm 89 */
								obj_t BgL_arg1552z00_2509;

								BgL_arg1552z00_2509 =
									(((BgL_globalz00_bglt) COBJECT(
											((BgL_globalz00_bglt) BgL_globalz00_2437)))->
									BgL_modulez00);
								BgL_test2019z00_2674 =
									(BgL_arg1552z00_2509 ==
									BGl_za2moduleza2z00zzmodule_modulez00);
							}
							if (BgL_test2019z00_2674)
								{	/* Bdb/bdb_emit.scm 89 */
									BgL_test2018z00_2673 =
										(
										(((BgL_globalz00_bglt) COBJECT(
													((BgL_globalz00_bglt) BgL_globalz00_2437)))->
											BgL_importz00) == CNST_TABLE_REF(((long) 1)));
								}
							else
								{	/* Bdb/bdb_emit.scm 89 */
									BgL_test2018z00_2673 = ((bool_t) 0);
								}
						}
						if (BgL_test2018z00_2673)
							{	/* Bdb/bdb_emit.scm 89 */
								BgL_test2017z00_2672 = ((bool_t) 1);
							}
						else
							{	/* Bdb/bdb_emit.scm 89 */
								BgL_test2017z00_2672 =
									(
									(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_globalz00_bglt) BgL_globalz00_2437))))->
										BgL_occurrencez00) > ((long) 0));
					}}
					if (BgL_test2017z00_2672)
						{	/* Bdb/bdb_emit.scm 92 */
							BgL_valuez00_bglt BgL_arg1536z00_2510;

							BgL_arg1536z00_2510 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt)
											((BgL_globalz00_bglt) BgL_globalz00_2437))))->
								BgL_valuez00);
							{	/* Bdb/bdb_emit.scm 92 */
								bool_t BgL_res1868z00_2511;

								BgL_res1868z00_2511 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_arg1536z00_2510), BGl_svarz00zzast_varz00);
								BgL_test2016z00_2671 = BgL_res1868z00_2511;
							}
						}
					else
						{	/* Bdb/bdb_emit.scm 89 */
							BgL_test2016z00_2671 = ((bool_t) 0);
						}
				}
				if (BgL_test2016z00_2671)
					{	/* Bdb/bdb_emit.scm 89 */
						return
							BGl_bdbzd2globalzd2svarz12z12zzbdb_emitz00(BgL_globalz00_2437);
					}
				else
					{	/* Bdb/bdb_emit.scm 89 */
						return BFALSE;
					}
			}
		}

	}



/* emit-bdb-class-types */
	bool_t BGl_emitzd2bdbzd2classzd2typeszd2zzbdb_emitz00(obj_t BgL_oportz00_41)
	{
		{	/* Bdb/bdb_emit.scm 102 */
			if (NULLP(BGl_getzd2classzd2listz00zzobject_classz00()))
				{	/* Bdb/bdb_emit.scm 103 */
					BFALSE;
				}
			else
				{	/* Bdb/bdb_emit.scm 103 */
					bgl_display_string(BGl_string1918z00zzbdb_emitz00, BgL_oportz00_41);
					bgl_display_char(((unsigned char) 10), BgL_oportz00_41);
				}
			{	/* Bdb/bdb_emit.scm 105 */
				obj_t BgL_g1278z00_1750;

				BgL_g1278z00_1750 = BGl_getzd2classzd2listz00zzobject_classz00();
				{
					obj_t BgL_l1276z00_1752;

					BgL_l1276z00_1752 = BgL_g1278z00_1750;
				BgL_zc3z04anonymousza31562ze3z87_1753:
					if (PAIRP(BgL_l1276z00_1752))
						{	/* Bdb/bdb_emit.scm 111 */
							{	/* Bdb/bdb_emit.scm 106 */
								obj_t BgL_classz00_1755;

								BgL_classz00_1755 = CAR(BgL_l1276z00_1752);
								{	/* Bdb/bdb_emit.scm 107 */
									bool_t BgL_test2022z00_2701;

									{	/* Bdb/bdb_emit.scm 107 */
										obj_t BgL_arg1575z00_1762;

										{	/* Bdb/bdb_emit.scm 107 */
											BgL_globalz00_bglt BgL_arg1578z00_1763;

											{
												BgL_tclassz00_bglt BgL_auxz00_2702;

												{
													obj_t BgL_auxz00_2703;

													{	/* Bdb/bdb_emit.scm 107 */
														BgL_objectz00_bglt BgL_tmpz00_2704;

														BgL_tmpz00_2704 =
															((BgL_objectz00_bglt)
															((BgL_typez00_bglt) BgL_classz00_1755));
														BgL_auxz00_2703 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_2704);
													}
													BgL_auxz00_2702 =
														((BgL_tclassz00_bglt) BgL_auxz00_2703);
												}
												BgL_arg1578z00_1763 =
													(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2702))->
													BgL_holderz00);
											}
											BgL_arg1575z00_1762 =
												(((BgL_globalz00_bglt) COBJECT(BgL_arg1578z00_1763))->
												BgL_modulez00);
										}
										BgL_test2022z00_2701 =
											(BgL_arg1575z00_1762 ==
											BGl_za2moduleza2z00zzmodule_modulez00);
									}
									if (BgL_test2022z00_2701)
										{	/* Bdb/bdb_emit.scm 107 */
											bgl_display_string(BGl_string1906z00zzbdb_emitz00,
												BgL_oportz00_41);
											{	/* Bdb/bdb_emit.scm 109 */
												obj_t BgL_arg1573z00_1761;

												BgL_arg1573z00_1761 =
													(((BgL_typez00_bglt) COBJECT(
															((BgL_typez00_bglt) BgL_classz00_1755)))->
													BgL_siza7eza7);
												bgl_display_obj(BgL_arg1573z00_1761, BgL_oportz00_41);
											}
											bgl_display_string(BGl_string1919z00zzbdb_emitz00,
												BgL_oportz00_41);
											bgl_display_char(((unsigned char) 10), BgL_oportz00_41);
										}
									else
										{	/* Bdb/bdb_emit.scm 107 */
											BFALSE;
										}
								}
							}
							{
								obj_t BgL_l1276z00_2718;

								BgL_l1276z00_2718 = CDR(BgL_l1276z00_1752);
								BgL_l1276z00_1752 = BgL_l1276z00_2718;
								goto BgL_zc3z04anonymousza31562ze3z87_1753;
							}
						}
					else
						{	/* Bdb/bdb_emit.scm 111 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* bdb-global-sfun! */
	obj_t BGl_bdbzd2globalzd2sfunz12z12zzbdb_emitz00(obj_t BgL_globalz00_42)
	{
		{	/* Bdb/bdb_emit.scm 116 */
			{	/* Bdb/bdb_emit.scm 117 */
				BgL_valuez00_bglt BgL_sfunz00_1766;

				BgL_sfunz00_1766 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								((BgL_globalz00_bglt) BgL_globalz00_42))))->BgL_valuez00);
				{	/* Bdb/bdb_emit.scm 117 */
					obj_t BgL_sfunzd2loczd2_1767;

					BgL_sfunzd2loczd2_1767 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt) BgL_sfunz00_1766)))->BgL_locz00);
					{	/* Bdb/bdb_emit.scm 118 */
						obj_t BgL_cloz00_1768;

						BgL_cloz00_1768 =
							(((BgL_funz00_bglt) COBJECT(
									((BgL_funz00_bglt)
										((BgL_sfunz00_bglt) BgL_sfunz00_1766))))->
							BgL_thezd2closurezd2);
						{	/* Bdb/bdb_emit.scm 119 */

							{	/* Bdb/bdb_emit.scm 120 */
								bool_t BgL_test2023z00_2728;

								{	/* Bdb/bdb_emit.scm 120 */
									bool_t BgL_test2024z00_2729;

									if (STRUCTP(BgL_sfunzd2loczd2_1767))
										{	/* Bdb/bdb_emit.scm 120 */
											BgL_test2024z00_2729 =
												(STRUCT_KEY(BgL_sfunzd2loczd2_1767) ==
												CNST_TABLE_REF(((long) 0)));
										}
									else
										{	/* Bdb/bdb_emit.scm 120 */
											BgL_test2024z00_2729 = ((bool_t) 0);
										}
									if (BgL_test2024z00_2729)
										{	/* Bdb/bdb_emit.scm 120 */
											BgL_test2023z00_2728 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_globalz00_bglt) BgL_globalz00_42))))->
												BgL_userzf3zf3);
										}
									else
										{	/* Bdb/bdb_emit.scm 120 */
											BgL_test2023z00_2728 = ((bool_t) 0);
										}
								}
								if (BgL_test2023z00_2728)
									{	/* Bdb/bdb_emit.scm 120 */
										BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
											((BgL_variablez00_bglt) BgL_globalz00_42));
										{	/* Bdb/bdb_emit.scm 124 */
											obj_t BgL_fnamez00_1771;
											obj_t BgL_lnumz00_1772;
											obj_t BgL_idz00_1773;
											obj_t BgL_valzd2namezd2_1774;
											obj_t BgL_bpzd2namezd2_1775;

											BgL_fnamez00_1771 =
												STRUCT_REF(BgL_sfunzd2loczd2_1767, (int) (((long) 0)));
											BgL_lnumz00_1772 =
												STRUCT_REF(BgL_sfunzd2loczd2_1767, (int) (((long) 2)));
											{	/* Bdb/bdb_emit.scm 126 */
												obj_t BgL_idz00_1782;

												BgL_idz00_1782 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_globalz00_bglt) BgL_globalz00_42))))->
													BgL_idz00);
												if ((BgL_idz00_1782 == CNST_TABLE_REF(((long) 2))))
													{	/* Bdb/bdb_emit.scm 128 */
														obj_t BgL_arg1588z00_1784;

														{	/* Bdb/bdb_emit.scm 128 */
															obj_t BgL_arg1589z00_1785;
															obj_t BgL_arg1592z00_1786;

															{	/* Bdb/bdb_emit.scm 128 */
																obj_t BgL_res1873z00_2283;

																{	/* Bdb/bdb_emit.scm 128 */
																	obj_t BgL_symbolz00_2281;

																	BgL_symbolz00_2281 =
																		CNST_TABLE_REF(((long) 3));
																	{	/* Bdb/bdb_emit.scm 128 */
																		obj_t BgL_arg1466z00_2282;

																		BgL_arg1466z00_2282 =
																			SYMBOL_TO_STRING(BgL_symbolz00_2281);
																		BgL_res1873z00_2283 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg1466z00_2282);
																}}
																BgL_arg1589z00_1785 = BgL_res1873z00_2283;
															}
															{	/* Bdb/bdb_emit.scm 128 */
																obj_t BgL_arg1593z00_1787;

																BgL_arg1593z00_1787 =
																	(((BgL_globalz00_bglt) COBJECT(
																			((BgL_globalz00_bglt)
																				BgL_globalz00_42)))->BgL_modulez00);
																{	/* Bdb/bdb_emit.scm 128 */
																	obj_t BgL_res1874z00_2287;

																	{	/* Bdb/bdb_emit.scm 128 */
																		obj_t BgL_arg1466z00_2286;

																		BgL_arg1466z00_2286 =
																			SYMBOL_TO_STRING(BgL_arg1593z00_1787);
																		BgL_res1874z00_2287 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg1466z00_2286);
																	}
																	BgL_arg1592z00_1786 = BgL_res1874z00_2287;
															}}
															BgL_arg1588z00_1784 =
																string_append(BgL_arg1589z00_1785,
																BgL_arg1592z00_1786);
														}
														BgL_idz00_1773 =
															bstring_to_symbol(BgL_arg1588z00_1784);
													}
												else
													{	/* Bdb/bdb_emit.scm 127 */
														BgL_idz00_1773 = BgL_idz00_1782;
													}
											}
											if (BGl_isazf3zf3zz__objectz00(BgL_cloz00_1768,
													BGl_globalz00zzast_varz00))
												{	/* Bdb/bdb_emit.scm 130 */
													BgL_valzd2namezd2_1774 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_globalz00_bglt) BgL_cloz00_1768))))->
														BgL_namez00);
												}
											else
												{	/* Bdb/bdb_emit.scm 130 */
													BgL_valzd2namezd2_1774 = BINT(((long) 0));
												}
											BgL_bpzd2namezd2_1775 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_globalz00_bglt) BgL_globalz00_42))))->
												BgL_namez00);
											{	/* Bdb/bdb_emit.scm 134 */
												obj_t BgL_port1279z00_1776;

												BgL_port1279z00_1776 =
													BGl_za2czd2portza2zd2zzbdb_emitz00;
												{	/* Bdb/bdb_emit.scm 134 */
													obj_t BgL_tmpz00_2768;

													BgL_tmpz00_2768 = ((obj_t) BgL_port1279z00_1776);
													bgl_display_string(BGl_string1906z00zzbdb_emitz00,
														BgL_tmpz00_2768);
												}
												bgl_display_obj(BgL_fnamez00_1771,
													BgL_port1279z00_1776);
												{	/* Bdb/bdb_emit.scm 134 */
													obj_t BgL_tmpz00_2772;

													BgL_tmpz00_2772 = ((obj_t) BgL_port1279z00_1776);
													bgl_display_string(BGl_string1920z00zzbdb_emitz00,
														BgL_tmpz00_2772);
												}
												bgl_display_obj(BgL_lnumz00_1772, BgL_port1279z00_1776);
												{	/* Bdb/bdb_emit.scm 134 */
													obj_t BgL_tmpz00_2776;

													BgL_tmpz00_2776 = ((obj_t) BgL_port1279z00_1776);
													bgl_display_string(BGl_string1912z00zzbdb_emitz00,
														BgL_tmpz00_2776);
												}
												{	/* Bdb/bdb_emit.scm 134 */
													obj_t BgL_tmpz00_2779;

													BgL_tmpz00_2779 = ((obj_t) BgL_port1279z00_1776);
													bgl_display_char(((unsigned char) 10),
														BgL_tmpz00_2779);
											}}
											{	/* Bdb/bdb_emit.scm 135 */
												obj_t BgL_port1280z00_1777;

												BgL_port1280z00_1777 =
													BGl_za2czd2portza2zd2zzbdb_emitz00;
												{	/* Bdb/bdb_emit.scm 135 */
													obj_t BgL_tmpz00_2782;

													BgL_tmpz00_2782 = ((obj_t) BgL_port1280z00_1777);
													bgl_display_string(BGl_string1906z00zzbdb_emitz00,
														BgL_tmpz00_2782);
												}
												bgl_display_obj(BgL_idz00_1773, BgL_port1280z00_1777);
												{	/* Bdb/bdb_emit.scm 135 */
													obj_t BgL_tmpz00_2786;

													BgL_tmpz00_2786 = ((obj_t) BgL_port1280z00_1777);
													bgl_display_string(BGl_string1921z00zzbdb_emitz00,
														BgL_tmpz00_2786);
												}
												{	/* Bdb/bdb_emit.scm 135 */
													obj_t BgL_tmpz00_2789;

													BgL_tmpz00_2789 = ((obj_t) BgL_port1280z00_1777);
													bgl_display_char(((unsigned char) 10),
														BgL_tmpz00_2789);
											}}
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
												(BgL_valzd2namezd2_1774))
												{	/* Bdb/bdb_emit.scm 138 */
													obj_t BgL_port1282z00_1779;

													BgL_port1282z00_1779 =
														BGl_za2czd2portza2zd2zzbdb_emitz00;
													{	/* Bdb/bdb_emit.scm 138 */
														obj_t BgL_tmpz00_2794;

														BgL_tmpz00_2794 = ((obj_t) BgL_port1282z00_1779);
														bgl_display_string(BGl_string1922z00zzbdb_emitz00,
															BgL_tmpz00_2794);
													}
													bgl_display_obj(BgL_valzd2namezd2_1774,
														BgL_port1282z00_1779);
													{	/* Bdb/bdb_emit.scm 138 */
														obj_t BgL_tmpz00_2798;

														BgL_tmpz00_2798 = ((obj_t) BgL_port1282z00_1779);
														bgl_display_string(BGl_string1923z00zzbdb_emitz00,
															BgL_tmpz00_2798);
													}
													bgl_display_obj(BgL_bpzd2namezd2_1775,
														BgL_port1282z00_1779);
													{	/* Bdb/bdb_emit.scm 138 */
														obj_t BgL_tmpz00_2802;

														BgL_tmpz00_2802 = ((obj_t) BgL_port1282z00_1779);
														bgl_display_string(BGl_string1924z00zzbdb_emitz00,
															BgL_tmpz00_2802);
													}
													{	/* Bdb/bdb_emit.scm 138 */
														obj_t BgL_tmpz00_2805;

														BgL_tmpz00_2805 = ((obj_t) BgL_port1282z00_1779);
														bgl_display_char(((unsigned char) 10),
															BgL_tmpz00_2805);
												}}
											else
												{	/* Bdb/bdb_emit.scm 137 */
													obj_t BgL_port1281z00_1780;

													BgL_port1281z00_1780 =
														BGl_za2czd2portza2zd2zzbdb_emitz00;
													{	/* Bdb/bdb_emit.scm 137 */
														obj_t BgL_tmpz00_2808;

														BgL_tmpz00_2808 = ((obj_t) BgL_port1281z00_1780);
														bgl_display_string(BGl_string1906z00zzbdb_emitz00,
															BgL_tmpz00_2808);
													}
													bgl_display_obj(BgL_valzd2namezd2_1774,
														BgL_port1281z00_1780);
													{	/* Bdb/bdb_emit.scm 137 */
														obj_t BgL_tmpz00_2812;

														BgL_tmpz00_2812 = ((obj_t) BgL_port1281z00_1780);
														bgl_display_string(BGl_string1907z00zzbdb_emitz00,
															BgL_tmpz00_2812);
													}
													bgl_display_obj(BgL_bpzd2namezd2_1775,
														BgL_port1281z00_1780);
													{	/* Bdb/bdb_emit.scm 137 */
														obj_t BgL_tmpz00_2816;

														BgL_tmpz00_2816 = ((obj_t) BgL_port1281z00_1780);
														bgl_display_string(BGl_string1924z00zzbdb_emitz00,
															BgL_tmpz00_2816);
													}
													{	/* Bdb/bdb_emit.scm 137 */
														obj_t BgL_tmpz00_2819;

														BgL_tmpz00_2819 = ((obj_t) BgL_port1281z00_1780);
														bgl_display_char(((unsigned char) 10),
															BgL_tmpz00_2819);
												}}
											BGl_bdbzd2sfunz12zc0zzbdb_emitz00(BgL_sfunz00_1766);
											{	/* Bdb/bdb_emit.scm 140 */
												obj_t BgL_port1283z00_1781;

												BgL_port1283z00_1781 =
													BGl_za2czd2portza2zd2zzbdb_emitz00;
												{	/* Bdb/bdb_emit.scm 140 */
													obj_t BgL_tmpz00_2823;

													BgL_tmpz00_2823 = ((obj_t) BgL_port1283z00_1781);
													bgl_display_string(BGl_string1925z00zzbdb_emitz00,
														BgL_tmpz00_2823);
												}
												{	/* Bdb/bdb_emit.scm 140 */
													obj_t BgL_tmpz00_2826;

													BgL_tmpz00_2826 = ((obj_t) BgL_port1283z00_1781);
													return
														bgl_display_char(((unsigned char) 10),
														BgL_tmpz00_2826);
									}}}}
								else
									{	/* Bdb/bdb_emit.scm 120 */
										return BFALSE;
									}
							}
						}
					}
				}
			}
		}

	}



/* bdb-global-svar! */
	obj_t BGl_bdbzd2globalzd2svarz12z12zzbdb_emitz00(obj_t BgL_globalz00_43)
	{
		{	/* Bdb/bdb_emit.scm 145 */
			{	/* Bdb/bdb_emit.scm 146 */
				BgL_valuez00_bglt BgL_svarz00_1790;

				BgL_svarz00_1790 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								((BgL_globalz00_bglt) BgL_globalz00_43))))->BgL_valuez00);
				{	/* Bdb/bdb_emit.scm 146 */
					obj_t BgL_svarzd2loczd2_1791;

					BgL_svarzd2loczd2_1791 =
						(((BgL_svarz00_bglt) COBJECT(
								((BgL_svarz00_bglt) BgL_svarz00_1790)))->BgL_locz00);
					{	/* Bdb/bdb_emit.scm 147 */

						{	/* Bdb/bdb_emit.scm 148 */
							bool_t BgL_test2029z00_2834;

							if (STRUCTP(BgL_svarzd2loczd2_1791))
								{	/* Bdb/bdb_emit.scm 148 */
									BgL_test2029z00_2834 =
										(STRUCT_KEY(BgL_svarzd2loczd2_1791) ==
										CNST_TABLE_REF(((long) 0)));
								}
							else
								{	/* Bdb/bdb_emit.scm 148 */
									BgL_test2029z00_2834 = ((bool_t) 0);
								}
							if (BgL_test2029z00_2834)
								{	/* Bdb/bdb_emit.scm 148 */
									BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
										((BgL_variablez00_bglt) BgL_globalz00_43));
									{	/* Bdb/bdb_emit.scm 151 */
										obj_t BgL_fnamez00_1793;
										obj_t BgL_lnumz00_1794;
										obj_t BgL_idz00_1795;
										obj_t BgL_namez00_1796;

										BgL_fnamez00_1793 =
											STRUCT_REF(BgL_svarzd2loczd2_1791, (int) (((long) 0)));
										BgL_lnumz00_1794 =
											STRUCT_REF(BgL_svarzd2loczd2_1791, (int) (((long) 2)));
										BgL_idz00_1795 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_globalz00_bglt) BgL_globalz00_43))))->
											BgL_idz00);
										BgL_namez00_1796 =
											(((BgL_variablez00_bglt)
												COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
															BgL_globalz00_43))))->BgL_namez00);
										{	/* Bdb/bdb_emit.scm 155 */
											obj_t BgL_port1284z00_1797;

											BgL_port1284z00_1797 = BGl_za2czd2portza2zd2zzbdb_emitz00;
											{	/* Bdb/bdb_emit.scm 155 */
												obj_t BgL_tmpz00_2852;

												BgL_tmpz00_2852 = ((obj_t) BgL_port1284z00_1797);
												bgl_display_string(BGl_string1906z00zzbdb_emitz00,
													BgL_tmpz00_2852);
											}
											bgl_display_obj(BgL_fnamez00_1793, BgL_port1284z00_1797);
											{	/* Bdb/bdb_emit.scm 155 */
												obj_t BgL_tmpz00_2856;

												BgL_tmpz00_2856 = ((obj_t) BgL_port1284z00_1797);
												bgl_display_string(BGl_string1920z00zzbdb_emitz00,
													BgL_tmpz00_2856);
											}
											bgl_display_obj(BgL_lnumz00_1794, BgL_port1284z00_1797);
											{	/* Bdb/bdb_emit.scm 155 */
												obj_t BgL_tmpz00_2860;

												BgL_tmpz00_2860 = ((obj_t) BgL_port1284z00_1797);
												bgl_display_string(BGl_string1912z00zzbdb_emitz00,
													BgL_tmpz00_2860);
											}
											{	/* Bdb/bdb_emit.scm 155 */
												obj_t BgL_tmpz00_2863;

												BgL_tmpz00_2863 = ((obj_t) BgL_port1284z00_1797);
												bgl_display_char(((unsigned char) 10), BgL_tmpz00_2863);
										}}
										{	/* Bdb/bdb_emit.scm 156 */
											obj_t BgL_port1285z00_1798;

											BgL_port1285z00_1798 = BGl_za2czd2portza2zd2zzbdb_emitz00;
											{	/* Bdb/bdb_emit.scm 156 */
												obj_t BgL_tmpz00_2866;

												BgL_tmpz00_2866 = ((obj_t) BgL_port1285z00_1798);
												bgl_display_string(BGl_string1906z00zzbdb_emitz00,
													BgL_tmpz00_2866);
											}
											bgl_display_obj(BgL_idz00_1795, BgL_port1285z00_1798);
											{	/* Bdb/bdb_emit.scm 156 */
												obj_t BgL_tmpz00_2870;

												BgL_tmpz00_2870 = ((obj_t) BgL_port1285z00_1798);
												bgl_display_string(BGl_string1907z00zzbdb_emitz00,
													BgL_tmpz00_2870);
											}
											bgl_display_obj(BgL_namez00_1796, BgL_port1285z00_1798);
											{	/* Bdb/bdb_emit.scm 156 */
												obj_t BgL_tmpz00_2874;

												BgL_tmpz00_2874 = ((obj_t) BgL_port1285z00_1798);
												bgl_display_string(BGl_string1924z00zzbdb_emitz00,
													BgL_tmpz00_2874);
											}
											{	/* Bdb/bdb_emit.scm 156 */
												obj_t BgL_tmpz00_2877;

												BgL_tmpz00_2877 = ((obj_t) BgL_port1285z00_1798);
												return
													bgl_display_char(((unsigned char) 10),
													BgL_tmpz00_2877);
								}}}}
							else
								{	/* Bdb/bdb_emit.scm 148 */
									return BFALSE;
								}
						}
					}
				}
			}
		}

	}



/* bdb-sfun! */
	obj_t BGl_bdbzd2sfunz12zc0zzbdb_emitz00(BgL_valuez00_bglt BgL_sfunz00_44)
	{
		{	/* Bdb/bdb_emit.scm 161 */
			{	/* Bdb/bdb_emit.scm 163 */
				obj_t BgL_g1288z00_1800;

				BgL_g1288z00_1800 =
					(((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_sfunz00_44)))->BgL_argsz00);
				{
					obj_t BgL_l1286z00_1802;

					BgL_l1286z00_1802 = BgL_g1288z00_1800;
				BgL_zc3z04anonymousza31596ze3z87_1803:
					if (PAIRP(BgL_l1286z00_1802))
						{	/* Bdb/bdb_emit.scm 163 */
							BGl_bdbzd2emitzd2localzd2infoz12zc0zzbdb_emitz00(CAR
								(BgL_l1286z00_1802));
							{
								obj_t BgL_l1286z00_2886;

								BgL_l1286z00_2886 = CDR(BgL_l1286z00_1802);
								BgL_l1286z00_1802 = BgL_l1286z00_2886;
								goto BgL_zc3z04anonymousza31596ze3z87_1803;
							}
						}
					else
						{	/* Bdb/bdb_emit.scm 163 */
							((bool_t) 1);
						}
				}
			}
			{	/* Bdb/bdb_emit.scm 164 */
				obj_t BgL_arg1605z00_1808;

				BgL_arg1605z00_1808 =
					(((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_sfunz00_44)))->BgL_bodyz00);
				return
					BGl_bdbz12z12zzbdb_emitz00(((BgL_nodez00_bglt) BgL_arg1605z00_1808));
			}
		}

	}



/* bdb-local-variable? */
	bool_t BGl_bdbzd2localzd2variablezf3zf3zzbdb_emitz00(obj_t BgL_localz00_45)
	{
		{	/* Bdb/bdb_emit.scm 176 */
			{
				obj_t BgL_localz00_1811;

				if (
					(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_localz00_45))))->BgL_userzf3zf3))
					{	/* Bdb/bdb_emit.scm 190 */
						BgL_localz00_1811 = BgL_localz00_45;
						{	/* Bdb/bdb_emit.scm 180 */
							BgL_typez00_bglt BgL_tz00_1813;

							BgL_tz00_1813 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt)
											((BgL_localz00_bglt) BgL_localz00_1811))))->BgL_typez00);
							{	/* Bdb/bdb_emit.scm 181 */
								bool_t BgL__ortest_1107z00_1814;

								BgL__ortest_1107z00_1814 =
									(
									(((BgL_typez00_bglt) COBJECT(BgL_tz00_1813))->BgL_classz00) ==
									CNST_TABLE_REF(((long) 4)));
								if (BgL__ortest_1107z00_1814)
									{	/* Bdb/bdb_emit.scm 181 */
										return BgL__ortest_1107z00_1814;
									}
								else
									{	/* Bdb/bdb_emit.scm 182 */
										bool_t BgL__ortest_1108z00_1815;

										BgL__ortest_1108z00_1815 =
											(
											((obj_t) BgL_tz00_1813) ==
											BGl_za2intza2z00zztype_cachez00);
										if (BgL__ortest_1108z00_1815)
											{	/* Bdb/bdb_emit.scm 182 */
												return BgL__ortest_1108z00_1815;
											}
										else
											{	/* Bdb/bdb_emit.scm 183 */
												bool_t BgL__ortest_1109z00_1816;

												BgL__ortest_1109z00_1816 =
													(
													((obj_t) BgL_tz00_1813) ==
													BGl_za2longza2z00zztype_cachez00);
												if (BgL__ortest_1109z00_1816)
													{	/* Bdb/bdb_emit.scm 183 */
														return BgL__ortest_1109z00_1816;
													}
												else
													{	/* Bdb/bdb_emit.scm 184 */
														bool_t BgL__ortest_1110z00_1817;

														BgL__ortest_1110z00_1817 =
															(
															((obj_t) BgL_tz00_1813) ==
															BGl_za2boolza2z00zztype_cachez00);
														if (BgL__ortest_1110z00_1817)
															{	/* Bdb/bdb_emit.scm 184 */
																return BgL__ortest_1110z00_1817;
															}
														else
															{	/* Bdb/bdb_emit.scm 185 */
																bool_t BgL__ortest_1111z00_1818;

																BgL__ortest_1111z00_1818 =
																	(
																	((obj_t) BgL_tz00_1813) ==
																	BGl_za2realza2z00zztype_cachez00);
																if (BgL__ortest_1111z00_1818)
																	{	/* Bdb/bdb_emit.scm 185 */
																		return BgL__ortest_1111z00_1818;
																	}
																else
																	{	/* Bdb/bdb_emit.scm 186 */
																		bool_t BgL__ortest_1112z00_1819;

																		BgL__ortest_1112z00_1819 =
																			(
																			((obj_t) BgL_tz00_1813) ==
																			BGl_za2charza2z00zztype_cachez00);
																		if (BgL__ortest_1112z00_1819)
																			{	/* Bdb/bdb_emit.scm 186 */
																				return BgL__ortest_1112z00_1819;
																			}
																		else
																			{	/* Bdb/bdb_emit.scm 186 */
																				return
																					(
																					((obj_t) BgL_tz00_1813) ==
																					BGl_za2stringza2z00zztype_cachez00);
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
					{	/* Bdb/bdb_emit.scm 190 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* bdb-emit-local-info! */
	obj_t BGl_bdbzd2emitzd2localzd2infoz12zc0zzbdb_emitz00(obj_t BgL_localz00_46)
	{
		{	/* Bdb/bdb_emit.scm 195 */
			if (BGl_bdbzd2localzd2variablezf3zf3zzbdb_emitz00(BgL_localz00_46))
				{	/* Bdb/bdb_emit.scm 196 */
					BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
						((BgL_variablez00_bglt) BgL_localz00_46));
					{	/* Bdb/bdb_emit.scm 199 */
						obj_t BgL_idz00_1823;
						obj_t BgL_namez00_1824;

						BgL_idz00_1823 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_localz00_46))))->BgL_idz00);
						BgL_namez00_1824 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_localz00_46))))->BgL_namez00);
						{	/* Bdb/bdb_emit.scm 201 */
							obj_t BgL_port1289z00_1825;

							BgL_port1289z00_1825 = BGl_za2czd2portza2zd2zzbdb_emitz00;
							{	/* Bdb/bdb_emit.scm 201 */
								obj_t BgL_tmpz00_2930;

								BgL_tmpz00_2930 = ((obj_t) BgL_port1289z00_1825);
								bgl_display_string(BGl_string1926z00zzbdb_emitz00,
									BgL_tmpz00_2930);
							}
							bgl_display_obj(BgL_idz00_1823, BgL_port1289z00_1825);
							{	/* Bdb/bdb_emit.scm 201 */
								obj_t BgL_tmpz00_2934;

								BgL_tmpz00_2934 = ((obj_t) BgL_port1289z00_1825);
								bgl_display_string(BGl_string1907z00zzbdb_emitz00,
									BgL_tmpz00_2934);
							}
							bgl_display_obj(BgL_namez00_1824, BgL_port1289z00_1825);
							{	/* Bdb/bdb_emit.scm 201 */
								obj_t BgL_tmpz00_2938;

								BgL_tmpz00_2938 = ((obj_t) BgL_port1289z00_1825);
								bgl_display_string(BGl_string1924z00zzbdb_emitz00,
									BgL_tmpz00_2938);
							}
							{	/* Bdb/bdb_emit.scm 201 */
								obj_t BgL_tmpz00_2941;

								BgL_tmpz00_2941 = ((obj_t) BgL_port1289z00_1825);
								return bgl_display_char(((unsigned char) 10), BgL_tmpz00_2941);
				}}}}
			else
				{	/* Bdb/bdb_emit.scm 196 */
					return BFALSE;
				}
		}

	}



/* bdb*! */
	obj_t BGl_bdbza2z12zb0zzbdb_emitz00(obj_t BgL_nodesz00_64)
	{
		{	/* Bdb/bdb_emit.scm 342 */
			{
				obj_t BgL_hookz00_1827;

				BgL_hookz00_1827 = BgL_nodesz00_64;
			BgL_zc3z04anonymousza31613ze3z87_1828:
				if (NULLP(BgL_hookz00_1827))
					{	/* Bdb/bdb_emit.scm 344 */
						return CNST_TABLE_REF(((long) 5));
					}
				else
					{	/* Bdb/bdb_emit.scm 344 */
						{	/* Bdb/bdb_emit.scm 347 */
							obj_t BgL_arg1624z00_1830;

							BgL_arg1624z00_1830 = CAR(((obj_t) BgL_hookz00_1827));
							BGl_bdbz12z12zzbdb_emitz00(
								((BgL_nodez00_bglt) BgL_arg1624z00_1830));
						}
						{	/* Bdb/bdb_emit.scm 348 */
							obj_t BgL_arg1626z00_1831;

							BgL_arg1626z00_1831 = CDR(((obj_t) BgL_hookz00_1827));
							{
								obj_t BgL_hookz00_2953;

								BgL_hookz00_2953 = BgL_arg1626z00_1831;
								BgL_hookz00_1827 = BgL_hookz00_2953;
								goto BgL_zc3z04anonymousza31613ze3z87_1828;
							}
						}
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzbdb_emitz00()
	{
		{	/* Bdb/bdb_emit.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbdb_emitz00()
	{
		{	/* Bdb/bdb_emit.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_proc1927z00zzbdb_emitz00,
				BGl_nodez00zzast_nodez00, BGl_string1928z00zzbdb_emitz00);
		}

	}



/* &bdb!1299 */
	obj_t BGl_z62bdbz121299z70zzbdb_emitz00(obj_t BgL_envz00_2439,
		obj_t BgL_nodez00_2440)
	{
		{	/* Bdb/bdb_emit.scm 206 */
			return BUNSPEC;
		}

	}



/* bdb! */
	obj_t BGl_bdbz12z12zzbdb_emitz00(BgL_nodez00_bglt BgL_nodez00_47)
	{
		{	/* Bdb/bdb_emit.scm 206 */
			{	/* Bdb/bdb_emit.scm 206 */
				obj_t BgL_method1300z00_1837;

				{	/* Bdb/bdb_emit.scm 206 */
					obj_t BgL_res1891z00_2401;

					{	/* Bdb/bdb_emit.scm 206 */
						long BgL_objzd2classzd2numz00_2366;

						{	/* Bdb/bdb_emit.scm 206 */
							long BgL_res1881z00_2369;

							BgL_res1881z00_2369 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_47));
							BgL_objzd2classzd2numz00_2366 = BgL_res1881z00_2369;
						}
						{	/* Bdb/bdb_emit.scm 206 */
							obj_t BgL_arg1813z00_2367;

							BgL_arg1813z00_2367 =
								PROCEDURE_REF(BGl_bdbz12zd2envzc0zzbdb_emitz00,
								(int) (((long) 1)));
							{	/* Bdb/bdb_emit.scm 206 */
								int BgL_offsetz00_2371;

								BgL_offsetz00_2371 = (int) (BgL_objzd2classzd2numz00_2366);
								{	/* Bdb/bdb_emit.scm 206 */
									long BgL_offsetz00_2372;

									BgL_offsetz00_2372 =
										((long) (BgL_offsetz00_2371) - OBJECT_TYPE);
									{	/* Bdb/bdb_emit.scm 206 */
										long BgL_modz00_2373;

										BgL_modz00_2373 =
											(BgL_offsetz00_2372 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Bdb/bdb_emit.scm 206 */
											long BgL_restz00_2375;

											BgL_restz00_2375 =
												(BgL_offsetz00_2372 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Bdb/bdb_emit.scm 206 */

												{	/* Bdb/bdb_emit.scm 206 */
													obj_t BgL_bucketz00_2377;

													BgL_bucketz00_2377 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2367), BgL_modz00_2373);
													BgL_res1891z00_2401 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2377), BgL_restz00_2375);
					}}}}}}}}
					BgL_method1300z00_1837 = BgL_res1891z00_2401;
				}
				return
					PROCEDURE_ENTRY(BgL_method1300z00_1837) (BgL_method1300z00_1837,
					((obj_t) BgL_nodez00_47), BEOA);
			}
		}

	}



/* &bdb! */
	obj_t BGl_z62bdbz12z70zzbdb_emitz00(obj_t BgL_envz00_2441,
		obj_t BgL_nodez00_2442)
	{
		{	/* Bdb/bdb_emit.scm 206 */
			return BGl_bdbz12z12zzbdb_emitz00(((BgL_nodez00_bglt) BgL_nodez00_2442));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbdb_emitz00()
	{
		{	/* Bdb/bdb_emit.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_sequencez00zzast_nodez00,
				BGl_proc1929z00zzbdb_emitz00, BGl_string1930z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_syncz00zzast_nodez00,
				BGl_proc1931z00zzbdb_emitz00, BGl_string1930z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_externz00zzast_nodez00,
				BGl_proc1932z00zzbdb_emitz00, BGl_string1930z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_castz00zzast_nodez00,
				BGl_proc1933z00zzbdb_emitz00, BGl_string1930z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_setqz00zzast_nodez00,
				BGl_proc1934z00zzbdb_emitz00, BGl_string1930z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_conditionalz00zzast_nodez00,
				BGl_proc1935z00zzbdb_emitz00, BGl_string1930z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_failz00zzast_nodez00,
				BGl_proc1936z00zzbdb_emitz00, BGl_string1930z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_switchz00zzast_nodez00,
				BGl_proc1937z00zzbdb_emitz00, BGl_string1930z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc1938z00zzbdb_emitz00, BGl_string1930z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc1939z00zzbdb_emitz00, BGl_string1930z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc1940z00zzbdb_emitz00, BGl_string1930z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc1941z00zzbdb_emitz00, BGl_string1930z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc1942z00zzbdb_emitz00, BGl_string1930z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc1943z00zzbdb_emitz00, BGl_string1930z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc1944z00zzbdb_emitz00, BGl_string1930z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_funcallz00zzast_nodez00,
				BGl_proc1945z00zzbdb_emitz00, BGl_string1930z00zzbdb_emitz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_appz00zzast_nodez00,
				BGl_proc1946z00zzbdb_emitz00, BGl_string1930z00zzbdb_emitz00);
		}

	}



/* &bdb!-app1335 */
	obj_t BGl_z62bdbz12zd2app1335za2zzbdb_emitz00(obj_t BgL_envz00_2460,
		obj_t BgL_nodez00_2461)
	{
		{	/* Bdb/bdb_emit.scm 353 */
			return
				BGl_bdbza2z12zb0zzbdb_emitz00(
				(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_2461)))->BgL_argsz00));
		}

	}



/* &bdb!-funcall1332 */
	obj_t BGl_z62bdbz12zd2funcall1332za2zzbdb_emitz00(obj_t BgL_envz00_2462,
		obj_t BgL_nodez00_2463)
	{
		{	/* Bdb/bdb_emit.scm 334 */
			BGl_bdbz12z12zzbdb_emitz00(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_2463)))->BgL_funz00));
			return
				BGl_bdbza2z12zb0zzbdb_emitz00(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_2463)))->BgL_argsz00));
		}

	}



/* &bdb!-app-ly1330 */
	obj_t BGl_z62bdbz12zd2appzd2ly1330z70zzbdb_emitz00(obj_t BgL_envz00_2464,
		obj_t BgL_nodez00_2465)
	{
		{	/* Bdb/bdb_emit.scm 326 */
			BGl_bdbz12z12zzbdb_emitz00(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_2465)))->BgL_funz00));
			return
				BGl_bdbz12z12zzbdb_emitz00(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_2465)))->BgL_argz00));
		}

	}



/* &bdb!-box-set!1328 */
	obj_t BGl_z62bdbz12zd2boxzd2setz121328z62zzbdb_emitz00(obj_t BgL_envz00_2466,
		obj_t BgL_nodez00_2467)
	{
		{	/* Bdb/bdb_emit.scm 319 */
			return
				BGl_bdbz12z12zzbdb_emitz00(
				(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2467)))->BgL_valuez00));
		}

	}



/* &bdb!-make-box1326 */
	obj_t BGl_z62bdbz12zd2makezd2box1326z70zzbdb_emitz00(obj_t BgL_envz00_2468,
		obj_t BgL_nodez00_2469)
	{
		{	/* Bdb/bdb_emit.scm 312 */
			return
				BGl_bdbz12z12zzbdb_emitz00(
				(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_2469)))->BgL_valuez00));
		}

	}



/* &bdb!-jump-ex-it1324 */
	obj_t BGl_z62bdbz12zd2jumpzd2exzd2it1324za2zzbdb_emitz00(obj_t
		BgL_envz00_2470, obj_t BgL_nodez00_2471)
	{
		{	/* Bdb/bdb_emit.scm 304 */
			BGl_bdbz12z12zzbdb_emitz00(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2471)))->BgL_exitz00));
			return
				BGl_bdbz12z12zzbdb_emitz00(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2471)))->BgL_valuez00));
		}

	}



/* &bdb!-set-ex-it1322 */
	obj_t BGl_z62bdbz12zd2setzd2exzd2it1322za2zzbdb_emitz00(obj_t BgL_envz00_2472,
		obj_t BgL_nodez00_2473)
	{
		{	/* Bdb/bdb_emit.scm 297 */
			return
				BGl_bdbz12z12zzbdb_emitz00(
				(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2473)))->BgL_bodyz00));
		}

	}



/* &bdb!-let-var1320 */
	obj_t BGl_z62bdbz12zd2letzd2var1320z70zzbdb_emitz00(obj_t BgL_envz00_2474,
		obj_t BgL_nodez00_2475)
	{
		{	/* Bdb/bdb_emit.scm 285 */
			{	/* Bdb/bdb_emit.scm 287 */
				obj_t BgL_g1298z00_2521;

				BgL_g1298z00_2521 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2475)))->BgL_bindingsz00);
				{
					obj_t BgL_l1296z00_2523;

					BgL_l1296z00_2523 = BgL_g1298z00_2521;
				BgL_zc3z04anonymousza31697ze3z87_2522:
					if (PAIRP(BgL_l1296z00_2523))
						{	/* Bdb/bdb_emit.scm 287 */
							{	/* Bdb/bdb_emit.scm 288 */
								obj_t BgL_bindingz00_2524;

								BgL_bindingz00_2524 = CAR(BgL_l1296z00_2523);
								{	/* Bdb/bdb_emit.scm 289 */
									obj_t BgL_arg1704z00_2525;

									BgL_arg1704z00_2525 = CDR(((obj_t) BgL_bindingz00_2524));
									BGl_bdbz12z12zzbdb_emitz00(
										((BgL_nodez00_bglt) BgL_arg1704z00_2525));
								}
								{	/* Bdb/bdb_emit.scm 290 */
									obj_t BgL_arg1707z00_2526;

									BgL_arg1707z00_2526 = CAR(((obj_t) BgL_bindingz00_2524));
									BGl_bdbzd2emitzd2localzd2infoz12zc0zzbdb_emitz00
										(BgL_arg1707z00_2526);
								}
							}
							{
								obj_t BgL_l1296z00_3046;

								BgL_l1296z00_3046 = CDR(BgL_l1296z00_2523);
								BgL_l1296z00_2523 = BgL_l1296z00_3046;
								goto BgL_zc3z04anonymousza31697ze3z87_2522;
							}
						}
					else
						{	/* Bdb/bdb_emit.scm 287 */
							((bool_t) 1);
						}
				}
			}
			return
				BGl_bdbz12z12zzbdb_emitz00(
				(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2475)))->BgL_bodyz00));
		}

	}



/* &bdb!-let-fun1318 */
	obj_t BGl_z62bdbz12zd2letzd2fun1318z70zzbdb_emitz00(obj_t BgL_envz00_2476,
		obj_t BgL_nodez00_2477)
	{
		{	/* Bdb/bdb_emit.scm 275 */
			{	/* Bdb/bdb_emit.scm 277 */
				obj_t BgL_g1295z00_2528;

				BgL_g1295z00_2528 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2477)))->BgL_localsz00);
				{
					obj_t BgL_l1293z00_2530;

					BgL_l1293z00_2530 = BgL_g1295z00_2528;
				BgL_zc3z04anonymousza31689ze3z87_2529:
					if (PAIRP(BgL_l1293z00_2530))
						{	/* Bdb/bdb_emit.scm 277 */
							{	/* Bdb/bdb_emit.scm 278 */
								obj_t BgL_localz00_2531;

								BgL_localz00_2531 = CAR(BgL_l1293z00_2530);
								{	/* Bdb/bdb_emit.scm 278 */
									BgL_valuez00_bglt BgL_arg1692z00_2532;

									BgL_arg1692z00_2532 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_localz00_2531))))->
										BgL_valuez00);
									BGl_bdbzd2sfunz12zc0zzbdb_emitz00(BgL_arg1692z00_2532);
								}
							}
							{
								obj_t BgL_l1293z00_3060;

								BgL_l1293z00_3060 = CDR(BgL_l1293z00_2530);
								BgL_l1293z00_2530 = BgL_l1293z00_3060;
								goto BgL_zc3z04anonymousza31689ze3z87_2529;
							}
						}
					else
						{	/* Bdb/bdb_emit.scm 277 */
							((bool_t) 1);
						}
				}
			}
			return
				BGl_bdbz12z12zzbdb_emitz00(
				(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2477)))->BgL_bodyz00));
		}

	}



/* &bdb!-switch1316 */
	obj_t BGl_z62bdbz12zd2switch1316za2zzbdb_emitz00(obj_t BgL_envz00_2478,
		obj_t BgL_nodez00_2479)
	{
		{	/* Bdb/bdb_emit.scm 267 */
			{	/* Bdb/bdb_emit.scm 268 */
				bool_t BgL_tmpz00_3065;

				BGl_bdbz12z12zzbdb_emitz00(
					(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2479)))->BgL_testz00));
				{	/* Bdb/bdb_emit.scm 270 */
					obj_t BgL_g1292z00_2534;

					BgL_g1292z00_2534 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2479)))->BgL_clausesz00);
					{
						obj_t BgL_l1290z00_2536;

						BgL_l1290z00_2536 = BgL_g1292z00_2534;
					BgL_zc3z04anonymousza31685ze3z87_2535:
						if (PAIRP(BgL_l1290z00_2536))
							{	/* Bdb/bdb_emit.scm 270 */
								{	/* Bdb/bdb_emit.scm 270 */
									obj_t BgL_clausez00_2537;

									BgL_clausez00_2537 = CAR(BgL_l1290z00_2536);
									{	/* Bdb/bdb_emit.scm 270 */
										obj_t BgL_arg1687z00_2538;

										BgL_arg1687z00_2538 = CDR(((obj_t) BgL_clausez00_2537));
										BGl_bdbz12z12zzbdb_emitz00(
											((BgL_nodez00_bglt) BgL_arg1687z00_2538));
									}
								}
								{
									obj_t BgL_l1290z00_3078;

									BgL_l1290z00_3078 = CDR(BgL_l1290z00_2536);
									BgL_l1290z00_2536 = BgL_l1290z00_3078;
									goto BgL_zc3z04anonymousza31685ze3z87_2535;
								}
							}
						else
							{	/* Bdb/bdb_emit.scm 270 */
								BgL_tmpz00_3065 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_tmpz00_3065);
			}
		}

	}



/* &bdb!-fail1314 */
	obj_t BGl_z62bdbz12zd2fail1314za2zzbdb_emitz00(obj_t BgL_envz00_2480,
		obj_t BgL_nodez00_2481)
	{
		{	/* Bdb/bdb_emit.scm 258 */
			BGl_bdbz12z12zzbdb_emitz00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2481)))->BgL_procz00));
			BGl_bdbz12z12zzbdb_emitz00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2481)))->BgL_msgz00));
			return
				BGl_bdbz12z12zzbdb_emitz00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2481)))->BgL_objz00));
		}

	}



/* &bdb!-conditional1312 */
	obj_t BGl_z62bdbz12zd2conditional1312za2zzbdb_emitz00(obj_t BgL_envz00_2482,
		obj_t BgL_nodez00_2483)
	{
		{	/* Bdb/bdb_emit.scm 249 */
			BGl_bdbz12z12zzbdb_emitz00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2483)))->BgL_testz00));
			BGl_bdbz12z12zzbdb_emitz00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2483)))->BgL_truez00));
			return
				BGl_bdbz12z12zzbdb_emitz00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2483)))->BgL_falsez00));
		}

	}



/* &bdb!-setq1310 */
	obj_t BGl_z62bdbz12zd2setq1310za2zzbdb_emitz00(obj_t BgL_envz00_2484,
		obj_t BgL_nodez00_2485)
	{
		{	/* Bdb/bdb_emit.scm 242 */
			return
				BGl_bdbz12z12zzbdb_emitz00(
				(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2485)))->BgL_valuez00));
		}

	}



/* &bdb!-cast1308 */
	obj_t BGl_z62bdbz12zd2cast1308za2zzbdb_emitz00(obj_t BgL_envz00_2486,
		obj_t BgL_nodez00_2487)
	{
		{	/* Bdb/bdb_emit.scm 235 */
			return
				BGl_bdbz12z12zzbdb_emitz00(
				(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2487)))->BgL_argz00));
		}

	}



/* &bdb!-extern1306 */
	obj_t BGl_z62bdbz12zd2extern1306za2zzbdb_emitz00(obj_t BgL_envz00_2488,
		obj_t BgL_nodez00_2489)
	{
		{	/* Bdb/bdb_emit.scm 228 */
			return
				BGl_bdbza2z12zb0zzbdb_emitz00(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_2489)))->BgL_exprza2za2));
		}

	}



/* &bdb!-sync1304 */
	obj_t BGl_z62bdbz12zd2sync1304za2zzbdb_emitz00(obj_t BgL_envz00_2490,
		obj_t BgL_nodez00_2491)
	{
		{	/* Bdb/bdb_emit.scm 219 */
			BGl_bdbz12z12zzbdb_emitz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2491)))->BgL_mutexz00));
			BGl_bdbz12z12zzbdb_emitz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2491)))->BgL_prelockz00));
			return
				BGl_bdbz12z12zzbdb_emitz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2491)))->BgL_bodyz00));
		}

	}



/* &bdb!-sequence1302 */
	obj_t BGl_z62bdbz12zd2sequence1302za2zzbdb_emitz00(obj_t BgL_envz00_2492,
		obj_t BgL_nodez00_2493)
	{
		{	/* Bdb/bdb_emit.scm 212 */
			return
				BGl_bdbza2z12zb0zzbdb_emitz00(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2493)))->BgL_nodesz00));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbdb_emitz00()
	{
		{	/* Bdb/bdb_emit.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1947z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1947z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1947z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1947z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1947z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1947z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1947z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1947z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1947z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1947z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string1947z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1947z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1947z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1947z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzast_unitz00(((long) 234044112),
				BSTRING_TO_STRING(BGl_string1947z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1947z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzmodule_includez00(((long) 184800297),
				BSTRING_TO_STRING(BGl_string1947z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1947z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzengine_configurez00(((long) 272817155),
				BSTRING_TO_STRING(BGl_string1947z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(((long)
					364917924), BSTRING_TO_STRING(BGl_string1947z00zzbdb_emitz00));
			return BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long)
					395790731), BSTRING_TO_STRING(BGl_string1947z00zzbdb_emitz00));
		}

	}

#ifdef __cplusplus
}
#endif
