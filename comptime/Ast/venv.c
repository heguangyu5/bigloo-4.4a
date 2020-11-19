/*===========================================================================*/
/*   (Ast/venv.scm)                                                          */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/venv.scm) */
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

	typedef struct BgL_backendz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_languagez00;
		obj_t BgL_srfi0z00;
		obj_t BgL_namez00;
		obj_t BgL_externzd2variableszd2;
		obj_t BgL_externzd2functionszd2;
		obj_t BgL_externzd2typeszd2;
		obj_t BgL_variablesz00;
		obj_t BgL_functionsz00;
		obj_t BgL_typesz00;
		bool_t BgL_typedz00;
		obj_t BgL_heapzd2suffixzd2;
		obj_t BgL_heapzd2compatiblezd2;
		bool_t BgL_callccz00;
		bool_t BgL_qualifiedzd2typeszd2;
		bool_t BgL_effectzb2zb2;
		bool_t BgL_removezd2emptyzd2letz00;
		bool_t BgL_foreignzd2closurezd2;
		bool_t BgL_typedzd2eqzd2;
		bool_t BgL_tracezd2supportzd2;
		obj_t BgL_foreignzd2clausezd2supportz00;
		obj_t BgL_debugzd2supportzd2;
		bool_t BgL_pragmazd2supportzd2;
		bool_t BgL_tvectorzd2descrzd2supportz00;
		bool_t BgL_requirezd2tailczd2;
		obj_t BgL_registersz00;
		obj_t BgL_pregistersz00;
		bool_t BgL_boundzd2checkzd2;
		bool_t BgL_typezd2checkzd2;
		bool_t BgL_typedzd2funcallzd2;
	}                 *BgL_backendz00_bglt;

	typedef struct BgL_isfunz00_bgl
	{
		struct BgL_nodez00_bgl *BgL_originalzd2bodyzd2;
		obj_t BgL_recursivezd2callszd2;
		bool_t BgL_tailrecz00;
	}               *BgL_isfunz00_bglt;


	BGL_EXPORTED_DECL obj_t BGl_setzd2genvz12zc0zzast_envz00(obj_t);
	static obj_t BGl_z62globalzd2bucketzd2positionz62zzast_envz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t BGl_za2Genvza2z00zzast_envz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31689ze3ze5zzast_envz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzast_envz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_userzd2warningzd2zztools_errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_z62unbindzd2globalz12za2zzast_envz00(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_envz00();
	BGL_EXPORTED_DECL obj_t BGl_initializa7ezd2Genvz12z67zzast_envz00();
	static obj_t BGl_z62restorezd2valuezd2typesz12z70zzast_envz00(obj_t, obj_t);
	static obj_t BGl_restorezd2valuezd2typesz12z12zzast_envz00(BgL_valuez00_bglt);
	static obj_t BGl_z62getzd2globalzf2modulez42zzast_envz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_restorezd2globalz12zc0zzast_envz00(obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	static obj_t BGl_z62alreadyzd2restoredzf3z43zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_hrtypezd2nodez12zc0zzast_hrtypez00(BgL_nodez00_bglt);
	static obj_t BGl_z62restorezd2valuezd2typesz121298z70zzast_envz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_envz00();
	static obj_t BGl_errorzd2rebindzd2globalz12z12zzast_envz00(BgL_globalz00_bglt,
		obj_t);
	extern obj_t BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	extern obj_t BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t);
	BGL_IMPORT int BGl_bigloozd2warningzd2zz__paramz00();
	static obj_t BGl_requirezd2initializa7ationz75zzast_envz00 = BUNSPEC;
	extern obj_t BGl_funz00zzast_varz00;
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2globalzf2modulez20zzast_envz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_additionalzd2heapzd2restorezd2globalsz12zc0zzast_envz00();
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_alreadyzd2restoredzf3z21zzast_envz00(obj_t);
	extern obj_t BGl_za2warningzd2overridenzd2variablesza2z00zzengine_paramz00;
	static obj_t BGl_z62addzd2genvz12za2zzast_envz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzast_envz00();
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_bindzd2globalz12zc0zzast_envz00(obj_t, obj_t, obj_t, BgL_valuez00_bglt,
		obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzast_envz00();
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31312ze3ze5zzast_envz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_EXPORTED_DECL obj_t BGl_addzd2genvz12zc0zzast_envz00(obj_t);
	extern obj_t BGl_za2libzd2modeza2zd2zzengine_paramz00;
	static obj_t
		BGl_z62additionalzd2heapzd2restorezd2globalsz12za2zzast_envz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62findzd2globalzf2modulez42zzast_envz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62restorezd2valuezd2typesz121301z70zzast_envz00(obj_t,
		obj_t);
	static obj_t BGl_z62restorezd2valuezd2typesz121303z70zzast_envz00(obj_t,
		obj_t);
	static obj_t BGl_z62restorezd2valuezd2typesz121305z70zzast_envz00(obj_t,
		obj_t);
	static obj_t BGl_z62restorezd2valuezd2typesz121307z70zzast_envz00(obj_t,
		obj_t);
	static obj_t BGl_z62forzd2eachzd2globalz12z70zzast_envz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	static obj_t BGl_z62restorezd2globalz12za2zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_isfunz00zzinline_inlinez00;
	BGL_EXPORTED_DECL obj_t BGl_unbindzd2globalz12zc0zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	static obj_t BGl_z62initializa7ezd2Genvz12z05zzast_envz00(obj_t);
	static obj_t BGl_z62getzd2genvzb0zzast_envz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_hrtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	static BgL_globalz00_bglt BGl_z62bindzd2globalz12za2zzast_envz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_z62findzd2globalzb0zzast_envz00(obj_t, obj_t, obj_t);
	static obj_t BGl_za2delayedzd2restoredzd2globalza2z00zzast_envz00 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zzast_envz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_envz00();
	BGL_EXPORTED_DECL obj_t BGl_globalzd2bucketzd2positionz00zzast_envz00(obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_envz00();
	BGL_IMPORT obj_t BGl_hashtablezd2forzd2eachz00zz__hashz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t,
		obj_t);
	extern obj_t BGl_valuez00zzast_varz00;
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	static obj_t BGl_za2restoredza2z00zzast_envz00 = BUNSPEC;
	extern obj_t BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62setzd2genvz12za2zzast_envz00(obj_t, obj_t);
	static obj_t BGl_warningzd2overridezd2globalz12z12zzast_envz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2genvzd2zzast_envz00();
	extern obj_t BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00(obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t
		BGl_warningzd2rebindzd2globalz12z12zzast_envz00(BgL_globalz00_bglt, obj_t);
	static obj_t __cnst[7];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzd2genvz12zd2envz12zzast_envz00,
		BgL_bgl_za762setza7d2genvza7121948za7, BGl_z62setzd2genvz12za2zzast_envz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2globalzd2envz00zzast_envz00,
		BgL_bgl_za762findza7d2global1949z00, va_generic_entry,
		BGl_z62findzd2globalzb0zzast_envz00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_unbindzd2globalz12zd2envz12zzast_envz00,
		BgL_bgl_za762unbindza7d2glob1950z00,
		BGl_z62unbindzd2globalz12za2zzast_envz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2bucketzd2positionzd2envzd2zzast_envz00,
		BgL_bgl_za762globalza7d2buck1951z00,
		BGl_z62globalzd2bucketzd2positionz62zzast_envz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2globalzf2modulezd2envzf2zzast_envz00,
		BgL_bgl_za762getza7d2globalza71952za7,
		BGl_z62getzd2globalzf2modulez42zzast_envz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1924z00zzast_envz00,
		BgL_bgl_za762za7c3za704anonymo1953za7,
		BGl_z62zc3z04anonymousza31312ze3ze5zzast_envz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1932z00zzast_envz00,
		BgL_bgl_za762restoreza7d2val1954z00,
		BGl_z62restorezd2valuezd2typesz121298z70zzast_envz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1934z00zzast_envz00,
		BgL_bgl_za762restoreza7d2val1955z00,
		BGl_z62restorezd2valuezd2typesz121301z70zzast_envz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1936z00zzast_envz00,
		BgL_bgl_za762restoreza7d2val1956z00,
		BGl_z62restorezd2valuezd2typesz121303z70zzast_envz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1937z00zzast_envz00,
		BgL_bgl_za762restoreza7d2val1957z00,
		BGl_z62restorezd2valuezd2typesz121305z70zzast_envz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1938z00zzast_envz00,
		BgL_bgl_za762restoreza7d2val1958z00,
		BGl_z62restorezd2valuezd2typesz121307z70zzast_envz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2genvzd2envz00zzast_envz00,
		BgL_bgl_za762getza7d2genvza7b01959za7, BGl_z62getzd2genvzb0zzast_envz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_alreadyzd2restoredzf3zd2envzf3zzast_envz00,
		BgL_bgl_za762alreadyza7d2res1960z00,
		BGl_z62alreadyzd2restoredzf3z43zzast_envz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_additionalzd2heapzd2restorezd2globalsz12zd2envz12zzast_envz00,
		BgL_bgl_za762additionalza7d21961z00,
		BGl_z62additionalzd2heapzd2restorezd2globalsz12za2zzast_envz00, 0L, BUNSPEC,
		0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_addzd2genvz12zd2envz12zzast_envz00,
		BgL_bgl_za762addza7d2genvza7121962za7, BGl_z62addzd2genvz12za2zzast_envz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2globalzf2modulezd2envzf2zzast_envz00,
		BgL_bgl_za762findza7d2global1963z00,
		BGl_z62findzd2globalzf2modulez42zzast_envz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_initializa7ezd2Genvz12zd2envzb5zzast_envz00,
		BgL_bgl_za762initializa7a7eza71964za7,
		BGl_z62initializa7ezd2Genvz12z05zzast_envz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1925z00zzast_envz00,
		BgL_bgl_string1925za700za7za7a1965za7, "~a::~a", 6);
	      DEFINE_STRING(BGl_string1926z00zzast_envz00,
		BgL_bgl_string1926za700za7za7a1966za7, "Cannot find global variable", 27);
	      DEFINE_STRING(BGl_string1927z00zzast_envz00,
		BgL_bgl_string1927za700za7za7a1967za7, "Variable overridden by", 22);
	      DEFINE_STRING(BGl_string1928z00zzast_envz00,
		BgL_bgl_string1928za700za7za7a1968za7, "Duplicate definition", 20);
	      DEFINE_STRING(BGl_string1929z00zzast_envz00,
		BgL_bgl_string1929za700za7za7a1969za7, "eval", 4);
	      DEFINE_STRING(BGl_string1930z00zzast_envz00,
		BgL_bgl_string1930za700za7za7a1970za7, "unbind-global!", 14);
	      DEFINE_STRING(BGl_string1931z00zzast_envz00,
		BgL_bgl_string1931za700za7za7a1971za7, "Can't find global", 17);
	      DEFINE_STRING(BGl_string1933z00zzast_envz00,
		BgL_bgl_string1933za700za7za7a1972za7, "restore-value-types!1298", 24);
	      DEFINE_STRING(BGl_string1935z00zzast_envz00,
		BgL_bgl_string1935za700za7za7a1973za7, "restore-value-types!", 20);
	      DEFINE_STRING(BGl_string1939z00zzast_envz00,
		BgL_bgl_string1939za700za7za7a1974za7, "restore-value-types(sfun)", 25);
	      DEFINE_STRING(BGl_string1940z00zzast_envz00,
		BgL_bgl_string1940za700za7za7a1975za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string1941z00zzast_envz00,
		BgL_bgl_string1941za700za7za7a1976za7, "restore-value-types", 19);
	      DEFINE_STRING(BGl_string1942z00zzast_envz00,
		BgL_bgl_string1942za700za7za7a1977za7, "Illegal non pair argument", 25);
	      DEFINE_STRING(BGl_string1943z00zzast_envz00,
		BgL_bgl_string1943za700za7za7a1978za7, "ast_env", 7);
	      DEFINE_STRING(BGl_string1944z00zzast_envz00,
		BgL_bgl_string1944za700za7za7a1979za7,
		"eval now read @ get-global/module foreign the-global-environment ", 65);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_restorezd2valuezd2typesz12zd2envzc0zzast_envz00,
		BgL_bgl_za762restoreza7d2val1980z00,
		BGl_z62restorezd2valuezd2typesz12z70zzast_envz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_forzd2eachzd2globalz12zd2envzc0zzast_envz00,
		BgL_bgl_za762forza7d2eachza7d21981za7, va_generic_entry,
		BGl_z62forzd2eachzd2globalz12z70zzast_envz00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bindzd2globalz12zd2envz12zzast_envz00,
		BgL_bgl_za762bindza7d2global1982z00, BGl_z62bindzd2globalz12za2zzast_envz00,
		0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_restorezd2globalz12zd2envz12zzast_envz00,
		BgL_bgl_za762restoreza7d2glo1983z00,
		BGl_z62restorezd2globalz12za2zzast_envz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2Genvza2z00zzast_envz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzast_envz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2delayedzd2restoredzd2globalza2z00zzast_envz00));
		     ADD_ROOT((void *) (&BGl_za2restoredza2z00zzast_envz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long
		BgL_checksumz00_2372, char *BgL_fromz00_2373)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_envz00))
				{
					BGl_requirezd2initializa7ationz75zzast_envz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_envz00();
					BGl_libraryzd2moduleszd2initz00zzast_envz00();
					BGl_cnstzd2initzd2zzast_envz00();
					BGl_importedzd2moduleszd2initz00zzast_envz00();
					BGl_genericzd2initzd2zzast_envz00();
					BGl_methodzd2initzd2zzast_envz00();
					return BGl_toplevelzd2initzd2zzast_envz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_envz00()
	{
		{	/* Ast/venv.scm 14 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_env");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_env");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_env");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0), "ast_env");
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 0), "ast_env");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"ast_env");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_env");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_env");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_env");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"ast_env");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "ast_env");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_env");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_envz00()
	{
		{	/* Ast/venv.scm 14 */
			{	/* Ast/venv.scm 14 */
				obj_t BgL_cportz00_2312;

				{	/* Ast/venv.scm 14 */
					obj_t BgL_stringz00_2320;

					BgL_stringz00_2320 = BGl_string1944z00zzast_envz00;
					{	/* Ast/venv.scm 14 */
						obj_t BgL_startz00_2321;

						BgL_startz00_2321 = BINT(((long) 0));
						{	/* Ast/venv.scm 14 */
							obj_t BgL_endz00_2322;

							BgL_endz00_2322 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2320)));
							{	/* Ast/venv.scm 14 */

								BgL_cportz00_2312 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2320, BgL_startz00_2321, BgL_endz00_2322);
				}}}}
				{
					long BgL_iz00_2313;

					BgL_iz00_2313 = ((long) 6);
				BgL_loopz00_2314:
					if ((BgL_iz00_2313 == ((long) -1)))
						{	/* Ast/venv.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/venv.scm 14 */
							{	/* Ast/venv.scm 14 */
								obj_t BgL_arg1946z00_2316;

								{	/* Ast/venv.scm 14 */

									{	/* Ast/venv.scm 14 */
										obj_t BgL_locationz00_2318;

										BgL_locationz00_2318 = BBOOL(((bool_t) 0));
										{	/* Ast/venv.scm 14 */

											BgL_arg1946z00_2316 =
												BGl_readz00zz__readerz00(BgL_cportz00_2312,
												BgL_locationz00_2318);
										}
									}
								}
								{	/* Ast/venv.scm 14 */
									int BgL_tmpz00_2405;

									BgL_tmpz00_2405 = (int) (BgL_iz00_2313);
									CNST_TABLE_SET(BgL_tmpz00_2405, BgL_arg1946z00_2316);
							}}
							{	/* Ast/venv.scm 14 */
								int BgL_auxz00_2319;

								BgL_auxz00_2319 = (int) ((BgL_iz00_2313 - ((long) 1)));
								{
									long BgL_iz00_2410;

									BgL_iz00_2410 = (long) (BgL_auxz00_2319);
									BgL_iz00_2313 = BgL_iz00_2410;
									goto BgL_loopz00_2314;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_envz00()
	{
		{	/* Ast/venv.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_envz00()
	{
		{	/* Ast/venv.scm 14 */
			BGl_za2Genvza2z00zzast_envz00 = CNST_TABLE_REF(((long) 0));
			BGl_za2delayedzd2restoredzd2globalza2z00zzast_envz00 = BNIL;
			BGl_za2restoredza2z00zzast_envz00 = BNIL;
			return BUNSPEC;
		}

	}



/* set-genv! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2genvz12zc0zzast_envz00(obj_t BgL_genvz00_3)
	{
		{	/* Ast/venv.scm 55 */
			return (BGl_za2Genvza2z00zzast_envz00 = BgL_genvz00_3, BUNSPEC);
		}

	}



/* &set-genv! */
	obj_t BGl_z62setzd2genvz12za2zzast_envz00(obj_t BgL_envz00_2250,
		obj_t BgL_genvz00_2251)
	{
		{	/* Ast/venv.scm 55 */
			return BGl_setzd2genvz12zc0zzast_envz00(BgL_genvz00_2251);
		}

	}



/* add-genv! */
	BGL_EXPORTED_DEF obj_t BGl_addzd2genvz12zc0zzast_envz00(obj_t BgL_genvz00_4)
	{
		{	/* Ast/venv.scm 64 */
			BGl_hashtablezd2forzd2eachz00zz__hashz00(BgL_genvz00_4,
				BGl_proc1924z00zzast_envz00);
			return (BGl_za2restoredza2z00zzast_envz00 = BNIL, BUNSPEC);
		}

	}



/* &add-genv! */
	obj_t BGl_z62addzd2genvz12za2zzast_envz00(obj_t BgL_envz00_2253,
		obj_t BgL_genvz00_2254)
	{
		{	/* Ast/venv.scm 64 */
			return BGl_addzd2genvz12zc0zzast_envz00(BgL_genvz00_2254);
		}

	}



/* &<@anonymous:1312> */
	obj_t BGl_z62zc3z04anonymousza31312ze3ze5zzast_envz00(obj_t BgL_envz00_2255,
		obj_t BgL_kz00_2256, obj_t BgL_bucketz00_2257)
	{
		{	/* Ast/venv.scm 67 */
			{	/* Ast/venv.scm 68 */
				bool_t BgL_tmpz00_2417;

				{	/* Ast/venv.scm 68 */
					obj_t BgL_g1292z00_2325;

					BgL_g1292z00_2325 = CDR(((obj_t) BgL_bucketz00_2257));
					{
						obj_t BgL_l1290z00_2327;

						BgL_l1290z00_2327 = BgL_g1292z00_2325;
					BgL_zc3z04anonymousza31313ze3z87_2326:
						if (PAIRP(BgL_l1290z00_2327))
							{	/* Ast/venv.scm 88 */
								{	/* Ast/venv.scm 69 */
									obj_t BgL_newz00_2328;

									BgL_newz00_2328 = CAR(BgL_l1290z00_2327);
									BGl_za2delayedzd2restoredzd2globalza2z00zzast_envz00 =
										MAKE_YOUNG_PAIR(BgL_newz00_2328,
										BGl_za2delayedzd2restoredzd2globalza2z00zzast_envz00);
									{	/* Ast/venv.scm 70 */
										obj_t BgL_modulez00_2329;

										BgL_modulez00_2329 =
											(((BgL_globalz00_bglt) COBJECT(
													((BgL_globalz00_bglt) BgL_newz00_2328)))->
											BgL_modulez00);
										{	/* Ast/venv.scm 70 */
											obj_t BgL_idz00_2330;

											BgL_idz00_2330 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_globalz00_bglt) BgL_newz00_2328))))->
												BgL_idz00);
											{	/* Ast/venv.scm 71 */
												obj_t BgL_bucketz00_2331;

												BgL_bucketz00_2331 =
													BGl_hashtablezd2getzd2zz__hashz00
													(BGl_za2Genvza2z00zzast_envz00, BgL_idz00_2330);
												{	/* Ast/venv.scm 72 */

													if (PAIRP(BgL_bucketz00_2331))
														{	/* Ast/venv.scm 76 */
															bool_t BgL_test1988z00_2432;

															if (
																(BgL_modulez00_2329 ==
																	BGl_za2moduleza2z00zzmodule_modulez00))
																{	/* Ast/venv.scm 76 */
																	BgL_test1988z00_2432 = ((bool_t) 1);
																}
															else
																{	/* Ast/venv.scm 77 */
																	bool_t BgL_test1990z00_2435;

																	{	/* Ast/venv.scm 78 */
																		obj_t BgL_arg1330z00_2332;

																		{
																			BgL_globalz00_bglt BgL_auxz00_2436;

																			{	/* Ast/venv.scm 78 */
																				obj_t BgL_pairz00_2333;

																				BgL_pairz00_2333 =
																					CDR(BgL_bucketz00_2331);
																				BgL_auxz00_2436 =
																					((BgL_globalz00_bglt)
																					CAR(BgL_pairz00_2333));
																			}
																			BgL_arg1330z00_2332 =
																				(((BgL_globalz00_bglt)
																					COBJECT(BgL_auxz00_2436))->
																				BgL_modulez00);
																		}
																		BgL_test1990z00_2435 =
																			(BGl_za2moduleza2z00zzmodule_modulez00 ==
																			BgL_arg1330z00_2332);
																	}
																	if (BgL_test1990z00_2435)
																		{	/* Ast/venv.scm 77 */
																			BgL_test1988z00_2432 = ((bool_t) 0);
																		}
																	else
																		{	/* Ast/venv.scm 77 */
																			BgL_test1988z00_2432 = ((bool_t) 1);
																		}
																}
															if (BgL_test1988z00_2432)
																{	/* Ast/venv.scm 84 */
																	obj_t BgL_newzd2bucketzd2_2334;

																	BgL_newzd2bucketzd2_2334 =
																		MAKE_YOUNG_PAIR(BgL_newz00_2328,
																		CDR(BgL_bucketz00_2331));
																	SET_CDR(BgL_bucketz00_2331,
																		BgL_newzd2bucketzd2_2334);
																}
															else
																{	/* Ast/venv.scm 87 */
																	obj_t BgL_arg1327z00_2335;
																	obj_t BgL_arg1328z00_2336;

																	BgL_arg1327z00_2335 = CDR(BgL_bucketz00_2331);
																	BgL_arg1328z00_2336 =
																		MAKE_YOUNG_PAIR(BgL_newz00_2328,
																		CDR(CDR(BgL_bucketz00_2331)));
																	{	/* Ast/venv.scm 87 */
																		obj_t BgL_tmpz00_2449;

																		BgL_tmpz00_2449 =
																			((obj_t) BgL_arg1327z00_2335);
																		SET_CDR(BgL_tmpz00_2449,
																			BgL_arg1328z00_2336);
																	}
																}
														}
													else
														{	/* Ast/venv.scm 75 */
															obj_t BgL_arg1334z00_2337;

															{	/* Ast/venv.scm 75 */
																obj_t BgL_list1335z00_2338;

																{	/* Ast/venv.scm 75 */
																	obj_t BgL_arg1337z00_2339;

																	BgL_arg1337z00_2339 =
																		MAKE_YOUNG_PAIR(BgL_newz00_2328, BNIL);
																	BgL_list1335z00_2338 =
																		MAKE_YOUNG_PAIR(BgL_idz00_2330,
																		BgL_arg1337z00_2339);
																}
																BgL_arg1334z00_2337 = BgL_list1335z00_2338;
															}
															BGl_hashtablezd2putz12zc0zz__hashz00
																(BGl_za2Genvza2z00zzast_envz00, BgL_idz00_2330,
																BgL_arg1334z00_2337);
														}
												}
											}
										}
									}
								}
								{
									obj_t BgL_l1290z00_2455;

									BgL_l1290z00_2455 = CDR(BgL_l1290z00_2327);
									BgL_l1290z00_2327 = BgL_l1290z00_2455;
									goto BgL_zc3z04anonymousza31313ze3z87_2326;
								}
							}
						else
							{	/* Ast/venv.scm 88 */
								BgL_tmpz00_2417 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_tmpz00_2417);
			}
		}

	}



