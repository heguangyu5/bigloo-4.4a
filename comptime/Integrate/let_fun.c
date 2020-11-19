/*===========================================================================*/
/*   (Integrate/let_fun.scm)                                                 */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/let_fun.scm) */
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
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzintegrate_letzd2funzd2();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t
		BGl_z62displacezd2letzd2funzd2nod1301zb0zzintegrate_letzd2funzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62displacezd2letzd2funzd2nod1303zb0zzintegrate_letzd2funzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62displacezd2letzd2funzd2nod1305zb0zzintegrate_letzd2funzd2(obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzintegrate_letzd2funzd2();
	extern obj_t BGl_externz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static bool_t BGl_freezd2funzf3z21zzintegrate_letzd2funzd2(obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_gczd2rootszd2initz00zzintegrate_letzd2funzd2();
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_z62displacezd2letzd2funz12z70zzintegrate_letzd2funzd2(obj_t,
		obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_letzd2funzd2 =
		BUNSPEC;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	static obj_t BGl_bindzd2funz12zc0zzintegrate_letzd2funzd2(obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzintegrate_letzd2funzd2();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzintegrate_letzd2funzd2();
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t
		BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2
		(BgL_nodez00_bglt, obj_t);
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt,
		bool_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t
		BGl_z62displacezd2letzd2funzd2nod1260zb0zzintegrate_letzd2funzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62displacezd2letzd2funzd2nod1263zb0zzintegrate_letzd2funzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62displacezd2letzd2funzd2nod1265zb0zzintegrate_letzd2funzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62displacezd2letzd2funzd2nod1267zb0zzintegrate_letzd2funzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62displacezd2letzd2funzd2nod1269zb0zzintegrate_letzd2funzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62displacezd2letzd2funzd2nod1271zb0zzintegrate_letzd2funzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62displacezd2letzd2funzd2nod1273zb0zzintegrate_letzd2funzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62displacezd2letzd2funzd2nod1275zb0zzintegrate_letzd2funzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62displacezd2letzd2funzd2nod1277zb0zzintegrate_letzd2funzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62displacezd2letzd2funzd2nod1279zb0zzintegrate_letzd2funzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62displacezd2letzd2funzd2nod1281zb0zzintegrate_letzd2funzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62displacezd2letzd2funzd2nod1283zb0zzintegrate_letzd2funzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62displacezd2letzd2funzd2nod1285zb0zzintegrate_letzd2funzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62displacezd2letzd2funzd2nod1287zb0zzintegrate_letzd2funzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62displacezd2letzd2funzd2nod1289zb0zzintegrate_letzd2funzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62displacezd2letzd2funzd2nod1291zb0zzintegrate_letzd2funzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62displacezd2letzd2funzd2nod1293zb0zzintegrate_letzd2funzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62displacezd2letzd2funzd2nod1295zb0zzintegrate_letzd2funzd2(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t
		BGl_z62displacezd2letzd2funzd2nod1297zb0zzintegrate_letzd2funzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62displacezd2letzd2funzd2nod1299zb0zzintegrate_letzd2funzd2(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_displacezd2letzd2funz12z12zzintegrate_letzd2funzd2(obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_letzd2funzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
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
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzintegrate_letzd2funzd2();
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_letzd2funzd2();
	static long BGl_za2stampza2z00zzintegrate_letzd2funzd2;
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_letzd2funzd2();
	static obj_t
		BGl_z62displacezd2letzd2funzd2nodez12za2zzintegrate_letzd2funzd2(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t __cnst[1];


	   
		 
		DEFINE_STRING(BGl_string1800z00zzintegrate_letzd2funzd2,
		BgL_bgl_string1800za700za7za7i1810za7, "displace-let-fun-node", 21);
	      DEFINE_STRING(BGl_string1801z00zzintegrate_letzd2funzd2,
		BgL_bgl_string1801za700za7za7i1811za7, "Unexpected closure", 18);
	      DEFINE_STRING(BGl_string1802z00zzintegrate_letzd2funzd2,
		BgL_bgl_string1802za700za7za7i1812za7, "integrate_let-fun", 17);
	      DEFINE_STRING(BGl_string1803z00zzintegrate_letzd2funzd2,
		BgL_bgl_string1803za700za7za7i1813za7, "displace-let-fun-nod1260 ", 25);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_displacezd2letzd2funz12zd2envzc0zzintegrate_letzd2funzd2,
		BgL_bgl_za762displaceza7d2le1814z00,
		BGl_z62displacezd2letzd2funz12z70zzintegrate_letzd2funzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1774z00zzintegrate_letzd2funzd2,
		BgL_bgl_za762displaceza7d2le1815z00,
		BGl_z62displacezd2letzd2funzd2nod1260zb0zzintegrate_letzd2funzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1777z00zzintegrate_letzd2funzd2,
		BgL_bgl_za762displaceza7d2le1816z00,
		BGl_z62displacezd2letzd2funzd2nod1263zb0zzintegrate_letzd2funzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1779z00zzintegrate_letzd2funzd2,
		BgL_bgl_za762displaceza7d2le1817z00,
		BGl_z62displacezd2letzd2funzd2nod1265zb0zzintegrate_letzd2funzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1780z00zzintegrate_letzd2funzd2,
		BgL_bgl_za762displaceza7d2le1818z00,
		BGl_z62displacezd2letzd2funzd2nod1267zb0zzintegrate_letzd2funzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1781z00zzintegrate_letzd2funzd2,
		BgL_bgl_za762displaceza7d2le1819z00,
		BGl_z62displacezd2letzd2funzd2nod1269zb0zzintegrate_letzd2funzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1782z00zzintegrate_letzd2funzd2,
		BgL_bgl_za762displaceza7d2le1820z00,
		BGl_z62displacezd2letzd2funzd2nod1271zb0zzintegrate_letzd2funzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1783z00zzintegrate_letzd2funzd2,
		BgL_bgl_za762displaceza7d2le1821z00,
		BGl_z62displacezd2letzd2funzd2nod1273zb0zzintegrate_letzd2funzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1784z00zzintegrate_letzd2funzd2,
		BgL_bgl_za762displaceza7d2le1822z00,
		BGl_z62displacezd2letzd2funzd2nod1275zb0zzintegrate_letzd2funzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1785z00zzintegrate_letzd2funzd2,
		BgL_bgl_za762displaceza7d2le1823z00,
		BGl_z62displacezd2letzd2funzd2nod1277zb0zzintegrate_letzd2funzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1786z00zzintegrate_letzd2funzd2,
		BgL_bgl_za762displaceza7d2le1824z00,
		BGl_z62displacezd2letzd2funzd2nod1279zb0zzintegrate_letzd2funzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1787z00zzintegrate_letzd2funzd2,
		BgL_bgl_za762displaceza7d2le1825z00,
		BGl_z62displacezd2letzd2funzd2nod1281zb0zzintegrate_letzd2funzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1788z00zzintegrate_letzd2funzd2,
		BgL_bgl_za762displaceza7d2le1826z00,
		BGl_z62displacezd2letzd2funzd2nod1283zb0zzintegrate_letzd2funzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1789z00zzintegrate_letzd2funzd2,
		BgL_bgl_za762displaceza7d2le1827z00,
		BGl_z62displacezd2letzd2funzd2nod1285zb0zzintegrate_letzd2funzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1790z00zzintegrate_letzd2funzd2,
		BgL_bgl_za762displaceza7d2le1828z00,
		BGl_z62displacezd2letzd2funzd2nod1287zb0zzintegrate_letzd2funzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1791z00zzintegrate_letzd2funzd2,
		BgL_bgl_za762displaceza7d2le1829z00,
		BGl_z62displacezd2letzd2funzd2nod1289zb0zzintegrate_letzd2funzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1792z00zzintegrate_letzd2funzd2,
		BgL_bgl_za762displaceza7d2le1830z00,
		BGl_z62displacezd2letzd2funzd2nod1291zb0zzintegrate_letzd2funzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1793z00zzintegrate_letzd2funzd2,
		BgL_bgl_za762displaceza7d2le1831z00,
		BGl_z62displacezd2letzd2funzd2nod1293zb0zzintegrate_letzd2funzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1794z00zzintegrate_letzd2funzd2,
		BgL_bgl_za762displaceza7d2le1832z00,
		BGl_z62displacezd2letzd2funzd2nod1295zb0zzintegrate_letzd2funzd2, 0L,
		BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
		BgL_bgl_za762displaceza7d2le1833z00,
		BGl_z62displacezd2letzd2funzd2nodez12za2zzintegrate_letzd2funzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1795z00zzintegrate_letzd2funzd2,
		BgL_bgl_za762displaceza7d2le1834z00,
		BGl_z62displacezd2letzd2funzd2nod1297zb0zzintegrate_letzd2funzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1796z00zzintegrate_letzd2funzd2,
		BgL_bgl_za762displaceza7d2le1835z00,
		BGl_z62displacezd2letzd2funzd2nod1299zb0zzintegrate_letzd2funzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1797z00zzintegrate_letzd2funzd2,
		BgL_bgl_za762displaceza7d2le1836z00,
		BGl_z62displacezd2letzd2funzd2nod1301zb0zzintegrate_letzd2funzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1798z00zzintegrate_letzd2funzd2,
		BgL_bgl_za762displaceza7d2le1837z00,
		BGl_z62displacezd2letzd2funzd2nod1303zb0zzintegrate_letzd2funzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1799z00zzintegrate_letzd2funzd2,
		BgL_bgl_za762displaceza7d2le1838z00,
		BGl_z62displacezd2letzd2funzd2nod1305zb0zzintegrate_letzd2funzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1775z00zzintegrate_letzd2funzd2,
		BgL_bgl_string1775za700za7za7i1839za7, "displace-let-fun-nod1260", 24);
	      DEFINE_STRING(BGl_string1776z00zzintegrate_letzd2funzd2,
		BgL_bgl_string1776za700za7za7i1840za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1778z00zzintegrate_letzd2funzd2,
		BgL_bgl_string1778za700za7za7i1841za7, "displace-let-fun-node!", 22);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzintegrate_letzd2funzd2));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_letzd2funzd2(long
		BgL_checksumz00_2322, char *BgL_fromz00_2323)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_letzd2funzd2))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_letzd2funzd2 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzintegrate_letzd2funzd2();
					BGl_libraryzd2moduleszd2initz00zzintegrate_letzd2funzd2();
					BGl_cnstzd2initzd2zzintegrate_letzd2funzd2();
					BGl_importedzd2moduleszd2initz00zzintegrate_letzd2funzd2();
					BGl_genericzd2initzd2zzintegrate_letzd2funzd2();
					BGl_methodzd2initzd2zzintegrate_letzd2funzd2();
					return BGl_toplevelzd2initzd2zzintegrate_letzd2funzd2();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_letzd2funzd2()
	{
		{	/* Integrate/let_fun.scm 16 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"integrate_let-fun");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"integrate_let-fun");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"integrate_let-fun");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"integrate_let-fun");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"integrate_let-fun");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"integrate_let-fun");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"integrate_let-fun");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0),
				"integrate_let-fun");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"integrate_let-fun");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzintegrate_letzd2funzd2()
	{
		{	/* Integrate/let_fun.scm 16 */
			{	/* Integrate/let_fun.scm 16 */
				obj_t BgL_cportz00_2243;

				{	/* Integrate/let_fun.scm 16 */
					obj_t BgL_stringz00_2251;

					BgL_stringz00_2251 = BGl_string1803z00zzintegrate_letzd2funzd2;
					{	/* Integrate/let_fun.scm 16 */
						obj_t BgL_startz00_2252;

						BgL_startz00_2252 = BINT(((long) 0));
						{	/* Integrate/let_fun.scm 16 */
							obj_t BgL_endz00_2253;

							BgL_endz00_2253 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2251)));
							{	/* Integrate/let_fun.scm 16 */

								BgL_cportz00_2243 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2251, BgL_startz00_2252, BgL_endz00_2253);
				}}}}
				{
					long BgL_iz00_2244;

					BgL_iz00_2244 = ((long) 0);
				BgL_loopz00_2245:
					if ((BgL_iz00_2244 == ((long) -1)))
						{	/* Integrate/let_fun.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Integrate/let_fun.scm 16 */
							{	/* Integrate/let_fun.scm 16 */
								obj_t BgL_arg1808z00_2247;

								{	/* Integrate/let_fun.scm 16 */

									{	/* Integrate/let_fun.scm 16 */
										obj_t BgL_locationz00_2249;

										BgL_locationz00_2249 = BBOOL(((bool_t) 0));
										{	/* Integrate/let_fun.scm 16 */

											BgL_arg1808z00_2247 =
												BGl_readz00zz__readerz00(BgL_cportz00_2243,
												BgL_locationz00_2249);
										}
									}
								}
								{	/* Integrate/let_fun.scm 16 */
									int BgL_tmpz00_2352;

									BgL_tmpz00_2352 = (int) (BgL_iz00_2244);
									CNST_TABLE_SET(BgL_tmpz00_2352, BgL_arg1808z00_2247);
							}}
							{	/* Integrate/let_fun.scm 16 */
								int BgL_auxz00_2250;

								BgL_auxz00_2250 = (int) ((BgL_iz00_2244 - ((long) 1)));
								{
									long BgL_iz00_2357;

									BgL_iz00_2357 = (long) (BgL_auxz00_2250);
									BgL_iz00_2244 = BgL_iz00_2357;
									goto BgL_loopz00_2245;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzintegrate_letzd2funzd2()
	{
		{	/* Integrate/let_fun.scm 16 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzintegrate_letzd2funzd2()
	{
		{	/* Integrate/let_fun.scm 16 */
			BGl_za2stampza2z00zzintegrate_letzd2funzd2 = ((long) 0);
			return BUNSPEC;
		}

	}



/* bind-fun! */
	obj_t BGl_bindzd2funz12zc0zzintegrate_letzd2funzd2(obj_t BgL_varz00_3)
	{
		{	/* Integrate/let_fun.scm 36 */
			if (BGl_isazf3zf3zz__objectz00(BgL_varz00_3, BGl_localz00zzast_varz00))
				{	/* Integrate/let_fun.scm 39 */
					BgL_valuez00_bglt BgL_arg1310z00_1565;

					BgL_arg1310z00_1565 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_varz00_3))))->BgL_valuez00);
					{	/* Integrate/let_fun.scm 39 */
						obj_t BgL_vz00_2018;

						BgL_vz00_2018 = BINT(BGl_za2stampza2z00zzintegrate_letzd2funzd2);
						{
							BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2366;

							{
								obj_t BgL_auxz00_2367;

								{	/* Integrate/let_fun.scm 39 */
									BgL_objectz00_bglt BgL_tmpz00_2368;

									BgL_tmpz00_2368 =
										((BgL_objectz00_bglt)
										((BgL_sfunz00_bglt) BgL_arg1310z00_1565));
									BgL_auxz00_2367 = BGL_OBJECT_WIDENING(BgL_tmpz00_2368);
								}
								BgL_auxz00_2366 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_2367);
							}
							return
								((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2366))->
									BgL_istampz00) = ((obj_t) BgL_vz00_2018), BUNSPEC);
						}
					}
				}
			else
				{	/* Integrate/let_fun.scm 38 */
					return BFALSE;
				}
		}

	}



