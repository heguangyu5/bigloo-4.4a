/*===========================================================================*/
/*   (Return/walk.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Return/walk.scm) */
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

	typedef struct BgL_castz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}              *BgL_castz00_bglt;

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


	static obj_t BGl_z62returnzd2walkz12za2zzreturn_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_iszd2returnzf3z21zzreturn_walkz00(BgL_nodez00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_returnzd2funz12zc0zzreturn_walkz00(obj_t);
	static obj_t BGl_z62iszd2returnzf31349z43zzreturn_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_z62iszd2returnzf3z43zzreturn_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzreturn_walkz00();
	static BgL_nodez00_bglt BGl_returnz12z12zzreturn_walkz00(BgL_nodez00_bglt,
		BgL_localz00_bglt, BgL_retblockz00_bglt);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62returnz12zd2app1360za2zzreturn_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62returnzd2gotozd2funsz12z70zzreturn_walkz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzreturn_walkz00();
	static obj_t BGl_z62iszd2exitzd2returnzf3z91zzreturn_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62iszd2unwindzd2untilzf3z91zzreturn_walkz00(obj_t, obj_t);
	static obj_t BGl_z62iszd2returnzf3zd2app1356z91zzreturn_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62abortz62zzreturn_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	static obj_t BGl_za2getzd2exitdzd2topza2z00zzreturn_walkz00 = BUNSPEC;
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzreturn_walkz00();
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	static obj_t BGl_za2unwindzd2untilz12za2zc0zzreturn_walkz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62returnz121357z70zzreturn_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_returnzd2gotozd2funsz12z12zzreturn_walkz00(BgL_nodez00_bglt);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_z62functionzd2exitzd2nodez62zzreturn_walkz00(obj_t, obj_t);
	extern obj_t BGl_returnz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzreturn_walkz00 = BUNSPEC;
	static BgL_nodez00_bglt
		BGl_z62returnzd2gotozd2funsz12zd2le1364za2zzreturn_walkz00(obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_z62clearzd2returnzd2cachez12z70zzreturn_walkz00(obj_t);
	static obj_t BGl_za2popzd2exitz12za2zc0zzreturn_walkz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_step6ze70ze7zzreturn_walkz00(BgL_nodez00_bglt,
		BgL_localz00_bglt);
	static obj_t BGl_toplevelzd2initzd2zzreturn_walkz00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_iszd2unwindzd2untilzf3zf3zzreturn_walkz00(BgL_variablez00_bglt);
	static obj_t BGl_genericzd2initzd2zzreturn_walkz00();
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_step8ze70ze7zzreturn_walkz00(BgL_nodez00_bglt,
		BgL_localz00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62iszd2returnzf3zd2var1352z91zzreturn_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62iszd2getzd2exitdzd2topzf3z43zzreturn_walkz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_za2pushzd2exitz12za2zc0zzreturn_walkz00 = BUNSPEC;
	static obj_t BGl_z62returnzd2gotozd2funsz121361z70zzreturn_walkz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_iszd2exitzd2returnzf3zf3zzreturn_walkz00(BgL_nodez00_bglt,
		BgL_localz00_bglt);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_functionzd2exitzd2nodez00zzreturn_walkz00(BgL_nodez00_bglt);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_z62initzd2returnzd2cachez12z70zzreturn_walkz00(obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	extern obj_t BGl_walk2z00zzast_walkz00(BgL_nodez00_bglt, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_returnzd2walkz12zc0zzreturn_walkz00(obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzreturn_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl_z62iszd2returnzf3zd2letzd2var1354z43zzreturn_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzreturn_walkz00();
	extern obj_t BGl_za2optimzd2returnzd2gotozf3za2zf3zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzreturn_walkz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzreturn_walkz00();
	extern BgL_nodez00_bglt BGl_walk0z12z12zzast_walkz00(BgL_nodez00_bglt, obj_t);
	static BgL_nodez00_bglt BGl_z62returnz12z70zzreturn_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_retblockz00zzast_nodez00;
	extern BgL_nodez00_bglt BGl_walk2z12z12zzast_walkz00(BgL_nodez00_bglt, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_zc3z04exitza31812ze3ze70z60zzreturn_walkz00(BgL_nodez00_bglt,
		BgL_localz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_iszd2getzd2exitdzd2topzf3z21zzreturn_walkz00(BgL_variablez00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_initzd2returnzd2cachez12z12zzreturn_walkz00();
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[10];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2041z00zzreturn_walkz00,
		BgL_bgl_za762isza7d2returnza7f2061za7,
		BGl_z62iszd2returnzf31349z43zzreturn_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2043z00zzreturn_walkz00,
		BgL_bgl_za762returnza71213572062z00,
		BGl_z62returnz121357z70zzreturn_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2045z00zzreturn_walkz00,
		BgL_bgl_za762returnza7d2goto2063z00,
		BGl_z62returnzd2gotozd2funsz121361z70zzreturn_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2047z00zzreturn_walkz00,
		BgL_bgl_za762isza7d2returnza7f2064za7,
		BGl_z62iszd2returnzf3zd2var1352z91zzreturn_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2049z00zzreturn_walkz00,
		BgL_bgl_za762isza7d2returnza7f2065za7,
		BGl_z62iszd2returnzf3zd2letzd2var1354z43zzreturn_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2050z00zzreturn_walkz00,
		BgL_bgl_za762isza7d2returnza7f2066za7,
		BGl_z62iszd2returnzf3zd2app1356z91zzreturn_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2051z00zzreturn_walkz00,
		BgL_bgl_za762returnza712za7d2a2067za7,
		BGl_z62returnz12zd2app1360za2zzreturn_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2053z00zzreturn_walkz00,
		BgL_bgl_za762returnza7d2goto2068z00,
		BGl_z62returnzd2gotozd2funsz12zd2le1364za2zzreturn_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_iszd2returnzf3zd2envzf3zzreturn_walkz00,
		BgL_bgl_za762isza7d2returnza7f2069za7,
		BGl_z62iszd2returnzf3z43zzreturn_walkz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_returnzd2walkz12zd2envz12zzreturn_walkz00,
		BgL_bgl_za762returnza7d2walk2070z00,
		BGl_z62returnzd2walkz12za2zzreturn_walkz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_iszd2exitzd2returnzf3zd2envz21zzreturn_walkz00,
		BgL_bgl_za762isza7d2exitza7d2r2071za7,
		BGl_z62iszd2exitzd2returnzf3z91zzreturn_walkz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_functionzd2exitzd2nodezd2envzd2zzreturn_walkz00,
		BgL_bgl_za762functionza7d2ex2072z00,
		BGl_z62functionzd2exitzd2nodez62zzreturn_walkz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_iszd2unwindzd2untilzf3zd2envz21zzreturn_walkz00,
		BgL_bgl_za762isza7d2unwindza7d2073za7,
		BGl_z62iszd2unwindzd2untilzf3z91zzreturn_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2033z00zzreturn_walkz00,
		BgL_bgl_string2033za700za7za7r2074za7, "Return", 6);
	      DEFINE_STRING(BGl_string2034z00zzreturn_walkz00,
		BgL_bgl_string2034za700za7za7r2075za7, "   . ", 5);
	      DEFINE_STRING(BGl_string2035z00zzreturn_walkz00,
		BgL_bgl_string2035za700za7za7r2076za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string2036z00zzreturn_walkz00,
		BgL_bgl_string2036za700za7za7r2077za7, " error", 6);
	      DEFINE_STRING(BGl_string2037z00zzreturn_walkz00,
		BgL_bgl_string2037za700za7za7r2078za7, "s", 1);
	      DEFINE_STRING(BGl_string2038z00zzreturn_walkz00,
		BgL_bgl_string2038za700za7za7r2079za7, "", 0);
	      DEFINE_STRING(BGl_string2039z00zzreturn_walkz00,
		BgL_bgl_string2039za700za7za7r2080za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string2040z00zzreturn_walkz00,
		BgL_bgl_string2040za700za7za7r2081za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string2042z00zzreturn_walkz00,
		BgL_bgl_string2042za700za7za7r2082za7, "is-return?1349", 14);
	      DEFINE_STRING(BGl_string2044z00zzreturn_walkz00,
		BgL_bgl_string2044za700za7za7r2083za7, "return!1357", 11);
	      DEFINE_STRING(BGl_string2046z00zzreturn_walkz00,
		BgL_bgl_string2046za700za7za7r2084za7, "return-goto-funs!1361", 21);
	      DEFINE_STRING(BGl_string2048z00zzreturn_walkz00,
		BgL_bgl_string2048za700za7za7r2085za7, "is-return?", 10);
	      DEFINE_STRING(BGl_string2052z00zzreturn_walkz00,
		BgL_bgl_string2052za700za7za7r2086za7, "return!::node", 13);
	      DEFINE_STRING(BGl_string2054z00zzreturn_walkz00,
		BgL_bgl_string2054za700za7za7r2087za7, "return-goto-funs!::node", 23);
	      DEFINE_STRING(BGl_string2055z00zzreturn_walkz00,
		BgL_bgl_string2055za700za7za7r2088za7, "return_walk", 11);
	      DEFINE_STRING(BGl_string2056z00zzreturn_walkz00,
		BgL_bgl_string2056za700za7za7r2089za7,
		"sfun push-exit! pop-exit! unwind-until! __bexit $get-exitd-top foreign (clear-return-cache!) pass-started (init-return-cache!) ",
		127);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_clearzd2returnzd2cachez12zd2envzc0zzreturn_walkz00,
		BgL_bgl_za762clearza7d2retur2090z00,
		BGl_z62clearzd2returnzd2cachez12z70zzreturn_walkz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_iszd2getzd2exitdzd2topzf3zd2envzf3zzreturn_walkz00,
		BgL_bgl_za762isza7d2getza7d2ex2091za7,
		BGl_z62iszd2getzd2exitdzd2topzf3z43zzreturn_walkz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_initzd2returnzd2cachez12zd2envzc0zzreturn_walkz00,
		BgL_bgl_za762initza7d2return2092z00,
		BGl_z62initzd2returnzd2cachez12z70zzreturn_walkz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_GENERIC(BGl_returnz12zd2envzc0zzreturn_walkz00,
		BgL_bgl_za762returnza712za770za72093z00,
		BGl_z62returnz12z70zzreturn_walkz00, 0L, BUNSPEC, 3);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_returnzd2gotozd2funsz12zd2envzc0zzreturn_walkz00,
		BgL_bgl_za762returnza7d2goto2094z00,
		BGl_z62returnzd2gotozd2funsz12z70zzreturn_walkz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2getzd2exitdzd2topza2z00zzreturn_walkz00));
		     ADD_ROOT((void *) (&BGl_za2unwindzd2untilz12za2zc0zzreturn_walkz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzreturn_walkz00));
		     ADD_ROOT((void *) (&BGl_za2popzd2exitz12za2zc0zzreturn_walkz00));
		     ADD_ROOT((void *) (&BGl_za2pushzd2exitz12za2zc0zzreturn_walkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzreturn_walkz00(long
		BgL_checksumz00_2556, char *BgL_fromz00_2557)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzreturn_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzreturn_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzreturn_walkz00();
					BGl_libraryzd2moduleszd2initz00zzreturn_walkz00();
					BGl_cnstzd2initzd2zzreturn_walkz00();
					BGl_importedzd2moduleszd2initz00zzreturn_walkz00();
					BGl_genericzd2initzd2zzreturn_walkz00();
					BGl_methodzd2initzd2zzreturn_walkz00();
					return BGl_toplevelzd2initzd2zzreturn_walkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzreturn_walkz00()
	{
		{	/* Return/walk.scm 16 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"return_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"return_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"return_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"return_walk");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "return_walk");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "return_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "return_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"return_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "return_walk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"return_walk");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"return_walk");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "return_walk");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "return_walk");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzreturn_walkz00()
	{
		{	/* Return/walk.scm 16 */
			{	/* Return/walk.scm 16 */
				obj_t BgL_cportz00_2493;

				{	/* Return/walk.scm 16 */
					obj_t BgL_stringz00_2501;

					BgL_stringz00_2501 = BGl_string2056z00zzreturn_walkz00;
					{	/* Return/walk.scm 16 */
						obj_t BgL_startz00_2502;

						BgL_startz00_2502 = BINT(((long) 0));
						{	/* Return/walk.scm 16 */
							obj_t BgL_endz00_2503;

							BgL_endz00_2503 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2501)));
							{	/* Return/walk.scm 16 */

								BgL_cportz00_2493 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2501, BgL_startz00_2502, BgL_endz00_2503);
				}}}}
				{
					long BgL_iz00_2494;

					BgL_iz00_2494 = ((long) 9);
				BgL_loopz00_2495:
					if ((BgL_iz00_2494 == ((long) -1)))
						{	/* Return/walk.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Return/walk.scm 16 */
							{	/* Return/walk.scm 16 */
								obj_t BgL_arg2059z00_2497;

								{	/* Return/walk.scm 16 */

									{	/* Return/walk.scm 16 */
										obj_t BgL_locationz00_2499;

										BgL_locationz00_2499 = BBOOL(((bool_t) 0));
										{	/* Return/walk.scm 16 */

											BgL_arg2059z00_2497 =
												BGl_readz00zz__readerz00(BgL_cportz00_2493,
												BgL_locationz00_2499);
										}
									}
								}
								{	/* Return/walk.scm 16 */
									int BgL_tmpz00_2590;

									BgL_tmpz00_2590 = (int) (BgL_iz00_2494);
									CNST_TABLE_SET(BgL_tmpz00_2590, BgL_arg2059z00_2497);
							}}
							{	/* Return/walk.scm 16 */
								int BgL_auxz00_2500;

								BgL_auxz00_2500 = (int) ((BgL_iz00_2494 - ((long) 1)));
								{
									long BgL_iz00_2595;

									BgL_iz00_2595 = (long) (BgL_auxz00_2500);
									BgL_iz00_2494 = BgL_iz00_2595;
									goto BgL_loopz00_2495;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzreturn_walkz00()
	{
		{	/* Return/walk.scm 16 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzreturn_walkz00()
	{
		{	/* Return/walk.scm 16 */
			BGl_za2getzd2exitdzd2topza2z00zzreturn_walkz00 = BUNSPEC;
			BGl_za2unwindzd2untilz12za2zc0zzreturn_walkz00 = BUNSPEC;
			BGl_za2pushzd2exitz12za2zc0zzreturn_walkz00 = BUNSPEC;
			BGl_za2popzd2exitz12za2zc0zzreturn_walkz00 = BUNSPEC;
			return BUNSPEC;
		}

	}



/* return-walk! */
	BGL_EXPORTED_DEF obj_t BGl_returnzd2walkz12zc0zzreturn_walkz00(obj_t
		BgL_globalsz00_17)
	{
		{	/* Return/walk.scm 44 */
			{	/* Return/walk.scm 45 */
				obj_t BgL_list1422z00_1465;

				{	/* Return/walk.scm 45 */
					obj_t BgL_arg1441z00_1466;

					{	/* Return/walk.scm 45 */
						obj_t BgL_arg1442z00_1467;

						BgL_arg1442z00_1467 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1441z00_1466 =
							MAKE_YOUNG_PAIR(BGl_string2033z00zzreturn_walkz00,
							BgL_arg1442z00_1467);
					}
					BgL_list1422z00_1465 =
						MAKE_YOUNG_PAIR(BGl_string2034z00zzreturn_walkz00,
						BgL_arg1441z00_1466);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1422z00_1465);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string2033z00zzreturn_walkz00;
			{	/* Return/walk.scm 45 */
				obj_t BgL_g1118z00_1468;
				obj_t BgL_g1119z00_1469;

				{	/* Return/walk.scm 45 */
					obj_t BgL_list1464z00_1482;

					BgL_list1464z00_1482 =
						MAKE_YOUNG_PAIR
						(BGl_initzd2returnzd2cachez12zd2envzc0zzreturn_walkz00, BNIL);
					BgL_g1118z00_1468 = BgL_list1464z00_1482;
				}
				BgL_g1119z00_1469 = CNST_TABLE_REF(((long) 0));
				{
					obj_t BgL_hooksz00_1471;
					obj_t BgL_hnamesz00_1472;

					BgL_hooksz00_1471 = BgL_g1118z00_1468;
					BgL_hnamesz00_1472 = BgL_g1119z00_1469;
				BgL_zc3z04anonymousza31443ze3z87_1473:
					if (NULLP(BgL_hooksz00_1471))
						{	/* Return/walk.scm 45 */
							CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Return/walk.scm 45 */
							bool_t BgL_test2098z00_2610;

							{	/* Return/walk.scm 45 */
								obj_t BgL_fun1463z00_1480;

								BgL_fun1463z00_1480 = CAR(((obj_t) BgL_hooksz00_1471));
								BgL_test2098z00_2610 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1463z00_1480)
									(BgL_fun1463z00_1480, BEOA));
							}
							if (BgL_test2098z00_2610)
								{	/* Return/walk.scm 45 */
									obj_t BgL_arg1448z00_1477;
									obj_t BgL_arg1449z00_1478;

									BgL_arg1448z00_1477 = CDR(((obj_t) BgL_hooksz00_1471));
									BgL_arg1449z00_1478 = CDR(((obj_t) BgL_hnamesz00_1472));
									{
										obj_t BgL_hnamesz00_2622;
										obj_t BgL_hooksz00_2621;

										BgL_hooksz00_2621 = BgL_arg1448z00_1477;
										BgL_hnamesz00_2622 = BgL_arg1449z00_1478;
										BgL_hnamesz00_1472 = BgL_hnamesz00_2622;
										BgL_hooksz00_1471 = BgL_hooksz00_2621;
										goto BgL_zc3z04anonymousza31443ze3z87_1473;
									}
								}
							else
								{	/* Return/walk.scm 45 */
									obj_t BgL_arg1461z00_1479;

									BgL_arg1461z00_1479 = CAR(((obj_t) BgL_hnamesz00_1472));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string2033z00zzreturn_walkz00,
										BGl_string2035z00zzreturn_walkz00, BgL_arg1461z00_1479);
								}
						}
				}
			}
			{
				obj_t BgL_l1339z00_1484;

				BgL_l1339z00_1484 = BgL_globalsz00_17;
			BgL_zc3z04anonymousza31465ze3z87_1485:
				if (PAIRP(BgL_l1339z00_1484))
					{	/* Return/walk.scm 46 */
						BGl_returnzd2funz12zc0zzreturn_walkz00(CAR(BgL_l1339z00_1484));
						{
							obj_t BgL_l1339z00_2630;

							BgL_l1339z00_2630 = CDR(BgL_l1339z00_1484);
							BgL_l1339z00_1484 = BgL_l1339z00_2630;
							goto BgL_zc3z04anonymousza31465ze3z87_1485;
						}
					}
				else
					{	/* Return/walk.scm 46 */
						((bool_t) 1);
					}
			}
			if (
				((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
					((long) 0)))
				{	/* Return/walk.scm 47 */
					{	/* Return/walk.scm 47 */
						obj_t BgL_port1341z00_1492;

						{	/* Return/walk.scm 47 */
							obj_t BgL_res1974z00_2199;

							{	/* Return/walk.scm 47 */
								obj_t BgL_tmpz00_2635;

								BgL_tmpz00_2635 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1974z00_2199 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2635);
							}
							BgL_port1341z00_1492 = BgL_res1974z00_2199;
						}
						bgl_display_obj(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
							BgL_port1341z00_1492);
						bgl_display_string(BGl_string2036z00zzreturn_walkz00,
							BgL_port1341z00_1492);
						{	/* Return/walk.scm 47 */
							obj_t BgL_arg1489z00_1493;

							{	/* Return/walk.scm 47 */
								bool_t BgL_test2101z00_2640;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
									{	/* Return/walk.scm 47 */
										if (INTEGERP
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
											{	/* Return/walk.scm 47 */
												BgL_test2101z00_2640 =
													(
													(long)
													CINT
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
													> ((long) 1));
											}
										else
											{	/* Return/walk.scm 47 */
												BgL_test2101z00_2640 =
													BGl_2ze3ze3zz__r4_numbers_6_5z00
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
													BINT(((long) 1)));
									}}
								else
									{	/* Return/walk.scm 47 */
										BgL_test2101z00_2640 = ((bool_t) 0);
									}
								if (BgL_test2101z00_2640)
									{	/* Return/walk.scm 47 */
										BgL_arg1489z00_1493 = BGl_string2037z00zzreturn_walkz00;
									}
								else
									{	/* Return/walk.scm 47 */
										BgL_arg1489z00_1493 = BGl_string2038z00zzreturn_walkz00;
									}
							}
							bgl_display_obj(BgL_arg1489z00_1493, BgL_port1341z00_1492);
						}
						bgl_display_string(BGl_string2039z00zzreturn_walkz00,
							BgL_port1341z00_1492);
						bgl_display_char(((unsigned char) 10), BgL_port1341z00_1492);
					}
					{	/* Return/walk.scm 47 */
						obj_t BgL_list1493z00_1499;

						BgL_list1493z00_1499 = MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list1493z00_1499);
					}
				}
			else
				{	/* Return/walk.scm 47 */
					obj_t BgL_g1120z00_1500;
					obj_t BgL_g1121z00_1501;

					{	/* Return/walk.scm 47 */
						obj_t BgL_list1531z00_1514;

						BgL_list1531z00_1514 =
							MAKE_YOUNG_PAIR
							(BGl_clearzd2returnzd2cachez12zd2envzc0zzreturn_walkz00, BNIL);
						BgL_g1120z00_1500 = BgL_list1531z00_1514;
					}
					BgL_g1121z00_1501 = CNST_TABLE_REF(((long) 2));
					{
						obj_t BgL_hooksz00_1503;
						obj_t BgL_hnamesz00_1504;

						BgL_hooksz00_1503 = BgL_g1120z00_1500;
						BgL_hnamesz00_1504 = BgL_g1121z00_1501;
					BgL_zc3z04anonymousza31494ze3z87_1505:
						if (NULLP(BgL_hooksz00_1503))
							{	/* Return/walk.scm 47 */
								return BgL_globalsz00_17;
							}
						else
							{	/* Return/walk.scm 47 */
								bool_t BgL_test2105z00_2659;

								{	/* Return/walk.scm 47 */
									obj_t BgL_fun1530z00_1512;

									BgL_fun1530z00_1512 = CAR(((obj_t) BgL_hooksz00_1503));
									BgL_test2105z00_2659 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun1530z00_1512)
										(BgL_fun1530z00_1512, BEOA));
								}
								if (BgL_test2105z00_2659)
									{	/* Return/walk.scm 47 */
										obj_t BgL_arg1518z00_1509;
										obj_t BgL_arg1521z00_1510;

										BgL_arg1518z00_1509 = CDR(((obj_t) BgL_hooksz00_1503));
										BgL_arg1521z00_1510 = CDR(((obj_t) BgL_hnamesz00_1504));
										{
											obj_t BgL_hnamesz00_2671;
											obj_t BgL_hooksz00_2670;

											BgL_hooksz00_2670 = BgL_arg1518z00_1509;
											BgL_hnamesz00_2671 = BgL_arg1521z00_1510;
											BgL_hnamesz00_1504 = BgL_hnamesz00_2671;
											BgL_hooksz00_1503 = BgL_hooksz00_2670;
											goto BgL_zc3z04anonymousza31494ze3z87_1505;
										}
									}
								else
									{	/* Return/walk.scm 47 */
										obj_t BgL_arg1528z00_1511;

										BgL_arg1528z00_1511 = CAR(((obj_t) BgL_hnamesz00_1504));
										return
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_za2currentzd2passza2zd2zzengine_passz00,
											BGl_string2040z00zzreturn_walkz00, BgL_arg1528z00_1511);
									}
							}
					}
				}
		}

	}



/* &return-walk! */
	obj_t BGl_z62returnzd2walkz12za2zzreturn_walkz00(obj_t BgL_envz00_2427,
		obj_t BgL_globalsz00_2428)
	{
		{	/* Return/walk.scm 44 */
			return BGl_returnzd2walkz12zc0zzreturn_walkz00(BgL_globalsz00_2428);
		}

	}



/* init-return-cache! */
	BGL_EXPORTED_DEF obj_t BGl_initzd2returnzd2cachez12z12zzreturn_walkz00()
	{
		{	/* Return/walk.scm 60 */
			{	/* Return/walk.scm 61 */
				bool_t BgL_test2106z00_2676;

				{	/* Return/walk.scm 61 */
					bool_t BgL_res1979z00_2216;

					{	/* Return/walk.scm 61 */
						obj_t BgL_objz00_2215;

						BgL_objz00_2215 = BGl_za2getzd2exitdzd2topza2z00zzreturn_walkz00;
						BgL_res1979z00_2216 =
							BGl_isazf3zf3zz__objectz00(BgL_objz00_2215,
							BGl_globalz00zzast_varz00);
					}
					BgL_test2106z00_2676 = BgL_res1979z00_2216;
				}
				if (BgL_test2106z00_2676)
					{	/* Return/walk.scm 61 */
						BFALSE;
					}
				else
					{	/* Return/walk.scm 61 */
						{	/* Return/walk.scm 62 */
							obj_t BgL_list1533z00_1516;

							BgL_list1533z00_1516 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
							BGl_za2getzd2exitdzd2topza2z00zzreturn_walkz00 =
								BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 4)),
								BgL_list1533z00_1516);
						}
						{	/* Return/walk.scm 63 */
							obj_t BgL_list1534z00_1517;

							BgL_list1534z00_1517 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)), BNIL);
							BGl_za2unwindzd2untilz12za2zc0zzreturn_walkz00 =
								BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 6)),
								BgL_list1534z00_1517);
						}
						{	/* Return/walk.scm 64 */
							obj_t BgL_list1535z00_1518;

							BgL_list1535z00_1518 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
							BGl_za2popzd2exitz12za2zc0zzreturn_walkz00 =
								BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 7)),
								BgL_list1535z00_1518);
						}
						{	/* Return/walk.scm 65 */
							obj_t BgL_list1536z00_1519;

							BgL_list1536z00_1519 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
							BGl_za2pushzd2exitz12za2zc0zzreturn_walkz00 =
								BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 8)),
								BgL_list1536z00_1519);
			}}}
			return BUNSPEC;
		}

	}



