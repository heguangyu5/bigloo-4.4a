/*===========================================================================*/
/*   (Ast/check_sharing.scm)                                                 */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/check_sharing.scm) */
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


	BGL_EXPORTED_DECL obj_t BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	static obj_t
		BGl_z62checkzd2nodezd2sharingzd2resetz12za2zzast_checkzd2sharingzd2(obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzast_checkzd2sharingzd2();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static bool_t BGl_checkzd2nodezd2sharingza2za2zzast_checkzd2sharingzd2(obj_t,
		BgL_nodez00_bglt);
	static obj_t BGl_z62checkzd2nodezd2sharingz62zzast_checkzd2sharingzd2(obj_t,
		obj_t, obj_t);
	static obj_t BGl_za2previousza2z00zzast_checkzd2sharingzd2 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zzast_checkzd2sharingzd2();
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t
		BGl_z62checkzd2nodezd2sharingzd2j1293zb0zzast_checkzd2sharingzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62checkzd2nodezd2sharingzd2l1287zb0zzast_checkzd2sharingzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62checkzd2nodezd2sharingzd2l1289zb0zzast_checkzd2sharingzd2(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_z62checkzd2sharingzb0zzast_checkzd2sharingzd2(obj_t, obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_checkzd2sharingzd2();
	BGL_EXPORTED_DECL obj_t
		BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2(BgL_nodez00_bglt,
		obj_t);
	static obj_t
		BGl_z62checkzd2nodezd2sharingzd2m1295zb0zzast_checkzd2sharingzd2(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_za2checkzd2sharingzd2passza2z00zzast_checkzd2sharingzd2 =
		BUNSPEC;
	BGL_IMPORT obj_t bgl_find_runtime_type(obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzast_checkzd2sharingzd2 =
		BUNSPEC;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzast_checkzd2sharingzd2();
	static obj_t
		BGl_z62checkzd2nodezd2sharingzd2a1269zb0zzast_checkzd2sharingzd2(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t
		BGl_z62checkzd2nodezd2sharingzd2a1271zb0zzast_checkzd2sharingzd2(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzast_checkzd2sharingzd2();
	extern obj_t BGl_castz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_checkzd2nodezd2sharingzd2resetz12zc0zzast_checkzd2sharingzd2();
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62checkzd2nodezd2sharingzd2b1297zb0zzast_checkzd2sharingzd2(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	static obj_t
		BGl_z62checkzd2nodezd2sharingzd2s1265zb0zzast_checkzd2sharingzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62checkzd2nodezd2sharingzd2s1267zb0zzast_checkzd2sharingzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62checkzd2nodezd2sharingzd2c1277zb0zzast_checkzd2sharingzd2(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2compilerzd2sharingzd2debugzf3za2zf3zzengine_paramz00;
	static obj_t
		BGl_z62checkzd2nodezd2sharingzd2s1279zb0zzast_checkzd2sharingzd2(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t
		BGl_z62checkzd2nodezd2sharingzd2c1281zb0zzast_checkzd2sharingzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62checkzd2nodezd2sharingzd2s1285zb0zzast_checkzd2sharingzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62checkzd2nodezd2sharingzd2s1291zb0zzast_checkzd2sharingzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62checkzd2nodezd2sharing1262z62zzast_checkzd2sharingzd2(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzast_checkzd2sharingzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_includez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
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
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzast_checkzd2sharingzd2();
	static obj_t
		BGl_z62checkzd2nodezd2sharingzd2e1275zb0zzast_checkzd2sharingzd2(obj_t,
		obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_checkzd2sharingzd2();
	static obj_t BGl_importedzd2moduleszd2initz00zzast_checkzd2sharingzd2();
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t
		BGl_z62checkzd2nodezd2sharingzd2f1273zb0zzast_checkzd2sharingzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62checkzd2nodezd2sharingzd2f1283zb0zzast_checkzd2sharingzd2(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t __cnst[1];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1744z00zzast_checkzd2sharingzd2,
		BgL_bgl_za762checkza7d2nodeza71777za7,
		BGl_z62checkzd2nodezd2sharing1262z62zzast_checkzd2sharingzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1751z00zzast_checkzd2sharingzd2,
		BgL_bgl_za762checkza7d2nodeza71778za7,
		BGl_z62checkzd2nodezd2sharingzd2s1265zb0zzast_checkzd2sharingzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1753z00zzast_checkzd2sharingzd2,
		BgL_bgl_za762checkza7d2nodeza71779za7,
		BGl_z62checkzd2nodezd2sharingzd2s1267zb0zzast_checkzd2sharingzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1754z00zzast_checkzd2sharingzd2,
		BgL_bgl_za762checkza7d2nodeza71780za7,
		BGl_z62checkzd2nodezd2sharingzd2a1269zb0zzast_checkzd2sharingzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1755z00zzast_checkzd2sharingzd2,
		BgL_bgl_za762checkza7d2nodeza71781za7,
		BGl_z62checkzd2nodezd2sharingzd2a1271zb0zzast_checkzd2sharingzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1756z00zzast_checkzd2sharingzd2,
		BgL_bgl_za762checkza7d2nodeza71782za7,
		BGl_z62checkzd2nodezd2sharingzd2f1273zb0zzast_checkzd2sharingzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1757z00zzast_checkzd2sharingzd2,
		BgL_bgl_za762checkza7d2nodeza71783za7,
		BGl_z62checkzd2nodezd2sharingzd2e1275zb0zzast_checkzd2sharingzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1758z00zzast_checkzd2sharingzd2,
		BgL_bgl_za762checkza7d2nodeza71784za7,
		BGl_z62checkzd2nodezd2sharingzd2c1277zb0zzast_checkzd2sharingzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1759z00zzast_checkzd2sharingzd2,
		BgL_bgl_za762checkza7d2nodeza71785za7,
		BGl_z62checkzd2nodezd2sharingzd2s1279zb0zzast_checkzd2sharingzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1760z00zzast_checkzd2sharingzd2,
		BgL_bgl_za762checkza7d2nodeza71786za7,
		BGl_z62checkzd2nodezd2sharingzd2c1281zb0zzast_checkzd2sharingzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1761z00zzast_checkzd2sharingzd2,
		BgL_bgl_za762checkza7d2nodeza71787za7,
		BGl_z62checkzd2nodezd2sharingzd2f1283zb0zzast_checkzd2sharingzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1762z00zzast_checkzd2sharingzd2,
		BgL_bgl_za762checkza7d2nodeza71788za7,
		BGl_z62checkzd2nodezd2sharingzd2s1285zb0zzast_checkzd2sharingzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1763z00zzast_checkzd2sharingzd2,
		BgL_bgl_za762checkza7d2nodeza71789za7,
		BGl_z62checkzd2nodezd2sharingzd2l1287zb0zzast_checkzd2sharingzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1764z00zzast_checkzd2sharingzd2,
		BgL_bgl_za762checkza7d2nodeza71790za7,
		BGl_z62checkzd2nodezd2sharingzd2l1289zb0zzast_checkzd2sharingzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1765z00zzast_checkzd2sharingzd2,
		BgL_bgl_za762checkza7d2nodeza71791za7,
		BGl_z62checkzd2nodezd2sharingzd2s1291zb0zzast_checkzd2sharingzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1766z00zzast_checkzd2sharingzd2,
		BgL_bgl_za762checkza7d2nodeza71792za7,
		BGl_z62checkzd2nodezd2sharingzd2j1293zb0zzast_checkzd2sharingzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1767z00zzast_checkzd2sharingzd2,
		BgL_bgl_za762checkza7d2nodeza71793za7,
		BGl_z62checkzd2nodezd2sharingzd2m1295zb0zzast_checkzd2sharingzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1768z00zzast_checkzd2sharingzd2,
		BgL_bgl_za762checkza7d2nodeza71794za7,
		BGl_z62checkzd2nodezd2sharingzd2b1297zb0zzast_checkzd2sharingzd2, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
		BgL_bgl_za762checkza7d2nodeza71795za7,
		BGl_z62checkzd2nodezd2sharingz62zzast_checkzd2sharingzd2, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1739z00zzast_checkzd2sharingzd2,
		BgL_bgl_string1739za700za7za7a1796za7, " error", 6);
	      DEFINE_STRING(BGl_string1740z00zzast_checkzd2sharingzd2,
		BgL_bgl_string1740za700za7za7a1797za7, "s", 1);
	      DEFINE_STRING(BGl_string1741z00zzast_checkzd2sharingzd2,
		BgL_bgl_string1741za700za7za7a1798za7, "", 0);
	      DEFINE_STRING(BGl_string1742z00zzast_checkzd2sharingzd2,
		BgL_bgl_string1742za700za7za7a1799za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string1743z00zzast_checkzd2sharingzd2,
		BgL_bgl_string1743za700za7za7a1800za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string1745z00zzast_checkzd2sharingzd2,
		BgL_bgl_string1745za700za7za7a1801za7, "check-node-sharing1262", 22);
	      DEFINE_STRING(BGl_string1746z00zzast_checkzd2sharingzd2,
		BgL_bgl_string1746za700za7za7a1802za7, "check-node-sharing (~a)", 23);
	      DEFINE_STRING(BGl_string1747z00zzast_checkzd2sharingzd2,
		BgL_bgl_string1747za700za7za7a1803za7, "shared node", 11);
	      DEFINE_STRING(BGl_string1748z00zzast_checkzd2sharingzd2,
		BgL_bgl_string1748za700za7za7a1804za7, "node    : ", 10);
	      DEFINE_STRING(BGl_string1749z00zzast_checkzd2sharingzd2,
		BgL_bgl_string1749za700za7za7a1805za7, "context : ", 10);
	      DEFINE_STRING(BGl_string1750z00zzast_checkzd2sharingzd2,
		BgL_bgl_string1750za700za7za7a1806za7, "================================",
		32);
	      DEFINE_STRING(BGl_string1752z00zzast_checkzd2sharingzd2,
		BgL_bgl_string1752za700za7za7a1807za7, "check-node-sharing", 18);
	      DEFINE_STRING(BGl_string1769z00zzast_checkzd2sharingzd2,
		BgL_bgl_string1769za700za7za7a1808za7, "ast_check-sharing", 17);
	      DEFINE_STRING(BGl_string1770z00zzast_checkzd2sharingzd2,
		BgL_bgl_string1770za700za7za7a1809za7, "done ", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_checkzd2nodezd2sharingzd2resetz12zd2envz12zzast_checkzd2sharingzd2,
		BgL_bgl_za762checkza7d2nodeza71810za7,
		BGl_z62checkzd2nodezd2sharingzd2resetz12za2zzast_checkzd2sharingzd2, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_checkzd2sharingzd2envz00zzast_checkzd2sharingzd2,
		BgL_bgl_za762checkza7d2shari1811z00,
		BGl_z62checkzd2sharingzb0zzast_checkzd2sharingzd2, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2previousza2z00zzast_checkzd2sharingzd2));
		   
			 ADD_ROOT((void
				*) (&BGl_za2checkzd2sharingzd2passza2z00zzast_checkzd2sharingzd2));
		     ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzast_checkzd2sharingzd2));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzast_checkzd2sharingzd2(long
		BgL_checksumz00_2329, char *BgL_fromz00_2330)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_checkzd2sharingzd2))
				{
					BGl_requirezd2initializa7ationz75zzast_checkzd2sharingzd2 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_checkzd2sharingzd2();
					BGl_libraryzd2moduleszd2initz00zzast_checkzd2sharingzd2();
					BGl_cnstzd2initzd2zzast_checkzd2sharingzd2();
					BGl_importedzd2moduleszd2initz00zzast_checkzd2sharingzd2();
					BGl_genericzd2initzd2zzast_checkzd2sharingzd2();
					BGl_methodzd2initzd2zzast_checkzd2sharingzd2();
					return BGl_toplevelzd2initzd2zzast_checkzd2sharingzd2();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_checkzd2sharingzd2()
	{
		{	/* Ast/check_sharing.scm 17 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"ast_check-sharing");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_check-sharing");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"ast_check-sharing");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_check-sharing");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"ast_check-sharing");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"ast_check-sharing");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"ast_check-sharing");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_check-sharing");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_check-sharing");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"ast_check-sharing");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0),
				"ast_check-sharing");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"ast_check-sharing");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_checkzd2sharingzd2()
	{
		{	/* Ast/check_sharing.scm 17 */
			{	/* Ast/check_sharing.scm 17 */
				obj_t BgL_cportz00_2211;

				{	/* Ast/check_sharing.scm 17 */
					obj_t BgL_stringz00_2219;

					BgL_stringz00_2219 = BGl_string1770z00zzast_checkzd2sharingzd2;
					{	/* Ast/check_sharing.scm 17 */
						obj_t BgL_startz00_2220;

						BgL_startz00_2220 = BINT(((long) 0));
						{	/* Ast/check_sharing.scm 17 */
							obj_t BgL_endz00_2221;

							BgL_endz00_2221 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2219)));
							{	/* Ast/check_sharing.scm 17 */

								BgL_cportz00_2211 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2219, BgL_startz00_2220, BgL_endz00_2221);
				}}}}
				{
					long BgL_iz00_2212;

					BgL_iz00_2212 = ((long) 0);
				BgL_loopz00_2213:
					if ((BgL_iz00_2212 == ((long) -1)))
						{	/* Ast/check_sharing.scm 17 */
							return BUNSPEC;
						}
					else
						{	/* Ast/check_sharing.scm 17 */
							{	/* Ast/check_sharing.scm 17 */
								obj_t BgL_arg1775z00_2215;

								{	/* Ast/check_sharing.scm 17 */

									{	/* Ast/check_sharing.scm 17 */
										obj_t BgL_locationz00_2217;

										BgL_locationz00_2217 = BBOOL(((bool_t) 0));
										{	/* Ast/check_sharing.scm 17 */

											BgL_arg1775z00_2215 =
												BGl_readz00zz__readerz00(BgL_cportz00_2211,
												BgL_locationz00_2217);
										}
									}
								}
								{	/* Ast/check_sharing.scm 17 */
									int BgL_tmpz00_2362;

									BgL_tmpz00_2362 = (int) (BgL_iz00_2212);
									CNST_TABLE_SET(BgL_tmpz00_2362, BgL_arg1775z00_2215);
							}}
							{	/* Ast/check_sharing.scm 17 */
								int BgL_auxz00_2218;

								BgL_auxz00_2218 = (int) ((BgL_iz00_2212 - ((long) 1)));
								{
									long BgL_iz00_2367;

									BgL_iz00_2367 = (long) (BgL_auxz00_2218);
									BgL_iz00_2212 = BgL_iz00_2367;
									goto BgL_loopz00_2213;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_checkzd2sharingzd2()
	{
		{	/* Ast/check_sharing.scm 17 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_checkzd2sharingzd2()
	{
		{	/* Ast/check_sharing.scm 17 */
			BGl_za2checkzd2sharingzd2passza2z00zzast_checkzd2sharingzd2 = BFALSE;
			BGl_za2previousza2z00zzast_checkzd2sharingzd2 = BNIL;
			return BUNSPEC;
		}

	}



/* check-sharing */
	BGL_EXPORTED_DEF obj_t BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2(obj_t
		BgL_passz00_25, obj_t BgL_globalsz00_26)
	{
		{	/* Ast/check_sharing.scm 38 */
			if (CBOOL(BGl_za2compilerzd2sharingzd2debugzf3za2zf3zzengine_paramz00))
				{	/* Ast/check_sharing.scm 39 */
					BGl_za2checkzd2sharingzd2passza2z00zzast_checkzd2sharingzd2 =
						BgL_passz00_25;
					{
						obj_t BgL_l1244z00_1637;

						BgL_l1244z00_1637 = BgL_globalsz00_26;
					BgL_zc3z04anonymousza31317ze3z87_1638:
						if (PAIRP(BgL_l1244z00_1637))
							{	/* Ast/check_sharing.scm 42 */
								{	/* Ast/check_sharing.scm 43 */
									obj_t BgL_globalz00_1640;

									BgL_globalz00_1640 = CAR(BgL_l1244z00_1637);
									{	/* Ast/check_sharing.scm 57 */
										BgL_valuez00_bglt BgL_funz00_2023;

										BgL_funz00_2023 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_globalz00_1640)))->
											BgL_valuez00);
										{	/* Ast/check_sharing.scm 57 */
											obj_t BgL_bodyz00_2024;

											BgL_bodyz00_2024 =
												(((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_funz00_2023)))->
												BgL_bodyz00);
											{	/* Ast/check_sharing.scm 58 */

												BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2(
													((BgL_nodez00_bglt) BgL_bodyz00_2024), BUNSPEC);
											}
										}
									}
								}
								{
									obj_t BgL_l1244z00_2381;

									BgL_l1244z00_2381 = CDR(BgL_l1244z00_1637);
									BgL_l1244z00_1637 = BgL_l1244z00_2381;
									goto BgL_zc3z04anonymousza31317ze3z87_1638;
								}
							}
						else
							{	/* Ast/check_sharing.scm 42 */
								((bool_t) 1);
							}
					}
					BGl_za2previousza2z00zzast_checkzd2sharingzd2 = BNIL;
					if (
						((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
							((long) 0)))
						{	/* Ast/check_sharing.scm 46 */
							{	/* Ast/check_sharing.scm 46 */
								obj_t BgL_port1246z00_1645;

								{	/* Ast/check_sharing.scm 46 */
									obj_t BgL_res1716z00_2031;

									{	/* Ast/check_sharing.scm 46 */
										obj_t BgL_tmpz00_2386;

										BgL_tmpz00_2386 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res1716z00_2031 =
											BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2386);
									}
									BgL_port1246z00_1645 = BgL_res1716z00_2031;
								}
								bgl_display_obj
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
									BgL_port1246z00_1645);
								bgl_display_string(BGl_string1739z00zzast_checkzd2sharingzd2,
									BgL_port1246z00_1645);
								{	/* Ast/check_sharing.scm 46 */
									obj_t BgL_arg1322z00_1646;

									{	/* Ast/check_sharing.scm 46 */
										bool_t BgL_test1817z00_2391;

										if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
											{	/* Ast/check_sharing.scm 46 */
												if (INTEGERP
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
													{	/* Ast/check_sharing.scm 46 */
														BgL_test1817z00_2391 =
															(
															(long)
															CINT
															(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
															> ((long) 1));
													}
												else
													{	/* Ast/check_sharing.scm 46 */
														BgL_test1817z00_2391 =
															BGl_2ze3ze3zz__r4_numbers_6_5z00
															(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
															BINT(((long) 1)));
											}}
										else
											{	/* Ast/check_sharing.scm 46 */
												BgL_test1817z00_2391 = ((bool_t) 0);
											}
										if (BgL_test1817z00_2391)
											{	/* Ast/check_sharing.scm 46 */
												BgL_arg1322z00_1646 =
													BGl_string1740z00zzast_checkzd2sharingzd2;
											}
										else
											{	/* Ast/check_sharing.scm 46 */
												BgL_arg1322z00_1646 =
													BGl_string1741z00zzast_checkzd2sharingzd2;
											}
									}
									bgl_display_obj(BgL_arg1322z00_1646, BgL_port1246z00_1645);
								}
								bgl_display_string(BGl_string1742z00zzast_checkzd2sharingzd2,
									BgL_port1246z00_1645);
								bgl_display_char(((unsigned char) 10), BgL_port1246z00_1645);
							}
							{	/* Ast/check_sharing.scm 46 */
								obj_t BgL_list1326z00_1652;

								BgL_list1326z00_1652 = MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
								return BGl_exitz00zz__errorz00(BgL_list1326z00_1652);
							}
						}
					else
						{	/* Ast/check_sharing.scm 46 */
							obj_t BgL_g1108z00_1653;

							BgL_g1108z00_1653 = BNIL;
							{
								obj_t BgL_hooksz00_1656;
								obj_t BgL_hnamesz00_1657;

								BgL_hooksz00_1656 = BgL_g1108z00_1653;
								BgL_hnamesz00_1657 = BNIL;
							BgL_zc3z04anonymousza31327ze3z87_1658:
								if (NULLP(BgL_hooksz00_1656))
									{	/* Ast/check_sharing.scm 46 */
										return BgL_globalsz00_26;
									}
								else
									{	/* Ast/check_sharing.scm 46 */
										bool_t BgL_test1824z00_2408;

										{	/* Ast/check_sharing.scm 46 */
											obj_t BgL_fun1336z00_1665;

											BgL_fun1336z00_1665 = CAR(((obj_t) BgL_hooksz00_1656));
											BgL_test1824z00_2408 =
												CBOOL(PROCEDURE_ENTRY(BgL_fun1336z00_1665)
												(BgL_fun1336z00_1665, BEOA));
										}
										if (BgL_test1824z00_2408)
											{	/* Ast/check_sharing.scm 46 */
												obj_t BgL_arg1331z00_1662;
												obj_t BgL_arg1334z00_1663;

												BgL_arg1331z00_1662 = CDR(((obj_t) BgL_hooksz00_1656));
												BgL_arg1334z00_1663 = CDR(((obj_t) BgL_hnamesz00_1657));
												{
													obj_t BgL_hnamesz00_2420;
													obj_t BgL_hooksz00_2419;

													BgL_hooksz00_2419 = BgL_arg1331z00_1662;
													BgL_hnamesz00_2420 = BgL_arg1334z00_1663;
													BgL_hnamesz00_1657 = BgL_hnamesz00_2420;
													BgL_hooksz00_1656 = BgL_hooksz00_2419;
													goto BgL_zc3z04anonymousza31327ze3z87_1658;
												}
											}
										else
											{	/* Ast/check_sharing.scm 46 */
												obj_t BgL_arg1335z00_1664;

												BgL_arg1335z00_1664 = CAR(((obj_t) BgL_hnamesz00_1657));
												return
													BGl_internalzd2errorzd2zztools_errorz00
													(BGl_za2currentzd2passza2zd2zzengine_passz00,
													BGl_string1743z00zzast_checkzd2sharingzd2,
													BgL_arg1335z00_1664);
											}
									}
							}
						}
				}
			else
				{	/* Ast/check_sharing.scm 39 */
					return BFALSE;
				}
		}

	}



/* &check-sharing */
	obj_t BGl_z62checkzd2sharingzb0zzast_checkzd2sharingzd2(obj_t BgL_envz00_2131,
		obj_t BgL_passz00_2132, obj_t BgL_globalsz00_2133)
	{
		{	/* Ast/check_sharing.scm 38 */
			return
				BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2(BgL_passz00_2132,
				BgL_globalsz00_2133);
		}

	}



/* check-node-sharing-reset! */
	BGL_EXPORTED_DEF obj_t
		BGl_checkzd2nodezd2sharingzd2resetz12zc0zzast_checkzd2sharingzd2()
	{
		{	/* Ast/check_sharing.scm 69 */
			return (BGl_za2previousza2z00zzast_checkzd2sharingzd2 = BNIL, BUNSPEC);
		}

	}



/* &check-node-sharing-reset! */
	obj_t
		BGl_z62checkzd2nodezd2sharingzd2resetz12za2zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2134)
	{
		{	/* Ast/check_sharing.scm 69 */
			return BGl_checkzd2nodezd2sharingzd2resetz12zc0zzast_checkzd2sharingzd2();
		}

	}



/* check-node-sharing* */
	bool_t BGl_checkzd2nodezd2sharingza2za2zzast_checkzd2sharingzd2(obj_t
		BgL_nodeza2za2_65, BgL_nodez00_bglt BgL_contextz00_66)
	{
		{	/* Ast/check_sharing.scm 240 */
			{
				obj_t BgL_l1260z00_1671;

				BgL_l1260z00_1671 = BgL_nodeza2za2_65;
			BgL_zc3z04anonymousza31339ze3z87_1672:
				if (PAIRP(BgL_l1260z00_1671))
					{	/* Ast/check_sharing.scm 241 */
						{	/* Ast/check_sharing.scm 241 */
							obj_t BgL_nodez00_1674;

							BgL_nodez00_1674 = CAR(BgL_l1260z00_1671);
							BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2(
								((BgL_nodez00_bglt) BgL_nodez00_1674),
								((obj_t) BgL_contextz00_66));
						}
						{
							obj_t BgL_l1260z00_2432;

							BgL_l1260z00_2432 = CDR(BgL_l1260z00_1671);
							BgL_l1260z00_1671 = BgL_l1260z00_2432;
							goto BgL_zc3z04anonymousza31339ze3z87_1672;
						}
					}
				else
					{	/* Ast/check_sharing.scm 241 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_checkzd2sharingzd2()
	{
		{	/* Ast/check_sharing.scm 17 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_checkzd2sharingzd2()
	{
		{	/* Ast/check_sharing.scm 17 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_proc1744z00zzast_checkzd2sharingzd2, BGl_nodez00zzast_nodez00,
				BGl_string1745z00zzast_checkzd2sharingzd2);
		}

	}



/* &check-node-sharing1262 */
	obj_t BGl_z62checkzd2nodezd2sharing1262z62zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2136, obj_t BgL_nodez00_2137, obj_t BgL_contextz00_2138)
	{
		{	/* Ast/check_sharing.scm 75 */
			if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
						((obj_t)
							((BgL_nodez00_bglt) BgL_nodez00_2137)),
						BGl_za2previousza2z00zzast_checkzd2sharingzd2)))
				{	/* Ast/check_sharing.scm 76 */
					{	/* Ast/check_sharing.scm 78 */
						obj_t BgL_arg1351z00_2225;
						obj_t BgL_arg1352z00_2226;
						obj_t BgL_arg1357z00_2227;

						BgL_arg1351z00_2225 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_nodez00_2137)))->BgL_locz00);
						{	/* Ast/check_sharing.scm 79 */
							obj_t BgL_list1358z00_2228;

							BgL_list1358z00_2228 =
								MAKE_YOUNG_PAIR
								(BGl_za2checkzd2sharingzd2passza2z00zzast_checkzd2sharingzd2,
								BNIL);
							BgL_arg1352z00_2226 =
								BGl_formatz00zz__r4_output_6_10_3z00
								(BGl_string1746z00zzast_checkzd2sharingzd2,
								BgL_list1358z00_2228);
						}
						BgL_arg1357z00_2227 =
							bgl_find_runtime_type(
							((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2137)));
						BGl_userzd2warningzf2locationz20zztools_errorz00
							(BgL_arg1351z00_2225, BgL_arg1352z00_2226,
							BGl_string1747z00zzast_checkzd2sharingzd2, BgL_arg1357z00_2227);
					}
					{	/* Ast/check_sharing.scm 83 */
						obj_t BgL_port1247z00_2229;

						{	/* Ast/check_sharing.scm 83 */
							obj_t BgL_res1722z00_2230;

							{	/* Ast/check_sharing.scm 83 */
								obj_t BgL_tmpz00_2448;

								BgL_tmpz00_2448 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1722z00_2230 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2448);
							}
							BgL_port1247z00_2229 = BgL_res1722z00_2230;
						}
						bgl_display_string(BGl_string1748z00zzast_checkzd2sharingzd2,
							BgL_port1247z00_2229);
						{	/* Ast/check_sharing.scm 83 */
							obj_t BgL_arg1360z00_2231;

							BgL_arg1360z00_2231 =
								BGl_shapez00zztools_shapez00(
								((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2137)));
							bgl_display_obj(BgL_arg1360z00_2231, BgL_port1247z00_2229);
						}
						bgl_display_char(((unsigned char) 10), BgL_port1247z00_2229);
					}
					{	/* Ast/check_sharing.scm 84 */
						obj_t BgL_port1248z00_2232;

						{	/* Ast/check_sharing.scm 84 */
							obj_t BgL_res1723z00_2233;

							{	/* Ast/check_sharing.scm 84 */
								obj_t BgL_tmpz00_2457;

								BgL_tmpz00_2457 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1723z00_2233 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2457);
							}
							BgL_port1248z00_2232 = BgL_res1723z00_2233;
						}
						bgl_display_string(BGl_string1749z00zzast_checkzd2sharingzd2,
							BgL_port1248z00_2232);
						bgl_display_obj(BGl_shapez00zztools_shapez00(BgL_contextz00_2138),
							BgL_port1248z00_2232);
						bgl_display_char(((unsigned char) 10), BgL_port1248z00_2232);
					}
					{	/* Ast/check_sharing.scm 85 */
						obj_t BgL_port1249z00_2234;

						{	/* Ast/check_sharing.scm 85 */
							obj_t BgL_res1724z00_2235;

							{	/* Ast/check_sharing.scm 85 */
								obj_t BgL_tmpz00_2464;

								BgL_tmpz00_2464 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1724z00_2235 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2464);
							}
							BgL_port1249z00_2234 = BgL_res1724z00_2235;
						}
						bgl_display_string(BGl_string1750z00zzast_checkzd2sharingzd2,
							BgL_port1249z00_2234);
						bgl_display_char(((unsigned char) 10), BgL_port1249z00_2234);
				}}
			else
				{	/* Ast/check_sharing.scm 76 */
					BGl_za2previousza2z00zzast_checkzd2sharingzd2 =
						MAKE_YOUNG_PAIR(
						((obj_t)
							((BgL_nodez00_bglt) BgL_nodez00_2137)),
						BGl_za2previousza2z00zzast_checkzd2sharingzd2);
				}
			return CNST_TABLE_REF(((long) 0));
		}

	}



