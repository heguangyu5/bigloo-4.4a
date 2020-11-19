/*===========================================================================*/
/*   (Cfa/arithmetic.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/arithmetic.scm) */
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

	typedef struct BgL_approxz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_typez00_bgl *BgL_typez00;
		bool_t BgL_typezd2lockedzf3z21;
		obj_t BgL_allocsz00;
		bool_t BgL_topzf3zf3;
		long BgL_lostzd2stampzd2;
		obj_t BgL_dupz00;
	}                *BgL_approxz00_bglt;

	typedef struct BgL_prezd2arithmeticzd2appz00_bgl
	{
		obj_t BgL_speczd2typeszd2;
	}                                *BgL_prezd2arithmeticzd2appz00_bglt;

	typedef struct BgL_arithmeticzd2appzd2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		obj_t BgL_speczd2typeszd2;
	}                          *BgL_arithmeticzd2appzd2_bglt;


	BGL_EXPORTED_DECL obj_t
		BGl_cleanupzd2arithmeticzd2nodesz12z12zzcfa_arithmeticz00(obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	static obj_t
		BGl_z62cleanupzd2nodez12zd2funcal1577z70zzcfa_arithmeticz00(obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	extern obj_t BGl_continuezd2cfaz12zc0zzcfa_iteratez00(obj_t);
	static obj_t
		BGl_z62cleanupzd2nodez12zd2switch1559z70zzcfa_arithmeticz00(obj_t, obj_t);
	static obj_t BGl_unspecifiedzd2typeze70z35zzcfa_arithmeticz00(obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzcfa_arithmeticz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t
		BGl_z62cleanupzd2nodez12zd2makezd2b1569za2zzcfa_arithmeticz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_arithmeticz00();
	static obj_t
		BGl_z62cleanupzd2nodez12zd2jumpzd2e1567za2zzcfa_arithmeticz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_z62cleanupzd2nodez121546za2zzcfa_arithmeticz00(obj_t, obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_cleanupzd2typeze70z35zzcfa_arithmeticz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzcfa_arithmeticz00();
	static obj_t BGl_z62cleanupzd2nodez12zd2setq1553z70zzcfa_arithmeticz00(obj_t,
		obj_t);
	extern BgL_approxz00_bglt BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
	static obj_t
		BGl_z62cleanupzd2nodez12zd2letzd2va1563za2zzcfa_arithmeticz00(obj_t, obj_t);
	static obj_t
		BGl_z62cleanupzd2nodez12zd2letzd2fu1561za2zzcfa_arithmeticz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t
		BGl_z62cleanupzd2arithmeticzd2nodesz12z70zzcfa_arithmeticz00(obj_t, obj_t);
	static obj_t
		BGl_z62cleanupzd2nodez12zd2setzd2ex1565za2zzcfa_arithmeticz00(obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t
		BGl_z62nodezd2setupz12zd2prezd2arit1581za2zzcfa_arithmeticz00(obj_t, obj_t);
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	extern obj_t BGl_nodezd2setupza2z12z62zzcfa_setupz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_arithmeticz00 = BUNSPEC;
	static obj_t
		BGl_z62cleanupzd2nodez12zd2appzd2ly1575za2zzcfa_arithmeticz00(obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62cleanupzd2nodez12zd2condit1555z70zzcfa_arithmeticz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcfa_arithmeticz00();
	static obj_t BGl_genericzd2initzd2zzcfa_arithmeticz00();
	extern obj_t BGl_arithmeticzd2appzd2zzcfa_info2z00;
	extern obj_t BGl_typez00zztype_typez00;
	extern BgL_approxz00_bglt BGl_loosez12z12zzcfa_loosez00(BgL_approxz00_bglt,
		obj_t);
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	static obj_t
		BGl_z62cleanupzd2nodez12zd2boxzd2re1571za2zzcfa_arithmeticz00(obj_t, obj_t);
	static obj_t BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cleanupzd2nodez12zd2app1579z70zzcfa_arithmeticz00(obj_t,
		obj_t);
	static obj_t BGl_za2arithmeticzd2nodesza2zd2zzcfa_arithmeticz00 = BUNSPEC;
	static obj_t
		BGl_z62cleanupzd2nodez12zd2boxzd2se1573za2zzcfa_arithmeticz00(obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t
		BGl_z62cleanupzd2nodez12zd2sequen1549z70zzcfa_arithmeticz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzcfa_arithmeticz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_setupz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_cfaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_iteratez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_loosez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzcfa_arithmeticz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_arithmeticz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_arithmeticz00();
	extern BgL_approxz00_bglt
		BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_typez00_bglt);
	static obj_t BGl_z62cleanupzd2nodez12zd2fail1557z70zzcfa_arithmeticz00(obj_t,
		obj_t);
	extern obj_t BGl_prezd2arithmeticzd2appz00zzcfa_info2z00;
	static obj_t BGl_z62cleanupzd2nodez12zd2sync1551z70zzcfa_arithmeticz00(obj_t,
		obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	extern BgL_approxz00_bglt BGl_cfaz12z12zzcfa_cfaz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t BGl_z62cleanupzd2nodez12za2zzcfa_arithmeticz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2arithmeticzd2app1583z70zzcfa_arithmeticz00(obj_t, obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_approxzd2setzd2typez12z12zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_typez00_bglt);
	static obj_t __cnst[3];


	   
		 
		DEFINE_STRING(BGl_string2172z00zzcfa_arithmeticz00,
		BgL_bgl_string2172za700za7za7c2200za7, "cleanup-node!1546", 17);
	      DEFINE_STRING(BGl_string2174z00zzcfa_arithmeticz00,
		BgL_bgl_string2174za700za7za7c2201za7, "cleanup-node!", 13);
	extern obj_t BGl_cfaz12zd2envzc0zzcfa_cfaz00;
	   
		 
		DEFINE_STRING(BGl_string2191z00zzcfa_arithmeticz00,
		BgL_bgl_string2191za700za7za7c2202za7, "node-setup!", 11);
	      DEFINE_STRING(BGl_string2193z00zzcfa_arithmeticz00,
		BgL_bgl_string2193za700za7za7c2203za7, "cfa!::approx", 12);
	      DEFINE_STRING(BGl_string2194z00zzcfa_arithmeticz00,
		BgL_bgl_string2194za700za7za7c2204za7, "Illegal arithmetic node", 23);
	      DEFINE_STRING(BGl_string2195z00zzcfa_arithmeticz00,
		BgL_bgl_string2195za700za7za7c2205za7, "cfa_arithmetic", 14);
	      DEFINE_STRING(BGl_string2196z00zzcfa_arithmeticz00,
		BgL_bgl_string2196za700za7za7c2206za7, "all c-eq? arithmetic-app ", 25);
	extern obj_t BGl_nodezd2setupz12zd2envz12zzcfa_setupz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2171z00zzcfa_arithmeticz00,
		BgL_bgl_za762cleanupza7d2nod2207z00,
		BGl_z62cleanupzd2nodez121546za2zzcfa_arithmeticz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2173z00zzcfa_arithmeticz00,
		BgL_bgl_za762cleanupza7d2nod2208z00,
		BGl_z62cleanupzd2nodez12zd2sequen1549z70zzcfa_arithmeticz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2175z00zzcfa_arithmeticz00,
		BgL_bgl_za762cleanupza7d2nod2209z00,
		BGl_z62cleanupzd2nodez12zd2sync1551z70zzcfa_arithmeticz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2176z00zzcfa_arithmeticz00,
		BgL_bgl_za762cleanupza7d2nod2210z00,
		BGl_z62cleanupzd2nodez12zd2setq1553z70zzcfa_arithmeticz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2177z00zzcfa_arithmeticz00,
		BgL_bgl_za762cleanupza7d2nod2211z00,
		BGl_z62cleanupzd2nodez12zd2condit1555z70zzcfa_arithmeticz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2178z00zzcfa_arithmeticz00,
		BgL_bgl_za762cleanupza7d2nod2212z00,
		BGl_z62cleanupzd2nodez12zd2fail1557z70zzcfa_arithmeticz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2179z00zzcfa_arithmeticz00,
		BgL_bgl_za762cleanupza7d2nod2213z00,
		BGl_z62cleanupzd2nodez12zd2switch1559z70zzcfa_arithmeticz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2180z00zzcfa_arithmeticz00,
		BgL_bgl_za762cleanupza7d2nod2214z00,
		BGl_z62cleanupzd2nodez12zd2letzd2fu1561za2zzcfa_arithmeticz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2181z00zzcfa_arithmeticz00,
		BgL_bgl_za762cleanupza7d2nod2215z00,
		BGl_z62cleanupzd2nodez12zd2letzd2va1563za2zzcfa_arithmeticz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2182z00zzcfa_arithmeticz00,
		BgL_bgl_za762cleanupza7d2nod2216z00,
		BGl_z62cleanupzd2nodez12zd2setzd2ex1565za2zzcfa_arithmeticz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2183z00zzcfa_arithmeticz00,
		BgL_bgl_za762cleanupza7d2nod2217z00,
		BGl_z62cleanupzd2nodez12zd2jumpzd2e1567za2zzcfa_arithmeticz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2184z00zzcfa_arithmeticz00,
		BgL_bgl_za762cleanupza7d2nod2218z00,
		BGl_z62cleanupzd2nodez12zd2makezd2b1569za2zzcfa_arithmeticz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2185z00zzcfa_arithmeticz00,
		BgL_bgl_za762cleanupza7d2nod2219z00,
		BGl_z62cleanupzd2nodez12zd2boxzd2re1571za2zzcfa_arithmeticz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2186z00zzcfa_arithmeticz00,
		BgL_bgl_za762cleanupza7d2nod2220z00,
		BGl_z62cleanupzd2nodez12zd2boxzd2se1573za2zzcfa_arithmeticz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2187z00zzcfa_arithmeticz00,
		BgL_bgl_za762cleanupza7d2nod2221z00,
		BGl_z62cleanupzd2nodez12zd2appzd2ly1575za2zzcfa_arithmeticz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2188z00zzcfa_arithmeticz00,
		BgL_bgl_za762cleanupza7d2nod2222z00,
		BGl_z62cleanupzd2nodez12zd2funcal1577z70zzcfa_arithmeticz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2189z00zzcfa_arithmeticz00,
		BgL_bgl_za762cleanupza7d2nod2223z00,
		BGl_z62cleanupzd2nodez12zd2app1579z70zzcfa_arithmeticz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2190z00zzcfa_arithmeticz00,
		BgL_bgl_za762nodeza7d2setupza72224za7,
		BGl_z62nodezd2setupz12zd2prezd2arit1581za2zzcfa_arithmeticz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2192z00zzcfa_arithmeticz00,
		BgL_bgl_za762cfaza712za7d2arit2225za7,
		BGl_z62cfaz12zd2arithmeticzd2app1583z70zzcfa_arithmeticz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cleanupzd2arithmeticzd2nodesz12zd2envzc0zzcfa_arithmeticz00,
		BgL_bgl_za762cleanupza7d2ari2226z00,
		BGl_z62cleanupzd2arithmeticzd2nodesz12z70zzcfa_arithmeticz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_cleanupzd2nodez12zd2envz12zzcfa_arithmeticz00,
		BgL_bgl_za762cleanupza7d2nod2227z00,
		BGl_z62cleanupzd2nodez12za2zzcfa_arithmeticz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzcfa_arithmeticz00));
		     ADD_ROOT((void
				*) (&BGl_za2arithmeticzd2nodesza2zd2zzcfa_arithmeticz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzcfa_arithmeticz00(long
		BgL_checksumz00_4134, char *BgL_fromz00_4135)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_arithmeticz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_arithmeticz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcfa_arithmeticz00();
					BGl_libraryzd2moduleszd2initz00zzcfa_arithmeticz00();
					BGl_cnstzd2initzd2zzcfa_arithmeticz00();
					BGl_importedzd2moduleszd2initz00zzcfa_arithmeticz00();
					BGl_genericzd2initzd2zzcfa_arithmeticz00();
					BGl_methodzd2initzd2zzcfa_arithmeticz00();
					return BGl_toplevelzd2initzd2zzcfa_arithmeticz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_arithmeticz00()
	{
		{	/* Cfa/arithmetic.scm 28 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_arithmetic");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"cfa_arithmetic");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"cfa_arithmetic");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"cfa_arithmetic");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cfa_arithmetic");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cfa_arithmetic");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cfa_arithmetic");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "cfa_arithmetic");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_arithmetic");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_arithmeticz00()
	{
		{	/* Cfa/arithmetic.scm 28 */
			{	/* Cfa/arithmetic.scm 28 */
				obj_t BgL_cportz00_3974;

				{	/* Cfa/arithmetic.scm 28 */
					obj_t BgL_stringz00_3982;

					BgL_stringz00_3982 = BGl_string2196z00zzcfa_arithmeticz00;
					{	/* Cfa/arithmetic.scm 28 */
						obj_t BgL_startz00_3983;

						BgL_startz00_3983 = BINT(((long) 0));
						{	/* Cfa/arithmetic.scm 28 */
							obj_t BgL_endz00_3984;

							BgL_endz00_3984 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3982)));
							{	/* Cfa/arithmetic.scm 28 */

								BgL_cportz00_3974 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3982, BgL_startz00_3983, BgL_endz00_3984);
				}}}}
				{
					long BgL_iz00_3975;

					BgL_iz00_3975 = ((long) 2);
				BgL_loopz00_3976:
					if ((BgL_iz00_3975 == ((long) -1)))
						{	/* Cfa/arithmetic.scm 28 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/arithmetic.scm 28 */
							{	/* Cfa/arithmetic.scm 28 */
								obj_t BgL_arg2198z00_3978;

								{	/* Cfa/arithmetic.scm 28 */

									{	/* Cfa/arithmetic.scm 28 */
										obj_t BgL_locationz00_3980;

										BgL_locationz00_3980 = BBOOL(((bool_t) 0));
										{	/* Cfa/arithmetic.scm 28 */

											BgL_arg2198z00_3978 =
												BGl_readz00zz__readerz00(BgL_cportz00_3974,
												BgL_locationz00_3980);
										}
									}
								}
								{	/* Cfa/arithmetic.scm 28 */
									int BgL_tmpz00_4164;

									BgL_tmpz00_4164 = (int) (BgL_iz00_3975);
									CNST_TABLE_SET(BgL_tmpz00_4164, BgL_arg2198z00_3978);
							}}
							{	/* Cfa/arithmetic.scm 28 */
								int BgL_auxz00_3981;

								BgL_auxz00_3981 = (int) ((BgL_iz00_3975 - ((long) 1)));
								{
									long BgL_iz00_4169;

									BgL_iz00_4169 = (long) (BgL_auxz00_3981);
									BgL_iz00_3975 = BgL_iz00_4169;
									goto BgL_loopz00_3976;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcfa_arithmeticz00()
	{
		{	/* Cfa/arithmetic.scm 28 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_arithmeticz00()
	{
		{	/* Cfa/arithmetic.scm 28 */
			BGl_za2arithmeticzd2nodesza2zd2zzcfa_arithmeticz00 = BNIL;
			return BUNSPEC;
		}

	}



/* cleanup-arithmetic-nodes! */
	BGL_EXPORTED_DEF obj_t
		BGl_cleanupzd2arithmeticzd2nodesz12z12zzcfa_arithmeticz00(obj_t
		BgL_globalsz00_3)
	{
		{	/* Cfa/arithmetic.scm 52 */
			{
				obj_t BgL_l1510z00_2807;

				BgL_l1510z00_2807 = BGl_za2arithmeticzd2nodesza2zd2zzcfa_arithmeticz00;
			BgL_zc3z04anonymousza31590ze3z87_2808:
				if (PAIRP(BgL_l1510z00_2807))
					{	/* Cfa/arithmetic.scm 63 */
						{	/* Cfa/arithmetic.scm 64 */
							obj_t BgL_nodez00_2810;

							BgL_nodez00_2810 = CAR(BgL_l1510z00_2807);
							{	/* Cfa/arithmetic.scm 65 */
								BgL_variablez00_bglt BgL_fz00_2812;

								BgL_fz00_2812 =
									(((BgL_varz00_bglt) COBJECT(
											(((BgL_appz00_bglt) COBJECT(
														((BgL_appz00_bglt)
															((BgL_appz00_bglt) BgL_nodez00_2810))))->
												BgL_funz00)))->BgL_variablez00);
								{	/* Cfa/arithmetic.scm 65 */
									BgL_valuez00_bglt BgL_valz00_2813;

									BgL_valz00_2813 =
										(((BgL_variablez00_bglt) COBJECT(BgL_fz00_2812))->
										BgL_valuez00);
									{	/* Cfa/arithmetic.scm 66 */

										{	/* Cfa/arithmetic.scm 68 */
											bool_t BgL_test2231z00_4180;

											{	/* Cfa/arithmetic.scm 68 */
												BgL_typez00_bglt BgL_arg1597z00_2816;

												BgL_arg1597z00_2816 =
													(((BgL_variablez00_bglt) COBJECT(BgL_fz00_2812))->
													BgL_typez00);
												BgL_test2231z00_4180 =
													(((obj_t) BgL_arg1597z00_2816) ==
													BGl_za2_za2z00zztype_cachez00);
											}
											if (BgL_test2231z00_4180)
												{	/* Cfa/arithmetic.scm 69 */
													BgL_typez00_bglt BgL_vz00_3710;

													BgL_vz00_3710 =
														((BgL_typez00_bglt)
														BGl_za2objza2z00zztype_cachez00);
													((((BgL_variablez00_bglt) COBJECT(BgL_fz00_2812))->
															BgL_typez00) =
														((BgL_typez00_bglt) BgL_vz00_3710), BUNSPEC);
												}
											else
												{	/* Cfa/arithmetic.scm 68 */
													BFALSE;
												}
										}
										{	/* Cfa/arithmetic.scm 70 */
											bool_t BgL_test2232z00_4186;

											{	/* Cfa/arithmetic.scm 70 */
												BgL_typez00_bglt BgL_arg1604z00_2819;

												BgL_arg1604z00_2819 =
													(((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_nodez00_2810)))->
													BgL_typez00);
												BgL_test2232z00_4186 =
													(((obj_t) BgL_arg1604z00_2819) ==
													BGl_za2_za2z00zztype_cachez00);
											}
											if (BgL_test2232z00_4186)
												{	/* Cfa/arithmetic.scm 71 */
													BgL_typez00_bglt BgL_vz00_3713;

													BgL_vz00_3713 =
														((BgL_typez00_bglt)
														BGl_za2objza2z00zztype_cachez00);
													((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																		BgL_nodez00_2810)))->BgL_typez00) =
														((BgL_typez00_bglt) BgL_vz00_3713), BUNSPEC);
												}
											else
												{	/* Cfa/arithmetic.scm 70 */
													BFALSE;
												}
										}
										{	/* Cfa/arithmetic.scm 73 */
											bool_t BgL_test2233z00_4194;

											{	/* Cfa/arithmetic.scm 73 */
												bool_t BgL_res2122z00_3714;

												BgL_res2122z00_3714 =
													BGl_isazf3zf3zz__objectz00(
													((obj_t) BgL_valz00_2813), BGl_sfunz00zzast_varz00);
												BgL_test2233z00_4194 = BgL_res2122z00_3714;
											}
											if (BgL_test2233z00_4194)
												{	/* Cfa/arithmetic.scm 74 */
													obj_t BgL_arg1606z00_2821;

													{	/* Cfa/arithmetic.scm 74 */
														obj_t BgL_l1504z00_2822;

														BgL_l1504z00_2822 =
															(((BgL_sfunz00_bglt) COBJECT(
																	((BgL_sfunz00_bglt) BgL_valz00_2813)))->
															BgL_argsz00);
														if (NULLP(BgL_l1504z00_2822))
															{	/* Cfa/arithmetic.scm 74 */
																BgL_arg1606z00_2821 = BNIL;
															}
														else
															{	/* Cfa/arithmetic.scm 74 */
																obj_t BgL_head1506z00_2824;

																{	/* Cfa/arithmetic.scm 74 */
																	obj_t BgL_arg1624z00_2836;

																	{	/* Cfa/arithmetic.scm 74 */
																		obj_t BgL_arg1626z00_2837;

																		BgL_arg1626z00_2837 =
																			CAR(((obj_t) BgL_l1504z00_2822));
																		BgL_arg1624z00_2836 =
																			BGl_cleanupzd2typeze70z35zzcfa_arithmeticz00
																			(BgL_arg1626z00_2837);
																	}
																	{	/* Cfa/arithmetic.scm 74 */
																		obj_t BgL_res2124z00_3718;

																		BgL_res2124z00_3718 =
																			MAKE_YOUNG_PAIR(BgL_arg1624z00_2836,
																			BNIL);
																		BgL_head1506z00_2824 = BgL_res2124z00_3718;
																	}
																}
																{	/* Cfa/arithmetic.scm 74 */
																	obj_t BgL_g1509z00_2825;

																	BgL_g1509z00_2825 =
																		CDR(((obj_t) BgL_l1504z00_2822));
																	{
																		obj_t BgL_l1504z00_2827;
																		obj_t BgL_tail1507z00_2828;

																		BgL_l1504z00_2827 = BgL_g1509z00_2825;
																		BgL_tail1507z00_2828 = BgL_head1506z00_2824;
																	BgL_zc3z04anonymousza31608ze3z87_2829:
																		if (NULLP(BgL_l1504z00_2827))
																			{	/* Cfa/arithmetic.scm 74 */
																				BgL_arg1606z00_2821 =
																					BgL_head1506z00_2824;
																			}
																		else
																			{	/* Cfa/arithmetic.scm 74 */
																				obj_t BgL_newtail1508z00_2831;

																				{	/* Cfa/arithmetic.scm 74 */
																					obj_t BgL_arg1612z00_2833;

																					{	/* Cfa/arithmetic.scm 74 */
																						obj_t BgL_arg1613z00_2834;

																						BgL_arg1613z00_2834 =
																							CAR(((obj_t) BgL_l1504z00_2827));
																						BgL_arg1612z00_2833 =
																							BGl_cleanupzd2typeze70z35zzcfa_arithmeticz00
																							(BgL_arg1613z00_2834);
																					}
																					{	/* Cfa/arithmetic.scm 74 */
																						obj_t BgL_res2126z00_3722;

																						BgL_res2126z00_3722 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1612z00_2833, BNIL);
																						BgL_newtail1508z00_2831 =
																							BgL_res2126z00_3722;
																					}
																				}
																				SET_CDR(BgL_tail1507z00_2828,
																					BgL_newtail1508z00_2831);
																				{	/* Cfa/arithmetic.scm 74 */
																					obj_t BgL_arg1611z00_2832;

																					BgL_arg1611z00_2832 =
																						CDR(((obj_t) BgL_l1504z00_2827));
																					{
																						obj_t BgL_tail1507z00_4217;
																						obj_t BgL_l1504z00_4216;

																						BgL_l1504z00_4216 =
																							BgL_arg1611z00_2832;
																						BgL_tail1507z00_4217 =
																							BgL_newtail1508z00_2831;
																						BgL_tail1507z00_2828 =
																							BgL_tail1507z00_4217;
																						BgL_l1504z00_2827 =
																							BgL_l1504z00_4216;
																						goto
																							BgL_zc3z04anonymousza31608ze3z87_2829;
																					}
																				}
																			}
																	}
																}
															}
													}
													((((BgL_sfunz00_bglt) COBJECT(
																	((BgL_sfunz00_bglt) BgL_valz00_2813)))->
															BgL_argsz00) =
														((obj_t) BgL_arg1606z00_2821), BUNSPEC);
												}
											else
												{	/* Cfa/arithmetic.scm 75 */
													bool_t BgL_test2236z00_4220;

													{	/* Cfa/arithmetic.scm 75 */
														bool_t BgL_res2127z00_3726;

														BgL_res2127z00_3726 =
															BGl_isazf3zf3zz__objectz00(
															((obj_t) BgL_valz00_2813),
															BGl_cfunz00zzast_varz00);
														BgL_test2236z00_4220 = BgL_res2127z00_3726;
													}
													if (BgL_test2236z00_4220)
														{	/* Cfa/arithmetic.scm 76 */
															obj_t BgL_g1158z00_2839;

															BgL_g1158z00_2839 =
																(((BgL_cfunz00_bglt) COBJECT(
																		((BgL_cfunz00_bglt) BgL_valz00_2813)))->
																BgL_argszd2typezd2);
															{
																obj_t BgL_lz00_2841;

																{	/* Cfa/arithmetic.scm 76 */
																	bool_t BgL_tmpz00_4225;

																	BgL_lz00_2841 = BgL_g1158z00_2839;
																BgL_zc3z04anonymousza31629ze3z87_2842:
																	if (PAIRP(BgL_lz00_2841))
																		{	/* Cfa/arithmetic.scm 77 */
																			{	/* Cfa/arithmetic.scm 79 */
																				obj_t BgL_tmpz00_4228;

																				BgL_tmpz00_4228 =
																					BGl_cleanupzd2typeze70z35zzcfa_arithmeticz00
																					(CAR(BgL_lz00_2841));
																				SET_CAR(BgL_lz00_2841, BgL_tmpz00_4228);
																			}
																			{
																				obj_t BgL_lz00_4232;

																				BgL_lz00_4232 = CDR(BgL_lz00_2841);
																				BgL_lz00_2841 = BgL_lz00_4232;
																				goto
																					BgL_zc3z04anonymousza31629ze3z87_2842;
																			}
																		}
																	else
																		{	/* Cfa/arithmetic.scm 77 */
																			BgL_tmpz00_4225 = ((bool_t) 0);
																		}
																	BBOOL(BgL_tmpz00_4225);
																}
															}
														}
													else
														{	/* Cfa/arithmetic.scm 75 */
															BFALSE;
														}
												}
										}
									}
								}
							}
						}
						{
							obj_t BgL_l1510z00_4235;

							BgL_l1510z00_4235 = CDR(BgL_l1510z00_2807);
							BgL_l1510z00_2807 = BgL_l1510z00_4235;
							goto BgL_zc3z04anonymousza31590ze3z87_2808;
						}
					}
				else
					{	/* Cfa/arithmetic.scm 63 */
						((bool_t) 1);
					}
			}
			{
				obj_t BgL_l1512z00_2852;

				BgL_l1512z00_2852 = BgL_globalsz00_3;
			BgL_zc3z04anonymousza31642ze3z87_2853:
				if (PAIRP(BgL_l1512z00_2852))
					{	/* Cfa/arithmetic.scm 83 */
						{	/* Cfa/arithmetic.scm 83 */
							obj_t BgL_arg1644z00_2855;

							BgL_arg1644z00_2855 = CAR(BgL_l1512z00_2852);
							{	/* Cfa/arithmetic.scm 90 */
								BgL_valuez00_bglt BgL_funz00_3735;

								BgL_funz00_3735 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_arg1644z00_2855)))->
									BgL_valuez00);
								{	/* Cfa/arithmetic.scm 90 */
									obj_t BgL_bodyz00_3736;

									BgL_bodyz00_3736 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_funz00_3735)))->BgL_bodyz00);
									{	/* Cfa/arithmetic.scm 91 */

										BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
											((BgL_nodez00_bglt) BgL_bodyz00_3736));
									}
								}
							}
						}
						{
							obj_t BgL_l1512z00_4246;

							BgL_l1512z00_4246 = CDR(BgL_l1512z00_2852);
							BgL_l1512z00_2852 = BgL_l1512z00_4246;
							goto BgL_zc3z04anonymousza31642ze3z87_2853;
						}
					}
				else
					{	/* Cfa/arithmetic.scm 83 */
						((bool_t) 1);
					}
			}
			return BgL_globalsz00_3;
		}

	}



