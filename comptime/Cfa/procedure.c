/*===========================================================================*/
/*   (Cfa/procedure.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/procedure.scm) */
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

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

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

	typedef struct BgL_externzd2sfunzf2cinfoz20_bgl
	{
		bool_t BgL_polymorphiczf3zf3;
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                               *BgL_externzd2sfunzf2cinfoz20_bglt;

	typedef struct BgL_internzd2sfunzf2cinfoz20_bgl
	{
		bool_t BgL_polymorphiczf3zf3;
		struct BgL_approxz00_bgl *BgL_approxz00;
		long BgL_stampz00;
	}                               *BgL_internzd2sfunzf2cinfoz20_bglt;

	typedef struct BgL_prezd2clozd2envz00_bgl
	{
	}                         *BgL_prezd2clozd2envz00_bglt;

	typedef struct BgL_svarzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_clozd2envzf3z21;
		long BgL_stampz00;
	}                      *BgL_svarzf2cinfozf2_bglt;

	typedef struct BgL_reshapedzd2localzd2_bgl
	{
		obj_t BgL_bindingzd2valuezd2;
	}                          *BgL_reshapedzd2localzd2_bglt;

	typedef struct BgL_prezd2makezd2procedurezd2appzd2_bgl
	{
		struct BgL_variablez00_bgl *BgL_ownerz00;
	}                                     
		*BgL_prezd2makezd2procedurezd2appzd2_bglt;

	typedef struct BgL_prezd2procedurezd2refzd2appzd2_bgl
	{
	}                                    
		*BgL_prezd2procedurezd2refzd2appzd2_bglt;

	typedef struct BgL_prezd2procedurezd2setz12zd2appzc0_bgl
	{
	}                                       
		*BgL_prezd2procedurezd2setz12zd2appzc0_bglt;

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

	typedef struct BgL_procedurezd2refzd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                               *BgL_procedurezd2refzd2appz00_bglt;

	typedef struct BgL_procedurezd2setz12zd2appz12_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		obj_t BgL_vapproxz00;
	}                                  *BgL_procedurezd2setz12zd2appz12_bglt;


	extern obj_t BGl_continuezd2cfaz12zc0zzcfa_iteratez00(obj_t);
	extern obj_t
		BGl_addzd2makezd2procedurez12z12zzcfa_closurez00(BgL_nodez00_bglt);
	static obj_t BGl_objectzd2initzd2zzcfa_procedurez00();
	static obj_t
		BGl_z62setzd2procedurezd2approxzd2polymorphicz12za2zzcfa_procedurez00(obj_t,
		obj_t);
	extern obj_t BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00(obj_t,
		BgL_approxz00_bglt);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t
		BGl_z62loosezd2allocz12zd2makezd2pr1526za2zzcfa_procedurez00(obj_t, obj_t);
	BGL_IMPORT obj_t make_vector(long, obj_t);
	extern obj_t BGl_reshapedzd2localzd2zzcfa_infoz00;
	static obj_t BGl_methodzd2initzd2zzcfa_procedurez00();
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2procedurezd2setz12zd21524zb0zzcfa_procedurez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_typeof(obj_t);
	extern obj_t BGl_procedurezd2refzd2appz00zzcfa_info2z00;
	extern obj_t BGl_prezd2clozd2envz00zzcfa_infoz00;
	extern obj_t
		BGl_getzd2nodezd2atomzd2valuezd2zzcfa_approxz00(BgL_nodez00_bglt);
	extern obj_t
		BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_loosezd2argz12zc0zzcfa_procedurez00(obj_t);
	extern BgL_approxz00_bglt
		BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_disablezd2Xzd2Tz12z12zzcfa_procedurez00(BgL_approxz00_bglt, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzcfa_procedurez00();
	extern obj_t BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00;
	extern BgL_approxz00_bglt BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
	extern obj_t BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00;
	static obj_t BGl_z62zc3z04anonymousza31743ze3ze5zzcfa_procedurez00(obj_t,
		obj_t);
	extern obj_t BGl_svarzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00;
	extern obj_t BGl_makezd2procedurezd2appz00zzcfa_info2z00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2cfazd2stampza2zd2zzcfa_iteratez00;
	static obj_t BGl_z62zc3z04anonymousza31762ze3ze5zzcfa_procedurez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_cfazd2exportzd2varz12z12zzcfa_iteratez00(BgL_valuez00_bglt,
		obj_t);
	extern obj_t BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_approxz00_bglt);
	extern obj_t BGl_nodezd2setupza2z12z62zzcfa_setupz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_procedurez00 = BUNSPEC;
	extern obj_t BGl_funz00zzast_varz00;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	static obj_t BGl_z62disablezd2Xzd2Tz12z70zzcfa_procedurez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcfa_procedurez00();
	extern obj_t
		BGl_addzd2procedurezd2refz12z12zzcfa_closurez00(BgL_nodez00_bglt);
	static obj_t BGl_genericzd2initzd2zzcfa_procedurez00();
	extern BgL_approxz00_bglt BGl_loosez12z12zzcfa_loosez00(BgL_approxz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62disablezd2allocz12za2zzcfa_procedurez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern BgL_approxz00_bglt
		BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00(BgL_typez00_bglt,
		BgL_nodez00_bglt);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	extern obj_t
		BGl_za2optimzd2cfazd2freezd2varzd2trackingzf3za2zf3zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzcfa_procedurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_closurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_iteratez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_cfaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_setupz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_loosez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_IMPORT obj_t BGl_tprintz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t
		BGl_z62nodezd2setupz12zd2prezd2make1514za2zzcfa_procedurez00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzcfa_procedurez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_procedurez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_procedurez00();
	extern BgL_approxz00_bglt
		BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_typez00_bglt);
	extern obj_t BGl_procedurezd2setz12zd2appz12zzcfa_info2z00;
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	extern obj_t BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00;
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2procedurezd2approxzd2polymorphicz12zc0zzcfa_procedurez00
		(BgL_appz00_bglt);
	extern BgL_approxz00_bglt BGl_cfaz12z12zzcfa_cfaz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2procedurezd2refzd2a1522za2zzcfa_procedurez00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31842ze3ze5zzcfa_procedurez00(obj_t,
		obj_t);
	static obj_t
		BGl_z62nodezd2setupz12zd2prezd2proc1516za2zzcfa_procedurez00(obj_t, obj_t);
	static obj_t
		BGl_z62nodezd2setupz12zd2prezd2proc1518za2zzcfa_procedurez00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31827ze3ze5zzcfa_procedurez00(obj_t,
		obj_t);
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2makezd2procedurezd21520za2zzcfa_procedurez00(obj_t, obj_t);
	static obj_t __cnst[1];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2095z00zzcfa_procedurez00,
		BgL_bgl_za762disableza7d2all2117z00,
		BGl_z62disablezd2allocz12za2zzcfa_procedurez00, 0L, BUNSPEC, 1);
	extern obj_t BGl_cfaz12zd2envzc0zzcfa_cfaz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2procedurezd2approxzd2polymorphicz12zd2envz12zzcfa_procedurez00,
		BgL_bgl_za762setza7d2procedu2118z00,
		BGl_z62setzd2procedurezd2approxzd2polymorphicz12za2zzcfa_procedurez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2102z00zzcfa_procedurez00,
		BgL_bgl_za762nodeza7d2setupza72119za7,
		BGl_z62nodezd2setupz12zd2prezd2make1514za2zzcfa_procedurez00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2104z00zzcfa_procedurez00,
		BgL_bgl_za762nodeza7d2setupza72120za7,
		BGl_z62nodezd2setupz12zd2prezd2proc1516za2zzcfa_procedurez00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2105z00zzcfa_procedurez00,
		BgL_bgl_za762nodeza7d2setupza72121za7,
		BGl_z62nodezd2setupz12zd2prezd2proc1518za2zzcfa_procedurez00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2106z00zzcfa_procedurez00,
		BgL_bgl_za762cfaza712za7d2make2122za7,
		BGl_z62cfaz12zd2makezd2procedurezd21520za2zzcfa_procedurez00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2108z00zzcfa_procedurez00,
		BgL_bgl_za762cfaza712za7d2proc2123za7,
		BGl_z62cfaz12zd2procedurezd2refzd2a1522za2zzcfa_procedurez00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2109z00zzcfa_procedurez00,
		BgL_bgl_za762cfaza712za7d2proc2124za7,
		BGl_z62cfaz12zd2procedurezd2setz12zd21524zb0zzcfa_procedurez00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2110z00zzcfa_procedurez00,
		BgL_bgl_za762looseza7d2alloc2125z00,
		BGl_z62loosezd2allocz12zd2makezd2pr1526za2zzcfa_procedurez00, 0L, BUNSPEC,
		1);
	extern obj_t BGl_nodezd2setupz12zd2envz12zzcfa_setupz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_disablezd2Xzd2Tz12zd2envzc0zzcfa_procedurez00,
		BgL_bgl_za762disableza7d2xza7d2126za7,
		BGl_z62disablezd2Xzd2Tz12z70zzcfa_procedurez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2096z00zzcfa_procedurez00,
		BgL_bgl_string2096za700za7za7c2127za7, "polymorphic intern fun", 22);
	      DEFINE_STRING(BGl_string2097z00zzcfa_procedurez00,
		BgL_bgl_string2097za700za7za7c2128za7, "polymorphic extern fun", 22);
	      DEFINE_STRING(BGl_string2098z00zzcfa_procedurez00,
		BgL_bgl_string2098za700za7za7c2129za7, "INTERNAL CFA ERROR: ", 20);
	      DEFINE_STRING(BGl_string2099z00zzcfa_procedurez00,
		BgL_bgl_string2099za700za7za7c2130za7, ":", 1);
	extern obj_t BGl_loosezd2allocz12zd2envz12zzcfa_loosez00;
	   
		 
		DEFINE_STRING(BGl_string2100z00zzcfa_procedurez00,
		BgL_bgl_string2100za700za7za7c2131za7, ",", 1);
	      DEFINE_STRING(BGl_string2101z00zzcfa_procedurez00,
		BgL_bgl_string2101za700za7za7c2132za7, "Cfa/procedure.scm", 17);
	      DEFINE_STRING(BGl_string2103z00zzcfa_procedurez00,
		BgL_bgl_string2103za700za7za7c2133za7, "node-setup!", 11);
	      DEFINE_STRING(BGl_string2107z00zzcfa_procedurez00,
		BgL_bgl_string2107za700za7za7c2134za7, "cfa!::approx", 12);
	      DEFINE_STRING(BGl_string2111z00zzcfa_procedurez00,
		BgL_bgl_string2111za700za7za7c2135za7, "loose-alloc!", 12);
	      DEFINE_STRING(BGl_string2112z00zzcfa_procedurez00,
		BgL_bgl_string2112za700za7za7c2136za7, "cfa_procedure", 13);
	      DEFINE_STRING(BGl_string2113z00zzcfa_procedurez00,
		BgL_bgl_string2113za700za7za7c2137za7, "all ", 4);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzcfa_procedurez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_procedurez00(long
		BgL_checksumz00_4059, char *BgL_fromz00_4060)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_procedurez00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_procedurez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcfa_procedurez00();
					BGl_libraryzd2moduleszd2initz00zzcfa_procedurez00();
					BGl_cnstzd2initzd2zzcfa_procedurez00();
					BGl_importedzd2moduleszd2initz00zzcfa_procedurez00();
					BGl_methodzd2initzd2zzcfa_procedurez00();
					return BGl_toplevelzd2initzd2zzcfa_procedurez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_procedurez00()
	{
		{	/* Cfa/procedure.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"cfa_procedure");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cfa_procedure");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"cfa_procedure");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cfa_procedure");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"cfa_procedure");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cfa_procedure");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cfa_procedure");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_procedure");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"cfa_procedure");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_procedure");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_procedurez00()
	{
		{	/* Cfa/procedure.scm 15 */
			{	/* Cfa/procedure.scm 15 */
				obj_t BgL_cportz00_3889;

				{	/* Cfa/procedure.scm 15 */
					obj_t BgL_stringz00_3897;

					BgL_stringz00_3897 = BGl_string2113z00zzcfa_procedurez00;
					{	/* Cfa/procedure.scm 15 */
						obj_t BgL_startz00_3898;

						BgL_startz00_3898 = BINT(((long) 0));
						{	/* Cfa/procedure.scm 15 */
							obj_t BgL_endz00_3899;

							BgL_endz00_3899 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3897)));
							{	/* Cfa/procedure.scm 15 */

								BgL_cportz00_3889 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3897, BgL_startz00_3898, BgL_endz00_3899);
				}}}}
				{
					long BgL_iz00_3890;

					BgL_iz00_3890 = ((long) 0);
				BgL_loopz00_3891:
					if ((BgL_iz00_3890 == ((long) -1)))
						{	/* Cfa/procedure.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/procedure.scm 15 */
							{	/* Cfa/procedure.scm 15 */
								obj_t BgL_arg2115z00_3893;

								{	/* Cfa/procedure.scm 15 */

									{	/* Cfa/procedure.scm 15 */
										obj_t BgL_locationz00_3895;

										BgL_locationz00_3895 = BBOOL(((bool_t) 0));
										{	/* Cfa/procedure.scm 15 */

											BgL_arg2115z00_3893 =
												BGl_readz00zz__readerz00(BgL_cportz00_3889,
												BgL_locationz00_3895);
										}
									}
								}
								{	/* Cfa/procedure.scm 15 */
									int BgL_tmpz00_4089;

									BgL_tmpz00_4089 = (int) (BgL_iz00_3890);
									CNST_TABLE_SET(BgL_tmpz00_4089, BgL_arg2115z00_3893);
							}}
							{	/* Cfa/procedure.scm 15 */
								int BgL_auxz00_3896;

								BgL_auxz00_3896 = (int) ((BgL_iz00_3890 - ((long) 1)));
								{
									long BgL_iz00_4094;

									BgL_iz00_4094 = (long) (BgL_auxz00_3896);
									BgL_iz00_3890 = BgL_iz00_4094;
									goto BgL_loopz00_3891;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcfa_procedurez00()
	{
		{	/* Cfa/procedure.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_procedurez00()
	{
		{	/* Cfa/procedure.scm 15 */
			return BUNSPEC;
		}

	}



/* disable-X-T! */
	BGL_EXPORTED_DEF obj_t
		BGl_disablezd2Xzd2Tz12z12zzcfa_procedurez00(BgL_approxz00_bglt
		BgL_approxz00_3, obj_t BgL_reasonz00_4)
	{
		{	/* Cfa/procedure.scm 38 */
			return
				BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
				(BGl_proc2095z00zzcfa_procedurez00, BgL_approxz00_3);
		}

	}



/* &disable-X-T! */
	obj_t BGl_z62disablezd2Xzd2Tz12z70zzcfa_procedurez00(obj_t BgL_envz00_3834,
		obj_t BgL_approxz00_3835, obj_t BgL_reasonz00_3836)
	{
		{	/* Cfa/procedure.scm 38 */
			return
				BGl_disablezd2Xzd2Tz12z12zzcfa_procedurez00(
				((BgL_approxz00_bglt) BgL_approxz00_3835), BgL_reasonz00_3836);
		}

	}



/* &disable-alloc! */
	obj_t BGl_z62disablezd2allocz12za2zzcfa_procedurez00(obj_t BgL_envz00_3837,
		obj_t BgL_appz00_3838)
	{
		{	/* Cfa/procedure.scm 53 */
			{	/* Cfa/procedure.scm 41 */
				bool_t BgL_tmpz00_4100;

				if (BGl_isazf3zf3zz__objectz00(BgL_appz00_3838,
						BGl_makezd2procedurezd2appz00zzcfa_info2z00))
					{	/* Cfa/procedure.scm 41 */
						{
							BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4103;

							{
								obj_t BgL_auxz00_4104;

								{	/* Cfa/procedure.scm 47 */
									BgL_objectz00_bglt BgL_tmpz00_4105;

									BgL_tmpz00_4105 =
										((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_appz00_3838));
									BgL_auxz00_4104 = BGL_OBJECT_WIDENING(BgL_tmpz00_4105);
								}
								BgL_auxz00_4103 =
									((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_4104);
							}
							((((BgL_makezd2procedurezd2appz00_bglt)
										COBJECT(BgL_auxz00_4103))->BgL_xzd2tzf3z21) =
								((bool_t) ((bool_t) 0)), BUNSPEC);
						}
						BGl_setzd2procedurezd2approxzd2polymorphicz12zc0zzcfa_procedurez00(
							((BgL_appz00_bglt) BgL_appz00_3838));
						if (CBOOL
							(BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00))
							{	/* Cfa/procedure.scm 50 */
								obj_t BgL_calleez00_3902;

								{	/* Cfa/procedure.scm 50 */
									obj_t BgL_pairz00_3903;

									BgL_pairz00_3903 =
										(((BgL_appz00_bglt) COBJECT(
												((BgL_appz00_bglt)
													((BgL_appz00_bglt) BgL_appz00_3838))))->BgL_argsz00);
									BgL_calleez00_3902 = CAR(BgL_pairz00_3903);
								}
								{	/* Cfa/procedure.scm 50 */
									BgL_variablez00_bglt BgL_vz00_3904;

									BgL_vz00_3904 =
										(((BgL_varz00_bglt) COBJECT(
												((BgL_varz00_bglt) BgL_calleez00_3902)))->
										BgL_variablez00);
									{	/* Cfa/procedure.scm 51 */
										BgL_valuez00_bglt BgL_funz00_3905;

										BgL_funz00_3905 =
											(((BgL_variablez00_bglt) COBJECT(BgL_vz00_3904))->
											BgL_valuez00);
										{	/* Cfa/procedure.scm 52 */

											{	/* Cfa/procedure.scm 53 */
												obj_t BgL_g1506z00_3906;

												{	/* Cfa/procedure.scm 53 */
													obj_t BgL_pairz00_3907;

													BgL_pairz00_3907 =
														(((BgL_sfunz00_bglt) COBJECT(
																((BgL_sfunz00_bglt) BgL_funz00_3905)))->
														BgL_argsz00);
													BgL_g1506z00_3906 = CDR(BgL_pairz00_3907);
												}
												{
													obj_t BgL_l1504z00_3909;

													BgL_l1504z00_3909 = BgL_g1506z00_3906;
												BgL_zc3z04anonymousza31539ze3z87_3908:
													if (PAIRP(BgL_l1504z00_3909))
														{	/* Cfa/procedure.scm 53 */
															BGl_loosezd2argz12zc0zzcfa_procedurez00(CAR
																(BgL_l1504z00_3909));
															{
																obj_t BgL_l1504z00_4129;

																BgL_l1504z00_4129 = CDR(BgL_l1504z00_3909);
																BgL_l1504z00_3909 = BgL_l1504z00_4129;
																goto BgL_zc3z04anonymousza31539ze3z87_3908;
															}
														}
													else
														{	/* Cfa/procedure.scm 53 */
															BgL_tmpz00_4100 = ((bool_t) 1);
														}
												}
											}
										}
									}
								}
							}
						else
							{	/* Cfa/procedure.scm 49 */
								BgL_tmpz00_4100 = ((bool_t) 0);
							}
					}
				else
					{	/* Cfa/procedure.scm 41 */
						BgL_tmpz00_4100 = ((bool_t) 0);
					}
				return BBOOL(BgL_tmpz00_4100);
			}
		}

	}



/* set-procedure-approx-polymorphic! */
	BGL_EXPORTED_DEF obj_t
		BGl_setzd2procedurezd2approxzd2polymorphicz12zc0zzcfa_procedurez00
		(BgL_appz00_bglt BgL_appz00_12)
	{
		{	/* Cfa/procedure.scm 301 */
			{	/* Cfa/procedure.scm 302 */
				obj_t BgL_calleez00_2814;

				{	/* Cfa/procedure.scm 302 */
					obj_t BgL_pairz00_3565;

					BgL_pairz00_3565 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_appz00_12)))->BgL_argsz00);
					BgL_calleez00_2814 = CAR(BgL_pairz00_3565);
				}
				{	/* Cfa/procedure.scm 302 */
					BgL_variablez00_bglt BgL_vz00_2815;

					BgL_vz00_2815 =
						(((BgL_varz00_bglt) COBJECT(
								((BgL_varz00_bglt) BgL_calleez00_2814)))->BgL_variablez00);
					{	/* Cfa/procedure.scm 303 */
						BgL_valuez00_bglt BgL_funz00_2816;

						BgL_funz00_2816 =
							(((BgL_variablez00_bglt) COBJECT(BgL_vz00_2815))->BgL_valuez00);
						{	/* Cfa/procedure.scm 304 */

							{	/* Cfa/procedure.scm 307 */
								bool_t BgL_test2143z00_4138;

								{	/* Cfa/procedure.scm 307 */
									bool_t BgL_res2050z00_3568;

									BgL_res2050z00_3568 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_funz00_2816),
										BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00);
									BgL_test2143z00_4138 = BgL_res2050z00_3568;
								}
								if (BgL_test2143z00_4138)
									{	/* Cfa/procedure.scm 308 */
										bool_t BgL_test2144z00_4141;

										{
											BgL_internzd2sfunzf2cinfoz20_bglt BgL_auxz00_4142;

											{
												obj_t BgL_auxz00_4143;

												{	/* Cfa/procedure.scm 308 */
													BgL_objectz00_bglt BgL_tmpz00_4144;

													BgL_tmpz00_4144 =
														((BgL_objectz00_bglt)
														((BgL_sfunz00_bglt) BgL_funz00_2816));
													BgL_auxz00_4143 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_4144);
												}
												BgL_auxz00_4142 =
													((BgL_internzd2sfunzf2cinfoz20_bglt) BgL_auxz00_4143);
											}
											BgL_test2144z00_4141 =
												(((BgL_internzd2sfunzf2cinfoz20_bglt)
													COBJECT(BgL_auxz00_4142))->BgL_polymorphiczf3zf3);
										}
										if (BgL_test2144z00_4141)
											{	/* Cfa/procedure.scm 308 */
												return BFALSE;
											}
										else
											{	/* Cfa/procedure.scm 308 */
												BGl_continuezd2cfaz12zc0zzcfa_iteratez00
													(BGl_string2096z00zzcfa_procedurez00);
												{
													BgL_internzd2sfunzf2cinfoz20_bglt BgL_auxz00_4151;

													{
														obj_t BgL_auxz00_4152;

														{	/* Cfa/procedure.scm 310 */
															BgL_objectz00_bglt BgL_tmpz00_4153;

															BgL_tmpz00_4153 =
																((BgL_objectz00_bglt)
																((BgL_sfunz00_bglt) BgL_funz00_2816));
															BgL_auxz00_4152 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_4153);
														}
														BgL_auxz00_4151 =
															((BgL_internzd2sfunzf2cinfoz20_bglt)
															BgL_auxz00_4152);
													}
													return
														((((BgL_internzd2sfunzf2cinfoz20_bglt)
																COBJECT(BgL_auxz00_4151))->
															BgL_polymorphiczf3zf3) =
														((bool_t) ((bool_t) 1)), BUNSPEC);
												}
											}
									}
								else
									{	/* Cfa/procedure.scm 307 */
										{	/* Cfa/procedure.scm 311 */
											BgL_approxz00_bglt BgL_xz00_3886;

											{
												BgL_externzd2sfunzf2cinfoz20_bglt BgL_auxz00_4159;

												{
													obj_t BgL_auxz00_4160;

													{	/* Cfa/procedure.scm 311 */
														BgL_objectz00_bglt BgL_tmpz00_4161;

														BgL_tmpz00_4161 =
															((BgL_objectz00_bglt)
															((BgL_sfunz00_bglt) BgL_funz00_2816));
														BgL_auxz00_4160 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_4161);
													}
													BgL_auxz00_4159 =
														((BgL_externzd2sfunzf2cinfoz20_bglt)
														BgL_auxz00_4160);
												}
												BgL_xz00_3886 =
													(((BgL_externzd2sfunzf2cinfoz20_bglt)
														COBJECT(BgL_auxz00_4159))->BgL_approxz00);
											}
											((bool_t) 1);
										}
										{	/* Cfa/procedure.scm 312 */
											bool_t BgL_test2145z00_4167;

											{
												BgL_externzd2sfunzf2cinfoz20_bglt BgL_auxz00_4168;

												{
													obj_t BgL_auxz00_4169;

													{	/* Cfa/procedure.scm 312 */
														BgL_objectz00_bglt BgL_tmpz00_4170;

														BgL_tmpz00_4170 =
															((BgL_objectz00_bglt)
															((BgL_sfunz00_bglt) BgL_funz00_2816));
														BgL_auxz00_4169 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_4170);
													}
													BgL_auxz00_4168 =
														((BgL_externzd2sfunzf2cinfoz20_bglt)
														BgL_auxz00_4169);
												}
												BgL_test2145z00_4167 =
													(((BgL_externzd2sfunzf2cinfoz20_bglt)
														COBJECT(BgL_auxz00_4168))->BgL_polymorphiczf3zf3);
											}
											if (BgL_test2145z00_4167)
												{	/* Cfa/procedure.scm 312 */
													return BFALSE;
												}
											else
												{	/* Cfa/procedure.scm 312 */
													BGl_continuezd2cfaz12zc0zzcfa_iteratez00
														(BGl_string2097z00zzcfa_procedurez00);
													{
														BgL_externzd2sfunzf2cinfoz20_bglt BgL_auxz00_4177;

														{
															obj_t BgL_auxz00_4178;

															{	/* Cfa/procedure.scm 314 */
																BgL_objectz00_bglt BgL_tmpz00_4179;

																BgL_tmpz00_4179 =
																	((BgL_objectz00_bglt)
																	((BgL_sfunz00_bglt) BgL_funz00_2816));
																BgL_auxz00_4178 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_4179);
															}
															BgL_auxz00_4177 =
																((BgL_externzd2sfunzf2cinfoz20_bglt)
																BgL_auxz00_4178);
														}
														return
															((((BgL_externzd2sfunzf2cinfoz20_bglt)
																	COBJECT(BgL_auxz00_4177))->
																BgL_polymorphiczf3zf3) =
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
		}

	}



/* &set-procedure-approx-polymorphic! */
	obj_t
		BGl_z62setzd2procedurezd2approxzd2polymorphicz12za2zzcfa_procedurez00(obj_t
		BgL_envz00_3839, obj_t BgL_appz00_3840)
	{
		{	/* Cfa/procedure.scm 301 */
			return
				BGl_setzd2procedurezd2approxzd2polymorphicz12zc0zzcfa_procedurez00(
				((BgL_appz00_bglt) BgL_appz00_3840));
		}

	}



/* loose-arg! */
	obj_t BGl_loosezd2argz12zc0zzcfa_procedurez00(obj_t BgL_az00_13)
	{
		{	/* Cfa/procedure.scm 319 */
			{	/* Cfa/procedure.scm 320 */
				BgL_typez00_bglt BgL_vz00_3582;

				BgL_vz00_3582 = ((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00);
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_az00_13))))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_vz00_3582), BUNSPEC);
			}
			if (BGl_isazf3zf3zz__objectz00(BgL_az00_13,
					BGl_reshapedzd2localzd2zzcfa_infoz00))
				{	/* Cfa/procedure.scm 322 */
					BgL_valuez00_bglt BgL_valuez00_2823;

					BgL_valuez00_2823 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_az00_13))))->BgL_valuez00);
					{	/* Cfa/procedure.scm 323 */
						bool_t BgL_test2147z00_4196;

						{	/* Cfa/procedure.scm 323 */
							bool_t BgL_res2052z00_3585;

							BgL_res2052z00_3585 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_valuez00_2823), BGl_svarzf2Cinfozf2zzcfa_infoz00);
							BgL_test2147z00_4196 = BgL_res2052z00_3585;
						}
						if (BgL_test2147z00_4196)
							{	/* Cfa/procedure.scm 324 */
								BgL_approxz00_bglt BgL_i1185z00_2825;

								{
									BgL_svarzf2cinfozf2_bglt BgL_auxz00_4199;

									{
										obj_t BgL_auxz00_4200;

										{	/* Cfa/procedure.scm 324 */
											BgL_objectz00_bglt BgL_tmpz00_4201;

											BgL_tmpz00_4201 =
												((BgL_objectz00_bglt)
												((BgL_svarz00_bglt) BgL_valuez00_2823));
											BgL_auxz00_4200 = BGL_OBJECT_WIDENING(BgL_tmpz00_4201);
										}
										BgL_auxz00_4199 =
											((BgL_svarzf2cinfozf2_bglt) BgL_auxz00_4200);
									}
									BgL_i1185z00_2825 =
										(((BgL_svarzf2cinfozf2_bglt) COBJECT(BgL_auxz00_4199))->
										BgL_approxz00);
								}
								return
									((((BgL_approxz00_bglt) COBJECT(BgL_i1185z00_2825))->
										BgL_typez00) =
									((BgL_typez00_bglt) ((BgL_typez00_bglt)
											BGl_za2objza2z00zztype_cachez00)), BUNSPEC);
							}
						else
							{	/* Cfa/procedure.scm 326 */
								obj_t BgL_arg1578z00_2826;
								obj_t BgL_arg1582z00_2827;

								{	/* Cfa/procedure.scm 326 */
									obj_t BgL_res2053z00_3589;

									{	/* Cfa/procedure.scm 326 */
										obj_t BgL_tmpz00_4209;

										BgL_tmpz00_4209 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2053z00_3589 =
											BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_4209);
									}
									BgL_arg1578z00_2826 = BgL_res2053z00_3589;
								}
								BgL_arg1582z00_2827 = bgl_typeof(((obj_t) BgL_valuez00_2823));
								{	/* Cfa/procedure.scm 326 */
									obj_t BgL_list1583z00_2828;

									{	/* Cfa/procedure.scm 326 */
										obj_t BgL_arg1584z00_2829;

										{	/* Cfa/procedure.scm 326 */
											obj_t BgL_arg1588z00_2830;

											{	/* Cfa/procedure.scm 326 */
												obj_t BgL_arg1589z00_2831;

												{	/* Cfa/procedure.scm 326 */
													obj_t BgL_arg1592z00_2832;

													{	/* Cfa/procedure.scm 326 */
														obj_t BgL_arg1593z00_2833;

														BgL_arg1593z00_2833 =
															MAKE_YOUNG_PAIR(BgL_arg1582z00_2827, BNIL);
														BgL_arg1592z00_2832 =
															MAKE_YOUNG_PAIR
															(BGl_string2098z00zzcfa_procedurez00,
															BgL_arg1593z00_2833);
													}
													BgL_arg1589z00_2831 =
														MAKE_YOUNG_PAIR(BGl_string2099z00zzcfa_procedurez00,
														BgL_arg1592z00_2832);
												}
												BgL_arg1588z00_2830 =
													MAKE_YOUNG_PAIR(BINT(((long) 326)),
													BgL_arg1589z00_2831);
											}
											BgL_arg1584z00_2829 =
												MAKE_YOUNG_PAIR(BGl_string2100z00zzcfa_procedurez00,
												BgL_arg1588z00_2830);
										}
										BgL_list1583z00_2828 =
											MAKE_YOUNG_PAIR(BGl_string2101z00zzcfa_procedurez00,
											BgL_arg1584z00_2829);
									}
									return
										BGl_tprintz00zz__r4_output_6_10_3z00(BgL_arg1578z00_2826,
										BgL_list1583z00_2828);
								}
							}
					}
				}
			else
				{	/* Cfa/procedure.scm 321 */
					return BFALSE;
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_procedurez00()
	{
		{	/* Cfa/procedure.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_procedurez00()
	{
		{	/* Cfa/procedure.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_procedurez00()
	{
		{	/* Cfa/procedure.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00,
				BGl_proc2102z00zzcfa_procedurez00, BGl_string2103z00zzcfa_procedurez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00,
				BGl_proc2104z00zzcfa_procedurez00, BGl_string2103z00zzcfa_procedurez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00,
				BGl_proc2105z00zzcfa_procedurez00, BGl_string2103z00zzcfa_procedurez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_makezd2procedurezd2appz00zzcfa_info2z00,
				BGl_proc2106z00zzcfa_procedurez00, BGl_string2107z00zzcfa_procedurez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_procedurezd2refzd2appz00zzcfa_info2z00,
				BGl_proc2108z00zzcfa_procedurez00, BGl_string2107z00zzcfa_procedurez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_procedurezd2setz12zd2appz12zzcfa_info2z00,
				BGl_proc2109z00zzcfa_procedurez00, BGl_string2107z00zzcfa_procedurez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00,
				BGl_makezd2procedurezd2appz00zzcfa_info2z00,
				BGl_proc2110z00zzcfa_procedurez00, BGl_string2111z00zzcfa_procedurez00);
		}

	}



/* &loose-alloc!-make-pr1526 */
	obj_t BGl_z62loosezd2allocz12zd2makezd2pr1526za2zzcfa_procedurez00(obj_t
		BgL_envz00_3854, obj_t BgL_allocz00_3855)
	{
		{	/* Cfa/procedure.scm 279 */
			{	/* Cfa/procedure.scm 281 */
				bool_t BgL_test2148z00_4229;

				{	/* Cfa/procedure.scm 281 */
					long BgL_arg1868z00_3911;

					{
						BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4230;

						{
							obj_t BgL_auxz00_4231;

							{	/* Cfa/procedure.scm 281 */
								BgL_objectz00_bglt BgL_tmpz00_4232;

								BgL_tmpz00_4232 =
									((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_allocz00_3855));
								BgL_auxz00_4231 = BGL_OBJECT_WIDENING(BgL_tmpz00_4232);
							}
							BgL_auxz00_4230 =
								((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_4231);
						}
						BgL_arg1868z00_3911 =
							(((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_4230))->
							BgL_lostzd2stampzd2);
					}
					BgL_test2148z00_4229 =
						(BgL_arg1868z00_3911 ==
						(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00));
				}
				if (BgL_test2148z00_4229)
					{	/* Cfa/procedure.scm 281 */
						return BFALSE;
					}
				else
					{	/* Cfa/procedure.scm 281 */
						{
							BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4240;

							{
								obj_t BgL_auxz00_4241;

								{	/* Cfa/procedure.scm 283 */
									BgL_objectz00_bglt BgL_tmpz00_4242;

									BgL_tmpz00_4242 =
										((BgL_objectz00_bglt)
										((BgL_appz00_bglt) BgL_allocz00_3855));
									BgL_auxz00_4241 = BGL_OBJECT_WIDENING(BgL_tmpz00_4242);
								}
								BgL_auxz00_4240 =
									((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_4241);
							}
							((((BgL_makezd2procedurezd2appz00_bglt)
										COBJECT(BgL_auxz00_4240))->BgL_lostzd2stampzd2) =
								((long) (long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00)),
								BUNSPEC);
						}
						BGl_setzd2procedurezd2approxzd2polymorphicz12zc0zzcfa_procedurez00(
							((BgL_appz00_bglt) BgL_allocz00_3855));
						{	/* Cfa/procedure.scm 285 */
							obj_t BgL_calleez00_3912;

							{	/* Cfa/procedure.scm 285 */
								obj_t BgL_pairz00_3913;

								BgL_pairz00_3913 =
									(((BgL_appz00_bglt) COBJECT(
											((BgL_appz00_bglt)
												((BgL_appz00_bglt) BgL_allocz00_3855))))->BgL_argsz00);
								BgL_calleez00_3912 = CAR(BgL_pairz00_3913);
							}
							{	/* Cfa/procedure.scm 285 */
								BgL_variablez00_bglt BgL_vz00_3914;

								BgL_vz00_3914 =
									(((BgL_varz00_bglt) COBJECT(
											((BgL_varz00_bglt) BgL_calleez00_3912)))->
									BgL_variablez00);
								{	/* Cfa/procedure.scm 286 */
									BgL_valuez00_bglt BgL_funz00_3915;

									BgL_funz00_3915 =
										(((BgL_variablez00_bglt) COBJECT(BgL_vz00_3914))->
										BgL_valuez00);
									{	/* Cfa/procedure.scm 287 */

										BGl_cfazd2exportzd2varz12z12zzcfa_iteratez00
											(BgL_funz00_3915, ((obj_t) BgL_vz00_3914));
										if (CBOOL
											(BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00))
											{	/* Cfa/procedure.scm 290 */
												obj_t BgL_g1512z00_3916;

												{	/* Cfa/procedure.scm 290 */
													obj_t BgL_pairz00_3917;

													BgL_pairz00_3917 =
														(((BgL_sfunz00_bglt) COBJECT(
																((BgL_sfunz00_bglt) BgL_funz00_3915)))->
														BgL_argsz00);
													BgL_g1512z00_3916 = CDR(BgL_pairz00_3917);
												}
												{
													obj_t BgL_l1510z00_3919;

													{	/* Cfa/procedure.scm 290 */
														bool_t BgL_tmpz00_4265;

														BgL_l1510z00_3919 = BgL_g1512z00_3916;
													BgL_zc3z04anonymousza31860ze3z87_3918:
														if (PAIRP(BgL_l1510z00_3919))
															{	/* Cfa/procedure.scm 290 */
																BGl_loosezd2argz12zc0zzcfa_procedurez00(CAR
																	(BgL_l1510z00_3919));
																{
																	obj_t BgL_l1510z00_4270;

																	BgL_l1510z00_4270 = CDR(BgL_l1510z00_3919);
																	BgL_l1510z00_3919 = BgL_l1510z00_4270;
																	goto BgL_zc3z04anonymousza31860ze3z87_3918;
																}
															}
														else
															{	/* Cfa/procedure.scm 290 */
																BgL_tmpz00_4265 = ((bool_t) 1);
															}
														return BBOOL(BgL_tmpz00_4265);
													}
												}
											}
										else
											{	/* Cfa/procedure.scm 289 */
												return BFALSE;
											}
									}
								}
							}
						}
					}
			}
		}

	}



/* &cfa!-procedure-set!-1524 */
	BgL_approxz00_bglt
		BGl_z62cfaz12zd2procedurezd2setz12zd21524zb0zzcfa_procedurez00(obj_t
		BgL_envz00_3856, obj_t BgL_nodez00_3857)
	{
		{	/* Cfa/procedure.scm 215 */
			{	/* Cfa/procedure.scm 217 */
				BgL_approxz00_bglt BgL_proczd2approxzd2_3921;
				obj_t BgL_offsetz00_3922;

				{	/* Cfa/procedure.scm 217 */
					obj_t BgL_arg1853z00_3923;

					{	/* Cfa/procedure.scm 217 */
						obj_t BgL_pairz00_3924;

						BgL_pairz00_3924 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_nodez00_3857))))->BgL_argsz00);
						BgL_arg1853z00_3923 = CAR(BgL_pairz00_3924);
					}
					BgL_proczd2approxzd2_3921 =
						BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1853z00_3923));
				}
				{	/* Cfa/procedure.scm 218 */
					obj_t BgL_arg1856z00_3925;

					{	/* Cfa/procedure.scm 218 */
						obj_t BgL_pairz00_3926;

						BgL_pairz00_3926 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_nodez00_3857))))->BgL_argsz00);
						BgL_arg1856z00_3925 = CAR(CDR(BgL_pairz00_3926));
					}
					BgL_offsetz00_3922 =
						BGl_getzd2nodezd2atomzd2valuezd2zzcfa_approxz00(
						((BgL_nodez00_bglt) BgL_arg1856z00_3925));
				}
				{	/* Cfa/procedure.scm 222 */
					obj_t BgL_arg1798z00_3927;

					{	/* Cfa/procedure.scm 222 */
						obj_t BgL_pairz00_3928;

						BgL_pairz00_3928 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_nodez00_3857))))->BgL_argsz00);
						BgL_arg1798z00_3927 = CAR(CDR(BgL_pairz00_3928));
					}
					BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1798z00_3927));
				}
				{	/* Cfa/procedure.scm 223 */
					obj_t BgL_arg1808z00_3929;
					BgL_approxz00_bglt BgL_arg1809z00_3930;

					{
						BgL_procedurezd2setz12zd2appz12_bglt BgL_auxz00_4293;

						{
							obj_t BgL_auxz00_4294;

							{	/* Cfa/procedure.scm 223 */
								BgL_objectz00_bglt BgL_tmpz00_4295;

								BgL_tmpz00_4295 =
									((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3857));
								BgL_auxz00_4294 = BGL_OBJECT_WIDENING(BgL_tmpz00_4295);
							}
							BgL_auxz00_4293 =
								((BgL_procedurezd2setz12zd2appz12_bglt) BgL_auxz00_4294);
						}
						BgL_arg1808z00_3929 =
							(((BgL_procedurezd2setz12zd2appz12_bglt)
								COBJECT(BgL_auxz00_4293))->BgL_vapproxz00);
					}
					{	/* Cfa/procedure.scm 223 */
						obj_t BgL_arg1811z00_3931;

						{	/* Cfa/procedure.scm 223 */
							obj_t BgL_pairz00_3932;

							BgL_pairz00_3932 =
								(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt)
											((BgL_appz00_bglt) BgL_nodez00_3857))))->BgL_argsz00);
							BgL_arg1811z00_3931 = CAR(CDR(CDR(BgL_pairz00_3932)));
						}
						BgL_arg1809z00_3930 =
							BGl_cfaz12z12zzcfa_cfaz00(
							((BgL_nodez00_bglt) BgL_arg1811z00_3931));
					}
					BGl_unionzd2approxz12zc0zzcfa_approxz00(
						((BgL_approxz00_bglt) BgL_arg1808z00_3929), BgL_arg1809z00_3930);
				}
				if (
					(((BgL_approxz00_bglt) COBJECT(BgL_proczd2approxzd2_3921))->
						BgL_topzf3zf3))
					{	/* Cfa/procedure.scm 227 */
						obj_t BgL_arg1824z00_3933;

						{
							BgL_procedurezd2setz12zd2appz12_bglt BgL_auxz00_4313;

							{
								obj_t BgL_auxz00_4314;

								{	/* Cfa/procedure.scm 227 */
									BgL_objectz00_bglt BgL_tmpz00_4315;

									BgL_tmpz00_4315 =
										((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3857));
									BgL_auxz00_4314 = BGL_OBJECT_WIDENING(BgL_tmpz00_4315);
								}
								BgL_auxz00_4313 =
									((BgL_procedurezd2setz12zd2appz12_bglt) BgL_auxz00_4314);
							}
							BgL_arg1824z00_3933 =
								(((BgL_procedurezd2setz12zd2appz12_bglt)
									COBJECT(BgL_auxz00_4313))->BgL_vapproxz00);
						}
						((obj_t)
							BGl_loosez12z12zzcfa_loosez00(
								((BgL_approxz00_bglt) BgL_arg1824z00_3933),
								CNST_TABLE_REF(((long) 0))));
					}
				else
					{	/* Cfa/procedure.scm 225 */
						if (INTEGERP(BgL_offsetz00_3922))
							{	/* Cfa/procedure.scm 232 */
								obj_t BgL_zc3z04anonymousza31827ze3z87_3934;

								BgL_zc3z04anonymousza31827ze3z87_3934 =
									MAKE_FX_PROCEDURE
									(BGl_z62zc3z04anonymousza31827ze3ze5zzcfa_procedurez00,
									(int) (((long) 1)), (int) (((long) 2)));
								PROCEDURE_SET(BgL_zc3z04anonymousza31827ze3z87_3934,
									(int) (((long) 0)),
									((obj_t) ((BgL_appz00_bglt) BgL_nodez00_3857)));
								PROCEDURE_SET(BgL_zc3z04anonymousza31827ze3z87_3934,
									(int) (((long) 1)), BgL_offsetz00_3922);
								BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
									(BgL_zc3z04anonymousza31827ze3z87_3934,
									BgL_proczd2approxzd2_3921);
							}
						else
							{	/* Cfa/procedure.scm 254 */
								obj_t BgL_zc3z04anonymousza31842ze3z87_3935;

								BgL_zc3z04anonymousza31842ze3z87_3935 =
									MAKE_FX_PROCEDURE
									(BGl_z62zc3z04anonymousza31842ze3ze5zzcfa_procedurez00,
									(int) (((long) 1)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_zc3z04anonymousza31842ze3z87_3935,
									(int) (((long) 0)),
									((obj_t) ((BgL_appz00_bglt) BgL_nodez00_3857)));
								BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
									(BgL_zc3z04anonymousza31842ze3z87_3935,
									BgL_proczd2approxzd2_3921);
					}}
				{
					BgL_procedurezd2setz12zd2appz12_bglt BgL_auxz00_4345;

					{
						obj_t BgL_auxz00_4346;

						{	/* Cfa/procedure.scm 269 */
							BgL_objectz00_bglt BgL_tmpz00_4347;

							BgL_tmpz00_4347 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3857));
							BgL_auxz00_4346 = BGL_OBJECT_WIDENING(BgL_tmpz00_4347);
						}
						BgL_auxz00_4345 =
							((BgL_procedurezd2setz12zd2appz12_bglt) BgL_auxz00_4346);
					}
					return
						(((BgL_procedurezd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_4345))->
						BgL_approxz00);
				}
			}
		}

	}