/* check-node-sharing */
	BGL_EXPORTED_DEF obj_t
		BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2(BgL_nodez00_bglt
		BgL_nodez00_29, obj_t BgL_contextz00_30)
	{
		{	/* Ast/check_sharing.scm 75 */
			{	/* Ast/check_sharing.scm 75 */
				obj_t BgL_method1263z00_1692;

				{	/* Ast/check_sharing.scm 75 */
					obj_t BgL_res1735z00_2106;

					{	/* Ast/check_sharing.scm 75 */
						long BgL_objzd2classzd2numz00_2071;

						{	/* Ast/check_sharing.scm 75 */
							long BgL_res1725z00_2074;

							BgL_res1725z00_2074 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_29));
							BgL_objzd2classzd2numz00_2071 = BgL_res1725z00_2074;
						}
						{	/* Ast/check_sharing.scm 75 */
							obj_t BgL_arg1813z00_2072;

							BgL_arg1813z00_2072 =
								PROCEDURE_REF
								(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
								(int) (((long) 1)));
							{	/* Ast/check_sharing.scm 75 */
								int BgL_offsetz00_2076;

								BgL_offsetz00_2076 = (int) (BgL_objzd2classzd2numz00_2071);
								{	/* Ast/check_sharing.scm 75 */
									long BgL_offsetz00_2077;

									BgL_offsetz00_2077 =
										((long) (BgL_offsetz00_2076) - OBJECT_TYPE);
									{	/* Ast/check_sharing.scm 75 */
										long BgL_modz00_2078;

										BgL_modz00_2078 =
											(BgL_offsetz00_2077 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/check_sharing.scm 75 */
											long BgL_restz00_2080;

											BgL_restz00_2080 =
												(BgL_offsetz00_2077 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/check_sharing.scm 75 */

												{	/* Ast/check_sharing.scm 75 */
													obj_t BgL_bucketz00_2082;

													BgL_bucketz00_2082 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2072), BgL_modz00_2078);
													BgL_res1735z00_2106 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2082), BgL_restz00_2080);
					}}}}}}}}
					BgL_method1263z00_1692 = BgL_res1735z00_2106;
				}
				return
					PROCEDURE_ENTRY(BgL_method1263z00_1692) (BgL_method1263z00_1692,
					((obj_t) BgL_nodez00_29), BgL_contextz00_30, BEOA);
			}
		}

	}



