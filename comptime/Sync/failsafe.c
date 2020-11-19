/*===========================================================================*/
/*   (Sync/failsafe.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Sync/failsafe.scm) */
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

	typedef struct BgL_cfunz00_bgl
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
		obj_t BgL_argszd2typezd2;
		bool_t BgL_macrozf3zf3;
		bool_t BgL_infixzf3zf3;
		obj_t BgL_methodz00;
	}              *BgL_cfunz00_bglt;

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


	extern obj_t BGl_syncz00zzast_nodez00;
	static obj_t BGl_failsafezd2funzf3z21zzsync_failsafez00(BgL_funz00_bglt,
		BgL_variablez00_bglt, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzsync_failsafez00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_z62failsafezf3zd2pragma1300z43zzsync_failsafez00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsync_failsafez00();
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_z62failsafezf3zd2letzd2fun1310z91zzsync_failsafez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_pragmaz00zzast_nodez00;
	static obj_t BGl_z62failsafezf3zd2app1290z43zzsync_failsafez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	static obj_t BGl_z62failsafezf3zd2boxzd2setz121318z83zzsync_failsafez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62failsafezf3zd2makezd2box1314z91zzsync_failsafez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2optimzd2synczd2failsafezf3za2zf3zzengine_paramz00;
	static obj_t BGl_z62failsafezf3z91zzsync_failsafez00(obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzsync_failsafez00();
	static obj_t BGl_z62failsafezd2funzf3z43zzsync_failsafez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_failsafezf3zf3zzsync_failsafez00(BgL_nodez00_bglt, obj_t);
	static obj_t BGl_z62failsafezf3zd2letzd2var1312z91zzsync_failsafez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62failsafezd2funzf31291z43zzsync_failsafez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_z62failsafezf3zd2switch1308z43zzsync_failsafez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_failsafezd2synczf3z21zzsync_failsafez00(BgL_syncz00_bglt);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzsync_failsafez00 = BUNSPEC;
	extern obj_t BGl_funz00zzast_varz00;
	static obj_t BGl_z62failsafezd2funzf3zd2sfun1294z91zzsync_failsafez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62failsafezf3zd2sequence1286z43zzsync_failsafez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzsync_failsafez00();
	static obj_t BGl_z62failsafezf3zd2extern1298z43zzsync_failsafez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzsync_failsafez00();
	extern obj_t BGl_castz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62failsafezf3zd2var1282z43zzsync_failsafez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62failsafezf3zd2atom1280z43zzsync_failsafez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_z62failsafezf3zd2kwote1284z43zzsync_failsafez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_z62failsafezd2funzf3zd2cfun1296z91zzsync_failsafez00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsync_failsafez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_appz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_z62failsafezf3zd2cast1302z43zzsync_failsafez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62failsafezf3zd2setq1304z43zzsync_failsafez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzsync_failsafez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzsync_failsafez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzsync_failsafez00();
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_z62failsafezf3zd2conditiona1306z43zzsync_failsafez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62failsafezd2synczf3z43zzsync_failsafez00(obj_t, obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	static obj_t BGl_z62failsafezf3zd2boxzd2ref1316z91zzsync_failsafez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62failsafezf3zd2sync1288z43zzsync_failsafez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_z62failsafezf31277z91zzsync_failsafez00(obj_t, obj_t, obj_t);
	static obj_t __cnst[1];


	   
		 
		DEFINE_STRING(BGl_string1800z00zzsync_failsafez00,
		BgL_bgl_string1800za700za7za7s1810za7, "fail-safe ", 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_failsafezd2synczf3zd2envzf3zzsync_failsafez00,
		BgL_bgl_za762failsafeza7d2sy1811z00,
		BGl_z62failsafezd2synczf3z43zzsync_failsafez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1774z00zzsync_failsafez00,
		BgL_bgl_za762failsafeza7f3121812z00,
		BGl_z62failsafezf31277z91zzsync_failsafez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1776z00zzsync_failsafez00,
		BgL_bgl_za762failsafeza7d2fu1813z00,
		BGl_z62failsafezd2funzf31291z43zzsync_failsafez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1778z00zzsync_failsafez00,
		BgL_bgl_za762failsafeza7f3za7d1814za7,
		BGl_z62failsafezf3zd2atom1280z43zzsync_failsafez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1780z00zzsync_failsafez00,
		BgL_bgl_za762failsafeza7f3za7d1815za7,
		BGl_z62failsafezf3zd2var1282z43zzsync_failsafez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1781z00zzsync_failsafez00,
		BgL_bgl_za762failsafeza7f3za7d1816za7,
		BGl_z62failsafezf3zd2kwote1284z43zzsync_failsafez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1782z00zzsync_failsafez00,
		BgL_bgl_za762failsafeza7f3za7d1817za7,
		BGl_z62failsafezf3zd2sequence1286z43zzsync_failsafez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1783z00zzsync_failsafez00,
		BgL_bgl_za762failsafeza7f3za7d1818za7,
		BGl_z62failsafezf3zd2sync1288z43zzsync_failsafez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1784z00zzsync_failsafez00,
		BgL_bgl_za762failsafeza7f3za7d1819za7,
		BGl_z62failsafezf3zd2app1290z43zzsync_failsafez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1785z00zzsync_failsafez00,
		BgL_bgl_za762failsafeza7d2fu1820z00,
		BGl_z62failsafezd2funzf3zd2sfun1294z91zzsync_failsafez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1787z00zzsync_failsafez00,
		BgL_bgl_za762failsafeza7d2fu1821z00,
		BGl_z62failsafezd2funzf3zd2cfun1296z91zzsync_failsafez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1788z00zzsync_failsafez00,
		BgL_bgl_za762failsafeza7f3za7d1822za7,
		BGl_z62failsafezf3zd2extern1298z43zzsync_failsafez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1789z00zzsync_failsafez00,
		BgL_bgl_za762failsafeza7f3za7d1823za7,
		BGl_z62failsafezf3zd2pragma1300z43zzsync_failsafez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1790z00zzsync_failsafez00,
		BgL_bgl_za762failsafeza7f3za7d1824za7,
		BGl_z62failsafezf3zd2cast1302z43zzsync_failsafez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1791z00zzsync_failsafez00,
		BgL_bgl_za762failsafeza7f3za7d1825za7,
		BGl_z62failsafezf3zd2setq1304z43zzsync_failsafez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1792z00zzsync_failsafez00,
		BgL_bgl_za762failsafeza7f3za7d1826za7,
		BGl_z62failsafezf3zd2conditiona1306z43zzsync_failsafez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1793z00zzsync_failsafez00,
		BgL_bgl_za762failsafeza7f3za7d1827za7,
		BGl_z62failsafezf3zd2switch1308z43zzsync_failsafez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1794z00zzsync_failsafez00,
		BgL_bgl_za762failsafeza7f3za7d1828za7,
		BGl_z62failsafezf3zd2letzd2fun1310z91zzsync_failsafez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1795z00zzsync_failsafez00,
		BgL_bgl_za762failsafeza7f3za7d1829za7,
		BGl_z62failsafezf3zd2letzd2var1312z91zzsync_failsafez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1796z00zzsync_failsafez00,
		BgL_bgl_za762failsafeza7f3za7d1830za7,
		BGl_z62failsafezf3zd2makezd2box1314z91zzsync_failsafez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1797z00zzsync_failsafez00,
		BgL_bgl_za762failsafeza7f3za7d1831za7,
		BGl_z62failsafezf3zd2boxzd2ref1316z91zzsync_failsafez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1798z00zzsync_failsafez00,
		BgL_bgl_za762failsafeza7f3za7d1832za7,
		BGl_z62failsafezf3zd2boxzd2setz121318z83zzsync_failsafez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_GENERIC(BGl_failsafezf3zd2envz21zzsync_failsafez00,
		BgL_bgl_za762failsafeza7f3za791833za7,
		BGl_z62failsafezf3z91zzsync_failsafez00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_failsafezd2funzf3zd2envzf3zzsync_failsafez00,
		BgL_bgl_za762failsafeza7d2fu1834z00,
		BGl_z62failsafezd2funzf3z43zzsync_failsafez00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string1775z00zzsync_failsafez00,
		BgL_bgl_string1775za700za7za7s1835za7, "failsafe?1277", 13);
	      DEFINE_STRING(BGl_string1777z00zzsync_failsafez00,
		BgL_bgl_string1777za700za7za7s1836za7, "failsafe-fun?1291", 17);
	      DEFINE_STRING(BGl_string1779z00zzsync_failsafez00,
		BgL_bgl_string1779za700za7za7s1837za7, "failsafe?", 9);
	      DEFINE_STRING(BGl_string1786z00zzsync_failsafez00,
		BgL_bgl_string1786za700za7za7s1838za7, "failsafe-fun?", 13);
	      DEFINE_STRING(BGl_string1799z00zzsync_failsafez00,
		BgL_bgl_string1799za700za7za7s1839za7, "sync_failsafe", 13);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzsync_failsafez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsync_failsafez00(long
		BgL_checksumz00_2371, char *BgL_fromz00_2372)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsync_failsafez00))
				{
					BGl_requirezd2initializa7ationz75zzsync_failsafez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsync_failsafez00();
					BGl_libraryzd2moduleszd2initz00zzsync_failsafez00();
					BGl_cnstzd2initzd2zzsync_failsafez00();
					BGl_importedzd2moduleszd2initz00zzsync_failsafez00();
					BGl_genericzd2initzd2zzsync_failsafez00();
					BGl_methodzd2initzd2zzsync_failsafez00();
					return BGl_toplevelzd2initzd2zzsync_failsafez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsync_failsafez00()
	{
		{	/* Sync/failsafe.scm 16 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"sync_failsafe");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"sync_failsafe");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"sync_failsafe");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"sync_failsafe");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"sync_failsafe");
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 0),
				"sync_failsafe");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"sync_failsafe");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "sync_failsafe");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"sync_failsafe");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"sync_failsafe");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsync_failsafez00()
	{
		{	/* Sync/failsafe.scm 16 */
			{	/* Sync/failsafe.scm 16 */
				obj_t BgL_cportz00_2287;

				{	/* Sync/failsafe.scm 16 */
					obj_t BgL_stringz00_2295;

					BgL_stringz00_2295 = BGl_string1800z00zzsync_failsafez00;
					{	/* Sync/failsafe.scm 16 */
						obj_t BgL_startz00_2296;

						BgL_startz00_2296 = BINT(((long) 0));
						{	/* Sync/failsafe.scm 16 */
							obj_t BgL_endz00_2297;

							BgL_endz00_2297 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2295)));
							{	/* Sync/failsafe.scm 16 */

								BgL_cportz00_2287 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2295, BgL_startz00_2296, BgL_endz00_2297);
				}}}}
				{
					long BgL_iz00_2288;

					BgL_iz00_2288 = ((long) 0);
				BgL_loopz00_2289:
					if ((BgL_iz00_2288 == ((long) -1)))
						{	/* Sync/failsafe.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Sync/failsafe.scm 16 */
							{	/* Sync/failsafe.scm 16 */
								obj_t BgL_arg1808z00_2291;

								{	/* Sync/failsafe.scm 16 */

									{	/* Sync/failsafe.scm 16 */
										obj_t BgL_locationz00_2293;

										BgL_locationz00_2293 = BBOOL(((bool_t) 0));
										{	/* Sync/failsafe.scm 16 */

											BgL_arg1808z00_2291 =
												BGl_readz00zz__readerz00(BgL_cportz00_2287,
												BgL_locationz00_2293);
										}
									}
								}
								{	/* Sync/failsafe.scm 16 */
									int BgL_tmpz00_2402;

									BgL_tmpz00_2402 = (int) (BgL_iz00_2288);
									CNST_TABLE_SET(BgL_tmpz00_2402, BgL_arg1808z00_2291);
							}}
							{	/* Sync/failsafe.scm 16 */
								int BgL_auxz00_2294;

								BgL_auxz00_2294 = (int) ((BgL_iz00_2288 - ((long) 1)));
								{
									long BgL_iz00_2407;

									BgL_iz00_2407 = (long) (BgL_auxz00_2294);
									BgL_iz00_2288 = BgL_iz00_2407;
									goto BgL_loopz00_2289;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsync_failsafez00()
	{
		{	/* Sync/failsafe.scm 16 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsync_failsafez00()
	{
		{	/* Sync/failsafe.scm 16 */
			return BUNSPEC;
		}

	}



/* failsafe-sync? */
	BGL_EXPORTED_DEF obj_t
		BGl_failsafezd2synczf3z21zzsync_failsafez00(BgL_syncz00_bglt BgL_nz00_17)
	{
		{	/* Sync/failsafe.scm 45 */
			if (CBOOL(BGl_za2optimzd2synczd2failsafezf3za2zf3zzengine_paramz00))
				{	/* Sync/failsafe.scm 46 */
					return
						BGl_failsafezf3zf3zzsync_failsafez00(
						(((BgL_syncz00_bglt) COBJECT(BgL_nz00_17))->BgL_bodyz00), BNIL);
				}
			else
				{	/* Sync/failsafe.scm 46 */
					return BFALSE;
				}
		}

	}



/* &failsafe-sync? */
	obj_t BGl_z62failsafezd2synczf3z43zzsync_failsafez00(obj_t BgL_envz00_2190,
		obj_t BgL_nz00_2191)
	{
		{	/* Sync/failsafe.scm 45 */
			return
				BGl_failsafezd2synczf3z21zzsync_failsafez00(
				((BgL_syncz00_bglt) BgL_nz00_2191));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsync_failsafez00()
	{
		{	/* Sync/failsafe.scm 16 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsync_failsafez00()
	{
		{	/* Sync/failsafe.scm 16 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_failsafezf3zd2envz21zzsync_failsafez00,
				BGl_proc1774z00zzsync_failsafez00, BGl_nodez00zzast_nodez00,
				BGl_string1775z00zzsync_failsafez00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_failsafezd2funzf3zd2envzf3zzsync_failsafez00,
				BGl_proc1776z00zzsync_failsafez00, BGl_funz00zzast_varz00,
				BGl_string1777z00zzsync_failsafez00);
		}

	}



/* &failsafe-fun?1291 */
	obj_t BGl_z62failsafezd2funzf31291z43zzsync_failsafez00(obj_t BgL_envz00_2194,
		obj_t BgL_funz00_2195, obj_t BgL_varz00_2196, obj_t BgL_stkz00_2197)
	{
		{	/* Sync/failsafe.scm 102 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &failsafe?1277 */
	obj_t BGl_z62failsafezf31277z91zzsync_failsafez00(obj_t BgL_envz00_2198,
		obj_t BgL_nz00_2199, obj_t BgL_stkz00_2200)
	{
		{	/* Sync/failsafe.scm 53 */
			return BBOOL(((bool_t) 0));
		}

	}



/* failsafe? */
	obj_t BGl_failsafezf3zf3zzsync_failsafez00(BgL_nodez00_bglt BgL_nz00_18,
		obj_t BgL_stkz00_19)
	{
		{	/* Sync/failsafe.scm 53 */
			{	/* Sync/failsafe.scm 53 */
				obj_t BgL_method1278z00_1676;

				{	/* Sync/failsafe.scm 53 */
					obj_t BgL_res1750z00_2114;

					{	/* Sync/failsafe.scm 53 */
						long BgL_objzd2classzd2numz00_2079;

						{	/* Sync/failsafe.scm 53 */
							long BgL_res1740z00_2082;

							BgL_res1740z00_2082 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nz00_18));
							BgL_objzd2classzd2numz00_2079 = BgL_res1740z00_2082;
						}
						{	/* Sync/failsafe.scm 53 */
							obj_t BgL_arg1813z00_2080;

							BgL_arg1813z00_2080 =
								PROCEDURE_REF(BGl_failsafezf3zd2envz21zzsync_failsafez00,
								(int) (((long) 1)));
							{	/* Sync/failsafe.scm 53 */
								int BgL_offsetz00_2084;

								BgL_offsetz00_2084 = (int) (BgL_objzd2classzd2numz00_2079);
								{	/* Sync/failsafe.scm 53 */
									long BgL_offsetz00_2085;

									BgL_offsetz00_2085 =
										((long) (BgL_offsetz00_2084) - OBJECT_TYPE);
									{	/* Sync/failsafe.scm 53 */
										long BgL_modz00_2086;

										BgL_modz00_2086 =
											(BgL_offsetz00_2085 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Sync/failsafe.scm 53 */
											long BgL_restz00_2088;

											BgL_restz00_2088 =
												(BgL_offsetz00_2085 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Sync/failsafe.scm 53 */

												{	/* Sync/failsafe.scm 53 */
													obj_t BgL_bucketz00_2090;

													BgL_bucketz00_2090 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2080), BgL_modz00_2086);
													BgL_res1750z00_2114 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2090), BgL_restz00_2088);
					}}}}}}}}
					BgL_method1278z00_1676 = BgL_res1750z00_2114;
				}
				return
					PROCEDURE_ENTRY(BgL_method1278z00_1676) (BgL_method1278z00_1676,
					((obj_t) BgL_nz00_18), BgL_stkz00_19, BEOA);
			}
		}

	}



/* &failsafe? */
	obj_t BGl_z62failsafezf3z91zzsync_failsafez00(obj_t BgL_envz00_2201,
		obj_t BgL_nz00_2202, obj_t BgL_stkz00_2203)
	{
		{	/* Sync/failsafe.scm 53 */
			return
				BGl_failsafezf3zf3zzsync_failsafez00(
				((BgL_nodez00_bglt) BgL_nz00_2202), BgL_stkz00_2203);
		}

	}



/* failsafe-fun? */
	obj_t BGl_failsafezd2funzf3z21zzsync_failsafez00(BgL_funz00_bglt
		BgL_funz00_32, BgL_variablez00_bglt BgL_varz00_33, obj_t BgL_stkz00_34)
	{
		{	/* Sync/failsafe.scm 102 */
			{	/* Sync/failsafe.scm 102 */
				obj_t BgL_method1292z00_1677;

				{	/* Sync/failsafe.scm 102 */
					obj_t BgL_res1761z00_2151;

					{	/* Sync/failsafe.scm 102 */
						long BgL_objzd2classzd2numz00_2116;

						{	/* Sync/failsafe.scm 102 */
							long BgL_res1751z00_2119;

							BgL_res1751z00_2119 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_funz00_32));
							BgL_objzd2classzd2numz00_2116 = BgL_res1751z00_2119;
						}
						{	/* Sync/failsafe.scm 102 */
							obj_t BgL_arg1813z00_2117;

							BgL_arg1813z00_2117 =
								PROCEDURE_REF(BGl_failsafezd2funzf3zd2envzf3zzsync_failsafez00,
								(int) (((long) 1)));
							{	/* Sync/failsafe.scm 102 */
								int BgL_offsetz00_2121;

								BgL_offsetz00_2121 = (int) (BgL_objzd2classzd2numz00_2116);
								{	/* Sync/failsafe.scm 102 */
									long BgL_offsetz00_2122;

									BgL_offsetz00_2122 =
										((long) (BgL_offsetz00_2121) - OBJECT_TYPE);
									{	/* Sync/failsafe.scm 102 */
										long BgL_modz00_2123;

										BgL_modz00_2123 =
											(BgL_offsetz00_2122 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Sync/failsafe.scm 102 */
											long BgL_restz00_2125;

											BgL_restz00_2125 =
												(BgL_offsetz00_2122 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Sync/failsafe.scm 102 */

												{	/* Sync/failsafe.scm 102 */
													obj_t BgL_bucketz00_2127;

													BgL_bucketz00_2127 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2117), BgL_modz00_2123);
													BgL_res1761z00_2151 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2127), BgL_restz00_2125);
					}}}}}}}}
					BgL_method1292z00_1677 = BgL_res1761z00_2151;
				}
				return
					PROCEDURE_ENTRY(BgL_method1292z00_1677) (BgL_method1292z00_1677,
					((obj_t) BgL_funz00_32),
					((obj_t) BgL_varz00_33), BgL_stkz00_34, BEOA);
			}
		}

	}



