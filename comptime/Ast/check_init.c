/*===========================================================================*/
/*   (Ast/check_init.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/check_init.scm) */
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


	extern obj_t BGl_syncz00zzast_nodez00;
	static obj_t
		BGl_z62checkzd2initzd2cast1266z62zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t
		BGl_z62checkzd2initzd2setq1268z62zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzast_checkzd2globalzd2initz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_checkzd2globalzd2initz00();
	extern obj_t BGl_externz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	static obj_t BGl_z62checkzd2init1249zb0zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t
		BGl_z62checkzd2initzd2setzd2exzd2it1281z62zzast_checkzd2globalzd2initz00
		(obj_t, obj_t);
	static obj_t
		BGl_z62checkzd2initzd2var1252z62zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t
		BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(BgL_nodez00_bglt);
	static obj_t BGl_z62checkzd2initzb0zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_checkzd2globalzd2initz00();
	static bool_t BGl_checkzd2initza2z70zzast_checkzd2globalzd2initz00(obj_t);
	static obj_t
		BGl_z62checkzd2initzd2funcall1262z62zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62checkzd2initzd2switch1275z62zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	extern obj_t BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t
		BGl_z62checkzd2initzd2sequence1254z62zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_checkzd2globalzd2initz00 =
		BUNSPEC;
	extern obj_t BGl_funz00zzast_varz00;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzast_checkzd2globalzd2initz00();
	static obj_t
		BGl_z62checkzd2initzd2condition1270z62zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzast_checkzd2globalzd2initz00();
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t
		BGl_z62checkzd2initzd2sync1256z62zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62checkzd2initzd2fail1273z62zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t
		BGl_z62checkzd2initzd2letzd2fun1277zb0zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62checkzd2initzd2jumpzd2exzd2i1283z62zzast_checkzd2globalzd2initz00
		(obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzast_checkzd2globalzd2initz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_includez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t
		BGl_z62checkzd2initzd2appzd2ly1260zb0zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t
		BGl_z62checkzd2initzd2app1258z62zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzast_checkzd2globalzd2initz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_checkzd2globalzd2initz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzast_checkzd2globalzd2initz00();
	static obj_t BGl_za2globalsza2z00zzast_checkzd2globalzd2initz00 = BUNSPEC;
	static obj_t
		BGl_z62checkzd2initzd2extern1264z62zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62checkzd2initzd2boxzd2setz121287za2zzast_checkzd2globalzd2initz00
		(obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t
		BGl_z62checkzd2initzd2makezd2box1285zb0zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62checkzd2initzd2letzd2var1279zb0zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[1];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1704z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_za762checkza7d2init11733z00,
		BGl_z62checkzd2init1249zb0zzast_checkzd2globalzd2initz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1706z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_za762checkza7d2initza71734za7,
		BGl_z62checkzd2initzd2var1252z62zzast_checkzd2globalzd2initz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1708z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_za762checkza7d2initza71735za7,
		BGl_z62checkzd2initzd2sequence1254z62zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1709z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_za762checkza7d2initza71736za7,
		BGl_z62checkzd2initzd2sync1256z62zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1710z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_za762checkza7d2initza71737za7,
		BGl_z62checkzd2initzd2app1258z62zzast_checkzd2globalzd2initz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1711z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_za762checkza7d2initza71738za7,
		BGl_z62checkzd2initzd2appzd2ly1260zb0zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1712z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_za762checkza7d2initza71739za7,
		BGl_z62checkzd2initzd2funcall1262z62zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1713z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_za762checkza7d2initza71740za7,
		BGl_z62checkzd2initzd2extern1264z62zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1714z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_za762checkza7d2initza71741za7,
		BGl_z62checkzd2initzd2cast1266z62zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1715z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_za762checkza7d2initza71742za7,
		BGl_z62checkzd2initzd2setq1268z62zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1716z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_za762checkza7d2initza71743za7,
		BGl_z62checkzd2initzd2condition1270z62zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1717z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_za762checkza7d2initza71744za7,
		BGl_z62checkzd2initzd2fail1273z62zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1718z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_za762checkza7d2initza71745za7,
		BGl_z62checkzd2initzd2switch1275z62zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1719z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_za762checkza7d2initza71746za7,
		BGl_z62checkzd2initzd2letzd2fun1277zb0zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1720z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_za762checkza7d2initza71747za7,
		BGl_z62checkzd2initzd2letzd2var1279zb0zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1721z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_za762checkza7d2initza71748za7,
		BGl_z62checkzd2initzd2setzd2exzd2it1281z62zzast_checkzd2globalzd2initz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1722z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_za762checkza7d2initza71749za7,
		BGl_z62checkzd2initzd2jumpzd2exzd2i1283z62zzast_checkzd2globalzd2initz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1723z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_za762checkza7d2initza71750za7,
		BGl_z62checkzd2initzd2makezd2box1285zb0zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1724z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_za762checkza7d2initza71751za7,
		BGl_z62checkzd2initzd2boxzd2setz121287za2zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1705z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_string1705za700za7za7a1752za7, "check-init1249", 14);
	      DEFINE_STRING(BGl_string1707z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_string1707za700za7za7a1753za7, "check-init", 10);
	      DEFINE_STRING(BGl_string1725z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_string1725za700za7za7a1754za7, "Variable used before initialized",
		32);
	      DEFINE_STRING(BGl_string1726z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_string1726za700za7za7a1755za7,
		"Illegal type for prematurely used variable", 42);
	      DEFINE_STRING(BGl_string1727z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_string1727za700za7za7a1756za7, "ast_check-global-init", 21);
	      DEFINE_STRING(BGl_string1728z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_string1728za700za7za7a1757za7, "done ", 5);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
		BgL_bgl_za762checkza7d2initza71758za7,
		BGl_z62checkzd2initzb0zzast_checkzd2globalzd2initz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzast_checkzd2globalzd2initz00));
		     ADD_ROOT((void
				*) (&BGl_za2globalsza2z00zzast_checkzd2globalzd2initz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzast_checkzd2globalzd2initz00(long
		BgL_checksumz00_2156, char *BgL_fromz00_2157)
	{
		{
			if (CBOOL
				(BGl_requirezd2initializa7ationz75zzast_checkzd2globalzd2initz00))
				{
					BGl_requirezd2initializa7ationz75zzast_checkzd2globalzd2initz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_checkzd2globalzd2initz00();
					BGl_libraryzd2moduleszd2initz00zzast_checkzd2globalzd2initz00();
					BGl_cnstzd2initzd2zzast_checkzd2globalzd2initz00();
					BGl_importedzd2moduleszd2initz00zzast_checkzd2globalzd2initz00();
					BGl_genericzd2initzd2zzast_checkzd2globalzd2initz00();
					BGl_methodzd2initzd2zzast_checkzd2globalzd2initz00();
					return BGl_toplevelzd2initzd2zzast_checkzd2globalzd2initz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_checkzd2globalzd2initz00()
	{
		{	/* Ast/check_init.scm 18 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_check-global-init");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"ast_check-global-init");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"ast_check-global-init");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"ast_check-global-init");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_check-global-init");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_check-global-init");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"ast_check-global-init");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0),
				"ast_check-global-init");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_check-global-init");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"ast_check-global-init");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_checkzd2globalzd2initz00()
	{
		{	/* Ast/check_init.scm 18 */
			{	/* Ast/check_init.scm 18 */
				obj_t BgL_cportz00_2103;

				{	/* Ast/check_init.scm 18 */
					obj_t BgL_stringz00_2111;

					BgL_stringz00_2111 = BGl_string1728z00zzast_checkzd2globalzd2initz00;
					{	/* Ast/check_init.scm 18 */
						obj_t BgL_startz00_2112;

						BgL_startz00_2112 = BINT(((long) 0));
						{	/* Ast/check_init.scm 18 */
							obj_t BgL_endz00_2113;

							BgL_endz00_2113 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2111)));
							{	/* Ast/check_init.scm 18 */

								BgL_cportz00_2103 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2111, BgL_startz00_2112, BgL_endz00_2113);
				}}}}
				{
					long BgL_iz00_2104;

					BgL_iz00_2104 = ((long) 0);
				BgL_loopz00_2105:
					if ((BgL_iz00_2104 == ((long) -1)))
						{	/* Ast/check_init.scm 18 */
							return BUNSPEC;
						}
					else
						{	/* Ast/check_init.scm 18 */
							{	/* Ast/check_init.scm 18 */
								obj_t BgL_arg1731z00_2107;

								{	/* Ast/check_init.scm 18 */

									{	/* Ast/check_init.scm 18 */
										obj_t BgL_locationz00_2109;

										BgL_locationz00_2109 = BBOOL(((bool_t) 0));
										{	/* Ast/check_init.scm 18 */

											BgL_arg1731z00_2107 =
												BGl_readz00zz__readerz00(BgL_cportz00_2103,
												BgL_locationz00_2109);
										}
									}
								}
								{	/* Ast/check_init.scm 18 */
									int BgL_tmpz00_2187;

									BgL_tmpz00_2187 = (int) (BgL_iz00_2104);
									CNST_TABLE_SET(BgL_tmpz00_2187, BgL_arg1731z00_2107);
							}}
							{	/* Ast/check_init.scm 18 */
								int BgL_auxz00_2110;

								BgL_auxz00_2110 = (int) ((BgL_iz00_2104 - ((long) 1)));
								{
									long BgL_iz00_2192;

									BgL_iz00_2192 = (long) (BgL_auxz00_2110);
									BgL_iz00_2104 = BgL_iz00_2192;
									goto BgL_loopz00_2105;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_checkzd2globalzd2initz00()
	{
		{	/* Ast/check_init.scm 18 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_checkzd2globalzd2initz00()
	{
		{	/* Ast/check_init.scm 18 */
			BGl_za2globalsza2z00zzast_checkzd2globalzd2initz00 = BNIL;
			return BUNSPEC;
		}

	}



/* check-init* */
	bool_t BGl_checkzd2initza2z70zzast_checkzd2globalzd2initz00(obj_t
		BgL_nodeza2za2_46)
	{
		{	/* Ast/check_init.scm 220 */
			{
				obj_t BgL_l1247z00_1617;

				BgL_l1247z00_1617 = BgL_nodeza2za2_46;
			BgL_zc3z04anonymousza31307ze3z87_1618:
				if (PAIRP(BgL_l1247z00_1617))
					{	/* Ast/check_init.scm 221 */
						{	/* Ast/check_init.scm 221 */
							obj_t BgL_arg1309z00_1620;

							BgL_arg1309z00_1620 = CAR(BgL_l1247z00_1617);
							BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
								((BgL_nodez00_bglt) BgL_arg1309z00_1620));
						}
						{
							obj_t BgL_l1247z00_2200;

							BgL_l1247z00_2200 = CDR(BgL_l1247z00_1617);
							BgL_l1247z00_1617 = BgL_l1247z00_2200;
							goto BgL_zc3z04anonymousza31307ze3z87_1618;
						}
					}
				else
					{	/* Ast/check_init.scm 221 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_checkzd2globalzd2initz00()
	{
		{	/* Ast/check_init.scm 18 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_checkzd2globalzd2initz00()
	{
		{	/* Ast/check_init.scm 18 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_proc1704z00zzast_checkzd2globalzd2initz00, BGl_nodez00zzast_nodez00,
				BGl_string1705z00zzast_checkzd2globalzd2initz00);
		}

	}



/* &check-init1249 */
	obj_t BGl_z62checkzd2init1249zb0zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2044, obj_t BgL_nodez00_2045)
	{
		{	/* Ast/check_init.scm 57 */
			return CNST_TABLE_REF(((long) 0));
		}

	}



/* check-init */
	obj_t BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(BgL_nodez00_bglt
		BgL_nodez00_27)
	{
		{	/* Ast/check_init.scm 57 */
			{	/* Ast/check_init.scm 57 */
				obj_t BgL_method1250z00_1627;

				{	/* Ast/check_init.scm 57 */
					obj_t BgL_res1698z00_1998;

					{	/* Ast/check_init.scm 57 */
						long BgL_objzd2classzd2numz00_1963;

						{	/* Ast/check_init.scm 57 */
							long BgL_res1688z00_1966;

							BgL_res1688z00_1966 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_27));
							BgL_objzd2classzd2numz00_1963 = BgL_res1688z00_1966;
						}
						{	/* Ast/check_init.scm 57 */
							obj_t BgL_arg1813z00_1964;

							BgL_arg1813z00_1964 =
								PROCEDURE_REF
								(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
								(int) (((long) 1)));
							{	/* Ast/check_init.scm 57 */
								int BgL_offsetz00_1968;

								BgL_offsetz00_1968 = (int) (BgL_objzd2classzd2numz00_1963);
								{	/* Ast/check_init.scm 57 */
									long BgL_offsetz00_1969;

									BgL_offsetz00_1969 =
										((long) (BgL_offsetz00_1968) - OBJECT_TYPE);
									{	/* Ast/check_init.scm 57 */
										long BgL_modz00_1970;

										BgL_modz00_1970 =
											(BgL_offsetz00_1969 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/check_init.scm 57 */
											long BgL_restz00_1972;

											BgL_restz00_1972 =
												(BgL_offsetz00_1969 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/check_init.scm 57 */

												{	/* Ast/check_init.scm 57 */
													obj_t BgL_bucketz00_1974;

													BgL_bucketz00_1974 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1964), BgL_modz00_1970);
													BgL_res1698z00_1998 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1974), BgL_restz00_1972);
					}}}}}}}}
					BgL_method1250z00_1627 = BgL_res1698z00_1998;
				}
				return
					PROCEDURE_ENTRY(BgL_method1250z00_1627) (BgL_method1250z00_1627,
					((obj_t) BgL_nodez00_27), BEOA);
			}
		}

	}



/* &check-init */
	obj_t BGl_z62checkzd2initzb0zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2046, obj_t BgL_nodez00_2047)
	{
		{	/* Ast/check_init.scm 57 */
			return
				BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
				((BgL_nodez00_bglt) BgL_nodez00_2047));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_checkzd2globalzd2initz00()
	{
		{	/* Ast/check_init.scm 18 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_varz00zzast_nodez00, BGl_proc1706z00zzast_checkzd2globalzd2initz00,
				BGl_string1707z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_sequencez00zzast_nodez00,
				BGl_proc1708z00zzast_checkzd2globalzd2initz00,
				BGl_string1707z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_syncz00zzast_nodez00, BGl_proc1709z00zzast_checkzd2globalzd2initz00,
				BGl_string1707z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_appz00zzast_nodez00, BGl_proc1710z00zzast_checkzd2globalzd2initz00,
				BGl_string1707z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc1711z00zzast_checkzd2globalzd2initz00,
				BGl_string1707z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_funcallz00zzast_nodez00,
				BGl_proc1712z00zzast_checkzd2globalzd2initz00,
				BGl_string1707z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_externz00zzast_nodez00,
				BGl_proc1713z00zzast_checkzd2globalzd2initz00,
				BGl_string1707z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_castz00zzast_nodez00, BGl_proc1714z00zzast_checkzd2globalzd2initz00,
				BGl_string1707z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_setqz00zzast_nodez00, BGl_proc1715z00zzast_checkzd2globalzd2initz00,
				BGl_string1707z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_conditionalz00zzast_nodez00,
				BGl_proc1716z00zzast_checkzd2globalzd2initz00,
				BGl_string1707z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_failz00zzast_nodez00, BGl_proc1717z00zzast_checkzd2globalzd2initz00,
				BGl_string1707z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_switchz00zzast_nodez00,
				BGl_proc1718z00zzast_checkzd2globalzd2initz00,
				BGl_string1707z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_letzd2funzd2zzast_nodez00,
				BGl_proc1719z00zzast_checkzd2globalzd2initz00,
				BGl_string1707z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_letzd2varzd2zzast_nodez00,
				BGl_proc1720z00zzast_checkzd2globalzd2initz00,
				BGl_string1707z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc1721z00zzast_checkzd2globalzd2initz00,
				BGl_string1707z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc1722z00zzast_checkzd2globalzd2initz00,
				BGl_string1707z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc1723z00zzast_checkzd2globalzd2initz00,
				BGl_string1707z00zzast_checkzd2globalzd2initz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc1724z00zzast_checkzd2globalzd2initz00,
				BGl_string1707z00zzast_checkzd2globalzd2initz00);
		}

	}



/* &check-init-box-set!1287 */
	obj_t
		BGl_z62checkzd2initzd2boxzd2setz121287za2zzast_checkzd2globalzd2initz00
		(obj_t BgL_envz00_2066, obj_t BgL_nodez00_2067)
	{
		{	/* Ast/check_init.scm 213 */
			return
				BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
				(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2067)))->BgL_valuez00));
		}

	}



/* &check-init-make-box1285 */
	obj_t
		BGl_z62checkzd2initzd2makezd2box1285zb0zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2068, obj_t BgL_nodez00_2069)
	{
		{	/* Ast/check_init.scm 207 */
			return
				BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
				(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_2069)))->BgL_valuez00));
		}

	}



