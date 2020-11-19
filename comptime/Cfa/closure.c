/*===========================================================================*/
/*   (Cfa/closure.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/closure.scm) */
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

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

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

	typedef struct BgL_internzd2sfunzf2cinfoz20_bgl
	{
		bool_t BgL_polymorphiczf3zf3;
		struct BgL_approxz00_bgl *BgL_approxz00;
		long BgL_stampz00;
	}                               *BgL_internzd2sfunzf2cinfoz20_bglt;

	typedef struct BgL_svarzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_clozd2envzf3z21;
		long BgL_stampz00;
	}                      *BgL_svarzf2cinfozf2_bglt;

	typedef struct BgL_makezd2procedurezd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		obj_t BgL_valueszd2approxzd2;
		long BgL_lostzd2stampzd2;
		bool_t BgL_xzd2tzf3z21;
		bool_t BgL_xz00;
		bool_t BgL_tz00;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		obj_t BgL_stackzd2stampzd2;
	}                                *BgL_makezd2procedurezd2appz00_bglt;


	extern obj_t BGl_getzd2approxzd2typez00zzcfa_typez00(BgL_approxz00_bglt,
		obj_t);
	static bool_t BGl_lightzd2makezd2procedurez12z12zzcfa_closurez00();
	extern obj_t BGl_setzd2lengthzd2zzcfa_setz00(obj_t);
	static obj_t BGl_z62getzd2procedurezd2listz62zzcfa_closurez00(obj_t);
	static bool_t BGl_mergezd2appzd2typesz12z12zzcfa_closurez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_addzd2makezd2procedurez12z12zzcfa_closurez00(BgL_nodez00_bglt);
	static obj_t BGl_z62stopzd2closurezd2cachez62zzcfa_closurez00(obj_t);
	static obj_t BGl_objectzd2initzd2zzcfa_closurez00();
	BGL_EXPORTED_DECL obj_t
		BGl_addzd2funcallz12zc0zzcfa_closurez00(BgL_nodez00_bglt);
	extern obj_t BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00(obj_t,
		BgL_approxz00_bglt);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_closurez00();
	extern BgL_typez00_bglt
		BGl_getzd2bigloozd2typez00zztype_cachez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_typezd2closuresz12zc0zzcfa_closurez00();
	BGL_EXPORTED_DECL obj_t
		BGl_closurezd2optimiza7ationz12z67zzcfa_closurez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_closurezd2optimiza7ationzf3z86zzcfa_closurez00();
	extern BgL_typez00_bglt
		BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t
		BGl_getzd2nodezd2atomzd2valuezd2zzcfa_approxz00(BgL_nodez00_bglt);
	extern obj_t
		BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_getzd2procedurezd2listz00zzcfa_closurez00();
	static bool_t BGl_showze70ze7zzcfa_closurez00(obj_t, obj_t);
	static obj_t BGl_za2procedurezd2lzd2setz12za2z12zzcfa_closurez00 = BUNSPEC;
	extern obj_t BGl_lightzd2typez12zc0zzcfa_ltypez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stopzd2closurezd2cachez00zzcfa_closurez00();
	static obj_t BGl_z62closurezd2optimiza7ationz12z05zzcfa_closurez00(obj_t,
		obj_t);
	static obj_t BGl_z62closurezd2optimiza7ationzf3ze4zzcfa_closurez00(obj_t);
	static obj_t BGl_z62addzd2funcallz12za2zzcfa_closurez00(obj_t, obj_t);
	extern obj_t BGl_za2unsafezd2typeza2zd2zzengine_paramz00;
	static obj_t BGl_gczd2rootszd2initz00zzcfa_closurez00();
	static obj_t BGl_z62addzd2procedurezd2refz12z70zzcfa_closurez00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31635ze3ze5zzcfa_closurez00(obj_t,
		obj_t);
	static bool_t BGl_lightzd2funcallz12zc0zzcfa_closurez00();
	extern obj_t BGl_makezd2procedurezd2appz00zzcfa_info2z00;
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	static obj_t BGl_za2procedurezd2elzd2setz12za2z12zzcfa_closurez00 = BUNSPEC;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern BgL_typez00_bglt
		BGl_getzd2bigloozd2definedzd2typezd2zztype_cachez00(BgL_typez00_bglt);
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	static obj_t BGl_za2makezd2elzd2procedureza2z00zzcfa_closurez00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_closurez00 = BUNSPEC;
	extern obj_t BGl_getzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcfa_closurez00();
	BGL_EXPORTED_DECL obj_t
		BGl_addzd2procedurezd2refz12z12zzcfa_closurez00(BgL_nodez00_bglt);
	extern obj_t BGl_setzd2ze3listz31zzcfa_setz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzcfa_closurez00();
	static obj_t BGl_showzd2Xzd2Tz00zzcfa_closurez00(obj_t);
	static obj_t BGl_z62typezd2closuresz12za2zzcfa_closurez00(obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static obj_t BGl_za2makezd2lzd2procedureza2z00zzcfa_closurez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62approxzd2procedurezd2elzf3z91zzcfa_closurez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_approxzd2procedurezd2elzf3zf3zzcfa_closurez00(BgL_approxz00_bglt);
	static bool_t BGl_Xz12z12zzcfa_closurez00(obj_t);
	static obj_t BGl_za2makezd2procedurezd2listza2z00zzcfa_closurez00 = BUNSPEC;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_Tzd2fixzd2pointz12z12zzcfa_closurez00(obj_t);
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_closurez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_ltypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_setz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_cfaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_za2procedurezd2lzd2refza2z00zzcfa_closurez00 = BUNSPEC;
	static obj_t BGl_za2procedurezd2refzd2listza2z00zzcfa_closurez00 = BUNSPEC;
	static bool_t BGl_lightzd2accessz12zc0zzcfa_closurez00();
	static obj_t BGl_za2procedurezd2refza2zd2zzcfa_closurez00 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zzcfa_closurez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_closurez00();
	extern obj_t BGl_scnstz00zzast_varz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_closurez00();
	static obj_t BGl_startzd2closurezd2cachez00zzcfa_closurez00();
	static obj_t BGl_za2funcallzd2listza2zd2zzcfa_closurez00 = BUNSPEC;
	static obj_t BGl_za2procedurezd2setz12za2zc0zzcfa_closurez00 = BUNSPEC;
	static obj_t BGl_za2procedurezd2elzd2refza2z00zzcfa_closurez00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31663ze3ze5zzcfa_closurez00(obj_t,
		obj_t);
	extern BgL_approxz00_bglt BGl_cfaz12z12zzcfa_cfaz00(BgL_nodez00_bglt);
	static obj_t BGl_z62addzd2makezd2procedurez12z70zzcfa_closurez00(obj_t,
		obj_t);
	extern obj_t BGl_za2procedurezd2elza2zd2zztype_cachez00;
	extern obj_t BGl_globalz00zzast_varz00;
	static bool_t BGl_mergezd2appzd2returnzd2typesz12zc0zzcfa_closurez00(obj_t,
		BgL_approxz00_bglt);
	static obj_t __cnst[20];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2249z00zzcfa_closurez00,
		BgL_bgl_za762za7c3za704anonymo2259za7,
		BGl_z62zc3z04anonymousza31635ze3ze5zzcfa_closurez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2250z00zzcfa_closurez00,
		BgL_bgl_za762za7c3za704anonymo2260za7,
		BGl_z62zc3z04anonymousza31663ze3ze5zzcfa_closurez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_addzd2makezd2procedurez12zd2envzc0zzcfa_closurez00,
		BgL_bgl_za762addza7d2makeza7d22261za7,
		BGl_z62addzd2makezd2procedurez12z70zzcfa_closurez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_addzd2funcallz12zd2envz12zzcfa_closurez00,
		BgL_bgl_za762addza7d2funcall2262z00,
		BGl_z62addzd2funcallz12za2zzcfa_closurez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2248z00zzcfa_closurez00,
		BgL_bgl_string2248za700za7za7c2263za7, "   . Light closures", 19);
	      DEFINE_STRING(BGl_string2251z00zzcfa_closurez00,
		BgL_bgl_string2251za700za7za7c2264za7, ": ", 2);
	      DEFINE_STRING(BGl_string2252z00zzcfa_closurez00,
		BgL_bgl_string2252za700za7za7c2265za7, "      ", 6);
	      DEFINE_STRING(BGl_string2253z00zzcfa_closurez00,
		BgL_bgl_string2253za700za7za7c2266za7, "        ", 8);
	      DEFINE_STRING(BGl_string2254z00zzcfa_closurez00,
		BgL_bgl_string2254za700za7za7c2267za7, "cfa_closure", 11);
	      DEFINE_STRING(BGl_string2255z00zzcfa_closurez00,
		BgL_bgl_string2255za700za7za7c2268za7,
		"make-l-procedure make-el-procedure procedure-el-set! procedure-el-ref procedure-l-set! procedure-l-ref procedure-set! foreign procedure-ref T X nothing-to-do slfun selfun done ok \077\077? light elight static ",
		203);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_addzd2procedurezd2refz12zd2envzc0zzcfa_closurez00,
		BgL_bgl_za762addza7d2procedu2269z00,
		BGl_z62addzd2procedurezd2refz12z70zzcfa_closurez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2closuresz12zd2envz12zzcfa_closurez00,
		BgL_bgl_za762typeza7d2closur2270z00,
		BGl_z62typezd2closuresz12za2zzcfa_closurez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2procedurezd2listzd2envzd2zzcfa_closurez00,
		BgL_bgl_za762getza7d2procedu2271z00,
		BGl_z62getzd2procedurezd2listz62zzcfa_closurez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_closurezd2optimiza7ationzf3zd2envz54zzcfa_closurez00,
		BgL_bgl_za762closureza7d2opt2272z00,
		BGl_z62closurezd2optimiza7ationzf3ze4zzcfa_closurez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stopzd2closurezd2cachezd2envzd2zzcfa_closurez00,
		BgL_bgl_za762stopza7d2closur2273z00,
		BGl_z62stopzd2closurezd2cachez62zzcfa_closurez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_closurezd2optimiza7ationz12zd2envzb5zzcfa_closurez00,
		BgL_bgl_za762closureza7d2opt2274z00,
		BGl_z62closurezd2optimiza7ationz12z05zzcfa_closurez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_approxzd2procedurezd2elzf3zd2envz21zzcfa_closurez00,
		BgL_bgl_za762approxza7d2proc2275z00,
		BGl_z62approxzd2procedurezd2elzf3z91zzcfa_closurez00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_za2procedurezd2lzd2setz12za2z12zzcfa_closurez00));
		     ADD_ROOT((void
				*) (&BGl_za2procedurezd2elzd2setz12za2z12zzcfa_closurez00));
		     ADD_ROOT((void
				*) (&BGl_za2makezd2elzd2procedureza2z00zzcfa_closurez00));
		     ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzcfa_closurez00));
		     ADD_ROOT((void
				*) (&BGl_za2makezd2lzd2procedureza2z00zzcfa_closurez00));
		     ADD_ROOT((void
				*) (&BGl_za2makezd2procedurezd2listza2z00zzcfa_closurez00));
		     ADD_ROOT((void *) (&BGl_za2procedurezd2lzd2refza2z00zzcfa_closurez00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2procedurezd2refzd2listza2z00zzcfa_closurez00));
		     ADD_ROOT((void *) (&BGl_za2procedurezd2refza2zd2zzcfa_closurez00));
		     ADD_ROOT((void *) (&BGl_za2funcallzd2listza2zd2zzcfa_closurez00));
		     ADD_ROOT((void *) (&BGl_za2procedurezd2setz12za2zc0zzcfa_closurez00));
		   
			 ADD_ROOT((void *) (&BGl_za2procedurezd2elzd2refza2z00zzcfa_closurez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_closurez00(long
		BgL_checksumz00_4195, char *BgL_fromz00_4196)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_closurez00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_closurez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcfa_closurez00();
					BGl_libraryzd2moduleszd2initz00zzcfa_closurez00();
					BGl_cnstzd2initzd2zzcfa_closurez00();
					BGl_importedzd2moduleszd2initz00zzcfa_closurez00();
					return BGl_toplevelzd2initzd2zzcfa_closurez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_closurez00()
	{
		{	/* Cfa/closure.scm 25 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_closure");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_closure");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cfa_closure");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cfa_closure");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_closure");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_closure");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_closurez00()
	{
		{	/* Cfa/closure.scm 25 */
			{	/* Cfa/closure.scm 25 */
				obj_t BgL_cportz00_4182;

				{	/* Cfa/closure.scm 25 */
					obj_t BgL_stringz00_4190;

					BgL_stringz00_4190 = BGl_string2255z00zzcfa_closurez00;
					{	/* Cfa/closure.scm 25 */
						obj_t BgL_startz00_4191;

						BgL_startz00_4191 = BINT(((long) 0));
						{	/* Cfa/closure.scm 25 */
							obj_t BgL_endz00_4192;

							BgL_endz00_4192 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_4190)));
							{	/* Cfa/closure.scm 25 */

								BgL_cportz00_4182 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_4190, BgL_startz00_4191, BgL_endz00_4192);
				}}}}
				{
					long BgL_iz00_4183;

					BgL_iz00_4183 = ((long) 19);
				BgL_loopz00_4184:
					if ((BgL_iz00_4183 == ((long) -1)))
						{	/* Cfa/closure.scm 25 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/closure.scm 25 */
							{	/* Cfa/closure.scm 25 */
								obj_t BgL_arg2257z00_4186;

								{	/* Cfa/closure.scm 25 */

									{	/* Cfa/closure.scm 25 */
										obj_t BgL_locationz00_4188;

										BgL_locationz00_4188 = BBOOL(((bool_t) 0));
										{	/* Cfa/closure.scm 25 */

											BgL_arg2257z00_4186 =
												BGl_readz00zz__readerz00(BgL_cportz00_4182,
												BgL_locationz00_4188);
										}
									}
								}
								{	/* Cfa/closure.scm 25 */
									int BgL_tmpz00_4220;

									BgL_tmpz00_4220 = (int) (BgL_iz00_4183);
									CNST_TABLE_SET(BgL_tmpz00_4220, BgL_arg2257z00_4186);
							}}
							{	/* Cfa/closure.scm 25 */
								int BgL_auxz00_4189;

								BgL_auxz00_4189 = (int) ((BgL_iz00_4183 - ((long) 1)));
								{
									long BgL_iz00_4225;

									BgL_iz00_4225 = (long) (BgL_auxz00_4189);
									BgL_iz00_4183 = BgL_iz00_4225;
									goto BgL_loopz00_4184;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcfa_closurez00()
	{
		{	/* Cfa/closure.scm 25 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_closurez00()
	{
		{	/* Cfa/closure.scm 25 */
			BGl_za2funcallzd2listza2zd2zzcfa_closurez00 = BNIL;
			BGl_za2makezd2procedurezd2listza2z00zzcfa_closurez00 = BNIL;
			BGl_za2procedurezd2refzd2listza2z00zzcfa_closurez00 = BNIL;
			BGl_za2procedurezd2refza2zd2zzcfa_closurez00 = BFALSE;
			BGl_za2procedurezd2setz12za2zc0zzcfa_closurez00 = BFALSE;
			BGl_za2procedurezd2lzd2refza2z00zzcfa_closurez00 = BFALSE;
			BGl_za2procedurezd2lzd2setz12za2z12zzcfa_closurez00 = BFALSE;
			BGl_za2procedurezd2elzd2refza2z00zzcfa_closurez00 = BFALSE;
			BGl_za2procedurezd2elzd2setz12za2z12zzcfa_closurez00 = BFALSE;
			BGl_za2makezd2elzd2procedureza2z00zzcfa_closurez00 = BFALSE;
			return (BGl_za2makezd2lzd2procedureza2z00zzcfa_closurez00 =
				BFALSE, BUNSPEC);
		}

	}



/* closure-optimization? */
	BGL_EXPORTED_DEF obj_t BGl_closurezd2optimiza7ationzf3z86zzcfa_closurez00()
	{
		{	/* Cfa/closure.scm 55 */
			{	/* Cfa/closure.scm 56 */
				long BgL_n1z00_3800;

				BgL_n1z00_3800 = (long) CINT(BGl_za2optimza2z00zzengine_paramz00);
				return BBOOL((BgL_n1z00_3800 >= ((long) 2)));
		}}

	}



/* &closure-optimization? */
	obj_t BGl_z62closurezd2optimiza7ationzf3ze4zzcfa_closurez00(obj_t
		BgL_envz00_4162)
	{
		{	/* Cfa/closure.scm 55 */
			return BGl_closurezd2optimiza7ationzf3z86zzcfa_closurez00();
		}

	}



/* closure-optimization! */
	BGL_EXPORTED_DEF obj_t
		BGl_closurezd2optimiza7ationz12z67zzcfa_closurez00(obj_t BgL_globalsz00_3)
	{
		{	/* Cfa/closure.scm 61 */
			if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 2)))
				{	/* Cfa/closure.scm 62 */
					{	/* Cfa/closure.scm 63 */
						obj_t BgL_list1560z00_2798;

						{	/* Cfa/closure.scm 63 */
							obj_t BgL_arg1561z00_2799;

							BgL_arg1561z00_2799 =
								MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
							BgL_list1560z00_2798 =
								MAKE_YOUNG_PAIR(BGl_string2248z00zzcfa_closurez00,
								BgL_arg1561z00_2799);
						}
						BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
							BgL_list1560z00_2798);
					}
					BGl_startzd2closurezd2cachez00zzcfa_closurez00();
					{
						obj_t BgL_l1512z00_2801;

						BgL_l1512z00_2801 =
							BGl_za2makezd2procedurezd2listza2z00zzcfa_closurez00;
					BgL_zc3z04anonymousza31562ze3z87_2802:
						if (PAIRP(BgL_l1512z00_2801))
							{	/* Cfa/closure.scm 72 */
								{	/* Cfa/closure.scm 74 */
									obj_t BgL_appz00_2804;

									BgL_appz00_2804 = CAR(BgL_l1512z00_2801);
									{	/* Cfa/closure.scm 75 */
										BgL_variablez00_bglt BgL_funz00_2806;

										{
											BgL_varz00_bglt BgL_auxz00_4244;

											{	/* Cfa/closure.scm 75 */
												obj_t BgL_pairz00_3806;

												BgL_pairz00_3806 =
													(((BgL_appz00_bglt) COBJECT(
															((BgL_appz00_bglt)
																((BgL_appz00_bglt) BgL_appz00_2804))))->
													BgL_argsz00);
												BgL_auxz00_4244 =
													((BgL_varz00_bglt) CAR(BgL_pairz00_3806));
											}
											BgL_funz00_2806 =
												(((BgL_varz00_bglt) COBJECT(BgL_auxz00_4244))->
												BgL_variablez00);
										}
										{	/* Cfa/closure.scm 75 */
											obj_t BgL_cloz00_2807;

											BgL_cloz00_2807 =
												(((BgL_funz00_bglt) COBJECT(
														((BgL_funz00_bglt)
															((BgL_sfunz00_bglt)
																(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_globalz00_bglt)
																					BgL_funz00_2806))))->
																	BgL_valuez00)))))->BgL_thezd2closurezd2);
											{	/* Cfa/closure.scm 76 */
												bool_t BgL_lostzf3zf3_2808;

												{	/* Cfa/closure.scm 77 */
													long BgL_arg1605z00_2832;

													{
														BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4257;

														{
															obj_t BgL_auxz00_4258;

															{	/* Cfa/closure.scm 77 */
																BgL_objectz00_bglt BgL_tmpz00_4259;

																BgL_tmpz00_4259 =
																	((BgL_objectz00_bglt)
																	((BgL_appz00_bglt) BgL_appz00_2804));
																BgL_auxz00_4258 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_4259);
															}
															BgL_auxz00_4257 =
																((BgL_makezd2procedurezd2appz00_bglt)
																BgL_auxz00_4258);
														}
														BgL_arg1605z00_2832 =
															(((BgL_makezd2procedurezd2appz00_bglt)
																COBJECT(BgL_auxz00_4257))->BgL_lostzd2stampzd2);
													}
													BgL_lostzf3zf3_2808 =
														(BgL_arg1605z00_2832 > ((long) -1));
												}
												{	/* Cfa/closure.scm 77 */
													obj_t BgL_siza7eza7_2809;

													{	/* Cfa/closure.scm 78 */
														obj_t BgL_arg1599z00_2830;

														{	/* Cfa/closure.scm 78 */
															obj_t BgL_pairz00_3813;

															BgL_pairz00_3813 =
																(((BgL_appz00_bglt) COBJECT(
																		((BgL_appz00_bglt)
																			((BgL_appz00_bglt) BgL_appz00_2804))))->
																BgL_argsz00);
															BgL_arg1599z00_2830 =
																CAR(CDR(CDR(BgL_pairz00_3813)));
														}
														BgL_siza7eza7_2809 =
															BGl_getzd2nodezd2atomzd2valuezd2zzcfa_approxz00(
															((BgL_nodez00_bglt) BgL_arg1599z00_2830));
													}
													{	/* Cfa/closure.scm 78 */

														{	/* Cfa/closure.scm 80 */
															bool_t BgL_test2280z00_4274;

															if (BgL_lostzf3zf3_2808)
																{	/* Cfa/closure.scm 80 */
																	BgL_test2280z00_4274 = ((bool_t) 1);
																}
															else
																{	/* Cfa/closure.scm 81 */
																	bool_t BgL_test2282z00_4276;

																	{
																		BgL_makezd2procedurezd2appz00_bglt
																			BgL_auxz00_4277;
																		{
																			obj_t BgL_auxz00_4278;

																			{	/* Cfa/closure.scm 81 */
																				BgL_objectz00_bglt BgL_tmpz00_4279;

																				BgL_tmpz00_4279 =
																					((BgL_objectz00_bglt)
																					((BgL_appz00_bglt) BgL_appz00_2804));
																				BgL_auxz00_4278 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_4279);
																			}
																			BgL_auxz00_4277 =
																				((BgL_makezd2procedurezd2appz00_bglt)
																				BgL_auxz00_4278);
																		}
																		BgL_test2282z00_4276 =
																			(((BgL_makezd2procedurezd2appz00_bglt)
																				COBJECT(BgL_auxz00_4277))->
																			BgL_xzd2tzf3z21);
																	}
																	if (BgL_test2282z00_4276)
																		{	/* Cfa/closure.scm 81 */
																			if (
																				((((BgL_funz00_bglt) COBJECT(
																								((BgL_funz00_bglt)
																									((BgL_sfunz00_bglt)
																										(((BgL_variablez00_bglt)
																												COBJECT((
																														(BgL_variablez00_bglt)
																														((BgL_globalz00_bglt) BgL_funz00_2806))))->BgL_valuez00)))))->BgL_arityz00) < ((long) 0)))
																				{	/* Cfa/closure.scm 82 */
																					BgL_test2280z00_4274 = ((bool_t) 1);
																				}
																			else
																				{	/* Cfa/closure.scm 82 */
																					if (INTEGERP(BgL_siza7eza7_2809))
																						{	/* Cfa/closure.scm 83 */
																							if (BGl_isazf3zf3zz__objectz00
																								(BgL_cloz00_2807,
																									BGl_globalz00zzast_varz00))
																								{	/* Cfa/closure.scm 84 */
																									if (
																										((((BgL_globalz00_bglt)
																													COBJECT((
																															(BgL_globalz00_bglt)
																															BgL_cloz00_2807)))->
																												BgL_importz00) ==
																											CNST_TABLE_REF(((long)
																													0))))
																										{	/* Cfa/closure.scm 85 */
																											BgL_test2280z00_4274 =
																												((bool_t) 0);
																										}
																									else
																										{	/* Cfa/closure.scm 85 */
																											BgL_test2280z00_4274 =
																												((bool_t) 1);
																										}
																								}
																							else
																								{	/* Cfa/closure.scm 84 */
																									BgL_test2280z00_4274 =
																										((bool_t) 0);
																								}
																						}
																					else
																						{	/* Cfa/closure.scm 83 */
																							BgL_test2280z00_4274 =
																								((bool_t) 1);
																						}
																				}
																		}
																	else
																		{	/* Cfa/closure.scm 81 */
																			BgL_test2280z00_4274 = ((bool_t) 1);
																		}
																}
															if (BgL_test2280z00_4274)
																{	/* Cfa/closure.scm 80 */
																	BNIL;
																}
															else
																{	/* Cfa/closure.scm 80 */
																	{
																		BgL_makezd2procedurezd2appz00_bglt
																			BgL_auxz00_4302;
																		{
																			obj_t BgL_auxz00_4303;

																			{	/* Cfa/closure.scm 102 */
																				BgL_objectz00_bglt BgL_tmpz00_4304;

																				BgL_tmpz00_4304 =
																					((BgL_objectz00_bglt)
																					((BgL_appz00_bglt) BgL_appz00_2804));
																				BgL_auxz00_4303 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_4304);
																			}
																			BgL_auxz00_4302 =
																				((BgL_makezd2procedurezd2appz00_bglt)
																				BgL_auxz00_4303);
																		}
																		((((BgL_makezd2procedurezd2appz00_bglt)
																					COBJECT(BgL_auxz00_4302))->BgL_xz00) =
																			((bool_t) ((bool_t) 1)), BUNSPEC);
																	}
																	{
																		BgL_makezd2procedurezd2appz00_bglt
																			BgL_auxz00_4310;
																		{
																			obj_t BgL_auxz00_4311;

																			{	/* Cfa/closure.scm 103 */
																				BgL_objectz00_bglt BgL_tmpz00_4312;

																				BgL_tmpz00_4312 =
																					((BgL_objectz00_bglt)
																					((BgL_appz00_bglt) BgL_appz00_2804));
																				BgL_auxz00_4311 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_4312);
																			}
																			BgL_auxz00_4310 =
																				((BgL_makezd2procedurezd2appz00_bglt)
																				BgL_auxz00_4311);
																		}
																		((((BgL_makezd2procedurezd2appz00_bglt)
																					COBJECT(BgL_auxz00_4310))->BgL_tz00) =
																			((bool_t) ((bool_t) 1)), BUNSPEC);
																	}
																}
														}
													}
												}
											}
										}
									}
								}
								{
									obj_t BgL_l1512z00_4318;

									BgL_l1512z00_4318 = CDR(BgL_l1512z00_2801);
									BgL_l1512z00_2801 = BgL_l1512z00_4318;
									goto BgL_zc3z04anonymousza31562ze3z87_2802;
								}
							}
						else
							{	/* Cfa/closure.scm 72 */
								((bool_t) 1);
							}
					}
					BGl_Xz12z12zzcfa_closurez00
						(BGl_za2funcallzd2listza2zd2zzcfa_closurez00);
					BGl_Tzd2fixzd2pointz12z12zzcfa_closurez00
						(BGl_za2funcallzd2listza2zd2zzcfa_closurez00);
					{
						obj_t BgL_l1514z00_2839;

						BgL_l1514z00_2839 =
							BGl_za2makezd2procedurezd2listza2z00zzcfa_closurez00;
					BgL_zc3z04anonymousza31614ze3z87_2840:
						if (PAIRP(BgL_l1514z00_2839))
							{	/* Cfa/closure.scm 110 */
								{	/* Cfa/closure.scm 111 */
									obj_t BgL_allocz00_2842;

									BgL_allocz00_2842 = CAR(BgL_l1514z00_2839);
									{	/* Cfa/closure.scm 112 */
										BgL_valuez00_bglt BgL_fz00_2844;

										{
											BgL_variablez00_bglt BgL_auxz00_4325;

											{
												BgL_varz00_bglt BgL_auxz00_4326;

												{	/* Cfa/closure.scm 112 */
													obj_t BgL_pairz00_3832;

													BgL_pairz00_3832 =
														(((BgL_appz00_bglt) COBJECT(
																((BgL_appz00_bglt)
																	((BgL_appz00_bglt) BgL_allocz00_2842))))->
														BgL_argsz00);
													BgL_auxz00_4326 =
														((BgL_varz00_bglt) CAR(BgL_pairz00_3832));
												}
												BgL_auxz00_4325 =
													(((BgL_varz00_bglt) COBJECT(BgL_auxz00_4326))->
													BgL_variablez00);
											}
											BgL_fz00_2844 =
												(((BgL_variablez00_bglt) COBJECT(BgL_auxz00_4325))->
												BgL_valuez00);
										}
										{	/* Cfa/closure.scm 114 */
											bool_t BgL_test2288z00_4334;

											{
												BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4335;

												{
													obj_t BgL_auxz00_4336;

													{	/* Cfa/closure.scm 114 */
														BgL_objectz00_bglt BgL_tmpz00_4337;

														BgL_tmpz00_4337 =
															((BgL_objectz00_bglt)
															((BgL_appz00_bglt) BgL_allocz00_2842));
														BgL_auxz00_4336 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_4337);
													}
													BgL_auxz00_4335 =
														((BgL_makezd2procedurezd2appz00_bglt)
														BgL_auxz00_4336);
												}
												BgL_test2288z00_4334 =
													(((BgL_makezd2procedurezd2appz00_bglt)
														COBJECT(BgL_auxz00_4335))->BgL_xz00);
											}
											if (BgL_test2288z00_4334)
												{	/* Cfa/closure.scm 114 */
													obj_t BgL_vz00_3837;

													BgL_vz00_3837 = CNST_TABLE_REF(((long) 1));
													((((BgL_sfunz00_bglt) COBJECT(
																	((BgL_sfunz00_bglt) BgL_fz00_2844)))->
															BgL_strengthz00) =
														((obj_t) BgL_vz00_3837), BUNSPEC);
												}
											else
												{	/* Cfa/closure.scm 115 */
													bool_t BgL_test2289z00_4346;

													{
														BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4347;

														{
															obj_t BgL_auxz00_4348;

															{	/* Cfa/closure.scm 115 */
																BgL_objectz00_bglt BgL_tmpz00_4349;

																BgL_tmpz00_4349 =
																	((BgL_objectz00_bglt)
																	((BgL_appz00_bglt) BgL_allocz00_2842));
																BgL_auxz00_4348 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_4349);
															}
															BgL_auxz00_4347 =
																((BgL_makezd2procedurezd2appz00_bglt)
																BgL_auxz00_4348);
														}
														BgL_test2289z00_4346 =
															(((BgL_makezd2procedurezd2appz00_bglt)
																COBJECT(BgL_auxz00_4347))->BgL_tz00);
													}
													if (BgL_test2289z00_4346)
														{	/* Cfa/closure.scm 115 */
															obj_t BgL_vz00_3840;

															BgL_vz00_3840 = CNST_TABLE_REF(((long) 2));
															((((BgL_sfunz00_bglt) COBJECT(
																			((BgL_sfunz00_bglt) BgL_fz00_2844)))->
																	BgL_strengthz00) =
																((obj_t) BgL_vz00_3840), BUNSPEC);
														}
													else
														{	/* Cfa/closure.scm 116 */
															obj_t BgL_vz00_3842;

															BgL_vz00_3842 = CNST_TABLE_REF(((long) 3));
															((((BgL_sfunz00_bglt) COBJECT(
																			((BgL_sfunz00_bglt) BgL_fz00_2844)))->
																	BgL_strengthz00) =
																((obj_t) BgL_vz00_3842), BUNSPEC);
								}}}}}
								{
									obj_t BgL_l1514z00_4361;

									BgL_l1514z00_4361 = CDR(BgL_l1514z00_2839);
									BgL_l1514z00_2839 = BgL_l1514z00_4361;
									goto BgL_zc3z04anonymousza31614ze3z87_2840;
								}
							}
						else
							{	/* Cfa/closure.scm 110 */
								((bool_t) 1);
							}
					}
					BGl_showzd2Xzd2Tz00zzcfa_closurez00
						(BGl_za2makezd2procedurezd2listza2z00zzcfa_closurez00);
					BGl_lightzd2funcallz12zc0zzcfa_closurez00();
					BGl_lightzd2accessz12zc0zzcfa_closurez00();
					BGl_lightzd2makezd2procedurez12z12zzcfa_closurez00();
					return BGl_lightzd2typez12zc0zzcfa_ltypez00(BgL_globalsz00_3);
				}
			else
				{	/* Cfa/closure.scm 62 */
					return BFALSE;
				}
		}

	}



