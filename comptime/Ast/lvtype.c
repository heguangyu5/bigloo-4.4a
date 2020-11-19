/*===========================================================================*/
/*   (Ast/lvtype.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/lvtype.scm) */
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

	typedef struct BgL_retblockz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}                  *BgL_retblockz00_bglt;

	typedef struct BgL_returnz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_retblockz00_bgl *BgL_blockz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                *BgL_returnz00_bglt;

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
	static obj_t
		BGl_z62lvtypezd2nodez12zd2setzd2exzd21285z70zzast_lvtypez00(obj_t, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	static obj_t
		BGl_setzd2variablezd2typez12z12zzast_lvtypez00(BgL_variablez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_z62lvtypezd2nodez12zd2letzd2var1283za2zzast_lvtypez00(obj_t,
		obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_z62lvtypezd2nodez12zd2closure1256z70zzast_lvtypez00(obj_t,
		obj_t);
	static obj_t BGl_z62lvtypezd2nodez12zd2boxzd2set1295za2zzast_lvtypez00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzast_lvtypez00();
	static obj_t BGl_z62lvtypezd2nodez12zd2sync1260z70zzast_lvtypez00(obj_t,
		obj_t);
	static obj_t BGl_z62lvtypezd2nodez12zd2fail1277z70zzast_lvtypez00(obj_t,
		obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_lvtypezd2nodezd2zzast_lvtypez00(BgL_nodez00_bglt);
	static obj_t BGl_z62lvtypezd2nodez12zd2sequenc1258z70zzast_lvtypez00(obj_t,
		obj_t);
	static obj_t BGl_z62lvtypezd2nodez12zd2switch1279z70zzast_lvtypez00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzast_lvtypez00();
	extern obj_t BGl_externz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static BgL_nodez00_bglt BGl_z62lvtypezd2nodezb0zzast_lvtypez00(obj_t, obj_t);
	static obj_t BGl_z62lvtypezd2nodez121247za2zzast_lvtypez00(obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_z62lvtypezd2nodez12zd2jumpzd2ex1287za2zzast_lvtypez00(obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_lvtypez00();
	BGL_EXPORTED_DECL obj_t BGl_lvtypezd2astz12zc0zzast_lvtypez00(obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lvtypezd2nodez12zd2app1262z70zzast_lvtypez00(obj_t,
		obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_z62lvtypezd2astz12za2zzast_lvtypez00(obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_returnz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzast_lvtypez00 = BUNSPEC;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	static obj_t BGl_z62lvtypezd2nodez12zd2funcall1266z70zzast_lvtypez00(obj_t,
		obj_t);
	static obj_t BGl_z62lvtypezd2nodez12zd2conditi1275z70zzast_lvtypez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lvtypezd2nodez12zd2retbloc1289z70zzast_lvtypez00(obj_t,
		obj_t);
	static obj_t BGl_z62lvtypezd2nodez12zd2cast1270z70zzast_lvtypez00(obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zzast_lvtypez00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lvtypezd2nodez12zd2appzd2ly1264za2zzast_lvtypez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_nodez00_bglt);
	static obj_t BGl_genericzd2initzd2zzast_lvtypez00();
	static obj_t BGl_z62lvtypezd2nodez12zd2setq1273z70zzast_lvtypez00(obj_t,
		obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static obj_t BGl_z62lvtypezd2nodez12zd2boxzd2ref1297za2zzast_lvtypez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62lvtypezd2nodez12zd2extern1268z70zzast_lvtypez00(obj_t,
		obj_t);
	static obj_t BGl_z62lvtypezd2nodez12zd2return1291z70zzast_lvtypez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static bool_t BGl_lvtypezd2nodeza2z12z62zzast_lvtypez00(obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_z62lvtypezd2nodez12zd2makezd2bo1293za2zzast_lvtypez00(obj_t,
		obj_t);
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt,
		bool_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	static obj_t BGl_z62lvtypezd2nodez12za2zzast_lvtypez00(obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzast_lvtypez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_lvtypez00();
	static obj_t BGl_z62lvtypezd2nodez12zd2var1254z70zzast_lvtypez00(obj_t,
		obj_t);
	static obj_t BGl_z62lvtypezd2nodez12zd2atom1250z70zzast_lvtypez00(obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_lvtypez00();
	static obj_t BGl_z62lvtypezd2nodez12zd2kwote1252z70zzast_lvtypez00(obj_t,
		obj_t);
	extern obj_t BGl_retblockz00zzast_nodez00;
	static obj_t BGl_z62lvtypezd2nodez12zd2letzd2fun1281za2zzast_lvtypez00(obj_t,
		obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	static obj_t BGl_getzd2objzd2typez00zzast_lvtypez00(BgL_nodez00_bglt);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t __cnst[1];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_lvtypezd2nodezd2envz00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1763z00, BGl_z62lvtypezd2nodezb0zzast_lvtypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1729z00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1764z00,
		BGl_z62lvtypezd2nodez121247za2zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1732z00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1765z00,
		BGl_z62lvtypezd2nodez12zd2atom1250z70zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1734z00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1766z00,
		BGl_z62lvtypezd2nodez12zd2kwote1252z70zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1735z00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1767z00,
		BGl_z62lvtypezd2nodez12zd2var1254z70zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1736z00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1768z00,
		BGl_z62lvtypezd2nodez12zd2closure1256z70zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1737z00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1769z00,
		BGl_z62lvtypezd2nodez12zd2sequenc1258z70zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1738z00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1770z00,
		BGl_z62lvtypezd2nodez12zd2sync1260z70zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1739z00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1771z00,
		BGl_z62lvtypezd2nodez12zd2app1262z70zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1740z00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1772z00,
		BGl_z62lvtypezd2nodez12zd2appzd2ly1264za2zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1741z00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1773z00,
		BGl_z62lvtypezd2nodez12zd2funcall1266z70zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1742z00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1774z00,
		BGl_z62lvtypezd2nodez12zd2extern1268z70zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1743z00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1775z00,
		BGl_z62lvtypezd2nodez12zd2cast1270z70zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1744z00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1776z00,
		BGl_z62lvtypezd2nodez12zd2setq1273z70zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1745z00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1777z00,
		BGl_z62lvtypezd2nodez12zd2conditi1275z70zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1746z00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1778z00,
		BGl_z62lvtypezd2nodez12zd2fail1277z70zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1747z00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1779z00,
		BGl_z62lvtypezd2nodez12zd2switch1279z70zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1748z00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1780z00,
		BGl_z62lvtypezd2nodez12zd2letzd2fun1281za2zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1749z00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1781z00,
		BGl_z62lvtypezd2nodez12zd2letzd2var1283za2zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1750z00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1782z00,
		BGl_z62lvtypezd2nodez12zd2setzd2exzd21285z70zzast_lvtypez00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1751z00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1783z00,
		BGl_z62lvtypezd2nodez12zd2jumpzd2ex1287za2zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1752z00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1784z00,
		BGl_z62lvtypezd2nodez12zd2retbloc1289z70zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1753z00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1785z00,
		BGl_z62lvtypezd2nodez12zd2return1291z70zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1754z00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1786z00,
		BGl_z62lvtypezd2nodez12zd2makezd2bo1293za2zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1755z00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1787z00,
		BGl_z62lvtypezd2nodez12zd2boxzd2set1295za2zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1756z00zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1788z00,
		BGl_z62lvtypezd2nodez12zd2boxzd2ref1297za2zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_lvtypezd2astz12zd2envz12zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2astza71789za7,
		BGl_z62lvtypezd2astz12za2zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
		BgL_bgl_za762lvtypeza7d2node1790z00,
		BGl_z62lvtypezd2nodez12za2zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1730z00zzast_lvtypez00,
		BgL_bgl_string1730za700za7za7a1791za7, "lvtype-node!1247", 16);
	      DEFINE_STRING(BGl_string1731z00zzast_lvtypez00,
		BgL_bgl_string1731za700za7za7a1792za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1733z00zzast_lvtypez00,
		BgL_bgl_string1733za700za7za7a1793za7, "lvtype-node!", 12);
	      DEFINE_STRING(BGl_string1757z00zzast_lvtypez00,
		BgL_bgl_string1757za700za7za7a1794za7, "Unexpected closure", 18);
	      DEFINE_STRING(BGl_string1758z00zzast_lvtypez00,
		BgL_bgl_string1758za700za7za7a1795za7, "ast_lvtype", 10);
	      DEFINE_STRING(BGl_string1759z00zzast_lvtypez00,
		BgL_bgl_string1759za700za7za7a1796za7, "lvtype-node!1247 ", 17);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzast_lvtypez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long
		BgL_checksumz00_1974, char *BgL_fromz00_1975)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_lvtypez00))
				{
					BGl_requirezd2initializa7ationz75zzast_lvtypez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_lvtypez00();
					BGl_libraryzd2moduleszd2initz00zzast_lvtypez00();
					BGl_cnstzd2initzd2zzast_lvtypez00();
					BGl_importedzd2moduleszd2initz00zzast_lvtypez00();
					BGl_genericzd2initzd2zzast_lvtypez00();
					BGl_methodzd2initzd2zzast_lvtypez00();
					return BGl_toplevelzd2initzd2zzast_lvtypez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_lvtypez00()
	{
		{	/* Ast/lvtype.scm 16 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_lvtype");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_lvtype");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_lvtype");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_lvtype");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_lvtype");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"ast_lvtype");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "ast_lvtype");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_lvtype");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_lvtype");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_lvtypez00()
	{
		{	/* Ast/lvtype.scm 16 */
			{	/* Ast/lvtype.scm 16 */
				obj_t BgL_cportz00_1903;

				{	/* Ast/lvtype.scm 16 */
					obj_t BgL_stringz00_1911;

					BgL_stringz00_1911 = BGl_string1759z00zzast_lvtypez00;
					{	/* Ast/lvtype.scm 16 */
						obj_t BgL_startz00_1912;

						BgL_startz00_1912 = BINT(((long) 0));
						{	/* Ast/lvtype.scm 16 */
							obj_t BgL_endz00_1913;

							BgL_endz00_1913 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1911)));
							{	/* Ast/lvtype.scm 16 */

								BgL_cportz00_1903 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1911, BgL_startz00_1912, BgL_endz00_1913);
				}}}}
				{
					long BgL_iz00_1904;

					BgL_iz00_1904 = ((long) 0);
				BgL_loopz00_1905:
					if ((BgL_iz00_1904 == ((long) -1)))
						{	/* Ast/lvtype.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Ast/lvtype.scm 16 */
							{	/* Ast/lvtype.scm 16 */
								obj_t BgL_arg1761z00_1907;

								{	/* Ast/lvtype.scm 16 */

									{	/* Ast/lvtype.scm 16 */
										obj_t BgL_locationz00_1909;

										BgL_locationz00_1909 = BBOOL(((bool_t) 0));
										{	/* Ast/lvtype.scm 16 */

											BgL_arg1761z00_1907 =
												BGl_readz00zz__readerz00(BgL_cportz00_1903,
												BgL_locationz00_1909);
										}
									}
								}
								{	/* Ast/lvtype.scm 16 */
									int BgL_tmpz00_2004;

									BgL_tmpz00_2004 = (int) (BgL_iz00_1904);
									CNST_TABLE_SET(BgL_tmpz00_2004, BgL_arg1761z00_1907);
							}}
							{	/* Ast/lvtype.scm 16 */
								int BgL_auxz00_1910;

								BgL_auxz00_1910 = (int) ((BgL_iz00_1904 - ((long) 1)));
								{
									long BgL_iz00_2009;

									BgL_iz00_2009 = (long) (BgL_auxz00_1910);
									BgL_iz00_1904 = BgL_iz00_2009;
									goto BgL_loopz00_1905;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_lvtypez00()
	{
		{	/* Ast/lvtype.scm 16 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_lvtypez00()
	{
		{	/* Ast/lvtype.scm 16 */
			return BUNSPEC;
		}

	}



/* lvtype-ast! */
	BGL_EXPORTED_DEF obj_t BGl_lvtypezd2astz12zc0zzast_lvtypez00(obj_t
		BgL_astz00_3)
	{
		{	/* Ast/lvtype.scm 32 */
			{
				obj_t BgL_l1234z00_1356;

				BgL_l1234z00_1356 = BgL_astz00_3;
			BgL_zc3z04anonymousza31301ze3z87_1357:
				if (PAIRP(BgL_l1234z00_1356))
					{	/* Ast/lvtype.scm 33 */
						{	/* Ast/lvtype.scm 34 */
							obj_t BgL_gz00_1359;

							BgL_gz00_1359 = CAR(BgL_l1234z00_1356);
							{	/* Ast/lvtype.scm 34 */
								obj_t BgL_arg1303z00_1360;

								BgL_arg1303z00_1360 =
									(((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt)
												(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_globalz00_bglt) BgL_gz00_1359))))->
													BgL_valuez00))))->BgL_bodyz00);
								BGl_lvtypezd2nodez12zc0zzast_lvtypez00(((BgL_nodez00_bglt)
										BgL_arg1303z00_1360));
							}
						}
						{
							obj_t BgL_l1234z00_2022;

							BgL_l1234z00_2022 = CDR(BgL_l1234z00_1356);
							BgL_l1234z00_1356 = BgL_l1234z00_2022;
							goto BgL_zc3z04anonymousza31301ze3z87_1357;
						}
					}
				else
					{	/* Ast/lvtype.scm 33 */
						((bool_t) 1);
					}
			}
			return BgL_astz00_3;
		}

	}



/* &lvtype-ast! */
	obj_t BGl_z62lvtypezd2astz12za2zzast_lvtypez00(obj_t BgL_envz00_1822,
		obj_t BgL_astz00_1823)
	{
		{	/* Ast/lvtype.scm 32 */
			return BGl_lvtypezd2astz12zc0zzast_lvtypez00(BgL_astz00_1823);
		}

	}



/* get-obj-type */
	obj_t BGl_getzd2objzd2typez00zzast_lvtypez00(BgL_nodez00_bglt BgL_nodez00_4)
	{
		{	/* Ast/lvtype.scm 41 */
			{	/* Ast/lvtype.scm 42 */
				BgL_typez00_bglt BgL_tyz00_1364;

				BgL_tyz00_1364 =
					BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_4, ((bool_t) 0));
				if ((((obj_t) BgL_tyz00_1364) == BGl_za2_za2z00zztype_cachez00))
					{	/* Ast/lvtype.scm 43 */
						return BGl_za2objza2z00zztype_cachez00;
					}
				else
					{	/* Ast/lvtype.scm 43 */
						return ((obj_t) BgL_tyz00_1364);
					}
			}
		}

	}



/* lvtype-node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_lvtypezd2nodezd2zzast_lvtypez00(BgL_nodez00_bglt BgL_nodez00_5)
	{
		{	/* Ast/lvtype.scm 50 */
			BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_nodez00_5);
			return BgL_nodez00_5;
		}

	}



/* &lvtype-node */
	BgL_nodez00_bglt BGl_z62lvtypezd2nodezb0zzast_lvtypez00(obj_t BgL_envz00_1824,
		obj_t BgL_nodez00_1825)
	{
		{	/* Ast/lvtype.scm 50 */
			return
				BGl_lvtypezd2nodezd2zzast_lvtypez00(
				((BgL_nodez00_bglt) BgL_nodez00_1825));
		}

	}



/* lvtype-node*! */
	bool_t BGl_lvtypezd2nodeza2z12z62zzast_lvtypez00(obj_t BgL_nodeza2za2_31)
	{
		{	/* Ast/lvtype.scm 267 */
			{
				obj_t BgL_l1245z00_1367;

				BgL_l1245z00_1367 = BgL_nodeza2za2_31;
			BgL_zc3z04anonymousza31308ze3z87_1368:
				if (PAIRP(BgL_l1245z00_1367))
					{	/* Ast/lvtype.scm 268 */
						{	/* Ast/lvtype.scm 268 */
							obj_t BgL_arg1310z00_1370;

							BgL_arg1310z00_1370 = CAR(BgL_l1245z00_1367);
							BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
								((BgL_nodez00_bglt) BgL_arg1310z00_1370));
						}
						{
							obj_t BgL_l1245z00_2038;

							BgL_l1245z00_2038 = CDR(BgL_l1245z00_1367);
							BgL_l1245z00_1367 = BgL_l1245z00_2038;
							goto BgL_zc3z04anonymousza31308ze3z87_1368;
						}
					}
				else
					{	/* Ast/lvtype.scm 268 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* set-variable-type! */
	obj_t BGl_setzd2variablezd2typez12z12zzast_lvtypez00(BgL_variablez00_bglt
		BgL_variablez00_32, BgL_typez00_bglt BgL_typez00_33)
	{
		{	/* Ast/lvtype.scm 273 */
			{	/* Ast/lvtype.scm 274 */
				obj_t BgL_ntypez00_1373;
				BgL_typez00_bglt BgL_otypez00_1374;

				if ((((obj_t) BgL_typez00_33) == BGl_za2_za2z00zztype_cachez00))
					{	/* Ast/lvtype.scm 274 */
						BgL_ntypez00_1373 = BGl_za2objza2z00zztype_cachez00;
					}
				else
					{	/* Ast/lvtype.scm 274 */
						BgL_ntypez00_1373 = ((obj_t) BgL_typez00_33);
					}
				BgL_otypez00_1374 =
					(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_32))->BgL_typez00);
				if ((((obj_t) BgL_otypez00_1374) == BGl_za2_za2z00zztype_cachez00))
					{	/* Ast/lvtype.scm 276 */
						return
							((((BgL_variablez00_bglt) COBJECT(BgL_variablez00_32))->
								BgL_typez00) =
							((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_ntypez00_1373)),
							BUNSPEC);
					}
				else
					{	/* Ast/lvtype.scm 276 */
						return BFALSE;
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_lvtypez00()
	{
		{	/* Ast/lvtype.scm 16 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_lvtypez00()
	{
		{	/* Ast/lvtype.scm 16 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_proc1729z00zzast_lvtypez00, BGl_nodez00zzast_nodez00,
				BGl_string1730z00zzast_lvtypez00);
		}

	}



/* &lvtype-node!1247 */
	obj_t BGl_z62lvtypezd2nodez121247za2zzast_lvtypez00(obj_t BgL_envz00_1827,
		obj_t BgL_nodez00_1828)
	{
		{	/* Ast/lvtype.scm 57 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
				BGl_string1731z00zzast_lvtypez00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_1828)));
		}

	}



/* lvtype-node! */
	BGL_EXPORTED_DEF obj_t BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_nodez00_bglt
		BgL_nodez00_6)
	{
		{	/* Ast/lvtype.scm 57 */
			{	/* Ast/lvtype.scm 57 */
				obj_t BgL_method1248z00_1381;

				{	/* Ast/lvtype.scm 57 */
					obj_t BgL_res1725z00_1795;

					{	/* Ast/lvtype.scm 57 */
						long BgL_objzd2classzd2numz00_1760;

						{	/* Ast/lvtype.scm 57 */
							long BgL_res1715z00_1763;

							BgL_res1715z00_1763 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_6));
							BgL_objzd2classzd2numz00_1760 = BgL_res1715z00_1763;
						}
						{	/* Ast/lvtype.scm 57 */
							obj_t BgL_arg1813z00_1761;

							BgL_arg1813z00_1761 =
								PROCEDURE_REF(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
								(int) (((long) 1)));
							{	/* Ast/lvtype.scm 57 */
								int BgL_offsetz00_1765;

								BgL_offsetz00_1765 = (int) (BgL_objzd2classzd2numz00_1760);
								{	/* Ast/lvtype.scm 57 */
									long BgL_offsetz00_1766;

									BgL_offsetz00_1766 =
										((long) (BgL_offsetz00_1765) - OBJECT_TYPE);
									{	/* Ast/lvtype.scm 57 */
										long BgL_modz00_1767;

										BgL_modz00_1767 =
											(BgL_offsetz00_1766 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/lvtype.scm 57 */
											long BgL_restz00_1769;

											BgL_restz00_1769 =
												(BgL_offsetz00_1766 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/lvtype.scm 57 */

												{	/* Ast/lvtype.scm 57 */
													obj_t BgL_bucketz00_1771;

													BgL_bucketz00_1771 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1761), BgL_modz00_1767);
													BgL_res1725z00_1795 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1771), BgL_restz00_1769);
					}}}}}}}}
					BgL_method1248z00_1381 = BgL_res1725z00_1795;
				}
				return
					PROCEDURE_ENTRY(BgL_method1248z00_1381) (BgL_method1248z00_1381,
					((obj_t) BgL_nodez00_6), BEOA);
			}
		}

	}



/* &lvtype-node! */
	obj_t BGl_z62lvtypezd2nodez12za2zzast_lvtypez00(obj_t BgL_envz00_1829,
		obj_t BgL_nodez00_1830)
	{
		{	/* Ast/lvtype.scm 57 */
			return
				BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				((BgL_nodez00_bglt) BgL_nodez00_1830));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_lvtypez00()
	{
		{	/* Ast/lvtype.scm 16 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00, BGl_atomz00zzast_nodez00,
				BGl_proc1732z00zzast_lvtypez00, BGl_string1733z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_kwotez00zzast_nodez00, BGl_proc1734z00zzast_lvtypez00,
				BGl_string1733z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00, BGl_varz00zzast_nodez00,
				BGl_proc1735z00zzast_lvtypez00, BGl_string1733z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_closurez00zzast_nodez00, BGl_proc1736z00zzast_lvtypez00,
				BGl_string1733z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_sequencez00zzast_nodez00, BGl_proc1737z00zzast_lvtypez00,
				BGl_string1733z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00, BGl_syncz00zzast_nodez00,
				BGl_proc1738z00zzast_lvtypez00, BGl_string1733z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00, BGl_appz00zzast_nodez00,
				BGl_proc1739z00zzast_lvtypez00, BGl_string1733z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1740z00zzast_lvtypez00,
				BGl_string1733z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_funcallz00zzast_nodez00, BGl_proc1741z00zzast_lvtypez00,
				BGl_string1733z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_externz00zzast_nodez00, BGl_proc1742z00zzast_lvtypez00,
				BGl_string1733z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00, BGl_castz00zzast_nodez00,
				BGl_proc1743z00zzast_lvtypez00, BGl_string1733z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00, BGl_setqz00zzast_nodez00,
				BGl_proc1744z00zzast_lvtypez00, BGl_string1733z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1745z00zzast_lvtypez00,
				BGl_string1733z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00, BGl_failz00zzast_nodez00,
				BGl_proc1746z00zzast_lvtypez00, BGl_string1733z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_switchz00zzast_nodez00, BGl_proc1747z00zzast_lvtypez00,
				BGl_string1733z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1748z00zzast_lvtypez00,
				BGl_string1733z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1749z00zzast_lvtypez00,
				BGl_string1733z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc1750z00zzast_lvtypez00,
				BGl_string1733z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc1751z00zzast_lvtypez00,
				BGl_string1733z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_retblockz00zzast_nodez00, BGl_proc1752z00zzast_lvtypez00,
				BGl_string1733z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_returnz00zzast_nodez00, BGl_proc1753z00zzast_lvtypez00,
				BGl_string1733z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1754z00zzast_lvtypez00,
				BGl_string1733z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1755z00zzast_lvtypez00,
				BGl_string1733z00zzast_lvtypez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1756z00zzast_lvtypez00,
				BGl_string1733z00zzast_lvtypez00);
		}

	}



/* &lvtype-node!-box-ref1297 */
	obj_t BGl_z62lvtypezd2nodez12zd2boxzd2ref1297za2zzast_lvtypez00(obj_t
		BgL_envz00_1855, obj_t BgL_nodez00_1856)
	{
		{	/* Ast/lvtype.scm 260 */
			{	/* Ast/lvtype.scm 262 */
				BgL_varz00_bglt BgL_arg1537z00_1918;

				BgL_arg1537z00_1918 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_nodez00_1856)))->BgL_varz00);
				return
					BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
					((BgL_nodez00_bglt) BgL_arg1537z00_1918));
			}
		}

	}



/* &lvtype-node!-box-set1295 */
	obj_t BGl_z62lvtypezd2nodez12zd2boxzd2set1295za2zzast_lvtypez00(obj_t
		BgL_envz00_1857, obj_t BgL_nodez00_1858)
	{
		{	/* Ast/lvtype.scm 252 */
			{	/* Ast/lvtype.scm 254 */
				BgL_varz00_bglt BgL_arg1528z00_1920;

				BgL_arg1528z00_1920 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_1858)))->BgL_varz00);
				BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
					((BgL_nodez00_bglt) BgL_arg1528z00_1920));
			}
			return
				BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_1858)))->BgL_valuez00));
		}

	}