/* cleanup-type~0 */
	obj_t BGl_cleanupzd2typeze70z35zzcfa_arithmeticz00(obj_t BgL_tz00_2858)
	{
		{	/* Cfa/arithmetic.scm 62 */
			if (BGl_isazf3zf3zz__objectz00(BgL_tz00_2858, BGl_typez00zztype_typez00))
				{	/* Cfa/arithmetic.scm 55 */
					if ((BgL_tz00_2858 == BGl_za2_za2z00zztype_cachez00))
						{	/* Cfa/arithmetic.scm 56 */
							return BGl_za2objza2z00zztype_cachez00;
						}
					else
						{	/* Cfa/arithmetic.scm 56 */
							return BgL_tz00_2858;
						}
				}
			else
				{	/* Cfa/arithmetic.scm 55 */
					if (BGl_isazf3zf3zz__objectz00(BgL_tz00_2858,
							BGl_localz00zzast_varz00))
						{	/* Cfa/arithmetic.scm 57 */
							{	/* Cfa/arithmetic.scm 58 */
								bool_t BgL_test2242z00_4254;

								{	/* Cfa/arithmetic.scm 58 */
									BgL_typez00_bglt BgL_arg1664z00_2865;

									BgL_arg1664z00_2865 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_tz00_2858))))->BgL_typez00);
									BgL_test2242z00_4254 =
										(
										((obj_t) BgL_arg1664z00_2865) ==
										BGl_za2_za2z00zztype_cachez00);
								}
								if (BgL_test2242z00_4254)
									{	/* Cfa/arithmetic.scm 59 */
										BgL_typez00_bglt BgL_vz00_3703;

										BgL_vz00_3703 =
											((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00);
										((((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt) BgL_tz00_2858))))->
												BgL_typez00) =
											((BgL_typez00_bglt) BgL_vz00_3703), BUNSPEC);
									}
								else
									{	/* Cfa/arithmetic.scm 58 */
										BFALSE;
									}
							}
							return BgL_tz00_2858;
						}
					else
						{	/* Cfa/arithmetic.scm 57 */
							return BgL_tz00_2858;
						}
				}
		}

	}