/* &init-return-cache! */
	obj_t BGl_z62initzd2returnzd2cachez12z70zzreturn_walkz00(obj_t
		BgL_envz00_2429)
	{
		{	/* Return/walk.scm 60 */
			return BGl_initzd2returnzd2cachez12z12zzreturn_walkz00();
		}

	}



/* &clear-return-cache! */
	obj_t BGl_z62clearzd2returnzd2cachez12z70zzreturn_walkz00(obj_t
		BgL_envz00_2430)
	{
		{	/* Return/walk.scm 71 */
			BGl_za2getzd2exitdzd2topza2z00zzreturn_walkz00 = BFALSE;
			BGl_za2unwindzd2untilz12za2zc0zzreturn_walkz00 = BFALSE;
			BGl_za2pushzd2exitz12za2zc0zzreturn_walkz00 = BFALSE;
			return (BGl_za2popzd2exitz12za2zc0zzreturn_walkz00 = BFALSE, BUNSPEC);
		}

	}



/* return-fun! */
	obj_t BGl_returnzd2funz12zc0zzreturn_walkz00(obj_t BgL_varz00_18)
	{
		{	/* Return/walk.scm 80 */
			{	/* Return/walk.scm 81 */
				obj_t BgL_arg1537z00_1520;

				BgL_arg1537z00_1520 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_varz00_18)))->BgL_idz00);
				BGl_enterzd2functionzd2zztools_errorz00(BgL_arg1537z00_1520);
			}
			{	/* Return/walk.scm 82 */
				BgL_valuez00_bglt BgL_funz00_1521;

				BgL_funz00_1521 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_varz00_18)))->BgL_valuez00);
				{	/* Return/walk.scm 82 */
					obj_t BgL_bodyz00_1522;

					BgL_bodyz00_1522 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt) BgL_funz00_1521)))->BgL_bodyz00);
					{	/* Return/walk.scm 83 */
						obj_t BgL_exitz00_1523;

						BgL_exitz00_1523 =
							BGl_functionzd2exitzd2nodez00zzreturn_walkz00(
							((BgL_nodez00_bglt) BgL_bodyz00_1522));
						{	/* Return/walk.scm 84 */

							if (PAIRP(BgL_exitz00_1523))
								{	/* Return/walk.scm 86 */
									obj_t BgL_exitvarz00_1525;
									obj_t BgL_exitnodez00_1526;

									BgL_exitvarz00_1525 = CAR(BgL_exitz00_1523);
									BgL_exitnodez00_1526 = CDR(BgL_exitz00_1523);
									if (BGl_iszd2exitzd2returnzf3zf3zzreturn_walkz00(
											((BgL_nodez00_bglt) BgL_exitnodez00_1526),
											((BgL_localz00_bglt) BgL_exitvarz00_1525)))
										{	/* Return/walk.scm 89 */
											BgL_retblockz00_bglt BgL_rblockz00_1528;

											{	/* Return/walk.scm 89 */
												BgL_retblockz00_bglt BgL_new1123z00_1530;

												{	/* Return/walk.scm 90 */
													BgL_retblockz00_bglt BgL_new1122z00_1531;

													BgL_new1122z00_1531 =
														((BgL_retblockz00_bglt)
														BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_retblockz00_bgl))));
													{	/* Return/walk.scm 90 */
														long BgL_arg1552z00_1532;

														{	/* Return/walk.scm 90 */
															long BgL_res1981z00_2224;

															BgL_res1981z00_2224 =
																BGL_CLASS_INDEX(BGl_retblockz00zzast_nodez00);
															BgL_arg1552z00_1532 = BgL_res1981z00_2224;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1122z00_1531),
															BgL_arg1552z00_1532);
													}
													{	/* Return/walk.scm 90 */
														BgL_objectz00_bglt BgL_tmpz00_2716;

														BgL_tmpz00_2716 =
															((BgL_objectz00_bglt) BgL_new1122z00_1531);
														BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2716, BFALSE);
													}
													((BgL_objectz00_bglt) BgL_new1122z00_1531);
													BgL_new1123z00_1530 = BgL_new1122z00_1531;
												}
												((((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_new1123z00_1530)))->
														BgL_locz00) =
													((obj_t) (((BgL_nodez00_bglt)
																COBJECT(((BgL_nodez00_bglt)
																		BgL_bodyz00_1522)))->BgL_locz00)), BUNSPEC);
												((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																	BgL_new1123z00_1530)))->BgL_typez00) =
													((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																COBJECT(((BgL_nodez00_bglt)
																		BgL_exitnodez00_1526)))->BgL_typez00)),
													BUNSPEC);
												((((BgL_retblockz00_bglt)
															COBJECT(BgL_new1123z00_1530))->BgL_bodyz00) =
													((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
															BgL_bodyz00_1522)), BUNSPEC);
												BgL_rblockz00_1528 = BgL_new1123z00_1530;
											}
											((((BgL_retblockz00_bglt) COBJECT(BgL_rblockz00_1528))->
													BgL_bodyz00) =
												((BgL_nodez00_bglt)
													BGl_returnz12z12zzreturn_walkz00(((BgL_nodez00_bglt)
															BgL_exitnodez00_1526),
														((BgL_localz00_bglt) BgL_exitvarz00_1525),
														BgL_rblockz00_1528)), BUNSPEC);
											{	/* Return/walk.scm 95 */
												obj_t BgL_vz00_2231;

												BgL_vz00_2231 = CNST_TABLE_REF(((long) 9));
												((((BgL_sfunz00_bglt) COBJECT(
																((BgL_sfunz00_bglt) BgL_funz00_1521)))->
														BgL_classz00) = ((obj_t) BgL_vz00_2231), BUNSPEC);
											}
											((((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt) BgL_funz00_1521)))->
													BgL_bodyz00) =
												((obj_t) ((obj_t) BgL_rblockz00_1528)), BUNSPEC);
										}
									else
										{	/* Return/walk.scm 88 */
											BFALSE;
										}
								}
							else
								{	/* Return/walk.scm 85 */
									BFALSE;
								}
							if (CBOOL(BGl_za2optimzd2returnzd2gotozf3za2zf3zzengine_paramz00))
								{	/* Return/walk.scm 97 */
									((obj_t)
										BGl_returnzd2gotozd2funsz12z12zzreturn_walkz00(
											((BgL_nodez00_bglt) BgL_bodyz00_1522)));
								}
							else
								{	/* Return/walk.scm 97 */
									BFALSE;
								}
							BGl_leavezd2functionzd2zztools_errorz00();
							return BgL_varz00_18;
						}
					}
				}
			}
		}

	}