/* &<@anonymous:1827> */
	obj_t BGl_z62zc3z04anonymousza31827ze3ze5zzcfa_procedurez00(obj_t
		BgL_envz00_3858, obj_t BgL_appz00_3861)
	{
		{	/* Cfa/procedure.scm 231 */
			{	/* Cfa/procedure.scm 232 */
				BgL_appz00_bglt BgL_i1183z00_3859;
				obj_t BgL_offsetz00_3860;

				BgL_i1183z00_3859 =
					((BgL_appz00_bglt)
					PROCEDURE_REF(BgL_envz00_3858, (int) (((long) 0))));
				BgL_offsetz00_3860 = PROCEDURE_REF(BgL_envz00_3858, (int) (((long) 1)));
				{	/* Cfa/procedure.scm 232 */
					bool_t BgL_test2153z00_4358;

					if (BGl_isazf3zf3zz__objectz00(BgL_appz00_3861,
							BGl_makezd2procedurezd2appz00zzcfa_info2z00))
						{	/* Cfa/procedure.scm 235 */
							long BgL_arg1838z00_3936;

							{	/* Cfa/procedure.scm 235 */
								obj_t BgL_arg1840z00_3937;

								{
									BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4361;

									{
										obj_t BgL_auxz00_4362;

										{	/* Cfa/procedure.scm 235 */
											BgL_objectz00_bglt BgL_tmpz00_4363;

											BgL_tmpz00_4363 =
												((BgL_objectz00_bglt)
												((BgL_appz00_bglt) BgL_appz00_3861));
											BgL_auxz00_4362 = BGL_OBJECT_WIDENING(BgL_tmpz00_4363);
										}
										BgL_auxz00_4361 =
											((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_4362);
									}
									BgL_arg1840z00_3937 =
										(((BgL_makezd2procedurezd2appz00_bglt)
											COBJECT(BgL_auxz00_4361))->BgL_valueszd2approxzd2);
								}
								BgL_arg1838z00_3936 = VECTOR_LENGTH(BgL_arg1840z00_3937);
							}
							BgL_test2153z00_4358 =
								((long) CINT(BgL_offsetz00_3860) < BgL_arg1838z00_3936);
						}
					else
						{	/* Cfa/procedure.scm 232 */
							BgL_test2153z00_4358 = ((bool_t) 0);
						}
					if (BgL_test2153z00_4358)
						{	/* Cfa/procedure.scm 232 */
							{	/* Cfa/procedure.scm 246 */
								obj_t BgL_arg1832z00_3938;
								obj_t BgL_arg1833z00_3939;

								{	/* Cfa/procedure.scm 246 */
									obj_t BgL_arg1835z00_3940;

									{
										BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4372;

										{
											obj_t BgL_auxz00_4373;

											{	/* Cfa/procedure.scm 246 */
												BgL_objectz00_bglt BgL_tmpz00_4374;

												BgL_tmpz00_4374 =
													((BgL_objectz00_bglt)
													((BgL_appz00_bglt) BgL_appz00_3861));
												BgL_auxz00_4373 = BGL_OBJECT_WIDENING(BgL_tmpz00_4374);
											}
											BgL_auxz00_4372 =
												((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_4373);
										}
										BgL_arg1835z00_3940 =
											(((BgL_makezd2procedurezd2appz00_bglt)
												COBJECT(BgL_auxz00_4372))->BgL_valueszd2approxzd2);
									}
									BgL_arg1832z00_3938 =
										VECTOR_REF(BgL_arg1835z00_3940,
										(long) CINT(BgL_offsetz00_3860));
								}
								{
									BgL_procedurezd2setz12zd2appz12_bglt BgL_auxz00_4382;

									{
										obj_t BgL_auxz00_4383;

										{	/* Cfa/procedure.scm 245 */
											BgL_objectz00_bglt BgL_tmpz00_4384;

											BgL_tmpz00_4384 =
												((BgL_objectz00_bglt) BgL_i1183z00_3859);
											BgL_auxz00_4383 = BGL_OBJECT_WIDENING(BgL_tmpz00_4384);
										}
										BgL_auxz00_4382 =
											((BgL_procedurezd2setz12zd2appz12_bglt) BgL_auxz00_4383);
									}
									BgL_arg1833z00_3939 =
										(((BgL_procedurezd2setz12zd2appz12_bglt)
											COBJECT(BgL_auxz00_4382))->BgL_vapproxz00);
								}
								return
									((obj_t)
									BGl_unionzd2approxz12zc0zzcfa_approxz00(
										((BgL_approxz00_bglt) BgL_arg1832z00_3938),
										((BgL_approxz00_bglt) BgL_arg1833z00_3939)));
							}
						}
					else
						{	/* Cfa/procedure.scm 249 */
							obj_t BgL_arg1836z00_3941;

							{
								BgL_procedurezd2setz12zd2appz12_bglt BgL_auxz00_4393;

								{
									obj_t BgL_auxz00_4394;

									{	/* Cfa/procedure.scm 249 */
										BgL_objectz00_bglt BgL_tmpz00_4395;

										BgL_tmpz00_4395 = ((BgL_objectz00_bglt) BgL_i1183z00_3859);
										BgL_auxz00_4394 = BGL_OBJECT_WIDENING(BgL_tmpz00_4395);
									}
									BgL_auxz00_4393 =
										((BgL_procedurezd2setz12zd2appz12_bglt) BgL_auxz00_4394);
								}
								BgL_arg1836z00_3941 =
									(((BgL_procedurezd2setz12zd2appz12_bglt)
										COBJECT(BgL_auxz00_4393))->BgL_vapproxz00);
							}
							return
								BGl_approxzd2setzd2topz12z12zzcfa_approxz00(
								((BgL_approxz00_bglt) BgL_arg1836z00_3941));
						}
				}
			}
		}

	}



/* &<@anonymous:1842> */
	obj_t BGl_z62zc3z04anonymousza31842ze3ze5zzcfa_procedurez00(obj_t
		BgL_envz00_3862, obj_t BgL_appz00_3864)
	{
		{	/* Cfa/procedure.scm 253 */
			{	/* Cfa/procedure.scm 254 */
				BgL_appz00_bglt BgL_i1183z00_3863;

				BgL_i1183z00_3863 =
					((BgL_appz00_bglt)
					PROCEDURE_REF(BgL_envz00_3862, (int) (((long) 0))));
				if (BGl_isazf3zf3zz__objectz00(BgL_appz00_3864,
						BGl_makezd2procedurezd2appz00zzcfa_info2z00))
					{	/* Cfa/procedure.scm 255 */
						long BgL_lenz00_3942;

						{	/* Cfa/procedure.scm 256 */
							obj_t BgL_arg1851z00_3943;

							{
								BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4407;

								{
									obj_t BgL_auxz00_4408;

									{	/* Cfa/procedure.scm 256 */
										BgL_objectz00_bglt BgL_tmpz00_4409;

										BgL_tmpz00_4409 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_appz00_3864));
										BgL_auxz00_4408 = BGL_OBJECT_WIDENING(BgL_tmpz00_4409);
									}
									BgL_auxz00_4407 =
										((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_4408);
								}
								BgL_arg1851z00_3943 =
									(((BgL_makezd2procedurezd2appz00_bglt)
										COBJECT(BgL_auxz00_4407))->BgL_valueszd2approxzd2);
							}
							BgL_lenz00_3942 = VECTOR_LENGTH(BgL_arg1851z00_3943);
						}
						{
							long BgL_iz00_3945;

							{	/* Cfa/procedure.scm 257 */
								bool_t BgL_tmpz00_4416;

								BgL_iz00_3945 = ((long) 0);
							BgL_loopz00_3944:
								if ((BgL_iz00_3945 < BgL_lenz00_3942))
									{	/* Cfa/procedure.scm 258 */
										{	/* Cfa/procedure.scm 262 */
											obj_t BgL_arg1846z00_3946;
											obj_t BgL_arg1847z00_3947;

											{	/* Cfa/procedure.scm 262 */
												obj_t BgL_arg1848z00_3948;

												{
													BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4419;

													{
														obj_t BgL_auxz00_4420;

														{	/* Cfa/procedure.scm 262 */
															BgL_objectz00_bglt BgL_tmpz00_4421;

															BgL_tmpz00_4421 =
																((BgL_objectz00_bglt)
																((BgL_appz00_bglt) BgL_appz00_3864));
															BgL_auxz00_4420 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_4421);
														}
														BgL_auxz00_4419 =
															((BgL_makezd2procedurezd2appz00_bglt)
															BgL_auxz00_4420);
													}
													BgL_arg1848z00_3948 =
														(((BgL_makezd2procedurezd2appz00_bglt)
															COBJECT(BgL_auxz00_4419))->
														BgL_valueszd2approxzd2);
												}
												BgL_arg1846z00_3946 =
													VECTOR_REF(BgL_arg1848z00_3948, BgL_iz00_3945);
											}
											{
												BgL_procedurezd2setz12zd2appz12_bglt BgL_auxz00_4428;

												{
													obj_t BgL_auxz00_4429;

													{	/* Cfa/procedure.scm 260 */
														BgL_objectz00_bglt BgL_tmpz00_4430;

														BgL_tmpz00_4430 =
															((BgL_objectz00_bglt) BgL_i1183z00_3863);
														BgL_auxz00_4429 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_4430);
													}
													BgL_auxz00_4428 =
														((BgL_procedurezd2setz12zd2appz12_bglt)
														BgL_auxz00_4429);
												}
												BgL_arg1847z00_3947 =
													(((BgL_procedurezd2setz12zd2appz12_bglt)
														COBJECT(BgL_auxz00_4428))->BgL_vapproxz00);
											}
											BGl_unionzd2approxz12zc0zzcfa_approxz00(
												((BgL_approxz00_bglt) BgL_arg1846z00_3946),
												((BgL_approxz00_bglt) BgL_arg1847z00_3947));
										}
										{
											long BgL_iz00_4438;

											BgL_iz00_4438 = (BgL_iz00_3945 + ((long) 1));
											BgL_iz00_3945 = BgL_iz00_4438;
											goto BgL_loopz00_3944;
										}
									}
								else
									{	/* Cfa/procedure.scm 258 */
										BgL_tmpz00_4416 = ((bool_t) 0);
									}
								return BBOOL(BgL_tmpz00_4416);
							}
						}
					}
				else
					{	/* Cfa/procedure.scm 267 */
						obj_t BgL_arg1852z00_3949;

						{
							BgL_procedurezd2setz12zd2appz12_bglt BgL_auxz00_4441;

							{
								obj_t BgL_auxz00_4442;

								{	/* Cfa/procedure.scm 267 */
									BgL_objectz00_bglt BgL_tmpz00_4443;

									BgL_tmpz00_4443 = ((BgL_objectz00_bglt) BgL_i1183z00_3863);
									BgL_auxz00_4442 = BGL_OBJECT_WIDENING(BgL_tmpz00_4443);
								}
								BgL_auxz00_4441 =
									((BgL_procedurezd2setz12zd2appz12_bglt) BgL_auxz00_4442);
							}
							BgL_arg1852z00_3949 =
								(((BgL_procedurezd2setz12zd2appz12_bglt)
									COBJECT(BgL_auxz00_4441))->BgL_vapproxz00);
						}
						return
							BGl_approxzd2setzd2topz12z12zzcfa_approxz00(
							((BgL_approxz00_bglt) BgL_arg1852z00_3949));
					}
			}
		}

	}



