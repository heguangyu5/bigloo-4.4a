/*===========================================================================*/
/*   (Initflow/walk.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Initflow/walk.scm) */
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

	typedef struct BgL_sfunzf2iflowzf2_bgl
	{
	}                      *BgL_sfunzf2iflowzf2_bglt;


	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t BGl_sfunzf2iflowzf2zzinitflow_walkz00 = BUNSPEC;
	extern obj_t BGl_sequencez00zzast_nodez00;
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_z62initflowzd2nodezd2var1335z62zzinitflow_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62initflowzd2node1331zb0zzinitflow_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzinitflow_walkz00();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_z62initflowzd2walkz12za2zzinitflow_walkz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzinitflow_walkz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzinitflow_walkz00();
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_initflowzd2funzd2zzinitflow_walkz00(BgL_variablez00_bglt,
		bool_t);
	static obj_t BGl_z62initflowzd2nodezd2funcal1345z62zzinitflow_walkz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	static obj_t BGl_z62initflowzd2nodezd2switch1355z62zzinitflow_walkz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_getzd2classzd2typez00zztype_cachez00();
	static obj_t BGl_z62zc3z04anonymousza31705ze3ze5zzinitflow_walkz00(obj_t,
		obj_t);
	static obj_t BGl_z62initflowzd2nodezd2makezd2b1357zb0zzinitflow_walkz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzinitflow_walkz00();
	static obj_t BGl_z62initflowzd2nodezd2jumpzd2e1369zb0zzinitflow_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_initflowzd2nodezd2zzinitflow_walkz00(BgL_nodez00_bglt,
		bool_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_z62initflowzd2nodezd2sync1339z62zzinitflow_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_initflowzd2nodeza2z70zzinitflow_walkz00(obj_t, obj_t);
	static obj_t BGl_z62initflowzd2nodezd2fail1353z62zzinitflow_walkz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static BgL_sfunz00_bglt BGl_z62lambda1693z62zzinitflow_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_sfunz00_bglt BGl_z62lambda1697z62zzinitflow_walkz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzinitflow_walkz00 = BUNSPEC;
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzinitflow_walkz00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62initflowzd2nodezd2letzd2va1365zb0zzinitflow_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62initflowzd2nodezd2letzd2fu1363zb0zzinitflow_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzinitflow_walkz00();
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62initflowzd2nodezd2appzd2ly1343zb0zzinitflow_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62initflowzd2nodezd2app1341z62zzinitflow_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62initflowzd2nodezd2setzd2ex1367zb0zzinitflow_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62initflowzd2nodezb0zzinitflow_walkz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_EXPORTED_DECL obj_t BGl_initflowzd2walkz12zc0zzinitflow_walkz00(obj_t);
	static obj_t BGl_lubz00zzinitflow_walkz00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_z62initflowzd2nodezd2extern1347z62zzinitflow_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62initflowzd2nodezd2condit1351z62zzinitflow_walkz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_z62initflowzd2nodezd2boxzd2re1359zb0zzinitflow_walkz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzinitflow_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
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
	extern bool_t BGl_globalzd2readzd2onlyzf3zf3zzast_varz00(BgL_globalz00_bglt);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzinitflow_walkz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzinitflow_walkz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzinitflow_walkz00();
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	static obj_t BGl_z62initflowzd2nodezd2boxzd2se1361zb0zzinitflow_walkz00(obj_t,
		obj_t, obj_t);
	static BgL_sfunz00_bglt BGl_z62lambda1706z62zzinitflow_walkz00(obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	static obj_t BGl_z62initflowzd2nodezd2setq1349z62zzinitflow_walkz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t BGl_z62initflowzd2nodezd2sequen1337z62zzinitflow_walkz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[7];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2047z00zzinitflow_walkz00,
		BgL_bgl_za762lambda1706za7622087z00, BGl_z62lambda1706z62zzinitflow_walkz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2048z00zzinitflow_walkz00,
		BgL_bgl_za762za7c3za704anonymo2088za7,
		BGl_z62zc3z04anonymousza31705ze3ze5zzinitflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2049z00zzinitflow_walkz00,
		BgL_bgl_za762lambda1697za7622089z00, BGl_z62lambda1697z62zzinitflow_walkz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2050z00zzinitflow_walkz00,
		BgL_bgl_za762lambda1693za7622090z00, BGl_z62lambda1693z62zzinitflow_walkz00,
		0L, BUNSPEC, 21);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2051z00zzinitflow_walkz00,
		BgL_bgl_za762initflowza7d2no2091z00,
		BGl_z62initflowzd2node1331zb0zzinitflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2053z00zzinitflow_walkz00,
		BgL_bgl_za762initflowza7d2no2092z00,
		BGl_z62initflowzd2nodezd2var1335z62zzinitflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2055z00zzinitflow_walkz00,
		BgL_bgl_za762initflowza7d2no2093z00,
		BGl_z62initflowzd2nodezd2sequen1337z62zzinitflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2056z00zzinitflow_walkz00,
		BgL_bgl_za762initflowza7d2no2094z00,
		BGl_z62initflowzd2nodezd2sync1339z62zzinitflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2057z00zzinitflow_walkz00,
		BgL_bgl_za762initflowza7d2no2095z00,
		BGl_z62initflowzd2nodezd2app1341z62zzinitflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2058z00zzinitflow_walkz00,
		BgL_bgl_za762initflowza7d2no2096z00,
		BGl_z62initflowzd2nodezd2appzd2ly1343zb0zzinitflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2059z00zzinitflow_walkz00,
		BgL_bgl_za762initflowza7d2no2097z00,
		BGl_z62initflowzd2nodezd2funcal1345z62zzinitflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2060z00zzinitflow_walkz00,
		BgL_bgl_za762initflowza7d2no2098z00,
		BGl_z62initflowzd2nodezd2extern1347z62zzinitflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2061z00zzinitflow_walkz00,
		BgL_bgl_za762initflowza7d2no2099z00,
		BGl_z62initflowzd2nodezd2setq1349z62zzinitflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2062z00zzinitflow_walkz00,
		BgL_bgl_za762initflowza7d2no2100z00,
		BGl_z62initflowzd2nodezd2condit1351z62zzinitflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2063z00zzinitflow_walkz00,
		BgL_bgl_za762initflowza7d2no2101z00,
		BGl_z62initflowzd2nodezd2fail1353z62zzinitflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2064z00zzinitflow_walkz00,
		BgL_bgl_za762initflowza7d2no2102z00,
		BGl_z62initflowzd2nodezd2switch1355z62zzinitflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2065z00zzinitflow_walkz00,
		BgL_bgl_za762initflowza7d2no2103z00,
		BGl_z62initflowzd2nodezd2makezd2b1357zb0zzinitflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2066z00zzinitflow_walkz00,
		BgL_bgl_za762initflowza7d2no2104z00,
		BGl_z62initflowzd2nodezd2boxzd2re1359zb0zzinitflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2067z00zzinitflow_walkz00,
		BgL_bgl_za762initflowza7d2no2105z00,
		BGl_z62initflowzd2nodezd2boxzd2se1361zb0zzinitflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2068z00zzinitflow_walkz00,
		BgL_bgl_za762initflowza7d2no2106z00,
		BGl_z62initflowzd2nodezd2letzd2fu1363zb0zzinitflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2069z00zzinitflow_walkz00,
		BgL_bgl_za762initflowza7d2no2107z00,
		BGl_z62initflowzd2nodezd2letzd2va1365zb0zzinitflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2070z00zzinitflow_walkz00,
		BgL_bgl_za762initflowza7d2no2108z00,
		BGl_z62initflowzd2nodezd2setzd2ex1367zb0zzinitflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2071z00zzinitflow_walkz00,
		BgL_bgl_za762initflowza7d2no2109z00,
		BGl_z62initflowzd2nodezd2jumpzd2e1369zb0zzinitflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2038z00zzinitflow_walkz00,
		BgL_bgl_string2038za700za7za7i2110za7, "Initflow", 8);
	      DEFINE_STRING(BGl_string2039z00zzinitflow_walkz00,
		BgL_bgl_string2039za700za7za7i2111za7, "   . ", 5);
	      DEFINE_STRING(BGl_string2040z00zzinitflow_walkz00,
		BgL_bgl_string2040za700za7za7i2112za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string2041z00zzinitflow_walkz00,
		BgL_bgl_string2041za700za7za7i2113za7, "      uninitialized globals : ",
		30);
	      DEFINE_STRING(BGl_string2042z00zzinitflow_walkz00,
		BgL_bgl_string2042za700za7za7i2114za7, " error", 6);
	      DEFINE_STRING(BGl_string2043z00zzinitflow_walkz00,
		BgL_bgl_string2043za700za7za7i2115za7, "s", 1);
	      DEFINE_STRING(BGl_string2044z00zzinitflow_walkz00,
		BgL_bgl_string2044za700za7za7i2116za7, "", 0);
	      DEFINE_STRING(BGl_string2045z00zzinitflow_walkz00,
		BgL_bgl_string2045za700za7za7i2117za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string2046z00zzinitflow_walkz00,
		BgL_bgl_string2046za700za7za7i2118za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string2052z00zzinitflow_walkz00,
		BgL_bgl_string2052za700za7za7i2119za7, "initflow-node1331", 17);
	      DEFINE_STRING(BGl_string2054z00zzinitflow_walkz00,
		BgL_bgl_string2054za700za7za7i2120za7, "initflow-node", 13);
	      DEFINE_STRING(BGl_string2072z00zzinitflow_walkz00,
		BgL_bgl_string2072za700za7za7i2121za7,
		"Typed global variable used before initialized", 45);
	      DEFINE_STRING(BGl_string2073z00zzinitflow_walkz00,
		BgL_bgl_string2073za700za7za7i2122za7, "initflow_walk", 13);
	      DEFINE_STRING(BGl_string2074z00zzinitflow_walkz00,
		BgL_bgl_string2074za700za7za7i2123za7,
		"no-init-flow _ initflow_walk sfun/iflow (object-init toplevel-init generic-init method-init) read pass-started ",
		111);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_initflowzd2walkz12zd2envz12zzinitflow_walkz00,
		BgL_bgl_za762initflowza7d2wa2124z00,
		BGl_z62initflowzd2walkz12za2zzinitflow_walkz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_initflowzd2nodezd2envz00zzinitflow_walkz00,
		BgL_bgl_za762initflowza7d2no2125z00,
		BGl_z62initflowzd2nodezb0zzinitflow_walkz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_sfunzf2iflowzf2zzinitflow_walkz00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzinitflow_walkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzinitflow_walkz00(long
		BgL_checksumz00_2649, char *BgL_fromz00_2650)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzinitflow_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzinitflow_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzinitflow_walkz00();
					BGl_libraryzd2moduleszd2initz00zzinitflow_walkz00();
					BGl_cnstzd2initzd2zzinitflow_walkz00();
					BGl_importedzd2moduleszd2initz00zzinitflow_walkz00();
					BGl_objectzd2initzd2zzinitflow_walkz00();
					BGl_genericzd2initzd2zzinitflow_walkz00();
					BGl_methodzd2initzd2zzinitflow_walkz00();
					return BGl_toplevelzd2initzd2zzinitflow_walkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzinitflow_walkz00()
	{
		{	/* Initflow/walk.scm 27 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"initflow_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"initflow_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"initflow_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"initflow_walk");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"initflow_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"initflow_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"initflow_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "initflow_walk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"initflow_walk");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "initflow_walk");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"initflow_walk");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzinitflow_walkz00()
	{
		{	/* Initflow/walk.scm 27 */
			{	/* Initflow/walk.scm 27 */
				obj_t BgL_cportz00_2496;

				{	/* Initflow/walk.scm 27 */
					obj_t BgL_stringz00_2504;

					BgL_stringz00_2504 = BGl_string2074z00zzinitflow_walkz00;
					{	/* Initflow/walk.scm 27 */
						obj_t BgL_startz00_2505;

						BgL_startz00_2505 = BINT(((long) 0));
						{	/* Initflow/walk.scm 27 */
							obj_t BgL_endz00_2506;

							BgL_endz00_2506 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2504)));
							{	/* Initflow/walk.scm 27 */

								BgL_cportz00_2496 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2504, BgL_startz00_2505, BgL_endz00_2506);
				}}}}
				{
					long BgL_iz00_2497;

					BgL_iz00_2497 = ((long) 6);
				BgL_loopz00_2498:
					if ((BgL_iz00_2497 == ((long) -1)))
						{	/* Initflow/walk.scm 27 */
							return BUNSPEC;
						}
					else
						{	/* Initflow/walk.scm 27 */
							{	/* Initflow/walk.scm 27 */
								obj_t BgL_arg2076z00_2500;

								{	/* Initflow/walk.scm 27 */

									{	/* Initflow/walk.scm 27 */
										obj_t BgL_locationz00_2502;

										BgL_locationz00_2502 = BBOOL(((bool_t) 0));
										{	/* Initflow/walk.scm 27 */

											BgL_arg2076z00_2500 =
												BGl_readz00zz__readerz00(BgL_cportz00_2496,
												BgL_locationz00_2502);
										}
									}
								}
								{	/* Initflow/walk.scm 27 */
									int BgL_tmpz00_2682;

									BgL_tmpz00_2682 = (int) (BgL_iz00_2497);
									CNST_TABLE_SET(BgL_tmpz00_2682, BgL_arg2076z00_2500);
							}}
							{	/* Initflow/walk.scm 27 */
								int BgL_auxz00_2503;

								BgL_auxz00_2503 = (int) ((BgL_iz00_2497 - ((long) 1)));
								{
									long BgL_iz00_2687;

									BgL_iz00_2687 = (long) (BgL_auxz00_2503);
									BgL_iz00_2497 = BgL_iz00_2687;
									goto BgL_loopz00_2498;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzinitflow_walkz00()
	{
		{	/* Initflow/walk.scm 27 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzinitflow_walkz00()
	{
		{	/* Initflow/walk.scm 27 */
			return BUNSPEC;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzinitflow_walkz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1447;

				BgL_headz00_1447 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1448;
					obj_t BgL_tailz00_1449;

					BgL_prevz00_1448 = BgL_headz00_1447;
					BgL_tailz00_1449 = BgL_l1z00_1;
				BgL_loopz00_1450:
					if (PAIRP(BgL_tailz00_1449))
						{
							obj_t BgL_newzd2prevzd2_1452;

							BgL_newzd2prevzd2_1452 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1449), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1448, BgL_newzd2prevzd2_1452);
							{
								obj_t BgL_tailz00_2697;
								obj_t BgL_prevz00_2696;

								BgL_prevz00_2696 = BgL_newzd2prevzd2_1452;
								BgL_tailz00_2697 = CDR(BgL_tailz00_1449);
								BgL_tailz00_1449 = BgL_tailz00_2697;
								BgL_prevz00_1448 = BgL_prevz00_2696;
								goto BgL_loopz00_1450;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1447);
				}
			}
		}

	}



/* initflow-walk! */
	BGL_EXPORTED_DEF obj_t BGl_initflowzd2walkz12zc0zzinitflow_walkz00(obj_t
		BgL_globalsz00_80)
	{
		{	/* Initflow/walk.scm 48 */
			{	/* Initflow/walk.scm 49 */
				obj_t BgL_list1385z00_1461;

				{	/* Initflow/walk.scm 49 */
					obj_t BgL_arg1386z00_1462;

					{	/* Initflow/walk.scm 49 */
						obj_t BgL_arg1387z00_1463;

						BgL_arg1387z00_1463 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1386z00_1462 =
							MAKE_YOUNG_PAIR(BGl_string2038z00zzinitflow_walkz00,
							BgL_arg1387z00_1463);
					}
					BgL_list1385z00_1461 =
						MAKE_YOUNG_PAIR(BGl_string2039z00zzinitflow_walkz00,
						BgL_arg1386z00_1462);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1385z00_1461);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string2038z00zzinitflow_walkz00;
			{	/* Initflow/walk.scm 49 */
				obj_t BgL_g1140z00_1464;

				BgL_g1140z00_1464 = BNIL;
				{
					obj_t BgL_hooksz00_1467;
					obj_t BgL_hnamesz00_1468;

					BgL_hooksz00_1467 = BgL_g1140z00_1464;
					BgL_hnamesz00_1468 = BNIL;
				BgL_zc3z04anonymousza31388ze3z87_1469:
					if (NULLP(BgL_hooksz00_1467))
						{	/* Initflow/walk.scm 49 */
							CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Initflow/walk.scm 49 */
							bool_t BgL_test2130z00_2710;

							{	/* Initflow/walk.scm 49 */
								obj_t BgL_fun1418z00_1476;

								BgL_fun1418z00_1476 = CAR(((obj_t) BgL_hooksz00_1467));
								BgL_test2130z00_2710 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1418z00_1476)
									(BgL_fun1418z00_1476, BEOA));
							}
							if (BgL_test2130z00_2710)
								{	/* Initflow/walk.scm 49 */
									obj_t BgL_arg1394z00_1473;
									obj_t BgL_arg1396z00_1474;

									BgL_arg1394z00_1473 = CDR(((obj_t) BgL_hooksz00_1467));
									BgL_arg1396z00_1474 = CDR(((obj_t) BgL_hnamesz00_1468));
									{
										obj_t BgL_hnamesz00_2722;
										obj_t BgL_hooksz00_2721;

										BgL_hooksz00_2721 = BgL_arg1394z00_1473;
										BgL_hnamesz00_2722 = BgL_arg1396z00_1474;
										BgL_hnamesz00_1468 = BgL_hnamesz00_2722;
										BgL_hooksz00_1467 = BgL_hooksz00_2721;
										goto BgL_zc3z04anonymousza31388ze3z87_1469;
									}
								}
							else
								{	/* Initflow/walk.scm 49 */
									obj_t BgL_arg1417z00_1475;

									BgL_arg1417z00_1475 = CAR(((obj_t) BgL_hnamesz00_1468));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string2038z00zzinitflow_walkz00,
										BGl_string2040z00zzinitflow_walkz00, BgL_arg1417z00_1475);
								}
						}
				}
			}
			{
				obj_t BgL_l1288z00_1480;

				BgL_l1288z00_1480 = BgL_globalsz00_80;
			BgL_zc3z04anonymousza31420ze3z87_1481:
				if (PAIRP(BgL_l1288z00_1480))
					{	/* Initflow/walk.scm 53 */
						{	/* Initflow/walk.scm 54 */
							obj_t BgL_gz00_1483;

							BgL_gz00_1483 = CAR(BgL_l1288z00_1480);
							if (
								((((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_globalz00_bglt) BgL_gz00_1483))))->
										BgL_accessz00) == CNST_TABLE_REF(((long) 1))))
								{	/* Initflow/walk.scm 55 */
									BgL_valuez00_bglt BgL_valuez00_1486;

									BgL_valuez00_1486 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_globalz00_bglt) BgL_gz00_1483))))->
										BgL_valuez00);
									{	/* Initflow/walk.scm 56 */
										bool_t BgL_test2133z00_2738;

										{	/* Initflow/walk.scm 56 */
											bool_t BgL_res1976z00_2162;

											BgL_res1976z00_2162 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_valuez00_1486), BGl_sfunz00zzast_varz00);
											BgL_test2133z00_2738 = BgL_res1976z00_2162;
										}
										if (BgL_test2133z00_2738)
											{	/* Initflow/walk.scm 56 */
												((((BgL_globalz00_bglt) COBJECT(
																((BgL_globalz00_bglt) BgL_gz00_1483)))->
														BgL_initz00) = ((obj_t) BTRUE), BUNSPEC);
											}
										else
											{	/* Initflow/walk.scm 56 */
												BFALSE;
											}
									}
								}
							else
								{	/* Initflow/walk.scm 54 */
									BFALSE;
								}
						}
						{
							obj_t BgL_l1288z00_2743;

							BgL_l1288z00_2743 = CDR(BgL_l1288z00_1480);
							BgL_l1288z00_1480 = BgL_l1288z00_2743;
							goto BgL_zc3z04anonymousza31420ze3z87_1481;
						}
					}
				else
					{	/* Initflow/walk.scm 53 */
						((bool_t) 1);
					}
			}
			{	/* Initflow/walk.scm 60 */
				obj_t BgL_g1303z00_1491;

				BgL_g1303z00_1491 = CNST_TABLE_REF(((long) 2));
				{
					obj_t BgL_l1301z00_1493;

					BgL_l1301z00_1493 = BgL_g1303z00_1491;
				BgL_zc3z04anonymousza31443ze3z87_1494:
					if (PAIRP(BgL_l1301z00_1493))
						{	/* Initflow/walk.scm 72 */
							{	/* Initflow/walk.scm 61 */
								obj_t BgL_idz00_1496;

								BgL_idz00_1496 = CAR(BgL_l1301z00_1493);
								{	/* Initflow/walk.scm 61 */
									obj_t BgL_rootz00_1497;

									BgL_rootz00_1497 =
										BGl_findzd2globalzf2modulez20zzast_envz00(BgL_idz00_1496,
										BGl_za2moduleza2z00zzmodule_modulez00);
									if (BGl_isazf3zf3zz__objectz00(BgL_rootz00_1497,
											BGl_globalz00zzast_varz00))
										{	/* Initflow/walk.scm 62 */
											BGl_initflowzd2funzd2zzinitflow_walkz00(
												((BgL_variablez00_bglt)
													((BgL_globalz00_bglt) BgL_rootz00_1497)),
												((bool_t) 1));
											{	/* Initflow/walk.scm 64 */
												obj_t BgL_lz00_1499;

												{	/* Initflow/walk.scm 64 */
													obj_t BgL_hook1294z00_1521;

													BgL_hook1294z00_1521 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
													{
														obj_t BgL_l1291z00_1523;
														obj_t BgL_h1292z00_1524;

														BgL_l1291z00_1523 = BgL_globalsz00_80;
														BgL_h1292z00_1524 = BgL_hook1294z00_1521;
													BgL_zc3z04anonymousza31494ze3z87_1525:
														if (NULLP(BgL_l1291z00_1523))
															{	/* Initflow/walk.scm 64 */
																BgL_lz00_1499 = CDR(BgL_hook1294z00_1521);
															}
														else
															{	/* Initflow/walk.scm 64 */
																bool_t BgL_test2137z00_2759;

																{	/* Initflow/walk.scm 65 */
																	obj_t BgL_gz00_1538;

																	BgL_gz00_1538 =
																		CAR(((obj_t) BgL_l1291z00_1523));
																	{	/* Initflow/walk.scm 65 */
																		bool_t BgL_test2138z00_2762;

																		{	/* Initflow/walk.scm 65 */
																			BgL_valuez00_bglt BgL_arg1552z00_1542;

																			BgL_arg1552z00_1542 =
																				(((BgL_variablez00_bglt) COBJECT(
																						((BgL_variablez00_bglt)
																							((BgL_globalz00_bglt)
																								BgL_gz00_1538))))->
																				BgL_valuez00);
																			{	/* Initflow/walk.scm 65 */
																				bool_t BgL_res1980z00_2172;

																				BgL_res1980z00_2172 =
																					BGl_isazf3zf3zz__objectz00(
																					((obj_t) BgL_arg1552z00_1542),
																					BGl_sfunz00zzast_varz00);
																				BgL_test2138z00_2762 =
																					BgL_res1980z00_2172;
																			}
																		}
																		if (BgL_test2138z00_2762)
																			{	/* Initflow/walk.scm 65 */
																				BgL_test2137z00_2759 = ((bool_t) 0);
																			}
																		else
																			{	/* Initflow/walk.scm 65 */
																				if (
																					((((BgL_globalz00_bglt) COBJECT(
																									((BgL_globalz00_bglt)
																										BgL_gz00_1538)))->
																							BgL_initz00) == BTRUE))
																					{	/* Initflow/walk.scm 66 */
																						BgL_test2137z00_2759 = ((bool_t) 0);
																					}
																				else
																					{	/* Initflow/walk.scm 66 */
																						BgL_test2137z00_2759 = ((bool_t) 1);
																					}
																			}
																	}
																}
																if (BgL_test2137z00_2759)
																	{	/* Initflow/walk.scm 64 */
																		obj_t BgL_nh1293z00_1534;

																		{	/* Initflow/walk.scm 64 */
																			obj_t BgL_arg1536z00_1536;

																			BgL_arg1536z00_1536 =
																				CAR(((obj_t) BgL_l1291z00_1523));
																			{	/* Initflow/walk.scm 64 */
																				obj_t BgL_res1981z00_2175;

																				BgL_res1981z00_2175 =
																					MAKE_YOUNG_PAIR(BgL_arg1536z00_1536,
																					BNIL);
																				BgL_nh1293z00_1534 =
																					BgL_res1981z00_2175;
																			}
																		}
																		SET_CDR(BgL_h1292z00_1524,
																			BgL_nh1293z00_1534);
																		{	/* Initflow/walk.scm 64 */
																			obj_t BgL_arg1528z00_1535;

																			BgL_arg1528z00_1535 =
																				CDR(((obj_t) BgL_l1291z00_1523));
																			{
																				obj_t BgL_h1292z00_2779;
																				obj_t BgL_l1291z00_2778;

																				BgL_l1291z00_2778 = BgL_arg1528z00_1535;
																				BgL_h1292z00_2779 = BgL_nh1293z00_1534;
																				BgL_h1292z00_1524 = BgL_h1292z00_2779;
																				BgL_l1291z00_1523 = BgL_l1291z00_2778;
																				goto
																					BgL_zc3z04anonymousza31494ze3z87_1525;
																			}
																		}
																	}
																else
																	{	/* Initflow/walk.scm 64 */
																		obj_t BgL_arg1537z00_1537;

																		BgL_arg1537z00_1537 =
																			CDR(((obj_t) BgL_l1291z00_1523));
																		{
																			obj_t BgL_l1291z00_2782;

																			BgL_l1291z00_2782 = BgL_arg1537z00_1537;
																			BgL_l1291z00_1523 = BgL_l1291z00_2782;
																			goto
																				BgL_zc3z04anonymousza31494ze3z87_1525;
																		}
																	}
															}
													}
												}
												if (PAIRP(BgL_lz00_1499))
													{	/* Initflow/walk.scm 70 */
														obj_t BgL_arg1448z00_1501;

														{	/* Initflow/walk.scm 70 */
															obj_t BgL_head1297z00_1507;

															{	/* Initflow/walk.scm 70 */
																obj_t BgL_arg1489z00_1519;

																BgL_arg1489z00_1519 =
																	BGl_shapez00zztools_shapez00(CAR
																	(BgL_lz00_1499));
																{	/* Initflow/walk.scm 70 */
																	obj_t BgL_res1984z00_2182;

																	BgL_res1984z00_2182 =
																		MAKE_YOUNG_PAIR(BgL_arg1489z00_1519, BNIL);
																	BgL_head1297z00_1507 = BgL_res1984z00_2182;
																}
															}
															{	/* Initflow/walk.scm 70 */
																obj_t BgL_g1300z00_1508;

																BgL_g1300z00_1508 = CDR(BgL_lz00_1499);
																{
																	obj_t BgL_l1295z00_1510;
																	obj_t BgL_tail1298z00_1511;

																	BgL_l1295z00_1510 = BgL_g1300z00_1508;
																	BgL_tail1298z00_1511 = BgL_head1297z00_1507;
																BgL_zc3z04anonymousza31464ze3z87_1512:
																	if (NULLP(BgL_l1295z00_1510))
																		{	/* Initflow/walk.scm 70 */
																			BgL_arg1448z00_1501 =
																				BgL_head1297z00_1507;
																		}
																	else
																		{	/* Initflow/walk.scm 70 */
																			obj_t BgL_newtail1299z00_1514;

																			{	/* Initflow/walk.scm 70 */
																				obj_t BgL_arg1476z00_1516;

																				{	/* Initflow/walk.scm 70 */
																					obj_t BgL_arg1477z00_1517;

																					BgL_arg1477z00_1517 =
																						CAR(((obj_t) BgL_l1295z00_1510));
																					BgL_arg1476z00_1516 =
																						BGl_shapez00zztools_shapez00
																						(BgL_arg1477z00_1517);
																				}
																				{	/* Initflow/walk.scm 70 */
																					obj_t BgL_res1986z00_2186;

																					BgL_res1986z00_2186 =
																						MAKE_YOUNG_PAIR(BgL_arg1476z00_1516,
																						BNIL);
																					BgL_newtail1299z00_1514 =
																						BgL_res1986z00_2186;
																				}
																			}
																			SET_CDR(BgL_tail1298z00_1511,
																				BgL_newtail1299z00_1514);
																			{	/* Initflow/walk.scm 70 */
																				obj_t BgL_arg1474z00_1515;

																				BgL_arg1474z00_1515 =
																					CDR(((obj_t) BgL_l1295z00_1510));
																				{
																					obj_t BgL_tail1298z00_2799;
																					obj_t BgL_l1295z00_2798;

																					BgL_l1295z00_2798 =
																						BgL_arg1474z00_1515;
																					BgL_tail1298z00_2799 =
																						BgL_newtail1299z00_1514;
																					BgL_tail1298z00_1511 =
																						BgL_tail1298z00_2799;
																					BgL_l1295z00_1510 = BgL_l1295z00_2798;
																					goto
																						BgL_zc3z04anonymousza31464ze3z87_1512;
																				}
																			}
																		}
																}
															}
														}
														{	/* Initflow/walk.scm 69 */
															obj_t BgL_list1449z00_1502;

															{	/* Initflow/walk.scm 69 */
																obj_t BgL_arg1461z00_1503;

																{	/* Initflow/walk.scm 69 */
																	obj_t BgL_arg1462z00_1504;

																	BgL_arg1462z00_1504 =
																		MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)),
																		BNIL);
																	BgL_arg1461z00_1503 =
																		MAKE_YOUNG_PAIR(BgL_arg1448z00_1501,
																		BgL_arg1462z00_1504);
																}
																BgL_list1449z00_1502 =
																	MAKE_YOUNG_PAIR
																	(BGl_string2041z00zzinitflow_walkz00,
																	BgL_arg1461z00_1503);
															}
															BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
																BgL_list1449z00_1502);
													}}
												else
													{	/* Initflow/walk.scm 68 */
														BFALSE;
													}
											}
										}
									else
										{	/* Initflow/walk.scm 62 */
											BFALSE;
										}
								}
							}
							{
								obj_t BgL_l1301z00_2806;

								BgL_l1301z00_2806 = CDR(BgL_l1301z00_1493);
								BgL_l1301z00_1493 = BgL_l1301z00_2806;
								goto BgL_zc3z04anonymousza31443ze3z87_1494;
							}
						}
					else
						{	/* Initflow/walk.scm 72 */
							((bool_t) 1);
						}
				}
			}
			if (
				((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
					((long) 0)))
				{	/* Initflow/walk.scm 74 */
					{	/* Initflow/walk.scm 74 */
						obj_t BgL_port1304z00_1548;

						{	/* Initflow/walk.scm 74 */
							obj_t BgL_res1988z00_2193;

							{	/* Initflow/walk.scm 74 */
								obj_t BgL_tmpz00_2811;

								BgL_tmpz00_2811 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1988z00_2193 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2811);
							}
							BgL_port1304z00_1548 = BgL_res1988z00_2193;
						}
						bgl_display_obj(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
							BgL_port1304z00_1548);
						bgl_display_string(BGl_string2042z00zzinitflow_walkz00,
							BgL_port1304z00_1548);
						{	/* Initflow/walk.scm 74 */
							obj_t BgL_arg1561z00_1549;

							{	/* Initflow/walk.scm 74 */
								bool_t BgL_test2143z00_2816;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
									{	/* Initflow/walk.scm 74 */
										if (INTEGERP
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
											{	/* Initflow/walk.scm 74 */
												BgL_test2143z00_2816 =
													(
													(long)
													CINT
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
													> ((long) 1));
											}
										else
											{	/* Initflow/walk.scm 74 */
												BgL_test2143z00_2816 =
													BGl_2ze3ze3zz__r4_numbers_6_5z00
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
													BINT(((long) 1)));
									}}
								else
									{	/* Initflow/walk.scm 74 */
										BgL_test2143z00_2816 = ((bool_t) 0);
									}
								if (BgL_test2143z00_2816)
									{	/* Initflow/walk.scm 74 */
										BgL_arg1561z00_1549 = BGl_string2043z00zzinitflow_walkz00;
									}
								else
									{	/* Initflow/walk.scm 74 */
										BgL_arg1561z00_1549 = BGl_string2044z00zzinitflow_walkz00;
									}
							}
							bgl_display_obj(BgL_arg1561z00_1549, BgL_port1304z00_1548);
						}
						bgl_display_string(BGl_string2045z00zzinitflow_walkz00,
							BgL_port1304z00_1548);
						bgl_display_char(((unsigned char) 10), BgL_port1304z00_1548);
					}
					{	/* Initflow/walk.scm 74 */
						obj_t BgL_list1565z00_1555;

						BgL_list1565z00_1555 = MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list1565z00_1555);
					}
				}
			else
				{	/* Initflow/walk.scm 74 */
					obj_t BgL_g1146z00_1556;

					BgL_g1146z00_1556 = BNIL;
					{
						obj_t BgL_hooksz00_1559;
						obj_t BgL_hnamesz00_1560;

						BgL_hooksz00_1559 = BgL_g1146z00_1556;
						BgL_hnamesz00_1560 = BNIL;
					BgL_zc3z04anonymousza31566ze3z87_1561:
						if (NULLP(BgL_hooksz00_1559))
							{	/* Initflow/walk.scm 74 */
								return BgL_globalsz00_80;
							}
						else
							{	/* Initflow/walk.scm 74 */
								bool_t BgL_test2147z00_2833;

								{	/* Initflow/walk.scm 74 */
									obj_t BgL_fun1580z00_1568;

									BgL_fun1580z00_1568 = CAR(((obj_t) BgL_hooksz00_1559));
									BgL_test2147z00_2833 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun1580z00_1568)
										(BgL_fun1580z00_1568, BEOA));
								}
								if (BgL_test2147z00_2833)
									{	/* Initflow/walk.scm 74 */
										obj_t BgL_arg1573z00_1565;
										obj_t BgL_arg1575z00_1566;

										BgL_arg1573z00_1565 = CDR(((obj_t) BgL_hooksz00_1559));
										BgL_arg1575z00_1566 = CDR(((obj_t) BgL_hnamesz00_1560));
										{
											obj_t BgL_hnamesz00_2845;
											obj_t BgL_hooksz00_2844;

											BgL_hooksz00_2844 = BgL_arg1573z00_1565;
											BgL_hnamesz00_2845 = BgL_arg1575z00_1566;
											BgL_hnamesz00_1560 = BgL_hnamesz00_2845;
											BgL_hooksz00_1559 = BgL_hooksz00_2844;
											goto BgL_zc3z04anonymousza31566ze3z87_1561;
										}
									}
								else
									{	/* Initflow/walk.scm 74 */
										obj_t BgL_arg1578z00_1567;

										BgL_arg1578z00_1567 = CAR(((obj_t) BgL_hnamesz00_1560));
										return
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_za2currentzd2passza2zd2zzengine_passz00,
											BGl_string2046z00zzinitflow_walkz00, BgL_arg1578z00_1567);
									}
							}
					}
				}
		}

	}