/* &cleanup-arithmetic-nodes! */
	obj_t BGl_z62cleanupzd2arithmeticzd2nodesz12z70zzcfa_arithmeticz00(obj_t
		BgL_envz00_3908, obj_t BgL_globalsz00_3909)
	{
		{	/* Cfa/arithmetic.scm 52 */
			return
				BGl_cleanupzd2arithmeticzd2nodesz12z12zzcfa_arithmeticz00
				(BgL_globalsz00_3909);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_arithmeticz00()
	{
		{	/* Cfa/arithmetic.scm 28 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_arithmeticz00()
	{
		{	/* Cfa/arithmetic.scm 28 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_cleanupzd2nodez12zd2envz12zzcfa_arithmeticz00,
				BGl_proc2171z00zzcfa_arithmeticz00, BGl_nodez00zzast_nodez00,
				BGl_string2172z00zzcfa_arithmeticz00);
		}

	}



/* &cleanup-node!1546 */
	obj_t BGl_z62cleanupzd2nodez121546za2zzcfa_arithmeticz00(obj_t
		BgL_envz00_3911, obj_t BgL_nodez00_3912)
	{
		{	/* Cfa/arithmetic.scm 97 */
			return BUNSPEC;
		}

	}



/* cleanup-node! */
	obj_t BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(BgL_nodez00_bglt
		BgL_nodez00_5)
	{
		{	/* Cfa/arithmetic.scm 97 */
			{	/* Cfa/arithmetic.scm 97 */
				obj_t BgL_method1547z00_2873;

				{	/* Cfa/arithmetic.scm 97 */
					obj_t BgL_res2140z00_3780;

					{	/* Cfa/arithmetic.scm 97 */
						long BgL_objzd2classzd2numz00_3745;

						{	/* Cfa/arithmetic.scm 97 */
							long BgL_res2130z00_3748;

							BgL_res2130z00_3748 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_5));
							BgL_objzd2classzd2numz00_3745 = BgL_res2130z00_3748;
						}
						{	/* Cfa/arithmetic.scm 97 */
							obj_t BgL_arg1813z00_3746;

							BgL_arg1813z00_3746 =
								PROCEDURE_REF(BGl_cleanupzd2nodez12zd2envz12zzcfa_arithmeticz00,
								(int) (((long) 1)));
							{	/* Cfa/arithmetic.scm 97 */
								int BgL_offsetz00_3750;

								BgL_offsetz00_3750 = (int) (BgL_objzd2classzd2numz00_3745);
								{	/* Cfa/arithmetic.scm 97 */
									long BgL_offsetz00_3751;

									BgL_offsetz00_3751 =
										((long) (BgL_offsetz00_3750) - OBJECT_TYPE);
									{	/* Cfa/arithmetic.scm 97 */
										long BgL_modz00_3752;

										BgL_modz00_3752 =
											(BgL_offsetz00_3751 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Cfa/arithmetic.scm 97 */
											long BgL_restz00_3754;

											BgL_restz00_3754 =
												(BgL_offsetz00_3751 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Cfa/arithmetic.scm 97 */

												{	/* Cfa/arithmetic.scm 97 */
													obj_t BgL_bucketz00_3756;

													BgL_bucketz00_3756 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_3746), BgL_modz00_3752);
													BgL_res2140z00_3780 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_3756), BgL_restz00_3754);
					}}}}}}}}
					BgL_method1547z00_2873 = BgL_res2140z00_3780;
				}
				return
					PROCEDURE_ENTRY(BgL_method1547z00_2873) (BgL_method1547z00_2873,
					((obj_t) BgL_nodez00_5), BEOA);
			}
		}

	}