/* &failsafe-fun? */
	obj_t BGl_z62failsafezd2funzf3z43zzsync_failsafez00(obj_t BgL_envz00_2204,
		obj_t BgL_funz00_2205, obj_t BgL_varz00_2206, obj_t BgL_stkz00_2207)
	{
		{	/* Sync/failsafe.scm 102 */
			return
				BGl_failsafezd2funzf3z21zzsync_failsafez00(
				((BgL_funz00_bglt) BgL_funz00_2205),
				((BgL_variablez00_bglt) BgL_varz00_2206), BgL_stkz00_2207);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsync_failsafez00()
	{
		{	/* Sync/failsafe.scm 16 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failsafezf3zd2envz21zzsync_failsafez00, BGl_atomz00zzast_nodez00,
				BGl_proc1778z00zzsync_failsafez00, BGl_string1779z00zzsync_failsafez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failsafezf3zd2envz21zzsync_failsafez00, BGl_varz00zzast_nodez00,
				BGl_proc1780z00zzsync_failsafez00, BGl_string1779z00zzsync_failsafez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failsafezf3zd2envz21zzsync_failsafez00, BGl_kwotez00zzast_nodez00,
				BGl_proc1781z00zzsync_failsafez00, BGl_string1779z00zzsync_failsafez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failsafezf3zd2envz21zzsync_failsafez00,
				BGl_sequencez00zzast_nodez00, BGl_proc1782z00zzsync_failsafez00,
				BGl_string1779z00zzsync_failsafez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failsafezf3zd2envz21zzsync_failsafez00, BGl_syncz00zzast_nodez00,
				BGl_proc1783z00zzsync_failsafez00, BGl_string1779z00zzsync_failsafez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failsafezf3zd2envz21zzsync_failsafez00, BGl_appz00zzast_nodez00,
				BGl_proc1784z00zzsync_failsafez00, BGl_string1779z00zzsync_failsafez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failsafezd2funzf3zd2envzf3zzsync_failsafez00,
				BGl_sfunz00zzast_varz00, BGl_proc1785z00zzsync_failsafez00,
				BGl_string1786z00zzsync_failsafez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failsafezd2funzf3zd2envzf3zzsync_failsafez00,
				BGl_cfunz00zzast_varz00, BGl_proc1787z00zzsync_failsafez00,
				BGl_string1786z00zzsync_failsafez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failsafezf3zd2envz21zzsync_failsafez00, BGl_externz00zzast_nodez00,
				BGl_proc1788z00zzsync_failsafez00, BGl_string1779z00zzsync_failsafez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failsafezf3zd2envz21zzsync_failsafez00, BGl_pragmaz00zzast_nodez00,
				BGl_proc1789z00zzsync_failsafez00, BGl_string1779z00zzsync_failsafez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failsafezf3zd2envz21zzsync_failsafez00, BGl_castz00zzast_nodez00,
				BGl_proc1790z00zzsync_failsafez00, BGl_string1779z00zzsync_failsafez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failsafezf3zd2envz21zzsync_failsafez00, BGl_setqz00zzast_nodez00,
				BGl_proc1791z00zzsync_failsafez00, BGl_string1779z00zzsync_failsafez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failsafezf3zd2envz21zzsync_failsafez00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1792z00zzsync_failsafez00,
				BGl_string1779z00zzsync_failsafez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failsafezf3zd2envz21zzsync_failsafez00, BGl_switchz00zzast_nodez00,
				BGl_proc1793z00zzsync_failsafez00, BGl_string1779z00zzsync_failsafez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failsafezf3zd2envz21zzsync_failsafez00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1794z00zzsync_failsafez00,
				BGl_string1779z00zzsync_failsafez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failsafezf3zd2envz21zzsync_failsafez00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1795z00zzsync_failsafez00,
				BGl_string1779z00zzsync_failsafez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failsafezf3zd2envz21zzsync_failsafez00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1796z00zzsync_failsafez00,
				BGl_string1779z00zzsync_failsafez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failsafezf3zd2envz21zzsync_failsafez00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1797z00zzsync_failsafez00,
				BGl_string1779z00zzsync_failsafez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failsafezf3zd2envz21zzsync_failsafez00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1798z00zzsync_failsafez00,
				BGl_string1779z00zzsync_failsafez00);
		}

	}



/* &failsafe?-box-set!1318 */
	obj_t BGl_z62failsafezf3zd2boxzd2setz121318z83zzsync_failsafez00(obj_t
		BgL_envz00_2227, obj_t BgL_nz00_2228, obj_t BgL_stkz00_2229)
	{
		{	/* Sync/failsafe.scm 216 */
			return
				BGl_failsafezf3zf3zzsync_failsafez00(
				(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nz00_2228)))->BgL_valuez00),
				BgL_stkz00_2229);
		}

	}



/* &failsafe?-box-ref1316 */
	obj_t BGl_z62failsafezf3zd2boxzd2ref1316z91zzsync_failsafez00(obj_t
		BgL_envz00_2230, obj_t BgL_nz00_2231, obj_t BgL_stkz00_2232)
	{
		{	/* Sync/failsafe.scm 210 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &failsafe?-make-box1314 */
	obj_t BGl_z62failsafezf3zd2makezd2box1314z91zzsync_failsafez00(obj_t
		BgL_envz00_2233, obj_t BgL_nz00_2234, obj_t BgL_stkz00_2235)
	{
		{	/* Sync/failsafe.scm 203 */
			return
				BGl_failsafezf3zf3zzsync_failsafez00(
				(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nz00_2234)))->BgL_valuez00),
				BgL_stkz00_2235);
		}

	}