/* &initflow-walk! */
	obj_t BGl_z62initflowzd2walkz12za2zzinitflow_walkz00(obj_t BgL_envz00_2383,
		obj_t BgL_globalsz00_2384)
	{
		{	/* Initflow/walk.scm 48 */
			return BGl_initflowzd2walkz12zc0zzinitflow_walkz00(BgL_globalsz00_2384);
		}

	}



/* initflow-fun */
	obj_t BGl_initflowzd2funzd2zzinitflow_walkz00(BgL_variablez00_bglt
		BgL_varz00_81, bool_t BgL_ez00_82)
	{
		{	/* Initflow/walk.scm 79 */
			{	/* Initflow/walk.scm 80 */
				BgL_valuez00_bglt BgL_fz00_1571;

				BgL_fz00_1571 =
					(((BgL_variablez00_bglt) COBJECT(BgL_varz00_81))->BgL_valuez00);
				{	/* Initflow/walk.scm 82 */
					bool_t BgL_test2148z00_2851;

					{	/* Initflow/walk.scm 82 */
						obj_t BgL_arg1592z00_1581;

						BgL_arg1592z00_1581 =
							(((BgL_sfunz00_bglt) COBJECT(
									((BgL_sfunz00_bglt) BgL_fz00_1571)))->BgL_bodyz00);
						BgL_test2148z00_2851 =
							BGl_isazf3zf3zz__objectz00(BgL_arg1592z00_1581,
							BGl_nodez00zzast_nodez00);
					}
					if (BgL_test2148z00_2851)
						{	/* Initflow/walk.scm 84 */
							bool_t BgL_test2149z00_2855;

							{	/* Initflow/walk.scm 84 */
								bool_t BgL_res1994z00_2212;

								BgL_res1994z00_2212 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_fz00_1571),
									BGl_sfunzf2iflowzf2zzinitflow_walkz00);
								BgL_test2149z00_2855 = BgL_res1994z00_2212;
							}
							if (BgL_test2149z00_2855)
								{	/* Initflow/walk.scm 84 */
									return BNIL;
								}
							else
								{	/* Initflow/walk.scm 84 */
									{	/* Initflow/walk.scm 87 */
										BgL_sfunzf2iflowzf2_bglt BgL_wide1150z00_1577;

										BgL_wide1150z00_1577 =
											((BgL_sfunzf2iflowzf2_bglt)
											BOBJECT(GC_MALLOC(sizeof(struct
														BgL_sfunzf2iflowzf2_bgl))));
										{	/* Initflow/walk.scm 87 */
											obj_t BgL_auxz00_2863;
											BgL_objectz00_bglt BgL_tmpz00_2859;

											BgL_auxz00_2863 = ((obj_t) BgL_wide1150z00_1577);
											BgL_tmpz00_2859 =
												((BgL_objectz00_bglt)
												((BgL_sfunz00_bglt)
													((BgL_sfunz00_bglt) BgL_fz00_1571)));
											BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2859, BgL_auxz00_2863);
										}
										((BgL_objectz00_bglt)
											((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_fz00_1571)));
										{	/* Initflow/walk.scm 87 */
											long BgL_arg1588z00_1578;

											{	/* Initflow/walk.scm 87 */
												long BgL_res1995z00_2215;

												BgL_res1995z00_2215 =
													BGL_CLASS_INDEX
													(BGl_sfunzf2iflowzf2zzinitflow_walkz00);
												BgL_arg1588z00_1578 = BgL_res1995z00_2215;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_fz00_1571))),
												BgL_arg1588z00_1578);
										}
										((BgL_sfunz00_bglt)
											((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_fz00_1571)));
									}
									((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_fz00_1571));
									{	/* Initflow/walk.scm 88 */
										obj_t BgL_arg1589z00_1580;

										BgL_arg1589z00_1580 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_fz00_1571)))->BgL_bodyz00);
										return
											BGl_initflowzd2nodezd2zzinitflow_walkz00(
											((BgL_nodez00_bglt) BgL_arg1589z00_1580), BgL_ez00_82);
									}
								}
						}
					else
						{	/* Initflow/walk.scm 82 */
							return BNIL;
						}
				}
			}
		}

	}