/* free-fun? */
	bool_t BGl_freezd2funzf3z21zzintegrate_letzd2funzd2(obj_t BgL_localz00_4)
	{
		{	/* Integrate/let_fun.scm 44 */
			{	/* Integrate/let_fun.scm 48 */
				bool_t BgL_test1845z00_2374;

				{	/* Integrate/let_fun.scm 48 */
					obj_t BgL_arg1314z00_1569;

					{	/* Integrate/let_fun.scm 48 */
						BgL_sfunz00_bglt BgL_oz00_2021;

						BgL_oz00_2021 =
							((BgL_sfunz00_bglt)
							(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt)
											((BgL_localz00_bglt) BgL_localz00_4))))->BgL_valuez00));
						{
							BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2379;

							{
								obj_t BgL_auxz00_2380;

								{	/* Integrate/let_fun.scm 48 */
									BgL_objectz00_bglt BgL_tmpz00_2381;

									BgL_tmpz00_2381 = ((BgL_objectz00_bglt) BgL_oz00_2021);
									BgL_auxz00_2380 = BGL_OBJECT_WIDENING(BgL_tmpz00_2381);
								}
								BgL_auxz00_2379 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_2380);
							}
							BgL_arg1314z00_1569 =
								(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2379))->
								BgL_istampz00);
						}
					}
					BgL_test1845z00_2374 =
						(BgL_arg1314z00_1569 ==
						BINT(BGl_za2stampza2z00zzintegrate_letzd2funzd2));
				}
				if (BgL_test1845z00_2374)
					{	/* Integrate/let_fun.scm 48 */
						return ((bool_t) 0);
					}
				else
					{	/* Integrate/let_fun.scm 48 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* displace-let-fun! */
	BGL_EXPORTED_DEF obj_t
		BGl_displacezd2letzd2funz12z12zzintegrate_letzd2funzd2(obj_t BgL_varz00_5)
	{
		{	/* Integrate/let_fun.scm 53 */
			BGl_za2stampza2z00zzintegrate_letzd2funzd2 =
				(((long) 1) + BGl_za2stampza2z00zzintegrate_letzd2funzd2);
			{	/* Integrate/let_fun.scm 60 */
				obj_t BgL_arg1316z00_1571;
				obj_t BgL_arg1317z00_1572;

				BgL_arg1316z00_1571 =
					(((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt)
								(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_varz00_5)))->
									BgL_valuez00))))->BgL_bodyz00);
				{	/* Integrate/let_fun.scm 60 */
					obj_t BgL_list1320z00_1574;

					BgL_list1320z00_1574 = MAKE_YOUNG_PAIR(BgL_varz00_5, BNIL);
					BgL_arg1317z00_1572 = BgL_list1320z00_1574;
				}
				BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(
					((BgL_nodez00_bglt) BgL_arg1316z00_1571), BgL_arg1317z00_1572);
			}
			{	/* Integrate/let_fun.scm 69 */
				obj_t BgL_ledz00_1575;

				{	/* Integrate/let_fun.scm 69 */
					BgL_sfunz00_bglt BgL_oz00_2029;

					BgL_oz00_2029 =
						((BgL_sfunz00_bglt)
						(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_varz00_5)))->BgL_valuez00));
					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2399;

						{
							obj_t BgL_auxz00_2400;

							{	/* Integrate/let_fun.scm 69 */
								BgL_objectz00_bglt BgL_tmpz00_2401;

								BgL_tmpz00_2401 = ((BgL_objectz00_bglt) BgL_oz00_2029);
								BgL_auxz00_2400 = BGL_OBJECT_WIDENING(BgL_tmpz00_2401);
							}
							BgL_auxz00_2399 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_2400);
						}
						BgL_ledz00_1575 =
							(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2399))->
							BgL_ledz00);
				}}
				{
					obj_t BgL_l1252z00_1577;

					BgL_l1252z00_1577 = BgL_ledz00_1575;
				BgL_zc3z04anonymousza31321ze3z87_1578:
					if (PAIRP(BgL_l1252z00_1577))
						{	/* Integrate/let_fun.scm 70 */
							{	/* Integrate/let_fun.scm 73 */
								obj_t BgL_lz00_1580;

								BgL_lz00_1580 = CAR(BgL_l1252z00_1577);
								if (BGl_freezd2funzf3z21zzintegrate_letzd2funzd2(BgL_lz00_1580))
									{	/* Integrate/let_fun.scm 80 */
										obj_t BgL_arg1324z00_1582;
										obj_t BgL_arg1325z00_1583;

										BgL_arg1324z00_1582 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt)
														(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt) BgL_lz00_1580)))->
															BgL_valuez00))))->BgL_bodyz00);
										{	/* Integrate/let_fun.scm 81 */
											obj_t BgL_list1327z00_1585;

											BgL_list1327z00_1585 =
												MAKE_YOUNG_PAIR(BgL_varz00_5, BNIL);
											BgL_arg1325z00_1583 = BgL_list1327z00_1585;
										}
										BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2
											(((BgL_nodez00_bglt) BgL_arg1324z00_1582),
											BgL_arg1325z00_1583);
									}
								else
									{	/* Integrate/let_fun.scm 74 */
										BFALSE;
									}
							}
							{
								obj_t BgL_l1252z00_2418;

								BgL_l1252z00_2418 = CDR(BgL_l1252z00_1577);
								BgL_l1252z00_1577 = BgL_l1252z00_2418;
								goto BgL_zc3z04anonymousza31321ze3z87_1578;
							}
						}
					else
						{	/* Integrate/let_fun.scm 70 */
							((bool_t) 1);
						}
				}
				{
					obj_t BgL_ledz00_1590;
					obj_t BgL_addedz00_1591;

					BgL_ledz00_1590 = BgL_ledz00_1575;
					BgL_addedz00_1591 = BNIL;
				BgL_zc3z04anonymousza31329ze3z87_1592:
					if (NULLP(BgL_ledz00_1590))
						{	/* Integrate/let_fun.scm 88 */
							obj_t BgL_oldzd2bodyzd2_1594;

							BgL_oldzd2bodyzd2_1594 =
								(((BgL_sfunz00_bglt) COBJECT(
										((BgL_sfunz00_bglt)
											(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_varz00_5)))->
												BgL_valuez00))))->BgL_bodyz00);
							if (NULLP(BgL_addedz00_1591))
								{	/* Integrate/let_fun.scm 89 */
									return BgL_oldzd2bodyzd2_1594;
								}
							else
								{	/* Integrate/let_fun.scm 90 */
									BgL_letzd2funzd2_bglt BgL_newzd2bodyzd2_1596;

									{	/* Integrate/let_fun.scm 90 */
										BgL_letzd2funzd2_bglt BgL_new1109z00_1598;

										{	/* Integrate/let_fun.scm 91 */
											BgL_letzd2funzd2_bglt BgL_new1108z00_1599;

											BgL_new1108z00_1599 =
												((BgL_letzd2funzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_letzd2funzd2_bgl))));
											{	/* Integrate/let_fun.scm 91 */
												long BgL_arg1335z00_1600;

												{	/* Integrate/let_fun.scm 91 */
													long BgL_res1754z00_2042;

													BgL_res1754z00_2042 =
														BGL_CLASS_INDEX(BGl_letzd2funzd2zzast_nodez00);
													BgL_arg1335z00_1600 = BgL_res1754z00_2042;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1108z00_1599),
													BgL_arg1335z00_1600);
											}
											{	/* Integrate/let_fun.scm 91 */
												BgL_objectz00_bglt BgL_tmpz00_2432;

												BgL_tmpz00_2432 =
													((BgL_objectz00_bglt) BgL_new1108z00_1599);
												BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2432, BFALSE);
											}
											((BgL_objectz00_bglt) BgL_new1108z00_1599);
											BgL_new1109z00_1598 = BgL_new1108z00_1599;
										}
										((((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_new1109z00_1598)))->
												BgL_locz00) =
											((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																BgL_oldzd2bodyzd2_1594)))->BgL_locz00)),
											BUNSPEC);
										((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
															BgL_new1109z00_1598)))->BgL_typez00) =
											((BgL_typez00_bglt)
												BGl_getzd2typezd2zztype_typeofz00(((BgL_nodez00_bglt)
														BgL_oldzd2bodyzd2_1594), ((bool_t) 0))), BUNSPEC);
										((((BgL_nodezf2effectzf2_bglt)
													COBJECT(((BgL_nodezf2effectzf2_bglt)
															BgL_new1109z00_1598)))->BgL_sidezd2effectzd2) =
											((obj_t) BUNSPEC), BUNSPEC);
										((((BgL_nodezf2effectzf2_bglt)
													COBJECT(((BgL_nodezf2effectzf2_bglt)
															BgL_new1109z00_1598)))->BgL_keyz00) =
											((obj_t) BINT(((long) -1))), BUNSPEC);
										((((BgL_letzd2funzd2_bglt) COBJECT(BgL_new1109z00_1598))->
												BgL_localsz00) = ((obj_t) BgL_addedz00_1591), BUNSPEC);
										((((BgL_letzd2funzd2_bglt) COBJECT(BgL_new1109z00_1598))->
												BgL_bodyz00) =
											((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
													BgL_oldzd2bodyzd2_1594)), BUNSPEC);
										BgL_newzd2bodyzd2_1596 = BgL_new1109z00_1598;
									}
									{	/* Integrate/let_fun.scm 101 */
										BgL_valuez00_bglt BgL_arg1334z00_1597;

										BgL_arg1334z00_1597 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_varz00_5)))->
											BgL_valuez00);
										((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
															BgL_arg1334z00_1597)))->BgL_bodyz00) =
											((obj_t) ((obj_t) BgL_newzd2bodyzd2_1596)), BUNSPEC);
									}
									return ((obj_t) BgL_newzd2bodyzd2_1596);
								}
						}
					else
						{	/* Integrate/let_fun.scm 108 */
							bool_t BgL_test1850z00_2458;

							{	/* Integrate/let_fun.scm 108 */
								obj_t BgL_arg1348z00_1608;

								BgL_arg1348z00_1608 = CAR(((obj_t) BgL_ledz00_1590));
								BgL_test1850z00_2458 =
									BGl_freezd2funzf3z21zzintegrate_letzd2funzd2
									(BgL_arg1348z00_1608);
							}
							if (BgL_test1850z00_2458)
								{	/* Integrate/let_fun.scm 110 */
									obj_t BgL_arg1344z00_1604;
									obj_t BgL_arg1345z00_1605;

									BgL_arg1344z00_1604 = CDR(((obj_t) BgL_ledz00_1590));
									{	/* Integrate/let_fun.scm 110 */
										obj_t BgL_arg1346z00_1606;

										BgL_arg1346z00_1606 = CAR(((obj_t) BgL_ledz00_1590));
										BgL_arg1345z00_1605 =
											MAKE_YOUNG_PAIR(BgL_arg1346z00_1606, BgL_addedz00_1591);
									}
									{
										obj_t BgL_addedz00_2468;
										obj_t BgL_ledz00_2467;

										BgL_ledz00_2467 = BgL_arg1344z00_1604;
										BgL_addedz00_2468 = BgL_arg1345z00_1605;
										BgL_addedz00_1591 = BgL_addedz00_2468;
										BgL_ledz00_1590 = BgL_ledz00_2467;
										goto BgL_zc3z04anonymousza31329ze3z87_1592;
									}
								}
							else
								{	/* Integrate/let_fun.scm 113 */
									obj_t BgL_arg1347z00_1607;

									BgL_arg1347z00_1607 = CDR(((obj_t) BgL_ledz00_1590));
									{
										obj_t BgL_ledz00_2471;

										BgL_ledz00_2471 = BgL_arg1347z00_1607;
										BgL_ledz00_1590 = BgL_ledz00_2471;
										goto BgL_zc3z04anonymousza31329ze3z87_1592;
									}
								}
						}
				}
			}
		}

	}



