/*===========================================================================*/
/*   (Ast/substitute.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/substitute.scm) */
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


	extern obj_t BGl_closurez00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_dozd2substitutez12zc0zzast_substitutez00(BgL_nodez00_bglt, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2seque1260z70zzast_substitutez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2var1256z70zzast_substitutez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzast_substitutez00();
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2switc1281z70zzast_substitutez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_substitutez00();
	extern obj_t BGl_externz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2atom1254z70zzast_substitutez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_dozd2substituteza2z12z62zzast_substitutez00(obj_t, obj_t);
	static obj_t BGl_z62dozd2substitutez121251za2zzast_substitutez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2setzd2e1287za2zzast_substitutez00(obj_t, obj_t,
		obj_t);
	extern BgL_typez00_bglt
		BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2exter1270z70zzast_substitutez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_substitutez12z12zzast_substitutez00(obj_t, obj_t, BgL_nodez00_bglt,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2condi1277z70zzast_substitutez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_substitutez00();
	static BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2boxzd2r1293za2zzast_substitutez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_usezd2variablez12zc0zzast_sexpz00(BgL_variablez00_bglt,
		obj_t, obj_t);
	extern obj_t BGl_variablez00zzast_varz00;
	static BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2letzd2f1283za2zzast_substitutez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2letzd2v1285za2zzast_substitutez00(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62substitutez12z70zzast_substitutez00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2sync1262z70zzast_substitutez00(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62dozd2substitutez12za2zzast_substitutez00(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2fail1279z70zzast_substitutez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2jumpzd21289za2zzast_substitutez00(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2boxzd2s1295za2zzast_substitutez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzast_substitutez00 = BUNSPEC;
	extern obj_t BGl_funz00zzast_varz00;
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzast_substitutez00();
	static BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2makezd21291za2zzast_substitutez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzast_substitutez00();
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2app1264z70zzast_substitutez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2appzd2l1266za2zzast_substitutez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	extern bool_t BGl_globalzd2optionalzf3z21zzast_varz00(obj_t);
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	static BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2funca1268z70zzast_substitutez00(obj_t, obj_t,
		obj_t);
	extern BgL_nodez00_bglt BGl_makezd2appzd2nodez00zzast_appz00(obj_t, obj_t,
		obj_t, BgL_varz00_bglt, obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2kwote1258z70zzast_substitutez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern bool_t BGl_globalzd2keyzf3z21zzast_varz00(obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzast_substitutez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_appz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_applyz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzast_substitutez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_substitutez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzast_substitutez00();
	static BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2cast1273z70zzast_substitutez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern BgL_nodez00_bglt BGl_knownzd2appzd2lyzd2ze3nodez31zzast_applyz00(obj_t,
		obj_t, BgL_nodez00_bglt, BgL_nodez00_bglt, obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2setq1275z70zzast_substitutez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	extern bool_t
		BGl_correctzd2arityzd2appzf3zf3zzast_appz00(BgL_variablez00_bglt, obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t __cnst[7];


	   
		 
		DEFINE_STRING(BGl_string1813z00zzast_substitutez00,
		BgL_bgl_string1813za700za7za7a1847za7, "do-substitute!1251", 18);
	      DEFINE_STRING(BGl_string1814z00zzast_substitutez00,
		BgL_bgl_string1814za700za7za7a1848za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1816z00zzast_substitutez00,
		BgL_bgl_string1816za700za7za7a1849za7, "do-substitute!", 14);
	      DEFINE_STRING(BGl_string1837z00zzast_substitutez00,
		BgL_bgl_string1837za700za7za7a1850za7, "Illegal application", 19);
	      DEFINE_STRING(BGl_string1838z00zzast_substitutez00,
		BgL_bgl_string1838za700za7za7a1851za7, "wrong number of argument(s)", 27);
	      DEFINE_STRING(BGl_string1839z00zzast_substitutez00,
		BgL_bgl_string1839za700za7za7a1852za7, "duplicate", 9);
	      DEFINE_STRING(BGl_string1840z00zzast_substitutez00,
		BgL_bgl_string1840za700za7za7a1853za7, "Illegal substitution", 20);
	      DEFINE_STRING(BGl_string1841z00zzast_substitutez00,
		BgL_bgl_string1841za700za7za7a1854za7, "ast_substitute", 14);
	      DEFINE_STRING(BGl_string1842z00zzast_substitutez00,
		BgL_bgl_string1842za700za7za7a1855za7,
		"apply funcall set! app do-substitute!1251 value done ", 53);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
		BgL_bgl_za762doza7d2substitu1856z00,
		BGl_z62dozd2substitutez12za2zzast_substitutez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_substitutez12zd2envzc0zzast_substitutez00,
		BgL_bgl_za762substituteza7121857z00,
		BGl_z62substitutez12z70zzast_substitutez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1812z00zzast_substitutez00,
		BgL_bgl_za762doza7d2substitu1858z00,
		BGl_z62dozd2substitutez121251za2zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1815z00zzast_substitutez00,
		BgL_bgl_za762doza7d2substitu1859z00,
		BGl_z62dozd2substitutez12zd2atom1254z70zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1817z00zzast_substitutez00,
		BgL_bgl_za762doza7d2substitu1860z00,
		BGl_z62dozd2substitutez12zd2var1256z70zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1818z00zzast_substitutez00,
		BgL_bgl_za762doza7d2substitu1861z00,
		BGl_z62dozd2substitutez12zd2kwote1258z70zzast_substitutez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1819z00zzast_substitutez00,
		BgL_bgl_za762doza7d2substitu1862z00,
		BGl_z62dozd2substitutez12zd2seque1260z70zzast_substitutez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1820z00zzast_substitutez00,
		BgL_bgl_za762doza7d2substitu1863z00,
		BGl_z62dozd2substitutez12zd2sync1262z70zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1821z00zzast_substitutez00,
		BgL_bgl_za762doza7d2substitu1864z00,
		BGl_z62dozd2substitutez12zd2app1264z70zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1822z00zzast_substitutez00,
		BgL_bgl_za762doza7d2substitu1865z00,
		BGl_z62dozd2substitutez12zd2appzd2l1266za2zzast_substitutez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1823z00zzast_substitutez00,
		BgL_bgl_za762doza7d2substitu1866z00,
		BGl_z62dozd2substitutez12zd2funca1268z70zzast_substitutez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1824z00zzast_substitutez00,
		BgL_bgl_za762doza7d2substitu1867z00,
		BGl_z62dozd2substitutez12zd2exter1270z70zzast_substitutez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1825z00zzast_substitutez00,
		BgL_bgl_za762doza7d2substitu1868z00,
		BGl_z62dozd2substitutez12zd2cast1273z70zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1826z00zzast_substitutez00,
		BgL_bgl_za762doza7d2substitu1869z00,
		BGl_z62dozd2substitutez12zd2setq1275z70zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1827z00zzast_substitutez00,
		BgL_bgl_za762doza7d2substitu1870z00,
		BGl_z62dozd2substitutez12zd2condi1277z70zzast_substitutez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1828z00zzast_substitutez00,
		BgL_bgl_za762doza7d2substitu1871z00,
		BGl_z62dozd2substitutez12zd2fail1279z70zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1829z00zzast_substitutez00,
		BgL_bgl_za762doza7d2substitu1872z00,
		BGl_z62dozd2substitutez12zd2switc1281z70zzast_substitutez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1830z00zzast_substitutez00,
		BgL_bgl_za762doza7d2substitu1873z00,
		BGl_z62dozd2substitutez12zd2letzd2f1283za2zzast_substitutez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1831z00zzast_substitutez00,
		BgL_bgl_za762doza7d2substitu1874z00,
		BGl_z62dozd2substitutez12zd2letzd2v1285za2zzast_substitutez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1832z00zzast_substitutez00,
		BgL_bgl_za762doza7d2substitu1875z00,
		BGl_z62dozd2substitutez12zd2setzd2e1287za2zzast_substitutez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1833z00zzast_substitutez00,
		BgL_bgl_za762doza7d2substitu1876z00,
		BGl_z62dozd2substitutez12zd2jumpzd21289za2zzast_substitutez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1834z00zzast_substitutez00,
		BgL_bgl_za762doza7d2substitu1877z00,
		BGl_z62dozd2substitutez12zd2makezd21291za2zzast_substitutez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1835z00zzast_substitutez00,
		BgL_bgl_za762doza7d2substitu1878z00,
		BGl_z62dozd2substitutez12zd2boxzd2r1293za2zzast_substitutez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1836z00zzast_substitutez00,
		BgL_bgl_za762doza7d2substitu1879z00,
		BGl_z62dozd2substitutez12zd2boxzd2s1295za2zzast_substitutez00, 0L, BUNSPEC,
		2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzast_substitutez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzast_substitutez00(long
		BgL_checksumz00_2242, char *BgL_fromz00_2243)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_substitutez00))
				{
					BGl_requirezd2initializa7ationz75zzast_substitutez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_substitutez00();
					BGl_libraryzd2moduleszd2initz00zzast_substitutez00();
					BGl_cnstzd2initzd2zzast_substitutez00();
					BGl_importedzd2moduleszd2initz00zzast_substitutez00();
					BGl_genericzd2initzd2zzast_substitutez00();
					BGl_methodzd2initzd2zzast_substitutez00();
					return BGl_toplevelzd2initzd2zzast_substitutez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_substitutez00()
	{
		{	/* Ast/substitute.scm 14 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"ast_substitute");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"ast_substitute");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"ast_substitute");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_substitute");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_substitute");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"ast_substitute");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "ast_substitute");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_substitute");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_substitute");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_substitutez00()
	{
		{	/* Ast/substitute.scm 14 */
			{	/* Ast/substitute.scm 14 */
				obj_t BgL_cportz00_2107;

				{	/* Ast/substitute.scm 14 */
					obj_t BgL_stringz00_2115;

					BgL_stringz00_2115 = BGl_string1842z00zzast_substitutez00;
					{	/* Ast/substitute.scm 14 */
						obj_t BgL_startz00_2116;

						BgL_startz00_2116 = BINT(((long) 0));
						{	/* Ast/substitute.scm 14 */
							obj_t BgL_endz00_2117;

							BgL_endz00_2117 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2115)));
							{	/* Ast/substitute.scm 14 */

								BgL_cportz00_2107 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2115, BgL_startz00_2116, BgL_endz00_2117);
				}}}}
				{
					long BgL_iz00_2108;

					BgL_iz00_2108 = ((long) 6);
				BgL_loopz00_2109:
					if ((BgL_iz00_2108 == ((long) -1)))
						{	/* Ast/substitute.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/substitute.scm 14 */
							{	/* Ast/substitute.scm 14 */
								obj_t BgL_arg1845z00_2111;

								{	/* Ast/substitute.scm 14 */

									{	/* Ast/substitute.scm 14 */
										obj_t BgL_locationz00_2113;

										BgL_locationz00_2113 = BBOOL(((bool_t) 0));
										{	/* Ast/substitute.scm 14 */

											BgL_arg1845z00_2111 =
												BGl_readz00zz__readerz00(BgL_cportz00_2107,
												BgL_locationz00_2113);
										}
									}
								}
								{	/* Ast/substitute.scm 14 */
									int BgL_tmpz00_2272;

									BgL_tmpz00_2272 = (int) (BgL_iz00_2108);
									CNST_TABLE_SET(BgL_tmpz00_2272, BgL_arg1845z00_2111);
							}}
							{	/* Ast/substitute.scm 14 */
								int BgL_auxz00_2114;

								BgL_auxz00_2114 = (int) ((BgL_iz00_2108 - ((long) 1)));
								{
									long BgL_iz00_2277;

									BgL_iz00_2277 = (long) (BgL_auxz00_2114);
									BgL_iz00_2108 = BgL_iz00_2277;
									goto BgL_loopz00_2109;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_substitutez00()
	{
		{	/* Ast/substitute.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_substitutez00()
	{
		{	/* Ast/substitute.scm 14 */
			return BUNSPEC;
		}

	}



/* substitute! */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_substitutez12z12zzast_substitutez00(obj_t BgL_whatza2za2_3,
		obj_t BgL_byza2za2_4, BgL_nodez00_bglt BgL_nodez00_5, obj_t BgL_sitez00_6)
	{
		{	/* Ast/substitute.scm 34 */
			{
				obj_t BgL_ll1232z00_1375;
				obj_t BgL_ll1233z00_1376;

				BgL_ll1232z00_1375 = BgL_whatza2za2_3;
				BgL_ll1233z00_1376 = BgL_byza2za2_4;
			BgL_zc3z04anonymousza31299ze3z87_1377:
				if (NULLP(BgL_ll1232z00_1375))
					{	/* Ast/substitute.scm 37 */
						((bool_t) 1);
					}
				else
					{	/* Ast/substitute.scm 37 */
						{	/* Ast/substitute.scm 39 */
							obj_t BgL_whatz00_1379;
							obj_t BgL_byz00_1380;

							BgL_whatz00_1379 = CAR(((obj_t) BgL_ll1232z00_1375));
							BgL_byz00_1380 = CAR(((obj_t) BgL_ll1233z00_1376));
							((((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_whatz00_1379)))->
									BgL_fastzd2alphazd2) = ((obj_t) BgL_byz00_1380), BUNSPEC);
						}
						{	/* Ast/substitute.scm 37 */
							obj_t BgL_arg1301z00_1381;
							obj_t BgL_arg1303z00_1382;

							BgL_arg1301z00_1381 = CDR(((obj_t) BgL_ll1232z00_1375));
							BgL_arg1303z00_1382 = CDR(((obj_t) BgL_ll1233z00_1376));
							{
								obj_t BgL_ll1233z00_2293;
								obj_t BgL_ll1232z00_2292;

								BgL_ll1232z00_2292 = BgL_arg1301z00_1381;
								BgL_ll1233z00_2293 = BgL_arg1303z00_1382;
								BgL_ll1233z00_1376 = BgL_ll1233z00_2293;
								BgL_ll1232z00_1375 = BgL_ll1232z00_2292;
								goto BgL_zc3z04anonymousza31299ze3z87_1377;
							}
						}
					}
			}
			{	/* Ast/substitute.scm 42 */
				BgL_nodez00_bglt BgL_resz00_1384;

				BgL_resz00_1384 =
					BGl_dozd2substitutez12zc0zzast_substitutez00(BgL_nodez00_5,
					BgL_sitez00_6);
				{
					obj_t BgL_l1235z00_1386;

					BgL_l1235z00_1386 = BgL_whatza2za2_3;
				BgL_zc3z04anonymousza31304ze3z87_1387:
					if (PAIRP(BgL_l1235z00_1386))
						{	/* Ast/substitute.scm 44 */
							{	/* Ast/substitute.scm 45 */
								obj_t BgL_whatz00_1389;

								BgL_whatz00_1389 = CAR(BgL_l1235z00_1386);
								((((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_whatz00_1389)))->
										BgL_fastzd2alphazd2) = ((obj_t) BUNSPEC), BUNSPEC);
							}
							{
								obj_t BgL_l1235z00_2300;

								BgL_l1235z00_2300 = CDR(BgL_l1235z00_1386);
								BgL_l1235z00_1386 = BgL_l1235z00_2300;
								goto BgL_zc3z04anonymousza31304ze3z87_1387;
							}
						}
					else
						{	/* Ast/substitute.scm 44 */
							((bool_t) 1);
						}
				}
				return BgL_resz00_1384;
			}
		}

	}



/* &substitute! */
	BgL_nodez00_bglt BGl_z62substitutez12z70zzast_substitutez00(obj_t
		BgL_envz00_2011, obj_t BgL_whatza2za2_2012, obj_t BgL_byza2za2_2013,
		obj_t BgL_nodez00_2014, obj_t BgL_sitez00_2015)
	{
		{	/* Ast/substitute.scm 34 */
			return
				BGl_substitutez12z12zzast_substitutez00(BgL_whatza2za2_2012,
				BgL_byza2za2_2013, ((BgL_nodez00_bglt) BgL_nodez00_2014),
				BgL_sitez00_2015);
		}

	}



/* do-substitute*! */
	obj_t BGl_dozd2substituteza2z12z62zzast_substitutez00(obj_t BgL_nodeza2za2_51,
		obj_t BgL_sitez00_52)
	{
		{	/* Ast/substitute.scm 274 */
		BGl_dozd2substituteza2z12z62zzast_substitutez00:
			if (NULLP(BgL_nodeza2za2_51))
				{	/* Ast/substitute.scm 276 */
					return CNST_TABLE_REF(((long) 0));
				}
			else
				{	/* Ast/substitute.scm 276 */
					if (NULLP(CDR(((obj_t) BgL_nodeza2za2_51))))
						{	/* Ast/substitute.scm 278 */
							{	/* Ast/substitute.scm 279 */
								BgL_nodez00_bglt BgL_arg1310z00_1395;

								{	/* Ast/substitute.scm 279 */
									obj_t BgL_arg1311z00_1396;

									BgL_arg1311z00_1396 = CAR(((obj_t) BgL_nodeza2za2_51));
									BgL_arg1310z00_1395 =
										BGl_dozd2substitutez12zc0zzast_substitutez00(
										((BgL_nodez00_bglt) BgL_arg1311z00_1396), BgL_sitez00_52);
								}
								{	/* Ast/substitute.scm 279 */
									obj_t BgL_auxz00_2317;
									obj_t BgL_tmpz00_2315;

									BgL_auxz00_2317 = ((obj_t) BgL_arg1310z00_1395);
									BgL_tmpz00_2315 = ((obj_t) BgL_nodeza2za2_51);
									SET_CAR(BgL_tmpz00_2315, BgL_auxz00_2317);
								}
							}
							return CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Ast/substitute.scm 278 */
							{	/* Ast/substitute.scm 282 */
								BgL_nodez00_bglt BgL_arg1312z00_1397;

								{	/* Ast/substitute.scm 282 */
									obj_t BgL_arg1314z00_1398;

									BgL_arg1314z00_1398 = CAR(((obj_t) BgL_nodeza2za2_51));
									BgL_arg1312z00_1397 =
										BGl_dozd2substitutez12zc0zzast_substitutez00(
										((BgL_nodez00_bglt) BgL_arg1314z00_1398),
										CNST_TABLE_REF(((long) 1)));
								}
								{	/* Ast/substitute.scm 282 */
									obj_t BgL_auxz00_2328;
									obj_t BgL_tmpz00_2326;

									BgL_auxz00_2328 = ((obj_t) BgL_arg1312z00_1397);
									BgL_tmpz00_2326 = ((obj_t) BgL_nodeza2za2_51);
									SET_CAR(BgL_tmpz00_2326, BgL_auxz00_2328);
							}}
							{	/* Ast/substitute.scm 283 */
								obj_t BgL_arg1315z00_1399;

								BgL_arg1315z00_1399 = CDR(((obj_t) BgL_nodeza2za2_51));
								{
									obj_t BgL_nodeza2za2_2333;

									BgL_nodeza2za2_2333 = BgL_arg1315z00_1399;
									BgL_nodeza2za2_51 = BgL_nodeza2za2_2333;
									goto BGl_dozd2substituteza2z12z62zzast_substitutez00;
								}
							}
						}
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_substitutez00()
	{
		{	/* Ast/substitute.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_substitutez00()
	{
		{	/* Ast/substitute.scm 14 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_proc1812z00zzast_substitutez00, BGl_nodez00zzast_nodez00,
				BGl_string1813z00zzast_substitutez00);
		}

	}



/* &do-substitute!1251 */
	obj_t BGl_z62dozd2substitutez121251za2zzast_substitutez00(obj_t
		BgL_envz00_2017, obj_t BgL_nodez00_2018, obj_t BgL_sitez00_2019)
	{
		{	/* Ast/substitute.scm 52 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 2)),
				BGl_string1814z00zzast_substitutez00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2018)));
		}

	}



/* do-substitute! */
	BgL_nodez00_bglt BGl_dozd2substitutez12zc0zzast_substitutez00(BgL_nodez00_bglt
		BgL_nodez00_7, obj_t BgL_sitez00_8)
	{
		{	/* Ast/substitute.scm 52 */
			{	/* Ast/substitute.scm 52 */
				obj_t BgL_method1252z00_1406;

				{	/* Ast/substitute.scm 52 */
					obj_t BgL_res1793z00_1889;

					{	/* Ast/substitute.scm 52 */
						long BgL_objzd2classzd2numz00_1854;

						{	/* Ast/substitute.scm 52 */
							long BgL_res1783z00_1857;

							BgL_res1783z00_1857 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_7));
							BgL_objzd2classzd2numz00_1854 = BgL_res1783z00_1857;
						}
						{	/* Ast/substitute.scm 52 */
							obj_t BgL_arg1813z00_1855;

							BgL_arg1813z00_1855 =
								PROCEDURE_REF
								(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
								(int) (((long) 1)));
							{	/* Ast/substitute.scm 52 */
								int BgL_offsetz00_1859;

								BgL_offsetz00_1859 = (int) (BgL_objzd2classzd2numz00_1854);
								{	/* Ast/substitute.scm 52 */
									long BgL_offsetz00_1860;

									BgL_offsetz00_1860 =
										((long) (BgL_offsetz00_1859) - OBJECT_TYPE);
									{	/* Ast/substitute.scm 52 */
										long BgL_modz00_1861;

										BgL_modz00_1861 =
											(BgL_offsetz00_1860 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/substitute.scm 52 */
											long BgL_restz00_1863;

											BgL_restz00_1863 =
												(BgL_offsetz00_1860 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/substitute.scm 52 */

												{	/* Ast/substitute.scm 52 */
													obj_t BgL_bucketz00_1865;

													BgL_bucketz00_1865 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1855), BgL_modz00_1861);
													BgL_res1793z00_1889 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1865), BgL_restz00_1863);
					}}}}}}}}
					BgL_method1252z00_1406 = BgL_res1793z00_1889;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1252z00_1406) (BgL_method1252z00_1406,
						((obj_t) BgL_nodez00_7), BgL_sitez00_8, BEOA));
			}
		}

	}



/* &do-substitute! */
	BgL_nodez00_bglt BGl_z62dozd2substitutez12za2zzast_substitutez00(obj_t
		BgL_envz00_2020, obj_t BgL_nodez00_2021, obj_t BgL_sitez00_2022)
	{
		{	/* Ast/substitute.scm 52 */
			return
				BGl_dozd2substitutez12zc0zzast_substitutez00(
				((BgL_nodez00_bglt) BgL_nodez00_2021), BgL_sitez00_2022);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_substitutez00()
	{
		{	/* Ast/substitute.scm 14 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_atomz00zzast_nodez00, BGl_proc1815z00zzast_substitutez00,
				BGl_string1816z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_varz00zzast_nodez00, BGl_proc1817z00zzast_substitutez00,
				BGl_string1816z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_kwotez00zzast_nodez00, BGl_proc1818z00zzast_substitutez00,
				BGl_string1816z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_sequencez00zzast_nodez00, BGl_proc1819z00zzast_substitutez00,
				BGl_string1816z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_syncz00zzast_nodez00, BGl_proc1820z00zzast_substitutez00,
				BGl_string1816z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_appz00zzast_nodez00, BGl_proc1821z00zzast_substitutez00,
				BGl_string1816z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1822z00zzast_substitutez00,
				BGl_string1816z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_funcallz00zzast_nodez00, BGl_proc1823z00zzast_substitutez00,
				BGl_string1816z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_externz00zzast_nodez00, BGl_proc1824z00zzast_substitutez00,
				BGl_string1816z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_castz00zzast_nodez00, BGl_proc1825z00zzast_substitutez00,
				BGl_string1816z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_setqz00zzast_nodez00, BGl_proc1826z00zzast_substitutez00,
				BGl_string1816z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1827z00zzast_substitutez00,
				BGl_string1816z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_failz00zzast_nodez00, BGl_proc1828z00zzast_substitutez00,
				BGl_string1816z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_switchz00zzast_nodez00, BGl_proc1829z00zzast_substitutez00,
				BGl_string1816z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1830z00zzast_substitutez00,
				BGl_string1816z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1831z00zzast_substitutez00,
				BGl_string1816z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc1832z00zzast_substitutez00,
				BGl_string1816z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc1833z00zzast_substitutez00,
				BGl_string1816z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1834z00zzast_substitutez00,
				BGl_string1816z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1835z00zzast_substitutez00,
				BGl_string1816z00zzast_substitutez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1836z00zzast_substitutez00,
				BGl_string1816z00zzast_substitutez00);
		}

	}



/* &do-substitute!-box-s1295 */
	BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2boxzd2s1295za2zzast_substitutez00(obj_t
		BgL_envz00_2044, obj_t BgL_nodez00_2045, obj_t BgL_sitez00_2046)
	{
		{	/* Ast/substitute.scm 266 */
			{	/* Ast/substitute.scm 267 */
				BgL_nodez00_bglt BgL_arg1631z00_2122;

				{	/* Ast/substitute.scm 267 */
					BgL_varz00_bglt BgL_arg1634z00_2123;

					BgL_arg1634z00_2123 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2045)))->BgL_varz00);
					BgL_arg1631z00_2122 =
						BGl_dozd2substitutez12zc0zzast_substitutez00(
						((BgL_nodez00_bglt) BgL_arg1634z00_2123),
						CNST_TABLE_REF(((long) 1)));
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2045)))->BgL_varz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_arg1631z00_2122)), BUNSPEC);
			}
			{	/* Ast/substitute.scm 268 */
				BgL_nodez00_bglt BgL_arg1639z00_2124;

				{	/* Ast/substitute.scm 268 */
					BgL_nodez00_bglt BgL_arg1640z00_2125;

					BgL_arg1640z00_2125 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2045)))->BgL_valuez00);
					BgL_arg1639z00_2124 =
						BGl_dozd2substitutez12zc0zzast_substitutez00(BgL_arg1640z00_2125,
						CNST_TABLE_REF(((long) 1)));
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2045)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_arg1639z00_2124), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2045));
		}

	}



