/*===========================================================================*/
/*   (Ast/check_type.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/check_type.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
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


	BGL_EXPORTED_DECL obj_t
		BGl_z52checkzd2nodezd2typez52zzast_checkzd2typezd2(obj_t, BgL_nodez00_bglt,
		bool_t, bool_t);
	static obj_t
		BGl_z62checkzd2nodezd2typezd2letzd21308z62zzast_checkzd2typezd2(obj_t,
		obj_t);
	static obj_t
		BGl_z62checkzd2nodezd2typezd2letzd21310z62zzast_checkzd2typezd2(obj_t,
		obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_za2pairzd2nilza2zd2zztype_cachez00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_sfunz00zzast_varz00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t
		BGl_z62checkzd2nodezd2typezd2fail1304zb0zzast_checkzd2typezd2(obj_t, obj_t);
	static obj_t
		BGl_z62checkzd2nodezd2typezd2make1316zb0zzast_checkzd2typezd2(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzast_checkzd2typezd2();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_za2foreignza2z00zztype_cachez00;
	extern obj_t BGl_za2magicza2z00zztype_cachez00;
	static bool_t BGl_za2checkzd2correctnessza2zd2zzast_checkzd2typezd2;
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_checkzd2typezd2();
	BGL_IMPORT obj_t bgl_typeof(obj_t);
	static obj_t
		BGl_z62checkzd2nodezd2typezd2boxzd21318z62zzast_checkzd2typezd2(obj_t,
		obj_t);
	static obj_t
		BGl_z62checkzd2nodezd2typezd2sequ1296zb0zzast_checkzd2typezd2(obj_t, obj_t);
	static obj_t
		BGl_z62checkzd2nodezd2typezd2boxzd21320z62zzast_checkzd2typezd2(obj_t,
		obj_t);
	static obj_t
		BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(BgL_nodez00_bglt);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_za2checkzd2typezd2passza2z00zzast_checkzd2typezd2 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_checkzd2typezd2zzast_checkzd2typezd2(obj_t, obj_t,
		bool_t, bool_t);
	static obj_t
		BGl_z62checkzd2nodezd2typezd2setzd21312z62zzast_checkzd2typezd2(obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern bool_t BGl_typezd2subclasszf3z21zzobject_classz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t
		BGl_z62checkzd2nodezd2typezd2clos1294zb0zzast_checkzd2typezd2(obj_t, obj_t);
	static obj_t BGl_z62checkzd2typezb0zzast_checkzd2typezd2(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static bool_t BGl_eqtypezf3zf3zzast_checkzd2typezd2(obj_t, obj_t);
	static bool_t BGl_za2checkzd2fullza2zd2zzast_checkzd2typezd2;
	extern bool_t BGl_coercerzd2existszf3z21zztype_coercionz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2unsafezd2typeza2zd2zzengine_paramz00;
	static obj_t BGl_gczd2rootszd2initz00zzast_checkzd2typezd2();
	static bool_t BGl_subtypezf3zf3zzast_checkzd2typezd2(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t BGl_za2epairza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t
		BGl_z62checkzd2nodezd2typezd2cond1302zb0zzast_checkzd2typezd2(obj_t, obj_t);
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t
		BGl_z62checkzd2nodezd2typezd2atom1290zb0zzast_checkzd2typezd2(obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	static obj_t BGl_requirezd2initializa7ationz75zzast_checkzd2typezd2 = BUNSPEC;
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_tclassz00zzobject_classz00;
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62checkzd2nodezd2typezd2appzd21322z62zzast_checkzd2typezd2(obj_t,
		obj_t);
	static obj_t
		BGl_z62checkzd2nodezd2typezd2setq1300zb0zzast_checkzd2typezd2(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzast_checkzd2typezd2();
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t
		BGl_z62checkzd2nodezd2typezd2swit1306zb0zzast_checkzd2typezd2(obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzast_checkzd2typezd2();
	extern obj_t BGl_za2cellza2z00zztype_cachez00;
	static obj_t BGl_z62z52checkzd2nodezd2typez30zzast_checkzd2typezd2(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	static obj_t
		BGl_z62checkzd2nodezd2typezd2sync1298zb0zzast_checkzd2typezd2(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt,
		bool_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	extern obj_t BGl_za2pairza2z00zztype_cachez00;
	static obj_t BGl_z62checkzd2nodezd2typez62zzast_checkzd2typezd2(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_getzd2typezd2atomz00zztype_typeofz00(obj_t);
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	static obj_t BGl_z62checkzd2nodezd2type1285z62zzast_checkzd2typezd2(obj_t,
		obj_t);
	static obj_t BGl_errzd2nozd2typez00zzast_checkzd2typezd2(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t
		BGl_z62checkzd2nodezd2typezd2kwot1292zb0zzast_checkzd2typezd2(obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzast_checkzd2typezd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_includez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_coercionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t
		BGl_z62checkzd2nodezd2typezd2func1324zb0zzast_checkzd2typezd2(obj_t, obj_t);
	static obj_t
		BGl_z62checkzd2nodezd2typezd2var1288zb0zzast_checkzd2typezd2(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_tprintz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t
		BGl_z62checkzd2nodezd2typezd2app1326zb0zzast_checkzd2typezd2(obj_t, obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzast_checkzd2typezd2();
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_checkzd2typezd2();
	extern obj_t BGl_tvecz00zztvector_tvectorz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzast_checkzd2typezd2();
	extern obj_t BGl_za2bnilza2z00zztype_cachez00;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_za2compilerzd2typezd2debugzf3za2zf3zzengine_paramz00;
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	static bool_t BGl_atomzd2subtypezf3z21zzast_checkzd2typezd2(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_switchz00zzast_nodez00;
	static obj_t BGl_errz00zzast_checkzd2typezd2(obj_t, BgL_typez00_bglt, obj_t);
	extern BgL_typez00_bglt BGl_getzd2typezd2kwotez00zztype_typeofz00(obj_t);
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t
		BGl_z62checkzd2nodezd2typezd2jump1314zb0zzast_checkzd2typezd2(obj_t, obj_t);
	static obj_t __cnst[3];


	   
		 
		DEFINE_STRING(BGl_string2136z00zzast_checkzd2typezd2,
		BgL_bgl_string2136za700za7za7a2151za7, " check-full=", 12);
	      DEFINE_STRING(BGl_string2137z00zzast_checkzd2typezd2,
		BgL_bgl_string2137za700za7za7a2152za7, " sub=", 5);
	      DEFINE_STRING(BGl_string2138z00zzast_checkzd2typezd2,
		BgL_bgl_string2138za700za7za7a2153za7, " eq=", 4);
	      DEFINE_STRING(BGl_string2139z00zzast_checkzd2typezd2,
		BgL_bgl_string2139za700za7za7a2154za7, " vtype=", 7);
	      DEFINE_STRING(BGl_string2140z00zzast_checkzd2typezd2,
		BgL_bgl_string2140za700za7za7a2155za7, " type=", 6);
	      DEFINE_STRING(BGl_string2141z00zzast_checkzd2typezd2,
		BgL_bgl_string2141za700za7za7a2156za7, " loc=", 5);
	      DEFINE_STRING(BGl_string2142z00zzast_checkzd2typezd2,
		BgL_bgl_string2142za700za7za7a2157za7, "ERR: ", 5);
	      DEFINE_STRING(BGl_string2143z00zzast_checkzd2typezd2,
		BgL_bgl_string2143za700za7za7a2158za7, ":", 1);
	      DEFINE_STRING(BGl_string2144z00zzast_checkzd2typezd2,
		BgL_bgl_string2144za700za7za7a2159za7, ",", 1);
	      DEFINE_STRING(BGl_string2145z00zzast_checkzd2typezd2,
		BgL_bgl_string2145za700za7za7a2160za7, "Ast/check_type.scm", 18);
	      DEFINE_STRING(BGl_string2146z00zzast_checkzd2typezd2,
		BgL_bgl_string2146za700za7za7a2161za7, "ast_check-type", 14);
	      DEFINE_STRING(BGl_string2147z00zzast_checkzd2typezd2,
		BgL_bgl_string2147za700za7za7a2162za7, "static elight tvector ", 22);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2113z00zzast_checkzd2typezd2,
		BgL_bgl_za762checkza7d2nodeza72163za7,
		BGl_z62checkzd2nodezd2type1285z62zzast_checkzd2typezd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2115z00zzast_checkzd2typezd2,
		BgL_bgl_za762checkza7d2nodeza72164za7,
		BGl_z62checkzd2nodezd2typezd2var1288zb0zzast_checkzd2typezd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2117z00zzast_checkzd2typezd2,
		BgL_bgl_za762checkza7d2nodeza72165za7,
		BGl_z62checkzd2nodezd2typezd2atom1290zb0zzast_checkzd2typezd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2118z00zzast_checkzd2typezd2,
		BgL_bgl_za762checkza7d2nodeza72166za7,
		BGl_z62checkzd2nodezd2typezd2kwot1292zb0zzast_checkzd2typezd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2119z00zzast_checkzd2typezd2,
		BgL_bgl_za762checkza7d2nodeza72167za7,
		BGl_z62checkzd2nodezd2typezd2clos1294zb0zzast_checkzd2typezd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2120z00zzast_checkzd2typezd2,
		BgL_bgl_za762checkza7d2nodeza72168za7,
		BGl_z62checkzd2nodezd2typezd2sequ1296zb0zzast_checkzd2typezd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2121z00zzast_checkzd2typezd2,
		BgL_bgl_za762checkza7d2nodeza72169za7,
		BGl_z62checkzd2nodezd2typezd2sync1298zb0zzast_checkzd2typezd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2122z00zzast_checkzd2typezd2,
		BgL_bgl_za762checkza7d2nodeza72170za7,
		BGl_z62checkzd2nodezd2typezd2setq1300zb0zzast_checkzd2typezd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2123z00zzast_checkzd2typezd2,
		BgL_bgl_za762checkza7d2nodeza72171za7,
		BGl_z62checkzd2nodezd2typezd2cond1302zb0zzast_checkzd2typezd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2124z00zzast_checkzd2typezd2,
		BgL_bgl_za762checkza7d2nodeza72172za7,
		BGl_z62checkzd2nodezd2typezd2fail1304zb0zzast_checkzd2typezd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2125z00zzast_checkzd2typezd2,
		BgL_bgl_za762checkza7d2nodeza72173za7,
		BGl_z62checkzd2nodezd2typezd2swit1306zb0zzast_checkzd2typezd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2126z00zzast_checkzd2typezd2,
		BgL_bgl_za762checkza7d2nodeza72174za7,
		BGl_z62checkzd2nodezd2typezd2letzd21308z62zzast_checkzd2typezd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2127z00zzast_checkzd2typezd2,
		BgL_bgl_za762checkza7d2nodeza72175za7,
		BGl_z62checkzd2nodezd2typezd2letzd21310z62zzast_checkzd2typezd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2128z00zzast_checkzd2typezd2,
		BgL_bgl_za762checkza7d2nodeza72176za7,
		BGl_z62checkzd2nodezd2typezd2setzd21312z62zzast_checkzd2typezd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2129z00zzast_checkzd2typezd2,
		BgL_bgl_za762checkza7d2nodeza72177za7,
		BGl_z62checkzd2nodezd2typezd2jump1314zb0zzast_checkzd2typezd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2130z00zzast_checkzd2typezd2,
		BgL_bgl_za762checkza7d2nodeza72178za7,
		BGl_z62checkzd2nodezd2typezd2make1316zb0zzast_checkzd2typezd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2131z00zzast_checkzd2typezd2,
		BgL_bgl_za762checkza7d2nodeza72179za7,
		BGl_z62checkzd2nodezd2typezd2boxzd21318z62zzast_checkzd2typezd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2132z00zzast_checkzd2typezd2,
		BgL_bgl_za762checkza7d2nodeza72180za7,
		BGl_z62checkzd2nodezd2typezd2boxzd21320z62zzast_checkzd2typezd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2133z00zzast_checkzd2typezd2,
		BgL_bgl_za762checkza7d2nodeza72181za7,
		BGl_z62checkzd2nodezd2typezd2appzd21322z62zzast_checkzd2typezd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2134z00zzast_checkzd2typezd2,
		BgL_bgl_za762checkza7d2nodeza72182za7,
		BGl_z62checkzd2nodezd2typezd2func1324zb0zzast_checkzd2typezd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2135z00zzast_checkzd2typezd2,
		BgL_bgl_za762checkza7d2nodeza72183za7,
		BGl_z62checkzd2nodezd2typezd2app1326zb0zzast_checkzd2typezd2, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_checkzd2typezd2envz00zzast_checkzd2typezd2,
		BgL_bgl_za762checkza7d2typeza72184za7,
		BGl_z62checkzd2typezb0zzast_checkzd2typezd2, 0L, BUNSPEC, 4);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
		BgL_bgl_za762checkza7d2nodeza72185za7,
		BGl_z62checkzd2nodezd2typez62zzast_checkzd2typezd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52checkzd2nodezd2typezd2envz80zzast_checkzd2typezd2,
		BgL_bgl_za762za752checkza7d2no2186za7,
		BGl_z62z52checkzd2nodezd2typez30zzast_checkzd2typezd2, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string2105z00zzast_checkzd2typezd2,
		BgL_bgl_string2105za700za7za7a2187za7, " error", 6);
	      DEFINE_STRING(BGl_string2106z00zzast_checkzd2typezd2,
		BgL_bgl_string2106za700za7za7a2188za7, "s", 1);
	      DEFINE_STRING(BGl_string2107z00zzast_checkzd2typezd2,
		BgL_bgl_string2107za700za7za7a2189za7, "", 0);
	      DEFINE_STRING(BGl_string2108z00zzast_checkzd2typezd2,
		BgL_bgl_string2108za700za7za7a2190za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string2109z00zzast_checkzd2typezd2,
		BgL_bgl_string2109za700za7za7a2191za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string2110z00zzast_checkzd2typezd2,
		BgL_bgl_string2110za700za7za7a2192za7, "check-node-type (~a)", 20);
	      DEFINE_STRING(BGl_string2111z00zzast_checkzd2typezd2,
		BgL_bgl_string2111za700za7za7a2193za7,
		"Inconsistent type [~a], \"~a\" expected, \"~a\" provided", 52);
	      DEFINE_STRING(BGl_string2112z00zzast_checkzd2typezd2,
		BgL_bgl_string2112za700za7za7a2194za7, "Untyped node", 12);
	      DEFINE_STRING(BGl_string2114z00zzast_checkzd2typezd2,
		BgL_bgl_string2114za700za7za7a2195za7, "check-node-type1285", 19);
	      DEFINE_STRING(BGl_string2116z00zzast_checkzd2typezd2,
		BgL_bgl_string2116za700za7za7a2196za7, "check-node-type", 15);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_za2checkzd2typezd2passza2z00zzast_checkzd2typezd2));
		     ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzast_checkzd2typezd2));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzast_checkzd2typezd2(long
		BgL_checksumz00_2746, char *BgL_fromz00_2747)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_checkzd2typezd2))
				{
					BGl_requirezd2initializa7ationz75zzast_checkzd2typezd2 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_checkzd2typezd2();
					BGl_libraryzd2moduleszd2initz00zzast_checkzd2typezd2();
					BGl_cnstzd2initzd2zzast_checkzd2typezd2();
					BGl_importedzd2moduleszd2initz00zzast_checkzd2typezd2();
					BGl_genericzd2initzd2zzast_checkzd2typezd2();
					BGl_methodzd2initzd2zzast_checkzd2typezd2();
					return BGl_toplevelzd2initzd2zzast_checkzd2typezd2();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_checkzd2typezd2()
	{
		{	/* Ast/check_type.scm 16 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"ast_check-type");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_check-type");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"ast_check-type");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"ast_check-type");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"ast_check-type");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"ast_check-type");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_check-type");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_check-type");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_check-type");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"ast_check-type");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "ast_check-type");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"ast_check-type");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_checkzd2typezd2()
	{
		{	/* Ast/check_type.scm 16 */
			{	/* Ast/check_type.scm 16 */
				obj_t BgL_cportz00_2577;

				{	/* Ast/check_type.scm 16 */
					obj_t BgL_stringz00_2585;

					BgL_stringz00_2585 = BGl_string2147z00zzast_checkzd2typezd2;
					{	/* Ast/check_type.scm 16 */
						obj_t BgL_startz00_2586;

						BgL_startz00_2586 = BINT(((long) 0));
						{	/* Ast/check_type.scm 16 */
							obj_t BgL_endz00_2587;

							BgL_endz00_2587 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2585)));
							{	/* Ast/check_type.scm 16 */

								BgL_cportz00_2577 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2585, BgL_startz00_2586, BgL_endz00_2587);
				}}}}
				{
					long BgL_iz00_2578;

					BgL_iz00_2578 = ((long) 2);
				BgL_loopz00_2579:
					if ((BgL_iz00_2578 == ((long) -1)))
						{	/* Ast/check_type.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Ast/check_type.scm 16 */
							{	/* Ast/check_type.scm 16 */
								obj_t BgL_arg2149z00_2581;

								{	/* Ast/check_type.scm 16 */

									{	/* Ast/check_type.scm 16 */
										obj_t BgL_locationz00_2583;

										BgL_locationz00_2583 = BBOOL(((bool_t) 0));
										{	/* Ast/check_type.scm 16 */

											BgL_arg2149z00_2581 =
												BGl_readz00zz__readerz00(BgL_cportz00_2577,
												BgL_locationz00_2583);
										}
									}
								}
								{	/* Ast/check_type.scm 16 */
									int BgL_tmpz00_2779;

									BgL_tmpz00_2779 = (int) (BgL_iz00_2578);
									CNST_TABLE_SET(BgL_tmpz00_2779, BgL_arg2149z00_2581);
							}}
							{	/* Ast/check_type.scm 16 */
								int BgL_auxz00_2584;

								BgL_auxz00_2584 = (int) ((BgL_iz00_2578 - ((long) 1)));
								{
									long BgL_iz00_2784;

									BgL_iz00_2784 = (long) (BgL_auxz00_2584);
									BgL_iz00_2578 = BgL_iz00_2784;
									goto BgL_loopz00_2579;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_checkzd2typezd2()
	{
		{	/* Ast/check_type.scm 16 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_checkzd2typezd2()
	{
		{	/* Ast/check_type.scm 16 */
			BGl_za2checkzd2typezd2passza2z00zzast_checkzd2typezd2 = BFALSE;
			BGl_za2checkzd2fullza2zd2zzast_checkzd2typezd2 = ((bool_t) 0);
			BGl_za2checkzd2correctnessza2zd2zzast_checkzd2typezd2 = ((bool_t) 0);
			return BUNSPEC;
		}

	}



/* %check-node-type */
	BGL_EXPORTED_DEF obj_t
		BGl_z52checkzd2nodezd2typez52zzast_checkzd2typezd2(obj_t BgL_funz00_25,
		BgL_nodez00_bglt BgL_nodez00_26, bool_t BgL_fullz00_27,
		bool_t BgL_correctnessz00_28)
	{
		{	/* Ast/check_type.scm 41 */
			BGl_za2checkzd2typezd2passza2z00zzast_checkzd2typezd2 = BgL_funz00_25;
			BGl_za2checkzd2fullza2zd2zzast_checkzd2typezd2 = BgL_fullz00_27;
			BGl_za2checkzd2correctnessza2zd2zzast_checkzd2typezd2 =
				BgL_correctnessz00_28;
			return BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(BgL_nodez00_26);
		}

	}



/* &%check-node-type */
	obj_t BGl_z62z52checkzd2nodezd2typez30zzast_checkzd2typezd2(obj_t
		BgL_envz00_2501, obj_t BgL_funz00_2502, obj_t BgL_nodez00_2503,
		obj_t BgL_fullz00_2504, obj_t BgL_correctnessz00_2505)
	{
		{	/* Ast/check_type.scm 41 */
			return
				BGl_z52checkzd2nodezd2typez52zzast_checkzd2typezd2(BgL_funz00_2502,
				((BgL_nodez00_bglt) BgL_nodez00_2503),
				CBOOL(BgL_fullz00_2504), CBOOL(BgL_correctnessz00_2505));
		}

	}



/* check-type */
	BGL_EXPORTED_DEF obj_t BGl_checkzd2typezd2zzast_checkzd2typezd2(obj_t
		BgL_passz00_29, obj_t BgL_globalsz00_30, bool_t BgL_fullz00_31,
		bool_t BgL_correctnessz00_32)
	{
		{	/* Ast/check_type.scm 50 */
			if (CBOOL(BGl_za2compilerzd2typezd2debugzf3za2zf3zzengine_paramz00))
				{	/* Ast/check_type.scm 51 */
					BGl_za2checkzd2typezd2passza2z00zzast_checkzd2typezd2 =
						BgL_passz00_29;
					BGl_za2checkzd2fullza2zd2zzast_checkzd2typezd2 = BgL_fullz00_31;
					BGl_za2checkzd2correctnessza2zd2zzast_checkzd2typezd2 =
						BgL_correctnessz00_32;
					{
						obj_t BgL_l1267z00_1697;

						BgL_l1267z00_1697 = BgL_globalsz00_30;
					BgL_zc3z04anonymousza31352ze3z87_1698:
						if (PAIRP(BgL_l1267z00_1697))
							{	/* Ast/check_type.scm 55 */
								{	/* Ast/check_type.scm 55 */
									obj_t BgL_arg1357z00_1700;

									BgL_arg1357z00_1700 = CAR(BgL_l1267z00_1697);
									{	/* Ast/check_type.scm 69 */
										BgL_valuez00_bglt BgL_funz00_2378;

										BgL_funz00_2378 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_arg1357z00_1700)))->
											BgL_valuez00);
										{	/* Ast/check_type.scm 69 */
											obj_t BgL_bodyz00_2379;

											BgL_bodyz00_2379 =
												(((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_funz00_2378)))->
												BgL_bodyz00);
											{	/* Ast/check_type.scm 70 */

												BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
													((BgL_nodez00_bglt) BgL_bodyz00_2379));
											}
										}
									}
								}
								{
									obj_t BgL_l1267z00_2803;

									BgL_l1267z00_2803 = CDR(BgL_l1267z00_1697);
									BgL_l1267z00_1697 = BgL_l1267z00_2803;
									goto BgL_zc3z04anonymousza31352ze3z87_1698;
								}
							}
						else
							{	/* Ast/check_type.scm 55 */
								((bool_t) 1);
							}
					}
					if (
						((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
							((long) 0)))
						{	/* Ast/check_type.scm 56 */
							{	/* Ast/check_type.scm 56 */
								obj_t BgL_port1269z00_1705;

								{	/* Ast/check_type.scm 56 */
									obj_t BgL_res2075z00_2386;

									{	/* Ast/check_type.scm 56 */
										obj_t BgL_tmpz00_2808;

										BgL_tmpz00_2808 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2075z00_2386 =
											BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2808);
									}
									BgL_port1269z00_1705 = BgL_res2075z00_2386;
								}
								bgl_display_obj
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
									BgL_port1269z00_1705);
								bgl_display_string(BGl_string2105z00zzast_checkzd2typezd2,
									BgL_port1269z00_1705);
								{	/* Ast/check_type.scm 56 */
									obj_t BgL_arg1363z00_1706;

									{	/* Ast/check_type.scm 56 */
										bool_t BgL_test2202z00_2813;

										if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
											{	/* Ast/check_type.scm 56 */
												if (INTEGERP
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
													{	/* Ast/check_type.scm 56 */
														BgL_test2202z00_2813 =
															(
															(long)
															CINT
															(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
															> ((long) 1));
													}
												else
													{	/* Ast/check_type.scm 56 */
														BgL_test2202z00_2813 =
															BGl_2ze3ze3zz__r4_numbers_6_5z00
															(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
															BINT(((long) 1)));
											}}
										else
											{	/* Ast/check_type.scm 56 */
												BgL_test2202z00_2813 = ((bool_t) 0);
											}
										if (BgL_test2202z00_2813)
											{	/* Ast/check_type.scm 56 */
												BgL_arg1363z00_1706 =
													BGl_string2106z00zzast_checkzd2typezd2;
											}
										else
											{	/* Ast/check_type.scm 56 */
												BgL_arg1363z00_1706 =
													BGl_string2107z00zzast_checkzd2typezd2;
											}
									}
									bgl_display_obj(BgL_arg1363z00_1706, BgL_port1269z00_1705);
								}
								bgl_display_string(BGl_string2108z00zzast_checkzd2typezd2,
									BgL_port1269z00_1705);
								bgl_display_char(((unsigned char) 10), BgL_port1269z00_1705);
							}
							{	/* Ast/check_type.scm 56 */
								obj_t BgL_list1369z00_1712;

								BgL_list1369z00_1712 = MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
								return BGl_exitz00zz__errorz00(BgL_list1369z00_1712);
							}
						}
					else
						{	/* Ast/check_type.scm 56 */
							obj_t BgL_g1109z00_1713;

							BgL_g1109z00_1713 = BNIL;
							{
								obj_t BgL_hooksz00_1716;
								obj_t BgL_hnamesz00_1717;

								BgL_hooksz00_1716 = BgL_g1109z00_1713;
								BgL_hnamesz00_1717 = BNIL;
							BgL_zc3z04anonymousza31370ze3z87_1718:
								if (NULLP(BgL_hooksz00_1716))
									{	/* Ast/check_type.scm 56 */
										return BgL_globalsz00_30;
									}
								else
									{	/* Ast/check_type.scm 56 */
										bool_t BgL_test2206z00_2830;

										{	/* Ast/check_type.scm 56 */
											obj_t BgL_fun1384z00_1725;

											BgL_fun1384z00_1725 = CAR(((obj_t) BgL_hooksz00_1716));
											BgL_test2206z00_2830 =
												CBOOL(PROCEDURE_ENTRY(BgL_fun1384z00_1725)
												(BgL_fun1384z00_1725, BEOA));
										}
										if (BgL_test2206z00_2830)
											{	/* Ast/check_type.scm 56 */
												obj_t BgL_arg1381z00_1722;
												obj_t BgL_arg1382z00_1723;

												BgL_arg1381z00_1722 = CDR(((obj_t) BgL_hooksz00_1716));
												BgL_arg1382z00_1723 = CDR(((obj_t) BgL_hnamesz00_1717));
												{
													obj_t BgL_hnamesz00_2842;
													obj_t BgL_hooksz00_2841;

													BgL_hooksz00_2841 = BgL_arg1381z00_1722;
													BgL_hnamesz00_2842 = BgL_arg1382z00_1723;
													BgL_hnamesz00_1717 = BgL_hnamesz00_2842;
													BgL_hooksz00_1716 = BgL_hooksz00_2841;
													goto BgL_zc3z04anonymousza31370ze3z87_1718;
												}
											}
										else
											{	/* Ast/check_type.scm 56 */
												obj_t BgL_arg1383z00_1724;

												BgL_arg1383z00_1724 = CAR(((obj_t) BgL_hnamesz00_1717));
												return
													BGl_internalzd2errorzd2zztools_errorz00
													(BGl_za2currentzd2passza2zd2zzengine_passz00,
													BGl_string2109z00zzast_checkzd2typezd2,
													BgL_arg1383z00_1724);
											}
									}
							}
						}
				}
			else
				{	/* Ast/check_type.scm 51 */
					return BFALSE;
				}
		}

	}