/* &closure-optimization! */
	obj_t BGl_z62closurezd2optimiza7ationz12z05zzcfa_closurez00(obj_t
		BgL_envz00_4163, obj_t BgL_globalsz00_4164)
	{
		{	/* Cfa/closure.scm 61 */
			return
				BGl_closurezd2optimiza7ationz12z67zzcfa_closurez00(BgL_globalsz00_4164);
		}

	}



/* X! */
	bool_t BGl_Xz12z12zzcfa_closurez00(obj_t BgL_funcallzd2listzd2_4)
	{
		{	/* Cfa/closure.scm 132 */
			{
				obj_t BgL_l1516z00_2853;

				BgL_l1516z00_2853 = BgL_funcallzd2listzd2_4;
			BgL_zc3z04anonymousza31632ze3z87_2854:
				if (PAIRP(BgL_l1516z00_2853))
					{	/* Cfa/closure.scm 134 */
						{	/* Cfa/closure.scm 135 */
							BgL_funcallz00_bglt BgL_appz00_2856;

							BgL_appz00_2856 = ((BgL_funcallz00_bglt) CAR(BgL_l1516z00_2853));
							{	/* Cfa/closure.scm 136 */
								BgL_nodez00_bglt BgL_funz00_2857;

								BgL_funz00_2857 =
									(((BgL_funcallz00_bglt) COBJECT(BgL_appz00_2856))->
									BgL_funz00);
								{	/* Cfa/closure.scm 136 */
									BgL_approxz00_bglt BgL_approxz00_2858;

									BgL_approxz00_2858 =
										BGl_cfaz12z12zzcfa_cfaz00(BgL_funz00_2857);
									{	/* Cfa/closure.scm 137 */
										obj_t BgL_allocz00_2859;

										BgL_allocz00_2859 =
											(((BgL_approxz00_bglt) COBJECT(BgL_approxz00_2858))->
											BgL_allocsz00);
										{	/* Cfa/closure.scm 138 */
											BgL_typez00_bglt BgL_typez00_2860;

											BgL_typez00_2860 =
												(((BgL_approxz00_bglt) COBJECT(BgL_approxz00_2858))->
												BgL_typez00);
											{	/* Cfa/closure.scm 139 */
												bool_t BgL_topzf3zf3_2861;

												BgL_topzf3zf3_2861 =
													(((BgL_approxz00_bglt) COBJECT(BgL_approxz00_2858))->
													BgL_topzf3zf3);
												{	/* Cfa/closure.scm 140 */

													if (BgL_topzf3zf3_2861)
														{	/* Cfa/closure.scm 142 */
															BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
																(BGl_proc2249z00zzcfa_closurez00,
																BgL_approxz00_2858);
														}
													else
														{	/* Cfa/closure.scm 153 */
															bool_t BgL_test2292z00_4380;

															{	/* Cfa/closure.scm 153 */
																obj_t BgL_arg1669z00_2882;

																BgL_arg1669z00_2882 =
																	BGl_setzd2lengthzd2zzcfa_setz00
																	(BgL_allocz00_2859);
																BgL_test2292z00_4380 =
																	((long) CINT(BgL_arg1669z00_2882) ==
																	((long) 0));
															}
															if (BgL_test2292z00_4380)
																{	/* Cfa/closure.scm 153 */
																	CNST_TABLE_REF(((long) 4));
																}
															else
																{	/* Cfa/closure.scm 156 */
																	bool_t BgL_test2293z00_4385;

																	{	/* Cfa/closure.scm 156 */
																		bool_t BgL_test2294z00_4386;

																		{	/* Cfa/closure.scm 156 */
																			obj_t BgL_arg1667z00_2881;

																			BgL_arg1667z00_2881 =
																				BGl_setzd2lengthzd2zzcfa_setz00
																				(BgL_allocz00_2859);
																			BgL_test2294z00_4386 =
																				((long) CINT(BgL_arg1667z00_2881) ==
																				((long) 1));
																		}
																		if (BgL_test2294z00_4386)
																			{	/* Cfa/closure.scm 157 */
																				obj_t BgL__ortest_1160z00_2880;

																				BgL__ortest_1160z00_2880 =
																					BGl_za2unsafezd2typeza2zd2zzengine_paramz00;
																				if (CBOOL(BgL__ortest_1160z00_2880))
																					{	/* Cfa/closure.scm 157 */
																						BgL_test2293z00_4385 =
																							CBOOL(BgL__ortest_1160z00_2880);
																					}
																				else
																					{	/* Cfa/closure.scm 157 */
																						BgL_test2293z00_4385 =
																							(
																							((obj_t) BgL_typez00_2860) ==
																							BGl_za2procedureza2z00zztype_cachez00);
																					}
																			}
																		else
																			{	/* Cfa/closure.scm 156 */
																				BgL_test2293z00_4385 = ((bool_t) 0);
																			}
																	}
																	if (BgL_test2293z00_4385)
																		{	/* Cfa/closure.scm 156 */
																			CNST_TABLE_REF(((long) 4));
																		}
																	else
																		{	/* Cfa/closure.scm 156 */
																			BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
																				(BGl_proc2250z00zzcfa_closurez00,
																				BgL_approxz00_2858);
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
						{
							obj_t BgL_l1516z00_4397;

							BgL_l1516z00_4397 = CDR(BgL_l1516z00_2853);
							BgL_l1516z00_2853 = BgL_l1516z00_4397;
							goto BgL_zc3z04anonymousza31632ze3z87_2854;
						}
					}
				else
					{	/* Cfa/closure.scm 134 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* &<@anonymous:1635> */
	obj_t BGl_z62zc3z04anonymousza31635ze3ze5zzcfa_closurez00(obj_t
		BgL_envz00_4167, obj_t BgL_allocz00_4168)
	{
		{	/* Cfa/closure.scm 145 */
			if (BGl_isazf3zf3zz__objectz00(BgL_allocz00_4168,
					BGl_makezd2procedurezd2appz00zzcfa_info2z00))
				{	/* Cfa/closure.scm 146 */
					{
						BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4401;

						{
							obj_t BgL_auxz00_4402;

							{	/* Cfa/closure.scm 150 */
								BgL_objectz00_bglt BgL_tmpz00_4403;

								BgL_tmpz00_4403 =
									((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_allocz00_4168));
								BgL_auxz00_4402 = BGL_OBJECT_WIDENING(BgL_tmpz00_4403);
							}
							BgL_auxz00_4401 =
								((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_4402);
						}
						((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_4401))->
								BgL_tz00) = ((bool_t) ((bool_t) 0)), BUNSPEC);
					}
					{
						BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4409;

						{
							obj_t BgL_auxz00_4410;

							{	/* Cfa/closure.scm 151 */
								BgL_objectz00_bglt BgL_tmpz00_4411;

								BgL_tmpz00_4411 =
									((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_allocz00_4168));
								BgL_auxz00_4410 = BGL_OBJECT_WIDENING(BgL_tmpz00_4411);
							}
							BgL_auxz00_4409 =
								((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_4410);
						}
						return
							((((BgL_makezd2procedurezd2appz00_bglt)
									COBJECT(BgL_auxz00_4409))->BgL_xz00) =
							((bool_t) ((bool_t) 0)), BUNSPEC);
					}
				}
			else
				{	/* Cfa/closure.scm 146 */
					return BFALSE;
				}
		}

	}



/* &<@anonymous:1663> */
	obj_t BGl_z62zc3z04anonymousza31663ze3ze5zzcfa_closurez00(obj_t
		BgL_envz00_4169, obj_t BgL_allocz00_4170)
	{
		{	/* Cfa/closure.scm 164 */
			if (BGl_isazf3zf3zz__objectz00(BgL_allocz00_4170,
					BGl_makezd2procedurezd2appz00zzcfa_info2z00))
				{	/* Cfa/closure.scm 165 */
					{
						BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4419;

						{
							obj_t BgL_auxz00_4420;

							{	/* Cfa/closure.scm 169 */
								BgL_objectz00_bglt BgL_tmpz00_4421;

								BgL_tmpz00_4421 =
									((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_allocz00_4170));
								BgL_auxz00_4420 = BGL_OBJECT_WIDENING(BgL_tmpz00_4421);
							}
							BgL_auxz00_4419 =
								((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_4420);
						}
						return
							((((BgL_makezd2procedurezd2appz00_bglt)
									COBJECT(BgL_auxz00_4419))->BgL_xz00) =
							((bool_t) ((bool_t) 0)), BUNSPEC);
					}
				}
			else
				{	/* Cfa/closure.scm 165 */
					return BFALSE;
				}
		}

	}



/* T-fix-point! */
	obj_t BGl_Tzd2fixzd2pointz12z12zzcfa_closurez00(obj_t BgL_funcallzd2listzd2_5)
	{
		{	/* Cfa/closure.scm 182 */
			{
				bool_t BgL_continuezf3zf3_2886;

				BgL_continuezf3zf3_2886 = ((bool_t) 1);
			BgL_zc3z04anonymousza31673ze3z87_2887:
				if (BgL_continuezf3zf3_2886)
					{	/* Cfa/closure.scm 187 */
						bool_t BgL_continuezf3zf3_2888;

						BgL_continuezf3zf3_2888 = ((bool_t) 0);
						{
							obj_t BgL_l1520z00_2890;

							BgL_l1520z00_2890 = BgL_funcallzd2listzd2_5;
						BgL_zc3z04anonymousza31674ze3z87_2891:
							if (PAIRP(BgL_l1520z00_2890))
								{	/* Cfa/closure.scm 188 */
									{	/* Cfa/closure.scm 190 */
										obj_t BgL_appz00_2893;

										BgL_appz00_2893 = CAR(BgL_l1520z00_2890);
										{	/* Cfa/closure.scm 191 */
											BgL_nodez00_bglt BgL_funz00_2894;

											BgL_funz00_2894 =
												(((BgL_funcallz00_bglt) COBJECT(
														((BgL_funcallz00_bglt) BgL_appz00_2893)))->
												BgL_funz00);
											{	/* Cfa/closure.scm 191 */
												BgL_approxz00_bglt BgL_approxz00_2895;

												BgL_approxz00_2895 =
													BGl_cfaz12z12zzcfa_cfaz00(BgL_funz00_2894);
												{	/* Cfa/closure.scm 192 */
													obj_t BgL_allocz00_2896;

													BgL_allocz00_2896 =
														BGl_setzd2ze3listz31zzcfa_setz00(
														(((BgL_approxz00_bglt)
																COBJECT(BgL_approxz00_2895))->BgL_allocsz00));
													{	/* Cfa/closure.scm 193 */
														BgL_typez00_bglt BgL_typez00_2897;

														BgL_typez00_2897 =
															(((BgL_approxz00_bglt)
																COBJECT(BgL_approxz00_2895))->BgL_typez00);
														{	/* Cfa/closure.scm 194 */
															bool_t BgL_tzd2initzf3z21_2898;

															{	/* Cfa/closure.scm 195 */
																bool_t BgL__ortest_1161z00_2922;

																BgL__ortest_1161z00_2922 =
																	(((BgL_approxz00_bglt)
																		COBJECT(BgL_approxz00_2895))->
																	BgL_topzf3zf3);
																if (BgL__ortest_1161z00_2922)
																	{	/* Cfa/closure.scm 195 */
																		BgL_tzd2initzf3z21_2898 =
																			BgL__ortest_1161z00_2922;
																	}
																else
																	{	/* Cfa/closure.scm 196 */
																		bool_t BgL_test2301z00_4439;

																		if (
																			(((obj_t) BgL_typez00_2897) ==
																				BGl_za2procedureza2z00zztype_cachez00))
																			{	/* Cfa/closure.scm 196 */
																				BgL_test2301z00_4439 = ((bool_t) 1);
																			}
																		else
																			{	/* Cfa/closure.scm 196 */
																				BgL_test2301z00_4439 =
																					CBOOL
																					(BGl_za2unsafezd2typeza2zd2zzengine_paramz00);
																			}
																		if (BgL_test2301z00_4439)
																			{	/* Cfa/closure.scm 196 */
																				BgL_tzd2initzf3z21_2898 = ((bool_t) 0);
																			}
																		else
																			{	/* Cfa/closure.scm 196 */
																				BgL_tzd2initzf3z21_2898 = ((bool_t) 1);
																			}
																	}
															}
															{	/* Cfa/closure.scm 195 */

																{
																	bool_t BgL_onezd2nonzd2tzf3zf3_2900;
																	obj_t BgL_allocsz00_2901;

																	BgL_onezd2nonzd2tzf3zf3_2900 =
																		BgL_tzd2initzf3z21_2898;
																	BgL_allocsz00_2901 = BgL_allocz00_2896;
																BgL_zc3z04anonymousza31676ze3z87_2902:
																	if (NULLP(BgL_allocsz00_2901))
																		{	/* Cfa/closure.scm 204 */
																			CNST_TABLE_REF(((long) 5));
																		}
																	else
																		{	/* Cfa/closure.scm 204 */
																			if (BgL_onezd2nonzd2tzf3zf3_2900)
																				{
																					obj_t BgL_l1518z00_2905;

																					{	/* Cfa/closure.scm 207 */
																						bool_t BgL_tmpz00_4448;

																						BgL_l1518z00_2905 =
																							BgL_allocz00_2896;
																					BgL_zc3z04anonymousza31678ze3z87_2906:
																						if (PAIRP
																							(BgL_l1518z00_2905))
																							{	/* Cfa/closure.scm 207 */
																								{	/* Cfa/closure.scm 209 */
																									obj_t BgL_allocz00_2908;

																									BgL_allocz00_2908 =
																										CAR(BgL_l1518z00_2905);
																									if (BGl_isazf3zf3zz__objectz00
																										(BgL_allocz00_2908,
																											BGl_makezd2procedurezd2appz00zzcfa_info2z00))
																										{	/* Cfa/closure.scm 211 */
																											bool_t
																												BgL_test2307z00_4454;
																											{
																												BgL_makezd2procedurezd2appz00_bglt
																													BgL_auxz00_4455;
																												{
																													obj_t BgL_auxz00_4456;

																													{	/* Cfa/closure.scm 211 */
																														BgL_objectz00_bglt
																															BgL_tmpz00_4457;
																														BgL_tmpz00_4457 =
																															(
																															(BgL_objectz00_bglt)
																															((BgL_appz00_bglt)
																																BgL_allocz00_2908));
																														BgL_auxz00_4456 =
																															BGL_OBJECT_WIDENING
																															(BgL_tmpz00_4457);
																													}
																													BgL_auxz00_4455 =
																														(
																														(BgL_makezd2procedurezd2appz00_bglt)
																														BgL_auxz00_4456);
																												}
																												BgL_test2307z00_4454 =
																													(((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_4455))->BgL_tz00);
																											}
																											if (BgL_test2307z00_4454)
																												{	/* Cfa/closure.scm 211 */
																													{
																														BgL_makezd2procedurezd2appz00_bglt
																															BgL_auxz00_4463;
																														{
																															obj_t
																																BgL_auxz00_4464;
																															{	/* Cfa/closure.scm 212 */
																																BgL_objectz00_bglt
																																	BgL_tmpz00_4465;
																																BgL_tmpz00_4465
																																	=
																																	(
																																	(BgL_objectz00_bglt)
																																	((BgL_appz00_bglt) BgL_allocz00_2908));
																																BgL_auxz00_4464
																																	=
																																	BGL_OBJECT_WIDENING
																																	(BgL_tmpz00_4465);
																															}
																															BgL_auxz00_4463 =
																																(
																																(BgL_makezd2procedurezd2appz00_bglt)
																																BgL_auxz00_4464);
																														}
																														((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_4463))->BgL_tz00) = ((bool_t) ((bool_t) 0)), BUNSPEC);
																													}
																													BgL_continuezf3zf3_2888
																														= ((bool_t) 1);
																												}
																											else
																												{	/* Cfa/closure.scm 211 */
																													BFALSE;
																												}
																										}
																									else
																										{	/* Cfa/closure.scm 209 */
																											BFALSE;
																										}
																								}
																								{
																									obj_t BgL_l1518z00_4471;

																									BgL_l1518z00_4471 =
																										CDR(BgL_l1518z00_2905);
																									BgL_l1518z00_2905 =
																										BgL_l1518z00_4471;
																									goto
																										BgL_zc3z04anonymousza31678ze3z87_2906;
																								}
																							}
																						else
																							{	/* Cfa/closure.scm 207 */
																								BgL_tmpz00_4448 = ((bool_t) 1);
																							}
																						BBOOL(BgL_tmpz00_4448);
																					}
																				}
																			else
																				{	/* Cfa/closure.scm 215 */
																					bool_t BgL_test2308z00_4474;

																					{	/* Cfa/closure.scm 215 */
																						obj_t BgL_arg1695z00_2920;

																						BgL_arg1695z00_2920 =
																							CAR(((obj_t) BgL_allocsz00_2901));
																						BgL_test2308z00_4474 =
																							BGl_isazf3zf3zz__objectz00
																							(BgL_arg1695z00_2920,
																							BGl_makezd2procedurezd2appz00zzcfa_info2z00);
																					}
																					if (BgL_test2308z00_4474)
																						{	/* Cfa/closure.scm 216 */
																							BgL_appz00_bglt BgL_i1163z00_2916;

																							BgL_i1163z00_2916 =
																								((BgL_appz00_bglt)
																								CAR(
																									((obj_t)
																										BgL_allocsz00_2901)));
																							{	/* Cfa/closure.scm 217 */
																								bool_t BgL_test2309z00_4481;

																								{
																									BgL_makezd2procedurezd2appz00_bglt
																										BgL_auxz00_4482;
																									{
																										obj_t BgL_auxz00_4483;

																										{	/* Cfa/closure.scm 217 */
																											BgL_objectz00_bglt
																												BgL_tmpz00_4484;
																											BgL_tmpz00_4484 =
																												((BgL_objectz00_bglt)
																												BgL_i1163z00_2916);
																											BgL_auxz00_4483 =
																												BGL_OBJECT_WIDENING
																												(BgL_tmpz00_4484);
																										}
																										BgL_auxz00_4482 =
																											(
																											(BgL_makezd2procedurezd2appz00_bglt)
																											BgL_auxz00_4483);
																									}
																									BgL_test2309z00_4481 =
																										(((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_4482))->BgL_tz00);
																								}
																								if (BgL_test2309z00_4481)
																									{	/* Cfa/closure.scm 218 */
																										obj_t BgL_arg1688z00_2918;

																										BgL_arg1688z00_2918 =
																											CDR(
																											((obj_t)
																												BgL_allocsz00_2901));
																										{
																											obj_t BgL_allocsz00_4491;

																											BgL_allocsz00_4491 =
																												BgL_arg1688z00_2918;
																											BgL_allocsz00_2901 =
																												BgL_allocsz00_4491;
																											goto
																												BgL_zc3z04anonymousza31676ze3z87_2902;
																										}
																									}
																								else
																									{
																										bool_t
																											BgL_onezd2nonzd2tzf3zf3_4492;
																										BgL_onezd2nonzd2tzf3zf3_4492
																											= ((bool_t) 1);
																										BgL_onezd2nonzd2tzf3zf3_2900
																											=
																											BgL_onezd2nonzd2tzf3zf3_4492;
																										goto
																											BgL_zc3z04anonymousza31676ze3z87_2902;
																									}
																							}
																						}
																					else
																						{	/* Cfa/closure.scm 215 */
																							if (CBOOL
																								(BGl_za2unsafezd2typeza2zd2zzengine_paramz00))
																								{	/* Cfa/closure.scm 222 */
																									obj_t BgL_arg1692z00_2919;

																									BgL_arg1692z00_2919 =
																										CDR(
																										((obj_t)
																											BgL_allocsz00_2901));
																									{
																										obj_t BgL_allocsz00_4497;

																										BgL_allocsz00_4497 =
																											BgL_arg1692z00_2919;
																										BgL_allocsz00_2901 =
																											BgL_allocsz00_4497;
																										goto
																											BgL_zc3z04anonymousza31676ze3z87_2902;
																									}
																								}
																							else
																								{
																									bool_t
																										BgL_onezd2nonzd2tzf3zf3_4498;
																									BgL_onezd2nonzd2tzf3zf3_4498 =
																										((bool_t) 1);
																									BgL_onezd2nonzd2tzf3zf3_2900 =
																										BgL_onezd2nonzd2tzf3zf3_4498;
																									goto
																										BgL_zc3z04anonymousza31676ze3z87_2902;
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
									{
										obj_t BgL_l1520z00_4499;

										BgL_l1520z00_4499 = CDR(BgL_l1520z00_2890);
										BgL_l1520z00_2890 = BgL_l1520z00_4499;
										goto BgL_zc3z04anonymousza31674ze3z87_2891;
									}
								}
							else
								{	/* Cfa/closure.scm 188 */
									((bool_t) 1);
								}
						}
						{
							bool_t BgL_continuezf3zf3_4501;

							BgL_continuezf3zf3_4501 = BgL_continuezf3zf3_2888;
							BgL_continuezf3zf3_2886 = BgL_continuezf3zf3_4501;
							goto BgL_zc3z04anonymousza31673ze3z87_2887;
						}
					}
				else
					{	/* Cfa/closure.scm 185 */
						return BUNSPEC;
					}
			}
		}

	}



/* light-make-procedure! */
	bool_t BGl_lightzd2makezd2procedurez12z12zzcfa_closurez00()
	{
		{	/* Cfa/closure.scm 251 */
			{
				obj_t BgL_appz00_2975;
				obj_t BgL_appz00_2945;

				{
					obj_t BgL_l1522z00_2936;

					BgL_l1522z00_2936 =
						BGl_za2makezd2procedurezd2listza2z00zzcfa_closurez00;
				BgL_zc3z04anonymousza31712ze3z87_2937:
					if (PAIRP(BgL_l1522z00_2936))
						{	/* Cfa/closure.scm 293 */
							{	/* Cfa/closure.scm 294 */
								obj_t BgL_appz00_2939;

								BgL_appz00_2939 = CAR(BgL_l1522z00_2936);
								{	/* Cfa/closure.scm 296 */
									bool_t BgL_test2312z00_4505;

									{
										BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4506;

										{
											obj_t BgL_auxz00_4507;

											{	/* Cfa/closure.scm 296 */
												BgL_objectz00_bglt BgL_tmpz00_4508;

												BgL_tmpz00_4508 =
													((BgL_objectz00_bglt)
													((BgL_appz00_bglt) BgL_appz00_2939));
												BgL_auxz00_4507 = BGL_OBJECT_WIDENING(BgL_tmpz00_4508);
											}
											BgL_auxz00_4506 =
												((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_4507);
										}
										BgL_test2312z00_4505 =
											(((BgL_makezd2procedurezd2appz00_bglt)
												COBJECT(BgL_auxz00_4506))->BgL_xz00);
									}
									if (BgL_test2312z00_4505)
										{	/* Cfa/closure.scm 296 */
											BgL_appz00_2945 = BgL_appz00_2939;
											{	/* Cfa/closure.scm 255 */
												obj_t BgL_siza7eza7_2948;

												{	/* Cfa/closure.scm 255 */
													obj_t BgL_arg1746z00_2972;

													{	/* Cfa/closure.scm 255 */
														obj_t BgL_pairz00_3886;

														BgL_pairz00_3886 =
															(((BgL_appz00_bglt) COBJECT(
																	((BgL_appz00_bglt)
																		((BgL_appz00_bglt) BgL_appz00_2945))))->
															BgL_argsz00);
														BgL_arg1746z00_2972 =
															CAR(CDR(CDR(BgL_pairz00_3886)));
													}
													BgL_siza7eza7_2948 =
														BGl_getzd2nodezd2atomzd2valuezd2zzcfa_approxz00(
														((BgL_nodez00_bglt) BgL_arg1746z00_2972));
												}
												{	/* Cfa/closure.scm 255 */
													BgL_variablez00_bglt BgL_ffunz00_2949;

													{
														BgL_varz00_bglt BgL_auxz00_4522;

														{	/* Cfa/closure.scm 256 */
															obj_t BgL_pairz00_3892;

															BgL_pairz00_3892 =
																(((BgL_appz00_bglt) COBJECT(
																		((BgL_appz00_bglt)
																			((BgL_appz00_bglt) BgL_appz00_2945))))->
																BgL_argsz00);
															BgL_auxz00_4522 =
																((BgL_varz00_bglt) CAR(BgL_pairz00_3892));
														}
														BgL_ffunz00_2949 =
															(((BgL_varz00_bglt) COBJECT(BgL_auxz00_4522))->
															BgL_variablez00);
													}
													{	/* Cfa/closure.scm 256 */
														BgL_valuez00_bglt BgL_sfunz00_2950;

														BgL_sfunz00_2950 =
															(((BgL_variablez00_bglt)
																COBJECT(BgL_ffunz00_2949))->BgL_valuez00);
														{	/* Cfa/closure.scm 257 */

															if (
																((long) CINT(BgL_siza7eza7_2948) < ((long) 1)))
																{	/* Cfa/closure.scm 259 */
																	{	/* Cfa/closure.scm 260 */
																		bool_t BgL_test2314z00_4533;

																		{	/* Cfa/closure.scm 260 */
																			bool_t BgL_test2315z00_4534;

																			{	/* Cfa/closure.scm 260 */
																				bool_t BgL_res2210z00_3897;

																				BgL_res2210z00_3897 =
																					BGl_isazf3zf3zz__objectz00(
																					((obj_t) BgL_ffunz00_2949),
																					BGl_globalz00zzast_varz00);
																				BgL_test2315z00_4534 =
																					BgL_res2210z00_3897;
																			}
																			if (BgL_test2315z00_4534)
																				{	/* Cfa/closure.scm 261 */
																					bool_t BgL_test2316z00_4537;

																					{	/* Cfa/closure.scm 261 */
																						obj_t BgL_arg1739z00_2965;

																						BgL_arg1739z00_2965 =
																							(((BgL_funz00_bglt) COBJECT(
																									((BgL_funz00_bglt)
																										((BgL_sfunz00_bglt)
																											BgL_sfunz00_2950))))->
																							BgL_thezd2closurezd2);
																						BgL_test2316z00_4537 =
																							BGl_isazf3zf3zz__objectz00
																							(BgL_arg1739z00_2965,
																							BGl_globalz00zzast_varz00);
																					}
																					if (BgL_test2316z00_4537)
																						{	/* Cfa/closure.scm 262 */
																							BgL_valuez00_bglt
																								BgL_arg1733z00_2963;
																							BgL_arg1733z00_2963 =
																								(((BgL_variablez00_bglt)
																									COBJECT((
																											(BgL_variablez00_bglt) (
																												(BgL_globalz00_bglt) ((
																														(BgL_funz00_bglt)
																														COBJECT((
																																(BgL_funz00_bglt)
																																((BgL_sfunz00_bglt) BgL_sfunz00_2950))))->BgL_thezd2closurezd2)))))->BgL_valuez00);
																							{	/* Cfa/closure.scm 262 */
																								bool_t BgL_res2212z00_3902;

																								BgL_res2212z00_3902 =
																									BGl_isazf3zf3zz__objectz00(
																									((obj_t) BgL_arg1733z00_2963),
																									BGl_scnstz00zzast_varz00);
																								BgL_test2314z00_4533 =
																									BgL_res2212z00_3902;
																							}
																						}
																					else
																						{	/* Cfa/closure.scm 261 */
																							BgL_test2314z00_4533 =
																								((bool_t) 0);
																						}
																				}
																			else
																				{	/* Cfa/closure.scm 260 */
																					BgL_test2314z00_4533 = ((bool_t) 0);
																				}
																		}
																		if (BgL_test2314z00_4533)
																			{	/* Cfa/closure.scm 263 */
																				BgL_valuez00_bglt BgL_arg1731z00_2959;

																				BgL_arg1731z00_2959 =
																					(((BgL_variablez00_bglt) COBJECT(
																							((BgL_variablez00_bglt)
																								((BgL_globalz00_bglt)
																									(((BgL_funz00_bglt) COBJECT(
																												((BgL_funz00_bglt)
																													((BgL_sfunz00_bglt)
																														BgL_sfunz00_2950))))->
																										BgL_thezd2closurezd2)))))->
																					BgL_valuez00);
																				{	/* Cfa/closure.scm 263 */
																					obj_t BgL_vz00_3906;

																					BgL_vz00_3906 =
																						CNST_TABLE_REF(((long) 6));
																					((((BgL_scnstz00_bglt) COBJECT(
																									((BgL_scnstz00_bglt)
																										BgL_arg1731z00_2959)))->
																							BgL_classz00) =
																						((obj_t) BgL_vz00_3906), BUNSPEC);
																			}}
																		else
																			{	/* Cfa/closure.scm 260 */
																				BFALSE;
																			}
																	}
																	{	/* Cfa/closure.scm 265 */
																		BgL_varz00_bglt BgL_arg1740z00_2966;

																		BgL_arg1740z00_2966 =
																			(((BgL_appz00_bglt) COBJECT(
																					((BgL_appz00_bglt)
																						((BgL_appz00_bglt)
																							BgL_appz00_2945))))->BgL_funz00);
																		{	/* Cfa/closure.scm 265 */
																			BgL_variablez00_bglt BgL_vz00_3908;

																			BgL_vz00_3908 =
																				((BgL_variablez00_bglt)
																				BGl_za2makezd2elzd2procedureza2z00zzcfa_closurez00);
																			((((BgL_varz00_bglt)
																						COBJECT(BgL_arg1740z00_2966))->
																					BgL_variablez00) =
																				((BgL_variablez00_bglt) BgL_vz00_3908),
																				BUNSPEC);
																		}
																	}
																	{	/* Cfa/closure.scm 266 */
																		BgL_varz00_bglt BgL_arg1741z00_2967;

																		BgL_arg1741z00_2967 =
																			(((BgL_appz00_bglt) COBJECT(
																					((BgL_appz00_bglt)
																						((BgL_appz00_bglt)
																							BgL_appz00_2945))))->BgL_funz00);
																		{	/* Cfa/closure.scm 266 */
																			BgL_typez00_bglt BgL_vz00_3910;

																			BgL_vz00_3910 =
																				((BgL_typez00_bglt)
																				BGl_za2procedurezd2elza2zd2zztype_cachez00);
																			((((BgL_nodez00_bglt)
																						COBJECT(((BgL_nodez00_bglt)
																								BgL_arg1741z00_2967)))->
																					BgL_typez00) =
																				((BgL_typez00_bglt) BgL_vz00_3910),
																				BUNSPEC);
																		}
																	}
																	((((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						((BgL_appz00_bglt)
																							BgL_appz00_2945))))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) ((BgL_typez00_bglt)
																				BGl_za2procedurezd2elza2zd2zztype_cachez00)),
																		BUNSPEC);
																}
															else
																{	/* Cfa/closure.scm 259 */
																	{	/* Cfa/closure.scm 269 */
																		BgL_varz00_bglt BgL_arg1742z00_2968;

																		BgL_arg1742z00_2968 =
																			(((BgL_appz00_bglt) COBJECT(
																					((BgL_appz00_bglt)
																						((BgL_appz00_bglt)
																							BgL_appz00_2945))))->BgL_funz00);
																		{	/* Cfa/closure.scm 269 */
																			BgL_variablez00_bglt BgL_vz00_3912;

																			BgL_vz00_3912 =
																				((BgL_variablez00_bglt)
																				BGl_za2makezd2elzd2procedureza2z00zzcfa_closurez00);
																			((((BgL_varz00_bglt)
																						COBJECT(BgL_arg1742z00_2968))->
																					BgL_variablez00) =
																				((BgL_variablez00_bglt) BgL_vz00_3912),
																				BUNSPEC);
																		}
																	}
																	{	/* Cfa/closure.scm 270 */
																		BgL_varz00_bglt BgL_arg1743z00_2969;

																		BgL_arg1743z00_2969 =
																			(((BgL_appz00_bglt) COBJECT(
																					((BgL_appz00_bglt)
																						((BgL_appz00_bglt)
																							BgL_appz00_2945))))->BgL_funz00);
																		{	/* Cfa/closure.scm 270 */
																			BgL_typez00_bglt BgL_vz00_3914;

																			BgL_vz00_3914 =
																				((BgL_typez00_bglt)
																				BGl_za2procedurezd2elza2zd2zztype_cachez00);
																			((((BgL_nodez00_bglt)
																						COBJECT(((BgL_nodez00_bglt)
																								BgL_arg1743z00_2969)))->
																					BgL_typez00) =
																				((BgL_typez00_bglt) BgL_vz00_3914),
																				BUNSPEC);
																		}
																	}
																	((((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						((BgL_appz00_bglt)
																							BgL_appz00_2945))))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) ((BgL_typez00_bglt)
																				BGl_za2procedurezd2elza2zd2zztype_cachez00)),
																		BUNSPEC);
																}
														}
													}
												}
											}
											{
												obj_t BgL_auxz00_4589;

												{	/* Cfa/closure.scm 272 */
													obj_t BgL_pairz00_3915;

													BgL_pairz00_3915 =
														(((BgL_appz00_bglt) COBJECT(
																((BgL_appz00_bglt)
																	((BgL_appz00_bglt) BgL_appz00_2945))))->
														BgL_argsz00);
													{	/* Cfa/closure.scm 272 */
														obj_t BgL_pairz00_3918;

														BgL_pairz00_3918 = CDR(BgL_pairz00_3915);
														BgL_auxz00_4589 = CDR(BgL_pairz00_3918);
													}
												}
												((((BgL_appz00_bglt) COBJECT(
																((BgL_appz00_bglt)
																	((BgL_appz00_bglt) BgL_appz00_2945))))->
														BgL_argsz00) = ((obj_t) BgL_auxz00_4589), BUNSPEC);
											}
											BgL_appz00_2945;
										}
									else
										{	/* Cfa/closure.scm 297 */
											bool_t BgL_test2317z00_4598;

											{
												BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4599;

												{
													obj_t BgL_auxz00_4600;

													{	/* Cfa/closure.scm 297 */
														BgL_objectz00_bglt BgL_tmpz00_4601;

														BgL_tmpz00_4601 =
															((BgL_objectz00_bglt)
															((BgL_appz00_bglt) BgL_appz00_2939));
														BgL_auxz00_4600 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_4601);
													}
													BgL_auxz00_4599 =
														((BgL_makezd2procedurezd2appz00_bglt)
														BgL_auxz00_4600);
												}
												BgL_test2317z00_4598 =
													(((BgL_makezd2procedurezd2appz00_bglt)
														COBJECT(BgL_auxz00_4599))->BgL_tz00);
											}
											if (BgL_test2317z00_4598)
												{	/* Cfa/closure.scm 297 */
													BgL_appz00_2975 = BgL_appz00_2939;
													{	/* Cfa/closure.scm 277 */
														obj_t BgL_siza7eza7_2978;

														{	/* Cfa/closure.scm 277 */
															obj_t BgL_arg1820z00_3002;

															{	/* Cfa/closure.scm 277 */
																obj_t BgL_pairz00_3919;

																BgL_pairz00_3919 =
																	(((BgL_appz00_bglt) COBJECT(
																			((BgL_appz00_bglt)
																				((BgL_appz00_bglt) BgL_appz00_2975))))->
																	BgL_argsz00);
																BgL_arg1820z00_3002 =
																	CAR(CDR(CDR(BgL_pairz00_3919)));
															}
															BgL_siza7eza7_2978 =
																BGl_getzd2nodezd2atomzd2valuezd2zzcfa_approxz00(
																((BgL_nodez00_bglt) BgL_arg1820z00_3002));
														}
														{	/* Cfa/closure.scm 277 */
															BgL_variablez00_bglt BgL_ffunz00_2979;

															{
																BgL_varz00_bglt BgL_auxz00_4615;

																{	/* Cfa/closure.scm 278 */
																	obj_t BgL_pairz00_3925;

																	BgL_pairz00_3925 =
																		(((BgL_appz00_bglt) COBJECT(
																				((BgL_appz00_bglt)
																					((BgL_appz00_bglt)
																						BgL_appz00_2975))))->BgL_argsz00);
																	BgL_auxz00_4615 =
																		((BgL_varz00_bglt) CAR(BgL_pairz00_3925));
																}
																BgL_ffunz00_2979 =
																	(((BgL_varz00_bglt)
																		COBJECT(BgL_auxz00_4615))->BgL_variablez00);
															}
															{	/* Cfa/closure.scm 278 */
																BgL_valuez00_bglt BgL_sfunz00_2980;

																BgL_sfunz00_2980 =
																	(((BgL_variablez00_bglt)
																		COBJECT(BgL_ffunz00_2979))->BgL_valuez00);
																{	/* Cfa/closure.scm 279 */

																	{	/* Cfa/closure.scm 280 */
																		bool_t BgL_test2318z00_4623;

																		{	/* Cfa/closure.scm 280 */
																			bool_t BgL_test2319z00_4624;

																			{	/* Cfa/closure.scm 280 */
																				bool_t BgL_res2213z00_3928;

																				BgL_res2213z00_3928 =
																					BGl_isazf3zf3zz__objectz00(
																					((obj_t) BgL_ffunz00_2979),
																					BGl_globalz00zzast_varz00);
																				BgL_test2319z00_4624 =
																					BgL_res2213z00_3928;
																			}
																			if (BgL_test2319z00_4624)
																				{	/* Cfa/closure.scm 281 */
																					bool_t BgL_test2320z00_4627;

																					{	/* Cfa/closure.scm 281 */
																						obj_t BgL_arg1784z00_2994;

																						BgL_arg1784z00_2994 =
																							(((BgL_funz00_bglt) COBJECT(
																									((BgL_funz00_bglt)
																										((BgL_sfunz00_bglt)
																											BgL_sfunz00_2980))))->
																							BgL_thezd2closurezd2);
																						BgL_test2320z00_4627 =
																							BGl_isazf3zf3zz__objectz00
																							(BgL_arg1784z00_2994,
																							BGl_globalz00zzast_varz00);
																					}
																					if (BgL_test2320z00_4627)
																						{	/* Cfa/closure.scm 282 */
																							BgL_valuez00_bglt
																								BgL_arg1779z00_2992;
																							BgL_arg1779z00_2992 =
																								(((BgL_variablez00_bglt)
																									COBJECT((
																											(BgL_variablez00_bglt) (
																												(BgL_globalz00_bglt) ((
																														(BgL_funz00_bglt)
																														COBJECT((
																																(BgL_funz00_bglt)
																																((BgL_sfunz00_bglt) BgL_sfunz00_2980))))->BgL_thezd2closurezd2)))))->BgL_valuez00);
																							{	/* Cfa/closure.scm 282 */
																								bool_t BgL_res2215z00_3933;

																								BgL_res2215z00_3933 =
																									BGl_isazf3zf3zz__objectz00(
																									((obj_t) BgL_arg1779z00_2992),
																									BGl_scnstz00zzast_varz00);
																								BgL_test2318z00_4623 =
																									BgL_res2215z00_3933;
																							}
																						}
																					else
																						{	/* Cfa/closure.scm 281 */
																							BgL_test2318z00_4623 =
																								((bool_t) 0);
																						}
																				}
																			else
																				{	/* Cfa/closure.scm 280 */
																					BgL_test2318z00_4623 = ((bool_t) 0);
																				}
																		}
																		if (BgL_test2318z00_4623)
																			{	/* Cfa/closure.scm 283 */
																				BgL_valuez00_bglt BgL_arg1775z00_2988;

																				BgL_arg1775z00_2988 =
																					(((BgL_variablez00_bglt) COBJECT(
																							((BgL_variablez00_bglt)
																								((BgL_globalz00_bglt)
																									(((BgL_funz00_bglt) COBJECT(
																												((BgL_funz00_bglt)
																													((BgL_sfunz00_bglt)
																														BgL_sfunz00_2980))))->
																										BgL_thezd2closurezd2)))))->
																					BgL_valuez00);
																				{	/* Cfa/closure.scm 283 */
																					obj_t BgL_vz00_3937;

																					BgL_vz00_3937 =
																						CNST_TABLE_REF(((long) 7));
																					((((BgL_scnstz00_bglt) COBJECT(
																									((BgL_scnstz00_bglt)
																										BgL_arg1775z00_2988)))->
																							BgL_classz00) =
																						((obj_t) BgL_vz00_3937), BUNSPEC);
																			}}
																		else
																			{	/* Cfa/closure.scm 280 */
																				BFALSE;
																			}
																	}
																	{	/* Cfa/closure.scm 285 */
																		BgL_varz00_bglt BgL_arg1790z00_2995;

																		BgL_arg1790z00_2995 =
																			(((BgL_appz00_bglt) COBJECT(
																					((BgL_appz00_bglt)
																						((BgL_appz00_bglt)
																							BgL_appz00_2975))))->BgL_funz00);
																		{	/* Cfa/closure.scm 285 */
																			BgL_variablez00_bglt BgL_vz00_3939;

																			BgL_vz00_3939 =
																				((BgL_variablez00_bglt)
																				BGl_za2makezd2lzd2procedureza2z00zzcfa_closurez00);
																			((((BgL_varz00_bglt)
																						COBJECT(BgL_arg1790z00_2995))->
																					BgL_variablez00) =
																				((BgL_variablez00_bglt) BgL_vz00_3939),
																				BUNSPEC);
																		}
																	}
																	{	/* Cfa/closure.scm 287 */
																		BgL_varz00_bglt BgL_arg1796z00_2996;

																		BgL_arg1796z00_2996 =
																			(((BgL_appz00_bglt) COBJECT(
																					((BgL_appz00_bglt)
																						((BgL_appz00_bglt)
																							BgL_appz00_2975))))->BgL_funz00);
																		{	/* Cfa/closure.scm 287 */
																			BgL_typez00_bglt BgL_vz00_3941;

																			BgL_vz00_3941 =
																				((BgL_typez00_bglt)
																				BGl_za2procedureza2z00zztype_cachez00);
																			((((BgL_nodez00_bglt)
																						COBJECT(((BgL_nodez00_bglt)
																								BgL_arg1796z00_2996)))->
																					BgL_typez00) =
																				((BgL_typez00_bglt) BgL_vz00_3941),
																				BUNSPEC);
																		}
																	}
																	((((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						((BgL_appz00_bglt)
																							BgL_appz00_2975))))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) ((BgL_typez00_bglt)
																				BGl_za2procedureza2z00zztype_cachez00)),
																		BUNSPEC);
																	{	/* Cfa/closure.scm 289 */
																		obj_t BgL_arg1798z00_2997;
																		obj_t BgL_arg1801z00_2998;

																		BgL_arg1798z00_2997 =
																			(((BgL_appz00_bglt) COBJECT(
																					((BgL_appz00_bglt)
																						((BgL_appz00_bglt)
																							BgL_appz00_2975))))->BgL_argsz00);
																		{	/* Cfa/closure.scm 289 */
																			obj_t BgL_pairz00_3942;

																			BgL_pairz00_3942 =
																				(((BgL_appz00_bglt) COBJECT(
																						((BgL_appz00_bglt)
																							((BgL_appz00_bglt)
																								BgL_appz00_2975))))->
																				BgL_argsz00);
																			BgL_arg1801z00_2998 =
																				CDR(CDR(BgL_pairz00_3942));
																		}
																		{	/* Cfa/closure.scm 289 */
																			obj_t BgL_tmpz00_4672;

																			BgL_tmpz00_4672 =
																				((obj_t) BgL_arg1798z00_2997);
																			SET_CDR(BgL_tmpz00_4672,
																				BgL_arg1801z00_2998);
																		}
																	}
																	BgL_appz00_2975;
																}
															}
														}
													}
												}
											else
												{	/* Cfa/closure.scm 297 */
													BFALSE;
												}
										}
								}
							}
							{
								obj_t BgL_l1522z00_4675;

								BgL_l1522z00_4675 = CDR(BgL_l1522z00_2936);
								BgL_l1522z00_2936 = BgL_l1522z00_4675;
								goto BgL_zc3z04anonymousza31712ze3z87_2937;
							}
						}
					else
						{	/* Cfa/closure.scm 293 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* light-funcall! */
	bool_t BGl_lightzd2funcallz12zc0zzcfa_closurez00()
	{
		{	/* Cfa/closure.scm 303 */
			{
				obj_t BgL_l1529z00_3007;

				BgL_l1529z00_3007 = BGl_za2funcallzd2listza2zd2zzcfa_closurez00;
			BgL_zc3z04anonymousza31822ze3z87_3008:
				if (PAIRP(BgL_l1529z00_3007))
					{	/* Cfa/closure.scm 307 */
						{	/* Cfa/closure.scm 308 */
							BgL_funcallz00_bglt BgL_appz00_3010;

							BgL_appz00_3010 = ((BgL_funcallz00_bglt) CAR(BgL_l1529z00_3007));
							{	/* Cfa/closure.scm 309 */
								BgL_nodez00_bglt BgL_funz00_3011;

								BgL_funz00_3011 =
									(((BgL_funcallz00_bglt) COBJECT(BgL_appz00_3010))->
									BgL_funz00);
								{	/* Cfa/closure.scm 309 */
									BgL_approxz00_bglt BgL_approxz00_3012;

									BgL_approxz00_3012 =
										BGl_cfaz12z12zzcfa_cfaz00(BgL_funz00_3011);
									{	/* Cfa/closure.scm 310 */
										obj_t BgL_alloczd2listzd2_3013;

										BgL_alloczd2listzd2_3013 =
											BGl_setzd2ze3listz31zzcfa_setz00(
											(((BgL_approxz00_bglt) COBJECT(BgL_approxz00_3012))->
												BgL_allocsz00));
										{	/* Cfa/closure.scm 311 */

											{	/* Cfa/closure.scm 312 */
												bool_t BgL_test2322z00_4685;

												if (PAIRP(BgL_alloczd2listzd2_3013))
													{	/* Cfa/closure.scm 313 */
														bool_t BgL_test2324z00_4688;

														{	/* Cfa/closure.scm 313 */
															obj_t BgL_arg1857z00_3058;

															BgL_arg1857z00_3058 =
																CAR(BgL_alloczd2listzd2_3013);
															BgL_test2324z00_4688 =
																BGl_isazf3zf3zz__objectz00(BgL_arg1857z00_3058,
																BGl_makezd2procedurezd2appz00zzcfa_info2z00);
														}
														if (BgL_test2324z00_4688)
															{	/* Cfa/closure.scm 313 */
																BgL_test2322z00_4685 = ((bool_t) 0);
															}
														else
															{	/* Cfa/closure.scm 313 */
																BgL_test2322z00_4685 = ((bool_t) 1);
															}
													}
												else
													{	/* Cfa/closure.scm 312 */
														BgL_test2322z00_4685 = ((bool_t) 1);
													}
												if (BgL_test2322z00_4685)
													{	/* Cfa/closure.scm 312 */
														CNST_TABLE_REF(((long) 8));
													}
												else
													{	/* Cfa/closure.scm 317 */
														BgL_appz00_bglt BgL_allocz00_3019;

														BgL_allocz00_3019 =
															((BgL_appz00_bglt)
															CAR(((obj_t) BgL_alloczd2listzd2_3013)));
														{	/* Cfa/closure.scm 320 */
															bool_t BgL_test2325z00_4695;

															{
																BgL_makezd2procedurezd2appz00_bglt
																	BgL_auxz00_4696;
																{
																	obj_t BgL_auxz00_4697;

																	{	/* Cfa/closure.scm 320 */
																		BgL_objectz00_bglt BgL_tmpz00_4698;

																		BgL_tmpz00_4698 =
																			((BgL_objectz00_bglt)
																			((BgL_appz00_bglt) BgL_allocz00_3019));
																		BgL_auxz00_4697 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_4698);
																	}
																	BgL_auxz00_4696 =
																		((BgL_makezd2procedurezd2appz00_bglt)
																		BgL_auxz00_4697);
																}
																BgL_test2325z00_4695 =
																	(((BgL_makezd2procedurezd2appz00_bglt)
																		COBJECT(BgL_auxz00_4696))->BgL_xz00);
															}
															if (BgL_test2325z00_4695)
																{	/* Cfa/closure.scm 320 */
																	{	/* Cfa/closure.scm 325 */
																		BgL_varz00_bglt BgL_arg1830z00_3022;

																		{	/* Cfa/closure.scm 325 */
																			BgL_nodez00_bglt
																				BgL_duplicated1171z00_3023;
																			BgL_varz00_bglt BgL_new1169z00_3024;

																			{	/* Cfa/closure.scm 325 */
																				obj_t BgL_pairz00_3961;

																				BgL_pairz00_3961 =
																					(((BgL_appz00_bglt) COBJECT(
																							((BgL_appz00_bglt)
																								((BgL_appz00_bglt)
																									BgL_allocz00_3019))))->
																					BgL_argsz00);
																				BgL_duplicated1171z00_3023 =
																					((BgL_nodez00_bglt)
																					CAR(BgL_pairz00_3961));
																			}
																			{	/* Cfa/closure.scm 326 */
																				BgL_varz00_bglt BgL_new1173z00_3034;

																				BgL_new1173z00_3034 =
																					((BgL_varz00_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_varz00_bgl))));
																				{	/* Cfa/closure.scm 326 */
																					long BgL_arg1842z00_3035;

																					{	/* Cfa/closure.scm 326 */
																						long BgL_res2220z00_3963;

																						BgL_res2220z00_3963 =
																							BGL_CLASS_INDEX
																							(BGl_varz00zzast_nodez00);
																						BgL_arg1842z00_3035 =
																							BgL_res2220z00_3963;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							BgL_new1173z00_3034),
																						BgL_arg1842z00_3035);
																				}
																				BgL_new1169z00_3024 =
																					BgL_new1173z00_3034;
																			}
																			((((BgL_nodez00_bglt) COBJECT(
																							((BgL_nodez00_bglt)
																								BgL_new1169z00_3024)))->
																					BgL_locz00) =
																				((obj_t) (((BgL_nodez00_bglt)
																							COBJECT
																							(BgL_duplicated1171z00_3023))->
																						BgL_locz00)), BUNSPEC);
																			{
																				BgL_typez00_bglt BgL_auxz00_4716;

																				{	/* Cfa/closure.scm 327 */
																					obj_t BgL_arg1831z00_3025;
																					BgL_typez00_bglt BgL_arg1832z00_3026;

																					{	/* Cfa/closure.scm 327 */
																						BgL_approxz00_bglt
																							BgL_arg1833z00_3027;
																						obj_t BgL_arg1835z00_3028;

																						{
																							BgL_makezd2procedurezd2appz00_bglt
																								BgL_auxz00_4718;
																							{
																								obj_t BgL_auxz00_4719;

																								{	/* Cfa/closure.scm 327 */
																									BgL_objectz00_bglt
																										BgL_tmpz00_4720;
																									BgL_tmpz00_4720 =
																										((BgL_objectz00_bglt) (
																											(BgL_appz00_bglt)
																											BgL_allocz00_3019));
																									BgL_auxz00_4719 =
																										BGL_OBJECT_WIDENING
																										(BgL_tmpz00_4720);
																								}
																								BgL_auxz00_4718 =
																									(
																									(BgL_makezd2procedurezd2appz00_bglt)
																									BgL_auxz00_4719);
																							}
																							BgL_arg1833z00_3027 =
																								(((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_4718))->BgL_approxz00);
																						}
																						{	/* Cfa/closure.scm 327 */
																							obj_t BgL_pairz00_3967;

																							BgL_pairz00_3967 =
																								(((BgL_appz00_bglt) COBJECT(
																										((BgL_appz00_bglt)
																											((BgL_appz00_bglt)
																												BgL_allocz00_3019))))->
																								BgL_argsz00);
																							BgL_arg1835z00_3028 =
																								CAR(BgL_pairz00_3967);
																						}
																						BgL_arg1831z00_3025 =
																							BGl_getzd2approxzd2typez00zzcfa_typez00
																							(BgL_arg1833z00_3027,
																							BgL_arg1835z00_3028);
																					}
																					{
																						BgL_nodez00_bglt BgL_auxz00_4731;

																						{
																							BgL_varz00_bglt BgL_auxz00_4732;

																							{	/* Cfa/closure.scm 328 */
																								obj_t BgL_pairz00_3968;

																								BgL_pairz00_3968 =
																									(((BgL_appz00_bglt) COBJECT(
																											((BgL_appz00_bglt)
																												((BgL_appz00_bglt)
																													BgL_allocz00_3019))))->
																									BgL_argsz00);
																								BgL_auxz00_4732 =
																									((BgL_varz00_bglt)
																									CAR(BgL_pairz00_3968));
																							}
																							BgL_auxz00_4731 =
																								((BgL_nodez00_bglt)
																								BgL_auxz00_4732);
																						}
																						BgL_arg1832z00_3026 =
																							(((BgL_nodez00_bglt)
																								COBJECT(BgL_auxz00_4731))->
																							BgL_typez00);
																					}
																					BgL_auxz00_4716 =
																						BGl_strictzd2nodezd2typez00zzast_nodez00
																						(((BgL_typez00_bglt)
																							BgL_arg1831z00_3025),
																						BgL_arg1832z00_3026);
																				}
																				((((BgL_nodez00_bglt) COBJECT(
																								((BgL_nodez00_bglt)
																									BgL_new1169z00_3024)))->
																						BgL_typez00) =
																					((BgL_typez00_bglt) BgL_auxz00_4716),
																					BUNSPEC);
																			}
																			((((BgL_varz00_bglt)
																						COBJECT(BgL_new1169z00_3024))->
																					BgL_variablez00) =
																				((BgL_variablez00_bglt) ((
																							(BgL_varz00_bglt)
																							COBJECT(((BgL_varz00_bglt)
																									BgL_duplicated1171z00_3023)))->
																						BgL_variablez00)), BUNSPEC);
																			BgL_arg1830z00_3022 = BgL_new1169z00_3024;
																		}
																		((((BgL_funcallz00_bglt)
																					COBJECT(BgL_appz00_3010))->
																				BgL_funz00) =
																			((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
																					BgL_arg1830z00_3022)), BUNSPEC);
																	}
																	{	/* Cfa/closure.scm 329 */
																		obj_t BgL_arg1845z00_3036;

																		{	/* Cfa/closure.scm 329 */
																			obj_t BgL_arg1846z00_3037;

																			{	/* Cfa/closure.scm 329 */
																				obj_t BgL_pairz00_3972;

																				BgL_pairz00_3972 =
																					(((BgL_appz00_bglt) COBJECT(
																							((BgL_appz00_bglt)
																								((BgL_appz00_bglt)
																									BgL_allocz00_3019))))->
																					BgL_argsz00);
																				BgL_arg1846z00_3037 =
																					CAR(BgL_pairz00_3972);
																			}
																			{	/* Cfa/closure.scm 329 */
																				obj_t BgL_list1847z00_3038;

																				BgL_list1847z00_3038 =
																					MAKE_YOUNG_PAIR(BgL_arg1846z00_3037,
																					BNIL);
																				BgL_arg1845z00_3036 =
																					BgL_list1847z00_3038;
																		}}
																		((((BgL_funcallz00_bglt)
																					COBJECT(BgL_appz00_3010))->
																				BgL_functionsz00) =
																			((obj_t) BgL_arg1845z00_3036), BUNSPEC);
																	}
																	{	/* Cfa/closure.scm 330 */
																		obj_t BgL_vz00_3976;

																		BgL_vz00_3976 = CNST_TABLE_REF(((long) 1));
																		((((BgL_funcallz00_bglt)
																					COBJECT(BgL_appz00_3010))->
																				BgL_strengthz00) =
																			((obj_t) BgL_vz00_3976), BUNSPEC);
																}}
															else
																{	/* Cfa/closure.scm 331 */
																	bool_t BgL_test2326z00_4756;

																	{
																		BgL_makezd2procedurezd2appz00_bglt
																			BgL_auxz00_4757;
																		{
																			obj_t BgL_auxz00_4758;

																			{	/* Cfa/closure.scm 331 */
																				BgL_objectz00_bglt BgL_tmpz00_4759;

																				BgL_tmpz00_4759 =
																					((BgL_objectz00_bglt)
																					((BgL_appz00_bglt)
																						BgL_allocz00_3019));
																				BgL_auxz00_4758 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_4759);
																			}
																			BgL_auxz00_4757 =
																				((BgL_makezd2procedurezd2appz00_bglt)
																				BgL_auxz00_4758);
																		}
																		BgL_test2326z00_4756 =
																			(((BgL_makezd2procedurezd2appz00_bglt)
																				COBJECT(BgL_auxz00_4757))->BgL_tz00);
																	}
																	if (BgL_test2326z00_4756)
																		{	/* Cfa/closure.scm 331 */
																			{	/* Cfa/closure.scm 334 */
																				obj_t BgL_fz00_3041;

																				if (NULLP(BgL_alloczd2listzd2_3013))
																					{	/* Cfa/closure.scm 334 */
																						BgL_fz00_3041 = BNIL;
																					}
																				else
																					{	/* Cfa/closure.scm 334 */
																						obj_t BgL_head1526z00_3044;

																						{	/* Cfa/closure.scm 334 */
																							obj_t BgL_res2223z00_3979;

																							BgL_res2223z00_3979 =
																								MAKE_YOUNG_PAIR(BNIL, BNIL);
																							BgL_head1526z00_3044 =
																								BgL_res2223z00_3979;
																						}
																						{
																							obj_t BgL_l1524z00_3046;
																							obj_t BgL_tail1527z00_3047;

																							BgL_l1524z00_3046 =
																								BgL_alloczd2listzd2_3013;
																							BgL_tail1527z00_3047 =
																								BgL_head1526z00_3044;
																						BgL_zc3z04anonymousza31851ze3z87_3048:
																							if (NULLP
																								(BgL_l1524z00_3046))
																								{	/* Cfa/closure.scm 334 */
																									BgL_fz00_3041 =
																										CDR(BgL_head1526z00_3044);
																								}
																							else
																								{	/* Cfa/closure.scm 334 */
																									obj_t BgL_newtail1528z00_3050;

																									{	/* Cfa/closure.scm 334 */
																										obj_t BgL_arg1855z00_3052;

																										{	/* Cfa/closure.scm 335 */
																											obj_t BgL_pairz00_3984;

																											BgL_pairz00_3984 =
																												(((BgL_appz00_bglt)
																													COBJECT((
																															(BgL_appz00_bglt)
																															((BgL_appz00_bglt)
																																CAR(((obj_t)
																																		BgL_l1524z00_3046))))))->
																												BgL_argsz00);
																											BgL_arg1855z00_3052 =
																												CAR(BgL_pairz00_3984);
																										}
																										{	/* Cfa/closure.scm 334 */
																											obj_t BgL_res2225z00_3985;

																											BgL_res2225z00_3985 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1855z00_3052,
																												BNIL);
																											BgL_newtail1528z00_3050 =
																												BgL_res2225z00_3985;
																										}
																									}
																									SET_CDR(BgL_tail1527z00_3047,
																										BgL_newtail1528z00_3050);
																									{	/* Cfa/closure.scm 334 */
																										obj_t BgL_arg1853z00_3051;

																										BgL_arg1853z00_3051 =
																											CDR(
																											((obj_t)
																												BgL_l1524z00_3046));
																										{
																											obj_t
																												BgL_tail1527z00_4782;
																											obj_t BgL_l1524z00_4781;

																											BgL_l1524z00_4781 =
																												BgL_arg1853z00_3051;
																											BgL_tail1527z00_4782 =
																												BgL_newtail1528z00_3050;
																											BgL_tail1527z00_3047 =
																												BgL_tail1527z00_4782;
																											BgL_l1524z00_3046 =
																												BgL_l1524z00_4781;
																											goto
																												BgL_zc3z04anonymousza31851ze3z87_3048;
																										}
																									}
																								}
																						}
																					}
																				((((BgL_funcallz00_bglt)
																							COBJECT(BgL_appz00_3010))->
																						BgL_functionsz00) =
																					((obj_t) BgL_fz00_3041), BUNSPEC);
																				{	/* Cfa/closure.scm 338 */
																					obj_t BgL_vz00_3990;

																					BgL_vz00_3990 =
																						CNST_TABLE_REF(((long) 2));
																					((((BgL_funcallz00_bglt)
																								COBJECT(BgL_appz00_3010))->
																							BgL_strengthz00) =
																						((obj_t) BgL_vz00_3990), BUNSPEC);
																		}}}
																	else
																		{	/* Cfa/closure.scm 331 */
																			CNST_TABLE_REF(((long) 8));
						}}}}}}}}}}
						{
							obj_t BgL_l1529z00_4787;

							BgL_l1529z00_4787 = CDR(BgL_l1529z00_3007);
							BgL_l1529z00_3007 = BgL_l1529z00_4787;
							goto BgL_zc3z04anonymousza31822ze3z87_3008;
						}
					}
				else
					{	/* Cfa/closure.scm 307 */
						((bool_t) 1);
					}
			}
			if (CBOOL
				(BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00))
				{	/* Cfa/closure.scm 343 */
					{	/* Cfa/closure.scm 349 */
						obj_t BgL_funcallzd2lzd2_3062;

						{	/* Cfa/closure.scm 349 */
							obj_t BgL_hook1535z00_3086;

							BgL_hook1535z00_3086 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
							{
								obj_t BgL_l1532z00_3088;
								obj_t BgL_h1533z00_3089;

								BgL_l1532z00_3088 = BGl_za2funcallzd2listza2zd2zzcfa_closurez00;
								BgL_h1533z00_3089 = BgL_hook1535z00_3086;
							BgL_zc3z04anonymousza31873ze3z87_3090:
								if (NULLP(BgL_l1532z00_3088))
									{	/* Cfa/closure.scm 349 */
										BgL_funcallzd2lzd2_3062 = CDR(BgL_hook1535z00_3086);
									}
								else
									{	/* Cfa/closure.scm 349 */
										if (
											((((BgL_funcallz00_bglt) COBJECT(
															((BgL_funcallz00_bglt)
																CAR(
																	((obj_t) BgL_l1532z00_3088)))))->
													BgL_strengthz00) == CNST_TABLE_REF(((long) 2))))
											{	/* Cfa/closure.scm 349 */
												obj_t BgL_nh1534z00_3095;

												{	/* Cfa/closure.scm 349 */
													obj_t BgL_arg1879z00_3097;

													BgL_arg1879z00_3097 =
														CAR(((obj_t) BgL_l1532z00_3088));
													{	/* Cfa/closure.scm 349 */
														obj_t BgL_res2227z00_3997;

														BgL_res2227z00_3997 =
															MAKE_YOUNG_PAIR(BgL_arg1879z00_3097, BNIL);
														BgL_nh1534z00_3095 = BgL_res2227z00_3997;
												}}
												SET_CDR(BgL_h1533z00_3089, BgL_nh1534z00_3095);
												{	/* Cfa/closure.scm 349 */
													obj_t BgL_arg1878z00_3096;

													BgL_arg1878z00_3096 =
														CDR(((obj_t) BgL_l1532z00_3088));
													{
														obj_t BgL_h1533z00_4809;
														obj_t BgL_l1532z00_4808;

														BgL_l1532z00_4808 = BgL_arg1878z00_3096;
														BgL_h1533z00_4809 = BgL_nh1534z00_3095;
														BgL_h1533z00_3089 = BgL_h1533z00_4809;
														BgL_l1532z00_3088 = BgL_l1532z00_4808;
														goto BgL_zc3z04anonymousza31873ze3z87_3090;
													}
												}
											}
										else
											{	/* Cfa/closure.scm 349 */
												obj_t BgL_arg1881z00_3098;

												BgL_arg1881z00_3098 = CDR(((obj_t) BgL_l1532z00_3088));
												{
													obj_t BgL_l1532z00_4812;

													BgL_l1532z00_4812 = BgL_arg1881z00_3098;
													BgL_l1532z00_3088 = BgL_l1532z00_4812;
													goto BgL_zc3z04anonymousza31873ze3z87_3090;
												}
											}
									}
							}
						}
						{

						BgL_zc3z04anonymousza31860ze3z87_3064:
							{	/* Cfa/closure.scm 353 */
								bool_t BgL_contz00_3065;

								BgL_contz00_3065 = ((bool_t) 0);
								{
									obj_t BgL_l1536z00_3067;

									BgL_l1536z00_3067 = BgL_funcallzd2lzd2_3062;
								BgL_zc3z04anonymousza31861ze3z87_3068:
									if (PAIRP(BgL_l1536z00_3067))
										{	/* Cfa/closure.scm 354 */
											{	/* Cfa/closure.scm 355 */
												BgL_funcallz00_bglt BgL_appz00_3070;

												BgL_appz00_3070 =
													((BgL_funcallz00_bglt) CAR(BgL_l1536z00_3067));
												{	/* Cfa/closure.scm 355 */
													BgL_nodez00_bglt BgL_funz00_3071;

													BgL_funz00_3071 =
														(((BgL_funcallz00_bglt) COBJECT(BgL_appz00_3070))->
														BgL_funz00);
													{	/* Cfa/closure.scm 355 */
														BgL_approxz00_bglt BgL_approxz00_3072;

														BgL_approxz00_3072 =
															BGl_cfaz12z12zzcfa_cfaz00(BgL_funz00_3071);
														{	/* Cfa/closure.scm 356 */
															obj_t BgL_appsz00_3073;

															BgL_appsz00_3073 =
																BGl_setzd2ze3listz31zzcfa_setz00(
																(((BgL_approxz00_bglt)
																		COBJECT(BgL_approxz00_3072))->
																	BgL_allocsz00));
															{	/* Cfa/closure.scm 357 */

																if (PAIRP(BgL_appsz00_3073))
																	{	/* Cfa/closure.scm 358 */
																		{	/* Cfa/closure.scm 359 */
																			bool_t BgL_test2334z00_4823;

																			{	/* Cfa/closure.scm 359 */
																				obj_t BgL_tmpz00_4824;

																				BgL_tmpz00_4824 = CDR(BgL_appsz00_3073);
																				BgL_test2334z00_4823 =
																					PAIRP(BgL_tmpz00_4824);
																			}
																			if (BgL_test2334z00_4823)
																				{	/* Cfa/closure.scm 361 */
																					bool_t BgL__ortest_1174z00_3077;

																					BgL__ortest_1174z00_3077 =
																						BGl_mergezd2appzd2typesz12z12zzcfa_closurez00
																						(BgL_appsz00_3073);
																					if (BgL__ortest_1174z00_3077)
																						{	/* Cfa/closure.scm 361 */
																							BgL_contz00_3065 =
																								BgL__ortest_1174z00_3077;
																						}
																					else
																						{	/* Cfa/closure.scm 361 */
																							BgL_contz00_3065 =
																								BgL_contz00_3065;
																						}
																				}
																			else
																				{	/* Cfa/closure.scm 359 */
																					BFALSE;
																				}
																		}
																		{	/* Cfa/closure.scm 362 */
																			bool_t BgL_mz00_3079;

																			{	/* Cfa/closure.scm 363 */
																				BgL_approxz00_bglt BgL_arg1870z00_3081;

																				BgL_arg1870z00_3081 =
																					BGl_cfaz12z12zzcfa_cfaz00(
																					((BgL_nodez00_bglt) BgL_appz00_3070));
																				BgL_mz00_3079 =
																					BGl_mergezd2appzd2returnzd2typesz12zc0zzcfa_closurez00
																					(BgL_appsz00_3073,
																					BgL_arg1870z00_3081);
																			}
																			{	/* Cfa/closure.scm 364 */
																				bool_t BgL__ortest_1175z00_3080;

																				BgL__ortest_1175z00_3080 =
																					BgL_contz00_3065;
																				if (BgL__ortest_1175z00_3080)
																					{	/* Cfa/closure.scm 364 */
																						BgL_contz00_3065 =
																							BgL__ortest_1175z00_3080;
																					}
																				else
																					{	/* Cfa/closure.scm 364 */
																						BgL_contz00_3065 = BgL_mz00_3079;
																					}
																			}
																		}
																	}
																else
																	{	/* Cfa/closure.scm 358 */
																		BFALSE;
																	}
															}
														}
													}
												}
											}
											{
												obj_t BgL_l1536z00_4833;

												BgL_l1536z00_4833 = CDR(BgL_l1536z00_3067);
												BgL_l1536z00_3067 = BgL_l1536z00_4833;
												goto BgL_zc3z04anonymousza31861ze3z87_3068;
											}
										}
									else
										{	/* Cfa/closure.scm 354 */
											((bool_t) 1);
										}
								}
								if (BgL_contz00_3065)
									{	/* Cfa/closure.scm 366 */
										goto BgL_zc3z04anonymousza31860ze3z87_3064;
									}
								else
									{	/* Cfa/closure.scm 366 */
										return ((bool_t) 0);
									}
							}
						}
					}
				}
			else
				{	/* Cfa/closure.scm 343 */
					return ((bool_t) 0);
				}
		}

	}



/* merge-app-return-types! */
	bool_t BGl_mergezd2appzd2returnzd2typesz12zc0zzcfa_closurez00(obj_t
		BgL_appsz00_8, BgL_approxz00_bglt BgL_approxz00_9)
	{
		{	/* Cfa/closure.scm 372 */
			{	/* Cfa/closure.scm 373 */
				obj_t BgL_app0z00_3102;

				BgL_app0z00_3102 = CAR(BgL_appsz00_8);
				{	/* Cfa/closure.scm 373 */
					BgL_variablez00_bglt BgL_f0z00_3103;

					{
						BgL_varz00_bglt BgL_auxz00_4837;

						{	/* Cfa/closure.scm 374 */
							obj_t BgL_pairz00_4011;

							BgL_pairz00_4011 =
								(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt)
											((BgL_appz00_bglt) BgL_app0z00_3102))))->BgL_argsz00);
							BgL_auxz00_4837 = ((BgL_varz00_bglt) CAR(BgL_pairz00_4011));
						}
						BgL_f0z00_3103 =
							(((BgL_varz00_bglt) COBJECT(BgL_auxz00_4837))->BgL_variablez00);
					}
					{	/* Cfa/closure.scm 374 */
						BgL_approxz00_bglt BgL_r0z00_3104;

						{	/* Cfa/closure.scm 375 */
							BgL_sfunz00_bglt BgL_oz00_4014;

							BgL_oz00_4014 =
								((BgL_sfunz00_bglt)
								(((BgL_variablez00_bglt) COBJECT(BgL_f0z00_3103))->
									BgL_valuez00));
							{
								BgL_internzd2sfunzf2cinfoz20_bglt BgL_auxz00_4846;

								{
									obj_t BgL_auxz00_4847;

									{	/* Cfa/closure.scm 375 */
										BgL_objectz00_bglt BgL_tmpz00_4848;

										BgL_tmpz00_4848 = ((BgL_objectz00_bglt) BgL_oz00_4014);
										BgL_auxz00_4847 = BGL_OBJECT_WIDENING(BgL_tmpz00_4848);
									}
									BgL_auxz00_4846 =
										((BgL_internzd2sfunzf2cinfoz20_bglt) BgL_auxz00_4847);
								}
								BgL_r0z00_3104 =
									(((BgL_internzd2sfunzf2cinfoz20_bglt)
										COBJECT(BgL_auxz00_4846))->BgL_approxz00);
							}
						}
						{	/* Cfa/closure.scm 375 */
							BgL_typez00_bglt BgL_rt0z00_3105;

							BgL_rt0z00_3105 =
								(((BgL_approxz00_bglt) COBJECT(BgL_r0z00_3104))->BgL_typez00);
							{	/* Cfa/closure.scm 376 */
								BgL_typez00_bglt BgL_brt0z00_3106;

								BgL_brt0z00_3106 =
									BGl_getzd2bigloozd2typez00zztype_cachez00(BgL_rt0z00_3105);
								{	/* Cfa/closure.scm 377 */
									BgL_typez00_bglt BgL_atz00_3107;

									BgL_atz00_3107 =
										(((BgL_approxz00_bglt) COBJECT(BgL_approxz00_9))->
										BgL_typez00);
									{	/* Cfa/closure.scm 378 */

										{	/* Cfa/closure.scm 379 */
											bool_t BgL_test2338z00_4856;

											if (
												(((obj_t) BgL_rt0z00_3105) == ((obj_t) BgL_atz00_3107)))
												{	/* Cfa/closure.scm 379 */
													BgL_test2338z00_4856 = ((bool_t) 1);
												}
											else
												{	/* Cfa/closure.scm 379 */
													if (BGl_bigloozd2typezf3z21zztype_typez00
														(BgL_rt0z00_3105))
														{	/* Cfa/closure.scm 379 */
															BgL_test2338z00_4856 =
																BGl_bigloozd2typezf3z21zztype_typez00
																(BgL_atz00_3107);
														}
													else
														{	/* Cfa/closure.scm 379 */
															BgL_test2338z00_4856 = ((bool_t) 0);
														}
												}
											if (BgL_test2338z00_4856)
												{	/* Cfa/closure.scm 379 */
													return ((bool_t) 0);
												}
											else
												{	/* Cfa/closure.scm 379 */
													((((BgL_approxz00_bglt) COBJECT(BgL_approxz00_9))->
															BgL_typez00) =
														((BgL_typez00_bglt) (((BgL_approxz00_bglt)
																	COBJECT(BgL_r0z00_3104))->BgL_typez00)),
														BUNSPEC);
													return ((bool_t) 1);
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



/* merge-app-types! */
	bool_t BGl_mergezd2appzd2typesz12z12zzcfa_closurez00(obj_t BgL_apps0z00_10)
	{
		{	/* Cfa/closure.scm 386 */
			{
				BgL_appz00_bglt BgL_app0z00_3130;
				BgL_appz00_bglt BgL_app1z00_3131;

				{	/* Cfa/closure.scm 455 */
					obj_t BgL_g1181z00_3118;

					BgL_g1181z00_3118 = CDR(((obj_t) BgL_apps0z00_10));
					{
						obj_t BgL_appsz00_3120;
						bool_t BgL_contz00_3121;

						BgL_appsz00_3120 = BgL_g1181z00_3118;
						BgL_contz00_3121 = ((bool_t) 0);
					BgL_zc3z04anonymousza31889ze3z87_3122:
						if (NULLP(BgL_appsz00_3120))
							{	/* Cfa/closure.scm 457 */
								return BgL_contz00_3121;
							}
						else
							{	/* Cfa/closure.scm 459 */
								obj_t BgL_arg1891z00_3124;
								bool_t BgL_arg1892z00_3125;

								BgL_arg1891z00_3124 = CDR(((obj_t) BgL_appsz00_3120));
								{	/* Cfa/closure.scm 459 */
									bool_t BgL__ortest_1182z00_3126;

									{	/* Cfa/closure.scm 459 */
										obj_t BgL_arg1893z00_3127;
										obj_t BgL_arg1895z00_3128;

										BgL_arg1893z00_3127 = CAR(((obj_t) BgL_apps0z00_10));
										BgL_arg1895z00_3128 = CAR(((obj_t) BgL_appsz00_3120));
										BgL_app0z00_3130 = ((BgL_appz00_bglt) BgL_arg1893z00_3127);
										BgL_app1z00_3131 = ((BgL_appz00_bglt) BgL_arg1895z00_3128);
										{	/* Cfa/closure.scm 389 */
											BgL_variablez00_bglt BgL_f0z00_3133;

											{
												BgL_varz00_bglt BgL_auxz00_4876;

												{	/* Cfa/closure.scm 389 */
													obj_t BgL_pairz00_4022;

													BgL_pairz00_4022 =
														(((BgL_appz00_bglt) COBJECT(
																((BgL_appz00_bglt) BgL_app0z00_3130)))->
														BgL_argsz00);
													BgL_auxz00_4876 =
														((BgL_varz00_bglt) CAR(BgL_pairz00_4022));
												}
												BgL_f0z00_3133 =
													(((BgL_varz00_bglt) COBJECT(BgL_auxz00_4876))->
													BgL_variablez00);
											}
											{	/* Cfa/closure.scm 389 */
												BgL_variablez00_bglt BgL_f1z00_3134;

												{
													BgL_varz00_bglt BgL_auxz00_4882;

													{	/* Cfa/closure.scm 390 */
														obj_t BgL_pairz00_4025;

														BgL_pairz00_4025 =
															(((BgL_appz00_bglt) COBJECT(
																	((BgL_appz00_bglt) BgL_app1z00_3131)))->
															BgL_argsz00);
														BgL_auxz00_4882 =
															((BgL_varz00_bglt) CAR(BgL_pairz00_4025));
													}
													BgL_f1z00_3134 =
														(((BgL_varz00_bglt) COBJECT(BgL_auxz00_4882))->
														BgL_variablez00);
												}
												{	/* Cfa/closure.scm 390 */

													{	/* Cfa/closure.scm 392 */
														BgL_approxz00_bglt BgL_r0z00_3135;

														{	/* Cfa/closure.scm 392 */
															BgL_sfunz00_bglt BgL_oz00_4028;

															BgL_oz00_4028 =
																((BgL_sfunz00_bglt)
																(((BgL_variablez00_bglt)
																		COBJECT(BgL_f0z00_3133))->BgL_valuez00));
															{
																BgL_internzd2sfunzf2cinfoz20_bglt
																	BgL_auxz00_4890;
																{
																	obj_t BgL_auxz00_4891;

																	{	/* Cfa/closure.scm 392 */
																		BgL_objectz00_bglt BgL_tmpz00_4892;

																		BgL_tmpz00_4892 =
																			((BgL_objectz00_bglt) BgL_oz00_4028);
																		BgL_auxz00_4891 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_4892);
																	}
																	BgL_auxz00_4890 =
																		((BgL_internzd2sfunzf2cinfoz20_bglt)
																		BgL_auxz00_4891);
																}
																BgL_r0z00_3135 =
																	(((BgL_internzd2sfunzf2cinfoz20_bglt)
																		COBJECT(BgL_auxz00_4890))->BgL_approxz00);
															}
														}
														{	/* Cfa/closure.scm 392 */
															BgL_approxz00_bglt BgL_r1z00_3136;

															{	/* Cfa/closure.scm 393 */
																BgL_sfunz00_bglt BgL_oz00_4031;

																BgL_oz00_4031 =
																	((BgL_sfunz00_bglt)
																	(((BgL_variablez00_bglt)
																			COBJECT(BgL_f1z00_3134))->BgL_valuez00));
																{
																	BgL_internzd2sfunzf2cinfoz20_bglt
																		BgL_auxz00_4899;
																	{
																		obj_t BgL_auxz00_4900;

																		{	/* Cfa/closure.scm 393 */
																			BgL_objectz00_bglt BgL_tmpz00_4901;

																			BgL_tmpz00_4901 =
																				((BgL_objectz00_bglt) BgL_oz00_4031);
																			BgL_auxz00_4900 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_4901);
																		}
																		BgL_auxz00_4899 =
																			((BgL_internzd2sfunzf2cinfoz20_bglt)
																			BgL_auxz00_4900);
																	}
																	BgL_r1z00_3136 =
																		(((BgL_internzd2sfunzf2cinfoz20_bglt)
																			COBJECT(BgL_auxz00_4899))->BgL_approxz00);
																}
															}
															{	/* Cfa/closure.scm 393 */
																BgL_typez00_bglt BgL_rt0z00_3137;

																BgL_rt0z00_3137 =
																	(((BgL_approxz00_bglt)
																		COBJECT(BgL_r0z00_3135))->BgL_typez00);
																{	/* Cfa/closure.scm 394 */
																	BgL_typez00_bglt BgL_rt1z00_3138;

																	BgL_rt1z00_3138 =
																		(((BgL_approxz00_bglt)
																			COBJECT(BgL_r1z00_3136))->BgL_typez00);
																	{	/* Cfa/closure.scm 395 */
																		BgL_typez00_bglt BgL_brt0z00_3139;

																		BgL_brt0z00_3139 =
																			BGl_getzd2bigloozd2typez00zztype_cachez00
																			(BgL_rt0z00_3137);
																		{	/* Cfa/closure.scm 396 */
																			BgL_typez00_bglt BgL_brt1z00_3140;

																			BgL_brt1z00_3140 =
																				BGl_getzd2bigloozd2typez00zztype_cachez00
																				(BgL_rt1z00_3138);
																			{	/* Cfa/closure.scm 397 */

																				{	/* Cfa/closure.scm 398 */
																					bool_t BgL_test2342z00_4910;

																					if (
																						(((obj_t) BgL_rt0z00_3137) ==
																							((obj_t) BgL_rt1z00_3138)))
																						{	/* Cfa/closure.scm 398 */
																							BgL_test2342z00_4910 =
																								((bool_t) 1);
																						}
																					else
																						{	/* Cfa/closure.scm 398 */
																							if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_rt0z00_3137))
																								{	/* Cfa/closure.scm 399 */
																									BgL_test2342z00_4910 =
																										BGl_bigloozd2typezf3z21zztype_typez00
																										(BgL_rt1z00_3138);
																								}
																							else
																								{	/* Cfa/closure.scm 399 */
																									BgL_test2342z00_4910 =
																										((bool_t) 0);
																								}
																						}
																					if (BgL_test2342z00_4910)
																						{	/* Cfa/closure.scm 398 */
																							BFALSE;
																						}
																					else
																						{	/* Cfa/closure.scm 398 */
																							if (
																								(((obj_t) BgL_rt0z00_3137) ==
																									((obj_t) BgL_brt0z00_3139)))
																								{	/* Cfa/closure.scm 400 */
																									BFALSE;
																								}
																							else
																								{	/* Cfa/closure.scm 400 */
																									((((BgL_approxz00_bglt)
																												COBJECT
																												(BgL_r0z00_3135))->
																											BgL_typez00) =
																										((BgL_typez00_bglt)
																											BgL_brt0z00_3139),
																										BUNSPEC);
																								}
																							if (
																								(((obj_t) BgL_rt1z00_3138) ==
																									((obj_t) BgL_brt1z00_3140)))
																								{	/* Cfa/closure.scm 402 */
																									BFALSE;
																								}
																							else
																								{	/* Cfa/closure.scm 402 */
																									((((BgL_approxz00_bglt)
																												COBJECT
																												(BgL_r1z00_3136))->
																											BgL_typez00) =
																										((BgL_typez00_bglt)
																											BgL_brt1z00_3140),
																										BUNSPEC);
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
													{	/* Cfa/closure.scm 404 */
														obj_t BgL_g1178z00_3150;
														obj_t BgL_g1179z00_3151;

														{	/* Cfa/closure.scm 404 */
															obj_t BgL_pairz00_4041;

															BgL_pairz00_4041 =
																(((BgL_sfunz00_bglt) COBJECT(
																		((BgL_sfunz00_bglt)
																			(((BgL_variablez00_bglt)
																					COBJECT(BgL_f0z00_3133))->
																				BgL_valuez00))))->BgL_argsz00);
															BgL_g1178z00_3150 = CDR(BgL_pairz00_4041);
														}
														{	/* Cfa/closure.scm 405 */
															obj_t BgL_pairz00_4044;

															BgL_pairz00_4044 =
																(((BgL_sfunz00_bglt) COBJECT(
																		((BgL_sfunz00_bglt)
																			(((BgL_variablez00_bglt)
																					COBJECT(BgL_f1z00_3134))->
																				BgL_valuez00))))->BgL_argsz00);
															BgL_g1179z00_3151 = CDR(BgL_pairz00_4044);
														}
														{
															obj_t BgL_a0z00_3153;
															obj_t BgL_a1z00_3154;
															bool_t BgL_contz00_3155;

															BgL_a0z00_3153 = BgL_g1178z00_3150;
															BgL_a1z00_3154 = BgL_g1179z00_3151;
															BgL_contz00_3155 = ((bool_t) 0);
														BgL_zc3z04anonymousza31903ze3z87_3156:
															{	/* Cfa/closure.scm 407 */
																bool_t BgL_test2347z00_4936;

																if (PAIRP(BgL_a0z00_3153))
																	{	/* Cfa/closure.scm 407 */
																		BgL_test2347z00_4936 =
																			PAIRP(BgL_a1z00_3154);
																	}
																else
																	{	/* Cfa/closure.scm 407 */
																		BgL_test2347z00_4936 = ((bool_t) 0);
																	}
																if (BgL_test2347z00_4936)
																	{	/* Cfa/closure.scm 408 */
																		BgL_approxz00_bglt BgL_p0z00_3159;

																		{	/* Cfa/closure.scm 408 */
																			BgL_svarz00_bglt BgL_oz00_4049;

																			BgL_oz00_4049 =
																				((BgL_svarz00_bglt)
																				(((BgL_variablez00_bglt) COBJECT(
																							((BgL_variablez00_bglt)
																								CAR(BgL_a0z00_3153))))->
																					BgL_valuez00));
																			{
																				BgL_svarzf2cinfozf2_bglt
																					BgL_auxz00_4944;
																				{
																					obj_t BgL_auxz00_4945;

																					{	/* Cfa/closure.scm 408 */
																						BgL_objectz00_bglt BgL_tmpz00_4946;

																						BgL_tmpz00_4946 =
																							((BgL_objectz00_bglt)
																							BgL_oz00_4049);
																						BgL_auxz00_4945 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_4946);
																					}
																					BgL_auxz00_4944 =
																						((BgL_svarzf2cinfozf2_bglt)
																						BgL_auxz00_4945);
																				}
																				BgL_p0z00_3159 =
																					(((BgL_svarzf2cinfozf2_bglt)
																						COBJECT(BgL_auxz00_4944))->
																					BgL_approxz00);
																			}
																		}
																		{	/* Cfa/closure.scm 408 */
																			BgL_approxz00_bglt BgL_p1z00_3160;

																			{	/* Cfa/closure.scm 409 */
																				BgL_svarz00_bglt BgL_oz00_4053;

																				BgL_oz00_4053 =
																					((BgL_svarz00_bglt)
																					(((BgL_variablez00_bglt) COBJECT(
																								((BgL_variablez00_bglt)
																									CAR(BgL_a1z00_3154))))->
																						BgL_valuez00));
																				{
																					BgL_svarzf2cinfozf2_bglt
																						BgL_auxz00_4955;
																					{
																						obj_t BgL_auxz00_4956;

																						{	/* Cfa/closure.scm 409 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_4957;
																							BgL_tmpz00_4957 =
																								((BgL_objectz00_bglt)
																								BgL_oz00_4053);
																							BgL_auxz00_4956 =
																								BGL_OBJECT_WIDENING
																								(BgL_tmpz00_4957);
																						}
																						BgL_auxz00_4955 =
																							((BgL_svarzf2cinfozf2_bglt)
																							BgL_auxz00_4956);
																					}
																					BgL_p1z00_3160 =
																						(((BgL_svarzf2cinfozf2_bglt)
																							COBJECT(BgL_auxz00_4955))->
																						BgL_approxz00);
																				}
																			}
																			{	/* Cfa/closure.scm 409 */
																				BgL_typez00_bglt BgL_t0z00_3161;

																				BgL_t0z00_3161 =
																					(((BgL_approxz00_bglt)
																						COBJECT(BgL_p0z00_3159))->
																					BgL_typez00);
																				{	/* Cfa/closure.scm 410 */
																					BgL_typez00_bglt BgL_t1z00_3162;

																					BgL_t1z00_3162 =
																						(((BgL_approxz00_bglt)
																							COBJECT(BgL_p1z00_3160))->
																						BgL_typez00);
																					{	/* Cfa/closure.scm 411 */

																						{	/* Cfa/closure.scm 412 */
																							bool_t BgL_test2349z00_4964;

																							if (
																								(((obj_t) BgL_t0z00_3161) ==
																									((obj_t) BgL_t1z00_3162)))
																								{	/* Cfa/closure.scm 412 */
																									BgL_test2349z00_4964 =
																										((bool_t) 1);
																								}
																							else
																								{	/* Cfa/closure.scm 412 */
																									if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_t0z00_3161))
																										{	/* Cfa/closure.scm 412 */
																											BgL_test2349z00_4964 =
																												BGl_bigloozd2typezf3z21zztype_typez00
																												(BgL_t1z00_3162);
																										}
																									else
																										{	/* Cfa/closure.scm 412 */
																											BgL_test2349z00_4964 =
																												((bool_t) 0);
																										}
																								}
																							if (BgL_test2349z00_4964)
																								{
																									obj_t BgL_a1z00_4974;
																									obj_t BgL_a0z00_4972;

																									BgL_a0z00_4972 =
																										CDR(BgL_a0z00_3153);
																									BgL_a1z00_4974 =
																										CDR(BgL_a1z00_3154);
																									BgL_a1z00_3154 =
																										BgL_a1z00_4974;
																									BgL_a0z00_3153 =
																										BgL_a0z00_4972;
																									goto
																										BgL_zc3z04anonymousza31903ze3z87_3156;
																								}
																							else
																								{	/* Cfa/closure.scm 435 */
																									BgL_typez00_bglt
																										BgL_bt0z00_3168;
																									BgL_typez00_bglt
																										BgL_bt1z00_3169;
																									bool_t BgL_contz00_3170;

																									BgL_bt0z00_3168 =
																										BGl_getzd2bigloozd2typez00zztype_cachez00
																										(BgL_t0z00_3161);
																									BgL_bt1z00_3169 =
																										BGl_getzd2bigloozd2typez00zztype_cachez00
																										(BgL_t1z00_3162);
																									BgL_contz00_3170 =
																										((bool_t) 0);
																									if ((((obj_t) ((
																														(BgL_variablez00_bglt)
																														COBJECT((
																																(BgL_variablez00_bglt)
																																CAR
																																(BgL_a0z00_3153))))->
																													BgL_typez00)) ==
																											((obj_t)
																												BgL_bt0z00_3168)))
																										{	/* Cfa/closure.scm 438 */
																											BFALSE;
																										}
																									else
																										{	/* Cfa/closure.scm 438 */
																											{	/* Cfa/closure.scm 440 */
																												obj_t
																													BgL_arg1913z00_3174;
																												BgL_arg1913z00_3174 =
																													CAR(BgL_a0z00_3153);
																												((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) BgL_arg1913z00_3174)))->BgL_typez00) = ((BgL_typez00_bglt) BgL_bt0z00_3168), BUNSPEC);
																											}
																											((((BgL_approxz00_bglt)
																														COBJECT
																														(BgL_p0z00_3159))->
																													BgL_typez00) =
																												((BgL_typez00_bglt)
																													BgL_bt0z00_3168),
																												BUNSPEC);
																											BgL_contz00_3170 =
																												((bool_t) 1);
																										}
																									if (
																										(((obj_t)
																												(((BgL_variablez00_bglt)
																														COBJECT((
																																(BgL_variablez00_bglt)
																																CAR
																																(BgL_a1z00_3154))))->
																													BgL_typez00)) ==
																											((obj_t)
																												BgL_bt1z00_3169)))
																										{	/* Cfa/closure.scm 444 */
																											BFALSE;
																										}
																									else
																										{	/* Cfa/closure.scm 444 */
																											{	/* Cfa/closure.scm 446 */
																												obj_t
																													BgL_arg1919z00_3180;
																												BgL_arg1919z00_3180 =
																													CAR(BgL_a1z00_3154);
																												((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) BgL_arg1919z00_3180)))->BgL_typez00) = ((BgL_typez00_bglt) BgL_bt1z00_3169), BUNSPEC);
																											}
																											((((BgL_approxz00_bglt)
																														COBJECT
																														(BgL_p1z00_3160))->
																													BgL_typez00) =
																												((BgL_typez00_bglt)
																													BgL_bt1z00_3169),
																												BUNSPEC);
																											BgL_contz00_3170 =
																												((bool_t) 1);
																										}
																									{	/* Cfa/closure.scm 452 */
																										obj_t BgL_arg1923z00_3183;
																										obj_t BgL_arg1924z00_3184;

																										BgL_arg1923z00_3183 =
																											CDR(BgL_a0z00_3153);
																										BgL_arg1924z00_3184 =
																											CDR(BgL_a1z00_3154);
																										{
																											bool_t BgL_contz00_5004;
																											obj_t BgL_a1z00_5003;
																											obj_t BgL_a0z00_5002;

																											BgL_a0z00_5002 =
																												BgL_arg1923z00_3183;
																											BgL_a1z00_5003 =
																												BgL_arg1924z00_3184;
																											BgL_contz00_5004 =
																												BgL_contz00_3170;
																											BgL_contz00_3155 =
																												BgL_contz00_5004;
																											BgL_a1z00_3154 =
																												BgL_a1z00_5003;
																											BgL_a0z00_3153 =
																												BgL_a0z00_5002;
																											goto
																												BgL_zc3z04anonymousza31903ze3z87_3156;
																										}
																									}
																								}
																						}
																					}
																				}
																			}
																		}
																	}
																else
																	{	/* Cfa/closure.scm 407 */
																		BgL__ortest_1182z00_3126 = BgL_contz00_3155;
																	}
															}
														}
													}
												}
											}
										}
									}
									if (BgL__ortest_1182z00_3126)
										{	/* Cfa/closure.scm 459 */
											BgL_arg1892z00_3125 = BgL__ortest_1182z00_3126;
										}
									else
										{	/* Cfa/closure.scm 459 */
											BgL_arg1892z00_3125 = BgL_contz00_3121;
										}
								}
								{
									bool_t BgL_contz00_5009;
									obj_t BgL_appsz00_5008;

									BgL_appsz00_5008 = BgL_arg1891z00_3124;
									BgL_contz00_5009 = BgL_arg1892z00_3125;
									BgL_contz00_3121 = BgL_contz00_5009;
									BgL_appsz00_3120 = BgL_appsz00_5008;
									goto BgL_zc3z04anonymousza31889ze3z87_3122;
								}
							}
					}
				}
			}
		}

	}



/* type-closures! */
	BGL_EXPORTED_DEF obj_t BGl_typezd2closuresz12zc0zzcfa_closurez00()
	{
		{	/* Cfa/closure.scm 464 */
			{
				BgL_appz00_bglt BgL_appz00_3211;

				if (CBOOL
					(BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00))
					{	/* Cfa/closure.scm 491 */
						obj_t BgL_g1543z00_3203;

						BgL_g1543z00_3203 =
							BGl_za2makezd2procedurezd2listza2z00zzcfa_closurez00;
						{
							obj_t BgL_l1541z00_3205;

							{	/* Cfa/closure.scm 491 */
								bool_t BgL_tmpz00_5012;

								BgL_l1541z00_3205 = BgL_g1543z00_3203;
							BgL_zc3z04anonymousza31937ze3z87_3206:
								if (PAIRP(BgL_l1541z00_3205))
									{	/* Cfa/closure.scm 491 */
										{	/* Cfa/closure.scm 491 */
											obj_t BgL_arg1939z00_3208;

											BgL_arg1939z00_3208 = CAR(BgL_l1541z00_3205);
											BgL_appz00_3211 = ((BgL_appz00_bglt) BgL_arg1939z00_3208);
											{	/* Cfa/closure.scm 475 */
												bool_t BgL_test2357z00_5016;

												{	/* Cfa/closure.scm 475 */
													bool_t BgL_test2358z00_5017;

													{
														BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_5018;

														{
															obj_t BgL_auxz00_5019;

															{	/* Cfa/closure.scm 475 */
																BgL_objectz00_bglt BgL_tmpz00_5020;

																BgL_tmpz00_5020 =
																	((BgL_objectz00_bglt) BgL_appz00_3211);
																BgL_auxz00_5019 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_5020);
															}
															BgL_auxz00_5018 =
																((BgL_makezd2procedurezd2appz00_bglt)
																BgL_auxz00_5019);
														}
														BgL_test2358z00_5017 =
															(((BgL_makezd2procedurezd2appz00_bglt)
																COBJECT(BgL_auxz00_5018))->BgL_xz00);
													}
													if (BgL_test2358z00_5017)
														{	/* Cfa/closure.scm 475 */
															BgL_test2357z00_5016 = ((bool_t) 1);
														}
													else
														{
															BgL_makezd2procedurezd2appz00_bglt
																BgL_auxz00_5025;
															{
																obj_t BgL_auxz00_5026;

																{	/* Cfa/closure.scm 475 */
																	BgL_objectz00_bglt BgL_tmpz00_5027;

																	BgL_tmpz00_5027 =
																		((BgL_objectz00_bglt) BgL_appz00_3211);
																	BgL_auxz00_5026 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_5027);
																}
																BgL_auxz00_5025 =
																	((BgL_makezd2procedurezd2appz00_bglt)
																	BgL_auxz00_5026);
															}
															BgL_test2357z00_5016 =
																(((BgL_makezd2procedurezd2appz00_bglt)
																	COBJECT(BgL_auxz00_5025))->BgL_tz00);
														}
												}
												if (BgL_test2357z00_5016)
													{	/* Cfa/closure.scm 475 */
														((bool_t) 0);
													}
												else
													{	/* Cfa/closure.scm 477 */
														BgL_variablez00_bglt BgL_varz00_3216;

														{
															BgL_varz00_bglt BgL_auxz00_5032;

															{	/* Cfa/closure.scm 477 */
																obj_t BgL_pairz00_4082;

																BgL_pairz00_4082 =
																	(((BgL_appz00_bglt) COBJECT(
																			((BgL_appz00_bglt) BgL_appz00_3211)))->
																	BgL_argsz00);
																BgL_auxz00_5032 =
																	((BgL_varz00_bglt) CAR(BgL_pairz00_4082));
															}
															BgL_varz00_3216 =
																(((BgL_varz00_bglt) COBJECT(BgL_auxz00_5032))->
																BgL_variablez00);
														}
														{	/* Cfa/closure.scm 477 */
															BgL_valuez00_bglt BgL_sfunz00_3217;

															BgL_sfunz00_3217 =
																(((BgL_variablez00_bglt)
																	COBJECT(BgL_varz00_3216))->BgL_valuez00);
															{	/* Cfa/closure.scm 478 */

																((((BgL_variablez00_bglt)
																			COBJECT(BgL_varz00_3216))->BgL_typez00) =
																	((BgL_typez00_bglt)
																		BGl_getzd2bigloozd2definedzd2typezd2zztype_cachez00
																		((((BgL_variablez00_bglt)
																					COBJECT(BgL_varz00_3216))->
																				BgL_typez00))), BUNSPEC);
																{	/* Cfa/closure.scm 481 */
																	obj_t BgL_g1540z00_3220;

																	{	/* Cfa/closure.scm 488 */
																		obj_t BgL_pairz00_4089;

																		BgL_pairz00_4089 =
																			(((BgL_sfunz00_bglt) COBJECT(
																					((BgL_sfunz00_bglt)
																						BgL_sfunz00_3217)))->BgL_argsz00);
																		BgL_g1540z00_3220 = CDR(BgL_pairz00_4089);
																	}
																	{
																		obj_t BgL_l1538z00_3222;

																		BgL_l1538z00_3222 = BgL_g1540z00_3220;
																	BgL_zc3z04anonymousza31946ze3z87_3223:
																		if (PAIRP(BgL_l1538z00_3222))
																			{	/* Cfa/closure.scm 488 */
																				{	/* Cfa/closure.scm 482 */
																					obj_t BgL_az00_3225;

																					BgL_az00_3225 =
																						CAR(BgL_l1538z00_3222);
																					{	/* Cfa/closure.scm 482 */
																						BgL_approxz00_bglt BgL_pz00_3226;

																						{	/* Cfa/closure.scm 482 */
																							BgL_svarz00_bglt BgL_oz00_4093;

																							BgL_oz00_4093 =
																								((BgL_svarz00_bglt)
																								(((BgL_variablez00_bglt)
																										COBJECT((
																												(BgL_variablez00_bglt)
																												BgL_az00_3225)))->
																									BgL_valuez00));
																							{
																								BgL_svarzf2cinfozf2_bglt
																									BgL_auxz00_5051;
																								{
																									obj_t BgL_auxz00_5052;

																									{	/* Cfa/closure.scm 482 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_5053;
																										BgL_tmpz00_5053 =
																											((BgL_objectz00_bglt)
																											BgL_oz00_4093);
																										BgL_auxz00_5052 =
																											BGL_OBJECT_WIDENING
																											(BgL_tmpz00_5053);
																									}
																									BgL_auxz00_5051 =
																										((BgL_svarzf2cinfozf2_bglt)
																										BgL_auxz00_5052);
																								}
																								BgL_pz00_3226 =
																									(((BgL_svarzf2cinfozf2_bglt)
																										COBJECT(BgL_auxz00_5051))->
																									BgL_approxz00);
																							}
																						}
																						{	/* Cfa/closure.scm 482 */
																							BgL_typez00_bglt BgL_tz00_3227;

																							BgL_tz00_3227 =
																								(((BgL_approxz00_bglt)
																									COBJECT(BgL_pz00_3226))->
																								BgL_typez00);
																							{	/* Cfa/closure.scm 483 */

																								{	/* Cfa/closure.scm 487 */
																									BgL_typez00_bglt
																										BgL_arg1948z00_3228;
																									BgL_arg1948z00_3228 =
																										BGl_getzd2bigloozd2definedzd2typezd2zztype_cachez00
																										(BgL_tz00_3227);
																									((((BgL_variablez00_bglt)
																												COBJECT((
																														(BgL_variablez00_bglt)
																														BgL_az00_3225)))->
																											BgL_typez00) =
																										((BgL_typez00_bglt)
																											BgL_arg1948z00_3228),
																										BUNSPEC);
																								}
																							}
																						}
																					}
																				}
																				{
																					obj_t BgL_l1538z00_5062;

																					BgL_l1538z00_5062 =
																						CDR(BgL_l1538z00_3222);
																					BgL_l1538z00_3222 = BgL_l1538z00_5062;
																					goto
																						BgL_zc3z04anonymousza31946ze3z87_3223;
																				}
																			}
																		else
																			{	/* Cfa/closure.scm 488 */
																				((bool_t) 1);
																			}
																	}
																}
															}
														}
													}
											}
										}
										{
											obj_t BgL_l1541z00_5065;

											BgL_l1541z00_5065 = CDR(BgL_l1541z00_3205);
											BgL_l1541z00_3205 = BgL_l1541z00_5065;
											goto BgL_zc3z04anonymousza31937ze3z87_3206;
										}
									}
								else
									{	/* Cfa/closure.scm 491 */
										BgL_tmpz00_5012 = ((bool_t) 1);
									}
								return BBOOL(BgL_tmpz00_5012);
							}
						}
					}
				else
					{	/* Cfa/closure.scm 490 */
						return BFALSE;
					}
			}
		}

	}



/* &type-closures! */
	obj_t BGl_z62typezd2closuresz12za2zzcfa_closurez00(obj_t BgL_envz00_4171)
	{
		{	/* Cfa/closure.scm 464 */
			return BGl_typezd2closuresz12zc0zzcfa_closurez00();
		}

	}



/* light-access! */
	bool_t BGl_lightzd2accessz12zc0zzcfa_closurez00()
	{
		{	/* Cfa/closure.scm 496 */
			{
				obj_t BgL_l1544z00_3238;

				BgL_l1544z00_3238 = BGl_za2procedurezd2refzd2listza2z00zzcfa_closurez00;
			BgL_zc3z04anonymousza31955ze3z87_3239:
				if (PAIRP(BgL_l1544z00_3238))
					{	/* Cfa/closure.scm 497 */
						{	/* Cfa/closure.scm 499 */
							obj_t BgL_appz00_3241;

							BgL_appz00_3241 = CAR(BgL_l1544z00_3238);
							{	/* Cfa/closure.scm 499 */
								BgL_approxz00_bglt BgL_approxz00_3243;

								{	/* Cfa/closure.scm 500 */
									obj_t BgL_arg1968z00_3262;

									{	/* Cfa/closure.scm 500 */
										obj_t BgL_pairz00_4107;

										BgL_pairz00_4107 =
											(((BgL_appz00_bglt) COBJECT(
													((BgL_appz00_bglt) BgL_appz00_3241)))->BgL_argsz00);
										BgL_arg1968z00_3262 = CAR(BgL_pairz00_4107);
									}
									BgL_approxz00_3243 =
										BGl_cfaz12z12zzcfa_cfaz00(
										((BgL_nodez00_bglt) BgL_arg1968z00_3262));
								}
								{	/* Cfa/closure.scm 500 */
									obj_t BgL_alloczd2listzd2_3244;

									BgL_alloczd2listzd2_3244 =
										BGl_setzd2ze3listz31zzcfa_setz00(
										(((BgL_approxz00_bglt) COBJECT(BgL_approxz00_3243))->
											BgL_allocsz00));
									{	/* Cfa/closure.scm 501 */
										BgL_varz00_bglt BgL_funz00_3245;

										BgL_funz00_3245 =
											(((BgL_appz00_bglt) COBJECT(
													((BgL_appz00_bglt) BgL_appz00_3241)))->BgL_funz00);
										{	/* Cfa/closure.scm 502 */
											BgL_variablez00_bglt BgL_vfunz00_3246;

											BgL_vfunz00_3246 =
												(((BgL_varz00_bglt) COBJECT(BgL_funz00_3245))->
												BgL_variablez00);
											{	/* Cfa/closure.scm 503 */

												{	/* Cfa/closure.scm 504 */
													bool_t BgL_test2361z00_5082;

													if (PAIRP(BgL_alloczd2listzd2_3244))
														{	/* Cfa/closure.scm 505 */
															bool_t BgL_test2363z00_5085;

															{	/* Cfa/closure.scm 505 */
																obj_t BgL_arg1966z00_3260;

																BgL_arg1966z00_3260 =
																	CAR(BgL_alloczd2listzd2_3244);
																BgL_test2363z00_5085 =
																	BGl_isazf3zf3zz__objectz00
																	(BgL_arg1966z00_3260,
																	BGl_makezd2procedurezd2appz00zzcfa_info2z00);
															}
															if (BgL_test2363z00_5085)
																{	/* Cfa/closure.scm 505 */
																	BgL_test2361z00_5082 = ((bool_t) 0);
																}
															else
																{	/* Cfa/closure.scm 505 */
																	BgL_test2361z00_5082 = ((bool_t) 1);
																}
														}
													else
														{	/* Cfa/closure.scm 504 */
															BgL_test2361z00_5082 = ((bool_t) 1);
														}
													if (BgL_test2361z00_5082)
														{	/* Cfa/closure.scm 504 */
															CNST_TABLE_REF(((long) 8));
														}
													else
														{	/* Cfa/closure.scm 507 */
															BgL_appz00_bglt BgL_allocz00_3252;

															BgL_allocz00_3252 =
																((BgL_appz00_bglt)
																CAR(((obj_t) BgL_alloczd2listzd2_3244)));
															{	/* Cfa/closure.scm 510 */
																bool_t BgL_test2364z00_5092;

																{
																	BgL_makezd2procedurezd2appz00_bglt
																		BgL_auxz00_5093;
																	{
																		obj_t BgL_auxz00_5094;

																		{	/* Cfa/closure.scm 510 */
																			BgL_objectz00_bglt BgL_tmpz00_5095;

																			BgL_tmpz00_5095 =
																				((BgL_objectz00_bglt)
																				((BgL_appz00_bglt) BgL_allocz00_3252));
																			BgL_auxz00_5094 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_5095);
																		}
																		BgL_auxz00_5093 =
																			((BgL_makezd2procedurezd2appz00_bglt)
																			BgL_auxz00_5094);
																	}
																	BgL_test2364z00_5092 =
																		(((BgL_makezd2procedurezd2appz00_bglt)
																			COBJECT(BgL_auxz00_5093))->BgL_xz00);
																}
																if (BgL_test2364z00_5092)
																	{	/* Cfa/closure.scm 510 */
																		if (
																			(((obj_t) BgL_vfunz00_3246) ==
																				BGl_za2procedurezd2refza2zd2zzcfa_closurez00))
																			{	/* Cfa/closure.scm 512 */
																				BgL_variablez00_bglt BgL_vz00_4117;

																				BgL_vz00_4117 =
																					((BgL_variablez00_bglt)
																					BGl_za2procedurezd2elzd2refza2z00zzcfa_closurez00);
																				((((BgL_varz00_bglt)
																							COBJECT(BgL_funz00_3245))->
																						BgL_variablez00) =
																					((BgL_variablez00_bglt)
																						BgL_vz00_4117), BUNSPEC);
																			}
																		else
																			{	/* Cfa/closure.scm 513 */
																				BgL_variablez00_bglt BgL_vz00_4119;

																				BgL_vz00_4119 =
																					((BgL_variablez00_bglt)
																					BGl_za2procedurezd2elzd2setz12za2z12zzcfa_closurez00);
																				((((BgL_varz00_bglt)
																							COBJECT(BgL_funz00_3245))->
																						BgL_variablez00) =
																					((BgL_variablez00_bglt)
																						BgL_vz00_4119), BUNSPEC);
																			}
																	}
																else
																	{	/* Cfa/closure.scm 514 */
																		bool_t BgL_test2366z00_5108;

																		{
																			BgL_makezd2procedurezd2appz00_bglt
																				BgL_auxz00_5109;
																			{
																				obj_t BgL_auxz00_5110;

																				{	/* Cfa/closure.scm 514 */
																					BgL_objectz00_bglt BgL_tmpz00_5111;

																					BgL_tmpz00_5111 =
																						((BgL_objectz00_bglt)
																						((BgL_appz00_bglt)
																							BgL_allocz00_3252));
																					BgL_auxz00_5110 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_5111);
																				}
																				BgL_auxz00_5109 =
																					((BgL_makezd2procedurezd2appz00_bglt)
																					BgL_auxz00_5110);
																			}
																			BgL_test2366z00_5108 =
																				(((BgL_makezd2procedurezd2appz00_bglt)
																					COBJECT(BgL_auxz00_5109))->BgL_tz00);
																		}
																		if (BgL_test2366z00_5108)
																			{	/* Cfa/closure.scm 514 */
																				if (
																					(((obj_t) BgL_vfunz00_3246) ==
																						BGl_za2procedurezd2refza2zd2zzcfa_closurez00))
																					{	/* Cfa/closure.scm 516 */
																						BgL_variablez00_bglt BgL_vz00_4122;

																						BgL_vz00_4122 =
																							((BgL_variablez00_bglt)
																							BGl_za2procedurezd2lzd2refza2z00zzcfa_closurez00);
																						((((BgL_varz00_bglt)
																									COBJECT(BgL_funz00_3245))->
																								BgL_variablez00) =
																							((BgL_variablez00_bglt)
																								BgL_vz00_4122), BUNSPEC);
																					}
																				else
																					{	/* Cfa/closure.scm 517 */
																						BgL_variablez00_bglt BgL_vz00_4124;

																						BgL_vz00_4124 =
																							((BgL_variablez00_bglt)
																							BGl_za2procedurezd2lzd2setz12za2z12zzcfa_closurez00);
																						((((BgL_varz00_bglt)
																									COBJECT(BgL_funz00_3245))->
																								BgL_variablez00) =
																							((BgL_variablez00_bglt)
																								BgL_vz00_4124), BUNSPEC);
																					}
																			}
																		else
																			{	/* Cfa/closure.scm 514 */
																				BFALSE;
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
						{
							obj_t BgL_l1544z00_5124;

							BgL_l1544z00_5124 = CDR(BgL_l1544z00_3238);
							BgL_l1544z00_3238 = BgL_l1544z00_5124;
							goto BgL_zc3z04anonymousza31955ze3z87_3239;
						}
					}
				else
					{	/* Cfa/closure.scm 497 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* show-X-T */
	obj_t BGl_showzd2Xzd2Tz00zzcfa_closurez00(obj_t BgL_allocsz00_11)
	{
		{	/* Cfa/closure.scm 523 */
			{
				obj_t BgL_xpz00_3270;
				obj_t BgL_tpz00_3271;
				obj_t BgL_allocsz00_3272;

				BgL_xpz00_3270 = BNIL;
				BgL_tpz00_3271 = BNIL;
				BgL_allocsz00_3272 = BgL_allocsz00_11;
			BgL_zc3z04anonymousza31971ze3z87_3273:
				if (NULLP(BgL_allocsz00_3272))
					{	/* Cfa/closure.scm 534 */
						BGl_showze70ze7zzcfa_closurez00(CNST_TABLE_REF(((long) 9)),
							BgL_xpz00_3270);
						BGl_showze70ze7zzcfa_closurez00(CNST_TABLE_REF(((long) 10)),
							BgL_tpz00_3271);
						return BUNSPEC;
					}
				else
					{	/* Cfa/closure.scm 539 */
						BgL_appz00_bglt BgL_i1188z00_3275;

						BgL_i1188z00_3275 =
							((BgL_appz00_bglt) CAR(((obj_t) BgL_allocsz00_3272)));
						{	/* Cfa/closure.scm 541 */
							bool_t BgL_test2369z00_5135;

							{
								BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_5136;

								{
									obj_t BgL_auxz00_5137;

									{	/* Cfa/closure.scm 541 */
										BgL_objectz00_bglt BgL_tmpz00_5138;

										BgL_tmpz00_5138 = ((BgL_objectz00_bglt) BgL_i1188z00_3275);
										BgL_auxz00_5137 = BGL_OBJECT_WIDENING(BgL_tmpz00_5138);
									}
									BgL_auxz00_5136 =
										((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_5137);
								}
								BgL_test2369z00_5135 =
									(((BgL_makezd2procedurezd2appz00_bglt)
										COBJECT(BgL_auxz00_5136))->BgL_xz00);
							}
							if (BgL_test2369z00_5135)
								{	/* Cfa/closure.scm 542 */
									obj_t BgL_arg1974z00_3277;
									obj_t BgL_arg1975z00_3278;

									{	/* Cfa/closure.scm 542 */
										BgL_variablez00_bglt BgL_arg1976z00_3279;

										{
											BgL_varz00_bglt BgL_auxz00_5143;

											{	/* Cfa/closure.scm 542 */
												obj_t BgL_pairz00_4135;

												BgL_pairz00_4135 =
													(((BgL_appz00_bglt) COBJECT(
															((BgL_appz00_bglt) BgL_i1188z00_3275)))->
													BgL_argsz00);
												BgL_auxz00_5143 =
													((BgL_varz00_bglt) CAR(BgL_pairz00_4135));
											}
											BgL_arg1976z00_3279 =
												(((BgL_varz00_bglt) COBJECT(BgL_auxz00_5143))->
												BgL_variablez00);
										}
										BgL_arg1974z00_3277 =
											MAKE_YOUNG_PAIR(
											((obj_t) BgL_arg1976z00_3279), BgL_xpz00_3270);
									}
									BgL_arg1975z00_3278 = CDR(((obj_t) BgL_allocsz00_3272));
									{
										obj_t BgL_allocsz00_5154;
										obj_t BgL_xpz00_5153;

										BgL_xpz00_5153 = BgL_arg1974z00_3277;
										BgL_allocsz00_5154 = BgL_arg1975z00_3278;
										BgL_allocsz00_3272 = BgL_allocsz00_5154;
										BgL_xpz00_3270 = BgL_xpz00_5153;
										goto BgL_zc3z04anonymousza31971ze3z87_3273;
									}
								}
							else
								{	/* Cfa/closure.scm 543 */
									bool_t BgL_test2370z00_5155;

									{
										BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_5156;

										{
											obj_t BgL_auxz00_5157;

											{	/* Cfa/closure.scm 543 */
												BgL_objectz00_bglt BgL_tmpz00_5158;

												BgL_tmpz00_5158 =
													((BgL_objectz00_bglt) BgL_i1188z00_3275);
												BgL_auxz00_5157 = BGL_OBJECT_WIDENING(BgL_tmpz00_5158);
											}
											BgL_auxz00_5156 =
												((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_5157);
										}
										BgL_test2370z00_5155 =
											(((BgL_makezd2procedurezd2appz00_bglt)
												COBJECT(BgL_auxz00_5156))->BgL_tz00);
									}
									if (BgL_test2370z00_5155)
										{	/* Cfa/closure.scm 544 */
											obj_t BgL_arg1981z00_3283;
											obj_t BgL_arg1982z00_3284;

											{	/* Cfa/closure.scm 544 */
												BgL_variablez00_bglt BgL_arg1983z00_3285;

												{
													BgL_varz00_bglt BgL_auxz00_5163;

													{	/* Cfa/closure.scm 544 */
														obj_t BgL_pairz00_4139;

														BgL_pairz00_4139 =
															(((BgL_appz00_bglt) COBJECT(
																	((BgL_appz00_bglt) BgL_i1188z00_3275)))->
															BgL_argsz00);
														BgL_auxz00_5163 =
															((BgL_varz00_bglt) CAR(BgL_pairz00_4139));
													}
													BgL_arg1983z00_3285 =
														(((BgL_varz00_bglt) COBJECT(BgL_auxz00_5163))->
														BgL_variablez00);
												}
												BgL_arg1981z00_3283 =
													MAKE_YOUNG_PAIR(
													((obj_t) BgL_arg1983z00_3285), BgL_tpz00_3271);
											}
											BgL_arg1982z00_3284 = CDR(((obj_t) BgL_allocsz00_3272));
											{
												obj_t BgL_allocsz00_5174;
												obj_t BgL_tpz00_5173;

												BgL_tpz00_5173 = BgL_arg1981z00_3283;
												BgL_allocsz00_5174 = BgL_arg1982z00_3284;
												BgL_allocsz00_3272 = BgL_allocsz00_5174;
												BgL_tpz00_3271 = BgL_tpz00_5173;
												goto BgL_zc3z04anonymousza31971ze3z87_3273;
											}
										}
									else
										{	/* Cfa/closure.scm 546 */
											obj_t BgL_arg1986z00_3288;

											BgL_arg1986z00_3288 = CDR(((obj_t) BgL_allocsz00_3272));
											{
												obj_t BgL_allocsz00_5177;

												BgL_allocsz00_5177 = BgL_arg1986z00_3288;
												BgL_allocsz00_3272 = BgL_allocsz00_5177;
												goto BgL_zc3z04anonymousza31971ze3z87_3273;
											}
										}
								}
						}
					}
			}
		}

	}



/* show~0 */
	bool_t BGl_showze70ze7zzcfa_closurez00(obj_t BgL_propz00_3290,
		obj_t BgL_lz00_3291)
	{
		{	/* Cfa/closure.scm 530 */
			if (NULLP(BgL_lz00_3291))
				{	/* Cfa/closure.scm 525 */
					return ((bool_t) 0);
				}
			else
				{	/* Cfa/closure.scm 525 */
					{	/* Cfa/closure.scm 527 */
						obj_t BgL_arg1989z00_3294;

						BgL_arg1989z00_3294 =
							BGl_shapez00zztools_shapez00(CAR(BgL_lz00_3291));
						{	/* Cfa/closure.scm 527 */
							obj_t BgL_list1990z00_3295;

							{	/* Cfa/closure.scm 527 */
								obj_t BgL_arg1991z00_3296;

								{	/* Cfa/closure.scm 527 */
									obj_t BgL_arg1992z00_3297;

									{	/* Cfa/closure.scm 527 */
										obj_t BgL_arg1993z00_3298;

										{	/* Cfa/closure.scm 527 */
											obj_t BgL_arg1995z00_3299;

											BgL_arg1995z00_3299 =
												MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
											BgL_arg1993z00_3298 =
												MAKE_YOUNG_PAIR(BgL_arg1989z00_3294,
												BgL_arg1995z00_3299);
										}
										BgL_arg1992z00_3297 =
											MAKE_YOUNG_PAIR(BGl_string2251z00zzcfa_closurez00,
											BgL_arg1993z00_3298);
									}
									BgL_arg1991z00_3296 =
										MAKE_YOUNG_PAIR(BgL_propz00_3290, BgL_arg1992z00_3297);
								}
								BgL_list1990z00_3295 =
									MAKE_YOUNG_PAIR(BGl_string2252z00zzcfa_closurez00,
									BgL_arg1991z00_3296);
							}
							BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
								BgL_list1990z00_3295);
					}}
					{	/* Cfa/closure.scm 528 */
						obj_t BgL_g1548z00_3301;

						BgL_g1548z00_3301 = CDR(BgL_lz00_3291);
						{
							obj_t BgL_l1546z00_3303;

							BgL_l1546z00_3303 = BgL_g1548z00_3301;
						BgL_zc3z04anonymousza31997ze3z87_3304:
							if (PAIRP(BgL_l1546z00_3303))
								{	/* Cfa/closure.scm 530 */
									{	/* Cfa/closure.scm 529 */
										obj_t BgL_xz00_3306;

										BgL_xz00_3306 = CAR(BgL_l1546z00_3303);
										{	/* Cfa/closure.scm 529 */
											obj_t BgL_arg1999z00_3307;

											BgL_arg1999z00_3307 =
												BGl_shapez00zztools_shapez00(BgL_xz00_3306);
											{	/* Cfa/closure.scm 529 */
												obj_t BgL_list2000z00_3308;

												{	/* Cfa/closure.scm 529 */
													obj_t BgL_arg2001z00_3309;

													{	/* Cfa/closure.scm 529 */
														obj_t BgL_arg2002z00_3310;

														BgL_arg2002z00_3310 =
															MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)),
															BNIL);
														BgL_arg2001z00_3309 =
															MAKE_YOUNG_PAIR(BgL_arg1999z00_3307,
															BgL_arg2002z00_3310);
													}
													BgL_list2000z00_3308 =
														MAKE_YOUNG_PAIR(BGl_string2253z00zzcfa_closurez00,
														BgL_arg2001z00_3309);
												}
												BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
													BgL_list2000z00_3308);
									}}}
									{
										obj_t BgL_l1546z00_5201;

										BgL_l1546z00_5201 = CDR(BgL_l1546z00_3303);
										BgL_l1546z00_3303 = BgL_l1546z00_5201;
										goto BgL_zc3z04anonymousza31997ze3z87_3304;
									}
								}
							else
								{	/* Cfa/closure.scm 530 */
									return ((bool_t) 1);
								}
						}
					}
				}
		}

	}



/* get-procedure-list */
	BGL_EXPORTED_DEF obj_t BGl_getzd2procedurezd2listz00zzcfa_closurez00()
	{
		{	/* Cfa/closure.scm 558 */
			return BGl_za2makezd2procedurezd2listza2z00zzcfa_closurez00;
		}

	}



/* &get-procedure-list */
	obj_t BGl_z62getzd2procedurezd2listz62zzcfa_closurez00(obj_t BgL_envz00_4172)
	{
		{	/* Cfa/closure.scm 558 */
			return BGl_getzd2procedurezd2listz00zzcfa_closurez00();
		}

	}



/* add-funcall! */
	BGL_EXPORTED_DEF obj_t
		BGl_addzd2funcallz12zc0zzcfa_closurez00(BgL_nodez00_bglt BgL_astz00_12)
	{
		{	/* Cfa/closure.scm 564 */
			if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 2)))
				{	/* Cfa/closure.scm 565 */
					return (BGl_za2funcallzd2listza2zd2zzcfa_closurez00 =
						MAKE_YOUNG_PAIR(
							((obj_t) BgL_astz00_12),
							BGl_za2funcallzd2listza2zd2zzcfa_closurez00), BUNSPEC);
				}
			else
				{	/* Cfa/closure.scm 565 */
					return BFALSE;
				}
		}

	}



/* &add-funcall! */
	obj_t BGl_z62addzd2funcallz12za2zzcfa_closurez00(obj_t BgL_envz00_4173,
		obj_t BgL_astz00_4174)
	{
		{	/* Cfa/closure.scm 564 */
			return
				BGl_addzd2funcallz12zc0zzcfa_closurez00(
				((BgL_nodez00_bglt) BgL_astz00_4174));
		}

	}



/* add-make-procedure! */
	BGL_EXPORTED_DEF obj_t
		BGl_addzd2makezd2procedurez12z12zzcfa_closurez00(BgL_nodez00_bglt
		BgL_astz00_13)
	{
		{	/* Cfa/closure.scm 571 */
			return (BGl_za2makezd2procedurezd2listza2z00zzcfa_closurez00 =
				MAKE_YOUNG_PAIR(
					((obj_t) BgL_astz00_13),
					BGl_za2makezd2procedurezd2listza2z00zzcfa_closurez00), BUNSPEC);
		}

	}



/* &add-make-procedure! */
	obj_t BGl_z62addzd2makezd2procedurez12z70zzcfa_closurez00(obj_t
		BgL_envz00_4175, obj_t BgL_astz00_4176)
	{
		{	/* Cfa/closure.scm 571 */
			return
				BGl_addzd2makezd2procedurez12z12zzcfa_closurez00(
				((BgL_nodez00_bglt) BgL_astz00_4176));
		}

	}



/* add-procedure-ref! */
	BGL_EXPORTED_DEF obj_t
		BGl_addzd2procedurezd2refz12z12zzcfa_closurez00(BgL_nodez00_bglt
		BgL_astz00_14)
	{
		{	/* Cfa/closure.scm 577 */
			if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 2)))
				{	/* Cfa/closure.scm 578 */
					return (BGl_za2procedurezd2refzd2listza2z00zzcfa_closurez00 =
						MAKE_YOUNG_PAIR(
							((obj_t) BgL_astz00_14),
							BGl_za2procedurezd2refzd2listza2z00zzcfa_closurez00), BUNSPEC);
				}
			else
				{	/* Cfa/closure.scm 578 */
					return BFALSE;
				}
		}

	}



/* &add-procedure-ref! */
	obj_t BGl_z62addzd2procedurezd2refz12z70zzcfa_closurez00(obj_t
		BgL_envz00_4177, obj_t BgL_astz00_4178)
	{
		{	/* Cfa/closure.scm 577 */
			return
				BGl_addzd2procedurezd2refz12z12zzcfa_closurez00(
				((BgL_nodez00_bglt) BgL_astz00_4178));
		}

	}



/* approx-procedure-el? */
	BGL_EXPORTED_DEF bool_t
		BGl_approxzd2procedurezd2elzf3zf3zzcfa_closurez00(BgL_approxz00_bglt
		BgL_approxz00_15)
	{
		{	/* Cfa/closure.scm 584 */
			{	/* Cfa/closure.scm 585 */
				BgL_typez00_bglt BgL_typez00_3316;
				obj_t BgL_alloczd2listzd2_3317;

				BgL_typez00_3316 =
					(((BgL_approxz00_bglt) COBJECT(BgL_approxz00_15))->BgL_typez00);
				BgL_alloczd2listzd2_3317 =
					BGl_setzd2ze3listz31zzcfa_setz00(
					(((BgL_approxz00_bglt) COBJECT(BgL_approxz00_15))->BgL_allocsz00));
				if (
					(((obj_t) BgL_typez00_3316) == BGl_za2procedureza2z00zztype_cachez00))
					{	/* Cfa/closure.scm 587 */
						if (PAIRP(BgL_alloczd2listzd2_3317))
							{	/* Cfa/closure.scm 588 */
								if (NULLP(CDR(BgL_alloczd2listzd2_3317)))
									{	/* Cfa/closure.scm 590 */
										bool_t BgL_test2378z00_5233;

										{	/* Cfa/closure.scm 590 */
											obj_t BgL_arg2008z00_3323;

											BgL_arg2008z00_3323 = CAR(BgL_alloczd2listzd2_3317);
											BgL_test2378z00_5233 =
												BGl_isazf3zf3zz__objectz00(BgL_arg2008z00_3323,
												BGl_makezd2procedurezd2appz00zzcfa_info2z00);
										}
										if (BgL_test2378z00_5233)
											{	/* Cfa/closure.scm 591 */
												BgL_appz00_bglt BgL_oz00_4155;

												BgL_oz00_4155 =
													((BgL_appz00_bglt) CAR(BgL_alloczd2listzd2_3317));
												{
													BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_5238;

													{
														obj_t BgL_auxz00_5239;

														{	/* Cfa/closure.scm 591 */
															BgL_objectz00_bglt BgL_tmpz00_5240;

															BgL_tmpz00_5240 =
																((BgL_objectz00_bglt) BgL_oz00_4155);
															BgL_auxz00_5239 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_5240);
														}
														BgL_auxz00_5238 =
															((BgL_makezd2procedurezd2appz00_bglt)
															BgL_auxz00_5239);
													}
													return
														(((BgL_makezd2procedurezd2appz00_bglt)
															COBJECT(BgL_auxz00_5238))->BgL_xz00);
												}
											}
										else
											{	/* Cfa/closure.scm 590 */
												return ((bool_t) 0);
											}
									}
								else
									{	/* Cfa/closure.scm 589 */
										return ((bool_t) 0);
									}
							}
						else
							{	/* Cfa/closure.scm 588 */
								return ((bool_t) 0);
							}
					}
				else
					{	/* Cfa/closure.scm 587 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* &approx-procedure-el? */
	obj_t BGl_z62approxzd2procedurezd2elzf3z91zzcfa_closurez00(obj_t
		BgL_envz00_4179, obj_t BgL_approxz00_4180)
	{
		{	/* Cfa/closure.scm 584 */
			return
				BBOOL(BGl_approxzd2procedurezd2elzf3zf3zzcfa_closurez00(
					((BgL_approxz00_bglt) BgL_approxz00_4180)));
		}

	}



/* start-closure-cache */
	obj_t BGl_startzd2closurezd2cachez00zzcfa_closurez00()
	{
		{	/* Cfa/closure.scm 608 */
			BGl_za2procedurezd2refza2zd2zzcfa_closurez00 =
				BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 11)),
				CNST_TABLE_REF(((long) 12)));
			BGl_za2procedurezd2setz12za2zc0zzcfa_closurez00 =
				BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 13)),
				CNST_TABLE_REF(((long) 12)));
			BGl_za2procedurezd2lzd2refza2z00zzcfa_closurez00 =
				BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 14)),
				CNST_TABLE_REF(((long) 12)));
			BGl_za2procedurezd2lzd2setz12za2z12zzcfa_closurez00 =
				BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 15)),
				CNST_TABLE_REF(((long) 12)));
			BGl_za2procedurezd2elzd2refza2z00zzcfa_closurez00 =
				BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 16)),
				CNST_TABLE_REF(((long) 12)));
			BGl_za2procedurezd2elzd2setz12za2z12zzcfa_closurez00 =
				BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 17)),
				CNST_TABLE_REF(((long) 12)));
			BGl_za2makezd2elzd2procedureza2z00zzcfa_closurez00 =
				BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 18)),
				CNST_TABLE_REF(((long) 12)));
			return (BGl_za2makezd2lzd2procedureza2z00zzcfa_closurez00 =
				BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 19)),
					CNST_TABLE_REF(((long) 12))), BUNSPEC);
		}

	}



/* stop-closure-cache */
	BGL_EXPORTED_DEF obj_t BGl_stopzd2closurezd2cachez00zzcfa_closurez00()
	{
		{	/* Cfa/closure.scm 621 */
			BGl_za2procedurezd2refza2zd2zzcfa_closurez00 = BFALSE;
			BGl_za2procedurezd2setz12za2zc0zzcfa_closurez00 = BFALSE;
			BGl_za2procedurezd2lzd2refza2z00zzcfa_closurez00 = BFALSE;
			BGl_za2procedurezd2lzd2setz12za2z12zzcfa_closurez00 = BFALSE;
			BGl_za2procedurezd2elzd2refza2z00zzcfa_closurez00 = BFALSE;
			BGl_za2procedurezd2elzd2setz12za2z12zzcfa_closurez00 = BFALSE;
			BGl_za2makezd2elzd2procedureza2z00zzcfa_closurez00 = BFALSE;
			return (BGl_za2makezd2lzd2procedureza2z00zzcfa_closurez00 =
				BFALSE, BUNSPEC);
		}

	}



/* &stop-closure-cache */
	obj_t BGl_z62stopzd2closurezd2cachez62zzcfa_closurez00(obj_t BgL_envz00_4181)
	{
		{	/* Cfa/closure.scm 621 */
			return BGl_stopzd2closurezd2cachez00zzcfa_closurez00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_closurez00()
	{
		{	/* Cfa/closure.scm 25 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_closurez00()
	{
		{	/* Cfa/closure.scm 25 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_closurez00()
	{
		{	/* Cfa/closure.scm 25 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_closurez00()
	{
		{	/* Cfa/closure.scm 25 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2254z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2254z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2254z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2254z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2254z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string2254z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2254z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2254z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2254z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 3788706),
				BSTRING_TO_STRING(BGl_string2254z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string2254z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zzcfa_cfaz00(((long) 400853773),
				BSTRING_TO_STRING(BGl_string2254z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 468997780),
				BSTRING_TO_STRING(BGl_string2254z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zzcfa_setz00(((long) 21524494),
				BSTRING_TO_STRING(BGl_string2254z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zzcfa_ltypez00(((long) 315872717),
				BSTRING_TO_STRING(BGl_string2254z00zzcfa_closurez00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_typez00(((long) 93933701),
				BSTRING_TO_STRING(BGl_string2254z00zzcfa_closurez00));
		}

	}

#ifdef __cplusplus
}
#endif
