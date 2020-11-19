/*===========================================================================*/
/*   (Integrate/cto.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/cto.scm) */
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
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_nodez00_bglt, BgL_localz00_bglt);
	static obj_t
		BGl_z62setzd2ctoz12zd2boxzd2setz121301zb0zzintegrate_ctoz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	static obj_t BGl_z62setzd2ctoz12zd2appzd2ly1275za2zzintegrate_ctoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62setzd2ctoz12zd2atom1260z70zzintegrate_ctoz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzintegrate_ctoz00();
	static obj_t BGl_z62setzd2ctoz12zd2extern1279z70zzintegrate_ctoz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_z62setzd2ctoz12zd2funcall1277z70zzintegrate_ctoz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzintegrate_ctoz00();
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_z62setzd2ctoz12zd2kwote1262z70zzintegrate_ctoz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62setzd2ctoz12zd2sequence1268z70zzintegrate_ctoz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_z62setzd2ctoz12zd2sync1270z70zzintegrate_ctoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62setzd2ctoz12zd2fail1287z70zzintegrate_ctoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzintegrate_ctoz00();
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_z62setzd2ctoz12zd2letzd2fun1291za2zzintegrate_ctoz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_z62setzd2ctoz12zd2app1273z70zzintegrate_ctoz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62setzd2ctoz12zd2setzd2exzd2it1295z70zzintegrate_ctoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_ctoz00 = BUNSPEC;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzintegrate_ctoz00();
	static obj_t BGl_z62setzd2ctoz12zd2boxzd2ref1303za2zzintegrate_ctoz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzintegrate_ctoz00();
	static obj_t
		BGl_z62setzd2ctoz12zd2jumpzd2exzd2it1297z70zzintegrate_ctoz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static obj_t BGl_z62setzd2ctoz12zd2switch1289z70zzintegrate_ctoz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62setzd2ctoz12zd2letzd2var1293za2zzintegrate_ctoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62setzd2ctoz12zd2makezd2box1299za2zzintegrate_ctoz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62setzd2ctoz12zd2closure1266z70zzintegrate_ctoz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_z62setzd2ctoz12zd2conditional1285z70zzintegrate_ctoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62setzd2ctoz12zd2cast1281z70zzintegrate_ctoz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_z62setzd2ctoz12zd2setq1283z70zzintegrate_ctoz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_ctoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
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
	static obj_t BGl_cnstzd2initzd2zzintegrate_ctoz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_ctoz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_ctoz00();
	static obj_t BGl_z62setzd2ctoz121257za2zzintegrate_ctoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62setzd2ctoz12za2zzintegrate_ctoz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	static obj_t BGl_z62setzd2ctoz12zd2var1264z70zzintegrate_ctoz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t __cnst[1];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1740z00zzintegrate_ctoz00,
		BgL_bgl_za762setza7d2ctoza71211773za7,
		BGl_z62setzd2ctoz121257za2zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1743z00zzintegrate_ctoz00,
		BgL_bgl_za762setza7d2ctoza712za71774z00,
		BGl_z62setzd2ctoz12zd2atom1260z70zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1745z00zzintegrate_ctoz00,
		BgL_bgl_za762setza7d2ctoza712za71775z00,
		BGl_z62setzd2ctoz12zd2kwote1262z70zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1746z00zzintegrate_ctoz00,
		BgL_bgl_za762setza7d2ctoza712za71776z00,
		BGl_z62setzd2ctoz12zd2var1264z70zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1747z00zzintegrate_ctoz00,
		BgL_bgl_za762setza7d2ctoza712za71777z00,
		BGl_z62setzd2ctoz12zd2closure1266z70zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1748z00zzintegrate_ctoz00,
		BgL_bgl_za762setza7d2ctoza712za71778z00,
		BGl_z62setzd2ctoz12zd2sequence1268z70zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1749z00zzintegrate_ctoz00,
		BgL_bgl_za762setza7d2ctoza712za71779z00,
		BGl_z62setzd2ctoz12zd2sync1270z70zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1750z00zzintegrate_ctoz00,
		BgL_bgl_za762setza7d2ctoza712za71780z00,
		BGl_z62setzd2ctoz12zd2app1273z70zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1751z00zzintegrate_ctoz00,
		BgL_bgl_za762setza7d2ctoza712za71781z00,
		BGl_z62setzd2ctoz12zd2appzd2ly1275za2zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1752z00zzintegrate_ctoz00,
		BgL_bgl_za762setza7d2ctoza712za71782z00,
		BGl_z62setzd2ctoz12zd2funcall1277z70zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1753z00zzintegrate_ctoz00,
		BgL_bgl_za762setza7d2ctoza712za71783z00,
		BGl_z62setzd2ctoz12zd2extern1279z70zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1754z00zzintegrate_ctoz00,
		BgL_bgl_za762setza7d2ctoza712za71784z00,
		BGl_z62setzd2ctoz12zd2cast1281z70zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1755z00zzintegrate_ctoz00,
		BgL_bgl_za762setza7d2ctoza712za71785z00,
		BGl_z62setzd2ctoz12zd2setq1283z70zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1756z00zzintegrate_ctoz00,
		BgL_bgl_za762setza7d2ctoza712za71786z00,
		BGl_z62setzd2ctoz12zd2conditional1285z70zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1757z00zzintegrate_ctoz00,
		BgL_bgl_za762setza7d2ctoza712za71787z00,
		BGl_z62setzd2ctoz12zd2fail1287z70zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1758z00zzintegrate_ctoz00,
		BgL_bgl_za762setza7d2ctoza712za71788z00,
		BGl_z62setzd2ctoz12zd2switch1289z70zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1759z00zzintegrate_ctoz00,
		BgL_bgl_za762setza7d2ctoza712za71789z00,
		BGl_z62setzd2ctoz12zd2letzd2fun1291za2zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1760z00zzintegrate_ctoz00,
		BgL_bgl_za762setza7d2ctoza712za71790z00,
		BGl_z62setzd2ctoz12zd2letzd2var1293za2zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1761z00zzintegrate_ctoz00,
		BgL_bgl_za762setza7d2ctoza712za71791z00,
		BGl_z62setzd2ctoz12zd2setzd2exzd2it1295z70zzintegrate_ctoz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1762z00zzintegrate_ctoz00,
		BgL_bgl_za762setza7d2ctoza712za71792z00,
		BGl_z62setzd2ctoz12zd2jumpzd2exzd2it1297z70zzintegrate_ctoz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1763z00zzintegrate_ctoz00,
		BgL_bgl_za762setza7d2ctoza712za71793z00,
		BGl_z62setzd2ctoz12zd2makezd2box1299za2zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1764z00zzintegrate_ctoz00,
		BgL_bgl_za762setza7d2ctoza712za71794z00,
		BGl_z62setzd2ctoz12zd2boxzd2setz121301zb0zzintegrate_ctoz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1765z00zzintegrate_ctoz00,
		BgL_bgl_za762setza7d2ctoza712za71795z00,
		BGl_z62setzd2ctoz12zd2boxzd2ref1303za2zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
		BgL_bgl_za762setza7d2ctoza712za71796z00,
		BGl_z62setzd2ctoz12za2zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1741z00zzintegrate_ctoz00,
		BgL_bgl_string1741za700za7za7i1797za7, "set-cto!1257", 12);
	      DEFINE_STRING(BGl_string1742z00zzintegrate_ctoz00,
		BgL_bgl_string1742za700za7za7i1798za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1744z00zzintegrate_ctoz00,
		BgL_bgl_string1744za700za7za7i1799za7, "set-cto!", 8);
	      DEFINE_STRING(BGl_string1766z00zzintegrate_ctoz00,
		BgL_bgl_string1766za700za7za7i1800za7, "Unexpected closure", 18);
	      DEFINE_STRING(BGl_string1767z00zzintegrate_ctoz00,
		BgL_bgl_string1767za700za7za7i1801za7, "integrate_cto", 13);
	      DEFINE_STRING(BGl_string1768z00zzintegrate_ctoz00,
		BgL_bgl_string1768za700za7za7i1802za7, "set-cto!1257 ", 13);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzintegrate_ctoz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzintegrate_ctoz00(long
		BgL_checksumz00_2297, char *BgL_fromz00_2298)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_ctoz00))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_ctoz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzintegrate_ctoz00();
					BGl_libraryzd2moduleszd2initz00zzintegrate_ctoz00();
					BGl_cnstzd2initzd2zzintegrate_ctoz00();
					BGl_importedzd2moduleszd2initz00zzintegrate_ctoz00();
					BGl_genericzd2initzd2zzintegrate_ctoz00();
					BGl_methodzd2initzd2zzintegrate_ctoz00();
					return BGl_toplevelzd2initzd2zzintegrate_ctoz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_ctoz00()
	{
		{	/* Integrate/cto.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"integrate_cto");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"integrate_cto");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "integrate_cto");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"integrate_cto");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"integrate_cto");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"integrate_cto");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"integrate_cto");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "integrate_cto");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"integrate_cto");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzintegrate_ctoz00()
	{
		{	/* Integrate/cto.scm 15 */
			{	/* Integrate/cto.scm 15 */
				obj_t BgL_cportz00_2189;

				{	/* Integrate/cto.scm 15 */
					obj_t BgL_stringz00_2197;

					BgL_stringz00_2197 = BGl_string1768z00zzintegrate_ctoz00;
					{	/* Integrate/cto.scm 15 */
						obj_t BgL_startz00_2198;

						BgL_startz00_2198 = BINT(((long) 0));
						{	/* Integrate/cto.scm 15 */
							obj_t BgL_endz00_2199;

							BgL_endz00_2199 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2197)));
							{	/* Integrate/cto.scm 15 */

								BgL_cportz00_2189 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2197, BgL_startz00_2198, BgL_endz00_2199);
				}}}}
				{
					long BgL_iz00_2190;

					BgL_iz00_2190 = ((long) 0);
				BgL_loopz00_2191:
					if ((BgL_iz00_2190 == ((long) -1)))
						{	/* Integrate/cto.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Integrate/cto.scm 15 */
							{	/* Integrate/cto.scm 15 */
								obj_t BgL_arg1771z00_2193;

								{	/* Integrate/cto.scm 15 */

									{	/* Integrate/cto.scm 15 */
										obj_t BgL_locationz00_2195;

										BgL_locationz00_2195 = BBOOL(((bool_t) 0));
										{	/* Integrate/cto.scm 15 */

											BgL_arg1771z00_2193 =
												BGl_readz00zz__readerz00(BgL_cportz00_2189,
												BgL_locationz00_2195);
										}
									}
								}
								{	/* Integrate/cto.scm 15 */
									int BgL_tmpz00_2327;

									BgL_tmpz00_2327 = (int) (BgL_iz00_2190);
									CNST_TABLE_SET(BgL_tmpz00_2327, BgL_arg1771z00_2193);
							}}
							{	/* Integrate/cto.scm 15 */
								int BgL_auxz00_2196;

								BgL_auxz00_2196 = (int) ((BgL_iz00_2190 - ((long) 1)));
								{
									long BgL_iz00_2332;

									BgL_iz00_2332 = (long) (BgL_auxz00_2196);
									BgL_iz00_2190 = BgL_iz00_2332;
									goto BgL_loopz00_2191;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzintegrate_ctoz00()
	{
		{	/* Integrate/cto.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzintegrate_ctoz00()
	{
		{	/* Integrate/cto.scm 15 */
			return BUNSPEC;
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzintegrate_ctoz00()
	{
		{	/* Integrate/cto.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_ctoz00()
	{
		{	/* Integrate/cto.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_proc1740z00zzintegrate_ctoz00, BGl_nodez00zzast_nodez00,
				BGl_string1741z00zzintegrate_ctoz00);
		}

	}



/* &set-cto!1257 */
	obj_t BGl_z62setzd2ctoz121257za2zzintegrate_ctoz00(obj_t BgL_envz00_2095,
		obj_t BgL_nodez00_2096, obj_t BgL_localz00_2097)
	{
		{	/* Integrate/cto.scm 28 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
				BGl_string1742z00zzintegrate_ctoz00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2096)));
		}

	}



/* set-cto! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_nodez00_bglt
		BgL_nodez00_3, BgL_localz00_bglt BgL_localz00_4)
	{
		{	/* Integrate/cto.scm 28 */
			{	/* Integrate/cto.scm 28 */
				obj_t BgL_method1258z00_1566;

				{	/* Integrate/cto.scm 28 */
					obj_t BgL_res1730z00_2024;

					{	/* Integrate/cto.scm 28 */
						long BgL_objzd2classzd2numz00_1989;

						{	/* Integrate/cto.scm 28 */
							long BgL_res1720z00_1992;

							BgL_res1720z00_1992 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_3));
							BgL_objzd2classzd2numz00_1989 = BgL_res1720z00_1992;
						}
						{	/* Integrate/cto.scm 28 */
							obj_t BgL_arg1813z00_1990;

							BgL_arg1813z00_1990 =
								PROCEDURE_REF(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
								(int) (((long) 1)));
							{	/* Integrate/cto.scm 28 */
								int BgL_offsetz00_1994;

								BgL_offsetz00_1994 = (int) (BgL_objzd2classzd2numz00_1989);
								{	/* Integrate/cto.scm 28 */
									long BgL_offsetz00_1995;

									BgL_offsetz00_1995 =
										((long) (BgL_offsetz00_1994) - OBJECT_TYPE);
									{	/* Integrate/cto.scm 28 */
										long BgL_modz00_1996;

										BgL_modz00_1996 =
											(BgL_offsetz00_1995 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Integrate/cto.scm 28 */
											long BgL_restz00_1998;

											BgL_restz00_1998 =
												(BgL_offsetz00_1995 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Integrate/cto.scm 28 */

												{	/* Integrate/cto.scm 28 */
													obj_t BgL_bucketz00_2000;

													BgL_bucketz00_2000 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1990), BgL_modz00_1996);
													BgL_res1730z00_2024 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2000), BgL_restz00_1998);
					}}}}}}}}
					BgL_method1258z00_1566 = BgL_res1730z00_2024;
				}
				return
					PROCEDURE_ENTRY(BgL_method1258z00_1566) (BgL_method1258z00_1566,
					((obj_t) BgL_nodez00_3), ((obj_t) BgL_localz00_4), BEOA);
			}
		}

	}



/* &set-cto! */
	obj_t BGl_z62setzd2ctoz12za2zzintegrate_ctoz00(obj_t BgL_envz00_2098,
		obj_t BgL_nodez00_2099, obj_t BgL_localz00_2100)
	{
		{	/* Integrate/cto.scm 28 */
			return
				BGl_setzd2ctoz12zc0zzintegrate_ctoz00(
				((BgL_nodez00_bglt) BgL_nodez00_2099),
				((BgL_localz00_bglt) BgL_localz00_2100));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_ctoz00()
	{
		{	/* Integrate/cto.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00, BGl_atomz00zzast_nodez00,
				BGl_proc1743z00zzintegrate_ctoz00, BGl_string1744z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00, BGl_kwotez00zzast_nodez00,
				BGl_proc1745z00zzintegrate_ctoz00, BGl_string1744z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00, BGl_varz00zzast_nodez00,
				BGl_proc1746z00zzintegrate_ctoz00, BGl_string1744z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_closurez00zzast_nodez00, BGl_proc1747z00zzintegrate_ctoz00,
				BGl_string1744z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_sequencez00zzast_nodez00, BGl_proc1748z00zzintegrate_ctoz00,
				BGl_string1744z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00, BGl_syncz00zzast_nodez00,
				BGl_proc1749z00zzintegrate_ctoz00, BGl_string1744z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00, BGl_appz00zzast_nodez00,
				BGl_proc1750z00zzintegrate_ctoz00, BGl_string1744z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1751z00zzintegrate_ctoz00,
				BGl_string1744z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_funcallz00zzast_nodez00, BGl_proc1752z00zzintegrate_ctoz00,
				BGl_string1744z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_externz00zzast_nodez00, BGl_proc1753z00zzintegrate_ctoz00,
				BGl_string1744z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00, BGl_castz00zzast_nodez00,
				BGl_proc1754z00zzintegrate_ctoz00, BGl_string1744z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00, BGl_setqz00zzast_nodez00,
				BGl_proc1755z00zzintegrate_ctoz00, BGl_string1744z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1756z00zzintegrate_ctoz00,
				BGl_string1744z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00, BGl_failz00zzast_nodez00,
				BGl_proc1757z00zzintegrate_ctoz00, BGl_string1744z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_switchz00zzast_nodez00, BGl_proc1758z00zzintegrate_ctoz00,
				BGl_string1744z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1759z00zzintegrate_ctoz00,
				BGl_string1744z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1760z00zzintegrate_ctoz00,
				BGl_string1744z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc1761z00zzintegrate_ctoz00,
				BGl_string1744z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc1762z00zzintegrate_ctoz00,
				BGl_string1744z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1763z00zzintegrate_ctoz00,
				BGl_string1744z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1764z00zzintegrate_ctoz00,
				BGl_string1744z00zzintegrate_ctoz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1765z00zzintegrate_ctoz00,
				BGl_string1744z00zzintegrate_ctoz00);
		}

	}



/* &set-cto!-box-ref1303 */
	obj_t BGl_z62setzd2ctoz12zd2boxzd2ref1303za2zzintegrate_ctoz00(obj_t
		BgL_envz00_2123, obj_t BgL_nodez00_2124, obj_t BgL_localz00_2125)
	{
		{	/* Integrate/cto.scm 232 */
			{	/* Integrate/cto.scm 234 */
				BgL_varz00_bglt BgL_arg1497z00_2205;

				BgL_arg1497z00_2205 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_nodez00_2124)))->BgL_varz00);
				return
					BGl_setzd2ctoz12zc0zzintegrate_ctoz00(
					((BgL_nodez00_bglt) BgL_arg1497z00_2205),
					((BgL_localz00_bglt) BgL_localz00_2125));
			}
		}

	}



/* &set-cto!-box-set!1301 */
	obj_t BGl_z62setzd2ctoz12zd2boxzd2setz121301zb0zzintegrate_ctoz00(obj_t
		BgL_envz00_2126, obj_t BgL_nodez00_2127, obj_t BgL_localz00_2128)
	{
		{	/* Integrate/cto.scm 224 */
			{	/* Integrate/cto.scm 226 */
				BgL_varz00_bglt BgL_arg1493z00_2207;

				BgL_arg1493z00_2207 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2127)))->BgL_varz00);
				BGl_setzd2ctoz12zc0zzintegrate_ctoz00(
					((BgL_nodez00_bglt) BgL_arg1493z00_2207),
					((BgL_localz00_bglt) BgL_localz00_2128));
			}
			{	/* Integrate/cto.scm 227 */
				BgL_nodez00_bglt BgL_arg1495z00_2208;

				BgL_arg1495z00_2208 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2127)))->BgL_valuez00);
				return
					BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_arg1495z00_2208,
					((BgL_localz00_bglt) BgL_localz00_2128));
			}
		}

	}