/* &failsafe?-let-var1312 */
	obj_t BGl_z62failsafezf3zd2letzd2var1312z91zzsync_failsafez00(obj_t
		BgL_envz00_2236, obj_t BgL_nz00_2237, obj_t BgL_stkz00_2238)
	{
		{	/* Sync/failsafe.scm 195 */
			{	/* Sync/failsafe.scm 196 */
				bool_t BgL_tmpz00_2515;

				{	/* Sync/failsafe.scm 197 */
					bool_t BgL_test1843z00_2516;

					{	/* Sync/failsafe.scm 197 */
						BgL_nodez00_bglt BgL_arg1537z00_2308;

						BgL_arg1537z00_2308 =
							(((BgL_letzd2varzd2_bglt) COBJECT(
									((BgL_letzd2varzd2_bglt) BgL_nz00_2237)))->BgL_bodyz00);
						BgL_test1843z00_2516 =
							CBOOL(BGl_failsafezf3zf3zzsync_failsafez00(BgL_arg1537z00_2308,
								BgL_stkz00_2238));
					}
					if (BgL_test1843z00_2516)
						{	/* Sync/failsafe.scm 198 */
							obj_t BgL_g1275z00_2309;

							BgL_g1275z00_2309 =
								(((BgL_letzd2varzd2_bglt) COBJECT(
										((BgL_letzd2varzd2_bglt) BgL_nz00_2237)))->BgL_bindingsz00);
							{
								obj_t BgL_l1273z00_2311;

								BgL_l1273z00_2311 = BgL_g1275z00_2309;
							BgL_zc3z04anonymousza31520ze3z87_2310:
								if (NULLP(BgL_l1273z00_2311))
									{	/* Sync/failsafe.scm 198 */
										BgL_tmpz00_2515 = ((bool_t) 1);
									}
								else
									{	/* Sync/failsafe.scm 198 */
										obj_t BgL_nvz00_2312;

										{	/* Sync/failsafe.scm 198 */
											obj_t BgL_bz00_2313;

											BgL_bz00_2313 = CAR(((obj_t) BgL_l1273z00_2311));
											{	/* Sync/failsafe.scm 198 */
												obj_t BgL_arg1536z00_2314;

												BgL_arg1536z00_2314 = CDR(((obj_t) BgL_bz00_2313));
												BgL_nvz00_2312 =
													BGl_failsafezf3zf3zzsync_failsafez00(
													((BgL_nodez00_bglt) BgL_arg1536z00_2314),
													BgL_stkz00_2238);
											}
										}
										if (CBOOL(BgL_nvz00_2312))
											{	/* Sync/failsafe.scm 198 */
												obj_t BgL_arg1528z00_2315;

												BgL_arg1528z00_2315 = CDR(((obj_t) BgL_l1273z00_2311));
												{
													obj_t BgL_l1273z00_2535;

													BgL_l1273z00_2535 = BgL_arg1528z00_2315;
													BgL_l1273z00_2311 = BgL_l1273z00_2535;
													goto BgL_zc3z04anonymousza31520ze3z87_2310;
												}
											}
										else
											{	/* Sync/failsafe.scm 198 */
												BgL_tmpz00_2515 = ((bool_t) 0);
											}
									}
							}
						}
					else
						{	/* Sync/failsafe.scm 197 */
							BgL_tmpz00_2515 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_tmpz00_2515);
			}
		}

	}



/* &failsafe?-let-fun1310 */
	obj_t BGl_z62failsafezf3zd2letzd2fun1310z91zzsync_failsafez00(obj_t
		BgL_envz00_2239, obj_t BgL_nz00_2240, obj_t BgL_stkz00_2241)
	{
		{	/* Sync/failsafe.scm 187 */
			return
				BGl_failsafezf3zf3zzsync_failsafez00(
				(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nz00_2240)))->BgL_bodyz00),
				BgL_stkz00_2241);
		}

	}