/* function-exit-node */
	BGL_EXPORTED_DEF obj_t
		BGl_functionzd2exitzd2nodez00zzreturn_walkz00(BgL_nodez00_bglt
		BgL_nodez00_19)
	{
		{	/* Return/walk.scm 122 */
			{
				BgL_nodez00_bglt BgL_nodez00_1605;
				BgL_localz00_bglt BgL_varz00_1606;
				BgL_nodez00_bglt BgL_nodez00_1633;
				BgL_nodez00_bglt BgL_nodez00_1660;
				BgL_localz00_bglt BgL_exitvarz00_1661;
				obj_t BgL_nodesz00_1682;
				BgL_localz00_bglt BgL_varz00_1683;
				BgL_nodez00_bglt BgL_bodyz00_1700;
				BgL_varz00_bglt BgL_varz00_1701;

				if (BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_nodez00_19), BGl_setzd2exzd2itz00zzast_nodez00))
					{	/* Return/walk.scm 212 */
						BgL_nodez00_bglt BgL_arg1558z00_1543;
						BgL_varz00_bglt BgL_arg1561z00_1544;

						BgL_arg1558z00_1543 =
							(((BgL_setzd2exzd2itz00_bglt) COBJECT(
									((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_19)))->BgL_bodyz00);
						BgL_arg1561z00_1544 =
							(((BgL_setzd2exzd2itz00_bglt) COBJECT(
									((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_19)))->BgL_varz00);
						BgL_bodyz00_1700 = BgL_arg1558z00_1543;
						BgL_varz00_1701 = BgL_arg1561z00_1544;
						if (BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_bodyz00_1700), BGl_letzd2varzd2zzast_nodez00))
							{	/* Return/walk.scm 205 */
								bool_t BgL_test2112z00_2756;

								if (NULLP(
										(((BgL_letzd2varzd2_bglt) COBJECT(
													((BgL_letzd2varzd2_bglt) BgL_bodyz00_1700)))->
											BgL_bindingsz00)))
									{	/* Return/walk.scm 205 */
										BgL_nodez00_bglt BgL_arg1809z00_1715;

										BgL_arg1809z00_1715 =
											(((BgL_letzd2varzd2_bglt) COBJECT(
													((BgL_letzd2varzd2_bglt) BgL_bodyz00_1700)))->
											BgL_bodyz00);
										BgL_test2112z00_2756 =
											BGl_isazf3zf3zz__objectz00(((obj_t) BgL_arg1809z00_1715),
											BGl_sequencez00zzast_nodez00);
									}
								else
									{	/* Return/walk.scm 205 */
										BgL_test2112z00_2756 = ((bool_t) 0);
									}
								if (BgL_test2112z00_2756)
									{	/* Return/walk.scm 206 */
										BgL_sequencez00_bglt BgL_i1149z00_1710;

										BgL_i1149z00_1710 =
											((BgL_sequencez00_bglt)
											(((BgL_letzd2varzd2_bglt) COBJECT(
														((BgL_letzd2varzd2_bglt) BgL_bodyz00_1700)))->
												BgL_bodyz00));
										{	/* Return/walk.scm 208 */
											obj_t BgL_arg1801z00_1712;
											BgL_variablez00_bglt BgL_arg1808z00_1713;

											BgL_arg1801z00_1712 =
												(((BgL_sequencez00_bglt) COBJECT(BgL_i1149z00_1710))->
												BgL_nodesz00);
											BgL_arg1808z00_1713 =
												(((BgL_varz00_bglt) COBJECT(BgL_varz00_1701))->
												BgL_variablez00);
											BgL_nodesz00_1682 = BgL_arg1801z00_1712;
											BgL_varz00_1683 =
												((BgL_localz00_bglt) BgL_arg1808z00_1713);
											{	/* Return/walk.scm 194 */
												bool_t BgL_test2114z00_2770;

												if ((bgl_list_length(BgL_nodesz00_1682) == ((long) 2)))
													{	/* Return/walk.scm 194 */
														BgL_nodez00_1660 =
															((BgL_nodez00_bglt)
															CAR(((obj_t) BgL_nodesz00_1682)));
														BgL_exitvarz00_1661 = BgL_varz00_1683;
														if (BGl_isazf3zf3zz__objectz00(
																((obj_t) BgL_nodez00_1660),
																BGl_appz00zzast_nodez00))
															{	/* Return/walk.scm 182 */
																BgL_varz00_bglt BgL_i1145z00_1665;

																BgL_i1145z00_1665 =
																	(((BgL_appz00_bglt) COBJECT(
																			((BgL_appz00_bglt) BgL_nodez00_1660)))->
																	BgL_funz00);
																{	/* Return/walk.scm 184 */
																	bool_t BgL_test2117z00_2779;

																	{	/* Return/walk.scm 184 */
																		BgL_variablez00_bglt BgL_arg1756z00_1681;

																		BgL_arg1756z00_1681 =
																			(((BgL_varz00_bglt)
																				COBJECT(BgL_i1145z00_1665))->
																			BgL_variablez00);
																		BgL_test2117z00_2779 =
																			(((obj_t) BgL_arg1756z00_1681) ==
																			BGl_za2pushzd2exitz12za2zc0zzreturn_walkz00);
																	}
																	if (BgL_test2117z00_2779)
																		{	/* Return/walk.scm 184 */
																			if (
																				(bgl_list_length(
																						(((BgL_appz00_bglt) COBJECT(
																									((BgL_appz00_bglt)
																										BgL_nodez00_1660)))->
																							BgL_argsz00)) == ((long) 2)))
																				{	/* Return/walk.scm 188 */
																					bool_t BgL_test2119z00_2788;

																					{	/* Return/walk.scm 188 */
																						obj_t BgL_arg1746z00_1677;

																						{	/* Return/walk.scm 188 */
																							obj_t BgL_pairz00_2263;

																							BgL_pairz00_2263 =
																								(((BgL_appz00_bglt) COBJECT(
																										((BgL_appz00_bglt)
																											BgL_nodez00_1660)))->
																								BgL_argsz00);
																							BgL_arg1746z00_1677 =
																								CAR(BgL_pairz00_2263);
																						}
																						BgL_test2119z00_2788 =
																							BGl_isazf3zf3zz__objectz00
																							(BgL_arg1746z00_1677,
																							BGl_varz00zzast_nodez00);
																					}
																					if (BgL_test2119z00_2788)
																						{	/* Return/walk.scm 191 */
																							obj_t BgL_tmpz00_2793;

																							{
																								BgL_variablez00_bglt
																									BgL_auxz00_2794;
																								{
																									BgL_varz00_bglt
																										BgL_auxz00_2795;
																									{	/* Return/walk.scm 189 */
																										obj_t BgL_pairz00_2264;

																										BgL_pairz00_2264 =
																											(((BgL_appz00_bglt)
																												COBJECT((
																														(BgL_appz00_bglt)
																														BgL_nodez00_1660)))->
																											BgL_argsz00);
																										BgL_auxz00_2795 =
																											((BgL_varz00_bglt)
																											CAR(BgL_pairz00_2264));
																									}
																									BgL_auxz00_2794 =
																										(((BgL_varz00_bglt)
																											COBJECT
																											(BgL_auxz00_2795))->
																										BgL_variablez00);
																								}
																								BgL_tmpz00_2793 =
																									((obj_t) BgL_auxz00_2794);
																							}
																							BgL_test2114z00_2770 =
																								(BgL_tmpz00_2793 ==
																								((obj_t) BgL_exitvarz00_1661));
																						}
																					else
																						{	/* Return/walk.scm 188 */
																							BgL_test2114z00_2770 =
																								((bool_t) 0);
																						}
																				}
																			else
																				{	/* Return/walk.scm 186 */
																					BgL_test2114z00_2770 = ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Return/walk.scm 184 */
																			BgL_test2114z00_2770 = ((bool_t) 0);
																		}
																}
															}
														else
															{	/* Return/walk.scm 180 */
																BgL_test2114z00_2770 = ((bool_t) 0);
															}
													}
												else
													{	/* Return/walk.scm 194 */
														BgL_test2114z00_2770 = ((bool_t) 0);
													}
												if (BgL_test2114z00_2770)
													{	/* Return/walk.scm 195 */
														obj_t BgL_bindingz00_1690;

														{	/* Return/walk.scm 195 */
															obj_t BgL_pairz00_2271;

															BgL_pairz00_2271 =
																CDR(((obj_t) BgL_nodesz00_1682));
															BgL_nodez00_1633 =
																((BgL_nodez00_bglt) CAR(BgL_pairz00_2271));
														}
														if (BGl_isazf3zf3zz__objectz00(
																((obj_t) BgL_nodez00_1633),
																BGl_letzd2varzd2zzast_nodez00))
															{	/* Return/walk.scm 168 */
																bool_t BgL_test2121z00_2810;

																{	/* Return/walk.scm 168 */
																	bool_t BgL_test2122z00_2811;

																	{	/* Return/walk.scm 168 */
																		obj_t BgL_tmpz00_2812;

																		BgL_tmpz00_2812 =
																			(((BgL_letzd2varzd2_bglt) COBJECT(
																					((BgL_letzd2varzd2_bglt)
																						BgL_nodez00_1633)))->
																			BgL_bindingsz00);
																		BgL_test2122z00_2811 =
																			PAIRP(BgL_tmpz00_2812);
																	}
																	if (BgL_test2122z00_2811)
																		{	/* Return/walk.scm 168 */
																			obj_t BgL_tmpz00_2816;

																			{	/* Return/walk.scm 168 */
																				obj_t BgL_pairz00_2255;

																				BgL_pairz00_2255 =
																					(((BgL_letzd2varzd2_bglt) COBJECT(
																							((BgL_letzd2varzd2_bglt)
																								BgL_nodez00_1633)))->
																					BgL_bindingsz00);
																				BgL_tmpz00_2816 = CDR(BgL_pairz00_2255);
																			}
																			BgL_test2121z00_2810 =
																				NULLP(BgL_tmpz00_2816);
																		}
																	else
																		{	/* Return/walk.scm 168 */
																			BgL_test2121z00_2810 = ((bool_t) 0);
																		}
																}
																if (BgL_test2121z00_2810)
																	{	/* Return/walk.scm 169 */
																		obj_t BgL_bindingz00_1643;

																		{	/* Return/walk.scm 169 */
																			obj_t BgL_pairz00_2257;

																			BgL_pairz00_2257 =
																				(((BgL_letzd2varzd2_bglt) COBJECT(
																						((BgL_letzd2varzd2_bglt)
																							BgL_nodez00_1633)))->
																				BgL_bindingsz00);
																			BgL_bindingz00_1643 =
																				CAR(BgL_pairz00_2257);
																		}
																		{	/* Return/walk.scm 170 */
																			obj_t BgL_exprz00_1645;

																			BgL_exprz00_1645 =
																				CDR(((obj_t) BgL_bindingz00_1643));
																			{	/* Return/walk.scm 171 */

																				if (BGl_isazf3zf3zz__objectz00
																					(BgL_exprz00_1645,
																						BGl_appz00zzast_nodez00))
																					{	/* Return/walk.scm 172 */
																						if (NULLP(
																								(((BgL_appz00_bglt) COBJECT(
																											((BgL_appz00_bglt)
																												BgL_exprz00_1645)))->
																									BgL_argsz00)))
																							{	/* Return/walk.scm 176 */
																								bool_t BgL_test2125z00_2832;

																								{	/* Return/walk.scm 176 */
																									BgL_variablez00_bglt
																										BgL_arg1711z00_1653;
																									BgL_arg1711z00_1653 =
																										(((BgL_varz00_bglt)
																											COBJECT(((
																														(BgL_appz00_bglt)
																														COBJECT((
																																(BgL_appz00_bglt)
																																BgL_exprz00_1645)))->
																													BgL_funz00)))->
																										BgL_variablez00);
																									BgL_test2125z00_2832 =
																										(((obj_t)
																											BgL_arg1711z00_1653) ==
																										BGl_za2getzd2exitdzd2topza2z00zzreturn_walkz00);
																								}
																								if (BgL_test2125z00_2832)
																									{	/* Return/walk.scm 176 */
																										BgL_bindingz00_1690 =
																											BgL_bindingz00_1643;
																									}
																								else
																									{	/* Return/walk.scm 176 */
																										BgL_bindingz00_1690 =
																											BFALSE;
																									}
																							}
																						else
																							{	/* Return/walk.scm 174 */
																								BgL_bindingz00_1690 = BFALSE;
																							}
																					}
																				else
																					{	/* Return/walk.scm 172 */
																						BgL_bindingz00_1690 = BFALSE;
																					}
																			}
																		}
																	}
																else
																	{	/* Return/walk.scm 168 */
																		BgL_bindingz00_1690 = BFALSE;
																	}
															}
														else
															{	/* Return/walk.scm 166 */
																BgL_bindingz00_1690 = BFALSE;
															}
														if (CBOOL(BgL_bindingz00_1690))
															{	/* Return/walk.scm 197 */
																BgL_letzd2varzd2_bglt BgL_i1147z00_1691;

																{	/* Return/walk.scm 197 */
																	obj_t BgL_pairz00_2275;

																	BgL_pairz00_2275 =
																		CDR(((obj_t) BgL_nodesz00_1682));
																	BgL_i1147z00_1691 =
																		((BgL_letzd2varzd2_bglt)
																		CAR(BgL_pairz00_2275));
																}
																{	/* Return/walk.scm 198 */
																	obj_t BgL_exitnodez00_1692;

																	{	/* Return/walk.scm 198 */
																		BgL_nodez00_bglt BgL_arg1775z00_1694;
																		obj_t BgL_arg1778z00_1695;

																		BgL_arg1775z00_1694 =
																			(((BgL_letzd2varzd2_bglt)
																				COBJECT(BgL_i1147z00_1691))->
																			BgL_bodyz00);
																		BgL_arg1778z00_1695 =
																			CAR(((obj_t) BgL_bindingz00_1690));
																		BgL_nodez00_1605 = BgL_arg1775z00_1694;
																		BgL_varz00_1606 =
																			((BgL_localz00_bglt) BgL_arg1778z00_1695);
																		if (BGl_isazf3zf3zz__objectz00(
																				((obj_t) BgL_nodez00_1605),
																				BGl_letzd2varzd2zzast_nodez00))
																			{	/* Return/walk.scm 158 */
																				bool_t BgL_test2128z00_2854;

																				{	/* Return/walk.scm 158 */
																					bool_t BgL_test2129z00_2855;

																					{	/* Return/walk.scm 158 */
																						obj_t BgL_tmpz00_2856;

																						BgL_tmpz00_2856 =
																							(((BgL_letzd2varzd2_bglt) COBJECT(
																									((BgL_letzd2varzd2_bglt)
																										BgL_nodez00_1605)))->
																							BgL_bindingsz00);
																						BgL_test2129z00_2855 =
																							PAIRP(BgL_tmpz00_2856);
																					}
																					if (BgL_test2129z00_2855)
																						{	/* Return/walk.scm 158 */
																							obj_t BgL_tmpz00_2860;

																							{	/* Return/walk.scm 158 */
																								obj_t BgL_pairz00_2245;

																								BgL_pairz00_2245 =
																									(((BgL_letzd2varzd2_bglt)
																										COBJECT((
																												(BgL_letzd2varzd2_bglt)
																												BgL_nodez00_1605)))->
																									BgL_bindingsz00);
																								BgL_tmpz00_2860 =
																									CDR(BgL_pairz00_2245);
																							}
																							BgL_test2128z00_2854 =
																								NULLP(BgL_tmpz00_2860);
																						}
																					else
																						{	/* Return/walk.scm 158 */
																							BgL_test2128z00_2854 =
																								((bool_t) 0);
																						}
																				}
																				if (BgL_test2128z00_2854)
																					{	/* Return/walk.scm 159 */
																						obj_t BgL_bindingz00_1616;

																						{	/* Return/walk.scm 159 */
																							obj_t BgL_pairz00_2247;

																							BgL_pairz00_2247 =
																								(((BgL_letzd2varzd2_bglt)
																									COBJECT((
																											(BgL_letzd2varzd2_bglt)
																											BgL_nodez00_1605)))->
																								BgL_bindingsz00);
																							BgL_bindingz00_1616 =
																								CAR(BgL_pairz00_2247);
																						}
																						{	/* Return/walk.scm 159 */
																							obj_t BgL_nbodyz00_1617;

																							{	/* Return/walk.scm 160 */
																								BgL_nodez00_bglt
																									BgL_arg1669z00_1626;
																								obj_t BgL_arg1672z00_1627;

																								BgL_arg1669z00_1626 =
																									(((BgL_letzd2varzd2_bglt)
																										COBJECT((
																												(BgL_letzd2varzd2_bglt)
																												BgL_nodez00_1605)))->
																									BgL_bodyz00);
																								BgL_arg1672z00_1627 =
																									CAR(((obj_t)
																										BgL_bindingz00_1616));
																								BgL_nbodyz00_1617 =
																									BGl_step6ze70ze7zzreturn_walkz00
																									(BgL_arg1669z00_1626,
																									((BgL_localz00_bglt)
																										BgL_arg1672z00_1627));
																							}
																							{	/* Return/walk.scm 160 */

																								if (CBOOL(BgL_nbodyz00_1617))
																									{	/* Return/walk.scm 162 */
																										BgL_nodez00_bglt
																											BgL_duplicated1135z00_1618;
																										BgL_letzd2varzd2_bglt
																											BgL_new1133z00_1619;
																										BgL_duplicated1135z00_1618 =
																											BgL_nodez00_1605;
																										{	/* Return/walk.scm 162 */
																											BgL_letzd2varzd2_bglt
																												BgL_new1140z00_1624;
																											BgL_new1140z00_1624 =
																												((BgL_letzd2varzd2_bglt)
																												BOBJECT(GC_MALLOC(sizeof
																														(struct
																															BgL_letzd2varzd2_bgl))));
																											{	/* Return/walk.scm 162 */
																												long
																													BgL_arg1667z00_1625;
																												{	/* Return/walk.scm 162 */
																													long
																														BgL_res1987z00_2250;
																													BgL_res1987z00_2250 =
																														BGL_CLASS_INDEX
																														(BGl_letzd2varzd2zzast_nodez00);
																													BgL_arg1667z00_1625 =
																														BgL_res1987z00_2250;
																												}
																												BGL_OBJECT_CLASS_NUM_SET
																													(((BgL_objectz00_bglt)
																														BgL_new1140z00_1624),
																													BgL_arg1667z00_1625);
																											}
																											{	/* Return/walk.scm 162 */
																												BgL_objectz00_bglt
																													BgL_tmpz00_2880;
																												BgL_tmpz00_2880 =
																													((BgL_objectz00_bglt)
																													BgL_new1140z00_1624);
																												BGL_OBJECT_WIDENING_SET
																													(BgL_tmpz00_2880,
																													BFALSE);
																											}
																											((BgL_objectz00_bglt)
																												BgL_new1140z00_1624);
																											BgL_new1133z00_1619 =
																												BgL_new1140z00_1624;
																										}
																										((((BgL_nodez00_bglt)
																													COBJECT((
																															(BgL_nodez00_bglt)
																															BgL_new1133z00_1619)))->
																												BgL_locz00) =
																											((obj_t) ((
																														(BgL_nodez00_bglt)
																														COBJECT
																														(BgL_duplicated1135z00_1618))->
																													BgL_locz00)),
																											BUNSPEC);
																										((((BgL_nodez00_bglt)
																													COBJECT((
																															(BgL_nodez00_bglt)
																															BgL_new1133z00_1619)))->
																												BgL_typez00) =
																											((BgL_typez00_bglt) ((
																														(BgL_nodez00_bglt)
																														COBJECT
																														(BgL_duplicated1135z00_1618))->
																													BgL_typez00)),
																											BUNSPEC);
																										((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1133z00_1619)))->BgL_sidezd2effectzd2) = ((obj_t) (((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_duplicated1135z00_1618)))->BgL_sidezd2effectzd2)), BUNSPEC);
																										((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1133z00_1619)))->BgL_keyz00) = ((obj_t) (((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_duplicated1135z00_1618)))->BgL_keyz00)), BUNSPEC);
																										((((BgL_letzd2varzd2_bglt)
																													COBJECT
																													(BgL_new1133z00_1619))->
																												BgL_bindingsz00) =
																											((obj_t) ((
																														(BgL_letzd2varzd2_bglt)
																														COBJECT((
																																(BgL_letzd2varzd2_bglt)
																																BgL_duplicated1135z00_1618)))->
																													BgL_bindingsz00)),
																											BUNSPEC);
																										((((BgL_letzd2varzd2_bglt)
																													COBJECT
																													(BgL_new1133z00_1619))->
																												BgL_bodyz00) =
																											((BgL_nodez00_bglt) (
																													(BgL_nodez00_bglt)
																													BgL_nbodyz00_1617)),
																											BUNSPEC);
																										((((BgL_letzd2varzd2_bglt)
																													COBJECT
																													(BgL_new1133z00_1619))->
																												BgL_removablezf3zf3) =
																											((bool_t) ((
																														(BgL_letzd2varzd2_bglt)
																														COBJECT((
																																(BgL_letzd2varzd2_bglt)
																																BgL_duplicated1135z00_1618)))->
																													BgL_removablezf3zf3)),
																											BUNSPEC);
																										BgL_exitnodez00_1692 =
																											((obj_t)
																											BgL_new1133z00_1619);
																									}
																								else
																									{	/* Return/walk.scm 161 */
																										BgL_exitnodez00_1692 =
																											BFALSE;
																									}
																							}
																						}
																					}
																				else
																					{	/* Return/walk.scm 158 */
																						BgL_exitnodez00_1692 = BFALSE;
																					}
																			}
																		else
																			{	/* Return/walk.scm 156 */
																				BgL_exitnodez00_1692 = BFALSE;
																			}
																	}
																	if (CBOOL(BgL_exitnodez00_1692))
																		{	/* Return/walk.scm 200 */
																			obj_t BgL_arg1771z00_1693;

																			BgL_arg1771z00_1693 =
																				CAR(((obj_t) BgL_bindingz00_1690));
																			return
																				MAKE_YOUNG_PAIR(BgL_arg1771z00_1693,
																				BgL_exitnodez00_1692);
																		}
																	else
																		{	/* Return/walk.scm 199 */
																			return BFALSE;
																		}
																}
															}
														else
															{	/* Return/walk.scm 196 */
																return BFALSE;
															}
													}
												else
													{	/* Return/walk.scm 194 */
														return BFALSE;
													}
											}
										}
									}
								else
									{	/* Return/walk.scm 205 */
										return BFALSE;
									}
							}
						else
							{	/* Return/walk.scm 203 */
								return BFALSE;
							}
					}
				else
					{	/* Return/walk.scm 210 */
						return BFALSE;
					}
			}
		}

	}