/* additional-heap-restore-globals! */
	BGL_EXPORTED_DEF obj_t
		BGl_additionalzd2heapzd2restorezd2globalsz12zc0zzast_envz00()
	{
		{	/* Ast/venv.scm 105 */
			{
				obj_t BgL_l1293z00_1573;

				BgL_l1293z00_1573 =
					BGl_za2delayedzd2restoredzd2globalza2z00zzast_envz00;
			BgL_zc3z04anonymousza31339ze3z87_1574:
				if (PAIRP(BgL_l1293z00_1573))
					{	/* Ast/venv.scm 106 */
						BGl_restorezd2globalz12zc0zzast_envz00(CAR(BgL_l1293z00_1573));
						{
							obj_t BgL_l1293z00_2462;

							BgL_l1293z00_2462 = CDR(BgL_l1293z00_1573);
							BgL_l1293z00_1573 = BgL_l1293z00_2462;
							goto BgL_zc3z04anonymousza31339ze3z87_1574;
						}
					}
				else
					{	/* Ast/venv.scm 106 */
						((bool_t) 1);
					}
			}
			return BTRUE;
		}

	}



/* &additional-heap-restore-globals! */
	obj_t BGl_z62additionalzd2heapzd2restorezd2globalsz12za2zzast_envz00(obj_t
		BgL_envz00_2258)
	{
		{	/* Ast/venv.scm 105 */
			return BGl_additionalzd2heapzd2restorezd2globalsz12zc0zzast_envz00();
		}

	}