/* &do-substitute!-box-r1293 */
	BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2boxzd2r1293za2zzast_substitutez00(obj_t
		BgL_envz00_2047, obj_t BgL_nodez00_2048, obj_t BgL_sitez00_2049)
	{
		{	/* Ast/substitute.scm 259 */
			{	/* Ast/substitute.scm 260 */
				BgL_nodez00_bglt BgL_arg1626z00_2127;

				{	/* Ast/substitute.scm 260 */
					BgL_varz00_bglt BgL_arg1627z00_2128;

					BgL_arg1627z00_2128 =
						(((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2048)))->BgL_varz00);
					BgL_arg1626z00_2127 =
						BGl_dozd2substitutez12zc0zzast_substitutez00(
						((BgL_nodez00_bglt) BgL_arg1627z00_2128),
						CNST_TABLE_REF(((long) 1)));
				}
				((((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2048)))->BgL_varz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_arg1626z00_2127)), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_2048));
		}

	}



/* &do-substitute!-make-1291 */
	BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2makezd21291za2zzast_substitutez00(obj_t
		BgL_envz00_2050, obj_t BgL_nodez00_2051, obj_t BgL_sitez00_2052)
	{
		{	/* Ast/substitute.scm 252 */
			{	/* Ast/substitute.scm 253 */
				BgL_nodez00_bglt BgL_arg1613z00_2130;

				{	/* Ast/substitute.scm 253 */
					BgL_nodez00_bglt BgL_arg1624z00_2131;

					BgL_arg1624z00_2131 =
						(((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2051)))->BgL_valuez00);
					BgL_arg1613z00_2130 =
						BGl_dozd2substitutez12zc0zzast_substitutez00(BgL_arg1624z00_2131,
						CNST_TABLE_REF(((long) 1)));
				}
				((((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2051)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_arg1613z00_2130), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2051));
		}

	}