/* &cfa!-procedure-ref-a1522 */
	BgL_approxz00_bglt
		BGl_z62cfaz12zd2procedurezd2refzd2a1522za2zzcfa_procedurez00(obj_t
		BgL_envz00_3865, obj_t BgL_nodez00_3866)
	{
		{	/* Cfa/procedure.scm 165 */
			{	/* Cfa/procedure.scm 168 */
				BgL_approxz00_bglt BgL_proczd2approxzd2_3951;
				obj_t BgL_offsetz00_3952;

				{	/* Cfa/procedure.scm 168 */
					obj_t BgL_arg1782z00_3953;

					{	/* Cfa/procedure.scm 168 */
						obj_t BgL_pairz00_3954;

						BgL_pairz00_3954 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_nodez00_3866))))->BgL_argsz00);
						BgL_arg1782z00_3953 = CAR(BgL_pairz00_3954);
					}
					BgL_proczd2approxzd2_3951 =
						BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1782z00_3953));
				}
				{	/* Cfa/procedure.scm 169 */
					obj_t BgL_arg1790z00_3955;

					{	/* Cfa/procedure.scm 169 */
						obj_t BgL_pairz00_3956;

						BgL_pairz00_3956 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_nodez00_3866))))->BgL_argsz00);
						BgL_arg1790z00_3955 = CAR(CDR(BgL_pairz00_3956));
					}
					BgL_offsetz00_3952 =
						BGl_getzd2nodezd2atomzd2valuezd2zzcfa_approxz00(
						((BgL_nodez00_bglt) BgL_arg1790z00_3955));
				}
				{	/* Cfa/procedure.scm 170 */
					obj_t BgL_arg1733z00_3957;

					{	/* Cfa/procedure.scm 170 */
						obj_t BgL_pairz00_3958;

						BgL_pairz00_3958 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_nodez00_3866))))->BgL_argsz00);
						BgL_arg1733z00_3957 = CAR(CDR(BgL_pairz00_3958));
					}
					BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1733z00_3957));
				}
				if (
					(((BgL_approxz00_bglt) COBJECT(BgL_proczd2approxzd2_3951))->
						BgL_topzf3zf3))
					{	/* Cfa/procedure.scm 176 */
						BgL_approxz00_bglt BgL_arg1740z00_3959;

						{
							BgL_procedurezd2refzd2appz00_bglt BgL_auxz00_4472;

							{
								obj_t BgL_auxz00_4473;

								{	/* Cfa/procedure.scm 176 */
									BgL_objectz00_bglt BgL_tmpz00_4474;

									BgL_tmpz00_4474 =
										((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3866));
									BgL_auxz00_4473 = BGL_OBJECT_WIDENING(BgL_tmpz00_4474);
								}
								BgL_auxz00_4472 =
									((BgL_procedurezd2refzd2appz00_bglt) BgL_auxz00_4473);
							}
							BgL_arg1740z00_3959 =
								(((BgL_procedurezd2refzd2appz00_bglt)
									COBJECT(BgL_auxz00_4472))->BgL_approxz00);
						}
						BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_arg1740z00_3959);
					}
				else
					{	/* Cfa/procedure.scm 175 */
						BFALSE;
					}
				if (INTEGERP(BgL_offsetz00_3952))
					{	/* Cfa/procedure.scm 181 */
						obj_t BgL_zc3z04anonymousza31743ze3z87_3960;

						BgL_zc3z04anonymousza31743ze3z87_3960 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31743ze3ze5zzcfa_procedurez00,
							(int) (((long) 1)), (int) (((long) 2)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31743ze3z87_3960,
							(int) (((long) 0)),
							((obj_t) ((BgL_appz00_bglt) BgL_nodez00_3866)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31743ze3z87_3960,
							(int) (((long) 1)), BgL_offsetz00_3952);
						BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
							(BgL_zc3z04anonymousza31743ze3z87_3960,
							BgL_proczd2approxzd2_3951);
					}
				else
					{	/* Cfa/procedure.scm 196 */
						obj_t BgL_zc3z04anonymousza31762ze3z87_3961;

						BgL_zc3z04anonymousza31762ze3z87_3961 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31762ze3ze5zzcfa_procedurez00,
							(int) (((long) 1)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31762ze3z87_3961,
							(int) (((long) 0)),
							((obj_t) ((BgL_appz00_bglt) BgL_nodez00_3866)));
						BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
							(BgL_zc3z04anonymousza31762ze3z87_3961,
							BgL_proczd2approxzd2_3951);
					}
				{
					BgL_procedurezd2refzd2appz00_bglt BgL_auxz00_4501;

					{
						obj_t BgL_auxz00_4502;

						{	/* Cfa/procedure.scm 210 */
							BgL_objectz00_bglt BgL_tmpz00_4503;

							BgL_tmpz00_4503 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3866));
							BgL_auxz00_4502 = BGL_OBJECT_WIDENING(BgL_tmpz00_4503);
						}
						BgL_auxz00_4501 =
							((BgL_procedurezd2refzd2appz00_bglt) BgL_auxz00_4502);
					}
					return
						(((BgL_procedurezd2refzd2appz00_bglt) COBJECT(BgL_auxz00_4501))->
						BgL_approxz00);
				}
			}
		}

	}