/* &displace-let-fun! */
	obj_t BGl_z62displacezd2letzd2funz12z70zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2146, obj_t BgL_varz00_2147)
	{
		{	/* Integrate/let_fun.scm 53 */
			return
				BGl_displacezd2letzd2funz12z12zzintegrate_letzd2funzd2(BgL_varz00_2147);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzintegrate_letzd2funzd2()
	{
		{	/* Integrate/let_fun.scm 16 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_letzd2funzd2()
	{
		{	/* Integrate/let_fun.scm 16 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_proc1774z00zzintegrate_letzd2funzd2, BGl_nodez00zzast_nodez00,
				BGl_string1775z00zzintegrate_letzd2funzd2);
		}

	}



/* &displace-let-fun-nod1260 */
	obj_t BGl_z62displacezd2letzd2funzd2nod1260zb0zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2149, obj_t BgL_nodez00_2150, obj_t BgL_hostsz00_2151)
	{
		{	/* Integrate/let_fun.scm 123 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
				BGl_string1776z00zzintegrate_letzd2funzd2,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2150)));
		}

	}



/* displace-let-fun-node! */
	obj_t
		BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2
		(BgL_nodez00_bglt BgL_nodez00_6, obj_t BgL_hostsz00_7)
	{
		{	/* Integrate/let_fun.scm 123 */
			{	/* Integrate/let_fun.scm 123 */
				obj_t BgL_method1261z00_1616;

				{	/* Integrate/let_fun.scm 123 */
					obj_t BgL_res1765z00_2089;

					{	/* Integrate/let_fun.scm 123 */
						long BgL_objzd2classzd2numz00_2054;

						{	/* Integrate/let_fun.scm 123 */
							long BgL_res1755z00_2057;

							BgL_res1755z00_2057 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_6));
							BgL_objzd2classzd2numz00_2054 = BgL_res1755z00_2057;
						}
						{	/* Integrate/let_fun.scm 123 */
							obj_t BgL_arg1813z00_2055;

							BgL_arg1813z00_2055 =
								PROCEDURE_REF
								(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
								(int) (((long) 1)));
							{	/* Integrate/let_fun.scm 123 */
								int BgL_offsetz00_2059;

								BgL_offsetz00_2059 = (int) (BgL_objzd2classzd2numz00_2054);
								{	/* Integrate/let_fun.scm 123 */
									long BgL_offsetz00_2060;

									BgL_offsetz00_2060 =
										((long) (BgL_offsetz00_2059) - OBJECT_TYPE);
									{	/* Integrate/let_fun.scm 123 */
										long BgL_modz00_2061;

										BgL_modz00_2061 =
											(BgL_offsetz00_2060 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Integrate/let_fun.scm 123 */
											long BgL_restz00_2063;

											BgL_restz00_2063 =
												(BgL_offsetz00_2060 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Integrate/let_fun.scm 123 */

												{	/* Integrate/let_fun.scm 123 */
													obj_t BgL_bucketz00_2065;

													BgL_bucketz00_2065 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2055), BgL_modz00_2061);
													BgL_res1765z00_2089 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2065), BgL_restz00_2063);
					}}}}}}}}
					BgL_method1261z00_1616 = BgL_res1765z00_2089;
				}
				return
					PROCEDURE_ENTRY(BgL_method1261z00_1616) (BgL_method1261z00_1616,
					((obj_t) BgL_nodez00_6), BgL_hostsz00_7, BEOA);
			}
		}

	}



