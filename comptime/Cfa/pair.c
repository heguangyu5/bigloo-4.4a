/*===========================================================================*/
/*   (Cfa/pair.scm)                                                          */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/pair.scm) */
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

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

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

	typedef struct BgL_prezd2conszd2appz00_bgl
	{
		struct BgL_variablez00_bgl *BgL_ownerz00;
	}                          *BgL_prezd2conszd2appz00_bglt;

	typedef struct BgL_prezd2conszd2refzd2appzd2_bgl
	{
		obj_t BgL_getz00;
	}                                *BgL_prezd2conszd2refzd2appzd2_bglt;

	typedef struct BgL_prezd2conszd2setz12zd2appzc0_bgl
	{
		obj_t BgL_getz00;
	}                                   *BgL_prezd2conszd2setz12zd2appzc0_bglt;

	typedef struct BgL_conszd2appzd2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		obj_t BgL_approxesz00;
		long BgL_lostzd2stampzd2;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		obj_t BgL_stackzd2stampzd2;
		bool_t BgL_seenzf3zf3;
	}                    *BgL_conszd2appzd2_bglt;

	typedef struct BgL_conszd2refzd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		obj_t BgL_getz00;
	}                          *BgL_conszd2refzd2appz00_bglt;

	typedef struct BgL_conszd2setz12zd2appz12_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		obj_t BgL_getz00;
	}                             *BgL_conszd2setz12zd2appz12_bglt;


	extern obj_t
		BGl_za2optimzd2cfazd2pairzd2quotezd2maxzd2lengthza2zd2zzengine_paramz00;
	static obj_t BGl_z62unpatchzd2pairzd2setz12z70zzcfa_pairz00(obj_t);
	static obj_t BGl_z62patchzd2pairzd2setz12z70zzcfa_pairz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzcfa_pairz00();
	extern obj_t BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00(obj_t,
		BgL_approxz00_bglt);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_pairzd2optimzd2quotezd2maxlenzd2zzcfa_pairz00();
	static obj_t BGl_methodzd2initzd2zzcfa_pairz00();
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2conszd2refzd2app1575za2zzcfa_pairz00(obj_t, obj_t);
	extern BgL_typez00_bglt
		BGl_getzd2bigloozd2typez00zztype_cachez00(BgL_typez00_bglt);
	extern obj_t BGl_prezd2conszd2refzd2appzd2zzcfa_info2z00;
	static obj_t BGl_z62nodezd2setupz12zd2prezd2cons1567za2zzcfa_pairz00(obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2setupz12zd2prezd2cons1569za2zzcfa_pairz00(obj_t,
		obj_t);
	static obj_t BGl_z62loosezd2allocz12zd2conszd2ap1579za2zzcfa_pairz00(obj_t,
		obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_z62nodezd2setupz12zd2prezd2cons1571za2zzcfa_pairz00(obj_t,
		obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	extern BgL_approxz00_bglt
		BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt);
	static obj_t BGl_gczd2rootszd2initz00zzcfa_pairz00();
	extern BgL_approxz00_bglt BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
	BGL_EXPORTED_DECL obj_t BGl_unpatchzd2pairzd2setz12z12zzcfa_pairz00();
	extern obj_t BGl_prezd2conszd2setz12zd2appzc0zzcfa_info2z00;
	static obj_t BGl_z62pairzd2optimzd2quotezd2maxlenzb0zzcfa_pairz00(obj_t);
	extern obj_t BGl_conszd2setz12zd2appz12zzcfa_info2z00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2cfazd2stampza2zd2zzcfa_iteratez00;
	static obj_t BGl_z62zc3z04anonymousza31762ze3ze5zzcfa_pairz00(obj_t, obj_t);
	extern obj_t BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_approxz00_bglt);
	extern obj_t BGl_za2optimzd2cfazd2pairzf3za2zf3zzengine_paramz00;
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	extern obj_t BGl_nodezd2setupza2z12z62zzcfa_setupz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_pairz00 = BUNSPEC;
	extern obj_t BGl_conszd2appzd2zzcfa_info2z00;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	BGL_EXPORTED_DECL bool_t BGl_pairzd2optimzf3z21zzcfa_pairz00();
	BGL_EXPORTED_DECL obj_t BGl_patchzd2pairzd2setz12z12zzcfa_pairz00();
	static obj_t BGl_toplevelzd2initzd2zzcfa_pairz00();
	static obj_t BGl_genericzd2initzd2zzcfa_pairz00();
	extern BgL_typez00_bglt BGl_getzd2defaultzd2typez00zztype_cachez00();
	extern obj_t BGl_conszd2refzd2appz00zzcfa_info2z00;
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2conszd2app1573z70zzcfa_pairz00(obj_t, obj_t);
	extern BgL_approxz00_bglt BGl_loosez12z12zzcfa_loosez00(BgL_approxz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62pairzd2optimzf3z43zzcfa_pairz00(obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	extern BgL_approxz00_bglt
		BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00(BgL_typez00_bglt,
		BgL_nodez00_bglt);
	extern obj_t BGl_za2pairza2z00zztype_cachez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_pairz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_setupz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_cfaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_iteratez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_loosez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
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
	static obj_t BGl_cnstzd2initzd2zzcfa_pairz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_pairz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_pairz00();
	extern BgL_approxz00_bglt
		BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_typez00_bglt);
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	extern obj_t BGl_prezd2conszd2appz00zzcfa_info2z00;
	static obj_t BGl_z62zc3z04anonymousza31809ze3ze5zzcfa_pairz00(obj_t, obj_t);
	extern BgL_approxz00_bglt BGl_cfaz12z12zzcfa_cfaz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2conszd2setz12zd2app1577zb0zzcfa_pairz00(obj_t, obj_t);
	extern obj_t BGl_approxzd2setzd2typez12z12zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[4];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2082z00zzcfa_pairz00,
		BgL_bgl_za762nodeza7d2setupza72097za7,
		BGl_z62nodezd2setupz12zd2prezd2cons1567za2zzcfa_pairz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2084z00zzcfa_pairz00,
		BgL_bgl_za762nodeza7d2setupza72098za7,
		BGl_z62nodezd2setupz12zd2prezd2cons1569za2zzcfa_pairz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2085z00zzcfa_pairz00,
		BgL_bgl_za762nodeza7d2setupza72099za7,
		BGl_z62nodezd2setupz12zd2prezd2cons1571za2zzcfa_pairz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2086z00zzcfa_pairz00,
		BgL_bgl_za762cfaza712za7d2cons2100za7,
		BGl_z62cfaz12zd2conszd2app1573z70zzcfa_pairz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2088z00zzcfa_pairz00,
		BgL_bgl_za762cfaza712za7d2cons2101za7,
		BGl_z62cfaz12zd2conszd2refzd2app1575za2zzcfa_pairz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2089z00zzcfa_pairz00,
		BgL_bgl_za762cfaza712za7d2cons2102za7,
		BGl_z62cfaz12zd2conszd2setz12zd2app1577zb0zzcfa_pairz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2090z00zzcfa_pairz00,
		BgL_bgl_za762looseza7d2alloc2103z00,
		BGl_z62loosezd2allocz12zd2conszd2ap1579za2zzcfa_pairz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pairzd2optimzf3zd2envzf3zzcfa_pairz00,
		BgL_bgl_za762pairza7d2optimza72104za7,
		BGl_z62pairzd2optimzf3z43zzcfa_pairz00, 0L, BUNSPEC, 0);
	extern obj_t BGl_cfaz12zd2envzc0zzcfa_cfaz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unpatchzd2pairzd2setz12zd2envzc0zzcfa_pairz00,
		BgL_bgl_za762unpatchza7d2pai2105z00,
		BGl_z62unpatchzd2pairzd2setz12z70zzcfa_pairz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_patchzd2pairzd2setz12zd2envzc0zzcfa_pairz00,
		BgL_bgl_za762patchza7d2pairza72106za7,
		BGl_z62patchzd2pairzd2setz12z70zzcfa_pairz00, 0L, BUNSPEC, 0);
	extern obj_t BGl_nodezd2setupz12zd2envz12zzcfa_setupz00;
	   
		 
		DEFINE_STRING(BGl_string2083z00zzcfa_pairz00,
		BgL_bgl_string2083za700za7za7c2107za7, "node-setup!", 11);
	      DEFINE_STRING(BGl_string2087z00zzcfa_pairz00,
		BgL_bgl_string2087za700za7za7c2108za7, "cfa!::approx", 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pairzd2optimzd2quotezd2maxlenzd2envz00zzcfa_pairz00,
		BgL_bgl_za762pairza7d2optimza72109za7,
		BGl_z62pairzd2optimzd2quotezd2maxlenzb0zzcfa_pairz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2091z00zzcfa_pairz00,
		BgL_bgl_string2091za700za7za7c2110za7, "loose-alloc!", 12);
	      DEFINE_STRING(BGl_string2092z00zzcfa_pairz00,
		BgL_bgl_string2092za700za7za7c2111za7, "cfa_pair", 8);
	      DEFINE_STRING(BGl_string2093z00zzcfa_pairz00,
		BgL_bgl_string2093za700za7za7c2112za7,
		"all pair? $pair? ((@ cons __r4_pairs_and_lists_6_3) (@ set-car! __r4_pairs_and_lists_6_3) (@ set-cdr! __r4_pairs_and_lists_6_3) (@ $cons foreign) (@ $set-car! foreign) (@ $set-cdr! foreign)) ",
		191);
	extern obj_t BGl_loosezd2allocz12zd2envz12zzcfa_loosez00;

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcfa_pairz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_pairz00(long
		BgL_checksumz00_4380, char *BgL_fromz00_4381)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_pairz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_pairz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcfa_pairz00();
					BGl_libraryzd2moduleszd2initz00zzcfa_pairz00();
					BGl_cnstzd2initzd2zzcfa_pairz00();
					BGl_importedzd2moduleszd2initz00zzcfa_pairz00();
					BGl_methodzd2initzd2zzcfa_pairz00();
					return BGl_toplevelzd2initzd2zzcfa_pairz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_pairz00()
	{
		{	/* Cfa/pair.scm 17 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_pair");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_pair");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cfa_pair");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cfa_pair");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cfa_pair");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_pair");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_pair");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_pairz00()
	{
		{	/* Cfa/pair.scm 17 */
			{	/* Cfa/pair.scm 17 */
				obj_t BgL_cportz00_4256;

				{	/* Cfa/pair.scm 17 */
					obj_t BgL_stringz00_4264;

					BgL_stringz00_4264 = BGl_string2093z00zzcfa_pairz00;
					{	/* Cfa/pair.scm 17 */
						obj_t BgL_startz00_4265;

						BgL_startz00_4265 = BINT(((long) 0));
						{	/* Cfa/pair.scm 17 */
							obj_t BgL_endz00_4266;

							BgL_endz00_4266 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_4264)));
							{	/* Cfa/pair.scm 17 */

								BgL_cportz00_4256 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_4264, BgL_startz00_4265, BgL_endz00_4266);
				}}}}
				{
					long BgL_iz00_4257;

					BgL_iz00_4257 = ((long) 3);
				BgL_loopz00_4258:
					if ((BgL_iz00_4257 == ((long) -1)))
						{	/* Cfa/pair.scm 17 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/pair.scm 17 */
							{	/* Cfa/pair.scm 17 */
								obj_t BgL_arg2095z00_4260;

								{	/* Cfa/pair.scm 17 */

									{	/* Cfa/pair.scm 17 */
										obj_t BgL_locationz00_4262;

										BgL_locationz00_4262 = BBOOL(((bool_t) 0));
										{	/* Cfa/pair.scm 17 */

											BgL_arg2095z00_4260 =
												BGl_readz00zz__readerz00(BgL_cportz00_4256,
												BgL_locationz00_4262);
										}
									}
								}
								{	/* Cfa/pair.scm 17 */
									int BgL_tmpz00_4407;

									BgL_tmpz00_4407 = (int) (BgL_iz00_4257);
									CNST_TABLE_SET(BgL_tmpz00_4407, BgL_arg2095z00_4260);
							}}
							{	/* Cfa/pair.scm 17 */
								int BgL_auxz00_4263;

								BgL_auxz00_4263 = (int) ((BgL_iz00_4257 - ((long) 1)));
								{
									long BgL_iz00_4412;

									BgL_iz00_4412 = (long) (BgL_auxz00_4263);
									BgL_iz00_4257 = BgL_iz00_4412;
									goto BgL_loopz00_4258;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcfa_pairz00()
	{
		{	/* Cfa/pair.scm 17 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_pairz00()
	{
		{	/* Cfa/pair.scm 17 */
			return BUNSPEC;
		}

	}



/* pair-optim? */
	BGL_EXPORTED_DEF bool_t BGl_pairzd2optimzf3z21zzcfa_pairz00()
	{
		{	/* Cfa/pair.scm 44 */
			if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 2)))
				{	/* Cfa/pair.scm 45 */
					return CBOOL(BGl_za2optimzd2cfazd2pairzf3za2zf3zzengine_paramz00);
				}
			else
				{	/* Cfa/pair.scm 45 */
					return ((bool_t) 0);
				}
		}

	}



/* &pair-optim? */
	obj_t BGl_z62pairzd2optimzf3z43zzcfa_pairz00(obj_t BgL_envz00_4216)
	{
		{	/* Cfa/pair.scm 44 */
			return BBOOL(BGl_pairzd2optimzf3z21zzcfa_pairz00());
		}

	}



/* pair-optim-quote-maxlen */
	BGL_EXPORTED_DEF obj_t BGl_pairzd2optimzd2quotezd2maxlenzd2zzcfa_pairz00()
	{
		{	/* Cfa/pair.scm 50 */
			return
				BGl_za2optimzd2cfazd2pairzd2quotezd2maxzd2lengthza2zd2zzengine_paramz00;
		}

	}



/* &pair-optim-quote-maxlen */
	obj_t BGl_z62pairzd2optimzd2quotezd2maxlenzb0zzcfa_pairz00(obj_t
		BgL_envz00_4217)
	{
		{	/* Cfa/pair.scm 50 */
			return BGl_pairzd2optimzd2quotezd2maxlenzd2zzcfa_pairz00();
		}

	}



/* patch-pair-set! */
	BGL_EXPORTED_DEF obj_t BGl_patchzd2pairzd2setz12z12zzcfa_pairz00()
	{
		{	/* Cfa/pair.scm 59 */
			if (BGl_pairzd2optimzf3z21zzcfa_pairz00())
				{	/* Cfa/pair.scm 62 */
					{	/* Cfa/pair.scm 63 */
						obj_t BgL_g1562z00_3237;

						BgL_g1562z00_3237 = CNST_TABLE_REF(((long) 0));
						{
							obj_t BgL_l1560z00_3239;

							BgL_l1560z00_3239 = BgL_g1562z00_3237;
						BgL_zc3z04anonymousza31586ze3z87_3240:
							if (PAIRP(BgL_l1560z00_3239))
								{	/* Cfa/pair.scm 74 */
									{	/* Cfa/pair.scm 64 */
										obj_t BgL_idz00_3242;

										BgL_idz00_3242 = CAR(BgL_l1560z00_3239);
										{	/* Cfa/pair.scm 64 */
											obj_t BgL_gz00_3243;

											{	/* Cfa/pair.scm 64 */
												obj_t BgL_arg1611z00_3256;
												obj_t BgL_arg1612z00_3257;

												{	/* Cfa/pair.scm 64 */
													obj_t BgL_pairz00_4001;

													BgL_pairz00_4001 = CDR(((obj_t) BgL_idz00_3242));
													BgL_arg1611z00_3256 = CAR(BgL_pairz00_4001);
												}
												{	/* Cfa/pair.scm 64 */
													obj_t BgL_pairz00_4007;

													{	/* Cfa/pair.scm 64 */
														obj_t BgL_pairz00_4006;

														BgL_pairz00_4006 = CDR(((obj_t) BgL_idz00_3242));
														BgL_pairz00_4007 = CDR(BgL_pairz00_4006);
													}
													BgL_arg1612z00_3257 = CAR(BgL_pairz00_4007);
												}
												BgL_gz00_3243 =
													BGl_findzd2globalzf2modulez20zzast_envz00
													(BgL_arg1611z00_3256, BgL_arg1612z00_3257);
											}
											{	/* Cfa/pair.scm 64 */
												BgL_valuez00_bglt BgL_funz00_3244;

												BgL_funz00_3244 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_globalz00_bglt) BgL_gz00_3243))))->
													BgL_valuez00);
												{	/* Cfa/pair.scm 65 */

													{	/* Cfa/pair.scm 66 */
														BgL_valuez00_bglt BgL_arg1588z00_3245;

														BgL_arg1588z00_3245 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_globalz00_bglt) BgL_gz00_3243))))->
															BgL_valuez00);
														((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																			BgL_arg1588z00_3245)))->BgL_topzf3zf3) =
															((bool_t) ((bool_t) 0)), BUNSPEC);
													}
													{	/* Cfa/pair.scm 67 */
														bool_t BgL_test2118z00_4444;

														{	/* Cfa/pair.scm 67 */
															bool_t BgL_res2058z00_4012;

															BgL_res2058z00_4012 =
																BGl_isazf3zf3zz__objectz00(
																((obj_t) BgL_funz00_3244),
																BGl_cfunz00zzast_varz00);
															BgL_test2118z00_4444 = BgL_res2058z00_4012;
														}
														if (BgL_test2118z00_4444)
															{	/* Cfa/pair.scm 68 */
																obj_t BgL_argsz00_3247;

																BgL_argsz00_3247 =
																	(((BgL_cfunz00_bglt) COBJECT(
																			((BgL_cfunz00_bglt) BgL_funz00_3244)))->
																	BgL_argszd2typezd2);
																{	/* Cfa/pair.scm 69 */
																	BgL_typez00_bglt BgL_arg1592z00_3248;

																	BgL_arg1592z00_3248 =
																		BGl_getzd2defaultzd2typez00zztype_cachez00
																		();
																	{	/* Cfa/pair.scm 69 */
																		obj_t BgL_auxz00_4452;
																		obj_t BgL_tmpz00_4450;

																		BgL_auxz00_4452 =
																			((obj_t) BgL_arg1592z00_3248);
																		BgL_tmpz00_4450 =
																			((obj_t) BgL_argsz00_3247);
																		SET_CAR(BgL_tmpz00_4450, BgL_auxz00_4452);
																	}
																}
																{	/* Cfa/pair.scm 70 */
																	obj_t BgL_arg1593z00_3249;
																	BgL_typez00_bglt BgL_arg1597z00_3250;

																	BgL_arg1593z00_3249 =
																		CDR(((obj_t) BgL_argsz00_3247));
																	BgL_arg1597z00_3250 =
																		BGl_getzd2defaultzd2typez00zztype_cachez00
																		();
																	{	/* Cfa/pair.scm 70 */
																		obj_t BgL_auxz00_4460;
																		obj_t BgL_tmpz00_4458;

																		BgL_auxz00_4460 =
																			((obj_t) BgL_arg1597z00_3250);
																		BgL_tmpz00_4458 =
																			((obj_t) BgL_arg1593z00_3249);
																		SET_CAR(BgL_tmpz00_4458, BgL_auxz00_4460);
																	}
																}
															}
														else
															{	/* Cfa/pair.scm 71 */
																obj_t BgL_argsz00_3251;

																BgL_argsz00_3251 =
																	(((BgL_sfunz00_bglt) COBJECT(
																			((BgL_sfunz00_bglt) BgL_funz00_3244)))->
																	BgL_argsz00);
																{	/* Cfa/pair.scm 72 */
																	obj_t BgL_arg1599z00_3252;
																	BgL_typez00_bglt BgL_arg1604z00_3253;

																	BgL_arg1599z00_3252 =
																		CAR(((obj_t) BgL_argsz00_3251));
																	BgL_arg1604z00_3253 =
																		BGl_getzd2defaultzd2typez00zztype_cachez00
																		();
																	((((BgL_variablez00_bglt)
																				COBJECT(((BgL_variablez00_bglt) (
																							(BgL_localz00_bglt)
																							BgL_arg1599z00_3252))))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) BgL_arg1604z00_3253),
																		BUNSPEC);
																}
																{	/* Cfa/pair.scm 73 */
																	obj_t BgL_arg1605z00_3254;
																	BgL_typez00_bglt BgL_arg1606z00_3255;

																	{	/* Cfa/pair.scm 73 */
																		obj_t BgL_pairz00_4024;

																		BgL_pairz00_4024 =
																			CDR(((obj_t) BgL_argsz00_3251));
																		BgL_arg1605z00_3254 = CAR(BgL_pairz00_4024);
																	}
																	BgL_arg1606z00_3255 =
																		BGl_getzd2defaultzd2typez00zztype_cachez00
																		();
																	((((BgL_variablez00_bglt)
																				COBJECT(((BgL_variablez00_bglt) (
																							(BgL_localz00_bglt)
																							BgL_arg1605z00_3254))))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) BgL_arg1606z00_3255),
																		BUNSPEC);
																}
															}
													}
												}
											}
										}
									}
									{
										obj_t BgL_l1560z00_4478;

										BgL_l1560z00_4478 = CDR(BgL_l1560z00_3239);
										BgL_l1560z00_3239 = BgL_l1560z00_4478;
										goto BgL_zc3z04anonymousza31586ze3z87_3240;
									}
								}
							else
								{	/* Cfa/pair.scm 74 */
									((bool_t) 1);
								}
						}
					}
					{	/* Cfa/pair.scm 80 */
						obj_t BgL_gz00_3260;

						BgL_gz00_3260 =
							BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 1)),
							BNIL);
						if (BGl_isazf3zf3zz__objectz00(BgL_gz00_3260,
								BGl_globalz00zzast_varz00))
							{	/* Cfa/pair.scm 82 */
								BgL_valuez00_bglt BgL_fz00_3262;

								BgL_fz00_3262 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_gz00_3260))))->BgL_valuez00);
								{	/* Cfa/pair.scm 83 */
									obj_t BgL_arg1624z00_3263;
									BgL_typez00_bglt BgL_arg1626z00_3264;

									BgL_arg1624z00_3263 =
										(((BgL_cfunz00_bglt) COBJECT(
												((BgL_cfunz00_bglt) BgL_fz00_3262)))->
										BgL_argszd2typezd2);
									BgL_arg1626z00_3264 =
										BGl_getzd2defaultzd2typez00zztype_cachez00();
									{	/* Cfa/pair.scm 83 */
										obj_t BgL_auxz00_4492;
										obj_t BgL_tmpz00_4490;

										BgL_auxz00_4492 = ((obj_t) BgL_arg1626z00_3264);
										BgL_tmpz00_4490 = ((obj_t) BgL_arg1624z00_3263);
										return SET_CAR(BgL_tmpz00_4490, BgL_auxz00_4492);
									}
								}
							}
						else
							{	/* Cfa/pair.scm 81 */
								return BFALSE;
							}
					}
				}
			else
				{	/* Cfa/pair.scm 62 */
					return BFALSE;
				}
		}

	}