/* &do-substitute!-jump-1289 */
	BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2jumpzd21289za2zzast_substitutez00(obj_t
		BgL_envz00_2053, obj_t BgL_nodez00_2054, obj_t BgL_sitez00_2055)
	{
		{	/* Ast/substitute.scm 244 */
			{	/* Ast/substitute.scm 245 */
				BgL_nodez00_bglt BgL_arg1605z00_2133;

				{	/* Ast/substitute.scm 245 */
					BgL_nodez00_bglt BgL_arg1606z00_2134;

					BgL_arg1606z00_2134 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2054)))->BgL_exitz00);
					BgL_arg1605z00_2133 =
						BGl_dozd2substitutez12zc0zzast_substitutez00(BgL_arg1606z00_2134,
						CNST_TABLE_REF(((long) 3)));
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2054)))->
						BgL_exitz00) = ((BgL_nodez00_bglt) BgL_arg1605z00_2133), BUNSPEC);
			}
			{	/* Ast/substitute.scm 246 */
				BgL_nodez00_bglt BgL_arg1611z00_2135;

				{	/* Ast/substitute.scm 246 */
					BgL_nodez00_bglt BgL_arg1612z00_2136;

					BgL_arg1612z00_2136 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2054)))->
						BgL_valuez00);
					BgL_arg1611z00_2135 =
						BGl_dozd2substitutez12zc0zzast_substitutez00(BgL_arg1612z00_2136,
						CNST_TABLE_REF(((long) 1)));
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2054)))->
						BgL_valuez00) = ((BgL_nodez00_bglt) BgL_arg1611z00_2135), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2054));
		}

	}