/* step8~0 */
	obj_t BGl_step8ze70ze7zzreturn_walkz00(BgL_nodez00_bglt BgL_nodez00_1545,
		BgL_localz00_bglt BgL_resz00_1546)
	{
		{	/* Return/walk.scm 139 */
			if (BGl_isazf3zf3zz__objectz00(
					((obj_t) BgL_nodez00_1545), BGl_varz00zzast_nodez00))
				{	/* Return/walk.scm 126 */
					if (
						(((obj_t)
								(((BgL_varz00_bglt) COBJECT(
											((BgL_varz00_bglt) BgL_nodez00_1545)))->
									BgL_variablez00)) == ((obj_t) BgL_resz00_1546)))
						{	/* Return/walk.scm 128 */
							return ((obj_t) BgL_nodez00_1545);
						}
					else
						{	/* Return/walk.scm 128 */
							return BFALSE;
						}
				}
			else
				{	/* Return/walk.scm 126 */
					if (BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_nodez00_1545), BGl_appz00zzast_nodez00))
						{	/* Return/walk.scm 132 */
							bool_t BgL_test2135z00_2927;

							{
								obj_t BgL_l1342z00_1567;

								{	/* Return/walk.scm 132 */
									obj_t BgL_tmpz00_2928;

									BgL_l1342z00_1567 =
										(((BgL_appz00_bglt) COBJECT(
												((BgL_appz00_bglt) BgL_nodez00_1545)))->BgL_argsz00);
								BgL_zc3z04anonymousza31580ze3z87_1568:
									if (NULLP(BgL_l1342z00_1567))
										{	/* Return/walk.scm 132 */
											BgL_tmpz00_2928 = BFALSE;
										}
									else
										{	/* Return/walk.scm 132 */
											obj_t BgL__ortest_1345z00_1570;

											BgL__ortest_1345z00_1570 =
												BGl_step8ze70ze7zzreturn_walkz00(
												((BgL_nodez00_bglt)
													CAR(((obj_t) BgL_l1342z00_1567))), BgL_resz00_1546);
											if (CBOOL(BgL__ortest_1345z00_1570))
												{	/* Return/walk.scm 132 */
													BgL_tmpz00_2928 = BgL__ortest_1345z00_1570;
												}
											else
												{
													obj_t BgL_l1342z00_2937;

													BgL_l1342z00_2937 = CDR(((obj_t) BgL_l1342z00_1567));
													BgL_l1342z00_1567 = BgL_l1342z00_2937;
													goto BgL_zc3z04anonymousza31580ze3z87_1568;
												}
										}
									BgL_test2135z00_2927 = CBOOL(BgL_tmpz00_2928);
								}
							}
							if (BgL_test2135z00_2927)
								{	/* Return/walk.scm 132 */
									return ((obj_t) BgL_nodez00_1545);
								}
							else
								{	/* Return/walk.scm 132 */
									return BFALSE;
								}
						}
					else
						{	/* Return/walk.scm 130 */
							if (BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_nodez00_1545), BGl_castz00zzast_nodez00))
								{	/* Return/walk.scm 134 */
									if (CBOOL(BGl_step8ze70ze7zzreturn_walkz00(
												(((BgL_castz00_bglt) COBJECT(
															((BgL_castz00_bglt) BgL_nodez00_1545)))->
													BgL_argz00), BgL_resz00_1546)))
										{	/* Return/walk.scm 136 */
											return ((obj_t) BgL_nodez00_1545);
										}
									else
										{	/* Return/walk.scm 136 */
											return BFALSE;
										}
								}
							else
								{	/* Return/walk.scm 134 */
									return BFALSE;
								}
						}
				}
		}

	}