/* &patch-pair-set! */
	obj_t BGl_z62patchzd2pairzd2setz12z70zzcfa_pairz00(obj_t BgL_envz00_4218)
	{
		{	/* Cfa/pair.scm 59 */
			return BGl_patchzd2pairzd2setz12z12zzcfa_pairz00();
		}

	}



/* unpatch-pair-set! */
	BGL_EXPORTED_DEF obj_t BGl_unpatchzd2pairzd2setz12z12zzcfa_pairz00()
	{
		{	/* Cfa/pair.scm 88 */
			if (BGl_pairzd2optimzf3z21zzcfa_pairz00())
				{	/* Cfa/pair.scm 89 */
					{	/* Cfa/pair.scm 90 */
						obj_t BgL_g1565z00_3267;

						BgL_g1565z00_3267 = CNST_TABLE_REF(((long) 0));
						{
							obj_t BgL_l1563z00_3269;

							BgL_l1563z00_3269 = BgL_g1565z00_3267;
						BgL_zc3z04anonymousza31629ze3z87_3270:
							if (PAIRP(BgL_l1563z00_3269))
								{	/* Cfa/pair.scm 100 */
									{	/* Cfa/pair.scm 91 */
										obj_t BgL_idz00_3272;

										BgL_idz00_3272 = CAR(BgL_l1563z00_3269);
										{	/* Cfa/pair.scm 91 */
											obj_t BgL_gz00_3273;

											{	/* Cfa/pair.scm 91 */
												obj_t BgL_arg1641z00_3281;
												obj_t BgL_arg1644z00_3282;

												{	/* Cfa/pair.scm 91 */
													obj_t BgL_pairz00_4037;

													BgL_pairz00_4037 = CDR(((obj_t) BgL_idz00_3272));
													BgL_arg1641z00_3281 = CAR(BgL_pairz00_4037);
												}
												{	/* Cfa/pair.scm 91 */
													obj_t BgL_pairz00_4043;

													{	/* Cfa/pair.scm 91 */
														obj_t BgL_pairz00_4042;

														BgL_pairz00_4042 = CDR(((obj_t) BgL_idz00_3272));
														BgL_pairz00_4043 = CDR(BgL_pairz00_4042);
													}
													BgL_arg1644z00_3282 = CAR(BgL_pairz00_4043);
												}
												BgL_gz00_3273 =
													BGl_findzd2globalzf2modulez20zzast_envz00
													(BgL_arg1641z00_3281, BgL_arg1644z00_3282);
											}
											{	/* Cfa/pair.scm 91 */
												BgL_valuez00_bglt BgL_funz00_3274;

												BgL_funz00_3274 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_globalz00_bglt) BgL_gz00_3273))))->
													BgL_valuez00);
												{	/* Cfa/pair.scm 92 */

													{	/* Cfa/pair.scm 93 */
														bool_t BgL_test2122z00_4513;

														{	/* Cfa/pair.scm 93 */
															bool_t BgL_res2061z00_4045;

															BgL_res2061z00_4045 =
																BGl_isazf3zf3zz__objectz00(
																((obj_t) BgL_funz00_3274),
																BGl_cfunz00zzast_varz00);
															BgL_test2122z00_4513 = BgL_res2061z00_4045;
														}
														if (BgL_test2122z00_4513)
															{	/* Cfa/pair.scm 94 */
																obj_t BgL_argsz00_3276;

																BgL_argsz00_3276 =
																	(((BgL_cfunz00_bglt) COBJECT(
																			((BgL_cfunz00_bglt) BgL_funz00_3274)))->
																	BgL_argszd2typezd2);
																{	/* Cfa/pair.scm 95 */
																	obj_t BgL_objz00_4048;

																	BgL_objz00_4048 =
																		BGl_za2objza2z00zztype_cachez00;
																	{	/* Cfa/pair.scm 95 */
																		obj_t BgL_tmpz00_4518;

																		BgL_tmpz00_4518 =
																			((obj_t) BgL_argsz00_3276);
																		SET_CAR(BgL_tmpz00_4518, BgL_objz00_4048);
																	}
																}
																{	/* Cfa/pair.scm 96 */
																	obj_t BgL_arg1634z00_3277;

																	BgL_arg1634z00_3277 =
																		CDR(((obj_t) BgL_argsz00_3276));
																	{	/* Cfa/pair.scm 96 */
																		obj_t BgL_objz00_4051;

																		BgL_objz00_4051 =
																			BGl_za2objza2z00zztype_cachez00;
																		{	/* Cfa/pair.scm 96 */
																			obj_t BgL_tmpz00_4523;

																			BgL_tmpz00_4523 =
																				((obj_t) BgL_arg1634z00_3277);
																			SET_CAR(BgL_tmpz00_4523, BgL_objz00_4051);
																		}
																	}
																}
															}
														else
															{	/* Cfa/pair.scm 97 */
																obj_t BgL_argsz00_3278;

																BgL_argsz00_3278 =
																	(((BgL_sfunz00_bglt) COBJECT(
																			((BgL_sfunz00_bglt) BgL_funz00_3274)))->
																	BgL_argsz00);
																{	/* Cfa/pair.scm 98 */
																	obj_t BgL_arg1639z00_3279;

																	BgL_arg1639z00_3279 =
																		CAR(((obj_t) BgL_argsz00_3278));
																	{	/* Cfa/pair.scm 98 */
																		BgL_typez00_bglt BgL_vz00_4055;

																		BgL_vz00_4055 =
																			((BgL_typez00_bglt)
																			BGl_za2objza2z00zztype_cachez00);
																		((((BgL_variablez00_bglt)
																					COBJECT(((BgL_variablez00_bglt) (
																								(BgL_localz00_bglt)
																								BgL_arg1639z00_3279))))->
																				BgL_typez00) =
																			((BgL_typez00_bglt) BgL_vz00_4055),
																			BUNSPEC);
																	}
																}
																{	/* Cfa/pair.scm 99 */
																	obj_t BgL_arg1640z00_3280;

																	{	/* Cfa/pair.scm 99 */
																		obj_t BgL_pairz00_4059;

																		BgL_pairz00_4059 =
																			CDR(((obj_t) BgL_argsz00_3278));
																		BgL_arg1640z00_3280 = CAR(BgL_pairz00_4059);
																	}
																	{	/* Cfa/pair.scm 99 */
																		BgL_typez00_bglt BgL_vz00_4061;

																		BgL_vz00_4061 =
																			((BgL_typez00_bglt)
																			BGl_za2objza2z00zztype_cachez00);
																		((((BgL_variablez00_bglt)
																					COBJECT(((BgL_variablez00_bglt) (
																								(BgL_localz00_bglt)
																								BgL_arg1640z00_3280))))->
																				BgL_typez00) =
																			((BgL_typez00_bglt) BgL_vz00_4061),
																			BUNSPEC);
																	}
																}
															}
													}
												}
											}
										}
									}
									{
										obj_t BgL_l1563z00_4541;

										BgL_l1563z00_4541 = CDR(BgL_l1563z00_3269);
										BgL_l1563z00_3269 = BgL_l1563z00_4541;
										goto BgL_zc3z04anonymousza31629ze3z87_3270;
									}
								}
							else
								{	/* Cfa/pair.scm 100 */
									((bool_t) 1);
								}
						}
					}
					{	/* Cfa/pair.scm 106 */
						obj_t BgL_gz00_3285;

						BgL_gz00_3285 =
							BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 1)),
							BNIL);
						if (BGl_isazf3zf3zz__objectz00(BgL_gz00_3285,
								BGl_globalz00zzast_varz00))
							{	/* Cfa/pair.scm 108 */
								BgL_valuez00_bglt BgL_fz00_3287;

								BgL_fz00_3287 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_gz00_3285))))->BgL_valuez00);
								{	/* Cfa/pair.scm 109 */
									obj_t BgL_arg1662z00_3288;

									BgL_arg1662z00_3288 =
										(((BgL_cfunz00_bglt) COBJECT(
												((BgL_cfunz00_bglt) BgL_fz00_3287)))->
										BgL_argszd2typezd2);
									{	/* Cfa/pair.scm 109 */
										obj_t BgL_objz00_4067;

										BgL_objz00_4067 = BGl_za2objza2z00zztype_cachez00;
										{	/* Cfa/pair.scm 109 */
											obj_t BgL_tmpz00_4552;

											BgL_tmpz00_4552 = ((obj_t) BgL_arg1662z00_3288);
											SET_CAR(BgL_tmpz00_4552, BgL_objz00_4067);
										}
									}
								}
							}
						else
							{	/* Cfa/pair.scm 107 */
								BFALSE;
							}
					}
					{	/* Cfa/pair.scm 110 */
						obj_t BgL_gz00_3290;

						BgL_gz00_3290 =
							BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 2)),
							BNIL);
						if (BGl_isazf3zf3zz__objectz00(BgL_gz00_3290,
								BGl_globalz00zzast_varz00))
							{	/* Cfa/pair.scm 112 */
								BgL_valuez00_bglt BgL_fz00_3292;

								BgL_fz00_3292 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_gz00_3290))))->BgL_valuez00);
								{	/* Cfa/pair.scm 113 */
									obj_t BgL_arg1667z00_3293;

									{	/* Cfa/pair.scm 113 */
										obj_t BgL_pairz00_4071;

										BgL_pairz00_4071 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_fz00_3292)))->BgL_argsz00);
										BgL_arg1667z00_3293 = CAR(BgL_pairz00_4071);
									}
									{	/* Cfa/pair.scm 113 */
										BgL_typez00_bglt BgL_vz00_4073;

										BgL_vz00_4073 =
											((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00);
										((((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt) BgL_arg1667z00_3293))))->
												BgL_typez00) =
											((BgL_typez00_bglt) BgL_vz00_4073), BUNSPEC);
									}
								}
							}
						else
							{	/* Cfa/pair.scm 111 */
								BFALSE;
							}
					}
				}
			else
				{	/* Cfa/pair.scm 89 */
					BFALSE;
				}
			return BUNSPEC;
		}

	}