/* initflow-node* */
	obj_t BGl_initflowzd2nodeza2z70zzinitflow_walkz00(obj_t BgL_nodesz00_87,
		obj_t BgL_ez00_88)
	{
		{	/* Initflow/walk.scm 124 */
			{
				obj_t BgL_nodesz00_1584;
				obj_t BgL_isz00_1585;

				BgL_nodesz00_1584 = BgL_nodesz00_87;
				BgL_isz00_1585 = BNIL;
			BgL_zc3z04anonymousza31593ze3z87_1586:
				if (NULLP(BgL_nodesz00_1584))
					{	/* Initflow/walk.scm 127 */
						if (CBOOL(BgL_ez00_88))
							{	/* Initflow/walk.scm 128 */
								{
									obj_t BgL_l1305z00_1589;

									BgL_l1305z00_1589 = BgL_isz00_1585;
								BgL_zc3z04anonymousza31595ze3z87_1590:
									if (PAIRP(BgL_l1305z00_1589))
										{	/* Initflow/walk.scm 130 */
											{	/* Initflow/walk.scm 131 */
												obj_t BgL_gz00_1592;

												BgL_gz00_1592 = CAR(BgL_l1305z00_1589);
												if (
													((((BgL_globalz00_bglt) COBJECT(
																	((BgL_globalz00_bglt) BgL_gz00_1592)))->
															BgL_initz00) == BUNSPEC))
													{	/* Initflow/walk.scm 131 */
														((((BgL_globalz00_bglt) COBJECT(
																		((BgL_globalz00_bglt) BgL_gz00_1592)))->
																BgL_initz00) = ((obj_t) BTRUE), BUNSPEC);
													}
												else
													{	/* Initflow/walk.scm 131 */
														BFALSE;
													}
											}
											{
												obj_t BgL_l1305z00_2896;

												BgL_l1305z00_2896 = CDR(BgL_l1305z00_1589);
												BgL_l1305z00_1589 = BgL_l1305z00_2896;
												goto BgL_zc3z04anonymousza31595ze3z87_1590;
											}
										}
									else
										{	/* Initflow/walk.scm 130 */
											((bool_t) 1);
										}
								}
								return BNIL;
							}
						else
							{	/* Initflow/walk.scm 135 */
								obj_t BgL_hook1311z00_1598;

								BgL_hook1311z00_1598 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
								{
									obj_t BgL_l1308z00_1600;
									obj_t BgL_h1309z00_1601;

									BgL_l1308z00_1600 = BgL_isz00_1585;
									BgL_h1309z00_1601 = BgL_hook1311z00_1598;
								BgL_zc3z04anonymousza31605ze3z87_1602:
									if (NULLP(BgL_l1308z00_1600))
										{	/* Initflow/walk.scm 135 */
											return CDR(BgL_hook1311z00_1598);
										}
									else
										{	/* Initflow/walk.scm 135 */
											if (CBOOL(
													(((BgL_globalz00_bglt) COBJECT(
																((BgL_globalz00_bglt)
																	CAR(
																		((obj_t) BgL_l1308z00_1600)))))->
														BgL_initz00)))
												{	/* Initflow/walk.scm 135 */
													obj_t BgL_nh1310z00_1606;

													{	/* Initflow/walk.scm 135 */
														obj_t BgL_arg1624z00_1608;

														BgL_arg1624z00_1608 =
															CAR(((obj_t) BgL_l1308z00_1600));
														{	/* Initflow/walk.scm 135 */
															obj_t BgL_res1999z00_2230;

															BgL_res1999z00_2230 =
																MAKE_YOUNG_PAIR(BgL_arg1624z00_1608, BNIL);
															BgL_nh1310z00_1606 = BgL_res1999z00_2230;
														}
													}
													SET_CDR(BgL_h1309z00_1601, BgL_nh1310z00_1606);
													{	/* Initflow/walk.scm 135 */
														obj_t BgL_arg1613z00_1607;

														BgL_arg1613z00_1607 =
															CDR(((obj_t) BgL_l1308z00_1600));
														{
															obj_t BgL_h1309z00_2915;
															obj_t BgL_l1308z00_2914;

															BgL_l1308z00_2914 = BgL_arg1613z00_1607;
															BgL_h1309z00_2915 = BgL_nh1310z00_1606;
															BgL_h1309z00_1601 = BgL_h1309z00_2915;
															BgL_l1308z00_1600 = BgL_l1308z00_2914;
															goto BgL_zc3z04anonymousza31605ze3z87_1602;
														}
													}
												}
											else
												{	/* Initflow/walk.scm 135 */
													obj_t BgL_arg1626z00_1609;

													BgL_arg1626z00_1609 =
														CDR(((obj_t) BgL_l1308z00_1600));
													{
														obj_t BgL_l1308z00_2918;

														BgL_l1308z00_2918 = BgL_arg1626z00_1609;
														BgL_l1308z00_1600 = BgL_l1308z00_2918;
														goto BgL_zc3z04anonymousza31605ze3z87_1602;
													}
												}
										}
								}
							}
					}
				else
					{	/* Initflow/walk.scm 136 */
						obj_t BgL_iz00_1612;

						{	/* Initflow/walk.scm 136 */
							obj_t BgL_arg1639z00_1615;

							BgL_arg1639z00_1615 = CAR(((obj_t) BgL_nodesz00_1584));
							BgL_iz00_1612 =
								BGl_initflowzd2nodezd2zzinitflow_walkz00(
								((BgL_nodez00_bglt) BgL_arg1639z00_1615), ((bool_t) 0));
						}
						{	/* Initflow/walk.scm 137 */
							obj_t BgL_arg1631z00_1613;
							obj_t BgL_arg1634z00_1614;

							BgL_arg1631z00_1613 = CDR(((obj_t) BgL_nodesz00_1584));
							BgL_arg1634z00_1614 =
								BGl_appendzd221011zd2zzinitflow_walkz00(BgL_iz00_1612,
								BgL_isz00_1585);
							{
								obj_t BgL_isz00_2927;
								obj_t BgL_nodesz00_2926;

								BgL_nodesz00_2926 = BgL_arg1631z00_1613;
								BgL_isz00_2927 = BgL_arg1634z00_1614;
								BgL_isz00_1585 = BgL_isz00_2927;
								BgL_nodesz00_1584 = BgL_nodesz00_2926;
								goto BgL_zc3z04anonymousza31593ze3z87_1586;
							}
						}
					}
			}
		}

	}