/* &displace-let-fun-node! */
	obj_t BGl_z62displacezd2letzd2funzd2nodez12za2zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2152, obj_t BgL_nodez00_2153, obj_t BgL_hostsz00_2154)
	{
		{	/* Integrate/let_fun.scm 123 */
			return
				BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(
				((BgL_nodez00_bglt) BgL_nodez00_2153), BgL_hostsz00_2154);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_letzd2funzd2()
	{
		{	/* Integrate/let_fun.scm 16 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_atomz00zzast_nodez00, BGl_proc1777z00zzintegrate_letzd2funzd2,
				BGl_string1778z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_kwotez00zzast_nodez00, BGl_proc1779z00zzintegrate_letzd2funzd2,
				BGl_string1778z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_varz00zzast_nodez00, BGl_proc1780z00zzintegrate_letzd2funzd2,
				BGl_string1778z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_closurez00zzast_nodez00, BGl_proc1781z00zzintegrate_letzd2funzd2,
				BGl_string1778z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_sequencez00zzast_nodez00, BGl_proc1782z00zzintegrate_letzd2funzd2,
				BGl_string1778z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_syncz00zzast_nodez00, BGl_proc1783z00zzintegrate_letzd2funzd2,
				BGl_string1778z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_appz00zzast_nodez00, BGl_proc1784z00zzintegrate_letzd2funzd2,
				BGl_string1778z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1785z00zzintegrate_letzd2funzd2,
				BGl_string1778z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_funcallz00zzast_nodez00, BGl_proc1786z00zzintegrate_letzd2funzd2,
				BGl_string1778z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_externz00zzast_nodez00, BGl_proc1787z00zzintegrate_letzd2funzd2,
				BGl_string1778z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_castz00zzast_nodez00, BGl_proc1788z00zzintegrate_letzd2funzd2,
				BGl_string1778z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_setqz00zzast_nodez00, BGl_proc1789z00zzintegrate_letzd2funzd2,
				BGl_string1778z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_conditionalz00zzast_nodez00,
				BGl_proc1790z00zzintegrate_letzd2funzd2,
				BGl_string1778z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_failz00zzast_nodez00, BGl_proc1791z00zzintegrate_letzd2funzd2,
				BGl_string1778z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_switchz00zzast_nodez00, BGl_proc1792z00zzintegrate_letzd2funzd2,
				BGl_string1778z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1793z00zzintegrate_letzd2funzd2,
				BGl_string1778z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1794z00zzintegrate_letzd2funzd2,
				BGl_string1778z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc1795z00zzintegrate_letzd2funzd2,
				BGl_string1778z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc1796z00zzintegrate_letzd2funzd2,
				BGl_string1778z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1797z00zzintegrate_letzd2funzd2,
				BGl_string1778z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc1798z00zzintegrate_letzd2funzd2,
				BGl_string1778z00zzintegrate_letzd2funzd2);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1799z00zzintegrate_letzd2funzd2,
				BGl_string1778z00zzintegrate_letzd2funzd2);
		}

	}



/* &displace-let-fun-nod1305 */
	obj_t BGl_z62displacezd2letzd2funzd2nod1305zb0zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2177, obj_t BgL_nodez00_2178, obj_t BgL_hostsz00_2179)
	{
		{	/* Integrate/let_fun.scm 322 */
			return BUNSPEC;
		}

	}



/* &displace-let-fun-nod1303 */
	obj_t BGl_z62displacezd2letzd2funzd2nod1303zb0zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2180, obj_t BgL_nodez00_2181, obj_t BgL_hostsz00_2182)
	{
		{	/* Integrate/let_fun.scm 316 */
			return BUNSPEC;
		}

	}



/* &displace-let-fun-nod1301 */
	obj_t BGl_z62displacezd2letzd2funzd2nod1301zb0zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2183, obj_t BgL_nodez00_2184, obj_t BgL_hostsz00_2185)
	{
		{	/* Integrate/let_fun.scm 309 */
			return
				BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(
				(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_2184)))->BgL_valuez00),
				BgL_hostsz00_2185);
		}

	}