/* &lvtype-node!-make-bo1293 */
	obj_t BGl_z62lvtypezd2nodez12zd2makezd2bo1293za2zzast_lvtypez00(obj_t
		BgL_envz00_1859, obj_t BgL_nodez00_1860)
	{
		{	/* Ast/lvtype.scm 245 */
			return
				BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_1860)))->BgL_valuez00));
		}

	}



/* &lvtype-node!-return1291 */
	obj_t BGl_z62lvtypezd2nodez12zd2return1291z70zzast_lvtypez00(obj_t
		BgL_envz00_1861, obj_t BgL_nodez00_1862)
	{
		{	/* Ast/lvtype.scm 238 */
			return
				BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				(((BgL_returnz00_bglt) COBJECT(
							((BgL_returnz00_bglt) BgL_nodez00_1862)))->BgL_valuez00));
		}

	}



/* &lvtype-node!-retbloc1289 */
	obj_t BGl_z62lvtypezd2nodez12zd2retbloc1289z70zzast_lvtypez00(obj_t
		BgL_envz00_1863, obj_t BgL_nodez00_1864)
	{
		{	/* Ast/lvtype.scm 231 */
			return
				BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				(((BgL_retblockz00_bglt) COBJECT(
							((BgL_retblockz00_bglt) BgL_nodez00_1864)))->BgL_bodyz00));
		}

	}