/* &set-cto!-make-box1299 */
	obj_t BGl_z62setzd2ctoz12zd2makezd2box1299za2zzintegrate_ctoz00(obj_t
		BgL_envz00_2129, obj_t BgL_nodez00_2130, obj_t BgL_localz00_2131)
	{
		{	/* Integrate/cto.scm 217 */
			{	/* Integrate/cto.scm 219 */
				BgL_nodez00_bglt BgL_arg1489z00_2210;

				BgL_arg1489z00_2210 =
					(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_2130)))->BgL_valuez00);
				return
					BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_arg1489z00_2210,
					((BgL_localz00_bglt) BgL_localz00_2131));
			}
		}

	}



/* &set-cto!-jump-ex-it1297 */
	obj_t BGl_z62setzd2ctoz12zd2jumpzd2exzd2it1297z70zzintegrate_ctoz00(obj_t
		BgL_envz00_2132, obj_t BgL_nodez00_2133, obj_t BgL_localz00_2134)
	{
		{	/* Integrate/cto.scm 209 */
			{	/* Integrate/cto.scm 211 */
				BgL_nodez00_bglt BgL_arg1476z00_2212;

				BgL_arg1476z00_2212 =
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2133)))->BgL_exitz00);
				BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_arg1476z00_2212,
					((BgL_localz00_bglt) BgL_localz00_2134));
			}
			{	/* Integrate/cto.scm 212 */
				BgL_nodez00_bglt BgL_arg1477z00_2213;

				BgL_arg1477z00_2213 =
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2133)))->BgL_valuez00);
				return
					BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_arg1477z00_2213,
					((BgL_localz00_bglt) BgL_localz00_2134));
			}
		}

	}