/* &check-node-sharing */
	obj_t BGl_z62checkzd2nodezd2sharingz62zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2139, obj_t BgL_nodez00_2140, obj_t BgL_contextz00_2141)
	{
		{	/* Ast/check_sharing.scm 75 */
			return
				BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2(
				((BgL_nodez00_bglt) BgL_nodez00_2140), BgL_contextz00_2141);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_checkzd2sharingzd2()
	{
		{	/* Ast/check_sharing.scm 17 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_sequencez00zzast_nodez00, BGl_proc1751z00zzast_checkzd2sharingzd2,
				BGl_string1752z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_syncz00zzast_nodez00, BGl_proc1753z00zzast_checkzd2sharingzd2,
				BGl_string1752z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_appz00zzast_nodez00, BGl_proc1754z00zzast_checkzd2sharingzd2,
				BGl_string1752z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1755z00zzast_checkzd2sharingzd2,
				BGl_string1752z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_funcallz00zzast_nodez00, BGl_proc1756z00zzast_checkzd2sharingzd2,
				BGl_string1752z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_externz00zzast_nodez00, BGl_proc1757z00zzast_checkzd2sharingzd2,
				BGl_string1752z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_castz00zzast_nodez00, BGl_proc1758z00zzast_checkzd2sharingzd2,
				BGl_string1752z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_setqz00zzast_nodez00, BGl_proc1759z00zzast_checkzd2sharingzd2,
				BGl_string1752z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_conditionalz00zzast_nodez00,
				BGl_proc1760z00zzast_checkzd2sharingzd2,
				BGl_string1752z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_failz00zzast_nodez00, BGl_proc1761z00zzast_checkzd2sharingzd2,
				BGl_string1752z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_switchz00zzast_nodez00, BGl_proc1762z00zzast_checkzd2sharingzd2,
				BGl_string1752z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1763z00zzast_checkzd2sharingzd2,
				BGl_string1752z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1764z00zzast_checkzd2sharingzd2,
				BGl_string1752z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc1765z00zzast_checkzd2sharingzd2,
				BGl_string1752z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc1766z00zzast_checkzd2sharingzd2,
				BGl_string1752z00zzast_checkzd2sharingzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1767z00zzast_checkzd2sharingzd2,
				BGl_string1752z00zzast_checkzd2sharingzd2);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
				BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc1768z00zzast_checkzd2sharingzd2,
				BGl_string1752z00zzast_checkzd2sharingzd2);
		}

	}



/* &check-node-sharing-b1297 */
	obj_t BGl_z62checkzd2nodezd2sharingzd2b1297zb0zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2159, obj_t BgL_nodez00_2160, obj_t BgL_contextz00_2161)
	{
		{	/* Ast/check_sharing.scm 232 */
			{

				{	/* Ast/check_sharing.scm 232 */
					obj_t BgL_nextzd2method1296zd2_2238;

					BgL_nextzd2method1296zd2_2238 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2160)),
						BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
						BGl_boxzd2setz12zc0zzast_nodez00);
					PROCEDURE_ENTRY(BgL_nextzd2method1296zd2_2238)
						(BgL_nextzd2method1296zd2_2238,
						((obj_t) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2160)),
						BgL_contextz00_2161, BEOA);
				}
				{	/* Ast/check_sharing.scm 235 */
					BgL_nodez00_bglt BgL_arg1493z00_2239;

					BgL_arg1493z00_2239 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2160)))->BgL_valuez00);
					return
						BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2
						(BgL_arg1493z00_2239,
						((obj_t) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2160)));
				}
			}
		}

	}