/* restore-global! */
	BGL_EXPORTED_DEF obj_t BGl_restorezd2globalz12zc0zzast_envz00(obj_t
		BgL_newz00_6)
	{
		{	/* Ast/venv.scm 112 */
			BGl_za2restoredza2z00zzast_envz00 =
				MAKE_YOUNG_PAIR(BgL_newz00_6, BGl_za2restoredza2z00zzast_envz00);
			{	/* Ast/venv.scm 115 */
				BgL_typez00_bglt BgL_typez00_1580;

				BgL_typez00_1580 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								((BgL_globalz00_bglt) BgL_newz00_6))))->BgL_typez00);
				{	/* Ast/venv.scm 116 */
					BgL_valuez00_bglt BgL_valuez00_1581;

					BgL_valuez00_1581 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_newz00_6))))->BgL_valuez00);
					{	/* Ast/venv.scm 117 */
						obj_t BgL_typeidz00_1582;

						BgL_typeidz00_1582 =
							(((BgL_typez00_bglt) COBJECT(BgL_typez00_1580))->BgL_idz00);
						{	/* Ast/venv.scm 118 */

							{	/* Ast/venv.scm 120 */
								BgL_typez00_bglt BgL_arg1346z00_1583;

								BgL_arg1346z00_1583 =
									BGl_findzd2typezd2zztype_envz00(BgL_typeidz00_1582);
								((((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_globalz00_bglt) BgL_newz00_6))))->BgL_typez00) =
									((BgL_typez00_bglt) BgL_arg1346z00_1583), BUNSPEC);
							}
							BGl_restorezd2valuezd2typesz12z12zzast_envz00(BgL_valuez00_1581);
							{	/* Ast/venv.scm 124 */
								bool_t BgL_test1992z00_2478;

								{	/* Ast/venv.scm 124 */
									bool_t BgL_test1993z00_2479;

									{	/* Ast/venv.scm 124 */
										obj_t BgL_arg1371z00_1598;

										BgL_arg1371z00_1598 =
											BGl_thezd2backendzd2zzbackend_backendz00();
										BgL_test1993z00_2479 =
											(((BgL_backendz00_bglt) COBJECT(
													((BgL_backendz00_bglt) BgL_arg1371z00_1598)))->
											BgL_qualifiedzd2typeszd2);
									}
									if (BgL_test1993z00_2479)
										{	/* Ast/venv.scm 124 */
											if (
												((((BgL_globalz00_bglt) COBJECT(
																((BgL_globalz00_bglt) BgL_newz00_6)))->
														BgL_modulez00) == CNST_TABLE_REF(((long) 1))))
												{	/* Ast/venv.scm 125 */
													BgL_test1992z00_2478 = ((bool_t) 0);
												}
											else
												{	/* Ast/venv.scm 125 */
													BgL_test1992z00_2478 = ((bool_t) 1);
												}
										}
									else
										{	/* Ast/venv.scm 124 */
											BgL_test1992z00_2478 = ((bool_t) 0);
										}
								}
								if (BgL_test1992z00_2478)
									{	/* Ast/venv.scm 126 */
										obj_t BgL_arg1363z00_1591;
										obj_t BgL_arg1364z00_1592;
										obj_t BgL_arg1367z00_1593;

										BgL_arg1363z00_1591 =
											(((BgL_globalz00_bglt) COBJECT(
													((BgL_globalz00_bglt) BgL_newz00_6)))->BgL_modulez00);
										BgL_arg1364z00_1592 =
											(((BgL_globalz00_bglt) COBJECT(
													((BgL_globalz00_bglt) BgL_newz00_6)))->
											BgL_jvmzd2typezd2namez00);
										BgL_arg1367z00_1593 =
											BGl_shapez00zztools_shapez00(BgL_newz00_6);
										{	/* Ast/venv.scm 126 */
											obj_t BgL_list1368z00_1594;

											BgL_list1368z00_1594 =
												MAKE_YOUNG_PAIR(BgL_arg1367z00_1593, BNIL);
											return
												BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00
												(BgL_arg1363z00_1591, BgL_arg1364z00_1592,
												BgL_list1368z00_1594);
										}
									}
								else
									{	/* Ast/venv.scm 124 */
										return BFALSE;
									}
							}
						}
					}
				}
			}
		}

	}



/* &restore-global! */
	obj_t BGl_z62restorezd2globalz12za2zzast_envz00(obj_t BgL_envz00_2259,
		obj_t BgL_newz00_2260)
	{
		{	/* Ast/venv.scm 112 */
			return BGl_restorezd2globalz12zc0zzast_envz00(BgL_newz00_2260);
		}

	}



/* already-restored? */
	BGL_EXPORTED_DEF obj_t BGl_alreadyzd2restoredzf3z21zzast_envz00(obj_t
		BgL_funz00_8)
	{
		{	/* Ast/venv.scm 147 */
			return
				BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_funz00_8,
				BGl_za2restoredza2z00zzast_envz00);
		}

	}



/* &already-restored? */
	obj_t BGl_z62alreadyzd2restoredzf3z43zzast_envz00(obj_t BgL_envz00_2261,
		obj_t BgL_funz00_2262)
	{
		{	/* Ast/venv.scm 147 */
			return BGl_alreadyzd2restoredzf3z21zzast_envz00(BgL_funz00_2262);
		}

	}



/* get-genv */
	BGL_EXPORTED_DEF obj_t BGl_getzd2genvzd2zzast_envz00()
	{
		{	/* Ast/venv.scm 220 */
			return BGl_za2Genvza2z00zzast_envz00;
		}

	}



/* &get-genv */
	obj_t BGl_z62getzd2genvzb0zzast_envz00(obj_t BgL_envz00_2263)
	{
		{	/* Ast/venv.scm 220 */
			return BGl_getzd2genvzd2zzast_envz00();
		}

	}



/* initialize-Genv! */
	BGL_EXPORTED_DEF obj_t BGl_initializa7ezd2Genvz12z67zzast_envz00()
	{
		{	/* Ast/venv.scm 226 */
			return (BGl_za2Genvza2z00zzast_envz00 =
				BGl_makezd2hashtablezd2zz__hashz00(BNIL), BUNSPEC);
		}

	}



/* &initialize-Genv! */
	obj_t BGl_z62initializa7ezd2Genvz12z05zzast_envz00(obj_t BgL_envz00_2264)
	{
		{	/* Ast/venv.scm 226 */
			return BGl_initializa7ezd2Genvz12z67zzast_envz00();
		}

	}



/* find-global */
	BGL_EXPORTED_DEF obj_t BGl_findzd2globalzd2zzast_envz00(obj_t BgL_idz00_14,
		obj_t BgL_modulez00_15)
	{
		{	/* Ast/venv.scm 232 */
			{	/* Ast/venv.scm 234 */
				obj_t BgL_bucketz00_1600;
				obj_t BgL_modulez00_1601;

				BgL_bucketz00_1600 =
					BGl_hashtablezd2getzd2zz__hashz00(BGl_za2Genvza2z00zzast_envz00,
					BgL_idz00_14);
				if (NULLP(BgL_modulez00_15))
					{	/* Ast/venv.scm 235 */
						BgL_modulez00_1601 = BNIL;
					}
				else
					{	/* Ast/venv.scm 235 */
						BgL_modulez00_1601 = CAR(((obj_t) BgL_modulez00_15));
					}
				if (PAIRP(BgL_bucketz00_1600))
					{	/* Ast/venv.scm 237 */
						if (NULLP(CDR(BgL_bucketz00_1600)))
							{	/* Ast/venv.scm 239 */
								return BFALSE;
							}
						else
							{	/* Ast/venv.scm 239 */
								if (NULLP(BgL_modulez00_1601))
									{	/* Ast/venv.scm 241 */
										return CAR(CDR(BgL_bucketz00_1600));
									}
								else
									{	/* Ast/venv.scm 244 */
										obj_t BgL_g1106z00_1606;

										BgL_g1106z00_1606 = CDR(BgL_bucketz00_1600);
										{
											obj_t BgL_globalsz00_1608;

											BgL_globalsz00_1608 = BgL_g1106z00_1606;
										BgL_zc3z04anonymousza31391ze3z87_1609:
											if (NULLP(BgL_globalsz00_1608))
												{	/* Ast/venv.scm 246 */
													return BFALSE;
												}
											else
												{	/* Ast/venv.scm 246 */
													if (
														((((BgL_globalz00_bglt) COBJECT(
																		((BgL_globalz00_bglt)
																			CAR(
																				((obj_t) BgL_globalsz00_1608)))))->
																BgL_modulez00) == BgL_modulez00_1601))
														{	/* Ast/venv.scm 248 */
															return CAR(((obj_t) BgL_globalsz00_1608));
														}
													else
														{	/* Ast/venv.scm 251 */
															obj_t BgL_arg1417z00_1614;

															BgL_arg1417z00_1614 =
																CDR(((obj_t) BgL_globalsz00_1608));
															{
																obj_t BgL_globalsz00_2528;

																BgL_globalsz00_2528 = BgL_arg1417z00_1614;
																BgL_globalsz00_1608 = BgL_globalsz00_2528;
																goto BgL_zc3z04anonymousza31391ze3z87_1609;
															}
														}
												}
										}
									}
							}
					}
				else
					{	/* Ast/venv.scm 237 */
						return BFALSE;
					}
			}
		}

	}