/* &displace-let-fun-nod1299 */
	obj_t BGl_z62displacezd2letzd2funzd2nod1299zb0zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2186, obj_t BgL_nodez00_2187, obj_t BgL_hostsz00_2188)
	{
		{	/* Integrate/let_fun.scm 301 */
			BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2187)))->BgL_exitz00),
				BgL_hostsz00_2188);
			return
				BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(((
						(BgL_jumpzd2exzd2itz00_bglt) COBJECT(((BgL_jumpzd2exzd2itz00_bglt)
								BgL_nodez00_2187)))->BgL_valuez00), BgL_hostsz00_2188);
		}

	}



/* &displace-let-fun-nod1297 */
	obj_t BGl_z62displacezd2letzd2funzd2nod1297zb0zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2189, obj_t BgL_nodez00_2190, obj_t BgL_hostsz00_2191)
	{
		{	/* Integrate/let_fun.scm 294 */
			return
				BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(
				(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2190)))->BgL_bodyz00),
				BgL_hostsz00_2191);
		}

	}



/* &displace-let-fun-nod1295 */
	obj_t BGl_z62displacezd2letzd2funzd2nod1295zb0zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2192, obj_t BgL_nodez00_2193, obj_t BgL_hostsz00_2194)
	{
		{	/* Integrate/let_fun.scm 280 */
			{	/* Integrate/let_fun.scm 282 */
				obj_t BgL_g1126z00_2264;

				BgL_g1126z00_2264 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2193)))->BgL_bindingsz00);
				{
					obj_t BgL_bindingsz00_2266;

					BgL_bindingsz00_2266 = BgL_g1126z00_2264;
				BgL_liipz00_2265:
					if (NULLP(BgL_bindingsz00_2266))
						{	/* Integrate/let_fun.scm 283 */
							return
								BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(
								(((BgL_letzd2varzd2_bglt) COBJECT(
											((BgL_letzd2varzd2_bglt) BgL_nodez00_2193)))->
									BgL_bodyz00), BgL_hostsz00_2194);
						}
					else
						{	/* Integrate/let_fun.scm 285 */
							obj_t BgL_bindingz00_2267;

							BgL_bindingz00_2267 = CAR(((obj_t) BgL_bindingsz00_2266));
							{	/* Integrate/let_fun.scm 286 */
								obj_t BgL_valz00_2268;

								BgL_valz00_2268 = CDR(((obj_t) BgL_bindingz00_2267));
								{	/* Integrate/let_fun.scm 287 */

									BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(
										((BgL_nodez00_bglt) BgL_valz00_2268), BgL_hostsz00_2194);
									{	/* Integrate/let_fun.scm 289 */
										obj_t BgL_arg1575z00_2269;

										BgL_arg1575z00_2269 = CDR(((obj_t) BgL_bindingsz00_2266));
										{
											obj_t BgL_bindingsz00_2560;

											BgL_bindingsz00_2560 = BgL_arg1575z00_2269;
											BgL_bindingsz00_2266 = BgL_bindingsz00_2560;
											goto BgL_liipz00_2265;
										}
									}
								}
							}
						}
				}
			}
		}

	}