/* &do-substitute!-set-e1287 */
	BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2setzd2e1287za2zzast_substitutez00(obj_t
		BgL_envz00_2056, obj_t BgL_nodez00_2057, obj_t BgL_sitez00_2058)
	{
		{	/* Ast/substitute.scm 237 */
			((((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2057)))->BgL_bodyz00) =
				((BgL_nodez00_bglt)
					BGl_dozd2substitutez12zc0zzast_substitutez00(((
								(BgL_setzd2exzd2itz00_bglt) COBJECT(((BgL_setzd2exzd2itz00_bglt)
										BgL_nodez00_2057)))->BgL_bodyz00), BgL_sitez00_2058)),
				BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt)
					BgL_nodez00_2057));
		}

	}



/* &do-substitute!-let-v1285 */
	BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2letzd2v1285za2zzast_substitutez00(obj_t
		BgL_envz00_2059, obj_t BgL_nodez00_2060, obj_t BgL_sitez00_2061)
	{
		{	/* Ast/substitute.scm 227 */
			{	/* Ast/substitute.scm 228 */
				obj_t BgL_g1250z00_2139;

				BgL_g1250z00_2139 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2060)))->BgL_bindingsz00);
				{
					obj_t BgL_l1248z00_2141;

					BgL_l1248z00_2141 = BgL_g1250z00_2139;
				BgL_zc3z04anonymousza31585ze3z87_2140:
					if (PAIRP(BgL_l1248z00_2141))
						{	/* Ast/substitute.scm 230 */
							{	/* Ast/substitute.scm 229 */
								obj_t BgL_bindingz00_2142;

								BgL_bindingz00_2142 = CAR(BgL_l1248z00_2141);
								{	/* Ast/substitute.scm 229 */
									BgL_nodez00_bglt BgL_arg1588z00_2143;

									{	/* Ast/substitute.scm 229 */
										obj_t BgL_arg1589z00_2144;

										BgL_arg1589z00_2144 = CDR(((obj_t) BgL_bindingz00_2142));
										BgL_arg1588z00_2143 =
											BGl_dozd2substitutez12zc0zzast_substitutez00(
											((BgL_nodez00_bglt) BgL_arg1589z00_2144),
											CNST_TABLE_REF(((long) 1)));
									}
									{	/* Ast/substitute.scm 229 */
										obj_t BgL_auxz00_2461;
										obj_t BgL_tmpz00_2459;

										BgL_auxz00_2461 = ((obj_t) BgL_arg1588z00_2143);
										BgL_tmpz00_2459 = ((obj_t) BgL_bindingz00_2142);
										SET_CDR(BgL_tmpz00_2459, BgL_auxz00_2461);
							}}}
							{
								obj_t BgL_l1248z00_2464;

								BgL_l1248z00_2464 = CDR(BgL_l1248z00_2141);
								BgL_l1248z00_2141 = BgL_l1248z00_2464;
								goto BgL_zc3z04anonymousza31585ze3z87_2140;
							}
						}
					else
						{	/* Ast/substitute.scm 230 */
							((bool_t) 1);
						}
				}
			}
			((((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2060)))->BgL_bodyz00) =
				((BgL_nodez00_bglt)
					BGl_dozd2substitutez12zc0zzast_substitutez00((((BgL_letzd2varzd2_bglt)
								COBJECT(((BgL_letzd2varzd2_bglt) BgL_nodez00_2060)))->
							BgL_bodyz00), BgL_sitez00_2061)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt) BgL_nodez00_2060));
		}

	}



/* &do-substitute!-let-f1283 */
	BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2letzd2f1283za2zzast_substitutez00(obj_t
		BgL_envz00_2062, obj_t BgL_nodez00_2063, obj_t BgL_sitez00_2064)
	{
		{	/* Ast/substitute.scm 215 */
			{	/* Ast/substitute.scm 216 */
				obj_t BgL_g1247z00_2146;

				BgL_g1247z00_2146 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2063)))->BgL_localsz00);
				{
					obj_t BgL_l1245z00_2148;

					BgL_l1245z00_2148 = BgL_g1247z00_2146;
				BgL_zc3z04anonymousza31566ze3z87_2147:
					if (PAIRP(BgL_l1245z00_2148))
						{	/* Ast/substitute.scm 220 */
							{	/* Ast/substitute.scm 217 */
								obj_t BgL_localz00_2149;

								BgL_localz00_2149 = CAR(BgL_l1245z00_2148);
								{	/* Ast/substitute.scm 217 */
									BgL_valuez00_bglt BgL_funz00_2150;

									BgL_funz00_2150 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_localz00_2149))))->
										BgL_valuez00);
									{	/* Ast/substitute.scm 218 */
										BgL_nodez00_bglt BgL_arg1573z00_2151;

										{	/* Ast/substitute.scm 218 */
											obj_t BgL_arg1575z00_2152;

											BgL_arg1575z00_2152 =
												(((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_funz00_2150)))->
												BgL_bodyz00);
											BgL_arg1573z00_2151 =
												BGl_dozd2substitutez12zc0zzast_substitutez00((
													(BgL_nodez00_bglt) BgL_arg1575z00_2152),
												CNST_TABLE_REF(((long) 1)));
										}
										((((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_funz00_2150)))->
												BgL_bodyz00) =
											((obj_t) ((obj_t) BgL_arg1573z00_2151)), BUNSPEC);
							}}}
							{
								obj_t BgL_l1245z00_2489;

								BgL_l1245z00_2489 = CDR(BgL_l1245z00_2148);
								BgL_l1245z00_2148 = BgL_l1245z00_2489;
								goto BgL_zc3z04anonymousza31566ze3z87_2147;
							}
						}
					else
						{	/* Ast/substitute.scm 220 */
							((bool_t) 1);
						}
				}
			}
			((((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2063)))->BgL_bodyz00) =
				((BgL_nodez00_bglt)
					BGl_dozd2substitutez12zc0zzast_substitutez00((((BgL_letzd2funzd2_bglt)
								COBJECT(((BgL_letzd2funzd2_bglt) BgL_nodez00_2063)))->
							BgL_bodyz00), BgL_sitez00_2064)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt) BgL_nodez00_2063));
		}

	}