/* &check-type */
	obj_t BGl_z62checkzd2typezb0zzast_checkzd2typezd2(obj_t BgL_envz00_2506,
		obj_t BgL_passz00_2507, obj_t BgL_globalsz00_2508, obj_t BgL_fullz00_2509,
		obj_t BgL_correctnessz00_2510)
	{
		{	/* Ast/check_type.scm 50 */
			return
				BGl_checkzd2typezd2zzast_checkzd2typezd2(BgL_passz00_2507,
				BgL_globalsz00_2508, CBOOL(BgL_fullz00_2509),
				CBOOL(BgL_correctnessz00_2510));
		}

	}



/* err */
	obj_t BGl_errz00zzast_checkzd2typezd2(obj_t BgL_nodez00_34,
		BgL_typez00_bglt BgL_t1z00_35, obj_t BgL_t2z00_36)
	{
		{	/* Ast/check_type.scm 76 */
			{	/* Ast/check_type.scm 77 */
				obj_t BgL_arg1386z00_1730;
				obj_t BgL_arg1387z00_1731;
				obj_t BgL_arg1388z00_1732;
				obj_t BgL_arg1394z00_1733;

				BgL_arg1386z00_1730 =
					(((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_nodez00_34)))->BgL_locz00);
				{	/* Ast/check_type.scm 78 */
					obj_t BgL_list1396z00_1735;

					BgL_list1396z00_1735 =
						MAKE_YOUNG_PAIR
						(BGl_za2checkzd2typezd2passza2z00zzast_checkzd2typezd2, BNIL);
					BgL_arg1387z00_1731 =
						BGl_formatz00zz__r4_output_6_10_3z00
						(BGl_string2110z00zzast_checkzd2typezd2, BgL_list1396z00_1735);
				}
				{	/* Ast/check_type.scm 79 */
					obj_t BgL_arg1417z00_1736;
					obj_t BgL_arg1418z00_1737;
					obj_t BgL_arg1421z00_1738;

					BgL_arg1417z00_1736 = bgl_typeof(BgL_nodez00_34);
					BgL_arg1418z00_1737 = BGl_shapez00zztools_shapez00(BgL_t2z00_36);
					BgL_arg1421z00_1738 =
						BGl_shapez00zztools_shapez00(((obj_t) BgL_t1z00_35));
					{	/* Ast/check_type.scm 79 */
						obj_t BgL_list1422z00_1739;

						{	/* Ast/check_type.scm 79 */
							obj_t BgL_arg1441z00_1740;

							{	/* Ast/check_type.scm 79 */
								obj_t BgL_arg1442z00_1741;

								BgL_arg1442z00_1741 =
									MAKE_YOUNG_PAIR(BgL_arg1421z00_1738, BNIL);
								BgL_arg1441z00_1740 =
									MAKE_YOUNG_PAIR(BgL_arg1418z00_1737, BgL_arg1442z00_1741);
							}
							BgL_list1422z00_1739 =
								MAKE_YOUNG_PAIR(BgL_arg1417z00_1736, BgL_arg1441z00_1740);
						}
						BgL_arg1388z00_1732 =
							BGl_formatz00zz__r4_output_6_10_3z00
							(BGl_string2111z00zzast_checkzd2typezd2, BgL_list1422z00_1739);
					}
				}
				BgL_arg1394z00_1733 = BGl_shapez00zztools_shapez00(BgL_nodez00_34);
				return
					BGl_userzd2errorzf2locationz20zztools_errorz00(BgL_arg1386z00_1730,
					BgL_arg1387z00_1731, BgL_arg1388z00_1732, BgL_arg1394z00_1733, BNIL);
			}
		}

	}