/* &check-init-jump-ex-i1283 */
	obj_t
		BGl_z62checkzd2initzd2jumpzd2exzd2i1283z62zzast_checkzd2globalzd2initz00
		(obj_t BgL_envz00_2070, obj_t BgL_nodez00_2071)
	{
		{	/* Ast/check_init.scm 199 */
			BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2071)))->BgL_exitz00));
			return
				BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2071)))->BgL_valuez00));
		}

	}



/* &check-init-set-ex-it1281 */
	obj_t
		BGl_z62checkzd2initzd2setzd2exzd2it1281z62zzast_checkzd2globalzd2initz00
		(obj_t BgL_envz00_2072, obj_t BgL_nodez00_2073)
	{
		{	/* Ast/check_init.scm 193 */
			return
				BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
				(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2073)))->BgL_bodyz00));
		}

	}



/* &check-init-let-var1279 */
	obj_t
		BGl_z62checkzd2initzd2letzd2var1279zb0zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2074, obj_t BgL_nodez00_2075)
	{
		{	/* Ast/check_init.scm 183 */
			{	/* Ast/check_init.scm 184 */
				bool_t BgL_tmpz00_2269;

				BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
					(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2075)))->BgL_bodyz00));
				{	/* Ast/check_init.scm 186 */
					obj_t BgL_g1246z00_2122;

					BgL_g1246z00_2122 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2075)))->BgL_bindingsz00);
					{
						obj_t BgL_l1244z00_2124;

						BgL_l1244z00_2124 = BgL_g1246z00_2122;
					BgL_zc3z04anonymousza31385ze3z87_2123:
						if (PAIRP(BgL_l1244z00_2124))
							{	/* Ast/check_init.scm 186 */
								{	/* Ast/check_init.scm 187 */
									obj_t BgL_bindingz00_2125;

									BgL_bindingz00_2125 = CAR(BgL_l1244z00_2124);
									{	/* Ast/check_init.scm 187 */
										obj_t BgL_arg1394z00_2126;

										BgL_arg1394z00_2126 = CDR(((obj_t) BgL_bindingz00_2125));
										BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
											((BgL_nodez00_bglt) BgL_arg1394z00_2126));
									}
								}
								{
									obj_t BgL_l1244z00_2282;

									BgL_l1244z00_2282 = CDR(BgL_l1244z00_2124);
									BgL_l1244z00_2124 = BgL_l1244z00_2282;
									goto BgL_zc3z04anonymousza31385ze3z87_2123;
								}
							}
						else
							{	/* Ast/check_init.scm 186 */
								BgL_tmpz00_2269 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_tmpz00_2269);
			}
		}

	}



