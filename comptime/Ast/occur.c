/*===========================================================================*/
/*   (Ast/occur.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/occur.scm) */
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

	typedef struct BgL_scnstz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_nodez00;
		obj_t BgL_classz00;
		obj_t BgL_locz00;
	}               *BgL_scnstz00_bglt;

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

	typedef struct BgL_atomz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}              *BgL_atomz00_bglt;

	typedef struct BgL_patchz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
		struct BgL_varz00_bgl *BgL_refz00;
		long BgL_indexz00;
		obj_t BgL_patchidz00;
	}               *BgL_patchz00_bglt;

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

	typedef struct BgL_pragmaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_formatz00;
	}                *BgL_pragmaz00_bglt;

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


	static obj_t BGl_z62occurzd2nodez12zd2switch1289z70zzast_occurz00(obj_t,
		obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_occurzd2nodezd2inz12z12zzast_occurz00(BgL_nodez00_bglt,
		BgL_globalz00_bglt);
	static obj_t BGl_objectzd2initzd2zzast_occurz00();
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_z62occurzd2nodez12zd2jumpzd2exzd21297z70zzast_occurz00(obj_t,
		obj_t);
	static obj_t BGl_z62occurzd2nodez12zd2letzd2fun1291za2zzast_occurz00(obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_occurz00();
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_z62occurzd2nodez12zd2app1271z70zzast_occurz00(obj_t, obj_t);
	static obj_t BGl_z62occurzd2nodez12zd2sequence1267z70zzast_occurz00(obj_t,
		obj_t);
	static obj_t BGl_z62occurzd2nodez12zd2sync1269z70zzast_occurz00(obj_t, obj_t);
	static obj_t BGl_z62occurzd2nodez12zd2fail1287z70zzast_occurz00(obj_t, obj_t);
	static obj_t BGl_z62occurzd2nodez12zd2boxzd2ref1305za2zzast_occurz00(obj_t,
		obj_t);
	extern obj_t BGl_pragmaz00zzast_nodez00;
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_z62occurzd2nodez12zd2letzd2var1293za2zzast_occurz00(obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_occurz00();
	static obj_t BGl_z62occurzd2nodez12zd2patch1265z70zzast_occurz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_occurzd2nodez12zc0zzast_occurz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_z62occurzd2nodez12zd2appzd2ly1273za2zzast_occurz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_patchz00zzast_nodez00;
	static obj_t BGl_z62occurzd2nodezd2inz12z70zzast_occurz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_returnz00zzast_nodez00;
	static obj_t BGl_z62occurzd2nodez12zd2extern1277z70zzast_occurz00(obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_occurz00 = BUNSPEC;
	static obj_t BGl_za2globalza2z00zzast_occurz00 = BUNSPEC;
	static obj_t BGl_z62occurzd2nodez121260za2zzast_occurz00(obj_t, obj_t);
	static obj_t BGl_z62occurzd2nodez12za2zzast_occurz00(obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62occurzd2nodez12zd2setzd2exzd2i1295z70zzast_occurz00(obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zzast_occurz00();
	static obj_t BGl_z62occurzd2nodez12zd2conditio1285z70zzast_occurz00(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzast_occurz00();
	static obj_t BGl_z62occurzd2nodez12zd2var1263z70zzast_occurz00(obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_z62zc3z04anonymousza31313ze3ze5zzast_occurz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62occurzd2nodez12zd2cast1281z70zzast_occurz00(obj_t, obj_t);
	static obj_t BGl_z62occurzd2nodez12zd2setq1283z70zzast_occurz00(obj_t, obj_t);
	static obj_t BGl_z62occurzd2nodez12zd2pragma1279z70zzast_occurz00(obj_t,
		obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_z62occurzd2varzb0zzast_occurz00(obj_t, obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_z62occurzd2nodez12zd2funcall1275z70zzast_occurz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_occurz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
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
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_occurzd2varzd2zzast_occurz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_occurz00();
	static obj_t BGl_z62occurzd2nodez12zd2retblock1299z70zzast_occurz00(obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_occurz00();
	extern obj_t BGl_scnstz00zzast_varz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzast_occurz00();
	extern obj_t BGl_retblockz00zzast_nodez00;
	static obj_t BGl_z62occurzd2nodez12zd2return1301z70zzast_occurz00(obj_t,
		obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static bool_t BGl_occurzd2nodeza2z12z62zzast_occurz00(obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	static obj_t BGl_z62occurzd2nodez12zd2boxzd2setz121307zb0zzast_occurz00(obj_t,
		obj_t);
	static obj_t BGl_z62occurzd2nodez12zd2makezd2box1303za2zzast_occurz00(obj_t,
		obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t __cnst[3];


	   
		 
		DEFINE_STRING(BGl_string1815z00zzast_occurz00,
		BgL_bgl_string1815za700za7za7a1822za7, "ast_occur", 9);
	      DEFINE_STRING(BGl_string1816z00zzast_occurz00,
		BgL_bgl_string1816za700za7za7a1823za7, "read write done ", 16);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1788z00zzast_occurz00,
		BgL_bgl_za762za7c3za704anonymo1824za7,
		BGl_z62zc3z04anonymousza31313ze3ze5zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1789z00zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71825za7,
		BGl_z62occurzd2nodez121260za2zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1791z00zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71826za7,
		BGl_z62occurzd2nodez12zd2var1263z70zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1793z00zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71827za7,
		BGl_z62occurzd2nodez12zd2patch1265z70zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1794z00zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71828za7,
		BGl_z62occurzd2nodez12zd2sequence1267z70zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1795z00zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71829za7,
		BGl_z62occurzd2nodez12zd2sync1269z70zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1796z00zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71830za7,
		BGl_z62occurzd2nodez12zd2app1271z70zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1797z00zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71831za7,
		BGl_z62occurzd2nodez12zd2appzd2ly1273za2zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1798z00zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71832za7,
		BGl_z62occurzd2nodez12zd2funcall1275z70zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1799z00zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71833za7,
		BGl_z62occurzd2nodez12zd2extern1277z70zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_occurzd2varzd2envz00zzast_occurz00,
		BgL_bgl_za762occurza7d2varza7b1834za7, BGl_z62occurzd2varzb0zzast_occurz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1800z00zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71835za7,
		BGl_z62occurzd2nodez12zd2pragma1279z70zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1801z00zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71836za7,
		BGl_z62occurzd2nodez12zd2cast1281z70zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1802z00zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71837za7,
		BGl_z62occurzd2nodez12zd2setq1283z70zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1803z00zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71838za7,
		BGl_z62occurzd2nodez12zd2conditio1285z70zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1804z00zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71839za7,
		BGl_z62occurzd2nodez12zd2fail1287z70zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1805z00zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71840za7,
		BGl_z62occurzd2nodez12zd2switch1289z70zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1806z00zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71841za7,
		BGl_z62occurzd2nodez12zd2letzd2fun1291za2zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1807z00zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71842za7,
		BGl_z62occurzd2nodez12zd2letzd2var1293za2zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1808z00zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71843za7,
		BGl_z62occurzd2nodez12zd2setzd2exzd2i1295z70zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1809z00zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71844za7,
		BGl_z62occurzd2nodez12zd2jumpzd2exzd21297z70zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1810z00zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71845za7,
		BGl_z62occurzd2nodez12zd2retblock1299z70zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1811z00zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71846za7,
		BGl_z62occurzd2nodez12zd2return1301z70zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1812z00zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71847za7,
		BGl_z62occurzd2nodez12zd2makezd2box1303za2zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1813z00zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71848za7,
		BGl_z62occurzd2nodez12zd2boxzd2ref1305za2zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1814z00zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71849za7,
		BGl_z62occurzd2nodez12zd2boxzd2setz121307zb0zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1790z00zzast_occurz00,
		BgL_bgl_string1790za700za7za7a1850za7, "occur-node!1260", 15);
	      DEFINE_STRING(BGl_string1792z00zzast_occurz00,
		BgL_bgl_string1792za700za7za7a1851za7, "occur-node!", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_occurzd2nodezd2inz12zd2envzc0zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71852za7,
		BGl_z62occurzd2nodezd2inz12z70zzast_occurz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
		BgL_bgl_za762occurza7d2nodeza71853za7,
		BGl_z62occurzd2nodez12za2zzast_occurz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzast_occurz00));
		     ADD_ROOT((void *) (&BGl_za2globalza2z00zzast_occurz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_occurz00(long
		BgL_checksumz00_2097, char *BgL_fromz00_2098)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_occurz00))
				{
					BGl_requirezd2initializa7ationz75zzast_occurz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_occurz00();
					BGl_libraryzd2moduleszd2initz00zzast_occurz00();
					BGl_cnstzd2initzd2zzast_occurz00();
					BGl_importedzd2moduleszd2initz00zzast_occurz00();
					BGl_genericzd2initzd2zzast_occurz00();
					BGl_methodzd2initzd2zzast_occurz00();
					return BGl_toplevelzd2initzd2zzast_occurz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_occurz00()
	{
		{	/* Ast/occur.scm 17 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_occur");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_occur");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_occur");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_occur");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"ast_occur");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "ast_occur");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_occur");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_occur");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_occurz00()
	{
		{	/* Ast/occur.scm 17 */
			{	/* Ast/occur.scm 17 */
				obj_t BgL_cportz00_2002;

				{	/* Ast/occur.scm 17 */
					obj_t BgL_stringz00_2010;

					BgL_stringz00_2010 = BGl_string1816z00zzast_occurz00;
					{	/* Ast/occur.scm 17 */
						obj_t BgL_startz00_2011;

						BgL_startz00_2011 = BINT(((long) 0));
						{	/* Ast/occur.scm 17 */
							obj_t BgL_endz00_2012;

							BgL_endz00_2012 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2010)));
							{	/* Ast/occur.scm 17 */

								BgL_cportz00_2002 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2010, BgL_startz00_2011, BgL_endz00_2012);
				}}}}
				{
					long BgL_iz00_2003;

					BgL_iz00_2003 = ((long) 2);
				BgL_loopz00_2004:
					if ((BgL_iz00_2003 == ((long) -1)))
						{	/* Ast/occur.scm 17 */
							return BUNSPEC;
						}
					else
						{	/* Ast/occur.scm 17 */
							{	/* Ast/occur.scm 17 */
								obj_t BgL_arg1820z00_2006;

								{	/* Ast/occur.scm 17 */

									{	/* Ast/occur.scm 17 */
										obj_t BgL_locationz00_2008;

										BgL_locationz00_2008 = BBOOL(((bool_t) 0));
										{	/* Ast/occur.scm 17 */

											BgL_arg1820z00_2006 =
												BGl_readz00zz__readerz00(BgL_cportz00_2002,
												BgL_locationz00_2008);
										}
									}
								}
								{	/* Ast/occur.scm 17 */
									int BgL_tmpz00_2126;

									BgL_tmpz00_2126 = (int) (BgL_iz00_2003);
									CNST_TABLE_SET(BgL_tmpz00_2126, BgL_arg1820z00_2006);
							}}
							{	/* Ast/occur.scm 17 */
								int BgL_auxz00_2009;

								BgL_auxz00_2009 = (int) ((BgL_iz00_2003 - ((long) 1)));
								{
									long BgL_iz00_2131;

									BgL_iz00_2131 = (long) (BgL_auxz00_2009);
									BgL_iz00_2003 = BgL_iz00_2131;
									goto BgL_loopz00_2004;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_occurz00()
	{
		{	/* Ast/occur.scm 17 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_occurz00()
	{
		{	/* Ast/occur.scm 17 */
			BGl_za2globalza2z00zzast_occurz00 = BUNSPEC;
			return BUNSPEC;
		}

	}



/* occur-var */
	BGL_EXPORTED_DEF obj_t BGl_occurzd2varzd2zzast_occurz00(obj_t
		BgL_globalsz00_3)
	{
		{	/* Ast/occur.scm 32 */
			BGl_forzd2eachzd2globalz12z12zzast_envz00(BGl_proc1788z00zzast_occurz00,
				BNIL);
			{
				obj_t BgL_l1235z00_1358;

				BgL_l1235z00_1358 = BgL_globalsz00_3;
			BgL_zc3z04anonymousza31314ze3z87_1359:
				if (PAIRP(BgL_l1235z00_1358))
					{	/* Ast/occur.scm 38 */
						{	/* Ast/occur.scm 39 */
							obj_t BgL_globalz00_1361;

							BgL_globalz00_1361 = CAR(BgL_l1235z00_1358);
							{	/* Ast/occur.scm 39 */
								obj_t BgL_arg1316z00_1362;

								BgL_arg1316z00_1362 =
									(((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt)
												(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_globalz00_bglt) BgL_globalz00_1361))))->
													BgL_valuez00))))->BgL_bodyz00);
								BGl_za2globalza2z00zzast_occurz00 =
									((obj_t) ((BgL_globalz00_bglt) BgL_globalz00_1361));
								BGl_occurzd2nodez12zc0zzast_occurz00(((BgL_nodez00_bglt)
										BgL_arg1316z00_1362));
							}
						}
						{
							obj_t BgL_l1235z00_2147;

							BgL_l1235z00_2147 = CDR(BgL_l1235z00_1358);
							BgL_l1235z00_1358 = BgL_l1235z00_2147;
							goto BgL_zc3z04anonymousza31314ze3z87_1359;
						}
					}
				else
					{	/* Ast/occur.scm 38 */
						((bool_t) 1);
					}
			}
			return BgL_globalsz00_3;
		}

	}



/* &occur-var */
	obj_t BGl_z62occurzd2varzb0zzast_occurz00(obj_t BgL_envz00_1921,
		obj_t BgL_globalsz00_1922)
	{
		{	/* Ast/occur.scm 32 */
			return BGl_occurzd2varzd2zzast_occurz00(BgL_globalsz00_1922);
		}

	}



/* &<@anonymous:1313> */
	obj_t BGl_z62zc3z04anonymousza31313ze3ze5zzast_occurz00(obj_t BgL_envz00_1923,
		obj_t BgL_globalz00_1924)
	{
		{	/* Ast/occur.scm 34 */
			((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								((BgL_globalz00_bglt) BgL_globalz00_1924))))->
					BgL_occurrencez00) = ((long) ((long) 0)), BUNSPEC);
			return ((((BgL_variablez00_bglt)
						COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
									BgL_globalz00_1924))))->BgL_occurrencewz00) =
				((long) ((long) 0)), BUNSPEC);
		}

	}



/* occur-node-in! */
	BGL_EXPORTED_DEF obj_t
		BGl_occurzd2nodezd2inz12z12zzast_occurz00(BgL_nodez00_bglt BgL_nodez00_4,
		BgL_globalz00_bglt BgL_globalz00_5)
	{
		{	/* Ast/occur.scm 46 */
			BGl_za2globalza2z00zzast_occurz00 = ((obj_t) BgL_globalz00_5);
			return BGl_occurzd2nodez12zc0zzast_occurz00(BgL_nodez00_4);
		}

	}



/* &occur-node-in! */
	obj_t BGl_z62occurzd2nodezd2inz12z70zzast_occurz00(obj_t BgL_envz00_1925,
		obj_t BgL_nodez00_1926, obj_t BgL_globalz00_1927)
	{
		{	/* Ast/occur.scm 46 */
			return
				BGl_occurzd2nodezd2inz12z12zzast_occurz00(
				((BgL_nodez00_bglt) BgL_nodez00_1926),
				((BgL_globalz00_bglt) BgL_globalz00_1927));
		}

	}



/* occur-node*! */
	bool_t BGl_occurzd2nodeza2z12z62zzast_occurz00(obj_t BgL_nodeza2za2_30)
	{
		{	/* Ast/occur.scm 284 */
			{
				obj_t BgL_l1258z00_1367;

				BgL_l1258z00_1367 = BgL_nodeza2za2_30;
			BgL_zc3z04anonymousza31320ze3z87_1368:
				if (PAIRP(BgL_l1258z00_1367))
					{	/* Ast/occur.scm 285 */
						{	/* Ast/occur.scm 285 */
							obj_t BgL_arg1322z00_1370;

							BgL_arg1322z00_1370 = CAR(BgL_l1258z00_1367);
							BGl_occurzd2nodez12zc0zzast_occurz00(
								((BgL_nodez00_bglt) BgL_arg1322z00_1370));
						}
						{
							obj_t BgL_l1258z00_2166;

							BgL_l1258z00_2166 = CDR(BgL_l1258z00_1367);
							BgL_l1258z00_1367 = BgL_l1258z00_2166;
							goto BgL_zc3z04anonymousza31320ze3z87_1368;
						}
					}
				else
					{	/* Ast/occur.scm 285 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_occurz00()
	{
		{	/* Ast/occur.scm 17 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_occurz00()
	{
		{	/* Ast/occur.scm 17 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
				BGl_proc1789z00zzast_occurz00, BGl_nodez00zzast_nodez00,
				BGl_string1790z00zzast_occurz00);
		}

	}



/* &occur-node!1260 */
	obj_t BGl_z62occurzd2nodez121260za2zzast_occurz00(obj_t BgL_envz00_1929,
		obj_t BgL_nodez00_1930)
	{
		{	/* Ast/occur.scm 58 */
			return CNST_TABLE_REF(((long) 0));
		}

	}



/* occur-node! */
	BGL_EXPORTED_DEF obj_t BGl_occurzd2nodez12zc0zzast_occurz00(BgL_nodez00_bglt
		BgL_nodez00_6)
	{
		{	/* Ast/occur.scm 58 */
			{	/* Ast/occur.scm 58 */
				obj_t BgL_method1261z00_1377;

				{	/* Ast/occur.scm 58 */
					obj_t BgL_res1772z00_1836;

					{	/* Ast/occur.scm 58 */
						long BgL_objzd2classzd2numz00_1801;

						{	/* Ast/occur.scm 58 */
							long BgL_res1762z00_1804;

							BgL_res1762z00_1804 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_6));
							BgL_objzd2classzd2numz00_1801 = BgL_res1762z00_1804;
						}
						{	/* Ast/occur.scm 58 */
							obj_t BgL_arg1813z00_1802;

							BgL_arg1813z00_1802 =
								PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
								(int) (((long) 1)));
							{	/* Ast/occur.scm 58 */
								int BgL_offsetz00_1806;

								BgL_offsetz00_1806 = (int) (BgL_objzd2classzd2numz00_1801);
								{	/* Ast/occur.scm 58 */
									long BgL_offsetz00_1807;

									BgL_offsetz00_1807 =
										((long) (BgL_offsetz00_1806) - OBJECT_TYPE);
									{	/* Ast/occur.scm 58 */
										long BgL_modz00_1808;

										BgL_modz00_1808 =
											(BgL_offsetz00_1807 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/occur.scm 58 */
											long BgL_restz00_1810;

											BgL_restz00_1810 =
												(BgL_offsetz00_1807 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/occur.scm 58 */

												{	/* Ast/occur.scm 58 */
													obj_t BgL_bucketz00_1812;

													BgL_bucketz00_1812 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1802), BgL_modz00_1808);
													BgL_res1772z00_1836 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1812), BgL_restz00_1810);
					}}}}}}}}
					BgL_method1261z00_1377 = BgL_res1772z00_1836;
				}
				return
					PROCEDURE_ENTRY(BgL_method1261z00_1377) (BgL_method1261z00_1377,
					((obj_t) BgL_nodez00_6), BEOA);
			}
		}

	}