/* &<@anonymous:1743> */
	obj_t BGl_z62zc3z04anonymousza31743ze3ze5zzcfa_procedurez00(obj_t
		BgL_envz00_3867, obj_t BgL_appz00_3870)
	{
		{	/* Cfa/procedure.scm 180 */
			{	/* Cfa/procedure.scm 181 */
				BgL_appz00_bglt BgL_i1182z00_3868;
				obj_t BgL_offsetz00_3869;

				BgL_i1182z00_3868 =
					((BgL_appz00_bglt)
					PROCEDURE_REF(BgL_envz00_3867, (int) (((long) 0))));
				BgL_offsetz00_3869 = PROCEDURE_REF(BgL_envz00_3867, (int) (((long) 1)));
				{	/* Cfa/procedure.scm 181 */
					bool_t BgL_test2159z00_4514;

					if (BGl_isazf3zf3zz__objectz00(BgL_appz00_3870,
							BGl_makezd2procedurezd2appz00zzcfa_info2z00))
						{	/* Cfa/procedure.scm 184 */
							long BgL_arg1759z00_3962;

							{	/* Cfa/procedure.scm 184 */
								obj_t BgL_arg1760z00_3963;

								{
									BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4517;

									{
										obj_t BgL_auxz00_4518;

										{	/* Cfa/procedure.scm 184 */
											BgL_objectz00_bglt BgL_tmpz00_4519;

											BgL_tmpz00_4519 =
												((BgL_objectz00_bglt)
												((BgL_appz00_bglt) BgL_appz00_3870));
											BgL_auxz00_4518 = BGL_OBJECT_WIDENING(BgL_tmpz00_4519);
										}
										BgL_auxz00_4517 =
											((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_4518);
									}
									BgL_arg1760z00_3963 =
										(((BgL_makezd2procedurezd2appz00_bglt)
											COBJECT(BgL_auxz00_4517))->BgL_valueszd2approxzd2);
								}
								BgL_arg1759z00_3962 = VECTOR_LENGTH(BgL_arg1760z00_3963);
							}
							BgL_test2159z00_4514 =
								((long) CINT(BgL_offsetz00_3869) < BgL_arg1759z00_3962);
						}
					else
						{	/* Cfa/procedure.scm 181 */
							BgL_test2159z00_4514 = ((bool_t) 0);
						}
					if (BgL_test2159z00_4514)
						{	/* Cfa/procedure.scm 185 */
							BgL_approxz00_bglt BgL_arg1754z00_3964;
							obj_t BgL_arg1755z00_3965;

							{
								BgL_procedurezd2refzd2appz00_bglt BgL_auxz00_4528;

								{
									obj_t BgL_auxz00_4529;

									{	/* Cfa/procedure.scm 185 */
										BgL_objectz00_bglt BgL_tmpz00_4530;

										BgL_tmpz00_4530 = ((BgL_objectz00_bglt) BgL_i1182z00_3868);
										BgL_auxz00_4529 = BGL_OBJECT_WIDENING(BgL_tmpz00_4530);
									}
									BgL_auxz00_4528 =
										((BgL_procedurezd2refzd2appz00_bglt) BgL_auxz00_4529);
								}
								BgL_arg1754z00_3964 =
									(((BgL_procedurezd2refzd2appz00_bglt)
										COBJECT(BgL_auxz00_4528))->BgL_approxz00);
							}
							{	/* Cfa/procedure.scm 187 */
								obj_t BgL_arg1756z00_3966;

								{
									BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4535;

									{
										obj_t BgL_auxz00_4536;

										{	/* Cfa/procedure.scm 187 */
											BgL_objectz00_bglt BgL_tmpz00_4537;

											BgL_tmpz00_4537 =
												((BgL_objectz00_bglt)
												((BgL_appz00_bglt) BgL_appz00_3870));
											BgL_auxz00_4536 = BGL_OBJECT_WIDENING(BgL_tmpz00_4537);
										}
										BgL_auxz00_4535 =
											((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_4536);
									}
									BgL_arg1756z00_3966 =
										(((BgL_makezd2procedurezd2appz00_bglt)
											COBJECT(BgL_auxz00_4535))->BgL_valueszd2approxzd2);
								}
								BgL_arg1755z00_3965 =
									VECTOR_REF(BgL_arg1756z00_3966,
									(long) CINT(BgL_offsetz00_3869));
							}
							return
								((obj_t)
								BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg1754z00_3964,
									((BgL_approxz00_bglt) BgL_arg1755z00_3965)));
						}
					else
						{	/* Cfa/procedure.scm 191 */
							BgL_approxz00_bglt BgL_arg1757z00_3967;

							{
								BgL_procedurezd2refzd2appz00_bglt BgL_auxz00_4548;

								{
									obj_t BgL_auxz00_4549;

									{	/* Cfa/procedure.scm 191 */
										BgL_objectz00_bglt BgL_tmpz00_4550;

										BgL_tmpz00_4550 = ((BgL_objectz00_bglt) BgL_i1182z00_3868);
										BgL_auxz00_4549 = BGL_OBJECT_WIDENING(BgL_tmpz00_4550);
									}
									BgL_auxz00_4548 =
										((BgL_procedurezd2refzd2appz00_bglt) BgL_auxz00_4549);
								}
								BgL_arg1757z00_3967 =
									(((BgL_procedurezd2refzd2appz00_bglt)
										COBJECT(BgL_auxz00_4548))->BgL_approxz00);
							}
							return
								BGl_approxzd2setzd2topz12z12zzcfa_approxz00
								(BgL_arg1757z00_3967);
						}
				}
			}
		}

	}



/* &<@anonymous:1762> */
	obj_t BGl_z62zc3z04anonymousza31762ze3ze5zzcfa_procedurez00(obj_t
		BgL_envz00_3871, obj_t BgL_appz00_3873)
	{
		{	/* Cfa/procedure.scm 195 */
			{	/* Cfa/procedure.scm 196 */
				BgL_appz00_bglt BgL_i1182z00_3872;

				BgL_i1182z00_3872 =
					((BgL_appz00_bglt)
					PROCEDURE_REF(BgL_envz00_3871, (int) (((long) 0))));
				{	/* Cfa/procedure.scm 196 */
					bool_t BgL_tmpz00_4559;

					if (BGl_isazf3zf3zz__objectz00(BgL_appz00_3873,
							BGl_makezd2procedurezd2appz00zzcfa_info2z00))
						{	/* Cfa/procedure.scm 197 */
							long BgL_lenz00_3968;

							{	/* Cfa/procedure.scm 198 */
								obj_t BgL_arg1779z00_3969;

								{
									BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4562;

									{
										obj_t BgL_auxz00_4563;

										{	/* Cfa/procedure.scm 198 */
											BgL_objectz00_bglt BgL_tmpz00_4564;

											BgL_tmpz00_4564 =
												((BgL_objectz00_bglt)
												((BgL_appz00_bglt) BgL_appz00_3873));
											BgL_auxz00_4563 = BGL_OBJECT_WIDENING(BgL_tmpz00_4564);
										}
										BgL_auxz00_4562 =
											((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_4563);
									}
									BgL_arg1779z00_3969 =
										(((BgL_makezd2procedurezd2appz00_bglt)
											COBJECT(BgL_auxz00_4562))->BgL_valueszd2approxzd2);
								}
								BgL_lenz00_3968 = VECTOR_LENGTH(BgL_arg1779z00_3969);
							}
							{
								long BgL_iz00_3971;

								BgL_iz00_3971 = ((long) 0);
							BgL_loopz00_3970:
								if ((BgL_iz00_3971 < BgL_lenz00_3968))
									{	/* Cfa/procedure.scm 200 */
										{	/* Cfa/procedure.scm 202 */
											BgL_approxz00_bglt BgL_arg1768z00_3972;
											obj_t BgL_arg1771z00_3973;

											{
												BgL_procedurezd2refzd2appz00_bglt BgL_auxz00_4573;

												{
													obj_t BgL_auxz00_4574;

													{	/* Cfa/procedure.scm 202 */
														BgL_objectz00_bglt BgL_tmpz00_4575;

														BgL_tmpz00_4575 =
															((BgL_objectz00_bglt) BgL_i1182z00_3872);
														BgL_auxz00_4574 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_4575);
													}
													BgL_auxz00_4573 =
														((BgL_procedurezd2refzd2appz00_bglt)
														BgL_auxz00_4574);
												}
												BgL_arg1768z00_3972 =
													(((BgL_procedurezd2refzd2appz00_bglt)
														COBJECT(BgL_auxz00_4573))->BgL_approxz00);
											}
											{	/* Cfa/procedure.scm 205 */
												obj_t BgL_arg1775z00_3974;

												{
													BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4580;

													{
														obj_t BgL_auxz00_4581;

														{	/* Cfa/procedure.scm 205 */
															BgL_objectz00_bglt BgL_tmpz00_4582;

															BgL_tmpz00_4582 =
																((BgL_objectz00_bglt)
																((BgL_appz00_bglt) BgL_appz00_3873));
															BgL_auxz00_4581 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_4582);
														}
														BgL_auxz00_4580 =
															((BgL_makezd2procedurezd2appz00_bglt)
															BgL_auxz00_4581);
													}
													BgL_arg1775z00_3974 =
														(((BgL_makezd2procedurezd2appz00_bglt)
															COBJECT(BgL_auxz00_4580))->
														BgL_valueszd2approxzd2);
												}
												BgL_arg1771z00_3973 =
													VECTOR_REF(BgL_arg1775z00_3974, BgL_iz00_3971);
											}
											BGl_unionzd2approxz12zc0zzcfa_approxz00
												(BgL_arg1768z00_3972,
												((BgL_approxz00_bglt) BgL_arg1771z00_3973));
										}
										{
											long BgL_iz00_4591;

											BgL_iz00_4591 = (BgL_iz00_3971 + ((long) 1));
											BgL_iz00_3971 = BgL_iz00_4591;
											goto BgL_loopz00_3970;
										}
									}
								else
									{	/* Cfa/procedure.scm 200 */
										BgL_tmpz00_4559 = ((bool_t) 0);
									}
							}
						}
					else
						{	/* Cfa/procedure.scm 196 */
							BgL_tmpz00_4559 = ((bool_t) 0);
						}
					return BBOOL(BgL_tmpz00_4559);
				}
			}
		}

	}