/* &do-substitute!-switc1281 */
	BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2switc1281z70zzast_substitutez00(obj_t
		BgL_envz00_2065, obj_t BgL_nodez00_2066, obj_t BgL_sitez00_2067)
	{
		{	/* Ast/substitute.scm 205 */
			{	/* Ast/substitute.scm 206 */
				BgL_nodez00_bglt BgL_arg1552z00_2154;

				{	/* Ast/substitute.scm 206 */
					BgL_nodez00_bglt BgL_arg1558z00_2155;

					BgL_arg1558z00_2155 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2066)))->BgL_testz00);
					BgL_arg1552z00_2154 =
						BGl_dozd2substitutez12zc0zzast_substitutez00(BgL_arg1558z00_2155,
						CNST_TABLE_REF(((long) 1)));
				}
				((((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2066)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_arg1552z00_2154), BUNSPEC);
			}
			{	/* Ast/substitute.scm 207 */
				obj_t BgL_g1244z00_2156;

				BgL_g1244z00_2156 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2066)))->BgL_clausesz00);
				{
					obj_t BgL_l1242z00_2158;

					BgL_l1242z00_2158 = BgL_g1244z00_2156;
				BgL_zc3z04anonymousza31559ze3z87_2157:
					if (PAIRP(BgL_l1242z00_2158))
						{	/* Ast/substitute.scm 209 */
							{	/* Ast/substitute.scm 208 */
								obj_t BgL_clausez00_2159;

								BgL_clausez00_2159 = CAR(BgL_l1242z00_2158);
								{	/* Ast/substitute.scm 208 */
									BgL_nodez00_bglt BgL_arg1561z00_2160;

									{	/* Ast/substitute.scm 208 */
										obj_t BgL_arg1564z00_2161;

										BgL_arg1564z00_2161 = CDR(((obj_t) BgL_clausez00_2159));
										BgL_arg1561z00_2160 =
											BGl_dozd2substitutez12zc0zzast_substitutez00(
											((BgL_nodez00_bglt) BgL_arg1564z00_2161),
											BgL_sitez00_2067);
									}
									{	/* Ast/substitute.scm 208 */
										obj_t BgL_auxz00_2515;
										obj_t BgL_tmpz00_2513;

										BgL_auxz00_2515 = ((obj_t) BgL_arg1561z00_2160);
										BgL_tmpz00_2513 = ((obj_t) BgL_clausez00_2159);
										SET_CDR(BgL_tmpz00_2513, BgL_auxz00_2515);
									}
								}
							}
							{
								obj_t BgL_l1242z00_2518;

								BgL_l1242z00_2518 = CDR(BgL_l1242z00_2158);
								BgL_l1242z00_2158 = BgL_l1242z00_2518;
								goto BgL_zc3z04anonymousza31559ze3z87_2157;
							}
						}
					else
						{	/* Ast/substitute.scm 209 */
							((bool_t) 1);
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_2066));
		}

	}



/* &do-substitute!-fail1279 */
	BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2fail1279z70zzast_substitutez00(obj_t
		BgL_envz00_2068, obj_t BgL_nodez00_2069, obj_t BgL_sitez00_2070)
	{
		{	/* Ast/substitute.scm 195 */
			{
				BgL_nodez00_bglt BgL_auxz00_2522;

				{	/* Ast/substitute.scm 197 */
					BgL_nodez00_bglt BgL_arg1536z00_2163;

					BgL_arg1536z00_2163 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2069)))->BgL_procz00);
					BgL_auxz00_2522 =
						BGl_dozd2substitutez12zc0zzast_substitutez00(BgL_arg1536z00_2163,
						CNST_TABLE_REF(((long) 1)));
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2069)))->BgL_procz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2522), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2529;

				{	/* Ast/substitute.scm 198 */
					BgL_nodez00_bglt BgL_arg1537z00_2164;

					BgL_arg1537z00_2164 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2069)))->BgL_msgz00);
					BgL_auxz00_2529 =
						BGl_dozd2substitutez12zc0zzast_substitutez00(BgL_arg1537z00_2164,
						CNST_TABLE_REF(((long) 1)));
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2069)))->BgL_msgz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2529), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2536;

				{	/* Ast/substitute.scm 199 */
					BgL_nodez00_bglt BgL_arg1540z00_2165;

					BgL_arg1540z00_2165 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2069)))->BgL_objz00);
					BgL_auxz00_2536 =
						BGl_dozd2substitutez12zc0zzast_substitutez00(BgL_arg1540z00_2165,
						CNST_TABLE_REF(((long) 1)));
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2069)))->BgL_objz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2536), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_failz00_bglt) BgL_nodez00_2069));
		}

	}



/* &do-substitute!-condi1277 */
	BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2condi1277z70zzast_substitutez00(obj_t
		BgL_envz00_2071, obj_t BgL_nodez00_2072, obj_t BgL_sitez00_2073)
	{
		{	/* Ast/substitute.scm 185 */
			{
				BgL_nodez00_bglt BgL_auxz00_2545;

				{	/* Ast/substitute.scm 187 */
					BgL_nodez00_bglt BgL_arg1518z00_2167;

					BgL_arg1518z00_2167 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2072)))->BgL_testz00);
					BgL_auxz00_2545 =
						BGl_dozd2substitutez12zc0zzast_substitutez00(BgL_arg1518z00_2167,
						CNST_TABLE_REF(((long) 1)));
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2072)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2545), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2552;

				{	/* Ast/substitute.scm 188 */
					BgL_nodez00_bglt BgL_arg1521z00_2168;

					BgL_arg1521z00_2168 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2072)))->BgL_truez00);
					BgL_auxz00_2552 =
						BGl_dozd2substitutez12zc0zzast_substitutez00(BgL_arg1521z00_2168,
						BgL_sitez00_2073);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2072)))->BgL_truez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2552), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2558;

				{	/* Ast/substitute.scm 189 */
					BgL_nodez00_bglt BgL_arg1528z00_2169;

					BgL_arg1528z00_2169 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2072)))->BgL_falsez00);
					BgL_auxz00_2558 =
						BGl_dozd2substitutez12zc0zzast_substitutez00(BgL_arg1528z00_2169,
						BgL_sitez00_2073);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2072)))->BgL_falsez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2558), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt) BgL_nodez00_2072));
		}

	}



/* &do-substitute!-setq1275 */
	BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2setq1275z70zzast_substitutez00(obj_t
		BgL_envz00_2074, obj_t BgL_nodez00_2075, obj_t BgL_sitez00_2076)
	{
		{	/* Ast/substitute.scm 176 */
			{
				BgL_varz00_bglt BgL_auxz00_2566;

				{	/* Ast/substitute.scm 178 */
					BgL_varz00_bglt BgL_arg1495z00_2171;

					BgL_arg1495z00_2171 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2075)))->BgL_varz00);
					BgL_auxz00_2566 =
						((BgL_varz00_bglt)
						BGl_dozd2substitutez12zc0zzast_substitutez00(
							((BgL_nodez00_bglt) BgL_arg1495z00_2171),
							CNST_TABLE_REF(((long) 4))));
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2075)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_2566), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2575;

				{	/* Ast/substitute.scm 179 */
					BgL_nodez00_bglt BgL_arg1497z00_2172;

					BgL_arg1497z00_2172 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2075)))->BgL_valuez00);
					BgL_auxz00_2575 =
						BGl_dozd2substitutez12zc0zzast_substitutez00(BgL_arg1497z00_2172,
						BgL_sitez00_2076);
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2075)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2575), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_setqz00_bglt) BgL_nodez00_2075));
		}

	}



/* &do-substitute!-cast1273 */
	BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2cast1273z70zzast_substitutez00(obj_t
		BgL_envz00_2077, obj_t BgL_nodez00_2078, obj_t BgL_sitez00_2079)
	{
		{	/* Ast/substitute.scm 169 */
			((((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2078)))->BgL_argz00) =
				((BgL_nodez00_bglt)
					BGl_dozd2substitutez12zc0zzast_substitutez00((((BgL_castz00_bglt)
								COBJECT(((BgL_castz00_bglt) BgL_nodez00_2078)))->BgL_argz00),
						BgL_sitez00_2079)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_castz00_bglt) BgL_nodez00_2078));
		}

	}



/* &do-substitute!-exter1270 */
	BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2exter1270z70zzast_substitutez00(obj_t
		BgL_envz00_2080, obj_t BgL_nodez00_2081, obj_t BgL_sitez00_2082)
	{
		{	/* Ast/substitute.scm 162 */
			BGl_dozd2substituteza2z12z62zzast_substitutez00(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_2081)))->BgL_exprza2za2),
				BgL_sitez00_2082);
			return ((BgL_nodez00_bglt) ((BgL_externz00_bglt) BgL_nodez00_2081));
		}

	}