/* err-no-type */
	obj_t BGl_errzd2nozd2typez00zzast_checkzd2typezd2(BgL_nodez00_bglt
		BgL_nodez00_37)
	{
		{	/* Ast/check_type.scm 85 */
			{	/* Ast/check_type.scm 86 */
				obj_t BgL_arg1448z00_1742;
				obj_t BgL_arg1449z00_1743;
				obj_t BgL_arg1461z00_1744;

				BgL_arg1448z00_1742 =
					(((BgL_nodez00_bglt) COBJECT(BgL_nodez00_37))->BgL_locz00);
				{	/* Ast/check_type.scm 87 */
					obj_t BgL_list1463z00_1746;

					BgL_list1463z00_1746 =
						MAKE_YOUNG_PAIR
						(BGl_za2checkzd2typezd2passza2z00zzast_checkzd2typezd2, BNIL);
					BgL_arg1449z00_1743 =
						BGl_formatz00zz__r4_output_6_10_3z00
						(BGl_string2110z00zzast_checkzd2typezd2, BgL_list1463z00_1746);
				}
				BgL_arg1461z00_1744 =
					BGl_shapez00zztools_shapez00(((obj_t) BgL_nodez00_37));
				return
					BGl_userzd2errorzf2locationz20zztools_errorz00(BgL_arg1448z00_1742,
					BgL_arg1449z00_1743, BGl_string2112z00zzast_checkzd2typezd2,
					BgL_arg1461z00_1744, BNIL);
			}
		}

	}



/* eqtype? */
	bool_t BGl_eqtypezf3zf3zzast_checkzd2typezd2(obj_t BgL_t1z00_60,
		obj_t BgL_t2z00_61)
	{
		{	/* Ast/check_type.scm 319 */
			{	/* Ast/check_type.scm 320 */
				bool_t BgL__ortest_1133z00_1752;

				{	/* Ast/check_type.scm 320 */
					bool_t BgL__ortest_1134z00_1754;

					BgL__ortest_1134z00_1754 = (BgL_t1z00_60 == BgL_t2z00_61);
					if (BgL__ortest_1134z00_1754)
						{	/* Ast/check_type.scm 320 */
							BgL__ortest_1133z00_1752 = BgL__ortest_1134z00_1754;
						}
					else
						{	/* Ast/check_type.scm 320 */
							bool_t BgL__ortest_1135z00_1755;

							BgL__ortest_1135z00_1755 =
								(BgL_t1z00_60 == BGl_za2magicza2z00zztype_cachez00);
							if (BgL__ortest_1135z00_1755)
								{	/* Ast/check_type.scm 320 */
									BgL__ortest_1133z00_1752 = BgL__ortest_1135z00_1755;
								}
							else
								{	/* Ast/check_type.scm 320 */
									BgL__ortest_1133z00_1752 =
										(BgL_t2z00_61 == BGl_za2magicza2z00zztype_cachez00);
								}
						}
				}
				if (BgL__ortest_1133z00_1752)
					{	/* Ast/check_type.scm 320 */
						return BgL__ortest_1133z00_1752;
					}
				else
					{	/* Ast/check_type.scm 320 */
						if ((BgL_t1z00_60 == BGl_za2_za2z00zztype_cachez00))
							{	/* Ast/check_type.scm 321 */
								if (BGl_za2checkzd2fullza2zd2zzast_checkzd2typezd2)
									{	/* Ast/check_type.scm 321 */
										return ((bool_t) 0);
									}
								else
									{	/* Ast/check_type.scm 321 */
										return ((bool_t) 1);
									}
							}
						else
							{	/* Ast/check_type.scm 321 */
								return ((bool_t) 0);
							}
					}
			}
		}

	}