/* &find-global */
	obj_t BGl_z62findzd2globalzb0zzast_envz00(obj_t BgL_envz00_2265,
		obj_t BgL_idz00_2266, obj_t BgL_modulez00_2267)
	{
		{	/* Ast/venv.scm 232 */
			return
				BGl_findzd2globalzd2zzast_envz00(BgL_idz00_2266, BgL_modulez00_2267);
		}

	}



/* find-global/module */
	BGL_EXPORTED_DEF obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t
		BgL_idz00_16, obj_t BgL_modulez00_17)
	{
		{	/* Ast/venv.scm 256 */
			{	/* Ast/venv.scm 257 */
				obj_t BgL_bucketz00_1620;

				BgL_bucketz00_1620 =
					BGl_hashtablezd2getzd2zz__hashz00(BGl_za2Genvza2z00zzast_envz00,
					BgL_idz00_16);
				if (PAIRP(BgL_bucketz00_1620))
					{	/* Ast/venv.scm 259 */
						if (NULLP(CDR(BgL_bucketz00_1620)))
							{	/* Ast/venv.scm 261 */
								return BFALSE;
							}
						else
							{	/* Ast/venv.scm 266 */
								obj_t BgL_g1107z00_1625;

								BgL_g1107z00_1625 = CDR(BgL_bucketz00_1620);
								{
									obj_t BgL_globalsz00_1627;

									BgL_globalsz00_1627 = BgL_g1107z00_1625;
								BgL_zc3z04anonymousza31444ze3z87_1628:
									if (NULLP(BgL_globalsz00_1627))
										{	/* Ast/venv.scm 268 */
											return BFALSE;
										}
									else
										{	/* Ast/venv.scm 268 */
											if (
												((((BgL_globalz00_bglt) COBJECT(
																((BgL_globalz00_bglt)
																	CAR(
																		((obj_t) BgL_globalsz00_1627)))))->
														BgL_modulez00) == BgL_modulez00_17))
												{	/* Ast/venv.scm 270 */
													return CAR(((obj_t) BgL_globalsz00_1627));
												}
											else
												{	/* Ast/venv.scm 273 */
													obj_t BgL_arg1461z00_1633;

													BgL_arg1461z00_1633 =
														CDR(((obj_t) BgL_globalsz00_1627));
													{
														obj_t BgL_globalsz00_2549;

														BgL_globalsz00_2549 = BgL_arg1461z00_1633;
														BgL_globalsz00_1627 = BgL_globalsz00_2549;
														goto BgL_zc3z04anonymousza31444ze3z87_1628;
													}
												}
										}
								}
							}
					}
				else
					{	/* Ast/venv.scm 259 */
						return BFALSE;
					}
			}
		}

	}



/* &find-global/module */
	obj_t BGl_z62findzd2globalzf2modulez42zzast_envz00(obj_t BgL_envz00_2268,
		obj_t BgL_idz00_2269, obj_t BgL_modulez00_2270)
	{
		{	/* Ast/venv.scm 256 */
			return
				BGl_findzd2globalzf2modulez20zzast_envz00(BgL_idz00_2269,
				BgL_modulez00_2270);
		}

	}



/* get-global/module */
	BGL_EXPORTED_DEF obj_t BGl_getzd2globalzf2modulez20zzast_envz00(obj_t
		BgL_idz00_18, obj_t BgL_modulez00_19)
	{
		{	/* Ast/venv.scm 278 */
			{	/* Ast/venv.scm 279 */
				obj_t BgL_globalz00_1638;

				BgL_globalz00_1638 =
					BGl_findzd2globalzf2modulez20zzast_envz00(BgL_idz00_18,
					BgL_modulez00_19);
				{	/* Ast/venv.scm 280 */
					bool_t BgL_test2005z00_2552;

					if (BGl_isazf3zf3zz__objectz00(BgL_globalz00_1638,
							BGl_globalz00zzast_varz00))
						{	/* Ast/venv.scm 280 */
							BgL_test2005z00_2552 = ((bool_t) 0);
						}
					else
						{	/* Ast/venv.scm 280 */
							if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
								{	/* Ast/venv.scm 280 */
									BgL_test2005z00_2552 = ((bool_t) 0);
								}
							else
								{	/* Ast/venv.scm 280 */
									BgL_test2005z00_2552 = ((bool_t) 1);
								}
						}
					if (BgL_test2005z00_2552)
						{	/* Ast/venv.scm 283 */
							obj_t BgL_arg1474z00_1641;

							{	/* Ast/venv.scm 283 */
								obj_t BgL_list1475z00_1642;

								{	/* Ast/venv.scm 283 */
									obj_t BgL_arg1476z00_1643;

									BgL_arg1476z00_1643 = MAKE_YOUNG_PAIR(BgL_modulez00_19, BNIL);
									BgL_list1475z00_1642 =
										MAKE_YOUNG_PAIR(BgL_idz00_18, BgL_arg1476z00_1643);
								}
								BgL_arg1474z00_1641 =
									BGl_formatz00zz__r4_output_6_10_3z00
									(BGl_string1925z00zzast_envz00, BgL_list1475z00_1642);
							}
							BGl_internalzd2errorzd2zztools_errorz00(CNST_TABLE_REF(((long)
										2)), BGl_string1926z00zzast_envz00, BgL_arg1474z00_1641);
						}
					else
						{	/* Ast/venv.scm 280 */
							BFALSE;
						}
				}
				return BgL_globalz00_1638;
			}
		}

	}



/* &get-global/module */
	obj_t BGl_z62getzd2globalzf2modulez42zzast_envz00(obj_t BgL_envz00_2271,
		obj_t BgL_idz00_2272, obj_t BgL_modulez00_2273)
	{
		{	/* Ast/venv.scm 278 */
			return
				BGl_getzd2globalzf2modulez20zzast_envz00(BgL_idz00_2272,
				BgL_modulez00_2273);
		}

	}



/* warning-override-global! */
	obj_t BGl_warningzd2overridezd2globalz12z12zzast_envz00(obj_t BgL_nz00_20,
		obj_t BgL_oz00_21, obj_t BgL_srcez00_22)
	{
		{	/* Ast/venv.scm 289 */
			{	/* Ast/venv.scm 290 */
				bool_t BgL_test2008z00_2563;

				{	/* Ast/venv.scm 290 */
					bool_t BgL_test2009z00_2564;

					{	/* Ast/venv.scm 290 */
						int BgL_arg1552z00_1665;

						BgL_arg1552z00_1665 = BGl_bigloozd2warningzd2zz__paramz00();
						BgL_test2009z00_2564 = ((long) (BgL_arg1552z00_1665) > ((long) 0));
					}
					if (BgL_test2009z00_2564)
						{	/* Ast/venv.scm 290 */
							BgL_test2008z00_2563 =
								CBOOL
								(BGl_za2warningzd2overridenzd2variablesza2z00zzengine_paramz00);
						}
					else
						{	/* Ast/venv.scm 290 */
							BgL_test2008z00_2563 = ((bool_t) 0);
						}
				}
				if (BgL_test2008z00_2563)
					{	/* Ast/venv.scm 292 */
						obj_t BgL_locz00_1650;
						obj_t BgL_oldz00_1651;
						obj_t BgL_newz00_1652;

						{	/* Ast/venv.scm 292 */
							obj_t BgL__ortest_1109z00_1654;

							{	/* Ast/venv.scm 292 */
								obj_t BgL_arg1493z00_1655;

								BgL_arg1493z00_1655 =
									(((BgL_globalz00_bglt) COBJECT(
											((BgL_globalz00_bglt) BgL_oz00_21)))->BgL_srcz00);
								BgL__ortest_1109z00_1654 =
									BGl_findzd2locationzd2zztools_locationz00
									(BgL_arg1493z00_1655);
							}
							if (CBOOL(BgL__ortest_1109z00_1654))
								{	/* Ast/venv.scm 292 */
									BgL_locz00_1650 = BgL__ortest_1109z00_1654;
								}
							else
								{	/* Ast/venv.scm 292 */
									BgL_locz00_1650 =
										BGl_findzd2locationzd2zztools_locationz00(BgL_srcez00_22);
								}
						}
						{	/* Ast/venv.scm 293 */
							obj_t BgL_arg1495z00_1656;

							{	/* Ast/venv.scm 293 */
								obj_t BgL_arg1497z00_1657;
								obj_t BgL_arg1518z00_1658;

								BgL_arg1497z00_1657 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_oz00_21))))->BgL_idz00);
								{	/* Ast/venv.scm 293 */
									obj_t BgL_arg1521z00_1659;

									BgL_arg1521z00_1659 =
										(((BgL_globalz00_bglt) COBJECT(
												((BgL_globalz00_bglt) BgL_oz00_21)))->BgL_modulez00);
									BgL_arg1518z00_1658 =
										MAKE_YOUNG_PAIR(BgL_arg1521z00_1659, BNIL);
								}
								BgL_arg1495z00_1656 =
									MAKE_YOUNG_PAIR(BgL_arg1497z00_1657, BgL_arg1518z00_1658);
							}
							BgL_oldz00_1651 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
								BgL_arg1495z00_1656);
						}
						{	/* Ast/venv.scm 294 */
							obj_t BgL_arg1528z00_1660;

							{	/* Ast/venv.scm 294 */
								obj_t BgL_arg1536z00_1661;
								obj_t BgL_arg1537z00_1662;

								BgL_arg1536z00_1661 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_nz00_20))))->BgL_idz00);
								{	/* Ast/venv.scm 294 */
									obj_t BgL_arg1540z00_1663;

									BgL_arg1540z00_1663 =
										(((BgL_globalz00_bglt) COBJECT(
												((BgL_globalz00_bglt) BgL_nz00_20)))->BgL_modulez00);
									BgL_arg1537z00_1662 =
										MAKE_YOUNG_PAIR(BgL_arg1540z00_1663, BNIL);
								}
								BgL_arg1528z00_1660 =
									MAKE_YOUNG_PAIR(BgL_arg1536z00_1661, BgL_arg1537z00_1662);
							}
							BgL_newz00_1652 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
								BgL_arg1528z00_1660);
						}
						if (CBOOL(BgL_locz00_1650))
							{	/* Ast/venv.scm 296 */
								return
									BGl_userzd2warningzf2locationz20zztools_errorz00
									(BgL_locz00_1650, BgL_oldz00_1651,
									BGl_string1927z00zzast_envz00, BgL_newz00_1652);
							}
						else
							{	/* Ast/venv.scm 296 */
								return
									BGl_userzd2warningzd2zztools_errorz00(BgL_oldz00_1651,
									BGl_string1927z00zzast_envz00, BgL_newz00_1652);
							}
					}
				else
					{	/* Ast/venv.scm 290 */
						return BFALSE;
					}
			}
		}

	}