/* &set-cto!-set-ex-it1295 */
	obj_t BGl_z62setzd2ctoz12zd2setzd2exzd2it1295z70zzintegrate_ctoz00(obj_t
		BgL_envz00_2135, obj_t BgL_nodez00_2136, obj_t BgL_localz00_2137)
	{
		{	/* Integrate/cto.scm 202 */
			{	/* Integrate/cto.scm 204 */
				BgL_nodez00_bglt BgL_arg1474z00_2215;

				BgL_arg1474z00_2215 =
					(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2136)))->BgL_bodyz00);
				return
					BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_arg1474z00_2215,
					((BgL_localz00_bglt) BgL_localz00_2137));
			}
		}

	}



/* &set-cto!-let-var1293 */
	obj_t BGl_z62setzd2ctoz12zd2letzd2var1293za2zzintegrate_ctoz00(obj_t
		BgL_envz00_2138, obj_t BgL_nodez00_2139, obj_t BgL_localz00_2140)
	{
		{	/* Integrate/cto.scm 190 */
			{	/* Integrate/cto.scm 192 */
				obj_t BgL_g1122z00_2217;

				BgL_g1122z00_2217 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2139)))->BgL_bindingsz00);
				{
					obj_t BgL_bindingsz00_2219;

					BgL_bindingsz00_2219 = BgL_g1122z00_2217;
				BgL_liipz00_2218:
					if (NULLP(BgL_bindingsz00_2219))
						{	/* Integrate/cto.scm 194 */
							BgL_nodez00_bglt BgL_arg1461z00_2220;

							BgL_arg1461z00_2220 =
								(((BgL_letzd2varzd2_bglt) COBJECT(
										((BgL_letzd2varzd2_bglt) BgL_nodez00_2139)))->BgL_bodyz00);
							return
								BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_arg1461z00_2220,
								((BgL_localz00_bglt) BgL_localz00_2140));
						}
					else
						{	/* Integrate/cto.scm 193 */
							{	/* Integrate/cto.scm 196 */
								obj_t BgL_arg1462z00_2221;

								{	/* Integrate/cto.scm 196 */
									obj_t BgL_pairz00_2222;

									BgL_pairz00_2222 = CAR(((obj_t) BgL_bindingsz00_2219));
									BgL_arg1462z00_2221 = CDR(BgL_pairz00_2222);
								}
								BGl_setzd2ctoz12zc0zzintegrate_ctoz00(
									((BgL_nodez00_bglt) BgL_arg1462z00_2221),
									((BgL_localz00_bglt) BgL_localz00_2140));
							}
							{	/* Integrate/cto.scm 197 */
								obj_t BgL_arg1465z00_2223;

								BgL_arg1465z00_2223 = CDR(((obj_t) BgL_bindingsz00_2219));
								{
									obj_t BgL_bindingsz00_2443;

									BgL_bindingsz00_2443 = BgL_arg1465z00_2223;
									BgL_bindingsz00_2219 = BgL_bindingsz00_2443;
									goto BgL_liipz00_2218;
								}
							}
						}
				}
			}
		}

	}