/* &unpatch-pair-set! */
	obj_t BGl_z62unpatchzd2pairzd2setz12z70zzcfa_pairz00(obj_t BgL_envz00_4219)
	{
		{	/* Cfa/pair.scm 88 */
			return BGl_unpatchzd2pairzd2setz12z12zzcfa_pairz00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_pairz00()
	{
		{	/* Cfa/pair.scm 17 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_pairz00()
	{
		{	/* Cfa/pair.scm 17 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_pairz00()
	{
		{	/* Cfa/pair.scm 17 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_prezd2conszd2appz00zzcfa_info2z00, BGl_proc2082z00zzcfa_pairz00,
				BGl_string2083z00zzcfa_pairz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_prezd2conszd2refzd2appzd2zzcfa_info2z00,
				BGl_proc2084z00zzcfa_pairz00, BGl_string2083z00zzcfa_pairz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_prezd2conszd2setz12zd2appzc0zzcfa_info2z00,
				BGl_proc2085z00zzcfa_pairz00, BGl_string2083z00zzcfa_pairz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_conszd2appzd2zzcfa_info2z00,
				BGl_proc2086z00zzcfa_pairz00, BGl_string2087z00zzcfa_pairz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_conszd2refzd2appz00zzcfa_info2z00,
				BGl_proc2088z00zzcfa_pairz00, BGl_string2087z00zzcfa_pairz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_conszd2setz12zd2appz12zzcfa_info2z00, BGl_proc2089z00zzcfa_pairz00,
				BGl_string2087z00zzcfa_pairz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00,
				BGl_conszd2appzd2zzcfa_info2z00, BGl_proc2090z00zzcfa_pairz00,
				BGl_string2091z00zzcfa_pairz00);
		}

	}



/* &loose-alloc!-cons-ap1579 */
	obj_t BGl_z62loosezd2allocz12zd2conszd2ap1579za2zzcfa_pairz00(obj_t
		BgL_envz00_4231, obj_t BgL_allocz00_4232)
	{
		{	/* Cfa/pair.scm 245 */
			{	/* Cfa/pair.scm 247 */
				bool_t BgL_test2125z00_4577;

				{	/* Cfa/pair.scm 247 */
					long BgL_arg1845z00_4270;

					{
						BgL_conszd2appzd2_bglt BgL_auxz00_4578;

						{
							obj_t BgL_auxz00_4579;

							{	/* Cfa/pair.scm 247 */
								BgL_objectz00_bglt BgL_tmpz00_4580;

								BgL_tmpz00_4580 =
									((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_allocz00_4232));
								BgL_auxz00_4579 = BGL_OBJECT_WIDENING(BgL_tmpz00_4580);
							}
							BgL_auxz00_4578 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_4579);
						}
						BgL_arg1845z00_4270 =
							(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_4578))->
							BgL_lostzd2stampzd2);
					}
					BgL_test2125z00_4577 =
						(BgL_arg1845z00_4270 ==
						(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00));
				}
				if (BgL_test2125z00_4577)
					{	/* Cfa/pair.scm 247 */
						return BFALSE;
					}
				else
					{	/* Cfa/pair.scm 247 */
						{
							BgL_conszd2appzd2_bglt BgL_auxz00_4588;

							{
								obj_t BgL_auxz00_4589;

								{	/* Cfa/pair.scm 250 */
									BgL_objectz00_bglt BgL_tmpz00_4590;

									BgL_tmpz00_4590 =
										((BgL_objectz00_bglt)
										((BgL_appz00_bglt) BgL_allocz00_4232));
									BgL_auxz00_4589 = BGL_OBJECT_WIDENING(BgL_tmpz00_4590);
								}
								BgL_auxz00_4588 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_4589);
							}
							((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_4588))->
									BgL_lostzd2stampzd2) =
								((long) (long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00)),
								BUNSPEC);
						}
						{	/* Cfa/pair.scm 251 */
							obj_t BgL_arg1828z00_4271;

							{	/* Cfa/pair.scm 251 */
								obj_t BgL_arg1829z00_4272;

								{
									BgL_conszd2appzd2_bglt BgL_auxz00_4597;

									{
										obj_t BgL_auxz00_4598;

										{	/* Cfa/pair.scm 251 */
											BgL_objectz00_bglt BgL_tmpz00_4599;

											BgL_tmpz00_4599 =
												((BgL_objectz00_bglt)
												((BgL_appz00_bglt) BgL_allocz00_4232));
											BgL_auxz00_4598 = BGL_OBJECT_WIDENING(BgL_tmpz00_4599);
										}
										BgL_auxz00_4597 =
											((BgL_conszd2appzd2_bglt) BgL_auxz00_4598);
									}
									BgL_arg1829z00_4272 =
										(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_4597))->
										BgL_approxesz00);
								}
								BgL_arg1828z00_4271 = CAR(BgL_arg1829z00_4272);
							}
							BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
								(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00,
								((BgL_approxz00_bglt) BgL_arg1828z00_4271));
						}
						{	/* Cfa/pair.scm 252 */
							obj_t BgL_arg1830z00_4273;

							{	/* Cfa/pair.scm 252 */
								obj_t BgL_arg1831z00_4274;

								{
									BgL_conszd2appzd2_bglt BgL_auxz00_4608;

									{
										obj_t BgL_auxz00_4609;

										{	/* Cfa/pair.scm 252 */
											BgL_objectz00_bglt BgL_tmpz00_4610;

											BgL_tmpz00_4610 =
												((BgL_objectz00_bglt)
												((BgL_appz00_bglt) BgL_allocz00_4232));
											BgL_auxz00_4609 = BGL_OBJECT_WIDENING(BgL_tmpz00_4610);
										}
										BgL_auxz00_4608 =
											((BgL_conszd2appzd2_bglt) BgL_auxz00_4609);
									}
									BgL_arg1831z00_4274 =
										(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_4608))->
										BgL_approxesz00);
								}
								BgL_arg1830z00_4273 = CDR(BgL_arg1831z00_4274);
							}
							BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
								(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00,
								((BgL_approxz00_bglt) BgL_arg1830z00_4273));
						}
						{	/* Cfa/pair.scm 253 */
							obj_t BgL_arg1832z00_4275;

							{	/* Cfa/pair.scm 253 */
								obj_t BgL_arg1833z00_4276;

								{
									BgL_conszd2appzd2_bglt BgL_auxz00_4619;

									{
										obj_t BgL_auxz00_4620;

										{	/* Cfa/pair.scm 253 */
											BgL_objectz00_bglt BgL_tmpz00_4621;

											BgL_tmpz00_4621 =
												((BgL_objectz00_bglt)
												((BgL_appz00_bglt) BgL_allocz00_4232));
											BgL_auxz00_4620 = BGL_OBJECT_WIDENING(BgL_tmpz00_4621);
										}
										BgL_auxz00_4619 =
											((BgL_conszd2appzd2_bglt) BgL_auxz00_4620);
									}
									BgL_arg1833z00_4276 =
										(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_4619))->
										BgL_approxesz00);
								}
								BgL_arg1832z00_4275 = CAR(BgL_arg1833z00_4276);
							}
							BGl_approxzd2setzd2typez12z12zzcfa_approxz00(
								((BgL_approxz00_bglt) BgL_arg1832z00_4275),
								((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
						}
						{	/* Cfa/pair.scm 254 */
							obj_t BgL_arg1835z00_4277;

							{	/* Cfa/pair.scm 254 */
								obj_t BgL_arg1836z00_4278;

								{
									BgL_conszd2appzd2_bglt BgL_auxz00_4631;

									{
										obj_t BgL_auxz00_4632;

										{	/* Cfa/pair.scm 254 */
											BgL_objectz00_bglt BgL_tmpz00_4633;

											BgL_tmpz00_4633 =
												((BgL_objectz00_bglt)
												((BgL_appz00_bglt) BgL_allocz00_4232));
											BgL_auxz00_4632 = BGL_OBJECT_WIDENING(BgL_tmpz00_4633);
										}
										BgL_auxz00_4631 =
											((BgL_conszd2appzd2_bglt) BgL_auxz00_4632);
									}
									BgL_arg1836z00_4278 =
										(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_4631))->
										BgL_approxesz00);
								}
								BgL_arg1835z00_4277 = CDR(BgL_arg1836z00_4278);
							}
							BGl_approxzd2setzd2typez12z12zzcfa_approxz00(
								((BgL_approxz00_bglt) BgL_arg1835z00_4277),
								((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
						}
						{	/* Cfa/pair.scm 255 */
							obj_t BgL_arg1838z00_4279;

							{	/* Cfa/pair.scm 255 */
								obj_t BgL_arg1840z00_4280;

								{
									BgL_conszd2appzd2_bglt BgL_auxz00_4643;

									{
										obj_t BgL_auxz00_4644;

										{	/* Cfa/pair.scm 255 */
											BgL_objectz00_bglt BgL_tmpz00_4645;

											BgL_tmpz00_4645 =
												((BgL_objectz00_bglt)
												((BgL_appz00_bglt) BgL_allocz00_4232));
											BgL_auxz00_4644 = BGL_OBJECT_WIDENING(BgL_tmpz00_4645);
										}
										BgL_auxz00_4643 =
											((BgL_conszd2appzd2_bglt) BgL_auxz00_4644);
									}
									BgL_arg1840z00_4280 =
										(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_4643))->
										BgL_approxesz00);
								}
								BgL_arg1838z00_4279 = CAR(BgL_arg1840z00_4280);
							}
							BGl_approxzd2setzd2topz12z12zzcfa_approxz00(
								((BgL_approxz00_bglt) BgL_arg1838z00_4279));
						}
						{	/* Cfa/pair.scm 256 */
							obj_t BgL_arg1841z00_4281;

							{	/* Cfa/pair.scm 256 */
								obj_t BgL_arg1842z00_4282;

								{
									BgL_conszd2appzd2_bglt BgL_auxz00_4654;

									{
										obj_t BgL_auxz00_4655;

										{	/* Cfa/pair.scm 256 */
											BgL_objectz00_bglt BgL_tmpz00_4656;

											BgL_tmpz00_4656 =
												((BgL_objectz00_bglt)
												((BgL_appz00_bglt) BgL_allocz00_4232));
											BgL_auxz00_4655 = BGL_OBJECT_WIDENING(BgL_tmpz00_4656);
										}
										BgL_auxz00_4654 =
											((BgL_conszd2appzd2_bglt) BgL_auxz00_4655);
									}
									BgL_arg1842z00_4282 =
										(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_4654))->
										BgL_approxesz00);
								}
								BgL_arg1841z00_4281 = CDR(BgL_arg1842z00_4282);
							}
							return
								BGl_approxzd2setzd2topz12z12zzcfa_approxz00(
								((BgL_approxz00_bglt) BgL_arg1841z00_4281));
						}
					}
			}
		}

	}