/* subtype? */
	bool_t BGl_subtypezf3zf3zzast_checkzd2typezd2(BgL_typez00_bglt BgL_t1z00_62,
		BgL_typez00_bglt BgL_t2z00_63)
	{
		{	/* Ast/check_type.scm 328 */
			if ((((obj_t) BgL_t1z00_62) == ((obj_t) BgL_t2z00_63)))
				{	/* Ast/check_type.scm 330 */
					return ((bool_t) 1);
				}
			else
				{	/* Ast/check_type.scm 332 */
					bool_t BgL_test2213z00_2882;

					if ((((obj_t) BgL_t2z00_63) == BGl_za2_za2z00zztype_cachez00))
						{	/* Ast/check_type.scm 332 */
							BgL_test2213z00_2882 = ((bool_t) 1);
						}
					else
						{	/* Ast/check_type.scm 332 */
							BgL_test2213z00_2882 =
								(((obj_t) BgL_t1z00_62) == BGl_za2_za2z00zztype_cachez00);
						}
					if (BgL_test2213z00_2882)
						{	/* Ast/check_type.scm 332 */
							if (BGl_za2checkzd2fullza2zd2zzast_checkzd2typezd2)
								{	/* Ast/check_type.scm 333 */
									return ((bool_t) 0);
								}
							else
								{	/* Ast/check_type.scm 333 */
									return ((bool_t) 1);
								}
						}
					else
						{	/* Ast/check_type.scm 334 */
							bool_t BgL_test2216z00_2889;

							if (BGl_za2checkzd2correctnessza2zd2zzast_checkzd2typezd2)
								{	/* Ast/check_type.scm 334 */
									BgL_test2216z00_2889 =
										CBOOL(BGl_za2unsafezd2typeza2zd2zzengine_paramz00);
								}
							else
								{	/* Ast/check_type.scm 334 */
									BgL_test2216z00_2889 = ((bool_t) 1);
								}
							if (BgL_test2216z00_2889)
								{	/* Ast/check_type.scm 334 */
									return ((bool_t) 1);
								}
							else
								{	/* Ast/check_type.scm 336 */
									bool_t BgL_test2218z00_2892;

									if (
										(((obj_t) BgL_t1z00_62) ==
											BGl_za2magicza2z00zztype_cachez00))
										{	/* Ast/check_type.scm 336 */
											BgL_test2218z00_2892 = ((bool_t) 1);
										}
									else
										{	/* Ast/check_type.scm 336 */
											BgL_test2218z00_2892 =
												(
												((obj_t) BgL_t2z00_63) ==
												BGl_za2magicza2z00zztype_cachez00);
										}
									if (BgL_test2218z00_2892)
										{	/* Ast/check_type.scm 336 */
											return ((bool_t) 1);
										}
									else
										{	/* Ast/check_type.scm 336 */
											if (
												(((obj_t) BgL_t2z00_63) ==
													BGl_za2pairzd2nilza2zd2zztype_cachez00))
												{	/* Ast/check_type.scm 340 */
													bool_t BgL__ortest_1137z00_1763;

													BgL__ortest_1137z00_1763 =
														(
														((obj_t) BgL_t1z00_62) ==
														BGl_za2pairza2z00zztype_cachez00);
													if (BgL__ortest_1137z00_1763)
														{	/* Ast/check_type.scm 340 */
															return BgL__ortest_1137z00_1763;
														}
													else
														{	/* Ast/check_type.scm 340 */
															bool_t BgL__ortest_1138z00_1764;

															BgL__ortest_1138z00_1764 =
																(
																((obj_t) BgL_t1z00_62) ==
																BGl_za2epairza2z00zztype_cachez00);
															if (BgL__ortest_1138z00_1764)
																{	/* Ast/check_type.scm 340 */
																	return BgL__ortest_1138z00_1764;
																}
															else
																{	/* Ast/check_type.scm 340 */
																	return
																		(
																		((obj_t) BgL_t1z00_62) ==
																		BGl_za2bnilza2z00zztype_cachez00);
																}
														}
												}
											else
												{	/* Ast/check_type.scm 341 */
													bool_t BgL_test2223z00_2909;

													if (
														(((obj_t) BgL_t2z00_63) ==
															BGl_za2pairza2z00zztype_cachez00))
														{	/* Ast/check_type.scm 341 */
															BgL_test2223z00_2909 =
																(BGl_za2epairza2z00zztype_cachez00 ==
																((obj_t) BgL_t1z00_62));
														}
													else
														{	/* Ast/check_type.scm 341 */
															BgL_test2223z00_2909 = ((bool_t) 0);
														}
													if (BgL_test2223z00_2909)
														{	/* Ast/check_type.scm 341 */
															return ((bool_t) 1);
														}
													else
														{	/* Ast/check_type.scm 343 */
															bool_t BgL_test2225z00_2915;

															{	/* Ast/check_type.scm 343 */
																bool_t BgL_test2226z00_2916;

																{	/* Ast/check_type.scm 343 */
																	bool_t BgL_res2080z00_2408;

																	BgL_res2080z00_2408 =
																		BGl_isazf3zf3zz__objectz00(
																		((obj_t) BgL_t1z00_62),
																		BGl_tclassz00zzobject_classz00);
																	BgL_test2226z00_2916 = BgL_res2080z00_2408;
																}
																if (BgL_test2226z00_2916)
																	{	/* Ast/check_type.scm 343 */
																		bool_t BgL_res2081z00_2409;

																		BgL_res2081z00_2409 =
																			BGl_isazf3zf3zz__objectz00(
																			((obj_t) BgL_t2z00_63),
																			BGl_tclassz00zzobject_classz00);
																		BgL_test2225z00_2915 = BgL_res2081z00_2409;
																	}
																else
																	{	/* Ast/check_type.scm 343 */
																		BgL_test2225z00_2915 = ((bool_t) 0);
																	}
															}
															if (BgL_test2225z00_2915)
																{	/* Ast/check_type.scm 343 */
																	return
																		BGl_typezd2subclasszf3z21zzobject_classz00
																		(BgL_t1z00_62, BgL_t2z00_63);
																}
															else
																{	/* Ast/check_type.scm 343 */
																	if (
																		(((obj_t) BgL_t2z00_63) ==
																			BGl_za2objza2z00zztype_cachez00))
																		{	/* Ast/check_type.scm 346 */
																			return ((bool_t) 1);
																		}
																	else
																		{	/* Ast/check_type.scm 349 */
																			bool_t BgL_test2228z00_2925;

																			if (
																				(((obj_t) BgL_t2z00_63) ==
																					BGl_za2foreignza2z00zztype_cachez00))
																				{	/* Ast/check_type.scm 349 */
																					BgL_test2228z00_2925 =
																						BGl_coercerzd2existszf3z21zztype_coercionz00
																						(BgL_t1z00_62, BgL_t2z00_63);
																				}
																			else
																				{	/* Ast/check_type.scm 349 */
																					BgL_test2228z00_2925 = ((bool_t) 0);
																				}
																			if (BgL_test2228z00_2925)
																				{	/* Ast/check_type.scm 349 */
																					return ((bool_t) 1);
																				}
																			else
																				{	/* Ast/check_type.scm 352 */
																					bool_t BgL_test2230z00_2930;

																					if (
																						(((obj_t) BgL_t1z00_62) ==
																							BGl_za2foreignza2z00zztype_cachez00))
																						{	/* Ast/check_type.scm 352 */
																							BgL_test2230z00_2930 =
																								BGl_coercerzd2existszf3z21zztype_coercionz00
																								(BgL_t1z00_62, BgL_t2z00_63);
																						}
																					else
																						{	/* Ast/check_type.scm 352 */
																							BgL_test2230z00_2930 =
																								((bool_t) 0);
																						}
																					if (BgL_test2230z00_2930)
																						{	/* Ast/check_type.scm 352 */
																							return ((bool_t) 1);
																						}
																					else
																						{	/* Ast/check_type.scm 352 */
																							if (
																								((((BgL_typez00_bglt)
																											COBJECT(BgL_t1z00_62))->
																										BgL_idz00) ==
																									CNST_TABLE_REF(((long) 0))))
																								{	/* Ast/check_type.scm 355 */
																									bool_t BgL_res2082z00_2411;

																									BgL_res2082z00_2411 =
																										BGl_isazf3zf3zz__objectz00(
																										((obj_t) BgL_t2z00_63),
																										BGl_tvecz00zztvector_tvectorz00);
																									return BgL_res2082z00_2411;
																								}
																							else
																								{	/* Ast/check_type.scm 355 */
																									return ((bool_t) 0);
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



/* atom-subtype? */
	bool_t BGl_atomzd2subtypezf3z21zzast_checkzd2typezd2(BgL_typez00_bglt
		BgL_t1z00_64, BgL_typez00_bglt BgL_t2z00_65)
	{
		{	/* Ast/check_type.scm 363 */
			if ((((obj_t) BgL_t1z00_64) == BGl_za2_za2z00zztype_cachez00))
				{	/* Ast/check_type.scm 365 */
					return ((bool_t) 1);
				}
			else
				{	/* Ast/check_type.scm 365 */
					if ((((obj_t) BgL_t1z00_64) == ((obj_t) BgL_t2z00_65)))
						{	/* Ast/check_type.scm 367 */
							return ((bool_t) 1);
						}
					else
						{	/* Ast/check_type.scm 369 */
							bool_t BgL_test2235z00_2948;

							if ((((obj_t) BgL_t1z00_64) == BGl_za2longza2z00zztype_cachez00))
								{	/* Ast/check_type.scm 369 */
									BgL_test2235z00_2948 = ((bool_t) 1);
								}
							else
								{	/* Ast/check_type.scm 369 */
									BgL_test2235z00_2948 =
										(((obj_t) BgL_t1z00_64) == BGl_za2intza2z00zztype_cachez00);
								}
							if (BgL_test2235z00_2948)
								{	/* Ast/check_type.scm 370 */
									bool_t BgL__ortest_1139z00_1790;

									BgL__ortest_1139z00_1790 =
										(
										((obj_t) BgL_t2z00_65) == BGl_za2longza2z00zztype_cachez00);
									if (BgL__ortest_1139z00_1790)
										{	/* Ast/check_type.scm 370 */
											return BgL__ortest_1139z00_1790;
										}
									else
										{	/* Ast/check_type.scm 370 */
											return
												(
												((obj_t) BgL_t2z00_65) ==
												BGl_za2intza2z00zztype_cachez00);
										}
								}
							else
								{	/* Ast/check_type.scm 369 */
									return ((bool_t) 0);
								}
						}
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_checkzd2typezd2()
	{
		{	/* Ast/check_type.scm 16 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_checkzd2typezd2()
	{
		{	/* Ast/check_type.scm 16 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
				BGl_proc2113z00zzast_checkzd2typezd2, BGl_nodez00zzast_nodez00,
				BGl_string2114z00zzast_checkzd2typezd2);
		}

	}



/* &check-node-type1285 */
	obj_t BGl_z62checkzd2nodezd2type1285z62zzast_checkzd2typezd2(obj_t
		BgL_envz00_2512, obj_t BgL_nodez00_2513)
	{
		{	/* Ast/check_type.scm 103 */
			{	/* Ast/check_type.scm 104 */
				bool_t BgL_test2238z00_2960;

				if (BGl_za2checkzd2fullza2zd2zzast_checkzd2typezd2)
					{	/* Ast/check_type.scm 104 */
						BgL_typez00_bglt BgL_arg1540z00_2591;

						BgL_arg1540z00_2591 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_nodez00_2513)))->BgL_typez00);
						BgL_test2238z00_2960 =
							(((obj_t) BgL_arg1540z00_2591) == BGl_za2_za2z00zztype_cachez00);
					}
				else
					{	/* Ast/check_type.scm 104 */
						BgL_test2238z00_2960 = ((bool_t) 0);
					}
				if (BgL_test2238z00_2960)
					{	/* Ast/check_type.scm 104 */
						return
							BGl_errzd2nozd2typez00zzast_checkzd2typezd2(
							((BgL_nodez00_bglt) BgL_nodez00_2513));
					}
				else
					{	/* Ast/check_type.scm 104 */
						return BFALSE;
					}
			}
		}

	}



/* check-node-type */
	obj_t BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(BgL_nodez00_bglt
		BgL_nodez00_39)
	{
		{	/* Ast/check_type.scm 103 */
			{	/* Ast/check_type.scm 103 */
				obj_t BgL_method1286z00_1799;

				{	/* Ast/check_type.scm 103 */
					obj_t BgL_res2093z00_2449;

					{	/* Ast/check_type.scm 103 */
						long BgL_objzd2classzd2numz00_2414;

						{	/* Ast/check_type.scm 103 */
							long BgL_res2083z00_2417;

							BgL_res2083z00_2417 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_39));
							BgL_objzd2classzd2numz00_2414 = BgL_res2083z00_2417;
						}
						{	/* Ast/check_type.scm 103 */
							obj_t BgL_arg1813z00_2415;

							BgL_arg1813z00_2415 =
								PROCEDURE_REF
								(BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
								(int) (((long) 1)));
							{	/* Ast/check_type.scm 103 */
								int BgL_offsetz00_2419;

								BgL_offsetz00_2419 = (int) (BgL_objzd2classzd2numz00_2414);
								{	/* Ast/check_type.scm 103 */
									long BgL_offsetz00_2420;

									BgL_offsetz00_2420 =
										((long) (BgL_offsetz00_2419) - OBJECT_TYPE);
									{	/* Ast/check_type.scm 103 */
										long BgL_modz00_2421;

										BgL_modz00_2421 =
											(BgL_offsetz00_2420 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/check_type.scm 103 */
											long BgL_restz00_2423;

											BgL_restz00_2423 =
												(BgL_offsetz00_2420 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/check_type.scm 103 */

												{	/* Ast/check_type.scm 103 */
													obj_t BgL_bucketz00_2425;

													BgL_bucketz00_2425 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2415), BgL_modz00_2421);
													BgL_res2093z00_2449 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2425), BgL_restz00_2423);
					}}}}}}}}
					BgL_method1286z00_1799 = BgL_res2093z00_2449;
				}
				return
					PROCEDURE_ENTRY(BgL_method1286z00_1799) (BgL_method1286z00_1799,
					((obj_t) BgL_nodez00_39), BEOA);
			}
		}

	}



/* &check-node-type */
	obj_t BGl_z62checkzd2nodezd2typez62zzast_checkzd2typezd2(obj_t
		BgL_envz00_2514, obj_t BgL_nodez00_2515)
	{
		{	/* Ast/check_type.scm 103 */
			return
				BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
				((BgL_nodez00_bglt) BgL_nodez00_2515));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_checkzd2typezd2()
	{
		{	/* Ast/check_type.scm 16 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
				BGl_varz00zzast_nodez00, BGl_proc2115z00zzast_checkzd2typezd2,
				BGl_string2116z00zzast_checkzd2typezd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
				BGl_atomz00zzast_nodez00, BGl_proc2117z00zzast_checkzd2typezd2,
				BGl_string2116z00zzast_checkzd2typezd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
				BGl_kwotez00zzast_nodez00, BGl_proc2118z00zzast_checkzd2typezd2,
				BGl_string2116z00zzast_checkzd2typezd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
				BGl_closurez00zzast_nodez00, BGl_proc2119z00zzast_checkzd2typezd2,
				BGl_string2116z00zzast_checkzd2typezd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
				BGl_sequencez00zzast_nodez00, BGl_proc2120z00zzast_checkzd2typezd2,
				BGl_string2116z00zzast_checkzd2typezd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
				BGl_syncz00zzast_nodez00, BGl_proc2121z00zzast_checkzd2typezd2,
				BGl_string2116z00zzast_checkzd2typezd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
				BGl_setqz00zzast_nodez00, BGl_proc2122z00zzast_checkzd2typezd2,
				BGl_string2116z00zzast_checkzd2typezd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
				BGl_conditionalz00zzast_nodez00, BGl_proc2123z00zzast_checkzd2typezd2,
				BGl_string2116z00zzast_checkzd2typezd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
				BGl_failz00zzast_nodez00, BGl_proc2124z00zzast_checkzd2typezd2,
				BGl_string2116z00zzast_checkzd2typezd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
				BGl_switchz00zzast_nodez00, BGl_proc2125z00zzast_checkzd2typezd2,
				BGl_string2116z00zzast_checkzd2typezd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc2126z00zzast_checkzd2typezd2,
				BGl_string2116z00zzast_checkzd2typezd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc2127z00zzast_checkzd2typezd2,
				BGl_string2116z00zzast_checkzd2typezd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc2128z00zzast_checkzd2typezd2,
				BGl_string2116z00zzast_checkzd2typezd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
				BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc2129z00zzast_checkzd2typezd2,
				BGl_string2116z00zzast_checkzd2typezd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc2130z00zzast_checkzd2typezd2,
				BGl_string2116z00zzast_checkzd2typezd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc2131z00zzast_checkzd2typezd2,
				BGl_string2116z00zzast_checkzd2typezd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc2132z00zzast_checkzd2typezd2,
				BGl_string2116z00zzast_checkzd2typezd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc2133z00zzast_checkzd2typezd2,
				BGl_string2116z00zzast_checkzd2typezd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
				BGl_funcallz00zzast_nodez00, BGl_proc2134z00zzast_checkzd2typezd2,
				BGl_string2116z00zzast_checkzd2typezd2);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
				BGl_appz00zzast_nodez00, BGl_proc2135z00zzast_checkzd2typezd2,
				BGl_string2116z00zzast_checkzd2typezd2);
		}

	}



/* &check-node-type-app1326 */
	obj_t BGl_z62checkzd2nodezd2typezd2app1326zb0zzast_checkzd2typezd2(obj_t
		BgL_envz00_2536, obj_t BgL_nodez00_2537)
	{
		{	/* Ast/check_type.scm 310 */
			{	/* Ast/check_type.scm 312 */
				obj_t BgL_g1284z00_2593;

				BgL_g1284z00_2593 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_2537)))->BgL_argsz00);
				{
					obj_t BgL_l1282z00_2595;

					BgL_l1282z00_2595 = BgL_g1284z00_2593;
				BgL_zc3z04anonymousza31977ze3z87_2594:
					if (PAIRP(BgL_l1282z00_2595))
						{	/* Ast/check_type.scm 312 */
							{	/* Ast/check_type.scm 312 */
								obj_t BgL_arg1979z00_2596;

								BgL_arg1979z00_2596 = CAR(BgL_l1282z00_2595);
								BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
									((BgL_nodez00_bglt) BgL_arg1979z00_2596));
							}
							{
								obj_t BgL_l1282z00_3027;

								BgL_l1282z00_3027 = CDR(BgL_l1282z00_2595);
								BgL_l1282z00_2595 = BgL_l1282z00_3027;
								goto BgL_zc3z04anonymousza31977ze3z87_2594;
							}
						}
					else
						{	/* Ast/check_type.scm 312 */
							((bool_t) 1);
						}
				}
			}
			{	/* Ast/check_type.scm 313 */
				bool_t BgL_test2241z00_3029;

				{	/* Ast/check_type.scm 313 */
					BgL_typez00_bglt BgL_arg1990z00_2597;
					BgL_typez00_bglt BgL_arg1991z00_2598;

					BgL_arg1990z00_2597 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_nodez00_2537))))->BgL_typez00);
					BgL_arg1991z00_2598 =
						(((BgL_variablez00_bglt) COBJECT(
								(((BgL_varz00_bglt) COBJECT(
											(((BgL_appz00_bglt) COBJECT(
														((BgL_appz00_bglt) BgL_nodez00_2537)))->
												BgL_funz00)))->BgL_variablez00)))->BgL_typez00);
					BgL_test2241z00_3029 =
						BGl_subtypezf3zf3zzast_checkzd2typezd2(BgL_arg1990z00_2597,
						BgL_arg1991z00_2598);
				}
				if (BgL_test2241z00_3029)
					{	/* Ast/check_type.scm 313 */
						return BFALSE;
					}
				else
					{	/* Ast/check_type.scm 314 */
						BgL_typez00_bglt BgL_arg1986z00_2599;
						BgL_typez00_bglt BgL_arg1987z00_2600;

						BgL_arg1986z00_2599 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_nodez00_2537))))->BgL_typez00);
						BgL_arg1987z00_2600 =
							(((BgL_variablez00_bglt) COBJECT(
									(((BgL_varz00_bglt) COBJECT(
												(((BgL_appz00_bglt) COBJECT(
															((BgL_appz00_bglt) BgL_nodez00_2537)))->
													BgL_funz00)))->BgL_variablez00)))->BgL_typez00);
						return BGl_errz00zzast_checkzd2typezd2(((obj_t) ((BgL_appz00_bglt)
									BgL_nodez00_2537)), BgL_arg1986z00_2599,
							((obj_t) BgL_arg1987z00_2600));
					}
			}
		}

	}