/* lub */
	obj_t BGl_lubz00zzinitflow_walkz00(obj_t BgL_isz00_103, obj_t BgL_ez00_104)
	{
		{	/* Initflow/walk.scm 216 */
			if (NULLP(BgL_isz00_103))
				{	/* Initflow/walk.scm 217 */
					return BNIL;
				}
			else
				{	/* Initflow/walk.scm 219 */
					obj_t BgL_lubz00_1618;

					BgL_lubz00_1618 = BNIL;
					{	/* Initflow/walk.scm 220 */
						obj_t BgL_g1318z00_1619;

						BgL_g1318z00_1619 = CAR(((obj_t) BgL_isz00_103));
						{
							obj_t BgL_l1316z00_1621;

							BgL_l1316z00_1621 = BgL_g1318z00_1619;
						BgL_zc3z04anonymousza31642ze3z87_1622:
							if (PAIRP(BgL_l1316z00_1621))
								{	/* Initflow/walk.scm 226 */
									{	/* Initflow/walk.scm 221 */
										obj_t BgL_gz00_1624;

										BgL_gz00_1624 = CAR(BgL_l1316z00_1621);
										{	/* Initflow/walk.scm 221 */
											bool_t BgL_test2158z00_2935;

											if (
												((((BgL_globalz00_bglt) COBJECT(
																((BgL_globalz00_bglt) BgL_gz00_1624)))->
														BgL_initz00) == BUNSPEC))
												{
													obj_t BgL_l1312z00_1642;

													BgL_l1312z00_1642 = CDR(((obj_t) BgL_isz00_103));
												BgL_zc3z04anonymousza31664ze3z87_1643:
													if (NULLP(BgL_l1312z00_1642))
														{	/* Initflow/walk.scm 222 */
															BgL_test2158z00_2935 = ((bool_t) 1);
														}
													else
														{	/* Initflow/walk.scm 222 */
															if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																	(BgL_gz00_1624,
																		CAR(((obj_t) BgL_l1312z00_1642)))))
																{
																	obj_t BgL_l1312z00_2947;

																	BgL_l1312z00_2947 =
																		CDR(((obj_t) BgL_l1312z00_1642));
																	BgL_l1312z00_1642 = BgL_l1312z00_2947;
																	goto BgL_zc3z04anonymousza31664ze3z87_1643;
																}
															else
																{	/* Initflow/walk.scm 222 */
																	BgL_test2158z00_2935 = ((bool_t) 0);
																}
														}
												}
											else
												{	/* Initflow/walk.scm 221 */
													BgL_test2158z00_2935 = ((bool_t) 0);
												}
											if (BgL_test2158z00_2935)
												{	/* Initflow/walk.scm 221 */
													if (CBOOL(BgL_ez00_104))
														{	/* Initflow/walk.scm 223 */
															((((BgL_globalz00_bglt) COBJECT(
																			((BgL_globalz00_bglt) BgL_gz00_1624)))->
																	BgL_initz00) = ((obj_t) BTRUE), BUNSPEC);
														}
													else
														{	/* Initflow/walk.scm 223 */
															BgL_lubz00_1618 =
																MAKE_YOUNG_PAIR(BgL_gz00_1624, BgL_lubz00_1618);
														}
												}
											else
												{	/* Initflow/walk.scm 221 */
													BFALSE;
												}
										}
									}
									{
										obj_t BgL_l1316z00_2957;

										BgL_l1316z00_2957 = CDR(BgL_l1316z00_1621);
										BgL_l1316z00_1621 = BgL_l1316z00_2957;
										goto BgL_zc3z04anonymousza31642ze3z87_1622;
									}
								}
							else
								{	/* Initflow/walk.scm 226 */
									((bool_t) 1);
								}
						}
					}
					return BgL_lubz00_1618;
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzinitflow_walkz00()
	{
		{	/* Initflow/walk.scm 27 */
			{	/* Initflow/walk.scm 42 */
				obj_t BgL_arg1688z00_1657;
				obj_t BgL_arg1692z00_1658;

				{	/* Initflow/walk.scm 42 */
					obj_t BgL_v1329z00_1700;

					BgL_v1329z00_1700 = create_vector(((long) 0));
					BgL_arg1688z00_1657 = BgL_v1329z00_1700;
				}
				{	/* Initflow/walk.scm 42 */
					obj_t BgL_v1330z00_1701;

					BgL_v1330z00_1701 = create_vector(((long) 0));
					BgL_arg1692z00_1658 = BgL_v1330z00_1701;
				}
				return (BGl_sfunzf2iflowzf2zzinitflow_walkz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 3)),
						CNST_TABLE_REF(((long) 4)), BGl_sfunz00zzast_varz00, ((long) 37031),
						BGl_proc2050z00zzinitflow_walkz00,
						BGl_proc2049z00zzinitflow_walkz00, BFALSE,
						BGl_proc2048z00zzinitflow_walkz00,
						BGl_proc2047z00zzinitflow_walkz00, BgL_arg1688z00_1657,
						BgL_arg1692z00_1658), BUNSPEC);
		}}

	}



/* &lambda1706 */
	BgL_sfunz00_bglt BGl_z62lambda1706z62zzinitflow_walkz00(obj_t BgL_envz00_2389,
		obj_t BgL_o1127z00_2390)
	{
		{	/* Initflow/walk.scm 42 */
			{	/* Initflow/walk.scm 42 */
				long BgL_arg1707z00_2510;

				{	/* Initflow/walk.scm 42 */
					obj_t BgL_arg1708z00_2511;

					{	/* Initflow/walk.scm 42 */
						obj_t BgL_arg1711z00_2512;

						{	/* Initflow/walk.scm 42 */
							long BgL_arg1816z00_2513;

							{	/* Initflow/walk.scm 42 */
								long BgL_arg1817z00_2514;

								{	/* Initflow/walk.scm 42 */
									long BgL_res2006z00_2515;

									BgL_res2006z00_2515 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_sfunz00_bglt) BgL_o1127z00_2390)));
									BgL_arg1817z00_2514 = BgL_res2006z00_2515;
								}
								BgL_arg1816z00_2513 = (BgL_arg1817z00_2514 - OBJECT_TYPE);
							}
							BgL_arg1711z00_2512 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_2513);
						}
						BgL_arg1708z00_2511 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1711z00_2512);
					}
					{	/* Initflow/walk.scm 42 */
						long BgL_res2008z00_2516;

						{	/* Initflow/walk.scm 42 */
							obj_t BgL_tmpz00_2970;

							BgL_tmpz00_2970 = ((obj_t) BgL_arg1708z00_2511);
							BgL_res2008z00_2516 = BGL_CLASS_INDEX(BgL_tmpz00_2970);
						}
						BgL_arg1707z00_2510 = BgL_res2008z00_2516;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_sfunz00_bglt) BgL_o1127z00_2390)), BgL_arg1707z00_2510);
			}
			{	/* Initflow/walk.scm 42 */
				BgL_objectz00_bglt BgL_tmpz00_2976;

				BgL_tmpz00_2976 =
					((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_o1127z00_2390));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2976, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_o1127z00_2390));
			return ((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_o1127z00_2390));
		}

	}



/* &<@anonymous:1705> */
	obj_t BGl_z62zc3z04anonymousza31705ze3ze5zzinitflow_walkz00(obj_t
		BgL_envz00_2391, obj_t BgL_new1126z00_2392)
	{
		{	/* Initflow/walk.scm 42 */
			{
				BgL_sfunz00_bglt BgL_auxz00_2984;

				((((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt)
									((BgL_sfunz00_bglt) BgL_new1126z00_2392))))->BgL_arityz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1126z00_2392))))->BgL_sidezd2effectzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1126z00_2392))))->BgL_predicatezd2ofzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1126z00_2392))))->BgL_stackzd2allocatorzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1126z00_2392))))->BgL_topzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1126z00_2392))))->BgL_thezd2closurezd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1126z00_2392))))->BgL_effectz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1126z00_2392))))->BgL_failsafez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1126z00_2392))))->BgL_argszd2noescapezd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1126z00_2392))))->BgL_propertyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1126z00_2392))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1126z00_2392))))->BgL_argszd2namezd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1126z00_2392))))->BgL_bodyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1126z00_2392))))->BgL_classz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1126z00_2392))))->BgL_dssslzd2keywordszd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1126z00_2392))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1126z00_2392))))->BgL_optionalsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1126z00_2392))))->BgL_keysz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1126z00_2392))))->BgL_thezd2closurezd2globalz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1126z00_2392))))->BgL_strengthz00) =
					((obj_t) CNST_TABLE_REF(((long) 5))), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1126z00_2392))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_2984 = ((BgL_sfunz00_bglt) BgL_new1126z00_2392);
				return ((obj_t) BgL_auxz00_2984);
			}
		}

	}



/* &lambda1697 */
	BgL_sfunz00_bglt BGl_z62lambda1697z62zzinitflow_walkz00(obj_t BgL_envz00_2393,
		obj_t BgL_o1123z00_2394)
	{
		{	/* Initflow/walk.scm 42 */
			{	/* Initflow/walk.scm 42 */
				BgL_sfunzf2iflowzf2_bglt BgL_wide1125z00_2519;

				BgL_wide1125z00_2519 =
					((BgL_sfunzf2iflowzf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_sfunzf2iflowzf2_bgl))));
				{	/* Initflow/walk.scm 42 */
					obj_t BgL_auxz00_3056;
					BgL_objectz00_bglt BgL_tmpz00_3052;

					BgL_auxz00_3056 = ((obj_t) BgL_wide1125z00_2519);
					BgL_tmpz00_3052 =
						((BgL_objectz00_bglt)
						((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_o1123z00_2394)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3052, BgL_auxz00_3056);
				}
				((BgL_objectz00_bglt)
					((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_o1123z00_2394)));
				{	/* Initflow/walk.scm 42 */
					long BgL_arg1704z00_2520;

					{	/* Initflow/walk.scm 42 */
						long BgL_res2005z00_2521;

						BgL_res2005z00_2521 =
							BGL_CLASS_INDEX(BGl_sfunzf2iflowzf2zzinitflow_walkz00);
						BgL_arg1704z00_2520 = BgL_res2005z00_2521;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_sfunz00_bglt)
								((BgL_sfunz00_bglt) BgL_o1123z00_2394))), BgL_arg1704z00_2520);
				}
				return
					((BgL_sfunz00_bglt)
					((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_o1123z00_2394)));
			}
		}

	}