/* &check-node-sharing-m1295 */
	obj_t BGl_z62checkzd2nodezd2sharingzd2m1295zb0zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2162, obj_t BgL_nodez00_2163, obj_t BgL_contextz00_2164)
	{
		{	/* Ast/check_sharing.scm 225 */
			{

				{	/* Ast/check_sharing.scm 225 */
					obj_t BgL_nextzd2method1294zd2_2242;

					BgL_nextzd2method1294zd2_2242 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_2163)),
						BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
						BGl_makezd2boxzd2zzast_nodez00);
					PROCEDURE_ENTRY(BgL_nextzd2method1294zd2_2242)
						(BgL_nextzd2method1294zd2_2242,
						((obj_t) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2163)),
						BgL_contextz00_2164, BEOA);
				}
				{	/* Ast/check_sharing.scm 227 */
					BgL_nodez00_bglt BgL_arg1489z00_2243;

					BgL_arg1489z00_2243 =
						(((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2163)))->BgL_valuez00);
					return
						BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2
						(BgL_arg1489z00_2243,
						((obj_t) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2163)));
				}
			}
		}

	}



/* &check-node-sharing-j1293 */
	obj_t BGl_z62checkzd2nodezd2sharingzd2j1293zb0zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2165, obj_t BgL_nodez00_2166, obj_t BgL_contextz00_2167)
	{
		{	/* Ast/check_sharing.scm 216 */
			{

				{	/* Ast/check_sharing.scm 216 */
					obj_t BgL_nextzd2method1292zd2_2246;

					BgL_nextzd2method1292zd2_2246 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2166)),
						BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
						BGl_jumpzd2exzd2itz00zzast_nodez00);
					PROCEDURE_ENTRY(BgL_nextzd2method1292zd2_2246)
						(BgL_nextzd2method1292zd2_2246,
						((obj_t) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2166)),
						BgL_contextz00_2167, BEOA);
				}
				{	/* Ast/check_sharing.scm 219 */
					BgL_nodez00_bglt BgL_arg1476z00_2247;

					BgL_arg1476z00_2247 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2166)))->BgL_exitz00);
					BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2
						(BgL_arg1476z00_2247,
						((obj_t) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2166)));
				}
				{	/* Ast/check_sharing.scm 220 */
					BgL_nodez00_bglt BgL_arg1477z00_2248;

					BgL_arg1477z00_2248 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2166)))->
						BgL_valuez00);
					return
						BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2
						(BgL_arg1477z00_2248,
						((obj_t) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2166)));
				}
			}
		}

	}