/* step6~0 */
	obj_t BGl_step6ze70ze7zzreturn_walkz00(BgL_nodez00_bglt BgL_nodez00_1588,
		BgL_localz00_bglt BgL_varz00_1589)
	{
		{	/* Return/walk.scm 153 */
			{
				BgL_nodez00_bglt BgL_nodez00_1579;

				if (BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_nodez00_1588), BGl_sequencez00zzast_nodez00))
					{	/* Return/walk.scm 149 */
						if (
							(bgl_list_length(
									(((BgL_sequencez00_bglt) COBJECT(
												((BgL_sequencez00_bglt) BgL_nodez00_1588)))->
										BgL_nodesz00)) == ((long) 2)))
							{	/* Return/walk.scm 152 */
								bool_t BgL_test2142z00_2961;

								{	/* Return/walk.scm 152 */
									obj_t BgL_pairz00_2239;

									BgL_pairz00_2239 =
										(((BgL_sequencez00_bglt) COBJECT(
												((BgL_sequencez00_bglt) BgL_nodez00_1588)))->
										BgL_nodesz00);
									BgL_nodez00_1579 = ((BgL_nodez00_bglt) CAR(BgL_pairz00_2239));
								}
								if (BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_nodez00_1579), BGl_appz00zzast_nodez00))
									{	/* Return/walk.scm 142 */
										if (NULLP(
												(((BgL_appz00_bglt) COBJECT(
															((BgL_appz00_bglt) BgL_nodez00_1579)))->
													BgL_argsz00)))
											{	/* Return/walk.scm 145 */
												BgL_varz00_bglt BgL_i1129z00_1585;

												BgL_i1129z00_1585 =
													(((BgL_appz00_bglt) COBJECT(
															((BgL_appz00_bglt) BgL_nodez00_1579)))->
													BgL_funz00);
												{	/* Return/walk.scm 146 */
													BgL_variablez00_bglt BgL_arg1597z00_1586;

													BgL_arg1597z00_1586 =
														(((BgL_varz00_bglt) COBJECT(BgL_i1129z00_1585))->
														BgL_variablez00);
													BgL_test2142z00_2961 =
														(((obj_t) BgL_arg1597z00_1586) ==
														BGl_za2popzd2exitz12za2zc0zzreturn_walkz00);
												}
											}
										else
											{	/* Return/walk.scm 144 */
												BgL_test2142z00_2961 = ((bool_t) 0);
											}
									}
								else
									{	/* Return/walk.scm 142 */
										BgL_test2142z00_2961 = ((bool_t) 0);
									}
								if (BgL_test2142z00_2961)
									{	/* Return/walk.scm 153 */
										BgL_nodez00_bglt BgL_auxz00_2978;

										{
											obj_t BgL_auxz00_2979;

											{	/* Return/walk.scm 153 */
												obj_t BgL_pairz00_2240;

												BgL_pairz00_2240 =
													(((BgL_sequencez00_bglt) COBJECT(
															((BgL_sequencez00_bglt) BgL_nodez00_1588)))->
													BgL_nodesz00);
												BgL_auxz00_2979 = CAR(CDR(BgL_pairz00_2240));
											}
											BgL_auxz00_2978 = ((BgL_nodez00_bglt) BgL_auxz00_2979);
										}
										return
											BGl_step8ze70ze7zzreturn_walkz00(BgL_auxz00_2978,
											BgL_varz00_1589);
									}
								else
									{	/* Return/walk.scm 152 */
										return BFALSE;
									}
							}
						else
							{	/* Return/walk.scm 151 */
								return BFALSE;
							}
					}
				else
					{	/* Return/walk.scm 149 */
						return BFALSE;
					}
			}
		}

	}



/* &function-exit-node */
	obj_t BGl_z62functionzd2exitzd2nodez62zzreturn_walkz00(obj_t BgL_envz00_2431,
		obj_t BgL_nodez00_2432)
	{
		{	/* Return/walk.scm 122 */
			return
				BGl_functionzd2exitzd2nodez00zzreturn_walkz00(
				((BgL_nodez00_bglt) BgL_nodez00_2432));
		}

	}