/* &check-init-let-fun1277 */
	obj_t
		BGl_z62checkzd2initzd2letzd2fun1277zb0zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2076, obj_t BgL_nodez00_2077)
	{
		{	/* Ast/check_init.scm 176 */
			return
				BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
				(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2077)))->BgL_bodyz00));
		}

	}



/* &check-init-switch1275 */
	obj_t BGl_z62checkzd2initzd2switch1275z62zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2078, obj_t BgL_nodez00_2079)
	{
		{	/* Ast/check_init.scm 163 */
			{	/* Ast/check_init.scm 164 */
				bool_t BgL_tmpz00_2288;

				BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
					(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2079)))->BgL_testz00));
				{	/* Ast/check_init.scm 166 */
					obj_t BgL_g1243z00_2129;

					BgL_g1243z00_2129 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2079)))->BgL_clausesz00);
					{
						obj_t BgL_l1241z00_2131;

						BgL_l1241z00_2131 = BgL_g1243z00_2129;
					BgL_zc3z04anonymousza31373ze3z87_2130:
						if (PAIRP(BgL_l1241z00_2131))
							{	/* Ast/check_init.scm 166 */
								{	/* Ast/check_init.scm 167 */
									obj_t BgL_clausez00_2132;

									BgL_clausez00_2132 = CAR(BgL_l1241z00_2131);
									{	/* Ast/check_init.scm 167 */
										obj_t BgL_arg1381z00_2133;

										BgL_arg1381z00_2133 = CDR(((obj_t) BgL_clausez00_2132));
										BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
											((BgL_nodez00_bglt) BgL_arg1381z00_2133));
									}
								}
								{
									obj_t BgL_l1241z00_2301;

									BgL_l1241z00_2301 = CDR(BgL_l1241z00_2131);
									BgL_l1241z00_2131 = BgL_l1241z00_2301;
									goto BgL_zc3z04anonymousza31373ze3z87_2130;
								}
							}
						else
							{	/* Ast/check_init.scm 166 */
								BgL_tmpz00_2288 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_tmpz00_2288);
			}
		}

	}