/* &failsafe?-switch1308 */
	obj_t BGl_z62failsafezf3zd2switch1308z43zzsync_failsafez00(obj_t
		BgL_envz00_2242, obj_t BgL_nz00_2243, obj_t BgL_stkz00_2244)
	{
		{	/* Sync/failsafe.scm 179 */
			{	/* Sync/failsafe.scm 180 */
				bool_t BgL_tmpz00_2540;

				{	/* Sync/failsafe.scm 181 */
					bool_t BgL_test1846z00_2541;

					{	/* Sync/failsafe.scm 181 */
						BgL_nodez00_bglt BgL_arg1495z00_2318;

						BgL_arg1495z00_2318 =
							(((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt) BgL_nz00_2243)))->BgL_testz00);
						BgL_test1846z00_2541 =
							CBOOL(BGl_failsafezf3zf3zzsync_failsafez00(BgL_arg1495z00_2318,
								BgL_stkz00_2244));
					}
					if (BgL_test1846z00_2541)
						{	/* Sync/failsafe.scm 182 */
							obj_t BgL_g1271z00_2319;

							BgL_g1271z00_2319 =
								(((BgL_switchz00_bglt) COBJECT(
										((BgL_switchz00_bglt) BgL_nz00_2243)))->BgL_clausesz00);
							{
								obj_t BgL_l1269z00_2321;

								BgL_l1269z00_2321 = BgL_g1271z00_2319;
							BgL_zc3z04anonymousza31479ze3z87_2320:
								if (NULLP(BgL_l1269z00_2321))
									{	/* Sync/failsafe.scm 182 */
										BgL_tmpz00_2540 = ((bool_t) 1);
									}
								else
									{	/* Sync/failsafe.scm 182 */
										obj_t BgL_nvz00_2322;

										{	/* Sync/failsafe.scm 182 */
											obj_t BgL_cz00_2323;

											BgL_cz00_2323 = CAR(((obj_t) BgL_l1269z00_2321));
											{	/* Sync/failsafe.scm 182 */
												obj_t BgL_arg1493z00_2324;

												BgL_arg1493z00_2324 = CDR(((obj_t) BgL_cz00_2323));
												BgL_nvz00_2322 =
													BGl_failsafezf3zf3zzsync_failsafez00(
													((BgL_nodez00_bglt) BgL_arg1493z00_2324),
													BgL_stkz00_2244);
											}
										}
										if (CBOOL(BgL_nvz00_2322))
											{	/* Sync/failsafe.scm 182 */
												obj_t BgL_arg1489z00_2325;

												BgL_arg1489z00_2325 = CDR(((obj_t) BgL_l1269z00_2321));
												{
													obj_t BgL_l1269z00_2560;

													BgL_l1269z00_2560 = BgL_arg1489z00_2325;
													BgL_l1269z00_2321 = BgL_l1269z00_2560;
													goto BgL_zc3z04anonymousza31479ze3z87_2320;
												}
											}
										else
											{	/* Sync/failsafe.scm 182 */
												BgL_tmpz00_2540 = ((bool_t) 0);
											}
									}
							}
						}
					else
						{	/* Sync/failsafe.scm 181 */
							BgL_tmpz00_2540 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_tmpz00_2540);
			}
		}

	}



