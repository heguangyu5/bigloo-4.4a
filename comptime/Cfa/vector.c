/*===========================================================================*/
/*   (Cfa/vector.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/vector.scm) */
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

	typedef struct BgL_vallocz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
	}                *BgL_vallocz00_bglt;

	typedef struct BgL_vrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
		bool_t BgL_unsafez00;
	}              *BgL_vrefz00_bglt;

	typedef struct BgL_vsetz12z12_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
		bool_t BgL_unsafez00;
	}                 *BgL_vsetz12z12_bglt;

	typedef struct BgL_vlengthz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_vtypez00;
		obj_t BgL_ftypez00;
	}                 *BgL_vlengthz00_bglt;

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

	typedef struct BgL_prezd2makezd2vectorzd2appzd2_bgl
	{
		struct BgL_variablez00_bgl *BgL_ownerz00;
	}                                   *BgL_prezd2makezd2vectorzd2appzd2_bglt;

	typedef struct BgL_makezd2vectorzd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		struct BgL_approxz00_bgl *BgL_valuezd2approxzd2;
		long BgL_lostzd2stampzd2;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		obj_t BgL_stackzd2stampzd2;
		bool_t BgL_seenzf3zf3;
	}                             *BgL_makezd2vectorzd2appz00_bglt;

	typedef struct BgL_vrefzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_tvectorzf3zf3;
	}                      *BgL_vrefzf2cinfozf2_bglt;

	typedef struct BgL_vsetz12zf2cinfoze0_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_tvectorzf3zf3;
	}                         *BgL_vsetz12zf2cinfoze0_bglt;

	typedef struct BgL_vlengthzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_tvectorzf3zf3;
	}                         *BgL_vlengthzf2cinfozf2_bglt;

	typedef struct BgL_prezd2valloczf2cinfoz20_bgl
	{
		struct BgL_variablez00_bgl *BgL_ownerz00;
	}                              *BgL_prezd2valloczf2cinfoz20_bglt;

	typedef struct BgL_valloczf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                        *BgL_valloczf2cinfozf2_bglt;

	typedef struct BgL_valloczf2cinfozb2optimz40_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		struct BgL_approxz00_bgl *BgL_valuezd2approxzd2;
		long BgL_lostzd2stampzd2;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		bool_t BgL_stackablezf3zf3;
		obj_t BgL_stackzd2stampzd2;
		bool_t BgL_seenzf3zf3;
	}                                *BgL_valloczf2cinfozb2optimz40_bglt;


	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2vrefzf2Cinfo1607z50zzcfa_vectorz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzcfa_vectorz00();
	extern obj_t BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00(obj_t,
		BgL_approxz00_bglt);
	extern obj_t BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00;
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2valloczf2Cinfozb2op1601ze2zzcfa_vectorz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_vectorz00();
	extern obj_t BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00;
	BGL_EXPORTED_DECL bool_t BGl_vectorzd2optimzf3z21zzcfa_vectorz00();
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2makezd2vectorzd2app1599za2zzcfa_vectorz00(obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	static obj_t BGl_z62nodezd2setupz12zd2vref1595z70zzcfa_vectorz00(obj_t,
		obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t BGl_vsetz12zf2Cinfoze0zzcfa_info3z00;
	static obj_t BGl_z62loosezd2allocz12zd2makezd2ve1611za2zzcfa_vectorz00(obj_t,
		obj_t);
	extern BgL_approxz00_bglt
		BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt);
	extern obj_t BGl_vlengthzf2Cinfozf2zzcfa_info3z00;
	static obj_t BGl_gczd2rootszd2initz00zzcfa_vectorz00();
	extern obj_t BGl_vallocz00zzast_nodez00;
	extern BgL_approxz00_bglt BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
	static obj_t BGl_z62nodezd2setupz12zd2vlength1593z70zzcfa_vectorz00(obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2setupz12zd2valloc1591z70zzcfa_vectorz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2cfazd2stampza2zd2zzcfa_iteratez00;
	extern obj_t BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_approxz00_bglt);
	extern obj_t BGl_valloczf2Cinfozf2zzcfa_info3z00;
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	extern obj_t BGl_nodezd2setupza2z12z62zzcfa_setupz00(obj_t);
	static obj_t BGl_z62vectorzd2optimzf3z43zzcfa_vectorz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_vectorz00 = BUNSPEC;
	extern obj_t BGl_za2vectorza2z00zztype_cachez00;
	extern obj_t BGl_vlengthz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	static obj_t BGl_toplevelzd2initzd2zzcfa_vectorz00();
	static obj_t BGl_genericzd2initzd2zzcfa_vectorz00();
	extern BgL_approxz00_bglt BGl_loosez12z12zzcfa_loosez00(BgL_approxz00_bglt,
		obj_t);
	extern obj_t BGl_makezd2vectorzd2appz00zzcfa_info2z00;
	extern obj_t BGl_vrefzf2Cinfozf2zzcfa_info3z00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_nodezd2setupz12zc0zzcfa_setupz00(BgL_nodez00_bglt);
	extern BgL_approxz00_bglt
		BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00(BgL_typez00_bglt,
		BgL_nodez00_bglt);
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2vsetz12zf2Cinfo1609z42zzcfa_vectorz00(obj_t, obj_t);
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2valloczf2Cinfo1603z50zzcfa_vectorz00(obj_t, obj_t);
	extern obj_t BGl_addzd2makezd2vectorz12z12zzcfa_tvectorz00(BgL_nodez00_bglt);
	static obj_t BGl_z62nodezd2setupz12zd2vsetz121597z62zzcfa_vectorz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_vectorz00(long,
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_vrefz00zzast_nodez00;
	static obj_t BGl_z62zc3z04anonymousza31802ze3ze5zzcfa_vectorz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzcfa_vectorz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_vectorz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_vectorz00();
	extern BgL_approxz00_bglt
		BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_typez00_bglt);
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	static obj_t BGl_z62zc3z04anonymousza31841ze3ze5zzcfa_vectorz00(obj_t, obj_t);
	extern BgL_approxz00_bglt BGl_cfaz12z12zzcfa_cfaz00(BgL_nodez00_bglt);
	static obj_t BGl_z62nodezd2setupz12zd2prezd2make1587za2zzcfa_vectorz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t BGl_z62loosezd2allocz12zd2valloczf21613z82zzcfa_vectorz00(obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2setupz12zd2prezd2vall1589za2zzcfa_vectorz00(obj_t,
		obj_t);
	extern obj_t BGl_approxzd2setzd2typez12z12zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00;
	extern obj_t BGl_vsetz12z12zzast_nodez00;
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2vlengthzf2Cinfo1605z50zzcfa_vectorz00(obj_t, obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_STRING(BGl_string2125z00zzcfa_vectorz00,
		BgL_bgl_string2125za700za7za7c2132za7, "loose-alloc!", 12);
	      DEFINE_STRING(BGl_string2127z00zzcfa_vectorz00,
		BgL_bgl_string2127za700za7za7c2133za7, "cfa_vector", 10);
	      DEFINE_STRING(BGl_string2128z00zzcfa_vectorz00,
		BgL_bgl_string2128za700za7za7c2134za7, "all nothing ", 12);
	extern obj_t BGl_cfaz12zd2envzc0zzcfa_cfaz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_vectorzd2optimzf3zd2envzf3zzcfa_vectorz00,
		BgL_bgl_za762vectorza7d2opti2135z00,
		BGl_z62vectorzd2optimzf3z43zzcfa_vectorz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2110z00zzcfa_vectorz00,
		BgL_bgl_za762nodeza7d2setupza72136za7,
		BGl_z62nodezd2setupz12zd2prezd2make1587za2zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2112z00zzcfa_vectorz00,
		BgL_bgl_za762nodeza7d2setupza72137za7,
		BGl_z62nodezd2setupz12zd2prezd2vall1589za2zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2113z00zzcfa_vectorz00,
		BgL_bgl_za762nodeza7d2setupza72138za7,
		BGl_z62nodezd2setupz12zd2valloc1591z70zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2114z00zzcfa_vectorz00,
		BgL_bgl_za762nodeza7d2setupza72139za7,
		BGl_z62nodezd2setupz12zd2vlength1593z70zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2115z00zzcfa_vectorz00,
		BgL_bgl_za762nodeza7d2setupza72140za7,
		BGl_z62nodezd2setupz12zd2vref1595z70zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2116z00zzcfa_vectorz00,
		BgL_bgl_za762nodeza7d2setupza72141za7,
		BGl_z62nodezd2setupz12zd2vsetz121597z62zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2117z00zzcfa_vectorz00,
		BgL_bgl_za762cfaza712za7d2make2142za7,
		BGl_z62cfaz12zd2makezd2vectorzd2app1599za2zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2119z00zzcfa_vectorz00,
		BgL_bgl_za762cfaza712za7d2vall2143za7,
		BGl_z62cfaz12zd2valloczf2Cinfozb2op1601ze2zzcfa_vectorz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_nodezd2setupz12zd2envz12zzcfa_setupz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2120z00zzcfa_vectorz00,
		BgL_bgl_za762cfaza712za7d2vall2144za7,
		BGl_z62cfaz12zd2valloczf2Cinfo1603z50zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2121z00zzcfa_vectorz00,
		BgL_bgl_za762cfaza712za7d2vlen2145za7,
		BGl_z62cfaz12zd2vlengthzf2Cinfo1605z50zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2122z00zzcfa_vectorz00,
		BgL_bgl_za762cfaza712za7d2vref2146za7,
		BGl_z62cfaz12zd2vrefzf2Cinfo1607z50zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2123z00zzcfa_vectorz00,
		BgL_bgl_za762cfaza712za7d2vset2147za7,
		BGl_z62cfaz12zd2vsetz12zf2Cinfo1609z42zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2124z00zzcfa_vectorz00,
		BgL_bgl_za762looseza7d2alloc2148z00,
		BGl_z62loosezd2allocz12zd2makezd2ve1611za2zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2126z00zzcfa_vectorz00,
		BgL_bgl_za762looseza7d2alloc2149z00,
		BGl_z62loosezd2allocz12zd2valloczf21613z82zzcfa_vectorz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_loosezd2allocz12zd2envz12zzcfa_loosez00;
	   
		 
		DEFINE_STRING(BGl_string2111z00zzcfa_vectorz00,
		BgL_bgl_string2111za700za7za7c2150za7, "node-setup!", 11);
	      DEFINE_STRING(BGl_string2118z00zzcfa_vectorz00,
		BgL_bgl_string2118za700za7za7c2151za7, "cfa!::approx", 12);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcfa_vectorz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_vectorz00(long
		BgL_checksumz00_4430, char *BgL_fromz00_4431)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_vectorz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_vectorz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcfa_vectorz00();
					BGl_libraryzd2moduleszd2initz00zzcfa_vectorz00();
					BGl_cnstzd2initzd2zzcfa_vectorz00();
					BGl_importedzd2moduleszd2initz00zzcfa_vectorz00();
					BGl_methodzd2initzd2zzcfa_vectorz00();
					return BGl_toplevelzd2initzd2zzcfa_vectorz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_vectorz00()
	{
		{	/* Cfa/vector.scm 17 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_vector");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_vector");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cfa_vector");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cfa_vector");
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 0), "cfa_vector");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_vector");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cfa_vector");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_vector");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_vectorz00()
	{
		{	/* Cfa/vector.scm 17 */
			{	/* Cfa/vector.scm 17 */
				obj_t BgL_cportz00_4285;

				{	/* Cfa/vector.scm 17 */
					obj_t BgL_stringz00_4293;

					BgL_stringz00_4293 = BGl_string2128z00zzcfa_vectorz00;
					{	/* Cfa/vector.scm 17 */
						obj_t BgL_startz00_4294;

						BgL_startz00_4294 = BINT(((long) 0));
						{	/* Cfa/vector.scm 17 */
							obj_t BgL_endz00_4295;

							BgL_endz00_4295 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_4293)));
							{	/* Cfa/vector.scm 17 */

								BgL_cportz00_4285 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_4293, BgL_startz00_4294, BgL_endz00_4295);
				}}}}
				{
					long BgL_iz00_4286;

					BgL_iz00_4286 = ((long) 1);
				BgL_loopz00_4287:
					if ((BgL_iz00_4286 == ((long) -1)))
						{	/* Cfa/vector.scm 17 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/vector.scm 17 */
							{	/* Cfa/vector.scm 17 */
								obj_t BgL_arg2130z00_4289;

								{	/* Cfa/vector.scm 17 */

									{	/* Cfa/vector.scm 17 */
										obj_t BgL_locationz00_4291;

										BgL_locationz00_4291 = BBOOL(((bool_t) 0));
										{	/* Cfa/vector.scm 17 */

											BgL_arg2130z00_4289 =
												BGl_readz00zz__readerz00(BgL_cportz00_4285,
												BgL_locationz00_4291);
										}
									}
								}
								{	/* Cfa/vector.scm 17 */
									int BgL_tmpz00_4458;

									BgL_tmpz00_4458 = (int) (BgL_iz00_4286);
									CNST_TABLE_SET(BgL_tmpz00_4458, BgL_arg2130z00_4289);
							}}
							{	/* Cfa/vector.scm 17 */
								int BgL_auxz00_4292;

								BgL_auxz00_4292 = (int) ((BgL_iz00_4286 - ((long) 1)));
								{
									long BgL_iz00_4463;

									BgL_iz00_4463 = (long) (BgL_auxz00_4292);
									BgL_iz00_4286 = BgL_iz00_4463;
									goto BgL_loopz00_4287;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcfa_vectorz00()
	{
		{	/* Cfa/vector.scm 17 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_vectorz00()
	{
		{	/* Cfa/vector.scm 17 */
			return BUNSPEC;
		}

	}



/* vector-optim? */
	BGL_EXPORTED_DEF bool_t BGl_vectorzd2optimzf3z21zzcfa_vectorz00()
	{
		{	/* Cfa/vector.scm 40 */
			return ((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 2));
		}

	}



/* &vector-optim? */
	obj_t BGl_z62vectorzd2optimzf3z43zzcfa_vectorz00(obj_t BgL_envz00_4228)
	{
		{	/* Cfa/vector.scm 40 */
			return BBOOL(BGl_vectorzd2optimzf3z21zzcfa_vectorz00());
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_vectorz00()
	{
		{	/* Cfa/vector.scm 17 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_vectorz00()
	{
		{	/* Cfa/vector.scm 17 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_vectorz00()
	{
		{	/* Cfa/vector.scm 17 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00,
				BGl_proc2110z00zzcfa_vectorz00, BGl_string2111z00zzcfa_vectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00,
				BGl_proc2112z00zzcfa_vectorz00, BGl_string2111z00zzcfa_vectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_vallocz00zzast_nodez00,
				BGl_proc2113z00zzcfa_vectorz00, BGl_string2111z00zzcfa_vectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_vlengthz00zzast_nodez00, BGl_proc2114z00zzcfa_vectorz00,
				BGl_string2111z00zzcfa_vectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_vrefz00zzast_nodez00,
				BGl_proc2115z00zzcfa_vectorz00, BGl_string2111z00zzcfa_vectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_vsetz12z12zzast_nodez00, BGl_proc2116z00zzcfa_vectorz00,
				BGl_string2111z00zzcfa_vectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_makezd2vectorzd2appz00zzcfa_info2z00,
				BGl_proc2117z00zzcfa_vectorz00, BGl_string2118z00zzcfa_vectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00,
				BGl_proc2119z00zzcfa_vectorz00, BGl_string2118z00zzcfa_vectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_valloczf2Cinfozf2zzcfa_info3z00,
				BGl_proc2120z00zzcfa_vectorz00, BGl_string2118z00zzcfa_vectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_vlengthzf2Cinfozf2zzcfa_info3z00,
				BGl_proc2121z00zzcfa_vectorz00, BGl_string2118z00zzcfa_vectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_vrefzf2Cinfozf2zzcfa_info3z00,
				BGl_proc2122z00zzcfa_vectorz00, BGl_string2118z00zzcfa_vectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_vsetz12zf2Cinfoze0zzcfa_info3z00,
				BGl_proc2123z00zzcfa_vectorz00, BGl_string2118z00zzcfa_vectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00,
				BGl_makezd2vectorzd2appz00zzcfa_info2z00,
				BGl_proc2124z00zzcfa_vectorz00, BGl_string2125z00zzcfa_vectorz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00,
				BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00,
				BGl_proc2126z00zzcfa_vectorz00, BGl_string2125z00zzcfa_vectorz00);
		}

	}



/* &loose-alloc!-valloc/1613 */
	obj_t BGl_z62loosezd2allocz12zd2valloczf21613z82zzcfa_vectorz00(obj_t
		BgL_envz00_4247, obj_t BgL_allocz00_4248)
	{
		{	/* Cfa/vector.scm 281 */
			{	/* Cfa/vector.scm 283 */
				bool_t BgL_test2154z00_4484;

				{	/* Cfa/vector.scm 283 */
					long BgL_arg1865z00_4299;

					{
						BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_4485;

						{
							obj_t BgL_auxz00_4486;

							{	/* Cfa/vector.scm 283 */
								BgL_objectz00_bglt BgL_tmpz00_4487;

								BgL_tmpz00_4487 =
									((BgL_objectz00_bglt)
									((BgL_vallocz00_bglt) BgL_allocz00_4248));
								BgL_auxz00_4486 = BGL_OBJECT_WIDENING(BgL_tmpz00_4487);
							}
							BgL_auxz00_4485 =
								((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_4486);
						}
						BgL_arg1865z00_4299 =
							(((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_4485))->
							BgL_lostzd2stampzd2);
					}
					BgL_test2154z00_4484 =
						(BgL_arg1865z00_4299 ==
						(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00));
				}
				if (BgL_test2154z00_4484)
					{	/* Cfa/vector.scm 283 */
						return BUNSPEC;
					}
				else
					{	/* Cfa/vector.scm 283 */
						{
							BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_4495;

							{
								obj_t BgL_auxz00_4496;

								{	/* Cfa/vector.scm 288 */
									BgL_objectz00_bglt BgL_tmpz00_4497;

									BgL_tmpz00_4497 =
										((BgL_objectz00_bglt)
										((BgL_vallocz00_bglt) BgL_allocz00_4248));
									BgL_auxz00_4496 = BGL_OBJECT_WIDENING(BgL_tmpz00_4497);
								}
								BgL_auxz00_4495 =
									((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_4496);
							}
							((((BgL_valloczf2cinfozb2optimz40_bglt)
										COBJECT(BgL_auxz00_4495))->BgL_lostzd2stampzd2) =
								((long) (long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00)),
								BUNSPEC);
						}
						{	/* Cfa/vector.scm 289 */
							BgL_approxz00_bglt BgL_arg1861z00_4300;

							{
								BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_4504;

								{
									obj_t BgL_auxz00_4505;

									{	/* Cfa/vector.scm 289 */
										BgL_objectz00_bglt BgL_tmpz00_4506;

										BgL_tmpz00_4506 =
											((BgL_objectz00_bglt)
											((BgL_vallocz00_bglt) BgL_allocz00_4248));
										BgL_auxz00_4505 = BGL_OBJECT_WIDENING(BgL_tmpz00_4506);
									}
									BgL_auxz00_4504 =
										((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_4505);
								}
								BgL_arg1861z00_4300 =
									(((BgL_valloczf2cinfozb2optimz40_bglt)
										COBJECT(BgL_auxz00_4504))->BgL_valuezd2approxzd2);
							}
							BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
								(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00,
								BgL_arg1861z00_4300);
						}
						{	/* Cfa/vector.scm 290 */
							BgL_approxz00_bglt BgL_arg1862z00_4301;

							{
								BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_4513;

								{
									obj_t BgL_auxz00_4514;

									{	/* Cfa/vector.scm 290 */
										BgL_objectz00_bglt BgL_tmpz00_4515;

										BgL_tmpz00_4515 =
											((BgL_objectz00_bglt)
											((BgL_vallocz00_bglt) BgL_allocz00_4248));
										BgL_auxz00_4514 = BGL_OBJECT_WIDENING(BgL_tmpz00_4515);
									}
									BgL_auxz00_4513 =
										((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_4514);
								}
								BgL_arg1862z00_4301 =
									(((BgL_valloczf2cinfozb2optimz40_bglt)
										COBJECT(BgL_auxz00_4513))->BgL_valuezd2approxzd2);
							}
							BGl_approxzd2setzd2typez12z12zzcfa_approxz00(BgL_arg1862z00_4301,
								((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
						}
						{	/* Cfa/vector.scm 291 */
							BgL_approxz00_bglt BgL_arg1863z00_4302;

							{
								BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_4523;

								{
									obj_t BgL_auxz00_4524;

									{	/* Cfa/vector.scm 291 */
										BgL_objectz00_bglt BgL_tmpz00_4525;

										BgL_tmpz00_4525 =
											((BgL_objectz00_bglt)
											((BgL_vallocz00_bglt) BgL_allocz00_4248));
										BgL_auxz00_4524 = BGL_OBJECT_WIDENING(BgL_tmpz00_4525);
									}
									BgL_auxz00_4523 =
										((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_4524);
								}
								BgL_arg1863z00_4302 =
									(((BgL_valloczf2cinfozb2optimz40_bglt)
										COBJECT(BgL_auxz00_4523))->BgL_valuezd2approxzd2);
							}
							return
								BGl_approxzd2setzd2topz12z12zzcfa_approxz00
								(BgL_arg1863z00_4302);
						}
					}
			}
		}

	}



/* &loose-alloc!-make-ve1611 */
	obj_t BGl_z62loosezd2allocz12zd2makezd2ve1611za2zzcfa_vectorz00(obj_t
		BgL_envz00_4249, obj_t BgL_allocz00_4250)
	{
		{	/* Cfa/vector.scm 263 */
			{	/* Cfa/vector.scm 265 */
				bool_t BgL_test2155z00_4532;

				{	/* Cfa/vector.scm 265 */
					long BgL_arg1858z00_4304;

					{
						BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_4533;

						{
							obj_t BgL_auxz00_4534;

							{	/* Cfa/vector.scm 265 */
								BgL_objectz00_bglt BgL_tmpz00_4535;

								BgL_tmpz00_4535 =
									((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_allocz00_4250));
								BgL_auxz00_4534 = BGL_OBJECT_WIDENING(BgL_tmpz00_4535);
							}
							BgL_auxz00_4533 =
								((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_4534);
						}
						BgL_arg1858z00_4304 =
							(((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_4533))->
							BgL_lostzd2stampzd2);
					}
					BgL_test2155z00_4532 =
						(BgL_arg1858z00_4304 ==
						(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00));
				}
				if (BgL_test2155z00_4532)
					{	/* Cfa/vector.scm 265 */
						return BUNSPEC;
					}
				else
					{	/* Cfa/vector.scm 265 */
						{
							BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_4543;

							{
								obj_t BgL_auxz00_4544;

								{	/* Cfa/vector.scm 269 */
									BgL_objectz00_bglt BgL_tmpz00_4545;

									BgL_tmpz00_4545 =
										((BgL_objectz00_bglt)
										((BgL_appz00_bglt) BgL_allocz00_4250));
									BgL_auxz00_4544 = BGL_OBJECT_WIDENING(BgL_tmpz00_4545);
								}
								BgL_auxz00_4543 =
									((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_4544);
							}
							((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_4543))->
									BgL_lostzd2stampzd2) =
								((long) (long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00)),
								BUNSPEC);
						}
						{	/* Cfa/vector.scm 270 */
							BgL_approxz00_bglt BgL_arg1855z00_4305;

							{
								BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_4552;

								{
									obj_t BgL_auxz00_4553;

									{	/* Cfa/vector.scm 270 */
										BgL_objectz00_bglt BgL_tmpz00_4554;

										BgL_tmpz00_4554 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_allocz00_4250));
										BgL_auxz00_4553 = BGL_OBJECT_WIDENING(BgL_tmpz00_4554);
									}
									BgL_auxz00_4552 =
										((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_4553);
								}
								BgL_arg1855z00_4305 =
									(((BgL_makezd2vectorzd2appz00_bglt)
										COBJECT(BgL_auxz00_4552))->BgL_valuezd2approxzd2);
							}
							BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
								(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00,
								BgL_arg1855z00_4305);
						}
						{	/* Cfa/vector.scm 271 */
							BgL_approxz00_bglt BgL_arg1856z00_4306;

							{
								BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_4561;

								{
									obj_t BgL_auxz00_4562;

									{	/* Cfa/vector.scm 271 */
										BgL_objectz00_bglt BgL_tmpz00_4563;

										BgL_tmpz00_4563 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_allocz00_4250));
										BgL_auxz00_4562 = BGL_OBJECT_WIDENING(BgL_tmpz00_4563);
									}
									BgL_auxz00_4561 =
										((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_4562);
								}
								BgL_arg1856z00_4306 =
									(((BgL_makezd2vectorzd2appz00_bglt)
										COBJECT(BgL_auxz00_4561))->BgL_valuezd2approxzd2);
							}
							BGl_approxzd2setzd2typez12z12zzcfa_approxz00(BgL_arg1856z00_4306,
								((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
						}
						{	/* Cfa/vector.scm 272 */
							BgL_approxz00_bglt BgL_arg1857z00_4307;

							{
								BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_4571;

								{
									obj_t BgL_auxz00_4572;

									{	/* Cfa/vector.scm 272 */
										BgL_objectz00_bglt BgL_tmpz00_4573;

										BgL_tmpz00_4573 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_allocz00_4250));
										BgL_auxz00_4572 = BGL_OBJECT_WIDENING(BgL_tmpz00_4573);
									}
									BgL_auxz00_4571 =
										((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_4572);
								}
								BgL_arg1857z00_4307 =
									(((BgL_makezd2vectorzd2appz00_bglt)
										COBJECT(BgL_auxz00_4571))->BgL_valuezd2approxzd2);
							}
							return
								BGl_approxzd2setzd2topz12z12zzcfa_approxz00
								(BgL_arg1857z00_4307);
						}
					}
			}
		}

	}



/* &cfa!-vset!/Cinfo1609 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2vsetz12zf2Cinfo1609z42zzcfa_vectorz00(obj_t
		BgL_envz00_4251, obj_t BgL_nodez00_4252)
	{
		{	/* Cfa/vector.scm 218 */
			{	/* Cfa/vector.scm 222 */
				obj_t BgL_arg1831z00_4309;

				{	/* Cfa/vector.scm 222 */
					obj_t BgL_pairz00_4310;

					BgL_pairz00_4310 =
						(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt)
									((BgL_vsetz12z12_bglt) BgL_nodez00_4252))))->BgL_exprza2za2);
					BgL_arg1831z00_4309 = CAR(CDR(BgL_pairz00_4310));
				}
				BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1831z00_4309));
			}
			{	/* Cfa/vector.scm 223 */
				BgL_approxz00_bglt BgL_veczd2approxzd2_4311;
				BgL_approxz00_bglt BgL_valzd2approxzd2_4312;

				{	/* Cfa/vector.scm 223 */
					obj_t BgL_arg1848z00_4313;

					{	/* Cfa/vector.scm 223 */
						obj_t BgL_pairz00_4314;

						BgL_pairz00_4314 =
							(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt)
										((BgL_vsetz12z12_bglt) BgL_nodez00_4252))))->
							BgL_exprza2za2);
						BgL_arg1848z00_4313 = CAR(BgL_pairz00_4314);
					}
					BgL_veczd2approxzd2_4311 =
						BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1848z00_4313));
				}
				{	/* Cfa/vector.scm 224 */
					obj_t BgL_arg1851z00_4315;

					{	/* Cfa/vector.scm 224 */
						obj_t BgL_pairz00_4316;

						BgL_pairz00_4316 =
							(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt)
										((BgL_vsetz12z12_bglt) BgL_nodez00_4252))))->
							BgL_exprza2za2);
						BgL_arg1851z00_4315 = CAR(CDR(CDR(BgL_pairz00_4316)));
					}
					BgL_valzd2approxzd2_4312 =
						BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1851z00_4315));
				}
				{	/* Cfa/vector.scm 226 */
					bool_t BgL_test2156z00_4601;

					{
						BgL_vsetz12zf2cinfoze0_bglt BgL_auxz00_4602;

						{
							obj_t BgL_auxz00_4603;

							{	/* Cfa/vector.scm 226 */
								BgL_objectz00_bglt BgL_tmpz00_4604;

								BgL_tmpz00_4604 =
									((BgL_objectz00_bglt)
									((BgL_vsetz12z12_bglt) BgL_nodez00_4252));
								BgL_auxz00_4603 = BGL_OBJECT_WIDENING(BgL_tmpz00_4604);
							}
							BgL_auxz00_4602 = ((BgL_vsetz12zf2cinfoze0_bglt) BgL_auxz00_4603);
						}
						BgL_test2156z00_4601 =
							(((BgL_vsetz12zf2cinfoze0_bglt) COBJECT(BgL_auxz00_4602))->
							BgL_tvectorzf3zf3);
					}
					if (BgL_test2156z00_4601)
						{	/* Cfa/vector.scm 226 */
							CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Cfa/vector.scm 226 */
							if (
								((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >=
									((long) 2)))
								{	/* Cfa/vector.scm 228 */
									{	/* Cfa/vector.scm 232 */
										bool_t BgL_test2158z00_4614;

										{	/* Cfa/vector.scm 232 */
											BgL_typez00_bglt BgL_arg1838z00_4317;

											BgL_arg1838z00_4317 =
												(((BgL_approxz00_bglt)
													COBJECT(BgL_veczd2approxzd2_4311))->BgL_typez00);
											BgL_test2158z00_4614 =
												(((obj_t) BgL_arg1838z00_4317) ==
												BGl_za2vectorza2z00zztype_cachez00);
										}
										if (BgL_test2158z00_4614)
											{	/* Cfa/vector.scm 232 */
												BFALSE;
											}
										else
											{	/* Cfa/vector.scm 232 */
												BGl_approxzd2setzd2typez12z12zzcfa_approxz00
													(BgL_valzd2approxzd2_4312,
													((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
											}
									}
									if (
										(((BgL_approxz00_bglt) COBJECT(BgL_veczd2approxzd2_4311))->
											BgL_topzf3zf3))
										{	/* Cfa/vector.scm 235 */
											((obj_t)
												BGl_loosez12z12zzcfa_loosez00(BgL_valzd2approxzd2_4312,
													CNST_TABLE_REF(((long) 1))));
										}
									else
										{	/* Cfa/vector.scm 242 */
											obj_t BgL_zc3z04anonymousza31841ze3z87_4318;

											BgL_zc3z04anonymousza31841ze3z87_4318 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31841ze3ze5zzcfa_vectorz00,
												(int) (((long) 1)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31841ze3z87_4318,
												(int) (((long) 0)), ((obj_t) BgL_valzd2approxzd2_4312));
											BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
												(BgL_zc3z04anonymousza31841ze3z87_4318,
												BgL_veczd2approxzd2_4311);
								}}
							else
								{	/* Cfa/vector.scm 228 */
									BGl_loosez12z12zzcfa_loosez00(BgL_veczd2approxzd2_4311,
										CNST_TABLE_REF(((long) 1)));
									((obj_t)
										BGl_loosez12z12zzcfa_loosez00(BgL_valzd2approxzd2_4312,
											CNST_TABLE_REF(((long) 1))));
			}}}}
			{
				BgL_vsetz12zf2cinfoze0_bglt BgL_auxz00_4637;

				{
					obj_t BgL_auxz00_4638;

					{	/* Cfa/vector.scm 254 */
						BgL_objectz00_bglt BgL_tmpz00_4639;

						BgL_tmpz00_4639 =
							((BgL_objectz00_bglt) ((BgL_vsetz12z12_bglt) BgL_nodez00_4252));
						BgL_auxz00_4638 = BGL_OBJECT_WIDENING(BgL_tmpz00_4639);
					}
					BgL_auxz00_4637 = ((BgL_vsetz12zf2cinfoze0_bglt) BgL_auxz00_4638);
				}
				return
					(((BgL_vsetz12zf2cinfoze0_bglt) COBJECT(BgL_auxz00_4637))->
					BgL_approxz00);
			}
		}

	}



/* &<@anonymous:1841> */
	obj_t BGl_z62zc3z04anonymousza31841ze3ze5zzcfa_vectorz00(obj_t
		BgL_envz00_4253, obj_t BgL_appz00_4255)
	{
		{	/* Cfa/vector.scm 240 */
			{	/* Cfa/vector.scm 242 */
				BgL_approxz00_bglt BgL_valzd2approxzd2_4254;

				BgL_valzd2approxzd2_4254 =
					((BgL_approxz00_bglt)
					PROCEDURE_REF(BgL_envz00_4253, (int) (((long) 0))));
				if (BGl_isazf3zf3zz__objectz00(BgL_appz00_4255,
						BGl_makezd2vectorzd2appz00zzcfa_info2z00))
					{	/* Cfa/vector.scm 242 */
						{
							BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_4650;

							{
								obj_t BgL_auxz00_4651;

								{	/* Cfa/vector.scm 244 */
									BgL_objectz00_bglt BgL_tmpz00_4652;

									BgL_tmpz00_4652 =
										((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_appz00_4255));
									BgL_auxz00_4651 = BGL_OBJECT_WIDENING(BgL_tmpz00_4652);
								}
								BgL_auxz00_4650 =
									((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_4651);
							}
							((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_4650))->
									BgL_seenzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
						}
						{	/* Cfa/vector.scm 245 */
							BgL_approxz00_bglt BgL_arg1845z00_4319;

							{
								BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_4658;

								{
									obj_t BgL_auxz00_4659;

									{	/* Cfa/vector.scm 245 */
										BgL_objectz00_bglt BgL_tmpz00_4660;

										BgL_tmpz00_4660 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_appz00_4255));
										BgL_auxz00_4659 = BGL_OBJECT_WIDENING(BgL_tmpz00_4660);
									}
									BgL_auxz00_4658 =
										((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_4659);
								}
								BgL_arg1845z00_4319 =
									(((BgL_makezd2vectorzd2appz00_bglt)
										COBJECT(BgL_auxz00_4658))->BgL_valuezd2approxzd2);
							}
							return
								((obj_t)
								BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg1845z00_4319,
									BgL_valzd2approxzd2_4254));
						}
					}
				else
					{	/* Cfa/vector.scm 242 */
						if (BGl_isazf3zf3zz__objectz00(BgL_appz00_4255,
								BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00))
							{	/* Cfa/vector.scm 246 */
								{
									BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_4670;

									{
										obj_t BgL_auxz00_4671;

										{	/* Cfa/vector.scm 248 */
											BgL_objectz00_bglt BgL_tmpz00_4672;

											BgL_tmpz00_4672 =
												((BgL_objectz00_bglt)
												((BgL_vallocz00_bglt) BgL_appz00_4255));
											BgL_auxz00_4671 = BGL_OBJECT_WIDENING(BgL_tmpz00_4672);
										}
										BgL_auxz00_4670 =
											((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_4671);
									}
									((((BgL_valloczf2cinfozb2optimz40_bglt)
												COBJECT(BgL_auxz00_4670))->BgL_seenzf3zf3) =
										((bool_t) ((bool_t) 1)), BUNSPEC);
								}
								{	/* Cfa/vector.scm 249 */
									BgL_approxz00_bglt BgL_arg1847z00_4320;

									{
										BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_4678;

										{
											obj_t BgL_auxz00_4679;

											{	/* Cfa/vector.scm 249 */
												BgL_objectz00_bglt BgL_tmpz00_4680;

												BgL_tmpz00_4680 =
													((BgL_objectz00_bglt)
													((BgL_vallocz00_bglt) BgL_appz00_4255));
												BgL_auxz00_4679 = BGL_OBJECT_WIDENING(BgL_tmpz00_4680);
											}
											BgL_auxz00_4678 =
												((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_4679);
										}
										BgL_arg1847z00_4320 =
											(((BgL_valloczf2cinfozb2optimz40_bglt)
												COBJECT(BgL_auxz00_4678))->BgL_valuezd2approxzd2);
									}
									return
										((obj_t)
										BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg1847z00_4320,
											BgL_valzd2approxzd2_4254));
								}
							}
						else
							{	/* Cfa/vector.scm 246 */
								return BFALSE;
							}
					}
			}
		}

	}



/* &cfa!-vref/Cinfo1607 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2vrefzf2Cinfo1607z50zzcfa_vectorz00(obj_t
		BgL_envz00_4256, obj_t BgL_nodez00_4257)
	{
		{	/* Cfa/vector.scm 176 */
			{	/* Cfa/vector.scm 180 */
				obj_t BgL_arg1775z00_4322;

				{	/* Cfa/vector.scm 180 */
					obj_t BgL_pairz00_4323;

					BgL_pairz00_4323 =
						(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt)
									((BgL_vrefz00_bglt) BgL_nodez00_4257))))->BgL_exprza2za2);
					BgL_arg1775z00_4322 = CAR(CDR(BgL_pairz00_4323));
				}
				BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1775z00_4322));
			}
			{	/* Cfa/vector.scm 181 */
				BgL_approxz00_bglt BgL_veczd2approxzd2_4324;

				{	/* Cfa/vector.scm 181 */
					obj_t BgL_arg1829z00_4325;

					{	/* Cfa/vector.scm 181 */
						obj_t BgL_pairz00_4326;

						BgL_pairz00_4326 =
							(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt)
										((BgL_vrefz00_bglt) BgL_nodez00_4257))))->BgL_exprza2za2);
						BgL_arg1829z00_4325 = CAR(BgL_pairz00_4326);
					}
					BgL_veczd2approxzd2_4324 =
						BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1829z00_4325));
				}
				{	/* Cfa/vector.scm 183 */
					bool_t BgL_test2162z00_4701;

					{
						BgL_vrefzf2cinfozf2_bglt BgL_auxz00_4702;

						{
							obj_t BgL_auxz00_4703;

							{	/* Cfa/vector.scm 183 */
								BgL_objectz00_bglt BgL_tmpz00_4704;

								BgL_tmpz00_4704 =
									((BgL_objectz00_bglt) ((BgL_vrefz00_bglt) BgL_nodez00_4257));
								BgL_auxz00_4703 = BGL_OBJECT_WIDENING(BgL_tmpz00_4704);
							}
							BgL_auxz00_4702 = ((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_4703);
						}
						BgL_test2162z00_4701 =
							(((BgL_vrefzf2cinfozf2_bglt) COBJECT(BgL_auxz00_4702))->
							BgL_tvectorzf3zf3);
					}
					if (BgL_test2162z00_4701)
						{
							BgL_approxz00_bglt BgL_auxz00_4710;

							{
								BgL_vrefzf2cinfozf2_bglt BgL_auxz00_4711;

								{
									obj_t BgL_auxz00_4712;

									{	/* Cfa/vector.scm 184 */
										BgL_objectz00_bglt BgL_tmpz00_4713;

										BgL_tmpz00_4713 =
											((BgL_objectz00_bglt)
											((BgL_vrefz00_bglt) BgL_nodez00_4257));
										BgL_auxz00_4712 = BGL_OBJECT_WIDENING(BgL_tmpz00_4713);
									}
									BgL_auxz00_4711 =
										((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_4712);
								}
								BgL_auxz00_4710 =
									(((BgL_vrefzf2cinfozf2_bglt) COBJECT(BgL_auxz00_4711))->
									BgL_approxz00);
							}
							((obj_t) BgL_auxz00_4710);
						}
					else
						{	/* Cfa/vector.scm 183 */
							if (
								((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >=
									((long) 2)))
								{	/* Cfa/vector.scm 185 */
									{	/* Cfa/vector.scm 190 */
										bool_t BgL_test2164z00_4723;

										{	/* Cfa/vector.scm 190 */
											bool_t BgL_test2165z00_4724;

											{	/* Cfa/vector.scm 190 */
												BgL_typez00_bglt BgL_arg1796z00_4327;

												BgL_arg1796z00_4327 =
													(((BgL_approxz00_bglt)
														COBJECT(BgL_veczd2approxzd2_4324))->BgL_typez00);
												BgL_test2165z00_4724 =
													(((obj_t) BgL_arg1796z00_4327) ==
													BGl_za2vectorza2z00zztype_cachez00);
											}
											if (BgL_test2165z00_4724)
												{	/* Cfa/vector.scm 190 */
													BgL_test2164z00_4723 =
														(((BgL_approxz00_bglt)
															COBJECT(BgL_veczd2approxzd2_4324))->
														BgL_topzf3zf3);
												}
											else
												{	/* Cfa/vector.scm 190 */
													BgL_test2164z00_4723 = ((bool_t) 1);
												}
										}
										if (BgL_test2164z00_4723)
											{	/* Cfa/vector.scm 192 */
												BgL_approxz00_bglt BgL_arg1790z00_4328;

												{
													BgL_vrefzf2cinfozf2_bglt BgL_auxz00_4729;

													{
														obj_t BgL_auxz00_4730;

														{	/* Cfa/vector.scm 192 */
															BgL_objectz00_bglt BgL_tmpz00_4731;

															BgL_tmpz00_4731 =
																((BgL_objectz00_bglt)
																((BgL_vrefz00_bglt) BgL_nodez00_4257));
															BgL_auxz00_4730 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_4731);
														}
														BgL_auxz00_4729 =
															((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_4730);
													}
													BgL_arg1790z00_4328 =
														(((BgL_vrefzf2cinfozf2_bglt)
															COBJECT(BgL_auxz00_4729))->BgL_approxz00);
												}
												BGl_approxzd2setzd2typez12z12zzcfa_approxz00
													(BgL_arg1790z00_4328,
													((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
											}
										else
											{	/* Cfa/vector.scm 190 */
												BFALSE;
											}
									}
									if (
										(((BgL_approxz00_bglt) COBJECT(BgL_veczd2approxzd2_4324))->
											BgL_topzf3zf3))
										{	/* Cfa/vector.scm 195 */
											BgL_approxz00_bglt BgL_arg1798z00_4329;

											{
												BgL_vrefzf2cinfozf2_bglt BgL_auxz00_4741;

												{
													obj_t BgL_auxz00_4742;

													{	/* Cfa/vector.scm 195 */
														BgL_objectz00_bglt BgL_tmpz00_4743;

														BgL_tmpz00_4743 =
															((BgL_objectz00_bglt)
															((BgL_vrefz00_bglt) BgL_nodez00_4257));
														BgL_auxz00_4742 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_4743);
													}
													BgL_auxz00_4741 =
														((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_4742);
												}
												BgL_arg1798z00_4329 =
													(((BgL_vrefzf2cinfozf2_bglt)
														COBJECT(BgL_auxz00_4741))->BgL_approxz00);
											}
											BGl_approxzd2setzd2topz12z12zzcfa_approxz00
												(BgL_arg1798z00_4329);
										}
									else
										{	/* Cfa/vector.scm 194 */
											BFALSE;
										}
									{	/* Cfa/vector.scm 200 */
										obj_t BgL_zc3z04anonymousza31802ze3z87_4330;

										BgL_zc3z04anonymousza31802ze3z87_4330 =
											MAKE_FX_PROCEDURE
											(BGl_z62zc3z04anonymousza31802ze3ze5zzcfa_vectorz00,
											(int) (((long) 1)), (int) (((long) 1)));
										PROCEDURE_SET(BgL_zc3z04anonymousza31802ze3z87_4330,
											(int) (((long) 0)),
											((obj_t) ((BgL_vrefz00_bglt) BgL_nodez00_4257)));
										BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
											(BgL_zc3z04anonymousza31802ze3z87_4330,
											BgL_veczd2approxzd2_4324);
								}}
							else
								{	/* Cfa/vector.scm 185 */
									((obj_t)
										BGl_loosez12z12zzcfa_loosez00(BgL_veczd2approxzd2_4324,
											CNST_TABLE_REF(((long) 1))));
				}}}
				{
					BgL_vrefzf2cinfozf2_bglt BgL_auxz00_4761;

					{
						obj_t BgL_auxz00_4762;

						{	/* Cfa/vector.scm 213 */
							BgL_objectz00_bglt BgL_tmpz00_4763;

							BgL_tmpz00_4763 =
								((BgL_objectz00_bglt) ((BgL_vrefz00_bglt) BgL_nodez00_4257));
							BgL_auxz00_4762 = BGL_OBJECT_WIDENING(BgL_tmpz00_4763);
						}
						BgL_auxz00_4761 = ((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_4762);
					}
					return
						(((BgL_vrefzf2cinfozf2_bglt) COBJECT(BgL_auxz00_4761))->
						BgL_approxz00);
				}
			}
		}

	}



/* &<@anonymous:1802> */
	obj_t BGl_z62zc3z04anonymousza31802ze3ze5zzcfa_vectorz00(obj_t
		BgL_envz00_4258, obj_t BgL_appz00_4260)
	{
		{	/* Cfa/vector.scm 198 */
			{	/* Cfa/vector.scm 200 */
				BgL_vrefz00_bglt BgL_i1205z00_4259;

				BgL_i1205z00_4259 =
					((BgL_vrefz00_bglt)
					PROCEDURE_REF(BgL_envz00_4258, (int) (((long) 0))));
				if (BGl_isazf3zf3zz__objectz00(BgL_appz00_4260,
						BGl_makezd2vectorzd2appz00zzcfa_info2z00))
					{	/* Cfa/vector.scm 200 */
						{
							BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_4774;

							{
								obj_t BgL_auxz00_4775;

								{	/* Cfa/vector.scm 202 */
									BgL_objectz00_bglt BgL_tmpz00_4776;

									BgL_tmpz00_4776 =
										((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_appz00_4260));
									BgL_auxz00_4775 = BGL_OBJECT_WIDENING(BgL_tmpz00_4776);
								}
								BgL_auxz00_4774 =
									((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_4775);
							}
							((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_4774))->
									BgL_seenzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
						}
						{	/* Cfa/vector.scm 203 */
							BgL_approxz00_bglt BgL_arg1808z00_4331;
							BgL_approxz00_bglt BgL_arg1809z00_4332;

							{
								BgL_vrefzf2cinfozf2_bglt BgL_auxz00_4782;

								{
									obj_t BgL_auxz00_4783;

									{	/* Cfa/vector.scm 203 */
										BgL_objectz00_bglt BgL_tmpz00_4784;

										BgL_tmpz00_4784 = ((BgL_objectz00_bglt) BgL_i1205z00_4259);
										BgL_auxz00_4783 = BGL_OBJECT_WIDENING(BgL_tmpz00_4784);
									}
									BgL_auxz00_4782 =
										((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_4783);
								}
								BgL_arg1808z00_4331 =
									(((BgL_vrefzf2cinfozf2_bglt) COBJECT(BgL_auxz00_4782))->
									BgL_approxz00);
							}
							{
								BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_4789;

								{
									obj_t BgL_auxz00_4790;

									{	/* Cfa/vector.scm 203 */
										BgL_objectz00_bglt BgL_tmpz00_4791;

										BgL_tmpz00_4791 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_appz00_4260));
										BgL_auxz00_4790 = BGL_OBJECT_WIDENING(BgL_tmpz00_4791);
									}
									BgL_auxz00_4789 =
										((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_4790);
								}
								BgL_arg1809z00_4332 =
									(((BgL_makezd2vectorzd2appz00_bglt)
										COBJECT(BgL_auxz00_4789))->BgL_valuezd2approxzd2);
							}
							BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg1808z00_4331,
								BgL_arg1809z00_4332);
						}
						{	/* Cfa/vector.scm 204 */
							BgL_approxz00_bglt BgL_arg1811z00_4333;
							BgL_typez00_bglt BgL_arg1820z00_4334;

							{
								BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_4798;

								{
									obj_t BgL_auxz00_4799;

									{	/* Cfa/vector.scm 204 */
										BgL_objectz00_bglt BgL_tmpz00_4800;

										BgL_tmpz00_4800 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_appz00_4260));
										BgL_auxz00_4799 = BGL_OBJECT_WIDENING(BgL_tmpz00_4800);
									}
									BgL_auxz00_4798 =
										((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_4799);
								}
								BgL_arg1811z00_4333 =
									(((BgL_makezd2vectorzd2appz00_bglt)
										COBJECT(BgL_auxz00_4798))->BgL_valuezd2approxzd2);
							}
							{	/* Cfa/vector.scm 204 */
								BgL_approxz00_bglt BgL_arg1821z00_4335;

								{
									BgL_vrefzf2cinfozf2_bglt BgL_auxz00_4806;

									{
										obj_t BgL_auxz00_4807;

										{	/* Cfa/vector.scm 204 */
											BgL_objectz00_bglt BgL_tmpz00_4808;

											BgL_tmpz00_4808 =
												((BgL_objectz00_bglt) BgL_i1205z00_4259);
											BgL_auxz00_4807 = BGL_OBJECT_WIDENING(BgL_tmpz00_4808);
										}
										BgL_auxz00_4806 =
											((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_4807);
									}
									BgL_arg1821z00_4335 =
										(((BgL_vrefzf2cinfozf2_bglt) COBJECT(BgL_auxz00_4806))->
										BgL_approxz00);
								}
								BgL_arg1820z00_4334 =
									(((BgL_approxz00_bglt) COBJECT(BgL_arg1821z00_4335))->
									BgL_typez00);
							}
							return
								BGl_approxzd2setzd2typez12z12zzcfa_approxz00
								(BgL_arg1811z00_4333, BgL_arg1820z00_4334);
						}
					}
				else
					{	/* Cfa/vector.scm 200 */
						if (BGl_isazf3zf3zz__objectz00(BgL_appz00_4260,
								BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00))
							{	/* Cfa/vector.scm 205 */
								{
									BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_4817;

									{
										obj_t BgL_auxz00_4818;

										{	/* Cfa/vector.scm 207 */
											BgL_objectz00_bglt BgL_tmpz00_4819;

											BgL_tmpz00_4819 =
												((BgL_objectz00_bglt)
												((BgL_vallocz00_bglt) BgL_appz00_4260));
											BgL_auxz00_4818 = BGL_OBJECT_WIDENING(BgL_tmpz00_4819);
										}
										BgL_auxz00_4817 =
											((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_4818);
									}
									((((BgL_valloczf2cinfozb2optimz40_bglt)
												COBJECT(BgL_auxz00_4817))->BgL_seenzf3zf3) =
										((bool_t) ((bool_t) 1)), BUNSPEC);
								}
								{	/* Cfa/vector.scm 208 */
									BgL_approxz00_bglt BgL_arg1824z00_4336;
									BgL_approxz00_bglt BgL_arg1825z00_4337;

									{
										BgL_vrefzf2cinfozf2_bglt BgL_auxz00_4825;

										{
											obj_t BgL_auxz00_4826;

											{	/* Cfa/vector.scm 208 */
												BgL_objectz00_bglt BgL_tmpz00_4827;

												BgL_tmpz00_4827 =
													((BgL_objectz00_bglt) BgL_i1205z00_4259);
												BgL_auxz00_4826 = BGL_OBJECT_WIDENING(BgL_tmpz00_4827);
											}
											BgL_auxz00_4825 =
												((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_4826);
										}
										BgL_arg1824z00_4336 =
											(((BgL_vrefzf2cinfozf2_bglt) COBJECT(BgL_auxz00_4825))->
											BgL_approxz00);
									}
									{
										BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_4832;

										{
											obj_t BgL_auxz00_4833;

											{	/* Cfa/vector.scm 208 */
												BgL_objectz00_bglt BgL_tmpz00_4834;

												BgL_tmpz00_4834 =
													((BgL_objectz00_bglt)
													((BgL_vallocz00_bglt) BgL_appz00_4260));
												BgL_auxz00_4833 = BGL_OBJECT_WIDENING(BgL_tmpz00_4834);
											}
											BgL_auxz00_4832 =
												((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_4833);
										}
										BgL_arg1825z00_4337 =
											(((BgL_valloczf2cinfozb2optimz40_bglt)
												COBJECT(BgL_auxz00_4832))->BgL_valuezd2approxzd2);
									}
									BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg1824z00_4336,
										BgL_arg1825z00_4337);
								}
								{	/* Cfa/vector.scm 209 */
									BgL_approxz00_bglt BgL_arg1826z00_4338;
									BgL_typez00_bglt BgL_arg1827z00_4339;

									{
										BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_4841;

										{
											obj_t BgL_auxz00_4842;

											{	/* Cfa/vector.scm 209 */
												BgL_objectz00_bglt BgL_tmpz00_4843;

												BgL_tmpz00_4843 =
													((BgL_objectz00_bglt)
													((BgL_vallocz00_bglt) BgL_appz00_4260));
												BgL_auxz00_4842 = BGL_OBJECT_WIDENING(BgL_tmpz00_4843);
											}
											BgL_auxz00_4841 =
												((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_4842);
										}
										BgL_arg1826z00_4338 =
											(((BgL_valloczf2cinfozb2optimz40_bglt)
												COBJECT(BgL_auxz00_4841))->BgL_valuezd2approxzd2);
									}
									{	/* Cfa/vector.scm 209 */
										BgL_approxz00_bglt BgL_arg1828z00_4340;

										{
											BgL_vrefzf2cinfozf2_bglt BgL_auxz00_4849;

											{
												obj_t BgL_auxz00_4850;

												{	/* Cfa/vector.scm 209 */
													BgL_objectz00_bglt BgL_tmpz00_4851;

													BgL_tmpz00_4851 =
														((BgL_objectz00_bglt) BgL_i1205z00_4259);
													BgL_auxz00_4850 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_4851);
												}
												BgL_auxz00_4849 =
													((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_4850);
											}
											BgL_arg1828z00_4340 =
												(((BgL_vrefzf2cinfozf2_bglt) COBJECT(BgL_auxz00_4849))->
												BgL_approxz00);
										}
										BgL_arg1827z00_4339 =
											(((BgL_approxz00_bglt) COBJECT(BgL_arg1828z00_4340))->
											BgL_typez00);
									}
									return
										BGl_approxzd2setzd2typez12z12zzcfa_approxz00
										(BgL_arg1826z00_4338, BgL_arg1827z00_4339);
								}
							}
						else
							{	/* Cfa/vector.scm 205 */
								return BFALSE;
							}
					}
			}
		}

	}



/* &cfa!-vlength/Cinfo1605 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2vlengthzf2Cinfo1605z50zzcfa_vectorz00(obj_t
		BgL_envz00_4261, obj_t BgL_nodez00_4262)
	{
		{	/* Cfa/vector.scm 165 */
			{	/* Cfa/vector.scm 168 */
				BgL_approxz00_bglt BgL_veczd2approxzd2_4342;

				{	/* Cfa/vector.scm 168 */
					obj_t BgL_arg1768z00_4343;

					{	/* Cfa/vector.scm 168 */
						obj_t BgL_pairz00_4344;

						BgL_pairz00_4344 =
							(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt)
										((BgL_vlengthz00_bglt) BgL_nodez00_4262))))->
							BgL_exprza2za2);
						BgL_arg1768z00_4343 = CAR(BgL_pairz00_4344);
					}
					BgL_veczd2approxzd2_4342 =
						BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1768z00_4343));
				}
				if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 2)))
					{	/* Cfa/vector.scm 169 */
						BFALSE;
					}
				else
					{	/* Cfa/vector.scm 169 */
						((obj_t)
							BGl_loosez12z12zzcfa_loosez00(BgL_veczd2approxzd2_4342,
								CNST_TABLE_REF(((long) 1))));
			}}
			{
				BgL_vlengthzf2cinfozf2_bglt BgL_auxz00_4870;

				{
					obj_t BgL_auxz00_4871;

					{	/* Cfa/vector.scm 171 */
						BgL_objectz00_bglt BgL_tmpz00_4872;

						BgL_tmpz00_4872 =
							((BgL_objectz00_bglt) ((BgL_vlengthz00_bglt) BgL_nodez00_4262));
						BgL_auxz00_4871 = BGL_OBJECT_WIDENING(BgL_tmpz00_4872);
					}
					BgL_auxz00_4870 = ((BgL_vlengthzf2cinfozf2_bglt) BgL_auxz00_4871);
				}
				return
					(((BgL_vlengthzf2cinfozf2_bglt) COBJECT(BgL_auxz00_4870))->
					BgL_approxz00);
			}
		}

	}