/* &cfa!-cons-set!-app1577 */
	BgL_approxz00_bglt
		BGl_z62cfaz12zd2conszd2setz12zd2app1577zb0zzcfa_pairz00(obj_t
		BgL_envz00_4233, obj_t BgL_nodez00_4234)
	{
		{	/* Cfa/pair.scm 212 */
			{	/* Cfa/pair.scm 214 */
				BgL_approxz00_bglt BgL_conszd2approxzd2_4284;
				BgL_approxz00_bglt BgL_valzd2approxzd2_4285;

				{	/* Cfa/pair.scm 214 */
					obj_t BgL_arg1822z00_4286;

					{	/* Cfa/pair.scm 214 */
						obj_t BgL_pairz00_4287;

						BgL_pairz00_4287 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_nodez00_4234))))->BgL_argsz00);
						BgL_arg1822z00_4286 = CAR(BgL_pairz00_4287);
					}
					BgL_conszd2approxzd2_4284 =
						BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1822z00_4286));
				}
				{	/* Cfa/pair.scm 215 */
					obj_t BgL_arg1824z00_4288;

					{	/* Cfa/pair.scm 215 */
						obj_t BgL_pairz00_4289;

						BgL_pairz00_4289 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_nodez00_4234))))->BgL_argsz00);
						BgL_arg1824z00_4288 = CAR(CDR(BgL_pairz00_4289));
					}
					BgL_valzd2approxzd2_4285 =
						BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1824z00_4288));
				}
				{	/* Cfa/pair.scm 220 */
					bool_t BgL_test2126z00_4678;

					{	/* Cfa/pair.scm 220 */
						BgL_typez00_bglt BgL_arg1801z00_4290;

						BgL_arg1801z00_4290 =
							(((BgL_approxz00_bglt) COBJECT(BgL_conszd2approxzd2_4284))->
							BgL_typez00);
						BgL_test2126z00_4678 =
							(((obj_t) BgL_arg1801z00_4290) ==
							BGl_za2pairza2z00zztype_cachez00);
					}
					if (BgL_test2126z00_4678)
						{	/* Cfa/pair.scm 220 */
							BFALSE;
						}
					else
						{	/* Cfa/pair.scm 220 */
							BGl_approxzd2setzd2typez12z12zzcfa_approxz00
								(BgL_valzd2approxzd2_4285,
								((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
						}
				}
				if (
					(((BgL_approxz00_bglt) COBJECT(BgL_conszd2approxzd2_4284))->
						BgL_topzf3zf3))
					{	/* Cfa/pair.scm 223 */
						((obj_t)
							BGl_loosez12z12zzcfa_loosez00(BgL_valzd2approxzd2_4285,
								CNST_TABLE_REF(((long) 3))));
					}
				else
					{	/* Cfa/pair.scm 229 */
						obj_t BgL_zc3z04anonymousza31809ze3z87_4291;

						BgL_zc3z04anonymousza31809ze3z87_4291 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31809ze3ze5zzcfa_pairz00,
							(int) (((long) 1)), (int) (((long) 2)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31809ze3z87_4291,
							(int) (((long) 0)),
							((obj_t) ((BgL_appz00_bglt) BgL_nodez00_4234)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31809ze3z87_4291,
							(int) (((long) 1)), ((obj_t) BgL_valzd2approxzd2_4285));
						BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
							(BgL_zc3z04anonymousza31809ze3z87_4291,
							BgL_conszd2approxzd2_4284);
			}}
			{
				BgL_conszd2setz12zd2appz12_bglt BgL_auxz00_4700;

				{
					obj_t BgL_auxz00_4701;

					{	/* Cfa/pair.scm 236 */
						BgL_objectz00_bglt BgL_tmpz00_4702;

						BgL_tmpz00_4702 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4234));
						BgL_auxz00_4701 = BGL_OBJECT_WIDENING(BgL_tmpz00_4702);
					}
					BgL_auxz00_4700 = ((BgL_conszd2setz12zd2appz12_bglt) BgL_auxz00_4701);
				}
				return
					(((BgL_conszd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_4700))->
					BgL_approxz00);
			}
		}

	}