/* &check-init-fail1273 */
	obj_t BGl_z62checkzd2initzd2fail1273z62zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2080, obj_t BgL_nodez00_2081)
	{
		{	/* Ast/check_init.scm 154 */
			BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2081)))->BgL_procz00));
			BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2081)))->BgL_msgz00));
			return
				BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2081)))->BgL_objz00));
		}

	}



/* &check-init-condition1270 */
	obj_t
		BGl_z62checkzd2initzd2condition1270z62zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2082, obj_t BgL_nodez00_2083)
	{
		{	/* Ast/check_init.scm 145 */
			BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2083)))->BgL_testz00));
			BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2083)))->BgL_truez00));
			return
				BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2083)))->BgL_falsez00));
		}

	}



/* &check-init-setq1268 */
	obj_t BGl_z62checkzd2initzd2setq1268z62zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2084, obj_t BgL_nodez00_2085)
	{
		{	/* Ast/check_init.scm 133 */
			{	/* Ast/check_init.scm 137 */
				BgL_variablez00_bglt BgL_varz00_2137;

				BgL_varz00_2137 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_setqz00_bglt) COBJECT(
										((BgL_setqz00_bglt) BgL_nodez00_2085)))->BgL_varz00)))->
					BgL_variablez00);
				{	/* Ast/check_init.scm 138 */
					bool_t BgL_test1765z00_2325;

					{	/* Ast/check_init.scm 138 */
						bool_t BgL_res1701z00_2138;

						BgL_res1701z00_2138 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_varz00_2137), BGl_globalz00zzast_varz00);
						BgL_test1765z00_2325 = BgL_res1701z00_2138;
					}
					if (BgL_test1765z00_2325)
						{	/* Ast/check_init.scm 138 */
							BGl_za2globalsza2z00zzast_checkzd2globalzd2initz00 =
								MAKE_YOUNG_PAIR(
								((obj_t) BgL_varz00_2137),
								BGl_za2globalsza2z00zzast_checkzd2globalzd2initz00);
						}
					else
						{	/* Ast/check_init.scm 138 */
							BFALSE;
						}
				}
			}
			return
				BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
				(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2085)))->BgL_valuez00));
		}

	}