/* &check-node-sharing-s1291 */
	obj_t BGl_z62checkzd2nodezd2sharingzd2s1291zb0zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2168, obj_t BgL_nodez00_2169, obj_t BgL_contextz00_2170)
	{
		{	/* Ast/check_sharing.scm 209 */
			{

				{	/* Ast/check_sharing.scm 209 */
					obj_t BgL_nextzd2method1290zd2_2251;

					BgL_nextzd2method1290zd2_2251 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2169)),
						BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
						BGl_setzd2exzd2itz00zzast_nodez00);
					PROCEDURE_ENTRY(BgL_nextzd2method1290zd2_2251)
						(BgL_nextzd2method1290zd2_2251,
						((obj_t) ((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2169)),
						BgL_contextz00_2170, BEOA);
				}
				{	/* Ast/check_sharing.scm 211 */
					BgL_nodez00_bglt BgL_arg1474z00_2252;

					BgL_arg1474z00_2252 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2169)))->BgL_bodyz00);
					return
						BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2
						(BgL_arg1474z00_2252,
						((obj_t) ((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2169)));
				}
			}
		}

	}



/* &check-node-sharing-l1289 */
	obj_t BGl_z62checkzd2nodezd2sharingzd2l1289zb0zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2171, obj_t BgL_nodez00_2172, obj_t BgL_contextz00_2173)
	{
		{	/* Ast/check_sharing.scm 198 */
			{

				{	/* Ast/check_sharing.scm 198 */
					obj_t BgL_nextzd2method1288zd2_2255;

					BgL_nextzd2method1288zd2_2255 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2172)),
						BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
						BGl_letzd2varzd2zzast_nodez00);
					PROCEDURE_ENTRY(BgL_nextzd2method1288zd2_2255)
						(BgL_nextzd2method1288zd2_2255,
						((obj_t) ((BgL_letzd2varzd2_bglt) BgL_nodez00_2172)),
						BgL_contextz00_2173, BEOA);
				}
				{	/* Ast/check_sharing.scm 201 */
					BgL_nodez00_bglt BgL_arg1461z00_2256;

					BgL_arg1461z00_2256 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2172)))->BgL_bodyz00);
					BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2
						(BgL_arg1461z00_2256,
						((obj_t) ((BgL_letzd2varzd2_bglt) BgL_nodez00_2172)));
				}
				{	/* Ast/check_sharing.scm 202 */
					obj_t BgL_g1259z00_2257;

					BgL_g1259z00_2257 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2172)))->BgL_bindingsz00);
					{
						obj_t BgL_l1256z00_2259;

						{	/* Ast/check_sharing.scm 202 */
							bool_t BgL_tmpz00_2605;

							BgL_l1256z00_2259 = BgL_g1259z00_2257;
						BgL_zc3z04anonymousza31462ze3z87_2258:
							if (PAIRP(BgL_l1256z00_2259))
								{	/* Ast/check_sharing.scm 202 */
									{	/* Ast/check_sharing.scm 203 */
										obj_t BgL_bindingz00_2260;

										BgL_bindingz00_2260 = CAR(BgL_l1256z00_2259);
										{	/* Ast/check_sharing.scm 203 */
											obj_t BgL_arg1464z00_2261;

											BgL_arg1464z00_2261 = CDR(((obj_t) BgL_bindingz00_2260));
											BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2(
												((BgL_nodez00_bglt) BgL_arg1464z00_2261),
												((obj_t) ((BgL_letzd2varzd2_bglt) BgL_nodez00_2172)));
										}
									}
									{
										obj_t BgL_l1256z00_2615;

										BgL_l1256z00_2615 = CDR(BgL_l1256z00_2259);
										BgL_l1256z00_2259 = BgL_l1256z00_2615;
										goto BgL_zc3z04anonymousza31462ze3z87_2258;
									}
								}
							else
								{	/* Ast/check_sharing.scm 202 */
									BgL_tmpz00_2605 = ((bool_t) 1);
								}
							return BBOOL(BgL_tmpz00_2605);
						}
					}
				}
			}
		}

	}