/* &failsafe?-conditiona1306 */
	obj_t BGl_z62failsafezf3zd2conditiona1306z43zzsync_failsafez00(obj_t
		BgL_envz00_2245, obj_t BgL_nz00_2246, obj_t BgL_stkz00_2247)
	{
		{	/* Sync/failsafe.scm 172 */
			{	/* Sync/failsafe.scm 174 */
				obj_t BgL__andtest_1124z00_2327;

				BgL__andtest_1124z00_2327 =
					BGl_failsafezf3zf3zzsync_failsafez00(
					(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nz00_2246)))->BgL_testz00),
					BgL_stkz00_2247);
				if (CBOOL(BgL__andtest_1124z00_2327))
					{	/* Sync/failsafe.scm 174 */
						obj_t BgL__andtest_1125z00_2328;

						BgL__andtest_1125z00_2328 =
							BGl_failsafezf3zf3zzsync_failsafez00(
							(((BgL_conditionalz00_bglt) COBJECT(
										((BgL_conditionalz00_bglt) BgL_nz00_2246)))->BgL_truez00),
							BgL_stkz00_2247);
						if (CBOOL(BgL__andtest_1125z00_2328))
							{	/* Sync/failsafe.scm 174 */
								return
									BGl_failsafezf3zf3zzsync_failsafez00(
									(((BgL_conditionalz00_bglt) COBJECT(
												((BgL_conditionalz00_bglt) BgL_nz00_2246)))->
										BgL_falsez00), BgL_stkz00_2247);
							}
						else
							{	/* Sync/failsafe.scm 174 */
								return BFALSE;
							}
					}
				else
					{	/* Sync/failsafe.scm 174 */
						return BFALSE;
					}
			}
		}

	}



/* &failsafe?-setq1304 */
	obj_t BGl_z62failsafezf3zd2setq1304z43zzsync_failsafez00(obj_t
		BgL_envz00_2248, obj_t BgL_nz00_2249, obj_t BgL_stkz00_2250)
	{
		{	/* Sync/failsafe.scm 165 */
			return
				BGl_failsafezf3zf3zzsync_failsafez00(
				(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nz00_2249)))->BgL_valuez00),
				BgL_stkz00_2250);
		}

	}