/* &check-init-cast1266 */
	obj_t BGl_z62checkzd2initzd2cast1266z62zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2086, obj_t BgL_nodez00_2087)
	{
		{	/* Ast/check_init.scm 127 */
			return
				BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
				(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2087)))->BgL_argz00));
		}

	}



/* &check-init-extern1264 */
	obj_t BGl_z62checkzd2initzd2extern1264z62zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2088, obj_t BgL_nodez00_2089)
	{
		{	/* Ast/check_init.scm 121 */
			return
				BBOOL(BGl_checkzd2initza2z70zzast_checkzd2globalzd2initz00(
					(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_nodez00_2089)))->BgL_exprza2za2)));
		}

	}



/* &check-init-funcall1262 */
	obj_t BGl_z62checkzd2initzd2funcall1262z62zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2090, obj_t BgL_nodez00_2091)
	{
		{	/* Ast/check_init.scm 113 */
			{	/* Ast/check_init.scm 114 */
				bool_t BgL_tmpz00_2340;

				BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2091)))->BgL_funz00));
				BgL_tmpz00_2340 =
					BGl_checkzd2initza2z70zzast_checkzd2globalzd2initz00(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2091)))->BgL_argsz00));
				return BBOOL(BgL_tmpz00_2340);
			}
		}

	}