/* &cleanup-node! */
	obj_t BGl_z62cleanupzd2nodez12za2zzcfa_arithmeticz00(obj_t BgL_envz00_3913,
		obj_t BgL_nodez00_3914)
	{
		{	/* Cfa/arithmetic.scm 97 */
			return
				BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
				((BgL_nodez00_bglt) BgL_nodez00_3914));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_arithmeticz00()
	{
		{	/* Cfa/arithmetic.scm 28 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cleanupzd2nodez12zd2envz12zzcfa_arithmeticz00,
				BGl_sequencez00zzast_nodez00, BGl_proc2173z00zzcfa_arithmeticz00,
				BGl_string2174z00zzcfa_arithmeticz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cleanupzd2nodez12zd2envz12zzcfa_arithmeticz00,
				BGl_syncz00zzast_nodez00, BGl_proc2175z00zzcfa_arithmeticz00,
				BGl_string2174z00zzcfa_arithmeticz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cleanupzd2nodez12zd2envz12zzcfa_arithmeticz00,
				BGl_setqz00zzast_nodez00, BGl_proc2176z00zzcfa_arithmeticz00,
				BGl_string2174z00zzcfa_arithmeticz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cleanupzd2nodez12zd2envz12zzcfa_arithmeticz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc2177z00zzcfa_arithmeticz00,
				BGl_string2174z00zzcfa_arithmeticz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cleanupzd2nodez12zd2envz12zzcfa_arithmeticz00,
				BGl_failz00zzast_nodez00, BGl_proc2178z00zzcfa_arithmeticz00,
				BGl_string2174z00zzcfa_arithmeticz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cleanupzd2nodez12zd2envz12zzcfa_arithmeticz00,
				BGl_switchz00zzast_nodez00, BGl_proc2179z00zzcfa_arithmeticz00,
				BGl_string2174z00zzcfa_arithmeticz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cleanupzd2nodez12zd2envz12zzcfa_arithmeticz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc2180z00zzcfa_arithmeticz00,
				BGl_string2174z00zzcfa_arithmeticz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cleanupzd2nodez12zd2envz12zzcfa_arithmeticz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc2181z00zzcfa_arithmeticz00,
				BGl_string2174z00zzcfa_arithmeticz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cleanupzd2nodez12zd2envz12zzcfa_arithmeticz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc2182z00zzcfa_arithmeticz00,
				BGl_string2174z00zzcfa_arithmeticz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cleanupzd2nodez12zd2envz12zzcfa_arithmeticz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc2183z00zzcfa_arithmeticz00,
				BGl_string2174z00zzcfa_arithmeticz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cleanupzd2nodez12zd2envz12zzcfa_arithmeticz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc2184z00zzcfa_arithmeticz00,
				BGl_string2174z00zzcfa_arithmeticz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cleanupzd2nodez12zd2envz12zzcfa_arithmeticz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc2185z00zzcfa_arithmeticz00,
				BGl_string2174z00zzcfa_arithmeticz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cleanupzd2nodez12zd2envz12zzcfa_arithmeticz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc2186z00zzcfa_arithmeticz00,
				BGl_string2174z00zzcfa_arithmeticz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cleanupzd2nodez12zd2envz12zzcfa_arithmeticz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc2187z00zzcfa_arithmeticz00,
				BGl_string2174z00zzcfa_arithmeticz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cleanupzd2nodez12zd2envz12zzcfa_arithmeticz00,
				BGl_funcallz00zzast_nodez00, BGl_proc2188z00zzcfa_arithmeticz00,
				BGl_string2174z00zzcfa_arithmeticz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cleanupzd2nodez12zd2envz12zzcfa_arithmeticz00,
				BGl_appz00zzast_nodez00, BGl_proc2189z00zzcfa_arithmeticz00,
				BGl_string2174z00zzcfa_arithmeticz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_prezd2arithmeticzd2appz00zzcfa_info2z00,
				BGl_proc2190z00zzcfa_arithmeticz00,
				BGl_string2191z00zzcfa_arithmeticz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_arithmeticzd2appzd2zzcfa_info2z00,
				BGl_proc2192z00zzcfa_arithmeticz00,
				BGl_string2193z00zzcfa_arithmeticz00);
		}

	}



/* &cfa!-arithmetic-app1583 */
	BgL_approxz00_bglt
		BGl_z62cfaz12zd2arithmeticzd2app1583z70zzcfa_arithmeticz00(obj_t
		BgL_envz00_3933, obj_t BgL_nodez00_3934)
	{
		{	/* Cfa/arithmetic.scm 287 */
			{
				obj_t BgL_argszd2approxzd2_4009;
				obj_t BgL_argszd2approxzd2_3999;
				obj_t BgL_typez00_4000;
				obj_t BgL_speczd2typeszd2_4001;
				obj_t BgL_argszd2approxzd2_3992;
				obj_t BgL_speczd2typeszd2_3993;

				{	/* Cfa/arithmetic.scm 328 */
					obj_t BgL_argszd2approxzd2_4015;

					{	/* Cfa/arithmetic.scm 328 */
						obj_t BgL_l1538z00_4016;

						BgL_l1538z00_4016 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_nodez00_3934))))->BgL_argsz00);
						if (NULLP(BgL_l1538z00_4016))
							{	/* Cfa/arithmetic.scm 328 */
								BgL_argszd2approxzd2_4015 = BNIL;
							}
						else
							{	/* Cfa/arithmetic.scm 328 */
								obj_t BgL_head1540z00_4017;

								{	/* Cfa/arithmetic.scm 328 */
									BgL_approxz00_bglt BgL_arg1909z00_4018;

									{	/* Cfa/arithmetic.scm 328 */
										obj_t BgL_arg1910z00_4019;

										BgL_arg1910z00_4019 = CAR(((obj_t) BgL_l1538z00_4016));
										BgL_arg1909z00_4018 =
											BGl_cfaz12z12zzcfa_cfaz00(
											((BgL_nodez00_bglt) BgL_arg1910z00_4019));
									}
									{	/* Cfa/arithmetic.scm 328 */
										obj_t BgL_res2165z00_4020;

										BgL_res2165z00_4020 =
											MAKE_YOUNG_PAIR(((obj_t) BgL_arg1909z00_4018), BNIL);
										BgL_head1540z00_4017 = BgL_res2165z00_4020;
									}
								}
								{	/* Cfa/arithmetic.scm 328 */
									obj_t BgL_g1543z00_4021;

									BgL_g1543z00_4021 = CDR(((obj_t) BgL_l1538z00_4016));
									{
										obj_t BgL_l1538z00_4023;
										obj_t BgL_tail1541z00_4024;

										BgL_l1538z00_4023 = BgL_g1543z00_4021;
										BgL_tail1541z00_4024 = BgL_head1540z00_4017;
									BgL_zc3z04anonymousza31904ze3z87_4022:
										if (NULLP(BgL_l1538z00_4023))
											{	/* Cfa/arithmetic.scm 328 */
												BgL_argszd2approxzd2_4015 = BgL_head1540z00_4017;
											}
										else
											{	/* Cfa/arithmetic.scm 328 */
												obj_t BgL_newtail1542z00_4025;

												{	/* Cfa/arithmetic.scm 328 */
													BgL_approxz00_bglt BgL_arg1907z00_4026;

													{	/* Cfa/arithmetic.scm 328 */
														obj_t BgL_arg1908z00_4027;

														BgL_arg1908z00_4027 =
															CAR(((obj_t) BgL_l1538z00_4023));
														BgL_arg1907z00_4026 =
															BGl_cfaz12z12zzcfa_cfaz00(
															((BgL_nodez00_bglt) BgL_arg1908z00_4027));
													}
													{	/* Cfa/arithmetic.scm 328 */
														obj_t BgL_res2167z00_4028;

														BgL_res2167z00_4028 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_arg1907z00_4026), BNIL);
														BgL_newtail1542z00_4025 = BgL_res2167z00_4028;
													}
												}
												SET_CDR(BgL_tail1541z00_4024, BgL_newtail1542z00_4025);
												{	/* Cfa/arithmetic.scm 328 */
													obj_t BgL_arg1906z00_4029;

													BgL_arg1906z00_4029 =
														CDR(((obj_t) BgL_l1538z00_4023));
													{
														obj_t BgL_tail1541z00_4341;
														obj_t BgL_l1538z00_4340;

														BgL_l1538z00_4340 = BgL_arg1906z00_4029;
														BgL_tail1541z00_4341 = BgL_newtail1542z00_4025;
														BgL_tail1541z00_4024 = BgL_tail1541z00_4341;
														BgL_l1538z00_4023 = BgL_l1538z00_4340;
														goto BgL_zc3z04anonymousza31904ze3z87_4022;
													}
												}
											}
									}
								}
							}
					}
					{	/* Cfa/arithmetic.scm 330 */
						obj_t BgL_tyz00_4030;

						BgL_argszd2approxzd2_4009 = BgL_argszd2approxzd2_4015;
						{
							obj_t BgL_argsz00_4011;

							BgL_argsz00_4011 = BgL_argszd2approxzd2_4009;
						BgL_loopz00_4010:
							if (NULLP(BgL_argsz00_4011))
								{	/* Cfa/arithmetic.scm 296 */
									BgL_tyz00_4030 = BFALSE;
								}
							else
								{	/* Cfa/arithmetic.scm 298 */
									obj_t BgL_tz00_4012;

									{	/* Cfa/arithmetic.scm 298 */
										BgL_typez00_bglt BgL_arg1918z00_4013;

										BgL_arg1918z00_4013 =
											(((BgL_approxz00_bglt) COBJECT(
													((BgL_approxz00_bglt)
														CAR(((obj_t) BgL_argsz00_4011)))))->BgL_typez00);
										if (
											(((obj_t) BgL_arg1918z00_4013) ==
												BGl_za2intza2z00zztype_cachez00))
											{	/* Cfa/arithmetic.scm 290 */
												BgL_tz00_4012 = BGl_za2longza2z00zztype_cachez00;
											}
										else
											{	/* Cfa/arithmetic.scm 290 */
												BgL_tz00_4012 = ((obj_t) BgL_arg1918z00_4013);
											}
									}
									if ((BgL_tz00_4012 == BGl_za2_za2z00zztype_cachez00))
										{	/* Cfa/arithmetic.scm 300 */
											obj_t BgL_arg1917z00_4014;

											BgL_arg1917z00_4014 = CDR(((obj_t) BgL_argsz00_4011));
											{
												obj_t BgL_argsz00_4356;

												BgL_argsz00_4356 = BgL_arg1917z00_4014;
												BgL_argsz00_4011 = BgL_argsz00_4356;
												goto BgL_loopz00_4010;
											}
										}
									else
										{	/* Cfa/arithmetic.scm 299 */
											BgL_tyz00_4030 = BgL_tz00_4012;
										}
								}
						}
						{	/* Cfa/arithmetic.scm 336 */
							bool_t BgL_test2248z00_4357;

							{	/* Cfa/arithmetic.scm 336 */
								obj_t BgL_arg1902z00_4031;

								{
									BgL_arithmeticzd2appzd2_bglt BgL_auxz00_4358;

									{
										obj_t BgL_auxz00_4359;

										{	/* Cfa/arithmetic.scm 336 */
											BgL_objectz00_bglt BgL_tmpz00_4360;

											BgL_tmpz00_4360 =
												((BgL_objectz00_bglt)
												((BgL_appz00_bglt) BgL_nodez00_3934));
											BgL_auxz00_4359 = BGL_OBJECT_WIDENING(BgL_tmpz00_4360);
										}
										BgL_auxz00_4358 =
											((BgL_arithmeticzd2appzd2_bglt) BgL_auxz00_4359);
									}
									BgL_arg1902z00_4031 =
										(((BgL_arithmeticzd2appzd2_bglt) COBJECT(BgL_auxz00_4358))->
										BgL_speczd2typeszd2);
								}
								BgL_argszd2approxzd2_3999 = BgL_argszd2approxzd2_4015;
								BgL_typez00_4000 = BgL_tyz00_4030;
								BgL_speczd2typeszd2_4001 = BgL_arg1902z00_4031;
								{	/* Cfa/arithmetic.scm 305 */
									bool_t BgL__ortest_1182z00_4002;

									if (CBOOL(BgL_typez00_4000))
										{	/* Cfa/arithmetic.scm 305 */
											BgL__ortest_1182z00_4002 = ((bool_t) 0);
										}
									else
										{	/* Cfa/arithmetic.scm 305 */
											BgL__ortest_1182z00_4002 = ((bool_t) 1);
										}
									if (BgL__ortest_1182z00_4002)
										{	/* Cfa/arithmetic.scm 305 */
											BgL_test2248z00_4357 = BgL__ortest_1182z00_4002;
										}
									else
										{	/* Cfa/arithmetic.scm 306 */
											obj_t BgL__andtest_1183z00_4003;

											BgL__andtest_1183z00_4003 =
												BGl_memqz00zz__r4_pairs_and_lists_6_3z00
												(BgL_typez00_4000, BgL_speczd2typeszd2_4001);
											if (CBOOL(BgL__andtest_1183z00_4003))
												{
													obj_t BgL_argsz00_4005;

													BgL_argsz00_4005 = BgL_argszd2approxzd2_3999;
												BgL_loopz00_4004:
													if (NULLP(BgL_argsz00_4005))
														{	/* Cfa/arithmetic.scm 308 */
															BgL_test2248z00_4357 = ((bool_t) 1);
														}
													else
														{	/* Cfa/arithmetic.scm 310 */
															obj_t BgL_tz00_4006;

															{	/* Cfa/arithmetic.scm 310 */
																BgL_typez00_bglt BgL_arg1926z00_4007;

																BgL_arg1926z00_4007 =
																	(((BgL_approxz00_bglt) COBJECT(
																			((BgL_approxz00_bglt)
																				CAR(
																					((obj_t) BgL_argsz00_4005)))))->
																	BgL_typez00);
																if ((((obj_t) BgL_arg1926z00_4007) ==
																		BGl_za2intza2z00zztype_cachez00))
																	{	/* Cfa/arithmetic.scm 290 */
																		BgL_tz00_4006 =
																			BGl_za2longza2z00zztype_cachez00;
																	}
																else
																	{	/* Cfa/arithmetic.scm 290 */
																		BgL_tz00_4006 =
																			((obj_t) BgL_arg1926z00_4007);
																	}
															}
															{	/* Cfa/arithmetic.scm 311 */
																bool_t BgL_test2254z00_4382;

																if ((BgL_tz00_4006 == BgL_typez00_4000))
																	{	/* Cfa/arithmetic.scm 311 */
																		BgL_test2254z00_4382 = ((bool_t) 1);
																	}
																else
																	{	/* Cfa/arithmetic.scm 311 */
																		BgL_test2254z00_4382 =
																			(BgL_tz00_4006 ==
																			BGl_za2_za2z00zztype_cachez00);
																	}
																if (BgL_test2254z00_4382)
																	{	/* Cfa/arithmetic.scm 312 */
																		obj_t BgL_arg1925z00_4008;

																		BgL_arg1925z00_4008 =
																			CDR(((obj_t) BgL_argsz00_4005));
																		{
																			obj_t BgL_argsz00_4388;

																			BgL_argsz00_4388 = BgL_arg1925z00_4008;
																			BgL_argsz00_4005 = BgL_argsz00_4388;
																			goto BgL_loopz00_4004;
																		}
																	}
																else
																	{	/* Cfa/arithmetic.scm 311 */
																		BgL_test2248z00_4357 = ((bool_t) 0);
																	}
															}
														}
												}
											else
												{	/* Cfa/arithmetic.scm 306 */
													BgL_test2248z00_4357 = ((bool_t) 0);
												}
										}
								}
							}
							if (BgL_test2248z00_4357)
								{	/* Cfa/arithmetic.scm 336 */
									{	/* Cfa/arithmetic.scm 339 */
										bool_t BgL_test2256z00_4389;

										{	/* Cfa/arithmetic.scm 339 */
											bool_t BgL_test2257z00_4390;

											{	/* Cfa/arithmetic.scm 339 */
												obj_t BgL_arg1883z00_4032;

												{
													BgL_arithmeticzd2appzd2_bglt BgL_auxz00_4391;

													{
														obj_t BgL_auxz00_4392;

														{	/* Cfa/arithmetic.scm 339 */
															BgL_objectz00_bglt BgL_tmpz00_4393;

															BgL_tmpz00_4393 =
																((BgL_objectz00_bglt)
																((BgL_appz00_bglt) BgL_nodez00_3934));
															BgL_auxz00_4392 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_4393);
														}
														BgL_auxz00_4391 =
															((BgL_arithmeticzd2appzd2_bglt) BgL_auxz00_4392);
													}
													BgL_arg1883z00_4032 =
														(((BgL_arithmeticzd2appzd2_bglt)
															COBJECT(BgL_auxz00_4391))->BgL_speczd2typeszd2);
												}
												BgL_argszd2approxzd2_3992 = BgL_argszd2approxzd2_4015;
												BgL_speczd2typeszd2_3993 = BgL_arg1883z00_4032;
												{
													obj_t BgL_argsz00_3995;

													BgL_argsz00_3995 = BgL_argszd2approxzd2_3992;
												BgL_loopz00_3994:
													if (NULLP(BgL_argsz00_3995))
														{	/* Cfa/arithmetic.scm 318 */
															BgL_test2257z00_4390 = ((bool_t) 1);
														}
													else
														{	/* Cfa/arithmetic.scm 320 */
															bool_t BgL_test2259z00_4401;

															{	/* Cfa/arithmetic.scm 320 */
																obj_t BgL_arg1936z00_3996;

																{	/* Cfa/arithmetic.scm 320 */
																	BgL_typez00_bglt BgL_arg1937z00_3997;

																	BgL_arg1937z00_3997 =
																		(((BgL_approxz00_bglt) COBJECT(
																				((BgL_approxz00_bglt)
																					CAR(
																						((obj_t) BgL_argsz00_3995)))))->
																		BgL_typez00);
																	if ((((obj_t) BgL_arg1937z00_3997) ==
																			BGl_za2intza2z00zztype_cachez00))
																		{	/* Cfa/arithmetic.scm 290 */
																			BgL_arg1936z00_3996 =
																				BGl_za2longza2z00zztype_cachez00;
																		}
																	else
																		{	/* Cfa/arithmetic.scm 290 */
																			BgL_arg1936z00_3996 =
																				((obj_t) BgL_arg1937z00_3997);
																		}
																}
																BgL_test2259z00_4401 =
																	CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg1936z00_3996,
																		BgL_speczd2typeszd2_3993));
															}
															if (BgL_test2259z00_4401)
																{	/* Cfa/arithmetic.scm 321 */
																	obj_t BgL_arg1935z00_3998;

																	BgL_arg1935z00_3998 =
																		CDR(((obj_t) BgL_argsz00_3995));
																	{
																		obj_t BgL_argsz00_4414;

																		BgL_argsz00_4414 = BgL_arg1935z00_3998;
																		BgL_argsz00_3995 = BgL_argsz00_4414;
																		goto BgL_loopz00_3994;
																	}
																}
															else
																{	/* Cfa/arithmetic.scm 320 */
																	BgL_test2257z00_4390 = ((bool_t) 0);
																}
														}
												}
											}
											if (BgL_test2257z00_4390)
												{	/* Cfa/arithmetic.scm 340 */
													BgL_typez00_bglt BgL_arg1881z00_4033;

													{	/* Cfa/arithmetic.scm 340 */
														BgL_approxz00_bglt BgL_arg1882z00_4034;

														{
															BgL_arithmeticzd2appzd2_bglt BgL_auxz00_4415;

															{
																obj_t BgL_auxz00_4416;

																{	/* Cfa/arithmetic.scm 340 */
																	BgL_objectz00_bglt BgL_tmpz00_4417;

																	BgL_tmpz00_4417 =
																		((BgL_objectz00_bglt)
																		((BgL_appz00_bglt) BgL_nodez00_3934));
																	BgL_auxz00_4416 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_4417);
																}
																BgL_auxz00_4415 =
																	((BgL_arithmeticzd2appzd2_bglt)
																	BgL_auxz00_4416);
															}
															BgL_arg1882z00_4034 =
																(((BgL_arithmeticzd2appzd2_bglt)
																	COBJECT(BgL_auxz00_4415))->BgL_approxz00);
														}
														BgL_arg1881z00_4033 =
															(((BgL_approxz00_bglt)
																COBJECT(BgL_arg1882z00_4034))->BgL_typez00);
													}
													BgL_test2256z00_4389 =
														(
														((obj_t) BgL_arg1881z00_4033) ==
														BGl_za2_za2z00zztype_cachez00);
												}
											else
												{	/* Cfa/arithmetic.scm 339 */
													BgL_test2256z00_4389 = ((bool_t) 0);
												}
										}
										if (BgL_test2256z00_4389)
											{	/* Cfa/arithmetic.scm 339 */
												{	/* Cfa/arithmetic.scm 343 */
													BgL_approxz00_bglt BgL_arg1879z00_4035;

													{
														BgL_arithmeticzd2appzd2_bglt BgL_auxz00_4426;

														{
															obj_t BgL_auxz00_4427;

															{	/* Cfa/arithmetic.scm 343 */
																BgL_objectz00_bglt BgL_tmpz00_4428;

																BgL_tmpz00_4428 =
																	((BgL_objectz00_bglt)
																	((BgL_appz00_bglt) BgL_nodez00_3934));
																BgL_auxz00_4427 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_4428);
															}
															BgL_auxz00_4426 =
																((BgL_arithmeticzd2appzd2_bglt)
																BgL_auxz00_4427);
														}
														BgL_arg1879z00_4035 =
															(((BgL_arithmeticzd2appzd2_bglt)
																COBJECT(BgL_auxz00_4426))->BgL_approxz00);
													}
													BGl_approxzd2setzd2typez12z12zzcfa_approxz00
														(BgL_arg1879z00_4035,
														((BgL_typez00_bglt) BgL_tyz00_4030));
												}
												BGl_continuezd2cfaz12zc0zzcfa_iteratez00(CNST_TABLE_REF(
														((long) 0)));
											}
										else
											{	/* Cfa/arithmetic.scm 339 */
												BFALSE;
											}
									}
								}
							else
								{	/* Cfa/arithmetic.scm 345 */
									bool_t BgL_test2261z00_4438;

									if (
										((((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_globalz00_bglt)
																(((BgL_varz00_bglt) COBJECT(
																			(((BgL_appz00_bglt) COBJECT(
																						((BgL_appz00_bglt)
																							((BgL_appz00_bglt)
																								BgL_nodez00_3934))))->
																				BgL_funz00)))->BgL_variablez00)))))->
												BgL_idz00) == CNST_TABLE_REF(((long) 1))))
										{	/* Cfa/arithmetic.scm 345 */
											BgL_test2261z00_4438 = ((bool_t) 0);
										}
									else
										{	/* Cfa/arithmetic.scm 345 */
											BgL_test2261z00_4438 = ((bool_t) 1);
										}
									if (BgL_test2261z00_4438)
										{	/* Cfa/arithmetic.scm 345 */
											{
												obj_t BgL_l1544z00_4037;

												BgL_l1544z00_4037 = BgL_argszd2approxzd2_4015;
											BgL_zc3z04anonymousza31893ze3z87_4036:
												if (PAIRP(BgL_l1544z00_4037))
													{	/* Cfa/arithmetic.scm 346 */
														{	/* Cfa/arithmetic.scm 346 */
															obj_t BgL_az00_4038;

															BgL_az00_4038 = CAR(BgL_l1544z00_4037);
															BGl_loosez12z12zzcfa_loosez00(
																((BgL_approxz00_bglt) BgL_az00_4038),
																CNST_TABLE_REF(((long) 2)));
														}
														{
															obj_t BgL_l1544z00_4455;

															BgL_l1544z00_4455 = CDR(BgL_l1544z00_4037);
															BgL_l1544z00_4037 = BgL_l1544z00_4455;
															goto BgL_zc3z04anonymousza31893ze3z87_4036;
														}
													}
												else
													{	/* Cfa/arithmetic.scm 346 */
														((bool_t) 1);
													}
											}
											{	/* Cfa/arithmetic.scm 347 */
												BgL_approxz00_bglt BgL_arg1896z00_4039;

												{
													BgL_arithmeticzd2appzd2_bglt BgL_auxz00_4457;

													{
														obj_t BgL_auxz00_4458;

														{	/* Cfa/arithmetic.scm 347 */
															BgL_objectz00_bglt BgL_tmpz00_4459;

															BgL_tmpz00_4459 =
																((BgL_objectz00_bglt)
																((BgL_appz00_bglt) BgL_nodez00_3934));
															BgL_auxz00_4458 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_4459);
														}
														BgL_auxz00_4457 =
															((BgL_arithmeticzd2appzd2_bglt) BgL_auxz00_4458);
													}
													BgL_arg1896z00_4039 =
														(((BgL_arithmeticzd2appzd2_bglt)
															COBJECT(BgL_auxz00_4457))->BgL_approxz00);
												}
												BGl_approxzd2setzd2typez12z12zzcfa_approxz00
													(BgL_arg1896z00_4039,
													((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
											}
										}
									else
										{	/* Cfa/arithmetic.scm 345 */
											BFALSE;
										}
								}
						}
					}
				}
				{
					BgL_arithmeticzd2appzd2_bglt BgL_auxz00_4467;

					{
						obj_t BgL_auxz00_4468;

						{	/* Cfa/arithmetic.scm 350 */
							BgL_objectz00_bglt BgL_tmpz00_4469;

							BgL_tmpz00_4469 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3934));
							BgL_auxz00_4468 = BGL_OBJECT_WIDENING(BgL_tmpz00_4469);
						}
						BgL_auxz00_4467 = ((BgL_arithmeticzd2appzd2_bglt) BgL_auxz00_4468);
					}
					return
						(((BgL_arithmeticzd2appzd2_bglt) COBJECT(BgL_auxz00_4467))->
						BgL_approxz00);
				}
			}
		}

	}