/* &occur-node! */
	obj_t BGl_z62occurzd2nodez12za2zzast_occurz00(obj_t BgL_envz00_1931,
		obj_t BgL_nodez00_1932)
	{
		{	/* Ast/occur.scm 58 */
			return
				BGl_occurzd2nodez12zc0zzast_occurz00(
				((BgL_nodez00_bglt) BgL_nodez00_1932));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_occurz00()
	{
		{	/* Ast/occur.scm 17 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00, BGl_varz00zzast_nodez00,
				BGl_proc1791z00zzast_occurz00, BGl_string1792z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00, BGl_patchz00zzast_nodez00,
				BGl_proc1793z00zzast_occurz00, BGl_string1792z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
				BGl_sequencez00zzast_nodez00, BGl_proc1794z00zzast_occurz00,
				BGl_string1792z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00, BGl_syncz00zzast_nodez00,
				BGl_proc1795z00zzast_occurz00, BGl_string1792z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00, BGl_appz00zzast_nodez00,
				BGl_proc1796z00zzast_occurz00, BGl_string1792z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1797z00zzast_occurz00,
				BGl_string1792z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
				BGl_funcallz00zzast_nodez00, BGl_proc1798z00zzast_occurz00,
				BGl_string1792z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00, BGl_externz00zzast_nodez00,
				BGl_proc1799z00zzast_occurz00, BGl_string1792z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00, BGl_pragmaz00zzast_nodez00,
				BGl_proc1800z00zzast_occurz00, BGl_string1792z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00, BGl_castz00zzast_nodez00,
				BGl_proc1801z00zzast_occurz00, BGl_string1792z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00, BGl_setqz00zzast_nodez00,
				BGl_proc1802z00zzast_occurz00, BGl_string1792z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1803z00zzast_occurz00,
				BGl_string1792z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00, BGl_failz00zzast_nodez00,
				BGl_proc1804z00zzast_occurz00, BGl_string1792z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00, BGl_switchz00zzast_nodez00,
				BGl_proc1805z00zzast_occurz00, BGl_string1792z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1806z00zzast_occurz00,
				BGl_string1792z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1807z00zzast_occurz00,
				BGl_string1792z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc1808z00zzast_occurz00,
				BGl_string1792z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc1809z00zzast_occurz00,
				BGl_string1792z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
				BGl_retblockz00zzast_nodez00, BGl_proc1810z00zzast_occurz00,
				BGl_string1792z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00, BGl_returnz00zzast_nodez00,
				BGl_proc1811z00zzast_occurz00, BGl_string1792z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1812z00zzast_occurz00,
				BGl_string1792z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1813z00zzast_occurz00,
				BGl_string1792z00zzast_occurz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1814z00zzast_occurz00,
				BGl_string1792z00zzast_occurz00);
		}

	}



/* &occur-node!-box-set!1307 */
	obj_t BGl_z62occurzd2nodez12zd2boxzd2setz121307zb0zzast_occurz00(obj_t
		BgL_envz00_1956, obj_t BgL_nodez00_1957)
	{
		{	/* Ast/occur.scm 276 */
			{	/* Ast/occur.scm 278 */
				BgL_varz00_bglt BgL_arg1613z00_2017;

				BgL_arg1613z00_2017 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_1957)))->BgL_varz00);
				BGl_occurzd2nodez12zc0zzast_occurz00(
					((BgL_nodez00_bglt) BgL_arg1613z00_2017));
			}
			return
				BGl_occurzd2nodez12zc0zzast_occurz00(
				(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_1957)))->BgL_valuez00));
		}

	}