/* &do-substitute!-funca1268 */
	BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2funca1268z70zzast_substitutez00(obj_t
		BgL_envz00_2083, obj_t BgL_nodez00_2084, obj_t BgL_sitez00_2085)
	{
		{	/* Ast/substitute.scm 140 */
			{	/* Ast/substitute.scm 142 */
				BgL_nodez00_bglt BgL_nfunz00_2176;
				obj_t BgL_nargsz00_2177;

				{	/* Ast/substitute.scm 142 */
					BgL_nodez00_bglt BgL_arg1464z00_2178;

					BgL_arg1464z00_2178 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2084)))->BgL_funz00);
					BgL_nfunz00_2176 =
						BGl_dozd2substitutez12zc0zzast_substitutez00(BgL_arg1464z00_2178,
						CNST_TABLE_REF(((long) 1)));
				}
				{	/* Ast/substitute.scm 143 */
					obj_t BgL_l1237z00_2179;

					BgL_l1237z00_2179 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2084)))->BgL_argsz00);
					if (NULLP(BgL_l1237z00_2179))
						{	/* Ast/substitute.scm 143 */
							BgL_nargsz00_2177 = BNIL;
						}
					else
						{	/* Ast/substitute.scm 143 */
							obj_t BgL_head1239z00_2180;

							{	/* Ast/substitute.scm 143 */
								obj_t BgL_res1803z00_2181;

								BgL_res1803z00_2181 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								BgL_head1239z00_2180 = BgL_res1803z00_2181;
							}
							{
								obj_t BgL_l1237z00_2183;
								obj_t BgL_tail1240z00_2184;

								BgL_l1237z00_2183 = BgL_l1237z00_2179;
								BgL_tail1240z00_2184 = BgL_head1239z00_2180;
							BgL_zc3z04anonymousza31467ze3z87_2182:
								if (NULLP(BgL_l1237z00_2183))
									{	/* Ast/substitute.scm 143 */
										BgL_nargsz00_2177 = CDR(BgL_head1239z00_2180);
									}
								else
									{	/* Ast/substitute.scm 143 */
										obj_t BgL_newtail1241z00_2185;

										{	/* Ast/substitute.scm 143 */
											BgL_nodez00_bglt BgL_arg1476z00_2186;

											{	/* Ast/substitute.scm 143 */
												obj_t BgL_az00_2187;

												BgL_az00_2187 = CAR(((obj_t) BgL_l1237z00_2183));
												BgL_arg1476z00_2186 =
													BGl_dozd2substitutez12zc0zzast_substitutez00(
													((BgL_nodez00_bglt) BgL_az00_2187),
													CNST_TABLE_REF(((long) 1)));
											}
											{	/* Ast/substitute.scm 143 */
												obj_t BgL_res1805z00_2188;

												BgL_res1805z00_2188 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_arg1476z00_2186), BNIL);
												BgL_newtail1241z00_2185 = BgL_res1805z00_2188;
										}}
										SET_CDR(BgL_tail1240z00_2184, BgL_newtail1241z00_2185);
										{	/* Ast/substitute.scm 143 */
											obj_t BgL_arg1474z00_2189;

											BgL_arg1474z00_2189 = CDR(((obj_t) BgL_l1237z00_2183));
											{
												obj_t BgL_tail1240z00_2618;
												obj_t BgL_l1237z00_2617;

												BgL_l1237z00_2617 = BgL_arg1474z00_2189;
												BgL_tail1240z00_2618 = BgL_newtail1241z00_2185;
												BgL_tail1240z00_2184 = BgL_tail1240z00_2618;
												BgL_l1237z00_2183 = BgL_l1237z00_2617;
												goto BgL_zc3z04anonymousza31467ze3z87_2182;
											}
										}
									}
							}
						}
				}
				{	/* Ast/substitute.scm 144 */
					bool_t BgL_test1891z00_2619;

					{	/* Ast/substitute.scm 144 */
						bool_t BgL_test1892z00_2620;

						{	/* Ast/substitute.scm 144 */
							bool_t BgL_res1806z00_2190;

							BgL_res1806z00_2190 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_nfunz00_2176), BGl_closurez00zzast_nodez00);
							BgL_test1892z00_2620 = BgL_res1806z00_2190;
						}
						if (BgL_test1892z00_2620)
							{	/* Ast/substitute.scm 144 */
								BgL_test1891z00_2619 = ((bool_t) 1);
							}
						else
							{	/* Ast/substitute.scm 145 */
								bool_t BgL_test1893z00_2623;

								{	/* Ast/substitute.scm 145 */
									bool_t BgL_res1807z00_2191;

									BgL_res1807z00_2191 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_nfunz00_2176), BGl_varz00zzast_nodez00);
									BgL_test1893z00_2623 = BgL_res1807z00_2191;
								}
								if (BgL_test1893z00_2623)
									{	/* Ast/substitute.scm 146 */
										BgL_valuez00_bglt BgL_arg1461z00_2192;

										BgL_arg1461z00_2192 =
											(((BgL_variablez00_bglt) COBJECT(
													(((BgL_varz00_bglt) COBJECT(
																((BgL_varz00_bglt) BgL_nfunz00_2176)))->
														BgL_variablez00)))->BgL_valuez00);
										{	/* Ast/substitute.scm 146 */
											bool_t BgL_res1808z00_2193;

											BgL_res1808z00_2193 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_arg1461z00_2192), BGl_funz00zzast_varz00);
											BgL_test1891z00_2619 = BgL_res1808z00_2193;
										}
									}
								else
									{	/* Ast/substitute.scm 145 */
										BgL_test1891z00_2619 = ((bool_t) 0);
									}
							}
					}
					if (BgL_test1891z00_2619)
						{	/* Ast/substitute.scm 147 */
							bool_t BgL_test1894z00_2631;

							{	/* Ast/substitute.scm 147 */
								BgL_variablez00_bglt BgL_arg1448z00_2194;
								obj_t BgL_arg1449z00_2195;

								BgL_arg1448z00_2194 =
									(((BgL_varz00_bglt) COBJECT(
											((BgL_varz00_bglt) BgL_nfunz00_2176)))->BgL_variablez00);
								BgL_arg1449z00_2195 = CDR(((obj_t) BgL_nargsz00_2177));
								BgL_test1894z00_2631 =
									BGl_correctzd2arityzd2appzf3zf3zzast_appz00
									(BgL_arg1448z00_2194, BgL_arg1449z00_2195);
							}
							if (BgL_test1894z00_2631)
								{	/* Ast/substitute.scm 149 */
									obj_t BgL_arg1421z00_2196;
									obj_t BgL_arg1422z00_2197;

									BgL_arg1421z00_2196 =
										(((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt)
													((BgL_funcallz00_bglt) BgL_nodez00_2084))))->
										BgL_locz00);
									BgL_arg1422z00_2197 = CDR(((obj_t) BgL_nargsz00_2177));
									return
										BGl_makezd2appzd2nodez00zzast_appz00(BNIL,
										BgL_arg1421z00_2196, CNST_TABLE_REF(((long) 5)),
										((BgL_varz00_bglt) BgL_nfunz00_2176), BgL_arg1422z00_2197);
								}
							else
								{	/* Ast/substitute.scm 150 */
									obj_t BgL_arg1441z00_2198;
									obj_t BgL_arg1442z00_2199;

									BgL_arg1441z00_2198 =
										(((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt)
													((BgL_funcallz00_bglt) BgL_nodez00_2084))))->
										BgL_locz00);
									BgL_arg1442z00_2199 =
										BGl_shapez00zztools_shapez00(((obj_t) ((BgL_funcallz00_bglt)
												BgL_nodez00_2084)));
									return ((BgL_nodez00_bglt)
										BGl_userzd2errorzf2locationz20zztools_errorz00
										(BgL_arg1441z00_2198, BGl_string1837z00zzast_substitutez00,
											BGl_string1838z00zzast_substitutez00, BgL_arg1442z00_2199,
											BNIL));
								}
						}
					else
						{	/* Ast/substitute.scm 144 */
							((((BgL_funcallz00_bglt) COBJECT(
											((BgL_funcallz00_bglt) BgL_nodez00_2084)))->BgL_funz00) =
								((BgL_nodez00_bglt) BgL_nfunz00_2176), BUNSPEC);
							((((BgL_funcallz00_bglt) COBJECT(((BgL_funcallz00_bglt)
												BgL_nodez00_2084)))->BgL_argsz00) =
								((obj_t) BgL_nargsz00_2177), BUNSPEC);
							return ((BgL_nodez00_bglt) ((BgL_funcallz00_bglt)
									BgL_nodez00_2084));
						}
				}
			}
		}

	}