/* &check-node-type-func1324 */
	obj_t BGl_z62checkzd2nodezd2typezd2func1324zb0zzast_checkzd2typezd2(obj_t
		BgL_envz00_2538, obj_t BgL_nodez00_2539)
	{
		{	/* Ast/check_type.scm 300 */
			{

				if (
					((((BgL_funcallz00_bglt) COBJECT(
									((BgL_funcallz00_bglt) BgL_nodez00_2539)))->
							BgL_strengthz00) == CNST_TABLE_REF(((long) 1))))
					{	/* Ast/check_type.scm 302 */
						BFALSE;
					}
				else
					{	/* Ast/check_type.scm 302 */
						BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
							(((BgL_funcallz00_bglt) COBJECT(
										((BgL_funcallz00_bglt) BgL_nodez00_2539)))->BgL_funz00));
					}
				{	/* Ast/check_type.scm 304 */
					obj_t BgL_g1281z00_2604;

					BgL_g1281z00_2604 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2539)))->BgL_argsz00);
					{
						obj_t BgL_l1279z00_2606;

						BgL_l1279z00_2606 = BgL_g1281z00_2604;
					BgL_zc3z04anonymousza31973ze3z87_2605:
						if (PAIRP(BgL_l1279z00_2606))
							{	/* Ast/check_type.scm 304 */
								{	/* Ast/check_type.scm 304 */
									obj_t BgL_arg1975z00_2607;

									BgL_arg1975z00_2607 = CAR(BgL_l1279z00_2606);
									BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
										((BgL_nodez00_bglt) BgL_arg1975z00_2607));
								}
								{
									obj_t BgL_l1279z00_3064;

									BgL_l1279z00_3064 = CDR(BgL_l1279z00_2606);
									BgL_l1279z00_2606 = BgL_l1279z00_3064;
									goto BgL_zc3z04anonymousza31973ze3z87_2605;
								}
							}
						else
							{	/* Ast/check_type.scm 304 */
								((bool_t) 1);
							}
					}
				}
				{	/* Ast/check_type.scm 300 */
					obj_t BgL_nextzd2method1323zd2_2603;

					BgL_nextzd2method1323zd2_2603 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_funcallz00_bglt) BgL_nodez00_2539)),
						BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
						BGl_funcallz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1323zd2_2603)
						(BgL_nextzd2method1323zd2_2603,
						((obj_t) ((BgL_funcallz00_bglt) BgL_nodez00_2539)), BEOA);
				}
			}
		}

	}



/* &check-node-type-app-1322 */
	obj_t BGl_z62checkzd2nodezd2typezd2appzd21322z62zzast_checkzd2typezd2(obj_t
		BgL_envz00_2540, obj_t BgL_nodez00_2541)
	{
		{	/* Ast/check_type.scm 291 */
			{

				BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
					(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2541)))->BgL_funz00));
				BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
					(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2541)))->BgL_argz00));
				{	/* Ast/check_type.scm 291 */
					obj_t BgL_nextzd2method1321zd2_2610;

					BgL_nextzd2method1321zd2_2610 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_2541)),
						BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
						BGl_appzd2lyzd2zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1321zd2_2610)
						(BgL_nextzd2method1321zd2_2610,
						((obj_t) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2541)), BEOA);
				}
			}
		}

	}



/* &check-node-type-box-1320 */
	obj_t BGl_z62checkzd2nodezd2typezd2boxzd21320z62zzast_checkzd2typezd2(obj_t
		BgL_envz00_2542, obj_t BgL_nodez00_2543)
	{
		{	/* Ast/check_type.scm 281 */
			{	/* Ast/check_type.scm 283 */
				BgL_varz00_bglt BgL_arg1961z00_2612;

				BgL_arg1961z00_2612 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2543)))->BgL_varz00);
				BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
					((BgL_nodez00_bglt) BgL_arg1961z00_2612));
			}
			BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
				(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2543)))->BgL_valuez00));
			{	/* Ast/check_type.scm 285 */
				bool_t BgL_test2244z00_3097;

				{	/* Ast/check_type.scm 285 */
					BgL_typez00_bglt BgL_arg1966z00_2613;

					BgL_arg1966z00_2613 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2543))))->
						BgL_typez00);
					BgL_test2244z00_3097 =
						(((obj_t) BgL_arg1966z00_2613) ==
						BGl_za2unspecza2z00zztype_cachez00);
				}
				if (BgL_test2244z00_3097)
					{	/* Ast/check_type.scm 285 */
						return BFALSE;
					}
				else
					{	/* Ast/check_type.scm 286 */
						BgL_typez00_bglt BgL_arg1965z00_2614;

						BgL_arg1965z00_2614 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2543))))->
							BgL_typez00);
						return
							BGl_errz00zzast_checkzd2typezd2(((obj_t) (
									(BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2543)),
							BgL_arg1965z00_2614, BGl_za2unspecza2z00zztype_cachez00);
					}
			}
		}

	}



/* &check-node-type-box-1318 */
	obj_t BGl_z62checkzd2nodezd2typezd2boxzd21318z62zzast_checkzd2typezd2(obj_t
		BgL_envz00_2544, obj_t BgL_nodez00_2545)
	{
		{	/* Ast/check_type.scm 272 */
			{	/* Ast/check_type.scm 274 */
				BgL_varz00_bglt BgL_arg1951z00_2616;

				BgL_arg1951z00_2616 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_nodez00_2545)))->BgL_varz00);
				BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
					((BgL_nodez00_bglt) BgL_arg1951z00_2616));
			}
			{	/* Ast/check_type.scm 275 */
				bool_t BgL_test2245z00_3113;

				{	/* Ast/check_type.scm 275 */
					BgL_typez00_bglt BgL_arg1959z00_2617;

					BgL_arg1959z00_2617 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									(((BgL_boxzd2refzd2_bglt) COBJECT(
												((BgL_boxzd2refzd2_bglt) BgL_nodez00_2545)))->
										BgL_varz00))))->BgL_typez00);
					BgL_test2245z00_3113 =
						BGl_eqtypezf3zf3zzast_checkzd2typezd2
						(BGl_za2cellza2z00zztype_cachez00, ((obj_t) BgL_arg1959z00_2617));
				}
				if (BgL_test2245z00_3113)
					{	/* Ast/check_type.scm 275 */
						return BFALSE;
					}
				else
					{	/* Ast/check_type.scm 276 */
						BgL_typez00_bglt BgL_arg1955z00_2618;
						BgL_typez00_bglt BgL_arg1956z00_2619;

						BgL_arg1955z00_2618 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_boxzd2refzd2_bglt) BgL_nodez00_2545))))->BgL_typez00);
						BgL_arg1956z00_2619 =
							(((BgL_variablez00_bglt) COBJECT(
									(((BgL_varz00_bglt) COBJECT(
												(((BgL_boxzd2refzd2_bglt) COBJECT(
															((BgL_boxzd2refzd2_bglt) BgL_nodez00_2545)))->
													BgL_varz00)))->BgL_variablez00)))->BgL_typez00);
						return
							BGl_errz00zzast_checkzd2typezd2(((obj_t) ((BgL_boxzd2refzd2_bglt)
									BgL_nodez00_2545)), BgL_arg1955z00_2618,
							((obj_t) BgL_arg1956z00_2619));
					}
			}
		}

	}



/* &check-node-type-make1316 */
	obj_t BGl_z62checkzd2nodezd2typezd2make1316zb0zzast_checkzd2typezd2(obj_t
		BgL_envz00_2546, obj_t BgL_nodez00_2547)
	{
		{	/* Ast/check_type.scm 263 */
			BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
				(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_2547)))->BgL_valuez00));
			{	/* Ast/check_type.scm 266 */
				bool_t BgL_test2246z00_3134;

				{	/* Ast/check_type.scm 266 */
					BgL_typez00_bglt BgL_arg1949z00_2621;

					BgL_arg1949z00_2621 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_makezd2boxzd2_bglt) BgL_nodez00_2547))))->BgL_typez00);
					BgL_test2246z00_3134 =
						(((obj_t) BgL_arg1949z00_2621) == BGl_za2cellza2z00zztype_cachez00);
				}
				if (BgL_test2246z00_3134)
					{	/* Ast/check_type.scm 266 */
						return BFALSE;
					}
				else
					{	/* Ast/check_type.scm 267 */
						BgL_typez00_bglt BgL_arg1948z00_2622;

						BgL_arg1948z00_2622 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_makezd2boxzd2_bglt) BgL_nodez00_2547))))->
							BgL_typez00);
						return
							BGl_errz00zzast_checkzd2typezd2(((obj_t) ((BgL_makezd2boxzd2_bglt)
									BgL_nodez00_2547)), BgL_arg1948z00_2622,
							BGl_za2cellza2z00zztype_cachez00);
					}
			}
		}

	}



/* &check-node-type-jump1314 */
	obj_t BGl_z62checkzd2nodezd2typezd2jump1314zb0zzast_checkzd2typezd2(obj_t
		BgL_envz00_2548, obj_t BgL_nodez00_2549)
	{
		{	/* Ast/check_type.scm 253 */
			BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2549)))->BgL_exitz00));
			BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2549)))->BgL_valuez00));
			{	/* Ast/check_type.scm 257 */
				bool_t BgL_test2247z00_3152;

				{	/* Ast/check_type.scm 257 */
					BgL_typez00_bglt BgL_arg1944z00_2624;

					BgL_arg1944z00_2624 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2549))))->
						BgL_typez00);
					BgL_test2247z00_3152 =
						(((obj_t) BgL_arg1944z00_2624) ==
						BGl_za2unspecza2z00zztype_cachez00);
				}
				if (BgL_test2247z00_3152)
					{	/* Ast/check_type.scm 257 */
						return BFALSE;
					}
				else
					{	/* Ast/check_type.scm 258 */
						BgL_typez00_bglt BgL_arg1943z00_2625;

						BgL_arg1943z00_2625 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2549))))->
							BgL_typez00);
						return
							BGl_errz00zzast_checkzd2typezd2(((obj_t) (
									(BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2549)),
							BgL_arg1943z00_2625, BGl_za2unspecza2z00zztype_cachez00);
					}
			}
		}

	}



/* &check-node-type-set-1312 */
	obj_t BGl_z62checkzd2nodezd2typezd2setzd21312z62zzast_checkzd2typezd2(obj_t
		BgL_envz00_2550, obj_t BgL_nodez00_2551)
	{
		{	/* Ast/check_type.scm 243 */
			{	/* Ast/check_type.scm 245 */
				BgL_varz00_bglt BgL_arg1929z00_2627;

				BgL_arg1929z00_2627 =
					(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2551)))->BgL_varz00);
				BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
					((BgL_nodez00_bglt) BgL_arg1929z00_2627));
			}
			BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
				(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2551)))->BgL_bodyz00));
			{	/* Ast/check_type.scm 247 */
				bool_t BgL_test2248z00_3171;

				{	/* Ast/check_type.scm 247 */
					BgL_typez00_bglt BgL_arg1937z00_2628;
					BgL_typez00_bglt BgL_arg1938z00_2629;

					BgL_arg1937z00_2628 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2551))))->
						BgL_typez00);
					BgL_arg1938z00_2629 =
						BGl_getzd2typezd2zztype_typeofz00(((BgL_nodez00_bglt) (
								(BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2551)), ((bool_t) 0));
					BgL_test2248z00_3171 =
						BGl_eqtypezf3zf3zzast_checkzd2typezd2(((obj_t) BgL_arg1937z00_2628),
						((obj_t) BgL_arg1938z00_2629));
				}
				if (BgL_test2248z00_3171)
					{	/* Ast/check_type.scm 247 */
						return BFALSE;
					}
				else
					{	/* Ast/check_type.scm 248 */
						BgL_typez00_bglt BgL_arg1934z00_2630;
						BgL_typez00_bglt BgL_arg1935z00_2631;

						BgL_arg1934z00_2630 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2551))))->
							BgL_typez00);
						BgL_arg1935z00_2631 =
							(((BgL_nodez00_bglt) COBJECT((((BgL_setzd2exzd2itz00_bglt)
											COBJECT(((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2551)))->
										BgL_bodyz00)))->BgL_typez00);
						return
							BGl_errz00zzast_checkzd2typezd2(((obj_t) (
									(BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2551)),
							BgL_arg1934z00_2630, ((obj_t) BgL_arg1935z00_2631));
					}
			}
		}

	}



/* &check-node-type-let-1310 */
	obj_t BGl_z62checkzd2nodezd2typezd2letzd21310z62zzast_checkzd2typezd2(obj_t
		BgL_envz00_2552, obj_t BgL_nodez00_2553)
	{
		{	/* Ast/check_type.scm 233 */
			{	/* Ast/check_type.scm 235 */
				obj_t BgL_g1278z00_2633;

				BgL_g1278z00_2633 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2553)))->BgL_bindingsz00);
				{
					obj_t BgL_l1276z00_2635;

					BgL_l1276z00_2635 = BgL_g1278z00_2633;
				BgL_zc3z04anonymousza31914ze3z87_2634:
					if (PAIRP(BgL_l1276z00_2635))
						{	/* Ast/check_type.scm 235 */
							{	/* Ast/check_type.scm 235 */
								obj_t BgL_bz00_2636;

								BgL_bz00_2636 = CAR(BgL_l1276z00_2635);
								{	/* Ast/check_type.scm 235 */
									obj_t BgL_arg1916z00_2637;

									BgL_arg1916z00_2637 = CDR(((obj_t) BgL_bz00_2636));
									BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
										((BgL_nodez00_bglt) BgL_arg1916z00_2637));
								}
							}
							{
								obj_t BgL_l1276z00_3200;

								BgL_l1276z00_3200 = CDR(BgL_l1276z00_2635);
								BgL_l1276z00_2635 = BgL_l1276z00_3200;
								goto BgL_zc3z04anonymousza31914ze3z87_2634;
							}
						}
					else
						{	/* Ast/check_type.scm 235 */
							((bool_t) 1);
						}
				}
			}
			BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
				(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2553)))->BgL_bodyz00));
			{	/* Ast/check_type.scm 237 */
				bool_t BgL_test2250z00_3205;

				{	/* Ast/check_type.scm 237 */
					BgL_typez00_bglt BgL_arg1926z00_2638;
					BgL_typez00_bglt BgL_arg1927z00_2639;

					BgL_arg1926z00_2638 =
						(((BgL_nodez00_bglt) COBJECT(
								(((BgL_letzd2varzd2_bglt) COBJECT(
											((BgL_letzd2varzd2_bglt) BgL_nodez00_2553)))->
									BgL_bodyz00)))->BgL_typez00);
					BgL_arg1927z00_2639 =
						(((BgL_nodez00_bglt)
							COBJECT(((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt)
										BgL_nodez00_2553))))->BgL_typez00);
					BgL_test2250z00_3205 =
						BGl_subtypezf3zf3zzast_checkzd2typezd2(BgL_arg1926z00_2638,
						BgL_arg1927z00_2639);
				}
				if (BgL_test2250z00_3205)
					{	/* Ast/check_type.scm 237 */
						return BFALSE;
					}
				else
					{	/* Ast/check_type.scm 238 */
						BgL_typez00_bglt BgL_arg1923z00_2640;
						BgL_typez00_bglt BgL_arg1924z00_2641;

						BgL_arg1923z00_2640 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_letzd2varzd2_bglt) BgL_nodez00_2553))))->BgL_typez00);
						BgL_arg1924z00_2641 =
							(((BgL_nodez00_bglt) COBJECT(
									(((BgL_letzd2varzd2_bglt) COBJECT(
												((BgL_letzd2varzd2_bglt) BgL_nodez00_2553)))->
										BgL_bodyz00)))->BgL_typez00);
						return
							BGl_errz00zzast_checkzd2typezd2(((obj_t) ((BgL_letzd2varzd2_bglt)
									BgL_nodez00_2553)), BgL_arg1923z00_2640,
							((obj_t) BgL_arg1924z00_2641));
					}
			}
		}

	}