/* &node-setup!-pre-arit1581 */
	obj_t BGl_z62nodezd2setupz12zd2prezd2arit1581za2zzcfa_arithmeticz00(obj_t
		BgL_envz00_3935, obj_t BgL_nodez00_3936)
	{
		{	/* Cfa/arithmetic.scm 244 */
			{	/* Cfa/arithmetic.scm 255 */
				BgL_variablez00_bglt BgL_fz00_4041;

				BgL_fz00_4041 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt)
											((BgL_appz00_bglt) BgL_nodez00_3936))))->BgL_funz00)))->
					BgL_variablez00);
				{	/* Cfa/arithmetic.scm 255 */
					BgL_valuez00_bglt BgL_valz00_4042;

					BgL_valz00_4042 =
						(((BgL_variablez00_bglt) COBJECT(BgL_fz00_4041))->BgL_valuez00);
					{	/* Cfa/arithmetic.scm 256 */

						{	/* Cfa/arithmetic.scm 258 */
							bool_t BgL_test2264z00_4480;

							{	/* Cfa/arithmetic.scm 258 */
								BgL_typez00_bglt BgL_arg1833z00_4043;

								BgL_arg1833z00_4043 =
									(((BgL_variablez00_bglt) COBJECT(BgL_fz00_4041))->
									BgL_typez00);
								BgL_test2264z00_4480 =
									(((obj_t) BgL_arg1833z00_4043) ==
									BGl_za2objza2z00zztype_cachez00);
							}
							if (BgL_test2264z00_4480)
								{	/* Cfa/arithmetic.scm 258 */
									{	/* Cfa/arithmetic.scm 261 */
										BgL_typez00_bglt BgL_vz00_4044;

										BgL_vz00_4044 =
											((BgL_typez00_bglt) BGl_za2_za2z00zztype_cachez00);
										((((BgL_variablez00_bglt) COBJECT(BgL_fz00_4041))->
												BgL_typez00) =
											((BgL_typez00_bglt) BgL_vz00_4044), BUNSPEC);
									}
									{	/* Cfa/arithmetic.scm 262 */
										BgL_typez00_bglt BgL_vz00_4045;

										BgL_vz00_4045 =
											((BgL_typez00_bglt) BGl_za2_za2z00zztype_cachez00);
										((((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt)
															((BgL_appz00_bglt) BgL_nodez00_3936))))->
												BgL_typez00) =
											((BgL_typez00_bglt) BgL_vz00_4045), BUNSPEC);
									}
								}
							else
								{	/* Cfa/arithmetic.scm 258 */
									BFALSE;
								}
						}
						{	/* Cfa/arithmetic.scm 264 */
							bool_t BgL_test2265z00_4490;

							{	/* Cfa/arithmetic.scm 264 */
								bool_t BgL_res2150z00_4046;

								BgL_res2150z00_4046 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_valz00_4042), BGl_sfunz00zzast_varz00);
								BgL_test2265z00_4490 = BgL_res2150z00_4046;
							}
							if (BgL_test2265z00_4490)
								{	/* Cfa/arithmetic.scm 265 */
									obj_t BgL_arg1835z00_4047;

									{	/* Cfa/arithmetic.scm 265 */
										obj_t BgL_l1532z00_4048;

										BgL_l1532z00_4048 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_valz00_4042)))->BgL_argsz00);
										if (NULLP(BgL_l1532z00_4048))
											{	/* Cfa/arithmetic.scm 265 */
												BgL_arg1835z00_4047 = BNIL;
											}
										else
											{	/* Cfa/arithmetic.scm 265 */
												obj_t BgL_head1534z00_4049;

												{	/* Cfa/arithmetic.scm 265 */
													obj_t BgL_arg1845z00_4050;

													{	/* Cfa/arithmetic.scm 265 */
														obj_t BgL_arg1846z00_4051;

														BgL_arg1846z00_4051 =
															CAR(((obj_t) BgL_l1532z00_4048));
														BgL_arg1845z00_4050 =
															BGl_unspecifiedzd2typeze70z35zzcfa_arithmeticz00
															(BgL_arg1846z00_4051);
													}
													{	/* Cfa/arithmetic.scm 265 */
														obj_t BgL_res2152z00_4052;

														BgL_res2152z00_4052 =
															MAKE_YOUNG_PAIR(BgL_arg1845z00_4050, BNIL);
														BgL_head1534z00_4049 = BgL_res2152z00_4052;
													}
												}
												{	/* Cfa/arithmetic.scm 265 */
													obj_t BgL_g1537z00_4053;

													BgL_g1537z00_4053 = CDR(((obj_t) BgL_l1532z00_4048));
													{
														obj_t BgL_l1532z00_4055;
														obj_t BgL_tail1535z00_4056;

														BgL_l1532z00_4055 = BgL_g1537z00_4053;
														BgL_tail1535z00_4056 = BgL_head1534z00_4049;
													BgL_zc3z04anonymousza31837ze3z87_4054:
														if (NULLP(BgL_l1532z00_4055))
															{	/* Cfa/arithmetic.scm 265 */
																BgL_arg1835z00_4047 = BgL_head1534z00_4049;
															}
														else
															{	/* Cfa/arithmetic.scm 265 */
																obj_t BgL_newtail1536z00_4057;

																{	/* Cfa/arithmetic.scm 265 */
																	obj_t BgL_arg1841z00_4058;

																	{	/* Cfa/arithmetic.scm 265 */
																		obj_t BgL_arg1842z00_4059;

																		BgL_arg1842z00_4059 =
																			CAR(((obj_t) BgL_l1532z00_4055));
																		BgL_arg1841z00_4058 =
																			BGl_unspecifiedzd2typeze70z35zzcfa_arithmeticz00
																			(BgL_arg1842z00_4059);
																	}
																	{	/* Cfa/arithmetic.scm 265 */
																		obj_t BgL_res2154z00_4060;

																		BgL_res2154z00_4060 =
																			MAKE_YOUNG_PAIR(BgL_arg1841z00_4058,
																			BNIL);
																		BgL_newtail1536z00_4057 =
																			BgL_res2154z00_4060;
																	}
																}
																SET_CDR(BgL_tail1535z00_4056,
																	BgL_newtail1536z00_4057);
																{	/* Cfa/arithmetic.scm 265 */
																	obj_t BgL_arg1840z00_4061;

																	BgL_arg1840z00_4061 =
																		CDR(((obj_t) BgL_l1532z00_4055));
																	{
																		obj_t BgL_tail1535z00_4513;
																		obj_t BgL_l1532z00_4512;

																		BgL_l1532z00_4512 = BgL_arg1840z00_4061;
																		BgL_tail1535z00_4513 =
																			BgL_newtail1536z00_4057;
																		BgL_tail1535z00_4056 = BgL_tail1535z00_4513;
																		BgL_l1532z00_4055 = BgL_l1532z00_4512;
																		goto BgL_zc3z04anonymousza31837ze3z87_4054;
																	}
																}
															}
													}
												}
											}
									}
									((((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_valz00_4042)))->BgL_argsz00) =
										((obj_t) BgL_arg1835z00_4047), BUNSPEC);
								}
							else
								{	/* Cfa/arithmetic.scm 266 */
									bool_t BgL_test2268z00_4516;

									{	/* Cfa/arithmetic.scm 266 */
										bool_t BgL_res2155z00_4062;

										BgL_res2155z00_4062 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_valz00_4042), BGl_cfunz00zzast_varz00);
										BgL_test2268z00_4516 = BgL_res2155z00_4062;
									}
									if (BgL_test2268z00_4516)
										{	/* Cfa/arithmetic.scm 267 */
											obj_t BgL_g1176z00_4063;

											BgL_g1176z00_4063 =
												(((BgL_cfunz00_bglt) COBJECT(
														((BgL_cfunz00_bglt) BgL_valz00_4042)))->
												BgL_argszd2typezd2);
											{
												obj_t BgL_lz00_4065;

												BgL_lz00_4065 = BgL_g1176z00_4063;
											BgL_loopz00_4064:
												if (PAIRP(BgL_lz00_4065))
													{	/* Cfa/arithmetic.scm 269 */
														obj_t BgL_tmpz00_4523;

														BgL_tmpz00_4523 =
															BGl_unspecifiedzd2typeze70z35zzcfa_arithmeticz00
															(CAR(BgL_lz00_4065));
														SET_CAR(BgL_lz00_4065, BgL_tmpz00_4523);
													}
												else
													{	/* Cfa/arithmetic.scm 270 */
														obj_t BgL_arg1852z00_4066;

														BgL_arg1852z00_4066 = CDR(((obj_t) BgL_lz00_4065));
														{
															obj_t BgL_lz00_4529;

															BgL_lz00_4529 = BgL_arg1852z00_4066;
															BgL_lz00_4065 = BgL_lz00_4529;
															goto BgL_loopz00_4064;
														}
													}
											}
										}
									else
										{	/* Cfa/arithmetic.scm 266 */
											BGl_errorz00zz__errorz00
												(BGl_string2191z00zzcfa_arithmeticz00,
												BGl_string2194z00zzcfa_arithmeticz00,
												((obj_t) ((BgL_appz00_bglt) BgL_nodez00_3936)));
										}
								}
						}
						BGl_za2arithmeticzd2nodesza2zd2zzcfa_arithmeticz00 =
							MAKE_YOUNG_PAIR(
							((obj_t)
								((BgL_appz00_bglt) BgL_nodez00_3936)),
							BGl_za2arithmeticzd2nodesza2zd2zzcfa_arithmeticz00);
						{	/* Cfa/arithmetic.scm 275 */
							obj_t BgL_arg1853z00_4067;

							BgL_arg1853z00_4067 =
								(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt)
											((BgL_appz00_bglt) BgL_nodez00_3936))))->BgL_argsz00);
							BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg1853z00_4067);
						}
						{	/* Cfa/arithmetic.scm 276 */
							obj_t BgL_speczd2typeszd2_4068;

							{
								BgL_prezd2arithmeticzd2appz00_bglt BgL_auxz00_4540;

								{
									obj_t BgL_auxz00_4541;

									{	/* Cfa/arithmetic.scm 276 */
										BgL_objectz00_bglt BgL_tmpz00_4542;

										BgL_tmpz00_4542 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_nodez00_3936));
										BgL_auxz00_4541 = BGL_OBJECT_WIDENING(BgL_tmpz00_4542);
									}
									BgL_auxz00_4540 =
										((BgL_prezd2arithmeticzd2appz00_bglt) BgL_auxz00_4541);
								}
								BgL_speczd2typeszd2_4068 =
									(((BgL_prezd2arithmeticzd2appz00_bglt)
										COBJECT(BgL_auxz00_4540))->BgL_speczd2typeszd2);
							}
							{	/* Cfa/arithmetic.scm 276 */
								BgL_appz00_bglt BgL_nodez00_4069;

								{	/* Cfa/arithmetic.scm 277 */
									long BgL_arg1861z00_4070;

									{	/* Cfa/arithmetic.scm 277 */
										obj_t BgL_arg1862z00_4071;

										{	/* Cfa/arithmetic.scm 277 */
											obj_t BgL_arg1863z00_4072;

											{	/* Cfa/arithmetic.scm 277 */
												long BgL_arg1816z00_4073;

												{	/* Cfa/arithmetic.scm 277 */
													long BgL_arg1817z00_4074;

													{	/* Cfa/arithmetic.scm 277 */
														long BgL_res2157z00_4075;

														BgL_res2157z00_4075 =
															BGL_OBJECT_CLASS_NUM(
															((BgL_objectz00_bglt)
																((BgL_appz00_bglt) BgL_nodez00_3936)));
														BgL_arg1817z00_4074 = BgL_res2157z00_4075;
													}
													BgL_arg1816z00_4073 =
														(BgL_arg1817z00_4074 - OBJECT_TYPE);
												}
												BgL_arg1863z00_4072 =
													VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
													BgL_arg1816z00_4073);
											}
											BgL_arg1862z00_4071 =
												BGl_classzd2superzd2zz__objectz00(BgL_arg1863z00_4072);
										}
										{	/* Cfa/arithmetic.scm 277 */
											long BgL_res2159z00_4076;

											{	/* Cfa/arithmetic.scm 277 */
												obj_t BgL_tmpz00_4554;

												BgL_tmpz00_4554 = ((obj_t) BgL_arg1862z00_4071);
												BgL_res2159z00_4076 = BGL_CLASS_INDEX(BgL_tmpz00_4554);
											}
											BgL_arg1861z00_4070 = BgL_res2159z00_4076;
									}}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_nodez00_3936)),
										BgL_arg1861z00_4070);
								}
								{	/* Cfa/arithmetic.scm 277 */
									BgL_objectz00_bglt BgL_tmpz00_4560;

									BgL_tmpz00_4560 =
										((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3936));
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4560, BFALSE);
								}
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3936));
								BgL_nodez00_4069 = ((BgL_appz00_bglt) BgL_nodez00_3936);
								{	/* Cfa/arithmetic.scm 277 */

									{	/* Cfa/arithmetic.scm 278 */
										BgL_arithmeticzd2appzd2_bglt BgL_wide1180z00_4077;

										BgL_wide1180z00_4077 =
											((BgL_arithmeticzd2appzd2_bglt)
											BOBJECT(GC_MALLOC(sizeof(struct
														BgL_arithmeticzd2appzd2_bgl))));
										{	/* Cfa/arithmetic.scm 278 */
											obj_t BgL_auxz00_4572;
											BgL_objectz00_bglt BgL_tmpz00_4568;

											BgL_auxz00_4572 = ((obj_t) BgL_wide1180z00_4077);
											BgL_tmpz00_4568 =
												((BgL_objectz00_bglt)
												((BgL_appz00_bglt)
													((BgL_appz00_bglt) BgL_nodez00_4069)));
											BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4568, BgL_auxz00_4572);
										}
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4069)));
										{	/* Cfa/arithmetic.scm 278 */
											long BgL_arg1855z00_4078;

											{	/* Cfa/arithmetic.scm 278 */
												long BgL_res2160z00_4079;

												BgL_res2160z00_4079 =
													BGL_CLASS_INDEX
													(BGl_arithmeticzd2appzd2zzcfa_info2z00);
												BgL_arg1855z00_4078 = BgL_res2160z00_4079;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt)
													((BgL_appz00_bglt)
														((BgL_appz00_bglt) BgL_nodez00_4069))),
												BgL_arg1855z00_4078);
										}
										((BgL_appz00_bglt)
											((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4069)));
									}
									{
										BgL_approxz00_bglt BgL_auxz00_4594;
										BgL_arithmeticzd2appzd2_bglt BgL_auxz00_4586;

										{	/* Cfa/arithmetic.scm 280 */
											bool_t BgL_test2270z00_4595;

											{	/* Cfa/arithmetic.scm 280 */
												BgL_typez00_bglt BgL_arg1859z00_4080;

												BgL_arg1859z00_4080 =
													(((BgL_variablez00_bglt) COBJECT(BgL_fz00_4041))->
													BgL_typez00);
												BgL_test2270z00_4595 =
													(((obj_t) BgL_arg1859z00_4080) ==
													BGl_za2_za2z00zztype_cachez00);
											}
											if (BgL_test2270z00_4595)
												{	/* Cfa/arithmetic.scm 280 */
													BgL_auxz00_4594 =
														BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
												}
											else
												{	/* Cfa/arithmetic.scm 282 */
													BgL_typez00_bglt BgL_arg1858z00_4081;

													BgL_arg1858z00_4081 =
														(((BgL_variablez00_bglt) COBJECT(BgL_fz00_4041))->
														BgL_typez00);
													BgL_auxz00_4594 =
														BGl_makezd2typezd2approxz00zzcfa_approxz00
														(BgL_arg1858z00_4081);
												}
										}
										{
											obj_t BgL_auxz00_4587;

											{	/* Cfa/arithmetic.scm 280 */
												BgL_objectz00_bglt BgL_tmpz00_4588;

												BgL_tmpz00_4588 =
													((BgL_objectz00_bglt)
													((BgL_appz00_bglt)
														((BgL_appz00_bglt) BgL_nodez00_4069)));
												BgL_auxz00_4587 = BGL_OBJECT_WIDENING(BgL_tmpz00_4588);
											}
											BgL_auxz00_4586 =
												((BgL_arithmeticzd2appzd2_bglt) BgL_auxz00_4587);
										}
										((((BgL_arithmeticzd2appzd2_bglt)
													COBJECT(BgL_auxz00_4586))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_auxz00_4594), BUNSPEC);
									}
									{
										BgL_arithmeticzd2appzd2_bglt BgL_auxz00_4603;

										{
											obj_t BgL_auxz00_4604;

											{	/* Cfa/arithmetic.scm 279 */
												BgL_objectz00_bglt BgL_tmpz00_4605;

												BgL_tmpz00_4605 =
													((BgL_objectz00_bglt)
													((BgL_appz00_bglt)
														((BgL_appz00_bglt) BgL_nodez00_4069)));
												BgL_auxz00_4604 = BGL_OBJECT_WIDENING(BgL_tmpz00_4605);
											}
											BgL_auxz00_4603 =
												((BgL_arithmeticzd2appzd2_bglt) BgL_auxz00_4604);
										}
										((((BgL_arithmeticzd2appzd2_bglt)
													COBJECT(BgL_auxz00_4603))->BgL_speczd2typeszd2) =
											((obj_t) BgL_speczd2typeszd2_4068), BUNSPEC);
									}
									return
										((obj_t)
										((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4069)));
								}
							}
						}
					}
				}
			}
		}

	}