/* &cfa!-valloc/Cinfo1603 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2valloczf2Cinfo1603z50zzcfa_vectorz00(obj_t
		BgL_envz00_4263, obj_t BgL_nodez00_4264)
	{
		{	/* Cfa/vector.scm 156 */
			{	/* Cfa/vector.scm 159 */
				obj_t BgL_g1585z00_4346;

				BgL_g1585z00_4346 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_vallocz00_bglt) BgL_nodez00_4264))))->BgL_exprza2za2);
				{
					obj_t BgL_l1583z00_4348;

					BgL_l1583z00_4348 = BgL_g1585z00_4346;
				BgL_zc3z04anonymousza31756ze3z87_4347:
					if (PAIRP(BgL_l1583z00_4348))
						{	/* Cfa/vector.scm 159 */
							{	/* Cfa/vector.scm 159 */
								obj_t BgL_xz00_4349;

								BgL_xz00_4349 = CAR(BgL_l1583z00_4348);
								{	/* Cfa/vector.scm 159 */
									BgL_approxz00_bglt BgL_arg1759z00_4350;

									BgL_arg1759z00_4350 =
										BGl_cfaz12z12zzcfa_cfaz00(
										((BgL_nodez00_bglt) BgL_xz00_4349));
									BGl_loosez12z12zzcfa_loosez00(BgL_arg1759z00_4350,
										CNST_TABLE_REF(((long) 1)));
							}}
							{
								obj_t BgL_l1583z00_4888;

								BgL_l1583z00_4888 = CDR(BgL_l1583z00_4348);
								BgL_l1583z00_4348 = BgL_l1583z00_4888;
								goto BgL_zc3z04anonymousza31756ze3z87_4347;
							}
						}
					else
						{	/* Cfa/vector.scm 159 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_valloczf2cinfozf2_bglt BgL_auxz00_4890;

				{
					obj_t BgL_auxz00_4891;

					{	/* Cfa/vector.scm 160 */
						BgL_objectz00_bglt BgL_tmpz00_4892;

						BgL_tmpz00_4892 =
							((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_nodez00_4264));
						BgL_auxz00_4891 = BGL_OBJECT_WIDENING(BgL_tmpz00_4892);
					}
					BgL_auxz00_4890 = ((BgL_valloczf2cinfozf2_bglt) BgL_auxz00_4891);
				}
				return
					(((BgL_valloczf2cinfozf2_bglt) COBJECT(BgL_auxz00_4890))->
					BgL_approxz00);
			}
		}

	}