/* &lvtype-node!-jump-ex1287 */
	obj_t BGl_z62lvtypezd2nodez12zd2jumpzd2ex1287za2zzast_lvtypez00(obj_t
		BgL_envz00_1865, obj_t BgL_nodez00_1866)
	{
		{	/* Ast/lvtype.scm 223 */
			BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_1866)))->BgL_exitz00));
			return
				BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_1866)))->BgL_valuez00));
		}

	}



/* &lvtype-node!-set-ex-1285 */
	obj_t BGl_z62lvtypezd2nodez12zd2setzd2exzd21285z70zzast_lvtypez00(obj_t
		BgL_envz00_1867, obj_t BgL_nodez00_1868)
	{
		{	/* Ast/lvtype.scm 215 */
			BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_1868)))->BgL_bodyz00));
			{	/* Ast/lvtype.scm 218 */
				BgL_varz00_bglt BgL_arg1489z00_1926;

				BgL_arg1489z00_1926 =
					(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_1868)))->BgL_varz00);
				return
					BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
					((BgL_nodez00_bglt) BgL_arg1489z00_1926));
			}
		}

	}



/* &lvtype-node!-let-var1283 */
	obj_t BGl_z62lvtypezd2nodez12zd2letzd2var1283za2zzast_lvtypez00(obj_t
		BgL_envz00_1869, obj_t BgL_nodez00_1870)
	{
		{	/* Ast/lvtype.scm 200 */
			{	/* Ast/lvtype.scm 202 */
				obj_t BgL_g1244z00_1928;

				BgL_g1244z00_1928 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_1870)))->BgL_bindingsz00);
				{
					obj_t BgL_l1242z00_1930;

					BgL_l1242z00_1930 = BgL_g1244z00_1928;
				BgL_zc3z04anonymousza31450ze3z87_1929:
					if (PAIRP(BgL_l1242z00_1930))
						{	/* Ast/lvtype.scm 202 */
							{	/* Ast/lvtype.scm 203 */
								obj_t BgL_bindingz00_1931;

								BgL_bindingz00_1931 = CAR(BgL_l1242z00_1930);
								{	/* Ast/lvtype.scm 203 */
									obj_t BgL_varz00_1932;
									obj_t BgL_valz00_1933;

									BgL_varz00_1932 = CAR(((obj_t) BgL_bindingz00_1931));
									BgL_valz00_1933 = CDR(((obj_t) BgL_bindingz00_1931));
									BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
										((BgL_nodez00_bglt) BgL_valz00_1933));
									{	/* Ast/lvtype.scm 206 */
										BgL_typez00_bglt BgL_arg1461z00_1934;

										BgL_arg1461z00_1934 =
											BGl_getzd2typezd2zztype_typeofz00(
											((BgL_nodez00_bglt) BgL_valz00_1933), ((bool_t) 0));
										BGl_setzd2variablezd2typez12z12zzast_lvtypez00(
											((BgL_variablez00_bglt) BgL_varz00_1932),
											BgL_arg1461z00_1934);
									}
								}
							}
							{
								obj_t BgL_l1242z00_2159;

								BgL_l1242z00_2159 = CDR(BgL_l1242z00_1930);
								BgL_l1242z00_1930 = BgL_l1242z00_2159;
								goto BgL_zc3z04anonymousza31450ze3z87_1929;
							}
						}
					else
						{	/* Ast/lvtype.scm 202 */
							((bool_t) 1);
						}
				}
			}
			BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_1870)))->BgL_bodyz00));
			{	/* Ast/lvtype.scm 209 */
				bool_t BgL_test1805z00_2164;

				{	/* Ast/lvtype.scm 209 */
					BgL_typez00_bglt BgL_arg1476z00_1935;

					BgL_arg1476z00_1935 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_letzd2varzd2_bglt) BgL_nodez00_1870))))->BgL_typez00);
					BgL_test1805z00_2164 =
						(((obj_t) BgL_arg1476z00_1935) == BGl_za2_za2z00zztype_cachez00);
				}
				if (BgL_test1805z00_2164)
					{
						BgL_typez00_bglt BgL_auxz00_2170;

						{	/* Ast/lvtype.scm 210 */
							BgL_nodez00_bglt BgL_arg1474z00_1936;

							BgL_arg1474z00_1936 =
								(((BgL_letzd2varzd2_bglt) COBJECT(
										((BgL_letzd2varzd2_bglt) BgL_nodez00_1870)))->BgL_bodyz00);
							BgL_auxz00_2170 =
								((BgL_typez00_bglt)
								BGl_getzd2objzd2typez00zzast_lvtypez00(BgL_arg1474z00_1936));
						}
						return
							((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_letzd2varzd2_bglt) BgL_nodez00_1870))))->
								BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_2170), BUNSPEC);
					}
				else
					{	/* Ast/lvtype.scm 209 */
						return BFALSE;
					}
			}
		}

	}