/* &<@anonymous:1809> */
	obj_t BGl_z62zc3z04anonymousza31809ze3ze5zzcfa_pairz00(obj_t BgL_envz00_4235,
		obj_t BgL_appz00_4238)
	{
		{	/* Cfa/pair.scm 228 */
			{	/* Cfa/pair.scm 229 */
				BgL_appz00_bglt BgL_i1191z00_4236;
				BgL_approxz00_bglt BgL_valzd2approxzd2_4237;

				BgL_i1191z00_4236 =
					((BgL_appz00_bglt)
					PROCEDURE_REF(BgL_envz00_4235, (int) (((long) 0))));
				BgL_valzd2approxzd2_4237 =
					((BgL_approxz00_bglt)
					PROCEDURE_REF(BgL_envz00_4235, (int) (((long) 1))));
				if (BGl_isazf3zf3zz__objectz00(BgL_appz00_4238,
						BGl_conszd2appzd2zzcfa_info2z00))
					{	/* Cfa/pair.scm 229 */
						{
							BgL_conszd2appzd2_bglt BgL_auxz00_4716;

							{
								obj_t BgL_auxz00_4717;

								{	/* Cfa/pair.scm 231 */
									BgL_objectz00_bglt BgL_tmpz00_4718;

									BgL_tmpz00_4718 =
										((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_appz00_4238));
									BgL_auxz00_4717 = BGL_OBJECT_WIDENING(BgL_tmpz00_4718);
								}
								BgL_auxz00_4716 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_4717);
							}
							((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_4716))->
									BgL_seenzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
						}
						{	/* Cfa/pair.scm 232 */
							obj_t BgL_arg1811z00_4292;

							{	/* Cfa/pair.scm 232 */
								obj_t BgL_fun1821z00_4293;

								{
									BgL_conszd2setz12zd2appz12_bglt BgL_auxz00_4724;

									{
										obj_t BgL_auxz00_4725;

										{	/* Cfa/pair.scm 232 */
											BgL_objectz00_bglt BgL_tmpz00_4726;

											BgL_tmpz00_4726 =
												((BgL_objectz00_bglt) BgL_i1191z00_4236);
											BgL_auxz00_4725 = BGL_OBJECT_WIDENING(BgL_tmpz00_4726);
										}
										BgL_auxz00_4724 =
											((BgL_conszd2setz12zd2appz12_bglt) BgL_auxz00_4725);
									}
									BgL_fun1821z00_4293 =
										(((BgL_conszd2setz12zd2appz12_bglt)
											COBJECT(BgL_auxz00_4724))->BgL_getz00);
								}
								{	/* Cfa/pair.scm 232 */
									obj_t BgL_arg1820z00_4294;

									{
										BgL_conszd2appzd2_bglt BgL_auxz00_4731;

										{
											obj_t BgL_auxz00_4732;

											{	/* Cfa/pair.scm 232 */
												BgL_objectz00_bglt BgL_tmpz00_4733;

												BgL_tmpz00_4733 =
													((BgL_objectz00_bglt)
													((BgL_appz00_bglt) BgL_appz00_4238));
												BgL_auxz00_4732 = BGL_OBJECT_WIDENING(BgL_tmpz00_4733);
											}
											BgL_auxz00_4731 =
												((BgL_conszd2appzd2_bglt) BgL_auxz00_4732);
										}
										BgL_arg1820z00_4294 =
											(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_4731))->
											BgL_approxesz00);
									}
									BgL_arg1811z00_4292 =
										PROCEDURE_ENTRY(BgL_fun1821z00_4293) (BgL_fun1821z00_4293,
										BgL_arg1820z00_4294, BEOA);
								}
							}
							return
								((obj_t)
								BGl_unionzd2approxz12zc0zzcfa_approxz00(
									((BgL_approxz00_bglt) BgL_arg1811z00_4292),
									BgL_valzd2approxzd2_4237));
						}
					}
				else
					{	/* Cfa/pair.scm 229 */
						return BFALSE;
					}
			}
		}

	}



/* &cfa!-cons-ref-app1575 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2conszd2refzd2app1575za2zzcfa_pairz00(obj_t
		BgL_envz00_4239, obj_t BgL_nodez00_4240)
	{
		{	/* Cfa/pair.scm 183 */
			{	/* Cfa/pair.scm 185 */
				BgL_approxz00_bglt BgL_conszd2approxzd2_4296;

				{	/* Cfa/pair.scm 185 */
					obj_t BgL_arg1790z00_4297;

					{	/* Cfa/pair.scm 185 */
						obj_t BgL_pairz00_4298;

						BgL_pairz00_4298 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_nodez00_4240))))->BgL_argsz00);
						BgL_arg1790z00_4297 = CAR(BgL_pairz00_4298);
					}
					BgL_conszd2approxzd2_4296 =
						BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1790z00_4297));
				}
				if (
					(((BgL_approxz00_bglt) COBJECT(BgL_conszd2approxzd2_4296))->
						BgL_topzf3zf3))
					{	/* Cfa/pair.scm 191 */
						{	/* Cfa/pair.scm 192 */
							BgL_approxz00_bglt BgL_arg1759z00_4299;

							{
								BgL_conszd2refzd2appz00_bglt BgL_auxz00_4754;

								{
									obj_t BgL_auxz00_4755;

									{	/* Cfa/pair.scm 192 */
										BgL_objectz00_bglt BgL_tmpz00_4756;

										BgL_tmpz00_4756 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_nodez00_4240));
										BgL_auxz00_4755 = BGL_OBJECT_WIDENING(BgL_tmpz00_4756);
									}
									BgL_auxz00_4754 =
										((BgL_conszd2refzd2appz00_bglt) BgL_auxz00_4755);
								}
								BgL_arg1759z00_4299 =
									(((BgL_conszd2refzd2appz00_bglt) COBJECT(BgL_auxz00_4754))->
									BgL_approxz00);
							}
							BGl_approxzd2setzd2typez12z12zzcfa_approxz00(BgL_arg1759z00_4299,
								((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
						}
						{	/* Cfa/pair.scm 193 */
							BgL_approxz00_bglt BgL_arg1760z00_4300;

							{
								BgL_conszd2refzd2appz00_bglt BgL_auxz00_4764;

								{
									obj_t BgL_auxz00_4765;

									{	/* Cfa/pair.scm 193 */
										BgL_objectz00_bglt BgL_tmpz00_4766;

										BgL_tmpz00_4766 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_nodez00_4240));
										BgL_auxz00_4765 = BGL_OBJECT_WIDENING(BgL_tmpz00_4766);
									}
									BgL_auxz00_4764 =
										((BgL_conszd2refzd2appz00_bglt) BgL_auxz00_4765);
								}
								BgL_arg1760z00_4300 =
									(((BgL_conszd2refzd2appz00_bglt) COBJECT(BgL_auxz00_4764))->
									BgL_approxz00);
							}
							BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_arg1760z00_4300);
						}
					}
				else
					{	/* Cfa/pair.scm 191 */
						BFALSE;
					}
				{	/* Cfa/pair.scm 197 */
					obj_t BgL_zc3z04anonymousza31762ze3z87_4301;

					BgL_zc3z04anonymousza31762ze3z87_4301 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31762ze3ze5zzcfa_pairz00,
						(int) (((long) 1)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31762ze3z87_4301,
						(int) (((long) 0)), ((obj_t) ((BgL_appz00_bglt) BgL_nodez00_4240)));
					BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
						(BgL_zc3z04anonymousza31762ze3z87_4301, BgL_conszd2approxzd2_4296);
			}}
			{
				BgL_conszd2refzd2appz00_bglt BgL_auxz00_4781;

				{
					obj_t BgL_auxz00_4782;

					{	/* Cfa/pair.scm 207 */
						BgL_objectz00_bglt BgL_tmpz00_4783;

						BgL_tmpz00_4783 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4240));
						BgL_auxz00_4782 = BGL_OBJECT_WIDENING(BgL_tmpz00_4783);
					}
					BgL_auxz00_4781 = ((BgL_conszd2refzd2appz00_bglt) BgL_auxz00_4782);
				}
				return
					(((BgL_conszd2refzd2appz00_bglt) COBJECT(BgL_auxz00_4781))->
					BgL_approxz00);
			}
		}

	}



/* &<@anonymous:1762> */
	obj_t BGl_z62zc3z04anonymousza31762ze3ze5zzcfa_pairz00(obj_t BgL_envz00_4241,
		obj_t BgL_appz00_4243)
	{
		{	/* Cfa/pair.scm 196 */
			{	/* Cfa/pair.scm 197 */
				BgL_appz00_bglt BgL_i1189z00_4242;

				BgL_i1189z00_4242 =
					((BgL_appz00_bglt)
					PROCEDURE_REF(BgL_envz00_4241, (int) (((long) 0))));
				if (BGl_isazf3zf3zz__objectz00(BgL_appz00_4243,
						BGl_conszd2appzd2zzcfa_info2z00))
					{	/* Cfa/pair.scm 197 */
						{
							BgL_conszd2appzd2_bglt BgL_auxz00_4794;

							{
								obj_t BgL_auxz00_4795;

								{	/* Cfa/pair.scm 199 */
									BgL_objectz00_bglt BgL_tmpz00_4796;

									BgL_tmpz00_4796 =
										((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_appz00_4243));
									BgL_auxz00_4795 = BGL_OBJECT_WIDENING(BgL_tmpz00_4796);
								}
								BgL_auxz00_4794 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_4795);
							}
							((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_4794))->
									BgL_seenzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
						}
						{	/* Cfa/pair.scm 202 */
							BgL_approxz00_bglt BgL_arg1768z00_4302;
							obj_t BgL_arg1771z00_4303;

							{
								BgL_conszd2refzd2appz00_bglt BgL_auxz00_4802;

								{
									obj_t BgL_auxz00_4803;

									{	/* Cfa/pair.scm 202 */
										BgL_objectz00_bglt BgL_tmpz00_4804;

										BgL_tmpz00_4804 = ((BgL_objectz00_bglt) BgL_i1189z00_4242);
										BgL_auxz00_4803 = BGL_OBJECT_WIDENING(BgL_tmpz00_4804);
									}
									BgL_auxz00_4802 =
										((BgL_conszd2refzd2appz00_bglt) BgL_auxz00_4803);
								}
								BgL_arg1768z00_4302 =
									(((BgL_conszd2refzd2appz00_bglt) COBJECT(BgL_auxz00_4802))->
									BgL_approxz00);
							}
							{	/* Cfa/pair.scm 202 */
								obj_t BgL_fun1776z00_4304;

								{
									BgL_conszd2refzd2appz00_bglt BgL_auxz00_4809;

									{
										obj_t BgL_auxz00_4810;

										{	/* Cfa/pair.scm 202 */
											BgL_objectz00_bglt BgL_tmpz00_4811;

											BgL_tmpz00_4811 =
												((BgL_objectz00_bglt) BgL_i1189z00_4242);
											BgL_auxz00_4810 = BGL_OBJECT_WIDENING(BgL_tmpz00_4811);
										}
										BgL_auxz00_4809 =
											((BgL_conszd2refzd2appz00_bglt) BgL_auxz00_4810);
									}
									BgL_fun1776z00_4304 =
										(((BgL_conszd2refzd2appz00_bglt) COBJECT(BgL_auxz00_4809))->
										BgL_getz00);
								}
								{	/* Cfa/pair.scm 202 */
									obj_t BgL_arg1775z00_4305;

									{
										BgL_conszd2appzd2_bglt BgL_auxz00_4816;

										{
											obj_t BgL_auxz00_4817;

											{	/* Cfa/pair.scm 202 */
												BgL_objectz00_bglt BgL_tmpz00_4818;

												BgL_tmpz00_4818 =
													((BgL_objectz00_bglt)
													((BgL_appz00_bglt) BgL_appz00_4243));
												BgL_auxz00_4817 = BGL_OBJECT_WIDENING(BgL_tmpz00_4818);
											}
											BgL_auxz00_4816 =
												((BgL_conszd2appzd2_bglt) BgL_auxz00_4817);
										}
										BgL_arg1775z00_4305 =
											(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_4816))->
											BgL_approxesz00);
									}
									BgL_arg1771z00_4303 =
										PROCEDURE_ENTRY(BgL_fun1776z00_4304) (BgL_fun1776z00_4304,
										BgL_arg1775z00_4305, BEOA);
								}
							}
							BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg1768z00_4302,
								((BgL_approxz00_bglt) BgL_arg1771z00_4303));
						}
						{	/* Cfa/pair.scm 203 */
							obj_t BgL_arg1778z00_4306;
							BgL_typez00_bglt BgL_arg1779z00_4307;

							{	/* Cfa/pair.scm 203 */
								obj_t BgL_fun1783z00_4308;

								{
									BgL_conszd2refzd2appz00_bglt BgL_auxz00_4830;

									{
										obj_t BgL_auxz00_4831;

										{	/* Cfa/pair.scm 203 */
											BgL_objectz00_bglt BgL_tmpz00_4832;

											BgL_tmpz00_4832 =
												((BgL_objectz00_bglt) BgL_i1189z00_4242);
											BgL_auxz00_4831 = BGL_OBJECT_WIDENING(BgL_tmpz00_4832);
										}
										BgL_auxz00_4830 =
											((BgL_conszd2refzd2appz00_bglt) BgL_auxz00_4831);
									}
									BgL_fun1783z00_4308 =
										(((BgL_conszd2refzd2appz00_bglt) COBJECT(BgL_auxz00_4830))->
										BgL_getz00);
								}
								{	/* Cfa/pair.scm 203 */
									obj_t BgL_arg1782z00_4309;

									{
										BgL_conszd2appzd2_bglt BgL_auxz00_4837;

										{
											obj_t BgL_auxz00_4838;

											{	/* Cfa/pair.scm 203 */
												BgL_objectz00_bglt BgL_tmpz00_4839;

												BgL_tmpz00_4839 =
													((BgL_objectz00_bglt)
													((BgL_appz00_bglt) BgL_appz00_4243));
												BgL_auxz00_4838 = BGL_OBJECT_WIDENING(BgL_tmpz00_4839);
											}
											BgL_auxz00_4837 =
												((BgL_conszd2appzd2_bglt) BgL_auxz00_4838);
										}
										BgL_arg1782z00_4309 =
											(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_4837))->
											BgL_approxesz00);
									}
									BgL_arg1778z00_4306 =
										PROCEDURE_ENTRY(BgL_fun1783z00_4308) (BgL_fun1783z00_4308,
										BgL_arg1782z00_4309, BEOA);
								}
							}
							{	/* Cfa/pair.scm 203 */
								BgL_approxz00_bglt BgL_arg1784z00_4310;

								{
									BgL_conszd2refzd2appz00_bglt BgL_auxz00_4849;

									{
										obj_t BgL_auxz00_4850;

										{	/* Cfa/pair.scm 203 */
											BgL_objectz00_bglt BgL_tmpz00_4851;

											BgL_tmpz00_4851 =
												((BgL_objectz00_bglt) BgL_i1189z00_4242);
											BgL_auxz00_4850 = BGL_OBJECT_WIDENING(BgL_tmpz00_4851);
										}
										BgL_auxz00_4849 =
											((BgL_conszd2refzd2appz00_bglt) BgL_auxz00_4850);
									}
									BgL_arg1784z00_4310 =
										(((BgL_conszd2refzd2appz00_bglt) COBJECT(BgL_auxz00_4849))->
										BgL_approxz00);
								}
								BgL_arg1779z00_4307 =
									(((BgL_approxz00_bglt) COBJECT(BgL_arg1784z00_4310))->
									BgL_typez00);
							}
							return
								BGl_approxzd2setzd2typez12z12zzcfa_approxz00(
								((BgL_approxz00_bglt) BgL_arg1778z00_4306),
								BgL_arg1779z00_4307);
						}
					}
				else
					{	/* Cfa/pair.scm 197 */
						return BFALSE;
					}
			}
		}

	}