/* &cfa!-make-procedure-1520 */
	BgL_approxz00_bglt
		BGl_z62cfaz12zd2makezd2procedurezd21520za2zzcfa_procedurez00(obj_t
		BgL_envz00_3874, obj_t BgL_nodez00_3875)
	{
		{	/* Cfa/procedure.scm 144 */
			{	/* Cfa/procedure.scm 148 */
				obj_t BgL_procz00_3976;

				{	/* Cfa/procedure.scm 148 */
					obj_t BgL_pairz00_3977;

					BgL_pairz00_3977 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_nodez00_3875))))->BgL_argsz00);
					BgL_procz00_3976 = CAR(BgL_pairz00_3977);
				}
				{	/* Cfa/procedure.scm 148 */
					BgL_valuez00_bglt BgL_funz00_3978;

					BgL_funz00_3978 =
						(((BgL_variablez00_bglt) COBJECT(
								(((BgL_varz00_bglt) COBJECT(
											((BgL_varz00_bglt) BgL_procz00_3976)))->
									BgL_variablez00)))->BgL_valuez00);
					{	/* Cfa/procedure.scm 149 */
						obj_t BgL_envz00_3979;

						{	/* Cfa/procedure.scm 150 */
							obj_t BgL_pairz00_3980;

							BgL_pairz00_3980 =
								(((BgL_sfunz00_bglt) COBJECT(
										((BgL_sfunz00_bglt) BgL_funz00_3978)))->BgL_argsz00);
							BgL_envz00_3979 = CAR(BgL_pairz00_3980);
						}
						{	/* Cfa/procedure.scm 150 */

							{	/* Cfa/procedure.scm 157 */
								BgL_approxz00_bglt BgL_arg1712z00_3981;
								BgL_approxz00_bglt BgL_arg1719z00_3982;

								{	/* Cfa/procedure.scm 157 */
									BgL_svarz00_bglt BgL_oz00_3983;

									BgL_oz00_3983 =
										((BgL_svarz00_bglt)
										(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt) BgL_envz00_3979))))->
											BgL_valuez00));
									{
										BgL_svarzf2cinfozf2_bglt BgL_auxz00_4608;

										{
											obj_t BgL_auxz00_4609;

											{	/* Cfa/procedure.scm 157 */
												BgL_objectz00_bglt BgL_tmpz00_4610;

												BgL_tmpz00_4610 = ((BgL_objectz00_bglt) BgL_oz00_3983);
												BgL_auxz00_4609 = BGL_OBJECT_WIDENING(BgL_tmpz00_4610);
											}
											BgL_auxz00_4608 =
												((BgL_svarzf2cinfozf2_bglt) BgL_auxz00_4609);
										}
										BgL_arg1712z00_3981 =
											(((BgL_svarzf2cinfozf2_bglt) COBJECT(BgL_auxz00_4608))->
											BgL_approxz00);
									}
								}
								{
									BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4615;

									{
										obj_t BgL_auxz00_4616;

										{	/* Cfa/procedure.scm 157 */
											BgL_objectz00_bglt BgL_tmpz00_4617;

											BgL_tmpz00_4617 =
												((BgL_objectz00_bglt)
												((BgL_appz00_bglt) BgL_nodez00_3875));
											BgL_auxz00_4616 = BGL_OBJECT_WIDENING(BgL_tmpz00_4617);
										}
										BgL_auxz00_4615 =
											((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_4616);
									}
									BgL_arg1719z00_3982 =
										(((BgL_makezd2procedurezd2appz00_bglt)
											COBJECT(BgL_auxz00_4615))->BgL_approxz00);
								}
								BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg1712z00_3981,
									BgL_arg1719z00_3982);
							}
						}
					}
				}
			}
			{	/* Cfa/procedure.scm 159 */
				obj_t BgL_g1509z00_3984;

				BgL_g1509z00_3984 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_nodez00_3875))))->BgL_argsz00);
				{
					obj_t BgL_l1507z00_3986;

					BgL_l1507z00_3986 = BgL_g1509z00_3984;
				BgL_zc3z04anonymousza31729ze3z87_3985:
					if (PAIRP(BgL_l1507z00_3986))
						{	/* Cfa/procedure.scm 159 */
							{	/* Cfa/procedure.scm 159 */
								obj_t BgL_arg1731z00_3987;

								BgL_arg1731z00_3987 = CAR(BgL_l1507z00_3986);
								BGl_cfaz12z12zzcfa_cfaz00(
									((BgL_nodez00_bglt) BgL_arg1731z00_3987));
							}
							{
								obj_t BgL_l1507z00_4632;

								BgL_l1507z00_4632 = CDR(BgL_l1507z00_3986);
								BgL_l1507z00_3986 = BgL_l1507z00_4632;
								goto BgL_zc3z04anonymousza31729ze3z87_3985;
							}
						}
					else
						{	/* Cfa/procedure.scm 159 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4634;

				{
					obj_t BgL_auxz00_4635;

					{	/* Cfa/procedure.scm 160 */
						BgL_objectz00_bglt BgL_tmpz00_4636;

						BgL_tmpz00_4636 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3875));
						BgL_auxz00_4635 = BGL_OBJECT_WIDENING(BgL_tmpz00_4636);
					}
					BgL_auxz00_4634 =
						((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_4635);
				}
				return
					(((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_4634))->
					BgL_approxz00);
			}
		}

	}