/* &lvtype-node!-let-fun1281 */
	obj_t BGl_z62lvtypezd2nodez12zd2letzd2fun1281za2zzast_lvtypez00(obj_t
		BgL_envz00_1871, obj_t BgL_nodez00_1872)
	{
		{	/* Ast/lvtype.scm 188 */
			{	/* Ast/lvtype.scm 190 */
				obj_t BgL_g1241z00_1938;

				BgL_g1241z00_1938 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_1872)))->BgL_localsz00);
				{
					obj_t BgL_l1239z00_1940;

					BgL_l1239z00_1940 = BgL_g1241z00_1938;
				BgL_zc3z04anonymousza31397ze3z87_1939:
					if (PAIRP(BgL_l1239z00_1940))
						{	/* Ast/lvtype.scm 190 */
							{	/* Ast/lvtype.scm 191 */
								obj_t BgL_localz00_1941;

								BgL_localz00_1941 = CAR(BgL_l1239z00_1940);
								{	/* Ast/lvtype.scm 191 */
									obj_t BgL_arg1417z00_1942;

									BgL_arg1417z00_1942 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt)
													(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt) BgL_localz00_1941))))->
														BgL_valuez00))))->BgL_bodyz00);
									BGl_lvtypezd2nodez12zc0zzast_lvtypez00(((BgL_nodez00_bglt)
											BgL_arg1417z00_1942));
								}
							}
							{
								obj_t BgL_l1239z00_2190;

								BgL_l1239z00_2190 = CDR(BgL_l1239z00_1940);
								BgL_l1239z00_1940 = BgL_l1239z00_2190;
								goto BgL_zc3z04anonymousza31397ze3z87_1939;
							}
						}
					else
						{	/* Ast/lvtype.scm 190 */
							((bool_t) 1);
						}
				}
			}
			BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_1872)))->BgL_bodyz00));
			{	/* Ast/lvtype.scm 194 */
				bool_t BgL_test1807z00_2195;

				{	/* Ast/lvtype.scm 194 */
					BgL_typez00_bglt BgL_arg1449z00_1943;

					BgL_arg1449z00_1943 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_letzd2funzd2_bglt) BgL_nodez00_1872))))->BgL_typez00);
					BgL_test1807z00_2195 =
						(((obj_t) BgL_arg1449z00_1943) == BGl_za2_za2z00zztype_cachez00);
				}
				if (BgL_test1807z00_2195)
					{
						BgL_typez00_bglt BgL_auxz00_2201;

						{	/* Ast/lvtype.scm 195 */
							BgL_nodez00_bglt BgL_arg1448z00_1944;

							BgL_arg1448z00_1944 =
								(((BgL_letzd2funzd2_bglt) COBJECT(
										((BgL_letzd2funzd2_bglt) BgL_nodez00_1872)))->BgL_bodyz00);
							BgL_auxz00_2201 =
								((BgL_typez00_bglt)
								BGl_getzd2objzd2typez00zzast_lvtypez00(BgL_arg1448z00_1944));
						}
						return
							((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_letzd2funzd2_bglt) BgL_nodez00_1872))))->
								BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_2201), BUNSPEC);
					}
				else
					{	/* Ast/lvtype.scm 194 */
						return BFALSE;
					}
			}
		}

	}