/* &check-node-type-let-1308 */
	obj_t BGl_z62checkzd2nodezd2typezd2letzd21308z62zzast_checkzd2typezd2(obj_t
		BgL_envz00_2554, obj_t BgL_nodez00_2555)
	{
		{	/* Ast/check_type.scm 223 */
			{	/* Ast/check_type.scm 225 */
				obj_t BgL_g1275z00_2643;

				BgL_g1275z00_2643 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2555)))->BgL_localsz00);
				{
					obj_t BgL_l1273z00_2645;

					BgL_l1273z00_2645 = BgL_g1275z00_2643;
				BgL_zc3z04anonymousza31897ze3z87_2644:
					if (PAIRP(BgL_l1273z00_2645))
						{	/* Ast/check_type.scm 225 */
							{	/* Ast/check_type.scm 225 */
								obj_t BgL_arg1901z00_2646;

								BgL_arg1901z00_2646 = CAR(BgL_l1273z00_2645);
								{	/* Ast/check_type.scm 69 */
									BgL_valuez00_bglt BgL_funz00_2647;

									BgL_funz00_2647 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_arg1901z00_2646)))->
										BgL_valuez00);
									{	/* Ast/check_type.scm 69 */
										obj_t BgL_bodyz00_2648;

										BgL_bodyz00_2648 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_funz00_2647)))->BgL_bodyz00);
										{	/* Ast/check_type.scm 70 */

											BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
												((BgL_nodez00_bglt) BgL_bodyz00_2648));
										}
									}
								}
							}
							{
								obj_t BgL_l1273z00_3234;

								BgL_l1273z00_3234 = CDR(BgL_l1273z00_2645);
								BgL_l1273z00_2645 = BgL_l1273z00_3234;
								goto BgL_zc3z04anonymousza31897ze3z87_2644;
							}
						}
					else
						{	/* Ast/check_type.scm 225 */
							((bool_t) 1);
						}
				}
			}
			BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
				(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2555)))->BgL_bodyz00));
			{	/* Ast/check_type.scm 227 */
				bool_t BgL_test2252z00_3239;

				{	/* Ast/check_type.scm 227 */
					BgL_typez00_bglt BgL_arg1911z00_2649;
					BgL_typez00_bglt BgL_arg1912z00_2650;

					BgL_arg1911z00_2649 =
						(((BgL_nodez00_bglt) COBJECT(
								(((BgL_letzd2funzd2_bglt) COBJECT(
											((BgL_letzd2funzd2_bglt) BgL_nodez00_2555)))->
									BgL_bodyz00)))->BgL_typez00);
					BgL_arg1912z00_2650 =
						(((BgL_nodez00_bglt)
							COBJECT(((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt)
										BgL_nodez00_2555))))->BgL_typez00);
					BgL_test2252z00_3239 =
						BGl_subtypezf3zf3zzast_checkzd2typezd2(BgL_arg1911z00_2649,
						BgL_arg1912z00_2650);
				}
				if (BgL_test2252z00_3239)
					{	/* Ast/check_type.scm 227 */
						return BFALSE;
					}
				else
					{	/* Ast/check_type.scm 228 */
						BgL_typez00_bglt BgL_arg1908z00_2651;
						BgL_typez00_bglt BgL_arg1909z00_2652;

						BgL_arg1908z00_2651 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_letzd2funzd2_bglt) BgL_nodez00_2555))))->BgL_typez00);
						BgL_arg1909z00_2652 =
							(((BgL_nodez00_bglt) COBJECT(
									(((BgL_letzd2funzd2_bglt) COBJECT(
												((BgL_letzd2funzd2_bglt) BgL_nodez00_2555)))->
										BgL_bodyz00)))->BgL_typez00);
						return
							BGl_errz00zzast_checkzd2typezd2(((obj_t) ((BgL_letzd2funzd2_bglt)
									BgL_nodez00_2555)), BgL_arg1908z00_2651,
							((obj_t) BgL_arg1909z00_2652));
					}
			}
		}

	}



/* &check-node-type-swit1306 */
	obj_t BGl_z62checkzd2nodezd2typezd2swit1306zb0zzast_checkzd2typezd2(obj_t
		BgL_envz00_2556, obj_t BgL_nodez00_2557)
	{
		{	/* Ast/check_type.scm 207 */
			{

				BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
					(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2557)))->BgL_testz00));
				{
					obj_t BgL_clausesz00_2657;

					BgL_clausesz00_2657 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2557)))->BgL_clausesz00);
				BgL_loopz00_2656:
					if (NULLP(BgL_clausesz00_2657))
						{	/* Ast/check_type.scm 211 */
							{	/* Ast/check_type.scm 207 */
								obj_t BgL_nextzd2method1305zd2_2655;

								BgL_nextzd2method1305zd2_2655 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									((BgL_objectz00_bglt)
										((BgL_switchz00_bglt) BgL_nodez00_2557)),
									BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
									BGl_switchz00zzast_nodez00);
								return
									PROCEDURE_ENTRY(BgL_nextzd2method1305zd2_2655)
									(BgL_nextzd2method1305zd2_2655,
									((obj_t) ((BgL_switchz00_bglt) BgL_nodez00_2557)), BEOA);
							}
						}
					else
						{	/* Ast/check_type.scm 213 */
							obj_t BgL_clausez00_2658;

							BgL_clausez00_2658 = CAR(((obj_t) BgL_clausesz00_2657));
							{	/* Ast/check_type.scm 214 */
								obj_t BgL_arg1887z00_2659;

								BgL_arg1887z00_2659 = CDR(((obj_t) BgL_clausez00_2658));
								BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
									((BgL_nodez00_bglt) BgL_arg1887z00_2659));
							}
							{	/* Ast/check_type.scm 215 */
								BgL_typez00_bglt BgL_ntypez00_2660;

								BgL_ntypez00_2660 =
									(((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt)
												CDR(((obj_t) BgL_clausez00_2658)))))->BgL_typez00);
								{	/* Ast/check_type.scm 216 */
									bool_t BgL_test2254z00_3281;

									{	/* Ast/check_type.scm 216 */
										BgL_typez00_bglt BgL_arg1895z00_2661;

										BgL_arg1895z00_2661 =
											(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_switchz00_bglt) BgL_nodez00_2557))))->
											BgL_typez00);
										BgL_test2254z00_3281 =
											BGl_subtypezf3zf3zzast_checkzd2typezd2(BgL_ntypez00_2660,
											BgL_arg1895z00_2661);
									}
									if (BgL_test2254z00_3281)
										{	/* Ast/check_type.scm 217 */
											obj_t BgL_arg1891z00_2662;

											BgL_arg1891z00_2662 = CDR(((obj_t) BgL_clausesz00_2657));
											{
												obj_t BgL_clausesz00_3288;

												BgL_clausesz00_3288 = BgL_arg1891z00_2662;
												BgL_clausesz00_2657 = BgL_clausesz00_3288;
												goto BgL_loopz00_2656;
											}
										}
									else
										{	/* Ast/check_type.scm 218 */
											obj_t BgL_arg1892z00_2663;
											BgL_typez00_bglt BgL_arg1893z00_2664;

											BgL_arg1892z00_2663 = CDR(((obj_t) BgL_clausez00_2658));
											BgL_arg1893z00_2664 =
												(((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt)
															((BgL_switchz00_bglt) BgL_nodez00_2557))))->
												BgL_typez00);
											return
												BGl_errz00zzast_checkzd2typezd2(BgL_arg1892z00_2663,
												BgL_ntypez00_2660, ((obj_t) BgL_arg1893z00_2664));
										}
								}
							}
						}
				}
			}
		}

	}



/* &check-node-type-fail1304 */
	obj_t BGl_z62checkzd2nodezd2typezd2fail1304zb0zzast_checkzd2typezd2(obj_t
		BgL_envz00_2558, obj_t BgL_nodez00_2559)
	{
		{	/* Ast/check_type.scm 196 */
			BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2559)))->BgL_procz00));
			BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2559)))->BgL_msgz00));
			BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2559)))->BgL_objz00));
			{	/* Ast/check_type.scm 201 */
				bool_t BgL_test2255z00_3307;

				{	/* Ast/check_type.scm 201 */
					BgL_typez00_bglt BgL_arg1882z00_2666;

					BgL_arg1882z00_2666 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_failz00_bglt) BgL_nodez00_2559))))->BgL_typez00);
					BgL_test2255z00_3307 =
						(
						((obj_t) BgL_arg1882z00_2666) == BGl_za2magicza2z00zztype_cachez00);
				}
				if (BgL_test2255z00_3307)
					{	/* Ast/check_type.scm 201 */
						return BFALSE;
					}
				else
					{	/* Ast/check_type.scm 202 */
						BgL_typez00_bglt BgL_arg1881z00_2667;

						BgL_arg1881z00_2667 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_failz00_bglt) BgL_nodez00_2559))))->BgL_typez00);
						return
							BGl_errz00zzast_checkzd2typezd2(
							((obj_t)
								((BgL_failz00_bglt) BgL_nodez00_2559)), BgL_arg1881z00_2667,
							BGl_za2magicza2z00zztype_cachez00);
					}
			}
		}

	}



/* &check-node-type-cond1302 */
	obj_t BGl_z62checkzd2nodezd2typezd2cond1302zb0zzast_checkzd2typezd2(obj_t
		BgL_envz00_2560, obj_t BgL_nodez00_2561)
	{
		{	/* Ast/check_type.scm 186 */
			{

				BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
					(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2561)))->BgL_testz00));
				BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
					(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2561)))->BgL_truez00));
				BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
					(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2561)))->BgL_falsez00));
				{	/* Ast/check_type.scm 186 */
					obj_t BgL_nextzd2method1301zd2_2670;

					BgL_nextzd2method1301zd2_2670 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_conditionalz00_bglt) BgL_nodez00_2561)),
						BGl_checkzd2nodezd2typezd2envzd2zzast_checkzd2typezd2,
						BGl_conditionalz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1301zd2_2670)
						(BgL_nextzd2method1301zd2_2670,
						((obj_t) ((BgL_conditionalz00_bglt) BgL_nodez00_2561)), BEOA);
				}
			}
		}

	}



/* &check-node-type-setq1300 */
	obj_t BGl_z62checkzd2nodezd2typezd2setq1300zb0zzast_checkzd2typezd2(obj_t
		BgL_envz00_2562, obj_t BgL_nodez00_2563)
	{
		{	/* Ast/check_type.scm 176 */
			BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
				(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2563)))->BgL_valuez00));
			{	/* Ast/check_type.scm 179 */
				BgL_varz00_bglt BgL_arg1863z00_2672;

				BgL_arg1863z00_2672 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2563)))->BgL_varz00);
				BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
					((BgL_nodez00_bglt) BgL_arg1863z00_2672));
			}
			{	/* Ast/check_type.scm 180 */
				bool_t BgL_test2256z00_3344;

				{	/* Ast/check_type.scm 180 */
					BgL_typez00_bglt BgL_arg1870z00_2673;

					BgL_arg1870z00_2673 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_setqz00_bglt) BgL_nodez00_2563))))->BgL_typez00);
					BgL_test2256z00_3344 =
						(
						((obj_t) BgL_arg1870z00_2673) ==
						BGl_za2unspecza2z00zztype_cachez00);
				}
				if (BgL_test2256z00_3344)
					{	/* Ast/check_type.scm 180 */
						return BFALSE;
					}
				else
					{	/* Ast/check_type.scm 181 */
						BgL_typez00_bglt BgL_arg1868z00_2674;

						BgL_arg1868z00_2674 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_setqz00_bglt) BgL_nodez00_2563))))->BgL_typez00);
						return
							BGl_errz00zzast_checkzd2typezd2(
							((obj_t)
								((BgL_setqz00_bglt) BgL_nodez00_2563)), BgL_arg1868z00_2674,
							BGl_za2unspecza2z00zztype_cachez00);
					}
			}
		}

	}



/* &check-node-type-sync1298 */
	obj_t BGl_z62checkzd2nodezd2typezd2sync1298zb0zzast_checkzd2typezd2(obj_t
		BgL_envz00_2564, obj_t BgL_nodez00_2565)
	{
		{	/* Ast/check_type.scm 167 */
			BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2565)))->BgL_mutexz00));
			BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2565)))->BgL_prelockz00));
			return
				BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2565)))->BgL_bodyz00));
		}

	}