/* &lambda1693 */
	BgL_sfunz00_bglt BGl_z62lambda1693z62zzinitflow_walkz00(obj_t BgL_envz00_2395,
		obj_t BgL_arity1102z00_2396, obj_t BgL_sidezd2effect1103zd2_2397,
		obj_t BgL_predicatezd2of1104zd2_2398,
		obj_t BgL_stackzd2allocator1105zd2_2399, obj_t BgL_topzf31106zf3_2400,
		obj_t BgL_thezd2closure1107zd2_2401, obj_t BgL_effect1108z00_2402,
		obj_t BgL_failsafe1109z00_2403, obj_t BgL_argszd2noescape1110zd2_2404,
		obj_t BgL_property1111z00_2405, obj_t BgL_args1112z00_2406,
		obj_t BgL_argszd2name1113zd2_2407, obj_t BgL_body1114z00_2408,
		obj_t BgL_class1115z00_2409, obj_t BgL_dssslzd2keywords1116zd2_2410,
		obj_t BgL_loc1117z00_2411, obj_t BgL_optionals1118z00_2412,
		obj_t BgL_keys1119z00_2413, obj_t BgL_thezd2closurezd2global1120z00_2414,
		obj_t BgL_strength1121z00_2415, obj_t BgL_stackable1122z00_2416)
	{
		{	/* Initflow/walk.scm 42 */
			{	/* Initflow/walk.scm 42 */
				long BgL_arity1102z00_2522;
				bool_t BgL_topzf31106zf3_2523;

				BgL_arity1102z00_2522 = (long) CINT(BgL_arity1102z00_2396);
				BgL_topzf31106zf3_2523 = CBOOL(BgL_topzf31106zf3_2400);
				{	/* Initflow/walk.scm 42 */
					BgL_sfunz00_bglt BgL_new1175z00_2525;

					{	/* Initflow/walk.scm 42 */
						BgL_sfunz00_bglt BgL_tmp1173z00_2526;
						BgL_sfunzf2iflowzf2_bglt BgL_wide1174z00_2527;

						{
							BgL_sfunz00_bglt BgL_auxz00_3072;

							{	/* Initflow/walk.scm 42 */
								BgL_sfunz00_bglt BgL_new1172z00_2528;

								BgL_new1172z00_2528 =
									((BgL_sfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_sfunz00_bgl))));
								{	/* Initflow/walk.scm 42 */
									long BgL_arg1696z00_2529;

									{	/* Initflow/walk.scm 42 */
										long BgL_res2003z00_2530;

										BgL_res2003z00_2530 =
											BGL_CLASS_INDEX(BGl_sfunz00zzast_varz00);
										BgL_arg1696z00_2529 = BgL_res2003z00_2530;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1172z00_2528),
										BgL_arg1696z00_2529);
								}
								{	/* Initflow/walk.scm 42 */
									BgL_objectz00_bglt BgL_tmpz00_3077;

									BgL_tmpz00_3077 = ((BgL_objectz00_bglt) BgL_new1172z00_2528);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3077, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1172z00_2528);
								BgL_auxz00_3072 = BgL_new1172z00_2528;
							}
							BgL_tmp1173z00_2526 = ((BgL_sfunz00_bglt) BgL_auxz00_3072);
						}
						BgL_wide1174z00_2527 =
							((BgL_sfunzf2iflowzf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_sfunzf2iflowzf2_bgl))));
						{	/* Initflow/walk.scm 42 */
							obj_t BgL_auxz00_3085;
							BgL_objectz00_bglt BgL_tmpz00_3083;

							BgL_auxz00_3085 = ((obj_t) BgL_wide1174z00_2527);
							BgL_tmpz00_3083 = ((BgL_objectz00_bglt) BgL_tmp1173z00_2526);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3083, BgL_auxz00_3085);
						}
						((BgL_objectz00_bglt) BgL_tmp1173z00_2526);
						{	/* Initflow/walk.scm 42 */
							long BgL_arg1695z00_2531;

							{	/* Initflow/walk.scm 42 */
								long BgL_res2004z00_2532;

								BgL_res2004z00_2532 =
									BGL_CLASS_INDEX(BGl_sfunzf2iflowzf2zzinitflow_walkz00);
								BgL_arg1695z00_2531 = BgL_res2004z00_2532;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1173z00_2526),
								BgL_arg1695z00_2531);
						}
						BgL_new1175z00_2525 = ((BgL_sfunz00_bglt) BgL_tmp1173z00_2526);
					}
					((((BgL_funz00_bglt) COBJECT(
									((BgL_funz00_bglt) BgL_new1175z00_2525)))->BgL_arityz00) =
						((long) BgL_arity1102z00_2522), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1175z00_2525)))->BgL_sidezd2effectzd2) =
						((obj_t) BgL_sidezd2effect1103zd2_2397), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1175z00_2525)))->BgL_predicatezd2ofzd2) =
						((obj_t) BgL_predicatezd2of1104zd2_2398), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1175z00_2525)))->BgL_stackzd2allocatorzd2) =
						((obj_t) BgL_stackzd2allocator1105zd2_2399), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1175z00_2525)))->BgL_topzf3zf3) =
						((bool_t) BgL_topzf31106zf3_2523), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1175z00_2525)))->BgL_thezd2closurezd2) =
						((obj_t) BgL_thezd2closure1107zd2_2401), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1175z00_2525)))->BgL_effectz00) =
						((obj_t) BgL_effect1108z00_2402), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1175z00_2525)))->BgL_failsafez00) =
						((obj_t) BgL_failsafe1109z00_2403), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1175z00_2525)))->BgL_argszd2noescapezd2) =
						((obj_t) BgL_argszd2noescape1110zd2_2404), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1175z00_2525)))->BgL_propertyz00) =
						((obj_t) BgL_property1111z00_2405), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1175z00_2525)))->BgL_argsz00) =
						((obj_t) BgL_args1112z00_2406), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1175z00_2525)))->BgL_argszd2namezd2) =
						((obj_t) BgL_argszd2name1113zd2_2407), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1175z00_2525)))->BgL_bodyz00) =
						((obj_t) BgL_body1114z00_2408), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1175z00_2525)))->BgL_classz00) =
						((obj_t) BgL_class1115z00_2409), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1175z00_2525)))->BgL_dssslzd2keywordszd2) =
						((obj_t) BgL_dssslzd2keywords1116zd2_2410), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1175z00_2525)))->BgL_locz00) =
						((obj_t) BgL_loc1117z00_2411), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1175z00_2525)))->BgL_optionalsz00) =
						((obj_t) BgL_optionals1118z00_2412), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1175z00_2525)))->BgL_keysz00) =
						((obj_t) BgL_keys1119z00_2413), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1175z00_2525)))->BgL_thezd2closurezd2globalz00) =
						((obj_t) BgL_thezd2closurezd2global1120z00_2414), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1175z00_2525)))->BgL_strengthz00) =
						((obj_t) ((obj_t) BgL_strength1121z00_2415)), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1175z00_2525)))->BgL_stackablez00) =
						((obj_t) BgL_stackable1122z00_2416), BUNSPEC);
					return BgL_new1175z00_2525;
				}
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzinitflow_walkz00()
	{
		{	/* Initflow/walk.scm 27 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_initflowzd2nodezd2envz00zzinitflow_walkz00,
				BGl_proc2051z00zzinitflow_walkz00, BGl_nodez00zzast_nodez00,
				BGl_string2052z00zzinitflow_walkz00);
		}

	}



/* &initflow-node1331 */
	obj_t BGl_z62initflowzd2node1331zb0zzinitflow_walkz00(obj_t BgL_envz00_2418,
		obj_t BgL_nodez00_2419, obj_t BgL_ez00_2420)
	{
		{	/* Initflow/walk.scm 93 */
			return BNIL;
		}

	}



/* initflow-node */
	obj_t BGl_initflowzd2nodezd2zzinitflow_walkz00(BgL_nodez00_bglt
		BgL_nodez00_83, bool_t BgL_ez00_84)
	{
		{	/* Initflow/walk.scm 93 */
			{	/* Initflow/walk.scm 93 */
				obj_t BgL_method1332z00_1711;

				{	/* Initflow/walk.scm 93 */
					obj_t BgL_res2019z00_2319;

					{	/* Initflow/walk.scm 93 */
						long BgL_objzd2classzd2numz00_2284;

						{	/* Initflow/walk.scm 93 */
							long BgL_res2009z00_2287;

							BgL_res2009z00_2287 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_83));
							BgL_objzd2classzd2numz00_2284 = BgL_res2009z00_2287;
						}
						{	/* Initflow/walk.scm 93 */
							obj_t BgL_arg1813z00_2285;

							BgL_arg1813z00_2285 =
								PROCEDURE_REF(BGl_initflowzd2nodezd2envz00zzinitflow_walkz00,
								(int) (((long) 1)));
							{	/* Initflow/walk.scm 93 */
								int BgL_offsetz00_2289;

								BgL_offsetz00_2289 = (int) (BgL_objzd2classzd2numz00_2284);
								{	/* Initflow/walk.scm 93 */
									long BgL_offsetz00_2290;

									BgL_offsetz00_2290 =
										((long) (BgL_offsetz00_2289) - OBJECT_TYPE);
									{	/* Initflow/walk.scm 93 */
										long BgL_modz00_2291;

										BgL_modz00_2291 =
											(BgL_offsetz00_2290 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Initflow/walk.scm 93 */
											long BgL_restz00_2293;

											BgL_restz00_2293 =
												(BgL_offsetz00_2290 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Initflow/walk.scm 93 */

												{	/* Initflow/walk.scm 93 */
													obj_t BgL_bucketz00_2295;

													BgL_bucketz00_2295 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2285), BgL_modz00_2291);
													BgL_res2019z00_2319 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2295), BgL_restz00_2293);
					}}}}}}}}
					BgL_method1332z00_1711 = BgL_res2019z00_2319;
				}
				return
					PROCEDURE_ENTRY(BgL_method1332z00_1711) (BgL_method1332z00_1711,
					((obj_t) BgL_nodez00_83), BBOOL(BgL_ez00_84), BEOA);
			}
		}

	}



/* &initflow-node */
	obj_t BGl_z62initflowzd2nodezb0zzinitflow_walkz00(obj_t BgL_envz00_2421,
		obj_t BgL_nodez00_2422, obj_t BgL_ez00_2423)
	{
		{	/* Initflow/walk.scm 93 */
			return
				BGl_initflowzd2nodezd2zzinitflow_walkz00(
				((BgL_nodez00_bglt) BgL_nodez00_2422), CBOOL(BgL_ez00_2423));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzinitflow_walkz00()
	{
		{	/* Initflow/walk.scm 27 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_initflowzd2nodezd2envz00zzinitflow_walkz00,
				BGl_varz00zzast_nodez00, BGl_proc2053z00zzinitflow_walkz00,
				BGl_string2054z00zzinitflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_initflowzd2nodezd2envz00zzinitflow_walkz00,
				BGl_sequencez00zzast_nodez00, BGl_proc2055z00zzinitflow_walkz00,
				BGl_string2054z00zzinitflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_initflowzd2nodezd2envz00zzinitflow_walkz00,
				BGl_syncz00zzast_nodez00, BGl_proc2056z00zzinitflow_walkz00,
				BGl_string2054z00zzinitflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_initflowzd2nodezd2envz00zzinitflow_walkz00,
				BGl_appz00zzast_nodez00, BGl_proc2057z00zzinitflow_walkz00,
				BGl_string2054z00zzinitflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_initflowzd2nodezd2envz00zzinitflow_walkz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc2058z00zzinitflow_walkz00,
				BGl_string2054z00zzinitflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_initflowzd2nodezd2envz00zzinitflow_walkz00,
				BGl_funcallz00zzast_nodez00, BGl_proc2059z00zzinitflow_walkz00,
				BGl_string2054z00zzinitflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_initflowzd2nodezd2envz00zzinitflow_walkz00,
				BGl_externz00zzast_nodez00, BGl_proc2060z00zzinitflow_walkz00,
				BGl_string2054z00zzinitflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_initflowzd2nodezd2envz00zzinitflow_walkz00,
				BGl_setqz00zzast_nodez00, BGl_proc2061z00zzinitflow_walkz00,
				BGl_string2054z00zzinitflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_initflowzd2nodezd2envz00zzinitflow_walkz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc2062z00zzinitflow_walkz00,
				BGl_string2054z00zzinitflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_initflowzd2nodezd2envz00zzinitflow_walkz00,
				BGl_failz00zzast_nodez00, BGl_proc2063z00zzinitflow_walkz00,
				BGl_string2054z00zzinitflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_initflowzd2nodezd2envz00zzinitflow_walkz00,
				BGl_switchz00zzast_nodez00, BGl_proc2064z00zzinitflow_walkz00,
				BGl_string2054z00zzinitflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_initflowzd2nodezd2envz00zzinitflow_walkz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc2065z00zzinitflow_walkz00,
				BGl_string2054z00zzinitflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_initflowzd2nodezd2envz00zzinitflow_walkz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc2066z00zzinitflow_walkz00,
				BGl_string2054z00zzinitflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_initflowzd2nodezd2envz00zzinitflow_walkz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc2067z00zzinitflow_walkz00,
				BGl_string2054z00zzinitflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_initflowzd2nodezd2envz00zzinitflow_walkz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc2068z00zzinitflow_walkz00,
				BGl_string2054z00zzinitflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_initflowzd2nodezd2envz00zzinitflow_walkz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc2069z00zzinitflow_walkz00,
				BGl_string2054z00zzinitflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_initflowzd2nodezd2envz00zzinitflow_walkz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc2070z00zzinitflow_walkz00,
				BGl_string2054z00zzinitflow_walkz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_initflowzd2nodezd2envz00zzinitflow_walkz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc2071z00zzinitflow_walkz00,
				BGl_string2054z00zzinitflow_walkz00);
		}

	}



/* &initflow-node-jump-e1369 */
	obj_t BGl_z62initflowzd2nodezd2jumpzd2e1369zb0zzinitflow_walkz00(obj_t
		BgL_envz00_2442, obj_t BgL_nodez00_2443, obj_t BgL_ez00_2444)
	{
		{	/* Initflow/walk.scm 305 */
			{	/* Initflow/walk.scm 306 */
				obj_t BgL_res2078z00_2541;

				{	/* Initflow/walk.scm 307 */
					obj_t BgL_arg1911z00_2536;

					{	/* Initflow/walk.scm 307 */
						BgL_nodez00_bglt BgL_arg1912z00_2537;
						BgL_nodez00_bglt BgL_arg1913z00_2538;

						BgL_arg1912z00_2537 =
							(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2443)))->
							BgL_exitz00);
						BgL_arg1913z00_2538 =
							(((BgL_jumpzd2exzd2itz00_bglt)
								COBJECT(((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2443)))->
							BgL_valuez00);
						{	/* Initflow/walk.scm 307 */
							obj_t BgL_list1914z00_2539;

							{	/* Initflow/walk.scm 307 */
								obj_t BgL_arg1915z00_2540;

								BgL_arg1915z00_2540 =
									MAKE_YOUNG_PAIR(((obj_t) BgL_arg1913z00_2538), BNIL);
								BgL_list1914z00_2539 =
									MAKE_YOUNG_PAIR(
									((obj_t) BgL_arg1912z00_2537), BgL_arg1915z00_2540);
							}
							BgL_arg1911z00_2536 = BgL_list1914z00_2539;
						}
					}
					BgL_res2078z00_2541 =
						BGl_initflowzd2nodeza2z70zzinitflow_walkz00(BgL_arg1911z00_2536,
						BgL_ez00_2444);
				}
				return BgL_res2078z00_2541;
			}
		}

	}



/* &initflow-node-set-ex1367 */
	obj_t BGl_z62initflowzd2nodezd2setzd2ex1367zb0zzinitflow_walkz00(obj_t
		BgL_envz00_2445, obj_t BgL_nodez00_2446, obj_t BgL_ez00_2447)
	{
		{	/* Initflow/walk.scm 298 */
			return
				BGl_initflowzd2nodezd2zzinitflow_walkz00(
				(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2446)))->BgL_bodyz00),
				CBOOL(BgL_ez00_2447));
		}

	}