/* is-unwind-until? */
	BGL_EXPORTED_DEF bool_t
		BGl_iszd2unwindzd2untilzf3zf3zzreturn_walkz00(BgL_variablez00_bglt
		BgL_vz00_20)
	{
		{	/* Return/walk.scm 217 */
			return
				(
				((obj_t) BgL_vz00_20) ==
				BGl_za2unwindzd2untilz12za2zc0zzreturn_walkz00);
		}

	}



/* &is-unwind-until? */
	obj_t BGl_z62iszd2unwindzd2untilzf3z91zzreturn_walkz00(obj_t BgL_envz00_2433,
		obj_t BgL_vz00_2434)
	{
		{	/* Return/walk.scm 217 */
			return
				BBOOL(BGl_iszd2unwindzd2untilzf3zf3zzreturn_walkz00(
					((BgL_variablez00_bglt) BgL_vz00_2434)));
		}

	}



/* is-get-exitd-top? */
	BGL_EXPORTED_DEF bool_t
		BGl_iszd2getzd2exitdzd2topzf3z21zzreturn_walkz00(BgL_variablez00_bglt
		BgL_vz00_21)
	{
		{	/* Return/walk.scm 223 */
			return
				(
				((obj_t) BgL_vz00_21) ==
				BGl_za2getzd2exitdzd2topza2z00zzreturn_walkz00);
		}

	}



/* &is-get-exitd-top? */
	obj_t BGl_z62iszd2getzd2exitdzd2topzf3z43zzreturn_walkz00(obj_t
		BgL_envz00_2435, obj_t BgL_vz00_2436)
	{
		{	/* Return/walk.scm 223 */
			return
				BBOOL(BGl_iszd2getzd2exitdzd2topzf3z21zzreturn_walkz00(
					((BgL_variablez00_bglt) BgL_vz00_2436)));
		}

	}



/* is-exit-return? */
	BGL_EXPORTED_DEF bool_t
		BGl_iszd2exitzd2returnzf3zf3zzreturn_walkz00(BgL_nodez00_bglt
		BgL_nodez00_22, BgL_localz00_bglt BgL_exitvarz00_23)
	{
		{	/* Return/walk.scm 231 */
			return
				CBOOL(BGl_zc3z04exitza31812ze3ze70z60zzreturn_walkz00(BgL_nodez00_22,
					BgL_exitvarz00_23));
		}

	}



/* <@exit:1812>~0 */
	obj_t BGl_zc3z04exitza31812ze3ze70z60zzreturn_walkz00(BgL_nodez00_bglt
		BgL_nodez00_2491, BgL_localz00_bglt BgL_exitvarz00_2490)
	{
		{	/* Return/walk.scm 232 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1152z00_1726;

			if (SET_EXIT(BgL_an_exit1152z00_1726))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1152z00_1726 = (void *) jmpbuf;
					{	/* Return/walk.scm 232 */

						PUSH_EXIT(BgL_an_exit1152z00_1726, ((long) 1));
						{	/* Return/walk.scm 232 */
							obj_t BgL_an_exitd1153z00_1727;

							BgL_an_exitd1153z00_1727 = ((obj_t) (&exitd));
							{	/* Return/walk.scm 232 */
								obj_t BgL_abortz00_2437;

								BgL_abortz00_2437 =
									MAKE_FX_PROCEDURE(BGl_z62abortz62zzreturn_walkz00,
									(int) (((long) 1)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_abortz00_2437,
									(int) (((long) 0)), BgL_an_exitd1153z00_1727);
								{	/* Return/walk.scm 232 */
									bool_t BgL_res1155z00_1730;

									{	/* Return/walk.scm 233 */
										obj_t BgL_arg1820z00_1731;

										{	/* Return/walk.scm 233 */
											obj_t BgL_list1821z00_1732;

											BgL_list1821z00_1732 =
												MAKE_YOUNG_PAIR(((obj_t) BgL_exitvarz00_2490), BNIL);
											BgL_arg1820z00_1731 = BgL_list1821z00_1732;
										}
										BGl_iszd2returnzf3z21zzreturn_walkz00(BgL_nodez00_2491,
											BgL_arg1820z00_1731, BgL_abortz00_2437);
									}
									BgL_res1155z00_1730 = ((bool_t) 1);
									POP_EXIT();
									return BBOOL(BgL_res1155z00_1730);
								}
							}
						}
					}
				}
		}

	}



/* &is-exit-return? */
	obj_t BGl_z62iszd2exitzd2returnzf3z91zzreturn_walkz00(obj_t BgL_envz00_2438,
		obj_t BgL_nodez00_2439, obj_t BgL_exitvarz00_2440)
	{
		{	/* Return/walk.scm 231 */
			return
				BBOOL(BGl_iszd2exitzd2returnzf3zf3zzreturn_walkz00(
					((BgL_nodez00_bglt) BgL_nodez00_2439),
					((BgL_localz00_bglt) BgL_exitvarz00_2440)));
		}

	}



/* &abort */
	obj_t BGl_z62abortz62zzreturn_walkz00(obj_t BgL_envz00_2441,
		obj_t BgL_val1154z00_2443)
	{
		{	/* Return/walk.scm 232 */
			return
				BGl_unwindzd2untilz12zc0zz__bexitz00(PROCEDURE_REF(BgL_envz00_2441,
					(int) (((long) 0))), BgL_val1154z00_2443);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzreturn_walkz00()
	{
		{	/* Return/walk.scm 16 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzreturn_walkz00()
	{
		{	/* Return/walk.scm 16 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_iszd2returnzf3zd2envzf3zzreturn_walkz00,
				BGl_proc2041z00zzreturn_walkz00, BGl_nodez00zzast_nodez00,
				BGl_string2042z00zzreturn_walkz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_returnz12zd2envzc0zzreturn_walkz00,
				BGl_proc2043z00zzreturn_walkz00, BGl_nodez00zzast_nodez00,
				BGl_string2044z00zzreturn_walkz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_returnzd2gotozd2funsz12zd2envzc0zzreturn_walkz00,
				BGl_proc2045z00zzreturn_walkz00, BGl_nodez00zzast_nodez00,
				BGl_string2046z00zzreturn_walkz00);
		}

	}



/* &return-goto-funs!1361 */
	obj_t BGl_z62returnzd2gotozd2funsz121361z70zzreturn_walkz00(obj_t
		BgL_envz00_2457, obj_t BgL_nodez00_2458)
	{
		{	/* Return/walk.scm 317 */
			return
				((obj_t)
				BGl_walk0z12z12zzast_walkz00(
					((BgL_nodez00_bglt) BgL_nodez00_2458),
					BGl_returnzd2gotozd2funsz12zd2envzc0zzreturn_walkz00));
		}

	}



/* &return!1357 */
	obj_t BGl_z62returnz121357z70zzreturn_walkz00(obj_t BgL_envz00_2459,
		obj_t BgL_nodez00_2460, obj_t BgL_exitvarz00_2461, obj_t BgL_rblockz00_2462)
	{
		{	/* Return/walk.scm 291 */
			{
				BgL_nodez00_bglt BgL_auxz00_3026;

				{

					BgL_auxz00_3026 =
						BGl_walk2z12z12zzast_walkz00(
						((BgL_nodez00_bglt) BgL_nodez00_2460),
						BGl_returnz12zd2envzc0zzreturn_walkz00,
						((obj_t) ((BgL_localz00_bglt) BgL_exitvarz00_2461)),
						((obj_t) ((BgL_retblockz00_bglt) BgL_rblockz00_2462)));
				}
				return ((obj_t) BgL_auxz00_3026);
			}
		}

	}



/* &is-return?1349 */
	obj_t BGl_z62iszd2returnzf31349z43zzreturn_walkz00(obj_t BgL_envz00_2463,
		obj_t BgL_nodez00_2464, obj_t BgL_exitvarz00_2465, obj_t BgL_abortz00_2466)
	{
		{	/* Return/walk.scm 239 */
			{

				return
					BGl_walk2z00zzast_walkz00(
					((BgL_nodez00_bglt) BgL_nodez00_2464),
					BGl_iszd2returnzf3zd2envzf3zzreturn_walkz00,
					((obj_t) BgL_exitvarz00_2465), BgL_abortz00_2466);
			}
		}

	}



/* is-return? */
	obj_t BGl_iszd2returnzf3z21zzreturn_walkz00(BgL_nodez00_bglt BgL_nodez00_24,
		obj_t BgL_exitvarz00_25, obj_t BgL_abortz00_26)
	{
		{	/* Return/walk.scm 239 */
			{	/* Return/walk.scm 239 */
				obj_t BgL_method1350z00_1790;

				{	/* Return/walk.scm 239 */
					obj_t BgL_res2005z00_2319;

					{	/* Return/walk.scm 239 */
						long BgL_objzd2classzd2numz00_2284;

						{	/* Return/walk.scm 239 */
							long BgL_res1995z00_2287;

							BgL_res1995z00_2287 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_24));
							BgL_objzd2classzd2numz00_2284 = BgL_res1995z00_2287;
						}
						{	/* Return/walk.scm 239 */
							obj_t BgL_arg1813z00_2285;

							BgL_arg1813z00_2285 =
								PROCEDURE_REF(BGl_iszd2returnzf3zd2envzf3zzreturn_walkz00,
								(int) (((long) 1)));
							{	/* Return/walk.scm 239 */
								int BgL_offsetz00_2289;

								BgL_offsetz00_2289 = (int) (BgL_objzd2classzd2numz00_2284);
								{	/* Return/walk.scm 239 */
									long BgL_offsetz00_2290;

									BgL_offsetz00_2290 =
										((long) (BgL_offsetz00_2289) - OBJECT_TYPE);
									{	/* Return/walk.scm 239 */
										long BgL_modz00_2291;

										BgL_modz00_2291 =
											(BgL_offsetz00_2290 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Return/walk.scm 239 */
											long BgL_restz00_2293;

											BgL_restz00_2293 =
												(BgL_offsetz00_2290 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Return/walk.scm 239 */

												{	/* Return/walk.scm 239 */
													obj_t BgL_bucketz00_2295;

													BgL_bucketz00_2295 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2285), BgL_modz00_2291);
													BgL_res2005z00_2319 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2295), BgL_restz00_2293);
					}}}}}}}}
					BgL_method1350z00_1790 = BgL_res2005z00_2319;
				}
				return
					PROCEDURE_ENTRY(BgL_method1350z00_1790) (BgL_method1350z00_1790,
					((obj_t) BgL_nodez00_24), BgL_exitvarz00_25, BgL_abortz00_26, BEOA);
			}
		}

	}



/* &is-return? */
	obj_t BGl_z62iszd2returnzf3z43zzreturn_walkz00(obj_t BgL_envz00_2453,
		obj_t BgL_nodez00_2454, obj_t BgL_exitvarz00_2455, obj_t BgL_abortz00_2456)
	{
		{	/* Return/walk.scm 239 */
			return
				BGl_iszd2returnzf3z21zzreturn_walkz00(
				((BgL_nodez00_bglt) BgL_nodez00_2454), BgL_exitvarz00_2455,
				BgL_abortz00_2456);
		}

	}



/* return! */
	BgL_nodez00_bglt BGl_returnz12z12zzreturn_walkz00(BgL_nodez00_bglt
		BgL_nodez00_36, BgL_localz00_bglt BgL_exitvarz00_37,
		BgL_retblockz00_bglt BgL_rblockz00_38)
	{
		{	/* Return/walk.scm 291 */
			{	/* Return/walk.scm 291 */
				obj_t BgL_method1358z00_1791;

				{	/* Return/walk.scm 291 */
					obj_t BgL_res2016z00_2356;

					{	/* Return/walk.scm 291 */
						long BgL_objzd2classzd2numz00_2321;

						{	/* Return/walk.scm 291 */
							long BgL_res2006z00_2324;

							BgL_res2006z00_2324 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_36));
							BgL_objzd2classzd2numz00_2321 = BgL_res2006z00_2324;
						}
						{	/* Return/walk.scm 291 */
							obj_t BgL_arg1813z00_2322;

							BgL_arg1813z00_2322 =
								PROCEDURE_REF(BGl_returnz12zd2envzc0zzreturn_walkz00,
								(int) (((long) 1)));
							{	/* Return/walk.scm 291 */
								int BgL_offsetz00_2326;

								BgL_offsetz00_2326 = (int) (BgL_objzd2classzd2numz00_2321);
								{	/* Return/walk.scm 291 */
									long BgL_offsetz00_2327;

									BgL_offsetz00_2327 =
										((long) (BgL_offsetz00_2326) - OBJECT_TYPE);
									{	/* Return/walk.scm 291 */
										long BgL_modz00_2328;

										BgL_modz00_2328 =
											(BgL_offsetz00_2327 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Return/walk.scm 291 */
											long BgL_restz00_2330;

											BgL_restz00_2330 =
												(BgL_offsetz00_2327 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Return/walk.scm 291 */

												{	/* Return/walk.scm 291 */
													obj_t BgL_bucketz00_2332;

													BgL_bucketz00_2332 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2322), BgL_modz00_2328);
													BgL_res2016z00_2356 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2332), BgL_restz00_2330);
					}}}}}}}}
					BgL_method1358z00_1791 = BgL_res2016z00_2356;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1358z00_1791) (BgL_method1358z00_1791,
						((obj_t) BgL_nodez00_36),
						((obj_t) BgL_exitvarz00_37), ((obj_t) BgL_rblockz00_38), BEOA));
			}
		}

	}