/* &cfa!-valloc/Cinfo+op1601 */
	BgL_approxz00_bglt
		BGl_z62cfaz12zd2valloczf2Cinfozb2op1601ze2zzcfa_vectorz00(obj_t
		BgL_envz00_4265, obj_t BgL_nodez00_4266)
	{
		{	/* Cfa/vector.scm 147 */
			{	/* Cfa/vector.scm 150 */
				obj_t BgL_g1582z00_4352;

				BgL_g1582z00_4352 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_vallocz00_bglt) BgL_nodez00_4266))))->BgL_exprza2za2);
				{
					obj_t BgL_l1580z00_4354;

					BgL_l1580z00_4354 = BgL_g1582z00_4352;
				BgL_zc3z04anonymousza31748ze3z87_4353:
					if (PAIRP(BgL_l1580z00_4354))
						{	/* Cfa/vector.scm 150 */
							{	/* Cfa/vector.scm 150 */
								obj_t BgL_arg1754z00_4355;

								BgL_arg1754z00_4355 = CAR(BgL_l1580z00_4354);
								BGl_cfaz12z12zzcfa_cfaz00(
									((BgL_nodez00_bglt) BgL_arg1754z00_4355));
							}
							{
								obj_t BgL_l1580z00_4906;

								BgL_l1580z00_4906 = CDR(BgL_l1580z00_4354);
								BgL_l1580z00_4354 = BgL_l1580z00_4906;
								goto BgL_zc3z04anonymousza31748ze3z87_4353;
							}
						}
					else
						{	/* Cfa/vector.scm 150 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_4908;

				{
					obj_t BgL_auxz00_4909;

					{	/* Cfa/vector.scm 151 */
						BgL_objectz00_bglt BgL_tmpz00_4910;

						BgL_tmpz00_4910 =
							((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_nodez00_4266));
						BgL_auxz00_4909 = BGL_OBJECT_WIDENING(BgL_tmpz00_4910);
					}
					BgL_auxz00_4908 =
						((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_4909);
				}
				return
					(((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_4908))->
					BgL_approxz00);
			}
		}

	}