/* &occur-node!-box-ref1305 */
	obj_t BGl_z62occurzd2nodez12zd2boxzd2ref1305za2zzast_occurz00(obj_t
		BgL_envz00_1958, obj_t BgL_nodez00_1959)
	{
		{	/* Ast/occur.scm 270 */
			{	/* Ast/occur.scm 271 */
				BgL_varz00_bglt BgL_arg1612z00_2019;

				BgL_arg1612z00_2019 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_nodez00_1959)))->BgL_varz00);
				return
					BGl_occurzd2nodez12zc0zzast_occurz00(
					((BgL_nodez00_bglt) BgL_arg1612z00_2019));
			}
		}

	}



/* &occur-node!-make-box1303 */
	obj_t BGl_z62occurzd2nodez12zd2makezd2box1303za2zzast_occurz00(obj_t
		BgL_envz00_1960, obj_t BgL_nodez00_1961)
	{
		{	/* Ast/occur.scm 264 */
			return
				BGl_occurzd2nodez12zc0zzast_occurz00(
				(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_1961)))->BgL_valuez00));
		}

	}



/* &occur-node!-return1301 */
	obj_t BGl_z62occurzd2nodez12zd2return1301z70zzast_occurz00(obj_t
		BgL_envz00_1962, obj_t BgL_nodez00_1963)
	{
		{	/* Ast/occur.scm 257 */
			return
				BGl_occurzd2nodez12zc0zzast_occurz00(
				(((BgL_returnz00_bglt) COBJECT(
							((BgL_returnz00_bglt) BgL_nodez00_1963)))->BgL_valuez00));
		}

	}