/* &initflow-node-let-va1365 */
	obj_t BGl_z62initflowzd2nodezd2letzd2va1365zb0zzinitflow_walkz00(obj_t
		BgL_envz00_2448, obj_t BgL_nodez00_2449, obj_t BgL_ez00_2450)
	{
		{	/* Initflow/walk.scm 289 */
			{	/* Initflow/walk.scm 290 */
				obj_t BgL_res2079z00_2558;

				{	/* Initflow/walk.scm 291 */
					obj_t BgL_isz00_2544;

					{	/* Initflow/walk.scm 291 */
						obj_t BgL_l1324z00_2545;

						BgL_l1324z00_2545 =
							(((BgL_letzd2varzd2_bglt) COBJECT(
									((BgL_letzd2varzd2_bglt) BgL_nodez00_2449)))->
							BgL_bindingsz00);
						if (NULLP(BgL_l1324z00_2545))
							{	/* Initflow/walk.scm 291 */
								BgL_isz00_2544 = BNIL;
							}
						else
							{	/* Initflow/walk.scm 291 */
								obj_t BgL_head1326z00_2546;

								{	/* Initflow/walk.scm 291 */
									obj_t BgL_res2034z00_2547;

									BgL_res2034z00_2547 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									BgL_head1326z00_2546 = BgL_res2034z00_2547;
								}
								{
									obj_t BgL_l1324z00_2549;
									obj_t BgL_tail1327z00_2550;

									BgL_l1324z00_2549 = BgL_l1324z00_2545;
									BgL_tail1327z00_2550 = BgL_head1326z00_2546;
								BgL_zc3z04anonymousza31905ze3z87_2548:
									if (NULLP(BgL_l1324z00_2549))
										{	/* Initflow/walk.scm 291 */
											BgL_isz00_2544 = CDR(BgL_head1326z00_2546);
										}
									else
										{	/* Initflow/walk.scm 291 */
											obj_t BgL_newtail1328z00_2551;

											{	/* Initflow/walk.scm 291 */
												obj_t BgL_arg1908z00_2552;

												{	/* Initflow/walk.scm 291 */
													obj_t BgL_bz00_2553;

													BgL_bz00_2553 = CAR(((obj_t) BgL_l1324z00_2549));
													{	/* Initflow/walk.scm 291 */
														obj_t BgL_arg1909z00_2554;

														BgL_arg1909z00_2554 = CDR(((obj_t) BgL_bz00_2553));
														BgL_arg1908z00_2552 =
															BGl_initflowzd2nodezd2zzinitflow_walkz00(
															((BgL_nodez00_bglt) BgL_arg1909z00_2554),
															CBOOL(BgL_ez00_2450));
													}
												}
												{	/* Initflow/walk.scm 291 */
													obj_t BgL_res2036z00_2555;

													BgL_res2036z00_2555 =
														MAKE_YOUNG_PAIR(BgL_arg1908z00_2552, BNIL);
													BgL_newtail1328z00_2551 = BgL_res2036z00_2555;
												}
											}
											SET_CDR(BgL_tail1327z00_2550, BgL_newtail1328z00_2551);
											{	/* Initflow/walk.scm 291 */
												obj_t BgL_arg1907z00_2556;

												BgL_arg1907z00_2556 = CDR(((obj_t) BgL_l1324z00_2549));
												{
													obj_t BgL_tail1327z00_3223;
													obj_t BgL_l1324z00_3222;

													BgL_l1324z00_3222 = BgL_arg1907z00_2556;
													BgL_tail1327z00_3223 = BgL_newtail1328z00_2551;
													BgL_tail1327z00_2550 = BgL_tail1327z00_3223;
													BgL_l1324z00_2549 = BgL_l1324z00_3222;
													goto BgL_zc3z04anonymousza31905ze3z87_2548;
												}
											}
										}
								}
							}
					}
					{	/* Initflow/walk.scm 291 */
						obj_t BgL_lubz00_2557;

						BgL_lubz00_2557 =
							BGl_lubz00zzinitflow_walkz00(BgL_isz00_2544, BgL_ez00_2450);
						{	/* Initflow/walk.scm 292 */

							BgL_res2079z00_2558 =
								BGl_appendzd221011zd2zzinitflow_walkz00(BgL_lubz00_2557,
								BGl_initflowzd2nodezd2zzinitflow_walkz00(
									(((BgL_letzd2varzd2_bglt) COBJECT(
												((BgL_letzd2varzd2_bglt) BgL_nodez00_2449)))->
										BgL_bodyz00), CBOOL(BgL_ez00_2450)));
						}
					}
				}
				return BgL_res2079z00_2558;
			}
		}

	}



/* &initflow-node-let-fu1363 */
	obj_t BGl_z62initflowzd2nodezd2letzd2fu1363zb0zzinitflow_walkz00(obj_t
		BgL_envz00_2451, obj_t BgL_nodez00_2452, obj_t BgL_ez00_2453)
	{
		{	/* Initflow/walk.scm 282 */
			return
				BGl_initflowzd2nodezd2zzinitflow_walkz00(
				(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2452)))->BgL_bodyz00),
				CBOOL(BgL_ez00_2453));
		}

	}



/* &initflow-node-box-se1361 */
	obj_t BGl_z62initflowzd2nodezd2boxzd2se1361zb0zzinitflow_walkz00(obj_t
		BgL_envz00_2454, obj_t BgL_nodez00_2455, obj_t BgL_ez00_2456)
	{
		{	/* Initflow/walk.scm 275 */
			return
				BGl_initflowzd2nodezd2zzinitflow_walkz00(
				(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2455)))->BgL_valuez00),
				CBOOL(BgL_ez00_2456));
		}

	}



/* &initflow-node-box-re1359 */
	obj_t BGl_z62initflowzd2nodezd2boxzd2re1359zb0zzinitflow_walkz00(obj_t
		BgL_envz00_2457, obj_t BgL_nodez00_2458, obj_t BgL_ez00_2459)
	{
		{	/* Initflow/walk.scm 268 */
			{	/* Initflow/walk.scm 270 */
				BgL_varz00_bglt BgL_arg1897z00_2562;

				BgL_arg1897z00_2562 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_nodez00_2458)))->BgL_varz00);
				return
					BGl_initflowzd2nodezd2zzinitflow_walkz00(
					((BgL_nodez00_bglt) BgL_arg1897z00_2562), CBOOL(BgL_ez00_2459));
			}
		}

	}



/* &initflow-node-make-b1357 */
	obj_t BGl_z62initflowzd2nodezd2makezd2b1357zb0zzinitflow_walkz00(obj_t
		BgL_envz00_2460, obj_t BgL_nodez00_2461, obj_t BgL_ez00_2462)
	{
		{	/* Initflow/walk.scm 261 */
			return
				BGl_initflowzd2nodezd2zzinitflow_walkz00(
				(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_2461)))->BgL_valuez00),
				CBOOL(BgL_ez00_2462));
		}

	}



/* &initflow-node-switch1355 */
	obj_t BGl_z62initflowzd2nodezd2switch1355z62zzinitflow_walkz00(obj_t
		BgL_envz00_2463, obj_t BgL_nodez00_2464, obj_t BgL_ez00_2465)
	{
		{	/* Initflow/walk.scm 251 */
			{	/* Initflow/walk.scm 252 */
				obj_t BgL_res2080z00_2579;

				{	/* Initflow/walk.scm 253 */
					obj_t BgL_i0z00_2565;

					BgL_i0z00_2565 =
						BGl_initflowzd2nodezd2zzinitflow_walkz00(
						(((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt) BgL_nodez00_2464)))->BgL_testz00),
						CBOOL(BgL_ez00_2465));
					{	/* Initflow/walk.scm 254 */
						obj_t BgL_isz00_2566;

						{	/* Initflow/walk.scm 254 */
							obj_t BgL_l1319z00_2567;

							BgL_l1319z00_2567 =
								(((BgL_switchz00_bglt) COBJECT(
										((BgL_switchz00_bglt) BgL_nodez00_2464)))->BgL_clausesz00);
							if (NULLP(BgL_l1319z00_2567))
								{	/* Initflow/walk.scm 254 */
									BgL_isz00_2566 = BNIL;
								}
							else
								{	/* Initflow/walk.scm 254 */
									obj_t BgL_head1321z00_2568;

									{	/* Initflow/walk.scm 254 */
										obj_t BgL_res2030z00_2569;

										BgL_res2030z00_2569 = MAKE_YOUNG_PAIR(BNIL, BNIL);
										BgL_head1321z00_2568 = BgL_res2030z00_2569;
									}
									{
										obj_t BgL_l1319z00_2571;
										obj_t BgL_tail1322z00_2572;

										BgL_l1319z00_2571 = BgL_l1319z00_2567;
										BgL_tail1322z00_2572 = BgL_head1321z00_2568;
									BgL_zc3z04anonymousza31889ze3z87_2570:
										if (NULLP(BgL_l1319z00_2571))
											{	/* Initflow/walk.scm 254 */
												BgL_isz00_2566 = CDR(BgL_head1321z00_2568);
											}
										else
											{	/* Initflow/walk.scm 254 */
												obj_t BgL_newtail1323z00_2573;

												{	/* Initflow/walk.scm 254 */
													obj_t BgL_arg1892z00_2574;

													{	/* Initflow/walk.scm 254 */
														obj_t BgL_cz00_2575;

														BgL_cz00_2575 = CAR(((obj_t) BgL_l1319z00_2571));
														{	/* Initflow/walk.scm 254 */
															obj_t BgL_arg1893z00_2576;

															BgL_arg1893z00_2576 =
																CDR(((obj_t) BgL_cz00_2575));
															BgL_arg1892z00_2574 =
																BGl_initflowzd2nodezd2zzinitflow_walkz00(
																((BgL_nodez00_bglt) BgL_arg1893z00_2576),
																((bool_t) 0));
														}
													}
													{	/* Initflow/walk.scm 254 */
														obj_t BgL_res2032z00_2577;

														BgL_res2032z00_2577 =
															MAKE_YOUNG_PAIR(BgL_arg1892z00_2574, BNIL);
														BgL_newtail1323z00_2573 = BgL_res2032z00_2577;
													}
												}
												SET_CDR(BgL_tail1322z00_2572, BgL_newtail1323z00_2573);
												{	/* Initflow/walk.scm 254 */
													obj_t BgL_arg1891z00_2578;

													BgL_arg1891z00_2578 =
														CDR(((obj_t) BgL_l1319z00_2571));
													{
														obj_t BgL_tail1322z00_3270;
														obj_t BgL_l1319z00_3269;

														BgL_l1319z00_3269 = BgL_arg1891z00_2578;
														BgL_tail1322z00_3270 = BgL_newtail1323z00_2573;
														BgL_tail1322z00_2572 = BgL_tail1322z00_3270;
														BgL_l1319z00_2571 = BgL_l1319z00_3269;
														goto BgL_zc3z04anonymousza31889ze3z87_2570;
													}
												}
											}
									}
								}
						}
						BgL_res2080z00_2579 =
							BGl_appendzd221011zd2zzinitflow_walkz00
							(BGl_lubz00zzinitflow_walkz00(BgL_isz00_2566, BgL_ez00_2465),
							BgL_i0z00_2565);
					}
				}
				return BgL_res2080z00_2579;
			}
		}

	}