/* &cfa!-make-vector-app1599 */
	BgL_approxz00_bglt
		BGl_z62cfaz12zd2makezd2vectorzd2app1599za2zzcfa_vectorz00(obj_t
		BgL_envz00_4267, obj_t BgL_nodez00_4268)
	{
		{	/* Cfa/vector.scm 136 */
			{	/* Cfa/vector.scm 139 */
				obj_t BgL_arg1743z00_4357;

				{	/* Cfa/vector.scm 139 */
					obj_t BgL_pairz00_4358;

					BgL_pairz00_4358 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_nodez00_4268))))->BgL_argsz00);
					BgL_arg1743z00_4357 = CAR(BgL_pairz00_4358);
				}
				BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1743z00_4357));
			}
			{	/* Cfa/vector.scm 140 */
				BgL_approxz00_bglt BgL_initzd2valuezd2approxz00_4359;

				{	/* Cfa/vector.scm 140 */
					obj_t BgL_arg1746z00_4360;

					{	/* Cfa/vector.scm 140 */
						obj_t BgL_pairz00_4361;

						BgL_pairz00_4361 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_nodez00_4268))))->BgL_argsz00);
						BgL_arg1746z00_4360 = CAR(CDR(BgL_pairz00_4361));
					}
					BgL_initzd2valuezd2approxz00_4359 =
						BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1746z00_4360));
				}
				{	/* Cfa/vector.scm 141 */
					BgL_approxz00_bglt BgL_arg1745z00_4362;

					{
						BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_4929;

						{
							obj_t BgL_auxz00_4930;

							{	/* Cfa/vector.scm 141 */
								BgL_objectz00_bglt BgL_tmpz00_4931;

								BgL_tmpz00_4931 =
									((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4268));
								BgL_auxz00_4930 = BGL_OBJECT_WIDENING(BgL_tmpz00_4931);
							}
							BgL_auxz00_4929 =
								((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_4930);
						}
						BgL_arg1745z00_4362 =
							(((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_4929))->
							BgL_valuezd2approxzd2);
					}
					BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg1745z00_4362,
						BgL_initzd2valuezd2approxz00_4359);
				}
				{
					BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_4938;

					{
						obj_t BgL_auxz00_4939;

						{	/* Cfa/vector.scm 142 */
							BgL_objectz00_bglt BgL_tmpz00_4940;

							BgL_tmpz00_4940 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4268));
							BgL_auxz00_4939 = BGL_OBJECT_WIDENING(BgL_tmpz00_4940);
						}
						BgL_auxz00_4938 =
							((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_4939);
					}
					return
						(((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_4938))->
						BgL_approxz00);
				}
			}
		}

	}