/* &return! */
	BgL_nodez00_bglt BGl_z62returnz12z70zzreturn_walkz00(obj_t BgL_envz00_2448,
		obj_t BgL_nodez00_2449, obj_t BgL_exitvarz00_2450, obj_t BgL_rblockz00_2451)
	{
		{	/* Return/walk.scm 291 */
			return
				BGl_returnz12z12zzreturn_walkz00(
				((BgL_nodez00_bglt) BgL_nodez00_2449),
				((BgL_localz00_bglt) BgL_exitvarz00_2450),
				((BgL_retblockz00_bglt) BgL_rblockz00_2451));
		}

	}



/* return-goto-funs! */
	BgL_nodez00_bglt
		BGl_returnzd2gotozd2funsz12z12zzreturn_walkz00(BgL_nodez00_bglt
		BgL_nodez00_42)
	{
		{	/* Return/walk.scm 317 */
			{	/* Return/walk.scm 317 */
				obj_t BgL_method1362z00_1792;

				{	/* Return/walk.scm 317 */
					obj_t BgL_res2027z00_2393;

					{	/* Return/walk.scm 317 */
						long BgL_objzd2classzd2numz00_2358;

						{	/* Return/walk.scm 317 */
							long BgL_res2017z00_2361;

							BgL_res2017z00_2361 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_42));
							BgL_objzd2classzd2numz00_2358 = BgL_res2017z00_2361;
						}
						{	/* Return/walk.scm 317 */
							obj_t BgL_arg1813z00_2359;

							BgL_arg1813z00_2359 =
								PROCEDURE_REF
								(BGl_returnzd2gotozd2funsz12zd2envzc0zzreturn_walkz00,
								(int) (((long) 1)));
							{	/* Return/walk.scm 317 */
								int BgL_offsetz00_2363;

								BgL_offsetz00_2363 = (int) (BgL_objzd2classzd2numz00_2358);
								{	/* Return/walk.scm 317 */
									long BgL_offsetz00_2364;

									BgL_offsetz00_2364 =
										((long) (BgL_offsetz00_2363) - OBJECT_TYPE);
									{	/* Return/walk.scm 317 */
										long BgL_modz00_2365;

										BgL_modz00_2365 =
											(BgL_offsetz00_2364 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Return/walk.scm 317 */
											long BgL_restz00_2367;

											BgL_restz00_2367 =
												(BgL_offsetz00_2364 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Return/walk.scm 317 */

												{	/* Return/walk.scm 317 */
													obj_t BgL_bucketz00_2369;

													BgL_bucketz00_2369 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2359), BgL_modz00_2365);
													BgL_res2027z00_2393 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2369), BgL_restz00_2367);
					}}}}}}}}
					BgL_method1362z00_1792 = BgL_res2027z00_2393;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1362z00_1792) (BgL_method1362z00_1792,
						((obj_t) BgL_nodez00_42), BEOA));
			}
		}

	}



/* &return-goto-funs! */
	BgL_nodez00_bglt BGl_z62returnzd2gotozd2funsz12z70zzreturn_walkz00(obj_t
		BgL_envz00_2445, obj_t BgL_nodez00_2446)
	{
		{	/* Return/walk.scm 317 */
			return
				BGl_returnzd2gotozd2funsz12z12zzreturn_walkz00(
				((BgL_nodez00_bglt) BgL_nodez00_2446));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzreturn_walkz00()
	{
		{	/* Return/walk.scm 16 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_iszd2returnzf3zd2envzf3zzreturn_walkz00, BGl_varz00zzast_nodez00,
				BGl_proc2047z00zzreturn_walkz00, BGl_string2048z00zzreturn_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_iszd2returnzf3zd2envzf3zzreturn_walkz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc2049z00zzreturn_walkz00,
				BGl_string2048z00zzreturn_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_iszd2returnzf3zd2envzf3zzreturn_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc2050z00zzreturn_walkz00, BGl_string2048z00zzreturn_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_returnz12zd2envzc0zzreturn_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc2051z00zzreturn_walkz00, BGl_string2052z00zzreturn_walkz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_returnzd2gotozd2funsz12zd2envzc0zzreturn_walkz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc2053z00zzreturn_walkz00,
				BGl_string2054z00zzreturn_walkz00);
		}

	}



/* &return-goto-funs!-le1364 */
	BgL_nodez00_bglt
		BGl_z62returnzd2gotozd2funsz12zd2le1364za2zzreturn_walkz00(obj_t
		BgL_envz00_2472, obj_t BgL_nodez00_2473)
	{
		{	/* Return/walk.scm 323 */
			{	/* Return/walk.scm 325 */
				obj_t BgL_g1348z00_2515;

				BgL_g1348z00_2515 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2473)))->BgL_localsz00);
				{
					obj_t BgL_l1346z00_2517;

					BgL_l1346z00_2517 = BgL_g1348z00_2515;
				BgL_zc3z04anonymousza31906ze3z87_2516:
					if (PAIRP(BgL_l1346z00_2517))
						{	/* Return/walk.scm 325 */
							BGl_returnzd2funz12zc0zzreturn_walkz00(CAR(BgL_l1346z00_2517));
							{
								obj_t BgL_l1346z00_3154;

								BgL_l1346z00_3154 = CDR(BgL_l1346z00_2517);
								BgL_l1346z00_2517 = BgL_l1346z00_3154;
								goto BgL_zc3z04anonymousza31906ze3z87_2516;
							}
						}
					else
						{	/* Return/walk.scm 325 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3156;

				{	/* Return/walk.scm 326 */
					BgL_nodez00_bglt BgL_arg1910z00_2518;

					BgL_arg1910z00_2518 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2473)))->BgL_bodyz00);
					BgL_auxz00_3156 =
						BGl_returnzd2gotozd2funsz12z12zzreturn_walkz00(BgL_arg1910z00_2518);
				}
				((((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2473)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3156), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt) BgL_nodez00_2473));
		}

	}



/* &return!-app1360 */
	BgL_nodez00_bglt BGl_z62returnz12zd2app1360za2zzreturn_walkz00(obj_t
		BgL_envz00_2474, obj_t BgL_nodez00_2475, obj_t BgL_exitvarz00_2476,
		obj_t BgL_rblockz00_2477)
	{
		{	/* Return/walk.scm 297 */
			{

				{	/* Return/walk.scm 299 */
					BgL_varz00_bglt BgL_i1167z00_2523;

					BgL_i1167z00_2523 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2475)))->BgL_funz00);
					{	/* Return/walk.scm 300 */
						bool_t BgL_test2146z00_3166;

						{	/* Return/walk.scm 300 */
							BgL_variablez00_bglt BgL_arg1902z00_2524;

							BgL_arg1902z00_2524 =
								(((BgL_varz00_bglt) COBJECT(BgL_i1167z00_2523))->
								BgL_variablez00);
							BgL_test2146z00_3166 =
								(((obj_t) BgL_arg1902z00_2524) ==
								BGl_za2unwindzd2untilz12za2zc0zzreturn_walkz00);
						}
						if (BgL_test2146z00_3166)
							{	/* Return/walk.scm 302 */
								bool_t BgL_test2147z00_3170;

								{	/* Return/walk.scm 302 */
									obj_t BgL_arg1898z00_2525;

									BgL_arg1898z00_2525 =
										CAR(
										(((BgL_appz00_bglt) COBJECT(
													((BgL_appz00_bglt) BgL_nodez00_2475)))->BgL_argsz00));
									BgL_test2147z00_3170 =
										BGl_isazf3zf3zz__objectz00(BgL_arg1898z00_2525,
										BGl_varz00zzast_nodez00);
								}
								if (BgL_test2147z00_3170)
									{	/* Return/walk.scm 303 */
										BgL_varz00_bglt BgL_i1168z00_2526;

										{	/* Return/walk.scm 303 */
											obj_t BgL_pairz00_2527;

											BgL_pairz00_2527 =
												(((BgL_appz00_bglt) COBJECT(
														((BgL_appz00_bglt) BgL_nodez00_2475)))->
												BgL_argsz00);
											BgL_i1168z00_2526 =
												((BgL_varz00_bglt) CAR(BgL_pairz00_2527));
										}
										if (
											(((obj_t)
													(((BgL_varz00_bglt) COBJECT(BgL_i1168z00_2526))->
														BgL_variablez00)) ==
												((obj_t) ((BgL_localz00_bglt) BgL_exitvarz00_2476))))
											{	/* Return/walk.scm 305 */
												BgL_returnz00_bglt BgL_new1170z00_2528;

												{	/* Return/walk.scm 306 */
													BgL_returnz00_bglt BgL_new1169z00_2529;

													BgL_new1169z00_2529 =
														((BgL_returnz00_bglt)
														BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_returnz00_bgl))));
													{	/* Return/walk.scm 306 */
														long BgL_arg1895z00_2530;

														{	/* Return/walk.scm 306 */
															long BgL_res2031z00_2531;

															BgL_res2031z00_2531 =
																BGL_CLASS_INDEX(BGl_returnz00zzast_nodez00);
															BgL_arg1895z00_2530 = BgL_res2031z00_2531;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1169z00_2529),
															BgL_arg1895z00_2530);
													}
													{	/* Return/walk.scm 306 */
														BgL_objectz00_bglt BgL_tmpz00_3189;

														BgL_tmpz00_3189 =
															((BgL_objectz00_bglt) BgL_new1169z00_2529);
														BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3189, BFALSE);
													}
													((BgL_objectz00_bglt) BgL_new1169z00_2529);
													BgL_new1170z00_2528 = BgL_new1169z00_2529;
												}
												((((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_new1170z00_2528)))->
														BgL_locz00) =
													((obj_t) (((BgL_nodez00_bglt)
																COBJECT(((BgL_nodez00_bglt) ((BgL_appz00_bglt)
																			BgL_nodez00_2475))))->BgL_locz00)),
													BUNSPEC);
												((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																	BgL_new1170z00_2528)))->BgL_typez00) =
													((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																COBJECT(((BgL_nodez00_bglt) (
																			(BgL_retblockz00_bglt)
																			BgL_rblockz00_2477))))->BgL_typez00)),
													BUNSPEC);
												((((BgL_returnz00_bglt) COBJECT(BgL_new1170z00_2528))->
														BgL_blockz00) =
													((BgL_retblockz00_bglt) ((BgL_retblockz00_bglt)
															BgL_rblockz00_2477)), BUNSPEC);
												{
													BgL_nodez00_bglt BgL_auxz00_3205;

													{	/* Return/walk.scm 309 */
														obj_t BgL_pairz00_2532;

														BgL_pairz00_2532 =
															(((BgL_appz00_bglt) COBJECT(
																	((BgL_appz00_bglt) BgL_nodez00_2475)))->
															BgL_argsz00);
														{	/* Return/walk.scm 309 */
															obj_t BgL_pairz00_2533;

															BgL_pairz00_2533 = CDR(BgL_pairz00_2532);
															BgL_auxz00_3205 =
																((BgL_nodez00_bglt) CAR(BgL_pairz00_2533));
													}}
													((((BgL_returnz00_bglt)
																COBJECT(BgL_new1170z00_2528))->BgL_valuez00) =
														((BgL_nodez00_bglt) BgL_auxz00_3205), BUNSPEC);
												}
												return ((BgL_nodez00_bglt) BgL_new1170z00_2528);
											}
										else
											{	/* Return/walk.scm 304 */
											BgL_callzd2defaultzd2walkerz00_2522:
												return
													BGl_walk2z12z12zzast_walkz00(
													((BgL_nodez00_bglt)
														((BgL_appz00_bglt) BgL_nodez00_2475)),
													BGl_returnz12zd2envzc0zzreturn_walkz00,
													((obj_t) ((BgL_localz00_bglt) BgL_exitvarz00_2476)),
													((obj_t) ((BgL_retblockz00_bglt)
															BgL_rblockz00_2477)));
											}
									}
								else
									{	/* Return/walk.scm 302 */
										goto BgL_callzd2defaultzd2walkerz00_2522;
									}
							}
						else
							{	/* Return/walk.scm 300 */
								goto BgL_callzd2defaultzd2walkerz00_2522;
							}
					}
				}
			}
		}

	}