/* &initflow-node-fail1353 */
	obj_t BGl_z62initflowzd2nodezd2fail1353z62zzinitflow_walkz00(obj_t
		BgL_envz00_2466, obj_t BgL_nodez00_2467, obj_t BgL_ez00_2468)
	{
		{	/* Initflow/walk.scm 244 */
			{	/* Initflow/walk.scm 245 */
				obj_t BgL_res2081z00_2588;

				{	/* Initflow/walk.scm 246 */
					obj_t BgL_arg1879z00_2581;

					{	/* Initflow/walk.scm 246 */
						BgL_nodez00_bglt BgL_arg1881z00_2582;
						BgL_nodez00_bglt BgL_arg1882z00_2583;
						BgL_nodez00_bglt BgL_arg1883z00_2584;

						BgL_arg1881z00_2582 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_2467)))->BgL_procz00);
						BgL_arg1882z00_2583 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_2467)))->BgL_msgz00);
						BgL_arg1883z00_2584 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_2467)))->BgL_objz00);
						{	/* Initflow/walk.scm 246 */
							obj_t BgL_list1884z00_2585;

							{	/* Initflow/walk.scm 246 */
								obj_t BgL_arg1885z00_2586;

								{	/* Initflow/walk.scm 246 */
									obj_t BgL_arg1886z00_2587;

									BgL_arg1886z00_2587 =
										MAKE_YOUNG_PAIR(((obj_t) BgL_arg1883z00_2584), BNIL);
									BgL_arg1885z00_2586 =
										MAKE_YOUNG_PAIR(
										((obj_t) BgL_arg1882z00_2583), BgL_arg1886z00_2587);
								}
								BgL_list1884z00_2585 =
									MAKE_YOUNG_PAIR(
									((obj_t) BgL_arg1881z00_2582), BgL_arg1885z00_2586);
							}
							BgL_arg1879z00_2581 = BgL_list1884z00_2585;
						}
					}
					BgL_res2081z00_2588 =
						BGl_initflowzd2nodeza2z70zzinitflow_walkz00(BgL_arg1879z00_2581,
						BgL_ez00_2468);
				}
				return BgL_res2081z00_2588;
			}
		}

	}



/* &initflow-node-condit1351 */
	obj_t BGl_z62initflowzd2nodezd2condit1351z62zzinitflow_walkz00(obj_t
		BgL_envz00_2469, obj_t BgL_nodez00_2470, obj_t BgL_ez00_2471)
	{
		{	/* Initflow/walk.scm 232 */
			{	/* Initflow/walk.scm 233 */
				obj_t BgL_res2082z00_2597;

				{	/* Initflow/walk.scm 234 */
					obj_t BgL_i0z00_2590;

					BgL_i0z00_2590 =
						BGl_initflowzd2nodezd2zzinitflow_walkz00(
						(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_2470)))->BgL_testz00),
						CBOOL(BgL_ez00_2471));
					{	/* Initflow/walk.scm 236 */
						obj_t BgL_i1z00_2591;
						obj_t BgL_i2z00_2592;

						BgL_i1z00_2591 =
							BGl_initflowzd2nodezd2zzinitflow_walkz00(
							(((BgL_conditionalz00_bglt) COBJECT(
										((BgL_conditionalz00_bglt) BgL_nodez00_2470)))->
								BgL_truez00), ((bool_t) 0));
						BgL_i2z00_2592 =
							BGl_initflowzd2nodezd2zzinitflow_walkz00(((
									(BgL_conditionalz00_bglt) COBJECT(((BgL_conditionalz00_bglt)
											BgL_nodez00_2470)))->BgL_falsez00), ((bool_t) 0));
						{	/* Initflow/walk.scm 239 */
							obj_t BgL_arg1871z00_2593;

							{	/* Initflow/walk.scm 239 */
								obj_t BgL_arg1872z00_2594;

								{	/* Initflow/walk.scm 239 */
									obj_t BgL_list1873z00_2595;

									{	/* Initflow/walk.scm 239 */
										obj_t BgL_arg1874z00_2596;

										BgL_arg1874z00_2596 = MAKE_YOUNG_PAIR(BgL_i2z00_2592, BNIL);
										BgL_list1873z00_2595 =
											MAKE_YOUNG_PAIR(BgL_i1z00_2591, BgL_arg1874z00_2596);
									}
									BgL_arg1872z00_2594 = BgL_list1873z00_2595;
								}
								BgL_arg1871z00_2593 =
									BGl_lubz00zzinitflow_walkz00(BgL_arg1872z00_2594,
									BgL_ez00_2471);
							}
							BgL_res2082z00_2597 =
								BGl_appendzd221011zd2zzinitflow_walkz00(BgL_arg1871z00_2593,
								BgL_i0z00_2590);
						}
					}
				}
				return BgL_res2082z00_2597;
			}
		}

	}



/* &initflow-node-setq1349 */
	obj_t BGl_z62initflowzd2nodezd2setq1349z62zzinitflow_walkz00(obj_t
		BgL_envz00_2472, obj_t BgL_nodez00_2473, obj_t BgL_ez00_2474)
	{
		{	/* Initflow/walk.scm 199 */
			{	/* Initflow/walk.scm 201 */
				obj_t BgL_isz00_2599;
				BgL_variablez00_bglt BgL_vz00_2600;

				BgL_isz00_2599 =
					BGl_initflowzd2nodezd2zzinitflow_walkz00(
					(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2473)))->BgL_valuez00),
					CBOOL(BgL_ez00_2474));
				BgL_vz00_2600 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_setqz00_bglt) COBJECT(
										((BgL_setqz00_bglt) BgL_nodez00_2473)))->BgL_varz00)))->
					BgL_variablez00);
				{	/* Initflow/walk.scm 203 */
					bool_t BgL_test2167z00_3307;

					{	/* Initflow/walk.scm 203 */
						bool_t BgL_test2168z00_3308;

						{	/* Initflow/walk.scm 203 */
							bool_t BgL_res2026z00_2601;

							BgL_res2026z00_2601 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_vz00_2600), BGl_globalz00zzast_varz00);
							BgL_test2168z00_3308 = BgL_res2026z00_2601;
						}
						if (BgL_test2168z00_3308)
							{	/* Initflow/walk.scm 203 */
								if (
									((((BgL_globalz00_bglt) COBJECT(
													((BgL_globalz00_bglt) BgL_vz00_2600)))->
											BgL_initz00) == BUNSPEC))
									{	/* Initflow/walk.scm 205 */
										obj_t BgL_arg1865z00_2602;

										BgL_arg1865z00_2602 =
											(((BgL_globalz00_bglt) COBJECT(
													((BgL_globalz00_bglt) BgL_vz00_2600)))->
											BgL_modulez00);
										BgL_test2167z00_3307 =
											(BgL_arg1865z00_2602 ==
											BGl_za2moduleza2z00zzmodule_modulez00);
									}
								else
									{	/* Initflow/walk.scm 204 */
										BgL_test2167z00_3307 = ((bool_t) 0);
									}
							}
						else
							{	/* Initflow/walk.scm 203 */
								BgL_test2167z00_3307 = ((bool_t) 0);
							}
					}
					if (BgL_test2167z00_3307)
						{	/* Initflow/walk.scm 203 */
							if (CBOOL(BgL_ez00_2474))
								{	/* Initflow/walk.scm 206 */
									((((BgL_globalz00_bglt) COBJECT(
													((BgL_globalz00_bglt) BgL_vz00_2600)))->BgL_initz00) =
										((obj_t) BTRUE), BUNSPEC);
									return BNIL;
								}
							else
								{	/* Initflow/walk.scm 206 */
									return
										MAKE_YOUNG_PAIR(((obj_t) BgL_vz00_2600), BgL_isz00_2599);
								}
						}
					else
						{	/* Initflow/walk.scm 203 */
							return BgL_isz00_2599;
						}
				}
			}
		}

	}



/* &initflow-node-extern1347 */
	obj_t BGl_z62initflowzd2nodezd2extern1347z62zzinitflow_walkz00(obj_t
		BgL_envz00_2475, obj_t BgL_nodez00_2476, obj_t BgL_ez00_2477)
	{
		{	/* Initflow/walk.scm 192 */
			{	/* Initflow/walk.scm 193 */
				obj_t BgL_res2083z00_2604;

				BgL_res2083z00_2604 =
					BGl_initflowzd2nodeza2z70zzinitflow_walkz00(
					(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_nodez00_2476)))->BgL_exprza2za2),
					BgL_ez00_2477);
				return BgL_res2083z00_2604;
			}
		}

	}



/* &initflow-node-funcal1345 */
	obj_t BGl_z62initflowzd2nodezd2funcal1345z62zzinitflow_walkz00(obj_t
		BgL_envz00_2478, obj_t BgL_nodez00_2479, obj_t BgL_ez00_2480)
	{
		{	/* Initflow/walk.scm 185 */
			{	/* Initflow/walk.scm 186 */
				obj_t BgL_res2084z00_2609;

				{	/* Initflow/walk.scm 187 */
					obj_t BgL_arg1853z00_2606;

					{	/* Initflow/walk.scm 187 */
						BgL_nodez00_bglt BgL_arg1855z00_2607;
						obj_t BgL_arg1856z00_2608;

						BgL_arg1855z00_2607 =
							(((BgL_funcallz00_bglt) COBJECT(
									((BgL_funcallz00_bglt) BgL_nodez00_2479)))->BgL_funz00);
						BgL_arg1856z00_2608 =
							(((BgL_funcallz00_bglt) COBJECT(
									((BgL_funcallz00_bglt) BgL_nodez00_2479)))->BgL_argsz00);
						BgL_arg1853z00_2606 =
							MAKE_YOUNG_PAIR(
							((obj_t) BgL_arg1855z00_2607), BgL_arg1856z00_2608);
					}
					BgL_res2084z00_2609 =
						BGl_initflowzd2nodeza2z70zzinitflow_walkz00(BgL_arg1853z00_2606,
						BgL_ez00_2480);
				}
				return BgL_res2084z00_2609;
			}
		}

	}



/* &initflow-node-app-ly1343 */
	obj_t BGl_z62initflowzd2nodezd2appzd2ly1343zb0zzinitflow_walkz00(obj_t
		BgL_envz00_2481, obj_t BgL_nodez00_2482, obj_t BgL_ez00_2483)
	{
		{	/* Initflow/walk.scm 178 */
			{	/* Initflow/walk.scm 179 */
				obj_t BgL_res2085z00_2616;

				{	/* Initflow/walk.scm 180 */
					obj_t BgL_arg1847z00_2611;

					{	/* Initflow/walk.scm 180 */
						BgL_nodez00_bglt BgL_arg1848z00_2612;
						BgL_nodez00_bglt BgL_arg1850z00_2613;

						BgL_arg1848z00_2612 =
							(((BgL_appzd2lyzd2_bglt) COBJECT(
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_2482)))->BgL_funz00);
						BgL_arg1850z00_2613 =
							(((BgL_appzd2lyzd2_bglt) COBJECT(
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_2482)))->BgL_argz00);
						{	/* Initflow/walk.scm 180 */
							obj_t BgL_list1851z00_2614;

							{	/* Initflow/walk.scm 180 */
								obj_t BgL_arg1852z00_2615;

								BgL_arg1852z00_2615 =
									MAKE_YOUNG_PAIR(((obj_t) BgL_arg1850z00_2613), BNIL);
								BgL_list1851z00_2614 =
									MAKE_YOUNG_PAIR(
									((obj_t) BgL_arg1848z00_2612), BgL_arg1852z00_2615);
							}
							BgL_arg1847z00_2611 = BgL_list1851z00_2614;
						}
					}
					BgL_res2085z00_2616 =
						BGl_initflowzd2nodeza2z70zzinitflow_walkz00(BgL_arg1847z00_2611,
						BgL_ez00_2483);
				}
				return BgL_res2085z00_2616;
			}
		}

	}



/* &initflow-node-app1341 */
	obj_t BGl_z62initflowzd2nodezd2app1341z62zzinitflow_walkz00(obj_t
		BgL_envz00_2484, obj_t BgL_nodez00_2485, obj_t BgL_ez00_2486)
	{
		{	/* Initflow/walk.scm 164 */
			{	/* Initflow/walk.scm 166 */
				BgL_variablez00_bglt BgL_vz00_2618;

				BgL_vz00_2618 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt) BgL_nodez00_2485)))->BgL_funz00)))->
					BgL_variablez00);
				{	/* Initflow/walk.scm 166 */
					BgL_valuez00_bglt BgL_fz00_2619;

					BgL_fz00_2619 =
						(((BgL_variablez00_bglt) COBJECT(BgL_vz00_2618))->BgL_valuez00);
					{	/* Initflow/walk.scm 167 */

						{	/* Initflow/walk.scm 168 */
							bool_t BgL_test2171z00_3347;

							{	/* Initflow/walk.scm 168 */
								bool_t BgL_test2172z00_3348;

								{	/* Initflow/walk.scm 168 */
									bool_t BgL_res2023z00_2620;

									BgL_res2023z00_2620 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_fz00_2619), BGl_sfunz00zzast_varz00);
									BgL_test2172z00_3348 = BgL_res2023z00_2620;
								}
								if (BgL_test2172z00_3348)
									{	/* Initflow/walk.scm 168 */
										BgL_test2171z00_3347 =
											CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
											(CNST_TABLE_REF(((long) 6)),
												(((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
																BgL_fz00_2619)))->BgL_propertyz00)));
									}
								else
									{	/* Initflow/walk.scm 168 */
										BgL_test2171z00_3347 = ((bool_t) 0);
									}
							}
							if (BgL_test2171z00_3347)
								{	/* Initflow/walk.scm 168 */
									return BNIL;
								}
							else
								{	/* Initflow/walk.scm 170 */
									obj_t BgL_isz00_2621;

									BgL_isz00_2621 =
										BGl_initflowzd2nodeza2z70zzinitflow_walkz00(
										(((BgL_appz00_bglt) COBJECT(
													((BgL_appz00_bglt) BgL_nodez00_2485)))->BgL_argsz00),
										BgL_ez00_2486);
									{	/* Initflow/walk.scm 171 */
										bool_t BgL_test2173z00_3359;

										{	/* Initflow/walk.scm 171 */
											bool_t BgL_res2024z00_2622;

											BgL_res2024z00_2622 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_fz00_2619), BGl_sfunz00zzast_varz00);
											BgL_test2173z00_3359 = BgL_res2024z00_2622;
										}
										if (BgL_test2173z00_3359)
											{	/* Initflow/walk.scm 171 */
												return
													BGl_appendzd221011zd2zzinitflow_walkz00
													(BGl_initflowzd2funzd2zzinitflow_walkz00
													(BgL_vz00_2618, CBOOL(BgL_ez00_2486)),
													BgL_isz00_2621);
											}
										else
											{	/* Initflow/walk.scm 171 */
												return BgL_isz00_2621;
											}
									}
								}
						}
					}
				}
			}
		}

	}