/* &set-cto!-let-fun1291 */
	obj_t BGl_z62setzd2ctoz12zd2letzd2fun1291za2zzintegrate_ctoz00(obj_t
		BgL_envz00_2141, obj_t BgL_nodez00_2142, obj_t BgL_localz00_2143)
	{
		{	/* Integrate/cto.scm 175 */
			{	/* Integrate/cto.scm 177 */
				obj_t BgL_g1120z00_2225;

				BgL_g1120z00_2225 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2142)))->BgL_localsz00);
				{
					obj_t BgL_localsz00_2227;

					BgL_localsz00_2227 = BgL_g1120z00_2225;
				BgL_liipz00_2226:
					if (NULLP(BgL_localsz00_2227))
						{	/* Integrate/cto.scm 179 */
							BgL_nodez00_bglt BgL_arg1441z00_2228;

							BgL_arg1441z00_2228 =
								(((BgL_letzd2funzd2_bglt) COBJECT(
										((BgL_letzd2funzd2_bglt) BgL_nodez00_2142)))->BgL_bodyz00);
							return
								BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_arg1441z00_2228,
								((BgL_localz00_bglt) BgL_localz00_2143));
						}
					else
						{	/* Integrate/cto.scm 180 */
							obj_t BgL_llocalz00_2229;

							BgL_llocalz00_2229 = CAR(((obj_t) BgL_localsz00_2227));
							{	/* Integrate/cto.scm 180 */
								BgL_valuez00_bglt BgL_funz00_2230;

								BgL_funz00_2230 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_localz00_bglt) BgL_llocalz00_2229))))->
									BgL_valuez00);
								{	/* Integrate/cto.scm 182 */

									{	/* Integrate/cto.scm 184 */
										obj_t BgL_arg1442z00_2231;

										BgL_arg1442z00_2231 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_funz00_2230)))->BgL_bodyz00);
										BGl_setzd2ctoz12zc0zzintegrate_ctoz00(
											((BgL_nodez00_bglt) BgL_arg1442z00_2231),
											((BgL_localz00_bglt) BgL_localz00_2143));
									}
									{	/* Integrate/cto.scm 185 */
										obj_t BgL_arg1448z00_2232;

										BgL_arg1448z00_2232 = CDR(((obj_t) BgL_localsz00_2227));
										{
											obj_t BgL_localsz00_2464;

											BgL_localsz00_2464 = BgL_arg1448z00_2232;
											BgL_localsz00_2227 = BgL_localsz00_2464;
											goto BgL_liipz00_2226;
										}
									}
								}
							}
						}
				}
			}
		}

	}