/* error-rebind-global! */
	obj_t BGl_errorzd2rebindzd2globalz12z12zzast_envz00(BgL_globalz00_bglt
		BgL_oz00_23, obj_t BgL_srcz00_24)
	{
		{	/* Ast/venv.scm 303 */
			{	/* Ast/venv.scm 305 */
				obj_t BgL_locz00_1667;

				BgL_locz00_1667 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_24);
				if (CBOOL(BgL_locz00_1667))
					{	/* Ast/venv.scm 308 */
						obj_t BgL_arg1558z00_1669;
						obj_t BgL_arg1561z00_1670;

						BgL_arg1558z00_1669 =
							(((BgL_globalz00_bglt) COBJECT(BgL_oz00_23))->BgL_modulez00);
						BgL_arg1561z00_1670 =
							BGl_shapez00zztools_shapez00(((obj_t) BgL_oz00_23));
						return
							BGl_userzd2errorzf2locationz20zztools_errorz00(BgL_locz00_1667,
							BgL_arg1558z00_1669, BGl_string1928z00zzast_envz00,
							BgL_arg1561z00_1670, BNIL);
					}
				else
					{	/* Ast/venv.scm 309 */
						obj_t BgL_arg1564z00_1672;
						obj_t BgL_arg1565z00_1673;

						BgL_arg1564z00_1672 =
							(((BgL_globalz00_bglt) COBJECT(BgL_oz00_23))->BgL_modulez00);
						BgL_arg1565z00_1673 =
							BGl_shapez00zztools_shapez00(((obj_t) BgL_oz00_23));
						return
							BGl_userzd2errorzd2zztools_errorz00(BgL_arg1564z00_1672,
							BGl_string1928z00zzast_envz00, BgL_arg1565z00_1673, BNIL);
					}
			}
		}

	}



/* warning-rebind-global! */
	obj_t BGl_warningzd2rebindzd2globalz12z12zzast_envz00(BgL_globalz00_bglt
		BgL_oz00_25, obj_t BgL_srcz00_26)
	{
		{	/* Ast/venv.scm 314 */
			{	/* Ast/venv.scm 316 */
				obj_t BgL_locz00_1676;

				BgL_locz00_1676 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_26);
				if (CBOOL(BgL_locz00_1676))
					{	/* Ast/venv.scm 319 */
						obj_t BgL_arg1573z00_1678;
						obj_t BgL_arg1575z00_1679;

						BgL_arg1573z00_1678 =
							(((BgL_globalz00_bglt) COBJECT(BgL_oz00_25))->BgL_modulez00);
						BgL_arg1575z00_1679 =
							BGl_shapez00zztools_shapez00(((obj_t) BgL_oz00_25));
						return
							BGl_userzd2warningzf2locationz20zztools_errorz00(BgL_locz00_1676,
							BgL_arg1573z00_1678, BGl_string1928z00zzast_envz00,
							BgL_arg1575z00_1679);
					}
				else
					{	/* Ast/venv.scm 320 */
						obj_t BgL_arg1578z00_1680;
						obj_t BgL_arg1582z00_1681;

						BgL_arg1578z00_1680 =
							(((BgL_globalz00_bglt) COBJECT(BgL_oz00_25))->BgL_modulez00);
						BgL_arg1582z00_1681 =
							BGl_shapez00zztools_shapez00(((obj_t) BgL_oz00_25));
						return
							BGl_userzd2warningzd2zztools_errorz00(BgL_arg1578z00_1680,
							BGl_string1928z00zzast_envz00, BgL_arg1582z00_1681);
					}
			}
		}

	}



/* bind-global! */
	BGL_EXPORTED_DEF BgL_globalz00_bglt BGl_bindzd2globalz12zc0zzast_envz00(obj_t
		BgL_idz00_27, obj_t BgL_aliasz00_28, obj_t BgL_modulez00_29,
		BgL_valuez00_bglt BgL_valuez00_30, obj_t BgL_importz00_31,
		obj_t BgL_srcz00_32)
	{
		{	/* Ast/venv.scm 337 */
			{	/* Ast/venv.scm 340 */
				obj_t BgL_identz00_1682;

				if (CBOOL(BgL_aliasz00_28))
					{	/* Ast/venv.scm 340 */
						BgL_identz00_1682 = BgL_aliasz00_28;
					}
				else
					{	/* Ast/venv.scm 340 */
						BgL_identz00_1682 = BgL_idz00_27;
					}
				{	/* Ast/venv.scm 340 */
					obj_t BgL_oldz00_1683;

					{	/* Ast/venv.scm 341 */
						obj_t BgL_list1645z00_1723;

						BgL_list1645z00_1723 = MAKE_YOUNG_PAIR(BgL_modulez00_29, BNIL);
						BgL_oldz00_1683 =
							BGl_findzd2globalzd2zzast_envz00(BgL_identz00_1682,
							BgL_list1645z00_1723);
					}
					{	/* Ast/venv.scm 341 */

						if (BGl_isazf3zf3zz__objectz00(BgL_oldz00_1683,
								BGl_globalz00zzast_varz00))
							{	/* Ast/venv.scm 342 */
								if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
									{	/* Ast/venv.scm 344 */
										return ((BgL_globalz00_bglt) BgL_oldz00_1683);
									}
								else
									{	/* Ast/venv.scm 344 */
										if (
											(BgL_modulez00_29 ==
												(((BgL_globalz00_bglt) COBJECT(
															((BgL_globalz00_bglt) BgL_oldz00_1683)))->
													BgL_modulez00)))
											{	/* Ast/venv.scm 346 */
												BGl_warningzd2rebindzd2globalz12z12zzast_envz00(
													((BgL_globalz00_bglt) BgL_oldz00_1683),
													BgL_srcz00_32);
												return ((BgL_globalz00_bglt) BgL_oldz00_1683);
											}
										else
											{	/* Ast/venv.scm 346 */
												return
													((BgL_globalz00_bglt)
													BGl_errorzd2rebindzd2globalz12z12zzast_envz00(
														((BgL_globalz00_bglt) BgL_oldz00_1683),
														BgL_srcz00_32));
											}
									}
							}
						else
							{	/* Ast/venv.scm 351 */
								obj_t BgL_bucketz00_1688;
								BgL_globalz00_bglt BgL_newz00_1689;

								BgL_bucketz00_1688 =
									BGl_hashtablezd2getzd2zz__hashz00
									(BGl_za2Genvza2z00zzast_envz00, BgL_identz00_1682);
								{	/* Ast/venv.scm 352 */
									BgL_globalz00_bglt BgL_new1114z00_1719;

									{	/* Ast/venv.scm 358 */
										BgL_globalz00_bglt BgL_new1113z00_1721;

										BgL_new1113z00_1721 =
											((BgL_globalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_globalz00_bgl))));
										{	/* Ast/venv.scm 358 */
											long BgL_arg1644z00_1722;

											{	/* Ast/venv.scm 358 */
												long BgL_res1895z00_2140;

												BgL_res1895z00_2140 =
													BGL_CLASS_INDEX(BGl_globalz00zzast_varz00);
												BgL_arg1644z00_1722 = BgL_res1895z00_2140;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1113z00_1721),
												BgL_arg1644z00_1722);
										}
										{	/* Ast/venv.scm 358 */
											BgL_objectz00_bglt BgL_tmpz00_2643;

											BgL_tmpz00_2643 =
												((BgL_objectz00_bglt) BgL_new1113z00_1721);
											BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2643, BFALSE);
										}
										((BgL_objectz00_bglt) BgL_new1113z00_1721);
										BgL_new1114z00_1719 = BgL_new1113z00_1721;
									}
									((((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_new1114z00_1719)))->
											BgL_idz00) = ((obj_t) BgL_identz00_1682), BUNSPEC);
									((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
														BgL_new1114z00_1719)))->BgL_namez00) =
										((obj_t) BFALSE), BUNSPEC);
									((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
														BgL_new1114z00_1719)))->BgL_typez00) =
										((BgL_typez00_bglt) ((BgL_typez00_bglt)
												BGl_za2_za2z00zztype_cachez00)), BUNSPEC);
									((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
														BgL_new1114z00_1719)))->BgL_valuez00) =
										((BgL_valuez00_bglt) BgL_valuez00_30), BUNSPEC);
									((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
														BgL_new1114z00_1719)))->BgL_accessz00) =
										((obj_t) CNST_TABLE_REF(((long) 4))), BUNSPEC);
									((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
														BgL_new1114z00_1719)))->BgL_fastzd2alphazd2) =
										((obj_t) BUNSPEC), BUNSPEC);
									((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
														BgL_new1114z00_1719)))->BgL_removablez00) =
										((obj_t) CNST_TABLE_REF(((long) 5))), BUNSPEC);
									((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
														BgL_new1114z00_1719)))->BgL_occurrencez00) =
										((long) ((long) 0)), BUNSPEC);
									((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
														BgL_new1114z00_1719)))->BgL_occurrencewz00) =
										((long) ((long) 0)), BUNSPEC);
									((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
														BgL_new1114z00_1719)))->BgL_userzf3zf3) =
										((bool_t) ((bool_t) 1)), BUNSPEC);
									((((BgL_globalz00_bglt) COBJECT(BgL_new1114z00_1719))->
											BgL_modulez00) = ((obj_t) BgL_modulez00_29), BUNSPEC);
									((((BgL_globalz00_bglt) COBJECT(BgL_new1114z00_1719))->
											BgL_importz00) = ((obj_t) BgL_importz00_31), BUNSPEC);
									((((BgL_globalz00_bglt) COBJECT(BgL_new1114z00_1719))->
											BgL_evaluablezf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
									((((BgL_globalz00_bglt) COBJECT(BgL_new1114z00_1719))->
											BgL_evalzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
									((((BgL_globalz00_bglt) COBJECT(BgL_new1114z00_1719))->
											BgL_libraryz00) = ((obj_t) BFALSE), BUNSPEC);
									((((BgL_globalz00_bglt) COBJECT(BgL_new1114z00_1719))->
											BgL_pragmaz00) = ((obj_t) BNIL), BUNSPEC);
									((((BgL_globalz00_bglt) COBJECT(BgL_new1114z00_1719))->
											BgL_srcz00) = ((obj_t) BgL_srcz00_32), BUNSPEC);
									{
										obj_t BgL_auxz00_2677;

										if ((BgL_importz00_31 == CNST_TABLE_REF(((long) 6))))
											{	/* Ast/venv.scm 355 */
												BgL_auxz00_2677 = BGl_string1929z00zzast_envz00;
											}
										else
											{	/* Ast/venv.scm 355 */
												BgL_auxz00_2677 =
													BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00
													(BgL_modulez00_29);
											}
										((((BgL_globalz00_bglt) COBJECT(BgL_new1114z00_1719))->
												BgL_jvmzd2typezd2namez00) =
											((obj_t) BgL_auxz00_2677), BUNSPEC);
									}
									((((BgL_globalz00_bglt) COBJECT(BgL_new1114z00_1719))->
											BgL_initz00) = ((obj_t) BUNSPEC), BUNSPEC);
									{
										obj_t BgL_auxz00_2684;

										if (CBOOL(BgL_aliasz00_28))
											{	/* Ast/venv.scm 359 */
												BgL_auxz00_2684 = BgL_idz00_27;
											}
										else
											{	/* Ast/venv.scm 359 */
												BgL_auxz00_2684 = BFALSE;
											}
										((((BgL_globalz00_bglt) COBJECT(BgL_new1114z00_1719))->
												BgL_aliasz00) = ((obj_t) BgL_auxz00_2684), BUNSPEC);
									}
									BgL_newz00_1689 = BgL_new1114z00_1719;
								}
								{	/* Ast/venv.scm 365 */
									bool_t BgL_test2020z00_2688;

									if (PAIRP(BgL_bucketz00_1688))
										{	/* Ast/venv.scm 365 */
											BgL_test2020z00_2688 = NULLP(CDR(BgL_bucketz00_1688));
										}
									else
										{	/* Ast/venv.scm 365 */
											BgL_test2020z00_2688 = ((bool_t) 1);
										}
									if (BgL_test2020z00_2688)
										{	/* Ast/venv.scm 365 */
											{	/* Ast/venv.scm 367 */
												obj_t BgL_arg1597z00_1693;

												{	/* Ast/venv.scm 367 */
													obj_t BgL_list1598z00_1694;

													{	/* Ast/venv.scm 367 */
														obj_t BgL_arg1599z00_1695;

														BgL_arg1599z00_1695 =
															MAKE_YOUNG_PAIR(((obj_t) BgL_newz00_1689), BNIL);
														BgL_list1598z00_1694 =
															MAKE_YOUNG_PAIR(BgL_identz00_1682,
															BgL_arg1599z00_1695);
													}
													BgL_arg1597z00_1693 = BgL_list1598z00_1694;
												}
												BGl_hashtablezd2putz12zc0zz__hashz00
													(BGl_za2Genvza2z00zzast_envz00, BgL_identz00_1682,
													BgL_arg1597z00_1693);
											}
											return BgL_newz00_1689;
										}
									else
										{	/* Ast/venv.scm 370 */
											obj_t BgL_oldza2za2_1696;

											BgL_oldza2za2_1696 = CDR(((obj_t) BgL_bucketz00_1688));
											{	/* Ast/venv.scm 370 */
												obj_t BgL_midz00_1697;

												{	/* Ast/venv.scm 372 */
													obj_t BgL_arg1639z00_1715;

													BgL_arg1639z00_1715 =
														(((BgL_globalz00_bglt) COBJECT(
																((BgL_globalz00_bglt)
																	CAR(
																		((obj_t) BgL_oldza2za2_1696)))))->
														BgL_modulez00);
													BgL_midz00_1697 =
														BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00
														(BgL_arg1639z00_1715);
												}
												{	/* Ast/venv.scm 371 */

													{	/* Ast/venv.scm 374 */
														bool_t BgL_test2022z00_2704;

														{	/* Ast/venv.scm 374 */
															obj_t BgL_arg1631z00_1713;

															BgL_arg1631z00_1713 =
																(((BgL_globalz00_bglt) COBJECT(
																		((BgL_globalz00_bglt)
																			CAR(
																				((obj_t) BgL_oldza2za2_1696)))))->
																BgL_modulez00);
															BgL_test2022z00_2704 =
																(BgL_arg1631z00_1713 ==
																BGl_za2moduleza2z00zzmodule_modulez00);
														}
														if (BgL_test2022z00_2704)
															{	/* Ast/venv.scm 374 */
																{	/* Ast/venv.scm 376 */
																	bool_t BgL_test2023z00_2710;

																	if ((BgL_identz00_1682 == BgL_midz00_1697))
																		{	/* Ast/venv.scm 376 */
																			BgL_test2023z00_2710 = ((bool_t) 0);
																		}
																	else
																		{	/* Ast/venv.scm 376 */
																			if (CBOOL
																				(BGl_za2libzd2modeza2zd2zzengine_paramz00))
																				{	/* Ast/venv.scm 376 */
																					BgL_test2023z00_2710 = ((bool_t) 0);
																				}
																			else
																				{	/* Ast/venv.scm 376 */
																					BgL_test2023z00_2710 = ((bool_t) 1);
																				}
																		}
																	if (BgL_test2023z00_2710)
																		{	/* Ast/venv.scm 377 */
																			obj_t BgL_arg1611z00_1703;

																			BgL_arg1611z00_1703 =
																				CAR(((obj_t) BgL_oldza2za2_1696));
																			BGl_warningzd2overridezd2globalz12z12zzast_envz00
																				(BgL_arg1611z00_1703,
																				((obj_t) BgL_newz00_1689),
																				BgL_srcz00_32);
																		}
																	else
																		{	/* Ast/venv.scm 376 */
																			BFALSE;
																		}
																}
																{	/* Ast/venv.scm 378 */
																	obj_t BgL_arg1612z00_1705;
																	obj_t BgL_arg1613z00_1706;

																	BgL_arg1612z00_1705 =
																		CDR(((obj_t) BgL_bucketz00_1688));
																	{	/* Ast/venv.scm 378 */
																		obj_t BgL_arg1624z00_1707;

																		{	/* Ast/venv.scm 378 */
																			obj_t BgL_pairz00_2158;

																			BgL_pairz00_2158 =
																				CDR(((obj_t) BgL_bucketz00_1688));
																			BgL_arg1624z00_1707 =
																				CDR(BgL_pairz00_2158);
																		}
																		BgL_arg1613z00_1706 =
																			MAKE_YOUNG_PAIR(
																			((obj_t) BgL_newz00_1689),
																			BgL_arg1624z00_1707);
																	}
																	{	/* Ast/venv.scm 378 */
																		obj_t BgL_tmpz00_2726;

																		BgL_tmpz00_2726 =
																			((obj_t) BgL_arg1612z00_1705);
																		SET_CDR(BgL_tmpz00_2726,
																			BgL_arg1613z00_1706);
																	}
																}
																return BgL_newz00_1689;
															}
														else
															{	/* Ast/venv.scm 381 */
																obj_t BgL_newza2za2_1708;

																BgL_newza2za2_1708 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_newz00_1689),
																	BgL_oldza2za2_1696);
																{	/* Ast/venv.scm 382 */
																	bool_t BgL_test2026z00_2731;

																	if ((BgL_identz00_1682 == BgL_midz00_1697))
																		{	/* Ast/venv.scm 382 */
																			BgL_test2026z00_2731 = ((bool_t) 0);
																		}
																	else
																		{	/* Ast/venv.scm 382 */
																			if (CBOOL
																				(BGl_za2libzd2modeza2zd2zzengine_paramz00))
																				{	/* Ast/venv.scm 382 */
																					BgL_test2026z00_2731 = ((bool_t) 0);
																				}
																			else
																				{	/* Ast/venv.scm 382 */
																					BgL_test2026z00_2731 = ((bool_t) 1);
																				}
																		}
																	if (BgL_test2026z00_2731)
																		{	/* Ast/venv.scm 383 */
																			obj_t BgL_arg1627z00_1711;

																			BgL_arg1627z00_1711 =
																				CAR(((obj_t) BgL_oldza2za2_1696));
																			BGl_warningzd2overridezd2globalz12z12zzast_envz00
																				(((obj_t) BgL_newz00_1689),
																				BgL_arg1627z00_1711, BgL_srcz00_32);
																		}
																	else
																		{	/* Ast/venv.scm 382 */
																			BFALSE;
																		}
																}
																{	/* Ast/venv.scm 384 */
																	obj_t BgL_tmpz00_2740;

																	BgL_tmpz00_2740 =
																		((obj_t) BgL_bucketz00_1688);
																	SET_CDR(BgL_tmpz00_2740, BgL_newza2za2_1708);
																}
																return BgL_newz00_1689;
															}
													}
												}
											}
										}
								}
							}
					}
				}
			}
		}

	}