/* &is-return?-app1356 */
	obj_t BGl_z62iszd2returnzf3zd2app1356z91zzreturn_walkz00(obj_t
		BgL_envz00_2478, obj_t BgL_nodez00_2479, obj_t BgL_exitvarz00_2480,
		obj_t BgL_abortz00_2481)
	{
		{	/* Return/walk.scm 273 */
			{

				{	/* Return/walk.scm 275 */
					BgL_varz00_bglt BgL_i1161z00_2536;

					BgL_i1161z00_2536 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2479)))->BgL_funz00);
					{	/* Return/walk.scm 277 */
						bool_t BgL_test2149z00_3222;

						{	/* Return/walk.scm 277 */
							BgL_variablez00_bglt BgL_arg1882z00_2537;

							BgL_arg1882z00_2537 =
								(((BgL_varz00_bglt) COBJECT(BgL_i1161z00_2536))->
								BgL_variablez00);
							BgL_test2149z00_3222 =
								(((obj_t) BgL_arg1882z00_2537) ==
								BGl_za2unwindzd2untilz12za2zc0zzreturn_walkz00);
						}
						if (BgL_test2149z00_3222)
							{	/* Return/walk.scm 278 */
								bool_t BgL_test2150z00_3226;

								{	/* Return/walk.scm 278 */
									obj_t BgL_arg1877z00_2538;

									BgL_arg1877z00_2538 =
										CAR(
										(((BgL_appz00_bglt) COBJECT(
													((BgL_appz00_bglt) BgL_nodez00_2479)))->BgL_argsz00));
									BgL_test2150z00_3226 =
										BGl_isazf3zf3zz__objectz00(BgL_arg1877z00_2538,
										BGl_varz00zzast_nodez00);
								}
								if (BgL_test2150z00_3226)
									{	/* Return/walk.scm 279 */
										BgL_varz00_bglt BgL_i1162z00_2539;

										{	/* Return/walk.scm 279 */
											obj_t BgL_pairz00_2540;

											BgL_pairz00_2540 =
												(((BgL_appz00_bglt) COBJECT(
														((BgL_appz00_bglt) BgL_nodez00_2479)))->
												BgL_argsz00);
											BgL_i1162z00_2539 =
												((BgL_varz00_bglt) CAR(BgL_pairz00_2540));
										}
										{	/* Return/walk.scm 280 */
											obj_t BgL__ortest_1163z00_2541;

											if (PAIRP(BgL_exitvarz00_2480))
												{	/* Return/walk.scm 280 */
													BgL__ortest_1163z00_2541 =
														BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
														((obj_t)
															(((BgL_varz00_bglt) COBJECT(BgL_i1162z00_2539))->
																BgL_variablez00)), BgL_exitvarz00_2480);
												}
											else
												{	/* Return/walk.scm 280 */
													BgL__ortest_1163z00_2541 = BFALSE;
												}
											if (CBOOL(BgL__ortest_1163z00_2541))
												{	/* Return/walk.scm 280 */
													return BgL__ortest_1163z00_2541;
												}
											else
												{	/* Return/walk.scm 281 */
													obj_t BgL_arg1872z00_2542;

													BgL_arg1872z00_2542 =
														CAR(
														(((BgL_appz00_bglt) COBJECT(
																	((BgL_appz00_bglt) BgL_nodez00_2479)))->
															BgL_argsz00));
													return
														BGl_iszd2returnzf3z21zzreturn_walkz00((
															(BgL_nodez00_bglt) BgL_arg1872z00_2542),
														BgL_exitvarz00_2480, BgL_abortz00_2481);
												}
										}
									}
								else
									{	/* Return/walk.scm 278 */
									BgL_callzd2defaultzd2walkerz00_2535:
										return
											BGl_walk2z00zzast_walkz00(
											((BgL_nodez00_bglt)
												((BgL_appz00_bglt) BgL_nodez00_2479)),
											BGl_iszd2returnzf3zd2envzf3zzreturn_walkz00,
											BgL_exitvarz00_2480, BgL_abortz00_2481);
									}
							}
						else
							{	/* Return/walk.scm 283 */
								bool_t BgL_test2153z00_3250;

								{	/* Return/walk.scm 283 */
									BgL_variablez00_bglt BgL_arg1881z00_2543;

									BgL_arg1881z00_2543 =
										(((BgL_varz00_bglt) COBJECT(BgL_i1161z00_2536))->
										BgL_variablez00);
									BgL_test2153z00_3250 =
										(((obj_t) BgL_arg1881z00_2543) ==
										BGl_za2getzd2exitdzd2topza2z00zzreturn_walkz00);
								}
								if (BgL_test2153z00_3250)
									{	/* Return/walk.scm 284 */
										obj_t BgL__ortest_1165z00_2544;

										BgL__ortest_1165z00_2544 =
											BGl_za2optimzd2returnzd2gotozf3za2zf3zzengine_paramz00;
										if (CBOOL(BgL__ortest_1165z00_2544))
											{	/* Return/walk.scm 284 */
												return BgL__ortest_1165z00_2544;
											}
										else
											{	/* Return/walk.scm 284 */
												return
													PROCEDURE_ENTRY(BgL_abortz00_2481) (BgL_abortz00_2481,
													BFALSE, BEOA);
											}
									}
								else
									{	/* Return/walk.scm 283 */
										goto BgL_callzd2defaultzd2walkerz00_2535;
									}
							}
					}
				}
			}
		}

	}



/* &is-return?-let-var1354 */
	obj_t BGl_z62iszd2returnzf3zd2letzd2var1354z43zzreturn_walkz00(obj_t
		BgL_envz00_2482, obj_t BgL_nodez00_2483, obj_t BgL_exitvarz00_2484,
		obj_t BgL_abortz00_2485)
	{
		{	/* Return/walk.scm 253 */
			{

				if (CBOOL(BGl_za2optimzd2returnzd2gotozf3za2zf3zzengine_paramz00))
					{	/* Return/walk.scm 258 */
						bool_t BgL_test2156z00_3262;

						{	/* Return/walk.scm 258 */
							bool_t BgL_test2157z00_3263;

							{	/* Return/walk.scm 258 */
								obj_t BgL_tmpz00_3264;

								BgL_tmpz00_3264 =
									(((BgL_letzd2varzd2_bglt) COBJECT(
											((BgL_letzd2varzd2_bglt) BgL_nodez00_2483)))->
									BgL_bindingsz00);
								BgL_test2157z00_3263 = PAIRP(BgL_tmpz00_3264);
							}
							if (BgL_test2157z00_3263)
								{	/* Return/walk.scm 258 */
									BgL_test2156z00_3262 =
										NULLP(CDR(
											(((BgL_letzd2varzd2_bglt) COBJECT(
														((BgL_letzd2varzd2_bglt) BgL_nodez00_2483)))->
												BgL_bindingsz00)));
								}
							else
								{	/* Return/walk.scm 258 */
									BgL_test2156z00_3262 = ((bool_t) 0);
								}
						}
						if (BgL_test2156z00_3262)
							{	/* Return/walk.scm 259 */
								obj_t BgL_bnodez00_2547;

								{	/* Return/walk.scm 259 */
									obj_t BgL_pairz00_2548;

									BgL_pairz00_2548 =
										(((BgL_letzd2varzd2_bglt) COBJECT(
												((BgL_letzd2varzd2_bglt) BgL_nodez00_2483)))->
										BgL_bindingsz00);
									BgL_bnodez00_2547 = CDR(CAR(BgL_pairz00_2548));
								}
								if (BGl_isazf3zf3zz__objectz00(BgL_bnodez00_2547,
										BGl_appz00zzast_nodez00))
									{	/* Return/walk.scm 262 */
										BgL_varz00_bglt BgL_i1159z00_2549;

										BgL_i1159z00_2549 =
											(((BgL_appz00_bglt) COBJECT(
													((BgL_appz00_bglt) BgL_bnodez00_2547)))->BgL_funz00);
										{	/* Return/walk.scm 263 */
											bool_t BgL_test2159z00_3280;

											{	/* Return/walk.scm 263 */
												BgL_variablez00_bglt BgL_arg1857z00_2550;

												BgL_arg1857z00_2550 =
													(((BgL_varz00_bglt) COBJECT(BgL_i1159z00_2549))->
													BgL_variablez00);
												BgL_test2159z00_3280 =
													(((obj_t) BgL_arg1857z00_2550) ==
													BGl_za2getzd2exitdzd2topza2z00zzreturn_walkz00);
											}
											if (BgL_test2159z00_3280)
												{	/* Return/walk.scm 264 */
													BgL_nodez00_bglt BgL_arg1852z00_2551;
													obj_t BgL_arg1853z00_2552;

													BgL_arg1852z00_2551 =
														(((BgL_letzd2varzd2_bglt) COBJECT(
																((BgL_letzd2varzd2_bglt) BgL_nodez00_2483)))->
														BgL_bodyz00);
													{	/* Return/walk.scm 264 */
														obj_t BgL_arg1855z00_2553;

														{	/* Return/walk.scm 264 */
															obj_t BgL_pairz00_2554;

															BgL_pairz00_2554 =
																(((BgL_letzd2varzd2_bglt) COBJECT(
																		((BgL_letzd2varzd2_bglt)
																			BgL_nodez00_2483)))->BgL_bindingsz00);
															BgL_arg1855z00_2553 = CAR(CAR(BgL_pairz00_2554));
														}
														BgL_arg1853z00_2552 =
															MAKE_YOUNG_PAIR(BgL_arg1855z00_2553,
															BgL_exitvarz00_2484);
													}
													return
														BGl_iszd2returnzf3z21zzreturn_walkz00
														(BgL_arg1852z00_2551, BgL_arg1853z00_2552,
														BgL_abortz00_2485);
												}
											else
												{	/* Return/walk.scm 263 */
												BgL_callzd2defaultzd2walkerz00_2546:
													return
														BGl_walk2z00zzast_walkz00(
														((BgL_nodez00_bglt)
															((BgL_letzd2varzd2_bglt) BgL_nodez00_2483)),
														BGl_iszd2returnzf3zd2envzf3zzreturn_walkz00,
														BgL_exitvarz00_2484, BgL_abortz00_2485);
												}
										}
									}
								else
									{	/* Return/walk.scm 260 */
										goto BgL_callzd2defaultzd2walkerz00_2546;
									}
							}
						else
							{	/* Return/walk.scm 258 */
								goto BgL_callzd2defaultzd2walkerz00_2546;
							}
					}
				else
					{	/* Return/walk.scm 256 */
						goto BgL_callzd2defaultzd2walkerz00_2546;
					}
			}
		}

	}



/* &is-return?-var1352 */
	obj_t BGl_z62iszd2returnzf3zd2var1352z91zzreturn_walkz00(obj_t
		BgL_envz00_2486, obj_t BgL_nodez00_2487, obj_t BgL_exitvarz00_2488,
		obj_t BgL_abortz00_2489)
	{
		{	/* Return/walk.scm 245 */
			if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
						((obj_t)
							(((BgL_varz00_bglt) COBJECT(
										((BgL_varz00_bglt) BgL_nodez00_2487)))->BgL_variablez00)),
						BgL_exitvarz00_2488)))
				{	/* Return/walk.scm 247 */
					return
						PROCEDURE_ENTRY(BgL_abortz00_2489) (BgL_abortz00_2489, BFALSE,
						BEOA);
				}
			else
				{	/* Return/walk.scm 247 */
					return BFALSE;
				}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzreturn_walkz00()
	{
		{	/* Return/walk.scm 16 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string2055z00zzreturn_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2055z00zzreturn_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string2055z00zzreturn_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2055z00zzreturn_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2055z00zzreturn_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2055z00zzreturn_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2055z00zzreturn_walkz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string2055z00zzreturn_walkz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2055z00zzreturn_walkz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string2055z00zzreturn_walkz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string2055z00zzreturn_walkz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2055z00zzreturn_walkz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string2055z00zzreturn_walkz00));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 135263818),
				BSTRING_TO_STRING(BGl_string2055z00zzreturn_walkz00));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 189769760),
				BSTRING_TO_STRING(BGl_string2055z00zzreturn_walkz00));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string2055z00zzreturn_walkz00));
			BGl_modulezd2initializa7ationz75zzast_walkz00(((long) 343174175),
				BSTRING_TO_STRING(BGl_string2055z00zzreturn_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2055z00zzreturn_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2055z00zzreturn_walkz00));
		}

	}

#ifdef __cplusplus
}
#endif