/* unspecified-type~0 */
	obj_t BGl_unspecifiedzd2typeze70z35zzcfa_arithmeticz00(obj_t BgL_lz00_3105)
	{
		{	/* Cfa/arithmetic.scm 253 */
			if (BGl_isazf3zf3zz__objectz00(BgL_lz00_3105, BGl_typez00zztype_typez00))
				{	/* Cfa/arithmetic.scm 247 */
					return BGl_za2_za2z00zztype_cachez00;
				}
			else
				{	/* Cfa/arithmetic.scm 247 */
					if (BGl_isazf3zf3zz__objectz00(BgL_lz00_3105,
							BGl_localz00zzast_varz00))
						{	/* Cfa/arithmetic.scm 249 */
							{	/* Cfa/arithmetic.scm 250 */
								BgL_typez00_bglt BgL_vz00_3820;

								BgL_vz00_3820 =
									((BgL_typez00_bglt) BGl_za2_za2z00zztype_cachez00);
								((((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_lz00_3105))))->BgL_typez00) =
									((BgL_typez00_bglt) BgL_vz00_3820), BUNSPEC);
							}
							return BgL_lz00_3105;
						}
					else
						{	/* Cfa/arithmetic.scm 249 */
							return BgL_lz00_3105;
						}
				}
		}

	}