/* &cfa!-cons-app1573 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2conszd2app1573z70zzcfa_pairz00(obj_t
		BgL_envz00_4244, obj_t BgL_nodez00_4245)
	{
		{	/* Cfa/pair.scm 159 */
			{	/* Cfa/pair.scm 162 */
				BgL_approxz00_bglt BgL_caraz00_4312;
				BgL_approxz00_bglt BgL_cdraz00_4313;

				{	/* Cfa/pair.scm 162 */
					obj_t BgL_arg1754z00_4314;

					{	/* Cfa/pair.scm 162 */
						obj_t BgL_pairz00_4315;

						BgL_pairz00_4315 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_nodez00_4245))))->BgL_argsz00);
						BgL_arg1754z00_4314 = CAR(BgL_pairz00_4315);
					}
					BgL_caraz00_4312 =
						BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1754z00_4314));
				}
				{	/* Cfa/pair.scm 163 */
					obj_t BgL_arg1756z00_4316;

					{	/* Cfa/pair.scm 163 */
						obj_t BgL_pairz00_4317;

						BgL_pairz00_4317 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_nodez00_4245))))->BgL_argsz00);
						BgL_arg1756z00_4316 = CAR(CDR(BgL_pairz00_4317));
					}
					BgL_cdraz00_4313 =
						BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1756z00_4316));
				}
				{	/* Cfa/pair.scm 164 */
					obj_t BgL_arg1727z00_4318;

					{	/* Cfa/pair.scm 164 */
						obj_t BgL_arg1728z00_4319;

						{
							BgL_conszd2appzd2_bglt BgL_auxz00_4872;

							{
								obj_t BgL_auxz00_4873;

								{	/* Cfa/pair.scm 164 */
									BgL_objectz00_bglt BgL_tmpz00_4874;

									BgL_tmpz00_4874 =
										((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4245));
									BgL_auxz00_4873 = BGL_OBJECT_WIDENING(BgL_tmpz00_4874);
								}
								BgL_auxz00_4872 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_4873);
							}
							BgL_arg1728z00_4319 =
								(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_4872))->
								BgL_approxesz00);
						}
						BgL_arg1727z00_4318 = CAR(BgL_arg1728z00_4319);
					}
					BGl_unionzd2approxz12zc0zzcfa_approxz00(
						((BgL_approxz00_bglt) BgL_arg1727z00_4318), BgL_caraz00_4312);
				}
				{	/* Cfa/pair.scm 165 */
					obj_t BgL_arg1729z00_4320;

					{	/* Cfa/pair.scm 165 */
						obj_t BgL_arg1731z00_4321;

						{
							BgL_conszd2appzd2_bglt BgL_auxz00_4883;

							{
								obj_t BgL_auxz00_4884;

								{	/* Cfa/pair.scm 165 */
									BgL_objectz00_bglt BgL_tmpz00_4885;

									BgL_tmpz00_4885 =
										((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4245));
									BgL_auxz00_4884 = BGL_OBJECT_WIDENING(BgL_tmpz00_4885);
								}
								BgL_auxz00_4883 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_4884);
							}
							BgL_arg1731z00_4321 =
								(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_4883))->
								BgL_approxesz00);
						}
						BgL_arg1729z00_4320 = CDR(BgL_arg1731z00_4321);
					}
					BGl_unionzd2approxz12zc0zzcfa_approxz00(
						((BgL_approxz00_bglt) BgL_arg1729z00_4320), BgL_cdraz00_4313);
				}
				{	/* Cfa/pair.scm 172 */
					obj_t BgL_arg1732z00_4322;
					BgL_typez00_bglt BgL_arg1733z00_4323;

					{	/* Cfa/pair.scm 172 */
						obj_t BgL_arg1738z00_4324;

						{
							BgL_conszd2appzd2_bglt BgL_auxz00_4894;

							{
								obj_t BgL_auxz00_4895;

								{	/* Cfa/pair.scm 172 */
									BgL_objectz00_bglt BgL_tmpz00_4896;

									BgL_tmpz00_4896 =
										((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4245));
									BgL_auxz00_4895 = BGL_OBJECT_WIDENING(BgL_tmpz00_4896);
								}
								BgL_auxz00_4894 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_4895);
							}
							BgL_arg1738z00_4324 =
								(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_4894))->
								BgL_approxesz00);
						}
						BgL_arg1732z00_4322 = CAR(BgL_arg1738z00_4324);
					}
					{	/* Cfa/pair.scm 173 */
						BgL_typez00_bglt BgL_arg1739z00_4325;

						{	/* Cfa/pair.scm 173 */
							obj_t BgL_arg1740z00_4326;

							{	/* Cfa/pair.scm 173 */
								obj_t BgL_arg1741z00_4327;

								{
									BgL_conszd2appzd2_bglt BgL_auxz00_4903;

									{
										obj_t BgL_auxz00_4904;

										{	/* Cfa/pair.scm 173 */
											BgL_objectz00_bglt BgL_tmpz00_4905;

											BgL_tmpz00_4905 =
												((BgL_objectz00_bglt)
												((BgL_appz00_bglt) BgL_nodez00_4245));
											BgL_auxz00_4904 = BGL_OBJECT_WIDENING(BgL_tmpz00_4905);
										}
										BgL_auxz00_4903 =
											((BgL_conszd2appzd2_bglt) BgL_auxz00_4904);
									}
									BgL_arg1741z00_4327 =
										(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_4903))->
										BgL_approxesz00);
								}
								BgL_arg1740z00_4326 = CAR(BgL_arg1741z00_4327);
							}
							BgL_arg1739z00_4325 =
								(((BgL_approxz00_bglt) COBJECT(
										((BgL_approxz00_bglt) BgL_arg1740z00_4326)))->BgL_typez00);
						}
						BgL_arg1733z00_4323 =
							BGl_getzd2bigloozd2typez00zztype_cachez00(BgL_arg1739z00_4325);
					}
					BGl_approxzd2setzd2typez12z12zzcfa_approxz00(
						((BgL_approxz00_bglt) BgL_arg1732z00_4322), BgL_arg1733z00_4323);
				}
				{	/* Cfa/pair.scm 174 */
					obj_t BgL_arg1742z00_4328;
					BgL_typez00_bglt BgL_arg1743z00_4329;

					{	/* Cfa/pair.scm 174 */
						obj_t BgL_arg1744z00_4330;

						{
							BgL_conszd2appzd2_bglt BgL_auxz00_4917;

							{
								obj_t BgL_auxz00_4918;

								{	/* Cfa/pair.scm 174 */
									BgL_objectz00_bglt BgL_tmpz00_4919;

									BgL_tmpz00_4919 =
										((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4245));
									BgL_auxz00_4918 = BGL_OBJECT_WIDENING(BgL_tmpz00_4919);
								}
								BgL_auxz00_4917 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_4918);
							}
							BgL_arg1744z00_4330 =
								(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_4917))->
								BgL_approxesz00);
						}
						BgL_arg1742z00_4328 = CDR(BgL_arg1744z00_4330);
					}
					{	/* Cfa/pair.scm 175 */
						BgL_typez00_bglt BgL_arg1745z00_4331;

						{	/* Cfa/pair.scm 175 */
							obj_t BgL_arg1746z00_4332;

							{	/* Cfa/pair.scm 175 */
								obj_t BgL_arg1747z00_4333;

								{
									BgL_conszd2appzd2_bglt BgL_auxz00_4926;

									{
										obj_t BgL_auxz00_4927;

										{	/* Cfa/pair.scm 175 */
											BgL_objectz00_bglt BgL_tmpz00_4928;

											BgL_tmpz00_4928 =
												((BgL_objectz00_bglt)
												((BgL_appz00_bglt) BgL_nodez00_4245));
											BgL_auxz00_4927 = BGL_OBJECT_WIDENING(BgL_tmpz00_4928);
										}
										BgL_auxz00_4926 =
											((BgL_conszd2appzd2_bglt) BgL_auxz00_4927);
									}
									BgL_arg1747z00_4333 =
										(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_4926))->
										BgL_approxesz00);
								}
								BgL_arg1746z00_4332 = CDR(BgL_arg1747z00_4333);
							}
							BgL_arg1745z00_4331 =
								(((BgL_approxz00_bglt) COBJECT(
										((BgL_approxz00_bglt) BgL_arg1746z00_4332)))->BgL_typez00);
						}
						BgL_arg1743z00_4329 =
							BGl_getzd2bigloozd2typez00zztype_cachez00(BgL_arg1745z00_4331);
					}
					BGl_approxzd2setzd2typez12z12zzcfa_approxz00(
						((BgL_approxz00_bglt) BgL_arg1742z00_4328), BgL_arg1743z00_4329);
				}
				{
					BgL_conszd2appzd2_bglt BgL_auxz00_4940;

					{
						obj_t BgL_auxz00_4941;

						{	/* Cfa/pair.scm 178 */
							BgL_objectz00_bglt BgL_tmpz00_4942;

							BgL_tmpz00_4942 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4245));
							BgL_auxz00_4941 = BGL_OBJECT_WIDENING(BgL_tmpz00_4942);
						}
						BgL_auxz00_4940 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_4941);
					}
					return
						(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_4940))->
						BgL_approxz00);
				}
			}
		}

	}