/* &set-cto!-switch1289 */
	obj_t BGl_z62setzd2ctoz12zd2switch1289z70zzintegrate_ctoz00(obj_t
		BgL_envz00_2144, obj_t BgL_nodez00_2145, obj_t BgL_localz00_2146)
	{
		{	/* Integrate/cto.scm 163 */
			{	/* Integrate/cto.scm 165 */
				obj_t BgL_g1118z00_2234;

				BgL_g1118z00_2234 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2145)))->BgL_clausesz00);
				{
					obj_t BgL_clausesz00_2236;

					BgL_clausesz00_2236 = BgL_g1118z00_2234;
				BgL_liipz00_2235:
					if (NULLP(BgL_clausesz00_2236))
						{	/* Integrate/cto.scm 167 */
							BgL_nodez00_bglt BgL_arg1417z00_2237;

							BgL_arg1417z00_2237 =
								(((BgL_switchz00_bglt) COBJECT(
										((BgL_switchz00_bglt) BgL_nodez00_2145)))->BgL_testz00);
							return
								BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_arg1417z00_2237,
								((BgL_localz00_bglt) BgL_localz00_2146));
						}
					else
						{	/* Integrate/cto.scm 166 */
							{	/* Integrate/cto.scm 169 */
								obj_t BgL_arg1418z00_2238;

								{	/* Integrate/cto.scm 169 */
									obj_t BgL_pairz00_2239;

									BgL_pairz00_2239 = CAR(((obj_t) BgL_clausesz00_2236));
									BgL_arg1418z00_2238 = CDR(BgL_pairz00_2239);
								}
								BGl_setzd2ctoz12zc0zzintegrate_ctoz00(
									((BgL_nodez00_bglt) BgL_arg1418z00_2238),
									((BgL_localz00_bglt) BgL_localz00_2146));
							}
							{	/* Integrate/cto.scm 170 */
								obj_t BgL_arg1422z00_2240;

								BgL_arg1422z00_2240 = CDR(((obj_t) BgL_clausesz00_2236));
								{
									obj_t BgL_clausesz00_2481;

									BgL_clausesz00_2481 = BgL_arg1422z00_2240;
									BgL_clausesz00_2236 = BgL_clausesz00_2481;
									goto BgL_liipz00_2235;
								}
							}
						}
				}
			}
		}

	}



/* &set-cto!-fail1287 */
	obj_t BGl_z62setzd2ctoz12zd2fail1287z70zzintegrate_ctoz00(obj_t
		BgL_envz00_2147, obj_t BgL_nodez00_2148, obj_t BgL_localz00_2149)
	{
		{	/* Integrate/cto.scm 154 */
			{	/* Integrate/cto.scm 156 */
				BgL_nodez00_bglt BgL_arg1388z00_2242;

				BgL_arg1388z00_2242 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2148)))->BgL_procz00);
				BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_arg1388z00_2242,
					((BgL_localz00_bglt) BgL_localz00_2149));
			}
			{	/* Integrate/cto.scm 157 */
				BgL_nodez00_bglt BgL_arg1394z00_2243;

				BgL_arg1394z00_2243 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2148)))->BgL_msgz00);
				BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_arg1394z00_2243,
					((BgL_localz00_bglt) BgL_localz00_2149));
			}
			{	/* Integrate/cto.scm 158 */
				BgL_nodez00_bglt BgL_arg1396z00_2244;

				BgL_arg1396z00_2244 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2148)))->BgL_objz00);
				return
					BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_arg1396z00_2244,
					((BgL_localz00_bglt) BgL_localz00_2149));
			}
		}

	}



/* &set-cto!-conditional1285 */
	obj_t BGl_z62setzd2ctoz12zd2conditional1285z70zzintegrate_ctoz00(obj_t
		BgL_envz00_2150, obj_t BgL_nodez00_2151, obj_t BgL_localz00_2152)
	{
		{	/* Integrate/cto.scm 145 */
			{	/* Integrate/cto.scm 147 */
				BgL_nodez00_bglt BgL_arg1385z00_2246;

				BgL_arg1385z00_2246 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2151)))->BgL_testz00);
				BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_arg1385z00_2246,
					((BgL_localz00_bglt) BgL_localz00_2152));
			}
			{	/* Integrate/cto.scm 148 */
				BgL_nodez00_bglt BgL_arg1386z00_2247;

				BgL_arg1386z00_2247 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2151)))->BgL_truez00);
				BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_arg1386z00_2247,
					((BgL_localz00_bglt) BgL_localz00_2152));
			}
			{	/* Integrate/cto.scm 149 */
				BgL_nodez00_bglt BgL_arg1387z00_2248;

				BgL_arg1387z00_2248 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2151)))->BgL_falsez00);
				return
					BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_arg1387z00_2248,
					((BgL_localz00_bglt) BgL_localz00_2152));
			}
		}

	}



/* &set-cto!-setq1283 */
	obj_t BGl_z62setzd2ctoz12zd2setq1283z70zzintegrate_ctoz00(obj_t
		BgL_envz00_2153, obj_t BgL_nodez00_2154, obj_t BgL_localz00_2155)
	{
		{	/* Integrate/cto.scm 137 */
			{	/* Integrate/cto.scm 139 */
				BgL_varz00_bglt BgL_arg1383z00_2250;

				BgL_arg1383z00_2250 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2154)))->BgL_varz00);
				BGl_setzd2ctoz12zc0zzintegrate_ctoz00(
					((BgL_nodez00_bglt) BgL_arg1383z00_2250),
					((BgL_localz00_bglt) BgL_localz00_2155));
			}
			{	/* Integrate/cto.scm 140 */
				BgL_nodez00_bglt BgL_arg1384z00_2251;

				BgL_arg1384z00_2251 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2154)))->BgL_valuez00);
				return
					BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_arg1384z00_2251,
					((BgL_localz00_bglt) BgL_localz00_2155));
			}
		}

	}