/* &node-setup!-pre-proc1518 */
	obj_t BGl_z62nodezd2setupz12zd2prezd2proc1518za2zzcfa_procedurez00(obj_t
		BgL_envz00_3876, obj_t BgL_nodez00_3877)
	{
		{	/* Cfa/procedure.scm 132 */
			BGl_addzd2procedurezd2refz12z12zzcfa_closurez00(
				((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3877)));
			{	/* Cfa/procedure.scm 135 */
				obj_t BgL_arg1697z00_3989;

				BgL_arg1697z00_3989 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_nodez00_3877))))->BgL_argsz00);
				BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg1697z00_3989);
			}
			{	/* Cfa/procedure.scm 136 */
				BgL_appz00_bglt BgL_nodez00_3990;

				{	/* Cfa/procedure.scm 136 */
					long BgL_arg1707z00_3991;

					{	/* Cfa/procedure.scm 136 */
						obj_t BgL_arg1708z00_3992;

						{	/* Cfa/procedure.scm 136 */
							obj_t BgL_arg1711z00_3993;

							{	/* Cfa/procedure.scm 136 */
								long BgL_arg1816z00_3994;

								{	/* Cfa/procedure.scm 136 */
									long BgL_arg1817z00_3995;

									{	/* Cfa/procedure.scm 136 */
										long BgL_res2073z00_3996;

										BgL_res2073z00_3996 =
											BGL_OBJECT_CLASS_NUM(
											((BgL_objectz00_bglt)
												((BgL_appz00_bglt) BgL_nodez00_3877)));
										BgL_arg1817z00_3995 = BgL_res2073z00_3996;
									}
									BgL_arg1816z00_3994 = (BgL_arg1817z00_3995 - OBJECT_TYPE);
								}
								BgL_arg1711z00_3993 =
									VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
									BgL_arg1816z00_3994);
							}
							BgL_arg1708z00_3992 =
								BGl_classzd2superzd2zz__objectz00(BgL_arg1711z00_3993);
						}
						{	/* Cfa/procedure.scm 136 */
							long BgL_res2075z00_3997;

							{	/* Cfa/procedure.scm 136 */
								obj_t BgL_tmpz00_4655;

								BgL_tmpz00_4655 = ((obj_t) BgL_arg1708z00_3992);
								BgL_res2075z00_3997 = BGL_CLASS_INDEX(BgL_tmpz00_4655);
							}
							BgL_arg1707z00_3991 = BgL_res2075z00_3997;
					}}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt) BgL_nodez00_3877)), BgL_arg1707z00_3991);
				}
				{	/* Cfa/procedure.scm 136 */
					BgL_objectz00_bglt BgL_tmpz00_4661;

					BgL_tmpz00_4661 =
						((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3877));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4661, BFALSE);
				}
				((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3877));
				BgL_nodez00_3990 = ((BgL_appz00_bglt) BgL_nodez00_3877);
				{	/* Cfa/procedure.scm 137 */
					BgL_procedurezd2setz12zd2appz12_bglt BgL_wide1178z00_3998;

					BgL_wide1178z00_3998 =
						((BgL_procedurezd2setz12zd2appz12_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_procedurezd2setz12zd2appz12_bgl))));
					{	/* Cfa/procedure.scm 137 */
						obj_t BgL_auxz00_4673;
						BgL_objectz00_bglt BgL_tmpz00_4669;

						BgL_auxz00_4673 = ((obj_t) BgL_wide1178z00_3998);
						BgL_tmpz00_4669 =
							((BgL_objectz00_bglt)
							((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3990)));
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4669, BgL_auxz00_4673);
					}
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3990)));
					{	/* Cfa/procedure.scm 137 */
						long BgL_arg1704z00_3999;

						{	/* Cfa/procedure.scm 137 */
							long BgL_res2076z00_4000;

							BgL_res2076z00_4000 =
								BGL_CLASS_INDEX(BGl_procedurezd2setz12zd2appz12zzcfa_info2z00);
							BgL_arg1704z00_3999 = BgL_res2076z00_4000;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt)
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_nodez00_3990))), BgL_arg1704z00_3999);
					}
					((BgL_appz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3990)));
				}
				{
					BgL_procedurezd2setz12zd2appz12_bglt BgL_auxz00_4687;

					{
						obj_t BgL_auxz00_4688;

						{	/* Cfa/procedure.scm 139 */
							BgL_objectz00_bglt BgL_tmpz00_4689;

							BgL_tmpz00_4689 =
								((BgL_objectz00_bglt)
								((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3990)));
							BgL_auxz00_4688 = BGL_OBJECT_WIDENING(BgL_tmpz00_4689);
						}
						BgL_auxz00_4687 =
							((BgL_procedurezd2setz12zd2appz12_bglt) BgL_auxz00_4688);
					}
					((((BgL_procedurezd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_4687))->
							BgL_approxz00) =
						((BgL_approxz00_bglt)
							BGl_makezd2typezd2approxz00zzcfa_approxz00(((BgL_typez00_bglt)
									BGl_za2unspecza2z00zztype_cachez00))), BUNSPEC);
				}
				{
					BgL_procedurezd2setz12zd2appz12_bglt BgL_auxz00_4698;

					{
						obj_t BgL_auxz00_4699;

						{	/* Cfa/procedure.scm 138 */
							BgL_objectz00_bglt BgL_tmpz00_4700;

							BgL_tmpz00_4700 =
								((BgL_objectz00_bglt)
								((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3990)));
							BgL_auxz00_4699 = BGL_OBJECT_WIDENING(BgL_tmpz00_4700);
						}
						BgL_auxz00_4698 =
							((BgL_procedurezd2setz12zd2appz12_bglt) BgL_auxz00_4699);
					}
					((((BgL_procedurezd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_4698))->
							BgL_vapproxz00) =
						((obj_t) ((obj_t) BGl_makezd2emptyzd2approxz00zzcfa_approxz00())),
						BUNSPEC);
				}
				return
					((obj_t) ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3990)));
			}
		}

	}