/* &do-substitute!-app-l1266 */
	BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2appzd2l1266za2zzast_substitutez00(obj_t
		BgL_envz00_2086, obj_t BgL_nodez00_2087, obj_t BgL_sitez00_2088)
	{
		{	/* Ast/substitute.scm 121 */
			{	/* Ast/substitute.scm 123 */
				BgL_nodez00_bglt BgL_nfunz00_2201;
				BgL_nodez00_bglt BgL_nargz00_2202;

				{	/* Ast/substitute.scm 123 */
					BgL_nodez00_bglt BgL_arg1382z00_2203;

					BgL_arg1382z00_2203 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2087)))->BgL_funz00);
					BgL_nfunz00_2201 =
						BGl_dozd2substitutez12zc0zzast_substitutez00(BgL_arg1382z00_2203,
						CNST_TABLE_REF(((long) 6)));
				}
				{	/* Ast/substitute.scm 124 */
					BgL_nodez00_bglt BgL_arg1383z00_2204;

					BgL_arg1383z00_2204 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2087)))->BgL_argz00);
					BgL_nargz00_2202 =
						BGl_dozd2substitutez12zc0zzast_substitutez00(BgL_arg1383z00_2204,
						CNST_TABLE_REF(((long) 1)));
				}
				{	/* Ast/substitute.scm 125 */
					bool_t BgL_test1895z00_2667;

					{	/* Ast/substitute.scm 125 */
						bool_t BgL_test1896z00_2668;

						{	/* Ast/substitute.scm 125 */
							bool_t BgL_res1800z00_2205;

							BgL_res1800z00_2205 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_nfunz00_2201), BGl_closurez00zzast_nodez00);
							BgL_test1896z00_2668 = BgL_res1800z00_2205;
						}
						if (BgL_test1896z00_2668)
							{	/* Ast/substitute.scm 126 */
								bool_t BgL_test1897z00_2671;

								{	/* Ast/substitute.scm 126 */
									BgL_variablez00_bglt BgL_arg1381z00_2206;

									BgL_arg1381z00_2206 =
										(((BgL_varz00_bglt) COBJECT(
												((BgL_varz00_bglt) BgL_nfunz00_2201)))->
										BgL_variablez00);
									BgL_test1897z00_2671 =
										BGl_globalzd2optionalzf3z21zzast_varz00(((obj_t)
											BgL_arg1381z00_2206));
								}
								if (BgL_test1897z00_2671)
									{	/* Ast/substitute.scm 126 */
										BgL_test1895z00_2667 = ((bool_t) 0);
									}
								else
									{	/* Ast/substitute.scm 127 */
										bool_t BgL_test1898z00_2676;

										{	/* Ast/substitute.scm 127 */
											BgL_variablez00_bglt BgL_arg1372z00_2207;

											BgL_arg1372z00_2207 =
												(((BgL_varz00_bglt) COBJECT(
														((BgL_varz00_bglt) BgL_nfunz00_2201)))->
												BgL_variablez00);
											BgL_test1898z00_2676 =
												BGl_globalzd2keyzf3z21zzast_varz00(((obj_t)
													BgL_arg1372z00_2207));
										}
										if (BgL_test1898z00_2676)
											{	/* Ast/substitute.scm 127 */
												BgL_test1895z00_2667 = ((bool_t) 0);
											}
										else
											{	/* Ast/substitute.scm 127 */
												BgL_test1895z00_2667 = ((bool_t) 1);
											}
									}
							}
						else
							{	/* Ast/substitute.scm 125 */
								BgL_test1895z00_2667 = ((bool_t) 0);
							}
					}
					if (BgL_test1895z00_2667)
						{	/* Ast/substitute.scm 128 */
							obj_t BgL_arg1367z00_2208;
							BgL_varz00_bglt BgL_arg1370z00_2209;

							BgL_arg1367z00_2208 =
								(((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_appzd2lyzd2_bglt) BgL_nodez00_2087))))->BgL_locz00);
							{	/* Ast/substitute.scm 128 */
								BgL_nodez00_bglt BgL_duplicated1111z00_2210;
								BgL_varz00_bglt BgL_new1109z00_2211;

								BgL_duplicated1111z00_2210 = BgL_nfunz00_2201;
								{	/* Ast/substitute.scm 128 */
									BgL_varz00_bglt BgL_new1113z00_2212;

									BgL_new1113z00_2212 =
										((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_varz00_bgl))));
									{	/* Ast/substitute.scm 128 */
										long BgL_arg1371z00_2213;

										{	/* Ast/substitute.scm 128 */
											long BgL_res1801z00_2214;

											BgL_res1801z00_2214 =
												BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
											BgL_arg1371z00_2213 = BgL_res1801z00_2214;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1113z00_2212),
											BgL_arg1371z00_2213);
									}
									BgL_new1109z00_2211 = BgL_new1113z00_2212;
								}
								((((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt) BgL_new1109z00_2211)))->
										BgL_locz00) =
									((obj_t) (((BgL_nodez00_bglt)
												COBJECT(BgL_duplicated1111z00_2210))->BgL_locz00)),
									BUNSPEC);
								((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
													BgL_new1109z00_2211)))->BgL_typez00) =
									((BgL_typez00_bglt) (((BgL_nodez00_bglt)
												COBJECT(BgL_duplicated1111z00_2210))->BgL_typez00)),
									BUNSPEC);
								((((BgL_varz00_bglt) COBJECT(BgL_new1109z00_2211))->
										BgL_variablez00) =
									((BgL_variablez00_bglt) (((BgL_varz00_bglt)
												COBJECT(((BgL_varz00_bglt)
														BgL_duplicated1111z00_2210)))->BgL_variablez00)),
									BUNSPEC);
								BgL_arg1370z00_2209 = BgL_new1109z00_2211;
							}
							return
								BGl_knownzd2appzd2lyzd2ze3nodez31zzast_applyz00(BNIL,
								BgL_arg1367z00_2208, ((BgL_nodez00_bglt) BgL_arg1370z00_2209),
								BgL_nargz00_2202, BgL_sitez00_2088);
						}
					else
						{	/* Ast/substitute.scm 125 */
							((((BgL_appzd2lyzd2_bglt) COBJECT(
											((BgL_appzd2lyzd2_bglt) BgL_nodez00_2087)))->BgL_funz00) =
								((BgL_nodez00_bglt) BgL_nfunz00_2201), BUNSPEC);
							((((BgL_appzd2lyzd2_bglt) COBJECT(((BgL_appzd2lyzd2_bglt)
												BgL_nodez00_2087)))->BgL_argz00) =
								((BgL_nodez00_bglt) BgL_nargz00_2202), BUNSPEC);
							return ((BgL_nodez00_bglt) ((BgL_appzd2lyzd2_bglt)
									BgL_nodez00_2087));
						}
				}
			}
		}

	}



/* &do-substitute!-app1264 */
	BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2app1264z70zzast_substitutez00(obj_t
		BgL_envz00_2089, obj_t BgL_nodez00_2090, obj_t BgL_sitez00_2091)
	{
		{	/* Ast/substitute.scm 113 */
			{	/* Ast/substitute.scm 114 */
				BgL_nodez00_bglt BgL_arg1348z00_2216;

				{	/* Ast/substitute.scm 114 */
					BgL_varz00_bglt BgL_arg1351z00_2217;

					BgL_arg1351z00_2217 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2090)))->BgL_funz00);
					BgL_arg1348z00_2216 =
						BGl_dozd2substitutez12zc0zzast_substitutez00(
						((BgL_nodez00_bglt) BgL_arg1351z00_2217),
						CNST_TABLE_REF(((long) 3)));
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2090)))->BgL_funz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_arg1348z00_2216)), BUNSPEC);
			}
			{	/* Ast/substitute.scm 115 */
				obj_t BgL_arg1352z00_2218;

				BgL_arg1352z00_2218 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_2090)))->BgL_argsz00);
				BGl_dozd2substituteza2z12z62zzast_substitutez00(BgL_arg1352z00_2218,
					CNST_TABLE_REF(((long) 1)));
			}
			return ((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_2090));
		}

	}



/* &do-substitute!-sync1262 */
	BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2sync1262z70zzast_substitutez00(obj_t
		BgL_envz00_2092, obj_t BgL_nodez00_2093, obj_t BgL_sitez00_2094)
	{
		{	/* Ast/substitute.scm 104 */
			((((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2093)))->BgL_mutexz00) =
				((BgL_nodez00_bglt)
					BGl_dozd2substitutez12zc0zzast_substitutez00((((BgL_syncz00_bglt)
								COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2093)))->BgL_mutexz00),
						BgL_sitez00_2094)), BUNSPEC);
			((((BgL_syncz00_bglt) COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2093)))->
					BgL_prelockz00) =
				((BgL_nodez00_bglt)
					BGl_dozd2substitutez12zc0zzast_substitutez00((((BgL_syncz00_bglt)
								COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2093)))->
							BgL_prelockz00), BgL_sitez00_2094)), BUNSPEC);
			((((BgL_syncz00_bglt) COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2093)))->
					BgL_bodyz00) =
				((BgL_nodez00_bglt)
					BGl_dozd2substitutez12zc0zzast_substitutez00((((BgL_syncz00_bglt)
								COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2093)))->BgL_bodyz00),
						BgL_sitez00_2094)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_2093));
		}

	}



/* &do-substitute!-seque1260 */
	BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2seque1260z70zzast_substitutez00(obj_t
		BgL_envz00_2095, obj_t BgL_nodez00_2096, obj_t BgL_sitez00_2097)
	{
		{	/* Ast/substitute.scm 97 */
			BGl_dozd2substituteza2z12z62zzast_substitutez00(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2096)))->BgL_nodesz00),
				BgL_sitez00_2097);
			return ((BgL_nodez00_bglt) ((BgL_sequencez00_bglt) BgL_nodez00_2096));
		}

	}



/* &do-substitute!-kwote1258 */
	BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2kwote1258z70zzast_substitutez00(obj_t
		BgL_envz00_2098, obj_t BgL_nodez00_2099, obj_t BgL_sitez00_2100)
	{
		{	/* Ast/substitute.scm 91 */
			return ((BgL_nodez00_bglt) ((BgL_kwotez00_bglt) BgL_nodez00_2099));
		}

	}