/* &node-setup!-vset!1597 */
	obj_t BGl_z62nodezd2setupz12zd2vsetz121597z62zzcfa_vectorz00(obj_t
		BgL_envz00_4269, obj_t BgL_nodez00_4270)
	{
		{	/* Cfa/vector.scm 126 */
			{	/* Cfa/vector.scm 128 */
				obj_t BgL_arg1731z00_4364;

				BgL_arg1731z00_4364 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_vsetz12z12_bglt) BgL_nodez00_4270))))->BgL_exprza2za2);
				BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg1731z00_4364);
			}
			{	/* Cfa/vector.scm 129 */
				BgL_vsetz12zf2cinfoze0_bglt BgL_wide1199z00_4365;

				BgL_wide1199z00_4365 =
					((BgL_vsetz12zf2cinfoze0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_vsetz12zf2cinfoze0_bgl))));
				{	/* Cfa/vector.scm 129 */
					obj_t BgL_auxz00_4955;
					BgL_objectz00_bglt BgL_tmpz00_4951;

					BgL_auxz00_4955 = ((obj_t) BgL_wide1199z00_4365);
					BgL_tmpz00_4951 =
						((BgL_objectz00_bglt)
						((BgL_vsetz12z12_bglt) ((BgL_vsetz12z12_bglt) BgL_nodez00_4270)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4951, BgL_auxz00_4955);
				}
				((BgL_objectz00_bglt)
					((BgL_vsetz12z12_bglt) ((BgL_vsetz12z12_bglt) BgL_nodez00_4270)));
				{	/* Cfa/vector.scm 129 */
					long BgL_arg1732z00_4366;

					{	/* Cfa/vector.scm 129 */
						long BgL_res2092z00_4367;

						BgL_res2092z00_4367 =
							BGL_CLASS_INDEX(BGl_vsetz12zf2Cinfoze0zzcfa_info3z00);
						BgL_arg1732z00_4366 = BgL_res2092z00_4367;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_vsetz12z12_bglt)
								((BgL_vsetz12z12_bglt) BgL_nodez00_4270))),
						BgL_arg1732z00_4366);
				}
				((BgL_vsetz12z12_bglt)
					((BgL_vsetz12z12_bglt) ((BgL_vsetz12z12_bglt) BgL_nodez00_4270)));
			}
			{
				BgL_vsetz12zf2cinfoze0_bglt BgL_auxz00_4969;

				{
					obj_t BgL_auxz00_4970;

					{	/* Cfa/vector.scm 130 */
						BgL_objectz00_bglt BgL_tmpz00_4971;

						BgL_tmpz00_4971 =
							((BgL_objectz00_bglt)
							((BgL_vsetz12z12_bglt) ((BgL_vsetz12z12_bglt) BgL_nodez00_4270)));
						BgL_auxz00_4970 = BGL_OBJECT_WIDENING(BgL_tmpz00_4971);
					}
					BgL_auxz00_4969 = ((BgL_vsetz12zf2cinfoze0_bglt) BgL_auxz00_4970);
				}
				((((BgL_vsetz12zf2cinfoze0_bglt) COBJECT(BgL_auxz00_4969))->
						BgL_approxz00) =
					((BgL_approxz00_bglt)
						BGl_makezd2typezd2approxz00zzcfa_approxz00(((BgL_typez00_bglt)
								BGl_za2unspecza2z00zztype_cachez00))), BUNSPEC);
			}
			{
				bool_t BgL_auxz00_4988;
				BgL_vsetz12zf2cinfoze0_bglt BgL_auxz00_4980;

				{	/* Cfa/vector.scm 131 */
					bool_t BgL_test2172z00_4989;

					{	/* Cfa/vector.scm 131 */
						bool_t BgL_test2173z00_4990;

						{	/* Cfa/vector.scm 131 */
							BgL_typez00_bglt BgL_arg1742z00_4368;

							BgL_arg1742z00_4368 =
								(((BgL_vsetz12z12_bglt) COBJECT(
										((BgL_vsetz12z12_bglt) BgL_nodez00_4270)))->BgL_ftypez00);
							BgL_test2173z00_4990 =
								(
								((obj_t) BgL_arg1742z00_4368) == BGl_za2_za2z00zztype_cachez00);
						}
						if (BgL_test2173z00_4990)
							{	/* Cfa/vector.scm 131 */
								BgL_test2172z00_4989 = ((bool_t) 1);
							}
						else
							{	/* Cfa/vector.scm 131 */
								BgL_typez00_bglt BgL_arg1741z00_4369;

								BgL_arg1741z00_4369 =
									(((BgL_vsetz12z12_bglt) COBJECT(
											((BgL_vsetz12z12_bglt) BgL_nodez00_4270)))->BgL_ftypez00);
								BgL_test2172z00_4989 =
									(
									((obj_t) BgL_arg1741z00_4369) ==
									BGl_za2objza2z00zztype_cachez00);
							}
					}
					if (BgL_test2172z00_4989)
						{	/* Cfa/vector.scm 131 */
							BgL_auxz00_4988 = ((bool_t) 0);
						}
					else
						{	/* Cfa/vector.scm 131 */
							BgL_auxz00_4988 = ((bool_t) 1);
						}
				}
				{
					obj_t BgL_auxz00_4981;

					{	/* Cfa/vector.scm 131 */
						BgL_objectz00_bglt BgL_tmpz00_4982;

						BgL_tmpz00_4982 =
							((BgL_objectz00_bglt)
							((BgL_vsetz12z12_bglt) ((BgL_vsetz12z12_bglt) BgL_nodez00_4270)));
						BgL_auxz00_4981 = BGL_OBJECT_WIDENING(BgL_tmpz00_4982);
					}
					BgL_auxz00_4980 = ((BgL_vsetz12zf2cinfoze0_bglt) BgL_auxz00_4981);
				}
				((((BgL_vsetz12zf2cinfoze0_bglt) COBJECT(BgL_auxz00_4980))->
						BgL_tvectorzf3zf3) = ((bool_t) BgL_auxz00_4988), BUNSPEC);
			}
			return
				((obj_t)
				((BgL_vsetz12z12_bglt) ((BgL_vsetz12z12_bglt) BgL_nodez00_4270)));
		}

	}