/* &occur-node!-retblock1299 */
	obj_t BGl_z62occurzd2nodez12zd2retblock1299z70zzast_occurz00(obj_t
		BgL_envz00_1964, obj_t BgL_nodez00_1965)
	{
		{	/* Ast/occur.scm 250 */
			return
				BGl_occurzd2nodez12zc0zzast_occurz00(
				(((BgL_retblockz00_bglt) COBJECT(
							((BgL_retblockz00_bglt) BgL_nodez00_1965)))->BgL_bodyz00));
		}

	}



/* &occur-node!-jump-ex-1297 */
	obj_t BGl_z62occurzd2nodez12zd2jumpzd2exzd21297z70zzast_occurz00(obj_t
		BgL_envz00_1966, obj_t BgL_nodez00_1967)
	{
		{	/* Ast/occur.scm 242 */
			BGl_occurzd2nodez12zc0zzast_occurz00(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_1967)))->BgL_exitz00));
			return
				BGl_occurzd2nodez12zc0zzast_occurz00(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_1967)))->BgL_valuez00));
		}

	}



/* &occur-node!-set-ex-i1295 */
	obj_t BGl_z62occurzd2nodez12zd2setzd2exzd2i1295z70zzast_occurz00(obj_t
		BgL_envz00_1968, obj_t BgL_nodez00_1969)
	{
		{	/* Ast/occur.scm 231 */
			{	/* Ast/occur.scm 233 */
				BgL_localz00_bglt BgL_i1117z00_2025;

				BgL_i1117z00_2025 =
					((BgL_localz00_bglt)
					(((BgL_varz00_bglt) COBJECT(
								(((BgL_setzd2exzd2itz00_bglt) COBJECT(
											((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_1969)))->
									BgL_varz00)))->BgL_variablez00));
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_i1117z00_2025)))->BgL_occurrencez00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_i1117z00_2025)))->BgL_occurrencewz00) =
					((long) ((long) 0)), BUNSPEC);
				if (((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_i1117z00_2025)))->BgL_accessz00) ==
						CNST_TABLE_REF(((long) 1))))
					{	/* Ast/occur.scm 236 */
						((((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_i1117z00_2025)))->
								BgL_accessz00) = ((obj_t) CNST_TABLE_REF(((long) 2))), BUNSPEC);
					}
				else
					{	/* Ast/occur.scm 236 */
						BFALSE;
					}
			}
			return
				BGl_occurzd2nodez12zc0zzast_occurz00(
				(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_1969)))->BgL_bodyz00));
		}

	}