/* &bind-global! */
	BgL_globalz00_bglt BGl_z62bindzd2globalz12za2zzast_envz00(obj_t
		BgL_envz00_2274, obj_t BgL_idz00_2275, obj_t BgL_aliasz00_2276,
		obj_t BgL_modulez00_2277, obj_t BgL_valuez00_2278, obj_t BgL_importz00_2279,
		obj_t BgL_srcz00_2280)
	{
		{	/* Ast/venv.scm 337 */
			return
				BGl_bindzd2globalz12zc0zzast_envz00(BgL_idz00_2275, BgL_aliasz00_2276,
				BgL_modulez00_2277, ((BgL_valuez00_bglt) BgL_valuez00_2278),
				BgL_importz00_2279, BgL_srcz00_2280);
		}

	}



/* unbind-global! */
	BGL_EXPORTED_DEF obj_t BGl_unbindzd2globalz12zc0zzast_envz00(obj_t
		BgL_idz00_33, obj_t BgL_modulez00_34)
	{
		{	/* Ast/venv.scm 390 */
			{	/* Ast/venv.scm 391 */
				obj_t BgL_globalz00_1725;

				{	/* Ast/venv.scm 391 */
					obj_t BgL_list1685z00_1744;

					BgL_list1685z00_1744 = MAKE_YOUNG_PAIR(BgL_modulez00_34, BNIL);
					BgL_globalz00_1725 =
						BGl_findzd2globalzd2zzast_envz00(BgL_idz00_33,
						BgL_list1685z00_1744);
				}
				if (BGl_isazf3zf3zz__objectz00(BgL_globalz00_1725,
						BGl_globalz00zzast_varz00))
					{	/* Ast/venv.scm 394 */
						obj_t BgL_bucketz00_1727;

						BgL_bucketz00_1727 =
							BGl_hashtablezd2getzd2zz__hashz00(BGl_za2Genvza2z00zzast_envz00,
							BgL_idz00_33);
						{	/* Ast/venv.scm 395 */
							obj_t BgL_g1116z00_1728;

							BgL_g1116z00_1728 = CDR(((obj_t) BgL_bucketz00_1727));
							{
								obj_t BgL_curz00_1730;
								obj_t BgL_prevz00_1731;

								BgL_curz00_1730 = BgL_g1116z00_1728;
								BgL_prevz00_1731 = BgL_bucketz00_1727;
							BgL_zc3z04anonymousza31647ze3z87_1732:
								if ((CAR(((obj_t) BgL_curz00_1730)) == BgL_globalz00_1725))
									{	/* Ast/venv.scm 398 */
										obj_t BgL_arg1662z00_1735;

										BgL_arg1662z00_1735 = CDR(((obj_t) BgL_curz00_1730));
										{	/* Ast/venv.scm 398 */
											obj_t BgL_tmpz00_2758;

											BgL_tmpz00_2758 = ((obj_t) BgL_prevz00_1731);
											return SET_CDR(BgL_tmpz00_2758, BgL_arg1662z00_1735);
										}
									}
								else
									{	/* Ast/venv.scm 399 */
										obj_t BgL_arg1663z00_1736;
										obj_t BgL_arg1664z00_1737;

										BgL_arg1663z00_1736 = CDR(((obj_t) BgL_curz00_1730));
										BgL_arg1664z00_1737 = CDR(((obj_t) BgL_prevz00_1731));
										{
											obj_t BgL_prevz00_2766;
											obj_t BgL_curz00_2765;

											BgL_curz00_2765 = BgL_arg1663z00_1736;
											BgL_prevz00_2766 = BgL_arg1664z00_1737;
											BgL_prevz00_1731 = BgL_prevz00_2766;
											BgL_curz00_1730 = BgL_curz00_2765;
											goto BgL_zc3z04anonymousza31647ze3z87_1732;
										}
									}
							}
						}
					}
				else
					{	/* Ast/venv.scm 393 */
						obj_t BgL_arg1669z00_1740;

						{	/* Ast/venv.scm 393 */
							obj_t BgL_arg1672z00_1742;

							{	/* Ast/venv.scm 393 */
								obj_t BgL_arg1684z00_1743;

								BgL_arg1684z00_1743 = MAKE_YOUNG_PAIR(BgL_modulez00_34, BNIL);
								BgL_arg1672z00_1742 =
									MAKE_YOUNG_PAIR(BgL_idz00_33, BgL_arg1684z00_1743);
							}
							BgL_arg1669z00_1740 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
								BgL_arg1672z00_1742);
						}
						return
							BGl_userzd2errorzd2zztools_errorz00(BGl_string1930z00zzast_envz00,
							BGl_string1931z00zzast_envz00, BgL_arg1669z00_1740, BNIL);
					}
			}
		}

	}



/* &unbind-global! */
	obj_t BGl_z62unbindzd2globalz12za2zzast_envz00(obj_t BgL_envz00_2281,
		obj_t BgL_idz00_2282, obj_t BgL_modulez00_2283)
	{
		{	/* Ast/venv.scm 390 */
			return
				BGl_unbindzd2globalz12zc0zzast_envz00(BgL_idz00_2282,
				BgL_modulez00_2283);
		}

	}