/* &lvtype-node!-switch1279 */
	obj_t BGl_z62lvtypezd2nodez12zd2switch1279z70zzast_lvtypez00(obj_t
		BgL_envz00_1873, obj_t BgL_nodez00_1874)
	{
		{	/* Ast/lvtype.scm 178 */
			BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_1874)))->BgL_testz00));
			{	/* Ast/lvtype.scm 181 */
				obj_t BgL_g1238z00_1946;

				BgL_g1238z00_1946 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_1874)))->BgL_clausesz00);
				{
					obj_t BgL_l1236z00_1948;

					{	/* Ast/lvtype.scm 181 */
						bool_t BgL_tmpz00_2214;

						BgL_l1236z00_1948 = BgL_g1238z00_1946;
					BgL_zc3z04anonymousza31386ze3z87_1947:
						if (PAIRP(BgL_l1236z00_1948))
							{	/* Ast/lvtype.scm 181 */
								{	/* Ast/lvtype.scm 182 */
									obj_t BgL_clausez00_1949;

									BgL_clausez00_1949 = CAR(BgL_l1236z00_1948);
									{	/* Ast/lvtype.scm 182 */
										obj_t BgL_arg1394z00_1950;

										BgL_arg1394z00_1950 = CDR(((obj_t) BgL_clausez00_1949));
										BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
											((BgL_nodez00_bglt) BgL_arg1394z00_1950));
									}
								}
								{
									obj_t BgL_l1236z00_2222;

									BgL_l1236z00_2222 = CDR(BgL_l1236z00_1948);
									BgL_l1236z00_1948 = BgL_l1236z00_2222;
									goto BgL_zc3z04anonymousza31386ze3z87_1947;
								}
							}
						else
							{	/* Ast/lvtype.scm 181 */
								BgL_tmpz00_2214 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_2214);
					}
				}
			}
		}

	}