/* &check-node-type-sequ1296 */
	obj_t BGl_z62checkzd2nodezd2typezd2sequ1296zb0zzast_checkzd2typezd2(obj_t
		BgL_envz00_2566, obj_t BgL_nodez00_2567)
	{
		{	/* Ast/check_type.scm 154 */
			if (NULLP(
					(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_2567)))->BgL_nodesz00)))
				{	/* Ast/check_type.scm 161 */
					bool_t BgL_test2258z00_3369;

					{	/* Ast/check_type.scm 161 */
						BgL_typez00_bglt BgL_arg1856z00_2677;

						BgL_arg1856z00_2677 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_sequencez00_bglt) BgL_nodez00_2567))))->BgL_typez00);
						BgL_test2258z00_3369 =
							BGl_eqtypezf3zf3zzast_checkzd2typezd2(
							((obj_t) BgL_arg1856z00_2677),
							BGl_za2unspecza2z00zztype_cachez00);
					}
					if (BgL_test2258z00_3369)
						{	/* Ast/check_type.scm 161 */
							return BFALSE;
						}
					else
						{	/* Ast/check_type.scm 162 */
							BgL_typez00_bglt BgL_arg1855z00_2678;

							BgL_arg1855z00_2678 =
								(((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_sequencez00_bglt) BgL_nodez00_2567))))->
								BgL_typez00);
							return
								BGl_errz00zzast_checkzd2typezd2(((obj_t) ((BgL_sequencez00_bglt)
										BgL_nodez00_2567)), BgL_arg1855z00_2678,
								BGl_za2unspecza2z00zztype_cachez00);
						}
				}
			else
				{	/* Ast/check_type.scm 156 */
					{	/* Ast/check_type.scm 158 */
						obj_t BgL_g1272z00_2679;

						BgL_g1272z00_2679 =
							(((BgL_sequencez00_bglt) COBJECT(
									((BgL_sequencez00_bglt) BgL_nodez00_2567)))->BgL_nodesz00);
						{
							obj_t BgL_l1270z00_2681;

							BgL_l1270z00_2681 = BgL_g1272z00_2679;
						BgL_zc3z04anonymousza31828ze3z87_2680:
							if (PAIRP(BgL_l1270z00_2681))
								{	/* Ast/check_type.scm 158 */
									{	/* Ast/check_type.scm 158 */
										obj_t BgL_arg1830z00_2682;

										BgL_arg1830z00_2682 = CAR(BgL_l1270z00_2681);
										BGl_checkzd2nodezd2typez00zzast_checkzd2typezd2(
											((BgL_nodez00_bglt) BgL_arg1830z00_2682));
									}
									{
										obj_t BgL_l1270z00_3388;

										BgL_l1270z00_3388 = CDR(BgL_l1270z00_2681);
										BgL_l1270z00_2681 = BgL_l1270z00_3388;
										goto BgL_zc3z04anonymousza31828ze3z87_2680;
									}
								}
							else
								{	/* Ast/check_type.scm 158 */
									((bool_t) 1);
								}
						}
					}
					{	/* Ast/check_type.scm 159 */
						bool_t BgL_test2260z00_3390;

						{	/* Ast/check_type.scm 159 */
							BgL_typez00_bglt BgL_arg1847z00_2683;
							BgL_typez00_bglt BgL_arg1848z00_2684;

							BgL_arg1847z00_2683 =
								(((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
													(((BgL_sequencez00_bglt) COBJECT(
																((BgL_sequencez00_bglt) BgL_nodez00_2567)))->
														BgL_nodesz00))))))->BgL_typez00);
							BgL_arg1848z00_2684 =
								(((BgL_nodez00_bglt)
									COBJECT(((BgL_nodez00_bglt) ((BgL_sequencez00_bglt)
												BgL_nodez00_2567))))->BgL_typez00);
							BgL_test2260z00_3390 =
								BGl_subtypezf3zf3zzast_checkzd2typezd2(BgL_arg1847z00_2683,
								BgL_arg1848z00_2684);
						}
						if (BgL_test2260z00_3390)
							{	/* Ast/check_type.scm 159 */
								return BFALSE;
							}
						else
							{	/* Ast/check_type.scm 160 */
								BgL_typez00_bglt BgL_arg1840z00_2685;
								BgL_typez00_bglt BgL_arg1841z00_2686;

								BgL_arg1840z00_2685 =
									(((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt)
												CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
														(((BgL_sequencez00_bglt) COBJECT(
																	((BgL_sequencez00_bglt) BgL_nodez00_2567)))->
															BgL_nodesz00))))))->BgL_typez00);
								BgL_arg1841z00_2686 =
									(((BgL_nodez00_bglt)
										COBJECT(((BgL_nodez00_bglt) ((BgL_sequencez00_bglt)
													BgL_nodez00_2567))))->BgL_typez00);
								return
									BGl_errz00zzast_checkzd2typezd2(((obj_t) (
											(BgL_sequencez00_bglt) BgL_nodez00_2567)),
									BgL_arg1840z00_2685, ((obj_t) BgL_arg1841z00_2686));
							}
					}
				}
		}

	}



/* &check-node-type-clos1294 */
	obj_t BGl_z62checkzd2nodezd2typezd2clos1294zb0zzast_checkzd2typezd2(obj_t
		BgL_envz00_2568, obj_t BgL_nodez00_2569)
	{
		{	/* Ast/check_type.scm 146 */
			{	/* Ast/check_type.scm 148 */
				bool_t BgL_test2261z00_3414;

				{	/* Ast/check_type.scm 148 */
					BgL_typez00_bglt BgL_arg1825z00_2688;

					BgL_arg1825z00_2688 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_closurez00_bglt) BgL_nodez00_2569))))->BgL_typez00);
					BgL_test2261z00_3414 =
						(
						((obj_t) BgL_arg1825z00_2688) ==
						BGl_za2procedureza2z00zztype_cachez00);
				}
				if (BgL_test2261z00_3414)
					{	/* Ast/check_type.scm 148 */
						return BFALSE;
					}
				else
					{	/* Ast/check_type.scm 149 */
						BgL_typez00_bglt BgL_arg1824z00_2689;

						BgL_arg1824z00_2689 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_closurez00_bglt) BgL_nodez00_2569))))->BgL_typez00);
						return
							BGl_errz00zzast_checkzd2typezd2(
							((obj_t)
								((BgL_closurez00_bglt) BgL_nodez00_2569)), BgL_arg1824z00_2689,
							BGl_za2procedureza2z00zztype_cachez00);
					}
			}
		}

	}



/* &check-node-type-kwot1292 */
	obj_t BGl_z62checkzd2nodezd2typezd2kwot1292zb0zzast_checkzd2typezd2(obj_t
		BgL_envz00_2570, obj_t BgL_nodez00_2571)
	{
		{	/* Ast/check_type.scm 138 */
			{	/* Ast/check_type.scm 140 */
				bool_t BgL_test2262z00_3426;

				{	/* Ast/check_type.scm 140 */
					BgL_typez00_bglt BgL_arg1808z00_2691;
					BgL_typez00_bglt BgL_arg1809z00_2692;

					BgL_arg1808z00_2691 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_kwotez00_bglt) BgL_nodez00_2571))))->BgL_typez00);
					BgL_arg1809z00_2692 =
						BGl_getzd2typezd2kwotez00zztype_typeofz00(
						(((BgL_kwotez00_bglt) COBJECT(
									((BgL_kwotez00_bglt) BgL_nodez00_2571)))->BgL_valuez00));
					BgL_test2262z00_3426 =
						BGl_eqtypezf3zf3zzast_checkzd2typezd2(
						((obj_t) BgL_arg1808z00_2691), ((obj_t) BgL_arg1809z00_2692));
				}
				if (BgL_test2262z00_3426)
					{	/* Ast/check_type.scm 140 */
						return BFALSE;
					}
				else
					{	/* Ast/check_type.scm 141 */
						BgL_typez00_bglt BgL_arg1796z00_2693;
						BgL_typez00_bglt BgL_arg1798z00_2694;

						BgL_arg1796z00_2693 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_kwotez00_bglt) BgL_nodez00_2571))))->BgL_typez00);
						BgL_arg1798z00_2694 =
							BGl_getzd2typezd2kwotez00zztype_typeofz00(
							(((BgL_kwotez00_bglt) COBJECT(
										((BgL_kwotez00_bglt) BgL_nodez00_2571)))->BgL_valuez00));
						return
							BGl_errz00zzast_checkzd2typezd2(
							((obj_t)
								((BgL_kwotez00_bglt) BgL_nodez00_2571)), BgL_arg1796z00_2693,
							((obj_t) BgL_arg1798z00_2694));
					}
			}
		}

	}



/* &check-node-type-atom1290 */
	obj_t BGl_z62checkzd2nodezd2typezd2atom1290zb0zzast_checkzd2typezd2(obj_t
		BgL_envz00_2572, obj_t BgL_nodez00_2573)
	{
		{	/* Ast/check_type.scm 130 */
			{	/* Ast/check_type.scm 132 */
				bool_t BgL_test2263z00_3446;

				{	/* Ast/check_type.scm 132 */
					BgL_typez00_bglt BgL_arg1775z00_2696;
					BgL_typez00_bglt BgL_arg1778z00_2697;

					BgL_arg1775z00_2696 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_atomz00_bglt) BgL_nodez00_2573))))->BgL_typez00);
					BgL_arg1778z00_2697 =
						BGl_getzd2typezd2atomz00zztype_typeofz00(
						(((BgL_atomz00_bglt) COBJECT(
									((BgL_atomz00_bglt) BgL_nodez00_2573)))->BgL_valuez00));
					BgL_test2263z00_3446 =
						BGl_atomzd2subtypezf3z21zzast_checkzd2typezd2(BgL_arg1775z00_2696,
						BgL_arg1778z00_2697);
				}
				if (BgL_test2263z00_3446)
					{	/* Ast/check_type.scm 132 */
						return BFALSE;
					}
				else
					{	/* Ast/check_type.scm 133 */
						BgL_typez00_bglt BgL_arg1761z00_2698;
						BgL_typez00_bglt BgL_arg1768z00_2699;

						BgL_arg1761z00_2698 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_atomz00_bglt) BgL_nodez00_2573))))->BgL_typez00);
						BgL_arg1768z00_2699 =
							BGl_getzd2typezd2atomz00zztype_typeofz00(
							(((BgL_atomz00_bglt) COBJECT(
										((BgL_atomz00_bglt) BgL_nodez00_2573)))->BgL_valuez00));
						return
							BGl_errz00zzast_checkzd2typezd2(
							((obj_t)
								((BgL_atomz00_bglt) BgL_nodez00_2573)), BgL_arg1761z00_2698,
							((obj_t) BgL_arg1768z00_2699));
					}
			}
		}

	}