/* &node-setup!-pre-proc1516 */
	obj_t BGl_z62nodezd2setupz12zd2prezd2proc1516za2zzcfa_procedurez00(obj_t
		BgL_envz00_3878, obj_t BgL_nodez00_3879)
	{
		{	/* Cfa/procedure.scm 119 */
			BGl_addzd2procedurezd2refz12z12zzcfa_closurez00(
				((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3879)));
			{	/* Cfa/procedure.scm 122 */
				obj_t BgL_arg1687z00_4002;

				BgL_arg1687z00_4002 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_nodez00_3879))))->BgL_argsz00);
				BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg1687z00_4002);
			}
			{	/* Cfa/procedure.scm 123 */
				BgL_appz00_bglt BgL_nodez00_4003;

				{	/* Cfa/procedure.scm 123 */
					long BgL_arg1692z00_4004;

					{	/* Cfa/procedure.scm 123 */
						obj_t BgL_arg1695z00_4005;

						{	/* Cfa/procedure.scm 123 */
							obj_t BgL_arg1696z00_4006;

							{	/* Cfa/procedure.scm 123 */
								long BgL_arg1816z00_4007;

								{	/* Cfa/procedure.scm 123 */
									long BgL_arg1817z00_4008;

									{	/* Cfa/procedure.scm 123 */
										long BgL_res2069z00_4009;

										BgL_res2069z00_4009 =
											BGL_OBJECT_CLASS_NUM(
											((BgL_objectz00_bglt)
												((BgL_appz00_bglt) BgL_nodez00_3879)));
										BgL_arg1817z00_4008 = BgL_res2069z00_4009;
									}
									BgL_arg1816z00_4007 = (BgL_arg1817z00_4008 - OBJECT_TYPE);
								}
								BgL_arg1696z00_4006 =
									VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
									BgL_arg1816z00_4007);
							}
							BgL_arg1695z00_4005 =
								BGl_classzd2superzd2zz__objectz00(BgL_arg1696z00_4006);
						}
						{	/* Cfa/procedure.scm 123 */
							long BgL_res2071z00_4010;

							{	/* Cfa/procedure.scm 123 */
								obj_t BgL_tmpz00_4725;

								BgL_tmpz00_4725 = ((obj_t) BgL_arg1695z00_4005);
								BgL_res2071z00_4010 = BGL_CLASS_INDEX(BgL_tmpz00_4725);
							}
							BgL_arg1692z00_4004 = BgL_res2071z00_4010;
					}}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt) BgL_nodez00_3879)), BgL_arg1692z00_4004);
				}
				{	/* Cfa/procedure.scm 123 */
					BgL_objectz00_bglt BgL_tmpz00_4731;

					BgL_tmpz00_4731 =
						((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3879));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4731, BFALSE);
				}
				((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3879));
				BgL_nodez00_4003 = ((BgL_appz00_bglt) BgL_nodez00_3879);
				{	/* Cfa/procedure.scm 124 */
					BgL_procedurezd2refzd2appz00_bglt BgL_wide1172z00_4011;

					BgL_wide1172z00_4011 =
						((BgL_procedurezd2refzd2appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_procedurezd2refzd2appz00_bgl))));
					{	/* Cfa/procedure.scm 124 */
						obj_t BgL_auxz00_4743;
						BgL_objectz00_bglt BgL_tmpz00_4739;

						BgL_auxz00_4743 = ((obj_t) BgL_wide1172z00_4011);
						BgL_tmpz00_4739 =
							((BgL_objectz00_bglt)
							((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4003)));
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4739, BgL_auxz00_4743);
					}
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4003)));
					{	/* Cfa/procedure.scm 124 */
						long BgL_arg1688z00_4012;

						{	/* Cfa/procedure.scm 124 */
							long BgL_res2072z00_4013;

							BgL_res2072z00_4013 =
								BGL_CLASS_INDEX(BGl_procedurezd2refzd2appz00zzcfa_info2z00);
							BgL_arg1688z00_4012 = BgL_res2072z00_4013;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt)
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_nodez00_4003))), BgL_arg1688z00_4012);
					}
					((BgL_appz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4003)));
				}
				{
					BgL_approxz00_bglt BgL_auxz00_4765;
					BgL_procedurezd2refzd2appz00_bglt BgL_auxz00_4757;

					if (CBOOL
						(BGl_za2optimzd2cfazd2freezd2varzd2trackingzf3za2zf3zzengine_paramz00))
						{	/* Cfa/procedure.scm 125 */
							BgL_auxz00_4765 = BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
						}
					else
						{	/* Cfa/procedure.scm 125 */
							BgL_auxz00_4765 =
								BGl_makezd2typezd2approxz00zzcfa_approxz00(
								((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
						}
					{
						obj_t BgL_auxz00_4758;

						{	/* Cfa/procedure.scm 125 */
							BgL_objectz00_bglt BgL_tmpz00_4759;

							BgL_tmpz00_4759 =
								((BgL_objectz00_bglt)
								((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4003)));
							BgL_auxz00_4758 = BGL_OBJECT_WIDENING(BgL_tmpz00_4759);
						}
						BgL_auxz00_4757 =
							((BgL_procedurezd2refzd2appz00_bglt) BgL_auxz00_4758);
					}
					((((BgL_procedurezd2refzd2appz00_bglt) COBJECT(BgL_auxz00_4757))->
							BgL_approxz00) = ((BgL_approxz00_bglt) BgL_auxz00_4765), BUNSPEC);
				}
				return
					((obj_t) ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4003)));
			}
		}

	}