/* &occur-node!-let-var1293 */
	obj_t BGl_z62occurzd2nodez12zd2letzd2var1293za2zzast_occurz00(obj_t
		BgL_envz00_1970, obj_t BgL_nodez00_1971)
	{
		{	/* Ast/occur.scm 215 */
			{	/* Ast/occur.scm 217 */
				obj_t BgL_g1254z00_2027;

				BgL_g1254z00_2027 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_1971)))->BgL_bindingsz00);
				{
					obj_t BgL_l1252z00_2029;

					BgL_l1252z00_2029 = BgL_g1254z00_2027;
				BgL_zc3z04anonymousza31574ze3z87_2028:
					if (PAIRP(BgL_l1252z00_2029))
						{	/* Ast/occur.scm 217 */
							{	/* Ast/occur.scm 218 */
								obj_t BgL_bindingz00_2030;

								BgL_bindingz00_2030 = CAR(BgL_l1252z00_2029);
								{	/* Ast/occur.scm 218 */
									BgL_localz00_bglt BgL_i1115z00_2031;

									BgL_i1115z00_2031 =
										((BgL_localz00_bglt) CAR(((obj_t) BgL_bindingz00_2030)));
									((((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_i1115z00_2031)))->
											BgL_occurrencez00) = ((long) ((long) 0)), BUNSPEC);
									((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
														BgL_i1115z00_2031)))->BgL_occurrencewz00) =
										((long) ((long) 0)), BUNSPEC);
									((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
														BgL_i1115z00_2031)))->BgL_accessz00) =
										((obj_t) CNST_TABLE_REF(((long) 2))), BUNSPEC);
							}}
							{
								obj_t BgL_l1252z00_2285;

								BgL_l1252z00_2285 = CDR(BgL_l1252z00_2029);
								BgL_l1252z00_2029 = BgL_l1252z00_2285;
								goto BgL_zc3z04anonymousza31574ze3z87_2028;
							}
						}
					else
						{	/* Ast/occur.scm 217 */
							((bool_t) 1);
						}
				}
			}
			{	/* Ast/occur.scm 223 */
				obj_t BgL_g1257z00_2032;

				BgL_g1257z00_2032 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_1971)))->BgL_bindingsz00);
				{
					obj_t BgL_l1255z00_2034;

					BgL_l1255z00_2034 = BgL_g1257z00_2032;
				BgL_zc3z04anonymousza31579ze3z87_2033:
					if (PAIRP(BgL_l1255z00_2034))
						{	/* Ast/occur.scm 223 */
							{	/* Ast/occur.scm 224 */
								obj_t BgL_bindingz00_2035;

								BgL_bindingz00_2035 = CAR(BgL_l1255z00_2034);
								{	/* Ast/occur.scm 224 */
									obj_t BgL_arg1582z00_2036;

									BgL_arg1582z00_2036 = CDR(((obj_t) BgL_bindingz00_2035));
									BGl_occurzd2nodez12zc0zzast_occurz00(
										((BgL_nodez00_bglt) BgL_arg1582z00_2036));
								}
							}
							{
								obj_t BgL_l1255z00_2296;

								BgL_l1255z00_2296 = CDR(BgL_l1255z00_2034);
								BgL_l1255z00_2034 = BgL_l1255z00_2296;
								goto BgL_zc3z04anonymousza31579ze3z87_2033;
							}
						}
					else
						{	/* Ast/occur.scm 223 */
							((bool_t) 1);
						}
				}
			}
			return
				BGl_occurzd2nodez12zc0zzast_occurz00(
				(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_1971)))->BgL_bodyz00));
		}

	}



/* &occur-node!-let-fun1291 */
	obj_t BGl_z62occurzd2nodez12zd2letzd2fun1291za2zzast_occurz00(obj_t
		BgL_envz00_1972, obj_t BgL_nodez00_1973)
	{
		{	/* Ast/occur.scm 193 */
			{	/* Ast/occur.scm 196 */
				obj_t BgL_g1248z00_2038;

				BgL_g1248z00_2038 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_1973)))->BgL_localsz00);
				{
					obj_t BgL_l1246z00_2040;

					BgL_l1246z00_2040 = BgL_g1248z00_2038;
				BgL_zc3z04anonymousza31522ze3z87_2039:
					if (PAIRP(BgL_l1246z00_2040))
						{	/* Ast/occur.scm 196 */
							{	/* Ast/occur.scm 201 */
								obj_t BgL_localz00_2041;

								BgL_localz00_2041 = CAR(BgL_l1246z00_2040);
								((((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_localz00_2041))))->
										BgL_occurrencez00) = ((long) ((long) 0)), BUNSPEC);
								((((BgL_variablez00_bglt)
											COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
														BgL_localz00_2041))))->BgL_occurrencewz00) =
									((long) ((long) 0)), BUNSPEC);
								if (((((BgL_variablez00_bglt)
												COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
															BgL_localz00_2041))))->BgL_accessz00) ==
										CNST_TABLE_REF(((long) 1))))
									{	/* Ast/occur.scm 201 */
										((((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt) BgL_localz00_2041))))->
												BgL_accessz00) =
											((obj_t) CNST_TABLE_REF(((long) 2))), BUNSPEC);
									}
								else
									{	/* Ast/occur.scm 201 */
										BFALSE;
									}
								{	/* Ast/occur.scm 202 */
									obj_t BgL_g1245z00_2042;

									BgL_g1245z00_2042 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt)
													(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt) BgL_localz00_2041))))->
														BgL_valuez00))))->BgL_argsz00);
									{
										obj_t BgL_l1243z00_2044;

										BgL_l1243z00_2044 = BgL_g1245z00_2042;
									BgL_zc3z04anonymousza31537ze3z87_2043:
										if (PAIRP(BgL_l1243z00_2044))
											{	/* Ast/occur.scm 203 */
												{	/* Ast/occur.scm 202 */
													obj_t BgL_az00_2045;

													BgL_az00_2045 = CAR(BgL_l1243z00_2044);
													((((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt) BgL_az00_2045))))->
															BgL_occurrencez00) =
														((long) ((long) 1)), BUNSPEC);
												}
												{
													obj_t BgL_l1243z00_2333;

													BgL_l1243z00_2333 = CDR(BgL_l1243z00_2044);
													BgL_l1243z00_2044 = BgL_l1243z00_2333;
													goto BgL_zc3z04anonymousza31537ze3z87_2043;
												}
											}
										else
											{	/* Ast/occur.scm 203 */
												((bool_t) 1);
											}
									}
								}
							}
							{
								obj_t BgL_l1246z00_2335;

								BgL_l1246z00_2335 = CDR(BgL_l1246z00_2040);
								BgL_l1246z00_2040 = BgL_l1246z00_2335;
								goto BgL_zc3z04anonymousza31522ze3z87_2039;
							}
						}
					else
						{	/* Ast/occur.scm 196 */
							((bool_t) 1);
						}
				}
			}
			{	/* Ast/occur.scm 205 */
				obj_t BgL_g1251z00_2046;

				BgL_g1251z00_2046 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_1973)))->BgL_localsz00);
				{
					obj_t BgL_l1249z00_2048;

					BgL_l1249z00_2048 = BgL_g1251z00_2046;
				BgL_zc3z04anonymousza31559ze3z87_2047:
					if (PAIRP(BgL_l1249z00_2048))
						{	/* Ast/occur.scm 205 */
							{	/* Ast/occur.scm 206 */
								obj_t BgL_localz00_2049;

								BgL_localz00_2049 = CAR(BgL_l1249z00_2048);
								{	/* Ast/occur.scm 206 */
									long BgL_oldz00_2050;

									BgL_oldz00_2050 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_localz00_2049))))->
										BgL_occurrencez00);
									{	/* Ast/occur.scm 207 */
										obj_t BgL_arg1561z00_2051;

										BgL_arg1561z00_2051 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt)
														(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt) BgL_localz00_2049))))->
															BgL_valuez00))))->BgL_bodyz00);
										BGl_occurzd2nodez12zc0zzast_occurz00(((BgL_nodez00_bglt)
												BgL_arg1561z00_2051));
									}
									((((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt) BgL_localz00_2049))))->
											BgL_occurrencez00) = ((long) BgL_oldz00_2050), BUNSPEC);
							}}
							{
								obj_t BgL_l1249z00_2355;

								BgL_l1249z00_2355 = CDR(BgL_l1249z00_2048);
								BgL_l1249z00_2048 = BgL_l1249z00_2355;
								goto BgL_zc3z04anonymousza31559ze3z87_2047;
							}
						}
					else
						{	/* Ast/occur.scm 205 */
							((bool_t) 1);
						}
				}
			}
			return
				BGl_occurzd2nodez12zc0zzast_occurz00(
				(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_1973)))->BgL_bodyz00));
		}

	}