/* &failsafe?-cast1302 */
	obj_t BGl_z62failsafezf3zd2cast1302z43zzsync_failsafez00(obj_t
		BgL_envz00_2251, obj_t BgL_nz00_2252, obj_t BgL_stkz00_2253)
	{
		{	/* Sync/failsafe.scm 158 */
			return
				BGl_failsafezf3zf3zzsync_failsafez00(
				(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nz00_2252)))->BgL_argz00),
				BgL_stkz00_2253);
		}

	}



/* &failsafe?-pragma1300 */
	obj_t BGl_z62failsafezf3zd2pragma1300z43zzsync_failsafez00(obj_t
		BgL_envz00_2254, obj_t BgL_nz00_2255, obj_t BgL_stkz00_2256)
	{
		{	/* Sync/failsafe.scm 152 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &failsafe?-extern1298 */
	obj_t BGl_z62failsafezf3zd2extern1298z43zzsync_failsafez00(obj_t
		BgL_envz00_2257, obj_t BgL_nz00_2258, obj_t BgL_stkz00_2259)
	{
		{	/* Sync/failsafe.scm 145 */
			{	/* Sync/failsafe.scm 146 */
				bool_t BgL_tmpz00_2582;

				{	/* Sync/failsafe.scm 147 */
					obj_t BgL_g1267z00_2333;

					BgL_g1267z00_2333 =
						(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_nz00_2258)))->BgL_exprza2za2);
					{
						obj_t BgL_l1265z00_2335;

						BgL_l1265z00_2335 = BgL_g1267z00_2333;
					BgL_zc3z04anonymousza31449ze3z87_2334:
						if (NULLP(BgL_l1265z00_2335))
							{	/* Sync/failsafe.scm 147 */
								BgL_tmpz00_2582 = ((bool_t) 1);
							}
						else
							{	/* Sync/failsafe.scm 147 */
								obj_t BgL_nvz00_2336;

								{	/* Sync/failsafe.scm 147 */
									obj_t BgL_nz00_2337;

									BgL_nz00_2337 = CAR(((obj_t) BgL_l1265z00_2335));
									BgL_nvz00_2336 =
										BGl_failsafezf3zf3zzsync_failsafez00(
										((BgL_nodez00_bglt) BgL_nz00_2337), BgL_stkz00_2259);
								}
								if (CBOOL(BgL_nvz00_2336))
									{	/* Sync/failsafe.scm 147 */
										obj_t BgL_arg1461z00_2338;

										BgL_arg1461z00_2338 = CDR(((obj_t) BgL_l1265z00_2335));
										{
											obj_t BgL_l1265z00_2595;

											BgL_l1265z00_2595 = BgL_arg1461z00_2338;
											BgL_l1265z00_2335 = BgL_l1265z00_2595;
											goto BgL_zc3z04anonymousza31449ze3z87_2334;
										}
									}
								else
									{	/* Sync/failsafe.scm 147 */
										BgL_tmpz00_2582 = ((bool_t) 0);
									}
							}
					}
				}
				return BBOOL(BgL_tmpz00_2582);
			}
		}

	}



/* &failsafe-fun?-cfun1296 */
	obj_t BGl_z62failsafezd2funzf3zd2cfun1296z91zzsync_failsafez00(obj_t
		BgL_envz00_2260, obj_t BgL_funz00_2261, obj_t BgL_varz00_2262,
		obj_t BgL_stkz00_2263)
	{
		{	/* Sync/failsafe.scm 130 */
			{	/* Sync/failsafe.scm 133 */
				bool_t BgL_test1853z00_2597;

				{	/* Sync/failsafe.scm 133 */
					obj_t BgL_tmpz00_2598;

					BgL_tmpz00_2598 =
						(((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt)
									((BgL_cfunz00_bglt) BgL_funz00_2261))))->BgL_failsafez00);
					BgL_test1853z00_2597 = BOOLEANP(BgL_tmpz00_2598);
				}
				if (BgL_test1853z00_2597)
					{	/* Sync/failsafe.scm 133 */
						return
							(((BgL_funz00_bglt) COBJECT(
									((BgL_funz00_bglt)
										((BgL_cfunz00_bglt) BgL_funz00_2261))))->BgL_failsafez00);
					}
				else
					{	/* Sync/failsafe.scm 135 */
						bool_t BgL_test1854z00_2606;

						{	/* Sync/failsafe.scm 135 */
							bool_t BgL_res1769z00_2341;

							BgL_res1769z00_2341 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t)
									((BgL_variablez00_bglt) BgL_varz00_2262)),
								BGl_globalz00zzast_varz00);
							BgL_test1854z00_2606 = BgL_res1769z00_2341;
						}
						if (BgL_test1854z00_2606)
							{	/* Sync/failsafe.scm 135 */
								{
									obj_t BgL_auxz00_2610;

									{	/* Sync/failsafe.scm 137 */
										bool_t BgL_tmpz00_2613;

										{	/* Sync/failsafe.scm 137 */
											obj_t BgL_tmpz00_2614;

											BgL_tmpz00_2614 =
												BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF(
													((long) 0)),
												(((BgL_globalz00_bglt)
														COBJECT(((BgL_globalz00_bglt) (
																	(BgL_variablez00_bglt) BgL_varz00_2262))))->
													BgL_pragmaz00));
											BgL_tmpz00_2613 = PAIRP(BgL_tmpz00_2614);
										}
										BgL_auxz00_2610 = BBOOL(BgL_tmpz00_2613);
									}
									((((BgL_funz00_bglt) COBJECT(
													((BgL_funz00_bglt)
														((BgL_cfunz00_bglt) BgL_funz00_2261))))->
											BgL_failsafez00) = ((obj_t) BgL_auxz00_2610), BUNSPEC);
								}
								return
									(((BgL_funz00_bglt) COBJECT(
											((BgL_funz00_bglt)
												((BgL_cfunz00_bglt) BgL_funz00_2261))))->
									BgL_failsafez00);
							}
						else
							{	/* Sync/failsafe.scm 135 */
								return BFALSE;
							}
					}
			}
		}

	}