/* &node-setup!-pre-make1514 */
	obj_t BGl_z62nodezd2setupz12zd2prezd2make1514za2zzcfa_procedurez00(obj_t
		BgL_envz00_3880, obj_t BgL_nodez00_3881)
	{
		{	/* Cfa/procedure.scm 60 */
			{

				{
					obj_t BgL_lenz00_4024;
					obj_t BgL_lenz00_4019;

					BGl_addzd2makezd2procedurez12z12zzcfa_closurez00(
						((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3881)));
					{	/* Cfa/procedure.scm 79 */
						obj_t BgL_arg1597z00_4029;

						BgL_arg1597z00_4029 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_nodez00_3881))))->BgL_argsz00);
						BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg1597z00_4029);
					}
					{	/* Cfa/procedure.scm 80 */
						BgL_variablez00_bglt BgL_ownerz00_4030;

						{
							BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_auxz00_4782;

							{
								obj_t BgL_auxz00_4783;

								{	/* Cfa/procedure.scm 80 */
									BgL_objectz00_bglt BgL_tmpz00_4784;

									BgL_tmpz00_4784 =
										((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3881));
									BgL_auxz00_4783 = BGL_OBJECT_WIDENING(BgL_tmpz00_4784);
								}
								BgL_auxz00_4782 =
									((BgL_prezd2makezd2procedurezd2appzd2_bglt) BgL_auxz00_4783);
							}
							BgL_ownerz00_4030 =
								(((BgL_prezd2makezd2procedurezd2appzd2_bglt)
									COBJECT(BgL_auxz00_4782))->BgL_ownerz00);
						}
						{	/* Cfa/procedure.scm 80 */
							BgL_appz00_bglt BgL_nodez00_4031;

							{	/* Cfa/procedure.scm 81 */
								long BgL_arg1652z00_4032;

								{	/* Cfa/procedure.scm 81 */
									obj_t BgL_arg1662z00_4033;

									{	/* Cfa/procedure.scm 81 */
										obj_t BgL_arg1663z00_4034;

										{	/* Cfa/procedure.scm 81 */
											long BgL_arg1816z00_4035;

											{	/* Cfa/procedure.scm 81 */
												long BgL_arg1817z00_4036;

												{	/* Cfa/procedure.scm 81 */
													long BgL_res2060z00_4037;

													BgL_res2060z00_4037 =
														BGL_OBJECT_CLASS_NUM(
														((BgL_objectz00_bglt)
															((BgL_appz00_bglt) BgL_nodez00_3881)));
													BgL_arg1817z00_4036 = BgL_res2060z00_4037;
												}
												BgL_arg1816z00_4035 =
													(BgL_arg1817z00_4036 - OBJECT_TYPE);
											}
											BgL_arg1663z00_4034 =
												VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
												BgL_arg1816z00_4035);
										}
										BgL_arg1662z00_4033 =
											BGl_classzd2superzd2zz__objectz00(BgL_arg1663z00_4034);
									}
									{	/* Cfa/procedure.scm 81 */
										long BgL_res2062z00_4038;

										{	/* Cfa/procedure.scm 81 */
											obj_t BgL_tmpz00_4796;

											BgL_tmpz00_4796 = ((obj_t) BgL_arg1662z00_4033);
											BgL_res2062z00_4038 = BGL_CLASS_INDEX(BgL_tmpz00_4796);
										}
										BgL_arg1652z00_4032 = BgL_res2062z00_4038;
								}}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt)
										((BgL_appz00_bglt) BgL_nodez00_3881)), BgL_arg1652z00_4032);
							}
							{	/* Cfa/procedure.scm 81 */
								BgL_objectz00_bglt BgL_tmpz00_4802;

								BgL_tmpz00_4802 =
									((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3881));
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4802, BFALSE);
							}
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3881));
							BgL_nodez00_4031 = ((BgL_appz00_bglt) BgL_nodez00_3881);
							{	/* Cfa/procedure.scm 81 */

								{	/* Cfa/procedure.scm 82 */
									obj_t BgL_proczd2siza7ez75_4039;
									obj_t BgL_procz00_4040;

									{	/* Cfa/procedure.scm 82 */
										obj_t BgL_arg1640z00_4041;

										{	/* Cfa/procedure.scm 82 */
											obj_t BgL_pairz00_4042;

											BgL_pairz00_4042 =
												(((BgL_appz00_bglt) COBJECT(
														((BgL_appz00_bglt)
															((BgL_appz00_bglt) BgL_nodez00_3881))))->
												BgL_argsz00);
											BgL_arg1640z00_4041 = CAR(CDR(CDR(BgL_pairz00_4042)));
										}
										BgL_proczd2siza7ez75_4039 =
											BGl_getzd2nodezd2atomzd2valuezd2zzcfa_approxz00(
											((BgL_nodez00_bglt) BgL_arg1640z00_4041));
									}
									{	/* Cfa/procedure.scm 83 */
										obj_t BgL_pairz00_4043;

										BgL_pairz00_4043 =
											(((BgL_appz00_bglt) COBJECT(
													((BgL_appz00_bglt)
														((BgL_appz00_bglt) BgL_nodez00_3881))))->
											BgL_argsz00);
										BgL_procz00_4040 = CAR(BgL_pairz00_4043);
									}
									{	/* Cfa/procedure.scm 84 */
										bool_t BgL_test2165z00_4821;

										if (INTEGERP(BgL_proczd2siza7ez75_4039))
											{	/* Cfa/procedure.scm 84 */
												if (BGl_isazf3zf3zz__objectz00(BgL_procz00_4040,
														BGl_varz00zzast_nodez00))
													{	/* Cfa/procedure.scm 86 */
														BgL_valuez00_bglt BgL_arg1634z00_4044;

														BgL_arg1634z00_4044 =
															(((BgL_variablez00_bglt) COBJECT(
																	(((BgL_varz00_bglt) COBJECT(
																				((BgL_varz00_bglt) BgL_procz00_4040)))->
																		BgL_variablez00)))->BgL_valuez00);
														{	/* Cfa/procedure.scm 86 */
															bool_t BgL_res2065z00_4045;

															BgL_res2065z00_4045 =
																BGl_isazf3zf3zz__objectz00(
																((obj_t) BgL_arg1634z00_4044),
																BGl_funz00zzast_varz00);
															BgL_test2165z00_4821 = BgL_res2065z00_4045;
														}
													}
												else
													{	/* Cfa/procedure.scm 85 */
														BgL_test2165z00_4821 = ((bool_t) 0);
													}
											}
										else
											{	/* Cfa/procedure.scm 84 */
												BgL_test2165z00_4821 = ((bool_t) 0);
											}
										if (BgL_test2165z00_4821)
											{	/* Cfa/procedure.scm 87 */
												obj_t BgL_vapproxz00_4046;

												if (CBOOL
													(BGl_za2optimzd2cfazd2freezd2varzd2trackingzf3za2zf3zzengine_paramz00))
													{	/* Cfa/procedure.scm 87 */
														BgL_lenz00_4019 = BgL_proczd2siza7ez75_4039;
														{	/* Cfa/procedure.scm 70 */
															obj_t BgL_resz00_4020;

															BgL_resz00_4020 =
																make_vector(
																(long) CINT(BgL_lenz00_4019), BUNSPEC);
															{
																long BgL_iz00_4022;

																BgL_iz00_4022 = ((long) 0);
															BgL_loopz00_4021:
																if (
																	(BgL_iz00_4022 ==
																		(long) CINT(BgL_lenz00_4019)))
																	{	/* Cfa/procedure.scm 72 */
																		BgL_vapproxz00_4046 = BgL_resz00_4020;
																	}
																else
																	{	/* Cfa/procedure.scm 72 */
																		{	/* Cfa/procedure.scm 75 */
																			BgL_approxz00_bglt BgL_arg1684z00_4023;

																			BgL_arg1684z00_4023 =
																				BGl_makezd2emptyzd2approxz00zzcfa_approxz00
																				();
																			VECTOR_SET(BgL_resz00_4020, BgL_iz00_4022,
																				((obj_t) BgL_arg1684z00_4023));
																		}
																		{
																			long BgL_iz00_4841;

																			BgL_iz00_4841 =
																				(BgL_iz00_4022 + ((long) 1));
																			BgL_iz00_4022 = BgL_iz00_4841;
																			goto BgL_loopz00_4021;
																		}
																	}
															}
														}
													}
												else
													{	/* Cfa/procedure.scm 87 */
														BgL_lenz00_4024 = BgL_proczd2siza7ez75_4039;
														{	/* Cfa/procedure.scm 62 */
															obj_t BgL_resz00_4025;

															BgL_resz00_4025 =
																make_vector(
																(long) CINT(BgL_lenz00_4024), BUNSPEC);
															{
																long BgL_iz00_4027;

																BgL_iz00_4027 = ((long) 0);
															BgL_loopz00_4026:
																if (
																	(BgL_iz00_4027 ==
																		(long) CINT(BgL_lenz00_4024)))
																	{	/* Cfa/procedure.scm 64 */
																		BgL_vapproxz00_4046 = BgL_resz00_4025;
																	}
																else
																	{	/* Cfa/procedure.scm 64 */
																		{	/* Cfa/procedure.scm 67 */
																			BgL_approxz00_bglt BgL_arg1667z00_4028;

																			BgL_arg1667z00_4028 =
																				BGl_makezd2typezd2approxz00zzcfa_approxz00
																				(((BgL_typez00_bglt)
																					BGl_za2objza2z00zztype_cachez00));
																			VECTOR_SET(BgL_resz00_4025, BgL_iz00_4027,
																				((obj_t) BgL_arg1667z00_4028));
																		}
																		{
																			long BgL_iz00_4852;

																			BgL_iz00_4852 =
																				(BgL_iz00_4027 + ((long) 1));
																			BgL_iz00_4027 = BgL_iz00_4852;
																			goto BgL_loopz00_4026;
																		}
																	}
															}
														}
													}
												{	/* Cfa/procedure.scm 87 */
													BgL_appz00_bglt BgL_nodez00_4047;

													{	/* Cfa/procedure.scm 90 */
														BgL_makezd2procedurezd2appz00_bglt
															BgL_wide1162z00_4048;
														BgL_wide1162z00_4048 =
															((BgL_makezd2procedurezd2appz00_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_makezd2procedurezd2appz00_bgl))));
														{	/* Cfa/procedure.scm 90 */
															obj_t BgL_auxz00_4859;
															BgL_objectz00_bglt BgL_tmpz00_4855;

															BgL_auxz00_4859 = ((obj_t) BgL_wide1162z00_4048);
															BgL_tmpz00_4855 =
																((BgL_objectz00_bglt)
																((BgL_appz00_bglt)
																	((BgL_appz00_bglt) BgL_nodez00_4031)));
															BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4855,
																BgL_auxz00_4859);
														}
														((BgL_objectz00_bglt)
															((BgL_appz00_bglt)
																((BgL_appz00_bglt) BgL_nodez00_4031)));
														{	/* Cfa/procedure.scm 90 */
															long BgL_arg1631z00_4049;

															{	/* Cfa/procedure.scm 90 */
																long BgL_res2066z00_4050;

																BgL_res2066z00_4050 =
																	BGL_CLASS_INDEX
																	(BGl_makezd2procedurezd2appz00zzcfa_info2z00);
																BgL_arg1631z00_4049 = BgL_res2066z00_4050;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt)
																	((BgL_appz00_bglt)
																		((BgL_appz00_bglt) BgL_nodez00_4031))),
																BgL_arg1631z00_4049);
														}
														((BgL_appz00_bglt)
															((BgL_appz00_bglt)
																((BgL_appz00_bglt) BgL_nodez00_4031)));
													}
													{
														BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4873;

														{
															obj_t BgL_auxz00_4874;

															{	/* Cfa/procedure.scm 92 */
																BgL_objectz00_bglt BgL_tmpz00_4875;

																BgL_tmpz00_4875 =
																	((BgL_objectz00_bglt)
																	((BgL_appz00_bglt)
																		((BgL_appz00_bglt) BgL_nodez00_4031)));
																BgL_auxz00_4874 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_4875);
															}
															BgL_auxz00_4873 =
																((BgL_makezd2procedurezd2appz00_bglt)
																BgL_auxz00_4874);
														}
														((((BgL_makezd2procedurezd2appz00_bglt)
																	COBJECT(BgL_auxz00_4873))->BgL_approxz00) =
															((BgL_approxz00_bglt)
																BGl_makezd2emptyzd2approxz00zzcfa_approxz00()),
															BUNSPEC);
													}
													{
														BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4883;

														{
															obj_t BgL_auxz00_4884;

															{	/* Cfa/procedure.scm 93 */
																BgL_objectz00_bglt BgL_tmpz00_4885;

																BgL_tmpz00_4885 =
																	((BgL_objectz00_bglt)
																	((BgL_appz00_bglt)
																		((BgL_appz00_bglt) BgL_nodez00_4031)));
																BgL_auxz00_4884 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_4885);
															}
															BgL_auxz00_4883 =
																((BgL_makezd2procedurezd2appz00_bglt)
																BgL_auxz00_4884);
														}
														((((BgL_makezd2procedurezd2appz00_bglt)
																	COBJECT(BgL_auxz00_4883))->
																BgL_valueszd2approxzd2) =
															((obj_t) BgL_vapproxz00_4046), BUNSPEC);
													}
													{
														BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4892;

														{
															obj_t BgL_auxz00_4893;

															{	/* Cfa/procedure.scm 87 */
																BgL_objectz00_bglt BgL_tmpz00_4894;

																BgL_tmpz00_4894 =
																	((BgL_objectz00_bglt)
																	((BgL_appz00_bglt)
																		((BgL_appz00_bglt) BgL_nodez00_4031)));
																BgL_auxz00_4893 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_4894);
															}
															BgL_auxz00_4892 =
																((BgL_makezd2procedurezd2appz00_bglt)
																BgL_auxz00_4893);
														}
														((((BgL_makezd2procedurezd2appz00_bglt)
																	COBJECT(BgL_auxz00_4892))->
																BgL_lostzd2stampzd2) =
															((long) ((long) -1)), BUNSPEC);
													}
													{
														BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4901;

														{
															obj_t BgL_auxz00_4902;

															{	/* Cfa/procedure.scm 87 */
																BgL_objectz00_bglt BgL_tmpz00_4903;

																BgL_tmpz00_4903 =
																	((BgL_objectz00_bglt)
																	((BgL_appz00_bglt)
																		((BgL_appz00_bglt) BgL_nodez00_4031)));
																BgL_auxz00_4902 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_4903);
															}
															BgL_auxz00_4901 =
																((BgL_makezd2procedurezd2appz00_bglt)
																BgL_auxz00_4902);
														}
														((((BgL_makezd2procedurezd2appz00_bglt)
																	COBJECT(BgL_auxz00_4901))->BgL_xzd2tzf3z21) =
															((bool_t) ((bool_t) 1)), BUNSPEC);
													}
													{
														BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4910;

														{
															obj_t BgL_auxz00_4911;

															{	/* Cfa/procedure.scm 87 */
																BgL_objectz00_bglt BgL_tmpz00_4912;

																BgL_tmpz00_4912 =
																	((BgL_objectz00_bglt)
																	((BgL_appz00_bglt)
																		((BgL_appz00_bglt) BgL_nodez00_4031)));
																BgL_auxz00_4911 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_4912);
															}
															BgL_auxz00_4910 =
																((BgL_makezd2procedurezd2appz00_bglt)
																BgL_auxz00_4911);
														}
														((((BgL_makezd2procedurezd2appz00_bglt)
																	COBJECT(BgL_auxz00_4910))->BgL_xz00) =
															((bool_t) ((bool_t) 0)), BUNSPEC);
													}
													{
														BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4919;

														{
															obj_t BgL_auxz00_4920;

															{	/* Cfa/procedure.scm 87 */
																BgL_objectz00_bglt BgL_tmpz00_4921;

																BgL_tmpz00_4921 =
																	((BgL_objectz00_bglt)
																	((BgL_appz00_bglt)
																		((BgL_appz00_bglt) BgL_nodez00_4031)));
																BgL_auxz00_4920 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_4921);
															}
															BgL_auxz00_4919 =
																((BgL_makezd2procedurezd2appz00_bglt)
																BgL_auxz00_4920);
														}
														((((BgL_makezd2procedurezd2appz00_bglt)
																	COBJECT(BgL_auxz00_4919))->BgL_tz00) =
															((bool_t) ((bool_t) 0)), BUNSPEC);
													}
													{
														BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4928;

														{
															obj_t BgL_auxz00_4929;

															{	/* Cfa/procedure.scm 91 */
																BgL_objectz00_bglt BgL_tmpz00_4930;

																BgL_tmpz00_4930 =
																	((BgL_objectz00_bglt)
																	((BgL_appz00_bglt)
																		((BgL_appz00_bglt) BgL_nodez00_4031)));
																BgL_auxz00_4929 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_4930);
															}
															BgL_auxz00_4928 =
																((BgL_makezd2procedurezd2appz00_bglt)
																BgL_auxz00_4929);
														}
														((((BgL_makezd2procedurezd2appz00_bglt)
																	COBJECT(BgL_auxz00_4928))->BgL_ownerz00) =
															((BgL_variablez00_bglt) BgL_ownerz00_4030),
															BUNSPEC);
													}
													{
														BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4937;

														{
															obj_t BgL_auxz00_4938;

															{	/* Cfa/procedure.scm 87 */
																BgL_objectz00_bglt BgL_tmpz00_4939;

																BgL_tmpz00_4939 =
																	((BgL_objectz00_bglt)
																	((BgL_appz00_bglt)
																		((BgL_appz00_bglt) BgL_nodez00_4031)));
																BgL_auxz00_4938 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_4939);
															}
															BgL_auxz00_4937 =
																((BgL_makezd2procedurezd2appz00_bglt)
																BgL_auxz00_4938);
														}
														((((BgL_makezd2procedurezd2appz00_bglt)
																	COBJECT(BgL_auxz00_4937))->
																BgL_stackzd2stampzd2) =
															((obj_t) BNIL), BUNSPEC);
													}
													BgL_nodez00_4047 =
														((BgL_appz00_bglt)
														((BgL_appz00_bglt) BgL_nodez00_4031));
													{	/* Cfa/procedure.scm 90 */

														{	/* Cfa/procedure.scm 99 */
															BgL_approxz00_bglt BgL_arg1611z00_4051;

															BgL_arg1611z00_4051 =
																BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00
																(((BgL_typez00_bglt)
																	BGl_za2procedureza2z00zztype_cachez00),
																((BgL_nodez00_bglt) BgL_nodez00_4047));
															{
																BgL_makezd2procedurezd2appz00_bglt
																	BgL_auxz00_4951;
																{
																	obj_t BgL_auxz00_4952;

																	{	/* Cfa/procedure.scm 97 */
																		BgL_objectz00_bglt BgL_tmpz00_4953;

																		BgL_tmpz00_4953 =
																			((BgL_objectz00_bglt) BgL_nodez00_4047);
																		BgL_auxz00_4952 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_4953);
																	}
																	BgL_auxz00_4951 =
																		((BgL_makezd2procedurezd2appz00_bglt)
																		BgL_auxz00_4952);
																}
																((((BgL_makezd2procedurezd2appz00_bglt)
																			COBJECT(BgL_auxz00_4951))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_arg1611z00_4051),
																	BUNSPEC);
														}}
														{	/* Cfa/procedure.scm 102 */
															obj_t BgL_cloz00_4052;

															{	/* Cfa/procedure.scm 102 */
																obj_t BgL_pairz00_4053;

																BgL_pairz00_4053 =
																	(((BgL_sfunz00_bglt) COBJECT(
																			((BgL_sfunz00_bglt)
																				(((BgL_variablez00_bglt) COBJECT(
																							(((BgL_varz00_bglt) COBJECT(
																										((BgL_varz00_bglt)
																											BgL_procz00_4040)))->
																								BgL_variablez00)))->
																					BgL_valuez00))))->BgL_argsz00);
																BgL_cloz00_4052 = CAR(BgL_pairz00_4053);
															}
															{	/* Cfa/procedure.scm 102 */
																BgL_valuez00_bglt BgL_vcloz00_4054;

																BgL_vcloz00_4054 =
																	(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_localz00_bglt)
																					BgL_cloz00_4052))))->BgL_valuez00);
																{	/* Cfa/procedure.scm 105 */

																	{	/* Cfa/procedure.scm 106 */
																		bool_t BgL_test2171z00_4967;

																		{	/* Cfa/procedure.scm 106 */
																			bool_t BgL_res2067z00_4055;

																			BgL_res2067z00_4055 =
																				BGl_isazf3zf3zz__objectz00(
																				((obj_t) BgL_vcloz00_4054),
																				BGl_svarzf2Cinfozf2zzcfa_infoz00);
																			BgL_test2171z00_4967 =
																				BgL_res2067z00_4055;
																		}
																		if (BgL_test2171z00_4967)
																			{	/* Cfa/procedure.scm 106 */
																				{
																					BgL_svarzf2cinfozf2_bglt
																						BgL_auxz00_4970;
																					{
																						obj_t BgL_auxz00_4971;

																						{	/* Cfa/procedure.scm 110 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_4972;
																							BgL_tmpz00_4972 =
																								((BgL_objectz00_bglt) (
																									(BgL_svarz00_bglt)
																									BgL_vcloz00_4054));
																							BgL_auxz00_4971 =
																								BGL_OBJECT_WIDENING
																								(BgL_tmpz00_4972);
																						}
																						BgL_auxz00_4970 =
																							((BgL_svarzf2cinfozf2_bglt)
																							BgL_auxz00_4971);
																					}
																					return
																						((((BgL_svarzf2cinfozf2_bglt)
																								COBJECT(BgL_auxz00_4970))->
																							BgL_clozd2envzf3z21) =
																						((bool_t) ((bool_t) 1)), BUNSPEC);
																				}
																			}
																		else
																			{	/* Cfa/procedure.scm 106 */
																				{	/* Cfa/procedure.scm 111 */
																					BgL_prezd2clozd2envz00_bglt
																						BgL_wide1166z00_4056;
																					BgL_wide1166z00_4056 =
																						((BgL_prezd2clozd2envz00_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_prezd2clozd2envz00_bgl))));
																					{	/* Cfa/procedure.scm 111 */
																						obj_t BgL_auxz00_4983;
																						BgL_objectz00_bglt BgL_tmpz00_4979;

																						BgL_auxz00_4983 =
																							((obj_t) BgL_wide1166z00_4056);
																						BgL_tmpz00_4979 =
																							((BgL_objectz00_bglt)
																							((BgL_svarz00_bglt)
																								((BgL_svarz00_bglt)
																									BgL_vcloz00_4054)));
																						BGL_OBJECT_WIDENING_SET
																							(BgL_tmpz00_4979,
																							BgL_auxz00_4983);
																					}
																					((BgL_objectz00_bglt)
																						((BgL_svarz00_bglt)
																							((BgL_svarz00_bglt)
																								BgL_vcloz00_4054)));
																					{	/* Cfa/procedure.scm 111 */
																						long BgL_arg1613z00_4057;

																						{	/* Cfa/procedure.scm 111 */
																							long BgL_res2068z00_4058;

																							BgL_res2068z00_4058 =
																								BGL_CLASS_INDEX
																								(BGl_prezd2clozd2envz00zzcfa_infoz00);
																							BgL_arg1613z00_4057 =
																								BgL_res2068z00_4058;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								((BgL_svarz00_bglt)
																									((BgL_svarz00_bglt)
																										BgL_vcloz00_4054))),
																							BgL_arg1613z00_4057);
																					}
																					((BgL_svarz00_bglt)
																						((BgL_svarz00_bglt)
																							((BgL_svarz00_bglt)
																								BgL_vcloz00_4054)));
																				}
																				return
																					((obj_t)
																					((BgL_svarz00_bglt)
																						((BgL_svarz00_bglt)
																							BgL_vcloz00_4054)));
																			}
																	}
																}
															}
														}
													}
												}
											}
										else
											{	/* Cfa/procedure.scm 84 */
												{	/* Cfa/procedure.scm 60 */
													obj_t BgL_nextzd2method1513zd2_4016;

													BgL_nextzd2method1513zd2_4016 =
														BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
														((BgL_objectz00_bglt)
															((BgL_appz00_bglt) BgL_nodez00_3881)),
														BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
														BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00);
													return
														PROCEDURE_ENTRY(BgL_nextzd2method1513zd2_4016)
														(BgL_nextzd2method1513zd2_4016,
														((obj_t) ((BgL_appz00_bglt) BgL_nodez00_3881)),
														BEOA);
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



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_procedurez00()
	{
		{	/* Cfa/procedure.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2112z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2112z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2112z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2112z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2112z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2112z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2112z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2112z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 3788706),
				BSTRING_TO_STRING(BGl_string2112z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string2112z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zzcfa_loosez00(((long) 471177483),
				BSTRING_TO_STRING(BGl_string2112z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zzcfa_setupz00(((long) 168272051),
				BSTRING_TO_STRING(BGl_string2112z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 468997780),
				BSTRING_TO_STRING(BGl_string2112z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zzcfa_cfaz00(((long) 400853773),
				BSTRING_TO_STRING(BGl_string2112z00zzcfa_procedurez00));
			BGl_modulezd2initializa7ationz75zzcfa_iteratez00(((long) 131412196),
				BSTRING_TO_STRING(BGl_string2112z00zzcfa_procedurez00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_closurez00(((long) 189402632),
				BSTRING_TO_STRING(BGl_string2112z00zzcfa_procedurez00));
		}

	}

#ifdef __cplusplus
}
#endif