/* &check-node-sharing-l1287 */
	obj_t BGl_z62checkzd2nodezd2sharingzd2l1287zb0zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2174, obj_t BgL_nodez00_2175, obj_t BgL_contextz00_2176)
	{
		{	/* Ast/check_sharing.scm 189 */
			{

				{	/* Ast/check_sharing.scm 189 */
					obj_t BgL_nextzd2method1286zd2_2264;

					BgL_nextzd2method1286zd2_2264 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2175)),
						BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
						BGl_letzd2funzd2zzast_nodez00);
					PROCEDURE_ENTRY(BgL_nextzd2method1286zd2_2264)
						(BgL_nextzd2method1286zd2_2264,
						((obj_t) ((BgL_letzd2funzd2_bglt) BgL_nodez00_2175)),
						BgL_contextz00_2176, BEOA);
				}
				{	/* Ast/check_sharing.scm 192 */
					obj_t BgL_g1255z00_2265;

					BgL_g1255z00_2265 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2175)))->BgL_localsz00);
					{
						obj_t BgL_l1253z00_2267;

						BgL_l1253z00_2267 = BgL_g1255z00_2265;
					BgL_zc3z04anonymousza31443ze3z87_2266:
						if (PAIRP(BgL_l1253z00_2267))
							{	/* Ast/check_sharing.scm 192 */
								{	/* Ast/check_sharing.scm 192 */
									obj_t BgL_fz00_2268;

									BgL_fz00_2268 = CAR(BgL_l1253z00_2267);
									{	/* Ast/check_sharing.scm 57 */
										BgL_valuez00_bglt BgL_funz00_2269;

										BgL_funz00_2269 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_fz00_2268)))->
											BgL_valuez00);
										{	/* Ast/check_sharing.scm 57 */
											obj_t BgL_bodyz00_2270;

											BgL_bodyz00_2270 =
												(((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_funz00_2269)))->
												BgL_bodyz00);
											{	/* Ast/check_sharing.scm 58 */

												BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2(
													((BgL_nodez00_bglt) BgL_bodyz00_2270),
													((obj_t) ((BgL_letzd2funzd2_bglt) BgL_nodez00_2175)));
											}
										}
									}
								}
								{
									obj_t BgL_l1253z00_2641;

									BgL_l1253z00_2641 = CDR(BgL_l1253z00_2267);
									BgL_l1253z00_2267 = BgL_l1253z00_2641;
									goto BgL_zc3z04anonymousza31443ze3z87_2266;
								}
							}
						else
							{	/* Ast/check_sharing.scm 192 */
								((bool_t) 1);
							}
					}
				}
				{	/* Ast/check_sharing.scm 193 */
					BgL_nodez00_bglt BgL_arg1449z00_2271;

					BgL_arg1449z00_2271 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2175)))->BgL_bodyz00);
					return
						BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2
						(BgL_arg1449z00_2271,
						((obj_t) ((BgL_letzd2funzd2_bglt) BgL_nodez00_2175)));
				}
			}
		}

	}



/* &check-node-sharing-s1285 */
	obj_t BGl_z62checkzd2nodezd2sharingzd2s1285zb0zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2177, obj_t BgL_nodez00_2178, obj_t BgL_contextz00_2179)
	{
		{	/* Ast/check_sharing.scm 175 */
			{

				{	/* Ast/check_sharing.scm 175 */
					obj_t BgL_nextzd2method1284zd2_2274;

					BgL_nextzd2method1284zd2_2274 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_switchz00_bglt) BgL_nodez00_2178)),
						BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
						BGl_switchz00zzast_nodez00);
					PROCEDURE_ENTRY(BgL_nextzd2method1284zd2_2274)
						(BgL_nextzd2method1284zd2_2274,
						((obj_t) ((BgL_switchz00_bglt) BgL_nodez00_2178)),
						BgL_contextz00_2179, BEOA);
				}
				{	/* Ast/check_sharing.scm 178 */
					BgL_nodez00_bglt BgL_arg1421z00_2275;

					BgL_arg1421z00_2275 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2178)))->BgL_testz00);
					BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2
						(BgL_arg1421z00_2275,
						((obj_t) ((BgL_switchz00_bglt) BgL_nodez00_2178)));
				}
				{	/* Ast/check_sharing.scm 179 */
					obj_t BgL_g1252z00_2276;

					BgL_g1252z00_2276 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2178)))->BgL_clausesz00);
					{
						obj_t BgL_l1250z00_2278;

						{	/* Ast/check_sharing.scm 179 */
							bool_t BgL_tmpz00_2665;

							BgL_l1250z00_2278 = BgL_g1252z00_2276;
						BgL_zc3z04anonymousza31422ze3z87_2277:
							if (PAIRP(BgL_l1250z00_2278))
								{	/* Ast/check_sharing.scm 179 */
									{	/* Ast/check_sharing.scm 180 */
										obj_t BgL_clausez00_2279;

										BgL_clausez00_2279 = CAR(BgL_l1250z00_2278);
										{	/* Ast/check_sharing.scm 180 */
											obj_t BgL_arg1441z00_2280;

											BgL_arg1441z00_2280 = CDR(((obj_t) BgL_clausez00_2279));
											BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2(
												((BgL_nodez00_bglt) BgL_arg1441z00_2280),
												((obj_t) ((BgL_switchz00_bglt) BgL_nodez00_2178)));
										}
									}
									{
										obj_t BgL_l1250z00_2675;

										BgL_l1250z00_2675 = CDR(BgL_l1250z00_2278);
										BgL_l1250z00_2278 = BgL_l1250z00_2675;
										goto BgL_zc3z04anonymousza31422ze3z87_2277;
									}
								}
							else
								{	/* Ast/check_sharing.scm 179 */
									BgL_tmpz00_2665 = ((bool_t) 1);
								}
							return BBOOL(BgL_tmpz00_2665);
						}
					}
				}
			}
		}

	}