/* &node-setup!-pre-cons1571 */
	obj_t BGl_z62nodezd2setupz12zd2prezd2cons1571za2zzcfa_pairz00(obj_t
		BgL_envz00_4246, obj_t BgL_nodez00_4247)
	{
		{	/* Cfa/pair.scm 147 */
			{	/* Cfa/pair.scm 149 */
				obj_t BgL_arg1711z00_4335;

				BgL_arg1711z00_4335 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_nodez00_4247))))->BgL_argsz00);
				BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg1711z00_4335);
			}
			{	/* Cfa/pair.scm 150 */
				obj_t BgL_cgetz00_4336;

				{
					BgL_prezd2conszd2setz12zd2appzc0_bglt BgL_auxz00_4952;

					{
						obj_t BgL_auxz00_4953;

						{	/* Cfa/pair.scm 150 */
							BgL_objectz00_bglt BgL_tmpz00_4954;

							BgL_tmpz00_4954 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4247));
							BgL_auxz00_4953 = BGL_OBJECT_WIDENING(BgL_tmpz00_4954);
						}
						BgL_auxz00_4952 =
							((BgL_prezd2conszd2setz12zd2appzc0_bglt) BgL_auxz00_4953);
					}
					BgL_cgetz00_4336 =
						(((BgL_prezd2conszd2setz12zd2appzc0_bglt)
							COBJECT(BgL_auxz00_4952))->BgL_getz00);
				}
				{	/* Cfa/pair.scm 150 */
					BgL_appz00_bglt BgL_nodez00_4337;

					{	/* Cfa/pair.scm 151 */
						long BgL_arg1719z00_4338;

						{	/* Cfa/pair.scm 151 */
							obj_t BgL_arg1725z00_4339;

							{	/* Cfa/pair.scm 151 */
								obj_t BgL_arg1726z00_4340;

								{	/* Cfa/pair.scm 151 */
									long BgL_arg1816z00_4341;

									{	/* Cfa/pair.scm 151 */
										long BgL_arg1817z00_4342;

										{	/* Cfa/pair.scm 151 */
											long BgL_res2072z00_4343;

											BgL_res2072z00_4343 =
												BGL_OBJECT_CLASS_NUM(
												((BgL_objectz00_bglt)
													((BgL_appz00_bglt) BgL_nodez00_4247)));
											BgL_arg1817z00_4342 = BgL_res2072z00_4343;
										}
										BgL_arg1816z00_4341 = (BgL_arg1817z00_4342 - OBJECT_TYPE);
									}
									BgL_arg1726z00_4340 =
										VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
										BgL_arg1816z00_4341);
								}
								BgL_arg1725z00_4339 =
									BGl_classzd2superzd2zz__objectz00(BgL_arg1726z00_4340);
							}
							{	/* Cfa/pair.scm 151 */
								long BgL_res2074z00_4344;

								{	/* Cfa/pair.scm 151 */
									obj_t BgL_tmpz00_4966;

									BgL_tmpz00_4966 = ((obj_t) BgL_arg1725z00_4339);
									BgL_res2074z00_4344 = BGL_CLASS_INDEX(BgL_tmpz00_4966);
								}
								BgL_arg1719z00_4338 = BgL_res2074z00_4344;
						}}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt)
								((BgL_appz00_bglt) BgL_nodez00_4247)), BgL_arg1719z00_4338);
					}
					{	/* Cfa/pair.scm 151 */
						BgL_objectz00_bglt BgL_tmpz00_4972;

						BgL_tmpz00_4972 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4247));
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4972, BFALSE);
					}
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4247));
					BgL_nodez00_4337 = ((BgL_appz00_bglt) BgL_nodez00_4247);
					{	/* Cfa/pair.scm 151 */

						{	/* Cfa/pair.scm 152 */
							BgL_conszd2setz12zd2appz12_bglt BgL_wide1186z00_4345;

							BgL_wide1186z00_4345 =
								((BgL_conszd2setz12zd2appz12_bglt)
								BOBJECT(GC_MALLOC(sizeof(struct
											BgL_conszd2setz12zd2appz12_bgl))));
							{	/* Cfa/pair.scm 152 */
								obj_t BgL_auxz00_4984;
								BgL_objectz00_bglt BgL_tmpz00_4980;

								BgL_auxz00_4984 = ((obj_t) BgL_wide1186z00_4345);
								BgL_tmpz00_4980 =
									((BgL_objectz00_bglt)
									((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4337)));
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4980, BgL_auxz00_4984);
							}
							((BgL_objectz00_bglt)
								((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4337)));
							{	/* Cfa/pair.scm 152 */
								long BgL_arg1712z00_4346;

								{	/* Cfa/pair.scm 152 */
									long BgL_res2075z00_4347;

									BgL_res2075z00_4347 =
										BGL_CLASS_INDEX(BGl_conszd2setz12zd2appz12zzcfa_info2z00);
									BgL_arg1712z00_4346 = BgL_res2075z00_4347;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt)
										((BgL_appz00_bglt)
											((BgL_appz00_bglt) BgL_nodez00_4337))),
									BgL_arg1712z00_4346);
							}
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4337)));
						}
						{
							BgL_conszd2setz12zd2appz12_bglt BgL_auxz00_4998;

							{
								obj_t BgL_auxz00_4999;

								{	/* Cfa/pair.scm 154 */
									BgL_objectz00_bglt BgL_tmpz00_5000;

									BgL_tmpz00_5000 =
										((BgL_objectz00_bglt)
										((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4337)));
									BgL_auxz00_4999 = BGL_OBJECT_WIDENING(BgL_tmpz00_5000);
								}
								BgL_auxz00_4998 =
									((BgL_conszd2setz12zd2appz12_bglt) BgL_auxz00_4999);
							}
							((((BgL_conszd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_4998))->
									BgL_approxz00) =
								((BgL_approxz00_bglt)
									BGl_makezd2typezd2approxz00zzcfa_approxz00(((BgL_typez00_bglt)
											BGl_za2unspecza2z00zztype_cachez00))), BUNSPEC);
						}
						{
							BgL_conszd2setz12zd2appz12_bglt BgL_auxz00_5009;

							{
								obj_t BgL_auxz00_5010;

								{	/* Cfa/pair.scm 153 */
									BgL_objectz00_bglt BgL_tmpz00_5011;

									BgL_tmpz00_5011 =
										((BgL_objectz00_bglt)
										((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4337)));
									BgL_auxz00_5010 = BGL_OBJECT_WIDENING(BgL_tmpz00_5011);
								}
								BgL_auxz00_5009 =
									((BgL_conszd2setz12zd2appz12_bglt) BgL_auxz00_5010);
							}
							((((BgL_conszd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_5009))->
									BgL_getz00) = ((obj_t) BgL_cgetz00_4336), BUNSPEC);
						}
						return
							((obj_t)
							((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4337)));
					}
				}
			}
		}

	}



/* &node-setup!-pre-cons1569 */
	obj_t BGl_z62nodezd2setupz12zd2prezd2cons1569za2zzcfa_pairz00(obj_t
		BgL_envz00_4248, obj_t BgL_nodez00_4249)
	{
		{	/* Cfa/pair.scm 134 */
			{	/* Tools/trace.sch 53 */
				obj_t BgL_arg1696z00_4349;

				BgL_arg1696z00_4349 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_nodez00_4249))))->BgL_argsz00);
				BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg1696z00_4349);
			}
			{	/* Tools/trace.sch 53 */
				obj_t BgL_cgetz00_4350;

				{
					BgL_prezd2conszd2refzd2appzd2_bglt BgL_auxz00_5025;

					{
						obj_t BgL_auxz00_5026;

						{	/* Tools/trace.sch 53 */
							BgL_objectz00_bglt BgL_tmpz00_5027;

							BgL_tmpz00_5027 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4249));
							BgL_auxz00_5026 = BGL_OBJECT_WIDENING(BgL_tmpz00_5027);
						}
						BgL_auxz00_5025 =
							((BgL_prezd2conszd2refzd2appzd2_bglt) BgL_auxz00_5026);
					}
					BgL_cgetz00_4350 =
						(((BgL_prezd2conszd2refzd2appzd2_bglt) COBJECT(BgL_auxz00_5025))->
						BgL_getz00);
				}
				{	/* Tools/trace.sch 53 */
					BgL_appz00_bglt BgL_nodez00_4351;

					{	/* Tools/trace.sch 53 */
						long BgL_arg1704z00_4352;

						{	/* Tools/trace.sch 53 */
							obj_t BgL_arg1707z00_4353;

							{	/* Tools/trace.sch 53 */
								obj_t BgL_arg1708z00_4354;

								{	/* Tools/trace.sch 53 */
									long BgL_arg1816z00_4355;

									{	/* Tools/trace.sch 53 */
										long BgL_arg1817z00_4356;

										{	/* Tools/trace.sch 53 */
											long BgL_res2068z00_4357;

											BgL_res2068z00_4357 =
												BGL_OBJECT_CLASS_NUM(
												((BgL_objectz00_bglt)
													((BgL_appz00_bglt) BgL_nodez00_4249)));
											BgL_arg1817z00_4356 = BgL_res2068z00_4357;
										}
										BgL_arg1816z00_4355 = (BgL_arg1817z00_4356 - OBJECT_TYPE);
									}
									BgL_arg1708z00_4354 =
										VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
										BgL_arg1816z00_4355);
								}
								BgL_arg1707z00_4353 =
									BGl_classzd2superzd2zz__objectz00(BgL_arg1708z00_4354);
							}
							{	/* Tools/trace.sch 53 */
								long BgL_res2070z00_4358;

								{	/* Tools/trace.sch 53 */
									obj_t BgL_tmpz00_5039;

									BgL_tmpz00_5039 = ((obj_t) BgL_arg1707z00_4353);
									BgL_res2070z00_4358 = BGL_CLASS_INDEX(BgL_tmpz00_5039);
								}
								BgL_arg1704z00_4352 = BgL_res2070z00_4358;
						}}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt)
								((BgL_appz00_bglt) BgL_nodez00_4249)), BgL_arg1704z00_4352);
					}
					{	/* Tools/trace.sch 53 */
						BgL_objectz00_bglt BgL_tmpz00_5045;

						BgL_tmpz00_5045 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4249));
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5045, BFALSE);
					}
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4249));
					BgL_nodez00_4351 = ((BgL_appz00_bglt) BgL_nodez00_4249);
					{	/* Tools/trace.sch 53 */

						{	/* Tools/trace.sch 53 */
							BgL_conszd2refzd2appz00_bglt BgL_wide1180z00_4359;

							BgL_wide1180z00_4359 =
								((BgL_conszd2refzd2appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_conszd2refzd2appz00_bgl))));
							{	/* Tools/trace.sch 53 */
								obj_t BgL_auxz00_5057;
								BgL_objectz00_bglt BgL_tmpz00_5053;

								BgL_auxz00_5057 = ((obj_t) BgL_wide1180z00_4359);
								BgL_tmpz00_5053 =
									((BgL_objectz00_bglt)
									((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4351)));
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5053, BgL_auxz00_5057);
							}
							((BgL_objectz00_bglt)
								((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4351)));
							{	/* Tools/trace.sch 53 */
								long BgL_arg1697z00_4360;

								{	/* Tools/trace.sch 53 */
									long BgL_res2071z00_4361;

									BgL_res2071z00_4361 =
										BGL_CLASS_INDEX(BGl_conszd2refzd2appz00zzcfa_info2z00);
									BgL_arg1697z00_4360 = BgL_res2071z00_4361;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt)
										((BgL_appz00_bglt)
											((BgL_appz00_bglt) BgL_nodez00_4351))),
									BgL_arg1697z00_4360);
							}
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4351)));
						}
						{
							BgL_conszd2refzd2appz00_bglt BgL_auxz00_5071;

							{
								obj_t BgL_auxz00_5072;

								{	/* Tools/trace.sch 53 */
									BgL_objectz00_bglt BgL_tmpz00_5073;

									BgL_tmpz00_5073 =
										((BgL_objectz00_bglt)
										((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4351)));
									BgL_auxz00_5072 = BGL_OBJECT_WIDENING(BgL_tmpz00_5073);
								}
								BgL_auxz00_5071 =
									((BgL_conszd2refzd2appz00_bglt) BgL_auxz00_5072);
							}
							((((BgL_conszd2refzd2appz00_bglt) COBJECT(BgL_auxz00_5071))->
									BgL_approxz00) =
								((BgL_approxz00_bglt)
									BGl_makezd2emptyzd2approxz00zzcfa_approxz00()), BUNSPEC);
						}
						{
							BgL_conszd2refzd2appz00_bglt BgL_auxz00_5081;

							{
								obj_t BgL_auxz00_5082;

								{	/* Tools/trace.sch 53 */
									BgL_objectz00_bglt BgL_tmpz00_5083;

									BgL_tmpz00_5083 =
										((BgL_objectz00_bglt)
										((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4351)));
									BgL_auxz00_5082 = BGL_OBJECT_WIDENING(BgL_tmpz00_5083);
								}
								BgL_auxz00_5081 =
									((BgL_conszd2refzd2appz00_bglt) BgL_auxz00_5082);
							}
							((((BgL_conszd2refzd2appz00_bglt) COBJECT(BgL_auxz00_5081))->
									BgL_getz00) = ((obj_t) BgL_cgetz00_4350), BUNSPEC);
						}
						return
							((obj_t)
							((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4351)));
					}
				}
			}
		}

	}