/* &failsafe-fun?-sfun1294 */
	obj_t BGl_z62failsafezd2funzf3zd2sfun1294z91zzsync_failsafez00(obj_t
		BgL_envz00_2264, obj_t BgL_funz00_2265, obj_t BgL_varz00_2266,
		obj_t BgL_stkz00_2267)
	{
		{	/* Sync/failsafe.scm 108 */
			if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
						((obj_t)
							((BgL_variablez00_bglt) BgL_varz00_2266)), BgL_stkz00_2267)))
				{	/* Sync/failsafe.scm 111 */
					return BTRUE;
				}
			else
				{	/* Sync/failsafe.scm 113 */
					bool_t BgL_test1856z00_2631;

					{	/* Sync/failsafe.scm 113 */
						obj_t BgL_tmpz00_2632;

						BgL_tmpz00_2632 =
							(((BgL_funz00_bglt) COBJECT(
									((BgL_funz00_bglt)
										((BgL_sfunz00_bglt) BgL_funz00_2265))))->BgL_failsafez00);
						BgL_test1856z00_2631 = BOOLEANP(BgL_tmpz00_2632);
					}
					if (BgL_test1856z00_2631)
						{	/* Sync/failsafe.scm 113 */
							return
								(((BgL_funz00_bglt) COBJECT(
										((BgL_funz00_bglt)
											((BgL_sfunz00_bglt) BgL_funz00_2265))))->BgL_failsafez00);
						}
					else
						{	/* Sync/failsafe.scm 115 */
							bool_t BgL_test1857z00_2640;

							{	/* Sync/failsafe.scm 115 */
								bool_t BgL_test1858z00_2641;

								{	/* Sync/failsafe.scm 115 */
									bool_t BgL_res1765z00_2344;

									BgL_res1765z00_2344 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t)
											((BgL_variablez00_bglt) BgL_varz00_2266)),
										BGl_globalz00zzast_varz00);
									BgL_test1858z00_2641 = BgL_res1765z00_2344;
								}
								if (BgL_test1858z00_2641)
									{	/* Sync/failsafe.scm 115 */
										bool_t BgL_test1859z00_2645;

										{	/* Sync/failsafe.scm 115 */
											obj_t BgL_arg1417z00_2345;

											BgL_arg1417z00_2345 =
												(((BgL_globalz00_bglt) COBJECT(
														((BgL_globalz00_bglt)
															((BgL_variablez00_bglt) BgL_varz00_2266))))->
												BgL_modulez00);
											BgL_test1859z00_2645 =
												(BgL_arg1417z00_2345 ==
												BGl_za2moduleza2z00zzmodule_modulez00);
										}
										if (BgL_test1859z00_2645)
											{	/* Sync/failsafe.scm 115 */
												BgL_test1857z00_2640 = ((bool_t) 0);
											}
										else
											{	/* Sync/failsafe.scm 115 */
												BgL_test1857z00_2640 = ((bool_t) 1);
											}
									}
								else
									{	/* Sync/failsafe.scm 115 */
										BgL_test1857z00_2640 = ((bool_t) 0);
									}
							}
							if (BgL_test1857z00_2640)
								{	/* Sync/failsafe.scm 115 */
									{
										obj_t BgL_auxz00_2650;

										{	/* Sync/failsafe.scm 118 */
											bool_t BgL_tmpz00_2653;

											{	/* Sync/failsafe.scm 118 */
												obj_t BgL_tmpz00_2654;

												BgL_tmpz00_2654 =
													BGl_memqz00zz__r4_pairs_and_lists_6_3z00
													(CNST_TABLE_REF(((long) 0)),
													(((BgL_globalz00_bglt)
															COBJECT(((BgL_globalz00_bglt) (
																		(BgL_variablez00_bglt) BgL_varz00_2266))))->
														BgL_pragmaz00));
												BgL_tmpz00_2653 = PAIRP(BgL_tmpz00_2654);
											}
											BgL_auxz00_2650 = BBOOL(BgL_tmpz00_2653);
										}
										((((BgL_funz00_bglt) COBJECT(
														((BgL_funz00_bglt)
															((BgL_sfunz00_bglt) BgL_funz00_2265))))->
												BgL_failsafez00) = ((obj_t) BgL_auxz00_2650), BUNSPEC);
									}
									return
										(((BgL_funz00_bglt) COBJECT(
												((BgL_funz00_bglt)
													((BgL_sfunz00_bglt) BgL_funz00_2265))))->
										BgL_failsafez00);
								}
							else
								{	/* Sync/failsafe.scm 122 */
									obj_t BgL_fsafez00_2346;

									{	/* Sync/failsafe.scm 122 */
										obj_t BgL_arg1394z00_2347;
										obj_t BgL_arg1396z00_2348;

										BgL_arg1394z00_2347 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_funz00_2265)))->BgL_bodyz00);
										BgL_arg1396z00_2348 =
											MAKE_YOUNG_PAIR(
											((obj_t)
												((BgL_variablez00_bglt) BgL_varz00_2266)),
											BgL_stkz00_2267);
										BgL_fsafez00_2346 =
											BGl_failsafezf3zf3zzsync_failsafez00(((BgL_nodez00_bglt)
												BgL_arg1394z00_2347), BgL_arg1396z00_2348);
									}
									if (NULLP(BgL_stkz00_2267))
										{	/* Sync/failsafe.scm 124 */
											((((BgL_funz00_bglt) COBJECT(
															((BgL_funz00_bglt)
																((BgL_sfunz00_bglt) BgL_funz00_2265))))->
													BgL_failsafez00) =
												((obj_t) BgL_fsafez00_2346), BUNSPEC);
										}
									else
										{	/* Sync/failsafe.scm 124 */
											BFALSE;
										}
									return BgL_fsafez00_2346;
								}
						}
				}
		}

	}



/* &failsafe?-app1290 */
	obj_t BGl_z62failsafezf3zd2app1290z43zzsync_failsafez00(obj_t BgL_envz00_2268,
		obj_t BgL_nz00_2269, obj_t BgL_stkz00_2270)
	{
		{	/* Sync/failsafe.scm 93 */
			{	/* Sync/failsafe.scm 94 */
				bool_t BgL_tmpz00_2678;

				{	/* Sync/failsafe.scm 95 */
					BgL_variablez00_bglt BgL_vz00_2350;

					BgL_vz00_2350 =
						(((BgL_varz00_bglt) COBJECT(
								(((BgL_appz00_bglt) COBJECT(
											((BgL_appz00_bglt) BgL_nz00_2269)))->BgL_funz00)))->
						BgL_variablez00);
					{	/* Sync/failsafe.scm 96 */
						bool_t BgL_test1861z00_2682;

						{	/* Sync/failsafe.scm 96 */
							BgL_valuez00_bglt BgL_arg1360z00_2351;

							BgL_arg1360z00_2351 =
								(((BgL_variablez00_bglt) COBJECT(BgL_vz00_2350))->BgL_valuez00);
							BgL_test1861z00_2682 =
								CBOOL(BGl_failsafezd2funzf3z21zzsync_failsafez00(
									((BgL_funz00_bglt) BgL_arg1360z00_2351), BgL_vz00_2350,
									BgL_stkz00_2270));
						}
						if (BgL_test1861z00_2682)
							{	/* Sync/failsafe.scm 97 */
								obj_t BgL_g1263z00_2352;

								BgL_g1263z00_2352 =
									(((BgL_appz00_bglt) COBJECT(
											((BgL_appz00_bglt) BgL_nz00_2269)))->BgL_argsz00);
								{
									obj_t BgL_l1261z00_2354;

									BgL_l1261z00_2354 = BgL_g1263z00_2352;
								BgL_zc3z04anonymousza31351ze3z87_2353:
									if (NULLP(BgL_l1261z00_2354))
										{	/* Sync/failsafe.scm 97 */
											BgL_tmpz00_2678 = ((bool_t) 1);
										}
									else
										{	/* Sync/failsafe.scm 97 */
											obj_t BgL_nvz00_2355;

											{	/* Sync/failsafe.scm 97 */
												obj_t BgL_nz00_2356;

												BgL_nz00_2356 = CAR(((obj_t) BgL_l1261z00_2354));
												BgL_nvz00_2355 =
													BGl_failsafezf3zf3zzsync_failsafez00(
													((BgL_nodez00_bglt) BgL_nz00_2356), BgL_stkz00_2270);
											}
											if (CBOOL(BgL_nvz00_2355))
												{	/* Sync/failsafe.scm 97 */
													obj_t BgL_arg1357z00_2357;

													BgL_arg1357z00_2357 =
														CDR(((obj_t) BgL_l1261z00_2354));
													{
														obj_t BgL_l1261z00_2699;

														BgL_l1261z00_2699 = BgL_arg1357z00_2357;
														BgL_l1261z00_2354 = BgL_l1261z00_2699;
														goto BgL_zc3z04anonymousza31351ze3z87_2353;
													}
												}
											else
												{	/* Sync/failsafe.scm 97 */
													BgL_tmpz00_2678 = ((bool_t) 0);
												}
										}
								}
							}
						else
							{	/* Sync/failsafe.scm 96 */
								BgL_tmpz00_2678 = ((bool_t) 0);
							}
					}
				}
				return BBOOL(BgL_tmpz00_2678);
			}
		}

	}