/* &node-setup!-vref1595 */
	obj_t BGl_z62nodezd2setupz12zd2vref1595z70zzcfa_vectorz00(obj_t
		BgL_envz00_4271, obj_t BgL_nodez00_4272)
	{
		{	/* Cfa/vector.scm 106 */
			{	/* Cfa/vector.scm 108 */
				obj_t BgL_arg1707z00_4371;

				BgL_arg1707z00_4371 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_vrefz00_bglt) BgL_nodez00_4272))))->BgL_exprza2za2);
				BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg1707z00_4371);
			}
			{	/* Cfa/vector.scm 109 */
				bool_t BgL_tvectorzf3zf3_4372;

				{	/* Cfa/vector.scm 109 */
					bool_t BgL_test2174z00_5007;

					{	/* Cfa/vector.scm 109 */
						bool_t BgL_test2175z00_5008;

						{	/* Cfa/vector.scm 109 */
							BgL_typez00_bglt BgL_arg1729z00_4373;

							BgL_arg1729z00_4373 =
								(((BgL_vrefz00_bglt) COBJECT(
										((BgL_vrefz00_bglt) BgL_nodez00_4272)))->BgL_ftypez00);
							BgL_test2175z00_5008 =
								(
								((obj_t) BgL_arg1729z00_4373) == BGl_za2_za2z00zztype_cachez00);
						}
						if (BgL_test2175z00_5008)
							{	/* Cfa/vector.scm 109 */
								BgL_test2174z00_5007 = ((bool_t) 1);
							}
						else
							{	/* Cfa/vector.scm 109 */
								BgL_typez00_bglt BgL_arg1728z00_4374;

								BgL_arg1728z00_4374 =
									(((BgL_vrefz00_bglt) COBJECT(
											((BgL_vrefz00_bglt) BgL_nodez00_4272)))->BgL_ftypez00);
								BgL_test2174z00_5007 =
									(
									((obj_t) BgL_arg1728z00_4374) ==
									BGl_za2objza2z00zztype_cachez00);
							}
					}
					if (BgL_test2174z00_5007)
						{	/* Cfa/vector.scm 109 */
							BgL_tvectorzf3zf3_4372 = ((bool_t) 0);
						}
					else
						{	/* Cfa/vector.scm 109 */
							BgL_tvectorzf3zf3_4372 = ((bool_t) 1);
						}
				}
				{	/* Cfa/vector.scm 109 */
					BgL_approxz00_bglt BgL_approxz00_4375;

					if (BgL_tvectorzf3zf3_4372)
						{	/* Cfa/vector.scm 111 */
							BgL_approxz00_4375 =
								BGl_makezd2typezd2approxz00zzcfa_approxz00(
								(((BgL_vrefz00_bglt) COBJECT(
											((BgL_vrefz00_bglt) BgL_nodez00_4272)))->BgL_ftypez00));
						}
					else
						{	/* Cfa/vector.scm 111 */
							if (
								((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >=
									((long) 2)))
								{	/* Cfa/vector.scm 113 */
									BgL_approxz00_4375 =
										BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
								}
							else
								{	/* Cfa/vector.scm 116 */
									BgL_approxz00_bglt BgL_approxz00_4376;

									BgL_approxz00_4376 =
										BGl_makezd2typezd2approxz00zzcfa_approxz00(
										((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
									BGl_approxzd2setzd2topz12z12zzcfa_approxz00
										(BgL_approxz00_4376);
									BgL_approxz00_4375 = BgL_approxz00_4376;
								}
						}
					{	/* Cfa/vector.scm 110 */

						{	/* Cfa/vector.scm 119 */
							BgL_vrefzf2cinfozf2_bglt BgL_wide1194z00_4377;

							BgL_wide1194z00_4377 =
								((BgL_vrefzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_vrefzf2cinfozf2_bgl))));
							{	/* Cfa/vector.scm 119 */
								obj_t BgL_auxz00_5033;
								BgL_objectz00_bglt BgL_tmpz00_5029;

								BgL_auxz00_5033 = ((obj_t) BgL_wide1194z00_4377);
								BgL_tmpz00_5029 =
									((BgL_objectz00_bglt)
									((BgL_vrefz00_bglt) ((BgL_vrefz00_bglt) BgL_nodez00_4272)));
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5029, BgL_auxz00_5033);
							}
							((BgL_objectz00_bglt)
								((BgL_vrefz00_bglt) ((BgL_vrefz00_bglt) BgL_nodez00_4272)));
							{	/* Cfa/vector.scm 119 */
								long BgL_arg1708z00_4378;

								{	/* Cfa/vector.scm 119 */
									long BgL_res2091z00_4379;

									BgL_res2091z00_4379 =
										BGL_CLASS_INDEX(BGl_vrefzf2Cinfozf2zzcfa_info3z00);
									BgL_arg1708z00_4378 = BgL_res2091z00_4379;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt)
										((BgL_vrefz00_bglt)
											((BgL_vrefz00_bglt) BgL_nodez00_4272))),
									BgL_arg1708z00_4378);
							}
							((BgL_vrefz00_bglt)
								((BgL_vrefz00_bglt) ((BgL_vrefz00_bglt) BgL_nodez00_4272)));
						}
						{
							BgL_vrefzf2cinfozf2_bglt BgL_auxz00_5047;

							{
								obj_t BgL_auxz00_5048;

								{	/* Cfa/vector.scm 120 */
									BgL_objectz00_bglt BgL_tmpz00_5049;

									BgL_tmpz00_5049 =
										((BgL_objectz00_bglt)
										((BgL_vrefz00_bglt) ((BgL_vrefz00_bglt) BgL_nodez00_4272)));
									BgL_auxz00_5048 = BGL_OBJECT_WIDENING(BgL_tmpz00_5049);
								}
								BgL_auxz00_5047 = ((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_5048);
							}
							((((BgL_vrefzf2cinfozf2_bglt) COBJECT(BgL_auxz00_5047))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approxz00_4375), BUNSPEC);
						}
						{
							BgL_vrefzf2cinfozf2_bglt BgL_auxz00_5056;

							{
								obj_t BgL_auxz00_5057;

								{	/* Cfa/vector.scm 121 */
									BgL_objectz00_bglt BgL_tmpz00_5058;

									BgL_tmpz00_5058 =
										((BgL_objectz00_bglt)
										((BgL_vrefz00_bglt) ((BgL_vrefz00_bglt) BgL_nodez00_4272)));
									BgL_auxz00_5057 = BGL_OBJECT_WIDENING(BgL_tmpz00_5058);
								}
								BgL_auxz00_5056 = ((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_5057);
							}
							((((BgL_vrefzf2cinfozf2_bglt) COBJECT(BgL_auxz00_5056))->
									BgL_tvectorzf3zf3) =
								((bool_t) BgL_tvectorzf3zf3_4372), BUNSPEC);
						}
						return
							((obj_t)
							((BgL_vrefz00_bglt) ((BgL_vrefz00_bglt) BgL_nodez00_4272)));
					}
				}
			}
		}

	}



/* &node-setup!-vlength1593 */
	obj_t BGl_z62nodezd2setupz12zd2vlength1593z70zzcfa_vectorz00(obj_t
		BgL_envz00_4273, obj_t BgL_nodez00_4274)
	{
		{	/* Cfa/vector.scm 96 */
			{	/* Cfa/vector.scm 98 */
				obj_t BgL_arg1692z00_4381;

				{	/* Cfa/vector.scm 98 */
					obj_t BgL_pairz00_4382;

					BgL_pairz00_4382 =
						(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt)
									((BgL_vlengthz00_bglt) BgL_nodez00_4274))))->BgL_exprza2za2);
					BgL_arg1692z00_4381 = CAR(BgL_pairz00_4382);
				}
				BGl_nodezd2setupz12zc0zzcfa_setupz00(
					((BgL_nodez00_bglt) BgL_arg1692z00_4381));
			}
			{	/* Cfa/vector.scm 99 */
				BgL_vlengthzf2cinfozf2_bglt BgL_wide1189z00_4383;

				BgL_wide1189z00_4383 =
					((BgL_vlengthzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_vlengthzf2cinfozf2_bgl))));
				{	/* Cfa/vector.scm 99 */
					obj_t BgL_auxz00_5079;
					BgL_objectz00_bglt BgL_tmpz00_5075;

					BgL_auxz00_5079 = ((obj_t) BgL_wide1189z00_4383);
					BgL_tmpz00_5075 =
						((BgL_objectz00_bglt)
						((BgL_vlengthz00_bglt) ((BgL_vlengthz00_bglt) BgL_nodez00_4274)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5075, BgL_auxz00_5079);
				}
				((BgL_objectz00_bglt)
					((BgL_vlengthz00_bglt) ((BgL_vlengthz00_bglt) BgL_nodez00_4274)));
				{	/* Cfa/vector.scm 99 */
					long BgL_arg1696z00_4384;

					{	/* Cfa/vector.scm 99 */
						long BgL_res2087z00_4385;

						BgL_res2087z00_4385 =
							BGL_CLASS_INDEX(BGl_vlengthzf2Cinfozf2zzcfa_info3z00);
						BgL_arg1696z00_4384 = BgL_res2087z00_4385;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_vlengthz00_bglt)
								((BgL_vlengthz00_bglt) BgL_nodez00_4274))),
						BgL_arg1696z00_4384);
				}
				((BgL_vlengthz00_bglt)
					((BgL_vlengthz00_bglt) ((BgL_vlengthz00_bglt) BgL_nodez00_4274)));
			}
			{
				BgL_approxz00_bglt BgL_auxz00_5101;
				BgL_vlengthzf2cinfozf2_bglt BgL_auxz00_5093;

				{	/* Cfa/vector.scm 100 */
					BgL_typez00_bglt BgL_arg1697z00_4386;

					BgL_arg1697z00_4386 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_vlengthz00_bglt) BgL_nodez00_4274))))->BgL_typez00);
					BgL_auxz00_5101 =
						BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_arg1697z00_4386);
				}
				{
					obj_t BgL_auxz00_5094;

					{	/* Cfa/vector.scm 100 */
						BgL_objectz00_bglt BgL_tmpz00_5095;

						BgL_tmpz00_5095 =
							((BgL_objectz00_bglt)
							((BgL_vlengthz00_bglt) ((BgL_vlengthz00_bglt) BgL_nodez00_4274)));
						BgL_auxz00_5094 = BGL_OBJECT_WIDENING(BgL_tmpz00_5095);
					}
					BgL_auxz00_5093 = ((BgL_vlengthzf2cinfozf2_bglt) BgL_auxz00_5094);
				}
				((((BgL_vlengthzf2cinfozf2_bglt) COBJECT(BgL_auxz00_5093))->
						BgL_approxz00) = ((BgL_approxz00_bglt) BgL_auxz00_5101), BUNSPEC);
			}
			{
				BgL_vlengthzf2cinfozf2_bglt BgL_auxz00_5107;

				{
					obj_t BgL_auxz00_5108;

					{	/* Cfa/vector.scm 101 */
						BgL_objectz00_bglt BgL_tmpz00_5109;

						BgL_tmpz00_5109 =
							((BgL_objectz00_bglt)
							((BgL_vlengthz00_bglt) ((BgL_vlengthz00_bglt) BgL_nodez00_4274)));
						BgL_auxz00_5108 = BGL_OBJECT_WIDENING(BgL_tmpz00_5109);
					}
					BgL_auxz00_5107 = ((BgL_vlengthzf2cinfozf2_bglt) BgL_auxz00_5108);
				}
				((((BgL_vlengthzf2cinfozf2_bglt) COBJECT(BgL_auxz00_5107))->
						BgL_tvectorzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
			}
			return
				((obj_t)
				((BgL_vlengthz00_bglt) ((BgL_vlengthz00_bglt) BgL_nodez00_4274)));
		}

	}