/* &lvtype-node!-fail1277 */
	obj_t BGl_z62lvtypezd2nodez12zd2fail1277z70zzast_lvtypez00(obj_t
		BgL_envz00_1875, obj_t BgL_nodez00_1876)
	{
		{	/* Ast/lvtype.scm 169 */
			BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_1876)))->BgL_procz00));
			BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_1876)))->BgL_msgz00));
			return
				BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_1876)))->BgL_objz00));
		}

	}



/* &lvtype-node!-conditi1275 */
	obj_t BGl_z62lvtypezd2nodez12zd2conditi1275z70zzast_lvtypez00(obj_t
		BgL_envz00_1877, obj_t BgL_nodez00_1878)
	{
		{	/* Ast/lvtype.scm 158 */
			BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_1878)))->BgL_testz00));
			BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_1878)))->BgL_truez00));
			BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_1878)))->BgL_falsez00));
			{	/* Ast/lvtype.scm 163 */
				bool_t BgL_test1812z00_2243;

				{	/* Ast/lvtype.scm 163 */
					BgL_typez00_bglt BgL_arg1381z00_1953;

					BgL_arg1381z00_1953 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_conditionalz00_bglt) BgL_nodez00_1878))))->BgL_typez00);
					BgL_test1812z00_2243 =
						(((obj_t) BgL_arg1381z00_1953) == BGl_za2_za2z00zztype_cachez00);
				}
				if (BgL_test1812z00_2243)
					{	/* Ast/lvtype.scm 163 */
						return
							((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_conditionalz00_bglt) BgL_nodez00_1878))))->
								BgL_typez00) =
							((BgL_typez00_bglt) ((BgL_typez00_bglt)
									BGl_getzd2objzd2typez00zzast_lvtypez00(((BgL_nodez00_bglt) (
												(BgL_conditionalz00_bglt) BgL_nodez00_1878))))),
							BUNSPEC);
					}
				else
					{	/* Ast/lvtype.scm 163 */
						return BFALSE;
					}
			}
		}

	}