/* &failsafe?-sync1288 */
	obj_t BGl_z62failsafezf3zd2sync1288z43zzsync_failsafez00(obj_t
		BgL_envz00_2271, obj_t BgL_nz00_2272, obj_t BgL_stkz00_2273)
	{
		{	/* Sync/failsafe.scm 84 */
			{	/* Sync/failsafe.scm 86 */
				obj_t BgL__andtest_1112z00_2359;

				BgL__andtest_1112z00_2359 =
					BGl_failsafezf3zf3zzsync_failsafez00(
					(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nz00_2272)))->BgL_mutexz00),
					BgL_stkz00_2273);
				if (CBOOL(BgL__andtest_1112z00_2359))
					{	/* Sync/failsafe.scm 87 */
						obj_t BgL__andtest_1113z00_2360;

						BgL__andtest_1113z00_2360 =
							BGl_failsafezf3zf3zzsync_failsafez00(
							(((BgL_syncz00_bglt) COBJECT(
										((BgL_syncz00_bglt) BgL_nz00_2272)))->BgL_prelockz00),
							BgL_stkz00_2273);
						if (CBOOL(BgL__andtest_1113z00_2360))
							{	/* Sync/failsafe.scm 87 */
								return
									BGl_failsafezf3zf3zzsync_failsafez00(
									(((BgL_syncz00_bglt) COBJECT(
												((BgL_syncz00_bglt) BgL_nz00_2272)))->BgL_bodyz00),
									BgL_stkz00_2273);
							}
						else
							{	/* Sync/failsafe.scm 87 */
								return BFALSE;
							}
					}
				else
					{	/* Sync/failsafe.scm 86 */
						return BFALSE;
					}
			}
		}

	}



/* &failsafe?-sequence1286 */
	obj_t BGl_z62failsafezf3zd2sequence1286z43zzsync_failsafez00(obj_t
		BgL_envz00_2274, obj_t BgL_nz00_2275, obj_t BgL_stkz00_2276)
	{
		{	/* Sync/failsafe.scm 77 */
			{	/* Sync/failsafe.scm 78 */
				bool_t BgL_tmpz00_2714;

				{	/* Sync/failsafe.scm 79 */
					obj_t BgL_g1259z00_2362;

					BgL_g1259z00_2362 =
						(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nz00_2275)))->BgL_nodesz00);
					{
						obj_t BgL_l1257z00_2364;

						BgL_l1257z00_2364 = BgL_g1259z00_2362;
					BgL_zc3z04anonymousza31341ze3z87_2363:
						if (NULLP(BgL_l1257z00_2364))
							{	/* Sync/failsafe.scm 79 */
								BgL_tmpz00_2714 = ((bool_t) 1);
							}
						else
							{	/* Sync/failsafe.scm 79 */
								obj_t BgL_nvz00_2365;

								{	/* Sync/failsafe.scm 79 */
									obj_t BgL_nz00_2366;

									BgL_nz00_2366 = CAR(((obj_t) BgL_l1257z00_2364));
									BgL_nvz00_2365 =
										BGl_failsafezf3zf3zzsync_failsafez00(
										((BgL_nodez00_bglt) BgL_nz00_2366), BgL_stkz00_2276);
								}
								if (CBOOL(BgL_nvz00_2365))
									{	/* Sync/failsafe.scm 79 */
										obj_t BgL_arg1344z00_2367;

										BgL_arg1344z00_2367 = CDR(((obj_t) BgL_l1257z00_2364));
										{
											obj_t BgL_l1257z00_2727;

											BgL_l1257z00_2727 = BgL_arg1344z00_2367;
											BgL_l1257z00_2364 = BgL_l1257z00_2727;
											goto BgL_zc3z04anonymousza31341ze3z87_2363;
										}
									}
								else
									{	/* Sync/failsafe.scm 79 */
										BgL_tmpz00_2714 = ((bool_t) 0);
									}
							}
					}
				}
				return BBOOL(BgL_tmpz00_2714);
			}
		}

	}



/* &failsafe?-kwote1284 */
	obj_t BGl_z62failsafezf3zd2kwote1284z43zzsync_failsafez00(obj_t
		BgL_envz00_2277, obj_t BgL_nz00_2278, obj_t BgL_stkz00_2279)
	{
		{	/* Sync/failsafe.scm 71 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &failsafe?-var1282 */
	obj_t BGl_z62failsafezf3zd2var1282z43zzsync_failsafez00(obj_t BgL_envz00_2280,
		obj_t BgL_nz00_2281, obj_t BgL_stkz00_2282)
	{
		{	/* Sync/failsafe.scm 65 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &failsafe?-atom1280 */
	obj_t BGl_z62failsafezf3zd2atom1280z43zzsync_failsafez00(obj_t
		BgL_envz00_2283, obj_t BgL_nz00_2284, obj_t BgL_stkz00_2285)
	{
		{	/* Sync/failsafe.scm 59 */
			return BBOOL(((bool_t) 1));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsync_failsafez00()
	{
		{	/* Sync/failsafe.scm 16 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1799z00zzsync_failsafez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1799z00zzsync_failsafez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1799z00zzsync_failsafez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1799z00zzsync_failsafez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1799z00zzsync_failsafez00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string1799z00zzsync_failsafez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1799z00zzsync_failsafez00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string1799z00zzsync_failsafez00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1799z00zzsync_failsafez00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string1799z00zzsync_failsafez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1799z00zzsync_failsafez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1799z00zzsync_failsafez00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string1799z00zzsync_failsafez00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1799z00zzsync_failsafez00));
			BGl_modulezd2initializa7ationz75zzast_appz00(((long) 449859289),
				BSTRING_TO_STRING(BGl_string1799z00zzsync_failsafez00));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string1799z00zzsync_failsafez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1799z00zzsync_failsafez00));
			BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 460136356),
				BSTRING_TO_STRING(BGl_string1799z00zzsync_failsafez00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long) 395790731),
				BSTRING_TO_STRING(BGl_string1799z00zzsync_failsafez00));
		}

	}

#ifdef __cplusplus
}
#endif