/* &displace-let-fun-nod1293 */
	obj_t BGl_z62displacezd2letzd2funzd2nod1293zb0zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2195, obj_t BgL_nodez00_2196, obj_t BgL_hostsz00_2197)
	{
		{	/* Integrate/let_fun.scm 250 */
			{	/* Tools/trace.sch 53 */
				obj_t BgL_g1123z00_2271;

				BgL_g1123z00_2271 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2196)))->BgL_localsz00);
				{
					obj_t BgL_oldz00_2273;
					obj_t BgL_newz00_2274;

					BgL_oldz00_2273 = BgL_g1123z00_2271;
					BgL_newz00_2274 = BNIL;
				BgL_liipz00_2272:
					if (NULLP(BgL_oldz00_2273))
						{	/* Tools/trace.sch 53 */
							((((BgL_letzd2funzd2_bglt) COBJECT(
											((BgL_letzd2funzd2_bglt) BgL_nodez00_2196)))->
									BgL_localsz00) = ((obj_t) BgL_newz00_2274), BUNSPEC);
							return
								BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(((
										(BgL_letzd2funzd2_bglt) COBJECT(((BgL_letzd2funzd2_bglt)
												BgL_nodez00_2196)))->BgL_bodyz00), BgL_hostsz00_2197);
						}
					else
						{	/* Tools/trace.sch 53 */
							bool_t BgL_test1853z00_2570;

							{	/* Tools/trace.sch 53 */
								obj_t BgL_arg1558z00_2275;

								{	/* Tools/trace.sch 53 */
									BgL_sfunz00_bglt BgL_oz00_2276;

									BgL_oz00_2276 =
										((BgL_sfunz00_bglt)
										(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt)
															CAR(
																((obj_t) BgL_oldz00_2273))))))->BgL_valuez00));
									{
										BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2577;

										{
											obj_t BgL_auxz00_2578;

											{	/* Tools/trace.sch 53 */
												BgL_objectz00_bglt BgL_tmpz00_2579;

												BgL_tmpz00_2579 = ((BgL_objectz00_bglt) BgL_oz00_2276);
												BgL_auxz00_2578 = BGL_OBJECT_WIDENING(BgL_tmpz00_2579);
											}
											BgL_auxz00_2577 =
												((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_2578);
										}
										BgL_arg1558z00_2275 =
											(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2577))->
											BgL_lz00);
									}
								}
								BgL_test1853z00_2570 =
									CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
									(BgL_arg1558z00_2275, BgL_hostsz00_2197));
							}
							if (BgL_test1853z00_2570)
								{	/* Tools/trace.sch 53 */
									obj_t BgL_lz00_2277;

									BgL_lz00_2277 = CAR(((obj_t) BgL_oldz00_2273));
									BGl_bindzd2funz12zc0zzintegrate_letzd2funzd2(BgL_lz00_2277);
									{	/* Tools/trace.sch 53 */
										obj_t BgL_arg1521z00_2278;
										obj_t BgL_arg1528z00_2279;

										BgL_arg1521z00_2278 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt)
														(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt) BgL_lz00_2277))))->
															BgL_valuez00))))->BgL_bodyz00);
										BgL_arg1528z00_2279 =
											MAKE_YOUNG_PAIR(BgL_lz00_2277, BgL_hostsz00_2197);
										BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2
											(((BgL_nodez00_bglt) BgL_arg1521z00_2278),
											BgL_arg1528z00_2279);
									}
									{	/* Tools/trace.sch 53 */
										obj_t BgL_arg1537z00_2280;
										obj_t BgL_arg1540z00_2281;

										BgL_arg1537z00_2280 = CDR(((obj_t) BgL_oldz00_2273));
										BgL_arg1540z00_2281 =
											MAKE_YOUNG_PAIR(BgL_lz00_2277, BgL_newz00_2274);
										{
											obj_t BgL_newz00_2601;
											obj_t BgL_oldz00_2600;

											BgL_oldz00_2600 = BgL_arg1537z00_2280;
											BgL_newz00_2601 = BgL_arg1540z00_2281;
											BgL_newz00_2274 = BgL_newz00_2601;
											BgL_oldz00_2273 = BgL_oldz00_2600;
											goto BgL_liipz00_2272;
										}
									}
								}
							else
								{	/* Tools/trace.sch 53 */
									obj_t BgL_arg1552z00_2282;

									BgL_arg1552z00_2282 = CDR(((obj_t) BgL_oldz00_2273));
									{
										obj_t BgL_oldz00_2604;

										BgL_oldz00_2604 = BgL_arg1552z00_2282;
										BgL_oldz00_2273 = BgL_oldz00_2604;
										goto BgL_liipz00_2272;
									}
								}
						}
				}
			}
		}

	}