/* &set-cto!-cast1281 */
	obj_t BGl_z62setzd2ctoz12zd2cast1281z70zzintegrate_ctoz00(obj_t
		BgL_envz00_2156, obj_t BgL_nodez00_2157, obj_t BgL_localz00_2158)
	{
		{	/* Integrate/cto.scm 130 */
			{	/* Integrate/cto.scm 132 */
				BgL_nodez00_bglt BgL_arg1382z00_2253;

				BgL_arg1382z00_2253 =
					(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2157)))->BgL_argz00);
				return
					BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_arg1382z00_2253,
					((BgL_localz00_bglt) BgL_localz00_2158));
			}
		}

	}



/* &set-cto!-extern1279 */
	obj_t BGl_z62setzd2ctoz12zd2extern1279z70zzintegrate_ctoz00(obj_t
		BgL_envz00_2159, obj_t BgL_nodez00_2160, obj_t BgL_localz00_2161)
	{
		{	/* Integrate/cto.scm 123 */
			{	/* Integrate/cto.scm 125 */
				obj_t BgL_g1256z00_2255;

				BgL_g1256z00_2255 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_2160)))->BgL_exprza2za2);
				{
					obj_t BgL_l1254z00_2257;

					{	/* Integrate/cto.scm 125 */
						bool_t BgL_tmpz00_2521;

						BgL_l1254z00_2257 = BgL_g1256z00_2255;
					BgL_zc3z04anonymousza31371ze3z87_2256:
						if (PAIRP(BgL_l1254z00_2257))
							{	/* Integrate/cto.scm 125 */
								{	/* Integrate/cto.scm 125 */
									obj_t BgL_nodez00_2258;

									BgL_nodez00_2258 = CAR(BgL_l1254z00_2257);
									BGl_setzd2ctoz12zc0zzintegrate_ctoz00(
										((BgL_nodez00_bglt) BgL_nodez00_2258),
										((BgL_localz00_bglt) BgL_localz00_2161));
								}
								{
									obj_t BgL_l1254z00_2528;

									BgL_l1254z00_2528 = CDR(BgL_l1254z00_2257);
									BgL_l1254z00_2257 = BgL_l1254z00_2528;
									goto BgL_zc3z04anonymousza31371ze3z87_2256;
								}
							}
						else
							{	/* Integrate/cto.scm 125 */
								BgL_tmpz00_2521 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_2521);
					}
				}
			}
		}

	}



/* &set-cto!-funcall1277 */
	obj_t BGl_z62setzd2ctoz12zd2funcall1277z70zzintegrate_ctoz00(obj_t
		BgL_envz00_2162, obj_t BgL_nodez00_2163, obj_t BgL_localz00_2164)
	{
		{	/* Integrate/cto.scm 111 */
			{
				obj_t BgL_astsz00_2261;

				BgL_astsz00_2261 =
					(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_2163)))->BgL_argsz00);
			BgL_liipz00_2260:
				if (NULLP(BgL_astsz00_2261))
					{	/* Integrate/cto.scm 115 */
						BgL_nodez00_bglt BgL_arg1364z00_2262;

						BgL_arg1364z00_2262 =
							(((BgL_funcallz00_bglt) COBJECT(
									((BgL_funcallz00_bglt) BgL_nodez00_2163)))->BgL_funz00);
						return
							BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_arg1364z00_2262,
							((BgL_localz00_bglt) BgL_localz00_2164));
					}
				else
					{	/* Integrate/cto.scm 114 */
						{	/* Integrate/cto.scm 117 */
							obj_t BgL_arg1367z00_2263;

							BgL_arg1367z00_2263 = CAR(((obj_t) BgL_astsz00_2261));
							BGl_setzd2ctoz12zc0zzintegrate_ctoz00(
								((BgL_nodez00_bglt) BgL_arg1367z00_2263),
								((BgL_localz00_bglt) BgL_localz00_2164));
						}
						{	/* Integrate/cto.scm 118 */
							obj_t BgL_arg1370z00_2264;

							BgL_arg1370z00_2264 = CDR(((obj_t) BgL_astsz00_2261));
							{
								obj_t BgL_astsz00_2544;

								BgL_astsz00_2544 = BgL_arg1370z00_2264;
								BgL_astsz00_2261 = BgL_astsz00_2544;
								goto BgL_liipz00_2260;
							}
						}
					}
			}
		}

	}



/* &set-cto!-app-ly1275 */
	obj_t BGl_z62setzd2ctoz12zd2appzd2ly1275za2zzintegrate_ctoz00(obj_t
		BgL_envz00_2165, obj_t BgL_nodez00_2166, obj_t BgL_localz00_2167)
	{
		{	/* Integrate/cto.scm 103 */
			{	/* Integrate/cto.scm 105 */
				BgL_nodez00_bglt BgL_arg1357z00_2266;

				BgL_arg1357z00_2266 =
					(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_2166)))->BgL_funz00);
				BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_arg1357z00_2266,
					((BgL_localz00_bglt) BgL_localz00_2167));
			}
			{	/* Integrate/cto.scm 106 */
				BgL_nodez00_bglt BgL_arg1360z00_2267;

				BgL_arg1360z00_2267 =
					(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_2166)))->BgL_argz00);
				return
					BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_arg1360z00_2267,
					((BgL_localz00_bglt) BgL_localz00_2167));
			}
		}

	}