/* &occur-node!-switch1289 */
	obj_t BGl_z62occurzd2nodez12zd2switch1289z70zzast_occurz00(obj_t
		BgL_envz00_1974, obj_t BgL_nodez00_1975)
	{
		{	/* Ast/occur.scm 183 */
			BGl_occurzd2nodez12zc0zzast_occurz00(
				(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_1975)))->BgL_testz00));
			{	/* Ast/occur.scm 186 */
				obj_t BgL_g1242z00_2053;

				BgL_g1242z00_2053 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_1975)))->BgL_clausesz00);
				{
					obj_t BgL_l1240z00_2055;

					{	/* Ast/occur.scm 186 */
						bool_t BgL_tmpz00_2365;

						BgL_l1240z00_2055 = BgL_g1242z00_2053;
					BgL_zc3z04anonymousza31496ze3z87_2054:
						if (PAIRP(BgL_l1240z00_2055))
							{	/* Ast/occur.scm 186 */
								{	/* Ast/occur.scm 187 */
									obj_t BgL_clausez00_2056;

									BgL_clausez00_2056 = CAR(BgL_l1240z00_2055);
									{	/* Ast/occur.scm 187 */
										obj_t BgL_arg1518z00_2057;

										BgL_arg1518z00_2057 = CDR(((obj_t) BgL_clausez00_2056));
										BGl_occurzd2nodez12zc0zzast_occurz00(
											((BgL_nodez00_bglt) BgL_arg1518z00_2057));
									}
								}
								{
									obj_t BgL_l1240z00_2373;

									BgL_l1240z00_2373 = CDR(BgL_l1240z00_2055);
									BgL_l1240z00_2055 = BgL_l1240z00_2373;
									goto BgL_zc3z04anonymousza31496ze3z87_2054;
								}
							}
						else
							{	/* Ast/occur.scm 186 */
								BgL_tmpz00_2365 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_2365);
					}
				}
			}
		}

	}



/* &occur-node!-fail1287 */
	obj_t BGl_z62occurzd2nodez12zd2fail1287z70zzast_occurz00(obj_t
		BgL_envz00_1976, obj_t BgL_nodez00_1977)
	{
		{	/* Ast/occur.scm 174 */
			BGl_occurzd2nodez12zc0zzast_occurz00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_1977)))->BgL_procz00));
			BGl_occurzd2nodez12zc0zzast_occurz00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_1977)))->BgL_msgz00));
			return
				BGl_occurzd2nodez12zc0zzast_occurz00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_1977)))->BgL_objz00));
		}

	}



/* &occur-node!-conditio1285 */
	obj_t BGl_z62occurzd2nodez12zd2conditio1285z70zzast_occurz00(obj_t
		BgL_envz00_1978, obj_t BgL_nodez00_1979)
	{
		{	/* Ast/occur.scm 165 */
			BGl_occurzd2nodez12zc0zzast_occurz00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_1979)))->BgL_testz00));
			BGl_occurzd2nodez12zc0zzast_occurz00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_1979)))->BgL_truez00));
			return
				BGl_occurzd2nodez12zc0zzast_occurz00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_1979)))->BgL_falsez00));
		}

	}



/* &occur-node!-setq1283 */
	obj_t BGl_z62occurzd2nodez12zd2setq1283z70zzast_occurz00(obj_t
		BgL_envz00_1980, obj_t BgL_nodez00_1981)
	{
		{	/* Ast/occur.scm 154 */
			{	/* Ast/occur.scm 156 */
				BgL_variablez00_bglt BgL_i1108z00_2061;

				BgL_i1108z00_2061 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_setqz00_bglt) COBJECT(
										((BgL_setqz00_bglt) BgL_nodez00_1981)))->BgL_varz00)))->
					BgL_variablez00);
				if (((((BgL_variablez00_bglt) COBJECT(BgL_i1108z00_2061))->
							BgL_accessz00) == CNST_TABLE_REF(((long) 2))))
					{	/* Ast/occur.scm 157 */
						((((BgL_variablez00_bglt) COBJECT(BgL_i1108z00_2061))->
								BgL_accessz00) = ((obj_t) CNST_TABLE_REF(((long) 1))), BUNSPEC);
					}
				else
					{	/* Ast/occur.scm 157 */
						BFALSE;
					}
				((((BgL_variablez00_bglt) COBJECT(BgL_i1108z00_2061))->
						BgL_occurrencewz00) =
					((long) (((long) 1) +
							(((BgL_variablez00_bglt) COBJECT(BgL_i1108z00_2061))->
								BgL_occurrencewz00))), BUNSPEC);
			}
			{	/* Ast/occur.scm 159 */
				BgL_varz00_bglt BgL_arg1462z00_2062;

				BgL_arg1462z00_2062 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_1981)))->BgL_varz00);
				BGl_occurzd2nodez12zc0zzast_occurz00(
					((BgL_nodez00_bglt) BgL_arg1462z00_2062));
			}
			return
				BGl_occurzd2nodez12zc0zzast_occurz00(
				(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_1981)))->BgL_valuez00));
		}

	}



/* &occur-node!-cast1281 */
	obj_t BGl_z62occurzd2nodez12zd2cast1281z70zzast_occurz00(obj_t
		BgL_envz00_1982, obj_t BgL_nodez00_1983)
	{
		{	/* Ast/occur.scm 148 */
			return
				BGl_occurzd2nodez12zc0zzast_occurz00(
				(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_1983)))->BgL_argz00));
		}

	}