/* for-each-global! */
	BGL_EXPORTED_DEF obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t
		BgL_procz00_35, obj_t BgL_envz00_36)
	{
		{	/* Ast/venv.scm 404 */
			{	/* Ast/venv.scm 405 */
				obj_t BgL_arg1686z00_1745;

				if (NULLP(BgL_envz00_36))
					{	/* Ast/venv.scm 405 */
						BgL_arg1686z00_1745 = BGl_za2Genvza2z00zzast_envz00;
					}
				else
					{	/* Ast/venv.scm 405 */
						BgL_arg1686z00_1745 = CAR(((obj_t) BgL_envz00_36));
					}
				{	/* Ast/venv.scm 406 */
					obj_t BgL_zc3z04anonymousza31689ze3z87_2284;

					BgL_zc3z04anonymousza31689ze3z87_2284 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31689ze3ze5zzast_envz00,
						(int) (((long) 2)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31689ze3z87_2284,
						(int) (((long) 0)), BgL_procz00_35);
					return
						BGl_hashtablezd2forzd2eachz00zz__hashz00(BgL_arg1686z00_1745,
						BgL_zc3z04anonymousza31689ze3z87_2284);
				}
			}
		}

	}



/* &for-each-global! */
	obj_t BGl_z62forzd2eachzd2globalz12z70zzast_envz00(obj_t BgL_envz00_2285,
		obj_t BgL_procz00_2286, obj_t BgL_envz00_2287)
	{
		{	/* Ast/venv.scm 404 */
			return
				BGl_forzd2eachzd2globalz12z12zzast_envz00(BgL_procz00_2286,
				BgL_envz00_2287);
		}

	}



/* &<@anonymous:1689> */
	obj_t BGl_z62zc3z04anonymousza31689ze3ze5zzast_envz00(obj_t BgL_envz00_2288,
		obj_t BgL_kz00_2290, obj_t BgL_bucketz00_2291)
	{
		{	/* Ast/venv.scm 406 */
			{	/* Ast/venv.scm 406 */
				obj_t BgL_procz00_2289;

				BgL_procz00_2289 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2288, (int) (((long) 0))));
				{	/* Ast/venv.scm 406 */
					bool_t BgL_tmpz00_2787;

					{	/* Ast/venv.scm 406 */
						obj_t BgL_g1297z00_2340;

						BgL_g1297z00_2340 = CDR(((obj_t) BgL_bucketz00_2291));
						{
							obj_t BgL_l1295z00_2342;

							BgL_l1295z00_2342 = BgL_g1297z00_2340;
						BgL_zc3z04anonymousza31690ze3z87_2341:
							if (PAIRP(BgL_l1295z00_2342))
								{	/* Ast/venv.scm 406 */
									{	/* Ast/venv.scm 406 */
										obj_t BgL_arg1692z00_2343;

										BgL_arg1692z00_2343 = CAR(BgL_l1295z00_2342);
										PROCEDURE_ENTRY(BgL_procz00_2289) (BgL_procz00_2289,
											BgL_arg1692z00_2343, BEOA);
									}
									{
										obj_t BgL_l1295z00_2797;

										BgL_l1295z00_2797 = CDR(BgL_l1295z00_2342);
										BgL_l1295z00_2342 = BgL_l1295z00_2797;
										goto BgL_zc3z04anonymousza31690ze3z87_2341;
									}
								}
							else
								{	/* Ast/venv.scm 406 */
									BgL_tmpz00_2787 = ((bool_t) 1);
								}
						}
					}
					return BBOOL(BgL_tmpz00_2787);
				}
			}
		}

	}



/* global-bucket-position */
	BGL_EXPORTED_DEF obj_t BGl_globalzd2bucketzd2positionz00zzast_envz00(obj_t
		BgL_idz00_37, obj_t BgL_modulez00_38)
	{
		{	/* Ast/venv.scm 411 */
			{	/* Ast/venv.scm 412 */
				obj_t BgL_bucketz00_1760;

				BgL_bucketz00_1760 =
					BGl_hashtablezd2getzd2zz__hashz00(BGl_za2Genvza2z00zzast_envz00,
					BgL_idz00_37);
				if (PAIRP(BgL_bucketz00_1760))
					{	/* Ast/venv.scm 415 */
						obj_t BgL_g1117z00_1762;

						BgL_g1117z00_1762 = CDR(BgL_bucketz00_1760);
						{
							obj_t BgL_globalsz00_1764;
							long BgL_posz00_1765;

							{	/* Ast/venv.scm 415 */
								long BgL_tmpz00_2804;

								BgL_globalsz00_1764 = BgL_g1117z00_1762;
								BgL_posz00_1765 = ((long) 0);
							BgL_zc3z04anonymousza31697ze3z87_1766:
								if (NULLP(BgL_globalsz00_1764))
									{	/* Ast/venv.scm 418 */
										BgL_tmpz00_2804 = ((long) -1);
									}
								else
									{	/* Ast/venv.scm 418 */
										if (
											((((BgL_globalz00_bglt) COBJECT(
															((BgL_globalz00_bglt)
																CAR(
																	((obj_t) BgL_globalsz00_1764)))))->
													BgL_modulez00) == BgL_modulez00_38))
											{	/* Ast/venv.scm 420 */
												BgL_tmpz00_2804 = BgL_posz00_1765;
											}
										else
											{	/* Ast/venv.scm 423 */
												obj_t BgL_arg1711z00_1771;
												long BgL_arg1712z00_1772;

												BgL_arg1711z00_1771 =
													CDR(((obj_t) BgL_globalsz00_1764));
												BgL_arg1712z00_1772 = (BgL_posz00_1765 + ((long) 1));
												{
													long BgL_posz00_2817;
													obj_t BgL_globalsz00_2816;

													BgL_globalsz00_2816 = BgL_arg1711z00_1771;
													BgL_posz00_2817 = BgL_arg1712z00_1772;
													BgL_posz00_1765 = BgL_posz00_2817;
													BgL_globalsz00_1764 = BgL_globalsz00_2816;
													goto BgL_zc3z04anonymousza31697ze3z87_1766;
												}
											}
									}
								return BINT(BgL_tmpz00_2804);
							}
						}
					}
				else
					{	/* Ast/venv.scm 413 */
						return BINT(((long) -1));
		}}}

	}



/* &global-bucket-position */
	obj_t BGl_z62globalzd2bucketzd2positionz62zzast_envz00(obj_t BgL_envz00_2292,
		obj_t BgL_idz00_2293, obj_t BgL_modulez00_2294)
	{
		{	/* Ast/venv.scm 411 */
			return
				BGl_globalzd2bucketzd2positionz00zzast_envz00(BgL_idz00_2293,
				BgL_modulez00_2294);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_envz00()
	{
		{	/* Ast/venv.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_envz00()
	{
		{	/* Ast/venv.scm 14 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_restorezd2valuezd2typesz12zd2envzc0zzast_envz00,
				BGl_proc1932z00zzast_envz00, BGl_valuez00zzast_varz00,
				BGl_string1933z00zzast_envz00);
		}

	}



/* &restore-value-types!1298 */
	obj_t BGl_z62restorezd2valuezd2typesz121298z70zzast_envz00(obj_t
		BgL_envz00_2296, obj_t BgL_valuez00_2297)
	{
		{	/* Ast/venv.scm 153 */
			return BUNSPEC;
		}

	}



/* restore-value-types! */
	obj_t BGl_restorezd2valuezd2typesz12z12zzast_envz00(BgL_valuez00_bglt
		BgL_valuez00_9)
	{
		{	/* Ast/venv.scm 153 */
			{	/* Ast/venv.scm 153 */
				obj_t BgL_method1299z00_1780;

				{	/* Ast/venv.scm 153 */
					obj_t BgL_res1915z00_2219;

					{	/* Ast/venv.scm 153 */
						long BgL_objzd2classzd2numz00_2184;

						{	/* Ast/venv.scm 153 */
							long BgL_res1905z00_2187;

							BgL_res1905z00_2187 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_valuez00_9));
							BgL_objzd2classzd2numz00_2184 = BgL_res1905z00_2187;
						}
						{	/* Ast/venv.scm 153 */
							obj_t BgL_arg1813z00_2185;

							BgL_arg1813z00_2185 =
								PROCEDURE_REF
								(BGl_restorezd2valuezd2typesz12zd2envzc0zzast_envz00,
								(int) (((long) 1)));
							{	/* Ast/venv.scm 153 */
								int BgL_offsetz00_2189;

								BgL_offsetz00_2189 = (int) (BgL_objzd2classzd2numz00_2184);
								{	/* Ast/venv.scm 153 */
									long BgL_offsetz00_2190;

									BgL_offsetz00_2190 =
										((long) (BgL_offsetz00_2189) - OBJECT_TYPE);
									{	/* Ast/venv.scm 153 */
										long BgL_modz00_2191;

										BgL_modz00_2191 =
											(BgL_offsetz00_2190 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/venv.scm 153 */
											long BgL_restz00_2193;

											BgL_restz00_2193 =
												(BgL_offsetz00_2190 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/venv.scm 153 */

												{	/* Ast/venv.scm 153 */
													obj_t BgL_bucketz00_2195;

													BgL_bucketz00_2195 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2185), BgL_modz00_2191);
													BgL_res1915z00_2219 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2195), BgL_restz00_2193);
					}}}}}}}}
					BgL_method1299z00_1780 = BgL_res1915z00_2219;
				}
				return
					PROCEDURE_ENTRY(BgL_method1299z00_1780) (BgL_method1299z00_1780,
					((obj_t) BgL_valuez00_9), BEOA);
			}
		}

	}