/* &check-node-type-var1288 */
	obj_t BGl_z62checkzd2nodezd2typezd2var1288zb0zzast_checkzd2typezd2(obj_t
		BgL_envz00_2574, obj_t BgL_nodez00_2575)
	{
		{	/* Ast/check_type.scm 110 */
			{	/* Ast/check_type.scm 112 */
				BgL_variablez00_bglt BgL_i1112z00_2701;

				BgL_i1112z00_2701 =
					(((BgL_varz00_bglt) COBJECT(
							((BgL_varz00_bglt) BgL_nodez00_2575)))->BgL_variablez00);
				{	/* Ast/check_type.scm 113 */
					bool_t BgL_test2264z00_3466;

					{	/* Ast/check_type.scm 113 */
						BgL_valuez00_bglt BgL_arg1754z00_2702;

						BgL_arg1754z00_2702 =
							(((BgL_variablez00_bglt) COBJECT(
									(((BgL_varz00_bglt) COBJECT(
												((BgL_varz00_bglt) BgL_nodez00_2575)))->
										BgL_variablez00)))->BgL_valuez00);
						{	/* Ast/check_type.scm 113 */
							bool_t BgL_res2094z00_2703;

							BgL_res2094z00_2703 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_arg1754z00_2702), BGl_sfunz00zzast_varz00);
							BgL_test2264z00_3466 = BgL_res2094z00_2703;
						}
					}
					if (BgL_test2264z00_3466)
						{	/* Ast/check_type.scm 113 */
							return BFALSE;
						}
					else
						{	/* Ast/check_type.scm 113 */
							{	/* Ast/check_type.scm 114 */
								bool_t BgL_test2265z00_3472;

								{	/* Ast/check_type.scm 114 */
									bool_t BgL_test2266z00_3473;

									{	/* Ast/check_type.scm 114 */
										BgL_typez00_bglt BgL_arg1719z00_2704;
										BgL_typez00_bglt BgL_arg1725z00_2705;

										BgL_arg1719z00_2704 =
											(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_varz00_bglt) BgL_nodez00_2575))))->
											BgL_typez00);
										BgL_arg1725z00_2705 =
											(((BgL_variablez00_bglt) COBJECT(BgL_i1112z00_2701))->
											BgL_typez00);
										BgL_test2266z00_3473 =
											BGl_subtypezf3zf3zzast_checkzd2typezd2
											(BgL_arg1719z00_2704, BgL_arg1725z00_2705);
									}
									if (BgL_test2266z00_3473)
										{	/* Ast/check_type.scm 114 */
											BgL_test2265z00_3472 = ((bool_t) 1);
										}
									else
										{	/* Ast/check_type.scm 115 */
											bool_t BgL_test2267z00_3479;

											{	/* Ast/check_type.scm 115 */
												bool_t BgL_test2268z00_3480;

												{	/* Ast/check_type.scm 115 */
													BgL_typez00_bglt BgL_arg1712z00_2706;

													BgL_arg1712z00_2706 =
														(((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt)
																	((BgL_varz00_bglt) BgL_nodez00_2575))))->
														BgL_typez00);
													BgL_test2268z00_3480 =
														(((obj_t) BgL_arg1712z00_2706) ==
														BGl_za2objza2z00zztype_cachez00);
												}
												if (BgL_test2268z00_3480)
													{	/* Ast/check_type.scm 115 */
														BgL_test2267z00_3479 =
															BGl_bigloozd2typezf3z21zztype_typez00(
															(((BgL_variablez00_bglt)
																	COBJECT(BgL_i1112z00_2701))->BgL_typez00));
													}
												else
													{	/* Ast/check_type.scm 115 */
														BgL_test2267z00_3479 = ((bool_t) 0);
													}
											}
											if (BgL_test2267z00_3479)
												{	/* Ast/check_type.scm 115 */
													BgL_test2265z00_3472 = ((bool_t) 1);
												}
											else
												{	/* Ast/check_type.scm 116 */
													bool_t BgL_test2269z00_3488;

													{	/* Ast/check_type.scm 116 */
														BgL_typez00_bglt BgL_arg1708z00_2707;

														BgL_arg1708z00_2707 =
															(((BgL_variablez00_bglt)
																COBJECT(BgL_i1112z00_2701))->BgL_typez00);
														{	/* Ast/check_type.scm 116 */
															bool_t BgL_res2095z00_2708;

															BgL_res2095z00_2708 =
																BGl_isazf3zf3zz__objectz00(
																((obj_t) BgL_arg1708z00_2707),
																BGl_tclassz00zzobject_classz00);
															BgL_test2269z00_3488 = BgL_res2095z00_2708;
														}
													}
													if (BgL_test2269z00_3488)
														{	/* Ast/check_type.scm 116 */
															BgL_typez00_bglt BgL_arg1704z00_2709;
															BgL_typez00_bglt BgL_arg1707z00_2710;

															BgL_arg1704z00_2709 =
																(((BgL_variablez00_bglt)
																	COBJECT(BgL_i1112z00_2701))->BgL_typez00);
															BgL_arg1707z00_2710 =
																(((BgL_nodez00_bglt)
																	COBJECT(((BgL_nodez00_bglt) ((BgL_varz00_bglt)
																				BgL_nodez00_2575))))->BgL_typez00);
															BgL_test2265z00_3472 =
																BGl_subtypezf3zf3zzast_checkzd2typezd2
																(BgL_arg1704z00_2709, BgL_arg1707z00_2710);
														}
													else
														{	/* Ast/check_type.scm 116 */
															BgL_test2265z00_3472 = ((bool_t) 0);
														}
												}
										}
								}
								if (BgL_test2265z00_3472)
									{	/* Ast/check_type.scm 114 */
										BFALSE;
									}
								else
									{	/* Ast/check_type.scm 114 */
										{	/* Ast/check_type.scm 117 */
											obj_t BgL_arg1599z00_2711;
											obj_t BgL_arg1604z00_2712;
											obj_t BgL_arg1605z00_2713;
											obj_t BgL_arg1606z00_2714;
											obj_t BgL_arg1611z00_2715;
											bool_t BgL_arg1612z00_2716;
											bool_t BgL_arg1613z00_2717;

											{	/* Ast/check_type.scm 117 */
												obj_t BgL_res2096z00_2718;

												{	/* Ast/check_type.scm 117 */
													obj_t BgL_tmpz00_3497;

													BgL_tmpz00_3497 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res2096z00_2718 =
														BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_3497);
												}
												BgL_arg1599z00_2711 = BgL_res2096z00_2718;
											}
											BgL_arg1604z00_2712 =
												BGl_shapez00zztools_shapez00(
												((obj_t) ((BgL_varz00_bglt) BgL_nodez00_2575)));
											BgL_arg1605z00_2713 =
												(((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt)
															((BgL_varz00_bglt) BgL_nodez00_2575))))->
												BgL_locz00);
											{	/* Ast/check_type.scm 118 */
												BgL_typez00_bglt BgL_arg1685z00_2719;

												BgL_arg1685z00_2719 =
													(((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt)
																((BgL_varz00_bglt) BgL_nodez00_2575))))->
													BgL_typez00);
												BgL_arg1606z00_2714 =
													BGl_shapez00zztools_shapez00(((obj_t)
														BgL_arg1685z00_2719));
											}
											{	/* Ast/check_type.scm 118 */
												BgL_typez00_bglt BgL_arg1686z00_2720;

												BgL_arg1686z00_2720 =
													(((BgL_variablez00_bglt) COBJECT(BgL_i1112z00_2701))->
													BgL_typez00);
												BgL_arg1611z00_2715 =
													BGl_shapez00zztools_shapez00(((obj_t)
														BgL_arg1686z00_2720));
											}
											BgL_arg1612z00_2716 =
												(
												((obj_t)
													(((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt)
																	((BgL_varz00_bglt) BgL_nodez00_2575))))->
														BgL_typez00)) ==
												((obj_t) (((BgL_variablez00_bglt)
															COBJECT(BgL_i1112z00_2701))->BgL_typez00)));
											{	/* Ast/check_type.scm 119 */
												BgL_typez00_bglt BgL_arg1692z00_2721;
												BgL_typez00_bglt BgL_arg1695z00_2722;

												BgL_arg1692z00_2721 =
													(((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt)
																((BgL_varz00_bglt) BgL_nodez00_2575))))->
													BgL_typez00);
												BgL_arg1695z00_2722 =
													(((BgL_variablez00_bglt) COBJECT(BgL_i1112z00_2701))->
													BgL_typez00);
												BgL_arg1613z00_2717 =
													BGl_subtypezf3zf3zzast_checkzd2typezd2
													(BgL_arg1692z00_2721, BgL_arg1695z00_2722);
											}
											{	/* Ast/check_type.scm 117 */
												obj_t BgL_list1614z00_2723;

												{	/* Ast/check_type.scm 117 */
													obj_t BgL_arg1624z00_2724;

													{	/* Ast/check_type.scm 117 */
														obj_t BgL_arg1626z00_2725;

														{	/* Ast/check_type.scm 117 */
															obj_t BgL_arg1627z00_2726;

															{	/* Ast/check_type.scm 117 */
																obj_t BgL_arg1631z00_2727;

																{	/* Ast/check_type.scm 117 */
																	obj_t BgL_arg1634z00_2728;

																	{	/* Ast/check_type.scm 117 */
																		obj_t BgL_arg1639z00_2729;

																		{	/* Ast/check_type.scm 117 */
																			obj_t BgL_arg1640z00_2730;

																			{	/* Ast/check_type.scm 117 */
																				obj_t BgL_arg1641z00_2731;

																				{	/* Ast/check_type.scm 117 */
																					obj_t BgL_arg1644z00_2732;

																					{	/* Ast/check_type.scm 117 */
																						obj_t BgL_arg1652z00_2733;

																						{	/* Ast/check_type.scm 117 */
																							obj_t BgL_arg1662z00_2734;

																							{	/* Ast/check_type.scm 117 */
																								obj_t BgL_arg1663z00_2735;

																								{	/* Ast/check_type.scm 117 */
																									obj_t BgL_arg1664z00_2736;

																									{	/* Ast/check_type.scm 117 */
																										obj_t BgL_arg1667z00_2737;

																										{	/* Ast/check_type.scm 117 */
																											obj_t BgL_arg1669z00_2738;

																											{	/* Ast/check_type.scm 117 */
																												obj_t
																													BgL_arg1672z00_2739;
																												{	/* Ast/check_type.scm 117 */
																													obj_t
																														BgL_arg1684z00_2740;
																													BgL_arg1684z00_2740 =
																														MAKE_YOUNG_PAIR
																														(BBOOL
																														(BGl_za2checkzd2fullza2zd2zzast_checkzd2typezd2),
																														BNIL);
																													BgL_arg1672z00_2739 =
																														MAKE_YOUNG_PAIR
																														(BGl_string2136z00zzast_checkzd2typezd2,
																														BgL_arg1684z00_2740);
																												}
																												BgL_arg1669z00_2738 =
																													MAKE_YOUNG_PAIR(BBOOL
																													(BgL_arg1613z00_2717),
																													BgL_arg1672z00_2739);
																											}
																											BgL_arg1667z00_2737 =
																												MAKE_YOUNG_PAIR
																												(BGl_string2137z00zzast_checkzd2typezd2,
																												BgL_arg1669z00_2738);
																										}
																										BgL_arg1664z00_2736 =
																											MAKE_YOUNG_PAIR(BBOOL
																											(BgL_arg1612z00_2716),
																											BgL_arg1667z00_2737);
																									}
																									BgL_arg1663z00_2735 =
																										MAKE_YOUNG_PAIR
																										(BGl_string2138z00zzast_checkzd2typezd2,
																										BgL_arg1664z00_2736);
																								}
																								BgL_arg1662z00_2734 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1611z00_2715,
																									BgL_arg1663z00_2735);
																							}
																							BgL_arg1652z00_2733 =
																								MAKE_YOUNG_PAIR
																								(BGl_string2139z00zzast_checkzd2typezd2,
																								BgL_arg1662z00_2734);
																						}
																						BgL_arg1644z00_2732 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1606z00_2714,
																							BgL_arg1652z00_2733);
																					}
																					BgL_arg1641z00_2731 =
																						MAKE_YOUNG_PAIR
																						(BGl_string2140z00zzast_checkzd2typezd2,
																						BgL_arg1644z00_2732);
																				}
																				BgL_arg1640z00_2730 =
																					MAKE_YOUNG_PAIR(BgL_arg1605z00_2713,
																					BgL_arg1641z00_2731);
																			}
																			BgL_arg1639z00_2729 =
																				MAKE_YOUNG_PAIR
																				(BGl_string2141z00zzast_checkzd2typezd2,
																				BgL_arg1640z00_2730);
																		}
																		BgL_arg1634z00_2728 =
																			MAKE_YOUNG_PAIR(BgL_arg1604z00_2712,
																			BgL_arg1639z00_2729);
																	}
																	BgL_arg1631z00_2727 =
																		MAKE_YOUNG_PAIR
																		(BGl_string2142z00zzast_checkzd2typezd2,
																		BgL_arg1634z00_2728);
																}
																BgL_arg1627z00_2726 =
																	MAKE_YOUNG_PAIR
																	(BGl_string2143z00zzast_checkzd2typezd2,
																	BgL_arg1631z00_2727);
															}
															BgL_arg1626z00_2725 =
																MAKE_YOUNG_PAIR(BINT(((long) 117)),
																BgL_arg1627z00_2726);
														}
														BgL_arg1624z00_2724 =
															MAKE_YOUNG_PAIR
															(BGl_string2144z00zzast_checkzd2typezd2,
															BgL_arg1626z00_2725);
													}
													BgL_list1614z00_2723 =
														MAKE_YOUNG_PAIR
														(BGl_string2145z00zzast_checkzd2typezd2,
														BgL_arg1624z00_2724);
												}
												BGl_tprintz00zz__r4_output_6_10_3z00
													(BgL_arg1599z00_2711, BgL_list1614z00_2723);
										}}
										{	/* Ast/check_type.scm 121 */
											BgL_typez00_bglt BgL_arg1696z00_2741;
											BgL_typez00_bglt BgL_arg1697z00_2742;

											BgL_arg1696z00_2741 =
												(((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt)
															((BgL_varz00_bglt) BgL_nodez00_2575))))->
												BgL_typez00);
											BgL_arg1697z00_2742 =
												(((BgL_variablez00_bglt) COBJECT(BgL_i1112z00_2701))->
												BgL_typez00);
											BGl_errz00zzast_checkzd2typezd2(((obj_t) (
														(BgL_varz00_bglt) BgL_nodez00_2575)),
												BgL_arg1696z00_2741, ((obj_t) BgL_arg1697z00_2742));
							}}}
							{	/* Ast/check_type.scm 122 */
								bool_t BgL_test2270z00_3557;

								{	/* Ast/check_type.scm 122 */
									bool_t BgL_test2271z00_3558;

									{	/* Ast/check_type.scm 122 */
										BgL_typez00_bglt BgL_arg1747z00_2743;

										BgL_arg1747z00_2743 =
											(((BgL_variablez00_bglt) COBJECT(BgL_i1112z00_2701))->
											BgL_typez00);
										BgL_test2271z00_3558 =
											(((obj_t) BgL_arg1747z00_2743) ==
											BGl_za2_za2z00zztype_cachez00);
									}
									if (BgL_test2271z00_3558)
										{	/* Ast/check_type.scm 123 */
											bool_t BgL_test2272z00_3562;

											{	/* Ast/check_type.scm 123 */
												BgL_variablez00_bglt BgL_arg1746z00_2744;

												BgL_arg1746z00_2744 =
													(((BgL_varz00_bglt) COBJECT(
															((BgL_varz00_bglt) BgL_nodez00_2575)))->
													BgL_variablez00);
												{	/* Ast/check_type.scm 123 */
													bool_t BgL_res2097z00_2745;

													BgL_res2097z00_2745 =
														BGl_isazf3zf3zz__objectz00(
														((obj_t) BgL_arg1746z00_2744),
														BGl_globalz00zzast_varz00);
													BgL_test2272z00_3562 = BgL_res2097z00_2745;
												}
											}
											if (BgL_test2272z00_3562)
												{	/* Ast/check_type.scm 123 */
													if (
														((((BgL_globalz00_bglt) COBJECT(
																		((BgL_globalz00_bglt)
																			(((BgL_varz00_bglt) COBJECT(
																						((BgL_varz00_bglt)
																							BgL_nodez00_2575)))->
																				BgL_variablez00))))->BgL_importz00) ==
															CNST_TABLE_REF(((long) 2))))
														{	/* Ast/check_type.scm 124 */
															BgL_test2270z00_3557 = ((bool_t) 0);
														}
													else
														{	/* Ast/check_type.scm 124 */
															BgL_test2270z00_3557 = ((bool_t) 1);
														}
												}
											else
												{	/* Ast/check_type.scm 123 */
													BgL_test2270z00_3557 = ((bool_t) 0);
												}
										}
									else
										{	/* Ast/check_type.scm 122 */
											BgL_test2270z00_3557 = ((bool_t) 0);
										}
								}
								if (BgL_test2270z00_3557)
									{	/* Ast/check_type.scm 122 */
										return
											BGl_errzd2nozd2typez00zzast_checkzd2typezd2(
											((BgL_nodez00_bglt)
												((BgL_varz00_bglt) BgL_nodez00_2575)));
									}
								else
									{	/* Ast/check_type.scm 122 */
										return BFALSE;
									}
							}
						}
				}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_checkzd2typezd2()
	{
		{	/* Ast/check_type.scm 16 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string2146z00zzast_checkzd2typezd2));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2146z00zzast_checkzd2typezd2));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string2146z00zzast_checkzd2typezd2));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2146z00zzast_checkzd2typezd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2146z00zzast_checkzd2typezd2));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2146z00zzast_checkzd2typezd2));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string2146z00zzast_checkzd2typezd2));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2146z00zzast_checkzd2typezd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2146z00zzast_checkzd2typezd2));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2146z00zzast_checkzd2typezd2));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2146z00zzast_checkzd2typezd2));
			BGl_modulezd2initializa7ationz75zztype_coercionz00(((long) 116865717),
				BSTRING_TO_STRING(BGl_string2146z00zzast_checkzd2typezd2));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string2146z00zzast_checkzd2typezd2));
			BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 501518159),
				BSTRING_TO_STRING(BGl_string2146z00zzast_checkzd2typezd2));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string2146z00zzast_checkzd2typezd2));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2146z00zzast_checkzd2typezd2));
			BGl_modulezd2initializa7ationz75zzmodule_includez00(((long) 184800297),
				BSTRING_TO_STRING(BGl_string2146z00zzast_checkzd2typezd2));
			return
				BGl_modulezd2initializa7ationz75zzmodule_classz00(((long) 153808388),
				BSTRING_TO_STRING(BGl_string2146z00zzast_checkzd2typezd2));
		}

	}

#ifdef __cplusplus
}
#endif