/* &cleanup-node!-app1579 */
	obj_t BGl_z62cleanupzd2nodez12zd2app1579z70zzcfa_arithmeticz00(obj_t
		BgL_envz00_3937, obj_t BgL_nodez00_3938)
	{
		{	/* Cfa/arithmetic.scm 231 */
			{	/* Cfa/arithmetic.scm 232 */
				bool_t BgL_tmpz00_4623;

				{	/* Cfa/arithmetic.scm 233 */
					BgL_varz00_bglt BgL_arg1826z00_4083;

					BgL_arg1826z00_4083 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_3938)))->BgL_funz00);
					BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
						((BgL_nodez00_bglt) BgL_arg1826z00_4083));
				}
				{	/* Cfa/arithmetic.scm 234 */
					obj_t BgL_g1531z00_4084;

					BgL_g1531z00_4084 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_3938)))->BgL_argsz00);
					{
						obj_t BgL_l1529z00_4086;

						BgL_l1529z00_4086 = BgL_g1531z00_4084;
					BgL_zc3z04anonymousza31827ze3z87_4085:
						if (PAIRP(BgL_l1529z00_4086))
							{	/* Cfa/arithmetic.scm 234 */
								{	/* Cfa/arithmetic.scm 234 */
									obj_t BgL_arg1829z00_4087;

									BgL_arg1829z00_4087 = CAR(BgL_l1529z00_4086);
									BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
										((BgL_nodez00_bglt) BgL_arg1829z00_4087));
								}
								{
									obj_t BgL_l1529z00_4635;

									BgL_l1529z00_4635 = CDR(BgL_l1529z00_4086);
									BgL_l1529z00_4086 = BgL_l1529z00_4635;
									goto BgL_zc3z04anonymousza31827ze3z87_4085;
								}
							}
						else
							{	/* Cfa/arithmetic.scm 234 */
								BgL_tmpz00_4623 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_tmpz00_4623);
			}
		}

	}



/* &cleanup-node!-funcal1577 */
	obj_t BGl_z62cleanupzd2nodez12zd2funcal1577z70zzcfa_arithmeticz00(obj_t
		BgL_envz00_3939, obj_t BgL_nodez00_3940)
	{
		{	/* Cfa/arithmetic.scm 223 */
			{	/* Cfa/arithmetic.scm 224 */
				bool_t BgL_tmpz00_4638;

				BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_3940)))->BgL_funz00));
				{	/* Cfa/arithmetic.scm 226 */
					obj_t BgL_g1528z00_4089;

					BgL_g1528z00_4089 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_3940)))->BgL_argsz00);
					{
						obj_t BgL_l1526z00_4091;

						BgL_l1526z00_4091 = BgL_g1528z00_4089;
					BgL_zc3z04anonymousza31821ze3z87_4090:
						if (PAIRP(BgL_l1526z00_4091))
							{	/* Cfa/arithmetic.scm 226 */
								{	/* Cfa/arithmetic.scm 226 */
									obj_t BgL_arg1824z00_4092;

									BgL_arg1824z00_4092 = CAR(BgL_l1526z00_4091);
									BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
										((BgL_nodez00_bglt) BgL_arg1824z00_4092));
								}
								{
									obj_t BgL_l1526z00_4649;

									BgL_l1526z00_4649 = CDR(BgL_l1526z00_4091);
									BgL_l1526z00_4091 = BgL_l1526z00_4649;
									goto BgL_zc3z04anonymousza31821ze3z87_4090;
								}
							}
						else
							{	/* Cfa/arithmetic.scm 226 */
								BgL_tmpz00_4638 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_tmpz00_4638);
			}
		}

	}



/* &cleanup-node!-app-ly1575 */
	obj_t BGl_z62cleanupzd2nodez12zd2appzd2ly1575za2zzcfa_arithmeticz00(obj_t
		BgL_envz00_3941, obj_t BgL_nodez00_3942)
	{
		{	/* Cfa/arithmetic.scm 215 */
			BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_3942)))->BgL_funz00));
			return
				BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_3942)))->BgL_argz00));
		}

	}



/* &cleanup-node!-box-se1573 */
	obj_t BGl_z62cleanupzd2nodez12zd2boxzd2se1573za2zzcfa_arithmeticz00(obj_t
		BgL_envz00_3943, obj_t BgL_nodez00_3944)
	{
		{	/* Cfa/arithmetic.scm 207 */
			{	/* Cfa/arithmetic.scm 209 */
				BgL_varz00_bglt BgL_arg1801z00_4095;

				BgL_arg1801z00_4095 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_3944)))->BgL_varz00);
				BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
					((BgL_nodez00_bglt) BgL_arg1801z00_4095));
			}
			return
				BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
				(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_3944)))->BgL_valuez00));
		}

	}



/* &cleanup-node!-box-re1571 */
	obj_t BGl_z62cleanupzd2nodez12zd2boxzd2re1571za2zzcfa_arithmeticz00(obj_t
		BgL_envz00_3945, obj_t BgL_nodez00_3946)
	{
		{	/* Cfa/arithmetic.scm 200 */
			{	/* Cfa/arithmetic.scm 202 */
				BgL_varz00_bglt BgL_arg1798z00_4097;

				BgL_arg1798z00_4097 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_nodez00_3946)))->BgL_varz00);
				return
					BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
					((BgL_nodez00_bglt) BgL_arg1798z00_4097));
			}
		}

	}



/* &cleanup-node!-make-b1569 */
	obj_t BGl_z62cleanupzd2nodez12zd2makezd2b1569za2zzcfa_arithmeticz00(obj_t
		BgL_envz00_3947, obj_t BgL_nodez00_3948)
	{
		{	/* Cfa/arithmetic.scm 193 */
			return
				BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
				(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_3948)))->BgL_valuez00));
		}

	}



/* &cleanup-node!-jump-e1567 */
	obj_t BGl_z62cleanupzd2nodez12zd2jumpzd2e1567za2zzcfa_arithmeticz00(obj_t
		BgL_envz00_3949, obj_t BgL_nodez00_3950)
	{
		{	/* Cfa/arithmetic.scm 185 */
			BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_3950)))->BgL_exitz00));
			return
				BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_3950)))->BgL_valuez00));
		}

	}



/* &cleanup-node!-set-ex1565 */
	obj_t BGl_z62cleanupzd2nodez12zd2setzd2ex1565za2zzcfa_arithmeticz00(obj_t
		BgL_envz00_3951, obj_t BgL_nodez00_3952)
	{
		{	/* Cfa/arithmetic.scm 177 */
			{	/* Cfa/arithmetic.scm 179 */
				BgL_varz00_bglt BgL_arg1779z00_4101;

				BgL_arg1779z00_4101 =
					(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_3952)))->BgL_varz00);
				BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
					((BgL_nodez00_bglt) BgL_arg1779z00_4101));
			}
			return
				BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
				(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_3952)))->BgL_bodyz00));
		}

	}



/* &cleanup-node!-let-va1563 */
	obj_t BGl_z62cleanupzd2nodez12zd2letzd2va1563za2zzcfa_arithmeticz00(obj_t
		BgL_envz00_3953, obj_t BgL_nodez00_3954)
	{
		{	/* Cfa/arithmetic.scm 167 */
			{	/* Cfa/arithmetic.scm 169 */
				obj_t BgL_g1525z00_4103;

				BgL_g1525z00_4103 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_3954)))->BgL_bindingsz00);
				{
					obj_t BgL_l1523z00_4105;

					BgL_l1523z00_4105 = BgL_g1525z00_4103;
				BgL_zc3z04anonymousza31758ze3z87_4104:
					if (PAIRP(BgL_l1523z00_4105))
						{	/* Cfa/arithmetic.scm 169 */
							{	/* Cfa/arithmetic.scm 169 */
								obj_t BgL_bz00_4106;

								BgL_bz00_4106 = CAR(BgL_l1523z00_4105);
								{	/* Cfa/arithmetic.scm 169 */
									obj_t BgL_arg1760z00_4107;

									BgL_arg1760z00_4107 = CDR(((obj_t) BgL_bz00_4106));
									BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
										((BgL_nodez00_bglt) BgL_arg1760z00_4107));
								}
							}
							{
								obj_t BgL_l1523z00_4694;

								BgL_l1523z00_4694 = CDR(BgL_l1523z00_4105);
								BgL_l1523z00_4105 = BgL_l1523z00_4694;
								goto BgL_zc3z04anonymousza31758ze3z87_4104;
							}
						}
					else
						{	/* Cfa/arithmetic.scm 169 */
							((bool_t) 1);
						}
				}
			}
			BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
				(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_3954)))->BgL_bodyz00));
			{	/* Cfa/arithmetic.scm 171 */
				bool_t BgL_test2276z00_4699;

				{	/* Cfa/arithmetic.scm 171 */
					BgL_typez00_bglt BgL_arg1778z00_4108;

					BgL_arg1778z00_4108 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_letzd2varzd2_bglt) BgL_nodez00_3954))))->BgL_typez00);
					BgL_test2276z00_4699 =
						(((obj_t) BgL_arg1778z00_4108) == BGl_za2_za2z00zztype_cachez00);
				}
				if (BgL_test2276z00_4699)
					{	/* Cfa/arithmetic.scm 171 */
						return
							((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_letzd2varzd2_bglt) BgL_nodez00_3954))))->
								BgL_typez00) =
							((BgL_typez00_bglt) (((BgL_nodez00_bglt)
										COBJECT((((BgL_letzd2varzd2_bglt)
													COBJECT(((BgL_letzd2varzd2_bglt) BgL_nodez00_3954)))->
												BgL_bodyz00)))->BgL_typez00)), BUNSPEC);
					}
				else
					{	/* Cfa/arithmetic.scm 171 */
						return BFALSE;
					}
			}
		}

	}