/* &node-setup!-valloc1591 */
	obj_t BGl_z62nodezd2setupz12zd2valloc1591z70zzcfa_vectorz00(obj_t
		BgL_envz00_4275, obj_t BgL_nodez00_4276)
	{
		{	/* Cfa/vector.scm 83 */
			{	/* Cfa/vector.scm 85 */
				obj_t BgL_arg1686z00_4388;

				BgL_arg1686z00_4388 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_vallocz00_bglt) BgL_nodez00_4276))))->BgL_exprza2za2);
				BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg1686z00_4388);
			}
			{	/* Cfa/vector.scm 87 */
				BgL_approxz00_bglt BgL_approxz00_4389;

				{	/* Cfa/vector.scm 87 */
					BgL_typez00_bglt BgL_arg1688z00_4390;

					BgL_arg1688z00_4390 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_vallocz00_bglt) BgL_nodez00_4276))))->BgL_typez00);
					BgL_approxz00_4389 =
						BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_arg1688z00_4390);
				}
				{	/* Cfa/vector.scm 87 */
					BgL_vallocz00_bglt BgL_wnodez00_4391;

					{	/* Cfa/vector.scm 88 */
						BgL_valloczf2cinfozf2_bglt BgL_wide1184z00_4392;

						BgL_wide1184z00_4392 =
							((BgL_valloczf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_valloczf2cinfozf2_bgl))));
						{	/* Cfa/vector.scm 88 */
							obj_t BgL_auxz00_5132;
							BgL_objectz00_bglt BgL_tmpz00_5128;

							BgL_auxz00_5132 = ((obj_t) BgL_wide1184z00_4392);
							BgL_tmpz00_5128 =
								((BgL_objectz00_bglt)
								((BgL_vallocz00_bglt) ((BgL_vallocz00_bglt) BgL_nodez00_4276)));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5128, BgL_auxz00_5132);
						}
						((BgL_objectz00_bglt)
							((BgL_vallocz00_bglt) ((BgL_vallocz00_bglt) BgL_nodez00_4276)));
						{	/* Cfa/vector.scm 88 */
							long BgL_arg1687z00_4393;

							{	/* Cfa/vector.scm 88 */
								long BgL_res2086z00_4394;

								BgL_res2086z00_4394 =
									BGL_CLASS_INDEX(BGl_valloczf2Cinfozf2zzcfa_info3z00);
								BgL_arg1687z00_4393 = BgL_res2086z00_4394;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_vallocz00_bglt)
										((BgL_vallocz00_bglt) BgL_nodez00_4276))),
								BgL_arg1687z00_4393);
						}
						((BgL_vallocz00_bglt)
							((BgL_vallocz00_bglt) ((BgL_vallocz00_bglt) BgL_nodez00_4276)));
					}
					{
						BgL_valloczf2cinfozf2_bglt BgL_auxz00_5146;

						{
							obj_t BgL_auxz00_5147;

							{	/* Cfa/vector.scm 89 */
								BgL_objectz00_bglt BgL_tmpz00_5148;

								BgL_tmpz00_5148 =
									((BgL_objectz00_bglt)
									((BgL_vallocz00_bglt)
										((BgL_vallocz00_bglt) BgL_nodez00_4276)));
								BgL_auxz00_5147 = BGL_OBJECT_WIDENING(BgL_tmpz00_5148);
							}
							BgL_auxz00_5146 = ((BgL_valloczf2cinfozf2_bglt) BgL_auxz00_5147);
						}
						((((BgL_valloczf2cinfozf2_bglt) COBJECT(BgL_auxz00_5146))->
								BgL_approxz00) =
							((BgL_approxz00_bglt) BgL_approxz00_4389), BUNSPEC);
					}
					BgL_wnodez00_4391 =
						((BgL_vallocz00_bglt) ((BgL_vallocz00_bglt) BgL_nodez00_4276));
					{	/* Cfa/vector.scm 88 */

						BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_approxz00_4389);
						return ((obj_t) BgL_wnodez00_4391);
					}
				}
			}
		}

	}



/* &node-setup!-pre-vall1589 */
	obj_t BGl_z62nodezd2setupz12zd2prezd2vall1589za2zzcfa_vectorz00(obj_t
		BgL_envz00_4277, obj_t BgL_nodez00_4278)
	{
		{	/* Cfa/vector.scm 63 */
			BGl_addzd2makezd2vectorz12z12zzcfa_tvectorz00(
				((BgL_nodez00_bglt) ((BgL_vallocz00_bglt) BgL_nodez00_4278)));
			{	/* Cfa/vector.scm 66 */
				obj_t BgL_arg1644z00_4396;

				BgL_arg1644z00_4396 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_vallocz00_bglt) BgL_nodez00_4278))))->BgL_exprza2za2);
				BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg1644z00_4396);
			}
			{	/* Cfa/vector.scm 67 */
				BgL_variablez00_bglt BgL_ownerz00_4397;

				{
					BgL_prezd2valloczf2cinfoz20_bglt BgL_auxz00_5166;

					{
						obj_t BgL_auxz00_5167;

						{	/* Cfa/vector.scm 67 */
							BgL_objectz00_bglt BgL_tmpz00_5168;

							BgL_tmpz00_5168 =
								((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_nodez00_4278));
							BgL_auxz00_5167 = BGL_OBJECT_WIDENING(BgL_tmpz00_5168);
						}
						BgL_auxz00_5166 =
							((BgL_prezd2valloczf2cinfoz20_bglt) BgL_auxz00_5167);
					}
					BgL_ownerz00_4397 =
						(((BgL_prezd2valloczf2cinfoz20_bglt) COBJECT(BgL_auxz00_5166))->
						BgL_ownerz00);
				}
				{	/* Cfa/vector.scm 67 */
					BgL_vallocz00_bglt BgL_nodez00_4398;

					{	/* Cfa/vector.scm 68 */
						long BgL_arg1672z00_4399;

						{	/* Cfa/vector.scm 68 */
							obj_t BgL_arg1684z00_4400;

							{	/* Cfa/vector.scm 68 */
								obj_t BgL_arg1685z00_4401;

								{	/* Cfa/vector.scm 68 */
									long BgL_arg1816z00_4402;

									{	/* Cfa/vector.scm 68 */
										long BgL_arg1817z00_4403;

										{	/* Cfa/vector.scm 68 */
											long BgL_res2082z00_4404;

											BgL_res2082z00_4404 =
												BGL_OBJECT_CLASS_NUM(
												((BgL_objectz00_bglt)
													((BgL_vallocz00_bglt) BgL_nodez00_4278)));
											BgL_arg1817z00_4403 = BgL_res2082z00_4404;
										}
										BgL_arg1816z00_4402 = (BgL_arg1817z00_4403 - OBJECT_TYPE);
									}
									BgL_arg1685z00_4401 =
										VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
										BgL_arg1816z00_4402);
								}
								BgL_arg1684z00_4400 =
									BGl_classzd2superzd2zz__objectz00(BgL_arg1685z00_4401);
							}
							{	/* Cfa/vector.scm 68 */
								long BgL_res2084z00_4405;

								{	/* Cfa/vector.scm 68 */
									obj_t BgL_tmpz00_5180;

									BgL_tmpz00_5180 = ((obj_t) BgL_arg1684z00_4400);
									BgL_res2084z00_4405 = BGL_CLASS_INDEX(BgL_tmpz00_5180);
								}
								BgL_arg1672z00_4399 = BgL_res2084z00_4405;
						}}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt)
								((BgL_vallocz00_bglt) BgL_nodez00_4278)), BgL_arg1672z00_4399);
					}
					{	/* Cfa/vector.scm 68 */
						BgL_objectz00_bglt BgL_tmpz00_5186;

						BgL_tmpz00_5186 =
							((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_nodez00_4278));
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5186, BFALSE);
					}
					((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_nodez00_4278));
					BgL_nodez00_4398 = ((BgL_vallocz00_bglt) BgL_nodez00_4278);
					{	/* Cfa/vector.scm 68 */

						{	/* Cfa/vector.scm 69 */
							BgL_vallocz00_bglt BgL_wnodez00_4406;

							{	/* Cfa/vector.scm 69 */
								BgL_valloczf2cinfozb2optimz40_bglt BgL_wide1179z00_4407;

								BgL_wide1179z00_4407 =
									((BgL_valloczf2cinfozb2optimz40_bglt)
									BOBJECT(GC_MALLOC(sizeof(struct
												BgL_valloczf2cinfozb2optimz40_bgl))));
								{	/* Cfa/vector.scm 69 */
									obj_t BgL_auxz00_5198;
									BgL_objectz00_bglt BgL_tmpz00_5194;

									BgL_auxz00_5198 = ((obj_t) BgL_wide1179z00_4407);
									BgL_tmpz00_5194 =
										((BgL_objectz00_bglt)
										((BgL_vallocz00_bglt)
											((BgL_vallocz00_bglt) BgL_nodez00_4398)));
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5194, BgL_auxz00_5198);
								}
								((BgL_objectz00_bglt)
									((BgL_vallocz00_bglt)
										((BgL_vallocz00_bglt) BgL_nodez00_4398)));
								{	/* Cfa/vector.scm 69 */
									long BgL_arg1663z00_4408;

									{	/* Cfa/vector.scm 69 */
										long BgL_res2085z00_4409;

										BgL_res2085z00_4409 =
											BGL_CLASS_INDEX
											(BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00);
										BgL_arg1663z00_4408 = BgL_res2085z00_4409;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt)
											((BgL_vallocz00_bglt)
												((BgL_vallocz00_bglt) BgL_nodez00_4398))),
										BgL_arg1663z00_4408);
								}
								((BgL_vallocz00_bglt)
									((BgL_vallocz00_bglt)
										((BgL_vallocz00_bglt) BgL_nodez00_4398)));
							}
							{
								BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_5212;

								{
									obj_t BgL_auxz00_5213;

									{	/* Cfa/vector.scm 71 */
										BgL_objectz00_bglt BgL_tmpz00_5214;

										BgL_tmpz00_5214 =
											((BgL_objectz00_bglt)
											((BgL_vallocz00_bglt)
												((BgL_vallocz00_bglt) BgL_nodez00_4398)));
										BgL_auxz00_5213 = BGL_OBJECT_WIDENING(BgL_tmpz00_5214);
									}
									BgL_auxz00_5212 =
										((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_5213);
								}
								((((BgL_valloczf2cinfozb2optimz40_bglt)
											COBJECT(BgL_auxz00_5212))->BgL_approxz00) =
									((BgL_approxz00_bglt)
										BGl_makezd2emptyzd2approxz00zzcfa_approxz00()), BUNSPEC);
							}
							{
								BgL_approxz00_bglt BgL_auxz00_5230;
								BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_5222;

								{	/* Cfa/vector.scm 72 */
									bool_t BgL_test2178z00_5231;

									{	/* Cfa/vector.scm 72 */
										BgL_typez00_bglt BgL_arg1669z00_4410;

										BgL_arg1669z00_4410 =
											(((BgL_vallocz00_bglt) COBJECT(
													((BgL_vallocz00_bglt)
														((BgL_vallocz00_bglt) BgL_nodez00_4278))))->
											BgL_ftypez00);
										BgL_test2178z00_5231 =
											(((obj_t) BgL_arg1669z00_4410) ==
											BGl_za2_za2z00zztype_cachez00);
									}
									if (BgL_test2178z00_5231)
										{	/* Cfa/vector.scm 72 */
											BgL_auxz00_5230 =
												BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
										}
									else
										{	/* Cfa/vector.scm 74 */
											BgL_typez00_bglt BgL_arg1667z00_4411;

											BgL_arg1667z00_4411 =
												(((BgL_vallocz00_bglt) COBJECT(
														((BgL_vallocz00_bglt)
															((BgL_vallocz00_bglt) BgL_nodez00_4278))))->
												BgL_ftypez00);
											BgL_auxz00_5230 =
												BGl_makezd2typezd2approxz00zzcfa_approxz00
												(BgL_arg1667z00_4411);
										}
								}
								{
									obj_t BgL_auxz00_5223;

									{	/* Cfa/vector.scm 72 */
										BgL_objectz00_bglt BgL_tmpz00_5224;

										BgL_tmpz00_5224 =
											((BgL_objectz00_bglt)
											((BgL_vallocz00_bglt)
												((BgL_vallocz00_bglt) BgL_nodez00_4398)));
										BgL_auxz00_5223 = BGL_OBJECT_WIDENING(BgL_tmpz00_5224);
									}
									BgL_auxz00_5222 =
										((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_5223);
								}
								((((BgL_valloczf2cinfozb2optimz40_bglt)
											COBJECT(BgL_auxz00_5222))->BgL_valuezd2approxzd2) =
									((BgL_approxz00_bglt) BgL_auxz00_5230), BUNSPEC);
							}
							{
								BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_5243;

								{
									obj_t BgL_auxz00_5244;

									{	/* Cfa/vector.scm 68 */
										BgL_objectz00_bglt BgL_tmpz00_5245;

										BgL_tmpz00_5245 =
											((BgL_objectz00_bglt)
											((BgL_vallocz00_bglt)
												((BgL_vallocz00_bglt) BgL_nodez00_4398)));
										BgL_auxz00_5244 = BGL_OBJECT_WIDENING(BgL_tmpz00_5245);
									}
									BgL_auxz00_5243 =
										((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_5244);
								}
								((((BgL_valloczf2cinfozb2optimz40_bglt)
											COBJECT(BgL_auxz00_5243))->BgL_lostzd2stampzd2) =
									((long) ((long) -1)), BUNSPEC);
							}
							{
								BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_5252;

								{
									obj_t BgL_auxz00_5253;

									{	/* Cfa/vector.scm 70 */
										BgL_objectz00_bglt BgL_tmpz00_5254;

										BgL_tmpz00_5254 =
											((BgL_objectz00_bglt)
											((BgL_vallocz00_bglt)
												((BgL_vallocz00_bglt) BgL_nodez00_4398)));
										BgL_auxz00_5253 = BGL_OBJECT_WIDENING(BgL_tmpz00_5254);
									}
									BgL_auxz00_5252 =
										((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_5253);
								}
								((((BgL_valloczf2cinfozb2optimz40_bglt)
											COBJECT(BgL_auxz00_5252))->BgL_ownerz00) =
									((BgL_variablez00_bglt) BgL_ownerz00_4397), BUNSPEC);
							}
							{
								BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_5261;

								{
									obj_t BgL_auxz00_5262;

									{	/* Cfa/vector.scm 68 */
										BgL_objectz00_bglt BgL_tmpz00_5263;

										BgL_tmpz00_5263 =
											((BgL_objectz00_bglt)
											((BgL_vallocz00_bglt)
												((BgL_vallocz00_bglt) BgL_nodez00_4398)));
										BgL_auxz00_5262 = BGL_OBJECT_WIDENING(BgL_tmpz00_5263);
									}
									BgL_auxz00_5261 =
										((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_5262);
								}
								((((BgL_valloczf2cinfozb2optimz40_bglt)
											COBJECT(BgL_auxz00_5261))->BgL_stackablezf3zf3) =
									((bool_t) ((bool_t) 1)), BUNSPEC);
							}
							{
								BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_5270;

								{
									obj_t BgL_auxz00_5271;

									{	/* Cfa/vector.scm 68 */
										BgL_objectz00_bglt BgL_tmpz00_5272;

										BgL_tmpz00_5272 =
											((BgL_objectz00_bglt)
											((BgL_vallocz00_bglt)
												((BgL_vallocz00_bglt) BgL_nodez00_4398)));
										BgL_auxz00_5271 = BGL_OBJECT_WIDENING(BgL_tmpz00_5272);
									}
									BgL_auxz00_5270 =
										((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_5271);
								}
								((((BgL_valloczf2cinfozb2optimz40_bglt)
											COBJECT(BgL_auxz00_5270))->BgL_stackzd2stampzd2) =
									((obj_t) BNIL), BUNSPEC);
							}
							{
								BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_5279;

								{
									obj_t BgL_auxz00_5280;

									{	/* Cfa/vector.scm 68 */
										BgL_objectz00_bglt BgL_tmpz00_5281;

										BgL_tmpz00_5281 =
											((BgL_objectz00_bglt)
											((BgL_vallocz00_bglt)
												((BgL_vallocz00_bglt) BgL_nodez00_4398)));
										BgL_auxz00_5280 = BGL_OBJECT_WIDENING(BgL_tmpz00_5281);
									}
									BgL_auxz00_5279 =
										((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_5280);
								}
								((((BgL_valloczf2cinfozb2optimz40_bglt)
											COBJECT(BgL_auxz00_5279))->BgL_seenzf3zf3) =
									((bool_t) ((bool_t) 0)), BUNSPEC);
							}
							BgL_wnodez00_4406 =
								((BgL_vallocz00_bglt) ((BgL_vallocz00_bglt) BgL_nodez00_4398));
							{	/* Cfa/vector.scm 78 */
								BgL_approxz00_bglt BgL_arg1652z00_4412;

								{	/* Cfa/vector.scm 78 */
									BgL_typez00_bglt BgL_arg1662z00_4413;

									BgL_arg1662z00_4413 =
										(((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt)
													((BgL_vallocz00_bglt) BgL_nodez00_4278))))->
										BgL_typez00);
									BgL_arg1652z00_4412 =
										BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00
										(BgL_arg1662z00_4413,
										((BgL_nodez00_bglt) BgL_nodez00_4398));
								}
								{
									BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_5295;

									{
										obj_t BgL_auxz00_5296;

										{	/* Cfa/vector.scm 76 */
											BgL_objectz00_bglt BgL_tmpz00_5297;

											BgL_tmpz00_5297 =
												((BgL_objectz00_bglt) BgL_wnodez00_4406);
											BgL_auxz00_5296 = BGL_OBJECT_WIDENING(BgL_tmpz00_5297);
										}
										BgL_auxz00_5295 =
											((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_5296);
									}
									return
										((((BgL_valloczf2cinfozb2optimz40_bglt)
												COBJECT(BgL_auxz00_5295))->BgL_approxz00) =
										((BgL_approxz00_bglt) BgL_arg1652z00_4412), BUNSPEC);
								}
							}
						}
					}
				}
			}
		}

	}