/* &displace-let-fun-nod1291 */
	obj_t BGl_z62displacezd2letzd2funzd2nod1291zb0zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2198, obj_t BgL_nodez00_2199, obj_t BgL_hostsz00_2200)
	{
		{	/* Integrate/let_fun.scm 238 */
			{	/* Integrate/let_fun.scm 240 */
				obj_t BgL_g1121z00_2284;

				BgL_g1121z00_2284 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2199)))->BgL_clausesz00);
				{
					obj_t BgL_clausesz00_2286;

					BgL_clausesz00_2286 = BgL_g1121z00_2284;
				BgL_liipz00_2285:
					if (NULLP(BgL_clausesz00_2286))
						{	/* Integrate/let_fun.scm 241 */
							return
								BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(
								(((BgL_switchz00_bglt) COBJECT(
											((BgL_switchz00_bglt) BgL_nodez00_2199)))->BgL_testz00),
								BgL_hostsz00_2200);
						}
					else
						{	/* Integrate/let_fun.scm 241 */
							{	/* Integrate/let_fun.scm 244 */
								obj_t BgL_arg1476z00_2287;

								{	/* Integrate/let_fun.scm 244 */
									obj_t BgL_pairz00_2288;

									BgL_pairz00_2288 = CAR(((obj_t) BgL_clausesz00_2286));
									BgL_arg1476z00_2287 = CDR(BgL_pairz00_2288);
								}
								BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(
									((BgL_nodez00_bglt) BgL_arg1476z00_2287), BgL_hostsz00_2200);
							}
							{	/* Integrate/let_fun.scm 245 */
								obj_t BgL_arg1489z00_2289;

								BgL_arg1489z00_2289 = CDR(((obj_t) BgL_clausesz00_2286));
								{
									obj_t BgL_clausesz00_2619;

									BgL_clausesz00_2619 = BgL_arg1489z00_2289;
									BgL_clausesz00_2286 = BgL_clausesz00_2619;
									goto BgL_liipz00_2285;
								}
							}
						}
				}
			}
		}

	}



/* &displace-let-fun-nod1289 */
	obj_t BGl_z62displacezd2letzd2funzd2nod1289zb0zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2201, obj_t BgL_nodez00_2202, obj_t BgL_hostsz00_2203)
	{
		{	/* Integrate/let_fun.scm 229 */
			BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2202)))->BgL_procz00),
				BgL_hostsz00_2203);
			BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(((
						(BgL_failz00_bglt) COBJECT(((BgL_failz00_bglt) BgL_nodez00_2202)))->
					BgL_msgz00), BgL_hostsz00_2203);
			return
				BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(((
						(BgL_failz00_bglt) COBJECT(((BgL_failz00_bglt) BgL_nodez00_2202)))->
					BgL_objz00), BgL_hostsz00_2203);
		}

	}



/* &displace-let-fun-nod1287 */
	obj_t BGl_z62displacezd2letzd2funzd2nod1287zb0zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2204, obj_t BgL_nodez00_2205, obj_t BgL_hostsz00_2206)
	{
		{	/* Integrate/let_fun.scm 220 */
			BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2205)))->BgL_testz00),
				BgL_hostsz00_2206);
			BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(((
						(BgL_conditionalz00_bglt) COBJECT(((BgL_conditionalz00_bglt)
								BgL_nodez00_2205)))->BgL_truez00), BgL_hostsz00_2206);
			return
				BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(((
						(BgL_conditionalz00_bglt) COBJECT(((BgL_conditionalz00_bglt)
								BgL_nodez00_2205)))->BgL_falsez00), BgL_hostsz00_2206);
		}

	}



/* &displace-let-fun-nod1285 */
	obj_t BGl_z62displacezd2letzd2funzd2nod1285zb0zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2207, obj_t BgL_nodez00_2208, obj_t BgL_hostsz00_2209)
	{
		{	/* Integrate/let_fun.scm 213 */
			return
				BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(
				(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2208)))->BgL_valuez00),
				BgL_hostsz00_2209);
		}

	}



/* &displace-let-fun-nod1283 */
	obj_t BGl_z62displacezd2letzd2funzd2nod1283zb0zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2210, obj_t BgL_nodez00_2211, obj_t BgL_hostsz00_2212)
	{
		{	/* Integrate/let_fun.scm 206 */
			return
				BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(
				(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2211)))->BgL_argz00),
				BgL_hostsz00_2212);
		}

	}



/* &displace-let-fun-nod1281 */
	obj_t BGl_z62displacezd2letzd2funzd2nod1281zb0zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2213, obj_t BgL_nodez00_2214, obj_t BgL_hostsz00_2215)
	{
		{	/* Integrate/let_fun.scm 199 */
			{	/* Integrate/let_fun.scm 200 */
				bool_t BgL_tmpz00_2644;

				{	/* Integrate/let_fun.scm 201 */
					obj_t BgL_g1259z00_2295;

					BgL_g1259z00_2295 =
						(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_nodez00_2214)))->BgL_exprza2za2);
					{
						obj_t BgL_l1257z00_2297;

						BgL_l1257z00_2297 = BgL_g1259z00_2295;
					BgL_zc3z04anonymousza31418ze3z87_2296:
						if (PAIRP(BgL_l1257z00_2297))
							{	/* Integrate/let_fun.scm 201 */
								{	/* Integrate/let_fun.scm 201 */
									obj_t BgL_nodez00_2298;

									BgL_nodez00_2298 = CAR(BgL_l1257z00_2297);
									BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(
										((BgL_nodez00_bglt) BgL_nodez00_2298), BgL_hostsz00_2215);
								}
								{
									obj_t BgL_l1257z00_2652;

									BgL_l1257z00_2652 = CDR(BgL_l1257z00_2297);
									BgL_l1257z00_2297 = BgL_l1257z00_2652;
									goto BgL_zc3z04anonymousza31418ze3z87_2296;
								}
							}
						else
							{	/* Integrate/let_fun.scm 201 */
								BgL_tmpz00_2644 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_tmpz00_2644);
			}
		}

	}



/* &displace-let-fun-nod1279 */
	obj_t BGl_z62displacezd2letzd2funzd2nod1279zb0zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2216, obj_t BgL_nodez00_2217, obj_t BgL_hostsz00_2218)
	{
		{	/* Integrate/let_fun.scm 187 */
			{
				obj_t BgL_astsz00_2301;

				BgL_astsz00_2301 =
					(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_2217)))->BgL_argsz00);
			BgL_liipz00_2300:
				if (NULLP(BgL_astsz00_2301))
					{	/* Integrate/let_fun.scm 190 */
						return
							BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(
							(((BgL_funcallz00_bglt) COBJECT(
										((BgL_funcallz00_bglt) BgL_nodez00_2217)))->BgL_funz00),
							BgL_hostsz00_2218);
					}
				else
					{	/* Integrate/let_fun.scm 190 */
						{	/* Integrate/let_fun.scm 193 */
							obj_t BgL_arg1396z00_2302;

							BgL_arg1396z00_2302 = CAR(((obj_t) BgL_astsz00_2301));
							BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(
								((BgL_nodez00_bglt) BgL_arg1396z00_2302), BgL_hostsz00_2218);
						}
						{	/* Integrate/let_fun.scm 194 */
							obj_t BgL_arg1417z00_2303;

							BgL_arg1417z00_2303 = CDR(((obj_t) BgL_astsz00_2301));
							{
								obj_t BgL_astsz00_2666;

								BgL_astsz00_2666 = BgL_arg1417z00_2303;
								BgL_astsz00_2301 = BgL_astsz00_2666;
								goto BgL_liipz00_2300;
							}
						}
					}
			}
		}

	}