/* &set-cto!-app1273 */
	obj_t BGl_z62setzd2ctoz12zd2app1273z70zzintegrate_ctoz00(obj_t
		BgL_envz00_2168, obj_t BgL_nodez00_2169, obj_t BgL_localz00_2170)
	{
		{	/* Integrate/cto.scm 73 */
			{	/* Integrate/cto.scm 77 */
				BgL_variablez00_bglt BgL_funz00_2269;

				BgL_funz00_2269 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt) BgL_nodez00_2169)))->BgL_funz00)))->
					BgL_variablez00);
				{	/* Integrate/cto.scm 78 */
					bool_t BgL_test1813z00_2558;

					{	/* Integrate/cto.scm 78 */
						bool_t BgL_test1814z00_2559;

						{	/* Integrate/cto.scm 78 */
							bool_t BgL_res1732z00_2270;

							BgL_res1732z00_2270 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_funz00_2269), BGl_localz00zzast_varz00);
							BgL_test1814z00_2559 = BgL_res1732z00_2270;
						}
						if (BgL_test1814z00_2559)
							{	/* Integrate/cto.scm 78 */
								if ((BgL_localz00_2170 == ((obj_t) BgL_funz00_2269)))
									{	/* Integrate/cto.scm 78 */
										BgL_test1813z00_2558 = ((bool_t) 0);
									}
								else
									{	/* Integrate/cto.scm 78 */
										BgL_test1813z00_2558 = ((bool_t) 1);
									}
							}
						else
							{	/* Integrate/cto.scm 78 */
								BgL_test1813z00_2558 = ((bool_t) 0);
							}
					}
					if (BgL_test1813z00_2558)
						{	/* Integrate/cto.scm 78 */
							BNIL;
						}
					else
						{	/* Integrate/cto.scm 78 */
							BFALSE;
						}
				}
				{	/* Integrate/cto.scm 85 */
					bool_t BgL_test1816z00_2565;

					{	/* Integrate/cto.scm 85 */
						bool_t BgL_test1817z00_2566;

						{	/* Integrate/cto.scm 85 */
							bool_t BgL_res1733z00_2271;

							BgL_res1733z00_2271 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_funz00_2269), BGl_localz00zzast_varz00);
							BgL_test1817z00_2566 = BgL_res1733z00_2271;
						}
						if (BgL_test1817z00_2566)
							{	/* Integrate/cto.scm 86 */
								bool_t BgL_test1818z00_2569;

								{	/* Integrate/cto.scm 86 */
									BgL_sfunz00_bglt BgL_oz00_2272;

									BgL_oz00_2272 =
										((BgL_sfunz00_bglt)
										(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt) BgL_funz00_2269))))->
											BgL_valuez00));
									{
										BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2574;

										{
											obj_t BgL_auxz00_2575;

											{	/* Integrate/cto.scm 86 */
												BgL_objectz00_bglt BgL_tmpz00_2576;

												BgL_tmpz00_2576 = ((BgL_objectz00_bglt) BgL_oz00_2272);
												BgL_auxz00_2575 = BGL_OBJECT_WIDENING(BgL_tmpz00_2576);
											}
											BgL_auxz00_2574 =
												((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_2575);
										}
										BgL_test1818z00_2569 =
											(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2574))->
											BgL_gzf3zf3);
									}
								}
								if (BgL_test1818z00_2569)
									{	/* Integrate/cto.scm 86 */
										if ((BgL_localz00_2170 == ((obj_t) BgL_funz00_2269)))
											{	/* Integrate/cto.scm 87 */
												BgL_test1816z00_2565 = ((bool_t) 0);
											}
										else
											{	/* Integrate/cto.scm 88 */
												bool_t BgL_test1823z00_2584;

												{	/* Integrate/cto.scm 88 */
													obj_t BgL_arg1339z00_2273;

													{	/* Integrate/cto.scm 88 */
														BgL_sfunz00_bglt BgL_oz00_2274;

														BgL_oz00_2274 =
															((BgL_sfunz00_bglt)
															(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_localz00_bglt)
																				BgL_localz00_2170))))->BgL_valuez00));
														{
															BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2589;

															{
																obj_t BgL_auxz00_2590;

																{	/* Integrate/cto.scm 88 */
																	BgL_objectz00_bglt BgL_tmpz00_2591;

																	BgL_tmpz00_2591 =
																		((BgL_objectz00_bglt) BgL_oz00_2274);
																	BgL_auxz00_2590 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_2591);
																}
																BgL_auxz00_2589 =
																	((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_2590);
															}
															BgL_arg1339z00_2273 =
																(((BgL_sfunzf2iinfozf2_bglt)
																	COBJECT(BgL_auxz00_2589))->BgL_ctoz00);
														}
													}
													BgL_test1823z00_2584 =
														CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
															((obj_t) BgL_funz00_2269), BgL_arg1339z00_2273));
												}
												if (BgL_test1823z00_2584)
													{	/* Integrate/cto.scm 88 */
														BgL_test1816z00_2565 = ((bool_t) 0);
													}
												else
													{	/* Integrate/cto.scm 88 */
														BgL_test1816z00_2565 = ((bool_t) 1);
													}
											}
									}
								else
									{	/* Integrate/cto.scm 86 */
										BgL_test1816z00_2565 = ((bool_t) 0);
									}
							}
						else
							{	/* Integrate/cto.scm 85 */
								BgL_test1816z00_2565 = ((bool_t) 0);
							}
					}
					if (BgL_test1816z00_2565)
						{	/* Integrate/cto.scm 89 */
							BgL_valuez00_bglt BgL_arg1334z00_2275;
							obj_t BgL_arg1335z00_2276;

							BgL_arg1334z00_2275 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt)
											((BgL_localz00_bglt) BgL_localz00_2170))))->BgL_valuez00);
							{	/* Integrate/cto.scm 92 */
								obj_t BgL_arg1337z00_2277;

								{	/* Integrate/cto.scm 91 */
									BgL_sfunz00_bglt BgL_oz00_2278;

									BgL_oz00_2278 =
										((BgL_sfunz00_bglt)
										(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt) BgL_localz00_2170))))->
											BgL_valuez00));
									{
										BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2606;

										{
											obj_t BgL_auxz00_2607;

											{	/* Integrate/cto.scm 91 */
												BgL_objectz00_bglt BgL_tmpz00_2608;

												BgL_tmpz00_2608 = ((BgL_objectz00_bglt) BgL_oz00_2278);
												BgL_auxz00_2607 = BGL_OBJECT_WIDENING(BgL_tmpz00_2608);
											}
											BgL_auxz00_2606 =
												((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_2607);
										}
										BgL_arg1337z00_2277 =
											(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2606))->
											BgL_ctoz00);
									}
								}
								BgL_arg1335z00_2276 =
									MAKE_YOUNG_PAIR(
									((obj_t) BgL_funz00_2269), BgL_arg1337z00_2277);
							}
							{
								BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2615;

								{
									obj_t BgL_auxz00_2616;

									{	/* Integrate/cto.scm 89 */
										BgL_objectz00_bglt BgL_tmpz00_2617;

										BgL_tmpz00_2617 =
											((BgL_objectz00_bglt)
											((BgL_sfunz00_bglt) BgL_arg1334z00_2275));
										BgL_auxz00_2616 = BGL_OBJECT_WIDENING(BgL_tmpz00_2617);
									}
									BgL_auxz00_2615 =
										((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_2616);
								}
								((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2615))->
										BgL_ctoz00) = ((obj_t) BgL_arg1335z00_2276), BUNSPEC);
							}
						}
					else
						{	/* Integrate/cto.scm 85 */
							BFALSE;
						}
				}
			}
			{
				obj_t BgL_astsz00_2280;

				BgL_astsz00_2280 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_2169)))->BgL_argsz00);
			BgL_liipz00_2279:
				if (NULLP(BgL_astsz00_2280))
					{	/* Integrate/cto.scm 94 */
						return BUNSPEC;
					}
				else
					{	/* Integrate/cto.scm 94 */
						{	/* Integrate/cto.scm 97 */
							obj_t BgL_arg1351z00_2281;

							BgL_arg1351z00_2281 = CAR(((obj_t) BgL_astsz00_2280));
							BGl_setzd2ctoz12zc0zzintegrate_ctoz00(
								((BgL_nodez00_bglt) BgL_arg1351z00_2281),
								((BgL_localz00_bglt) BgL_localz00_2170));
						}
						{	/* Integrate/cto.scm 98 */
							obj_t BgL_arg1352z00_2282;

							BgL_arg1352z00_2282 = CDR(((obj_t) BgL_astsz00_2280));
							{
								obj_t BgL_astsz00_2632;

								BgL_astsz00_2632 = BgL_arg1352z00_2282;
								BgL_astsz00_2280 = BgL_astsz00_2632;
								goto BgL_liipz00_2279;
							}
						}
					}
			}
		}

	}