/* &occur-node!-pragma1279 */
	obj_t BGl_z62occurzd2nodez12zd2pragma1279z70zzast_occurz00(obj_t
		BgL_envz00_1984, obj_t BgL_nodez00_1985)
	{
		{	/* Ast/occur.scm 134 */
			{

				if (CBOOL(
						(((BgL_nodezf2effectzf2_bglt) COBJECT(
									((BgL_nodezf2effectzf2_bglt)
										((BgL_pragmaz00_bglt) BgL_nodez00_1985))))->
							BgL_sidezd2effectzd2)))
					{	/* Ast/occur.scm 137 */
						obj_t BgL_g1239z00_2067;

						BgL_g1239z00_2067 =
							(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt)
										((BgL_pragmaz00_bglt) BgL_nodez00_1985))))->BgL_exprza2za2);
						{
							obj_t BgL_l1237z00_2069;

							BgL_l1237z00_2069 = BgL_g1239z00_2067;
						BgL_zc3z04anonymousza31390ze3z87_2068:
							if (PAIRP(BgL_l1237z00_2069))
								{	/* Ast/occur.scm 142 */
									{	/* Ast/occur.scm 138 */
										obj_t BgL_nz00_2070;

										BgL_nz00_2070 = CAR(BgL_l1237z00_2069);
										{	/* Ast/occur.scm 138 */
											bool_t BgL_test1869z00_2427;

											if (BGl_isazf3zf3zz__objectz00(BgL_nz00_2070,
													BGl_varz00zzast_nodez00))
												{	/* Ast/occur.scm 138 */
													BgL_variablez00_bglt BgL_arg1418z00_2071;

													BgL_arg1418z00_2071 =
														(((BgL_varz00_bglt) COBJECT(
																((BgL_varz00_bglt) BgL_nz00_2070)))->
														BgL_variablez00);
													{	/* Ast/occur.scm 138 */
														bool_t BgL_res1780z00_2072;

														BgL_res1780z00_2072 =
															BGl_isazf3zf3zz__objectz00(
															((obj_t) BgL_arg1418z00_2071),
															BGl_localz00zzast_varz00);
														BgL_test1869z00_2427 = BgL_res1780z00_2072;
													}
												}
											else
												{	/* Ast/occur.scm 138 */
													BgL_test1869z00_2427 = ((bool_t) 0);
												}
											if (BgL_test1869z00_2427)
												{	/* Ast/occur.scm 139 */
													BgL_localz00_bglt BgL_i1106z00_2073;

													BgL_i1106z00_2073 =
														((BgL_localz00_bglt)
														(((BgL_varz00_bglt) COBJECT(
																	((BgL_varz00_bglt) BgL_nz00_2070)))->
															BgL_variablez00));
													if (((((BgL_variablez00_bglt)
																	COBJECT(((BgL_variablez00_bglt)
																			BgL_i1106z00_2073)))->BgL_accessz00) ==
															CNST_TABLE_REF(((long) 2))))
														{	/* Ast/occur.scm 140 */
															((((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				BgL_i1106z00_2073)))->BgL_accessz00) =
																((obj_t) CNST_TABLE_REF(((long) 1))), BUNSPEC);
														}
													else
														{	/* Ast/occur.scm 140 */
															BFALSE;
														}
												}
											else
												{	/* Ast/occur.scm 138 */
													BFALSE;
												}
										}
									}
									{
										obj_t BgL_l1237z00_2445;

										BgL_l1237z00_2445 = CDR(BgL_l1237z00_2069);
										BgL_l1237z00_2069 = BgL_l1237z00_2445;
										goto BgL_zc3z04anonymousza31390ze3z87_2068;
									}
								}
							else
								{	/* Ast/occur.scm 142 */
									((bool_t) 1);
								}
						}
					}
				else
					{	/* Ast/occur.scm 136 */
						((bool_t) 0);
					}
				{	/* Ast/occur.scm 134 */
					obj_t BgL_nextzd2method1278zd2_2066;

					BgL_nextzd2method1278zd2_2066 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_pragmaz00_bglt) BgL_nodez00_1985)),
						BGl_occurzd2nodez12zd2envz12zzast_occurz00,
						BGl_pragmaz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1278zd2_2066)
						(BgL_nextzd2method1278zd2_2066,
						((obj_t) ((BgL_pragmaz00_bglt) BgL_nodez00_1985)), BEOA);
				}
			}
		}

	}



/* &occur-node!-extern1277 */
	obj_t BGl_z62occurzd2nodez12zd2extern1277z70zzast_occurz00(obj_t
		BgL_envz00_1986, obj_t BgL_nodez00_1987)
	{
		{	/* Ast/occur.scm 126 */
			{	/* Ast/occur.scm 128 */
				obj_t BgL_nodesz00_2075;

				BgL_nodesz00_2075 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_1987)))->BgL_exprza2za2);
				return
					BBOOL(BGl_occurzd2nodeza2z12z62zzast_occurz00(BgL_nodesz00_2075));
			}
		}

	}



/* &occur-node!-funcall1275 */
	obj_t BGl_z62occurzd2nodez12zd2funcall1275z70zzast_occurz00(obj_t
		BgL_envz00_1988, obj_t BgL_nodez00_1989)
	{
		{	/* Ast/occur.scm 118 */
			BGl_occurzd2nodez12zc0zzast_occurz00(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_1989)))->BgL_funz00));
			{	/* Ast/occur.scm 121 */
				obj_t BgL_arg1382z00_2077;

				BgL_arg1382z00_2077 =
					(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_1989)))->BgL_argsz00);
				return
					BBOOL(BGl_occurzd2nodeza2z12z62zzast_occurz00(BgL_arg1382z00_2077));
			}
		}

	}



/* &occur-node!-app-ly1273 */
	obj_t BGl_z62occurzd2nodez12zd2appzd2ly1273za2zzast_occurz00(obj_t
		BgL_envz00_1990, obj_t BgL_nodez00_1991)
	{
		{	/* Ast/occur.scm 110 */
			BGl_occurzd2nodez12zc0zzast_occurz00(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_1991)))->BgL_funz00));
			return
				BGl_occurzd2nodez12zc0zzast_occurz00(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_1991)))->BgL_argz00));
		}

	}



/* &occur-node!-app1271 */
	obj_t BGl_z62occurzd2nodez12zd2app1271z70zzast_occurz00(obj_t BgL_envz00_1992,
		obj_t BgL_nodez00_1993)
	{
		{	/* Ast/occur.scm 102 */
			{	/* Ast/occur.scm 104 */
				BgL_varz00_bglt BgL_arg1367z00_2080;

				BgL_arg1367z00_2080 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_1993)))->BgL_funz00);
				BGl_occurzd2nodez12zc0zzast_occurz00(
					((BgL_nodez00_bglt) BgL_arg1367z00_2080));
			}
			{	/* Ast/occur.scm 105 */
				obj_t BgL_arg1370z00_2081;

				BgL_arg1370z00_2081 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_1993)))->BgL_argsz00);
				return
					BBOOL(BGl_occurzd2nodeza2z12z62zzast_occurz00(BgL_arg1370z00_2081));
			}
		}

	}



/* &occur-node!-sync1269 */
	obj_t BGl_z62occurzd2nodez12zd2sync1269z70zzast_occurz00(obj_t
		BgL_envz00_1994, obj_t BgL_nodez00_1995)
	{
		{	/* Ast/occur.scm 94 */
			BGl_occurzd2nodez12zc0zzast_occurz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_1995)))->BgL_mutexz00));
			BGl_occurzd2nodez12zc0zzast_occurz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_1995)))->BgL_prelockz00));
			return
				BGl_occurzd2nodez12zc0zzast_occurz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_1995)))->BgL_bodyz00));
		}

	}



/* &occur-node!-sequence1267 */
	obj_t BGl_z62occurzd2nodez12zd2sequence1267z70zzast_occurz00(obj_t
		BgL_envz00_1996, obj_t BgL_nodez00_1997)
	{
		{	/* Ast/occur.scm 88 */
			{	/* Ast/occur.scm 89 */
				obj_t BgL_arg1360z00_2084;

				BgL_arg1360z00_2084 =
					(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_1997)))->BgL_nodesz00);
				return
					BBOOL(BGl_occurzd2nodeza2z12z62zzast_occurz00(BgL_arg1360z00_2084));
			}
		}

	}