/* &node-setup!-pre-make1587 */
	obj_t BGl_z62nodezd2setupz12zd2prezd2make1587za2zzcfa_vectorz00(obj_t
		BgL_envz00_4279, obj_t BgL_nodez00_4280)
	{
		{	/* Cfa/vector.scm 46 */
			BGl_addzd2makezd2vectorz12z12zzcfa_tvectorz00(
				((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4280)));
			{	/* Cfa/vector.scm 49 */
				obj_t BgL_arg1627z00_4415;

				BgL_arg1627z00_4415 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_nodez00_4280))))->BgL_argsz00);
				BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg1627z00_4415);
			}
			{	/* Cfa/vector.scm 50 */
				BgL_variablez00_bglt BgL_ownerz00_4416;

				{
					BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_auxz00_5309;

					{
						obj_t BgL_auxz00_5310;

						{	/* Cfa/vector.scm 50 */
							BgL_objectz00_bglt BgL_tmpz00_5311;

							BgL_tmpz00_5311 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4280));
							BgL_auxz00_5310 = BGL_OBJECT_WIDENING(BgL_tmpz00_5311);
						}
						BgL_auxz00_5309 =
							((BgL_prezd2makezd2vectorzd2appzd2_bglt) BgL_auxz00_5310);
					}
					BgL_ownerz00_4416 =
						(((BgL_prezd2makezd2vectorzd2appzd2_bglt)
							COBJECT(BgL_auxz00_5309))->BgL_ownerz00);
				}
				{	/* Cfa/vector.scm 50 */
					BgL_appz00_bglt BgL_nodez00_4417;

					{	/* Cfa/vector.scm 51 */
						long BgL_arg1639z00_4418;

						{	/* Cfa/vector.scm 51 */
							obj_t BgL_arg1640z00_4419;

							{	/* Cfa/vector.scm 51 */
								obj_t BgL_arg1641z00_4420;

								{	/* Cfa/vector.scm 51 */
									long BgL_arg1816z00_4421;

									{	/* Cfa/vector.scm 51 */
										long BgL_arg1817z00_4422;

										{	/* Cfa/vector.scm 51 */
											long BgL_res2078z00_4423;

											BgL_res2078z00_4423 =
												BGL_OBJECT_CLASS_NUM(
												((BgL_objectz00_bglt)
													((BgL_appz00_bglt) BgL_nodez00_4280)));
											BgL_arg1817z00_4422 = BgL_res2078z00_4423;
										}
										BgL_arg1816z00_4421 = (BgL_arg1817z00_4422 - OBJECT_TYPE);
									}
									BgL_arg1641z00_4420 =
										VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
										BgL_arg1816z00_4421);
								}
								BgL_arg1640z00_4419 =
									BGl_classzd2superzd2zz__objectz00(BgL_arg1641z00_4420);
							}
							{	/* Cfa/vector.scm 51 */
								long BgL_res2080z00_4424;

								{	/* Cfa/vector.scm 51 */
									obj_t BgL_tmpz00_5323;

									BgL_tmpz00_5323 = ((obj_t) BgL_arg1640z00_4419);
									BgL_res2080z00_4424 = BGL_CLASS_INDEX(BgL_tmpz00_5323);
								}
								BgL_arg1639z00_4418 = BgL_res2080z00_4424;
						}}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt)
								((BgL_appz00_bglt) BgL_nodez00_4280)), BgL_arg1639z00_4418);
					}
					{	/* Cfa/vector.scm 51 */
						BgL_objectz00_bglt BgL_tmpz00_5329;

						BgL_tmpz00_5329 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4280));
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5329, BFALSE);
					}
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4280));
					BgL_nodez00_4417 = ((BgL_appz00_bglt) BgL_nodez00_4280);
					{	/* Cfa/vector.scm 51 */

						{	/* Cfa/vector.scm 52 */
							BgL_appz00_bglt BgL_wnodez00_4425;

							{	/* Cfa/vector.scm 52 */
								BgL_makezd2vectorzd2appz00_bglt BgL_wide1173z00_4426;

								BgL_wide1173z00_4426 =
									((BgL_makezd2vectorzd2appz00_bglt)
									BOBJECT(GC_MALLOC(sizeof(struct
												BgL_makezd2vectorzd2appz00_bgl))));
								{	/* Cfa/vector.scm 52 */
									obj_t BgL_auxz00_5341;
									BgL_objectz00_bglt BgL_tmpz00_5337;

									BgL_auxz00_5341 = ((obj_t) BgL_wide1173z00_4426);
									BgL_tmpz00_5337 =
										((BgL_objectz00_bglt)
										((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4417)));
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5337, BgL_auxz00_5341);
								}
								((BgL_objectz00_bglt)
									((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4417)));
								{	/* Cfa/vector.scm 52 */
									long BgL_arg1634z00_4427;

									{	/* Cfa/vector.scm 52 */
										long BgL_res2081z00_4428;

										BgL_res2081z00_4428 =
											BGL_CLASS_INDEX(BGl_makezd2vectorzd2appz00zzcfa_info2z00);
										BgL_arg1634z00_4427 = BgL_res2081z00_4428;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt)
												((BgL_appz00_bglt) BgL_nodez00_4417))),
										BgL_arg1634z00_4427);
								}
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4417)));
							}
							{
								BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_5355;

								{
									obj_t BgL_auxz00_5356;

									{	/* Cfa/vector.scm 54 */
										BgL_objectz00_bglt BgL_tmpz00_5357;

										BgL_tmpz00_5357 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4417)));
										BgL_auxz00_5356 = BGL_OBJECT_WIDENING(BgL_tmpz00_5357);
									}
									BgL_auxz00_5355 =
										((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_5356);
								}
								((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_5355))->
										BgL_approxz00) =
									((BgL_approxz00_bglt)
										BGl_makezd2emptyzd2approxz00zzcfa_approxz00()), BUNSPEC);
							}
							{
								BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_5365;

								{
									obj_t BgL_auxz00_5366;

									{	/* Cfa/vector.scm 55 */
										BgL_objectz00_bglt BgL_tmpz00_5367;

										BgL_tmpz00_5367 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4417)));
										BgL_auxz00_5366 = BGL_OBJECT_WIDENING(BgL_tmpz00_5367);
									}
									BgL_auxz00_5365 =
										((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_5366);
								}
								((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_5365))->
										BgL_valuezd2approxzd2) =
									((BgL_approxz00_bglt)
										BGl_makezd2emptyzd2approxz00zzcfa_approxz00()), BUNSPEC);
							}
							{
								BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_5375;

								{
									obj_t BgL_auxz00_5376;

									{	/* Cfa/vector.scm 51 */
										BgL_objectz00_bglt BgL_tmpz00_5377;

										BgL_tmpz00_5377 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4417)));
										BgL_auxz00_5376 = BGL_OBJECT_WIDENING(BgL_tmpz00_5377);
									}
									BgL_auxz00_5375 =
										((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_5376);
								}
								((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_5375))->
										BgL_lostzd2stampzd2) = ((long) ((long) -1)), BUNSPEC);
							}
							{
								BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_5384;

								{
									obj_t BgL_auxz00_5385;

									{	/* Cfa/vector.scm 53 */
										BgL_objectz00_bglt BgL_tmpz00_5386;

										BgL_tmpz00_5386 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4417)));
										BgL_auxz00_5385 = BGL_OBJECT_WIDENING(BgL_tmpz00_5386);
									}
									BgL_auxz00_5384 =
										((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_5385);
								}
								((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_5384))->
										BgL_ownerz00) =
									((BgL_variablez00_bglt) BgL_ownerz00_4416), BUNSPEC);
							}
							{
								BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_5393;

								{
									obj_t BgL_auxz00_5394;

									{	/* Cfa/vector.scm 51 */
										BgL_objectz00_bglt BgL_tmpz00_5395;

										BgL_tmpz00_5395 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4417)));
										BgL_auxz00_5394 = BGL_OBJECT_WIDENING(BgL_tmpz00_5395);
									}
									BgL_auxz00_5393 =
										((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_5394);
								}
								((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_5393))->
										BgL_stackzd2stampzd2) = ((obj_t) BNIL), BUNSPEC);
							}
							{
								BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_5402;

								{
									obj_t BgL_auxz00_5403;

									{	/* Cfa/vector.scm 51 */
										BgL_objectz00_bglt BgL_tmpz00_5404;

										BgL_tmpz00_5404 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4417)));
										BgL_auxz00_5403 = BGL_OBJECT_WIDENING(BgL_tmpz00_5404);
									}
									BgL_auxz00_5402 =
										((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_5403);
								}
								((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_5402))->
										BgL_seenzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
							}
							BgL_wnodez00_4425 =
								((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4417));
							{	/* Cfa/vector.scm 58 */
								BgL_approxz00_bglt BgL_arg1631z00_4429;

								BgL_arg1631z00_4429 =
									BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00(
									((BgL_typez00_bglt) BGl_za2vectorza2z00zztype_cachez00),
									((BgL_nodez00_bglt) BgL_nodez00_4417));
								{
									BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_5416;

									{
										obj_t BgL_auxz00_5417;

										{	/* Cfa/vector.scm 57 */
											BgL_objectz00_bglt BgL_tmpz00_5418;

											BgL_tmpz00_5418 =
												((BgL_objectz00_bglt) BgL_wnodez00_4425);
											BgL_auxz00_5417 = BGL_OBJECT_WIDENING(BgL_tmpz00_5418);
										}
										BgL_auxz00_5416 =
											((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_5417);
									}
									return
										((((BgL_makezd2vectorzd2appz00_bglt)
												COBJECT(BgL_auxz00_5416))->BgL_approxz00) =
										((BgL_approxz00_bglt) BgL_arg1631z00_4429), BUNSPEC);
								}
							}
						}
					}
				}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_vectorz00()
	{
		{	/* Cfa/vector.scm 17 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2127z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2127z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2127z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2127z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2127z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2127z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2127z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2127z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 3788706),
				BSTRING_TO_STRING(BGl_string2127z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string2127z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_info3z00(((long) 0),
				BSTRING_TO_STRING(BGl_string2127z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_loosez00(((long) 471177483),
				BSTRING_TO_STRING(BGl_string2127z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_iteratez00(((long) 131412196),
				BSTRING_TO_STRING(BGl_string2127z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_cfaz00(((long) 400853773),
				BSTRING_TO_STRING(BGl_string2127z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_setupz00(((long) 168272051),
				BSTRING_TO_STRING(BGl_string2127z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 468997780),
				BSTRING_TO_STRING(BGl_string2127z00zzcfa_vectorz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(((long) 324810621),
				BSTRING_TO_STRING(BGl_string2127z00zzcfa_vectorz00));
		}

	}

#ifdef __cplusplus
}
#endif