/* &check-node-sharing-f1283 */
	obj_t BGl_z62checkzd2nodezd2sharingzd2f1283zb0zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2180, obj_t BgL_nodez00_2181, obj_t BgL_contextz00_2182)
	{
		{	/* Ast/check_sharing.scm 165 */
			{

				{	/* Ast/check_sharing.scm 165 */
					obj_t BgL_nextzd2method1282zd2_2283;

					BgL_nextzd2method1282zd2_2283 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_failz00_bglt) BgL_nodez00_2181)),
						BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
						BGl_failz00zzast_nodez00);
					PROCEDURE_ENTRY(BgL_nextzd2method1282zd2_2283)
						(BgL_nextzd2method1282zd2_2283,
						((obj_t) ((BgL_failz00_bglt) BgL_nodez00_2181)),
						BgL_contextz00_2182, BEOA);
				}
				{	/* Ast/check_sharing.scm 168 */
					BgL_nodez00_bglt BgL_arg1396z00_2284;

					BgL_arg1396z00_2284 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2181)))->BgL_procz00);
					BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2
						(BgL_arg1396z00_2284,
						((obj_t) ((BgL_failz00_bglt) BgL_nodez00_2181)));
				}
				{	/* Ast/check_sharing.scm 169 */
					BgL_nodez00_bglt BgL_arg1417z00_2285;

					BgL_arg1417z00_2285 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2181)))->BgL_msgz00);
					BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2
						(BgL_arg1417z00_2285,
						((obj_t) ((BgL_failz00_bglt) BgL_nodez00_2181)));
				}
				{	/* Ast/check_sharing.scm 170 */
					BgL_nodez00_bglt BgL_arg1418z00_2286;

					BgL_arg1418z00_2286 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2181)))->BgL_objz00);
					return
						BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2
						(BgL_arg1418z00_2286,
						((obj_t) ((BgL_failz00_bglt) BgL_nodez00_2181)));
				}
			}
		}

	}



/* &check-node-sharing-c1281 */
	obj_t BGl_z62checkzd2nodezd2sharingzd2c1281zb0zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2183, obj_t BgL_nodez00_2184, obj_t BgL_contextz00_2185)
	{
		{	/* Ast/check_sharing.scm 155 */
			{

				{	/* Ast/check_sharing.scm 155 */
					obj_t BgL_nextzd2method1280zd2_2289;

					BgL_nextzd2method1280zd2_2289 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_conditionalz00_bglt) BgL_nodez00_2184)),
						BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
						BGl_conditionalz00zzast_nodez00);
					PROCEDURE_ENTRY(BgL_nextzd2method1280zd2_2289)
						(BgL_nextzd2method1280zd2_2289,
						((obj_t) ((BgL_conditionalz00_bglt) BgL_nodez00_2184)),
						BgL_contextz00_2185, BEOA);
				}
				{	/* Ast/check_sharing.scm 158 */
					BgL_nodez00_bglt BgL_arg1387z00_2290;

					BgL_arg1387z00_2290 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2184)))->BgL_testz00);
					BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2
						(BgL_arg1387z00_2290,
						((obj_t) ((BgL_conditionalz00_bglt) BgL_nodez00_2184)));
				}
				{	/* Ast/check_sharing.scm 159 */
					BgL_nodez00_bglt BgL_arg1388z00_2291;

					BgL_arg1388z00_2291 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2184)))->BgL_truez00);
					BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2
						(BgL_arg1388z00_2291,
						((obj_t) ((BgL_conditionalz00_bglt) BgL_nodez00_2184)));
				}
				{	/* Ast/check_sharing.scm 160 */
					BgL_nodez00_bglt BgL_arg1394z00_2292;

					BgL_arg1394z00_2292 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2184)))->BgL_falsez00);
					return
						BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2
						(BgL_arg1394z00_2292,
						((obj_t) ((BgL_conditionalz00_bglt) BgL_nodez00_2184)));
				}
			}
		}

	}



/* &check-node-sharing-s1279 */
	obj_t BGl_z62checkzd2nodezd2sharingzd2s1279zb0zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2186, obj_t BgL_nodez00_2187, obj_t BgL_contextz00_2188)
	{
		{	/* Ast/check_sharing.scm 148 */
			{

				{	/* Ast/check_sharing.scm 148 */
					obj_t BgL_nextzd2method1278zd2_2295;

					BgL_nextzd2method1278zd2_2295 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_setqz00_bglt) BgL_nodez00_2187)),
						BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
						BGl_setqz00zzast_nodez00);
					PROCEDURE_ENTRY(BgL_nextzd2method1278zd2_2295)
						(BgL_nextzd2method1278zd2_2295,
						((obj_t) ((BgL_setqz00_bglt) BgL_nodez00_2187)),
						BgL_contextz00_2188, BEOA);
				}
				{	/* Ast/check_sharing.scm 150 */
					BgL_nodez00_bglt BgL_arg1386z00_2296;

					BgL_arg1386z00_2296 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2187)))->BgL_valuez00);
					return
						BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2
						(BgL_arg1386z00_2296,
						((obj_t) ((BgL_setqz00_bglt) BgL_nodez00_2187)));
				}
			}
		}

	}



/* &check-node-sharing-c1277 */
	obj_t BGl_z62checkzd2nodezd2sharingzd2c1277zb0zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2189, obj_t BgL_nodez00_2190, obj_t BgL_contextz00_2191)
	{
		{	/* Ast/check_sharing.scm 141 */
			{

				{	/* Ast/check_sharing.scm 141 */
					obj_t BgL_nextzd2method1276zd2_2299;

					BgL_nextzd2method1276zd2_2299 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_castz00_bglt) BgL_nodez00_2190)),
						BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
						BGl_castz00zzast_nodez00);
					PROCEDURE_ENTRY(BgL_nextzd2method1276zd2_2299)
						(BgL_nextzd2method1276zd2_2299,
						((obj_t) ((BgL_castz00_bglt) BgL_nodez00_2190)),
						BgL_contextz00_2191, BEOA);
				}
				{	/* Ast/check_sharing.scm 143 */
					BgL_nodez00_bglt BgL_arg1385z00_2300;

					BgL_arg1385z00_2300 =
						(((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nodez00_2190)))->BgL_argz00);
					return
						BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2
						(BgL_arg1385z00_2300,
						((obj_t) ((BgL_castz00_bglt) BgL_nodez00_2190)));
				}
			}
		}

	}



/* &check-node-sharing-e1275 */
	obj_t BGl_z62checkzd2nodezd2sharingzd2e1275zb0zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2192, obj_t BgL_nodez00_2193, obj_t BgL_contextz00_2194)
	{
		{	/* Ast/check_sharing.scm 134 */
			{

				{	/* Ast/check_sharing.scm 134 */
					obj_t BgL_nextzd2method1274zd2_2303;

					BgL_nextzd2method1274zd2_2303 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_externz00_bglt) BgL_nodez00_2193)),
						BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
						BGl_externz00zzast_nodez00);
					PROCEDURE_ENTRY(BgL_nextzd2method1274zd2_2303)
						(BgL_nextzd2method1274zd2_2303,
						((obj_t) ((BgL_externz00_bglt) BgL_nodez00_2193)),
						BgL_contextz00_2194, BEOA);
				}
				{	/* Ast/check_sharing.scm 136 */
					obj_t BgL_arg1384z00_2304;

					BgL_arg1384z00_2304 =
						(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_nodez00_2193)))->BgL_exprza2za2);
					return
						BBOOL(BGl_checkzd2nodezd2sharingza2za2zzast_checkzd2sharingzd2
						(BgL_arg1384z00_2304,
							((BgL_nodez00_bglt) ((BgL_externz00_bglt) BgL_nodez00_2193))));
				}
			}
		}

	}