/* &initflow-node-sync1339 */
	obj_t BGl_z62initflowzd2nodezd2sync1339z62zzinitflow_walkz00(obj_t
		BgL_envz00_2487, obj_t BgL_nodez00_2488, obj_t BgL_ez00_2489)
	{
		{	/* Initflow/walk.scm 155 */
			BGl_initflowzd2nodezd2zzinitflow_walkz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2488)))->BgL_mutexz00),
				CBOOL(BgL_ez00_2489));
			BGl_initflowzd2nodezd2zzinitflow_walkz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2488)))->BgL_prelockz00),
				CBOOL(BgL_ez00_2489));
			return
				BGl_initflowzd2nodezd2zzinitflow_walkz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2488)))->BgL_bodyz00),
				CBOOL(BgL_ez00_2489));
		}

	}



/* &initflow-node-sequen1337 */
	obj_t BGl_z62initflowzd2nodezd2sequen1337z62zzinitflow_walkz00(obj_t
		BgL_envz00_2490, obj_t BgL_nodez00_2491, obj_t BgL_ez00_2492)
	{
		{	/* Initflow/walk.scm 142 */
			{	/* Initflow/walk.scm 143 */
				obj_t BgL_res2086z00_2632;

				{
					obj_t BgL_nodesz00_2626;
					obj_t BgL_isz00_2627;

					BgL_nodesz00_2626 =
						(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_2491)))->BgL_nodesz00);
					BgL_isz00_2627 = BNIL;
				BgL_loopz00_2625:
					if (NULLP(BgL_nodesz00_2626))
						{	/* Initflow/walk.scm 146 */
							BgL_res2086z00_2632 = BgL_isz00_2627;
						}
					else
						{	/* Initflow/walk.scm 148 */
							obj_t BgL_iz00_2628;

							{	/* Initflow/walk.scm 148 */
								obj_t BgL_arg1832z00_2629;

								BgL_arg1832z00_2629 = CAR(((obj_t) BgL_nodesz00_2626));
								BgL_iz00_2628 =
									BGl_initflowzd2nodezd2zzinitflow_walkz00(
									((BgL_nodez00_bglt) BgL_arg1832z00_2629),
									CBOOL(BgL_ez00_2492));
							}
							{	/* Initflow/walk.scm 149 */
								obj_t BgL_arg1830z00_2630;
								obj_t BgL_arg1831z00_2631;

								BgL_arg1830z00_2630 = CDR(((obj_t) BgL_nodesz00_2626));
								BgL_arg1831z00_2631 =
									BGl_appendzd221011zd2zzinitflow_walkz00(BgL_iz00_2628,
									BgL_isz00_2627);
								{
									obj_t BgL_isz00_3388;
									obj_t BgL_nodesz00_3387;

									BgL_nodesz00_3387 = BgL_arg1830z00_2630;
									BgL_isz00_3388 = BgL_arg1831z00_2631;
									BgL_isz00_2627 = BgL_isz00_3388;
									BgL_nodesz00_2626 = BgL_nodesz00_3387;
									goto BgL_loopz00_2625;
								}
							}
						}
				}
				return BgL_res2086z00_2632;
			}
		}

	}



/* &initflow-node-var1335 */
	obj_t BGl_z62initflowzd2nodezd2var1335z62zzinitflow_walkz00(obj_t
		BgL_envz00_2493, obj_t BgL_nodez00_2494, obj_t BgL_ez00_2495)
	{
		{	/* Initflow/walk.scm 99 */
			{	/* Initflow/walk.scm 101 */
				bool_t BgL_test2175z00_3391;

				{	/* Initflow/walk.scm 101 */
					bool_t BgL_test2176z00_3392;

					{	/* Initflow/walk.scm 101 */
						BgL_variablez00_bglt BgL_arg1811z00_2634;

						BgL_arg1811z00_2634 =
							(((BgL_varz00_bglt) COBJECT(
									((BgL_varz00_bglt) BgL_nodez00_2494)))->BgL_variablez00);
						{	/* Initflow/walk.scm 101 */
							bool_t BgL_res2020z00_2635;

							BgL_res2020z00_2635 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_arg1811z00_2634), BGl_globalz00zzast_varz00);
							BgL_test2176z00_3392 = BgL_res2020z00_2635;
						}
					}
					if (BgL_test2176z00_3392)
						{	/* Initflow/walk.scm 101 */
							if (
								((((BgL_globalz00_bglt) COBJECT(
												((BgL_globalz00_bglt)
													(((BgL_varz00_bglt) COBJECT(
																((BgL_varz00_bglt) BgL_nodez00_2494)))->
														BgL_variablez00))))->BgL_initz00) == BUNSPEC))
								{	/* Initflow/walk.scm 103 */
									obj_t BgL_arg1798z00_2636;

									BgL_arg1798z00_2636 =
										(((BgL_globalz00_bglt) COBJECT(
												((BgL_globalz00_bglt)
													(((BgL_varz00_bglt) COBJECT(
																((BgL_varz00_bglt) BgL_nodez00_2494)))->
														BgL_variablez00))))->BgL_modulez00);
									BgL_test2175z00_3391 =
										(BgL_arg1798z00_2636 ==
										BGl_za2moduleza2z00zzmodule_modulez00);
								}
							else
								{	/* Initflow/walk.scm 102 */
									BgL_test2175z00_3391 = ((bool_t) 0);
								}
						}
					else
						{	/* Initflow/walk.scm 101 */
							BgL_test2175z00_3391 = ((bool_t) 0);
						}
				}
				if (BgL_test2175z00_3391)
					{	/* Initflow/walk.scm 101 */
						{	/* Initflow/walk.scm 104 */
							BgL_variablez00_bglt BgL_arg1738z00_2637;

							BgL_arg1738z00_2637 =
								(((BgL_varz00_bglt) COBJECT(
										((BgL_varz00_bglt) BgL_nodez00_2494)))->BgL_variablez00);
							((((BgL_globalz00_bglt) COBJECT(
											((BgL_globalz00_bglt) BgL_arg1738z00_2637)))->
									BgL_initz00) = ((obj_t) BFALSE), BUNSPEC);
						}
						{	/* Initflow/walk.scm 106 */
							bool_t BgL_test2178z00_3412;

							{	/* Initflow/walk.scm 106 */
								BgL_typez00_bglt BgL_arg1790z00_2638;

								BgL_arg1790z00_2638 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt)
													(((BgL_varz00_bglt) COBJECT(
																((BgL_varz00_bglt) BgL_nodez00_2494)))->
														BgL_variablez00)))))->BgL_typez00);
								BgL_test2178z00_3412 =
									(((obj_t) BgL_arg1790z00_2638) ==
									BGl_za2_za2z00zztype_cachez00);
							}
							if (BgL_test2178z00_3412)
								{	/* Initflow/walk.scm 107 */
									BgL_variablez00_bglt BgL_arg1742z00_2639;

									BgL_arg1742z00_2639 =
										(((BgL_varz00_bglt) COBJECT(
												((BgL_varz00_bglt) BgL_nodez00_2494)))->
										BgL_variablez00);
									{	/* Initflow/walk.scm 107 */
										BgL_typez00_bglt BgL_vz00_2640;

										BgL_vz00_2640 =
											((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00);
										((((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_globalz00_bglt) BgL_arg1742z00_2639))))->
												BgL_typez00) =
											((BgL_typez00_bglt) BgL_vz00_2640), BUNSPEC);
									}
								}
							else
								{	/* Initflow/walk.scm 108 */
									bool_t BgL_test2179z00_3426;

									{	/* Initflow/walk.scm 108 */
										BgL_typez00_bglt BgL_arg1782z00_2641;

										BgL_arg1782z00_2641 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_globalz00_bglt)
															(((BgL_varz00_bglt) COBJECT(
																		((BgL_varz00_bglt) BgL_nodez00_2494)))->
																BgL_variablez00)))))->BgL_typez00);
										BgL_test2179z00_3426 =
											(((obj_t) BgL_arg1782z00_2641) ==
											BGl_za2objza2z00zztype_cachez00);
									}
									if (BgL_test2179z00_3426)
										{	/* Initflow/walk.scm 108 */
											BUNSPEC;
										}
									else
										{	/* Initflow/walk.scm 110 */
											bool_t BgL_test2180z00_3434;

											{	/* Initflow/walk.scm 110 */
												bool_t BgL_test2181z00_3435;

												{	/* Initflow/walk.scm 110 */
													BgL_variablez00_bglt BgL_arg1779z00_2642;

													BgL_arg1779z00_2642 =
														(((BgL_varz00_bglt) COBJECT(
																((BgL_varz00_bglt) BgL_nodez00_2494)))->
														BgL_variablez00);
													BgL_test2181z00_3435 =
														BGl_globalzd2readzd2onlyzf3zf3zzast_varz00((
															(BgL_globalz00_bglt) BgL_arg1779z00_2642));
												}
												if (BgL_test2181z00_3435)
													{	/* Initflow/walk.scm 111 */
														BgL_typez00_bglt BgL_arg1771z00_2643;
														obj_t BgL_arg1775z00_2644;

														BgL_arg1771z00_2643 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_globalz00_bglt)
																			(((BgL_varz00_bglt) COBJECT(
																						((BgL_varz00_bglt)
																							BgL_nodez00_2494)))->
																				BgL_variablez00)))))->BgL_typez00);
														BgL_arg1775z00_2644 =
															BGl_getzd2classzd2typez00zztype_cachez00();
														BgL_test2180z00_3434 =
															(((obj_t) BgL_arg1771z00_2643) ==
															BgL_arg1775z00_2644);
													}
												else
													{	/* Initflow/walk.scm 110 */
														BgL_test2180z00_3434 = ((bool_t) 0);
													}
											}
											if (BgL_test2180z00_3434)
												{	/* Initflow/walk.scm 110 */
													BUNSPEC;
												}
											else
												{	/* Initflow/walk.scm 114 */
													obj_t BgL_arg1759z00_2645;
													obj_t BgL_arg1760z00_2646;

													BgL_arg1759z00_2645 =
														(((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt)
																	((BgL_varz00_bglt) BgL_nodez00_2494))))->
														BgL_locz00);
													BgL_arg1760z00_2646 =
														(((BgL_variablez00_bglt) COBJECT((((BgL_varz00_bglt)
																		COBJECT(((BgL_varz00_bglt)
																				BgL_nodez00_2494)))->
																	BgL_variablez00)))->BgL_idz00);
													BGl_userzd2errorzf2locationz20zztools_errorz00
														(BgL_arg1759z00_2645,
														BGl_za2moduleza2z00zzmodule_modulez00,
														BGl_string2072z00zzinitflow_walkz00,
														BgL_arg1760z00_2646, BNIL);
												}
										}
								}
						}
					}
				else
					{	/* Initflow/walk.scm 101 */
						BFALSE;
					}
			}
			{	/* Initflow/walk.scm 117 */
				bool_t BgL_test2182z00_3455;

				{	/* Initflow/walk.scm 117 */
					BgL_valuez00_bglt BgL_arg1825z00_2647;

					BgL_arg1825z00_2647 =
						(((BgL_variablez00_bglt) COBJECT(
								(((BgL_varz00_bglt) COBJECT(
											((BgL_varz00_bglt) BgL_nodez00_2494)))->
									BgL_variablez00)))->BgL_valuez00);
					{	/* Initflow/walk.scm 117 */
						bool_t BgL_res2021z00_2648;

						BgL_res2021z00_2648 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_arg1825z00_2647), BGl_sfunz00zzast_varz00);
						BgL_test2182z00_3455 = BgL_res2021z00_2648;
					}
				}
				if (BgL_test2182z00_3455)
					{	/* Initflow/walk.scm 117 */
						return
							BGl_initflowzd2funzd2zzinitflow_walkz00(
							(((BgL_varz00_bglt) COBJECT(
										((BgL_varz00_bglt) BgL_nodez00_2494)))->BgL_variablez00),
							CBOOL(BgL_ez00_2495));
					}
				else
					{	/* Initflow/walk.scm 117 */
						return BNIL;
					}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzinitflow_walkz00()
	{
		{	/* Initflow/walk.scm 27 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string2073z00zzinitflow_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2073z00zzinitflow_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string2073z00zzinitflow_walkz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2073z00zzinitflow_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2073z00zzinitflow_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2073z00zzinitflow_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string2073z00zzinitflow_walkz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2073z00zzinitflow_walkz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string2073z00zzinitflow_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2073z00zzinitflow_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2073z00zzinitflow_walkz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2073z00zzinitflow_walkz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2073z00zzinitflow_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2073z00zzinitflow_walkz00));
		}

	}

#ifdef __cplusplus
}
#endif