/* &occur-node!-patch1265 */
	obj_t BGl_z62occurzd2nodez12zd2patch1265z70zzast_occurz00(obj_t
		BgL_envz00_1998, obj_t BgL_nodez00_1999)
	{
		{	/* Ast/occur.scm 75 */
			{	/* Ast/occur.scm 77 */
				bool_t BgL_test1872z00_2494;

				{	/* Ast/occur.scm 77 */
					obj_t BgL_arg1352z00_2086;

					BgL_arg1352z00_2086 =
						(((BgL_atomz00_bglt) COBJECT(
								((BgL_atomz00_bglt)
									((BgL_patchz00_bglt) BgL_nodez00_1999))))->BgL_valuez00);
					BgL_test1872z00_2494 =
						BGl_isazf3zf3zz__objectz00(BgL_arg1352z00_2086,
						BGl_varz00zzast_nodez00);
				}
				if (BgL_test1872z00_2494)
					{	/* Ast/occur.scm 78 */
						BgL_variablez00_bglt BgL_vz00_2087;

						BgL_vz00_2087 =
							(((BgL_varz00_bglt) COBJECT(
									((BgL_varz00_bglt)
										(((BgL_atomz00_bglt) COBJECT(
													((BgL_atomz00_bglt)
														((BgL_patchz00_bglt) BgL_nodez00_1999))))->
											BgL_valuez00))))->BgL_variablez00);
						((((BgL_variablez00_bglt) COBJECT(BgL_vz00_2087))->
								BgL_occurrencewz00) =
							((long) ((((BgL_variablez00_bglt) COBJECT(BgL_vz00_2087))->
										BgL_occurrencewz00) + ((long) 1))), BUNSPEC);
						((((BgL_variablez00_bglt) COBJECT(BgL_vz00_2087))->
								BgL_occurrencez00) =
							((long) ((((BgL_variablez00_bglt) COBJECT(BgL_vz00_2087))->
										BgL_occurrencez00) + ((long) 1))), BUNSPEC);
						{	/* Ast/occur.scm 81 */
							obj_t BgL_vz00_2088;

							BgL_vz00_2088 = CNST_TABLE_REF(((long) 1));
							((((BgL_variablez00_bglt) COBJECT(BgL_vz00_2087))->
									BgL_accessz00) = ((obj_t) BgL_vz00_2088), BUNSPEC);
					}}
				else
					{	/* Ast/occur.scm 82 */
						obj_t BgL_arg1351z00_2089;

						BgL_arg1351z00_2089 =
							(((BgL_atomz00_bglt) COBJECT(
									((BgL_atomz00_bglt)
										((BgL_patchz00_bglt) BgL_nodez00_1999))))->BgL_valuez00);
						BGl_occurzd2nodez12zc0zzast_occurz00(
							((BgL_nodez00_bglt) BgL_arg1351z00_2089));
					}
			}
			{	/* Ast/occur.scm 83 */
				BgL_varz00_bglt BgL_arg1357z00_2090;

				BgL_arg1357z00_2090 =
					(((BgL_patchz00_bglt) COBJECT(
							((BgL_patchz00_bglt) BgL_nodez00_1999)))->BgL_refz00);
				return
					BGl_occurzd2nodez12zc0zzast_occurz00(
					((BgL_nodez00_bglt) BgL_arg1357z00_2090));
			}
		}

	}



/* &occur-node!-var1263 */
	obj_t BGl_z62occurzd2nodez12zd2var1263z70zzast_occurz00(obj_t BgL_envz00_2000,
		obj_t BgL_nodez00_2001)
	{
		{	/* Ast/occur.scm 64 */
			{	/* Ast/occur.scm 65 */
				BgL_variablez00_bglt BgL_vz00_2092;

				BgL_vz00_2092 =
					(((BgL_varz00_bglt) COBJECT(
							((BgL_varz00_bglt) BgL_nodez00_2001)))->BgL_variablez00);
				{	/* Ast/occur.scm 66 */
					BgL_valuez00_bglt BgL_valuez00_2093;

					BgL_valuez00_2093 =
						(((BgL_variablez00_bglt) COBJECT(BgL_vz00_2092))->BgL_valuez00);
					{	/* Ast/occur.scm 67 */
						bool_t BgL_test1873z00_2524;

						{	/* Ast/occur.scm 67 */
							bool_t BgL_test1874z00_2525;

							{	/* Ast/occur.scm 67 */
								bool_t BgL_res1773z00_2094;

								BgL_res1773z00_2094 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_valuez00_2093), BGl_scnstz00zzast_varz00);
								BgL_test1874z00_2525 = BgL_res1773z00_2094;
							}
							if (BgL_test1874z00_2525)
								{	/* Ast/occur.scm 67 */
									obj_t BgL_arg1330z00_2095;

									BgL_arg1330z00_2095 =
										(((BgL_scnstz00_bglt) COBJECT(
												((BgL_scnstz00_bglt) BgL_valuez00_2093)))->BgL_nodez00);
									BgL_test1873z00_2524 =
										BGl_isazf3zf3zz__objectz00(BgL_arg1330z00_2095,
										BGl_nodez00zzast_nodez00);
								}
							else
								{	/* Ast/occur.scm 67 */
									BgL_test1873z00_2524 = ((bool_t) 0);
								}
						}
						if (BgL_test1873z00_2524)
							{	/* Ast/occur.scm 68 */
								obj_t BgL_arg1329z00_2096;

								BgL_arg1329z00_2096 =
									(((BgL_scnstz00_bglt) COBJECT(
											((BgL_scnstz00_bglt) BgL_valuez00_2093)))->BgL_nodez00);
								BGl_occurzd2nodez12zc0zzast_occurz00(
									((BgL_nodez00_bglt) BgL_arg1329z00_2096));
							}
						else
							{	/* Ast/occur.scm 67 */
								BFALSE;
							}
					}
				}
				if ((((obj_t) BgL_vz00_2092) == BGl_za2globalza2z00zzast_occurz00))
					{	/* Ast/occur.scm 69 */
						return BFALSE;
					}
				else
					{	/* Ast/occur.scm 69 */
						return
							((((BgL_variablez00_bglt) COBJECT(BgL_vz00_2092))->
								BgL_occurrencez00) =
							((long) ((((BgL_variablez00_bglt) COBJECT(BgL_vz00_2092))->
										BgL_occurrencez00) + ((long) 1))), BUNSPEC);
		}}}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_occurz00()
	{
		{	/* Ast/occur.scm 17 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1815z00zzast_occurz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1815z00zzast_occurz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1815z00zzast_occurz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1815z00zzast_occurz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1815z00zzast_occurz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1815z00zzast_occurz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1815z00zzast_occurz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string1815z00zzast_occurz00));
			return
				BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string1815z00zzast_occurz00));
		}

	}

#ifdef __cplusplus
}
#endif