/* &check-node-sharing-f1273 */
	obj_t BGl_z62checkzd2nodezd2sharingzd2f1273zb0zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2195, obj_t BgL_nodez00_2196, obj_t BgL_contextz00_2197)
	{
		{	/* Ast/check_sharing.scm 125 */
			{

				{	/* Ast/check_sharing.scm 125 */
					obj_t BgL_nextzd2method1272zd2_2307;

					BgL_nextzd2method1272zd2_2307 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_funcallz00_bglt) BgL_nodez00_2196)),
						BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
						BGl_funcallz00zzast_nodez00);
					PROCEDURE_ENTRY(BgL_nextzd2method1272zd2_2307)
						(BgL_nextzd2method1272zd2_2307,
						((obj_t) ((BgL_funcallz00_bglt) BgL_nodez00_2196)),
						BgL_contextz00_2197, BEOA);
				}
				{	/* Ast/check_sharing.scm 128 */
					BgL_nodez00_bglt BgL_arg1382z00_2308;

					BgL_arg1382z00_2308 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2196)))->BgL_funz00);
					BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2
						(BgL_arg1382z00_2308,
						((obj_t) ((BgL_funcallz00_bglt) BgL_nodez00_2196)));
				}
				{	/* Ast/check_sharing.scm 129 */
					obj_t BgL_arg1383z00_2309;

					BgL_arg1383z00_2309 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2196)))->BgL_argsz00);
					return
						BBOOL(BGl_checkzd2nodezd2sharingza2za2zzast_checkzd2sharingzd2
						(BgL_arg1383z00_2309,
							((BgL_nodez00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_2196))));
				}
			}
		}

	}



/* &check-node-sharing-a1271 */
	obj_t BGl_z62checkzd2nodezd2sharingzd2a1271zb0zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2198, obj_t BgL_nodez00_2199, obj_t BgL_contextz00_2200)
	{
		{	/* Ast/check_sharing.scm 116 */
			{

				{	/* Ast/check_sharing.scm 116 */
					obj_t BgL_nextzd2method1270zd2_2312;

					BgL_nextzd2method1270zd2_2312 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_2199)),
						BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
						BGl_appzd2lyzd2zzast_nodez00);
					PROCEDURE_ENTRY(BgL_nextzd2method1270zd2_2312)
						(BgL_nextzd2method1270zd2_2312,
						((obj_t) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2199)),
						BgL_contextz00_2200, BEOA);
				}
				{	/* Ast/check_sharing.scm 119 */
					BgL_nodez00_bglt BgL_arg1372z00_2313;

					BgL_arg1372z00_2313 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2199)))->BgL_funz00);
					BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2
						(BgL_arg1372z00_2313,
						((obj_t) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2199)));
				}
				{	/* Ast/check_sharing.scm 120 */
					BgL_nodez00_bglt BgL_arg1381z00_2314;

					BgL_arg1381z00_2314 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2199)))->BgL_argz00);
					return
						BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2
						(BgL_arg1381z00_2314,
						((obj_t) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2199)));
				}
			}
		}

	}



/* &check-node-sharing-a1269 */
	obj_t BGl_z62checkzd2nodezd2sharingzd2a1269zb0zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2201, obj_t BgL_nodez00_2202, obj_t BgL_contextz00_2203)
	{
		{	/* Ast/check_sharing.scm 108 */
			{

				{	/* Ast/check_sharing.scm 108 */
					obj_t BgL_nextzd2method1268zd2_2317;

					BgL_nextzd2method1268zd2_2317 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt) BgL_nodez00_2202)),
						BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
						BGl_appz00zzast_nodez00);
					PROCEDURE_ENTRY(BgL_nextzd2method1268zd2_2317)
						(BgL_nextzd2method1268zd2_2317,
						((obj_t) ((BgL_appz00_bglt) BgL_nodez00_2202)), BgL_contextz00_2203,
						BEOA);
				}
				{	/* Ast/check_sharing.scm 111 */
					obj_t BgL_arg1371z00_2318;

					BgL_arg1371z00_2318 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2202)))->BgL_argsz00);
					return
						BBOOL(BGl_checkzd2nodezd2sharingza2za2zzast_checkzd2sharingzd2
						(BgL_arg1371z00_2318,
							((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_2202))));
				}
			}
		}

	}



/* &check-node-sharing-s1267 */
	obj_t BGl_z62checkzd2nodezd2sharingzd2s1267zb0zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2204, obj_t BgL_nodez00_2205, obj_t BgL_contextz00_2206)
	{
		{	/* Ast/check_sharing.scm 99 */
			{

				{	/* Ast/check_sharing.scm 99 */
					obj_t BgL_nextzd2method1266zd2_2321;

					BgL_nextzd2method1266zd2_2321 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_syncz00_bglt) BgL_nodez00_2205)),
						BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
						BGl_syncz00zzast_nodez00);
					PROCEDURE_ENTRY(BgL_nextzd2method1266zd2_2321)
						(BgL_nextzd2method1266zd2_2321,
						((obj_t) ((BgL_syncz00_bglt) BgL_nodez00_2205)),
						BgL_contextz00_2206, BEOA);
				}
				{	/* Ast/check_sharing.scm 101 */
					BgL_nodez00_bglt BgL_arg1364z00_2322;

					BgL_arg1364z00_2322 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2205)))->BgL_mutexz00);
					BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2
						(BgL_arg1364z00_2322,
						((obj_t) ((BgL_syncz00_bglt) BgL_nodez00_2205)));
				}
				{	/* Ast/check_sharing.scm 102 */
					BgL_nodez00_bglt BgL_arg1367z00_2323;

					BgL_arg1367z00_2323 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2205)))->BgL_prelockz00);
					BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2
						(BgL_arg1367z00_2323,
						((obj_t) ((BgL_syncz00_bglt) BgL_nodez00_2205)));
				}
				{	/* Ast/check_sharing.scm 103 */
					BgL_nodez00_bglt BgL_arg1370z00_2324;

					BgL_arg1370z00_2324 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2205)))->BgL_bodyz00);
					return
						BGl_checkzd2nodezd2sharingz00zzast_checkzd2sharingzd2
						(BgL_arg1370z00_2324,
						((obj_t) ((BgL_syncz00_bglt) BgL_nodez00_2205)));
				}
			}
		}

	}



/* &check-node-sharing-s1265 */
	obj_t BGl_z62checkzd2nodezd2sharingzd2s1265zb0zzast_checkzd2sharingzd2(obj_t
		BgL_envz00_2207, obj_t BgL_nodez00_2208, obj_t BgL_contextz00_2209)
	{
		{	/* Ast/check_sharing.scm 92 */
			{

				{	/* Ast/check_sharing.scm 92 */
					obj_t BgL_nextzd2method1264zd2_2327;

					BgL_nextzd2method1264zd2_2327 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_sequencez00_bglt) BgL_nodez00_2208)),
						BGl_checkzd2nodezd2sharingzd2envzd2zzast_checkzd2sharingzd2,
						BGl_sequencez00zzast_nodez00);
					PROCEDURE_ENTRY(BgL_nextzd2method1264zd2_2327)
						(BgL_nextzd2method1264zd2_2327,
						((obj_t) ((BgL_sequencez00_bglt) BgL_nodez00_2208)),
						BgL_contextz00_2209, BEOA);
				}
				{	/* Ast/check_sharing.scm 94 */
					obj_t BgL_arg1363z00_2328;

					BgL_arg1363z00_2328 =
						(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_2208)))->BgL_nodesz00);
					return
						BBOOL(BGl_checkzd2nodezd2sharingza2za2zzast_checkzd2sharingzd2
						(BgL_arg1363z00_2328,
							((BgL_nodez00_bglt) ((BgL_sequencez00_bglt) BgL_nodez00_2208))));
				}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_checkzd2sharingzd2()
	{
		{	/* Ast/check_sharing.scm 17 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1769z00zzast_checkzd2sharingzd2));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1769z00zzast_checkzd2sharingzd2));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1769z00zzast_checkzd2sharingzd2));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1769z00zzast_checkzd2sharingzd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1769z00zzast_checkzd2sharingzd2));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1769z00zzast_checkzd2sharingzd2));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1769z00zzast_checkzd2sharingzd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1769z00zzast_checkzd2sharingzd2));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1769z00zzast_checkzd2sharingzd2));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1769z00zzast_checkzd2sharingzd2));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1769z00zzast_checkzd2sharingzd2));
			BGl_modulezd2initializa7ationz75zzmodule_includez00(((long) 184800297),
				BSTRING_TO_STRING(BGl_string1769z00zzast_checkzd2sharingzd2));
			return
				BGl_modulezd2initializa7ationz75zzmodule_classz00(((long) 153808388),
				BSTRING_TO_STRING(BGl_string1769z00zzast_checkzd2sharingzd2));
		}

	}

#ifdef __cplusplus
}
#endif