/* &lvtype-node!-setq1273 */
	obj_t BGl_z62lvtypezd2nodez12zd2setq1273z70zzast_lvtypez00(obj_t
		BgL_envz00_1879, obj_t BgL_nodez00_1880)
	{
		{	/* Ast/lvtype.scm 150 */
			BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_1880)))->BgL_valuez00));
			{	/* Ast/lvtype.scm 153 */
				BgL_varz00_bglt BgL_arg1363z00_1955;

				BgL_arg1363z00_1955 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_1880)))->BgL_varz00);
				return
					BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
					((BgL_nodez00_bglt) BgL_arg1363z00_1955));
			}
		}

	}



/* &lvtype-node!-cast1270 */
	obj_t BGl_z62lvtypezd2nodez12zd2cast1270z70zzast_lvtypez00(obj_t
		BgL_envz00_1881, obj_t BgL_nodez00_1882)
	{
		{	/* Ast/lvtype.scm 143 */
			return
				BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_1882)))->BgL_argz00));
		}

	}



/* &lvtype-node!-extern1268 */
	obj_t BGl_z62lvtypezd2nodez12zd2extern1268z70zzast_lvtypez00(obj_t
		BgL_envz00_1883, obj_t BgL_nodez00_1884)
	{
		{	/* Ast/lvtype.scm 134 */
			BGl_lvtypezd2nodeza2z12z62zzast_lvtypez00(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_1884)))->BgL_exprza2za2));
			{	/* Ast/lvtype.scm 137 */
				bool_t BgL_test1813z00_2269;

				{	/* Ast/lvtype.scm 137 */
					BgL_typez00_bglt BgL_arg1357z00_1958;

					BgL_arg1357z00_1958 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_externz00_bglt) BgL_nodez00_1884))))->BgL_typez00);
					BgL_test1813z00_2269 =
						(((obj_t) BgL_arg1357z00_1958) == BGl_za2_za2z00zztype_cachez00);
				}
				if (BgL_test1813z00_2269)
					{	/* Ast/lvtype.scm 137 */
						return
							((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_externz00_bglt) BgL_nodez00_1884))))->BgL_typez00) =
							((BgL_typez00_bglt) ((BgL_typez00_bglt)
									BGl_getzd2objzd2typez00zzast_lvtypez00(((BgL_nodez00_bglt) (
												(BgL_externz00_bglt) BgL_nodez00_1884))))), BUNSPEC);
					}
				else
					{	/* Ast/lvtype.scm 137 */
						return BFALSE;
					}
			}
		}

	}



/* &lvtype-node!-funcall1266 */
	obj_t BGl_z62lvtypezd2nodez12zd2funcall1266z70zzast_lvtypez00(obj_t
		BgL_envz00_1885, obj_t BgL_nodez00_1886)
	{
		{	/* Ast/lvtype.scm 126 */
			BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_1886)))->BgL_funz00));
			{	/* Ast/lvtype.scm 129 */
				obj_t BgL_arg1348z00_1960;

				BgL_arg1348z00_1960 =
					(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_1886)))->BgL_argsz00);
				return
					BBOOL(BGl_lvtypezd2nodeza2z12z62zzast_lvtypez00(BgL_arg1348z00_1960));
			}
		}

	}



/* &lvtype-node!-app-ly1264 */
	obj_t BGl_z62lvtypezd2nodez12zd2appzd2ly1264za2zzast_lvtypez00(obj_t
		BgL_envz00_1887, obj_t BgL_nodez00_1888)
	{
		{	/* Ast/lvtype.scm 118 */
			BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_1888)))->BgL_funz00));
			return
				BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_1888)))->BgL_argz00));
		}

	}



/* &lvtype-node!-app1262 */
	obj_t BGl_z62lvtypezd2nodez12zd2app1262z70zzast_lvtypez00(obj_t
		BgL_envz00_1889, obj_t BgL_nodez00_1890)
	{
		{	/* Ast/lvtype.scm 109 */
			BGl_lvtypezd2nodeza2z12z62zzast_lvtypez00(
				(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_1890)))->BgL_argsz00));
			{	/* Ast/lvtype.scm 112 */
				bool_t BgL_test1814z00_2298;

				{	/* Ast/lvtype.scm 112 */
					BgL_typez00_bglt BgL_arg1344z00_1963;

					BgL_arg1344z00_1963 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_nodez00_1890))))->BgL_typez00);
					BgL_test1814z00_2298 =
						(((obj_t) BgL_arg1344z00_1963) == BGl_za2_za2z00zztype_cachez00);
				}
				if (BgL_test1814z00_2298)
					{	/* Ast/lvtype.scm 112 */
						return
							((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_appz00_bglt) BgL_nodez00_1890))))->BgL_typez00) =
							((BgL_typez00_bglt) ((BgL_typez00_bglt)
									BGl_getzd2objzd2typez00zzast_lvtypez00(((BgL_nodez00_bglt) (
												(BgL_appz00_bglt) BgL_nodez00_1890))))), BUNSPEC);
					}
				else
					{	/* Ast/lvtype.scm 112 */
						return BFALSE;
					}
			}
		}

	}