/* &displace-let-fun-nod1277 */
	obj_t BGl_z62displacezd2letzd2funzd2nod1277zb0zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2219, obj_t BgL_nodez00_2220, obj_t BgL_hostsz00_2221)
	{
		{	/* Integrate/let_fun.scm 179 */
			BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_2220)))->BgL_funz00),
				BgL_hostsz00_2221);
			return
				BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(((
						(BgL_appzd2lyzd2_bglt) COBJECT(((BgL_appzd2lyzd2_bglt)
								BgL_nodez00_2220)))->BgL_argz00), BgL_hostsz00_2221);
		}

	}



/* &displace-let-fun-nod1275 */
	obj_t BGl_z62displacezd2letzd2funzd2nod1275zb0zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2222, obj_t BgL_nodez00_2223, obj_t BgL_hostsz00_2224)
	{
		{	/* Integrate/let_fun.scm 168 */
			{	/* Integrate/let_fun.scm 169 */
				obj_t BgL_g1112z00_2306;

				BgL_g1112z00_2306 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_2223)))->BgL_argsz00);
				{
					obj_t BgL_argsz00_2308;

					BgL_argsz00_2308 = BgL_g1112z00_2306;
				BgL_liipz00_2307:
					if (NULLP(BgL_argsz00_2308))
						{	/* Integrate/let_fun.scm 170 */
							return BUNSPEC;
						}
					else
						{	/* Integrate/let_fun.scm 170 */
							{	/* Integrate/let_fun.scm 173 */
								obj_t BgL_arg1367z00_2309;

								BgL_arg1367z00_2309 = CAR(((obj_t) BgL_argsz00_2308));
								BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(
									((BgL_nodez00_bglt) BgL_arg1367z00_2309), BgL_hostsz00_2224);
							}
							{	/* Integrate/let_fun.scm 174 */
								obj_t BgL_arg1370z00_2310;

								BgL_arg1370z00_2310 = CDR(((obj_t) BgL_argsz00_2308));
								{
									obj_t BgL_argsz00_2685;

									BgL_argsz00_2685 = BgL_arg1370z00_2310;
									BgL_argsz00_2308 = BgL_argsz00_2685;
									goto BgL_liipz00_2307;
								}
							}
						}
				}
			}
		}

	}



/* &displace-let-fun-nod1273 */
	obj_t BGl_z62displacezd2letzd2funzd2nod1273zb0zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2225, obj_t BgL_nodez00_2226, obj_t BgL_hostsz00_2227)
	{
		{	/* Integrate/let_fun.scm 159 */
			BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2226)))->BgL_mutexz00),
				BgL_hostsz00_2227);
			BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(((
						(BgL_syncz00_bglt) COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2226)))->
					BgL_prelockz00), BgL_hostsz00_2227);
			return
				BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(((
						(BgL_syncz00_bglt) COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2226)))->
					BgL_bodyz00), BgL_hostsz00_2227);
		}

	}



/* &displace-let-fun-nod1271 */
	obj_t BGl_z62displacezd2letzd2funzd2nod1271zb0zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2228, obj_t BgL_nodez00_2229, obj_t BgL_hostsz00_2230)
	{
		{	/* Integrate/let_fun.scm 152 */
			{	/* Integrate/let_fun.scm 153 */
				bool_t BgL_tmpz00_2695;

				{	/* Integrate/let_fun.scm 154 */
					obj_t BgL_g1256z00_2313;

					BgL_g1256z00_2313 =
						(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_2229)))->BgL_nodesz00);
					{
						obj_t BgL_l1254z00_2315;

						BgL_l1254z00_2315 = BgL_g1256z00_2313;
					BgL_zc3z04anonymousza31358ze3z87_2314:
						if (PAIRP(BgL_l1254z00_2315))
							{	/* Integrate/let_fun.scm 154 */
								{	/* Integrate/let_fun.scm 154 */
									obj_t BgL_nodez00_2316;

									BgL_nodez00_2316 = CAR(BgL_l1254z00_2315);
									BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(
										((BgL_nodez00_bglt) BgL_nodez00_2316), BgL_hostsz00_2230);
								}
								{
									obj_t BgL_l1254z00_2703;

									BgL_l1254z00_2703 = CDR(BgL_l1254z00_2315);
									BgL_l1254z00_2315 = BgL_l1254z00_2703;
									goto BgL_zc3z04anonymousza31358ze3z87_2314;
								}
							}
						else
							{	/* Integrate/let_fun.scm 154 */
								BgL_tmpz00_2695 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_tmpz00_2695);
			}
		}

	}



/* &displace-let-fun-nod1269 */
	obj_t BGl_z62displacezd2letzd2funzd2nod1269zb0zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2231, obj_t BgL_nodez00_2232, obj_t BgL_hostsz00_2233)
	{
		{	/* Integrate/let_fun.scm 146 */
			{	/* Integrate/let_fun.scm 147 */
				obj_t BgL_arg1357z00_2318;

				BgL_arg1357z00_2318 =
					BGl_shapez00zztools_shapez00(
					((obj_t) ((BgL_closurez00_bglt) BgL_nodez00_2232)));
				return
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string1800z00zzintegrate_letzd2funzd2,
					BGl_string1801z00zzintegrate_letzd2funzd2, BgL_arg1357z00_2318);
			}
		}

	}



/* &displace-let-fun-nod1267 */
	obj_t BGl_z62displacezd2letzd2funzd2nod1267zb0zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2234, obj_t BgL_nodez00_2235, obj_t BgL_hostsz00_2236)
	{
		{	/* Integrate/let_fun.scm 140 */
			return BUNSPEC;
		}

	}



/* &displace-let-fun-nod1265 */
	obj_t BGl_z62displacezd2letzd2funzd2nod1265zb0zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2237, obj_t BgL_nodez00_2238, obj_t BgL_hostsz00_2239)
	{
		{	/* Integrate/let_fun.scm 134 */
			return BUNSPEC;
		}

	}



/* &displace-let-fun-nod1263 */
	obj_t BGl_z62displacezd2letzd2funzd2nod1263zb0zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2240, obj_t BgL_nodez00_2241, obj_t BgL_hostsz00_2242)
	{
		{	/* Integrate/let_fun.scm 128 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_letzd2funzd2()
	{
		{	/* Integrate/let_fun.scm 16 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1802z00zzintegrate_letzd2funzd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1802z00zzintegrate_letzd2funzd2));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1802z00zzintegrate_letzd2funzd2));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1802z00zzintegrate_letzd2funzd2));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1802z00zzintegrate_letzd2funzd2));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string1802z00zzintegrate_letzd2funzd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1802z00zzintegrate_letzd2funzd2));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1802z00zzintegrate_letzd2funzd2));
			return
				BGl_modulezd2initializa7ationz75zzintegrate_infoz00(((long) 0),
				BSTRING_TO_STRING(BGl_string1802z00zzintegrate_letzd2funzd2));
		}

	}

#ifdef __cplusplus
}
#endif