/* &cleanup-node!-let-fu1561 */
	obj_t BGl_z62cleanupzd2nodez12zd2letzd2fu1561za2zzcfa_arithmeticz00(obj_t
		BgL_envz00_3955, obj_t BgL_nodez00_3956)
	{
		{	/* Cfa/arithmetic.scm 157 */
			{	/* Cfa/arithmetic.scm 159 */
				obj_t BgL_g1522z00_4110;

				BgL_g1522z00_4110 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_3956)))->BgL_localsz00);
				{
					obj_t BgL_l1520z00_4112;

					BgL_l1520z00_4112 = BgL_g1522z00_4110;
				BgL_zc3z04anonymousza31743ze3z87_4111:
					if (PAIRP(BgL_l1520z00_4112))
						{	/* Cfa/arithmetic.scm 159 */
							{	/* Cfa/arithmetic.scm 159 */
								obj_t BgL_arg1745z00_4113;

								BgL_arg1745z00_4113 = CAR(BgL_l1520z00_4112);
								{	/* Cfa/arithmetic.scm 90 */
									BgL_valuez00_bglt BgL_funz00_4114;

									BgL_funz00_4114 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_arg1745z00_4113)))->
										BgL_valuez00);
									{	/* Cfa/arithmetic.scm 90 */
										obj_t BgL_bodyz00_4115;

										BgL_bodyz00_4115 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_funz00_4114)))->BgL_bodyz00);
										{	/* Cfa/arithmetic.scm 91 */

											BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
												((BgL_nodez00_bglt) BgL_bodyz00_4115));
										}
									}
								}
							}
							{
								obj_t BgL_l1520z00_4722;

								BgL_l1520z00_4722 = CDR(BgL_l1520z00_4112);
								BgL_l1520z00_4112 = BgL_l1520z00_4722;
								goto BgL_zc3z04anonymousza31743ze3z87_4111;
							}
						}
					else
						{	/* Cfa/arithmetic.scm 159 */
							((bool_t) 1);
						}
				}
			}
			BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
				(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_3956)))->BgL_bodyz00));
			{	/* Cfa/arithmetic.scm 161 */
				bool_t BgL_test2278z00_4727;

				{	/* Cfa/arithmetic.scm 161 */
					BgL_typez00_bglt BgL_arg1757z00_4116;

					BgL_arg1757z00_4116 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_letzd2funzd2_bglt) BgL_nodez00_3956))))->BgL_typez00);
					BgL_test2278z00_4727 =
						(((obj_t) BgL_arg1757z00_4116) == BGl_za2_za2z00zztype_cachez00);
				}
				if (BgL_test2278z00_4727)
					{	/* Cfa/arithmetic.scm 161 */
						return
							((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_letzd2funzd2_bglt) BgL_nodez00_3956))))->
								BgL_typez00) =
							((BgL_typez00_bglt) (((BgL_nodez00_bglt)
										COBJECT((((BgL_letzd2funzd2_bglt)
													COBJECT(((BgL_letzd2funzd2_bglt) BgL_nodez00_3956)))->
												BgL_bodyz00)))->BgL_typez00)), BUNSPEC);
					}
				else
					{	/* Cfa/arithmetic.scm 161 */
						return BFALSE;
					}
			}
		}

	}



/* &cleanup-node!-switch1559 */
	obj_t BGl_z62cleanupzd2nodez12zd2switch1559z70zzcfa_arithmeticz00(obj_t
		BgL_envz00_3957, obj_t BgL_nodez00_3958)
	{
		{	/* Cfa/arithmetic.scm 149 */
			{	/* Cfa/arithmetic.scm 150 */
				bool_t BgL_tmpz00_4739;

				BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
					(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_3958)))->BgL_testz00));
				{	/* Cfa/arithmetic.scm 152 */
					obj_t BgL_g1519z00_4118;

					BgL_g1519z00_4118 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_3958)))->BgL_clausesz00);
					{
						obj_t BgL_l1517z00_4120;

						BgL_l1517z00_4120 = BgL_g1519z00_4118;
					BgL_zc3z04anonymousza31739ze3z87_4119:
						if (PAIRP(BgL_l1517z00_4120))
							{	/* Cfa/arithmetic.scm 152 */
								{	/* Cfa/arithmetic.scm 152 */
									obj_t BgL_clausez00_4121;

									BgL_clausez00_4121 = CAR(BgL_l1517z00_4120);
									{	/* Cfa/arithmetic.scm 152 */
										obj_t BgL_arg1741z00_4122;

										BgL_arg1741z00_4122 = CDR(((obj_t) BgL_clausez00_4121));
										BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
											((BgL_nodez00_bglt) BgL_arg1741z00_4122));
									}
								}
								{
									obj_t BgL_l1517z00_4752;

									BgL_l1517z00_4752 = CDR(BgL_l1517z00_4120);
									BgL_l1517z00_4120 = BgL_l1517z00_4752;
									goto BgL_zc3z04anonymousza31739ze3z87_4119;
								}
							}
						else
							{	/* Cfa/arithmetic.scm 152 */
								BgL_tmpz00_4739 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_tmpz00_4739);
			}
		}

	}



/* &cleanup-node!-fail1557 */
	obj_t BGl_z62cleanupzd2nodez12zd2fail1557z70zzcfa_arithmeticz00(obj_t
		BgL_envz00_3959, obj_t BgL_nodez00_3960)
	{
		{	/* Cfa/arithmetic.scm 140 */
			BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_3960)))->BgL_procz00));
			BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_3960)))->BgL_msgz00));
			return
				BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_3960)))->BgL_objz00));
		}

	}



/* &cleanup-node!-condit1555 */
	obj_t BGl_z62cleanupzd2nodez12zd2condit1555z70zzcfa_arithmeticz00(obj_t
		BgL_envz00_3961, obj_t BgL_nodez00_3962)
	{
		{	/* Cfa/arithmetic.scm 131 */
			BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_3962)))->BgL_testz00));
			BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_3962)))->BgL_truez00));
			return
				BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_3962)))->BgL_falsez00));
		}

	}



/* &cleanup-node!-setq1553 */
	obj_t BGl_z62cleanupzd2nodez12zd2setq1553z70zzcfa_arithmeticz00(obj_t
		BgL_envz00_3963, obj_t BgL_nodez00_3964)
	{
		{	/* Cfa/arithmetic.scm 124 */
			return
				BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
				(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_3964)))->BgL_valuez00));
		}

	}



/* &cleanup-node!-sync1551 */
	obj_t BGl_z62cleanupzd2nodez12zd2sync1551z70zzcfa_arithmeticz00(obj_t
		BgL_envz00_3965, obj_t BgL_nodez00_3966)
	{
		{	/* Cfa/arithmetic.scm 113 */
			BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_3966)))->BgL_mutexz00));
			BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_3966)))->BgL_prelockz00));
			BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_3966)))->BgL_bodyz00));
			{	/* Cfa/arithmetic.scm 118 */
				bool_t BgL_test2280z00_4785;

				{	/* Cfa/arithmetic.scm 118 */
					BgL_typez00_bglt BgL_arg1725z00_4127;

					BgL_arg1725z00_4127 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_syncz00_bglt) BgL_nodez00_3966))))->BgL_typez00);
					BgL_test2280z00_4785 =
						(((obj_t) BgL_arg1725z00_4127) == BGl_za2_za2z00zztype_cachez00);
				}
				if (BgL_test2280z00_4785)
					{	/* Cfa/arithmetic.scm 118 */
						return
							((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_syncz00_bglt) BgL_nodez00_3966))))->BgL_typez00) =
							((BgL_typez00_bglt) (((BgL_nodez00_bglt)
										COBJECT((((BgL_syncz00_bglt) COBJECT(((BgL_syncz00_bglt)
															BgL_nodez00_3966)))->BgL_bodyz00)))->
									BgL_typez00)), BUNSPEC);
					}
				else
					{	/* Cfa/arithmetic.scm 118 */
						return BFALSE;
					}
			}
		}

	}



/* &cleanup-node!-sequen1549 */
	obj_t BGl_z62cleanupzd2nodez12zd2sequen1549z70zzcfa_arithmeticz00(obj_t
		BgL_envz00_3967, obj_t BgL_nodez00_3968)
	{
		{	/* Cfa/arithmetic.scm 103 */
			if (NULLP(
					(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_3968)))->BgL_nodesz00)))
				{	/* Cfa/arithmetic.scm 105 */
					return BFALSE;
				}
			else
				{	/* Cfa/arithmetic.scm 105 */
					{	/* Cfa/arithmetic.scm 106 */
						obj_t BgL_g1516z00_4129;

						BgL_g1516z00_4129 =
							(((BgL_sequencez00_bglt) COBJECT(
									((BgL_sequencez00_bglt) BgL_nodez00_3968)))->BgL_nodesz00);
						{
							obj_t BgL_l1514z00_4131;

							BgL_l1514z00_4131 = BgL_g1516z00_4129;
						BgL_zc3z04anonymousza31671ze3z87_4130:
							if (PAIRP(BgL_l1514z00_4131))
								{	/* Cfa/arithmetic.scm 106 */
									{	/* Cfa/arithmetic.scm 106 */
										obj_t BgL_arg1684z00_4132;

										BgL_arg1684z00_4132 = CAR(BgL_l1514z00_4131);
										BGl_cleanupzd2nodez12zc0zzcfa_arithmeticz00(
											((BgL_nodez00_bglt) BgL_arg1684z00_4132));
									}
									{
										obj_t BgL_l1514z00_4808;

										BgL_l1514z00_4808 = CDR(BgL_l1514z00_4131);
										BgL_l1514z00_4131 = BgL_l1514z00_4808;
										goto BgL_zc3z04anonymousza31671ze3z87_4130;
									}
								}
							else
								{	/* Cfa/arithmetic.scm 106 */
									((bool_t) 1);
								}
						}
					}
					{	/* Cfa/arithmetic.scm 107 */
						bool_t BgL_test2283z00_4810;

						{	/* Cfa/arithmetic.scm 107 */
							BgL_typez00_bglt BgL_arg1696z00_4133;

							BgL_arg1696z00_4133 =
								(((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_sequencez00_bglt) BgL_nodez00_3968))))->
								BgL_typez00);
							BgL_test2283z00_4810 =
								(((obj_t) BgL_arg1696z00_4133) ==
								BGl_za2_za2z00zztype_cachez00);
						}
						if (BgL_test2283z00_4810)
							{	/* Cfa/arithmetic.scm 107 */
								return
									((((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt)
													((BgL_sequencez00_bglt) BgL_nodez00_3968))))->
										BgL_typez00) =
									((BgL_typez00_bglt) (((BgL_nodez00_bglt)
												COBJECT(((BgL_nodez00_bglt)
														CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
																(((BgL_sequencez00_bglt)
																		COBJECT(((BgL_sequencez00_bglt)
																				BgL_nodez00_3968)))->
																	BgL_nodesz00))))))->BgL_typez00)), BUNSPEC);
							}
						else
							{	/* Cfa/arithmetic.scm 107 */
								return BFALSE;
							}
					}
				}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_arithmeticz00()
	{
		{	/* Cfa/arithmetic.scm 28 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2195z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2195z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2195z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2195z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2195z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2195z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2195z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 3788706),
				BSTRING_TO_STRING(BGl_string2195z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string2195z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zzcfa_loosez00(((long) 471177483),
				BSTRING_TO_STRING(BGl_string2195z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zzcfa_iteratez00(((long) 131412196),
				BSTRING_TO_STRING(BGl_string2195z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zzcfa_cfaz00(((long) 400853773),
				BSTRING_TO_STRING(BGl_string2195z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zzcfa_setupz00(((long) 168272051),
				BSTRING_TO_STRING(BGl_string2195z00zzcfa_arithmeticz00));
			BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 468997780),
				BSTRING_TO_STRING(BGl_string2195z00zzcfa_arithmeticz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(((long) 324810621),
				BSTRING_TO_STRING(BGl_string2195z00zzcfa_arithmeticz00));
		}

	}

#ifdef __cplusplus
}
#endif