/* &check-init-app-ly1260 */
	obj_t
		BGl_z62checkzd2initzd2appzd2ly1260zb0zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2092, obj_t BgL_nodez00_2093)
	{
		{	/* Ast/check_init.scm 105 */
			BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_2093)))->BgL_funz00));
			return
				BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_2093)))->BgL_argz00));
		}

	}



/* &check-init-app1258 */
	obj_t BGl_z62checkzd2initzd2app1258z62zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2094, obj_t BgL_nodez00_2095)
	{
		{	/* Ast/check_init.scm 98 */
			return
				BBOOL(BGl_checkzd2initza2z70zzast_checkzd2globalzd2initz00(
					(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2095)))->BgL_argsz00)));
		}

	}



/* &check-init-sync1256 */
	obj_t BGl_z62checkzd2initzd2sync1256z62zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2096, obj_t BgL_nodez00_2097)
	{
		{	/* Ast/check_init.scm 90 */
			BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2097)))->BgL_mutexz00));
			BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2097)))->BgL_prelockz00));
			return
				BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2097)))->BgL_bodyz00));
		}

	}



/* &check-init-sequence1254 */
	obj_t
		BGl_z62checkzd2initzd2sequence1254z62zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2098, obj_t BgL_nodez00_2099)
	{
		{	/* Ast/check_init.scm 84 */
			return
				BBOOL(BGl_checkzd2initza2z70zzast_checkzd2globalzd2initz00(
					(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_2099)))->BgL_nodesz00)));
		}

	}