/* &set-cto!-sync1270 */
	obj_t BGl_z62setzd2ctoz12zd2sync1270z70zzintegrate_ctoz00(obj_t
		BgL_envz00_2171, obj_t BgL_nodez00_2172, obj_t BgL_localz00_2173)
	{
		{	/* Integrate/cto.scm 64 */
			{	/* Integrate/cto.scm 66 */
				BgL_nodez00_bglt BgL_arg1314z00_2284;

				BgL_arg1314z00_2284 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2172)))->BgL_mutexz00);
				BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_arg1314z00_2284,
					((BgL_localz00_bglt) BgL_localz00_2173));
			}
			{	/* Integrate/cto.scm 67 */
				BgL_nodez00_bglt BgL_arg1315z00_2285;

				BgL_arg1315z00_2285 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2172)))->BgL_prelockz00);
				BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_arg1315z00_2285,
					((BgL_localz00_bglt) BgL_localz00_2173));
			}
			{	/* Integrate/cto.scm 68 */
				BgL_nodez00_bglt BgL_arg1316z00_2286;

				BgL_arg1316z00_2286 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2172)))->BgL_bodyz00);
				return
					BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_arg1316z00_2286,
					((BgL_localz00_bglt) BgL_localz00_2173));
			}
		}

	}



/* &set-cto!-sequence1268 */
	obj_t BGl_z62setzd2ctoz12zd2sequence1268z70zzintegrate_ctoz00(obj_t
		BgL_envz00_2174, obj_t BgL_nodez00_2175, obj_t BgL_localz00_2176)
	{
		{	/* Integrate/cto.scm 57 */
			{	/* Integrate/cto.scm 59 */
				obj_t BgL_g1253z00_2288;

				BgL_g1253z00_2288 =
					(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2175)))->BgL_nodesz00);
				{
					obj_t BgL_l1251z00_2290;

					{	/* Integrate/cto.scm 59 */
						bool_t BgL_tmpz00_2649;

						BgL_l1251z00_2290 = BgL_g1253z00_2288;
					BgL_zc3z04anonymousza31310ze3z87_2289:
						if (PAIRP(BgL_l1251z00_2290))
							{	/* Integrate/cto.scm 59 */
								{	/* Integrate/cto.scm 59 */
									obj_t BgL_nodez00_2291;

									BgL_nodez00_2291 = CAR(BgL_l1251z00_2290);
									BGl_setzd2ctoz12zc0zzintegrate_ctoz00(
										((BgL_nodez00_bglt) BgL_nodez00_2291),
										((BgL_localz00_bglt) BgL_localz00_2176));
								}
								{
									obj_t BgL_l1251z00_2656;

									BgL_l1251z00_2656 = CDR(BgL_l1251z00_2290);
									BgL_l1251z00_2290 = BgL_l1251z00_2656;
									goto BgL_zc3z04anonymousza31310ze3z87_2289;
								}
							}
						else
							{	/* Integrate/cto.scm 59 */
								BgL_tmpz00_2649 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_2649);
					}
				}
			}
		}

	}



/* &set-cto!-closure1266 */
	obj_t BGl_z62setzd2ctoz12zd2closure1266z70zzintegrate_ctoz00(obj_t
		BgL_envz00_2177, obj_t BgL_nodez00_2178, obj_t BgL_localz00_2179)
	{
		{	/* Integrate/cto.scm 51 */
			{	/* Integrate/cto.scm 52 */
				obj_t BgL_arg1309z00_2293;

				BgL_arg1309z00_2293 =
					BGl_shapez00zztools_shapez00(
					((obj_t) ((BgL_closurez00_bglt) BgL_nodez00_2178)));
				return
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string1744z00zzintegrate_ctoz00,
					BGl_string1766z00zzintegrate_ctoz00, BgL_arg1309z00_2293);
			}
		}

	}



/* &set-cto!-var1264 */
	obj_t BGl_z62setzd2ctoz12zd2var1264z70zzintegrate_ctoz00(obj_t
		BgL_envz00_2180, obj_t BgL_nodez00_2181, obj_t BgL_localz00_2182)
	{
		{	/* Integrate/cto.scm 45 */
			return BUNSPEC;
		}

	}



/* &set-cto!-kwote1262 */
	obj_t BGl_z62setzd2ctoz12zd2kwote1262z70zzintegrate_ctoz00(obj_t
		BgL_envz00_2183, obj_t BgL_nodez00_2184, obj_t BgL_localz00_2185)
	{
		{	/* Integrate/cto.scm 39 */
			return BUNSPEC;
		}

	}



/* &set-cto!-atom1260 */
	obj_t BGl_z62setzd2ctoz12zd2atom1260z70zzintegrate_ctoz00(obj_t
		BgL_envz00_2186, obj_t BgL_nodez00_2187, obj_t BgL_localz00_2188)
	{
		{	/* Integrate/cto.scm 33 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_ctoz00()
	{
		{	/* Integrate/cto.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1767z00zzintegrate_ctoz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1767z00zzintegrate_ctoz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1767z00zzintegrate_ctoz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1767z00zzintegrate_ctoz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1767z00zzintegrate_ctoz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1767z00zzintegrate_ctoz00));
			return
				BGl_modulezd2initializa7ationz75zzintegrate_infoz00(((long) 0),
				BSTRING_TO_STRING(BGl_string1767z00zzintegrate_ctoz00));
		}

	}

#ifdef __cplusplus
}
#endif