/* &node-setup!-pre-cons1567 */
	obj_t BGl_z62nodezd2setupz12zd2prezd2cons1567za2zzcfa_pairz00(obj_t
		BgL_envz00_4250, obj_t BgL_nodez00_4251)
	{
		{	/* Cfa/pair.scm 119 */
			{	/* Cfa/pair.scm 121 */
				obj_t BgL_arg1672z00_4363;

				BgL_arg1672z00_4363 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_nodez00_4251))))->BgL_argsz00);
				BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg1672z00_4363);
			}
			{	/* Cfa/pair.scm 122 */
				BgL_variablez00_bglt BgL_ownerz00_4364;

				{
					BgL_prezd2conszd2appz00_bglt BgL_auxz00_5097;

					{
						obj_t BgL_auxz00_5098;

						{	/* Cfa/pair.scm 122 */
							BgL_objectz00_bglt BgL_tmpz00_5099;

							BgL_tmpz00_5099 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4251));
							BgL_auxz00_5098 = BGL_OBJECT_WIDENING(BgL_tmpz00_5099);
						}
						BgL_auxz00_5097 = ((BgL_prezd2conszd2appz00_bglt) BgL_auxz00_5098);
					}
					BgL_ownerz00_4364 =
						(((BgL_prezd2conszd2appz00_bglt) COBJECT(BgL_auxz00_5097))->
						BgL_ownerz00);
				}
				{	/* Cfa/pair.scm 122 */
					BgL_appz00_bglt BgL_nodez00_4365;

					{	/* Cfa/pair.scm 123 */
						long BgL_arg1688z00_4366;

						{	/* Cfa/pair.scm 123 */
							obj_t BgL_arg1692z00_4367;

							{	/* Cfa/pair.scm 123 */
								obj_t BgL_arg1695z00_4368;

								{	/* Cfa/pair.scm 123 */
									long BgL_arg1816z00_4369;

									{	/* Cfa/pair.scm 123 */
										long BgL_arg1817z00_4370;

										{	/* Cfa/pair.scm 123 */
											long BgL_res2064z00_4371;

											BgL_res2064z00_4371 =
												BGL_OBJECT_CLASS_NUM(
												((BgL_objectz00_bglt)
													((BgL_appz00_bglt) BgL_nodez00_4251)));
											BgL_arg1817z00_4370 = BgL_res2064z00_4371;
										}
										BgL_arg1816z00_4369 = (BgL_arg1817z00_4370 - OBJECT_TYPE);
									}
									BgL_arg1695z00_4368 =
										VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
										BgL_arg1816z00_4369);
								}
								BgL_arg1692z00_4367 =
									BGl_classzd2superzd2zz__objectz00(BgL_arg1695z00_4368);
							}
							{	/* Cfa/pair.scm 123 */
								long BgL_res2066z00_4372;

								{	/* Cfa/pair.scm 123 */
									obj_t BgL_tmpz00_5111;

									BgL_tmpz00_5111 = ((obj_t) BgL_arg1692z00_4367);
									BgL_res2066z00_4372 = BGL_CLASS_INDEX(BgL_tmpz00_5111);
								}
								BgL_arg1688z00_4366 = BgL_res2066z00_4372;
						}}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt)
								((BgL_appz00_bglt) BgL_nodez00_4251)), BgL_arg1688z00_4366);
					}
					{	/* Cfa/pair.scm 123 */
						BgL_objectz00_bglt BgL_tmpz00_5117;

						BgL_tmpz00_5117 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4251));
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5117, BFALSE);
					}
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4251));
					BgL_nodez00_4365 = ((BgL_appz00_bglt) BgL_nodez00_4251);
					{	/* Cfa/pair.scm 123 */
						BgL_appz00_bglt BgL_wnodez00_4373;

						{	/* Cfa/pair.scm 124 */
							BgL_conszd2appzd2_bglt BgL_wide1174z00_4374;

							BgL_wide1174z00_4374 =
								((BgL_conszd2appzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_conszd2appzd2_bgl))));
							{	/* Cfa/pair.scm 124 */
								obj_t BgL_auxz00_5129;
								BgL_objectz00_bglt BgL_tmpz00_5125;

								BgL_auxz00_5129 = ((obj_t) BgL_wide1174z00_4374);
								BgL_tmpz00_5125 =
									((BgL_objectz00_bglt)
									((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4365)));
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5125, BgL_auxz00_5129);
							}
							((BgL_objectz00_bglt)
								((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4365)));
							{	/* Cfa/pair.scm 124 */
								long BgL_arg1685z00_4375;

								{	/* Cfa/pair.scm 124 */
									long BgL_res2067z00_4376;

									BgL_res2067z00_4376 =
										BGL_CLASS_INDEX(BGl_conszd2appzd2zzcfa_info2z00);
									BgL_arg1685z00_4375 = BgL_res2067z00_4376;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt)
										((BgL_appz00_bglt)
											((BgL_appz00_bglt) BgL_nodez00_4365))),
									BgL_arg1685z00_4375);
							}
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4365)));
						}
						{
							BgL_conszd2appzd2_bglt BgL_auxz00_5143;

							{
								obj_t BgL_auxz00_5144;

								{	/* Cfa/pair.scm 127 */
									BgL_objectz00_bglt BgL_tmpz00_5145;

									BgL_tmpz00_5145 =
										((BgL_objectz00_bglt)
										((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4365)));
									BgL_auxz00_5144 = BGL_OBJECT_WIDENING(BgL_tmpz00_5145);
								}
								BgL_auxz00_5143 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_5144);
							}
							((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_5143))->
									BgL_approxz00) =
								((BgL_approxz00_bglt)
									BGl_makezd2emptyzd2approxz00zzcfa_approxz00()), BUNSPEC);
						}
						{
							obj_t BgL_auxz00_5161;
							BgL_conszd2appzd2_bglt BgL_auxz00_5153;

							{	/* Cfa/pair.scm 126 */
								BgL_approxz00_bglt BgL_arg1686z00_4377;
								BgL_approxz00_bglt BgL_arg1687z00_4378;

								BgL_arg1686z00_4377 =
									BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
								BgL_arg1687z00_4378 =
									BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
								BgL_auxz00_5161 =
									MAKE_YOUNG_PAIR(
									((obj_t) BgL_arg1686z00_4377), ((obj_t) BgL_arg1687z00_4378));
							}
							{
								obj_t BgL_auxz00_5154;

								{	/* Cfa/pair.scm 126 */
									BgL_objectz00_bglt BgL_tmpz00_5155;

									BgL_tmpz00_5155 =
										((BgL_objectz00_bglt)
										((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4365)));
									BgL_auxz00_5154 = BGL_OBJECT_WIDENING(BgL_tmpz00_5155);
								}
								BgL_auxz00_5153 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_5154);
							}
							((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_5153))->
									BgL_approxesz00) = ((obj_t) BgL_auxz00_5161), BUNSPEC);
						}
						{
							BgL_conszd2appzd2_bglt BgL_auxz00_5168;

							{
								obj_t BgL_auxz00_5169;

								{	/* Cfa/pair.scm 122 */
									BgL_objectz00_bglt BgL_tmpz00_5170;

									BgL_tmpz00_5170 =
										((BgL_objectz00_bglt)
										((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4365)));
									BgL_auxz00_5169 = BGL_OBJECT_WIDENING(BgL_tmpz00_5170);
								}
								BgL_auxz00_5168 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_5169);
							}
							((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_5168))->
									BgL_lostzd2stampzd2) = ((long) ((long) -1)), BUNSPEC);
						}
						{
							BgL_conszd2appzd2_bglt BgL_auxz00_5177;

							{
								obj_t BgL_auxz00_5178;

								{	/* Cfa/pair.scm 125 */
									BgL_objectz00_bglt BgL_tmpz00_5179;

									BgL_tmpz00_5179 =
										((BgL_objectz00_bglt)
										((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4365)));
									BgL_auxz00_5178 = BGL_OBJECT_WIDENING(BgL_tmpz00_5179);
								}
								BgL_auxz00_5177 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_5178);
							}
							((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_5177))->
									BgL_ownerz00) =
								((BgL_variablez00_bglt) BgL_ownerz00_4364), BUNSPEC);
						}
						{
							BgL_conszd2appzd2_bglt BgL_auxz00_5186;

							{
								obj_t BgL_auxz00_5187;

								{	/* Cfa/pair.scm 122 */
									BgL_objectz00_bglt BgL_tmpz00_5188;

									BgL_tmpz00_5188 =
										((BgL_objectz00_bglt)
										((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4365)));
									BgL_auxz00_5187 = BGL_OBJECT_WIDENING(BgL_tmpz00_5188);
								}
								BgL_auxz00_5186 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_5187);
							}
							((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_5186))->
									BgL_stackzd2stampzd2) = ((obj_t) BNIL), BUNSPEC);
						}
						{
							BgL_conszd2appzd2_bglt BgL_auxz00_5195;

							{
								obj_t BgL_auxz00_5196;

								{	/* Cfa/pair.scm 122 */
									BgL_objectz00_bglt BgL_tmpz00_5197;

									BgL_tmpz00_5197 =
										((BgL_objectz00_bglt)
										((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4365)));
									BgL_auxz00_5196 = BGL_OBJECT_WIDENING(BgL_tmpz00_5197);
								}
								BgL_auxz00_5195 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_5196);
							}
							((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_5195))->
									BgL_seenzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
						}
						BgL_wnodez00_4373 =
							((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4365));
						{	/* Cfa/pair.scm 124 */

							{	/* Cfa/pair.scm 129 */
								BgL_approxz00_bglt BgL_arg1684z00_4379;

								BgL_arg1684z00_4379 =
									BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00(
									((BgL_typez00_bglt) BGl_za2pairza2z00zztype_cachez00),
									((BgL_nodez00_bglt) BgL_nodez00_4365));
								{
									BgL_conszd2appzd2_bglt BgL_auxz00_5209;

									{
										obj_t BgL_auxz00_5210;

										{	/* Cfa/pair.scm 129 */
											BgL_objectz00_bglt BgL_tmpz00_5211;

											BgL_tmpz00_5211 =
												((BgL_objectz00_bglt) BgL_wnodez00_4373);
											BgL_auxz00_5210 = BGL_OBJECT_WIDENING(BgL_tmpz00_5211);
										}
										BgL_auxz00_5209 =
											((BgL_conszd2appzd2_bglt) BgL_auxz00_5210);
									}
									return
										((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_5209))->
											BgL_approxz00) =
										((BgL_approxz00_bglt) BgL_arg1684z00_4379), BUNSPEC);
								}
							}
						}
					}
				}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_pairz00()
	{
		{	/* Cfa/pair.scm 17 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2092z00zzcfa_pairz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2092z00zzcfa_pairz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2092z00zzcfa_pairz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2092z00zzcfa_pairz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2092z00zzcfa_pairz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2092z00zzcfa_pairz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2092z00zzcfa_pairz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2092z00zzcfa_pairz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2092z00zzcfa_pairz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 3788706),
				BSTRING_TO_STRING(BGl_string2092z00zzcfa_pairz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string2092z00zzcfa_pairz00));
			BGl_modulezd2initializa7ationz75zzcfa_info3z00(((long) 0),
				BSTRING_TO_STRING(BGl_string2092z00zzcfa_pairz00));
			BGl_modulezd2initializa7ationz75zzcfa_loosez00(((long) 471177483),
				BSTRING_TO_STRING(BGl_string2092z00zzcfa_pairz00));
			BGl_modulezd2initializa7ationz75zzcfa_iteratez00(((long) 131412196),
				BSTRING_TO_STRING(BGl_string2092z00zzcfa_pairz00));
			BGl_modulezd2initializa7ationz75zzcfa_cfaz00(((long) 400853773),
				BSTRING_TO_STRING(BGl_string2092z00zzcfa_pairz00));
			BGl_modulezd2initializa7ationz75zzcfa_setupz00(((long) 168272051),
				BSTRING_TO_STRING(BGl_string2092z00zzcfa_pairz00));
			BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 468997780),
				BSTRING_TO_STRING(BGl_string2092z00zzcfa_pairz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(((long) 324810621),
				BSTRING_TO_STRING(BGl_string2092z00zzcfa_pairz00));
		}

	}

#ifdef __cplusplus
}
#endif