/* &restore-value-types! */
	obj_t BGl_z62restorezd2valuezd2typesz12z70zzast_envz00(obj_t BgL_envz00_2298,
		obj_t BgL_valuez00_2299)
	{
		{	/* Ast/venv.scm 153 */
			return
				BGl_restorezd2valuezd2typesz12z12zzast_envz00(
				((BgL_valuez00_bglt) BgL_valuez00_2299));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_envz00()
	{
		{	/* Ast/venv.scm 14 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_restorezd2valuezd2typesz12zd2envzc0zzast_envz00,
				BGl_funz00zzast_varz00, BGl_proc1934z00zzast_envz00,
				BGl_string1935z00zzast_envz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_restorezd2valuezd2typesz12zd2envzc0zzast_envz00,
				BGl_sfunz00zzast_varz00, BGl_proc1936z00zzast_envz00,
				BGl_string1935z00zzast_envz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_restorezd2valuezd2typesz12zd2envzc0zzast_envz00,
				BGl_isfunz00zzinline_inlinez00, BGl_proc1937z00zzast_envz00,
				BGl_string1935z00zzast_envz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_restorezd2valuezd2typesz12zd2envzc0zzast_envz00,
				BGl_cfunz00zzast_varz00, BGl_proc1938z00zzast_envz00,
				BGl_string1935z00zzast_envz00);
		}

	}



/* &restore-value-types!1307 */
	obj_t BGl_z62restorezd2valuezd2typesz121307z70zzast_envz00(obj_t
		BgL_envz00_2304, obj_t BgL_valuez00_2305)
	{
		{	/* Ast/venv.scm 208 */
			{	/* Ast/venv.scm 208 */
				bool_t BgL_tmpz00_2858;

				{

					{	/* Ast/venv.scm 208 */
						obj_t BgL_nextzd2method1306zd2_2347;

						BgL_nextzd2method1306zd2_2347 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							((BgL_objectz00_bglt)
								((BgL_cfunz00_bglt) BgL_valuez00_2305)),
							BGl_restorezd2valuezd2typesz12zd2envzc0zzast_envz00,
							BGl_cfunz00zzast_varz00);
						PROCEDURE_ENTRY(BgL_nextzd2method1306zd2_2347)
							(BgL_nextzd2method1306zd2_2347,
							((obj_t) ((BgL_cfunz00_bglt) BgL_valuez00_2305)), BEOA);
					}
					{
						obj_t BgL_argsz00_2349;

						BgL_argsz00_2349 =
							(((BgL_cfunz00_bglt) COBJECT(
									((BgL_cfunz00_bglt) BgL_valuez00_2305)))->BgL_argszd2typezd2);
					BgL_loopz00_2348:
						if (PAIRP(BgL_argsz00_2349))
							{	/* Ast/venv.scm 212 */
								{	/* Ast/venv.scm 214 */
									BgL_typez00_bglt BgL_arg1768z00_2350;

									{	/* Ast/venv.scm 214 */
										obj_t BgL_arg1771z00_2351;

										BgL_arg1771z00_2351 =
											(((BgL_typez00_bglt) COBJECT(
													((BgL_typez00_bglt)
														CAR(BgL_argsz00_2349))))->BgL_idz00);
										BgL_arg1768z00_2350 =
											BGl_findzd2typezd2zztype_envz00(BgL_arg1771z00_2351);
									}
									{	/* Ast/venv.scm 214 */
										obj_t BgL_tmpz00_2874;

										BgL_tmpz00_2874 = ((obj_t) BgL_arg1768z00_2350);
										SET_CAR(BgL_argsz00_2349, BgL_tmpz00_2874);
									}
								}
								{
									obj_t BgL_argsz00_2877;

									BgL_argsz00_2877 = CDR(BgL_argsz00_2349);
									BgL_argsz00_2349 = BgL_argsz00_2877;
									goto BgL_loopz00_2348;
								}
							}
						else
							{	/* Ast/venv.scm 212 */
								BgL_tmpz00_2858 = ((bool_t) 0);
							}
					}
				}
				return BBOOL(BgL_tmpz00_2858);
			}
		}

	}



/* &restore-value-types!1305 */
	obj_t BGl_z62restorezd2valuezd2typesz121305z70zzast_envz00(obj_t
		BgL_envz00_2306, obj_t BgL_valuez00_2307)
	{
		{	/* Ast/venv.scm 201 */
			{

				{	/* Ast/venv.scm 201 */
					obj_t BgL_nextzd2method1304zd2_2354;

					BgL_nextzd2method1304zd2_2354 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_sfunz00_bglt) BgL_valuez00_2307)),
						BGl_restorezd2valuezd2typesz12zd2envzc0zzast_envz00,
						BGl_isfunz00zzinline_inlinez00);
					PROCEDURE_ENTRY(BgL_nextzd2method1304zd2_2354)
						(BgL_nextzd2method1304zd2_2354,
						((obj_t) ((BgL_sfunz00_bglt) BgL_valuez00_2307)), BEOA);
				}
				{	/* Ast/venv.scm 203 */
					BgL_nodez00_bglt BgL_arg1757z00_2355;

					{
						BgL_isfunz00_bglt BgL_auxz00_2891;

						{
							obj_t BgL_auxz00_2892;

							{	/* Ast/venv.scm 203 */
								BgL_objectz00_bglt BgL_tmpz00_2893;

								BgL_tmpz00_2893 =
									((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_valuez00_2307));
								BgL_auxz00_2892 = BGL_OBJECT_WIDENING(BgL_tmpz00_2893);
							}
							BgL_auxz00_2891 = ((BgL_isfunz00_bglt) BgL_auxz00_2892);
						}
						BgL_arg1757z00_2355 =
							(((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_2891))->
							BgL_originalzd2bodyzd2);
					}
					return BGl_hrtypezd2nodez12zc0zzast_hrtypez00(BgL_arg1757z00_2355);
				}
			}
		}

	}



/* &restore-value-types!1303 */
	obj_t BGl_z62restorezd2valuezd2typesz121303z70zzast_envz00(obj_t
		BgL_envz00_2308, obj_t BgL_valuez00_2309)
	{
		{	/* Ast/venv.scm 167 */
			{

				{	/* Ast/venv.scm 167 */
					obj_t BgL_nextzd2method1302zd2_2358;

					BgL_nextzd2method1302zd2_2358 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_sfunz00_bglt) BgL_valuez00_2309)),
						BGl_restorezd2valuezd2typesz12zd2envzc0zzast_envz00,
						BGl_sfunz00zzast_varz00);
					PROCEDURE_ENTRY(BgL_nextzd2method1302zd2_2358)
						(BgL_nextzd2method1302zd2_2358,
						((obj_t) ((BgL_sfunz00_bglt) BgL_valuez00_2309)), BEOA);
				}
				{
					obj_t BgL_argsz00_2360;

					BgL_argsz00_2360 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt) BgL_valuez00_2309)))->BgL_argsz00);
				BgL_loopz00_2359:
					if (PAIRP(BgL_argsz00_2360))
						{	/* Ast/venv.scm 173 */
							obj_t BgL_argz00_2361;

							BgL_argz00_2361 = CAR(BgL_argsz00_2360);
							if (BGl_isazf3zf3zz__objectz00(BgL_argz00_2361,
									BGl_typez00zztype_typez00))
								{	/* Ast/venv.scm 176 */
									BgL_typez00_bglt BgL_arg1738z00_2362;

									{	/* Ast/venv.scm 176 */
										obj_t BgL_arg1739z00_2363;

										BgL_arg1739z00_2363 =
											(((BgL_typez00_bglt) COBJECT(
													((BgL_typez00_bglt) BgL_argz00_2361)))->BgL_idz00);
										BgL_arg1738z00_2362 =
											BGl_findzd2typezd2zztype_envz00(BgL_arg1739z00_2363);
									}
									{	/* Ast/venv.scm 176 */
										obj_t BgL_tmpz00_2917;

										BgL_tmpz00_2917 = ((obj_t) BgL_arg1738z00_2362);
										SET_CAR(BgL_argsz00_2360, BgL_tmpz00_2917);
									}
								}
							else
								{	/* Ast/venv.scm 175 */
									if (BGl_isazf3zf3zz__objectz00(BgL_argz00_2361,
											BGl_localz00zzast_varz00))
										{	/* Ast/venv.scm 178 */
											BgL_typez00_bglt BgL_newzd2typezd2_2364;

											{	/* Ast/venv.scm 178 */
												obj_t BgL_arg1741z00_2365;

												BgL_arg1741z00_2365 =
													(((BgL_typez00_bglt) COBJECT(
															(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_localz00_bglt) BgL_argz00_2361))))->
																BgL_typez00)))->BgL_idz00);
												BgL_newzd2typezd2_2364 =
													BGl_findzd2typezd2zztype_envz00(BgL_arg1741z00_2365);
											}
											((((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_localz00_bglt) BgL_argz00_2361))))->
													BgL_typez00) =
												((BgL_typez00_bglt) BgL_newzd2typezd2_2364), BUNSPEC);
										}
									else
										{	/* Ast/venv.scm 177 */
											BGl_errorz00zz__errorz00(BGl_string1939z00zzast_envz00,
												BGl_string1940z00zzast_envz00,
												BGl_shapez00zztools_shapez00(BgL_argz00_2361));
										}
								}
							{
								obj_t BgL_argsz00_2932;

								BgL_argsz00_2932 = CDR(BgL_argsz00_2360);
								BgL_argsz00_2360 = BgL_argsz00_2932;
								goto BgL_loopz00_2359;
							}
						}
					else
						{	/* Ast/venv.scm 172 */
							if (NULLP(BgL_argsz00_2360))
								{	/* Ast/venv.scm 186 */
									obj_t BgL_bodyz00_2366;

									BgL_bodyz00_2366 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_valuez00_2309)))->BgL_bodyz00);
									if (BGl_isazf3zf3zz__objectz00(BgL_bodyz00_2366,
											BGl_nodez00zzast_nodez00))
										{	/* Ast/venv.scm 189 */
											BgL_typez00_bglt BgL_tresz00_2367;

											BgL_tresz00_2367 =
												(((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_bodyz00_2366)))->
												BgL_typez00);
											BGl_hrtypezd2nodez12zc0zzast_hrtypez00(((BgL_nodez00_bglt)
													BgL_bodyz00_2366));
											{	/* Ast/venv.scm 192 */
												BgL_typez00_bglt BgL_arg1754z00_2368;

												BgL_arg1754z00_2368 =
													BGl_findzd2typezd2zztype_envz00(
													(((BgL_typez00_bglt) COBJECT(BgL_tresz00_2367))->
														BgL_idz00));
												return ((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																	BgL_bodyz00_2366)))->BgL_typez00) =
													((BgL_typez00_bglt) BgL_arg1754z00_2368), BUNSPEC);
											}
										}
									else
										{	/* Ast/venv.scm 188 */
											return BFALSE;
										}
								}
							else
								{	/* Ast/venv.scm 185 */
									return
										BGl_errorz00zz__errorz00(BGl_string1941z00zzast_envz00,
										BGl_string1942z00zzast_envz00,
										BGl_shapez00zztools_shapez00(BgL_argsz00_2360));
								}
						}
				}
			}
		}

	}



/* &restore-value-types!1301 */
	obj_t BGl_z62restorezd2valuezd2typesz121301z70zzast_envz00(obj_t
		BgL_envz00_2310, obj_t BgL_valuez00_2311)
	{
		{	/* Ast/venv.scm 159 */
			{	/* Ast/venv.scm 161 */
				bool_t BgL_test2042z00_2952;

				{	/* Ast/venv.scm 161 */
					obj_t BgL_arg1732z00_2370;

					BgL_arg1732z00_2370 =
						(((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt) BgL_valuez00_2311)))->BgL_predicatezd2ofzd2);
					BgL_test2042z00_2952 =
						BGl_isazf3zf3zz__objectz00(BgL_arg1732z00_2370,
						BGl_typez00zztype_typez00);
				}
				if (BgL_test2042z00_2952)
					{
						obj_t BgL_auxz00_2956;

						{	/* Ast/venv.scm 162 */
							obj_t BgL_arg1729z00_2371;

							BgL_arg1729z00_2371 =
								(((BgL_typez00_bglt) COBJECT(
										((BgL_typez00_bglt)
											(((BgL_funz00_bglt) COBJECT(
														((BgL_funz00_bglt) BgL_valuez00_2311)))->
												BgL_predicatezd2ofzd2))))->BgL_idz00);
							BgL_auxz00_2956 =
								((obj_t) BGl_findzd2typezd2zztype_envz00(BgL_arg1729z00_2371));
						}
						return
							((((BgL_funz00_bglt) COBJECT(
										((BgL_funz00_bglt) BgL_valuez00_2311)))->
								BgL_predicatezd2ofzd2) = ((obj_t) BgL_auxz00_2956), BUNSPEC);
					}
				else
					{	/* Ast/venv.scm 161 */
						return BFALSE;
					}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_envz00()
	{
		{	/* Ast/venv.scm 14 */
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1943z00zzast_envz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1943z00zzast_envz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1943z00zzast_envz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1943z00zzast_envz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1943z00zzast_envz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1943z00zzast_envz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1943z00zzast_envz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1943z00zzast_envz00));
			BGl_modulezd2initializa7ationz75zzast_hrtypez00(((long) 156957727),
				BSTRING_TO_STRING(BGl_string1943z00zzast_envz00));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string1943z00zzast_envz00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 261574455),
				BSTRING_TO_STRING(BGl_string1943z00zzast_envz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1943z00zzast_envz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1943z00zzast_envz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1943z00zzast_envz00));
			return
				BGl_modulezd2initializa7ationz75zzinline_inlinez00(((long) 20504998),
				BSTRING_TO_STRING(BGl_string1943z00zzast_envz00));
		}

	}

#ifdef __cplusplus
}
#endif