/* &lvtype-node!-sync1260 */
	obj_t BGl_z62lvtypezd2nodez12zd2sync1260z70zzast_lvtypez00(obj_t
		BgL_envz00_1891, obj_t BgL_nodez00_1892)
	{
		{	/* Ast/lvtype.scm 98 */
			BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_1892)))->BgL_mutexz00));
			BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_1892)))->BgL_prelockz00));
			BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_1892)))->BgL_bodyz00));
			{	/* Ast/lvtype.scm 103 */
				bool_t BgL_test1815z00_2320;

				{	/* Ast/lvtype.scm 103 */
					BgL_typez00_bglt BgL_arg1334z00_1965;

					BgL_arg1334z00_1965 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_syncz00_bglt) BgL_nodez00_1892))))->BgL_typez00);
					BgL_test1815z00_2320 =
						(((obj_t) BgL_arg1334z00_1965) == BGl_za2_za2z00zztype_cachez00);
				}
				if (BgL_test1815z00_2320)
					{	/* Ast/lvtype.scm 103 */
						return
							((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_syncz00_bglt) BgL_nodez00_1892))))->BgL_typez00) =
							((BgL_typez00_bglt) ((BgL_typez00_bglt)
									BGl_getzd2objzd2typez00zzast_lvtypez00(((BgL_nodez00_bglt) (
												(BgL_syncz00_bglt) BgL_nodez00_1892))))), BUNSPEC);
					}
				else
					{	/* Ast/lvtype.scm 103 */
						return BFALSE;
					}
			}
		}

	}



/* &lvtype-node!-sequenc1258 */
	obj_t BGl_z62lvtypezd2nodez12zd2sequenc1258z70zzast_lvtypez00(obj_t
		BgL_envz00_1893, obj_t BgL_nodez00_1894)
	{
		{	/* Ast/lvtype.scm 89 */
			BGl_lvtypezd2nodeza2z12z62zzast_lvtypez00(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_1894)))->BgL_nodesz00));
			{	/* Ast/lvtype.scm 92 */
				bool_t BgL_test1816z00_2336;

				{	/* Ast/lvtype.scm 92 */
					BgL_typez00_bglt BgL_arg1327z00_1967;

					BgL_arg1327z00_1967 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_sequencez00_bglt) BgL_nodez00_1894))))->BgL_typez00);
					BgL_test1816z00_2336 =
						(((obj_t) BgL_arg1327z00_1967) == BGl_za2_za2z00zztype_cachez00);
				}
				if (BgL_test1816z00_2336)
					{	/* Ast/lvtype.scm 92 */
						return
							((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_sequencez00_bglt) BgL_nodez00_1894))))->
								BgL_typez00) =
							((BgL_typez00_bglt) ((BgL_typez00_bglt)
									BGl_getzd2objzd2typez00zzast_lvtypez00(((BgL_nodez00_bglt) (
												(BgL_sequencez00_bglt) BgL_nodez00_1894))))), BUNSPEC);
					}
				else
					{	/* Ast/lvtype.scm 92 */
						return BFALSE;
					}
			}
		}

	}



/* &lvtype-node!-closure1256 */
	obj_t BGl_z62lvtypezd2nodez12zd2closure1256z70zzast_lvtypez00(obj_t
		BgL_envz00_1895, obj_t BgL_nodez00_1896)
	{
		{	/* Ast/lvtype.scm 83 */
			{	/* Ast/lvtype.scm 84 */
				obj_t BgL_arg1322z00_1969;

				BgL_arg1322z00_1969 =
					BGl_shapez00zztools_shapez00(
					((obj_t) ((BgL_closurez00_bglt) BgL_nodez00_1896)));
				return
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string1733z00zzast_lvtypez00, BGl_string1757z00zzast_lvtypez00,
					BgL_arg1322z00_1969);
			}
		}

	}



/* &lvtype-node!-var1254 */
	obj_t BGl_z62lvtypezd2nodez12zd2var1254z70zzast_lvtypez00(obj_t
		BgL_envz00_1897, obj_t BgL_nodez00_1898)
	{
		{	/* Ast/lvtype.scm 74 */
			{	/* Ast/lvtype.scm 76 */
				bool_t BgL_test1817z00_2353;

				{	/* Ast/lvtype.scm 76 */
					BgL_typez00_bglt BgL_arg1319z00_1971;

					BgL_arg1319z00_1971 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_varz00_bglt) BgL_nodez00_1898))))->BgL_typez00);
					BgL_test1817z00_2353 =
						(((obj_t) BgL_arg1319z00_1971) == BGl_za2_za2z00zztype_cachez00);
				}
				if (BgL_test1817z00_2353)
					{	/* Ast/lvtype.scm 76 */
						((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_varz00_bglt) BgL_nodez00_1898))))->BgL_typez00) =
							((BgL_typez00_bglt) (((BgL_variablez00_bglt)
										COBJECT((((BgL_varz00_bglt) COBJECT(((BgL_varz00_bglt)
															BgL_nodez00_1898)))->BgL_variablez00)))->
									BgL_typez00)), BUNSPEC);
					}
				else
					{	/* Ast/lvtype.scm 76 */
						BFALSE;
					}
			}
			return ((obj_t) ((BgL_varz00_bglt) BgL_nodez00_1898));
		}

	}



/* &lvtype-node!-kwote1252 */
	obj_t BGl_z62lvtypezd2nodez12zd2kwote1252z70zzast_lvtypez00(obj_t
		BgL_envz00_1899, obj_t BgL_nodez00_1900)
	{
		{	/* Ast/lvtype.scm 68 */
			return ((obj_t) ((BgL_kwotez00_bglt) BgL_nodez00_1900));
		}

	}



/* &lvtype-node!-atom1250 */
	obj_t BGl_z62lvtypezd2nodez12zd2atom1250z70zzast_lvtypez00(obj_t
		BgL_envz00_1901, obj_t BgL_nodez00_1902)
	{
		{	/* Ast/lvtype.scm 62 */
			return ((obj_t) ((BgL_atomz00_bglt) BgL_nodez00_1902));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_lvtypez00()
	{
		{	/* Ast/lvtype.scm 16 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1758z00zzast_lvtypez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1758z00zzast_lvtypez00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string1758z00zzast_lvtypez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1758z00zzast_lvtypez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1758z00zzast_lvtypez00));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string1758z00zzast_lvtypez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1758z00zzast_lvtypez00));
			return
				BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1758z00zzast_lvtypez00));
		}

	}

#ifdef __cplusplus
}
#endif