/* &do-substitute!-var1256 */
	BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2var1256z70zzast_substitutez00(obj_t
		BgL_envz00_2101, obj_t BgL_nodez00_2102, obj_t BgL_sitez00_2103)
	{
		{	/* Ast/substitute.scm 63 */
			{	/* Ast/substitute.scm 64 */
				BgL_variablez00_bglt BgL_varz00_2223;

				BgL_varz00_2223 =
					(((BgL_varz00_bglt) COBJECT(
							((BgL_varz00_bglt) BgL_nodez00_2102)))->BgL_variablez00);
				{	/* Ast/substitute.scm 64 */
					obj_t BgL_alphaz00_2224;

					BgL_alphaz00_2224 =
						(((BgL_variablez00_bglt) COBJECT(BgL_varz00_2223))->
						BgL_fastzd2alphazd2);
					{	/* Ast/substitute.scm 65 */

						{
							obj_t BgL_alphaz00_2226;

							{
								obj_t BgL_auxz00_2746;

								BgL_alphaz00_2226 = BgL_alphaz00_2224;
							BgL_loopz00_2225:
								if ((BgL_alphaz00_2226 == BUNSPEC))
									{	/* Ast/substitute.scm 68 */
										BgL_auxz00_2746 =
											((obj_t) ((BgL_varz00_bglt) BgL_nodez00_2102));
									}
								else
									{	/* Ast/substitute.scm 68 */
										if (BGl_isazf3zf3zz__objectz00(BgL_alphaz00_2226,
												BGl_varz00zzast_nodez00))
											{	/* Ast/substitute.scm 71 */
												BgL_variablez00_bglt BgL_arg1322z00_2227;

												BgL_arg1322z00_2227 =
													(((BgL_varz00_bglt) COBJECT(
															((BgL_varz00_bglt) BgL_alphaz00_2226)))->
													BgL_variablez00);
												{
													obj_t BgL_alphaz00_2755;

													BgL_alphaz00_2755 = ((obj_t) BgL_arg1322z00_2227);
													BgL_alphaz00_2226 = BgL_alphaz00_2755;
													goto BgL_loopz00_2225;
												}
											}
										else
											{	/* Ast/substitute.scm 70 */
												if (BGl_isazf3zf3zz__objectz00(BgL_alphaz00_2226,
														BGl_variablez00zzast_varz00))
													{	/* Ast/substitute.scm 72 */
														{	/* Ast/substitute.scm 73 */
															obj_t BgL_arg1324z00_2228;

															BgL_arg1324z00_2228 =
																(((BgL_nodez00_bglt) COBJECT(
																		((BgL_nodez00_bglt)
																			((BgL_varz00_bglt) BgL_nodez00_2102))))->
																BgL_locz00);
															BGl_usezd2variablez12zc0zzast_sexpz00((
																	(BgL_variablez00_bglt) BgL_alphaz00_2226),
																BgL_arg1324z00_2228, BgL_sitez00_2103);
														}
														{	/* Ast/substitute.scm 74 */
															bool_t BgL_test1902z00_2764;

															{	/* Ast/substitute.scm 74 */
																bool_t BgL_test1903z00_2765;

																{	/* Ast/substitute.scm 74 */
																	BgL_valuez00_bglt BgL_arg1335z00_2229;

																	BgL_arg1335z00_2229 =
																		(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					BgL_alphaz00_2226)))->BgL_valuez00);
																	{	/* Ast/substitute.scm 74 */
																		bool_t BgL_res1796z00_2230;

																		BgL_res1796z00_2230 =
																			BGl_isazf3zf3zz__objectz00(
																			((obj_t) BgL_arg1335z00_2229),
																			BGl_funz00zzast_varz00);
																		BgL_test1903z00_2765 = BgL_res1796z00_2230;
																	}
																}
																if (BgL_test1903z00_2765)
																	{	/* Ast/substitute.scm 74 */
																		if (
																			(BgL_sitez00_2103 ==
																				CNST_TABLE_REF(((long) 3))))
																			{	/* Ast/substitute.scm 74 */
																				BgL_test1902z00_2764 = ((bool_t) 0);
																			}
																		else
																			{	/* Ast/substitute.scm 74 */
																				BgL_test1902z00_2764 = ((bool_t) 1);
																			}
																	}
																else
																	{	/* Ast/substitute.scm 74 */
																		BgL_test1902z00_2764 = ((bool_t) 0);
																	}
															}
															if (BgL_test1902z00_2764)
																{	/* Ast/substitute.scm 75 */
																	BgL_closurez00_bglt BgL_new1105z00_2231;

																	{	/* Ast/substitute.scm 76 */
																		BgL_closurez00_bglt BgL_new1104z00_2232;

																		BgL_new1104z00_2232 =
																			((BgL_closurez00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_closurez00_bgl))));
																		{	/* Ast/substitute.scm 76 */
																			long BgL_arg1331z00_2233;

																			{	/* Ast/substitute.scm 76 */
																				long BgL_res1797z00_2234;

																				BgL_res1797z00_2234 =
																					BGL_CLASS_INDEX
																					(BGl_closurez00zzast_nodez00);
																				BgL_arg1331z00_2233 =
																					BgL_res1797z00_2234;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1104z00_2232),
																				BgL_arg1331z00_2233);
																		}
																		BgL_new1105z00_2231 = BgL_new1104z00_2232;
																	}
																	((((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						BgL_new1105z00_2231)))->
																			BgL_locz00) =
																		((obj_t) (((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt) (
																								(BgL_varz00_bglt)
																								BgL_nodez00_2102))))->
																				BgL_locz00)), BUNSPEC);
																	{
																		BgL_typez00_bglt BgL_auxz00_2782;

																		{	/* Ast/substitute.scm 77 */
																			BgL_typez00_bglt BgL_arg1330z00_2235;

																			BgL_arg1330z00_2235 =
																				(((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							((BgL_varz00_bglt)
																								BgL_nodez00_2102))))->
																				BgL_typez00);
																			BgL_auxz00_2782 =
																				BGl_strictzd2nodezd2typez00zzast_nodez00
																				(((BgL_typez00_bglt)
																					BGl_za2procedureza2z00zztype_cachez00),
																				BgL_arg1330z00_2235);
																		}
																		((((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							BgL_new1105z00_2231)))->
																				BgL_typez00) =
																			((BgL_typez00_bglt) BgL_auxz00_2782),
																			BUNSPEC);
																	}
																	((((BgL_varz00_bglt) COBJECT(
																					((BgL_varz00_bglt)
																						BgL_new1105z00_2231)))->
																			BgL_variablez00) =
																		((BgL_variablez00_bglt) (
																				(BgL_variablez00_bglt)
																				BgL_alphaz00_2226)), BUNSPEC);
																	BgL_auxz00_2746 =
																		((obj_t) BgL_new1105z00_2231);
																}
															else
																{	/* Ast/substitute.scm 79 */
																	BgL_varz00_bglt BgL_new1107z00_2236;

																	{	/* Ast/substitute.scm 80 */
																		BgL_varz00_bglt BgL_new1106z00_2237;

																		BgL_new1106z00_2237 =
																			((BgL_varz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_varz00_bgl))));
																		{	/* Ast/substitute.scm 80 */
																			long BgL_arg1334z00_2238;

																			{	/* Ast/substitute.scm 80 */
																				long BgL_res1798z00_2239;

																				BgL_res1798z00_2239 =
																					BGL_CLASS_INDEX
																					(BGl_varz00zzast_nodez00);
																				BgL_arg1334z00_2238 =
																					BgL_res1798z00_2239;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1106z00_2237),
																				BgL_arg1334z00_2238);
																		}
																		BgL_new1107z00_2236 = BgL_new1106z00_2237;
																	}
																	((((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						BgL_new1107z00_2236)))->
																			BgL_locz00) =
																		((obj_t) (((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt) (
																								(BgL_varz00_bglt)
																								BgL_nodez00_2102))))->
																				BgL_locz00)), BUNSPEC);
																	((((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt)
																						BgL_new1107z00_2236)))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt) (
																								(BgL_varz00_bglt)
																								BgL_nodez00_2102))))->
																				BgL_typez00)), BUNSPEC);
																	((((BgL_varz00_bglt)
																				COBJECT(BgL_new1107z00_2236))->
																			BgL_variablez00) =
																		((BgL_variablez00_bglt) (
																				(BgL_variablez00_bglt)
																				BgL_alphaz00_2226)), BUNSPEC);
																	BgL_auxz00_2746 =
																		((obj_t) BgL_new1107z00_2236);
													}}}
												else
													{	/* Ast/substitute.scm 72 */
														if (BGl_isazf3zf3zz__objectz00(BgL_alphaz00_2226,
																BGl_atomz00zzast_nodez00))
															{	/* Ast/substitute.scm 83 */
																BgL_auxz00_2746 = BgL_alphaz00_2226;
															}
														else
															{	/* Ast/substitute.scm 86 */
																obj_t BgL_arg1337z00_2240;

																BgL_arg1337z00_2240 =
																	BGl_shapez00zztools_shapez00(
																	((obj_t)
																		((BgL_varz00_bglt) BgL_nodez00_2102)));
																BgL_auxz00_2746 =
																	BGl_internalzd2errorzd2zztools_errorz00
																	(BGl_string1839z00zzast_substitutez00,
																	BGl_string1840z00zzast_substitutez00,
																	BgL_arg1337z00_2240);
															}
													}
											}
									}
								return ((BgL_nodez00_bglt) BgL_auxz00_2746);
							}
						}
					}
				}
			}
		}

	}



/* &do-substitute!-atom1254 */
	BgL_nodez00_bglt
		BGl_z62dozd2substitutez12zd2atom1254z70zzast_substitutez00(obj_t
		BgL_envz00_2104, obj_t BgL_nodez00_2105, obj_t BgL_sitez00_2106)
	{
		{	/* Ast/substitute.scm 57 */
			return ((BgL_nodez00_bglt) ((BgL_atomz00_bglt) BgL_nodez00_2105));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_substitutez00()
	{
		{	/* Ast/substitute.scm 14 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1841z00zzast_substitutez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1841z00zzast_substitutez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1841z00zzast_substitutez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1841z00zzast_substitutez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1841z00zzast_substitutez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1841z00zzast_substitutez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1841z00zzast_substitutez00));
			BGl_modulezd2initializa7ationz75zzast_applyz00(((long) 277780822),
				BSTRING_TO_STRING(BGl_string1841z00zzast_substitutez00));
			BGl_modulezd2initializa7ationz75zzast_appz00(((long) 449859289),
				BSTRING_TO_STRING(BGl_string1841z00zzast_substitutez00));
			return
				BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1841z00zzast_substitutez00));
		}

	}

#ifdef __cplusplus
}
#endif