/* &check-init-var1252 */
	obj_t BGl_z62checkzd2initzd2var1252z62zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2100, obj_t BgL_nodez00_2101)
	{
		{	/* Ast/check_init.scm 63 */
			{	/* Ast/check_init.scm 64 */
				BgL_variablez00_bglt BgL_varz00_2147;

				BgL_varz00_2147 =
					(((BgL_varz00_bglt) COBJECT(
							((BgL_varz00_bglt) BgL_nodez00_2101)))->BgL_variablez00);
				{	/* Ast/check_init.scm 65 */
					bool_t BgL_test1766z00_2373;

					{	/* Ast/check_init.scm 65 */
						bool_t BgL_test1767z00_2374;

						{	/* Ast/check_init.scm 65 */
							bool_t BgL_res1699z00_2148;

							BgL_res1699z00_2148 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_varz00_2147), BGl_globalz00zzast_varz00);
							BgL_test1767z00_2374 = BgL_res1699z00_2148;
						}
						if (BgL_test1767z00_2374)
							{	/* Ast/check_init.scm 66 */
								bool_t BgL_test1769z00_2377;

								{	/* Ast/check_init.scm 66 */
									BgL_valuez00_bglt BgL_arg1334z00_2149;

									BgL_arg1334z00_2149 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_globalz00_bglt) BgL_varz00_2147))))->
										BgL_valuez00);
									{	/* Ast/check_init.scm 66 */
										bool_t BgL_res1700z00_2150;

										BgL_res1700z00_2150 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_arg1334z00_2149), BGl_funz00zzast_varz00);
										BgL_test1769z00_2377 = BgL_res1700z00_2150;
									}
								}
								if (BgL_test1769z00_2377)
									{	/* Ast/check_init.scm 66 */
										BgL_test1766z00_2373 = ((bool_t) 0);
									}
								else
									{	/* Ast/check_init.scm 66 */
										if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
													((obj_t) BgL_varz00_2147),
													BGl_za2globalsza2z00zzast_checkzd2globalzd2initz00)))
											{	/* Ast/check_init.scm 67 */
												BgL_test1766z00_2373 = ((bool_t) 0);
											}
										else
											{	/* Ast/check_init.scm 68 */
												obj_t BgL_arg1331z00_2151;

												BgL_arg1331z00_2151 =
													(((BgL_globalz00_bglt) COBJECT(
															((BgL_globalz00_bglt) BgL_varz00_2147)))->
													BgL_modulez00);
												BgL_test1766z00_2373 =
													(BgL_arg1331z00_2151 ==
													BGl_za2moduleza2z00zzmodule_modulez00);
											}
									}
							}
						else
							{	/* Ast/check_init.scm 65 */
								BgL_test1766z00_2373 = ((bool_t) 0);
							}
					}
					if (BgL_test1766z00_2373)
						{	/* Ast/check_init.scm 65 */
							{	/* Ast/check_init.scm 70 */
								obj_t BgL_arg1322z00_2152;
								obj_t BgL_arg1324z00_2153;

								BgL_arg1322z00_2152 =
									(((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt)
												((BgL_varz00_bglt) BgL_nodez00_2101))))->BgL_locz00);
								BgL_arg1324z00_2153 =
									(((BgL_variablez00_bglt) COBJECT(BgL_varz00_2147))->
									BgL_idz00);
								BGl_userzd2warningzf2locationz20zztools_errorz00
									(BgL_arg1322z00_2152,
									BGl_string1707z00zzast_checkzd2globalzd2initz00,
									BGl_string1725z00zzast_checkzd2globalzd2initz00,
									BgL_arg1324z00_2153);
							}
							{	/* Ast/check_init.scm 74 */
								bool_t BgL_test1771z00_2395;

								{	/* Ast/check_init.scm 74 */
									BgL_typez00_bglt BgL_arg1330z00_2154;

									BgL_arg1330z00_2154 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_globalz00_bglt) BgL_varz00_2147))))->
										BgL_typez00);
									BgL_test1771z00_2395 =
										(((obj_t) BgL_arg1330z00_2154) ==
										BGl_za2_za2z00zztype_cachez00);
								}
								if (BgL_test1771z00_2395)
									{	/* Ast/check_init.scm 75 */
										BgL_typez00_bglt BgL_vz00_2155;

										BgL_vz00_2155 =
											((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00);
										((((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_globalz00_bglt) BgL_varz00_2147))))->
												BgL_typez00) =
											((BgL_typez00_bglt) BgL_vz00_2155), BUNSPEC);
									}
								else
									{	/* Ast/check_init.scm 74 */
										BGl_errorz00zz__errorz00(
											(((BgL_typez00_bglt) COBJECT(
														(((BgL_variablez00_bglt) COBJECT(BgL_varz00_2147))->
															BgL_typez00)))->BgL_idz00),
											BGl_string1726z00zzast_checkzd2globalzd2initz00,
											(((BgL_variablez00_bglt) COBJECT(BgL_varz00_2147))->
												BgL_idz00));
									}
							}
							return (BGl_za2globalsza2z00zzast_checkzd2globalzd2initz00 =
								MAKE_YOUNG_PAIR(
									((obj_t) BgL_varz00_2147),
									BGl_za2globalsza2z00zzast_checkzd2globalzd2initz00), BUNSPEC);
						}
					else
						{	/* Ast/check_init.scm 65 */
							return BFALSE;
						}
				}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_checkzd2globalzd2initz00()
	{
		{	/* Ast/check_init.scm 18 */
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1727z00zzast_checkzd2globalzd2initz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1727z00zzast_checkzd2globalzd2initz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1727z00zzast_checkzd2globalzd2initz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1727z00zzast_checkzd2globalzd2initz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1727z00zzast_checkzd2globalzd2initz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1727z00zzast_checkzd2globalzd2initz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1727z00zzast_checkzd2globalzd2initz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1727z00zzast_checkzd2globalzd2initz00));
			BGl_modulezd2initializa7ationz75zzmodule_includez00(((long) 184800297),
				BSTRING_TO_STRING(BGl_string1727z00zzast_checkzd2globalzd2initz00));
			return
				BGl_modulezd2initializa7ationz75zzmodule_classz00(((long) 153808388),
				BSTRING_TO_STRING(BGl_string1727z00zzast_checkzd2globalzd2initz00));
		}

	}

#ifdef __cplusplus
}
#endif
